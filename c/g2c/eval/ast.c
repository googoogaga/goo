/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/ast");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/ast */

EXT(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YevalSdependencyYinvalidate_dependents,"eval/dependency","invalidate-dependents");
EXT(YevalSmoduleYmodule_target_environment,"eval/module","module-target-environment");
DEF(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YevalSmoduleYmodule_name_to_relpath,"eval/module","module-name-to-relpath");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
EXT(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
DEF(YevalSastYLfix_letG,"eval/ast","<fix-let>");
DEF(YevalSastYfunction_loop_setter,"eval/ast","function-loop-setter");
EXT(YevalSmoduleYcall_with_subtransaction,"eval/module","call-with-subtransaction");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YevalSmoduleYmodule_loader_stack,"eval/module","module-loader-stack");
DEF(YevalSastYDfab_list_nul,"eval/ast","$fab-list-nul");
EXT(YevalSmoduleYload_module,"eval/module","load-module");
EXT(YevalSmoduleYLmoduleG,"eval/module","<module>");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(YevalSmoduleYmodule_name,"eval/module","module-name");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
DEF(YevalSastYLvariable_definitionG,"eval/ast","<variable-definition>");
DEF(YevalSastYobjectify_locals,"eval/ast","objectify-locals");
DEF(YevalSastYspecial_quote,"eval/ast","special-quote");
DEF(YevalSastYobjectify_assignment_using,"eval/ast","objectify-assignment-using");
DEF(YevalSastYLapplicationG,"eval/ast","<application>");
DEF(YevalSastYreload_macros,"eval/ast","reload-macros");
DEF(YevalSastYobjectify_primitive_definition,"eval/ast","objectify-primitive-definition");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
DEF(YevalSastYfunction_specs,"eval/ast","function-specs");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YevalSmoduleYtransaction_register_dependent,"eval/module","transaction-register-dependent");
EXT(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
DEF(YevalSastYconvert2arguments,"eval/ast","convert2arguments");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
EXT(YevalSmoduleYbinding_freeQ,"eval/module","binding-free?");
EXT(YevalSmoduleYroll_back_transaction,"eval/module","roll-back-transaction");
DYNDEF(YevalSastYTrecord_sourceQT,"eval/ast","*record-source?*");
DEF(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YevalSmoduleYglobal_box_value_setter,"eval/module","global-box-value-setter");
EXT(YevalSmoduleYLnamespace_errorG,"eval/module","<namespace-error>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yerror,"goo/boot","error");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(YevalSmoduleYbinding_locative_setter,"eval/module","binding-locative-setter");
DEF(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
DEF(YevalSastYbinding_index,"eval/ast","binding-index");
DEF(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
DEF(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YLclassG,"goo/boot","<class>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(Yprop_getter,"goo/boot","prop-getter");
DEF(YevalSastYDsexpr_c_expr_tag,"eval/ast","$sexpr-c-expr-tag");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
EXT(YevalSmoduleYmodule_mangled_name_setter,"eval/module","module-mangled-name-setter");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YevalSmoduleYfind_environment_module,"eval/module","find-environment-module");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YevalSmoduleYdo_static_global_bindings,"eval/module","do-static-global-bindings");
DEF(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YevalSmoduleYenvironment_allows_foreign_namesQ,"eval/module","environment-allows-foreign-names?");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
EXT(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YevalSmoduleYbinding_module_name,"eval/module","binding-module-name");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
DEF(YevalSastYfunction_index,"eval/ast","function-index");
DEF(YevalSastYalternative_consequent_setter,"eval/ast","alternative-consequent-setter");
DEF(YevalSastYLreferenceG,"eval/ast","<reference>");
DEF(YevalSastYalternative_alternant_setter,"eval/ast","alternative-alternant-setter");
EXT(YevalSmoduleYinstall_initial_bindings,"eval/module","install-initial-bindings");
DEF(YevalSastYDarguments_nul,"eval/ast","$arguments-nul");
DEF(YevalSastYDsexpr_define_static_syntax_tag,"eval/ast","$sexpr-define-static-syntax-tag");
EXT(YevalSmoduleYLstatic_environmentG,"eval/module","<static-environment>");
DEF(YevalSastYspecial_use_mangle_module,"eval/ast","special-use-mangle-module");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
EXT(YevalSmoduleYenvironment_module,"eval/module","environment-module");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(YevalSmoduleYbinding_freeQ_setter,"eval/module","binding-free?-setter");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YevalSmoduleYmodule_transaction,"eval/module","module-transaction");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
DEF(YevalSastYbind_exit_main_fun_setter,"eval/ast","bind-exit-main-fun-setter");
DEF(YevalSastYobjectify_compile_time,"eval/ast","objectify-compile-time");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
DEF(YevalSastYobjectify_alternative,"eval/ast","objectify-alternative");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(Yhead_setter,"goo/boot","head-setter");
DEF(YevalSastYapplication_loop_setter,"eval/ast","application-loop-setter");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
DEF(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YPfalse,"goo/boot","%false");
EXT(YevalSmoduleYnamespace_error,"eval/module","namespace-error");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
DEF(YevalSastYexpand_bind_list,"eval/ast","expand-bind-list");
DEF(YevalSastYLast_generic_definitionG,"eval/ast","<ast-generic-definition>");
EXT(Yarity_error,"goo/boot","arity-error");
DEF(YevalSastYinit_g2c_boot_environment,"eval/ast","init-g2c-boot-environment");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
DEF(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YevalSmoduleYbinding_mangled_name_setter,"eval/module","binding-mangled-name-setter");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalSmoduleYbinding_inferred_type,"eval/module","binding-inferred-type");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOelt,"goo/boot","@elt");
DEF(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YevalSdependencyYDexpansion_parse_dependency,"eval/dependency","$expansion-parse-dependency");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
DYNEXT(YevalSmoduleYTcurrent_subtransactionT,"eval/module","*current-subtransaction*");
EXT(YgooSmathYN,"goo/math","~");
DEF(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
DEF(YevalSastYDsexpr_compile_time_tag,"eval/ast","$sexpr-compile-time-tag");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
DEF(YevalSastYDsequential_nul,"eval/ast","$sequential-nul");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YevalSdependencyYDoptimizaton_dependencies,"eval/dependency","$optimizaton-dependencies");
DEF(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
DEF(YevalSastYapplication_function_setter,"eval/ast","application-function-setter");
EXT(YevalSmoduleYbinding_name,"eval/module","binding-name");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YevalSdependencyYLdependableG,"eval/dependency","<dependable>");
DEF(YevalSastYobjectify_free_global_reference,"eval/ast","objectify-free-global-reference");
DEF(YevalSastYfix_let_body,"eval/ast","fix-let-body");
DEF(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YevalSmoduleYfind_binding,"eval/module","find-binding");
DEF(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
DEF(YevalSastYinstall_magic_bindings,"eval/ast","install-magic-bindings");
DEF(YevalSastYmaybe_log_dependency,"eval/ast","maybe-log-dependency");
DEF(YevalSastYDsexpr_use_include_tag,"eval/ast","$sexpr-use-include-tag");
DEF(YevalSastYspecial_def,"eval/ast","special-def");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YevalSdependencyYdependency_includes_anyQ,"eval/dependency","dependency-includes-any?");
DEF(YevalSastYobjectify_function,"eval/ast","objectify-function");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(Yas_error,"goo/boot","as-error");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YevalSsyntaxYsexpr_function_definition_adjectives,"eval/syntax","sexpr-function-definition-adjectives");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YLstrG,"goo/boot","<str>");
EXT(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YgooSmacrosY1st,"goo/macros","1st");
DEF(YevalSastYboundQ_default,"eval/ast","bound?-default");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YevalSdependencyYdependency_and,"eval/dependency","dependency-and");
DEF(YevalSastYspecial_define_primitive,"eval/ast","special-define-primitive");
DEF(YevalSastYspecial_quasiquote,"eval/ast","special-quasiquote");
EXT(YLmetG,"goo/boot","<met>");
EXT(YevalSdependencyYdependency_nulQ,"eval/dependency","dependency-nul?");
DEF(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
DEF(YevalSastYspecial_locals,"eval/ast","special-locals");
DEF(YevalSastYspecial_bind_exit,"eval/ast","special-bind-exit");
EXT(YevalSmoduleYbinding_kind_setter,"eval/module","binding-kind-setter");
DEF(YevalSastYsyntax_environment_excluded_bindings,"eval/ast","syntax-environment-excluded-bindings");
EXT(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
EXT(YevalSmoduleYbinding_handler_setter,"eval/module","binding-handler-setter");
EXT(YevalSmoduleYbinding_prop_setter,"eval/module","binding-prop-setter");
DEF(YevalSastYfunction_names,"eval/ast","function-names");
DEF(YevalSastYLmonitorG,"eval/ast","<monitor>");
DEF(YevalSastYspecial_define_constant,"eval/ast","special-define-constant");
EXT(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
DEF(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
DEF(YevalSastYDsexpr_boundQ_tag,"eval/ast","$sexpr-bound?-tag");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YevalSmoduleYtransaction_register_implemented_binding,"eval/module","transaction-register-implemented-binding");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YevalSdependencyYinvalidate_dependent,"eval/dependency","invalidate-dependent");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
EXT(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
EXT(YevalSmoduleYDgoo_boot_module_name,"eval/module","$goo-boot-module-name");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
DEF(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
EXT(Ytype_error,"goo/boot","type-error");
DEF(YevalSastYspecial_define_syntax,"eval/ast","special-define-syntax");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
DEF(YevalSastYbind_exit_lightQ,"eval/ast","bind-exit-light?");
EXT(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
EXT(YevalSsyntaxYDsexpr_propX_tag,"eval/syntax","$sexpr-prop!-tag");
DEF(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
DEF(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YevalSmoduleYmodule_runtime_data,"eval/module","module-runtime-data");
EXT(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
EXT(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
EXT(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
DEF(YevalSastYobjectify_dynamic_definition,"eval/ast","objectify-dynamic-definition");
EXT(YevalSmoduleYLstatic_nul_environmentG,"eval/module","<static-nul-environment>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YevalSmoduleYmodule_uses_c_libraries,"eval/module","module-uses-c-libraries");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
DEF(YevalSastYftype,"eval/ast","ftype");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
DEF(YevalSastYLloopG,"eval/ast","<loop>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
DEF(YevalSastYTmacro_tracingQT,"eval/ast","*macro-tracing?*");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
DEF(YevalSastYbind_exit_lightQ_setter,"eval/ast","bind-exit-light?-setter");
EXT(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
EXT(YevalSdependencyYLdependentG,"eval/dependency","<dependent>");
DEF(YevalSastYmonitor_handler_setter,"eval/ast","monitor-handler-setter");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
DEF(YevalSastYapplication_arguments_setter,"eval/ast","application-arguments-setter");
DEF(YevalSastYinline_refs,"eval/ast","inline-refs");
DEF(YevalSastYDsexpr_use_mangle_module_tag,"eval/ast","$sexpr-use-mangle-module-tag");
DEF(YevalSastYspecial_propX,"eval/ast","special-prop!");
DEF(YevalSastYfunction_ref_count_setter,"eval/ast","function-ref-count-setter");
DEF(YevalSastYspecial_prop,"eval/ast","special-prop");
DEF(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
DEF(YevalSastYc_inline_refs_setter,"eval/ast","c-inline-refs-setter");
DEF(YevalSastYc_inline_strs,"eval/ast","c-inline-strs");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
DEF(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
DEF(YevalSastYc_inline_strs_setter,"eval/ast","c-inline-strs-setter");
DEF(YevalSastYfree_environment,"eval/ast","free-environment");
DEF(YevalSastYspecial_define_dynamic,"eval/ast","special-define-dynamic");
DEF(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
DEF(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YevalSmoduleYreload_modules,"eval/module","reload-modules");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YevalSmoduleYLmodule_loaderG,"eval/module","<module-loader>");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
DEF(YevalSastYfunction_loop,"eval/ast","function-loop");
DEF(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
DEF(YevalSastYloop_bindings,"eval/ast","loop-bindings");
EXT(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
EXT(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YgooSfunctionalYcurry,"goo/functional","curry");
DEF(YevalSastYconstant_value_setter,"eval/ast","constant-value-setter");
EXT(YOall2Q,"goo/boot","@all2?");
DEF(YevalSastYmonitor_info_setter,"eval/ast","monitor-info-setter");
EXT(Yrange_error,"goo/boot","range-error");
DEF(YevalSastYLalternativeG,"eval/ast","<alternative>");
DEF(YevalSastYLlocalsG,"eval/ast","<locals>");
DEF(YevalSastYspecial_c_expr,"eval/ast","special-c-expr");
EXT(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
DEF(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
DEF(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
DEF(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
DEF(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
DEF(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSmathY1_,"goo/math","1-");
DEF(YevalSastYloop_body,"eval/ast","loop-body");
DEF(YevalSastYunwind_protect_cleanup_thunk_setter,"eval/ast","unwind-protect-cleanup-thunk-setter");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
DEF(YevalSastYmonitor_main_thunk_setter,"eval/ast","monitor-main-thunk-setter");
DEF(YevalSastYspecial_define_class,"eval/ast","special-define-class");
DEF(YevalSastYspecial_define,"eval/ast","special-define");
DEF(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");
DEF(YevalSastYobjectify_refs,"eval/ast","objectify-refs");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
DEF(YevalSastYbinding_closed_overQ,"eval/ast","binding-closed-over?");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
DEF(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
EXT(YevalSmoduleYmodule_mangled_name,"eval/module","module-mangled-name");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
DEF(YevalSastYtransform_defs,"eval/ast","transform-defs");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
DEF(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YevalSmoduleYinsert_globalsX,"eval/module","insert-globals!");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
DEF(YevalSastYmagic_bindings,"eval/ast","magic-bindings");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
DEF(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
DEF(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSmathYDe,"goo/math","$e");
DEF(YevalSastYspecial_compile_time_also,"eval/ast","special-compile-time-also");
DEF(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YevalSmoduleYenvironment_module_loader,"eval/module","environment-module-loader");
DEF(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
DEF(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YOdo,"goo/boot","@do");
DEF(YevalSastYspecial_syntax_if,"eval/ast","special-syntax-if");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
DEF(YevalSastYDsexpr_optionals_tag,"eval/ast","$sexpr-optionals-tag");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
DEF(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
EXT(YevalSdependencyYDnul_dependency,"eval/dependency","$nul-dependency");
DEF(YevalSastYobjectify_assignment,"eval/ast","objectify-assignment");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
DEF(YevalSastYobjectify_boundQ,"eval/ast","objectify-bound?");
DEF(YevalSastYDsexpr_use_library_tag,"eval/ast","$sexpr-use-library-tag");
EXT(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
EXT(YevalSmoduleYLstatic_local_environmentG,"eval/module","<static-local-environment>");
DEF(YevalSastYspecial_macro_expand,"eval/ast","special-macro-expand");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YgooStypesYtQ,"goo/types","t?");
DEF(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YevalSmoduleYunchecked_runtime_environment,"eval/module","unchecked-runtime-environment");
EXT(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YevalSdependencyYdependency_includes_allQ,"eval/dependency","dependency-includes-all?");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
DEF(YevalSastYLloop_applicationG,"eval/ast","<loop-application>");
DEF(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YevalSmoduleYbinding_inferred_type_setter,"eval/module","binding-inferred-type-setter");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
DEF(YevalSastYLinline_refsG,"eval/ast","<inline-refs>");
DEF(YevalSastYLlow_letG,"eval/ast","<low-let>");
DEF(YevalSastYr_extendT,"eval/ast","r-extend*");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
DEF(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
DEF(YevalSastYLsimple_ast_errorG,"eval/ast","<simple-ast-error>");
DEF(YevalSastYobjectify_list,"eval/ast","objectify-list");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
DEF(YevalSastYobjectify_definition,"eval/ast","objectify-definition");
DEF(YevalSastYspecial_boundQ,"eval/ast","special-bound?");
DEF(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
DEF(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
DEF(YevalSastYc_inline_refs,"eval/ast","c-inline-refs");
DEF(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
DEF(YevalSastYfunction_kind,"eval/ast","function-kind");
DEF(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
DEF(YevalSastYobjectify_use_library,"eval/ast","objectify-use-library");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
DEF(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
DEF(YevalSastYreference_frame_offset_setter,"eval/ast","reference-frame-offset-setter");
DEF(YevalSastYfunctions,"eval/ast","functions");
EXT(YevalSmoduleYmodule_data_processedQ,"eval/module","module-data-processed?");
EXT(YgooStypesYanyQ,"goo/types","any?");
DEF(YevalSastYdefault_type,"eval/ast","default-type");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
DEF(YevalSastYLc_inlineG,"eval/ast","<c-inline>");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
DEF(YevalSastYapplication_binding_setter,"eval/ast","application-binding-setter");
EXT(YgooSmathYK,"goo/math","|");
DEF(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
DEF(YevalSastYobjectify_generic_definition,"eval/ast","objectify-generic-definition");
DEF(YevalSastYexpand_bind_listT,"eval/ast","expand-bind-list*");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YevalSmoduleYreport_undefined_global_bindings,"eval/module","report-undefined-global-bindings");
EXT(YevalSmoduleYenvironment_next,"eval/module","environment-next");
DEF(YevalSastYassignment_binding_setter,"eval/ast","assignment-binding-setter");
EXT(YevalSmoduleYbinding_type,"eval/module","binding-type");
DEF(YevalSastYDsexpr_c_ment_tag,"eval/ast","$sexpr-c-ment-tag");
EXT(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
EXT(YevalSmoduleYprobe_module,"eval/module","probe-module");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
DEF(YevalSastYinit_g2c_regular_environment,"eval/ast","init-g2c-regular-environment");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YevalSmoduleYframe_bindings,"eval/module","frame-bindings");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
EXT(YevalSmoduleYbinding_kind,"eval/module","binding-kind");
EXT(YOlit,"goo/boot","@lit");
DEF(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
DEF(YevalSastYobjectify_bind_exit,"eval/ast","objectify-bind-exit");
DEF(YevalSastYLast_errorG,"eval/ast","<ast-error>");
DEF(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YevalSmoduleYbinding_prop,"eval/module","binding-prop");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
DEF(YevalSastYspecial_define_static_syntax,"eval/ast","special-define-static-syntax");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmathY_,"goo/math","-");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YOallQ,"goo/boot","@all?");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
EXT(YevalSmoduleYbinding_info,"eval/module","binding-info");
DEF(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YtT,"goo/boot","t*");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YevalSdependencyYfind_dependency,"eval/dependency","find-dependency");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YOpick,"goo/boot","@pick");
DEF(YevalSastYspecial_Praw,"eval/ast","special-%raw");
DEF(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
DEF(YevalSastYDsexpr_optionals_type_name,"eval/ast","$sexpr-optionals-type-name");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
DEF(YevalSastYobjectify_binding,"eval/ast","objectify-binding");
EXT(Yopts_count,"goo/boot","opts-count");
DEF(YevalSastYreference_binding_setter,"eval/ast","reference-binding-setter");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YevalSmoduleYmodule_uses_c_includes,"eval/module","module-uses-c-includes");
DEF(YevalSastYunwind_protect_protected_thunk_setter,"eval/ast","unwind-protect-protected-thunk-setter");
DEF(YevalSastYspecial_iterate,"eval/ast","special-iterate");
DEF(YevalSastYspecial_use_module,"eval/ast","special-use-module");
DEF(YevalSastYspecial_use_library,"eval/ast","special-use-library");
DEF(YevalSastYspecial_if,"eval/ast","special-if");
EXT(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
DEF(YevalSastYfix_let_types,"eval/ast","fix-let-types");
DEF(YevalSastYast_contains_funQ,"eval/ast","ast-contains-fun?");
EXT(YevalSmoduleYbinding_locative,"eval/module","binding-locative");
DEF(YevalSastYapplication_next_methods,"eval/ast","application-next-methods");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
DEF(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
DEF(YevalSastYDinline_refs_nul,"eval/ast","$inline-refs-nul");
EXT(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSmoduleYenvironment_uses_modules,"eval/module","environment-uses-modules");
EXT(YevalSdependencyYlog_dependency,"eval/dependency","log-dependency");
DEF(YevalSastYfab_syntax_environment,"eval/ast","fab-syntax-environment");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YOlst,"goo/boot","@lst");
EXT(YevalSmoduleYbinding_global_box_setter,"eval/module","binding-global-box-setter");
EXT(YevalSmoduleYfind_syntax_environment,"eval/module","find-syntax-environment");
DEF(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
DEF(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
DEF(YevalSastYalternative_condition_setter,"eval/ast","alternative-condition-setter");
DEF(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
DEF(YevalSastYmonitor_type_setter,"eval/ast","monitor-type-setter");
DEF(YevalSastYfunction_ref_count,"eval/ast","function-ref-count");
DEF(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
DEF(YevalSastYPPPmacro,"eval/ast","%%%macro");
EXT(YgooSmacrosYmap,"goo/macros","map");
DEF(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
EXT(YLrepG,"goo/boot","<rep>");
DEF(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
DEF(YevalSastYobjectify_use_include,"eval/ast","objectify-use-include");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
DEF(YevalSastYloop_bindings_setter,"eval/ast","loop-bindings-setter");
EXT(YevalSmoduleYregister_referenced_binding,"eval/module","register-referenced-binding");
DEF(YevalSastYloop_body_setter,"eval/ast","loop-body-setter");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
DEF(YevalSastYmacro_expander,"eval/ast","macro-expander");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooStypesYtE,"goo/types","t=");
DEF(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
DEF(YevalSastYobjectify_application,"eval/ast","objectify-application");
DEF(YevalSastYspecial_export,"eval/ast","special-export");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YevalSmoduleYmodule_uses_c_files,"eval/module","module-uses-c-files");
DEF(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
DEF(YevalSastYc_inline_exprQ,"eval/ast","c-inline-expr?");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
DEF(YevalSastYobjectify_variable_definition,"eval/ast","objectify-variable-definition");
EXT(YLlocG,"goo/boot","<loc>");
DEF(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYneg,"goo/math","neg");
DEF(YevalSastYexpand_pattern,"eval/ast","expand-pattern");
DEF(YevalSastYpairize,"eval/ast","pairize");
DEF(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YevalSdependencyYdetach_dependent,"eval/dependency","detach-dependent");
DEF(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
DEF(YevalSastYcompile_time_program_setter,"eval/ast","compile-time-program-setter");
DEF(YevalSastYobjectify_c_expr,"eval/ast","objectify-c-expr");
EXT(YevalSmoduleYinsert_globalX,"eval/module","insert-global!");
DEF(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
DEF(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
DEF(YevalSastYexpand_syntax_if,"eval/ast","expand-syntax-if");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YevalSmoduleYimport_globalX,"eval/module","import-global!");
DEF(YevalSastYspecial_c_ment,"eval/ast","special-c-ment");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
DEF(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
DEF(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YOmap,"goo/boot","@map");
DEF(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YevalSmoduleYbinding_mangled_name,"eval/module","binding-mangled-name");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
DEF(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Yunion_elts,"goo/boot","union-elts");
DEF(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
DEF(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(Yclass_children,"goo/boot","class-children");
DEF(YevalSastYspecial_let,"eval/ast","special-let");
EXT(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
EXT(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
DEF(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
DEF(YevalSastYDfree_environment_nul,"eval/ast","$free-environment-nul");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
DEF(YevalSastYDsexpr_define_dynamic_tag,"eval/ast","$sexpr-define-dynamic-tag");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
DEF(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YPtnul,"goo/boot","%tnul");
DEF(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
DEF(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YOOnulQ,"goo/boot","@@nul?");
DEF(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YLbignumG,"goo/boot","<bignum>");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooSmathYnegQ,"goo/math","neg?");
DEF(YevalSastYobjectify_use_module,"eval/ast","objectify-use-module");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
DEF(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YevalSmoduleYbinding_native_toQ,"eval/module","binding-native-to?");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
DEF(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
DEF(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YDmax_int,"goo/boot","$max-int");
DEF(YevalSastYLmethod_applicationG,"eval/ast","<method-application>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YevalSmoduleYbinding_global_box,"eval/module","binding-global-box");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YOtup,"goo/boot","@tup");
DEF(YevalSastYDfunctions_nul,"eval/ast","$functions-nul");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
DEF(YevalSastYobjectify_raw,"eval/ast","objectify-raw");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalSmoduleYset_module_environments,"eval/module","set-module-environments");
DEF(YevalSastYapplication_next_methods_setter,"eval/ast","application-next-methods-setter");
EXT(YevalSmoduleYLbindingG,"eval/module","<binding>");
DEF(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
EXT(YevalSmoduleYdo_module_loader_modules,"eval/module","do-module-loader-modules");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
DEF(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
DEF(YevalSastYfunction_arity,"eval/ast","function-arity");
EXT(Yopts_location,"goo/boot","opts-location");
DEF(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
DEF(YevalSastYfunction_display_name,"eval/ast","function-display-name");
DEF(YevalSastYDsexpr_export_tag,"eval/ast","$sexpr-export-tag");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(Yfun_info,"goo/boot","fun-info");
DEF(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YevalSmoduleYmodule_c_forms,"eval/module","module-c-forms");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
EXT(YOcat2,"goo/boot","@cat2");
DEF(YevalSastYspecial_define_method,"eval/ast","special-define-method");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
DEF(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YLpropG,"goo/boot","<prop>");
DEF(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");
DEF(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
DEF(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
DEF(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YevalSmoduleYwalk_bindings,"eval/module","walk-bindings");
DEF(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(YevalSmoduleYLmodule_bindingG,"eval/module","<module-binding>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
DEF(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YevalSmoduleYload_in,"eval/module","load-in");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
DEF(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
DEF(YevalSastYDsexpr_use_module_tag,"eval/ast","$sexpr-use-module-tag");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Ysig_specs,"goo/boot","sig-specs");
DEF(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
DEF(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
DEF(YevalSastYassignment_binding,"eval/ast","assignment-binding");
DEF(YevalSastYprocess_nary_closed_application,"eval/ast","process-nary-closed-application");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(Ynot,"goo/boot","not");
DEF(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(Ysig_val,"goo/boot","sig-val");
DEF(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
DEF(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YevalSmoduleYruntime_environment,"eval/module","runtime-environment");
EXT(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
DEF(YevalSastYobjectify_export,"eval/ast","objectify-export");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
DEF(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
DEF(YevalSastYmodule_binding,"eval/ast","module-binding");
DEF(YevalSastYbinding_reference_class,"eval/ast","binding-reference-class");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLnumG,"goo/boot","<num>");
EXT(YevalSmoduleYbinding_info_setter,"eval/module","binding-info-setter");
DEF(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
DEF(YevalSastYloop_continue,"eval/ast","loop-continue");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YevalSmoduleYenvironment_bindings,"eval/module","environment-bindings");
DEF(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
DEF(YevalSastYast_copy,"eval/ast","ast-copy");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
DEF(YevalSastYobjectify_foreign_reference,"eval/ast","objectify-foreign-reference");
DEF(YevalSastYspecial_set,"eval/ast","special-set");
DEF(YevalSastYsplit_c_inline_vals,"eval/ast","split-c-inline-vals");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
DEF(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
DEF(YevalSastYspecial_use_include,"eval/ast","special-use-include");
DEF(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yprop_type,"goo/boot","prop-type");
DEF(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
DEF(YevalSastYinit_runtime,"eval/ast","init-runtime");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YevalSmoduleYLglobal_boxG,"eval/module","<global-box>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YOrev,"goo/boot","@rev");
EXT(Yfab_sym,"goo/boot","fab-sym");
DEF(YevalSastYLast_function_definitionG,"eval/ast","<ast-function-definition>");
DEF(YevalSastYfunction_signature,"eval/ast","function-signature");
DEF(YevalSastYobjectify_syntax_definition,"eval/ast","objectify-syntax-definition");
DEF(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YevalSmoduleYregister_moduleX,"eval/module","register-module!");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
DEF(YevalSastYregister_magic_binding,"eval/ast","register-magic-binding");
DEF(YevalSastYprogram_line_setter,"eval/ast","program-line-setter");
DEF(YevalSastYarguments,"eval/ast","arguments");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYposQ,"goo/math","pos?");
DEF(YevalSastYLfunctionsG,"eval/ast","<functions>");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
DEF(YevalSastYapplication_loop,"eval/ast","application-loop");
DEF(YevalSastYDsexpr_useSexport_module_tag,"eval/ast","$sexpr-use/export-module-tag");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Yfab_pair,"goo/boot","fab-pair");
DEF(YevalSastYfunction_binding_setter,"eval/ast","function-binding-setter");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YevalSmoduleYdo_named_static_global_bindings,"eval/module","do-named-static-global-bindings");
EXT(YLunionG,"goo/boot","<union>");
DEF(YevalSastYassignment_reference_setter,"eval/ast","assignment-reference-setter");
EXT(YgooSconditionsYread,"goo/conditions","read");
DEF(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YgooScolsSlstYlstT,"goo/cols/lst","lst*");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
DEF(YevalSastYapplication_tailQ_setter,"eval/ast","application-tail?-setter");
DEF(YevalSastYLprogramsG,"eval/ast","<programs>");
DEF(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(Ytype_class,"goo/boot","type-class");
DEF(YevalSastYobjectify_sequential,"eval/ast","objectify-sequential");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
DYNDEF(YevalSastYTcurrent_dependentT,"eval/ast","*current-dependent*");
DEF(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(YevalSsyntaxYDsexpr_define_constant_tag,"eval/syntax","$sexpr-define-constant-tag");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
DEF(YevalSastYassignment_form,"eval/ast","assignment-form");
DEF(YevalSastYfunction_adjectives_setter,"eval/ast","function-adjectives-setter");
DEF(YevalSastYast_macro_expand,"eval/ast","ast-macro-expand");
DEF(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Ysyntax_error,"goo/boot","syntax-error");
DEF(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooSfunYfun_inlineableQ_setter,"goo/fun","fun-inlineable?-setter");
DEF(YevalSastYreference_frame_number_setter,"eval/ast","reference-frame-number-setter");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
DEF(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
DEF(YevalSastYupdate_binding_kind,"eval/ast","update-binding-kind");
EXT(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
DEF(YevalSastYmonitor_test_setter,"eval/ast","monitor-test-setter");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
DEF(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
DEF(YevalSastYspecial_monitor,"eval/ast","special-monitor");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
DEF(YevalSastYfab_list,"eval/ast","fab-list");
DEF(YevalSastYboundQ_default_setter,"eval/ast","bound?-default-setter");
DEF(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
DEF(YevalSastYDsexpr_define_primitive_tag,"eval/ast","$sexpr-define-primitive-tag");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
DEF(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
DEF(YevalSastYspecial_unwind_protect,"eval/ast","special-unwind-protect");
EXT(YevalSmoduleYmodule_referenced_bindings,"eval/module","module-referenced-bindings");
DEF(YevalSastYobjectify_define_property,"eval/ast","objectify-define-property");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
DEF(YevalSastYobjectify_function_definition,"eval/ast","objectify-function-definition");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YevalSmoduleYbinding_handler,"eval/module","binding-handler");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YevalSdependencyYDvalue_optimization_dependency,"eval/dependency","$value-optimization-dependency");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(Ylst,"goo/boot","lst");
EXT(YLchrG,"goo/boot","<chr>");
DEF(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
DEF(YevalSastYc_inline_exprQ_setter,"eval/ast","c-inline-expr?-setter");
DEF(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooSmathYLL,"goo/math","<<");
DEF(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
DEF(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
DEF(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
DEF(YevalSastYobjectify_function_source,"eval/ast","objectify-function-source");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
DEF(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
DEF(YevalSastYDsexpr_Praw_tag,"eval/ast","$sexpr-%raw-tag");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
DEF(YevalSastYobjectify_use_mangle_module,"eval/ast","objectify-use-mangle-module");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
DEF(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSmoduleYfab_static_global_environment,"eval/module","fab-static-global-environment");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
DEF(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
DEF(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YevalSmoduleYenv_object_name,"eval/module","env-object-name");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YLmagG,"goo/boot","<mag>");
DEF(YevalSastYobjectify_useSexport_module,"eval/ast","objectify-use/export-module");
EXT(YgooSmathYatan,"goo/math","atan");
DEF(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(YevalSastYLast_method_definitionG,"eval/ast","<ast-method-definition>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
DEF(YevalSastYobjectify,"eval/ast","objectify");
EXT(YgooSfunYfun_inlineableQ,"goo/fun","fun-inlineable?");
DEF(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YevalSmoduleYruntime_module,"eval/module","runtime-module");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YOnew,"goo/boot","@new");
DEF(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
EXT(YevalSmoduleYzap_referenced_bindingsX,"eval/module","zap-referenced-bindings!");
EXT(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
EXT(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
EXT(YevalSmoduleYexport_bindingX,"eval/module","export-binding!");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YOanyQ,"goo/boot","@any?");
DEF(YevalSastYsequential,"eval/ast","sequential");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YevalSdependencyYdependency_or,"eval/dependency","dependency-or");
DEF(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
DEF(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
DEF(YevalSastYDsexpr_compile_time_also_tag,"eval/ast","$sexpr-compile-time-also-tag");
DEF(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
DEF(YevalSastYobjectify_monitor,"eval/ast","objectify-monitor");
EXT(YevalSdependencyYDname_parse_dependency,"eval/dependency","$name-parse-dependency");
DEF(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YevalSdependencyYLdependency_typeG,"eval/dependency","<dependency-type>");
DEF(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YevalSmoduleYmodule_data_processedQ_setter,"eval/module","module-data-processed?-setter");
EXT(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
EXT(YevalSdependencyYDparse_dependencies,"eval/dependency","$parse-dependencies");
EXT(YevalSmoduleYfind_static_global_environment,"eval/module","find-static-global-environment");
DEF(YevalSastYincf_ref_count,"eval/ast","incf-ref-count");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
DEF(YevalSastYobjectify_symbol,"eval/ast","objectify-symbol");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
DEF(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
DEF(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YLboxG,"goo/boot","<box>");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
DEF(YevalSastYspecial_useSexport_module,"eval/ast","special-use/export-module");
EXT(YevalSmoduleYLstatic_global_environmentG,"eval/module","<static-global-environment>");
DEF(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YevalSmoduleYLbinding_nameG,"eval/module","<binding-name>");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YevalSmoduleYmodule_syntax_environment,"eval/module","module-syntax-environment");
EXT(YgooSmathYsinh,"goo/math","sinh");
DEF(YevalSastYforeign_nameQ,"eval/ast","foreign-name?");
EXT(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YevalSdependencyYDall_dependency_types,"eval/dependency","$all-dependency-types");
DEF(YevalSastYfunction_inlineableQ,"eval/ast","function-inlineable?");
EXT(YevalSmoduleYmodule_mangled_string_name,"eval/module","module-mangled-string-name");
DEF(YevalSastYbinding_closed_overQ_setter,"eval/ast","binding-closed-over?-setter");
EXT(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
DEF(YevalSastYobjectify_method_definition,"eval/ast","objectify-method-definition");
EXT(YgooSmathYevenQ,"goo/math","even?");
DEF(YevalSastYloop_continue_setter,"eval/ast","loop-continue-setter");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(Yprop_setter,"goo/boot","prop-setter");
DEF(YevalSastYcompute_local_reference_offsets,"eval/ast","compute-local-reference-offsets");
DEF(YevalSastYobjectify_function_using,"eval/ast","objectify-function-using");
DEF(YevalSastYLast_methodG,"eval/ast","<ast-method>");
DEF(YevalSastYinstall_interpreter_hacks,"eval/ast","install-interpreter-hacks");
EXT(YgooSmathYfloorS,"goo/math","floor/");
DEF(YevalSastYboundQ_reference_setter,"eval/ast","bound?-reference-setter");
EXT(YPtrue,"goo/boot","%true");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YLlogG,"goo/boot","<log>");
DEF(YevalSastYbinding_mutableQ_setter,"eval/ast","binding-mutable?-setter");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YevalSmoduleYbinding_module,"eval/module","binding-module");
DEF(YevalSastYprogram_line,"eval/ast","program-line");
DEF(YevalSastYTmagic_bindingsT,"eval/ast","*magic-bindings*");
DEF(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YevalSmoduleYmodule_mangled_string_name_setter,"eval/module","module-mangled-string-name-setter");
DEF(YevalSastYobjectify_unwind_protect,"eval/ast","objectify-unwind-protect");
DEF(YevalSastYLpredefined_referenceG,"eval/ast","<predefined-reference>");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Ytype_object,"goo/boot","type-object");
DEF(YevalSastYobjectify_c_inline,"eval/ast","objectify-c-inline");
DEF(YevalSastYspecial_method,"eval/ast","special-method");
EXT(YOfold,"goo/boot","@fold");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSmoduleYbinding_type_setter,"eval/module","binding-type-setter");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
DEF(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YgooSlogYE,"goo/log","=");
EXT(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
EXT(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(Yunexec,"goo/boot","unexec");
DYNEXT(YevalSmoduleYTdynamic_compilationQT,"eval/module","*dynamic-compilation?*");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YevalSmoduleYfab_subset_environment,"eval/module","fab-subset-environment");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmacrosYcat,"goo/macros","cat");
DEF(YevalSastYspecial_define_function,"eval/ast","special-define-function");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
EXT(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
DEF(YevalSastYexpand_bind_element,"eval/ast","expand-bind-element");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Ynew,"goo/boot","new");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(YevalSmoduleYmodule_runtime_data_setter,"eval/module","module-runtime-data-setter");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YevalSmoduleYremove_modules_by_nameX,"eval/module","remove-modules-by-name!");
DEF(YevalSastYas_lst,"eval/ast","as-lst");
DEF(YevalSastYspecial_compile_time,"eval/ast","special-compile-time");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YevalSmoduleYglobal_box_value,"eval/module","global-box-value");
EXT(YevalSmoduleYruntime_module_loader,"eval/module","runtime-module-loader");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YevalSmoduleYimport_and_mangle_globalX,"eval/module","import-and-mangle-global!");
DEF(YevalSastYspecial_begin,"eval/ast","special-begin");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
DEF(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
DEF(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YevalSmoduleYmodule_exports,"eval/module","module-exports");
EXT(YevalSmoduleYensure_module_data,"eval/module","ensure-module-data");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooSmathYGG,"goo/math",">>");
DEF(YevalSastYspecial_define_generic,"eval/ast","special-define-generic");
EXT(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YevalSmoduleYmodule_loader_module_type,"eval/module","module-loader-module-type");
DEF(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
DEF(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
DEF(YevalSastYfunction_binding,"eval/ast","function-binding");
DEF(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsScolYadd,"goo/cols/col","add");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_791);
DEFLIT(lit_734);
DEFLIT(lit_404);
DEFLIT(lit_797);
DEFLIT(lit_763);
DEFLIT(lit_561);
DEFLIT(lit_665);
DEFLIT(lit_807);
DEFLIT(lit_392);
DEFLIT(lit_764);
DEFLIT(lit_841);
DEFLIT(lit_799);
DEFLIT(lit_128);
DEFLIT(lit_189);
DEFLIT(lit_417);
DEFLIT(lit_723);
DEFLIT(lit_52);
DEFLIT(lit_72);
DEFLIT(lit_286);
DEFLIT(lit_548);
DEFLIT(lit_414);
DEFLIT(lit_337);
DEFLIT(lit_543);
DEFLIT(lit_22);
DEFLIT(lit_298);
DEFLIT(lit_27);
DEFLIT(lit_115);
DEFLIT(lit_293);
DEFLIT(lit_207);
DEFLIT(lit_277);
DEFLIT(lit_593);
DEFLIT(lit_150);
DEFLIT(lit_744);
DEFLIT(lit_739);
DEFLIT(lit_310);
DEFLIT(lit_390);
DEFLIT(lit_527);
DEFLIT(lit_206);
DEFLIT(lit_449);
DEFLIT(lit_73);
DEFLIT(lit_649);
DEFLIT(lit_623);
DEFLIT(lit_823);
DEFLIT(lit_809);
DEFLIT(lit_95);
DEFLIT(lit_369);
DEFLIT(lit_664);
DEFLIT(lit_183);
DEFLIT(lit_847);
DEFLIT(lit_205);
DEFLIT(lit_762);
DEFLIT(lit_257);
DEFLIT(lit_774);
DEFLIT(lit_479);
DEFLIT(lit_644);
DEFLIT(lit_532);
DEFLIT(lit_666);
DEFLIT(lit_199);
DEFLIT(lit_357);
DEFLIT(lit_376);
DEFLIT(lit_465);
DEFLIT(lit_676);
DEFLIT(lit_822);
DEFLIT(lit_618);
DEFLIT(lit_343);
DEFLIT(lit_168);
DEFLIT(lit_309);
DEFLIT(lit_69);
DEFLIT(lit_104);
DEFLIT(lit_613);
DEFLIT(lit_514);
DEFLIT(lit_101);
DEFLIT(lit_732);
DEFLIT(lit_7);
DEFLIT(lit_554);
DEFLIT(lit_276);
DEFLIT(lit_515);
DEFLIT(lit_303);
DEFLIT(lit_640);
DEFLIT(lit_372);
DEFLIT(lit_87);
DEFLIT(lit_429);
DEFLIT(lit_186);
DEFLIT(lit_838);
DEFLIT(lit_234);
DEFLIT(lit_490);
DEFLIT(lit_830);
DEFLIT(lit_813);
DEFLIT(lit_457);
DEFLIT(lit_710);
DEFLIT(lit_758);
DEFLIT(lit_645);
DEFLIT(lit_434);
DEFLIT(lit_754);
DEFLIT(lit_466);
DEFLIT(lit_129);
DEFLIT(lit_0);
DEFLIT(lit_55);
DEFLIT(lit_615);
DEFLIT(lit_679);
DEFLIT(lit_753);
DEFLIT(lit_389);
DEFLIT(lit_380);
DEFLIT(lit_487);
DEFLIT(lit_825);
DEFLIT(lit_68);
DEFLIT(lit_587);
DEFLIT(lit_785);
DEFLIT(lit_350);
DEFLIT(lit_687);
DEFLIT(lit_528);
DEFLIT(lit_425);
DEFLIT(lit_108);
DEFLIT(lit_539);
DEFLIT(lit_269);
DEFLIT(lit_731);
DEFLIT(lit_96);
DEFLIT(lit_646);
DEFLIT(lit_266);
DEFLIT(lit_663);
DEFLIT(lit_546);
DEFLIT(lit_105);
DEFLIT(lit_393);
DEFLIT(lit_120);
DEFLIT(lit_713);
DEFLIT(lit_400);
DEFLIT(lit_685);
DEFLIT(lit_364);
DEFLIT(lit_700);
DEFLIT(lit_124);
DEFLIT(lit_749);
DEFLIT(lit_773);
DEFLIT(lit_488);
DEFLIT(lit_145);
DEFLIT(lit_6);
DEFLIT(lit_496);
DEFLIT(lit_274);
DEFLIT(lit_272);
DEFLIT(lit_217);
DEFLIT(lit_439);
DEFLIT(lit_599);
DEFLIT(lit_468);
DEFLIT(lit_833);
DEFLIT(lit_657);
DEFLIT(lit_584);
DEFLIT(lit_741);
DEFLIT(lit_520);
DEFLIT(lit_263);
DEFLIT(lit_508);
DEFLIT(lit_816);
DEFLIT(lit_331);
DEFLIT(lit_542);
DEFLIT(lit_163);
DEFLIT(lit_460);
DEFLIT(lit_338);
DEFLIT(lit_820);
DEFLIT(lit_518);
DEFLIT(lit_216);
DEFLIT(lit_251);
DEFLIT(lit_267);
DEFLIT(lit_179);
DEFLIT(lit_21);
DEFLIT(lit_197);
DEFLIT(lit_28);
DEFLIT(lit_798);
DEFLIT(lit_339);
DEFLIT(lit_135);
DEFLIT(lit_521);
DEFLIT(lit_4);
DEFLIT(lit_223);
DEFLIT(lit_82);
DEFLIT(lit_474);
DEFLIT(lit_220);
DEFLIT(lit_202);
DEFLIT(lit_360);
DEFLIT(lit_140);
DEFLIT(lit_777);
DEFLIT(lit_486);
DEFLIT(lit_489);
DEFLIT(lit_495);
DEFLIT(lit_605);
DEFLIT(lit_821);
DEFLIT(lit_381);
DEFLIT(lit_845);
DEFLIT(lit_436);
DEFLIT(lit_367);
DEFLIT(lit_483);
DEFLIT(lit_458);
DEFLIT(lit_230);
DEFLIT(lit_85);
DEFLIT(lit_477);
DEFLIT(lit_724);
DEFLIT(lit_562);
DEFLIT(lit_160);
DEFLIT(lit_305);
DEFLIT(lit_198);
DEFLIT(lit_259);
DEFLIT(lit_643);
DEFLIT(lit_385);
DEFLIT(lit_686);
DEFLIT(lit_239);
DEFLIT(lit_770);
DEFLIT(lit_448);
DEFLIT(lit_300);
DEFLIT(lit_538);
DEFLIT(lit_761);
DEFLIT(lit_596);
DEFLIT(lit_119);
DEFLIT(lit_697);
DEFLIT(lit_201);
DEFLIT(lit_595);
DEFLIT(lit_116);
DEFLIT(lit_184);
DEFLIT(lit_430);
DEFLIT(lit_227);
DEFLIT(lit_51);
DEFLIT(lit_707);
DEFLIT(lit_614);
DEFLIT(lit_547);
DEFLIT(lit_812);
DEFLIT(lit_415);
DEFLIT(lit_419);
DEFLIT(lit_839);
DEFLIT(lit_313);
DEFLIT(lit_828);
DEFLIT(lit_50);
DEFLIT(lit_246);
DEFLIT(lit_23);
DEFLIT(lit_725);
DEFLIT(lit_98);
DEFLIT(lit_805);
DEFLIT(lit_691);
DEFLIT(lit_112);
DEFLIT(lit_316);
DEFLIT(lit_200);
DEFLIT(lit_411);
DEFLIT(lit_289);
DEFLIT(lit_148);
DEFLIT(lit_412);
DEFLIT(lit_573);
DEFLIT(lit_131);
DEFLIT(lit_559);
DEFLIT(lit_32);
DEFLIT(lit_427);
DEFLIT(lit_25);
DEFLIT(lit_529);
DEFLIT(lit_654);
DEFLIT(lit_684);
DEFLIT(lit_583);
DEFLIT(lit_497);
DEFLIT(lit_102);
DEFLIT(lit_397);
DEFLIT(lit_788);
DEFLIT(lit_499);
DEFLIT(lit_139);
DEFLIT(lit_662);
DEFLIT(lit_353);
DEFLIT(lit_97);
DEFLIT(lit_740);
DEFLIT(lit_524);
DEFLIT(lit_65);
DEFLIT(lit_122);
DEFLIT(lit_320);
DEFLIT(lit_326);
DEFLIT(lit_594);
DEFLIT(lit_481);
DEFLIT(lit_610);
DEFLIT(lit_15);
DEFLIT(lit_398);
DEFLIT(lit_475);
DEFLIT(lit_592);
DEFLIT(lit_698);
DEFLIT(lit_262);
DEFLIT(lit_363);
DEFLIT(lit_193);
DEFLIT(lit_238);
DEFLIT(lit_166);
DEFLIT(lit_796);
DEFLIT(lit_441);
DEFLIT(lit_224);
DEFLIT(lit_235);
DEFLIT(lit_157);
DEFLIT(lit_575);
DEFLIT(lit_630);
DEFLIT(lit_2);
DEFLIT(lit_9);
DEFLIT(lit_154);
DEFLIT(lit_781);
DEFLIT(lit_794);
DEFLIT(lit_16);
DEFLIT(lit_308);
DEFLIT(lit_819);
DEFLIT(lit_379);
DEFLIT(lit_136);
DEFLIT(lit_622);
DEFLIT(lit_526);
DEFLIT(lit_621);
DEFLIT(lit_711);
DEFLIT(lit_672);
DEFLIT(lit_245);
DEFLIT(lit_836);
DEFLIT(lit_512);
DEFLIT(lit_811);
DEFLIT(lit_530);
DEFLIT(lit_164);
DEFLIT(lit_321);
DEFLIT(lit_783);
DEFLIT(lit_395);
DEFLIT(lit_356);
DEFLIT(lit_432);
DEFLIT(lit_332);
DEFLIT(lit_716);
DEFLIT(lit_333);
DEFLIT(lit_366);
DEFLIT(lit_570);
DEFLIT(lit_511);
DEFLIT(lit_424);
DEFLIT(lit_258);
DEFLIT(lit_702);
DEFLIT(lit_312);
DEFLIT(lit_722);
DEFLIT(lit_387);
DEFLIT(lit_66);
DEFLIT(lit_386);
DEFLIT(lit_728);
DEFLIT(lit_638);
DEFLIT(lit_421);
DEFLIT(lit_659);
DEFLIT(lit_565);
DEFLIT(lit_818);
DEFLIT(lit_107);
DEFLIT(lit_242);
DEFLIT(lit_275);
DEFLIT(lit_748);
DEFLIT(lit_778);
DEFLIT(lit_103);
DEFLIT(lit_161);
DEFLIT(lit_612);
DEFLIT(lit_504);
DEFLIT(lit_187);
DEFLIT(lit_580);
DEFLIT(lit_118);
DEFLIT(lit_766);
DEFLIT(lit_435);
DEFLIT(lit_181);
DEFLIT(lit_147);
DEFLIT(lit_143);
DEFLIT(lit_804);
DEFLIT(lit_641);
DEFLIT(lit_195);
DEFLIT(lit_409);
DEFLIT(lit_144);
DEFLIT(lit_453);
DEFLIT(lit_733);
DEFLIT(lit_182);
DEFLIT(lit_560);
DEFLIT(lit_130);
DEFLIT(lit_56);
DEFLIT(lit_420);
DEFLIT(lit_756);
DEFLIT(lit_544);
DEFLIT(lit_248);
DEFLIT(lit_391);
DEFLIT(lit_365);
DEFLIT(lit_70);
DEFLIT(lit_327);
DEFLIT(lit_170);
DEFLIT(lit_701);
DEFLIT(lit_249);
DEFLIT(lit_661);
DEFLIT(lit_63);
DEFLIT(lit_167);
DEFLIT(lit_265);
DEFLIT(lit_317);
DEFLIT(lit_47);
DEFLIT(lit_600);
DEFLIT(lit_375);
DEFLIT(lit_141);
DEFLIT(lit_41);
DEFLIT(lit_469);
DEFLIT(lit_690);
DEFLIT(lit_340);
DEFLIT(lit_37);
DEFLIT(lit_660);
DEFLIT(lit_689);
DEFLIT(lit_177);
DEFLIT(lit_194);
DEFLIT(lit_336);
DEFLIT(lit_138);
DEFLIT(lit_382);
DEFLIT(lit_450);
DEFLIT(lit_704);
DEFLIT(lit_279);
DEFLIT(lit_213);
DEFLIT(lit_151);
DEFLIT(lit_354);
DEFLIT(lit_346);
DEFLIT(lit_491);
DEFLIT(lit_747);
DEFLIT(lit_94);
DEFLIT(lit_703);
DEFLIT(lit_534);
DEFLIT(lit_155);
DEFLIT(lit_817);
DEFLIT(lit_297);
DEFLIT(lit_348);
DEFLIT(lit_667);
DEFLIT(lit_20);
DEFLIT(lit_454);
DEFLIT(lit_484);
DEFLIT(lit_42);
DEFLIT(lit_345);
DEFLIT(lit_680);
DEFLIT(lit_779);
DEFLIT(lit_158);
DEFLIT(lit_322);
DEFLIT(lit_292);
DEFLIT(lit_39);
DEFLIT(lit_252);
DEFLIT(lit_545);
DEFLIT(lit_829);
DEFLIT(lit_49);
DEFLIT(lit_71);
DEFLIT(lit_323);
DEFLIT(lit_89);
DEFLIT(lit_174);
DEFLIT(lit_462);
DEFLIT(lit_668);
DEFLIT(lit_335);
DEFLIT(lit_759);
DEFLIT(lit_502);
DEFLIT(lit_444);
DEFLIT(lit_639);
DEFLIT(lit_296);
DEFLIT(lit_413);
DEFLIT(lit_34);
DEFLIT(lit_291);
DEFLIT(lit_254);
DEFLIT(lit_712);
DEFLIT(lit_571);
DEFLIT(lit_388);
DEFLIT(lit_93);
DEFLIT(lit_730);
DEFLIT(lit_494);
DEFLIT(lit_642);
DEFLIT(lit_810);
DEFLIT(lit_447);
DEFLIT(lit_244);
DEFLIT(lit_301);
DEFLIT(lit_581);
DEFLIT(lit_90);
DEFLIT(lit_75);
DEFLIT(lit_837);
DEFLIT(lit_374);
DEFLIT(lit_311);
DEFLIT(lit_765);
DEFLIT(lit_302);
DEFLIT(lit_407);
DEFLIT(lit_18);
DEFLIT(lit_285);
DEFLIT(lit_416);
DEFLIT(lit_306);
DEFLIT(lit_341);
DEFLIT(lit_67);
DEFLIT(lit_631);
DEFLIT(lit_608);
DEFLIT(lit_708);
DEFLIT(lit_760);
DEFLIT(lit_33);
DEFLIT(lit_437);
DEFLIT(lit_231);
DEFLIT(lit_36);
DEFLIT(lit_720);
DEFLIT(lit_507);
DEFLIT(lit_505);
DEFLIT(lit_492);
DEFLIT(lit_180);
DEFLIT(lit_260);
DEFLIT(lit_394);
DEFLIT(lit_603);
DEFLIT(lit_717);
DEFLIT(lit_8);
DEFLIT(lit_738);
DEFLIT(lit_59);
DEFLIT(lit_677);
DEFLIT(lit_255);
DEFLIT(lit_401);
DEFLIT(lit_426);
DEFLIT(lit_675);
DEFLIT(lit_627);
DEFLIT(lit_696);
DEFLIT(lit_423);
DEFLIT(lit_132);
DEFLIT(lit_769);
DEFLIT(lit_428);
DEFLIT(lit_461);
DEFLIT(lit_212);
DEFLIT(lit_319);
DEFLIT(lit_616);
DEFLIT(lit_576);
DEFLIT(lit_48);
DEFLIT(lit_91);
DEFLIT(lit_362);
DEFLIT(lit_598);
DEFLIT(lit_77);
DEFLIT(lit_352);
DEFLIT(lit_790);
DEFLIT(lit_609);
DEFLIT(lit_359);
DEFLIT(lit_531);
DEFLIT(lit_648);
DEFLIT(lit_218);
DEFLIT(lit_814);
DEFLIT(lit_271);
DEFLIT(lit_768);
DEFLIT(lit_555);
DEFLIT(lit_215);
DEFLIT(lit_800);
DEFLIT(lit_647);
DEFLIT(lit_264);
DEFLIT(lit_473);
DEFLIT(lit_585);
DEFLIT(lit_506);
DEFLIT(lit_106);
DEFLIT(lit_261);
DEFLIT(lit_329);
DEFLIT(lit_422);
DEFLIT(lit_500);
DEFLIT(lit_824);
DEFLIT(lit_564);
DEFLIT(lit_673);
DEFLIT(lit_203);
DEFLIT(lit_493);
DEFLIT(lit_478);
DEFLIT(lit_431);
DEFLIT(lit_574);
DEFLIT(lit_802);
DEFLIT(lit_192);
DEFLIT(lit_88);
DEFLIT(lit_535);
DEFLIT(lit_294);
DEFLIT(lit_211);
DEFLIT(lit_683);
DEFLIT(lit_843);
DEFLIT(lit_795);
DEFLIT(lit_62);
DEFLIT(lit_175);
DEFLIT(lit_410);
DEFLIT(lit_191);
DEFLIT(lit_569);
DEFLIT(lit_126);
DEFLIT(lit_324);
DEFLIT(lit_378);
DEFLIT(lit_655);
DEFLIT(lit_485);
DEFLIT(lit_782);
DEFLIT(lit_125);
DEFLIT(lit_26);
DEFLIT(lit_45);
DEFLIT(lit_669);
DEFLIT(lit_775);
DEFLIT(lit_43);
DEFLIT(lit_637);
DEFLIT(lit_109);
DEFLIT(lit_268);
DEFLIT(lit_19);
DEFLIT(lit_617);
DEFLIT(lit_745);
DEFLIT(lit_358);
DEFLIT(lit_35);
DEFLIT(lit_650);
DEFLIT(lit_467);
DEFLIT(lit_597);
DEFLIT(lit_509);
DEFLIT(lit_80);
DEFLIT(lit_446);
DEFLIT(lit_674);
DEFLIT(lit_153);
DEFLIT(lit_557);
DEFLIT(lit_295);
DEFLIT(lit_228);
DEFLIT(lit_471);
DEFLIT(lit_114);
DEFLIT(lit_551);
DEFLIT(lit_334);
DEFLIT(lit_225);
DEFLIT(lit_40);
DEFLIT(lit_729);
DEFLIT(lit_590);
DEFLIT(lit_111);
DEFLIT(lit_290);
DEFLIT(lit_656);
DEFLIT(lit_402);
DEFLIT(lit_3);
DEFLIT(lit_558);
DEFLIT(lit_541);
DEFLIT(lit_519);
DEFLIT(lit_767);
DEFLIT(lit_835);
DEFLIT(lit_185);
DEFLIT(lit_567);
DEFLIT(lit_699);
DEFLIT(lit_127);
DEFLIT(lit_284);
DEFLIT(lit_273);
DEFLIT(lit_553);
DEFLIT(lit_30);
DEFLIT(lit_620);
DEFLIT(lit_210);
DEFLIT(lit_361);
DEFLIT(lit_314);
DEFLIT(lit_178);
DEFLIT(lit_476);
DEFLIT(lit_719);
DEFLIT(lit_406);
DEFLIT(lit_694);
DEFLIT(lit_226);
DEFLIT(lit_522);
DEFLIT(lit_287);
DEFLIT(lit_692);
DEFLIT(lit_222);
DEFLIT(lit_384);
DEFLIT(lit_214);
DEFLIT(lit_14);
DEFLIT(lit_670);
DEFLIT(lit_61);
DEFLIT(lit_784);
DEFLIT(lit_808);
DEFLIT(lit_803);
DEFLIT(lit_552);
DEFLIT(lit_299);
DEFLIT(lit_232);
DEFLIT(lit_351);
DEFLIT(lit_513);
DEFLIT(lit_482);
DEFLIT(lit_13);
DEFLIT(lit_44);
DEFLIT(lit_318);
DEFLIT(lit_221);
DEFLIT(lit_751);
DEFLIT(lit_396);
DEFLIT(lit_100);
DEFLIT(lit_742);
DEFLIT(lit_370);
DEFLIT(lit_445);
DEFLIT(lit_588);
DEFLIT(lit_81);
DEFLIT(lit_54);
DEFLIT(lit_801);
DEFLIT(lit_171);
DEFLIT(lit_371);
DEFLIT(lit_619);
DEFLIT(lit_568);
DEFLIT(lit_288);
DEFLIT(lit_12);
DEFLIT(lit_438);
DEFLIT(lit_440);
DEFLIT(lit_693);
DEFLIT(lit_209);
DEFLIT(lit_726);
DEFLIT(lit_503);
DEFLIT(lit_165);
DEFLIT(lit_121);
DEFLIT(lit_472);
DEFLIT(lit_229);
DEFLIT(lit_137);
DEFLIT(lit_792);
DEFLIT(lit_134);
DEFLIT(lit_190);
DEFLIT(lit_772);
DEFLIT(lit_451);
DEFLIT(lit_840);
DEFLIT(lit_709);
DEFLIT(lit_715);
DEFLIT(lit_737);
DEFLIT(lit_678);
DEFLIT(lit_550);
DEFLIT(lit_31);
DEFLIT(lit_586);
DEFLIT(lit_349);
DEFLIT(lit_827);
DEFLIT(lit_789);
DEFLIT(lit_516);
DEFLIT(lit_842);
DEFLIT(lit_152);
DEFLIT(lit_418);
DEFLIT(lit_846);
DEFLIT(lit_270);
DEFLIT(lit_463);
DEFLIT(lit_383);
DEFLIT(lit_750);
DEFLIT(lit_123);
DEFLIT(lit_243);
DEFLIT(lit_344);
DEFLIT(lit_651);
DEFLIT(lit_240);
DEFLIT(lit_162);
DEFLIT(lit_636);
DEFLIT(lit_624);
DEFLIT(lit_755);
DEFLIT(lit_159);
DEFLIT(lit_721);
DEFLIT(lit_517);
DEFLIT(lit_433);
DEFLIT(lit_806);
DEFLIT(lit_328);
DEFLIT(lit_480);
DEFLIT(lit_330);
DEFLIT(lit_718);
DEFLIT(lit_736);
DEFLIT(lit_236);
DEFLIT(lit_834);
DEFLIT(lit_625);
DEFLIT(lit_752);
DEFLIT(lit_459);
DEFLIT(lit_578);
DEFLIT(lit_735);
DEFLIT(lit_591);
DEFLIT(lit_705);
DEFLIT(lit_793);
DEFLIT(lit_757);
DEFLIT(lit_10);
DEFLIT(lit_831);
DEFLIT(lit_57);
DEFLIT(lit_29);
DEFLIT(lit_237);
DEFLIT(lit_832);
DEFLIT(lit_540);
DEFLIT(lit_714);
DEFLIT(lit_342);
DEFLIT(lit_629);
DEFLIT(lit_256);
DEFLIT(lit_156);
DEFLIT(lit_233);
DEFLIT(lit_325);
DEFLIT(lit_64);
DEFLIT(lit_658);
DEFLIT(lit_78);
DEFLIT(lit_556);
DEFLIT(lit_815);
DEFLIT(lit_582);
DEFLIT(lit_373);
DEFLIT(lit_536);
DEFLIT(lit_208);
DEFLIT(lit_628);
DEFLIT(lit_110);
DEFLIT(lit_776);
DEFLIT(lit_464);
DEFLIT(lit_278);
DEFLIT(lit_634);
DEFLIT(lit_142);
DEFLIT(lit_86);
DEFLIT(lit_652);
DEFLIT(lit_60);
DEFLIT(lit_196);
DEFLIT(lit_99);
DEFLIT(lit_368);
DEFLIT(lit_117);
DEFLIT(lit_653);
DEFLIT(lit_149);
DEFLIT(lit_537);
DEFLIT(lit_281);
DEFLIT(lit_455);
DEFLIT(lit_408);
DEFLIT(lit_83);
DEFLIT(lit_626);
DEFLIT(lit_253);
DEFLIT(lit_17);
DEFLIT(lit_11);
DEFLIT(lit_688);
DEFLIT(lit_743);
DEFLIT(lit_250);
DEFLIT(lit_1);
DEFLIT(lit_280);
DEFLIT(lit_787);
DEFLIT(lit_501);
DEFLIT(lit_771);
DEFLIT(lit_172);
DEFLIT(lit_682);
DEFLIT(lit_549);
DEFLIT(lit_76);
DEFLIT(lit_706);
DEFLIT(lit_173);
DEFLIT(lit_671);
DEFLIT(lit_844);
DEFLIT(lit_602);
DEFLIT(lit_146);
DEFLIT(lit_566);
DEFLIT(lit_442);
DEFLIT(lit_563);
DEFLIT(lit_53);
DEFLIT(lit_523);
DEFLIT(lit_188);
DEFLIT(lit_635);
DEFLIT(lit_579);
DEFLIT(lit_607);
DEFLIT(lit_84);
DEFLIT(lit_786);
DEFLIT(lit_681);
DEFLIT(lit_780);
DEFLIT(lit_5);
DEFLIT(lit_399);
DEFLIT(lit_247);
DEFLIT(lit_632);
DEFLIT(lit_355);
DEFLIT(lit_826);
DEFLIT(lit_498);
DEFLIT(lit_169);
DEFLIT(lit_282);
DEFLIT(lit_74);
DEFLIT(lit_470);
DEFLIT(lit_589);
DEFLIT(lit_46);
DEFLIT(lit_727);
DEFLIT(lit_79);
DEFLIT(lit_443);
DEFLIT(lit_176);
DEFLIT(lit_24);
DEFLIT(lit_525);
DEFLIT(lit_113);
DEFLIT(lit_405);
DEFLIT(lit_307);
DEFLIT(lit_633);
DEFLIT(lit_283);
DEFLIT(lit_92);
DEFLIT(lit_533);
DEFLIT(lit_315);
DEFLIT(lit_452);
DEFLIT(lit_304);
DEFLIT(lit_241);
DEFLIT(lit_377);
DEFLIT(lit_601);
DEFLIT(lit_58);
DEFLIT(lit_611);
DEFLIT(lit_133);
DEFLIT(lit_403);
DEFLIT(lit_38);
DEFLIT(lit_746);
DEFLIT(lit_204);
DEFLIT(lit_695);
DEFLIT(lit_510);
DEFLIT(lit_604);
DEFLIT(lit_606);
DEFLIT(lit_572);
DEFLIT(lit_456);
DEFLIT(lit_577);
DEFLIT(lit_219);
DEFLIT(lit_347);

/* FUNCTIONS: */

LOCFOR(fun_x_1498_0);
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
LOCFOR(fun_x_1504_89);
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
LOCFOR(fun_function_adjectives_113);
LOCFOR(fun_function_adjectives_setter_114);
LOCFOR(fun_115);
FUNFOR(YevalSastYfree_environment);
LOCFOR(fun_nul_117);
LOCFOR(fun_function_ref_count_118);
LOCFOR(fun_function_ref_count_setter_119);
LOCFOR(fun_120);
LOCFOR(fun_function_free_121);
LOCFOR(fun_function_free_setter_122);
LOCFOR(fun_123);
LOCFOR(fun_incf_ref_count_124);
LOCFOR(fun_incf_ref_count_125);
LOCFOR(fun_function_kind_126);
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
FUNFOR(YevalSastYinline_refs);
LOCFOR(fun_nul_185);
LOCFOR(fun_c_inline_refs_186);
LOCFOR(fun_c_inline_refs_setter_187);
LOCFOR(fun_c_inline_strs_188);
LOCFOR(fun_c_inline_strs_setter_189);
LOCFOR(fun_c_inline_exprQ_190);
LOCFOR(fun_c_inline_exprQ_setter_191);
LOCFOR(fun_192);
LOCFOR(fun_bind_exit_main_fun_193);
LOCFOR(fun_bind_exit_main_fun_setter_194);
LOCFOR(fun_bind_exit_lightQ_195);
LOCFOR(fun_bind_exit_lightQ_setter_196);
LOCFOR(fun_197);
LOCFOR(fun_unwind_protect_protected_thunk_198);
LOCFOR(fun_unwind_protect_protected_thunk_setter_199);
LOCFOR(fun_unwind_protect_cleanup_thunk_200);
LOCFOR(fun_unwind_protect_cleanup_thunk_setter_201);
LOCFOR(fun_monitor_type_202);
LOCFOR(fun_monitor_type_setter_203);
LOCFOR(fun_monitor_info_204);
LOCFOR(fun_monitor_info_setter_205);
LOCFOR(fun_monitor_test_206);
LOCFOR(fun_monitor_test_setter_207);
LOCFOR(fun_monitor_handler_208);
LOCFOR(fun_monitor_handler_setter_209);
LOCFOR(fun_monitor_main_thunk_210);
LOCFOR(fun_monitor_main_thunk_setter_211);
LOCFOR(fun_ast_walkX_212);
LOCFOR(fun_ast_walk_213);
LOCFOR(fun_ast_walk_214);
LOCFOR(fun_ast_copy_215);
LOCFOR(fun_ast_copy_216);
LOCFOR(fun_objectify_217);
LOCFOR(fun_objectify_list_218);
LOCFOR(fun_objectify_list_219);
FUNFOR(YevalSastYmaybe_log_dependency);
FUNFOR(YevalSastYmacro_expander);
LOCFOR(fun_objectify_list_222);
LOCFOR(fun_objectify_223);
LOCFOR(fun_objectify_224);
LOCFOR(fun_objectify_225);
LOCFOR(fun_objectify_226);
LOCFOR(fun_objectify_227);
LOCFOR(fun_objectify_quotation_228);
LOCFOR(fun_objectify_quotation_229);
LOCFOR(fun_objectify_quotation_230);
LOCFOR(fun_objectify_raw_231);
LOCFOR(fun_objectify_boundQ_232);
LOCFOR(fun_objectify_compile_time_233);
LOCFOR(fun_objectify_alternative_234);
LOCFOR(fun_sequentialize_235);
LOCFOR(fun_transform_defs_236);
LOCFOR(fun_objectify_sequential_237);
LOCFOR(fun_238);
LOCFOR(fun_objectify_application_239);
LOCFOR(fun_240);
LOCFOR(fun_objectify_application_241);
LOCFOR(fun_242);
LOCFOR(fun_objectify_application_243);
LOCFOR(fun_process_closed_application_244);
LOCFOR(fun_pack_args_245);
LOCFOR(fun_process_nary_closed_application_246);
LOCFOR(fun_convert2arguments_247);
LOCFOR(fun_objectify_assignment_248);
LOCFOR(fun_objectify_assignment_249);
LOCFOR(fun_objectify_assignment_using_250);
LOCFOR(fun_objectify_assignment_using_251);
LOCFOR(fun_objectify_assignment_using_252);
LOCFOR(fun_objectify_assignment_using_253);
LOCFOR(fun_objectify_assignment_using_254);
FUNFOR(YevalSastYupdate_binding_kind);
LOCFOR(fun_ast_define_binding_256);
LOCFOR(fun_objectify_definition_257);
LOCFOR(fun_objectify_variable_definition_258);
LOCFOR(fun_objectify_dynamic_definition_259);
LOCFOR(fun_expand_260);
FUNFOR(YevalSastYPPPmacro);
FUNFOR(YPPmacro);
LOCFOR(fun_objectify_syntax_definition_263);
LOCFOR(fun_objectify_function_definition_264);
FUNFOR(YevalSastYmodule_binding);
LOCFOR(fun_function_inlineableQ_266);
LOCFOR(fun_objectify_primitive_definition_267);
LOCFOR(fun_objectify_generic_definition_268);
LOCFOR(fun_objectify_method_definition_269);
LOCFOR(fun_270);
LOCFOR(fun_271);
LOCFOR(fun_272);
LOCFOR(fun_273);
LOCFOR(fun_objectify_function_source_274);
LOCFOR(fun_275);
LOCFOR(fun_276);
LOCFOR(fun_objectify_function_using_277);
LOCFOR(fun_objectify_function_278);
LOCFOR(fun_objectify_signature_279);
LOCFOR(fun_compute_local_reference_offsets_280);
LOCFOR(fun_objectify_binding_281);
LOCFOR(fun_binding_reference_class_282);
LOCFOR(fun_objectify_binding_283);
LOCFOR(fun_objectify_binding_284);
LOCFOR(fun_default_type_285);
LOCFOR(fun_objectify_free_global_reference_286);
FUNFOR(YevalSastYforeign_nameQ);
LOCFOR(fun_objectify_foreign_reference_288);
LOCFOR(fun_objectify_symbol_289);
LOCFOR(fun_ftype_290);
FUNFOR(YevalSastYfunctions);
LOCFOR(fun_nul_292);
LOCFOR(fun_293);
LOCFOR(fun_294);
LOCFOR(fun_295);
LOCFOR(fun_objectify_locals_296);
LOCFOR(fun_objectify_bind_exit_297);
LOCFOR(fun_objectify_unwind_protect_298);
LOCFOR(fun_objectify_monitor_299);
LOCFOR(fun_objectify_refs_300);
LOCFOR(fun_split_c_inline_vals_301);
LOCFOR(fun_objectify_c_expr_302);
LOCFOR(fun_objectify_c_inline_303);
LOCFOR(fun_304);
LOCFOR(fun_305);
LOCFOR(fun_306);
LOCFOR(fun_307);
LOCFOR(fun_308);
LOCFOR(fun_objectify_export_309);
LOCFOR(fun_310);
LOCFOR(fun_objectify_useSexport_module_311);
LOCFOR(fun_312);
LOCFOR(fun_objectify_use_include_313);
LOCFOR(fun_314);
LOCFOR(fun_objectify_use_library_315);
LOCFOR(fun_316);
LOCFOR(fun_use_mod_317);
LOCFOR(fun_use_c_mod_318);
LOCFOR(fun_objectify_use_module_319);
LOCFOR(fun_320);
LOCFOR(fun_objectify_use_mangle_module_321);
LOCFOR(fun_expand_bind_list_322);
LOCFOR(fun_expand_bind_list_323);
LOCFOR(fun_expand_bind_list_324);
LOCFOR(fun_expand_bind_listT_325);
LOCFOR(fun_expand_bind_listT_326);
LOCFOR(fun_expand_bind_element_327);
LOCFOR(fun_expand_bind_element_328);
LOCFOR(fun_expand_pattern_329);
LOCFOR(fun_330);
LOCFOR(fun_expand_syntax_if_331);
LOCFOR(fun_r_extendT_332);
LOCFOR(fun_find_binding_333);
LOCFOR(fun_find_binding_334);
LOCFOR(fun_register_magic_binding_335);
LOCFOR(fun_magic_bindings_336);
LOCFOR(fun_x_1524_337);
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
LOCFOR(fun_pairize_362);
LOCFOR(fun_363);
LOCFOR(fun_objectify_define_property_364);
LOCFOR(fun_365);
LOCFOR(fun_366);
LOCFOR(fun_367);
LOCFOR(fun_368);
LOCFOR(fun_369);
LOCFOR(fun_370);
LOCFOR(fun_ast_macro_expand_371);
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
LOCFOR(fun_install_initial_bindings_383);
LOCFOR(fun_384);
FUNFOR(YevalSastYobjectify_with_subtransaction);
LOCFOR(fun_386);
FUNFOR(YevalSastYinstall_magic_bindings);
FUNFOR(YevalSastYreload_macros);
FUNFOR(YevalSastYinstall_interpreter_hacks);
FUNFOR(YevalSastYinit_runtime);
FUNFOR(YevalSastYfab_syntax_environment);
FUNFOR(YevalSastYfab_g2c_module);
FUNFOR(YevalSastYinit_g2c_boot_environment);
FUNFOR(YevalSastYinit_g2c_regular_environment);
FUNFOR(YevalSastYinit_ast);
LOCFOR(fun_ast_contains_funQ_396);
LOCFOR(fun_walk_397);
LOCFOR(fun_398);
LOCFOR(fun_ast_contains_funQ_399);
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

/* C-FORMS: */


/* FUNCTION CODES: */

LOCCODEDEF(fun_x_1498_0) {
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
  P saved_dependentF4080;
  P x_1497F4079;
  P x_1497F4078;
  P x_1497F4077;
  P bodyF4076;
  P dependentF4075;
  P x_1497F4074;
  P x_1498F4073;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35;
LINK_STACK();
  ARG(return_, 0);
  T35 = FUNSHELL(0,fun_x_1498_0,2);
  x_1498F4073 = T35;
  FUNINIT(x_1498F4073, 2,FREEREF(0),return_);
  x_1497F4074 = FREEREF(0);
  dependentF4075 = YPfalse;
  bodyF4076 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1497F4074,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1497F4074,LITREF(lit_4),x_1498F4073);
    x_1497F4077 = T6;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1497F4077,x_1498F4073);
    dependentF4075 = T4;
    T5 = CALL1(1,VARREF(Ytail),x_1497F4077);
    x_1497F4078 = T5;
    bodyF4076 = x_1497F4078;
    x_1497F4079 = Ynil;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1497F4079,x_1498F4073);
  } else {
    T7 = CALL2(1,x_1498F4073,LITREF(lit_5),x_1497F4074);
  }
  T34 = CALL0(1,VARREF(YgooSmacrosYgensym));
  saved_dependentF4080 = T34;
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T14 = CALL1(1,VARREF(Ylst),saved_dependentF4080);
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T15,LITREF(lit_8));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T11 = CALL2(1,VARREF(YgooSmacrosYcat),T12,LITREF(lit_8));
  T10 = CALL1(1,VARREF(Ylst),T11);
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T21 = dependentF4075;
  T20 = CALL1(1,VARREF(Ylst),T21);
  T17 = CALL4(1,VARREF(YgooSmacrosYcat),T18,T19,T20,LITREF(lit_8));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T28 = bodyF4076;
  T26 = CALL3(1,VARREF(YgooSmacrosYcat),T27,T28,LITREF(lit_8));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T33 = CALL1(1,VARREF(Ylst),saved_dependentF4080);
  T30 = CALL4(1,VARREF(YgooSmacrosYcat),T31,T32,T33,LITREF(lit_8));
  T29 = CALL1(1,VARREF(Ylst),T30);
  T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T29,LITREF(lit_8));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T8 = CALL5(1,VARREF(YgooSmacrosYcat),T9,T10,T16,T22,LITREF(lit_8));
UNLINK_STACK();
  QRET(T8);
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
  P typesF4081;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(sig_, 0);
  T6 = CALL1(1,VARREF(YevalSastYsignature_specs),sig_);
  typesF4081 = T6;
  T2 = CALL1(1,VARREF(YevalSastYsignature_naryQ),sig_);
  T1 = CALL1(1,VARREF(YevalSastYconstant_value),T2);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooStypesYlen),typesF4081);
    T4 = CALL2(1,VARREF(YgooSmathY_),T5,YPint((P)1));
    T3 = CALL3(1,VARREF(YgooScolsSseqYsub),typesF4081,YPint((P)0),T4);
    T0 = T3;
  } else {
    T0 = typesF4081;
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
  P x_1500F4084;
  P x_1499F4083;
  P bF4082;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(f_, 0);
  T8 = CALL1(1,VARREF(YevalSastYfunction_binding),f_);
  bF4082 = T8;
  x_1499F4083 = bF4082;
  x_1500F4084 = VARREF(YisaQ);
  T1 = CALL2(1,x_1500F4084,x_1499F4083,VARREF(YLsymG));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),bF4082);
    T0 = T2;
  } else {
    T4 = CALL2(1,x_1500F4084,x_1499F4083,VARREF(YevalSmoduleYLmodule_bindingG));
    if (T4 != YPfalse) {
      T6 = CALL1(1,VARREF(YevalSmoduleYbinding_module_name),bF4082);
      T7 = CALL1(1,VARREF(YevalSmoduleYbinding_name),bF4082);
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
  P nameF4085;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(dependent_, 0);
  ARG(dependable_, 1);
  ARG(dtype_, 2);
  CALL1(1,VARREF(YevalSdependencyYdetach_dependent),dependent_);
  T8 = CALL1(1,VARREF(YevalSastYfunction_display_name),dependent_);
  nameF4085 = T8;
  T1 = CALL2(1,VARREF(YevalSdependencyYdependency_includes_anyQ),dtype_,VARREF(YevalSdependencyYDparse_dependencies));
  if (T1 != YPfalse) {
    T2 = CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_201),nameF4085);
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YevalSdependencyYdependency_includes_anyQ),dtype_,VARREF(YevalSdependencyYDoptimizaton_dependencies));
    if (T4 != YPfalse) {
      T5 = CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_202),nameF4085);
      T3 = T5;
    } else {
      if (YPtrue != YPfalse) {
        T7 = CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_203),nameF4085);
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
  P eF4087;
  P resF4086;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(e_, 0);
  resF4086 = Ynil;
  eF4087 = e_;
  LOOP_180: {
    P a180_0,a180_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),eF4087);
    if (T1 != YPfalse) {
      T2 = CALL1(1,VARREF(YgooSmacrosYrevX),resF4086);
      T0 = T2;
    } else {
      T5 = CALL1(1,VARREF(Yhead),eF4087);
      T4 = CALL2(1,VARREF(YgooSmacrosYpair),T5,resF4086);
      T6 = CALL1(1,VARREF(Ytail),eF4087);
      a180_0 = T4;
      a180_1 = T6;
      resF4086 = a180_0;
      eF4087 = a180_1;
      goto LOOP_180;
      T0 = T3;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_x_1504_89) {
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
  P x_1503F4092;
  P x_1503F4091;
  P nameF4090;
  P x_1503F4089;
  P x_1504F4088;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(return_, 0);
  T14 = FUNSHELL(0,fun_x_1504_89,2);
  x_1504F4088 = T14;
  FUNINIT(x_1504F4088, 2,FREEREF(0),return_);
  x_1503F4089 = FREEREF(0);
  nameF4090 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1503F4089,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1503F4089,LITREF(lit_211),x_1504F4088);
    x_1503F4091 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1503F4091,x_1504F4088);
    nameF4090 = T3;
    T4 = CALL1(1,VARREF(Ytail),x_1503F4091);
    x_1503F4092 = T4;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1503F4092,x_1504F4088);
  } else {
    T6 = CALL2(1,x_1504F4088,LITREF(lit_5),x_1503F4089);
  }
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_212));
  T10 = nameF4090;
  T9 = CALL1(1,VARREF(Ylst),T10);
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_204));
  T12 = CALL2(1,VARREF(YgooSmacrosYcat),T13,LITREF(lit_8));
  T11 = CALL1(1,VARREF(Ylst),T12);
  T7 = CALL4(1,VARREF(YgooSmacrosYcat),T8,T9,T11,LITREF(lit_8));
UNLINK_STACK();
  QRET(T7);
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

LOCCODEDEF(fun_function_adjectives_113) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_adjectives));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_adjectives_setter_114) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_adjectives));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_115) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(Ynil);
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

LOCCODEDEF(fun_nul_117) {
  P e_;
LINK_STACK();
  ARG(e_, 0);
UNLINK_STACK();
  RET(VARREF(YevalSastYDfree_environment_nul));
}

LOCCODEDEF(fun_function_ref_count_118) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_ref_count));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_ref_count_setter_119) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_ref_count));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_120) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

LOCCODEDEF(fun_function_free_121) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_free));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_free_setter_122) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_free));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_123) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL1(1,VARREF(YgooScolsScolYnul),VARREF(YevalSastYLfree_environmentG));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_incf_ref_count_124) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(x_);
}

LOCCODEDEF(fun_incf_ref_count_125) {
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

LOCCODEDEF(fun_function_kind_126) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_274));
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

FUNCODEDEF(YevalSastYinline_refs) {
  P h_,t_;
  P T0;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLinline_refsG),VARREF(Yhead),h_,VARREF(Ytail),t_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_nul_185) {
  P e_;
LINK_STACK();
  ARG(e_, 0);
UNLINK_STACK();
  RET(VARREF(YevalSastYDinline_refs_nul));
}

LOCCODEDEF(fun_c_inline_refs_186) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYc_inline_refs));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_c_inline_refs_setter_187) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYc_inline_refs));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_c_inline_strs_188) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYc_inline_strs));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_c_inline_strs_setter_189) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYc_inline_strs));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_c_inline_exprQ_190) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYc_inline_exprQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_c_inline_exprQ_setter_191) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYc_inline_exprQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_192) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_bind_exit_main_fun_193) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbind_exit_main_fun));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_bind_exit_main_fun_setter_194) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbind_exit_main_fun));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_bind_exit_lightQ_195) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbind_exit_lightQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_bind_exit_lightQ_setter_196) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbind_exit_lightQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_197) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_unwind_protect_protected_thunk_198) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYunwind_protect_protected_thunk));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_unwind_protect_protected_thunk_setter_199) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYunwind_protect_protected_thunk));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_unwind_protect_cleanup_thunk_200) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYunwind_protect_cleanup_thunk));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_unwind_protect_cleanup_thunk_setter_201) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYunwind_protect_cleanup_thunk));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_monitor_type_202) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYmonitor_type));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_monitor_type_setter_203) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmonitor_type));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_monitor_info_204) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYmonitor_info));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_monitor_info_setter_205) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmonitor_info));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_monitor_test_206) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYmonitor_test));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_monitor_test_setter_207) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmonitor_test));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_monitor_handler_208) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYmonitor_handler));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_monitor_handler_setter_209) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmonitor_handler));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_monitor_main_thunk_210) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYmonitor_main_thunk));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_monitor_main_thunk_setter_211) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmonitor_main_thunk));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_walkX_212) {
  P g_,o_,args_;
  P xF4098;
  P tmpF4097;
  P setterF4096;
  P getterF4095;
  P propF4094;
  P x_1505F4093;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
  T20 = CALL1(1,VARREF(Yprops_of),o_);
  T19 = CALL1(1,VARREF(YgooScolsScolYenum),T20);
  x_1505F4093 = T19;
  LOOP_181: {
    P a181_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1505F4093);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T18 = CALL1(1,VARREF(YgooScolsScolYnow),x_1505F4093);
      propF4094 = T18;
      T17 = CALL1(1,VARREF(Yprop_getter),propF4094);
      getterF4095 = T17;
      T16 = CALL1(1,VARREF(Yprop_setter),propF4094);
      setterF4096 = T16;
      T6 = CALL2(1,VARREF(YgooSmacrosYEE),getterF4095,VARREF(YevalSastYbinding_value));
      tmpF4097 = T6;
      if (tmpF4097 != YPfalse) {
        T4 = tmpF4097;
      } else {
        T5 = CALL2(1,VARREF(YgooSmacrosYEE),getterF4095,VARREF(YevalSastYapplication_loop));
        T4 = T5;
      }
      T3 = CALL1(1,VARREF(Ynot),T4);
      if (T3 != YPfalse) {
        T8 = CALL2(1,VARREF(YgooSclassYprop_boundQ),o_,getterF4095);
        if (T8 != YPfalse) {
          T13 = CALL1(0,getterF4095,o_);
          xF4098 = T13;
          T10 = CALL2(1,VARREF(YisaQ),xF4098,VARREF(YevalSastYLprogramG));
          if (T10 != YPfalse) {
            T12 = CALL4(1,VARREF(YgooSmacrosYnapp),g_,YPfalse,xF4098,args_);
            T11 = CALL2(1,setterF4096,T12,o_);
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
      T15 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1505F4093);
      a181_0 = T15;
      x_1505F4093 = a181_0;
      goto LOOP_181;
      T0 = T14;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(o_);
}

LOCCODEDEF(fun_ast_walk_213) {
  P g_,o_,args_;
  P xF4103;
  P tmpF4102;
  P getterF4101;
  P propF4100;
  P x_1507F4099;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
  T18 = CALL1(1,VARREF(Yprops_of),o_);
  T17 = CALL1(1,VARREF(YgooScolsScolYenum),T18);
  x_1507F4099 = T17;
  LOOP_182: {
    P a182_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1507F4099);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T16 = CALL1(1,VARREF(YgooScolsScolYnow),x_1507F4099);
      propF4100 = T16;
      T15 = CALL1(1,VARREF(Yprop_getter),propF4100);
      getterF4101 = T15;
      T6 = CALL2(1,VARREF(YgooSmacrosYEE),getterF4101,VARREF(YevalSastYbinding_value));
      tmpF4102 = T6;
      if (tmpF4102 != YPfalse) {
        T4 = tmpF4102;
      } else {
        T5 = CALL2(1,VARREF(YgooSmacrosYEE),getterF4101,VARREF(YevalSastYapplication_loop));
        T4 = T5;
      }
      T3 = CALL1(1,VARREF(Ynot),T4);
      if (T3 != YPfalse) {
        T8 = CALL2(1,VARREF(YgooSclassYprop_boundQ),o_,getterF4101);
        if (T8 != YPfalse) {
          T12 = CALL1(0,getterF4101,o_);
          xF4103 = T12;
          T10 = CALL2(1,VARREF(YisaQ),xF4103,VARREF(YevalSastYLprogramG));
          if (T10 != YPfalse) {
            T11 = CALL4(1,VARREF(YgooSmacrosYnapp),g_,YPfalse,xF4103,args_);
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
      T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1507F4099);
      a182_0 = T14;
      x_1507F4099 = a182_0;
      goto LOOP_182;
      T0 = T13;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(o_);
}

LOCCODEDEF(fun_ast_walk_214) {
  P g_,o_,args_;
  P eF4105;
  P xF4104;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
  xF4104 = o_;
  LOOP_183: {
    P a183_0;
    T2 = CALL1(1,VARREF(YgooSmacrosYnulQ),xF4104);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T7 = CALL1(1,VARREF(Yhead),xF4104);
      eF4105 = T7;
      T3 = CALL2(1,VARREF(YisaQ),eF4105,VARREF(YevalSastYLprogramG));
      if (T3 != YPfalse) {
        T4 = CALL4(1,VARREF(YgooSmacrosYnapp),g_,YPfalse,eF4105,args_);
      } else {
      }
      T6 = CALL1(1,VARREF(Ytail),xF4104);
      a183_0 = T6;
      xF4104 = a183_0;
      goto LOOP_183;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_copy_215) {
  P x_;
  P copyF4106;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooSclassYclone),x_);
  copyF4106 = T1;
  CALL2(1,VARREF(YevalSastYprogram_register_setter),YPfalse,copyF4106);
  T0 = CALL2(1,VARREF(YevalSastYast_walkX),VARREF(YevalSastYast_copy),copyF4106);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_copy_216) {
  P x_;
  P next_metsF4107;
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
    next_metsF4107 = T5;
    T3 = CALL1(1,VARREF(Yhead),next_metsF4107);
    T4 = CALL1(1,VARREF(Ytail),next_metsF4107);
    T2 = CALL4(1,VARREF(YgooSmacrosYnapp),T3,T4,x_,Ynil);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_217) {
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

LOCCODEDEF(fun_objectify_list_218) {
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

LOCCODEDEF(fun_objectify_list_219) {
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

LOCCODEDEF(fun_objectify_list_222) {
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

LOCCODEDEF(fun_objectify_223) {
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

LOCCODEDEF(fun_objectify_224) {
  P e_,r_,tailQ_;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
UNLINK_STACK();
  QRET(e_);
}

LOCCODEDEF(fun_objectify_225) {
  P e_,r_,tailQ_;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
UNLINK_STACK();
  QRET(e_);
}

LOCCODEDEF(fun_objectify_226) {
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

LOCCODEDEF(fun_objectify_227) {
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

LOCCODEDEF(fun_objectify_quotation_228) {
  P value_,r_;
  P T0;
LINK_STACK();
  ARG(value_, 0);
  ARG(r_, 1);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),value_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_quotation_229) {
  P value_,r_;
  P T0;
LINK_STACK();
  ARG(value_, 0);
  ARG(r_, 1);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLimmediate_constantG),VARREF(YevalSastYconstant_value),value_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_quotation_230) {
  P value_,r_;
  P T0;
LINK_STACK();
  ARG(value_, 0);
  ARG(r_, 1);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLimmediate_constantG),VARREF(YevalSastYconstant_value),value_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_raw_231) {
  P value_,r_;
  P T0;
LINK_STACK();
  ARG(value_, 0);
  ARG(r_, 1);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLraw_constantG),VARREF(YevalSastYconstant_value),value_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_boundQ_232) {
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

LOCCODEDEF(fun_objectify_compile_time_233) {
  P program_,r_,tailQ_,rtQ_;
  P astF4111;
  P target_envF4110;
  P syntax_envF4109;
  P modF4108;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(program_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  ARG(rtQ_, 3);
  T8 = CALL1(1,VARREF(YevalSmoduleYfind_environment_module),r_);
  modF4108 = T8;
  T7 = CALL1(1,VARREF(YevalSmoduleYmodule_syntax_environment),modF4108);
  syntax_envF4109 = T7;
  T6 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),modF4108);
  target_envF4110 = T6;
  T5 = CALL3(1,VARREF(YevalSastYobjectify),program_,syntax_envF4109,tailQ_);
  astF4111 = T5;
  CALL1(1,VARREF(YevalSastYast_evaluate),astF4111);
  if (rtQ_ != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSlogYNEE),syntax_envF4109,target_envF4110);
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

LOCCODEDEF(fun_objectify_alternative_234) {
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

LOCCODEDEF(fun_sequentialize_235) {
  P eT_;
  P eTF4113;
  P rF4112;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
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
      T14 = CALL1(1,VARREF(YgooScolsScolYnul),VARREF(YevalSastYLsequentialG));
      rF4112 = T14;
      eTF4113 = eT_;
      LOOP_184: {
        P a184_0,a184_1;
        T8 = CALL1(1,VARREF(YgooSmacrosYnulQ),eTF4113);
        if (T8 != YPfalse) {
          T9 = CALL1(1,VARREF(YgooSmacrosYrevX),rF4112);
          T7 = T9;
        } else {
          T12 = CALL1(1,VARREF(Yhead),eTF4113);
          T11 = CALL2(1,VARREF(YevalSastYsequential),T12,rF4112);
          T13 = CALL1(1,VARREF(Ytail),eTF4113);
          a184_0 = T11;
          a184_1 = T13;
          rF4112 = a184_0;
          eTF4113 = a184_1;
          goto LOOP_184;
          T7 = T10;
        }
      }
      T3 = T7;
    }
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_transform_defs_236) {
  P eT_;
  P eF4114;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(eT_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),eT_);
  if (T1 != YPfalse) {
    T0 = Ynil;
  } else {
    T22 = CALL1(1,VARREF(Yhead),eT_);
    eF4114 = T22;
    T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_defQ),eF4114);
    if (T3 != YPfalse) {
      T7 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
      T13 = CALL1(1,VARREF(YevalSsyntaxYsexpr_def_variable),eF4114);
      T12 = CALL1(1,VARREF(Ylst),T13);
      T15 = CALL1(1,VARREF(YevalSsyntaxYsexpr_def_value),eF4114);
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
      T19 = CALL1(1,VARREF(Ylst),eF4114);
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

LOCCODEDEF(fun_objectify_sequential_237) {
  P eT_,r_,tailQ_;
  P astsF4119;
  P headF4118;
  P tailQF4117;
  P eTF4116;
  P resF4115;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(eT_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  resF4115 = Ynil;
  T12 = CALL1(1,VARREF(YevalSastYtransform_defs),eT_);
  eTF4116 = T12;
  LOOP_185: {
    P a185_0,a185_1;
    T2 = CALL1(1,VARREF(YgooSmacrosYnulQ),eTF4116);
    if (T2 != YPfalse) {
      T3 = CALL1(1,VARREF(YgooSmacrosYrevX),resF4115);
      T1 = T3;
    } else {
      T11 = CALL1(1,VARREF(Ytail),eTF4116);
      T10 = CALL1(1,VARREF(YgooSmacrosYnulQ),T11);
      if (T10 != YPfalse) {
        T9 = tailQ_;
      } else {
        T9 = YPfalse;
      }
      tailQF4117 = T9;
      T8 = CALL1(1,VARREF(Yhead),eTF4116);
      T7 = CALL3(1,VARREF(YevalSastYobjectify),T8,r_,tailQF4117);
      headF4118 = T7;
      T5 = CALL2(1,VARREF(YgooSmacrosYpair),headF4118,resF4115);
      T6 = CALL1(1,VARREF(Ytail),eTF4116);
      a185_0 = T5;
      a185_1 = T6;
      resF4115 = a185_0;
      eTF4116 = a185_1;
      goto LOOP_185;
      T1 = T4;
    }
  }
  astsF4119 = T1;
  T0 = CALL1(1,VARREF(YevalSastYsequentialize),astsF4119);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_238) {
  P e_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),e_,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_application_239) {
  P ff_,eT_,r_,tailQ_;
  P eeTF4120;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T3 = FUNFAB(fun_238,1,r_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),T3,eT_);
  T1 = CALL1(1,VARREF(YevalSastYconvert2arguments),T2);
  eeTF4120 = T1;
  T0 = CALL4(1,VARREF(YevalSastYprocess_closed_application),ff_,eeTF4120,r_,tailQ_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_240) {
  P e_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),e_,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_application_241) {
  P ff_,eT_,r_,tailQ_;
  P primF4123;
  P fvfF4122;
  P eeTF4121;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T8 = FUNFAB(fun_240,1,r_);
  T7 = CALL2(1,VARREF(YgooSmacrosYmap),T8,eT_);
  T6 = CALL1(1,VARREF(YevalSastYconvert2arguments),T7);
  eeTF4121 = T6;
  T5 = CALL1(1,VARREF(YevalSastYreference_binding),ff_);
  fvfF4122 = T5;
  T4 = CALL1(1,VARREF(YevalSmoduleYbinding_prop),fvfF4122);
  primF4123 = T4;
  if (primF4123 != YPfalse) {
    T2 = CALL1(1,VARREF(YevalSastYast_copy),primF4123);
    T1 = CALL4(1,VARREF(YevalSastYprocess_closed_application),T2,eeTF4121,r_,tailQ_);
    T0 = T1;
  } else {
    T3 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSastYapplication_binding),fvfF4122,VARREF(YevalSastYapplication_arguments),eeTF4121,VARREF(YevalSastYapplication_tailQ),tailQ_);
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_242) {
  P e_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),e_,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_application_243) {
  P ff_,eT_,r_,tailQ_;
  P eeTF4124;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T5 = FUNFAB(fun_242,1,r_);
  T4 = CALL2(1,VARREF(YgooSmacrosYmap),T5,eT_);
  T3 = CALL1(1,VARREF(YevalSastYconvert2arguments),T4);
  eeTF4124 = T3;
  T0 = CALL2(1,VARREF(YisaQ),ff_,VARREF(YevalSastYLlocal_referenceG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YevalSastYreference_called_functionQ_setter),YPtrue,ff_);
  } else {
  }
  T2 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLregular_applicationG),VARREF(YevalSastYapplication_function),ff_,VARREF(YevalSastYapplication_arguments),eeTF4124,VARREF(YevalSastYapplication_tailQ),tailQ_);
UNLINK_STACK();
  RET(T2);
}

LOCCODEDEF(fun_process_closed_application_244) {
  P f_,eT_,r_,tailQ_;
  P bF4126;
  P vTF4125;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(f_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T16 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
  vTF4125 = T16;
  T15 = CALL1(1,VARREF(YevalSastYfunction_body),f_);
  bF4126 = T15;
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
      T14 = CALL3(1,VARREF(YevalSdependencyYast_error),LITREF(lit_507),f_,eT_);
      T3 = T14;
    }
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_pack_args_245) {
  P eT_,vT_,tT_;
  P dotted_typeF4128;
  P varF4127;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(eT_, 0);
  ARG(vT_, 1);
  ARG(tT_, 2);
  T17 = CALL1(1,VARREF(Yhead),vT_);
  varF4127 = T17;
  T1 = CALL1(1,VARREF(YevalSastYbinding_dottedQ),varF4127);
  if (T1 != YPfalse) {
    T7 = CALL3(1,VARREF(YevalSastYobjectify),LITREF(lit_512),FREEREF(0),YPfalse);
    dotted_typeF4128 = T7;
    CALL2(1,VARREF(YevalSastYbinding_dottedQ_setter),YPfalse,varF4127);
    CALL2(1,VARREF(YevalSmoduleYbinding_type_setter),dotted_typeF4128,varF4127);
    CALL2(1,VARREF(Yhead_setter),dotted_typeF4128,tT_);
    T5 = CALL1(1,VARREF(Ylst),LITREF(lit_513));
    T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,eT_,LITREF(lit_8));
    T3 = CALL3(1,VARREF(YevalSastYobjectify),T4,FREEREF(0),YPfalse);
    T6 = CALL1(1,VARREF(YgooScolsScolYnul),VARREF(YevalSastYLargumentsG));
    T2 = CALL2(1,VARREF(YevalSastYarguments),T3,T6);
    T0 = T2;
  } else {
    T9 = CALL1(1,VARREF(YgooSmacrosYnulQ),eT_);
    if (T9 != YPfalse) {
      T10 = CALL3(1,VARREF(YevalSdependencyYast_error),LITREF(lit_514),FREEREF(1),eT_);
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

LOCCODEDEF(fun_process_nary_closed_application_246) {
  P f_,eT_,r_,tailQ_;
  P oF4131;
  P vTF4130;
  P pack_argsF4129;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(f_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T6 = FUNSHELL(1,fun_pack_args_245,3);
  pack_argsF4129 = T6;
  FUNINIT(pack_argsF4129, 3,r_,f_,pack_argsF4129);
  T5 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
  vTF4130 = T5;
  T1 = CALL1(1,VARREF(YevalSastYfunction_specs),f_);
  T3 = CALL1(1,VARREF(YevalSastYfunction_specs),f_);
  T2 = CALL3(1,pack_argsF4129,eT_,vTF4130,T3);
  T4 = CALL1(1,VARREF(YevalSastYfunction_body),f_);
  T0 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_bindings),vTF4130,VARREF(YevalSastYfix_let_types),T1,VARREF(YevalSastYfix_let_arguments),T2,VARREF(YevalSastYfix_let_body),T4);
  oF4131 = T0;
UNLINK_STACK();
  RET(oF4131);
}

LOCCODEDEF(fun_convert2arguments_247) {
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

LOCCODEDEF(fun_objectify_assignment_248) {
  P binding_,e_,r_,tailQ_;
  P opF4132;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(binding_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_operator),binding_);
  opF4132 = T9;
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variableQ),opF4132);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_fab_setter_name),opF4132);
    T4 = CALL3(1,VARREF(YevalSastYobjectify),T5,r_,YPfalse);
    T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_operands),binding_);
    T6 = CALL2(1,VARREF(YgooSmacrosYpair),e_,T7);
    T3 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_application),T4,T6);
    T2 = CALL3(1,VARREF(YevalSastYobjectify),T3,r_,tailQ_);
    T0 = T2;
  } else {
    T8 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_519),e_);
    T0 = T8;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_assignment_249) {
  P binding_,e_,r_,tailQ_;
  P valF4134;
  P refF4133;
  P T0,T1,T2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T2 = CALL3(1,VARREF(YevalSastYobjectify),binding_,r_,YPfalse);
  refF4133 = T2;
  T1 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  valF4134 = T1;
  T0 = CALL2(1,VARREF(YevalSastYobjectify_assignment_using),refF4133,valF4134);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_assignment_using_250) {
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

LOCCODEDEF(fun_objectify_assignment_using_251) {
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

LOCCODEDEF(fun_objectify_assignment_using_252) {
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

LOCCODEDEF(fun_objectify_assignment_using_253) {
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

LOCCODEDEF(fun_objectify_assignment_using_254) {
  P ref_,val_;
  P T0,T1;
LINK_STACK();
  ARG(ref_, 0);
  ARG(val_, 1);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),ref_);
  T0 = CALL2(1,VARREF(YevalSmoduleYnamespace_error),LITREF(lit_527),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYupdate_binding_kind) {
  P binding_,new_kind_;
  P tmpF4135;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(binding_, 0);
  ARG(new_kind_, 1);
  T4 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),binding_);
  T3 = CALL2(1,VARREF(YgooSlogYNEE),T4,LITREF(lit_530));
  tmpF4135 = T3;
  if (tmpF4135 != YPfalse) {
    T1 = tmpF4135;
  } else {
    T2 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_531));
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T5 = CALL2(1,VARREF(YevalSmoduleYbinding_kind_setter),new_kind_,binding_);
    T0 = T5;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_530));
    if (T7 != YPfalse) {
      T6 = YPtrue;
    } else {
      T9 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_532));
      if (T9 != YPfalse) {
        T8 = YPtrue;
      } else {
        if (YPtrue != YPfalse) {
          T12 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
          T11 = CALL3(1,VARREF(YevalSmoduleYnamespace_error),LITREF(lit_533),T12,new_kind_);
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

LOCCODEDEF(fun_ast_define_binding_256) {
  P r_,name_,defining_methodQ_,kind_;
  P bindingF4143;
  P bindingF4142;
  P modF4141;
  P foreignQF4140;
  P tmpF4139;
  P modF4138;
  P grF4137;
  P existing_bindingF4136;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(r_, 0);
  ARG(name_, 1);
  ARG(defining_methodQ_, 2);
  ARG(kind_, 3);
  T15 = CALL2(1,VARREF(YevalSmoduleYfind_binding),name_,r_);
  existing_bindingF4136 = T15;
  T14 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  grF4137 = T14;
  T13 = CALL1(1,VARREF(YevalSmoduleYenvironment_module),grF4137);
  modF4138 = T13;
  if (existing_bindingF4136 != YPfalse) {
    T10 = CALL2(1,VARREF(YevalSmoduleYbinding_native_toQ),existing_bindingF4136,modF4138);
    tmpF4139 = T10;
    if (tmpF4139 != YPfalse) {
      T9 = tmpF4139;
    } else {
      T9 = defining_methodQ_;
    }
    T8 = CALL1(1,VARREF(Ynot),T9);
    foreignQF4140 = T8;
    T1 = CALL1(1,VARREF(YevalSmoduleYbinding_freeQ),existing_bindingF4136);
    if (T1 != YPfalse) {
      CALL2(1,VARREF(YevalSmoduleYbinding_freeQ_setter),YPfalse,existing_bindingF4136);
      if (foreignQF4140 != YPfalse) {
        T3 = CALL1(1,VARREF(YevalSmoduleYtransaction_register_implemented_binding),existing_bindingF4136);
        T2 = T3;
      } else {
        T2 = YPfalse;
      }
    } else {
      if (foreignQF4140 != YPfalse) {
        T6 = CALL1(1,VARREF(YevalSmoduleYmodule_name),modF4138);
        T7 = CALL1(1,VARREF(YevalSmoduleYbinding_module_name),existing_bindingF4136);
        T5 = CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_536),T6,name_,T7);
        T4 = T5;
      } else {
        T4 = YPfalse;
      }
    }
    CALL2(1,VARREF(YevalSdependencyYinvalidate_dependents),existing_bindingF4136,VARREF(YevalSdependencyYDall_dependency_types));
    CALL2(1,VARREF(YevalSastYupdate_binding_kind),existing_bindingF4136,kind_);
    T0 = existing_bindingF4136;
  } else {
    T12 = CALL1(1,VARREF(YevalSmoduleYfind_environment_module),r_);
    modF4141 = T12;
    T11 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),kind_,VARREF(YevalSmoduleYbinding_name),name_,VARREF(YevalSmoduleYbinding_freeQ),YPfalse,VARREF(YevalSmoduleYbinding_module),modF4141);
    bindingF4142 = T11;
    CALL2(1,VARREF(YevalSmoduleYinsert_globalX),bindingF4142,grF4137);
    T0 = bindingF4142;
  }
  bindingF4143 = T0;
  CALL2(1,VARREF(YevalSmoduleYregister_referenced_binding),modF4138,bindingF4143);
UNLINK_STACK();
  QRET(bindingF4143);
}

LOCCODEDEF(fun_objectify_definition_257) {
  P type_,kind_,var_,e_,r_;
  P defnF4146;
  P bindingF4145;
  P nameF4144;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(type_, 0);
  ARG(kind_, 1);
  ARG(var_, 2);
  ARG(e_, 3);
  ARG(r_, 4);
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variable_name),var_);
  nameF4144 = T3;
  T2 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,nameF4144,YPfalse,kind_);
  bindingF4145 = T2;
  T1 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  T0 = CALL5(1,VARREF(Ynew),type_,VARREF(YevalSastYassignment_binding),bindingF4145,VARREF(YevalSastYassignment_form),T1);
  defnF4146 = T0;
UNLINK_STACK();
  QRET(defnF4146);
}

LOCCODEDEF(fun_objectify_variable_definition_258) {
  P var_,e_,r_;
  P T0;
LINK_STACK();
  ARG(var_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  T0 = CALL5(1,VARREF(YevalSastYobjectify_definition),VARREF(YevalSastYLvariable_definitionG),LITREF(lit_532),var_,e_,r_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_dynamic_definition_259) {
  P var_,e_,r_;
  P T0;
LINK_STACK();
  ARG(var_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  T0 = CALL5(1,VARREF(YevalSastYobjectify_definition),VARREF(YevalSastYLdynamic_definitionG),LITREF(lit_543),var_,e_,r_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_expand_260) {
  P x_,r_,tailQ_;
  P expF4147;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  if (VARREF(YevalSastYTmacro_tracingQT) != YPfalse) {
    CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_548));
    CALL2(1,VARREF(YgooSioSwriteYwrite),VARREF(YgooSioSportYout),x_);
    T0 = CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_549));
  } else {
  }
  T3 = CALL1(1,FREEREF(0),x_);
  T2 = CALL2(1,VARREF(YgooScolsSlstYline_list_of),x_,T3);
  expF4147 = T2;
  if (VARREF(YevalSastYTmacro_tracingQT) != YPfalse) {
    CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_550));
    CALL2(1,VARREF(YgooSioSwriteYwrite),VARREF(YgooSioSportYout),expF4147);
    T1 = CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_551));
  } else {
  }
UNLINK_STACK();
  QRET(expF4147);
}

FUNCODEDEF(YevalSastYPPPmacro) {
  P binding_,expander_;
  P T0;
LINK_STACK();
  ARG(binding_, 0);
  ARG(expander_, 1);
  T0 = FUNFAB(fun_expand_260,1,expander_);
  CALL2(1,VARREF(YevalSmoduleYbinding_handler_setter),T0,binding_);
UNLINK_STACK();
  RET(binding_);
}

FUNCODEDEF(YPPmacro) {
  P modname_,name_,expander_,env_or_false_;
  P bindingF4150;
  P envF4149;
  P tmpF4148;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(modname_, 0);
  ARG(name_, 1);
  ARG(expander_, 2);
  ARG(env_or_false_, 3);
  tmpF4148 = env_or_false_;
  if (tmpF4148 != YPfalse) {
    T2 = tmpF4148;
  } else {
    T3 = CALL1(1,VARREF(YevalSmoduleYunchecked_runtime_environment),modname_);
    T2 = T3;
  }
  envF4149 = T2;
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),envF4149,name_,YPfalse,LITREF(lit_554));
  bindingF4150 = T1;
  T0 = CALL2(1,VARREF(YevalSastYPPPmacro),bindingF4150,expander_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_syntax_definition_263) {
  P name_,e_,r_,rtQ_;
  P bindingF4156;
  P modnameF4155;
  P expanderF4154;
  P ast_expanderF4153;
  P syntax_envF4152;
  P sep_expanderF4151;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(name_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(rtQ_, 3);
  T14 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_macro_function),name_,e_);
  sep_expanderF4151 = T14;
  T13 = CALL1(1,VARREF(YevalSmoduleYfind_syntax_environment),r_);
  syntax_envF4152 = T13;
  T12 = CALL3(1,VARREF(YevalSastYobjectify),sep_expanderF4151,syntax_envF4152,YPfalse);
  ast_expanderF4153 = T12;
  T11 = CALL1(1,VARREF(YevalSastYast_evaluate),ast_expanderF4153);
  expanderF4154 = T11;
  T10 = CALL1(1,VARREF(YevalSmoduleYfind_environment_module),r_);
  T9 = CALL1(1,VARREF(YevalSmoduleYmodule_name),T10);
  modnameF4155 = T9;
  T8 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  T7 = CALL4(1,VARREF(YPPmacro),modnameF4155,name_,expanderF4154,T8);
  bindingF4156 = T7;
  T1 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  T0 = CALL2(1,VARREF(YgooSlogYNEE),syntax_envF4152,T1);
  if (T0 != YPfalse) {
    T2 = CALL2(1,VARREF(YevalSmoduleYinsert_globalX),bindingF4156,syntax_envF4152);
  } else {
  }
  if (rtQ_ != YPfalse) {
    T5 = CALL3(1,VARREF(YevalSastYobjectify),sep_expanderF4151,r_,YPfalse);
    T4 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_macro_definitionG),VARREF(YevalSastYassignment_binding),bindingF4156,VARREF(YevalSastYassignment_form),T5);
    T3 = T4;
  } else {
    T6 = CALL2(1,VARREF(YevalSastYobjectify_quotation),YPfalse,r_);
    T3 = T6;
  }
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_objectify_function_definition_264) {
  P name_,mods_,e_,r_;
  P defnF4159;
  P fF4158;
  P bindingF4157;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(name_, 0);
  ARG(mods_, 1);
  ARG(e_, 2);
  ARG(r_, 3);
  T3 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_532));
  bindingF4157 = T3;
  T2 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  fF4158 = T2;
  CALL2(1,VARREF(YevalSastYfunction_binding_setter),bindingF4157,fF4158);
  CALL2(1,VARREF(YevalSastYfunction_adjectives_setter),mods_,fF4158);
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T0,fF4158);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_function_definitionG),VARREF(YevalSastYassignment_binding),bindingF4157,VARREF(YevalSastYassignment_form),fF4158);
  defnF4159 = T1;
UNLINK_STACK();
  RET(defnF4159);
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

LOCCODEDEF(fun_function_inlineableQ_266) {
  P e_;
  P tmpF4160;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(e_, 0);
  T4 = CALL1(1,VARREF(YevalSastYfunction_adjectives),e_);
  T3 = CALL2(1,VARREF(YgooScolsScolYmemQ),T4,LITREF(lit_563));
  tmpF4160 = T3;
  if (tmpF4160 != YPfalse) {
    T0 = tmpF4160;
  } else {
    T2 = CALL1(1,VARREF(YevalSastYfunction_adjectives),e_);
    T1 = CALL2(1,VARREF(YgooScolsScolYmemQ),T2,LITREF(lit_564));
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_primitive_definition_267) {
  P name_,mods_,sig_,body_,r_;
  P defnF4166;
  P formF4165;
  P bodyF4164;
  P new_rF4163;
  P signatureF4162;
  P bindingF4161;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(name_, 0);
  ARG(mods_, 1);
  ARG(sig_, 2);
  ARG(body_, 3);
  ARG(r_, 4);
  T9 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_567));
  bindingF4161 = T9;
  T8 = CALL2(1,VARREF(YevalSastYobjectify_signature),sig_,r_);
  signatureF4162 = T8;
  T7 = CALL1(1,VARREF(YevalSastYsignature_bindings),signatureF4162);
  T6 = CALL2(1,VARREF(YevalSastYr_extendT),r_,T7);
  new_rF4163 = T6;
  T5 = CALL3(1,VARREF(YevalSastYobjectify_sequential),body_,new_rF4163,YPtrue);
  bodyF4164 = T5;
  T4 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  T3 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLast_primitiveG),VARREF(YevalSastYfunction_binding),bindingF4161,VARREF(YevalSastYfunction_adjectives),mods_,VARREF(YevalSastYfunction_debug_name),T4,VARREF(YevalSastYfunction_signature),signatureF4162,VARREF(YevalSastYfunction_body),bodyF4164);
  formF4165 = T3;
  T0 = CALL2(1,VARREF(YgooScolsScolYmemQ),mods_,LITREF(lit_563));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YevalSmoduleYbinding_prop_setter),formF4165,bindingF4161);
  } else {
  }
  T2 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_primitive_definitionG),VARREF(YevalSastYassignment_binding),bindingF4161,VARREF(YevalSastYassignment_form),formF4165);
  defnF4166 = T2;
UNLINK_STACK();
  RET(defnF4166);
}

LOCCODEDEF(fun_objectify_generic_definition_268) {
  P name_,sig_,r_;
  P defnF4170;
  P formF4169;
  P signatureF4168;
  P bindingF4167;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(name_, 0);
  ARG(sig_, 1);
  ARG(r_, 2);
  T4 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_532));
  bindingF4167 = T4;
  T3 = CALL2(1,VARREF(YevalSastYobjectify_signature),sig_,r_);
  signatureF4168 = T3;
  T2 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  T1 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLast_genericG),VARREF(YevalSastYfunction_binding),bindingF4167,VARREF(YevalSastYfunction_debug_name),T2,VARREF(YevalSastYfunction_signature),signatureF4168);
  formF4169 = T1;
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_generic_definitionG),VARREF(YevalSastYassignment_binding),bindingF4167,VARREF(YevalSastYassignment_form),formF4169);
  defnF4170 = T0;
UNLINK_STACK();
  RET(defnF4170);
}

LOCCODEDEF(fun_objectify_method_definition_269) {
  P name_,mods_,e_,r_;
  P defnF4176;
  P formF4175;
  P callF4174;
  P metF4173;
  P genF4172;
  P bindingF4171;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(name_, 0);
  ARG(mods_, 1);
  ARG(e_, 2);
  ARG(r_, 3);
  T9 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPtrue,LITREF(lit_532));
  bindingF4171 = T9;
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_572));
  T7 = CALL1(1,VARREF(Ylst),name_);
  T8 = CALL1(1,VARREF(Ylst),YPfalse);
  T5 = CALL4(1,VARREF(YgooSmacrosYcat),T6,T7,T8,LITREF(lit_8));
  genF4172 = T5;
  T4 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  metF4173 = T4;
  T3 = CALL3(1,VARREF(Ylst),LITREF(lit_573),genF4172,metF4173);
  callF4174 = T3;
  T2 = CALL3(1,VARREF(YevalSastYobjectify),callF4174,r_,YPfalse);
  formF4175 = T2;
  T1 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_method_definitionG),VARREF(YevalSastYassignment_binding),bindingF4171,VARREF(YevalSastYassignment_form),formF4175);
  defnF4176 = T1;
  CALL2(1,VARREF(YevalSastYfunction_binding_setter),name_,metF4173);
  CALL2(1,VARREF(YevalSastYfunction_adjectives_setter),mods_,metF4173);
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T0,metF4173);
UNLINK_STACK();
  RET(defnF4176);
}

LOCCODEDEF(fun_270) {
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  DYNSET(YgooSioSwriteYTmax_print_lengthT,VARREF(YDmax_int));
  if (DYNREF(YevalSastYTrecord_sourceQT) != YPfalse) {
    T4 = CALL1(1,VARREF(Ylst),LITREF(lit_578));
    T5 = CALL1(1,VARREF(Ylst),FREEREF(0));
    T3 = CALL4(1,VARREF(YgooSmacrosYcat),T4,T5,FREEREF(1),LITREF(lit_8));
    T2 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_577),T3);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),T1,FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_271) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YgooSioSwriteYTmax_print_lengthT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_272) {
  P x_1510F4177;
  P T0,T1,T2;
LINK_STACK();
  DYNSET(YgooSioSwriteYTmax_print_depthT,VARREF(YDmax_int));
  x_1510F4177 = DYNREF(YgooSioSwriteYTmax_print_lengthT);
  T1 = FUNFAB(fun_270,3,FREEREF(0),FREEREF(1),FREEREF(2));
  T2 = FUNFAB(fun_271,1,x_1510F4177);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_273) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YgooSioSwriteYTmax_print_depthT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_function_source_274) {
  P sig_,body_,r_;
  P x_1509F4178;
  P T0,T1,T2;
LINK_STACK();
  ARG(sig_, 0);
  ARG(body_, 1);
  ARG(r_, 2);
  x_1509F4178 = DYNREF(YgooSioSwriteYTmax_print_depthT);
  T1 = FUNFAB(fun_272,3,sig_,body_,r_);
  T2 = FUNFAB(fun_273,1,x_1509F4178);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_275) {
  P astF4181;
  P new_rF4180;
  P signatureF4179;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  T5 = CALL2(1,VARREF(YevalSastYobjectify_signature),FREEREF(0),FREEREF(1));
  signatureF4179 = T5;
  T4 = CALL1(1,VARREF(YevalSastYsignature_bindings),signatureF4179);
  T3 = CALL2(1,VARREF(YevalSastYr_extendT),FREEREF(1),T4);
  new_rF4180 = T3;
  T2 = CALL3(1,VARREF(YevalSastYobjectify_sequential),FREEREF(2),new_rF4180,YPtrue);
  astF4181 = T2;
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),YPfalse,FREEREF(1));
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T0,FREEREF(3));
  CALL2(1,VARREF(YevalSastYfunction_signature_setter),signatureF4179,FREEREF(3));
  CALL2(1,VARREF(YevalSastYfunction_body_setter),astF4181,FREEREF(3));
  T1 = CALL3(1,VARREF(YevalSastYobjectify_function_source),FREEREF(0),FREEREF(2),FREEREF(1));
  CALL2(1,VARREF(YevalSastYfunction_source_setter),T1,FREEREF(3));
UNLINK_STACK();
  QRET(FREEREF(3));
}

LOCCODEDEF(fun_276) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YevalSastYTcurrent_dependentT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_function_using_277) {
  P met_,sig_,body_,r_,tailQ_;
  P x_1511F4182;
  P T0,T1,T2;
LINK_STACK();
  ARG(met_, 0);
  ARG(sig_, 1);
  ARG(body_, 2);
  ARG(r_, 3);
  ARG(tailQ_, 4);
  x_1511F4182 = DYNREF(YevalSastYTcurrent_dependentT);
  DYNSET(YevalSastYTcurrent_dependentT,met_);
  T1 = FUNFAB(fun_275,4,sig_,r_,body_,met_);
  T2 = FUNFAB(fun_276,1,x_1511F4182);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_function_278) {
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

LOCCODEDEF(fun_objectify_signature_279) {
  P sig_,r_;
  P bindingF4199;
  P typeF4198;
  P stypeF4197;
  P dottedQF4196;
  P stypeF4195;
  P snameF4194;
  P paramF4193;
  P arityF4192;
  P valueF4191;
  P tmpF4190;
  P sexpr_valueF4189;
  P typesF4188;
  P namesF4187;
  P bindingsF4186;
  P naryQF4185;
  P paramsF4184;
  P sexpr_paramsF4183;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
LINK_STACK();
  ARG(sig_, 0);
  ARG(r_, 1);
  T30 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_parameters),sig_);
  sexpr_paramsF4183 = T30;
  paramsF4184 = sexpr_paramsF4183;
  naryQF4185 = YPfalse;
  bindingsF4186 = Ynil;
  T28 = CALL1(1,VARREF(YgooScolsScolYnul),VARREF(YevalSastYLfab_listG));
  namesF4187 = T28;
  T29 = CALL1(1,VARREF(YgooScolsScolYnul),VARREF(YevalSastYLfab_listG));
  typesF4188 = T29;
  LOOP_186: {
    P a186_0,a186_1,a186_2,a186_3,a186_4;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),paramsF4184);
    if (T1 != YPfalse) {
      T15 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_value),sig_);
      sexpr_valueF4189 = T15;
      tmpF4190 = sexpr_valueF4189;
      if (tmpF4190 != YPfalse) {
        T13 = tmpF4190;
      } else {
        T14 = CALL1(1,VARREF(YevalSastYdefault_type),r_);
        T13 = T14;
      }
      T12 = CALL3(1,VARREF(YevalSastYobjectify),T13,r_,YPfalse);
      valueF4191 = T12;
      T10 = CALL1(1,VARREF(YgooStypesYlen),namesF4187);
      if (naryQF4185 != YPfalse) {
        T11 = YPint((P)1);
      } else {
        T11 = YPint((P)0);
      }
      T9 = CALL2(1,VARREF(YgooSmathY_),T10,T11);
      arityF4192 = T9;
      T3 = CALL1(1,VARREF(YgooSmacrosYrevX),bindingsF4186);
      T5 = CALL1(1,VARREF(YgooSmacrosYrevX),namesF4187);
      T4 = CALL2(1,VARREF(YevalSastYobjectify_quotation),T5,r_);
      T6 = CALL1(1,VARREF(YgooSmacrosYrevX),typesF4188);
      T7 = CALL3(1,VARREF(YevalSastYobjectify),naryQF4185,r_,YPfalse);
      T8 = CALL3(1,VARREF(YevalSastYobjectify),arityF4192,r_,YPfalse);
      T2 = CALLN(1,VARREF(Ynew),13,VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_bindings),T3,VARREF(YevalSastYsignature_names),T4,VARREF(YevalSastYsignature_specs),T6,VARREF(YevalSastYsignature_naryQ),T7,VARREF(YevalSastYsignature_arity),T8,VARREF(YevalSastYsignature_value),valueF4191);
      T0 = T2;
    } else {
      T27 = CALL1(1,VARREF(Yhead),paramsF4184);
      paramF4193 = T27;
      T26 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variable_name),paramF4193);
      snameF4194 = T26;
      T25 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variable_type),paramF4193);
      stypeF4195 = T25;
      T24 = CALL2(1,VARREF(YgooSmacrosYEE),stypeF4195,VARREF(YevalSastYDsexpr_optionals_tag));
      dottedQF4196 = T24;
      if (dottedQF4196 != YPfalse) {
        T23 = VARREF(YevalSastYDsexpr_optionals_type_name);
      } else {
        T23 = stypeF4195;
      }
      stypeF4197 = T23;
      T22 = CALL3(1,VARREF(YevalSastYobjectify),stypeF4197,r_,YPfalse);
      typeF4198 = T22;
      T21 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSmoduleYbinding_name),snameF4194,VARREF(YevalSmoduleYbinding_type),typeF4198,VARREF(YevalSastYbinding_dottedQ),dottedQF4196);
      bindingF4199 = T21;
      T17 = CALL1(1,VARREF(Ytail),paramsF4184);
      T18 = CALL2(1,VARREF(YgooSmacrosYpair),bindingF4199,bindingsF4186);
      T19 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG),VARREF(Yhead),snameF4194,VARREF(Ytail),namesF4187);
      T20 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG),VARREF(Yhead),typeF4198,VARREF(Ytail),typesF4188);
      a186_0 = T17;
      a186_1 = dottedQF4196;
      a186_2 = T18;
      a186_3 = T19;
      a186_4 = T20;
      paramsF4184 = a186_0;
      naryQF4185 = a186_1;
      bindingsF4186 = a186_2;
      namesF4187 = a186_3;
      typesF4188 = a186_4;
      goto LOOP_186;
      T0 = T16;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_compute_local_reference_offsets_280) {
  P binding_,r_;
  P bindingsF4203;
  P jF4202;
  P rF4201;
  P iF4200;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(binding_, 0);
  ARG(r_, 1);
  iF4200 = YPint((P)0);
  rF4201 = r_;
  LOOP_187: {
    P a187_0,a187_1;
    T1 = CALL2(1,VARREF(YisaQ),rF4201,VARREF(YevalSmoduleYLstatic_local_environmentG));
    if (T1 != YPfalse) {
      jF4202 = YPint((P)0);
      T14 = CALL1(1,VARREF(YevalSmoduleYenvironment_bindings),rF4201);
      bindingsF4203 = T14;
      LOOP_188: {
        P a188_0,a188_1;
        T3 = CALL1(1,VARREF(YgooSmacrosYnulQ),bindingsF4203);
        if (T3 != YPfalse) {
          T5 = CALL2(1,VARREF(YgooSmathYA),iF4200,YPint((P)1));
          T6 = CALL1(1,VARREF(YevalSmoduleYenvironment_next),rF4201);
          a187_0 = T5;
          a187_1 = T6;
          iF4200 = a187_0;
          rF4201 = a187_1;
          goto LOOP_187;
          T2 = T4;
        } else {
          T9 = CALL1(1,VARREF(Yhead),bindingsF4203);
          T8 = CALL2(1,VARREF(YgooSmacrosYEE),T9,binding_);
          if (T8 != YPfalse) {
            T10 = CALL2(1,VARREF(Ytup),iF4200,jF4202);
            T7 = T10;
          } else {
            T12 = CALL2(1,VARREF(YgooSmathYA),jF4202,YPint((P)1));
            T13 = CALL1(1,VARREF(Ytail),bindingsF4203);
            a188_0 = T12;
            a188_1 = T13;
            jF4202 = a188_0;
            bindingsF4203 = a188_1;
            goto LOOP_188;
            T7 = T11;
          }
          T2 = T7;
        }
      }
      T0 = T2;
    } else {
      T16 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
      T15 = CALL3(1,VARREF(YevalSmoduleYnamespace_error),LITREF(lit_589),T16,rF4201);
      T0 = T15;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_binding_281) {
  P n_,b_,r_;
  P jF4206;
  P iF4205;
  P tup34F4204;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(n_, 0);
  ARG(b_, 1);
  ARG(r_, 2);
  T4 = CALL2(1,VARREF(YevalSastYcompute_local_reference_offsets),b_,r_);
  tup34F4204 = T4;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup34F4204,YPint((P)0));
  iF4205 = T3;
  T2 = CALL2(1,VARREF(YgooSmacrosYelt),tup34F4204,YPint((P)1));
  jF4206 = T2;
  T0 = CALL1(1,VARREF(YevalSastYbinding_value),b_);
  CALL1(1,VARREF(YevalSastYincf_ref_count),T0);
  T1 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_binding),b_,VARREF(YevalSastYreference_frame_number),iF4205,VARREF(YevalSastYreference_frame_offset),jF4206);
UNLINK_STACK();
  RET(T1);
}

LOCCODEDEF(fun_binding_reference_class_282) {
  P b_;
  P x_1513F4208;
  P x_1512F4207;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(b_, 0);
  T14 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),b_);
  x_1512F4207 = T14;
  x_1513F4208 = VARREF(YgooSmacrosYEE);
  T1 = CALL2(1,x_1513F4208,x_1512F4207,LITREF(lit_532));
  if (T1 != YPfalse) {
    T0 = VARREF(YevalSastYLglobal_referenceG);
  } else {
    T3 = CALL2(1,x_1513F4208,x_1512F4207,LITREF(lit_567));
    if (T3 != YPfalse) {
      T2 = VARREF(YevalSastYLpredefined_referenceG);
    } else {
      T5 = CALL2(1,x_1513F4208,x_1512F4207,LITREF(lit_530));
      if (T5 != YPfalse) {
        T4 = VARREF(YevalSastYLruntime_referenceG);
      } else {
        T7 = CALL2(1,x_1513F4208,x_1512F4207,LITREF(lit_543));
        if (T7 != YPfalse) {
          T6 = VARREF(YevalSastYLdynamic_referenceG);
        } else {
          T9 = CALL2(1,x_1513F4208,x_1512F4207,LITREF(lit_554));
          if (T9 != YPfalse) {
            T8 = VARREF(YevalSastYLmacro_referenceG);
          } else {
            T11 = CALL2(1,x_1513F4208,x_1512F4207,LITREF(lit_531));
            if (T11 != YPfalse) {
              T10 = VARREF(YevalSastYLmagic_referenceG);
            } else {
              T13 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),b_);
              T12 = CALL2(1,VARREF(YevalSdependencyYast_error),LITREF(lit_594),T13);
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

LOCCODEDEF(fun_objectify_binding_283) {
  P n_,b_,r_;
  P LrefGF4209;
  P T0,T1;
LINK_STACK();
  ARG(n_, 0);
  ARG(b_, 1);
  ARG(r_, 2);
  CALL2(1,VARREF(YevalSmoduleYregister_referenced_binding),r_,b_);
  T1 = CALL1(1,VARREF(YevalSastYbinding_reference_class),b_);
  LrefGF4209 = T1;
  T0 = CALL3(1,VARREF(Ynew),LrefGF4209,VARREF(YevalSastYreference_binding),b_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_binding_284) {
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

LOCCODEDEF(fun_default_type_285) {
  P r_;
  P T0;
LINK_STACK();
  ARG(r_, 0);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),LITREF(lit_599),r_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_free_global_reference_286) {
  P name_,r_;
  P bF4211;
  P grF4210;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  T8 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  grF4210 = T8;
  T2 = CALL1(1,VARREF(YevalSmoduleYenvironment_allows_foreign_namesQ),grF4210);
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
    T6 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_freeQ),YPtrue,VARREF(YevalSmoduleYbinding_kind),LITREF(lit_532),VARREF(YevalSmoduleYbinding_name),name_,VARREF(YevalSmoduleYbinding_module),T7);
    bF4211 = T6;
    CALL2(1,VARREF(YevalSmoduleYinsert_globalX),bF4211,grF4210);
    CALL2(1,VARREF(YevalSmoduleYregister_referenced_binding),grF4210,bF4211);
    T5 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYreference_binding),bF4211);
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

LOCCODEDEF(fun_objectify_foreign_reference_288) {
  P name_,r_;
  P bindingF4219;
  P modF4218;
  P loaderF4217;
  P grF4216;
  P varnameF4215;
  P modnameF4214;
  P breakF4213;
  P namestrF4212;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  T22 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  namestrF4212 = T22;
  T21 = CALL2(1,VARREF(YgooScolsSseqYpos),namestrF4212,YPchr((P)58));
  breakF4213 = T21;
  T20 = CALL3(1,VARREF(YgooScolsSseqYsub),namestrF4212,YPint((P)0),breakF4213);
  modnameF4214 = T20;
  T18 = CALL2(1,VARREF(YgooSmathYA),YPint((P)1),breakF4213);
  T19 = CALL1(1,VARREF(YgooStypesYlen),namestrF4212);
  T17 = CALL3(1,VARREF(YgooScolsSseqYsub),namestrF4212,T18,T19);
  varnameF4215 = T17;
  T3 = CALL1(1,VARREF(YgooStypesYlen),modnameF4214);
  T2 = CALL2(1,VARREF(YgooSmagYG),T3,YPint((P)0));
  if (T2 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooStypesYlen),varnameF4215);
    T4 = CALL2(1,VARREF(YgooSmagYG),T5,YPint((P)0));
    T1 = T4;
  } else {
    T1 = YPfalse;
  }
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T6 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_606),name_);
  } else {
  }
  T16 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  grF4216 = T16;
  T15 = CALL1(1,VARREF(YevalSmoduleYenvironment_module_loader),grF4216);
  loaderF4217 = T15;
  T14 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),modnameF4214);
  T13 = CALL2(1,VARREF(YevalSmoduleYprobe_module),loaderF4217,T14);
  modF4218 = T13;
  T11 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),varnameF4215);
  T12 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),modF4218);
  T10 = CALL2(1,VARREF(YevalSmoduleYfind_binding),T11,T12);
  bindingF4219 = T10;
  CALL2(1,VARREF(YevalSmoduleYinsert_globalX),bindingF4219,grF4216);
  T7 = CALL1(1,VARREF(Ynot),bindingF4219);
  if (T7 != YPfalse) {
    T8 = CALL3(1,VARREF(YevalSmoduleYnamespace_error),LITREF(lit_607),varnameF4215,modnameF4214);
  } else {
  }
  T9 = CALL3(1,VARREF(YevalSastYobjectify_binding),name_,bindingF4219,r_);
UNLINK_STACK();
  RET(T9);
}

LOCCODEDEF(fun_objectify_symbol_289) {
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

LOCCODEDEF(fun_ftype_290) {
  P r_;
  P T0;
LINK_STACK();
  ARG(r_, 0);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),LITREF(lit_612),r_,YPfalse);
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

LOCCODEDEF(fun_nul_292) {
  P e_;
LINK_STACK();
  ARG(e_, 0);
UNLINK_STACK();
  RET(VARREF(YevalSastYDfunctions_nul));
}

LOCCODEDEF(fun_293) {
  P n_;
  P T0,T1;
LINK_STACK();
  ARG(n_, 0);
  T1 = CALL1(1,VARREF(YevalSastYftype),FREEREF(0));
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSmoduleYbinding_name),n_,VARREF(YevalSmoduleYbinding_type),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_294) {
  P sig_,body_;
  P lineF4221;
  P tmpF4220;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(sig_, 0);
  ARG(body_, 1);
  T3 = CALL1(1,VARREF(YgooScolsSlstYline_of),sig_);
  tmpF4220 = T3;
  if (tmpF4220 != YPfalse) {
    T1 = tmpF4220;
  } else {
    T2 = CALL1(1,VARREF(YgooScolsSlstYline_of),body_);
    T1 = T2;
  }
  lineF4221 = T1;
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLast_methodG),VARREF(YevalSastYprogram_line),lineF4221);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_295) {
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

LOCCODEDEF(fun_objectify_locals_296) {
  P names_,sigs_,bodies_,body_,r_,tailQ_;
  P sigF4235;
  P bodyF4234;
  P metF4233;
  P varF4232;
  P tmpF4231;
  P tmpF4230;
  P tmpF4229;
  P x_1514F4228;
  P x_1515F4227;
  P x_1516F4226;
  P x_1517F4225;
  P metsF4224;
  P new_rF4223;
  P varsF4222;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
LINK_STACK();
  ARG(names_, 0);
  ARG(sigs_, 1);
  ARG(bodies_, 2);
  ARG(body_, 3);
  ARG(r_, 4);
  ARG(tailQ_, 5);
  T30 = FUNFAB(fun_293,1,r_);
  T29 = CALL2(1,VARREF(YgooSmacrosYmap),T30,names_);
  varsF4222 = T29;
  T28 = CALL2(1,VARREF(YevalSastYr_extendT),r_,varsF4222);
  new_rF4223 = T28;
  T27 = fun_294;
  T26 = CALL3(1,VARREF(YgooSmacrosYmap2),T27,sigs_,bodies_);
  metsF4224 = T26;
  T18 = CALL1(1,VARREF(YgooScolsScolYenum),varsF4222);
  x_1517F4225 = T18;
  T19 = CALL1(1,VARREF(YgooScolsScolYenum),metsF4224);
  x_1516F4226 = T19;
  T20 = CALL1(1,VARREF(YgooScolsScolYenum),bodies_);
  x_1515F4227 = T20;
  T21 = CALL1(1,VARREF(YgooScolsScolYenum),sigs_);
  x_1514F4228 = T21;
  LOOP_189: {
    P a189_0,a189_1,a189_2,a189_3;
    T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1517F4225);
    tmpF4229 = T8;
    if (tmpF4229 != YPfalse) {
      T2 = tmpF4229;
    } else {
      T7 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1516F4226);
      tmpF4230 = T7;
      if (tmpF4230 != YPfalse) {
        T3 = tmpF4230;
      } else {
        T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1515F4227);
        tmpF4231 = T6;
        if (tmpF4231 != YPfalse) {
          T4 = tmpF4231;
        } else {
          T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1514F4228);
          T4 = T5;
        }
        T3 = T4;
      }
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T17 = CALL1(1,VARREF(YgooScolsScolYnow),x_1517F4225);
      varF4232 = T17;
      T16 = CALL1(1,VARREF(YgooScolsScolYnow),x_1516F4226);
      metF4233 = T16;
      T15 = CALL1(1,VARREF(YgooScolsScolYnow),x_1515F4227);
      bodyF4234 = T15;
      T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1514F4228);
      sigF4235 = T14;
      CALL2(1,VARREF(YevalSastYbinding_value_setter),metF4233,varF4232);
      CALL5(1,VARREF(YevalSastYobjectify_function_using),metF4233,sigF4235,bodyF4234,new_rF4223,YPfalse);
      T10 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1517F4225);
      T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1516F4226);
      T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1515F4227);
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1514F4228);
      a189_0 = T10;
      a189_1 = T11;
      a189_2 = T12;
      a189_3 = T13;
      x_1517F4225 = a189_0;
      x_1516F4226 = a189_1;
      x_1515F4227 = a189_2;
      x_1514F4228 = a189_3;
      goto LOOP_189;
      T0 = T9;
    } else {
      T0 = YPfalse;
    }
  }
  T22 = FUNFAB(fun_295,1,r_);
  CALL3(1,VARREF(YgooScolsSseqYdo2),T22,metsF4224,varsF4222);
  T24 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSchrYfabs),YPfalse,VARREF(YevalSastYLfunctionsG),metsF4224);
  T25 = CALL3(1,VARREF(YevalSastYobjectify_sequential),body_,new_rF4223,YPtrue);
  T23 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_bindings),varsF4222,VARREF(YevalSastYlocals_functions),T24,VARREF(YevalSastYlocals_body),T25);
UNLINK_STACK();
  RET(T23);
}

LOCCODEDEF(fun_objectify_bind_exit_297) {
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

LOCCODEDEF(fun_objectify_unwind_protect_298) {
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

LOCCODEDEF(fun_objectify_monitor_299) {
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

LOCCODEDEF(fun_objectify_refs_300) {
  P eT_,r_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(eT_, 0);
  ARG(r_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),eT_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooScolsScolYnul),VARREF(YevalSastYLinline_refsG));
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yhead),eT_);
    T4 = CALL3(1,VARREF(YevalSastYobjectify),T5,r_,YPfalse);
    T7 = CALL1(1,VARREF(Ytail),eT_);
    T6 = CALL2(1,VARREF(YevalSastYobjectify_refs),T7,r_);
    T3 = CALL2(1,VARREF(YevalSastYinline_refs),T4,T6);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_split_c_inline_vals_301) {
  P vals_;
  P refsF4238;
  P strsF4237;
  P valsF4236;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(vals_, 0);
  T12 = CALL1(1,VARREF(Ytail),vals_);
  valsF4236 = T12;
  T14 = CALL1(1,VARREF(YgooSmacrosY1st),vals_);
  T13 = CALL1(1,VARREF(Ylst),T14);
  strsF4237 = T13;
  refsF4238 = Ynil;
  LOOP_190: {
    P a190_0,a190_1,a190_2;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),valsF4236);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YgooSmacrosYrevX),strsF4237);
      T4 = CALL1(1,VARREF(YgooSmacrosYrevX),refsF4238);
      T2 = CALL2(1,VARREF(Ytup),T3,T4);
      T0 = T2;
    } else {
      T7 = CALL1(1,VARREF(Ytail),valsF4236);
      T6 = CALL1(1,VARREF(Ytail),T7);
      T9 = CALL1(1,VARREF(YgooSmacrosY2nd),valsF4236);
      T8 = CALL2(1,VARREF(YgooScolsScolYadd),strsF4237,T9);
      T11 = CALL1(1,VARREF(YgooSmacrosY1st),valsF4236);
      T10 = CALL2(1,VARREF(YgooScolsScolYadd),refsF4238,T11);
      a190_0 = T6;
      a190_1 = T8;
      a190_2 = T10;
      valsF4236 = a190_0;
      strsF4237 = a190_1;
      refsF4238 = a190_2;
      goto LOOP_190;
      T0 = T5;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_c_expr_302) {
  P x_,exprQ_,r_,tailQ_;
  P refsF4242;
  P ref_strsF4241;
  P strsF4240;
  P tup35F4239;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(exprQ_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T4 = CALL1(1,VARREF(YevalSastYsplit_c_inline_vals),x_);
  tup35F4239 = T4;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup35F4239,YPint((P)0));
  strsF4240 = T3;
  T2 = CALL2(1,VARREF(YgooSmacrosYelt),tup35F4239,YPint((P)1));
  ref_strsF4241 = T2;
  T1 = CALL2(1,VARREF(YevalSastYobjectify_refs),ref_strsF4241,r_);
  refsF4242 = T1;
  T0 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLc_inlineG),VARREF(YevalSastYc_inline_refs),refsF4242,VARREF(YevalSastYc_inline_strs),strsF4240,VARREF(YevalSastYc_inline_exprQ),exprQ_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_c_inline_303) {
  P x_,r_,tailQ_;
  P moduleF4244;
  P resF4243;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T6 = CALL4(1,VARREF(YevalSastYobjectify_c_expr),x_,YPfalse,r_,tailQ_);
  resF4243 = T6;
  T2 = CALL1(1,VARREF(YevalSmoduleYenvironment_next),r_);
  T1 = CALL2(1,VARREF(YisaQ),T2,VARREF(YevalSmoduleYLstatic_nul_environmentG));
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSmoduleYfind_environment_module),r_);
    moduleF4244 = T5;
    T3 = CALL1(1,VARREF(YevalSmoduleYmodule_c_forms),moduleF4244);
    CALL2(1,VARREF(YgooScolsSseqxYpushX),T3,resF4243);
    T4 = CALL2(1,VARREF(YevalSastYobjectify_quotation),YPfalse,r_);
    T0 = T4;
  } else {
    T0 = resF4243;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_304) {
LINK_STACK();
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_305) {
  P c_,r_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_306) {
  P T0;
LINK_STACK();
  T0 = CALL2(1,VARREF(YevalSmoduleYnamespace_error),LITREF(lit_643),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_307) {
  P exit_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(exit_, 0);
  T2 = CALL1(1,VARREF(Ylst),FREEREF(0));
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSfunYLsimple_handler_infoG),VARREF(YgooSfunYhandler_info_message),LITREF(lit_641),VARREF(YgooSfunYhandler_info_arguments),T2);
  T3 = fun_304;
  T4 = FUNFAB(fun_305,1,exit_);
  T5 = FUNFAB(fun_306,1,FREEREF(0));
  T0 = XCALLN(1,YPwith_monitor,5,VARREF(YgooSconditionsYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_308) {
  P name_;
  P bindingF4245;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(name_, 0);
  T5 = CALL2(1,VARREF(YevalSmoduleYfind_binding),name_,FREEREF(0));
  bindingF4245 = T5;
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),bindingF4245,YPfalse);
  if (T1 != YPfalse) {
    T3 = FUNFAB(fun_307,1,name_);
    T2 = with_exit(T3);
    T0 = T2;
  } else {
    T4 = CALL3(1,VARREF(YevalSmoduleYexport_bindingX),FREEREF(1),name_,bindingF4245);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_export_309) {
  P names_,r_,tailQ_;
  P moduleF4247;
  P envF4246;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(names_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T7 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  envF4246 = T7;
  T6 = CALL1(1,VARREF(YevalSmoduleYfind_environment_module),r_);
  moduleF4247 = T6;
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),moduleF4247);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),envF4246,T2);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSmoduleYnamespace_error),LITREF(lit_638));
  } else {
  }
  T4 = FUNFAB(fun_308,2,envF4246,moduleF4247);
  CALL2(1,VARREF(YgooSmacrosYdo),T4,names_);
  T5 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
UNLINK_STACK();
  RET(T5);
}

LOCCODEDEF(fun_310) {
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

LOCCODEDEF(fun_objectify_useSexport_module_311) {
  P name_,r_,tailQ_;
  P used_moduleF4251;
  P loaderF4250;
  P moduleF4249;
  P envF4248;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T7 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  envF4248 = T7;
  T6 = CALL1(1,VARREF(YevalSmoduleYfind_environment_module),r_);
  moduleF4249 = T6;
  T5 = CALL1(1,VARREF(YevalSmoduleYenvironment_module_loader),envF4248);
  loaderF4250 = T5;
  T4 = CALL2(1,VARREF(YevalSmoduleYprobe_module),loaderF4250,name_);
  used_moduleF4251 = T4;
  T0 = CALL1(1,VARREF(YevalSmoduleYenvironment_uses_modules),envF4248);
  CALL2(1,VARREF(YgooScolsSseqxYpushX),T0,used_moduleF4251);
  T1 = FUNFAB(fun_310,2,envF4248,moduleF4249);
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_exports),used_moduleF4251);
  CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
  T3 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
UNLINK_STACK();
  RET(T3);
}

LOCCODEDEF(fun_312) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSlogYE),x_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_use_include_313) {
  P name_,r_,tailQ_;
  P modF4253;
  P envF4252;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T8 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  envF4252 = T8;
  T7 = CALL1(1,VARREF(YevalSmoduleYenvironment_module),envF4252);
  modF4253 = T7;
  T2 = FUNFAB(fun_312,1,name_);
  T3 = CALL1(1,VARREF(YevalSmoduleYmodule_uses_c_includes),modF4253);
  T1 = CALL2(1,VARREF(YgooStypesYanyQ),T2,T3);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSmoduleYmodule_uses_c_includes),modF4253);
    T4 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T5,name_);
  } else {
  }
  T6 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
UNLINK_STACK();
  RET(T6);
}

LOCCODEDEF(fun_314) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSlogYE),x_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_use_library_315) {
  P name_,r_,tailQ_;
  P modF4255;
  P envF4254;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T8 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  envF4254 = T8;
  T7 = CALL1(1,VARREF(YevalSmoduleYenvironment_module),envF4254);
  modF4255 = T7;
  T2 = FUNFAB(fun_314,1,name_);
  T3 = CALL1(1,VARREF(YevalSmoduleYmodule_uses_c_libraries),modF4255);
  T1 = CALL2(1,VARREF(YgooStypesYanyQ),T2,T3);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSmoduleYmodule_uses_c_libraries),modF4255);
    T4 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T5,name_);
  } else {
  }
  T6 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
UNLINK_STACK();
  RET(T6);
}

LOCCODEDEF(fun_316) {
  P b_;
  P T0;
LINK_STACK();
  ARG(b_, 0);
  T0 = CALL2(1,VARREF(YevalSmoduleYimport_globalX),b_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_use_mod_317) {
  P name_;
  P used_moduleF4257;
  P loaderF4256;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(name_, 0);
  T4 = CALL1(1,VARREF(YevalSmoduleYenvironment_module_loader),FREEREF(0));
  loaderF4256 = T4;
  T3 = CALL2(1,VARREF(YevalSmoduleYprobe_module),loaderF4256,name_);
  used_moduleF4257 = T3;
  T0 = CALL1(1,VARREF(YevalSmoduleYenvironment_uses_modules),FREEREF(0));
  CALL2(1,VARREF(YgooScolsSseqxYpushX),T0,used_moduleF4257);
  T1 = FUNFAB(fun_316,1,FREEREF(0));
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_exports),used_moduleF4257);
  CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(used_moduleF4257);
}

LOCCODEDEF(fun_use_c_mod_318) {
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

LOCCODEDEF(fun_objectify_use_module_319) {
  P name_,r_,tailQ_;
  P swig_modF4266;
  P swig_mod_nameF4265;
  P tmpF4264;
  P x_1520F4263;
  P x_1519F4262;
  P use_c_modF4261;
  P use_modF4260;
  P modF4259;
  P envF4258;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T21 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  envF4258 = T21;
  T20 = CALL1(1,VARREF(YevalSmoduleYenvironment_module),envF4258);
  modF4259 = T20;
  T17 = FUNSHELL(1,fun_use_mod_317,1);
  use_modF4260 = T17;
  T18 = fun_use_c_mod_318;
  use_c_modF4261 = T18;
  FUNINIT(use_modF4260, 1,envF4258);
  T16 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  x_1519F4262 = T16;
  x_1520F4263 = VARREF(YgooScolsSseqYsuffixQ);
  T3 = CALL2(1,x_1520F4263,x_1519F4262,LITREF(lit_660));
  tmpF4264 = T3;
  if (tmpF4264 != YPfalse) {
    T1 = tmpF4264;
  } else {
    T2 = CALL2(1,x_1520F4263,x_1519F4262,LITREF(lit_661));
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
    T4 = CALL2(1,use_c_modF4261,modF4259,T5);
    T0 = T4;
  } else {
    T7 = CALL2(1,x_1520F4263,x_1519F4262,LITREF(lit_662));
    if (T7 != YPfalse) {
      T14 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
      T13 = CALL2(1,VARREF(YgooScolsSseqYsplit),T14,YPchr((P)46));
      T12 = CALL1(1,VARREF(YgooSmacrosY1st),T13);
      T11 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T12);
      swig_mod_nameF4265 = T11;
      T10 = CALL1(1,use_modF4260,swig_mod_nameF4265);
      swig_modF4266 = T10;
      T9 = CALL2(1,VARREF(YgooSmacrosYcat_sym),name_,LITREF(lit_663));
      T8 = CALL2(1,use_c_modF4261,swig_modF4266,T9);
      T6 = T8;
    } else {
      T15 = CALL1(1,use_modF4260,name_);
      T6 = T15;
    }
    T0 = T6;
  }
  T19 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
UNLINK_STACK();
  RET(T19);
}

LOCCODEDEF(fun_320) {
  P b_;
  P T0;
LINK_STACK();
  ARG(b_, 0);
  T0 = CALL3(1,VARREF(YevalSmoduleYimport_and_mangle_globalX),b_,FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_use_mangle_module_321) {
  P name_,mangler_,r_,tailQ_;
  P str_manglerF4271;
  P used_moduleF4270;
  P loaderF4269;
  P moduleF4268;
  P envF4267;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(name_, 0);
  ARG(mangler_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T8 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  envF4267 = T8;
  T7 = CALL1(1,VARREF(YevalSmoduleYfind_environment_module),r_);
  moduleF4268 = T7;
  T6 = CALL1(1,VARREF(YevalSmoduleYenvironment_module_loader),envF4267);
  loaderF4269 = T6;
  T5 = CALL2(1,VARREF(YevalSmoduleYprobe_module),loaderF4269,name_);
  used_moduleF4270 = T5;
  T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),mangler_);
  str_manglerF4271 = T4;
  T0 = CALL1(1,VARREF(YevalSmoduleYenvironment_uses_modules),envF4267);
  CALL2(1,VARREF(YgooScolsSseqxYpushX),T0,used_moduleF4270);
  T1 = FUNFAB(fun_320,2,str_manglerF4271,envF4267);
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_exports),used_moduleF4270);
  CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
  T3 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
UNLINK_STACK();
  RET(T3);
}

LOCCODEDEF(fun_expand_bind_list_322) {
  P pat_,var_,fail_;
  P T0;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T0 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_669),pat_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_expand_bind_list_323) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_671));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T3 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,LITREF(lit_8));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_expand_bind_list_324) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquoteQ),pat_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_673),pat_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquote_splicingQ),pat_);
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_674),pat_);
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

LOCCODEDEF(fun_expand_bind_listT_325) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_671));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T3 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,LITREF(lit_8));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_expand_bind_listT_326) {
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

LOCCODEDEF(fun_expand_bind_element_327) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_680));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_681));
  T6 = CALL1(1,VARREF(Ylst),pat_);
  T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,T6,Ynil);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T7 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL5(1,VARREF(YgooSmacrosYcat),T1,T2,T3,T7,LITREF(lit_8));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_expand_bind_element_328) {
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
    T11 = CALL1(1,VARREF(Ylst),LITREF(lit_683));
    T12 = CALL1(1,VARREF(Ylst),var_);
    T13 = CALL1(1,VARREF(Ylst),fail_);
    T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,LITREF(lit_8));
    T9 = CALL1(1,VARREF(Ylst),T10);
    T5 = CALL4(1,VARREF(YgooSmacrosYcat),T6,T7,T9,LITREF(lit_8));
    T4 = CALL1(1,VARREF(Ylst),T5);
    T16 = CALL1(1,VARREF(Ylst),LITREF(lit_684));
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
      T30 = CALL1(1,VARREF(Ylst),LITREF(lit_681));
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
        T45 = CALL1(1,VARREF(Ylst),LITREF(lit_685));
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
        T52 = CALL1(1,VARREF(Ylst),LITREF(lit_684));
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

LOCCODEDEF(fun_expand_pattern_329) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_688));
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_689));
  T5 = CALL1(1,VARREF(Ylst),var_);
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_690));
  T3 = CALL4(1,VARREF(YgooSmacrosYcat),T4,T5,T6,LITREF(lit_8));
  T2 = CALL1(1,VARREF(Ylst),T3);
  T8 = CALL3(1,VARREF(YevalSastYexpand_bind_list),pat_,var_,fail_);
  T7 = CALL1(1,VARREF(Ylst),T8);
  T11 = CALL1(1,VARREF(Ylst),fail_);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_691));
  T13 = CALL1(1,VARREF(Ylst),var_);
  T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,LITREF(lit_8));
  T9 = CALL1(1,VARREF(Ylst),T10);
  T0 = CALL5(1,VARREF(YgooSmacrosYcat),T1,T2,T7,T9,LITREF(lit_8));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_330) {
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

LOCCODEDEF(fun_expand_syntax_if_331) {
  P x_;
  P epatF4279;
  P failF4278;
  P varF4277;
  P elseF4276;
  P thenF4275;
  P valueF4274;
  P varsF4273;
  P patF4272;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49;
LINK_STACK();
  ARG(x_, 0);
  T49 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_pattern),x_);
  patF4272 = T49;
  T48 = CALL1(1,VARREF(YevalSsyntaxYsexpr_bind_pattern_variables),patF4272);
  varsF4273 = T48;
  T47 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_value),x_);
  valueF4274 = T47;
  T46 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_then),x_);
  thenF4275 = T46;
  T45 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_else),x_);
  elseF4276 = T45;
  T44 = CALL0(1,VARREF(YgooSmacrosYgensym));
  varF4277 = T44;
  T43 = CALL0(1,VARREF(YgooSmacrosYgensym));
  failF4278 = T43;
  T42 = CALL3(1,VARREF(YevalSastYexpand_pattern),patF4272,varF4277,failF4278);
  epatF4279 = T42;
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_694));
  T2 = CALL1(1,VARREF(Ylst),LITREF(lit_695));
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_696));
  T10 = CALL1(1,VARREF(Ylst),failF4278);
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_697));
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_698));
  T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T16,LITREF(lit_8));
  T13 = CALL1(1,VARREF(Ylst),T14);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_699));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_583));
  T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,LITREF(lit_8));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T12 = CALL3(1,VARREF(YgooSmacrosYcat),T13,T17,LITREF(lit_8));
  T11 = CALL1(1,VARREF(Ylst),T12);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_695));
  T24 = CALL1(1,VARREF(Ylst),elseF4276);
  T22 = CALL3(1,VARREF(YgooSmacrosYcat),T23,T24,LITREF(lit_8));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T9 = CALL4(1,VARREF(YgooSmacrosYcat),T10,T11,T21,LITREF(lit_8));
  T8 = CALL1(1,VARREF(Ylst),T9);
  T7 = CALL2(1,VARREF(YgooSmacrosYcat),T8,LITREF(lit_8));
  T6 = CALL1(1,VARREF(Ylst),T7);
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T32 = CALL1(1,VARREF(Ylst),varF4277);
  T33 = CALL1(1,VARREF(Ylst),valueF4274);
  T31 = CALL3(1,VARREF(YgooSmacrosYcat),T32,T33,LITREF(lit_8));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T29 = CALL2(1,VARREF(YgooSmacrosYcat),T30,LITREF(lit_8));
  T28 = CALL1(1,VARREF(Ylst),T29);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T39 = fun_330;
  T38 = CALL2(1,VARREF(YgooSmacrosYmap),T39,varsF4273);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T40 = CALL1(1,VARREF(Ylst),epatF4279);
  T41 = CALL1(1,VARREF(Ylst),thenF4275);
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

LOCCODEDEF(fun_r_extendT_332) {
  P r_,bindings_;
  P T0;
LINK_STACK();
  ARG(r_, 0);
  ARG(bindings_, 1);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSmoduleYLstatic_local_environmentG),VARREF(YevalSmoduleYenvironment_next),r_,VARREF(YevalSmoduleYenvironment_bindings),bindings_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_find_binding_333) {
  P name_,r_;
  P bindingsF4280;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  T11 = CALL1(1,VARREF(YevalSmoduleYenvironment_bindings),r_);
  bindingsF4280 = T11;
  LOOP_191: {
    P a191_0;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),bindingsF4280);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YevalSmoduleYenvironment_next),r_);
      T2 = CALL2(1,VARREF(YevalSmoduleYfind_binding),name_,T3);
      T0 = T2;
    } else {
      T7 = CALL1(1,VARREF(Yhead),bindingsF4280);
      T6 = CALL1(1,VARREF(YevalSmoduleYbinding_name),T7);
      T5 = CALL2(1,VARREF(YgooSmacrosYEE),name_,T6);
      if (T5 != YPfalse) {
        T8 = CALL1(1,VARREF(Yhead),bindingsF4280);
        T4 = T8;
      } else {
        T10 = CALL1(1,VARREF(Ytail),bindingsF4280);
        a191_0 = T10;
        bindingsF4280 = a191_0;
        goto LOOP_191;
        T4 = T9;
      }
      T0 = T4;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_find_binding_334) {
  P name_,r_;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_register_magic_binding_335) {
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

LOCCODEDEF(fun_magic_bindings_336) {
LINK_STACK();
UNLINK_STACK();
  QRET(VARREF(YevalSastYTmagic_bindingsT));
}

LOCCODEDEF(fun_x_1524_337) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_713),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_338) {
  P return_;
  P sexpr_nameF4295;
  P special_nameF4294;
  P x_1523F4293;
  P x_1523F4292;
  P x_1523F4291;
  P x_1523F4290;
  P x_1523F4289;
  P x_1523F4288;
  P x_1523F4287;
  P x_1523F4286;
  P bodyF4285;
  P paramsF4284;
  P nameF4283;
  P x_1523F4282;
  P x_1524F4281;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57;
LINK_STACK();
  ARG(return_, 0);
  T57 = FUNSHELL(0,fun_x_1524_337,2);
  x_1524F4281 = T57;
  FUNINIT(x_1524F4281, 2,FREEREF(0),return_);
  x_1523F4282 = FREEREF(0);
  nameF4283 = YPfalse;
  paramsF4284 = YPfalse;
  bodyF4285 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1523F4282,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1523F4282,LITREF(lit_713),x_1524F4281);
    x_1523F4286 = T13;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1523F4286,x_1524F4281);
    nameF4283 = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1523F4286);
    x_1523F4287 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1523F4287,x_1524F4281);
    x_1523F4288 = T9;
    paramsF4284 = x_1523F4288;
    x_1523F4289 = Ynil;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1523F4289,x_1524F4281);
    x_1523F4290 = T7;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1523F4290,x_1524F4281);
    T8 = CALL1(1,VARREF(Ytail),x_1523F4289);
    x_1523F4291 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1523F4291,x_1524F4281);
    T10 = CALL1(1,VARREF(Ytail),x_1523F4287);
    x_1523F4292 = T10;
    bodyF4285 = x_1523F4292;
    x_1523F4293 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1523F4293,x_1524F4281);
  } else {
    T14 = CALL2(1,x_1524F4281,LITREF(lit_5),x_1523F4282);
  }
  T56 = nameF4283;
  T55 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_714),T56);
  special_nameF4294 = T55;
  T54 = nameF4283;
  T53 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_715),T54,LITREF(lit_716));
  sexpr_nameF4295 = T53;
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_717));
  T20 = CALL1(1,VARREF(Ylst),special_nameF4294);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_718));
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_719));
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_720));
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_681));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_531));
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),T28,T29,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_721));
  T31 = CALL1(1,VARREF(Ylst),sexpr_nameF4295);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_722));
  T33 = CALL1(1,VARREF(Ylst),YPfalse);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_723));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_578));
  T40 = paramsF4284;
  T39 = CALL2(1,VARREF(YgooSmacrosYcat),T40,LITREF(lit_8));
  T38 = CALL1(1,VARREF(Ylst),T39);
  T41 = bodyF4285;
  T36 = CALL4(1,VARREF(YgooSmacrosYcat),T37,T38,T41,LITREF(lit_8));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_724));
  T43 = CALL1(1,VARREF(Ylst),YPfalse);
  T22 = CALLN(1,VARREF(YgooSmacrosYcat),13,T23,T24,T25,T26,T30,T31,T32,T33,T34,T35,T42,T43,LITREF(lit_8));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T18 = CALL4(1,VARREF(YgooSmacrosYcat),T19,T20,T21,LITREF(lit_8));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_706));
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_681));
  T51 = nameF4283;
  T50 = CALL1(1,VARREF(Ylst),T51);
  T48 = CALL3(1,VARREF(YgooSmacrosYcat),T49,T50,Ynil);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T52 = CALL1(1,VARREF(Ylst),special_nameF4294);
  T45 = CALL4(1,VARREF(YgooSmacrosYcat),T46,T47,T52,LITREF(lit_8));
  T44 = CALL1(1,VARREF(Ylst),T45);
  T15 = CALL4(1,VARREF(YgooSmacrosYcat),T16,T17,T44,LITREF(lit_8));
UNLINK_STACK();
  QRET(T15);
}

LOCCODEDEF(fun_339) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_338,1,exp_);
  T0 = with_exit(T1);
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
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_if_test),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_if_then),x_);
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_if_else),x_);
  T0 = CALL5(1,VARREF(YevalSastYobjectify_alternative),T1,T2,T3,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_341) {
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

LOCCODEDEF(fun_342) {
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

LOCCODEDEF(fun_343) {
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

LOCCODEDEF(fun_344) {
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

LOCCODEDEF(fun_345) {
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

LOCCODEDEF(fun_346) {
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

LOCCODEDEF(fun_347) {
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

LOCCODEDEF(fun_348) {
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

LOCCODEDEF(fun_349) {
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

LOCCODEDEF(fun_350) {
  P x_,r_,tailQ_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_variable),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_adjectives),x_);
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_value),x_);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_method_definition),T1,T2,T3,r_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_351) {
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

LOCCODEDEF(fun_352) {
  P x_,r_,tailQ_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_variable),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_adjectives),x_);
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_value),x_);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_function_definition),T1,T2,T3,r_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_353) {
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

LOCCODEDEF(fun_354) {
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

LOCCODEDEF(fun_355) {
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

LOCCODEDEF(fun_356) {
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

LOCCODEDEF(fun_357) {
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

LOCCODEDEF(fun_358) {
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

LOCCODEDEF(fun_359) {
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

LOCCODEDEF(fun_360) {
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

LOCCODEDEF(fun_361) {
  P x_,r_,tailQ_;
  P bodyF4301;
  P handlerF4300;
  P testF4299;
  P infoF4298;
  P typeF4297;
  P tup36F4296;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T6 = CALL1(1,VARREF(YevalSsyntaxYsexpr_monitor_expand),x_);
  tup36F4296 = T6;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup36F4296,YPint((P)0));
  typeF4297 = T5;
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),tup36F4296,YPint((P)1));
  infoF4298 = T4;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup36F4296,YPint((P)2));
  testF4299 = T3;
  T2 = CALL2(1,VARREF(YgooSmacrosYelt),tup36F4296,YPint((P)3));
  handlerF4300 = T2;
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),tup36F4296,YPint((P)4));
  bodyF4301 = T1;
  T0 = CALLN(1,VARREF(YevalSastYobjectify_monitor),7,typeF4297,infoF4298,testF4299,handlerF4300,bodyF4301,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_pairize_362) {
  P args_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(args_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),args_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ylst),LITREF(lit_681),Ynil);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),args_);
    T6 = CALL1(1,VARREF(Ytail),args_);
    T5 = CALL1(1,VARREF(YevalSastYpairize),T6);
    T3 = CALL3(1,VARREF(Ylst),LITREF(lit_768),T4,T5);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_363) {
  P x_,r_,tailQ_;
  P nameF4302;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T10 = CALL1(1,VARREF(YevalSsyntaxYsexpr_definition_variable),x_);
  nameF4302 = T10;
  T2 = CALL1(1,VARREF(Ylst),LITREF(lit_770));
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_681));
  T6 = CALL1(1,VARREF(Ylst),nameF4302);
  T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,T6,Ynil);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_define_class_parents),x_);
  T8 = CALL1(1,VARREF(YevalSastYpairize),T9);
  T7 = CALL1(1,VARREF(Ylst),T8);
  T1 = CALL4(1,VARREF(YgooSmacrosYcat),T2,T3,T7,LITREF(lit_8));
  T0 = CALL5(1,VARREF(YevalSastYobjectify_definition),VARREF(YevalSastYLvariable_definitionG),LITREF(lit_532),nameF4302,T1,r_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_define_property_364) {
  P x_,setterQ_,r_,tailQ_;
  P setter_nameF4308;
  P lineF4307;
  P typeF4306;
  P ownerF4305;
  P varF4304;
  P nameF4303;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(x_, 0);
  ARG(setterQ_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T24 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_name),x_);
  nameF4303 = T24;
  T23 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_init_var),x_);
  varF4304 = T23;
  T22 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_owner),x_);
  ownerF4305 = T22;
  T21 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_type),x_);
  typeF4306 = T21;
  T20 = CALL1(1,VARREF(YgooScolsSlstYline_of),x_);
  lineF4307 = T20;
  if (setterQ_ != YPfalse) {
    T19 = CALL1(1,VARREF(YevalSsyntaxYsexpr_fab_setter_name),nameF4303);
    T18 = T19;
  } else {
    T18 = YPfalse;
  }
  setter_nameF4308 = T18;
  T3 = CALL3(1,VARREF(YevalSsyntaxYsexpr_fab_getter),nameF4303,ownerF4305,lineF4307);
  if (setterQ_ != YPfalse) {
    T5 = CALL4(1,VARREF(YevalSsyntaxYsexpr_fab_setter),nameF4303,ownerF4305,typeF4306,lineF4307);
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_initQ),x_);
  if (T9 != YPfalse) {
    T14 = CALL1(1,VARREF(Ylst),varF4304);
    T15 = CALL1(1,VARREF(Ylst),LITREF(lit_599));
    T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T15,LITREF(lit_8));
    T12 = CALL1(1,VARREF(Ylst),T13);
    T11 = CALL2(1,VARREF(YgooSmacrosYcat),T12,LITREF(lit_8));
    T17 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_init),x_);
    T16 = CALL2(1,VARREF(YgooScolsSlstYline_list),lineF4307,T17);
    T10 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),T11,T16);
    T8 = T10;
  } else {
    T8 = LITREF(lit_775);
  }
  T7 = CALL5(1,VARREF(Ylst),ownerF4305,nameF4303,setter_nameF4308,typeF4306,T8);
  T6 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_application),LITREF(lit_774),T7);
  T2 = CALL3(1,VARREF(Ylst),T3,T4,T6);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_make_begin),T2);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_365) {
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

LOCCODEDEF(fun_366) {
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

LOCCODEDEF(fun_367) {
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

LOCCODEDEF(fun_368) {
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

LOCCODEDEF(fun_369) {
  P x_,r_,tailQ_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_forward_primitiveQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_variable),x_);
    CALL4(1,VARREF(YevalSastYast_define_binding),r_,T2,YPfalse,LITREF(lit_567));
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

LOCCODEDEF(fun_370) {
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

LOCCODEDEF(fun_ast_macro_expand_371) {
  P x_,r_,tailQ_;
  P resF4311;
  P macF4310;
  P astF4309;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T6 = CALL1(1,VARREF(Yhead),x_);
  T5 = CALL3(1,VARREF(YevalSastYobjectify),T6,r_,tailQ_);
  astF4309 = T5;
  T1 = CALL2(1,VARREF(YisaQ),astF4309,VARREF(YevalSastYLmacro_referenceG));
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YevalSastYreference_binding),astF4309);
    macF4310 = T4;
    T3 = CALL1(1,VARREF(YevalSmoduleYbinding_handler),macF4310);
    T2 = CALL3(1,T3,x_,r_,tailQ_);
    resF4311 = T2;
    T0 = resF4311;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_372) {
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

LOCCODEDEF(fun_373) {
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

LOCCODEDEF(fun_374) {
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

LOCCODEDEF(fun_375) {
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

LOCCODEDEF(fun_376) {
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

LOCCODEDEF(fun_377) {
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

LOCCODEDEF(fun_378) {
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

LOCCODEDEF(fun_379) {
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

LOCCODEDEF(fun_380) {
  P x_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(Ytail),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_c_inline),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_381) {
  P x_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(Ytail),x_);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_c_expr),T1,YPtrue,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_382) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL2(1,VARREF(YevalSmoduleYfind_binding),name_,FREEREF(0));
  T0 = CALL2(1,VARREF(YevalSmoduleYinsert_globalX),T1,FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_install_initial_bindings_383) {
  P env_,loader_;
  P bootenvF4313;
  P bootmodF4312;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(env_, 0);
  ARG(loader_, 1);
  T3 = CALL2(1,VARREF(YevalSmoduleYprobe_module),loader_,VARREF(YevalSmoduleYDgoo_boot_module_name));
  bootmodF4312 = T3;
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),bootmodF4312);
  bootenvF4313 = T2;
  T1 = FUNFAB(fun_382,2,bootenvF4313,env_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,LITREF(lit_821));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_384) {
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
  T2 = FUNFAB(fun_384,3,e_,r_,tailQ_);
  T0 = CALL2(1,VARREF(YevalSmoduleYcall_with_subtransaction),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_386) {
  P binding_;
  P cloneF4314;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(binding_, 0);
  T3 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
  T2 = CALL4(1,VARREF(YevalSastYast_define_binding),FREEREF(0),T3,YPfalse,LITREF(lit_531));
  cloneF4314 = T2;
  T1 = CALL1(1,VARREF(YevalSmoduleYbinding_handler),binding_);
  T0 = CALL2(1,VARREF(YevalSmoduleYbinding_handler_setter),T1,cloneF4314);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYinstall_magic_bindings) {
  P env_;
  P T0,T1,T2;
LINK_STACK();
  ARG(env_, 0);
  T1 = FUNFAB(fun_386,1,env_);
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
  P bootenvF4316;
  P bootmodF4315;
  P T0,T1,T2;
LINK_STACK();
  CALL0(1,VARREF(YevalSmoduleYreload_modules));
  T2 = CALL0(1,VARREF(YevalSmoduleYruntime_module_loader));
  T1 = CALL2(1,VARREF(YevalSmoduleYprobe_module),T2,VARREF(YevalSmoduleYDgoo_boot_module_name));
  bootmodF4315 = T1;
  T0 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),bootmodF4315);
  bootenvF4316 = T0;
  CALL1(1,VARREF(YevalSastYinstall_magic_bindings),bootenvF4316);
  CALL0(1,VARREF(YevalSastYreload_macros));
  CALL1(1,VARREF(YevalSastYinstall_interpreter_hacks),bootenvF4316);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(YevalSastYfab_syntax_environment) {
  P module_;
  P T0,T1;
LINK_STACK();
  ARG(module_, 0);
  T1 = CALL1(1,VARREF(YevalSmoduleYruntime_module),LITREF(lit_834));
  T0 = CALL3(1,VARREF(YevalSmoduleYfab_subset_environment),module_,T1,VARREF(YevalSastYsyntax_environment_excluded_bindings));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYfab_g2c_module) {
  P loader_,name_;
  P target_envF4320;
  P syntax_envF4319;
  P moduleF4318;
  P typeF4317;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
  T6 = CALL1(1,VARREF(YevalSmoduleYmodule_loader_module_type),loader_);
  typeF4317 = T6;
  T5 = CALL3(1,VARREF(Ynew),typeF4317,VARREF(YevalSmoduleYmodule_name),name_);
  moduleF4318 = T5;
  T4 = CALL1(1,VARREF(YevalSastYfab_syntax_environment),moduleF4318);
  syntax_envF4319 = T4;
  T3 = CALL3(1,VARREF(YevalSmoduleYfab_static_global_environment),moduleF4318,loader_,YPfalse);
  target_envF4320 = T3;
  CALL3(1,VARREF(YevalSmoduleYset_module_environments),moduleF4318,syntax_envF4319,target_envF4320);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),name_,VARREF(YevalSmoduleYDgoo_boot_module_name));
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(YevalSastYinit_g2c_boot_environment),target_envF4320);
  } else {
    T2 = CALL2(1,VARREF(YevalSastYinit_g2c_regular_environment),target_envF4320,loader_);
  }
UNLINK_STACK();
  RET(moduleF4318);
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

LOCCODEDEF(fun_ast_contains_funQ_396) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(YPtrue);
}

LOCCODEDEF(fun_walk_397) {
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

LOCCODEDEF(fun_398) {
  P return_;
  P walkF4321;
  P T0,T1;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_walk_397,2);
  walkF4321 = T1;
  FUNINIT(walkF4321, 2,return_,walkF4321);
  T0 = CALL2(1,VARREF(YevalSastYast_walk),walkF4321,FREEREF(0));
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_ast_contains_funQ_399) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = FUNFAB(fun_398,1,x_);
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
  lit_2 = YPPsym((P)"x-1498");
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
  fun_x_1498_0 = YPfab_met(FUNCODEREF(fun_x_1498_0),T2,LITREF(lit_2),LITREF(lit_3),YPfalse,YPfalse);
  T1 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1 = YPfab_met(FUNCODEREF(fun_1),T1,YPfalse,LITREF(lit_1),YPfalse,YPfalse);
  T0 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPfab_met(FUNCODEREF(fun_2),T0,YPfalse,LITREF(lit_0),YPfalse,YPfalse);
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
  fun_ast_error_3 = YPfab_met(FUNCODEREF(fun_ast_error_3),T9,LITREF(lit_14),LITREF(lit_15),sloc(36),YPfalse);
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
  fun_program_type_4 = YPfab_met(FUNCODEREF(fun_program_type_4),T15,LITREF(lit_17),LITREF(lit_18),sloc(43),YPfalse);
  T17 = VARREF_OR(YevalSastYprogram_type,YPfalse);
  T18 = fun_program_type_4;
  T16 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T17,T18);
  VARSET(YevalSastYprogram_type,T16);
  lit_19 = YPPsym((P)"program-type-setter");
  lit_20 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T19 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_type_setter_5 = YPfab_met(FUNCODEREF(fun_program_type_setter_5),T19,LITREF(lit_19),LITREF(lit_20),sloc(43),YPfalse);
  T21 = VARREF_OR(YevalSastYprogram_type_setter,YPfalse);
  T22 = fun_program_type_setter_5;
  T20 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T21,T22);
  VARSET(YevalSastYprogram_type_setter,T20);
  lit_21 = YPPlist(1,YPPsym((P)"_x"));
  T23 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_6 = YPfab_met(FUNCODEREF(fun_6),T23,YPfalse,LITREF(lit_21),sloc(43),YPfalse);
  T24 = fun_6;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLprogramG),VARREF(YevalSastYprogram_type),VARREF(YevalSastYprogram_type_setter),VARREF(YLanyG),T24);
  lit_22 = YPPsym((P)"program-line");
  lit_23 = YPPlist(1,YPPsym((P)"_x"));
  T25 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_line_7 = YPfab_met(FUNCODEREF(fun_program_line_7),T25,LITREF(lit_22),LITREF(lit_23),sloc(44),YPfalse);
  T27 = VARREF_OR(YevalSastYprogram_line,YPfalse);
  T28 = fun_program_line_7;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YevalSastYprogram_line,T26);
  lit_24 = YPPsym((P)"program-line-setter");
  lit_25 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T30 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T29 = YPfab_sig(YPPlist(2,T30,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_line_setter_8 = YPfab_met(FUNCODEREF(fun_program_line_setter_8),T29,LITREF(lit_24),LITREF(lit_25),sloc(44),YPfalse);
  T32 = VARREF_OR(YevalSastYprogram_line_setter,YPfalse);
  T33 = fun_program_line_setter_8;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSastYprogram_line_setter,T31);
  lit_26 = YPPlist(1,YPPsym((P)"_x"));
  T34 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPfab_met(FUNCODEREF(fun_9),T34,YPfalse,LITREF(lit_26),sloc(44),YPfalse);
  T35 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T36 = fun_9;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLprogramG),VARREF(YevalSastYprogram_line),VARREF(YevalSastYprogram_line_setter),T35,T36);
  lit_27 = YPPsym((P)"program-register");
  lit_28 = YPPlist(1,YPPsym((P)"_x"));
  T37 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_register_10 = YPfab_met(FUNCODEREF(fun_program_register_10),T37,LITREF(lit_27),LITREF(lit_28),sloc(45),YPfalse);
  T39 = VARREF_OR(YevalSastYprogram_register,YPfalse);
  T40 = fun_program_register_10;
  T38 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T39,T40);
  VARSET(YevalSastYprogram_register,T38);
  lit_29 = YPPsym((P)"program-register-setter");
  lit_30 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T41 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_register_setter_11 = YPfab_met(FUNCODEREF(fun_program_register_setter_11),T41,LITREF(lit_29),LITREF(lit_30),sloc(45),YPfalse);
  T43 = VARREF_OR(YevalSastYprogram_register_setter,YPfalse);
  T44 = fun_program_register_setter_11;
  T42 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T43,T44);
  VARSET(YevalSastYprogram_register_setter,T42);
  lit_31 = YPPlist(1,YPPsym((P)"_x"));
  T45 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_12 = YPfab_met(FUNCODEREF(fun_12),T45,YPfalse,LITREF(lit_31),sloc(45),YPfalse);
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
  fun_binding_value_13 = YPfab_met(FUNCODEREF(fun_binding_value_13),T53,LITREF(lit_35),LITREF(lit_36),sloc(53),YPfalse);
  T55 = VARREF_OR(YevalSastYbinding_value,YPfalse);
  T56 = fun_binding_value_13;
  T54 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T55,T56);
  VARSET(YevalSastYbinding_value,T54);
  lit_37 = YPPsym((P)"binding-value-setter");
  lit_38 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T57 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_value_setter_14 = YPfab_met(FUNCODEREF(fun_binding_value_setter_14),T57,LITREF(lit_37),LITREF(lit_38),sloc(53),YPfalse);
  T59 = VARREF_OR(YevalSastYbinding_value_setter,YPfalse);
  T60 = fun_binding_value_setter_14;
  T58 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T59,T60);
  VARSET(YevalSastYbinding_value_setter,T58);
  lit_39 = YPPlist(1,YPPsym((P)"_x"));
  T61 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_15 = YPfab_met(FUNCODEREF(fun_15),T61,YPfalse,LITREF(lit_39),sloc(53),YPfalse);
  T62 = fun_15;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_value),VARREF(YevalSastYbinding_value_setter),VARREF(YLanyG),T62);
  lit_40 = YPPsym((P)"binding-mutable?");
  lit_41 = YPPlist(1,YPPsym((P)"_x"));
  T63 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_mutableQ_16 = YPfab_met(FUNCODEREF(fun_binding_mutableQ_16),T63,LITREF(lit_40),LITREF(lit_41),sloc(54),YPfalse);
  T65 = VARREF_OR(YevalSastYbinding_mutableQ,YPfalse);
  T66 = fun_binding_mutableQ_16;
  T64 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T65,T66);
  VARSET(YevalSastYbinding_mutableQ,T64);
  lit_42 = YPPsym((P)"binding-mutable?-setter");
  lit_43 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T67 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_mutableQ_setter_17 = YPfab_met(FUNCODEREF(fun_binding_mutableQ_setter_17),T67,LITREF(lit_42),LITREF(lit_43),sloc(54),YPfalse);
  T69 = VARREF_OR(YevalSastYbinding_mutableQ_setter,YPfalse);
  T70 = fun_binding_mutableQ_setter_17;
  T68 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T69,T70);
  VARSET(YevalSastYbinding_mutableQ_setter,T68);
  lit_44 = YPPlist(1,YPPsym((P)"_x"));
  T71 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_18 = YPfab_met(FUNCODEREF(fun_18),T71,YPfalse,LITREF(lit_44),sloc(54),YPfalse);
  T72 = fun_18;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_mutableQ),VARREF(YevalSastYbinding_mutableQ_setter),VARREF(YLanyG),T72);
  lit_45 = YPPsym((P)"binding-dynamic-extent?");
  lit_46 = YPPlist(1,YPPsym((P)"_x"));
  T73 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_dynamic_extentQ_19 = YPfab_met(FUNCODEREF(fun_binding_dynamic_extentQ_19),T73,LITREF(lit_45),LITREF(lit_46),sloc(55),YPfalse);
  T75 = VARREF_OR(YevalSastYbinding_dynamic_extentQ,YPfalse);
  T76 = fun_binding_dynamic_extentQ_19;
  T74 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T75,T76);
  VARSET(YevalSastYbinding_dynamic_extentQ,T74);
  lit_47 = YPPsym((P)"binding-dynamic-extent?-setter");
  lit_48 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T77 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_dynamic_extentQ_setter_20 = YPfab_met(FUNCODEREF(fun_binding_dynamic_extentQ_setter_20),T77,LITREF(lit_47),LITREF(lit_48),sloc(55),YPfalse);
  T79 = VARREF_OR(YevalSastYbinding_dynamic_extentQ_setter,YPfalse);
  T80 = fun_binding_dynamic_extentQ_setter_20;
  T78 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T79,T80);
  VARSET(YevalSastYbinding_dynamic_extentQ_setter,T78);
  lit_49 = YPPlist(1,YPPsym((P)"_x"));
  T81 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_21 = YPfab_met(FUNCODEREF(fun_21),T81,YPfalse,LITREF(lit_49),sloc(55),YPfalse);
  T82 = fun_21;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_dynamic_extentQ),VARREF(YevalSastYbinding_dynamic_extentQ_setter),VARREF(YLanyG),T82);
  lit_50 = YPPsym((P)"binding-dotted?");
  lit_51 = YPPlist(1,YPPsym((P)"_x"));
  T83 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_dottedQ_22 = YPfab_met(FUNCODEREF(fun_binding_dottedQ_22),T83,LITREF(lit_50),LITREF(lit_51),sloc(56),YPfalse);
  T85 = VARREF_OR(YevalSastYbinding_dottedQ,YPfalse);
  T86 = fun_binding_dottedQ_22;
  T84 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T85,T86);
  VARSET(YevalSastYbinding_dottedQ,T84);
  lit_52 = YPPsym((P)"binding-dotted?-setter");
  lit_53 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T87 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_dottedQ_setter_23 = YPfab_met(FUNCODEREF(fun_binding_dottedQ_setter_23),T87,LITREF(lit_52),LITREF(lit_53),sloc(56),YPfalse);
  T89 = VARREF_OR(YevalSastYbinding_dottedQ_setter,YPfalse);
  T90 = fun_binding_dottedQ_setter_23;
  T88 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T89,T90);
  VARSET(YevalSastYbinding_dottedQ_setter,T88);
  lit_54 = YPPlist(1,YPPsym((P)"_x"));
  T91 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPfab_met(FUNCODEREF(fun_24),T91,YPfalse,LITREF(lit_54),sloc(56),YPfalse);
  T92 = fun_24;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_dottedQ),VARREF(YevalSastYbinding_dottedQ_setter),VARREF(YLanyG),T92);
  lit_55 = YPPsym((P)"binding-closed-over?");
  lit_56 = YPPlist(1,YPPsym((P)"_x"));
  T93 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_closed_overQ_25 = YPfab_met(FUNCODEREF(fun_binding_closed_overQ_25),T93,LITREF(lit_55),LITREF(lit_56),sloc(57),YPfalse);
  T95 = VARREF_OR(YevalSastYbinding_closed_overQ,YPfalse);
  T96 = fun_binding_closed_overQ_25;
  T94 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T95,T96);
  VARSET(YevalSastYbinding_closed_overQ,T94);
  lit_57 = YPPsym((P)"binding-closed-over?-setter");
  lit_58 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T97 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_closed_overQ_setter_26 = YPfab_met(FUNCODEREF(fun_binding_closed_overQ_setter_26),T97,LITREF(lit_57),LITREF(lit_58),sloc(57),YPfalse);
  T99 = VARREF_OR(YevalSastYbinding_closed_overQ_setter,YPfalse);
  T100 = fun_binding_closed_overQ_setter_26;
  T98 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T99,T100);
  VARSET(YevalSastYbinding_closed_overQ_setter,T98);
  lit_59 = YPPlist(1,YPPsym((P)"_x"));
  T101 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPfab_met(FUNCODEREF(fun_27),T101,YPfalse,LITREF(lit_59),sloc(57),YPfalse);
  T102 = fun_27;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_closed_overQ),VARREF(YevalSastYbinding_closed_overQ_setter),VARREF(YLanyG),T102);
  lit_60 = YPPsym((P)"binding-index");
  lit_61 = YPPlist(1,YPPsym((P)"_x"));
  T103 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_index_28 = YPfab_met(FUNCODEREF(fun_binding_index_28),T103,LITREF(lit_60),LITREF(lit_61),sloc(58),YPfalse);
  T105 = VARREF_OR(YevalSastYbinding_index,YPfalse);
  T106 = fun_binding_index_28;
  T104 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T105,T106);
  VARSET(YevalSastYbinding_index,T104);
  lit_62 = YPPsym((P)"binding-index-setter");
  lit_63 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T107 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_index_setter_29 = YPfab_met(FUNCODEREF(fun_binding_index_setter_29),T107,LITREF(lit_62),LITREF(lit_63),sloc(58),YPfalse);
  T109 = VARREF_OR(YevalSastYbinding_index_setter,YPfalse);
  T110 = fun_binding_index_setter_29;
  T108 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T109,T110);
  VARSET(YevalSastYbinding_index_setter,T108);
  lit_64 = YPPlist(1,YPPsym((P)"_x"));
  T111 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_30 = YPfab_met(FUNCODEREF(fun_30),T111,YPfalse,LITREF(lit_64),sloc(58),YPfalse);
  T112 = fun_30;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_index),VARREF(YevalSastYbinding_index_setter),VARREF(YLanyG),T112);
  lit_65 = YPPsym((P)"<compile-time>");
  T114 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T113 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_65),T114);
  VARSET(YevalSastYLcompile_timeG,T113);
  lit_66 = YPPsym((P)"compile-time-program");
  lit_67 = YPPlist(1,YPPsym((P)"_x"));
  T117 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLcompile_timeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T116 = fun_compile_time_program_31 = YPfab_met(FUNCODEREF(fun_compile_time_program_31),T117,LITREF(lit_66),LITREF(lit_67),sloc(65),YPfalse);
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
  fun_compile_time_program_setter_32 = YPfab_met(FUNCODEREF(fun_compile_time_program_setter_32),T0,LITREF(lit_68),LITREF(lit_69),sloc(65),YPfalse);
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
  fun_reference_binding_33 = YPfab_met(FUNCODEREF(fun_reference_binding_33),T8,LITREF(lit_72),LITREF(lit_73),sloc(76),YPfalse);
  T10 = VARREF_OR(YevalSastYreference_binding,YPfalse);
  T11 = fun_reference_binding_33;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YevalSastYreference_binding,T9);
  lit_74 = YPPsym((P)"reference-binding-setter");
  lit_75 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T12 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLreal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_binding_setter_34 = YPfab_met(FUNCODEREF(fun_reference_binding_setter_34),T12,LITREF(lit_74),LITREF(lit_75),sloc(76),YPfalse);
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
  fun_reference_called_functionQ_35 = YPfab_met(FUNCODEREF(fun_reference_called_functionQ_35),T18,LITREF(lit_77),LITREF(lit_78),sloc(79),YPfalse);
  T20 = VARREF_OR(YevalSastYreference_called_functionQ,YPfalse);
  T21 = fun_reference_called_functionQ_35;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YevalSastYreference_called_functionQ,T19);
  lit_79 = YPPsym((P)"reference-called-function?-setter");
  lit_80 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T22 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_called_functionQ_setter_36 = YPfab_met(FUNCODEREF(fun_reference_called_functionQ_setter_36),T22,LITREF(lit_79),LITREF(lit_80),sloc(79),YPfalse);
  T24 = VARREF_OR(YevalSastYreference_called_functionQ_setter,YPfalse);
  T25 = fun_reference_called_functionQ_setter_36;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YevalSastYreference_called_functionQ_setter,T23);
  lit_81 = YPPlist(1,YPPsym((P)"_x"));
  T26 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_37 = YPfab_met(FUNCODEREF(fun_37),T26,YPfalse,LITREF(lit_81),sloc(79),YPfalse);
  T27 = fun_37;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_called_functionQ),VARREF(YevalSastYreference_called_functionQ_setter),VARREF(YLanyG),T27);
  lit_82 = YPPsym((P)"reference-frame-number");
  lit_83 = YPPlist(1,YPPsym((P)"_x"));
  T28 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_frame_number_38 = YPfab_met(FUNCODEREF(fun_reference_frame_number_38),T28,LITREF(lit_82),LITREF(lit_83),sloc(80),YPfalse);
  T30 = VARREF_OR(YevalSastYreference_frame_number,YPfalse);
  T31 = fun_reference_frame_number_38;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YevalSastYreference_frame_number,T29);
  lit_84 = YPPsym((P)"reference-frame-number-setter");
  lit_85 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T32 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_frame_number_setter_39 = YPfab_met(FUNCODEREF(fun_reference_frame_number_setter_39),T32,LITREF(lit_84),LITREF(lit_85),sloc(80),YPfalse);
  T34 = VARREF_OR(YevalSastYreference_frame_number_setter,YPfalse);
  T35 = fun_reference_frame_number_setter_39;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YevalSastYreference_frame_number_setter,T33);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_frame_number),VARREF(YevalSastYreference_frame_number_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_86 = YPPsym((P)"reference-frame-offset");
  lit_87 = YPPlist(1,YPPsym((P)"_x"));
  T36 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_frame_offset_40 = YPfab_met(FUNCODEREF(fun_reference_frame_offset_40),T36,LITREF(lit_86),LITREF(lit_87),sloc(81),YPfalse);
  T38 = VARREF_OR(YevalSastYreference_frame_offset,YPfalse);
  T39 = fun_reference_frame_offset_40;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YevalSastYreference_frame_offset,T37);
  lit_88 = YPPsym((P)"reference-frame-offset-setter");
  lit_89 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T40 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_frame_offset_setter_41 = YPfab_met(FUNCODEREF(fun_reference_frame_offset_setter_41),T40,LITREF(lit_88),LITREF(lit_89),sloc(81),YPfalse);
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
  fun_boundQ_reference_42 = YPfab_met(FUNCODEREF(fun_boundQ_reference_42),T62,LITREF(lit_99),LITREF(lit_100),sloc(102),YPfalse);
  T64 = VARREF_OR(YevalSastYboundQ_reference,YPfalse);
  T65 = fun_boundQ_reference_42;
  T63 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T64,T65);
  VARSET(YevalSastYboundQ_reference,T63);
  lit_101 = YPPsym((P)"bound?-reference-setter");
  lit_102 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T66 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLboundQG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_boundQ_reference_setter_43 = YPfab_met(FUNCODEREF(fun_boundQ_reference_setter_43),T66,LITREF(lit_101),LITREF(lit_102),sloc(102),YPfalse);
  T68 = VARREF_OR(YevalSastYboundQ_reference_setter,YPfalse);
  T69 = fun_boundQ_reference_setter_43;
  T67 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T68,T69);
  VARSET(YevalSastYboundQ_reference_setter,T67);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLboundQG),VARREF(YevalSastYboundQ_reference),VARREF(YevalSastYboundQ_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_103 = YPPsym((P)"bound?-default");
  lit_104 = YPPlist(1,YPPsym((P)"_x"));
  T70 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLboundQG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_boundQ_default_44 = YPfab_met(FUNCODEREF(fun_boundQ_default_44),T70,LITREF(lit_103),LITREF(lit_104),sloc(103),YPfalse);
  T72 = VARREF_OR(YevalSastYboundQ_default,YPfalse);
  T73 = fun_boundQ_default_44;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YevalSastYboundQ_default,T71);
  lit_105 = YPPsym((P)"bound?-default-setter");
  lit_106 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T74 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLboundQG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_boundQ_default_setter_45 = YPfab_met(FUNCODEREF(fun_boundQ_default_setter_45),T74,LITREF(lit_105),LITREF(lit_106),sloc(103),YPfalse);
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
  fun_assignment_form_46 = YPfab_met(FUNCODEREF(fun_assignment_form_46),T80,LITREF(lit_108),LITREF(lit_109),sloc(106),YPfalse);
  T82 = VARREF_OR(YevalSastYassignment_form,YPfalse);
  T83 = fun_assignment_form_46;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YevalSastYassignment_form,T81);
  lit_110 = YPPsym((P)"assignment-form-setter");
  lit_111 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T84 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLassignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_form_setter_47 = YPfab_met(FUNCODEREF(fun_assignment_form_setter_47),T84,LITREF(lit_110),LITREF(lit_111),sloc(106),YPfalse);
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
  fun_assignment_reference_48 = YPfab_met(FUNCODEREF(fun_assignment_reference_48),T90,LITREF(lit_113),LITREF(lit_114),sloc(109),YPfalse);
  T92 = VARREF_OR(YevalSastYassignment_reference,YPfalse);
  T93 = fun_assignment_reference_48;
  T91 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T92,T93);
  VARSET(YevalSastYassignment_reference,T91);
  lit_115 = YPPsym((P)"assignment-reference-setter");
  lit_116 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T94 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_assignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_reference_setter_49 = YPfab_met(FUNCODEREF(fun_assignment_reference_setter_49),T94,LITREF(lit_115),LITREF(lit_116),sloc(109),YPfalse);
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
  fun_assignment_binding_50 = YPfab_met(FUNCODEREF(fun_assignment_binding_50),T100,LITREF(lit_118),LITREF(lit_119),sloc(112),YPfalse);
  T102 = VARREF_OR(YevalSastYassignment_binding,YPfalse);
  T103 = fun_assignment_binding_50;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YevalSastYassignment_binding,T101);
  lit_120 = YPPsym((P)"assignment-binding-setter");
  lit_121 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T104 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLglobal_assignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_binding_setter_51 = YPfab_met(FUNCODEREF(fun_assignment_binding_setter_51),T104,LITREF(lit_120),LITREF(lit_121),sloc(112),YPfalse);
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
  fun_signature_bindings_52 = YPfab_met(FUNCODEREF(fun_signature_bindings_52),T10,LITREF(lit_133),LITREF(lit_134),sloc(137),YPfalse);
  T12 = VARREF_OR(YevalSastYsignature_bindings,YPfalse);
  T13 = fun_signature_bindings_52;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YevalSastYsignature_bindings,T11);
  lit_135 = YPPsym((P)"signature-bindings-setter");
  lit_136 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T14 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_bindings_setter_53 = YPfab_met(FUNCODEREF(fun_signature_bindings_setter_53),T14,LITREF(lit_135),LITREF(lit_136),sloc(137),YPfalse);
  T16 = VARREF_OR(YevalSastYsignature_bindings_setter,YPfalse);
  T17 = fun_signature_bindings_setter_53;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YevalSastYsignature_bindings_setter,T15);
  lit_137 = YPPlist(1,YPPsym((P)"_x"));
  T18 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_54 = YPfab_met(FUNCODEREF(fun_54),T18,YPfalse,LITREF(lit_137),sloc(137),YPfalse);
  T19 = fun_54;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_bindings),VARREF(YevalSastYsignature_bindings_setter),VARREF(YLanyG),T19);
  lit_138 = YPPsym((P)"signature-names");
  lit_139 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_names_55 = YPfab_met(FUNCODEREF(fun_signature_names_55),T20,LITREF(lit_138),LITREF(lit_139),sloc(138),YPfalse);
  T22 = VARREF_OR(YevalSastYsignature_names,YPfalse);
  T23 = fun_signature_names_55;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSastYsignature_names,T21);
  lit_140 = YPPsym((P)"signature-names-setter");
  lit_141 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T24 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_names_setter_56 = YPfab_met(FUNCODEREF(fun_signature_names_setter_56),T24,LITREF(lit_140),LITREF(lit_141),sloc(138),YPfalse);
  T26 = VARREF_OR(YevalSastYsignature_names_setter,YPfalse);
  T27 = fun_signature_names_setter_56;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalSastYsignature_names_setter,T25);
  lit_142 = YPPlist(1,YPPsym((P)"_x"));
  T28 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_57 = YPfab_met(FUNCODEREF(fun_57),T28,YPfalse,LITREF(lit_142),sloc(138),YPfalse);
  T29 = fun_57;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_names),VARREF(YevalSastYsignature_names_setter),VARREF(YLanyG),T29);
  lit_143 = YPPsym((P)"signature-specs");
  lit_144 = YPPlist(1,YPPsym((P)"_x"));
  T30 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_specs_58 = YPfab_met(FUNCODEREF(fun_signature_specs_58),T30,LITREF(lit_143),LITREF(lit_144),sloc(139),YPfalse);
  T32 = VARREF_OR(YevalSastYsignature_specs,YPfalse);
  T33 = fun_signature_specs_58;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSastYsignature_specs,T31);
  lit_145 = YPPsym((P)"signature-specs-setter");
  lit_146 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T34 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_specs_setter_59 = YPfab_met(FUNCODEREF(fun_signature_specs_setter_59),T34,LITREF(lit_145),LITREF(lit_146),sloc(139),YPfalse);
  T36 = VARREF_OR(YevalSastYsignature_specs_setter,YPfalse);
  T37 = fun_signature_specs_setter_59;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YevalSastYsignature_specs_setter,T35);
  lit_147 = YPPlist(1,YPPsym((P)"_x"));
  T38 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_60 = YPfab_met(FUNCODEREF(fun_60),T38,YPfalse,LITREF(lit_147),sloc(139),YPfalse);
  T39 = fun_60;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_specs),VARREF(YevalSastYsignature_specs_setter),VARREF(YLanyG),T39);
  lit_148 = YPPsym((P)"signature-nary?");
  lit_149 = YPPlist(1,YPPsym((P)"_x"));
  T40 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_naryQ_61 = YPfab_met(FUNCODEREF(fun_signature_naryQ_61),T40,LITREF(lit_148),LITREF(lit_149),sloc(140),YPfalse);
  T42 = VARREF_OR(YevalSastYsignature_naryQ,YPfalse);
  T43 = fun_signature_naryQ_61;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YevalSastYsignature_naryQ,T41);
  lit_150 = YPPsym((P)"signature-nary?-setter");
  lit_151 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T44 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_naryQ_setter_62 = YPfab_met(FUNCODEREF(fun_signature_naryQ_setter_62),T44,LITREF(lit_150),LITREF(lit_151),sloc(140),YPfalse);
  T46 = VARREF_OR(YevalSastYsignature_naryQ_setter,YPfalse);
  T47 = fun_signature_naryQ_setter_62;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YevalSastYsignature_naryQ_setter,T45);
  lit_152 = YPPlist(1,YPPsym((P)"_x"));
  T48 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPfab_met(FUNCODEREF(fun_63),T48,YPfalse,LITREF(lit_152),sloc(140),YPfalse);
  T49 = fun_63;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_naryQ),VARREF(YevalSastYsignature_naryQ_setter),VARREF(YLanyG),T49);
  lit_153 = YPPsym((P)"signature-arity");
  lit_154 = YPPlist(1,YPPsym((P)"_x"));
  T50 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_arity_64 = YPfab_met(FUNCODEREF(fun_signature_arity_64),T50,LITREF(lit_153),LITREF(lit_154),sloc(141),YPfalse);
  T52 = VARREF_OR(YevalSastYsignature_arity,YPfalse);
  T53 = fun_signature_arity_64;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YevalSastYsignature_arity,T51);
  lit_155 = YPPsym((P)"signature-arity-setter");
  lit_156 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T54 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_arity_setter_65 = YPfab_met(FUNCODEREF(fun_signature_arity_setter_65),T54,LITREF(lit_155),LITREF(lit_156),sloc(141),YPfalse);
  T56 = VARREF_OR(YevalSastYsignature_arity_setter,YPfalse);
  T57 = fun_signature_arity_setter_65;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YevalSastYsignature_arity_setter,T55);
  lit_157 = YPPlist(1,YPPsym((P)"_x"));
  T58 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_66 = YPfab_met(FUNCODEREF(fun_66),T58,YPfalse,LITREF(lit_157),sloc(141),YPfalse);
  T59 = fun_66;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_arity),VARREF(YevalSastYsignature_arity_setter),VARREF(YLanyG),T59);
  lit_158 = YPPsym((P)"signature-value");
  lit_159 = YPPlist(1,YPPsym((P)"_x"));
  T60 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_value_67 = YPfab_met(FUNCODEREF(fun_signature_value_67),T60,LITREF(lit_158),LITREF(lit_159),sloc(142),YPfalse);
  T62 = VARREF_OR(YevalSastYsignature_value,YPfalse);
  T63 = fun_signature_value_67;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YevalSastYsignature_value,T61);
  lit_160 = YPPsym((P)"signature-value-setter");
  lit_161 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T64 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_value_setter_68 = YPfab_met(FUNCODEREF(fun_signature_value_setter_68),T64,LITREF(lit_160),LITREF(lit_161),sloc(142),YPfalse);
  T66 = VARREF_OR(YevalSastYsignature_value_setter,YPfalse);
  T67 = fun_signature_value_setter_68;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YevalSastYsignature_value_setter,T65);
  lit_162 = YPPlist(1,YPPsym((P)"_x"));
  T68 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPfab_met(FUNCODEREF(fun_69),T68,YPfalse,LITREF(lit_162),sloc(142),YPfalse);
  T69 = fun_69;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_value),VARREF(YevalSastYsignature_value_setter),VARREF(YLanyG),T69);
  lit_163 = YPPsym((P)"req-sig-specs");
  lit_164 = YPPlist(1,YPPsym((P)"sig"));
  T70 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_req_sig_specs_70 = YPfab_met(FUNCODEREF(fun_req_sig_specs_70),T70,LITREF(lit_163),LITREF(lit_164),sloc(145),YPfalse);
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
  fun_function_binding_71 = YPfab_met(FUNCODEREF(fun_function_binding_71),T77,LITREF(lit_166),LITREF(lit_167),sloc(152),YPfalse);
  T79 = VARREF_OR(YevalSastYfunction_binding,YPfalse);
  T80 = fun_function_binding_71;
  T78 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T79,T80);
  VARSET(YevalSastYfunction_binding,T78);
  lit_168 = YPPsym((P)"function-binding-setter");
  lit_169 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T81 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_binding_setter_72 = YPfab_met(FUNCODEREF(fun_function_binding_setter_72),T81,LITREF(lit_168),LITREF(lit_169),sloc(152),YPfalse);
  T83 = VARREF_OR(YevalSastYfunction_binding_setter,YPfalse);
  T84 = fun_function_binding_setter_72;
  T82 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T83,T84);
  VARSET(YevalSastYfunction_binding_setter,T82);
  lit_170 = YPPlist(1,YPPsym((P)"_x"));
  T85 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPfab_met(FUNCODEREF(fun_73),T85,YPfalse,LITREF(lit_170),sloc(152),YPfalse);
  T86 = fun_73;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_functionG),VARREF(YevalSastYfunction_binding),VARREF(YevalSastYfunction_binding_setter),VARREF(YLanyG),T86);
  lit_171 = YPPsym((P)"function-debug-name");
  lit_172 = YPPlist(1,YPPsym((P)"_x"));
  T87 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_debug_name_74 = YPfab_met(FUNCODEREF(fun_function_debug_name_74),T87,LITREF(lit_171),LITREF(lit_172),sloc(153),YPfalse);
  T89 = VARREF_OR(YevalSastYfunction_debug_name,YPfalse);
  T90 = fun_function_debug_name_74;
  T88 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T89,T90);
  VARSET(YevalSastYfunction_debug_name,T88);
  lit_173 = YPPsym((P)"function-debug-name-setter");
  lit_174 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T91 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_debug_name_setter_75 = YPfab_met(FUNCODEREF(fun_function_debug_name_setter_75),T91,LITREF(lit_173),LITREF(lit_174),sloc(153),YPfalse);
  T93 = VARREF_OR(YevalSastYfunction_debug_name_setter,YPfalse);
  T94 = fun_function_debug_name_setter_75;
  T92 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T93,T94);
  VARSET(YevalSastYfunction_debug_name_setter,T92);
  lit_175 = YPPlist(1,YPPsym((P)"_x"));
  T95 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_76 = YPfab_met(FUNCODEREF(fun_76),T95,YPfalse,LITREF(lit_175),sloc(153),YPfalse);
  T96 = fun_76;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_functionG),VARREF(YevalSastYfunction_debug_name),VARREF(YevalSastYfunction_debug_name_setter),VARREF(YLanyG),T96);
  lit_176 = YPPsym((P)"function-signature");
  lit_177 = YPPlist(1,YPPsym((P)"_x"));
  T97 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_signature_77 = YPfab_met(FUNCODEREF(fun_function_signature_77),T97,LITREF(lit_176),LITREF(lit_177),sloc(155),YPfalse);
  T99 = VARREF_OR(YevalSastYfunction_signature,YPfalse);
  T100 = fun_function_signature_77;
  T98 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T99,T100);
  VARSET(YevalSastYfunction_signature,T98);
  lit_178 = YPPsym((P)"function-signature-setter");
  lit_179 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T101 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_signature_setter_78 = YPfab_met(FUNCODEREF(fun_function_signature_setter_78),T101,LITREF(lit_178),LITREF(lit_179),sloc(155),YPfalse);
  T103 = VARREF_OR(YevalSastYfunction_signature_setter,YPfalse);
  T104 = fun_function_signature_setter_78;
  T102 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T103,T104);
  VARSET(YevalSastYfunction_signature_setter,T102);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_functionG),VARREF(YevalSastYfunction_signature),VARREF(YevalSastYfunction_signature_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_180 = YPPsym((P)"function-bindings");
  lit_181 = YPPlist(1,YPPsym((P)"x"));
  T105 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_bindings = YPfab_met(FUNCODEREF(YevalSastYfunction_bindings),T105,LITREF(lit_180),LITREF(lit_181),sloc(157),YPfalse);
  T106 = YevalSastYfunction_bindings;
  VARSET(YevalSastYfunction_bindings,T106);
  lit_182 = YPPsym((P)"function-names");
  lit_183 = YPPlist(1,YPPsym((P)"x"));
  T107 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_names = YPfab_met(FUNCODEREF(YevalSastYfunction_names),T107,LITREF(lit_182),LITREF(lit_183),sloc(159),YPfalse);
  T108 = YevalSastYfunction_names;
  VARSET(YevalSastYfunction_names,T108);
  lit_184 = YPPsym((P)"function-specs");
  lit_185 = YPPlist(1,YPPsym((P)"x"));
  T109 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_specs = YPfab_met(FUNCODEREF(YevalSastYfunction_specs),T109,LITREF(lit_184),LITREF(lit_185),sloc(161),YPfalse);
  T110 = YevalSastYfunction_specs;
  VARSET(YevalSastYfunction_specs,T110);
  lit_186 = YPPsym((P)"function-nary?");
  lit_187 = YPPlist(1,YPPsym((P)"x"));
  T111 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_naryQ = YPfab_met(FUNCODEREF(YevalSastYfunction_naryQ),T111,LITREF(lit_186),LITREF(lit_187),sloc(163),YPfalse);
  T112 = YevalSastYfunction_naryQ;
  VARSET(YevalSastYfunction_naryQ,T112);
  lit_188 = YPPsym((P)"function-arity");
  lit_189 = YPPlist(1,YPPsym((P)"x"));
  T113 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_arity = YPfab_met(FUNCODEREF(YevalSastYfunction_arity),T113,LITREF(lit_188),LITREF(lit_189),sloc(165),YPfalse);
  T114 = YevalSastYfunction_arity;
  VARSET(YevalSastYfunction_arity,T114);
  lit_190 = YPPsym((P)"function-value");
  lit_191 = YPPlist(1,YPPsym((P)"x"));
  T115 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_value = YPfab_met(FUNCODEREF(YevalSastYfunction_value),T115,LITREF(lit_190),LITREF(lit_191),sloc(167),YPfalse);
  T116 = YevalSastYfunction_value;
  VARSET(YevalSastYfunction_value,T116);
  lit_192 = YPPsym((P)"function-kind");
  lit_193 = YPPlist(1,YPPsym((P)"x"));
  lit_194 = YPsb((P)"FUN");
  T117 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_85 = YPfab_met(FUNCODEREF(fun_function_kind_85),T117,LITREF(lit_192),LITREF(lit_193),sloc(170),YPfalse);
  T119 = VARREF_OR(YevalSastYfunction_kind,YPfalse);
  T120 = fun_function_kind_85;
  T118 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T119,T120);
  VARSET(YevalSastYfunction_kind,T118);
  lit_195 = YPPsym((P)"function-display-name");
  lit_196 = YPPlist(1,YPPsym((P)"f"));
  lit_197 = YPsb((P)"%s:%s");
  lit_198 = YPsb((P)"anonymous function");
  T121 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_display_name = YPfab_met(FUNCODEREF(YevalSastYfunction_display_name),T121,LITREF(lit_195),LITREF(lit_196),sloc(172),YPfalse);
  T122 = YevalSastYfunction_display_name;
  VARSET(YevalSastYfunction_display_name,T122);
  lit_199 = YPPsym((P)"invalidate-dependent");
  lit_200 = YPPlist(3,YPPsym((P)"dependent"),YPPsym((P)"dependable"),YPPsym((P)"dtype"));
  lit_201 = YPsb((P)"warning: %s needs to be reparsed\n");
  lit_202 = YPsb((P)"warning: %s needs to be re-optimized\n");
  lit_203 = YPsb((P)"warning: unknown dependency of %s clobbered\n");
  T123 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLast_functionG),VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_invalidate_dependent_87 = YPfab_met(FUNCODEREF(fun_invalidate_dependent_87),T123,LITREF(lit_199),LITREF(lit_200),sloc(182),YPfalse);
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
  fun_as_lst_88 = YPfab_met(FUNCODEREF(fun_as_lst_88),T129,LITREF(lit_205),LITREF(lit_206),sloc(198),YPfalse);
  T131 = VARREF_OR(YevalSastYas_lst,YPfalse);
  T132 = fun_as_lst_88;
  T130 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T131,T132);
  VARSET(YevalSastYas_lst,T130);
  lit_207 = YPPlist(1,YPPsym((P)"exp"));
  lit_208 = YPPlist(1,YPPsym((P)"return"));
  lit_209 = YPPsym((P)"x-1504");
  lit_210 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_211 = YPPsym((P)"def-programs");
  lit_212 = YPPsym((P)"def-list");
  T135 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1504_89 = YPfab_met(FUNCODEREF(fun_x_1504_89),T135,LITREF(lit_209),LITREF(lit_210),YPfalse,YPfalse);
  T134 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_90 = YPfab_met(FUNCODEREF(fun_90),T134,YPfalse,LITREF(lit_208),YPfalse,YPfalse);
  T133 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPfab_met(FUNCODEREF(fun_91),T133,YPfalse,LITREF(lit_207),YPfalse,YPfalse);
  T136 = fun_91;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"def-programs"),T136);
  lit_213 = YPPsym((P)"<ast-embodied-function>");
  T138 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLast_functionG),Ynil);
  T137 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_213),T138);
  VARSET(YevalSastYLast_embodied_functionG,T137);
  lit_214 = YPPsym((P)"function-body");
  lit_215 = YPPlist(1,YPPsym((P)"_x"));
  T139 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_body_92 = YPfab_met(FUNCODEREF(fun_function_body_92),T139,LITREF(lit_214),LITREF(lit_215),sloc(205),YPfalse);
  T141 = VARREF_OR(YevalSastYfunction_body,YPfalse);
  T142 = fun_function_body_92;
  T140 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T141,T142);
  VARSET(YevalSastYfunction_body,T140);
  lit_216 = YPPsym((P)"function-body-setter");
  lit_217 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T143 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_body_setter_93 = YPfab_met(FUNCODEREF(fun_function_body_setter_93),T143,LITREF(lit_216),LITREF(lit_217),sloc(205),YPfalse);
  T145 = VARREF_OR(YevalSastYfunction_body_setter,YPfalse);
  T146 = fun_function_body_setter_93;
  T144 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T145,T146);
  VARSET(YevalSastYfunction_body_setter,T144);
  lit_218 = YPPlist(1,YPPsym((P)"_x"));
  T149 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T148 = fun_94 = YPfab_met(FUNCODEREF(fun_94),T149,YPfalse,LITREF(lit_218),sloc(205),YPfalse);
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
  fun_function_index_95 = YPfab_met(FUNCODEREF(fun_function_index_95),T0,LITREF(lit_219),LITREF(lit_220),sloc(206),YPfalse);
  T2 = VARREF_OR(YevalSastYfunction_index,YPfalse);
  T3 = fun_function_index_95;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSastYfunction_index,T1);
  lit_221 = YPPsym((P)"function-index-setter");
  lit_222 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T4 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_index_setter_96 = YPfab_met(FUNCODEREF(fun_function_index_setter_96),T4,LITREF(lit_221),LITREF(lit_222),sloc(206),YPfalse);
  T6 = VARREF_OR(YevalSastYfunction_index_setter,YPfalse);
  T7 = fun_function_index_setter_96;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSastYfunction_index_setter,T5);
  lit_223 = YPPlist(1,YPPsym((P)"_x"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPfab_met(FUNCODEREF(fun_97),T8,YPfalse,LITREF(lit_223),sloc(206),YPfalse);
  T9 = fun_97;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_index),VARREF(YevalSastYfunction_index_setter),VARREF(YLanyG),T9);
  lit_224 = YPPsym((P)"function-temporaries");
  lit_225 = YPPlist(1,YPPsym((P)"_x"));
  T10 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_temporaries_98 = YPfab_met(FUNCODEREF(fun_function_temporaries_98),T10,LITREF(lit_224),LITREF(lit_225),sloc(207),YPfalse);
  T12 = VARREF_OR(YevalSastYfunction_temporaries,YPfalse);
  T13 = fun_function_temporaries_98;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YevalSastYfunction_temporaries,T11);
  lit_226 = YPPsym((P)"function-temporaries-setter");
  lit_227 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T14 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_temporaries_setter_99 = YPfab_met(FUNCODEREF(fun_function_temporaries_setter_99),T14,LITREF(lit_226),LITREF(lit_227),sloc(207),YPfalse);
  T16 = VARREF_OR(YevalSastYfunction_temporaries_setter,YPfalse);
  T17 = fun_function_temporaries_setter_99;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YevalSastYfunction_temporaries_setter,T15);
  lit_228 = YPPlist(1,YPPsym((P)"_x"));
  T18 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_100 = YPfab_met(FUNCODEREF(fun_100),T18,YPfalse,LITREF(lit_228),sloc(207),YPfalse);
  T19 = fun_100;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_temporaries),VARREF(YevalSastYfunction_temporaries_setter),VARREF(YLanyG),T19);
  lit_229 = YPPsym((P)"function-registers");
  lit_230 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_registers_101 = YPfab_met(FUNCODEREF(fun_function_registers_101),T20,LITREF(lit_229),LITREF(lit_230),sloc(208),YPfalse);
  T22 = VARREF_OR(YevalSastYfunction_registers,YPfalse);
  T23 = fun_function_registers_101;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSastYfunction_registers,T21);
  lit_231 = YPPsym((P)"function-registers-setter");
  lit_232 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T24 = YPfab_sig(YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_registers_setter_102 = YPfab_met(FUNCODEREF(fun_function_registers_setter_102),T24,LITREF(lit_231),LITREF(lit_232),sloc(208),YPfalse);
  T26 = VARREF_OR(YevalSastYfunction_registers_setter,YPfalse);
  T27 = fun_function_registers_setter_102;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalSastYfunction_registers_setter,T25);
  lit_233 = YPPlist(1,YPPsym((P)"_x"));
  T28 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_103 = YPfab_met(FUNCODEREF(fun_103),T28,YPfalse,LITREF(lit_233),sloc(208),YPfalse);
  T29 = fun_103;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_registers),VARREF(YevalSastYfunction_registers_setter),VARREF(YgooScolsSvecYLvecG),T29);
  lit_234 = YPPsym((P)"function-loop");
  lit_235 = YPPlist(1,YPPsym((P)"_x"));
  T30 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_loop_104 = YPfab_met(FUNCODEREF(fun_function_loop_104),T30,LITREF(lit_234),LITREF(lit_235),sloc(209),YPfalse);
  T32 = VARREF_OR(YevalSastYfunction_loop,YPfalse);
  T33 = fun_function_loop_104;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSastYfunction_loop,T31);
  lit_236 = YPPsym((P)"function-loop-setter");
  lit_237 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T34 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_loop_setter_105 = YPfab_met(FUNCODEREF(fun_function_loop_setter_105),T34,LITREF(lit_236),LITREF(lit_237),sloc(209),YPfalse);
  T36 = VARREF_OR(YevalSastYfunction_loop_setter,YPfalse);
  T37 = fun_function_loop_setter_105;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YevalSastYfunction_loop_setter,T35);
  lit_238 = YPPlist(1,YPPsym((P)"_x"));
  T38 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_106 = YPfab_met(FUNCODEREF(fun_106),T38,YPfalse,LITREF(lit_238),sloc(209),YPfalse);
  T39 = fun_106;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_loop),VARREF(YevalSastYfunction_loop_setter),VARREF(YLanyG),T39);
  lit_239 = YPPsym((P)"function-source");
  lit_240 = YPPlist(1,YPPsym((P)"_x"));
  T40 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_source_107 = YPfab_met(FUNCODEREF(fun_function_source_107),T40,LITREF(lit_239),LITREF(lit_240),sloc(210),YPfalse);
  T42 = VARREF_OR(YevalSastYfunction_source,YPfalse);
  T43 = fun_function_source_107;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YevalSastYfunction_source,T41);
  lit_241 = YPPsym((P)"function-source-setter");
  lit_242 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T44 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_source_setter_108 = YPfab_met(FUNCODEREF(fun_function_source_setter_108),T44,LITREF(lit_241),LITREF(lit_242),sloc(210),YPfalse);
  T46 = VARREF_OR(YevalSastYfunction_source_setter,YPfalse);
  T47 = fun_function_source_setter_108;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YevalSastYfunction_source_setter,T45);
  lit_243 = YPPlist(1,YPPsym((P)"_x"));
  T48 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_109 = YPfab_met(FUNCODEREF(fun_109),T48,YPfalse,LITREF(lit_243),sloc(210),YPfalse);
  T49 = fun_109;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_source),VARREF(YevalSastYfunction_source_setter),VARREF(YLanyG),T49);
  lit_244 = YPPsym((P)"function-frame-len");
  lit_245 = YPPlist(1,YPPsym((P)"_x"));
  T50 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_frame_len_110 = YPfab_met(FUNCODEREF(fun_function_frame_len_110),T50,LITREF(lit_244),LITREF(lit_245),sloc(211),YPfalse);
  T52 = VARREF_OR(YevalSastYfunction_frame_len,YPfalse);
  T53 = fun_function_frame_len_110;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YevalSastYfunction_frame_len,T51);
  lit_246 = YPPsym((P)"function-frame-len-setter");
  lit_247 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T54 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_frame_len_setter_111 = YPfab_met(FUNCODEREF(fun_function_frame_len_setter_111),T54,LITREF(lit_246),LITREF(lit_247),sloc(211),YPfalse);
  T56 = VARREF_OR(YevalSastYfunction_frame_len_setter,YPfalse);
  T57 = fun_function_frame_len_setter_111;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YevalSastYfunction_frame_len_setter,T55);
  lit_248 = YPPlist(1,YPPsym((P)"_x"));
  T58 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_112 = YPfab_met(FUNCODEREF(fun_112),T58,YPfalse,LITREF(lit_248),sloc(211),YPfalse);
  T59 = fun_112;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_frame_len),VARREF(YevalSastYfunction_frame_len_setter),VARREF(YLanyG),T59);
  lit_249 = YPPsym((P)"function-adjectives");
  lit_250 = YPPlist(1,YPPsym((P)"_x"));
  T60 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_adjectives_113 = YPfab_met(FUNCODEREF(fun_function_adjectives_113),T60,LITREF(lit_249),LITREF(lit_250),sloc(212),YPfalse);
  T62 = VARREF_OR(YevalSastYfunction_adjectives,YPfalse);
  T63 = fun_function_adjectives_113;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YevalSastYfunction_adjectives,T61);
  lit_251 = YPPsym((P)"function-adjectives-setter");
  lit_252 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T64 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_adjectives_setter_114 = YPfab_met(FUNCODEREF(fun_function_adjectives_setter_114),T64,LITREF(lit_251),LITREF(lit_252),sloc(212),YPfalse);
  T66 = VARREF_OR(YevalSastYfunction_adjectives_setter,YPfalse);
  T67 = fun_function_adjectives_setter_114;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YevalSastYfunction_adjectives_setter,T65);
  lit_253 = YPPlist(1,YPPsym((P)"_x"));
  T68 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_115 = YPfab_met(FUNCODEREF(fun_115),T68,YPfalse,LITREF(lit_253),sloc(212),YPfalse);
  T69 = fun_115;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_adjectives),VARREF(YevalSastYfunction_adjectives_setter),VARREF(YLlstG),T69);
  lit_254 = YPPsym((P)"<free-environment>");
  T72 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLprogramsG),Ynil);
  T71 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLlstG),T72);
  T70 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_254),T71);
  VARSET(YevalSastYLfree_environmentG,T70);
  T73 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLfree_environmentG));
  VARSET(YevalSastYDfree_environment_nul,T73);
  lit_255 = YPPsym((P)"free-environment");
  lit_256 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T74 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYfree_environment = YPfab_met(FUNCODEREF(YevalSastYfree_environment),T74,LITREF(lit_255),LITREF(lit_256),sloc(214),YPfalse);
  T75 = YevalSastYfree_environment;
  VARSET(YevalSastYfree_environment,T75);
  lit_257 = YPPsym((P)"nul");
  lit_258 = YPPlist(1,YPPsym((P)"e"));
  T77 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLfree_environmentG));
  T76 = YPfab_sig(YPPlist(1,T77),YPfalse,YPint((P)1),VARREF(YevalSastYLfree_environmentG),Ynil);
  fun_nul_117 = YPfab_met(FUNCODEREF(fun_nul_117),T76,LITREF(lit_257),LITREF(lit_258),sloc(214),YPfalse);
  T79 = VARREF_OR(YgooScolsScolYnul,YPfalse);
  T80 = fun_nul_117;
  T78 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T79,T80);
  VARSET(YgooScolsScolYnul,T78);
  lit_259 = YPPsym((P)"<ast-method>");
  T82 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLast_embodied_functionG),Ynil);
  T81 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_259),T82);
  VARSET(YevalSastYLast_methodG,T81);
  lit_260 = YPPsym((P)"function-ref-count");
  lit_261 = YPPlist(1,YPPsym((P)"_x"));
  T83 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_ref_count_118 = YPfab_met(FUNCODEREF(fun_function_ref_count_118),T83,LITREF(lit_260),LITREF(lit_261),sloc(217),YPfalse);
  T85 = VARREF_OR(YevalSastYfunction_ref_count,YPfalse);
  T86 = fun_function_ref_count_118;
  T84 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T85,T86);
  VARSET(YevalSastYfunction_ref_count,T84);
  lit_262 = YPPsym((P)"function-ref-count-setter");
  lit_263 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T87 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_ref_count_setter_119 = YPfab_met(FUNCODEREF(fun_function_ref_count_setter_119),T87,LITREF(lit_262),LITREF(lit_263),sloc(217),YPfalse);
  T89 = VARREF_OR(YevalSastYfunction_ref_count_setter,YPfalse);
  T90 = fun_function_ref_count_setter_119;
  T88 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T89,T90);
  VARSET(YevalSastYfunction_ref_count_setter,T88);
  lit_264 = YPPlist(1,YPPsym((P)"_x"));
  T91 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_120 = YPfab_met(FUNCODEREF(fun_120),T91,YPfalse,LITREF(lit_264),sloc(217),YPfalse);
  T92 = fun_120;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_methodG),VARREF(YevalSastYfunction_ref_count),VARREF(YevalSastYfunction_ref_count_setter),VARREF(YLintG),T92);
  lit_265 = YPPsym((P)"function-free");
  lit_266 = YPPlist(1,YPPsym((P)"_x"));
  T93 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_free_121 = YPfab_met(FUNCODEREF(fun_function_free_121),T93,LITREF(lit_265),LITREF(lit_266),sloc(218),YPfalse);
  T95 = VARREF_OR(YevalSastYfunction_free,YPfalse);
  T96 = fun_function_free_121;
  T94 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T95,T96);
  VARSET(YevalSastYfunction_free,T94);
  lit_267 = YPPsym((P)"function-free-setter");
  lit_268 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T97 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLfree_environmentG),VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_free_setter_122 = YPfab_met(FUNCODEREF(fun_function_free_setter_122),T97,LITREF(lit_267),LITREF(lit_268),sloc(218),YPfalse);
  T99 = VARREF_OR(YevalSastYfunction_free_setter,YPfalse);
  T100 = fun_function_free_setter_122;
  T98 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T99,T100);
  VARSET(YevalSastYfunction_free_setter,T98);
  lit_269 = YPPlist(1,YPPsym((P)"_x"));
  T101 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_123 = YPfab_met(FUNCODEREF(fun_123),T101,YPfalse,LITREF(lit_269),sloc(218),YPfalse);
  T102 = fun_123;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_methodG),VARREF(YevalSastYfunction_free),VARREF(YevalSastYfunction_free_setter),VARREF(YevalSastYLfree_environmentG),T102);
  lit_270 = YPPsym((P)"incf-ref-count");
  lit_271 = YPPlist(1,YPPsym((P)"x"));
  T103 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_incf_ref_count_124 = YPfab_met(FUNCODEREF(fun_incf_ref_count_124),T103,LITREF(lit_270),LITREF(lit_271),sloc(221),YPfalse);
  T105 = VARREF_OR(YevalSastYincf_ref_count,YPfalse);
  T106 = fun_incf_ref_count_124;
  T104 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T105,T106);
  VARSET(YevalSastYincf_ref_count,T104);
  lit_272 = YPPlist(1,YPPsym((P)"x"));
  T107 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_incf_ref_count_125 = YPfab_met(FUNCODEREF(fun_incf_ref_count_125),T107,LITREF(lit_270),LITREF(lit_272),sloc(222),YPfalse);
  T109 = VARREF_OR(YevalSastYincf_ref_count,YPfalse);
  T110 = fun_incf_ref_count_125;
  T108 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T109,T110);
  VARSET(YevalSastYincf_ref_count,T108);
  lit_273 = YPPlist(1,YPPsym((P)"x"));
  lit_274 = YPsb((P)"MET");
  T111 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_126 = YPfab_met(FUNCODEREF(fun_function_kind_126),T111,LITREF(lit_192),LITREF(lit_273),sloc(224),YPfalse);
  T113 = VARREF_OR(YevalSastYfunction_kind,YPfalse);
  T114 = fun_function_kind_126;
  T112 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T113,T114);
  VARSET(YevalSastYfunction_kind,T112);
  lit_275 = YPPsym((P)"<ast-primitive>");
  T116 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLast_embodied_functionG),Ynil);
  T115 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_275),T116);
  VARSET(YevalSastYLast_primitiveG,T115);
  lit_276 = YPPlist(1,YPPsym((P)"x"));
  lit_277 = YPsb((P)"PRM");
  T117 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_127 = YPfab_met(FUNCODEREF(fun_function_kind_127),T117,LITREF(lit_192),LITREF(lit_276),sloc(228),YPfalse);
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
  fun_function_kind_128 = YPfab_met(FUNCODEREF(fun_function_kind_128),T123,LITREF(lit_192),LITREF(lit_279),sloc(232),YPfalse);
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
  fun_alternative_condition_129 = YPfab_met(FUNCODEREF(fun_alternative_condition_129),T129,LITREF(lit_282),LITREF(lit_283),sloc(235),YPfalse);
  T131 = VARREF_OR(YevalSastYalternative_condition,YPfalse);
  T132 = fun_alternative_condition_129;
  T130 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T131,T132);
  VARSET(YevalSastYalternative_condition,T130);
  lit_284 = YPPsym((P)"alternative-condition-setter");
  lit_285 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T133 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_condition_setter_130 = YPfab_met(FUNCODEREF(fun_alternative_condition_setter_130),T133,LITREF(lit_284),LITREF(lit_285),sloc(235),YPfalse);
  T135 = VARREF_OR(YevalSastYalternative_condition_setter,YPfalse);
  T136 = fun_alternative_condition_setter_130;
  T134 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T135,T136);
  VARSET(YevalSastYalternative_condition_setter,T134);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_condition),VARREF(YevalSastYalternative_condition_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_286 = YPPsym((P)"alternative-consequent");
  lit_287 = YPPlist(1,YPPsym((P)"_x"));
  T137 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_consequent_131 = YPfab_met(FUNCODEREF(fun_alternative_consequent_131),T137,LITREF(lit_286),LITREF(lit_287),sloc(236),YPfalse);
  T139 = VARREF_OR(YevalSastYalternative_consequent,YPfalse);
  T140 = fun_alternative_consequent_131;
  T138 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T139,T140);
  VARSET(YevalSastYalternative_consequent,T138);
  lit_288 = YPPsym((P)"alternative-consequent-setter");
  lit_289 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T141 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_consequent_setter_132 = YPfab_met(FUNCODEREF(fun_alternative_consequent_setter_132),T141,LITREF(lit_288),LITREF(lit_289),sloc(236),YPfalse);
  T143 = VARREF_OR(YevalSastYalternative_consequent_setter,YPfalse);
  T144 = fun_alternative_consequent_setter_132;
  T142 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T143,T144);
  VARSET(YevalSastYalternative_consequent_setter,T142);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_consequent),VARREF(YevalSastYalternative_consequent_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_290 = YPPsym((P)"alternative-alternant");
  lit_291 = YPPlist(1,YPPsym((P)"_x"));
  T145 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_alternant_133 = YPfab_met(FUNCODEREF(fun_alternative_alternant_133),T145,LITREF(lit_290),LITREF(lit_291),sloc(237),YPfalse);
  T147 = VARREF_OR(YevalSastYalternative_alternant,YPfalse);
  T148 = fun_alternative_alternant_133;
  T146 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T147,T148);
  VARSET(YevalSastYalternative_alternant,T146);
  lit_292 = YPPsym((P)"alternative-alternant-setter");
  lit_293 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T149 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_alternant_setter_134 = YPfab_met(FUNCODEREF(fun_alternative_alternant_setter_134),T149,LITREF(lit_292),LITREF(lit_293),sloc(237),YPfalse);
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
  fun_loop_bindings_135 = YPfab_met(FUNCODEREF(fun_loop_bindings_135),T0,LITREF(lit_295),LITREF(lit_296),sloc(240),YPfalse);
  T2 = VARREF_OR(YevalSastYloop_bindings,YPfalse);
  T3 = fun_loop_bindings_135;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSastYloop_bindings,T1);
  lit_297 = YPPsym((P)"loop-bindings-setter");
  lit_298 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T4 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLloopG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_bindings_setter_136 = YPfab_met(FUNCODEREF(fun_loop_bindings_setter_136),T4,LITREF(lit_297),LITREF(lit_298),sloc(240),YPfalse);
  T6 = VARREF_OR(YevalSastYloop_bindings_setter,YPfalse);
  T7 = fun_loop_bindings_setter_136;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSastYloop_bindings_setter,T5);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLloopG),VARREF(YevalSastYloop_bindings),VARREF(YevalSastYloop_bindings_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_299 = YPPsym((P)"loop-body");
  lit_300 = YPPlist(1,YPPsym((P)"_x"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLloopG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_body_137 = YPfab_met(FUNCODEREF(fun_loop_body_137),T8,LITREF(lit_299),LITREF(lit_300),sloc(241),YPfalse);
  T10 = VARREF_OR(YevalSastYloop_body,YPfalse);
  T11 = fun_loop_body_137;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YevalSastYloop_body,T9);
  lit_301 = YPPsym((P)"loop-body-setter");
  lit_302 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T12 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLloopG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_body_setter_138 = YPfab_met(FUNCODEREF(fun_loop_body_setter_138),T12,LITREF(lit_301),LITREF(lit_302),sloc(241),YPfalse);
  T14 = VARREF_OR(YevalSastYloop_body_setter,YPfalse);
  T15 = fun_loop_body_setter_138;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YevalSastYloop_body_setter,T13);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLloopG),VARREF(YevalSastYloop_body),VARREF(YevalSastYloop_body_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_303 = YPPsym((P)"loop-continue");
  lit_304 = YPPlist(1,YPPsym((P)"_x"));
  T16 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLloopG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_continue_139 = YPfab_met(FUNCODEREF(fun_loop_continue_139),T16,LITREF(lit_303),LITREF(lit_304),sloc(242),YPfalse);
  T18 = VARREF_OR(YevalSastYloop_continue,YPfalse);
  T19 = fun_loop_continue_139;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalSastYloop_continue,T17);
  lit_305 = YPPsym((P)"loop-continue-setter");
  lit_306 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T20 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLloopG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_continue_setter_140 = YPfab_met(FUNCODEREF(fun_loop_continue_setter_140),T20,LITREF(lit_305),LITREF(lit_306),sloc(242),YPfalse);
  T22 = VARREF_OR(YevalSastYloop_continue_setter,YPfalse);
  T23 = fun_loop_continue_setter_140;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSastYloop_continue_setter,T21);
  lit_307 = YPPlist(1,YPPsym((P)"_x"));
  T24 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_141 = YPfab_met(FUNCODEREF(fun_141),T24,YPfalse,LITREF(lit_307),sloc(242),YPfalse);
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
  YevalSastYsequential = YPfab_met(FUNCODEREF(YevalSastYsequential),T30,LITREF(lit_309),LITREF(lit_310),sloc(244),YPfalse);
  T31 = YevalSastYsequential;
  VARSET(YevalSastYsequential,T31);
  lit_311 = YPPlist(1,YPPsym((P)"e"));
  T33 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLsequentialG));
  T32 = YPfab_sig(YPPlist(1,T33),YPfalse,YPint((P)1),VARREF(YevalSastYLsequentialG),Ynil);
  fun_nul_143 = YPfab_met(FUNCODEREF(fun_nul_143),T32,LITREF(lit_257),LITREF(lit_311),sloc(244),YPfalse);
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
  fun_constant_value_144 = YPfab_met(FUNCODEREF(fun_constant_value_144),T39,LITREF(lit_313),LITREF(lit_314),sloc(247),YPfalse);
  T41 = VARREF_OR(YevalSastYconstant_value,YPfalse);
  T42 = fun_constant_value_144;
  T40 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T41,T42);
  VARSET(YevalSastYconstant_value,T40);
  lit_315 = YPPsym((P)"constant-value-setter");
  lit_316 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T43 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_constant_value_setter_145 = YPfab_met(FUNCODEREF(fun_constant_value_setter_145),T43,LITREF(lit_315),LITREF(lit_316),sloc(247),YPfalse);
  T45 = VARREF_OR(YevalSastYconstant_value_setter,YPfalse);
  T46 = fun_constant_value_setter_145;
  T44 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T45,T46);
  VARSET(YevalSastYconstant_value_setter,T44);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),VARREF(YevalSastYconstant_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_317 = YPPsym((P)"constant-index");
  lit_318 = YPPlist(1,YPPsym((P)"_x"));
  T47 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_constant_index_146 = YPfab_met(FUNCODEREF(fun_constant_index_146),T47,LITREF(lit_317),LITREF(lit_318),sloc(248),YPfalse);
  T49 = VARREF_OR(YevalSastYconstant_index,YPfalse);
  T50 = fun_constant_index_146;
  T48 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T49,T50);
  VARSET(YevalSastYconstant_index,T48);
  lit_319 = YPPsym((P)"constant-index-setter");
  lit_320 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T51 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_constant_index_setter_147 = YPfab_met(FUNCODEREF(fun_constant_index_setter_147),T51,LITREF(lit_319),LITREF(lit_320),sloc(248),YPfalse);
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
  fun_application_arguments_148 = YPfab_met(FUNCODEREF(fun_application_arguments_148),T61,LITREF(lit_324),LITREF(lit_325),sloc(255),YPfalse);
  T63 = VARREF_OR(YevalSastYapplication_arguments,YPfalse);
  T64 = fun_application_arguments_148;
  T62 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T63,T64);
  VARSET(YevalSastYapplication_arguments,T62);
  lit_326 = YPPsym((P)"application-arguments-setter");
  lit_327 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T65 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_arguments_setter_149 = YPfab_met(FUNCODEREF(fun_application_arguments_setter_149),T65,LITREF(lit_326),LITREF(lit_327),sloc(255),YPfalse);
  T67 = VARREF_OR(YevalSastYapplication_arguments_setter,YPfalse);
  T68 = fun_application_arguments_setter_149;
  T66 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T67,T68);
  VARSET(YevalSastYapplication_arguments_setter,T66);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLapplicationG),VARREF(YevalSastYapplication_arguments),VARREF(YevalSastYapplication_arguments_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_328 = YPPsym((P)"application-tail?");
  lit_329 = YPPlist(1,YPPsym((P)"_x"));
  T69 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_tailQ_150 = YPfab_met(FUNCODEREF(fun_application_tailQ_150),T69,LITREF(lit_328),LITREF(lit_329),sloc(256),YPfalse);
  T71 = VARREF_OR(YevalSastYapplication_tailQ,YPfalse);
  T72 = fun_application_tailQ_150;
  T70 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T71,T72);
  VARSET(YevalSastYapplication_tailQ,T70);
  lit_330 = YPPsym((P)"application-tail?-setter");
  lit_331 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T73 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_tailQ_setter_151 = YPfab_met(FUNCODEREF(fun_application_tailQ_setter_151),T73,LITREF(lit_330),LITREF(lit_331),sloc(256),YPfalse);
  T75 = VARREF_OR(YevalSastYapplication_tailQ_setter,YPfalse);
  T76 = fun_application_tailQ_setter_151;
  T74 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T75,T76);
  VARSET(YevalSastYapplication_tailQ_setter,T74);
  lit_332 = YPPlist(1,YPPsym((P)"_x"));
  T77 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_152 = YPfab_met(FUNCODEREF(fun_152),T77,YPfalse,LITREF(lit_332),sloc(256),YPfalse);
  T78 = fun_152;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLapplicationG),VARREF(YevalSastYapplication_tailQ),VARREF(YevalSastYapplication_tailQ_setter),VARREF(YLanyG),T78);
  lit_333 = YPPsym((P)"<loop-application>");
  T80 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLapplicationG),Ynil);
  T79 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_333),T80);
  VARSET(YevalSastYLloop_applicationG,T79);
  lit_334 = YPPsym((P)"application-loop");
  lit_335 = YPPlist(1,YPPsym((P)"_x"));
  T81 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLloop_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_loop_153 = YPfab_met(FUNCODEREF(fun_application_loop_153),T81,LITREF(lit_334),LITREF(lit_335),sloc(259),YPfalse);
  T83 = VARREF_OR(YevalSastYapplication_loop,YPfalse);
  T84 = fun_application_loop_153;
  T82 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T83,T84);
  VARSET(YevalSastYapplication_loop,T82);
  lit_336 = YPPsym((P)"application-loop-setter");
  lit_337 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T85 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLloopG),VARREF(YevalSastYLloop_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_loop_setter_154 = YPfab_met(FUNCODEREF(fun_application_loop_setter_154),T85,LITREF(lit_336),LITREF(lit_337),sloc(259),YPfalse);
  T87 = VARREF_OR(YevalSastYapplication_loop_setter,YPfalse);
  T88 = fun_application_loop_setter_154;
  T86 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T87,T88);
  VARSET(YevalSastYapplication_loop_setter,T86);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLloop_applicationG),VARREF(YevalSastYapplication_loop),VARREF(YevalSastYapplication_loop_setter),VARREF(YevalSastYLloopG),VARREF(YPprop_unbound_error));
  lit_338 = YPPlist(1,YPPsym((P)"x"));
  T89 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLloop_applicationG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_application_tailQ_155 = YPfab_met(FUNCODEREF(fun_application_tailQ_155),T89,LITREF(lit_328),LITREF(lit_338),sloc(261),YPfalse);
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
  fun_application_function_156 = YPfab_met(FUNCODEREF(fun_application_function_156),T95,LITREF(lit_340),LITREF(lit_341),sloc(264),YPfalse);
  T97 = VARREF_OR(YevalSastYapplication_function,YPfalse);
  T98 = fun_application_function_156;
  T96 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T97,T98);
  VARSET(YevalSastYapplication_function,T96);
  lit_342 = YPPsym((P)"application-function-setter");
  lit_343 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T99 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_function_setter_157 = YPfab_met(FUNCODEREF(fun_application_function_setter_157),T99,LITREF(lit_342),LITREF(lit_343),sloc(264),YPfalse);
  T101 = VARREF_OR(YevalSastYapplication_function_setter,YPfalse);
  T102 = fun_application_function_setter_157;
  T100 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T101,T102);
  VARSET(YevalSastYapplication_function_setter,T100);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLregular_applicationG),VARREF(YevalSastYapplication_function),VARREF(YevalSastYapplication_function_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_344 = YPPsym((P)"application-known?");
  lit_345 = YPPlist(1,YPPsym((P)"_x"));
  T103 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_knownQ_158 = YPfab_met(FUNCODEREF(fun_application_knownQ_158),T103,LITREF(lit_344),LITREF(lit_345),sloc(265),YPfalse);
  T105 = VARREF_OR(YevalSastYapplication_knownQ,YPfalse);
  T106 = fun_application_knownQ_158;
  T104 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T105,T106);
  VARSET(YevalSastYapplication_knownQ,T104);
  lit_346 = YPPsym((P)"application-known?-setter");
  lit_347 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T107 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_knownQ_setter_159 = YPfab_met(FUNCODEREF(fun_application_knownQ_setter_159),T107,LITREF(lit_346),LITREF(lit_347),sloc(265),YPfalse);
  T109 = VARREF_OR(YevalSastYapplication_knownQ_setter,YPfalse);
  T110 = fun_application_knownQ_setter_159;
  T108 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T109,T110);
  VARSET(YevalSastYapplication_knownQ_setter,T108);
  lit_348 = YPPlist(1,YPPsym((P)"_x"));
  T111 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_160 = YPfab_met(FUNCODEREF(fun_160),T111,YPfalse,LITREF(lit_348),sloc(265),YPfalse);
  T112 = fun_160;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLregular_applicationG),VARREF(YevalSastYapplication_knownQ),VARREF(YevalSastYapplication_knownQ_setter),VARREF(YLanyG),T112);
  lit_349 = YPPsym((P)"<method-application>");
  T114 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLregular_applicationG),Ynil);
  T113 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_349),T114);
  VARSET(YevalSastYLmethod_applicationG,T113);
  lit_350 = YPPsym((P)"application-next-methods");
  lit_351 = YPPlist(1,YPPsym((P)"_x"));
  T115 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLmethod_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_next_methods_161 = YPfab_met(FUNCODEREF(fun_application_next_methods_161),T115,LITREF(lit_350),LITREF(lit_351),sloc(268),YPfalse);
  T117 = VARREF_OR(YevalSastYapplication_next_methods,YPfalse);
  T118 = fun_application_next_methods_161;
  T116 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T117,T118);
  VARSET(YevalSastYapplication_next_methods,T116);
  lit_352 = YPPsym((P)"application-next-methods-setter");
  lit_353 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T119 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmethod_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_next_methods_setter_162 = YPfab_met(FUNCODEREF(fun_application_next_methods_setter_162),T119,LITREF(lit_352),LITREF(lit_353),sloc(268),YPfalse);
  T121 = VARREF_OR(YevalSastYapplication_next_methods_setter,YPfalse);
  T122 = fun_application_next_methods_setter_162;
  T120 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T121,T122);
  VARSET(YevalSastYapplication_next_methods_setter,T120);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmethod_applicationG),VARREF(YevalSastYapplication_next_methods),VARREF(YevalSastYapplication_next_methods_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_354 = YPPlist(1,YPPsym((P)"x"));
  T123 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLmethod_applicationG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_application_knownQ_163 = YPfab_met(FUNCODEREF(fun_application_knownQ_163),T123,LITREF(lit_344),LITREF(lit_354),sloc(270),YPfalse);
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
  fun_application_binding_164 = YPfab_met(FUNCODEREF(fun_application_binding_164),T129,LITREF(lit_356),LITREF(lit_357),sloc(273),YPfalse);
  T131 = VARREF_OR(YevalSastYapplication_binding,YPfalse);
  T132 = fun_application_binding_164;
  T130 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T131,T132);
  VARSET(YevalSastYapplication_binding,T130);
  lit_358 = YPPsym((P)"application-binding-setter");
  lit_359 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T133 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLpredefined_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_binding_setter_165 = YPfab_met(FUNCODEREF(fun_application_binding_setter_165),T133,LITREF(lit_358),LITREF(lit_359),sloc(273),YPfalse);
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
  P T128,T129,T130,T131,T132,T133,T134;
DEFCREGS();
  lit_360 = YPPsym((P)"<fix-let>");
  T1 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_360),T1);
  VARSET(YevalSastYLfix_letG,T0);
  lit_361 = YPPsym((P)"fix-let-bindings");
  lit_362 = YPPlist(1,YPPsym((P)"_x"));
  T2 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_bindings_166 = YPfab_met(FUNCODEREF(fun_fix_let_bindings_166),T2,LITREF(lit_361),LITREF(lit_362),sloc(276),YPfalse);
  T4 = VARREF_OR(YevalSastYfix_let_bindings,YPfalse);
  T5 = fun_fix_let_bindings_166;
  T3 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T4,T5);
  VARSET(YevalSastYfix_let_bindings,T3);
  lit_363 = YPPsym((P)"fix-let-bindings-setter");
  lit_364 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T6 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_bindings_setter_167 = YPfab_met(FUNCODEREF(fun_fix_let_bindings_setter_167),T6,LITREF(lit_363),LITREF(lit_364),sloc(276),YPfalse);
  T8 = VARREF_OR(YevalSastYfix_let_bindings_setter,YPfalse);
  T9 = fun_fix_let_bindings_setter_167;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YevalSastYfix_let_bindings_setter,T7);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_bindings),VARREF(YevalSastYfix_let_bindings_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_365 = YPPsym((P)"fix-let-types");
  lit_366 = YPPlist(1,YPPsym((P)"_x"));
  T10 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_types_168 = YPfab_met(FUNCODEREF(fun_fix_let_types_168),T10,LITREF(lit_365),LITREF(lit_366),sloc(277),YPfalse);
  T12 = VARREF_OR(YevalSastYfix_let_types,YPfalse);
  T13 = fun_fix_let_types_168;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YevalSastYfix_let_types,T11);
  lit_367 = YPPsym((P)"fix-let-types-setter");
  lit_368 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T14 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_types_setter_169 = YPfab_met(FUNCODEREF(fun_fix_let_types_setter_169),T14,LITREF(lit_367),LITREF(lit_368),sloc(277),YPfalse);
  T16 = VARREF_OR(YevalSastYfix_let_types_setter,YPfalse);
  T17 = fun_fix_let_types_setter_169;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YevalSastYfix_let_types_setter,T15);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_types),VARREF(YevalSastYfix_let_types_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_369 = YPPsym((P)"fix-let-arguments");
  lit_370 = YPPlist(1,YPPsym((P)"_x"));
  T18 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_arguments_170 = YPfab_met(FUNCODEREF(fun_fix_let_arguments_170),T18,LITREF(lit_369),LITREF(lit_370),sloc(278),YPfalse);
  T20 = VARREF_OR(YevalSastYfix_let_arguments,YPfalse);
  T21 = fun_fix_let_arguments_170;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YevalSastYfix_let_arguments,T19);
  lit_371 = YPPsym((P)"fix-let-arguments-setter");
  lit_372 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T22 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_arguments_setter_171 = YPfab_met(FUNCODEREF(fun_fix_let_arguments_setter_171),T22,LITREF(lit_371),LITREF(lit_372),sloc(278),YPfalse);
  T24 = VARREF_OR(YevalSastYfix_let_arguments_setter,YPfalse);
  T25 = fun_fix_let_arguments_setter_171;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YevalSastYfix_let_arguments_setter,T23);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_arguments),VARREF(YevalSastYfix_let_arguments_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_373 = YPPsym((P)"fix-let-body");
  lit_374 = YPPlist(1,YPPsym((P)"_x"));
  T26 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_body_172 = YPfab_met(FUNCODEREF(fun_fix_let_body_172),T26,LITREF(lit_373),LITREF(lit_374),sloc(279),YPfalse);
  T28 = VARREF_OR(YevalSastYfix_let_body,YPfalse);
  T29 = fun_fix_let_body_172;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YevalSastYfix_let_body,T27);
  lit_375 = YPPsym((P)"fix-let-body-setter");
  lit_376 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T30 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_body_setter_173 = YPfab_met(FUNCODEREF(fun_fix_let_body_setter_173),T30,LITREF(lit_375),LITREF(lit_376),sloc(279),YPfalse);
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
  YevalSastYfab_list = YPfab_met(FUNCODEREF(YevalSastYfab_list),T40,LITREF(lit_379),LITREF(lit_380),sloc(282),YPfalse);
  T41 = YevalSastYfab_list;
  VARSET(YevalSastYfab_list,T41);
  lit_381 = YPPlist(1,YPPsym((P)"e"));
  T43 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLfab_listG));
  T42 = YPfab_sig(YPPlist(1,T43),YPfalse,YPint((P)1),VARREF(YevalSastYLfab_listG),Ynil);
  fun_nul_175 = YPfab_met(FUNCODEREF(fun_nul_175),T42,LITREF(lit_257),LITREF(lit_381),sloc(282),YPfalse);
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
  YevalSastYarguments = YPfab_met(FUNCODEREF(YevalSastYarguments),T51,LITREF(lit_383),LITREF(lit_384),sloc(284),YPfalse);
  T52 = YevalSastYarguments;
  VARSET(YevalSastYarguments,T52);
  lit_385 = YPPlist(1,YPPsym((P)"e"));
  T54 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLargumentsG));
  T53 = YPfab_sig(YPPlist(1,T54),YPfalse,YPint((P)1),VARREF(YevalSastYLargumentsG),Ynil);
  fun_nul_177 = YPfab_met(FUNCODEREF(fun_nul_177),T53,LITREF(lit_257),LITREF(lit_385),sloc(284),YPfalse);
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
  fun_locals_bindings_178 = YPfab_met(FUNCODEREF(fun_locals_bindings_178),T60,LITREF(lit_387),LITREF(lit_388),sloc(287),YPfalse);
  T62 = VARREF_OR(YevalSastYlocals_bindings,YPfalse);
  T63 = fun_locals_bindings_178;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YevalSastYlocals_bindings,T61);
  lit_389 = YPPsym((P)"locals-bindings-setter");
  lit_390 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T64 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_bindings_setter_179 = YPfab_met(FUNCODEREF(fun_locals_bindings_setter_179),T64,LITREF(lit_389),LITREF(lit_390),sloc(287),YPfalse);
  T66 = VARREF_OR(YevalSastYlocals_bindings_setter,YPfalse);
  T67 = fun_locals_bindings_setter_179;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YevalSastYlocals_bindings_setter,T65);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_bindings),VARREF(YevalSastYlocals_bindings_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_391 = YPPsym((P)"locals-functions");
  lit_392 = YPPlist(1,YPPsym((P)"_x"));
  T68 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_functions_180 = YPfab_met(FUNCODEREF(fun_locals_functions_180),T68,LITREF(lit_391),LITREF(lit_392),sloc(288),YPfalse);
  T70 = VARREF_OR(YevalSastYlocals_functions,YPfalse);
  T71 = fun_locals_functions_180;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YevalSastYlocals_functions,T69);
  lit_393 = YPPsym((P)"locals-functions-setter");
  lit_394 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T72 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_functions_setter_181 = YPfab_met(FUNCODEREF(fun_locals_functions_setter_181),T72,LITREF(lit_393),LITREF(lit_394),sloc(288),YPfalse);
  T74 = VARREF_OR(YevalSastYlocals_functions_setter,YPfalse);
  T75 = fun_locals_functions_setter_181;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YevalSastYlocals_functions_setter,T73);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_functions),VARREF(YevalSastYlocals_functions_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_395 = YPPsym((P)"locals-body");
  lit_396 = YPPlist(1,YPPsym((P)"_x"));
  T76 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_body_182 = YPfab_met(FUNCODEREF(fun_locals_body_182),T76,LITREF(lit_395),LITREF(lit_396),sloc(289),YPfalse);
  T78 = VARREF_OR(YevalSastYlocals_body,YPfalse);
  T79 = fun_locals_body_182;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YevalSastYlocals_body,T77);
  lit_397 = YPPsym((P)"locals-body-setter");
  lit_398 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T80 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_body_setter_183 = YPfab_met(FUNCODEREF(fun_locals_body_setter_183),T80,LITREF(lit_397),LITREF(lit_398),sloc(289),YPfalse);
  T82 = VARREF_OR(YevalSastYlocals_body_setter,YPfalse);
  T83 = fun_locals_body_setter_183;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YevalSastYlocals_body_setter,T81);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_body),VARREF(YevalSastYlocals_body_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_399 = YPPsym((P)"<inline-refs>");
  T86 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLprogramsG),Ynil);
  T85 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLlstG),T86);
  T84 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_399),T85);
  VARSET(YevalSastYLinline_refsG,T84);
  T87 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLinline_refsG));
  VARSET(YevalSastYDinline_refs_nul,T87);
  lit_400 = YPPsym((P)"inline-refs");
  lit_401 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T88 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYinline_refs = YPfab_met(FUNCODEREF(YevalSastYinline_refs),T88,LITREF(lit_400),LITREF(lit_401),sloc(291),YPfalse);
  T89 = YevalSastYinline_refs;
  VARSET(YevalSastYinline_refs,T89);
  lit_402 = YPPlist(1,YPPsym((P)"e"));
  T91 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLinline_refsG));
  T90 = YPfab_sig(YPPlist(1,T91),YPfalse,YPint((P)1),VARREF(YevalSastYLinline_refsG),Ynil);
  fun_nul_185 = YPfab_met(FUNCODEREF(fun_nul_185),T90,LITREF(lit_257),LITREF(lit_402),sloc(291),YPfalse);
  T93 = VARREF_OR(YgooScolsScolYnul,YPfalse);
  T94 = fun_nul_185;
  T92 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T93,T94);
  VARSET(YgooScolsScolYnul,T92);
  lit_403 = YPPsym((P)"<c-inline>");
  T96 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T95 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_403),T96);
  VARSET(YevalSastYLc_inlineG,T95);
  lit_404 = YPPsym((P)"c-inline-refs");
  lit_405 = YPPlist(1,YPPsym((P)"_x"));
  T97 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLc_inlineG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_c_inline_refs_186 = YPfab_met(FUNCODEREF(fun_c_inline_refs_186),T97,LITREF(lit_404),LITREF(lit_405),sloc(294),YPfalse);
  T99 = VARREF_OR(YevalSastYc_inline_refs,YPfalse);
  T100 = fun_c_inline_refs_186;
  T98 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T99,T100);
  VARSET(YevalSastYc_inline_refs,T98);
  lit_406 = YPPsym((P)"c-inline-refs-setter");
  lit_407 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T101 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLinline_refsG),VARREF(YevalSastYLc_inlineG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_c_inline_refs_setter_187 = YPfab_met(FUNCODEREF(fun_c_inline_refs_setter_187),T101,LITREF(lit_406),LITREF(lit_407),sloc(294),YPfalse);
  T103 = VARREF_OR(YevalSastYc_inline_refs_setter,YPfalse);
  T104 = fun_c_inline_refs_setter_187;
  T102 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T103,T104);
  VARSET(YevalSastYc_inline_refs_setter,T102);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLc_inlineG),VARREF(YevalSastYc_inline_refs),VARREF(YevalSastYc_inline_refs_setter),VARREF(YevalSastYLinline_refsG),VARREF(YPprop_unbound_error));
  lit_408 = YPPsym((P)"c-inline-strs");
  lit_409 = YPPlist(1,YPPsym((P)"_x"));
  T105 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLc_inlineG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_c_inline_strs_188 = YPfab_met(FUNCODEREF(fun_c_inline_strs_188),T105,LITREF(lit_408),LITREF(lit_409),sloc(295),YPfalse);
  T107 = VARREF_OR(YevalSastYc_inline_strs,YPfalse);
  T108 = fun_c_inline_strs_188;
  T106 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T107,T108);
  VARSET(YevalSastYc_inline_strs,T106);
  lit_410 = YPPsym((P)"c-inline-strs-setter");
  lit_411 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T109 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YevalSastYLc_inlineG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_c_inline_strs_setter_189 = YPfab_met(FUNCODEREF(fun_c_inline_strs_setter_189),T109,LITREF(lit_410),LITREF(lit_411),sloc(295),YPfalse);
  T111 = VARREF_OR(YevalSastYc_inline_strs_setter,YPfalse);
  T112 = fun_c_inline_strs_setter_189;
  T110 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T111,T112);
  VARSET(YevalSastYc_inline_strs_setter,T110);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLc_inlineG),VARREF(YevalSastYc_inline_strs),VARREF(YevalSastYc_inline_strs_setter),VARREF(YLlstG),VARREF(YPprop_unbound_error));
  lit_412 = YPPsym((P)"c-inline-expr?");
  lit_413 = YPPlist(1,YPPsym((P)"_x"));
  T113 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLc_inlineG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_c_inline_exprQ_190 = YPfab_met(FUNCODEREF(fun_c_inline_exprQ_190),T113,LITREF(lit_412),LITREF(lit_413),sloc(296),YPfalse);
  T115 = VARREF_OR(YevalSastYc_inline_exprQ,YPfalse);
  T116 = fun_c_inline_exprQ_190;
  T114 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T115,T116);
  VARSET(YevalSastYc_inline_exprQ,T114);
  lit_414 = YPPsym((P)"c-inline-expr?-setter");
  lit_415 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T117 = YPfab_sig(YPPlist(2,VARREF(YLlogG),VARREF(YevalSastYLc_inlineG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_c_inline_exprQ_setter_191 = YPfab_met(FUNCODEREF(fun_c_inline_exprQ_setter_191),T117,LITREF(lit_414),LITREF(lit_415),sloc(296),YPfalse);
  T119 = VARREF_OR(YevalSastYc_inline_exprQ_setter,YPfalse);
  T120 = fun_c_inline_exprQ_setter_191;
  T118 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T119,T120);
  VARSET(YevalSastYc_inline_exprQ_setter,T118);
  lit_416 = YPPlist(1,YPPsym((P)"_x"));
  T121 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_192 = YPfab_met(FUNCODEREF(fun_192),T121,YPfalse,LITREF(lit_416),sloc(296),YPfalse);
  T122 = fun_192;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLc_inlineG),VARREF(YevalSastYc_inline_exprQ),VARREF(YevalSastYc_inline_exprQ_setter),VARREF(YLlogG),T122);
  lit_417 = YPPsym((P)"<bind-exit>");
  T124 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T123 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_417),T124);
  VARSET(YevalSastYLbind_exitG,T123);
  lit_418 = YPPsym((P)"bind-exit-main-fun");
  lit_419 = YPPlist(1,YPPsym((P)"_x"));
  T125 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLbind_exitG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bind_exit_main_fun_193 = YPfab_met(FUNCODEREF(fun_bind_exit_main_fun_193),T125,LITREF(lit_418),LITREF(lit_419),sloc(299),YPfalse);
  T127 = VARREF_OR(YevalSastYbind_exit_main_fun,YPfalse);
  T128 = fun_bind_exit_main_fun_193;
  T126 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T127,T128);
  VARSET(YevalSastYbind_exit_main_fun,T126);
  lit_420 = YPPsym((P)"bind-exit-main-fun-setter");
  lit_421 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T129 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLbind_exitG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_bind_exit_main_fun_setter_194 = YPfab_met(FUNCODEREF(fun_bind_exit_main_fun_setter_194),T129,LITREF(lit_420),LITREF(lit_421),sloc(299),YPfalse);
  T131 = VARREF_OR(YevalSastYbind_exit_main_fun_setter,YPfalse);
  T132 = fun_bind_exit_main_fun_setter_194;
  T130 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T131,T132);
  VARSET(YevalSastYbind_exit_main_fun_setter,T130);
  T134 = XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLbind_exitG),VARREF(YevalSastYbind_exit_main_fun),VARREF(YevalSastYbind_exit_main_fun_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  T133 = T134;
  return T133;
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
  P T160,T161,T162,T163,T164,T165;
DEFCREGS();
  lit_422 = YPPsym((P)"bind-exit-light?");
  lit_423 = YPPlist(1,YPPsym((P)"_x"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLbind_exitG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bind_exit_lightQ_195 = YPfab_met(FUNCODEREF(fun_bind_exit_lightQ_195),T0,LITREF(lit_422),LITREF(lit_423),sloc(300),YPfalse);
  T2 = VARREF_OR(YevalSastYbind_exit_lightQ,YPfalse);
  T3 = fun_bind_exit_lightQ_195;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSastYbind_exit_lightQ,T1);
  lit_424 = YPPsym((P)"bind-exit-light?-setter");
  lit_425 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T4 = YPfab_sig(YPPlist(2,VARREF(YLlogG),VARREF(YevalSastYLbind_exitG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_bind_exit_lightQ_setter_196 = YPfab_met(FUNCODEREF(fun_bind_exit_lightQ_setter_196),T4,LITREF(lit_424),LITREF(lit_425),sloc(300),YPfalse);
  T6 = VARREF_OR(YevalSastYbind_exit_lightQ_setter,YPfalse);
  T7 = fun_bind_exit_lightQ_setter_196;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSastYbind_exit_lightQ_setter,T5);
  lit_426 = YPPlist(1,YPPsym((P)"_x"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_197 = YPfab_met(FUNCODEREF(fun_197),T8,YPfalse,LITREF(lit_426),sloc(300),YPfalse);
  T9 = fun_197;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLbind_exitG),VARREF(YevalSastYbind_exit_lightQ),VARREF(YevalSastYbind_exit_lightQ_setter),VARREF(YLlogG),T9);
  lit_427 = YPPsym((P)"<unwind-protect>");
  T11 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T10 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_427),T11);
  VARSET(YevalSastYLunwind_protectG,T10);
  lit_428 = YPPsym((P)"unwind-protect-protected-thunk");
  lit_429 = YPPlist(1,YPPsym((P)"_x"));
  T12 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unwind_protect_protected_thunk_198 = YPfab_met(FUNCODEREF(fun_unwind_protect_protected_thunk_198),T12,LITREF(lit_428),LITREF(lit_429),sloc(303),YPfalse);
  T14 = VARREF_OR(YevalSastYunwind_protect_protected_thunk,YPfalse);
  T15 = fun_unwind_protect_protected_thunk_198;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YevalSastYunwind_protect_protected_thunk,T13);
  lit_430 = YPPsym((P)"unwind-protect-protected-thunk-setter");
  lit_431 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T16 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_unwind_protect_protected_thunk_setter_199 = YPfab_met(FUNCODEREF(fun_unwind_protect_protected_thunk_setter_199),T16,LITREF(lit_430),LITREF(lit_431),sloc(303),YPfalse);
  T18 = VARREF_OR(YevalSastYunwind_protect_protected_thunk_setter,YPfalse);
  T19 = fun_unwind_protect_protected_thunk_setter_199;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalSastYunwind_protect_protected_thunk_setter,T17);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLunwind_protectG),VARREF(YevalSastYunwind_protect_protected_thunk),VARREF(YevalSastYunwind_protect_protected_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_432 = YPPsym((P)"unwind-protect-cleanup-thunk");
  lit_433 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unwind_protect_cleanup_thunk_200 = YPfab_met(FUNCODEREF(fun_unwind_protect_cleanup_thunk_200),T20,LITREF(lit_432),LITREF(lit_433),sloc(304),YPfalse);
  T22 = VARREF_OR(YevalSastYunwind_protect_cleanup_thunk,YPfalse);
  T23 = fun_unwind_protect_cleanup_thunk_200;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSastYunwind_protect_cleanup_thunk,T21);
  lit_434 = YPPsym((P)"unwind-protect-cleanup-thunk-setter");
  lit_435 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T24 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_unwind_protect_cleanup_thunk_setter_201 = YPfab_met(FUNCODEREF(fun_unwind_protect_cleanup_thunk_setter_201),T24,LITREF(lit_434),LITREF(lit_435),sloc(304),YPfalse);
  T26 = VARREF_OR(YevalSastYunwind_protect_cleanup_thunk_setter,YPfalse);
  T27 = fun_unwind_protect_cleanup_thunk_setter_201;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalSastYunwind_protect_cleanup_thunk_setter,T25);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLunwind_protectG),VARREF(YevalSastYunwind_protect_cleanup_thunk),VARREF(YevalSastYunwind_protect_cleanup_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_436 = YPPsym((P)"<monitor>");
  T29 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T28 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_436),T29);
  VARSET(YevalSastYLmonitorG,T28);
  lit_437 = YPPsym((P)"monitor-type");
  lit_438 = YPPlist(1,YPPsym((P)"_x"));
  T30 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_type_202 = YPfab_met(FUNCODEREF(fun_monitor_type_202),T30,LITREF(lit_437),LITREF(lit_438),sloc(307),YPfalse);
  T32 = VARREF_OR(YevalSastYmonitor_type,YPfalse);
  T33 = fun_monitor_type_202;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSastYmonitor_type,T31);
  lit_439 = YPPsym((P)"monitor-type-setter");
  lit_440 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T34 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_type_setter_203 = YPfab_met(FUNCODEREF(fun_monitor_type_setter_203),T34,LITREF(lit_439),LITREF(lit_440),sloc(307),YPfalse);
  T36 = VARREF_OR(YevalSastYmonitor_type_setter,YPfalse);
  T37 = fun_monitor_type_setter_203;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YevalSastYmonitor_type_setter,T35);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_type),VARREF(YevalSastYmonitor_type_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_441 = YPPsym((P)"monitor-info");
  lit_442 = YPPlist(1,YPPsym((P)"_x"));
  T38 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_info_204 = YPfab_met(FUNCODEREF(fun_monitor_info_204),T38,LITREF(lit_441),LITREF(lit_442),sloc(308),YPfalse);
  T40 = VARREF_OR(YevalSastYmonitor_info,YPfalse);
  T41 = fun_monitor_info_204;
  T39 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T40,T41);
  VARSET(YevalSastYmonitor_info,T39);
  lit_443 = YPPsym((P)"monitor-info-setter");
  lit_444 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T42 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_info_setter_205 = YPfab_met(FUNCODEREF(fun_monitor_info_setter_205),T42,LITREF(lit_443),LITREF(lit_444),sloc(308),YPfalse);
  T44 = VARREF_OR(YevalSastYmonitor_info_setter,YPfalse);
  T45 = fun_monitor_info_setter_205;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YevalSastYmonitor_info_setter,T43);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_info),VARREF(YevalSastYmonitor_info_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_445 = YPPsym((P)"monitor-test");
  lit_446 = YPPlist(1,YPPsym((P)"_x"));
  T46 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_test_206 = YPfab_met(FUNCODEREF(fun_monitor_test_206),T46,LITREF(lit_445),LITREF(lit_446),sloc(309),YPfalse);
  T48 = VARREF_OR(YevalSastYmonitor_test,YPfalse);
  T49 = fun_monitor_test_206;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YevalSastYmonitor_test,T47);
  lit_447 = YPPsym((P)"monitor-test-setter");
  lit_448 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T50 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_test_setter_207 = YPfab_met(FUNCODEREF(fun_monitor_test_setter_207),T50,LITREF(lit_447),LITREF(lit_448),sloc(309),YPfalse);
  T52 = VARREF_OR(YevalSastYmonitor_test_setter,YPfalse);
  T53 = fun_monitor_test_setter_207;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YevalSastYmonitor_test_setter,T51);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_test),VARREF(YevalSastYmonitor_test_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_449 = YPPsym((P)"monitor-handler");
  lit_450 = YPPlist(1,YPPsym((P)"_x"));
  T54 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_handler_208 = YPfab_met(FUNCODEREF(fun_monitor_handler_208),T54,LITREF(lit_449),LITREF(lit_450),sloc(310),YPfalse);
  T56 = VARREF_OR(YevalSastYmonitor_handler,YPfalse);
  T57 = fun_monitor_handler_208;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YevalSastYmonitor_handler,T55);
  lit_451 = YPPsym((P)"monitor-handler-setter");
  lit_452 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T58 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_handler_setter_209 = YPfab_met(FUNCODEREF(fun_monitor_handler_setter_209),T58,LITREF(lit_451),LITREF(lit_452),sloc(310),YPfalse);
  T60 = VARREF_OR(YevalSastYmonitor_handler_setter,YPfalse);
  T61 = fun_monitor_handler_setter_209;
  T59 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T60,T61);
  VARSET(YevalSastYmonitor_handler_setter,T59);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_handler),VARREF(YevalSastYmonitor_handler_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_453 = YPPsym((P)"monitor-main-thunk");
  lit_454 = YPPlist(1,YPPsym((P)"_x"));
  T62 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_main_thunk_210 = YPfab_met(FUNCODEREF(fun_monitor_main_thunk_210),T62,LITREF(lit_453),LITREF(lit_454),sloc(311),YPfalse);
  T64 = VARREF_OR(YevalSastYmonitor_main_thunk,YPfalse);
  T65 = fun_monitor_main_thunk_210;
  T63 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T64,T65);
  VARSET(YevalSastYmonitor_main_thunk,T63);
  lit_455 = YPPsym((P)"monitor-main-thunk-setter");
  lit_456 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T66 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_main_thunk_setter_211 = YPfab_met(FUNCODEREF(fun_monitor_main_thunk_setter_211),T66,LITREF(lit_455),LITREF(lit_456),sloc(311),YPfalse);
  T68 = VARREF_OR(YevalSastYmonitor_main_thunk_setter,YPfalse);
  T69 = fun_monitor_main_thunk_setter_211;
  T67 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T68,T69);
  VARSET(YevalSastYmonitor_main_thunk_setter,T67);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_main_thunk),VARREF(YevalSastYmonitor_main_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_457 = YPPsym((P)"ast-walk!");
  lit_458 = YPPlist(3,YPPsym((P)"g"),YPPsym((P)"o"),YPPsym((P)"args"));
  T70 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_walkX_212 = YPfab_met(FUNCODEREF(fun_ast_walkX_212),T70,LITREF(lit_457),LITREF(lit_458),sloc(315),YPfalse);
  T72 = VARREF_OR(YevalSastYast_walkX,YPfalse);
  T73 = fun_ast_walkX_212;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YevalSastYast_walkX,T71);
  lit_459 = YPPsym((P)"ast-walk");
  lit_460 = YPPlist(3,YPPsym((P)"g"),YPPsym((P)"o"),YPPsym((P)"args"));
  T74 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_walk_213 = YPfab_met(FUNCODEREF(fun_ast_walk_213),T74,LITREF(lit_459),LITREF(lit_460),sloc(330),YPfalse);
  T76 = VARREF_OR(YevalSastYast_walk,YPfalse);
  T77 = fun_ast_walk_213;
  T75 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T76,T77);
  VARSET(YevalSastYast_walk,T75);
  lit_461 = YPPlist(3,YPPsym((P)"g"),YPPsym((P)"o"),YPPsym((P)"args"));
  T78 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLprogramsG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_walk_214 = YPfab_met(FUNCODEREF(fun_ast_walk_214),T78,LITREF(lit_459),LITREF(lit_461),sloc(341),YPfalse);
  T80 = VARREF_OR(YevalSastYast_walk,YPfalse);
  T81 = fun_ast_walk_214;
  T79 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T80,T81);
  VARSET(YevalSastYast_walk,T79);
  lit_462 = YPPsym((P)"ast-copy");
  lit_463 = YPPlist(1,YPPsym((P)"x"));
  T82 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_copy_215 = YPfab_met(FUNCODEREF(fun_ast_copy_215),T82,LITREF(lit_462),LITREF(lit_463),sloc(360),YPfalse);
  T84 = VARREF_OR(YevalSastYast_copy,YPfalse);
  T85 = fun_ast_copy_215;
  T83 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T84,T85);
  VARSET(YevalSastYast_copy,T83);
  lit_464 = YPPlist(1,YPPsym((P)"x"));
  T86 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLprogramsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_copy_216 = YPfab_met(FUNCODEREF(fun_ast_copy_216),T86,LITREF(lit_462),LITREF(lit_464),sloc(365),YPfalse);
  T88 = VARREF_OR(YevalSastYast_copy,YPfalse);
  T89 = fun_ast_copy_216;
  T87 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T88,T89);
  VARSET(YevalSastYast_copy,T87);
  lit_465 = YPPsym((P)"objectify");
  lit_466 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T90 = YPfab_sig(YPPlist(3,VARREF(YLlstG),VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_217 = YPfab_met(FUNCODEREF(fun_objectify_217),T90,LITREF(lit_465),LITREF(lit_466),sloc(372),YPfalse);
  T92 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T93 = fun_objectify_217;
  T91 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T92,T93);
  VARSET(YevalSastYobjectify,T91);
  lit_467 = YPPsym((P)"objectify-list");
  lit_468 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T94 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLprogramG),VARREF(YLlstG),VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_218 = YPfab_met(FUNCODEREF(fun_objectify_list_218),T94,LITREF(lit_467),LITREF(lit_468),sloc(377),YPfalse);
  T96 = VARREF_OR(YevalSastYobjectify_list,YPfalse);
  T97 = fun_objectify_list_218;
  T95 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T96,T97);
  VARSET(YevalSastYobjectify_list,T95);
  lit_469 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T98 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLmagic_referenceG),VARREF(YLlstG),VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_219 = YPfab_met(FUNCODEREF(fun_objectify_list_219),T98,LITREF(lit_467),LITREF(lit_469),sloc(381),YPfalse);
  T100 = VARREF_OR(YevalSastYobjectify_list,YPfalse);
  T101 = fun_objectify_list_219;
  T99 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T100,T101);
  VARSET(YevalSastYobjectify_list,T99);
  lit_470 = YPPsym((P)"maybe-log-dependency");
  lit_471 = YPPlist(2,YPPsym((P)"dependable"),YPPsym((P)"dtype"));
  T102 = YPfab_sig(YPPlist(2,VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYmaybe_log_dependency = YPfab_met(FUNCODEREF(YevalSastYmaybe_log_dependency),T102,LITREF(lit_470),LITREF(lit_471),sloc(385),YPfalse);
  T103 = YevalSastYmaybe_log_dependency;
  VARSET(YevalSastYmaybe_log_dependency,T103);
  lit_472 = YPPsym((P)"macro-expander");
  lit_473 = YPPlist(1,YPPsym((P)"macro-binding"));
  T104 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  YevalSastYmacro_expander = YPfab_met(FUNCODEREF(YevalSastYmacro_expander),T104,LITREF(lit_472),LITREF(lit_473),sloc(390),YPfalse);
  T105 = YevalSastYmacro_expander;
  VARSET(YevalSastYmacro_expander,T105);
  lit_474 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T106 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLmacro_referenceG),VARREF(YLlstG),VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_222 = YPfab_met(FUNCODEREF(fun_objectify_list_222),T106,LITREF(lit_467),LITREF(lit_474),sloc(394),YPfalse);
  T108 = VARREF_OR(YevalSastYobjectify_list,YPfalse);
  T109 = fun_objectify_list_222;
  T107 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T108,T109);
  VARSET(YevalSastYobjectify_list,T107);
  lit_475 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T110 = YPfab_sig(YPPlist(3,VARREF(YLsymG),VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_223 = YPfab_met(FUNCODEREF(fun_objectify_223),T110,LITREF(lit_465),LITREF(lit_475),sloc(398),YPfalse);
  T112 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T113 = fun_objectify_223;
  T111 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T112,T113);
  VARSET(YevalSastYobjectify,T111);
  lit_476 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T114 = YPfab_sig(YPPlist(3,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_224 = YPfab_met(FUNCODEREF(fun_objectify_224),T114,LITREF(lit_465),LITREF(lit_476),sloc(401),YPfalse);
  T116 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T117 = fun_objectify_224;
  T115 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T116,T117);
  VARSET(YevalSastYobjectify,T115);
  lit_477 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T118 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_225 = YPfab_met(FUNCODEREF(fun_objectify_225),T118,LITREF(lit_465),LITREF(lit_477),sloc(404),YPfalse);
  T120 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T121 = fun_objectify_225;
  T119 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T120,T121);
  VARSET(YevalSastYobjectify,T119);
  lit_478 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T123 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T122 = YPfab_sig(YPPlist(3,T123,VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_226 = YPfab_met(FUNCODEREF(fun_objectify_226),T122,LITREF(lit_465),LITREF(lit_478),sloc(407),YPfalse);
  T125 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T126 = fun_objectify_226;
  T124 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T125,T126);
  VARSET(YevalSastYobjectify,T124);
  lit_479 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T127 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_227 = YPfab_met(FUNCODEREF(fun_objectify_227),T127,LITREF(lit_465),LITREF(lit_479),sloc(410),YPfalse);
  T129 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T130 = fun_objectify_227;
  T128 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T129,T130);
  VARSET(YevalSastYobjectify,T128);
  lit_480 = YPPsym((P)"objectify-quotation");
  lit_481 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"r"));
  T131 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLconstantG),Ynil);
  fun_objectify_quotation_228 = YPfab_met(FUNCODEREF(fun_objectify_quotation_228),T131,LITREF(lit_480),LITREF(lit_481),sloc(413),YPfalse);
  T133 = VARREF_OR(YevalSastYobjectify_quotation,YPfalse);
  T134 = fun_objectify_quotation_228;
  T132 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T133,T134);
  VARSET(YevalSastYobjectify_quotation,T132);
  lit_482 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"r"));
  T135 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLimmediate_constantG),Ynil);
  fun_objectify_quotation_229 = YPfab_met(FUNCODEREF(fun_objectify_quotation_229),T135,LITREF(lit_480),LITREF(lit_482),sloc(416),YPfalse);
  T137 = VARREF_OR(YevalSastYobjectify_quotation,YPfalse);
  T138 = fun_objectify_quotation_229;
  T136 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T137,T138);
  VARSET(YevalSastYobjectify_quotation,T136);
  lit_483 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"r"));
  T139 = YPfab_sig(YPPlist(2,VARREF(YLchrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLimmediate_constantG),Ynil);
  fun_objectify_quotation_230 = YPfab_met(FUNCODEREF(fun_objectify_quotation_230),T139,LITREF(lit_480),LITREF(lit_483),sloc(419),YPfalse);
  T141 = VARREF_OR(YevalSastYobjectify_quotation,YPfalse);
  T142 = fun_objectify_quotation_230;
  T140 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T141,T142);
  VARSET(YevalSastYobjectify_quotation,T140);
  lit_484 = YPPsym((P)"objectify-raw");
  lit_485 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"r"));
  T143 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLraw_constantG),Ynil);
  fun_objectify_raw_231 = YPfab_met(FUNCODEREF(fun_objectify_raw_231),T143,LITREF(lit_484),LITREF(lit_485),sloc(422),YPfalse);
  T145 = VARREF_OR(YevalSastYobjectify_raw,YPfalse);
  T146 = fun_objectify_raw_231;
  T144 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T145,T146);
  VARSET(YevalSastYobjectify_raw,T144);
  lit_486 = YPPsym((P)"objectify-bound?");
  lit_487 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"default"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T147 = YPfab_sig(YPPlist(4,VARREF(YLsymG),VARREF(YLanyG),VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_boundQ_232 = YPfab_met(FUNCODEREF(fun_objectify_boundQ_232),T147,LITREF(lit_486),LITREF(lit_487),sloc(425),YPfalse);
  T149 = VARREF_OR(YevalSastYobjectify_boundQ,YPfalse);
  T150 = fun_objectify_boundQ_232;
  T148 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T149,T150);
  VARSET(YevalSastYobjectify_boundQ,T148);
  lit_488 = YPPsym((P)"objectify-compile-time");
  lit_489 = YPPlist(4,YPPsym((P)"program"),YPPsym((P)"r"),YPPsym((P)"tail?"),YPPsym((P)"rt?"));
  T151 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_compile_time_233 = YPfab_met(FUNCODEREF(fun_objectify_compile_time_233),T151,LITREF(lit_488),LITREF(lit_489),sloc(433),YPfalse);
  T153 = VARREF_OR(YevalSastYobjectify_compile_time,YPfalse);
  T154 = fun_objectify_compile_time_233;
  T152 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T153,T154);
  VARSET(YevalSastYobjectify_compile_time,T152);
  lit_490 = YPPsym((P)"objectify-alternative");
  lit_491 = YPPlist(5,YPPsym((P)"t"),YPPsym((P)"c"),YPPsym((P)"a"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T155 = YPfab_sig(YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLalternativeG),Ynil);
  fun_objectify_alternative_234 = YPfab_met(FUNCODEREF(fun_objectify_alternative_234),T155,LITREF(lit_490),LITREF(lit_491),sloc(449),YPfalse);
  T157 = VARREF_OR(YevalSastYobjectify_alternative,YPfalse);
  T158 = fun_objectify_alternative_234;
  T156 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T157,T158);
  VARSET(YevalSastYobjectify_alternative,T156);
  lit_492 = YPPsym((P)"sequentialize");
  lit_493 = YPPlist(1,YPPsym((P)"e*"));
  T161 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YevalSastYLprogramG),Ynil);
  T160 = fun_sequentialize_235 = YPfab_met(FUNCODEREF(fun_sequentialize_235),T161,LITREF(lit_492),LITREF(lit_493),sloc(455),YPfalse);
  T164 = VARREF_OR(YevalSastYsequentialize,YPfalse);
  T165 = fun_sequentialize_235;
  T163 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T164,T165);
  T162 = VARSET(YevalSastYsequentialize,T163);
  T159 = T162;
  return T159;
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
  P T176,T177,T178,T179,T180,T181,T182,T183;
DEFCREGS();
  lit_494 = YPPsym((P)"transform-defs");
  lit_495 = YPPlist(1,YPPsym((P)"e*"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_transform_defs_236 = YPfab_met(FUNCODEREF(fun_transform_defs_236),T0,LITREF(lit_494),LITREF(lit_495),sloc(465),YPfalse);
  T2 = VARREF_OR(YevalSastYtransform_defs,YPfalse);
  T3 = fun_transform_defs_236;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSastYtransform_defs,T1);
  lit_496 = YPPsym((P)"objectify-sequential");
  lit_497 = YPPlist(3,YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T4 = YPfab_sig(YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_sequential_237 = YPfab_met(FUNCODEREF(fun_objectify_sequential_237),T4,LITREF(lit_496),LITREF(lit_497),sloc(474),YPfalse);
  T6 = VARREF_OR(YevalSastYobjectify_sequential,YPfalse);
  T7 = fun_objectify_sequential_237;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSastYobjectify_sequential,T5);
  lit_498 = YPPsym((P)"objectify-application");
  lit_499 = YPPlist(4,YPPsym((P)"ff"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_500 = YPPlist(1,YPPsym((P)"e"));
  T9 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_238 = YPfab_met(FUNCODEREF(fun_238),T9,YPfalse,LITREF(lit_500),sloc(485),YPfalse);
  T8 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_application_239 = YPfab_met(FUNCODEREF(fun_objectify_application_239),T8,LITREF(lit_498),LITREF(lit_499),sloc(484),YPfalse);
  T11 = VARREF_OR(YevalSastYobjectify_application,YPfalse);
  T12 = fun_objectify_application_239;
  T10 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T11,T12);
  VARSET(YevalSastYobjectify_application,T10);
  lit_501 = YPPlist(4,YPPsym((P)"ff"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_502 = YPPlist(1,YPPsym((P)"e"));
  T14 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_240 = YPfab_met(FUNCODEREF(fun_240),T14,YPfalse,LITREF(lit_502),sloc(491),YPfalse);
  T13 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLpredefined_referenceG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_application_241 = YPfab_met(FUNCODEREF(fun_objectify_application_241),T13,LITREF(lit_498),LITREF(lit_501),sloc(490),YPfalse);
  T16 = VARREF_OR(YevalSastYobjectify_application,YPfalse);
  T17 = fun_objectify_application_241;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YevalSastYobjectify_application,T15);
  lit_503 = YPPlist(4,YPPsym((P)"ff"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_504 = YPPlist(1,YPPsym((P)"e"));
  T19 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_242 = YPfab_met(FUNCODEREF(fun_242),T19,YPfalse,LITREF(lit_504),sloc(502),YPfalse);
  T18 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_application_243 = YPfab_met(FUNCODEREF(fun_objectify_application_243),T18,LITREF(lit_498),LITREF(lit_503),sloc(501),YPfalse);
  T21 = VARREF_OR(YevalSastYobjectify_application,YPfalse);
  T22 = fun_objectify_application_243;
  T20 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T21,T22);
  VARSET(YevalSastYobjectify_application,T20);
  lit_505 = YPPsym((P)"process-closed-application");
  lit_506 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_507 = YPsb((P)"incorrect regular arity");
  T23 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLast_embodied_functionG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLfix_letG),Ynil);
  fun_process_closed_application_244 = YPfab_met(FUNCODEREF(fun_process_closed_application_244),T23,LITREF(lit_505),LITREF(lit_506),sloc(511),YPfalse);
  T25 = VARREF_OR(YevalSastYprocess_closed_application,YPfalse);
  T26 = fun_process_closed_application_244;
  T24 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T25,T26);
  VARSET(YevalSastYprocess_closed_application,T24);
  lit_508 = YPPsym((P)"process-nary-closed-application");
  lit_509 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_510 = YPPsym((P)"pack-args");
  lit_511 = YPPlist(3,YPPsym((P)"e*"),YPPsym((P)"v*"),YPPsym((P)"t*"));
  lit_512 = YPPsym((P)"<tup>");
  lit_513 = YPPsym((P)"tup");
  lit_514 = YPsb((P)"incorrect dotted arity");
  T28 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_pack_args_245 = YPfab_met(FUNCODEREF(fun_pack_args_245),T28,LITREF(lit_510),LITREF(lit_511),sloc(526),YPfalse);
  T27 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLfix_letG),Ynil);
  fun_process_nary_closed_application_246 = YPfab_met(FUNCODEREF(fun_process_nary_closed_application_246),T27,LITREF(lit_508),LITREF(lit_509),sloc(525),YPfalse);
  T30 = VARREF_OR(YevalSastYprocess_nary_closed_application,YPfalse);
  T31 = fun_process_nary_closed_application_246;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YevalSastYprocess_nary_closed_application,T29);
  lit_515 = YPPsym((P)"convert2arguments");
  lit_516 = YPPlist(1,YPPsym((P)"e*"));
  T32 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_convert2arguments_247 = YPfab_met(FUNCODEREF(fun_convert2arguments_247),T32,LITREF(lit_515),LITREF(lit_516),sloc(547),YPfalse);
  T34 = VARREF_OR(YevalSastYconvert2arguments,YPfalse);
  T35 = fun_convert2arguments_247;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YevalSastYconvert2arguments,T33);
  lit_517 = YPPsym((P)"objectify-assignment");
  lit_518 = YPPlist(4,YPPsym((P)"binding"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_519 = YPsb((P)"Unsupported Set!: %=");
  T36 = YPfab_sig(YPPlist(4,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_assignment_248 = YPfab_met(FUNCODEREF(fun_objectify_assignment_248),T36,LITREF(lit_517),LITREF(lit_518),sloc(556),YPfalse);
  T38 = VARREF_OR(YevalSastYobjectify_assignment,YPfalse);
  T39 = fun_objectify_assignment_248;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YevalSastYobjectify_assignment,T37);
  lit_520 = YPPlist(4,YPPsym((P)"binding"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T40 = YPfab_sig(YPPlist(4,VARREF(YLsymG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLassignmentG),Ynil);
  fun_objectify_assignment_249 = YPfab_met(FUNCODEREF(fun_objectify_assignment_249),T40,LITREF(lit_517),LITREF(lit_520),sloc(566),YPfalse);
  T42 = VARREF_OR(YevalSastYobjectify_assignment,YPfalse);
  T43 = fun_objectify_assignment_249;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YevalSastYobjectify_assignment,T41);
  lit_521 = YPPsym((P)"objectify-assignment-using");
  lit_522 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  T44 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLlocal_assignmentG),Ynil);
  fun_objectify_assignment_using_250 = YPfab_met(FUNCODEREF(fun_objectify_assignment_using_250),T44,LITREF(lit_521),LITREF(lit_522),sloc(571),YPfalse);
  T46 = VARREF_OR(YevalSastYobjectify_assignment_using,YPfalse);
  T47 = fun_objectify_assignment_using_250;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YevalSastYobjectify_assignment_using,T45);
  lit_523 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  T48 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLglobal_assignmentG),Ynil);
  fun_objectify_assignment_using_251 = YPfab_met(FUNCODEREF(fun_objectify_assignment_using_251),T48,LITREF(lit_521),LITREF(lit_523),sloc(578),YPfalse);
  T50 = VARREF_OR(YevalSastYobjectify_assignment_using,YPfalse);
  T51 = fun_objectify_assignment_using_251;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YevalSastYobjectify_assignment_using,T49);
  lit_524 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  T52 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLdynamic_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLglobal_assignmentG),Ynil);
  fun_objectify_assignment_using_252 = YPfab_met(FUNCODEREF(fun_objectify_assignment_using_252),T52,LITREF(lit_521),LITREF(lit_524),sloc(584),YPfalse);
  T54 = VARREF_OR(YevalSastYobjectify_assignment_using,YPfalse);
  T55 = fun_objectify_assignment_using_252;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YevalSastYobjectify_assignment_using,T53);
  lit_525 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  T56 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLruntime_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLruntime_assignmentG),Ynil);
  fun_objectify_assignment_using_253 = YPfab_met(FUNCODEREF(fun_objectify_assignment_using_253),T56,LITREF(lit_521),LITREF(lit_525),sloc(590),YPfalse);
  T58 = VARREF_OR(YevalSastYobjectify_assignment_using,YPfalse);
  T59 = fun_objectify_assignment_using_253;
  T57 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T58,T59);
  VARSET(YevalSastYobjectify_assignment_using,T57);
  lit_526 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  lit_527 = YPsb((P)"Unable to assign to static module binding %=");
  T60 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLstatic_module_binding_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_objectify_assignment_using_254 = YPfab_met(FUNCODEREF(fun_objectify_assignment_using_254),T60,LITREF(lit_521),LITREF(lit_526),sloc(596),YPfalse);
  T62 = VARREF_OR(YevalSastYobjectify_assignment_using,YPfalse);
  T63 = fun_objectify_assignment_using_254;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YevalSastYobjectify_assignment_using,T61);
  lit_528 = YPPsym((P)"update-binding-kind");
  lit_529 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"new-kind"));
  lit_530 = YPPsym((P)"runtime");
  lit_531 = YPPsym((P)"magic");
  lit_532 = YPPsym((P)"global");
  lit_533 = YPsb((P)"Cannot set type of runtime binding %s to %s.\n");
  T64 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYupdate_binding_kind = YPfab_met(FUNCODEREF(YevalSastYupdate_binding_kind),T64,LITREF(lit_528),LITREF(lit_529),sloc(609),YPfalse);
  T65 = YevalSastYupdate_binding_kind;
  VARSET(YevalSastYupdate_binding_kind,T65);
  lit_534 = YPPsym((P)"ast-define-binding");
  lit_535 = YPPlist(4,YPPsym((P)"r"),YPPsym((P)"name"),YPPsym((P)"defining-method?"),YPPsym((P)"kind"));
  lit_536 = YPsb((P)"%s: warning: '%s' clobbers binding from %s.\n");
  T66 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_ast_define_binding_256 = YPfab_met(FUNCODEREF(fun_ast_define_binding_256),T66,LITREF(lit_534),LITREF(lit_535),sloc(618),YPfalse);
  T68 = VARREF_OR(YevalSastYast_define_binding,YPfalse);
  T69 = fun_ast_define_binding_256;
  T67 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T68,T69);
  VARSET(YevalSastYast_define_binding,T67);
  VARSET(YevalSastYTmacro_tracingQT,YPfalse);
  lit_537 = YPPsym((P)"objectify-definition");
  lit_538 = YPPlist(5,YPPsym((P)"type"),YPPsym((P)"kind"),YPPsym((P)"var"),YPPsym((P)"e"),YPPsym((P)"r"));
  T70 = YPfab_sig(YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_objectify_definition_257 = YPfab_met(FUNCODEREF(fun_objectify_definition_257),T70,LITREF(lit_537),LITREF(lit_538),sloc(661),YPfalse);
  T72 = VARREF_OR(YevalSastYobjectify_definition,YPfalse);
  T73 = fun_objectify_definition_257;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YevalSastYobjectify_definition,T71);
  lit_539 = YPPsym((P)"objectify-variable-definition");
  lit_540 = YPPlist(3,YPPsym((P)"var"),YPPsym((P)"e"),YPPsym((P)"r"));
  T74 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_variable_definition_258 = YPfab_met(FUNCODEREF(fun_objectify_variable_definition_258),T74,LITREF(lit_539),LITREF(lit_540),sloc(672),YPfalse);
  T76 = VARREF_OR(YevalSastYobjectify_variable_definition,YPfalse);
  T77 = fun_objectify_variable_definition_258;
  T75 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T76,T77);
  VARSET(YevalSastYobjectify_variable_definition,T75);
  lit_541 = YPPsym((P)"objectify-dynamic-definition");
  lit_542 = YPPlist(3,YPPsym((P)"var"),YPPsym((P)"e"),YPPsym((P)"r"));
  lit_543 = YPPsym((P)"dynamic");
  T78 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_dynamic_definition_259 = YPfab_met(FUNCODEREF(fun_objectify_dynamic_definition_259),T78,LITREF(lit_541),LITREF(lit_542),sloc(675),YPfalse);
  T80 = VARREF_OR(YevalSastYobjectify_dynamic_definition,YPfalse);
  T81 = fun_objectify_dynamic_definition_259;
  T79 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T80,T81);
  VARSET(YevalSastYobjectify_dynamic_definition,T79);
  lit_544 = YPPsym((P)"%%%macro");
  lit_545 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"expander"));
  lit_546 = YPPsym((P)"expand");
  lit_547 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_548 = YPsb((P)"MACRO ");
  lit_549 = YPsb((P)"\n");
  lit_550 = YPsb((P)"  => ");
  lit_551 = YPsb((P)"\n");
  T83 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_260 = YPfab_met(FUNCODEREF(fun_expand_260),T83,LITREF(lit_546),LITREF(lit_547),sloc(680),YPfalse);
  T82 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSmoduleYLmodule_bindingG),Ynil);
  YevalSastYPPPmacro = YPfab_met(FUNCODEREF(YevalSastYPPPmacro),T82,LITREF(lit_544),LITREF(lit_545),sloc(678),YPfalse);
  T84 = YevalSastYPPPmacro;
  VARSET(YevalSastYPPPmacro,T84);
  lit_552 = YPPsym((P)"%%macro");
  lit_553 = YPPlist(4,YPPsym((P)"modname"),YPPsym((P)"name"),YPPsym((P)"expander"),YPPsym((P)"env-or-false"));
  lit_554 = YPPsym((P)"macro");
  T85 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  YPPmacro = YPfab_met(FUNCODEREF(YPPmacro),T85,LITREF(lit_552),LITREF(lit_553),sloc(691),YPfalse);
  T86 = YPPmacro;
  VARSET(YPPmacro,T86);
  lit_555 = YPPsym((P)"objectify-syntax-definition");
  lit_556 = YPPlist(4,YPPsym((P)"name"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"rt?"));
  T87 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_syntax_definition_263 = YPfab_met(FUNCODEREF(fun_objectify_syntax_definition_263),T87,LITREF(lit_555),LITREF(lit_556),sloc(705),YPfalse);
  T89 = VARREF_OR(YevalSastYobjectify_syntax_definition,YPfalse);
  T90 = fun_objectify_syntax_definition_263;
  T88 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T89,T90);
  VARSET(YevalSastYobjectify_syntax_definition,T88);
  lit_557 = YPPsym((P)"objectify-function-definition");
  lit_558 = YPPlist(4,YPPsym((P)"name"),YPPsym((P)"mods"),YPPsym((P)"e"),YPPsym((P)"r"));
  T91 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLast_function_definitionG),Ynil);
  fun_objectify_function_definition_264 = YPfab_met(FUNCODEREF(fun_objectify_function_definition_264),T91,LITREF(lit_557),LITREF(lit_558),sloc(735),YPfalse);
  T93 = VARREF_OR(YevalSastYobjectify_function_definition,YPfalse);
  T94 = fun_objectify_function_definition_264;
  T92 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T93,T94);
  VARSET(YevalSastYobjectify_function_definition,T92);
  lit_559 = YPPsym((P)"module-binding");
  lit_560 = YPPlist(1,YPPsym((P)"kind"));
  T95 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YevalSmoduleYLmodule_bindingG),Ynil);
  YevalSastYmodule_binding = YPfab_met(FUNCODEREF(YevalSastYmodule_binding),T95,LITREF(lit_559),LITREF(lit_560),sloc(745),YPfalse);
  T96 = YevalSastYmodule_binding;
  VARSET(YevalSastYmodule_binding,T96);
  lit_561 = YPPsym((P)"function-inlineable?");
  lit_562 = YPPlist(1,YPPsym((P)"e"));
  lit_563 = YPPsym((P)"inline");
  lit_564 = YPPsym((P)"inline-c");
  T97 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_inlineableQ_266 = YPfab_met(FUNCODEREF(fun_function_inlineableQ_266),T97,LITREF(lit_561),LITREF(lit_562),sloc(748),YPfalse);
  T99 = VARREF_OR(YevalSastYfunction_inlineableQ,YPfalse);
  T100 = fun_function_inlineableQ_266;
  T98 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T99,T100);
  VARSET(YevalSastYfunction_inlineableQ,T98);
  lit_565 = YPPsym((P)"objectify-primitive-definition");
  lit_566 = YPPlist(5,YPPsym((P)"name"),YPPsym((P)"mods"),YPPsym((P)"sig"),YPPsym((P)"body"),YPPsym((P)"r"));
  lit_567 = YPPsym((P)"predefined");
  T101 = YPfab_sig(YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLast_primitive_definitionG),Ynil);
  fun_objectify_primitive_definition_267 = YPfab_met(FUNCODEREF(fun_objectify_primitive_definition_267),T101,LITREF(lit_565),LITREF(lit_566),sloc(752),YPfalse);
  T103 = VARREF_OR(YevalSastYobjectify_primitive_definition,YPfalse);
  T104 = fun_objectify_primitive_definition_267;
  T102 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T103,T104);
  VARSET(YevalSastYobjectify_primitive_definition,T102);
  lit_568 = YPPsym((P)"objectify-generic-definition");
  lit_569 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"sig"),YPPsym((P)"r"));
  T105 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLast_generic_definitionG),Ynil);
  fun_objectify_generic_definition_268 = YPfab_met(FUNCODEREF(fun_objectify_generic_definition_268),T105,LITREF(lit_568),LITREF(lit_569),sloc(771),YPfalse);
  T107 = VARREF_OR(YevalSastYobjectify_generic_definition,YPfalse);
  T108 = fun_objectify_generic_definition_268;
  T106 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T107,T108);
  VARSET(YevalSastYobjectify_generic_definition,T106);
  lit_570 = YPPsym((P)"objectify-method-definition");
  lit_571 = YPPlist(4,YPPsym((P)"name"),YPPsym((P)"mods"),YPPsym((P)"e"),YPPsym((P)"r"));
  lit_572 = YPPsym((P)"bound?");
  lit_573 = YPPsym((P)"%define-method");
  T109 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLast_method_definitionG),Ynil);
  fun_objectify_method_definition_269 = YPfab_met(FUNCODEREF(fun_objectify_method_definition_269),T109,LITREF(lit_570),LITREF(lit_571),sloc(783),YPfalse);
  T111 = VARREF_OR(YevalSastYobjectify_method_definition,YPfalse);
  T112 = fun_objectify_method_definition_269;
  T110 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T111,T112);
  VARSET(YevalSastYobjectify_method_definition,T110);
  DYNDEFSET(YevalSastYTrecord_sourceQT,YPfalse);
  lit_574 = YPPsym((P)"objectify-function-source");
  lit_575 = YPPlist(3,YPPsym((P)"sig"),YPPsym((P)"body"),YPPsym((P)"r"));
  lit_576 = Ynil;
  lit_577 = YPsb((P)"%s");
  lit_578 = YPPsym((P)"fun");
  T117 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_270 = YPfab_met(FUNCODEREF(fun_270),T117,YPfalse,LITREF(lit_576),sloc(808),YPfalse);
  T116 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_271 = YPfab_met(FUNCODEREF(fun_271),T116,YPfalse,LITREF(lit_576),sloc(808),YPfalse);
  T115 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_272 = YPfab_met(FUNCODEREF(fun_272),T115,YPfalse,LITREF(lit_576),sloc(808),YPfalse);
  T114 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_273 = YPfab_met(FUNCODEREF(fun_273),T114,YPfalse,LITREF(lit_576),sloc(808),YPfalse);
  T113 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLconstantG),Ynil);
  fun_objectify_function_source_274 = YPfab_met(FUNCODEREF(fun_objectify_function_source_274),T113,LITREF(lit_574),LITREF(lit_575),sloc(807),YPfalse);
  T119 = VARREF_OR(YevalSastYobjectify_function_source,YPfalse);
  T120 = fun_objectify_function_source_274;
  T118 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T119,T120);
  VARSET(YevalSastYobjectify_function_source,T118);
  lit_579 = YPPsym((P)"objectify-function-using");
  lit_580 = YPPlist(5,YPPsym((P)"met"),YPPsym((P)"sig"),YPPsym((P)"body"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T123 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_275 = YPfab_met(FUNCODEREF(fun_275),T123,YPfalse,LITREF(lit_576),sloc(815),YPfalse);
  T122 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_276 = YPfab_met(FUNCODEREF(fun_276),T122,YPfalse,LITREF(lit_576),sloc(815),YPfalse);
  T121 = YPfab_sig(YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLast_methodG),Ynil);
  fun_objectify_function_using_277 = YPfab_met(FUNCODEREF(fun_objectify_function_using_277),T121,LITREF(lit_579),LITREF(lit_580),sloc(813),YPfalse);
  T125 = VARREF_OR(YevalSastYobjectify_function_using,YPfalse);
  T126 = fun_objectify_function_using_277;
  T124 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T125,T126);
  VARSET(YevalSastYobjectify_function_using,T124);
  lit_581 = YPPsym((P)"objectify-function");
  lit_582 = YPPlist(5,YPPsym((P)"sig"),YPPsym((P)"body"),YPPsym((P)"line"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T127 = YPfab_sig(YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLast_methodG),Ynil);
  fun_objectify_function_278 = YPfab_met(FUNCODEREF(fun_objectify_function_278),T127,LITREF(lit_581),LITREF(lit_582),sloc(825),YPfalse);
  T129 = VARREF_OR(YevalSastYobjectify_function,YPfalse);
  T130 = fun_objectify_function_278;
  T128 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T129,T130);
  VARSET(YevalSastYobjectify_function,T128);
  lit_583 = YPPsym((P)"...");
  VARSET(YevalSastYDsexpr_optionals_tag,LITREF(lit_583));
  lit_584 = YPPsym((P)"<opts>");
  VARSET(YevalSastYDsexpr_optionals_type_name,LITREF(lit_584));
  lit_585 = YPPsym((P)"objectify-signature");
  lit_586 = YPPlist(2,YPPsym((P)"sig"),YPPsym((P)"r"));
  T131 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLast_signatureG),Ynil);
  fun_objectify_signature_279 = YPfab_met(FUNCODEREF(fun_objectify_signature_279),T131,LITREF(lit_585),LITREF(lit_586),sloc(832),YPfalse);
  T133 = VARREF_OR(YevalSastYobjectify_signature,YPfalse);
  T134 = fun_objectify_signature_279;
  T132 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T133,T134);
  VARSET(YevalSastYobjectify_signature,T132);
  lit_587 = YPPsym((P)"compute-local-reference-offsets");
  lit_588 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"r"));
  lit_589 = YPsb((P)"didn't find local binding %= in %=");
  T136 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLintG));
  T135 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSmoduleYLstatic_local_environmentG)),YPfalse,YPint((P)2),T136,Ynil);
  fun_compute_local_reference_offsets_280 = YPfab_met(FUNCODEREF(fun_compute_local_reference_offsets_280),T135,LITREF(lit_587),LITREF(lit_588),sloc(863),YPfalse);
  T138 = VARREF_OR(YevalSastYcompute_local_reference_offsets,YPfalse);
  T139 = fun_compute_local_reference_offsets_280;
  T137 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T138,T139);
  VARSET(YevalSastYcompute_local_reference_offsets,T137);
  lit_590 = YPPsym((P)"objectify-binding");
  lit_591 = YPPlist(3,YPPsym((P)"n"),YPPsym((P)"b"),YPPsym((P)"r"));
  T140 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLlocal_referenceG),Ynil);
  fun_objectify_binding_281 = YPfab_met(FUNCODEREF(fun_objectify_binding_281),T140,LITREF(lit_590),LITREF(lit_591),sloc(877),YPfalse);
  T142 = VARREF_OR(YevalSastYobjectify_binding,YPfalse);
  T143 = fun_objectify_binding_281;
  T141 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T142,T143);
  VARSET(YevalSastYobjectify_binding,T141);
  lit_592 = YPPsym((P)"binding-reference-class");
  lit_593 = YPPlist(1,YPPsym((P)"b"));
  lit_594 = YPsb((P)"Unknown binding-kind %=");
  T144 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_binding_reference_class_282 = YPfab_met(FUNCODEREF(fun_binding_reference_class_282),T144,LITREF(lit_592),LITREF(lit_593),sloc(889),YPfalse);
  T146 = VARREF_OR(YevalSastYbinding_reference_class,YPfalse);
  T147 = fun_binding_reference_class_282;
  T145 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T146,T147);
  VARSET(YevalSastYbinding_reference_class,T145);
  lit_595 = YPPlist(3,YPPsym((P)"n"),YPPsym((P)"b"),YPPsym((P)"r"));
  T148 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_binding_283 = YPfab_met(FUNCODEREF(fun_objectify_binding_283),T148,LITREF(lit_590),LITREF(lit_595),sloc(900),YPfalse);
  T150 = VARREF_OR(YevalSastYobjectify_binding,YPfalse);
  T151 = fun_objectify_binding_283;
  T149 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T150,T151);
  VARSET(YevalSastYobjectify_binding,T149);
  lit_596 = YPPlist(3,YPPsym((P)"n"),YPPsym((P)"b"),YPPsym((P)"r"));
  T152 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLreferenceG),Ynil);
  fun_objectify_binding_284 = YPfab_met(FUNCODEREF(fun_objectify_binding_284),T152,LITREF(lit_590),LITREF(lit_596),sloc(910),YPfalse);
  T154 = VARREF_OR(YevalSastYobjectify_binding,YPfalse);
  T155 = fun_objectify_binding_284;
  T153 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T154,T155);
  VARSET(YevalSastYobjectify_binding,T153);
  lit_597 = YPPsym((P)"default-type");
  lit_598 = YPPlist(1,YPPsym((P)"r"));
  lit_599 = YPPsym((P)"<any>");
  T156 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_default_type_285 = YPfab_met(FUNCODEREF(fun_default_type_285),T156,LITREF(lit_597),LITREF(lit_598),sloc(915),YPfalse);
  T158 = VARREF_OR(YevalSastYdefault_type,YPfalse);
  T159 = fun_default_type_285;
  T157 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T158,T159);
  VARSET(YevalSastYdefault_type,T157);
  lit_600 = YPPsym((P)"objectify-free-global-reference");
  lit_601 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T160 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLreferenceG),Ynil);
  fun_objectify_free_global_reference_286 = YPfab_met(FUNCODEREF(fun_objectify_free_global_reference_286),T160,LITREF(lit_600),LITREF(lit_601),sloc(920),YPfalse);
  T162 = VARREF_OR(YevalSastYobjectify_free_global_reference,YPfalse);
  T163 = fun_objectify_free_global_reference_286;
  T161 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T162,T163);
  VARSET(YevalSastYobjectify_free_global_reference,T161);
  lit_602 = YPPsym((P)"foreign-name?");
  lit_603 = YPPlist(1,YPPsym((P)"name"));
  T164 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSastYforeign_nameQ = YPfab_met(FUNCODEREF(YevalSastYforeign_nameQ),T164,LITREF(lit_602),LITREF(lit_603),sloc(935),YPfalse);
  T165 = YevalSastYforeign_nameQ;
  VARSET(YevalSastYforeign_nameQ,T165);
  lit_604 = YPPsym((P)"objectify-foreign-reference");
  lit_605 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  lit_606 = YPsb((P)"Malformed foreign name %s.\n");
  lit_607 = YPsb((P)"No binding %s in %s.\n");
  T166 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLreferenceG),Ynil);
  fun_objectify_foreign_reference_288 = YPfab_met(FUNCODEREF(fun_objectify_foreign_reference_288),T166,LITREF(lit_604),LITREF(lit_605),sloc(939),YPfalse);
  T168 = VARREF_OR(YevalSastYobjectify_foreign_reference,YPfalse);
  T169 = fun_objectify_foreign_reference_288;
  T167 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T168,T169);
  VARSET(YevalSastYobjectify_foreign_reference,T167);
  lit_608 = YPPsym((P)"objectify-symbol");
  lit_609 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T170 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_objectify_symbol_289 = YPfab_met(FUNCODEREF(fun_objectify_symbol_289),T170,LITREF(lit_608),LITREF(lit_609),sloc(957),YPfalse);
  T172 = VARREF_OR(YevalSastYobjectify_symbol,YPfalse);
  T173 = fun_objectify_symbol_289;
  T171 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T172,T173);
  VARSET(YevalSastYobjectify_symbol,T171);
  lit_610 = YPPsym((P)"ftype");
  lit_611 = YPPlist(1,YPPsym((P)"r"));
  lit_612 = YPPsym((P)"<fun>");
  T174 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ftype_290 = YPfab_met(FUNCODEREF(fun_ftype_290),T174,LITREF(lit_610),LITREF(lit_611),sloc(960),YPfalse);
  T176 = VARREF_OR(YevalSastYftype,YPfalse);
  T177 = fun_ftype_290;
  T175 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T176,T177);
  VARSET(YevalSastYftype,T175);
  lit_613 = YPPsym((P)"<functions>");
  T180 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLprogramsG),Ynil);
  T179 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLlstG),T180);
  T178 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_613),T179);
  VARSET(YevalSastYLfunctionsG,T178);
  T183 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLfunctionsG));
  T182 = VARSET(YevalSastYDfunctions_nul,T183);
  T181 = T182;
  return T181;
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
  P T160,T161,T162,T163,T164,T165,T166;
DEFCREGS();
  lit_614 = YPPsym((P)"functions");
  lit_615 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T0 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYfunctions = YPfab_met(FUNCODEREF(YevalSastYfunctions),T0,LITREF(lit_614),LITREF(lit_615),sloc(963),YPfalse);
  T1 = YevalSastYfunctions;
  VARSET(YevalSastYfunctions,T1);
  lit_616 = YPPlist(1,YPPsym((P)"e"));
  T3 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLfunctionsG));
  T2 = YPfab_sig(YPPlist(1,T3),YPfalse,YPint((P)1),VARREF(YevalSastYLfunctionsG),Ynil);
  fun_nul_292 = YPfab_met(FUNCODEREF(fun_nul_292),T2,LITREF(lit_257),LITREF(lit_616),sloc(963),YPfalse);
  T5 = VARREF_OR(YgooScolsScolYnul,YPfalse);
  T6 = fun_nul_292;
  T4 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T5,T6);
  VARSET(YgooScolsScolYnul,T4);
  lit_617 = YPPsym((P)"objectify-locals");
  lit_618 = YPPlist(6,YPPsym((P)"names"),YPPsym((P)"sigs"),YPPsym((P)"bodies"),YPPsym((P)"body"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_619 = YPPlist(1,YPPsym((P)"n"));
  lit_620 = YPPlist(2,YPPsym((P)"sig"),YPPsym((P)"body"));
  lit_621 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"b"));
  T10 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_293 = YPfab_met(FUNCODEREF(fun_293),T10,YPfalse,LITREF(lit_619),sloc(966),YPfalse);
  T9 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_294 = YPfab_met(FUNCODEREF(fun_294),T9,YPfalse,LITREF(lit_620),sloc(970),YPfalse);
  T8 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_295 = YPfab_met(FUNCODEREF(fun_295),T8,YPfalse,LITREF(lit_621),sloc(978),YPfalse);
  T7 = YPfab_sig(YPPlist(6,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)6),VARREF(YevalSastYLlocalsG),Ynil);
  fun_objectify_locals_296 = YPfab_met(FUNCODEREF(fun_objectify_locals_296),T7,LITREF(lit_617),LITREF(lit_618),sloc(965),YPfalse);
  T12 = VARREF_OR(YevalSastYobjectify_locals,YPfalse);
  T13 = fun_objectify_locals_296;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YevalSastYobjectify_locals,T11);
  lit_622 = YPPsym((P)"objectify-bind-exit");
  lit_623 = YPPlist(5,YPPsym((P)"name"),YPPsym((P)"body"),YPPsym((P)"line"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T14 = YPfab_sig(YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLbind_exitG),Ynil);
  fun_objectify_bind_exit_297 = YPfab_met(FUNCODEREF(fun_objectify_bind_exit_297),T14,LITREF(lit_622),LITREF(lit_623),sloc(988),YPfalse);
  T16 = VARREF_OR(YevalSastYobjectify_bind_exit,YPfalse);
  T17 = fun_objectify_bind_exit_297;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YevalSastYobjectify_bind_exit,T15);
  lit_624 = YPPsym((P)"objectify-unwind-protect");
  lit_625 = YPPlist(5,YPPsym((P)"protected-form"),YPPsym((P)"cleanup-forms"),YPPsym((P)"line"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T18 = YPfab_sig(YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLunwind_protectG),Ynil);
  fun_objectify_unwind_protect_298 = YPfab_met(FUNCODEREF(fun_objectify_unwind_protect_298),T18,LITREF(lit_624),LITREF(lit_625),sloc(994),YPfalse);
  T20 = VARREF_OR(YevalSastYobjectify_unwind_protect,YPfalse);
  T21 = fun_objectify_unwind_protect_298;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YevalSastYobjectify_unwind_protect,T19);
  lit_626 = YPPsym((P)"objectify-monitor");
  lit_627 = YPPlist(7,YPPsym((P)"type"),YPPsym((P)"info"),YPPsym((P)"test"),YPPsym((P)"handler"),YPPsym((P)"body"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T22 = YPfab_sig(YPPlist(7,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)7),VARREF(YevalSastYLmonitorG),Ynil);
  fun_objectify_monitor_299 = YPfab_met(FUNCODEREF(fun_objectify_monitor_299),T22,LITREF(lit_626),LITREF(lit_627),sloc(1006),YPfalse);
  T24 = VARREF_OR(YevalSastYobjectify_monitor,YPfalse);
  T25 = fun_objectify_monitor_299;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YevalSastYobjectify_monitor,T23);
  lit_628 = YPPsym((P)"objectify-refs");
  lit_629 = YPPlist(2,YPPsym((P)"e*"),YPPsym((P)"r"));
  T26 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_objectify_refs_300 = YPfab_met(FUNCODEREF(fun_objectify_refs_300),T26,LITREF(lit_628),LITREF(lit_629),sloc(1014),YPfalse);
  T28 = VARREF_OR(YevalSastYobjectify_refs,YPfalse);
  T29 = fun_objectify_refs_300;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YevalSastYobjectify_refs,T27);
  lit_630 = YPPsym((P)"split-c-inline-vals");
  lit_631 = YPPlist(1,YPPsym((P)"vals"));
  T30 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_split_c_inline_vals_301 = YPfab_met(FUNCODEREF(fun_split_c_inline_vals_301),T30,LITREF(lit_630),LITREF(lit_631),sloc(1019),YPfalse);
  T32 = VARREF_OR(YevalSastYsplit_c_inline_vals,YPfalse);
  T33 = fun_split_c_inline_vals_301;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSastYsplit_c_inline_vals,T31);
  lit_632 = YPPsym((P)"objectify-c-expr");
  lit_633 = YPPlist(4,YPPsym((P)"x"),YPPsym((P)"expr?"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T34 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_c_expr_302 = YPfab_met(FUNCODEREF(fun_objectify_c_expr_302),T34,LITREF(lit_632),LITREF(lit_633),sloc(1026),YPfalse);
  T36 = VARREF_OR(YevalSastYobjectify_c_expr,YPfalse);
  T37 = fun_objectify_c_expr_302;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YevalSastYobjectify_c_expr,T35);
  lit_634 = YPPsym((P)"objectify-c-inline");
  lit_635 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T38 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_c_inline_303 = YPfab_met(FUNCODEREF(fun_objectify_c_inline_303),T38,LITREF(lit_634),LITREF(lit_635),sloc(1032),YPfalse);
  T40 = VARREF_OR(YevalSastYobjectify_c_inline,YPfalse);
  T41 = fun_objectify_c_inline_303;
  T39 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T40,T41);
  VARSET(YevalSastYobjectify_c_inline,T39);
  lit_636 = YPPsym((P)"objectify-export");
  lit_637 = YPPlist(3,YPPsym((P)"names"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_638 = YPsb((P)"Can only export bindings from target environment.\n");
  lit_639 = YPPlist(1,YPPsym((P)"name"));
  lit_640 = YPPlist(1,YPPsym((P)"exit"));
  lit_641 = YPsb((P)"Continue without exporting %s");
  lit_642 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  lit_643 = YPsb((P)"Can't export undefined binding %s.\n");
  T47 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_304 = YPfab_met(FUNCODEREF(fun_304),T47,YPfalse,LITREF(lit_576),YPfalse,YPfalse);
  T46 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_305 = YPfab_met(FUNCODEREF(fun_305),T46,YPfalse,LITREF(lit_642),sloc(1053),YPfalse);
  T45 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_306 = YPfab_met(FUNCODEREF(fun_306),T45,YPfalse,LITREF(lit_576),sloc(1054),YPfalse);
  T44 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_307 = YPfab_met(FUNCODEREF(fun_307),T44,YPfalse,LITREF(lit_640),sloc(1050),YPfalse);
  T43 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_308 = YPfab_met(FUNCODEREF(fun_308),T43,YPfalse,LITREF(lit_639),sloc(1047),YPfalse);
  T42 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_export_309 = YPfab_met(FUNCODEREF(fun_objectify_export_309),T42,LITREF(lit_636),LITREF(lit_637),sloc(1040),YPfalse);
  T49 = VARREF_OR(YevalSastYobjectify_export,YPfalse);
  T50 = fun_objectify_export_309;
  T48 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T49,T50);
  VARSET(YevalSastYobjectify_export,T48);
  lit_644 = YPPsym((P)"objectify-use/export-module");
  lit_645 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_646 = YPPlist(1,YPPsym((P)"b"));
  T52 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_310 = YPfab_met(FUNCODEREF(fun_310),T52,YPfalse,LITREF(lit_646),sloc(1065),YPfalse);
  T51 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_useSexport_module_311 = YPfab_met(FUNCODEREF(fun_objectify_useSexport_module_311),T51,LITREF(lit_644),LITREF(lit_645),sloc(1059),YPfalse);
  T54 = VARREF_OR(YevalSastYobjectify_useSexport_module,YPfalse);
  T55 = fun_objectify_useSexport_module_311;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YevalSastYobjectify_useSexport_module,T53);
  lit_647 = YPPsym((P)"objectify-use-include");
  lit_648 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_649 = YPPlist(1,YPPsym((P)"x"));
  T57 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_312 = YPfab_met(FUNCODEREF(fun_312),T57,YPfalse,LITREF(lit_649),sloc(1074),YPfalse);
  T56 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_include_313 = YPfab_met(FUNCODEREF(fun_objectify_use_include_313),T56,LITREF(lit_647),LITREF(lit_648),sloc(1071),YPfalse);
  T59 = VARREF_OR(YevalSastYobjectify_use_include,YPfalse);
  T60 = fun_objectify_use_include_313;
  T58 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T59,T60);
  VARSET(YevalSastYobjectify_use_include,T58);
  lit_650 = YPPsym((P)"objectify-use-library");
  lit_651 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_652 = YPPlist(1,YPPsym((P)"x"));
  T62 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_314 = YPfab_met(FUNCODEREF(fun_314),T62,YPfalse,LITREF(lit_652),sloc(1081),YPfalse);
  T61 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_library_315 = YPfab_met(FUNCODEREF(fun_objectify_use_library_315),T61,LITREF(lit_650),LITREF(lit_651),sloc(1078),YPfalse);
  T64 = VARREF_OR(YevalSastYobjectify_use_library,YPfalse);
  T65 = fun_objectify_use_library_315;
  T63 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T64,T65);
  VARSET(YevalSastYobjectify_use_library,T63);
  lit_653 = YPPsym((P)"objectify-use-module");
  lit_654 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_655 = YPPsym((P)"use-mod");
  lit_656 = YPPlist(1,YPPsym((P)"name"));
  lit_657 = YPPlist(1,YPPsym((P)"b"));
  lit_658 = YPPsym((P)"use-c-mod");
  lit_659 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"name"));
  lit_660 = YPsb((P)".c");
  lit_661 = YPsb((P)".h");
  lit_662 = YPsb((P)".swig");
  lit_663 = YPsb((P)".c");
  T69 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_316 = YPfab_met(FUNCODEREF(fun_316),T69,YPfalse,LITREF(lit_657),sloc(1092),YPfalse);
  T68 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_use_mod_317 = YPfab_met(FUNCODEREF(fun_use_mod_317),T68,LITREF(lit_655),LITREF(lit_656),sloc(1088),YPfalse);
  T67 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_use_c_mod_318 = YPfab_met(FUNCODEREF(fun_use_c_mod_318),T67,LITREF(lit_658),LITREF(lit_659),sloc(1095),YPfalse);
  T66 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_module_319 = YPfab_met(FUNCODEREF(fun_objectify_use_module_319),T66,LITREF(lit_653),LITREF(lit_654),sloc(1085),YPfalse);
  T71 = VARREF_OR(YevalSastYobjectify_use_module,YPfalse);
  T72 = fun_objectify_use_module_319;
  T70 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T71,T72);
  VARSET(YevalSastYobjectify_use_module,T70);
  lit_664 = YPPsym((P)"objectify-use-mangle-module");
  lit_665 = YPPlist(4,YPPsym((P)"name"),YPPsym((P)"mangler"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_666 = YPPlist(1,YPPsym((P)"b"));
  T74 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_320 = YPfab_met(FUNCODEREF(fun_320),T74,YPfalse,LITREF(lit_666),sloc(1117),YPfalse);
  T73 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_mangle_module_321 = YPfab_met(FUNCODEREF(fun_objectify_use_mangle_module_321),T73,LITREF(lit_664),LITREF(lit_665),sloc(1109),YPfalse);
  T76 = VARREF_OR(YevalSastYobjectify_use_mangle_module,YPfalse);
  T77 = fun_objectify_use_mangle_module_321;
  T75 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T76,T77);
  VARSET(YevalSastYobjectify_use_mangle_module,T75);
  lit_667 = YPPsym((P)"expand-bind-list");
  lit_668 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_669 = YPsb((P)"Expected Pattern List %=\n");
  T78 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_list_322 = YPfab_met(FUNCODEREF(fun_expand_bind_list_322),T78,LITREF(lit_667),LITREF(lit_668),sloc(1123),YPfalse);
  T80 = VARREF_OR(YevalSastYexpand_bind_list,YPfalse);
  T81 = fun_expand_bind_list_322;
  T79 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T80,T81);
  VARSET(YevalSastYexpand_bind_list,T79);
  lit_670 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_671 = YPPsym((P)"match-nul-list");
  T83 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T82 = YPfab_sig(YPPlist(3,T83,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_expand_bind_list_323 = YPfab_met(FUNCODEREF(fun_expand_bind_list_323),T82,LITREF(lit_667),LITREF(lit_670),sloc(1126),YPfalse);
  T85 = VARREF_OR(YevalSastYexpand_bind_list,YPfalse);
  T86 = fun_expand_bind_list_323;
  T84 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T85,T86);
  VARSET(YevalSastYexpand_bind_list,T84);
  lit_672 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_673 = YPsb((P)"Unquote Unexpected Here %=\n");
  lit_674 = YPsb((P)"Unquote Splicing Unexpected Here %=\n");
  T87 = YPfab_sig(YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_expand_bind_list_324 = YPfab_met(FUNCODEREF(fun_expand_bind_list_324),T87,LITREF(lit_667),LITREF(lit_672),sloc(1129),YPfalse);
  T89 = VARREF_OR(YevalSastYexpand_bind_list,YPfalse);
  T90 = fun_expand_bind_list_324;
  T88 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T89,T90);
  VARSET(YevalSastYexpand_bind_list,T88);
  lit_675 = YPPsym((P)"expand-bind-list*");
  lit_676 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  T92 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T91 = YPfab_sig(YPPlist(3,T92,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_listT_325 = YPfab_met(FUNCODEREF(fun_expand_bind_listT_325),T91,LITREF(lit_675),LITREF(lit_676),sloc(1138),YPfalse);
  T94 = VARREF_OR(YevalSastYexpand_bind_listT,YPfalse);
  T95 = fun_expand_bind_listT_325;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YevalSastYexpand_bind_listT,T93);
  lit_677 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  T96 = YPfab_sig(YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_listT_326 = YPfab_met(FUNCODEREF(fun_expand_bind_listT_326),T96,LITREF(lit_675),LITREF(lit_677),sloc(1141),YPfalse);
  T98 = VARREF_OR(YevalSastYexpand_bind_listT,YPfalse);
  T99 = fun_expand_bind_listT_326;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YevalSastYexpand_bind_listT,T97);
  lit_678 = YPPsym((P)"expand-bind-element");
  lit_679 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_680 = YPPsym((P)"match-atom");
  lit_681 = YPPsym((P)"quote");
  T100 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_element_327 = YPfab_met(FUNCODEREF(fun_expand_bind_element_327),T100,LITREF(lit_678),LITREF(lit_679),sloc(1145),YPfalse);
  T102 = VARREF_OR(YevalSastYexpand_bind_element,YPfalse);
  T103 = fun_expand_bind_element_327;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YevalSastYexpand_bind_element,T101);
  lit_682 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_683 = YPPsym((P)"match-unquote");
  lit_684 = YPPsym((P)"tail");
  lit_685 = YPPsym((P)"match-sublist");
  T104 = YPfab_sig(YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_element_328 = YPfab_met(FUNCODEREF(fun_expand_bind_element_328),T104,LITREF(lit_678),LITREF(lit_682),sloc(1148),YPfalse);
  T106 = VARREF_OR(YevalSastYexpand_bind_element,YPfalse);
  T107 = fun_expand_bind_element_328;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YevalSastYexpand_bind_element,T105);
  lit_686 = YPPsym((P)"expand-pattern");
  lit_687 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_688 = YPPsym((P)"if");
  lit_689 = YPPsym((P)"isa?");
  lit_690 = YPPsym((P)"<lst>");
  lit_691 = YPsb((P)"Match Pattern Failure");
  T108 = YPfab_sig(YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_pattern_329 = YPfab_met(FUNCODEREF(fun_expand_pattern_329),T108,LITREF(lit_686),LITREF(lit_687),sloc(1159),YPfalse);
  T110 = VARREF_OR(YevalSastYexpand_pattern,YPfalse);
  T111 = fun_expand_pattern_329;
  T109 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T110,T111);
  VARSET(YevalSastYexpand_pattern,T109);
  lit_692 = YPPsym((P)"expand-syntax-if");
  lit_693 = YPPlist(1,YPPsym((P)"x"));
  lit_694 = YPPsym((P)"esc");
  lit_695 = YPPsym((P)"return");
  lit_696 = YPPsym((P)"loc");
  lit_697 = YPPsym((P)"msg");
  lit_698 = YPPsym((P)"<str>");
  lit_699 = YPPsym((P)"args");
  lit_700 = YPPlist(1,YPPsym((P)"x"));
  T113 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_330 = YPfab_met(FUNCODEREF(fun_330),T113,YPfalse,LITREF(lit_700),YPfalse,YPfalse);
  T112 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_expand_syntax_if_331 = YPfab_met(FUNCODEREF(fun_expand_syntax_if_331),T112,LITREF(lit_692),LITREF(lit_693),sloc(1164),YPfalse);
  T115 = VARREF_OR(YevalSastYexpand_syntax_if,YPfalse);
  T116 = fun_expand_syntax_if_331;
  T114 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T115,T116);
  VARSET(YevalSastYexpand_syntax_if,T114);
  lit_701 = YPPsym((P)"r-extend*");
  lit_702 = YPPlist(2,YPPsym((P)"r"),YPPsym((P)"bindings"));
  T117 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YevalSmoduleYLstatic_environmentG),Ynil);
  fun_r_extendT_332 = YPfab_met(FUNCODEREF(fun_r_extendT_332),T117,LITREF(lit_701),LITREF(lit_702),sloc(1188),YPfalse);
  T119 = VARREF_OR(YevalSastYr_extendT,YPfalse);
  T120 = fun_r_extendT_332;
  T118 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T119,T120);
  VARSET(YevalSastYr_extendT,T118);
  lit_703 = YPPsym((P)"find-binding");
  lit_704 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T121 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLstatic_local_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_333 = YPfab_met(FUNCODEREF(fun_find_binding_333),T121,LITREF(lit_703),LITREF(lit_704),sloc(1192),YPfalse);
  T123 = VARREF_OR(YevalSmoduleYfind_binding,YPfalse);
  T124 = fun_find_binding_333;
  T122 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T123,T124);
  VARSET(YevalSmoduleYfind_binding,T122);
  lit_705 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T125 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLstatic_nul_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_334 = YPfab_met(FUNCODEREF(fun_find_binding_334),T125,LITREF(lit_703),LITREF(lit_705),sloc(1202),YPfalse);
  T127 = VARREF_OR(YevalSmoduleYfind_binding,YPfalse);
  T128 = fun_find_binding_334;
  T126 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T127,T128);
  VARSET(YevalSmoduleYfind_binding,T126);
  VARSET(YevalSastYTmagic_bindingsT,Ynil);
  lit_706 = YPPsym((P)"register-magic-binding");
  lit_707 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"value"));
  T129 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_register_magic_binding_335 = YPfab_met(FUNCODEREF(fun_register_magic_binding_335),T129,LITREF(lit_706),LITREF(lit_707),sloc(1209),YPfalse);
  T131 = VARREF_OR(YevalSastYregister_magic_binding,YPfalse);
  T132 = fun_register_magic_binding_335;
  T130 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T131,T132);
  VARSET(YevalSastYregister_magic_binding,T130);
  lit_708 = YPPsym((P)"magic-bindings");
  T133 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_magic_bindings_336 = YPfab_met(FUNCODEREF(fun_magic_bindings_336),T133,LITREF(lit_708),LITREF(lit_576),sloc(1212),YPfalse);
  T135 = VARREF_OR(YevalSastYmagic_bindings,YPfalse);
  T136 = fun_magic_bindings_336;
  T134 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T135,T136);
  VARSET(YevalSastYmagic_bindings,T134);
  lit_709 = YPPlist(1,YPPsym((P)"exp"));
  lit_710 = YPPlist(1,YPPsym((P)"return"));
  lit_711 = YPPsym((P)"x-1524");
  lit_712 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_713 = YPPsym((P)"define-magic-binding");
  lit_714 = YPsb((P)"special-");
  lit_715 = YPsb((P)"$sexpr-");
  lit_716 = YPsb((P)"-tag");
  lit_717 = YPPsym((P)"dv");
  lit_718 = YPPsym((P)"new");
  lit_719 = YPPsym((P)"<module-binding>");
  lit_720 = YPPsym((P)"binding-kind");
  lit_721 = YPPsym((P)"binding-name");
  lit_722 = YPPsym((P)"binding-module");
  lit_723 = YPPsym((P)"binding-handler");
  lit_724 = YPPsym((P)"binding-free?");
  T139 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1524_337 = YPfab_met(FUNCODEREF(fun_x_1524_337),T139,LITREF(lit_711),LITREF(lit_712),YPfalse,YPfalse);
  T138 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_338 = YPfab_met(FUNCODEREF(fun_338),T138,YPfalse,LITREF(lit_710),YPfalse,YPfalse);
  T137 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_339 = YPfab_met(FUNCODEREF(fun_339),T137,YPfalse,LITREF(lit_709),YPfalse,YPfalse);
  T140 = fun_339;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"define-magic-binding"),T140);
  lit_725 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T141 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_340 = YPfab_met(FUNCODEREF(fun_340),T141,YPfalse,LITREF(lit_725),sloc(1227),YPfalse);
  T143 = fun_340;
  T142 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_if_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T143,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_if,T142);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_688),VARREF(YevalSastYspecial_if));
  lit_726 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T144 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_341 = YPfab_met(FUNCODEREF(fun_341),T144,YPfalse,LITREF(lit_726),sloc(1231),YPfalse);
  T146 = fun_341;
  T145 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_begin_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T146,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_begin,T145);
  lit_727 = YPPsym((P)"begin");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_727),VARREF(YevalSastYspecial_begin));
  lit_728 = YPPsym((P)"%raw");
  VARSET(YevalSastYDsexpr_Praw_tag,LITREF(lit_728));
  lit_729 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T147 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_342 = YPfab_met(FUNCODEREF(fun_342),T147,YPfalse,LITREF(lit_729),sloc(1236),YPfalse);
  T149 = fun_342;
  T148 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_Praw_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T149,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_Praw,T148);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_728),VARREF(YevalSastYspecial_Praw));
  lit_730 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T150 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_343 = YPfab_met(FUNCODEREF(fun_343),T150,YPfalse,LITREF(lit_730),sloc(1239),YPfalse);
  T152 = fun_343;
  T151 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_quote_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T152,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_quote,T151);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_681),VARREF(YevalSastYspecial_quote));
  lit_731 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T153 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_344 = YPfab_met(FUNCODEREF(fun_344),T153,YPfalse,LITREF(lit_731),sloc(1242),YPfalse);
  T155 = fun_344;
  T154 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_set_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T155,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_set,T154);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_9),VARREF(YevalSastYspecial_set));
  lit_732 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T156 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_345 = YPfab_met(FUNCODEREF(fun_345),T156,YPfalse,LITREF(lit_732),sloc(1246),YPfalse);
  T158 = fun_345;
  T157 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T158,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define,T157);
  lit_733 = YPPsym((P)"define");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_733),VARREF(YevalSastYspecial_define));
  lit_734 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T159 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_346 = YPfab_met(FUNCODEREF(fun_346),T159,YPfalse,LITREF(lit_734),sloc(1250),YPfalse);
  T161 = fun_346;
  T160 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_constant_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T161,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_constant,T160);
  lit_735 = YPPsym((P)"define-constant");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_735),VARREF(YevalSastYspecial_define_constant));
  lit_736 = YPPsym((P)"ddv");
  VARSET(YevalSastYDsexpr_define_dynamic_tag,LITREF(lit_736));
  lit_737 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T162 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_347 = YPfab_met(FUNCODEREF(fun_347),T162,YPfalse,LITREF(lit_737),sloc(1256),YPfalse);
  T164 = fun_347;
  T163 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_define_dynamic_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T164,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_dynamic,T163);
  lit_738 = YPPsym((P)"define-dynamic");
  T166 = XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_738),VARREF(YevalSastYspecial_define_dynamic));
  T165 = T166;
  return T165;
}

P YevalSastY___main_9___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77;
DEFCREGS();
  lit_739 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T0 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_348 = YPfab_met(FUNCODEREF(fun_348),T0,YPfalse,LITREF(lit_739),sloc(1260),YPfalse);
  T2 = fun_348;
  T1 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_syntax_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T2,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_syntax,T1);
  lit_740 = YPPsym((P)"define-syntax");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_740),VARREF(YevalSastYspecial_define_syntax));
  lit_741 = YPPsym((P)"dss");
  VARSET(YevalSastYDsexpr_define_static_syntax_tag,LITREF(lit_741));
  lit_742 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T3 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_349 = YPfab_met(FUNCODEREF(fun_349),T3,YPfalse,LITREF(lit_742),sloc(1266),YPfalse);
  T5 = fun_349;
  T4 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_define_static_syntax_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T5,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_static_syntax,T4);
  lit_743 = YPPsym((P)"define-static-syntax");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_743),VARREF(YevalSastYspecial_define_static_syntax));
  lit_744 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T6 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_350 = YPfab_met(FUNCODEREF(fun_350),T6,YPfalse,LITREF(lit_744),sloc(1270),YPfalse);
  T8 = fun_350;
  T7 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_method_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T8,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_method,T7);
  lit_745 = YPPsym((P)"define-method");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_745),VARREF(YevalSastYspecial_define_method));
  lit_746 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T9 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_351 = YPfab_met(FUNCODEREF(fun_351),T9,YPfalse,LITREF(lit_746),sloc(1276),YPfalse);
  T11 = fun_351;
  T10 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_generic_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T11,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_generic,T10);
  lit_747 = YPPsym((P)"define-generic");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_747),VARREF(YevalSastYspecial_define_generic));
  lit_748 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T12 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_352 = YPfab_met(FUNCODEREF(fun_352),T12,YPfalse,LITREF(lit_748),sloc(1280),YPfalse);
  T14 = fun_352;
  T13 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_function_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T14,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_function,T13);
  lit_749 = YPPsym((P)"define-function");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_749),VARREF(YevalSastYspecial_define_function));
  lit_750 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T15 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_353 = YPfab_met(FUNCODEREF(fun_353),T15,YPfalse,LITREF(lit_750),sloc(1286),YPfalse);
  T17 = fun_353;
  T16 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_method_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T17,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_method,T16);
  lit_751 = YPPsym((P)"method");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_751),VARREF(YevalSastYspecial_method));
  VARSET(YevalSastYDsexpr_boundQ_tag,LITREF(lit_572));
  lit_752 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T18 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_354 = YPfab_met(FUNCODEREF(fun_354),T18,YPfalse,LITREF(lit_752),sloc(1292),YPfalse);
  T20 = fun_354;
  T19 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_boundQ_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T20,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_boundQ,T19);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_572),VARREF(YevalSastYspecial_boundQ));
  lit_753 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T21 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_355 = YPfab_met(FUNCODEREF(fun_355),T21,YPfalse,LITREF(lit_753),sloc(1295),YPfalse);
  T23 = fun_355;
  T22 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_let_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T23,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_let,T22);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_6),VARREF(YevalSastYspecial_let));
  lit_754 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T24 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_356 = YPfab_met(FUNCODEREF(fun_356),T24,YPfalse,LITREF(lit_754),sloc(1301),YPfalse);
  T26 = fun_356;
  T25 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_def_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T26,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_def,T25);
  lit_755 = YPPsym((P)"def");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_755),VARREF(YevalSastYspecial_def));
  lit_756 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T27 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_357 = YPfab_met(FUNCODEREF(fun_357),T27,YPfalse,LITREF(lit_756),sloc(1304),YPfalse);
  T29 = fun_357;
  T28 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_locals_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T29,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_locals,T28);
  lit_757 = YPPsym((P)"locals");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_757),VARREF(YevalSastYspecial_locals));
  lit_758 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T30 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_358 = YPfab_met(FUNCODEREF(fun_358),T30,YPfalse,LITREF(lit_758),sloc(1309),YPfalse);
  T32 = fun_358;
  T31 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_iterate_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T32,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_iterate,T31);
  lit_759 = YPPsym((P)"iterate");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_759),VARREF(YevalSastYspecial_iterate));
  lit_760 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T33 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_359 = YPfab_met(FUNCODEREF(fun_359),T33,YPfalse,LITREF(lit_760),sloc(1312),YPfalse);
  T35 = fun_359;
  T34 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_bind_exit_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T35,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_bind_exit,T34);
  lit_761 = YPPsym((P)"bind-exit");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_761),VARREF(YevalSastYspecial_bind_exit));
  lit_762 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T36 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_360 = YPfab_met(FUNCODEREF(fun_360),T36,YPfalse,LITREF(lit_762),sloc(1316),YPfalse);
  T38 = fun_360;
  T37 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_unwind_protect_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T38,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_unwind_protect,T37);
  lit_763 = YPPsym((P)"unwind-protect");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_763),VARREF(YevalSastYspecial_unwind_protect));
  lit_764 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T39 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_361 = YPfab_met(FUNCODEREF(fun_361),T39,YPfalse,LITREF(lit_764),sloc(1322),YPfalse);
  T41 = fun_361;
  T40 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_monitor_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T41,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_monitor,T40);
  lit_765 = YPPsym((P)"monitor");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_765),VARREF(YevalSastYspecial_monitor));
  lit_766 = YPPsym((P)"pairize");
  lit_767 = YPPlist(1,YPPsym((P)"args"));
  lit_768 = YPPsym((P)"fab-pair");
  T42 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pairize_362 = YPfab_met(FUNCODEREF(fun_pairize_362),T42,LITREF(lit_766),LITREF(lit_767),sloc(1326),YPfalse);
  T44 = VARREF_OR(YevalSastYpairize,YPfalse);
  T45 = fun_pairize_362;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YevalSastYpairize,T43);
  lit_769 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_770 = YPPsym((P)"fab-class");
  T46 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_363 = YPfab_met(FUNCODEREF(fun_363),T46,YPfalse,LITREF(lit_769),sloc(1331),YPfalse);
  T48 = fun_363;
  T47 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_class_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T48,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_class,T47);
  lit_771 = YPPsym((P)"define-class");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_771),VARREF(YevalSastYspecial_define_class));
  lit_772 = YPPsym((P)"objectify-define-property");
  lit_773 = YPPlist(4,YPPsym((P)"x"),YPPsym((P)"setter?"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_774 = YPPsym((P)"%prop");
  lit_775 = YPPsym((P)"%prop-unbound-error");
  T49 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_define_property_364 = YPfab_met(FUNCODEREF(fun_objectify_define_property_364),T49,LITREF(lit_772),LITREF(lit_773),sloc(1336),YPfalse);
  T51 = VARREF_OR(YevalSastYobjectify_define_property,YPfalse);
  T52 = fun_objectify_define_property_364;
  T50 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T51,T52);
  VARSET(YevalSastYobjectify_define_property,T50);
  lit_776 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T53 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_365 = YPfab_met(FUNCODEREF(fun_365),T53,YPfalse,LITREF(lit_776),sloc(1357),YPfalse);
  T55 = fun_365;
  T54 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_propX_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T55,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_propX,T54);
  lit_777 = YPPsym((P)"prop!");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_777),VARREF(YevalSastYspecial_propX));
  lit_778 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T56 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_366 = YPfab_met(FUNCODEREF(fun_366),T56,YPfalse,LITREF(lit_778),sloc(1360),YPfalse);
  T58 = fun_366;
  T57 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_prop_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T58,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_prop,T57);
  lit_779 = YPPsym((P)"prop");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_779),VARREF(YevalSastYspecial_prop));
  lit_780 = YPPsym((P)"ct");
  VARSET(YevalSastYDsexpr_compile_time_tag,LITREF(lit_780));
  lit_781 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T59 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_367 = YPfab_met(FUNCODEREF(fun_367),T59,YPfalse,LITREF(lit_781),sloc(1365),YPfalse);
  T61 = fun_367;
  T60 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_compile_time_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T61,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_compile_time,T60);
  lit_782 = YPPsym((P)"compile-time");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_782),VARREF(YevalSastYspecial_compile_time));
  lit_783 = YPPsym((P)"ct-also");
  VARSET(YevalSastYDsexpr_compile_time_also_tag,LITREF(lit_783));
  lit_784 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T62 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_368 = YPfab_met(FUNCODEREF(fun_368),T62,YPfalse,LITREF(lit_784),sloc(1370),YPfalse);
  T64 = fun_368;
  T63 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_compile_time_also_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T64,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_compile_time_also,T63);
  lit_785 = YPPsym((P)"compile-time-also");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_785),VARREF(YevalSastYspecial_compile_time_also));
  lit_786 = YPPsym((P)"dl");
  VARSET(YevalSastYDsexpr_define_primitive_tag,LITREF(lit_786));
  lit_787 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T65 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_369 = YPfab_met(FUNCODEREF(fun_369),T65,YPfalse,LITREF(lit_787),sloc(1375),YPfalse);
  T67 = fun_369;
  T66 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_define_primitive_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T67,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_primitive,T66);
  lit_788 = YPPsym((P)"define-primitive");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_788),VARREF(YevalSastYspecial_define_primitive));
  lit_789 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T68 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_370 = YPfab_met(FUNCODEREF(fun_370),T68,YPfalse,LITREF(lit_789),sloc(1385),YPfalse);
  T70 = fun_370;
  T69 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_quasiquote_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T70,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_quasiquote,T69);
  lit_790 = YPPsym((P)"quasiquote");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_790),VARREF(YevalSastYspecial_quasiquote));
  lit_791 = YPPsym((P)"ast-macro-expand");
  lit_792 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T73 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T72 = fun_ast_macro_expand_371 = YPfab_met(FUNCODEREF(fun_ast_macro_expand_371),T73,LITREF(lit_791),LITREF(lit_792),sloc(1388),YPfalse);
  T76 = VARREF_OR(YevalSastYast_macro_expand,YPfalse);
  T77 = fun_ast_macro_expand_371;
  T75 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T76,T77);
  T74 = VARSET(YevalSastYast_macro_expand,T75);
  T71 = T74;
  return T71;
}

P YevalSastY___main_10___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67;
DEFCREGS();
  lit_793 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T0 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_372 = YPfab_met(FUNCODEREF(fun_372),T0,YPfalse,LITREF(lit_793),sloc(1397),YPfalse);
  T2 = fun_372;
  T1 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_macro_expand_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T2,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_macro_expand,T1);
  lit_794 = YPPsym((P)"macro-expand");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_794),VARREF(YevalSastYspecial_macro_expand));
  lit_795 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T3 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_373 = YPfab_met(FUNCODEREF(fun_373),T3,YPfalse,LITREF(lit_795),sloc(1401),YPfalse);
  T5 = fun_373;
  T4 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_syntax_if_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T5,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_syntax_if,T4);
  lit_796 = YPPsym((P)"syntax-if");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_796),VARREF(YevalSastYspecial_syntax_if));
  lit_797 = YPPsym((P)"export");
  VARSET(YevalSastYDsexpr_export_tag,LITREF(lit_797));
  lit_798 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T6 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_374 = YPfab_met(FUNCODEREF(fun_374),T6,YPfalse,LITREF(lit_798),sloc(1411),YPfalse);
  T8 = fun_374;
  T7 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_export_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T8,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_export,T7);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_797),VARREF(YevalSastYspecial_export));
  lit_799 = YPPsym((P)"use");
  VARSET(YevalSastYDsexpr_use_module_tag,LITREF(lit_799));
  lit_800 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T9 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_375 = YPfab_met(FUNCODEREF(fun_375),T9,YPfalse,LITREF(lit_800),sloc(1416),YPfalse);
  T11 = fun_375;
  T10 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_use_module_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T11,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_module,T10);
  lit_801 = YPPsym((P)"use-module");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_801),VARREF(YevalSastYspecial_use_module));
  lit_802 = YPPsym((P)"use/mangle");
  VARSET(YevalSastYDsexpr_use_mangle_module_tag,LITREF(lit_802));
  lit_803 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T12 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_376 = YPfab_met(FUNCODEREF(fun_376),T12,YPfalse,LITREF(lit_803),sloc(1421),YPfalse);
  T14 = fun_376;
  T13 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_use_mangle_module_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T14,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_mangle_module,T13);
  lit_804 = YPPsym((P)"use-mangle-module");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_804),VARREF(YevalSastYspecial_use_mangle_module));
  lit_805 = YPPsym((P)"use/include");
  VARSET(YevalSastYDsexpr_use_include_tag,LITREF(lit_805));
  lit_806 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T15 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_377 = YPfab_met(FUNCODEREF(fun_377),T15,YPfalse,LITREF(lit_806),sloc(1426),YPfalse);
  T17 = fun_377;
  T16 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_use_include_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T17,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_include,T16);
  lit_807 = YPPsym((P)"use-include");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_807),VARREF(YevalSastYspecial_use_include));
  lit_808 = YPPsym((P)"use/library");
  VARSET(YevalSastYDsexpr_use_library_tag,LITREF(lit_808));
  lit_809 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T18 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_378 = YPfab_met(FUNCODEREF(fun_378),T18,YPfalse,LITREF(lit_809),sloc(1431),YPfalse);
  T20 = fun_378;
  T19 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_use_library_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T20,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_library,T19);
  lit_810 = YPPsym((P)"use-library");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_810),VARREF(YevalSastYspecial_use_library));
  lit_811 = YPPsym((P)"use/export");
  VARSET(YevalSastYDsexpr_useSexport_module_tag,LITREF(lit_811));
  lit_812 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T21 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_379 = YPfab_met(FUNCODEREF(fun_379),T21,YPfalse,LITREF(lit_812),sloc(1436),YPfalse);
  T23 = fun_379;
  T22 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_useSexport_module_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T23,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_useSexport_module,T22);
  lit_813 = YPPsym((P)"use/export-module");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_813),VARREF(YevalSastYspecial_useSexport_module));
  lit_814 = YPPsym((P)"c-ment");
  VARSET(YevalSastYDsexpr_c_ment_tag,LITREF(lit_814));
  lit_815 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T24 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_380 = YPfab_met(FUNCODEREF(fun_380),T24,YPfalse,LITREF(lit_815),sloc(1441),YPfalse);
  T26 = fun_380;
  T25 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_c_ment_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T26,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_c_ment,T25);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_814),VARREF(YevalSastYspecial_c_ment));
  lit_816 = YPPsym((P)"c-expr");
  VARSET(YevalSastYDsexpr_c_expr_tag,LITREF(lit_816));
  lit_817 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T27 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_381 = YPfab_met(FUNCODEREF(fun_381),T27,YPfalse,LITREF(lit_817),sloc(1446),YPfalse);
  T29 = fun_381;
  T28 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_531),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_c_expr_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T29,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_c_expr,T28);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_816),VARREF(YevalSastYspecial_c_expr));
  lit_818 = YPPsym((P)"install-initial-bindings");
  lit_819 = YPPlist(2,YPPsym((P)"env"),YPPsym((P)"loader"));
  lit_820 = YPPlist(1,YPPsym((P)"name"));
  lit_821 = YPPlist(2,YPPsym((P)"seq"),YPPsym((P)"use"));
  T31 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_382 = YPfab_met(FUNCODEREF(fun_382),T31,YPfalse,LITREF(lit_820),sloc(1481),YPfalse);
  T30 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLstatic_global_environmentG),VARREF(YevalSmoduleYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_install_initial_bindings_383 = YPfab_met(FUNCODEREF(fun_install_initial_bindings_383),T30,LITREF(lit_818),LITREF(lit_819),sloc(1477),YPfalse);
  T33 = VARREF_OR(YevalSmoduleYinstall_initial_bindings,YPfalse);
  T34 = fun_install_initial_bindings_383;
  T32 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T33,T34);
  VARSET(YevalSmoduleYinstall_initial_bindings,T32);
  lit_822 = YPPsym((P)"objectify-with-subtransaction");
  lit_823 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"dynamic-compilation?"),YPPsym((P)"tail?"));
  T36 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_384 = YPfab_met(FUNCODEREF(fun_384),T36,YPfalse,LITREF(lit_576),sloc(1497),YPfalse);
  T35 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  YevalSastYobjectify_with_subtransaction = YPfab_met(FUNCODEREF(YevalSastYobjectify_with_subtransaction),T35,LITREF(lit_822),LITREF(lit_823),sloc(1495),YPfalse);
  T37 = YevalSastYobjectify_with_subtransaction;
  VARSET(YevalSastYobjectify_with_subtransaction,T37);
  lit_824 = YPPsym((P)"install-magic-bindings");
  lit_825 = YPPlist(1,YPPsym((P)"env"));
  lit_826 = YPPlist(1,YPPsym((P)"binding"));
  T39 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_386 = YPfab_met(FUNCODEREF(fun_386),T39,YPfalse,LITREF(lit_826),sloc(1508),YPfalse);
  T38 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinstall_magic_bindings = YPfab_met(FUNCODEREF(YevalSastYinstall_magic_bindings),T38,LITREF(lit_824),LITREF(lit_825),sloc(1506),YPfalse);
  T40 = YevalSastYinstall_magic_bindings;
  VARSET(YevalSastYinstall_magic_bindings,T40);
  lit_827 = YPPsym((P)"reload-macros");
  T41 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYreload_macros = YPfab_met(FUNCODEREF(YevalSastYreload_macros),T41,LITREF(lit_827),LITREF(lit_576),sloc(1514),YPfalse);
  T42 = YevalSastYreload_macros;
  VARSET(YevalSastYreload_macros,T42);
  lit_828 = YPPsym((P)"install-interpreter-hacks");
  lit_829 = YPPlist(1,YPPsym((P)"env"));
  T43 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinstall_interpreter_hacks = YPfab_met(FUNCODEREF(YevalSastYinstall_interpreter_hacks),T43,LITREF(lit_828),LITREF(lit_829),sloc(1521),YPfalse);
  T44 = YevalSastYinstall_interpreter_hacks;
  VARSET(YevalSastYinstall_interpreter_hacks,T44);
  lit_830 = YPPsym((P)"init-runtime");
  T45 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYinit_runtime = YPfab_met(FUNCODEREF(YevalSastYinit_runtime),T45,LITREF(lit_830),LITREF(lit_576),sloc(1524),YPfalse);
  T46 = YevalSastYinit_runtime;
  VARSET(YevalSastYinit_runtime,T46);
  lit_831 = YPPlist(5,YPPsym((P)"ct"),YPPsym((P)"ct-also"),YPPsym((P)"ds"),YPPsym((P)"use"),YPPsym((P)"export"));
  VARSET(YevalSastYsyntax_environment_excluded_bindings,LITREF(lit_831));
  lit_832 = YPPsym((P)"fab-syntax-environment");
  lit_833 = YPPlist(1,YPPsym((P)"module"));
  lit_834 = YPPsym((P)"goo");
  T47 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YevalSmoduleYLstatic_global_environmentG),Ynil);
  YevalSastYfab_syntax_environment = YPfab_met(FUNCODEREF(YevalSastYfab_syntax_environment),T47,LITREF(lit_832),LITREF(lit_833),sloc(1548),YPfalse);
  T48 = YevalSastYfab_syntax_environment;
  VARSET(YevalSastYfab_syntax_environment,T48);
  lit_835 = YPPsym((P)"fab-g2c-module");
  lit_836 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  T49 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSmoduleYLmoduleG),Ynil);
  YevalSastYfab_g2c_module = YPfab_met(FUNCODEREF(YevalSastYfab_g2c_module),T49,LITREF(lit_835),LITREF(lit_836),sloc(1553),YPfalse);
  T50 = YevalSastYfab_g2c_module;
  VARSET(YevalSastYfab_g2c_module,T50);
  lit_837 = YPPsym((P)"init-g2c-boot-environment");
  lit_838 = YPPlist(1,YPPsym((P)"env"));
  T51 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinit_g2c_boot_environment = YPfab_met(FUNCODEREF(YevalSastYinit_g2c_boot_environment),T51,LITREF(lit_837),LITREF(lit_838),sloc(1566),YPfalse);
  T52 = YevalSastYinit_g2c_boot_environment;
  VARSET(YevalSastYinit_g2c_boot_environment,T52);
  lit_839 = YPPsym((P)"init-g2c-regular-environment");
  lit_840 = YPPlist(2,YPPsym((P)"env"),YPPsym((P)"loader"));
  T53 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLstatic_global_environmentG),VARREF(YevalSmoduleYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYinit_g2c_regular_environment = YPfab_met(FUNCODEREF(YevalSastYinit_g2c_regular_environment),T53,LITREF(lit_839),LITREF(lit_840),sloc(1572),YPfalse);
  T54 = YevalSastYinit_g2c_regular_environment;
  VARSET(YevalSastYinit_g2c_regular_environment,T54);
  lit_841 = YPPsym((P)"init-ast");
  T55 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYinit_ast = YPfab_met(FUNCODEREF(YevalSastYinit_ast),T55,LITREF(lit_841),LITREF(lit_576),sloc(1581),YPfalse);
  T56 = YevalSastYinit_ast;
  VARSET(YevalSastYinit_ast,T56);
  lit_842 = YPPsym((P)"ast-contains-fun?");
  lit_843 = YPPlist(1,YPPsym((P)"x"));
  T57 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_ast_contains_funQ_396 = YPfab_met(FUNCODEREF(fun_ast_contains_funQ_396),T57,LITREF(lit_842),LITREF(lit_843),sloc(1587),YPfalse);
  T59 = VARREF_OR(YevalSastYast_contains_funQ,YPfalse);
  T60 = fun_ast_contains_funQ_396;
  T58 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T59,T60);
  VARSET(YevalSastYast_contains_funQ,T58);
  lit_844 = YPPlist(1,YPPsym((P)"x"));
  lit_845 = YPPlist(1,YPPsym((P)"return"));
  lit_846 = YPPsym((P)"walk");
  lit_847 = YPPlist(1,YPPsym((P)"y"));
  T63 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_walk_397 = YPfab_met(FUNCODEREF(fun_walk_397),T63,LITREF(lit_846),LITREF(lit_847),sloc(1592),YPfalse);
  T62 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_398 = YPfab_met(FUNCODEREF(fun_398),T62,YPfalse,LITREF(lit_845),sloc(1591),YPfalse);
  T61 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_ast_contains_funQ_399 = YPfab_met(FUNCODEREF(fun_ast_contains_funQ_399),T61,LITREF(lit_842),LITREF(lit_844),sloc(1590),YPfalse);
  T65 = VARREF_OR(YevalSastYast_contains_funQ,YPfalse);
  T66 = fun_ast_contains_funQ_399;
  T64 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T65,T66);
  VARSET(YevalSastYast_contains_funQ,T64);
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  T67 = YPfalse;
  return T67;
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
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSfunctional;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSloc;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooScolsSmap;

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
  {"@add-new", &module_info_gooSboot, NULL},
  {"sexpr-assignment-variable", &module_info_evalSsyntax, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"*goo-personal-root*", &module_info_gooSsystem, NULL},
  {"invalidate-dependents", &module_info_evalSdependency, NULL},
  {"module-target-environment", &module_info_evalSmodule, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"module-name-to-relpath", &module_info_evalSmodule, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"$sexpr-iterate-tag", &module_info_evalSsyntax, NULL},
  {"sexpr-signature-value", &module_info_evalSsyntax, NULL},
  {"components-last", &module_info_gooSsystem, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"call-with-subtransaction", &module_info_evalSmodule, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"sexpr-definition-value", &module_info_evalSsyntax, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"module-loader-stack", &module_info_evalSmodule, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"load-module", &module_info_evalSmodule, NULL},
  {"<module>", &module_info_evalSmodule, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"module-name", &module_info_evalSmodule, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"transaction-register-dependent", &module_info_evalSmodule, NULL},
  {"sexpr-function-body", &module_info_evalSsyntax, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"$sexpr-isa-tag", &module_info_evalSsyntax, NULL},
  {"binding-free?", &module_info_evalSmodule, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"roll-back-transaction", &module_info_evalSmodule, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"global-box-value-setter", &module_info_evalSmodule, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"<namespace-error>", &module_info_evalSmodule, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"binding-locative-setter", &module_info_evalSmodule, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"$sexpr-define-method-tag", &module_info_evalSsyntax, NULL},
  {"module-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"os-val-setter", &module_info_gooSsystem, NULL},
  {"find-environment-module", &module_info_evalSmodule, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"do-static-global-bindings", &module_info_evalSmodule, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"environment-allows-foreign-names?", &module_info_evalSmodule, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"sexpr-define-class-parents", &module_info_evalSsyntax, NULL},
  {"sexpr-syntax-if-else", &module_info_evalSsyntax, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"binding-module-name", &module_info_evalSmodule, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"sexpr-variable-type", &module_info_evalSsyntax, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"install-initial-bindings", &module_info_evalSmodule, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"<static-environment>", &module_info_evalSmodule, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"sexpr-make-macro-function", &module_info_evalSsyntax, NULL},
  {"environment-module", &module_info_evalSmodule, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"binding-free?-setter", &module_info_evalSmodule, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"module-transaction", &module_info_evalSmodule, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"sexpr-if-then", &module_info_evalSsyntax, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"goo-filename", &module_info_gooSsystem, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"namespace-error", &module_info_evalSmodule, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"binding-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"binding-inferred-type", &module_info_evalSmodule, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"$expansion-parse-dependency", &module_info_evalSdependency, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"$sexpr-begin-tag", &module_info_evalSsyntax, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"*current-subtransaction*", &module_info_evalSmodule, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"$optimizaton-dependencies", &module_info_evalSdependency, NULL},
  {"%compile", &module_info_gooSsystem, NULL},
  {"binding-name", &module_info_evalSmodule, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"<dependable>", &module_info_evalSdependency, NULL},
  {"find-binding", &module_info_evalSmodule, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"dependency-includes-any?", &module_info_evalSdependency, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"add-goo-root-path", &module_info_gooSsystem, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"sexpr-function-definition-adjectives", &module_info_evalSsyntax, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"sexpr-syntax-definition-value", &module_info_evalSsyntax, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"sexpr-syntax-if-then", &module_info_evalSsyntax, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"file-mtime", &module_info_gooSsystem, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"dependency-and", &module_info_evalSdependency, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"dependency-nul?", &module_info_evalSdependency, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"$char-long-names", &module_info_gooSioSread, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"binding-kind-setter", &module_info_evalSmodule, NULL},
  {"$sexpr-define-class-tag", &module_info_evalSsyntax, NULL},
  {"binding-handler-setter", &module_info_evalSmodule, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"binding-prop-setter", &module_info_evalSmodule, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"sexpr-prop-init", &module_info_evalSsyntax, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"sexpr-prop-owner", &module_info_evalSsyntax, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"transaction-register-implemented-binding", &module_info_evalSmodule, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"sexpr-unquote?", &module_info_evalSsyntax, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"invalidate-dependent", &module_info_evalSdependency, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"sexpr-isa-parent", &module_info_evalSsyntax, NULL},
  {"sexpr-isa-prop-inits", &module_info_evalSsyntax, NULL},
  {"$goo-boot-module-name", &module_info_evalSmodule, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"$sexpr-unwind-protect-tag", &module_info_evalSsyntax, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"$sexpr-define-function-tag", &module_info_evalSsyntax, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"$sexpr-prop!-tag", &module_info_evalSsyntax, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"module-runtime-data", &module_info_evalSmodule, NULL},
  {"sexpr-loc-raw-body", &module_info_evalSsyntax, NULL},
  {"sexpr-loc-bound-bodies", &module_info_evalSsyntax, NULL},
  {"sexpr-loc-bound-signatures", &module_info_evalSsyntax, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"<static-nul-environment>", &module_info_evalSmodule, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"sexpr-operands", &module_info_evalSsyntax, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"module-uses-c-libraries", &module_info_evalSmodule, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"$sexpr-method-tag", &module_info_evalSsyntax, NULL},
  {"<dependent>", &module_info_evalSdependency, NULL},
  {"*exe-extension*", &module_info_gooSsystem, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"eval", &module_info_evalSsyntax, NULL},
  {"reload-modules", &module_info_evalSmodule, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"<module-loader>", &module_info_evalSmodule, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"sexpr-define-class?", &module_info_evalSsyntax, NULL},
  {"sexpr-make-begin", &module_info_evalSsyntax, NULL},
  {"sexpr-sequence->begin", &module_info_evalSsyntax, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"sexpr-block-name", &module_info_evalSsyntax, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"sexpr-unwind-protect-protected-form", &module_info_evalSsyntax, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"sexpr-method-body", &module_info_evalSsyntax, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"sexpr-function-definition-variable", &module_info_evalSsyntax, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"sexpr-forward-primitive?", &module_info_evalSsyntax, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"probe-directory", &module_info_gooSsystem, NULL},
  {"find-goo-file-in-path", &module_info_gooSsystem, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"set-standard-read-macro!", &module_info_gooSioSread, NULL},
  {"module-mangled-name", &module_info_evalSmodule, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"insert-globals!", &module_info_evalSmodule, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"pathname-to-components", &module_info_gooSsystem, NULL},
  {"sexpr-let->combination", &module_info_evalSsyntax, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"label-components", &module_info_gooSsystem, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"components-to-pathname", &module_info_gooSsystem, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"exe-filename", &module_info_gooSsystem, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"environment-module-loader", &module_info_evalSmodule, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"so-load", &module_info_gooSsystem, NULL},
  {"<directory-error>", &module_info_gooSsystem, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"sexpr-fab-setter-name", &module_info_evalSsyntax, NULL},
  {"$nul-dependency", &module_info_evalSdependency, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"sexpr-make-anonymous-method", &module_info_evalSsyntax, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"add-tmp-path", &module_info_gooSsystem, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"sexpr-if-test", &module_info_evalSsyntax, NULL},
  {"<static-local-environment>", &module_info_evalSmodule, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"unchecked-runtime-environment", &module_info_evalSmodule, NULL},
  {"sexpr-definition-variable", &module_info_evalSsyntax, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"dependency-includes-all?", &module_info_evalSdependency, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"$sexpr-monitor-tag", &module_info_evalSsyntax, NULL},
  {"binding-inferred-type-setter", &module_info_evalSmodule, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"sexpr-bind-pattern-variables", &module_info_evalSsyntax, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"time", &module_info_gooSsystem, NULL},
  {"sexpr-variable?", &module_info_evalSsyntax, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"*goo-root*", &module_info_gooSsystem, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"$sexpr-syntax-if-tag", &module_info_evalSsyntax, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"sexpr-variable-name", &module_info_evalSsyntax, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"module-data-processed?", &module_info_evalSmodule, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"sexpr-syntax-definition-variable", &module_info_evalSsyntax, NULL},
  {"*c-extension*", &module_info_gooSsystem, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"read-delimited-list", &module_info_gooSioSread, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"report-undefined-global-bindings", &module_info_evalSmodule, NULL},
  {"environment-next", &module_info_evalSmodule, NULL},
  {"binding-type", &module_info_evalSmodule, NULL},
  {"sexpr-def-value", &module_info_evalSsyntax, NULL},
  {"probe-module", &module_info_evalSmodule, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"frame-bindings", &module_info_evalSmodule, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"sexpr-monitor-expand", &module_info_evalSsyntax, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"binding-kind", &module_info_evalSmodule, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"binding-prop", &module_info_evalSmodule, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"$sexpr-define-tag", &module_info_evalSsyntax, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"sexpr-prop-name", &module_info_evalSsyntax, NULL},
  {"binding-info", &module_info_evalSmodule, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"find-dependency", &module_info_evalSdependency, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"$sexpr-let-tag", &module_info_evalSsyntax, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"file-copy", &module_info_gooSsystem, NULL},
  {"add-src-path", &module_info_gooSsystem, NULL},
  {"os-name", &module_info_gooSsystem, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"with-subtransaction", &module_info_evalSmodule, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"os-val", &module_info_gooSsystem, NULL},
  {"module-uses-c-includes", &module_info_evalSmodule, NULL},
  {"sexpr-method-signature", &module_info_evalSsyntax, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"binding-locative", &module_info_evalSmodule, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"sexpr-text-of-quotation", &module_info_evalSsyntax, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"environment-uses-modules", &module_info_evalSmodule, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"log-dependency", &module_info_evalSdependency, NULL},
  {"hierarchical-components", &module_info_gooSsystem, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"binding-global-box-setter", &module_info_evalSmodule, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"find-syntax-environment", &module_info_evalSmodule, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"obj-filename", &module_info_gooSsystem, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"parent-directory", &module_info_gooSsystem, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"$sexpr-if-tag", &module_info_evalSsyntax, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"sexpr-isa-init-values", &module_info_evalSsyntax, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"*obj-extension*", &module_info_gooSsystem, NULL},
  {"register-referenced-binding", &module_info_evalSmodule, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"c-expr", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"module-uses-c-files", &module_info_evalSmodule, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"detach-dependent", &module_info_evalSdependency, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"insert-global!", &module_info_evalSmodule, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"import-global!", &module_info_evalSmodule, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"find-goo-file-at", &module_info_gooSsystem, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"binding-mangled-name", &module_info_evalSmodule, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"sexpr-syntax-if-pattern", &module_info_evalSsyntax, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"sexpr-loc-bound-names", &module_info_evalSsyntax, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"sexpr-expand-backquote", &module_info_evalSsyntax, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"add-build-path", &module_info_gooSsystem, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"*path-separator*", &module_info_gooSsystem, NULL},
  {"$sexpr-define-generic-tag", &module_info_evalSsyntax, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"sexpr-function-signature", &module_info_evalSsyntax, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"<bignum>", &module_info_gooSboot, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"*goo-extension*", &module_info_gooSsystem, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"create-directory", &module_info_gooSsystem, NULL},
  {"binding-native-to?", &module_info_evalSmodule, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"binding-global-box", &module_info_evalSmodule, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"$sexpr-quasiquote-tag", &module_info_evalSsyntax, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"set-module-environments", &module_info_evalSmodule, NULL},
  {"<binding>", &module_info_evalSmodule, NULL},
  {"sexpr-assignment-value", &module_info_evalSsyntax, NULL},
  {"do-module-loader-modules", &module_info_evalSmodule, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"module-c-forms", &module_info_evalSmodule, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"c-filename", &module_info_gooSsystem, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"sexpr-make-application", &module_info_evalSsyntax, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"packing-as", &module_info_gooSpacker, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"walk-bindings", &module_info_evalSmodule, NULL},
  {"<module-binding>", &module_info_evalSmodule, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"load-in", &module_info_evalSmodule, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"sexpr-block-body", &module_info_evalSsyntax, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"$sexpr-set-tag", &module_info_evalSsyntax, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"components-parent-directory", &module_info_gooSsystem, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"runtime-environment", &module_info_evalSmodule, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"sexpr-fab-setter", &module_info_evalSsyntax, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"$sexpr-define-syntax-tag", &module_info_evalSsyntax, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"sexpr-prop-type", &module_info_evalSsyntax, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"binding-info-setter", &module_info_evalSmodule, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"environment-bindings", &module_info_evalSmodule, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"<global-box>", &module_info_evalSmodule, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"register-module!", &module_info_evalSmodule, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"process-id", &module_info_gooSsystem, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"do-named-static-global-bindings", &module_info_evalSmodule, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"lst*", &module_info_gooScolsSlst, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"$sexpr-define-constant-tag", &module_info_evalSsyntax, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"fun-inlineable?-setter", &module_info_gooSfun, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"sexpr-isa-init-props", &module_info_evalSsyntax, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"file-type", &module_info_gooSsystem, NULL},
  {"file-exists?", &module_info_gooSsystem, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"sexpr-iterate->loc", &module_info_evalSsyntax, NULL},
  {"module-referenced-bindings", &module_info_evalSmodule, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"binding-handler", &module_info_evalSmodule, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"$value-optimization-dependency", &module_info_evalSdependency, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"gooc-filename", &module_info_gooSsystem, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"sexpr-make-method", &module_info_evalSsyntax, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"*goo-build-root*", &module_info_gooSsystem, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"fab-static-global-environment", &module_info_evalSmodule, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"env-object-name", &module_info_evalSmodule, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"sexpr-syntax-if-value", &module_info_evalSsyntax, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"fun-inlineable?", &module_info_gooSfun, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"runtime-module", &module_info_evalSmodule, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"sexpr-operator", &module_info_evalSsyntax, NULL},
  {"zap-referenced-bindings!", &module_info_evalSmodule, NULL},
  {"sexpr-function-definition-value", &module_info_evalSsyntax, NULL},
  {"$sexpr-def-tag", &module_info_evalSsyntax, NULL},
  {"export-binding!", &module_info_evalSmodule, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"components-basename", &module_info_gooSsystem, NULL},
  {"dependency-or", &module_info_evalSdependency, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"$name-parse-dependency", &module_info_evalSdependency, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"<dependency-type>", &module_info_evalSdependency, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"module-data-processed?-setter", &module_info_evalSmodule, NULL},
  {"sexpr-if-else", &module_info_evalSsyntax, NULL},
  {"$parse-dependencies", &module_info_evalSdependency, NULL},
  {"find-static-global-environment", &module_info_evalSmodule, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {">", &module_info_gooSmag, NULL},
  {"%bu", &module_info_gooSboot, NULL},
  {"sexpr-def?", &module_info_evalSsyntax, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"<static-global-environment>", &module_info_evalSmodule, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"<binding-name>", &module_info_evalSmodule, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"module-syntax-environment", &module_info_evalSmodule, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"sexpr-unquote-splicing?", &module_info_evalSsyntax, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"$all-dependency-types", &module_info_evalSdependency, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"module-mangled-string-name", &module_info_evalSmodule, NULL},
  {"sexpr-def-variable", &module_info_evalSsyntax, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"<pathname-error>", &module_info_gooSsystem, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"binding-module", &module_info_evalSmodule, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSmodule, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"binding-type-setter", &module_info_evalSmodule, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"%load", &module_info_gooSsystem, NULL},
  {"$sexpr-bind-exit-tag", &module_info_evalSsyntax, NULL},
  {"$sexpr-locals-tag", &module_info_evalSsyntax, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"*dynamic-compilation?*", &module_info_evalSmodule, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"fab-subset-environment", &module_info_evalSmodule, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"sexpr-fab-getter", &module_info_evalSsyntax, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"$sexpr-prop-tag", &module_info_evalSsyntax, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"sexpr-prop-init-var", &module_info_evalSsyntax, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"$sexpr-quote-tag", &module_info_evalSsyntax, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"module-runtime-data-setter", &module_info_evalSmodule, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"remove-modules-by-name!", &module_info_evalSmodule, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"global-box-value", &module_info_evalSmodule, NULL},
  {"runtime-module-loader", &module_info_evalSmodule, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"get-standard-read-macro", &module_info_gooSioSread, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"add-goo-personal-root-path", &module_info_gooSsystem, NULL},
  {"import-and-mangle-global!", &module_info_evalSmodule, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"sexpr-prop-init?", &module_info_evalSsyntax, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"module-exports", &module_info_evalSmodule, NULL},
  {"ensure-module-data", &module_info_evalSmodule, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"c-ment", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_evalSsyntax, NULL},
  {"module-loader-module-type", &module_info_evalSmodule, NULL},
  {"$sexpr-macro-expand-tag", &module_info_evalSsyntax, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"*module-search-path*", &module_info_gooSsystem, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"function-registers", CVAR, &YevalSastYfunction_registers},
  {"---main-10---", PVAR, NULL},
  {"<fix-let>", CVAR, &YevalSastYLfix_letG},
  {"function-loop-setter", CVAR, &YevalSastYfunction_loop_setter},
  {"$fab-list-nul", CVAR, &YevalSastYDfab_list_nul},
  {"---main-5---", PVAR, NULL},
  {"---main-6---", PVAR, NULL},
  {"<variable-definition>", CVAR, &YevalSastYLvariable_definitionG},
  {"objectify-locals", CVAR, &YevalSastYobjectify_locals},
  {"special-quote", CVAR, &YevalSastYspecial_quote},
  {"objectify-assignment-using", CVAR, &YevalSastYobjectify_assignment_using},
  {"<application>", CVAR, &YevalSastYLapplicationG},
  {"reload-macros", CVAR, &YevalSastYreload_macros},
  {"objectify-primitive-definition", CVAR, &YevalSastYobjectify_primitive_definition},
  {"function-specs", CVAR, &YevalSastYfunction_specs},
  {"convert2arguments", CVAR, &YevalSastYconvert2arguments},
  {"*record-source?*", DVAR, &YevalSastYTrecord_sourceQT},
  {"<dynamic-assignment>", CVAR, &YevalSastYLdynamic_assignmentG},
  {"function-free-setter", CVAR, &YevalSastYfunction_free_setter},
  {"binding-index", CVAR, &YevalSastYbinding_index},
  {"<arguments>", CVAR, &YevalSastYLargumentsG},
  {"objectify-quotation", CVAR, &YevalSastYobjectify_quotation},
  {"$sexpr-c-expr-tag", CVAR, &YevalSastYDsexpr_c_expr_tag},
  {"process-closed-application", CVAR, &YevalSastYprocess_closed_application},
  {"function-index", CVAR, &YevalSastYfunction_index},
  {"alternative-consequent-setter", CVAR, &YevalSastYalternative_consequent_setter},
  {"<reference>", CVAR, &YevalSastYLreferenceG},
  {"alternative-alternant-setter", CVAR, &YevalSastYalternative_alternant_setter},
  {"---main-0---", PVAR, NULL},
  {"$arguments-nul", CVAR, &YevalSastYDarguments_nul},
  {"$sexpr-define-static-syntax-tag", CVAR, &YevalSastYDsexpr_define_static_syntax_tag},
  {"special-use-mangle-module", CVAR, &YevalSastYspecial_use_mangle_module},
  {"---main-7---", PVAR, NULL},
  {"bind-exit-main-fun-setter", CVAR, &YevalSastYbind_exit_main_fun_setter},
  {"objectify-compile-time", CVAR, &YevalSastYobjectify_compile_time},
  {"objectify-alternative", CVAR, &YevalSastYobjectify_alternative},
  {"application-loop-setter", CVAR, &YevalSastYapplication_loop_setter},
  {"<bound?>", CVAR, &YevalSastYLboundQG},
  {"expand-bind-list", CVAR, &YevalSastYexpand_bind_list},
  {"<ast-generic-definition>", CVAR, &YevalSastYLast_generic_definitionG},
  {"init-g2c-boot-environment", CVAR, &YevalSastYinit_g2c_boot_environment},
  {"<program>", CVAR, &YevalSastYLprogramG},
  {"constant-index", CVAR, &YevalSastYconstant_index},
  {"<assignment>", CVAR, &YevalSastYLassignmentG},
  {"$sexpr-compile-time-tag", CVAR, &YevalSastYDsexpr_compile_time_tag},
  {"$sequential-nul", CVAR, &YevalSastYDsequential_nul},
  {"bound?-reference", CVAR, &YevalSastYboundQ_reference},
  {"application-function-setter", CVAR, &YevalSastYapplication_function_setter},
  {"objectify-free-global-reference", CVAR, &YevalSastYobjectify_free_global_reference},
  {"fix-let-body", CVAR, &YevalSastYfix_let_body},
  {"ast-walk!", CVAR, &YevalSastYast_walkX},
  {"<ast-embodied-function>", CVAR, &YevalSastYLast_embodied_functionG},
  {"install-magic-bindings", CVAR, &YevalSastYinstall_magic_bindings},
  {"maybe-log-dependency", CVAR, &YevalSastYmaybe_log_dependency},
  {"$sexpr-use-include-tag", CVAR, &YevalSastYDsexpr_use_include_tag},
  {"special-def", CVAR, &YevalSastYspecial_def},
  {"objectify-function", CVAR, &YevalSastYobjectify_function},
  {"bound?-default", CVAR, &YevalSastYboundQ_default},
  {"special-define-primitive", CVAR, &YevalSastYspecial_define_primitive},
  {"special-quasiquote", CVAR, &YevalSastYspecial_quasiquote},
  {"monitor-type", CVAR, &YevalSastYmonitor_type},
  {"special-locals", CVAR, &YevalSastYspecial_locals},
  {"special-bind-exit", CVAR, &YevalSastYspecial_bind_exit},
  {"syntax-environment-excluded-bindings", CVAR, &YevalSastYsyntax_environment_excluded_bindings},
  {"function-names", CVAR, &YevalSastYfunction_names},
  {"<monitor>", CVAR, &YevalSastYLmonitorG},
  {"special-define-constant", CVAR, &YevalSastYspecial_define_constant},
  {"signature-nary?-setter", CVAR, &YevalSastYsignature_naryQ_setter},
  {"$sexpr-bound?-tag", CVAR, &YevalSastYDsexpr_boundQ_tag},
  {"<runtime-reference>", CVAR, &YevalSastYLruntime_referenceG},
  {"special-define-syntax", CVAR, &YevalSastYspecial_define_syntax},
  {"bind-exit-light?", CVAR, &YevalSastYbind_exit_lightQ},
  {"<unwind-protect>", CVAR, &YevalSastYLunwind_protectG},
  {"alternative-condition", CVAR, &YevalSastYalternative_condition},
  {"objectify-dynamic-definition", CVAR, &YevalSastYobjectify_dynamic_definition},
  {"ftype", CVAR, &YevalSastYftype},
  {"<loop>", CVAR, &YevalSastYLloopG},
  {"*macro-tracing?*", CVAR, &YevalSastYTmacro_tracingQT},
  {"bind-exit-light?-setter", CVAR, &YevalSastYbind_exit_lightQ_setter},
  {"monitor-handler-setter", CVAR, &YevalSastYmonitor_handler_setter},
  {"application-arguments-setter", CVAR, &YevalSastYapplication_arguments_setter},
  {"inline-refs", CVAR, &YevalSastYinline_refs},
  {"$sexpr-use-mangle-module-tag", CVAR, &YevalSastYDsexpr_use_mangle_module_tag},
  {"special-prop!", CVAR, &YevalSastYspecial_propX},
  {"function-ref-count-setter", CVAR, &YevalSastYfunction_ref_count_setter},
  {"special-prop", CVAR, &YevalSastYspecial_prop},
  {"binding-dotted?-setter", CVAR, &YevalSastYbinding_dottedQ_setter},
  {"c-inline-refs-setter", CVAR, &YevalSastYc_inline_refs_setter},
  {"c-inline-strs", CVAR, &YevalSastYc_inline_strs},
  {"---main-2---", PVAR, NULL},
  {"program-register-setter", CVAR, &YevalSastYprogram_register_setter},
  {"c-inline-strs-setter", CVAR, &YevalSastYc_inline_strs_setter},
  {"free-environment", CVAR, &YevalSastYfree_environment},
  {"special-define-dynamic", CVAR, &YevalSastYspecial_define_dynamic},
  {"<module-binding-reference>", CVAR, &YevalSastYLmodule_binding_referenceG},
  {"application-binding", CVAR, &YevalSastYapplication_binding},
  {"function-loop", CVAR, &YevalSastYfunction_loop},
  {"signature-arity", CVAR, &YevalSastYsignature_arity},
  {"loop-bindings", CVAR, &YevalSastYloop_bindings},
  {"constant-value-setter", CVAR, &YevalSastYconstant_value_setter},
  {"monitor-info-setter", CVAR, &YevalSastYmonitor_info_setter},
  {"<alternative>", CVAR, &YevalSastYLalternativeG},
  {"<locals>", CVAR, &YevalSastYLlocalsG},
  {"special-c-expr", CVAR, &YevalSastYspecial_c_expr},
  {"locals-bindings-setter", CVAR, &YevalSastYlocals_bindings_setter},
  {"locals-functions-setter", CVAR, &YevalSastYlocals_functions_setter},
  {"locals-body", CVAR, &YevalSastYlocals_body},
  {"function-body-setter", CVAR, &YevalSastYfunction_body_setter},
  {"locals-bindings", CVAR, &YevalSastYlocals_bindings},
  {"loop-body", CVAR, &YevalSastYloop_body},
  {"unwind-protect-cleanup-thunk-setter", CVAR, &YevalSastYunwind_protect_cleanup_thunk_setter},
  {"monitor-main-thunk-setter", CVAR, &YevalSastYmonitor_main_thunk_setter},
  {"special-define-class", CVAR, &YevalSastYspecial_define_class},
  {"special-define", CVAR, &YevalSastYspecial_define},
  {"function-free", CVAR, &YevalSastYfunction_free},
  {"objectify-refs", CVAR, &YevalSastYobjectify_refs},
  {"binding-closed-over?", CVAR, &YevalSastYbinding_closed_overQ},
  {"<dynamic-definition>", CVAR, &YevalSastYLdynamic_definitionG},
  {"---main-4---", PVAR, NULL},
  {"transform-defs", CVAR, &YevalSastYtransform_defs},
  {"locals-functions", CVAR, &YevalSastYlocals_functions},
  {"magic-bindings", CVAR, &YevalSastYmagic_bindings},
  {"function-signature-setter", CVAR, &YevalSastYfunction_signature_setter},
  {"function-temporaries-setter", CVAR, &YevalSastYfunction_temporaries_setter},
  {"special-compile-time-also", CVAR, &YevalSastYspecial_compile_time_also},
  {"monitor-test", CVAR, &YevalSastYmonitor_test},
  {"binding-dynamic-extent?-setter", CVAR, &YevalSastYbinding_dynamic_extentQ_setter},
  {"function-bindings", CVAR, &YevalSastYfunction_bindings},
  {"special-syntax-if", CVAR, &YevalSastYspecial_syntax_if},
  {"$sexpr-optionals-tag", CVAR, &YevalSastYDsexpr_optionals_tag},
  {"def-programs", PVAR, NULL},
  {"<fab-list>", CVAR, &YevalSastYLfab_listG},
  {"objectify-assignment", CVAR, &YevalSastYobjectify_assignment},
  {"objectify-bound?", CVAR, &YevalSastYobjectify_boundQ},
  {"$sexpr-use-library-tag", CVAR, &YevalSastYDsexpr_use_library_tag},
  {"special-macro-expand", CVAR, &YevalSastYspecial_macro_expand},
  {"<ast-macro-definition>", CVAR, &YevalSastYLast_macro_definitionG},
  {"<loop-application>", CVAR, &YevalSastYLloop_applicationG},
  {"fix-let-body-setter", CVAR, &YevalSastYfix_let_body_setter},
  {"<inline-refs>", CVAR, &YevalSastYLinline_refsG},
  {"<low-let>", CVAR, &YevalSastYLlow_letG},
  {"r-extend*", CVAR, &YevalSastYr_extendT},
  {"fix-let-types-setter", CVAR, &YevalSastYfix_let_types_setter},
  {"<simple-ast-error>", CVAR, &YevalSastYLsimple_ast_errorG},
  {"objectify-list", CVAR, &YevalSastYobjectify_list},
  {"objectify-definition", CVAR, &YevalSastYobjectify_definition},
  {"special-bound?", CVAR, &YevalSastYspecial_boundQ},
  {"signature-names-setter", CVAR, &YevalSastYsignature_names_setter},
  {"fix-let-bindings-setter", CVAR, &YevalSastYfix_let_bindings_setter},
  {"c-inline-refs", CVAR, &YevalSastYc_inline_refs},
  {"function-frame-len", CVAR, &YevalSastYfunction_frame_len},
  {"function-kind", CVAR, &YevalSastYfunction_kind},
  {"binding-value-setter", CVAR, &YevalSastYbinding_value_setter},
  {"objectify-use-library", CVAR, &YevalSastYobjectify_use_library},
  {"<ast-function>", CVAR, &YevalSastYLast_functionG},
  {"reference-frame-offset-setter", CVAR, &YevalSastYreference_frame_offset_setter},
  {"functions", CVAR, &YevalSastYfunctions},
  {"default-type", CVAR, &YevalSastYdefault_type},
  {"<c-inline>", CVAR, &YevalSastYLc_inlineG},
  {"application-binding-setter", CVAR, &YevalSastYapplication_binding_setter},
  {"constant-index-setter", CVAR, &YevalSastYconstant_index_setter},
  {"objectify-generic-definition", CVAR, &YevalSastYobjectify_generic_definition},
  {"expand-bind-list*", CVAR, &YevalSastYexpand_bind_listT},
  {"assignment-binding-setter", CVAR, &YevalSastYassignment_binding_setter},
  {"$sexpr-c-ment-tag", CVAR, &YevalSastYDsexpr_c_ment_tag},
  {"init-g2c-regular-environment", CVAR, &YevalSastYinit_g2c_regular_environment},
  {"ast-evaluate", CVAR, &YevalSastYast_evaluate},
  {"objectify-bind-exit", CVAR, &YevalSastYobjectify_bind_exit},
  {"<ast-error>", CVAR, &YevalSastYLast_errorG},
  {"<predefined-application>", CVAR, &YevalSastYLpredefined_applicationG},
  {"special-define-static-syntax", CVAR, &YevalSastYspecial_define_static_syntax},
  {"program-type-setter", CVAR, &YevalSastYprogram_type_setter},
  {"special-%raw", CVAR, &YevalSastYspecial_Praw},
  {"fix-let-arguments", CVAR, &YevalSastYfix_let_arguments},
  {"---main-9---", PVAR, NULL},
  {"$sexpr-optionals-type-name", CVAR, &YevalSastYDsexpr_optionals_type_name},
  {"objectify-binding", CVAR, &YevalSastYobjectify_binding},
  {"reference-binding-setter", CVAR, &YevalSastYreference_binding_setter},
  {"unwind-protect-protected-thunk-setter", CVAR, &YevalSastYunwind_protect_protected_thunk_setter},
  {"special-iterate", CVAR, &YevalSastYspecial_iterate},
  {"special-use-module", CVAR, &YevalSastYspecial_use_module},
  {"special-use-library", CVAR, &YevalSastYspecial_use_library},
  {"special-if", CVAR, &YevalSastYspecial_if},
  {"fix-let-types", CVAR, &YevalSastYfix_let_types},
  {"ast-contains-fun?", CVAR, &YevalSastYast_contains_funQ},
  {"application-next-methods", CVAR, &YevalSastYapplication_next_methods},
  {"<static-module-binding-reference>", CVAR, &YevalSastYLstatic_module_binding_referenceG},
  {"$inline-refs-nul", CVAR, &YevalSastYDinline_refs_nul},
  {"fab-syntax-environment", CVAR, &YevalSastYfab_syntax_environment},
  {"<local-binding>", CVAR, &YevalSastYLlocal_bindingG},
  {"application-known?-setter", CVAR, &YevalSastYapplication_knownQ_setter},
  {"alternative-condition-setter", CVAR, &YevalSastYalternative_condition_setter},
  {"monitor-handler", CVAR, &YevalSastYmonitor_handler},
  {"monitor-type-setter", CVAR, &YevalSastYmonitor_type_setter},
  {"function-ref-count", CVAR, &YevalSastYfunction_ref_count},
  {"binding-dotted?", CVAR, &YevalSastYbinding_dottedQ},
  {"%%%macro", CVAR, &YevalSastYPPPmacro},
  {"reference-frame-number", CVAR, &YevalSastYreference_frame_number},
  {"alternative-alternant", CVAR, &YevalSastYalternative_alternant},
  {"objectify-use-include", CVAR, &YevalSastYobjectify_use_include},
  {"loop-bindings-setter", CVAR, &YevalSastYloop_bindings_setter},
  {"loop-body-setter", CVAR, &YevalSastYloop_body_setter},
  {"macro-expander", CVAR, &YevalSastYmacro_expander},
  {"bind-exit-main-fun", CVAR, &YevalSastYbind_exit_main_fun},
  {"objectify-application", CVAR, &YevalSastYobjectify_application},
  {"special-export", CVAR, &YevalSastYspecial_export},
  {"alternative-consequent", CVAR, &YevalSastYalternative_consequent},
  {"c-inline-expr?", CVAR, &YevalSastYc_inline_exprQ},
  {"objectify-variable-definition", CVAR, &YevalSastYobjectify_variable_definition},
  {"<ast-generic>", CVAR, &YevalSastYLast_genericG},
  {"expand-pattern", CVAR, &YevalSastYexpand_pattern},
  {"pairize", CVAR, &YevalSastYpairize},
  {"<dynamic-reference>", CVAR, &YevalSastYLdynamic_referenceG},
  {"<definition>", CVAR, &YevalSastYLdefinitionG},
  {"compile-time-program-setter", CVAR, &YevalSastYcompile_time_program_setter},
  {"objectify-c-expr", CVAR, &YevalSastYobjectify_c_expr},
  {"function-frame-len-setter", CVAR, &YevalSastYfunction_frame_len_setter},
  {"assignment-form-setter", CVAR, &YevalSastYassignment_form_setter},
  {"expand-syntax-if", CVAR, &YevalSastYexpand_syntax_if},
  {"special-c-ment", CVAR, &YevalSastYspecial_c_ment},
  {"function-value", CVAR, &YevalSastYfunction_value},
  {"<runtime-assignment>", CVAR, &YevalSastYLruntime_assignmentG},
  {"signature-value-setter", CVAR, &YevalSastYsignature_value_setter},
  {"function-source", CVAR, &YevalSastYfunction_source},
  {"function-temporaries", CVAR, &YevalSastYfunction_temporaries},
  {"function-adjectives", CVAR, &YevalSastYfunction_adjectives},
  {"special-let", CVAR, &YevalSastYspecial_let},
  {"<free-environment>", CVAR, &YevalSastYLfree_environmentG},
  {"$free-environment-nul", CVAR, &YevalSastYDfree_environment_nul},
  {"$sexpr-define-dynamic-tag", CVAR, &YevalSastYDsexpr_define_dynamic_tag},
  {"binding-dynamic-extent?", CVAR, &YevalSastYbinding_dynamic_extentQ},
  {"<magic-reference>", CVAR, &YevalSastYLmagic_referenceG},
  {"define-magic-binding", PVAR, NULL},
  {"function-source-setter", CVAR, &YevalSastYfunction_source_setter},
  {"application-arguments", CVAR, &YevalSastYapplication_arguments},
  {"objectify-use-module", CVAR, &YevalSastYobjectify_use_module},
  {"<ast-signature>", CVAR, &YevalSastYLast_signatureG},
  {"function-body", CVAR, &YevalSastYfunction_body},
  {"function-index-setter", CVAR, &YevalSastYfunction_index_setter},
  {"<method-application>", CVAR, &YevalSastYLmethod_applicationG},
  {"$functions-nul", CVAR, &YevalSastYDfunctions_nul},
  {"objectify-raw", CVAR, &YevalSastYobjectify_raw},
  {"application-next-methods-setter", CVAR, &YevalSastYapplication_next_methods_setter},
  {"monitor-info", CVAR, &YevalSastYmonitor_info},
  {"---main-1---", PVAR, NULL},
  {"function-nary?", CVAR, &YevalSastYfunction_naryQ},
  {"function-arity", CVAR, &YevalSastYfunction_arity},
  {"<ast-primitive>", CVAR, &YevalSastYLast_primitiveG},
  {"function-display-name", CVAR, &YevalSastYfunction_display_name},
  {"$sexpr-export-tag", CVAR, &YevalSastYDsexpr_export_tag},
  {"<global-assignment>", CVAR, &YevalSastYLglobal_assignmentG},
  {"special-define-method", CVAR, &YevalSastYspecial_define_method},
  {"signature-names", CVAR, &YevalSastYsignature_names},
  {"function-debug-name-setter", CVAR, &YevalSastYfunction_debug_name_setter},
  {"ast-walk", CVAR, &YevalSastYast_walk},
  {"signature-arity-setter", CVAR, &YevalSastYsignature_arity_setter},
  {"binding-mutable?", CVAR, &YevalSastYbinding_mutableQ},
  {"req-sig-specs", CVAR, &YevalSastYreq_sig_specs},
  {"binding-value", CVAR, &YevalSastYbinding_value},
  {"reference-frame-offset", CVAR, &YevalSastYreference_frame_offset},
  {"$sexpr-use-module-tag", CVAR, &YevalSastYDsexpr_use_module_tag},
  {"<constant>", CVAR, &YevalSastYLconstantG},
  {"signature-bindings-setter", CVAR, &YevalSastYsignature_bindings_setter},
  {"assignment-binding", CVAR, &YevalSastYassignment_binding},
  {"process-nary-closed-application", CVAR, &YevalSastYprocess_nary_closed_application},
  {"<bind-exit>", CVAR, &YevalSastYLbind_exitG},
  {"signature-nary?", CVAR, &YevalSastYsignature_naryQ},
  {"init-environment-for-eval", CVAR, &YevalSastYinit_environment_for_eval},
  {"objectify-export", CVAR, &YevalSastYobjectify_export},
  {"<regular-application>", CVAR, &YevalSastYLregular_applicationG},
  {"module-binding", CVAR, &YevalSastYmodule_binding},
  {"binding-reference-class", CVAR, &YevalSastYbinding_reference_class},
  {"program-type", CVAR, &YevalSastYprogram_type},
  {"loop-continue", CVAR, &YevalSastYloop_continue},
  {"fix-let-arguments-setter", CVAR, &YevalSastYfix_let_arguments_setter},
  {"ast-copy", CVAR, &YevalSastYast_copy},
  {"objectify-foreign-reference", CVAR, &YevalSastYobjectify_foreign_reference},
  {"special-set", CVAR, &YevalSastYspecial_set},
  {"split-c-inline-vals", CVAR, &YevalSastYsplit_c_inline_vals},
  {"fab-g2c-module", CVAR, &YevalSastYfab_g2c_module},
  {"special-use-include", CVAR, &YevalSastYspecial_use_include},
  {"<ast-primitive-definition>", CVAR, &YevalSastYLast_primitive_definitionG},
  {"reference-binding", CVAR, &YevalSastYreference_binding},
  {"init-runtime", CVAR, &YevalSastYinit_runtime},
  {"<ast-function-definition>", CVAR, &YevalSastYLast_function_definitionG},
  {"function-signature", CVAR, &YevalSastYfunction_signature},
  {"objectify-syntax-definition", CVAR, &YevalSastYobjectify_syntax_definition},
  {"application-function", CVAR, &YevalSastYapplication_function},
  {"register-magic-binding", CVAR, &YevalSastYregister_magic_binding},
  {"program-line-setter", CVAR, &YevalSastYprogram_line_setter},
  {"arguments", CVAR, &YevalSastYarguments},
  {"<functions>", CVAR, &YevalSastYLfunctionsG},
  {"application-loop", CVAR, &YevalSastYapplication_loop},
  {"$sexpr-use/export-module-tag", CVAR, &YevalSastYDsexpr_useSexport_module_tag},
  {"function-binding-setter", CVAR, &YevalSastYfunction_binding_setter},
  {"assignment-reference-setter", CVAR, &YevalSastYassignment_reference_setter},
  {"signature-bindings", CVAR, &YevalSastYsignature_bindings},
  {"application-tail?-setter", CVAR, &YevalSastYapplication_tailQ_setter},
  {"<programs>", CVAR, &YevalSastYLprogramsG},
  {"function-registers-setter", CVAR, &YevalSastYfunction_registers_setter},
  {"objectify-sequential", CVAR, &YevalSastYobjectify_sequential},
  {"*current-dependent*", DVAR, &YevalSastYTcurrent_dependentT},
  {"init-ast", CVAR, &YevalSastYinit_ast},
  {"assignment-form", CVAR, &YevalSastYassignment_form},
  {"function-adjectives-setter", CVAR, &YevalSastYfunction_adjectives_setter},
  {"ast-macro-expand", CVAR, &YevalSastYast_macro_expand},
  {"<local-assignment>", CVAR, &YevalSastYLlocal_assignmentG},
  {"assignment-reference", CVAR, &YevalSastYassignment_reference},
  {"reference-frame-number-setter", CVAR, &YevalSastYreference_frame_number_setter},
  {"application-tail?", CVAR, &YevalSastYapplication_tailQ},
  {"update-binding-kind", CVAR, &YevalSastYupdate_binding_kind},
  {"monitor-test-setter", CVAR, &YevalSastYmonitor_test_setter},
  {"<compile-time>", CVAR, &YevalSastYLcompile_timeG},
  {"special-monitor", CVAR, &YevalSastYspecial_monitor},
  {"fab-list", CVAR, &YevalSastYfab_list},
  {"bound?-default-setter", CVAR, &YevalSastYboundQ_default_setter},
  {"objectify-with-subtransaction", CVAR, &YevalSastYobjectify_with_subtransaction},
  {"$sexpr-define-primitive-tag", CVAR, &YevalSastYDsexpr_define_primitive_tag},
  {"signature-specs-setter", CVAR, &YevalSastYsignature_specs_setter},
  {"special-unwind-protect", CVAR, &YevalSastYspecial_unwind_protect},
  {"objectify-define-property", CVAR, &YevalSastYobjectify_define_property},
  {"objectify-function-definition", CVAR, &YevalSastYobjectify_function_definition},
  {"signature-specs", CVAR, &YevalSastYsignature_specs},
  {"c-inline-expr?-setter", CVAR, &YevalSastYc_inline_exprQ_setter},
  {"monitor-main-thunk", CVAR, &YevalSastYmonitor_main_thunk},
  {"<passive-program>", CVAR, &YevalSastYLpassive_programG},
  {"binding-index-setter", CVAR, &YevalSastYbinding_index_setter},
  {"<immediate-constant>", CVAR, &YevalSastYLimmediate_constantG},
  {"objectify-function-source", CVAR, &YevalSastYobjectify_function_source},
  {"unwind-protect-protected-thunk", CVAR, &YevalSastYunwind_protect_protected_thunk},
  {"$sexpr-%raw-tag", CVAR, &YevalSastYDsexpr_Praw_tag},
  {"objectify-use-mangle-module", CVAR, &YevalSastYobjectify_use_mangle_module},
  {"function-debug-name", CVAR, &YevalSastYfunction_debug_name},
  {"fix-let-bindings", CVAR, &YevalSastYfix_let_bindings},
  {"<raw-constant>", CVAR, &YevalSastYLraw_constantG},
  {"objectify-use/export-module", CVAR, &YevalSastYobjectify_useSexport_module},
  {"ast-define-binding", CVAR, &YevalSastYast_define_binding},
  {"<ast-method-definition>", CVAR, &YevalSastYLast_method_definitionG},
  {"---main-8---", PVAR, NULL},
  {"objectify", CVAR, &YevalSastYobjectify},
  {"unwind-protect-cleanup-thunk", CVAR, &YevalSastYunwind_protect_cleanup_thunk},
  {"<computed-program>", CVAR, &YevalSastYLcomputed_programG},
  {"sequential", CVAR, &YevalSastYsequential},
  {"<local-reference>", CVAR, &YevalSastYLlocal_referenceG},
  {"<macro-reference>", CVAR, &YevalSastYLmacro_referenceG},
  {"$sexpr-compile-time-also-tag", CVAR, &YevalSastYDsexpr_compile_time_also_tag},
  {"reference-called-function?", CVAR, &YevalSastYreference_called_functionQ},
  {"objectify-monitor", CVAR, &YevalSastYobjectify_monitor},
  {"<real-reference>", CVAR, &YevalSastYLreal_referenceG},
  {"<sequential>", CVAR, &YevalSastYLsequentialG},
  {"with-dependent", PVAR, NULL},
  {"---main-3---", PVAR, NULL},
  {"incf-ref-count", CVAR, &YevalSastYincf_ref_count},
  {"objectify-symbol", CVAR, &YevalSastYobjectify_symbol},
  {"compile-time-program", CVAR, &YevalSastYcompile_time_program},
  {"<global-reference>", CVAR, &YevalSastYLglobal_referenceG},
  {"special-use/export-module", CVAR, &YevalSastYspecial_useSexport_module},
  {"objectify-signature", CVAR, &YevalSastYobjectify_signature},
  {"foreign-name?", CVAR, &YevalSastYforeign_nameQ},
  {"function-inlineable?", CVAR, &YevalSastYfunction_inlineableQ},
  {"binding-closed-over?-setter", CVAR, &YevalSastYbinding_closed_overQ_setter},
  {"objectify-method-definition", CVAR, &YevalSastYobjectify_method_definition},
  {"loop-continue-setter", CVAR, &YevalSastYloop_continue_setter},
  {"compute-local-reference-offsets", CVAR, &YevalSastYcompute_local_reference_offsets},
  {"objectify-function-using", CVAR, &YevalSastYobjectify_function_using},
  {"<ast-method>", CVAR, &YevalSastYLast_methodG},
  {"install-interpreter-hacks", CVAR, &YevalSastYinstall_interpreter_hacks},
  {"bound?-reference-setter", CVAR, &YevalSastYboundQ_reference_setter},
  {"binding-mutable?-setter", CVAR, &YevalSastYbinding_mutableQ_setter},
  {"program-line", CVAR, &YevalSastYprogram_line},
  {"*magic-bindings*", CVAR, &YevalSastYTmagic_bindingsT},
  {"program-register", CVAR, &YevalSastYprogram_register},
  {"objectify-unwind-protect", CVAR, &YevalSastYobjectify_unwind_protect},
  {"<predefined-reference>", CVAR, &YevalSastYLpredefined_referenceG},
  {"objectify-c-inline", CVAR, &YevalSastYobjectify_c_inline},
  {"special-method", CVAR, &YevalSastYspecial_method},
  {"constant-value", CVAR, &YevalSastYconstant_value},
  {"special-define-function", CVAR, &YevalSastYspecial_define_function},
  {"expand-bind-element", CVAR, &YevalSastYexpand_bind_element},
  {"as-lst", CVAR, &YevalSastYas_lst},
  {"special-compile-time", CVAR, &YevalSastYspecial_compile_time},
  {"special-begin", CVAR, &YevalSastYspecial_begin},
  {"reference-called-function?-setter", CVAR, &YevalSastYreference_called_functionQ_setter},
  {"application-known?", CVAR, &YevalSastYapplication_knownQ},
  {"special-define-generic", CVAR, &YevalSastYspecial_define_generic},
  {"sequentialize", CVAR, &YevalSastYsequentialize},
  {"locals-body-setter", CVAR, &YevalSastYlocals_body_setter},
  {"function-binding", CVAR, &YevalSastYfunction_binding},
  {"signature-value", CVAR, &YevalSastYsignature_value},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<functions>", NULL},
  {"module-target-environment", NULL},
  {"function-registers", NULL},
  {"module-name-to-relpath", NULL},
  {"module-runtime-data-setter", NULL},
  {"<fix-let>", NULL},
  {"function-loop-setter", NULL},
  {"signature-arity-setter", NULL},
  {"loop-bindings-setter", NULL},
  {"<free-environment>", NULL},
  {"module-loader-stack", NULL},
  {"load-module", NULL},
  {"<application>", NULL},
  {"function-specs", NULL},
  {"locals-functions-setter", NULL},
  {"binding-free?", NULL},
  {"loop-body-setter", NULL},
  {"transaction-register-dependent", NULL},
  {"<dynamic-assignment>", NULL},
  {"global-box-value-setter", NULL},
  {"<namespace-error>", NULL},
  {"function-free-setter", NULL},
  {"<arguments>", NULL},
  {"objectify-quotation", NULL},
  {"binding-closed-over?-setter", NULL},
  {"module-mangled-name-setter", NULL},
  {"<ast-generic>", NULL},
  {"do-static-global-bindings", NULL},
  {"call-with-subtransaction", NULL},
  {"environment-allows-foreign-names?", NULL},
  {"fix-let-arguments-setter", NULL},
  {"<ast-primitive-definition>", NULL},
  {"binding-module-name", NULL},
  {"function-index", NULL},
  {"environment-module", NULL},
  {"binding-free?-setter", NULL},
  {"binding-info", NULL},
  {"module-transaction", NULL},
  {"process-closed-application", NULL},
  {"<bound?>", NULL},
  {"namespace-error", NULL},
  {"<bot>", NULL},
  {"<program>", NULL},
  {"constant-index", NULL},
  {"*current-subtransaction*", NULL},
  {"module-syntax-environment", NULL},
  {"<assignment>", NULL},
  {"bound?-reference", NULL},
  {"fix-let-body", NULL},
  {"<ast-embodied-function>", NULL},
  {"function-adjectives", NULL},
  {"module-data-processed?-setter", NULL},
  {"application-next-methods", NULL},
  {"module-mangled-string-name", NULL},
  {"bound?-default", NULL},
  {"fab-subset-environment", NULL},
  {"<module>", NULL},
  {"binding-type-setter", NULL},
  {"monitor-info", NULL},
  {"binding-kind-setter", NULL},
  {"binding-handler-setter", NULL},
  {"binding-prop-setter", NULL},
  {"function-names", NULL},
  {"<monitor>", NULL},
  {"loop-continue", NULL},
  {"transaction-register-implemented-binding", NULL},
  {"assignment-form", NULL},
  {"ast-error", NULL},
  {"$goo-boot-module-name", NULL},
  {"<runtime-reference>", NULL},
  {"binding-name", NULL},
  {"binding-module", NULL},
  {"<unwind-protect>", NULL},
  {"application-known?", NULL},
  {"module-runtime-data", NULL},
  {"<static-nul-environment>", NULL},
  {"module-uses-c-libraries", NULL},
  {"<local-assignment>", NULL},
  {"<loop>", NULL},
  {"find-environment-module", NULL},
  {"function-ref-count-setter", NULL},
  {"binding-dotted?-setter", NULL},
  {"free-environment", NULL},
  {"application-binding", NULL},
  {"remove-modules-by-name!", NULL},
  {"<module-loader>", NULL},
  {"function-loop", NULL},
  {"signature-arity", NULL},
  {"loop-bindings", NULL},
  {"c-inline-strs", NULL},
  {"<alternative>", NULL},
  {"locals-bindings-setter", NULL},
  {"locals-body", NULL},
  {"function-body-setter", NULL},
  {"locals-bindings", NULL},
  {"loop-body", NULL},
  {"global-box-value", NULL},
  {"alternative-condition", NULL},
  {"binding-closed-over?", NULL},
  {"<dynamic-definition>", NULL},
  {"$bot", NULL},
  {"module-mangled-name", NULL},
  {"locals-functions", NULL},
  {"insert-globals!", NULL},
  {"binding-mangled-name-setter", NULL},
  {"do-module-loader-modules", NULL},
  {"<locals>", NULL},
  {"ast-define-binding", NULL},
  {"fab-g2c-module", NULL},
  {"alternative-consequent", NULL},
  {"alternative-alternant", NULL},
  {"monitor-test", NULL},
  {"environment-module-loader", NULL},
  {"objectify-signature", NULL},
  {"function-bindings", NULL},
  {"def-programs", NULL},
  {"fix-let-arguments", NULL},
  {"<ast-macro-definition>", NULL},
  {"unchecked-runtime-environment", NULL},
  {"<loop-application>", NULL},
  {"binding-inferred-type-setter", NULL},
  {"<low-let>", NULL},
  {"roll-back-transaction", NULL},
  {"binding-index", NULL},
  {"fix-let-bindings-setter", NULL},
  {"c-inline-refs", NULL},
  {"<raw-constant>", NULL},
  {"install-initial-bindings", NULL},
  {"binding-value-setter", NULL},
  {"<ast-function>", NULL},
  {"module-data-processed?", NULL},
  {"signature-bindings-setter", NULL},
  {"<c-inline>", NULL},
  {"binding-locative-setter", NULL},
  {"signature-nary?", NULL},
  {"report-undefined-global-bindings", NULL},
  {"environment-next", NULL},
  {"binding-type", NULL},
  {"probe-module", NULL},
  {"frame-bindings", NULL},
  {"binding-kind", NULL},
  {"ast-evaluate", NULL},
  {"binding-prop", NULL},
  {"<module-binding-reference>", NULL},
  {"binding-global-box", NULL},
  {"program-type-setter", NULL},
  {"<fab-list>", NULL},
  {"with-subtransaction", NULL},
  {"ast-contains-fun?", NULL},
  {"module-uses-c-includes", NULL},
  {"fix-let-types", NULL},
  {"bind-exit-light?", NULL},
  {"<static-module-binding-reference>", NULL},
  {"environment-uses-modules", NULL},
  {"binding-global-box-setter", NULL},
  {"find-syntax-environment", NULL},
  {"<local-binding>", NULL},
  {"binding-info-setter", NULL},
  {"monitor-handler", NULL},
  {"function-ref-count", NULL},
  {"binding-dotted?", NULL},
  {"fab-static-global-environment", NULL},
  {"<static-local-environment>", NULL},
  {"register-referenced-binding", NULL},
  {"bind-exit-main-fun", NULL},
  {"<predefined-application>", NULL},
  {"c-inline-expr?", NULL},
  {"function-body", NULL},
  {"unwind-protect-cleanup-thunk", NULL},
  {"fix-let-types-setter", NULL},
  {"<definition>", NULL},
  {"insert-global!", NULL},
  {"function-frame-len-setter", NULL},
  {"import-global!", NULL},
  {"function-free", NULL},
  {"function-value", NULL},
  {"signature-specs", NULL},
  {"binding-mangled-name", NULL},
  {"%%%macro", NULL},
  {"function-source", NULL},
  {"function-signature", NULL},
  {"function-temporaries", NULL},
  {"program-register-setter", NULL},
  {"binding-dynamic-extent?", NULL},
  {"function-source-setter", NULL},
  {"application-arguments", NULL},
  {"function-temporaries-setter", NULL},
  {"<ast-signature>", NULL},
  {"binding-native-to?", NULL},
  {"<passive-program>", NULL},
  {"function-index-setter", NULL},
  {"binding-locative", NULL},
  {"binding-inferred-type", NULL},
  {"<binding>", NULL},
  {"<ast-primitive>", NULL},
  {"<programs>", NULL},
  {"signature-bindings", NULL},
  {"module-c-forms", NULL},
  {"signature-names", NULL},
  {"function-debug-name-setter", NULL},
  {"function-signature-setter", NULL},
  {"ast-walk", NULL},
  {"req-sig-specs", NULL},
  {"signature-value-setter", NULL},
  {"binding-mutable?", NULL},
  {"walk-bindings", NULL},
  {"<module-binding>", NULL},
  {"binding-value", NULL},
  {"load-in", NULL},
  {"reference-frame-offset", NULL},
  {"<local-reference>", NULL},
  {"reference-frame-number", NULL},
  {"assignment-binding", NULL},
  {"signature-names-setter", NULL},
  {"signature-specs-setter", NULL},
  {"signature-nary?-setter", NULL},
  {"init-environment-for-eval", NULL},
  {"runtime-environment", NULL},
  {"<regular-application>", NULL},
  {"function-inlineable?", NULL},
  {"program-type", NULL},
  {"environment-bindings", NULL},
  {"reference-binding", NULL},
  {"<global-box>", NULL},
  {"function-arity", NULL},
  {"objectify-with-subtransaction", NULL},
  {"application-function", NULL},
  {"register-module!", NULL},
  {"module-uses-c-files", NULL},
  {"application-tail?", NULL},
  {"do-named-static-global-bindings", NULL},
  {"<runtime-assignment>", NULL},
  {"function-registers-setter", NULL},
  {"init-ast", NULL},
  {"module-name", NULL},
  {"assignment-form-setter", NULL},
  {"set-module-environments", NULL},
  {"<method-application>", NULL},
  {"<bind-exit>", NULL},
  {"<compile-time>", NULL},
  {"as-lst", NULL},
  {"program-line", NULL},
  {"module-referenced-bindings", NULL},
  {"constant-value", NULL},
  {"binding-handler", NULL},
  {"<immediate-constant>", NULL},
  {"monitor-main-thunk", NULL},
  {"compile-time-program", NULL},
  {"binding-index-setter", NULL},
  {"function-frame-len", NULL},
  {"module-exports", NULL},
  {"unwind-protect-protected-thunk", NULL},
  {"function-debug-name", NULL},
  {"<dynamic-reference>", NULL},
  {"fix-let-bindings", NULL},
  {"env-object-name", NULL},
  {"application-known?-setter", NULL},
  {"<sequential>", NULL},
  {"program-register", NULL},
  {"runtime-module", NULL},
  {"zap-referenced-bindings!", NULL},
  {"export-binding!", NULL},
  {"<static-environment>", NULL},
  {"<macro-reference>", NULL},
  {"reference-called-function?", NULL},
  {"<real-reference>", NULL},
  {"find-static-global-environment", NULL},
  {"<global-reference>", NULL},
  {"<reference>", NULL},
  {"<static-global-environment>", NULL},
  {"<binding-name>", NULL},
  {"function-nary?", NULL},
  {"<global-assignment>", NULL},
  {"loop-continue-setter", NULL},
  {"monitor-type", NULL},
  {"<ast-method>", NULL},
  {"%%macro", NULL},
  {"ast-walk!", NULL},
  {"binding-dynamic-extent?-setter", NULL},
  {"<constant>", NULL},
  {"module-mangled-string-name-setter", NULL},
  {"fix-let-body-setter", NULL},
  {"*dynamic-compilation?*", NULL},
  {"def-list", NULL},
  {"reload-modules", NULL},
  {"application-loop", NULL},
  {"ensure-module-data", NULL},
  {"runtime-module-loader", NULL},
  {"<magic-reference>", NULL},
  {"reference-called-function?-setter", NULL},
  {"module-loader-module-type", NULL},
  {"import-and-mangle-global!", NULL},
  {"sequentialize", NULL},
  {"find-binding", NULL},
  {"locals-body-setter", NULL},
  {"<computed-program>", NULL},
  {"function-binding", NULL},
  {"signature-value", NULL},
  {"assignment-reference", NULL},
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
