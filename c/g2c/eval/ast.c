/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: ast */

EXT(YLnumG,"boot","<num>");
EXT(YLvecG,"boot","<vec>");
EXT(YprotoSsystemYhierarchical_components,"proto/system","hierarchical-components");
EXT(Yprop_getter,"boot","prop-getter");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
EXT(YprotoSsystemYTc_extensionT,"proto/system","*c-extension*");
EXT(YprotoScollectionsScollectionYkey_type,"proto/collections/collection","key-type");
EXT(YprotoScollectionsSassocYassocs_test_setter,"proto/collections/assoc","assocs-test-setter");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YsyntaxYDsexpr_iterate_tag,"syntax","$sexpr-iterate-tag");
EXT(YprotoSsystemYparent_directory,"proto/system","parent-directory");
EXT(YsyntaxYDsexpr_quasiquote_tag,"syntax","$sexpr-quasiquote-tag");
DEF(YastYspecial_use_module,"ast","special-use-module");
EXT(YsyntaxYsexpr_iterate_Gloc,"syntax","sexpr-iterate->loc");
EXT(YsyntaxYsexpr_syntax_if_then,"syntax","sexpr-syntax-if-then");
DEF(YastYdefault_type,"ast","default-type");
EXT(YprotoScollectionsSsequenceYdel_dups,"proto/collections/sequence","del-dups");
DEF(YastYobjectify_assignment,"ast","objectify-assignment");
DEF(YastYbinding_global_box,"ast","binding-global-box");
DEF(YastYreference_frame_number_setter,"ast","reference-frame-number-setter");
DEF(YastYobjectify_use_module,"ast","objectify-use-module");
EXT(YprotoScollectionsScollectionYfinQ,"proto/collections/collection","fin?");
EXT(Yunexec,"boot","unexec");
EXT(Ytype_error,"boot","type-error");
EXT(YprotoSmathYA,"proto/math","+");
DEF(YastYenvironment_module,"ast","environment-module");
EXT(Yclass_direct_props,"boot","class-direct-props");
EXT(YprotoSportsYgets,"proto/ports","gets");
EXT(YmacrosYgensym,"macros","gensym");
DEF(YastYspecial_bind_exit,"ast","special-bind-exit");
EXT(Yvec,"boot","vec");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
DEF(YastYpairize,"ast","pairize");
EXT(YprotoScollectionsSsequenceYbelow,"proto/collections/sequence","below");
DEF(YastYspecial_compile_time,"ast","special-compile-time");
DEF(YastYsignature_arity_setter,"ast","signature-arity-setter");
DEF(YastYLconstantG,"ast","<constant>");
EXT(YprotoScollectionsSstringYnum_to_str_base,"proto/collections/string","num-to-str-base");
DEF(YastYfix_let_body_setter,"ast","fix-let-body-setter");
EXT(YLmetG,"boot","<met>");
EXT(YprotoSmathYcontagious_call,"proto/math","contagious-call");
EXT(YprotoScollectionsScollectionYmap_keyed,"proto/collections/collection","map-keyed");
DEF(YastYmodule_name,"ast","module-name");
EXT(YstringsYstring_join,"strings","string-join");
DEF(YastYLmonitorG,"ast","<monitor>");
EXT(YprotoScollectionsSstringYTprint_baseT,"proto/collections/string","*print-base*");
EXT(YruntimeYloc_val_setter,"runtime","loc-val-setter");
DEF(YastYLast_macro_definitionG,"ast","<ast-macro-definition>");
EXT(YprotoScollectionsStableYtab_test,"proto/collections/table","tab-test");
DEF(YastYobjectify_error,"ast","objectify-error");
DEF(YastYglobal_box_value_setter,"ast","global-box-value-setter");
EXT(YwriteYrecurring_write,"write","recurring-write");
EXT(YprotoSmathYzeroQ,"proto/math","zero?");
DEF(YastYexport_bindingX,"ast","export-binding!");
DEF(YastYTcurrent_dependentT,"ast","*current-dependent*");
DEF(YastYapplication_knownQ,"ast","application-known?");
EXT(Yprop_init,"boot","prop-init");
DEF(YastYfix_let_bindings_setter,"ast","fix-let-bindings-setter");
DEF(YastYbinding_info,"ast","binding-info");
DEF(YastYunwind_protect_protected_thunk,"ast","unwind-protect-protected-thunk");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
DEF(YastYboundQ_reference,"ast","bound?-reference");
DEF(YastYcompile_time_program_setter,"ast","compile-time-program-setter");
EXT(YsyntaxYDsexpr_define_syntax_tag,"syntax","$sexpr-define-syntax-tag");
EXT(YprotoSmathYroundS,"proto/math","round/");
DEF(YastYprobe_module,"ast","probe-module");
DEF(YastYDsequential_empty,"ast","$sequential-empty");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YprotoSmathYsin,"proto/math","sin");
EXT(YsyntaxYsexpr_unwind_protect_cleanup_forms,"syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YprotoStypesYtA,"proto/types","t+");
EXT(YdependencyYLdependency_typeG,"dependency","<dependency-type>");
EXT(YsyntaxYsexpr_loc_bound_signatures,"syntax","sexpr-loc-bound-signatures");
EXT(YsyntaxYDsexpr_bind_exit_tag,"syntax","$sexpr-bind-exit-tag");
DEF(YastYupdate_binding_kind,"ast","update-binding-kind");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YprotoScollectionsScollectionYenum,"proto/collections/collection","enum");
EXT(YdependencyYdependency_emptyQ,"dependency","dependency-empty?");
DEF(YastYexpand_bind_element,"ast","expand-bind-element");
EXT(YdependencyYLdependentG,"dependency","<dependent>");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YsyntaxYsexpr_block_body,"syntax","sexpr-block-body");
EXT(YsyntaxYDsexpr_unwind_protect_tag,"syntax","$sexpr-unwind-protect-tag");
EXT(YprotoSmathYeof_object,"proto/math","eof-object");
EXT(Yclass_descendents,"boot","class-descendents");
EXT(YprotoScollectionsScollectionYelt_default,"proto/collections/collection","elt-default");
EXT(YstringsYstring_split,"strings","string-split");
EXT(YprotoScollectionsSbufferYbuf,"proto/collections/buffer","buf");
EXT(YprotoScollectionsScollectionYmap2,"proto/collections/collection","map2");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YprotoScollectionsSrangeYfrom,"proto/collections/range","from");
EXT(Ygen_refs_setter,"boot","gen-refs-setter");
DEF(YastYenv_object_name,"ast","env-object-name");
EXT(YsyntaxYsexpr_forward_primitiveQ,"syntax","sexpr-forward-primitive?");
EXT(YprotoSmathYevenQ,"proto/math","even?");
DEF(YastYbinding_locative,"ast","binding-locative");
DEF(YastYmonitor_main_thunk,"ast","monitor-main-thunk");
DEF(YastYmodule_runtime_data_setter,"ast","module-runtime-data-setter");
DEF(YastYenvironment_module_loader_setter,"ast","environment-module-loader-setter");
EXT(YsyntaxYsexpr_monitor_expand,"syntax","sexpr-monitor-expand");
EXT(YsyntaxYsexpr_isa_prop_inits,"syntax","sexpr-isa-prop-inits");
EXT(YprotoSportsYport_line,"proto/ports","port-line");
DEF(YastYfab_g2c_module,"ast","fab-g2c-module");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YprotoScollectionsStableYDpermanent_hash_state,"proto/collections/table","$permanent-hash-state");
DEF(YastYspecial_define_generic,"ast","special-define-generic");
EXT(YLchrG,"boot","<chr>");
EXT(YprotoSmathYrem,"proto/math","rem");
EXT(YLflatG,"boot","<flat>");
DEF(YastYspecial_quasiquote,"ast","special-quasiquote");
EXT(YprotoScollectionsSsequenceYdel_vals,"proto/collections/sequence","del-vals");
EXT(YsubtypeQ,"boot","subtype?");
DEF(YastYLstatic_empty_environmentG,"ast","<static-empty-environment>");
EXT(YprotoSportsYput,"proto/ports","put");
DEF(YastYapplication_function_setter,"ast","application-function-setter");
DEF(YastYbind_exit_main_fun_setter,"ast","bind-exit-main-fun-setter");
EXT(YsyntaxYsexpr_variableQ,"syntax","sexpr-variable?");
EXT(Yprop_value_setter,"boot","prop-value-setter");
DEF(YastYbinding_freeQ_setter,"ast","binding-free?-setter");
DEF(YastYLalternativeG,"ast","<alternative>");
DEF(YastYobjectify_syntax_definition,"ast","objectify-syntax-definition");
DEF(YastYinstall_magic_bindings,"ast","install-magic-bindings");
DEF(YastYdo_named_static_global_bindings,"ast","do-named-static-global-bindings");
EXT(YprotoSmathYlog,"proto/math","log");
EXT(YsyntaxYDsexpr_monitor_tag,"syntax","$sexpr-monitor-tag");
DEF(YastYreloader_do_export,"ast","reloader-do-export");
EXT(YdependencyYfind_dependency,"dependency","find-dependency");
EXT(YPdefine_method,"boot","%define-method");
EXT(Ygen_refs,"boot","gen-refs");
EXT(Ynot,"boot","not");
EXT(YsyntaxYsexpr_let_Gcombination,"syntax","sexpr-let->combination");
EXT(YprotoSmathY_,"proto/math","-");
DEF(YastYload_in,"ast","load-in");
EXT(YprotoScollectionsScollectionYdo_keyed,"proto/collections/collection","do-keyed");
DEF(YastYLast_method_definitionG,"ast","<ast-method-definition>");
DEF(YastYalternative_condition,"ast","alternative-condition");
DEF(YastYspecial_monitor,"ast","special-monitor");
EXT(YsyntaxYsexpr_syntax_if_value,"syntax","sexpr-syntax-if-value");
DEF(YastYLruntime_module_loaderG,"ast","<runtime-module-loader>");
DEF(YastYprocess_closed_application,"ast","process-closed-application");
EXT(YprotoScollectionsSsequenceYsub,"proto/collections/sequence","sub");
EXT(YprotoScollectionsSlistYassq,"proto/collections/list","assq");
DEF(YastYmonitor_type,"ast","monitor-type");
DEF(YastYapplication_next_methods,"ast","application-next-methods");
DEF(YastYprocess_nary_closed_application,"ast","process-nary-closed-application");
DEF(YastYexpand_bind_listT,"ast","expand-bind-list*");
EXT(YsyntaxYsexpr_unquoteQ,"syntax","sexpr-unquote?");
DEF(YastYtransform_defs,"ast","transform-defs");
EXT(YprotoScollectionsScollectionYdup,"proto/collections/collection","dup");
EXT(YsyntaxYDsexpr_define_method_tag,"syntax","$sexpr-define-method-tag");
DEF(YastYmonitor_info,"ast","monitor-info");
EXT(YsyntaxYsexpr_assignment_value,"syntax","sexpr-assignment-value");
EXT(YprotoScollectionsScollectionYelt_type,"proto/collections/collection","elt-type");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YprotoScollectionsSsequenceYrange_checkQ,"proto/collections/sequence","range-check?");
DEF(YastYLfix_letG,"ast","<fix-let>");
EXT(YprotoSmathYtanh,"proto/math","tanh");
EXT(Yfab_sym,"boot","fab-sym");
EXT(Yunknown_function_error,"boot","unknown-function-error");
DEF(YastYfind_syntax_environment,"ast","find-syntax-environment");
EXT(YdependencyYLdependableG,"dependency","<dependable>");
DEF(YastYLbindingG,"ast","<binding>");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YprotoScollectionsSsequenceYpos,"proto/collections/sequence","pos");
EXT(YwriteYwrite,"write","write");
EXT(YprotoScollectionsScollectionYfold,"proto/collections/collection","fold");
EXT(YprotoSmathYB,"proto/math","&");
EXT(YprotoScollectionsStableYtab_shrink_threshold,"proto/collections/table","tab-shrink-threshold");
DEF(YastYfunction_index,"ast","function-index");
DEF(YastYmodule_syntax_environment_setter,"ast","module-syntax-environment-setter");
EXT(YprotoScollectionsScollectionYelts,"proto/collections/collection","elts");
DEF(YastYobjectify_unwind_protect,"ast","objectify-unwind-protect");
DEF(YastYtransaction_emptyQ,"ast","transaction-empty?");
EXT(YLtupG,"boot","<tup>");
DEF(YastYinit_ast,"ast","init-ast");
DEF(YastYbinding_name_setter,"ast","binding-name-setter");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YOlst,"boot","@lst");
EXT(YsyntaxYsexpr_variable_type,"syntax","sexpr-variable-type");
DEF(YastYunwind_protect_cleanup_thunk_setter,"ast","unwind-protect-cleanup-thunk-setter");
EXT(YPvnul,"boot","%vnul");
EXT(YwriteYwrite_to_string,"write","write-to-string");
DEF(YastYfunction_signature_setter,"ast","function-signature-setter");
DEF(YastYfunction_body,"ast","function-body");
DEF(YastYbinding_module_name_setter,"ast","binding-module-name-setter");
DEF(YastYDsexpr_optionals_tag,"ast","$sexpr-optionals-tag");
EXT(YprotoSsystemYadd_src_path,"proto/system","add-src-path");
DEF(YastYcall_with_subtransaction,"ast","call-with-subtransaction");
EXT(YprotoSmathYNEE,"proto/math","~==");
EXT(YprotoSmathYflo_bits,"proto/math","flo-bits");
EXT(YLfunG,"boot","<fun>");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YsyntaxYDsexpr_syntax_if_tag,"syntax","$sexpr-syntax-if-tag");
DEF(YastYexpand_syntax_if,"ast","expand-syntax-if");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
DEF(YastYlocals_bindings,"ast","locals-bindings");
DEF(YastYset_module_environments,"ast","set-module-environments");
DEF(YastYfab_syntax_environment,"ast","fab-syntax-environment");
EXT(YmacrosYmap,"macros","map");
EXT(YprotoSmathYtruncS,"proto/math","trunc/");
EXT(YprotoSportsYforce_out,"proto/ports","force-out");
DEF(YastYLpassive_programG,"ast","<passive-program>");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
DEF(YastYfunction_temporaries_setter,"ast","function-temporaries-setter");
EXT(YprotoScollectionsStableYcase_insensitive_string_equal,"proto/collections/table","case-insensitive-string-equal");
DEF(YastYbinding_name,"ast","binding-name");
DEF(YastYLprogramG,"ast","<program>");
EXT(YdependencyYinvalidate_dependent,"dependency","invalidate-dependent");
DEF(YastYfunction_free,"ast","function-free");
EXT(YprotoSmathYNE,"proto/math","~=");
DEF(YastYspecial_Praw,"ast","special-%raw");
DEF(YastYbinding_type,"ast","binding-type");
EXT(YprotoStypesYtQ,"proto/types","t?");
EXT(YprotoSportsYget,"proto/ports","get");
DEF(YastYfind_static_global_environment,"ast","find-static-global-environment");
DEF(YastYspecial_unwind_protect,"ast","special-unwind-protect");
EXT(YprotoStypesYall2Q,"proto/types","all2?");
EXT(YprotoScollectionsSsequenceYreject,"proto/collections/sequence","reject");
EXT(YsyntaxYsexpr_make_anonymous_method,"syntax","sexpr-make-anonymous-method");
EXT(YsyntaxYDsexpr_method_tag,"syntax","$sexpr-method-tag");
EXT(YprotoSportsYLfile_portG,"proto/ports","<file-port>");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YprotoScollectionsSrangeYrange,"proto/collections/range","range");
DEF(YastYLmethod_applicationG,"ast","<method-application>");
DEF(YastYobjectify_export,"ast","objectify-export");
DEF(YastYinit_runtime,"ast","init-runtime");
EXT(Ysig_val,"boot","sig-val");
DEF(YastYobjectify_quotation,"ast","objectify-quotation");
EXT(Yprop_boundQ,"boot","prop-bound?");
DEF(YastYmodule_target_environment,"ast","module-target-environment");
EXT(YLlstG,"boot","<lst>");
DEF(YastYsignature_names_setter,"ast","signature-names-setter");
EXT(YprotoSsystemYgoo_filename,"proto/system","goo-filename");
DEF(YastYLmoduleG,"ast","<module>");
EXT(YLlogG,"boot","<log>");
EXT(YprotoScollectionsSrangeYrange_by,"proto/collections/range","range-by");
EXT(YsyntaxYDsexpr_let_tag,"syntax","$sexpr-let-tag");
EXT(YprotoSmathYneg,"proto/math","neg");
DEF(YastYexpand_pattern,"ast","expand-pattern");
EXT(YprotoSmathYK,"proto/math","|");
EXT(YprotoSmathYsqrt,"proto/math","sqrt");
EXT(Ytype_object,"boot","type-object");
DEF(YastYobjectify_list,"ast","objectify-list");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YdependencyYDexpansion_parse_dependency,"dependency","$expansion-parse-dependency");
DEF(YastYmacro_expander,"ast","macro-expander");
EXT(YprotoSsystemYcomponents_basename,"proto/system","components-basename");
EXT(YprotoSportsYLportG,"proto/ports","<port>");
EXT(Yfab_class,"boot","fab-class");
EXT(YprotoSportsYLstring_out_portG,"proto/ports","<string-out-port>");
EXT(YprotoSportsYLin_portG,"proto/ports","<in-port>");
DEF(YastYload_module,"ast","load-module");
DEF(YastYTcurrent_subtransactionT,"ast","*current-subtransaction*");
DEF(YastYmodule_loader_stack,"ast","module-loader-stack");
EXT(YprotoSportsYLfile_out_portG,"proto/ports","<file-out-port>");
DEF(YastYfix_let_bindings,"ast","fix-let-bindings");
DEF(YastYassignment_reference_setter,"ast","assignment-reference-setter");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YprotoSmathYT,"proto/math","*");
EXT(YsyntaxYDsexpr_def_tag,"syntax","$sexpr-def-tag");
EXT(YprotoSmathYround,"proto/math","round");
EXT(YprotoSsystemYTexe_extensionT,"proto/system","*exe-extension*");
EXT(YprotoSsystemYfile_mtime,"proto/system","file-mtime");
DEF(YastYspecial_begin,"ast","special-begin");
DEF(YastYassignment_binding_setter,"ast","assignment-binding-setter");
EXT(YprotoSmathYlogn,"proto/math","logn");
DEF(YastYbinding_locative_setter,"ast","binding-locative-setter");
EXT(Ysym_name,"boot","sym-name");
EXT(YprotoSmathYas_log,"proto/math","as-log");
DEF(YastYprogram_type,"ast","program-type");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YprotoSmathY1A,"proto/math","1+");
EXT(YprotoSmathYpow,"proto/math","pow");
DEF(YastYruntime_module,"ast","runtime-module");
EXT(YwriteYTmax_print_depthT,"write","*max-print-depth*");
EXT(YprotoScollectionsSsequenceYrange_check,"proto/collections/sequence","range-check");
EXT(YsyntaxYsexpr_prop_init,"syntax","sexpr-prop-init");
DEF(YastYreference_binding,"ast","reference-binding");
EXT(YprotoScollectionsScollectionYfind,"proto/collections/collection","find");
EXT(YprotoSportsYnewline,"proto/ports","newline");
EXT(Yfun_name,"boot","fun-name");
DEF(YastYprogram_type_setter,"ast","program-type-setter");
DEF(YastYunwind_protect_protected_thunk_setter,"ast","unwind-protect-protected-thunk-setter");
DEF(YastYinit_g2c_boot_environment,"ast","init-g2c-boot-environment");
EXT(YsyntaxYsexpr_sequence_Gbegin,"syntax","sexpr-sequence->begin");
EXT(YprotoSmathYdigitQ,"proto/math","digit?");
EXT(Yprop_owner,"boot","prop-owner");
EXT(YprotoScollectionsStableYtab_gc_state,"proto/collections/table","tab-gc-state");
DEF(YastYconvert2arguments,"ast","convert2arguments");
DEF(YastYspecial_iterate,"ast","special-iterate");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YsyntaxYsexpr_make_begin,"syntax","sexpr-make-begin");
EXT(YprotoSmathYLbotG,"proto/math","<bot>");
DEF(YastYfunction_value,"ast","function-value");
EXT(YprotoSmathYto_str,"proto/math","to-str");
EXT(YmacrosYfab_setter_name,"macros","fab-setter-name");
EXT(YsyntaxYsexpr_define_class_parents,"syntax","sexpr-define-class-parents");
EXT(YprotoStypesYtL,"proto/types","t<");
DEF(YastYspecial_isa,"ast","special-isa");
DEF(YastYfunction_free_setter,"ast","function-free-setter");
DEF(YastYobjectify_with_subtransaction,"ast","objectify-with-subtransaction");
EXT(Yobject_class,"boot","object-class");
EXT(YprotoSmathYfloorS,"proto/math","floor/");
EXT(YprotoScollectionsSlistYpush,"proto/collections/list","push");
DEF(YastYprogram_register,"ast","program-register");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
DEF(YastYreference_frame_number,"ast","reference-frame-number");
EXT(YprotoSmathYatan,"proto/math","atan");
DEF(YastYmodule_name_to_relpath,"ast","module-name-to-relpath");
DEF(YastYsignature_arity,"ast","signature-arity");
EXT(Yclass_parents,"boot","class-parents");
DEF(YastYbinding_mutableQ,"ast","binding-mutable?");
EXT(YdependencyYdependency_includes_anyQ,"dependency","dependency-includes-any?");
EXT(YsyntaxYsexpr_if_test,"syntax","sexpr-if-test");
DEF(YastYDsexpr_Praw_tag,"ast","$sexpr-%raw-tag");
DEF(YastYapplication_tailQ_setter,"ast","application-tail?-setter");
EXT(YTreport_prop_unbound_errorsQT,"boot","*report-prop-unbound-errors?*");
DEF(YastYast_LbotG,"ast","ast-<bot>");
EXT(YprotoScollectionsSsequenceYcat2,"proto/collections/sequence","cat2");
EXT(YprotoScollectionsSsequenceYpick,"proto/collections/sequence","pick");
DEF(YastYspecial_prop,"ast","special-prop");
DEF(YastYmerge_transactionsX,"ast","merge-transactions!");
EXT(Yprop_value,"boot","prop-value");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(YprotoScollectionsStableYtab_growth_threshold,"proto/collections/table","tab-growth-threshold");
DEF(YastYregister_moduleX,"ast","register-module!");
DEF(YastYLcompile_timeG,"ast","<compile-time>");
EXT(YprotoScollectionsSlistYLlistG,"proto/collections/list","<list>");
DEF(YastYobjectify_method_definition,"ast","objectify-method-definition");
DEF(YastYspecial_boundQ,"ast","special-bound?");
DEF(YastYspecial_locals,"ast","special-locals");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YprotoSmagnitudesYG,"proto/magnitudes",">");
EXT(YprotoSportsYLstring_portG,"proto/ports","<string-port>");
DEF(YastYDsexpr_export_tag,"ast","$sexpr-export-tag");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YsyntaxYsexpr_variable_name,"syntax","sexpr-variable-name");
EXT(YprotoSmathYchar_Gascii,"proto/math","char->ascii");
DEF(YastYLboundQG,"ast","<bound?>");
DEF(YastYinsert_globalX,"ast","insert-global!");
EXT(YLseqG,"boot","<seq>");
DEF(YastYPmodule_exports,"ast","%module-exports");
EXT(YLanyG,"boot","<any>");
EXT(Yprop_type,"boot","prop-type");
EXT(YprotoScollectionsScollectionYelt_setter,"proto/collections/collection","elt-setter");
DEF(YastYprogram_register_setter,"ast","program-register-setter");
EXT(YsyntaxYsexpr_unwind_protect_protected_form,"syntax","sexpr-unwind-protect-protected-form");
EXT(YruntimeYread,"runtime","read");
EXT(YdependencyYinvalidate_dependents,"dependency","invalidate-dependents");
DEF(YastYLunwind_protectG,"ast","<unwind-protect>");
EXT(YmacrosYvar_type,"macros","var-type");
DEF(YastYbinding_kind_setter,"ast","binding-kind-setter");
EXT(YprotoSmathYto_upper,"proto/math","to-upper");
DEF(YastYfix_let_types_setter,"ast","fix-let-types-setter");
DEF(YastYsyntax_environment_excluded_bindings,"ast","syntax-environment-excluded-bindings");
EXT(YprotoStypesYanyQ,"proto/types","any?");
DEF(YastYbinding_value,"ast","binding-value");
EXT(YprotoScollectionsSsequenceYcatX,"proto/collections/sequence","cat!");
DEF(YastYLfunctionsG,"ast","<functions>");
DEF(YastYmodule_data_processedQ_setter,"ast","module-data-processed?-setter");
DEF(YastYobjectify_assignment_using,"ast","objectify-assignment-using");
DEF(YastYspecial_set,"ast","special-set");
DEF(YastYbinding_index,"ast","binding-index");
EXT(Yclass_props,"boot","class-props");
EXT(YprotoScollectionsScollectionYzap,"proto/collections/collection","zap");
DEF(YastYDsexpr_define_primitive_tag,"ast","$sexpr-define-primitive-tag");
DEF(YastYlocals_functions,"ast","locals-functions");
DEF(YastYfind_binding,"ast","find-binding");
DEF(YastYLmodule_loaderG,"ast","<module-loader>");
DEF(YastYLstatic_global_environmentG,"ast","<static-global-environment>");
DEF(YastYsignature_specs_setter,"ast","signature-specs-setter");
DEF(YastYmodule_loader_modules,"ast","module-loader-modules");
DEF(YastYalternative_consequent_setter,"ast","alternative-consequent-setter");
EXT(YsyntaxYeval,"syntax","eval");
EXT(YprotoSsystemYcomponents_to_pathname,"proto/system","components-to-pathname");
EXT(YprotoScollectionsSlistYassqn,"proto/collections/list","assqn");
DEF(YastYalternative_alternant_setter,"ast","alternative-alternant-setter");
DEF(YastYfunction_binding_setter,"ast","function-binding-setter");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YprotoScollectionsStableYcase_insensitive_string_hash,"proto/collections/table","case-insensitive-string-hash");
EXT(YprotoSmathYaddress_of,"proto/math","address-of");
DEF(YastYLdefinitionG,"ast","<definition>");
DEF(YastYtransaction_dependents,"ast","transaction-dependents");
DEF(YastYenvironment_allows_foreign_namesQ_setter,"ast","environment-allows-foreign-names?-setter");
EXT(YsyntaxYsexpr_syntax_definition_variable,"syntax","sexpr-syntax-definition-variable");
EXT(YprotoScollectionsSmapYfab_map,"proto/collections/map","fab-map");
EXT(YprotoStypesYtE,"proto/types","t=");
EXT(Yerror,"boot","error");
DEF(YastYfree_environment,"ast","free-environment");
EXT(YprotoSsystemYlabel_components,"proto/system","label-components");
EXT(YprotoSmathYGGG,"proto/math",">>>");
EXT(YprotoSmagnitudesYL,"proto/magnitudes","<");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YprotoScollectionsStableYLstr_tabG,"proto/collections/table","<str-tab>");
DEF(YastYLglobal_referenceG,"ast","<global-reference>");
DEF(YastYapplication_binding,"ast","application-binding");
DEF(YastYspecial_define_method,"ast","special-define-method");
DEF(YastYobjectify_function,"ast","objectify-function");
EXT(YsyntaxYsexpr_method_body,"syntax","sexpr-method-body");
DEF(YastYenvironment_uses_modules,"ast","environment-uses-modules");
EXT(YLsigG,"boot","<sig>");
EXT(YPprop_unbound_error,"boot","%prop-unbound-error");
EXT(YsyntaxYsexpr_prop_type,"syntax","sexpr-prop-type");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
DEF(YastYLlocalsG,"ast","<locals>");
DEF(YastYLpredefined_referenceG,"ast","<predefined-reference>");
EXT(YPsymbols,"boot","%symbols");
DEF(YastYlocals_body_setter,"ast","locals-body-setter");
EXT(YstringsYmap_str,"strings","map-str");
EXT(YprotoScollectionsScollectionYdo3,"proto/collections/collection","do3");
DEF(YastYDsexpr_boundQ_tag,"ast","$sexpr-bound?-tag");
EXT(YruntimeYLerrorG,"runtime","<error>");
DEF(YastYtransaction_implemented_bindings,"ast","transaction-implemented-bindings");
DEF(YastYreference_called_functionQ,"ast","reference-called-function?");
EXT(YwriteYdisplay,"write","display");
DEF(YastYenvironment_bindings_setter,"ast","environment-bindings-setter");
DEF(YastYfunction_binding,"ast","function-binding");
DEF(YastYtransaction_implemented_bindings_setter,"ast","transaction-implemented-bindings-setter");
DEF(YastYreference_called_functionQ_setter,"ast","reference-called-function?-setter");
DEF(YastYLapplicationG,"ast","<application>");
EXT(Yhandler_info_message,"boot","handler-info-message");
DEF(YastYenvironment_module_loader,"ast","environment-module-loader");
DEF(YastYbinding_freeQ,"ast","binding-free?");
DEF(YastYLtransactionG,"ast","<transaction>");
EXT(YsyntaxYsexpr_syntax_if_else,"syntax","sexpr-syntax-if-else");
EXT(YprotoScollectionsSbufferYlen_setter,"proto/collections/buffer","len-setter");
EXT(Yfun_names,"boot","fun-names");
EXT(YsyntaxYsexpr_method_signature,"syntax","sexpr-method-signature");
DEF(YastYDarguments_empty,"ast","$arguments-empty");
DEF(YastYobjectify_function_definition,"ast","objectify-function-definition");
DEF(YastYfunction_naryQ,"ast","function-nary?");
DEF(YastYapplication_arguments_setter,"ast","application-arguments-setter");
DEF(YastYmodule_loader_stack_setter,"ast","module-loader-stack-setter");
DEF(YastYregister_magic_binding,"ast","register-magic-binding");
EXT(YprotoScollectionsScollectionYas_copy,"proto/collections/collection","as-copy");
DEF(YastYfunction_self_recursiveQ_setter,"ast","function-self-recursive?-setter");
EXT(YdependencyYdependency_or,"dependency","dependency-or");
DEF(YastYLast_methodG,"ast","<ast-method>");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YOall2Q,"boot","@all2?");
DEF(YastYast_macro_expand,"ast","ast-macro-expand");
DEF(YastYLsequentialG,"ast","<sequential>");
DEF(YastYenvironment_module_setter,"ast","environment-module-setter");
DEF(YastYLast_functionG,"ast","<ast-function>");
EXT(YprotoSsystemYprocess_id,"proto/system","process-id");
EXT(YprotoScollectionsScollectionYadd,"proto/collections/collection","add");
EXT(YprotoSmathYtrunc,"proto/math","trunc");
EXT(YprotoScollectionsScollectionYitems,"proto/collections/collection","items");
DEF(YastYsignature_value_setter,"ast","signature-value-setter");
EXT(YprotoStypesY2nd,"proto/types","2nd");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YsyntaxYsexpr_fab_setter,"syntax","sexpr-fab-setter");
EXT(YprotoSmathYalphaQ,"proto/math","alpha?");
DEF(YastYLast_primitiveG,"ast","<ast-primitive>");
DEF(YastYroll_back_transaction,"ast","roll-back-transaction");
EXT(YprotoSportsYout,"proto/ports","out");
DEF(YastYDempty_static_environment,"ast","$empty-static-environment");
EXT(YprotoSmathYceil,"proto/math","ceil");
DEF(YastYfunction_registers,"ast","function-registers");
DEF(YastYfix_let_arguments,"ast","fix-let-arguments");
EXT(YLcolG,"boot","<col>");
EXT(YLclassG,"boot","<class>");
DEF(YastYmonitor_handler_setter,"ast","monitor-handler-setter");
DEF(YastYDsexpr_useSexport_module_tag,"ast","$sexpr-use/export-module-tag");
EXT(YprotoSsystemYc_filename,"proto/system","c-filename");
EXT(YruntimeYloc_val,"runtime","loc-val");
EXT(YprotoSmathYupperQ,"proto/math","upper?");
DEF(YastYLregular_applicationG,"ast","<regular-application>");
DEF(YastYobjectify_sequential,"ast","objectify-sequential");
EXT(YsyntaxYDsexpr_if_tag,"syntax","$sexpr-if-tag");
EXT(YprotoScollectionsScollectionYaddX,"proto/collections/collection","add!");
EXT(YprotoScollectionsSsequenceYfinds,"proto/collections/sequence","finds");
DEF(YastYmodule_target_environment_setter,"ast","module-target-environment-setter");
EXT(YLmagG,"boot","<mag>");
EXT(YprotoSmathYto_lower,"proto/math","to-lower");
EXT(YsyntaxYDsexpr_define_function_tag,"syntax","$sexpr-define-function-tag");
DEF(YastYPmodule_exports_setter,"ast","%module-exports-setter");
EXT(YDmax_int,"boot","$max-int");
DEF(YastYspecial_macro_expand,"ast","special-macro-expand");
DEF(YastYreference_binding_setter,"ast","reference-binding-setter");
DEF(YastYLvariable_definitionG,"ast","<variable-definition>");
DEF(YastYexpand_bind_list,"ast","expand-bind-list");
DEF(YastYmodule_loader_module_type,"ast","module-loader-module-type");
EXT(YprotoScollectionsScollectionYfind_or,"proto/collections/collection","find-or");
EXT(Yfind_setter,"boot","find-setter");
DEF(YastYLbind_exitG,"ast","<bind-exit>");
EXT(YprotoSmathYposQ,"proto/math","pos?");
EXT(YsyntaxYsexpr_prop_owner,"syntax","sexpr-prop-owner");
DEF(YastYTruntime_module_loaderT,"ast","*runtime-module-loader*");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
EXT(YruntimeYhandler_function,"runtime","handler-function");
DEF(YastYfunction_specs,"ast","function-specs");
DEF(YastYenvironment_bindings,"ast","environment-bindings");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
DEF(YastYmodule_exports_setter,"ast","module-exports-setter");
DEF(YastYfunction_signature,"ast","function-signature");
DEF(YastYfunction_self_recursiveQ,"ast","function-self-recursive?");
EXT(YprotoScollectionsStableYtab_shrink_threshold_setter,"proto/collections/table","tab-shrink-threshold-setter");
DEF(YastYalternative_alternant,"ast","alternative-alternant");
DEF(YastYobjectify_locals,"ast","objectify-locals");
EXT(YprotoSsystemYfile_type,"proto/system","file-type");
DEF(YastYenvironment_next_setter,"ast","environment-next-setter");
EXT(YsyntaxYsexpr_isa_init_values,"syntax","sexpr-isa-init-values");
EXT(YprotoScollectionsScollectionYLtabG,"proto/collections/collection","<tab>");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(YdependencyYDall_dependency_types,"dependency","$all-dependency-types");
EXT(Ytail_setter,"boot","tail-setter");
EXT(YruntimeYcondition_message,"runtime","condition-message");
DEF(YastYconstant_value_setter,"ast","constant-value-setter");
DEF(YastYfunction_source,"ast","function-source");
EXT(YprotoStypesYLproductG,"proto/types","<product>");
EXT(YprotoSsystemYpathname_to_components,"proto/system","pathname-to-components");
EXT(YPsnul,"boot","%snul");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YprotoScollectionsSstringYstr,"proto/collections/string","str");
DEF(YastYLlocal_bindingG,"ast","<local-binding>");
EXT(YprotoSsystemYexe_filename,"proto/system","exe-filename");
EXT(YprotoScollectionsSstringYascii_whitespaces,"proto/collections/string","ascii-whitespaces");
DEF(YastYmaybe_log_dependency,"ast","maybe-log-dependency");
DEF(YastYbinding_inferred_type,"ast","binding-inferred-type");
EXT(YprotoScollectionsScollectionYelt_or,"proto/collections/collection","elt-or");
DEF(YastYast_define_binding,"ast","ast-define-binding");
EXT(YruntimeYformat,"runtime","format");
EXT(YstringsYstring_repeat,"strings","string-repeat");
EXT(YdependencyYDoptimizaton_dependencies,"dependency","$optimizaton-dependencies");
DEF(YastYDfunctions_empty,"ast","$functions-empty");
EXT(YmacrosYcat,"macros","cat");
EXT(YdependencyYdependency_and,"dependency","dependency-and");
EXT(YprotoSmathYbitQ,"proto/math","bit?");
EXT(YprotoSmathYcosh,"proto/math","cosh");
DEF(YastYsignature_naryQ_setter,"ast","signature-nary?-setter");
DEF(YastYapplication_function,"ast","application-function");
DEF(YastYfunction_temporaries,"ast","function-temporaries");
EXT(YprotoScollectionsScollectionYdel,"proto/collections/collection","del");
DEF(YastYbinding_inferred_type_setter,"ast","binding-inferred-type-setter");
EXT(Yadd_prop,"boot","add-prop");
DEF(YastYmagic_bindings,"ast","magic-bindings");
EXT(YprotoSsystemYcomponents_last,"proto/system","components-last");
DEF(YastYbinding_dynamic_extentQ,"ast","binding-dynamic-extent?");
DEF(YastYreload_macros,"ast","reload-macros");
EXT(YprotoSsystemYos_name,"proto/system","os-name");
EXT(YprotoSsystemYTobj_extensionT,"proto/system","*obj-extension*");
EXT(YprotoStypesYlen,"proto/types","len");
DEF(YastYassignment_binding,"ast","assignment-binding");
EXT(YprotoStypesYtype_elts_setter,"proto/types","type-elts-setter");
DEF(YastYlocals_functions_setter,"ast","locals-functions-setter");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
EXT(YLoptsG,"boot","<opts>");
DEF(YastYLreal_referenceG,"ast","<real-reference>");
EXT(YprotoScollectionsScollectionYLenumG,"proto/collections/collection","<enum>");
DEF(YastYobjectify_monitor,"ast","objectify-monitor");
DEF(YastYreloader_do_import,"ast","reloader-do-import");
EXT(YprotoSsystemYcomponents_parent_directory,"proto/system","components-parent-directory");
DEF(YastYspecial_quote,"ast","special-quote");
EXT(YprotoSmathYmod,"proto/math","mod");
DEF(YastYr_extendT,"ast","r-extend*");
EXT(YsyntaxYsexpr_block_name,"syntax","sexpr-block-name");
DEF(YastYsignature_names,"ast","signature-names");
EXT(Ytail,"boot","tail");
EXT(YprotoScollectionsScollectionYdo2,"proto/collections/collection","do2");
EXT(YprotoSmagnitudesYmax,"proto/magnitudes","max");
DEF(YastYfab_subset_environment,"ast","fab-subset-environment");
DEF(YastYinit_g2c_regular_environment,"ast","init-g2c-regular-environment");
DEF(YastYLast_genericG,"ast","<ast-generic>");
DEF(YastYobjectify_boundQ,"ast","objectify-bound?");
DEF(YastYmonitor_test,"ast","monitor-test");
EXT(YprotoSmathYacos,"proto/math","acos");
EXT(YprotoSmathYpower_of_two_ceiling,"proto/math","power-of-two-ceiling");
DEF(YastYmonitor_test_setter,"ast","monitor-test-setter");
EXT(YLtypeG,"boot","<type>");
EXT(YsyntaxYsexpr_function_signature,"syntax","sexpr-function-signature");
EXT(YmacrosYnapp,"macros","napp");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YprotoScollectionsScollectionYlow_elt_setter,"proto/collections/collection","low-elt-setter");
DEF(YastYspecial_define_primitive,"ast","special-define-primitive");
EXT(YsyntaxYsexpr_expand_backquote,"syntax","sexpr-expand-backquote");
DEF(YastYobjectify_foreign_reference,"ast","objectify-foreign-reference");
DEF(YastYspecial_useSexport_module,"ast","special-use/export-module");
DEF(YastYfunction_index_setter,"ast","function-index-setter");
DEF(YastYmonitor_main_thunk_setter,"ast","monitor-main-thunk-setter");
EXT(YsyntaxYDsexpr_locals_tag,"syntax","$sexpr-locals-tag");
EXT(YdependencyYDname_parse_dependency,"dependency","$name-parse-dependency");
EXT(YLlocG,"boot","<loc>");
DEF(YastYbinding_handler_setter,"ast","binding-handler-setter");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
DEF(YastYreload_modules,"ast","reload-modules");
DEF(YastYobjectify,"ast","objectify");
DEF(YastYreloader_do_create_module,"ast","reloader-do-create-module");
EXT(Yord_app_mets,"boot","ord-app-mets");
EXT(YprotoScollectionsSbufferYLbufG,"proto/collections/buffer","<buf>");
EXT(YprotoScollectionsScollectionYfab,"proto/collections/collection","fab");
EXT(Ytype_elts,"boot","type-elts");
EXT(YprotoSmathYLL,"proto/math","<<");
DEF(YastYfunction_source_setter,"ast","function-source-setter");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(YprotoSmagnitudesYmin,"proto/magnitudes","min");
EXT(YprotoSportsYLfile_in_portG,"proto/ports","<file-in-port>");
DEF(YastYTrecord_sourceQT,"ast","*record-source?*");
DEF(YastYmodule_syntax_environment,"ast","module-syntax-environment");
DEF(YastYunchecked_runtime_environment,"ast","unchecked-runtime-environment");
EXT(YsyntaxYsexpr_assignment_variable,"syntax","sexpr-assignment-variable");
EXT(YprotoScollectionsStableYtab_growth_factor,"proto/collections/table","tab-growth-factor");
EXT(YprotoSsystemYTpath_separatorT,"proto/system","*path-separator*");
EXT(YprotoScollectionsSsequenceYins,"proto/collections/sequence","ins");
DEF(YastYLargumentsG,"ast","<arguments>");
DEF(YastYfix_let_body,"ast","fix-let-body");
EXT(YruntimeYalways,"runtime","always");
DEF(YastYLraw_constantG,"ast","<raw-constant>");
EXT(YwriteYwriteln,"write","writeln");
EXT(YprotoSportsYclose,"proto/ports","close");
EXT(YsyntaxYDsexpr_define_generic_tag,"syntax","$sexpr-define-generic-tag");
EXT(YprotoScollectionsScollectionYfill,"proto/collections/collection","fill");
DEF(YastYspecial_define_class,"ast","special-define-class");
EXT(YprotoScollectionsSmapYLmapG,"proto/collections/map","<map>");
DEF(YastYobjectify_application,"ast","objectify-application");
DEF(YastYLmodule_bindingG,"ast","<module-binding>");
EXT(Yclass_name,"boot","class-name");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YprotoScollectionsStableYLsetG,"proto/collections/table","<set>");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YprotoSmathYsinh,"proto/math","sinh");
DEF(YastYmodule_name_setter,"ast","module-name-setter");
EXT(YdependencyYDvalue_optimization_dependency,"dependency","$value-optimization-dependency");
EXT(YsyntaxYsexpr_if_else,"syntax","sexpr-if-else");
DEF(YastYfunction_body_setter,"ast","function-body-setter");
EXT(YPPmacro,"boot","%%macro");
DEF(YastYsequentialize,"ast","sequentialize");
EXT(Yfind_getter,"boot","find-getter");
DEF(YastYspecial_def,"ast","special-def");
DEF(YastYLast_function_definitionG,"ast","<ast-function-definition>");
DEF(YastYas_lst,"ast","as-lst");
DEF(YastYdo_static_global_bindings,"ast","do-static-global-bindings");
EXT(YruntimeYsig,"runtime","sig");
EXT(YprotoSsystemYTgoo_extensionT,"proto/system","*goo-extension*");
EXT(YsyntaxYsexpr_bind_pattern_variables,"syntax","sexpr-bind-pattern-variables");
EXT(YsyntaxYsexpr_define_classQ,"syntax","sexpr-define-class?");
EXT(YsyntaxYsexpr_operator,"syntax","sexpr-operator");
DEF(YastYsignature_naryQ,"ast","signature-nary?");
DEF(YastYcompute_local_reference_offsets,"ast","compute-local-reference-offsets");
EXT(YsyntaxYsexpr_function_body,"syntax","sexpr-function-body");
EXT(YprotoSmathYisqrt,"proto/math","isqrt");
DEF(YastYobjectify_compile_time,"ast","objectify-compile-time");
EXT(YprotoSmathY1_,"proto/math","1-");
DEF(YastYLlocal_referenceG,"ast","<local-reference>");
DEF(YastYensure_module_data,"ast","ensure-module-data");
EXT(YprotoSmathYDe,"proto/math","$e");
EXT(YsyntaxYsexpr_def_variable,"syntax","sexpr-def-variable");
DEF(YastYbinding_reference_class,"ast","binding-reference-class");
EXT(YprotoSportsYLstring_in_portG,"proto/ports","<string-in-port>");
DEF(YastYfix_let_types,"ast","fix-let-types");
EXT(YprotoSmathYeof_objectQ,"proto/math","eof-object?");
EXT(YprotoScollectionsScollectionYempty,"proto/collections/collection","empty");
EXT(YsyntaxYsexpr_operands,"syntax","sexpr-operands");
EXT(Yprop_setter,"boot","prop-setter");
EXT(Ynul,"boot","nul");
EXT(YprotoScollectionsSassocYassocs_test,"proto/collections/assoc","assocs-test");
DEF(YastYLruntime_referenceG,"ast","<runtime-reference>");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
DEF(YastYLprogramsG,"ast","<programs>");
DEF(YastYTnow_rt_envT,"ast","*now-rt-env*");
EXT(YsyntaxYsexpr_text_of_quotation,"syntax","sexpr-text-of-quotation");
EXT(YprotoScollectionsSsequenceYlast,"proto/collections/sequence","last");
EXT(YdependencyYDparse_dependencies,"dependency","$parse-dependencies");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(YsyntaxYsexpr_syntax_if_pattern,"syntax","sexpr-syntax-if-pattern");
EXT(YprotoScollectionsScollectionYnxt,"proto/collections/collection","nxt");
EXT(YprotoScollectionsScollectionYnow,"proto/collections/collection","now");
DEF(YastYbinding_dottedQ,"ast","binding-dotted?");
DEF(YastYobjectify_binding,"ast","objectify-binding");
EXT(YprotoScollectionsSbufferYlenSfill_setter,"proto/collections/buffer","len/fill-setter");
DEF(YastYLimmediate_constantG,"ast","<immediate-constant>");
DEF(YastYapplication_next_methods_setter,"ast","application-next-methods-setter");
EXT(Yfun_val,"boot","fun-val");
DEF(YastYLfab_listG,"ast","<fab-list>");
EXT(YsyntaxYsexpr_prop_init_var,"syntax","sexpr-prop-init-var");
DEF(YastYobjectify_generic_definition,"ast","objectify-generic-definition");
DEF(YastYalternative_consequent,"ast","alternative-consequent");
EXT(YsyntaxYsexpr_prop_name,"syntax","sexpr-prop-name");
EXT(YprotoSsystemYprobe_directory,"proto/system","probe-directory");
DEF(YastYTmagic_bindingsT,"ast","*magic-bindings*");
EXT(Yclass_ancestors,"boot","class-ancestors");
DEF(YastYLbinding_nameG,"ast","<binding-name>");
EXT(YsyntaxYDsexpr_isa_tag,"syntax","$sexpr-isa-tag");
EXT(YprotoSmathYatan2,"proto/math","atan2");
EXT(YprotoScollectionsScollectionYlow_elt,"proto/collections/collection","low-elt");
DEF(YastYbinding_index_setter,"ast","binding-index-setter");
EXT(YprotoScollectionsScollectionYinto,"proto/collections/collection","into");
EXT(YprotoScollectionsSsequenceYrev,"proto/collections/sequence","rev");
DEF(YastYfunction_display_name,"ast","function-display-name");
EXT(YprotoSmathYnum_to_str,"proto/math","num-to-str");
EXT(YsyntaxYDsexpr_quote_tag,"syntax","$sexpr-quote-tag");
DEF(YastYsignature_specs,"ast","signature-specs");
DEF(YastYfix_let_arguments_setter,"ast","fix-let-arguments-setter");
EXT(YDmin_int,"boot","$min-int");
EXT(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
DEF(YastYfunction_debug_name_setter,"ast","function-debug-name-setter");
EXT(YprotoScollectionsSstepYLstepG,"proto/collections/step","<step>");
DEF(YastYassignment_reference,"ast","assignment-reference");
DEF(YastYmonitor_type_setter,"ast","monitor-type-setter");
EXT(YsyntaxYsexpr_syntax_definition_value,"syntax","sexpr-syntax-definition-value");
DEF(YastYfab_static_global_environment,"ast","fab-static-global-environment");
DEF(YastYLast_signatureG,"ast","<ast-signature>");
EXT(YruntimeYspread,"runtime","spread");
EXT(YprotoSmathYnegQ,"proto/math","neg?");
DEF(YastYlocals_body,"ast","locals-body");
DEF(YastYbinding_dynamic_extentQ_setter,"ast","binding-dynamic-extent?-setter");
EXT(YprotoSmathYabs,"proto/math","abs");
DEF(YastYprocess_module_data,"ast","process-module-data");
EXT(YprotoSmathYfloor,"proto/math","floor");
DEF(YastYobjectify_signature,"ast","objectify-signature");
EXT(YmacrosYpair,"macros","pair");
EXT(YprotoSmathYcontagious_type,"proto/math","contagious-type");
EXT(YLfloG,"boot","<flo>");
EXT(YLsymG,"boot","<sym>");
DEF(YastYassignment_form_setter,"ast","assignment-form-setter");
DEF(YastYenvironment_uses_modules_setter,"ast","environment-uses-modules-setter");
EXT(YprotoSmathYDpi,"proto/math","$pi");
EXT(YprotoScollectionsSsequenceYinsX,"proto/collections/sequence","ins!");
DEF(YastYmodule_exports,"ast","module-exports");
DEF(YastYspecial_method,"ast","special-method");
DEF(YastYbinding_mutableQ_setter,"ast","binding-mutable?-setter");
DEF(YastYobjectify_primitive_definition,"ast","objectify-primitive-definition");
EXT(YsyntaxYsexpr_loc_bound_names,"syntax","sexpr-loc-bound-names");
DEF(YastYLast_embodied_functionG,"ast","<ast-embodied-function>");
DEF(YastYsignature_bindings_setter,"ast","signature-bindings-setter");
EXT(YprotoScollectionsScollectionYallQ,"proto/collections/collection","all?");
EXT(YprotoSsystemYos_val,"proto/system","os-val");
EXT(YprotoSmagnitudesYGE,"proto/magnitudes",">=");
EXT(YprotoSportsYLout_portG,"proto/ports","<out-port>");
DEF(YastYmodule_runtime_data,"ast","module-runtime-data");
EXT(YprotoSsystemYadd_tmp_path,"proto/system","add-tmp-path");
EXT(YprotoSmathYceilingS,"proto/math","ceiling/");
DEF(YastYDgoo_runtime_module_name,"ast","$goo-runtime-module-name");
EXT(YprotoSmathYasin,"proto/math","asin");
DEF(YastYremove_module_internalX,"ast","remove-module-internal!");
EXT(YprotoScollectionsSstepYfirst_then,"proto/collections/step","first-then");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YmacrosYelt,"macros","elt");
EXT(YprotoStypesYas,"proto/types","as");
EXT(YprotoScollectionsSstringYascii_limit,"proto/collections/string","ascii-limit");
EXT(YprotoScollectionsScollectionYnow_setter,"proto/collections/collection","now-setter");
DEF(YastYLassignmentG,"ast","<assignment>");
EXT(Yfun_mets,"boot","fun-mets");
DEF(YastYobjectify_function_source,"ast","objectify-function-source");
DEF(YastYload_and_register_module,"ast","load-and-register-module");
EXT(YprotoScollectionsSlistYlist,"proto/collections/list","list");
EXT(YsyntaxYsexpr_loc_bound_bodies,"syntax","sexpr-loc-bound-bodies");
EXT(YprotoSmathYN,"proto/math","~");
DEF(YastYbinding_handler,"ast","binding-handler");
EXT(Yobject_parents,"boot","object-parents");
DEF(YastYbinding_native_toQ,"ast","binding-native-to?");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YsyntaxYsexpr_if_then,"syntax","sexpr-if-then");
DEF(YastYfunctions,"ast","functions");
EXT(YsyntaxYsexpr_def_value,"syntax","sexpr-def-value");
EXT(Ygen_src_setter,"boot","gen-src-setter");
DEF(YastYfunction_data_refs_setter,"ast","function-data-refs-setter");
EXT(YmacrosYdo,"macros","do");
DEF(YastYbinding_module_name,"ast","binding-module-name");
EXT(YOisaQ,"boot","@isa?");
EXT(YprotoScollectionsSsequenceY3rd,"proto/collections/sequence","3rd");
EXT(YprotoScollectionsScollectionYkeys,"proto/collections/collection","keys");
DEF(YastYspecial_define_syntax,"ast","special-define-syntax");
DEF(YastYspecial_let,"ast","special-let");
DEF(YastYbinding_dottedQ_setter,"ast","binding-dotted?-setter");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YruntimeYLconditionG,"runtime","<condition>");
DEF(YastYimport_globalX,"ast","import-global!");
EXT(YprotoSsystemYos_val_setter,"proto/system","os-val-setter");
EXT(YprotoScollectionsScollectionYrange_error,"proto/collections/collection","range-error");
DEF(YastYreloader_do_runtime_binding,"ast","reloader-do-runtime-binding");
EXT(YwriteYTmax_print_lengthT,"write","*max-print-length*");
DEF(YastYsignature_value,"ast","signature-value");
DEF(YastYunwind_protect_cleanup_thunk,"ast","unwind-protect-cleanup-thunk");
DEF(YastYtransaction_register_implemented_binding,"ast","transaction-register-implemented-binding");
EXT(YsyntaxYsexpr_loc_raw_body,"syntax","sexpr-loc-raw-body");
DEF(YastYspecial_export,"ast","special-export");
EXT(YsyntaxYsexpr_fab_setter_name,"syntax","sexpr-fab-setter-name");
EXT(YLpropG,"boot","<prop>");
DEF(YastYmodule_loader_modules_setter,"ast","module-loader-modules-setter");
DEF(YastYspecial_define_function,"ast","special-define-function");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YprotoScollectionsStableYtab_growth_factor_setter,"proto/collections/table","tab-growth-factor-setter");
EXT(YprotoSmathYC,"proto/math","^");
EXT(YprotoScollectionsSsequenceYsub_setter,"proto/collections/sequence","sub-setter");
EXT(YdependencyYDempty_dependency,"dependency","$empty-dependency");
EXT(YprotoSportsYport_index_setter,"proto/ports","port-index-setter");
EXT(YprotoScollectionsSassocYLassocsG,"proto/collections/assoc","<assocs>");
DEF(YastYftype,"ast","ftype");
EXT(YLgenG,"boot","<gen>");
EXT(YsyntaxYsexpr_signature_value,"syntax","sexpr-signature-value");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
DEF(YastYobjectify_free_global_reference,"ast","objectify-free-global-reference");
DEF(YastYenvironment_next,"ast","environment-next");
DEF(YastYmodule_binding,"ast","module-binding");
EXT(Ynil,"boot","nil");
EXT(YsyntaxYsexpr_make_application,"syntax","sexpr-make-application");
EXT(YdependencyYdetach_dependent,"dependency","detach-dependent");
DEF(YastYbinding_value_setter,"ast","binding-value-setter");
DEF(YastYspecial_if,"ast","special-if");
EXT(Ygen_src,"boot","gen-src");
EXT(Ynew,"boot","new");
DEF(YastYDsexpr_optionals_type_name,"ast","$sexpr-optionals-type-name");
DEF(YastYLast_generic_definitionG,"ast","<ast-generic-definition>");
EXT(YprotoScollectionsStableYtab_growth_threshold_setter,"proto/collections/table","tab-growth-threshold-setter");
EXT(YsyntaxYsexpr_prop_initQ,"syntax","sexpr-prop-init?");
EXT(YprotoSsystemYfile_existsQ,"proto/system","file-exists?");
DEF(YastYbinding_global_box_setter,"ast","binding-global-box-setter");
EXT(YprotoSportsYport_contents,"proto/ports","port-contents");
EXT(YprotoSmathYfabs,"proto/math","fabs");
EXT(YprotoSportsYreadyQ,"proto/ports","ready?");
EXT(YsyntaxYsexpr_definition_variable,"syntax","sexpr-definition-variable");
DEF(YastYobjectify_symbol,"ast","objectify-symbol");
DEF(YastYreloader_do_use_module,"ast","reloader-do-use-module");
DEF(YastYbinding_kind,"ast","binding-kind");
DEF(YastYLstatic_local_environmentG,"ast","<static-local-environment>");
EXT(YsyntaxYDsexpr_define_class_tag,"syntax","$sexpr-define-class-tag");
EXT(YprotoSmathYlowerQ,"proto/math","lower?");
EXT(YprotoScollectionsScollectionYnow_key,"proto/collections/collection","now-key");
EXT(YprotoSmathYto_digit,"proto/math","to-digit");
EXT(YprotoSmathYtan,"proto/math","tan");
DEF(YastYLcomputed_programG,"ast","<computed-program>");
DEF(YastYdo_module_loader_modules,"ast","do-module-loader-modules");
DEF(YastYspecial_syntax_if,"ast","special-syntax-if");
DEF(YastYinstall_interpreter_hacks,"ast","install-interpreter-hacks");
DEF(YastYLstatic_environmentG,"ast","<static-environment>");
EXT(Yobject_props,"boot","object-props");
DEF(YastYtransaction_register_dependent,"ast","transaction-register-dependent");
DEF(YastYsignature_bindings,"ast","signature-bindings");
DEF(YastYapplication_tailQ,"ast","application-tail?");
DEF(YastYfunction_registers_setter,"ast","function-registers-setter");
DEF(YastYDfab_list_empty,"ast","$fab-list-empty");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
DEF(YastYLreferenceG,"ast","<reference>");
DEF(YastYspecial_define_static_syntax,"ast","special-define-static-syntax");
DEF(YastYDsexpr_define_static_syntax_tag,"ast","$sexpr-define-static-syntax-tag");
DEF(YastYinstall_initial_bindings,"ast","install-initial-bindings");
DEF(YastYDfree_environment_empty,"ast","$free-environment-empty");
DEF(YastYmonitor_info_setter,"ast","monitor-info-setter");
EXT(YruntimeYTgensym_counterT,"runtime","*gensym-counter*");
DEF(YastYruntime_module_loader,"ast","runtime-module-loader");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YsyntaxYsexpr_isa_init_props,"syntax","sexpr-isa-init-props");
DEF(YastYLmodule_binding_referenceG,"ast","<module-binding-reference>");
DEF(YastYframe_bindings,"ast","frame-bindings");
EXT(YLintG,"boot","<int>");
EXT(YprotoScollectionsSrangeYLrangeG,"proto/collections/range","<range>");
EXT(YLstrG,"boot","<str>");
DEF(YastYsequential,"ast","sequential");
DEF(YastYbind_exit_main_fun,"ast","bind-exit-main-fun");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YprotoScollectionsStableYid_hash,"proto/collections/table","id-hash");
EXT(YprotoSportsYport_index,"proto/ports","port-index");
DEF(YastYglobal_box_value,"ast","global-box-value");
EXT(YPwith_monitor,"boot","%with-monitor");
EXT(YsyntaxYsexpr_fab_getter,"syntax","sexpr-fab-getter");
DEF(YastYfind_environment_module,"ast","find-environment-module");
DEF(YastYobjectify_useSexport_module,"ast","objectify-use/export-module");
EXT(YprotoScollectionsSsequenceYdo_key_vals,"proto/collections/sequence","do-key-vals");
DEF(YastYforeign_nameQ,"ast","foreign-name?");
EXT(YprotoScollectionsSsequenceY1st,"proto/collections/sequence","1st");
EXT(YprotoScollectionsSlistYpop,"proto/collections/list","pop");
DEF(YastYobjectify_alternative,"ast","objectify-alternative");
EXT(YprotoSmagnitudesYLE,"proto/magnitudes","<=");
DEF(YastYLglobal_boxG,"ast","<global-box>");
DEF(YastYconstant_index_setter,"ast","constant-index-setter");
DEF(YastYremove_modules_by_nameX,"ast","remove-modules-by-name!");
DEF(YastYLglobal_assignmentG,"ast","<global-assignment>");
EXT(Yfun_arity,"boot","fun-arity");
DEF(YastYboundQ_reference_setter,"ast","bound?-reference-setter");
EXT(YprotoSmathYGG,"proto/math",">>");
DEF(YastYTmacro_tracingQT,"ast","*macro-tracing?*");
DEF(YastYast_evaluate,"ast","ast-evaluate");
EXT(YprotoSportsYopen,"proto/ports","open");
DEF(YastYmonitor_handler,"ast","monitor-handler");
EXT(YsyntaxYDsexpr_define_tag,"syntax","$sexpr-define-tag");
DEF(YastYfab_list,"ast","fab-list");
EXT(YmacrosYcat_sym,"macros","cat-sym");
DEF(YastYapplication_binding_setter,"ast","application-binding-setter");
EXT(YprotoSmathYoddQ,"proto/math","odd?");
EXT(YmacrosYEE,"macros","==");
DEF(YastYarguments,"ast","arguments");
EXT(YsyntaxYsexpr_definition_value,"syntax","sexpr-definition-value");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YruntimeYcurry,"runtime","curry");
DEF(YastYruntime_environment,"ast","runtime-environment");
EXT(Ysig_names,"boot","sig-names");
EXT(YprotoScollectionsScollectionYmemQ,"proto/collections/collection","mem?");
EXT(YprotoScollectionsScollectionYkey_test,"proto/collections/collection","key-test");
DEF(YastYapplication_knownQ_setter,"ast","application-known?-setter");
EXT(YsyntaxYsexpr_function_definition_variable,"syntax","sexpr-function-definition-variable");
DEF(YastYapplication_arguments,"ast","application-arguments");
EXT(YprotoSportsYport_line_setter,"proto/ports","port-line-setter");
DEF(YastYreference_frame_offset,"ast","reference-frame-offset");
DEF(YastYLast_primitive_definitionG,"ast","<ast-primitive-definition>");
DEF(YastYfunction_data_refs,"ast","function-data-refs");
DEF(YastYreloader_do_other_binding,"ast","reloader-do-other-binding");
EXT(YprotoSmathYE,"proto/math","=");
DEF(YastYinsert_globalsX,"ast","insert-globals!");
EXT(YmacrosYrevX,"macros","rev!");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
DEF(YastYLlocal_assignmentG,"ast","<local-assignment>");
DEF(YastYmodule_transaction,"ast","module-transaction");
EXT(YsyntaxYDsexpr_macro_expand_tag,"syntax","$sexpr-macro-expand-tag");
EXT(YprotoSmathYS,"proto/math","/");
EXT(YprotoSportsYpeek,"proto/ports","peek");
EXT(YprotoScollectionsSsequenceYvals_to_str,"proto/collections/sequence","vals-to-str");
DEF(YastYspecial_define,"ast","special-define");
EXT(YprotoScollectionsScollectionYany2Q,"proto/collections/collection","any2?");
DEF(YastYinit_environment_for_eval,"ast","init-environment-for-eval");
EXT(Yhead_setter,"boot","head-setter");
EXT(Ytype_class,"boot","type-class");
DEF(YastYreport_undefined_global_bindings,"ast","report-undefined-global-bindings");
EXT(YsyntaxYsexpr_make_macro_function,"syntax","sexpr-make-macro-function");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(Ylst,"boot","lst");
EXT(Ytup,"boot","tup");
EXT(YdependencyYlog_dependency,"dependency","log-dependency");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YprotoSportsYin,"proto/ports","in");
EXT(YisaQ,"boot","isa?");
EXT(YLunionG,"boot","<union>");
DEF(YastYobjectify_definition,"ast","objectify-definition");
DEF(YastYmodule_transaction_setter,"ast","module-transaction-setter");
DEF(YastYcompile_time_program,"ast","compile-time-program");
DEF(YastYlocals_bindings_setter,"ast","locals-bindings-setter");
DEF(YastYLpredefined_applicationG,"ast","<predefined-application>");
EXT(YsyntaxYsexpr_unquote_splicingQ,"syntax","sexpr-unquote-splicing?");
DEF(YastYLfree_environmentG,"ast","<free-environment>");
DEF(YastYconstant_index,"ast","constant-index");
DEF(YastYcompute_transitive_users,"ast","compute-transitive-users");
DEF(YastYassignment_form,"ast","assignment-form");
EXT(YPprop,"boot","%prop");
EXT(YprotoSsystemYcreate_directory,"proto/system","create-directory");
EXT(YsyntaxYsexpr_isa_parent,"syntax","sexpr-isa-parent");
DEF(YastYbinding_type_setter,"ast","binding-type-setter");
EXT(YprotoSmathYcos,"proto/math","cos");
DEF(YastYDsexpr_use_module_tag,"ast","$sexpr-use-module-tag");
DEF(YastYmodule_data_processedQ,"ast","module-data-processed?");
DEF(YastYreference_frame_offset_setter,"ast","reference-frame-offset-setter");
DEF(YastYfunction_bindings,"ast","function-bindings");
EXT(YsyntaxYDsexpr_set_tag,"syntax","$sexpr-set-tag");
EXT(YsyntaxYDsexpr_begin_tag,"syntax","$sexpr-begin-tag");
EXT(YprotoSsystemYobj_filename,"proto/system","obj-filename");
EXT(YprotoStypesYtT,"proto/types","t*");
DEF(YastYDgoo_boot_module_name,"ast","$goo-boot-module-name");
EXT(YprotoScollectionsStableYtab_hash,"proto/collections/table","tab-hash");
EXT(YdependencyYdependency_includes_allQ,"dependency","dependency-includes-all?");
EXT(YprotoSportsYputs,"proto/ports","puts");
EXT(YruntimeYfab_handler,"runtime","fab-handler");
DEF(YastYruntime_core_environment,"ast","runtime-core-environment");
EXT(YprotoScollectionsSbufferYpop_lastX,"proto/collections/buffer","pop-last!");
EXT(YsyntaxYsexpr_defQ,"syntax","sexpr-def?");
EXT(YprotoSsystemYadd_build_path,"proto/system","add-build-path");
EXT(YPisa,"boot","%isa");
DEF(YastYobjectify_raw,"ast","objectify-raw");
DEF(YastYobjectify_bind_exit,"ast","objectify-bind-exit");
DEF(YastYspecial_compile_time_also,"ast","special-compile-time-also");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(YprotoScollectionsScollectionYfoldA,"proto/collections/collection","fold+");
EXT(YprotoScollectionsSbufferYpush_lastX,"proto/collections/buffer","push-last!");
DEF(YastYenvironment_allows_foreign_namesQ,"ast","environment-allows-foreign-names?");
EXT(YsyntaxYsexpr_function_definition_value,"syntax","sexpr-function-definition-value");
DEF(YastYtransaction_dependents_setter,"ast","transaction-dependents-setter");
EXT(Yhead,"boot","head");
DEF(YastYconstant_value,"ast","constant-value");
DEF(YastYfunction_debug_name,"ast","function-debug-name");
EXT(YsyntaxYDsexpr_prop_tag,"syntax","$sexpr-prop-tag");
DEF(YastYalternative_condition_setter,"ast","alternative-condition-setter");
DEF(YastYDsexpr_compile_time_tag,"ast","$sexpr-compile-time-tag");
DEF(YastYDsexpr_compile_time_also_tag,"ast","$sexpr-compile-time-also-tag");
EXT(YprotoScollectionsSstringYstr_to_num,"proto/collections/string","str-to-num");
DEF(YastYfunction_kind,"ast","function-kind");
EXT(YprotoSsystemYTgoo_rootT,"proto/system","*goo-root*");
DEF(YastYbinding_info_setter,"ast","binding-info-setter");
DEF(YastYLruntime_assignmentG,"ast","<runtime-assignment>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_285);
DEFLIT(lit_389);
DEFLIT(lit_185);
DEFLIT(lit_493);
DEFLIT(lit_467);
DEFLIT(lit_516);
DEFLIT(lit_583);
DEFLIT(lit_313);
DEFLIT(lit_75);
DEFLIT(lit_505);
DEFLIT(lit_577);
DEFLIT(lit_268);
DEFLIT(lit_335);
DEFLIT(lit_540);
DEFLIT(lit_117);
DEFLIT(lit_327);
DEFLIT(lit_458);
DEFLIT(lit_112);
DEFLIT(lit_201);
DEFLIT(lit_232);
DEFLIT(lit_256);
DEFLIT(lit_511);
DEFLIT(lit_506);
DEFLIT(lit_251);
DEFLIT(lit_438);
DEFLIT(lit_366);
DEFLIT(lit_114);
DEFLIT(lit_37);
DEFLIT(lit_140);
DEFLIT(lit_10);
DEFLIT(lit_216);
DEFLIT(lit_226);
DEFLIT(lit_46);
DEFLIT(lit_247);
DEFLIT(lit_66);
DEFLIT(lit_303);
DEFLIT(lit_356);
DEFLIT(lit_535);
DEFLIT(lit_557);
DEFLIT(lit_572);
DEFLIT(lit_325);
DEFLIT(lit_318);
DEFLIT(lit_489);
DEFLIT(lit_388);
DEFLIT(lit_362);
DEFLIT(lit_190);
DEFLIT(lit_36);
DEFLIT(lit_17);
DEFLIT(lit_502);
DEFLIT(lit_343);
DEFLIT(lit_278);
DEFLIT(lit_581);
DEFLIT(lit_508);
DEFLIT(lit_350);
DEFLIT(lit_260);
DEFLIT(lit_522);
DEFLIT(lit_159);
DEFLIT(lit_396);
DEFLIT(lit_465);
DEFLIT(lit_513);
DEFLIT(lit_523);
DEFLIT(lit_460);
DEFLIT(lit_0);
DEFLIT(lit_469);
DEFLIT(lit_487);
DEFLIT(lit_342);
DEFLIT(lit_276);
DEFLIT(lit_215);
DEFLIT(lit_144);
DEFLIT(lit_245);
DEFLIT(lit_402);
DEFLIT(lit_436);
DEFLIT(lit_45);
DEFLIT(lit_337);
DEFLIT(lit_2);
DEFLIT(lit_579);
DEFLIT(lit_348);
DEFLIT(lit_173);
DEFLIT(lit_202);
DEFLIT(lit_142);
DEFLIT(lit_584);
DEFLIT(lit_99);
DEFLIT(lit_392);
DEFLIT(lit_399);
DEFLIT(lit_561);
DEFLIT(lit_1);
DEFLIT(lit_219);
DEFLIT(lit_129);
DEFLIT(lit_305);
DEFLIT(lit_412);
DEFLIT(lit_354);
DEFLIT(lit_130);
DEFLIT(lit_254);
DEFLIT(lit_434);
DEFLIT(lit_302);
DEFLIT(lit_431);
DEFLIT(lit_543);
DEFLIT(lit_31);
DEFLIT(lit_453);
DEFLIT(lit_252);
DEFLIT(lit_294);
DEFLIT(lit_435);
DEFLIT(lit_175);
DEFLIT(lit_320);
DEFLIT(lit_171);
DEFLIT(lit_293);
DEFLIT(lit_29);
DEFLIT(lit_310);
DEFLIT(lit_593);
DEFLIT(lit_30);
DEFLIT(lit_162);
DEFLIT(lit_570);
DEFLIT(lit_51);
DEFLIT(lit_250);
DEFLIT(lit_87);
DEFLIT(lit_121);
DEFLIT(lit_168);
DEFLIT(lit_43);
DEFLIT(lit_455);
DEFLIT(lit_103);
DEFLIT(lit_28);
DEFLIT(lit_380);
DEFLIT(lit_125);
DEFLIT(lit_420);
DEFLIT(lit_339);
DEFLIT(lit_368);
DEFLIT(lit_526);
DEFLIT(lit_588);
DEFLIT(lit_383);
DEFLIT(lit_243);
DEFLIT(lit_265);
DEFLIT(lit_18);
DEFLIT(lit_132);
DEFLIT(lit_316);
DEFLIT(lit_39);
DEFLIT(lit_135);
DEFLIT(lit_329);
DEFLIT(lit_395);
DEFLIT(lit_136);
DEFLIT(lit_462);
DEFLIT(lit_492);
DEFLIT(lit_149);
DEFLIT(lit_510);
DEFLIT(lit_224);
DEFLIT(lit_417);
DEFLIT(lit_479);
DEFLIT(lit_284);
DEFLIT(lit_377);
DEFLIT(lit_128);
DEFLIT(lit_137);
DEFLIT(lit_541);
DEFLIT(lit_282);
DEFLIT(lit_225);
DEFLIT(lit_567);
DEFLIT(lit_83);
DEFLIT(lit_264);
DEFLIT(lit_376);
DEFLIT(lit_189);
DEFLIT(lit_573);
DEFLIT(lit_528);
DEFLIT(lit_93);
DEFLIT(lit_20);
DEFLIT(lit_275);
DEFLIT(lit_19);
DEFLIT(lit_375);
DEFLIT(lit_497);
DEFLIT(lit_563);
DEFLIT(lit_477);
DEFLIT(lit_69);
DEFLIT(lit_363);
DEFLIT(lit_4);
DEFLIT(lit_317);
DEFLIT(lit_21);
DEFLIT(lit_248);
DEFLIT(lit_566);
DEFLIT(lit_40);
DEFLIT(lit_312);
DEFLIT(lit_133);
DEFLIT(lit_355);
DEFLIT(lit_499);
DEFLIT(lit_503);
DEFLIT(lit_186);
DEFLIT(lit_504);
DEFLIT(lit_204);
DEFLIT(lit_161);
DEFLIT(lit_394);
DEFLIT(lit_478);
DEFLIT(lit_23);
DEFLIT(lit_74);
DEFLIT(lit_111);
DEFLIT(lit_549);
DEFLIT(lit_110);
DEFLIT(lit_56);
DEFLIT(lit_440);
DEFLIT(lit_589);
DEFLIT(lit_486);
DEFLIT(lit_14);
DEFLIT(lit_537);
DEFLIT(lit_485);
DEFLIT(lit_533);
DEFLIT(lit_64);
DEFLIT(lit_150);
DEFLIT(lit_345);
DEFLIT(lit_414);
DEFLIT(lit_331);
DEFLIT(lit_446);
DEFLIT(lit_475);
DEFLIT(lit_449);
DEFLIT(lit_82);
DEFLIT(lit_22);
DEFLIT(lit_24);
DEFLIT(lit_13);
DEFLIT(lit_246);
DEFLIT(lit_236);
DEFLIT(lit_35);
DEFLIT(lit_228);
DEFLIT(lit_54);
DEFLIT(lit_381);
DEFLIT(lit_520);
DEFLIT(lit_548);
DEFLIT(lit_315);
DEFLIT(lit_62);
DEFLIT(lit_239);
DEFLIT(lit_498);
DEFLIT(lit_430);
DEFLIT(lit_267);
DEFLIT(lit_108);
DEFLIT(lit_196);
DEFLIT(lit_292);
DEFLIT(lit_569);
DEFLIT(lit_72);
DEFLIT(lit_210);
DEFLIT(lit_550);
DEFLIT(lit_95);
DEFLIT(lit_157);
DEFLIT(lit_183);
DEFLIT(lit_474);
DEFLIT(lit_79);
DEFLIT(lit_222);
DEFLIT(lit_351);
DEFLIT(lit_272);
DEFLIT(lit_464);
DEFLIT(lit_90);
DEFLIT(lit_269);
DEFLIT(lit_81);
DEFLIT(lit_242);
DEFLIT(lit_482);
DEFLIT(lit_298);
DEFLIT(lit_238);
DEFLIT(lit_266);
DEFLIT(lit_116);
DEFLIT(lit_127);
DEFLIT(lit_208);
DEFLIT(lit_270);
DEFLIT(lit_480);
DEFLIT(lit_271);
DEFLIT(lit_357);
DEFLIT(lit_452);
DEFLIT(lit_124);
DEFLIT(lit_509);
DEFLIT(lit_432);
DEFLIT(lit_179);
DEFLIT(lit_184);
DEFLIT(lit_207);
DEFLIT(lit_199);
DEFLIT(lit_7);
DEFLIT(lit_333);
DEFLIT(lit_143);
DEFLIT(lit_307);
DEFLIT(lit_466);
DEFLIT(lit_415);
DEFLIT(lit_131);
DEFLIT(lit_188);
DEFLIT(lit_174);
DEFLIT(lit_229);
DEFLIT(lit_592);
DEFLIT(lit_12);
DEFLIT(lit_421);
DEFLIT(lit_259);
DEFLIT(lit_496);
DEFLIT(lit_213);
DEFLIT(lit_309);
DEFLIT(lit_546);
DEFLIT(lit_3);
DEFLIT(lit_514);
DEFLIT(lit_181);
DEFLIT(lit_491);
DEFLIT(lit_518);
DEFLIT(lit_70);
DEFLIT(lit_96);
DEFLIT(lit_398);
DEFLIT(lit_532);
DEFLIT(lit_359);
DEFLIT(lit_158);
DEFLIT(lit_457);
DEFLIT(lit_574);
DEFLIT(lit_41);
DEFLIT(lit_42);
DEFLIT(lit_120);
DEFLIT(lit_442);
DEFLIT(lit_166);
DEFLIT(lit_198);
DEFLIT(lit_445);
DEFLIT(lit_595);
DEFLIT(lit_139);
DEFLIT(lit_61);
DEFLIT(lit_203);
DEFLIT(lit_180);
DEFLIT(lit_560);
DEFLIT(lit_484);
DEFLIT(lit_53);
DEFLIT(lit_468);
DEFLIT(lit_177);
DEFLIT(lit_48);
DEFLIT(lit_33);
DEFLIT(lit_321);
DEFLIT(lit_8);
DEFLIT(lit_100);
DEFLIT(lit_582);
DEFLIT(lit_218);
DEFLIT(lit_214);
DEFLIT(lit_172);
DEFLIT(lit_472);
DEFLIT(lit_34);
DEFLIT(lit_433);
DEFLIT(lit_347);
DEFLIT(lit_58);
DEFLIT(lit_409);
DEFLIT(lit_92);
DEFLIT(lit_240);
DEFLIT(lit_437);
DEFLIT(lit_68);
DEFLIT(lit_390);
DEFLIT(lit_154);
DEFLIT(lit_571);
DEFLIT(lit_447);
DEFLIT(lit_165);
DEFLIT(lit_105);
DEFLIT(lit_153);
DEFLIT(lit_407);
DEFLIT(lit_200);
DEFLIT(lit_558);
DEFLIT(lit_427);
DEFLIT(lit_290);
DEFLIT(lit_145);
DEFLIT(lit_257);
DEFLIT(lit_575);
DEFLIT(lit_413);
DEFLIT(lit_576);
DEFLIT(lit_261);
DEFLIT(lit_500);
DEFLIT(lit_360);
DEFLIT(lit_296);
DEFLIT(lit_591);
DEFLIT(lit_280);
DEFLIT(lit_568);
DEFLIT(lit_156);
DEFLIT(lit_490);
DEFLIT(lit_49);
DEFLIT(lit_590);
DEFLIT(lit_371);
DEFLIT(lit_73);
DEFLIT(lit_235);
DEFLIT(lit_206);
DEFLIT(lit_11);
DEFLIT(lit_422);
DEFLIT(lit_564);
DEFLIT(lit_301);
DEFLIT(lit_38);
DEFLIT(lit_324);
DEFLIT(lit_530);
DEFLIT(lit_512);
DEFLIT(lit_401);
DEFLIT(lit_163);
DEFLIT(lit_169);
DEFLIT(lit_297);
DEFLIT(lit_115);
DEFLIT(lit_425);
DEFLIT(lit_98);
DEFLIT(lit_594);
DEFLIT(lit_341);
DEFLIT(lit_346);
DEFLIT(lit_536);
DEFLIT(lit_109);
DEFLIT(lit_25);
DEFLIT(lit_291);
DEFLIT(lit_106);
DEFLIT(lit_71);
DEFLIT(lit_369);
DEFLIT(lit_227);
DEFLIT(lit_471);
DEFLIT(lit_164);
DEFLIT(lit_473);
DEFLIT(lit_44);
DEFLIT(lit_80);
DEFLIT(lit_52);
DEFLIT(lit_385);
DEFLIT(lit_454);
DEFLIT(lit_334);
DEFLIT(lit_60);
DEFLIT(lit_212);
DEFLIT(lit_220);
DEFLIT(lit_233);
DEFLIT(lit_50);
DEFLIT(lit_195);
DEFLIT(lit_308);
DEFLIT(lit_123);
DEFLIT(lit_146);
DEFLIT(lit_101);
DEFLIT(lit_63);
DEFLIT(lit_336);
DEFLIT(lit_456);
DEFLIT(lit_141);
DEFLIT(lit_304);
DEFLIT(lit_559);
DEFLIT(lit_107);
DEFLIT(lit_495);
DEFLIT(lit_119);
DEFLIT(lit_358);
DEFLIT(lit_253);
DEFLIT(lit_556);
DEFLIT(lit_102);
DEFLIT(lit_178);
DEFLIT(lit_241);
DEFLIT(lit_59);
DEFLIT(lit_148);
DEFLIT(lit_352);
DEFLIT(lit_553);
DEFLIT(lit_529);
DEFLIT(lit_193);
DEFLIT(lit_273);
DEFLIT(lit_428);
DEFLIT(lit_370);
DEFLIT(lit_525);
DEFLIT(lit_57);
DEFLIT(lit_340);
DEFLIT(lit_167);
DEFLIT(lit_104);
DEFLIT(lit_544);
DEFLIT(lit_410);
DEFLIT(lit_551);
DEFLIT(lit_408);
DEFLIT(lit_287);
DEFLIT(lit_155);
DEFLIT(lit_85);
DEFLIT(lit_15);
DEFLIT(lit_365);
DEFLIT(lit_450);
DEFLIT(lit_542);
DEFLIT(lit_147);
DEFLIT(lit_545);
DEFLIT(lit_382);
DEFLIT(lit_361);
DEFLIT(lit_314);
DEFLIT(lit_501);
DEFLIT(lit_476);
DEFLIT(lit_531);
DEFLIT(lit_344);
DEFLIT(lit_527);
DEFLIT(lit_283);
DEFLIT(lit_411);
DEFLIT(lit_587);
DEFLIT(lit_443);
DEFLIT(lit_113);
DEFLIT(lit_249);
DEFLIT(lit_322);
DEFLIT(lit_419);
DEFLIT(lit_534);
DEFLIT(lit_507);
DEFLIT(lit_424);
DEFLIT(lit_580);
DEFLIT(lit_470);
DEFLIT(lit_515);
DEFLIT(lit_330);
DEFLIT(lit_379);
DEFLIT(lit_338);
DEFLIT(lit_311);
DEFLIT(lit_373);
DEFLIT(lit_263);
DEFLIT(lit_451);
DEFLIT(lit_9);
DEFLIT(lit_6);
DEFLIT(lit_55);
DEFLIT(lit_279);
DEFLIT(lit_364);
DEFLIT(lit_97);
DEFLIT(lit_300);
DEFLIT(lit_160);
DEFLIT(lit_182);
DEFLIT(lit_378);
DEFLIT(lit_277);
DEFLIT(lit_319);
DEFLIT(lit_332);
DEFLIT(lit_138);
DEFLIT(lit_26);
DEFLIT(lit_328);
DEFLIT(lit_585);
DEFLIT(lit_262);
DEFLIT(lit_488);
DEFLIT(lit_211);
DEFLIT(lit_89);
DEFLIT(lit_481);
DEFLIT(lit_459);
DEFLIT(lit_405);
DEFLIT(lit_67);
DEFLIT(lit_554);
DEFLIT(lit_255);
DEFLIT(lit_562);
DEFLIT(lit_404);
DEFLIT(lit_78);
DEFLIT(lit_521);
DEFLIT(lit_423);
DEFLIT(lit_244);
DEFLIT(lit_231);
DEFLIT(lit_288);
DEFLIT(lit_400);
DEFLIT(lit_403);
DEFLIT(lit_374);
DEFLIT(lit_286);
DEFLIT(lit_444);
DEFLIT(lit_448);
DEFLIT(lit_205);
DEFLIT(lit_353);
DEFLIT(lit_461);
DEFLIT(lit_295);
DEFLIT(lit_552);
DEFLIT(lit_91);
DEFLIT(lit_230);
DEFLIT(lit_84);
DEFLIT(lit_191);
DEFLIT(lit_151);
DEFLIT(lit_258);
DEFLIT(lit_234);
DEFLIT(lit_372);
DEFLIT(lit_223);
DEFLIT(lit_16);
DEFLIT(lit_299);
DEFLIT(lit_538);
DEFLIT(lit_483);
DEFLIT(lit_586);
DEFLIT(lit_217);
DEFLIT(lit_209);
DEFLIT(lit_76);
DEFLIT(lit_176);
DEFLIT(lit_281);
DEFLIT(lit_578);
DEFLIT(lit_426);
DEFLIT(lit_170);
DEFLIT(lit_88);
DEFLIT(lit_539);
DEFLIT(lit_416);
DEFLIT(lit_494);
DEFLIT(lit_384);
DEFLIT(lit_555);
DEFLIT(lit_77);
DEFLIT(lit_237);
DEFLIT(lit_418);
DEFLIT(lit_524);
DEFLIT(lit_65);
DEFLIT(lit_221);
DEFLIT(lit_326);
DEFLIT(lit_387);
DEFLIT(lit_441);
DEFLIT(lit_547);
DEFLIT(lit_86);
DEFLIT(lit_463);
DEFLIT(lit_323);
DEFLIT(lit_32);
DEFLIT(lit_393);
DEFLIT(lit_519);
DEFLIT(lit_122);
DEFLIT(lit_349);
DEFLIT(lit_197);
DEFLIT(lit_517);
DEFLIT(lit_187);
DEFLIT(lit_367);
DEFLIT(lit_134);
DEFLIT(lit_429);
DEFLIT(lit_565);
DEFLIT(lit_397);
DEFLIT(lit_306);
DEFLIT(lit_289);
DEFLIT(lit_386);
DEFLIT(lit_391);
DEFLIT(lit_5);
DEFLIT(lit_274);
DEFLIT(lit_406);
DEFLIT(lit_152);
DEFLIT(lit_118);
DEFLIT(lit_192);
DEFLIT(lit_194);
DEFLIT(lit_439);
DEFLIT(lit_27);
DEFLIT(lit_126);
DEFLIT(lit_47);
DEFLIT(lit_94);

/* FUNCTIONS: */

LOCFOR(fun_x_2413_0);
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
FUNFOR(YastYmaybe_log_dependency);
FUNFOR(YastYmacro_expander);
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
FUNFOR(YastYfunction_bindings);
FUNFOR(YastYfunction_specs);
FUNFOR(YastYfunction_naryQ);
FUNFOR(YastYfunction_value);
LOCFOR(fun_function_kind_99);
FUNFOR(YastYfunction_display_name);
LOCFOR(fun_invalidate_dependent_101);
LOCFOR(fun_loop_102);
LOCFOR(fun_as_lst_103);
LOCFOR(fun_x_2417_104);
LOCFOR(fun_105);
LOCFOR(fun_106);
LOCFOR(fun_x_2421_107);
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
FUNFOR(YastYfree_environment);
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
FUNFOR(YastYsequential);
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
FUNFOR(YastYfab_list);
LOCFOR(fun_empty_183);
LOCFOR(fun_as_184);
LOCFOR(fun_as_185);
LOCFOR(fun_as_186);
FUNFOR(YastYarguments);
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
FUNFOR(YastYupdate_binding_kind);
LOCFOR(fun_ast_define_binding_266);
LOCFOR(fun_objectify_definition_267);
LOCFOR(fun_expand_268);
FUNFOR(YPPmacro);
LOCFOR(fun_objectify_syntax_definition_270);
LOCFOR(fun_objectify_function_definition_271);
FUNFOR(YastYmodule_binding);
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
FUNFOR(YastYforeign_nameQ);
LOCFOR(fun_objectify_foreign_reference_296);
LOCFOR(fun_objectify_symbol_297);
LOCFOR(fun_ftype_298);
LOCFOR(fun_as_299);
LOCFOR(fun_as_300);
LOCFOR(fun_as_301);
FUNFOR(YastYfunctions);
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
FUNFOR(YastYimport_globalX);
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
LOCFOR(fun_x_2434_346);
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
FUNFOR(YastYtransaction_register_implemented_binding);
FUNFOR(YastYtransaction_register_dependent);
FUNFOR(YastYtransaction_emptyQ);
LOCFOR(fun_392);
LOCFOR(fun_393);
FUNFOR(YastYmerge_transactionsX);
LOCFOR(fun_395);
LOCFOR(fun_396);
FUNFOR(YastYroll_back_transaction);
LOCFOR(fun_398);
LOCFOR(fun_399);
FUNFOR(YastYcall_with_subtransaction);
LOCFOR(fun_x_2438_401);
LOCFOR(fun_402);
LOCFOR(fun_403);
LOCFOR(fun_404);
FUNFOR(YastYobjectify_with_subtransaction);
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
FUNFOR(YastYset_module_environments);
LOCFOR(fun_432);
FUNFOR(YastYdo_module_loader_modules);
LOCFOR(fun_module_loader_module_type_434);
FUNFOR(YastYregister_moduleX);
FUNFOR(YastYprobe_module);
LOCFOR(fun_437);
LOCFOR(fun_438);
FUNFOR(YastYload_and_register_module);
FUNFOR(YastYexport_bindingX);
FUNFOR(YastYbinding_native_toQ);
LOCFOR(fun_442);
FUNFOR(YastYreport_undefined_global_bindings);
LOCFOR(fun_444);
LOCFOR(fun_445);
LOCFOR(fun_add_user_446);
LOCFOR(fun_447);
FUNFOR(YastYcompute_transitive_users);
FUNFOR(YastYremove_module_internalX);
LOCFOR(fun_450);
FUNFOR(YastYremove_modules_by_nameX);
FUNFOR(YastYmodule_name_to_relpath);
LOCFOR(fun_453);
FUNFOR(YastYinstall_initial_bindings);
FUNFOR(YastYfab_static_global_environment);
LOCFOR(fun_456);
FUNFOR(YastYfab_subset_environment);
LOCFOR(fun_458);
LOCFOR(fun_459);
LOCFOR(fun_460);
LOCFOR(fun_461);
LOCFOR(fun_load_module_462);
FUNFOR(YastYruntime_module_loader);
FUNFOR(YastYruntime_module);
FUNFOR(YastYruntime_environment);
FUNFOR(YastYruntime_core_environment);
FUNFOR(YastYunchecked_runtime_environment);
FUNFOR(YastYreloader_do_create_module);
FUNFOR(YastYreloader_do_use_module);
FUNFOR(YastYreloader_do_import);
FUNFOR(YastYprocess_module_data);
FUNFOR(YastYensure_module_data);
FUNFOR(YastYreloader_do_runtime_binding);
FUNFOR(YastYreloader_do_other_binding);
FUNFOR(YastYreloader_do_export);
FUNFOR(YastYreload_modules);
LOCFOR(fun_477);
FUNFOR(YastYinstall_magic_bindings);
FUNFOR(YastYreload_macros);
FUNFOR(YastYinstall_interpreter_hacks);
FUNFOR(YastYinit_runtime);
FUNFOR(YastYfab_syntax_environment);
FUNFOR(YastYfab_g2c_module);
FUNFOR(YastYinit_g2c_boot_environment);
FUNFOR(YastYinit_g2c_regular_environment);
FUNFOR(YastYinit_ast);
LOCFOR(fun_loop_487);
FUNFOR(YastYdo_static_global_bindings);
LOCFOR(fun_loop_489);
FUNFOR(YastYdo_named_static_global_bindings);
extern P YastY___main_0___ ();
extern P YastY___main_1___ ();
extern P YastY___main_2___ ();
extern P YastY___main_3___ ();
extern P YastY___main_4___ ();
extern P YastY___main_5___ ();
extern P YastY___main_6___ ();
extern P YastY___main_7___ ();
extern P YastY___main_8___ ();
extern P YastY___main_9___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_x_2413_0) {
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
  P saved_dependentF5814;
  P x_2412F5813;
  P x_2412F5812;
  P x_2412F5811;
  P bodyF5810;
  P dependentF5809;
  P x_2412F5808;
  P x_2413F5807;
  P T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28;
  P T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2413_0,1);
  x_2413F5807 = T1;
  FUNINIT(x_2413F5807, 1,return_);
  x_2412F5808 = FREEREF(0);
  dependentF5809 = YPfalse;
  dependentF5809 = BOXFAB(dependentF5809);
  bodyF5810 = YPfalse;
  bodyF5810 = BOXFAB(bodyF5810);
  T7 = CALL2(1,VARREF(YisaQ),x_2412F5808,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2412F5808,LITREF(lit_7),x_2413F5807);
    x_2412F5811 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2412F5811,x_2413F5807);
    BOXVAL(dependentF5809) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_2412F5811);
    x_2412F5812 = T12;
    BOXVAL(bodyF5810) = x_2412F5812;
    x_2412F5813 = Ynil;
    T14 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2412F5813,x_2413F5807);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_2413F5807,LITREF(lit_8),x_2412F5808);
  }
  T17 = CALL0(1,VARREF(YmacrosYgensym));
  saved_dependentF5814 = T17;
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T24 = CALL1(1,VARREF(Ylst),saved_dependentF5814);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T23 = CALL3(1,VARREF(YmacrosYcat),T24,T25,Ynil);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T21 = CALL2(1,VARREF(YmacrosYcat),T22,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T31 = BOXVAL(dependentF5809);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T27 = CALLN(1,VARREF(YmacrosYcat),4,T28,T29,T30,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_13));
  T38 = BOXVAL(bodyF5810);
  T36 = CALL3(1,VARREF(YmacrosYcat),T37,T38,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T43 = CALL1(1,VARREF(Ylst),saved_dependentF5814);
  T40 = CALLN(1,VARREF(YmacrosYcat),4,T41,T42,T43,Ynil);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T33 = CALLN(1,VARREF(YmacrosYcat),4,T34,T35,T39,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T18 = CALLN(1,VARREF(YmacrosYcat),5,T19,T20,T26,T32,Ynil);
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
  T0 = CALLN(1,VARREF(YmacrosYnapp),4,VARREF(Yerror),YPfalse,message_,arguments_);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYprogram_type));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYprogram_type));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYprogram_register));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYprogram_register));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYprogram_register));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYprogram_register));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYbinding_name));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYbinding_name));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYbinding_type));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYbinding_type));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYbinding_inferred_type));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYbinding_inferred_type));
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
  QRET(VARREF(YastYast_LbotG));
}

FUNCODEDEF(fun_global_box_value_19) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYglobal_box_value));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYglobal_box_value));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYbinding_kind));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYbinding_kind));
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
  QRET(LITREF(lit_41));
}

FUNCODEDEF(fun_binding_module_name_25) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYbinding_module_name));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYbinding_module_name));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYbinding_freeQ));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYbinding_freeQ));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYbinding_info));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYbinding_info));
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

FUNCODEDEF(YastYmaybe_log_dependency) {
  P dependable_,dtype_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(dependable_, 0);
  ARG(dtype_, 1);
loop:
  if (VARREF(YastYTcurrent_dependentT) != YPfalse) {
    CALL3(1,VARREF(YdependencyYlog_dependency),dependable_,VARREF(YastYTcurrent_dependentT),dtype_);
    T1 = CALL1(1,VARREF(YastYtransaction_register_dependent),VARREF(YastYTcurrent_dependentT));
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYmacro_expander) {
  P macro_binding_;
  P T0;
  P a1;
LINK_STACK();
  ARG(macro_binding_, 0);
loop:
  CALL2(1,VARREF(YastYmaybe_log_dependency),macro_binding_,VARREF(YdependencyYDexpansion_parse_dependency));
  T0 = CALL1(1,VARREF(YastYbinding_handler),macro_binding_);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYbinding_value));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYbinding_value));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYbinding_mutableQ));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYbinding_mutableQ));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYbinding_dynamic_extentQ));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYbinding_dynamic_extentQ));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYbinding_dottedQ));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYbinding_dottedQ));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYbinding_index));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYbinding_index));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYcompile_time_program));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYcompile_time_program));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYreference_binding));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYreference_binding));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYreference_called_functionQ));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYreference_called_functionQ));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYreference_frame_number));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYreference_frame_number));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYreference_frame_offset));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYreference_frame_offset));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYboundQ_reference));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYboundQ_reference));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYassignment_form));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYassignment_form));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYassignment_reference));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYassignment_reference));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYassignment_binding));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYassignment_binding));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYsignature_bindings));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYsignature_bindings));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYsignature_names));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYsignature_names));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYsignature_specs));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYsignature_specs));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYsignature_naryQ));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYsignature_naryQ));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYsignature_arity));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYsignature_arity));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYsignature_value));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYsignature_value));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYfunction_binding));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYfunction_binding));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYfunction_debug_name));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYfunction_debug_name));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYfunction_signature));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYfunction_signature));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYfunction_bindings) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YastYfunction_signature),x_);
  T0 = CALL1(1,VARREF(YastYsignature_bindings),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYfunction_specs) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YastYfunction_signature),x_);
  T0 = CALL1(1,VARREF(YastYsignature_specs),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYfunction_naryQ) {
  P x_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL1(1,VARREF(YastYfunction_signature),x_);
  T1 = CALL1(1,VARREF(YastYsignature_naryQ),T2);
  T0 = CALL1(1,VARREF(YastYconstant_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYfunction_value) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YastYfunction_signature),x_);
  T0 = CALL1(1,VARREF(YastYsignature_value),T1);
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
  QRET(LITREF(lit_127));
}

FUNCODEDEF(YastYfunction_display_name) {
  P f_;
  P bF5815;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(f_, 0);
loop:
  T1 = CALL1(1,VARREF(YastYfunction_binding),f_);
  bF5815 = T1;
  if (bF5815 != YPfalse) {
    T4 = CALL1(1,VARREF(YastYbinding_module_name),bF5815);
    T5 = CALL1(1,VARREF(YastYbinding_name),bF5815);
    T3 = CALL3(1,VARREF(YruntimeYformat_to_string),LITREF(lit_130),T4,T5);
    T2 = T3;
  } else {
    T2 = LITREF(lit_131);
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_invalidate_dependent_101) {
  P dependent_,dependable_,dtype_;
  P nameF5816;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(dependent_, 0);
  ARG(dependable_, 1);
  ARG(dtype_, 2);
loop:
  CALL1(1,VARREF(YdependencyYdetach_dependent),dependent_);
  T1 = CALL1(1,VARREF(YastYfunction_display_name),dependent_);
  nameF5816 = T1;
  T3 = CALL2(1,VARREF(YdependencyYdependency_includes_anyQ),dtype_,VARREF(YdependencyYDparse_dependencies));
  if (T3 != YPfalse) {
    T4 = CALL3(1,VARREF(YruntimeYformat),VARREF(YprotoSportsYout),LITREF(lit_134),nameF5816);
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(YdependencyYdependency_includes_anyQ),dtype_,VARREF(YdependencyYDoptimizaton_dependencies));
    if (T6 != YPfalse) {
      T7 = CALL3(1,VARREF(YruntimeYformat),VARREF(YprotoSportsYout),LITREF(lit_135),nameF5816);
      T5 = T7;
    } else {
      if (YPtrue != YPfalse) {
        T9 = CALL3(1,VARREF(YruntimeYformat),VARREF(YprotoSportsYout),LITREF(lit_136),nameF5816);
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
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),e_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YmacrosYrevX),res_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yhead),e_);
    T4 = CALL2(1,VARREF(YmacrosYpair),T5,res_);
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
  P loopF5817;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_102,1);
  loopF5817 = T1;
  FUNINIT(loopF5817, 1,loopF5817);
  T2 = CALL2(0,loopF5817,Ynil,e_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_2417_104) {
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
  P DemptyF5828;
  P classF5827;
  P x_2416F5826;
  P x_2416F5825;
  P x_2416F5824;
  P x_2416F5823;
  P x_2416F5822;
  P supersF5821;
  P nameF5820;
  P x_2416F5819;
  P x_2417F5818;
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
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2417_104,1);
  x_2417F5818 = T1;
  FUNINIT(x_2417F5818, 1,return_);
  x_2416F5819 = FREEREF(0);
  nameF5820 = YPfalse;
  nameF5820 = BOXFAB(nameF5820);
  supersF5821 = YPfalse;
  supersF5821 = BOXFAB(supersF5821);
  T7 = CALL2(1,VARREF(YisaQ),x_2416F5819,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2416F5819,LITREF(lit_143),x_2417F5818);
    x_2416F5822 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2416F5822,x_2417F5818);
    BOXVAL(nameF5820) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_2416F5822);
    x_2416F5823 = T12;
    T14 = CALL2(1,VARREF(YmacrosYmatch_sublist),x_2416F5823,x_2417F5818);
    x_2416F5824 = T14;
    BOXVAL(supersF5821) = x_2416F5824;
    x_2416F5825 = Ynil;
    T16 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2416F5825,x_2417F5818);
    T15 = T16;
    T17 = CALL1(1,VARREF(Ytail),x_2416F5823);
    x_2416F5826 = T17;
    T18 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2416F5826,x_2417F5818);
    T13 = T18;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_2417F5818,LITREF(lit_8),x_2416F5819);
  }
  T22 = BOXVAL(nameF5820);
  T21 = CALL3(1,VARREF(YmacrosYcat_sym),LITREF(lit_144),T22,LITREF(lit_145));
  classF5827 = T21;
  T25 = BOXVAL(nameF5820);
  T24 = CALL3(1,VARREF(YmacrosYcat_sym),LITREF(lit_146),T25,LITREF(lit_147));
  DemptyF5828 = T24;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_13));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_148));
  T31 = CALL1(1,VARREF(Ylst),classF5827);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_149));
  T35 = BOXVAL(supersF5821);
  T33 = CALL3(1,VARREF(YmacrosYcat),T34,T35,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T29 = CALLN(1,VARREF(YmacrosYcat),4,T30,T31,T32,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_150));
  T39 = CALL1(1,VARREF(Ylst),DemptyF5828);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
  T43 = CALL1(1,VARREF(Ylst),classF5827);
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_152));
  T45 = CALL1(1,VARREF(Ylst),YPfalse);
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_153));
  T47 = CALL1(1,VARREF(Ylst),YPfalse);
  T41 = CALLN(1,VARREF(YmacrosYcat),7,T42,T43,T44,T45,T46,T47,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T37 = CALLN(1,VARREF(YmacrosYcat),4,T38,T39,T40,Ynil);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_154));
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_155));
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_156));
  T59 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
  T60 = CALL1(1,VARREF(Ylst),classF5827);
  T58 = CALL3(1,VARREF(YmacrosYcat),T59,T60,Ynil);
  T57 = CALL1(1,VARREF(Ylst),T58);
  T55 = CALL3(1,VARREF(YmacrosYcat),T56,T57,Ynil);
  T54 = CALL1(1,VARREF(Ylst),T55);
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
  T64 = CALL1(1,VARREF(Ylst),classF5827);
  T62 = CALL3(1,VARREF(YmacrosYcat),T63,T64,Ynil);
  T61 = CALL1(1,VARREF(Ylst),T62);
  T65 = CALL1(1,VARREF(Ylst),LITREF(lit_158));
  T66 = CALL1(1,VARREF(Ylst),LITREF(lit_149));
  T53 = CALLN(1,VARREF(YmacrosYcat),5,T54,T61,T65,T66,Ynil);
  T52 = CALL1(1,VARREF(Ylst),T53);
  T67 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
  T49 = CALLN(1,VARREF(YmacrosYcat),5,T50,T51,T52,T67,Ynil);
  T48 = CALL1(1,VARREF(Ylst),T49);
  T70 = CALL1(1,VARREF(Ylst),LITREF(lit_154));
  T71 = CALL1(1,VARREF(Ylst),LITREF(lit_155));
  T76 = CALL1(1,VARREF(Ylst),LITREF(lit_156));
  T79 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
  T80 = CALL1(1,VARREF(Ylst),LITREF(lit_149));
  T78 = CALL3(1,VARREF(YmacrosYcat),T79,T80,Ynil);
  T77 = CALL1(1,VARREF(Ylst),T78);
  T75 = CALL3(1,VARREF(YmacrosYcat),T76,T77,Ynil);
  T74 = CALL1(1,VARREF(Ylst),T75);
  T83 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
  T84 = CALL1(1,VARREF(Ylst),classF5827);
  T82 = CALL3(1,VARREF(YmacrosYcat),T83,T84,Ynil);
  T81 = CALL1(1,VARREF(Ylst),T82);
  T85 = CALL1(1,VARREF(Ylst),LITREF(lit_158));
  T86 = CALL1(1,VARREF(Ylst),LITREF(lit_149));
  T73 = CALLN(1,VARREF(YmacrosYcat),5,T74,T81,T85,T86,Ynil);
  T72 = CALL1(1,VARREF(Ylst),T73);
  T89 = CALL1(1,VARREF(Ylst),LITREF(lit_138));
  T90 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
  T88 = CALL3(1,VARREF(YmacrosYcat),T89,T90,Ynil);
  T87 = CALL1(1,VARREF(Ylst),T88);
  T69 = CALLN(1,VARREF(YmacrosYcat),5,T70,T71,T72,T87,Ynil);
  T68 = CALL1(1,VARREF(Ylst),T69);
  T93 = CALL1(1,VARREF(Ylst),LITREF(lit_154));
  T94 = CALL1(1,VARREF(Ylst),LITREF(lit_155));
  T99 = CALL1(1,VARREF(Ylst),LITREF(lit_156));
  T102 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
  T103 = CALL1(1,VARREF(Ylst),classF5827);
  T101 = CALL3(1,VARREF(YmacrosYcat),T102,T103,Ynil);
  T100 = CALL1(1,VARREF(Ylst),T101);
  T98 = CALL3(1,VARREF(YmacrosYcat),T99,T100,Ynil);
  T97 = CALL1(1,VARREF(Ylst),T98);
  T106 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
  T107 = CALL1(1,VARREF(Ylst),LITREF(lit_149));
  T105 = CALL3(1,VARREF(YmacrosYcat),T106,T107,Ynil);
  T104 = CALL1(1,VARREF(Ylst),T105);
  T108 = CALL1(1,VARREF(Ylst),LITREF(lit_158));
  T109 = CALL1(1,VARREF(Ylst),LITREF(lit_149));
  T96 = CALLN(1,VARREF(YmacrosYcat),5,T97,T104,T108,T109,Ynil);
  T95 = CALL1(1,VARREF(Ylst),T96);
  T112 = CALL1(1,VARREF(Ylst),LITREF(lit_159));
  T113 = CALL1(1,VARREF(Ylst),LITREF(lit_160));
  T114 = CALL1(1,VARREF(Ylst),classF5827);
  T115 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
  T111 = CALLN(1,VARREF(YmacrosYcat),5,T112,T113,T114,T115,Ynil);
  T110 = CALL1(1,VARREF(Ylst),T111);
  T92 = CALLN(1,VARREF(YmacrosYcat),5,T93,T94,T95,T110,Ynil);
  T91 = CALL1(1,VARREF(Ylst),T92);
  T118 = CALL1(1,VARREF(Ylst),LITREF(lit_161));
  T120 = BOXVAL(nameF5820);
  T119 = CALL1(1,VARREF(Ylst),T120);
  T123 = CALL1(1,VARREF(Ylst),LITREF(lit_162));
  T124 = CALL1(1,VARREF(Ylst),LITREF(lit_163));
  T122 = CALL3(1,VARREF(YmacrosYcat),T123,T124,Ynil);
  T121 = CALL1(1,VARREF(Ylst),T122);
  T127 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
  T128 = CALL1(1,VARREF(Ylst),classF5827);
  T129 = CALL1(1,VARREF(Ylst),LITREF(lit_152));
  T130 = CALL1(1,VARREF(Ylst),LITREF(lit_162));
  T131 = CALL1(1,VARREF(Ylst),LITREF(lit_153));
  T132 = CALL1(1,VARREF(Ylst),LITREF(lit_163));
  T126 = CALLN(1,VARREF(YmacrosYcat),7,T127,T128,T129,T130,T131,T132,Ynil);
  T125 = CALL1(1,VARREF(Ylst),T126);
  T117 = CALLN(1,VARREF(YmacrosYcat),5,T118,T119,T121,T125,Ynil);
  T116 = CALL1(1,VARREF(Ylst),T117);
  T135 = CALL1(1,VARREF(Ylst),LITREF(lit_154));
  T136 = CALL1(1,VARREF(Ylst),LITREF(lit_164));
  T141 = CALL1(1,VARREF(Ylst),LITREF(lit_139));
  T144 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
  T145 = CALL1(1,VARREF(Ylst),classF5827);
  T143 = CALL3(1,VARREF(YmacrosYcat),T144,T145,Ynil);
  T142 = CALL1(1,VARREF(Ylst),T143);
  T140 = CALL3(1,VARREF(YmacrosYcat),T141,T142,Ynil);
  T139 = CALL1(1,VARREF(Ylst),T140);
  T146 = CALL1(1,VARREF(Ylst),LITREF(lit_158));
  T147 = CALL1(1,VARREF(Ylst),classF5827);
  T138 = CALLN(1,VARREF(YmacrosYcat),4,T139,T146,T147,Ynil);
  T137 = CALL1(1,VARREF(Ylst),T138);
  T148 = CALL1(1,VARREF(Ylst),DemptyF5828);
  T134 = CALLN(1,VARREF(YmacrosYcat),5,T135,T136,T137,T148,Ynil);
  T133 = CALL1(1,VARREF(Ylst),T134);
  T26 = CALLN(1,VARREF(YmacrosYcat),9,T27,T28,T36,T48,T68,T91,T116,T133,Ynil);
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

FUNCODEDEF(fun_x_2421_107) {
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
  P x_2420F5833;
  P x_2420F5832;
  P nameF5831;
  P x_2420F5830;
  P x_2421F5829;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2421_107,1);
  x_2421F5829 = T1;
  FUNINIT(x_2421F5829, 1,return_);
  x_2420F5830 = FREEREF(0);
  nameF5831 = YPfalse;
  nameF5831 = BOXFAB(nameF5831);
  T5 = CALL2(1,VARREF(YisaQ),x_2420F5830,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2420F5830,LITREF(lit_166),x_2421F5829);
    x_2420F5832 = T7;
    T9 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2420F5832,x_2421F5829);
    BOXVAL(nameF5831) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_2420F5832);
    x_2420F5833 = T10;
    T11 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2420F5833,x_2421F5829);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_2421F5829,LITREF(lit_8),x_2420F5830);
  }
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_143));
  T16 = BOXVAL(nameF5831);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_137));
  T18 = CALL2(1,VARREF(YmacrosYcat),T19,Ynil);
  T17 = CALL1(1,VARREF(Ylst),T18);
  T13 = CALLN(1,VARREF(YmacrosYcat),4,T14,T15,T17,Ynil);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYfunction_body));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYfunction_body));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYfunction_index));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYfunction_index));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYfunction_temporaries));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYfunction_temporaries));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYfunction_registers));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYfunction_registers));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYfunction_data_refs));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYfunction_data_refs));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYfunction_self_recursiveQ));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYfunction_self_recursiveQ));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYfunction_source));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYfunction_source));
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
  T0 = CALL1(1,VARREF(YastYas_lst),x_);
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
  T0 = CALLN(1,VARREF(YmacrosYnapp),4,VARREF(YprotoSmathYfabs),YPfalse,VARREF(YastYLfree_environmentG),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YastYfree_environment) {
  P h_,t_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
loop:
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(YastYLfree_environmentG),VARREF(Yhead),h_,VARREF(Ytail),t_);
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
  RET(VARREF(YastYDfree_environment_empty));
}

FUNCODEDEF(fun_function_free_136) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYfunction_free));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYfunction_free));
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
  T0 = CALL1(1,VARREF(YprotoScollectionsScollectionYempty),VARREF(YastYLfree_environmentG));
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
  QRET(LITREF(lit_187));
}

FUNCODEDEF(fun_function_kind_140) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_189));
}

FUNCODEDEF(fun_function_kind_141) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_191));
}

FUNCODEDEF(fun_alternative_condition_142) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYalternative_condition));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYalternative_condition));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYalternative_consequent));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYalternative_consequent));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYalternative_alternant));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYalternative_alternant));
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
  T0 = CALL1(1,VARREF(YastYas_lst),x_);
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
  T0 = CALLN(1,VARREF(YmacrosYnapp),4,VARREF(YprotoSmathYfabs),YPfalse,VARREF(YastYLsequentialG),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YastYsequential) {
  P h_,t_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
loop:
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(YastYLsequentialG),VARREF(Yhead),h_,VARREF(Ytail),t_);
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
  RET(VARREF(YastYDsequential_empty));
}

FUNCODEDEF(fun_constant_value_153) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYconstant_value));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYconstant_value));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYconstant_index));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYconstant_index));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYapplication_arguments));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYapplication_arguments));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYapplication_tailQ));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYapplication_tailQ));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYapplication_function));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYapplication_function));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYapplication_knownQ));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYapplication_knownQ));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYapplication_next_methods));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYapplication_next_methods));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYapplication_binding));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYapplication_binding));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYfix_let_bindings));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYfix_let_bindings));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYfix_let_types));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYfix_let_types));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYfix_let_arguments));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYfix_let_arguments));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYfix_let_body));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYfix_let_body));
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
  T0 = CALL1(1,VARREF(YastYas_lst),x_);
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
  T0 = CALLN(1,VARREF(YmacrosYnapp),4,VARREF(YprotoSmathYfabs),YPfalse,VARREF(YastYLfab_listG),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YastYfab_list) {
  P h_,t_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
loop:
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(YastYLfab_listG),VARREF(Yhead),h_,VARREF(Ytail),t_);
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
  RET(VARREF(YastYDfab_list_empty));
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
  T0 = CALL1(1,VARREF(YastYas_lst),x_);
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
  T0 = CALLN(1,VARREF(YmacrosYnapp),4,VARREF(YprotoSmathYfabs),YPfalse,VARREF(YastYLargumentsG),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YastYarguments) {
  P h_,t_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
loop:
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(YastYLargumentsG),VARREF(Yhead),h_,VARREF(Ytail),t_);
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
  RET(VARREF(YastYDarguments_empty));
}

FUNCODEDEF(fun_locals_bindings_189) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYlocals_bindings));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYlocals_bindings));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYlocals_functions));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYlocals_functions));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYlocals_body));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYlocals_body));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYbind_exit_main_fun));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYbind_exit_main_fun));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYunwind_protect_protected_thunk));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYunwind_protect_protected_thunk));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYunwind_protect_cleanup_thunk));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYunwind_protect_cleanup_thunk));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYmonitor_type));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYmonitor_type));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYmonitor_info));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYmonitor_info));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYmonitor_test));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYmonitor_test));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYmonitor_handler));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYmonitor_handler));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYmonitor_main_thunk));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYmonitor_main_thunk));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYenvironment_next));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYenvironment_next));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYenvironment_bindings));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYenvironment_bindings));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYenvironment_module));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYenvironment_module));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYenvironment_module_loader));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYenvironment_module_loader));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYenvironment_uses_modules));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYenvironment_uses_modules));
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
  T0 = CALL2(1,VARREF(YprotoScollectionsScollectionYfab),VARREF(YprotoScollectionsSbufferYLbufG),YPint((P)0));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYenvironment_allows_foreign_namesQ));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYenvironment_allows_foreign_namesQ));
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
  P tmpF5835;
  P tmpF5834;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T3 = CALL1(1,VARREF(YastYbinding_kind),binding_);
  T2 = CALL2(1,VARREF(YmacrosYEE),T3,LITREF(lit_41));
  tmpF5834 = T2;
  if (tmpF5834 != YPfalse) {
    T6 = CALL1(1,VARREF(YastYbinding_global_box),binding_);
    tmpF5835 = T6;
    if (tmpF5835 != YPfalse) {
      T10 = CALL1(1,VARREF(YastYbinding_global_box),binding_);
      T9 = CALL1(1,VARREF(YastYglobal_box_value),T10);
      T8 = CALL2(1,VARREF(YmacrosYEE),FREEREF(0),T9);
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
    T12 = CALL1(1,VARREF(YastYbinding_name),binding_);
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
  T1 = CALL1(1,VARREF(YastYruntime_environment),LITREF(lit_0));
  CALL2(1,VARREF(YastYdo_static_global_bindings),T0,T1);
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
  T1 = CALL2(1,VARREF(YisaQ),e_,VARREF(YastYLprogramG));
  if (T1 != YPfalse) {
    T0 = e_;
  } else {
    T4 = CALL1(1,VARREF(Yhead),e_);
    T3 = CALL3(1,VARREF(YastYobjectify),T4,r_,YPfalse);
    T2 = CALLN(1,VARREF(YastYobjectify_list),4,T3,e_,r_,tailQ_);
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
  T0 = CALLN(1,VARREF(YastYobjectify_application),4,f_,T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_list_231) {
  P f_,e_,r_,tailQ_;
  P x_2423F5837;
  P x_2422F5836;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL1(1,VARREF(YastYbinding_kind),f_);
  x_2422F5836 = T1;
  x_2423F5837 = VARREF(YmacrosYEE);
  T4 = CALL2(1,x_2423F5837,x_2422F5836,LITREF(lit_284));
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(YastYbinding_handler),f_);
    T5 = CALL3(1,T6,e_,r_,tailQ_);
    T3 = T5;
  } else {
    T8 = CALL2(1,x_2423F5837,x_2422F5836,LITREF(lit_285));
    if (T8 != YPfalse) {
      T11 = CALL1(1,VARREF(YastYmacro_expander),f_);
      T10 = CALL3(1,T11,e_,r_,tailQ_);
      T9 = CALL3(1,VARREF(YastYobjectify),T10,r_,tailQ_);
      T7 = T9;
    } else {
      T12 = CALL2(1,VARREF(Yerror),LITREF(lit_286),f_);
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
  T0 = CALL2(1,VARREF(YastYobjectify_symbol),e_,r_);
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
  T0 = CALL2(1,VARREF(YastYobjectify_quotation),e_,r_);
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
  T0 = CALL2(1,VARREF(YastYobjectify_quotation),e_,r_);
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
  T0 = CALL3(1,VARREF(Ynew),VARREF(YastYLconstantG),VARREF(YastYconstant_value),value_);
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
  T0 = CALL3(1,VARREF(Ynew),VARREF(YastYLimmediate_constantG),VARREF(YastYconstant_value),value_);
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
  T0 = CALL3(1,VARREF(Ynew),VARREF(YastYLimmediate_constantG),VARREF(YastYconstant_value),value_);
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
  T0 = CALL3(1,VARREF(Ynew),VARREF(YastYLraw_constantG),VARREF(YastYconstant_value),value_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_boundQ_241) {
  P e_,r_,tailQ_;
  P refF5838;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL2(1,VARREF(YastYobjectify_symbol),e_,r_);
  refF5838 = T1;
  T2 = CALL3(1,VARREF(Ynew),VARREF(YastYLboundQG),VARREF(YastYboundQ_reference),refF5838);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_compile_time_242) {
  P program_,r_,tailQ_,rtQ_;
  P tmpF5843;
  P astF5842;
  P target_envF5841;
  P syntax_envF5840;
  P modF5839;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(program_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  ARG(rtQ_, 3);
loop:
  T1 = CALL1(1,VARREF(YastYfind_environment_module),r_);
  modF5839 = T1;
  T3 = CALL1(1,VARREF(YastYmodule_syntax_environment),modF5839);
  syntax_envF5840 = T3;
  T5 = CALL1(1,VARREF(YastYmodule_target_environment),modF5839);
  target_envF5841 = T5;
  T7 = CALL3(1,VARREF(YastYobjectify),program_,syntax_envF5840,tailQ_);
  astF5842 = T7;
  CALL1(1,VARREF(YastYast_evaluate),astF5842);
  tmpF5843 = rtQ_;
  if (tmpF5843 != YPfalse) {
    T11 = CALL2(1,VARREF(YprotoSmathYNEE),syntax_envF5840,target_envF5841);
    T10 = T11;
  } else {
    T10 = YPfalse;
  }
  T9 = T10;
  if (T9 != YPfalse) {
    T12 = CALL3(1,VARREF(YastYobjectify),program_,r_,tailQ_);
    T8 = T12;
  } else {
    T13 = CALL3(1,VARREF(Ynew),VARREF(YastYLconstantG),VARREF(YastYconstant_value),YPfalse);
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
  T1 = CALL3(1,VARREF(YastYobjectify),t_,r_,YPfalse);
  T2 = CALL3(1,VARREF(YastYobjectify),c_,r_,tailQ_);
  T3 = CALL3(1,VARREF(YastYobjectify),a_,r_,tailQ_);
  T0 = CALLN(1,VARREF(Ynew),7,VARREF(YastYLalternativeG),VARREF(YastYalternative_condition),T1,VARREF(YastYalternative_consequent),T2,VARREF(YastYalternative_alternant),T3);
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
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),eT_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YprotoScollectionsScollectionYempty),VARREF(YastYLsequentialG));
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),eT_);
    T6 = CALL1(1,VARREF(Ytail),eT_);
    T5 = CALL1(0,FREEREF(0),T6);
    T3 = CALL2(1,VARREF(YastYsequential),T4,T5);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sequentialize_245) {
  P eT_;
  P loopF5844;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(eT_, 0);
loop:
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),eT_);
  if (T1 != YPfalse) {
    T2 = CALL3(1,VARREF(Ynew),VARREF(YastYLconstantG),VARREF(YastYconstant_value),YPfalse);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Ytail),eT_);
    T4 = CALL1(1,VARREF(YmacrosYemptyQ),T5);
    if (T4 != YPfalse) {
      T6 = CALL1(1,VARREF(Yhead),eT_);
      T3 = T6;
    } else {
      T8 = FUNSHELL(1,fun_loop_244,1);
      loopF5844 = T8;
      FUNINIT(loopF5844, 1,loopF5844);
      T9 = CALL1(0,loopF5844,eT_);
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
  P eF5845;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(eT_, 0);
loop:
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),eT_);
  if (T1 != YPfalse) {
    T0 = Ynil;
  } else {
    T3 = CALL1(1,VARREF(Yhead),eT_);
    eF5845 = T3;
    T5 = CALL1(1,VARREF(YsyntaxYsexpr_defQ),eF5845);
    if (T5 != YPfalse) {
      T9 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
      T15 = CALL1(1,VARREF(YsyntaxYsexpr_def_variable),eF5845);
      T14 = CALL1(1,VARREF(Ylst),T15);
      T17 = CALL1(1,VARREF(YsyntaxYsexpr_def_value),eF5845);
      T16 = CALL1(1,VARREF(Ylst),T17);
      T13 = CALL3(1,VARREF(YmacrosYcat),T14,T16,Ynil);
      T12 = CALL1(1,VARREF(Ylst),T13);
      T11 = CALL2(1,VARREF(YmacrosYcat),T12,Ynil);
      T10 = CALL1(1,VARREF(Ylst),T11);
      T19 = CALL1(1,VARREF(Ytail),eT_);
      T18 = CALL1(1,VARREF(YastYtransform_defs),T19);
      T8 = CALLN(1,VARREF(YmacrosYcat),4,T9,T10,T18,Ynil);
      T7 = CALL1(1,VARREF(Ylst),T8);
      T6 = CALL2(1,VARREF(YmacrosYcat),T7,Ynil);
      T4 = T6;
    } else {
      T21 = CALL1(1,VARREF(Ylst),eF5845);
      T23 = CALL1(1,VARREF(Ytail),eT_);
      T22 = CALL1(1,VARREF(YastYtransform_defs),T23);
      T20 = CALL3(1,VARREF(YmacrosYcat),T21,T22,Ynil);
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
  P headF5847;
  P tailQF5846;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(eT_, 1);
loop:
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),eT_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YmacrosYrevX),res_);
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(Ytail),eT_);
    T5 = CALL1(1,VARREF(YmacrosYemptyQ),T6);
    if (T5 != YPfalse) {
      T4 = FREEREF(0);
    } else {
      T4 = YPfalse;
    }
    tailQF5846 = T4;
    T9 = CALL1(1,VARREF(Yhead),eT_);
    T8 = CALL3(1,VARREF(YastYobjectify),T9,FREEREF(1),tailQF5846);
    headF5847 = T8;
    T11 = CALL2(1,VARREF(YmacrosYpair),headF5847,res_);
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
  P astsF5849;
  P loopF5848;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(eT_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T2 = FUNSHELL(1,fun_loop_247,3);
  loopF5848 = T2;
  FUNINIT(loopF5848, 3,tailQ_,r_,loopF5848);
  T4 = CALL1(1,VARREF(YastYtransform_defs),eT_);
  T3 = CALL2(0,loopF5848,Ynil,T4);
  T1 = T3;
  astsF5849 = T1;
  T5 = CALL1(1,VARREF(YastYsequentialize),astsF5849);
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
  T0 = CALL3(1,VARREF(YastYobjectify),e_,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_application_250) {
  P ff_,eT_,r_,tailQ_;
  P eeTF5850;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T3 = FUNFAB(fun_249,1,r_);
  T2 = CALL2(1,VARREF(YmacrosYmap),T3,eT_);
  T1 = CALL1(1,VARREF(YastYconvert2arguments),T2);
  eeTF5850 = T1;
  T4 = CALLN(1,VARREF(YastYprocess_closed_application),4,ff_,eeTF5850,r_,tailQ_);
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
  T0 = CALL3(1,VARREF(YastYobjectify),e_,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_application_252) {
  P ff_,eT_,r_,tailQ_;
  P fvfF5852;
  P eeTF5851;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T3 = FUNFAB(fun_251,1,r_);
  T2 = CALL2(1,VARREF(YmacrosYmap),T3,eT_);
  T1 = CALL1(1,VARREF(YastYconvert2arguments),T2);
  eeTF5851 = T1;
  T5 = CALL1(1,VARREF(YastYreference_binding),ff_);
  fvfF5852 = T5;
  T6 = CALLN(1,VARREF(Ynew),7,VARREF(YastYLpredefined_applicationG),VARREF(YastYapplication_binding),fvfF5852,VARREF(YastYapplication_arguments),eeTF5851,VARREF(YastYapplication_tailQ),tailQ_);
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
  T0 = CALL3(1,VARREF(YastYobjectify),e_,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_application_254) {
  P ff_,eT_,r_,tailQ_;
  P eeTF5853;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T3 = FUNFAB(fun_253,1,r_);
  T2 = CALL2(1,VARREF(YmacrosYmap),T3,eT_);
  T1 = CALL1(1,VARREF(YastYconvert2arguments),T2);
  eeTF5853 = T1;
  T4 = CALLN(1,VARREF(Ynew),7,VARREF(YastYLregular_applicationG),VARREF(YastYapplication_function),ff_,VARREF(YastYapplication_arguments),eeTF5853,VARREF(YastYapplication_tailQ),tailQ_);
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_process_closed_application_255) {
  P f_,eT_,r_,tailQ_;
  P bF5855;
  P vTF5854;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL1(1,VARREF(YastYfunction_bindings),f_);
  vTF5854 = T1;
  T3 = CALL1(1,VARREF(YastYfunction_body),f_);
  bF5855 = T3;
  T5 = CALL1(1,VARREF(YastYfunction_naryQ),f_);
  if (T5 != YPfalse) {
    T6 = CALLN(1,VARREF(YastYprocess_nary_closed_application),4,f_,eT_,r_,tailQ_);
    T4 = T6;
  } else {
    T9 = CALL1(1,VARREF(YprotoStypesYlen),eT_);
    T11 = CALL1(1,VARREF(YastYfunction_bindings),f_);
    T10 = CALL1(1,VARREF(YprotoStypesYlen),T11);
    T8 = CALL2(1,VARREF(YprotoSmathYE),T9,T10);
    if (T8 != YPfalse) {
      T13 = CALL1(1,VARREF(YastYfunction_bindings),f_);
      T14 = CALL1(1,VARREF(YastYfunction_specs),f_);
      T15 = CALL1(1,VARREF(YastYfunction_body),f_);
      T12 = CALLN(1,VARREF(Ynew),9,VARREF(YastYLfix_letG),VARREF(YastYfix_let_bindings),T13,VARREF(YastYfix_let_types),T14,VARREF(YastYfix_let_arguments),eT_,VARREF(YastYfix_let_body),T15);
      T7 = T12;
    } else {
      T16 = CALL3(1,VARREF(YastYobjectify_error),LITREF(lit_304),f_,eT_);
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
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),eT_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ylst),LITREF(lit_307),Ynil);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),eT_);
    T6 = CALL1(1,VARREF(Ytail),eT_);
    T5 = CALL1(0,FREEREF(0),T6);
    T3 = CALL3(1,VARREF(Ylst),LITREF(lit_308),T4,T5);
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
  T1 = CALL1(1,VARREF(YastYbinding_dottedQ),T2);
  if (T1 != YPfalse) {
    T5 = CALL1(0,FREEREF(0),eT_);
    T4 = CALL3(1,VARREF(YastYobjectify),T5,FREEREF(1),YPfalse);
    T6 = CALL1(1,VARREF(YprotoScollectionsScollectionYempty),VARREF(YastYLargumentsG));
    T3 = CALL2(1,VARREF(YastYarguments),T4,T6);
    T0 = T3;
  } else {
    T8 = CALL1(1,VARREF(YmacrosYemptyQ),eT_);
    if (T8 != YPfalse) {
      T9 = CALL3(1,VARREF(YastYobjectify_error),LITREF(lit_311),FREEREF(2),eT_);
      T7 = T9;
    } else {
      T11 = CALL1(1,VARREF(Yhead),eT_);
      T13 = CALL1(1,VARREF(Ytail),eT_);
      T14 = CALL1(1,VARREF(Ytail),vT_);
      T12 = CALL2(0,FREEREF(3),T13,T14);
      T10 = CALL2(1,VARREF(YastYarguments),T11,T12);
      T7 = T10;
    }
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_process_nary_closed_application_258) {
  P f_,eT_,r_,tailQ_;
  P oF5859;
  P vTF5858;
  P gather_argumentsF5857;
  P pack_nary_argsF5856;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = FUNSHELL(1,fun_pack_nary_args_256,1);
  pack_nary_argsF5856 = T1;
  T2 = FUNSHELL(1,fun_gather_arguments_257,4);
  gather_argumentsF5857 = T2;
  FUNINIT(pack_nary_argsF5856, 1,pack_nary_argsF5856);
  FUNINIT(gather_argumentsF5857, 4,pack_nary_argsF5856,r_,f_,gather_argumentsF5857);
  T4 = CALL1(1,VARREF(YastYfunction_bindings),f_);
  vTF5858 = T4;
  T7 = CALL1(1,VARREF(YastYfunction_specs),f_);
  T8 = CALL2(0,gather_argumentsF5857,eT_,vTF5858);
  T9 = CALL1(1,VARREF(YastYfunction_body),f_);
  T6 = CALLN(1,VARREF(Ynew),9,VARREF(YastYLfix_letG),VARREF(YastYfix_let_bindings),vTF5858,VARREF(YastYfix_let_types),T7,VARREF(YastYfix_let_arguments),T8,VARREF(YastYfix_let_body),T9);
  oF5859 = T6;
  T10 = CALL1(1,VARREF(YprotoScollectionsSsequenceYlast),vTF5858);
  CALL2(1,VARREF(YastYbinding_dottedQ_setter),YPfalse,T10);
  T5 = oF5859;
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
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),eT_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YprotoScollectionsScollectionYempty),VARREF(YastYLargumentsG));
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),eT_);
    T6 = CALL1(1,VARREF(Ytail),eT_);
    T5 = CALL1(1,VARREF(YastYconvert2arguments),T6);
    T3 = CALL2(1,VARREF(YastYarguments),T4,T5);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_assignment_260) {
  P binding_,e_,r_,tailQ_;
  P opF5860;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(binding_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_operator),binding_);
  opF5860 = T1;
  T3 = CALL1(1,VARREF(YsyntaxYsexpr_variableQ),opF5860);
  if (T3 != YPfalse) {
    T7 = CALL1(1,VARREF(YsyntaxYsexpr_fab_setter_name),opF5860);
    T6 = CALL3(1,VARREF(YastYobjectify),T7,r_,YPfalse);
    T9 = CALL1(1,VARREF(YsyntaxYsexpr_operands),binding_);
    T8 = CALL2(1,VARREF(YmacrosYpair),e_,T9);
    T5 = CALL2(1,VARREF(YsyntaxYsexpr_make_application),T6,T8);
    T4 = CALL3(1,VARREF(YastYobjectify),T5,r_,tailQ_);
    T2 = T4;
  } else {
    T10 = CALL2(1,VARREF(YastYobjectify_error),LITREF(lit_314),e_);
    T2 = T10;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_assignment_261) {
  P binding_,e_,r_,tailQ_;
  P valF5862;
  P refF5861;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(binding_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL3(1,VARREF(YastYobjectify),binding_,r_,YPfalse);
  refF5861 = T1;
  T3 = CALL3(1,VARREF(YastYobjectify),e_,r_,YPfalse);
  valF5862 = T3;
  T4 = CALL2(1,VARREF(YastYobjectify_assignment_using),refF5861,valF5862);
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
  T0 = CALL1(1,VARREF(YastYreference_binding),ref_);
  CALL2(1,VARREF(YastYbinding_mutableQ_setter),YPtrue,T0);
  T1 = CALLN(1,VARREF(Ynew),5,VARREF(YastYLlocal_assignmentG),VARREF(YastYassignment_reference),ref_,VARREF(YastYassignment_form),val_);
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
  T1 = CALL1(1,VARREF(YastYreference_binding),ref_);
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(YastYLglobal_assignmentG),VARREF(YastYassignment_binding),T1,VARREF(YastYassignment_form),val_);
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
  T1 = CALL1(1,VARREF(YastYreference_binding),ref_);
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(YastYLruntime_assignmentG),VARREF(YastYassignment_binding),T1,VARREF(YastYassignment_form),val_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YastYupdate_binding_kind) {
  P binding_,new_kind_;
  P tmpF5863;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(new_kind_, 1);
loop:
  T3 = CALL1(1,VARREF(YastYbinding_kind),binding_);
  T2 = CALL2(1,VARREF(YprotoSmathYNEE),T3,LITREF(lit_1));
  tmpF5863 = T2;
  if (tmpF5863 != YPfalse) {
    T4 = tmpF5863;
  } else {
    T5 = CALL2(1,VARREF(YmacrosYEE),new_kind_,LITREF(lit_284));
    T4 = T5;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YastYbinding_kind_setter),new_kind_,binding_);
    T0 = T6;
  } else {
    T8 = CALL2(1,VARREF(YmacrosYEE),new_kind_,LITREF(lit_1));
    if (T8 != YPfalse) {
      T7 = YPtrue;
    } else {
      T10 = CALL2(1,VARREF(YmacrosYEE),new_kind_,LITREF(lit_41));
      if (T10 != YPfalse) {
        T9 = YPtrue;
      } else {
        if (YPtrue != YPfalse) {
          T13 = CALL1(1,VARREF(YastYbinding_name),binding_);
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
  P bindingF5871;
  P bindingF5870;
  P mod_nameF5869;
  P foreignQF5868;
  P tmpF5867;
  P modF5866;
  P grF5865;
  P existing_bindingF5864;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(r_, 0);
  ARG(name_, 1);
  ARG(defining_methodQ_, 2);
  ARG(kind_, 3);
loop:
  T1 = CALL2(1,VARREF(YastYfind_binding),name_,r_);
  existing_bindingF5864 = T1;
  T3 = CALL1(1,VARREF(YastYfind_static_global_environment),r_);
  grF5865 = T3;
  T5 = CALL1(1,VARREF(YastYenvironment_module),grF5865);
  modF5866 = T5;
  if (existing_bindingF5864 != YPfalse) {
    T11 = CALL2(1,VARREF(YastYbinding_native_toQ),existing_bindingF5864,modF5866);
    tmpF5867 = T11;
    if (tmpF5867 != YPfalse) {
      T12 = tmpF5867;
    } else {
      T12 = defining_methodQ_;
    }
    T10 = T12;
    T9 = CALL1(1,VARREF(Ynot),T10);
    foreignQF5868 = T9;
    T13 = CALL1(1,VARREF(YastYbinding_freeQ),existing_bindingF5864);
    if (T13 != YPfalse) {
      CALL2(1,VARREF(YastYbinding_freeQ_setter),YPfalse,existing_bindingF5864);
      if (foreignQF5868 != YPfalse) {
        T15 = CALL1(1,VARREF(YastYtransaction_register_implemented_binding),existing_bindingF5864);
        T14 = T15;
      } else {
        T14 = YPfalse;
      }
    } else {
      if (foreignQF5868 != YPfalse) {
        T18 = CALL1(1,VARREF(YastYmodule_name),modF5866);
        T19 = CALL1(1,VARREF(YastYbinding_module_name),existing_bindingF5864);
        T17 = CALLN(1,VARREF(YruntimeYformat),5,VARREF(YprotoSportsYout),LITREF(lit_325),T18,name_,T19);
        T16 = T17;
      } else {
        T16 = YPfalse;
      }
    }
    CALL2(1,VARREF(YdependencyYinvalidate_dependents),existing_bindingF5864,VARREF(YdependencyYDall_dependency_types));
    CALL2(1,VARREF(YastYupdate_binding_kind),existing_bindingF5864,kind_);
    T8 = existing_bindingF5864;
    T7 = T8;
  } else {
    T22 = CALL1(1,VARREF(YastYfind_environment_module),r_);
    T21 = CALL1(1,VARREF(YastYmodule_name),T22);
    mod_nameF5869 = T21;
    T24 = CALLN(1,VARREF(Ynew),9,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),kind_,VARREF(YastYbinding_name),name_,VARREF(YastYbinding_freeQ),YPfalse,VARREF(YastYbinding_module_name),mod_nameF5869);
    bindingF5870 = T24;
    CALL2(1,VARREF(YastYinsert_globalX),bindingF5870,grF5865);
    T23 = bindingF5870;
    T20 = T23;
    T7 = T20;
  }
  bindingF5871 = T7;
  T6 = bindingF5871;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_definition_267) {
  P var_,e_,r_;
  P defnF5874;
  P bindingF5873;
  P nameF5872;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(var_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_variable_name),var_);
  nameF5872 = T1;
  T3 = CALLN(1,VARREF(YastYast_define_binding),4,r_,nameF5872,YPfalse,LITREF(lit_41));
  bindingF5873 = T3;
  T6 = CALL3(1,VARREF(YastYobjectify),e_,r_,YPfalse);
  T5 = CALLN(1,VARREF(Ynew),5,VARREF(YastYLdefinitionG),VARREF(YastYassignment_binding),bindingF5873,VARREF(YastYassignment_form),T6);
  defnF5874 = T5;
  T4 = defnF5874;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_268) {
  P x_,r_,tailQ_;
  P expF5875;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  if (VARREF(YastYTmacro_tracingQT) != YPfalse) {
    CALL2(1,VARREF(YruntimeYformat),VARREF(YprotoSportsYout),LITREF(lit_333));
    CALL2(1,VARREF(YwriteYwrite),VARREF(YprotoSportsYout),x_);
    T0 = CALL2(1,VARREF(YruntimeYformat),VARREF(YprotoSportsYout),LITREF(lit_334));
  } else {
  }
  T3 = CALL1(1,VARREF(Ylst),x_);
  T2 = CALL3(1,VARREF(YmacrosYnapp),FREEREF(0),YPfalse,T3);
  expF5875 = T2;
  if (VARREF(YastYTmacro_tracingQT) != YPfalse) {
    CALL2(1,VARREF(YruntimeYformat),VARREF(YprotoSportsYout),LITREF(lit_335));
    CALL2(1,VARREF(YwriteYwrite),VARREF(YprotoSportsYout),expF5875);
    T4 = CALL2(1,VARREF(YruntimeYformat),VARREF(YprotoSportsYout),LITREF(lit_336));
  } else {
  }
  T1 = expF5875;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(YPPmacro) {
  P modname_,name_,expander_,env_or_false_;
  P bindingF5879;
  P envF5878;
  P tmpF5877;
  P expandF5876;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(modname_, 0);
  ARG(name_, 1);
  ARG(expander_, 2);
  ARG(env_or_false_, 3);
loop:
  T1 = FUNSHELL(0,fun_expand_268,1);
  expandF5876 = T1;
  FUNINIT(expandF5876, 1,expander_);
  tmpF5877 = env_or_false_;
  if (tmpF5877 != YPfalse) {
    T4 = tmpF5877;
  } else {
    T5 = CALL1(1,VARREF(YastYunchecked_runtime_environment),modname_);
    T4 = T5;
  }
  T3 = T4;
  envF5878 = T3;
  T7 = CALLN(1,VARREF(YastYast_define_binding),4,envF5878,name_,YPfalse,LITREF(lit_285));
  bindingF5879 = T7;
  CALL2(1,VARREF(YastYbinding_handler_setter),expandF5876,bindingF5879);
  T6 = bindingF5879;
  T2 = T6;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_syntax_definition_270) {
  P name_,e_,r_,rtQ_;
  P bindingF5885;
  P modnameF5884;
  P expanderF5883;
  P ast_expanderF5882;
  P syntax_envF5881;
  P sep_expanderF5880;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(name_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(rtQ_, 3);
loop:
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_make_macro_function),e_);
  sep_expanderF5880 = T1;
  T3 = CALL1(1,VARREF(YastYfind_syntax_environment),r_);
  syntax_envF5881 = T3;
  T5 = CALL3(1,VARREF(YastYobjectify),sep_expanderF5880,syntax_envF5881,YPfalse);
  ast_expanderF5882 = T5;
  T7 = CALL1(1,VARREF(YastYast_evaluate),ast_expanderF5882);
  expanderF5883 = T7;
  T10 = CALL1(1,VARREF(YastYfind_environment_module),r_);
  T9 = CALL1(1,VARREF(YastYmodule_name),T10);
  modnameF5884 = T9;
  T13 = CALL1(1,VARREF(YastYfind_static_global_environment),r_);
  T12 = CALLN(1,VARREF(YPPmacro),4,modnameF5884,name_,expanderF5883,T13);
  bindingF5885 = T12;
  T15 = CALL1(1,VARREF(YastYfind_static_global_environment),r_);
  T14 = CALL2(1,VARREF(YprotoSmathYNEE),syntax_envF5881,T15);
  if (T14 != YPfalse) {
    T16 = CALL2(1,VARREF(YastYinsert_globalX),bindingF5885,syntax_envF5881);
  } else {
  }
  if (rtQ_ != YPfalse) {
    T19 = CALL3(1,VARREF(YastYobjectify),sep_expanderF5880,r_,YPfalse);
    T18 = CALLN(1,VARREF(Ynew),5,VARREF(YastYLast_macro_definitionG),VARREF(YastYassignment_binding),bindingF5885,VARREF(YastYassignment_form),T19);
    T17 = T18;
  } else {
    T20 = CALL2(1,VARREF(YastYobjectify_quotation),YPfalse,r_);
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
  P defnF5888;
  P fF5887;
  P bindingF5886;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
loop:
  T1 = CALLN(1,VARREF(YastYast_define_binding),4,r_,name_,YPfalse,LITREF(lit_41));
  bindingF5886 = T1;
  T3 = CALL3(1,VARREF(YastYobjectify),e_,r_,YPfalse);
  fF5887 = T3;
  CALL2(1,VARREF(YastYfunction_binding_setter),bindingF5886,fF5887);
  T4 = CALL2(1,VARREF(YastYobjectify_quotation),name_,r_);
  CALL2(1,VARREF(YastYfunction_debug_name_setter),T4,fF5887);
  T6 = CALLN(1,VARREF(Ynew),5,VARREF(YastYLast_function_definitionG),VARREF(YastYassignment_binding),bindingF5886,VARREF(YastYassignment_form),fF5887);
  defnF5888 = T6;
  T5 = defnF5888;
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YastYmodule_binding) {
  P kind_;
  P T0;
  P a1;
LINK_STACK();
  ARG(kind_, 0);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),kind_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_primitive_definition_273) {
  P name_,sig_,body_,r_;
  P defnF5894;
  P formF5893;
  P bodyF5892;
  P new_rF5891;
  P signatureF5890;
  P bindingF5889;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(name_, 0);
  ARG(sig_, 1);
  ARG(body_, 2);
  ARG(r_, 3);
loop:
  T1 = CALLN(1,VARREF(YastYast_define_binding),4,r_,name_,YPfalse,LITREF(lit_343));
  bindingF5889 = T1;
  T3 = CALL2(1,VARREF(YastYobjectify_signature),sig_,r_);
  signatureF5890 = T3;
  T6 = CALL1(1,VARREF(YastYsignature_bindings),signatureF5890);
  T5 = CALL2(1,VARREF(YastYr_extendT),r_,T6);
  new_rF5891 = T5;
  T8 = CALL3(1,VARREF(YastYobjectify_sequential),body_,new_rF5891,YPtrue);
  bodyF5892 = T8;
  T11 = CALL2(1,VARREF(YastYobjectify_quotation),name_,r_);
  T10 = CALLN(1,VARREF(Ynew),9,VARREF(YastYLast_primitiveG),VARREF(YastYfunction_binding),bindingF5889,VARREF(YastYfunction_debug_name),T11,VARREF(YastYfunction_signature),signatureF5890,VARREF(YastYfunction_body),bodyF5892);
  formF5893 = T10;
  T13 = CALLN(1,VARREF(Ynew),5,VARREF(YastYLast_primitive_definitionG),VARREF(YastYassignment_binding),bindingF5889,VARREF(YastYassignment_form),formF5893);
  defnF5894 = T13;
  T12 = defnF5894;
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
  P defnF5898;
  P formF5897;
  P signatureF5896;
  P bindingF5895;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(sig_, 1);
  ARG(r_, 2);
loop:
  T1 = CALLN(1,VARREF(YastYast_define_binding),4,r_,name_,YPfalse,LITREF(lit_41));
  bindingF5895 = T1;
  T3 = CALL2(1,VARREF(YastYobjectify_signature),sig_,r_);
  signatureF5896 = T3;
  T6 = CALL2(1,VARREF(YastYobjectify_quotation),name_,r_);
  T5 = CALLN(1,VARREF(Ynew),7,VARREF(YastYLast_genericG),VARREF(YastYfunction_binding),bindingF5895,VARREF(YastYfunction_debug_name),T6,VARREF(YastYfunction_signature),signatureF5896);
  formF5897 = T5;
  T8 = CALLN(1,VARREF(Ynew),5,VARREF(YastYLast_generic_definitionG),VARREF(YastYassignment_binding),bindingF5895,VARREF(YastYassignment_form),formF5897);
  defnF5898 = T8;
  T7 = defnF5898;
  T4 = T7;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_method_definition_275) {
  P name_,e_,r_;
  P defnF5904;
  P formF5903;
  P callF5902;
  P metF5901;
  P genF5900;
  P bindingF5899;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
loop:
  T1 = CALLN(1,VARREF(YastYast_define_binding),4,r_,name_,YPtrue,LITREF(lit_41));
  bindingF5899 = T1;
  T4 = CALL2(1,VARREF(Ylst),LITREF(lit_347),name_);
  T3 = CALLN(1,VARREF(Ylst),4,LITREF(lit_346),T4,name_,YPfalse);
  genF5900 = T3;
  T6 = CALL3(1,VARREF(YastYobjectify),e_,r_,YPfalse);
  metF5901 = T6;
  T8 = CALL3(1,VARREF(Ylst),LITREF(lit_348),genF5900,metF5901);
  callF5902 = T8;
  T10 = CALL3(1,VARREF(YastYobjectify),callF5902,r_,YPfalse);
  formF5903 = T10;
  T12 = CALLN(1,VARREF(Ynew),5,VARREF(YastYLast_method_definitionG),VARREF(YastYassignment_binding),bindingF5899,VARREF(YastYassignment_form),formF5903);
  defnF5904 = T12;
  CALL2(1,VARREF(YastYfunction_binding_setter),name_,metF5901);
  T13 = CALL2(1,VARREF(YastYobjectify_quotation),name_,r_);
  CALL2(1,VARREF(YastYfunction_debug_name_setter),T13,metF5901);
  T11 = defnF5904;
  T9 = T11;
  T7 = T9;
  T5 = T7;
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_276) {
  P tmpF5905;
  P T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  VARSET(YwriteYTmax_print_lengthT,VARREF(YDmax_int));
  tmpF5905 = VARREF(YastYTrecord_sourceQT);
  if (tmpF5905 != YPfalse) {
    T5 = CALL2(1,VARREF(YisaQ),FREEREF(1),VARREF(YLlstG));
    if (T5 != YPfalse) {
      T6 = CALL2(1,VARREF(YmacrosYpair),LITREF(lit_13),FREEREF(1));
      T4 = T6;
    } else {
      T4 = FREEREF(1);
    }
    T3 = CALL3(1,VARREF(YruntimeYformat_to_string),LITREF(lit_350),FREEREF(0),T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  T0 = CALL2(1,VARREF(YastYobjectify_quotation),T1,FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_277) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(YwriteYTmax_print_lengthT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_278) {
  P x_2425F5906;
  P T3,T2,T1,T0;
LINK_STACK();
loop:
  VARSET(YwriteYTmax_print_depthT,VARREF(YDmax_int));
  x_2425F5906 = VARREF(YwriteYTmax_print_lengthT);
  T2 = FUNFAB(fun_276,3,FREEREF(0),FREEREF(1),FREEREF(2));
  T3 = FUNFAB(fun_277,1,x_2425F5906);
  T1 = with_cleanup(T2,T3);
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_279) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(YwriteYTmax_print_depthT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_function_source_280) {
  P sig_,body_,r_;
  P x_2424F5907;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(sig_, 0);
  ARG(body_, 1);
  ARG(r_, 2);
loop:
  x_2424F5907 = VARREF(YwriteYTmax_print_depthT);
  T2 = FUNFAB(fun_278,3,sig_,body_,r_);
  T3 = FUNFAB(fun_279,1,x_2424F5907);
  T1 = with_cleanup(T2,T3);
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_281) {
  P bF5910;
  P new_rF5909;
  P signatureF5908;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T1 = CALL2(1,VARREF(YastYobjectify_signature),FREEREF(0),FREEREF(1));
  signatureF5908 = T1;
  T4 = CALL1(1,VARREF(YastYsignature_bindings),signatureF5908);
  T3 = CALL2(1,VARREF(YastYr_extendT),FREEREF(1),T4);
  new_rF5909 = T3;
  T6 = CALL3(1,VARREF(YastYobjectify_sequential),FREEREF(2),new_rF5909,YPtrue);
  bF5910 = T6;
  T7 = CALL2(1,VARREF(YastYobjectify_quotation),YPfalse,FREEREF(1));
  CALL2(1,VARREF(YastYfunction_debug_name_setter),T7,FREEREF(3));
  CALL2(1,VARREF(YastYfunction_signature_setter),signatureF5908,FREEREF(3));
  CALL2(1,VARREF(YastYfunction_body_setter),bF5910,FREEREF(3));
  T8 = CALL3(1,VARREF(YastYobjectify_function_source),FREEREF(0),FREEREF(2),FREEREF(1));
  CALL2(1,VARREF(YastYfunction_source_setter),T8,FREEREF(3));
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
  T0 = VARSET(YastYTcurrent_dependentT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_function_283) {
  P sig_,body_,r_,tailQ_;
  P x_2426F5912;
  P methodF5911;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(sig_, 0);
  ARG(body_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
loop:
  T1 = CALL1(1,VARREF(Ynew),VARREF(YastYLast_methodG));
  methodF5911 = T1;
  x_2426F5912 = VARREF(YastYTcurrent_dependentT);
  VARSET(YastYTcurrent_dependentT,methodF5911);
  T4 = FUNFAB(fun_281,4,sig_,r_,body_,methodF5911);
  T5 = FUNFAB(fun_282,1,x_2426F5912);
  T3 = with_cleanup(T4,T5);
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_col_284) {
  P params_,naryQ_,bindings_,names_,types_;
  P bindingF5924;
  P nameF5923;
  P typeF5922;
  P stypeF5921;
  P dottedQF5920;
  P stypeF5919;
  P snameF5918;
  P paramF5917;
  P arityF5916;
  P valueF5915;
  P tmpF5914;
  P sexpr_valueF5913;
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
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),params_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YsyntaxYsexpr_signature_value),FREEREF(0));
    sexpr_valueF5913 = T3;
    tmpF5914 = sexpr_valueF5913;
    if (tmpF5914 != YPfalse) {
      T7 = tmpF5914;
    } else {
      T8 = CALL1(1,VARREF(YastYdefault_type),FREEREF(1));
      T7 = T8;
    }
    T6 = T7;
    T5 = CALL3(1,VARREF(YastYobjectify),T6,FREEREF(1),YPfalse);
    valueF5915 = T5;
    T11 = CALL1(1,VARREF(YprotoStypesYlen),names_);
    if (naryQ_ != YPfalse) {
      T12 = YPint((P)1);
    } else {
      T12 = YPint((P)0);
    }
    T10 = CALL2(1,VARREF(YprotoSmathY_),T11,T12);
    arityF5916 = T10;
    T14 = CALL1(1,VARREF(YmacrosYrevX),bindings_);
    T15 = CALL1(1,VARREF(YmacrosYrevX),names_);
    T16 = CALL1(1,VARREF(YmacrosYrevX),types_);
    T17 = CALL3(1,VARREF(YastYobjectify),naryQ_,FREEREF(1),YPfalse);
    T18 = CALL3(1,VARREF(YastYobjectify),arityF5916,FREEREF(1),YPfalse);
    T13 = CALLN(1,VARREF(Ynew),13,VARREF(YastYLast_signatureG),VARREF(YastYsignature_bindings),T14,VARREF(YastYsignature_names),T15,VARREF(YastYsignature_specs),T16,VARREF(YastYsignature_naryQ),T17,VARREF(YastYsignature_arity),T18,VARREF(YastYsignature_value),valueF5915);
    T9 = T13;
    T4 = T9;
    T2 = T4;
    T0 = T2;
  } else {
    T20 = CALL1(1,VARREF(Yhead),params_);
    paramF5917 = T20;
    T22 = CALL1(1,VARREF(YsyntaxYsexpr_variable_name),paramF5917);
    snameF5918 = T22;
    T24 = CALL1(1,VARREF(YsyntaxYsexpr_variable_type),paramF5917);
    stypeF5919 = T24;
    T26 = CALL2(1,VARREF(YmacrosYEE),stypeF5919,VARREF(YastYDsexpr_optionals_tag));
    dottedQF5920 = T26;
    if (dottedQF5920 != YPfalse) {
      T28 = VARREF(YastYDsexpr_optionals_type_name);
    } else {
      T28 = stypeF5919;
    }
    stypeF5921 = T28;
    T30 = CALL3(1,VARREF(YastYobjectify),stypeF5921,FREEREF(1),YPfalse);
    typeF5922 = T30;
    T32 = CALL2(1,VARREF(YastYobjectify_quotation),snameF5918,FREEREF(1));
    nameF5923 = T32;
    T34 = CALLN(1,VARREF(Ynew),7,VARREF(YastYLlocal_bindingG),VARREF(YastYbinding_name),snameF5918,VARREF(YastYbinding_type),typeF5922,VARREF(YastYbinding_dottedQ),dottedQF5920);
    bindingF5924 = T34;
    T36 = CALL1(1,VARREF(Ytail),params_);
    T37 = CALL2(1,VARREF(YmacrosYpair),bindingF5924,bindings_);
    T38 = CALLN(1,VARREF(Ynew),5,VARREF(YastYLfab_listG),VARREF(Yhead),nameF5923,VARREF(Ytail),names_);
    T39 = CALLN(1,VARREF(Ynew),5,VARREF(YastYLfab_listG),VARREF(Yhead),typeF5922,VARREF(Ytail),types_);
    a1 = T36;
    a2 = dottedQF5920;
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
  P colF5926;
  P sexpr_paramsF5925;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(sig_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_signature_parameters),sig_);
  sexpr_paramsF5925 = T1;
  T3 = FUNSHELL(1,fun_col_284,3);
  colF5926 = T3;
  FUNINIT(colF5926, 3,sig_,r_,colF5926);
  T5 = CALL1(1,VARREF(YprotoScollectionsScollectionYempty),VARREF(YastYLfab_listG));
  T6 = CALL1(1,VARREF(YprotoScollectionsScollectionYempty),VARREF(YastYLfab_listG));
  T4 = CALLN(0,colF5926,5,sexpr_paramsF5925,YPfalse,Ynil,T5,T6);
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
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),bindings_);
  if (T1 != YPfalse) {
    T3 = CALL2(1,VARREF(YprotoSmathYA),FREEREF(1),YPint((P)1));
    T4 = CALL1(1,VARREF(YastYenvironment_next),FREEREF(2));
    T2 = CALL2(0,FREEREF(0),T3,T4);
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(Yhead),bindings_);
    T6 = CALL2(1,VARREF(YmacrosYEE),T7,FREEREF(3));
    if (T6 != YPfalse) {
      T8 = CALL2(1,VARREF(Ytup),FREEREF(1),j_);
      T5 = T8;
    } else {
      T10 = CALL2(1,VARREF(YprotoSmathYA),j_,YPint((P)1));
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
  P findF5927;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL2(1,VARREF(YisaQ),r_,VARREF(YastYLstatic_local_environmentG));
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_find_286,5);
    findF5927 = T3;
    FUNINIT(findF5927, 5,FREEREF(0),i_,r_,FREEREF(1),findF5927);
    T5 = CALL1(1,VARREF(YastYenvironment_bindings),r_);
    T4 = CALL2(0,findF5927,YPint((P)0),T5);
    T2 = T4;
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(YastYbinding_name),FREEREF(1));
    T6 = CALL3(1,VARREF(Yerror),LITREF(lit_365),T7,r_);
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_compute_local_reference_offsets_288) {
  P binding_,r_;
  P loopF5928;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(r_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_287,2);
  loopF5928 = T1;
  FUNINIT(loopF5928, 2,loopF5928,binding_);
  T2 = CALL2(0,loopF5928,YPint((P)0),r_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_binding_289) {
  P n_,b_,r_;
  P jF5931;
  P iF5930;
  P tup146F5929;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(n_, 0);
  ARG(b_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL2(1,VARREF(YastYcompute_local_reference_offsets),b_,r_);
  tup146F5929 = T1;
  T3 = CALL2(1,VARREF(YmacrosYelt),tup146F5929,YPint((P)0));
  iF5930 = T3;
  T5 = CALL2(1,VARREF(YmacrosYelt),tup146F5929,YPint((P)1));
  jF5931 = T5;
  T6 = CALLN(1,VARREF(Ynew),7,VARREF(YastYLlocal_referenceG),VARREF(YastYreference_binding),b_,VARREF(YastYreference_frame_number),iF5930,VARREF(YastYreference_frame_offset),jF5931);
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_binding_reference_class_290) {
  P b_;
  P x_2428F5933;
  P x_2427F5932;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(YastYbinding_kind),b_);
  x_2427F5932 = T1;
  x_2428F5933 = VARREF(YmacrosYEE);
  T4 = CALL2(1,x_2428F5933,x_2427F5932,LITREF(lit_41));
  if (T4 != YPfalse) {
    T3 = VARREF(YastYLglobal_referenceG);
  } else {
    T6 = CALL2(1,x_2428F5933,x_2427F5932,LITREF(lit_343));
    if (T6 != YPfalse) {
      T5 = VARREF(YastYLpredefined_referenceG);
    } else {
      T8 = CALL2(1,x_2428F5933,x_2427F5932,LITREF(lit_1));
      if (T8 != YPfalse) {
        T7 = VARREF(YastYLruntime_referenceG);
      } else {
        T10 = CALL1(1,VARREF(YastYbinding_kind),b_);
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
  P LrefGF5937;
  P tmpF5936;
  P x_2430F5935;
  P x_2429F5934;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(n_, 0);
  ARG(b_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(YastYbinding_kind),b_);
  x_2429F5934 = T1;
  x_2430F5935 = VARREF(YmacrosYEE);
  T5 = CALL2(1,x_2430F5935,x_2429F5934,LITREF(lit_284));
  tmpF5936 = T5;
  if (tmpF5936 != YPfalse) {
    T6 = tmpF5936;
  } else {
    T7 = CALL2(1,x_2430F5935,x_2429F5934,LITREF(lit_285));
    T6 = T7;
  }
  T4 = T6;
  if (T4 != YPfalse) {
    T3 = b_;
  } else {
    T9 = CALL1(1,VARREF(YastYbinding_reference_class),b_);
    LrefGF5937 = T9;
    T10 = CALL3(1,VARREF(Ynew),LrefGF5937,VARREF(YastYreference_binding),b_);
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
  T0 = CALL2(1,VARREF(YastYobjectify_free_global_reference),n_,r_);
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
  T0 = CALL3(1,VARREF(YastYobjectify),LITREF(lit_372),r_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_free_global_reference_294) {
  P name_,r_;
  P bF5940;
  P tmpF5939;
  P grF5938;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYfind_static_global_environment),r_);
  grF5938 = T1;
  T4 = CALL1(1,VARREF(YastYenvironment_allows_foreign_namesQ),grF5938);
  tmpF5939 = T4;
  if (tmpF5939 != YPfalse) {
    T6 = CALL1(1,VARREF(YastYforeign_nameQ),name_);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T7 = CALL2(1,VARREF(YastYobjectify_foreign_reference),name_,r_);
    T2 = T7;
  } else {
    T11 = CALL1(1,VARREF(YastYfind_environment_module),r_);
    T10 = CALL1(1,VARREF(YastYmodule_name),T11);
    T9 = CALLN(1,VARREF(Ynew),9,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_freeQ),YPtrue,VARREF(YastYbinding_kind),LITREF(lit_41),VARREF(YastYbinding_name),name_,VARREF(YastYbinding_module_name),T10);
    bF5940 = T9;
    CALL2(1,VARREF(YastYinsert_globalX),bF5940,grF5938);
    T12 = CALL3(1,VARREF(Ynew),VARREF(YastYLglobal_referenceG),VARREF(YastYreference_binding),bF5940);
    T8 = T12;
    T2 = T8;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YastYforeign_nameQ) {
  P name_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T2 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLstrG),name_);
  T1 = CALL2(1,VARREF(YprotoScollectionsSsequenceYpos),T2,YPchr((P)58));
  T0 = CALL2(1,VARREF(YprotoSmathYNEE),T1,YPfalse);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_objectify_foreign_reference_296) {
  P name_,r_;
  P bindingF5949;
  P modF5948;
  P loaderF5947;
  P grF5946;
  P tmpF5945;
  P varnameF5944;
  P modnameF5943;
  P breakF5942;
  P namestrF5941;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLstrG),name_);
  namestrF5941 = T1;
  T3 = CALL2(1,VARREF(YprotoScollectionsSsequenceYpos),namestrF5941,YPchr((P)58));
  breakF5942 = T3;
  T5 = CALL3(1,VARREF(YprotoScollectionsSsequenceYsub),namestrF5941,YPint((P)0),breakF5942);
  modnameF5943 = T5;
  T8 = CALL2(1,VARREF(YprotoSmathYA),YPint((P)1),breakF5942);
  T9 = CALL1(1,VARREF(YprotoStypesYlen),namestrF5941);
  T7 = CALL3(1,VARREF(YprotoScollectionsSsequenceYsub),namestrF5941,T8,T9);
  varnameF5944 = T7;
  T13 = CALL1(1,VARREF(YprotoStypesYlen),modnameF5943);
  T12 = CALL2(1,VARREF(YprotoSmagnitudesYG),T13,YPint((P)0));
  tmpF5945 = T12;
  if (tmpF5945 != YPfalse) {
    T16 = CALL1(1,VARREF(YprotoStypesYlen),varnameF5944);
    T15 = CALL2(1,VARREF(YprotoSmagnitudesYG),T16,YPint((P)0));
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
  T19 = CALL1(1,VARREF(YastYfind_static_global_environment),r_);
  grF5946 = T19;
  T21 = CALL1(1,VARREF(YastYenvironment_module_loader),grF5946);
  loaderF5947 = T21;
  T24 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLsymG),modnameF5943);
  T23 = CALL2(1,VARREF(YastYprobe_module),loaderF5947,T24);
  modF5948 = T23;
  T27 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLsymG),varnameF5944);
  T28 = CALL1(1,VARREF(YastYmodule_target_environment),modF5948);
  T26 = CALL2(1,VARREF(YastYfind_binding),T27,T28);
  bindingF5949 = T26;
  T29 = CALL1(1,VARREF(Ynot),bindingF5949);
  if (T29 != YPfalse) {
    T30 = CALL3(1,VARREF(Yerror),LITREF(lit_377),varnameF5944,modnameF5943);
  } else {
  }
  T31 = CALL3(1,VARREF(YastYobjectify_binding),name_,bindingF5949,r_);
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
  T1 = CALL2(1,VARREF(YastYfind_binding),name_,r_);
  T0 = CALL3(1,VARREF(YastYobjectify_binding),name_,T1,r_);
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
  T0 = CALL3(1,VARREF(YastYobjectify),LITREF(lit_380),r_,YPfalse);
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
  T0 = CALL1(1,VARREF(YastYas_lst),x_);
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
  T0 = CALLN(1,VARREF(YmacrosYnapp),4,VARREF(YprotoSmathYfabs),YPfalse,VARREF(YastYLfunctionsG),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YastYfunctions) {
  P h_,t_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
loop:
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(YastYLfunctionsG),VARREF(Yhead),h_,VARREF(Ytail),t_);
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
  RET(VARREF(YastYDfunctions_empty));
}

FUNCODEDEF(fun_304) {
  P n_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(n_, 0);
loop:
  T1 = CALL1(1,VARREF(YastYftype),FREEREF(0));
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(YastYLlocal_bindingG),VARREF(YastYbinding_name),n_,VARREF(YastYbinding_type),T1);
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
  CALL2(1,VARREF(YastYfunction_binding_setter),b_,f_);
  T1 = CALL1(1,VARREF(YastYbinding_name),b_);
  T0 = CALL2(1,VARREF(YastYobjectify_quotation),T1,FREEREF(0));
  CALL2(1,VARREF(YastYfunction_debug_name_setter),T0,f_);
  T2 = CALL2(1,VARREF(YastYbinding_value_setter),f_,b_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_objectify_locals_306) {
  P names_,sigs_,bodies_,body_,r_,tailQ_;
  P functionsF5953;
  P function_formsF5952;
  P new_rF5951;
  P bindingsF5950;
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
  T1 = CALL2(1,VARREF(YmacrosYmap),T2,names_);
  bindingsF5950 = T1;
  T4 = CALL2(1,VARREF(YastYr_extendT),r_,bindingsF5950);
  new_rF5951 = T4;
  T6 = CALL3(1,VARREF(YprotoScollectionsScollectionYmap2),VARREF(YsyntaxYsexpr_make_anonymous_method),sigs_,bodies_);
  function_formsF5952 = T6;
  T9 = CALL3(1,VARREF(YruntimeYrcurry),VARREF(YastYobjectify),new_rF5951,YPfalse);
  T8 = CALL2(1,VARREF(YmacrosYmap),T9,function_formsF5952);
  functionsF5953 = T8;
  T10 = FUNFAB(fun_305,1,r_);
  CALL3(1,VARREF(YprotoScollectionsScollectionYdo2),T10,functionsF5953,bindingsF5950);
  T12 = CALLN(1,VARREF(YmacrosYnapp),4,VARREF(YprotoSmathYfabs),YPfalse,VARREF(YastYLfunctionsG),functionsF5953);
  T13 = CALL3(1,VARREF(YastYobjectify_sequential),body_,new_rF5951,YPtrue);
  T11 = CALLN(1,VARREF(Ynew),7,VARREF(YastYLlocalsG),VARREF(YastYlocals_bindings),bindingsF5950,VARREF(YastYlocals_functions),T12,VARREF(YastYlocals_body),T13);
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
  T2 = CALL2(1,VARREF(YsyntaxYsexpr_make_anonymous_method),T3,body_);
  T1 = CALL3(1,VARREF(YastYobjectify),T2,r_,YPfalse);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YastYLbind_exitG),VARREF(YastYbind_exit_main_fun),T1);
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
  T2 = CALL2(1,VARREF(YsyntaxYsexpr_make_anonymous_method),Ynil,T3);
  T1 = CALL3(1,VARREF(YastYobjectify),T2,r_,YPfalse);
  T5 = CALL2(1,VARREF(YsyntaxYsexpr_make_anonymous_method),Ynil,cleanup_forms_);
  T4 = CALL3(1,VARREF(YastYobjectify),T5,r_,YPfalse);
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(YastYLunwind_protectG),VARREF(YastYunwind_protect_protected_thunk),T1,VARREF(YastYunwind_protect_cleanup_thunk),T4);
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
  T1 = CALL3(1,VARREF(YastYobjectify),type_,r_,YPfalse);
  T2 = CALL3(1,VARREF(YastYobjectify),info_,r_,YPfalse);
  T3 = CALL3(1,VARREF(YastYobjectify),test_,r_,YPfalse);
  T4 = CALL3(1,VARREF(YastYobjectify),handler_,r_,YPfalse);
  T5 = CALL3(1,VARREF(YastYobjectify),body_,r_,YPfalse);
  T0 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmonitorG),VARREF(YastYmonitor_type),T1,VARREF(YastYmonitor_info),T2,VARREF(YastYmonitor_test),T3,VARREF(YastYmonitor_handler),T4,VARREF(YastYmonitor_main_thunk),T5);
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
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YruntimeYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_314) {
  P name_;
  P bindingF5954;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL2(1,VARREF(YastYfind_binding),name_,FREEREF(0));
  bindingF5954 = T1;
  T3 = CALL2(1,VARREF(YmacrosYEE),bindingF5954,YPfalse);
  if (T3 != YPfalse) {
    T5 = FUNFAB(fun_313,1,name_);
    T4 = with_exit(T5);
    T2 = T4;
  } else {
    T6 = CALL3(1,VARREF(YastYexport_bindingX),FREEREF(1),name_,bindingF5954);
    T2 = T6;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_export_315) {
  P names_,r_,tailQ_;
  P moduleF5956;
  P envF5955;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(names_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YastYfind_static_global_environment),r_);
  envF5955 = T1;
  T3 = CALL1(1,VARREF(YastYfind_environment_module),r_);
  moduleF5956 = T3;
  T6 = CALL1(1,VARREF(YastYmodule_target_environment),moduleF5956);
  T5 = CALL2(1,VARREF(YmacrosYEE),envF5955,T6);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T7 = CALL1(1,VARREF(Yerror),LITREF(lit_396));
  } else {
  }
  T8 = FUNFAB(fun_314,2,envF5955,moduleF5956);
  CALL2(1,VARREF(YmacrosYdo),T8,names_);
  T9 = CALL3(1,VARREF(Ynew),VARREF(YastYLconstantG),VARREF(YastYconstant_value),YPfalse);
  T2 = T9;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YastYimport_globalX) {
  P b_,env_;
  P tmpF5958;
  P existingF5957;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(b_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YastYbinding_name),b_);
  T1 = CALL2(1,VARREF(YastYfind_binding),T2,env_);
  existingF5957 = T1;
  T5 = CALL2(1,VARREF(YmacrosYEE),existingF5957,YPfalse);
  tmpF5958 = T5;
  if (tmpF5958 != YPfalse) {
    T6 = tmpF5958;
  } else {
    T7 = CALL2(1,VARREF(YmacrosYEE),existingF5957,b_);
    T6 = T7;
  }
  T4 = T6;
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T9 = CALL1(1,VARREF(YastYbinding_name),b_);
    T10 = CALL1(1,VARREF(YastYbinding_module_name),b_);
    T8 = CALLN(1,VARREF(YruntimeYformat),4,VARREF(YprotoSportsYout),LITREF(lit_402),T9,T10);
  } else {
  }
  CALL2(1,VARREF(YastYinsert_globalX),b_,env_);
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
  CALL2(1,VARREF(YastYimport_globalX),b_,FREEREF(0));
  T1 = CALL1(1,VARREF(YastYbinding_name),b_);
  T0 = CALL3(1,VARREF(YastYexport_bindingX),FREEREF(1),T1,b_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_useSexport_module_318) {
  P name_,r_,tailQ_;
  P used_moduleF5962;
  P loaderF5961;
  P moduleF5960;
  P envF5959;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YastYfind_static_global_environment),r_);
  envF5959 = T1;
  T3 = CALL1(1,VARREF(YastYfind_environment_module),r_);
  moduleF5960 = T3;
  T5 = CALL1(1,VARREF(YastYenvironment_module_loader),envF5959);
  loaderF5961 = T5;
  T7 = CALL2(1,VARREF(YastYprobe_module),loaderF5961,name_);
  used_moduleF5962 = T7;
  T8 = CALL1(1,VARREF(YastYenvironment_uses_modules),envF5959);
  CALL2(1,VARREF(YprotoScollectionsSbufferYpush_lastX),T8,used_moduleF5962);
  T9 = FUNFAB(fun_317,2,envF5959,moduleF5960);
  T10 = CALL1(1,VARREF(YastYmodule_exports),used_moduleF5962);
  CALL2(1,VARREF(YmacrosYdo),T9,T10);
  T11 = CALL3(1,VARREF(Ynew),VARREF(YastYLconstantG),VARREF(YastYconstant_value),YPfalse);
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
  T0 = CALL2(1,VARREF(YastYimport_globalX),b_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_objectify_use_module_320) {
  P name_,r_,tailQ_;
  P used_moduleF5965;
  P loaderF5964;
  P envF5963;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YastYfind_static_global_environment),r_);
  envF5963 = T1;
  T3 = CALL1(1,VARREF(YastYenvironment_module_loader),envF5963);
  loaderF5964 = T3;
  T5 = CALL2(1,VARREF(YastYprobe_module),loaderF5964,name_);
  used_moduleF5965 = T5;
  T6 = CALL1(1,VARREF(YastYenvironment_uses_modules),envF5963);
  CALL2(1,VARREF(YprotoScollectionsSbufferYpush_lastX),T6,used_moduleF5965);
  T7 = FUNFAB(fun_319,1,envF5963);
  T8 = CALL1(1,VARREF(YastYmodule_exports),used_moduleF5965);
  CALL2(1,VARREF(YmacrosYdo),T7,T8);
  T9 = CALL3(1,VARREF(Ynew),VARREF(YastYLconstantG),VARREF(YastYconstant_value),YPfalse);
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
  T0 = CALLN(1,VARREF(YmacrosYcat),4,T1,T2,T3,Ynil);
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
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_unquoteQ),pat_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Yerror),LITREF(lit_410),pat_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YsyntaxYsexpr_unquote_splicingQ),pat_);
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(Yerror),LITREF(lit_411),pat_);
      T3 = T5;
    } else {
      if (YPtrue != YPfalse) {
        T7 = CALL3(1,VARREF(YastYexpand_bind_listT),pat_,var_,fail_);
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
  T0 = CALLN(1,VARREF(YmacrosYcat),4,T1,T2,T3,Ynil);
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
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T6 = CALL1(1,VARREF(Ylst),var_);
  T9 = CALL1(1,VARREF(Yhead),pat_);
  T8 = CALL3(1,VARREF(YastYexpand_bind_element),T9,var_,fail_);
  T7 = CALL1(1,VARREF(Ylst),T8);
  T5 = CALL3(1,VARREF(YmacrosYcat),T6,T7,Ynil);
  T4 = CALL1(1,VARREF(Ylst),T5);
  T3 = CALL2(1,VARREF(YmacrosYcat),T4,Ynil);
  T2 = CALL1(1,VARREF(Ylst),T3);
  T12 = CALL1(1,VARREF(Ytail),pat_);
  T11 = CALL3(1,VARREF(YastYexpand_bind_listT),T12,var_,fail_);
  T10 = CALL1(1,VARREF(Ylst),T11);
  T0 = CALLN(1,VARREF(YmacrosYcat),4,T1,T2,T10,Ynil);
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
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_307));
  T6 = CALL1(1,VARREF(Ylst),pat_);
  T4 = CALL3(1,VARREF(YmacrosYcat),T5,T6,Ynil);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T7 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALLN(1,VARREF(YmacrosYcat),5,T1,T2,T3,T7,Ynil);
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
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_unquoteQ),pat_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Ylst),LITREF(lit_13));
    T6 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
    T8 = CALL1(1,VARREF(YprotoStypesY2nd),pat_);
    T7 = CALL1(1,VARREF(Ylst),T8);
    T11 = CALL1(1,VARREF(Ylst),LITREF(lit_415));
    T12 = CALL1(1,VARREF(Ylst),var_);
    T13 = CALL1(1,VARREF(Ylst),fail_);
    T10 = CALLN(1,VARREF(YmacrosYcat),4,T11,T12,T13,Ynil);
    T9 = CALL1(1,VARREF(Ylst),T10);
    T5 = CALLN(1,VARREF(YmacrosYcat),4,T6,T7,T9,Ynil);
    T4 = CALL1(1,VARREF(Ylst),T5);
    T16 = CALL1(1,VARREF(Ylst),LITREF(lit_153));
    T17 = CALL1(1,VARREF(Ylst),var_);
    T15 = CALL3(1,VARREF(YmacrosYcat),T16,T17,Ynil);
    T14 = CALL1(1,VARREF(Ylst),T15);
    T2 = CALLN(1,VARREF(YmacrosYcat),4,T3,T4,T14,Ynil);
    T0 = T2;
  } else {
    T19 = CALL1(1,VARREF(YsyntaxYsexpr_unquote_splicingQ),pat_);
    if (T19 != YPfalse) {
      T21 = CALL1(1,VARREF(Ylst),LITREF(lit_13));
      T24 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
      T26 = CALL1(1,VARREF(YprotoStypesY2nd),pat_);
      T25 = CALL1(1,VARREF(Ylst),T26);
      T27 = CALL1(1,VARREF(Ylst),var_);
      T23 = CALLN(1,VARREF(YmacrosYcat),4,T24,T25,T27,Ynil);
      T22 = CALL1(1,VARREF(Ylst),T23);
      T30 = CALL1(1,VARREF(Ylst),LITREF(lit_307));
      T31 = CALL1(1,VARREF(Ylst),Ynil);
      T29 = CALL3(1,VARREF(YmacrosYcat),T30,T31,Ynil);
      T28 = CALL1(1,VARREF(Ylst),T29);
      T20 = CALLN(1,VARREF(YmacrosYcat),4,T21,T22,T28,Ynil);
      T18 = T20;
    } else {
      if (YPtrue != YPfalse) {
        T34 = CALL1(1,VARREF(Ylst),LITREF(lit_13));
        T37 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
        T42 = CALL1(1,VARREF(Ylst),var_);
        T45 = CALL1(1,VARREF(Ylst),LITREF(lit_416));
        T46 = CALL1(1,VARREF(Ylst),var_);
        T47 = CALL1(1,VARREF(Ylst),fail_);
        T44 = CALLN(1,VARREF(YmacrosYcat),4,T45,T46,T47,Ynil);
        T43 = CALL1(1,VARREF(Ylst),T44);
        T41 = CALL3(1,VARREF(YmacrosYcat),T42,T43,Ynil);
        T40 = CALL1(1,VARREF(Ylst),T41);
        T39 = CALL2(1,VARREF(YmacrosYcat),T40,Ynil);
        T38 = CALL1(1,VARREF(Ylst),T39);
        T49 = CALL3(1,VARREF(YastYexpand_bind_list),pat_,var_,fail_);
        T48 = CALL1(1,VARREF(Ylst),T49);
        T36 = CALLN(1,VARREF(YmacrosYcat),4,T37,T38,T48,Ynil);
        T35 = CALL1(1,VARREF(Ylst),T36);
        T52 = CALL1(1,VARREF(Ylst),LITREF(lit_153));
        T53 = CALL1(1,VARREF(Ylst),var_);
        T51 = CALL3(1,VARREF(YmacrosYcat),T52,T53,Ynil);
        T50 = CALL1(1,VARREF(Ylst),T51);
        T33 = CALLN(1,VARREF(YmacrosYcat),4,T34,T35,T50,Ynil);
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
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_149));
  T3 = CALLN(1,VARREF(YmacrosYcat),4,T4,T5,T6,Ynil);
  T2 = CALL1(1,VARREF(Ylst),T3);
  T8 = CALL3(1,VARREF(YastYexpand_bind_list),pat_,var_,fail_);
  T7 = CALL1(1,VARREF(Ylst),T8);
  T11 = CALL1(1,VARREF(Ylst),fail_);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_419));
  T13 = CALL1(1,VARREF(Ylst),var_);
  T10 = CALLN(1,VARREF(YmacrosYcat),4,T11,T12,T13,Ynil);
  T9 = CALL1(1,VARREF(Ylst),T10);
  T0 = CALLN(1,VARREF(YmacrosYcat),5,T1,T2,T7,T9,Ynil);
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
  T0 = CALL3(1,VARREF(YmacrosYcat),T1,T2,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_expand_syntax_if_330) {
  P x_;
  P epatF5973;
  P failF5972;
  P varF5971;
  P elseF5970;
  P thenF5969;
  P valueF5968;
  P varsF5967;
  P patF5966;
  P T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_syntax_if_pattern),x_);
  patF5966 = T1;
  T3 = CALL1(1,VARREF(YsyntaxYsexpr_bind_pattern_variables),patF5966);
  varsF5967 = T3;
  T5 = CALL1(1,VARREF(YsyntaxYsexpr_syntax_if_value),x_);
  valueF5968 = T5;
  T7 = CALL1(1,VARREF(YsyntaxYsexpr_syntax_if_then),x_);
  thenF5969 = T7;
  T9 = CALL1(1,VARREF(YsyntaxYsexpr_syntax_if_else),x_);
  elseF5970 = T9;
  T11 = CALL0(1,VARREF(YmacrosYgensym));
  varF5971 = T11;
  T13 = CALL0(1,VARREF(YmacrosYgensym));
  failF5972 = T13;
  T15 = CALL3(1,VARREF(YastYexpand_pattern),patF5966,varF5971,failF5972);
  epatF5973 = T15;
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_421));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_3));
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_422));
  T26 = CALL1(1,VARREF(Ylst),failF5972);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_5));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_423));
  T30 = CALL3(1,VARREF(YmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_352));
  T34 = CALL3(1,VARREF(YmacrosYcat),T35,T36,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T28 = CALL3(1,VARREF(YmacrosYcat),T29,T33,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_3));
  T40 = CALL1(1,VARREF(Ylst),elseF5970);
  T38 = CALL3(1,VARREF(YmacrosYcat),T39,T40,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T25 = CALLN(1,VARREF(YmacrosYcat),4,T26,T27,T37,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T23 = CALL2(1,VARREF(YmacrosYcat),T24,Ynil);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T48 = CALL1(1,VARREF(Ylst),varF5971);
  T49 = CALL1(1,VARREF(Ylst),valueF5968);
  T47 = CALL3(1,VARREF(YmacrosYcat),T48,T49,Ynil);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T45 = CALL2(1,VARREF(YmacrosYcat),T46,Ynil);
  T44 = CALL1(1,VARREF(Ylst),T45);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T55 = fun_329;
  T54 = CALL2(1,VARREF(YmacrosYmap),T55,varsF5967);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T56 = CALL1(1,VARREF(Ylst),epatF5973);
  T57 = CALL1(1,VARREF(Ylst),thenF5969);
  T51 = CALLN(1,VARREF(YmacrosYcat),5,T52,T53,T56,T57,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T42 = CALLN(1,VARREF(YmacrosYcat),4,T43,T44,T50,Ynil);
  T41 = CALL1(1,VARREF(Ylst),T42);
  T20 = CALLN(1,VARREF(YmacrosYcat),4,T21,T22,T41,Ynil);
  T19 = CALL1(1,VARREF(Ylst),T20);
  T16 = CALLN(1,VARREF(YmacrosYcat),4,T17,T18,T19,Ynil);
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
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(YastYLstatic_local_environmentG),VARREF(YastYenvironment_next),r_,VARREF(YastYenvironment_bindings),bindings_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_insert_globalX_332) {
  P binding_,r_;
  P rF5974;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYfind_static_global_environment),r_);
  check_type(T1,VARREF(YastYLstatic_global_environmentG));
  rF5974 = T1;
  T3 = CALL1(1,VARREF(YastYenvironment_bindings),rF5974);
  T4 = CALL1(1,VARREF(YastYbinding_name),binding_);
  T2 = CALL3(1,VARREF(YprotoScollectionsScollectionYelt_setter),binding_,T3,T4);
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
  T0 = CALL2(1,VARREF(YastYinsert_globalX),b_,FREEREF(0));
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
  T0 = CALL2(1,VARREF(YmacrosYdo),T1,bindings_);
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
  T1 = CALL1(1,VARREF(YastYenvironment_next),r_);
  T0 = CALL1(1,VARREF(YastYfind_static_global_environment),T1);
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
  T1 = CALL1(1,VARREF(YastYfind_environment_module),r_);
  T0 = CALL1(1,VARREF(YastYmodule_syntax_environment),T1);
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
  T1 = CALL1(1,VARREF(YastYfind_static_global_environment),r_);
  T0 = CALL1(1,VARREF(YastYenvironment_module),T1);
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
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),bindings_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YastYenvironment_next),FREEREF(1));
    T2 = CALL2(1,VARREF(YastYfind_binding),FREEREF(0),T3);
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(Yhead),bindings_);
    T6 = CALL1(1,VARREF(YastYbinding_name),T7);
    T5 = CALL2(1,VARREF(YmacrosYEE),FREEREF(0),T6);
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
  P loopF5975;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_339,3);
  loopF5975 = T1;
  FUNINIT(loopF5975, 3,name_,r_,loopF5975);
  T3 = CALL1(1,VARREF(YastYenvironment_bindings),r_);
  T2 = CALL1(0,loopF5975,T3);
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
  P tmpF5976;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
loop:
  T2 = CALL1(1,VARREF(YastYenvironment_bindings),r_);
  T1 = CALL3(1,VARREF(YprotoScollectionsScollectionYelt_or),T2,name_,YPfalse);
  tmpF5976 = T1;
  if (tmpF5976 != YPfalse) {
    T3 = tmpF5976;
  } else {
    T5 = CALL1(1,VARREF(YastYenvironment_next),r_);
    T4 = CALL2(1,VARREF(YastYfind_binding),name_,T5);
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
  T0 = CALL1(1,VARREF(YastYenvironment_bindings),env_);
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
  T1 = CALL2(1,VARREF(YprotoScollectionsScollectionYadd),VARREF(YastYTmagic_bindingsT),value_);
  T0 = VARSET(YastYTmagic_bindingsT,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_magic_bindings_345) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(VARREF(YastYTmagic_bindingsT));
}

FUNCODEDEF(fun_x_2434_346) {
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
  P sexpr_nameF5989;
  P special_nameF5988;
  P x_2433F5987;
  P x_2433F5986;
  P x_2433F5985;
  P x_2433F5984;
  P x_2433F5983;
  P x_2433F5982;
  P bodyF5981;
  P paramsF5980;
  P nameF5979;
  P x_2433F5978;
  P x_2434F5977;
  P T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51;
  P T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35;
  P T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2434_346,1);
  x_2434F5977 = T1;
  FUNINIT(x_2434F5977, 1,return_);
  x_2433F5978 = FREEREF(0);
  nameF5979 = YPfalse;
  nameF5979 = BOXFAB(nameF5979);
  paramsF5980 = YPfalse;
  paramsF5980 = BOXFAB(paramsF5980);
  bodyF5981 = YPfalse;
  bodyF5981 = BOXFAB(bodyF5981);
  T9 = CALL2(1,VARREF(YisaQ),x_2433F5978,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2433F5978,LITREF(lit_435),x_2434F5977);
    x_2433F5982 = T11;
    T13 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2433F5982,x_2434F5977);
    BOXVAL(nameF5979) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_2433F5982);
    x_2433F5983 = T14;
    T16 = CALL2(1,VARREF(YmacrosYmatch_sublist),x_2433F5983,x_2434F5977);
    x_2433F5984 = T16;
    BOXVAL(paramsF5980) = x_2433F5984;
    x_2433F5985 = Ynil;
    T18 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2433F5985,x_2434F5977);
    T17 = T18;
    T19 = CALL1(1,VARREF(Ytail),x_2433F5983);
    x_2433F5986 = T19;
    BOXVAL(bodyF5981) = x_2433F5986;
    x_2433F5987 = Ynil;
    T21 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2433F5987,x_2434F5977);
    T20 = T21;
    T15 = T20;
    T12 = T15;
    T10 = T12;
  } else {
    T22 = CALL2(1,x_2434F5977,LITREF(lit_8),x_2433F5978);
  }
  T25 = BOXVAL(nameF5979);
  T24 = CALL2(1,VARREF(YmacrosYcat_sym),LITREF(lit_436),T25);
  special_nameF5988 = T24;
  T28 = BOXVAL(nameF5979);
  T27 = CALL3(1,VARREF(YmacrosYcat_sym),LITREF(lit_437),T28,LITREF(lit_438));
  sexpr_nameF5989 = T27;
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_13));
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_150));
  T34 = CALL1(1,VARREF(Ylst),special_nameF5988);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_151));
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_38));
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_39));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_307));
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_284));
  T41 = CALL3(1,VARREF(YmacrosYcat),T42,T43,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_29));
  T45 = CALL1(1,VARREF(Ylst),sexpr_nameF5989);
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_42));
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_439));
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_440));
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_441));
  T54 = BOXVAL(paramsF5980);
  T53 = CALL2(1,VARREF(YmacrosYcat),T54,Ynil);
  T52 = CALL1(1,VARREF(Ylst),T53);
  T55 = BOXVAL(bodyF5981);
  T50 = CALLN(1,VARREF(YmacrosYcat),4,T51,T52,T55,Ynil);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_44));
  T57 = CALL1(1,VARREF(Ylst),YPfalse);
  T36 = CALLN(1,VARREF(YmacrosYcat),13,T37,T38,T39,T40,T44,T45,T46,T47,T48,T49,T56,T57,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T32 = CALLN(1,VARREF(YmacrosYcat),4,T33,T34,T35,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_432));
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_307));
  T65 = BOXVAL(nameF5979);
  T64 = CALL1(1,VARREF(Ylst),T65);
  T62 = CALL3(1,VARREF(YmacrosYcat),T63,T64,Ynil);
  T61 = CALL1(1,VARREF(Ylst),T62);
  T66 = CALL1(1,VARREF(Ylst),special_nameF5988);
  T59 = CALLN(1,VARREF(YmacrosYcat),4,T60,T61,T66,Ynil);
  T58 = CALL1(1,VARREF(Ylst),T59);
  T29 = CALLN(1,VARREF(YmacrosYcat),4,T30,T31,T58,Ynil);
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
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_if_test),x_);
  T2 = CALL1(1,VARREF(YsyntaxYsexpr_if_then),x_);
  T3 = CALL1(1,VARREF(YsyntaxYsexpr_if_else),x_);
  T0 = CALLN(1,VARREF(YastYobjectify_alternative),5,T1,T2,T3,r_,tailQ_);
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
  T0 = CALL3(1,VARREF(YastYobjectify_sequential),T1,r_,tailQ_);
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
  T1 = CALL1(1,VARREF(YprotoStypesY2nd),x_);
  T0 = CALL2(1,VARREF(YastYobjectify_raw),T1,r_);
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
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_text_of_quotation),x_);
  T0 = CALL2(1,VARREF(YastYobjectify_quotation),T1,r_);
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
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_assignment_variable),x_);
  T2 = CALL1(1,VARREF(YsyntaxYsexpr_assignment_value),x_);
  T0 = CALLN(1,VARREF(YastYobjectify_assignment),4,T1,T2,r_,tailQ_);
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
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_definition_variable),x_);
  T2 = CALL1(1,VARREF(YsyntaxYsexpr_definition_value),x_);
  T0 = CALL3(1,VARREF(YastYobjectify_definition),T1,T2,r_);
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
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_syntax_definition_variable),x_);
  T2 = CALL1(1,VARREF(YsyntaxYsexpr_syntax_definition_value),x_);
  T0 = CALLN(1,VARREF(YastYobjectify_syntax_definition),4,T1,T2,r_,YPtrue);
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
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_syntax_definition_variable),x_);
  T2 = CALL1(1,VARREF(YsyntaxYsexpr_syntax_definition_value),x_);
  T0 = CALLN(1,VARREF(YastYobjectify_syntax_definition),4,T1,T2,r_,YPfalse);
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
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_function_definition_variable),x_);
  T2 = CALL1(1,VARREF(YsyntaxYsexpr_function_definition_value),x_);
  T0 = CALL3(1,VARREF(YastYobjectify_method_definition),T1,T2,r_);
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
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_function_definition_variable),x_);
  T2 = CALL1(1,VARREF(YsyntaxYsexpr_function_signature),x_);
  T0 = CALL3(1,VARREF(YastYobjectify_generic_definition),T1,T2,r_);
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
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_function_definition_variable),x_);
  T2 = CALL1(1,VARREF(YsyntaxYsexpr_function_definition_value),x_);
  T0 = CALL3(1,VARREF(YastYobjectify_function_definition),T1,T2,r_);
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
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_method_signature),x_);
  T2 = CALL1(1,VARREF(YsyntaxYsexpr_method_body),x_);
  T0 = CALLN(1,VARREF(YastYobjectify_function),4,T1,T2,r_,tailQ_);
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
  T1 = CALL1(1,VARREF(YprotoStypesY2nd),x_);
  T0 = CALL3(1,VARREF(YastYobjectify_boundQ),T1,r_,tailQ_);
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
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_let_Gcombination),x_);
  T0 = CALL3(1,VARREF(YastYobjectify),T1,r_,tailQ_);
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
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_def_value),x_);
  T0 = CALL3(1,VARREF(YastYobjectify),T1,r_,tailQ_);
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
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_loc_bound_names),x_);
  T2 = CALL1(1,VARREF(YsyntaxYsexpr_loc_bound_signatures),x_);
  T3 = CALL1(1,VARREF(YsyntaxYsexpr_loc_bound_bodies),x_);
  T4 = CALL1(1,VARREF(YsyntaxYsexpr_loc_raw_body),x_);
  T0 = CALLN(1,VARREF(YastYobjectify_locals),6,T1,T2,T3,T4,r_,tailQ_);
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
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_iterate_Gloc),x_);
  T0 = CALL3(1,VARREF(YastYobjectify),T1,r_,tailQ_);
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
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_block_name),x_);
  T2 = CALL1(1,VARREF(YsyntaxYsexpr_block_body),x_);
  T0 = CALLN(1,VARREF(YastYobjectify_bind_exit),4,T1,T2,r_,tailQ_);
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
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_unwind_protect_protected_form),x_);
  T2 = CALL1(1,VARREF(YsyntaxYsexpr_unwind_protect_cleanup_forms),x_);
  T0 = CALLN(1,VARREF(YastYobjectify_unwind_protect),4,T1,T2,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_368) {
  P x_,r_,tailQ_;
  P bodyF5995;
  P handlerF5994;
  P testF5993;
  P infoF5992;
  P typeF5991;
  P tup147F5990;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_monitor_expand),x_);
  tup147F5990 = T1;
  T3 = CALL2(1,VARREF(YmacrosYelt),tup147F5990,YPint((P)0));
  typeF5991 = T3;
  T5 = CALL2(1,VARREF(YmacrosYelt),tup147F5990,YPint((P)1));
  infoF5992 = T5;
  T7 = CALL2(1,VARREF(YmacrosYelt),tup147F5990,YPint((P)2));
  testF5993 = T7;
  T9 = CALL2(1,VARREF(YmacrosYelt),tup147F5990,YPint((P)3));
  handlerF5994 = T9;
  T11 = CALL2(1,VARREF(YmacrosYelt),tup147F5990,YPint((P)4));
  bodyF5995 = T11;
  T12 = CALLN(1,VARREF(YastYobjectify_monitor),7,typeF5991,infoF5992,testF5993,handlerF5994,bodyF5995,r_,tailQ_);
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
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),args_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ylst),LITREF(lit_307),Ynil);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),args_);
    T6 = CALL1(1,VARREF(Ytail),args_);
    T5 = CALL1(1,VARREF(YastYpairize),T6);
    T3 = CALL3(1,VARREF(Ylst),LITREF(lit_308),T4,T5);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_370) {
  P x_,r_,tailQ_;
  P prop_initsF5996;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_isa_prop_inits),x_);
  prop_initsF5996 = T1;
  T5 = CALL1(1,VARREF(YsyntaxYsexpr_isa_parent),x_);
  T7 = CALL1(1,VARREF(YsyntaxYsexpr_isa_init_props),prop_initsF5996);
  T6 = CALL1(1,VARREF(YastYpairize),T7);
  T9 = CALL1(1,VARREF(YsyntaxYsexpr_isa_init_values),prop_initsF5996);
  T8 = CALL1(1,VARREF(YastYpairize),T9);
  T4 = CALL3(1,VARREF(Ylst),T5,T6,T8);
  T3 = CALL2(1,VARREF(YsyntaxYsexpr_make_application),LITREF(lit_459),T4);
  T2 = CALL3(1,VARREF(YastYobjectify),T3,r_,tailQ_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_371) {
  P x_,r_,tailQ_;
  P nameF5997;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_definition_variable),x_);
  nameF5997 = T1;
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_461));
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_307));
  T8 = CALL1(1,VARREF(Ylst),nameF5997);
  T6 = CALL3(1,VARREF(YmacrosYcat),T7,T8,Ynil);
  T5 = CALL1(1,VARREF(Ylst),T6);
  T11 = CALL1(1,VARREF(YsyntaxYsexpr_define_class_parents),x_);
  T10 = CALL1(1,VARREF(YastYpairize),T11);
  T9 = CALL1(1,VARREF(Ylst),T10);
  T3 = CALLN(1,VARREF(YmacrosYcat),4,T4,T5,T9,Ynil);
  T2 = CALL3(1,VARREF(YastYobjectify_definition),nameF5997,T3,r_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_372) {
  P x_,r_,tailQ_;
  P typeF6002;
  P setter_nameF6001;
  P ownerF6000;
  P varF5999;
  P nameF5998;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_prop_name),x_);
  nameF5998 = T1;
  T3 = CALL1(1,VARREF(YsyntaxYsexpr_prop_init_var),x_);
  varF5999 = T3;
  T5 = CALL1(1,VARREF(YsyntaxYsexpr_prop_owner),x_);
  ownerF6000 = T5;
  T7 = CALL1(1,VARREF(YsyntaxYsexpr_fab_setter_name),nameF5998);
  setter_nameF6001 = T7;
  T9 = CALL1(1,VARREF(YsyntaxYsexpr_prop_type),x_);
  typeF6002 = T9;
  T13 = CALL2(1,VARREF(YsyntaxYsexpr_fab_getter),nameF5998,ownerF6000);
  T14 = CALL3(1,VARREF(YsyntaxYsexpr_fab_setter),nameF5998,ownerF6000,typeF6002);
  T18 = CALL1(1,VARREF(YsyntaxYsexpr_prop_initQ),x_);
  if (T18 != YPfalse) {
    T23 = CALL1(1,VARREF(Ylst),varF5999);
    T24 = CALL1(1,VARREF(Ylst),LITREF(lit_372));
    T22 = CALL3(1,VARREF(YmacrosYcat),T23,T24,Ynil);
    T21 = CALL1(1,VARREF(Ylst),T22);
    T20 = CALL2(1,VARREF(YmacrosYcat),T21,Ynil);
    T26 = CALL1(1,VARREF(YsyntaxYsexpr_prop_init),x_);
    T25 = CALL1(1,VARREF(Ylst),T26);
    T19 = CALL2(1,VARREF(YsyntaxYsexpr_make_anonymous_method),T20,T25);
    T17 = T19;
  } else {
    T17 = LITREF(lit_464);
  }
  T16 = CALLN(1,VARREF(Ylst),5,ownerF6000,nameF5998,setter_nameF6001,typeF6002,T17);
  T15 = CALL2(1,VARREF(YsyntaxYsexpr_make_application),LITREF(lit_463),T16);
  T12 = CALL3(1,VARREF(Ylst),T13,T14,T15);
  T11 = CALL1(1,VARREF(YsyntaxYsexpr_make_begin),T12);
  T10 = CALL3(1,VARREF(YastYobjectify),T11,r_,tailQ_);
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
  T0 = CALLN(1,VARREF(YastYobjectify_compile_time),4,T1,r_,tailQ_,YPfalse);
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
  T0 = CALLN(1,VARREF(YastYobjectify_compile_time),4,T1,r_,tailQ_,YPtrue);
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
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_forward_primitiveQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YsyntaxYsexpr_function_definition_variable),x_);
    CALLN(1,VARREF(YastYast_define_binding),4,r_,T2,YPfalse,LITREF(lit_343));
    T3 = CALL3(1,VARREF(YastYobjectify),YPfalse,r_,tailQ_);
    T0 = T3;
  } else {
    T5 = CALL1(1,VARREF(YsyntaxYsexpr_function_definition_variable),x_);
    T6 = CALL1(1,VARREF(YsyntaxYsexpr_function_signature),x_);
    T7 = CALL1(1,VARREF(YsyntaxYsexpr_function_body),x_);
    T4 = CALLN(1,VARREF(YastYobjectify_primitive_definition),4,T5,T6,T7,r_);
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
  T1 = CALL1(1,VARREF(YsyntaxYsexpr_expand_backquote),x_);
  T0 = CALL3(1,VARREF(YastYobjectify),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_macro_expand_377) {
  P x_,r_,tailQ_;
  P resF6005;
  P tmpF6004;
  P mF6003;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T2 = CALL1(1,VARREF(Yhead),x_);
  T1 = CALL3(1,VARREF(YastYobjectify),T2,r_,tailQ_);
  mF6003 = T1;
  T5 = CALL2(1,VARREF(YisaQ),mF6003,VARREF(YastYLmodule_bindingG));
  tmpF6004 = T5;
  if (tmpF6004 != YPfalse) {
    T8 = CALL1(1,VARREF(YastYbinding_kind),mF6003);
    T7 = CALL2(1,VARREF(YmacrosYEE),T8,LITREF(lit_284));
    T6 = T7;
  } else {
    T6 = YPfalse;
  }
  T4 = T6;
  if (T4 != YPfalse) {
    T11 = CALL1(1,VARREF(YastYbinding_handler),mF6003);
    T10 = CALL3(1,T11,x_,r_,tailQ_);
    resF6005 = T10;
    T9 = resF6005;
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
  T2 = CALL1(1,VARREF(YprotoStypesY2nd),x_);
  T1 = CALL3(1,VARREF(YastYast_macro_expand),T2,r_,tailQ_);
  T0 = CALL2(1,VARREF(YastYobjectify_quotation),T1,r_);
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
  T1 = CALL1(1,VARREF(YastYexpand_syntax_if),x_);
  T0 = CALL3(1,VARREF(YastYobjectify),T1,r_,tailQ_);
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
  T0 = CALL3(1,VARREF(YastYobjectify_export),T1,r_,tailQ_);
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
  T1 = CALL1(1,VARREF(YprotoStypesY2nd),x_);
  T0 = CALL3(1,VARREF(YastYobjectify_use_module),T1,r_,tailQ_);
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
  T1 = CALL1(1,VARREF(YprotoStypesY2nd),x_);
  T0 = CALL3(1,VARREF(YastYobjectify_useSexport_module),T1,r_,tailQ_);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYtransaction_implemented_bindings));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYtransaction_implemented_bindings));
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
  T0 = CALL2(1,VARREF(YprotoScollectionsScollectionYfab),VARREF(YprotoScollectionsScollectionYLtabG),YPint((P)10));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYtransaction_dependents));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYtransaction_dependents));
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
  T0 = CALL2(1,VARREF(YprotoScollectionsScollectionYfab),VARREF(YprotoScollectionsScollectionYLtabG),YPint((P)10));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYtransaction_register_implemented_binding) {
  P b_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T0 = CALL1(1,VARREF(Ynot),VARREF(YastYTcurrent_subtransactionT));
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_487));
  } else {
  }
  T3 = CALL1(1,VARREF(YastYtransaction_implemented_bindings),VARREF(YastYTcurrent_subtransactionT));
  T2 = CALL3(1,VARREF(YprotoScollectionsScollectionYelt_setter),YPtrue,T3,b_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(YastYtransaction_register_dependent) {
  P d_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(d_, 0);
loop:
  T0 = CALL1(1,VARREF(Ynot),VARREF(YastYTcurrent_subtransactionT));
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_490));
  } else {
  }
  T3 = CALL1(1,VARREF(YastYtransaction_dependents),VARREF(YastYTcurrent_subtransactionT));
  T2 = CALL3(1,VARREF(YprotoScollectionsScollectionYelt_setter),YPtrue,T3,d_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(YastYtransaction_emptyQ) {
  P t_;
  P tmpF6006;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  T2 = CALL1(1,VARREF(YastYtransaction_implemented_bindings),t_);
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),T2);
  tmpF6006 = T1;
  if (tmpF6006 != YPfalse) {
    T5 = CALL1(1,VARREF(YastYtransaction_dependents),t_);
    T4 = CALL1(1,VARREF(YmacrosYemptyQ),T5);
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
  T0 = CALL3(1,VARREF(YprotoScollectionsScollectionYelt_setter),YPtrue,FREEREF(0),k_);
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
  T0 = CALL3(1,VARREF(YprotoScollectionsScollectionYelt_setter),YPtrue,FREEREF(0),k_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYmerge_transactionsX) {
  P t1_,t2_;
  P t2_dependentsF6010;
  P t1_dependentsF6009;
  P t2_bindingsF6008;
  P t1_bindingsF6007;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYtransaction_emptyQ),t2_);
  if (T1 != YPfalse) {
    T0 = t1_;
  } else {
    T3 = CALL1(1,VARREF(YastYtransaction_emptyQ),t1_);
    if (T3 != YPfalse) {
      T2 = t2_;
    } else {
      if (YPtrue != YPfalse) {
        T6 = CALL1(1,VARREF(YastYtransaction_implemented_bindings),t1_);
        t1_bindingsF6007 = T6;
        T8 = CALL1(1,VARREF(YastYtransaction_implemented_bindings),t2_);
        t2_bindingsF6008 = T8;
        T10 = CALL1(1,VARREF(YastYtransaction_dependents),t1_);
        t1_dependentsF6009 = T10;
        T12 = CALL1(1,VARREF(YastYtransaction_dependents),t2_);
        t2_dependentsF6010 = T12;
        T13 = FUNFAB(fun_392,1,t1_bindingsF6007);
        CALL2(1,VARREF(YprotoScollectionsScollectionYdo_keyed),T13,t2_bindingsF6008);
        T14 = FUNFAB(fun_393,1,t1_dependentsF6009);
        CALL2(1,VARREF(YprotoScollectionsScollectionYdo_keyed),T14,t2_dependentsF6010);
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
  T0 = CALL2(1,VARREF(YastYbinding_freeQ_setter),YPtrue,binding_);
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
  T0 = CALL1(1,VARREF(YdependencyYdetach_dependent),dependent_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYroll_back_transaction) {
  P t_;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  T0 = fun_395;
  T1 = CALL1(1,VARREF(YastYtransaction_implemented_bindings),t_);
  CALL2(1,VARREF(YprotoScollectionsScollectionYdo_keyed),T0,T1);
  T3 = fun_396;
  T4 = CALL1(1,VARREF(YastYtransaction_dependents),t_);
  T2 = CALL2(1,VARREF(YprotoScollectionsScollectionYdo_keyed),T3,T4);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_398) {
  P valueF6011;
  P T2,T1,T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(Ynew),VARREF(YastYLtransactionG));
  VARSET(YastYTcurrent_subtransactionT,T0);
  T2 = CALL0(1,FREEREF(0));
  valueF6011 = T2;
  BOXVAL(FREEREF(1)) = YPtrue;
  T1 = valueF6011;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_399) {
  P T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T0 = BOXVAL(FREEREF(0));
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(YastYmodule_transaction),FREEREF(1));
    T2 = CALL2(1,VARREF(YastYmerge_transactionsX),T3,VARREF(YastYTcurrent_subtransactionT));
    T1 = CALL2(1,VARREF(YastYmodule_transaction_setter),T2,FREEREF(1));
  } else {
    T4 = CALL1(1,VARREF(YastYroll_back_transaction),VARREF(YastYTcurrent_subtransactionT));
  }
  T5 = VARSET(YastYTcurrent_subtransactionT,FREEREF(2));
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(YastYcall_with_subtransaction) {
  P module_,thunk_;
  P savedF6013;
  P successF6012;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(module_, 0);
  ARG(thunk_, 1);
loop:
  successF6012 = YPfalse;
  successF6012 = BOXFAB(successF6012);
  savedF6013 = VARREF(YastYTcurrent_subtransactionT);
  T4 = FUNFAB(fun_398,2,thunk_,successF6012);
  T5 = FUNFAB(fun_399,3,successF6012,module_,savedF6013);
  T3 = with_cleanup(T4,T5);
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2438_401) {
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
  P x_2437F6022;
  P x_2437F6021;
  P x_2437F6020;
  P x_2437F6019;
  P x_2437F6018;
  P bodyF6017;
  P moduleF6016;
  P x_2437F6015;
  P x_2438F6014;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_2438_401,1);
  x_2438F6014 = T1;
  FUNINIT(x_2438F6014, 1,return_);
  x_2437F6015 = FREEREF(0);
  moduleF6016 = YPfalse;
  moduleF6016 = BOXFAB(moduleF6016);
  bodyF6017 = YPfalse;
  bodyF6017 = BOXFAB(bodyF6017);
  T7 = CALL2(1,VARREF(YisaQ),x_2437F6015,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2437F6015,LITREF(lit_503),x_2438F6014);
    x_2437F6018 = T9;
    T11 = CALL2(1,VARREF(YmacrosYmatch_sublist),x_2437F6018,x_2438F6014);
    x_2437F6019 = T11;
    T13 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2437F6019,x_2438F6014);
    BOXVAL(moduleF6016) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_2437F6019);
    x_2437F6020 = T14;
    T15 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2437F6020,x_2438F6014);
    T12 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_2437F6018);
    x_2437F6021 = T16;
    BOXVAL(bodyF6017) = x_2437F6021;
    x_2437F6022 = Ynil;
    T18 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2437F6022,x_2438F6014);
    T17 = T18;
    T10 = T17;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_2438F6014,LITREF(lit_8),x_2437F6015);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_499));
  T23 = BOXVAL(moduleF6016);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_441));
  T27 = CALL1(1,VARREF(Ylst),Ynil);
  T28 = BOXVAL(bodyF6017);
  T25 = CALLN(1,VARREF(YmacrosYcat),4,T26,T27,T28,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T20 = CALLN(1,VARREF(YmacrosYcat),4,T21,T22,T24,Ynil);
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
  T0 = CALL3(1,VARREF(YastYobjectify),FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYobjectify_with_subtransaction) {
  P e_,r_,tailQ_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YastYenvironment_module),r_);
  T2 = FUNFAB(fun_404,3,e_,r_,tailQ_);
  T0 = CALL2(1,VARREF(YastYcall_with_subtransaction),T1,T2);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYmodule_loader_modules));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYmodule_loader_modules));
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
  T0 = CALL2(1,VARREF(YprotoScollectionsScollectionYfab),VARREF(YprotoScollectionsScollectionYLtabG),YPint((P)1000));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYmodule_loader_stack));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYmodule_loader_stack));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYmodule_name));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYmodule_name));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYmodule_target_environment));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYmodule_target_environment));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYmodule_syntax_environment));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYmodule_syntax_environment));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYPmodule_exports));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYPmodule_exports));
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
  T0 = CALL2(1,VARREF(YprotoScollectionsScollectionYfab),VARREF(YprotoScollectionsScollectionYLtabG),YPint((P)1000));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYmodule_data_processedQ));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYmodule_data_processedQ));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYmodule_runtime_data));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYmodule_runtime_data));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYmodule_transaction));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYmodule_transaction));
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
  T0 = CALL1(1,VARREF(Ynew),VARREF(YastYLtransactionG));
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
  CALL1(1,VARREF(YastYensure_module_data),x_);
  T0 = CALL1(1,VARREF(YastYPmodule_exports),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YastYset_module_environments) {
  P mod_,syntax_env_,target_env_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(mod_, 0);
  ARG(syntax_env_, 1);
  ARG(target_env_, 2);
loop:
  CALL2(1,VARREF(YastYmodule_syntax_environment_setter),syntax_env_,mod_);
  T0 = CALL2(1,VARREF(YastYmodule_target_environment_setter),target_env_,mod_);
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

FUNCODEDEF(YastYdo_module_loader_modules) {
  P f_,loader_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(loader_, 1);
loop:
  T1 = FUNFAB(fun_432,1,f_);
  T2 = CALL1(1,VARREF(YastYmodule_loader_modules),loader_);
  T0 = CALL2(1,VARREF(YmacrosYdo),T1,T2);
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
  RET(VARREF(YastYLmoduleG));
}

FUNCODEDEF(YastYregister_moduleX) {
  P module_loader_,mod_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(module_loader_, 0);
  ARG(mod_, 1);
loop:
  T0 = CALL1(1,VARREF(YastYmodule_loader_modules),module_loader_);
  T1 = CALL1(1,VARREF(YastYmodule_name),mod_);
  CALL3(1,VARREF(YprotoScollectionsScollectionYelt_setter),mod_,T0,T1);
UNLINK_STACK();
  RET(module_loader_);
}

FUNCODEDEF(YastYprobe_module) {
  P loader_,name_;
  P tmpF6023;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T2 = CALL1(1,VARREF(YastYmodule_loader_modules),loader_);
  T1 = CALL3(1,VARREF(YprotoScollectionsScollectionYelt_or),T2,name_,YPfalse);
  tmpF6023 = T1;
  if (tmpF6023 != YPfalse) {
    T3 = tmpF6023;
  } else {
    T4 = CALL2(1,VARREF(YastYload_and_register_module),loader_,name_);
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
  T0 = CALL2(1,VARREF(YastYload_module),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_438) {
  P x_2442F6027;
  P x_2441F6026;
  P tup148F6025;
  P x_2440F6024;
  P T7,T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  x_2440F6024 = FREEREF(0);
  T3 = CALL1(1,VARREF(YastYmodule_loader_stack),x_2440F6024);
  T2 = CALL1(1,VARREF(YprotoScollectionsSlistYpop),T3);
  tup148F6025 = T2;
  T5 = CALL2(1,VARREF(YmacrosYelt),tup148F6025,YPint((P)0));
  x_2441F6026 = T5;
  T7 = CALL2(1,VARREF(YmacrosYelt),tup148F6025,YPint((P)1));
  x_2442F6027 = T7;
  CALL2(1,VARREF(YastYmodule_loader_stack_setter),x_2441F6026,x_2440F6024);
  T6 = x_2442F6027;
  T4 = T6;
  T1 = T4;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYload_and_register_module) {
  P loader_,name_;
  P modF6032;
  P x_2439F6031;
  P indentF6030;
  P depthF6029;
  P stackF6028;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYmodule_loader_stack),loader_);
  stackF6028 = T1;
  T3 = CALL1(1,VARREF(YprotoStypesYlen),stackF6028);
  depthF6029 = T3;
  T5 = CALL2(1,VARREF(YstringsYstring_repeat),LITREF(lit_537),depthF6029);
  indentF6030 = T5;
  T6 = CALL2(1,VARREF(YprotoScollectionsScollectionYmemQ),stackF6028,name_);
  if (T6 != YPfalse) {
    T8 = CALL1(1,VARREF(Yhead),stackF6028);
    T7 = CALL3(1,VARREF(Yerror),LITREF(lit_538),T8,name_);
  } else {
  }
  CALLN(1,VARREF(YruntimeYformat),4,VARREF(YprotoSportsYout),LITREF(lit_539),indentF6030,name_);
  x_2439F6031 = loader_;
  T12 = CALL1(1,VARREF(YastYmodule_loader_stack),x_2439F6031);
  T11 = CALL2(1,VARREF(YprotoScollectionsSlistYpush),T12,name_);
  T10 = CALL2(1,VARREF(YastYmodule_loader_stack_setter),T11,x_2439F6031);
  T14 = FUNFAB(fun_437,2,loader_,name_);
  T15 = FUNFAB(fun_438,1,loader_);
  T13 = with_cleanup(T14,T15);
  modF6032 = T13;
  CALL2(1,VARREF(YastYregister_moduleX),loader_,modF6032);
  CALL3(1,VARREF(YruntimeYformat),VARREF(YprotoSportsYout),LITREF(lit_540),indentF6030);
  T9 = modF6032;
  T4 = T9;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YastYexport_bindingX) {
  P module_,name_,binding_;
  P tmpF6035;
  P existingF6034;
  P exportsF6033;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(module_, 0);
  ARG(name_, 1);
  ARG(binding_, 2);
loop:
  T1 = CALL1(1,VARREF(YastYmodule_exports),module_);
  exportsF6033 = T1;
  T3 = CALL3(1,VARREF(YprotoScollectionsScollectionYelt_or),exportsF6033,name_,YPfalse);
  existingF6034 = T3;
  T6 = CALL2(1,VARREF(YmacrosYEE),existingF6034,YPfalse);
  tmpF6035 = T6;
  if (tmpF6035 != YPfalse) {
    T7 = tmpF6035;
  } else {
    T8 = CALL2(1,VARREF(YmacrosYEE),existingF6034,binding_);
    T7 = T8;
  }
  T5 = T7;
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T9 = CALLN(1,VARREF(Yerror),5,LITREF(lit_543),existingF6034,binding_,module_,name_);
  } else {
  }
  CALL3(1,VARREF(YprotoScollectionsScollectionYelt_setter),binding_,exportsF6033,name_);
  T2 = YPfalse;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YastYbinding_native_toQ) {
  P binding_,module_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(module_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYmodule_name),module_);
  T2 = CALL1(1,VARREF(YastYbinding_module_name),binding_);
  T0 = CALL2(1,VARREF(YmacrosYEE),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_442) {
  P binding_;
  P tmpF6036;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T2 = CALL1(1,VARREF(YastYbinding_freeQ),binding_);
  tmpF6036 = T2;
  if (tmpF6036 != YPfalse) {
    T4 = CALL2(1,VARREF(YastYbinding_native_toQ),binding_,FREEREF(0));
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T6 = CALL1(1,VARREF(YastYmodule_name),FREEREF(0));
    T7 = CALL1(1,VARREF(YastYbinding_name),binding_);
    T5 = CALLN(1,VARREF(YruntimeYformat),4,VARREF(YprotoSportsYout),LITREF(lit_546),T6,T7);
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYreport_undefined_global_bindings) {
  P mod_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T1 = FUNFAB(fun_442,1,mod_);
  T2 = CALL1(1,VARREF(YastYmodule_target_environment),mod_);
  T0 = CALL2(1,VARREF(YastYdo_static_global_bindings),T1,T2);
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
  T2 = CALL1(1,VARREF(YastYmodule_name),uses_mod_);
  T1 = CALL2(1,VARREF(YmacrosYEE),FREEREF(0),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YastYmodule_name),FREEREF(2));
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
  T3 = CALL1(1,VARREF(YastYmodule_target_environment),mod_);
  T2 = CALL1(1,VARREF(YastYenvironment_uses_modules),T3);
  T0 = CALL2(1,VARREF(YmacrosYdo),T1,T2);
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
  T2 = CALL3(1,VARREF(YprotoScollectionsScollectionYelt_or),FREEREF(0),modname_,YPfalse);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL3(1,VARREF(YprotoScollectionsScollectionYelt_setter),modname_,FREEREF(0),modname_);
    T4 = FUNFAB(fun_445,2,modname_,FREEREF(1));
    T3 = CALL2(1,VARREF(YastYdo_module_loader_modules),T4,FREEREF(2));
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
  T1 = CALL2(1,VARREF(YmacrosYpair),v_,T2);
  T0 = BOXVAL(FREEREF(0)) = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYcompute_transitive_users) {
  P loader_,modnames_;
  P collector_F6039;
  P add_userF6038;
  P usersF6037;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(modnames_, 1);
loop:
  T1 = CALL2(1,VARREF(YprotoScollectionsScollectionYfab),VARREF(YprotoScollectionsScollectionYLtabG),YPint((P)100));
  usersF6037 = T1;
  T3 = FUNSHELL(0,fun_add_user_446,3);
  add_userF6038 = T3;
  FUNINIT(add_userF6038, 3,usersF6037,add_userF6038,loader_);
  CALL2(1,VARREF(YmacrosYdo),add_userF6038,modnames_);
  collector_F6039 = Ynil;
  collector_F6039 = BOXFAB(collector_F6039);
  T6 = FUNFAB(fun_447,1,collector_F6039);
  CALL2(1,VARREF(YmacrosYdo),T6,usersF6037);
  T8 = BOXVAL(collector_F6039);
  T7 = CALL1(1,VARREF(YmacrosYrevX),T8);
  T4 = T7;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YastYremove_module_internalX) {
  P loader_,mod_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(mod_, 1);
loop:
  T0 = CALL1(1,VARREF(YastYmodule_transaction),mod_);
  CALL1(1,VARREF(YastYroll_back_transaction),T0);
  T2 = CALL1(1,VARREF(YastYmodule_loader_modules),loader_);
  T3 = CALL1(1,VARREF(YastYmodule_name),mod_);
  T1 = CALL2(1,VARREF(YprotoScollectionsScollectionYdel),T2,T3);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_450) {
  P modname_;
  P modF6040;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T2 = CALL1(1,VARREF(YastYmodule_loader_modules),FREEREF(0));
  T1 = CALL2(1,VARREF(YmacrosYelt),T2,modname_);
  modF6040 = T1;
  T3 = CALL2(1,VARREF(YastYremove_module_internalX),FREEREF(0),modF6040);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYremove_modules_by_nameX) {
  P loader_,modnames_;
  P remove_namesF6041;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(modnames_, 1);
loop:
  T1 = CALL2(1,VARREF(YastYcompute_transitive_users),loader_,modnames_);
  remove_namesF6041 = T1;
  T2 = FUNFAB(fun_450,1,loader_);
  CALL2(1,VARREF(YmacrosYdo),T2,remove_namesF6041);
  T0 = YPfalse;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YastYmodule_name_to_relpath) {
  P name_;
  P namestrF6042;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T2 = CALL1(1,VARREF(Ysym_name),name_);
  T1 = CALL2(1,VARREF(YstringsYmap_str),VARREF(YprotoSmathYto_lower),T2);
  namestrF6042 = T1;
  T4 = CALL2(1,VARREF(YstringsYstring_split),namestrF6042,YPchr((P)47));
  T3 = CALL2(1,VARREF(YstringsYstring_join),T4,VARREF(YprotoSsystemYTpath_separatorT));
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
  T1 = CALL2(1,VARREF(YastYfind_binding),name_,FREEREF(0));
  T0 = CALL2(1,VARREF(YastYinsert_globalX),T1,FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYinstall_initial_bindings) {
  P env_,loader_;
  P bootenvF6044;
  P bootmodF6043;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(env_, 0);
  ARG(loader_, 1);
loop:
  T1 = CALL2(1,VARREF(YastYprobe_module),loader_,VARREF(YastYDgoo_boot_module_name));
  bootmodF6043 = T1;
  T3 = CALL1(1,VARREF(YastYmodule_target_environment),bootmodF6043);
  bootenvF6044 = T3;
  T5 = FUNFAB(fun_453,2,bootenvF6044,env_);
  T4 = CALL2(1,VARREF(YmacrosYdo),T5,LITREF(lit_555));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYfab_static_global_environment) {
  P module_,module_loader_,allow_foreign_namesQ_;
  P new_envF6045;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(module_, 0);
  ARG(module_loader_, 1);
  ARG(allow_foreign_namesQ_, 2);
loop:
  T2 = CALL2(1,VARREF(YprotoScollectionsScollectionYfab),VARREF(YprotoScollectionsScollectionYLtabG),YPint((P)2000));
  T1 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLstatic_global_environmentG),VARREF(YastYenvironment_module),module_,VARREF(YastYenvironment_module_loader),module_loader_,VARREF(YastYenvironment_next),VARREF(YastYDempty_static_environment),VARREF(YastYenvironment_allows_foreign_namesQ),allow_foreign_namesQ_,VARREF(YastYenvironment_bindings),T2);
  new_envF6045 = T1;
  T0 = new_envF6045;
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
  T2 = CALL2(1,VARREF(YprotoScollectionsScollectionYmemQ),FREEREF(0),name_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL2(1,VARREF(YastYinsert_globalX),binding_,FREEREF(1));
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYfab_subset_environment) {
  P module_,src_module_,excluded_;
  P new_envF6047;
  P loaderF6046;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(module_, 0);
  ARG(src_module_, 1);
  ARG(excluded_, 2);
loop:
  T2 = CALL1(1,VARREF(YastYmodule_target_environment),src_module_);
  T1 = CALL1(1,VARREF(YastYenvironment_module_loader),T2);
  loaderF6046 = T1;
  T4 = CALL3(1,VARREF(YastYfab_static_global_environment),module_,loaderF6046,YPfalse);
  new_envF6047 = T4;
  T5 = FUNFAB(fun_456,2,excluded_,new_envF6047);
  T6 = CALL1(1,VARREF(YastYmodule_exports),src_module_);
  CALL2(1,VARREF(YprotoScollectionsScollectionYdo_keyed),T5,T6);
  T3 = new_envF6047;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_458) {
LINK_STACK();
loop:
  CALL2(1,VARREF(YastYload_in),FREEREF(0),FREEREF(1));
  CALL2(1,VARREF(YastYenvironment_allows_foreign_namesQ_setter),YPtrue,FREEREF(1));
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
    T4 = CALL1(1,VARREF(YastYmodule_transaction),FREEREF(1));
    T3 = CALL1(1,VARREF(YastYroll_back_transaction),T4);
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
  VARSET(YastYTnow_rt_envT,FREEREF(0));
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
  T0 = VARSET(YastYTnow_rt_envT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_module_462) {
  P loader_,name_;
  P x_2443F6054;
  P src_fileF6053;
  P fileF6052;
  P keepmodQF6051;
  P envF6050;
  P moduleF6049;
  P typeF6048;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYmodule_loader_module_type),loader_);
  typeF6048 = T1;
  T3 = CALL3(1,VARREF(Ynew),typeF6048,VARREF(YastYmodule_name),name_);
  moduleF6049 = T3;
  T5 = CALL3(1,VARREF(YastYfab_static_global_environment),moduleF6049,loader_,YPfalse);
  envF6050 = T5;
  keepmodQF6051 = YPfalse;
  keepmodQF6051 = BOXFAB(keepmodQF6051);
  T9 = CALL1(1,VARREF(YastYmodule_name_to_relpath),name_);
  fileF6052 = T9;
  T12 = CALL1(1,VARREF(YprotoSsystemYgoo_filename),fileF6052);
  T11 = CALL1(1,VARREF(YprotoSsystemYadd_src_path),T12);
  src_fileF6053 = T11;
  CALL3(1,VARREF(YastYset_module_environments),moduleF6049,envF6050,envF6050);
  CALL2(1,VARREF(YastYinstall_initial_bindings),envF6050,loader_);
  x_2443F6054 = VARREF(YastYTnow_rt_envT);
  T15 = FUNFAB(fun_460,4,envF6050,src_fileF6053,keepmodQF6051,moduleF6049);
  T16 = FUNFAB(fun_461,1,x_2443F6054);
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

FUNCODEDEF(YastYruntime_module_loader) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(VARREF(YastYTruntime_module_loaderT));
}

FUNCODEDEF(YastYruntime_module) {
  P modname_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = CALL0(1,VARREF(YastYruntime_module_loader));
  T0 = CALL2(1,VARREF(YastYprobe_module),T1,modname_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYruntime_environment) {
  P modname_;
  P moduleF6055;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = CALL1(1,VARREF(YastYruntime_module),modname_);
  moduleF6055 = T1;
  CALL1(1,VARREF(YastYensure_module_data),moduleF6055);
  T2 = CALL1(1,VARREF(YastYmodule_target_environment),moduleF6055);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYruntime_core_environment) {
  P modname_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = CALL1(1,VARREF(YastYruntime_module),modname_);
  T0 = CALL1(1,VARREF(YastYmodule_target_environment),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYunchecked_runtime_environment) {
  P modname_;
  P loaderF6056;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = CALL0(1,VARREF(YastYruntime_module_loader));
  loaderF6056 = T1;
  T5 = CALL1(1,VARREF(YastYmodule_loader_stack),loaderF6056);
  T4 = CALL3(1,VARREF(YprotoScollectionsScollectionYelt_or),T5,YPint((P)0),YPfalse);
  T3 = CALL2(1,VARREF(YmacrosYEE),T4,modname_);
  if (T3 != YPfalse) {
    T2 = VARREF(YastYTnow_rt_envT);
  } else {
    T7 = CALL1(1,VARREF(YastYruntime_module),modname_);
    T6 = CALL1(1,VARREF(YastYmodule_target_environment),T7);
    T2 = T6;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYreloader_do_create_module) {
  P modname_,data_;
  P envF6060;
  P modF6059;
  P typeF6058;
  P loaderF6057;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(modname_, 0);
  ARG(data_, 1);
loop:
  T1 = CALL0(1,VARREF(YastYruntime_module_loader));
  loaderF6057 = T1;
  T3 = CALL1(1,VARREF(YastYmodule_loader_module_type),loaderF6057);
  typeF6058 = T3;
  T6 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLsymG),modname_);
  T5 = CALL3(1,VARREF(Ynew),typeF6058,VARREF(YastYmodule_name),T6);
  modF6059 = T5;
  T8 = CALL3(1,VARREF(YastYfab_static_global_environment),modF6059,loaderF6057,YPtrue);
  envF6060 = T8;
  CALL2(1,VARREF(YastYmodule_data_processedQ_setter),YPfalse,modF6059);
  CALL3(1,VARREF(YastYset_module_environments),modF6059,envF6060,envF6060);
  CALL2(1,VARREF(YastYmodule_runtime_data_setter),data_,modF6059);
  CALL2(1,VARREF(YastYregister_moduleX),loaderF6057,modF6059);
  T7 = modF6059;
  T4 = T7;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YastYreloader_do_use_module) {
  P mod_,uses_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(mod_, 0);
  ARG(uses_, 1);
loop:
  T2 = CALL1(1,VARREF(YastYmodule_target_environment),mod_);
  T1 = CALL1(1,VARREF(YastYenvironment_uses_modules),T2);
  T0 = CALL2(1,VARREF(YprotoScollectionsSbufferYpush_lastX),T1,uses_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYreloader_do_import) {
  P mod_,name_,from_mod_,original_name_;
  P bindingF6062;
  P home_envF6061;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(from_mod_, 2);
  ARG(original_name_, 3);
loop:
  T1 = CALL1(1,VARREF(YastYmodule_target_environment),from_mod_);
  home_envF6061 = T1;
  T4 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLsymG),original_name_);
  T3 = CALL2(1,VARREF(YastYfind_binding),T4,home_envF6061);
  bindingF6062 = T3;
  T5 = CALL1(1,VARREF(Ynot),bindingF6062);
  if (T5 != YPfalse) {
    T7 = CALL1(1,VARREF(YastYmodule_name),from_mod_);
    T8 = CALL1(1,VARREF(YastYmodule_name),mod_);
    T6 = CALLN(1,VARREF(Yerror),4,LITREF(lit_574),original_name_,T7,T8);
  } else {
  }
  T10 = CALL1(1,VARREF(YastYmodule_target_environment),mod_);
  T9 = CALL2(1,VARREF(YastYinsert_globalX),bindingF6062,T10);
  T2 = T9;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYprocess_module_data) {
  P module_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(module_, 0);
loop:
  T1 = CALL1(1,VARREF(YastYmodule_runtime_data),module_);
  T0 = (P)YPprocess_module(T1,VARREF(YastYreloader_do_import),VARREF(YastYreloader_do_export));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYensure_module_data) {
  P module_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(module_, 0);
loop:
  T2 = CALL1(1,VARREF(YastYmodule_data_processedQ),module_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YastYmodule_data_processedQ_setter),YPtrue,module_);
    T3 = CALL1(1,VARREF(YastYprocess_module_data),module_);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYreloader_do_runtime_binding) {
  P mod_,name_,loc_;
  P bindingF6063;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(loc_, 2);
loop:
  T2 = CALL1(1,VARREF(YastYmodule_name),mod_);
  T3 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLsymG),name_);
  T1 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_1),VARREF(YastYbinding_module_name),T2,VARREF(YastYbinding_name),T3,VARREF(YastYbinding_freeQ),YPfalse,VARREF(YastYbinding_locative),loc_);
  bindingF6063 = T1;
  T5 = CALL1(1,VARREF(YastYmodule_target_environment),mod_);
  T4 = CALL2(1,VARREF(YastYinsert_globalX),bindingF6063,T5);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYreloader_do_other_binding) {
  P mod_,name_;
  P bindingF6064;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
loop:
  T2 = CALL1(1,VARREF(YastYmodule_name),mod_);
  T3 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLsymG),name_);
  T1 = CALLN(1,VARREF(Ynew),9,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_343),VARREF(YastYbinding_module_name),T2,VARREF(YastYbinding_name),T3,VARREF(YastYbinding_freeQ),YPtrue);
  bindingF6064 = T1;
  T5 = CALL1(1,VARREF(YastYmodule_target_environment),mod_);
  T4 = CALL2(1,VARREF(YastYinsert_globalX),bindingF6064,T5);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYreloader_do_export) {
  P mod_,name_,as_name_;
  P bindingF6065;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(as_name_, 2);
loop:
  T2 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLsymG),name_);
  T3 = CALL1(1,VARREF(YastYmodule_target_environment),mod_);
  T1 = CALL2(1,VARREF(YastYfind_binding),T2,T3);
  bindingF6065 = T1;
  if (bindingF6065 != YPfalse) {
    T6 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLsymG),as_name_);
    T5 = CALL3(1,VARREF(YastYexport_bindingX),mod_,T6,bindingF6065);
    T4 = T5;
  } else {
    T8 = CALL1(1,VARREF(YastYmodule_name),mod_);
    T7 = CALL3(1,VARREF(Yerror),LITREF(lit_581),name_,T8);
    T4 = T7;
  }
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYreload_modules) {
  P T0;
LINK_STACK();
loop:
  T0 = (P)YPbuild_runtime_modules(VARREF(YastYreloader_do_create_module),VARREF(YastYreloader_do_use_module),VARREF(YastYreloader_do_runtime_binding),VARREF(YastYreloader_do_other_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_477) {
  P binding_;
  P cloneF6066;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T2 = CALL1(1,VARREF(YastYbinding_name),binding_);
  T1 = CALLN(1,VARREF(YastYast_define_binding),4,FREEREF(0),T2,YPfalse,LITREF(lit_284));
  cloneF6066 = T1;
  T4 = CALL1(1,VARREF(YastYbinding_handler),binding_);
  T3 = CALL2(1,VARREF(YastYbinding_handler_setter),T4,cloneF6066);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYinstall_magic_bindings) {
  P env_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  T1 = FUNFAB(fun_477,1,env_);
  T2 = CALL0(1,VARREF(YastYmagic_bindings));
  T0 = CALL2(1,VARREF(YmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYreload_macros) {
  P T1,T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YruntimeYrcurry),VARREF(YPPmacro),YPfalse);
  CALLN(1,VARREF(YprotoScollectionsScollectionYdo3),4,T0,VARREF(YTboot_macro_module_namesT),VARREF(YTboot_macro_namesT),VARREF(YTboot_macro_expandersT));
  T1 = VARSET(YTmacros_okQT,YPtrue);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(YastYinstall_interpreter_hacks) {
  P env_;
  P T0;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  T0 = CALL1(1,VARREF(YastYinit_environment_for_eval),env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYinit_runtime) {
  P bootenvF6068;
  P bootmodF6067;
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  CALL0(1,VARREF(YastYreload_modules));
  T2 = CALL0(1,VARREF(YastYruntime_module_loader));
  T1 = CALL2(1,VARREF(YastYprobe_module),T2,VARREF(YastYDgoo_boot_module_name));
  bootmodF6067 = T1;
  T4 = CALL1(1,VARREF(YastYmodule_target_environment),bootmodF6067);
  bootenvF6068 = T4;
  CALL1(1,VARREF(YastYinstall_magic_bindings),bootenvF6068);
  CALL0(1,VARREF(YastYreload_macros));
  CALL1(1,VARREF(YastYinstall_interpreter_hacks),bootenvF6068);
  T3 = YPfalse;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYfab_syntax_environment) {
  P module_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(module_, 0);
loop:
  T1 = CALL1(1,VARREF(YastYruntime_module),LITREF(lit_589));
  T0 = CALL3(1,VARREF(YastYfab_subset_environment),module_,T1,VARREF(YastYsyntax_environment_excluded_bindings));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YastYfab_g2c_module) {
  P loader_,name_;
  P target_envF6072;
  P syntax_envF6071;
  P moduleF6070;
  P typeF6069;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYmodule_loader_module_type),loader_);
  typeF6069 = T1;
  T3 = CALL3(1,VARREF(Ynew),typeF6069,VARREF(YastYmodule_name),name_);
  moduleF6070 = T3;
  T5 = CALL1(1,VARREF(YastYfab_syntax_environment),moduleF6070);
  syntax_envF6071 = T5;
  T7 = CALL3(1,VARREF(YastYfab_static_global_environment),moduleF6070,loader_,YPfalse);
  target_envF6072 = T7;
  CALL3(1,VARREF(YastYset_module_environments),moduleF6070,syntax_envF6071,target_envF6072);
  T8 = CALL2(1,VARREF(YmacrosYEE),name_,VARREF(YastYDgoo_boot_module_name));
  if (T8 != YPfalse) {
    T9 = CALL1(1,VARREF(YastYinit_g2c_boot_environment),target_envF6072);
  } else {
    T10 = CALL2(1,VARREF(YastYinit_g2c_regular_environment),target_envF6072,loader_);
  }
  T6 = moduleF6070;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YastYinit_g2c_boot_environment) {
  P env_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  T1 = CALL0(1,VARREF(YastYmagic_bindings));
  T0 = CALL2(1,VARREF(YastYinsert_globalsX),T1,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYinit_g2c_regular_environment) {
  P env_,loader_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(env_, 0);
  ARG(loader_, 1);
loop:
  T0 = CALL2(1,VARREF(YastYinstall_initial_bindings),env_,loader_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYinit_ast) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL0(1,VARREF(YastYinit_runtime));
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
  T2 = CALL2(1,VARREF(YisaQ),env_,VARREF(YastYLstatic_empty_environmentG));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YastYframe_bindings),env_);
    CALL2(1,VARREF(YmacrosYdo),FREEREF(0),T3);
    T5 = CALL1(1,VARREF(YastYenvironment_next),env_);
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

FUNCODEDEF(YastYdo_static_global_bindings) {
  P f_,env_;
  P loopF6073;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_487,2);
  loopF6073 = T1;
  FUNINIT(loopF6073, 2,f_,loopF6073);
  T2 = CALL1(0,loopF6073,env_);
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
  T2 = CALL2(1,VARREF(YisaQ),env_,VARREF(YastYLstatic_empty_environmentG));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YastYframe_bindings),env_);
    CALL2(1,VARREF(YprotoScollectionsScollectionYdo_keyed),FREEREF(0),T3);
    T5 = CALL1(1,VARREF(YastYenvironment_next),env_);
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

FUNCODEDEF(YastYdo_named_static_global_bindings) {
  P f_,env_;
  P loopF6074;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_489,2);
  loopF6074 = T1;
  FUNINIT(loopF6074, 2,f_,loopF6074);
  T2 = CALL1(0,loopF6074,env_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YastY___main_0___() {
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
  lit_0 = YPPsym((P)"boot");
  VARSET(YastYDgoo_boot_module_name,LITREF(lit_0));
  lit_1 = YPPsym((P)"runtime");
  VARSET(YastYDgoo_runtime_module_name,LITREF(lit_1));
  VARSET(YastYTcurrent_dependentT,YPfalse);
  lit_2 = YPPsym((P)"exp");
  lit_3 = YPPsym((P)"return");
  lit_4 = YPPsym((P)"x-2413");
  lit_5 = YPPsym((P)"msg");
  lit_6 = YPPsym((P)"args");
  lit_7 = YPPsym((P)"with-dependent");
  lit_8 = YPsb((P)"Match Pattern Failure");
  lit_9 = YPPsym((P)"let");
  lit_10 = YPPsym((P)"*current-dependent*");
  lit_11 = YPPsym((P)"set");
  lit_12 = YPPsym((P)"fin");
  lit_13 = YPPsym((P)"seq");
  T2 = YPsig(YPPlist(2,LITREF(lit_5),LITREF(lit_6)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2413_0 = YPmet(FUNCODEREF(fun_x_2413_0),LITREF(lit_4),T2,ENVNUL,PNUL,YPfalse);
  T1 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1 = YPmet(FUNCODEREF(fun_1),YPfalse,T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T3 = fun_2;
  YPmacro(YPPsym((P)"ast"),YPPsym((P)"with-dependent"),T3);
  lit_14 = YPPsym((P)"objectify-error");
  lit_15 = YPPsym((P)"message");
  lit_16 = YPPsym((P)"arguments");
  T4 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_16)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_objectify_error_3 = YPmet(FUNCODEREF(fun_objectify_error_3),LITREF(lit_14),T4,ENVNUL,PNUL,YPfalse);
  T7 = BOUNDP(YastYobjectify_error);
  if (T7 != YPfalse) {
    T6 = VARREF(YastYobjectify_error);
  } else {
    T6 = YPfalse;
  }
  T8 = fun_objectify_error_3;
  T5 = CALL2(1,VARREF(YPdefine_method),T6,T8);
  VARSET(YastYobjectify_error,T5);
  lit_17 = YPPsym((P)"bot");
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_17));
  VARSET(YastYast_LbotG,T9);
  lit_18 = YPPsym((P)"<program>");
  T11 = (P)YPpair(VARREF(YLanyG),Ynil);
  T10 = CALL2(1,VARREF(Yfab_class),LITREF(lit_18),T11);
  VARSET(YastYLprogramG,T10);
  lit_19 = YPPsym((P)"program-type");
  lit_20 = YPPsym((P)"_x");
  T12 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_type_4 = YPmet(FUNCODEREF(fun_program_type_4),LITREF(lit_19),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YastYprogram_type);
  if (T15 != YPfalse) {
    T14 = VARREF(YastYprogram_type);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_program_type_4;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YastYprogram_type,T13);
  lit_21 = YPPsym((P)"program-type-setter");
  lit_22 = YPPsym((P)"_z");
  T17 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_type_setter_5 = YPmet(FUNCODEREF(fun_program_type_setter_5),LITREF(lit_21),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YastYprogram_type_setter);
  if (T20 != YPfalse) {
    T19 = VARREF(YastYprogram_type_setter);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_program_type_setter_5;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YastYprogram_type_setter,T18);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLprogramG),VARREF(YastYprogram_type),VARREF(YastYprogram_type_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_23 = YPPsym((P)"program-register");
  T22 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_register_6 = YPmet(FUNCODEREF(fun_program_register_6),LITREF(lit_23),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YastYprogram_register);
  if (T25 != YPfalse) {
    T24 = VARREF(YastYprogram_register);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_program_register_6;
  T23 = CALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YastYprogram_register,T23);
  lit_24 = YPPsym((P)"program-register-setter");
  T27 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_register_setter_7 = YPmet(FUNCODEREF(fun_program_register_setter_7),LITREF(lit_24),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YastYprogram_register_setter);
  if (T30 != YPfalse) {
    T29 = VARREF(YastYprogram_register_setter);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_program_register_setter_7;
  T28 = CALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YastYprogram_register_setter,T28);
  lit_25 = YPPsym((P)"x");
  T32 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T32,ENVNUL,PNUL,YPfalse);
  T33 = fun_8;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLprogramG),VARREF(YastYprogram_register),VARREF(YastYprogram_register_setter),VARREF(YLanyG),T33);
  lit_26 = YPPsym((P)"<computed-program>");
  T35 = (P)YPpair(VARREF(YastYLprogramG),Ynil);
  T34 = CALL2(1,VARREF(Yfab_class),LITREF(lit_26),T35);
  VARSET(YastYLcomputed_programG,T34);
  T36 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLcomputed_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_register_9 = YPmet(FUNCODEREF(fun_program_register_9),LITREF(lit_23),T36,ENVNUL,PNUL,YPfalse);
  T39 = BOUNDP(YastYprogram_register);
  if (T39 != YPfalse) {
    T38 = VARREF(YastYprogram_register);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_program_register_9;
  T37 = CALL2(1,VARREF(YPdefine_method),T38,T40);
  VARSET(YastYprogram_register,T37);
  T41 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLcomputed_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_register_setter_10 = YPmet(FUNCODEREF(fun_program_register_setter_10),LITREF(lit_24),T41,ENVNUL,PNUL,YPfalse);
  T44 = BOUNDP(YastYprogram_register_setter);
  if (T44 != YPfalse) {
    T43 = VARREF(YastYprogram_register_setter);
  } else {
    T43 = YPfalse;
  }
  T45 = fun_program_register_setter_10;
  T42 = CALL2(1,VARREF(YPdefine_method),T43,T45);
  VARSET(YastYprogram_register_setter,T42);
  T46 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T46,ENVNUL,PNUL,YPfalse);
  T47 = fun_11;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLcomputed_programG),VARREF(YastYprogram_register),VARREF(YastYprogram_register_setter),VARREF(YLanyG),T47);
  lit_27 = YPPsym((P)"<passive-program>");
  T49 = (P)YPpair(VARREF(YastYLprogramG),Ynil);
  T48 = CALL2(1,VARREF(Yfab_class),LITREF(lit_27),T49);
  VARSET(YastYLpassive_programG,T48);
  VARSET(YastYLbinding_nameG,VARREF(YLanyG));
  lit_28 = YPPsym((P)"<binding>");
  T51 = (P)YPpair(VARREF(YLanyG),Ynil);
  T50 = CALL2(1,VARREF(Yfab_class),LITREF(lit_28),T51);
  VARSET(YastYLbindingG,T50);
  lit_29 = YPPsym((P)"binding-name");
  T52 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_name_12 = YPmet(FUNCODEREF(fun_binding_name_12),LITREF(lit_29),T52,ENVNUL,PNUL,YPfalse);
  T55 = BOUNDP(YastYbinding_name);
  if (T55 != YPfalse) {
    T54 = VARREF(YastYbinding_name);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_binding_name_12;
  T53 = CALL2(1,VARREF(YPdefine_method),T54,T56);
  VARSET(YastYbinding_name,T53);
  lit_30 = YPPsym((P)"binding-name-setter");
  T57 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YastYLbinding_nameG),VARREF(YastYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_name_setter_13 = YPmet(FUNCODEREF(fun_binding_name_setter_13),LITREF(lit_30),T57,ENVNUL,PNUL,YPfalse);
  T60 = BOUNDP(YastYbinding_name_setter);
  if (T60 != YPfalse) {
    T59 = VARREF(YastYbinding_name_setter);
  } else {
    T59 = YPfalse;
  }
  T61 = fun_binding_name_setter_13;
  T58 = CALL2(1,VARREF(YPdefine_method),T59,T61);
  VARSET(YastYbinding_name_setter,T58);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLbindingG),VARREF(YastYbinding_name),VARREF(YastYbinding_name_setter),VARREF(YastYLbinding_nameG),VARREF(YPprop_unbound_error));
  lit_31 = YPPsym((P)"binding-type");
  T62 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_type_14 = YPmet(FUNCODEREF(fun_binding_type_14),LITREF(lit_31),T62,ENVNUL,PNUL,YPfalse);
  T65 = BOUNDP(YastYbinding_type);
  if (T65 != YPfalse) {
    T64 = VARREF(YastYbinding_type);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_binding_type_14;
  T63 = CALL2(1,VARREF(YPdefine_method),T64,T66);
  VARSET(YastYbinding_type,T63);
  lit_32 = YPPsym((P)"binding-type-setter");
  T67 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YastYLprogramG),VARREF(YastYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_type_setter_15 = YPmet(FUNCODEREF(fun_binding_type_setter_15),LITREF(lit_32),T67,ENVNUL,PNUL,YPfalse);
  T70 = BOUNDP(YastYbinding_type_setter);
  if (T70 != YPfalse) {
    T69 = VARREF(YastYbinding_type_setter);
  } else {
    T69 = YPfalse;
  }
  T71 = fun_binding_type_setter_15;
  T68 = CALL2(1,VARREF(YPdefine_method),T69,T71);
  VARSET(YastYbinding_type_setter,T68);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLbindingG),VARREF(YastYbinding_type),VARREF(YastYbinding_type_setter),VARREF(YastYLprogramG),VARREF(YPprop_unbound_error));
  lit_33 = YPPsym((P)"binding-inferred-type");
  T72 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_inferred_type_16 = YPmet(FUNCODEREF(fun_binding_inferred_type_16),LITREF(lit_33),T72,ENVNUL,PNUL,YPfalse);
  T75 = BOUNDP(YastYbinding_inferred_type);
  if (T75 != YPfalse) {
    T74 = VARREF(YastYbinding_inferred_type);
  } else {
    T74 = YPfalse;
  }
  T76 = fun_binding_inferred_type_16;
  T73 = CALL2(1,VARREF(YPdefine_method),T74,T76);
  VARSET(YastYbinding_inferred_type,T73);
  lit_34 = YPPsym((P)"binding-inferred-type-setter");
  T77 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_inferred_type_setter_17 = YPmet(FUNCODEREF(fun_binding_inferred_type_setter_17),LITREF(lit_34),T77,ENVNUL,PNUL,YPfalse);
  T80 = BOUNDP(YastYbinding_inferred_type_setter);
  if (T80 != YPfalse) {
    T79 = VARREF(YastYbinding_inferred_type_setter);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_binding_inferred_type_setter_17;
  T78 = CALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(YastYbinding_inferred_type_setter,T78);
  T82 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T82,ENVNUL,PNUL,YPfalse);
  T83 = fun_18;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLbindingG),VARREF(YastYbinding_inferred_type),VARREF(YastYbinding_inferred_type_setter),VARREF(YLanyG),T83);
  lit_35 = YPPsym((P)"<global-box>");
  T85 = (P)YPpair(VARREF(YLanyG),Ynil);
  T84 = CALL2(1,VARREF(Yfab_class),LITREF(lit_35),T85);
  VARSET(YastYLglobal_boxG,T84);
  lit_36 = YPPsym((P)"global-box-value");
  T86 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLglobal_boxG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_global_box_value_19 = YPmet(FUNCODEREF(fun_global_box_value_19),LITREF(lit_36),T86,ENVNUL,PNUL,YPfalse);
  T89 = BOUNDP(YastYglobal_box_value);
  if (T89 != YPfalse) {
    T88 = VARREF(YastYglobal_box_value);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_global_box_value_19;
  T87 = CALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(YastYglobal_box_value,T87);
  lit_37 = YPPsym((P)"global-box-value-setter");
  T91 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLglobal_boxG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_global_box_value_setter_20 = YPmet(FUNCODEREF(fun_global_box_value_setter_20),LITREF(lit_37),T91,ENVNUL,PNUL,YPfalse);
  T94 = BOUNDP(YastYglobal_box_value_setter);
  if (T94 != YPfalse) {
    T93 = VARREF(YastYglobal_box_value_setter);
  } else {
    T93 = YPfalse;
  }
  T95 = fun_global_box_value_setter_20;
  T92 = CALL2(1,VARREF(YPdefine_method),T93,T95);
  VARSET(YastYglobal_box_value_setter,T92);
  T96 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T96,ENVNUL,PNUL,YPfalse);
  T97 = fun_21;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLglobal_boxG),VARREF(YastYglobal_box_value),VARREF(YastYglobal_box_value_setter),VARREF(YLanyG),T97);
  lit_38 = YPPsym((P)"<module-binding>");
  T100 = (P)YPpair(VARREF(YdependencyYLdependableG),Ynil);
  T99 = (P)YPpair(VARREF(YastYLbindingG),T100);
  T98 = CALL2(1,VARREF(Yfab_class),LITREF(lit_38),T99);
  VARSET(YastYLmodule_bindingG,T98);
  lit_39 = YPPsym((P)"binding-kind");
  T101 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_kind_22 = YPmet(FUNCODEREF(fun_binding_kind_22),LITREF(lit_39),T101,ENVNUL,PNUL,YPfalse);
  T104 = BOUNDP(YastYbinding_kind);
  if (T104 != YPfalse) {
    T103 = VARREF(YastYbinding_kind);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_binding_kind_22;
  T102 = CALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(YastYbinding_kind,T102);
  lit_40 = YPPsym((P)"binding-kind-setter");
  T106 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_kind_setter_23 = YPmet(FUNCODEREF(fun_binding_kind_setter_23),LITREF(lit_40),T106,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(YastYbinding_kind_setter);
  if (T109 != YPfalse) {
    T108 = VARREF(YastYbinding_kind_setter);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_binding_kind_setter_23;
  T107 = CALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YastYbinding_kind_setter,T107);
  lit_41 = YPPsym((P)"global");
  T111 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T111,ENVNUL,PNUL,YPfalse);
  T112 = fun_24;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),VARREF(YastYbinding_kind_setter),VARREF(YLanyG),T112);
  lit_42 = YPPsym((P)"binding-module-name");
  T113 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_module_name_25 = YPmet(FUNCODEREF(fun_binding_module_name_25),LITREF(lit_42),T113,ENVNUL,PNUL,YPfalse);
  T116 = BOUNDP(YastYbinding_module_name);
  if (T116 != YPfalse) {
    T115 = VARREF(YastYbinding_module_name);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_binding_module_name_25;
  T114 = CALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(YastYbinding_module_name,T114);
  lit_43 = YPPsym((P)"binding-module-name-setter");
  T118 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLsymG),VARREF(YastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_module_name_setter_26 = YPmet(FUNCODEREF(fun_binding_module_name_setter_26),LITREF(lit_43),T118,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(YastYbinding_module_name_setter);
  if (T121 != YPfalse) {
    T120 = VARREF(YastYbinding_module_name_setter);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_binding_module_name_setter_26;
  T119 = CALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(YastYbinding_module_name_setter,T119);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_module_name),VARREF(YastYbinding_module_name_setter),VARREF(YLsymG),VARREF(YPprop_unbound_error));
  lit_44 = YPPsym((P)"binding-free?");
  T123 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_freeQ_27 = YPmet(FUNCODEREF(fun_binding_freeQ_27),LITREF(lit_44),T123,ENVNUL,PNUL,YPfalse);
  T126 = BOUNDP(YastYbinding_freeQ);
  if (T126 != YPfalse) {
    T125 = VARREF(YastYbinding_freeQ);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_binding_freeQ_27;
  T124 = CALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(YastYbinding_freeQ,T124);
  lit_45 = YPPsym((P)"binding-free?-setter");
  T128 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLlogG),VARREF(YastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_freeQ_setter_28 = YPmet(FUNCODEREF(fun_binding_freeQ_setter_28),LITREF(lit_45),T128,ENVNUL,PNUL,YPfalse);
  T131 = BOUNDP(YastYbinding_freeQ_setter);
  if (T131 != YPfalse) {
    T130 = VARREF(YastYbinding_freeQ_setter);
  } else {
    T130 = YPfalse;
  }
  T132 = fun_binding_freeQ_setter_28;
  T129 = CALL2(1,VARREF(YPdefine_method),T130,T132);
  VARSET(YastYbinding_freeQ_setter,T129);
  T133 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T133,ENVNUL,PNUL,YPfalse);
  T134 = fun_29;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_freeQ),VARREF(YastYbinding_freeQ_setter),VARREF(YLlogG),T134);
  lit_46 = YPPsym((P)"binding-info");
  T135 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_info_30 = YPmet(FUNCODEREF(fun_binding_info_30),LITREF(lit_46),T135,ENVNUL,PNUL,YPfalse);
  T138 = BOUNDP(YastYbinding_info);
  if (T138 != YPfalse) {
    T137 = VARREF(YastYbinding_info);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_binding_info_30;
  T136 = CALL2(1,VARREF(YPdefine_method),T137,T139);
  VARSET(YastYbinding_info,T136);
  lit_47 = YPPsym((P)"binding-info-setter");
  T140 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_info_setter_31 = YPmet(FUNCODEREF(fun_binding_info_setter_31),LITREF(lit_47),T140,ENVNUL,PNUL,YPfalse);
  T143 = BOUNDP(YastYbinding_info_setter);
  if (T143 != YPfalse) {
    T142 = VARREF(YastYbinding_info_setter);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_binding_info_setter_31;
  T141 = CALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(YastYbinding_info_setter,T141);
  T145 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T145,ENVNUL,PNUL,YPfalse);
  T146 = fun_32;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_info),VARREF(YastYbinding_info_setter),VARREF(YLanyG),T146);
  VARSET(YastYbinding_global_box,VARREF(YastYbinding_info));
  VARSET(YastYbinding_global_box_setter,VARREF(YastYbinding_info_setter));
  VARSET(YastYbinding_locative,VARREF(YastYbinding_info));
  VARSET(YastYbinding_locative_setter,VARREF(YastYbinding_info_setter));
  T148 = VARSET(YastYbinding_handler,VARREF(YastYbinding_info));
  T147 = T148;
  return T147;
}

P YastY___main_1___() {
  P T195,T194,T193,T192,T191,T190,T189,T188,T187,T186,T185,T184,T183,T182,T181,T180;
  P T179,T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168,T167,T166,T165,T164;
  P T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152,T151,T150,T149,T148;
  P T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134,T133,T132;
  P T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116;
  P T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100;
  P T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84;
  P T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68;
  P T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52;
  P T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36;
  P T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
loop:
  VARSET(YastYbinding_handler_setter,VARREF(YastYbinding_info_setter));
  lit_48 = YPPsym((P)"maybe-log-dependency");
  lit_49 = YPPsym((P)"dependable");
  lit_50 = YPPsym((P)"dtype");
  T0 = YPsig(YPPlist(2,LITREF(lit_49),LITREF(lit_50)),YPPlist(2,VARREF(YdependencyYLdependableG),VARREF(YdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YastYmaybe_log_dependency = YPmet(FUNCODEREF(YastYmaybe_log_dependency),LITREF(lit_48),T0,ENVNUL,PNUL,YPfalse);
  T1 = YastYmaybe_log_dependency;
  VARSET(YastYmaybe_log_dependency,T1);
  lit_51 = YPPsym((P)"macro-expander");
  lit_52 = YPPsym((P)"macro-binding");
  T2 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  YastYmacro_expander = YPmet(FUNCODEREF(YastYmacro_expander),LITREF(lit_51),T2,ENVNUL,PNUL,YPfalse);
  T3 = YastYmacro_expander;
  VARSET(YastYmacro_expander,T3);
  lit_53 = YPPsym((P)"<local-binding>");
  T5 = (P)YPpair(VARREF(YastYLbindingG),Ynil);
  T4 = CALL2(1,VARREF(Yfab_class),LITREF(lit_53),T5);
  VARSET(YastYLlocal_bindingG,T4);
  lit_54 = YPPsym((P)"binding-value");
  T6 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_value_35 = YPmet(FUNCODEREF(fun_binding_value_35),LITREF(lit_54),T6,ENVNUL,PNUL,YPfalse);
  T9 = BOUNDP(YastYbinding_value);
  if (T9 != YPfalse) {
    T8 = VARREF(YastYbinding_value);
  } else {
    T8 = YPfalse;
  }
  T10 = fun_binding_value_35;
  T7 = CALL2(1,VARREF(YPdefine_method),T8,T10);
  VARSET(YastYbinding_value,T7);
  lit_55 = YPPsym((P)"binding-value-setter");
  T11 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_value_setter_36 = YPmet(FUNCODEREF(fun_binding_value_setter_36),LITREF(lit_55),T11,ENVNUL,PNUL,YPfalse);
  T14 = BOUNDP(YastYbinding_value_setter);
  if (T14 != YPfalse) {
    T13 = VARREF(YastYbinding_value_setter);
  } else {
    T13 = YPfalse;
  }
  T15 = fun_binding_value_setter_36;
  T12 = CALL2(1,VARREF(YPdefine_method),T13,T15);
  VARSET(YastYbinding_value_setter,T12);
  T16 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T16,ENVNUL,PNUL,YPfalse);
  T17 = fun_37;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLlocal_bindingG),VARREF(YastYbinding_value),VARREF(YastYbinding_value_setter),VARREF(YLanyG),T17);
  lit_56 = YPPsym((P)"binding-mutable?");
  T18 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_mutableQ_38 = YPmet(FUNCODEREF(fun_binding_mutableQ_38),LITREF(lit_56),T18,ENVNUL,PNUL,YPfalse);
  T21 = BOUNDP(YastYbinding_mutableQ);
  if (T21 != YPfalse) {
    T20 = VARREF(YastYbinding_mutableQ);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_binding_mutableQ_38;
  T19 = CALL2(1,VARREF(YPdefine_method),T20,T22);
  VARSET(YastYbinding_mutableQ,T19);
  lit_57 = YPPsym((P)"binding-mutable?-setter");
  T23 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_mutableQ_setter_39 = YPmet(FUNCODEREF(fun_binding_mutableQ_setter_39),LITREF(lit_57),T23,ENVNUL,PNUL,YPfalse);
  T26 = BOUNDP(YastYbinding_mutableQ_setter);
  if (T26 != YPfalse) {
    T25 = VARREF(YastYbinding_mutableQ_setter);
  } else {
    T25 = YPfalse;
  }
  T27 = fun_binding_mutableQ_setter_39;
  T24 = CALL2(1,VARREF(YPdefine_method),T25,T27);
  VARSET(YastYbinding_mutableQ_setter,T24);
  T28 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T28,ENVNUL,PNUL,YPfalse);
  T29 = fun_40;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLlocal_bindingG),VARREF(YastYbinding_mutableQ),VARREF(YastYbinding_mutableQ_setter),VARREF(YLanyG),T29);
  lit_58 = YPPsym((P)"binding-dynamic-extent?");
  T30 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_dynamic_extentQ_41 = YPmet(FUNCODEREF(fun_binding_dynamic_extentQ_41),LITREF(lit_58),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YastYbinding_dynamic_extentQ);
  if (T33 != YPfalse) {
    T32 = VARREF(YastYbinding_dynamic_extentQ);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_binding_dynamic_extentQ_41;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YastYbinding_dynamic_extentQ,T31);
  lit_59 = YPPsym((P)"binding-dynamic-extent?-setter");
  T35 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_dynamic_extentQ_setter_42 = YPmet(FUNCODEREF(fun_binding_dynamic_extentQ_setter_42),LITREF(lit_59),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YastYbinding_dynamic_extentQ_setter);
  if (T38 != YPfalse) {
    T37 = VARREF(YastYbinding_dynamic_extentQ_setter);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_binding_dynamic_extentQ_setter_42;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YastYbinding_dynamic_extentQ_setter,T36);
  T40 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T40,ENVNUL,PNUL,YPfalse);
  T41 = fun_43;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLlocal_bindingG),VARREF(YastYbinding_dynamic_extentQ),VARREF(YastYbinding_dynamic_extentQ_setter),VARREF(YLanyG),T41);
  lit_60 = YPPsym((P)"binding-dotted?");
  T42 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_dottedQ_44 = YPmet(FUNCODEREF(fun_binding_dottedQ_44),LITREF(lit_60),T42,ENVNUL,PNUL,YPfalse);
  T45 = BOUNDP(YastYbinding_dottedQ);
  if (T45 != YPfalse) {
    T44 = VARREF(YastYbinding_dottedQ);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_binding_dottedQ_44;
  T43 = CALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(YastYbinding_dottedQ,T43);
  lit_61 = YPPsym((P)"binding-dotted?-setter");
  T47 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_dottedQ_setter_45 = YPmet(FUNCODEREF(fun_binding_dottedQ_setter_45),LITREF(lit_61),T47,ENVNUL,PNUL,YPfalse);
  T50 = BOUNDP(YastYbinding_dottedQ_setter);
  if (T50 != YPfalse) {
    T49 = VARREF(YastYbinding_dottedQ_setter);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_binding_dottedQ_setter_45;
  T48 = CALL2(1,VARREF(YPdefine_method),T49,T51);
  VARSET(YastYbinding_dottedQ_setter,T48);
  T52 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_46 = YPmet(FUNCODEREF(fun_46),YPfalse,T52,ENVNUL,PNUL,YPfalse);
  T53 = fun_46;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLlocal_bindingG),VARREF(YastYbinding_dottedQ),VARREF(YastYbinding_dottedQ_setter),VARREF(YLanyG),T53);
  lit_62 = YPPsym((P)"binding-index");
  T54 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_index_47 = YPmet(FUNCODEREF(fun_binding_index_47),LITREF(lit_62),T54,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(YastYbinding_index);
  if (T57 != YPfalse) {
    T56 = VARREF(YastYbinding_index);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_binding_index_47;
  T55 = CALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YastYbinding_index,T55);
  lit_63 = YPPsym((P)"binding-index-setter");
  T59 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_index_setter_48 = YPmet(FUNCODEREF(fun_binding_index_setter_48),LITREF(lit_63),T59,ENVNUL,PNUL,YPfalse);
  T62 = BOUNDP(YastYbinding_index_setter);
  if (T62 != YPfalse) {
    T61 = VARREF(YastYbinding_index_setter);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_binding_index_setter_48;
  T60 = CALL2(1,VARREF(YPdefine_method),T61,T63);
  VARSET(YastYbinding_index_setter,T60);
  T64 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T64,ENVNUL,PNUL,YPfalse);
  T65 = fun_49;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLlocal_bindingG),VARREF(YastYbinding_index),VARREF(YastYbinding_index_setter),VARREF(YLanyG),T65);
  lit_64 = YPPsym((P)"<compile-time>");
  T67 = (P)YPpair(VARREF(YastYLcomputed_programG),Ynil);
  T66 = CALL2(1,VARREF(Yfab_class),LITREF(lit_64),T67);
  VARSET(YastYLcompile_timeG,T66);
  lit_65 = YPPsym((P)"compile-time-program");
  T68 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLcompile_timeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_compile_time_program_50 = YPmet(FUNCODEREF(fun_compile_time_program_50),LITREF(lit_65),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(YastYcompile_time_program);
  if (T71 != YPfalse) {
    T70 = VARREF(YastYcompile_time_program);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_compile_time_program_50;
  T69 = CALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YastYcompile_time_program,T69);
  lit_66 = YPPsym((P)"compile-time-program-setter");
  T73 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLcompile_timeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compile_time_program_setter_51 = YPmet(FUNCODEREF(fun_compile_time_program_setter_51),LITREF(lit_66),T73,ENVNUL,PNUL,YPfalse);
  T76 = BOUNDP(YastYcompile_time_program_setter);
  if (T76 != YPfalse) {
    T75 = VARREF(YastYcompile_time_program_setter);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_compile_time_program_setter_51;
  T74 = CALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(YastYcompile_time_program_setter,T74);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLcompile_timeG),VARREF(YastYcompile_time_program),VARREF(YastYcompile_time_program_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_67 = YPPsym((P)"<reference>");
  T79 = (P)YPpair(VARREF(YastYLpassive_programG),Ynil);
  T78 = CALL2(1,VARREF(Yfab_class),LITREF(lit_67),T79);
  VARSET(YastYLreferenceG,T78);
  lit_68 = YPPsym((P)"<real-reference>");
  T81 = (P)YPpair(VARREF(YastYLreferenceG),Ynil);
  T80 = CALL2(1,VARREF(Yfab_class),LITREF(lit_68),T81);
  VARSET(YastYLreal_referenceG,T80);
  lit_69 = YPPsym((P)"reference-binding");
  T82 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLreal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_binding_52 = YPmet(FUNCODEREF(fun_reference_binding_52),LITREF(lit_69),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(YastYreference_binding);
  if (T85 != YPfalse) {
    T84 = VARREF(YastYreference_binding);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_reference_binding_52;
  T83 = CALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YastYreference_binding,T83);
  lit_70 = YPPsym((P)"reference-binding-setter");
  T87 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLreal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_binding_setter_53 = YPmet(FUNCODEREF(fun_reference_binding_setter_53),LITREF(lit_70),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YastYreference_binding_setter);
  if (T90 != YPfalse) {
    T89 = VARREF(YastYreference_binding_setter);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_reference_binding_setter_53;
  T88 = CALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YastYreference_binding_setter,T88);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLreal_referenceG),VARREF(YastYreference_binding),VARREF(YastYreference_binding_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_71 = YPPsym((P)"<local-reference>");
  T93 = (P)YPpair(VARREF(YastYLreal_referenceG),Ynil);
  T92 = CALL2(1,VARREF(Yfab_class),LITREF(lit_71),T93);
  VARSET(YastYLlocal_referenceG,T92);
  lit_72 = YPPsym((P)"reference-called-function?");
  T94 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_called_functionQ_54 = YPmet(FUNCODEREF(fun_reference_called_functionQ_54),LITREF(lit_72),T94,ENVNUL,PNUL,YPfalse);
  T97 = BOUNDP(YastYreference_called_functionQ);
  if (T97 != YPfalse) {
    T96 = VARREF(YastYreference_called_functionQ);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_reference_called_functionQ_54;
  T95 = CALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YastYreference_called_functionQ,T95);
  lit_73 = YPPsym((P)"reference-called-function?-setter");
  T99 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_called_functionQ_setter_55 = YPmet(FUNCODEREF(fun_reference_called_functionQ_setter_55),LITREF(lit_73),T99,ENVNUL,PNUL,YPfalse);
  T102 = BOUNDP(YastYreference_called_functionQ_setter);
  if (T102 != YPfalse) {
    T101 = VARREF(YastYreference_called_functionQ_setter);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_reference_called_functionQ_setter_55;
  T100 = CALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(YastYreference_called_functionQ_setter,T100);
  T104 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_56 = YPmet(FUNCODEREF(fun_56),YPfalse,T104,ENVNUL,PNUL,YPfalse);
  T105 = fun_56;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLlocal_referenceG),VARREF(YastYreference_called_functionQ),VARREF(YastYreference_called_functionQ_setter),VARREF(YLanyG),T105);
  lit_74 = YPPsym((P)"reference-frame-number");
  T106 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_frame_number_57 = YPmet(FUNCODEREF(fun_reference_frame_number_57),LITREF(lit_74),T106,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(YastYreference_frame_number);
  if (T109 != YPfalse) {
    T108 = VARREF(YastYreference_frame_number);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_reference_frame_number_57;
  T107 = CALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YastYreference_frame_number,T107);
  lit_75 = YPPsym((P)"reference-frame-number-setter");
  T111 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLintG),VARREF(YastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_frame_number_setter_58 = YPmet(FUNCODEREF(fun_reference_frame_number_setter_58),LITREF(lit_75),T111,ENVNUL,PNUL,YPfalse);
  T114 = BOUNDP(YastYreference_frame_number_setter);
  if (T114 != YPfalse) {
    T113 = VARREF(YastYreference_frame_number_setter);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_reference_frame_number_setter_58;
  T112 = CALL2(1,VARREF(YPdefine_method),T113,T115);
  VARSET(YastYreference_frame_number_setter,T112);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLlocal_referenceG),VARREF(YastYreference_frame_number),VARREF(YastYreference_frame_number_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_76 = YPPsym((P)"reference-frame-offset");
  T116 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_frame_offset_59 = YPmet(FUNCODEREF(fun_reference_frame_offset_59),LITREF(lit_76),T116,ENVNUL,PNUL,YPfalse);
  T119 = BOUNDP(YastYreference_frame_offset);
  if (T119 != YPfalse) {
    T118 = VARREF(YastYreference_frame_offset);
  } else {
    T118 = YPfalse;
  }
  T120 = fun_reference_frame_offset_59;
  T117 = CALL2(1,VARREF(YPdefine_method),T118,T120);
  VARSET(YastYreference_frame_offset,T117);
  lit_77 = YPPsym((P)"reference-frame-offset-setter");
  T121 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLintG),VARREF(YastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_frame_offset_setter_60 = YPmet(FUNCODEREF(fun_reference_frame_offset_setter_60),LITREF(lit_77),T121,ENVNUL,PNUL,YPfalse);
  T124 = BOUNDP(YastYreference_frame_offset_setter);
  if (T124 != YPfalse) {
    T123 = VARREF(YastYreference_frame_offset_setter);
  } else {
    T123 = YPfalse;
  }
  T125 = fun_reference_frame_offset_setter_60;
  T122 = CALL2(1,VARREF(YPdefine_method),T123,T125);
  VARSET(YastYreference_frame_offset_setter,T122);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLlocal_referenceG),VARREF(YastYreference_frame_offset),VARREF(YastYreference_frame_offset_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_78 = YPPsym((P)"<module-binding-reference>");
  T127 = (P)YPpair(VARREF(YastYLreal_referenceG),Ynil);
  T126 = CALL2(1,VARREF(Yfab_class),LITREF(lit_78),T127);
  VARSET(YastYLmodule_binding_referenceG,T126);
  lit_79 = YPPsym((P)"<global-reference>");
  T129 = (P)YPpair(VARREF(YastYLmodule_binding_referenceG),Ynil);
  T128 = CALL2(1,VARREF(Yfab_class),LITREF(lit_79),T129);
  VARSET(YastYLglobal_referenceG,T128);
  lit_80 = YPPsym((P)"<runtime-reference>");
  T131 = (P)YPpair(VARREF(YastYLmodule_binding_referenceG),Ynil);
  T130 = CALL2(1,VARREF(Yfab_class),LITREF(lit_80),T131);
  VARSET(YastYLruntime_referenceG,T130);
  lit_81 = YPPsym((P)"<predefined-reference>");
  T133 = (P)YPpair(VARREF(YastYLreal_referenceG),Ynil);
  T132 = CALL2(1,VARREF(Yfab_class),LITREF(lit_81),T133);
  VARSET(YastYLpredefined_referenceG,T132);
  lit_82 = YPPsym((P)"<bound?>");
  T135 = (P)YPpair(VARREF(YastYLcomputed_programG),Ynil);
  T134 = CALL2(1,VARREF(Yfab_class),LITREF(lit_82),T135);
  VARSET(YastYLboundQG,T134);
  lit_83 = YPPsym((P)"bound?-reference");
  T136 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLboundQG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_boundQ_reference_61 = YPmet(FUNCODEREF(fun_boundQ_reference_61),LITREF(lit_83),T136,ENVNUL,PNUL,YPfalse);
  T139 = BOUNDP(YastYboundQ_reference);
  if (T139 != YPfalse) {
    T138 = VARREF(YastYboundQ_reference);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_boundQ_reference_61;
  T137 = CALL2(1,VARREF(YPdefine_method),T138,T140);
  VARSET(YastYboundQ_reference,T137);
  lit_84 = YPPsym((P)"bound?-reference-setter");
  T141 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLboundQG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_boundQ_reference_setter_62 = YPmet(FUNCODEREF(fun_boundQ_reference_setter_62),LITREF(lit_84),T141,ENVNUL,PNUL,YPfalse);
  T144 = BOUNDP(YastYboundQ_reference_setter);
  if (T144 != YPfalse) {
    T143 = VARREF(YastYboundQ_reference_setter);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_boundQ_reference_setter_62;
  T142 = CALL2(1,VARREF(YPdefine_method),T143,T145);
  VARSET(YastYboundQ_reference_setter,T142);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLboundQG),VARREF(YastYboundQ_reference),VARREF(YastYboundQ_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_85 = YPPsym((P)"<assignment>");
  T147 = (P)YPpair(VARREF(YastYLcomputed_programG),Ynil);
  T146 = CALL2(1,VARREF(Yfab_class),LITREF(lit_85),T147);
  VARSET(YastYLassignmentG,T146);
  lit_86 = YPPsym((P)"assignment-form");
  T148 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLassignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assignment_form_63 = YPmet(FUNCODEREF(fun_assignment_form_63),LITREF(lit_86),T148,ENVNUL,PNUL,YPfalse);
  T151 = BOUNDP(YastYassignment_form);
  if (T151 != YPfalse) {
    T150 = VARREF(YastYassignment_form);
  } else {
    T150 = YPfalse;
  }
  T152 = fun_assignment_form_63;
  T149 = CALL2(1,VARREF(YPdefine_method),T150,T152);
  VARSET(YastYassignment_form,T149);
  lit_87 = YPPsym((P)"assignment-form-setter");
  T153 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLassignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_form_setter_64 = YPmet(FUNCODEREF(fun_assignment_form_setter_64),LITREF(lit_87),T153,ENVNUL,PNUL,YPfalse);
  T156 = BOUNDP(YastYassignment_form_setter);
  if (T156 != YPfalse) {
    T155 = VARREF(YastYassignment_form_setter);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_assignment_form_setter_64;
  T154 = CALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(YastYassignment_form_setter,T154);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLassignmentG),VARREF(YastYassignment_form),VARREF(YastYassignment_form_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_88 = YPPsym((P)"<local-assignment>");
  T159 = (P)YPpair(VARREF(YastYLassignmentG),Ynil);
  T158 = CALL2(1,VARREF(Yfab_class),LITREF(lit_88),T159);
  VARSET(YastYLlocal_assignmentG,T158);
  lit_89 = YPPsym((P)"assignment-reference");
  T160 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLlocal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assignment_reference_65 = YPmet(FUNCODEREF(fun_assignment_reference_65),LITREF(lit_89),T160,ENVNUL,PNUL,YPfalse);
  T163 = BOUNDP(YastYassignment_reference);
  if (T163 != YPfalse) {
    T162 = VARREF(YastYassignment_reference);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_assignment_reference_65;
  T161 = CALL2(1,VARREF(YPdefine_method),T162,T164);
  VARSET(YastYassignment_reference,T161);
  lit_90 = YPPsym((P)"assignment-reference-setter");
  T165 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLlocal_assignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_reference_setter_66 = YPmet(FUNCODEREF(fun_assignment_reference_setter_66),LITREF(lit_90),T165,ENVNUL,PNUL,YPfalse);
  T168 = BOUNDP(YastYassignment_reference_setter);
  if (T168 != YPfalse) {
    T167 = VARREF(YastYassignment_reference_setter);
  } else {
    T167 = YPfalse;
  }
  T169 = fun_assignment_reference_setter_66;
  T166 = CALL2(1,VARREF(YPdefine_method),T167,T169);
  VARSET(YastYassignment_reference_setter,T166);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLlocal_assignmentG),VARREF(YastYassignment_reference),VARREF(YastYassignment_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_91 = YPPsym((P)"<global-assignment>");
  T171 = (P)YPpair(VARREF(YastYLassignmentG),Ynil);
  T170 = CALL2(1,VARREF(Yfab_class),LITREF(lit_91),T171);
  VARSET(YastYLglobal_assignmentG,T170);
  lit_92 = YPPsym((P)"assignment-binding");
  T172 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLglobal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assignment_binding_67 = YPmet(FUNCODEREF(fun_assignment_binding_67),LITREF(lit_92),T172,ENVNUL,PNUL,YPfalse);
  T175 = BOUNDP(YastYassignment_binding);
  if (T175 != YPfalse) {
    T174 = VARREF(YastYassignment_binding);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_assignment_binding_67;
  T173 = CALL2(1,VARREF(YPdefine_method),T174,T176);
  VARSET(YastYassignment_binding,T173);
  lit_93 = YPPsym((P)"assignment-binding-setter");
  T177 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLglobal_assignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_binding_setter_68 = YPmet(FUNCODEREF(fun_assignment_binding_setter_68),LITREF(lit_93),T177,ENVNUL,PNUL,YPfalse);
  T180 = BOUNDP(YastYassignment_binding_setter);
  if (T180 != YPfalse) {
    T179 = VARREF(YastYassignment_binding_setter);
  } else {
    T179 = YPfalse;
  }
  T181 = fun_assignment_binding_setter_68;
  T178 = CALL2(1,VARREF(YPdefine_method),T179,T181);
  VARSET(YastYassignment_binding_setter,T178);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLglobal_assignmentG),VARREF(YastYassignment_binding),VARREF(YastYassignment_binding_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_94 = YPPsym((P)"<runtime-assignment>");
  T183 = (P)YPpair(VARREF(YastYLglobal_assignmentG),Ynil);
  T182 = CALL2(1,VARREF(Yfab_class),LITREF(lit_94),T183);
  VARSET(YastYLruntime_assignmentG,T182);
  lit_95 = YPPsym((P)"<definition>");
  T185 = (P)YPpair(VARREF(YastYLglobal_assignmentG),Ynil);
  T184 = CALL2(1,VARREF(Yfab_class),LITREF(lit_95),T185);
  VARSET(YastYLdefinitionG,T184);
  lit_96 = YPPsym((P)"<variable-definition>");
  T187 = (P)YPpair(VARREF(YastYLdefinitionG),Ynil);
  T186 = CALL2(1,VARREF(Yfab_class),LITREF(lit_96),T187);
  VARSET(YastYLvariable_definitionG,T186);
  lit_97 = YPPsym((P)"<ast-generic-definition>");
  T189 = (P)YPpair(VARREF(YastYLdefinitionG),Ynil);
  T188 = CALL2(1,VARREF(Yfab_class),LITREF(lit_97),T189);
  VARSET(YastYLast_generic_definitionG,T188);
  lit_98 = YPPsym((P)"<ast-function-definition>");
  T191 = (P)YPpair(VARREF(YastYLdefinitionG),Ynil);
  T190 = CALL2(1,VARREF(Yfab_class),LITREF(lit_98),T191);
  VARSET(YastYLast_function_definitionG,T190);
  lit_99 = YPPsym((P)"<ast-method-definition>");
  T195 = (P)YPpair(VARREF(YastYLdefinitionG),Ynil);
  T194 = CALL2(1,VARREF(Yfab_class),LITREF(lit_99),T195);
  T193 = VARSET(YastYLast_method_definitionG,T194);
  T192 = T193;
  return T192;
}

P YastY___main_2___() {
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
  lit_100 = YPPsym((P)"<ast-primitive-definition>");
  T1 = (P)YPpair(VARREF(YastYLdefinitionG),Ynil);
  T0 = CALL2(1,VARREF(Yfab_class),LITREF(lit_100),T1);
  VARSET(YastYLast_primitive_definitionG,T0);
  lit_101 = YPPsym((P)"<ast-macro-definition>");
  T3 = (P)YPpair(VARREF(YastYLdefinitionG),Ynil);
  T2 = CALL2(1,VARREF(Yfab_class),LITREF(lit_101),T3);
  VARSET(YastYLast_macro_definitionG,T2);
  lit_102 = YPPsym((P)"<ast-signature>");
  T5 = (P)YPpair(VARREF(YastYLcomputed_programG),Ynil);
  T4 = CALL2(1,VARREF(Yfab_class),LITREF(lit_102),T5);
  VARSET(YastYLast_signatureG,T4);
  lit_103 = YPPsym((P)"signature-bindings");
  T6 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_bindings_69 = YPmet(FUNCODEREF(fun_signature_bindings_69),LITREF(lit_103),T6,ENVNUL,PNUL,YPfalse);
  T9 = BOUNDP(YastYsignature_bindings);
  if (T9 != YPfalse) {
    T8 = VARREF(YastYsignature_bindings);
  } else {
    T8 = YPfalse;
  }
  T10 = fun_signature_bindings_69;
  T7 = CALL2(1,VARREF(YPdefine_method),T8,T10);
  VARSET(YastYsignature_bindings,T7);
  lit_104 = YPPsym((P)"signature-bindings-setter");
  T11 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_bindings_setter_70 = YPmet(FUNCODEREF(fun_signature_bindings_setter_70),LITREF(lit_104),T11,ENVNUL,PNUL,YPfalse);
  T14 = BOUNDP(YastYsignature_bindings_setter);
  if (T14 != YPfalse) {
    T13 = VARREF(YastYsignature_bindings_setter);
  } else {
    T13 = YPfalse;
  }
  T15 = fun_signature_bindings_setter_70;
  T12 = CALL2(1,VARREF(YPdefine_method),T13,T15);
  VARSET(YastYsignature_bindings_setter,T12);
  T16 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T16,ENVNUL,PNUL,YPfalse);
  T17 = fun_71;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLast_signatureG),VARREF(YastYsignature_bindings),VARREF(YastYsignature_bindings_setter),VARREF(YLanyG),T17);
  lit_105 = YPPsym((P)"signature-names");
  T18 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_names_72 = YPmet(FUNCODEREF(fun_signature_names_72),LITREF(lit_105),T18,ENVNUL,PNUL,YPfalse);
  T21 = BOUNDP(YastYsignature_names);
  if (T21 != YPfalse) {
    T20 = VARREF(YastYsignature_names);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_signature_names_72;
  T19 = CALL2(1,VARREF(YPdefine_method),T20,T22);
  VARSET(YastYsignature_names,T19);
  lit_106 = YPPsym((P)"signature-names-setter");
  T23 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_names_setter_73 = YPmet(FUNCODEREF(fun_signature_names_setter_73),LITREF(lit_106),T23,ENVNUL,PNUL,YPfalse);
  T26 = BOUNDP(YastYsignature_names_setter);
  if (T26 != YPfalse) {
    T25 = VARREF(YastYsignature_names_setter);
  } else {
    T25 = YPfalse;
  }
  T27 = fun_signature_names_setter_73;
  T24 = CALL2(1,VARREF(YPdefine_method),T25,T27);
  VARSET(YastYsignature_names_setter,T24);
  T28 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_74 = YPmet(FUNCODEREF(fun_74),YPfalse,T28,ENVNUL,PNUL,YPfalse);
  T29 = fun_74;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLast_signatureG),VARREF(YastYsignature_names),VARREF(YastYsignature_names_setter),VARREF(YLanyG),T29);
  lit_107 = YPPsym((P)"signature-specs");
  T30 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_specs_75 = YPmet(FUNCODEREF(fun_signature_specs_75),LITREF(lit_107),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YastYsignature_specs);
  if (T33 != YPfalse) {
    T32 = VARREF(YastYsignature_specs);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_signature_specs_75;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YastYsignature_specs,T31);
  lit_108 = YPPsym((P)"signature-specs-setter");
  T35 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_specs_setter_76 = YPmet(FUNCODEREF(fun_signature_specs_setter_76),LITREF(lit_108),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YastYsignature_specs_setter);
  if (T38 != YPfalse) {
    T37 = VARREF(YastYsignature_specs_setter);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_signature_specs_setter_76;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YastYsignature_specs_setter,T36);
  T40 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_77 = YPmet(FUNCODEREF(fun_77),YPfalse,T40,ENVNUL,PNUL,YPfalse);
  T41 = fun_77;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLast_signatureG),VARREF(YastYsignature_specs),VARREF(YastYsignature_specs_setter),VARREF(YLanyG),T41);
  lit_109 = YPPsym((P)"signature-nary?");
  T42 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_naryQ_78 = YPmet(FUNCODEREF(fun_signature_naryQ_78),LITREF(lit_109),T42,ENVNUL,PNUL,YPfalse);
  T45 = BOUNDP(YastYsignature_naryQ);
  if (T45 != YPfalse) {
    T44 = VARREF(YastYsignature_naryQ);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_signature_naryQ_78;
  T43 = CALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(YastYsignature_naryQ,T43);
  lit_110 = YPPsym((P)"signature-nary?-setter");
  T47 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_naryQ_setter_79 = YPmet(FUNCODEREF(fun_signature_naryQ_setter_79),LITREF(lit_110),T47,ENVNUL,PNUL,YPfalse);
  T50 = BOUNDP(YastYsignature_naryQ_setter);
  if (T50 != YPfalse) {
    T49 = VARREF(YastYsignature_naryQ_setter);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_signature_naryQ_setter_79;
  T48 = CALL2(1,VARREF(YPdefine_method),T49,T51);
  VARSET(YastYsignature_naryQ_setter,T48);
  T52 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T52,ENVNUL,PNUL,YPfalse);
  T53 = fun_80;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLast_signatureG),VARREF(YastYsignature_naryQ),VARREF(YastYsignature_naryQ_setter),VARREF(YLanyG),T53);
  lit_111 = YPPsym((P)"signature-arity");
  T54 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_arity_81 = YPmet(FUNCODEREF(fun_signature_arity_81),LITREF(lit_111),T54,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(YastYsignature_arity);
  if (T57 != YPfalse) {
    T56 = VARREF(YastYsignature_arity);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_signature_arity_81;
  T55 = CALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YastYsignature_arity,T55);
  lit_112 = YPPsym((P)"signature-arity-setter");
  T59 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_arity_setter_82 = YPmet(FUNCODEREF(fun_signature_arity_setter_82),LITREF(lit_112),T59,ENVNUL,PNUL,YPfalse);
  T62 = BOUNDP(YastYsignature_arity_setter);
  if (T62 != YPfalse) {
    T61 = VARREF(YastYsignature_arity_setter);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_signature_arity_setter_82;
  T60 = CALL2(1,VARREF(YPdefine_method),T61,T63);
  VARSET(YastYsignature_arity_setter,T60);
  T64 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_83 = YPmet(FUNCODEREF(fun_83),YPfalse,T64,ENVNUL,PNUL,YPfalse);
  T65 = fun_83;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLast_signatureG),VARREF(YastYsignature_arity),VARREF(YastYsignature_arity_setter),VARREF(YLanyG),T65);
  lit_113 = YPPsym((P)"signature-value");
  T66 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_value_84 = YPmet(FUNCODEREF(fun_signature_value_84),LITREF(lit_113),T66,ENVNUL,PNUL,YPfalse);
  T69 = BOUNDP(YastYsignature_value);
  if (T69 != YPfalse) {
    T68 = VARREF(YastYsignature_value);
  } else {
    T68 = YPfalse;
  }
  T70 = fun_signature_value_84;
  T67 = CALL2(1,VARREF(YPdefine_method),T68,T70);
  VARSET(YastYsignature_value,T67);
  lit_114 = YPPsym((P)"signature-value-setter");
  T71 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_value_setter_85 = YPmet(FUNCODEREF(fun_signature_value_setter_85),LITREF(lit_114),T71,ENVNUL,PNUL,YPfalse);
  T74 = BOUNDP(YastYsignature_value_setter);
  if (T74 != YPfalse) {
    T73 = VARREF(YastYsignature_value_setter);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_signature_value_setter_85;
  T72 = CALL2(1,VARREF(YPdefine_method),T73,T75);
  VARSET(YastYsignature_value_setter,T72);
  T76 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_86 = YPmet(FUNCODEREF(fun_86),YPfalse,T76,ENVNUL,PNUL,YPfalse);
  T77 = fun_86;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLast_signatureG),VARREF(YastYsignature_value),VARREF(YastYsignature_value_setter),VARREF(YLanyG),T77);
  lit_115 = YPPsym((P)"<ast-function>");
  T80 = (P)YPpair(VARREF(YdependencyYLdependentG),Ynil);
  T79 = (P)YPpair(VARREF(YastYLcomputed_programG),T80);
  T78 = CALL2(1,VARREF(Yfab_class),LITREF(lit_115),T79);
  VARSET(YastYLast_functionG,T78);
  lit_116 = YPPsym((P)"function-binding");
  T81 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_binding_87 = YPmet(FUNCODEREF(fun_function_binding_87),LITREF(lit_116),T81,ENVNUL,PNUL,YPfalse);
  T84 = BOUNDP(YastYfunction_binding);
  if (T84 != YPfalse) {
    T83 = VARREF(YastYfunction_binding);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_function_binding_87;
  T82 = CALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(YastYfunction_binding,T82);
  lit_117 = YPPsym((P)"function-binding-setter");
  T86 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_binding_setter_88 = YPmet(FUNCODEREF(fun_function_binding_setter_88),LITREF(lit_117),T86,ENVNUL,PNUL,YPfalse);
  T89 = BOUNDP(YastYfunction_binding_setter);
  if (T89 != YPfalse) {
    T88 = VARREF(YastYfunction_binding_setter);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_function_binding_setter_88;
  T87 = CALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(YastYfunction_binding_setter,T87);
  T91 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_89 = YPmet(FUNCODEREF(fun_89),YPfalse,T91,ENVNUL,PNUL,YPfalse);
  T92 = fun_89;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLast_functionG),VARREF(YastYfunction_binding),VARREF(YastYfunction_binding_setter),VARREF(YLanyG),T92);
  lit_118 = YPPsym((P)"function-debug-name");
  T93 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_debug_name_90 = YPmet(FUNCODEREF(fun_function_debug_name_90),LITREF(lit_118),T93,ENVNUL,PNUL,YPfalse);
  T96 = BOUNDP(YastYfunction_debug_name);
  if (T96 != YPfalse) {
    T95 = VARREF(YastYfunction_debug_name);
  } else {
    T95 = YPfalse;
  }
  T97 = fun_function_debug_name_90;
  T94 = CALL2(1,VARREF(YPdefine_method),T95,T97);
  VARSET(YastYfunction_debug_name,T94);
  lit_119 = YPPsym((P)"function-debug-name-setter");
  T98 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_debug_name_setter_91 = YPmet(FUNCODEREF(fun_function_debug_name_setter_91),LITREF(lit_119),T98,ENVNUL,PNUL,YPfalse);
  T101 = BOUNDP(YastYfunction_debug_name_setter);
  if (T101 != YPfalse) {
    T100 = VARREF(YastYfunction_debug_name_setter);
  } else {
    T100 = YPfalse;
  }
  T102 = fun_function_debug_name_setter_91;
  T99 = CALL2(1,VARREF(YPdefine_method),T100,T102);
  VARSET(YastYfunction_debug_name_setter,T99);
  T103 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_92 = YPmet(FUNCODEREF(fun_92),YPfalse,T103,ENVNUL,PNUL,YPfalse);
  T104 = fun_92;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLast_functionG),VARREF(YastYfunction_debug_name),VARREF(YastYfunction_debug_name_setter),VARREF(YLanyG),T104);
  lit_120 = YPPsym((P)"function-signature");
  T105 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_signature_93 = YPmet(FUNCODEREF(fun_function_signature_93),LITREF(lit_120),T105,ENVNUL,PNUL,YPfalse);
  T108 = BOUNDP(YastYfunction_signature);
  if (T108 != YPfalse) {
    T107 = VARREF(YastYfunction_signature);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_function_signature_93;
  T106 = CALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YastYfunction_signature,T106);
  lit_121 = YPPsym((P)"function-signature-setter");
  T110 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_signature_setter_94 = YPmet(FUNCODEREF(fun_function_signature_setter_94),LITREF(lit_121),T110,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(YastYfunction_signature_setter);
  if (T113 != YPfalse) {
    T112 = VARREF(YastYfunction_signature_setter);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_function_signature_setter_94;
  T111 = CALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YastYfunction_signature_setter,T111);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLast_functionG),VARREF(YastYfunction_signature),VARREF(YastYfunction_signature_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_122 = YPPsym((P)"function-bindings");
  T115 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YastYfunction_bindings = YPmet(FUNCODEREF(YastYfunction_bindings),LITREF(lit_122),T115,ENVNUL,PNUL,YPfalse);
  T116 = YastYfunction_bindings;
  VARSET(YastYfunction_bindings,T116);
  lit_123 = YPPsym((P)"function-specs");
  T117 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YastYfunction_specs = YPmet(FUNCODEREF(YastYfunction_specs),LITREF(lit_123),T117,ENVNUL,PNUL,YPfalse);
  T118 = YastYfunction_specs;
  VARSET(YastYfunction_specs,T118);
  lit_124 = YPPsym((P)"function-nary?");
  T119 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YastYfunction_naryQ = YPmet(FUNCODEREF(YastYfunction_naryQ),LITREF(lit_124),T119,ENVNUL,PNUL,YPfalse);
  T120 = YastYfunction_naryQ;
  VARSET(YastYfunction_naryQ,T120);
  lit_125 = YPPsym((P)"function-value");
  T121 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YastYfunction_value = YPmet(FUNCODEREF(YastYfunction_value),LITREF(lit_125),T121,ENVNUL,PNUL,YPfalse);
  T122 = YastYfunction_value;
  VARSET(YastYfunction_value,T122);
  lit_126 = YPPsym((P)"function-kind");
  lit_127 = YPsb((P)"FUN");
  T123 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_99 = YPmet(FUNCODEREF(fun_function_kind_99),LITREF(lit_126),T123,ENVNUL,PNUL,YPfalse);
  T126 = BOUNDP(YastYfunction_kind);
  if (T126 != YPfalse) {
    T125 = VARREF(YastYfunction_kind);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_function_kind_99;
  T124 = CALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(YastYfunction_kind,T124);
  lit_128 = YPPsym((P)"function-display-name");
  lit_129 = YPPsym((P)"f");
  lit_130 = YPsb((P)"%s:%s");
  lit_131 = YPsb((P)"anonymous function");
  T128 = YPsig(YPPlist(1,LITREF(lit_129)),YPPlist(1,VARREF(YastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YastYfunction_display_name = YPmet(FUNCODEREF(YastYfunction_display_name),LITREF(lit_128),T128,ENVNUL,PNUL,YPfalse);
  T129 = YastYfunction_display_name;
  VARSET(YastYfunction_display_name,T129);
  lit_132 = YPPsym((P)"invalidate-dependent");
  lit_133 = YPPsym((P)"dependent");
  lit_134 = YPsb((P)"warning: %s needs to be reparsed\n");
  lit_135 = YPsb((P)"warning: %s needs to be re-optimized\n");
  lit_136 = YPsb((P)"warning: unknown dependency of %s clobbered\n");
  T130 = YPsig(YPPlist(3,LITREF(lit_133),LITREF(lit_49),LITREF(lit_50)),YPPlist(3,VARREF(YastYLast_functionG),VARREF(YdependencyYLdependableG),VARREF(YdependencyYLdependency_typeG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_invalidate_dependent_101 = YPmet(FUNCODEREF(fun_invalidate_dependent_101),LITREF(lit_132),T130,ENVNUL,PNUL,YPfalse);
  T133 = BOUNDP(YdependencyYinvalidate_dependent);
  if (T133 != YPfalse) {
    T132 = VARREF(YdependencyYinvalidate_dependent);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_invalidate_dependent_101;
  T131 = CALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(YdependencyYinvalidate_dependent,T131);
  lit_137 = YPPsym((P)"<programs>");
  T136 = (P)YPpair(VARREF(YastYLpassive_programG),Ynil);
  T135 = CALL2(1,VARREF(Yfab_class),LITREF(lit_137),T136);
  VARSET(YastYLprogramsG,T135);
  lit_138 = YPPsym((P)"as-lst");
  lit_139 = YPPsym((P)"e");
  lit_140 = YPPsym((P)"loop");
  lit_141 = YPPsym((P)"res");
  T138 = YPsig(YPPlist(2,LITREF(lit_141),LITREF(lit_139)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_102 = YPmet(FUNCODEREF(fun_loop_102),LITREF(lit_140),T138,ENVNUL,PNUL,YPfalse);
  T137 = YPsig(YPPlist(1,LITREF(lit_139)),YPPlist(1,VARREF(YastYLprogramsG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_as_lst_103 = YPmet(FUNCODEREF(fun_as_lst_103),LITREF(lit_138),T137,ENVNUL,PNUL,YPfalse);
  T141 = BOUNDP(YastYas_lst);
  if (T141 != YPfalse) {
    T140 = VARREF(YastYas_lst);
  } else {
    T140 = YPfalse;
  }
  T142 = fun_as_lst_103;
  T139 = CALL2(1,VARREF(YPdefine_method),T140,T142);
  VARSET(YastYas_lst,T139);
  lit_142 = YPPsym((P)"x-2417");
  lit_143 = YPPsym((P)"def-list");
  lit_144 = YPsb((P)"<");
  lit_145 = YPsb((P)">");
  lit_146 = YPsb((P)"$");
  lit_147 = YPsb((P)"-empty");
  lit_148 = YPPsym((P)"dc");
  lit_149 = YPPsym((P)"<lst>");
  lit_150 = YPPsym((P)"dv");
  lit_151 = YPPsym((P)"new");
  lit_152 = YPPsym((P)"head");
  lit_153 = YPPsym((P)"tail");
  lit_154 = YPPsym((P)"dm");
  lit_155 = YPPsym((P)"as");
  lit_156 = YPPsym((P)"p");
  lit_157 = YPPsym((P)"t=");
  lit_158 = YPPsym((P)"=>");
  lit_159 = YPPsym((P)"app");
  lit_160 = YPPsym((P)"fabs");
  lit_161 = YPPsym((P)"df");
  lit_162 = YPPsym((P)"h");
  lit_163 = YPPsym((P)"t");
  lit_164 = YPPsym((P)"empty");
  T145 = YPsig(YPPlist(2,LITREF(lit_5),LITREF(lit_6)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2417_104 = YPmet(FUNCODEREF(fun_x_2417_104),LITREF(lit_142),T145,ENVNUL,PNUL,YPfalse);
  T144 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_105 = YPmet(FUNCODEREF(fun_105),YPfalse,T144,ENVNUL,PNUL,YPfalse);
  T143 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_106 = YPmet(FUNCODEREF(fun_106),YPfalse,T143,ENVNUL,PNUL,YPfalse);
  T146 = fun_106;
  YPmacro(YPPsym((P)"ast"),YPPsym((P)"def-list"),T146);
  lit_165 = YPPsym((P)"x-2421");
  lit_166 = YPPsym((P)"def-programs");
  T149 = YPsig(YPPlist(2,LITREF(lit_5),LITREF(lit_6)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2421_107 = YPmet(FUNCODEREF(fun_x_2421_107),LITREF(lit_165),T149,ENVNUL,PNUL,YPfalse);
  T148 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_108 = YPmet(FUNCODEREF(fun_108),YPfalse,T148,ENVNUL,PNUL,YPfalse);
  T147 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_109 = YPmet(FUNCODEREF(fun_109),YPfalse,T147,ENVNUL,PNUL,YPfalse);
  T150 = fun_109;
  YPmacro(YPPsym((P)"ast"),YPPsym((P)"def-programs"),T150);
  lit_167 = YPPsym((P)"<ast-embodied-function>");
  T152 = (P)YPpair(VARREF(YastYLast_functionG),Ynil);
  T151 = CALL2(1,VARREF(Yfab_class),LITREF(lit_167),T152);
  VARSET(YastYLast_embodied_functionG,T151);
  lit_168 = YPPsym((P)"function-body");
  T153 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_body_110 = YPmet(FUNCODEREF(fun_function_body_110),LITREF(lit_168),T153,ENVNUL,PNUL,YPfalse);
  T156 = BOUNDP(YastYfunction_body);
  if (T156 != YPfalse) {
    T155 = VARREF(YastYfunction_body);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_function_body_110;
  T154 = CALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(YastYfunction_body,T154);
  lit_169 = YPPsym((P)"function-body-setter");
  T158 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_body_setter_111 = YPmet(FUNCODEREF(fun_function_body_setter_111),LITREF(lit_169),T158,ENVNUL,PNUL,YPfalse);
  T161 = BOUNDP(YastYfunction_body_setter);
  if (T161 != YPfalse) {
    T160 = VARREF(YastYfunction_body_setter);
  } else {
    T160 = YPfalse;
  }
  T162 = fun_function_body_setter_111;
  T159 = CALL2(1,VARREF(YPdefine_method),T160,T162);
  VARSET(YastYfunction_body_setter,T159);
  T163 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_112 = YPmet(FUNCODEREF(fun_112),YPfalse,T163,ENVNUL,PNUL,YPfalse);
  T164 = fun_112;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLast_embodied_functionG),VARREF(YastYfunction_body),VARREF(YastYfunction_body_setter),VARREF(YLanyG),T164);
  lit_170 = YPPsym((P)"function-index");
  T165 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_index_113 = YPmet(FUNCODEREF(fun_function_index_113),LITREF(lit_170),T165,ENVNUL,PNUL,YPfalse);
  T168 = BOUNDP(YastYfunction_index);
  if (T168 != YPfalse) {
    T167 = VARREF(YastYfunction_index);
  } else {
    T167 = YPfalse;
  }
  T169 = fun_function_index_113;
  T166 = CALL2(1,VARREF(YPdefine_method),T167,T169);
  VARSET(YastYfunction_index,T166);
  lit_171 = YPPsym((P)"function-index-setter");
  T170 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_index_setter_114 = YPmet(FUNCODEREF(fun_function_index_setter_114),LITREF(lit_171),T170,ENVNUL,PNUL,YPfalse);
  T173 = BOUNDP(YastYfunction_index_setter);
  if (T173 != YPfalse) {
    T172 = VARREF(YastYfunction_index_setter);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_function_index_setter_114;
  T171 = CALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(YastYfunction_index_setter,T171);
  T175 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_115 = YPmet(FUNCODEREF(fun_115),YPfalse,T175,ENVNUL,PNUL,YPfalse);
  T176 = fun_115;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLast_embodied_functionG),VARREF(YastYfunction_index),VARREF(YastYfunction_index_setter),VARREF(YLanyG),T176);
  lit_172 = YPPsym((P)"function-temporaries");
  T177 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_temporaries_116 = YPmet(FUNCODEREF(fun_function_temporaries_116),LITREF(lit_172),T177,ENVNUL,PNUL,YPfalse);
  T180 = BOUNDP(YastYfunction_temporaries);
  if (T180 != YPfalse) {
    T179 = VARREF(YastYfunction_temporaries);
  } else {
    T179 = YPfalse;
  }
  T181 = fun_function_temporaries_116;
  T178 = CALL2(1,VARREF(YPdefine_method),T179,T181);
  VARSET(YastYfunction_temporaries,T178);
  lit_173 = YPPsym((P)"function-temporaries-setter");
  T182 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_temporaries_setter_117 = YPmet(FUNCODEREF(fun_function_temporaries_setter_117),LITREF(lit_173),T182,ENVNUL,PNUL,YPfalse);
  T185 = BOUNDP(YastYfunction_temporaries_setter);
  if (T185 != YPfalse) {
    T184 = VARREF(YastYfunction_temporaries_setter);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_function_temporaries_setter_117;
  T183 = CALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YastYfunction_temporaries_setter,T183);
  T187 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_118 = YPmet(FUNCODEREF(fun_118),YPfalse,T187,ENVNUL,PNUL,YPfalse);
  T188 = fun_118;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLast_embodied_functionG),VARREF(YastYfunction_temporaries),VARREF(YastYfunction_temporaries_setter),VARREF(YLanyG),T188);
  lit_174 = YPPsym((P)"function-registers");
  T189 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_registers_119 = YPmet(FUNCODEREF(fun_function_registers_119),LITREF(lit_174),T189,ENVNUL,PNUL,YPfalse);
  T192 = BOUNDP(YastYfunction_registers);
  if (T192 != YPfalse) {
    T191 = VARREF(YastYfunction_registers);
  } else {
    T191 = YPfalse;
  }
  T193 = fun_function_registers_119;
  T190 = CALL2(1,VARREF(YPdefine_method),T191,T193);
  VARSET(YastYfunction_registers,T190);
  lit_175 = YPPsym((P)"function-registers-setter");
  T194 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_registers_setter_120 = YPmet(FUNCODEREF(fun_function_registers_setter_120),LITREF(lit_175),T194,ENVNUL,PNUL,YPfalse);
  T197 = BOUNDP(YastYfunction_registers_setter);
  if (T197 != YPfalse) {
    T196 = VARREF(YastYfunction_registers_setter);
  } else {
    T196 = YPfalse;
  }
  T198 = fun_function_registers_setter_120;
  T195 = CALL2(1,VARREF(YPdefine_method),T196,T198);
  VARSET(YastYfunction_registers_setter,T195);
  T199 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_121 = YPmet(FUNCODEREF(fun_121),YPfalse,T199,ENVNUL,PNUL,YPfalse);
  T200 = fun_121;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLast_embodied_functionG),VARREF(YastYfunction_registers),VARREF(YastYfunction_registers_setter),VARREF(YLanyG),T200);
  lit_176 = YPPsym((P)"function-data-refs");
  T201 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_data_refs_122 = YPmet(FUNCODEREF(fun_function_data_refs_122),LITREF(lit_176),T201,ENVNUL,PNUL,YPfalse);
  T204 = BOUNDP(YastYfunction_data_refs);
  if (T204 != YPfalse) {
    T203 = VARREF(YastYfunction_data_refs);
  } else {
    T203 = YPfalse;
  }
  T205 = fun_function_data_refs_122;
  T202 = CALL2(1,VARREF(YPdefine_method),T203,T205);
  VARSET(YastYfunction_data_refs,T202);
  lit_177 = YPPsym((P)"function-data-refs-setter");
  T206 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_data_refs_setter_123 = YPmet(FUNCODEREF(fun_function_data_refs_setter_123),LITREF(lit_177),T206,ENVNUL,PNUL,YPfalse);
  T209 = BOUNDP(YastYfunction_data_refs_setter);
  if (T209 != YPfalse) {
    T208 = VARREF(YastYfunction_data_refs_setter);
  } else {
    T208 = YPfalse;
  }
  T210 = fun_function_data_refs_setter_123;
  T207 = CALL2(1,VARREF(YPdefine_method),T208,T210);
  VARSET(YastYfunction_data_refs_setter,T207);
  T211 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_124 = YPmet(FUNCODEREF(fun_124),YPfalse,T211,ENVNUL,PNUL,YPfalse);
  T212 = fun_124;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLast_embodied_functionG),VARREF(YastYfunction_data_refs),VARREF(YastYfunction_data_refs_setter),VARREF(YLanyG),T212);
  lit_178 = YPPsym((P)"function-self-recursive?");
  T213 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_self_recursiveQ_125 = YPmet(FUNCODEREF(fun_function_self_recursiveQ_125),LITREF(lit_178),T213,ENVNUL,PNUL,YPfalse);
  T216 = BOUNDP(YastYfunction_self_recursiveQ);
  if (T216 != YPfalse) {
    T215 = VARREF(YastYfunction_self_recursiveQ);
  } else {
    T215 = YPfalse;
  }
  T217 = fun_function_self_recursiveQ_125;
  T214 = CALL2(1,VARREF(YPdefine_method),T215,T217);
  VARSET(YastYfunction_self_recursiveQ,T214);
  lit_179 = YPPsym((P)"function-self-recursive?-setter");
  T218 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_self_recursiveQ_setter_126 = YPmet(FUNCODEREF(fun_function_self_recursiveQ_setter_126),LITREF(lit_179),T218,ENVNUL,PNUL,YPfalse);
  T221 = BOUNDP(YastYfunction_self_recursiveQ_setter);
  if (T221 != YPfalse) {
    T220 = VARREF(YastYfunction_self_recursiveQ_setter);
  } else {
    T220 = YPfalse;
  }
  T222 = fun_function_self_recursiveQ_setter_126;
  T219 = CALL2(1,VARREF(YPdefine_method),T220,T222);
  VARSET(YastYfunction_self_recursiveQ_setter,T219);
  T223 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_127 = YPmet(FUNCODEREF(fun_127),YPfalse,T223,ENVNUL,PNUL,YPfalse);
  T224 = fun_127;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLast_embodied_functionG),VARREF(YastYfunction_self_recursiveQ),VARREF(YastYfunction_self_recursiveQ_setter),VARREF(YLanyG),T224);
  lit_180 = YPPsym((P)"function-source");
  T225 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_source_128 = YPmet(FUNCODEREF(fun_function_source_128),LITREF(lit_180),T225,ENVNUL,PNUL,YPfalse);
  T228 = BOUNDP(YastYfunction_source);
  if (T228 != YPfalse) {
    T227 = VARREF(YastYfunction_source);
  } else {
    T227 = YPfalse;
  }
  T229 = fun_function_source_128;
  T226 = CALL2(1,VARREF(YPdefine_method),T227,T229);
  VARSET(YastYfunction_source,T226);
  lit_181 = YPPsym((P)"function-source-setter");
  T230 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_source_setter_129 = YPmet(FUNCODEREF(fun_function_source_setter_129),LITREF(lit_181),T230,ENVNUL,PNUL,YPfalse);
  T233 = BOUNDP(YastYfunction_source_setter);
  if (T233 != YPfalse) {
    T232 = VARREF(YastYfunction_source_setter);
  } else {
    T232 = YPfalse;
  }
  T234 = fun_function_source_setter_129;
  T231 = CALL2(1,VARREF(YPdefine_method),T232,T234);
  VARSET(YastYfunction_source_setter,T231);
  T237 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T236 = fun_130 = YPmet(FUNCODEREF(fun_130),YPfalse,T237,ENVNUL,PNUL,YPfalse);
  T239 = fun_130;
  T238 = CALLN(1,VARREF(YPprop),5,VARREF(YastYLast_embodied_functionG),VARREF(YastYfunction_source),VARREF(YastYfunction_source_setter),VARREF(YLanyG),T239);
  T235 = T238;
  return T235;
}

P YastY___main_3___() {
  P T224,T223,T222,T221,T220,T219,T218,T217,T216,T215,T214,T213,T212,T211,T210,T209;
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
  lit_182 = YPPsym((P)"<free-environment>");
  T2 = (P)YPpair(VARREF(YastYLprogramsG),Ynil);
  T1 = (P)YPpair(VARREF(YLlstG),T2);
  T0 = CALL2(1,VARREF(Yfab_class),LITREF(lit_182),T1);
  VARSET(YastYLfree_environmentG,T0);
  T3 = CALLN(1,VARREF(Ynew),5,VARREF(YastYLfree_environmentG),VARREF(Yhead),YPfalse,VARREF(Ytail),YPfalse);
  VARSET(YastYDfree_environment_empty,T3);
  T5 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YastYLfree_environmentG));
  T4 = YPsig(YPPlist(2,LITREF(lit_156),LITREF(lit_25)),YPPlist(2,T5,VARREF(YastYLfree_environmentG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_as_131 = YPmet(FUNCODEREF(fun_as_131),LITREF(lit_155),T4,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YprotoStypesYas);
  if (T8 != YPfalse) {
    T7 = VARREF(YprotoStypesYas);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_as_131;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YprotoStypesYas,T6);
  T11 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YLlstG));
  T10 = YPsig(YPPlist(2,LITREF(lit_156),LITREF(lit_25)),YPPlist(2,T11,VARREF(YastYLfree_environmentG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_as_132 = YPmet(FUNCODEREF(fun_as_132),LITREF(lit_155),T10,ENVNUL,PNUL,YPfalse);
  T14 = BOUNDP(YprotoStypesYas);
  if (T14 != YPfalse) {
    T13 = VARREF(YprotoStypesYas);
  } else {
    T13 = YPfalse;
  }
  T15 = fun_as_132;
  T12 = CALL2(1,VARREF(YPdefine_method),T13,T15);
  VARSET(YprotoStypesYas,T12);
  T17 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YastYLfree_environmentG));
  T16 = YPsig(YPPlist(2,LITREF(lit_156),LITREF(lit_25)),YPPlist(2,T17,VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_as_133 = YPmet(FUNCODEREF(fun_as_133),LITREF(lit_155),T16,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YprotoStypesYas);
  if (T20 != YPfalse) {
    T19 = VARREF(YprotoStypesYas);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_as_133;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YprotoStypesYas,T18);
  lit_183 = YPPsym((P)"free-environment");
  T22 = YPsig(YPPlist(2,LITREF(lit_162),LITREF(lit_163)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YastYfree_environment = YPmet(FUNCODEREF(YastYfree_environment),LITREF(lit_183),T22,ENVNUL,PNUL,YPfalse);
  T23 = YastYfree_environment;
  VARSET(YastYfree_environment,T23);
  T25 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YastYLfree_environmentG));
  T24 = YPsig(YPPlist(1,LITREF(lit_139)),YPPlist(1,T25),YPfalse,YPint((P)1),VARREF(YastYLfree_environmentG),Ynil);
  fun_empty_135 = YPmet(FUNCODEREF(fun_empty_135),LITREF(lit_164),T24,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YprotoScollectionsScollectionYempty);
  if (T28 != YPfalse) {
    T27 = VARREF(YprotoScollectionsScollectionYempty);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_empty_135;
  T26 = CALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YprotoScollectionsScollectionYempty,T26);
  lit_184 = YPPsym((P)"<ast-method>");
  T31 = (P)YPpair(VARREF(YastYLast_embodied_functionG),Ynil);
  T30 = CALL2(1,VARREF(Yfab_class),LITREF(lit_184),T31);
  VARSET(YastYLast_methodG,T30);
  lit_185 = YPPsym((P)"function-free");
  T32 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_free_136 = YPmet(FUNCODEREF(fun_function_free_136),LITREF(lit_185),T32,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(YastYfunction_free);
  if (T35 != YPfalse) {
    T34 = VARREF(YastYfunction_free);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_function_free_136;
  T33 = CALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YastYfunction_free,T33);
  lit_186 = YPPsym((P)"function-free-setter");
  T37 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YastYLfree_environmentG),VARREF(YastYLast_methodG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_free_setter_137 = YPmet(FUNCODEREF(fun_function_free_setter_137),LITREF(lit_186),T37,ENVNUL,PNUL,YPfalse);
  T40 = BOUNDP(YastYfunction_free_setter);
  if (T40 != YPfalse) {
    T39 = VARREF(YastYfunction_free_setter);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_function_free_setter_137;
  T38 = CALL2(1,VARREF(YPdefine_method),T39,T41);
  VARSET(YastYfunction_free_setter,T38);
  T42 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_138 = YPmet(FUNCODEREF(fun_138),YPfalse,T42,ENVNUL,PNUL,YPfalse);
  T43 = fun_138;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLast_methodG),VARREF(YastYfunction_free),VARREF(YastYfunction_free_setter),VARREF(YastYLfree_environmentG),T43);
  lit_187 = YPsb((P)"MET");
  T44 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_139 = YPmet(FUNCODEREF(fun_function_kind_139),LITREF(lit_126),T44,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(YastYfunction_kind);
  if (T47 != YPfalse) {
    T46 = VARREF(YastYfunction_kind);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_function_kind_139;
  T45 = CALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YastYfunction_kind,T45);
  lit_188 = YPPsym((P)"<ast-primitive>");
  T50 = (P)YPpair(VARREF(YastYLast_embodied_functionG),Ynil);
  T49 = CALL2(1,VARREF(Yfab_class),LITREF(lit_188),T50);
  VARSET(YastYLast_primitiveG,T49);
  lit_189 = YPsb((P)"PRM");
  T51 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_140 = YPmet(FUNCODEREF(fun_function_kind_140),LITREF(lit_126),T51,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(YastYfunction_kind);
  if (T54 != YPfalse) {
    T53 = VARREF(YastYfunction_kind);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_function_kind_140;
  T52 = CALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YastYfunction_kind,T52);
  lit_190 = YPPsym((P)"<ast-generic>");
  T57 = (P)YPpair(VARREF(YastYLast_functionG),Ynil);
  T56 = CALL2(1,VARREF(Yfab_class),LITREF(lit_190),T57);
  VARSET(YastYLast_genericG,T56);
  lit_191 = YPsb((P)"GEN");
  T58 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YastYLast_genericG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_141 = YPmet(FUNCODEREF(fun_function_kind_141),LITREF(lit_126),T58,ENVNUL,PNUL,YPfalse);
  T61 = BOUNDP(YastYfunction_kind);
  if (T61 != YPfalse) {
    T60 = VARREF(YastYfunction_kind);
  } else {
    T60 = YPfalse;
  }
  T62 = fun_function_kind_141;
  T59 = CALL2(1,VARREF(YPdefine_method),T60,T62);
  VARSET(YastYfunction_kind,T59);
  lit_192 = YPPsym((P)"<alternative>");
  T64 = (P)YPpair(VARREF(YastYLcomputed_programG),Ynil);
  T63 = CALL2(1,VARREF(Yfab_class),LITREF(lit_192),T64);
  VARSET(YastYLalternativeG,T63);
  lit_193 = YPPsym((P)"alternative-condition");
  T65 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_condition_142 = YPmet(FUNCODEREF(fun_alternative_condition_142),LITREF(lit_193),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YastYalternative_condition);
  if (T68 != YPfalse) {
    T67 = VARREF(YastYalternative_condition);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_alternative_condition_142;
  T66 = CALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YastYalternative_condition,T66);
  lit_194 = YPPsym((P)"alternative-condition-setter");
  T70 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_condition_setter_143 = YPmet(FUNCODEREF(fun_alternative_condition_setter_143),LITREF(lit_194),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(YastYalternative_condition_setter);
  if (T73 != YPfalse) {
    T72 = VARREF(YastYalternative_condition_setter);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_alternative_condition_setter_143;
  T71 = CALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YastYalternative_condition_setter,T71);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLalternativeG),VARREF(YastYalternative_condition),VARREF(YastYalternative_condition_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_195 = YPPsym((P)"alternative-consequent");
  T75 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_consequent_144 = YPmet(FUNCODEREF(fun_alternative_consequent_144),LITREF(lit_195),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YastYalternative_consequent);
  if (T78 != YPfalse) {
    T77 = VARREF(YastYalternative_consequent);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_alternative_consequent_144;
  T76 = CALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YastYalternative_consequent,T76);
  lit_196 = YPPsym((P)"alternative-consequent-setter");
  T80 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_consequent_setter_145 = YPmet(FUNCODEREF(fun_alternative_consequent_setter_145),LITREF(lit_196),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YastYalternative_consequent_setter);
  if (T83 != YPfalse) {
    T82 = VARREF(YastYalternative_consequent_setter);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_alternative_consequent_setter_145;
  T81 = CALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YastYalternative_consequent_setter,T81);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLalternativeG),VARREF(YastYalternative_consequent),VARREF(YastYalternative_consequent_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_197 = YPPsym((P)"alternative-alternant");
  T85 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_alternant_146 = YPmet(FUNCODEREF(fun_alternative_alternant_146),LITREF(lit_197),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YastYalternative_alternant);
  if (T88 != YPfalse) {
    T87 = VARREF(YastYalternative_alternant);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_alternative_alternant_146;
  T86 = CALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YastYalternative_alternant,T86);
  lit_198 = YPPsym((P)"alternative-alternant-setter");
  T90 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_alternant_setter_147 = YPmet(FUNCODEREF(fun_alternative_alternant_setter_147),LITREF(lit_198),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YastYalternative_alternant_setter);
  if (T93 != YPfalse) {
    T92 = VARREF(YastYalternative_alternant_setter);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_alternative_alternant_setter_147;
  T91 = CALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YastYalternative_alternant_setter,T91);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLalternativeG),VARREF(YastYalternative_alternant),VARREF(YastYalternative_alternant_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_199 = YPPsym((P)"<sequential>");
  T97 = (P)YPpair(VARREF(YastYLprogramsG),Ynil);
  T96 = (P)YPpair(VARREF(YLlstG),T97);
  T95 = CALL2(1,VARREF(Yfab_class),LITREF(lit_199),T96);
  VARSET(YastYLsequentialG,T95);
  T98 = CALLN(1,VARREF(Ynew),5,VARREF(YastYLsequentialG),VARREF(Yhead),YPfalse,VARREF(Ytail),YPfalse);
  VARSET(YastYDsequential_empty,T98);
  T100 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YastYLsequentialG));
  T99 = YPsig(YPPlist(2,LITREF(lit_156),LITREF(lit_25)),YPPlist(2,T100,VARREF(YastYLsequentialG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_as_148 = YPmet(FUNCODEREF(fun_as_148),LITREF(lit_155),T99,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(YprotoStypesYas);
  if (T103 != YPfalse) {
    T102 = VARREF(YprotoStypesYas);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_as_148;
  T101 = CALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YprotoStypesYas,T101);
  T106 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YLlstG));
  T105 = YPsig(YPPlist(2,LITREF(lit_156),LITREF(lit_25)),YPPlist(2,T106,VARREF(YastYLsequentialG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_as_149 = YPmet(FUNCODEREF(fun_as_149),LITREF(lit_155),T105,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(YprotoStypesYas);
  if (T109 != YPfalse) {
    T108 = VARREF(YprotoStypesYas);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_as_149;
  T107 = CALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YprotoStypesYas,T107);
  T112 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YastYLsequentialG));
  T111 = YPsig(YPPlist(2,LITREF(lit_156),LITREF(lit_25)),YPPlist(2,T112,VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_as_150 = YPmet(FUNCODEREF(fun_as_150),LITREF(lit_155),T111,ENVNUL,PNUL,YPfalse);
  T115 = BOUNDP(YprotoStypesYas);
  if (T115 != YPfalse) {
    T114 = VARREF(YprotoStypesYas);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_as_150;
  T113 = CALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(YprotoStypesYas,T113);
  lit_200 = YPPsym((P)"sequential");
  T117 = YPsig(YPPlist(2,LITREF(lit_162),LITREF(lit_163)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YastYsequential = YPmet(FUNCODEREF(YastYsequential),LITREF(lit_200),T117,ENVNUL,PNUL,YPfalse);
  T118 = YastYsequential;
  VARSET(YastYsequential,T118);
  T120 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YastYLsequentialG));
  T119 = YPsig(YPPlist(1,LITREF(lit_139)),YPPlist(1,T120),YPfalse,YPint((P)1),VARREF(YastYLsequentialG),Ynil);
  fun_empty_152 = YPmet(FUNCODEREF(fun_empty_152),LITREF(lit_164),T119,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YprotoScollectionsScollectionYempty);
  if (T123 != YPfalse) {
    T122 = VARREF(YprotoScollectionsScollectionYempty);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_empty_152;
  T121 = CALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YprotoScollectionsScollectionYempty,T121);
  lit_201 = YPPsym((P)"<constant>");
  T126 = (P)YPpair(VARREF(YastYLpassive_programG),Ynil);
  T125 = CALL2(1,VARREF(Yfab_class),LITREF(lit_201),T126);
  VARSET(YastYLconstantG,T125);
  lit_202 = YPPsym((P)"constant-value");
  T127 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_constant_value_153 = YPmet(FUNCODEREF(fun_constant_value_153),LITREF(lit_202),T127,ENVNUL,PNUL,YPfalse);
  T130 = BOUNDP(YastYconstant_value);
  if (T130 != YPfalse) {
    T129 = VARREF(YastYconstant_value);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_constant_value_153;
  T128 = CALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(YastYconstant_value,T128);
  lit_203 = YPPsym((P)"constant-value-setter");
  T132 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLconstantG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_constant_value_setter_154 = YPmet(FUNCODEREF(fun_constant_value_setter_154),LITREF(lit_203),T132,ENVNUL,PNUL,YPfalse);
  T135 = BOUNDP(YastYconstant_value_setter);
  if (T135 != YPfalse) {
    T134 = VARREF(YastYconstant_value_setter);
  } else {
    T134 = YPfalse;
  }
  T136 = fun_constant_value_setter_154;
  T133 = CALL2(1,VARREF(YPdefine_method),T134,T136);
  VARSET(YastYconstant_value_setter,T133);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLconstantG),VARREF(YastYconstant_value),VARREF(YastYconstant_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_204 = YPPsym((P)"constant-index");
  T137 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_constant_index_155 = YPmet(FUNCODEREF(fun_constant_index_155),LITREF(lit_204),T137,ENVNUL,PNUL,YPfalse);
  T140 = BOUNDP(YastYconstant_index);
  if (T140 != YPfalse) {
    T139 = VARREF(YastYconstant_index);
  } else {
    T139 = YPfalse;
  }
  T141 = fun_constant_index_155;
  T138 = CALL2(1,VARREF(YPdefine_method),T139,T141);
  VARSET(YastYconstant_index,T138);
  lit_205 = YPPsym((P)"constant-index-setter");
  T142 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLconstantG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_constant_index_setter_156 = YPmet(FUNCODEREF(fun_constant_index_setter_156),LITREF(lit_205),T142,ENVNUL,PNUL,YPfalse);
  T145 = BOUNDP(YastYconstant_index_setter);
  if (T145 != YPfalse) {
    T144 = VARREF(YastYconstant_index_setter);
  } else {
    T144 = YPfalse;
  }
  T146 = fun_constant_index_setter_156;
  T143 = CALL2(1,VARREF(YPdefine_method),T144,T146);
  VARSET(YastYconstant_index_setter,T143);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLconstantG),VARREF(YastYconstant_index),VARREF(YastYconstant_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_206 = YPPsym((P)"<raw-constant>");
  T148 = (P)YPpair(VARREF(YastYLconstantG),Ynil);
  T147 = CALL2(1,VARREF(Yfab_class),LITREF(lit_206),T148);
  VARSET(YastYLraw_constantG,T147);
  lit_207 = YPPsym((P)"<immediate-constant>");
  T150 = (P)YPpair(VARREF(YastYLconstantG),Ynil);
  T149 = CALL2(1,VARREF(Yfab_class),LITREF(lit_207),T150);
  VARSET(YastYLimmediate_constantG,T149);
  lit_208 = YPPsym((P)"<application>");
  T152 = (P)YPpair(VARREF(YastYLcomputed_programG),Ynil);
  T151 = CALL2(1,VARREF(Yfab_class),LITREF(lit_208),T152);
  VARSET(YastYLapplicationG,T151);
  lit_209 = YPPsym((P)"application-arguments");
  T153 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLapplicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_arguments_157 = YPmet(FUNCODEREF(fun_application_arguments_157),LITREF(lit_209),T153,ENVNUL,PNUL,YPfalse);
  T156 = BOUNDP(YastYapplication_arguments);
  if (T156 != YPfalse) {
    T155 = VARREF(YastYapplication_arguments);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_application_arguments_157;
  T154 = CALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(YastYapplication_arguments,T154);
  lit_210 = YPPsym((P)"application-arguments-setter");
  T158 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLapplicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_arguments_setter_158 = YPmet(FUNCODEREF(fun_application_arguments_setter_158),LITREF(lit_210),T158,ENVNUL,PNUL,YPfalse);
  T161 = BOUNDP(YastYapplication_arguments_setter);
  if (T161 != YPfalse) {
    T160 = VARREF(YastYapplication_arguments_setter);
  } else {
    T160 = YPfalse;
  }
  T162 = fun_application_arguments_setter_158;
  T159 = CALL2(1,VARREF(YPdefine_method),T160,T162);
  VARSET(YastYapplication_arguments_setter,T159);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLapplicationG),VARREF(YastYapplication_arguments),VARREF(YastYapplication_arguments_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_211 = YPPsym((P)"application-tail?");
  T163 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLapplicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_tailQ_159 = YPmet(FUNCODEREF(fun_application_tailQ_159),LITREF(lit_211),T163,ENVNUL,PNUL,YPfalse);
  T166 = BOUNDP(YastYapplication_tailQ);
  if (T166 != YPfalse) {
    T165 = VARREF(YastYapplication_tailQ);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_application_tailQ_159;
  T164 = CALL2(1,VARREF(YPdefine_method),T165,T167);
  VARSET(YastYapplication_tailQ,T164);
  lit_212 = YPPsym((P)"application-tail?-setter");
  T168 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLapplicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_tailQ_setter_160 = YPmet(FUNCODEREF(fun_application_tailQ_setter_160),LITREF(lit_212),T168,ENVNUL,PNUL,YPfalse);
  T171 = BOUNDP(YastYapplication_tailQ_setter);
  if (T171 != YPfalse) {
    T170 = VARREF(YastYapplication_tailQ_setter);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_application_tailQ_setter_160;
  T169 = CALL2(1,VARREF(YPdefine_method),T170,T172);
  VARSET(YastYapplication_tailQ_setter,T169);
  T173 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_161 = YPmet(FUNCODEREF(fun_161),YPfalse,T173,ENVNUL,PNUL,YPfalse);
  T174 = fun_161;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLapplicationG),VARREF(YastYapplication_tailQ),VARREF(YastYapplication_tailQ_setter),VARREF(YLanyG),T174);
  lit_213 = YPPsym((P)"<regular-application>");
  T176 = (P)YPpair(VARREF(YastYLapplicationG),Ynil);
  T175 = CALL2(1,VARREF(Yfab_class),LITREF(lit_213),T176);
  VARSET(YastYLregular_applicationG,T175);
  lit_214 = YPPsym((P)"application-function");
  T177 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_function_162 = YPmet(FUNCODEREF(fun_application_function_162),LITREF(lit_214),T177,ENVNUL,PNUL,YPfalse);
  T180 = BOUNDP(YastYapplication_function);
  if (T180 != YPfalse) {
    T179 = VARREF(YastYapplication_function);
  } else {
    T179 = YPfalse;
  }
  T181 = fun_application_function_162;
  T178 = CALL2(1,VARREF(YPdefine_method),T179,T181);
  VARSET(YastYapplication_function,T178);
  lit_215 = YPPsym((P)"application-function-setter");
  T182 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLregular_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_function_setter_163 = YPmet(FUNCODEREF(fun_application_function_setter_163),LITREF(lit_215),T182,ENVNUL,PNUL,YPfalse);
  T185 = BOUNDP(YastYapplication_function_setter);
  if (T185 != YPfalse) {
    T184 = VARREF(YastYapplication_function_setter);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_application_function_setter_163;
  T183 = CALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YastYapplication_function_setter,T183);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLregular_applicationG),VARREF(YastYapplication_function),VARREF(YastYapplication_function_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_216 = YPPsym((P)"application-known?");
  T187 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_knownQ_164 = YPmet(FUNCODEREF(fun_application_knownQ_164),LITREF(lit_216),T187,ENVNUL,PNUL,YPfalse);
  T190 = BOUNDP(YastYapplication_knownQ);
  if (T190 != YPfalse) {
    T189 = VARREF(YastYapplication_knownQ);
  } else {
    T189 = YPfalse;
  }
  T191 = fun_application_knownQ_164;
  T188 = CALL2(1,VARREF(YPdefine_method),T189,T191);
  VARSET(YastYapplication_knownQ,T188);
  lit_217 = YPPsym((P)"application-known?-setter");
  T192 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLregular_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_knownQ_setter_165 = YPmet(FUNCODEREF(fun_application_knownQ_setter_165),LITREF(lit_217),T192,ENVNUL,PNUL,YPfalse);
  T195 = BOUNDP(YastYapplication_knownQ_setter);
  if (T195 != YPfalse) {
    T194 = VARREF(YastYapplication_knownQ_setter);
  } else {
    T194 = YPfalse;
  }
  T196 = fun_application_knownQ_setter_165;
  T193 = CALL2(1,VARREF(YPdefine_method),T194,T196);
  VARSET(YastYapplication_knownQ_setter,T193);
  T197 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_166 = YPmet(FUNCODEREF(fun_166),YPfalse,T197,ENVNUL,PNUL,YPfalse);
  T198 = fun_166;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLregular_applicationG),VARREF(YastYapplication_knownQ),VARREF(YastYapplication_knownQ_setter),VARREF(YLanyG),T198);
  lit_218 = YPPsym((P)"<method-application>");
  T200 = (P)YPpair(VARREF(YastYLregular_applicationG),Ynil);
  T199 = CALL2(1,VARREF(Yfab_class),LITREF(lit_218),T200);
  VARSET(YastYLmethod_applicationG,T199);
  lit_219 = YPPsym((P)"application-next-methods");
  T201 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLmethod_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_next_methods_167 = YPmet(FUNCODEREF(fun_application_next_methods_167),LITREF(lit_219),T201,ENVNUL,PNUL,YPfalse);
  T204 = BOUNDP(YastYapplication_next_methods);
  if (T204 != YPfalse) {
    T203 = VARREF(YastYapplication_next_methods);
  } else {
    T203 = YPfalse;
  }
  T205 = fun_application_next_methods_167;
  T202 = CALL2(1,VARREF(YPdefine_method),T203,T205);
  VARSET(YastYapplication_next_methods,T202);
  lit_220 = YPPsym((P)"application-next-methods-setter");
  T206 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLmethod_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_next_methods_setter_168 = YPmet(FUNCODEREF(fun_application_next_methods_setter_168),LITREF(lit_220),T206,ENVNUL,PNUL,YPfalse);
  T209 = BOUNDP(YastYapplication_next_methods_setter);
  if (T209 != YPfalse) {
    T208 = VARREF(YastYapplication_next_methods_setter);
  } else {
    T208 = YPfalse;
  }
  T210 = fun_application_next_methods_setter_168;
  T207 = CALL2(1,VARREF(YPdefine_method),T208,T210);
  VARSET(YastYapplication_next_methods_setter,T207);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLmethod_applicationG),VARREF(YastYapplication_next_methods),VARREF(YastYapplication_next_methods_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_221 = YPPsym((P)"<predefined-application>");
  T212 = (P)YPpair(VARREF(YastYLapplicationG),Ynil);
  T211 = CALL2(1,VARREF(Yfab_class),LITREF(lit_221),T212);
  VARSET(YastYLpredefined_applicationG,T211);
  lit_222 = YPPsym((P)"application-binding");
  T213 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLpredefined_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_binding_169 = YPmet(FUNCODEREF(fun_application_binding_169),LITREF(lit_222),T213,ENVNUL,PNUL,YPfalse);
  T216 = BOUNDP(YastYapplication_binding);
  if (T216 != YPfalse) {
    T215 = VARREF(YastYapplication_binding);
  } else {
    T215 = YPfalse;
  }
  T217 = fun_application_binding_169;
  T214 = CALL2(1,VARREF(YPdefine_method),T215,T217);
  VARSET(YastYapplication_binding,T214);
  lit_223 = YPPsym((P)"application-binding-setter");
  T218 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLpredefined_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_binding_setter_170 = YPmet(FUNCODEREF(fun_application_binding_setter_170),LITREF(lit_223),T218,ENVNUL,PNUL,YPfalse);
  T221 = BOUNDP(YastYapplication_binding_setter);
  if (T221 != YPfalse) {
    T220 = VARREF(YastYapplication_binding_setter);
  } else {
    T220 = YPfalse;
  }
  T222 = fun_application_binding_setter_170;
  T219 = CALL2(1,VARREF(YPdefine_method),T220,T222);
  VARSET(YastYapplication_binding_setter,T219);
  T224 = CALLN(1,VARREF(YPprop),5,VARREF(YastYLpredefined_applicationG),VARREF(YastYapplication_binding),VARREF(YastYapplication_binding_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  T223 = T224;
  return T223;
}

P YastY___main_4___() {
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
  lit_224 = YPPsym((P)"<fix-let>");
  T1 = (P)YPpair(VARREF(YastYLcomputed_programG),Ynil);
  T0 = CALL2(1,VARREF(Yfab_class),LITREF(lit_224),T1);
  VARSET(YastYLfix_letG,T0);
  lit_225 = YPPsym((P)"fix-let-bindings");
  T2 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_bindings_171 = YPmet(FUNCODEREF(fun_fix_let_bindings_171),LITREF(lit_225),T2,ENVNUL,PNUL,YPfalse);
  T5 = BOUNDP(YastYfix_let_bindings);
  if (T5 != YPfalse) {
    T4 = VARREF(YastYfix_let_bindings);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_fix_let_bindings_171;
  T3 = CALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(YastYfix_let_bindings,T3);
  lit_226 = YPPsym((P)"fix-let-bindings-setter");
  T7 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_bindings_setter_172 = YPmet(FUNCODEREF(fun_fix_let_bindings_setter_172),LITREF(lit_226),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YastYfix_let_bindings_setter);
  if (T10 != YPfalse) {
    T9 = VARREF(YastYfix_let_bindings_setter);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_fix_let_bindings_setter_172;
  T8 = CALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YastYfix_let_bindings_setter,T8);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLfix_letG),VARREF(YastYfix_let_bindings),VARREF(YastYfix_let_bindings_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_227 = YPPsym((P)"fix-let-types");
  T12 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_types_173 = YPmet(FUNCODEREF(fun_fix_let_types_173),LITREF(lit_227),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YastYfix_let_types);
  if (T15 != YPfalse) {
    T14 = VARREF(YastYfix_let_types);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_fix_let_types_173;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YastYfix_let_types,T13);
  lit_228 = YPPsym((P)"fix-let-types-setter");
  T17 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_types_setter_174 = YPmet(FUNCODEREF(fun_fix_let_types_setter_174),LITREF(lit_228),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YastYfix_let_types_setter);
  if (T20 != YPfalse) {
    T19 = VARREF(YastYfix_let_types_setter);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_fix_let_types_setter_174;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YastYfix_let_types_setter,T18);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLfix_letG),VARREF(YastYfix_let_types),VARREF(YastYfix_let_types_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_229 = YPPsym((P)"fix-let-arguments");
  T22 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_arguments_175 = YPmet(FUNCODEREF(fun_fix_let_arguments_175),LITREF(lit_229),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YastYfix_let_arguments);
  if (T25 != YPfalse) {
    T24 = VARREF(YastYfix_let_arguments);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_fix_let_arguments_175;
  T23 = CALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YastYfix_let_arguments,T23);
  lit_230 = YPPsym((P)"fix-let-arguments-setter");
  T27 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_arguments_setter_176 = YPmet(FUNCODEREF(fun_fix_let_arguments_setter_176),LITREF(lit_230),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YastYfix_let_arguments_setter);
  if (T30 != YPfalse) {
    T29 = VARREF(YastYfix_let_arguments_setter);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_fix_let_arguments_setter_176;
  T28 = CALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YastYfix_let_arguments_setter,T28);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLfix_letG),VARREF(YastYfix_let_arguments),VARREF(YastYfix_let_arguments_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_231 = YPPsym((P)"fix-let-body");
  T32 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_body_177 = YPmet(FUNCODEREF(fun_fix_let_body_177),LITREF(lit_231),T32,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(YastYfix_let_body);
  if (T35 != YPfalse) {
    T34 = VARREF(YastYfix_let_body);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_fix_let_body_177;
  T33 = CALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YastYfix_let_body,T33);
  lit_232 = YPPsym((P)"fix-let-body-setter");
  T37 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_body_setter_178 = YPmet(FUNCODEREF(fun_fix_let_body_setter_178),LITREF(lit_232),T37,ENVNUL,PNUL,YPfalse);
  T40 = BOUNDP(YastYfix_let_body_setter);
  if (T40 != YPfalse) {
    T39 = VARREF(YastYfix_let_body_setter);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_fix_let_body_setter_178;
  T38 = CALL2(1,VARREF(YPdefine_method),T39,T41);
  VARSET(YastYfix_let_body_setter,T38);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLfix_letG),VARREF(YastYfix_let_body),VARREF(YastYfix_let_body_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_233 = YPPsym((P)"<fab-list>");
  T44 = (P)YPpair(VARREF(YastYLprogramsG),Ynil);
  T43 = (P)YPpair(VARREF(YLlstG),T44);
  T42 = CALL2(1,VARREF(Yfab_class),LITREF(lit_233),T43);
  VARSET(YastYLfab_listG,T42);
  T45 = CALLN(1,VARREF(Ynew),5,VARREF(YastYLfab_listG),VARREF(Yhead),YPfalse,VARREF(Ytail),YPfalse);
  VARSET(YastYDfab_list_empty,T45);
  T47 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YastYLfab_listG));
  T46 = YPsig(YPPlist(2,LITREF(lit_156),LITREF(lit_25)),YPPlist(2,T47,VARREF(YastYLfab_listG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_as_179 = YPmet(FUNCODEREF(fun_as_179),LITREF(lit_155),T46,ENVNUL,PNUL,YPfalse);
  T50 = BOUNDP(YprotoStypesYas);
  if (T50 != YPfalse) {
    T49 = VARREF(YprotoStypesYas);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_as_179;
  T48 = CALL2(1,VARREF(YPdefine_method),T49,T51);
  VARSET(YprotoStypesYas,T48);
  T53 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YLlstG));
  T52 = YPsig(YPPlist(2,LITREF(lit_156),LITREF(lit_25)),YPPlist(2,T53,VARREF(YastYLfab_listG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_as_180 = YPmet(FUNCODEREF(fun_as_180),LITREF(lit_155),T52,ENVNUL,PNUL,YPfalse);
  T56 = BOUNDP(YprotoStypesYas);
  if (T56 != YPfalse) {
    T55 = VARREF(YprotoStypesYas);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_as_180;
  T54 = CALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(YprotoStypesYas,T54);
  T59 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YastYLfab_listG));
  T58 = YPsig(YPPlist(2,LITREF(lit_156),LITREF(lit_25)),YPPlist(2,T59,VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_as_181 = YPmet(FUNCODEREF(fun_as_181),LITREF(lit_155),T58,ENVNUL,PNUL,YPfalse);
  T62 = BOUNDP(YprotoStypesYas);
  if (T62 != YPfalse) {
    T61 = VARREF(YprotoStypesYas);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_as_181;
  T60 = CALL2(1,VARREF(YPdefine_method),T61,T63);
  VARSET(YprotoStypesYas,T60);
  lit_234 = YPPsym((P)"fab-list");
  T64 = YPsig(YPPlist(2,LITREF(lit_162),LITREF(lit_163)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YastYfab_list = YPmet(FUNCODEREF(YastYfab_list),LITREF(lit_234),T64,ENVNUL,PNUL,YPfalse);
  T65 = YastYfab_list;
  VARSET(YastYfab_list,T65);
  T67 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YastYLfab_listG));
  T66 = YPsig(YPPlist(1,LITREF(lit_139)),YPPlist(1,T67),YPfalse,YPint((P)1),VARREF(YastYLfab_listG),Ynil);
  fun_empty_183 = YPmet(FUNCODEREF(fun_empty_183),LITREF(lit_164),T66,ENVNUL,PNUL,YPfalse);
  T70 = BOUNDP(YprotoScollectionsScollectionYempty);
  if (T70 != YPfalse) {
    T69 = VARREF(YprotoScollectionsScollectionYempty);
  } else {
    T69 = YPfalse;
  }
  T71 = fun_empty_183;
  T68 = CALL2(1,VARREF(YPdefine_method),T69,T71);
  VARSET(YprotoScollectionsScollectionYempty,T68);
  lit_235 = YPPsym((P)"<arguments>");
  T74 = (P)YPpair(VARREF(YastYLprogramsG),Ynil);
  T73 = (P)YPpair(VARREF(YLlstG),T74);
  T72 = CALL2(1,VARREF(Yfab_class),LITREF(lit_235),T73);
  VARSET(YastYLargumentsG,T72);
  T75 = CALLN(1,VARREF(Ynew),5,VARREF(YastYLargumentsG),VARREF(Yhead),YPfalse,VARREF(Ytail),YPfalse);
  VARSET(YastYDarguments_empty,T75);
  T77 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YastYLargumentsG));
  T76 = YPsig(YPPlist(2,LITREF(lit_156),LITREF(lit_25)),YPPlist(2,T77,VARREF(YastYLargumentsG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_as_184 = YPmet(FUNCODEREF(fun_as_184),LITREF(lit_155),T76,ENVNUL,PNUL,YPfalse);
  T80 = BOUNDP(YprotoStypesYas);
  if (T80 != YPfalse) {
    T79 = VARREF(YprotoStypesYas);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_as_184;
  T78 = CALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(YprotoStypesYas,T78);
  T83 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YLlstG));
  T82 = YPsig(YPPlist(2,LITREF(lit_156),LITREF(lit_25)),YPPlist(2,T83,VARREF(YastYLargumentsG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_as_185 = YPmet(FUNCODEREF(fun_as_185),LITREF(lit_155),T82,ENVNUL,PNUL,YPfalse);
  T86 = BOUNDP(YprotoStypesYas);
  if (T86 != YPfalse) {
    T85 = VARREF(YprotoStypesYas);
  } else {
    T85 = YPfalse;
  }
  T87 = fun_as_185;
  T84 = CALL2(1,VARREF(YPdefine_method),T85,T87);
  VARSET(YprotoStypesYas,T84);
  T89 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YastYLargumentsG));
  T88 = YPsig(YPPlist(2,LITREF(lit_156),LITREF(lit_25)),YPPlist(2,T89,VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_as_186 = YPmet(FUNCODEREF(fun_as_186),LITREF(lit_155),T88,ENVNUL,PNUL,YPfalse);
  T92 = BOUNDP(YprotoStypesYas);
  if (T92 != YPfalse) {
    T91 = VARREF(YprotoStypesYas);
  } else {
    T91 = YPfalse;
  }
  T93 = fun_as_186;
  T90 = CALL2(1,VARREF(YPdefine_method),T91,T93);
  VARSET(YprotoStypesYas,T90);
  T94 = YPsig(YPPlist(2,LITREF(lit_162),LITREF(lit_163)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YastYarguments = YPmet(FUNCODEREF(YastYarguments),LITREF(lit_16),T94,ENVNUL,PNUL,YPfalse);
  T95 = YastYarguments;
  VARSET(YastYarguments,T95);
  T97 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YastYLargumentsG));
  T96 = YPsig(YPPlist(1,LITREF(lit_139)),YPPlist(1,T97),YPfalse,YPint((P)1),VARREF(YastYLargumentsG),Ynil);
  fun_empty_188 = YPmet(FUNCODEREF(fun_empty_188),LITREF(lit_164),T96,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(YprotoScollectionsScollectionYempty);
  if (T100 != YPfalse) {
    T99 = VARREF(YprotoScollectionsScollectionYempty);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_empty_188;
  T98 = CALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YprotoScollectionsScollectionYempty,T98);
  lit_236 = YPPsym((P)"<locals>");
  T103 = (P)YPpair(VARREF(YastYLcomputed_programG),Ynil);
  T102 = CALL2(1,VARREF(Yfab_class),LITREF(lit_236),T103);
  VARSET(YastYLlocalsG,T102);
  lit_237 = YPPsym((P)"locals-bindings");
  T104 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_bindings_189 = YPmet(FUNCODEREF(fun_locals_bindings_189),LITREF(lit_237),T104,ENVNUL,PNUL,YPfalse);
  T107 = BOUNDP(YastYlocals_bindings);
  if (T107 != YPfalse) {
    T106 = VARREF(YastYlocals_bindings);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_locals_bindings_189;
  T105 = CALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(YastYlocals_bindings,T105);
  lit_238 = YPPsym((P)"locals-bindings-setter");
  T109 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_bindings_setter_190 = YPmet(FUNCODEREF(fun_locals_bindings_setter_190),LITREF(lit_238),T109,ENVNUL,PNUL,YPfalse);
  T112 = BOUNDP(YastYlocals_bindings_setter);
  if (T112 != YPfalse) {
    T111 = VARREF(YastYlocals_bindings_setter);
  } else {
    T111 = YPfalse;
  }
  T113 = fun_locals_bindings_setter_190;
  T110 = CALL2(1,VARREF(YPdefine_method),T111,T113);
  VARSET(YastYlocals_bindings_setter,T110);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLlocalsG),VARREF(YastYlocals_bindings),VARREF(YastYlocals_bindings_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_239 = YPPsym((P)"locals-functions");
  T114 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_functions_191 = YPmet(FUNCODEREF(fun_locals_functions_191),LITREF(lit_239),T114,ENVNUL,PNUL,YPfalse);
  T117 = BOUNDP(YastYlocals_functions);
  if (T117 != YPfalse) {
    T116 = VARREF(YastYlocals_functions);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_locals_functions_191;
  T115 = CALL2(1,VARREF(YPdefine_method),T116,T118);
  VARSET(YastYlocals_functions,T115);
  lit_240 = YPPsym((P)"locals-functions-setter");
  T119 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_functions_setter_192 = YPmet(FUNCODEREF(fun_locals_functions_setter_192),LITREF(lit_240),T119,ENVNUL,PNUL,YPfalse);
  T122 = BOUNDP(YastYlocals_functions_setter);
  if (T122 != YPfalse) {
    T121 = VARREF(YastYlocals_functions_setter);
  } else {
    T121 = YPfalse;
  }
  T123 = fun_locals_functions_setter_192;
  T120 = CALL2(1,VARREF(YPdefine_method),T121,T123);
  VARSET(YastYlocals_functions_setter,T120);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLlocalsG),VARREF(YastYlocals_functions),VARREF(YastYlocals_functions_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_241 = YPPsym((P)"locals-body");
  T124 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_body_193 = YPmet(FUNCODEREF(fun_locals_body_193),LITREF(lit_241),T124,ENVNUL,PNUL,YPfalse);
  T127 = BOUNDP(YastYlocals_body);
  if (T127 != YPfalse) {
    T126 = VARREF(YastYlocals_body);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_locals_body_193;
  T125 = CALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(YastYlocals_body,T125);
  lit_242 = YPPsym((P)"locals-body-setter");
  T129 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_body_setter_194 = YPmet(FUNCODEREF(fun_locals_body_setter_194),LITREF(lit_242),T129,ENVNUL,PNUL,YPfalse);
  T132 = BOUNDP(YastYlocals_body_setter);
  if (T132 != YPfalse) {
    T131 = VARREF(YastYlocals_body_setter);
  } else {
    T131 = YPfalse;
  }
  T133 = fun_locals_body_setter_194;
  T130 = CALL2(1,VARREF(YPdefine_method),T131,T133);
  VARSET(YastYlocals_body_setter,T130);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLlocalsG),VARREF(YastYlocals_body),VARREF(YastYlocals_body_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_243 = YPPsym((P)"<bind-exit>");
  T135 = (P)YPpair(VARREF(YastYLcomputed_programG),Ynil);
  T134 = CALL2(1,VARREF(Yfab_class),LITREF(lit_243),T135);
  VARSET(YastYLbind_exitG,T134);
  lit_244 = YPPsym((P)"bind-exit-main-fun");
  T136 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLbind_exitG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bind_exit_main_fun_195 = YPmet(FUNCODEREF(fun_bind_exit_main_fun_195),LITREF(lit_244),T136,ENVNUL,PNUL,YPfalse);
  T139 = BOUNDP(YastYbind_exit_main_fun);
  if (T139 != YPfalse) {
    T138 = VARREF(YastYbind_exit_main_fun);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_bind_exit_main_fun_195;
  T137 = CALL2(1,VARREF(YPdefine_method),T138,T140);
  VARSET(YastYbind_exit_main_fun,T137);
  lit_245 = YPPsym((P)"bind-exit-main-fun-setter");
  T141 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLbind_exitG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_bind_exit_main_fun_setter_196 = YPmet(FUNCODEREF(fun_bind_exit_main_fun_setter_196),LITREF(lit_245),T141,ENVNUL,PNUL,YPfalse);
  T144 = BOUNDP(YastYbind_exit_main_fun_setter);
  if (T144 != YPfalse) {
    T143 = VARREF(YastYbind_exit_main_fun_setter);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_bind_exit_main_fun_setter_196;
  T142 = CALL2(1,VARREF(YPdefine_method),T143,T145);
  VARSET(YastYbind_exit_main_fun_setter,T142);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLbind_exitG),VARREF(YastYbind_exit_main_fun),VARREF(YastYbind_exit_main_fun_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_246 = YPPsym((P)"<unwind-protect>");
  T147 = (P)YPpair(VARREF(YastYLcomputed_programG),Ynil);
  T146 = CALL2(1,VARREF(Yfab_class),LITREF(lit_246),T147);
  VARSET(YastYLunwind_protectG,T146);
  lit_247 = YPPsym((P)"unwind-protect-protected-thunk");
  T148 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLunwind_protectG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unwind_protect_protected_thunk_197 = YPmet(FUNCODEREF(fun_unwind_protect_protected_thunk_197),LITREF(lit_247),T148,ENVNUL,PNUL,YPfalse);
  T151 = BOUNDP(YastYunwind_protect_protected_thunk);
  if (T151 != YPfalse) {
    T150 = VARREF(YastYunwind_protect_protected_thunk);
  } else {
    T150 = YPfalse;
  }
  T152 = fun_unwind_protect_protected_thunk_197;
  T149 = CALL2(1,VARREF(YPdefine_method),T150,T152);
  VARSET(YastYunwind_protect_protected_thunk,T149);
  lit_248 = YPPsym((P)"unwind-protect-protected-thunk-setter");
  T153 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLunwind_protectG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_unwind_protect_protected_thunk_setter_198 = YPmet(FUNCODEREF(fun_unwind_protect_protected_thunk_setter_198),LITREF(lit_248),T153,ENVNUL,PNUL,YPfalse);
  T156 = BOUNDP(YastYunwind_protect_protected_thunk_setter);
  if (T156 != YPfalse) {
    T155 = VARREF(YastYunwind_protect_protected_thunk_setter);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_unwind_protect_protected_thunk_setter_198;
  T154 = CALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(YastYunwind_protect_protected_thunk_setter,T154);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLunwind_protectG),VARREF(YastYunwind_protect_protected_thunk),VARREF(YastYunwind_protect_protected_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_249 = YPPsym((P)"unwind-protect-cleanup-thunk");
  T158 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLunwind_protectG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unwind_protect_cleanup_thunk_199 = YPmet(FUNCODEREF(fun_unwind_protect_cleanup_thunk_199),LITREF(lit_249),T158,ENVNUL,PNUL,YPfalse);
  T161 = BOUNDP(YastYunwind_protect_cleanup_thunk);
  if (T161 != YPfalse) {
    T160 = VARREF(YastYunwind_protect_cleanup_thunk);
  } else {
    T160 = YPfalse;
  }
  T162 = fun_unwind_protect_cleanup_thunk_199;
  T159 = CALL2(1,VARREF(YPdefine_method),T160,T162);
  VARSET(YastYunwind_protect_cleanup_thunk,T159);
  lit_250 = YPPsym((P)"unwind-protect-cleanup-thunk-setter");
  T163 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLunwind_protectG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_unwind_protect_cleanup_thunk_setter_200 = YPmet(FUNCODEREF(fun_unwind_protect_cleanup_thunk_setter_200),LITREF(lit_250),T163,ENVNUL,PNUL,YPfalse);
  T166 = BOUNDP(YastYunwind_protect_cleanup_thunk_setter);
  if (T166 != YPfalse) {
    T165 = VARREF(YastYunwind_protect_cleanup_thunk_setter);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_unwind_protect_cleanup_thunk_setter_200;
  T164 = CALL2(1,VARREF(YPdefine_method),T165,T167);
  VARSET(YastYunwind_protect_cleanup_thunk_setter,T164);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLunwind_protectG),VARREF(YastYunwind_protect_cleanup_thunk),VARREF(YastYunwind_protect_cleanup_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_251 = YPPsym((P)"<monitor>");
  T169 = (P)YPpair(VARREF(YastYLcomputed_programG),Ynil);
  T168 = CALL2(1,VARREF(Yfab_class),LITREF(lit_251),T169);
  VARSET(YastYLmonitorG,T168);
  lit_252 = YPPsym((P)"monitor-type");
  T170 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_type_201 = YPmet(FUNCODEREF(fun_monitor_type_201),LITREF(lit_252),T170,ENVNUL,PNUL,YPfalse);
  T173 = BOUNDP(YastYmonitor_type);
  if (T173 != YPfalse) {
    T172 = VARREF(YastYmonitor_type);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_monitor_type_201;
  T171 = CALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(YastYmonitor_type,T171);
  lit_253 = YPPsym((P)"monitor-type-setter");
  T175 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_type_setter_202 = YPmet(FUNCODEREF(fun_monitor_type_setter_202),LITREF(lit_253),T175,ENVNUL,PNUL,YPfalse);
  T178 = BOUNDP(YastYmonitor_type_setter);
  if (T178 != YPfalse) {
    T177 = VARREF(YastYmonitor_type_setter);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_monitor_type_setter_202;
  T176 = CALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(YastYmonitor_type_setter,T176);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLmonitorG),VARREF(YastYmonitor_type),VARREF(YastYmonitor_type_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_254 = YPPsym((P)"monitor-info");
  T180 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_info_203 = YPmet(FUNCODEREF(fun_monitor_info_203),LITREF(lit_254),T180,ENVNUL,PNUL,YPfalse);
  T183 = BOUNDP(YastYmonitor_info);
  if (T183 != YPfalse) {
    T182 = VARREF(YastYmonitor_info);
  } else {
    T182 = YPfalse;
  }
  T184 = fun_monitor_info_203;
  T181 = CALL2(1,VARREF(YPdefine_method),T182,T184);
  VARSET(YastYmonitor_info,T181);
  lit_255 = YPPsym((P)"monitor-info-setter");
  T185 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_info_setter_204 = YPmet(FUNCODEREF(fun_monitor_info_setter_204),LITREF(lit_255),T185,ENVNUL,PNUL,YPfalse);
  T188 = BOUNDP(YastYmonitor_info_setter);
  if (T188 != YPfalse) {
    T187 = VARREF(YastYmonitor_info_setter);
  } else {
    T187 = YPfalse;
  }
  T189 = fun_monitor_info_setter_204;
  T186 = CALL2(1,VARREF(YPdefine_method),T187,T189);
  VARSET(YastYmonitor_info_setter,T186);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLmonitorG),VARREF(YastYmonitor_info),VARREF(YastYmonitor_info_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_256 = YPPsym((P)"monitor-test");
  T190 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_test_205 = YPmet(FUNCODEREF(fun_monitor_test_205),LITREF(lit_256),T190,ENVNUL,PNUL,YPfalse);
  T193 = BOUNDP(YastYmonitor_test);
  if (T193 != YPfalse) {
    T192 = VARREF(YastYmonitor_test);
  } else {
    T192 = YPfalse;
  }
  T194 = fun_monitor_test_205;
  T191 = CALL2(1,VARREF(YPdefine_method),T192,T194);
  VARSET(YastYmonitor_test,T191);
  lit_257 = YPPsym((P)"monitor-test-setter");
  T195 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_test_setter_206 = YPmet(FUNCODEREF(fun_monitor_test_setter_206),LITREF(lit_257),T195,ENVNUL,PNUL,YPfalse);
  T198 = BOUNDP(YastYmonitor_test_setter);
  if (T198 != YPfalse) {
    T197 = VARREF(YastYmonitor_test_setter);
  } else {
    T197 = YPfalse;
  }
  T199 = fun_monitor_test_setter_206;
  T196 = CALL2(1,VARREF(YPdefine_method),T197,T199);
  VARSET(YastYmonitor_test_setter,T196);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLmonitorG),VARREF(YastYmonitor_test),VARREF(YastYmonitor_test_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_258 = YPPsym((P)"monitor-handler");
  T200 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_handler_207 = YPmet(FUNCODEREF(fun_monitor_handler_207),LITREF(lit_258),T200,ENVNUL,PNUL,YPfalse);
  T203 = BOUNDP(YastYmonitor_handler);
  if (T203 != YPfalse) {
    T202 = VARREF(YastYmonitor_handler);
  } else {
    T202 = YPfalse;
  }
  T204 = fun_monitor_handler_207;
  T201 = CALL2(1,VARREF(YPdefine_method),T202,T204);
  VARSET(YastYmonitor_handler,T201);
  lit_259 = YPPsym((P)"monitor-handler-setter");
  T205 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_handler_setter_208 = YPmet(FUNCODEREF(fun_monitor_handler_setter_208),LITREF(lit_259),T205,ENVNUL,PNUL,YPfalse);
  T208 = BOUNDP(YastYmonitor_handler_setter);
  if (T208 != YPfalse) {
    T207 = VARREF(YastYmonitor_handler_setter);
  } else {
    T207 = YPfalse;
  }
  T209 = fun_monitor_handler_setter_208;
  T206 = CALL2(1,VARREF(YPdefine_method),T207,T209);
  VARSET(YastYmonitor_handler_setter,T206);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLmonitorG),VARREF(YastYmonitor_handler),VARREF(YastYmonitor_handler_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_260 = YPPsym((P)"monitor-main-thunk");
  T210 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_main_thunk_209 = YPmet(FUNCODEREF(fun_monitor_main_thunk_209),LITREF(lit_260),T210,ENVNUL,PNUL,YPfalse);
  T213 = BOUNDP(YastYmonitor_main_thunk);
  if (T213 != YPfalse) {
    T212 = VARREF(YastYmonitor_main_thunk);
  } else {
    T212 = YPfalse;
  }
  T214 = fun_monitor_main_thunk_209;
  T211 = CALL2(1,VARREF(YPdefine_method),T212,T214);
  VARSET(YastYmonitor_main_thunk,T211);
  lit_261 = YPPsym((P)"monitor-main-thunk-setter");
  T215 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_main_thunk_setter_210 = YPmet(FUNCODEREF(fun_monitor_main_thunk_setter_210),LITREF(lit_261),T215,ENVNUL,PNUL,YPfalse);
  T218 = BOUNDP(YastYmonitor_main_thunk_setter);
  if (T218 != YPfalse) {
    T217 = VARREF(YastYmonitor_main_thunk_setter);
  } else {
    T217 = YPfalse;
  }
  T219 = fun_monitor_main_thunk_setter_210;
  T216 = CALL2(1,VARREF(YPdefine_method),T217,T219);
  VARSET(YastYmonitor_main_thunk_setter,T216);
  T221 = CALLN(1,VARREF(YPprop),5,VARREF(YastYLmonitorG),VARREF(YastYmonitor_main_thunk),VARREF(YastYmonitor_main_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  T220 = T221;
  return T220;
}

P YastY___main_5___() {
  P T279,T278,T277,T276,T275,T274,T273,T272,T271,T270,T269,T268,T267,T266,T265,T264;
  P T263,T262,T261,T260,T259,T258,T257,T256,T255,T254,T253,T252,T251,T250,T249,T248;
  P T247,T246,T245,T244,T243,T242,T241,T240,T239,T238,T237,T236,T235,T234,T233,T232;
  P T231,T230,T229,T228,T227,T226,T225,T224,T223,T222,T221,T220,T219,T218,T217,T216;
  P T215,T214,T213,T212,T211,T210,T209,T208,T207,T206,T205,T204,T203,T202,T201,T200;
  P T199,T198,T197,T196,T195,T194,T193,T192,T191,T190,T189,T188,T187,T186,T185,T184;
  P T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168;
  P T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152;
  P T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136;
  P T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120;
  P T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104;
  P T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88;
  P T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72;
  P T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56;
  P T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40;
  P T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_262 = YPPsym((P)"<static-environment>");
  T1 = (P)YPpair(VARREF(YLanyG),Ynil);
  T0 = CALL2(1,VARREF(Yfab_class),LITREF(lit_262),T1);
  VARSET(YastYLstatic_environmentG,T0);
  lit_263 = YPPsym((P)"environment-next");
  T2 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_next_211 = YPmet(FUNCODEREF(fun_environment_next_211),LITREF(lit_263),T2,ENVNUL,PNUL,YPfalse);
  T5 = BOUNDP(YastYenvironment_next);
  if (T5 != YPfalse) {
    T4 = VARREF(YastYenvironment_next);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_environment_next_211;
  T3 = CALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(YastYenvironment_next,T3);
  lit_264 = YPPsym((P)"environment-next-setter");
  T7 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLstatic_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_next_setter_212 = YPmet(FUNCODEREF(fun_environment_next_setter_212),LITREF(lit_264),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YastYenvironment_next_setter);
  if (T10 != YPfalse) {
    T9 = VARREF(YastYenvironment_next_setter);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_environment_next_setter_212;
  T8 = CALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YastYenvironment_next_setter,T8);
  T12 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_213 = YPmet(FUNCODEREF(fun_213),YPfalse,T12,ENVNUL,PNUL,YPfalse);
  T13 = fun_213;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLstatic_environmentG),VARREF(YastYenvironment_next),VARREF(YastYenvironment_next_setter),VARREF(YLanyG),T13);
  lit_265 = YPPsym((P)"environment-bindings");
  T14 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_bindings_214 = YPmet(FUNCODEREF(fun_environment_bindings_214),LITREF(lit_265),T14,ENVNUL,PNUL,YPfalse);
  T17 = BOUNDP(YastYenvironment_bindings);
  if (T17 != YPfalse) {
    T16 = VARREF(YastYenvironment_bindings);
  } else {
    T16 = YPfalse;
  }
  T18 = fun_environment_bindings_214;
  T15 = CALL2(1,VARREF(YPdefine_method),T16,T18);
  VARSET(YastYenvironment_bindings,T15);
  lit_266 = YPPsym((P)"environment-bindings-setter");
  T19 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLcolG),VARREF(YastYLstatic_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_bindings_setter_215 = YPmet(FUNCODEREF(fun_environment_bindings_setter_215),LITREF(lit_266),T19,ENVNUL,PNUL,YPfalse);
  T22 = BOUNDP(YastYenvironment_bindings_setter);
  if (T22 != YPfalse) {
    T21 = VARREF(YastYenvironment_bindings_setter);
  } else {
    T21 = YPfalse;
  }
  T23 = fun_environment_bindings_setter_215;
  T20 = CALL2(1,VARREF(YPdefine_method),T21,T23);
  VARSET(YastYenvironment_bindings_setter,T20);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLstatic_environmentG),VARREF(YastYenvironment_bindings),VARREF(YastYenvironment_bindings_setter),VARREF(YLcolG),VARREF(YPprop_unbound_error));
  lit_267 = YPPsym((P)"<static-global-environment>");
  T25 = (P)YPpair(VARREF(YastYLstatic_environmentG),Ynil);
  T24 = CALL2(1,VARREF(Yfab_class),LITREF(lit_267),T25);
  VARSET(YastYLstatic_global_environmentG,T24);
  lit_268 = YPPsym((P)"environment-module");
  T26 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_module_216 = YPmet(FUNCODEREF(fun_environment_module_216),LITREF(lit_268),T26,ENVNUL,PNUL,YPfalse);
  T29 = BOUNDP(YastYenvironment_module);
  if (T29 != YPfalse) {
    T28 = VARREF(YastYenvironment_module);
  } else {
    T28 = YPfalse;
  }
  T30 = fun_environment_module_216;
  T27 = CALL2(1,VARREF(YPdefine_method),T28,T30);
  VARSET(YastYenvironment_module,T27);
  lit_269 = YPPsym((P)"environment-module-setter");
  T31 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_module_setter_217 = YPmet(FUNCODEREF(fun_environment_module_setter_217),LITREF(lit_269),T31,ENVNUL,PNUL,YPfalse);
  T34 = BOUNDP(YastYenvironment_module_setter);
  if (T34 != YPfalse) {
    T33 = VARREF(YastYenvironment_module_setter);
  } else {
    T33 = YPfalse;
  }
  T35 = fun_environment_module_setter_217;
  T32 = CALL2(1,VARREF(YPdefine_method),T33,T35);
  VARSET(YastYenvironment_module_setter,T32);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLstatic_global_environmentG),VARREF(YastYenvironment_module),VARREF(YastYenvironment_module_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_270 = YPPsym((P)"environment-module-loader");
  T36 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_module_loader_218 = YPmet(FUNCODEREF(fun_environment_module_loader_218),LITREF(lit_270),T36,ENVNUL,PNUL,YPfalse);
  T39 = BOUNDP(YastYenvironment_module_loader);
  if (T39 != YPfalse) {
    T38 = VARREF(YastYenvironment_module_loader);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_environment_module_loader_218;
  T37 = CALL2(1,VARREF(YPdefine_method),T38,T40);
  VARSET(YastYenvironment_module_loader,T37);
  lit_271 = YPPsym((P)"environment-module-loader-setter");
  T41 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_module_loader_setter_219 = YPmet(FUNCODEREF(fun_environment_module_loader_setter_219),LITREF(lit_271),T41,ENVNUL,PNUL,YPfalse);
  T44 = BOUNDP(YastYenvironment_module_loader_setter);
  if (T44 != YPfalse) {
    T43 = VARREF(YastYenvironment_module_loader_setter);
  } else {
    T43 = YPfalse;
  }
  T45 = fun_environment_module_loader_setter_219;
  T42 = CALL2(1,VARREF(YPdefine_method),T43,T45);
  VARSET(YastYenvironment_module_loader_setter,T42);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLstatic_global_environmentG),VARREF(YastYenvironment_module_loader),VARREF(YastYenvironment_module_loader_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_272 = YPPsym((P)"environment-uses-modules");
  T46 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_uses_modules_220 = YPmet(FUNCODEREF(fun_environment_uses_modules_220),LITREF(lit_272),T46,ENVNUL,PNUL,YPfalse);
  T49 = BOUNDP(YastYenvironment_uses_modules);
  if (T49 != YPfalse) {
    T48 = VARREF(YastYenvironment_uses_modules);
  } else {
    T48 = YPfalse;
  }
  T50 = fun_environment_uses_modules_220;
  T47 = CALL2(1,VARREF(YPdefine_method),T48,T50);
  VARSET(YastYenvironment_uses_modules,T47);
  lit_273 = YPPsym((P)"environment-uses-modules-setter");
  T51 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YprotoScollectionsSbufferYLbufG),VARREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_uses_modules_setter_221 = YPmet(FUNCODEREF(fun_environment_uses_modules_setter_221),LITREF(lit_273),T51,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(YastYenvironment_uses_modules_setter);
  if (T54 != YPfalse) {
    T53 = VARREF(YastYenvironment_uses_modules_setter);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_environment_uses_modules_setter_221;
  T52 = CALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YastYenvironment_uses_modules_setter,T52);
  T56 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_222 = YPmet(FUNCODEREF(fun_222),YPfalse,T56,ENVNUL,PNUL,YPfalse);
  T57 = fun_222;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLstatic_global_environmentG),VARREF(YastYenvironment_uses_modules),VARREF(YastYenvironment_uses_modules_setter),VARREF(YprotoScollectionsSbufferYLbufG),T57);
  lit_274 = YPPsym((P)"environment-allows-foreign-names?");
  T58 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_allows_foreign_namesQ_223 = YPmet(FUNCODEREF(fun_environment_allows_foreign_namesQ_223),LITREF(lit_274),T58,ENVNUL,PNUL,YPfalse);
  T61 = BOUNDP(YastYenvironment_allows_foreign_namesQ);
  if (T61 != YPfalse) {
    T60 = VARREF(YastYenvironment_allows_foreign_namesQ);
  } else {
    T60 = YPfalse;
  }
  T62 = fun_environment_allows_foreign_namesQ_223;
  T59 = CALL2(1,VARREF(YPdefine_method),T60,T62);
  VARSET(YastYenvironment_allows_foreign_namesQ,T59);
  lit_275 = YPPsym((P)"environment-allows-foreign-names?-setter");
  T63 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLlogG),VARREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_allows_foreign_namesQ_setter_224 = YPmet(FUNCODEREF(fun_environment_allows_foreign_namesQ_setter_224),LITREF(lit_275),T63,ENVNUL,PNUL,YPfalse);
  T66 = BOUNDP(YastYenvironment_allows_foreign_namesQ_setter);
  if (T66 != YPfalse) {
    T65 = VARREF(YastYenvironment_allows_foreign_namesQ_setter);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_environment_allows_foreign_namesQ_setter_224;
  T64 = CALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YastYenvironment_allows_foreign_namesQ_setter,T64);
  T68 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_225 = YPmet(FUNCODEREF(fun_225),YPfalse,T68,ENVNUL,PNUL,YPfalse);
  T69 = fun_225;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLstatic_global_environmentG),VARREF(YastYenvironment_allows_foreign_namesQ),VARREF(YastYenvironment_allows_foreign_namesQ_setter),VARREF(YLlogG),T69);
  lit_276 = YPPsym((P)"<static-empty-environment>");
  T71 = (P)YPpair(VARREF(YastYLstatic_environmentG),Ynil);
  T70 = CALL2(1,VARREF(Yfab_class),LITREF(lit_276),T71);
  VARSET(YastYLstatic_empty_environmentG,T70);
  T72 = CALL1(1,VARREF(Ynew),VARREF(YastYLstatic_empty_environmentG));
  VARSET(YastYDempty_static_environment,T72);
  lit_277 = YPPsym((P)"<static-local-environment>");
  T74 = (P)YPpair(VARREF(YastYLstatic_environmentG),Ynil);
  T73 = CALL2(1,VARREF(Yfab_class),LITREF(lit_277),T74);
  VARSET(YastYLstatic_local_environmentG,T73);
  lit_278 = YPPsym((P)"env-object-name");
  lit_279 = YPPsym((P)"binding");
  T77 = YPsig(YPPlist(1,LITREF(lit_279)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_226 = YPmet(FUNCODEREF(fun_226),YPfalse,T77,ENVNUL,PNUL,YPfalse);
  T76 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_227 = YPmet(FUNCODEREF(fun_227),YPfalse,T76,ENVNUL,PNUL,YPfalse);
  T75 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_object_name_228 = YPmet(FUNCODEREF(fun_env_object_name_228),LITREF(lit_278),T75,ENVNUL,PNUL,YPfalse);
  T80 = BOUNDP(YastYenv_object_name);
  if (T80 != YPfalse) {
    T79 = VARREF(YastYenv_object_name);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_env_object_name_228;
  T78 = CALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(YastYenv_object_name,T78);
  lit_280 = YPPsym((P)"objectify");
  lit_281 = YPPsym((P)"r");
  lit_282 = YPPsym((P)"tail?");
  T82 = YPsig(YPPlist(3,LITREF(lit_139),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLlstG),VARREF(YastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_229 = YPmet(FUNCODEREF(fun_objectify_229),LITREF(lit_280),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(YastYobjectify);
  if (T85 != YPfalse) {
    T84 = VARREF(YastYobjectify);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_objectify_229;
  T83 = CALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YastYobjectify,T83);
  lit_283 = YPPsym((P)"objectify-list");
  T87 = YPsig(YPPlist(4,LITREF(lit_129),LITREF(lit_139),LITREF(lit_281),LITREF(lit_282)),YPPlist(4,VARREF(YLanyG),VARREF(YLlstG),VARREF(YastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_230 = YPmet(FUNCODEREF(fun_objectify_list_230),LITREF(lit_283),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YastYobjectify_list);
  if (T90 != YPfalse) {
    T89 = VARREF(YastYobjectify_list);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_objectify_list_230;
  T88 = CALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YastYobjectify_list,T88);
  lit_284 = YPPsym((P)"magic");
  lit_285 = YPPsym((P)"macro");
  lit_286 = YPsb((P)"Magic or Macro binding expected %=");
  T92 = YPsig(YPPlist(4,LITREF(lit_129),LITREF(lit_139),LITREF(lit_281),LITREF(lit_282)),YPPlist(4,VARREF(YastYLmodule_bindingG),VARREF(YLlstG),VARREF(YastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_231 = YPmet(FUNCODEREF(fun_objectify_list_231),LITREF(lit_283),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(YastYobjectify_list);
  if (T95 != YPfalse) {
    T94 = VARREF(YastYobjectify_list);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_objectify_list_231;
  T93 = CALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YastYobjectify_list,T93);
  T97 = YPsig(YPPlist(3,LITREF(lit_139),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLsymG),VARREF(YastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_232 = YPmet(FUNCODEREF(fun_objectify_232),LITREF(lit_280),T97,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(YastYobjectify);
  if (T100 != YPfalse) {
    T99 = VARREF(YastYobjectify);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_objectify_232;
  T98 = CALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YastYobjectify,T98);
  T102 = YPsig(YPPlist(3,LITREF(lit_139),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YastYLmodule_bindingG),VARREF(YastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_233 = YPmet(FUNCODEREF(fun_objectify_233),LITREF(lit_280),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(YastYobjectify);
  if (T105 != YPfalse) {
    T104 = VARREF(YastYobjectify);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_objectify_233;
  T103 = CALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(YastYobjectify,T103);
  T107 = YPsig(YPPlist(3,LITREF(lit_139),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YastYLprogramG),VARREF(YastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_234 = YPmet(FUNCODEREF(fun_objectify_234),LITREF(lit_280),T107,ENVNUL,PNUL,YPfalse);
  T110 = BOUNDP(YastYobjectify);
  if (T110 != YPfalse) {
    T109 = VARREF(YastYobjectify);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_objectify_234;
  T108 = CALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(YastYobjectify,T108);
  T113 = CALL1(1,VARREF(YprotoStypesYtE),Ynil);
  T112 = YPsig(YPPlist(3,LITREF(lit_139),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,T113,VARREF(YastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_235 = YPmet(FUNCODEREF(fun_objectify_235),LITREF(lit_280),T112,ENVNUL,PNUL,YPfalse);
  T116 = BOUNDP(YastYobjectify);
  if (T116 != YPfalse) {
    T115 = VARREF(YastYobjectify);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_objectify_235;
  T114 = CALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(YastYobjectify,T114);
  T118 = YPsig(YPPlist(3,LITREF(lit_139),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_236 = YPmet(FUNCODEREF(fun_objectify_236),LITREF(lit_280),T118,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(YastYobjectify);
  if (T121 != YPfalse) {
    T120 = VARREF(YastYobjectify);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_objectify_236;
  T119 = CALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(YastYobjectify,T119);
  lit_287 = YPPsym((P)"objectify-quotation");
  lit_288 = YPPsym((P)"value");
  T123 = YPsig(YPPlist(2,LITREF(lit_288),LITREF(lit_281)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YastYLconstantG),Ynil);
  fun_objectify_quotation_237 = YPmet(FUNCODEREF(fun_objectify_quotation_237),LITREF(lit_287),T123,ENVNUL,PNUL,YPfalse);
  T126 = BOUNDP(YastYobjectify_quotation);
  if (T126 != YPfalse) {
    T125 = VARREF(YastYobjectify_quotation);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_objectify_quotation_237;
  T124 = CALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(YastYobjectify_quotation,T124);
  T128 = YPsig(YPPlist(2,LITREF(lit_288),LITREF(lit_281)),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YastYLimmediate_constantG),Ynil);
  fun_objectify_quotation_238 = YPmet(FUNCODEREF(fun_objectify_quotation_238),LITREF(lit_287),T128,ENVNUL,PNUL,YPfalse);
  T131 = BOUNDP(YastYobjectify_quotation);
  if (T131 != YPfalse) {
    T130 = VARREF(YastYobjectify_quotation);
  } else {
    T130 = YPfalse;
  }
  T132 = fun_objectify_quotation_238;
  T129 = CALL2(1,VARREF(YPdefine_method),T130,T132);
  VARSET(YastYobjectify_quotation,T129);
  T133 = YPsig(YPPlist(2,LITREF(lit_288),LITREF(lit_281)),YPPlist(2,VARREF(YLchrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YastYLimmediate_constantG),Ynil);
  fun_objectify_quotation_239 = YPmet(FUNCODEREF(fun_objectify_quotation_239),LITREF(lit_287),T133,ENVNUL,PNUL,YPfalse);
  T136 = BOUNDP(YastYobjectify_quotation);
  if (T136 != YPfalse) {
    T135 = VARREF(YastYobjectify_quotation);
  } else {
    T135 = YPfalse;
  }
  T137 = fun_objectify_quotation_239;
  T134 = CALL2(1,VARREF(YPdefine_method),T135,T137);
  VARSET(YastYobjectify_quotation,T134);
  lit_289 = YPPsym((P)"objectify-raw");
  T138 = YPsig(YPPlist(2,LITREF(lit_288),LITREF(lit_281)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YastYLraw_constantG),Ynil);
  fun_objectify_raw_240 = YPmet(FUNCODEREF(fun_objectify_raw_240),LITREF(lit_289),T138,ENVNUL,PNUL,YPfalse);
  T141 = BOUNDP(YastYobjectify_raw);
  if (T141 != YPfalse) {
    T140 = VARREF(YastYobjectify_raw);
  } else {
    T140 = YPfalse;
  }
  T142 = fun_objectify_raw_240;
  T139 = CALL2(1,VARREF(YPdefine_method),T140,T142);
  VARSET(YastYobjectify_raw,T139);
  lit_290 = YPPsym((P)"objectify-bound?");
  T143 = YPsig(YPPlist(3,LITREF(lit_139),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLsymG),VARREF(YastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_boundQ_241 = YPmet(FUNCODEREF(fun_objectify_boundQ_241),LITREF(lit_290),T143,ENVNUL,PNUL,YPfalse);
  T146 = BOUNDP(YastYobjectify_boundQ);
  if (T146 != YPfalse) {
    T145 = VARREF(YastYobjectify_boundQ);
  } else {
    T145 = YPfalse;
  }
  T147 = fun_objectify_boundQ_241;
  T144 = CALL2(1,VARREF(YPdefine_method),T145,T147);
  VARSET(YastYobjectify_boundQ,T144);
  lit_291 = YPPsym((P)"objectify-compile-time");
  lit_292 = YPPsym((P)"program");
  lit_293 = YPPsym((P)"rt?");
  T148 = YPsig(YPPlist(4,LITREF(lit_292),LITREF(lit_281),LITREF(lit_282),LITREF(lit_293)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YastYLprogramG),Ynil);
  fun_objectify_compile_time_242 = YPmet(FUNCODEREF(fun_objectify_compile_time_242),LITREF(lit_291),T148,ENVNUL,PNUL,YPfalse);
  T151 = BOUNDP(YastYobjectify_compile_time);
  if (T151 != YPfalse) {
    T150 = VARREF(YastYobjectify_compile_time);
  } else {
    T150 = YPfalse;
  }
  T152 = fun_objectify_compile_time_242;
  T149 = CALL2(1,VARREF(YPdefine_method),T150,T152);
  VARSET(YastYobjectify_compile_time,T149);
  lit_294 = YPPsym((P)"objectify-alternative");
  lit_295 = YPPsym((P)"c");
  lit_296 = YPPsym((P)"a");
  T153 = YPsig(YPPlist(5,LITREF(lit_163),LITREF(lit_295),LITREF(lit_296),LITREF(lit_281),LITREF(lit_282)),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YastYLalternativeG),Ynil);
  fun_objectify_alternative_243 = YPmet(FUNCODEREF(fun_objectify_alternative_243),LITREF(lit_294),T153,ENVNUL,PNUL,YPfalse);
  T156 = BOUNDP(YastYobjectify_alternative);
  if (T156 != YPfalse) {
    T155 = VARREF(YastYobjectify_alternative);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_objectify_alternative_243;
  T154 = CALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(YastYobjectify_alternative,T154);
  lit_297 = YPPsym((P)"sequentialize");
  lit_298 = YPPsym((P)"e*");
  T159 = YPsig(YPPlist(1,LITREF(lit_298)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_244 = YPmet(FUNCODEREF(fun_loop_244),LITREF(lit_140),T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(YPPlist(1,LITREF(lit_298)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YastYLprogramG),Ynil);
  fun_sequentialize_245 = YPmet(FUNCODEREF(fun_sequentialize_245),LITREF(lit_297),T158,ENVNUL,PNUL,YPfalse);
  T162 = BOUNDP(YastYsequentialize);
  if (T162 != YPfalse) {
    T161 = VARREF(YastYsequentialize);
  } else {
    T161 = YPfalse;
  }
  T163 = fun_sequentialize_245;
  T160 = CALL2(1,VARREF(YPdefine_method),T161,T163);
  VARSET(YastYsequentialize,T160);
  lit_299 = YPPsym((P)"transform-defs");
  T164 = YPsig(YPPlist(1,LITREF(lit_298)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_transform_defs_246 = YPmet(FUNCODEREF(fun_transform_defs_246),LITREF(lit_299),T164,ENVNUL,PNUL,YPfalse);
  T167 = BOUNDP(YastYtransform_defs);
  if (T167 != YPfalse) {
    T166 = VARREF(YastYtransform_defs);
  } else {
    T166 = YPfalse;
  }
  T168 = fun_transform_defs_246;
  T165 = CALL2(1,VARREF(YPdefine_method),T166,T168);
  VARSET(YastYtransform_defs,T165);
  lit_300 = YPPsym((P)"objectify-sequential");
  T170 = YPsig(YPPlist(2,LITREF(lit_141),LITREF(lit_298)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_247 = YPmet(FUNCODEREF(fun_loop_247),LITREF(lit_140),T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(YPPlist(3,LITREF(lit_298),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YastYLprogramG),Ynil);
  fun_objectify_sequential_248 = YPmet(FUNCODEREF(fun_objectify_sequential_248),LITREF(lit_300),T169,ENVNUL,PNUL,YPfalse);
  T173 = BOUNDP(YastYobjectify_sequential);
  if (T173 != YPfalse) {
    T172 = VARREF(YastYobjectify_sequential);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_objectify_sequential_248;
  T171 = CALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(YastYobjectify_sequential,T171);
  lit_301 = YPPsym((P)"objectify-application");
  lit_302 = YPPsym((P)"ff");
  T176 = YPsig(YPPlist(1,LITREF(lit_139)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_249 = YPmet(FUNCODEREF(fun_249),YPfalse,T176,ENVNUL,PNUL,YPfalse);
  T175 = YPsig(YPPlist(4,LITREF(lit_302),LITREF(lit_298),LITREF(lit_281),LITREF(lit_282)),YPPlist(4,VARREF(YastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YastYLprogramG),Ynil);
  fun_objectify_application_250 = YPmet(FUNCODEREF(fun_objectify_application_250),LITREF(lit_301),T175,ENVNUL,PNUL,YPfalse);
  T179 = BOUNDP(YastYobjectify_application);
  if (T179 != YPfalse) {
    T178 = VARREF(YastYobjectify_application);
  } else {
    T178 = YPfalse;
  }
  T180 = fun_objectify_application_250;
  T177 = CALL2(1,VARREF(YPdefine_method),T178,T180);
  VARSET(YastYobjectify_application,T177);
  T182 = YPsig(YPPlist(1,LITREF(lit_139)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_251 = YPmet(FUNCODEREF(fun_251),YPfalse,T182,ENVNUL,PNUL,YPfalse);
  T181 = YPsig(YPPlist(4,LITREF(lit_302),LITREF(lit_298),LITREF(lit_281),LITREF(lit_282)),YPPlist(4,VARREF(YastYLpredefined_referenceG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YastYLprogramG),Ynil);
  fun_objectify_application_252 = YPmet(FUNCODEREF(fun_objectify_application_252),LITREF(lit_301),T181,ENVNUL,PNUL,YPfalse);
  T185 = BOUNDP(YastYobjectify_application);
  if (T185 != YPfalse) {
    T184 = VARREF(YastYobjectify_application);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_objectify_application_252;
  T183 = CALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YastYobjectify_application,T183);
  T188 = YPsig(YPPlist(1,LITREF(lit_139)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_253 = YPmet(FUNCODEREF(fun_253),YPfalse,T188,ENVNUL,PNUL,YPfalse);
  T187 = YPsig(YPPlist(4,LITREF(lit_302),LITREF(lit_298),LITREF(lit_281),LITREF(lit_282)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YastYLprogramG),Ynil);
  fun_objectify_application_254 = YPmet(FUNCODEREF(fun_objectify_application_254),LITREF(lit_301),T187,ENVNUL,PNUL,YPfalse);
  T191 = BOUNDP(YastYobjectify_application);
  if (T191 != YPfalse) {
    T190 = VARREF(YastYobjectify_application);
  } else {
    T190 = YPfalse;
  }
  T192 = fun_objectify_application_254;
  T189 = CALL2(1,VARREF(YPdefine_method),T190,T192);
  VARSET(YastYobjectify_application,T189);
  lit_303 = YPPsym((P)"process-closed-application");
  lit_304 = YPsb((P)"incorrect regular arity");
  T193 = YPsig(YPPlist(4,LITREF(lit_129),LITREF(lit_298),LITREF(lit_281),LITREF(lit_282)),YPPlist(4,VARREF(YastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YastYLfix_letG),Ynil);
  fun_process_closed_application_255 = YPmet(FUNCODEREF(fun_process_closed_application_255),LITREF(lit_303),T193,ENVNUL,PNUL,YPfalse);
  T196 = BOUNDP(YastYprocess_closed_application);
  if (T196 != YPfalse) {
    T195 = VARREF(YastYprocess_closed_application);
  } else {
    T195 = YPfalse;
  }
  T197 = fun_process_closed_application_255;
  T194 = CALL2(1,VARREF(YPdefine_method),T195,T197);
  VARSET(YastYprocess_closed_application,T194);
  lit_305 = YPPsym((P)"process-nary-closed-application");
  lit_306 = YPPsym((P)"pack-nary-args");
  lit_307 = YPPsym((P)"quote");
  lit_308 = YPPsym((P)"%pair");
  lit_309 = YPPsym((P)"gather-arguments");
  lit_310 = YPPsym((P)"v*");
  lit_311 = YPsb((P)"incorrect dotted arity");
  T200 = YPsig(YPPlist(1,LITREF(lit_298)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pack_nary_args_256 = YPmet(FUNCODEREF(fun_pack_nary_args_256),LITREF(lit_306),T200,ENVNUL,PNUL,YPfalse);
  T199 = YPsig(YPPlist(2,LITREF(lit_298),LITREF(lit_310)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gather_arguments_257 = YPmet(FUNCODEREF(fun_gather_arguments_257),LITREF(lit_309),T199,ENVNUL,PNUL,YPfalse);
  T198 = YPsig(YPPlist(4,LITREF(lit_129),LITREF(lit_298),LITREF(lit_281),LITREF(lit_282)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YastYLfix_letG),Ynil);
  fun_process_nary_closed_application_258 = YPmet(FUNCODEREF(fun_process_nary_closed_application_258),LITREF(lit_305),T198,ENVNUL,PNUL,YPfalse);
  T203 = BOUNDP(YastYprocess_nary_closed_application);
  if (T203 != YPfalse) {
    T202 = VARREF(YastYprocess_nary_closed_application);
  } else {
    T202 = YPfalse;
  }
  T204 = fun_process_nary_closed_application_258;
  T201 = CALL2(1,VARREF(YPdefine_method),T202,T204);
  VARSET(YastYprocess_nary_closed_application,T201);
  lit_312 = YPPsym((P)"convert2arguments");
  T205 = YPsig(YPPlist(1,LITREF(lit_298)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_convert2arguments_259 = YPmet(FUNCODEREF(fun_convert2arguments_259),LITREF(lit_312),T205,ENVNUL,PNUL,YPfalse);
  T208 = BOUNDP(YastYconvert2arguments);
  if (T208 != YPfalse) {
    T207 = VARREF(YastYconvert2arguments);
  } else {
    T207 = YPfalse;
  }
  T209 = fun_convert2arguments_259;
  T206 = CALL2(1,VARREF(YPdefine_method),T207,T209);
  VARSET(YastYconvert2arguments,T206);
  lit_313 = YPPsym((P)"objectify-assignment");
  lit_314 = YPsb((P)"Unsupported Set!: %=");
  T210 = YPsig(YPPlist(4,LITREF(lit_279),LITREF(lit_139),LITREF(lit_281),LITREF(lit_282)),YPPlist(4,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YastYLprogramG),Ynil);
  fun_objectify_assignment_260 = YPmet(FUNCODEREF(fun_objectify_assignment_260),LITREF(lit_313),T210,ENVNUL,PNUL,YPfalse);
  T213 = BOUNDP(YastYobjectify_assignment);
  if (T213 != YPfalse) {
    T212 = VARREF(YastYobjectify_assignment);
  } else {
    T212 = YPfalse;
  }
  T214 = fun_objectify_assignment_260;
  T211 = CALL2(1,VARREF(YPdefine_method),T212,T214);
  VARSET(YastYobjectify_assignment,T211);
  T215 = YPsig(YPPlist(4,LITREF(lit_279),LITREF(lit_139),LITREF(lit_281),LITREF(lit_282)),YPPlist(4,VARREF(YLsymG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YastYLassignmentG),Ynil);
  fun_objectify_assignment_261 = YPmet(FUNCODEREF(fun_objectify_assignment_261),LITREF(lit_313),T215,ENVNUL,PNUL,YPfalse);
  T218 = BOUNDP(YastYobjectify_assignment);
  if (T218 != YPfalse) {
    T217 = VARREF(YastYobjectify_assignment);
  } else {
    T217 = YPfalse;
  }
  T219 = fun_objectify_assignment_261;
  T216 = CALL2(1,VARREF(YPdefine_method),T217,T219);
  VARSET(YastYobjectify_assignment,T216);
  lit_315 = YPPsym((P)"objectify-assignment-using");
  lit_316 = YPPsym((P)"ref");
  lit_317 = YPPsym((P)"val");
  T220 = YPsig(YPPlist(2,LITREF(lit_316),LITREF(lit_317)),YPPlist(2,VARREF(YastYLlocal_referenceG),VARREF(YastYLprogramG)),YPfalse,YPint((P)2),VARREF(YastYLlocal_assignmentG),Ynil);
  fun_objectify_assignment_using_262 = YPmet(FUNCODEREF(fun_objectify_assignment_using_262),LITREF(lit_315),T220,ENVNUL,PNUL,YPfalse);
  T223 = BOUNDP(YastYobjectify_assignment_using);
  if (T223 != YPfalse) {
    T222 = VARREF(YastYobjectify_assignment_using);
  } else {
    T222 = YPfalse;
  }
  T224 = fun_objectify_assignment_using_262;
  T221 = CALL2(1,VARREF(YPdefine_method),T222,T224);
  VARSET(YastYobjectify_assignment_using,T221);
  T225 = YPsig(YPPlist(2,LITREF(lit_316),LITREF(lit_317)),YPPlist(2,VARREF(YastYLglobal_referenceG),VARREF(YastYLprogramG)),YPfalse,YPint((P)2),VARREF(YastYLglobal_assignmentG),Ynil);
  fun_objectify_assignment_using_263 = YPmet(FUNCODEREF(fun_objectify_assignment_using_263),LITREF(lit_315),T225,ENVNUL,PNUL,YPfalse);
  T228 = BOUNDP(YastYobjectify_assignment_using);
  if (T228 != YPfalse) {
    T227 = VARREF(YastYobjectify_assignment_using);
  } else {
    T227 = YPfalse;
  }
  T229 = fun_objectify_assignment_using_263;
  T226 = CALL2(1,VARREF(YPdefine_method),T227,T229);
  VARSET(YastYobjectify_assignment_using,T226);
  T230 = YPsig(YPPlist(2,LITREF(lit_316),LITREF(lit_317)),YPPlist(2,VARREF(YastYLruntime_referenceG),VARREF(YastYLprogramG)),YPfalse,YPint((P)2),VARREF(YastYLruntime_assignmentG),Ynil);
  fun_objectify_assignment_using_264 = YPmet(FUNCODEREF(fun_objectify_assignment_using_264),LITREF(lit_315),T230,ENVNUL,PNUL,YPfalse);
  T233 = BOUNDP(YastYobjectify_assignment_using);
  if (T233 != YPfalse) {
    T232 = VARREF(YastYobjectify_assignment_using);
  } else {
    T232 = YPfalse;
  }
  T234 = fun_objectify_assignment_using_264;
  T231 = CALL2(1,VARREF(YPdefine_method),T232,T234);
  VARSET(YastYobjectify_assignment_using,T231);
  lit_318 = YPPsym((P)"update-binding-kind");
  lit_319 = YPPsym((P)"new-kind");
  lit_320 = YPsb((P)"Cannot set type of runtime binding %s to %s.\n");
  T235 = YPsig(YPPlist(2,LITREF(lit_279),LITREF(lit_319)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YastYupdate_binding_kind = YPmet(FUNCODEREF(YastYupdate_binding_kind),LITREF(lit_318),T235,ENVNUL,PNUL,YPfalse);
  T236 = YastYupdate_binding_kind;
  VARSET(YastYupdate_binding_kind,T236);
  lit_321 = YPPsym((P)"ast-define-binding");
  lit_322 = YPPsym((P)"name");
  lit_323 = YPPsym((P)"defining-method?");
  lit_324 = YPPsym((P)"kind");
  lit_325 = YPsb((P)"%s: warning: '%s' clobbers binding from %s.\n");
  T237 = YPsig(YPPlist(4,LITREF(lit_281),LITREF(lit_322),LITREF(lit_323),LITREF(lit_324)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_ast_define_binding_266 = YPmet(FUNCODEREF(fun_ast_define_binding_266),LITREF(lit_321),T237,ENVNUL,PNUL,YPfalse);
  T240 = BOUNDP(YastYast_define_binding);
  if (T240 != YPfalse) {
    T239 = VARREF(YastYast_define_binding);
  } else {
    T239 = YPfalse;
  }
  T241 = fun_ast_define_binding_266;
  T238 = CALL2(1,VARREF(YPdefine_method),T239,T241);
  VARSET(YastYast_define_binding,T238);
  VARSET(YastYTmacro_tracingQT,YPfalse);
  lit_326 = YPPsym((P)"objectify-definition");
  lit_327 = YPPsym((P)"var");
  T242 = YPsig(YPPlist(3,LITREF(lit_327),LITREF(lit_139),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_definition_267 = YPmet(FUNCODEREF(fun_objectify_definition_267),LITREF(lit_326),T242,ENVNUL,PNUL,YPfalse);
  T245 = BOUNDP(YastYobjectify_definition);
  if (T245 != YPfalse) {
    T244 = VARREF(YastYobjectify_definition);
  } else {
    T244 = YPfalse;
  }
  T246 = fun_objectify_definition_267;
  T243 = CALL2(1,VARREF(YPdefine_method),T244,T246);
  VARSET(YastYobjectify_definition,T243);
  lit_328 = YPPsym((P)"%%macro");
  lit_329 = YPPsym((P)"modname");
  lit_330 = YPPsym((P)"expander");
  lit_331 = YPPsym((P)"env-or-false");
  lit_332 = YPPsym((P)"expand");
  lit_333 = YPsb((P)"MACRO ");
  lit_334 = YPsb((P)"\n");
  lit_335 = YPsb((P)"  => ");
  lit_336 = YPsb((P)"\n");
  T248 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_268 = YPmet(FUNCODEREF(fun_expand_268),LITREF(lit_332),T248,ENVNUL,PNUL,YPfalse);
  T247 = YPsig(YPPlist(4,LITREF(lit_329),LITREF(lit_322),LITREF(lit_330),LITREF(lit_331)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YastYLmodule_bindingG),Ynil);
  YPPmacro = YPmet(FUNCODEREF(YPPmacro),LITREF(lit_328),T247,ENVNUL,PNUL,YPfalse);
  T249 = YPPmacro;
  VARSET(YPPmacro,T249);
  lit_337 = YPPsym((P)"objectify-syntax-definition");
  T250 = YPsig(YPPlist(4,LITREF(lit_322),LITREF(lit_139),LITREF(lit_281),LITREF(lit_293)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_syntax_definition_270 = YPmet(FUNCODEREF(fun_objectify_syntax_definition_270),LITREF(lit_337),T250,ENVNUL,PNUL,YPfalse);
  T253 = BOUNDP(YastYobjectify_syntax_definition);
  if (T253 != YPfalse) {
    T252 = VARREF(YastYobjectify_syntax_definition);
  } else {
    T252 = YPfalse;
  }
  T254 = fun_objectify_syntax_definition_270;
  T251 = CALL2(1,VARREF(YPdefine_method),T252,T254);
  VARSET(YastYobjectify_syntax_definition,T251);
  lit_338 = YPPsym((P)"objectify-function-definition");
  T255 = YPsig(YPPlist(3,LITREF(lit_322),LITREF(lit_139),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YastYLast_function_definitionG),Ynil);
  fun_objectify_function_definition_271 = YPmet(FUNCODEREF(fun_objectify_function_definition_271),LITREF(lit_338),T255,ENVNUL,PNUL,YPfalse);
  T258 = BOUNDP(YastYobjectify_function_definition);
  if (T258 != YPfalse) {
    T257 = VARREF(YastYobjectify_function_definition);
  } else {
    T257 = YPfalse;
  }
  T259 = fun_objectify_function_definition_271;
  T256 = CALL2(1,VARREF(YPdefine_method),T257,T259);
  VARSET(YastYobjectify_function_definition,T256);
  lit_339 = YPPsym((P)"module-binding");
  T260 = YPsig(YPPlist(1,LITREF(lit_324)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YastYLmodule_bindingG),Ynil);
  YastYmodule_binding = YPmet(FUNCODEREF(YastYmodule_binding),LITREF(lit_339),T260,ENVNUL,PNUL,YPfalse);
  T261 = YastYmodule_binding;
  VARSET(YastYmodule_binding,T261);
  lit_340 = YPPsym((P)"objectify-primitive-definition");
  lit_341 = YPPsym((P)"sig");
  lit_342 = YPPsym((P)"body");
  lit_343 = YPPsym((P)"predefined");
  T262 = YPsig(YPPlist(4,LITREF(lit_322),LITREF(lit_341),LITREF(lit_342),LITREF(lit_281)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YastYLast_primitive_definitionG),Ynil);
  fun_objectify_primitive_definition_273 = YPmet(FUNCODEREF(fun_objectify_primitive_definition_273),LITREF(lit_340),T262,ENVNUL,PNUL,YPfalse);
  T265 = BOUNDP(YastYobjectify_primitive_definition);
  if (T265 != YPfalse) {
    T264 = VARREF(YastYobjectify_primitive_definition);
  } else {
    T264 = YPfalse;
  }
  T266 = fun_objectify_primitive_definition_273;
  T263 = CALL2(1,VARREF(YPdefine_method),T264,T266);
  VARSET(YastYobjectify_primitive_definition,T263);
  lit_344 = YPPsym((P)"objectify-generic-definition");
  T267 = YPsig(YPPlist(3,LITREF(lit_322),LITREF(lit_341),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YastYLast_generic_definitionG),Ynil);
  fun_objectify_generic_definition_274 = YPmet(FUNCODEREF(fun_objectify_generic_definition_274),LITREF(lit_344),T267,ENVNUL,PNUL,YPfalse);
  T270 = BOUNDP(YastYobjectify_generic_definition);
  if (T270 != YPfalse) {
    T269 = VARREF(YastYobjectify_generic_definition);
  } else {
    T269 = YPfalse;
  }
  T271 = fun_objectify_generic_definition_274;
  T268 = CALL2(1,VARREF(YPdefine_method),T269,T271);
  VARSET(YastYobjectify_generic_definition,T268);
  lit_345 = YPPsym((P)"objectify-method-definition");
  lit_346 = YPPsym((P)"if");
  lit_347 = YPPsym((P)"bound?");
  lit_348 = YPPsym((P)"%define-method");
  T274 = YPsig(YPPlist(3,LITREF(lit_322),LITREF(lit_139),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YastYLast_method_definitionG),Ynil);
  T273 = fun_objectify_method_definition_275 = YPmet(FUNCODEREF(fun_objectify_method_definition_275),LITREF(lit_345),T274,ENVNUL,PNUL,YPfalse);
  T278 = BOUNDP(YastYobjectify_method_definition);
  if (T278 != YPfalse) {
    T277 = VARREF(YastYobjectify_method_definition);
  } else {
    T277 = YPfalse;
  }
  T279 = fun_objectify_method_definition_275;
  T276 = CALL2(1,VARREF(YPdefine_method),T277,T279);
  T275 = VARSET(YastYobjectify_method_definition,T276);
  T272 = T275;
  return T272;
}

P YastY___main_6___() {
  P T285,T284,T283,T282,T281,T280,T279,T278,T277,T276,T275,T274,T273,T272,T271,T270;
  P T269,T268,T267,T266,T265,T264,T263,T262,T261,T260,T259,T258,T257,T256,T255,T254;
  P T253,T252,T251,T250,T249,T248,T247,T246,T245,T244,T243,T242,T241,T240,T239,T238;
  P T237,T236,T235,T234,T233,T232,T231,T230,T229,T228,T227,T226,T225,T224,T223,T222;
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
  VARSET(YastYTrecord_sourceQT,YPfalse);
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
  T0 = YPsig(YPPlist(3,LITREF(lit_341),LITREF(lit_342),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YastYLconstantG),Ynil);
  fun_objectify_function_source_280 = YPmet(FUNCODEREF(fun_objectify_function_source_280),LITREF(lit_349),T0,ENVNUL,PNUL,YPfalse);
  T7 = BOUNDP(YastYobjectify_function_source);
  if (T7 != YPfalse) {
    T6 = VARREF(YastYobjectify_function_source);
  } else {
    T6 = YPfalse;
  }
  T8 = fun_objectify_function_source_280;
  T5 = CALL2(1,VARREF(YPdefine_method),T6,T8);
  VARSET(YastYobjectify_function_source,T5);
  lit_351 = YPPsym((P)"objectify-function");
  T11 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_281 = YPmet(FUNCODEREF(fun_281),YPfalse,T11,ENVNUL,PNUL,YPfalse);
  T10 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_282 = YPmet(FUNCODEREF(fun_282),YPfalse,T10,ENVNUL,PNUL,YPfalse);
  T9 = YPsig(YPPlist(4,LITREF(lit_341),LITREF(lit_342),LITREF(lit_281),LITREF(lit_282)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YastYLast_methodG),Ynil);
  fun_objectify_function_283 = YPmet(FUNCODEREF(fun_objectify_function_283),LITREF(lit_351),T9,ENVNUL,PNUL,YPfalse);
  T14 = BOUNDP(YastYobjectify_function);
  if (T14 != YPfalse) {
    T13 = VARREF(YastYobjectify_function);
  } else {
    T13 = YPfalse;
  }
  T15 = fun_objectify_function_283;
  T12 = CALL2(1,VARREF(YPdefine_method),T13,T15);
  VARSET(YastYobjectify_function,T12);
  lit_352 = YPPsym((P)"...");
  VARSET(YastYDsexpr_optionals_tag,LITREF(lit_352));
  lit_353 = YPPsym((P)"<opts>");
  VARSET(YastYDsexpr_optionals_type_name,LITREF(lit_353));
  lit_354 = YPPsym((P)"objectify-signature");
  lit_355 = YPPsym((P)"col");
  lit_356 = YPPsym((P)"params");
  lit_357 = YPPsym((P)"nary?");
  lit_358 = YPPsym((P)"bindings");
  lit_359 = YPPsym((P)"names");
  lit_360 = YPPsym((P)"types");
  T17 = YPsig(YPPlist(5,LITREF(lit_356),LITREF(lit_357),LITREF(lit_358),LITREF(lit_359),LITREF(lit_360)),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_col_284 = YPmet(FUNCODEREF(fun_col_284),LITREF(lit_355),T17,ENVNUL,PNUL,YPfalse);
  T16 = YPsig(YPPlist(2,LITREF(lit_341),LITREF(lit_281)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YastYLast_signatureG),Ynil);
  fun_objectify_signature_285 = YPmet(FUNCODEREF(fun_objectify_signature_285),LITREF(lit_354),T16,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YastYobjectify_signature);
  if (T20 != YPfalse) {
    T19 = VARREF(YastYobjectify_signature);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_objectify_signature_285;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YastYobjectify_signature,T18);
  lit_361 = YPPsym((P)"compute-local-reference-offsets");
  lit_362 = YPPsym((P)"i");
  lit_363 = YPPsym((P)"find");
  lit_364 = YPPsym((P)"j");
  lit_365 = YPsb((P)"DIDN'T FIND LOCAL BINDING %= IN %=");
  T24 = YPsig(YPPlist(2,LITREF(lit_364),LITREF(lit_358)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_286 = YPmet(FUNCODEREF(fun_find_286),LITREF(lit_363),T24,ENVNUL,PNUL,YPfalse);
  T23 = YPsig(YPPlist(2,LITREF(lit_362),LITREF(lit_281)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_287 = YPmet(FUNCODEREF(fun_loop_287),LITREF(lit_140),T23,ENVNUL,PNUL,YPfalse);
  T22 = YPsig(YPPlist(2,LITREF(lit_279),LITREF(lit_281)),YPPlist(2,VARREF(YastYLlocal_bindingG),VARREF(YastYLstatic_local_environmentG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  fun_compute_local_reference_offsets_288 = YPmet(FUNCODEREF(fun_compute_local_reference_offsets_288),LITREF(lit_361),T22,ENVNUL,PNUL,YPfalse);
  T27 = BOUNDP(YastYcompute_local_reference_offsets);
  if (T27 != YPfalse) {
    T26 = VARREF(YastYcompute_local_reference_offsets);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_compute_local_reference_offsets_288;
  T25 = CALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(YastYcompute_local_reference_offsets,T25);
  lit_366 = YPPsym((P)"objectify-binding");
  lit_367 = YPPsym((P)"n");
  lit_368 = YPPsym((P)"b");
  T29 = YPsig(YPPlist(3,LITREF(lit_367),LITREF(lit_368),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YastYLlocal_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YastYLlocal_referenceG),Ynil);
  fun_objectify_binding_289 = YPmet(FUNCODEREF(fun_objectify_binding_289),LITREF(lit_366),T29,ENVNUL,PNUL,YPfalse);
  T32 = BOUNDP(YastYobjectify_binding);
  if (T32 != YPfalse) {
    T31 = VARREF(YastYobjectify_binding);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_objectify_binding_289;
  T30 = CALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(YastYobjectify_binding,T30);
  lit_369 = YPPsym((P)"binding-reference-class");
  lit_370 = YPsb((P)"Unknown binding-kind %=");
  T34 = YPsig(YPPlist(1,LITREF(lit_368)),YPPlist(1,VARREF(YastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_binding_reference_class_290 = YPmet(FUNCODEREF(fun_binding_reference_class_290),LITREF(lit_369),T34,ENVNUL,PNUL,YPfalse);
  T37 = BOUNDP(YastYbinding_reference_class);
  if (T37 != YPfalse) {
    T36 = VARREF(YastYbinding_reference_class);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_binding_reference_class_290;
  T35 = CALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(YastYbinding_reference_class,T35);
  T39 = YPsig(YPPlist(3,LITREF(lit_367),LITREF(lit_368),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_binding_291 = YPmet(FUNCODEREF(fun_objectify_binding_291),LITREF(lit_366),T39,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(YastYobjectify_binding);
  if (T42 != YPfalse) {
    T41 = VARREF(YastYobjectify_binding);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_objectify_binding_291;
  T40 = CALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YastYobjectify_binding,T40);
  T44 = YPsig(YPPlist(3,LITREF(lit_367),LITREF(lit_368),LITREF(lit_281)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YastYLreferenceG),Ynil);
  fun_objectify_binding_292 = YPmet(FUNCODEREF(fun_objectify_binding_292),LITREF(lit_366),T44,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(YastYobjectify_binding);
  if (T47 != YPfalse) {
    T46 = VARREF(YastYobjectify_binding);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_objectify_binding_292;
  T45 = CALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YastYobjectify_binding,T45);
  lit_371 = YPPsym((P)"default-type");
  lit_372 = YPPsym((P)"<any>");
  T49 = YPsig(YPPlist(1,LITREF(lit_281)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_default_type_293 = YPmet(FUNCODEREF(fun_default_type_293),LITREF(lit_371),T49,ENVNUL,PNUL,YPfalse);
  T52 = BOUNDP(YastYdefault_type);
  if (T52 != YPfalse) {
    T51 = VARREF(YastYdefault_type);
  } else {
    T51 = YPfalse;
  }
  T53 = fun_default_type_293;
  T50 = CALL2(1,VARREF(YPdefine_method),T51,T53);
  VARSET(YastYdefault_type,T50);
  lit_373 = YPPsym((P)"objectify-free-global-reference");
  T54 = YPsig(YPPlist(2,LITREF(lit_322),LITREF(lit_281)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YastYLreferenceG),Ynil);
  fun_objectify_free_global_reference_294 = YPmet(FUNCODEREF(fun_objectify_free_global_reference_294),LITREF(lit_373),T54,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(YastYobjectify_free_global_reference);
  if (T57 != YPfalse) {
    T56 = VARREF(YastYobjectify_free_global_reference);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_objectify_free_global_reference_294;
  T55 = CALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YastYobjectify_free_global_reference,T55);
  lit_374 = YPPsym((P)"foreign-name?");
  T59 = YPsig(YPPlist(1,LITREF(lit_322)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YastYforeign_nameQ = YPmet(FUNCODEREF(YastYforeign_nameQ),LITREF(lit_374),T59,ENVNUL,PNUL,YPfalse);
  T60 = YastYforeign_nameQ;
  VARSET(YastYforeign_nameQ,T60);
  lit_375 = YPPsym((P)"objectify-foreign-reference");
  lit_376 = YPsb((P)"Malformed foreign name %s.\n");
  lit_377 = YPsb((P)"No binding %s in %s.\n");
  T61 = YPsig(YPPlist(2,LITREF(lit_322),LITREF(lit_281)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YastYLreferenceG),Ynil);
  fun_objectify_foreign_reference_296 = YPmet(FUNCODEREF(fun_objectify_foreign_reference_296),LITREF(lit_375),T61,ENVNUL,PNUL,YPfalse);
  T64 = BOUNDP(YastYobjectify_foreign_reference);
  if (T64 != YPfalse) {
    T63 = VARREF(YastYobjectify_foreign_reference);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_objectify_foreign_reference_296;
  T62 = CALL2(1,VARREF(YPdefine_method),T63,T65);
  VARSET(YastYobjectify_foreign_reference,T62);
  lit_378 = YPPsym((P)"objectify-symbol");
  T66 = YPsig(YPPlist(2,LITREF(lit_322),LITREF(lit_281)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_objectify_symbol_297 = YPmet(FUNCODEREF(fun_objectify_symbol_297),LITREF(lit_378),T66,ENVNUL,PNUL,YPfalse);
  T69 = BOUNDP(YastYobjectify_symbol);
  if (T69 != YPfalse) {
    T68 = VARREF(YastYobjectify_symbol);
  } else {
    T68 = YPfalse;
  }
  T70 = fun_objectify_symbol_297;
  T67 = CALL2(1,VARREF(YPdefine_method),T68,T70);
  VARSET(YastYobjectify_symbol,T67);
  lit_379 = YPPsym((P)"ftype");
  lit_380 = YPPsym((P)"<fun>");
  T71 = YPsig(YPPlist(1,LITREF(lit_281)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ftype_298 = YPmet(FUNCODEREF(fun_ftype_298),LITREF(lit_379),T71,ENVNUL,PNUL,YPfalse);
  T74 = BOUNDP(YastYftype);
  if (T74 != YPfalse) {
    T73 = VARREF(YastYftype);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_ftype_298;
  T72 = CALL2(1,VARREF(YPdefine_method),T73,T75);
  VARSET(YastYftype,T72);
  lit_381 = YPPsym((P)"<functions>");
  T78 = (P)YPpair(VARREF(YastYLprogramsG),Ynil);
  T77 = (P)YPpair(VARREF(YLlstG),T78);
  T76 = CALL2(1,VARREF(Yfab_class),LITREF(lit_381),T77);
  VARSET(YastYLfunctionsG,T76);
  T79 = CALLN(1,VARREF(Ynew),5,VARREF(YastYLfunctionsG),VARREF(Yhead),YPfalse,VARREF(Ytail),YPfalse);
  VARSET(YastYDfunctions_empty,T79);
  T81 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YastYLfunctionsG));
  T80 = YPsig(YPPlist(2,LITREF(lit_156),LITREF(lit_25)),YPPlist(2,T81,VARREF(YastYLfunctionsG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_as_299 = YPmet(FUNCODEREF(fun_as_299),LITREF(lit_155),T80,ENVNUL,PNUL,YPfalse);
  T84 = BOUNDP(YprotoStypesYas);
  if (T84 != YPfalse) {
    T83 = VARREF(YprotoStypesYas);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_as_299;
  T82 = CALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(YprotoStypesYas,T82);
  T87 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YLlstG));
  T86 = YPsig(YPPlist(2,LITREF(lit_156),LITREF(lit_25)),YPPlist(2,T87,VARREF(YastYLfunctionsG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_as_300 = YPmet(FUNCODEREF(fun_as_300),LITREF(lit_155),T86,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YprotoStypesYas);
  if (T90 != YPfalse) {
    T89 = VARREF(YprotoStypesYas);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_as_300;
  T88 = CALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YprotoStypesYas,T88);
  T93 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YastYLfunctionsG));
  T92 = YPsig(YPPlist(2,LITREF(lit_156),LITREF(lit_25)),YPPlist(2,T93,VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_as_301 = YPmet(FUNCODEREF(fun_as_301),LITREF(lit_155),T92,ENVNUL,PNUL,YPfalse);
  T96 = BOUNDP(YprotoStypesYas);
  if (T96 != YPfalse) {
    T95 = VARREF(YprotoStypesYas);
  } else {
    T95 = YPfalse;
  }
  T97 = fun_as_301;
  T94 = CALL2(1,VARREF(YPdefine_method),T95,T97);
  VARSET(YprotoStypesYas,T94);
  lit_382 = YPPsym((P)"functions");
  T98 = YPsig(YPPlist(2,LITREF(lit_162),LITREF(lit_163)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YastYfunctions = YPmet(FUNCODEREF(YastYfunctions),LITREF(lit_382),T98,ENVNUL,PNUL,YPfalse);
  T99 = YastYfunctions;
  VARSET(YastYfunctions,T99);
  T101 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YastYLfunctionsG));
  T100 = YPsig(YPPlist(1,LITREF(lit_139)),YPPlist(1,T101),YPfalse,YPint((P)1),VARREF(YastYLfunctionsG),Ynil);
  fun_empty_303 = YPmet(FUNCODEREF(fun_empty_303),LITREF(lit_164),T100,ENVNUL,PNUL,YPfalse);
  T104 = BOUNDP(YprotoScollectionsScollectionYempty);
  if (T104 != YPfalse) {
    T103 = VARREF(YprotoScollectionsScollectionYempty);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_empty_303;
  T102 = CALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(YprotoScollectionsScollectionYempty,T102);
  lit_383 = YPPsym((P)"objectify-locals");
  lit_384 = YPPsym((P)"sigs");
  lit_385 = YPPsym((P)"bodies");
  T108 = YPsig(YPPlist(1,LITREF(lit_367)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_304 = YPmet(FUNCODEREF(fun_304),YPfalse,T108,ENVNUL,PNUL,YPfalse);
  T107 = YPsig(YPPlist(2,LITREF(lit_129),LITREF(lit_368)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_305 = YPmet(FUNCODEREF(fun_305),YPfalse,T107,ENVNUL,PNUL,YPfalse);
  T106 = YPsig(YPPlist(6,LITREF(lit_359),LITREF(lit_384),LITREF(lit_385),LITREF(lit_342),LITREF(lit_281),LITREF(lit_282)),YPPlist(6,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)6),VARREF(YastYLlocalsG),Ynil);
  fun_objectify_locals_306 = YPmet(FUNCODEREF(fun_objectify_locals_306),LITREF(lit_383),T106,ENVNUL,PNUL,YPfalse);
  T111 = BOUNDP(YastYobjectify_locals);
  if (T111 != YPfalse) {
    T110 = VARREF(YastYobjectify_locals);
  } else {
    T110 = YPfalse;
  }
  T112 = fun_objectify_locals_306;
  T109 = CALL2(1,VARREF(YPdefine_method),T110,T112);
  VARSET(YastYobjectify_locals,T109);
  lit_386 = YPPsym((P)"objectify-bind-exit");
  T113 = YPsig(YPPlist(4,LITREF(lit_322),LITREF(lit_342),LITREF(lit_281),LITREF(lit_282)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YastYLbind_exitG),Ynil);
  fun_objectify_bind_exit_307 = YPmet(FUNCODEREF(fun_objectify_bind_exit_307),LITREF(lit_386),T113,ENVNUL,PNUL,YPfalse);
  T116 = BOUNDP(YastYobjectify_bind_exit);
  if (T116 != YPfalse) {
    T115 = VARREF(YastYobjectify_bind_exit);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_objectify_bind_exit_307;
  T114 = CALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(YastYobjectify_bind_exit,T114);
  lit_387 = YPPsym((P)"objectify-unwind-protect");
  lit_388 = YPPsym((P)"protected-form");
  lit_389 = YPPsym((P)"cleanup-forms");
  T118 = YPsig(YPPlist(4,LITREF(lit_388),LITREF(lit_389),LITREF(lit_281),LITREF(lit_282)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YastYLunwind_protectG),Ynil);
  fun_objectify_unwind_protect_308 = YPmet(FUNCODEREF(fun_objectify_unwind_protect_308),LITREF(lit_387),T118,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(YastYobjectify_unwind_protect);
  if (T121 != YPfalse) {
    T120 = VARREF(YastYobjectify_unwind_protect);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_objectify_unwind_protect_308;
  T119 = CALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(YastYobjectify_unwind_protect,T119);
  lit_390 = YPPsym((P)"objectify-monitor");
  lit_391 = YPPsym((P)"type");
  lit_392 = YPPsym((P)"info");
  lit_393 = YPPsym((P)"test");
  lit_394 = YPPsym((P)"handler");
  T123 = YPsig(YPPlist(7,LITREF(lit_391),LITREF(lit_392),LITREF(lit_393),LITREF(lit_394),LITREF(lit_342),LITREF(lit_281),LITREF(lit_282)),YPPlist(7,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)7),VARREF(YastYLmonitorG),Ynil);
  fun_objectify_monitor_309 = YPmet(FUNCODEREF(fun_objectify_monitor_309),LITREF(lit_390),T123,ENVNUL,PNUL,YPfalse);
  T126 = BOUNDP(YastYobjectify_monitor);
  if (T126 != YPfalse) {
    T125 = VARREF(YastYobjectify_monitor);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_objectify_monitor_309;
  T124 = CALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(YastYobjectify_monitor,T124);
  lit_395 = YPPsym((P)"objectify-export");
  lit_396 = YPsb((P)"Can only export bindings from target environment.\n");
  lit_397 = YPPsym((P)"exit");
  lit_398 = YPsb((P)"Continue without exporting %s");
  lit_399 = YPsb((P)"Can't export undefined binding %s.\n");
  T133 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_310 = YPmet(FUNCODEREF(fun_310),YPfalse,T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(YPPlist(2,LITREF(lit_295),LITREF(lit_281)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_311 = YPmet(FUNCODEREF(fun_311),YPfalse,T132,ENVNUL,PNUL,YPfalse);
  T131 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_312 = YPmet(FUNCODEREF(fun_312),YPfalse,T131,ENVNUL,PNUL,YPfalse);
  T130 = YPsig(YPPlist(1,LITREF(lit_397)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_313 = YPmet(FUNCODEREF(fun_313),YPfalse,T130,ENVNUL,PNUL,YPfalse);
  T129 = YPsig(YPPlist(1,LITREF(lit_322)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_314 = YPmet(FUNCODEREF(fun_314),YPfalse,T129,ENVNUL,PNUL,YPfalse);
  T128 = YPsig(YPPlist(3,LITREF(lit_359),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YastYLprogramG),Ynil);
  fun_objectify_export_315 = YPmet(FUNCODEREF(fun_objectify_export_315),LITREF(lit_395),T128,ENVNUL,PNUL,YPfalse);
  T136 = BOUNDP(YastYobjectify_export);
  if (T136 != YPfalse) {
    T135 = VARREF(YastYobjectify_export);
  } else {
    T135 = YPfalse;
  }
  T137 = fun_objectify_export_315;
  T134 = CALL2(1,VARREF(YPdefine_method),T135,T137);
  VARSET(YastYobjectify_export,T134);
  lit_400 = YPPsym((P)"import-global!");
  lit_401 = YPPsym((P)"env");
  lit_402 = YPsb((P)"warning: '%s' from %s clobbers local binding.\n");
  T138 = YPsig(YPPlist(2,LITREF(lit_368),LITREF(lit_401)),YPPlist(2,VARREF(YastYLmodule_bindingG),VARREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YastYimport_globalX = YPmet(FUNCODEREF(YastYimport_globalX),LITREF(lit_400),T138,ENVNUL,PNUL,YPfalse);
  T139 = YastYimport_globalX;
  VARSET(YastYimport_globalX,T139);
  lit_403 = YPPsym((P)"objectify-use/export-module");
  T141 = YPsig(YPPlist(1,LITREF(lit_368)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_317 = YPmet(FUNCODEREF(fun_317),YPfalse,T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(YPPlist(3,LITREF(lit_322),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YastYLprogramG),Ynil);
  fun_objectify_useSexport_module_318 = YPmet(FUNCODEREF(fun_objectify_useSexport_module_318),LITREF(lit_403),T140,ENVNUL,PNUL,YPfalse);
  T144 = BOUNDP(YastYobjectify_useSexport_module);
  if (T144 != YPfalse) {
    T143 = VARREF(YastYobjectify_useSexport_module);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_objectify_useSexport_module_318;
  T142 = CALL2(1,VARREF(YPdefine_method),T143,T145);
  VARSET(YastYobjectify_useSexport_module,T142);
  lit_404 = YPPsym((P)"objectify-use-module");
  T147 = YPsig(YPPlist(1,LITREF(lit_368)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_319 = YPmet(FUNCODEREF(fun_319),YPfalse,T147,ENVNUL,PNUL,YPfalse);
  T146 = YPsig(YPPlist(3,LITREF(lit_322),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YastYLprogramG),Ynil);
  fun_objectify_use_module_320 = YPmet(FUNCODEREF(fun_objectify_use_module_320),LITREF(lit_404),T146,ENVNUL,PNUL,YPfalse);
  T150 = BOUNDP(YastYobjectify_use_module);
  if (T150 != YPfalse) {
    T149 = VARREF(YastYobjectify_use_module);
  } else {
    T149 = YPfalse;
  }
  T151 = fun_objectify_use_module_320;
  T148 = CALL2(1,VARREF(YPdefine_method),T149,T151);
  VARSET(YastYobjectify_use_module,T148);
  lit_405 = YPPsym((P)"expand-bind-list");
  lit_406 = YPPsym((P)"pat");
  lit_407 = YPPsym((P)"fail");
  lit_408 = YPsb((P)"Expected Pattern List %=\n");
  T152 = YPsig(YPPlist(3,LITREF(lit_406),LITREF(lit_327),LITREF(lit_407)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_list_321 = YPmet(FUNCODEREF(fun_expand_bind_list_321),LITREF(lit_405),T152,ENVNUL,PNUL,YPfalse);
  T155 = BOUNDP(YastYexpand_bind_list);
  if (T155 != YPfalse) {
    T154 = VARREF(YastYexpand_bind_list);
  } else {
    T154 = YPfalse;
  }
  T156 = fun_expand_bind_list_321;
  T153 = CALL2(1,VARREF(YPdefine_method),T154,T156);
  VARSET(YastYexpand_bind_list,T153);
  lit_409 = YPPsym((P)"match-empty-list");
  T158 = CALL1(1,VARREF(YprotoStypesYtE),Ynil);
  T157 = YPsig(YPPlist(3,LITREF(lit_406),LITREF(lit_327),LITREF(lit_407)),YPPlist(3,T158,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_expand_bind_list_322 = YPmet(FUNCODEREF(fun_expand_bind_list_322),LITREF(lit_405),T157,ENVNUL,PNUL,YPfalse);
  T161 = BOUNDP(YastYexpand_bind_list);
  if (T161 != YPfalse) {
    T160 = VARREF(YastYexpand_bind_list);
  } else {
    T160 = YPfalse;
  }
  T162 = fun_expand_bind_list_322;
  T159 = CALL2(1,VARREF(YPdefine_method),T160,T162);
  VARSET(YastYexpand_bind_list,T159);
  lit_410 = YPsb((P)"Unquote Unexpected Here %=\n");
  lit_411 = YPsb((P)"Unquote Splicing Unexpected Here %=\n");
  T163 = YPsig(YPPlist(3,LITREF(lit_406),LITREF(lit_327),LITREF(lit_407)),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_expand_bind_list_323 = YPmet(FUNCODEREF(fun_expand_bind_list_323),LITREF(lit_405),T163,ENVNUL,PNUL,YPfalse);
  T166 = BOUNDP(YastYexpand_bind_list);
  if (T166 != YPfalse) {
    T165 = VARREF(YastYexpand_bind_list);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_expand_bind_list_323;
  T164 = CALL2(1,VARREF(YPdefine_method),T165,T167);
  VARSET(YastYexpand_bind_list,T164);
  lit_412 = YPPsym((P)"expand-bind-list*");
  T169 = CALL1(1,VARREF(YprotoStypesYtE),Ynil);
  T168 = YPsig(YPPlist(3,LITREF(lit_406),LITREF(lit_327),LITREF(lit_407)),YPPlist(3,T169,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_listT_324 = YPmet(FUNCODEREF(fun_expand_bind_listT_324),LITREF(lit_412),T168,ENVNUL,PNUL,YPfalse);
  T172 = BOUNDP(YastYexpand_bind_listT);
  if (T172 != YPfalse) {
    T171 = VARREF(YastYexpand_bind_listT);
  } else {
    T171 = YPfalse;
  }
  T173 = fun_expand_bind_listT_324;
  T170 = CALL2(1,VARREF(YPdefine_method),T171,T173);
  VARSET(YastYexpand_bind_listT,T170);
  T174 = YPsig(YPPlist(3,LITREF(lit_406),LITREF(lit_327),LITREF(lit_407)),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_listT_325 = YPmet(FUNCODEREF(fun_expand_bind_listT_325),LITREF(lit_412),T174,ENVNUL,PNUL,YPfalse);
  T177 = BOUNDP(YastYexpand_bind_listT);
  if (T177 != YPfalse) {
    T176 = VARREF(YastYexpand_bind_listT);
  } else {
    T176 = YPfalse;
  }
  T178 = fun_expand_bind_listT_325;
  T175 = CALL2(1,VARREF(YPdefine_method),T176,T178);
  VARSET(YastYexpand_bind_listT,T175);
  lit_413 = YPPsym((P)"expand-bind-element");
  lit_414 = YPPsym((P)"match-atom");
  T179 = YPsig(YPPlist(3,LITREF(lit_406),LITREF(lit_327),LITREF(lit_407)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_element_326 = YPmet(FUNCODEREF(fun_expand_bind_element_326),LITREF(lit_413),T179,ENVNUL,PNUL,YPfalse);
  T182 = BOUNDP(YastYexpand_bind_element);
  if (T182 != YPfalse) {
    T181 = VARREF(YastYexpand_bind_element);
  } else {
    T181 = YPfalse;
  }
  T183 = fun_expand_bind_element_326;
  T180 = CALL2(1,VARREF(YPdefine_method),T181,T183);
  VARSET(YastYexpand_bind_element,T180);
  lit_415 = YPPsym((P)"match-unquote");
  lit_416 = YPPsym((P)"match-sublist");
  T184 = YPsig(YPPlist(3,LITREF(lit_406),LITREF(lit_327),LITREF(lit_407)),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_element_327 = YPmet(FUNCODEREF(fun_expand_bind_element_327),LITREF(lit_413),T184,ENVNUL,PNUL,YPfalse);
  T187 = BOUNDP(YastYexpand_bind_element);
  if (T187 != YPfalse) {
    T186 = VARREF(YastYexpand_bind_element);
  } else {
    T186 = YPfalse;
  }
  T188 = fun_expand_bind_element_327;
  T185 = CALL2(1,VARREF(YPdefine_method),T186,T188);
  VARSET(YastYexpand_bind_element,T185);
  lit_417 = YPPsym((P)"expand-pattern");
  lit_418 = YPPsym((P)"isa?");
  lit_419 = YPsb((P)"Match Pattern Failure");
  T189 = YPsig(YPPlist(3,LITREF(lit_406),LITREF(lit_327),LITREF(lit_407)),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_pattern_328 = YPmet(FUNCODEREF(fun_expand_pattern_328),LITREF(lit_417),T189,ENVNUL,PNUL,YPfalse);
  T192 = BOUNDP(YastYexpand_pattern);
  if (T192 != YPfalse) {
    T191 = VARREF(YastYexpand_pattern);
  } else {
    T191 = YPfalse;
  }
  T193 = fun_expand_pattern_328;
  T190 = CALL2(1,VARREF(YPdefine_method),T191,T193);
  VARSET(YastYexpand_pattern,T190);
  lit_420 = YPPsym((P)"expand-syntax-if");
  lit_421 = YPPsym((P)"esc");
  lit_422 = YPPsym((P)"loc");
  lit_423 = YPPsym((P)"<str>");
  T195 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_329 = YPmet(FUNCODEREF(fun_329),YPfalse,T195,ENVNUL,PNUL,YPfalse);
  T194 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_expand_syntax_if_330 = YPmet(FUNCODEREF(fun_expand_syntax_if_330),LITREF(lit_420),T194,ENVNUL,PNUL,YPfalse);
  T198 = BOUNDP(YastYexpand_syntax_if);
  if (T198 != YPfalse) {
    T197 = VARREF(YastYexpand_syntax_if);
  } else {
    T197 = YPfalse;
  }
  T199 = fun_expand_syntax_if_330;
  T196 = CALL2(1,VARREF(YPdefine_method),T197,T199);
  VARSET(YastYexpand_syntax_if,T196);
  lit_424 = YPPsym((P)"r-extend*");
  T200 = YPsig(YPPlist(2,LITREF(lit_281),LITREF(lit_358)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YastYLstatic_environmentG),Ynil);
  fun_r_extendT_331 = YPmet(FUNCODEREF(fun_r_extendT_331),LITREF(lit_424),T200,ENVNUL,PNUL,YPfalse);
  T203 = BOUNDP(YastYr_extendT);
  if (T203 != YPfalse) {
    T202 = VARREF(YastYr_extendT);
  } else {
    T202 = YPfalse;
  }
  T204 = fun_r_extendT_331;
  T201 = CALL2(1,VARREF(YPdefine_method),T202,T204);
  VARSET(YastYr_extendT,T201);
  lit_425 = YPPsym((P)"insert-global!");
  T205 = YPsig(YPPlist(2,LITREF(lit_279),LITREF(lit_281)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_globalX_332 = YPmet(FUNCODEREF(fun_insert_globalX_332),LITREF(lit_425),T205,ENVNUL,PNUL,YPfalse);
  T208 = BOUNDP(YastYinsert_globalX);
  if (T208 != YPfalse) {
    T207 = VARREF(YastYinsert_globalX);
  } else {
    T207 = YPfalse;
  }
  T209 = fun_insert_globalX_332;
  T206 = CALL2(1,VARREF(YPdefine_method),T207,T209);
  VARSET(YastYinsert_globalX,T206);
  lit_426 = YPPsym((P)"insert-globals!");
  T211 = YPsig(YPPlist(1,LITREF(lit_368)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_333 = YPmet(FUNCODEREF(fun_333),YPfalse,T211,ENVNUL,PNUL,YPfalse);
  T210 = YPsig(YPPlist(2,LITREF(lit_358),LITREF(lit_281)),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_globalsX_334 = YPmet(FUNCODEREF(fun_insert_globalsX_334),LITREF(lit_426),T210,ENVNUL,PNUL,YPfalse);
  T214 = BOUNDP(YastYinsert_globalsX);
  if (T214 != YPfalse) {
    T213 = VARREF(YastYinsert_globalsX);
  } else {
    T213 = YPfalse;
  }
  T215 = fun_insert_globalsX_334;
  T212 = CALL2(1,VARREF(YPdefine_method),T213,T215);
  VARSET(YastYinsert_globalsX,T212);
  lit_427 = YPPsym((P)"find-static-global-environment");
  T216 = YPsig(YPPlist(1,LITREF(lit_281)),YPPlist(1,VARREF(YastYLstatic_local_environmentG)),YPfalse,YPint((P)1),VARREF(YastYLstatic_global_environmentG),Ynil);
  fun_find_static_global_environment_335 = YPmet(FUNCODEREF(fun_find_static_global_environment_335),LITREF(lit_427),T216,ENVNUL,PNUL,YPfalse);
  T219 = BOUNDP(YastYfind_static_global_environment);
  if (T219 != YPfalse) {
    T218 = VARREF(YastYfind_static_global_environment);
  } else {
    T218 = YPfalse;
  }
  T220 = fun_find_static_global_environment_335;
  T217 = CALL2(1,VARREF(YPdefine_method),T218,T220);
  VARSET(YastYfind_static_global_environment,T217);
  T221 = YPsig(YPPlist(1,LITREF(lit_281)),YPPlist(1,VARREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YastYLstatic_global_environmentG),Ynil);
  fun_find_static_global_environment_336 = YPmet(FUNCODEREF(fun_find_static_global_environment_336),LITREF(lit_427),T221,ENVNUL,PNUL,YPfalse);
  T224 = BOUNDP(YastYfind_static_global_environment);
  if (T224 != YPfalse) {
    T223 = VARREF(YastYfind_static_global_environment);
  } else {
    T223 = YPfalse;
  }
  T225 = fun_find_static_global_environment_336;
  T222 = CALL2(1,VARREF(YPdefine_method),T223,T225);
  VARSET(YastYfind_static_global_environment,T222);
  lit_428 = YPPsym((P)"find-syntax-environment");
  T226 = YPsig(YPPlist(1,LITREF(lit_281)),YPPlist(1,VARREF(YastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YastYLstatic_global_environmentG),Ynil);
  fun_find_syntax_environment_337 = YPmet(FUNCODEREF(fun_find_syntax_environment_337),LITREF(lit_428),T226,ENVNUL,PNUL,YPfalse);
  T229 = BOUNDP(YastYfind_syntax_environment);
  if (T229 != YPfalse) {
    T228 = VARREF(YastYfind_syntax_environment);
  } else {
    T228 = YPfalse;
  }
  T230 = fun_find_syntax_environment_337;
  T227 = CALL2(1,VARREF(YPdefine_method),T228,T230);
  VARSET(YastYfind_syntax_environment,T227);
  lit_429 = YPPsym((P)"find-environment-module");
  T231 = YPsig(YPPlist(1,LITREF(lit_281)),YPPlist(1,VARREF(YastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_find_environment_module_338 = YPmet(FUNCODEREF(fun_find_environment_module_338),LITREF(lit_429),T231,ENVNUL,PNUL,YPfalse);
  T234 = BOUNDP(YastYfind_environment_module);
  if (T234 != YPfalse) {
    T233 = VARREF(YastYfind_environment_module);
  } else {
    T233 = YPfalse;
  }
  T235 = fun_find_environment_module_338;
  T232 = CALL2(1,VARREF(YPdefine_method),T233,T235);
  VARSET(YastYfind_environment_module,T232);
  lit_430 = YPPsym((P)"find-binding");
  T237 = YPsig(YPPlist(1,LITREF(lit_358)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_339 = YPmet(FUNCODEREF(fun_loop_339),LITREF(lit_140),T237,ENVNUL,PNUL,YPfalse);
  T236 = YPsig(YPPlist(2,LITREF(lit_322),LITREF(lit_281)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLstatic_local_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_340 = YPmet(FUNCODEREF(fun_find_binding_340),LITREF(lit_430),T236,ENVNUL,PNUL,YPfalse);
  T240 = BOUNDP(YastYfind_binding);
  if (T240 != YPfalse) {
    T239 = VARREF(YastYfind_binding);
  } else {
    T239 = YPfalse;
  }
  T241 = fun_find_binding_340;
  T238 = CALL2(1,VARREF(YPdefine_method),T239,T241);
  VARSET(YastYfind_binding,T238);
  T242 = YPsig(YPPlist(2,LITREF(lit_322),LITREF(lit_281)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLstatic_empty_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_341 = YPmet(FUNCODEREF(fun_find_binding_341),LITREF(lit_430),T242,ENVNUL,PNUL,YPfalse);
  T245 = BOUNDP(YastYfind_binding);
  if (T245 != YPfalse) {
    T244 = VARREF(YastYfind_binding);
  } else {
    T244 = YPfalse;
  }
  T246 = fun_find_binding_341;
  T243 = CALL2(1,VARREF(YPdefine_method),T244,T246);
  VARSET(YastYfind_binding,T243);
  T247 = YPsig(YPPlist(2,LITREF(lit_322),LITREF(lit_281)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_342 = YPmet(FUNCODEREF(fun_find_binding_342),LITREF(lit_430),T247,ENVNUL,PNUL,YPfalse);
  T250 = BOUNDP(YastYfind_binding);
  if (T250 != YPfalse) {
    T249 = VARREF(YastYfind_binding);
  } else {
    T249 = YPfalse;
  }
  T251 = fun_find_binding_342;
  T248 = CALL2(1,VARREF(YPdefine_method),T249,T251);
  VARSET(YastYfind_binding,T248);
  lit_431 = YPPsym((P)"frame-bindings");
  T252 = YPsig(YPPlist(1,LITREF(lit_401)),YPPlist(1,VARREF(YastYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_frame_bindings_343 = YPmet(FUNCODEREF(fun_frame_bindings_343),LITREF(lit_431),T252,ENVNUL,PNUL,YPfalse);
  T255 = BOUNDP(YastYframe_bindings);
  if (T255 != YPfalse) {
    T254 = VARREF(YastYframe_bindings);
  } else {
    T254 = YPfalse;
  }
  T256 = fun_frame_bindings_343;
  T253 = CALL2(1,VARREF(YPdefine_method),T254,T256);
  VARSET(YastYframe_bindings,T253);
  VARSET(YastYTmagic_bindingsT,Ynil);
  lit_432 = YPPsym((P)"register-magic-binding");
  T257 = YPsig(YPPlist(2,LITREF(lit_322),LITREF(lit_288)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_register_magic_binding_344 = YPmet(FUNCODEREF(fun_register_magic_binding_344),LITREF(lit_432),T257,ENVNUL,PNUL,YPfalse);
  T260 = BOUNDP(YastYregister_magic_binding);
  if (T260 != YPfalse) {
    T259 = VARREF(YastYregister_magic_binding);
  } else {
    T259 = YPfalse;
  }
  T261 = fun_register_magic_binding_344;
  T258 = CALL2(1,VARREF(YPdefine_method),T259,T261);
  VARSET(YastYregister_magic_binding,T258);
  lit_433 = YPPsym((P)"magic-bindings");
  T262 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_magic_bindings_345 = YPmet(FUNCODEREF(fun_magic_bindings_345),LITREF(lit_433),T262,ENVNUL,PNUL,YPfalse);
  T265 = BOUNDP(YastYmagic_bindings);
  if (T265 != YPfalse) {
    T264 = VARREF(YastYmagic_bindings);
  } else {
    T264 = YPfalse;
  }
  T266 = fun_magic_bindings_345;
  T263 = CALL2(1,VARREF(YPdefine_method),T264,T266);
  VARSET(YastYmagic_bindings,T263);
  lit_434 = YPPsym((P)"x-2434");
  lit_435 = YPPsym((P)"define-magic-binding");
  lit_436 = YPsb((P)"special-");
  lit_437 = YPsb((P)"$sexpr-");
  lit_438 = YPsb((P)"-tag");
  lit_439 = YPPsym((P)"$goo-boot-module-name");
  lit_440 = YPPsym((P)"binding-handler");
  lit_441 = YPPsym((P)"fun");
  T269 = YPsig(YPPlist(2,LITREF(lit_5),LITREF(lit_6)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2434_346 = YPmet(FUNCODEREF(fun_x_2434_346),LITREF(lit_434),T269,ENVNUL,PNUL,YPfalse);
  T268 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_347 = YPmet(FUNCODEREF(fun_347),YPfalse,T268,ENVNUL,PNUL,YPfalse);
  T267 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_348 = YPmet(FUNCODEREF(fun_348),YPfalse,T267,ENVNUL,PNUL,YPfalse);
  T270 = fun_348;
  YPmacro(YPPsym((P)"ast"),YPPsym((P)"define-magic-binding"),T270);
  T271 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_349 = YPmet(FUNCODEREF(fun_349),YPfalse,T271,ENVNUL,PNUL,YPfalse);
  T273 = fun_349;
  T272 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_284),VARREF(YastYbinding_name),VARREF(YsyntaxYDsexpr_if_tag),VARREF(YastYbinding_module_name),VARREF(YastYDgoo_boot_module_name),VARREF(YastYbinding_handler),T273,VARREF(YastYbinding_freeQ),YPfalse);
  VARSET(YastYspecial_if,T272);
  CALL2(1,VARREF(YastYregister_magic_binding),LITREF(lit_346),VARREF(YastYspecial_if));
  T274 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_350 = YPmet(FUNCODEREF(fun_350),YPfalse,T274,ENVNUL,PNUL,YPfalse);
  T276 = fun_350;
  T275 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_284),VARREF(YastYbinding_name),VARREF(YsyntaxYDsexpr_begin_tag),VARREF(YastYbinding_module_name),VARREF(YastYDgoo_boot_module_name),VARREF(YastYbinding_handler),T276,VARREF(YastYbinding_freeQ),YPfalse);
  VARSET(YastYspecial_begin,T275);
  lit_442 = YPPsym((P)"begin");
  CALL2(1,VARREF(YastYregister_magic_binding),LITREF(lit_442),VARREF(YastYspecial_begin));
  lit_443 = YPPsym((P)"%raw");
  VARSET(YastYDsexpr_Praw_tag,LITREF(lit_443));
  T277 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_351 = YPmet(FUNCODEREF(fun_351),YPfalse,T277,ENVNUL,PNUL,YPfalse);
  T279 = fun_351;
  T278 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_284),VARREF(YastYbinding_name),VARREF(YastYDsexpr_Praw_tag),VARREF(YastYbinding_module_name),VARREF(YastYDgoo_boot_module_name),VARREF(YastYbinding_handler),T279,VARREF(YastYbinding_freeQ),YPfalse);
  VARSET(YastYspecial_Praw,T278);
  CALL2(1,VARREF(YastYregister_magic_binding),LITREF(lit_443),VARREF(YastYspecial_Praw));
  T282 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T281 = fun_352 = YPmet(FUNCODEREF(fun_352),YPfalse,T282,ENVNUL,PNUL,YPfalse);
  T285 = fun_352;
  T284 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_284),VARREF(YastYbinding_name),VARREF(YsyntaxYDsexpr_quote_tag),VARREF(YastYbinding_module_name),VARREF(YastYDgoo_boot_module_name),VARREF(YastYbinding_handler),T285,VARREF(YastYbinding_freeQ),YPfalse);
  T283 = VARSET(YastYspecial_quote,T284);
  T280 = T283;
  return T280;
}

P YastY___main_7___() {
  P T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77;
  P T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61;
  P T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  CALL2(1,VARREF(YastYregister_magic_binding),LITREF(lit_307),VARREF(YastYspecial_quote));
  T0 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_353 = YPmet(FUNCODEREF(fun_353),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T2 = fun_353;
  T1 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_284),VARREF(YastYbinding_name),VARREF(YsyntaxYDsexpr_set_tag),VARREF(YastYbinding_module_name),VARREF(YastYDgoo_boot_module_name),VARREF(YastYbinding_handler),T2,VARREF(YastYbinding_freeQ),YPfalse);
  VARSET(YastYspecial_set,T1);
  CALL2(1,VARREF(YastYregister_magic_binding),LITREF(lit_11),VARREF(YastYspecial_set));
  T3 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_354 = YPmet(FUNCODEREF(fun_354),YPfalse,T3,ENVNUL,PNUL,YPfalse);
  T5 = fun_354;
  T4 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_284),VARREF(YastYbinding_name),VARREF(YsyntaxYDsexpr_define_tag),VARREF(YastYbinding_module_name),VARREF(YastYDgoo_boot_module_name),VARREF(YastYbinding_handler),T5,VARREF(YastYbinding_freeQ),YPfalse);
  VARSET(YastYspecial_define,T4);
  lit_444 = YPPsym((P)"define");
  CALL2(1,VARREF(YastYregister_magic_binding),LITREF(lit_444),VARREF(YastYspecial_define));
  T6 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_355 = YPmet(FUNCODEREF(fun_355),YPfalse,T6,ENVNUL,PNUL,YPfalse);
  T8 = fun_355;
  T7 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_284),VARREF(YastYbinding_name),VARREF(YsyntaxYDsexpr_define_syntax_tag),VARREF(YastYbinding_module_name),VARREF(YastYDgoo_boot_module_name),VARREF(YastYbinding_handler),T8,VARREF(YastYbinding_freeQ),YPfalse);
  VARSET(YastYspecial_define_syntax,T7);
  lit_445 = YPPsym((P)"define-syntax");
  CALL2(1,VARREF(YastYregister_magic_binding),LITREF(lit_445),VARREF(YastYspecial_define_syntax));
  lit_446 = YPPsym((P)"dss");
  VARSET(YastYDsexpr_define_static_syntax_tag,LITREF(lit_446));
  T9 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_356 = YPmet(FUNCODEREF(fun_356),YPfalse,T9,ENVNUL,PNUL,YPfalse);
  T11 = fun_356;
  T10 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_284),VARREF(YastYbinding_name),VARREF(YastYDsexpr_define_static_syntax_tag),VARREF(YastYbinding_module_name),VARREF(YastYDgoo_boot_module_name),VARREF(YastYbinding_handler),T11,VARREF(YastYbinding_freeQ),YPfalse);
  VARSET(YastYspecial_define_static_syntax,T10);
  lit_447 = YPPsym((P)"define-static-syntax");
  CALL2(1,VARREF(YastYregister_magic_binding),LITREF(lit_447),VARREF(YastYspecial_define_static_syntax));
  T12 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_357 = YPmet(FUNCODEREF(fun_357),YPfalse,T12,ENVNUL,PNUL,YPfalse);
  T14 = fun_357;
  T13 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_284),VARREF(YastYbinding_name),VARREF(YsyntaxYDsexpr_define_method_tag),VARREF(YastYbinding_module_name),VARREF(YastYDgoo_boot_module_name),VARREF(YastYbinding_handler),T14,VARREF(YastYbinding_freeQ),YPfalse);
  VARSET(YastYspecial_define_method,T13);
  lit_448 = YPPsym((P)"define-method");
  CALL2(1,VARREF(YastYregister_magic_binding),LITREF(lit_448),VARREF(YastYspecial_define_method));
  T15 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_358 = YPmet(FUNCODEREF(fun_358),YPfalse,T15,ENVNUL,PNUL,YPfalse);
  T17 = fun_358;
  T16 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_284),VARREF(YastYbinding_name),VARREF(YsyntaxYDsexpr_define_generic_tag),VARREF(YastYbinding_module_name),VARREF(YastYDgoo_boot_module_name),VARREF(YastYbinding_handler),T17,VARREF(YastYbinding_freeQ),YPfalse);
  VARSET(YastYspecial_define_generic,T16);
  lit_449 = YPPsym((P)"define-generic");
  CALL2(1,VARREF(YastYregister_magic_binding),LITREF(lit_449),VARREF(YastYspecial_define_generic));
  T18 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_359 = YPmet(FUNCODEREF(fun_359),YPfalse,T18,ENVNUL,PNUL,YPfalse);
  T20 = fun_359;
  T19 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_284),VARREF(YastYbinding_name),VARREF(YsyntaxYDsexpr_define_function_tag),VARREF(YastYbinding_module_name),VARREF(YastYDgoo_boot_module_name),VARREF(YastYbinding_handler),T20,VARREF(YastYbinding_freeQ),YPfalse);
  VARSET(YastYspecial_define_function,T19);
  lit_450 = YPPsym((P)"define-function");
  CALL2(1,VARREF(YastYregister_magic_binding),LITREF(lit_450),VARREF(YastYspecial_define_function));
  T21 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_360 = YPmet(FUNCODEREF(fun_360),YPfalse,T21,ENVNUL,PNUL,YPfalse);
  T23 = fun_360;
  T22 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_284),VARREF(YastYbinding_name),VARREF(YsyntaxYDsexpr_method_tag),VARREF(YastYbinding_module_name),VARREF(YastYDgoo_boot_module_name),VARREF(YastYbinding_handler),T23,VARREF(YastYbinding_freeQ),YPfalse);
  VARSET(YastYspecial_method,T22);
  lit_451 = YPPsym((P)"method");
  CALL2(1,VARREF(YastYregister_magic_binding),LITREF(lit_451),VARREF(YastYspecial_method));
  VARSET(YastYDsexpr_boundQ_tag,LITREF(lit_347));
  T24 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_361 = YPmet(FUNCODEREF(fun_361),YPfalse,T24,ENVNUL,PNUL,YPfalse);
  T26 = fun_361;
  T25 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_284),VARREF(YastYbinding_name),VARREF(YastYDsexpr_boundQ_tag),VARREF(YastYbinding_module_name),VARREF(YastYDgoo_boot_module_name),VARREF(YastYbinding_handler),T26,VARREF(YastYbinding_freeQ),YPfalse);
  VARSET(YastYspecial_boundQ,T25);
  CALL2(1,VARREF(YastYregister_magic_binding),LITREF(lit_347),VARREF(YastYspecial_boundQ));
  T27 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_362 = YPmet(FUNCODEREF(fun_362),YPfalse,T27,ENVNUL,PNUL,YPfalse);
  T29 = fun_362;
  T28 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_284),VARREF(YastYbinding_name),VARREF(YsyntaxYDsexpr_let_tag),VARREF(YastYbinding_module_name),VARREF(YastYDgoo_boot_module_name),VARREF(YastYbinding_handler),T29,VARREF(YastYbinding_freeQ),YPfalse);
  VARSET(YastYspecial_let,T28);
  CALL2(1,VARREF(YastYregister_magic_binding),LITREF(lit_9),VARREF(YastYspecial_let));
  T30 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_363 = YPmet(FUNCODEREF(fun_363),YPfalse,T30,ENVNUL,PNUL,YPfalse);
  T32 = fun_363;
  T31 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_284),VARREF(YastYbinding_name),VARREF(YsyntaxYDsexpr_def_tag),VARREF(YastYbinding_module_name),VARREF(YastYDgoo_boot_module_name),VARREF(YastYbinding_handler),T32,VARREF(YastYbinding_freeQ),YPfalse);
  VARSET(YastYspecial_def,T31);
  lit_452 = YPPsym((P)"def");
  CALL2(1,VARREF(YastYregister_magic_binding),LITREF(lit_452),VARREF(YastYspecial_def));
  T33 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_364 = YPmet(FUNCODEREF(fun_364),YPfalse,T33,ENVNUL,PNUL,YPfalse);
  T35 = fun_364;
  T34 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_284),VARREF(YastYbinding_name),VARREF(YsyntaxYDsexpr_locals_tag),VARREF(YastYbinding_module_name),VARREF(YastYDgoo_boot_module_name),VARREF(YastYbinding_handler),T35,VARREF(YastYbinding_freeQ),YPfalse);
  VARSET(YastYspecial_locals,T34);
  lit_453 = YPPsym((P)"locals");
  CALL2(1,VARREF(YastYregister_magic_binding),LITREF(lit_453),VARREF(YastYspecial_locals));
  T36 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_365 = YPmet(FUNCODEREF(fun_365),YPfalse,T36,ENVNUL,PNUL,YPfalse);
  T38 = fun_365;
  T37 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_284),VARREF(YastYbinding_name),VARREF(YsyntaxYDsexpr_iterate_tag),VARREF(YastYbinding_module_name),VARREF(YastYDgoo_boot_module_name),VARREF(YastYbinding_handler),T38,VARREF(YastYbinding_freeQ),YPfalse);
  VARSET(YastYspecial_iterate,T37);
  lit_454 = YPPsym((P)"iterate");
  CALL2(1,VARREF(YastYregister_magic_binding),LITREF(lit_454),VARREF(YastYspecial_iterate));
  T39 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_366 = YPmet(FUNCODEREF(fun_366),YPfalse,T39,ENVNUL,PNUL,YPfalse);
  T41 = fun_366;
  T40 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_284),VARREF(YastYbinding_name),VARREF(YsyntaxYDsexpr_bind_exit_tag),VARREF(YastYbinding_module_name),VARREF(YastYDgoo_boot_module_name),VARREF(YastYbinding_handler),T41,VARREF(YastYbinding_freeQ),YPfalse);
  VARSET(YastYspecial_bind_exit,T40);
  lit_455 = YPPsym((P)"bind-exit");
  CALL2(1,VARREF(YastYregister_magic_binding),LITREF(lit_455),VARREF(YastYspecial_bind_exit));
  T42 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_367 = YPmet(FUNCODEREF(fun_367),YPfalse,T42,ENVNUL,PNUL,YPfalse);
  T44 = fun_367;
  T43 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_284),VARREF(YastYbinding_name),VARREF(YsyntaxYDsexpr_unwind_protect_tag),VARREF(YastYbinding_module_name),VARREF(YastYDgoo_boot_module_name),VARREF(YastYbinding_handler),T44,VARREF(YastYbinding_freeQ),YPfalse);
  VARSET(YastYspecial_unwind_protect,T43);
  lit_456 = YPPsym((P)"unwind-protect");
  CALL2(1,VARREF(YastYregister_magic_binding),LITREF(lit_456),VARREF(YastYspecial_unwind_protect));
  T45 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_368 = YPmet(FUNCODEREF(fun_368),YPfalse,T45,ENVNUL,PNUL,YPfalse);
  T47 = fun_368;
  T46 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_284),VARREF(YastYbinding_name),VARREF(YsyntaxYDsexpr_monitor_tag),VARREF(YastYbinding_module_name),VARREF(YastYDgoo_boot_module_name),VARREF(YastYbinding_handler),T47,VARREF(YastYbinding_freeQ),YPfalse);
  VARSET(YastYspecial_monitor,T46);
  lit_457 = YPPsym((P)"monitor");
  CALL2(1,VARREF(YastYregister_magic_binding),LITREF(lit_457),VARREF(YastYspecial_monitor));
  lit_458 = YPPsym((P)"pairize");
  T48 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pairize_369 = YPmet(FUNCODEREF(fun_pairize_369),LITREF(lit_458),T48,ENVNUL,PNUL,YPfalse);
  T51 = BOUNDP(YastYpairize);
  if (T51 != YPfalse) {
    T50 = VARREF(YastYpairize);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_pairize_369;
  T49 = CALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(YastYpairize,T49);
  lit_459 = YPPsym((P)"%isa");
  T53 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_370 = YPmet(FUNCODEREF(fun_370),YPfalse,T53,ENVNUL,PNUL,YPfalse);
  T55 = fun_370;
  T54 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_284),VARREF(YastYbinding_name),VARREF(YsyntaxYDsexpr_isa_tag),VARREF(YastYbinding_module_name),VARREF(YastYDgoo_boot_module_name),VARREF(YastYbinding_handler),T55,VARREF(YastYbinding_freeQ),YPfalse);
  VARSET(YastYspecial_isa,T54);
  lit_460 = YPPsym((P)"isa");
  CALL2(1,VARREF(YastYregister_magic_binding),LITREF(lit_460),VARREF(YastYspecial_isa));
  lit_461 = YPPsym((P)"fab-class");
  T56 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_371 = YPmet(FUNCODEREF(fun_371),YPfalse,T56,ENVNUL,PNUL,YPfalse);
  T58 = fun_371;
  T57 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_284),VARREF(YastYbinding_name),VARREF(YsyntaxYDsexpr_define_class_tag),VARREF(YastYbinding_module_name),VARREF(YastYDgoo_boot_module_name),VARREF(YastYbinding_handler),T58,VARREF(YastYbinding_freeQ),YPfalse);
  VARSET(YastYspecial_define_class,T57);
  lit_462 = YPPsym((P)"define-class");
  CALL2(1,VARREF(YastYregister_magic_binding),LITREF(lit_462),VARREF(YastYspecial_define_class));
  lit_463 = YPPsym((P)"%prop");
  lit_464 = YPPsym((P)"%prop-unbound-error");
  T59 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_372 = YPmet(FUNCODEREF(fun_372),YPfalse,T59,ENVNUL,PNUL,YPfalse);
  T61 = fun_372;
  T60 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_284),VARREF(YastYbinding_name),VARREF(YsyntaxYDsexpr_prop_tag),VARREF(YastYbinding_module_name),VARREF(YastYDgoo_boot_module_name),VARREF(YastYbinding_handler),T61,VARREF(YastYbinding_freeQ),YPfalse);
  VARSET(YastYspecial_prop,T60);
  lit_465 = YPPsym((P)"prop");
  CALL2(1,VARREF(YastYregister_magic_binding),LITREF(lit_465),VARREF(YastYspecial_prop));
  lit_466 = YPPsym((P)"ct");
  VARSET(YastYDsexpr_compile_time_tag,LITREF(lit_466));
  T62 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_373 = YPmet(FUNCODEREF(fun_373),YPfalse,T62,ENVNUL,PNUL,YPfalse);
  T64 = fun_373;
  T63 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_284),VARREF(YastYbinding_name),VARREF(YastYDsexpr_compile_time_tag),VARREF(YastYbinding_module_name),VARREF(YastYDgoo_boot_module_name),VARREF(YastYbinding_handler),T64,VARREF(YastYbinding_freeQ),YPfalse);
  VARSET(YastYspecial_compile_time,T63);
  lit_467 = YPPsym((P)"compile-time");
  CALL2(1,VARREF(YastYregister_magic_binding),LITREF(lit_467),VARREF(YastYspecial_compile_time));
  lit_468 = YPPsym((P)"ct-also");
  VARSET(YastYDsexpr_compile_time_also_tag,LITREF(lit_468));
  T65 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_374 = YPmet(FUNCODEREF(fun_374),YPfalse,T65,ENVNUL,PNUL,YPfalse);
  T67 = fun_374;
  T66 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_284),VARREF(YastYbinding_name),VARREF(YastYDsexpr_compile_time_also_tag),VARREF(YastYbinding_module_name),VARREF(YastYDgoo_boot_module_name),VARREF(YastYbinding_handler),T67,VARREF(YastYbinding_freeQ),YPfalse);
  VARSET(YastYspecial_compile_time_also,T66);
  lit_469 = YPPsym((P)"compile-time-also");
  CALL2(1,VARREF(YastYregister_magic_binding),LITREF(lit_469),VARREF(YastYspecial_compile_time_also));
  lit_470 = YPPsym((P)"dl");
  VARSET(YastYDsexpr_define_primitive_tag,LITREF(lit_470));
  T68 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_375 = YPmet(FUNCODEREF(fun_375),YPfalse,T68,ENVNUL,PNUL,YPfalse);
  T70 = fun_375;
  T69 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_284),VARREF(YastYbinding_name),VARREF(YastYDsexpr_define_primitive_tag),VARREF(YastYbinding_module_name),VARREF(YastYDgoo_boot_module_name),VARREF(YastYbinding_handler),T70,VARREF(YastYbinding_freeQ),YPfalse);
  VARSET(YastYspecial_define_primitive,T69);
  lit_471 = YPPsym((P)"define-primitive");
  CALL2(1,VARREF(YastYregister_magic_binding),LITREF(lit_471),VARREF(YastYspecial_define_primitive));
  T71 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_376 = YPmet(FUNCODEREF(fun_376),YPfalse,T71,ENVNUL,PNUL,YPfalse);
  T73 = fun_376;
  T72 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_284),VARREF(YastYbinding_name),VARREF(YsyntaxYDsexpr_quasiquote_tag),VARREF(YastYbinding_module_name),VARREF(YastYDgoo_boot_module_name),VARREF(YastYbinding_handler),T73,VARREF(YastYbinding_freeQ),YPfalse);
  VARSET(YastYspecial_quasiquote,T72);
  lit_472 = YPPsym((P)"quasiquote");
  CALL2(1,VARREF(YastYregister_magic_binding),LITREF(lit_472),VARREF(YastYspecial_quasiquote));
  lit_473 = YPPsym((P)"ast-macro-expand");
  T74 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_macro_expand_377 = YPmet(FUNCODEREF(fun_ast_macro_expand_377),LITREF(lit_473),T74,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YastYast_macro_expand);
  if (T77 != YPfalse) {
    T76 = VARREF(YastYast_macro_expand);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_ast_macro_expand_377;
  T75 = CALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YastYast_macro_expand,T75);
  T79 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_378 = YPmet(FUNCODEREF(fun_378),YPfalse,T79,ENVNUL,PNUL,YPfalse);
  T81 = fun_378;
  T80 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_284),VARREF(YastYbinding_name),VARREF(YsyntaxYDsexpr_macro_expand_tag),VARREF(YastYbinding_module_name),VARREF(YastYDgoo_boot_module_name),VARREF(YastYbinding_handler),T81,VARREF(YastYbinding_freeQ),YPfalse);
  VARSET(YastYspecial_macro_expand,T80);
  lit_474 = YPPsym((P)"macro-expand");
  CALL2(1,VARREF(YastYregister_magic_binding),LITREF(lit_474),VARREF(YastYspecial_macro_expand));
  T82 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_379 = YPmet(FUNCODEREF(fun_379),YPfalse,T82,ENVNUL,PNUL,YPfalse);
  T84 = fun_379;
  T83 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_284),VARREF(YastYbinding_name),VARREF(YsyntaxYDsexpr_syntax_if_tag),VARREF(YastYbinding_module_name),VARREF(YastYDgoo_boot_module_name),VARREF(YastYbinding_handler),T84,VARREF(YastYbinding_freeQ),YPfalse);
  VARSET(YastYspecial_syntax_if,T83);
  lit_475 = YPPsym((P)"syntax-if");
  CALL2(1,VARREF(YastYregister_magic_binding),LITREF(lit_475),VARREF(YastYspecial_syntax_if));
  lit_476 = YPPsym((P)"export");
  VARSET(YastYDsexpr_export_tag,LITREF(lit_476));
  T85 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_380 = YPmet(FUNCODEREF(fun_380),YPfalse,T85,ENVNUL,PNUL,YPfalse);
  T87 = fun_380;
  T86 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_284),VARREF(YastYbinding_name),VARREF(YastYDsexpr_export_tag),VARREF(YastYbinding_module_name),VARREF(YastYDgoo_boot_module_name),VARREF(YastYbinding_handler),T87,VARREF(YastYbinding_freeQ),YPfalse);
  VARSET(YastYspecial_export,T86);
  CALL2(1,VARREF(YastYregister_magic_binding),LITREF(lit_476),VARREF(YastYspecial_export));
  lit_477 = YPPsym((P)"use");
  VARSET(YastYDsexpr_use_module_tag,LITREF(lit_477));
  T88 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_381 = YPmet(FUNCODEREF(fun_381),YPfalse,T88,ENVNUL,PNUL,YPfalse);
  T90 = fun_381;
  T89 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_284),VARREF(YastYbinding_name),VARREF(YastYDsexpr_use_module_tag),VARREF(YastYbinding_module_name),VARREF(YastYDgoo_boot_module_name),VARREF(YastYbinding_handler),T90,VARREF(YastYbinding_freeQ),YPfalse);
  VARSET(YastYspecial_use_module,T89);
  lit_478 = YPPsym((P)"use-module");
  T92 = CALL2(1,VARREF(YastYregister_magic_binding),LITREF(lit_478),VARREF(YastYspecial_use_module));
  T91 = T92;
  return T91;
}

P YastY___main_8___() {
  P T203,T202,T201,T200,T199,T198,T197,T196,T195,T194,T193,T192,T191,T190,T189,T188;
  P T187,T186,T185,T184,T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172;
  P T171,T170,T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156;
  P T155,T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140;
  P T139,T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124;
  P T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108;
  P T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92;
  P T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76;
  P T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60;
  P T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44;
  P T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28;
  P T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_479 = YPPsym((P)"use/export");
  VARSET(YastYDsexpr_useSexport_module_tag,LITREF(lit_479));
  T0 = YPsig(YPPlist(3,LITREF(lit_25),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_382 = YPmet(FUNCODEREF(fun_382),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T2 = fun_382;
  T1 = CALLN(1,VARREF(Ynew),11,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_284),VARREF(YastYbinding_name),VARREF(YastYDsexpr_useSexport_module_tag),VARREF(YastYbinding_module_name),VARREF(YastYDgoo_boot_module_name),VARREF(YastYbinding_handler),T2,VARREF(YastYbinding_freeQ),YPfalse);
  VARSET(YastYspecial_useSexport_module,T1);
  lit_480 = YPPsym((P)"use/export-module");
  CALL2(1,VARREF(YastYregister_magic_binding),LITREF(lit_480),VARREF(YastYspecial_useSexport_module));
  lit_481 = YPPsym((P)"<transaction>");
  T4 = (P)YPpair(VARREF(YLanyG),Ynil);
  T3 = CALL2(1,VARREF(Yfab_class),LITREF(lit_481),T4);
  VARSET(YastYLtransactionG,T3);
  lit_482 = YPPsym((P)"transaction-implemented-bindings");
  T5 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_transaction_implemented_bindings_383 = YPmet(FUNCODEREF(fun_transaction_implemented_bindings_383),LITREF(lit_482),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YastYtransaction_implemented_bindings);
  if (T8 != YPfalse) {
    T7 = VARREF(YastYtransaction_implemented_bindings);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_transaction_implemented_bindings_383;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YastYtransaction_implemented_bindings,T6);
  lit_483 = YPPsym((P)"transaction-implemented-bindings-setter");
  T10 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YprotoScollectionsScollectionYLtabG),VARREF(YastYLtransactionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_transaction_implemented_bindings_setter_384 = YPmet(FUNCODEREF(fun_transaction_implemented_bindings_setter_384),LITREF(lit_483),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YastYtransaction_implemented_bindings_setter);
  if (T13 != YPfalse) {
    T12 = VARREF(YastYtransaction_implemented_bindings_setter);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_transaction_implemented_bindings_setter_384;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YastYtransaction_implemented_bindings_setter,T11);
  T15 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_385 = YPmet(FUNCODEREF(fun_385),YPfalse,T15,ENVNUL,PNUL,YPfalse);
  T16 = fun_385;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLtransactionG),VARREF(YastYtransaction_implemented_bindings),VARREF(YastYtransaction_implemented_bindings_setter),VARREF(YprotoScollectionsScollectionYLtabG),T16);
  lit_484 = YPPsym((P)"transaction-dependents");
  T17 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_transaction_dependents_386 = YPmet(FUNCODEREF(fun_transaction_dependents_386),LITREF(lit_484),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YastYtransaction_dependents);
  if (T20 != YPfalse) {
    T19 = VARREF(YastYtransaction_dependents);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_transaction_dependents_386;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YastYtransaction_dependents,T18);
  lit_485 = YPPsym((P)"transaction-dependents-setter");
  T22 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YprotoScollectionsScollectionYLtabG),VARREF(YastYLtransactionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_transaction_dependents_setter_387 = YPmet(FUNCODEREF(fun_transaction_dependents_setter_387),LITREF(lit_485),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YastYtransaction_dependents_setter);
  if (T25 != YPfalse) {
    T24 = VARREF(YastYtransaction_dependents_setter);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_transaction_dependents_setter_387;
  T23 = CALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YastYtransaction_dependents_setter,T23);
  T27 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_388 = YPmet(FUNCODEREF(fun_388),YPfalse,T27,ENVNUL,PNUL,YPfalse);
  T28 = fun_388;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLtransactionG),VARREF(YastYtransaction_dependents),VARREF(YastYtransaction_dependents_setter),VARREF(YprotoScollectionsScollectionYLtabG),T28);
  VARSET(YastYTcurrent_subtransactionT,YPfalse);
  lit_486 = YPPsym((P)"transaction-register-implemented-binding");
  lit_487 = YPsb((P)"Can't register implemented foreign binding (no subtransaction)");
  T29 = YPsig(YPPlist(1,LITREF(lit_368)),YPPlist(1,VARREF(YastYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YastYtransaction_register_implemented_binding = YPmet(FUNCODEREF(YastYtransaction_register_implemented_binding),LITREF(lit_486),T29,ENVNUL,PNUL,YPfalse);
  T30 = YastYtransaction_register_implemented_binding;
  VARSET(YastYtransaction_register_implemented_binding,T30);
  lit_488 = YPPsym((P)"transaction-register-dependent");
  lit_489 = YPPsym((P)"d");
  lit_490 = YPsb((P)"Can't register dependent (no subtransaction)");
  T31 = YPsig(YPPlist(1,LITREF(lit_489)),YPPlist(1,VARREF(YdependencyYLdependentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YastYtransaction_register_dependent = YPmet(FUNCODEREF(YastYtransaction_register_dependent),LITREF(lit_488),T31,ENVNUL,PNUL,YPfalse);
  T32 = YastYtransaction_register_dependent;
  VARSET(YastYtransaction_register_dependent,T32);
  lit_491 = YPPsym((P)"transaction-empty?");
  T33 = YPsig(YPPlist(1,LITREF(lit_163)),YPPlist(1,VARREF(YastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YastYtransaction_emptyQ = YPmet(FUNCODEREF(YastYtransaction_emptyQ),LITREF(lit_491),T33,ENVNUL,PNUL,YPfalse);
  T34 = YastYtransaction_emptyQ;
  VARSET(YastYtransaction_emptyQ,T34);
  lit_492 = YPPsym((P)"merge-transactions!");
  lit_493 = YPPsym((P)"t1");
  lit_494 = YPPsym((P)"t2");
  lit_495 = YPPsym((P)"k");
  lit_496 = YPPsym((P)"v");
  T37 = YPsig(YPPlist(2,LITREF(lit_495),LITREF(lit_496)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_392 = YPmet(FUNCODEREF(fun_392),YPfalse,T37,ENVNUL,PNUL,YPfalse);
  T36 = YPsig(YPPlist(2,LITREF(lit_495),LITREF(lit_496)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_393 = YPmet(FUNCODEREF(fun_393),YPfalse,T36,ENVNUL,PNUL,YPfalse);
  T35 = YPsig(YPPlist(2,LITREF(lit_493),LITREF(lit_494)),YPPlist(2,VARREF(YastYLtransactionG),VARREF(YastYLtransactionG)),YPfalse,YPint((P)2),VARREF(YastYLtransactionG),Ynil);
  YastYmerge_transactionsX = YPmet(FUNCODEREF(YastYmerge_transactionsX),LITREF(lit_492),T35,ENVNUL,PNUL,YPfalse);
  T38 = YastYmerge_transactionsX;
  VARSET(YastYmerge_transactionsX,T38);
  lit_497 = YPPsym((P)"roll-back-transaction");
  lit_498 = YPPsym((P)"junk");
  T41 = YPsig(YPPlist(2,LITREF(lit_279),LITREF(lit_498)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_395 = YPmet(FUNCODEREF(fun_395),YPfalse,T41,ENVNUL,PNUL,YPfalse);
  T40 = YPsig(YPPlist(2,LITREF(lit_133),LITREF(lit_498)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_396 = YPmet(FUNCODEREF(fun_396),YPfalse,T40,ENVNUL,PNUL,YPfalse);
  T39 = YPsig(YPPlist(1,LITREF(lit_163)),YPPlist(1,VARREF(YastYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YastYroll_back_transaction = YPmet(FUNCODEREF(YastYroll_back_transaction),LITREF(lit_497),T39,ENVNUL,PNUL,YPfalse);
  T42 = YastYroll_back_transaction;
  VARSET(YastYroll_back_transaction,T42);
  lit_499 = YPPsym((P)"call-with-subtransaction");
  lit_500 = YPPsym((P)"module");
  lit_501 = YPPsym((P)"thunk");
  T45 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_398 = YPmet(FUNCODEREF(fun_398),YPfalse,T45,ENVNUL,PNUL,YPfalse);
  T44 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_399 = YPmet(FUNCODEREF(fun_399),YPfalse,T44,ENVNUL,PNUL,YPfalse);
  T43 = YPsig(YPPlist(2,LITREF(lit_500),LITREF(lit_501)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YastYcall_with_subtransaction = YPmet(FUNCODEREF(YastYcall_with_subtransaction),LITREF(lit_499),T43,ENVNUL,PNUL,YPfalse);
  T46 = YastYcall_with_subtransaction;
  VARSET(YastYcall_with_subtransaction,T46);
  lit_502 = YPPsym((P)"x-2438");
  lit_503 = YPPsym((P)"with-subtransaction");
  T49 = YPsig(YPPlist(2,LITREF(lit_5),LITREF(lit_6)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2438_401 = YPmet(FUNCODEREF(fun_x_2438_401),LITREF(lit_502),T49,ENVNUL,PNUL,YPfalse);
  T48 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_402 = YPmet(FUNCODEREF(fun_402),YPfalse,T48,ENVNUL,PNUL,YPfalse);
  T47 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_403 = YPmet(FUNCODEREF(fun_403),YPfalse,T47,ENVNUL,PNUL,YPfalse);
  T50 = fun_403;
  YPmacro(YPPsym((P)"ast"),YPPsym((P)"with-subtransaction"),T50);
  lit_504 = YPPsym((P)"objectify-with-subtransaction");
  T52 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_404 = YPmet(FUNCODEREF(fun_404),YPfalse,T52,ENVNUL,PNUL,YPfalse);
  T51 = YPsig(YPPlist(3,LITREF(lit_139),LITREF(lit_281),LITREF(lit_282)),YPPlist(3,VARREF(YLanyG),VARREF(YastYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YastYobjectify_with_subtransaction = YPmet(FUNCODEREF(YastYobjectify_with_subtransaction),LITREF(lit_504),T51,ENVNUL,PNUL,YPfalse);
  T53 = YastYobjectify_with_subtransaction;
  VARSET(YastYobjectify_with_subtransaction,T53);
  lit_505 = YPPsym((P)"<module-loader>");
  T55 = (P)YPpair(VARREF(YLanyG),Ynil);
  T54 = CALL2(1,VARREF(Yfab_class),LITREF(lit_505),T55);
  VARSET(YastYLmodule_loaderG,T54);
  lit_506 = YPPsym((P)"module-loader-modules");
  T56 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_modules_406 = YPmet(FUNCODEREF(fun_module_loader_modules_406),LITREF(lit_506),T56,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(YastYmodule_loader_modules);
  if (T59 != YPfalse) {
    T58 = VARREF(YastYmodule_loader_modules);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_module_loader_modules_406;
  T57 = CALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YastYmodule_loader_modules,T57);
  lit_507 = YPPsym((P)"module-loader-modules-setter");
  T61 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YprotoScollectionsScollectionYLtabG),VARREF(YastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_modules_setter_407 = YPmet(FUNCODEREF(fun_module_loader_modules_setter_407),LITREF(lit_507),T61,ENVNUL,PNUL,YPfalse);
  T64 = BOUNDP(YastYmodule_loader_modules_setter);
  if (T64 != YPfalse) {
    T63 = VARREF(YastYmodule_loader_modules_setter);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_module_loader_modules_setter_407;
  T62 = CALL2(1,VARREF(YPdefine_method),T63,T65);
  VARSET(YastYmodule_loader_modules_setter,T62);
  T66 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_408 = YPmet(FUNCODEREF(fun_408),YPfalse,T66,ENVNUL,PNUL,YPfalse);
  T67 = fun_408;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLmodule_loaderG),VARREF(YastYmodule_loader_modules),VARREF(YastYmodule_loader_modules_setter),VARREF(YprotoScollectionsScollectionYLtabG),T67);
  lit_508 = YPPsym((P)"module-loader-stack");
  T68 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_stack_409 = YPmet(FUNCODEREF(fun_module_loader_stack_409),LITREF(lit_508),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(YastYmodule_loader_stack);
  if (T71 != YPfalse) {
    T70 = VARREF(YastYmodule_loader_stack);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_module_loader_stack_409;
  T69 = CALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YastYmodule_loader_stack,T69);
  lit_509 = YPPsym((P)"module-loader-stack-setter");
  T73 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLlstG),VARREF(YastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_stack_setter_410 = YPmet(FUNCODEREF(fun_module_loader_stack_setter_410),LITREF(lit_509),T73,ENVNUL,PNUL,YPfalse);
  T76 = BOUNDP(YastYmodule_loader_stack_setter);
  if (T76 != YPfalse) {
    T75 = VARREF(YastYmodule_loader_stack_setter);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_module_loader_stack_setter_410;
  T74 = CALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(YastYmodule_loader_stack_setter,T74);
  T78 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_411 = YPmet(FUNCODEREF(fun_411),YPfalse,T78,ENVNUL,PNUL,YPfalse);
  T79 = fun_411;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLmodule_loaderG),VARREF(YastYmodule_loader_stack),VARREF(YastYmodule_loader_stack_setter),VARREF(YLlstG),T79);
  lit_510 = YPPsym((P)"<module>");
  T81 = (P)YPpair(VARREF(YLanyG),Ynil);
  T80 = CALL2(1,VARREF(Yfab_class),LITREF(lit_510),T81);
  VARSET(YastYLmoduleG,T80);
  lit_511 = YPPsym((P)"module-name");
  T82 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_name_412 = YPmet(FUNCODEREF(fun_module_name_412),LITREF(lit_511),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(YastYmodule_name);
  if (T85 != YPfalse) {
    T84 = VARREF(YastYmodule_name);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_module_name_412;
  T83 = CALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YastYmodule_name,T83);
  lit_512 = YPPsym((P)"module-name-setter");
  T87 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLsymG),VARREF(YastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_name_setter_413 = YPmet(FUNCODEREF(fun_module_name_setter_413),LITREF(lit_512),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YastYmodule_name_setter);
  if (T90 != YPfalse) {
    T89 = VARREF(YastYmodule_name_setter);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_module_name_setter_413;
  T88 = CALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YastYmodule_name_setter,T88);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLmoduleG),VARREF(YastYmodule_name),VARREF(YastYmodule_name_setter),VARREF(YLsymG),VARREF(YPprop_unbound_error));
  lit_513 = YPPsym((P)"module-target-environment");
  T92 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_target_environment_414 = YPmet(FUNCODEREF(fun_module_target_environment_414),LITREF(lit_513),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(YastYmodule_target_environment);
  if (T95 != YPfalse) {
    T94 = VARREF(YastYmodule_target_environment);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_module_target_environment_414;
  T93 = CALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YastYmodule_target_environment,T93);
  lit_514 = YPPsym((P)"module-target-environment-setter");
  T97 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YastYLstatic_global_environmentG),VARREF(YastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_target_environment_setter_415 = YPmet(FUNCODEREF(fun_module_target_environment_setter_415),LITREF(lit_514),T97,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(YastYmodule_target_environment_setter);
  if (T100 != YPfalse) {
    T99 = VARREF(YastYmodule_target_environment_setter);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_module_target_environment_setter_415;
  T98 = CALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YastYmodule_target_environment_setter,T98);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLmoduleG),VARREF(YastYmodule_target_environment),VARREF(YastYmodule_target_environment_setter),VARREF(YastYLstatic_global_environmentG),VARREF(YPprop_unbound_error));
  lit_515 = YPPsym((P)"module-syntax-environment");
  T102 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_syntax_environment_416 = YPmet(FUNCODEREF(fun_module_syntax_environment_416),LITREF(lit_515),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(YastYmodule_syntax_environment);
  if (T105 != YPfalse) {
    T104 = VARREF(YastYmodule_syntax_environment);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_module_syntax_environment_416;
  T103 = CALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(YastYmodule_syntax_environment,T103);
  lit_516 = YPPsym((P)"module-syntax-environment-setter");
  T107 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YastYLstatic_global_environmentG),VARREF(YastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_syntax_environment_setter_417 = YPmet(FUNCODEREF(fun_module_syntax_environment_setter_417),LITREF(lit_516),T107,ENVNUL,PNUL,YPfalse);
  T110 = BOUNDP(YastYmodule_syntax_environment_setter);
  if (T110 != YPfalse) {
    T109 = VARREF(YastYmodule_syntax_environment_setter);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_module_syntax_environment_setter_417;
  T108 = CALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(YastYmodule_syntax_environment_setter,T108);
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLmoduleG),VARREF(YastYmodule_syntax_environment),VARREF(YastYmodule_syntax_environment_setter),VARREF(YastYLstatic_global_environmentG),VARREF(YPprop_unbound_error));
  lit_517 = YPPsym((P)"%module-exports");
  T112 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pmodule_exports_418 = YPmet(FUNCODEREF(fun_Pmodule_exports_418),LITREF(lit_517),T112,ENVNUL,PNUL,YPfalse);
  T115 = BOUNDP(YastYPmodule_exports);
  if (T115 != YPfalse) {
    T114 = VARREF(YastYPmodule_exports);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_Pmodule_exports_418;
  T113 = CALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(YastYPmodule_exports,T113);
  lit_518 = YPPsym((P)"%module-exports-setter");
  T117 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YprotoScollectionsScollectionYLtabG),VARREF(YastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pmodule_exports_setter_419 = YPmet(FUNCODEREF(fun_Pmodule_exports_setter_419),LITREF(lit_518),T117,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(YastYPmodule_exports_setter);
  if (T120 != YPfalse) {
    T119 = VARREF(YastYPmodule_exports_setter);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_Pmodule_exports_setter_419;
  T118 = CALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YastYPmodule_exports_setter,T118);
  T122 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_420 = YPmet(FUNCODEREF(fun_420),YPfalse,T122,ENVNUL,PNUL,YPfalse);
  T123 = fun_420;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLmoduleG),VARREF(YastYPmodule_exports),VARREF(YastYPmodule_exports_setter),VARREF(YprotoScollectionsScollectionYLtabG),T123);
  lit_519 = YPPsym((P)"module-data-processed?");
  T124 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_data_processedQ_421 = YPmet(FUNCODEREF(fun_module_data_processedQ_421),LITREF(lit_519),T124,ENVNUL,PNUL,YPfalse);
  T127 = BOUNDP(YastYmodule_data_processedQ);
  if (T127 != YPfalse) {
    T126 = VARREF(YastYmodule_data_processedQ);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_module_data_processedQ_421;
  T125 = CALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(YastYmodule_data_processedQ,T125);
  lit_520 = YPPsym((P)"module-data-processed?-setter");
  T129 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLlogG),VARREF(YastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_data_processedQ_setter_422 = YPmet(FUNCODEREF(fun_module_data_processedQ_setter_422),LITREF(lit_520),T129,ENVNUL,PNUL,YPfalse);
  T132 = BOUNDP(YastYmodule_data_processedQ_setter);
  if (T132 != YPfalse) {
    T131 = VARREF(YastYmodule_data_processedQ_setter);
  } else {
    T131 = YPfalse;
  }
  T133 = fun_module_data_processedQ_setter_422;
  T130 = CALL2(1,VARREF(YPdefine_method),T131,T133);
  VARSET(YastYmodule_data_processedQ_setter,T130);
  T134 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_423 = YPmet(FUNCODEREF(fun_423),YPfalse,T134,ENVNUL,PNUL,YPfalse);
  T135 = fun_423;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLmoduleG),VARREF(YastYmodule_data_processedQ),VARREF(YastYmodule_data_processedQ_setter),VARREF(YLlogG),T135);
  lit_521 = YPPsym((P)"module-runtime-data");
  T136 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_runtime_data_424 = YPmet(FUNCODEREF(fun_module_runtime_data_424),LITREF(lit_521),T136,ENVNUL,PNUL,YPfalse);
  T139 = BOUNDP(YastYmodule_runtime_data);
  if (T139 != YPfalse) {
    T138 = VARREF(YastYmodule_runtime_data);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_module_runtime_data_424;
  T137 = CALL2(1,VARREF(YPdefine_method),T138,T140);
  VARSET(YastYmodule_runtime_data,T137);
  lit_522 = YPPsym((P)"module-runtime-data-setter");
  T141 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_runtime_data_setter_425 = YPmet(FUNCODEREF(fun_module_runtime_data_setter_425),LITREF(lit_522),T141,ENVNUL,PNUL,YPfalse);
  T144 = BOUNDP(YastYmodule_runtime_data_setter);
  if (T144 != YPfalse) {
    T143 = VARREF(YastYmodule_runtime_data_setter);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_module_runtime_data_setter_425;
  T142 = CALL2(1,VARREF(YPdefine_method),T143,T145);
  VARSET(YastYmodule_runtime_data_setter,T142);
  T146 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_426 = YPmet(FUNCODEREF(fun_426),YPfalse,T146,ENVNUL,PNUL,YPfalse);
  T147 = fun_426;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLmoduleG),VARREF(YastYmodule_runtime_data),VARREF(YastYmodule_runtime_data_setter),VARREF(YLanyG),T147);
  lit_523 = YPPsym((P)"module-transaction");
  T148 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_transaction_427 = YPmet(FUNCODEREF(fun_module_transaction_427),LITREF(lit_523),T148,ENVNUL,PNUL,YPfalse);
  T151 = BOUNDP(YastYmodule_transaction);
  if (T151 != YPfalse) {
    T150 = VARREF(YastYmodule_transaction);
  } else {
    T150 = YPfalse;
  }
  T152 = fun_module_transaction_427;
  T149 = CALL2(1,VARREF(YPdefine_method),T150,T152);
  VARSET(YastYmodule_transaction,T149);
  lit_524 = YPPsym((P)"module-transaction-setter");
  T153 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_20)),YPPlist(2,VARREF(YastYLtransactionG),VARREF(YastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_transaction_setter_428 = YPmet(FUNCODEREF(fun_module_transaction_setter_428),LITREF(lit_524),T153,ENVNUL,PNUL,YPfalse);
  T156 = BOUNDP(YastYmodule_transaction_setter);
  if (T156 != YPfalse) {
    T155 = VARREF(YastYmodule_transaction_setter);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_module_transaction_setter_428;
  T154 = CALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(YastYmodule_transaction_setter,T154);
  T158 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_429 = YPmet(FUNCODEREF(fun_429),YPfalse,T158,ENVNUL,PNUL,YPfalse);
  T159 = fun_429;
  CALLN(1,VARREF(YPprop),5,VARREF(YastYLmoduleG),VARREF(YastYmodule_transaction),VARREF(YastYmodule_transaction_setter),VARREF(YastYLtransactionG),T159);
  VARSET(YastYmodule_exports_setter,VARREF(YastYPmodule_exports_setter));
  lit_525 = YPPsym((P)"module-exports");
  T160 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YprotoScollectionsScollectionYLtabG),Ynil);
  fun_module_exports_430 = YPmet(FUNCODEREF(fun_module_exports_430),LITREF(lit_525),T160,ENVNUL,PNUL,YPfalse);
  T163 = BOUNDP(YastYmodule_exports);
  if (T163 != YPfalse) {
    T162 = VARREF(YastYmodule_exports);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_module_exports_430;
  T161 = CALL2(1,VARREF(YPdefine_method),T162,T164);
  VARSET(YastYmodule_exports,T161);
  lit_526 = YPPsym((P)"set-module-environments");
  lit_527 = YPPsym((P)"mod");
  lit_528 = YPPsym((P)"syntax-env");
  lit_529 = YPPsym((P)"target-env");
  T165 = YPsig(YPPlist(3,LITREF(lit_527),LITREF(lit_528),LITREF(lit_529)),YPPlist(3,VARREF(YastYLmoduleG),VARREF(YastYLstatic_global_environmentG),VARREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YastYset_module_environments = YPmet(FUNCODEREF(YastYset_module_environments),LITREF(lit_526),T165,ENVNUL,PNUL,YPfalse);
  T166 = YastYset_module_environments;
  VARSET(YastYset_module_environments,T166);
  lit_530 = YPPsym((P)"do-module-loader-modules");
  lit_531 = YPPsym((P)"loader");
  T168 = YPsig(YPPlist(1,LITREF(lit_527)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_432 = YPmet(FUNCODEREF(fun_432),YPfalse,T168,ENVNUL,PNUL,YPfalse);
  T167 = YPsig(YPPlist(2,LITREF(lit_129),LITREF(lit_531)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YastYdo_module_loader_modules = YPmet(FUNCODEREF(YastYdo_module_loader_modules),LITREF(lit_530),T167,ENVNUL,PNUL,YPfalse);
  T169 = YastYdo_module_loader_modules;
  VARSET(YastYdo_module_loader_modules,T169);
  lit_532 = YPPsym((P)"module-loader-module-type");
  T170 = YPsig(YPPlist(1,LITREF(lit_531)),YPPlist(1,VARREF(YastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_module_loader_module_type_434 = YPmet(FUNCODEREF(fun_module_loader_module_type_434),LITREF(lit_532),T170,ENVNUL,PNUL,YPfalse);
  T173 = BOUNDP(YastYmodule_loader_module_type);
  if (T173 != YPfalse) {
    T172 = VARREF(YastYmodule_loader_module_type);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_module_loader_module_type_434;
  T171 = CALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(YastYmodule_loader_module_type,T171);
  lit_533 = YPPsym((P)"register-module!");
  lit_534 = YPPsym((P)"module-loader");
  T175 = YPsig(YPPlist(2,LITREF(lit_534),LITREF(lit_527)),YPPlist(2,VARREF(YastYLmodule_loaderG),VARREF(YastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YastYLmodule_loaderG),Ynil);
  YastYregister_moduleX = YPmet(FUNCODEREF(YastYregister_moduleX),LITREF(lit_533),T175,ENVNUL,PNUL,YPfalse);
  T176 = YastYregister_moduleX;
  VARSET(YastYregister_moduleX,T176);
  lit_535 = YPPsym((P)"probe-module");
  T177 = YPsig(YPPlist(2,LITREF(lit_531),LITREF(lit_322)),YPPlist(2,VARREF(YastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YastYLmoduleG),Ynil);
  YastYprobe_module = YPmet(FUNCODEREF(YastYprobe_module),LITREF(lit_535),T177,ENVNUL,PNUL,YPfalse);
  T178 = YastYprobe_module;
  VARSET(YastYprobe_module,T178);
  lit_536 = YPPsym((P)"load-and-register-module");
  lit_537 = YPsb((P)"  ");
  lit_538 = YPsb((P)"%s: error: Circular use of %s not allowed");
  lit_539 = YPsb((P)"%s[Loading module %s...\n");
  lit_540 = YPsb((P)"%s]\n");
  T181 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_437 = YPmet(FUNCODEREF(fun_437),YPfalse,T181,ENVNUL,PNUL,YPfalse);
  T180 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_438 = YPmet(FUNCODEREF(fun_438),YPfalse,T180,ENVNUL,PNUL,YPfalse);
  T179 = YPsig(YPPlist(2,LITREF(lit_531),LITREF(lit_322)),YPPlist(2,VARREF(YastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YastYLmoduleG),Ynil);
  YastYload_and_register_module = YPmet(FUNCODEREF(YastYload_and_register_module),LITREF(lit_536),T179,ENVNUL,PNUL,YPfalse);
  T182 = YastYload_and_register_module;
  VARSET(YastYload_and_register_module,T182);
  lit_541 = YPPsym((P)"load-module");
  T184 = YPsig(YPPlist(2,LITREF(lit_531),LITREF(lit_322)),YPPlist(2,VARREF(YastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YastYLmoduleG),Ynil);
  T183 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_541),T184,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YastYload_module,T183);
  lit_542 = YPPsym((P)"export-binding!");
  lit_543 = YPsb((P)"Tried to export %= and %= from %= as %=");
  T186 = CALL1(1,VARREF(YprotoStypesYtE),YPfalse);
  T185 = YPsig(YPPlist(3,LITREF(lit_500),LITREF(lit_322),LITREF(lit_279)),YPPlist(3,VARREF(YastYLmoduleG),VARREF(YastYLbinding_nameG),VARREF(YastYLmodule_bindingG)),YPfalse,YPint((P)3),T186,Ynil);
  YastYexport_bindingX = YPmet(FUNCODEREF(YastYexport_bindingX),LITREF(lit_542),T185,ENVNUL,PNUL,YPfalse);
  T187 = YastYexport_bindingX;
  VARSET(YastYexport_bindingX,T187);
  lit_544 = YPPsym((P)"binding-native-to?");
  T188 = YPsig(YPPlist(2,LITREF(lit_279),LITREF(lit_500)),YPPlist(2,VARREF(YastYLmodule_bindingG),VARREF(YastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YastYbinding_native_toQ = YPmet(FUNCODEREF(YastYbinding_native_toQ),LITREF(lit_544),T188,ENVNUL,PNUL,YPfalse);
  T189 = YastYbinding_native_toQ;
  VARSET(YastYbinding_native_toQ,T189);
  lit_545 = YPPsym((P)"report-undefined-global-bindings");
  lit_546 = YPsb((P)"%s: warning: undefined binding '%s'.\n");
  T191 = YPsig(YPPlist(1,LITREF(lit_279)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_442 = YPmet(FUNCODEREF(fun_442),YPfalse,T191,ENVNUL,PNUL,YPfalse);
  T190 = YPsig(YPPlist(1,LITREF(lit_527)),YPPlist(1,VARREF(YastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YastYreport_undefined_global_bindings = YPmet(FUNCODEREF(YastYreport_undefined_global_bindings),LITREF(lit_545),T190,ENVNUL,PNUL,YPfalse);
  T192 = YastYreport_undefined_global_bindings;
  VARSET(YastYreport_undefined_global_bindings,T192);
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
  T193 = YPsig(YPPlist(2,LITREF(lit_531),LITREF(lit_548)),YPPlist(2,VARREF(YastYLmodule_loaderG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YastYcompute_transitive_users = YPmet(FUNCODEREF(YastYcompute_transitive_users),LITREF(lit_547),T193,ENVNUL,PNUL,YPfalse);
  T198 = YastYcompute_transitive_users;
  VARSET(YastYcompute_transitive_users,T198);
  lit_551 = YPPsym((P)"remove-module-internal!");
  T201 = YPsig(YPPlist(2,LITREF(lit_531),LITREF(lit_527)),YPPlist(2,VARREF(YastYLmodule_loaderG),VARREF(YastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T200 = YastYremove_module_internalX = YPmet(FUNCODEREF(YastYremove_module_internalX),LITREF(lit_551),T201,ENVNUL,PNUL,YPfalse);
  T203 = YastYremove_module_internalX;
  T202 = VARSET(YastYremove_module_internalX,T203);
  T199 = T202;
  return T199;
}

P YastY___main_9___() {
  P tmpF6077;
  P tmpF6076;
  P tmpF6075;
  P T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67;
  P T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51;
  P T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35;
  P T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
loop:
  lit_552 = YPPsym((P)"remove-modules-by-name!");
  T2 = YPsig(YPPlist(1,LITREF(lit_329)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_450 = YPmet(FUNCODEREF(fun_450),YPfalse,T2,ENVNUL,PNUL,YPfalse);
  T1 = CALL1(1,VARREF(YprotoStypesYtE),YPfalse);
  T0 = YPsig(YPPlist(2,LITREF(lit_531),LITREF(lit_548)),YPPlist(2,VARREF(YastYLmodule_loaderG),VARREF(YLlstG)),YPfalse,YPint((P)2),T1,Ynil);
  YastYremove_modules_by_nameX = YPmet(FUNCODEREF(YastYremove_modules_by_nameX),LITREF(lit_552),T0,ENVNUL,PNUL,YPfalse);
  T3 = YastYremove_modules_by_nameX;
  VARSET(YastYremove_modules_by_nameX,T3);
  lit_553 = YPPsym((P)"module-name-to-relpath");
  T4 = YPsig(YPPlist(1,LITREF(lit_322)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YastYmodule_name_to_relpath = YPmet(FUNCODEREF(YastYmodule_name_to_relpath),LITREF(lit_553),T4,ENVNUL,PNUL,YPfalse);
  T5 = YastYmodule_name_to_relpath;
  VARSET(YastYmodule_name_to_relpath,T5);
  lit_554 = YPPsym((P)"install-initial-bindings");
  lit_555 = YPPlist(2,YPPsym((P)"seq"),YPPsym((P)"use"));
  T7 = YPsig(YPPlist(1,LITREF(lit_322)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_453 = YPmet(FUNCODEREF(fun_453),YPfalse,T7,ENVNUL,PNUL,YPfalse);
  T6 = YPsig(YPPlist(2,LITREF(lit_401),LITREF(lit_531)),YPPlist(2,VARREF(YastYLstatic_global_environmentG),VARREF(YastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YastYinstall_initial_bindings = YPmet(FUNCODEREF(YastYinstall_initial_bindings),LITREF(lit_554),T6,ENVNUL,PNUL,YPfalse);
  T8 = YastYinstall_initial_bindings;
  VARSET(YastYinstall_initial_bindings,T8);
  lit_556 = YPPsym((P)"fab-static-global-environment");
  lit_557 = YPPsym((P)"allow-foreign-names?");
  T9 = YPsig(YPPlist(3,LITREF(lit_500),LITREF(lit_534),LITREF(lit_557)),YPPlist(3,VARREF(YastYLmoduleG),VARREF(YastYLmodule_loaderG),VARREF(YLlogG)),YPfalse,YPint((P)3),VARREF(YastYLstatic_global_environmentG),Ynil);
  YastYfab_static_global_environment = YPmet(FUNCODEREF(YastYfab_static_global_environment),LITREF(lit_556),T9,ENVNUL,PNUL,YPfalse);
  T10 = YastYfab_static_global_environment;
  VARSET(YastYfab_static_global_environment,T10);
  lit_558 = YPPsym((P)"fab-subset-environment");
  lit_559 = YPPsym((P)"src-module");
  lit_560 = YPPsym((P)"excluded");
  T12 = YPsig(YPPlist(2,LITREF(lit_322),LITREF(lit_279)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_456 = YPmet(FUNCODEREF(fun_456),YPfalse,T12,ENVNUL,PNUL,YPfalse);
  T11 = YPsig(YPPlist(3,LITREF(lit_500),LITREF(lit_559),LITREF(lit_560)),YPPlist(3,VARREF(YastYLmoduleG),VARREF(YastYLmoduleG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YastYLstatic_global_environmentG),Ynil);
  YastYfab_subset_environment = YPmet(FUNCODEREF(YastYfab_subset_environment),LITREF(lit_558),T11,ENVNUL,PNUL,YPfalse);
  T13 = YastYfab_subset_environment;
  VARSET(YastYfab_subset_environment,T13);
  lit_561 = YPPsym((P)"<runtime-module-loader>");
  T15 = (P)YPpair(VARREF(YastYLmodule_loaderG),Ynil);
  T14 = CALL2(1,VARREF(Yfab_class),LITREF(lit_561),T15);
  VARSET(YastYLruntime_module_loaderG,T14);
  VARSET(YastYTnow_rt_envT,YPfalse);
  T20 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_458 = YPmet(FUNCODEREF(fun_458),YPfalse,T20,ENVNUL,PNUL,YPfalse);
  T19 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_459 = YPmet(FUNCODEREF(fun_459),YPfalse,T19,ENVNUL,PNUL,YPfalse);
  T18 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_460 = YPmet(FUNCODEREF(fun_460),YPfalse,T18,ENVNUL,PNUL,YPfalse);
  T17 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_461 = YPmet(FUNCODEREF(fun_461),YPfalse,T17,ENVNUL,PNUL,YPfalse);
  T16 = YPsig(YPPlist(2,LITREF(lit_531),LITREF(lit_322)),YPPlist(2,VARREF(YastYLruntime_module_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YastYLmoduleG),Ynil);
  fun_load_module_462 = YPmet(FUNCODEREF(fun_load_module_462),LITREF(lit_541),T16,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YastYload_module);
  if (T23 != YPfalse) {
    T22 = VARREF(YastYload_module);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_load_module_462;
  T21 = CALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YastYload_module,T21);
  T25 = CALL1(1,VARREF(Ynew),VARREF(YastYLruntime_module_loaderG));
  VARSET(YastYTruntime_module_loaderT,T25);
  lit_562 = YPPsym((P)"runtime-module-loader");
  T26 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YastYruntime_module_loader = YPmet(FUNCODEREF(YastYruntime_module_loader),LITREF(lit_562),T26,ENVNUL,PNUL,YPfalse);
  T27 = YastYruntime_module_loader;
  VARSET(YastYruntime_module_loader,T27);
  lit_563 = YPPsym((P)"runtime-module");
  T28 = YPsig(YPPlist(1,LITREF(lit_329)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YastYruntime_module = YPmet(FUNCODEREF(YastYruntime_module),LITREF(lit_563),T28,ENVNUL,PNUL,YPfalse);
  T29 = YastYruntime_module;
  VARSET(YastYruntime_module,T29);
  lit_564 = YPPsym((P)"runtime-environment");
  T30 = YPsig(YPPlist(1,LITREF(lit_329)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YastYruntime_environment = YPmet(FUNCODEREF(YastYruntime_environment),LITREF(lit_564),T30,ENVNUL,PNUL,YPfalse);
  T31 = YastYruntime_environment;
  VARSET(YastYruntime_environment,T31);
  lit_565 = YPPsym((P)"runtime-core-environment");
  T32 = YPsig(YPPlist(1,LITREF(lit_329)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YastYruntime_core_environment = YPmet(FUNCODEREF(YastYruntime_core_environment),LITREF(lit_565),T32,ENVNUL,PNUL,YPfalse);
  T33 = YastYruntime_core_environment;
  VARSET(YastYruntime_core_environment,T33);
  lit_566 = YPPsym((P)"unchecked-runtime-environment");
  T34 = YPsig(YPPlist(1,LITREF(lit_329)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YastYunchecked_runtime_environment = YPmet(FUNCODEREF(YastYunchecked_runtime_environment),LITREF(lit_566),T34,ENVNUL,PNUL,YPfalse);
  T35 = YastYunchecked_runtime_environment;
  VARSET(YastYunchecked_runtime_environment,T35);
  lit_567 = YPPsym((P)"reloader-do-create-module");
  lit_568 = YPPsym((P)"data");
  T36 = YPsig(YPPlist(2,LITREF(lit_329),LITREF(lit_568)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YastYLmoduleG),Ynil);
  YastYreloader_do_create_module = YPmet(FUNCODEREF(YastYreloader_do_create_module),LITREF(lit_567),T36,ENVNUL,PNUL,YPfalse);
  T37 = YastYreloader_do_create_module;
  VARSET(YastYreloader_do_create_module,T37);
  lit_569 = YPPsym((P)"reloader-do-use-module");
  lit_570 = YPPsym((P)"uses");
  T38 = YPsig(YPPlist(2,LITREF(lit_527),LITREF(lit_570)),YPPlist(2,VARREF(YastYLmoduleG),VARREF(YastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YastYreloader_do_use_module = YPmet(FUNCODEREF(YastYreloader_do_use_module),LITREF(lit_569),T38,ENVNUL,PNUL,YPfalse);
  T39 = YastYreloader_do_use_module;
  VARSET(YastYreloader_do_use_module,T39);
  lit_571 = YPPsym((P)"reloader-do-import");
  lit_572 = YPPsym((P)"from-mod");
  lit_573 = YPPsym((P)"original-name");
  lit_574 = YPsb((P)"Can't find %s from %s for %s\n");
  T40 = YPsig(YPPlist(4,LITREF(lit_527),LITREF(lit_322),LITREF(lit_572),LITREF(lit_573)),YPPlist(4,VARREF(YastYLmoduleG),VARREF(YLstrG),VARREF(YastYLmoduleG),VARREF(YLstrG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  YastYreloader_do_import = YPmet(FUNCODEREF(YastYreloader_do_import),LITREF(lit_571),T40,ENVNUL,PNUL,YPfalse);
  T41 = YastYreloader_do_import;
  VARSET(YastYreloader_do_import,T41);
  lit_575 = YPPsym((P)"process-module-data");
  T42 = YPsig(YPPlist(1,LITREF(lit_500)),YPPlist(1,VARREF(YastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YastYprocess_module_data = YPmet(FUNCODEREF(YastYprocess_module_data),LITREF(lit_575),T42,ENVNUL,PNUL,YPfalse);
  T43 = YastYprocess_module_data;
  VARSET(YastYprocess_module_data,T43);
  lit_576 = YPPsym((P)"ensure-module-data");
  T44 = YPsig(YPPlist(1,LITREF(lit_500)),YPPlist(1,VARREF(YastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YastYensure_module_data = YPmet(FUNCODEREF(YastYensure_module_data),LITREF(lit_576),T44,ENVNUL,PNUL,YPfalse);
  T45 = YastYensure_module_data;
  VARSET(YastYensure_module_data,T45);
  lit_577 = YPPsym((P)"reloader-do-runtime-binding");
  T46 = YPsig(YPPlist(3,LITREF(lit_527),LITREF(lit_322),LITREF(lit_422)),YPPlist(3,VARREF(YastYLmoduleG),VARREF(YLstrG),VARREF(YLlocG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YastYreloader_do_runtime_binding = YPmet(FUNCODEREF(YastYreloader_do_runtime_binding),LITREF(lit_577),T46,ENVNUL,PNUL,YPfalse);
  T47 = YastYreloader_do_runtime_binding;
  VARSET(YastYreloader_do_runtime_binding,T47);
  lit_578 = YPPsym((P)"reloader-do-other-binding");
  T48 = YPsig(YPPlist(2,LITREF(lit_527),LITREF(lit_322)),YPPlist(2,VARREF(YastYLmoduleG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YastYreloader_do_other_binding = YPmet(FUNCODEREF(YastYreloader_do_other_binding),LITREF(lit_578),T48,ENVNUL,PNUL,YPfalse);
  T49 = YastYreloader_do_other_binding;
  VARSET(YastYreloader_do_other_binding,T49);
  lit_579 = YPPsym((P)"reloader-do-export");
  lit_580 = YPPsym((P)"as-name");
  lit_581 = YPsb((P)"Can't find %s in %s\n");
  T50 = YPsig(YPPlist(3,LITREF(lit_527),LITREF(lit_322),LITREF(lit_580)),YPPlist(3,VARREF(YastYLmoduleG),VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YastYreloader_do_export = YPmet(FUNCODEREF(YastYreloader_do_export),LITREF(lit_579),T50,ENVNUL,PNUL,YPfalse);
  T51 = YastYreloader_do_export;
  VARSET(YastYreloader_do_export,T51);
  lit_582 = YPPsym((P)"reload-modules");
  T52 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YastYreload_modules = YPmet(FUNCODEREF(YastYreload_modules),LITREF(lit_582),T52,ENVNUL,PNUL,YPfalse);
  T53 = YastYreload_modules;
  VARSET(YastYreload_modules,T53);
  lit_583 = YPPsym((P)"install-magic-bindings");
  T55 = YPsig(YPPlist(1,LITREF(lit_279)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_477 = YPmet(FUNCODEREF(fun_477),YPfalse,T55,ENVNUL,PNUL,YPfalse);
  T54 = YPsig(YPPlist(1,LITREF(lit_401)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YastYinstall_magic_bindings = YPmet(FUNCODEREF(YastYinstall_magic_bindings),LITREF(lit_583),T54,ENVNUL,PNUL,YPfalse);
  T56 = YastYinstall_magic_bindings;
  VARSET(YastYinstall_magic_bindings,T56);
  lit_584 = YPPsym((P)"reload-macros");
  T57 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YastYreload_macros = YPmet(FUNCODEREF(YastYreload_macros),LITREF(lit_584),T57,ENVNUL,PNUL,YPfalse);
  T58 = YastYreload_macros;
  VARSET(YastYreload_macros,T58);
  lit_585 = YPPsym((P)"install-interpreter-hacks");
  T59 = YPsig(YPPlist(1,LITREF(lit_401)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YastYinstall_interpreter_hacks = YPmet(FUNCODEREF(YastYinstall_interpreter_hacks),LITREF(lit_585),T59,ENVNUL,PNUL,YPfalse);
  T60 = YastYinstall_interpreter_hacks;
  VARSET(YastYinstall_interpreter_hacks,T60);
  lit_586 = YPPsym((P)"init-runtime");
  T61 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YastYinit_runtime = YPmet(FUNCODEREF(YastYinit_runtime),LITREF(lit_586),T61,ENVNUL,PNUL,YPfalse);
  T62 = YastYinit_runtime;
  VARSET(YastYinit_runtime,T62);
  lit_587 = YPPlist(5,YPPsym((P)"ct"),YPPsym((P)"ct-also"),YPPsym((P)"ds"),YPPsym((P)"use"),YPPsym((P)"export"));
  VARSET(YastYsyntax_environment_excluded_bindings,LITREF(lit_587));
  lit_588 = YPPsym((P)"fab-syntax-environment");
  lit_589 = YPPsym((P)"proto");
  T63 = YPsig(YPPlist(1,LITREF(lit_500)),YPPlist(1,VARREF(YastYLmoduleG)),YPfalse,YPint((P)1),VARREF(YastYLstatic_global_environmentG),Ynil);
  YastYfab_syntax_environment = YPmet(FUNCODEREF(YastYfab_syntax_environment),LITREF(lit_588),T63,ENVNUL,PNUL,YPfalse);
  T64 = YastYfab_syntax_environment;
  VARSET(YastYfab_syntax_environment,T64);
  lit_590 = YPPsym((P)"fab-g2c-module");
  T65 = YPsig(YPPlist(2,LITREF(lit_531),LITREF(lit_322)),YPPlist(2,VARREF(YastYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YastYLmoduleG),Ynil);
  YastYfab_g2c_module = YPmet(FUNCODEREF(YastYfab_g2c_module),LITREF(lit_590),T65,ENVNUL,PNUL,YPfalse);
  T66 = YastYfab_g2c_module;
  VARSET(YastYfab_g2c_module,T66);
  lit_591 = YPPsym((P)"init-g2c-boot-environment");
  T67 = YPsig(YPPlist(1,LITREF(lit_401)),YPPlist(1,VARREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YastYinit_g2c_boot_environment = YPmet(FUNCODEREF(YastYinit_g2c_boot_environment),LITREF(lit_591),T67,ENVNUL,PNUL,YPfalse);
  T68 = YastYinit_g2c_boot_environment;
  VARSET(YastYinit_g2c_boot_environment,T68);
  lit_592 = YPPsym((P)"init-g2c-regular-environment");
  T69 = YPsig(YPPlist(2,LITREF(lit_401),LITREF(lit_531)),YPPlist(2,VARREF(YastYLstatic_global_environmentG),VARREF(YastYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YastYinit_g2c_regular_environment = YPmet(FUNCODEREF(YastYinit_g2c_regular_environment),LITREF(lit_592),T69,ENVNUL,PNUL,YPfalse);
  T70 = YastYinit_g2c_regular_environment;
  VARSET(YastYinit_g2c_regular_environment,T70);
  lit_593 = YPPsym((P)"init-ast");
  T71 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YastYinit_ast = YPmet(FUNCODEREF(YastYinit_ast),LITREF(lit_593),T71,ENVNUL,PNUL,YPfalse);
  T72 = YastYinit_ast;
  VARSET(YastYinit_ast,T72);
  lit_594 = YPPsym((P)"do-static-global-bindings");
  T74 = YPsig(YPPlist(1,LITREF(lit_401)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_487 = YPmet(FUNCODEREF(fun_loop_487),LITREF(lit_140),T74,ENVNUL,PNUL,YPfalse);
  T73 = YPsig(YPPlist(2,LITREF(lit_129),LITREF(lit_401)),YPPlist(2,VARREF(YLfunG),VARREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YastYdo_static_global_bindings = YPmet(FUNCODEREF(YastYdo_static_global_bindings),LITREF(lit_594),T73,ENVNUL,PNUL,YPfalse);
  T75 = YastYdo_static_global_bindings;
  VARSET(YastYdo_static_global_bindings,T75);
  lit_595 = YPPsym((P)"do-named-static-global-bindings");
  T77 = YPsig(YPPlist(1,LITREF(lit_401)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_489 = YPmet(FUNCODEREF(fun_loop_489),LITREF(lit_140),T77,ENVNUL,PNUL,YPfalse);
  T76 = YPsig(YPPlist(2,LITREF(lit_129),LITREF(lit_401)),YPPlist(2,VARREF(YLfunG),VARREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YastYdo_named_static_global_bindings = YPmet(FUNCODEREF(YastYdo_named_static_global_bindings),LITREF(lit_595),T76,ENVNUL,PNUL,YPfalse);
  T78 = YastYdo_named_static_global_bindings;
  VARSET(YastYdo_named_static_global_bindings,T78);
  tmpF6075 = YPfalse;
  if (tmpF6075 != YPfalse) {
    T79 = VARREF(YastYast_evaluate);
  } else {
    T79 = YPfalse;
  }
  tmpF6076 = YPfalse;
  if (tmpF6076 != YPfalse) {
    T80 = VARREF(YastYinit_environment_for_eval);
  } else {
    T80 = YPfalse;
  }
  tmpF6077 = YPfalse;
  if (tmpF6077 != YPfalse) {
    T81 = VARREF(YastYload_in);
  } else {
    T81 = YPfalse;
  }
  T82 = YPfalse;
  return T82;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_runtime;
extern MODULE_INFO module_info_write;
extern MODULE_INFO module_info_syntax;
extern MODULE_INFO module_info_strings;
extern MODULE_INFO module_info_protoSsystem;
extern MODULE_INFO module_info_protoStypes;
extern MODULE_INFO module_info_protoSmath;
extern MODULE_INFO module_info_protoScollections;
extern MODULE_INFO module_info_protoSports;
extern MODULE_INFO module_info_dependency;
extern MODULE_INFO module_info_protoScollectionsScollection;
extern MODULE_INFO module_info_protoScollectionsSassoc;
extern MODULE_INFO module_info_protoScollectionsSsequence;
extern MODULE_INFO module_info_protoScollectionsSstring;
extern MODULE_INFO module_info_protoScollectionsStable;
extern MODULE_INFO module_info_protoScollectionsSbuffer;
extern MODULE_INFO module_info_protoScollectionsSrange;
extern MODULE_INFO module_info_protoScollectionsSlist;
extern MODULE_INFO module_info_protoSmagnitudes;
extern MODULE_INFO module_info_protoScollectionsSmap;
extern MODULE_INFO module_info_protoScollectionsSstep;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {&module_info_macros},
  {&module_info_runtime},
  {&module_info_write},
  {&module_info_syntax},
  {&module_info_strings},
  {&module_info_protoSsystem},
  {&module_info_write},
  {&module_info_protoStypes},
  {&module_info_protoSmath},
  {&module_info_protoScollections},
  {&module_info_protoSports},
  {&module_info_dependency},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"<num>", &module_info_boot, "<num>"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"hierarchical-components", &module_info_protoSsystem, "hierarchical-components"},
  {"prop-getter", &module_info_boot, "prop-getter"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"*c-extension*", &module_info_protoSsystem, "*c-extension*"},
  {"key-type", &module_info_protoScollectionsScollection, "key-type"},
  {"assocs-test-setter", &module_info_protoScollectionsSassoc, "assocs-test-setter"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"$sexpr-iterate-tag", &module_info_syntax, "$sexpr-iterate-tag"},
  {"parent-directory", &module_info_protoSsystem, "parent-directory"},
  {"$sexpr-quasiquote-tag", &module_info_syntax, "$sexpr-quasiquote-tag"},
  {"and", &module_info_macros, "and"},
  {"sexpr-iterate->loc", &module_info_syntax, "sexpr-iterate->loc"},
  {"sexpr-syntax-if-then", &module_info_syntax, "sexpr-syntax-if-then"},
  {"del-dups", &module_info_protoScollectionsSsequence, "del-dups"},
  {"fin?", &module_info_protoScollectionsScollection, "fin?"},
  {"%unlink-stack", &module_info_boot, "%unlink-stack"},
  {"unexec", &module_info_boot, "unexec"},
  {"type-error", &module_info_boot, "type-error"},
  {"+", &module_info_protoSmath, "+"},
  {"%fun-reg", &module_info_boot, "%fun-reg"},
  {"class-direct-props", &module_info_boot, "class-direct-props"},
  {"gets", &module_info_protoSports, "gets"},
  {"gensym", &module_info_macros, "gensym"},
  {"vec", &module_info_boot, "vec"},
  {"or", &module_info_macros, "or"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"below", &module_info_protoScollectionsSsequence, "below"},
  {"num-to-str-base", &module_info_protoScollectionsSstring, "num-to-str-base"},
  {"<met>", &module_info_boot, "<met>"},
  {"contagious-call", &module_info_protoSmath, "contagious-call"},
  {"map-keyed", &module_info_protoScollectionsScollection, "map-keyed"},
  {"string-join", &module_info_strings, "string-join"},
  {"*print-base*", &module_info_protoScollectionsSstring, "*print-base*"},
  {"loc-val-setter", &module_info_runtime, "loc-val-setter"},
  {"mif", &module_info_boot, "mif"},
  {"tab-test", &module_info_protoScollectionsStable, "tab-test"},
  {"use/export", &module_info_boot, "use/export"},
  {"recurring-write", &module_info_write, "recurring-write"},
  {"zero?", &module_info_protoSmath, "zero?"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"@olen", &module_info_boot, "@olen"},
  {"until", &module_info_macros, "until"},
  {"prop-init", &module_info_boot, "prop-init"},
  {"format-to-string", &module_info_runtime, "format-to-string"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"$sexpr-define-syntax-tag", &module_info_syntax, "$sexpr-define-syntax-tag"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"round/", &module_info_protoSmath, "round/"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"sin", &module_info_protoSmath, "sin"},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_syntax, "sexpr-unwind-protect-cleanup-forms"},
  {"t+", &module_info_protoStypes, "t+"},
  {"<dependency-type>", &module_info_dependency, "<dependency-type>"},
  {"sexpr-loc-bound-signatures", &module_info_syntax, "sexpr-loc-bound-signatures"},
  {"$sexpr-bind-exit-tag", &module_info_syntax, "$sexpr-bind-exit-tag"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"enum", &module_info_protoScollectionsScollection, "enum"},
  {"dependency-empty?", &module_info_dependency, "dependency-empty?"},
  {"<dependent>", &module_info_dependency, "<dependent>"},
  {"var-name", &module_info_macros, "var-name"},
  {"sexpr-block-body", &module_info_syntax, "sexpr-block-body"},
  {"$sexpr-unwind-protect-tag", &module_info_syntax, "$sexpr-unwind-protect-tag"},
  {"eof-object", &module_info_protoSmath, "eof-object"},
  {"class-descendents", &module_info_boot, "class-descendents"},
  {"elt-default", &module_info_protoScollectionsScollection, "elt-default"},
  {"string-split", &module_info_strings, "string-split"},
  {"buf", &module_info_protoScollectionsSbuffer, "buf"},
  {"map2", &module_info_protoScollectionsScollection, "map2"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"from", &module_info_protoScollectionsSrange, "from"},
  {"gen-refs-setter", &module_info_boot, "gen-refs-setter"},
  {"sexpr-forward-primitive?", &module_info_syntax, "sexpr-forward-primitive?"},
  {"even?", &module_info_protoSmath, "even?"},
  {"%fcos", &module_info_boot, "%fcos"},
  {"cond", &module_info_macros, "cond"},
  {"%loc-val-setter", &module_info_boot, "%loc-val-setter"},
  {"app", &module_info_macros, "app"},
  {"sexpr-monitor-expand", &module_info_syntax, "sexpr-monitor-expand"},
  {"sexpr-isa-prop-inits", &module_info_syntax, "sexpr-isa-prop-inits"},
  {"port-line", &module_info_protoSports, "port-line"},
  {"isa", &module_info_boot, "isa"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"@+", &module_info_boot, "@+"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"$permanent-hash-state", &module_info_protoScollectionsStable, "$permanent-hash-state"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"rem", &module_info_protoSmath, "rem"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"del-vals", &module_info_protoScollectionsSsequence, "del-vals"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"put", &module_info_protoSports, "put"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"dss", &module_info_boot, "dss"},
  {"sexpr-variable?", &module_info_syntax, "sexpr-variable?"},
  {"prop-value-setter", &module_info_boot, "prop-value-setter"},
  {"%lu", &module_info_boot, "%lu"},
  {"log", &module_info_protoSmath, "log"},
  {"$sexpr-monitor-tag", &module_info_syntax, "$sexpr-monitor-tag"},
  {"find-dependency", &module_info_dependency, "find-dependency"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"gen-refs", &module_info_boot, "gen-refs"},
  {"exported", &module_info_macros, "exported"},
  {"not", &module_info_boot, "not"},
  {"sexpr-let->combination", &module_info_syntax, "sexpr-let->combination"},
  {"-", &module_info_protoSmath, "-"},
  {"incf", &module_info_macros, "incf"},
  {"do-keyed", &module_info_protoScollectionsScollection, "do-keyed"},
  {"sexpr-syntax-if-value", &module_info_syntax, "sexpr-syntax-if-value"},
  {"%get", &module_info_boot, "%get"},
  {"%i+", &module_info_boot, "%i+"},
  {"sub", &module_info_protoScollectionsSsequence, "sub"},
  {"assq", &module_info_protoScollectionsSlist, "assq"},
  {"%f*", &module_info_boot, "%f*"},
  {"sexpr-unquote?", &module_info_syntax, "sexpr-unquote?"},
  {"dup", &module_info_protoScollectionsScollection, "dup"},
  {"$sexpr-define-method-tag", &module_info_syntax, "$sexpr-define-method-tag"},
  {"%iu", &module_info_boot, "%iu"},
  {"sexpr-assignment-value", &module_info_syntax, "sexpr-assignment-value"},
  {"elt-type", &module_info_protoScollectionsScollection, "elt-type"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"range-check?", &module_info_protoScollectionsSsequence, "range-check?"},
  {"tanh", &module_info_protoSmath, "tanh"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"<dependable>", &module_info_dependency, "<dependable>"},
  {"%gen-src", &module_info_boot, "%gen-src"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"pos", &module_info_protoScollectionsSsequence, "pos"},
  {"write", &module_info_write, "write"},
  {"fold", &module_info_protoScollectionsScollection, "fold"},
  {"&", &module_info_protoSmath, "&"},
  {"tab-shrink-threshold", &module_info_protoScollectionsStable, "tab-shrink-threshold"},
  {"%im", &module_info_boot, "%im"},
  {"elts", &module_info_protoScollectionsScollection, "elts"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"%fsinh", &module_info_boot, "%fsinh"},
  {"%met-code", &module_info_boot, "%met-code"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"@lst", &module_info_boot, "@lst"},
  {"sexpr-variable-type", &module_info_syntax, "sexpr-variable-type"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"write-to-string", &module_info_write, "write-to-string"},
  {"rep", &module_info_boot, "rep"},
  {"add-src-path", &module_info_protoSsystem, "add-src-path"},
  {"opf", &module_info_macros, "opf"},
  {"~==", &module_info_protoSmath, "~=="},
  {"flo-bits", &module_info_protoSmath, "flo-bits"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"$sexpr-syntax-if-tag", &module_info_syntax, "$sexpr-syntax-if-tag"},
  {"build-condition-for-handler-interactively", &module_info_runtime, "build-condition-for-handler-interactively"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"%os-val-setter", &module_info_boot, "%os-val-setter"},
  {"map", &module_info_macros, "map"},
  {"trunc/", &module_info_protoSmath, "trunc/"},
  {"force-out", &module_info_protoSports, "force-out"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"case-insensitive-string-equal", &module_info_protoScollectionsStable, "case-insensitive-string-equal"},
  {"invalidate-dependent", &module_info_dependency, "invalidate-dependent"},
  {"~=", &module_info_protoSmath, "~="},
  {"t?", &module_info_protoStypes, "t?"},
  {"get", &module_info_protoSports, "get"},
  {"all2?", &module_info_protoStypes, "all2?"},
  {"reject", &module_info_protoScollectionsSsequence, "reject"},
  {"match", &module_info_macros, "match"},
  {"sexpr-make-anonymous-method", &module_info_syntax, "sexpr-make-anonymous-method"},
  {"$sexpr-method-tag", &module_info_syntax, "$sexpr-method-tag"},
  {"<file-port>", &module_info_protoSports, "<file-port>"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"range", &module_info_protoScollectionsSrange, "range"},
  {"assert", &module_info_macros, "assert"},
  {"sig-val", &module_info_boot, "sig-val"},
  {"prop-bound?", &module_info_boot, "prop-bound?"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"goo-filename", &module_info_protoSsystem, "goo-filename"},
  {"<log>", &module_info_boot, "<log>"},
  {"range-by", &module_info_protoScollectionsSrange, "range-by"},
  {"$sexpr-let-tag", &module_info_syntax, "$sexpr-let-tag"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"neg", &module_info_protoSmath, "neg"},
  {"|", &module_info_protoSmath, "|"},
  {"sqrt", &module_info_protoSmath, "sqrt"},
  {"type-object", &module_info_boot, "type-object"},
  {"%open-out-file", &module_info_boot, "%open-out-file"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"$expansion-parse-dependency", &module_info_dependency, "$expansion-parse-dependency"},
  {"%c<", &module_info_boot, "%c<"},
  {"components-basename", &module_info_protoSsystem, "components-basename"},
  {"%ftan", &module_info_boot, "%ftan"},
  {"<port>", &module_info_protoSports, "<port>"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"<string-out-port>", &module_info_protoSports, "<string-out-port>"},
  {"<in-port>", &module_info_protoSports, "<in-port>"},
  {"<file-out-port>", &module_info_protoSports, "<file-out-port>"},
  {"%%sym", &module_info_boot, "%%sym"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"*", &module_info_protoSmath, "*"},
  {"renew", &module_info_macros, "renew"},
  {"$sexpr-def-tag", &module_info_syntax, "$sexpr-def-tag"},
  {"round", &module_info_protoSmath, "round"},
  {"decf", &module_info_macros, "decf"},
  {"*exe-extension*", &module_info_protoSsystem, "*exe-extension*"},
  {"file-mtime", &module_info_protoSsystem, "file-mtime"},
  {"%raw", &module_info_boot, "%raw"},
  {"logn", &module_info_protoSmath, "logn"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"as-log", &module_info_protoSmath, "as-log"},
  {"%ready?", &module_info_boot, "%ready?"},
  {"invoke-handler-interactively", &module_info_runtime, "invoke-handler-interactively"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"%f+", &module_info_boot, "%f+"},
  {"@len", &module_info_boot, "@len"},
  {"1+", &module_info_protoSmath, "1+"},
  {"pow", &module_info_protoSmath, "pow"},
  {"*max-print-depth*", &module_info_write, "*max-print-depth*"},
  {"range-check", &module_info_protoScollectionsSsequence, "range-check"},
  {"%vec", &module_info_boot, "%vec"},
  {"%facos", &module_info_boot, "%facos"},
  {"%slen", &module_info_boot, "%slen"},
  {"sexpr-prop-init", &module_info_syntax, "sexpr-prop-init"},
  {"find", &module_info_protoScollectionsScollection, "find"},
  {"newline", &module_info_protoSports, "newline"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"sexpr-sequence->begin", &module_info_syntax, "sexpr-sequence->begin"},
  {"digit?", &module_info_protoSmath, "digit?"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"prop-owner", &module_info_boot, "prop-owner"},
  {"tab-gc-state", &module_info_protoScollectionsStable, "tab-gc-state"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"sexpr-make-begin", &module_info_syntax, "sexpr-make-begin"},
  {"<bot>", &module_info_protoSmath, "<bot>"},
  {"to-str", &module_info_protoSmath, "to-str"},
  {"fab-setter-name", &module_info_macros, "fab-setter-name"},
  {"sexpr-define-class-parents", &module_info_syntax, "sexpr-define-class-parents"},
  {"%ft", &module_info_boot, "%ft"},
  {"t<", &module_info_protoStypes, "t<"},
  {"%untag", &module_info_boot, "%untag"},
  {"object-class", &module_info_boot, "object-class"},
  {"floor/", &module_info_protoSmath, "floor/"},
  {"push", &module_info_protoScollectionsSlist, "push"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"atan", &module_info_protoSmath, "atan"},
  {"%fsin", &module_info_boot, "%fsin"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"dependency-includes-any?", &module_info_dependency, "dependency-includes-any?"},
  {"sexpr-if-test", &module_info_syntax, "sexpr-if-test"},
  {"try", &module_info_boot, "try"},
  {"*report-prop-unbound-errors?*", &module_info_boot, "*report-prop-unbound-errors?*"},
  {"cat2", &module_info_protoScollectionsSsequence, "cat2"},
  {"pick", &module_info_protoScollectionsSsequence, "pick"},
  {"prop-value", &module_info_boot, "prop-value"},
  {"<restart>", &module_info_runtime, "<restart>"},
  {"collected", &module_info_macros, "collected"},
  {"tab-growth-threshold", &module_info_protoScollectionsStable, "tab-growth-threshold"},
  {"%i-", &module_info_boot, "%i-"},
  {"dv", &module_info_boot, "dv"},
  {"<list>", &module_info_protoScollectionsSlist, "<list>"},
  {"match-atom", &module_info_macros, "match-atom"},
  {">", &module_info_protoSmagnitudes, ">"},
  {"<string-port>", &module_info_protoSports, "<string-port>"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"sexpr-variable-name", &module_info_syntax, "sexpr-variable-name"},
  {"char->ascii", &module_info_protoSmath, "char->ascii"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"<any>", &module_info_boot, "<any>"},
  {"prop-type", &module_info_boot, "prop-type"},
  {"elt-setter", &module_info_protoScollectionsScollection, "elt-setter"},
  {"sexpr-unwind-protect-protected-form", &module_info_syntax, "sexpr-unwind-protect-protected-form"},
  {"seq", &module_info_boot, "seq"},
  {"read", &module_info_runtime, "read"},
  {"invalidate-dependents", &module_info_dependency, "invalidate-dependents"},
  {"var-type", &module_info_macros, "var-type"},
  {"%i<", &module_info_boot, "%i<"},
  {"to-upper", &module_info_protoSmath, "to-upper"},
  {"%selt", &module_info_boot, "%selt"},
  {"any?", &module_info_protoStypes, "any?"},
  {"%fatan", &module_info_boot, "%fatan"},
  {"cat!", &module_info_protoScollectionsSsequence, "cat!"},
  {"pushf", &module_info_macros, "pushf"},
  {"class-props", &module_info_boot, "class-props"},
  {"zap", &module_info_protoScollectionsScollection, "zap"},
  {"eval", &module_info_syntax, "eval"},
  {"components-to-pathname", &module_info_protoSsystem, "components-to-pathname"},
  {"assqn", &module_info_protoScollectionsSlist, "assqn"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"case-insensitive-string-hash", &module_info_protoScollectionsStable, "case-insensitive-string-hash"},
  {"address-of", &module_info_protoSmath, "address-of"},
  {"sexpr-syntax-definition-variable", &module_info_syntax, "sexpr-syntax-definition-variable"},
  {"fab-map", &module_info_protoScollectionsSmap, "fab-map"},
  {"t=", &module_info_protoStypes, "t="},
  {"error", &module_info_boot, "error"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"ddv", &module_info_macros, "ddv"},
  {"label-components", &module_info_protoSsystem, "label-components"},
  {">>>", &module_info_protoSmath, ">>>"},
  {"%cb", &module_info_boot, "%cb"},
  {"<", &module_info_protoSmagnitudes, "<"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"<str-tab>", &module_info_protoScollectionsStable, "<str-tab>"},
  {"%force-out", &module_info_boot, "%force-out"},
  {"sexpr-method-body", &module_info_syntax, "sexpr-method-body"},
  {"%fsqrt", &module_info_boot, "%fsqrt"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"%prop-unbound-error", &module_info_boot, "%prop-unbound-error"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"%iv", &module_info_boot, "%iv"},
  {"sexpr-prop-type", &module_info_syntax, "sexpr-prop-type"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"map-str", &module_info_strings, "map-str"},
  {"do3", &module_info_protoScollectionsScollection, "do3"},
  {"<error>", &module_info_runtime, "<error>"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"display", &module_info_write, "display"},
  {"collecting", &module_info_macros, "collecting"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"sexpr-syntax-if-else", &module_info_syntax, "sexpr-syntax-if-else"},
  {"len-setter", &module_info_protoScollectionsSbuffer, "len-setter"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"sexpr-method-signature", &module_info_syntax, "sexpr-method-signature"},
  {"def", &module_info_boot, "def"},
  {"%gen-code", &module_info_boot, "%gen-code"},
  {"%puts", &module_info_boot, "%puts"},
  {"%su", &module_info_boot, "%su"},
  {"as-copy", &module_info_protoScollectionsScollection, "as-copy"},
  {"dependency-or", &module_info_dependency, "dependency-or"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"@all2?", &module_info_boot, "@all2?"},
  {"@==", &module_info_boot, "@=="},
  {"process-id", &module_info_protoSsystem, "process-id"},
  {"add", &module_info_protoScollectionsScollection, "add"},
  {"quote", &module_info_boot, "quote"},
  {"trunc", &module_info_protoSmath, "trunc"},
  {"%str", &module_info_boot, "%str"},
  {"items", &module_info_protoScollectionsScollection, "items"},
  {"2nd", &module_info_protoStypes, "2nd"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"sexpr-fab-setter", &module_info_syntax, "sexpr-fab-setter"},
  {"alpha?", &module_info_protoSmath, "alpha?"},
  {"out", &module_info_protoSports, "out"},
  {"ceil", &module_info_protoSmath, "ceil"},
  {"fin", &module_info_boot, "fin"},
  {"<col>", &module_info_boot, "<col>"},
  {"esc", &module_info_boot, "esc"},
  {"<class>", &module_info_boot, "<class>"},
  {"%close-in-port", &module_info_boot, "%close-in-port"},
  {"c-filename", &module_info_protoSsystem, "c-filename"},
  {"loc-val", &module_info_runtime, "loc-val"},
  {"upper?", &module_info_protoSmath, "upper?"},
  {"$sexpr-if-tag", &module_info_syntax, "$sexpr-if-tag"},
  {"add!", &module_info_protoScollectionsScollection, "add!"},
  {"finds", &module_info_protoScollectionsSsequence, "finds"},
  {"<mag>", &module_info_boot, "<mag>"},
  {"to-lower", &module_info_protoSmath, "to-lower"},
  {"%i^", &module_info_boot, "%i^"},
  {"$sexpr-define-function-tag", &module_info_syntax, "$sexpr-define-function-tag"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"find-or", &module_info_protoScollectionsScollection, "find-or"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"pos?", &module_info_protoSmath, "pos?"},
  {"sexpr-prop-owner", &module_info_syntax, "sexpr-prop-owner"},
  {"%fatan2", &module_info_boot, "%fatan2"},
  {"describe-handler", &module_info_runtime, "describe-handler"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"%i=", &module_info_boot, "%i="},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"tab-shrink-threshold-setter", &module_info_protoScollectionsStable, "tab-shrink-threshold-setter"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"file-type", &module_info_protoSsystem, "file-type"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"sexpr-isa-init-values", &module_info_syntax, "sexpr-isa-init-values"},
  {"<tab>", &module_info_protoScollectionsScollection, "<tab>"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"$all-dependency-types", &module_info_dependency, "$all-dependency-types"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"<product>", &module_info_protoStypes, "<product>"},
  {"%i?", &module_info_boot, "%i?"},
  {"pathname-to-components", &module_info_protoSsystem, "pathname-to-components"},
  {"%snul", &module_info_boot, "%snul"},
  {"dp", &module_info_boot, "dp"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"str", &module_info_protoScollectionsSstring, "str"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"exe-filename", &module_info_protoSsystem, "exe-filename"},
  {"ascii-whitespaces", &module_info_protoScollectionsSstring, "ascii-whitespaces"},
  {"elt-or", &module_info_protoScollectionsScollection, "elt-or"},
  {"format", &module_info_runtime, "format"},
  {"string-repeat", &module_info_strings, "string-repeat"},
  {"%ftanh", &module_info_boot, "%ftanh"},
  {"$optimizaton-dependencies", &module_info_dependency, "$optimizaton-dependencies"},
  {"cat", &module_info_macros, "cat"},
  {"for", &module_info_macros, "for"},
  {"dependency-and", &module_info_dependency, "dependency-and"},
  {"%put", &module_info_boot, "%put"},
  {"bit?", &module_info_protoSmath, "bit?"},
  {"cosh", &module_info_protoSmath, "cosh"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"del", &module_info_protoScollectionsScollection, "del"},
  {"add-prop", &module_info_boot, "add-prop"},
  {"bound?", &module_info_boot, "bound?"},
  {"components-last", &module_info_protoSsystem, "components-last"},
  {"os-name", &module_info_protoSsystem, "os-name"},
  {"*obj-extension*", &module_info_protoSsystem, "*obj-extension*"},
  {"len", &module_info_protoStypes, "len"},
  {"type-elts-setter", &module_info_protoStypes, "type-elts-setter"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"build-condition-interactively", &module_info_runtime, "build-condition-interactively"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"<enum>", &module_info_protoScollectionsScollection, "<enum>"},
  {"@<", &module_info_boot, "@<"},
  {"dm", &module_info_boot, "dm"},
  {"components-parent-directory", &module_info_protoSsystem, "components-parent-directory"},
  {"mod", &module_info_protoSmath, "mod"},
  {"sexpr-block-name", &module_info_syntax, "sexpr-block-name"},
  {"tail", &module_info_boot, "tail"},
  {"do2", &module_info_protoScollectionsScollection, "do2"},
  {"max", &module_info_protoSmagnitudes, "max"},
  {"acos", &module_info_protoSmath, "acos"},
  {"power-of-two-ceiling", &module_info_protoSmath, "power-of-two-ceiling"},
  {"%gen-code-setter", &module_info_boot, "%gen-code-setter"},
  {"<type>", &module_info_boot, "<type>"},
  {"sexpr-function-signature", &module_info_syntax, "sexpr-function-signature"},
  {"napp", &module_info_macros, "napp"},
  {"app-args", &module_info_runtime, "app-args"},
  {"low-elt-setter", &module_info_protoScollectionsScollection, "low-elt-setter"},
  {"sexpr-expand-backquote", &module_info_syntax, "sexpr-expand-backquote"},
  {"$sexpr-locals-tag", &module_info_syntax, "$sexpr-locals-tag"},
  {"$name-parse-dependency", &module_info_dependency, "$name-parse-dependency"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"ord-app-mets", &module_info_boot, "ord-app-mets"},
  {"<buf>", &module_info_protoScollectionsSbuffer, "<buf>"},
  {"fab", &module_info_protoScollectionsScollection, "fab"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"<<", &module_info_protoSmath, "<<"},
  {"case-by", &module_info_macros, "case-by"},
  {"list-handlers", &module_info_runtime, "list-handlers"},
  {"min", &module_info_protoSmagnitudes, "min"},
  {"<file-in-port>", &module_info_protoSports, "<file-in-port>"},
  {"sexpr-assignment-variable", &module_info_syntax, "sexpr-assignment-variable"},
  {"tab-growth-factor", &module_info_protoScollectionsStable, "tab-growth-factor"},
  {"*path-separator*", &module_info_protoSsystem, "*path-separator*"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"ins", &module_info_protoScollectionsSsequence, "ins"},
  {"always", &module_info_runtime, "always"},
  {"writeln", &module_info_write, "writeln"},
  {"close", &module_info_protoSports, "close"},
  {"set", &module_info_boot, "set"},
  {"$sexpr-define-generic-tag", &module_info_syntax, "$sexpr-define-generic-tag"},
  {"loc", &module_info_boot, "loc"},
  {"fill", &module_info_protoScollectionsScollection, "fill"},
  {"%i&", &module_info_boot, "%i&"},
  {"<map>", &module_info_protoScollectionsSmap, "<map>"},
  {"class-name", &module_info_boot, "class-name"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"<set>", &module_info_protoScollectionsStable, "<set>"},
  {"identity", &module_info_runtime, "identity"},
  {"swapf", &module_info_macros, "swapf"},
  {"sinh", &module_info_protoSmath, "sinh"},
  {"$value-optimization-dependency", &module_info_dependency, "$value-optimization-dependency"},
  {"sexpr-if-else", &module_info_syntax, "sexpr-if-else"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"%loc-val", &module_info_boot, "%loc-val"},
  {"sig", &module_info_runtime, "sig"},
  {"*goo-extension*", &module_info_protoSsystem, "*goo-extension*"},
  {"if", &module_info_boot, "if"},
  {"sexpr-bind-pattern-variables", &module_info_syntax, "sexpr-bind-pattern-variables"},
  {"sexpr-define-class?", &module_info_syntax, "sexpr-define-class?"},
  {"sexpr-operator", &module_info_syntax, "sexpr-operator"},
  {"sexpr-function-body", &module_info_syntax, "sexpr-function-body"},
  {"isqrt", &module_info_protoSmath, "isqrt"},
  {"1-", &module_info_protoSmath, "1-"},
  {"$e", &module_info_protoSmath, "$e"},
  {"sexpr-def-variable", &module_info_syntax, "sexpr-def-variable"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"<string-in-port>", &module_info_protoSports, "<string-in-port>"},
  {"dlet", &module_info_macros, "dlet"},
  {"eof-object?", &module_info_protoSmath, "eof-object?"},
  {"empty", &module_info_protoScollectionsScollection, "empty"},
  {"%peek", &module_info_boot, "%peek"},
  {"sexpr-operands", &module_info_syntax, "sexpr-operands"},
  {"prop-setter", &module_info_boot, "prop-setter"},
  {"nul", &module_info_boot, "nul"},
  {"assocs-test", &module_info_protoScollectionsSassoc, "assocs-test"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"sexpr-text-of-quotation", &module_info_syntax, "sexpr-text-of-quotation"},
  {"last", &module_info_protoScollectionsSsequence, "last"},
  {"$parse-dependencies", &module_info_dependency, "$parse-dependencies"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"sexpr-syntax-if-pattern", &module_info_syntax, "sexpr-syntax-if-pattern"},
  {"nxt", &module_info_protoScollectionsScollection, "nxt"},
  {"now", &module_info_protoScollectionsScollection, "now"},
  {"%fasin", &module_info_boot, "%fasin"},
  {"len/fill-setter", &module_info_protoScollectionsSbuffer, "len/fill-setter"},
  {"fun-val", &module_info_boot, "fun-val"},
  {"when", &module_info_macros, "when"},
  {"%it/", &module_info_boot, "%it/"},
  {"sexpr-prop-init-var", &module_info_syntax, "sexpr-prop-init-var"},
  {"%pair", &module_info_boot, "%pair"},
  {"sexpr-prop-name", &module_info_syntax, "sexpr-prop-name"},
  {"probe-directory", &module_info_protoSsystem, "probe-directory"},
  {"collect", &module_info_macros, "collect"},
  {"class-ancestors", &module_info_boot, "class-ancestors"},
  {"$sexpr-isa-tag", &module_info_syntax, "$sexpr-isa-tag"},
  {"atan2", &module_info_protoSmath, "atan2"},
  {"low-elt", &module_info_protoScollectionsScollection, "low-elt"},
  {"into", &module_info_protoScollectionsScollection, "into"},
  {"rev", &module_info_protoScollectionsSsequence, "rev"},
  {"%current-out-port", &module_info_boot, "%current-out-port"},
  {"num-to-str", &module_info_protoSmath, "num-to-str"},
  {"$sexpr-quote-tag", &module_info_syntax, "$sexpr-quote-tag"},
  {"%c=", &module_info_boot, "%c="},
  {"unless", &module_info_macros, "unless"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"sexpr-signature-parameters", &module_info_syntax, "sexpr-signature-parameters"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"<step>", &module_info_protoScollectionsSstep, "<step>"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"sexpr-syntax-definition-value", &module_info_syntax, "sexpr-syntax-definition-value"},
  {"%f=", &module_info_boot, "%f="},
  {"spread", &module_info_runtime, "spread"},
  {"neg?", &module_info_protoSmath, "neg?"},
  {"with-port", &module_info_protoSports, "with-port"},
  {"dc", &module_info_boot, "dc"},
  {"abs", &module_info_protoSmath, "abs"},
  {"floor", &module_info_protoSmath, "floor"},
  {"pair", &module_info_macros, "pair"},
  {"contagious-type", &module_info_protoSmath, "contagious-type"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"$pi", &module_info_protoSmath, "$pi"},
  {"ins!", &module_info_protoScollectionsSsequence, "ins!"},
  {"sexpr-loc-bound-names", &module_info_syntax, "sexpr-loc-bound-names"},
  {"%gen-refs", &module_info_boot, "%gen-refs"},
  {"all?", &module_info_protoScollectionsScollection, "all?"},
  {"os-val", &module_info_protoSsystem, "os-val"},
  {">=", &module_info_protoSmagnitudes, ">="},
  {"<out-port>", &module_info_protoSports, "<out-port>"},
  {"add-tmp-path", &module_info_protoSsystem, "add-tmp-path"},
  {"ceiling/", &module_info_protoSmath, "ceiling/"},
  {"asin", &module_info_protoSmath, "asin"},
  {"app-sup", &module_info_macros, "app-sup"},
  {"first-then", &module_info_protoScollectionsSstep, "first-then"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"elt", &module_info_macros, "elt"},
  {"as", &module_info_protoStypes, "as"},
  {"ascii-limit", &module_info_protoScollectionsSstring, "ascii-limit"},
  {"now-setter", &module_info_protoScollectionsScollection, "now-setter"},
  {"%close-out-port", &module_info_boot, "%close-out-port"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"list", &module_info_protoScollectionsSlist, "list"},
  {"sexpr-loc-bound-bodies", &module_info_syntax, "sexpr-loc-bound-bodies"},
  {"~", &module_info_protoSmath, "~"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"sexpr-if-then", &module_info_syntax, "sexpr-if-then"},
  {"%f/", &module_info_boot, "%f/"},
  {"sexpr-def-value", &module_info_syntax, "sexpr-def-value"},
  {"gen-src-setter", &module_info_boot, "gen-src-setter"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"do", &module_info_macros, "do"},
  {"%fpow", &module_info_boot, "%fpow"},
  {"@isa?", &module_info_boot, "@isa?"},
  {"export", &module_info_boot, "export"},
  {"3rd", &module_info_protoScollectionsSsequence, "3rd"},
  {"keys", &module_info_protoScollectionsScollection, "keys"},
  {"while", &module_info_macros, "while"},
  {"compose", &module_info_runtime, "compose"},
  {"%fcosh", &module_info_boot, "%fcosh"},
  {"ct", &module_info_boot, "ct"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"os-val-setter", &module_info_protoSsystem, "os-val-setter"},
  {"range-error", &module_info_protoScollectionsScollection, "range-error"},
  {"*max-print-length*", &module_info_write, "*max-print-length*"},
  {"sexpr-loc-raw-body", &module_info_syntax, "sexpr-loc-raw-body"},
  {"sexpr-fab-setter-name", &module_info_syntax, "sexpr-fab-setter-name"},
  {"<prop>", &module_info_boot, "<prop>"},
  {"empty?", &module_info_macros, "empty?"},
  {"tab-growth-factor-setter", &module_info_protoScollectionsStable, "tab-growth-factor-setter"},
  {"^", &module_info_protoSmath, "^"},
  {"sub-setter", &module_info_protoScollectionsSsequence, "sub-setter"},
  {"dl", &module_info_boot, "dl"},
  {"$empty-dependency", &module_info_dependency, "$empty-dependency"},
  {"port-index-setter", &module_info_protoSports, "port-index-setter"},
  {"<assocs>", &module_info_protoScollectionsSassoc, "<assocs>"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"sexpr-signature-value", &module_info_syntax, "sexpr-signature-value"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"%ib", &module_info_boot, "%ib"},
  {"%i*", &module_info_boot, "%i*"},
  {"nil", &module_info_boot, "nil"},
  {"let", &module_info_boot, "let"},
  {"sexpr-make-application", &module_info_syntax, "sexpr-make-application"},
  {"%open-in-file", &module_info_boot, "%open-in-file"},
  {"detach-dependent", &module_info_dependency, "detach-dependent"},
  {"gen-src", &module_info_boot, "gen-src"},
  {"new", &module_info_boot, "new"},
  {"%f<", &module_info_boot, "%f<"},
  {"use", &module_info_boot, "use"},
  {"tab-growth-threshold-setter", &module_info_protoScollectionsStable, "tab-growth-threshold-setter"},
  {"sexpr-prop-init?", &module_info_syntax, "sexpr-prop-init?"},
  {"file-exists?", &module_info_protoSsystem, "file-exists?"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"port-contents", &module_info_protoSports, "port-contents"},
  {"fabs", &module_info_protoSmath, "fabs"},
  {"%i!", &module_info_boot, "%i!"},
  {"ready?", &module_info_protoSports, "ready?"},
  {"sexpr-definition-variable", &module_info_syntax, "sexpr-definition-variable"},
  {"$sexpr-define-class-tag", &module_info_syntax, "$sexpr-define-class-tag"},
  {"lower?", &module_info_protoSmath, "lower?"},
  {"now-key", &module_info_protoScollectionsScollection, "now-key"},
  {"to-digit", &module_info_protoSmath, "to-digit"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"tan", &module_info_protoSmath, "tan"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"object-props", &module_info_boot, "object-props"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"dg", &module_info_boot, "dg"},
  {"*gensym-counter*", &module_info_runtime, "*gensym-counter*"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"sexpr-isa-init-props", &module_info_syntax, "sexpr-isa-init-props"},
  {"<int>", &module_info_boot, "<int>"},
  {"<range>", &module_info_protoScollectionsSrange, "<range>"},
  {"%lb", &module_info_boot, "%lb"},
  {"<str>", &module_info_boot, "<str>"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"id-hash", &module_info_protoScollectionsStable, "id-hash"},
  {"port-index", &module_info_protoSports, "port-index"},
  {"%with-monitor", &module_info_boot, "%with-monitor"},
  {"sexpr-fab-getter", &module_info_syntax, "sexpr-fab-getter"},
  {"%fu", &module_info_boot, "%fu"},
  {"do-key-vals", &module_info_protoScollectionsSsequence, "do-key-vals"},
  {"1st", &module_info_protoScollectionsSsequence, "1st"},
  {"pop", &module_info_protoScollectionsSlist, "pop"},
  {"<=", &module_info_protoSmagnitudes, "<="},
  {"sup", &module_info_macros, "sup"},
  {"%sb", &module_info_boot, "%sb"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"%os-val", &module_info_boot, "%os-val"},
  {">>", &module_info_protoSmath, ">>"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"open", &module_info_protoSports, "open"},
  {"$sexpr-define-tag", &module_info_syntax, "$sexpr-define-tag"},
  {"cat-sym", &module_info_macros, "cat-sym"},
  {"%velt", &module_info_boot, "%velt"},
  {"odd?", &module_info_protoSmath, "odd?"},
  {"==", &module_info_macros, "=="},
  {"sexpr-definition-value", &module_info_syntax, "sexpr-definition-value"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"curry", &module_info_runtime, "curry"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"mem?", &module_info_protoScollectionsScollection, "mem?"},
  {"key-test", &module_info_protoScollectionsScollection, "key-test"},
  {"sexpr-function-definition-variable", &module_info_syntax, "sexpr-function-definition-variable"},
  {"port-line-setter", &module_info_protoSports, "port-line-setter"},
  {"%cu", &module_info_boot, "%cu"},
  {"%current-in-port", &module_info_boot, "%current-in-port"},
  {"=", &module_info_protoSmath, "="},
  {"rev!", &module_info_macros, "rev!"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"$sexpr-macro-expand-tag", &module_info_syntax, "$sexpr-macro-expand-tag"},
  {"/", &module_info_protoSmath, "/"},
  {"peek", &module_info_protoSports, "peek"},
  {"vals-to-str", &module_info_protoScollectionsSsequence, "vals-to-str"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"without-prop-unbound-errors", &module_info_macros, "without-prop-unbound-errors"},
  {"any2?", &module_info_protoScollectionsScollection, "any2?"},
  {"ds", &module_info_boot, "ds"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"type-class", &module_info_boot, "type-class"},
  {"%flog", &module_info_boot, "%flog"},
  {"sexpr-make-macro-function", &module_info_syntax, "sexpr-make-macro-function"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"%fb", &module_info_boot, "%fb"},
  {"lst", &module_info_boot, "lst"},
  {"tup", &module_info_boot, "tup"},
  {"log-dependency", &module_info_dependency, "log-dependency"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"in", &module_info_protoSports, "in"},
  {"isa?", &module_info_boot, "isa?"},
  {"<union>", &module_info_boot, "<union>"},
  {"sexpr-unquote-splicing?", &module_info_syntax, "sexpr-unquote-splicing?"},
  {"fun", &module_info_boot, "fun"},
  {"%bb", &module_info_boot, "%bb"},
  {"%prop", &module_info_boot, "%prop"},
  {"create-directory", &module_info_protoSsystem, "create-directory"},
  {"sexpr-isa-parent", &module_info_syntax, "sexpr-isa-parent"},
  {"cos", &module_info_protoSmath, "cos"},
  {"$sexpr-set-tag", &module_info_syntax, "$sexpr-set-tag"},
  {"$sexpr-begin-tag", &module_info_syntax, "$sexpr-begin-tag"},
  {"%process-module", &module_info_boot, "%process-module"},
  {"obj-filename", &module_info_protoSsystem, "obj-filename"},
  {"t*", &module_info_protoStypes, "t*"},
  {"%f-", &module_info_boot, "%f-"},
  {"tab-hash", &module_info_protoScollectionsStable, "tab-hash"},
  {"dependency-includes-all?", &module_info_dependency, "dependency-includes-all?"},
  {"case", &module_info_macros, "case"},
  {"puts", &module_info_protoSports, "puts"},
  {"fab-handler", &module_info_runtime, "fab-handler"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"pop-last!", &module_info_protoScollectionsSbuffer, "pop-last!"},
  {"sexpr-def?", &module_info_syntax, "sexpr-def?"},
  {"add-build-path", &module_info_protoSsystem, "add-build-path"},
  {"%isa", &module_info_boot, "%isa"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"fold+", &module_info_protoScollectionsScollection, "fold+"},
  {"push-last!", &module_info_protoScollectionsSbuffer, "push-last!"},
  {"popf", &module_info_macros, "popf"},
  {"sexpr-function-definition-value", &module_info_syntax, "sexpr-function-definition-value"},
  {"head", &module_info_boot, "head"},
  {"$sexpr-prop-tag", &module_info_syntax, "$sexpr-prop-tag"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"df", &module_info_boot, "df"},
  {"str-to-num", &module_info_protoScollectionsSstring, "str-to-num"},
  {"*goo-root*", &module_info_protoSsystem, "*goo-root*"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"def-list", NULL},
  {"special-use-module", &YastYspecial_use_module},
  {"default-type", &YastYdefault_type},
  {"objectify-assignment", &YastYobjectify_assignment},
  {"binding-global-box", &YastYbinding_global_box},
  {"reference-frame-number-setter", &YastYreference_frame_number_setter},
  {"objectify-use-module", &YastYobjectify_use_module},
  {"environment-module", &YastYenvironment_module},
  {"special-bind-exit", &YastYspecial_bind_exit},
  {"pairize", &YastYpairize},
  {"special-compile-time", &YastYspecial_compile_time},
  {"signature-arity-setter", &YastYsignature_arity_setter},
  {"<constant>", &YastYLconstantG},
  {"fix-let-body-setter", &YastYfix_let_body_setter},
  {"module-name", &YastYmodule_name},
  {"<monitor>", &YastYLmonitorG},
  {"<ast-macro-definition>", &YastYLast_macro_definitionG},
  {"objectify-error", &YastYobjectify_error},
  {"global-box-value-setter", &YastYglobal_box_value_setter},
  {"---main-2---", NULL},
  {"export-binding!", &YastYexport_bindingX},
  {"*current-dependent*", &YastYTcurrent_dependentT},
  {"application-known?", &YastYapplication_knownQ},
  {"fix-let-bindings-setter", &YastYfix_let_bindings_setter},
  {"binding-info", &YastYbinding_info},
  {"unwind-protect-protected-thunk", &YastYunwind_protect_protected_thunk},
  {"bound?-reference", &YastYboundQ_reference},
  {"compile-time-program-setter", &YastYcompile_time_program_setter},
  {"probe-module", &YastYprobe_module},
  {"$sequential-empty", &YastYDsequential_empty},
  {"---main-9---", NULL},
  {"update-binding-kind", &YastYupdate_binding_kind},
  {"expand-bind-element", &YastYexpand_bind_element},
  {"env-object-name", &YastYenv_object_name},
  {"binding-locative", &YastYbinding_locative},
  {"monitor-main-thunk", &YastYmonitor_main_thunk},
  {"module-runtime-data-setter", &YastYmodule_runtime_data_setter},
  {"environment-module-loader-setter", &YastYenvironment_module_loader_setter},
  {"fab-g2c-module", &YastYfab_g2c_module},
  {"special-define-generic", &YastYspecial_define_generic},
  {"special-quasiquote", &YastYspecial_quasiquote},
  {"<static-empty-environment>", &YastYLstatic_empty_environmentG},
  {"application-function-setter", &YastYapplication_function_setter},
  {"bind-exit-main-fun-setter", &YastYbind_exit_main_fun_setter},
  {"binding-free?-setter", &YastYbinding_freeQ_setter},
  {"<alternative>", &YastYLalternativeG},
  {"objectify-syntax-definition", &YastYobjectify_syntax_definition},
  {"install-magic-bindings", &YastYinstall_magic_bindings},
  {"do-named-static-global-bindings", &YastYdo_named_static_global_bindings},
  {"reloader-do-export", &YastYreloader_do_export},
  {"load-in", &YastYload_in},
  {"<ast-method-definition>", &YastYLast_method_definitionG},
  {"alternative-condition", &YastYalternative_condition},
  {"special-monitor", &YastYspecial_monitor},
  {"<runtime-module-loader>", &YastYLruntime_module_loaderG},
  {"process-closed-application", &YastYprocess_closed_application},
  {"monitor-type", &YastYmonitor_type},
  {"application-next-methods", &YastYapplication_next_methods},
  {"process-nary-closed-application", &YastYprocess_nary_closed_application},
  {"expand-bind-list*", &YastYexpand_bind_listT},
  {"transform-defs", &YastYtransform_defs},
  {"monitor-info", &YastYmonitor_info},
  {"<fix-let>", &YastYLfix_letG},
  {"find-syntax-environment", &YastYfind_syntax_environment},
  {"<binding>", &YastYLbindingG},
  {"function-index", &YastYfunction_index},
  {"module-syntax-environment-setter", &YastYmodule_syntax_environment_setter},
  {"objectify-unwind-protect", &YastYobjectify_unwind_protect},
  {"transaction-empty?", &YastYtransaction_emptyQ},
  {"init-ast", &YastYinit_ast},
  {"binding-name-setter", &YastYbinding_name_setter},
  {"unwind-protect-cleanup-thunk-setter", &YastYunwind_protect_cleanup_thunk_setter},
  {"function-signature-setter", &YastYfunction_signature_setter},
  {"function-body", &YastYfunction_body},
  {"binding-module-name-setter", &YastYbinding_module_name_setter},
  {"$sexpr-optionals-tag", &YastYDsexpr_optionals_tag},
  {"call-with-subtransaction", &YastYcall_with_subtransaction},
  {"expand-syntax-if", &YastYexpand_syntax_if},
  {"locals-bindings", &YastYlocals_bindings},
  {"set-module-environments", &YastYset_module_environments},
  {"fab-syntax-environment", &YastYfab_syntax_environment},
  {"<passive-program>", &YastYLpassive_programG},
  {"function-temporaries-setter", &YastYfunction_temporaries_setter},
  {"binding-name", &YastYbinding_name},
  {"<program>", &YastYLprogramG},
  {"function-free", &YastYfunction_free},
  {"special-%raw", &YastYspecial_Praw},
  {"binding-type", &YastYbinding_type},
  {"find-static-global-environment", &YastYfind_static_global_environment},
  {"special-unwind-protect", &YastYspecial_unwind_protect},
  {"<method-application>", &YastYLmethod_applicationG},
  {"objectify-export", &YastYobjectify_export},
  {"init-runtime", &YastYinit_runtime},
  {"objectify-quotation", &YastYobjectify_quotation},
  {"module-target-environment", &YastYmodule_target_environment},
  {"signature-names-setter", &YastYsignature_names_setter},
  {"<module>", &YastYLmoduleG},
  {"expand-pattern", &YastYexpand_pattern},
  {"objectify-list", &YastYobjectify_list},
  {"macro-expander", &YastYmacro_expander},
  {"load-module", &YastYload_module},
  {"*current-subtransaction*", &YastYTcurrent_subtransactionT},
  {"module-loader-stack", &YastYmodule_loader_stack},
  {"fix-let-bindings", &YastYfix_let_bindings},
  {"assignment-reference-setter", &YastYassignment_reference_setter},
  {"special-begin", &YastYspecial_begin},
  {"assignment-binding-setter", &YastYassignment_binding_setter},
  {"binding-locative-setter", &YastYbinding_locative_setter},
  {"program-type", &YastYprogram_type},
  {"runtime-module", &YastYruntime_module},
  {"reference-binding", &YastYreference_binding},
  {"program-type-setter", &YastYprogram_type_setter},
  {"unwind-protect-protected-thunk-setter", &YastYunwind_protect_protected_thunk_setter},
  {"init-g2c-boot-environment", &YastYinit_g2c_boot_environment},
  {"convert2arguments", &YastYconvert2arguments},
  {"special-iterate", &YastYspecial_iterate},
  {"function-value", &YastYfunction_value},
  {"special-isa", &YastYspecial_isa},
  {"function-free-setter", &YastYfunction_free_setter},
  {"objectify-with-subtransaction", &YastYobjectify_with_subtransaction},
  {"program-register", &YastYprogram_register},
  {"reference-frame-number", &YastYreference_frame_number},
  {"module-name-to-relpath", &YastYmodule_name_to_relpath},
  {"signature-arity", &YastYsignature_arity},
  {"binding-mutable?", &YastYbinding_mutableQ},
  {"---main-7---", NULL},
  {"$sexpr-%raw-tag", &YastYDsexpr_Praw_tag},
  {"application-tail?-setter", &YastYapplication_tailQ_setter},
  {"ast-<bot>", &YastYast_LbotG},
  {"special-prop", &YastYspecial_prop},
  {"merge-transactions!", &YastYmerge_transactionsX},
  {"register-module!", &YastYregister_moduleX},
  {"<compile-time>", &YastYLcompile_timeG},
  {"objectify-method-definition", &YastYobjectify_method_definition},
  {"special-bound?", &YastYspecial_boundQ},
  {"special-locals", &YastYspecial_locals},
  {"$sexpr-export-tag", &YastYDsexpr_export_tag},
  {"<bound?>", &YastYLboundQG},
  {"insert-global!", &YastYinsert_globalX},
  {"%module-exports", &YastYPmodule_exports},
  {"program-register-setter", &YastYprogram_register_setter},
  {"<unwind-protect>", &YastYLunwind_protectG},
  {"binding-kind-setter", &YastYbinding_kind_setter},
  {"fix-let-types-setter", &YastYfix_let_types_setter},
  {"syntax-environment-excluded-bindings", &YastYsyntax_environment_excluded_bindings},
  {"binding-value", &YastYbinding_value},
  {"<functions>", &YastYLfunctionsG},
  {"module-data-processed?-setter", &YastYmodule_data_processedQ_setter},
  {"objectify-assignment-using", &YastYobjectify_assignment_using},
  {"special-set", &YastYspecial_set},
  {"binding-index", &YastYbinding_index},
  {"$sexpr-define-primitive-tag", &YastYDsexpr_define_primitive_tag},
  {"locals-functions", &YastYlocals_functions},
  {"find-binding", &YastYfind_binding},
  {"<module-loader>", &YastYLmodule_loaderG},
  {"<static-global-environment>", &YastYLstatic_global_environmentG},
  {"signature-specs-setter", &YastYsignature_specs_setter},
  {"module-loader-modules", &YastYmodule_loader_modules},
  {"alternative-consequent-setter", &YastYalternative_consequent_setter},
  {"alternative-alternant-setter", &YastYalternative_alternant_setter},
  {"function-binding-setter", &YastYfunction_binding_setter},
  {"<definition>", &YastYLdefinitionG},
  {"transaction-dependents", &YastYtransaction_dependents},
  {"environment-allows-foreign-names?-setter", &YastYenvironment_allows_foreign_namesQ_setter},
  {"free-environment", &YastYfree_environment},
  {"<global-reference>", &YastYLglobal_referenceG},
  {"application-binding", &YastYapplication_binding},
  {"special-define-method", &YastYspecial_define_method},
  {"objectify-function", &YastYobjectify_function},
  {"environment-uses-modules", &YastYenvironment_uses_modules},
  {"<locals>", &YastYLlocalsG},
  {"<predefined-reference>", &YastYLpredefined_referenceG},
  {"locals-body-setter", &YastYlocals_body_setter},
  {"$sexpr-bound?-tag", &YastYDsexpr_boundQ_tag},
  {"transaction-implemented-bindings", &YastYtransaction_implemented_bindings},
  {"---main-8---", NULL},
  {"reference-called-function?", &YastYreference_called_functionQ},
  {"environment-bindings-setter", &YastYenvironment_bindings_setter},
  {"function-binding", &YastYfunction_binding},
  {"transaction-implemented-bindings-setter", &YastYtransaction_implemented_bindings_setter},
  {"reference-called-function?-setter", &YastYreference_called_functionQ_setter},
  {"<application>", &YastYLapplicationG},
  {"environment-module-loader", &YastYenvironment_module_loader},
  {"binding-free?", &YastYbinding_freeQ},
  {"<transaction>", &YastYLtransactionG},
  {"$arguments-empty", &YastYDarguments_empty},
  {"objectify-function-definition", &YastYobjectify_function_definition},
  {"function-nary?", &YastYfunction_naryQ},
  {"application-arguments-setter", &YastYapplication_arguments_setter},
  {"module-loader-stack-setter", &YastYmodule_loader_stack_setter},
  {"register-magic-binding", &YastYregister_magic_binding},
  {"function-self-recursive?-setter", &YastYfunction_self_recursiveQ_setter},
  {"<ast-method>", &YastYLast_methodG},
  {"ast-macro-expand", &YastYast_macro_expand},
  {"<sequential>", &YastYLsequentialG},
  {"environment-module-setter", &YastYenvironment_module_setter},
  {"with-dependent", NULL},
  {"<ast-function>", &YastYLast_functionG},
  {"signature-value-setter", &YastYsignature_value_setter},
  {"<ast-primitive>", &YastYLast_primitiveG},
  {"roll-back-transaction", &YastYroll_back_transaction},
  {"$empty-static-environment", &YastYDempty_static_environment},
  {"function-registers", &YastYfunction_registers},
  {"fix-let-arguments", &YastYfix_let_arguments},
  {"monitor-handler-setter", &YastYmonitor_handler_setter},
  {"$sexpr-use/export-module-tag", &YastYDsexpr_useSexport_module_tag},
  {"<regular-application>", &YastYLregular_applicationG},
  {"objectify-sequential", &YastYobjectify_sequential},
  {"module-target-environment-setter", &YastYmodule_target_environment_setter},
  {"%module-exports-setter", &YastYPmodule_exports_setter},
  {"special-macro-expand", &YastYspecial_macro_expand},
  {"reference-binding-setter", &YastYreference_binding_setter},
  {"<variable-definition>", &YastYLvariable_definitionG},
  {"expand-bind-list", &YastYexpand_bind_list},
  {"module-loader-module-type", &YastYmodule_loader_module_type},
  {"---main-6---", NULL},
  {"<bind-exit>", &YastYLbind_exitG},
  {"*runtime-module-loader*", &YastYTruntime_module_loaderT},
  {"function-specs", &YastYfunction_specs},
  {"environment-bindings", &YastYenvironment_bindings},
  {"module-exports-setter", &YastYmodule_exports_setter},
  {"function-signature", &YastYfunction_signature},
  {"function-self-recursive?", &YastYfunction_self_recursiveQ},
  {"alternative-alternant", &YastYalternative_alternant},
  {"def-programs", NULL},
  {"objectify-locals", &YastYobjectify_locals},
  {"environment-next-setter", &YastYenvironment_next_setter},
  {"constant-value-setter", &YastYconstant_value_setter},
  {"function-source", &YastYfunction_source},
  {"<local-binding>", &YastYLlocal_bindingG},
  {"maybe-log-dependency", &YastYmaybe_log_dependency},
  {"define-magic-binding", NULL},
  {"binding-inferred-type", &YastYbinding_inferred_type},
  {"ast-define-binding", &YastYast_define_binding},
  {"$functions-empty", &YastYDfunctions_empty},
  {"signature-nary?-setter", &YastYsignature_naryQ_setter},
  {"application-function", &YastYapplication_function},
  {"function-temporaries", &YastYfunction_temporaries},
  {"binding-inferred-type-setter", &YastYbinding_inferred_type_setter},
  {"magic-bindings", &YastYmagic_bindings},
  {"binding-dynamic-extent?", &YastYbinding_dynamic_extentQ},
  {"reload-macros", &YastYreload_macros},
  {"assignment-binding", &YastYassignment_binding},
  {"locals-functions-setter", &YastYlocals_functions_setter},
  {"---main-5---", NULL},
  {"<real-reference>", &YastYLreal_referenceG},
  {"objectify-monitor", &YastYobjectify_monitor},
  {"reloader-do-import", &YastYreloader_do_import},
  {"special-quote", &YastYspecial_quote},
  {"r-extend*", &YastYr_extendT},
  {"signature-names", &YastYsignature_names},
  {"fab-subset-environment", &YastYfab_subset_environment},
  {"init-g2c-regular-environment", &YastYinit_g2c_regular_environment},
  {"<ast-generic>", &YastYLast_genericG},
  {"objectify-bound?", &YastYobjectify_boundQ},
  {"monitor-test", &YastYmonitor_test},
  {"monitor-test-setter", &YastYmonitor_test_setter},
  {"special-define-primitive", &YastYspecial_define_primitive},
  {"objectify-foreign-reference", &YastYobjectify_foreign_reference},
  {"special-use/export-module", &YastYspecial_useSexport_module},
  {"function-index-setter", &YastYfunction_index_setter},
  {"monitor-main-thunk-setter", &YastYmonitor_main_thunk_setter},
  {"binding-handler-setter", &YastYbinding_handler_setter},
  {"reload-modules", &YastYreload_modules},
  {"objectify", &YastYobjectify},
  {"reloader-do-create-module", &YastYreloader_do_create_module},
  {"function-source-setter", &YastYfunction_source_setter},
  {"*record-source?*", &YastYTrecord_sourceQT},
  {"module-syntax-environment", &YastYmodule_syntax_environment},
  {"unchecked-runtime-environment", &YastYunchecked_runtime_environment},
  {"<arguments>", &YastYLargumentsG},
  {"fix-let-body", &YastYfix_let_body},
  {"<raw-constant>", &YastYLraw_constantG},
  {"special-define-class", &YastYspecial_define_class},
  {"objectify-application", &YastYobjectify_application},
  {"<module-binding>", &YastYLmodule_bindingG},
  {"module-name-setter", &YastYmodule_name_setter},
  {"function-body-setter", &YastYfunction_body_setter},
  {"sequentialize", &YastYsequentialize},
  {"special-def", &YastYspecial_def},
  {"<ast-function-definition>", &YastYLast_function_definitionG},
  {"as-lst", &YastYas_lst},
  {"do-static-global-bindings", &YastYdo_static_global_bindings},
  {"signature-nary?", &YastYsignature_naryQ},
  {"compute-local-reference-offsets", &YastYcompute_local_reference_offsets},
  {"objectify-compile-time", &YastYobjectify_compile_time},
  {"<local-reference>", &YastYLlocal_referenceG},
  {"ensure-module-data", &YastYensure_module_data},
  {"binding-reference-class", &YastYbinding_reference_class},
  {"fix-let-types", &YastYfix_let_types},
  {"<runtime-reference>", &YastYLruntime_referenceG},
  {"<programs>", &YastYLprogramsG},
  {"*now-rt-env*", &YastYTnow_rt_envT},
  {"binding-dotted?", &YastYbinding_dottedQ},
  {"objectify-binding", &YastYobjectify_binding},
  {"<immediate-constant>", &YastYLimmediate_constantG},
  {"application-next-methods-setter", &YastYapplication_next_methods_setter},
  {"<fab-list>", &YastYLfab_listG},
  {"objectify-generic-definition", &YastYobjectify_generic_definition},
  {"alternative-consequent", &YastYalternative_consequent},
  {"*magic-bindings*", &YastYTmagic_bindingsT},
  {"<binding-name>", &YastYLbinding_nameG},
  {"binding-index-setter", &YastYbinding_index_setter},
  {"function-display-name", &YastYfunction_display_name},
  {"signature-specs", &YastYsignature_specs},
  {"fix-let-arguments-setter", &YastYfix_let_arguments_setter},
  {"function-debug-name-setter", &YastYfunction_debug_name_setter},
  {"assignment-reference", &YastYassignment_reference},
  {"monitor-type-setter", &YastYmonitor_type_setter},
  {"fab-static-global-environment", &YastYfab_static_global_environment},
  {"<ast-signature>", &YastYLast_signatureG},
  {"locals-body", &YastYlocals_body},
  {"binding-dynamic-extent?-setter", &YastYbinding_dynamic_extentQ_setter},
  {"process-module-data", &YastYprocess_module_data},
  {"objectify-signature", &YastYobjectify_signature},
  {"assignment-form-setter", &YastYassignment_form_setter},
  {"environment-uses-modules-setter", &YastYenvironment_uses_modules_setter},
  {"module-exports", &YastYmodule_exports},
  {"special-method", &YastYspecial_method},
  {"binding-mutable?-setter", &YastYbinding_mutableQ_setter},
  {"objectify-primitive-definition", &YastYobjectify_primitive_definition},
  {"<ast-embodied-function>", &YastYLast_embodied_functionG},
  {"signature-bindings-setter", &YastYsignature_bindings_setter},
  {"module-runtime-data", &YastYmodule_runtime_data},
  {"$goo-runtime-module-name", &YastYDgoo_runtime_module_name},
  {"remove-module-internal!", &YastYremove_module_internalX},
  {"<assignment>", &YastYLassignmentG},
  {"objectify-function-source", &YastYobjectify_function_source},
  {"load-and-register-module", &YastYload_and_register_module},
  {"binding-handler", &YastYbinding_handler},
  {"binding-native-to?", &YastYbinding_native_toQ},
  {"---main-4---", NULL},
  {"functions", &YastYfunctions},
  {"function-data-refs-setter", &YastYfunction_data_refs_setter},
  {"binding-module-name", &YastYbinding_module_name},
  {"special-define-syntax", &YastYspecial_define_syntax},
  {"special-let", &YastYspecial_let},
  {"binding-dotted?-setter", &YastYbinding_dottedQ_setter},
  {"import-global!", &YastYimport_globalX},
  {"reloader-do-runtime-binding", &YastYreloader_do_runtime_binding},
  {"signature-value", &YastYsignature_value},
  {"unwind-protect-cleanup-thunk", &YastYunwind_protect_cleanup_thunk},
  {"transaction-register-implemented-binding", &YastYtransaction_register_implemented_binding},
  {"special-export", &YastYspecial_export},
  {"module-loader-modules-setter", &YastYmodule_loader_modules_setter},
  {"special-define-function", &YastYspecial_define_function},
  {"ftype", &YastYftype},
  {"objectify-free-global-reference", &YastYobjectify_free_global_reference},
  {"environment-next", &YastYenvironment_next},
  {"module-binding", &YastYmodule_binding},
  {"binding-value-setter", &YastYbinding_value_setter},
  {"special-if", &YastYspecial_if},
  {"$sexpr-optionals-type-name", &YastYDsexpr_optionals_type_name},
  {"<ast-generic-definition>", &YastYLast_generic_definitionG},
  {"binding-global-box-setter", &YastYbinding_global_box_setter},
  {"objectify-symbol", &YastYobjectify_symbol},
  {"reloader-do-use-module", &YastYreloader_do_use_module},
  {"binding-kind", &YastYbinding_kind},
  {"<static-local-environment>", &YastYLstatic_local_environmentG},
  {"with-subtransaction", NULL},
  {"<computed-program>", &YastYLcomputed_programG},
  {"do-module-loader-modules", &YastYdo_module_loader_modules},
  {"special-syntax-if", &YastYspecial_syntax_if},
  {"install-interpreter-hacks", &YastYinstall_interpreter_hacks},
  {"<static-environment>", &YastYLstatic_environmentG},
  {"transaction-register-dependent", &YastYtransaction_register_dependent},
  {"signature-bindings", &YastYsignature_bindings},
  {"application-tail?", &YastYapplication_tailQ},
  {"function-registers-setter", &YastYfunction_registers_setter},
  {"$fab-list-empty", &YastYDfab_list_empty},
  {"<reference>", &YastYLreferenceG},
  {"special-define-static-syntax", &YastYspecial_define_static_syntax},
  {"$sexpr-define-static-syntax-tag", &YastYDsexpr_define_static_syntax_tag},
  {"install-initial-bindings", &YastYinstall_initial_bindings},
  {"$free-environment-empty", &YastYDfree_environment_empty},
  {"monitor-info-setter", &YastYmonitor_info_setter},
  {"runtime-module-loader", &YastYruntime_module_loader},
  {"<module-binding-reference>", &YastYLmodule_binding_referenceG},
  {"frame-bindings", &YastYframe_bindings},
  {"sequential", &YastYsequential},
  {"bind-exit-main-fun", &YastYbind_exit_main_fun},
  {"global-box-value", &YastYglobal_box_value},
  {"find-environment-module", &YastYfind_environment_module},
  {"objectify-use/export-module", &YastYobjectify_useSexport_module},
  {"foreign-name?", &YastYforeign_nameQ},
  {"objectify-alternative", &YastYobjectify_alternative},
  {"<global-box>", &YastYLglobal_boxG},
  {"constant-index-setter", &YastYconstant_index_setter},
  {"remove-modules-by-name!", &YastYremove_modules_by_nameX},
  {"<global-assignment>", &YastYLglobal_assignmentG},
  {"bound?-reference-setter", &YastYboundQ_reference_setter},
  {"*macro-tracing?*", &YastYTmacro_tracingQT},
  {"ast-evaluate", &YastYast_evaluate},
  {"---main-3---", NULL},
  {"monitor-handler", &YastYmonitor_handler},
  {"fab-list", &YastYfab_list},
  {"---main-1---", NULL},
  {"---main-0---", NULL},
  {"application-binding-setter", &YastYapplication_binding_setter},
  {"arguments", &YastYarguments},
  {"runtime-environment", &YastYruntime_environment},
  {"application-known?-setter", &YastYapplication_knownQ_setter},
  {"application-arguments", &YastYapplication_arguments},
  {"reference-frame-offset", &YastYreference_frame_offset},
  {"<ast-primitive-definition>", &YastYLast_primitive_definitionG},
  {"function-data-refs", &YastYfunction_data_refs},
  {"reloader-do-other-binding", &YastYreloader_do_other_binding},
  {"insert-globals!", &YastYinsert_globalsX},
  {"<local-assignment>", &YastYLlocal_assignmentG},
  {"module-transaction", &YastYmodule_transaction},
  {"special-define", &YastYspecial_define},
  {"init-environment-for-eval", &YastYinit_environment_for_eval},
  {"report-undefined-global-bindings", &YastYreport_undefined_global_bindings},
  {"objectify-definition", &YastYobjectify_definition},
  {"module-transaction-setter", &YastYmodule_transaction_setter},
  {"compile-time-program", &YastYcompile_time_program},
  {"locals-bindings-setter", &YastYlocals_bindings_setter},
  {"<predefined-application>", &YastYLpredefined_applicationG},
  {"<free-environment>", &YastYLfree_environmentG},
  {"constant-index", &YastYconstant_index},
  {"compute-transitive-users", &YastYcompute_transitive_users},
  {"assignment-form", &YastYassignment_form},
  {"binding-type-setter", &YastYbinding_type_setter},
  {"$sexpr-use-module-tag", &YastYDsexpr_use_module_tag},
  {"module-data-processed?", &YastYmodule_data_processedQ},
  {"reference-frame-offset-setter", &YastYreference_frame_offset_setter},
  {"function-bindings", &YastYfunction_bindings},
  {"$goo-boot-module-name", &YastYDgoo_boot_module_name},
  {"runtime-core-environment", &YastYruntime_core_environment},
  {"objectify-raw", &YastYobjectify_raw},
  {"objectify-bind-exit", &YastYobjectify_bind_exit},
  {"special-compile-time-also", &YastYspecial_compile_time_also},
  {"environment-allows-foreign-names?", &YastYenvironment_allows_foreign_namesQ},
  {"transaction-dependents-setter", &YastYtransaction_dependents_setter},
  {"constant-value", &YastYconstant_value},
  {"function-debug-name", &YastYfunction_debug_name},
  {"alternative-condition-setter", &YastYalternative_condition_setter},
  {"$sexpr-compile-time-tag", &YastYDsexpr_compile_time_tag},
  {"$sexpr-compile-time-also-tag", &YastYDsexpr_compile_time_also_tag},
  {"function-kind", &YastYfunction_kind},
  {"binding-info-setter", &YastYbinding_info_setter},
  {"<runtime-assignment>", &YastYLruntime_assignmentG},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"function-free", "function-free"},
  {"environment-module", "environment-module"},
  {"signature-arity-setter", "signature-arity-setter"},
  {"<constant>", "<constant>"},
  {"install-initial-bindings", "install-initial-bindings"},
  {"monitor-test", "monitor-test"},
  {"module-name", "module-name"},
  {"<monitor>", "<monitor>"},
  {"<ast-macro-definition>", "<ast-macro-definition>"},
  {"signature-value-setter", "signature-value-setter"},
  {"global-box-value-setter", "global-box-value-setter"},
  {"application-known?", "application-known?"},
  {"fix-let-bindings-setter", "fix-let-bindings-setter"},
  {"binding-info", "binding-info"},
  {"unwind-protect-protected-thunk", "unwind-protect-protected-thunk"},
  {"probe-module", "probe-module"},
  {"global-box-value", "global-box-value"},
  {"env-object-name", "env-object-name"},
  {"binding-locative", "binding-locative"},
  {"monitor-main-thunk", "monitor-main-thunk"},
  {"fab-g2c-module", "fab-g2c-module"},
  {"<alternative>", "<alternative>"},
  {"module-name-to-relpath", "module-name-to-relpath"},
  {"monitor-type", "monitor-type"},
  {"objectify-signature", "objectify-signature"},
  {"monitor-info", "monitor-info"},
  {"<fix-let>", "<fix-let>"},
  {"<binding>", "<binding>"},
  {"function-registers-setter", "function-registers-setter"},
  {"sequentialize", "sequentialize"},
  {"report-undefined-global-bindings", "report-undefined-global-bindings"},
  {"assignment-form-setter", "assignment-form-setter"},
  {"function-signature-setter", "function-signature-setter"},
  {"function-body", "function-body"},
  {"signature-bindings", "signature-bindings"},
  {"function-value", "function-value"},
  {"module-binding", "module-binding"},
  {"set-module-environments", "set-module-environments"},
  {"function-temporaries-setter", "function-temporaries-setter"},
  {"binding-name", "binding-name"},
  {"<program>", "<program>"},
  {"binding-type", "binding-type"},
  {"binding-kind", "binding-kind"},
  {"module-target-environment", "module-target-environment"},
  {"signature-names-setter", "signature-names-setter"},
  {"load-module", "load-module"},
  {"fix-let-bindings", "fix-let-bindings"},
  {"bound?-reference", "bound?-reference"},
  {"<arguments>", "<arguments>"},
  {"program-type", "program-type"},
  {"reference-binding", "reference-binding"},
  {"program-type-setter", "program-type-setter"},
  {"unchecked-runtime-environment", "unchecked-runtime-environment"},
  {"function-signature", "function-signature"},
  {"function-free-setter", "function-free-setter"},
  {"objectify-with-subtransaction", "objectify-with-subtransaction"},
  {"constant-index", "constant-index"},
  {"program-register", "program-register"},
  {"reference-frame-number", "reference-frame-number"},
  {"signature-arity", "signature-arity"},
  {"signature-nary?-setter", "signature-nary?-setter"},
  {"binding-mutable?", "binding-mutable?"},
  {"<compile-time>", "<compile-time>"},
  {"<bound?>", "<bound?>"},
  {"program-register-setter", "program-register-setter"},
  {"<unwind-protect>", "<unwind-protect>"},
  {"<locals>", "<locals>"},
  {"<global-box>", "<global-box>"},
  {"fix-let-types-setter", "fix-let-types-setter"},
  {"binding-value", "binding-value"},
  {"binding-index", "binding-index"},
  {"locals-functions", "locals-functions"},
  {"<module-loader>", "<module-loader>"},
  {"<static-global-environment>", "<static-global-environment>"},
  {"signature-specs-setter", "signature-specs-setter"},
  {"reference-called-function?", "reference-called-function?"},
  {"free-environment", "free-environment"},
  {"<global-reference>", "<global-reference>"},
  {"application-binding", "application-binding"},
  {"environment-uses-modules", "environment-uses-modules"},
  {"locals-body-setter", "locals-body-setter"},
  {"locals-bindings-setter", "locals-bindings-setter"},
  {"<application>", "<application>"},
  {"function-nary?", "function-nary?"},
  {"function-self-recursive?-setter", "function-self-recursive?-setter"},
  {"<ast-method>", "<ast-method>"},
  {"<sequential>", "<sequential>"},
  {"def-list", "def-list"},
  {"do-static-global-bindings", "do-static-global-bindings"},
  {"<ast-primitive>", "<ast-primitive>"},
  {"function-registers", "function-registers"},
  {"fix-let-arguments", "fix-let-arguments"},
  {"binding-global-box", "binding-global-box"},
  {"<regular-application>", "<regular-application>"},
  {"function-source-setter", "function-source-setter"},
  {"module-loader-module-type", "module-loader-module-type"},
  {"<bind-exit>", "<bind-exit>"},
  {"environment-bindings", "environment-bindings"},
  {"function-self-recursive?", "function-self-recursive?"},
  {"def-programs", "def-programs"},
  {"function-binding", "function-binding"},
  {"binding-dotted?-setter", "binding-dotted?-setter"},
  {"function-source", "function-source"},
  {"<local-binding>", "<local-binding>"},
  {"function-data-refs-setter", "function-data-refs-setter"},
  {"binding-inferred-type", "binding-inferred-type"},
  {"ast-define-binding", "ast-define-binding"},
  {"<ast-primitive-definition>", "<ast-primitive-definition>"},
  {"<local-assignment>", "<local-assignment>"},
  {"application-function", "application-function"},
  {"function-temporaries", "function-temporaries"},
  {"locals-functions-setter", "locals-functions-setter"},
  {"binding-inferred-type-setter", "binding-inferred-type-setter"},
  {"binding-dynamic-extent?", "binding-dynamic-extent?"},
  {"assignment-binding", "assignment-binding"},
  {"find-binding", "find-binding"},
  {"<real-reference>", "<real-reference>"},
  {"signature-names", "signature-names"},
  {"<ast-generic>", "<ast-generic>"},
  {"function-index-setter", "function-index-setter"},
  {"module-syntax-environment", "module-syntax-environment"},
  {"reference-called-function?-setter", "reference-called-function?-setter"},
  {"<raw-constant>", "<raw-constant>"},
  {"fix-let-body-setter", "fix-let-body-setter"},
  {"<module-binding>", "<module-binding>"},
  {"function-body-setter", "function-body-setter"},
  {"%%macro", "%%macro"},
  {"<ast-function>", "<ast-function>"},
  {"as-lst", "as-lst"},
  {"signature-nary?", "signature-nary?"},
  {"<local-reference>", "<local-reference>"},
  {"fix-let-types", "fix-let-types"},
  {"<runtime-reference>", "<runtime-reference>"},
  {"<programs>", "<programs>"},
  {"binding-dotted?", "binding-dotted?"},
  {"<immediate-constant>", "<immediate-constant>"},
  {"<fab-list>", "<fab-list>"},
  {"alternative-consequent", "alternative-consequent"},
  {"binding-index-setter", "binding-index-setter"},
  {"signature-specs", "signature-specs"},
  {"function-debug-name-setter", "function-debug-name-setter"},
  {"assignment-reference", "assignment-reference"},
  {"<ast-signature>", "<ast-signature>"},
  {"locals-body", "locals-body"},
  {"binding-dynamic-extent?-setter", "binding-dynamic-extent?-setter"},
  {"alternative-condition", "alternative-condition"},
  {"module-exports", "module-exports"},
  {"signature-bindings-setter", "signature-bindings-setter"},
  {"binding-native-to?", "binding-native-to?"},
  {"$goo-runtime-module-name", "$goo-runtime-module-name"},
  {"objectify-quotation", "objectify-quotation"},
  {"<assignment>", "<assignment>"},
  {"binding-module-name", "binding-module-name"},
  {"load-in", "load-in"},
  {"signature-value", "signature-value"},
  {"unwind-protect-cleanup-thunk", "unwind-protect-cleanup-thunk"},
  {"<definition>", "<definition>"},
  {"binding-value-setter", "binding-value-setter"},
  {"binding-global-box-setter", "binding-global-box-setter"},
  {"<free-environment>", "<free-environment>"},
  {"<computed-program>", "<computed-program>"},
  {"do-module-loader-modules", "do-module-loader-modules"},
  {"application-tail?", "application-tail?"},
  {"<reference>", "<reference>"},
  {"<module>", "<module>"},
  {"<module-binding-reference>", "<module-binding-reference>"},
  {"bind-exit-main-fun", "bind-exit-main-fun"},
  {"fix-let-body", "fix-let-body"},
  {"find-environment-module", "find-environment-module"},
  {"constant-index-setter", "constant-index-setter"},
  {"remove-modules-by-name!", "remove-modules-by-name!"},
  {"<global-assignment>", "<global-assignment>"},
  {"fix-let-arguments-setter", "fix-let-arguments-setter"},
  {"ast-evaluate", "ast-evaluate"},
  {"monitor-handler", "monitor-handler"},
  {"runtime-environment", "runtime-environment"},
  {"application-known?-setter", "application-known?-setter"},
  {"application-arguments", "application-arguments"},
  {"reference-frame-offset", "reference-frame-offset"},
  {"function-data-refs", "function-data-refs"},
  {"function-index", "function-index"},
  {"init-environment-for-eval", "init-environment-for-eval"},
  {"locals-bindings", "locals-bindings"},
  {"do-named-static-global-bindings", "do-named-static-global-bindings"},
  {"compile-time-program", "compile-time-program"},
  {"<predefined-application>", "<predefined-application>"},
  {"init-ast", "init-ast"},
  {"assignment-form", "assignment-form"},
  {"binding-type-setter", "binding-type-setter"},
  {"function-bindings", "function-bindings"},
  {"alternative-alternant", "alternative-alternant"},
  {"constant-value", "constant-value"},
  {"function-debug-name", "function-debug-name"},
  {"$goo-boot-module-name", "$goo-boot-module-name"},
  {"<passive-program>", "<passive-program>"},
  {"binding-info-setter", "binding-info-setter"},
  {"<runtime-assignment>", "<runtime-assignment>"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_ast;
MODULE_INFO module_info_ast = {
  "ast",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_boot (void);
extern void load_module_macros (void);
extern void load_module_runtime (void);
extern void load_module_write (void);
extern void load_module_syntax (void);
extern void load_module_strings (void);
extern void load_module_protoSsystem (void);
extern void load_module_write (void);
extern void load_module_protoStypes (void);
extern void load_module_protoSmath (void);
extern void load_module_protoScollections (void);
extern void load_module_protoSports (void);
extern void load_module_dependency (void);

/* EXPRESSION: */

extern void load_module_ast (void);

void load_module_ast (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_boot();
  load_module_macros();
  load_module_runtime();
  load_module_write();
  load_module_syntax();
  load_module_strings();
  load_module_protoSsystem();
  load_module_write();
  load_module_protoStypes();
  load_module_protoSmath();
  load_module_protoScollections();
  load_module_protoSports();
  load_module_dependency();

  (P)YastY___main_0___();
  (P)YastY___main_1___();
  (P)YastY___main_2___();
  (P)YastY___main_3___();
  (P)YastY___main_4___();
  (P)YastY___main_5___();
  (P)YastY___main_6___();
  (P)YastY___main_7___();
  (P)YastY___main_8___();
  (P)YastY___main_9___();

}

/* END OF GENERATED CODE. */
