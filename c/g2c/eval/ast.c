/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/ast */

DEF(YevalSastYexpand_pattern,"eval/ast","expand-pattern");
DEF(YevalSastYenvironment_uses_modules_setter,"eval/ast","environment-uses-modules-setter");
DEF(YevalSastYobjectify_function,"eval/ast","objectify-function");
EXT(YevalSdependencyYdependency_or,"eval/dependency","dependency-or");
DEF(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
DEF(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
DEF(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
DEF(YevalSastYmodule_data_processedQ_setter,"eval/ast","module-data-processed?-setter");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
DEF(YevalSastYset_module_environments,"eval/ast","set-module-environments");
DEF(YevalSastYfunction_body,"eval/ast","function-body");
DEF(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
DEF(YevalSastYobjectify_error,"eval/ast","objectify-error");
DEF(YevalSastYmonitor_info,"eval/ast","monitor-info");
DEF(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YPsnul,"goo/boot","%snul");
DEF(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
DEF(YevalSastYmodule_name_setter,"eval/ast","module-name-setter");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
DEF(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
DEF(YevalSastYspecial_def,"eval/ast","special-def");
EXT(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
DEF(YevalSastYreference_frame_offset_setter,"eval/ast","reference-frame-offset-setter");
DEF(YevalSastYbinding_mutableQ_setter,"eval/ast","binding-mutable?-setter");
DEF(YevalSastYspecial_let,"eval/ast","special-let");
DEF(YevalSastYspecial_bind_exit,"eval/ast","special-bind-exit");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
DEF(YevalSastYDsexpr_optionals_type_name,"eval/ast","$sexpr-optionals-type-name");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
DEF(YevalSastYspecial_boundQ,"eval/ast","special-bound?");
DEF(YevalSastYmodule_exports_setter,"eval/ast","module-exports-setter");
DEF(YevalSastYDfab_list_empty,"eval/ast","$fab-list-empty");
DEF(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
DEF(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
DEF(YevalSastYLast_functionG,"eval/ast","<ast-function>");
DEF(YevalSastYforeign_nameQ,"eval/ast","foreign-name?");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmagYLE,"goo/mag","<=");
DEF(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmathYrem,"goo/math","rem");
DEF(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
DEF(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
EXT(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
DEF(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YevalSdependencyYinvalidate_dependent,"eval/dependency","invalidate-dependent");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooStypesYtE,"goo/types","t=");
DEF(YevalSastYcompile_time_program_setter,"eval/ast","compile-time-program-setter");
DEF(YevalSastYobjectify_useSexport_module,"eval/ast","objectify-use/export-module");
DEF(YevalSastYspecial_define_method,"eval/ast","special-define-method");
DEF(YevalSastYtransaction_dependents,"eval/ast","transaction-dependents");
DEF(YevalSastYfunction_display_name,"eval/ast","function-display-name");
EXT(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
DEF(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(YevalSastYLfunctionsG,"eval/ast","<functions>");
DEF(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
DEF(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
EXT(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
DEF(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLchrG,"goo/boot","<chr>");
DEF(YevalSastYobjectify_application,"eval/ast","objectify-application");
DEF(YevalSastYDsexpr_use_module_tag,"eval/ast","$sexpr-use-module-tag");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
DEF(YevalSastYspecial_useSexport_module,"eval/ast","special-use/export-module");
DEF(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
DEF(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YevalSdependencyYdependency_emptyQ,"eval/dependency","dependency-empty?");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
EXT(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
EXT(YevalSdependencyYLdependency_typeG,"eval/dependency","<dependency-type>");
DEF(YevalSastYspecial_define_primitive,"eval/ast","special-define-primitive");
EXT(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
DEF(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
DEF(YevalSastYexport_bindingX,"eval/ast","export-binding!");
EXT(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
DEF(YevalSastYunwind_protect_protected_thunk_setter,"eval/ast","unwind-protect-protected-thunk-setter");
EXT(YgooSmathYS,"goo/math","/");
DEF(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
DEF(YevalSastYTcurrent_dependentT,"eval/ast","*current-dependent*");
DEF(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
DEF(YevalSastYreloader_do_runtime_binding,"eval/ast","reloader-do-runtime-binding");
DEF(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
DEF(YevalSastYTmacro_tracingQT,"eval/ast","*macro-tracing?*");
DEF(YevalSastYr_extendT,"eval/ast","r-extend*");
EXT(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
EXT(YgooStypesYall2Q,"goo/types","all2?");
DEF(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
DEF(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
DEF(YevalSastYDsequential_empty,"eval/ast","$sequential-empty");
DEF(YevalSastYobjectify_generic_definition,"eval/ast","objectify-generic-definition");
DEF(YevalSastYfunctions,"eval/ast","functions");
DEF(YevalSastYreloader_do_other_binding,"eval/ast","reloader-do-other-binding");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
DEF(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
DEF(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
DEF(YevalSastYprocess_nary_closed_application,"eval/ast","process-nary-closed-application");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
DEF(YevalSastYbinding_freeQ,"eval/ast","binding-free?");
DEF(YevalSastYspecial_macro_expand,"eval/ast","special-macro-expand");
EXT(Yprop_init,"goo/boot","prop-init");
DEF(YevalSastYLbinding_nameG,"eval/ast","<binding-name>");
DEF(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
DEF(YevalSastYLprogramG,"eval/ast","<program>");
DEF(YevalSastYreloader_do_create_module,"eval/ast","reloader-do-create-module");
EXT(Yerror,"goo/boot","error");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSmacrosYmap,"goo/macros","map");
DEF(YevalSastYmonitor_type_setter,"eval/ast","monitor-type-setter");
EXT(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(Yobject_class,"goo/boot","object-class");
DEF(YevalSastYDsexpr_compile_time_also_tag,"eval/ast","$sexpr-compile-time-also-tag");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
DEF(YevalSastYmodule_runtime_data,"eval/ast","module-runtime-data");
DEF(YevalSastYobjectify_function_definition,"eval/ast","objectify-function-definition");
EXT(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
DEF(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
DEF(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
DEF(YevalSastYexpand_bind_element,"eval/ast","expand-bind-element");
DEF(YevalSastYapplication_arguments_setter,"eval/ast","application-arguments-setter");
DEF(YevalSastYspecial_iterate,"eval/ast","special-iterate");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
DEF(YevalSastYbind_exit_main_fun_setter,"eval/ast","bind-exit-main-fun-setter");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
DEF(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
DEF(YevalSastYspecial_begin,"eval/ast","special-begin");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
DEF(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
DEF(YevalSastYPmodule_exports,"eval/ast","%module-exports");
EXT(YOall2Q,"goo/boot","@all2?");
DEF(YevalSastYDsexpr_boundQ_tag,"eval/ast","$sexpr-bound?-tag");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Ygen_refs,"goo/boot","gen-refs");
DEF(YevalSastYspecial_compile_time_also,"eval/ast","special-compile-time-also");
EXT(YgooSioSportYopen,"goo/io/port","open");
DEF(YevalSastYenvironment_module_setter,"eval/ast","environment-module-setter");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
DEF(YevalSastYspecial_prop,"eval/ast","special-prop");
EXT(YgooSruntimeYspread,"goo/runtime","spread");
DEF(YevalSastYspecial_method,"eval/ast","special-method");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
DEF(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
DEF(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
DEF(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
DEF(YevalSastYenvironment_module,"eval/ast","environment-module");
DEF(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
DEF(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
DEF(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
DEF(YevalSastYarguments,"eval/ast","arguments");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YLunionG,"goo/boot","<union>");
DEF(YevalSastYruntime_core_environment,"eval/ast","runtime-core-environment");
EXT(Ysig_specs,"goo/boot","sig-specs");
DEF(YevalSastYobjectify_boundQ,"eval/ast","objectify-bound?");
DEF(YevalSastYframe_bindings,"eval/ast","frame-bindings");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
DEF(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
DEF(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
DEF(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
DEF(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
EXT(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
EXT(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
DEF(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
DEF(YevalSastYas_lst,"eval/ast","as-lst");
DEF(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
DEF(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
DEF(YevalSastYinstall_interpreter_hacks,"eval/ast","install-interpreter-hacks");
DEF(YevalSastYalternative_alternant_setter,"eval/ast","alternative-alternant-setter");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
DEF(YevalSastYspecial_compile_time,"eval/ast","special-compile-time");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
DEF(YevalSastYspecial_define_class,"eval/ast","special-define-class");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
DEF(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
DEF(YevalSastYTcurrent_subtransactionT,"eval/ast","*current-subtransaction*");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
DEF(YevalSastYenvironment_module_loader,"eval/ast","environment-module-loader");
DEF(YevalSastYspecial_Praw,"eval/ast","special-%raw");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
DEF(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
DEF(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
DEF(YevalSastYexpand_bind_list,"eval/ast","expand-bind-list");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YLtupG,"goo/boot","<tup>");
DEF(YevalSastYmagic_bindings,"eval/ast","magic-bindings");
DEF(YevalSastYroll_back_transaction,"eval/ast","roll-back-transaction");
DEF(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
DEF(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YOlst,"goo/boot","@lst");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YOanyQ,"goo/boot","@any?");
DEF(YevalSastYftype,"eval/ast","ftype");
DEF(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalSdependencyYDoptimizaton_dependencies,"eval/dependency","$optimizaton-dependencies");
DEF(YevalSastYinstall_magic_bindings,"eval/ast","install-magic-bindings");
EXT(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
DEF(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
DEF(YevalSastYfab_subset_environment,"eval/ast","fab-subset-environment");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
DEF(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
DEF(YevalSastYunwind_protect_cleanup_thunk_setter,"eval/ast","unwind-protect-cleanup-thunk-setter");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
DEF(YevalSastYLpredefined_referenceG,"eval/ast","<predefined-reference>");
EXT(YLlogG,"goo/boot","<log>");
DEF(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
DEF(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
DEF(YevalSastYalternative_condition_setter,"eval/ast","alternative-condition-setter");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
DEF(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
DEF(YevalSastYast_macro_expand,"eval/ast","ast-macro-expand");
DEF(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YgooSmathYlog,"goo/math","log");
DEF(YevalSastYimport_globalX,"eval/ast","import-global!");
EXT(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
DEF(YevalSastYspecial_quasiquote,"eval/ast","special-quasiquote");
DEF(YevalSastYtransaction_emptyQ,"eval/ast","transaction-empty?");
DEF(YevalSastYfab_syntax_environment,"eval/ast","fab-syntax-environment");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(Yhead,"goo/boot","head");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
DEF(YevalSastYinit_g2c_regular_environment,"eval/ast","init-g2c-regular-environment");
EXT(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
DEF(YevalSastYmonitor_handler_setter,"eval/ast","monitor-handler-setter");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YDmin_int,"goo/boot","$min-int");
DEF(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
DEF(YevalSastYLast_generic_definitionG,"eval/ast","<ast-generic-definition>");
DEF(YevalSastYobjectify_unwind_protect,"eval/ast","objectify-unwind-protect");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
DEF(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
DEF(YevalSastYobjectify_foreign_reference,"eval/ast","objectify-foreign-reference");
EXT(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
EXT(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
DEF(YevalSastYsignature_specs,"eval/ast","signature-specs");
DEF(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
DEF(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
DEF(YevalSastYDfree_environment_empty,"eval/ast","$free-environment-empty");
DEF(YevalSastYmonitor_info_setter,"eval/ast","monitor-info-setter");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YevalSdependencyYdetach_dependent,"eval/dependency","detach-dependent");
DEF(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YevalSdependencyYdependency_and,"eval/dependency","dependency-and");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
DEF(YevalSastYsyntax_environment_excluded_bindings,"eval/ast","syntax-environment-excluded-bindings");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
EXT(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
EXT(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
DEF(YevalSastYfab_static_global_environment,"eval/ast","fab-static-global-environment");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
DEF(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
DEF(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
DEF(YevalSastYmodule_loader_stack_setter,"eval/ast","module-loader-stack-setter");
DEF(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
DEF(YevalSastYmodule_data_processedQ,"eval/ast","module-data-processed?");
EXT(Yfind_setter,"goo/boot","find-setter");
DEF(YevalSastYassignment_form,"eval/ast","assignment-form");
DEF(YevalSastYspecial_quote,"eval/ast","special-quote");
EXT(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
DEF(YevalSastYLruntime_module_loaderG,"eval/ast","<runtime-module-loader>");
EXT(YPrnul,"goo/boot","%rnul");
DEF(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
DEF(YevalSastYobjectify_alternative,"eval/ast","objectify-alternative");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmathYabs,"goo/math","abs");
DEF(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
DEF(YevalSastYexpand_bind_listT,"eval/ast","expand-bind-list*");
DEF(YevalSastYreloader_do_export,"eval/ast","reloader-do-export");
EXT(YgooSmathY1A,"goo/math","1+");
DEF(YevalSastYfab_list,"eval/ast","fab-list");
EXT(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooStypesYanyQ,"goo/types","any?");
DEF(YevalSastYfind_syntax_environment,"eval/ast","find-syntax-environment");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
DEF(YevalSastYDsexpr_Praw_tag,"eval/ast","$sexpr-%raw-tag");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YevalSdependencyYdependency_includes_allQ,"eval/dependency","dependency-includes-all?");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
DEF(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
DEF(YevalSastYobjectify_free_global_reference,"eval/ast","objectify-free-global-reference");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSmapYfab_map,"goo/cols/map","fab-map");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Ynil,"goo/boot","nil");
EXT(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
DEF(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
DEF(YevalSastYPmodule_exports_setter,"eval/ast","%module-exports-setter");
EXT(YgooStypesYlen,"goo/types","len");
DEF(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
DEF(YevalSastYLalternativeG,"eval/ast","<alternative>");
DEF(YevalSastYapplication_function_setter,"eval/ast","application-function-setter");
DEF(YevalSastYcompute_local_reference_offsets,"eval/ast","compute-local-reference-offsets");
DEF(YevalSastYreload_macros,"eval/ast","reload-macros");
DEF(YevalSastYbinding_freeQ_setter,"eval/ast","binding-free?-setter");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
DEF(YevalSastYspecial_define,"eval/ast","special-define");
DEF(YevalSastYLstatic_environmentG,"eval/ast","<static-environment>");
EXT(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
DEF(YevalSastYfunction_binding_setter,"eval/ast","function-binding-setter");
DEF(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
DEF(YevalSastYspecial_define_generic,"eval/ast","special-define-generic");
DEF(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
DEF(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSioSwriteYdisplay,"goo/io/write","display");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
EXT(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
EXT(Ytup,"goo/boot","tup");
EXT(YevalSdependencyYfind_dependency,"eval/dependency","find-dependency");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
DEF(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
DEF(YevalSastYmodule_target_environment_setter,"eval/ast","module-target-environment-setter");
EXT(Yclass_descendents,"goo/boot","class-descendents");
DEF(YevalSastYapplication_arguments,"eval/ast","application-arguments");
DEF(YevalSastYload_and_register_module,"eval/ast","load-and-register-module");
DEF(YevalSastYLvariable_definitionG,"eval/ast","<variable-definition>");
DEF(YevalSastYspecial_set,"eval/ast","special-set");
DEF(YevalSastYobjectify_assignment_using,"eval/ast","objectify-assignment-using");
EXT(YevalSdependencyYDexpansion_parse_dependency,"eval/dependency","$expansion-parse-dependency");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
EXT(YgooSmathYceil,"goo/math","ceil");
DEF(YevalSastYspecial_if,"eval/ast","special-if");
EXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
DEF(YevalSastYfix_let_types,"eval/ast","fix-let-types");
DEF(YevalSastYassignment_binding_setter,"eval/ast","assignment-binding-setter");
DEF(YevalSastYbinding_reference_class,"eval/ast","binding-reference-class");
DEF(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
DEF(YevalSastYobjectify_definition,"eval/ast","objectify-definition");
DEF(YevalSastYspecial_unwind_protect,"eval/ast","special-unwind-protect");
EXT(YgooSioSportYout,"goo/io/port","out");
DEF(YevalSastYobjectify_raw,"eval/ast","objectify-raw");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
DEF(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
EXT(YgooSmathYNE,"goo/math","~=");
DEF(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
DEF(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
DEF(YevalSastYtransaction_implemented_bindings,"eval/ast","transaction-implemented-bindings");
DEF(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
DEF(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(Ylst,"goo/boot","lst");
DEF(YevalSastYDsexpr_compile_time_tag,"eval/ast","$sexpr-compile-time-tag");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
DEF(YevalSastYenvironment_bindings_setter,"eval/ast","environment-bindings-setter");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YgooSmathYT,"goo/math","*");
DEF(YevalSastYmonitor_test_setter,"eval/ast","monitor-test-setter");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
DEF(YevalSastYmaybe_log_dependency,"eval/ast","maybe-log-dependency");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
DEF(YevalSastYmodule_loader_modules,"eval/ast","module-loader-modules");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
DEF(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
DEF(YevalSastYfunction_value,"eval/ast","function-value");
DEF(YevalSastYconstant_value_setter,"eval/ast","constant-value-setter");
DEF(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
DEF(YevalSastYexpand_syntax_if,"eval/ast","expand-syntax-if");
EXT(Ysig_names,"goo/boot","sig-names");
DEF(YevalSastYLstatic_empty_environmentG,"eval/ast","<static-empty-environment>");
DEF(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYbitQ,"goo/math","bit?");
DEF(YevalSastYbinding_locative,"eval/ast","binding-locative");
DEF(YevalSastYtransaction_register_dependent,"eval/ast","transaction-register-dependent");
DEF(YevalSastYmerge_transactionsX,"eval/ast","merge-transactions!");
DEF(YevalSastYinsert_globalsX,"eval/ast","insert-globals!");
DEF(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(Yfind_getter,"goo/boot","find-getter");
DEF(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
DEF(YevalSastYLreferenceG,"eval/ast","<reference>");
DEF(YevalSastYLtransactionG,"eval/ast","<transaction>");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
DEF(YevalSastYbinding_name_setter,"eval/ast","binding-name-setter");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
DEF(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YgooSmathYupperQ,"goo/math","upper?");
DEF(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");
DEF(YevalSastYmodule_transaction_setter,"eval/ast","module-transaction-setter");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
DEF(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
DEF(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
DEF(YevalSastYenvironment_allows_foreign_namesQ,"eval/ast","environment-allows-foreign-names?");
DEF(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
DEF(YevalSastYfind_static_global_environment,"eval/ast","find-static-global-environment");
DEF(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
DEF(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
DEF(YevalSastYprogram_register,"eval/ast","program-register");
DEF(YevalSastYobjectify_locals,"eval/ast","objectify-locals");
DEF(YevalSastYbinding_handler_setter,"eval/ast","binding-handler-setter");
EXT(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
DEF(YevalSastYLmoduleG,"eval/ast","<module>");
DEF(YevalSastYregister_magic_binding,"eval/ast","register-magic-binding");
DEF(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
DEF(YevalSastYfind_binding,"eval/ast","find-binding");
DEF(YevalSastYobjectify_function_source,"eval/ast","objectify-function-source");
DEF(YevalSastYcall_with_subtransaction,"eval/ast","call-with-subtransaction");
EXT(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
DEF(YevalSastYobjectify_sequential,"eval/ast","objectify-sequential");
DEF(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
DEF(YevalSastYTmagic_bindingsT,"eval/ast","*magic-bindings*");
EXT(Ysig_arity,"goo/boot","sig-arity");
DEF(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
DEF(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
DEF(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
DEF(YevalSastYruntime_environment,"eval/ast","runtime-environment");
DEF(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
DEF(YevalSastYlocals_body,"eval/ast","locals-body");
DEF(YevalSastYreloader_do_use_module,"eval/ast","reloader-do-use-module");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
DEF(YevalSastYobjectify_syntax_definition,"eval/ast","objectify-syntax-definition");
DEF(YevalSastYupdate_binding_kind,"eval/ast","update-binding-kind");
DEF(YevalSastYLfab_listG,"eval/ast","<fab-list>");
DEF(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
DEF(YevalSastYspecial_syntax_if,"eval/ast","special-syntax-if");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
DEF(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YgooSmathYposQ,"goo/math","pos?");
DEF(YevalSastYapplication_binding_setter,"eval/ast","application-binding-setter");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
DEF(YevalSastYobjectify_symbol,"eval/ast","objectify-symbol");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
DEF(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
DEF(YevalSastYLast_method_definitionG,"eval/ast","<ast-method-definition>");
DEF(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
DEF(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
DEF(YevalSastYassignment_reference_setter,"eval/ast","assignment-reference-setter");
EXT(YgooSmathY_,"goo/math","-");
EXT(Ysym_name,"goo/boot","sym-name");
DEF(YevalSastYtransaction_register_implemented_binding,"eval/ast","transaction-register-implemented-binding");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
DEF(YevalSastYassignment_reference,"eval/ast","assignment-reference");
DEF(YevalSastYconstant_value,"eval/ast","constant-value");
DEF(YevalSastYDsexpr_export_tag,"eval/ast","$sexpr-export-tag");
DEF(YevalSastYruntime_module_loader,"eval/ast","runtime-module-loader");
EXT(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
DEF(YevalSastYenvironment_next_setter,"eval/ast","environment-next-setter");
DEF(YevalSastYfunction_bindings,"eval/ast","function-bindings");
DEF(YevalSastYfunction_specs,"eval/ast","function-specs");
DEF(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
DEF(YevalSastYfunction_kind,"eval/ast","function-kind");
DEF(YevalSastYbinding_module_setter,"eval/ast","binding-module-setter");
EXT(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
DEF(YevalSastYbinding_info,"eval/ast","binding-info");
DEF(YevalSastYreload_modules,"eval/ast","reload-modules");
DEF(YevalSastYconvert2arguments,"eval/ast","convert2arguments");
DEF(YevalSastYobjectify_primitive_definition,"eval/ast","objectify-primitive-definition");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YPtnul,"goo/boot","%tnul");
DEF(YevalSastYobjectify_assignment,"eval/ast","objectify-assignment");
DEF(YevalSastYapplication_tailQ_setter,"eval/ast","application-tail?-setter");
DEF(YevalSastYbinding_kind_setter,"eval/ast","binding-kind-setter");
EXT(YPsymbols,"goo/boot","%symbols");
DEF(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YgooSmathYpow,"goo/math","pow");
DEF(YevalSastYmonitor_main_thunk_setter,"eval/ast","monitor-main-thunk-setter");
DEF(YevalSastYTnow_rt_envT,"eval/ast","*now-rt-env*");
EXT(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
EXT(YevalSdependencyYinvalidate_dependents,"eval/dependency","invalidate-dependents");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
DEF(YevalSastYmodule_runtime_data_setter,"eval/ast","module-runtime-data-setter");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(Ytype_elts,"goo/boot","type-elts");
DEF(YevalSastYtransform_defs,"eval/ast","transform-defs");
DEF(YevalSastYobjectify_use_module,"eval/ast","objectify-use-module");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
DEF(YevalSastYmodule_syntax_environment_setter,"eval/ast","module-syntax-environment-setter");
EXT(YgooStypesYas,"goo/types","as");
DEF(YevalSastYLmonitorG,"eval/ast","<monitor>");
DEF(YevalSastYspecial_define_syntax,"eval/ast","special-define-syntax");
DEF(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
DEF(YevalSastYmodule_transaction,"eval/ast","module-transaction");
DEF(YevalSastYinit_g2c_boot_environment,"eval/ast","init-g2c-boot-environment");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSioSportYput,"goo/io/port","put");
DEF(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
DEF(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YgooSmathYC,"goo/math","^");
DEF(YevalSastYDsexpr_define_static_syntax_tag,"eval/ast","$sexpr-define-static-syntax-tag");
EXT(YgooSmathYatan2,"goo/math","atan2");
DEF(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
DEF(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
DEF(YevalSastYobjectify_monitor,"eval/ast","objectify-monitor");
EXT(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
DEF(YevalSastYtransaction_dependents_setter,"eval/ast","transaction-dependents-setter");
EXT(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
DEF(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
DEF(YevalSastYreference_binding_setter,"eval/ast","reference-binding-setter");
DEF(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
DEF(YevalSastYmodule_loader_stack,"eval/ast","module-loader-stack");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
DEF(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSioSportYget,"goo/io/port","get");
DEF(YevalSastYapplication_next_methods_setter,"eval/ast","application-next-methods-setter");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
DEF(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
DEF(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YevalSdependencyYDvalue_optimization_dependency,"eval/dependency","$value-optimization-dependency");
DEF(YevalSastYDsexpr_optionals_tag,"eval/ast","$sexpr-optionals-tag");
DEF(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yprop_setter,"goo/boot","prop-setter");
DEF(YevalSastYDsexpr_useSexport_module_tag,"eval/ast","$sexpr-use/export-module-tag");
DEF(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
DEF(YevalSastYobjectify_bind_exit,"eval/ast","objectify-bind-exit");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
DEF(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
DEF(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
DEF(YevalSastYload_module,"eval/ast","load-module");
DEF(YevalSastYprobe_module,"eval/ast","probe-module");
DEF(YevalSastYsignature_names,"eval/ast","signature-names");
DEF(YevalSastYobjectify_compile_time,"eval/ast","objectify-compile-time");
EXT(YgooSmathYneg,"goo/math","neg");
DEF(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YLmetG,"goo/boot","<met>");
DEF(YevalSastYmacro_expander,"eval/ast","macro-expander");
EXT(YgooSmathYfabs,"goo/math","fabs");
DEF(YevalSastYTrecord_sourceQT,"eval/ast","*record-source?*");
EXT(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
DEF(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
DEF(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YevalSdependencyYDall_dependency_types,"eval/dependency","$all-dependency-types");
DEF(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmathYto_str,"goo/math","to-str");
DEF(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
DEF(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
DEF(YevalSastYpairize,"eval/ast","pairize");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
DEF(YevalSastYboundQ_reference_setter,"eval/ast","bound?-reference-setter");
DEF(YevalSastYLassignmentG,"eval/ast","<assignment>");
DEF(YevalSastYLdefinitionG,"eval/ast","<definition>");
DEF(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
DEF(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooSmagYGE,"goo/mag",">=");
DEF(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
DEF(YevalSastYDfunctions_empty,"eval/ast","$functions-empty");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
DEF(YevalSastYinit_runtime,"eval/ast","init-runtime");
EXT(Ynew,"goo/boot","new");
EXT(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
DEF(YevalSastYobjectify_method_definition,"eval/ast","objectify-method-definition");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
DEF(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
DEF(YevalSastYobjectify,"eval/ast","objectify");
DEF(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
DEF(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
DEF(YevalSastYLmethod_applicationG,"eval/ast","<method-application>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
DEF(YevalSastYDempty_static_environment,"eval/ast","$empty-static-environment");
EXT(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
DEF(YevalSastYspecial_define_function,"eval/ast","special-define-function");
EXT(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
DEF(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
DEF(YevalSastYprocess_module_data,"eval/ast","process-module-data");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
DEF(YevalSastYspecial_use_module,"eval/ast","special-use-module");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
DEF(YevalSastYobjectify_list,"eval/ast","objectify-list");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
DEF(YevalSastYenvironment_module_loader_setter,"eval/ast","environment-module-loader-setter");
DEF(YevalSastYdefault_type,"eval/ast","default-type");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSpackerYpacker,"goo/packer","packer");
DEF(YevalSastYmodule_binding,"eval/ast","module-binding");
DEF(YevalSastYLast_function_definitionG,"eval/ast","<ast-function-definition>");
DEF(YevalSastYspecial_export,"eval/ast","special-export");
EXT(Yfun_mets,"goo/boot","fun-mets");
DEF(YevalSastYreloader_do_import,"eval/ast","reloader-do-import");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
DEF(YevalSastYast_LbotG,"eval/ast","ast-<bot>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
EXT(YevalSdependencyYDparse_dependencies,"eval/dependency","$parse-dependencies");
DEF(YevalSastYDsexpr_define_primitive_tag,"eval/ast","$sexpr-define-primitive-tag");
DEF(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
DEF(YevalSastYsequential,"eval/ast","sequential");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmathYE,"goo/math","=");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
DEF(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
DEF(YevalSastYinsert_globalX,"eval/ast","insert-global!");
DEF(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YevalSdependencyYLdependableG,"eval/dependency","<dependable>");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YevalSdependencyYLdependentG,"eval/dependency","<dependent>");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YevalSdependencyYdependency_includes_anyQ,"eval/dependency","dependency-includes-any?");
EXT(YgooSmathYN,"goo/math","~");
DEF(YevalSastYbinding_type,"eval/ast","binding-type");
DEF(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
DEF(YevalSastYalternative_consequent_setter,"eval/ast","alternative-consequent-setter");
DEF(YevalSastYreference_frame_number_setter,"eval/ast","reference-frame-number-setter");
DEF(YevalSastYobjectify_binding,"eval/ast","objectify-binding");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
DEF(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Ynot,"goo/boot","not");
DEF(YevalSastYmonitor_test,"eval/ast","monitor-test");
DEF(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
DEF(YevalSastYbinding_handler,"eval/ast","binding-handler");
DEF(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
DEF(YevalSastYapplication_next_methods,"eval/ast","application-next-methods");
EXT(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
EXT(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
DEF(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
DEF(YevalSastYLstatic_local_environmentG,"eval/ast","<static-local-environment>");
EXT(Ygen_src,"goo/boot","gen-src");
DEF(YevalSastYcompute_transitive_users,"eval/ast","compute-transitive-users");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
DEF(YevalSastYTruntime_module_loaderT,"eval/ast","*runtime-module-loader*");
DEF(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YPprop,"goo/boot","%prop");
DEF(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
DEF(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
DEF(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
DEF(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
DEF(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
DEF(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
DEF(YevalSastYspecial_monitor,"eval/ast","special-monitor");
EXT(YLtypeG,"goo/boot","<type>");
DEF(YevalSastYruntime_module,"eval/ast","runtime-module");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
DEF(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
DEF(YevalSastYensure_module_data,"eval/ast","ensure-module-data");
DEF(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
DEF(YevalSastYspecial_locals,"eval/ast","special-locals");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
DEF(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
DEF(YevalSastYLargumentsG,"eval/ast","<arguments>");
DEF(YevalSastYregister_moduleX,"eval/ast","register-module!");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YevalSdependencyYDname_parse_dependency,"eval/dependency","$name-parse-dependency");
EXT(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
DEF(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YPPmacro,"goo/boot","%%macro");
DEF(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
DEF(YevalSastYDarguments_empty,"eval/ast","$arguments-empty");
DEF(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
DEF(YevalSastYremove_module_internalX,"eval/ast","remove-module-internal!");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
DEF(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
DEF(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
DEF(YevalSastYspecial_define_static_syntax,"eval/ast","special-define-static-syntax");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
DEF(YevalSastYenvironment_next,"eval/ast","environment-next");
DEF(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
DEF(YevalSastYenvironment_allows_foreign_namesQ_setter,"eval/ast","environment-allows-foreign-names?-setter");
DEF(YevalSastYload_in,"eval/ast","load-in");
DEF(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
DEF(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSdependencyYDempty_dependency,"eval/dependency","$empty-dependency");
DEF(YevalSastYobjectify_export,"eval/ast","objectify-export");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
DEF(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
DEF(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
DEF(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
DEF(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
DEF(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
DEF(YevalSastYtransaction_implemented_bindings_setter,"eval/ast","transaction-implemented-bindings-setter");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Yunexec,"goo/boot","unexec");
EXT(YevalSdependencyYlog_dependency,"eval/dependency","log-dependency");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
DEF(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(Yprop_value,"goo/boot","prop-value");
DEF(YevalSastYmodule_loader_modules_setter,"eval/ast","module-loader-modules-setter");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_417);
DEFLIT(lit_352);
DEFLIT(lit_429);
DEFLIT(lit_435);
DEFLIT(lit_210);
DEFLIT(lit_505);
DEFLIT(lit_527);
DEFLIT(lit_260);
DEFLIT(lit_167);
DEFLIT(lit_13);
DEFLIT(lit_111);
DEFLIT(lit_170);
DEFLIT(lit_509);
DEFLIT(lit_157);
DEFLIT(lit_216);
DEFLIT(lit_399);
DEFLIT(lit_377);
DEFLIT(lit_79);
DEFLIT(lit_59);
DEFLIT(lit_7);
DEFLIT(lit_312);
DEFLIT(lit_427);
DEFLIT(lit_122);
DEFLIT(lit_164);
DEFLIT(lit_144);
DEFLIT(lit_305);
DEFLIT(lit_117);
DEFLIT(lit_106);
DEFLIT(lit_217);
DEFLIT(lit_112);
DEFLIT(lit_460);
DEFLIT(lit_103);
DEFLIT(lit_165);
DEFLIT(lit_135);
DEFLIT(lit_162);
DEFLIT(lit_68);
DEFLIT(lit_403);
DEFLIT(lit_481);
DEFLIT(lit_131);
DEFLIT(lit_180);
DEFLIT(lit_381);
DEFLIT(lit_558);
DEFLIT(lit_34);
DEFLIT(lit_58);
DEFLIT(lit_187);
DEFLIT(lit_228);
DEFLIT(lit_335);
DEFLIT(lit_541);
DEFLIT(lit_116);
DEFLIT(lit_120);
DEFLIT(lit_71);
DEFLIT(lit_300);
DEFLIT(lit_230);
DEFLIT(lit_389);
DEFLIT(lit_213);
DEFLIT(lit_586);
DEFLIT(lit_492);
DEFLIT(lit_257);
DEFLIT(lit_349);
DEFLIT(lit_30);
DEFLIT(lit_323);
DEFLIT(lit_475);
DEFLIT(lit_450);
DEFLIT(lit_247);
DEFLIT(lit_151);
DEFLIT(lit_235);
DEFLIT(lit_21);
DEFLIT(lit_550);
DEFLIT(lit_136);
DEFLIT(lit_264);
DEFLIT(lit_148);
DEFLIT(lit_424);
DEFLIT(lit_594);
DEFLIT(lit_361);
DEFLIT(lit_33);
DEFLIT(lit_345);
DEFLIT(lit_580);
DEFLIT(lit_39);
DEFLIT(lit_160);
DEFLIT(lit_539);
DEFLIT(lit_538);
DEFLIT(lit_304);
DEFLIT(lit_542);
DEFLIT(lit_44);
DEFLIT(lit_283);
DEFLIT(lit_172);
DEFLIT(lit_62);
DEFLIT(lit_17);
DEFLIT(lit_569);
DEFLIT(lit_236);
DEFLIT(lit_252);
DEFLIT(lit_311);
DEFLIT(lit_480);
DEFLIT(lit_522);
DEFLIT(lit_596);
DEFLIT(lit_339);
DEFLIT(lit_104);
DEFLIT(lit_413);
DEFLIT(lit_209);
DEFLIT(lit_441);
DEFLIT(lit_423);
DEFLIT(lit_535);
DEFLIT(lit_337);
DEFLIT(lit_244);
DEFLIT(lit_322);
DEFLIT(lit_190);
DEFLIT(lit_194);
DEFLIT(lit_518);
DEFLIT(lit_489);
DEFLIT(lit_469);
DEFLIT(lit_582);
DEFLIT(lit_544);
DEFLIT(lit_1);
DEFLIT(lit_268);
DEFLIT(lit_422);
DEFLIT(lit_139);
DEFLIT(lit_453);
DEFLIT(lit_259);
DEFLIT(lit_35);
DEFLIT(lit_27);
DEFLIT(lit_23);
DEFLIT(lit_570);
DEFLIT(lit_306);
DEFLIT(lit_184);
DEFLIT(lit_173);
DEFLIT(lit_410);
DEFLIT(lit_374);
DEFLIT(lit_391);
DEFLIT(lit_49);
DEFLIT(lit_289);
DEFLIT(lit_555);
DEFLIT(lit_321);
DEFLIT(lit_333);
DEFLIT(lit_239);
DEFLIT(lit_134);
DEFLIT(lit_498);
DEFLIT(lit_93);
DEFLIT(lit_113);
DEFLIT(lit_96);
DEFLIT(lit_203);
DEFLIT(lit_70);
DEFLIT(lit_207);
DEFLIT(lit_163);
DEFLIT(lit_175);
DEFLIT(lit_183);
DEFLIT(lit_565);
DEFLIT(lit_561);
DEFLIT(lit_197);
DEFLIT(lit_396);
DEFLIT(lit_273);
DEFLIT(lit_583);
DEFLIT(lit_269);
DEFLIT(lit_491);
DEFLIT(lit_231);
DEFLIT(lit_50);
DEFLIT(lit_433);
DEFLIT(lit_63);
DEFLIT(lit_224);
DEFLIT(lit_280);
DEFLIT(lit_354);
DEFLIT(lit_284);
DEFLIT(lit_392);
DEFLIT(lit_416);
DEFLIT(lit_107);
DEFLIT(lit_379);
DEFLIT(lit_94);
DEFLIT(lit_540);
DEFLIT(lit_359);
DEFLIT(lit_549);
DEFLIT(lit_18);
DEFLIT(lit_350);
DEFLIT(lit_202);
DEFLIT(lit_385);
DEFLIT(lit_556);
DEFLIT(lit_147);
DEFLIT(lit_16);
DEFLIT(lit_249);
DEFLIT(lit_286);
DEFLIT(lit_83);
DEFLIT(lit_229);
DEFLIT(lit_508);
DEFLIT(lit_436);
DEFLIT(lit_193);
DEFLIT(lit_250);
DEFLIT(lit_564);
DEFLIT(lit_470);
DEFLIT(lit_84);
DEFLIT(lit_400);
DEFLIT(lit_488);
DEFLIT(lit_490);
DEFLIT(lit_477);
DEFLIT(lit_158);
DEFLIT(lit_464);
DEFLIT(lit_161);
DEFLIT(lit_503);
DEFLIT(lit_442);
DEFLIT(lit_295);
DEFLIT(lit_105);
DEFLIT(lit_9);
DEFLIT(lit_99);
DEFLIT(lit_110);
DEFLIT(lit_562);
DEFLIT(lit_0);
DEFLIT(lit_292);
DEFLIT(lit_200);
DEFLIT(lit_212);
DEFLIT(lit_150);
DEFLIT(lit_254);
DEFLIT(lit_511);
DEFLIT(lit_179);
DEFLIT(lit_478);
DEFLIT(lit_328);
DEFLIT(lit_497);
DEFLIT(lit_298);
DEFLIT(lit_307);
DEFLIT(lit_320);
DEFLIT(lit_590);
DEFLIT(lit_14);
DEFLIT(lit_347);
DEFLIT(lit_278);
DEFLIT(lit_559);
DEFLIT(lit_115);
DEFLIT(lit_484);
DEFLIT(lit_528);
DEFLIT(lit_153);
DEFLIT(lit_51);
DEFLIT(lit_463);
DEFLIT(lit_521);
DEFLIT(lit_520);
DEFLIT(lit_88);
DEFLIT(lit_143);
DEFLIT(lit_434);
DEFLIT(lit_19);
DEFLIT(lit_29);
DEFLIT(lit_552);
DEFLIT(lit_499);
DEFLIT(lit_572);
DEFLIT(lit_563);
DEFLIT(lit_246);
DEFLIT(lit_546);
DEFLIT(lit_357);
DEFLIT(lit_233);
DEFLIT(lit_219);
DEFLIT(lit_77);
DEFLIT(lit_428);
DEFLIT(lit_317);
DEFLIT(lit_543);
DEFLIT(lit_297);
DEFLIT(lit_262);
DEFLIT(lit_553);
DEFLIT(lit_85);
DEFLIT(lit_373);
DEFLIT(lit_372);
DEFLIT(lit_451);
DEFLIT(lit_332);
DEFLIT(lit_402);
DEFLIT(lit_191);
DEFLIT(lit_362);
DEFLIT(lit_531);
DEFLIT(lit_294);
DEFLIT(lit_261);
DEFLIT(lit_119);
DEFLIT(lit_171);
DEFLIT(lit_342);
DEFLIT(lit_526);
DEFLIT(lit_251);
DEFLIT(lit_452);
DEFLIT(lit_461);
DEFLIT(lit_55);
DEFLIT(lit_74);
DEFLIT(lit_60);
DEFLIT(lit_576);
DEFLIT(lit_15);
DEFLIT(lit_523);
DEFLIT(lit_515);
DEFLIT(lit_208);
DEFLIT(lit_516);
DEFLIT(lit_537);
DEFLIT(lit_98);
DEFLIT(lit_243);
DEFLIT(lit_344);
DEFLIT(lit_358);
DEFLIT(lit_319);
DEFLIT(lit_493);
DEFLIT(lit_133);
DEFLIT(lit_226);
DEFLIT(lit_369);
DEFLIT(lit_327);
DEFLIT(lit_288);
DEFLIT(lit_496);
DEFLIT(lit_502);
DEFLIT(lit_38);
DEFLIT(lit_206);
DEFLIT(lit_140);
DEFLIT(lit_510);
DEFLIT(lit_414);
DEFLIT(lit_265);
DEFLIT(lit_473);
DEFLIT(lit_472);
DEFLIT(lit_256);
DEFLIT(lit_500);
DEFLIT(lit_366);
DEFLIT(lit_271);
DEFLIT(lit_419);
DEFLIT(lit_54);
DEFLIT(lit_506);
DEFLIT(lit_589);
DEFLIT(lit_128);
DEFLIT(lit_291);
DEFLIT(lit_393);
DEFLIT(lit_275);
DEFLIT(lit_132);
DEFLIT(lit_178);
DEFLIT(lit_482);
DEFLIT(lit_156);
DEFLIT(lit_418);
DEFLIT(lit_426);
DEFLIT(lit_221);
DEFLIT(lit_8);
DEFLIT(lit_437);
DEFLIT(lit_69);
DEFLIT(lit_513);
DEFLIT(lit_28);
DEFLIT(lit_61);
DEFLIT(lit_363);
DEFLIT(lit_449);
DEFLIT(lit_238);
DEFLIT(lit_525);
DEFLIT(lit_360);
DEFLIT(lit_192);
DEFLIT(lit_296);
DEFLIT(lit_439);
DEFLIT(lit_277);
DEFLIT(lit_468);
DEFLIT(lit_152);
DEFLIT(lit_443);
DEFLIT(lit_355);
DEFLIT(lit_376);
DEFLIT(lit_591);
DEFLIT(lit_89);
DEFLIT(lit_130);
DEFLIT(lit_431);
DEFLIT(lit_22);
DEFLIT(lit_281);
DEFLIT(lit_507);
DEFLIT(lit_432);
DEFLIT(lit_430);
DEFLIT(lit_138);
DEFLIT(lit_168);
DEFLIT(lit_299);
DEFLIT(lit_196);
DEFLIT(lit_227);
DEFLIT(lit_405);
DEFLIT(lit_223);
DEFLIT(lit_313);
DEFLIT(lit_12);
DEFLIT(lit_547);
DEFLIT(lit_420);
DEFLIT(lit_383);
DEFLIT(lit_571);
DEFLIT(lit_387);
DEFLIT(lit_351);
DEFLIT(lit_318);
DEFLIT(lit_232);
DEFLIT(lit_331);
DEFLIT(lit_57);
DEFLIT(lit_575);
DEFLIT(lit_127);
DEFLIT(lit_382);
DEFLIT(lit_371);
DEFLIT(lit_258);
DEFLIT(lit_169);
DEFLIT(lit_456);
DEFLIT(lit_378);
DEFLIT(lit_394);
DEFLIT(lit_64);
DEFLIT(lit_45);
DEFLIT(lit_415);
DEFLIT(lit_101);
DEFLIT(lit_356);
DEFLIT(lit_92);
DEFLIT(lit_483);
DEFLIT(lit_364);
DEFLIT(lit_348);
DEFLIT(lit_91);
DEFLIT(lit_201);
DEFLIT(lit_529);
DEFLIT(lit_325);
DEFLIT(lit_263);
DEFLIT(lit_124);
DEFLIT(lit_129);
DEFLIT(lit_338);
DEFLIT(lit_46);
DEFLIT(lit_584);
DEFLIT(lit_341);
DEFLIT(lit_95);
DEFLIT(lit_316);
DEFLIT(lit_211);
DEFLIT(lit_6);
DEFLIT(lit_118);
DEFLIT(lit_220);
DEFLIT(lit_343);
DEFLIT(lit_41);
DEFLIT(lit_267);
DEFLIT(lit_336);
DEFLIT(lit_530);
DEFLIT(lit_285);
DEFLIT(lit_404);
DEFLIT(lit_301);
DEFLIT(lit_517);
DEFLIT(lit_524);
DEFLIT(lit_302);
DEFLIT(lit_290);
DEFLIT(lit_40);
DEFLIT(lit_593);
DEFLIT(lit_310);
DEFLIT(lit_82);
DEFLIT(lit_309);
DEFLIT(lit_125);
DEFLIT(lit_182);
DEFLIT(lit_444);
DEFLIT(lit_109);
DEFLIT(lit_36);
DEFLIT(lit_155);
DEFLIT(lit_145);
DEFLIT(lit_146);
DEFLIT(lit_80);
DEFLIT(lit_390);
DEFLIT(lit_585);
DEFLIT(lit_407);
DEFLIT(lit_253);
DEFLIT(lit_248);
DEFLIT(lit_282);
DEFLIT(lit_4);
DEFLIT(lit_3);
DEFLIT(lit_72);
DEFLIT(lit_551);
DEFLIT(lit_73);
DEFLIT(lit_566);
DEFLIT(lit_142);
DEFLIT(lit_222);
DEFLIT(lit_90);
DEFLIT(lit_25);
DEFLIT(lit_455);
DEFLIT(lit_245);
DEFLIT(lit_20);
DEFLIT(lit_242);
DEFLIT(lit_32);
DEFLIT(lit_386);
DEFLIT(lit_240);
DEFLIT(lit_353);
DEFLIT(lit_76);
DEFLIT(lit_141);
DEFLIT(lit_398);
DEFLIT(lit_536);
DEFLIT(lit_406);
DEFLIT(lit_121);
DEFLIT(lit_421);
DEFLIT(lit_448);
DEFLIT(lit_205);
DEFLIT(lit_53);
DEFLIT(lit_214);
DEFLIT(lit_445);
DEFLIT(lit_592);
DEFLIT(lit_568);
DEFLIT(lit_225);
DEFLIT(lit_43);
DEFLIT(lit_56);
DEFLIT(lit_533);
DEFLIT(lit_66);
DEFLIT(lit_397);
DEFLIT(lit_411);
DEFLIT(lit_86);
DEFLIT(lit_87);
DEFLIT(lit_330);
DEFLIT(lit_166);
DEFLIT(lit_241);
DEFLIT(lit_467);
DEFLIT(lit_189);
DEFLIT(lit_501);
DEFLIT(lit_154);
DEFLIT(lit_346);
DEFLIT(lit_237);
DEFLIT(lit_279);
DEFLIT(lit_334);
DEFLIT(lit_579);
DEFLIT(lit_486);
DEFLIT(lit_581);
DEFLIT(lit_409);
DEFLIT(lit_314);
DEFLIT(lit_597);
DEFLIT(lit_577);
DEFLIT(lit_370);
DEFLIT(lit_303);
DEFLIT(lit_270);
DEFLIT(lit_308);
DEFLIT(lit_474);
DEFLIT(lit_52);
DEFLIT(lit_340);
DEFLIT(lit_100);
DEFLIT(lit_560);
DEFLIT(lit_573);
DEFLIT(lit_574);
DEFLIT(lit_126);
DEFLIT(lit_315);
DEFLIT(lit_276);
DEFLIT(lit_514);
DEFLIT(lit_199);
DEFLIT(lit_2);
DEFLIT(lit_42);
DEFLIT(lit_588);
DEFLIT(lit_479);
DEFLIT(lit_215);
DEFLIT(lit_425);
DEFLIT(lit_181);
DEFLIT(lit_519);
DEFLIT(lit_458);
DEFLIT(lit_462);
DEFLIT(lit_554);
DEFLIT(lit_31);
DEFLIT(lit_48);
DEFLIT(lit_195);
DEFLIT(lit_367);
DEFLIT(lit_255);
DEFLIT(lit_78);
DEFLIT(lit_137);
DEFLIT(lit_37);
DEFLIT(lit_218);
DEFLIT(lit_532);
DEFLIT(lit_401);
DEFLIT(lit_287);
DEFLIT(lit_177);
DEFLIT(lit_188);
DEFLIT(lit_548);
DEFLIT(lit_368);
DEFLIT(lit_545);
DEFLIT(lit_185);
DEFLIT(lit_174);
DEFLIT(lit_375);
DEFLIT(lit_512);
DEFLIT(lit_11);
DEFLIT(lit_81);
DEFLIT(lit_5);
DEFLIT(lit_186);
DEFLIT(lit_149);
DEFLIT(lit_24);
DEFLIT(lit_557);
DEFLIT(lit_438);
DEFLIT(lit_47);
DEFLIT(lit_471);
DEFLIT(lit_440);
DEFLIT(lit_65);
DEFLIT(lit_578);
DEFLIT(lit_485);
DEFLIT(lit_272);
DEFLIT(lit_466);
DEFLIT(lit_75);
DEFLIT(lit_234);
DEFLIT(lit_324);
DEFLIT(lit_274);
DEFLIT(lit_114);
DEFLIT(lit_380);
DEFLIT(lit_204);
DEFLIT(lit_329);
DEFLIT(lit_487);
DEFLIT(lit_176);
DEFLIT(lit_266);
DEFLIT(lit_408);
DEFLIT(lit_567);
DEFLIT(lit_412);
DEFLIT(lit_459);
DEFLIT(lit_123);
DEFLIT(lit_384);
DEFLIT(lit_102);
DEFLIT(lit_587);
DEFLIT(lit_395);
DEFLIT(lit_534);
DEFLIT(lit_159);
DEFLIT(lit_365);
DEFLIT(lit_495);
DEFLIT(lit_198);
DEFLIT(lit_326);
DEFLIT(lit_454);
DEFLIT(lit_595);
DEFLIT(lit_26);
DEFLIT(lit_494);
DEFLIT(lit_67);
DEFLIT(lit_447);
DEFLIT(lit_457);
DEFLIT(lit_465);
DEFLIT(lit_10);
DEFLIT(lit_388);
DEFLIT(lit_476);
DEFLIT(lit_446);
DEFLIT(lit_293);
DEFLIT(lit_108);
DEFLIT(lit_504);
DEFLIT(lit_97);

/* FUNCTIONS: */

LOCFOR(fun_x_1715_0);
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
LOCFOR(fun_x_1719_109);
LOCFOR(fun_110);
LOCFOR(fun_111);
LOCFOR(fun_x_1723_112);
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
LOCFOR(fun_objectify_225);
LOCFOR(fun_objectify_226);
LOCFOR(fun_objectify_227);
LOCFOR(fun_objectify_228);
LOCFOR(fun_objectify_229);
LOCFOR(fun_objectify_quotation_230);
LOCFOR(fun_objectify_quotation_231);
LOCFOR(fun_objectify_quotation_232);
LOCFOR(fun_objectify_raw_233);
LOCFOR(fun_objectify_boundQ_234);
LOCFOR(fun_objectify_compile_time_235);
LOCFOR(fun_objectify_alternative_236);
LOCFOR(fun_loop_237);
LOCFOR(fun_sequentialize_238);
LOCFOR(fun_transform_defs_239);
LOCFOR(fun_loop_240);
LOCFOR(fun_objectify_sequential_241);
LOCFOR(fun_242);
LOCFOR(fun_objectify_application_243);
LOCFOR(fun_244);
LOCFOR(fun_objectify_application_245);
LOCFOR(fun_246);
LOCFOR(fun_objectify_application_247);
LOCFOR(fun_process_closed_application_248);
LOCFOR(fun_pack_nary_args_249);
LOCFOR(fun_pack_args_250);
LOCFOR(fun_process_nary_closed_application_251);
LOCFOR(fun_convert2arguments_252);
LOCFOR(fun_objectify_assignment_253);
LOCFOR(fun_objectify_assignment_254);
LOCFOR(fun_objectify_assignment_using_255);
LOCFOR(fun_objectify_assignment_using_256);
LOCFOR(fun_objectify_assignment_using_257);
FUNFOR(YevalSastYupdate_binding_kind);
LOCFOR(fun_ast_define_binding_259);
LOCFOR(fun_objectify_definition_260);
LOCFOR(fun_expand_261);
FUNFOR(YPPmacro);
LOCFOR(fun_objectify_syntax_definition_263);
LOCFOR(fun_objectify_function_definition_264);
FUNFOR(YevalSastYmodule_binding);
LOCFOR(fun_objectify_primitive_definition_266);
LOCFOR(fun_objectify_generic_definition_267);
LOCFOR(fun_objectify_method_definition_268);
LOCFOR(fun_269);
LOCFOR(fun_270);
LOCFOR(fun_271);
LOCFOR(fun_272);
LOCFOR(fun_objectify_function_source_273);
LOCFOR(fun_274);
LOCFOR(fun_275);
LOCFOR(fun_objectify_function_276);
LOCFOR(fun_col_277);
LOCFOR(fun_objectify_signature_278);
LOCFOR(fun_find_279);
LOCFOR(fun_loop_280);
LOCFOR(fun_compute_local_reference_offsets_281);
LOCFOR(fun_objectify_binding_282);
LOCFOR(fun_binding_reference_class_283);
LOCFOR(fun_objectify_binding_284);
LOCFOR(fun_objectify_binding_285);
LOCFOR(fun_default_type_286);
LOCFOR(fun_objectify_free_global_reference_287);
FUNFOR(YevalSastYforeign_nameQ);
LOCFOR(fun_objectify_foreign_reference_289);
LOCFOR(fun_objectify_symbol_290);
LOCFOR(fun_ftype_291);
FUNFOR(YevalSastYfunctions);
LOCFOR(fun_empty_293);
LOCFOR(fun_294);
LOCFOR(fun_295);
LOCFOR(fun_objectify_locals_296);
LOCFOR(fun_objectify_bind_exit_297);
LOCFOR(fun_objectify_unwind_protect_298);
LOCFOR(fun_objectify_monitor_299);
LOCFOR(fun_300);
LOCFOR(fun_301);
LOCFOR(fun_302);
LOCFOR(fun_303);
LOCFOR(fun_304);
LOCFOR(fun_objectify_export_305);
FUNFOR(YevalSastYimport_globalX);
LOCFOR(fun_307);
LOCFOR(fun_objectify_useSexport_module_308);
LOCFOR(fun_309);
LOCFOR(fun_objectify_use_module_310);
LOCFOR(fun_expand_bind_list_311);
LOCFOR(fun_expand_bind_list_312);
LOCFOR(fun_expand_bind_list_313);
LOCFOR(fun_expand_bind_listT_314);
LOCFOR(fun_expand_bind_listT_315);
LOCFOR(fun_expand_bind_element_316);
LOCFOR(fun_expand_bind_element_317);
LOCFOR(fun_expand_pattern_318);
LOCFOR(fun_319);
LOCFOR(fun_expand_syntax_if_320);
LOCFOR(fun_r_extendT_321);
LOCFOR(fun_insert_globalX_322);
LOCFOR(fun_323);
LOCFOR(fun_insert_globalsX_324);
LOCFOR(fun_find_static_global_environment_325);
LOCFOR(fun_find_static_global_environment_326);
LOCFOR(fun_find_syntax_environment_327);
LOCFOR(fun_find_environment_module_328);
LOCFOR(fun_loop_329);
LOCFOR(fun_find_binding_330);
LOCFOR(fun_find_binding_331);
LOCFOR(fun_find_binding_332);
LOCFOR(fun_frame_bindings_333);
LOCFOR(fun_register_magic_binding_334);
LOCFOR(fun_magic_bindings_335);
LOCFOR(fun_x_1736_336);
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
LOCFOR(fun_pairize_359);
LOCFOR(fun_360);
LOCFOR(fun_361);
LOCFOR(fun_362);
LOCFOR(fun_363);
LOCFOR(fun_364);
LOCFOR(fun_365);
LOCFOR(fun_ast_macro_expand_366);
LOCFOR(fun_367);
LOCFOR(fun_368);
LOCFOR(fun_369);
LOCFOR(fun_370);
LOCFOR(fun_371);
LOCFOR(fun_transaction_implemented_bindings_372);
LOCFOR(fun_transaction_implemented_bindings_setter_373);
LOCFOR(fun_374);
LOCFOR(fun_transaction_dependents_375);
LOCFOR(fun_transaction_dependents_setter_376);
LOCFOR(fun_377);
FUNFOR(YevalSastYtransaction_register_implemented_binding);
FUNFOR(YevalSastYtransaction_register_dependent);
FUNFOR(YevalSastYtransaction_emptyQ);
LOCFOR(fun_381);
LOCFOR(fun_382);
FUNFOR(YevalSastYmerge_transactionsX);
LOCFOR(fun_384);
LOCFOR(fun_385);
FUNFOR(YevalSastYroll_back_transaction);
LOCFOR(fun_387);
LOCFOR(fun_388);
FUNFOR(YevalSastYcall_with_subtransaction);
LOCFOR(fun_x_1740_390);
LOCFOR(fun_391);
LOCFOR(fun_392);
LOCFOR(fun_393);
FUNFOR(YevalSastYobjectify_with_subtransaction);
LOCFOR(fun_module_loader_modules_395);
LOCFOR(fun_module_loader_modules_setter_396);
LOCFOR(fun_397);
LOCFOR(fun_module_loader_stack_398);
LOCFOR(fun_module_loader_stack_setter_399);
LOCFOR(fun_400);
LOCFOR(fun_module_name_401);
LOCFOR(fun_module_name_setter_402);
LOCFOR(fun_module_mangled_name_403);
LOCFOR(fun_module_mangled_name_setter_404);
LOCFOR(fun_405);
LOCFOR(fun_module_mangled_string_name_406);
LOCFOR(fun_module_mangled_string_name_setter_407);
LOCFOR(fun_408);
LOCFOR(fun_module_target_environment_409);
LOCFOR(fun_module_target_environment_setter_410);
LOCFOR(fun_module_syntax_environment_411);
LOCFOR(fun_module_syntax_environment_setter_412);
LOCFOR(fun_Pmodule_exports_413);
LOCFOR(fun_Pmodule_exports_setter_414);
LOCFOR(fun_415);
LOCFOR(fun_module_data_processedQ_416);
LOCFOR(fun_module_data_processedQ_setter_417);
LOCFOR(fun_418);
LOCFOR(fun_module_runtime_data_419);
LOCFOR(fun_module_runtime_data_setter_420);
LOCFOR(fun_421);
LOCFOR(fun_module_transaction_422);
LOCFOR(fun_module_transaction_setter_423);
LOCFOR(fun_424);
LOCFOR(fun_module_exports_425);
FUNFOR(YevalSastYset_module_environments);
LOCFOR(fun_427);
FUNFOR(YevalSastYdo_module_loader_modules);
LOCFOR(fun_module_loader_module_type_429);
FUNFOR(YevalSastYregister_moduleX);
FUNFOR(YevalSastYprobe_module);
LOCFOR(fun_432);
LOCFOR(fun_433);
FUNFOR(YevalSastYload_and_register_module);
FUNFOR(YevalSastYexport_bindingX);
FUNFOR(YevalSastYbinding_native_toQ);
LOCFOR(fun_437);
FUNFOR(YevalSastYreport_undefined_global_bindings);
LOCFOR(fun_439);
LOCFOR(fun_440);
LOCFOR(fun_add_user_441);
LOCFOR(fun_442);
FUNFOR(YevalSastYcompute_transitive_users);
FUNFOR(YevalSastYremove_module_internalX);
LOCFOR(fun_445);
FUNFOR(YevalSastYremove_modules_by_nameX);
FUNFOR(YevalSastYmodule_name_to_relpath);
LOCFOR(fun_448);
FUNFOR(YevalSastYinstall_initial_bindings);
FUNFOR(YevalSastYfab_static_global_environment);
LOCFOR(fun_451);
FUNFOR(YevalSastYfab_subset_environment);
LOCFOR(fun_453);
LOCFOR(fun_454);
LOCFOR(fun_455);
LOCFOR(fun_456);
LOCFOR(fun_load_module_457);
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
FUNFOR(YevalSastYreloader_do_other_binding);
FUNFOR(YevalSastYreloader_do_export);
FUNFOR(YevalSastYreload_modules);
LOCFOR(fun_472);
FUNFOR(YevalSastYinstall_magic_bindings);
FUNFOR(YevalSastYreload_macros);
FUNFOR(YevalSastYinstall_interpreter_hacks);
FUNFOR(YevalSastYinit_runtime);
FUNFOR(YevalSastYfab_syntax_environment);
FUNFOR(YevalSastYfab_g2c_module);
FUNFOR(YevalSastYinit_g2c_boot_environment);
FUNFOR(YevalSastYinit_g2c_regular_environment);
FUNFOR(YevalSastYinit_ast);
LOCFOR(fun_loop_482);
FUNFOR(YevalSastYdo_static_global_bindings);
LOCFOR(fun_loop_484);
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

FUNCODEDEF(fun_x_1715_0) {
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
  P saved_dependentF2546;
  P x_1714F2545;
  P x_1714F2544;
  P x_1714F2543;
  P bodyF2542;
  P dependentF2541;
  P x_1714F2540;
  P x_1715F2539;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1715_0,1);
  x_1715F2539 = T1;
  FUNINIT(x_1715F2539, 1,return_);
  x_1714F2540 = FREEREF(0);
  dependentF2541 = YPfalse;
  dependentF2541 = BOXFAB(dependentF2541);
  bodyF2542 = YPfalse;
  bodyF2542 = BOXFAB(bodyF2542);
  T7 = CALL2(1,VARREF(YisaQ),x_1714F2540,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1714F2540,LITREF(lit_6),x_1715F2539);
    x_1714F2543 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1714F2543,x_1715F2539);
    BOXVAL(dependentF2541) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1714F2543);
    x_1714F2544 = T12;
    BOXVAL(bodyF2542) = x_1714F2544;
    x_1714F2545 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1714F2545,x_1715F2539);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1715F2539,LITREF(lit_7),x_1714F2540);
  }
  T17 = CALL0(1,VARREF(YgooSmacrosYgensym));
  saved_dependentF2546 = T17;
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T24 = CALL1(1,VARREF(Ylst),saved_dependentF2546);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T23 = CALL3(1,VARREF(YgooSmacrosYcat),T24,T25,Ynil);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T21 = CALL2(1,VARREF(YgooSmacrosYcat),T22,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T31 = BOXVAL(dependentF2541);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T27 = CALL4(1,VARREF(YgooSmacrosYcat),T28,T29,T30,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T38 = BOXVAL(bodyF2542);
  T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T38,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T43 = CALL1(1,VARREF(Ylst),saved_dependentF2546);
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
  P modF2547;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_module),b_);
  modF2547 = T1;
  if (modF2547 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYmodule_name),modF2547);
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
  QRET(LITREF(lit_130));
}

FUNCODEDEF(YevalSastYfunction_display_name) {
  P f_;
  P bF2548;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(f_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_binding),f_);
  bF2548 = T1;
  if (bF2548 != YPfalse) {
    T4 = CALL1(1,VARREF(YevalSastYbinding_module_name),bF2548);
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),bF2548);
    T3 = CALL3(1,VARREF(YgooSruntimeYmsg_to_str),LITREF(lit_133),T4,T5);
    T2 = T3;
  } else {
    T2 = LITREF(lit_134);
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_invalidate_dependent_106) {
  P dependent_,dependable_,dtype_;
  P nameF2549;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(dependent_, 0);
  ARG(dependable_, 1);
  ARG(dtype_, 2);
loop:
  CALL1(1,VARREF(YevalSdependencyYdetach_dependent),dependent_);
  T1 = CALL1(1,VARREF(YevalSastYfunction_display_name),dependent_);
  nameF2549 = T1;
  T3 = CALL2(1,VARREF(YevalSdependencyYdependency_includes_anyQ),dtype_,VARREF(YevalSdependencyYDparse_dependencies));
  if (T3 != YPfalse) {
    T4 = CALL3(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_137),nameF2549);
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(YevalSdependencyYdependency_includes_anyQ),dtype_,VARREF(YevalSdependencyYDoptimizaton_dependencies));
    if (T6 != YPfalse) {
      T7 = CALL3(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_138),nameF2549);
      T5 = T7;
    } else {
      if (YPtrue != YPfalse) {
        T9 = CALL3(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_139),nameF2549);
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
  P loopF2550;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_107,1);
  loopF2550 = T1;
  FUNINIT(loopF2550, 1,loopF2550);
  T2 = CALL2(0,loopF2550,Ynil,e_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1719_109) {
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
  P DemptyF2561;
  P classF2560;
  P x_1718F2559;
  P x_1718F2558;
  P x_1718F2557;
  P x_1718F2556;
  P x_1718F2555;
  P supersF2554;
  P nameF2553;
  P x_1718F2552;
  P x_1719F2551;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1719_109,1);
  x_1719F2551 = T1;
  FUNINIT(x_1719F2551, 1,return_);
  x_1718F2552 = FREEREF(0);
  nameF2553 = YPfalse;
  nameF2553 = BOXFAB(nameF2553);
  supersF2554 = YPfalse;
  supersF2554 = BOXFAB(supersF2554);
  T7 = CALL2(1,VARREF(YisaQ),x_1718F2552,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1718F2552,LITREF(lit_146),x_1719F2551);
    x_1718F2555 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1718F2555,x_1719F2551);
    BOXVAL(nameF2553) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1718F2555);
    x_1718F2556 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1718F2556,x_1719F2551);
    x_1718F2557 = T14;
    BOXVAL(supersF2554) = x_1718F2557;
    x_1718F2558 = Ynil;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1718F2558,x_1719F2551);
    T15 = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1718F2556);
    x_1718F2559 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1718F2559,x_1719F2551);
    T13 = T18;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1719F2551,LITREF(lit_7),x_1718F2552);
  }
  T22 = BOXVAL(nameF2553);
  T21 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_147),T22,LITREF(lit_148));
  classF2560 = T21;
  T25 = BOXVAL(nameF2553);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_149),T25,LITREF(lit_150));
  DemptyF2561 = T24;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
  T31 = CALL1(1,VARREF(Ylst),classF2560);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_152));
  T35 = BOXVAL(supersF2554);
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T35,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T29 = CALL4(1,VARREF(YgooSmacrosYcat),T30,T31,T32,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_153));
  T39 = CALL1(1,VARREF(Ylst),DemptyF2561);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_154));
  T43 = CALL1(1,VARREF(Ylst),classF2560);
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T37 = CALL4(1,VARREF(YgooSmacrosYcat),T38,T39,T40,Ynil);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_155));
  T48 = BOXVAL(nameF2553);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_156));
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
  T50 = CALL3(1,VARREF(YgooSmacrosYcat),T51,T52,Ynil);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T55 = CALL1(1,VARREF(Ylst),LITREF(lit_154));
  T56 = CALL1(1,VARREF(Ylst),classF2560);
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_158));
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_156));
  T59 = CALL1(1,VARREF(Ylst),LITREF(lit_159));
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
  T54 = CALLN(1,VARREF(YgooSmacrosYcat),7,T55,T56,T57,T58,T59,T60,Ynil);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T45 = CALL5(1,VARREF(YgooSmacrosYcat),T46,T47,T49,T53,Ynil);
  T44 = CALL1(1,VARREF(Ylst),T45);
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_160));
  T64 = CALL1(1,VARREF(Ylst),LITREF(lit_161));
  T69 = CALL1(1,VARREF(Ylst),LITREF(lit_142));
  T72 = CALL1(1,VARREF(Ylst),LITREF(lit_162));
  T73 = CALL1(1,VARREF(Ylst),classF2560);
  T71 = CALL3(1,VARREF(YgooSmacrosYcat),T72,T73,Ynil);
  T70 = CALL1(1,VARREF(Ylst),T71);
  T68 = CALL3(1,VARREF(YgooSmacrosYcat),T69,T70,Ynil);
  T67 = CALL1(1,VARREF(Ylst),T68);
  T74 = CALL1(1,VARREF(Ylst),LITREF(lit_163));
  T75 = CALL1(1,VARREF(Ylst),classF2560);
  T66 = CALL4(1,VARREF(YgooSmacrosYcat),T67,T74,T75,Ynil);
  T65 = CALL1(1,VARREF(Ylst),T66);
  T76 = CALL1(1,VARREF(Ylst),DemptyF2561);
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

FUNCODEDEF(fun_x_1723_112) {
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
  P x_1722F2566;
  P x_1722F2565;
  P nameF2564;
  P x_1722F2563;
  P x_1723F2562;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1723_112,1);
  x_1723F2562 = T1;
  FUNINIT(x_1723F2562, 1,return_);
  x_1722F2563 = FREEREF(0);
  nameF2564 = YPfalse;
  nameF2564 = BOXFAB(nameF2564);
  T5 = CALL2(1,VARREF(YisaQ),x_1722F2563,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1722F2563,LITREF(lit_165),x_1723F2562);
    x_1722F2565 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1722F2565,x_1723F2562);
    BOXVAL(nameF2564) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1722F2565);
    x_1722F2566 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1722F2566,x_1723F2562);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1723F2562,LITREF(lit_7),x_1722F2563);
  }
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_146));
  T16 = BOXVAL(nameF2564);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_140));
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
  QRET(LITREF(lit_186));
}

FUNCODEDEF(fun_function_kind_142) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_188));
}

FUNCODEDEF(fun_function_kind_143) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_190));
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
  P tmpF2568;
  P tmpF2567;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T3 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),T3,LITREF(lit_41));
  tmpF2567 = T2;
  if (tmpF2567 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYbinding_global_box),binding_);
    tmpF2568 = T6;
    if (tmpF2568 != YPfalse) {
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
  P x_1725F2570;
  P x_1724F2569;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),f_);
  x_1724F2569 = T1;
  x_1725F2570 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_1725F2570,x_1724F2569,LITREF(lit_283));
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYbinding_handler),f_);
    T5 = CALL3(1,T6,e_,r_,tailQ_);
    T3 = T5;
  } else {
    T8 = CALL2(1,x_1725F2570,x_1724F2569,LITREF(lit_284));
    if (T8 != YPfalse) {
      T11 = CALL1(1,VARREF(YevalSastYmacro_expander),f_);
      T10 = CALL3(1,T11,e_,r_,tailQ_);
      T9 = CALL3(1,VARREF(YevalSastYobjectify),T10,r_,tailQ_);
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

FUNCODEDEF(fun_objectify_225) {
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

FUNCODEDEF(fun_objectify_226) {
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

FUNCODEDEF(fun_objectify_quotation_230) {
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

FUNCODEDEF(fun_objectify_quotation_231) {
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

FUNCODEDEF(fun_objectify_raw_233) {
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

FUNCODEDEF(fun_objectify_boundQ_234) {
  P e_,r_,tailQ_;
  P refF2571;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL2(1,VARREF(YevalSastYobjectify_symbol),e_,r_);
  refF2571 = T1;
  T2 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLboundQG),VARREF(YevalSastYboundQ_reference),refF2571);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_compile_time_235) {
  P program_,r_,tailQ_,rtQ_;
  P tmpF2576;
  P astF2575;
  P target_envF2574;
  P syntax_envF2573;
  P modF2572;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(program_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  ARG(rtQ_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  modF2572 = T1;
  T3 = CALL1(1,VARREF(YevalSastYmodule_syntax_environment),modF2572);
  syntax_envF2573 = T3;
  T5 = CALL1(1,VARREF(YevalSastYmodule_target_environment),modF2572);
  target_envF2574 = T5;
  T7 = CALL3(1,VARREF(YevalSastYobjectify),program_,syntax_envF2573,tailQ_);
  astF2575 = T7;
  CALL1(1,VARREF(YevalSastYast_evaluate),astF2575);
  tmpF2576 = rtQ_;
  if (tmpF2576 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmathYNEE),syntax_envF2573,target_envF2574);
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

FUNCODEDEF(fun_objectify_alternative_236) {
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

FUNCODEDEF(fun_loop_237) {
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

FUNCODEDEF(fun_sequentialize_238) {
  P eT_;
  P loopF2577;
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
      T8 = FUNSHELL(1,fun_loop_237,1);
      loopF2577 = T8;
      FUNINIT(loopF2577, 1,loopF2577);
      T9 = CALL1(0,loopF2577,eT_);
      T7 = T9;
      T3 = T7;
    }
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_transform_defs_239) {
  P eT_;
  P eF2578;
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
    eF2578 = T3;
    T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_defQ),eF2578);
    if (T5 != YPfalse) {
      T9 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
      T15 = CALL1(1,VARREF(YevalSsyntaxYsexpr_def_variable),eF2578);
      T14 = CALL1(1,VARREF(Ylst),T15);
      T17 = CALL1(1,VARREF(YevalSsyntaxYsexpr_def_value),eF2578);
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
      T21 = CALL1(1,VARREF(Ylst),eF2578);
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

FUNCODEDEF(fun_loop_240) {
  P res_,eT_;
  P headF2580;
  P tailQF2579;
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
    tailQF2579 = T4;
    T9 = CALL1(1,VARREF(Yhead),eT_);
    T8 = CALL3(1,VARREF(YevalSastYobjectify),T9,FREEREF(1),tailQF2579);
    headF2580 = T8;
    T11 = CALL2(1,VARREF(YgooSmacrosYpair),headF2580,res_);
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

FUNCODEDEF(fun_objectify_sequential_241) {
  P eT_,r_,tailQ_;
  P astsF2582;
  P loopF2581;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3;
LINK_STACK();
  ARG(eT_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T2 = FUNSHELL(1,fun_loop_240,3);
  loopF2581 = T2;
  FUNINIT(loopF2581, 3,tailQ_,r_,loopF2581);
  T4 = CALL1(1,VARREF(YevalSastYtransform_defs),eT_);
  T3 = CALL2(0,loopF2581,Ynil,T4);
  T1 = T3;
  astsF2582 = T1;
  T5 = CALL1(1,VARREF(YevalSastYsequentialize),astsF2582);
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_242) {
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

FUNCODEDEF(fun_objectify_application_243) {
  P ff_,eT_,r_,tailQ_;
  P eeTF2583;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T3 = FUNFAB(fun_242,1,r_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),T3,eT_);
  T1 = CALL1(1,VARREF(YevalSastYconvert2arguments),T2);
  eeTF2583 = T1;
  T4 = CALL4(1,VARREF(YevalSastYprocess_closed_application),ff_,eeTF2583,r_,tailQ_);
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_244) {
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

FUNCODEDEF(fun_objectify_application_245) {
  P ff_,eT_,r_,tailQ_;
  P fvfF2585;
  P eeTF2584;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T3 = FUNFAB(fun_244,1,r_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),T3,eT_);
  T1 = CALL1(1,VARREF(YevalSastYconvert2arguments),T2);
  eeTF2584 = T1;
  T5 = CALL1(1,VARREF(YevalSastYreference_binding),ff_);
  fvfF2585 = T5;
  T6 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSastYapplication_binding),fvfF2585,VARREF(YevalSastYapplication_arguments),eeTF2584,VARREF(YevalSastYapplication_tailQ),tailQ_);
  T4 = T6;
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_246) {
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

FUNCODEDEF(fun_objectify_application_247) {
  P ff_,eT_,r_,tailQ_;
  P eeTF2586;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T3 = FUNFAB(fun_246,1,r_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),T3,eT_);
  T1 = CALL1(1,VARREF(YevalSastYconvert2arguments),T2);
  eeTF2586 = T1;
  T4 = CALL2(1,VARREF(YisaQ),ff_,VARREF(YevalSastYLlocal_referenceG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YevalSastYreference_called_functionQ_setter),YPtrue,ff_);
  } else {
  }
  T6 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLregular_applicationG),VARREF(YevalSastYapplication_function),ff_,VARREF(YevalSastYapplication_arguments),eeTF2586,VARREF(YevalSastYapplication_tailQ),tailQ_);
  T0 = T6;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_process_closed_application_248) {
  P f_,eT_,r_,tailQ_;
  P bF2588;
  P vTF2587;
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
  vTF2587 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfunction_body),f_);
  bF2588 = T3;
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
      T16 = CALL3(1,VARREF(YevalSastYobjectify_error),LITREF(lit_303),f_,eT_);
      T7 = T16;
    }
    T4 = T7;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pack_nary_args_249) {
  P eT_;
  P T0,T1,T2,T3,T4,T5,T6;
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

FUNCODEDEF(fun_pack_args_250) {
  P eT_,vT_,tT_;
  P lst_typeF2590;
  P varF2589;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2,a3;
LINK_STACK();
  ARG(eT_, 0);
  ARG(vT_, 1);
  ARG(tT_, 2);
loop:
  T1 = CALL1(1,VARREF(Yhead),vT_);
  varF2589 = T1;
  T3 = CALL1(1,VARREF(YevalSastYbinding_dottedQ),varF2589);
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YevalSastYobjectify),LITREF(lit_152),FREEREF(0),YPfalse);
    lst_typeF2590 = T5;
    CALL2(1,VARREF(YevalSastYbinding_dottedQ_setter),YPfalse,varF2589);
    CALL2(1,VARREF(YevalSastYbinding_type_setter),lst_typeF2590,varF2589);
    CALL2(1,VARREF(Yhead_setter),lst_typeF2590,tT_);
    T8 = CALL1(0,FREEREF(1),eT_);
    T7 = CALL3(1,VARREF(YevalSastYobjectify),T8,FREEREF(0),YPfalse);
    T9 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLargumentsG));
    T6 = CALL2(1,VARREF(YevalSastYarguments),T7,T9);
    T4 = T6;
    T2 = T4;
  } else {
    T11 = CALL1(1,VARREF(YgooSmacrosYemptyQ),eT_);
    if (T11 != YPfalse) {
      T12 = CALL3(1,VARREF(YevalSastYobjectify_error),LITREF(lit_311),FREEREF(2),eT_);
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

FUNCODEDEF(fun_process_nary_closed_application_251) {
  P f_,eT_,r_,tailQ_;
  P oF2594;
  P vTF2593;
  P pack_argsF2592;
  P pack_nary_argsF2591;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = FUNSHELL(1,fun_pack_nary_args_249,1);
  pack_nary_argsF2591 = T1;
  T2 = FUNSHELL(1,fun_pack_args_250,4);
  pack_argsF2592 = T2;
  FUNINIT(pack_nary_argsF2591, 1,pack_nary_argsF2591);
  FUNINIT(pack_argsF2592, 4,r_,pack_nary_argsF2591,f_,pack_argsF2592);
  T4 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
  vTF2593 = T4;
  T7 = CALL1(1,VARREF(YevalSastYfunction_specs),f_);
  T9 = CALL1(1,VARREF(YevalSastYfunction_specs),f_);
  T8 = CALL3(0,pack_argsF2592,eT_,vTF2593,T9);
  T10 = CALL1(1,VARREF(YevalSastYfunction_body),f_);
  T6 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_bindings),vTF2593,VARREF(YevalSastYfix_let_types),T7,VARREF(YevalSastYfix_let_arguments),T8,VARREF(YevalSastYfix_let_body),T10);
  oF2594 = T6;
  T5 = oF2594;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_convert2arguments_252) {
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

FUNCODEDEF(fun_objectify_assignment_253) {
  P binding_,e_,r_,tailQ_;
  P opF2595;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(binding_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_operator),binding_);
  opF2595 = T1;
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variableQ),opF2595);
  if (T3 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_fab_setter_name),opF2595);
    T6 = CALL3(1,VARREF(YevalSastYobjectify),T7,r_,YPfalse);
    T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_operands),binding_);
    T8 = CALL2(1,VARREF(YgooSmacrosYpair),e_,T9);
    T5 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_application),T6,T8);
    T4 = CALL3(1,VARREF(YevalSastYobjectify),T5,r_,tailQ_);
    T2 = T4;
  } else {
    T10 = CALL2(1,VARREF(YevalSastYobjectify_error),LITREF(lit_314),e_);
    T2 = T10;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_assignment_254) {
  P binding_,e_,r_,tailQ_;
  P valF2597;
  P refF2596;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(binding_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL3(1,VARREF(YevalSastYobjectify),binding_,r_,YPfalse);
  refF2596 = T1;
  T3 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  valF2597 = T3;
  T4 = CALL2(1,VARREF(YevalSastYobjectify_assignment_using),refF2596,valF2597);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_assignment_using_255) {
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

FUNCODEDEF(fun_objectify_assignment_using_256) {
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

FUNCODEDEF(fun_objectify_assignment_using_257) {
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

FUNCODEDEF(YevalSastYupdate_binding_kind) {
  P binding_,new_kind_;
  P tmpF2598;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(new_kind_, 1);
loop:
  T3 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
  T2 = CALL2(1,VARREF(YgooSmathYNEE),T3,LITREF(lit_320));
  tmpF2598 = T2;
  if (tmpF2598 != YPfalse) {
    T4 = tmpF2598;
  } else {
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_283));
    T4 = T5;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YevalSastYbinding_kind_setter),new_kind_,binding_);
    T0 = T6;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_320));
    if (T8 != YPfalse) {
      T7 = YPtrue;
    } else {
      T10 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_41));
      if (T10 != YPfalse) {
        T9 = YPtrue;
      } else {
        if (YPtrue != YPfalse) {
          T13 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
          T12 = CALL3(1,VARREF(Yerror),LITREF(lit_321),T13,new_kind_);
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

FUNCODEDEF(fun_ast_define_binding_259) {
  P r_,name_,defining_methodQ_,kind_;
  P bindingF2606;
  P bindingF2605;
  P modF2604;
  P foreignQF2603;
  P tmpF2602;
  P modF2601;
  P grF2600;
  P existing_bindingF2599;
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
  existing_bindingF2599 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  grF2600 = T3;
  T5 = CALL1(1,VARREF(YevalSastYenvironment_module),grF2600);
  modF2601 = T5;
  if (existing_bindingF2599 != YPfalse) {
    T11 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),existing_bindingF2599,modF2601);
    tmpF2602 = T11;
    if (tmpF2602 != YPfalse) {
      T12 = tmpF2602;
    } else {
      T12 = defining_methodQ_;
    }
    T10 = T12;
    T9 = CALL1(1,VARREF(Ynot),T10);
    foreignQF2603 = T9;
    T13 = CALL1(1,VARREF(YevalSastYbinding_freeQ),existing_bindingF2599);
    if (T13 != YPfalse) {
      CALL2(1,VARREF(YevalSastYbinding_freeQ_setter),YPfalse,existing_bindingF2599);
      if (foreignQF2603 != YPfalse) {
        T15 = CALL1(1,VARREF(YevalSastYtransaction_register_implemented_binding),existing_bindingF2599);
        T14 = T15;
      } else {
        T14 = YPfalse;
      }
    } else {
      if (foreignQF2603 != YPfalse) {
        T18 = CALL1(1,VARREF(YevalSastYmodule_name),modF2601);
        T19 = CALL1(1,VARREF(YevalSastYbinding_module_name),existing_bindingF2599);
        T17 = CALL5(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_326),T18,name_,T19);
        T16 = T17;
      } else {
        T16 = YPfalse;
      }
    }
    CALL2(1,VARREF(YevalSdependencyYinvalidate_dependents),existing_bindingF2599,VARREF(YevalSdependencyYDall_dependency_types));
    CALL2(1,VARREF(YevalSastYupdate_binding_kind),existing_bindingF2599,kind_);
    T8 = existing_bindingF2599;
    T7 = T8;
  } else {
    T21 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
    modF2604 = T21;
    T23 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),kind_,VARREF(YevalSastYbinding_name),name_,VARREF(YevalSastYbinding_freeQ),YPfalse,VARREF(YevalSastYbinding_module),modF2604);
    bindingF2605 = T23;
    CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2605,grF2600);
    T22 = bindingF2605;
    T20 = T22;
    T7 = T20;
  }
  bindingF2606 = T7;
  T6 = bindingF2606;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_definition_260) {
  P var_,e_,r_;
  P defnF2609;
  P bindingF2608;
  P nameF2607;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(var_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variable_name),var_);
  nameF2607 = T1;
  T3 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,nameF2607,YPfalse,LITREF(lit_41));
  bindingF2608 = T3;
  T6 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  T5 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLdefinitionG),VARREF(YevalSastYassignment_binding),bindingF2608,VARREF(YevalSastYassignment_form),T6);
  defnF2609 = T5;
  T4 = defnF2609;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_261) {
  P x_,r_,tailQ_;
  P expF2610;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  if (VARREF(YevalSastYTmacro_tracingQT) != YPfalse) {
    CALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_334));
    CALL2(1,VARREF(YgooSioSwriteYwrite),VARREF(YgooSioSportYout),x_);
    T0 = CALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_335));
  } else {
  }
  T3 = CALL1(1,VARREF(Ylst),x_);
  T2 = CALL3(1,VARREF(YgooSmacrosYnapp),FREEREF(0),YPfalse,T3);
  expF2610 = T2;
  if (VARREF(YevalSastYTmacro_tracingQT) != YPfalse) {
    CALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_336));
    CALL2(1,VARREF(YgooSioSwriteYwrite),VARREF(YgooSioSportYout),expF2610);
    T4 = CALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_337));
  } else {
  }
  T1 = expF2610;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(YPPmacro) {
  P modname_,name_,expander_,env_or_false_;
  P bindingF2614;
  P envF2613;
  P tmpF2612;
  P expandF2611;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(modname_, 0);
  ARG(name_, 1);
  ARG(expander_, 2);
  ARG(env_or_false_, 3);
loop:
  T1 = FUNSHELL(0,fun_expand_261,1);
  expandF2611 = T1;
  FUNINIT(expandF2611, 1,expander_);
  tmpF2612 = env_or_false_;
  if (tmpF2612 != YPfalse) {
    T4 = tmpF2612;
  } else {
    T5 = CALL1(1,VARREF(YevalSastYunchecked_runtime_environment),modname_);
    T4 = T5;
  }
  T3 = T4;
  envF2613 = T3;
  T7 = CALL4(1,VARREF(YevalSastYast_define_binding),envF2613,name_,YPfalse,LITREF(lit_284));
  bindingF2614 = T7;
  CALL2(1,VARREF(YevalSastYbinding_handler_setter),expandF2611,bindingF2614);
  T6 = bindingF2614;
  T2 = T6;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_syntax_definition_263) {
  P name_,e_,r_,rtQ_;
  P bindingF2620;
  P modnameF2619;
  P expanderF2618;
  P ast_expanderF2617;
  P syntax_envF2616;
  P sep_expanderF2615;
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
  sep_expanderF2615 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfind_syntax_environment),r_);
  syntax_envF2616 = T3;
  T5 = CALL3(1,VARREF(YevalSastYobjectify),sep_expanderF2615,syntax_envF2616,YPfalse);
  ast_expanderF2617 = T5;
  T7 = CALL1(1,VARREF(YevalSastYast_evaluate),ast_expanderF2617);
  expanderF2618 = T7;
  T10 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  T9 = CALL1(1,VARREF(YevalSastYmodule_name),T10);
  modnameF2619 = T9;
  T13 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  T12 = CALL4(1,VARREF(YPPmacro),modnameF2619,name_,expanderF2618,T13);
  bindingF2620 = T12;
  T15 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  T14 = CALL2(1,VARREF(YgooSmathYNEE),syntax_envF2616,T15);
  if (T14 != YPfalse) {
    T16 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2620,syntax_envF2616);
  } else {
  }
  if (rtQ_ != YPfalse) {
    T19 = CALL3(1,VARREF(YevalSastYobjectify),sep_expanderF2615,r_,YPfalse);
    T18 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_macro_definitionG),VARREF(YevalSastYassignment_binding),bindingF2620,VARREF(YevalSastYassignment_form),T19);
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

FUNCODEDEF(fun_objectify_function_definition_264) {
  P name_,e_,r_;
  P defnF2623;
  P fF2622;
  P bindingF2621;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_41));
  bindingF2621 = T1;
  T3 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  fF2622 = T3;
  CALL2(1,VARREF(YevalSastYfunction_binding_setter),bindingF2621,fF2622);
  T4 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T4,fF2622);
  T6 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_function_definitionG),VARREF(YevalSastYassignment_binding),bindingF2621,VARREF(YevalSastYassignment_form),fF2622);
  defnF2623 = T6;
  T5 = defnF2623;
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

FUNCODEDEF(fun_objectify_primitive_definition_266) {
  P name_,sig_,body_,r_;
  P defnF2629;
  P formF2628;
  P bodyF2627;
  P new_rF2626;
  P signatureF2625;
  P bindingF2624;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(name_, 0);
  ARG(sig_, 1);
  ARG(body_, 2);
  ARG(r_, 3);
loop:
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_344));
  bindingF2624 = T1;
  T3 = CALL2(1,VARREF(YevalSastYobjectify_signature),sig_,r_);
  signatureF2625 = T3;
  T6 = CALL1(1,VARREF(YevalSastYsignature_bindings),signatureF2625);
  T5 = CALL2(1,VARREF(YevalSastYr_extendT),r_,T6);
  new_rF2626 = T5;
  T8 = CALL3(1,VARREF(YevalSastYobjectify_sequential),body_,new_rF2626,YPtrue);
  bodyF2627 = T8;
  T11 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  T10 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLast_primitiveG),VARREF(YevalSastYfunction_binding),bindingF2624,VARREF(YevalSastYfunction_debug_name),T11,VARREF(YevalSastYfunction_signature),signatureF2625,VARREF(YevalSastYfunction_body),bodyF2627);
  formF2628 = T10;
  T13 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_primitive_definitionG),VARREF(YevalSastYassignment_binding),bindingF2624,VARREF(YevalSastYassignment_form),formF2628);
  defnF2629 = T13;
  T12 = defnF2629;
  T9 = T12;
  T7 = T9;
  T4 = T7;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_generic_definition_267) {
  P name_,sig_,r_;
  P defnF2633;
  P formF2632;
  P signatureF2631;
  P bindingF2630;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(sig_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_41));
  bindingF2630 = T1;
  T3 = CALL2(1,VARREF(YevalSastYobjectify_signature),sig_,r_);
  signatureF2631 = T3;
  T6 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  T5 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLast_genericG),VARREF(YevalSastYfunction_binding),bindingF2630,VARREF(YevalSastYfunction_debug_name),T6,VARREF(YevalSastYfunction_signature),signatureF2631);
  formF2632 = T5;
  T8 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_generic_definitionG),VARREF(YevalSastYassignment_binding),bindingF2630,VARREF(YevalSastYassignment_form),formF2632);
  defnF2633 = T8;
  T7 = defnF2633;
  T4 = T7;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_method_definition_268) {
  P name_,e_,r_;
  P defnF2639;
  P formF2638;
  P callF2637;
  P metF2636;
  P genF2635;
  P bindingF2634;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPtrue,LITREF(lit_41));
  bindingF2634 = T1;
  T4 = CALL2(1,VARREF(Ylst),LITREF(lit_348),name_);
  T3 = CALL4(1,VARREF(Ylst),LITREF(lit_347),T4,name_,YPfalse);
  genF2635 = T3;
  T6 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  metF2636 = T6;
  T8 = CALL3(1,VARREF(Ylst),LITREF(lit_349),genF2635,metF2636);
  callF2637 = T8;
  T10 = CALL3(1,VARREF(YevalSastYobjectify),callF2637,r_,YPfalse);
  formF2638 = T10;
  T12 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_method_definitionG),VARREF(YevalSastYassignment_binding),bindingF2634,VARREF(YevalSastYassignment_form),formF2638);
  defnF2639 = T12;
  CALL2(1,VARREF(YevalSastYfunction_binding_setter),name_,metF2636);
  T13 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T13,metF2636);
  T11 = defnF2639;
  T9 = T11;
  T7 = T9;
  T5 = T7;
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_269) {
  P tmpF2640;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
loop:
  VARSET(YgooSioSwriteYTmax_print_lengthT,VARREF(YDmax_int));
  tmpF2640 = VARREF(YevalSastYTrecord_sourceQT);
  if (tmpF2640 != YPfalse) {
    T5 = CALL2(1,VARREF(YisaQ),FREEREF(1),VARREF(YLlstG));
    if (T5 != YPfalse) {
      T6 = CALL2(1,VARREF(YgooSmacrosYpair),LITREF(lit_12),FREEREF(1));
      T4 = T6;
    } else {
      T4 = FREEREF(1);
    }
    T3 = CALL3(1,VARREF(YgooSruntimeYmsg_to_str),LITREF(lit_351),FREEREF(0),T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),T1,FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_270) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(YgooSioSwriteYTmax_print_lengthT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_271) {
  P x_1727F2641;
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  VARSET(YgooSioSwriteYTmax_print_depthT,VARREF(YDmax_int));
  x_1727F2641 = VARREF(YgooSioSwriteYTmax_print_lengthT);
  T2 = FUNFAB(fun_269,3,FREEREF(0),FREEREF(1),FREEREF(2));
  T3 = FUNFAB(fun_270,1,x_1727F2641);
  T1 = with_cleanup(T2,T3);
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_272) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(YgooSioSwriteYTmax_print_depthT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_function_source_273) {
  P sig_,body_,r_;
  P x_1726F2642;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(sig_, 0);
  ARG(body_, 1);
  ARG(r_, 2);
loop:
  x_1726F2642 = VARREF(YgooSioSwriteYTmax_print_depthT);
  T2 = FUNFAB(fun_271,3,sig_,body_,r_);
  T3 = FUNFAB(fun_272,1,x_1726F2642);
  T1 = with_cleanup(T2,T3);
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_274) {
  P bF2645;
  P new_rF2644;
  P signatureF2643;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
loop:
  T1 = CALL2(1,VARREF(YevalSastYobjectify_signature),FREEREF(0),FREEREF(1));
  signatureF2643 = T1;
  T4 = CALL1(1,VARREF(YevalSastYsignature_bindings),signatureF2643);
  T3 = CALL2(1,VARREF(YevalSastYr_extendT),FREEREF(1),T4);
  new_rF2644 = T3;
  T6 = CALL3(1,VARREF(YevalSastYobjectify_sequential),FREEREF(2),new_rF2644,YPtrue);
  bF2645 = T6;
  T7 = CALL2(1,VARREF(YevalSastYobjectify_quotation),YPfalse,FREEREF(1));
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T7,FREEREF(3));
  CALL2(1,VARREF(YevalSastYfunction_signature_setter),signatureF2643,FREEREF(3));
  CALL2(1,VARREF(YevalSastYfunction_body_setter),bF2645,FREEREF(3));
  T8 = CALL3(1,VARREF(YevalSastYobjectify_function_source),FREEREF(0),FREEREF(2),FREEREF(1));
  CALL2(1,VARREF(YevalSastYfunction_source_setter),T8,FREEREF(3));
  T5 = FREEREF(3);
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_275) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(YevalSastYTcurrent_dependentT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_function_276) {
  P sig_,body_,r_,tailQ_;
  P x_1728F2647;
  P methodF2646;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(sig_, 0);
  ARG(body_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL1(1,VARREF(Ynew),VARREF(YevalSastYLast_methodG));
  methodF2646 = T1;
  x_1728F2647 = VARREF(YevalSastYTcurrent_dependentT);
  VARSET(YevalSastYTcurrent_dependentT,methodF2646);
  T4 = FUNFAB(fun_274,4,sig_,r_,body_,methodF2646);
  T5 = FUNFAB(fun_275,1,x_1728F2647);
  T3 = with_cleanup(T4,T5);
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_col_277) {
  P params_,naryQ_,bindings_,names_,types_;
  P bindingF2659;
  P nameF2658;
  P typeF2657;
  P stypeF2656;
  P dottedQF2655;
  P stypeF2654;
  P snameF2653;
  P paramF2652;
  P arityF2651;
  P valueF2650;
  P tmpF2649;
  P sexpr_valueF2648;
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
    sexpr_valueF2648 = T3;
    tmpF2649 = sexpr_valueF2648;
    if (tmpF2649 != YPfalse) {
      T7 = tmpF2649;
    } else {
      T8 = CALL1(1,VARREF(YevalSastYdefault_type),FREEREF(1));
      T7 = T8;
    }
    T6 = T7;
    T5 = CALL3(1,VARREF(YevalSastYobjectify),T6,FREEREF(1),YPfalse);
    valueF2650 = T5;
    T11 = CALL1(1,VARREF(YgooStypesYlen),names_);
    if (naryQ_ != YPfalse) {
      T12 = YPint((P)1);
    } else {
      T12 = YPint((P)0);
    }
    T10 = CALL2(1,VARREF(YgooSmathY_),T11,T12);
    arityF2651 = T10;
    T14 = CALL1(1,VARREF(YgooSmacrosYrevX),bindings_);
    T15 = CALL1(1,VARREF(YgooSmacrosYrevX),names_);
    T16 = CALL1(1,VARREF(YgooSmacrosYrevX),types_);
    T17 = CALL3(1,VARREF(YevalSastYobjectify),naryQ_,FREEREF(1),YPfalse);
    T18 = CALL3(1,VARREF(YevalSastYobjectify),arityF2651,FREEREF(1),YPfalse);
    T13 = CALLN(1,VARREF(Ynew),13,VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_bindings),T14,VARREF(YevalSastYsignature_names),T15,VARREF(YevalSastYsignature_specs),T16,VARREF(YevalSastYsignature_naryQ),T17,VARREF(YevalSastYsignature_arity),T18,VARREF(YevalSastYsignature_value),valueF2650);
    T9 = T13;
    T4 = T9;
    T2 = T4;
    T0 = T2;
  } else {
    T20 = CALL1(1,VARREF(Yhead),params_);
    paramF2652 = T20;
    T22 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variable_name),paramF2652);
    snameF2653 = T22;
    T24 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variable_type),paramF2652);
    stypeF2654 = T24;
    T26 = CALL2(1,VARREF(YgooSmacrosYEE),stypeF2654,VARREF(YevalSastYDsexpr_optionals_tag));
    dottedQF2655 = T26;
    if (dottedQF2655 != YPfalse) {
      T28 = VARREF(YevalSastYDsexpr_optionals_type_name);
    } else {
      T28 = stypeF2654;
    }
    stypeF2656 = T28;
    T30 = CALL3(1,VARREF(YevalSastYobjectify),stypeF2656,FREEREF(1),YPfalse);
    typeF2657 = T30;
    T32 = CALL2(1,VARREF(YevalSastYobjectify_quotation),snameF2653,FREEREF(1));
    nameF2658 = T32;
    T34 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_name),snameF2653,VARREF(YevalSastYbinding_type),typeF2657,VARREF(YevalSastYbinding_dottedQ),dottedQF2655);
    bindingF2659 = T34;
    T36 = CALL1(1,VARREF(Ytail),params_);
    T37 = CALL2(1,VARREF(YgooSmacrosYpair),bindingF2659,bindings_);
    T38 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG),VARREF(Yhead),nameF2658,VARREF(Ytail),names_);
    T39 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG),VARREF(Yhead),typeF2657,VARREF(Ytail),types_);
    a1 = T36;
    a2 = dottedQF2655;
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

FUNCODEDEF(fun_objectify_signature_278) {
  P sig_,r_;
  P colF2661;
  P sexpr_paramsF2660;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(sig_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_parameters),sig_);
  sexpr_paramsF2660 = T1;
  T3 = FUNSHELL(1,fun_col_277,3);
  colF2661 = T3;
  FUNINIT(colF2661, 3,sig_,r_,colF2661);
  T5 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLfab_listG));
  T6 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLfab_listG));
  T4 = CALL5(0,colF2661,sexpr_paramsF2660,YPfalse,Ynil,T5,T6);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_find_279) {
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

FUNCODEDEF(fun_loop_280) {
  P i_,r_;
  P findF2662;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL2(1,VARREF(YisaQ),r_,VARREF(YevalSastYLstatic_local_environmentG));
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_find_279,5);
    findF2662 = T3;
    FUNINIT(findF2662, 5,i_,r_,FREEREF(0),FREEREF(1),findF2662);
    T5 = CALL1(1,VARREF(YevalSastYenvironment_bindings),r_);
    T4 = CALL2(0,findF2662,YPint((P)0),T5);
    T2 = T4;
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(YevalSastYbinding_name),FREEREF(1));
    T6 = CALL3(1,VARREF(Yerror),LITREF(lit_366),T7,r_);
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_compute_local_reference_offsets_281) {
  P binding_,r_;
  P loopF2663;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(r_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_280,2);
  loopF2663 = T1;
  FUNINIT(loopF2663, 2,loopF2663,binding_);
  T2 = CALL2(0,loopF2663,YPint((P)0),r_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_binding_282) {
  P n_,b_,r_;
  P jF2666;
  P iF2665;
  P tup34F2664;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(n_, 0);
  ARG(b_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL2(1,VARREF(YevalSastYcompute_local_reference_offsets),b_,r_);
  tup34F2664 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup34F2664,YPint((P)0));
  iF2665 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup34F2664,YPint((P)1));
  jF2666 = T5;
  T6 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_binding),b_,VARREF(YevalSastYreference_frame_number),iF2665,VARREF(YevalSastYreference_frame_offset),jF2666);
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_binding_reference_class_283) {
  P b_;
  P x_1730F2668;
  P x_1729F2667;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),b_);
  x_1729F2667 = T1;
  x_1730F2668 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_1730F2668,x_1729F2667,LITREF(lit_41));
  if (T4 != YPfalse) {
    T3 = VARREF(YevalSastYLglobal_referenceG);
  } else {
    T6 = CALL2(1,x_1730F2668,x_1729F2667,LITREF(lit_344));
    if (T6 != YPfalse) {
      T5 = VARREF(YevalSastYLpredefined_referenceG);
    } else {
      T8 = CALL2(1,x_1730F2668,x_1729F2667,LITREF(lit_320));
      if (T8 != YPfalse) {
        T7 = VARREF(YevalSastYLruntime_referenceG);
      } else {
        T10 = CALL1(1,VARREF(YevalSastYbinding_kind),b_);
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

FUNCODEDEF(fun_objectify_binding_284) {
  P n_,b_,r_;
  P LrefGF2672;
  P tmpF2671;
  P x_1732F2670;
  P x_1731F2669;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3;
LINK_STACK();
  ARG(n_, 0);
  ARG(b_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),b_);
  x_1731F2669 = T1;
  x_1732F2670 = VARREF(YgooSmacrosYEE);
  T5 = CALL2(1,x_1732F2670,x_1731F2669,LITREF(lit_283));
  tmpF2671 = T5;
  if (tmpF2671 != YPfalse) {
    T6 = tmpF2671;
  } else {
    T7 = CALL2(1,x_1732F2670,x_1731F2669,LITREF(lit_284));
    T6 = T7;
  }
  T4 = T6;
  if (T4 != YPfalse) {
    T3 = b_;
  } else {
    T9 = CALL1(1,VARREF(YevalSastYbinding_reference_class),b_);
    LrefGF2672 = T9;
    T10 = CALL3(1,VARREF(Ynew),LrefGF2672,VARREF(YevalSastYreference_binding),b_);
    T8 = T10;
    T3 = T8;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_binding_285) {
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

FUNCODEDEF(fun_default_type_286) {
  P r_;
  P T0;
  P a1;
LINK_STACK();
  ARG(r_, 0);
loop:
  T0 = CALL3(1,VARREF(YevalSastYobjectify),LITREF(lit_372),r_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_free_global_reference_287) {
  P name_,r_;
  P bF2675;
  P tmpF2674;
  P grF2673;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  grF2673 = T1;
  T4 = CALL1(1,VARREF(YevalSastYenvironment_allows_foreign_namesQ),grF2673);
  tmpF2674 = T4;
  if (tmpF2674 != YPfalse) {
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
    bF2675 = T9;
    CALL2(1,VARREF(YevalSastYinsert_globalX),bF2675,grF2673);
    T11 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYreference_binding),bF2675);
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

FUNCODEDEF(fun_objectify_foreign_reference_289) {
  P name_,r_;
  P bindingF2684;
  P modF2683;
  P loaderF2682;
  P grF2681;
  P tmpF2680;
  P varnameF2679;
  P modnameF2678;
  P breakF2677;
  P namestrF2676;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  namestrF2676 = T1;
  T3 = CALL2(1,VARREF(YgooScolsSseqYpos),namestrF2676,YPchr((P)58));
  breakF2677 = T3;
  T5 = CALL3(1,VARREF(YgooScolsSseqYsub),namestrF2676,YPint((P)0),breakF2677);
  modnameF2678 = T5;
  T8 = CALL2(1,VARREF(YgooSmathYA),YPint((P)1),breakF2677);
  T9 = CALL1(1,VARREF(YgooStypesYlen),namestrF2676);
  T7 = CALL3(1,VARREF(YgooScolsSseqYsub),namestrF2676,T8,T9);
  varnameF2679 = T7;
  T13 = CALL1(1,VARREF(YgooStypesYlen),modnameF2678);
  T12 = CALL2(1,VARREF(YgooSmagYG),T13,YPint((P)0));
  tmpF2680 = T12;
  if (tmpF2680 != YPfalse) {
    T16 = CALL1(1,VARREF(YgooStypesYlen),varnameF2679);
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
  T19 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  grF2681 = T19;
  T21 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),grF2681);
  loaderF2682 = T21;
  T24 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),modnameF2678);
  T23 = CALL2(1,VARREF(YevalSastYprobe_module),loaderF2682,T24);
  modF2683 = T23;
  T27 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),varnameF2679);
  T28 = CALL1(1,VARREF(YevalSastYmodule_target_environment),modF2683);
  T26 = CALL2(1,VARREF(YevalSastYfind_binding),T27,T28);
  bindingF2684 = T26;
  CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2684,grF2681);
  T29 = CALL1(1,VARREF(Ynot),bindingF2684);
  if (T29 != YPfalse) {
    T30 = CALL3(1,VARREF(Yerror),LITREF(lit_377),varnameF2679,modnameF2678);
  } else {
  }
  T31 = CALL3(1,VARREF(YevalSastYobjectify_binding),name_,bindingF2684,r_);
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

FUNCODEDEF(fun_objectify_symbol_290) {
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

FUNCODEDEF(fun_ftype_291) {
  P r_;
  P T0;
  P a1;
LINK_STACK();
  ARG(r_, 0);
loop:
  T0 = CALL3(1,VARREF(YevalSastYobjectify),LITREF(lit_380),r_,YPfalse);
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

FUNCODEDEF(fun_empty_293) {
  P e_;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YevalSastYDfunctions_empty));
}

FUNCODEDEF(fun_294) {
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

FUNCODEDEF(fun_295) {
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

FUNCODEDEF(fun_objectify_locals_296) {
  P names_,sigs_,bodies_,body_,r_,tailQ_;
  P functionsF2688;
  P function_formsF2687;
  P new_rF2686;
  P bindingsF2685;
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
  T2 = FUNFAB(fun_294,1,r_);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),T2,names_);
  bindingsF2685 = T1;
  T4 = CALL2(1,VARREF(YevalSastYr_extendT),r_,bindingsF2685);
  new_rF2686 = T4;
  T6 = CALL3(1,VARREF(YgooScolsSseqYmap2),VARREF(YevalSsyntaxYsexpr_make_anonymous_method),sigs_,bodies_);
  function_formsF2687 = T6;
  T9 = CALL3(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSastYobjectify),new_rF2686,YPfalse);
  T8 = CALL2(1,VARREF(YgooSmacrosYmap),T9,function_formsF2687);
  functionsF2688 = T8;
  T10 = FUNFAB(fun_295,1,r_);
  CALL3(1,VARREF(YgooScolsSseqYdo2),T10,functionsF2688,bindingsF2685);
  T12 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmathYfabs),YPfalse,VARREF(YevalSastYLfunctionsG),functionsF2688);
  T13 = CALL3(1,VARREF(YevalSastYobjectify_sequential),body_,new_rF2686,YPtrue);
  T11 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_bindings),bindingsF2685,VARREF(YevalSastYlocals_functions),T12,VARREF(YevalSastYlocals_body),T13);
  T7 = T11;
  T5 = T7;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_bind_exit_297) {
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

FUNCODEDEF(fun_objectify_unwind_protect_298) {
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

FUNCODEDEF(fun_objectify_monitor_299) {
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

FUNCODEDEF(fun_300) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_301) {
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

FUNCODEDEF(fun_302) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(Yerror),LITREF(lit_399),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_303) {
  P exit_;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(exit_, 0);
loop:
  T2 = CALL1(1,VARREF(Ylst),FREEREF(0));
  T1 = CALL5(1,VARREF(Ynew),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_398),VARREF(Yhandler_info_arguments),T2);
  T3 = fun_300;
  T4 = FUNFAB(fun_301,1,exit_);
  T5 = FUNFAB(fun_302,1,FREEREF(0));
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YgooSruntimeYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_304) {
  P name_;
  P bindingF2689;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL2(1,VARREF(YevalSastYfind_binding),name_,FREEREF(0));
  bindingF2689 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),bindingF2689,YPfalse);
  if (T3 != YPfalse) {
    T5 = FUNFAB(fun_303,1,name_);
    T4 = with_exit(T5);
    T2 = T4;
  } else {
    T6 = CALL3(1,VARREF(YevalSastYexport_bindingX),FREEREF(1),name_,bindingF2689);
    T2 = T6;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_export_305) {
  P names_,r_,tailQ_;
  P moduleF2691;
  P envF2690;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(names_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF2690 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  moduleF2691 = T3;
  T6 = CALL1(1,VARREF(YevalSastYmodule_target_environment),moduleF2691);
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),envF2690,T6);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T7 = CALL1(1,VARREF(Yerror),LITREF(lit_396));
  } else {
  }
  T8 = FUNFAB(fun_304,2,envF2690,moduleF2691);
  CALL2(1,VARREF(YgooSmacrosYdo),T8,names_);
  T9 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
  T2 = T9;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYimport_globalX) {
  P b_,env_;
  P tmpF2693;
  P existingF2692;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(b_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
  T1 = CALL2(1,VARREF(YevalSastYfind_binding),T2,env_);
  existingF2692 = T1;
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2692,YPfalse);
  tmpF2693 = T5;
  if (tmpF2693 != YPfalse) {
    T6 = tmpF2693;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2692,b_);
    T6 = T7;
  }
  T4 = T6;
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
    T10 = CALL1(1,VARREF(YevalSastYbinding_module_name),b_);
    T8 = CALL4(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_402),T9,T10);
  } else {
  }
  CALL2(1,VARREF(YevalSastYinsert_globalX),b_,env_);
  T0 = YPfalse;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_307) {
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

FUNCODEDEF(fun_objectify_useSexport_module_308) {
  P name_,r_,tailQ_;
  P used_moduleF2697;
  P loaderF2696;
  P moduleF2695;
  P envF2694;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF2694 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfind_environment_module),r_);
  moduleF2695 = T3;
  T5 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),envF2694);
  loaderF2696 = T5;
  T7 = CALL2(1,VARREF(YevalSastYprobe_module),loaderF2696,name_);
  used_moduleF2697 = T7;
  T8 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF2694);
  CALL2(1,VARREF(YgooScolsSseqxYpushX),T8,used_moduleF2697);
  T9 = FUNFAB(fun_307,2,envF2694,moduleF2695);
  T10 = CALL1(1,VARREF(YevalSastYmodule_exports),used_moduleF2697);
  CALL2(1,VARREF(YgooSmacrosYdo),T9,T10);
  T11 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
  T6 = T11;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_309) {
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

FUNCODEDEF(fun_objectify_use_module_310) {
  P name_,r_,tailQ_;
  P used_moduleF2700;
  P loaderF2699;
  P envF2698;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  envF2698 = T1;
  T3 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),envF2698);
  loaderF2699 = T3;
  T5 = CALL2(1,VARREF(YevalSastYprobe_module),loaderF2699,name_);
  used_moduleF2700 = T5;
  T6 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF2698);
  CALL2(1,VARREF(YgooScolsSseqxYpushX),T6,used_moduleF2700);
  T7 = FUNFAB(fun_309,1,envF2698);
  T8 = CALL1(1,VARREF(YevalSastYmodule_exports),used_moduleF2700);
  CALL2(1,VARREF(YgooSmacrosYdo),T7,T8);
  T9 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
  T4 = T9;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_expand_bind_list_311) {
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

FUNCODEDEF(fun_expand_bind_list_312) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_409));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T3 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,Ynil);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_expand_bind_list_313) {
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
    T2 = CALL2(1,VARREF(Yerror),LITREF(lit_410),pat_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquote_splicingQ),pat_);
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(Yerror),LITREF(lit_411),pat_);
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

FUNCODEDEF(fun_expand_bind_listT_314) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_409));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T3 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_bind_listT_315) {
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

FUNCODEDEF(fun_expand_bind_element_316) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
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
  T0 = CALL5(1,VARREF(YgooSmacrosYcat),T1,T2,T3,T7,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_bind_element_317) {
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
    T11 = CALL1(1,VARREF(Ylst),LITREF(lit_415));
    T12 = CALL1(1,VARREF(Ylst),var_);
    T13 = CALL1(1,VARREF(Ylst),fail_);
    T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,Ynil);
    T9 = CALL1(1,VARREF(Ylst),T10);
    T5 = CALL4(1,VARREF(YgooSmacrosYcat),T6,T7,T9,Ynil);
    T4 = CALL1(1,VARREF(Ylst),T5);
    T16 = CALL1(1,VARREF(Ylst),LITREF(lit_159));
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
      T30 = CALL1(1,VARREF(Ylst),LITREF(lit_306));
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
        T45 = CALL1(1,VARREF(Ylst),LITREF(lit_416));
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
        T52 = CALL1(1,VARREF(Ylst),LITREF(lit_159));
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

FUNCODEDEF(fun_expand_pattern_318) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_347));
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_418));
  T5 = CALL1(1,VARREF(Ylst),var_);
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_152));
  T3 = CALL4(1,VARREF(YgooSmacrosYcat),T4,T5,T6,Ynil);
  T2 = CALL1(1,VARREF(Ylst),T3);
  T8 = CALL3(1,VARREF(YevalSastYexpand_bind_list),pat_,var_,fail_);
  T7 = CALL1(1,VARREF(Ylst),T8);
  T11 = CALL1(1,VARREF(Ylst),fail_);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_419));
  T13 = CALL1(1,VARREF(Ylst),var_);
  T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,Ynil);
  T9 = CALL1(1,VARREF(Ylst),T10);
  T0 = CALL5(1,VARREF(YgooSmacrosYcat),T1,T2,T7,T9,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_319) {
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

FUNCODEDEF(fun_expand_syntax_if_320) {
  P x_;
  P epatF2708;
  P failF2707;
  P varF2706;
  P elseF2705;
  P thenF2704;
  P valueF2703;
  P varsF2702;
  P patF2701;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_pattern),x_);
  patF2701 = T1;
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_bind_pattern_variables),patF2701);
  varsF2702 = T3;
  T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_value),x_);
  valueF2703 = T5;
  T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_then),x_);
  thenF2704 = T7;
  T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_else),x_);
  elseF2705 = T9;
  T11 = CALL0(1,VARREF(YgooSmacrosYgensym));
  varF2706 = T11;
  T13 = CALL0(1,VARREF(YgooSmacrosYgensym));
  failF2707 = T13;
  T15 = CALL3(1,VARREF(YevalSastYexpand_pattern),patF2701,varF2706,failF2707);
  epatF2708 = T15;
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_421));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_2));
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_422));
  T26 = CALL1(1,VARREF(Ylst),failF2707);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_4));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_423));
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_5));
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_353));
  T34 = CALL3(1,VARREF(YgooSmacrosYcat),T35,T36,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T33,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_2));
  T40 = CALL1(1,VARREF(Ylst),elseF2705);
  T38 = CALL3(1,VARREF(YgooSmacrosYcat),T39,T40,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T27,T37,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T23 = CALL2(1,VARREF(YgooSmacrosYcat),T24,Ynil);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T48 = CALL1(1,VARREF(Ylst),varF2706);
  T49 = CALL1(1,VARREF(Ylst),valueF2703);
  T47 = CALL3(1,VARREF(YgooSmacrosYcat),T48,T49,Ynil);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T45 = CALL2(1,VARREF(YgooSmacrosYcat),T46,Ynil);
  T44 = CALL1(1,VARREF(Ylst),T45);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T55 = fun_319;
  T54 = CALL2(1,VARREF(YgooSmacrosYmap),T55,varsF2702);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T56 = CALL1(1,VARREF(Ylst),epatF2708);
  T57 = CALL1(1,VARREF(Ylst),thenF2704);
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

FUNCODEDEF(fun_r_extendT_321) {
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

FUNCODEDEF(fun_insert_globalX_322) {
  P binding_,r_;
  P rF2709;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_static_global_environment),r_);
  check_type(T1,VARREF(YevalSastYLstatic_global_environmentG));
  rF2709 = T1;
  T3 = CALL1(1,VARREF(YevalSastYenvironment_bindings),rF2709);
  T4 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
  T2 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),binding_,T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_323) {
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

FUNCODEDEF(fun_insert_globalsX_324) {
  P bindings_,r_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(bindings_, 0);
  ARG(r_, 1);
loop:
  T1 = FUNFAB(fun_323,1,r_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,bindings_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_static_global_environment_325) {
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

FUNCODEDEF(fun_find_static_global_environment_326) {
  P r_;
  P a1;
LINK_STACK();
  ARG(r_, 0);
loop:
UNLINK_STACK();
  RET(r_);
}

FUNCODEDEF(fun_find_syntax_environment_327) {
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

FUNCODEDEF(fun_find_environment_module_328) {
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

FUNCODEDEF(fun_loop_329) {
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

FUNCODEDEF(fun_find_binding_330) {
  P name_,r_;
  P loopF2710;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_329,3);
  loopF2710 = T1;
  FUNINIT(loopF2710, 3,name_,r_,loopF2710);
  T3 = CALL1(1,VARREF(YevalSastYenvironment_bindings),r_);
  T2 = CALL1(0,loopF2710,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_binding_331) {
  P name_,r_;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_find_binding_332) {
  P name_,r_;
  P tmpF2711;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYenvironment_bindings),r_);
  T1 = CALL3(1,VARREF(YgooScolsScolYelt_or),T2,name_,YPfalse);
  tmpF2711 = T1;
  if (tmpF2711 != YPfalse) {
    T3 = tmpF2711;
  } else {
    T5 = CALL1(1,VARREF(YevalSastYenvironment_next),r_);
    T4 = CALL2(1,VARREF(YevalSastYfind_binding),name_,T5);
    T3 = T4;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_frame_bindings_333) {
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

FUNCODEDEF(fun_register_magic_binding_334) {
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

FUNCODEDEF(fun_magic_bindings_335) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(VARREF(YevalSastYTmagic_bindingsT));
}

FUNCODEDEF(fun_x_1736_336) {
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

FUNCODEDEF(fun_337) {
  P return_;
  P sexpr_nameF2724;
  P special_nameF2723;
  P x_1735F2722;
  P x_1735F2721;
  P x_1735F2720;
  P x_1735F2719;
  P x_1735F2718;
  P x_1735F2717;
  P bodyF2716;
  P paramsF2715;
  P nameF2714;
  P x_1735F2713;
  P x_1736F2712;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1736_336,1);
  x_1736F2712 = T1;
  FUNINIT(x_1736F2712, 1,return_);
  x_1735F2713 = FREEREF(0);
  nameF2714 = YPfalse;
  nameF2714 = BOXFAB(nameF2714);
  paramsF2715 = YPfalse;
  paramsF2715 = BOXFAB(paramsF2715);
  bodyF2716 = YPfalse;
  bodyF2716 = BOXFAB(bodyF2716);
  T9 = CALL2(1,VARREF(YisaQ),x_1735F2713,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1735F2713,LITREF(lit_435),x_1736F2712);
    x_1735F2717 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1735F2717,x_1736F2712);
    BOXVAL(nameF2714) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1735F2717);
    x_1735F2718 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1735F2718,x_1736F2712);
    x_1735F2719 = T16;
    BOXVAL(paramsF2715) = x_1735F2719;
    x_1735F2720 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1735F2720,x_1736F2712);
    T17 = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1735F2718);
    x_1735F2721 = T19;
    BOXVAL(bodyF2716) = x_1735F2721;
    x_1735F2722 = Ynil;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1735F2722,x_1736F2712);
    T20 = T21;
    T15 = T20;
    T12 = T15;
    T10 = T12;
  } else {
    T22 = CALL2(1,x_1736F2712,LITREF(lit_7),x_1735F2713);
  }
  T25 = BOXVAL(nameF2714);
  T24 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_436),T25);
  special_nameF2723 = T24;
  T28 = BOXVAL(nameF2714);
  T27 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_437),T28,LITREF(lit_438));
  sexpr_nameF2724 = T27;
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_153));
  T34 = CALL1(1,VARREF(Ylst),special_nameF2723);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_154));
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_38));
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_39));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_306));
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_283));
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T45 = CALL1(1,VARREF(Ylst),sexpr_nameF2724);
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_42));
  T47 = CALL1(1,VARREF(Ylst),YPfalse);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_439));
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_440));
  T54 = BOXVAL(paramsF2715);
  T53 = CALL2(1,VARREF(YgooSmacrosYcat),T54,Ynil);
  T52 = CALL1(1,VARREF(Ylst),T53);
  T55 = BOXVAL(bodyF2716);
  T50 = CALL4(1,VARREF(YgooSmacrosYcat),T51,T52,T55,Ynil);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_44));
  T57 = CALL1(1,VARREF(Ylst),YPfalse);
  T36 = CALLN(1,VARREF(YgooSmacrosYcat),13,T37,T38,T39,T40,T44,T45,T46,T47,T48,T49,T56,T57,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T32 = CALL4(1,VARREF(YgooSmacrosYcat),T33,T34,T35,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_432));
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_306));
  T65 = BOXVAL(nameF2714);
  T64 = CALL1(1,VARREF(Ylst),T65);
  T62 = CALL3(1,VARREF(YgooSmacrosYcat),T63,T64,Ynil);
  T61 = CALL1(1,VARREF(Ylst),T62);
  T66 = CALL1(1,VARREF(Ylst),special_nameF2723);
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

FUNCODEDEF(fun_338) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_337,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_339) {
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

FUNCODEDEF(fun_340) {
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

FUNCODEDEF(fun_341) {
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

FUNCODEDEF(fun_342) {
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

FUNCODEDEF(fun_343) {
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

FUNCODEDEF(fun_344) {
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
  T0 = CALL3(1,VARREF(YevalSastYobjectify_definition),T1,T2,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_345) {
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

FUNCODEDEF(fun_346) {
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

FUNCODEDEF(fun_347) {
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

FUNCODEDEF(fun_348) {
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

FUNCODEDEF(fun_349) {
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

FUNCODEDEF(fun_350) {
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

FUNCODEDEF(fun_351) {
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

FUNCODEDEF(fun_352) {
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

FUNCODEDEF(fun_353) {
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

FUNCODEDEF(fun_354) {
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

FUNCODEDEF(fun_355) {
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

FUNCODEDEF(fun_356) {
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

FUNCODEDEF(fun_357) {
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

FUNCODEDEF(fun_358) {
  P x_,r_,tailQ_;
  P bodyF2730;
  P handlerF2729;
  P testF2728;
  P infoF2727;
  P typeF2726;
  P tup35F2725;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_monitor_expand),x_);
  tup35F2725 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup35F2725,YPint((P)0));
  typeF2726 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup35F2725,YPint((P)1));
  infoF2727 = T5;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup35F2725,YPint((P)2));
  testF2728 = T7;
  T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup35F2725,YPint((P)3));
  handlerF2729 = T9;
  T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup35F2725,YPint((P)4));
  bodyF2730 = T11;
  T12 = CALLN(1,VARREF(YevalSastYobjectify_monitor),7,typeF2726,infoF2727,testF2728,handlerF2729,bodyF2730,r_,tailQ_);
  T10 = T12;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pairize_359) {
  P args_;
  P T0,T1,T2,T3,T4,T5,T6;
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
    T5 = CALL1(1,VARREF(YevalSastYpairize),T6);
    T3 = CALL3(1,VARREF(Ylst),LITREF(lit_307),T4,T5);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_360) {
  P x_,r_,tailQ_;
  P nameF2731;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_definition_variable),x_);
  nameF2731 = T1;
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_458));
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_306));
  T8 = CALL1(1,VARREF(Ylst),nameF2731);
  T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,Ynil);
  T5 = CALL1(1,VARREF(Ylst),T6);
  T11 = CALL1(1,VARREF(YevalSsyntaxYsexpr_define_class_parents),x_);
  T10 = CALL1(1,VARREF(YevalSastYpairize),T11);
  T9 = CALL1(1,VARREF(Ylst),T10);
  T3 = CALL4(1,VARREF(YgooSmacrosYcat),T4,T5,T9,Ynil);
  T2 = CALL3(1,VARREF(YevalSastYobjectify_definition),nameF2731,T3,r_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_361) {
  P x_,r_,tailQ_;
  P typeF2736;
  P setter_nameF2735;
  P ownerF2734;
  P varF2733;
  P nameF2732;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_name),x_);
  nameF2732 = T1;
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_init_var),x_);
  varF2733 = T3;
  T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_owner),x_);
  ownerF2734 = T5;
  T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_fab_setter_name),nameF2732);
  setter_nameF2735 = T7;
  T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_type),x_);
  typeF2736 = T9;
  T13 = CALL2(1,VARREF(YevalSsyntaxYsexpr_fab_getter),nameF2732,ownerF2734);
  T14 = CALL3(1,VARREF(YevalSsyntaxYsexpr_fab_setter),nameF2732,ownerF2734,typeF2736);
  T18 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_initQ),x_);
  if (T18 != YPfalse) {
    T23 = CALL1(1,VARREF(Ylst),varF2733);
    T24 = CALL1(1,VARREF(Ylst),LITREF(lit_372));
    T22 = CALL3(1,VARREF(YgooSmacrosYcat),T23,T24,Ynil);
    T21 = CALL1(1,VARREF(Ylst),T22);
    T20 = CALL2(1,VARREF(YgooSmacrosYcat),T21,Ynil);
    T26 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_init),x_);
    T25 = CALL1(1,VARREF(Ylst),T26);
    T19 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),T20,T25);
    T17 = T19;
  } else {
    T17 = LITREF(lit_461);
  }
  T16 = CALL5(1,VARREF(Ylst),ownerF2734,nameF2732,setter_nameF2735,typeF2736,T17);
  T15 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_application),LITREF(lit_460),T16);
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

FUNCODEDEF(fun_362) {
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

FUNCODEDEF(fun_363) {
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

FUNCODEDEF(fun_364) {
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
    CALL4(1,VARREF(YevalSastYast_define_binding),r_,T2,YPfalse,LITREF(lit_344));
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

FUNCODEDEF(fun_365) {
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

FUNCODEDEF(fun_ast_macro_expand_366) {
  P x_,r_,tailQ_;
  P resF2739;
  P tmpF2738;
  P mF2737;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T2 = CALL1(1,VARREF(Yhead),x_);
  T1 = CALL3(1,VARREF(YevalSastYobjectify),T2,r_,tailQ_);
  mF2737 = T1;
  T5 = CALL2(1,VARREF(YisaQ),mF2737,VARREF(YevalSastYLmodule_bindingG));
  tmpF2738 = T5;
  if (tmpF2738 != YPfalse) {
    T8 = CALL1(1,VARREF(YevalSastYbinding_kind),mF2737);
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),T8,LITREF(lit_284));
    T6 = T7;
  } else {
    T6 = YPfalse;
  }
  T4 = T6;
  if (T4 != YPfalse) {
    T11 = CALL1(1,VARREF(YevalSastYbinding_handler),mF2737);
    T10 = CALL3(1,T11,x_,r_,tailQ_);
    resF2739 = T10;
    T9 = resF2739;
    T3 = T9;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_367) {
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

FUNCODEDEF(fun_368) {
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

FUNCODEDEF(fun_369) {
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

FUNCODEDEF(fun_370) {
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

FUNCODEDEF(fun_371) {
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

FUNCODEDEF(fun_transaction_implemented_bindings_372) {
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

FUNCODEDEF(fun_transaction_implemented_bindings_setter_373) {
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

FUNCODEDEF(fun_374) {
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

FUNCODEDEF(fun_transaction_dependents_375) {
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

FUNCODEDEF(fun_transaction_dependents_setter_376) {
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

FUNCODEDEF(fun_377) {
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
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_484));
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
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_487));
  } else {
  }
  T3 = CALL1(1,VARREF(YevalSastYtransaction_dependents),VARREF(YevalSastYTcurrent_subtransactionT));
  T2 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,T3,d_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(YevalSastYtransaction_emptyQ) {
  P t_;
  P tmpF2740;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYtransaction_implemented_bindings),t_);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T2);
  tmpF2740 = T1;
  if (tmpF2740 != YPfalse) {
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

FUNCODEDEF(fun_381) {
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

FUNCODEDEF(fun_382) {
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
  P t2_dependentsF2744;
  P t1_dependentsF2743;
  P t2_bindingsF2742;
  P t1_bindingsF2741;
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
        t1_bindingsF2741 = T6;
        T8 = CALL1(1,VARREF(YevalSastYtransaction_implemented_bindings),t2_);
        t2_bindingsF2742 = T8;
        T10 = CALL1(1,VARREF(YevalSastYtransaction_dependents),t1_);
        t1_dependentsF2743 = T10;
        T12 = CALL1(1,VARREF(YevalSastYtransaction_dependents),t2_);
        t2_dependentsF2744 = T12;
        T13 = FUNFAB(fun_381,1,t1_bindingsF2741);
        CALL2(1,VARREF(YgooScolsScolYdo_keyed),T13,t2_bindingsF2742);
        T14 = FUNFAB(fun_382,1,t1_dependentsF2743);
        CALL2(1,VARREF(YgooScolsScolYdo_keyed),T14,t2_dependentsF2744);
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

FUNCODEDEF(fun_384) {
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

FUNCODEDEF(fun_385) {
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
  T0 = fun_384;
  T1 = CALL1(1,VARREF(YevalSastYtransaction_implemented_bindings),t_);
  CALL2(1,VARREF(YgooScolsScolYdo_keyed),T0,T1);
  T3 = fun_385;
  T4 = CALL1(1,VARREF(YevalSastYtransaction_dependents),t_);
  T2 = CALL2(1,VARREF(YgooScolsScolYdo_keyed),T3,T4);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_387) {
  P valueF2745;
  P T0,T1,T2;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(Ynew),VARREF(YevalSastYLtransactionG));
  VARSET(YevalSastYTcurrent_subtransactionT,T0);
  T2 = CALL0(1,FREEREF(0));
  valueF2745 = T2;
  BOXVAL(FREEREF(1)) = YPtrue;
  T1 = valueF2745;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_388) {
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
  P savedF2747;
  P successF2746;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(module_, 0);
  ARG(thunk_, 1);
loop:
  successF2746 = YPfalse;
  successF2746 = BOXFAB(successF2746);
  savedF2747 = VARREF(YevalSastYTcurrent_subtransactionT);
  T4 = FUNFAB(fun_387,2,thunk_,successF2746);
  T5 = FUNFAB(fun_388,3,successF2746,module_,savedF2747);
  T3 = with_cleanup(T4,T5);
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1740_390) {
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

FUNCODEDEF(fun_391) {
  P return_;
  P x_1739F2756;
  P x_1739F2755;
  P x_1739F2754;
  P x_1739F2753;
  P x_1739F2752;
  P bodyF2751;
  P moduleF2750;
  P x_1739F2749;
  P x_1740F2748;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1740_390,1);
  x_1740F2748 = T1;
  FUNINIT(x_1740F2748, 1,return_);
  x_1739F2749 = FREEREF(0);
  moduleF2750 = YPfalse;
  moduleF2750 = BOXFAB(moduleF2750);
  bodyF2751 = YPfalse;
  bodyF2751 = BOXFAB(bodyF2751);
  T7 = CALL2(1,VARREF(YisaQ),x_1739F2749,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1739F2749,LITREF(lit_500),x_1740F2748);
    x_1739F2752 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1739F2752,x_1740F2748);
    x_1739F2753 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1739F2753,x_1740F2748);
    BOXVAL(moduleF2750) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1739F2753);
    x_1739F2754 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1739F2754,x_1740F2748);
    T12 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1739F2752);
    x_1739F2755 = T16;
    BOXVAL(bodyF2751) = x_1739F2755;
    x_1739F2756 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1739F2756,x_1740F2748);
    T17 = T18;
    T10 = T17;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1740F2748,LITREF(lit_7),x_1739F2749);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_496));
  T23 = BOXVAL(moduleF2750);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_440));
  T27 = CALL1(1,VARREF(Ylst),Ynil);
  T28 = BOXVAL(bodyF2751);
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

FUNCODEDEF(fun_392) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_391,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_393) {
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
  T2 = FUNFAB(fun_393,3,e_,r_,tailQ_);
  T0 = CALL2(1,VARREF(YevalSastYcall_with_subtransaction),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_modules_395) {
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

FUNCODEDEF(fun_module_loader_modules_setter_396) {
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

FUNCODEDEF(fun_397) {
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

FUNCODEDEF(fun_module_loader_stack_398) {
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

FUNCODEDEF(fun_module_loader_stack_setter_399) {
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

FUNCODEDEF(fun_400) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_module_name_401) {
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

FUNCODEDEF(fun_module_name_setter_402) {
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

FUNCODEDEF(fun_module_mangled_name_403) {
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

FUNCODEDEF(fun_module_mangled_name_setter_404) {
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

FUNCODEDEF(fun_405) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_module_mangled_string_name_406) {
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

FUNCODEDEF(fun_module_mangled_string_name_setter_407) {
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

FUNCODEDEF(fun_408) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_module_target_environment_409) {
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

FUNCODEDEF(fun_module_target_environment_setter_410) {
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

FUNCODEDEF(fun_module_syntax_environment_411) {
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

FUNCODEDEF(fun_module_syntax_environment_setter_412) {
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

FUNCODEDEF(fun_Pmodule_exports_413) {
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

FUNCODEDEF(fun_Pmodule_exports_setter_414) {
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

FUNCODEDEF(fun_415) {
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

FUNCODEDEF(fun_module_data_processedQ_416) {
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

FUNCODEDEF(fun_module_data_processedQ_setter_417) {
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

FUNCODEDEF(fun_418) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_module_runtime_data_419) {
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

FUNCODEDEF(fun_module_runtime_data_setter_420) {
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

FUNCODEDEF(fun_421) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_module_transaction_422) {
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

FUNCODEDEF(fun_module_transaction_setter_423) {
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

FUNCODEDEF(fun_424) {
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

FUNCODEDEF(fun_module_exports_425) {
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

FUNCODEDEF(fun_427) {
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
  T1 = FUNFAB(fun_427,1,f_);
  T2 = CALL1(1,VARREF(YevalSastYmodule_loader_modules),loader_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_module_type_429) {
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
  P tmpF2757;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYmodule_loader_modules),loader_);
  T1 = CALL3(1,VARREF(YgooScolsScolYelt_or),T2,name_,YPfalse);
  tmpF2757 = T1;
  if (tmpF2757 != YPfalse) {
    T3 = tmpF2757;
  } else {
    T4 = CALL2(1,VARREF(YevalSastYload_and_register_module),loader_,name_);
    T3 = T4;
  }
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_432) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YevalSastYload_module),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_433) {
  P x_1744F2761;
  P x_1743F2760;
  P tup36F2759;
  P x_1742F2758;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
loop:
  x_1742F2758 = FREEREF(0);
  T3 = CALL1(1,VARREF(YevalSastYmodule_loader_stack),x_1742F2758);
  T2 = CALL1(1,VARREF(YgooScolsSseqxYpopX),T3);
  tup36F2759 = T2;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup36F2759,YPint((P)0));
  x_1743F2760 = T5;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup36F2759,YPint((P)1));
  x_1744F2761 = T7;
  CALL2(1,VARREF(YevalSastYmodule_loader_stack_setter),x_1743F2760,x_1742F2758);
  T6 = x_1744F2761;
  T4 = T6;
  T1 = T4;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYload_and_register_module) {
  P loader_,name_;
  P modF2766;
  P x_1741F2765;
  P indentF2764;
  P depthF2763;
  P stackF2762;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_loader_stack),loader_);
  stackF2762 = T1;
  T3 = CALL1(1,VARREF(YgooStypesYlen),stackF2762);
  depthF2763 = T3;
  T5 = CALL2(1,VARREF(YgooScolsSseqYrepeat),LITREF(lit_538),depthF2763);
  indentF2764 = T5;
  T6 = CALL2(1,VARREF(YgooScolsScolYmemQ),stackF2762,name_);
  if (T6 != YPfalse) {
    T8 = CALL1(1,VARREF(Yhead),stackF2762);
    T7 = CALL3(1,VARREF(Yerror),LITREF(lit_539),T8,name_);
  } else {
  }
  CALL4(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_540),indentF2764,name_);
  x_1741F2765 = loader_;
  T12 = CALL1(1,VARREF(YevalSastYmodule_loader_stack),x_1741F2765);
  T11 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T12,name_);
  T10 = CALL2(1,VARREF(YevalSastYmodule_loader_stack_setter),T11,x_1741F2765);
  T14 = FUNFAB(fun_432,2,loader_,name_);
  T15 = FUNFAB(fun_433,1,loader_);
  T13 = with_cleanup(T14,T15);
  modF2766 = T13;
  CALL2(1,VARREF(YevalSastYregister_moduleX),loader_,modF2766);
  CALL3(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_541),indentF2764);
  T9 = modF2766;
  T4 = T9;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYexport_bindingX) {
  P module_,name_,binding_;
  P tmpF2769;
  P existingF2768;
  P exportsF2767;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(module_, 0);
  ARG(name_, 1);
  ARG(binding_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_exports),module_);
  exportsF2767 = T1;
  T3 = CALL3(1,VARREF(YgooScolsScolYelt_or),exportsF2767,name_,YPfalse);
  existingF2768 = T3;
  T6 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2768,YPfalse);
  tmpF2769 = T6;
  if (tmpF2769 != YPfalse) {
    T7 = tmpF2769;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),existingF2768,binding_);
    T7 = T8;
  }
  T5 = T7;
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T9 = CALL5(1,VARREF(Yerror),LITREF(lit_544),existingF2768,binding_,module_,name_);
  } else {
  }
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),binding_,exportsF2767,name_);
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

FUNCODEDEF(fun_437) {
  P binding_;
  P tmpF2770;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYbinding_freeQ),binding_);
  tmpF2770 = T2;
  if (tmpF2770 != YPfalse) {
    T4 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYmodule_name),FREEREF(0));
    T7 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T5 = CALL4(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_547),T6,T7);
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
  T1 = FUNFAB(fun_437,1,mod_);
  T2 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T0 = CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_439) {
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

FUNCODEDEF(fun_440) {
  P mod_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T1 = FUNFAB(fun_439,3,FREEREF(0),mod_,FREEREF(1));
  T3 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T2 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),T3);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_add_user_441) {
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
    T4 = FUNFAB(fun_440,2,modname_,FREEREF(1));
    T3 = CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T4,FREEREF(2));
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_442) {
  P v_;
  P UF2771;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(v_, 0);
loop:
  T1 = BOXVAL(FREEREF(0));
  UF2771 = T1;
  T3 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2771,v_);
  T2 = BOXVAL(FREEREF(0)) = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYcompute_transitive_users) {
  P loader_,modnames_;
  P packer_F2774;
  P add_userF2773;
  P usersF2772;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(modnames_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)100));
  usersF2772 = T1;
  T3 = FUNSHELL(0,fun_add_user_441,3);
  add_userF2773 = T3;
  FUNINIT(add_userF2773, 3,usersF2772,add_userF2773,loader_);
  CALL2(1,VARREF(YgooSmacrosYdo),add_userF2773,modnames_);
  T5 = CALL1(1,VARREF(YgooSpackerYpacker_fab),VARREF(YLlstG));
  packer_F2774 = T5;
  packer_F2774 = BOXFAB(packer_F2774);
  T7 = FUNFAB(fun_442,1,packer_F2774);
  CALL2(1,VARREF(YgooSmacrosYdo),T7,usersF2772);
  T9 = BOXVAL(packer_F2774);
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

FUNCODEDEF(fun_445) {
  P modname_;
  P modF2775;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYmodule_loader_modules),FREEREF(0));
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),T2,modname_);
  modF2775 = T1;
  T3 = CALL2(1,VARREF(YevalSastYremove_module_internalX),FREEREF(0),modF2775);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYremove_modules_by_nameX) {
  P loader_,modnames_;
  P remove_namesF2776;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(modnames_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSastYcompute_transitive_users),loader_,modnames_);
  remove_namesF2776 = T1;
  T2 = FUNFAB(fun_445,1,loader_);
  CALL2(1,VARREF(YgooSmacrosYdo),T2,remove_namesF2776);
  T0 = YPfalse;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYmodule_name_to_relpath) {
  P name_;
  P namestrF2777;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T2 = CALL1(1,VARREF(Ysym_name),name_);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmathYto_lower),T2);
  namestrF2777 = T1;
  T4 = CALL2(1,VARREF(YgooScolsSseqYsplit),namestrF2777,YPchr((P)47));
  T3 = CALL2(1,VARREF(YgooScolsSseqYjoin),T4,VARREF(YgooSsystemYTpath_separatorT));
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_448) {
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
  P bootenvF2779;
  P bootmodF2778;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(env_, 0);
  ARG(loader_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSastYprobe_module),loader_,VARREF(YevalSastYDgoo_boot_module_name));
  bootmodF2778 = T1;
  T3 = CALL1(1,VARREF(YevalSastYmodule_target_environment),bootmodF2778);
  bootenvF2779 = T3;
  T5 = FUNFAB(fun_448,2,bootenvF2779,env_);
  T4 = CALL2(1,VARREF(YgooSmacrosYdo),T5,LITREF(lit_556));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYfab_static_global_environment) {
  P module_,module_loader_,allow_foreign_namesQ_;
  P new_envF2780;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(module_, 0);
  ARG(module_loader_, 1);
  ARG(allow_foreign_namesQ_, 2);
loop:
  T2 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)2000));
  T1 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_module),module_,VARREF(YevalSastYenvironment_module_loader),module_loader_,VARREF(YevalSastYenvironment_next),VARREF(YevalSastYDempty_static_environment),VARREF(YevalSastYenvironment_allows_foreign_namesQ),allow_foreign_namesQ_,VARREF(YevalSastYenvironment_bindings),T2);
  new_envF2780 = T1;
  T0 = new_envF2780;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_451) {
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
  P new_envF2782;
  P loaderF2781;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(module_, 0);
  ARG(src_module_, 1);
  ARG(excluded_, 2);
loop:
  T2 = CALL1(1,VARREF(YevalSastYmodule_target_environment),src_module_);
  T1 = CALL1(1,VARREF(YevalSastYenvironment_module_loader),T2);
  loaderF2781 = T1;
  T4 = CALL3(1,VARREF(YevalSastYfab_static_global_environment),module_,loaderF2781,YPfalse);
  new_envF2782 = T4;
  T5 = FUNFAB(fun_451,2,excluded_,new_envF2782);
  T6 = CALL1(1,VARREF(YevalSastYmodule_exports),src_module_);
  CALL2(1,VARREF(YgooScolsScolYdo_keyed),T5,T6);
  T3 = new_envF2782;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_453) {
  P T0;
LINK_STACK();
loop:
  VARSET(YevalSastYTnow_rt_envT,FREEREF(0));
  T0 = CALL2(1,VARREF(YevalSastYload_in),FREEREF(1),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_454) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(YevalSastYTnow_rt_envT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_455) {
  P x_1745F2783;
  P T0,T1,T2;
LINK_STACK();
loop:
  CALL2(1,VARREF(YevalSastYinstall_initial_bindings),FREEREF(0),FREEREF(1));
  x_1745F2783 = VARREF(YevalSastYTnow_rt_envT);
  T1 = FUNFAB(fun_453,2,FREEREF(0),FREEREF(2));
  T2 = FUNFAB(fun_454,1,x_1745F2783);
  T0 = with_cleanup(T1,T2);
  CALL2(1,VARREF(YevalSastYenvironment_allows_foreign_namesQ_setter),YPtrue,FREEREF(0));
  BOXVAL(FREEREF(3)) = YPtrue;
UNLINK_STACK();
  QRET(FREEREF(4));
}

FUNCODEDEF(fun_456) {
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

FUNCODEDEF(fun_load_module_457) {
  P loader_,name_;
  P fileF2789;
  P modpathF2788;
  P keepmodQF2787;
  P envF2786;
  P moduleF2785;
  P typeF2784;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_loader_module_type),loader_);
  typeF2784 = T1;
  T3 = CALL3(1,VARREF(Ynew),typeF2784,VARREF(YevalSastYmodule_name),name_);
  moduleF2785 = T3;
  T5 = CALL3(1,VARREF(YevalSastYfab_static_global_environment),moduleF2785,loader_,YPfalse);
  envF2786 = T5;
  keepmodQF2787 = YPfalse;
  keepmodQF2787 = BOXFAB(keepmodQF2787);
  T9 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  modpathF2788 = T9;
  T11 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_in_path),modpathF2788,VARREF(YgooSsystemYTmodule_search_pathT));
  fileF2789 = T11;
  CALL3(1,VARREF(YevalSastYset_module_environments),moduleF2785,envF2786,envF2786);
  T12 = CALL1(1,VARREF(Ynot),fileF2789);
  if (T12 != YPfalse) {
    T13 = CALL2(1,VARREF(Yerror),LITREF(lit_563),modpathF2788);
  } else {
  }
  T15 = FUNFAB(fun_455,5,envF2786,loader_,fileF2789,keepmodQF2787,moduleF2785);
  T16 = FUNFAB(fun_456,2,keepmodQF2787,moduleF2785);
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
  P moduleF2790;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYruntime_module),modname_);
  moduleF2790 = T1;
  CALL1(1,VARREF(YevalSastYensure_module_data),moduleF2790);
  T2 = CALL1(1,VARREF(YevalSastYmodule_target_environment),moduleF2790);
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
  P loaderF2791;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = CALL0(1,VARREF(YevalSastYruntime_module_loader));
  loaderF2791 = T1;
  T5 = CALL1(1,VARREF(YevalSastYmodule_loader_stack),loaderF2791);
  T4 = CALL3(1,VARREF(YgooScolsScolYelt_or),T5,YPint((P)0),YPfalse);
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,modname_);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSastYTnow_rt_envT);
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
  P envF2795;
  P modF2794;
  P typeF2793;
  P loaderF2792;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(modname_, 0);
  ARG(data_, 1);
loop:
  T1 = CALL0(1,VARREF(YevalSastYruntime_module_loader));
  loaderF2792 = T1;
  T3 = CALL1(1,VARREF(YevalSastYmodule_loader_module_type),loaderF2792);
  typeF2793 = T3;
  T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),modname_);
  T5 = CALL3(1,VARREF(Ynew),typeF2793,VARREF(YevalSastYmodule_name),T6);
  modF2794 = T5;
  T8 = CALL3(1,VARREF(YevalSastYfab_static_global_environment),modF2794,loaderF2792,YPtrue);
  envF2795 = T8;
  CALL2(1,VARREF(YevalSastYmodule_data_processedQ_setter),YPfalse,modF2794);
  CALL3(1,VARREF(YevalSastYset_module_environments),modF2794,envF2795,envF2795);
  CALL2(1,VARREF(YevalSastYmodule_runtime_data_setter),data_,modF2794);
  CALL2(1,VARREF(YevalSastYregister_moduleX),loaderF2792,modF2794);
  T7 = modF2794;
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
  P bindingF2797;
  P home_envF2796;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(from_mod_, 2);
  ARG(original_name_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_target_environment),from_mod_);
  home_envF2796 = T1;
  T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),original_name_);
  T3 = CALL2(1,VARREF(YevalSastYfind_binding),T4,home_envF2796);
  bindingF2797 = T3;
  T5 = CALL1(1,VARREF(Ynot),bindingF2797);
  if (T5 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSastYmodule_name),from_mod_);
    T8 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T6 = CALL4(1,VARREF(Yerror),LITREF(lit_576),original_name_,T7,T8);
  } else {
  }
  T10 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T9 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2797,T10);
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
  P bindingF2798;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(loc_, 2);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T1 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_320),VARREF(YevalSastYbinding_module),mod_,VARREF(YevalSastYbinding_name),T2,VARREF(YevalSastYbinding_freeQ),YPfalse,VARREF(YevalSastYbinding_locative),loc_);
  bindingF2798 = T1;
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T3 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2798,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreloader_do_other_binding) {
  P mod_,name_;
  P bindingF2799;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T1 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_344),VARREF(YevalSastYbinding_module),mod_,VARREF(YevalSastYbinding_name),T2,VARREF(YevalSastYbinding_freeQ),YPtrue);
  bindingF2799 = T1;
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T3 = CALL2(1,VARREF(YevalSastYinsert_globalX),bindingF2799,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreloader_do_export) {
  P mod_,name_,as_name_;
  P bindingF2800;
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
  bindingF2800 = T1;
  if (bindingF2800 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),as_name_);
    T5 = CALL3(1,VARREF(YevalSastYexport_bindingX),mod_,T6,bindingF2800);
    T4 = T5;
  } else {
    T8 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T7 = CALL3(1,VARREF(Yerror),LITREF(lit_583),name_,T8);
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
  T0 = (P)YPbuild_runtime_modules(VARREF(YevalSastYreloader_do_create_module),VARREF(YevalSastYreloader_do_use_module),VARREF(YevalSastYreloader_do_runtime_binding),VARREF(YevalSastYreloader_do_other_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_472) {
  P binding_;
  P cloneF2801;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),FREEREF(0),T2,YPfalse,LITREF(lit_283));
  cloneF2801 = T1;
  T4 = CALL1(1,VARREF(YevalSastYbinding_handler),binding_);
  T3 = CALL2(1,VARREF(YevalSastYbinding_handler_setter),T4,cloneF2801);
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
  T1 = FUNFAB(fun_472,1,env_);
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
  P bootenvF2803;
  P bootmodF2802;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  CALL0(1,VARREF(YevalSastYreload_modules));
  T2 = CALL0(1,VARREF(YevalSastYruntime_module_loader));
  T1 = CALL2(1,VARREF(YevalSastYprobe_module),T2,VARREF(YevalSastYDgoo_boot_module_name));
  bootmodF2802 = T1;
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),bootmodF2802);
  bootenvF2803 = T4;
  CALL1(1,VARREF(YevalSastYinstall_magic_bindings),bootenvF2803);
  CALL0(1,VARREF(YevalSastYreload_macros));
  CALL1(1,VARREF(YevalSastYinstall_interpreter_hacks),bootenvF2803);
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
  T1 = CALL1(1,VARREF(YevalSastYruntime_module),LITREF(lit_591));
  T0 = CALL3(1,VARREF(YevalSastYfab_subset_environment),module_,T1,VARREF(YevalSastYsyntax_environment_excluded_bindings));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYfab_g2c_module) {
  P loader_,name_;
  P target_envF2807;
  P syntax_envF2806;
  P moduleF2805;
  P typeF2804;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_loader_module_type),loader_);
  typeF2804 = T1;
  T3 = CALL3(1,VARREF(Ynew),typeF2804,VARREF(YevalSastYmodule_name),name_);
  moduleF2805 = T3;
  T5 = CALL1(1,VARREF(YevalSastYfab_syntax_environment),moduleF2805);
  syntax_envF2806 = T5;
  T7 = CALL3(1,VARREF(YevalSastYfab_static_global_environment),moduleF2805,loader_,YPfalse);
  target_envF2807 = T7;
  CALL3(1,VARREF(YevalSastYset_module_environments),moduleF2805,syntax_envF2806,target_envF2807);
  T8 = CALL2(1,VARREF(YgooSmacrosYEE),name_,VARREF(YevalSastYDgoo_boot_module_name));
  if (T8 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSastYinit_g2c_boot_environment),target_envF2807);
  } else {
    T10 = CALL2(1,VARREF(YevalSastYinit_g2c_regular_environment),target_envF2807,loader_);
  }
  T6 = moduleF2805;
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

FUNCODEDEF(fun_loop_482) {
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
  P loopF2808;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_482,2);
  loopF2808 = T1;
  FUNINIT(loopF2808, 2,f_,loopF2808);
  T2 = CALL1(0,loopF2808,env_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_484) {
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
  P loopF2809;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_484,2);
  loopF2809 = T1;
  FUNINIT(loopF2809, 2,f_,loopF2809);
  T2 = CALL1(0,loopF2809,env_);
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
loop:
  lit_0 = YPPsym((P)"goo/boot");
  VARSET(YevalSastYDgoo_boot_module_name,LITREF(lit_0));
  VARSET(YevalSastYTcurrent_dependentT,YPfalse);
  lit_1 = YPPsym((P)"exp");
  lit_2 = YPPsym((P)"return");
  lit_3 = YPPsym((P)"x-1715");
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
  fun_x_1715_0 = YPmet(FUNCODEREF(fun_x_1715_0),LITREF(lit_3),T2,ENVNUL,PNUL,YPfalse);
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
  T5 = CALL2(1,VARREF(YPdefine_method),T6,T8);
  VARSET(YevalSastYobjectify_error,T5);
  lit_16 = YPPsym((P)"bot");
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_16));
  VARSET(YevalSastYast_LbotG,T9);
  lit_17 = YPPsym((P)"<program>");
  T11 = (P)YPpair(VARREF(YLanyG),Ynil);
  T10 = CALL2(1,VARREF(Yfab_class),LITREF(lit_17),T11);
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
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
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
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YevalSastYprogram_type_setter,T18);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLprogramG),VARREF(YevalSastYprogram_type),VARREF(YevalSastYprogram_type_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
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
  T23 = CALL2(1,VARREF(YPdefine_method),T24,T26);
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
  T28 = CALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YevalSastYprogram_register_setter,T28);
  T32 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T32,ENVNUL,PNUL,YPfalse);
  T33 = fun_8;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLprogramG),VARREF(YevalSastYprogram_register),VARREF(YevalSastYprogram_register_setter),VARREF(YLanyG),T33);
  lit_24 = YPPsym((P)"<computed-program>");
  T35 = (P)YPpair(VARREF(YevalSastYLprogramG),Ynil);
  T34 = CALL2(1,VARREF(Yfab_class),LITREF(lit_24),T35);
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
  T37 = CALL2(1,VARREF(YPdefine_method),T38,T40);
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
  T42 = CALL2(1,VARREF(YPdefine_method),T43,T45);
  VARSET(YevalSastYprogram_register_setter,T42);
  T46 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T46,ENVNUL,PNUL,YPfalse);
  T47 = fun_11;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLcomputed_programG),VARREF(YevalSastYprogram_register),VARREF(YevalSastYprogram_register_setter),VARREF(YLanyG),T47);
  lit_25 = YPPsym((P)"<passive-program>");
  T49 = (P)YPpair(VARREF(YevalSastYLprogramG),Ynil);
  T48 = CALL2(1,VARREF(Yfab_class),LITREF(lit_25),T49);
  VARSET(YevalSastYLpassive_programG,T48);
  VARSET(YevalSastYLbinding_nameG,VARREF(YLanyG));
  lit_26 = YPPsym((P)"<binding>");
  T51 = (P)YPpair(VARREF(YLanyG),Ynil);
  T50 = CALL2(1,VARREF(Yfab_class),LITREF(lit_26),T51);
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
  T53 = CALL2(1,VARREF(YPdefine_method),T54,T56);
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
  T58 = CALL2(1,VARREF(YPdefine_method),T59,T61);
  VARSET(YevalSastYbinding_name_setter,T58);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLbindingG),VARREF(YevalSastYbinding_name),VARREF(YevalSastYbinding_name_setter),VARREF(YevalSastYLbinding_nameG),VARREF(YPprop_unbound_error));
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
  T63 = CALL2(1,VARREF(YPdefine_method),T64,T66);
  VARSET(YevalSastYbinding_mangled_name,T63);
  lit_30 = YPPsym((P)"binding-mangled-name-setter");
  T68 = CALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T67 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,T68,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_mangled_name_setter_15 = YPmet(FUNCODEREF(fun_binding_mangled_name_setter_15),LITREF(lit_30),T67,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(YevalSastYbinding_mangled_name_setter);
  if (T71 != YPfalse) {
    T70 = VARREF(YevalSastYbinding_mangled_name_setter);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_binding_mangled_name_setter_15;
  T69 = CALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YevalSastYbinding_mangled_name_setter,T69);
  T73 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T74 = CALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T75 = fun_16;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLbindingG),VARREF(YevalSastYbinding_mangled_name),VARREF(YevalSastYbinding_mangled_name_setter),T74,T75);
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
  T77 = CALL2(1,VARREF(YPdefine_method),T78,T80);
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
  T82 = CALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(YevalSastYbinding_type_setter,T82);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLbindingG),VARREF(YevalSastYbinding_type),VARREF(YevalSastYbinding_type_setter),VARREF(YevalSastYLprogramG),VARREF(YPprop_unbound_error));
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
  T87 = CALL2(1,VARREF(YPdefine_method),T88,T90);
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
  T92 = CALL2(1,VARREF(YPdefine_method),T93,T95);
  VARSET(YevalSastYbinding_inferred_type_setter,T92);
  T96 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T96,ENVNUL,PNUL,YPfalse);
  T97 = fun_21;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLbindingG),VARREF(YevalSastYbinding_inferred_type),VARREF(YevalSastYbinding_inferred_type_setter),VARREF(YLanyG),T97);
  lit_35 = YPPsym((P)"<global-box>");
  T99 = (P)YPpair(VARREF(YLanyG),Ynil);
  T98 = CALL2(1,VARREF(Yfab_class),LITREF(lit_35),T99);
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
  T101 = CALL2(1,VARREF(YPdefine_method),T102,T104);
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
  T106 = CALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YevalSastYglobal_box_value_setter,T106);
  T110 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T110,ENVNUL,PNUL,YPfalse);
  T111 = fun_24;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLglobal_boxG),VARREF(YevalSastYglobal_box_value),VARREF(YevalSastYglobal_box_value_setter),VARREF(YLanyG),T111);
  lit_38 = YPPsym((P)"<module-binding>");
  T114 = (P)YPpair(VARREF(YevalSdependencyYLdependableG),Ynil);
  T113 = (P)YPpair(VARREF(YevalSastYLbindingG),T114);
  T112 = CALL2(1,VARREF(Yfab_class),LITREF(lit_38),T113);
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
  T116 = CALL2(1,VARREF(YPdefine_method),T117,T119);
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
  T121 = CALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YevalSastYbinding_kind_setter,T121);
  lit_41 = YPPsym((P)"global");
  T125 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T125,ENVNUL,PNUL,YPfalse);
  T126 = fun_27;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),VARREF(YevalSastYbinding_kind_setter),VARREF(YLanyG),T126);
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
  T128 = CALL2(1,VARREF(YPdefine_method),T129,T131);
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
  T133 = CALL2(1,VARREF(YPdefine_method),T134,T136);
  VARSET(YevalSastYbinding_module_setter,T133);
  T137 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T137,ENVNUL,PNUL,YPfalse);
  T138 = fun_30;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_module),VARREF(YevalSastYbinding_module_setter),VARREF(YLanyG),T138);
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
  T140 = CALL2(1,VARREF(YPdefine_method),T141,T143);
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
  T145 = CALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YevalSastYbinding_freeQ_setter,T145);
  T149 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T149,ENVNUL,PNUL,YPfalse);
  T150 = fun_33;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_freeQ),VARREF(YevalSastYbinding_freeQ_setter),VARREF(YLlogG),T150);
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
  T152 = CALL2(1,VARREF(YPdefine_method),T153,T155);
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
  T157 = CALL2(1,VARREF(YPdefine_method),T158,T160);
  VARSET(YevalSastYbinding_info_setter,T157);
  T161 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T162 = fun_36;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_info),VARREF(YevalSastYbinding_info_setter),VARREF(YLanyG),T162);
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
  T164 = CALL2(1,VARREF(YPdefine_method),T165,T167);
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
  T4 = CALL2(1,VARREF(Yfab_class),LITREF(lit_55),T5);
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
  T7 = CALL2(1,VARREF(YPdefine_method),T8,T10);
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
  T12 = CALL2(1,VARREF(YPdefine_method),T13,T15);
  VARSET(YevalSastYbinding_value_setter,T12);
  T16 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T16,ENVNUL,PNUL,YPfalse);
  T17 = fun_42;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_value),VARREF(YevalSastYbinding_value_setter),VARREF(YLanyG),T17);
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
  T19 = CALL2(1,VARREF(YPdefine_method),T20,T22);
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
  T24 = CALL2(1,VARREF(YPdefine_method),T25,T27);
  VARSET(YevalSastYbinding_mutableQ_setter,T24);
  T28 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T28,ENVNUL,PNUL,YPfalse);
  T29 = fun_45;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_mutableQ),VARREF(YevalSastYbinding_mutableQ_setter),VARREF(YLanyG),T29);
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
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
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
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YevalSastYbinding_dynamic_extentQ_setter,T36);
  T40 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T40,ENVNUL,PNUL,YPfalse);
  T41 = fun_48;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_dynamic_extentQ),VARREF(YevalSastYbinding_dynamic_extentQ_setter),VARREF(YLanyG),T41);
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
  T43 = CALL2(1,VARREF(YPdefine_method),T44,T46);
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
  T48 = CALL2(1,VARREF(YPdefine_method),T49,T51);
  VARSET(YevalSastYbinding_dottedQ_setter,T48);
  T52 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T52,ENVNUL,PNUL,YPfalse);
  T53 = fun_51;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_dottedQ),VARREF(YevalSastYbinding_dottedQ_setter),VARREF(YLanyG),T53);
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
  T55 = CALL2(1,VARREF(YPdefine_method),T56,T58);
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
  T60 = CALL2(1,VARREF(YPdefine_method),T61,T63);
  VARSET(YevalSastYbinding_index_setter,T60);
  T64 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_54 = YPmet(FUNCODEREF(fun_54),YPfalse,T64,ENVNUL,PNUL,YPfalse);
  T65 = fun_54;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_index),VARREF(YevalSastYbinding_index_setter),VARREF(YLanyG),T65);
  lit_66 = YPPsym((P)"<compile-time>");
  T67 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T66 = CALL2(1,VARREF(Yfab_class),LITREF(lit_66),T67);
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
  T69 = CALL2(1,VARREF(YPdefine_method),T70,T72);
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
  T74 = CALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(YevalSastYcompile_time_program_setter,T74);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLcompile_timeG),VARREF(YevalSastYcompile_time_program),VARREF(YevalSastYcompile_time_program_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_69 = YPPsym((P)"<reference>");
  T79 = (P)YPpair(VARREF(YevalSastYLpassive_programG),Ynil);
  T78 = CALL2(1,VARREF(Yfab_class),LITREF(lit_69),T79);
  VARSET(YevalSastYLreferenceG,T78);
  lit_70 = YPPsym((P)"<real-reference>");
  T81 = (P)YPpair(VARREF(YevalSastYLreferenceG),Ynil);
  T80 = CALL2(1,VARREF(Yfab_class),LITREF(lit_70),T81);
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
  T83 = CALL2(1,VARREF(YPdefine_method),T84,T86);
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
  T88 = CALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YevalSastYreference_binding_setter,T88);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLreal_referenceG),VARREF(YevalSastYreference_binding),VARREF(YevalSastYreference_binding_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_73 = YPPsym((P)"<local-reference>");
  T93 = (P)YPpair(VARREF(YevalSastYLreal_referenceG),Ynil);
  T92 = CALL2(1,VARREF(Yfab_class),LITREF(lit_73),T93);
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
  T95 = CALL2(1,VARREF(YPdefine_method),T96,T98);
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
  T100 = CALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(YevalSastYreference_called_functionQ_setter,T100);
  T104 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T104,ENVNUL,PNUL,YPfalse);
  T105 = fun_61;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_called_functionQ),VARREF(YevalSastYreference_called_functionQ_setter),VARREF(YLanyG),T105);
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
  T107 = CALL2(1,VARREF(YPdefine_method),T108,T110);
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
  T112 = CALL2(1,VARREF(YPdefine_method),T113,T115);
  VARSET(YevalSastYreference_frame_number_setter,T112);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_frame_number),VARREF(YevalSastYreference_frame_number_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
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
  T117 = CALL2(1,VARREF(YPdefine_method),T118,T120);
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
  T122 = CALL2(1,VARREF(YPdefine_method),T123,T125);
  VARSET(YevalSastYreference_frame_offset_setter,T122);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_frame_offset),VARREF(YevalSastYreference_frame_offset_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_80 = YPPsym((P)"<module-binding-reference>");
  T127 = (P)YPpair(VARREF(YevalSastYLreal_referenceG),Ynil);
  T126 = CALL2(1,VARREF(Yfab_class),LITREF(lit_80),T127);
  VARSET(YevalSastYLmodule_binding_referenceG,T126);
  lit_81 = YPPsym((P)"<global-reference>");
  T129 = (P)YPpair(VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T128 = CALL2(1,VARREF(Yfab_class),LITREF(lit_81),T129);
  VARSET(YevalSastYLglobal_referenceG,T128);
  lit_82 = YPPsym((P)"<runtime-reference>");
  T131 = (P)YPpair(VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T130 = CALL2(1,VARREF(Yfab_class),LITREF(lit_82),T131);
  VARSET(YevalSastYLruntime_referenceG,T130);
  lit_83 = YPPsym((P)"<predefined-reference>");
  T133 = (P)YPpair(VARREF(YevalSastYLreal_referenceG),Ynil);
  T132 = CALL2(1,VARREF(Yfab_class),LITREF(lit_83),T133);
  VARSET(YevalSastYLpredefined_referenceG,T132);
  lit_84 = YPPsym((P)"<bound?>");
  T135 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T134 = CALL2(1,VARREF(Yfab_class),LITREF(lit_84),T135);
  VARSET(YevalSastYLboundQG,T134);
  lit_85 = YPPsym((P)"bound?-reference");
  T136 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLboundQG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_boundQ_reference_66 = YPmet(FUNCODEREF(fun_boundQ_reference_66),LITREF(lit_85),T136,ENVNUL,PNUL,YPfalse);
  T139 = BOUNDP(YevalSastYboundQ_reference);
  if (T139 != YPfalse) {
    T138 = VARREF(YevalSastYboundQ_reference);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_boundQ_reference_66;
  T137 = CALL2(1,VARREF(YPdefine_method),T138,T140);
  VARSET(YevalSastYboundQ_reference,T137);
  lit_86 = YPPsym((P)"bound?-reference-setter");
  T141 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLboundQG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_boundQ_reference_setter_67 = YPmet(FUNCODEREF(fun_boundQ_reference_setter_67),LITREF(lit_86),T141,ENVNUL,PNUL,YPfalse);
  T144 = BOUNDP(YevalSastYboundQ_reference_setter);
  if (T144 != YPfalse) {
    T143 = VARREF(YevalSastYboundQ_reference_setter);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_boundQ_reference_setter_67;
  T142 = CALL2(1,VARREF(YPdefine_method),T143,T145);
  VARSET(YevalSastYboundQ_reference_setter,T142);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLboundQG),VARREF(YevalSastYboundQ_reference),VARREF(YevalSastYboundQ_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_87 = YPPsym((P)"<assignment>");
  T147 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T146 = CALL2(1,VARREF(Yfab_class),LITREF(lit_87),T147);
  VARSET(YevalSastYLassignmentG,T146);
  lit_88 = YPPsym((P)"assignment-form");
  T148 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLassignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assignment_form_68 = YPmet(FUNCODEREF(fun_assignment_form_68),LITREF(lit_88),T148,ENVNUL,PNUL,YPfalse);
  T151 = BOUNDP(YevalSastYassignment_form);
  if (T151 != YPfalse) {
    T150 = VARREF(YevalSastYassignment_form);
  } else {
    T150 = YPfalse;
  }
  T152 = fun_assignment_form_68;
  T149 = CALL2(1,VARREF(YPdefine_method),T150,T152);
  VARSET(YevalSastYassignment_form,T149);
  lit_89 = YPPsym((P)"assignment-form-setter");
  T153 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLassignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_form_setter_69 = YPmet(FUNCODEREF(fun_assignment_form_setter_69),LITREF(lit_89),T153,ENVNUL,PNUL,YPfalse);
  T156 = BOUNDP(YevalSastYassignment_form_setter);
  if (T156 != YPfalse) {
    T155 = VARREF(YevalSastYassignment_form_setter);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_assignment_form_setter_69;
  T154 = CALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(YevalSastYassignment_form_setter,T154);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLassignmentG),VARREF(YevalSastYassignment_form),VARREF(YevalSastYassignment_form_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_90 = YPPsym((P)"<local-assignment>");
  T159 = (P)YPpair(VARREF(YevalSastYLassignmentG),Ynil);
  T158 = CALL2(1,VARREF(Yfab_class),LITREF(lit_90),T159);
  VARSET(YevalSastYLlocal_assignmentG,T158);
  lit_91 = YPPsym((P)"assignment-reference");
  T160 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLlocal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assignment_reference_70 = YPmet(FUNCODEREF(fun_assignment_reference_70),LITREF(lit_91),T160,ENVNUL,PNUL,YPfalse);
  T163 = BOUNDP(YevalSastYassignment_reference);
  if (T163 != YPfalse) {
    T162 = VARREF(YevalSastYassignment_reference);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_assignment_reference_70;
  T161 = CALL2(1,VARREF(YPdefine_method),T162,T164);
  VARSET(YevalSastYassignment_reference,T161);
  lit_92 = YPPsym((P)"assignment-reference-setter");
  T165 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_assignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_reference_setter_71 = YPmet(FUNCODEREF(fun_assignment_reference_setter_71),LITREF(lit_92),T165,ENVNUL,PNUL,YPfalse);
  T168 = BOUNDP(YevalSastYassignment_reference_setter);
  if (T168 != YPfalse) {
    T167 = VARREF(YevalSastYassignment_reference_setter);
  } else {
    T167 = YPfalse;
  }
  T169 = fun_assignment_reference_setter_71;
  T166 = CALL2(1,VARREF(YPdefine_method),T167,T169);
  VARSET(YevalSastYassignment_reference_setter,T166);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocal_assignmentG),VARREF(YevalSastYassignment_reference),VARREF(YevalSastYassignment_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_93 = YPPsym((P)"<global-assignment>");
  T171 = (P)YPpair(VARREF(YevalSastYLassignmentG),Ynil);
  T170 = CALL2(1,VARREF(Yfab_class),LITREF(lit_93),T171);
  VARSET(YevalSastYLglobal_assignmentG,T170);
  lit_94 = YPPsym((P)"assignment-binding");
  T172 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLglobal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assignment_binding_72 = YPmet(FUNCODEREF(fun_assignment_binding_72),LITREF(lit_94),T172,ENVNUL,PNUL,YPfalse);
  T175 = BOUNDP(YevalSastYassignment_binding);
  if (T175 != YPfalse) {
    T174 = VARREF(YevalSastYassignment_binding);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_assignment_binding_72;
  T173 = CALL2(1,VARREF(YPdefine_method),T174,T176);
  VARSET(YevalSastYassignment_binding,T173);
  lit_95 = YPPsym((P)"assignment-binding-setter");
  T177 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLglobal_assignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_binding_setter_73 = YPmet(FUNCODEREF(fun_assignment_binding_setter_73),LITREF(lit_95),T177,ENVNUL,PNUL,YPfalse);
  T180 = BOUNDP(YevalSastYassignment_binding_setter);
  if (T180 != YPfalse) {
    T179 = VARREF(YevalSastYassignment_binding_setter);
  } else {
    T179 = YPfalse;
  }
  T181 = fun_assignment_binding_setter_73;
  T178 = CALL2(1,VARREF(YPdefine_method),T179,T181);
  VARSET(YevalSastYassignment_binding_setter,T178);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLglobal_assignmentG),VARREF(YevalSastYassignment_binding),VARREF(YevalSastYassignment_binding_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_96 = YPPsym((P)"<runtime-assignment>");
  T183 = (P)YPpair(VARREF(YevalSastYLglobal_assignmentG),Ynil);
  T182 = CALL2(1,VARREF(Yfab_class),LITREF(lit_96),T183);
  VARSET(YevalSastYLruntime_assignmentG,T182);
  lit_97 = YPPsym((P)"<definition>");
  T187 = (P)YPpair(VARREF(YevalSastYLglobal_assignmentG),Ynil);
  T186 = CALL2(1,VARREF(Yfab_class),LITREF(lit_97),T187);
  T185 = VARSET(YevalSastYLdefinitionG,T186);
  T184 = T185;
  return T184;
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
  P T224,T225,T226,T227,T228,T229,T230,T231,T232,T233;
loop:
  lit_98 = YPPsym((P)"<variable-definition>");
  T1 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T0 = CALL2(1,VARREF(Yfab_class),LITREF(lit_98),T1);
  VARSET(YevalSastYLvariable_definitionG,T0);
  lit_99 = YPPsym((P)"<ast-generic-definition>");
  T3 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T2 = CALL2(1,VARREF(Yfab_class),LITREF(lit_99),T3);
  VARSET(YevalSastYLast_generic_definitionG,T2);
  lit_100 = YPPsym((P)"<ast-function-definition>");
  T5 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T4 = CALL2(1,VARREF(Yfab_class),LITREF(lit_100),T5);
  VARSET(YevalSastYLast_function_definitionG,T4);
  lit_101 = YPPsym((P)"<ast-method-definition>");
  T7 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T6 = CALL2(1,VARREF(Yfab_class),LITREF(lit_101),T7);
  VARSET(YevalSastYLast_method_definitionG,T6);
  lit_102 = YPPsym((P)"<ast-primitive-definition>");
  T9 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T8 = CALL2(1,VARREF(Yfab_class),LITREF(lit_102),T9);
  VARSET(YevalSastYLast_primitive_definitionG,T8);
  lit_103 = YPPsym((P)"<ast-macro-definition>");
  T11 = (P)YPpair(VARREF(YevalSastYLdefinitionG),Ynil);
  T10 = CALL2(1,VARREF(Yfab_class),LITREF(lit_103),T11);
  VARSET(YevalSastYLast_macro_definitionG,T10);
  lit_104 = YPPsym((P)"<ast-signature>");
  T13 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T12 = CALL2(1,VARREF(Yfab_class),LITREF(lit_104),T13);
  VARSET(YevalSastYLast_signatureG,T12);
  lit_105 = YPPsym((P)"signature-bindings");
  T14 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_bindings_74 = YPmet(FUNCODEREF(fun_signature_bindings_74),LITREF(lit_105),T14,ENVNUL,PNUL,YPfalse);
  T17 = BOUNDP(YevalSastYsignature_bindings);
  if (T17 != YPfalse) {
    T16 = VARREF(YevalSastYsignature_bindings);
  } else {
    T16 = YPfalse;
  }
  T18 = fun_signature_bindings_74;
  T15 = CALL2(1,VARREF(YPdefine_method),T16,T18);
  VARSET(YevalSastYsignature_bindings,T15);
  lit_106 = YPPsym((P)"signature-bindings-setter");
  T19 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_bindings_setter_75 = YPmet(FUNCODEREF(fun_signature_bindings_setter_75),LITREF(lit_106),T19,ENVNUL,PNUL,YPfalse);
  T22 = BOUNDP(YevalSastYsignature_bindings_setter);
  if (T22 != YPfalse) {
    T21 = VARREF(YevalSastYsignature_bindings_setter);
  } else {
    T21 = YPfalse;
  }
  T23 = fun_signature_bindings_setter_75;
  T20 = CALL2(1,VARREF(YPdefine_method),T21,T23);
  VARSET(YevalSastYsignature_bindings_setter,T20);
  T24 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T24,ENVNUL,PNUL,YPfalse);
  T25 = fun_76;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_bindings),VARREF(YevalSastYsignature_bindings_setter),VARREF(YLanyG),T25);
  lit_107 = YPPsym((P)"signature-names");
  T26 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_names_77 = YPmet(FUNCODEREF(fun_signature_names_77),LITREF(lit_107),T26,ENVNUL,PNUL,YPfalse);
  T29 = BOUNDP(YevalSastYsignature_names);
  if (T29 != YPfalse) {
    T28 = VARREF(YevalSastYsignature_names);
  } else {
    T28 = YPfalse;
  }
  T30 = fun_signature_names_77;
  T27 = CALL2(1,VARREF(YPdefine_method),T28,T30);
  VARSET(YevalSastYsignature_names,T27);
  lit_108 = YPPsym((P)"signature-names-setter");
  T31 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_names_setter_78 = YPmet(FUNCODEREF(fun_signature_names_setter_78),LITREF(lit_108),T31,ENVNUL,PNUL,YPfalse);
  T34 = BOUNDP(YevalSastYsignature_names_setter);
  if (T34 != YPfalse) {
    T33 = VARREF(YevalSastYsignature_names_setter);
  } else {
    T33 = YPfalse;
  }
  T35 = fun_signature_names_setter_78;
  T32 = CALL2(1,VARREF(YPdefine_method),T33,T35);
  VARSET(YevalSastYsignature_names_setter,T32);
  T36 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T36,ENVNUL,PNUL,YPfalse);
  T37 = fun_79;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_names),VARREF(YevalSastYsignature_names_setter),VARREF(YLanyG),T37);
  lit_109 = YPPsym((P)"signature-specs");
  T38 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_specs_80 = YPmet(FUNCODEREF(fun_signature_specs_80),LITREF(lit_109),T38,ENVNUL,PNUL,YPfalse);
  T41 = BOUNDP(YevalSastYsignature_specs);
  if (T41 != YPfalse) {
    T40 = VARREF(YevalSastYsignature_specs);
  } else {
    T40 = YPfalse;
  }
  T42 = fun_signature_specs_80;
  T39 = CALL2(1,VARREF(YPdefine_method),T40,T42);
  VARSET(YevalSastYsignature_specs,T39);
  lit_110 = YPPsym((P)"signature-specs-setter");
  T43 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_specs_setter_81 = YPmet(FUNCODEREF(fun_signature_specs_setter_81),LITREF(lit_110),T43,ENVNUL,PNUL,YPfalse);
  T46 = BOUNDP(YevalSastYsignature_specs_setter);
  if (T46 != YPfalse) {
    T45 = VARREF(YevalSastYsignature_specs_setter);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_signature_specs_setter_81;
  T44 = CALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YevalSastYsignature_specs_setter,T44);
  T48 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T48,ENVNUL,PNUL,YPfalse);
  T49 = fun_82;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_specs),VARREF(YevalSastYsignature_specs_setter),VARREF(YLanyG),T49);
  lit_111 = YPPsym((P)"signature-nary?");
  T50 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_naryQ_83 = YPmet(FUNCODEREF(fun_signature_naryQ_83),LITREF(lit_111),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YevalSastYsignature_naryQ);
  if (T53 != YPfalse) {
    T52 = VARREF(YevalSastYsignature_naryQ);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_signature_naryQ_83;
  T51 = CALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YevalSastYsignature_naryQ,T51);
  lit_112 = YPPsym((P)"signature-nary?-setter");
  T55 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_naryQ_setter_84 = YPmet(FUNCODEREF(fun_signature_naryQ_setter_84),LITREF(lit_112),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(YevalSastYsignature_naryQ_setter);
  if (T58 != YPfalse) {
    T57 = VARREF(YevalSastYsignature_naryQ_setter);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_signature_naryQ_setter_84;
  T56 = CALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YevalSastYsignature_naryQ_setter,T56);
  T60 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T60,ENVNUL,PNUL,YPfalse);
  T61 = fun_85;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_naryQ),VARREF(YevalSastYsignature_naryQ_setter),VARREF(YLanyG),T61);
  lit_113 = YPPsym((P)"signature-arity");
  T62 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_arity_86 = YPmet(FUNCODEREF(fun_signature_arity_86),LITREF(lit_113),T62,ENVNUL,PNUL,YPfalse);
  T65 = BOUNDP(YevalSastYsignature_arity);
  if (T65 != YPfalse) {
    T64 = VARREF(YevalSastYsignature_arity);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_signature_arity_86;
  T63 = CALL2(1,VARREF(YPdefine_method),T64,T66);
  VARSET(YevalSastYsignature_arity,T63);
  lit_114 = YPPsym((P)"signature-arity-setter");
  T67 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_arity_setter_87 = YPmet(FUNCODEREF(fun_signature_arity_setter_87),LITREF(lit_114),T67,ENVNUL,PNUL,YPfalse);
  T70 = BOUNDP(YevalSastYsignature_arity_setter);
  if (T70 != YPfalse) {
    T69 = VARREF(YevalSastYsignature_arity_setter);
  } else {
    T69 = YPfalse;
  }
  T71 = fun_signature_arity_setter_87;
  T68 = CALL2(1,VARREF(YPdefine_method),T69,T71);
  VARSET(YevalSastYsignature_arity_setter,T68);
  T72 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T72,ENVNUL,PNUL,YPfalse);
  T73 = fun_88;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_arity),VARREF(YevalSastYsignature_arity_setter),VARREF(YLanyG),T73);
  lit_115 = YPPsym((P)"signature-value");
  T74 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_value_89 = YPmet(FUNCODEREF(fun_signature_value_89),LITREF(lit_115),T74,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YevalSastYsignature_value);
  if (T77 != YPfalse) {
    T76 = VARREF(YevalSastYsignature_value);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_signature_value_89;
  T75 = CALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YevalSastYsignature_value,T75);
  lit_116 = YPPsym((P)"signature-value-setter");
  T79 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_value_setter_90 = YPmet(FUNCODEREF(fun_signature_value_setter_90),LITREF(lit_116),T79,ENVNUL,PNUL,YPfalse);
  T82 = BOUNDP(YevalSastYsignature_value_setter);
  if (T82 != YPfalse) {
    T81 = VARREF(YevalSastYsignature_value_setter);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_signature_value_setter_90;
  T80 = CALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(YevalSastYsignature_value_setter,T80);
  T84 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T84,ENVNUL,PNUL,YPfalse);
  T85 = fun_91;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_value),VARREF(YevalSastYsignature_value_setter),VARREF(YLanyG),T85);
  lit_117 = YPPsym((P)"<ast-function>");
  T88 = (P)YPpair(VARREF(YevalSdependencyYLdependentG),Ynil);
  T87 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),T88);
  T86 = CALL2(1,VARREF(Yfab_class),LITREF(lit_117),T87);
  VARSET(YevalSastYLast_functionG,T86);
  lit_118 = YPPsym((P)"function-binding");
  T89 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_binding_92 = YPmet(FUNCODEREF(fun_function_binding_92),LITREF(lit_118),T89,ENVNUL,PNUL,YPfalse);
  T92 = BOUNDP(YevalSastYfunction_binding);
  if (T92 != YPfalse) {
    T91 = VARREF(YevalSastYfunction_binding);
  } else {
    T91 = YPfalse;
  }
  T93 = fun_function_binding_92;
  T90 = CALL2(1,VARREF(YPdefine_method),T91,T93);
  VARSET(YevalSastYfunction_binding,T90);
  lit_119 = YPPsym((P)"function-binding-setter");
  T94 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_binding_setter_93 = YPmet(FUNCODEREF(fun_function_binding_setter_93),LITREF(lit_119),T94,ENVNUL,PNUL,YPfalse);
  T97 = BOUNDP(YevalSastYfunction_binding_setter);
  if (T97 != YPfalse) {
    T96 = VARREF(YevalSastYfunction_binding_setter);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_function_binding_setter_93;
  T95 = CALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YevalSastYfunction_binding_setter,T95);
  T99 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_94 = YPmet(FUNCODEREF(fun_94),YPfalse,T99,ENVNUL,PNUL,YPfalse);
  T100 = fun_94;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_functionG),VARREF(YevalSastYfunction_binding),VARREF(YevalSastYfunction_binding_setter),VARREF(YLanyG),T100);
  lit_120 = YPPsym((P)"function-debug-name");
  T101 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_debug_name_95 = YPmet(FUNCODEREF(fun_function_debug_name_95),LITREF(lit_120),T101,ENVNUL,PNUL,YPfalse);
  T104 = BOUNDP(YevalSastYfunction_debug_name);
  if (T104 != YPfalse) {
    T103 = VARREF(YevalSastYfunction_debug_name);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_function_debug_name_95;
  T102 = CALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(YevalSastYfunction_debug_name,T102);
  lit_121 = YPPsym((P)"function-debug-name-setter");
  T106 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_debug_name_setter_96 = YPmet(FUNCODEREF(fun_function_debug_name_setter_96),LITREF(lit_121),T106,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(YevalSastYfunction_debug_name_setter);
  if (T109 != YPfalse) {
    T108 = VARREF(YevalSastYfunction_debug_name_setter);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_function_debug_name_setter_96;
  T107 = CALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YevalSastYfunction_debug_name_setter,T107);
  T111 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPmet(FUNCODEREF(fun_97),YPfalse,T111,ENVNUL,PNUL,YPfalse);
  T112 = fun_97;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_functionG),VARREF(YevalSastYfunction_debug_name),VARREF(YevalSastYfunction_debug_name_setter),VARREF(YLanyG),T112);
  lit_122 = YPPsym((P)"function-signature");
  T113 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_signature_98 = YPmet(FUNCODEREF(fun_function_signature_98),LITREF(lit_122),T113,ENVNUL,PNUL,YPfalse);
  T116 = BOUNDP(YevalSastYfunction_signature);
  if (T116 != YPfalse) {
    T115 = VARREF(YevalSastYfunction_signature);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_function_signature_98;
  T114 = CALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(YevalSastYfunction_signature,T114);
  lit_123 = YPPsym((P)"function-signature-setter");
  T118 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_signature_setter_99 = YPmet(FUNCODEREF(fun_function_signature_setter_99),LITREF(lit_123),T118,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(YevalSastYfunction_signature_setter);
  if (T121 != YPfalse) {
    T120 = VARREF(YevalSastYfunction_signature_setter);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_function_signature_setter_99;
  T119 = CALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(YevalSastYfunction_signature_setter,T119);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_functionG),VARREF(YevalSastYfunction_signature),VARREF(YevalSastYfunction_signature_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_124 = YPPsym((P)"function-bindings");
  lit_125 = YPPsym((P)"x");
  T123 = YPsig(YPPlist(1,LITREF(lit_125)),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_bindings = YPmet(FUNCODEREF(YevalSastYfunction_bindings),LITREF(lit_124),T123,ENVNUL,PNUL,YPfalse);
  T124 = YevalSastYfunction_bindings;
  VARSET(YevalSastYfunction_bindings,T124);
  lit_126 = YPPsym((P)"function-specs");
  T125 = YPsig(YPPlist(1,LITREF(lit_125)),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_specs = YPmet(FUNCODEREF(YevalSastYfunction_specs),LITREF(lit_126),T125,ENVNUL,PNUL,YPfalse);
  T126 = YevalSastYfunction_specs;
  VARSET(YevalSastYfunction_specs,T126);
  lit_127 = YPPsym((P)"function-nary?");
  T127 = YPsig(YPPlist(1,LITREF(lit_125)),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_naryQ = YPmet(FUNCODEREF(YevalSastYfunction_naryQ),LITREF(lit_127),T127,ENVNUL,PNUL,YPfalse);
  T128 = YevalSastYfunction_naryQ;
  VARSET(YevalSastYfunction_naryQ,T128);
  lit_128 = YPPsym((P)"function-value");
  T129 = YPsig(YPPlist(1,LITREF(lit_125)),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_value = YPmet(FUNCODEREF(YevalSastYfunction_value),LITREF(lit_128),T129,ENVNUL,PNUL,YPfalse);
  T130 = YevalSastYfunction_value;
  VARSET(YevalSastYfunction_value,T130);
  lit_129 = YPPsym((P)"function-kind");
  lit_130 = YPsb((P)"FUN");
  T131 = YPsig(YPPlist(1,LITREF(lit_125)),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_104 = YPmet(FUNCODEREF(fun_function_kind_104),LITREF(lit_129),T131,ENVNUL,PNUL,YPfalse);
  T134 = BOUNDP(YevalSastYfunction_kind);
  if (T134 != YPfalse) {
    T133 = VARREF(YevalSastYfunction_kind);
  } else {
    T133 = YPfalse;
  }
  T135 = fun_function_kind_104;
  T132 = CALL2(1,VARREF(YPdefine_method),T133,T135);
  VARSET(YevalSastYfunction_kind,T132);
  lit_131 = YPPsym((P)"function-display-name");
  lit_132 = YPPsym((P)"f");
  lit_133 = YPsb((P)"%s:%s");
  lit_134 = YPsb((P)"anonymous function");
  T136 = YPsig(YPPlist(1,LITREF(lit_132)),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_display_name = YPmet(FUNCODEREF(YevalSastYfunction_display_name),LITREF(lit_131),T136,ENVNUL,PNUL,YPfalse);
  T137 = YevalSastYfunction_display_name;
  VARSET(YevalSastYfunction_display_name,T137);
  lit_135 = YPPsym((P)"invalidate-dependent");
  lit_136 = YPPsym((P)"dependent");
  lit_137 = YPsb((P)"warning: %s needs to be reparsed\n");
  lit_138 = YPsb((P)"warning: %s needs to be re-optimized\n");
  lit_139 = YPsb((P)"warning: unknown dependency of %s clobbered\n");
  T138 = YPsig(YPPlist(3,LITREF(lit_136),LITREF(lit_51),LITREF(lit_52)),YPPlist(3,VARREF(YevalSastYLast_functionG),VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_invalidate_dependent_106 = YPmet(FUNCODEREF(fun_invalidate_dependent_106),LITREF(lit_135),T138,ENVNUL,PNUL,YPfalse);
  T141 = BOUNDP(YevalSdependencyYinvalidate_dependent);
  if (T141 != YPfalse) {
    T140 = VARREF(YevalSdependencyYinvalidate_dependent);
  } else {
    T140 = YPfalse;
  }
  T142 = fun_invalidate_dependent_106;
  T139 = CALL2(1,VARREF(YPdefine_method),T140,T142);
  VARSET(YevalSdependencyYinvalidate_dependent,T139);
  lit_140 = YPPsym((P)"<programs>");
  T144 = (P)YPpair(VARREF(YevalSastYLpassive_programG),Ynil);
  T143 = CALL2(1,VARREF(Yfab_class),LITREF(lit_140),T144);
  VARSET(YevalSastYLprogramsG,T143);
  lit_141 = YPPsym((P)"as-lst");
  lit_142 = YPPsym((P)"e");
  lit_143 = YPPsym((P)"loop");
  lit_144 = YPPsym((P)"res");
  T146 = YPsig(YPPlist(2,LITREF(lit_144),LITREF(lit_142)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_107 = YPmet(FUNCODEREF(fun_loop_107),LITREF(lit_143),T146,ENVNUL,PNUL,YPfalse);
  T145 = YPsig(YPPlist(1,LITREF(lit_142)),YPPlist(1,VARREF(YevalSastYLprogramsG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_as_lst_108 = YPmet(FUNCODEREF(fun_as_lst_108),LITREF(lit_141),T145,ENVNUL,PNUL,YPfalse);
  T149 = BOUNDP(YevalSastYas_lst);
  if (T149 != YPfalse) {
    T148 = VARREF(YevalSastYas_lst);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_as_lst_108;
  T147 = CALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(YevalSastYas_lst,T147);
  lit_145 = YPPsym((P)"x-1719");
  lit_146 = YPPsym((P)"def-list");
  lit_147 = YPsb((P)"<");
  lit_148 = YPsb((P)">");
  lit_149 = YPsb((P)"$");
  lit_150 = YPsb((P)"-empty");
  lit_151 = YPPsym((P)"dc");
  lit_152 = YPPsym((P)"<lst>");
  lit_153 = YPPsym((P)"dv");
  lit_154 = YPPsym((P)"new");
  lit_155 = YPPsym((P)"df");
  lit_156 = YPPsym((P)"h");
  lit_157 = YPPsym((P)"t");
  lit_158 = YPPsym((P)"head");
  lit_159 = YPPsym((P)"tail");
  lit_160 = YPPsym((P)"dm");
  lit_161 = YPPsym((P)"empty");
  lit_162 = YPPsym((P)"t=");
  lit_163 = YPPsym((P)"=>");
  T153 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1719_109 = YPmet(FUNCODEREF(fun_x_1719_109),LITREF(lit_145),T153,ENVNUL,PNUL,YPfalse);
  T152 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_110 = YPmet(FUNCODEREF(fun_110),YPfalse,T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_111 = YPmet(FUNCODEREF(fun_111),YPfalse,T151,ENVNUL,PNUL,YPfalse);
  T154 = fun_111;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"def-list"),T154);
  lit_164 = YPPsym((P)"x-1723");
  lit_165 = YPPsym((P)"def-programs");
  T157 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1723_112 = YPmet(FUNCODEREF(fun_x_1723_112),LITREF(lit_164),T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_113 = YPmet(FUNCODEREF(fun_113),YPfalse,T156,ENVNUL,PNUL,YPfalse);
  T155 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_114 = YPmet(FUNCODEREF(fun_114),YPfalse,T155,ENVNUL,PNUL,YPfalse);
  T158 = fun_114;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"def-programs"),T158);
  lit_166 = YPPsym((P)"<ast-embodied-function>");
  T160 = (P)YPpair(VARREF(YevalSastYLast_functionG),Ynil);
  T159 = CALL2(1,VARREF(Yfab_class),LITREF(lit_166),T160);
  VARSET(YevalSastYLast_embodied_functionG,T159);
  lit_167 = YPPsym((P)"function-body");
  T161 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_body_115 = YPmet(FUNCODEREF(fun_function_body_115),LITREF(lit_167),T161,ENVNUL,PNUL,YPfalse);
  T164 = BOUNDP(YevalSastYfunction_body);
  if (T164 != YPfalse) {
    T163 = VARREF(YevalSastYfunction_body);
  } else {
    T163 = YPfalse;
  }
  T165 = fun_function_body_115;
  T162 = CALL2(1,VARREF(YPdefine_method),T163,T165);
  VARSET(YevalSastYfunction_body,T162);
  lit_168 = YPPsym((P)"function-body-setter");
  T166 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_body_setter_116 = YPmet(FUNCODEREF(fun_function_body_setter_116),LITREF(lit_168),T166,ENVNUL,PNUL,YPfalse);
  T169 = BOUNDP(YevalSastYfunction_body_setter);
  if (T169 != YPfalse) {
    T168 = VARREF(YevalSastYfunction_body_setter);
  } else {
    T168 = YPfalse;
  }
  T170 = fun_function_body_setter_116;
  T167 = CALL2(1,VARREF(YPdefine_method),T168,T170);
  VARSET(YevalSastYfunction_body_setter,T167);
  T171 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_117 = YPmet(FUNCODEREF(fun_117),YPfalse,T171,ENVNUL,PNUL,YPfalse);
  T172 = fun_117;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_body),VARREF(YevalSastYfunction_body_setter),VARREF(YLanyG),T172);
  lit_169 = YPPsym((P)"function-index");
  T173 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_index_118 = YPmet(FUNCODEREF(fun_function_index_118),LITREF(lit_169),T173,ENVNUL,PNUL,YPfalse);
  T176 = BOUNDP(YevalSastYfunction_index);
  if (T176 != YPfalse) {
    T175 = VARREF(YevalSastYfunction_index);
  } else {
    T175 = YPfalse;
  }
  T177 = fun_function_index_118;
  T174 = CALL2(1,VARREF(YPdefine_method),T175,T177);
  VARSET(YevalSastYfunction_index,T174);
  lit_170 = YPPsym((P)"function-index-setter");
  T178 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_index_setter_119 = YPmet(FUNCODEREF(fun_function_index_setter_119),LITREF(lit_170),T178,ENVNUL,PNUL,YPfalse);
  T181 = BOUNDP(YevalSastYfunction_index_setter);
  if (T181 != YPfalse) {
    T180 = VARREF(YevalSastYfunction_index_setter);
  } else {
    T180 = YPfalse;
  }
  T182 = fun_function_index_setter_119;
  T179 = CALL2(1,VARREF(YPdefine_method),T180,T182);
  VARSET(YevalSastYfunction_index_setter,T179);
  T183 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_120 = YPmet(FUNCODEREF(fun_120),YPfalse,T183,ENVNUL,PNUL,YPfalse);
  T184 = fun_120;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_index),VARREF(YevalSastYfunction_index_setter),VARREF(YLanyG),T184);
  lit_171 = YPPsym((P)"function-temporaries");
  T185 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_temporaries_121 = YPmet(FUNCODEREF(fun_function_temporaries_121),LITREF(lit_171),T185,ENVNUL,PNUL,YPfalse);
  T188 = BOUNDP(YevalSastYfunction_temporaries);
  if (T188 != YPfalse) {
    T187 = VARREF(YevalSastYfunction_temporaries);
  } else {
    T187 = YPfalse;
  }
  T189 = fun_function_temporaries_121;
  T186 = CALL2(1,VARREF(YPdefine_method),T187,T189);
  VARSET(YevalSastYfunction_temporaries,T186);
  lit_172 = YPPsym((P)"function-temporaries-setter");
  T190 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_temporaries_setter_122 = YPmet(FUNCODEREF(fun_function_temporaries_setter_122),LITREF(lit_172),T190,ENVNUL,PNUL,YPfalse);
  T193 = BOUNDP(YevalSastYfunction_temporaries_setter);
  if (T193 != YPfalse) {
    T192 = VARREF(YevalSastYfunction_temporaries_setter);
  } else {
    T192 = YPfalse;
  }
  T194 = fun_function_temporaries_setter_122;
  T191 = CALL2(1,VARREF(YPdefine_method),T192,T194);
  VARSET(YevalSastYfunction_temporaries_setter,T191);
  T195 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_123 = YPmet(FUNCODEREF(fun_123),YPfalse,T195,ENVNUL,PNUL,YPfalse);
  T196 = fun_123;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_temporaries),VARREF(YevalSastYfunction_temporaries_setter),VARREF(YLanyG),T196);
  lit_173 = YPPsym((P)"function-registers");
  T197 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_registers_124 = YPmet(FUNCODEREF(fun_function_registers_124),LITREF(lit_173),T197,ENVNUL,PNUL,YPfalse);
  T200 = BOUNDP(YevalSastYfunction_registers);
  if (T200 != YPfalse) {
    T199 = VARREF(YevalSastYfunction_registers);
  } else {
    T199 = YPfalse;
  }
  T201 = fun_function_registers_124;
  T198 = CALL2(1,VARREF(YPdefine_method),T199,T201);
  VARSET(YevalSastYfunction_registers,T198);
  lit_174 = YPPsym((P)"function-registers-setter");
  T202 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_registers_setter_125 = YPmet(FUNCODEREF(fun_function_registers_setter_125),LITREF(lit_174),T202,ENVNUL,PNUL,YPfalse);
  T205 = BOUNDP(YevalSastYfunction_registers_setter);
  if (T205 != YPfalse) {
    T204 = VARREF(YevalSastYfunction_registers_setter);
  } else {
    T204 = YPfalse;
  }
  T206 = fun_function_registers_setter_125;
  T203 = CALL2(1,VARREF(YPdefine_method),T204,T206);
  VARSET(YevalSastYfunction_registers_setter,T203);
  T207 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_126 = YPmet(FUNCODEREF(fun_126),YPfalse,T207,ENVNUL,PNUL,YPfalse);
  T208 = fun_126;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_registers),VARREF(YevalSastYfunction_registers_setter),VARREF(YgooScolsSvecYLvecG),T208);
  lit_175 = YPPsym((P)"function-data-refs");
  T209 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_data_refs_127 = YPmet(FUNCODEREF(fun_function_data_refs_127),LITREF(lit_175),T209,ENVNUL,PNUL,YPfalse);
  T212 = BOUNDP(YevalSastYfunction_data_refs);
  if (T212 != YPfalse) {
    T211 = VARREF(YevalSastYfunction_data_refs);
  } else {
    T211 = YPfalse;
  }
  T213 = fun_function_data_refs_127;
  T210 = CALL2(1,VARREF(YPdefine_method),T211,T213);
  VARSET(YevalSastYfunction_data_refs,T210);
  lit_176 = YPPsym((P)"function-data-refs-setter");
  T214 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_data_refs_setter_128 = YPmet(FUNCODEREF(fun_function_data_refs_setter_128),LITREF(lit_176),T214,ENVNUL,PNUL,YPfalse);
  T217 = BOUNDP(YevalSastYfunction_data_refs_setter);
  if (T217 != YPfalse) {
    T216 = VARREF(YevalSastYfunction_data_refs_setter);
  } else {
    T216 = YPfalse;
  }
  T218 = fun_function_data_refs_setter_128;
  T215 = CALL2(1,VARREF(YPdefine_method),T216,T218);
  VARSET(YevalSastYfunction_data_refs_setter,T215);
  T219 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_129 = YPmet(FUNCODEREF(fun_129),YPfalse,T219,ENVNUL,PNUL,YPfalse);
  T220 = fun_129;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_data_refs),VARREF(YevalSastYfunction_data_refs_setter),VARREF(YLanyG),T220);
  lit_177 = YPPsym((P)"function-self-recursive?");
  T221 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_self_recursiveQ_130 = YPmet(FUNCODEREF(fun_function_self_recursiveQ_130),LITREF(lit_177),T221,ENVNUL,PNUL,YPfalse);
  T224 = BOUNDP(YevalSastYfunction_self_recursiveQ);
  if (T224 != YPfalse) {
    T223 = VARREF(YevalSastYfunction_self_recursiveQ);
  } else {
    T223 = YPfalse;
  }
  T225 = fun_function_self_recursiveQ_130;
  T222 = CALL2(1,VARREF(YPdefine_method),T223,T225);
  VARSET(YevalSastYfunction_self_recursiveQ,T222);
  lit_178 = YPPsym((P)"function-self-recursive?-setter");
  T228 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T227 = fun_function_self_recursiveQ_setter_131 = YPmet(FUNCODEREF(fun_function_self_recursiveQ_setter_131),LITREF(lit_178),T228,ENVNUL,PNUL,YPfalse);
  T232 = BOUNDP(YevalSastYfunction_self_recursiveQ_setter);
  if (T232 != YPfalse) {
    T231 = VARREF(YevalSastYfunction_self_recursiveQ_setter);
  } else {
    T231 = YPfalse;
  }
  T233 = fun_function_self_recursiveQ_setter_131;
  T230 = CALL2(1,VARREF(YPdefine_method),T231,T233);
  T229 = VARSET(YevalSastYfunction_self_recursiveQ_setter,T230);
  T226 = T229;
  return T226;
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
  P T208,T209,T210;
loop:
  T0 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_132 = YPmet(FUNCODEREF(fun_132),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T1 = fun_132;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_self_recursiveQ),VARREF(YevalSastYfunction_self_recursiveQ_setter),VARREF(YLanyG),T1);
  lit_179 = YPPsym((P)"function-source");
  T2 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_source_133 = YPmet(FUNCODEREF(fun_function_source_133),LITREF(lit_179),T2,ENVNUL,PNUL,YPfalse);
  T5 = BOUNDP(YevalSastYfunction_source);
  if (T5 != YPfalse) {
    T4 = VARREF(YevalSastYfunction_source);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_function_source_133;
  T3 = CALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(YevalSastYfunction_source,T3);
  lit_180 = YPPsym((P)"function-source-setter");
  T7 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_source_setter_134 = YPmet(FUNCODEREF(fun_function_source_setter_134),LITREF(lit_180),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YevalSastYfunction_source_setter);
  if (T10 != YPfalse) {
    T9 = VARREF(YevalSastYfunction_source_setter);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_function_source_setter_134;
  T8 = CALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YevalSastYfunction_source_setter,T8);
  T12 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_135 = YPmet(FUNCODEREF(fun_135),YPfalse,T12,ENVNUL,PNUL,YPfalse);
  T13 = fun_135;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_source),VARREF(YevalSastYfunction_source_setter),VARREF(YLanyG),T13);
  lit_181 = YPPsym((P)"<free-environment>");
  T16 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T15 = (P)YPpair(VARREF(YLlstG),T16);
  T14 = CALL2(1,VARREF(Yfab_class),LITREF(lit_181),T15);
  VARSET(YevalSastYLfree_environmentG,T14);
  T17 = CALL1(1,VARREF(Ynew),VARREF(YevalSastYLfree_environmentG));
  VARSET(YevalSastYDfree_environment_empty,T17);
  lit_182 = YPPsym((P)"free-environment");
  T18 = YPsig(YPPlist(2,LITREF(lit_156),LITREF(lit_157)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYfree_environment = YPmet(FUNCODEREF(YevalSastYfree_environment),LITREF(lit_182),T18,ENVNUL,PNUL,YPfalse);
  T19 = YevalSastYfree_environment;
  VARSET(YevalSastYfree_environment,T19);
  T21 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLfree_environmentG));
  T20 = YPsig(YPPlist(1,LITREF(lit_142)),YPPlist(1,T21),YPfalse,YPint((P)1),VARREF(YevalSastYLfree_environmentG),Ynil);
  fun_empty_137 = YPmet(FUNCODEREF(fun_empty_137),LITREF(lit_161),T20,ENVNUL,PNUL,YPfalse);
  T24 = BOUNDP(YgooScolsScolYempty);
  if (T24 != YPfalse) {
    T23 = VARREF(YgooScolsScolYempty);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_empty_137;
  T22 = CALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YgooScolsScolYempty,T22);
  lit_183 = YPPsym((P)"<ast-method>");
  T27 = (P)YPpair(VARREF(YevalSastYLast_embodied_functionG),Ynil);
  T26 = CALL2(1,VARREF(Yfab_class),LITREF(lit_183),T27);
  VARSET(YevalSastYLast_methodG,T26);
  lit_184 = YPPsym((P)"function-free");
  T28 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_free_138 = YPmet(FUNCODEREF(fun_function_free_138),LITREF(lit_184),T28,ENVNUL,PNUL,YPfalse);
  T31 = BOUNDP(YevalSastYfunction_free);
  if (T31 != YPfalse) {
    T30 = VARREF(YevalSastYfunction_free);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_function_free_138;
  T29 = CALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(YevalSastYfunction_free,T29);
  lit_185 = YPPsym((P)"function-free-setter");
  T33 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YevalSastYLfree_environmentG),VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_free_setter_139 = YPmet(FUNCODEREF(fun_function_free_setter_139),LITREF(lit_185),T33,ENVNUL,PNUL,YPfalse);
  T36 = BOUNDP(YevalSastYfunction_free_setter);
  if (T36 != YPfalse) {
    T35 = VARREF(YevalSastYfunction_free_setter);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_function_free_setter_139;
  T34 = CALL2(1,VARREF(YPdefine_method),T35,T37);
  VARSET(YevalSastYfunction_free_setter,T34);
  T38 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_140 = YPmet(FUNCODEREF(fun_140),YPfalse,T38,ENVNUL,PNUL,YPfalse);
  T39 = fun_140;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLast_methodG),VARREF(YevalSastYfunction_free),VARREF(YevalSastYfunction_free_setter),VARREF(YevalSastYLfree_environmentG),T39);
  lit_186 = YPsb((P)"MET");
  T40 = YPsig(YPPlist(1,LITREF(lit_125)),YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_141 = YPmet(FUNCODEREF(fun_function_kind_141),LITREF(lit_129),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YevalSastYfunction_kind);
  if (T43 != YPfalse) {
    T42 = VARREF(YevalSastYfunction_kind);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_function_kind_141;
  T41 = CALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YevalSastYfunction_kind,T41);
  lit_187 = YPPsym((P)"<ast-primitive>");
  T46 = (P)YPpair(VARREF(YevalSastYLast_embodied_functionG),Ynil);
  T45 = CALL2(1,VARREF(Yfab_class),LITREF(lit_187),T46);
  VARSET(YevalSastYLast_primitiveG,T45);
  lit_188 = YPsb((P)"PRM");
  T47 = YPsig(YPPlist(1,LITREF(lit_125)),YPPlist(1,VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_142 = YPmet(FUNCODEREF(fun_function_kind_142),LITREF(lit_129),T47,ENVNUL,PNUL,YPfalse);
  T50 = BOUNDP(YevalSastYfunction_kind);
  if (T50 != YPfalse) {
    T49 = VARREF(YevalSastYfunction_kind);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_function_kind_142;
  T48 = CALL2(1,VARREF(YPdefine_method),T49,T51);
  VARSET(YevalSastYfunction_kind,T48);
  lit_189 = YPPsym((P)"<ast-generic>");
  T53 = (P)YPpair(VARREF(YevalSastYLast_functionG),Ynil);
  T52 = CALL2(1,VARREF(Yfab_class),LITREF(lit_189),T53);
  VARSET(YevalSastYLast_genericG,T52);
  lit_190 = YPsb((P)"GEN");
  T54 = YPsig(YPPlist(1,LITREF(lit_125)),YPPlist(1,VARREF(YevalSastYLast_genericG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_143 = YPmet(FUNCODEREF(fun_function_kind_143),LITREF(lit_129),T54,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(YevalSastYfunction_kind);
  if (T57 != YPfalse) {
    T56 = VARREF(YevalSastYfunction_kind);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_function_kind_143;
  T55 = CALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YevalSastYfunction_kind,T55);
  lit_191 = YPPsym((P)"<alternative>");
  T60 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T59 = CALL2(1,VARREF(Yfab_class),LITREF(lit_191),T60);
  VARSET(YevalSastYLalternativeG,T59);
  lit_192 = YPPsym((P)"alternative-condition");
  T61 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_condition_144 = YPmet(FUNCODEREF(fun_alternative_condition_144),LITREF(lit_192),T61,ENVNUL,PNUL,YPfalse);
  T64 = BOUNDP(YevalSastYalternative_condition);
  if (T64 != YPfalse) {
    T63 = VARREF(YevalSastYalternative_condition);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_alternative_condition_144;
  T62 = CALL2(1,VARREF(YPdefine_method),T63,T65);
  VARSET(YevalSastYalternative_condition,T62);
  lit_193 = YPPsym((P)"alternative-condition-setter");
  T66 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_condition_setter_145 = YPmet(FUNCODEREF(fun_alternative_condition_setter_145),LITREF(lit_193),T66,ENVNUL,PNUL,YPfalse);
  T69 = BOUNDP(YevalSastYalternative_condition_setter);
  if (T69 != YPfalse) {
    T68 = VARREF(YevalSastYalternative_condition_setter);
  } else {
    T68 = YPfalse;
  }
  T70 = fun_alternative_condition_setter_145;
  T67 = CALL2(1,VARREF(YPdefine_method),T68,T70);
  VARSET(YevalSastYalternative_condition_setter,T67);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_condition),VARREF(YevalSastYalternative_condition_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_194 = YPPsym((P)"alternative-consequent");
  T71 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_consequent_146 = YPmet(FUNCODEREF(fun_alternative_consequent_146),LITREF(lit_194),T71,ENVNUL,PNUL,YPfalse);
  T74 = BOUNDP(YevalSastYalternative_consequent);
  if (T74 != YPfalse) {
    T73 = VARREF(YevalSastYalternative_consequent);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_alternative_consequent_146;
  T72 = CALL2(1,VARREF(YPdefine_method),T73,T75);
  VARSET(YevalSastYalternative_consequent,T72);
  lit_195 = YPPsym((P)"alternative-consequent-setter");
  T76 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_consequent_setter_147 = YPmet(FUNCODEREF(fun_alternative_consequent_setter_147),LITREF(lit_195),T76,ENVNUL,PNUL,YPfalse);
  T79 = BOUNDP(YevalSastYalternative_consequent_setter);
  if (T79 != YPfalse) {
    T78 = VARREF(YevalSastYalternative_consequent_setter);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_alternative_consequent_setter_147;
  T77 = CALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(YevalSastYalternative_consequent_setter,T77);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_consequent),VARREF(YevalSastYalternative_consequent_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_196 = YPPsym((P)"alternative-alternant");
  T81 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_alternant_148 = YPmet(FUNCODEREF(fun_alternative_alternant_148),LITREF(lit_196),T81,ENVNUL,PNUL,YPfalse);
  T84 = BOUNDP(YevalSastYalternative_alternant);
  if (T84 != YPfalse) {
    T83 = VARREF(YevalSastYalternative_alternant);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_alternative_alternant_148;
  T82 = CALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(YevalSastYalternative_alternant,T82);
  lit_197 = YPPsym((P)"alternative-alternant-setter");
  T86 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_alternant_setter_149 = YPmet(FUNCODEREF(fun_alternative_alternant_setter_149),LITREF(lit_197),T86,ENVNUL,PNUL,YPfalse);
  T89 = BOUNDP(YevalSastYalternative_alternant_setter);
  if (T89 != YPfalse) {
    T88 = VARREF(YevalSastYalternative_alternant_setter);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_alternative_alternant_setter_149;
  T87 = CALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(YevalSastYalternative_alternant_setter,T87);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_alternant),VARREF(YevalSastYalternative_alternant_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_198 = YPPsym((P)"<sequential>");
  T93 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T92 = (P)YPpair(VARREF(YLlstG),T93);
  T91 = CALL2(1,VARREF(Yfab_class),LITREF(lit_198),T92);
  VARSET(YevalSastYLsequentialG,T91);
  T94 = CALL1(1,VARREF(Ynew),VARREF(YevalSastYLsequentialG));
  VARSET(YevalSastYDsequential_empty,T94);
  lit_199 = YPPsym((P)"sequential");
  T95 = YPsig(YPPlist(2,LITREF(lit_156),LITREF(lit_157)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYsequential = YPmet(FUNCODEREF(YevalSastYsequential),LITREF(lit_199),T95,ENVNUL,PNUL,YPfalse);
  T96 = YevalSastYsequential;
  VARSET(YevalSastYsequential,T96);
  T98 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLsequentialG));
  T97 = YPsig(YPPlist(1,LITREF(lit_142)),YPPlist(1,T98),YPfalse,YPint((P)1),VARREF(YevalSastYLsequentialG),Ynil);
  fun_empty_151 = YPmet(FUNCODEREF(fun_empty_151),LITREF(lit_161),T97,ENVNUL,PNUL,YPfalse);
  T101 = BOUNDP(YgooScolsScolYempty);
  if (T101 != YPfalse) {
    T100 = VARREF(YgooScolsScolYempty);
  } else {
    T100 = YPfalse;
  }
  T102 = fun_empty_151;
  T99 = CALL2(1,VARREF(YPdefine_method),T100,T102);
  VARSET(YgooScolsScolYempty,T99);
  lit_200 = YPPsym((P)"<constant>");
  T104 = (P)YPpair(VARREF(YevalSastYLpassive_programG),Ynil);
  T103 = CALL2(1,VARREF(Yfab_class),LITREF(lit_200),T104);
  VARSET(YevalSastYLconstantG,T103);
  lit_201 = YPPsym((P)"constant-value");
  T105 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_constant_value_152 = YPmet(FUNCODEREF(fun_constant_value_152),LITREF(lit_201),T105,ENVNUL,PNUL,YPfalse);
  T108 = BOUNDP(YevalSastYconstant_value);
  if (T108 != YPfalse) {
    T107 = VARREF(YevalSastYconstant_value);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_constant_value_152;
  T106 = CALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YevalSastYconstant_value,T106);
  lit_202 = YPPsym((P)"constant-value-setter");
  T110 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_constant_value_setter_153 = YPmet(FUNCODEREF(fun_constant_value_setter_153),LITREF(lit_202),T110,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(YevalSastYconstant_value_setter);
  if (T113 != YPfalse) {
    T112 = VARREF(YevalSastYconstant_value_setter);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_constant_value_setter_153;
  T111 = CALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YevalSastYconstant_value_setter,T111);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),VARREF(YevalSastYconstant_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_203 = YPPsym((P)"constant-index");
  T115 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_constant_index_154 = YPmet(FUNCODEREF(fun_constant_index_154),LITREF(lit_203),T115,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YevalSastYconstant_index);
  if (T118 != YPfalse) {
    T117 = VARREF(YevalSastYconstant_index);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_constant_index_154;
  T116 = CALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YevalSastYconstant_index,T116);
  lit_204 = YPPsym((P)"constant-index-setter");
  T120 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_constant_index_setter_155 = YPmet(FUNCODEREF(fun_constant_index_setter_155),LITREF(lit_204),T120,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YevalSastYconstant_index_setter);
  if (T123 != YPfalse) {
    T122 = VARREF(YevalSastYconstant_index_setter);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_constant_index_setter_155;
  T121 = CALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YevalSastYconstant_index_setter,T121);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_index),VARREF(YevalSastYconstant_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_205 = YPPsym((P)"<raw-constant>");
  T126 = (P)YPpair(VARREF(YevalSastYLconstantG),Ynil);
  T125 = CALL2(1,VARREF(Yfab_class),LITREF(lit_205),T126);
  VARSET(YevalSastYLraw_constantG,T125);
  lit_206 = YPPsym((P)"<immediate-constant>");
  T128 = (P)YPpair(VARREF(YevalSastYLconstantG),Ynil);
  T127 = CALL2(1,VARREF(Yfab_class),LITREF(lit_206),T128);
  VARSET(YevalSastYLimmediate_constantG,T127);
  lit_207 = YPPsym((P)"<application>");
  T130 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T129 = CALL2(1,VARREF(Yfab_class),LITREF(lit_207),T130);
  VARSET(YevalSastYLapplicationG,T129);
  lit_208 = YPPsym((P)"application-arguments");
  T131 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_arguments_156 = YPmet(FUNCODEREF(fun_application_arguments_156),LITREF(lit_208),T131,ENVNUL,PNUL,YPfalse);
  T134 = BOUNDP(YevalSastYapplication_arguments);
  if (T134 != YPfalse) {
    T133 = VARREF(YevalSastYapplication_arguments);
  } else {
    T133 = YPfalse;
  }
  T135 = fun_application_arguments_156;
  T132 = CALL2(1,VARREF(YPdefine_method),T133,T135);
  VARSET(YevalSastYapplication_arguments,T132);
  lit_209 = YPPsym((P)"application-arguments-setter");
  T136 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_arguments_setter_157 = YPmet(FUNCODEREF(fun_application_arguments_setter_157),LITREF(lit_209),T136,ENVNUL,PNUL,YPfalse);
  T139 = BOUNDP(YevalSastYapplication_arguments_setter);
  if (T139 != YPfalse) {
    T138 = VARREF(YevalSastYapplication_arguments_setter);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_application_arguments_setter_157;
  T137 = CALL2(1,VARREF(YPdefine_method),T138,T140);
  VARSET(YevalSastYapplication_arguments_setter,T137);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLapplicationG),VARREF(YevalSastYapplication_arguments),VARREF(YevalSastYapplication_arguments_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_210 = YPPsym((P)"application-tail?");
  T141 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_tailQ_158 = YPmet(FUNCODEREF(fun_application_tailQ_158),LITREF(lit_210),T141,ENVNUL,PNUL,YPfalse);
  T144 = BOUNDP(YevalSastYapplication_tailQ);
  if (T144 != YPfalse) {
    T143 = VARREF(YevalSastYapplication_tailQ);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_application_tailQ_158;
  T142 = CALL2(1,VARREF(YPdefine_method),T143,T145);
  VARSET(YevalSastYapplication_tailQ,T142);
  lit_211 = YPPsym((P)"application-tail?-setter");
  T146 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_tailQ_setter_159 = YPmet(FUNCODEREF(fun_application_tailQ_setter_159),LITREF(lit_211),T146,ENVNUL,PNUL,YPfalse);
  T149 = BOUNDP(YevalSastYapplication_tailQ_setter);
  if (T149 != YPfalse) {
    T148 = VARREF(YevalSastYapplication_tailQ_setter);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_application_tailQ_setter_159;
  T147 = CALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(YevalSastYapplication_tailQ_setter,T147);
  T151 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_160 = YPmet(FUNCODEREF(fun_160),YPfalse,T151,ENVNUL,PNUL,YPfalse);
  T152 = fun_160;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLapplicationG),VARREF(YevalSastYapplication_tailQ),VARREF(YevalSastYapplication_tailQ_setter),VARREF(YLanyG),T152);
  lit_212 = YPPsym((P)"<regular-application>");
  T154 = (P)YPpair(VARREF(YevalSastYLapplicationG),Ynil);
  T153 = CALL2(1,VARREF(Yfab_class),LITREF(lit_212),T154);
  VARSET(YevalSastYLregular_applicationG,T153);
  lit_213 = YPPsym((P)"application-function");
  T155 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_function_161 = YPmet(FUNCODEREF(fun_application_function_161),LITREF(lit_213),T155,ENVNUL,PNUL,YPfalse);
  T158 = BOUNDP(YevalSastYapplication_function);
  if (T158 != YPfalse) {
    T157 = VARREF(YevalSastYapplication_function);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_application_function_161;
  T156 = CALL2(1,VARREF(YPdefine_method),T157,T159);
  VARSET(YevalSastYapplication_function,T156);
  lit_214 = YPPsym((P)"application-function-setter");
  T160 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_function_setter_162 = YPmet(FUNCODEREF(fun_application_function_setter_162),LITREF(lit_214),T160,ENVNUL,PNUL,YPfalse);
  T163 = BOUNDP(YevalSastYapplication_function_setter);
  if (T163 != YPfalse) {
    T162 = VARREF(YevalSastYapplication_function_setter);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_application_function_setter_162;
  T161 = CALL2(1,VARREF(YPdefine_method),T162,T164);
  VARSET(YevalSastYapplication_function_setter,T161);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLregular_applicationG),VARREF(YevalSastYapplication_function),VARREF(YevalSastYapplication_function_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_215 = YPPsym((P)"application-known?");
  T165 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_knownQ_163 = YPmet(FUNCODEREF(fun_application_knownQ_163),LITREF(lit_215),T165,ENVNUL,PNUL,YPfalse);
  T168 = BOUNDP(YevalSastYapplication_knownQ);
  if (T168 != YPfalse) {
    T167 = VARREF(YevalSastYapplication_knownQ);
  } else {
    T167 = YPfalse;
  }
  T169 = fun_application_knownQ_163;
  T166 = CALL2(1,VARREF(YPdefine_method),T167,T169);
  VARSET(YevalSastYapplication_knownQ,T166);
  lit_216 = YPPsym((P)"application-known?-setter");
  T170 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_knownQ_setter_164 = YPmet(FUNCODEREF(fun_application_knownQ_setter_164),LITREF(lit_216),T170,ENVNUL,PNUL,YPfalse);
  T173 = BOUNDP(YevalSastYapplication_knownQ_setter);
  if (T173 != YPfalse) {
    T172 = VARREF(YevalSastYapplication_knownQ_setter);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_application_knownQ_setter_164;
  T171 = CALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(YevalSastYapplication_knownQ_setter,T171);
  T175 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_165 = YPmet(FUNCODEREF(fun_165),YPfalse,T175,ENVNUL,PNUL,YPfalse);
  T176 = fun_165;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLregular_applicationG),VARREF(YevalSastYapplication_knownQ),VARREF(YevalSastYapplication_knownQ_setter),VARREF(YLanyG),T176);
  lit_217 = YPPsym((P)"<method-application>");
  T178 = (P)YPpair(VARREF(YevalSastYLregular_applicationG),Ynil);
  T177 = CALL2(1,VARREF(Yfab_class),LITREF(lit_217),T178);
  VARSET(YevalSastYLmethod_applicationG,T177);
  lit_218 = YPPsym((P)"application-next-methods");
  T179 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmethod_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_next_methods_166 = YPmet(FUNCODEREF(fun_application_next_methods_166),LITREF(lit_218),T179,ENVNUL,PNUL,YPfalse);
  T182 = BOUNDP(YevalSastYapplication_next_methods);
  if (T182 != YPfalse) {
    T181 = VARREF(YevalSastYapplication_next_methods);
  } else {
    T181 = YPfalse;
  }
  T183 = fun_application_next_methods_166;
  T180 = CALL2(1,VARREF(YPdefine_method),T181,T183);
  VARSET(YevalSastYapplication_next_methods,T180);
  lit_219 = YPPsym((P)"application-next-methods-setter");
  T184 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmethod_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_next_methods_setter_167 = YPmet(FUNCODEREF(fun_application_next_methods_setter_167),LITREF(lit_219),T184,ENVNUL,PNUL,YPfalse);
  T187 = BOUNDP(YevalSastYapplication_next_methods_setter);
  if (T187 != YPfalse) {
    T186 = VARREF(YevalSastYapplication_next_methods_setter);
  } else {
    T186 = YPfalse;
  }
  T188 = fun_application_next_methods_setter_167;
  T185 = CALL2(1,VARREF(YPdefine_method),T186,T188);
  VARSET(YevalSastYapplication_next_methods_setter,T185);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLmethod_applicationG),VARREF(YevalSastYapplication_next_methods),VARREF(YevalSastYapplication_next_methods_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_220 = YPPsym((P)"<predefined-application>");
  T190 = (P)YPpair(VARREF(YevalSastYLapplicationG),Ynil);
  T189 = CALL2(1,VARREF(Yfab_class),LITREF(lit_220),T190);
  VARSET(YevalSastYLpredefined_applicationG,T189);
  lit_221 = YPPsym((P)"application-binding");
  T191 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLpredefined_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_binding_168 = YPmet(FUNCODEREF(fun_application_binding_168),LITREF(lit_221),T191,ENVNUL,PNUL,YPfalse);
  T194 = BOUNDP(YevalSastYapplication_binding);
  if (T194 != YPfalse) {
    T193 = VARREF(YevalSastYapplication_binding);
  } else {
    T193 = YPfalse;
  }
  T195 = fun_application_binding_168;
  T192 = CALL2(1,VARREF(YPdefine_method),T193,T195);
  VARSET(YevalSastYapplication_binding,T192);
  lit_222 = YPPsym((P)"application-binding-setter");
  T196 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLpredefined_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_binding_setter_169 = YPmet(FUNCODEREF(fun_application_binding_setter_169),LITREF(lit_222),T196,ENVNUL,PNUL,YPfalse);
  T199 = BOUNDP(YevalSastYapplication_binding_setter);
  if (T199 != YPfalse) {
    T198 = VARREF(YevalSastYapplication_binding_setter);
  } else {
    T198 = YPfalse;
  }
  T200 = fun_application_binding_setter_169;
  T197 = CALL2(1,VARREF(YPdefine_method),T198,T200);
  VARSET(YevalSastYapplication_binding_setter,T197);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSastYapplication_binding),VARREF(YevalSastYapplication_binding_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_223 = YPPsym((P)"<fix-let>");
  T202 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T201 = CALL2(1,VARREF(Yfab_class),LITREF(lit_223),T202);
  VARSET(YevalSastYLfix_letG,T201);
  lit_224 = YPPsym((P)"fix-let-bindings");
  T205 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T204 = fun_fix_let_bindings_170 = YPmet(FUNCODEREF(fun_fix_let_bindings_170),LITREF(lit_224),T205,ENVNUL,PNUL,YPfalse);
  T209 = BOUNDP(YevalSastYfix_let_bindings);
  if (T209 != YPfalse) {
    T208 = VARREF(YevalSastYfix_let_bindings);
  } else {
    T208 = YPfalse;
  }
  T210 = fun_fix_let_bindings_170;
  T207 = CALL2(1,VARREF(YPdefine_method),T208,T210);
  T206 = VARSET(YevalSastYfix_let_bindings,T207);
  T203 = T206;
  return T203;
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
loop:
  lit_225 = YPPsym((P)"fix-let-bindings-setter");
  T0 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_bindings_setter_171 = YPmet(FUNCODEREF(fun_fix_let_bindings_setter_171),LITREF(lit_225),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSastYfix_let_bindings_setter);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSastYfix_let_bindings_setter);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_fix_let_bindings_setter_171;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSastYfix_let_bindings_setter,T1);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_bindings),VARREF(YevalSastYfix_let_bindings_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_226 = YPPsym((P)"fix-let-types");
  T5 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_types_172 = YPmet(FUNCODEREF(fun_fix_let_types_172),LITREF(lit_226),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YevalSastYfix_let_types);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSastYfix_let_types);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_fix_let_types_172;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSastYfix_let_types,T6);
  lit_227 = YPPsym((P)"fix-let-types-setter");
  T10 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_types_setter_173 = YPmet(FUNCODEREF(fun_fix_let_types_setter_173),LITREF(lit_227),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YevalSastYfix_let_types_setter);
  if (T13 != YPfalse) {
    T12 = VARREF(YevalSastYfix_let_types_setter);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_fix_let_types_setter_173;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YevalSastYfix_let_types_setter,T11);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_types),VARREF(YevalSastYfix_let_types_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_228 = YPPsym((P)"fix-let-arguments");
  T15 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_arguments_174 = YPmet(FUNCODEREF(fun_fix_let_arguments_174),LITREF(lit_228),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YevalSastYfix_let_arguments);
  if (T18 != YPfalse) {
    T17 = VARREF(YevalSastYfix_let_arguments);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_fix_let_arguments_174;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YevalSastYfix_let_arguments,T16);
  lit_229 = YPPsym((P)"fix-let-arguments-setter");
  T20 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_arguments_setter_175 = YPmet(FUNCODEREF(fun_fix_let_arguments_setter_175),LITREF(lit_229),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YevalSastYfix_let_arguments_setter);
  if (T23 != YPfalse) {
    T22 = VARREF(YevalSastYfix_let_arguments_setter);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_fix_let_arguments_setter_175;
  T21 = CALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YevalSastYfix_let_arguments_setter,T21);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_arguments),VARREF(YevalSastYfix_let_arguments_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_230 = YPPsym((P)"fix-let-body");
  T25 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_body_176 = YPmet(FUNCODEREF(fun_fix_let_body_176),LITREF(lit_230),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YevalSastYfix_let_body);
  if (T28 != YPfalse) {
    T27 = VARREF(YevalSastYfix_let_body);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_fix_let_body_176;
  T26 = CALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YevalSastYfix_let_body,T26);
  lit_231 = YPPsym((P)"fix-let-body-setter");
  T30 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_body_setter_177 = YPmet(FUNCODEREF(fun_fix_let_body_setter_177),LITREF(lit_231),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YevalSastYfix_let_body_setter);
  if (T33 != YPfalse) {
    T32 = VARREF(YevalSastYfix_let_body_setter);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_fix_let_body_setter_177;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YevalSastYfix_let_body_setter,T31);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_body),VARREF(YevalSastYfix_let_body_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_232 = YPPsym((P)"<fab-list>");
  T37 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T36 = (P)YPpair(VARREF(YLlstG),T37);
  T35 = CALL2(1,VARREF(Yfab_class),LITREF(lit_232),T36);
  VARSET(YevalSastYLfab_listG,T35);
  T38 = CALL1(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG));
  VARSET(YevalSastYDfab_list_empty,T38);
  lit_233 = YPPsym((P)"fab-list");
  T39 = YPsig(YPPlist(2,LITREF(lit_156),LITREF(lit_157)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYfab_list = YPmet(FUNCODEREF(YevalSastYfab_list),LITREF(lit_233),T39,ENVNUL,PNUL,YPfalse);
  T40 = YevalSastYfab_list;
  VARSET(YevalSastYfab_list,T40);
  T42 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLfab_listG));
  T41 = YPsig(YPPlist(1,LITREF(lit_142)),YPPlist(1,T42),YPfalse,YPint((P)1),VARREF(YevalSastYLfab_listG),Ynil);
  fun_empty_179 = YPmet(FUNCODEREF(fun_empty_179),LITREF(lit_161),T41,ENVNUL,PNUL,YPfalse);
  T45 = BOUNDP(YgooScolsScolYempty);
  if (T45 != YPfalse) {
    T44 = VARREF(YgooScolsScolYempty);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_empty_179;
  T43 = CALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(YgooScolsScolYempty,T43);
  lit_234 = YPPsym((P)"<arguments>");
  T49 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T48 = (P)YPpair(VARREF(YLlstG),T49);
  T47 = CALL2(1,VARREF(Yfab_class),LITREF(lit_234),T48);
  VARSET(YevalSastYLargumentsG,T47);
  T50 = CALL1(1,VARREF(Ynew),VARREF(YevalSastYLargumentsG));
  VARSET(YevalSastYDarguments_empty,T50);
  T51 = YPsig(YPPlist(2,LITREF(lit_156),LITREF(lit_157)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYarguments = YPmet(FUNCODEREF(YevalSastYarguments),LITREF(lit_15),T51,ENVNUL,PNUL,YPfalse);
  T52 = YevalSastYarguments;
  VARSET(YevalSastYarguments,T52);
  T54 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLargumentsG));
  T53 = YPsig(YPPlist(1,LITREF(lit_142)),YPPlist(1,T54),YPfalse,YPint((P)1),VARREF(YevalSastYLargumentsG),Ynil);
  fun_empty_181 = YPmet(FUNCODEREF(fun_empty_181),LITREF(lit_161),T53,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(YgooScolsScolYempty);
  if (T57 != YPfalse) {
    T56 = VARREF(YgooScolsScolYempty);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_empty_181;
  T55 = CALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YgooScolsScolYempty,T55);
  lit_235 = YPPsym((P)"<locals>");
  T60 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T59 = CALL2(1,VARREF(Yfab_class),LITREF(lit_235),T60);
  VARSET(YevalSastYLlocalsG,T59);
  lit_236 = YPPsym((P)"locals-bindings");
  T61 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_bindings_182 = YPmet(FUNCODEREF(fun_locals_bindings_182),LITREF(lit_236),T61,ENVNUL,PNUL,YPfalse);
  T64 = BOUNDP(YevalSastYlocals_bindings);
  if (T64 != YPfalse) {
    T63 = VARREF(YevalSastYlocals_bindings);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_locals_bindings_182;
  T62 = CALL2(1,VARREF(YPdefine_method),T63,T65);
  VARSET(YevalSastYlocals_bindings,T62);
  lit_237 = YPPsym((P)"locals-bindings-setter");
  T66 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_bindings_setter_183 = YPmet(FUNCODEREF(fun_locals_bindings_setter_183),LITREF(lit_237),T66,ENVNUL,PNUL,YPfalse);
  T69 = BOUNDP(YevalSastYlocals_bindings_setter);
  if (T69 != YPfalse) {
    T68 = VARREF(YevalSastYlocals_bindings_setter);
  } else {
    T68 = YPfalse;
  }
  T70 = fun_locals_bindings_setter_183;
  T67 = CALL2(1,VARREF(YPdefine_method),T68,T70);
  VARSET(YevalSastYlocals_bindings_setter,T67);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_bindings),VARREF(YevalSastYlocals_bindings_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_238 = YPPsym((P)"locals-functions");
  T71 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_functions_184 = YPmet(FUNCODEREF(fun_locals_functions_184),LITREF(lit_238),T71,ENVNUL,PNUL,YPfalse);
  T74 = BOUNDP(YevalSastYlocals_functions);
  if (T74 != YPfalse) {
    T73 = VARREF(YevalSastYlocals_functions);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_locals_functions_184;
  T72 = CALL2(1,VARREF(YPdefine_method),T73,T75);
  VARSET(YevalSastYlocals_functions,T72);
  lit_239 = YPPsym((P)"locals-functions-setter");
  T76 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_functions_setter_185 = YPmet(FUNCODEREF(fun_locals_functions_setter_185),LITREF(lit_239),T76,ENVNUL,PNUL,YPfalse);
  T79 = BOUNDP(YevalSastYlocals_functions_setter);
  if (T79 != YPfalse) {
    T78 = VARREF(YevalSastYlocals_functions_setter);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_locals_functions_setter_185;
  T77 = CALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(YevalSastYlocals_functions_setter,T77);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_functions),VARREF(YevalSastYlocals_functions_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_240 = YPPsym((P)"locals-body");
  T81 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_body_186 = YPmet(FUNCODEREF(fun_locals_body_186),LITREF(lit_240),T81,ENVNUL,PNUL,YPfalse);
  T84 = BOUNDP(YevalSastYlocals_body);
  if (T84 != YPfalse) {
    T83 = VARREF(YevalSastYlocals_body);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_locals_body_186;
  T82 = CALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(YevalSastYlocals_body,T82);
  lit_241 = YPPsym((P)"locals-body-setter");
  T86 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_body_setter_187 = YPmet(FUNCODEREF(fun_locals_body_setter_187),LITREF(lit_241),T86,ENVNUL,PNUL,YPfalse);
  T89 = BOUNDP(YevalSastYlocals_body_setter);
  if (T89 != YPfalse) {
    T88 = VARREF(YevalSastYlocals_body_setter);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_locals_body_setter_187;
  T87 = CALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(YevalSastYlocals_body_setter,T87);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_body),VARREF(YevalSastYlocals_body_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_242 = YPPsym((P)"<bind-exit>");
  T92 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T91 = CALL2(1,VARREF(Yfab_class),LITREF(lit_242),T92);
  VARSET(YevalSastYLbind_exitG,T91);
  lit_243 = YPPsym((P)"bind-exit-main-fun");
  T93 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLbind_exitG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bind_exit_main_fun_188 = YPmet(FUNCODEREF(fun_bind_exit_main_fun_188),LITREF(lit_243),T93,ENVNUL,PNUL,YPfalse);
  T96 = BOUNDP(YevalSastYbind_exit_main_fun);
  if (T96 != YPfalse) {
    T95 = VARREF(YevalSastYbind_exit_main_fun);
  } else {
    T95 = YPfalse;
  }
  T97 = fun_bind_exit_main_fun_188;
  T94 = CALL2(1,VARREF(YPdefine_method),T95,T97);
  VARSET(YevalSastYbind_exit_main_fun,T94);
  lit_244 = YPPsym((P)"bind-exit-main-fun-setter");
  T98 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLbind_exitG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_bind_exit_main_fun_setter_189 = YPmet(FUNCODEREF(fun_bind_exit_main_fun_setter_189),LITREF(lit_244),T98,ENVNUL,PNUL,YPfalse);
  T101 = BOUNDP(YevalSastYbind_exit_main_fun_setter);
  if (T101 != YPfalse) {
    T100 = VARREF(YevalSastYbind_exit_main_fun_setter);
  } else {
    T100 = YPfalse;
  }
  T102 = fun_bind_exit_main_fun_setter_189;
  T99 = CALL2(1,VARREF(YPdefine_method),T100,T102);
  VARSET(YevalSastYbind_exit_main_fun_setter,T99);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLbind_exitG),VARREF(YevalSastYbind_exit_main_fun),VARREF(YevalSastYbind_exit_main_fun_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_245 = YPPsym((P)"<unwind-protect>");
  T104 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T103 = CALL2(1,VARREF(Yfab_class),LITREF(lit_245),T104);
  VARSET(YevalSastYLunwind_protectG,T103);
  lit_246 = YPPsym((P)"unwind-protect-protected-thunk");
  T105 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unwind_protect_protected_thunk_190 = YPmet(FUNCODEREF(fun_unwind_protect_protected_thunk_190),LITREF(lit_246),T105,ENVNUL,PNUL,YPfalse);
  T108 = BOUNDP(YevalSastYunwind_protect_protected_thunk);
  if (T108 != YPfalse) {
    T107 = VARREF(YevalSastYunwind_protect_protected_thunk);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_unwind_protect_protected_thunk_190;
  T106 = CALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YevalSastYunwind_protect_protected_thunk,T106);
  lit_247 = YPPsym((P)"unwind-protect-protected-thunk-setter");
  T110 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_unwind_protect_protected_thunk_setter_191 = YPmet(FUNCODEREF(fun_unwind_protect_protected_thunk_setter_191),LITREF(lit_247),T110,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(YevalSastYunwind_protect_protected_thunk_setter);
  if (T113 != YPfalse) {
    T112 = VARREF(YevalSastYunwind_protect_protected_thunk_setter);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_unwind_protect_protected_thunk_setter_191;
  T111 = CALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YevalSastYunwind_protect_protected_thunk_setter,T111);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLunwind_protectG),VARREF(YevalSastYunwind_protect_protected_thunk),VARREF(YevalSastYunwind_protect_protected_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_248 = YPPsym((P)"unwind-protect-cleanup-thunk");
  T115 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unwind_protect_cleanup_thunk_192 = YPmet(FUNCODEREF(fun_unwind_protect_cleanup_thunk_192),LITREF(lit_248),T115,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YevalSastYunwind_protect_cleanup_thunk);
  if (T118 != YPfalse) {
    T117 = VARREF(YevalSastYunwind_protect_cleanup_thunk);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_unwind_protect_cleanup_thunk_192;
  T116 = CALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YevalSastYunwind_protect_cleanup_thunk,T116);
  lit_249 = YPPsym((P)"unwind-protect-cleanup-thunk-setter");
  T120 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_unwind_protect_cleanup_thunk_setter_193 = YPmet(FUNCODEREF(fun_unwind_protect_cleanup_thunk_setter_193),LITREF(lit_249),T120,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YevalSastYunwind_protect_cleanup_thunk_setter);
  if (T123 != YPfalse) {
    T122 = VARREF(YevalSastYunwind_protect_cleanup_thunk_setter);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_unwind_protect_cleanup_thunk_setter_193;
  T121 = CALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YevalSastYunwind_protect_cleanup_thunk_setter,T121);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLunwind_protectG),VARREF(YevalSastYunwind_protect_cleanup_thunk),VARREF(YevalSastYunwind_protect_cleanup_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_250 = YPPsym((P)"<monitor>");
  T126 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T125 = CALL2(1,VARREF(Yfab_class),LITREF(lit_250),T126);
  VARSET(YevalSastYLmonitorG,T125);
  lit_251 = YPPsym((P)"monitor-type");
  T127 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_type_194 = YPmet(FUNCODEREF(fun_monitor_type_194),LITREF(lit_251),T127,ENVNUL,PNUL,YPfalse);
  T130 = BOUNDP(YevalSastYmonitor_type);
  if (T130 != YPfalse) {
    T129 = VARREF(YevalSastYmonitor_type);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_monitor_type_194;
  T128 = CALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(YevalSastYmonitor_type,T128);
  lit_252 = YPPsym((P)"monitor-type-setter");
  T132 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_type_setter_195 = YPmet(FUNCODEREF(fun_monitor_type_setter_195),LITREF(lit_252),T132,ENVNUL,PNUL,YPfalse);
  T135 = BOUNDP(YevalSastYmonitor_type_setter);
  if (T135 != YPfalse) {
    T134 = VARREF(YevalSastYmonitor_type_setter);
  } else {
    T134 = YPfalse;
  }
  T136 = fun_monitor_type_setter_195;
  T133 = CALL2(1,VARREF(YPdefine_method),T134,T136);
  VARSET(YevalSastYmonitor_type_setter,T133);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_type),VARREF(YevalSastYmonitor_type_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_253 = YPPsym((P)"monitor-info");
  T137 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_info_196 = YPmet(FUNCODEREF(fun_monitor_info_196),LITREF(lit_253),T137,ENVNUL,PNUL,YPfalse);
  T140 = BOUNDP(YevalSastYmonitor_info);
  if (T140 != YPfalse) {
    T139 = VARREF(YevalSastYmonitor_info);
  } else {
    T139 = YPfalse;
  }
  T141 = fun_monitor_info_196;
  T138 = CALL2(1,VARREF(YPdefine_method),T139,T141);
  VARSET(YevalSastYmonitor_info,T138);
  lit_254 = YPPsym((P)"monitor-info-setter");
  T142 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_info_setter_197 = YPmet(FUNCODEREF(fun_monitor_info_setter_197),LITREF(lit_254),T142,ENVNUL,PNUL,YPfalse);
  T145 = BOUNDP(YevalSastYmonitor_info_setter);
  if (T145 != YPfalse) {
    T144 = VARREF(YevalSastYmonitor_info_setter);
  } else {
    T144 = YPfalse;
  }
  T146 = fun_monitor_info_setter_197;
  T143 = CALL2(1,VARREF(YPdefine_method),T144,T146);
  VARSET(YevalSastYmonitor_info_setter,T143);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_info),VARREF(YevalSastYmonitor_info_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_255 = YPPsym((P)"monitor-test");
  T147 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_test_198 = YPmet(FUNCODEREF(fun_monitor_test_198),LITREF(lit_255),T147,ENVNUL,PNUL,YPfalse);
  T150 = BOUNDP(YevalSastYmonitor_test);
  if (T150 != YPfalse) {
    T149 = VARREF(YevalSastYmonitor_test);
  } else {
    T149 = YPfalse;
  }
  T151 = fun_monitor_test_198;
  T148 = CALL2(1,VARREF(YPdefine_method),T149,T151);
  VARSET(YevalSastYmonitor_test,T148);
  lit_256 = YPPsym((P)"monitor-test-setter");
  T152 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_test_setter_199 = YPmet(FUNCODEREF(fun_monitor_test_setter_199),LITREF(lit_256),T152,ENVNUL,PNUL,YPfalse);
  T155 = BOUNDP(YevalSastYmonitor_test_setter);
  if (T155 != YPfalse) {
    T154 = VARREF(YevalSastYmonitor_test_setter);
  } else {
    T154 = YPfalse;
  }
  T156 = fun_monitor_test_setter_199;
  T153 = CALL2(1,VARREF(YPdefine_method),T154,T156);
  VARSET(YevalSastYmonitor_test_setter,T153);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_test),VARREF(YevalSastYmonitor_test_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_257 = YPPsym((P)"monitor-handler");
  T157 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_handler_200 = YPmet(FUNCODEREF(fun_monitor_handler_200),LITREF(lit_257),T157,ENVNUL,PNUL,YPfalse);
  T160 = BOUNDP(YevalSastYmonitor_handler);
  if (T160 != YPfalse) {
    T159 = VARREF(YevalSastYmonitor_handler);
  } else {
    T159 = YPfalse;
  }
  T161 = fun_monitor_handler_200;
  T158 = CALL2(1,VARREF(YPdefine_method),T159,T161);
  VARSET(YevalSastYmonitor_handler,T158);
  lit_258 = YPPsym((P)"monitor-handler-setter");
  T162 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_handler_setter_201 = YPmet(FUNCODEREF(fun_monitor_handler_setter_201),LITREF(lit_258),T162,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(YevalSastYmonitor_handler_setter);
  if (T165 != YPfalse) {
    T164 = VARREF(YevalSastYmonitor_handler_setter);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_monitor_handler_setter_201;
  T163 = CALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(YevalSastYmonitor_handler_setter,T163);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_handler),VARREF(YevalSastYmonitor_handler_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_259 = YPPsym((P)"monitor-main-thunk");
  T167 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_main_thunk_202 = YPmet(FUNCODEREF(fun_monitor_main_thunk_202),LITREF(lit_259),T167,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(YevalSastYmonitor_main_thunk);
  if (T170 != YPfalse) {
    T169 = VARREF(YevalSastYmonitor_main_thunk);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_monitor_main_thunk_202;
  T168 = CALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YevalSastYmonitor_main_thunk,T168);
  lit_260 = YPPsym((P)"monitor-main-thunk-setter");
  T172 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_main_thunk_setter_203 = YPmet(FUNCODEREF(fun_monitor_main_thunk_setter_203),LITREF(lit_260),T172,ENVNUL,PNUL,YPfalse);
  T175 = BOUNDP(YevalSastYmonitor_main_thunk_setter);
  if (T175 != YPfalse) {
    T174 = VARREF(YevalSastYmonitor_main_thunk_setter);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_monitor_main_thunk_setter_203;
  T173 = CALL2(1,VARREF(YPdefine_method),T174,T176);
  VARSET(YevalSastYmonitor_main_thunk_setter,T173);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_main_thunk),VARREF(YevalSastYmonitor_main_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_261 = YPPsym((P)"<static-environment>");
  T178 = (P)YPpair(VARREF(YLanyG),Ynil);
  T177 = CALL2(1,VARREF(Yfab_class),LITREF(lit_261),T178);
  VARSET(YevalSastYLstatic_environmentG,T177);
  lit_262 = YPPsym((P)"environment-next");
  T179 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_next_204 = YPmet(FUNCODEREF(fun_environment_next_204),LITREF(lit_262),T179,ENVNUL,PNUL,YPfalse);
  T182 = BOUNDP(YevalSastYenvironment_next);
  if (T182 != YPfalse) {
    T181 = VARREF(YevalSastYenvironment_next);
  } else {
    T181 = YPfalse;
  }
  T183 = fun_environment_next_204;
  T180 = CALL2(1,VARREF(YPdefine_method),T181,T183);
  VARSET(YevalSastYenvironment_next,T180);
  lit_263 = YPPsym((P)"environment-next-setter");
  T184 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_next_setter_205 = YPmet(FUNCODEREF(fun_environment_next_setter_205),LITREF(lit_263),T184,ENVNUL,PNUL,YPfalse);
  T187 = BOUNDP(YevalSastYenvironment_next_setter);
  if (T187 != YPfalse) {
    T186 = VARREF(YevalSastYenvironment_next_setter);
  } else {
    T186 = YPfalse;
  }
  T188 = fun_environment_next_setter_205;
  T185 = CALL2(1,VARREF(YPdefine_method),T186,T188);
  VARSET(YevalSastYenvironment_next_setter,T185);
  T189 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_206 = YPmet(FUNCODEREF(fun_206),YPfalse,T189,ENVNUL,PNUL,YPfalse);
  T190 = fun_206;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_environmentG),VARREF(YevalSastYenvironment_next),VARREF(YevalSastYenvironment_next_setter),VARREF(YLanyG),T190);
  lit_264 = YPPsym((P)"environment-bindings");
  T191 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_bindings_207 = YPmet(FUNCODEREF(fun_environment_bindings_207),LITREF(lit_264),T191,ENVNUL,PNUL,YPfalse);
  T194 = BOUNDP(YevalSastYenvironment_bindings);
  if (T194 != YPfalse) {
    T193 = VARREF(YevalSastYenvironment_bindings);
  } else {
    T193 = YPfalse;
  }
  T195 = fun_environment_bindings_207;
  T192 = CALL2(1,VARREF(YPdefine_method),T193,T195);
  VARSET(YevalSastYenvironment_bindings,T192);
  lit_265 = YPPsym((P)"environment-bindings-setter");
  T196 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLcolG),VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_bindings_setter_208 = YPmet(FUNCODEREF(fun_environment_bindings_setter_208),LITREF(lit_265),T196,ENVNUL,PNUL,YPfalse);
  T199 = BOUNDP(YevalSastYenvironment_bindings_setter);
  if (T199 != YPfalse) {
    T198 = VARREF(YevalSastYenvironment_bindings_setter);
  } else {
    T198 = YPfalse;
  }
  T200 = fun_environment_bindings_setter_208;
  T197 = CALL2(1,VARREF(YPdefine_method),T198,T200);
  VARSET(YevalSastYenvironment_bindings_setter,T197);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_environmentG),VARREF(YevalSastYenvironment_bindings),VARREF(YevalSastYenvironment_bindings_setter),VARREF(YLcolG),VARREF(YPprop_unbound_error));
  lit_266 = YPPsym((P)"<static-global-environment>");
  T204 = (P)YPpair(VARREF(YevalSastYLstatic_environmentG),Ynil);
  T203 = CALL2(1,VARREF(Yfab_class),LITREF(lit_266),T204);
  T202 = VARSET(YevalSastYLstatic_global_environmentG,T203);
  T201 = T202;
  return T201;
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
  P T272,T273,T274,T275,T276,T277,T278,T279,T280,T281,T282,T283,T284,T285,T286,T287;
loop:
  lit_267 = YPPsym((P)"environment-module");
  T0 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_module_209 = YPmet(FUNCODEREF(fun_environment_module_209),LITREF(lit_267),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSastYenvironment_module);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSastYenvironment_module);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_environment_module_209;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSastYenvironment_module,T1);
  lit_268 = YPPsym((P)"environment-module-setter");
  T5 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_module_setter_210 = YPmet(FUNCODEREF(fun_environment_module_setter_210),LITREF(lit_268),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YevalSastYenvironment_module_setter);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSastYenvironment_module_setter);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_environment_module_setter_210;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSastYenvironment_module_setter,T6);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_module),VARREF(YevalSastYenvironment_module_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_269 = YPPsym((P)"environment-module-loader");
  T10 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_module_loader_211 = YPmet(FUNCODEREF(fun_environment_module_loader_211),LITREF(lit_269),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YevalSastYenvironment_module_loader);
  if (T13 != YPfalse) {
    T12 = VARREF(YevalSastYenvironment_module_loader);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_environment_module_loader_211;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YevalSastYenvironment_module_loader,T11);
  lit_270 = YPPsym((P)"environment-module-loader-setter");
  T15 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_module_loader_setter_212 = YPmet(FUNCODEREF(fun_environment_module_loader_setter_212),LITREF(lit_270),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YevalSastYenvironment_module_loader_setter);
  if (T18 != YPfalse) {
    T17 = VARREF(YevalSastYenvironment_module_loader_setter);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_environment_module_loader_setter_212;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YevalSastYenvironment_module_loader_setter,T16);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_module_loader),VARREF(YevalSastYenvironment_module_loader_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_271 = YPPsym((P)"environment-uses-modules");
  T20 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_uses_modules_213 = YPmet(FUNCODEREF(fun_environment_uses_modules_213),LITREF(lit_271),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YevalSastYenvironment_uses_modules);
  if (T23 != YPfalse) {
    T22 = VARREF(YevalSastYenvironment_uses_modules);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_environment_uses_modules_213;
  T21 = CALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YevalSastYenvironment_uses_modules,T21);
  lit_272 = YPPsym((P)"environment-uses-modules-setter");
  T25 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_uses_modules_setter_214 = YPmet(FUNCODEREF(fun_environment_uses_modules_setter_214),LITREF(lit_272),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YevalSastYenvironment_uses_modules_setter);
  if (T28 != YPfalse) {
    T27 = VARREF(YevalSastYenvironment_uses_modules_setter);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_environment_uses_modules_setter_214;
  T26 = CALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YevalSastYenvironment_uses_modules_setter,T26);
  T30 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_215 = YPmet(FUNCODEREF(fun_215),YPfalse,T30,ENVNUL,PNUL,YPfalse);
  T31 = fun_215;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_uses_modules),VARREF(YevalSastYenvironment_uses_modules_setter),VARREF(YgooScolsSvecYLvecG),T31);
  lit_273 = YPPsym((P)"environment-allows-foreign-names?");
  T32 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_allows_foreign_namesQ_216 = YPmet(FUNCODEREF(fun_environment_allows_foreign_namesQ_216),LITREF(lit_273),T32,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(YevalSastYenvironment_allows_foreign_namesQ);
  if (T35 != YPfalse) {
    T34 = VARREF(YevalSastYenvironment_allows_foreign_namesQ);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_environment_allows_foreign_namesQ_216;
  T33 = CALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YevalSastYenvironment_allows_foreign_namesQ,T33);
  lit_274 = YPPsym((P)"environment-allows-foreign-names?-setter");
  T37 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLlogG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_allows_foreign_namesQ_setter_217 = YPmet(FUNCODEREF(fun_environment_allows_foreign_namesQ_setter_217),LITREF(lit_274),T37,ENVNUL,PNUL,YPfalse);
  T40 = BOUNDP(YevalSastYenvironment_allows_foreign_namesQ_setter);
  if (T40 != YPfalse) {
    T39 = VARREF(YevalSastYenvironment_allows_foreign_namesQ_setter);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_environment_allows_foreign_namesQ_setter_217;
  T38 = CALL2(1,VARREF(YPdefine_method),T39,T41);
  VARSET(YevalSastYenvironment_allows_foreign_namesQ_setter,T38);
  T42 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_218 = YPmet(FUNCODEREF(fun_218),YPfalse,T42,ENVNUL,PNUL,YPfalse);
  T43 = fun_218;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYenvironment_allows_foreign_namesQ),VARREF(YevalSastYenvironment_allows_foreign_namesQ_setter),VARREF(YLlogG),T43);
  lit_275 = YPPsym((P)"<static-empty-environment>");
  T45 = (P)YPpair(VARREF(YevalSastYLstatic_environmentG),Ynil);
  T44 = CALL2(1,VARREF(Yfab_class),LITREF(lit_275),T45);
  VARSET(YevalSastYLstatic_empty_environmentG,T44);
  T46 = CALL1(1,VARREF(Ynew),VARREF(YevalSastYLstatic_empty_environmentG));
  VARSET(YevalSastYDempty_static_environment,T46);
  lit_276 = YPPsym((P)"<static-local-environment>");
  T48 = (P)YPpair(VARREF(YevalSastYLstatic_environmentG),Ynil);
  T47 = CALL2(1,VARREF(Yfab_class),LITREF(lit_276),T48);
  VARSET(YevalSastYLstatic_local_environmentG,T47);
  lit_277 = YPPsym((P)"env-object-name");
  lit_278 = YPPsym((P)"binding");
  T51 = YPsig(YPPlist(1,LITREF(lit_278)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_219 = YPmet(FUNCODEREF(fun_219),YPfalse,T51,ENVNUL,PNUL,YPfalse);
  T50 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_220 = YPmet(FUNCODEREF(fun_220),YPfalse,T50,ENVNUL,PNUL,YPfalse);
  T49 = YPsig(YPPlist(1,LITREF(lit_125)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_object_name_221 = YPmet(FUNCODEREF(fun_env_object_name_221),LITREF(lit_277),T49,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(YevalSastYenv_object_name);
  if (T54 != YPfalse) {
    T53 = VARREF(YevalSastYenv_object_name);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_env_object_name_221;
  T52 = CALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YevalSastYenv_object_name,T52);
  lit_279 = YPPsym((P)"objectify");
  lit_280 = YPPsym((P)"r");
  lit_281 = YPPsym((P)"tail?");
  T56 = YPsig(YPPlist(3,LITREF(lit_142),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLlstG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_222 = YPmet(FUNCODEREF(fun_objectify_222),LITREF(lit_279),T56,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(YevalSastYobjectify);
  if (T59 != YPfalse) {
    T58 = VARREF(YevalSastYobjectify);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_objectify_222;
  T57 = CALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YevalSastYobjectify,T57);
  lit_282 = YPPsym((P)"objectify-list");
  T61 = YPsig(YPPlist(4,LITREF(lit_132),LITREF(lit_142),LITREF(lit_280),LITREF(lit_281)),YPPlist(4,VARREF(YLanyG),VARREF(YLlstG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_223 = YPmet(FUNCODEREF(fun_objectify_list_223),LITREF(lit_282),T61,ENVNUL,PNUL,YPfalse);
  T64 = BOUNDP(YevalSastYobjectify_list);
  if (T64 != YPfalse) {
    T63 = VARREF(YevalSastYobjectify_list);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_objectify_list_223;
  T62 = CALL2(1,VARREF(YPdefine_method),T63,T65);
  VARSET(YevalSastYobjectify_list,T62);
  lit_283 = YPPsym((P)"magic");
  lit_284 = YPPsym((P)"macro");
  lit_285 = YPsb((P)"Magic or Macro binding expected %=");
  T66 = YPsig(YPPlist(4,LITREF(lit_132),LITREF(lit_142),LITREF(lit_280),LITREF(lit_281)),YPPlist(4,VARREF(YevalSastYLmodule_bindingG),VARREF(YLlstG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_224 = YPmet(FUNCODEREF(fun_objectify_list_224),LITREF(lit_282),T66,ENVNUL,PNUL,YPfalse);
  T69 = BOUNDP(YevalSastYobjectify_list);
  if (T69 != YPfalse) {
    T68 = VARREF(YevalSastYobjectify_list);
  } else {
    T68 = YPfalse;
  }
  T70 = fun_objectify_list_224;
  T67 = CALL2(1,VARREF(YPdefine_method),T68,T70);
  VARSET(YevalSastYobjectify_list,T67);
  T71 = YPsig(YPPlist(3,LITREF(lit_142),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLsymG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_225 = YPmet(FUNCODEREF(fun_objectify_225),LITREF(lit_279),T71,ENVNUL,PNUL,YPfalse);
  T74 = BOUNDP(YevalSastYobjectify);
  if (T74 != YPfalse) {
    T73 = VARREF(YevalSastYobjectify);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_objectify_225;
  T72 = CALL2(1,VARREF(YPdefine_method),T73,T75);
  VARSET(YevalSastYobjectify,T72);
  T76 = YPsig(YPPlist(3,LITREF(lit_142),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_226 = YPmet(FUNCODEREF(fun_objectify_226),LITREF(lit_279),T76,ENVNUL,PNUL,YPfalse);
  T79 = BOUNDP(YevalSastYobjectify);
  if (T79 != YPfalse) {
    T78 = VARREF(YevalSastYobjectify);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_objectify_226;
  T77 = CALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(YevalSastYobjectify,T77);
  T81 = YPsig(YPPlist(3,LITREF(lit_142),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_227 = YPmet(FUNCODEREF(fun_objectify_227),LITREF(lit_279),T81,ENVNUL,PNUL,YPfalse);
  T84 = BOUNDP(YevalSastYobjectify);
  if (T84 != YPfalse) {
    T83 = VARREF(YevalSastYobjectify);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_objectify_227;
  T82 = CALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(YevalSastYobjectify,T82);
  T87 = CALL1(1,VARREF(YgooStypesYtE),Ynil);
  T86 = YPsig(YPPlist(3,LITREF(lit_142),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,T87,VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_228 = YPmet(FUNCODEREF(fun_objectify_228),LITREF(lit_279),T86,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YevalSastYobjectify);
  if (T90 != YPfalse) {
    T89 = VARREF(YevalSastYobjectify);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_objectify_228;
  T88 = CALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YevalSastYobjectify,T88);
  T92 = YPsig(YPPlist(3,LITREF(lit_142),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_229 = YPmet(FUNCODEREF(fun_objectify_229),LITREF(lit_279),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(YevalSastYobjectify);
  if (T95 != YPfalse) {
    T94 = VARREF(YevalSastYobjectify);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_objectify_229;
  T93 = CALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YevalSastYobjectify,T93);
  lit_286 = YPPsym((P)"objectify-quotation");
  lit_287 = YPPsym((P)"value");
  T97 = YPsig(YPPlist(2,LITREF(lit_287),LITREF(lit_280)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLconstantG),Ynil);
  fun_objectify_quotation_230 = YPmet(FUNCODEREF(fun_objectify_quotation_230),LITREF(lit_286),T97,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(YevalSastYobjectify_quotation);
  if (T100 != YPfalse) {
    T99 = VARREF(YevalSastYobjectify_quotation);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_objectify_quotation_230;
  T98 = CALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YevalSastYobjectify_quotation,T98);
  T102 = YPsig(YPPlist(2,LITREF(lit_287),LITREF(lit_280)),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLimmediate_constantG),Ynil);
  fun_objectify_quotation_231 = YPmet(FUNCODEREF(fun_objectify_quotation_231),LITREF(lit_286),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(YevalSastYobjectify_quotation);
  if (T105 != YPfalse) {
    T104 = VARREF(YevalSastYobjectify_quotation);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_objectify_quotation_231;
  T103 = CALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(YevalSastYobjectify_quotation,T103);
  T107 = YPsig(YPPlist(2,LITREF(lit_287),LITREF(lit_280)),YPPlist(2,VARREF(YLchrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLimmediate_constantG),Ynil);
  fun_objectify_quotation_232 = YPmet(FUNCODEREF(fun_objectify_quotation_232),LITREF(lit_286),T107,ENVNUL,PNUL,YPfalse);
  T110 = BOUNDP(YevalSastYobjectify_quotation);
  if (T110 != YPfalse) {
    T109 = VARREF(YevalSastYobjectify_quotation);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_objectify_quotation_232;
  T108 = CALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(YevalSastYobjectify_quotation,T108);
  lit_288 = YPPsym((P)"objectify-raw");
  T112 = YPsig(YPPlist(2,LITREF(lit_287),LITREF(lit_280)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLraw_constantG),Ynil);
  fun_objectify_raw_233 = YPmet(FUNCODEREF(fun_objectify_raw_233),LITREF(lit_288),T112,ENVNUL,PNUL,YPfalse);
  T115 = BOUNDP(YevalSastYobjectify_raw);
  if (T115 != YPfalse) {
    T114 = VARREF(YevalSastYobjectify_raw);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_objectify_raw_233;
  T113 = CALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(YevalSastYobjectify_raw,T113);
  lit_289 = YPPsym((P)"objectify-bound?");
  T117 = YPsig(YPPlist(3,LITREF(lit_142),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLsymG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_boundQ_234 = YPmet(FUNCODEREF(fun_objectify_boundQ_234),LITREF(lit_289),T117,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(YevalSastYobjectify_boundQ);
  if (T120 != YPfalse) {
    T119 = VARREF(YevalSastYobjectify_boundQ);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_objectify_boundQ_234;
  T118 = CALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YevalSastYobjectify_boundQ,T118);
  lit_290 = YPPsym((P)"objectify-compile-time");
  lit_291 = YPPsym((P)"program");
  lit_292 = YPPsym((P)"rt?");
  T122 = YPsig(YPPlist(4,LITREF(lit_291),LITREF(lit_280),LITREF(lit_281),LITREF(lit_292)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_compile_time_235 = YPmet(FUNCODEREF(fun_objectify_compile_time_235),LITREF(lit_290),T122,ENVNUL,PNUL,YPfalse);
  T125 = BOUNDP(YevalSastYobjectify_compile_time);
  if (T125 != YPfalse) {
    T124 = VARREF(YevalSastYobjectify_compile_time);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_objectify_compile_time_235;
  T123 = CALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(YevalSastYobjectify_compile_time,T123);
  lit_293 = YPPsym((P)"objectify-alternative");
  lit_294 = YPPsym((P)"c");
  lit_295 = YPPsym((P)"a");
  T127 = YPsig(YPPlist(5,LITREF(lit_157),LITREF(lit_294),LITREF(lit_295),LITREF(lit_280),LITREF(lit_281)),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLalternativeG),Ynil);
  fun_objectify_alternative_236 = YPmet(FUNCODEREF(fun_objectify_alternative_236),LITREF(lit_293),T127,ENVNUL,PNUL,YPfalse);
  T130 = BOUNDP(YevalSastYobjectify_alternative);
  if (T130 != YPfalse) {
    T129 = VARREF(YevalSastYobjectify_alternative);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_objectify_alternative_236;
  T128 = CALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(YevalSastYobjectify_alternative,T128);
  lit_296 = YPPsym((P)"sequentialize");
  lit_297 = YPPsym((P)"e*");
  T133 = YPsig(YPPlist(1,LITREF(lit_297)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_237 = YPmet(FUNCODEREF(fun_loop_237),LITREF(lit_143),T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(YPPlist(1,LITREF(lit_297)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YevalSastYLprogramG),Ynil);
  fun_sequentialize_238 = YPmet(FUNCODEREF(fun_sequentialize_238),LITREF(lit_296),T132,ENVNUL,PNUL,YPfalse);
  T136 = BOUNDP(YevalSastYsequentialize);
  if (T136 != YPfalse) {
    T135 = VARREF(YevalSastYsequentialize);
  } else {
    T135 = YPfalse;
  }
  T137 = fun_sequentialize_238;
  T134 = CALL2(1,VARREF(YPdefine_method),T135,T137);
  VARSET(YevalSastYsequentialize,T134);
  lit_298 = YPPsym((P)"transform-defs");
  T138 = YPsig(YPPlist(1,LITREF(lit_297)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_transform_defs_239 = YPmet(FUNCODEREF(fun_transform_defs_239),LITREF(lit_298),T138,ENVNUL,PNUL,YPfalse);
  T141 = BOUNDP(YevalSastYtransform_defs);
  if (T141 != YPfalse) {
    T140 = VARREF(YevalSastYtransform_defs);
  } else {
    T140 = YPfalse;
  }
  T142 = fun_transform_defs_239;
  T139 = CALL2(1,VARREF(YPdefine_method),T140,T142);
  VARSET(YevalSastYtransform_defs,T139);
  lit_299 = YPPsym((P)"objectify-sequential");
  T144 = YPsig(YPPlist(2,LITREF(lit_144),LITREF(lit_297)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_240 = YPmet(FUNCODEREF(fun_loop_240),LITREF(lit_143),T144,ENVNUL,PNUL,YPfalse);
  T143 = YPsig(YPPlist(3,LITREF(lit_297),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_sequential_241 = YPmet(FUNCODEREF(fun_objectify_sequential_241),LITREF(lit_299),T143,ENVNUL,PNUL,YPfalse);
  T147 = BOUNDP(YevalSastYobjectify_sequential);
  if (T147 != YPfalse) {
    T146 = VARREF(YevalSastYobjectify_sequential);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_objectify_sequential_241;
  T145 = CALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YevalSastYobjectify_sequential,T145);
  lit_300 = YPPsym((P)"objectify-application");
  lit_301 = YPPsym((P)"ff");
  T150 = YPsig(YPPlist(1,LITREF(lit_142)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_242 = YPmet(FUNCODEREF(fun_242),YPfalse,T150,ENVNUL,PNUL,YPfalse);
  T149 = YPsig(YPPlist(4,LITREF(lit_301),LITREF(lit_297),LITREF(lit_280),LITREF(lit_281)),YPPlist(4,VARREF(YevalSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_application_243 = YPmet(FUNCODEREF(fun_objectify_application_243),LITREF(lit_300),T149,ENVNUL,PNUL,YPfalse);
  T153 = BOUNDP(YevalSastYobjectify_application);
  if (T153 != YPfalse) {
    T152 = VARREF(YevalSastYobjectify_application);
  } else {
    T152 = YPfalse;
  }
  T154 = fun_objectify_application_243;
  T151 = CALL2(1,VARREF(YPdefine_method),T152,T154);
  VARSET(YevalSastYobjectify_application,T151);
  T156 = YPsig(YPPlist(1,LITREF(lit_142)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_244 = YPmet(FUNCODEREF(fun_244),YPfalse,T156,ENVNUL,PNUL,YPfalse);
  T155 = YPsig(YPPlist(4,LITREF(lit_301),LITREF(lit_297),LITREF(lit_280),LITREF(lit_281)),YPPlist(4,VARREF(YevalSastYLpredefined_referenceG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_application_245 = YPmet(FUNCODEREF(fun_objectify_application_245),LITREF(lit_300),T155,ENVNUL,PNUL,YPfalse);
  T159 = BOUNDP(YevalSastYobjectify_application);
  if (T159 != YPfalse) {
    T158 = VARREF(YevalSastYobjectify_application);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_objectify_application_245;
  T157 = CALL2(1,VARREF(YPdefine_method),T158,T160);
  VARSET(YevalSastYobjectify_application,T157);
  T162 = YPsig(YPPlist(1,LITREF(lit_142)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_246 = YPmet(FUNCODEREF(fun_246),YPfalse,T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(YPPlist(4,LITREF(lit_301),LITREF(lit_297),LITREF(lit_280),LITREF(lit_281)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_application_247 = YPmet(FUNCODEREF(fun_objectify_application_247),LITREF(lit_300),T161,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(YevalSastYobjectify_application);
  if (T165 != YPfalse) {
    T164 = VARREF(YevalSastYobjectify_application);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_objectify_application_247;
  T163 = CALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(YevalSastYobjectify_application,T163);
  lit_302 = YPPsym((P)"process-closed-application");
  lit_303 = YPsb((P)"incorrect regular arity");
  T167 = YPsig(YPPlist(4,LITREF(lit_132),LITREF(lit_297),LITREF(lit_280),LITREF(lit_281)),YPPlist(4,VARREF(YevalSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLfix_letG),Ynil);
  fun_process_closed_application_248 = YPmet(FUNCODEREF(fun_process_closed_application_248),LITREF(lit_302),T167,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(YevalSastYprocess_closed_application);
  if (T170 != YPfalse) {
    T169 = VARREF(YevalSastYprocess_closed_application);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_process_closed_application_248;
  T168 = CALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YevalSastYprocess_closed_application,T168);
  lit_304 = YPPsym((P)"process-nary-closed-application");
  lit_305 = YPPsym((P)"pack-nary-args");
  lit_306 = YPPsym((P)"quote");
  lit_307 = YPPsym((P)"%pair");
  lit_308 = YPPsym((P)"pack-args");
  lit_309 = YPPsym((P)"v*");
  lit_310 = YPPsym((P)"t*");
  lit_311 = YPsb((P)"incorrect dotted arity");
  T174 = YPsig(YPPlist(1,LITREF(lit_297)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pack_nary_args_249 = YPmet(FUNCODEREF(fun_pack_nary_args_249),LITREF(lit_305),T174,ENVNUL,PNUL,YPfalse);
  T173 = YPsig(YPPlist(3,LITREF(lit_297),LITREF(lit_309),LITREF(lit_310)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_pack_args_250 = YPmet(FUNCODEREF(fun_pack_args_250),LITREF(lit_308),T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(YPPlist(4,LITREF(lit_132),LITREF(lit_297),LITREF(lit_280),LITREF(lit_281)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLfix_letG),Ynil);
  fun_process_nary_closed_application_251 = YPmet(FUNCODEREF(fun_process_nary_closed_application_251),LITREF(lit_304),T172,ENVNUL,PNUL,YPfalse);
  T177 = BOUNDP(YevalSastYprocess_nary_closed_application);
  if (T177 != YPfalse) {
    T176 = VARREF(YevalSastYprocess_nary_closed_application);
  } else {
    T176 = YPfalse;
  }
  T178 = fun_process_nary_closed_application_251;
  T175 = CALL2(1,VARREF(YPdefine_method),T176,T178);
  VARSET(YevalSastYprocess_nary_closed_application,T175);
  lit_312 = YPPsym((P)"convert2arguments");
  T179 = YPsig(YPPlist(1,LITREF(lit_297)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_convert2arguments_252 = YPmet(FUNCODEREF(fun_convert2arguments_252),LITREF(lit_312),T179,ENVNUL,PNUL,YPfalse);
  T182 = BOUNDP(YevalSastYconvert2arguments);
  if (T182 != YPfalse) {
    T181 = VARREF(YevalSastYconvert2arguments);
  } else {
    T181 = YPfalse;
  }
  T183 = fun_convert2arguments_252;
  T180 = CALL2(1,VARREF(YPdefine_method),T181,T183);
  VARSET(YevalSastYconvert2arguments,T180);
  lit_313 = YPPsym((P)"objectify-assignment");
  lit_314 = YPsb((P)"Unsupported Set!: %=");
  T184 = YPsig(YPPlist(4,LITREF(lit_278),LITREF(lit_142),LITREF(lit_280),LITREF(lit_281)),YPPlist(4,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_assignment_253 = YPmet(FUNCODEREF(fun_objectify_assignment_253),LITREF(lit_313),T184,ENVNUL,PNUL,YPfalse);
  T187 = BOUNDP(YevalSastYobjectify_assignment);
  if (T187 != YPfalse) {
    T186 = VARREF(YevalSastYobjectify_assignment);
  } else {
    T186 = YPfalse;
  }
  T188 = fun_objectify_assignment_253;
  T185 = CALL2(1,VARREF(YPdefine_method),T186,T188);
  VARSET(YevalSastYobjectify_assignment,T185);
  T189 = YPsig(YPPlist(4,LITREF(lit_278),LITREF(lit_142),LITREF(lit_280),LITREF(lit_281)),YPPlist(4,VARREF(YLsymG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLassignmentG),Ynil);
  fun_objectify_assignment_254 = YPmet(FUNCODEREF(fun_objectify_assignment_254),LITREF(lit_313),T189,ENVNUL,PNUL,YPfalse);
  T192 = BOUNDP(YevalSastYobjectify_assignment);
  if (T192 != YPfalse) {
    T191 = VARREF(YevalSastYobjectify_assignment);
  } else {
    T191 = YPfalse;
  }
  T193 = fun_objectify_assignment_254;
  T190 = CALL2(1,VARREF(YPdefine_method),T191,T193);
  VARSET(YevalSastYobjectify_assignment,T190);
  lit_315 = YPPsym((P)"objectify-assignment-using");
  lit_316 = YPPsym((P)"ref");
  lit_317 = YPPsym((P)"val");
  T194 = YPsig(YPPlist(2,LITREF(lit_316),LITREF(lit_317)),YPPlist(2,VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLlocal_assignmentG),Ynil);
  fun_objectify_assignment_using_255 = YPmet(FUNCODEREF(fun_objectify_assignment_using_255),LITREF(lit_315),T194,ENVNUL,PNUL,YPfalse);
  T197 = BOUNDP(YevalSastYobjectify_assignment_using);
  if (T197 != YPfalse) {
    T196 = VARREF(YevalSastYobjectify_assignment_using);
  } else {
    T196 = YPfalse;
  }
  T198 = fun_objectify_assignment_using_255;
  T195 = CALL2(1,VARREF(YPdefine_method),T196,T198);
  VARSET(YevalSastYobjectify_assignment_using,T195);
  T199 = YPsig(YPPlist(2,LITREF(lit_316),LITREF(lit_317)),YPPlist(2,VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLglobal_assignmentG),Ynil);
  fun_objectify_assignment_using_256 = YPmet(FUNCODEREF(fun_objectify_assignment_using_256),LITREF(lit_315),T199,ENVNUL,PNUL,YPfalse);
  T202 = BOUNDP(YevalSastYobjectify_assignment_using);
  if (T202 != YPfalse) {
    T201 = VARREF(YevalSastYobjectify_assignment_using);
  } else {
    T201 = YPfalse;
  }
  T203 = fun_objectify_assignment_using_256;
  T200 = CALL2(1,VARREF(YPdefine_method),T201,T203);
  VARSET(YevalSastYobjectify_assignment_using,T200);
  T204 = YPsig(YPPlist(2,LITREF(lit_316),LITREF(lit_317)),YPPlist(2,VARREF(YevalSastYLruntime_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLruntime_assignmentG),Ynil);
  fun_objectify_assignment_using_257 = YPmet(FUNCODEREF(fun_objectify_assignment_using_257),LITREF(lit_315),T204,ENVNUL,PNUL,YPfalse);
  T207 = BOUNDP(YevalSastYobjectify_assignment_using);
  if (T207 != YPfalse) {
    T206 = VARREF(YevalSastYobjectify_assignment_using);
  } else {
    T206 = YPfalse;
  }
  T208 = fun_objectify_assignment_using_257;
  T205 = CALL2(1,VARREF(YPdefine_method),T206,T208);
  VARSET(YevalSastYobjectify_assignment_using,T205);
  lit_318 = YPPsym((P)"update-binding-kind");
  lit_319 = YPPsym((P)"new-kind");
  lit_320 = YPPsym((P)"runtime");
  lit_321 = YPsb((P)"Cannot set type of runtime binding %s to %s.\n");
  T209 = YPsig(YPPlist(2,LITREF(lit_278),LITREF(lit_319)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYupdate_binding_kind = YPmet(FUNCODEREF(YevalSastYupdate_binding_kind),LITREF(lit_318),T209,ENVNUL,PNUL,YPfalse);
  T210 = YevalSastYupdate_binding_kind;
  VARSET(YevalSastYupdate_binding_kind,T210);
  lit_322 = YPPsym((P)"ast-define-binding");
  lit_323 = YPPsym((P)"name");
  lit_324 = YPPsym((P)"defining-method?");
  lit_325 = YPPsym((P)"kind");
  lit_326 = YPsb((P)"%s: warning: '%s' clobbers binding from %s.\n");
  T211 = YPsig(YPPlist(4,LITREF(lit_280),LITREF(lit_323),LITREF(lit_324),LITREF(lit_325)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_ast_define_binding_259 = YPmet(FUNCODEREF(fun_ast_define_binding_259),LITREF(lit_322),T211,ENVNUL,PNUL,YPfalse);
  T214 = BOUNDP(YevalSastYast_define_binding);
  if (T214 != YPfalse) {
    T213 = VARREF(YevalSastYast_define_binding);
  } else {
    T213 = YPfalse;
  }
  T215 = fun_ast_define_binding_259;
  T212 = CALL2(1,VARREF(YPdefine_method),T213,T215);
  VARSET(YevalSastYast_define_binding,T212);
  VARSET(YevalSastYTmacro_tracingQT,YPfalse);
  lit_327 = YPPsym((P)"objectify-definition");
  lit_328 = YPPsym((P)"var");
  T216 = YPsig(YPPlist(3,LITREF(lit_328),LITREF(lit_142),LITREF(lit_280)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_definition_260 = YPmet(FUNCODEREF(fun_objectify_definition_260),LITREF(lit_327),T216,ENVNUL,PNUL,YPfalse);
  T219 = BOUNDP(YevalSastYobjectify_definition);
  if (T219 != YPfalse) {
    T218 = VARREF(YevalSastYobjectify_definition);
  } else {
    T218 = YPfalse;
  }
  T220 = fun_objectify_definition_260;
  T217 = CALL2(1,VARREF(YPdefine_method),T218,T220);
  VARSET(YevalSastYobjectify_definition,T217);
  lit_329 = YPPsym((P)"%%macro");
  lit_330 = YPPsym((P)"modname");
  lit_331 = YPPsym((P)"expander");
  lit_332 = YPPsym((P)"env-or-false");
  lit_333 = YPPsym((P)"expand");
  lit_334 = YPsb((P)"MACRO ");
  lit_335 = YPsb((P)"\n");
  lit_336 = YPsb((P)"  => ");
  lit_337 = YPsb((P)"\n");
  T222 = YPsig(YPPlist(3,LITREF(lit_125),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_261 = YPmet(FUNCODEREF(fun_expand_261),LITREF(lit_333),T222,ENVNUL,PNUL,YPfalse);
  T221 = YPsig(YPPlist(4,LITREF(lit_330),LITREF(lit_323),LITREF(lit_331),LITREF(lit_332)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLmodule_bindingG),Ynil);
  YPPmacro = YPmet(FUNCODEREF(YPPmacro),LITREF(lit_329),T221,ENVNUL,PNUL,YPfalse);
  T223 = YPPmacro;
  VARSET(YPPmacro,T223);
  lit_338 = YPPsym((P)"objectify-syntax-definition");
  T224 = YPsig(YPPlist(4,LITREF(lit_323),LITREF(lit_142),LITREF(lit_280),LITREF(lit_292)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_syntax_definition_263 = YPmet(FUNCODEREF(fun_objectify_syntax_definition_263),LITREF(lit_338),T224,ENVNUL,PNUL,YPfalse);
  T227 = BOUNDP(YevalSastYobjectify_syntax_definition);
  if (T227 != YPfalse) {
    T226 = VARREF(YevalSastYobjectify_syntax_definition);
  } else {
    T226 = YPfalse;
  }
  T228 = fun_objectify_syntax_definition_263;
  T225 = CALL2(1,VARREF(YPdefine_method),T226,T228);
  VARSET(YevalSastYobjectify_syntax_definition,T225);
  lit_339 = YPPsym((P)"objectify-function-definition");
  T229 = YPsig(YPPlist(3,LITREF(lit_323),LITREF(lit_142),LITREF(lit_280)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLast_function_definitionG),Ynil);
  fun_objectify_function_definition_264 = YPmet(FUNCODEREF(fun_objectify_function_definition_264),LITREF(lit_339),T229,ENVNUL,PNUL,YPfalse);
  T232 = BOUNDP(YevalSastYobjectify_function_definition);
  if (T232 != YPfalse) {
    T231 = VARREF(YevalSastYobjectify_function_definition);
  } else {
    T231 = YPfalse;
  }
  T233 = fun_objectify_function_definition_264;
  T230 = CALL2(1,VARREF(YPdefine_method),T231,T233);
  VARSET(YevalSastYobjectify_function_definition,T230);
  lit_340 = YPPsym((P)"module-binding");
  T234 = YPsig(YPPlist(1,LITREF(lit_325)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YevalSastYLmodule_bindingG),Ynil);
  YevalSastYmodule_binding = YPmet(FUNCODEREF(YevalSastYmodule_binding),LITREF(lit_340),T234,ENVNUL,PNUL,YPfalse);
  T235 = YevalSastYmodule_binding;
  VARSET(YevalSastYmodule_binding,T235);
  lit_341 = YPPsym((P)"objectify-primitive-definition");
  lit_342 = YPPsym((P)"sig");
  lit_343 = YPPsym((P)"body");
  lit_344 = YPPsym((P)"predefined");
  T236 = YPsig(YPPlist(4,LITREF(lit_323),LITREF(lit_342),LITREF(lit_343),LITREF(lit_280)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLast_primitive_definitionG),Ynil);
  fun_objectify_primitive_definition_266 = YPmet(FUNCODEREF(fun_objectify_primitive_definition_266),LITREF(lit_341),T236,ENVNUL,PNUL,YPfalse);
  T239 = BOUNDP(YevalSastYobjectify_primitive_definition);
  if (T239 != YPfalse) {
    T238 = VARREF(YevalSastYobjectify_primitive_definition);
  } else {
    T238 = YPfalse;
  }
  T240 = fun_objectify_primitive_definition_266;
  T237 = CALL2(1,VARREF(YPdefine_method),T238,T240);
  VARSET(YevalSastYobjectify_primitive_definition,T237);
  lit_345 = YPPsym((P)"objectify-generic-definition");
  T241 = YPsig(YPPlist(3,LITREF(lit_323),LITREF(lit_342),LITREF(lit_280)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLast_generic_definitionG),Ynil);
  fun_objectify_generic_definition_267 = YPmet(FUNCODEREF(fun_objectify_generic_definition_267),LITREF(lit_345),T241,ENVNUL,PNUL,YPfalse);
  T244 = BOUNDP(YevalSastYobjectify_generic_definition);
  if (T244 != YPfalse) {
    T243 = VARREF(YevalSastYobjectify_generic_definition);
  } else {
    T243 = YPfalse;
  }
  T245 = fun_objectify_generic_definition_267;
  T242 = CALL2(1,VARREF(YPdefine_method),T243,T245);
  VARSET(YevalSastYobjectify_generic_definition,T242);
  lit_346 = YPPsym((P)"objectify-method-definition");
  lit_347 = YPPsym((P)"if");
  lit_348 = YPPsym((P)"bound?");
  lit_349 = YPPsym((P)"%define-method");
  T246 = YPsig(YPPlist(3,LITREF(lit_323),LITREF(lit_142),LITREF(lit_280)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLast_method_definitionG),Ynil);
  fun_objectify_method_definition_268 = YPmet(FUNCODEREF(fun_objectify_method_definition_268),LITREF(lit_346),T246,ENVNUL,PNUL,YPfalse);
  T249 = BOUNDP(YevalSastYobjectify_method_definition);
  if (T249 != YPfalse) {
    T248 = VARREF(YevalSastYobjectify_method_definition);
  } else {
    T248 = YPfalse;
  }
  T250 = fun_objectify_method_definition_268;
  T247 = CALL2(1,VARREF(YPdefine_method),T248,T250);
  VARSET(YevalSastYobjectify_method_definition,T247);
  VARSET(YevalSastYTrecord_sourceQT,YPfalse);
  lit_350 = YPPsym((P)"objectify-function-source");
  lit_351 = YPsb((P)"(fun %s %s)");
  T255 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_269 = YPmet(FUNCODEREF(fun_269),YPfalse,T255,ENVNUL,PNUL,YPfalse);
  T254 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_270 = YPmet(FUNCODEREF(fun_270),YPfalse,T254,ENVNUL,PNUL,YPfalse);
  T253 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_271 = YPmet(FUNCODEREF(fun_271),YPfalse,T253,ENVNUL,PNUL,YPfalse);
  T252 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_272 = YPmet(FUNCODEREF(fun_272),YPfalse,T252,ENVNUL,PNUL,YPfalse);
  T251 = YPsig(YPPlist(3,LITREF(lit_342),LITREF(lit_343),LITREF(lit_280)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLconstantG),Ynil);
  fun_objectify_function_source_273 = YPmet(FUNCODEREF(fun_objectify_function_source_273),LITREF(lit_350),T251,ENVNUL,PNUL,YPfalse);
  T258 = BOUNDP(YevalSastYobjectify_function_source);
  if (T258 != YPfalse) {
    T257 = VARREF(YevalSastYobjectify_function_source);
  } else {
    T257 = YPfalse;
  }
  T259 = fun_objectify_function_source_273;
  T256 = CALL2(1,VARREF(YPdefine_method),T257,T259);
  VARSET(YevalSastYobjectify_function_source,T256);
  lit_352 = YPPsym((P)"objectify-function");
  T262 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_274 = YPmet(FUNCODEREF(fun_274),YPfalse,T262,ENVNUL,PNUL,YPfalse);
  T261 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_275 = YPmet(FUNCODEREF(fun_275),YPfalse,T261,ENVNUL,PNUL,YPfalse);
  T260 = YPsig(YPPlist(4,LITREF(lit_342),LITREF(lit_343),LITREF(lit_280),LITREF(lit_281)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLast_methodG),Ynil);
  fun_objectify_function_276 = YPmet(FUNCODEREF(fun_objectify_function_276),LITREF(lit_352),T260,ENVNUL,PNUL,YPfalse);
  T265 = BOUNDP(YevalSastYobjectify_function);
  if (T265 != YPfalse) {
    T264 = VARREF(YevalSastYobjectify_function);
  } else {
    T264 = YPfalse;
  }
  T266 = fun_objectify_function_276;
  T263 = CALL2(1,VARREF(YPdefine_method),T264,T266);
  VARSET(YevalSastYobjectify_function,T263);
  lit_353 = YPPsym((P)"...");
  VARSET(YevalSastYDsexpr_optionals_tag,LITREF(lit_353));
  lit_354 = YPPsym((P)"<opts>");
  VARSET(YevalSastYDsexpr_optionals_type_name,LITREF(lit_354));
  lit_355 = YPPsym((P)"objectify-signature");
  lit_356 = YPPsym((P)"col");
  lit_357 = YPPsym((P)"params");
  lit_358 = YPPsym((P)"nary?");
  lit_359 = YPPsym((P)"bindings");
  lit_360 = YPPsym((P)"names");
  lit_361 = YPPsym((P)"types");
  T268 = YPsig(YPPlist(5,LITREF(lit_357),LITREF(lit_358),LITREF(lit_359),LITREF(lit_360),LITREF(lit_361)),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_col_277 = YPmet(FUNCODEREF(fun_col_277),LITREF(lit_356),T268,ENVNUL,PNUL,YPfalse);
  T267 = YPsig(YPPlist(2,LITREF(lit_342),LITREF(lit_280)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLast_signatureG),Ynil);
  fun_objectify_signature_278 = YPmet(FUNCODEREF(fun_objectify_signature_278),LITREF(lit_355),T267,ENVNUL,PNUL,YPfalse);
  T271 = BOUNDP(YevalSastYobjectify_signature);
  if (T271 != YPfalse) {
    T270 = VARREF(YevalSastYobjectify_signature);
  } else {
    T270 = YPfalse;
  }
  T272 = fun_objectify_signature_278;
  T269 = CALL2(1,VARREF(YPdefine_method),T270,T272);
  VARSET(YevalSastYobjectify_signature,T269);
  lit_362 = YPPsym((P)"compute-local-reference-offsets");
  lit_363 = YPPsym((P)"i");
  lit_364 = YPPsym((P)"find");
  lit_365 = YPPsym((P)"j");
  lit_366 = YPsb((P)"DIDN'T FIND LOCAL BINDING %= IN %=");
  T275 = YPsig(YPPlist(2,LITREF(lit_365),LITREF(lit_359)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_279 = YPmet(FUNCODEREF(fun_find_279),LITREF(lit_364),T275,ENVNUL,PNUL,YPfalse);
  T274 = YPsig(YPPlist(2,LITREF(lit_363),LITREF(lit_280)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_280 = YPmet(FUNCODEREF(fun_loop_280),LITREF(lit_143),T274,ENVNUL,PNUL,YPfalse);
  T273 = YPsig(YPPlist(2,LITREF(lit_278),LITREF(lit_280)),YPPlist(2,VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYLstatic_local_environmentG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  fun_compute_local_reference_offsets_281 = YPmet(FUNCODEREF(fun_compute_local_reference_offsets_281),LITREF(lit_362),T273,ENVNUL,PNUL,YPfalse);
  T278 = BOUNDP(YevalSastYcompute_local_reference_offsets);
  if (T278 != YPfalse) {
    T277 = VARREF(YevalSastYcompute_local_reference_offsets);
  } else {
    T277 = YPfalse;
  }
  T279 = fun_compute_local_reference_offsets_281;
  T276 = CALL2(1,VARREF(YPdefine_method),T277,T279);
  VARSET(YevalSastYcompute_local_reference_offsets,T276);
  lit_367 = YPPsym((P)"objectify-binding");
  lit_368 = YPPsym((P)"n");
  T282 = YPsig(YPPlist(3,LITREF(lit_368),LITREF(lit_49),LITREF(lit_280)),YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLlocal_referenceG),Ynil);
  T281 = fun_objectify_binding_282 = YPmet(FUNCODEREF(fun_objectify_binding_282),LITREF(lit_367),T282,ENVNUL,PNUL,YPfalse);
  T286 = BOUNDP(YevalSastYobjectify_binding);
  if (T286 != YPfalse) {
    T285 = VARREF(YevalSastYobjectify_binding);
  } else {
    T285 = YPfalse;
  }
  T287 = fun_objectify_binding_282;
  T284 = CALL2(1,VARREF(YPdefine_method),T285,T287);
  T283 = VARSET(YevalSastYobjectify_binding,T284);
  T280 = T283;
  return T280;
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
  P T240,T241,T242,T243,T244,T245,T246,T247,T248;
loop:
  lit_369 = YPPsym((P)"binding-reference-class");
  lit_370 = YPsb((P)"Unknown binding-kind %=");
  T0 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_binding_reference_class_283 = YPmet(FUNCODEREF(fun_binding_reference_class_283),LITREF(lit_369),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSastYbinding_reference_class);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSastYbinding_reference_class);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_binding_reference_class_283;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSastYbinding_reference_class,T1);
  T5 = YPsig(YPPlist(3,LITREF(lit_368),LITREF(lit_49),LITREF(lit_280)),YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_binding_284 = YPmet(FUNCODEREF(fun_objectify_binding_284),LITREF(lit_367),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YevalSastYobjectify_binding);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSastYobjectify_binding);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_objectify_binding_284;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSastYobjectify_binding,T6);
  T10 = YPsig(YPPlist(3,LITREF(lit_368),LITREF(lit_49),LITREF(lit_280)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLreferenceG),Ynil);
  fun_objectify_binding_285 = YPmet(FUNCODEREF(fun_objectify_binding_285),LITREF(lit_367),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YevalSastYobjectify_binding);
  if (T13 != YPfalse) {
    T12 = VARREF(YevalSastYobjectify_binding);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_objectify_binding_285;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YevalSastYobjectify_binding,T11);
  lit_371 = YPPsym((P)"default-type");
  lit_372 = YPPsym((P)"<any>");
  T15 = YPsig(YPPlist(1,LITREF(lit_280)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_default_type_286 = YPmet(FUNCODEREF(fun_default_type_286),LITREF(lit_371),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YevalSastYdefault_type);
  if (T18 != YPfalse) {
    T17 = VARREF(YevalSastYdefault_type);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_default_type_286;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YevalSastYdefault_type,T16);
  lit_373 = YPPsym((P)"objectify-free-global-reference");
  T20 = YPsig(YPPlist(2,LITREF(lit_323),LITREF(lit_280)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLreferenceG),Ynil);
  fun_objectify_free_global_reference_287 = YPmet(FUNCODEREF(fun_objectify_free_global_reference_287),LITREF(lit_373),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YevalSastYobjectify_free_global_reference);
  if (T23 != YPfalse) {
    T22 = VARREF(YevalSastYobjectify_free_global_reference);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_objectify_free_global_reference_287;
  T21 = CALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YevalSastYobjectify_free_global_reference,T21);
  lit_374 = YPPsym((P)"foreign-name?");
  T25 = YPsig(YPPlist(1,LITREF(lit_323)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSastYforeign_nameQ = YPmet(FUNCODEREF(YevalSastYforeign_nameQ),LITREF(lit_374),T25,ENVNUL,PNUL,YPfalse);
  T26 = YevalSastYforeign_nameQ;
  VARSET(YevalSastYforeign_nameQ,T26);
  lit_375 = YPPsym((P)"objectify-foreign-reference");
  lit_376 = YPsb((P)"Malformed foreign name %s.\n");
  lit_377 = YPsb((P)"No binding %s in %s.\n");
  T27 = YPsig(YPPlist(2,LITREF(lit_323),LITREF(lit_280)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLreferenceG),Ynil);
  fun_objectify_foreign_reference_289 = YPmet(FUNCODEREF(fun_objectify_foreign_reference_289),LITREF(lit_375),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YevalSastYobjectify_foreign_reference);
  if (T30 != YPfalse) {
    T29 = VARREF(YevalSastYobjectify_foreign_reference);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_objectify_foreign_reference_289;
  T28 = CALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YevalSastYobjectify_foreign_reference,T28);
  lit_378 = YPPsym((P)"objectify-symbol");
  T32 = YPsig(YPPlist(2,LITREF(lit_323),LITREF(lit_280)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_objectify_symbol_290 = YPmet(FUNCODEREF(fun_objectify_symbol_290),LITREF(lit_378),T32,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(YevalSastYobjectify_symbol);
  if (T35 != YPfalse) {
    T34 = VARREF(YevalSastYobjectify_symbol);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_objectify_symbol_290;
  T33 = CALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YevalSastYobjectify_symbol,T33);
  lit_379 = YPPsym((P)"ftype");
  lit_380 = YPPsym((P)"<fun>");
  T37 = YPsig(YPPlist(1,LITREF(lit_280)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ftype_291 = YPmet(FUNCODEREF(fun_ftype_291),LITREF(lit_379),T37,ENVNUL,PNUL,YPfalse);
  T40 = BOUNDP(YevalSastYftype);
  if (T40 != YPfalse) {
    T39 = VARREF(YevalSastYftype);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_ftype_291;
  T38 = CALL2(1,VARREF(YPdefine_method),T39,T41);
  VARSET(YevalSastYftype,T38);
  lit_381 = YPPsym((P)"<functions>");
  T44 = (P)YPpair(VARREF(YevalSastYLprogramsG),Ynil);
  T43 = (P)YPpair(VARREF(YLlstG),T44);
  T42 = CALL2(1,VARREF(Yfab_class),LITREF(lit_381),T43);
  VARSET(YevalSastYLfunctionsG,T42);
  T45 = CALL1(1,VARREF(Ynew),VARREF(YevalSastYLfunctionsG));
  VARSET(YevalSastYDfunctions_empty,T45);
  lit_382 = YPPsym((P)"functions");
  T46 = YPsig(YPPlist(2,LITREF(lit_156),LITREF(lit_157)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYfunctions = YPmet(FUNCODEREF(YevalSastYfunctions),LITREF(lit_382),T46,ENVNUL,PNUL,YPfalse);
  T47 = YevalSastYfunctions;
  VARSET(YevalSastYfunctions,T47);
  T49 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLfunctionsG));
  T48 = YPsig(YPPlist(1,LITREF(lit_142)),YPPlist(1,T49),YPfalse,YPint((P)1),VARREF(YevalSastYLfunctionsG),Ynil);
  fun_empty_293 = YPmet(FUNCODEREF(fun_empty_293),LITREF(lit_161),T48,ENVNUL,PNUL,YPfalse);
  T52 = BOUNDP(YgooScolsScolYempty);
  if (T52 != YPfalse) {
    T51 = VARREF(YgooScolsScolYempty);
  } else {
    T51 = YPfalse;
  }
  T53 = fun_empty_293;
  T50 = CALL2(1,VARREF(YPdefine_method),T51,T53);
  VARSET(YgooScolsScolYempty,T50);
  lit_383 = YPPsym((P)"objectify-locals");
  lit_384 = YPPsym((P)"sigs");
  lit_385 = YPPsym((P)"bodies");
  T56 = YPsig(YPPlist(1,LITREF(lit_368)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_294 = YPmet(FUNCODEREF(fun_294),YPfalse,T56,ENVNUL,PNUL,YPfalse);
  T55 = YPsig(YPPlist(2,LITREF(lit_132),LITREF(lit_49)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_295 = YPmet(FUNCODEREF(fun_295),YPfalse,T55,ENVNUL,PNUL,YPfalse);
  T54 = YPsig(YPPlist(6,LITREF(lit_360),LITREF(lit_384),LITREF(lit_385),LITREF(lit_343),LITREF(lit_280),LITREF(lit_281)),YPPlist(6,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)6),VARREF(YevalSastYLlocalsG),Ynil);
  fun_objectify_locals_296 = YPmet(FUNCODEREF(fun_objectify_locals_296),LITREF(lit_383),T54,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(YevalSastYobjectify_locals);
  if (T59 != YPfalse) {
    T58 = VARREF(YevalSastYobjectify_locals);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_objectify_locals_296;
  T57 = CALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YevalSastYobjectify_locals,T57);
  lit_386 = YPPsym((P)"objectify-bind-exit");
  T61 = YPsig(YPPlist(4,LITREF(lit_323),LITREF(lit_343),LITREF(lit_280),LITREF(lit_281)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLbind_exitG),Ynil);
  fun_objectify_bind_exit_297 = YPmet(FUNCODEREF(fun_objectify_bind_exit_297),LITREF(lit_386),T61,ENVNUL,PNUL,YPfalse);
  T64 = BOUNDP(YevalSastYobjectify_bind_exit);
  if (T64 != YPfalse) {
    T63 = VARREF(YevalSastYobjectify_bind_exit);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_objectify_bind_exit_297;
  T62 = CALL2(1,VARREF(YPdefine_method),T63,T65);
  VARSET(YevalSastYobjectify_bind_exit,T62);
  lit_387 = YPPsym((P)"objectify-unwind-protect");
  lit_388 = YPPsym((P)"protected-form");
  lit_389 = YPPsym((P)"cleanup-forms");
  T66 = YPsig(YPPlist(4,LITREF(lit_388),LITREF(lit_389),LITREF(lit_280),LITREF(lit_281)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLunwind_protectG),Ynil);
  fun_objectify_unwind_protect_298 = YPmet(FUNCODEREF(fun_objectify_unwind_protect_298),LITREF(lit_387),T66,ENVNUL,PNUL,YPfalse);
  T69 = BOUNDP(YevalSastYobjectify_unwind_protect);
  if (T69 != YPfalse) {
    T68 = VARREF(YevalSastYobjectify_unwind_protect);
  } else {
    T68 = YPfalse;
  }
  T70 = fun_objectify_unwind_protect_298;
  T67 = CALL2(1,VARREF(YPdefine_method),T68,T70);
  VARSET(YevalSastYobjectify_unwind_protect,T67);
  lit_390 = YPPsym((P)"objectify-monitor");
  lit_391 = YPPsym((P)"type");
  lit_392 = YPPsym((P)"info");
  lit_393 = YPPsym((P)"test");
  lit_394 = YPPsym((P)"handler");
  T71 = YPsig(YPPlist(7,LITREF(lit_391),LITREF(lit_392),LITREF(lit_393),LITREF(lit_394),LITREF(lit_343),LITREF(lit_280),LITREF(lit_281)),YPPlist(7,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)7),VARREF(YevalSastYLmonitorG),Ynil);
  fun_objectify_monitor_299 = YPmet(FUNCODEREF(fun_objectify_monitor_299),LITREF(lit_390),T71,ENVNUL,PNUL,YPfalse);
  T74 = BOUNDP(YevalSastYobjectify_monitor);
  if (T74 != YPfalse) {
    T73 = VARREF(YevalSastYobjectify_monitor);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_objectify_monitor_299;
  T72 = CALL2(1,VARREF(YPdefine_method),T73,T75);
  VARSET(YevalSastYobjectify_monitor,T72);
  lit_395 = YPPsym((P)"objectify-export");
  lit_396 = YPsb((P)"Can only export bindings from target environment.\n");
  lit_397 = YPPsym((P)"exit");
  lit_398 = YPsb((P)"Continue without exporting %s");
  lit_399 = YPsb((P)"Can't export undefined binding %s.\n");
  T81 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_300 = YPmet(FUNCODEREF(fun_300),YPfalse,T81,ENVNUL,PNUL,YPfalse);
  T80 = YPsig(YPPlist(2,LITREF(lit_294),LITREF(lit_280)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_301 = YPmet(FUNCODEREF(fun_301),YPfalse,T80,ENVNUL,PNUL,YPfalse);
  T79 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_302 = YPmet(FUNCODEREF(fun_302),YPfalse,T79,ENVNUL,PNUL,YPfalse);
  T78 = YPsig(YPPlist(1,LITREF(lit_397)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_303 = YPmet(FUNCODEREF(fun_303),YPfalse,T78,ENVNUL,PNUL,YPfalse);
  T77 = YPsig(YPPlist(1,LITREF(lit_323)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_304 = YPmet(FUNCODEREF(fun_304),YPfalse,T77,ENVNUL,PNUL,YPfalse);
  T76 = YPsig(YPPlist(3,LITREF(lit_360),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_export_305 = YPmet(FUNCODEREF(fun_objectify_export_305),LITREF(lit_395),T76,ENVNUL,PNUL,YPfalse);
  T84 = BOUNDP(YevalSastYobjectify_export);
  if (T84 != YPfalse) {
    T83 = VARREF(YevalSastYobjectify_export);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_objectify_export_305;
  T82 = CALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(YevalSastYobjectify_export,T82);
  lit_400 = YPPsym((P)"import-global!");
  lit_401 = YPPsym((P)"env");
  lit_402 = YPsb((P)"warning: '%s' from %s clobbers local binding.\n");
  T86 = YPsig(YPPlist(2,LITREF(lit_49),LITREF(lit_401)),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYimport_globalX = YPmet(FUNCODEREF(YevalSastYimport_globalX),LITREF(lit_400),T86,ENVNUL,PNUL,YPfalse);
  T87 = YevalSastYimport_globalX;
  VARSET(YevalSastYimport_globalX,T87);
  lit_403 = YPPsym((P)"objectify-use/export-module");
  T89 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_307 = YPmet(FUNCODEREF(fun_307),YPfalse,T89,ENVNUL,PNUL,YPfalse);
  T88 = YPsig(YPPlist(3,LITREF(lit_323),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_useSexport_module_308 = YPmet(FUNCODEREF(fun_objectify_useSexport_module_308),LITREF(lit_403),T88,ENVNUL,PNUL,YPfalse);
  T92 = BOUNDP(YevalSastYobjectify_useSexport_module);
  if (T92 != YPfalse) {
    T91 = VARREF(YevalSastYobjectify_useSexport_module);
  } else {
    T91 = YPfalse;
  }
  T93 = fun_objectify_useSexport_module_308;
  T90 = CALL2(1,VARREF(YPdefine_method),T91,T93);
  VARSET(YevalSastYobjectify_useSexport_module,T90);
  lit_404 = YPPsym((P)"objectify-use-module");
  T95 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_309 = YPmet(FUNCODEREF(fun_309),YPfalse,T95,ENVNUL,PNUL,YPfalse);
  T94 = YPsig(YPPlist(3,LITREF(lit_323),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_module_310 = YPmet(FUNCODEREF(fun_objectify_use_module_310),LITREF(lit_404),T94,ENVNUL,PNUL,YPfalse);
  T98 = BOUNDP(YevalSastYobjectify_use_module);
  if (T98 != YPfalse) {
    T97 = VARREF(YevalSastYobjectify_use_module);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_objectify_use_module_310;
  T96 = CALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YevalSastYobjectify_use_module,T96);
  lit_405 = YPPsym((P)"expand-bind-list");
  lit_406 = YPPsym((P)"pat");
  lit_407 = YPPsym((P)"fail");
  lit_408 = YPsb((P)"Expected Pattern List %=\n");
  T100 = YPsig(YPPlist(3,LITREF(lit_406),LITREF(lit_328),LITREF(lit_407)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_list_311 = YPmet(FUNCODEREF(fun_expand_bind_list_311),LITREF(lit_405),T100,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(YevalSastYexpand_bind_list);
  if (T103 != YPfalse) {
    T102 = VARREF(YevalSastYexpand_bind_list);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_expand_bind_list_311;
  T101 = CALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YevalSastYexpand_bind_list,T101);
  lit_409 = YPPsym((P)"match-empty-list");
  T106 = CALL1(1,VARREF(YgooStypesYtE),Ynil);
  T105 = YPsig(YPPlist(3,LITREF(lit_406),LITREF(lit_328),LITREF(lit_407)),YPPlist(3,T106,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_expand_bind_list_312 = YPmet(FUNCODEREF(fun_expand_bind_list_312),LITREF(lit_405),T105,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(YevalSastYexpand_bind_list);
  if (T109 != YPfalse) {
    T108 = VARREF(YevalSastYexpand_bind_list);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_expand_bind_list_312;
  T107 = CALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YevalSastYexpand_bind_list,T107);
  lit_410 = YPsb((P)"Unquote Unexpected Here %=\n");
  lit_411 = YPsb((P)"Unquote Splicing Unexpected Here %=\n");
  T111 = YPsig(YPPlist(3,LITREF(lit_406),LITREF(lit_328),LITREF(lit_407)),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_expand_bind_list_313 = YPmet(FUNCODEREF(fun_expand_bind_list_313),LITREF(lit_405),T111,ENVNUL,PNUL,YPfalse);
  T114 = BOUNDP(YevalSastYexpand_bind_list);
  if (T114 != YPfalse) {
    T113 = VARREF(YevalSastYexpand_bind_list);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_expand_bind_list_313;
  T112 = CALL2(1,VARREF(YPdefine_method),T113,T115);
  VARSET(YevalSastYexpand_bind_list,T112);
  lit_412 = YPPsym((P)"expand-bind-list*");
  T117 = CALL1(1,VARREF(YgooStypesYtE),Ynil);
  T116 = YPsig(YPPlist(3,LITREF(lit_406),LITREF(lit_328),LITREF(lit_407)),YPPlist(3,T117,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_listT_314 = YPmet(FUNCODEREF(fun_expand_bind_listT_314),LITREF(lit_412),T116,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(YevalSastYexpand_bind_listT);
  if (T120 != YPfalse) {
    T119 = VARREF(YevalSastYexpand_bind_listT);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_expand_bind_listT_314;
  T118 = CALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YevalSastYexpand_bind_listT,T118);
  T122 = YPsig(YPPlist(3,LITREF(lit_406),LITREF(lit_328),LITREF(lit_407)),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_listT_315 = YPmet(FUNCODEREF(fun_expand_bind_listT_315),LITREF(lit_412),T122,ENVNUL,PNUL,YPfalse);
  T125 = BOUNDP(YevalSastYexpand_bind_listT);
  if (T125 != YPfalse) {
    T124 = VARREF(YevalSastYexpand_bind_listT);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_expand_bind_listT_315;
  T123 = CALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(YevalSastYexpand_bind_listT,T123);
  lit_413 = YPPsym((P)"expand-bind-element");
  lit_414 = YPPsym((P)"match-atom");
  T127 = YPsig(YPPlist(3,LITREF(lit_406),LITREF(lit_328),LITREF(lit_407)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_element_316 = YPmet(FUNCODEREF(fun_expand_bind_element_316),LITREF(lit_413),T127,ENVNUL,PNUL,YPfalse);
  T130 = BOUNDP(YevalSastYexpand_bind_element);
  if (T130 != YPfalse) {
    T129 = VARREF(YevalSastYexpand_bind_element);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_expand_bind_element_316;
  T128 = CALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(YevalSastYexpand_bind_element,T128);
  lit_415 = YPPsym((P)"match-unquote");
  lit_416 = YPPsym((P)"match-sublist");
  T132 = YPsig(YPPlist(3,LITREF(lit_406),LITREF(lit_328),LITREF(lit_407)),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_element_317 = YPmet(FUNCODEREF(fun_expand_bind_element_317),LITREF(lit_413),T132,ENVNUL,PNUL,YPfalse);
  T135 = BOUNDP(YevalSastYexpand_bind_element);
  if (T135 != YPfalse) {
    T134 = VARREF(YevalSastYexpand_bind_element);
  } else {
    T134 = YPfalse;
  }
  T136 = fun_expand_bind_element_317;
  T133 = CALL2(1,VARREF(YPdefine_method),T134,T136);
  VARSET(YevalSastYexpand_bind_element,T133);
  lit_417 = YPPsym((P)"expand-pattern");
  lit_418 = YPPsym((P)"isa?");
  lit_419 = YPsb((P)"Match Pattern Failure");
  T137 = YPsig(YPPlist(3,LITREF(lit_406),LITREF(lit_328),LITREF(lit_407)),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_pattern_318 = YPmet(FUNCODEREF(fun_expand_pattern_318),LITREF(lit_417),T137,ENVNUL,PNUL,YPfalse);
  T140 = BOUNDP(YevalSastYexpand_pattern);
  if (T140 != YPfalse) {
    T139 = VARREF(YevalSastYexpand_pattern);
  } else {
    T139 = YPfalse;
  }
  T141 = fun_expand_pattern_318;
  T138 = CALL2(1,VARREF(YPdefine_method),T139,T141);
  VARSET(YevalSastYexpand_pattern,T138);
  lit_420 = YPPsym((P)"expand-syntax-if");
  lit_421 = YPPsym((P)"esc");
  lit_422 = YPPsym((P)"loc");
  lit_423 = YPPsym((P)"<str>");
  T143 = YPsig(YPPlist(1,LITREF(lit_125)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_319 = YPmet(FUNCODEREF(fun_319),YPfalse,T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(YPPlist(1,LITREF(lit_125)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_expand_syntax_if_320 = YPmet(FUNCODEREF(fun_expand_syntax_if_320),LITREF(lit_420),T142,ENVNUL,PNUL,YPfalse);
  T146 = BOUNDP(YevalSastYexpand_syntax_if);
  if (T146 != YPfalse) {
    T145 = VARREF(YevalSastYexpand_syntax_if);
  } else {
    T145 = YPfalse;
  }
  T147 = fun_expand_syntax_if_320;
  T144 = CALL2(1,VARREF(YPdefine_method),T145,T147);
  VARSET(YevalSastYexpand_syntax_if,T144);
  lit_424 = YPPsym((P)"r-extend*");
  T148 = YPsig(YPPlist(2,LITREF(lit_280),LITREF(lit_359)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YevalSastYLstatic_environmentG),Ynil);
  fun_r_extendT_321 = YPmet(FUNCODEREF(fun_r_extendT_321),LITREF(lit_424),T148,ENVNUL,PNUL,YPfalse);
  T151 = BOUNDP(YevalSastYr_extendT);
  if (T151 != YPfalse) {
    T150 = VARREF(YevalSastYr_extendT);
  } else {
    T150 = YPfalse;
  }
  T152 = fun_r_extendT_321;
  T149 = CALL2(1,VARREF(YPdefine_method),T150,T152);
  VARSET(YevalSastYr_extendT,T149);
  lit_425 = YPPsym((P)"insert-global!");
  T153 = YPsig(YPPlist(2,LITREF(lit_278),LITREF(lit_280)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_globalX_322 = YPmet(FUNCODEREF(fun_insert_globalX_322),LITREF(lit_425),T153,ENVNUL,PNUL,YPfalse);
  T156 = BOUNDP(YevalSastYinsert_globalX);
  if (T156 != YPfalse) {
    T155 = VARREF(YevalSastYinsert_globalX);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_insert_globalX_322;
  T154 = CALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(YevalSastYinsert_globalX,T154);
  lit_426 = YPPsym((P)"insert-globals!");
  T159 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_323 = YPmet(FUNCODEREF(fun_323),YPfalse,T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(YPPlist(2,LITREF(lit_359),LITREF(lit_280)),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_globalsX_324 = YPmet(FUNCODEREF(fun_insert_globalsX_324),LITREF(lit_426),T158,ENVNUL,PNUL,YPfalse);
  T162 = BOUNDP(YevalSastYinsert_globalsX);
  if (T162 != YPfalse) {
    T161 = VARREF(YevalSastYinsert_globalsX);
  } else {
    T161 = YPfalse;
  }
  T163 = fun_insert_globalsX_324;
  T160 = CALL2(1,VARREF(YPdefine_method),T161,T163);
  VARSET(YevalSastYinsert_globalsX,T160);
  lit_427 = YPPsym((P)"find-static-global-environment");
  T164 = YPsig(YPPlist(1,LITREF(lit_280)),YPPlist(1,VARREF(YevalSastYLstatic_local_environmentG)),YPfalse,YPint((P)1),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  fun_find_static_global_environment_325 = YPmet(FUNCODEREF(fun_find_static_global_environment_325),LITREF(lit_427),T164,ENVNUL,PNUL,YPfalse);
  T167 = BOUNDP(YevalSastYfind_static_global_environment);
  if (T167 != YPfalse) {
    T166 = VARREF(YevalSastYfind_static_global_environment);
  } else {
    T166 = YPfalse;
  }
  T168 = fun_find_static_global_environment_325;
  T165 = CALL2(1,VARREF(YPdefine_method),T166,T168);
  VARSET(YevalSastYfind_static_global_environment,T165);
  T169 = YPsig(YPPlist(1,LITREF(lit_280)),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  fun_find_static_global_environment_326 = YPmet(FUNCODEREF(fun_find_static_global_environment_326),LITREF(lit_427),T169,ENVNUL,PNUL,YPfalse);
  T172 = BOUNDP(YevalSastYfind_static_global_environment);
  if (T172 != YPfalse) {
    T171 = VARREF(YevalSastYfind_static_global_environment);
  } else {
    T171 = YPfalse;
  }
  T173 = fun_find_static_global_environment_326;
  T170 = CALL2(1,VARREF(YPdefine_method),T171,T173);
  VARSET(YevalSastYfind_static_global_environment,T170);
  lit_428 = YPPsym((P)"find-syntax-environment");
  T174 = YPsig(YPPlist(1,LITREF(lit_280)),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  fun_find_syntax_environment_327 = YPmet(FUNCODEREF(fun_find_syntax_environment_327),LITREF(lit_428),T174,ENVNUL,PNUL,YPfalse);
  T177 = BOUNDP(YevalSastYfind_syntax_environment);
  if (T177 != YPfalse) {
    T176 = VARREF(YevalSastYfind_syntax_environment);
  } else {
    T176 = YPfalse;
  }
  T178 = fun_find_syntax_environment_327;
  T175 = CALL2(1,VARREF(YPdefine_method),T176,T178);
  VARSET(YevalSastYfind_syntax_environment,T175);
  lit_429 = YPPsym((P)"find-environment-module");
  T179 = YPsig(YPPlist(1,LITREF(lit_280)),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_find_environment_module_328 = YPmet(FUNCODEREF(fun_find_environment_module_328),LITREF(lit_429),T179,ENVNUL,PNUL,YPfalse);
  T182 = BOUNDP(YevalSastYfind_environment_module);
  if (T182 != YPfalse) {
    T181 = VARREF(YevalSastYfind_environment_module);
  } else {
    T181 = YPfalse;
  }
  T183 = fun_find_environment_module_328;
  T180 = CALL2(1,VARREF(YPdefine_method),T181,T183);
  VARSET(YevalSastYfind_environment_module,T180);
  lit_430 = YPPsym((P)"find-binding");
  T185 = YPsig(YPPlist(1,LITREF(lit_359)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_329 = YPmet(FUNCODEREF(fun_loop_329),LITREF(lit_143),T185,ENVNUL,PNUL,YPfalse);
  T184 = YPsig(YPPlist(2,LITREF(lit_323),LITREF(lit_280)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_local_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_330 = YPmet(FUNCODEREF(fun_find_binding_330),LITREF(lit_430),T184,ENVNUL,PNUL,YPfalse);
  T188 = BOUNDP(YevalSastYfind_binding);
  if (T188 != YPfalse) {
    T187 = VARREF(YevalSastYfind_binding);
  } else {
    T187 = YPfalse;
  }
  T189 = fun_find_binding_330;
  T186 = CALL2(1,VARREF(YPdefine_method),T187,T189);
  VARSET(YevalSastYfind_binding,T186);
  T190 = YPsig(YPPlist(2,LITREF(lit_323),LITREF(lit_280)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_empty_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_331 = YPmet(FUNCODEREF(fun_find_binding_331),LITREF(lit_430),T190,ENVNUL,PNUL,YPfalse);
  T193 = BOUNDP(YevalSastYfind_binding);
  if (T193 != YPfalse) {
    T192 = VARREF(YevalSastYfind_binding);
  } else {
    T192 = YPfalse;
  }
  T194 = fun_find_binding_331;
  T191 = CALL2(1,VARREF(YPdefine_method),T192,T194);
  VARSET(YevalSastYfind_binding,T191);
  T195 = YPsig(YPPlist(2,LITREF(lit_323),LITREF(lit_280)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_332 = YPmet(FUNCODEREF(fun_find_binding_332),LITREF(lit_430),T195,ENVNUL,PNUL,YPfalse);
  T198 = BOUNDP(YevalSastYfind_binding);
  if (T198 != YPfalse) {
    T197 = VARREF(YevalSastYfind_binding);
  } else {
    T197 = YPfalse;
  }
  T199 = fun_find_binding_332;
  T196 = CALL2(1,VARREF(YPdefine_method),T197,T199);
  VARSET(YevalSastYfind_binding,T196);
  lit_431 = YPPsym((P)"frame-bindings");
  T200 = YPsig(YPPlist(1,LITREF(lit_401)),YPPlist(1,VARREF(YevalSastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_frame_bindings_333 = YPmet(FUNCODEREF(fun_frame_bindings_333),LITREF(lit_431),T200,ENVNUL,PNUL,YPfalse);
  T203 = BOUNDP(YevalSastYframe_bindings);
  if (T203 != YPfalse) {
    T202 = VARREF(YevalSastYframe_bindings);
  } else {
    T202 = YPfalse;
  }
  T204 = fun_frame_bindings_333;
  T201 = CALL2(1,VARREF(YPdefine_method),T202,T204);
  VARSET(YevalSastYframe_bindings,T201);
  VARSET(YevalSastYTmagic_bindingsT,Ynil);
  lit_432 = YPPsym((P)"register-magic-binding");
  T205 = YPsig(YPPlist(2,LITREF(lit_323),LITREF(lit_287)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_register_magic_binding_334 = YPmet(FUNCODEREF(fun_register_magic_binding_334),LITREF(lit_432),T205,ENVNUL,PNUL,YPfalse);
  T208 = BOUNDP(YevalSastYregister_magic_binding);
  if (T208 != YPfalse) {
    T207 = VARREF(YevalSastYregister_magic_binding);
  } else {
    T207 = YPfalse;
  }
  T209 = fun_register_magic_binding_334;
  T206 = CALL2(1,VARREF(YPdefine_method),T207,T209);
  VARSET(YevalSastYregister_magic_binding,T206);
  lit_433 = YPPsym((P)"magic-bindings");
  T210 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_magic_bindings_335 = YPmet(FUNCODEREF(fun_magic_bindings_335),LITREF(lit_433),T210,ENVNUL,PNUL,YPfalse);
  T213 = BOUNDP(YevalSastYmagic_bindings);
  if (T213 != YPfalse) {
    T212 = VARREF(YevalSastYmagic_bindings);
  } else {
    T212 = YPfalse;
  }
  T214 = fun_magic_bindings_335;
  T211 = CALL2(1,VARREF(YPdefine_method),T212,T214);
  VARSET(YevalSastYmagic_bindings,T211);
  lit_434 = YPPsym((P)"x-1736");
  lit_435 = YPPsym((P)"define-magic-binding");
  lit_436 = YPsb((P)"special-");
  lit_437 = YPsb((P)"$sexpr-");
  lit_438 = YPsb((P)"-tag");
  lit_439 = YPPsym((P)"binding-handler");
  lit_440 = YPPsym((P)"fun");
  T217 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1736_336 = YPmet(FUNCODEREF(fun_x_1736_336),LITREF(lit_434),T217,ENVNUL,PNUL,YPfalse);
  T216 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_337 = YPmet(FUNCODEREF(fun_337),YPfalse,T216,ENVNUL,PNUL,YPfalse);
  T215 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_338 = YPmet(FUNCODEREF(fun_338),YPfalse,T215,ENVNUL,PNUL,YPfalse);
  T218 = fun_338;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"define-magic-binding"),T218);
  T219 = YPsig(YPPlist(3,LITREF(lit_125),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_339 = YPmet(FUNCODEREF(fun_339),YPfalse,T219,ENVNUL,PNUL,YPfalse);
  T221 = fun_339;
  T220 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_283),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_if_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T221,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_if,T220);
  CALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_347),VARREF(YevalSastYspecial_if));
  T222 = YPsig(YPPlist(3,LITREF(lit_125),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_340 = YPmet(FUNCODEREF(fun_340),YPfalse,T222,ENVNUL,PNUL,YPfalse);
  T224 = fun_340;
  T223 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_283),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_begin_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T224,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_begin,T223);
  lit_441 = YPPsym((P)"begin");
  CALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_441),VARREF(YevalSastYspecial_begin));
  lit_442 = YPPsym((P)"%raw");
  VARSET(YevalSastYDsexpr_Praw_tag,LITREF(lit_442));
  T225 = YPsig(YPPlist(3,LITREF(lit_125),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_341 = YPmet(FUNCODEREF(fun_341),YPfalse,T225,ENVNUL,PNUL,YPfalse);
  T227 = fun_341;
  T226 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_283),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_Praw_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T227,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_Praw,T226);
  CALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_442),VARREF(YevalSastYspecial_Praw));
  T228 = YPsig(YPPlist(3,LITREF(lit_125),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_342 = YPmet(FUNCODEREF(fun_342),YPfalse,T228,ENVNUL,PNUL,YPfalse);
  T230 = fun_342;
  T229 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_283),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_quote_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T230,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_quote,T229);
  CALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_306),VARREF(YevalSastYspecial_quote));
  T231 = YPsig(YPPlist(3,LITREF(lit_125),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_343 = YPmet(FUNCODEREF(fun_343),YPfalse,T231,ENVNUL,PNUL,YPfalse);
  T233 = fun_343;
  T232 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_283),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_set_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T233,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_set,T232);
  CALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_10),VARREF(YevalSastYspecial_set));
  T234 = YPsig(YPPlist(3,LITREF(lit_125),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_344 = YPmet(FUNCODEREF(fun_344),YPfalse,T234,ENVNUL,PNUL,YPfalse);
  T236 = fun_344;
  T235 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_283),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T236,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define,T235);
  lit_443 = YPPsym((P)"define");
  CALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_443),VARREF(YevalSastYspecial_define));
  T237 = YPsig(YPPlist(3,LITREF(lit_125),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_345 = YPmet(FUNCODEREF(fun_345),YPfalse,T237,ENVNUL,PNUL,YPfalse);
  T239 = fun_345;
  T238 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_283),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_syntax_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T239,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_syntax,T238);
  lit_444 = YPPsym((P)"define-syntax");
  CALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_444),VARREF(YevalSastYspecial_define_syntax));
  lit_445 = YPPsym((P)"dss");
  VARSET(YevalSastYDsexpr_define_static_syntax_tag,LITREF(lit_445));
  T240 = YPsig(YPPlist(3,LITREF(lit_125),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_346 = YPmet(FUNCODEREF(fun_346),YPfalse,T240,ENVNUL,PNUL,YPfalse);
  T242 = fun_346;
  T241 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_283),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_define_static_syntax_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T242,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_static_syntax,T241);
  lit_446 = YPPsym((P)"define-static-syntax");
  CALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_446),VARREF(YevalSastYspecial_define_static_syntax));
  T245 = YPsig(YPPlist(3,LITREF(lit_125),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T244 = fun_347 = YPmet(FUNCODEREF(fun_347),YPfalse,T245,ENVNUL,PNUL,YPfalse);
  T248 = fun_347;
  T247 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_283),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_method_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T248,VARREF(YevalSastYbinding_freeQ),YPfalse);
  T246 = VARSET(YevalSastYspecial_define_method,T247);
  T243 = T246;
  return T243;
}

P YevalSastY___main_7___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108;
loop:
  lit_447 = YPPsym((P)"define-method");
  CALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_447),VARREF(YevalSastYspecial_define_method));
  T0 = YPsig(YPPlist(3,LITREF(lit_125),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_348 = YPmet(FUNCODEREF(fun_348),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T2 = fun_348;
  T1 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_283),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_generic_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T2,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_generic,T1);
  lit_448 = YPPsym((P)"define-generic");
  CALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_448),VARREF(YevalSastYspecial_define_generic));
  T3 = YPsig(YPPlist(3,LITREF(lit_125),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_349 = YPmet(FUNCODEREF(fun_349),YPfalse,T3,ENVNUL,PNUL,YPfalse);
  T5 = fun_349;
  T4 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_283),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_function_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T5,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_function,T4);
  lit_449 = YPPsym((P)"define-function");
  CALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_449),VARREF(YevalSastYspecial_define_function));
  T6 = YPsig(YPPlist(3,LITREF(lit_125),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_350 = YPmet(FUNCODEREF(fun_350),YPfalse,T6,ENVNUL,PNUL,YPfalse);
  T8 = fun_350;
  T7 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_283),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_method_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T8,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_method,T7);
  lit_450 = YPPsym((P)"method");
  CALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_450),VARREF(YevalSastYspecial_method));
  VARSET(YevalSastYDsexpr_boundQ_tag,LITREF(lit_348));
  T9 = YPsig(YPPlist(3,LITREF(lit_125),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_351 = YPmet(FUNCODEREF(fun_351),YPfalse,T9,ENVNUL,PNUL,YPfalse);
  T11 = fun_351;
  T10 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_283),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_boundQ_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T11,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_boundQ,T10);
  CALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_348),VARREF(YevalSastYspecial_boundQ));
  T12 = YPsig(YPPlist(3,LITREF(lit_125),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_352 = YPmet(FUNCODEREF(fun_352),YPfalse,T12,ENVNUL,PNUL,YPfalse);
  T14 = fun_352;
  T13 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_283),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_let_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T14,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_let,T13);
  CALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_8),VARREF(YevalSastYspecial_let));
  T15 = YPsig(YPPlist(3,LITREF(lit_125),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_353 = YPmet(FUNCODEREF(fun_353),YPfalse,T15,ENVNUL,PNUL,YPfalse);
  T17 = fun_353;
  T16 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_283),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_def_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T17,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_def,T16);
  lit_451 = YPPsym((P)"def");
  CALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_451),VARREF(YevalSastYspecial_def));
  T18 = YPsig(YPPlist(3,LITREF(lit_125),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_354 = YPmet(FUNCODEREF(fun_354),YPfalse,T18,ENVNUL,PNUL,YPfalse);
  T20 = fun_354;
  T19 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_283),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_locals_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T20,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_locals,T19);
  lit_452 = YPPsym((P)"locals");
  CALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_452),VARREF(YevalSastYspecial_locals));
  T21 = YPsig(YPPlist(3,LITREF(lit_125),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_355 = YPmet(FUNCODEREF(fun_355),YPfalse,T21,ENVNUL,PNUL,YPfalse);
  T23 = fun_355;
  T22 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_283),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_iterate_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T23,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_iterate,T22);
  lit_453 = YPPsym((P)"iterate");
  CALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_453),VARREF(YevalSastYspecial_iterate));
  T24 = YPsig(YPPlist(3,LITREF(lit_125),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_356 = YPmet(FUNCODEREF(fun_356),YPfalse,T24,ENVNUL,PNUL,YPfalse);
  T26 = fun_356;
  T25 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_283),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_bind_exit_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T26,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_bind_exit,T25);
  lit_454 = YPPsym((P)"bind-exit");
  CALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_454),VARREF(YevalSastYspecial_bind_exit));
  T27 = YPsig(YPPlist(3,LITREF(lit_125),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_357 = YPmet(FUNCODEREF(fun_357),YPfalse,T27,ENVNUL,PNUL,YPfalse);
  T29 = fun_357;
  T28 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_283),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_unwind_protect_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T29,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_unwind_protect,T28);
  lit_455 = YPPsym((P)"unwind-protect");
  CALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_455),VARREF(YevalSastYspecial_unwind_protect));
  T30 = YPsig(YPPlist(3,LITREF(lit_125),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_358 = YPmet(FUNCODEREF(fun_358),YPfalse,T30,ENVNUL,PNUL,YPfalse);
  T32 = fun_358;
  T31 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_283),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_monitor_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T32,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_monitor,T31);
  lit_456 = YPPsym((P)"monitor");
  CALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_456),VARREF(YevalSastYspecial_monitor));
  lit_457 = YPPsym((P)"pairize");
  T33 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pairize_359 = YPmet(FUNCODEREF(fun_pairize_359),LITREF(lit_457),T33,ENVNUL,PNUL,YPfalse);
  T36 = BOUNDP(YevalSastYpairize);
  if (T36 != YPfalse) {
    T35 = VARREF(YevalSastYpairize);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_pairize_359;
  T34 = CALL2(1,VARREF(YPdefine_method),T35,T37);
  VARSET(YevalSastYpairize,T34);
  lit_458 = YPPsym((P)"fab-class");
  T38 = YPsig(YPPlist(3,LITREF(lit_125),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_360 = YPmet(FUNCODEREF(fun_360),YPfalse,T38,ENVNUL,PNUL,YPfalse);
  T40 = fun_360;
  T39 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_283),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_class_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T40,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_class,T39);
  lit_459 = YPPsym((P)"define-class");
  CALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_459),VARREF(YevalSastYspecial_define_class));
  lit_460 = YPPsym((P)"%prop");
  lit_461 = YPPsym((P)"%prop-unbound-error");
  T41 = YPsig(YPPlist(3,LITREF(lit_125),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_361 = YPmet(FUNCODEREF(fun_361),YPfalse,T41,ENVNUL,PNUL,YPfalse);
  T43 = fun_361;
  T42 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_283),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_prop_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T43,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_prop,T42);
  lit_462 = YPPsym((P)"prop");
  CALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_462),VARREF(YevalSastYspecial_prop));
  lit_463 = YPPsym((P)"ct");
  VARSET(YevalSastYDsexpr_compile_time_tag,LITREF(lit_463));
  T44 = YPsig(YPPlist(3,LITREF(lit_125),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_362 = YPmet(FUNCODEREF(fun_362),YPfalse,T44,ENVNUL,PNUL,YPfalse);
  T46 = fun_362;
  T45 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_283),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_compile_time_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T46,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_compile_time,T45);
  lit_464 = YPPsym((P)"compile-time");
  CALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_464),VARREF(YevalSastYspecial_compile_time));
  lit_465 = YPPsym((P)"ct-also");
  VARSET(YevalSastYDsexpr_compile_time_also_tag,LITREF(lit_465));
  T47 = YPsig(YPPlist(3,LITREF(lit_125),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_363 = YPmet(FUNCODEREF(fun_363),YPfalse,T47,ENVNUL,PNUL,YPfalse);
  T49 = fun_363;
  T48 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_283),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_compile_time_also_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T49,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_compile_time_also,T48);
  lit_466 = YPPsym((P)"compile-time-also");
  CALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_466),VARREF(YevalSastYspecial_compile_time_also));
  lit_467 = YPPsym((P)"dl");
  VARSET(YevalSastYDsexpr_define_primitive_tag,LITREF(lit_467));
  T50 = YPsig(YPPlist(3,LITREF(lit_125),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_364 = YPmet(FUNCODEREF(fun_364),YPfalse,T50,ENVNUL,PNUL,YPfalse);
  T52 = fun_364;
  T51 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_283),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_define_primitive_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T52,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_primitive,T51);
  lit_468 = YPPsym((P)"define-primitive");
  CALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_468),VARREF(YevalSastYspecial_define_primitive));
  T53 = YPsig(YPPlist(3,LITREF(lit_125),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_365 = YPmet(FUNCODEREF(fun_365),YPfalse,T53,ENVNUL,PNUL,YPfalse);
  T55 = fun_365;
  T54 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_283),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_quasiquote_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T55,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_quasiquote,T54);
  lit_469 = YPPsym((P)"quasiquote");
  CALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_469),VARREF(YevalSastYspecial_quasiquote));
  lit_470 = YPPsym((P)"ast-macro-expand");
  T56 = YPsig(YPPlist(3,LITREF(lit_125),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_macro_expand_366 = YPmet(FUNCODEREF(fun_ast_macro_expand_366),LITREF(lit_470),T56,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(YevalSastYast_macro_expand);
  if (T59 != YPfalse) {
    T58 = VARREF(YevalSastYast_macro_expand);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_ast_macro_expand_366;
  T57 = CALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YevalSastYast_macro_expand,T57);
  T61 = YPsig(YPPlist(3,LITREF(lit_125),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_367 = YPmet(FUNCODEREF(fun_367),YPfalse,T61,ENVNUL,PNUL,YPfalse);
  T63 = fun_367;
  T62 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_283),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_macro_expand_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T63,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_macro_expand,T62);
  lit_471 = YPPsym((P)"macro-expand");
  CALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_471),VARREF(YevalSastYspecial_macro_expand));
  T64 = YPsig(YPPlist(3,LITREF(lit_125),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_368 = YPmet(FUNCODEREF(fun_368),YPfalse,T64,ENVNUL,PNUL,YPfalse);
  T66 = fun_368;
  T65 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_283),VARREF(YevalSastYbinding_name),VARREF(YevalSsyntaxYDsexpr_syntax_if_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T66,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_syntax_if,T65);
  lit_472 = YPPsym((P)"syntax-if");
  CALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_472),VARREF(YevalSastYspecial_syntax_if));
  lit_473 = YPPsym((P)"export");
  VARSET(YevalSastYDsexpr_export_tag,LITREF(lit_473));
  T67 = YPsig(YPPlist(3,LITREF(lit_125),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_369 = YPmet(FUNCODEREF(fun_369),YPfalse,T67,ENVNUL,PNUL,YPfalse);
  T69 = fun_369;
  T68 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_283),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_export_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T69,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_export,T68);
  CALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_473),VARREF(YevalSastYspecial_export));
  lit_474 = YPPsym((P)"use");
  VARSET(YevalSastYDsexpr_use_module_tag,LITREF(lit_474));
  T70 = YPsig(YPPlist(3,LITREF(lit_125),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_370 = YPmet(FUNCODEREF(fun_370),YPfalse,T70,ENVNUL,PNUL,YPfalse);
  T72 = fun_370;
  T71 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_283),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_use_module_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T72,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_module,T71);
  lit_475 = YPPsym((P)"use-module");
  CALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_475),VARREF(YevalSastYspecial_use_module));
  lit_476 = YPPsym((P)"use/export");
  VARSET(YevalSastYDsexpr_useSexport_module_tag,LITREF(lit_476));
  T73 = YPsig(YPPlist(3,LITREF(lit_125),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_371 = YPmet(FUNCODEREF(fun_371),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T75 = fun_371;
  T74 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_283),VARREF(YevalSastYbinding_name),VARREF(YevalSastYDsexpr_useSexport_module_tag),VARREF(YevalSastYbinding_module),YPfalse,VARREF(YevalSastYbinding_handler),T75,VARREF(YevalSastYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_useSexport_module,T74);
  lit_477 = YPPsym((P)"use/export-module");
  CALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_477),VARREF(YevalSastYspecial_useSexport_module));
  lit_478 = YPPsym((P)"<transaction>");
  T77 = (P)YPpair(VARREF(YLanyG),Ynil);
  T76 = CALL2(1,VARREF(Yfab_class),LITREF(lit_478),T77);
  VARSET(YevalSastYLtransactionG,T76);
  lit_479 = YPPsym((P)"transaction-implemented-bindings");
  T78 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_transaction_implemented_bindings_372 = YPmet(FUNCODEREF(fun_transaction_implemented_bindings_372),LITREF(lit_479),T78,ENVNUL,PNUL,YPfalse);
  T81 = BOUNDP(YevalSastYtransaction_implemented_bindings);
  if (T81 != YPfalse) {
    T80 = VARREF(YevalSastYtransaction_implemented_bindings);
  } else {
    T80 = YPfalse;
  }
  T82 = fun_transaction_implemented_bindings_372;
  T79 = CALL2(1,VARREF(YPdefine_method),T80,T82);
  VARSET(YevalSastYtransaction_implemented_bindings,T79);
  lit_480 = YPPsym((P)"transaction-implemented-bindings-setter");
  T83 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_transaction_implemented_bindings_setter_373 = YPmet(FUNCODEREF(fun_transaction_implemented_bindings_setter_373),LITREF(lit_480),T83,ENVNUL,PNUL,YPfalse);
  T86 = BOUNDP(YevalSastYtransaction_implemented_bindings_setter);
  if (T86 != YPfalse) {
    T85 = VARREF(YevalSastYtransaction_implemented_bindings_setter);
  } else {
    T85 = YPfalse;
  }
  T87 = fun_transaction_implemented_bindings_setter_373;
  T84 = CALL2(1,VARREF(YPdefine_method),T85,T87);
  VARSET(YevalSastYtransaction_implemented_bindings_setter,T84);
  T88 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_374 = YPmet(FUNCODEREF(fun_374),YPfalse,T88,ENVNUL,PNUL,YPfalse);
  T89 = fun_374;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLtransactionG),VARREF(YevalSastYtransaction_implemented_bindings),VARREF(YevalSastYtransaction_implemented_bindings_setter),VARREF(YgooScolsScolYLtabG),T89);
  lit_481 = YPPsym((P)"transaction-dependents");
  T90 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_transaction_dependents_375 = YPmet(FUNCODEREF(fun_transaction_dependents_375),LITREF(lit_481),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YevalSastYtransaction_dependents);
  if (T93 != YPfalse) {
    T92 = VARREF(YevalSastYtransaction_dependents);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_transaction_dependents_375;
  T91 = CALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YevalSastYtransaction_dependents,T91);
  lit_482 = YPPsym((P)"transaction-dependents-setter");
  T95 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_transaction_dependents_setter_376 = YPmet(FUNCODEREF(fun_transaction_dependents_setter_376),LITREF(lit_482),T95,ENVNUL,PNUL,YPfalse);
  T98 = BOUNDP(YevalSastYtransaction_dependents_setter);
  if (T98 != YPfalse) {
    T97 = VARREF(YevalSastYtransaction_dependents_setter);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_transaction_dependents_setter_376;
  T96 = CALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YevalSastYtransaction_dependents_setter,T96);
  T100 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_377 = YPmet(FUNCODEREF(fun_377),YPfalse,T100,ENVNUL,PNUL,YPfalse);
  T101 = fun_377;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLtransactionG),VARREF(YevalSastYtransaction_dependents),VARREF(YevalSastYtransaction_dependents_setter),VARREF(YgooScolsScolYLtabG),T101);
  VARSET(YevalSastYTcurrent_subtransactionT,YPfalse);
  lit_483 = YPPsym((P)"transaction-register-implemented-binding");
  lit_484 = YPsb((P)"Can't register implemented foreign binding (no subtransaction)");
  T102 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YevalSastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYtransaction_register_implemented_binding = YPmet(FUNCODEREF(YevalSastYtransaction_register_implemented_binding),LITREF(lit_483),T102,ENVNUL,PNUL,YPfalse);
  T103 = YevalSastYtransaction_register_implemented_binding;
  VARSET(YevalSastYtransaction_register_implemented_binding,T103);
  lit_485 = YPPsym((P)"transaction-register-dependent");
  lit_486 = YPPsym((P)"d");
  lit_487 = YPsb((P)"Can't register dependent (no subtransaction)");
  T106 = YPsig(YPPlist(1,LITREF(lit_486)),YPPlist(1,VARREF(YevalSdependencyYLdependentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T105 = YevalSastYtransaction_register_dependent = YPmet(FUNCODEREF(YevalSastYtransaction_register_dependent),LITREF(lit_485),T106,ENVNUL,PNUL,YPfalse);
  T108 = YevalSastYtransaction_register_dependent;
  T107 = VARSET(YevalSastYtransaction_register_dependent,T108);
  T104 = T107;
  return T104;
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
loop:
  lit_488 = YPPsym((P)"transaction-empty?");
  T0 = YPsig(YPPlist(1,LITREF(lit_157)),YPPlist(1,VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSastYtransaction_emptyQ = YPmet(FUNCODEREF(YevalSastYtransaction_emptyQ),LITREF(lit_488),T0,ENVNUL,PNUL,YPfalse);
  T1 = YevalSastYtransaction_emptyQ;
  VARSET(YevalSastYtransaction_emptyQ,T1);
  lit_489 = YPPsym((P)"merge-transactions!");
  lit_490 = YPPsym((P)"t1");
  lit_491 = YPPsym((P)"t2");
  lit_492 = YPPsym((P)"k");
  lit_493 = YPPsym((P)"v");
  T4 = YPsig(YPPlist(2,LITREF(lit_492),LITREF(lit_493)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_381 = YPmet(FUNCODEREF(fun_381),YPfalse,T4,ENVNUL,PNUL,YPfalse);
  T3 = YPsig(YPPlist(2,LITREF(lit_492),LITREF(lit_493)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_382 = YPmet(FUNCODEREF(fun_382),YPfalse,T3,ENVNUL,PNUL,YPfalse);
  T2 = YPsig(YPPlist(2,LITREF(lit_490),LITREF(lit_491)),YPPlist(2,VARREF(YevalSastYLtransactionG),VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)2),VARREF(YevalSastYLtransactionG),Ynil);
  YevalSastYmerge_transactionsX = YPmet(FUNCODEREF(YevalSastYmerge_transactionsX),LITREF(lit_489),T2,ENVNUL,PNUL,YPfalse);
  T5 = YevalSastYmerge_transactionsX;
  VARSET(YevalSastYmerge_transactionsX,T5);
  lit_494 = YPPsym((P)"roll-back-transaction");
  lit_495 = YPPsym((P)"junk");
  T8 = YPsig(YPPlist(2,LITREF(lit_278),LITREF(lit_495)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_384 = YPmet(FUNCODEREF(fun_384),YPfalse,T8,ENVNUL,PNUL,YPfalse);
  T7 = YPsig(YPPlist(2,LITREF(lit_136),LITREF(lit_495)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_385 = YPmet(FUNCODEREF(fun_385),YPfalse,T7,ENVNUL,PNUL,YPfalse);
  T6 = YPsig(YPPlist(1,LITREF(lit_157)),YPPlist(1,VARREF(YevalSastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYroll_back_transaction = YPmet(FUNCODEREF(YevalSastYroll_back_transaction),LITREF(lit_494),T6,ENVNUL,PNUL,YPfalse);
  T9 = YevalSastYroll_back_transaction;
  VARSET(YevalSastYroll_back_transaction,T9);
  lit_496 = YPPsym((P)"call-with-subtransaction");
  lit_497 = YPPsym((P)"module");
  lit_498 = YPPsym((P)"thunk");
  T12 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_387 = YPmet(FUNCODEREF(fun_387),YPfalse,T12,ENVNUL,PNUL,YPfalse);
  T11 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_388 = YPmet(FUNCODEREF(fun_388),YPfalse,T11,ENVNUL,PNUL,YPfalse);
  T10 = YPsig(YPPlist(2,LITREF(lit_497),LITREF(lit_498)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYcall_with_subtransaction = YPmet(FUNCODEREF(YevalSastYcall_with_subtransaction),LITREF(lit_496),T10,ENVNUL,PNUL,YPfalse);
  T13 = YevalSastYcall_with_subtransaction;
  VARSET(YevalSastYcall_with_subtransaction,T13);
  lit_499 = YPPsym((P)"x-1740");
  lit_500 = YPPsym((P)"with-subtransaction");
  T16 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1740_390 = YPmet(FUNCODEREF(fun_x_1740_390),LITREF(lit_499),T16,ENVNUL,PNUL,YPfalse);
  T15 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_391 = YPmet(FUNCODEREF(fun_391),YPfalse,T15,ENVNUL,PNUL,YPfalse);
  T14 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_392 = YPmet(FUNCODEREF(fun_392),YPfalse,T14,ENVNUL,PNUL,YPfalse);
  T17 = fun_392;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"with-subtransaction"),T17);
  lit_501 = YPPsym((P)"objectify-with-subtransaction");
  T19 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_393 = YPmet(FUNCODEREF(fun_393),YPfalse,T19,ENVNUL,PNUL,YPfalse);
  T18 = YPsig(YPPlist(3,LITREF(lit_142),LITREF(lit_280),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYobjectify_with_subtransaction = YPmet(FUNCODEREF(YevalSastYobjectify_with_subtransaction),LITREF(lit_501),T18,ENVNUL,PNUL,YPfalse);
  T20 = YevalSastYobjectify_with_subtransaction;
  VARSET(YevalSastYobjectify_with_subtransaction,T20);
  lit_502 = YPPsym((P)"<module-loader>");
  T22 = (P)YPpair(VARREF(YLanyG),Ynil);
  T21 = CALL2(1,VARREF(Yfab_class),LITREF(lit_502),T22);
  VARSET(YevalSastYLmodule_loaderG,T21);
  lit_503 = YPPsym((P)"module-loader-modules");
  T23 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_modules_395 = YPmet(FUNCODEREF(fun_module_loader_modules_395),LITREF(lit_503),T23,ENVNUL,PNUL,YPfalse);
  T26 = BOUNDP(YevalSastYmodule_loader_modules);
  if (T26 != YPfalse) {
    T25 = VARREF(YevalSastYmodule_loader_modules);
  } else {
    T25 = YPfalse;
  }
  T27 = fun_module_loader_modules_395;
  T24 = CALL2(1,VARREF(YPdefine_method),T25,T27);
  VARSET(YevalSastYmodule_loader_modules,T24);
  lit_504 = YPPsym((P)"module-loader-modules-setter");
  T28 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_modules_setter_396 = YPmet(FUNCODEREF(fun_module_loader_modules_setter_396),LITREF(lit_504),T28,ENVNUL,PNUL,YPfalse);
  T31 = BOUNDP(YevalSastYmodule_loader_modules_setter);
  if (T31 != YPfalse) {
    T30 = VARREF(YevalSastYmodule_loader_modules_setter);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_module_loader_modules_setter_396;
  T29 = CALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(YevalSastYmodule_loader_modules_setter,T29);
  T33 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_397 = YPmet(FUNCODEREF(fun_397),YPfalse,T33,ENVNUL,PNUL,YPfalse);
  T34 = fun_397;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYmodule_loader_modules),VARREF(YevalSastYmodule_loader_modules_setter),VARREF(YgooScolsScolYLtabG),T34);
  lit_505 = YPPsym((P)"module-loader-stack");
  T35 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_stack_398 = YPmet(FUNCODEREF(fun_module_loader_stack_398),LITREF(lit_505),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YevalSastYmodule_loader_stack);
  if (T38 != YPfalse) {
    T37 = VARREF(YevalSastYmodule_loader_stack);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_module_loader_stack_398;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YevalSastYmodule_loader_stack,T36);
  lit_506 = YPPsym((P)"module-loader-stack-setter");
  T40 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLlstG),VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_stack_setter_399 = YPmet(FUNCODEREF(fun_module_loader_stack_setter_399),LITREF(lit_506),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YevalSastYmodule_loader_stack_setter);
  if (T43 != YPfalse) {
    T42 = VARREF(YevalSastYmodule_loader_stack_setter);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_module_loader_stack_setter_399;
  T41 = CALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YevalSastYmodule_loader_stack_setter,T41);
  T45 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_400 = YPmet(FUNCODEREF(fun_400),YPfalse,T45,ENVNUL,PNUL,YPfalse);
  T46 = fun_400;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYmodule_loader_stack),VARREF(YevalSastYmodule_loader_stack_setter),VARREF(YLlstG),T46);
  lit_507 = YPPsym((P)"<module>");
  T48 = (P)YPpair(VARREF(YLanyG),Ynil);
  T47 = CALL2(1,VARREF(Yfab_class),LITREF(lit_507),T48);
  VARSET(YevalSastYLmoduleG,T47);
  lit_508 = YPPsym((P)"module-name");
  T49 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_name_401 = YPmet(FUNCODEREF(fun_module_name_401),LITREF(lit_508),T49,ENVNUL,PNUL,YPfalse);
  T52 = BOUNDP(YevalSastYmodule_name);
  if (T52 != YPfalse) {
    T51 = VARREF(YevalSastYmodule_name);
  } else {
    T51 = YPfalse;
  }
  T53 = fun_module_name_401;
  T50 = CALL2(1,VARREF(YPdefine_method),T51,T53);
  VARSET(YevalSastYmodule_name,T50);
  lit_509 = YPPsym((P)"module-name-setter");
  T54 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLsymG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_name_setter_402 = YPmet(FUNCODEREF(fun_module_name_setter_402),LITREF(lit_509),T54,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(YevalSastYmodule_name_setter);
  if (T57 != YPfalse) {
    T56 = VARREF(YevalSastYmodule_name_setter);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_module_name_setter_402;
  T55 = CALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YevalSastYmodule_name_setter,T55);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_name),VARREF(YevalSastYmodule_name_setter),VARREF(YLsymG),VARREF(YPprop_unbound_error));
  lit_510 = YPPsym((P)"module-mangled-name");
  T59 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_mangled_name_403 = YPmet(FUNCODEREF(fun_module_mangled_name_403),LITREF(lit_510),T59,ENVNUL,PNUL,YPfalse);
  T62 = BOUNDP(YevalSastYmodule_mangled_name);
  if (T62 != YPfalse) {
    T61 = VARREF(YevalSastYmodule_mangled_name);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_module_mangled_name_403;
  T60 = CALL2(1,VARREF(YPdefine_method),T61,T63);
  VARSET(YevalSastYmodule_mangled_name,T60);
  lit_511 = YPPsym((P)"module-mangled-name-setter");
  T65 = CALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T64 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,T65,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_mangled_name_setter_404 = YPmet(FUNCODEREF(fun_module_mangled_name_setter_404),LITREF(lit_511),T64,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YevalSastYmodule_mangled_name_setter);
  if (T68 != YPfalse) {
    T67 = VARREF(YevalSastYmodule_mangled_name_setter);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_module_mangled_name_setter_404;
  T66 = CALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YevalSastYmodule_mangled_name_setter,T66);
  T70 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_405 = YPmet(FUNCODEREF(fun_405),YPfalse,T70,ENVNUL,PNUL,YPfalse);
  T71 = CALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T72 = fun_405;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_mangled_name),VARREF(YevalSastYmodule_mangled_name_setter),T71,T72);
  lit_512 = YPPsym((P)"module-mangled-string-name");
  T73 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_mangled_string_name_406 = YPmet(FUNCODEREF(fun_module_mangled_string_name_406),LITREF(lit_512),T73,ENVNUL,PNUL,YPfalse);
  T76 = BOUNDP(YevalSastYmodule_mangled_string_name);
  if (T76 != YPfalse) {
    T75 = VARREF(YevalSastYmodule_mangled_string_name);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_module_mangled_string_name_406;
  T74 = CALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(YevalSastYmodule_mangled_string_name,T74);
  lit_513 = YPPsym((P)"module-mangled-string-name-setter");
  T79 = CALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T78 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,T79,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_mangled_string_name_setter_407 = YPmet(FUNCODEREF(fun_module_mangled_string_name_setter_407),LITREF(lit_513),T78,ENVNUL,PNUL,YPfalse);
  T82 = BOUNDP(YevalSastYmodule_mangled_string_name_setter);
  if (T82 != YPfalse) {
    T81 = VARREF(YevalSastYmodule_mangled_string_name_setter);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_module_mangled_string_name_setter_407;
  T80 = CALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(YevalSastYmodule_mangled_string_name_setter,T80);
  T84 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_408 = YPmet(FUNCODEREF(fun_408),YPfalse,T84,ENVNUL,PNUL,YPfalse);
  T85 = CALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T86 = fun_408;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_mangled_string_name),VARREF(YevalSastYmodule_mangled_string_name_setter),T85,T86);
  lit_514 = YPPsym((P)"module-target-environment");
  T87 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_target_environment_409 = YPmet(FUNCODEREF(fun_module_target_environment_409),LITREF(lit_514),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YevalSastYmodule_target_environment);
  if (T90 != YPfalse) {
    T89 = VARREF(YevalSastYmodule_target_environment);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_module_target_environment_409;
  T88 = CALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YevalSastYmodule_target_environment,T88);
  lit_515 = YPPsym((P)"module-target-environment-setter");
  T92 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_target_environment_setter_410 = YPmet(FUNCODEREF(fun_module_target_environment_setter_410),LITREF(lit_515),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(YevalSastYmodule_target_environment_setter);
  if (T95 != YPfalse) {
    T94 = VARREF(YevalSastYmodule_target_environment_setter);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_module_target_environment_setter_410;
  T93 = CALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YevalSastYmodule_target_environment_setter,T93);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_target_environment),VARREF(YevalSastYmodule_target_environment_setter),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YPprop_unbound_error));
  lit_516 = YPPsym((P)"module-syntax-environment");
  T97 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_syntax_environment_411 = YPmet(FUNCODEREF(fun_module_syntax_environment_411),LITREF(lit_516),T97,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(YevalSastYmodule_syntax_environment);
  if (T100 != YPfalse) {
    T99 = VARREF(YevalSastYmodule_syntax_environment);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_module_syntax_environment_411;
  T98 = CALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YevalSastYmodule_syntax_environment,T98);
  lit_517 = YPPsym((P)"module-syntax-environment-setter");
  T102 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_syntax_environment_setter_412 = YPmet(FUNCODEREF(fun_module_syntax_environment_setter_412),LITREF(lit_517),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(YevalSastYmodule_syntax_environment_setter);
  if (T105 != YPfalse) {
    T104 = VARREF(YevalSastYmodule_syntax_environment_setter);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_module_syntax_environment_setter_412;
  T103 = CALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(YevalSastYmodule_syntax_environment_setter,T103);
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_syntax_environment),VARREF(YevalSastYmodule_syntax_environment_setter),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YPprop_unbound_error));
  lit_518 = YPPsym((P)"%module-exports");
  T107 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pmodule_exports_413 = YPmet(FUNCODEREF(fun_Pmodule_exports_413),LITREF(lit_518),T107,ENVNUL,PNUL,YPfalse);
  T110 = BOUNDP(YevalSastYPmodule_exports);
  if (T110 != YPfalse) {
    T109 = VARREF(YevalSastYPmodule_exports);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_Pmodule_exports_413;
  T108 = CALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(YevalSastYPmodule_exports,T108);
  lit_519 = YPPsym((P)"%module-exports-setter");
  T112 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pmodule_exports_setter_414 = YPmet(FUNCODEREF(fun_Pmodule_exports_setter_414),LITREF(lit_519),T112,ENVNUL,PNUL,YPfalse);
  T115 = BOUNDP(YevalSastYPmodule_exports_setter);
  if (T115 != YPfalse) {
    T114 = VARREF(YevalSastYPmodule_exports_setter);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_Pmodule_exports_setter_414;
  T113 = CALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(YevalSastYPmodule_exports_setter,T113);
  T117 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_415 = YPmet(FUNCODEREF(fun_415),YPfalse,T117,ENVNUL,PNUL,YPfalse);
  T118 = fun_415;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYPmodule_exports),VARREF(YevalSastYPmodule_exports_setter),VARREF(YgooScolsScolYLtabG),T118);
  lit_520 = YPPsym((P)"module-data-processed?");
  T119 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_data_processedQ_416 = YPmet(FUNCODEREF(fun_module_data_processedQ_416),LITREF(lit_520),T119,ENVNUL,PNUL,YPfalse);
  T122 = BOUNDP(YevalSastYmodule_data_processedQ);
  if (T122 != YPfalse) {
    T121 = VARREF(YevalSastYmodule_data_processedQ);
  } else {
    T121 = YPfalse;
  }
  T123 = fun_module_data_processedQ_416;
  T120 = CALL2(1,VARREF(YPdefine_method),T121,T123);
  VARSET(YevalSastYmodule_data_processedQ,T120);
  lit_521 = YPPsym((P)"module-data-processed?-setter");
  T124 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLlogG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_data_processedQ_setter_417 = YPmet(FUNCODEREF(fun_module_data_processedQ_setter_417),LITREF(lit_521),T124,ENVNUL,PNUL,YPfalse);
  T127 = BOUNDP(YevalSastYmodule_data_processedQ_setter);
  if (T127 != YPfalse) {
    T126 = VARREF(YevalSastYmodule_data_processedQ_setter);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_module_data_processedQ_setter_417;
  T125 = CALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(YevalSastYmodule_data_processedQ_setter,T125);
  T129 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_418 = YPmet(FUNCODEREF(fun_418),YPfalse,T129,ENVNUL,PNUL,YPfalse);
  T130 = fun_418;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_data_processedQ),VARREF(YevalSastYmodule_data_processedQ_setter),VARREF(YLlogG),T130);
  lit_522 = YPPsym((P)"module-runtime-data");
  T131 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_runtime_data_419 = YPmet(FUNCODEREF(fun_module_runtime_data_419),LITREF(lit_522),T131,ENVNUL,PNUL,YPfalse);
  T134 = BOUNDP(YevalSastYmodule_runtime_data);
  if (T134 != YPfalse) {
    T133 = VARREF(YevalSastYmodule_runtime_data);
  } else {
    T133 = YPfalse;
  }
  T135 = fun_module_runtime_data_419;
  T132 = CALL2(1,VARREF(YPdefine_method),T133,T135);
  VARSET(YevalSastYmodule_runtime_data,T132);
  lit_523 = YPPsym((P)"module-runtime-data-setter");
  T136 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_runtime_data_setter_420 = YPmet(FUNCODEREF(fun_module_runtime_data_setter_420),LITREF(lit_523),T136,ENVNUL,PNUL,YPfalse);
  T139 = BOUNDP(YevalSastYmodule_runtime_data_setter);
  if (T139 != YPfalse) {
    T138 = VARREF(YevalSastYmodule_runtime_data_setter);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_module_runtime_data_setter_420;
  T137 = CALL2(1,VARREF(YPdefine_method),T138,T140);
  VARSET(YevalSastYmodule_runtime_data_setter,T137);
  T141 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_421 = YPmet(FUNCODEREF(fun_421),YPfalse,T141,ENVNUL,PNUL,YPfalse);
  T142 = fun_421;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_runtime_data),VARREF(YevalSastYmodule_runtime_data_setter),VARREF(YLanyG),T142);
  lit_524 = YPPsym((P)"module-transaction");
  T143 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_transaction_422 = YPmet(FUNCODEREF(fun_module_transaction_422),LITREF(lit_524),T143,ENVNUL,PNUL,YPfalse);
  T146 = BOUNDP(YevalSastYmodule_transaction);
  if (T146 != YPfalse) {
    T145 = VARREF(YevalSastYmodule_transaction);
  } else {
    T145 = YPfalse;
  }
  T147 = fun_module_transaction_422;
  T144 = CALL2(1,VARREF(YPdefine_method),T145,T147);
  VARSET(YevalSastYmodule_transaction,T144);
  lit_525 = YPPsym((P)"module-transaction-setter");
  T148 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_19)),YPPlist(2,VARREF(YevalSastYLtransactionG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_transaction_setter_423 = YPmet(FUNCODEREF(fun_module_transaction_setter_423),LITREF(lit_525),T148,ENVNUL,PNUL,YPfalse);
  T151 = BOUNDP(YevalSastYmodule_transaction_setter);
  if (T151 != YPfalse) {
    T150 = VARREF(YevalSastYmodule_transaction_setter);
  } else {
    T150 = YPfalse;
  }
  T152 = fun_module_transaction_setter_423;
  T149 = CALL2(1,VARREF(YPdefine_method),T150,T152);
  VARSET(YevalSastYmodule_transaction_setter,T149);
  T153 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_424 = YPmet(FUNCODEREF(fun_424),YPfalse,T153,ENVNUL,PNUL,YPfalse);
  T154 = fun_424;
  CALL5(1,VARREF(YPprop),VARREF(YevalSastYLmoduleG),VARREF(YevalSastYmodule_transaction),VARREF(YevalSastYmodule_transaction_setter),VARREF(YevalSastYLtransactionG),T154);
  VARSET(YevalSastYmodule_exports_setter,VARREF(YevalSastYPmodule_exports_setter));
  lit_526 = YPPsym((P)"module-exports");
  T155 = YPsig(YPPlist(1,LITREF(lit_125)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_module_exports_425 = YPmet(FUNCODEREF(fun_module_exports_425),LITREF(lit_526),T155,ENVNUL,PNUL,YPfalse);
  T158 = BOUNDP(YevalSastYmodule_exports);
  if (T158 != YPfalse) {
    T157 = VARREF(YevalSastYmodule_exports);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_module_exports_425;
  T156 = CALL2(1,VARREF(YPdefine_method),T157,T159);
  VARSET(YevalSastYmodule_exports,T156);
  lit_527 = YPPsym((P)"set-module-environments");
  lit_528 = YPPsym((P)"mod");
  lit_529 = YPPsym((P)"syntax-env");
  lit_530 = YPPsym((P)"target-env");
  T160 = YPsig(YPPlist(3,LITREF(lit_528),LITREF(lit_529),LITREF(lit_530)),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYset_module_environments = YPmet(FUNCODEREF(YevalSastYset_module_environments),LITREF(lit_527),T160,ENVNUL,PNUL,YPfalse);
  T161 = YevalSastYset_module_environments;
  VARSET(YevalSastYset_module_environments,T161);
  lit_531 = YPPsym((P)"do-module-loader-modules");
  lit_532 = YPPsym((P)"loader");
  T163 = YPsig(YPPlist(1,LITREF(lit_528)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_427 = YPmet(FUNCODEREF(fun_427),YPfalse,T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(YPPlist(2,LITREF(lit_132),LITREF(lit_532)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYdo_module_loader_modules = YPmet(FUNCODEREF(YevalSastYdo_module_loader_modules),LITREF(lit_531),T162,ENVNUL,PNUL,YPfalse);
  T164 = YevalSastYdo_module_loader_modules;
  VARSET(YevalSastYdo_module_loader_modules,T164);
  lit_533 = YPPsym((P)"module-loader-module-type");
  T165 = YPsig(YPPlist(1,LITREF(lit_532)),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_module_loader_module_type_429 = YPmet(FUNCODEREF(fun_module_loader_module_type_429),LITREF(lit_533),T165,ENVNUL,PNUL,YPfalse);
  T168 = BOUNDP(YevalSastYmodule_loader_module_type);
  if (T168 != YPfalse) {
    T167 = VARREF(YevalSastYmodule_loader_module_type);
  } else {
    T167 = YPfalse;
  }
  T169 = fun_module_loader_module_type_429;
  T166 = CALL2(1,VARREF(YPdefine_method),T167,T169);
  VARSET(YevalSastYmodule_loader_module_type,T166);
  lit_534 = YPPsym((P)"register-module!");
  lit_535 = YPPsym((P)"module-loader");
  T170 = YPsig(YPPlist(2,LITREF(lit_535),LITREF(lit_528)),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmodule_loaderG),Ynil);
  YevalSastYregister_moduleX = YPmet(FUNCODEREF(YevalSastYregister_moduleX),LITREF(lit_534),T170,ENVNUL,PNUL,YPfalse);
  T171 = YevalSastYregister_moduleX;
  VARSET(YevalSastYregister_moduleX,T171);
  lit_536 = YPPsym((P)"probe-module");
  T172 = YPsig(YPPlist(2,LITREF(lit_532),LITREF(lit_323)),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  YevalSastYprobe_module = YPmet(FUNCODEREF(YevalSastYprobe_module),LITREF(lit_536),T172,ENVNUL,PNUL,YPfalse);
  T173 = YevalSastYprobe_module;
  VARSET(YevalSastYprobe_module,T173);
  lit_537 = YPPsym((P)"load-and-register-module");
  lit_538 = YPsb((P)"  ");
  lit_539 = YPsb((P)"%s: error: Circular use of %s not allowed");
  lit_540 = YPsb((P)"%s[Loading module %s...\n");
  lit_541 = YPsb((P)"%s]\n");
  T176 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_432 = YPmet(FUNCODEREF(fun_432),YPfalse,T176,ENVNUL,PNUL,YPfalse);
  T175 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_433 = YPmet(FUNCODEREF(fun_433),YPfalse,T175,ENVNUL,PNUL,YPfalse);
  T174 = YPsig(YPPlist(2,LITREF(lit_532),LITREF(lit_323)),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  YevalSastYload_and_register_module = YPmet(FUNCODEREF(YevalSastYload_and_register_module),LITREF(lit_537),T174,ENVNUL,PNUL,YPfalse);
  T177 = YevalSastYload_and_register_module;
  VARSET(YevalSastYload_and_register_module,T177);
  lit_542 = YPPsym((P)"load-module");
  T179 = YPsig(YPPlist(2,LITREF(lit_532),LITREF(lit_323)),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  T178 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_542),T179,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSastYload_module,T178);
  lit_543 = YPPsym((P)"export-binding!");
  lit_544 = YPsb((P)"Tried to export %= and %= from %= as %=");
  T181 = CALL1(1,VARREF(YgooStypesYtE),YPfalse);
  T180 = YPsig(YPPlist(3,LITREF(lit_497),LITREF(lit_323),LITREF(lit_278)),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLbinding_nameG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)3),T181,Ynil);
  YevalSastYexport_bindingX = YPmet(FUNCODEREF(YevalSastYexport_bindingX),LITREF(lit_543),T180,ENVNUL,PNUL,YPfalse);
  T182 = YevalSastYexport_bindingX;
  VARSET(YevalSastYexport_bindingX,T182);
  lit_545 = YPPsym((P)"binding-native-to?");
  T183 = YPsig(YPPlist(2,LITREF(lit_278),LITREF(lit_497)),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YevalSastYbinding_native_toQ = YPmet(FUNCODEREF(YevalSastYbinding_native_toQ),LITREF(lit_545),T183,ENVNUL,PNUL,YPfalse);
  T184 = YevalSastYbinding_native_toQ;
  VARSET(YevalSastYbinding_native_toQ,T184);
  lit_546 = YPPsym((P)"report-undefined-global-bindings");
  lit_547 = YPsb((P)"%s: warning: undefined binding '%s'.\n");
  T186 = YPsig(YPPlist(1,LITREF(lit_278)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_437 = YPmet(FUNCODEREF(fun_437),YPfalse,T186,ENVNUL,PNUL,YPfalse);
  T185 = YPsig(YPPlist(1,LITREF(lit_528)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYreport_undefined_global_bindings = YPmet(FUNCODEREF(YevalSastYreport_undefined_global_bindings),LITREF(lit_546),T185,ENVNUL,PNUL,YPfalse);
  T187 = YevalSastYreport_undefined_global_bindings;
  VARSET(YevalSastYreport_undefined_global_bindings,T187);
  lit_548 = YPPsym((P)"compute-transitive-users");
  lit_549 = YPPsym((P)"modnames");
  lit_550 = YPPsym((P)"add-user");
  lit_551 = YPPsym((P)"uses-mod");
  T192 = YPsig(YPPlist(1,LITREF(lit_551)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_439 = YPmet(FUNCODEREF(fun_439),YPfalse,T192,ENVNUL,PNUL,YPfalse);
  T191 = YPsig(YPPlist(1,LITREF(lit_528)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_440 = YPmet(FUNCODEREF(fun_440),YPfalse,T191,ENVNUL,PNUL,YPfalse);
  T190 = YPsig(YPPlist(1,LITREF(lit_330)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_add_user_441 = YPmet(FUNCODEREF(fun_add_user_441),LITREF(lit_550),T190,ENVNUL,PNUL,YPfalse);
  T189 = YPsig(YPPlist(1,LITREF(lit_493)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_442 = YPmet(FUNCODEREF(fun_442),YPfalse,T189,ENVNUL,PNUL,YPfalse);
  T188 = YPsig(YPPlist(2,LITREF(lit_532),LITREF(lit_549)),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YevalSastYcompute_transitive_users = YPmet(FUNCODEREF(YevalSastYcompute_transitive_users),LITREF(lit_548),T188,ENVNUL,PNUL,YPfalse);
  T193 = YevalSastYcompute_transitive_users;
  VARSET(YevalSastYcompute_transitive_users,T193);
  lit_552 = YPPsym((P)"remove-module-internal!");
  T194 = YPsig(YPPlist(2,LITREF(lit_532),LITREF(lit_528)),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYremove_module_internalX = YPmet(FUNCODEREF(YevalSastYremove_module_internalX),LITREF(lit_552),T194,ENVNUL,PNUL,YPfalse);
  T195 = YevalSastYremove_module_internalX;
  VARSET(YevalSastYremove_module_internalX,T195);
  lit_553 = YPPsym((P)"remove-modules-by-name!");
  T198 = YPsig(YPPlist(1,LITREF(lit_330)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_445 = YPmet(FUNCODEREF(fun_445),YPfalse,T198,ENVNUL,PNUL,YPfalse);
  T197 = CALL1(1,VARREF(YgooStypesYtE),YPfalse);
  T196 = YPsig(YPPlist(2,LITREF(lit_532),LITREF(lit_549)),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLlstG)),YPfalse,YPint((P)2),T197,Ynil);
  YevalSastYremove_modules_by_nameX = YPmet(FUNCODEREF(YevalSastYremove_modules_by_nameX),LITREF(lit_553),T196,ENVNUL,PNUL,YPfalse);
  T199 = YevalSastYremove_modules_by_nameX;
  VARSET(YevalSastYremove_modules_by_nameX,T199);
  lit_554 = YPPsym((P)"module-name-to-relpath");
  T200 = YPsig(YPPlist(1,LITREF(lit_323)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YevalSastYmodule_name_to_relpath = YPmet(FUNCODEREF(YevalSastYmodule_name_to_relpath),LITREF(lit_554),T200,ENVNUL,PNUL,YPfalse);
  T201 = YevalSastYmodule_name_to_relpath;
  VARSET(YevalSastYmodule_name_to_relpath,T201);
  lit_555 = YPPsym((P)"install-initial-bindings");
  lit_556 = YPPlist(2,YPPsym((P)"seq"),YPPsym((P)"use"));
  T203 = YPsig(YPPlist(1,LITREF(lit_323)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_448 = YPmet(FUNCODEREF(fun_448),YPfalse,T203,ENVNUL,PNUL,YPfalse);
  T202 = YPsig(YPPlist(2,LITREF(lit_401),LITREF(lit_532)),YPPlist(2,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYinstall_initial_bindings = YPmet(FUNCODEREF(YevalSastYinstall_initial_bindings),LITREF(lit_555),T202,ENVNUL,PNUL,YPfalse);
  T204 = YevalSastYinstall_initial_bindings;
  VARSET(YevalSastYinstall_initial_bindings,T204);
  lit_557 = YPPsym((P)"fab-static-global-environment");
  lit_558 = YPPsym((P)"allow-foreign-names?");
  T205 = YPsig(YPPlist(3,LITREF(lit_497),LITREF(lit_535),LITREF(lit_558)),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLmodule_loaderG),VARREF(YLlogG)),YPfalse,YPint((P)3),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  YevalSastYfab_static_global_environment = YPmet(FUNCODEREF(YevalSastYfab_static_global_environment),LITREF(lit_557),T205,ENVNUL,PNUL,YPfalse);
  T206 = YevalSastYfab_static_global_environment;
  VARSET(YevalSastYfab_static_global_environment,T206);
  lit_559 = YPPsym((P)"fab-subset-environment");
  lit_560 = YPPsym((P)"src-module");
  lit_561 = YPPsym((P)"excluded");
  T208 = YPsig(YPPlist(2,LITREF(lit_323),LITREF(lit_278)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_451 = YPmet(FUNCODEREF(fun_451),YPfalse,T208,ENVNUL,PNUL,YPfalse);
  T207 = YPsig(YPPlist(3,LITREF(lit_497),LITREF(lit_560),LITREF(lit_561)),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLmoduleG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  YevalSastYfab_subset_environment = YPmet(FUNCODEREF(YevalSastYfab_subset_environment),LITREF(lit_559),T207,ENVNUL,PNUL,YPfalse);
  T209 = YevalSastYfab_subset_environment;
  VARSET(YevalSastYfab_subset_environment,T209);
  lit_562 = YPPsym((P)"<runtime-module-loader>");
  T213 = (P)YPpair(VARREF(YevalSastYLmodule_loaderG),Ynil);
  T212 = CALL2(1,VARREF(Yfab_class),LITREF(lit_562),T213);
  T211 = VARSET(YevalSastYLruntime_module_loaderG,T212);
  T210 = T211;
  return T210;
}

P YevalSastY___main_9___() {
  P tmpF2812;
  P tmpF2811;
  P tmpF2810;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66;
loop:
  VARSET(YevalSastYTnow_rt_envT,YPfalse);
  lit_563 = YPsb((P)"Unable to find module %s");
  T4 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_453 = YPmet(FUNCODEREF(fun_453),YPfalse,T4,ENVNUL,PNUL,YPfalse);
  T3 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_454 = YPmet(FUNCODEREF(fun_454),YPfalse,T3,ENVNUL,PNUL,YPfalse);
  T2 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_455 = YPmet(FUNCODEREF(fun_455),YPfalse,T2,ENVNUL,PNUL,YPfalse);
  T1 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_456 = YPmet(FUNCODEREF(fun_456),YPfalse,T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(2,LITREF(lit_532),LITREF(lit_323)),YPPlist(2,VARREF(YevalSastYLruntime_module_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  fun_load_module_457 = YPmet(FUNCODEREF(fun_load_module_457),LITREF(lit_542),T0,ENVNUL,PNUL,YPfalse);
  T7 = BOUNDP(YevalSastYload_module);
  if (T7 != YPfalse) {
    T6 = VARREF(YevalSastYload_module);
  } else {
    T6 = YPfalse;
  }
  T8 = fun_load_module_457;
  T5 = CALL2(1,VARREF(YPdefine_method),T6,T8);
  VARSET(YevalSastYload_module,T5);
  T9 = CALL1(1,VARREF(Ynew),VARREF(YevalSastYLruntime_module_loaderG));
  VARSET(YevalSastYTruntime_module_loaderT,T9);
  lit_564 = YPPsym((P)"runtime-module-loader");
  T10 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYruntime_module_loader = YPmet(FUNCODEREF(YevalSastYruntime_module_loader),LITREF(lit_564),T10,ENVNUL,PNUL,YPfalse);
  T11 = YevalSastYruntime_module_loader;
  VARSET(YevalSastYruntime_module_loader,T11);
  lit_565 = YPPsym((P)"runtime-module");
  T12 = YPsig(YPPlist(1,LITREF(lit_330)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYruntime_module = YPmet(FUNCODEREF(YevalSastYruntime_module),LITREF(lit_565),T12,ENVNUL,PNUL,YPfalse);
  T13 = YevalSastYruntime_module;
  VARSET(YevalSastYruntime_module,T13);
  lit_566 = YPPsym((P)"runtime-environment");
  T14 = YPsig(YPPlist(1,LITREF(lit_330)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYruntime_environment = YPmet(FUNCODEREF(YevalSastYruntime_environment),LITREF(lit_566),T14,ENVNUL,PNUL,YPfalse);
  T15 = YevalSastYruntime_environment;
  VARSET(YevalSastYruntime_environment,T15);
  lit_567 = YPPsym((P)"runtime-core-environment");
  T16 = YPsig(YPPlist(1,LITREF(lit_330)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYruntime_core_environment = YPmet(FUNCODEREF(YevalSastYruntime_core_environment),LITREF(lit_567),T16,ENVNUL,PNUL,YPfalse);
  T17 = YevalSastYruntime_core_environment;
  VARSET(YevalSastYruntime_core_environment,T17);
  lit_568 = YPPsym((P)"unchecked-runtime-environment");
  T18 = YPsig(YPPlist(1,LITREF(lit_330)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYunchecked_runtime_environment = YPmet(FUNCODEREF(YevalSastYunchecked_runtime_environment),LITREF(lit_568),T18,ENVNUL,PNUL,YPfalse);
  T19 = YevalSastYunchecked_runtime_environment;
  VARSET(YevalSastYunchecked_runtime_environment,T19);
  lit_569 = YPPsym((P)"reloader-do-create-module");
  lit_570 = YPPsym((P)"data");
  T20 = YPsig(YPPlist(2,LITREF(lit_330),LITREF(lit_570)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  YevalSastYreloader_do_create_module = YPmet(FUNCODEREF(YevalSastYreloader_do_create_module),LITREF(lit_569),T20,ENVNUL,PNUL,YPfalse);
  T21 = YevalSastYreloader_do_create_module;
  VARSET(YevalSastYreloader_do_create_module,T21);
  lit_571 = YPPsym((P)"reloader-do-use-module");
  lit_572 = YPPsym((P)"uses");
  T22 = YPsig(YPPlist(2,LITREF(lit_528),LITREF(lit_572)),YPPlist(2,VARREF(YevalSastYLmoduleG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_use_module = YPmet(FUNCODEREF(YevalSastYreloader_do_use_module),LITREF(lit_571),T22,ENVNUL,PNUL,YPfalse);
  T23 = YevalSastYreloader_do_use_module;
  VARSET(YevalSastYreloader_do_use_module,T23);
  lit_573 = YPPsym((P)"reloader-do-import");
  lit_574 = YPPsym((P)"from-mod");
  lit_575 = YPPsym((P)"original-name");
  lit_576 = YPsb((P)"Can't find %s from %s for %s\n");
  T24 = YPsig(YPPlist(4,LITREF(lit_528),LITREF(lit_323),LITREF(lit_574),LITREF(lit_575)),YPPlist(4,VARREF(YevalSastYLmoduleG),VARREF(YLstrG),VARREF(YevalSastYLmoduleG),VARREF(YLstrG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_import = YPmet(FUNCODEREF(YevalSastYreloader_do_import),LITREF(lit_573),T24,ENVNUL,PNUL,YPfalse);
  T25 = YevalSastYreloader_do_import;
  VARSET(YevalSastYreloader_do_import,T25);
  lit_577 = YPPsym((P)"process-module-data");
  T26 = YPsig(YPPlist(1,LITREF(lit_497)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYprocess_module_data = YPmet(FUNCODEREF(YevalSastYprocess_module_data),LITREF(lit_577),T26,ENVNUL,PNUL,YPfalse);
  T27 = YevalSastYprocess_module_data;
  VARSET(YevalSastYprocess_module_data,T27);
  lit_578 = YPPsym((P)"ensure-module-data");
  T28 = YPsig(YPPlist(1,LITREF(lit_497)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYensure_module_data = YPmet(FUNCODEREF(YevalSastYensure_module_data),LITREF(lit_578),T28,ENVNUL,PNUL,YPfalse);
  T29 = YevalSastYensure_module_data;
  VARSET(YevalSastYensure_module_data,T29);
  lit_579 = YPPsym((P)"reloader-do-runtime-binding");
  T30 = YPsig(YPPlist(3,LITREF(lit_528),LITREF(lit_323),LITREF(lit_422)),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YLstrG),VARREF(YLlocG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_runtime_binding = YPmet(FUNCODEREF(YevalSastYreloader_do_runtime_binding),LITREF(lit_579),T30,ENVNUL,PNUL,YPfalse);
  T31 = YevalSastYreloader_do_runtime_binding;
  VARSET(YevalSastYreloader_do_runtime_binding,T31);
  lit_580 = YPPsym((P)"reloader-do-other-binding");
  T32 = YPsig(YPPlist(2,LITREF(lit_528),LITREF(lit_323)),YPPlist(2,VARREF(YevalSastYLmoduleG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_other_binding = YPmet(FUNCODEREF(YevalSastYreloader_do_other_binding),LITREF(lit_580),T32,ENVNUL,PNUL,YPfalse);
  T33 = YevalSastYreloader_do_other_binding;
  VARSET(YevalSastYreloader_do_other_binding,T33);
  lit_581 = YPPsym((P)"reloader-do-export");
  lit_582 = YPPsym((P)"as-name");
  lit_583 = YPsb((P)"Can't find %s in %s\n");
  T34 = YPsig(YPPlist(3,LITREF(lit_528),LITREF(lit_323),LITREF(lit_582)),YPPlist(3,VARREF(YevalSastYLmoduleG),VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSastYreloader_do_export = YPmet(FUNCODEREF(YevalSastYreloader_do_export),LITREF(lit_581),T34,ENVNUL,PNUL,YPfalse);
  T35 = YevalSastYreloader_do_export;
  VARSET(YevalSastYreloader_do_export,T35);
  lit_584 = YPPsym((P)"reload-modules");
  T36 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYreload_modules = YPmet(FUNCODEREF(YevalSastYreload_modules),LITREF(lit_584),T36,ENVNUL,PNUL,YPfalse);
  T37 = YevalSastYreload_modules;
  VARSET(YevalSastYreload_modules,T37);
  lit_585 = YPPsym((P)"install-magic-bindings");
  T39 = YPsig(YPPlist(1,LITREF(lit_278)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_472 = YPmet(FUNCODEREF(fun_472),YPfalse,T39,ENVNUL,PNUL,YPfalse);
  T38 = YPsig(YPPlist(1,LITREF(lit_401)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinstall_magic_bindings = YPmet(FUNCODEREF(YevalSastYinstall_magic_bindings),LITREF(lit_585),T38,ENVNUL,PNUL,YPfalse);
  T40 = YevalSastYinstall_magic_bindings;
  VARSET(YevalSastYinstall_magic_bindings,T40);
  lit_586 = YPPsym((P)"reload-macros");
  T41 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYreload_macros = YPmet(FUNCODEREF(YevalSastYreload_macros),LITREF(lit_586),T41,ENVNUL,PNUL,YPfalse);
  T42 = YevalSastYreload_macros;
  VARSET(YevalSastYreload_macros,T42);
  lit_587 = YPPsym((P)"install-interpreter-hacks");
  T43 = YPsig(YPPlist(1,LITREF(lit_401)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinstall_interpreter_hacks = YPmet(FUNCODEREF(YevalSastYinstall_interpreter_hacks),LITREF(lit_587),T43,ENVNUL,PNUL,YPfalse);
  T44 = YevalSastYinstall_interpreter_hacks;
  VARSET(YevalSastYinstall_interpreter_hacks,T44);
  lit_588 = YPPsym((P)"init-runtime");
  T45 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYinit_runtime = YPmet(FUNCODEREF(YevalSastYinit_runtime),LITREF(lit_588),T45,ENVNUL,PNUL,YPfalse);
  T46 = YevalSastYinit_runtime;
  VARSET(YevalSastYinit_runtime,T46);
  lit_589 = YPPlist(5,YPPsym((P)"ct"),YPPsym((P)"ct-also"),YPPsym((P)"ds"),YPPsym((P)"use"),YPPsym((P)"export"));
  VARSET(YevalSastYsyntax_environment_excluded_bindings,LITREF(lit_589));
  lit_590 = YPPsym((P)"fab-syntax-environment");
  lit_591 = YPPsym((P)"goo");
  T47 = YPsig(YPPlist(1,LITREF(lit_497)),YPPlist(1,VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YevalSastYLstatic_global_environmentG),Ynil);
  YevalSastYfab_syntax_environment = YPmet(FUNCODEREF(YevalSastYfab_syntax_environment),LITREF(lit_590),T47,ENVNUL,PNUL,YPfalse);
  T48 = YevalSastYfab_syntax_environment;
  VARSET(YevalSastYfab_syntax_environment,T48);
  lit_592 = YPPsym((P)"fab-g2c-module");
  T49 = YPsig(YPPlist(2,LITREF(lit_532),LITREF(lit_323)),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  YevalSastYfab_g2c_module = YPmet(FUNCODEREF(YevalSastYfab_g2c_module),LITREF(lit_592),T49,ENVNUL,PNUL,YPfalse);
  T50 = YevalSastYfab_g2c_module;
  VARSET(YevalSastYfab_g2c_module,T50);
  lit_593 = YPPsym((P)"init-g2c-boot-environment");
  T51 = YPsig(YPPlist(1,LITREF(lit_401)),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinit_g2c_boot_environment = YPmet(FUNCODEREF(YevalSastYinit_g2c_boot_environment),LITREF(lit_593),T51,ENVNUL,PNUL,YPfalse);
  T52 = YevalSastYinit_g2c_boot_environment;
  VARSET(YevalSastYinit_g2c_boot_environment,T52);
  lit_594 = YPPsym((P)"init-g2c-regular-environment");
  T53 = YPsig(YPPlist(2,LITREF(lit_401),LITREF(lit_532)),YPPlist(2,VARREF(YevalSastYLstatic_global_environmentG),VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYinit_g2c_regular_environment = YPmet(FUNCODEREF(YevalSastYinit_g2c_regular_environment),LITREF(lit_594),T53,ENVNUL,PNUL,YPfalse);
  T54 = YevalSastYinit_g2c_regular_environment;
  VARSET(YevalSastYinit_g2c_regular_environment,T54);
  lit_595 = YPPsym((P)"init-ast");
  T55 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYinit_ast = YPmet(FUNCODEREF(YevalSastYinit_ast),LITREF(lit_595),T55,ENVNUL,PNUL,YPfalse);
  T56 = YevalSastYinit_ast;
  VARSET(YevalSastYinit_ast,T56);
  lit_596 = YPPsym((P)"do-static-global-bindings");
  T58 = YPsig(YPPlist(1,LITREF(lit_401)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_482 = YPmet(FUNCODEREF(fun_loop_482),LITREF(lit_143),T58,ENVNUL,PNUL,YPfalse);
  T57 = YPsig(YPPlist(2,LITREF(lit_132),LITREF(lit_401)),YPPlist(2,VARREF(YLfunG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYdo_static_global_bindings = YPmet(FUNCODEREF(YevalSastYdo_static_global_bindings),LITREF(lit_596),T57,ENVNUL,PNUL,YPfalse);
  T59 = YevalSastYdo_static_global_bindings;
  VARSET(YevalSastYdo_static_global_bindings,T59);
  lit_597 = YPPsym((P)"do-named-static-global-bindings");
  T61 = YPsig(YPPlist(1,LITREF(lit_401)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_484 = YPmet(FUNCODEREF(fun_loop_484),LITREF(lit_143),T61,ENVNUL,PNUL,YPfalse);
  T60 = YPsig(YPPlist(2,LITREF(lit_132),LITREF(lit_401)),YPPlist(2,VARREF(YLfunG),VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYdo_named_static_global_bindings = YPmet(FUNCODEREF(YevalSastYdo_named_static_global_bindings),LITREF(lit_597),T60,ENVNUL,PNUL,YPfalse);
  T62 = YevalSastYdo_named_static_global_bindings;
  VARSET(YevalSastYdo_named_static_global_bindings,T62);
  tmpF2810 = YPfalse;
  if (tmpF2810 != YPfalse) {
    T63 = VARREF(YevalSastYast_evaluate);
  } else {
    T63 = YPfalse;
  }
  tmpF2811 = YPfalse;
  if (tmpF2811 != YPfalse) {
    T64 = VARREF(YevalSastYinit_environment_for_eval);
  } else {
    T64 = YPfalse;
  }
  tmpF2812 = YPfalse;
  if (tmpF2812 != YPfalse) {
    T65 = VARREF(YevalSastYload_in);
  } else {
    T65 = YPfalse;
  }
  T66 = YPfalse;
  return T66;
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
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSmap;

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
  {"%i+", &module_info_gooSboot, "%i+"},
  {"dependency-or", &module_info_evalSdependency, "dependency-or"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"%load", &module_info_gooSsystem, "%load"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"sexpr-assignment-variable", &module_info_evalSsyntax, "sexpr-assignment-variable"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"sexpr-make-anonymous-method", &module_info_evalSsyntax, "sexpr-make-anonymous-method"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"asin", &module_info_gooSmath, "asin"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"items", &module_info_gooScolsScol, "items"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"<=", &module_info_gooSmag, "<="},
  {"compose", &module_info_gooSruntime, "compose"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"rem", &module_info_gooSmath, "rem"},
  {"sexpr-syntax-if-then", &module_info_evalSsyntax, "sexpr-syntax-if-then"},
  {"sexpr-prop-init", &module_info_evalSsyntax, "sexpr-prop-init"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"$sexpr-iterate-tag", &module_info_evalSsyntax, "$sexpr-iterate-tag"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"invalidate-dependent", &module_info_evalSdependency, "invalidate-dependent"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"t=", &module_info_gooStypes, "t="},
  {"try", &module_info_gooSboot, "try"},
  {"sexpr-define-class-parents", &module_info_evalSsyntax, "sexpr-define-class-parents"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"sexpr-text-of-quotation", &module_info_evalSsyntax, "sexpr-text-of-quotation"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"sexpr-if-else", &module_info_evalSsyntax, "sexpr-if-else"},
  {"sexpr-unquote?", &module_info_evalSsyntax, "sexpr-unquote?"},
  {"%str", &module_info_gooSboot, "%str"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"sexpr-unwind-protect-protected-form", &module_info_evalSsyntax, "sexpr-unwind-protect-protected-form"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"sexpr-assignment-value", &module_info_evalSsyntax, "sexpr-assignment-value"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"dependency-empty?", &module_info_evalSdependency, "dependency-empty?"},
  {"|", &module_info_gooSmath, "|"},
  {"do", &module_info_gooSmacros, "do"},
  {"sexpr-operator", &module_info_evalSsyntax, "sexpr-operator"},
  {"sexpr-syntax-definition-variable", &module_info_evalSsyntax, "sexpr-syntax-definition-variable"},
  {"<dependency-type>", &module_info_evalSdependency, "<dependency-type>"},
  {"sexpr-function-signature", &module_info_evalSsyntax, "sexpr-function-signature"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"sexpr-make-method", &module_info_evalSsyntax, "sexpr-make-method"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"sexpr-let->combination", &module_info_evalSsyntax, "sexpr-let->combination"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"/", &module_info_gooSmath, "/"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"$sexpr-locals-tag", &module_info_evalSsyntax, "$sexpr-locals-tag"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"%im", &module_info_gooSboot, "%im"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"port2str", &module_info_gooSioSport, "port2str"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"sexpr-variable?", &module_info_evalSsyntax, "sexpr-variable?"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"error", &module_info_gooSboot, "error"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"map", &module_info_gooSmacros, "map"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"sexpr-isa-parent", &module_info_evalSsyntax, "sexpr-isa-parent"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"into", &module_info_gooScolsScol, "into"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"$sexpr-define-method-tag", &module_info_evalSsyntax, "$sexpr-define-method-tag"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"@==", &module_info_gooSboot, "@=="},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"+", &module_info_gooSmath, "+"},
  {"~==", &module_info_gooSmath, "~=="},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"$sexpr-method-tag", &module_info_evalSsyntax, "$sexpr-method-tag"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%get", &module_info_gooSboot, "%get"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"while", &module_info_gooSmacros, "while"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"open", &module_info_gooSioSport, "open"},
  {"def", &module_info_gooSboot, "def"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"sexpr-operands", &module_info_evalSsyntax, "sexpr-operands"},
  {"spread", &module_info_gooSruntime, "spread"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"$sexpr-define-tag", &module_info_evalSsyntax, "$sexpr-define-tag"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"quote", &module_info_gooSboot, "quote"},
  {"pe-msg", &module_info_gooSioSwrite, "pe-msg"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"sexpr-fab-setter", &module_info_evalSsyntax, "sexpr-fab-setter"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"add", &module_info_gooScolsScol, "add"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"round", &module_info_gooSmath, "round"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"==", &module_info_gooSmacros, "=="},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"rep", &module_info_gooSboot, "rep"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"sexpr-forward-primitive?", &module_info_evalSsyntax, "sexpr-forward-primitive?"},
  {"ds", &module_info_gooSboot, "ds"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"$sexpr-if-tag", &module_info_evalSsyntax, "$sexpr-if-tag"},
  {"nul", &module_info_gooSboot, "nul"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"sexpr-make-macro-function", &module_info_evalSsyntax, "sexpr-make-macro-function"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"sexpr-prop-type", &module_info_evalSsyntax, "sexpr-prop-type"},
  {"sexpr-variable-type", &module_info_evalSsyntax, "sexpr-variable-type"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"round/", &module_info_gooSmath, "round/"},
  {"$sexpr-isa-tag", &module_info_evalSsyntax, "$sexpr-isa-tag"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"and", &module_info_gooSmacros, "and"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"when", &module_info_gooSmacros, "when"},
  {"del", &module_info_gooScolsScol, "del"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"$sexpr-define-generic-tag", &module_info_evalSsyntax, "$sexpr-define-generic-tag"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"case", &module_info_gooSmacros, "case"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"logn", &module_info_gooSmath, "logn"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"$sexpr-bind-exit-tag", &module_info_evalSsyntax, "$sexpr-bind-exit-tag"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"use", &module_info_gooSboot, "use"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"in", &module_info_gooSioSport, "in"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"$optimizaton-dependencies", &module_info_evalSdependency, "$optimizaton-dependencies"},
  {"sexpr-method-signature", &module_info_evalSsyntax, "sexpr-method-signature"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"max", &module_info_gooSmag, "max"},
  {"sexpr-loc-bound-signatures", &module_info_evalSsyntax, "sexpr-loc-bound-signatures"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"sexpr-isa-init-props", &module_info_evalSsyntax, "sexpr-isa-init-props"},
  {"dm", &module_info_gooSboot, "dm"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"log", &module_info_gooSmath, "log"},
  {"sexpr-definition-value", &module_info_evalSsyntax, "sexpr-definition-value"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"@len", &module_info_gooSboot, "@len"},
  {"head", &module_info_gooSboot, "head"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"add-goo-personal-root-path", &module_info_gooSsystem, "add-goo-personal-root-path"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"sexpr-variable-name", &module_info_evalSsyntax, "sexpr-variable-name"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"even?", &module_info_gooSmath, "even?"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"sexpr-signature-value", &module_info_evalSsyntax, "sexpr-signature-value"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"$sexpr-define-function-tag", &module_info_evalSsyntax, "$sexpr-define-function-tag"},
  {"sexpr-method-body", &module_info_evalSsyntax, "sexpr-method-body"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%su", &module_info_gooSboot, "%su"},
  {"&", &module_info_gooSmath, "&"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"detach-dependent", &module_info_evalSdependency, "detach-dependent"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"dependency-and", &module_info_evalSdependency, "dependency-and"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"cos", &module_info_gooSmath, "cos"},
  {"sexpr-def-variable", &module_info_evalSsyntax, "sexpr-def-variable"},
  {"sexpr-syntax-if-pattern", &module_info_evalSsyntax, "sexpr-syntax-if-pattern"},
  {"sexpr-sequence->begin", &module_info_evalSsyntax, "sexpr-sequence->begin"},
  {"t?", &module_info_gooStypes, "t?"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"if", &module_info_gooSboot, "if"},
  {"loc", &module_info_gooSboot, "loc"},
  {"dss", &module_info_gooSboot, "dss"},
  {"always", &module_info_gooSruntime, "always"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"dv", &module_info_gooSboot, "dv"},
  {"mif", &module_info_gooSboot, "mif"},
  {"$sexpr-define-class-tag", &module_info_evalSsyntax, "$sexpr-define-class-tag"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"$sexpr-monitor-tag", &module_info_evalSsyntax, "$sexpr-monitor-tag"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"abs", &module_info_gooSmath, "abs"},
  {"1+", &module_info_gooSmath, "1+"},
  {"sexpr-monitor-expand", &module_info_evalSsyntax, "sexpr-monitor-expand"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"mod", &module_info_gooSmath, "mod"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"dependency-includes-all?", &module_info_evalSdependency, "dependency-includes-all?"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"msg*", &module_info_gooSioSwrite, "msg*"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"fab-map", &module_info_gooScolsSmap, "fab-map"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"nil", &module_info_gooSboot, "nil"},
  {"sexpr-prop-name", &module_info_evalSsyntax, "sexpr-prop-name"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"len", &module_info_gooStypes, "len"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"sexpr-loc-raw-body", &module_info_evalSsyntax, "sexpr-loc-raw-body"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"read", &module_info_gooSruntime, "read"},
  {"sexpr-define-class?", &module_info_evalSsyntax, "sexpr-define-class?"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"acos", &module_info_gooSmath, "acos"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"display", &module_info_gooSioSwrite, "display"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"$sexpr-syntax-if-tag", &module_info_evalSsyntax, "$sexpr-syntax-if-tag"},
  {"$sexpr-prop-tag", &module_info_evalSsyntax, "$sexpr-prop-tag"},
  {"tup", &module_info_gooSboot, "tup"},
  {"find-dependency", &module_info_evalSdependency, "find-dependency"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"sexpr-function-definition-value", &module_info_evalSsyntax, "sexpr-function-definition-value"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"app", &module_info_gooSmacros, "app"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"sexpr-syntax-definition-value", &module_info_evalSsyntax, "sexpr-syntax-definition-value"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"$expansion-parse-dependency", &module_info_evalSdependency, "$expansion-parse-dependency"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"sexpr-fab-getter", &module_info_evalSsyntax, "sexpr-fab-getter"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"out", &module_info_gooSioSport, "out"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"sexpr-make-begin", &module_info_evalSsyntax, "sexpr-make-begin"},
  {"~=", &module_info_gooSmath, "~="},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"lst", &module_info_gooSboot, "lst"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"export", &module_info_gooSboot, "export"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"*", &module_info_gooSmath, "*"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"eval", &module_info_evalSsyntax, "eval"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {">>", &module_info_gooSmath, ">>"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"let", &module_info_gooSboot, "let"},
  {"@+", &module_info_gooSboot, "@+"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"sexpr-function-definition-variable", &module_info_evalSsyntax, "sexpr-function-definition-variable"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"min", &module_info_gooSmag, "min"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"sexpr-make-application", &module_info_evalSsyntax, "sexpr-make-application"},
  {"$e", &module_info_gooSmath, "$e"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"sexpr-if-then", &module_info_evalSsyntax, "sexpr-if-then"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"$sexpr-let-tag", &module_info_evalSsyntax, "$sexpr-let-tag"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"for", &module_info_gooSmacros, "for"},
  {"$sexpr-quasiquote-tag", &module_info_evalSsyntax, "$sexpr-quasiquote-tag"},
  {"match", &module_info_gooSmacros, "match"},
  {"sexpr-prop-init-var", &module_info_evalSsyntax, "sexpr-prop-init-var"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"seq", &module_info_gooSboot, "seq"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"sexpr-syntax-if-else", &module_info_evalSsyntax, "sexpr-syntax-if-else"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"dp", &module_info_gooSboot, "dp"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"-", &module_info_gooSmath, "-"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"find", &module_info_gooScolsScol, "find"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"*goo-build-root*", &module_info_gooSsystem, "*goo-build-root*"},
  {"ct", &module_info_gooSboot, "ct"},
  {"sexpr-bind-pattern-variables", &module_info_evalSsyntax, "sexpr-bind-pattern-variables"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"sexpr-isa-prop-inits", &module_info_evalSsyntax, "sexpr-isa-prop-inits"},
  {"sexpr-block-body", &module_info_evalSsyntax, "sexpr-block-body"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"pow", &module_info_gooSmath, "pow"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"$sexpr-set-tag", &module_info_evalSsyntax, "$sexpr-set-tag"},
  {"invalidate-dependents", &module_info_evalSdependency, "invalidate-dependents"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"as", &module_info_gooStypes, "as"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"t*", &module_info_gooStypes, "t*"},
  {"find-goo-file-at", &module_info_gooSsystem, "find-goo-file-at"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"put", &module_info_gooSioSport, "put"},
  {"sexpr-unquote-splicing?", &module_info_evalSsyntax, "sexpr-unquote-splicing?"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"^", &module_info_gooSmath, "^"},
  {"df", &module_info_gooSboot, "df"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"@<", &module_info_gooSboot, "@<"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"unless", &module_info_gooSmacros, "unless"},
  {">", &module_info_gooSmag, ">"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"$sexpr-quote-tag", &module_info_evalSsyntax, "$sexpr-quote-tag"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_evalSsyntax, "sexpr-unwind-protect-cleanup-forms"},
  {"$sexpr-define-syntax-tag", &module_info_evalSsyntax, "$sexpr-define-syntax-tag"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"sexpr-prop-init?", &module_info_evalSsyntax, "sexpr-prop-init?"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"get", &module_info_gooSioSport, "get"},
  {"*goo-personal-root*", &module_info_gooSsystem, "*goo-personal-root*"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"$sexpr-def-tag", &module_info_evalSsyntax, "$sexpr-def-tag"},
  {"$value-optimization-dependency", &module_info_evalSdependency, "$value-optimization-dependency"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%put", &module_info_gooSboot, "%put"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"add-goo-root-path", &module_info_gooSsystem, "add-goo-root-path"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"esc", &module_info_gooSboot, "esc"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"sexpr-definition-variable", &module_info_evalSsyntax, "sexpr-definition-variable"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"dg", &module_info_gooSboot, "dg"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"$all-dependency-types", &module_info_evalSdependency, "$all-dependency-types"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"<", &module_info_gooSmag, "<"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"dl", &module_info_gooSboot, "dl"},
  {">=", &module_info_gooSmag, ">="},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"new", &module_info_gooSboot, "new"},
  {"sexpr-def-value", &module_info_evalSsyntax, "sexpr-def-value"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"so-load", &module_info_gooSsystem, "so-load"},
  {"t+", &module_info_gooStypes, "t+"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"until", &module_info_gooSmacros, "until"},
  {"sexpr-loc-bound-bodies", &module_info_evalSsyntax, "sexpr-loc-bound-bodies"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"sexpr-expand-backquote", &module_info_evalSsyntax, "sexpr-expand-backquote"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"gooc-filename", &module_info_gooSsystem, "gooc-filename"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"floor", &module_info_gooSmath, "floor"},
  {"dc", &module_info_gooSboot, "dc"},
  {"sexpr-isa-init-values", &module_info_evalSsyntax, "sexpr-isa-init-values"},
  {"$parse-dependencies", &module_info_evalSdependency, "$parse-dependencies"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"1-", &module_info_gooSmath, "1-"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"=", &module_info_gooSmath, "="},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"sexpr-fab-setter-name", &module_info_evalSsyntax, "sexpr-fab-setter-name"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"sexpr-iterate->loc", &module_info_evalSsyntax, "sexpr-iterate->loc"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"<dependable>", &module_info_evalSdependency, "<dependable>"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"<dependent>", &module_info_evalSdependency, "<dependent>"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"sin", &module_info_gooSmath, "sin"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"dependency-includes-any?", &module_info_evalSdependency, "dependency-includes-any?"},
  {"~", &module_info_gooSmath, "~"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"%compile", &module_info_gooSsystem, "%compile"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"not", &module_info_gooSboot, "not"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"sexpr-function-body", &module_info_evalSsyntax, "sexpr-function-body"},
  {"$sexpr-begin-tag", &module_info_evalSsyntax, "$sexpr-begin-tag"},
  {"$sexpr-macro-expand-tag", &module_info_evalSsyntax, "$sexpr-macro-expand-tag"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"atan", &module_info_gooSmath, "atan"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"op", &module_info_gooSmacros, "op"},
  {"sexpr-syntax-if-value", &module_info_evalSsyntax, "sexpr-syntax-if-value"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"sexpr-loc-bound-names", &module_info_evalSsyntax, "sexpr-loc-bound-names"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"now", &module_info_gooScolsScol, "now"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"$name-parse-dependency", &module_info_evalSdependency, "$name-parse-dependency"},
  {"$sexpr-unwind-protect-tag", &module_info_evalSsyntax, "$sexpr-unwind-protect-tag"},
  {"t<", &module_info_gooStypes, "t<"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"tan", &module_info_gooSmath, "tan"},
  {"sexpr-prop-owner", &module_info_evalSsyntax, "sexpr-prop-owner"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"recurring-write", &module_info_gooSioSwrite, "recurring-write"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"*module-search-path*", &module_info_gooSsystem, "*module-search-path*"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"or", &module_info_gooSmacros, "or"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"$empty-dependency", &module_info_evalSdependency, "$empty-dependency"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"sexpr-if-test", &module_info_evalSsyntax, "sexpr-if-test"},
  {"tail", &module_info_gooSboot, "tail"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"close", &module_info_gooSioSport, "close"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"sexpr-block-name", &module_info_evalSsyntax, "sexpr-block-name"},
  {"find-goo-file-in-path", &module_info_gooSsystem, "find-goo-file-in-path"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"set", &module_info_gooSboot, "set"},
  {"log-dependency", &module_info_evalSdependency, "log-dependency"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"sexpr-def?", &module_info_evalSsyntax, "sexpr-def?"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"expand-pattern", &YevalSastYexpand_pattern},
  {"environment-uses-modules-setter", &YevalSastYenvironment_uses_modules_setter},
  {"objectify-function", &YevalSastYobjectify_function},
  {"find-environment-module", &YevalSastYfind_environment_module},
  {"define-magic-binding", NULL},
  {"function-temporaries-setter", &YevalSastYfunction_temporaries_setter},
  {"application-tail?", &YevalSastYapplication_tailQ},
  {"module-data-processed?-setter", &YevalSastYmodule_data_processedQ_setter},
  {"set-module-environments", &YevalSastYset_module_environments},
  {"function-body", &YevalSastYfunction_body},
  {"function-body-setter", &YevalSastYfunction_body_setter},
  {"objectify-error", &YevalSastYobjectify_error},
  {"monitor-info", &YevalSastYmonitor_info},
  {"signature-nary?", &YevalSastYsignature_naryQ},
  {"function-index", &YevalSastYfunction_index},
  {"module-name-setter", &YevalSastYmodule_name_setter},
  {"application-known?-setter", &YevalSastYapplication_knownQ_setter},
  {"special-def", &YevalSastYspecial_def},
  {"reference-frame-offset-setter", &YevalSastYreference_frame_offset_setter},
  {"binding-mutable?-setter", &YevalSastYbinding_mutableQ_setter},
  {"special-let", &YevalSastYspecial_let},
  {"special-bind-exit", &YevalSastYspecial_bind_exit},
  {"$sexpr-optionals-type-name", &YevalSastYDsexpr_optionals_type_name},
  {"special-bound?", &YevalSastYspecial_boundQ},
  {"module-exports-setter", &YevalSastYmodule_exports_setter},
  {"$fab-list-empty", &YevalSastYDfab_list_empty},
  {"signature-arity-setter", &YevalSastYsignature_arity_setter},
  {"bind-exit-main-fun", &YevalSastYbind_exit_main_fun},
  {"<ast-function>", &YevalSastYLast_functionG},
  {"foreign-name?", &YevalSastYforeign_nameQ},
  {"signature-bindings-setter", &YevalSastYsignature_bindings_setter},
  {"---main-3---", NULL},
  {"signature-nary?-setter", &YevalSastYsignature_naryQ_setter},
  {"<locals>", &YevalSastYLlocalsG},
  {"locals-bindings", &YevalSastYlocals_bindings},
  {"def-programs", NULL},
  {"compile-time-program-setter", &YevalSastYcompile_time_program_setter},
  {"objectify-use/export-module", &YevalSastYobjectify_useSexport_module},
  {"special-define-method", &YevalSastYspecial_define_method},
  {"transaction-dependents", &YevalSastYtransaction_dependents},
  {"function-display-name", &YevalSastYfunction_display_name},
  {"function-source-setter", &YevalSastYfunction_source_setter},
  {"---main-1---", NULL},
  {"<functions>", &YevalSastYLfunctionsG},
  {"binding-inferred-type-setter", &YevalSastYbinding_inferred_type_setter},
  {"binding-mutable?", &YevalSastYbinding_mutableQ},
  {"signature-value-setter", &YevalSastYsignature_value_setter},
  {"function-debug-name", &YevalSastYfunction_debug_name},
  {"with-subtransaction", NULL},
  {"objectify-application", &YevalSastYobjectify_application},
  {"$sexpr-use-module-tag", &YevalSastYDsexpr_use_module_tag},
  {"special-use/export-module", &YevalSastYspecial_useSexport_module},
  {"fix-let-body", &YevalSastYfix_let_body},
  {"application-function", &YevalSastYapplication_function},
  {"special-define-primitive", &YevalSastYspecial_define_primitive},
  {"monitor-handler", &YevalSastYmonitor_handler},
  {"export-binding!", &YevalSastYexport_bindingX},
  {"unwind-protect-protected-thunk-setter", &YevalSastYunwind_protect_protected_thunk_setter},
  {"module-mangled-name", &YevalSastYmodule_mangled_name},
  {"*current-dependent*", &YevalSastYTcurrent_dependentT},
  {"environment-bindings", &YevalSastYenvironment_bindings},
  {"reloader-do-runtime-binding", &YevalSastYreloader_do_runtime_binding},
  {"module-syntax-environment", &YevalSastYmodule_syntax_environment},
  {"*macro-tracing?*", &YevalSastYTmacro_tracingQT},
  {"r-extend*", &YevalSastYr_extendT},
  {"reference-called-function?-setter", &YevalSastYreference_called_functionQ_setter},
  {"binding-inferred-type", &YevalSastYbinding_inferred_type},
  {"$sequential-empty", &YevalSastYDsequential_empty},
  {"objectify-generic-definition", &YevalSastYobjectify_generic_definition},
  {"functions", &YevalSastYfunctions},
  {"reloader-do-other-binding", &YevalSastYreloader_do_other_binding},
  {"binding-kind", &YevalSastYbinding_kind},
  {"binding-index-setter", &YevalSastYbinding_index_setter},
  {"process-nary-closed-application", &YevalSastYprocess_nary_closed_application},
  {"binding-free?", &YevalSastYbinding_freeQ},
  {"special-macro-expand", &YevalSastYspecial_macro_expand},
  {"<binding-name>", &YevalSastYLbinding_nameG},
  {"<runtime-reference>", &YevalSastYLruntime_referenceG},
  {"<program>", &YevalSastYLprogramG},
  {"reloader-do-create-module", &YevalSastYreloader_do_create_module},
  {"monitor-type-setter", &YevalSastYmonitor_type_setter},
  {"$sexpr-compile-time-also-tag", &YevalSastYDsexpr_compile_time_also_tag},
  {"module-runtime-data", &YevalSastYmodule_runtime_data},
  {"objectify-function-definition", &YevalSastYobjectify_function_definition},
  {"<ast-signature>", &YevalSastYLast_signatureG},
  {"<global-assignment>", &YevalSastYLglobal_assignmentG},
  {"expand-bind-element", &YevalSastYexpand_bind_element},
  {"application-arguments-setter", &YevalSastYapplication_arguments_setter},
  {"special-iterate", &YevalSastYspecial_iterate},
  {"bind-exit-main-fun-setter", &YevalSastYbind_exit_main_fun_setter},
  {"ast-define-binding", &YevalSastYast_define_binding},
  {"special-begin", &YevalSastYspecial_begin},
  {"alternative-consequent", &YevalSastYalternative_consequent},
  {"%module-exports", &YevalSastYPmodule_exports},
  {"$sexpr-bound?-tag", &YevalSastYDsexpr_boundQ_tag},
  {"special-compile-time-also", &YevalSastYspecial_compile_time_also},
  {"environment-module-setter", &YevalSastYenvironment_module_setter},
  {"special-prop", &YevalSastYspecial_prop},
  {"special-method", &YevalSastYspecial_method},
  {"monitor-main-thunk", &YevalSastYmonitor_main_thunk},
  {"<global-box>", &YevalSastYLglobal_boxG},
  {"program-register-setter", &YevalSastYprogram_register_setter},
  {"environment-module", &YevalSastYenvironment_module},
  {"ast-evaluate", &YevalSastYast_evaluate},
  {"function-free", &YevalSastYfunction_free},
  {"function-registers", &YevalSastYfunction_registers},
  {"---main-0---", NULL},
  {"arguments", &YevalSastYarguments},
  {"runtime-core-environment", &YevalSastYruntime_core_environment},
  {"objectify-bound?", &YevalSastYobjectify_boundQ},
  {"frame-bindings", &YevalSastYframe_bindings},
  {"---main-9---", NULL},
  {"locals-functions-setter", &YevalSastYlocals_functions_setter},
  {"signature-arity", &YevalSastYsignature_arity},
  {"<runtime-assignment>", &YevalSastYLruntime_assignmentG},
  {"constant-index", &YevalSastYconstant_index},
  {"<application>", &YevalSastYLapplicationG},
  {"as-lst", &YevalSastYas_lst},
  {"function-data-refs", &YevalSastYfunction_data_refs},
  {"<ast-method>", &YevalSastYLast_methodG},
  {"install-interpreter-hacks", &YevalSastYinstall_interpreter_hacks},
  {"alternative-alternant-setter", &YevalSastYalternative_alternant_setter},
  {"special-compile-time", &YevalSastYspecial_compile_time},
  {"special-define-class", &YevalSastYspecial_define_class},
  {"function-signature", &YevalSastYfunction_signature},
  {"*current-subtransaction*", &YevalSastYTcurrent_subtransactionT},
  {"environment-module-loader", &YevalSastYenvironment_module_loader},
  {"special-%raw", &YevalSastYspecial_Praw},
  {"function-debug-name-setter", &YevalSastYfunction_debug_name_setter},
  {"fix-let-body-setter", &YevalSastYfix_let_body_setter},
  {"expand-bind-list", &YevalSastYexpand_bind_list},
  {"magic-bindings", &YevalSastYmagic_bindings},
  {"roll-back-transaction", &YevalSastYroll_back_transaction},
  {"binding-dotted?-setter", &YevalSastYbinding_dottedQ_setter},
  {"fix-let-bindings", &YevalSastYfix_let_bindings},
  {"ftype", &YevalSastYftype},
  {"assignment-binding", &YevalSastYassignment_binding},
  {"install-magic-bindings", &YevalSastYinstall_magic_bindings},
  {"program-type", &YevalSastYprogram_type},
  {"fab-subset-environment", &YevalSastYfab_subset_environment},
  {"program-type-setter", &YevalSastYprogram_type_setter},
  {"unwind-protect-cleanup-thunk-setter", &YevalSastYunwind_protect_cleanup_thunk_setter},
  {"<predefined-reference>", &YevalSastYLpredefined_referenceG},
  {"fix-let-arguments-setter", &YevalSastYfix_let_arguments_setter},
  {"module-name", &YevalSastYmodule_name},
  {"alternative-condition-setter", &YevalSastYalternative_condition_setter},
  {"<bind-exit>", &YevalSastYLbind_exitG},
  {"ast-macro-expand", &YevalSastYast_macro_expand},
  {"<bound?>", &YevalSastYLboundQG},
  {"import-global!", &YevalSastYimport_globalX},
  {"special-quasiquote", &YevalSastYspecial_quasiquote},
  {"transaction-empty?", &YevalSastYtransaction_emptyQ},
  {"fab-syntax-environment", &YevalSastYfab_syntax_environment},
  {"init-g2c-regular-environment", &YevalSastYinit_g2c_regular_environment},
  {"monitor-handler-setter", &YevalSastYmonitor_handler_setter},
  {"signature-bindings", &YevalSastYsignature_bindings},
  {"<ast-generic-definition>", &YevalSastYLast_generic_definitionG},
  {"objectify-unwind-protect", &YevalSastYobjectify_unwind_protect},
  {"signature-specs-setter", &YevalSastYsignature_specs_setter},
  {"objectify-foreign-reference", &YevalSastYobjectify_foreign_reference},
  {"signature-specs", &YevalSastYsignature_specs},
  {"<constant>", &YevalSastYLconstantG},
  {"<regular-application>", &YevalSastYLregular_applicationG},
  {"$free-environment-empty", &YevalSastYDfree_environment_empty},
  {"monitor-info-setter", &YevalSastYmonitor_info_setter},
  {"function-source", &YevalSastYfunction_source},
  {"syntax-environment-excluded-bindings", &YevalSastYsyntax_environment_excluded_bindings},
  {"fab-static-global-environment", &YevalSastYfab_static_global_environment},
  {"signature-value", &YevalSastYsignature_value},
  {"do-module-loader-modules", &YevalSastYdo_module_loader_modules},
  {"module-loader-stack-setter", &YevalSastYmodule_loader_stack_setter},
  {"report-undefined-global-bindings", &YevalSastYreport_undefined_global_bindings},
  {"module-data-processed?", &YevalSastYmodule_data_processedQ},
  {"assignment-form", &YevalSastYassignment_form},
  {"special-quote", &YevalSastYspecial_quote},
  {"<runtime-module-loader>", &YevalSastYLruntime_module_loaderG},
  {"binding-mangled-name", &YevalSastYbinding_mangled_name},
  {"objectify-alternative", &YevalSastYobjectify_alternative},
  {"unwind-protect-protected-thunk", &YevalSastYunwind_protect_protected_thunk},
  {"expand-bind-list*", &YevalSastYexpand_bind_listT},
  {"reloader-do-export", &YevalSastYreloader_do_export},
  {"fab-list", &YevalSastYfab_list},
  {"find-syntax-environment", &YevalSastYfind_syntax_environment},
  {"$sexpr-%raw-tag", &YevalSastYDsexpr_Praw_tag},
  {"remove-modules-by-name!", &YevalSastYremove_modules_by_nameX},
  {"bound?-reference", &YevalSastYboundQ_reference},
  {"objectify-free-global-reference", &YevalSastYobjectify_free_global_reference},
  {"---main-4---", NULL},
  {"binding-global-box", &YevalSastYbinding_global_box},
  {"%module-exports-setter", &YevalSastYPmodule_exports_setter},
  {"module-mangled-string-name-setter", &YevalSastYmodule_mangled_string_name_setter},
  {"<alternative>", &YevalSastYLalternativeG},
  {"application-function-setter", &YevalSastYapplication_function_setter},
  {"compute-local-reference-offsets", &YevalSastYcompute_local_reference_offsets},
  {"reload-macros", &YevalSastYreload_macros},
  {"binding-free?-setter", &YevalSastYbinding_freeQ_setter},
  {"special-define", &YevalSastYspecial_define},
  {"<static-environment>", &YevalSastYLstatic_environmentG},
  {"function-binding-setter", &YevalSastYfunction_binding_setter},
  {"function-temporaries", &YevalSastYfunction_temporaries},
  {"special-define-generic", &YevalSastYspecial_define_generic},
  {"---main-7---", NULL},
  {"module-exports", &YevalSastYmodule_exports},
  {"monitor-type", &YevalSastYmonitor_type},
  {"binding-dynamic-extent?", &YevalSastYbinding_dynamic_extentQ},
  {"module-target-environment-setter", &YevalSastYmodule_target_environment_setter},
  {"application-arguments", &YevalSastYapplication_arguments},
  {"load-and-register-module", &YevalSastYload_and_register_module},
  {"<variable-definition>", &YevalSastYLvariable_definitionG},
  {"special-set", &YevalSastYspecial_set},
  {"objectify-assignment-using", &YevalSastYobjectify_assignment_using},
  {"special-if", &YevalSastYspecial_if},
  {"fix-let-types", &YevalSastYfix_let_types},
  {"assignment-binding-setter", &YevalSastYassignment_binding_setter},
  {"binding-reference-class", &YevalSastYbinding_reference_class},
  {"fix-let-types-setter", &YevalSastYfix_let_types_setter},
  {"objectify-definition", &YevalSastYobjectify_definition},
  {"special-unwind-protect", &YevalSastYspecial_unwind_protect},
  {"objectify-raw", &YevalSastYobjectify_raw},
  {"<module-loader>", &YevalSastYLmodule_loaderG},
  {"binding-locative-setter", &YevalSastYbinding_locative_setter},
  {"<module-binding>", &YevalSastYLmodule_bindingG},
  {"transaction-implemented-bindings", &YevalSastYtransaction_implemented_bindings},
  {"<immediate-constant>", &YevalSastYLimmediate_constantG},
  {"<programs>", &YevalSastYLprogramsG},
  {"$sexpr-compile-time-tag", &YevalSastYDsexpr_compile_time_tag},
  {"environment-bindings-setter", &YevalSastYenvironment_bindings_setter},
  {"monitor-test-setter", &YevalSastYmonitor_test_setter},
  {"maybe-log-dependency", &YevalSastYmaybe_log_dependency},
  {"module-loader-modules", &YevalSastYmodule_loader_modules},
  {"<local-binding>", &YevalSastYLlocal_bindingG},
  {"function-value", &YevalSastYfunction_value},
  {"constant-value-setter", &YevalSastYconstant_value_setter},
  {"init-environment-for-eval", &YevalSastYinit_environment_for_eval},
  {"expand-syntax-if", &YevalSastYexpand_syntax_if},
  {"<static-empty-environment>", &YevalSastYLstatic_empty_environmentG},
  {"function-self-recursive?-setter", &YevalSastYfunction_self_recursiveQ_setter},
  {"binding-locative", &YevalSastYbinding_locative},
  {"transaction-register-dependent", &YevalSastYtransaction_register_dependent},
  {"merge-transactions!", &YevalSastYmerge_transactionsX},
  {"insert-globals!", &YevalSastYinsert_globalsX},
  {"application-binding", &YevalSastYapplication_binding},
  {"install-initial-bindings", &YevalSastYinstall_initial_bindings},
  {"<reference>", &YevalSastYLreferenceG},
  {"<transaction>", &YevalSastYLtransactionG},
  {"binding-name-setter", &YevalSastYbinding_name_setter},
  {"binding-dynamic-extent?-setter", &YevalSastYbinding_dynamic_extentQ_setter},
  {"locals-functions", &YevalSastYlocals_functions},
  {"module-transaction-setter", &YevalSastYmodule_transaction_setter},
  {"alternative-condition", &YevalSastYalternative_condition},
  {"sequentialize", &YevalSastYsequentialize},
  {"environment-allows-foreign-names?", &YevalSastYenvironment_allows_foreign_namesQ},
  {"env-object-name", &YevalSastYenv_object_name},
  {"find-static-global-environment", &YevalSastYfind_static_global_environment},
  {"assignment-form-setter", &YevalSastYassignment_form_setter},
  {"<ast-primitive>", &YevalSastYLast_primitiveG},
  {"program-register", &YevalSastYprogram_register},
  {"objectify-locals", &YevalSastYobjectify_locals},
  {"binding-handler-setter", &YevalSastYbinding_handler_setter},
  {"<module>", &YevalSastYLmoduleG},
  {"register-magic-binding", &YevalSastYregister_magic_binding},
  {"module-mangled-name-setter", &YevalSastYmodule_mangled_name_setter},
  {"find-binding", &YevalSastYfind_binding},
  {"objectify-function-source", &YevalSastYobjectify_function_source},
  {"call-with-subtransaction", &YevalSastYcall_with_subtransaction},
  {"objectify-sequential", &YevalSastYobjectify_sequential},
  {"alternative-alternant", &YevalSastYalternative_alternant},
  {"*magic-bindings*", &YevalSastYTmagic_bindingsT},
  {"<fix-let>", &YevalSastYLfix_letG},
  {"process-closed-application", &YevalSastYprocess_closed_application},
  {"binding-global-box-setter", &YevalSastYbinding_global_box_setter},
  {"runtime-environment", &YevalSastYruntime_environment},
  {"---main-6---", NULL},
  {"do-named-static-global-bindings", &YevalSastYdo_named_static_global_bindings},
  {"locals-body", &YevalSastYlocals_body},
  {"reloader-do-use-module", &YevalSastYreloader_do_use_module},
  {"objectify-syntax-definition", &YevalSastYobjectify_syntax_definition},
  {"update-binding-kind", &YevalSastYupdate_binding_kind},
  {"<fab-list>", &YevalSastYLfab_listG},
  {"binding-value-setter", &YevalSastYbinding_value_setter},
  {"special-syntax-if", &YevalSastYspecial_syntax_if},
  {"fab-g2c-module", &YevalSastYfab_g2c_module},
  {"---main-8---", NULL},
  {"application-binding-setter", &YevalSastYapplication_binding_setter},
  {"objectify-symbol", &YevalSastYobjectify_symbol},
  {"binding-index", &YevalSastYbinding_index},
  {"---main-5---", NULL},
  {"<ast-method-definition>", &YevalSastYLast_method_definitionG},
  {"do-static-global-bindings", &YevalSastYdo_static_global_bindings},
  {"objectify-signature", &YevalSastYobjectify_signature},
  {"assignment-reference-setter", &YevalSastYassignment_reference_setter},
  {"transaction-register-implemented-binding", &YevalSastYtransaction_register_implemented_binding},
  {"assignment-reference", &YevalSastYassignment_reference},
  {"constant-value", &YevalSastYconstant_value},
  {"$sexpr-export-tag", &YevalSastYDsexpr_export_tag},
  {"runtime-module-loader", &YevalSastYruntime_module_loader},
  {"environment-next-setter", &YevalSastYenvironment_next_setter},
  {"function-bindings", &YevalSastYfunction_bindings},
  {"function-specs", &YevalSastYfunction_specs},
  {"binding-module", &YevalSastYbinding_module},
  {"function-kind", &YevalSastYfunction_kind},
  {"binding-module-setter", &YevalSastYbinding_module_setter},
  {"binding-info", &YevalSastYbinding_info},
  {"reload-modules", &YevalSastYreload_modules},
  {"convert2arguments", &YevalSastYconvert2arguments},
  {"objectify-primitive-definition", &YevalSastYobjectify_primitive_definition},
  {"objectify-assignment", &YevalSastYobjectify_assignment},
  {"application-tail?-setter", &YevalSastYapplication_tailQ_setter},
  {"with-dependent", NULL},
  {"binding-kind-setter", &YevalSastYbinding_kind_setter},
  {"function-binding", &YevalSastYfunction_binding},
  {"monitor-main-thunk-setter", &YevalSastYmonitor_main_thunk_setter},
  {"*now-rt-env*", &YevalSastYTnow_rt_envT},
  {"module-runtime-data-setter", &YevalSastYmodule_runtime_data_setter},
  {"transform-defs", &YevalSastYtransform_defs},
  {"objectify-use-module", &YevalSastYobjectify_use_module},
  {"module-syntax-environment-setter", &YevalSastYmodule_syntax_environment_setter},
  {"<monitor>", &YevalSastYLmonitorG},
  {"special-define-syntax", &YevalSastYspecial_define_syntax},
  {"function-nary?", &YevalSastYfunction_naryQ},
  {"module-transaction", &YevalSastYmodule_transaction},
  {"init-g2c-boot-environment", &YevalSastYinit_g2c_boot_environment},
  {"free-environment", &YevalSastYfree_environment},
  {"global-box-value", &YevalSastYglobal_box_value},
  {"$sexpr-define-static-syntax-tag", &YevalSastYDsexpr_define_static_syntax_tag},
  {"def-list", NULL},
  {"objectify-quotation", &YevalSastYobjectify_quotation},
  {"function-index-setter", &YevalSastYfunction_index_setter},
  {"objectify-monitor", &YevalSastYobjectify_monitor},
  {"transaction-dependents-setter", &YevalSastYtransaction_dependents_setter},
  {"unwind-protect-cleanup-thunk", &YevalSastYunwind_protect_cleanup_thunk},
  {"reference-binding-setter", &YevalSastYreference_binding_setter},
  {"objectify-with-subtransaction", &YevalSastYobjectify_with_subtransaction},
  {"module-loader-stack", &YevalSastYmodule_loader_stack},
  {"<local-reference>", &YevalSastYLlocal_referenceG},
  {"---main-2---", NULL},
  {"application-next-methods-setter", &YevalSastYapplication_next_methods_setter},
  {"<local-assignment>", &YevalSastYLlocal_assignmentG},
  {"<passive-program>", &YevalSastYLpassive_programG},
  {"$sexpr-optionals-tag", &YevalSastYDsexpr_optionals_tag},
  {"<unwind-protect>", &YevalSastYLunwind_protectG},
  {"$sexpr-use/export-module-tag", &YevalSastYDsexpr_useSexport_module_tag},
  {"binding-type-setter", &YevalSastYbinding_type_setter},
  {"objectify-bind-exit", &YevalSastYobjectify_bind_exit},
  {"binding-dotted?", &YevalSastYbinding_dottedQ},
  {"reference-frame-number", &YevalSastYreference_frame_number},
  {"load-module", &YevalSastYload_module},
  {"probe-module", &YevalSastYprobe_module},
  {"signature-names", &YevalSastYsignature_names},
  {"objectify-compile-time", &YevalSastYobjectify_compile_time},
  {"<raw-constant>", &YevalSastYLraw_constantG},
  {"macro-expander", &YevalSastYmacro_expander},
  {"*record-source?*", &YevalSastYTrecord_sourceQT},
  {"unchecked-runtime-environment", &YevalSastYunchecked_runtime_environment},
  {"fix-let-bindings-setter", &YevalSastYfix_let_bindings_setter},
  {"binding-value", &YevalSastYbinding_value},
  {"module-loader-module-type", &YevalSastYmodule_loader_module_type},
  {"<compile-time>", &YevalSastYLcompile_timeG},
  {"pairize", &YevalSastYpairize},
  {"bound?-reference-setter", &YevalSastYboundQ_reference_setter},
  {"<assignment>", &YevalSastYLassignmentG},
  {"<definition>", &YevalSastYLdefinitionG},
  {"<ast-embodied-function>", &YevalSastYLast_embodied_functionG},
  {"locals-body-setter", &YevalSastYlocals_body_setter},
  {"<ast-generic>", &YevalSastYLast_genericG},
  {"$functions-empty", &YevalSastYDfunctions_empty},
  {"init-runtime", &YevalSastYinit_runtime},
  {"objectify-method-definition", &YevalSastYobjectify_method_definition},
  {"locals-bindings-setter", &YevalSastYlocals_bindings_setter},
  {"objectify", &YevalSastYobjectify},
  {"<ast-macro-definition>", &YevalSastYLast_macro_definitionG},
  {"<predefined-application>", &YevalSastYLpredefined_applicationG},
  {"<method-application>", &YevalSastYLmethod_applicationG},
  {"$empty-static-environment", &YevalSastYDempty_static_environment},
  {"special-define-function", &YevalSastYspecial_define_function},
  {"binding-name", &YevalSastYbinding_name},
  {"process-module-data", &YevalSastYprocess_module_data},
  {"special-use-module", &YevalSastYspecial_use_module},
  {"objectify-list", &YevalSastYobjectify_list},
  {"environment-module-loader-setter", &YevalSastYenvironment_module_loader_setter},
  {"default-type", &YevalSastYdefault_type},
  {"module-binding", &YevalSastYmodule_binding},
  {"<ast-function-definition>", &YevalSastYLast_function_definitionG},
  {"special-export", &YevalSastYspecial_export},
  {"reloader-do-import", &YevalSastYreloader_do_import},
  {"ast-<bot>", &YevalSastYast_LbotG},
  {"$sexpr-define-primitive-tag", &YevalSastYDsexpr_define_primitive_tag},
  {"module-target-environment", &YevalSastYmodule_target_environment},
  {"sequential", &YevalSastYsequential},
  {"application-known?", &YevalSastYapplication_knownQ},
  {"insert-global!", &YevalSastYinsert_globalX},
  {"<free-environment>", &YevalSastYLfree_environmentG},
  {"binding-type", &YevalSastYbinding_type},
  {"binding-module-name", &YevalSastYbinding_module_name},
  {"alternative-consequent-setter", &YevalSastYalternative_consequent_setter},
  {"reference-frame-number-setter", &YevalSastYreference_frame_number_setter},
  {"objectify-binding", &YevalSastYobjectify_binding},
  {"binding-mangled-name-setter", &YevalSastYbinding_mangled_name_setter},
  {"monitor-test", &YevalSastYmonitor_test},
  {"reference-frame-offset", &YevalSastYreference_frame_offset},
  {"binding-handler", &YevalSastYbinding_handler},
  {"global-box-value-setter", &YevalSastYglobal_box_value_setter},
  {"application-next-methods", &YevalSastYapplication_next_methods},
  {"function-self-recursive?", &YevalSastYfunction_self_recursiveQ},
  {"<static-local-environment>", &YevalSastYLstatic_local_environmentG},
  {"compute-transitive-users", &YevalSastYcompute_transitive_users},
  {"*runtime-module-loader*", &YevalSastYTruntime_module_loaderT},
  {"binding-native-to?", &YevalSastYbinding_native_toQ},
  {"function-free-setter", &YevalSastYfunction_free_setter},
  {"function-registers-setter", &YevalSastYfunction_registers_setter},
  {"module-mangled-string-name", &YevalSastYmodule_mangled_string_name},
  {"<global-reference>", &YevalSastYLglobal_referenceG},
  {"fix-let-arguments", &YevalSastYfix_let_arguments},
  {"<computed-program>", &YevalSastYLcomputed_programG},
  {"special-monitor", &YevalSastYspecial_monitor},
  {"runtime-module", &YevalSastYruntime_module},
  {"binding-info-setter", &YevalSastYbinding_info_setter},
  {"ensure-module-data", &YevalSastYensure_module_data},
  {"$goo-boot-module-name", &YevalSastYDgoo_boot_module_name},
  {"special-locals", &YevalSastYspecial_locals},
  {"environment-uses-modules", &YevalSastYenvironment_uses_modules},
  {"reference-called-function?", &YevalSastYreference_called_functionQ},
  {"<arguments>", &YevalSastYLargumentsG},
  {"register-module!", &YevalSastYregister_moduleX},
  {"constant-index-setter", &YevalSastYconstant_index_setter},
  {"<real-reference>", &YevalSastYLreal_referenceG},
  {"$arguments-empty", &YevalSastYDarguments_empty},
  {"function-data-refs-setter", &YevalSastYfunction_data_refs_setter},
  {"remove-module-internal!", &YevalSastYremove_module_internalX},
  {"<static-global-environment>", &YevalSastYLstatic_global_environmentG},
  {"reference-binding", &YevalSastYreference_binding},
  {"special-define-static-syntax", &YevalSastYspecial_define_static_syntax},
  {"environment-next", &YevalSastYenvironment_next},
  {"function-signature-setter", &YevalSastYfunction_signature_setter},
  {"environment-allows-foreign-names?-setter", &YevalSastYenvironment_allows_foreign_namesQ_setter},
  {"load-in", &YevalSastYload_in},
  {"<ast-primitive-definition>", &YevalSastYLast_primitive_definitionG},
  {"module-name-to-relpath", &YevalSastYmodule_name_to_relpath},
  {"objectify-export", &YevalSastYobjectify_export},
  {"<module-binding-reference>", &YevalSastYLmodule_binding_referenceG},
  {"<sequential>", &YevalSastYLsequentialG},
  {"init-ast", &YevalSastYinit_ast},
  {"<binding>", &YevalSastYLbindingG},
  {"compile-time-program", &YevalSastYcompile_time_program},
  {"transaction-implemented-bindings-setter", &YevalSastYtransaction_implemented_bindings_setter},
  {"signature-names-setter", &YevalSastYsignature_names_setter},
  {"module-loader-modules-setter", &YevalSastYmodule_loader_modules_setter},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"find-environment-module", "find-environment-module"},
  {"application-tail?", "application-tail?"},
  {"set-module-environments", "set-module-environments"},
  {"monitor-info", "monitor-info"},
  {"signature-nary?", "signature-nary?"},
  {"application-known?-setter", "application-known?-setter"},
  {"function-signature-setter", "function-signature-setter"},
  {"<ast-function>", "<ast-function>"},
  {"signature-bindings-setter", "signature-bindings-setter"},
  {"module-exports", "module-exports"},
  {"def-programs", "def-programs"},
  {"<ast-primitive-definition>", "<ast-primitive-definition>"},
  {"function-source-setter", "function-source-setter"},
  {"binding-inferred-type-setter", "binding-inferred-type-setter"},
  {"binding-mutable?", "binding-mutable?"},
  {"<ast-primitive>", "<ast-primitive>"},
  {"fix-let-arguments", "fix-let-arguments"},
  {"signature-value-setter", "signature-value-setter"},
  {"function-debug-name", "function-debug-name"},
  {"reference-binding", "reference-binding"},
  {"fix-let-body", "fix-let-body"},
  {"application-function", "application-function"},
  {"monitor-handler", "monitor-handler"},
  {"binding-mangled-name-setter", "binding-mangled-name-setter"},
  {"<locals>", "<locals>"},
  {"environment-bindings", "environment-bindings"},
  {"module-syntax-environment", "module-syntax-environment"},
  {"reference-called-function?-setter", "reference-called-function?-setter"},
  {"binding-inferred-type", "binding-inferred-type"},
  {"binding-kind", "binding-kind"},
  {"function-temporaries-setter", "function-temporaries-setter"},
  {"<program>", "<program>"},
  {"locals-bindings", "locals-bindings"},
  {"<ast-signature>", "<ast-signature>"},
  {"ast-define-binding", "ast-define-binding"},
  {"alternative-consequent", "alternative-consequent"},
  {"monitor-main-thunk", "monitor-main-thunk"},
  {"<global-box>", "<global-box>"},
  {"program-register-setter", "program-register-setter"},
  {"function-free", "function-free"},
  {"function-registers", "function-registers"},
  {"locals-functions-setter", "locals-functions-setter"},
  {"<global-assignment>", "<global-assignment>"},
  {"signature-arity", "signature-arity"},
  {"<runtime-assignment>", "<runtime-assignment>"},
  {"constant-index", "constant-index"},
  {"<real-reference>", "<real-reference>"},
  {"<application>", "<application>"},
  {"as-lst", "as-lst"},
  {"function-data-refs", "function-data-refs"},
  {"<ast-method>", "<ast-method>"},
  {"function-signature", "function-signature"},
  {"fix-let-body-setter", "fix-let-body-setter"},
  {"locals-body-setter", "locals-body-setter"},
  {"binding-dotted?-setter", "binding-dotted?-setter"},
  {"fix-let-bindings", "fix-let-bindings"},
  {"function-index-setter", "function-index-setter"},
  {"<passive-program>", "<passive-program>"},
  {"signature-names", "signature-names"},
  {"assignment-binding", "assignment-binding"},
  {"runtime-environment", "runtime-environment"},
  {"program-type", "program-type"},
  {"function-binding", "function-binding"},
  {"objectify-quotation", "objectify-quotation"},
  {"fix-let-arguments-setter", "fix-let-arguments-setter"},
  {"module-name", "module-name"},
  {"<monitor>", "<monitor>"},
  {"<bound?>", "<bound?>"},
  {"signature-bindings", "signature-bindings"},
  {"signature-specs-setter", "signature-specs-setter"},
  {"<constant>", "<constant>"},
  {"<regular-application>", "<regular-application>"},
  {"function-source", "function-source"},
  {"init-environment-for-eval", "init-environment-for-eval"},
  {"function-body-setter", "function-body-setter"},
  {"signature-value", "signature-value"},
  {"do-module-loader-modules", "do-module-loader-modules"},
  {"report-undefined-global-bindings", "report-undefined-global-bindings"},
  {"assignment-form", "assignment-form"},
  {"binding-mangled-name", "binding-mangled-name"},
  {"unwind-protect-protected-thunk", "unwind-protect-protected-thunk"},
  {"<module>", "<module>"},
  {"remove-modules-by-name!", "remove-modules-by-name!"},
  {"bound?-reference", "bound?-reference"},
  {"binding-global-box", "binding-global-box"},
  {"<alternative>", "<alternative>"},
  {"function-temporaries", "function-temporaries"},
  {"monitor-type", "monitor-type"},
  {"<local-binding>", "<local-binding>"},
  {"reference-called-function?", "reference-called-function?"},
  {"binding-dynamic-extent?", "binding-dynamic-extent?"},
  {"application-arguments", "application-arguments"},
  {"bind-exit-main-fun", "bind-exit-main-fun"},
  {"fix-let-types", "fix-let-types"},
  {"fix-let-types-setter", "fix-let-types-setter"},
  {"<module-loader>", "<module-loader>"},
  {"<module-binding>", "<module-binding>"},
  {"<immediate-constant>", "<immediate-constant>"},
  {"<programs>", "<programs>"},
  {"environment-uses-modules", "environment-uses-modules"},
  {"function-value", "function-value"},
  {"function-self-recursive?-setter", "function-self-recursive?-setter"},
  {"binding-locative", "binding-locative"},
  {"application-binding", "application-binding"},
  {"install-initial-bindings", "install-initial-bindings"},
  {"<reference>", "<reference>"},
  {"module-mangled-string-name-setter", "module-mangled-string-name-setter"},
  {"binding-dynamic-extent?-setter", "binding-dynamic-extent?-setter"},
  {"locals-functions", "locals-functions"},
  {"sequentialize", "sequentialize"},
  {"env-object-name", "env-object-name"},
  {"objectify-signature", "objectify-signature"},
  {"assignment-form-setter", "assignment-form-setter"},
  {"program-register", "program-register"},
  {"module-mangled-name-setter", "module-mangled-name-setter"},
  {"find-binding", "find-binding"},
  {"alternative-alternant", "alternative-alternant"},
  {"binding-name", "binding-name"},
  {"<fix-let>", "<fix-let>"},
  {"binding-global-box-setter", "binding-global-box-setter"},
  {"<fab-list>", "<fab-list>"},
  {"binding-value-setter", "binding-value-setter"},
  {"fab-g2c-module", "fab-g2c-module"},
  {"function-index", "function-index"},
  {"binding-index", "binding-index"},
  {"do-static-global-bindings", "do-static-global-bindings"},
  {"assignment-reference", "assignment-reference"},
  {"constant-value", "constant-value"},
  {"function-bindings", "function-bindings"},
  {"binding-info", "binding-info"},
  {"alternative-condition", "alternative-condition"},
  {"<predefined-application>", "<predefined-application>"},
  {"signature-nary?-setter", "signature-nary?-setter"},
  {"function-nary?", "function-nary?"},
  {"reference-frame-offset", "reference-frame-offset"},
  {"<runtime-reference>", "<runtime-reference>"},
  {"free-environment", "free-environment"},
  {"signature-specs", "signature-specs"},
  {"global-box-value", "global-box-value"},
  {"def-list", "def-list"},
  {"<module-binding-reference>", "<module-binding-reference>"},
  {"compile-time-program", "compile-time-program"},
  {"unwind-protect-cleanup-thunk", "unwind-protect-cleanup-thunk"},
  {"objectify-with-subtransaction", "objectify-with-subtransaction"},
  {"<local-reference>", "<local-reference>"},
  {"<static-global-environment>", "<static-global-environment>"},
  {"<local-assignment>", "<local-assignment>"},
  {"function-body", "function-body"},
  {"<unwind-protect>", "<unwind-protect>"},
  {"program-type-setter", "program-type-setter"},
  {"<bind-exit>", "<bind-exit>"},
  {"binding-type-setter", "binding-type-setter"},
  {"locals-body", "locals-body"},
  {"binding-dotted?", "binding-dotted?"},
  {"load-module", "load-module"},
  {"probe-module", "probe-module"},
  {"function-debug-name-setter", "function-debug-name-setter"},
  {"<raw-constant>", "<raw-constant>"},
  {"unchecked-runtime-environment", "unchecked-runtime-environment"},
  {"fix-let-bindings-setter", "fix-let-bindings-setter"},
  {"binding-value", "binding-value"},
  {"module-loader-module-type", "module-loader-module-type"},
  {"<compile-time>", "<compile-time>"},
  {"<assignment>", "<assignment>"},
  {"<definition>", "<definition>"},
  {"<ast-generic>", "<ast-generic>"},
  {"locals-bindings-setter", "locals-bindings-setter"},
  {"<ast-macro-definition>", "<ast-macro-definition>"},
  {"do-named-static-global-bindings", "do-named-static-global-bindings"},
  {"module-binding", "module-binding"},
  {"module-target-environment", "module-target-environment"},
  {"binding-module", "binding-module"},
  {"application-known?", "application-known?"},
  {"<free-environment>", "<free-environment>"},
  {"binding-type", "binding-type"},
  {"binding-module-name", "binding-module-name"},
  {"monitor-test", "monitor-test"},
  {"global-box-value-setter", "global-box-value-setter"},
  {"function-self-recursive?", "function-self-recursive?"},
  {"binding-native-to?", "binding-native-to?"},
  {"function-free-setter", "function-free-setter"},
  {"function-registers-setter", "function-registers-setter"},
  {"module-mangled-string-name", "module-mangled-string-name"},
  {"<global-reference>", "<global-reference>"},
  {"<computed-program>", "<computed-program>"},
  {"binding-info-setter", "binding-info-setter"},
  {"binding-index-setter", "binding-index-setter"},
  {"$goo-boot-module-name", "$goo-boot-module-name"},
  {"<arguments>", "<arguments>"},
  {"signature-arity-setter", "signature-arity-setter"},
  {"reference-frame-number", "reference-frame-number"},
  {"constant-index-setter", "constant-index-setter"},
  {"%%macro", "%%macro"},
  {"function-data-refs-setter", "function-data-refs-setter"},
  {"module-mangled-name", "module-mangled-name"},
  {"environment-module", "environment-module"},
  {"ast-evaluate", "ast-evaluate"},
  {"load-in", "load-in"},
  {"module-name-to-relpath", "module-name-to-relpath"},
  {"<sequential>", "<sequential>"},
  {"init-ast", "init-ast"},
  {"<binding>", "<binding>"},
  {"signature-names-setter", "signature-names-setter"},
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
