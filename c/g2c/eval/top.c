/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: top */

EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YprotoScollectionsScollectionYadd,"proto/collections/collection","add");
EXT(YprotoSsystemYos_name,"proto/system","os-name");
EXT(YprotoScollectionsSsequenceYlast,"proto/collections/sequence","last");
EXT(Ytype_error,"boot","type-error");
EXT(YsyntaxYsexpr_let_Gcombination,"syntax","sexpr-let->combination");
EXT(YLoptsG,"boot","<opts>");
EXT(YprotoScollectionsSsequenceYpick,"proto/collections/sequence","pick");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YsyntaxYDsexpr_let_tag,"syntax","$sexpr-let-tag");
EXT(YprotoSsystemYpathname_to_components,"proto/system","pathname-to-components");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YruntimeYTgensym_counterT,"runtime","*gensym-counter*");
EXT(YsyntaxYsexpr_isa_init_values,"syntax","sexpr-isa-init-values");
EXT(YastYLpassive_programG,"ast","<passive-program>");
EXT(YprotoScollectionsSassocYassocs_test,"proto/collections/assoc","assocs-test");
DEF(YtopYparse,"top","parse");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YprotoSmathYzeroQ,"proto/math","zero?");
EXT(YprotoScollectionsSstringYTprint_baseT,"proto/collections/string","*print-base*");
EXT(YprotoScollectionsScollectionYfill,"proto/collections/collection","fill");
EXT(YDmin_int,"boot","$min-int");
DEF(YtopYdo_stack_frames,"top","do-stack-frames");
EXT(YprotoSmathYE,"proto/math","=");
EXT(YprotoSmathYnulQ,"proto/math","nul?");
DEF(YtopYast_run,"top","ast-run");
EXT(Yast_linearizeYliftX,"ast-linearize","lift!");
EXT(YprotoScollectionsSlistYLlistG,"proto/collections/list","<list>");
EXT(YastYload_in,"ast","load-in");
EXT(YsyntaxYsexpr_text_of_quotation,"syntax","sexpr-text-of-quotation");
EXT(YmacrosYfin_stateQ,"macros","fin-state?");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YprotoScollectionsScollectionYnow_elt_setter,"proto/collections/collection","now-elt-setter");
EXT(YruntimeYalways,"runtime","always");
EXT(YprotoSmathYuppercaseQ,"proto/math","uppercase?");
EXT(YastYast_define_binding,"ast","ast-define-binding");
EXT(YastYunwind_protect_cleanup_thunk,"ast","unwind-protect-cleanup-thunk");
EXT(YprotoScollectionsScollectionYdel_key,"proto/collections/collection","del-key");
EXT(YprotoScollectionsStableYtable_shrink_threshold,"proto/collections/table","table-shrink-threshold");
EXT(YprotoScollectionsSrangeYfrom,"proto/collections/range","from");
EXT(YprotoScollectionsScollectionYinto,"proto/collections/collection","into");
EXT(YprotoScollectionsScollectionYdo3,"proto/collections/collection","do3");
EXT(YastYLlocalsG,"ast","<locals>");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YastYLast_functionG,"ast","<ast-function>");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YsyntaxYsexpr_make_application,"syntax","sexpr-make-application");
EXT(YastYbinding_name,"ast","binding-name");
EXT(YastYsignature_specs_setter,"ast","signature-specs-setter");
EXT(YprotoSmathYto_str,"proto/math","to-str");
EXT(YprotoSmathYroundS,"proto/math","round/");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YprotoScollectionsScollectionYreduce,"proto/collections/collection","reduce");
EXT(Ytype_object,"boot","type-object");
EXT(YprotoSmathYlsh,"proto/math","lsh");
EXT(YsyntaxYDsexpr_unwind_protect_tag,"syntax","$sexpr-unwind-protect-tag");
EXT(Yast_linearizeYTregister_passiveQT,"ast-linearize","*register-passive?*");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YmacrosYini_state,"macros","ini-state");
EXT(YLclassG,"boot","<class>");
EXT(YprotoScollectionsScollectionYlen,"proto/collections/collection","len");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YastYbinding_index_setter,"ast","binding-index-setter");
EXT(YprotoSportsYLoutput_portG,"proto/ports","<output-port>");
EXT(YprotoScollectionsSrangeYfrom_to_by,"proto/collections/range","from-to-by");
EXT(YastYassignment_form,"ast","assignment-form");
EXT(YruntimeYread,"runtime","read");
EXT(YastYLglobal_referenceG,"ast","<global-reference>");
EXT(YprotoSmathYlogior,"proto/math","logior");
EXT(Yast_linearizeYregister_allocateX,"ast-linearize","register-allocate!");
EXT(YprotoSmathYlogxor,"proto/math","logxor");
EXT(YruntimeYformat,"runtime","format");
EXT(YastYdo_static_global_bindings,"ast","do-static-global-bindings");
EXT(Yast_linearizeYclosure_creation_free,"ast-linearize","closure-creation-free");
EXT(YprotoScollectionsSsequenceYsub,"proto/collections/sequence","sub");
EXT(YsyntaxYsexpr_syntax_if_pattern,"syntax","sexpr-syntax-if-pattern");
EXT(YsyntaxYsexpr_definition_variable,"syntax","sexpr-definition-variable");
EXT(YprotoScollectionsStableYLstr_tabG,"proto/collections/table","<str-tab>");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(YsyntaxYsexpr_if_else,"syntax","sexpr-if-else");
EXT(YastYmodule_name_to_relpath,"ast","module-name-to-relpath");
EXT(YreadYread_from_string,"read","read-from-string");
EXT(YprotoSsystemYhierarchical_components,"proto/system","hierarchical-components");
EXT(YLtypeG,"boot","<type>");
EXT(YsyntaxYsexpr_slot_object,"syntax","sexpr-slot-object");
EXT(Yast_linearizeYclosure_creation_index,"ast-linearize","closure-creation-index");
EXT(YprotoSmathYneg,"proto/math","neg");
EXT(YastYsignature_names_setter,"ast","signature-names-setter");
EXT(YastYmonitor_info,"ast","monitor-info");
EXT(YprotoSmathYevenQ,"proto/math","even?");
EXT(YprotoSmathYLE,"proto/math","<=");
EXT(YprotoSsystemYparent_directory,"proto/system","parent-directory");
EXT(YprotoSmathYcontagious_type,"proto/math","contagious-type");
EXT(YprotoScollectionsStableYtable_growth_factor_setter,"proto/collections/table","table-growth-factor-setter");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YastYLalternativeG,"ast","<alternative>");
EXT(YastYmodule_binding,"ast","module-binding");
EXT(YastYprogram_register,"ast","program-register");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
EXT(YprotoScollectionsScollectionYdel_keys,"proto/collections/collection","del-keys");
EXT(YastYobjectify,"ast","objectify");
EXT(YprotoSmathYremainder,"proto/math","remainder");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YsyntaxYsexpr_loc_bound_names,"syntax","sexpr-loc-bound-names");
EXT(YastYLbind_exitG,"ast","<bind-exit>");
EXT(YastYenv_object_name,"ast","env-object-name");
EXT(Yobject_parents,"boot","object-parents");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YsyntaxYsexpr_definition_value,"syntax","sexpr-definition-value");
EXT(YastYmonitor_type,"ast","monitor-type");
EXT(YLgenG,"boot","<gen>");
EXT(YsyntaxYDsexpr_if_tag,"syntax","$sexpr-if-tag");
EXT(YastYfunction_free_setter,"ast","function-free-setter");
EXT(Yslot_init,"boot","slot-init");
EXT(YastYbinding_dynamic_extentQ,"ast","binding-dynamic-extent?");
EXT(YsyntaxYsexpr_function_definition_value,"syntax","sexpr-function-definition-value");
EXT(YprotoSportsYchar_readyQ,"proto/ports","char-ready?");
EXT(YprotoSmathYas_uppercase,"proto/math","as-uppercase");
EXT(YprotoScollectionsSlistYassqn,"proto/collections/list","assqn");
EXT(YwriteYTmax_print_lengthT,"write","*max-print-length*");
EXT(YprotoSmathYto_digit,"proto/math","to-digit");
EXT(YprotoSportsYLfile_output_portG,"proto/ports","<file-output-port>");
EXT(YastYfunction_data_refs,"ast","function-data-refs");
EXT(YastYapplication_knownQ_setter,"ast","application-known?-setter");
EXT(Yobject_slots,"boot","object-slots");
EXT(YprotoScollectionsStableYid_hash,"proto/collections/table","id-hash");
EXT(YastYbinding_native_toQ,"ast","binding-native-to?");
EXT(YastYLast_primitive_definitionG,"ast","<ast-primitive-definition>");
EXT(YastYLdefinitionG,"ast","<definition>");
EXT(YsyntaxYsexpr_unwind_protect_protected_form,"syntax","sexpr-unwind-protect-protected-form");
EXT(YastYprogram_register_setter,"ast","program-register-setter");
EXT(YprotoSsystemYcreate_directory,"proto/system","create-directory");
EXT(YLsymG,"boot","<sym>");
EXT(YprotoStypesYtL,"proto/types","t<");
EXT(YprotoScollectionsSassocYassocs_test_setter,"proto/collections/assoc","assocs-test-setter");
EXT(Yast_linearizeYprogram_definitions,"ast-linearize","program-definitions");
EXT(YastYLbindingG,"ast","<binding>");
EXT(YastYfix_let_bindings_setter,"ast","fix-let-bindings-setter");
EXT(Yfind_setter,"boot","find-setter");
EXT(YastYfunction_bindings,"ast","function-bindings");
EXT(YsyntaxYsexpr_loc_bound_signatures,"syntax","sexpr-loc-bound-signatures");
EXT(YsyntaxYDsexpr_monitor_tag,"syntax","$sexpr-monitor-tag");
EXT(YprotoSmathYfabs,"proto/math","fabs");
EXT(YprotoSmathYLbotG,"proto/math","<bot>");
EXT(YprotoSmathYaddress_of,"proto/math","address-of");
EXT(Yast_linearizeYcollect_temporariesX,"ast-linearize","collect-temporaries!");
EXT(YprotoSmathYflo_bits,"proto/math","flo-bits");
EXT(YprotoSmathYround,"proto/math","round");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(YprotoStypesYtA,"proto/types","t+");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YprotoStypesYfalse_or,"proto/types","false-or");
EXT(YastYlocals_body_setter,"ast","locals-body-setter");
EXT(YprotoScollectionsSsequenceYcat2,"proto/collections/sequence","cat2");
DEF(YtopYread_file,"top","read-file");
EXT(YprotoSportsYpeek_char,"proto/ports","peek-char");
EXT(YprotoSsystemYadd_src_path,"proto/system","add-src-path");
EXT(YsyntaxYsexpr_define_classQ,"syntax","sexpr-define-class?");
EXT(YsyntaxYeval,"syntax","eval");
EXT(Yast_linearizeYprogram_form,"ast-linearize","program-form");
EXT(YLstrG,"boot","<str>");
EXT(YprotoSmathYtruncateS,"proto/math","truncate/");
EXT(YruntimeYsig,"runtime","sig");
EXT(YprotoSsystemYc_filename,"proto/system","c-filename");
EXT(YprotoScollectionsStableYtable_protocol,"proto/collections/table","table-protocol");
EXT(YastYfunction_signature_setter,"ast","function-signature-setter");
EXT(YprotoSmathYas_log,"proto/math","as-log");
EXT(YprotoSportsYcall_with_output_file,"proto/ports","call-with-output-file");
EXT(YastYbinding_dynamic_extentQ_setter,"ast","binding-dynamic-extent?-setter");
EXT(YPvnul,"boot","%vnul");
EXT(YreadYDchar_long_names,"read","$char-long-names");
EXT(YprotoSmathYA,"proto/math","+");
EXT(YastYassignment_reference,"ast","assignment-reference");
EXT(YprotoScollectionsSsequenceYpos,"proto/collections/sequence","pos");
EXT(YastYfunction_registers_setter,"ast","function-registers-setter");
EXT(YsyntaxYsexpr_bind_pattern_variables,"syntax","sexpr-bind-pattern-variables");
EXT(YastYfind_environment_module,"ast","find-environment-module");
EXT(YastYbinding_kind,"ast","binding-kind");
EXT(YastYinit_ast,"ast","init-ast");
DEF(YtopYeval_in,"top","eval-in");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(Yast_linearizeYLbox_creationG,"ast-linearize","<box-creation>");
EXT(YprotoStypesYtE,"proto/types","t=");
EXT(YastYbinding_value,"ast","binding-value");
EXT(Yast_linearizeYflatten_seqs,"ast-linearize","flatten-seqs");
EXT(YastYfix_let_bindings,"ast","fix-let-bindings");
EXT(YprotoScollectionsScollectionYdo,"proto/collections/collection","do");
EXT(YastYfunction_body_setter,"ast","function-body-setter");
EXT(YprotoSmathYG,"proto/math",">");
EXT(Yerror,"boot","error");
EXT(Yast_linearizeYcollect_registersX,"ast-linearize","collect-registers!");
EXT(YastYbinding_mutableQ,"ast","binding-mutable?");
EXT(YprotoSmathYmax,"proto/math","max");
EXT(YastYassignment_form_setter,"ast","assignment-form-setter");
EXT(YastYfunction_signature,"ast","function-signature");
EXT(YprotoSportsYcall_with_input_file,"proto/ports","call-with-input-file");
EXT(YLvecG,"boot","<vec>");
EXT(YastYLlocal_bindingG,"ast","<local-binding>");
EXT(Yslot_owner,"boot","slot-owner");
EXT(Yast_linearizeYLtop_level_formG,"ast-linearize","<top-level-form>");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(YastYLpredefined_applicationG,"ast","<predefined-application>");
EXT(Yfun_names,"boot","fun-names");
EXT(YLmetG,"boot","<met>");
EXT(YsyntaxYsexpr_if_test,"syntax","sexpr-if-test");
EXT(YastYset_module_environments,"ast","set-module-environments");
EXT(YprotoScollectionsScollectionYfab,"proto/collections/collection","fab");
EXT(YsyntaxYsexpr_syntax_if_then,"syntax","sexpr-syntax-if-then");
EXT(YsyntaxYDsexpr_quote_tag,"syntax","$sexpr-quote-tag");
EXT(Yhead_setter,"boot","head-setter");
EXT(YprotoScollectionsSsequenceYdo_key_vals,"proto/collections/sequence","do-key-vals");
EXT(YsyntaxYsexpr_operator,"syntax","sexpr-operator");
EXT(YprotoScollectionsSbufferYlenSfill_setter,"proto/collections/buffer","len/fill-setter");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YastYsignature_names,"ast","signature-names");
EXT(YastYsignature_value,"ast","signature-value");
DEF(YtopYLkeyboard_interruptG,"top","<keyboard-interrupt>");
EXT(YprotoScollectionsSsequenceYrange_checkQ,"proto/collections/sequence","range-check?");
EXT(YastYlocals_body,"ast","locals-body");
EXT(YprotoScollectionsScollectionYall2Q,"proto/collections/collection","all2?");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
EXT(YsyntaxYDsexpr_define_tag,"syntax","$sexpr-define-tag");
EXT(YsyntaxYsexpr_slot_variable,"syntax","sexpr-slot-variable");
EXT(YsyntaxYsexpr_operands,"syntax","sexpr-operands");
EXT(YprotoScollectionsSsequenceYcatX,"proto/collections/sequence","cat!");
EXT(YprotoSportsYport_index,"proto/ports","port-index");
EXT(Yfind_getter,"boot","find-getter");
EXT(YastYfunction_self_recursiveQ_setter,"ast","function-self-recursive?-setter");
EXT(YmacrosYpair,"macros","pair");
EXT(YastYfunction_body,"ast","function-body");
EXT(YsyntaxYsexpr_function_definition_variable,"syntax","sexpr-function-definition-variable");
EXT(YLflatG,"boot","<flat>");
EXT(YastYbinding_global_box,"ast","binding-global-box");
EXT(Yhead,"boot","head");
EXT(YastYmodule_syntax_environment,"ast","module-syntax-environment");
EXT(YprotoScollectionsSrangeYfrom_above,"proto/collections/range","from-above");
EXT(YprotoSportsYread_char,"proto/ports","read-char");
EXT(YprotoSmathYnegQ,"proto/math","neg?");
EXT(YsyntaxYsexpr_method_body,"syntax","sexpr-method-body");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(YsyntaxYDsexpr_syntax_if_tag,"syntax","$sexpr-syntax-if-tag");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(YprotoSsystemYlabel_components,"proto/system","label-components");
EXT(YastYLruntime_assignmentG,"ast","<runtime-assignment>");
EXT(YastYbinding_value_setter,"ast","binding-value-setter");
EXT(YastYLprogramsG,"ast","<programs>");
EXT(YastYLprogramG,"ast","<program>");
EXT(YprotoScollectionsScollectionYfind_key,"proto/collections/collection","find-key");
EXT(Ynul,"boot","nul");
EXT(YprotoSsystemYadd_tmp_path,"proto/system","add-tmp-path");
EXT(YsyntaxYsexpr_assignment_value,"syntax","sexpr-assignment-value");
EXT(Yobject_class,"boot","object-class");
EXT(YprotoSsystemYTproto_extensionT,"proto/system","*proto-extension*");
EXT(YastYfunction_registers,"ast","function-registers");
EXT(YprotoSmathYNEE,"proto/math","~==");
EXT(YastYLmodule_bindingG,"ast","<module-binding>");
EXT(YastYLunwind_protectG,"ast","<unwind-protect>");
EXT(YprotoSportsYLstring_output_portG,"proto/ports","<string-output-port>");
EXT(YastYLcompile_timeG,"ast","<compile-time>");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YprotoScollectionsSbufferYpop_lastX,"proto/collections/buffer","pop-last!");
EXT(Ysym_name,"boot","sym-name");
EXT(YsyntaxYDsexpr_method_tag,"syntax","$sexpr-method-tag");
EXT(YsyntaxYsexpr_unwind_protect_cleanup_forms,"syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YprotoSportsYopen_output_file,"proto/ports","open-output-file");
EXT(YprotoSmathYas_lowercase,"proto/math","as-lowercase");
EXT(YastYalternative_alternant,"ast","alternative-alternant");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YprotoScollectionsStableYtable_shrink_threshold_setter,"proto/collections/table","table-shrink-threshold-setter");
EXT(YprotoSmathYeof_objectQ,"proto/math","eof-object?");
EXT(YsyntaxYsexpr_loc_bound_bodies,"syntax","sexpr-loc-bound-bodies");
EXT(YprotoSportsYcall_with_string_output_port,"proto/ports","call-with-string-output-port");
EXT(YastYremove_modules_by_nameX,"ast","remove-modules-by-name!");
EXT(YLfunG,"boot","<fun>");
EXT(YprotoSmathYmodulo,"proto/math","modulo");
EXT(YastYmodule_target_environment,"ast","module-target-environment");
EXT(YprotoSportsYLfile_input_portG,"proto/ports","<file-input-port>");
EXT(YprotoSportsYLstring_input_portG,"proto/ports","<string-input-port>");
EXT(YmacrosYnapply,"macros","napply");
EXT(YprotoSsystemYcomponents_parent_directory,"proto/system","components-parent-directory");
EXT(YprotoScollectionsSsequenceYrange_check,"proto/collections/sequence","range-check");
EXT(YastYfix_let_body_setter,"ast","fix-let-body-setter");
EXT(Yast_linearizeYclosurize_mainX,"ast-linearize","closurize-main!");
EXT(YprotoScollectionsScollectionYmemQ,"proto/collections/collection","mem?");
EXT(YLlstG,"boot","<lst>");
EXT(YPsnul,"boot","%snul");
EXT(YastYmodule_exports,"ast","module-exports");
EXT(YprotoScollectionsSsequenceYaddX,"proto/collections/sequence","add!");
EXT(YsyntaxYsexpr_unquoteQ,"syntax","sexpr-unquote?");
EXT(YDmax_int,"boot","$max-int");
EXT(YastYLreal_referenceG,"ast","<real-reference>");
EXT(YruntimeYmake_handler,"runtime","make-handler");
EXT(YsyntaxYDsexpr_iterate_tag,"syntax","$sexpr-iterate-tag");
EXT(YastYLfix_letG,"ast","<fix-let>");
EXT(YsyntaxYsexpr_make_macro_function,"syntax","sexpr-make-macro-function");
EXT(YprotoScollectionsSmapYfab_map,"proto/collections/map","fab-map");
EXT(YastYconstant_index,"ast","constant-index");
EXT(YastYmodule_name,"ast","module-name");
EXT(YsyntaxYDsexpr_define_generic_tag,"syntax","$sexpr-define-generic-tag");
EXT(YprotoSmathYT,"proto/math","*");
EXT(YsyntaxYsexpr_block_name,"syntax","sexpr-block-name");
EXT(YprotoSmathYoddQ,"proto/math","odd?");
EXT(Yast_linearizeYreference_selfQ,"ast-linearize","reference-self?");
EXT(YastYfunction_self_recursiveQ,"ast","function-self-recursive?");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YastYmonitor_handler,"ast","monitor-handler");
EXT(YprotoSportsYopen_input_file,"proto/ports","open-input-file");
DEF(YtopYparse_in,"top","parse-in");
EXT(YprotoSsystemYfile_type,"proto/system","file-type");
EXT(Ytail_setter,"boot","tail-setter");
EXT(Yslot_type,"boot","slot-type");
EXT(YastYfix_let_arguments,"ast","fix-let-arguments");
EXT(YastYsignature_specs,"ast","signature-specs");
EXT(YastYLast_macro_definitionG,"ast","<ast-macro-definition>");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(YprotoSsystemYTobj_extensionT,"proto/system","*obj-extension*");
EXT(YastYenvironment_uses_modules,"ast","environment-uses-modules");
EXT(YastYconstant_index_setter,"ast","constant-index-setter");
EXT(Yast_linearizeYinsert_boxX,"ast-linearize","insert-box!");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YastYdo_module_loader_modules,"ast","do-module-loader-modules");
EXT(YastYprobe_module,"ast","probe-module");
EXT(YLseqG,"boot","<seq>");
EXT(YmacrosYcat,"macros","cat");
EXT(YprotoSsystemYproto_filename,"proto/system","proto-filename");
EXT(YprotoSmathY_,"proto/math","-");
EXT(Yast_linearizeYform_quotations,"ast-linearize","form-quotations");
EXT(YprotoSportsYport_contents,"proto/ports","port-contents");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YastYinit_environment_for_eval,"ast","init-environment-for-eval");
EXT(YastYLlocal_referenceG,"ast","<local-reference>");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YprotoScollectionsScollectionYallQ,"proto/collections/collection","all?");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(Ytail,"boot","tail");
EXT(YastYLmonitorG,"ast","<monitor>");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(Yast_linearizeYextract_thingsX,"ast-linearize","extract-things!");
EXT(YsyntaxYsexpr_isa_parent,"syntax","sexpr-isa-parent");
EXT(YsyntaxYsexpr_syntax_if_else,"syntax","sexpr-syntax-if-else");
EXT(YprotoScollectionsStableYLtabG,"proto/collections/table","<tab>");
EXT(YastYLboundQG,"ast","<bound?>");
EXT(YprotoScollectionsSstringYascii_limit,"proto/collections/string","ascii-limit");
EXT(YastYbinding_global_box_setter,"ast","binding-global-box-setter");
EXT(YprotoStypesYas,"proto/types","as");
EXT(YprotoScollectionsSbufferYpush_lastX,"proto/collections/buffer","push-last!");
EXT(YprotoScollectionsSrangeYfrom_to,"proto/collections/range","from-to");
DEF(YtopYrun,"top","run");
EXT(Ylst,"boot","lst");
EXT(Yclass_slots,"boot","class-slots");
EXT(YprotoScollectionsSsequenceYrange_error,"proto/collections/sequence","range-error");
EXT(YsyntaxYsexpr_slot_init,"syntax","sexpr-slot-init");
DEF(YtopYdo_restart,"top","do-restart");
EXT(YprotoSmathYalphabeticQ,"proto/math","alphabetic?");
DEF(YtopYauto_run,"top","auto-run");
EXT(YastYLregular_applicationG,"ast","<regular-application>");
EXT(YLcolG,"boot","<col>");
EXT(YastYLast_genericG,"ast","<ast-generic>");
EXT(YprotoScollectionsSsequenceYvals_to_str,"proto/collections/sequence","vals-to-str");
EXT(YprotoSmathYGE,"proto/math",">=");
EXT(YprotoScollectionsStableYtable_growth_threshold,"proto/collections/table","table-growth-threshold");
EXT(Yfab_class,"boot","fab-class");
EXT(YprotoSmathYlogand,"proto/math","logand");
EXT(YprotoSportsYLfile_portG,"proto/ports","<file-port>");
EXT(YsyntaxYDsexpr_quasiquote_tag,"syntax","$sexpr-quasiquote-tag");
EXT(YastYbinding_dottedQ,"ast","binding-dotted?");
EXT(YsyntaxYsexpr_forward_primitiveQ,"syntax","sexpr-forward-primitive?");
EXT(YLtupG,"boot","<tup>");
EXT(YsyntaxYDsexpr_begin_tag,"syntax","$sexpr-begin-tag");
EXT(YprotoScollectionsScollectionYdefault,"proto/collections/collection","default");
EXT(YastYfix_let_body,"ast","fix-let-body");
EXT(YprotoScollectionsScollectionYmap_keyed,"proto/collections/collection","map-keyed");
EXT(YprotoSmathYtruncate,"proto/math","truncate");
EXT(Yast_linearizeYunconstrained_typeQ,"ast-linearize","unconstrained-type?");
EXT(YastYLast_signatureG,"ast","<ast-signature>");
EXT(YprotoSmathYeof_object,"proto/math","eof-object");
EXT(Yast_linearizeYanalyze_dynamic_extent,"ast-linearize","analyze-dynamic-extent");
EXT(YLsigG,"boot","<sig>");
EXT(YprotoSportsYout,"proto/ports","out");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(Yast_linearizeYform_program,"ast-linearize","form-program");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YastYLlocal_assignmentG,"ast","<local-assignment>");
EXT(YsyntaxYsexpr_make_getter,"syntax","sexpr-make-getter");
EXT(YastYLstatic_global_environmentG,"ast","<static-global-environment>");
EXT(YsyntaxYsexpr_sequence_Gbegin,"syntax","sexpr-sequence->begin");
EXT(YastYenvironment_module,"ast","environment-module");
EXT(YsyntaxYDsexpr_define_class_tag,"syntax","$sexpr-define-class-tag");
EXT(YprotoScollectionsScollectionYempty,"proto/collections/collection","empty");
EXT(YprotoScollectionsSlistYlist,"proto/collections/list","list");
EXT(YastYfunction_source_setter,"ast","function-source-setter");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YastYLimmediate_constantG,"ast","<immediate-constant>");
EXT(YastYfix_let_arguments_setter,"ast","fix-let-arguments-setter");
EXT(YLlocG,"boot","<loc>");
EXT(YsyntaxYsexpr_make_anonymous_method,"syntax","sexpr-make-anonymous-method");
EXT(YastYfunction_debug_name_setter,"ast","function-debug-name-setter");
EXT(YprotoSportsYcall_with_string_input_port,"proto/ports","call-with-string-input-port");
EXT(YastYbinding_dottedQ_setter,"ast","binding-dotted?-setter");
EXT(YprotoScollectionsSbufferYbuf,"proto/collections/buffer","buf");
EXT(YastYLcomputed_programG,"ast","<computed-program>");
EXT(YwriteYTmax_print_depthT,"write","*max-print-depth*");
EXT(YastYLfab_listG,"ast","<fab-list>");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YprotoScollectionsScollectionYkeys,"proto/collections/collection","keys");
EXT(YprotoSsystemYfile_mtime,"proto/system","file-mtime");
EXT(YprotoScollectionsSsequenceYdel_dups,"proto/collections/sequence","del-dups");
EXT(Ytype_elts,"boot","type-elts");
EXT(YsyntaxYsexpr_loc_raw_body,"syntax","sexpr-loc-raw-body");
EXT(YprotoSmathYnum_to_str,"proto/math","num-to-str");
EXT(YsyntaxYDsexpr_locals_tag,"syntax","$sexpr-locals-tag");
EXT(YprotoSsystemYadd_build_path,"proto/system","add-build-path");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YsyntaxYDsexpr_bind_exit_tag,"syntax","$sexpr-bind-exit-tag");
EXT(YprotoScollectionsSsequenceYrev,"proto/collections/sequence","rev");
EXT(YsyntaxYsexpr_expand_backquote,"syntax","sexpr-expand-backquote");
EXT(YprotoScollectionsSrangeYfrom_below_by,"proto/collections/range","from-below-by");
EXT(YprotoSportsYclose_output_port,"proto/ports","close-output-port");
EXT(Yast_linearizeYanalyze_calls,"ast-linearize","analyze-calls");
EXT(YPisa,"boot","%isa");
EXT(YwriteYwrite_to_string,"write","write-to-string");
EXT(YastYLfree_environmentG,"ast","<free-environment>");
EXT(YastYsignature_arity_setter,"ast","signature-arity-setter");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
EXT(YsyntaxYsexpr_assignment_variable,"syntax","sexpr-assignment-variable");
EXT(YLfloG,"boot","<flo>");
DEF(YtopYprompt_for_command_expression,"top","prompt-for-command-expression");
EXT(YsyntaxYsexpr_define_class_parents,"syntax","sexpr-define-class-parents");
EXT(YastYfunction_value,"ast","function-value");
EXT(YprotoScollectionsStableYcase_insensitive_string_equal,"proto/collections/table","case-insensitive-string-equal");
EXT(YprotoSmathYfloor,"proto/math","floor");
EXT(YastYobjectify_quotation,"ast","objectify-quotation");
EXT(YastYreference_binding,"ast","reference-binding");
EXT(YastYapplication_tailQ,"ast","application-tail?");
EXT(YprotoScollectionsSstepYfirst_then,"proto/collections/step","first-then");
EXT(YastYfunction_temporaries,"ast","function-temporaries");
EXT(YprotoScollectionsScollectionYdo_keyed,"proto/collections/collection","do-keyed");
EXT(YastYassignment_binding,"ast","assignment-binding");
EXT(YastYprogram_type_setter,"ast","program-type-setter");
DEF(YtopYstr_parse,"top","str-parse");
EXT(YastYprogram_type,"ast","program-type");
EXT(YprotoSportsYwrite_string,"proto/ports","write-string");
EXT(Yast_linearizeYLbox_writeG,"ast-linearize","<box-write>");
EXT(YprotoSportsYport_line,"proto/ports","port-line");
EXT(Ysig_value,"boot","sig-value");
EXT(YprotoSportsYin,"proto/ports","in");
EXT(Yclass_name,"boot","class-name");
EXT(YastYreference_frame_number,"ast","reference-frame-number");
EXT(YprotoScollectionsSsequenceYdel,"proto/collections/sequence","del");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YsyntaxYDsexpr_set_tag,"syntax","$sexpr-set-tag");
EXT(YwriteYrecurring_write,"write","recurring-write");
EXT(YprotoSportsYport_index_setter,"proto/ports","port-index-setter");
EXT(YmacrosYmake_sym,"macros","make-sym");
DEF(YtopYload_from,"top","load-from");
EXT(YprotoScollectionsSbufferYLbufG,"proto/collections/buffer","<buf>");
EXT(YastYlocals_bindings_setter,"ast","locals-bindings-setter");
EXT(Yast_linearizeYgather_temporariesX,"ast-linearize","gather-temporaries!");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YprotoSsystemYcomponents_basename,"proto/system","components-basename");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(YastYLmodule_binding_referenceG,"ast","<module-binding-reference>");
EXT(YLnumG,"boot","<num>");
EXT(YLintG,"boot","<int>");
EXT(Ynil,"boot","nil");
EXT(YastYunchecked_runtime_environment,"ast","unchecked-runtime-environment");
EXT(YprotoScollectionsSstringYstr_to_num,"proto/collections/string","str-to-num");
EXT(Yast_linearizeYLrenamed_local_bindingG,"ast-linearize","<renamed-local-binding>");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YmacrosYEE,"macros","==");
EXT(YsyntaxYsexpr_block_body,"syntax","sexpr-block-body");
EXT(YastYbinding_type,"ast","binding-type");
EXT(Yast_linearizeYbox_form,"ast-linearize","box-form");
EXT(YastYLconstantG,"ast","<constant>");
EXT(YwriteYwriteln,"write","writeln");
EXT(YsyntaxYDsexpr_macro_expand_tag,"syntax","$sexpr-macro-expand-tag");
EXT(YastYconstant_value,"ast","constant-value");
EXT(YastYast_evaluate,"ast","ast-evaluate");
EXT(YastYLmoduleG,"ast","<module>");
EXT(Yfun_value,"boot","fun-value");
EXT(YsyntaxYsexpr_isa_slot_inits,"syntax","sexpr-isa-slot-inits");
EXT(YastYbinding_type_setter,"ast","binding-type-setter");
EXT(YprotoSsystemYfile_existsQ,"proto/system","file-exists?");
EXT(YprotoScollectionsScollectionYany2Q,"proto/collections/collection","any2?");
EXT(YastYreference_frame_offset,"ast","reference-frame-offset");
EXT(YprotoScollectionsSstepYLstepG,"proto/collections/step","<step>");
EXT(YastYsignature_bindings,"ast","signature-bindings");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YprotoSmathYlognot,"proto/math","lognot");
DEF(YtopYp2c_run,"top","p2c-run");
EXT(YastYbinding_locative,"ast","binding-locative");
EXT(YLchrG,"boot","<chr>");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YprotoScollectionsScollectionYreduceA,"proto/collections/collection","reduce+");
EXT(YsyntaxYsexpr_syntax_definition_variable,"syntax","sexpr-syntax-definition-variable");
EXT(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
EXT(YastYbinding_inferred_type,"ast","binding-inferred-type");
EXT(YsyntaxYsexpr_function_signature,"syntax","sexpr-function-signature");
DEF(YtopYprint_result_expression,"top","print-result-expression");
EXT(YprotoScollectionsScollectionYlow_elt_setter,"proto/collections/collection","low-elt-setter");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YprotoSportsYLportG,"proto/ports","<port>");
EXT(YPslot,"boot","%slot");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
EXT(YsyntaxYDsexpr_define_method_tag,"syntax","$sexpr-define-method-tag");
EXT(YastYLargumentsG,"ast","<arguments>");
EXT(YprotoScollectionsStableYcurrent_gc_state,"proto/collections/table","current-gc-state");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(Ysig_names,"boot","sig-names");
EXT(YastYobjectify_signature,"ast","objectify-signature");
EXT(YsyntaxYsexpr_signature_value,"syntax","sexpr-signature-value");
EXT(Yast_linearizeYLbox_readG,"ast-linearize","<box-read>");
EXT(YsyntaxYsexpr_make_begin,"syntax","sexpr-make-begin");
EXT(YprotoSsystemYos_binding_value,"proto/system","os-binding-value");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YsyntaxYDsexpr_define_function_tag,"syntax","$sexpr-define-function-tag");
EXT(YprotoSmathYash,"proto/math","ash");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YastYglobal_box_value,"ast","global-box-value");
EXT(YastYsignature_bindings_setter,"ast","signature-bindings-setter");
EXT(Yslot_value_setter,"boot","slot-value-setter");
DEF(YtopYtop,"top","top");
EXT(YastYLapplicationG,"ast","<application>");
EXT(YPsymbols,"boot","%symbols");
EXT(YprotoSsystemYTc_extensionT,"proto/system","*c-extension*");
EXT(YprotoScollectionsScollectionYmap2,"proto/collections/collection","map2");
EXT(YLlogG,"boot","<log>");
EXT(YastYfind_binding,"ast","find-binding");
EXT(Yast_linearizeYLfree_referenceG,"ast-linearize","<free-reference>");
EXT(YprotoScollectionsStableYcase_insensitive_string_hash,"proto/collections/table","case-insensitive-string-hash");
EXT(YastYLassignmentG,"ast","<assignment>");
EXT(Yvec,"boot","vec");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YprotoSmathYposQ,"proto/math","pos?");
EXT(YsyntaxYDsexpr_define_syntax_tag,"syntax","$sexpr-define-syntax-tag");
EXT(YprotoScollectionsSmapYLmapG,"proto/collections/map","<map>");
EXT(YLslotG,"boot","<slot>");
EXT(YsyntaxYsexpr_make_setter,"syntax","sexpr-make-setter");
EXT(YprotoSsystemYTexe_extensionT,"proto/system","*exe-extension*");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YprotoSmathYlowercaseQ,"proto/math","lowercase?");
EXT(YPPmacro,"boot","%%macro");
EXT(YastYfunction_index,"ast","function-index");
EXT(YprotoSsystemYTproto_rootT,"proto/system","*proto-root*");
EXT(YprotoSmathYchar_Gascii,"proto/math","char->ascii");
EXT(YastYLreferenceG,"ast","<reference>");
EXT(Ynot,"boot","not");
EXT(YprotoScollectionsScollectionYanyQ,"proto/collections/collection","any?");
EXT(YastYfunction_binding,"ast","function-binding");
EXT(YastYbinding_inferred_type_setter,"ast","binding-inferred-type-setter");
EXT(YsyntaxYsexpr_unquote_splicingQ,"syntax","sexpr-unquote-splicing?");
EXT(YprotoScollectionsSassocYLassocsG,"proto/collections/assoc","<assocs>");
EXT(YastYDproto_boot_module_name,"ast","$proto-boot-module-name");
EXT(Yast_linearizeYprogram_quotations,"ast-linearize","program-quotations");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
EXT(YprotoSmathYS,"proto/math","/");
EXT(Yfun_name,"boot","fun-name");
EXT(YruntimeYcurry,"runtime","curry");
EXT(Yclass_parents,"boot","class-parents");
EXT(YastYfunction_temporaries_setter,"ast","function-temporaries-setter");
EXT(Yast_linearizeYast_contains_funQ,"ast-linearize","ast-contains-fun?");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YLanyG,"boot","<any>");
EXT(YprotoScollectionsSrangeYLrangeG,"proto/collections/range","<range>");
EXT(YastYfix_let_types,"ast","fix-let-types");
EXT(YastYfunction_debug_name,"ast","function-debug-name");
EXT(YprotoSportsYforce_output,"proto/ports","force-output");
EXT(YsyntaxYsexpr_monitor_expand,"syntax","sexpr-monitor-expand");
EXT(YastYLast_methodG,"ast","<ast-method>");
EXT(YastYalternative_condition,"ast","alternative-condition");
EXT(YastYLmodule_loaderG,"ast","<module-loader>");
EXT(YprotoScollectionsScollectionYlow_elt,"proto/collections/collection","low-elt");
EXT(YprotoSsystemYcomponents_to_pathname,"proto/system","components-to-pathname");
DEF(YtopYload,"top","load");
EXT(YastYapplication_arguments,"ast","application-arguments");
EXT(Yast_linearizeYform_definitions,"ast-linearize","form-definitions");
EXT(YprotoSsystemYexe_filename,"proto/system","exe-filename");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Ytype_class,"boot","type-class");
EXT(YprotoScollectionsSstringYstr,"proto/collections/string","str");
EXT(YprotoSmathYnumericQ,"proto/math","numeric?");
EXT(YLunionG,"boot","<union>");
EXT(YprotoSmathYfloorS,"proto/math","floor/");
EXT(YastYLraw_constantG,"ast","<raw-constant>");
EXT(YastYlocals_bindings,"ast","locals-bindings");
EXT(YastYbinding_info,"ast","binding-info");
EXT(YsyntaxYsexpr_function_body,"syntax","sexpr-function-body");
EXT(YastYfree_implemented_foreign_bindings,"ast","free-implemented-foreign-bindings");
EXT(Yslot_value,"boot","slot-value");
EXT(YprotoSmathYL,"proto/math","<");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YsyntaxYsexpr_variable_type,"syntax","sexpr-variable-type");
EXT(YprotoScollectionsSbufferYlen_setter,"proto/collections/buffer","len-setter");
EXT(YastYcompile_time_program,"ast","compile-time-program");
EXT(YsyntaxYsexpr_variable_name,"syntax","sexpr-variable-name");
EXT(YastYapplication_binding,"ast","application-binding");
EXT(YprotoScollectionsSsequenceY3rd,"proto/collections/sequence","3rd");
EXT(YastYsignature_value_setter,"ast","signature-value-setter");
EXT(YprotoScollectionsSsequenceYfrom_below,"proto/collections/sequence","from-below");
EXT(YastYLsequentialG,"ast","<sequential>");
EXT(YastYboundQ_reference,"ast","bound?-reference");
EXT(YsyntaxYsexpr_make_setter_name,"syntax","sexpr-make-setter-name");
EXT(YprotoScollectionsStableYtable_growth_threshold_setter,"proto/collections/table","table-growth-threshold-setter");
EXT(YprotoScollectionsStableYtable_growth_factor,"proto/collections/table","table-growth-factor");
EXT(YastYsequentialize,"ast","sequentialize");
EXT(YprotoSportsYLinput_portG,"proto/ports","<input-port>");
EXT(YmacrosYmap,"macros","map");
EXT(YsyntaxYsexpr_variableQ,"syntax","sexpr-variable?");
EXT(YsyntaxYsexpr_isa_init_slots,"syntax","sexpr-isa-init-slots");
EXT(YastYsignature_naryQ,"ast","signature-nary?");
EXT(YprotoSsystemYTpath_separatorT,"proto/system","*path-separator*");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YastYdo_named_static_global_bindings,"ast","do-named-static-global-bindings");
EXT(YprotoScollectionsSstringYascii_whitespaces,"proto/collections/string","ascii-whitespaces");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YastYfunction_source,"ast","function-source");
EXT(YastYglobal_box_value_setter,"ast","global-box-value-setter");
EXT(YastYfunction_index_setter,"ast","function-index-setter");
EXT(YastYDproto_runtime_module_name,"ast","$proto-runtime-module-name");
EXT(YprotoScollectionsSlistYpush,"proto/collections/list","push");
EXT(YprotoScollectionsSlistYpop,"proto/collections/list","pop");
DEF(YtopYbacktrace,"top","backtrace");
EXT(YastYsignature_naryQ_setter,"ast","signature-nary?-setter");
EXT(Yfab_sym,"boot","fab-sym");
EXT(YastYLglobal_boxG,"ast","<global-box>");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YmacrosYrevX,"macros","rev!");
EXT(YastYlocals_functions_setter,"ast","locals-functions-setter");
EXT(YprotoSsystemYcomponents_last,"proto/system","components-last");
EXT(YastYfree_environment,"ast","free-environment");
EXT(YastYsignature_arity,"ast","signature-arity");
EXT(YastYbinding_info_setter,"ast","binding-info-setter");
EXT(YprotoScollectionsSrangeYfrom_above_by,"proto/collections/range","from-above-by");
EXT(YprotoSmathYmin,"proto/math","min");
EXT(YsyntaxYsexpr_syntax_definition_value,"syntax","sexpr-syntax-definition-value");
EXT(YastYalternative_consequent,"ast","alternative-consequent");
EXT(YprotoScollectionsSrangeYfrom_by,"proto/collections/range","from-by");
EXT(YastYapplication_knownQ,"ast","application-known?");
EXT(YprotoSportsYport_line_setter,"proto/ports","port-line-setter");
EXT(YprotoScollectionsScollectionYas_copy,"proto/collections/collection","as-copy");
EXT(YastYfunction_data_refs_setter,"ast","function-data-refs-setter");
EXT(YprotoScollectionsScollectionYalter,"proto/collections/collection","alter");
EXT(YsyntaxYsexpr_iterate_Gloc,"syntax","sexpr-iterate->loc");
EXT(YprotoScollectionsScollectionYcopy_state,"proto/collections/collection","copy-state");
EXT(YprotoScollectionsScollectionYelt_setter,"proto/collections/collection","elt-setter");
EXT(YastYfab_p2c_module,"ast","fab-p2c-module");
EXT(YsyntaxYsexpr_syntax_if_value,"syntax","sexpr-syntax-if-value");
EXT(YastYbinding_module_name,"ast","binding-module-name");
EXT(YastYfix_let_types_setter,"ast","fix-let-types-setter");
EXT(Yunexec,"boot","unexec");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YsyntaxYDsexpr_isa_tag,"syntax","$sexpr-isa-tag");
EXT(YwriteYwrite,"write","write");
EXT(YprotoSsystemYprobe_directory,"proto/system","probe-directory");
EXT(YastYLast_primitiveG,"ast","<ast-primitive>");
EXT(YLsingletonG,"boot","<singleton>");
EXT(Yast_linearizeYreference_offset,"ast-linearize","reference-offset");
EXT(YprotoSsystemYos_binding_value_setter,"proto/system","os-binding-value-setter");
EXT(YprotoScollectionsSsequenceY2nd,"proto/collections/sequence","2nd");
EXT(Ytup,"boot","tup");
EXT(Yast_linearizeYupdate_walkX,"ast-linearize","update-walk!");
EXT(YwriteYdisplay,"write","display");
EXT(YprotoSmathYceiling,"proto/math","ceiling");
EXT(YastYreport_undefined_global_bindings,"ast","report-undefined-global-bindings");
EXT(YastYmodule_loader_module_type,"ast","module-loader-module-type");
EXT(YprotoScollectionsStableYDpermanent_hash_state,"proto/collections/table","$permanent-hash-state");
EXT(YmacrosYnxt_state,"macros","nxt-state");
EXT(YprotoSsystemYprocess_id,"proto/system","process-id");
EXT(Yast_linearizeYLclosure_creationG,"ast-linearize","<closure-creation>");
DEF(YtopYsave_image,"top","save-image");
EXT(YprotoSmathYabs,"proto/math","abs");
DEF(YtopYstr_eval,"top","str-eval");
EXT(YprotoSmathYceilingS,"proto/math","ceiling/");
EXT(YastYinstall_initial_bindings,"ast","install-initial-bindings");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YastYload_module,"ast","load-module");
EXT(YsyntaxYsexpr_if_then,"syntax","sexpr-if-then");
DEF(YtopYtop_in,"top","top-in");
EXT(YsyntaxYsexpr_method_signature,"syntax","sexpr-method-signature");
EXT(YastYreference_called_functionQ,"ast","reference-called-function?");
EXT(YsyntaxYDsexpr_slot_tag,"syntax","$sexpr-slot-tag");
EXT(YprotoSportsYLstring_portG,"proto/ports","<string-port>");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YprotoScollectionsScollectionYnow_key,"proto/collections/collection","now-key");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YprotoScollectionsSsequenceYsub_setter,"proto/collections/sequence","sub-setter");
EXT(YastYreference_called_functionQ_setter,"ast","reference-called-function?-setter");
EXT(YprotoSportsYclose_input_port,"proto/ports","close-input-port");
EXT(YPwith_monitor,"boot","%with-monitor");
EXT(YastYbind_exit_main_fun,"ast","bind-exit-main-fun");
EXT(YprotoSportsYwrite_char,"proto/ports","write-char");
EXT(YprotoSportsYnewline,"proto/ports","newline");
EXT(YastYfunction_naryQ,"ast","function-nary?");
EXT(YastYunwind_protect_protected_thunk,"ast","unwind-protect-protected-thunk");
EXT(YastYLglobal_assignmentG,"ast","<global-assignment>");
DEF(YtopYstr_parse_in,"top","str-parse-in");
EXT(Yast_linearizeYbox_reference,"ast-linearize","box-reference");
EXT(Yadd_slot,"boot","add-slot");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YastYapplication_function,"ast","application-function");
EXT(YastYmonitor_test,"ast","monitor-test");
EXT(YprotoSmathYnyi_error,"proto/math","nyi-error");
DEF(YtopYstr_eval_in,"top","str-eval-in");
EXT(YastYfunction_free,"ast","function-free");
EXT(YastYas_lst,"ast","as-lst");
EXT(YisaQ,"boot","isa?");
EXT(YastYmonitor_main_thunk,"ast","monitor-main-thunk");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YmacrosYnow_elt,"macros","now-elt");
EXT(YprotoSmathYNE,"proto/math","~=");
EXT(YastYlocals_functions,"ast","locals-functions");
EXT(YprotoScollectionsScollectionYdo2,"proto/collections/collection","do2");
EXT(YprotoScollectionsSsequenceY1st,"proto/collections/sequence","1st");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YprotoSmathYlogbitQ,"proto/math","logbit?");
EXT(YprotoSmathYcontagious_call,"proto/math","contagious-call");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YmacrosYelt,"macros","elt");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YPdefine_method,"boot","%define-method");
EXT(YastYLruntime_referenceG,"ast","<runtime-reference>");
EXT(YprotoScollectionsSlistYassq,"proto/collections/list","assq");
DEF(YtopYp2c_eval,"top","p2c-eval");
EXT(YprotoSsystemYobj_filename,"proto/system","obj-filename");
EXT(YprotoSmathYpower_of_two_ceiling,"proto/math","power-of-two-ceiling");
EXT(YastYruntime_environment,"ast","runtime-environment");
EXT(YastYbinding_index,"ast","binding-index");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_56);
DEFLIT(lit_37);
DEFLIT(lit_74);
DEFLIT(lit_16);
DEFLIT(lit_49);
DEFLIT(lit_18);
DEFLIT(lit_22);
DEFLIT(lit_23);
DEFLIT(lit_20);
DEFLIT(lit_33);
DEFLIT(lit_15);
DEFLIT(lit_17);
DEFLIT(lit_45);
DEFLIT(lit_14);
DEFLIT(lit_26);
DEFLIT(lit_32);
DEFLIT(lit_69);
DEFLIT(lit_35);
DEFLIT(lit_7);
DEFLIT(lit_38);
DEFLIT(lit_4);
DEFLIT(lit_50);
DEFLIT(lit_48);
DEFLIT(lit_3);
DEFLIT(lit_1);
DEFLIT(lit_60);
DEFLIT(lit_41);
DEFLIT(lit_42);
DEFLIT(lit_10);
DEFLIT(lit_29);
DEFLIT(lit_63);
DEFLIT(lit_54);
DEFLIT(lit_40);
DEFLIT(lit_78);
DEFLIT(lit_47);
DEFLIT(lit_75);
DEFLIT(lit_31);
DEFLIT(lit_79);
DEFLIT(lit_8);
DEFLIT(lit_30);
DEFLIT(lit_68);
DEFLIT(lit_13);
DEFLIT(lit_5);
DEFLIT(lit_66);
DEFLIT(lit_11);
DEFLIT(lit_51);
DEFLIT(lit_25);
DEFLIT(lit_58);
DEFLIT(lit_27);
DEFLIT(lit_80);
DEFLIT(lit_6);
DEFLIT(lit_57);
DEFLIT(lit_36);
DEFLIT(lit_21);
DEFLIT(lit_64);
DEFLIT(lit_81);
DEFLIT(lit_46);
DEFLIT(lit_44);
DEFLIT(lit_72);
DEFLIT(lit_61);
DEFLIT(lit_76);
DEFLIT(lit_12);
DEFLIT(lit_77);
DEFLIT(lit_0);
DEFLIT(lit_67);
DEFLIT(lit_71);
DEFLIT(lit_62);
DEFLIT(lit_2);
DEFLIT(lit_52);
DEFLIT(lit_9);
DEFLIT(lit_24);
DEFLIT(lit_43);
DEFLIT(lit_73);
DEFLIT(lit_53);
DEFLIT(lit_28);
DEFLIT(lit_39);
DEFLIT(lit_34);
DEFLIT(lit_59);
DEFLIT(lit_19);
DEFLIT(lit_70);
DEFLIT(lit_55);
DEFLIT(lit_65);

/* FUNCTIONS: */

LOCFOR(fun_parse_in_0);
LOCFOR(fun_parse_1);
LOCFOR(fun_str_parse_in_2);
LOCFOR(fun_str_parse_3);
FUNFOR(YtopYast_run);
FUNFOR(YtopYp2c_run);
FUNFOR(YtopYauto_run);
LOCFOR(fun_eval_in_7);
LOCFOR(fun_eval_8);
LOCFOR(fun_str_eval_in_9);
LOCFOR(fun_str_eval_10);
LOCFOR(fun_loop_11);
LOCFOR(fun_12);
LOCFOR(fun_read_file_13);
LOCFOR(fun_load_in_14);
LOCFOR(fun_load_15);
LOCFOR(fun_load_from_16);
LOCFOR(fun_prompt_for_command_expression_17);
LOCFOR(fun_print_result_expression_18);
LOCFOR(fun_do_stack_frames_19);
LOCFOR(fun_20);
LOCFOR(fun_backtrace_21);
FUNFOR(Ykeyboard_interrupt);
FUNFOR(YtopYdo_restart);
LOCFOR(fun_24);
LOCFOR(fun_25);
LOCFOR(fun_26);
LOCFOR(fun_27);
LOCFOR(fun_x_1347_28);
LOCFOR(fun_29);
LOCFOR(fun_x_1349_30);
LOCFOR(fun_31);
LOCFOR(fun_32);
LOCFOR(fun_33);
LOCFOR(fun_34);
LOCFOR(fun_loop_35);
LOCFOR(fun_36);
LOCFOR(fun_top_in_37);
LOCFOR(fun_38);
LOCFOR(fun_39);
LOCFOR(fun_40);
LOCFOR(fun_loop_41);
LOCFOR(fun_42);
LOCFOR(fun_43);
LOCFOR(fun_top_44);
LOCFOR(fun_45);
FUNFOR(YtopYsave_image);
extern P YtopY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_parse_in_0) {
  P s_,ct_env_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL1(1,VARREF(YreadYread_from_string),s_);
  T0 = CALL3(1,VARREF(YastYobjectify),T1,ct_env_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_parse_1) {
  P s_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YtopYparse_in),s_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_parse_in_2) {
  P s_,ct_env_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL2(1,VARREF(YtopYparse_in),s_,ct_env_);
  T0 = CALL3(1,VARREF(YruntimeYformat),VARREF(YprotoSportsYout),LITREF(lit_8),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_parse_3) {
  P s_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YtopYstr_parse_in),s_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YtopYast_run) {
  P ast_,ct_env_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(ct_env_, 1);
loop:
  T0 = CALL1(1,VARREF(YastYast_evaluate),ast_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YtopYp2c_run) {
  P ast_,ct_env_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(ct_env_, 1);
loop:
  T0 = CALL2(1,VARREF(YtopYp2c_eval),ast_,ct_env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YtopYauto_run) {
  P ast_,ct_env_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL1(1,VARREF(Yast_linearizeYast_contains_funQ),ast_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YtopYp2c_run),ast_,ct_env_);
    T0 = T2;
  } else {
    T3 = CALL2(1,VARREF(YtopYast_run),ast_,ct_env_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_in_7) {
  P x_,ct_env_;
  P eF1690;
  P oF1689;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL3(1,VARREF(YastYobjectify),x_,ct_env_,YPfalse);
  oF1689 = T1;
  T3 = CALL1(1,VARREF(YastYast_evaluate),oF1689);
  eF1690 = T3;
  T2 = eF1690;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_8) {
  P x_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YtopYeval_in),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_eval_in_9) {
  P x_,ct_env_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(ct_env_, 1);
loop:
  T2 = CALL1(1,VARREF(YreadYread_from_string),x_);
  T1 = CALL2(1,VARREF(YtopYeval_in),T2,ct_env_);
  T0 = CALL1(1,VARREF(YwriteYwrite_to_string),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_eval_10) {
  P x_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YtopYstr_eval_in),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_11) {
  P forms_;
  P xF1691;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(forms_, 0);
loop:
  T1 = CALL1(1,VARREF(YruntimeYread),FREEREF(0));
  xF1691 = T1;
  T3 = CALL1(1,VARREF(YprotoSmathYeof_objectQ),xF1691);
  if (T3 != YPfalse) {
    T5 = CALL1(1,VARREF(YmacrosYrevX),forms_);
    T4 = CALL1(1,VARREF(YsyntaxYsexpr_sequence_Gbegin),T5);
    T2 = T4;
  } else {
    T7 = CALL2(1,VARREF(YmacrosYpair),xF1691,forms_);
    a1 = T7;
    forms_ = a1;
    goto loop;
    T2 = T6;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_12) {
  P port_;
  P loopF1692;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_11,2);
  loopF1692 = T1;
  FUNINIT(loopF1692, 2,port_,loopF1692);
  T2 = CALL1(0,loopF1692,Ynil);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_read_file_13) {
  P filename_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  T1 = fun_12;
  T0 = CALL2(1,VARREF(YprotoSportsYcall_with_input_file),filename_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_in_14) {
  P filename_,ct_env_;
  P oF1694;
  P xF1693;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(filename_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL1(1,VARREF(YtopYread_file),filename_);
  xF1693 = T1;
  T3 = CALL3(1,VARREF(YastYobjectify),xF1693,ct_env_,YPfalse);
  oF1694 = T3;
  T4 = CALL2(1,VARREF(YtopYrun),oF1694,ct_env_);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_15) {
  P filename_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(filename_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YastYload_in),filename_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_from_16) {
  P name_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,VARREF(YprotoSsystemYproto_filename),name_);
  T0 = CALL2(1,VARREF(YtopYload),T1,modname_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_prompt_for_command_expression_17) {
  P env_,level_,prompt_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(env_, 0);
  ARG(level_, 1);
  ARG(prompt_, 2);
loop:
  T1 = CALL1(1,VARREF(YastYfind_environment_module),env_);
  T0 = CALL1(1,VARREF(YastYmodule_name),T1);
  CALLN(1,VARREF(YruntimeYformat),5,VARREF(YprotoSportsYout),LITREF(lit_32),T0,level_,prompt_);
  CALL1(1,VARREF(YprotoSportsYforce_output),VARREF(YprotoSportsYout));
  T2 = CALL1(1,VARREF(YruntimeYread),VARREF(YprotoSportsYin));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_print_result_expression_18) {
  P env_,level_,label_,result_;
  P T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(env_, 0);
  ARG(level_, 1);
  ARG(label_, 2);
  ARG(result_, 3);
loop:
  T1 = CALL1(1,VARREF(YastYfind_environment_module),env_);
  T0 = CALL1(1,VARREF(YastYmodule_name),T1);
  CALLN(1,VARREF(YruntimeYformat),5,VARREF(YprotoSportsYout),LITREF(lit_36),T0,level_,label_);
  T2 = CALL2(1,VARREF(YwriteYwrite),VARREF(YprotoSportsYout),result_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_do_stack_frames_19) {
  P fun_;
  P T0;
  P a1;
LINK_STACK();
  ARG(fun_, 0);
loop:
  T0 = (P)YPdo_stack_frames(fun_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_20) {
  P f_,args_;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(args_, 1);
loop:
  T0 = BOXVAL(FREEREF(0));
  T1 = CALL1(1,VARREF(YprotoScollectionsSsequenceYrev),args_);
  CALLN(1,VARREF(YruntimeYformat),5,VARREF(YprotoSportsYout),LITREF(lit_42),T0,f_,T1);
  T4 = BOXVAL(FREEREF(0));
  T3 = CALL2(1,VARREF(YprotoSmathYA),T4,YPint((P)1));
  T2 = BOXVAL(FREEREF(0)) = T3;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_backtrace_21) {
  P numF1695;
  P T3,T2,T1,T0;
LINK_STACK();
loop:
  numF1695 = YPint((P)0);
  numF1695 = BOXFAB(numF1695);
  T3 = FUNFAB(fun_20,1,numF1695);
  T2 = CALL1(1,VARREF(YtopYdo_stack_frames),T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ykeyboard_interrupt) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YruntimeYsig),VARREF(YtopYLkeyboard_interruptG));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YtopYdo_restart) {
  P restarts_,n_;
  P tmpF1696;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(restarts_, 0);
  ARG(n_, 1);
loop:
  T0 = CALL1(1,VARREF(Ynot),restarts_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_48));
  } else {
  }
  T4 = CALL2(1,VARREF(YprotoSmathYG),n_,YPint((P)0));
  tmpF1696 = T4;
  if (tmpF1696 != YPfalse) {
    T7 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),restarts_);
    T6 = CALL2(1,VARREF(YprotoSmathYLE),n_,T7);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T8 = CALL1(1,VARREF(Yerror),LITREF(lit_49));
  } else {
  }
  T11 = CALL2(1,VARREF(YprotoSmathY_),n_,YPint((P)1));
  T10 = CALL2(1,VARREF(YmacrosYelt),restarts_,T11);
  T9 = CALL3(1,VARREF(YruntimeYinvoke_handler_interactively),T10,VARREF(YprotoSportsYin),VARREF(YprotoSportsYout));
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_24) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_25) {
  P c_,r_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
loop:
  T0 = CALL2(1,VARREF(YisaQ),c_,VARREF(YtopYLkeyboard_interruptG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YruntimeYformat),VARREF(YprotoSportsYout),LITREF(lit_58));
  } else {
    T3 = CALL1(1,VARREF(YruntimeYdescribe_condition),c_);
    T2 = CALL3(1,VARREF(YruntimeYformat),VARREF(YprotoSportsYout),LITREF(lit_59),T3);
  }
  T4 = CALL2(1,VARREF(YprotoSmathYA),FREEREF(0),YPint((P)1));
  T5 = BOXVAL(FREEREF(3));
  CALLN(1,VARREF(YtopYtop_in),5,T4,FREEREF(1),FREEREF(2),YPtrue,T5);
  T6 = CALL1(1,FREEREF(4),YPfalse);
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_26) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_27) {
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

FUNCODEDEF(fun_x_1347_28) {
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

FUNCODEDEF(fun_29) {
  P return_;
  P x_1346F1701;
  P x_1346F1700;
  P nF1699;
  P x_1346F1698;
  P x_1347F1697;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1347_28,1);
  x_1347F1697 = T1;
  FUNINIT(x_1347F1697, 1,return_);
  x_1346F1698 = FREEREF(0);
  nF1699 = YPfalse;
  nF1699 = BOXFAB(nF1699);
  T5 = CALL2(1,VARREF(YisaQ),x_1346F1698,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1346F1698,LITREF(lit_70),x_1347F1697);
    x_1346F1700 = T7;
    T9 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1346F1700,x_1347F1697);
    BOXVAL(nF1699) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1346F1700);
    x_1346F1701 = T10;
    T11 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1346F1701,x_1347F1697);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1347F1697,LITREF(lit_71),x_1346F1698);
  }
  T3 = YPtrue;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1349_30) {
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

FUNCODEDEF(fun_31) {
  P return_;
  P x_1348F1706;
  P x_1348F1705;
  P mF1704;
  P x_1348F1703;
  P x_1349F1702;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1349_30,1);
  x_1349F1702 = T1;
  FUNINIT(x_1349F1702, 1,return_);
  x_1348F1703 = FREEREF(0);
  mF1704 = YPfalse;
  mF1704 = BOXFAB(mF1704);
  T5 = CALL2(1,VARREF(YisaQ),x_1348F1703,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1348F1703,LITREF(lit_73),x_1349F1702);
    x_1348F1705 = T7;
    T9 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1348F1705,x_1349F1702);
    BOXVAL(mF1704) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1348F1705);
    x_1348F1706 = T10;
    T11 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1348F1706,x_1349F1702);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1349F1702,LITREF(lit_71),x_1348F1703);
  }
  T3 = YPtrue;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_32) {
  P astF1710;
  P new_envF1709;
  P tmpF1708;
  P formF1707;
  P T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36;
  P T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
LINK_STACK();
loop:
  CALL1(1,VARREF(YprotoSportsYnewline),VARREF(YprotoSportsYout));
  T0 = BOXVAL(FREEREF(0));
  if (T0 != YPfalse) {
    CALL2(1,VARREF(YruntimeYformat),VARREF(YprotoSportsYout),LITREF(lit_61));
    T1 = CALL2(1,VARREF(YruntimeYlist_handlers),VARREF(YruntimeYLrestartG),VARREF(YprotoSportsYout));
    BOXVAL(FREEREF(1)) = T1;
    T2 = BOXVAL(FREEREF(0)) = YPfalse;
  } else {
  }
  T5 = BOXVAL(FREEREF(2));
  T4 = CALL3(1,VARREF(YtopYprompt_for_command_expression),T5,FREEREF(3),LITREF(lit_62));
  formF1707 = T4;
  T8 = CALL2(1,VARREF(YprotoSmathYE),formF1707,LITREF(lit_63));
  tmpF1708 = T8;
  if (tmpF1708 != YPfalse) {
    T9 = tmpF1708;
  } else {
    T11 = CALL0(1,VARREF(YprotoSmathYeof_object));
    T10 = CALL2(1,VARREF(YprotoSmathYE),formF1707,T11);
    T9 = T10;
  }
  T7 = T9;
  if (T7 != YPfalse) {
    T12 = CALL1(1,FREEREF(4),YPfalse);
    T6 = T12;
  } else {
    T14 = CALL2(1,VARREF(YprotoSmathYE),formF1707,LITREF(lit_64));
    if (T14 != YPfalse) {
      T15 = CALL1(1,FREEREF(5),YPfalse);
      T13 = T15;
    } else {
      T17 = CALL2(1,VARREF(YprotoSmathYE),formF1707,LITREF(lit_65));
      if (T17 != YPfalse) {
        T18 = CALL2(1,VARREF(YruntimeYlist_handlers),VARREF(YruntimeYLconditionG),VARREF(YprotoSportsYout));
        T16 = T18;
      } else {
        T20 = CALL2(1,VARREF(YprotoSmathYE),formF1707,LITREF(lit_66));
        if (T20 != YPfalse) {
          T21 = CALL2(1,VARREF(YruntimeYlist_handlers),VARREF(YruntimeYLrestartG),VARREF(YprotoSportsYout));
          T19 = T21;
        } else {
          T24 = FUNFAB(fun_29,1,formF1707);
          T23 = with_exit(T24);
          if (T23 != YPfalse) {
            T26 = BOXVAL(FREEREF(1));
            T27 = CALL1(1,VARREF(YprotoScollectionsSsequenceY2nd),formF1707);
            T25 = CALL2(1,VARREF(YtopYdo_restart),T26,T27);
            T22 = T25;
          } else {
            T30 = FUNFAB(fun_31,1,formF1707);
            T29 = with_exit(T30);
            if (T29 != YPfalse) {
              T33 = CALL1(1,VARREF(YprotoScollectionsSsequenceY2nd),formF1707);
              T32 = CALL1(1,VARREF(YastYruntime_environment),T33);
              new_envF1709 = T32;
              T34 = BOXVAL(FREEREF(2)) = new_envF1709;
              T31 = T34;
              T28 = T31;
            } else {
              T36 = CALL2(1,VARREF(YprotoSmathYE),formF1707,LITREF(lit_74));
              if (T36 != YPfalse) {
                T37 = VARSET(YtopYrun,VARREF(YtopYp2c_run));
                T35 = T37;
              } else {
                T39 = CALL2(1,VARREF(YprotoSmathYE),formF1707,LITREF(lit_75));
                if (T39 != YPfalse) {
                  T40 = VARSET(YtopYrun,VARREF(YtopYast_run));
                  T38 = T40;
                } else {
                  T42 = CALL2(1,VARREF(YprotoSmathYE),formF1707,LITREF(lit_76));
                  if (T42 != YPfalse) {
                    T43 = VARSET(YtopYrun,VARREF(YtopYauto_run));
                    T41 = T43;
                  } else {
                    if (YPtrue != YPfalse) {
                      T47 = BOXVAL(FREEREF(2));
                      T46 = CALL3(1,VARREF(YastYobjectify),formF1707,T47,YPfalse);
                      astF1710 = T46;
                      T49 = BOXVAL(FREEREF(2));
                      T51 = BOXVAL(FREEREF(2));
                      T50 = CALL2(1,VARREF(YtopYrun),astF1710,T51);
                      T48 = CALLN(1,VARREF(YtopYprint_result_expression),4,T49,FREEREF(3),LITREF(lit_77),T50);
                      T45 = T48;
                      T44 = T45;
                    } else {
                      T44 = YPfalse;
                    }
                    T41 = T44;
                  }
                  T38 = T41;
                }
                T35 = T38;
              }
              T28 = T35;
            }
            T22 = T28;
          }
          T19 = T22;
        }
        T16 = T19;
      }
      T13 = T16;
    }
    T6 = T13;
  }
  T3 = T6;
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_33) {
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T3 = (P)YPpair(VARREF(Yhandler_info_arguments),Ynil);
  T2 = (P)YPpair(VARREF(Yhandler_info_message),T3);
  T6 = CALL1(1,VARREF(Ylst),FREEREF(0));
  T5 = (P)YPpair(T6,Ynil);
  T4 = (P)YPpair(LITREF(lit_60),T5);
  T1 = CALL3(1,VARREF(YPisa),VARREF(YLsimple_handler_infoG),T2,T4);
  T7 = fun_26;
  T8 = FUNFAB(fun_27,1,FREEREF(1));
  T9 = FUNFAB(fun_32,6,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(0),FREEREF(5),FREEREF(6));
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YruntimeYLrestartG),T1,T7,T8,T9);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_34) {
  P continue_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(continue_, 0);
loop:
  T1 = fun_24;
  T2 = FUNFAB(fun_25,5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),continue_);
  T3 = FUNFAB(fun_33,7,FREEREF(0),continue_,FREEREF(4),FREEREF(5),FREEREF(3),FREEREF(2),FREEREF(6));
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YruntimeYLconditionG),VARREF(YruntimeYDdefault_handler_info),T1,T2,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_35) {
  P T1,T0;
LINK_STACK();
loop:
  T0 = FUNFAB(fun_34,7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6));
  with_exit(T0);
  goto loop;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_36) {
  P blow_;
  P loopF1711;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_35,8);
  loopF1711 = T1;
  FUNINIT(loopF1711, 8,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),blow_,loopF1711);
  T2 = CALL0(0,loopF1711);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_top_in_37) {
  P level_,top_,quit_,show_restartsQ_,ct_env_;
  P restartsF1712;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(level_, 0);
  ARG(top_, 1);
  ARG(quit_, 2);
  ARG(show_restartsQ_, 3);
  ARG(ct_env_, 4);
loop:
  show_restartsQ_ = BOXFAB(show_restartsQ_);
  ct_env_ = BOXFAB(ct_env_);
  restartsF1712 = YPfalse;
  restartsF1712 = BOXFAB(restartsF1712);
  T5 = FUNFAB(fun_36,6,level_,top_,quit_,ct_env_,show_restartsQ_,restartsF1712);
  T4 = with_exit(T5);
  T2 = T4;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_38) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_39) {
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

FUNCODEDEF(fun_40) {
  P top_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(top_, 0);
loop:
  T1 = CALL1(1,VARREF(YastYruntime_environment),FREEREF(1));
  T0 = CALLN(1,VARREF(YtopYtop_in),5,YPint((P)0),top_,FREEREF(0),YPfalse,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_41) {
  P T1,T0;
LINK_STACK();
loop:
  T0 = FUNFAB(fun_40,2,FREEREF(0),FREEREF(1));
  with_exit(T0);
  goto loop;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_42) {
  P loopF1713;
  P T2,T1,T0;
LINK_STACK();
loop:
  T1 = FUNSHELL(1,fun_loop_41,3);
  loopF1713 = T1;
  FUNINIT(loopF1713, 3,FREEREF(0),FREEREF(1),loopF1713);
  T2 = CALL0(0,loopF1713);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_43) {
  P quit_;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(quit_, 0);
loop:
  T3 = (P)YPpair(VARREF(Yhandler_info_arguments),Ynil);
  T2 = (P)YPpair(VARREF(Yhandler_info_message),T3);
  T6 = CALL0(1,VARREF(Ylst));
  T5 = (P)YPpair(T6,Ynil);
  T4 = (P)YPpair(LITREF(lit_78),T5);
  T1 = CALL3(1,VARREF(YPisa),VARREF(YLsimple_handler_infoG),T2,T4);
  T7 = fun_38;
  T8 = FUNFAB(fun_39,1,quit_);
  T9 = FUNFAB(fun_42,2,quit_,FREEREF(0));
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YruntimeYLrestartG),T1,T7,T8,T9);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_top_44) {
  P modname_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = FUNFAB(fun_43,1,modname_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_45) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YtopYtop),LITREF(lit_81));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YtopYsave_image) {
  P image_name_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(image_name_, 0);
loop:
  T1 = fun_45;
  T0 = CALL2(1,VARREF(Yunexec),image_name_,T1);
UNLINK_STACK();
  QRET(T0);
}

P YtopY___main_0___() {
  P T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114;
  P T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98;
  P T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82;
  P T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66;
  P T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50;
  P T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
loop:
  lit_0 = YPPsym((P)"p2c-eval");
  lit_1 = YPPsym((P)"exp");
  lit_2 = YPPsym((P)"ct-env");
  T1 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T0 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_0),T1,Ynil,YPfalse);
  VARSET(YtopYp2c_eval,T0);
  lit_3 = YPPsym((P)"parse-in");
  lit_4 = YPPsym((P)"s");
  T2 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_in_0 = YPmet(FUNCODEREF(fun_parse_in_0),LITREF(lit_3),T2,ENVNUL,PNUL,YPfalse);
  T5 = BOUNDP(YtopYparse_in);
  if (T5 != YPfalse) {
    T4 = VARREF(YtopYparse_in);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_parse_in_0;
  T3 = CALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(YtopYparse_in,T3);
  lit_5 = YPPsym((P)"parse");
  lit_6 = YPPsym((P)"modname");
  T7 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_6)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_1 = YPmet(FUNCODEREF(fun_parse_1),LITREF(lit_5),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YtopYparse);
  if (T10 != YPfalse) {
    T9 = VARREF(YtopYparse);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_parse_1;
  T8 = CALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YtopYparse,T8);
  lit_7 = YPPsym((P)"str-parse-in");
  lit_8 = YPsb((P)"%=\n");
  T12 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_parse_in_2 = YPmet(FUNCODEREF(fun_str_parse_in_2),LITREF(lit_7),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YtopYstr_parse_in);
  if (T15 != YPfalse) {
    T14 = VARREF(YtopYstr_parse_in);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_str_parse_in_2;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YtopYstr_parse_in,T13);
  lit_9 = YPPsym((P)"str-parse");
  T17 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_6)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_parse_3 = YPmet(FUNCODEREF(fun_str_parse_3),LITREF(lit_9),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YtopYstr_parse);
  if (T20 != YPfalse) {
    T19 = VARREF(YtopYstr_parse);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_str_parse_3;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YtopYstr_parse,T18);
  lit_10 = YPPsym((P)"ast-run");
  lit_11 = YPPsym((P)"ast");
  T22 = YPsig(YPPlist(2,LITREF(lit_11),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YtopYast_run = YPmet(FUNCODEREF(YtopYast_run),LITREF(lit_10),T22,ENVNUL,PNUL,YPfalse);
  T23 = YtopYast_run;
  VARSET(YtopYast_run,T23);
  lit_12 = YPPsym((P)"p2c-run");
  T24 = YPsig(YPPlist(2,LITREF(lit_11),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YtopYp2c_run = YPmet(FUNCODEREF(YtopYp2c_run),LITREF(lit_12),T24,ENVNUL,PNUL,YPfalse);
  T25 = YtopYp2c_run;
  VARSET(YtopYp2c_run,T25);
  lit_13 = YPPsym((P)"auto-run");
  T26 = YPsig(YPPlist(2,LITREF(lit_11),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YtopYauto_run = YPmet(FUNCODEREF(YtopYauto_run),LITREF(lit_13),T26,ENVNUL,PNUL,YPfalse);
  T27 = YtopYauto_run;
  VARSET(YtopYauto_run,T27);
  VARSET(YtopYrun,VARREF(YtopYauto_run));
  lit_14 = YPPsym((P)"eval-in");
  lit_15 = YPPsym((P)"x");
  T28 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_in_7 = YPmet(FUNCODEREF(fun_eval_in_7),LITREF(lit_14),T28,ENVNUL,PNUL,YPfalse);
  T31 = BOUNDP(YtopYeval_in);
  if (T31 != YPfalse) {
    T30 = VARREF(YtopYeval_in);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_eval_in_7;
  T29 = CALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(YtopYeval_in,T29);
  lit_16 = YPPsym((P)"eval");
  T33 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_6)),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_8 = YPmet(FUNCODEREF(fun_eval_8),LITREF(lit_16),T33,ENVNUL,PNUL,YPfalse);
  T36 = BOUNDP(YsyntaxYeval);
  if (T36 != YPfalse) {
    T35 = VARREF(YsyntaxYeval);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_eval_8;
  T34 = CALL2(1,VARREF(YPdefine_method),T35,T37);
  VARSET(YsyntaxYeval,T34);
  lit_17 = YPPsym((P)"str-eval-in");
  T38 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_2)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_in_9 = YPmet(FUNCODEREF(fun_str_eval_in_9),LITREF(lit_17),T38,ENVNUL,PNUL,YPfalse);
  T41 = BOUNDP(YtopYstr_eval_in);
  if (T41 != YPfalse) {
    T40 = VARREF(YtopYstr_eval_in);
  } else {
    T40 = YPfalse;
  }
  T42 = fun_str_eval_in_9;
  T39 = CALL2(1,VARREF(YPdefine_method),T40,T42);
  VARSET(YtopYstr_eval_in,T39);
  lit_18 = YPPsym((P)"str-eval");
  T43 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_6)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_10 = YPmet(FUNCODEREF(fun_str_eval_10),LITREF(lit_18),T43,ENVNUL,PNUL,YPfalse);
  T46 = BOUNDP(YtopYstr_eval);
  if (T46 != YPfalse) {
    T45 = VARREF(YtopYstr_eval);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_str_eval_10;
  T44 = CALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YtopYstr_eval,T44);
  lit_19 = YPPsym((P)"read-file");
  lit_20 = YPPsym((P)"filename");
  lit_21 = YPPsym((P)"port");
  lit_22 = YPPsym((P)"loop");
  lit_23 = YPPsym((P)"forms");
  T50 = YPsig(YPPlist(1,LITREF(lit_23)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_11 = YPmet(FUNCODEREF(fun_loop_11),LITREF(lit_22),T50,ENVNUL,PNUL,YPfalse);
  T49 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T49,ENVNUL,PNUL,YPfalse);
  T48 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_file_13 = YPmet(FUNCODEREF(fun_read_file_13),LITREF(lit_19),T48,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YtopYread_file);
  if (T53 != YPfalse) {
    T52 = VARREF(YtopYread_file);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_read_file_13;
  T51 = CALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YtopYread_file,T51);
  lit_24 = YPPsym((P)"load-in");
  T55 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_2)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_in_14 = YPmet(FUNCODEREF(fun_load_in_14),LITREF(lit_24),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(YastYload_in);
  if (T58 != YPfalse) {
    T57 = VARREF(YastYload_in);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_load_in_14;
  T56 = CALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YastYload_in,T56);
  lit_25 = YPPsym((P)"load");
  T60 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_6)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_15 = YPmet(FUNCODEREF(fun_load_15),LITREF(lit_25),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(YtopYload);
  if (T63 != YPfalse) {
    T62 = VARREF(YtopYload);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_load_15;
  T61 = CALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YtopYload,T61);
  lit_26 = YPPsym((P)"load-from");
  lit_27 = YPPsym((P)"name");
  T65 = YPsig(YPPlist(2,LITREF(lit_27),LITREF(lit_6)),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_from_16 = YPmet(FUNCODEREF(fun_load_from_16),LITREF(lit_26),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YtopYload_from);
  if (T68 != YPfalse) {
    T67 = VARREF(YtopYload_from);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_load_from_16;
  T66 = CALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YtopYload_from,T66);
  lit_28 = YPPsym((P)"prompt-for-command-expression");
  lit_29 = YPPsym((P)"env");
  lit_30 = YPPsym((P)"level");
  lit_31 = YPPsym((P)"prompt");
  lit_32 = YPsb((P)"%s %=%s");
  T70 = YPsig(YPPlist(3,LITREF(lit_29),LITREF(lit_30),LITREF(lit_31)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_prompt_for_command_expression_17 = YPmet(FUNCODEREF(fun_prompt_for_command_expression_17),LITREF(lit_28),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(YtopYprompt_for_command_expression);
  if (T73 != YPfalse) {
    T72 = VARREF(YtopYprompt_for_command_expression);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_prompt_for_command_expression_17;
  T71 = CALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YtopYprompt_for_command_expression,T71);
  lit_33 = YPPsym((P)"print-result-expression");
  lit_34 = YPPsym((P)"label");
  lit_35 = YPPsym((P)"result");
  lit_36 = YPsb((P)"%s %=%s");
  T75 = YPsig(YPPlist(4,LITREF(lit_29),LITREF(lit_30),LITREF(lit_34),LITREF(lit_35)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_print_result_expression_18 = YPmet(FUNCODEREF(fun_print_result_expression_18),LITREF(lit_33),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YtopYprint_result_expression);
  if (T78 != YPfalse) {
    T77 = VARREF(YtopYprint_result_expression);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_print_result_expression_18;
  T76 = CALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YtopYprint_result_expression,T76);
  lit_37 = YPPsym((P)"do-stack-frames");
  lit_38 = YPPsym((P)"fun");
  T80 = YPsig(YPPlist(1,LITREF(lit_38)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_stack_frames_19 = YPmet(FUNCODEREF(fun_do_stack_frames_19),LITREF(lit_37),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YtopYdo_stack_frames);
  if (T83 != YPfalse) {
    T82 = VARREF(YtopYdo_stack_frames);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_do_stack_frames_19;
  T81 = CALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YtopYdo_stack_frames,T81);
  lit_39 = YPPsym((P)"backtrace");
  lit_40 = YPPsym((P)"f");
  lit_41 = YPPsym((P)"args");
  lit_42 = YPsb((P)"[%=] %= %=\n");
  T86 = YPsig(YPPlist(2,LITREF(lit_40),LITREF(lit_41)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_20 = YPmet(FUNCODEREF(fun_20),YPfalse,T86,ENVNUL,PNUL,YPfalse);
  T85 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_backtrace_21 = YPmet(FUNCODEREF(fun_backtrace_21),LITREF(lit_39),T85,ENVNUL,PNUL,YPfalse);
  T89 = BOUNDP(YtopYbacktrace);
  if (T89 != YPfalse) {
    T88 = VARREF(YtopYbacktrace);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_backtrace_21;
  T87 = CALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(YtopYbacktrace,T87);
  lit_43 = YPPsym((P)"<keyboard-interrupt>");
  T92 = (P)YPpair(VARREF(YruntimeYLconditionG),Ynil);
  T91 = CALL2(1,VARREF(Yfab_class),LITREF(lit_43),T92);
  VARSET(YtopYLkeyboard_interruptG,T91);
  lit_44 = YPPsym((P)"keyboard-interrupt");
  T93 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Ykeyboard_interrupt = YPmet(FUNCODEREF(Ykeyboard_interrupt),LITREF(lit_44),T93,ENVNUL,PNUL,YPfalse);
  T94 = Ykeyboard_interrupt;
  VARSET(Ykeyboard_interrupt,T94);
  lit_45 = YPPsym((P)"do-restart");
  lit_46 = YPPsym((P)"restarts");
  lit_47 = YPPsym((P)"n");
  lit_48 = YPsb((P)"No restarts available.\n");
  lit_49 = YPsb((P)"No restart #%d.\n");
  T95 = YPsig(YPPlist(2,LITREF(lit_46),LITREF(lit_47)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YtopYdo_restart = YPmet(FUNCODEREF(YtopYdo_restart),LITREF(lit_45),T95,ENVNUL,PNUL,YPfalse);
  T96 = YtopYdo_restart;
  VARSET(YtopYdo_restart,T96);
  lit_50 = YPPsym((P)"top-in");
  lit_51 = YPPsym((P)"top");
  lit_52 = YPPsym((P)"quit");
  lit_53 = YPPsym((P)"show-restarts?");
  lit_54 = YPPsym((P)"blow");
  lit_55 = YPPsym((P)"continue");
  lit_56 = YPPsym((P)"c");
  lit_57 = YPPsym((P)"r");
  lit_58 = YPsb((P)"BREAK");
  lit_59 = YPsb((P)"ERROR: %s");
  lit_60 = YPsb((P)"Return to interpreter level %d");
  lit_61 = YPsb((P)"Type (restart N) to restart execution:\n");
  lit_62 = YPsb((P)"<= ");
  lit_63 = YPPlist(1,YPPsym((P)"quit"));
  lit_64 = YPPlist(1,YPPsym((P)"up"));
  lit_65 = YPPlist(1,YPPsym((P)"handlers"));
  lit_66 = YPPlist(1,YPPsym((P)"restarts"));
  lit_67 = YPPsym((P)"return");
  lit_68 = YPPsym((P)"x-1347");
  lit_69 = YPPsym((P)"msg");
  lit_70 = YPPsym((P)"restart");
  lit_71 = YPsb((P)"Match Pattern Failure");
  lit_72 = YPPsym((P)"x-1349");
  lit_73 = YPPsym((P)"in-mod");
  lit_74 = YPPlist(1,YPPsym((P)"p2c-eval"));
  lit_75 = YPPlist(1,YPPsym((P)"ast-eval"));
  lit_76 = YPPlist(1,YPPsym((P)"auto-eval"));
  lit_77 = YPsb((P)"=> ");
  T110 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T110,ENVNUL,PNUL,YPfalse);
  T109 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_25 = YPmet(FUNCODEREF(fun_25),YPfalse,T109,ENVNUL,PNUL,YPfalse);
  T108 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T108,ENVNUL,PNUL,YPfalse);
  T107 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T107,ENVNUL,PNUL,YPfalse);
  T106 = YPsig(YPPlist(2,LITREF(lit_69),LITREF(lit_41)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1347_28 = YPmet(FUNCODEREF(fun_x_1347_28),LITREF(lit_68),T106,ENVNUL,PNUL,YPfalse);
  T105 = YPsig(YPPlist(1,LITREF(lit_67)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T105,ENVNUL,PNUL,YPfalse);
  T104 = YPsig(YPPlist(2,LITREF(lit_69),LITREF(lit_41)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1349_30 = YPmet(FUNCODEREF(fun_x_1349_30),LITREF(lit_72),T104,ENVNUL,PNUL,YPfalse);
  T103 = YPsig(YPPlist(1,LITREF(lit_67)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T103,ENVNUL,PNUL,YPfalse);
  T102 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T102,ENVNUL,PNUL,YPfalse);
  T101 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T101,ENVNUL,PNUL,YPfalse);
  T100 = YPsig(YPPlist(1,LITREF(lit_55)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T100,ENVNUL,PNUL,YPfalse);
  T99 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_35 = YPmet(FUNCODEREF(fun_loop_35),LITREF(lit_22),T99,ENVNUL,PNUL,YPfalse);
  T98 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T98,ENVNUL,PNUL,YPfalse);
  T97 = YPsig(YPPlist(5,LITREF(lit_30),LITREF(lit_51),LITREF(lit_52),LITREF(lit_53),LITREF(lit_2)),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_top_in_37 = YPmet(FUNCODEREF(fun_top_in_37),LITREF(lit_50),T97,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(YtopYtop_in);
  if (T113 != YPfalse) {
    T112 = VARREF(YtopYtop_in);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_top_in_37;
  T111 = CALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YtopYtop_in,T111);
  lit_78 = YPsb((P)"Exit the top-level interpreter");
  T121 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T121,ENVNUL,PNUL,YPfalse);
  T120 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T120,ENVNUL,PNUL,YPfalse);
  T119 = YPsig(YPPlist(1,LITREF(lit_51)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T119,ENVNUL,PNUL,YPfalse);
  T118 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_41 = YPmet(FUNCODEREF(fun_loop_41),LITREF(lit_22),T118,ENVNUL,PNUL,YPfalse);
  T117 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T117,ENVNUL,PNUL,YPfalse);
  T116 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T116,ENVNUL,PNUL,YPfalse);
  T115 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_top_44 = YPmet(FUNCODEREF(fun_top_44),LITREF(lit_51),T115,ENVNUL,PNUL,YPfalse);
  T124 = BOUNDP(YtopYtop);
  if (T124 != YPfalse) {
    T123 = VARREF(YtopYtop);
  } else {
    T123 = YPfalse;
  }
  T125 = fun_top_44;
  T122 = CALL2(1,VARREF(YPdefine_method),T123,T125);
  VARSET(YtopYtop,T122);
  lit_79 = YPPsym((P)"save-image");
  lit_80 = YPPsym((P)"image-name");
  lit_81 = YPPsym((P)"proto/user");
  T127 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T127,ENVNUL,PNUL,YPfalse);
  T126 = YPsig(YPPlist(1,LITREF(lit_80)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YtopYsave_image = YPmet(FUNCODEREF(YtopYsave_image),LITREF(lit_79),T126,ENVNUL,PNUL,YPfalse);
  T128 = YtopYsave_image;
  VARSET(YtopYsave_image,T128);
  T129 = YPfalse;
  return T129;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_runtime;
extern MODULE_INFO module_info_read;
extern MODULE_INFO module_info_write;
extern MODULE_INFO module_info_syntax;
extern MODULE_INFO module_info_ast;
extern MODULE_INFO module_info_ast_linearize;
extern MODULE_INFO module_info_ast_eval;
extern MODULE_INFO module_info_protoSsystem;
extern MODULE_INFO module_info_protoStypes;
extern MODULE_INFO module_info_protoSmath;
extern MODULE_INFO module_info_protoScollections;
extern MODULE_INFO module_info_protoSports;
extern MODULE_INFO module_info_protoScollectionsScollection;
extern MODULE_INFO module_info_protoScollectionsSsequence;
extern MODULE_INFO module_info_protoScollectionsSassoc;
extern MODULE_INFO module_info_protoScollectionsSstring;
extern MODULE_INFO module_info_protoScollectionsSlist;
extern MODULE_INFO module_info_protoScollectionsStable;
extern MODULE_INFO module_info_protoScollectionsSrange;
extern MODULE_INFO module_info_protoScollectionsSbuffer;
extern MODULE_INFO module_info_protoScollectionsSmap;
extern MODULE_INFO module_info_protoScollectionsSstep;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {&module_info_macros},
  {&module_info_runtime},
  {&module_info_read},
  {&module_info_write},
  {&module_info_syntax},
  {&module_info_ast},
  {&module_info_ast_linearize},
  {&module_info_ast_eval},
  {&module_info_protoSsystem},
  {&module_info_protoStypes},
  {&module_info_protoSmath},
  {&module_info_protoScollections},
  {&module_info_protoSports},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"add", &module_info_protoScollectionsScollection, "add"},
  {"os-name", &module_info_protoSsystem, "os-name"},
  {"last", &module_info_protoScollectionsSsequence, "last"},
  {"type-error", &module_info_boot, "type-error"},
  {"sexpr-let->combination", &module_info_syntax, "sexpr-let->combination"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"pick", &module_info_protoScollectionsSsequence, "pick"},
  {"identity", &module_info_runtime, "identity"},
  {"$sexpr-let-tag", &module_info_syntax, "$sexpr-let-tag"},
  {"pathname-to-components", &module_info_protoSsystem, "pathname-to-components"},
  {"var-type", &module_info_macros, "var-type"},
  {"*gensym-counter*", &module_info_runtime, "*gensym-counter*"},
  {"sexpr-isa-init-values", &module_info_syntax, "sexpr-isa-init-values"},
  {"<passive-program>", &module_info_ast, "<passive-program>"},
  {"assocs-test", &module_info_protoScollectionsSassoc, "assocs-test"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"zero?", &module_info_protoSmath, "zero?"},
  {"*print-base*", &module_info_protoScollectionsSstring, "*print-base*"},
  {"fill", &module_info_protoScollectionsScollection, "fill"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"=", &module_info_protoSmath, "="},
  {"nul?", &module_info_protoSmath, "nul?"},
  {"lift!", &module_info_ast_linearize, "lift!"},
  {"<list>", &module_info_protoScollectionsSlist, "<list>"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"load-in", &module_info_ast, "load-in"},
  {"sexpr-text-of-quotation", &module_info_syntax, "sexpr-text-of-quotation"},
  {"dv", &module_info_boot, "dv"},
  {"%f=", &module_info_boot, "%f="},
  {"fin-state?", &module_info_macros, "fin-state?"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"now-elt-setter", &module_info_protoScollectionsScollection, "now-elt-setter"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"always", &module_info_runtime, "always"},
  {"uppercase?", &module_info_protoSmath, "uppercase?"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"ast-define-binding", &module_info_ast, "ast-define-binding"},
  {"unwind-protect-cleanup-thunk", &module_info_ast, "unwind-protect-cleanup-thunk"},
  {"del-key", &module_info_protoScollectionsScollection, "del-key"},
  {"%iu", &module_info_boot, "%iu"},
  {"table-shrink-threshold", &module_info_protoScollectionsStable, "table-shrink-threshold"},
  {"from", &module_info_protoScollectionsSrange, "from"},
  {"into", &module_info_protoScollectionsScollection, "into"},
  {"do3", &module_info_protoScollectionsScollection, "do3"},
  {"<locals>", &module_info_ast, "<locals>"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"<ast-function>", &module_info_ast, "<ast-function>"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"sexpr-make-application", &module_info_syntax, "sexpr-make-application"},
  {"binding-name", &module_info_ast, "binding-name"},
  {"signature-specs-setter", &module_info_ast, "signature-specs-setter"},
  {"use", &module_info_boot, "use"},
  {"%lu", &module_info_boot, "%lu"},
  {"to-str", &module_info_protoSmath, "to-str"},
  {"round/", &module_info_protoSmath, "round/"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"reduce", &module_info_protoScollectionsScollection, "reduce"},
  {"type-object", &module_info_boot, "type-object"},
  {"lsh", &module_info_protoSmath, "lsh"},
  {"$sexpr-unwind-protect-tag", &module_info_syntax, "$sexpr-unwind-protect-tag"},
  {"*register-passive?*", &module_info_ast_linearize, "*register-passive?*"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"ini-state", &module_info_macros, "ini-state"},
  {"<class>", &module_info_boot, "<class>"},
  {"len", &module_info_protoScollectionsScollection, "len"},
  {"dp", &module_info_boot, "dp"},
  {"gensym", &module_info_macros, "gensym"},
  {"binding-index-setter", &module_info_ast, "binding-index-setter"},
  {"<output-port>", &module_info_protoSports, "<output-port>"},
  {"from-to-by", &module_info_protoScollectionsSrange, "from-to-by"},
  {"assignment-form", &module_info_ast, "assignment-form"},
  {"read", &module_info_runtime, "read"},
  {"<global-reference>", &module_info_ast, "<global-reference>"},
  {"ddv", &module_info_macros, "ddv"},
  {"logior", &module_info_protoSmath, "logior"},
  {"register-allocate!", &module_info_ast_linearize, "register-allocate!"},
  {"logxor", &module_info_protoSmath, "logxor"},
  {"format", &module_info_runtime, "format"},
  {"%pair", &module_info_boot, "%pair"},
  {"and", &module_info_macros, "and"},
  {"do-static-global-bindings", &module_info_ast, "do-static-global-bindings"},
  {"%i-", &module_info_boot, "%i-"},
  {"closure-creation-free", &module_info_ast_linearize, "closure-creation-free"},
  {"sub", &module_info_protoScollectionsSsequence, "sub"},
  {"sexpr-syntax-if-pattern", &module_info_syntax, "sexpr-syntax-if-pattern"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"sexpr-definition-variable", &module_info_syntax, "sexpr-definition-variable"},
  {"<str-tab>", &module_info_protoScollectionsStable, "<str-tab>"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"sexpr-if-else", &module_info_syntax, "sexpr-if-else"},
  {"module-name-to-relpath", &module_info_ast, "module-name-to-relpath"},
  {"read-from-string", &module_info_read, "read-from-string"},
  {"hierarchical-components", &module_info_protoSsystem, "hierarchical-components"},
  {"<type>", &module_info_boot, "<type>"},
  {"sexpr-slot-object", &module_info_syntax, "sexpr-slot-object"},
  {"closure-creation-index", &module_info_ast_linearize, "closure-creation-index"},
  {"neg", &module_info_protoSmath, "neg"},
  {"signature-names-setter", &module_info_ast, "signature-names-setter"},
  {"monitor-info", &module_info_ast, "monitor-info"},
  {"even?", &module_info_protoSmath, "even?"},
  {"<=", &module_info_protoSmath, "<="},
  {"parent-directory", &module_info_protoSsystem, "parent-directory"},
  {"contagious-type", &module_info_protoSmath, "contagious-type"},
  {"table-growth-factor-setter", &module_info_protoScollectionsStable, "table-growth-factor-setter"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"locative-value", &module_info_runtime, "locative-value"},
  {"<alternative>", &module_info_ast, "<alternative>"},
  {"module-binding", &module_info_ast, "module-binding"},
  {"program-register", &module_info_ast, "program-register"},
  {"describe-handler", &module_info_runtime, "describe-handler"},
  {"del-keys", &module_info_protoScollectionsScollection, "del-keys"},
  {"objectify", &module_info_ast, "objectify"},
  {"remainder", &module_info_protoSmath, "remainder"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"sexpr-loc-bound-names", &module_info_syntax, "sexpr-loc-bound-names"},
  {"<bind-exit>", &module_info_ast, "<bind-exit>"},
  {"env-object-name", &module_info_ast, "env-object-name"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"sexpr-definition-value", &module_info_syntax, "sexpr-definition-value"},
  {"monitor-type", &module_info_ast, "monitor-type"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"$sexpr-if-tag", &module_info_syntax, "$sexpr-if-tag"},
  {"function-free-setter", &module_info_ast, "function-free-setter"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"binding-dynamic-extent?", &module_info_ast, "binding-dynamic-extent?"},
  {"sexpr-function-definition-value", &module_info_syntax, "sexpr-function-definition-value"},
  {"char-ready?", &module_info_protoSports, "char-ready?"},
  {"as-uppercase", &module_info_protoSmath, "as-uppercase"},
  {"assqn", &module_info_protoScollectionsSlist, "assqn"},
  {"rep", &module_info_boot, "rep"},
  {"*max-print-length*", &module_info_write, "*max-print-length*"},
  {"to-digit", &module_info_protoSmath, "to-digit"},
  {"<file-output-port>", &module_info_protoSports, "<file-output-port>"},
  {"function-data-refs", &module_info_ast, "function-data-refs"},
  {"application-known?-setter", &module_info_ast, "application-known?-setter"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"id-hash", &module_info_protoScollectionsStable, "id-hash"},
  {"binding-native-to?", &module_info_ast, "binding-native-to?"},
  {"<ast-primitive-definition>", &module_info_ast, "<ast-primitive-definition>"},
  {"<definition>", &module_info_ast, "<definition>"},
  {"sexpr-unwind-protect-protected-form", &module_info_syntax, "sexpr-unwind-protect-protected-form"},
  {"program-register-setter", &module_info_ast, "program-register-setter"},
  {"create-directory", &module_info_protoSsystem, "create-directory"},
  {"%c<", &module_info_boot, "%c<"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"t<", &module_info_protoStypes, "t<"},
  {"assocs-test-setter", &module_info_protoScollectionsSassoc, "assocs-test-setter"},
  {"program-definitions", &module_info_ast_linearize, "program-definitions"},
  {"<binding>", &module_info_ast, "<binding>"},
  {"fix-let-bindings-setter", &module_info_ast, "fix-let-bindings-setter"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"function-bindings", &module_info_ast, "function-bindings"},
  {"inc", &module_info_macros, "inc"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"sexpr-loc-bound-signatures", &module_info_syntax, "sexpr-loc-bound-signatures"},
  {"%c=", &module_info_boot, "%c="},
  {"$sexpr-monitor-tag", &module_info_syntax, "$sexpr-monitor-tag"},
  {"fabs", &module_info_protoSmath, "fabs"},
  {"<bot>", &module_info_protoSmath, "<bot>"},
  {"address-of", &module_info_protoSmath, "address-of"},
  {"collect-temporaries!", &module_info_ast_linearize, "collect-temporaries!"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"flo-bits", &module_info_protoSmath, "flo-bits"},
  {"round", &module_info_protoSmath, "round"},
  {"lab", &module_info_boot, "lab"},
  {"exported", &module_info_macros, "exported"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"t+", &module_info_protoStypes, "t+"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"false-or", &module_info_protoStypes, "false-or"},
  {"locals-body-setter", &module_info_ast, "locals-body-setter"},
  {"cat2", &module_info_protoScollectionsSsequence, "cat2"},
  {"peek-char", &module_info_protoSports, "peek-char"},
  {"add-src-path", &module_info_protoSsystem, "add-src-path"},
  {"sexpr-define-class?", &module_info_syntax, "sexpr-define-class?"},
  {"eval", &module_info_syntax, "eval"},
  {"program-form", &module_info_ast_linearize, "program-form"},
  {"<str>", &module_info_boot, "<str>"},
  {"truncate/", &module_info_protoSmath, "truncate/"},
  {"dss", &module_info_boot, "dss"},
  {"sig", &module_info_runtime, "sig"},
  {"isa", &module_info_boot, "isa"},
  {"%binding-value", &module_info_ast_eval, "%binding-value"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"c-filename", &module_info_protoSsystem, "c-filename"},
  {"export", &module_info_boot, "export"},
  {"table-protocol", &module_info_protoScollectionsStable, "table-protocol"},
  {"function-signature-setter", &module_info_ast, "function-signature-setter"},
  {"%iv", &module_info_boot, "%iv"},
  {"as-log", &module_info_protoSmath, "as-log"},
  {"call-with-output-file", &module_info_protoSports, "call-with-output-file"},
  {"binding-dynamic-extent?-setter", &module_info_ast, "binding-dynamic-extent?-setter"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"$char-long-names", &module_info_read, "$char-long-names"},
  {"+", &module_info_protoSmath, "+"},
  {"@==", &module_info_boot, "@=="},
  {"assignment-reference", &module_info_ast, "assignment-reference"},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"pos", &module_info_protoScollectionsSsequence, "pos"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"function-registers-setter", &module_info_ast, "function-registers-setter"},
  {"sexpr-bind-pattern-variables", &module_info_syntax, "sexpr-bind-pattern-variables"},
  {"find-environment-module", &module_info_ast, "find-environment-module"},
  {"binding-kind", &module_info_ast, "binding-kind"},
  {"init-ast", &module_info_ast, "init-ast"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"<box-creation>", &module_info_ast_linearize, "<box-creation>"},
  {"t=", &module_info_protoStypes, "t="},
  {"binding-value", &module_info_ast, "binding-value"},
  {"flatten-seqs", &module_info_ast_linearize, "flatten-seqs"},
  {"fix-let-bindings", &module_info_ast, "fix-let-bindings"},
  {"do", &module_info_protoScollectionsScollection, "do"},
  {"function-body-setter", &module_info_ast, "function-body-setter"},
  {">", &module_info_protoSmath, ">"},
  {"error", &module_info_boot, "error"},
  {"collect-registers!", &module_info_ast_linearize, "collect-registers!"},
  {"binding-mutable?", &module_info_ast, "binding-mutable?"},
  {"max", &module_info_protoSmath, "max"},
  {"assignment-form-setter", &module_info_ast, "assignment-form-setter"},
  {"function-signature", &module_info_ast, "function-signature"},
  {"call-with-input-file", &module_info_protoSports, "call-with-input-file"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"<local-binding>", &module_info_ast, "<local-binding>"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"<top-level-form>", &module_info_ast_linearize, "<top-level-form>"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"<predefined-application>", &module_info_ast, "<predefined-application>"},
  {"%slen", &module_info_boot, "%slen"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"<met>", &module_info_boot, "<met>"},
  {"sexpr-if-test", &module_info_syntax, "sexpr-if-test"},
  {"set-module-environments", &module_info_ast, "set-module-environments"},
  {"fab", &module_info_protoScollectionsScollection, "fab"},
  {"sexpr-syntax-if-then", &module_info_syntax, "sexpr-syntax-if-then"},
  {"$sexpr-quote-tag", &module_info_syntax, "$sexpr-quote-tag"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"do-key-vals", &module_info_protoScollectionsSsequence, "do-key-vals"},
  {"sexpr-operator", &module_info_syntax, "sexpr-operator"},
  {"len/fill-setter", &module_info_protoScollectionsSbuffer, "len/fill-setter"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"signature-names", &module_info_ast, "signature-names"},
  {"signature-value", &module_info_ast, "signature-value"},
  {"range-check?", &module_info_protoScollectionsSsequence, "range-check?"},
  {"locals-body", &module_info_ast, "locals-body"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"all2?", &module_info_protoScollectionsScollection, "all2?"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"$sexpr-define-tag", &module_info_syntax, "$sexpr-define-tag"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"sexpr-slot-variable", &module_info_syntax, "sexpr-slot-variable"},
  {"sexpr-operands", &module_info_syntax, "sexpr-operands"},
  {"cat!", &module_info_protoScollectionsSsequence, "cat!"},
  {"port-index", &module_info_protoSports, "port-index"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"function-self-recursive?-setter", &module_info_ast, "function-self-recursive?-setter"},
  {"quote", &module_info_boot, "quote"},
  {"pair", &module_info_macros, "pair"},
  {"function-body", &module_info_ast, "function-body"},
  {"sexpr-function-definition-variable", &module_info_syntax, "sexpr-function-definition-variable"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"binding-global-box", &module_info_ast, "binding-global-box"},
  {"head", &module_info_boot, "head"},
  {"module-syntax-environment", &module_info_ast, "module-syntax-environment"},
  {"from-above", &module_info_protoScollectionsSrange, "from-above"},
  {"read-char", &module_info_protoSports, "read-char"},
  {"neg?", &module_info_protoSmath, "neg?"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"%binding-bound?", &module_info_ast_eval, "%binding-bound?"},
  {"sexpr-method-body", &module_info_syntax, "sexpr-method-body"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"$sexpr-syntax-if-tag", &module_info_syntax, "$sexpr-syntax-if-tag"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"label-components", &module_info_protoSsystem, "label-components"},
  {"<runtime-assignment>", &module_info_ast, "<runtime-assignment>"},
  {"when", &module_info_macros, "when"},
  {"binding-value-setter", &module_info_ast, "binding-value-setter"},
  {"<programs>", &module_info_ast, "<programs>"},
  {"<program>", &module_info_ast, "<program>"},
  {"find-key", &module_info_protoScollectionsScollection, "find-key"},
  {"nul", &module_info_boot, "nul"},
  {"add-tmp-path", &module_info_protoSsystem, "add-tmp-path"},
  {"apply", &module_info_macros, "apply"},
  {"sexpr-assignment-value", &module_info_syntax, "sexpr-assignment-value"},
  {"object-class", &module_info_boot, "object-class"},
  {"*proto-extension*", &module_info_protoSsystem, "*proto-extension*"},
  {"function-registers", &module_info_ast, "function-registers"},
  {"~==", &module_info_protoSmath, "~=="},
  {"%i<", &module_info_boot, "%i<"},
  {"<module-binding>", &module_info_ast, "<module-binding>"},
  {"%sb", &module_info_boot, "%sb"},
  {"<unwind-protect>", &module_info_ast, "<unwind-protect>"},
  {"%str", &module_info_boot, "%str"},
  {"%%sym", &module_info_boot, "%%sym"},
  {"<string-output-port>", &module_info_protoSports, "<string-output-port>"},
  {"<compile-time>", &module_info_ast, "<compile-time>"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"pop-last!", &module_info_protoScollectionsSbuffer, "pop-last!"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"$sexpr-method-tag", &module_info_syntax, "$sexpr-method-tag"},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_syntax, "sexpr-unwind-protect-cleanup-forms"},
  {"set", &module_info_boot, "set"},
  {"open-output-file", &module_info_protoSports, "open-output-file"},
  {"as-lowercase", &module_info_protoSmath, "as-lowercase"},
  {"alternative-alternant", &module_info_ast, "alternative-alternant"},
  {"%i&", &module_info_boot, "%i&"},
  {"<restart>", &module_info_runtime, "<restart>"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"table-shrink-threshold-setter", &module_info_protoScollectionsStable, "table-shrink-threshold-setter"},
  {"eof-object?", &module_info_protoSmath, "eof-object?"},
  {"%raw", &module_info_boot, "%raw"},
  {"sexpr-loc-bound-bodies", &module_info_syntax, "sexpr-loc-bound-bodies"},
  {"call-with-string-output-port", &module_info_protoSports, "call-with-string-output-port"},
  {"case", &module_info_macros, "case"},
  {"remove-modules-by-name!", &module_info_ast, "remove-modules-by-name!"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"modulo", &module_info_protoSmath, "modulo"},
  {"swapf", &module_info_macros, "swapf"},
  {"opf", &module_info_macros, "opf"},
  {"%untag", &module_info_boot, "%untag"},
  {"module-target-environment", &module_info_ast, "module-target-environment"},
  {"ct", &module_info_boot, "ct"},
  {"<file-input-port>", &module_info_protoSports, "<file-input-port>"},
  {"<string-input-port>", &module_info_protoSports, "<string-input-port>"},
  {"napply", &module_info_macros, "napply"},
  {"components-parent-directory", &module_info_protoSsystem, "components-parent-directory"},
  {"range-check", &module_info_protoScollectionsSsequence, "range-check"},
  {"fix-let-body-setter", &module_info_ast, "fix-let-body-setter"},
  {"closurize-main!", &module_info_ast_linearize, "closurize-main!"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"%fb", &module_info_boot, "%fb"},
  {"mem?", &module_info_protoScollectionsScollection, "mem?"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"%snul", &module_info_boot, "%snul"},
  {"module-exports", &module_info_ast, "module-exports"},
  {"add!", &module_info_protoScollectionsSsequence, "add!"},
  {"sexpr-unquote?", &module_info_syntax, "sexpr-unquote?"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"<real-reference>", &module_info_ast, "<real-reference>"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"$sexpr-iterate-tag", &module_info_syntax, "$sexpr-iterate-tag"},
  {"<fix-let>", &module_info_ast, "<fix-let>"},
  {"%cb", &module_info_boot, "%cb"},
  {"sexpr-make-macro-function", &module_info_syntax, "sexpr-make-macro-function"},
  {"fab-map", &module_info_protoScollectionsSmap, "fab-map"},
  {"%i+", &module_info_boot, "%i+"},
  {"collect", &module_info_macros, "collect"},
  {"constant-index", &module_info_ast, "constant-index"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"module-name", &module_info_ast, "module-name"},
  {"$sexpr-define-generic-tag", &module_info_syntax, "$sexpr-define-generic-tag"},
  {"*", &module_info_protoSmath, "*"},
  {"sexpr-block-name", &module_info_syntax, "sexpr-block-name"},
  {"dc", &module_info_boot, "dc"},
  {"odd?", &module_info_protoSmath, "odd?"},
  {"reference-self?", &module_info_ast_linearize, "reference-self?"},
  {"function-self-recursive?", &module_info_ast, "function-self-recursive?"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"monitor-handler", &module_info_ast, "monitor-handler"},
  {"open-input-file", &module_info_protoSports, "open-input-file"},
  {"use/export", &module_info_boot, "use/export"},
  {"file-type", &module_info_protoSsystem, "file-type"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"slot", &module_info_boot, "slot"},
  {"fix-let-arguments", &module_info_ast, "fix-let-arguments"},
  {"signature-specs", &module_info_ast, "signature-specs"},
  {"<ast-macro-definition>", &module_info_ast, "<ast-macro-definition>"},
  {"fin", &module_info_boot, "fin"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"*obj-extension*", &module_info_protoSsystem, "*obj-extension*"},
  {"environment-uses-modules", &module_info_ast, "environment-uses-modules"},
  {"constant-index-setter", &module_info_ast, "constant-index-setter"},
  {"if", &module_info_boot, "if"},
  {"insert-box!", &module_info_ast_linearize, "insert-box!"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"do-module-loader-modules", &module_info_ast, "do-module-loader-modules"},
  {"probe-module", &module_info_ast, "probe-module"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"cat", &module_info_macros, "cat"},
  {"%i!", &module_info_boot, "%i!"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"proto-filename", &module_info_protoSsystem, "proto-filename"},
  {"-", &module_info_protoSmath, "-"},
  {"form-quotations", &module_info_ast_linearize, "form-quotations"},
  {"port-contents", &module_info_protoSports, "port-contents"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"init-environment-for-eval", &module_info_ast, "init-environment-for-eval"},
  {"<local-reference>", &module_info_ast, "<local-reference>"},
  {"%f*", &module_info_boot, "%f*"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"all?", &module_info_protoScollectionsScollection, "all?"},
  {"invoke-handler-interactively", &module_info_runtime, "invoke-handler-interactively"},
  {"tail", &module_info_boot, "tail"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"<monitor>", &module_info_ast, "<monitor>"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"extract-things!", &module_info_ast_linearize, "extract-things!"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"sexpr-isa-parent", &module_info_syntax, "sexpr-isa-parent"},
  {"sexpr-syntax-if-else", &module_info_syntax, "sexpr-syntax-if-else"},
  {"<tab>", &module_info_protoScollectionsStable, "<tab>"},
  {"<bound?>", &module_info_ast, "<bound?>"},
  {"ascii-limit", &module_info_protoScollectionsSstring, "ascii-limit"},
  {"binding-global-box-setter", &module_info_ast, "binding-global-box-setter"},
  {"as", &module_info_protoStypes, "as"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"push-last!", &module_info_protoScollectionsSbuffer, "push-last!"},
  {"from-to", &module_info_protoScollectionsSrange, "from-to"},
  {"%f+", &module_info_boot, "%f+"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"lst", &module_info_boot, "lst"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"range-error", &module_info_protoScollectionsSsequence, "range-error"},
  {"sexpr-slot-init", &module_info_syntax, "sexpr-slot-init"},
  {"alphabetic?", &module_info_protoSmath, "alphabetic?"},
  {"%vec", &module_info_boot, "%vec"},
  {"<regular-application>", &module_info_ast, "<regular-application>"},
  {"<col>", &module_info_boot, "<col>"},
  {"<ast-generic>", &module_info_ast, "<ast-generic>"},
  {"vals-to-str", &module_info_protoScollectionsSsequence, "vals-to-str"},
  {">=", &module_info_protoSmath, ">="},
  {"table-growth-threshold", &module_info_protoScollectionsStable, "table-growth-threshold"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"logand", &module_info_protoSmath, "logand"},
  {"<file-port>", &module_info_protoSports, "<file-port>"},
  {"$sexpr-quasiquote-tag", &module_info_syntax, "$sexpr-quasiquote-tag"},
  {"binding-dotted?", &module_info_ast, "binding-dotted?"},
  {"sexpr-forward-primitive?", &module_info_syntax, "sexpr-forward-primitive?"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"$sexpr-begin-tag", &module_info_syntax, "$sexpr-begin-tag"},
  {"default", &module_info_protoScollectionsScollection, "default"},
  {"fix-let-body", &module_info_ast, "fix-let-body"},
  {"map-keyed", &module_info_protoScollectionsScollection, "map-keyed"},
  {"truncate", &module_info_protoSmath, "truncate"},
  {"unconstrained-type?", &module_info_ast_linearize, "unconstrained-type?"},
  {"dg", &module_info_boot, "dg"},
  {"<ast-signature>", &module_info_ast, "<ast-signature>"},
  {"eof-object", &module_info_protoSmath, "eof-object"},
  {"for", &module_info_macros, "for"},
  {"analyze-dynamic-extent", &module_info_ast_linearize, "analyze-dynamic-extent"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"out", &module_info_protoSports, "out"},
  {"<error>", &module_info_runtime, "<error>"},
  {"form-program", &module_info_ast_linearize, "form-program"},
  {"compose", &module_info_runtime, "compose"},
  {"<local-assignment>", &module_info_ast, "<local-assignment>"},
  {"sexpr-make-getter", &module_info_syntax, "sexpr-make-getter"},
  {"<static-global-environment>", &module_info_ast, "<static-global-environment>"},
  {"sexpr-sequence->begin", &module_info_syntax, "sexpr-sequence->begin"},
  {"environment-module", &module_info_ast, "environment-module"},
  {"$sexpr-define-class-tag", &module_info_syntax, "$sexpr-define-class-tag"},
  {"empty", &module_info_protoScollectionsScollection, "empty"},
  {"try", &module_info_boot, "try"},
  {"list", &module_info_protoScollectionsSlist, "list"},
  {"function-source-setter", &module_info_ast, "function-source-setter"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"<immediate-constant>", &module_info_ast, "<immediate-constant>"},
  {"fix-let-arguments-setter", &module_info_ast, "fix-let-arguments-setter"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"sexpr-make-anonymous-method", &module_info_syntax, "sexpr-make-anonymous-method"},
  {"function-debug-name-setter", &module_info_ast, "function-debug-name-setter"},
  {"call-with-string-input-port", &module_info_protoSports, "call-with-string-input-port"},
  {"dec", &module_info_macros, "dec"},
  {"binding-dotted?-setter", &module_info_ast, "binding-dotted?-setter"},
  {"buf", &module_info_protoScollectionsSbuffer, "buf"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"<computed-program>", &module_info_ast, "<computed-program>"},
  {"let", &module_info_boot, "let"},
  {"*max-print-depth*", &module_info_write, "*max-print-depth*"},
  {"<fab-list>", &module_info_ast, "<fab-list>"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"keys", &module_info_protoScollectionsScollection, "keys"},
  {"file-mtime", &module_info_protoSsystem, "file-mtime"},
  {"del-dups", &module_info_protoScollectionsSsequence, "del-dups"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"sexpr-loc-raw-body", &module_info_syntax, "sexpr-loc-raw-body"},
  {"num-to-str", &module_info_protoSmath, "num-to-str"},
  {"$sexpr-locals-tag", &module_info_syntax, "$sexpr-locals-tag"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"add-build-path", &module_info_protoSsystem, "add-build-path"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"ds", &module_info_boot, "ds"},
  {"def-list", &module_info_ast, "def-list"},
  {"$sexpr-bind-exit-tag", &module_info_syntax, "$sexpr-bind-exit-tag"},
  {"def-programs", &module_info_ast, "def-programs"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"rev", &module_info_protoScollectionsSsequence, "rev"},
  {"sexpr-expand-backquote", &module_info_syntax, "sexpr-expand-backquote"},
  {"from-below-by", &module_info_protoScollectionsSrange, "from-below-by"},
  {"close-output-port", &module_info_protoSports, "close-output-port"},
  {"%i=", &module_info_boot, "%i="},
  {"analyze-calls", &module_info_ast_linearize, "analyze-calls"},
  {"dlet", &module_info_macros, "dlet"},
  {"%isa", &module_info_boot, "%isa"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"write-to-string", &module_info_write, "write-to-string"},
  {"<free-environment>", &module_info_ast, "<free-environment>"},
  {"%i?", &module_info_boot, "%i?"},
  {"signature-arity-setter", &module_info_ast, "signature-arity-setter"},
  {"build-condition-interactively", &module_info_runtime, "build-condition-interactively"},
  {"sexpr-assignment-variable", &module_info_syntax, "sexpr-assignment-variable"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"sexpr-define-class-parents", &module_info_syntax, "sexpr-define-class-parents"},
  {"function-value", &module_info_ast, "function-value"},
  {"@+", &module_info_boot, "@+"},
  {"case-insensitive-string-equal", &module_info_protoScollectionsStable, "case-insensitive-string-equal"},
  {"floor", &module_info_protoSmath, "floor"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"%fu", &module_info_boot, "%fu"},
  {"next-method", &module_info_macros, "next-method"},
  {"objectify-quotation", &module_info_ast, "objectify-quotation"},
  {"reference-binding", &module_info_ast, "reference-binding"},
  {"application-tail?", &module_info_ast, "application-tail?"},
  {"first-then", &module_info_protoScollectionsSstep, "first-then"},
  {"function-temporaries", &module_info_ast, "function-temporaries"},
  {"do-keyed", &module_info_protoScollectionsScollection, "do-keyed"},
  {"assignment-binding", &module_info_ast, "assignment-binding"},
  {"program-type-setter", &module_info_ast, "program-type-setter"},
  {"df", &module_info_boot, "df"},
  {"program-type", &module_info_ast, "program-type"},
  {"write-string", &module_info_protoSports, "write-string"},
  {"<box-write>", &module_info_ast_linearize, "<box-write>"},
  {"port-line", &module_info_protoSports, "port-line"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"in", &module_info_protoSports, "in"},
  {"class-name", &module_info_boot, "class-name"},
  {"reference-frame-number", &module_info_ast, "reference-frame-number"},
  {"%bb", &module_info_boot, "%bb"},
  {"del", &module_info_protoScollectionsSsequence, "del"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"$sexpr-set-tag", &module_info_syntax, "$sexpr-set-tag"},
  {"recurring-write", &module_info_write, "recurring-write"},
  {"port-index-setter", &module_info_protoSports, "port-index-setter"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"<buf>", &module_info_protoScollectionsSbuffer, "<buf>"},
  {"locals-bindings-setter", &module_info_ast, "locals-bindings-setter"},
  {"gather-temporaries!", &module_info_ast_linearize, "gather-temporaries!"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"components-basename", &module_info_protoSsystem, "components-basename"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"list-handlers", &module_info_runtime, "list-handlers"},
  {"<module-binding-reference>", &module_info_ast, "<module-binding-reference>"},
  {"<num>", &module_info_boot, "<num>"},
  {"<int>", &module_info_boot, "<int>"},
  {"nil", &module_info_boot, "nil"},
  {"unchecked-runtime-environment", &module_info_ast, "unchecked-runtime-environment"},
  {"str-to-num", &module_info_protoScollectionsSstring, "str-to-num"},
  {"<renamed-local-binding>", &module_info_ast_linearize, "<renamed-local-binding>"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"%i^", &module_info_boot, "%i^"},
  {"==", &module_info_macros, "=="},
  {"sexpr-block-body", &module_info_syntax, "sexpr-block-body"},
  {"binding-type", &module_info_ast, "binding-type"},
  {"box-form", &module_info_ast_linearize, "box-form"},
  {"<constant>", &module_info_ast, "<constant>"},
  {"writeln", &module_info_write, "writeln"},
  {"$sexpr-macro-expand-tag", &module_info_syntax, "$sexpr-macro-expand-tag"},
  {"constant-value", &module_info_ast, "constant-value"},
  {"ast-evaluate", &module_info_ast, "ast-evaluate"},
  {"<module>", &module_info_ast, "<module>"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"sexpr-isa-slot-inits", &module_info_syntax, "sexpr-isa-slot-inits"},
  {"binding-type-setter", &module_info_ast, "binding-type-setter"},
  {"file-exists?", &module_info_protoSsystem, "file-exists?"},
  {"any2?", &module_info_protoScollectionsScollection, "any2?"},
  {"reference-frame-offset", &module_info_ast, "reference-frame-offset"},
  {"<step>", &module_info_protoScollectionsSstep, "<step>"},
  {"signature-bindings", &module_info_ast, "signature-bindings"},
  {"%f/", &module_info_boot, "%f/"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"lognot", &module_info_protoSmath, "lognot"},
  {"%su", &module_info_boot, "%su"},
  {"binding-locative", &module_info_ast, "binding-locative"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"%ft", &module_info_boot, "%ft"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"reduce+", &module_info_protoScollectionsScollection, "reduce+"},
  {"sexpr-syntax-definition-variable", &module_info_syntax, "sexpr-syntax-definition-variable"},
  {"sexpr-signature-parameters", &module_info_syntax, "sexpr-signature-parameters"},
  {"binding-inferred-type", &module_info_ast, "binding-inferred-type"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"sexpr-function-signature", &module_info_syntax, "sexpr-function-signature"},
  {"%cu", &module_info_boot, "%cu"},
  {"low-elt-setter", &module_info_protoScollectionsScollection, "low-elt-setter"},
  {"empty?", &module_info_macros, "empty?"},
  {"<port>", &module_info_protoSports, "<port>"},
  {"%slot", &module_info_boot, "%slot"},
  {"build-condition-for-handler-interactively", &module_info_runtime, "build-condition-for-handler-interactively"},
  {"$sexpr-define-method-tag", &module_info_syntax, "$sexpr-define-method-tag"},
  {"<arguments>", &module_info_ast, "<arguments>"},
  {"current-gc-state", &module_info_protoScollectionsStable, "current-gc-state"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"objectify-signature", &module_info_ast, "objectify-signature"},
  {"sexpr-signature-value", &module_info_syntax, "sexpr-signature-value"},
  {"<box-read>", &module_info_ast_linearize, "<box-read>"},
  {"sexpr-make-begin", &module_info_syntax, "sexpr-make-begin"},
  {"os-binding-value", &module_info_protoSsystem, "os-binding-value"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"$sexpr-define-function-tag", &module_info_syntax, "$sexpr-define-function-tag"},
  {"ash", &module_info_protoSmath, "ash"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"global-box-value", &module_info_ast, "global-box-value"},
  {"signature-bindings-setter", &module_info_ast, "signature-bindings-setter"},
  {"bound?", &module_info_boot, "bound?"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"<application>", &module_info_ast, "<application>"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"*c-extension*", &module_info_protoSsystem, "*c-extension*"},
  {"map2", &module_info_protoScollectionsScollection, "map2"},
  {"<log>", &module_info_boot, "<log>"},
  {"find-binding", &module_info_ast, "find-binding"},
  {"<free-reference>", &module_info_ast_linearize, "<free-reference>"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"case-insensitive-string-hash", &module_info_protoScollectionsStable, "case-insensitive-string-hash"},
  {"<assignment>", &module_info_ast, "<assignment>"},
  {"vec", &module_info_boot, "vec"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"pos?", &module_info_protoSmath, "pos?"},
  {"$sexpr-define-syntax-tag", &module_info_syntax, "$sexpr-define-syntax-tag"},
  {"<map>", &module_info_protoScollectionsSmap, "<map>"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"sexpr-make-setter", &module_info_syntax, "sexpr-make-setter"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"*exe-extension*", &module_info_protoSsystem, "*exe-extension*"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"lowercase?", &module_info_protoSmath, "lowercase?"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"function-index", &module_info_ast, "function-index"},
  {"*proto-root*", &module_info_protoSsystem, "*proto-root*"},
  {"char->ascii", &module_info_protoSmath, "char->ascii"},
  {"<reference>", &module_info_ast, "<reference>"},
  {"not", &module_info_boot, "not"},
  {"any?", &module_info_protoScollectionsScollection, "any?"},
  {"function-binding", &module_info_ast, "function-binding"},
  {"binding-inferred-type-setter", &module_info_ast, "binding-inferred-type-setter"},
  {"sexpr-unquote-splicing?", &module_info_syntax, "sexpr-unquote-splicing?"},
  {"<assocs>", &module_info_protoScollectionsSassoc, "<assocs>"},
  {"%selt", &module_info_boot, "%selt"},
  {"$proto-boot-module-name", &module_info_ast, "$proto-boot-module-name"},
  {"program-quotations", &module_info_ast_linearize, "program-quotations"},
  {"@<", &module_info_boot, "@<"},
  {"format-to-string", &module_info_runtime, "format-to-string"},
  {"/", &module_info_protoSmath, "/"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"curry", &module_info_runtime, "curry"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"function-temporaries-setter", &module_info_ast, "function-temporaries-setter"},
  {"ast-contains-fun?", &module_info_ast_linearize, "ast-contains-fun?"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"<any>", &module_info_boot, "<any>"},
  {"<range>", &module_info_protoScollectionsSrange, "<range>"},
  {"fix-let-types", &module_info_ast, "fix-let-types"},
  {"function-debug-name", &module_info_ast, "function-debug-name"},
  {"dm", &module_info_boot, "dm"},
  {"force-output", &module_info_protoSports, "force-output"},
  {"sexpr-monitor-expand", &module_info_syntax, "sexpr-monitor-expand"},
  {"<ast-method>", &module_info_ast, "<ast-method>"},
  {"alternative-condition", &module_info_ast, "alternative-condition"},
  {"<module-loader>", &module_info_ast, "<module-loader>"},
  {"low-elt", &module_info_protoScollectionsScollection, "low-elt"},
  {"components-to-pathname", &module_info_protoSsystem, "components-to-pathname"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"application-arguments", &module_info_ast, "application-arguments"},
  {"form-definitions", &module_info_ast_linearize, "form-definitions"},
  {"exe-filename", &module_info_protoSsystem, "exe-filename"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"type-class", &module_info_boot, "type-class"},
  {"%im", &module_info_boot, "%im"},
  {"str", &module_info_protoScollectionsSstring, "str"},
  {"%it/", &module_info_boot, "%it/"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"numeric?", &module_info_protoSmath, "numeric?"},
  {"<union>", &module_info_boot, "<union>"},
  {"floor/", &module_info_protoSmath, "floor/"},
  {"select", &module_info_macros, "select"},
  {"<raw-constant>", &module_info_ast, "<raw-constant>"},
  {"seq", &module_info_boot, "seq"},
  {"locals-bindings", &module_info_ast, "locals-bindings"},
  {"binding-info", &module_info_ast, "binding-info"},
  {"sexpr-function-body", &module_info_syntax, "sexpr-function-body"},
  {"free-implemented-foreign-bindings", &module_info_ast, "free-implemented-foreign-bindings"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"mif", &module_info_boot, "mif"},
  {"<", &module_info_protoSmath, "<"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"sexpr-variable-type", &module_info_syntax, "sexpr-variable-type"},
  {"len-setter", &module_info_protoScollectionsSbuffer, "len-setter"},
  {"compile-time-program", &module_info_ast, "compile-time-program"},
  {"sexpr-variable-name", &module_info_syntax, "sexpr-variable-name"},
  {"application-binding", &module_info_ast, "application-binding"},
  {"3rd", &module_info_protoScollectionsSsequence, "3rd"},
  {"signature-value-setter", &module_info_ast, "signature-value-setter"},
  {"from-below", &module_info_protoScollectionsSsequence, "from-below"},
  {"<sequential>", &module_info_ast, "<sequential>"},
  {"bound?-reference", &module_info_ast, "bound?-reference"},
  {"sexpr-make-setter-name", &module_info_syntax, "sexpr-make-setter-name"},
  {"table-growth-threshold-setter", &module_info_protoScollectionsStable, "table-growth-threshold-setter"},
  {"table-growth-factor", &module_info_protoScollectionsStable, "table-growth-factor"},
  {"sequentialize", &module_info_ast, "sequentialize"},
  {"<input-port>", &module_info_protoSports, "<input-port>"},
  {"map", &module_info_macros, "map"},
  {"fun", &module_info_boot, "fun"},
  {"sexpr-variable?", &module_info_syntax, "sexpr-variable?"},
  {"%i*", &module_info_boot, "%i*"},
  {"sexpr-isa-init-slots", &module_info_syntax, "sexpr-isa-init-slots"},
  {"signature-nary?", &module_info_ast, "signature-nary?"},
  {"*path-separator*", &module_info_protoSsystem, "*path-separator*"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"%f<", &module_info_boot, "%f<"},
  {"collected", &module_info_macros, "collected"},
  {"do-named-static-global-bindings", &module_info_ast, "do-named-static-global-bindings"},
  {"ascii-whitespaces", &module_info_protoScollectionsSstring, "ascii-whitespaces"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"function-source", &module_info_ast, "function-source"},
  {"%process-module", &module_info_boot, "%process-module"},
  {"global-box-value-setter", &module_info_ast, "global-box-value-setter"},
  {"function-index-setter", &module_info_ast, "function-index-setter"},
  {"$proto-runtime-module-name", &module_info_ast, "$proto-runtime-module-name"},
  {"push", &module_info_protoScollectionsSlist, "push"},
  {"pop", &module_info_protoScollectionsSlist, "pop"},
  {"signature-nary?-setter", &module_info_ast, "signature-nary?-setter"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"<global-box>", &module_info_ast, "<global-box>"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"rev!", &module_info_macros, "rev!"},
  {"locals-functions-setter", &module_info_ast, "locals-functions-setter"},
  {"components-last", &module_info_protoSsystem, "components-last"},
  {"free-environment", &module_info_ast, "free-environment"},
  {"or", &module_info_macros, "or"},
  {"signature-arity", &module_info_ast, "signature-arity"},
  {"binding-info-setter", &module_info_ast, "binding-info-setter"},
  {"unless", &module_info_macros, "unless"},
  {"from-above-by", &module_info_protoScollectionsSrange, "from-above-by"},
  {"min", &module_info_protoSmath, "min"},
  {"sexpr-syntax-definition-value", &module_info_syntax, "sexpr-syntax-definition-value"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"alternative-consequent", &module_info_ast, "alternative-consequent"},
  {"from-by", &module_info_protoScollectionsSrange, "from-by"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"application-known?", &module_info_ast, "application-known?"},
  {"port-line-setter", &module_info_protoSports, "port-line-setter"},
  {"as-copy", &module_info_protoScollectionsScollection, "as-copy"},
  {"function-data-refs-setter", &module_info_ast, "function-data-refs-setter"},
  {"alter", &module_info_protoScollectionsScollection, "alter"},
  {"sexpr-iterate->loc", &module_info_syntax, "sexpr-iterate->loc"},
  {"copy-state", &module_info_protoScollectionsScollection, "copy-state"},
  {"elt-setter", &module_info_protoScollectionsScollection, "elt-setter"},
  {"fab-p2c-module", &module_info_ast, "fab-p2c-module"},
  {"sexpr-syntax-if-value", &module_info_syntax, "sexpr-syntax-if-value"},
  {"binding-module-name", &module_info_ast, "binding-module-name"},
  {"fix-let-types-setter", &module_info_ast, "fix-let-types-setter"},
  {"unexec", &module_info_boot, "unexec"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"%ib", &module_info_boot, "%ib"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"$sexpr-isa-tag", &module_info_syntax, "$sexpr-isa-tag"},
  {"write", &module_info_write, "write"},
  {"probe-directory", &module_info_protoSsystem, "probe-directory"},
  {"@olen", &module_info_boot, "@olen"},
  {"<ast-primitive>", &module_info_ast, "<ast-primitive>"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"reference-offset", &module_info_ast_linearize, "reference-offset"},
  {"os-binding-value-setter", &module_info_protoSsystem, "os-binding-value-setter"},
  {"%binding-value-setter", &module_info_ast_eval, "%binding-value-setter"},
  {"2nd", &module_info_protoScollectionsSsequence, "2nd"},
  {"pushf", &module_info_macros, "pushf"},
  {"tup", &module_info_boot, "tup"},
  {"update-walk!", &module_info_ast_linearize, "update-walk!"},
  {"display", &module_info_write, "display"},
  {"ceiling", &module_info_protoSmath, "ceiling"},
  {"report-undefined-global-bindings", &module_info_ast, "report-undefined-global-bindings"},
  {"module-loader-module-type", &module_info_ast, "module-loader-module-type"},
  {"$permanent-hash-state", &module_info_protoScollectionsStable, "$permanent-hash-state"},
  {"nxt-state", &module_info_macros, "nxt-state"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"collecting", &module_info_macros, "collecting"},
  {"process-id", &module_info_protoSsystem, "process-id"},
  {"<closure-creation>", &module_info_ast_linearize, "<closure-creation>"},
  {"abs", &module_info_protoSmath, "abs"},
  {"ceiling/", &module_info_protoSmath, "ceiling/"},
  {"loc", &module_info_boot, "loc"},
  {"%lb", &module_info_boot, "%lb"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"install-initial-bindings", &module_info_ast, "install-initial-bindings"},
  {"app-args", &module_info_runtime, "app-args"},
  {"load-module", &module_info_ast, "load-module"},
  {"sexpr-if-then", &module_info_syntax, "sexpr-if-then"},
  {"%f-", &module_info_boot, "%f-"},
  {"%velt", &module_info_boot, "%velt"},
  {"sexpr-method-signature", &module_info_syntax, "sexpr-method-signature"},
  {"reference-called-function?", &module_info_ast, "reference-called-function?"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"$sexpr-slot-tag", &module_info_syntax, "$sexpr-slot-tag"},
  {"<string-port>", &module_info_protoSports, "<string-port>"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"now-key", &module_info_protoScollectionsScollection, "now-key"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"sub-setter", &module_info_protoScollectionsSsequence, "sub-setter"},
  {"reference-called-function?-setter", &module_info_ast, "reference-called-function?-setter"},
  {"close-input-port", &module_info_protoSports, "close-input-port"},
  {"%with-monitor", &module_info_boot, "%with-monitor"},
  {"popf", &module_info_macros, "popf"},
  {"bind-exit-main-fun", &module_info_ast, "bind-exit-main-fun"},
  {"write-char", &module_info_protoSports, "write-char"},
  {"newline", &module_info_protoSports, "newline"},
  {"function-nary?", &module_info_ast, "function-nary?"},
  {"unwind-protect-protected-thunk", &module_info_ast, "unwind-protect-protected-thunk"},
  {"<global-assignment>", &module_info_ast, "<global-assignment>"},
  {"box-reference", &module_info_ast_linearize, "box-reference"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"application-function", &module_info_ast, "application-function"},
  {"monitor-test", &module_info_ast, "monitor-test"},
  {"nyi-error", &module_info_protoSmath, "nyi-error"},
  {"function-free", &module_info_ast, "function-free"},
  {"as-lst", &module_info_ast, "as-lst"},
  {"isa?", &module_info_boot, "isa?"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"monitor-main-thunk", &module_info_ast, "monitor-main-thunk"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"now-elt", &module_info_macros, "now-elt"},
  {"~=", &module_info_protoSmath, "~="},
  {"locals-functions", &module_info_ast, "locals-functions"},
  {"do2", &module_info_protoScollectionsScollection, "do2"},
  {"1st", &module_info_protoScollectionsSsequence, "1st"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"logbit?", &module_info_protoSmath, "logbit?"},
  {"contagious-call", &module_info_protoSmath, "contagious-call"},
  {"assert", &module_info_macros, "assert"},
  {"var-name", &module_info_macros, "var-name"},
  {"elt", &module_info_macros, "elt"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"<runtime-reference>", &module_info_ast, "<runtime-reference>"},
  {"assq", &module_info_protoScollectionsSlist, "assq"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"obj-filename", &module_info_protoSsystem, "obj-filename"},
  {"power-of-two-ceiling", &module_info_protoSmath, "power-of-two-ceiling"},
  {"runtime-environment", &module_info_ast, "runtime-environment"},
  {"binding-index", &module_info_ast, "binding-index"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"parse", &YtopYparse},
  {"do-stack-frames", &YtopYdo_stack_frames},
  {"ast-run", &YtopYast_run},
  {"read-file", &YtopYread_file},
  {"eval-in", &YtopYeval_in},
  {"<keyboard-interrupt>", &YtopYLkeyboard_interruptG},
  {"parse-in", &YtopYparse_in},
  {"run", &YtopYrun},
  {"---main-0---", NULL},
  {"do-restart", &YtopYdo_restart},
  {"auto-run", &YtopYauto_run},
  {"prompt-for-command-expression", &YtopYprompt_for_command_expression},
  {"str-parse", &YtopYstr_parse},
  {"load-from", &YtopYload_from},
  {"p2c-run", &YtopYp2c_run},
  {"print-result-expression", &YtopYprint_result_expression},
  {"top", &YtopYtop},
  {"load", &YtopYload},
  {"backtrace", &YtopYbacktrace},
  {"save-image", &YtopYsave_image},
  {"str-eval", &YtopYstr_eval},
  {"top-in", &YtopYtop_in},
  {"str-parse-in", &YtopYstr_parse_in},
  {"str-eval-in", &YtopYstr_eval_in},
  {"p2c-eval", &YtopYp2c_eval},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"p2c-eval", "p2c-eval"},
  {"backtrace", "backtrace"},
  {"do-stack-frames", "do-stack-frames"},
  {"eval", "eval"},
  {"parse-in", "parse-in"},
  {"read-file", "read-file"},
  {"top", "top"},
  {"save-image", "save-image"},
  {"load", "load"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_top;
MODULE_INFO module_info_top = {
  "top",
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
extern void load_module_read (void);
extern void load_module_write (void);
extern void load_module_syntax (void);
extern void load_module_ast (void);
extern void load_module_ast_linearize (void);
extern void load_module_ast_eval (void);
extern void load_module_protoSsystem (void);
extern void load_module_protoStypes (void);
extern void load_module_protoSmath (void);
extern void load_module_protoScollections (void);
extern void load_module_protoSports (void);

/* EXPRESSION: */

extern void load_module_top (void);

void load_module_top (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_boot();
  load_module_macros();
  load_module_runtime();
  load_module_read();
  load_module_write();
  load_module_syntax();
  load_module_ast();
  load_module_ast_linearize();
  load_module_ast_eval();
  load_module_protoSsystem();
  load_module_protoStypes();
  load_module_protoSmath();
  load_module_protoScollections();
  load_module_protoSports();

  (P)YtopY___main_0___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
