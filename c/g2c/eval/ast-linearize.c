/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: ast-linearize */

EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YprotoScollectionsScollectionYadd,"proto/collections/collection","add");
EXT(YprotoScollectionsSsequenceYlast,"proto/collections/sequence","last");
EXT(Ytype_error,"boot","type-error");
EXT(YLoptsG,"boot","<opts>");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YruntimeYTgensym_counterT,"runtime","*gensym-counter*");
EXT(YastYLpassive_programG,"ast","<passive-program>");
EXT(YprotoScollectionsSassocYassocs_test,"proto/collections/assoc","assocs-test");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YprotoSmathYzeroQ,"proto/math","zero?");
EXT(YprotoScollectionsSstringYTprint_baseT,"proto/collections/string","*print-base*");
EXT(YprotoScollectionsScollectionYfill,"proto/collections/collection","fill");
EXT(YDmin_int,"boot","$min-int");
EXT(YprotoSmathYE,"proto/math","=");
EXT(YprotoSmathYnulQ,"proto/math","nul?");
EXT(YprotoScollectionsSlistYLlistG,"proto/collections/list","<list>");
DEF(Yast_linearizeYliftX,"ast-linearize","lift!");
EXT(YastYload_in,"ast","load-in");
DEF(Yast_linearizeYgather_temporariesX,"ast-linearize","gather-temporaries!");
EXT(YmacrosYfin_stateQ,"macros","fin-state?");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YprotoScollectionsScollectionYnow_elt_setter,"proto/collections/collection","now-elt-setter");
EXT(YruntimeYalways,"runtime","always");
EXT(YprotoSmathYuppercaseQ,"proto/math","uppercase?");
EXT(YastYast_define_binding,"ast","ast-define-binding");
EXT(YastYunwind_protect_cleanup_thunk,"ast","unwind-protect-cleanup-thunk");
EXT(YprotoScollectionsScollectionYreduceA,"proto/collections/collection","reduce+");
EXT(YprotoScollectionsStableYtable_shrink_threshold,"proto/collections/table","table-shrink-threshold");
EXT(YprotoScollectionsSrangeYfrom,"proto/collections/range","from");
EXT(YprotoScollectionsScollectionYany2Q,"proto/collections/collection","any2?");
EXT(YprotoScollectionsScollectionYdo3,"proto/collections/collection","do3");
EXT(YastYLlocalsG,"ast","<locals>");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YastYLast_functionG,"ast","<ast-function>");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YastYbinding_name,"ast","binding-name");
EXT(YastYsignature_specs_setter,"ast","signature-specs-setter");
EXT(YprotoSmathYto_str,"proto/math","to-str");
EXT(YprotoSmathYroundS,"proto/math","round/");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YprotoScollectionsScollectionYreduce,"proto/collections/collection","reduce");
EXT(Ytype_object,"boot","type-object");
DEF(Yast_linearizeYTregister_passiveQT,"ast-linearize","*register-passive?*");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YmacrosYini_state,"macros","ini-state");
EXT(YLclassG,"boot","<class>");
EXT(YprotoScollectionsScollectionYlen,"proto/collections/collection","len");
DEF(Yast_linearizeYdo_do_dynamic_extentX,"ast-linearize","do-do-dynamic-extent!");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YastYbinding_index_setter,"ast","binding-index-setter");
EXT(YprotoScollectionsSrangeYfrom_to_by,"proto/collections/range","from-to-by");
EXT(YastYassignment_form,"ast","assignment-form");
EXT(YruntimeYread,"runtime","read");
EXT(YastYLglobal_referenceG,"ast","<global-reference>");
DEF(Yast_linearizeYregister_allocateX,"ast-linearize","register-allocate!");
EXT(YruntimeYformat,"runtime","format");
EXT(YastYdo_static_global_bindings,"ast","do-static-global-bindings");
DEF(Yast_linearizeYclosure_creation_free,"ast-linearize","closure-creation-free");
EXT(YprotoScollectionsSsequenceYsub,"proto/collections/sequence","sub");
EXT(YprotoScollectionsStableYLstr_tabG,"proto/collections/table","<str-tab>");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(YastYmodule_name_to_relpath,"ast","module-name-to-relpath");
EXT(YLtypeG,"boot","<type>");
DEF(Yast_linearizeYLflattened_programG,"ast-linearize","<flattened-program>");
EXT(YprotoStypesYfalse_or,"proto/types","false-or");
DEF(Yast_linearizeYclosure_creation_index,"ast-linearize","closure-creation-index");
EXT(YastYsignature_names_setter,"ast","signature-names-setter");
EXT(YastYmonitor_info,"ast","monitor-info");
EXT(YprotoSmathYevenQ,"proto/math","even?");
EXT(YprotoSmathYLE,"proto/math","<=");
DEF(Yast_linearizeYclosure_creation_index_setter,"ast-linearize","closure-creation-index-setter");
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
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YprotoScollectionsSbufferYlen_setter,"proto/collections/buffer","len-setter");
EXT(YastYLbind_exitG,"ast","<bind-exit>");
EXT(YastYenv_object_name,"ast","env-object-name");
EXT(Yobject_parents,"boot","object-parents");
DEF(Yast_linearizeYadjoin_free_bindingX,"ast-linearize","adjoin-free-binding!");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YLgenG,"boot","<gen>");
EXT(YastYfunction_free_setter,"ast","function-free-setter");
EXT(Yslot_init,"boot","slot-init");
EXT(YastYbinding_dynamic_extentQ,"ast","binding-dynamic-extent?");
EXT(YprotoScollectionsSlistYassqn,"proto/collections/list","assqn");
EXT(YprotoScollectionsScollectionYinto,"proto/collections/collection","into");
EXT(YprotoSmathYto_digit,"proto/math","to-digit");
EXT(YastYfunction_data_refs,"ast","function-data-refs");
DEF(Yast_linearizeYlift_proceduresX,"ast-linearize","lift-procedures!");
EXT(YastYapplication_knownQ_setter,"ast","application-known?-setter");
DEF(Yast_linearizeYform_program_setter,"ast-linearize","form-program-setter");
EXT(Yobject_slots,"boot","object-slots");
EXT(YprotoScollectionsStableYid_hash,"proto/collections/table","id-hash");
DEF(Yast_linearizeYassoc,"ast-linearize","assoc");
EXT(YastYbinding_native_toQ,"ast","binding-native-to?");
EXT(YastYLast_primitive_definitionG,"ast","<ast-primitive-definition>");
EXT(YastYLdefinitionG,"ast","<definition>");
EXT(YastYprogram_register_setter,"ast","program-register-setter");
EXT(YLsymG,"boot","<sym>");
EXT(YprotoStypesYtL,"proto/types","t<");
EXT(YprotoScollectionsSassocYassocs_test_setter,"proto/collections/assoc","assocs-test-setter");
DEF(Yast_linearizeYprogram_definitions,"ast-linearize","program-definitions");
EXT(YastYLbindingG,"ast","<binding>");
EXT(YastYfix_let_bindings_setter,"ast","fix-let-bindings-setter");
EXT(Yfind_setter,"boot","find-setter");
EXT(YastYfunction_bindings,"ast","function-bindings");
DEF(Yast_linearizeYassoc_value,"ast-linearize","assoc-value");
EXT(YprotoSmathYlogior,"proto/math","logior");
EXT(YprotoSmathYfabs,"proto/math","fabs");
DEF(Yast_linearizeYadjoin_temporary_variablesX,"ast-linearize","adjoin-temporary-variables!");
EXT(YprotoSmathYLbotG,"proto/math","<bot>");
DEF(Yast_linearizeYcollect_temporariesX,"ast-linearize","collect-temporaries!");
EXT(YprotoSmathYflo_bits,"proto/math","flo-bits");
EXT(YprotoSmathYround,"proto/math","round");
DEF(Yast_linearizeYprogram_form_setter,"ast-linearize","program-form-setter");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(YprotoStypesYtA,"proto/types","t+");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YastYlocals_body_setter,"ast","locals-body-setter");
EXT(YprotoScollectionsSsequenceYcat2,"proto/collections/sequence","cat2");
DEF(Yast_linearizeYassoc_value_setter,"ast-linearize","assoc-value-setter");
DEF(Yast_linearizeYprogram_form,"ast-linearize","program-form");
EXT(YLstrG,"boot","<str>");
EXT(YprotoSmathYtruncateS,"proto/math","truncate/");
EXT(YruntimeYsig,"runtime","sig");
EXT(YprotoScollectionsStableYtable_protocol,"proto/collections/table","table-protocol");
EXT(YastYfunction_signature_setter,"ast","function-signature-setter");
EXT(YprotoSmathYas_log,"proto/math","as-log");
EXT(YastYbinding_dynamic_extentQ_setter,"ast","binding-dynamic-extent?-setter");
EXT(YPvnul,"boot","%vnul");
EXT(YprotoScollectionsScollectionYdel_key,"proto/collections/collection","del-key");
EXT(YprotoSmathYA,"proto/math","+");
DEF(Yast_linearizeYadjoin_definitionX,"ast-linearize","adjoin-definition!");
EXT(YastYassignment_reference,"ast","assignment-reference");
EXT(YprotoScollectionsSsequenceYpos,"proto/collections/sequence","pos");
EXT(YastYfunction_registers_setter,"ast","function-registers-setter");
EXT(YastYfind_environment_module,"ast","find-environment-module");
EXT(YastYbinding_kind,"ast","binding-kind");
EXT(YastYinit_ast,"ast","init-ast");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
DEF(Yast_linearizeYLbox_creationG,"ast-linearize","<box-creation>");
EXT(YprotoStypesYtE,"proto/types","t=");
EXT(YastYbinding_value,"ast","binding-value");
DEF(Yast_linearizeYflatten_seqs,"ast-linearize","flatten-seqs");
EXT(YastYfix_let_bindings,"ast","fix-let-bindings");
EXT(YprotoScollectionsScollectionYdo,"proto/collections/collection","do");
EXT(YastYfunction_body_setter,"ast","function-body-setter");
EXT(YprotoSmathYG,"proto/math",">");
EXT(Yerror,"boot","error");
DEF(Yast_linearizeYcollect_registersX,"ast-linearize","collect-registers!");
EXT(YastYbinding_mutableQ,"ast","binding-mutable?");
EXT(YprotoSmathYmax,"proto/math","max");
EXT(YastYassignment_form_setter,"ast","assignment-form-setter");
EXT(YastYfunction_signature,"ast","function-signature");
EXT(YLvecG,"boot","<vec>");
EXT(YastYLlocal_bindingG,"ast","<local-binding>");
EXT(Yslot_owner,"boot","slot-owner");
DEF(Yast_linearizeYLtop_level_formG,"ast-linearize","<top-level-form>");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(YastYLpredefined_applicationG,"ast","<predefined-application>");
EXT(Yfun_names,"boot","fun-names");
EXT(YLmetG,"boot","<met>");
EXT(YastYset_module_environments,"ast","set-module-environments");
EXT(YprotoScollectionsScollectionYfab,"proto/collections/collection","fab");
EXT(Yhead_setter,"boot","head-setter");
EXT(YprotoScollectionsSsequenceYdo_key_vals,"proto/collections/sequence","do-key-vals");
EXT(YprotoScollectionsSbufferYlenSfill_setter,"proto/collections/buffer","len/fill-setter");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YastYsignature_names,"ast","signature-names");
EXT(YastYsignature_value,"ast","signature-value");
EXT(YprotoScollectionsSsequenceYrange_checkQ,"proto/collections/sequence","range-check?");
EXT(YastYlocals_body,"ast","locals-body");
EXT(YprotoScollectionsScollectionYall2Q,"proto/collections/collection","all2?");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
EXT(YprotoScollectionsSsequenceYcatX,"proto/collections/sequence","cat!");
EXT(Yfind_getter,"boot","find-getter");
EXT(YastYfunction_self_recursiveQ_setter,"ast","function-self-recursive?-setter");
EXT(YmacrosYpair,"macros","pair");
EXT(YastYfunction_body,"ast","function-body");
EXT(YLflatG,"boot","<flat>");
EXT(YastYbinding_global_box,"ast","binding-global-box");
EXT(Yhead,"boot","head");
EXT(YastYmodule_syntax_environment,"ast","module-syntax-environment");
EXT(YprotoScollectionsSrangeYfrom_above,"proto/collections/range","from-above");
EXT(YprotoSmathYnegQ,"proto/math","neg?");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(YastYLruntime_assignmentG,"ast","<runtime-assignment>");
EXT(YastYbinding_value_setter,"ast","binding-value-setter");
EXT(YastYLprogramsG,"ast","<programs>");
EXT(YastYLprogramG,"ast","<program>");
EXT(YprotoScollectionsScollectionYfind_key,"proto/collections/collection","find-key");
EXT(Ynul,"boot","nul");
EXT(Yobject_class,"boot","object-class");
EXT(YprotoSmathYlogxor,"proto/math","logxor");
EXT(YastYfunction_registers,"ast","function-registers");
EXT(YprotoSmathYNEE,"proto/math","~==");
EXT(YastYLmodule_bindingG,"ast","<module-binding>");
EXT(YastYLunwind_protectG,"ast","<unwind-protect>");
EXT(YastYLcompile_timeG,"ast","<compile-time>");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YprotoScollectionsSbufferYpop_lastX,"proto/collections/buffer","pop-last!");
EXT(Ysym_name,"boot","sym-name");
EXT(YastYmonitor_type,"ast","monitor-type");
DEF(Yast_linearizeYreference_selfQ_setter,"ast-linearize","reference-self?-setter");
EXT(YprotoSmathYas_lowercase,"proto/math","as-lowercase");
EXT(YastYalternative_alternant,"ast","alternative-alternant");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YprotoScollectionsStableYtable_shrink_threshold_setter,"proto/collections/table","table-shrink-threshold-setter");
EXT(YprotoSmathYeof_objectQ,"proto/math","eof-object?");
DEF(Yast_linearizeYLbox_writeG,"ast-linearize","<box-write>");
EXT(YastYremove_modules_by_nameX,"ast","remove-modules-by-name!");
EXT(YLfunG,"boot","<fun>");
EXT(YprotoSmathYmodulo,"proto/math","modulo");
DEF(Yast_linearizeYform_quotations_setter,"ast-linearize","form-quotations-setter");
EXT(YastYmodule_target_environment,"ast","module-target-environment");
EXT(YmacrosYnapply,"macros","napply");
EXT(YprotoScollectionsSsequenceYrange_check,"proto/collections/sequence","range-check");
EXT(YastYfix_let_body_setter,"ast","fix-let-body-setter");
DEF(Yast_linearizeYclosurize_mainX,"ast-linearize","closurize-main!");
EXT(YprotoScollectionsScollectionYmemQ,"proto/collections/collection","mem?");
EXT(YLlstG,"boot","<lst>");
EXT(YPsnul,"boot","%snul");
EXT(YastYmodule_exports,"ast","module-exports");
EXT(YprotoScollectionsSsequenceYaddX,"proto/collections/sequence","add!");
EXT(YDmax_int,"boot","$max-int");
EXT(YastYLreal_referenceG,"ast","<real-reference>");
EXT(YruntimeYmake_handler,"runtime","make-handler");
EXT(YastYLfix_letG,"ast","<fix-let>");
EXT(YprotoScollectionsSmapYfab_map,"proto/collections/map","fab-map");
EXT(YastYconstant_index,"ast","constant-index");
EXT(YastYmodule_name,"ast","module-name");
EXT(YprotoSmathYT,"proto/math","*");
EXT(YprotoSmathYoddQ,"proto/math","odd?");
DEF(Yast_linearizeYreference_selfQ,"ast-linearize","reference-self?");
EXT(YastYfunction_self_recursiveQ,"ast","function-self-recursive?");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YastYmonitor_handler,"ast","monitor-handler");
DEF(Yast_linearizeYdo_call_referencesX,"ast-linearize","do-call-references!");
EXT(Ytail_setter,"boot","tail-setter");
EXT(Yslot_type,"boot","slot-type");
EXT(YastYfix_let_arguments,"ast","fix-let-arguments");
EXT(YastYsignature_specs,"ast","signature-specs");
EXT(YastYLast_macro_definitionG,"ast","<ast-macro-definition>");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(YastYenvironment_uses_modules,"ast","environment-uses-modules");
EXT(YastYconstant_index_setter,"ast","constant-index-setter");
DEF(Yast_linearizeYinsert_boxX,"ast-linearize","insert-box!");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YastYdo_module_loader_modules,"ast","do-module-loader-modules");
EXT(YastYprobe_module,"ast","probe-module");
EXT(YLseqG,"boot","<seq>");
EXT(YmacrosYcat,"macros","cat");
DEF(Yast_linearizeYast_walk,"ast-linearize","ast-walk");
EXT(YprotoSmathY_,"proto/math","-");
DEF(Yast_linearizeYform_quotations,"ast-linearize","form-quotations");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YastYinit_environment_for_eval,"ast","init-environment-for-eval");
EXT(YastYLlocal_referenceG,"ast","<local-reference>");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YprotoScollectionsScollectionYallQ,"proto/collections/collection","all?");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(Ytail,"boot","tail");
EXT(YastYLmonitorG,"ast","<monitor>");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
DEF(Yast_linearizeYextract_thingsX,"ast-linearize","extract-things!");
EXT(YprotoScollectionsStableYLtabG,"proto/collections/table","<tab>");
DEF(Yast_linearizeYas_top_level_forms,"ast-linearize","as-top-level-forms");
EXT(YastYLboundQG,"ast","<bound?>");
EXT(YprotoScollectionsSstringYascii_limit,"proto/collections/string","ascii-limit");
EXT(YastYbinding_global_box_setter,"ast","binding-global-box-setter");
EXT(YprotoStypesYas,"proto/types","as");
EXT(YprotoScollectionsSbufferYpush_lastX,"proto/collections/buffer","push-last!");
EXT(YprotoScollectionsSrangeYfrom_to,"proto/collections/range","from-to");
EXT(Ylst,"boot","lst");
EXT(Yclass_slots,"boot","class-slots");
EXT(YprotoScollectionsSsequenceYrange_error,"proto/collections/sequence","range-error");
EXT(YprotoSmathYalphabeticQ,"proto/math","alphabetic?");
EXT(YastYLregular_applicationG,"ast","<regular-application>");
EXT(YLcolG,"boot","<col>");
EXT(YastYLast_genericG,"ast","<ast-generic>");
EXT(YprotoScollectionsSsequenceYvals_to_str,"proto/collections/sequence","vals-to-str");
EXT(YprotoSmathYGE,"proto/math",">=");
EXT(YprotoScollectionsStableYtable_growth_threshold,"proto/collections/table","table-growth-threshold");
EXT(Yfab_class,"boot","fab-class");
EXT(YprotoSmathYlogand,"proto/math","logand");
EXT(YastYbinding_dottedQ,"ast","binding-dotted?");
EXT(YLtupG,"boot","<tup>");
EXT(YprotoScollectionsScollectionYdefault,"proto/collections/collection","default");
EXT(YastYfix_let_body,"ast","fix-let-body");
EXT(YprotoScollectionsScollectionYmap_keyed,"proto/collections/collection","map-keyed");
EXT(YprotoSmathYtruncate,"proto/math","truncate");
DEF(Yast_linearizeYunconstrained_typeQ,"ast-linearize","unconstrained-type?");
EXT(YastYLast_signatureG,"ast","<ast-signature>");
EXT(YprotoSmathYeof_object,"proto/math","eof-object");
DEF(Yast_linearizeYanalyze_dynamic_extent,"ast-linearize","analyze-dynamic-extent");
EXT(YLsigG,"boot","<sig>");
EXT(YruntimeYLerrorG,"runtime","<error>");
DEF(Yast_linearizeYform_program,"ast-linearize","form-program");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YastYLlocal_assignmentG,"ast","<local-assignment>");
EXT(YastYLstatic_global_environmentG,"ast","<static-global-environment>");
EXT(YastYenvironment_module,"ast","environment-module");
DEF(Yast_linearizeYdo_do_call_referencesX,"ast-linearize","do-do-call-references!");
EXT(YprotoScollectionsScollectionYempty,"proto/collections/collection","empty");
EXT(YprotoScollectionsSlistYlist,"proto/collections/list","list");
EXT(YastYfunction_source_setter,"ast","function-source-setter");
DEF(Yast_linearizeYTrenaming_bindings_counterT,"ast-linearize","*renaming-bindings-counter*");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YastYLimmediate_constantG,"ast","<immediate-constant>");
EXT(YastYfix_let_arguments_setter,"ast","fix-let-arguments-setter");
EXT(YLlocG,"boot","<loc>");
EXT(YprotoSmathYaddress_of,"proto/math","address-of");
EXT(YastYfunction_debug_name_setter,"ast","function-debug-name-setter");
EXT(YastYbinding_dottedQ_setter,"ast","binding-dotted?-setter");
EXT(YprotoScollectionsSbufferYbuf,"proto/collections/buffer","buf");
EXT(YastYLcomputed_programG,"ast","<computed-program>");
EXT(YastYLfab_listG,"ast","<fab-list>");
EXT(YprotoSmathYremainder,"proto/math","remainder");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YprotoScollectionsScollectionYkeys,"proto/collections/collection","keys");
DEF(Yast_linearizeYdo_do_call_upgradesX,"ast-linearize","do-do-call-upgrades!");
EXT(YprotoScollectionsSsequenceYdel_dups,"proto/collections/sequence","del-dups");
EXT(Ytype_elts,"boot","type-elts");
EXT(YprotoSmathYnum_to_str,"proto/math","num-to-str");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YprotoScollectionsSsequenceYrev,"proto/collections/sequence","rev");
EXT(YprotoScollectionsSrangeYfrom_below_by,"proto/collections/range","from-below-by");
DEF(Yast_linearizeYanalyze_calls,"ast-linearize","analyze-calls");
EXT(YPisa,"boot","%isa");
EXT(YastYLfree_environmentG,"ast","<free-environment>");
EXT(YastYsignature_arity_setter,"ast","signature-arity-setter");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
EXT(YLfloG,"boot","<flo>");
EXT(YastYfunction_value,"ast","function-value");
EXT(YprotoScollectionsStableYcase_insensitive_string_equal,"proto/collections/table","case-insensitive-string-equal");
EXT(YprotoSmathYfloor,"proto/math","floor");
EXT(YastYobjectify_quotation,"ast","objectify-quotation");
EXT(YastYreference_binding,"ast","reference-binding");
DEF(Yast_linearizeYLassocG,"ast-linearize","<assoc>");
EXT(YastYapplication_tailQ,"ast","application-tail?");
EXT(YprotoScollectionsSstepYfirst_then,"proto/collections/step","first-then");
EXT(YastYfunction_temporaries,"ast","function-temporaries");
EXT(YprotoScollectionsScollectionYdo_keyed,"proto/collections/collection","do-keyed");
EXT(YastYassignment_binding,"ast","assignment-binding");
EXT(YastYprogram_type_setter,"ast","program-type-setter");
EXT(YastYprogram_type,"ast","program-type");
DEF(Yast_linearizeYdo_call_upgradesX,"ast-linearize","do-call-upgrades!");
DEF(Yast_linearizeYassoc_key,"ast-linearize","assoc-key");
EXT(Ysig_value,"boot","sig-value");
EXT(Yclass_name,"boot","class-name");
EXT(YastYreference_frame_number,"ast","reference-frame-number");
EXT(YprotoScollectionsSsequenceYdel,"proto/collections/sequence","del");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YprotoScollectionsSbufferYLbufG,"proto/collections/buffer","<buf>");
EXT(YastYlocals_bindings_setter,"ast","locals-bindings-setter");
EXT(YprotoSmathYneg,"proto/math","neg");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(YastYLmodule_binding_referenceG,"ast","<module-binding-reference>");
EXT(YLnumG,"boot","<num>");
EXT(YLintG,"boot","<int>");
EXT(Ynil,"boot","nil");
EXT(YastYunchecked_runtime_environment,"ast","unchecked-runtime-environment");
EXT(YprotoScollectionsSstringYstr_to_num,"proto/collections/string","str-to-num");
DEF(Yast_linearizeYLrenamed_local_bindingG,"ast-linearize","<renamed-local-binding>");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YmacrosYEE,"macros","==");
EXT(YastYbinding_type,"ast","binding-type");
EXT(YastYfunction_source,"ast","function-source");
DEF(Yast_linearizeYbox_form,"ast-linearize","box-form");
EXT(YastYLconstantG,"ast","<constant>");
EXT(YastYconstant_value,"ast","constant-value");
DEF(Yast_linearizeYextractX,"ast-linearize","extract!");
EXT(YastYast_evaluate,"ast","ast-evaluate");
EXT(YastYLmoduleG,"ast","<module>");
EXT(Yfun_value,"boot","fun-value");
EXT(YastYbinding_type_setter,"ast","binding-type-setter");
DEF(Yast_linearizeYform_definitions_setter,"ast-linearize","form-definitions-setter");
EXT(YastYreference_frame_offset,"ast","reference-frame-offset");
EXT(YprotoScollectionsSstepYLstepG,"proto/collections/step","<step>");
EXT(YastYsignature_bindings,"ast","signature-bindings");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YprotoSmathYlognot,"proto/math","lognot");
EXT(YastYbinding_locative,"ast","binding-locative");
EXT(YLchrG,"boot","<chr>");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YastYbinding_inferred_type,"ast","binding-inferred-type");
EXT(YprotoScollectionsScollectionYlow_elt_setter,"proto/collections/collection","low-elt-setter");
EXT(YmacrosYemptyQ,"macros","empty?");
DEF(Yast_linearizeYreference_offset_setter,"ast-linearize","reference-offset-setter");
EXT(YPslot,"boot","%slot");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
EXT(YastYLargumentsG,"ast","<arguments>");
EXT(YprotoScollectionsStableYcurrent_gc_state,"proto/collections/table","current-gc-state");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(Ysig_names,"boot","sig-names");
EXT(YastYobjectify_signature,"ast","objectify-signature");
DEF(Yast_linearizeYassoc_key_setter,"ast-linearize","assoc-key-setter");
DEF(Yast_linearizeYLbox_readG,"ast-linearize","<box-read>");
EXT(YprotoSmathYas_uppercase,"proto/math","as-uppercase");
EXT(Yslot_setter,"boot","slot-setter");
DEF(Yast_linearizeYprogram_quotations_setter,"ast-linearize","program-quotations-setter");
EXT(YprotoSmathYash,"proto/math","ash");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YastYglobal_box_value,"ast","global-box-value");
EXT(YastYsignature_bindings_setter,"ast","signature-bindings-setter");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YastYLapplicationG,"ast","<application>");
EXT(YPsymbols,"boot","%symbols");
DEF(Yast_linearizeYbox_form_setter,"ast-linearize","box-form-setter");
EXT(YprotoScollectionsScollectionYmap2,"proto/collections/collection","map2");
EXT(YLlogG,"boot","<log>");
EXT(YastYfind_binding,"ast","find-binding");
DEF(Yast_linearizeYLfree_referenceG,"ast-linearize","<free-reference>");
EXT(YprotoScollectionsStableYcase_insensitive_string_hash,"proto/collections/table","case-insensitive-string-hash");
EXT(YastYLassignmentG,"ast","<assignment>");
EXT(Yvec,"boot","vec");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YprotoSmathYposQ,"proto/math","pos?");
EXT(YprotoScollectionsSmapYLmapG,"proto/collections/map","<map>");
EXT(YLslotG,"boot","<slot>");
EXT(YprotoScollectionsSsequenceYpick,"proto/collections/sequence","pick");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YprotoSmathYlowercaseQ,"proto/math","lowercase?");
EXT(YPPmacro,"boot","%%macro");
EXT(YastYfunction_index,"ast","function-index");
EXT(YprotoSmathYchar_Gascii,"proto/math","char->ascii");
EXT(YastYLreferenceG,"ast","<reference>");
EXT(Ynot,"boot","not");
EXT(YprotoScollectionsScollectionYanyQ,"proto/collections/collection","any?");
EXT(YastYfunction_binding,"ast","function-binding");
EXT(YastYbinding_inferred_type_setter,"ast","binding-inferred-type-setter");
DEF(Yast_linearizeYallocate_register,"ast-linearize","allocate-register");
EXT(YprotoScollectionsSassocYLassocsG,"proto/collections/assoc","<assocs>");
DEF(Yast_linearizeYclosure_creation_free_setter,"ast-linearize","closure-creation-free-setter");
EXT(YastYDproto_boot_module_name,"ast","$proto-boot-module-name");
DEF(Yast_linearizeYprogram_quotations,"ast-linearize","program-quotations");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
EXT(YprotoSmathYS,"proto/math","/");
EXT(Yfun_name,"boot","fun-name");
EXT(YruntimeYcurry,"runtime","curry");
EXT(Yclass_parents,"boot","class-parents");
EXT(YastYfunction_temporaries_setter,"ast","function-temporaries-setter");
DEF(Yast_linearizeYast_contains_funQ,"ast-linearize","ast-contains-fun?");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YLanyG,"boot","<any>");
EXT(YprotoScollectionsSrangeYLrangeG,"proto/collections/range","<range>");
EXT(YastYfix_let_types,"ast","fix-let-types");
EXT(YastYfunction_debug_name,"ast","function-debug-name");
EXT(YastYLast_methodG,"ast","<ast-method>");
EXT(YastYalternative_condition,"ast","alternative-condition");
EXT(YastYLmodule_loaderG,"ast","<module-loader>");
EXT(YprotoScollectionsScollectionYlow_elt,"proto/collections/collection","low-elt");
EXT(YastYapplication_arguments,"ast","application-arguments");
DEF(Yast_linearizeYform_definitions,"ast-linearize","form-definitions");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Ytype_class,"boot","type-class");
EXT(YprotoScollectionsSstringYstr,"proto/collections/string","str");
DEF(Yast_linearizeYboxify_mutable_bindings,"ast-linearize","boxify-mutable-bindings");
EXT(YprotoSmathYnumericQ,"proto/math","numeric?");
EXT(YLunionG,"boot","<union>");
EXT(YprotoSmathYfloorS,"proto/math","floor/");
EXT(YastYLraw_constantG,"ast","<raw-constant>");
EXT(YastYlocals_bindings,"ast","locals-bindings");
EXT(YastYbinding_info,"ast","binding-info");
EXT(YastYfree_implemented_foreign_bindings,"ast","free-implemented-foreign-bindings");
EXT(Yslot_value,"boot","slot-value");
EXT(YprotoSmathYL,"proto/math","<");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YastYcompile_time_program,"ast","compile-time-program");
EXT(YastYapplication_binding,"ast","application-binding");
EXT(YprotoScollectionsSsequenceY3rd,"proto/collections/sequence","3rd");
EXT(YastYsignature_value_setter,"ast","signature-value-setter");
EXT(YprotoScollectionsSsequenceYfrom_below,"proto/collections/sequence","from-below");
EXT(YastYLsequentialG,"ast","<sequential>");
EXT(YastYboundQ_reference,"ast","bound?-reference");
EXT(YprotoScollectionsStableYtable_growth_threshold_setter,"proto/collections/table","table-growth-threshold-setter");
EXT(YprotoScollectionsStableYtable_growth_factor,"proto/collections/table","table-growth-factor");
EXT(YastYsequentialize,"ast","sequentialize");
EXT(YmacrosYmap,"macros","map");
DEF(Yast_linearizeYreference_offset,"ast-linearize","reference-offset");
EXT(YastYsignature_naryQ,"ast","signature-nary?");
EXT(YprotoSmathYlsh,"proto/math","lsh");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YastYdo_named_static_global_bindings,"ast","do-named-static-global-bindings");
EXT(YprotoScollectionsSstringYascii_whitespaces,"proto/collections/string","ascii-whitespaces");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YastYglobal_box_value_setter,"ast","global-box-value-setter");
EXT(YastYfunction_index_setter,"ast","function-index-setter");
EXT(YastYDproto_runtime_module_name,"ast","$proto-runtime-module-name");
EXT(YprotoScollectionsSlistYpush,"proto/collections/list","push");
EXT(YprotoScollectionsSlistYpop,"proto/collections/list","pop");
EXT(YastYsignature_naryQ_setter,"ast","signature-nary?-setter");
EXT(Yfab_sym,"boot","fab-sym");
EXT(YastYLglobal_boxG,"ast","<global-box>");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YmacrosYrevX,"macros","rev!");
EXT(YastYlocals_functions_setter,"ast","locals-functions-setter");
EXT(YastYfree_environment,"ast","free-environment");
EXT(YastYsignature_arity,"ast","signature-arity");
EXT(YastYbinding_info_setter,"ast","binding-info-setter");
EXT(YprotoScollectionsSrangeYfrom_above_by,"proto/collections/range","from-above-by");
EXT(YprotoSmathYmin,"proto/math","min");
EXT(YastYalternative_consequent,"ast","alternative-consequent");
EXT(YprotoScollectionsSrangeYfrom_by,"proto/collections/range","from-by");
EXT(YastYapplication_knownQ,"ast","application-known?");
EXT(YprotoScollectionsScollectionYas_copy,"proto/collections/collection","as-copy");
EXT(YastYfunction_data_refs_setter,"ast","function-data-refs-setter");
EXT(YprotoScollectionsScollectionYalter,"proto/collections/collection","alter");
EXT(YprotoScollectionsScollectionYcopy_state,"proto/collections/collection","copy-state");
EXT(YprotoScollectionsScollectionYelt_setter,"proto/collections/collection","elt-setter");
EXT(YastYfab_p2c_module,"ast","fab-p2c-module");
EXT(YastYbinding_module_name,"ast","binding-module-name");
EXT(YastYfix_let_types_setter,"ast","fix-let-types-setter");
EXT(Yunexec,"boot","unexec");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YruntimeYhandler_function,"runtime","handler-function");
DEF(Yast_linearizeYassocq,"ast-linearize","assocq");
DEF(Yast_linearizeYbox_reference_setter,"ast-linearize","box-reference-setter");
EXT(YastYLast_primitiveG,"ast","<ast-primitive>");
DEF(Yast_linearizeYdo_dynamic_extentX,"ast-linearize","do-dynamic-extent!");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YprotoScollectionsSsequenceY2nd,"proto/collections/sequence","2nd");
EXT(Ytup,"boot","tup");
DEF(Yast_linearizeYupdate_walkX,"ast-linearize","update-walk!");
EXT(YprotoSmathYceiling,"proto/math","ceiling");
EXT(YastYreport_undefined_global_bindings,"ast","report-undefined-global-bindings");
EXT(YastYmodule_loader_module_type,"ast","module-loader-module-type");
EXT(YprotoScollectionsStableYDpermanent_hash_state,"proto/collections/table","$permanent-hash-state");
EXT(YmacrosYnxt_state,"macros","nxt-state");
DEF(Yast_linearizeYLclosure_creationG,"ast-linearize","<closure-creation>");
EXT(YprotoSmathYabs,"proto/math","abs");
EXT(YprotoSmathYceilingS,"proto/math","ceiling/");
EXT(YastYinstall_initial_bindings,"ast","install-initial-bindings");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YastYload_module,"ast","load-module");
EXT(YastYreference_called_functionQ,"ast","reference-called-function?");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YprotoScollectionsScollectionYnow_key,"proto/collections/collection","now-key");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YprotoScollectionsSsequenceYsub_setter,"proto/collections/sequence","sub-setter");
EXT(YastYreference_called_functionQ_setter,"ast","reference-called-function?-setter");
EXT(YPwith_monitor,"boot","%with-monitor");
EXT(YastYbind_exit_main_fun,"ast","bind-exit-main-fun");
EXT(YastYfunction_naryQ,"ast","function-nary?");
EXT(YastYunwind_protect_protected_thunk,"ast","unwind-protect-protected-thunk");
EXT(YastYLglobal_assignmentG,"ast","<global-assignment>");
DEF(Yast_linearizeYbox_reference,"ast-linearize","box-reference");
EXT(Yadd_slot,"boot","add-slot");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YastYapplication_function,"ast","application-function");
EXT(YastYmonitor_test,"ast","monitor-test");
EXT(YprotoSmathYnyi_error,"proto/math","nyi-error");
EXT(YastYfunction_free,"ast","function-free");
EXT(YastYas_lst,"ast","as-lst");
DEF(Yast_linearizeYanalyze_call_references,"ast-linearize","analyze-call-references");
EXT(YisaQ,"boot","isa?");
EXT(YastYmonitor_main_thunk,"ast","monitor-main-thunk");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YmacrosYnow_elt,"macros","now-elt");
EXT(YprotoSmathYNE,"proto/math","~=");
EXT(YastYlocals_functions,"ast","locals-functions");
DEF(Yast_linearizeYsplit_program,"ast-linearize","split-program");
EXT(YprotoScollectionsScollectionYdo2,"proto/collections/collection","do2");
EXT(YprotoScollectionsSsequenceY1st,"proto/collections/sequence","1st");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YprotoSmathYlogbitQ,"proto/math","logbit?");
EXT(YprotoSmathYcontagious_call,"proto/math","contagious-call");
DEF(Yast_linearizeYnew_renamed_binding,"ast-linearize","new-renamed-binding");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YmacrosYelt,"macros","elt");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YPdefine_method,"boot","%define-method");
EXT(YastYLruntime_referenceG,"ast","<runtime-reference>");
EXT(YprotoScollectionsSlistYassq,"proto/collections/list","assq");
DEF(Yast_linearizeYprogram_definitions_setter,"ast-linearize","program-definitions-setter");
EXT(YprotoSmathYpower_of_two_ceiling,"proto/math","power-of-two-ceiling");
EXT(YastYruntime_environment,"ast","runtime-environment");
EXT(YastYbinding_index,"ast","binding-index");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_108);
DEFLIT(lit_29);
DEFLIT(lit_9);
DEFLIT(lit_40);
DEFLIT(lit_12);
DEFLIT(lit_51);
DEFLIT(lit_3);
DEFLIT(lit_99);
DEFLIT(lit_18);
DEFLIT(lit_94);
DEFLIT(lit_101);
DEFLIT(lit_121);
DEFLIT(lit_2);
DEFLIT(lit_50);
DEFLIT(lit_13);
DEFLIT(lit_52);
DEFLIT(lit_93);
DEFLIT(lit_72);
DEFLIT(lit_89);
DEFLIT(lit_120);
DEFLIT(lit_7);
DEFLIT(lit_49);
DEFLIT(lit_64);
DEFLIT(lit_117);
DEFLIT(lit_90);
DEFLIT(lit_74);
DEFLIT(lit_41);
DEFLIT(lit_76);
DEFLIT(lit_77);
DEFLIT(lit_113);
DEFLIT(lit_56);
DEFLIT(lit_60);
DEFLIT(lit_80);
DEFLIT(lit_24);
DEFLIT(lit_119);
DEFLIT(lit_48);
DEFLIT(lit_85);
DEFLIT(lit_70);
DEFLIT(lit_62);
DEFLIT(lit_0);
DEFLIT(lit_42);
DEFLIT(lit_44);
DEFLIT(lit_103);
DEFLIT(lit_36);
DEFLIT(lit_30);
DEFLIT(lit_43);
DEFLIT(lit_107);
DEFLIT(lit_91);
DEFLIT(lit_46);
DEFLIT(lit_38);
DEFLIT(lit_86);
DEFLIT(lit_27);
DEFLIT(lit_20);
DEFLIT(lit_110);
DEFLIT(lit_102);
DEFLIT(lit_116);
DEFLIT(lit_45);
DEFLIT(lit_35);
DEFLIT(lit_10);
DEFLIT(lit_84);
DEFLIT(lit_31);
DEFLIT(lit_6);
DEFLIT(lit_65);
DEFLIT(lit_92);
DEFLIT(lit_17);
DEFLIT(lit_115);
DEFLIT(lit_69);
DEFLIT(lit_81);
DEFLIT(lit_82);
DEFLIT(lit_22);
DEFLIT(lit_34);
DEFLIT(lit_15);
DEFLIT(lit_96);
DEFLIT(lit_28);
DEFLIT(lit_47);
DEFLIT(lit_106);
DEFLIT(lit_122);
DEFLIT(lit_75);
DEFLIT(lit_1);
DEFLIT(lit_5);
DEFLIT(lit_21);
DEFLIT(lit_67);
DEFLIT(lit_55);
DEFLIT(lit_19);
DEFLIT(lit_37);
DEFLIT(lit_58);
DEFLIT(lit_112);
DEFLIT(lit_11);
DEFLIT(lit_8);
DEFLIT(lit_79);
DEFLIT(lit_26);
DEFLIT(lit_39);
DEFLIT(lit_73);
DEFLIT(lit_16);
DEFLIT(lit_57);
DEFLIT(lit_14);
DEFLIT(lit_100);
DEFLIT(lit_59);
DEFLIT(lit_111);
DEFLIT(lit_95);
DEFLIT(lit_118);
DEFLIT(lit_23);
DEFLIT(lit_61);
DEFLIT(lit_87);
DEFLIT(lit_4);
DEFLIT(lit_68);
DEFLIT(lit_105);
DEFLIT(lit_88);
DEFLIT(lit_98);
DEFLIT(lit_25);
DEFLIT(lit_78);
DEFLIT(lit_71);
DEFLIT(lit_66);
DEFLIT(lit_54);
DEFLIT(lit_114);
DEFLIT(lit_33);
DEFLIT(lit_63);
DEFLIT(lit_97);
DEFLIT(lit_104);
DEFLIT(lit_53);
DEFLIT(lit_32);
DEFLIT(lit_83);
DEFLIT(lit_109);

/* FUNCTIONS: */

LOCFOR(fun_assoc_key_0);
LOCFOR(fun_assoc_key_setter_1);
LOCFOR(fun_2);
LOCFOR(fun_assoc_value_3);
LOCFOR(fun_assoc_value_setter_4);
LOCFOR(fun_5);
FUNFOR(Yast_linearizeYassoc);
LOCFOR(fun_assocq_7);
LOCFOR(fun_x_1329_8);
LOCFOR(fun_update_walkX_9);
LOCFOR(fun_x_1332_10);
LOCFOR(fun_ast_walk_11);
LOCFOR(fun_box_reference_12);
LOCFOR(fun_box_reference_setter_13);
LOCFOR(fun_14);
LOCFOR(fun_box_reference_15);
LOCFOR(fun_box_reference_setter_16);
LOCFOR(fun_17);
LOCFOR(fun_box_form_18);
LOCFOR(fun_box_form_setter_19);
LOCFOR(fun_20);
LOCFOR(fun_box_reference_21);
LOCFOR(fun_box_reference_setter_22);
LOCFOR(fun_23);
LOCFOR(fun_insert_boxX_24);
LOCFOR(fun_insert_boxX_25);
LOCFOR(fun_insert_boxX_26);
LOCFOR(fun_insert_boxX_27);
LOCFOR(fun_insert_boxX_28);
LOCFOR(fun_insert_boxX_29);
LOCFOR(fun_loop_30);
LOCFOR(fun_boxify_mutable_bindings_31);
LOCFOR(fun_do_do_call_referencesX_32);
LOCFOR(fun_do_call_referencesX_33);
LOCFOR(fun_do_call_referencesX_34);
LOCFOR(fun_analyze_call_references_35);
LOCFOR(fun_do_do_dynamic_extentX_36);
LOCFOR(fun_do_dynamic_extentX_37);
LOCFOR(fun_do_dynamic_extentX_38);
LOCFOR(fun_analyze_dynamic_extent_39);
LOCFOR(fun_do_do_call_upgradesX_40);
LOCFOR(fun_do_call_upgradesX_41);
LOCFOR(fun_unconstrained_typeQ_42);
LOCFOR(fun_unconstrained_typeQ_43);
LOCFOR(fun_do_call_upgradesX_44);
LOCFOR(fun_analyze_calls_45);
LOCFOR(fun_reference_offset_46);
LOCFOR(fun_reference_offset_setter_47);
LOCFOR(fun_48);
LOCFOR(fun_reference_selfQ_49);
LOCFOR(fun_reference_selfQ_setter_50);
LOCFOR(fun_51);
LOCFOR(fun_liftX_52);
LOCFOR(fun_lift_proceduresX_53);
LOCFOR(fun_lift_proceduresX_54);
LOCFOR(fun_add_55);
LOCFOR(fun_check_56);
LOCFOR(fun_adjoin_free_bindingX_57);
LOCFOR(fun_lift_proceduresX_58);
LOCFOR(fun_lift_proceduresX_59);
LOCFOR(fun_lift_proceduresX_60);
LOCFOR(fun_lift_proceduresX_61);
LOCFOR(fun_lift_proceduresX_62);
LOCFOR(fun_program_form_63);
LOCFOR(fun_program_form_setter_64);
LOCFOR(fun_65);
LOCFOR(fun_program_quotations_66);
LOCFOR(fun_program_quotations_setter_67);
LOCFOR(fun_68);
LOCFOR(fun_program_definitions_69);
LOCFOR(fun_program_definitions_setter_70);
LOCFOR(fun_71);
LOCFOR(fun_form_program_72);
LOCFOR(fun_form_program_setter_73);
LOCFOR(fun_74);
LOCFOR(fun_form_quotations_75);
LOCFOR(fun_form_quotations_setter_76);
LOCFOR(fun_77);
LOCFOR(fun_form_definitions_78);
LOCFOR(fun_form_definitions_setter_79);
LOCFOR(fun_80);
LOCFOR(fun_closure_creation_index_81);
LOCFOR(fun_closure_creation_index_setter_82);
LOCFOR(fun_83);
LOCFOR(fun_closure_creation_free_84);
LOCFOR(fun_closure_creation_free_setter_85);
LOCFOR(fun_86);
LOCFOR(fun_flatten_seqs_87);
LOCFOR(fun_inner_88);
LOCFOR(fun_loop_89);
LOCFOR(fun_flatten_seqs_90);
LOCFOR(fun_91);
LOCFOR(fun_as_top_level_forms_92);
LOCFOR(fun_93);
LOCFOR(fun_extract_thingsX_94);
LOCFOR(fun_extractX_95);
LOCFOR(fun_extractX_96);
LOCFOR(fun_extractX_97);
LOCFOR(fun_98);
LOCFOR(fun_extractX_99);
LOCFOR(fun_extractX_100);
LOCFOR(fun_adjoin_definitionX_101);
LOCFOR(fun_split_program_102);
LOCFOR(fun_inner_103);
LOCFOR(fun_loop_104);
LOCFOR(fun_split_program_105);
LOCFOR(fun_loop_106);
LOCFOR(fun_closurize_mainX_107);
LOCFOR(fun_108);
LOCFOR(fun_gather_temporariesX_109);
LOCFOR(fun_collect_temporariesX_110);
LOCFOR(fun_collect_temporariesX_111);
LOCFOR(fun_collect_temporariesX_112);
LOCFOR(fun_collect_temporariesX_113);
LOCFOR(fun_adjoin_114);
LOCFOR(fun_adjoin_temporary_variablesX_115);
LOCFOR(fun_binding_index_116);
LOCFOR(fun_binding_index_setter_117);
LOCFOR(fun_118);
LOCFOR(fun_new_renamed_binding_119);
LOCFOR(fun_120);
LOCFOR(fun_121);
LOCFOR(fun_122);
LOCFOR(fun_register_allocateX_123);
LOCFOR(fun_allocate_register_124);
LOCFOR(fun_collect_registersX_125);
LOCFOR(fun_loop_126);
LOCFOR(fun_collect_registersX_127);
LOCFOR(fun_collect_registersX_128);
LOCFOR(fun_129);
LOCFOR(fun_collect_registersX_130);
LOCFOR(fun_collect_registersX_131);
LOCFOR(fun_collect_registersX_132);
LOCFOR(fun_ast_contains_funQ_133);
LOCFOR(fun_walk_134);
LOCFOR(fun_135);
LOCFOR(fun_ast_contains_funQ_136);
extern P Yast_linearizeY___main_0___ ();
extern P Yast_linearizeY___main_1___ ();
extern P Yast_linearizeY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_assoc_key_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yslot_value),Ux_,VARREF(Yast_linearizeYassoc_key));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assoc_key_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yslot_value_setter),Uz_,Ux_,VARREF(Yast_linearizeYassoc_key));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_2) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_assoc_value_3) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yslot_value),Ux_,VARREF(Yast_linearizeYassoc_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assoc_value_setter_4) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yslot_value_setter),Uz_,Ux_,VARREF(Yast_linearizeYassoc_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_5) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(Yast_linearizeYassoc) {
  P x_,y_;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPpair(VARREF(Yast_linearizeYassoc_value),Ynil);
  T1 = (P)YPpair(VARREF(Yast_linearizeYassoc_key),T2);
  T4 = (P)YPpair(y_,Ynil);
  T3 = (P)YPpair(x_,T4);
  T0 = CALL3(1,VARREF(YPisa),VARREF(Yast_linearizeYLassocG),T1,T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_assocq_7) {
  P x_,l_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(l_, 1);
loop:
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),l_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T5 = CALL1(1,VARREF(Yhead),l_);
    T4 = CALL1(1,VARREF(Yast_linearizeYassoc_key),T5);
    T3 = CALL2(1,VARREF(YmacrosYEE),x_,T4);
    if (T3 != YPfalse) {
      T6 = CALL1(1,VARREF(Yhead),l_);
      T2 = T6;
    } else {
      T8 = CALL1(1,VARREF(Ytail),l_);
      T7 = CALL2(1,VARREF(Yast_linearizeYassocq),x_,T8);
      T2 = T7;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1329_8) {
  P x_1327_;
  P xF1549;
  P setterF1548;
  P getterF1547;
  P slotF1546;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1327_, 0);
loop:
  T2 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),x_1327_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(0),x_1327_);
    slotF1546 = T4;
    T5 = CALL1(1,VARREF(Yslot_getter),slotF1546);
    getterF1547 = T5;
    T7 = CALL1(1,VARREF(Yslot_setter),slotF1546);
    setterF1548 = T7;
    T10 = CALL2(1,VARREF(YmacrosYEE),getterF1547,VARREF(YastYbinding_value));
    T9 = CALL1(1,VARREF(Ynot),T10);
    if (T9 != YPfalse) {
      T12 = CALL1(1,getterF1547,FREEREF(1));
      xF1549 = T12;
      T14 = CALL2(1,VARREF(YisaQ),xF1549,VARREF(YastYLprogramG));
      if (T14 != YPfalse) {
        T16 = CALLN(1,VARREF(YmacrosYnapply),4,FREEREF(2),YPfalse,xF1549,FREEREF(3));
        T15 = CALL2(1,setterF1548,T16,FREEREF(1));
        T13 = T15;
      } else {
        T13 = YPfalse;
      }
      T11 = T13;
      T8 = T11;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
    T18 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),x_1327_);
    a1 = T18;
    x_1327_ = a1;
    goto loop;
    T3 = T17;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_update_walkX_9) {
  P g_,o_,args_;
  P x_1329F1551;
  P x_1328F1550;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
loop:
  T0 = CALL1(1,VARREF(Yobject_slots),o_);
  x_1328F1550 = T0;
  T2 = FUNSHELL(1,fun_x_1329_8,5);
  x_1329F1551 = T2;
  FUNINIT(x_1329F1551, 5,x_1328F1550,o_,g_,args_,x_1329F1551);
  T4 = CALL1(1,VARREF(YmacrosYini_state),x_1328F1550);
  T3 = CALL1(0,x_1329F1551,T4);
  T1 = T3;
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_x_1332_10) {
  P x_1330_;
  P xF1554;
  P getterF1553;
  P slotF1552;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1330_, 0);
loop:
  T2 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),x_1330_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(0),x_1330_);
    slotF1552 = T4;
    T5 = CALL1(1,VARREF(Yslot_getter),slotF1552);
    getterF1553 = T5;
    T8 = CALL2(1,VARREF(YmacrosYEE),getterF1553,VARREF(YastYbinding_value));
    T7 = CALL1(1,VARREF(Ynot),T8);
    if (T7 != YPfalse) {
      T10 = CALL1(1,getterF1553,FREEREF(1));
      xF1554 = T10;
      T12 = CALL2(1,VARREF(YisaQ),xF1554,VARREF(YastYLprogramG));
      if (T12 != YPfalse) {
        T13 = CALLN(1,VARREF(YmacrosYnapply),4,FREEREF(2),YPfalse,xF1554,FREEREF(3));
        T11 = T13;
      } else {
        T11 = YPfalse;
      }
      T9 = T11;
      T6 = T9;
    } else {
      T6 = YPfalse;
    }
    T15 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),x_1330_);
    a1 = T15;
    x_1330_ = a1;
    goto loop;
    T3 = T14;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_walk_11) {
  P g_,o_,args_;
  P x_1332F1556;
  P x_1331F1555;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
loop:
  T0 = CALL1(1,VARREF(Yobject_slots),o_);
  x_1331F1555 = T0;
  T2 = FUNSHELL(1,fun_x_1332_10,5);
  x_1332F1556 = T2;
  FUNINIT(x_1332F1556, 5,x_1331F1555,o_,g_,args_,x_1332F1556);
  T4 = CALL1(1,VARREF(YmacrosYini_state),x_1331F1555);
  T3 = CALL1(0,x_1332F1556,T4);
  T1 = T3;
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_box_reference_12) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yslot_value),Ux_,VARREF(Yast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_setter_13) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yslot_value_setter),Uz_,Ux_,VARREF(Yast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_14) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_box_reference_15) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yslot_value),Ux_,VARREF(Yast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_setter_16) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yslot_value_setter),Uz_,Ux_,VARREF(Yast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_17) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_box_form_18) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yslot_value),Ux_,VARREF(Yast_linearizeYbox_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_form_setter_19) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yslot_value_setter),Uz_,Ux_,VARREF(Yast_linearizeYbox_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_20) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_box_reference_21) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yslot_value),Ux_,VARREF(Yast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_setter_22) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yslot_value_setter),Uz_,Ux_,VARREF(Yast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_23) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_insert_boxX_24) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL2(1,VARREF(Yast_linearizeYupdate_walkX),VARREF(Yast_linearizeYinsert_boxX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_25) {
  P o_;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T2 = CALL1(1,VARREF(YastYreference_binding),o_);
  T1 = CALL1(1,VARREF(YastYbinding_mutableQ),T2);
  if (T1 != YPfalse) {
    T4 = (P)YPpair(VARREF(Yast_linearizeYbox_reference),Ynil);
    T5 = (P)YPpair(o_,Ynil);
    T3 = CALL3(1,VARREF(YPisa),VARREF(Yast_linearizeYLbox_readG),T4,T5);
    T0 = T3;
  } else {
    T0 = o_;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_26) {
  P o_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T2 = (P)YPpair(VARREF(Yast_linearizeYbox_form),Ynil);
  T1 = (P)YPpair(VARREF(Yast_linearizeYbox_reference),T2);
  T4 = CALL1(1,VARREF(YastYassignment_reference),o_);
  T7 = CALL1(1,VARREF(YastYassignment_form),o_);
  T6 = CALL1(1,VARREF(Yast_linearizeYinsert_boxX),T7);
  T5 = (P)YPpair(T6,Ynil);
  T3 = (P)YPpair(T4,T5);
  T0 = CALL3(1,VARREF(YPisa),VARREF(Yast_linearizeYLbox_writeG),T1,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_27) {
  P o_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T2 = CALL1(1,VARREF(YastYfunction_body),o_);
  T3 = CALL1(1,VARREF(YastYfunction_bindings),o_);
  T1 = CALL2(1,VARREF(Yast_linearizeYboxify_mutable_bindings),T2,T3);
  T0 = CALL1(1,VARREF(Yast_linearizeYinsert_boxX),T1);
  CALL2(1,VARREF(YastYfunction_body_setter),T0,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_insert_boxX_28) {
  P o_;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL1(1,VARREF(YastYfix_let_arguments),o_);
  T0 = CALL1(1,VARREF(Yast_linearizeYinsert_boxX),T1);
  CALL2(1,VARREF(YastYfix_let_arguments_setter),T0,o_);
  T4 = CALL1(1,VARREF(YastYfix_let_body),o_);
  T5 = CALL1(1,VARREF(YastYfix_let_bindings),o_);
  T3 = CALL2(1,VARREF(Yast_linearizeYboxify_mutable_bindings),T4,T5);
  T2 = CALL1(1,VARREF(Yast_linearizeYinsert_boxX),T3);
  CALL2(1,VARREF(YastYfix_let_body_setter),T2,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_insert_boxX_29) {
  P o_;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL1(1,VARREF(YastYlocals_functions),o_);
  T0 = CALL2(1,VARREF(YmacrosYmap),VARREF(Yast_linearizeYinsert_boxX),T1);
  CALL2(1,VARREF(YastYlocals_functions_setter),T0,o_);
  T4 = CALL1(1,VARREF(YastYlocals_body),o_);
  T5 = CALL1(1,VARREF(YastYlocals_bindings),o_);
  T3 = CALL2(1,VARREF(Yast_linearizeYboxify_mutable_bindings),T4,T5);
  T2 = CALL1(1,VARREF(Yast_linearizeYinsert_boxX),T3);
  CALL2(1,VARREF(YastYlocals_body_setter),T2,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_loop_30) {
  P res_,bindings_;
  P creatorF1558;
  P bindingF1557;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(bindings_, 1);
loop:
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),bindings_);
  if (T1 != YPfalse) {
    T3 = CALL2(1,VARREF(YmacrosYpair),FREEREF(0),res_);
    T2 = CALL1(1,VARREF(YmacrosYrevX),T3);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yhead),bindings_);
    bindingF1557 = T5;
    T7 = CALL1(1,VARREF(YastYbinding_mutableQ),bindingF1557);
    if (T7 != YPfalse) {
      T10 = (P)YPpair(VARREF(Yast_linearizeYbox_reference),Ynil);
      T13 = (P)YPpair(VARREF(YastYreference_binding),Ynil);
      T14 = (P)YPpair(bindingF1557,Ynil);
      T12 = CALL3(1,VARREF(YPisa),VARREF(YastYLlocal_referenceG),T13,T14);
      T11 = (P)YPpair(T12,Ynil);
      T9 = CALL3(1,VARREF(YPisa),VARREF(Yast_linearizeYLbox_creationG),T10,T11);
      creatorF1558 = T9;
      T16 = CALL2(1,VARREF(YmacrosYpair),creatorF1558,res_);
      T17 = CALL1(1,VARREF(Ytail),bindings_);
      a1 = T16;
      a2 = T17;
      res_ = a1;
      bindings_ = a2;
      goto loop;
      T8 = T15;
      T6 = T8;
    } else {
      T19 = CALL1(1,VARREF(Ytail),bindings_);
      a1 = res_;
      a2 = T19;
      res_ = a1;
      bindings_ = a2;
      goto loop;
      T6 = T18;
    }
    T4 = T6;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_boxify_mutable_bindings_31) {
  P form_,bindings_;
  P loopF1559;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(form_, 0);
  ARG(bindings_, 1);
loop:
  T2 = FUNSHELL(1,fun_loop_30,2);
  loopF1559 = T2;
  FUNINIT(loopF1559, 2,form_,loopF1559);
  T3 = CALL2(0,loopF1559,Ynil,bindings_);
  T1 = T3;
  T0 = CALL1(1,VARREF(YastYsequentialize),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_do_call_referencesX_32) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL2(1,VARREF(Yast_linearizeYupdate_walkX),VARREF(Yast_linearizeYdo_call_referencesX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_call_referencesX_33) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,VARREF(Yast_linearizeYdo_do_call_referencesX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_call_referencesX_34) {
  P o_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  CALL1(1,VARREF(Yast_linearizeYdo_do_call_referencesX),o_);
  T1 = CALL1(1,VARREF(YastYapplication_function),o_);
  T0 = CALL2(1,VARREF(YisaQ),T1,VARREF(YastYLlocal_referenceG));
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(YastYapplication_function),o_);
    T2 = CALL2(1,VARREF(YastYreference_called_functionQ_setter),YPtrue,T3);
  } else {
  }
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_analyze_call_references_35) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,VARREF(Yast_linearizeYdo_call_referencesX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_do_dynamic_extentX_36) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL2(1,VARREF(Yast_linearizeYupdate_walkX),VARREF(Yast_linearizeYdo_dynamic_extentX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_dynamic_extentX_37) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,VARREF(Yast_linearizeYdo_do_dynamic_extentX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_dynamic_extentX_38) {
  P o_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  CALL1(1,VARREF(Yast_linearizeYdo_do_dynamic_extentX),o_);
  T1 = CALL1(1,VARREF(YastYreference_called_functionQ),o_);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(YastYreference_binding),o_);
    T2 = CALL2(1,VARREF(YastYbinding_dynamic_extentQ_setter),YPfalse,T3);
  } else {
  }
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_analyze_dynamic_extent_39) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  CALL1(1,VARREF(Yast_linearizeYanalyze_call_references),o_);
  T0 = CALL1(1,VARREF(Yast_linearizeYdo_dynamic_extentX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_do_call_upgradesX_40) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL2(1,VARREF(Yast_linearizeYupdate_walkX),VARREF(Yast_linearizeYdo_call_upgradesX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_call_upgradesX_41) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,VARREF(Yast_linearizeYdo_do_call_upgradesX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_unconstrained_typeQ_42) {
  P b_;
  P tmpF1560;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T2 = CALL1(1,VARREF(YastYbinding_module_name),b_);
  T1 = CALL2(1,VARREF(YmacrosYEE),T2,LITREF(lit_44));
  tmpF1560 = T1;
  if (tmpF1560 != YPfalse) {
    T5 = CALL1(1,VARREF(YastYbinding_name),b_);
    T4 = CALL2(1,VARREF(YmacrosYEE),T5,LITREF(lit_45));
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_unconstrained_typeQ_43) {
  P o_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL1(1,VARREF(YastYreference_binding),o_);
  T0 = CALL1(1,VARREF(Yast_linearizeYunconstrained_typeQ),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_do_call_upgradesX_44) {
  P o_;
  P tmpF1565;
  P tmpF1564;
  P tmpF1563;
  P tmpF1562;
  P metF1561;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  CALL1(1,VARREF(Yast_linearizeYdo_do_call_upgradesX),o_);
  T1 = CALL1(1,VARREF(YastYapplication_function),o_);
  T0 = CALL2(1,VARREF(YisaQ),T1,VARREF(YastYLlocal_referenceG));
  if (T0 != YPfalse) {
    T5 = CALL1(1,VARREF(YastYapplication_function),o_);
    T4 = CALL1(1,VARREF(YastYreference_binding),T5);
    T3 = CALL1(1,VARREF(YastYbinding_value),T4);
    metF1561 = T3;
    T8 = CALL2(1,VARREF(YisaQ),metF1561,VARREF(YastYLast_functionG));
    tmpF1562 = T8;
    if (tmpF1562 != YPfalse) {
      T12 = CALL2(1,VARREF(YruntimeYcompose),VARREF(Yast_linearizeYunconstrained_typeQ),VARREF(YastYbinding_type));
      T13 = CALL1(1,VARREF(YastYfunction_bindings),metF1561);
      T11 = CALL2(1,VARREF(YprotoScollectionsScollectionYallQ),T12,T13);
      tmpF1563 = T11;
      if (tmpF1563 != YPfalse) {
        T17 = CALL1(1,VARREF(YastYfunction_value),metF1561);
        T16 = CALL1(1,VARREF(Yast_linearizeYunconstrained_typeQ),T17);
        tmpF1564 = T16;
        if (tmpF1564 != YPfalse) {
          T21 = CALL1(1,VARREF(YastYfunction_naryQ),metF1561);
          T20 = CALL1(1,VARREF(Ynot),T21);
          tmpF1565 = T20;
          if (tmpF1565 != YPfalse) {
            T25 = CALL1(1,VARREF(YastYapplication_arguments),o_);
            T24 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),T25);
            T27 = CALL1(1,VARREF(YastYfunction_bindings),metF1561);
            T26 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),T27);
            T23 = CALL2(1,VARREF(YprotoSmathYE),T24,T26);
            T22 = T23;
          } else {
            T22 = YPfalse;
          }
          T19 = T22;
          T18 = T19;
        } else {
          T18 = YPfalse;
        }
        T15 = T18;
        T14 = T15;
      } else {
        T14 = YPfalse;
      }
      T10 = T14;
      T9 = T10;
    } else {
      T9 = YPfalse;
    }
    T7 = T9;
    if (T7 != YPfalse) {
      T28 = CALL2(1,VARREF(YastYapplication_knownQ_setter),YPtrue,o_);
      T6 = T28;
    } else {
      T6 = YPfalse;
    }
    T2 = T6;
  } else {
  }
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_analyze_calls_45) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,VARREF(Yast_linearizeYdo_call_upgradesX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_offset_46) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yslot_value),Ux_,VARREF(Yast_linearizeYreference_offset));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_offset_setter_47) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yslot_value_setter),Uz_,Ux_,VARREF(Yast_linearizeYreference_offset));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_48) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_reference_selfQ_49) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yslot_value),Ux_,VARREF(Yast_linearizeYreference_selfQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_selfQ_setter_50) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yslot_value_setter),Uz_,Ux_,VARREF(Yast_linearizeYreference_selfQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_51) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_liftX_52) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL3(1,VARREF(Yast_linearizeYlift_proceduresX),o_,YPfalse,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_53) {
  P o_,flat_fun_,bindings_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T0 = CALLN(1,VARREF(Yast_linearizeYupdate_walkX),4,VARREF(Yast_linearizeYlift_proceduresX),o_,flat_fun_,bindings_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_54) {
  P o_,flat_fun_,bindings_;
  P offsetF1567;
  P bF1566;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,VARREF(YastYreference_binding),o_);
  bF1566 = T1;
  T3 = CALL2(1,VARREF(YprotoScollectionsScollectionYmemQ),bindings_,bF1566);
  if (T3 != YPfalse) {
    T2 = o_;
  } else {
    T5 = CALL2(1,VARREF(Yast_linearizeYadjoin_free_bindingX),flat_fun_,o_);
    offsetF1567 = T5;
    T9 = (P)YPpair(VARREF(Yast_linearizeYreference_selfQ),Ynil);
    T8 = (P)YPpair(VARREF(Yast_linearizeYreference_offset),T9);
    T7 = (P)YPpair(VARREF(YastYreference_binding),T8);
    T14 = CALL1(1,VARREF(YastYreference_binding),o_);
    T15 = CALL1(1,VARREF(YastYfunction_binding),flat_fun_);
    T13 = CALL2(1,VARREF(YmacrosYEE),T14,T15);
    T12 = (P)YPpair(T13,Ynil);
    T11 = (P)YPpair(offsetF1567,T12);
    T10 = (P)YPpair(bF1566,T11);
    T6 = CALL3(1,VARREF(YPisa),VARREF(Yast_linearizeYLfree_referenceG),T7,T10);
    T4 = T6;
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_add_55) {
  P freeT_;
  P tailF1568;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(freeT_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),freeT_);
  tailF1568 = T1;
  T3 = CALL1(1,VARREF(YmacrosYemptyQ),tailF1568);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Ytail_setter),FREEREF(0),freeT_);
    T2 = T4;
  } else {
    a1 = tailF1568;
    freeT_ = a1;
    goto loop;
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_check_56) {
  P i_,freeT_;
  P addF1570;
  P new_envF1569;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(freeT_, 1);
loop:
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),freeT_);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YprotoScollectionsScollectionYempty),VARREF(YastYLfree_environmentG));
    T3 = CALL2(1,VARREF(YastYfree_environment),FREEREF(0),T4);
    new_envF1569 = T3;
    T6 = CALL1(1,VARREF(YastYfunction_free),FREEREF(1));
    T5 = CALL1(1,VARREF(YmacrosYemptyQ),T6);
    if (T5 != YPfalse) {
      T7 = CALL2(1,VARREF(YastYfunction_free_setter),new_envF1569,FREEREF(1));
    } else {
      T9 = FUNSHELL(1,fun_add_55,2);
      addF1570 = T9;
      FUNINIT(addF1570, 2,new_envF1569,addF1570);
      T11 = CALL1(1,VARREF(YastYfunction_free),FREEREF(1));
      T10 = CALL1(0,addF1570,T11);
      T8 = T10;
    }
    T2 = i_;
    T0 = T2;
  } else {
    T14 = CALL1(1,VARREF(YastYreference_binding),FREEREF(0));
    T16 = CALL1(1,VARREF(Yhead),freeT_);
    T15 = CALL1(1,VARREF(YastYreference_binding),T16);
    T13 = CALL2(1,VARREF(YmacrosYEE),T14,T15);
    if (T13 != YPfalse) {
      T12 = i_;
    } else {
      T18 = CALL2(1,VARREF(YprotoSmathYA),i_,YPint((P)1));
      T19 = CALL1(1,VARREF(Ytail),freeT_);
      a1 = T18;
      a2 = T19;
      i_ = a1;
      freeT_ = a2;
      goto loop;
      T12 = T17;
    }
    T0 = T12;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_free_bindingX_57) {
  P flat_fun_,ref_;
  P checkF1571;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(flat_fun_, 0);
  ARG(ref_, 1);
loop:
  T1 = FUNSHELL(1,fun_check_56,3);
  checkF1571 = T1;
  FUNINIT(checkF1571, 3,ref_,flat_fun_,checkF1571);
  T3 = CALL1(1,VARREF(YastYfunction_free),flat_fun_);
  T2 = CALL2(1,checkF1571,YPint((P)0),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_58) {
  P o_,flat_fun_,bindings_;
  P new_bindingsF1572;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,VARREF(YastYfix_let_arguments),o_);
  T0 = CALL3(1,VARREF(Yast_linearizeYlift_proceduresX),T1,flat_fun_,bindings_);
  CALL2(1,VARREF(YastYfix_let_arguments_setter),T0,o_);
  T4 = CALL1(1,VARREF(YastYfix_let_bindings),o_);
  T3 = CALL2(1,VARREF(YmacrosYcat),T4,bindings_);
  new_bindingsF1572 = T3;
  T6 = CALL1(1,VARREF(YastYfix_let_body),o_);
  T5 = CALL3(1,VARREF(Yast_linearizeYlift_proceduresX),T6,flat_fun_,new_bindingsF1572);
  CALL2(1,VARREF(YastYfix_let_body_setter),T5,o_);
  T2 = o_;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_lift_proceduresX_59) {
  P o_,flat_fun_,bindings_;
  P new_bindingsF1573;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T2 = CALL1(1,VARREF(YastYlocals_bindings),o_);
  T1 = CALL2(1,VARREF(YmacrosYcat),T2,bindings_);
  new_bindingsF1573 = T1;
  T4 = CALL3(1,VARREF(YruntimeYrcurry),VARREF(Yast_linearizeYlift_proceduresX),flat_fun_,new_bindingsF1573);
  T5 = CALL1(1,VARREF(YastYlocals_functions),o_);
  T3 = CALL2(1,VARREF(YmacrosYmap),T4,T5);
  CALL2(1,VARREF(YastYlocals_functions_setter),T3,o_);
  T7 = CALL1(1,VARREF(YastYlocals_body),o_);
  T6 = CALL3(1,VARREF(Yast_linearizeYlift_proceduresX),T7,flat_fun_,new_bindingsF1573);
  CALL2(1,VARREF(YastYlocals_body_setter),T6,o_);
  T0 = o_;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_60) {
  P o_,flat_fun_,bindings_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,VARREF(YastYfunction_body),o_);
  T2 = CALL1(1,VARREF(YastYfunction_bindings),o_);
  T0 = CALL3(1,VARREF(Yast_linearizeYlift_proceduresX),T1,YPfalse,T2);
  CALL2(1,VARREF(YastYfunction_body_setter),T0,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_lift_proceduresX_61) {
  P o_,flat_fun_,bindings_;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_lift_proceduresX_62) {
  P o_,flat_fun_,bindings_;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,VARREF(YastYfunction_body),o_);
  T2 = CALL1(1,VARREF(YastYfunction_bindings),o_);
  T0 = CALL3(1,VARREF(Yast_linearizeYlift_proceduresX),T1,o_,T2);
  CALL2(1,VARREF(YastYfunction_body_setter),T0,o_);
  T4 = CALL1(1,VARREF(YastYfunction_free),o_);
  T3 = CALL3(1,VARREF(Yast_linearizeYlift_proceduresX),T4,flat_fun_,bindings_);
  CALL2(1,VARREF(YastYfunction_free_setter),T3,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_program_form_63) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yslot_value),Ux_,VARREF(Yast_linearizeYprogram_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_form_setter_64) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yslot_value_setter),Uz_,Ux_,VARREF(Yast_linearizeYprogram_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_65) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_program_quotations_66) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yslot_value),Ux_,VARREF(Yast_linearizeYprogram_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_quotations_setter_67) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yslot_value_setter),Uz_,Ux_,VARREF(Yast_linearizeYprogram_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_68) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YprotoScollectionsScollectionYfab),VARREF(YprotoScollectionsStableYLtabG),YPint((P)40));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_definitions_69) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yslot_value),Ux_,VARREF(Yast_linearizeYprogram_definitions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_definitions_setter_70) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yslot_value_setter),Uz_,Ux_,VARREF(Yast_linearizeYprogram_definitions));
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

FUNCODEDEF(fun_form_program_72) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yslot_value),Ux_,VARREF(Yast_linearizeYform_program));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_program_setter_73) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yslot_value_setter),Uz_,Ux_,VARREF(Yast_linearizeYform_program));
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
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_form_quotations_75) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yslot_value),Ux_,VARREF(Yast_linearizeYform_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_quotations_setter_76) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yslot_value_setter),Uz_,Ux_,VARREF(Yast_linearizeYform_quotations));
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

FUNCODEDEF(fun_form_definitions_78) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yslot_value),Ux_,VARREF(Yast_linearizeYform_definitions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_definitions_setter_79) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yslot_value_setter),Uz_,Ux_,VARREF(Yast_linearizeYform_definitions));
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
  QRET(Ynil);
}

FUNCODEDEF(fun_closure_creation_index_81) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yslot_value),Ux_,VARREF(Yast_linearizeYclosure_creation_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closure_creation_index_setter_82) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yslot_value_setter),Uz_,Ux_,VARREF(Yast_linearizeYclosure_creation_index));
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
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_closure_creation_free_84) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yslot_value),Ux_,VARREF(Yast_linearizeYclosure_creation_free));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closure_creation_free_setter_85) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yslot_value_setter),Uz_,Ux_,VARREF(Yast_linearizeYclosure_creation_free));
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
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_flatten_seqs_87) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,VARREF(Ylst),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_inner_88) {
  P ss_,r_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(ss_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),ss_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Ytail),FREEREF(1));
    T2 = CALL2(0,FREEREF(0),T3,r_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Ytail),ss_);
    T7 = CALL1(1,VARREF(Yhead),ss_);
    T6 = CALL2(1,VARREF(YmacrosYpair),T7,r_);
    a1 = T5;
    a2 = T6;
    ss_ = a1;
    r_ = a2;
    goto loop;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_89) {
  P s_,r_;
  P innerF1574;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),s_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YmacrosYrevX),r_);
    T0 = T2;
  } else {
    T4 = FUNSHELL(1,fun_inner_88,3);
    innerF1574 = T4;
    FUNINIT(innerF1574, 3,FREEREF(0),s_,innerF1574);
    T7 = CALL1(1,VARREF(Yhead),s_);
    T6 = CALL1(1,VARREF(Yast_linearizeYflatten_seqs),T7);
    T5 = CALL2(0,innerF1574,T6,r_);
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_flatten_seqs_90) {
  P o_;
  P loopF1575;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_89,1);
  loopF1575 = T1;
  FUNINIT(loopF1575, 1,loopF1575);
  T2 = CALL2(0,loopF1575,o_,Ynil);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_91) {
  P x_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = (P)YPpair(VARREF(Yast_linearizeYform_program),Ynil);
  T2 = (P)YPpair(x_,Ynil);
  T0 = CALL3(1,VARREF(YPisa),VARREF(Yast_linearizeYLtop_level_formG),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_top_level_forms_92) {
  P programs_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(programs_, 0);
loop:
  T1 = fun_91;
  T0 = CALL2(1,VARREF(YmacrosYmap),T1,programs_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_93) {
  P form_;
  P T0;
  P a1;
LINK_STACK();
  ARG(form_, 0);
loop:
  T0 = CALL3(1,VARREF(Yast_linearizeYextractX),form_,form_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extract_thingsX_94) {
  P o_;
  P resultF1577;
  P formsF1576;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T2 = CALL1(1,VARREF(Yast_linearizeYflatten_seqs),o_);
  T1 = CALL1(1,VARREF(Yast_linearizeYas_top_level_forms),T2);
  formsF1576 = T1;
  T4 = CALL3(1,VARREF(YPisa),VARREF(Yast_linearizeYLflattened_programG),Ynil,Ynil);
  resultF1577 = T4;
  T7 = FUNFAB(fun_93,1,resultF1577);
  T6 = CALL2(1,VARREF(YmacrosYmap),T7,formsF1576);
  T5 = CALL1(1,VARREF(YastYsequentialize),T6);
  CALL2(1,VARREF(Yast_linearizeYprogram_form_setter),T5,resultF1577);
  T3 = resultF1577;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_95) {
  P o_,form_,result_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T0 = CALLN(1,VARREF(Yast_linearizeYupdate_walkX),4,VARREF(Yast_linearizeYextractX),o_,form_,result_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_96) {
  P o_,form_,result_;
  P x_1333F1587;
  P qbF1586;
  P probeF1585;
  P indexF1584;
  P qbTF1583;
  P tmpF1582;
  P tmpF1581;
  P tmpF1580;
  P tmpF1579;
  P valueF1578;
  P T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T1 = CALL1(1,VARREF(YastYconstant_value),o_);
  valueF1578 = T1;
  T4 = CALL2(1,VARREF(YmacrosYEE),valueF1578,YPfalse);
  tmpF1579 = T4;
  if (tmpF1579 != YPfalse) {
    T5 = tmpF1579;
  } else {
    T7 = CALL2(1,VARREF(YmacrosYEE),valueF1578,YPtrue);
    tmpF1580 = T7;
    if (tmpF1580 != YPfalse) {
      T8 = tmpF1580;
    } else {
      T10 = CALL2(1,VARREF(YmacrosYEE),valueF1578,Ynil);
      tmpF1581 = T10;
      if (tmpF1581 != YPfalse) {
        T11 = tmpF1581;
      } else {
        T13 = CALL2(1,VARREF(YisaQ),valueF1578,VARREF(YLintG));
        tmpF1582 = T13;
        if (tmpF1582 != YPfalse) {
          T14 = tmpF1582;
        } else {
          T15 = CALL2(1,VARREF(YisaQ),valueF1578,VARREF(YLchrG));
          T14 = T15;
        }
        T12 = T14;
        T11 = T12;
      }
      T9 = T11;
      T8 = T9;
    }
    T6 = T8;
    T5 = T6;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T2 = o_;
  } else {
    T17 = CALL1(1,VARREF(Yast_linearizeYprogram_quotations),result_);
    qbTF1583 = T17;
    T19 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),qbTF1583);
    indexF1584 = T19;
    T21 = CALL2(1,VARREF(YmacrosYelt),qbTF1583,valueF1578);
    probeF1585 = T21;
    T23 = CALL2(1,VARREF(YprotoSmathYNEE),probeF1585,VARREF(Ynul));
    if (T23 != YPfalse) {
      T25 = (P)YPpair(VARREF(YastYreference_binding),Ynil);
      T26 = (P)YPpair(probeF1585,Ynil);
      T24 = CALL3(1,VARREF(YPisa),VARREF(YastYLglobal_referenceG),T25,T26);
      T22 = T24;
    } else {
      T31 = (P)YPpair(VARREF(YastYbinding_info),Ynil);
      T30 = (P)YPpair(VARREF(YastYbinding_name),T31);
      T29 = (P)YPpair(VARREF(YastYbinding_kind),T30);
      T34 = (P)YPpair(valueF1578,Ynil);
      T33 = (P)YPpair(indexF1584,T34);
      T32 = (P)YPpair(LITREF(lit_90),T33);
      T28 = CALL3(1,VARREF(YPisa),VARREF(YastYLmodule_bindingG),T29,T32);
      qbF1586 = T28;
      CALL3(1,VARREF(YprotoScollectionsScollectionYelt_setter),qbF1586,qbTF1583,valueF1578);
      x_1333F1587 = form_;
      T37 = CALL1(1,VARREF(Yast_linearizeYform_quotations),x_1333F1587);
      T36 = CALL2(1,VARREF(YprotoScollectionsSlistYpush),T37,qbF1586);
      T35 = CALL2(1,VARREF(Yast_linearizeYform_quotations_setter),T36,x_1333F1587);
      T39 = (P)YPpair(VARREF(YastYreference_binding),Ynil);
      T40 = (P)YPpair(qbF1586,Ynil);
      T38 = CALL3(1,VARREF(YPisa),VARREF(YastYLglobal_referenceG),T39,T40);
      T27 = T38;
      T22 = T27;
    }
    T20 = T22;
    T18 = T20;
    T16 = T18;
    T2 = T16;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_97) {
  P o_,form_,result_;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_98) {
  P binding_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T2 = CALL1(1,VARREF(YastYbinding_type),binding_);
  T1 = CALL3(1,VARREF(Yast_linearizeYextractX),T2,FREEREF(0),FREEREF(1));
  T0 = CALL2(1,VARREF(YastYbinding_type_setter),T1,binding_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_99) {
  P o_,form_,result_;
  P indexF1590;
  P free_bindingsF1589;
  P freeF1588;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T1 = CALL1(1,VARREF(YastYfunction_debug_name),o_);
  T0 = CALL3(1,VARREF(Yast_linearizeYextractX),T1,form_,result_);
  CALL2(1,VARREF(YastYfunction_debug_name_setter),T0,o_);
  T3 = CALL1(1,VARREF(YastYfunction_signature),o_);
  T2 = CALL3(1,VARREF(Yast_linearizeYextractX),T3,form_,result_);
  CALL2(1,VARREF(YastYfunction_signature_setter),T2,o_);
  T5 = CALL1(1,VARREF(YastYfunction_body),o_);
  T4 = CALL3(1,VARREF(Yast_linearizeYextractX),T5,form_,result_);
  CALL2(1,VARREF(YastYfunction_body_setter),T4,o_);
  T6 = FUNFAB(fun_98,2,form_,result_);
  T7 = CALL1(1,VARREF(YastYfunction_bindings),o_);
  CALL2(1,VARREF(YprotoScollectionsScollectionYdo),T6,T7);
  T9 = CALL1(1,VARREF(YastYfunction_free),o_);
  freeF1588 = T9;
  T11 = CALL2(1,VARREF(YmacrosYmap),VARREF(YastYreference_binding),freeF1588);
  free_bindingsF1589 = T11;
  T13 = CALL3(1,VARREF(Yast_linearizeYadjoin_definitionX),form_,result_,o_);
  indexF1590 = T13;
  CALL2(1,VARREF(YastYfunction_index_setter),indexF1590,o_);
  CALL2(1,VARREF(YastYfunction_free_setter),free_bindingsF1589,o_);
  T16 = (P)YPpair(VARREF(Yast_linearizeYclosure_creation_free),Ynil);
  T15 = (P)YPpair(VARREF(Yast_linearizeYclosure_creation_index),T16);
  T18 = (P)YPpair(freeF1588,Ynil);
  T17 = (P)YPpair(indexF1590,T18);
  T14 = CALL3(1,VARREF(YPisa),VARREF(Yast_linearizeYLclosure_creationG),T15,T17);
  T12 = T14;
  T10 = T12;
  T8 = T10;
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_extractX_100) {
  P o_,form_,result_;
  P x_1334F1592;
  P primF1591;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T1 = CALL1(1,VARREF(YastYassignment_form),o_);
  primF1591 = T1;
  T3 = CALL1(1,VARREF(YastYfunction_body),primF1591);
  T2 = CALL3(1,VARREF(Yast_linearizeYextractX),T3,form_,result_);
  CALL2(1,VARREF(YastYfunction_body_setter),T2,primF1591);
  x_1334F1592 = result_;
  T6 = CALL1(1,VARREF(Yast_linearizeYprogram_definitions),x_1334F1592);
  T5 = CALL2(1,VARREF(YprotoScollectionsSlistYpush),T6,primF1591);
  T4 = CALL2(1,VARREF(Yast_linearizeYprogram_definitions_setter),T5,x_1334F1592);
  T9 = (P)YPpair(VARREF(YastYconstant_value),Ynil);
  T10 = (P)YPpair(YPfalse,Ynil);
  T8 = CALL3(1,VARREF(YPisa),VARREF(YastYLconstantG),T9,T10);
  T7 = CALL3(1,VARREF(Yast_linearizeYextractX),T8,form_,result_);
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_definitionX_101) {
  P form_,result_,x_;
  P x_1336F1595;
  P x_1335F1594;
  P new_indexF1593;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(form_, 0);
  ARG(result_, 1);
  ARG(x_, 2);
loop:
  T2 = CALL1(1,VARREF(Yast_linearizeYprogram_definitions),result_);
  T1 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),T2);
  new_indexF1593 = T1;
  x_1335F1594 = result_;
  T5 = CALL1(1,VARREF(Yast_linearizeYprogram_definitions),x_1335F1594);
  T4 = CALL2(1,VARREF(YprotoScollectionsSlistYpush),T5,x_);
  T3 = CALL2(1,VARREF(Yast_linearizeYprogram_definitions_setter),T4,x_1335F1594);
  x_1336F1595 = form_;
  T8 = CALL1(1,VARREF(Yast_linearizeYform_definitions),x_1336F1595);
  T7 = CALL2(1,VARREF(YprotoScollectionsSlistYpush),T8,x_);
  T6 = CALL2(1,VARREF(Yast_linearizeYform_definitions_setter),T7,x_1336F1595);
  T0 = new_indexF1593;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_split_program_102) {
  P o_,max_count_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(max_count_, 1);
loop:
  T0 = CALL1(1,VARREF(Ylst),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_inner_103) {
  P res_,es_,count_;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(res_, 0);
  ARG(es_, 1);
  ARG(count_, 2);
loop:
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),es_);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YmacrosYrevX),res_);
    T4 = CALL1(1,VARREF(YastYsequentialize),T5);
    T3 = CALL2(1,VARREF(YmacrosYpair),T4,FREEREF(0));
    T2 = CALL1(1,VARREF(YmacrosYrevX),T3);
    T0 = T2;
  } else {
    T7 = CALL2(1,VARREF(YprotoSmathYE),count_,FREEREF(1));
    if (T7 != YPfalse) {
      T11 = CALL1(1,VARREF(YmacrosYrevX),res_);
      T10 = CALL1(1,VARREF(YastYsequentialize),T11);
      T9 = CALL2(1,VARREF(YmacrosYpair),T10,FREEREF(0));
      T8 = CALL2(0,FREEREF(2),T9,es_);
      T6 = T8;
    } else {
      if (YPtrue != YPfalse) {
        T15 = CALL1(1,VARREF(Yhead),es_);
        T14 = CALL2(1,VARREF(YmacrosYpair),T15,res_);
        T16 = CALL1(1,VARREF(Ytail),es_);
        T17 = CALL2(1,VARREF(YprotoSmathYA),count_,YPint((P)1));
        a1 = T14;
        a2 = T16;
        a3 = T17;
        res_ = a1;
        es_ = a2;
        count_ = a3;
        goto loop;
        T12 = T13;
      } else {
        T12 = YPfalse;
      }
      T6 = T12;
    }
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_104) {
  P forms_,s_;
  P innerF1596;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(forms_, 0);
  ARG(s_, 1);
loop:
  T1 = FUNSHELL(1,fun_inner_103,4);
  innerF1596 = T1;
  FUNINIT(innerF1596, 4,forms_,FREEREF(0),FREEREF(1),innerF1596);
  T2 = CALL3(0,innerF1596,Ynil,s_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_split_program_105) {
  P o_,max_count_;
  P loopF1597;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(max_count_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_104,2);
  loopF1597 = T1;
  FUNINIT(loopF1597, 2,max_count_,loopF1597);
  T2 = CALL2(0,loopF1597,Ynil,o_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_106) {
  P calls_,defns_,i_,forms_;
  P callF1601;
  P defnF1600;
  P bindingF1599;
  P nameF1598;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(calls_, 0);
  ARG(defns_, 1);
  ARG(i_, 2);
  ARG(forms_, 3);
loop:
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),forms_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YmacrosYrevX),defns_);
    CALL2(1,VARREF(Yast_linearizeYprogram_definitions_setter),T2,FREEREF(0));
    T5 = (P)YPpair(VARREF(Yast_linearizeYform_definitions),Ynil);
    T4 = (P)YPpair(VARREF(Yast_linearizeYform_program),T5);
    T8 = CALL1(1,VARREF(YmacrosYrevX),calls_);
    T7 = CALL1(1,VARREF(YastYsequentialize),T8);
    T10 = CALL1(1,VARREF(YmacrosYrevX),defns_);
    T9 = (P)YPpair(T10,Ynil);
    T6 = (P)YPpair(T7,T9);
    T3 = CALL3(1,VARREF(YPisa),VARREF(Yast_linearizeYLtop_level_formG),T4,T6);
    CALL2(1,VARREF(Yast_linearizeYprogram_form_setter),T3,FREEREF(0));
    T0 = FREEREF(0);
  } else {
    T12 = CALL3(1,VARREF(YmacrosYmake_sym),LITREF(lit_101),i_,LITREF(lit_102));
    nameF1598 = T12;
    T14 = CALLN(1,VARREF(YastYast_define_binding),4,FREEREF(1),nameF1598,YPfalse,LITREF(lit_103));
    bindingF1599 = T14;
    T20 = (P)YPpair(VARREF(YastYfunction_body),Ynil);
    T19 = (P)YPpair(VARREF(YastYfunction_signature),T20);
    T18 = (P)YPpair(VARREF(YastYfunction_debug_name),T19);
    T17 = (P)YPpair(VARREF(YastYfunction_binding),T18);
    T23 = CALL2(1,VARREF(YastYobjectify_quotation),nameF1598,YPint((P)4));
    T25 = CALL2(1,VARREF(YastYobjectify_signature),Ynil,FREEREF(1));
    T27 = CALL1(1,VARREF(Yhead),forms_);
    T26 = (P)YPpair(T27,Ynil);
    T24 = (P)YPpair(T25,T26);
    T22 = (P)YPpair(T23,T24);
    T21 = (P)YPpair(bindingF1599,T22);
    T16 = CALL3(1,VARREF(YPisa),VARREF(YastYLast_primitiveG),T17,T21);
    defnF1600 = T16;
    T32 = (P)YPpair(VARREF(YastYapplication_tailQ),Ynil);
    T31 = (P)YPpair(VARREF(YastYapplication_arguments),T32);
    T30 = (P)YPpair(VARREF(YastYapplication_binding),T31);
    T35 = CALL1(1,VARREF(YprotoScollectionsScollectionYempty),VARREF(YastYLargumentsG));
    T36 = (P)YPpair(YPfalse,Ynil);
    T34 = (P)YPpair(T35,T36);
    T33 = (P)YPpair(bindingF1599,T34);
    T29 = CALL3(1,VARREF(YPisa),VARREF(YastYLpredefined_applicationG),T30,T33);
    callF1601 = T29;
    T38 = CALL2(1,VARREF(YmacrosYpair),callF1601,calls_);
    T39 = CALL2(1,VARREF(YmacrosYpair),defnF1600,defns_);
    T40 = CALL2(1,VARREF(YprotoSmathYA),i_,YPint((P)1));
    T41 = CALL1(1,VARREF(Ytail),forms_);
    a1 = T38;
    a2 = T39;
    a3 = T40;
    a4 = T41;
    calls_ = a1;
    defns_ = a2;
    i_ = a3;
    forms_ = a4;
    goto loop;
    T28 = T37;
    T15 = T28;
    T13 = T15;
    T11 = T13;
    T0 = T11;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closurize_mainX_107) {
  P o_,r_,max_count_;
  P loopF1604;
  P base_indexF1603;
  P formsF1602;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(max_count_, 2);
loop:
  T2 = CALL1(1,VARREF(Yast_linearizeYprogram_form),o_);
  T1 = CALL2(1,VARREF(Yast_linearizeYsplit_program),T2,max_count_);
  formsF1602 = T1;
  T5 = CALL1(1,VARREF(Yast_linearizeYprogram_definitions),o_);
  T4 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),T5);
  base_indexF1603 = T4;
  T7 = FUNSHELL(1,fun_loop_106,3);
  loopF1604 = T7;
  FUNINIT(loopF1604, 3,o_,r_,loopF1604);
  T9 = CALL1(1,VARREF(Yast_linearizeYprogram_definitions),o_);
  T8 = CALLN(0,loopF1604,4,Ynil,T9,YPint((P)0),formsF1602);
  T6 = T8;
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_108) {
  P def_;
  P T0;
  P a1;
LINK_STACK();
  ARG(def_, 0);
loop:
  T0 = CALL3(1,VARREF(Yast_linearizeYcollect_temporariesX),def_,def_,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gather_temporariesX_109) {
  P o_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = fun_108;
  T2 = CALL1(1,VARREF(Yast_linearizeYprogram_definitions),o_);
  T0 = CALL2(1,VARREF(YmacrosYmap),T1,T2);
  CALL2(1,VARREF(Yast_linearizeYprogram_definitions_setter),T0,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_collect_temporariesX_110) {
  P o_,flat_fun_,r_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T0 = CALLN(1,VARREF(Yast_linearizeYupdate_walkX),4,VARREF(Yast_linearizeYcollect_temporariesX),o_,flat_fun_,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_temporariesX_111) {
  P o_,flat_fun_,r_;
  P bF1606;
  P bindingF1605;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(YastYreference_binding),o_);
  bindingF1605 = T1;
  T3 = CALL2(1,VARREF(Yast_linearizeYassocq),bindingF1605,r_);
  bF1606 = T3;
  if (bF1606 != YPfalse) {
    T6 = (P)YPpair(VARREF(YastYreference_binding),Ynil);
    T8 = CALL1(1,VARREF(Yast_linearizeYassoc_value),bF1606);
    T7 = (P)YPpair(T8,Ynil);
    T5 = CALL3(1,VARREF(YPisa),VARREF(YastYLlocal_referenceG),T6,T7);
    T4 = T5;
  } else {
    T4 = o_;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_temporariesX_112) {
  P o_,flat_fun_,r_;
  P new_rF1608;
  P new_bindingsF1607;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(YastYfix_let_arguments),o_);
  T0 = CALL3(1,VARREF(Yast_linearizeYcollect_temporariesX),T1,flat_fun_,r_);
  CALL2(1,VARREF(YastYfix_let_arguments_setter),T0,o_);
  T4 = CALL1(1,VARREF(YastYfix_let_bindings),o_);
  T3 = CALL2(1,VARREF(YmacrosYmap),VARREF(Yast_linearizeYnew_renamed_binding),T4);
  new_bindingsF1607 = T3;
  T8 = CALL1(1,VARREF(YastYfix_let_bindings),o_);
  T7 = CALL3(1,VARREF(YprotoScollectionsScollectionYmap2),VARREF(Yast_linearizeYassoc),T8,new_bindingsF1607);
  T6 = CALL2(1,VARREF(YmacrosYcat),T7,r_);
  new_rF1608 = T6;
  CALL2(1,VARREF(Yast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF1607);
  CALL2(1,VARREF(YastYfix_let_bindings_setter),new_bindingsF1607,o_);
  T10 = CALL1(1,VARREF(YastYfix_let_body),o_);
  T9 = CALL3(1,VARREF(Yast_linearizeYcollect_temporariesX),T10,flat_fun_,new_rF1608);
  CALL2(1,VARREF(YastYfix_let_body_setter),T9,o_);
  T5 = o_;
  T2 = T5;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_collect_temporariesX_113) {
  P o_,flat_fun_,r_;
  P new_rF1610;
  P new_bindingsF1609;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T2 = CALL1(1,VARREF(YastYlocals_bindings),o_);
  T1 = CALL2(1,VARREF(YmacrosYmap),VARREF(Yast_linearizeYnew_renamed_binding),T2);
  new_bindingsF1609 = T1;
  T6 = CALL1(1,VARREF(YastYlocals_bindings),o_);
  T5 = CALL3(1,VARREF(YprotoScollectionsScollectionYmap2),VARREF(Yast_linearizeYassoc),T6,new_bindingsF1609);
  T4 = CALL2(1,VARREF(YmacrosYcat),T5,r_);
  new_rF1610 = T4;
  T8 = CALL3(1,VARREF(YruntimeYrcurry),VARREF(Yast_linearizeYcollect_temporariesX),flat_fun_,new_rF1610);
  T9 = CALL1(1,VARREF(YastYlocals_functions),o_);
  T7 = CALL2(1,VARREF(YmacrosYmap),T8,T9);
  CALL2(1,VARREF(YastYlocals_functions_setter),T7,o_);
  CALL2(1,VARREF(Yast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF1609);
  CALL2(1,VARREF(YastYlocals_bindings_setter),new_bindingsF1609,o_);
  T11 = CALL1(1,VARREF(YastYlocals_body),o_);
  T10 = CALL3(1,VARREF(Yast_linearizeYcollect_temporariesX),T11,flat_fun_,new_rF1610);
  CALL2(1,VARREF(YastYlocals_body_setter),T10,o_);
  T3 = o_;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_114) {
  P temps_,bindings_;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(temps_, 0);
  ARG(bindings_, 1);
loop:
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),bindings_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YastYfunction_temporaries_setter),temps_,FREEREF(0));
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yhead),bindings_);
    T4 = CALL2(1,VARREF(YprotoScollectionsScollectionYmemQ),temps_,T5);
    if (T4 != YPfalse) {
      T7 = CALL1(1,VARREF(Ytail),bindings_);
      a1 = temps_;
      a2 = T7;
      temps_ = a1;
      bindings_ = a2;
      goto loop;
      T3 = T6;
    } else {
      T10 = CALL1(1,VARREF(Yhead),bindings_);
      T9 = CALL2(1,VARREF(YmacrosYpair),T10,temps_);
      T11 = CALL1(1,VARREF(Ytail),bindings_);
      a1 = T9;
      a2 = T11;
      temps_ = a1;
      bindings_ = a2;
      goto loop;
      T3 = T8;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_temporary_variablesX_115) {
  P flat_fun_,new_bindings_;
  P adjoinF1611;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(flat_fun_, 0);
  ARG(new_bindings_, 1);
loop:
  T1 = FUNSHELL(1,fun_adjoin_114,2);
  adjoinF1611 = T1;
  FUNINIT(adjoinF1611, 2,flat_fun_,adjoinF1611);
  T3 = CALL1(1,VARREF(YastYfunction_temporaries),flat_fun_);
  T2 = CALL2(0,adjoinF1611,T3,new_bindings_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_index_116) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yslot_value),Ux_,VARREF(YastYbinding_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_index_setter_117) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yslot_value_setter),Uz_,Ux_,VARREF(YastYbinding_index));
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
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_new_renamed_binding_119) {
  P binding_;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T0 = CALL2(1,VARREF(YprotoSmathYA),VARREF(Yast_linearizeYTrenaming_bindings_counterT),YPint((P)1));
  VARSET(Yast_linearizeYTrenaming_bindings_counterT,T0);
  T5 = (P)YPpair(VARREF(YastYbinding_index),Ynil);
  T4 = (P)YPpair(VARREF(YastYbinding_dynamic_extentQ),T5);
  T3 = (P)YPpair(VARREF(YastYbinding_type),T4);
  T2 = (P)YPpair(VARREF(YastYbinding_name),T3);
  T7 = CALL1(1,VARREF(YastYbinding_name),binding_);
  T9 = CALL1(1,VARREF(YastYbinding_type),binding_);
  T11 = CALL1(1,VARREF(YastYbinding_dynamic_extentQ),binding_);
  T12 = (P)YPpair(VARREF(Yast_linearizeYTrenaming_bindings_counterT),Ynil);
  T10 = (P)YPpair(T11,T12);
  T8 = (P)YPpair(T9,T10);
  T6 = (P)YPpair(T7,T8);
  T1 = CALL3(1,VARREF(YPisa),VARREF(Yast_linearizeYLrenamed_local_bindingG),T2,T6);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_120) {
  P def_;
  P T0;
  P a1;
LINK_STACK();
  ARG(def_, 0);
loop:
  T0 = CALL3(1,VARREF(Yast_linearizeYcollect_registersX),def_,YPfalse,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_121) {
  P T2,T1,T0;
LINK_STACK();
loop:
  VARSET(Yast_linearizeYTregister_passiveQT,FREEREF(0));
  T1 = fun_120;
  T2 = CALL1(1,VARREF(Yast_linearizeYprogram_definitions),FREEREF(1));
  T0 = CALL2(1,VARREF(YprotoScollectionsScollectionYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_122) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(Yast_linearizeYTregister_passiveQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_register_allocateX_123) {
  P o_,register_passiveQ_;
  P x_1337F1612;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(register_passiveQ_, 1);
loop:
  x_1337F1612 = VARREF(Yast_linearizeYTregister_passiveQT);
  T1 = FUNFAB(fun_121,2,register_passiveQ_,o_);
  T2 = FUNFAB(fun_122,1,x_1337F1612);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_allocate_register_124) {
  P o_,flat_fun_,valQ_;
  P x_1338F1615;
  P tmpF1614;
  P tmpF1613;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  tmpF1613 = valQ_;
  if (tmpF1613 != YPfalse) {
    tmpF1614 = flat_fun_;
    if (tmpF1614 != YPfalse) {
      T6 = CALL1(1,VARREF(YastYprogram_register),o_);
      T5 = CALL1(1,VARREF(Ynot),T6);
      T4 = T5;
    } else {
      T4 = YPfalse;
    }
    T3 = T4;
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  if (T1 != YPfalse) {
    T8 = CALL1(1,VARREF(YastYfunction_registers),flat_fun_);
    T7 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),T8);
    CALL2(1,VARREF(YastYprogram_register_setter),T7,o_);
    x_1338F1615 = flat_fun_;
    T12 = CALL1(1,VARREF(YastYfunction_registers),x_1338F1615);
    T11 = CALL2(1,VARREF(YprotoScollectionsSlistYpush),T12,o_);
    T10 = CALL2(1,VARREF(YastYfunction_registers_setter),T11,x_1338F1615);
    T9 = T10;
    T0 = T9;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_125) {
  P o_,flat_fun_,valQ_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  CALL3(1,VARREF(Yast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T0 = CALLN(1,VARREF(Yast_linearizeYupdate_walkX),4,VARREF(Yast_linearizeYcollect_registersX),o_,flat_fun_,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_126) {
  P x_;
  P tmpF1617;
  P next_xF1616;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T3 = CALL1(1,VARREF(Ytail),x_);
    next_xF1616 = T3;
    T4 = CALL1(1,VARREF(Yhead),x_);
    tmpF1617 = FREEREF(2);
    if (tmpF1617 != YPfalse) {
      T7 = CALL1(1,VARREF(YmacrosYemptyQ),next_xF1616);
      T6 = T7;
    } else {
      T6 = YPfalse;
    }
    T5 = T6;
    CALL3(1,VARREF(Yast_linearizeYcollect_registersX),T4,FREEREF(1),T5);
    a1 = next_xF1616;
    x_ = a1;
    goto loop;
    T2 = T8;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_127) {
  P o_,flat_fun_,valQ_;
  P loopF1618;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_126,4);
  loopF1618 = T1;
  FUNINIT(loopF1618, 4,o_,flat_fun_,valQ_,loopF1618);
  T2 = CALL1(0,loopF1618,o_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_128) {
  P o_,flat_fun_,valQ_;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  if (VARREF(Yast_linearizeYTregister_passiveQT) != YPfalse) {
    T0 = CALL3(1,VARREF(Yast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  } else {
  }
  T1 = CALLN(1,VARREF(Yast_linearizeYupdate_walkX),4,VARREF(Yast_linearizeYcollect_registersX),o_,flat_fun_,YPtrue);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_129) {
  P def_;
  P T0;
  P a1;
LINK_STACK();
  ARG(def_, 0);
loop:
  T0 = CALL3(1,VARREF(Yast_linearizeYcollect_registersX),def_,FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_130) {
  P o_,flat_fun_,valQ_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  CALL3(1,VARREF(Yast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T0 = FUNFAB(fun_129,2,flat_fun_,valQ_);
  T1 = CALL1(1,VARREF(Yast_linearizeYform_definitions),o_);
  CALL2(1,VARREF(YprotoScollectionsScollectionYdo),T0,T1);
  T2 = CALL1(1,VARREF(Yast_linearizeYform_program),o_);
  CALL3(1,VARREF(Yast_linearizeYcollect_registersX),T2,flat_fun_,valQ_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_collect_registersX_131) {
  P o_,flat_fun_,valQ_;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  CALL3(1,VARREF(Yast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T0 = CALL1(1,VARREF(YastYfunction_signature),o_);
  CALL3(1,VARREF(Yast_linearizeYcollect_registersX),T0,flat_fun_,YPtrue);
  T1 = CALL3(1,VARREF(YruntimeYrcurry),VARREF(Yast_linearizeYcollect_registersX),flat_fun_,YPtrue);
  T2 = CALL1(1,VARREF(YastYfunction_data_refs),o_);
  CALL2(1,VARREF(YprotoScollectionsScollectionYdo),T1,T2);
  T3 = CALL1(1,VARREF(YastYfunction_debug_name),o_);
  CALL3(1,VARREF(Yast_linearizeYcollect_registersX),T3,o_,YPtrue);
  T4 = CALL1(1,VARREF(YastYfunction_body),o_);
  CALL3(1,VARREF(Yast_linearizeYcollect_registersX),T4,o_,YPtrue);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_collect_registersX_132) {
  P o_,flat_fun_,valQ_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  T0 = CALL1(1,VARREF(YastYfunction_body),o_);
  CALL3(1,VARREF(Yast_linearizeYcollect_registersX),T0,o_,YPtrue);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_ast_contains_funQ_133) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(YPtrue);
}

FUNCODEDEF(fun_walk_134) {
  P y_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(y_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),y_,VARREF(YastYLast_methodG));
  if (T1 != YPfalse) {
    T2 = CALL1(1,FREEREF(0),YPtrue);
    T0 = T2;
  } else {
    T3 = CALL2(1,VARREF(Yast_linearizeYast_walk),FREEREF(1),y_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_135) {
  P return_;
  P walkF1619;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T0 = FUNSHELL(0,fun_walk_134,2);
  walkF1619 = T0;
  FUNINIT(walkF1619, 2,return_,walkF1619);
  T1 = CALL2(1,VARREF(Yast_linearizeYast_walk),walkF1619,FREEREF(0));
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_ast_contains_funQ_136) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNFAB(fun_135,1,x_);
  T0 = with_exit(T1);
UNLINK_STACK();
  RET(T0);
}

P Yast_linearizeY___main_0___() {
  P T250,T249,T248,T247,T246,T245,T244,T243,T242,T241,T240,T239,T238,T237,T236,T235;
  P T234,T233,T232,T231,T230,T229,T228,T227,T226,T225,T224,T223,T222,T221,T220,T219;
  P T218,T217,T216,T215,T214,T213,T212,T211,T210,T209,T208,T207,T206,T205,T204,T203;
  P T202,T201,T200,T199,T198,T197,T196,T195,T194,T193,T192,T191,T190,T189,T188,T187;
  P T186,T185,T184,T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171;
  P T170,T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155;
  P T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139;
  P T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123;
  P T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107;
  P T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91;
  P T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75;
  P T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59;
  P T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"<assoc>");
  T1 = (P)YPpair(VARREF(YLanyG),Ynil);
  T0 = CALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(Yast_linearizeYLassocG,T0);
  lit_1 = YPPsym((P)"assoc-key");
  lit_2 = YPPsym((P)"_x");
  T2 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLassocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assoc_key_0 = YPmet(FUNCODEREF(fun_assoc_key_0),LITREF(lit_1),T2,ENVNUL,PNUL,YPfalse);
  T5 = BOUNDP(Yast_linearizeYassoc_key);
  if (T5 != YPfalse) {
    T4 = VARREF(Yast_linearizeYassoc_key);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_assoc_key_0;
  T3 = CALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(Yast_linearizeYassoc_key,T3);
  lit_3 = YPPsym((P)"assoc-key-setter");
  lit_4 = YPPsym((P)"_z");
  T7 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLassocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assoc_key_setter_1 = YPmet(FUNCODEREF(fun_assoc_key_setter_1),LITREF(lit_3),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(Yast_linearizeYassoc_key_setter);
  if (T10 != YPfalse) {
    T9 = VARREF(Yast_linearizeYassoc_key_setter);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_assoc_key_setter_1;
  T8 = CALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(Yast_linearizeYassoc_key_setter,T8);
  lit_5 = YPPsym((P)"x");
  T12 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T12,ENVNUL,PNUL,YPfalse);
  T13 = fun_2;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_linearizeYLassocG),VARREF(Yast_linearizeYassoc_key),VARREF(Yast_linearizeYassoc_key_setter),VARREF(YLanyG),T13);
  lit_6 = YPPsym((P)"assoc-value");
  T14 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLassocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assoc_value_3 = YPmet(FUNCODEREF(fun_assoc_value_3),LITREF(lit_6),T14,ENVNUL,PNUL,YPfalse);
  T17 = BOUNDP(Yast_linearizeYassoc_value);
  if (T17 != YPfalse) {
    T16 = VARREF(Yast_linearizeYassoc_value);
  } else {
    T16 = YPfalse;
  }
  T18 = fun_assoc_value_3;
  T15 = CALL2(1,VARREF(YPdefine_method),T16,T18);
  VARSET(Yast_linearizeYassoc_value,T15);
  lit_7 = YPPsym((P)"assoc-value-setter");
  T19 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLassocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assoc_value_setter_4 = YPmet(FUNCODEREF(fun_assoc_value_setter_4),LITREF(lit_7),T19,ENVNUL,PNUL,YPfalse);
  T22 = BOUNDP(Yast_linearizeYassoc_value_setter);
  if (T22 != YPfalse) {
    T21 = VARREF(Yast_linearizeYassoc_value_setter);
  } else {
    T21 = YPfalse;
  }
  T23 = fun_assoc_value_setter_4;
  T20 = CALL2(1,VARREF(YPdefine_method),T21,T23);
  VARSET(Yast_linearizeYassoc_value_setter,T20);
  T24 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T24,ENVNUL,PNUL,YPfalse);
  T25 = fun_5;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_linearizeYLassocG),VARREF(Yast_linearizeYassoc_value),VARREF(Yast_linearizeYassoc_value_setter),VARREF(YLanyG),T25);
  lit_8 = YPPsym((P)"assoc");
  lit_9 = YPPsym((P)"y");
  T26 = YPsig(YPPlist(2,LITREF(lit_5),LITREF(lit_9)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(Yast_linearizeYLassocG),Ynil);
  Yast_linearizeYassoc = YPmet(FUNCODEREF(Yast_linearizeYassoc),LITREF(lit_8),T26,ENVNUL,PNUL,YPfalse);
  T27 = Yast_linearizeYassoc;
  VARSET(Yast_linearizeYassoc,T27);
  lit_10 = YPPsym((P)"assocq");
  lit_11 = YPPsym((P)"l");
  T28 = YPsig(YPPlist(2,LITREF(lit_5),LITREF(lit_11)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assocq_7 = YPmet(FUNCODEREF(fun_assocq_7),LITREF(lit_10),T28,ENVNUL,PNUL,YPfalse);
  T31 = BOUNDP(Yast_linearizeYassocq);
  if (T31 != YPfalse) {
    T30 = VARREF(Yast_linearizeYassocq);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_assocq_7;
  T29 = CALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(Yast_linearizeYassocq,T29);
  lit_12 = YPPsym((P)"update-walk!");
  lit_13 = YPPsym((P)"g");
  lit_14 = YPPsym((P)"o");
  lit_15 = YPPsym((P)"args");
  lit_16 = YPPsym((P)"x-1329");
  lit_17 = YPPsym((P)"x-1327");
  T34 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1329_8 = YPmet(FUNCODEREF(fun_x_1329_8),LITREF(lit_16),T34,ENVNUL,PNUL,YPfalse);
  T33 = YPsig(YPPlist(3,LITREF(lit_13),LITREF(lit_14),LITREF(lit_15)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_update_walkX_9 = YPmet(FUNCODEREF(fun_update_walkX_9),LITREF(lit_12),T33,ENVNUL,PNUL,YPfalse);
  T37 = BOUNDP(Yast_linearizeYupdate_walkX);
  if (T37 != YPfalse) {
    T36 = VARREF(Yast_linearizeYupdate_walkX);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_update_walkX_9;
  T35 = CALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(Yast_linearizeYupdate_walkX,T35);
  lit_18 = YPPsym((P)"ast-walk");
  lit_19 = YPPsym((P)"x-1332");
  lit_20 = YPPsym((P)"x-1330");
  T40 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1332_10 = YPmet(FUNCODEREF(fun_x_1332_10),LITREF(lit_19),T40,ENVNUL,PNUL,YPfalse);
  T39 = YPsig(YPPlist(3,LITREF(lit_13),LITREF(lit_14),LITREF(lit_15)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_walk_11 = YPmet(FUNCODEREF(fun_ast_walk_11),LITREF(lit_18),T39,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(Yast_linearizeYast_walk);
  if (T43 != YPfalse) {
    T42 = VARREF(Yast_linearizeYast_walk);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_ast_walk_11;
  T41 = CALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(Yast_linearizeYast_walk,T41);
  lit_21 = YPPsym((P)"<box-read>");
  T46 = (P)YPpair(VARREF(YastYLcomputed_programG),Ynil);
  T45 = CALL2(1,VARREF(Yfab_class),LITREF(lit_21),T46);
  VARSET(Yast_linearizeYLbox_readG,T45);
  lit_22 = YPPsym((P)"box-reference");
  T47 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLbox_readG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_12 = YPmet(FUNCODEREF(fun_box_reference_12),LITREF(lit_22),T47,ENVNUL,PNUL,YPfalse);
  T50 = BOUNDP(Yast_linearizeYbox_reference);
  if (T50 != YPfalse) {
    T49 = VARREF(Yast_linearizeYbox_reference);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_box_reference_12;
  T48 = CALL2(1,VARREF(YPdefine_method),T49,T51);
  VARSET(Yast_linearizeYbox_reference,T48);
  lit_23 = YPPsym((P)"box-reference-setter");
  T52 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLbox_readG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_13 = YPmet(FUNCODEREF(fun_box_reference_setter_13),LITREF(lit_23),T52,ENVNUL,PNUL,YPfalse);
  T55 = BOUNDP(Yast_linearizeYbox_reference_setter);
  if (T55 != YPfalse) {
    T54 = VARREF(Yast_linearizeYbox_reference_setter);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_box_reference_setter_13;
  T53 = CALL2(1,VARREF(YPdefine_method),T54,T56);
  VARSET(Yast_linearizeYbox_reference_setter,T53);
  T57 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_14 = YPmet(FUNCODEREF(fun_14),YPfalse,T57,ENVNUL,PNUL,YPfalse);
  T58 = fun_14;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_linearizeYLbox_readG),VARREF(Yast_linearizeYbox_reference),VARREF(Yast_linearizeYbox_reference_setter),VARREF(YLanyG),T58);
  lit_24 = YPPsym((P)"<box-write>");
  T60 = (P)YPpair(VARREF(YastYLcomputed_programG),Ynil);
  T59 = CALL2(1,VARREF(Yfab_class),LITREF(lit_24),T60);
  VARSET(Yast_linearizeYLbox_writeG,T59);
  T61 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLbox_writeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_15 = YPmet(FUNCODEREF(fun_box_reference_15),LITREF(lit_22),T61,ENVNUL,PNUL,YPfalse);
  T64 = BOUNDP(Yast_linearizeYbox_reference);
  if (T64 != YPfalse) {
    T63 = VARREF(Yast_linearizeYbox_reference);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_box_reference_15;
  T62 = CALL2(1,VARREF(YPdefine_method),T63,T65);
  VARSET(Yast_linearizeYbox_reference,T62);
  T66 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLbox_writeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_16 = YPmet(FUNCODEREF(fun_box_reference_setter_16),LITREF(lit_23),T66,ENVNUL,PNUL,YPfalse);
  T69 = BOUNDP(Yast_linearizeYbox_reference_setter);
  if (T69 != YPfalse) {
    T68 = VARREF(Yast_linearizeYbox_reference_setter);
  } else {
    T68 = YPfalse;
  }
  T70 = fun_box_reference_setter_16;
  T67 = CALL2(1,VARREF(YPdefine_method),T68,T70);
  VARSET(Yast_linearizeYbox_reference_setter,T67);
  T71 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T71,ENVNUL,PNUL,YPfalse);
  T72 = fun_17;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_linearizeYLbox_writeG),VARREF(Yast_linearizeYbox_reference),VARREF(Yast_linearizeYbox_reference_setter),VARREF(YLanyG),T72);
  lit_25 = YPPsym((P)"box-form");
  T73 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLbox_writeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_form_18 = YPmet(FUNCODEREF(fun_box_form_18),LITREF(lit_25),T73,ENVNUL,PNUL,YPfalse);
  T76 = BOUNDP(Yast_linearizeYbox_form);
  if (T76 != YPfalse) {
    T75 = VARREF(Yast_linearizeYbox_form);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_box_form_18;
  T74 = CALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(Yast_linearizeYbox_form,T74);
  lit_26 = YPPsym((P)"box-form-setter");
  T78 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLbox_writeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_form_setter_19 = YPmet(FUNCODEREF(fun_box_form_setter_19),LITREF(lit_26),T78,ENVNUL,PNUL,YPfalse);
  T81 = BOUNDP(Yast_linearizeYbox_form_setter);
  if (T81 != YPfalse) {
    T80 = VARREF(Yast_linearizeYbox_form_setter);
  } else {
    T80 = YPfalse;
  }
  T82 = fun_box_form_setter_19;
  T79 = CALL2(1,VARREF(YPdefine_method),T80,T82);
  VARSET(Yast_linearizeYbox_form_setter,T79);
  T83 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_20 = YPmet(FUNCODEREF(fun_20),YPfalse,T83,ENVNUL,PNUL,YPfalse);
  T84 = fun_20;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_linearizeYLbox_writeG),VARREF(Yast_linearizeYbox_form),VARREF(Yast_linearizeYbox_form_setter),VARREF(YLanyG),T84);
  lit_27 = YPPsym((P)"<box-creation>");
  T86 = (P)YPpair(VARREF(YastYLcomputed_programG),Ynil);
  T85 = CALL2(1,VARREF(Yfab_class),LITREF(lit_27),T86);
  VARSET(Yast_linearizeYLbox_creationG,T85);
  T87 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLbox_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_21 = YPmet(FUNCODEREF(fun_box_reference_21),LITREF(lit_22),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(Yast_linearizeYbox_reference);
  if (T90 != YPfalse) {
    T89 = VARREF(Yast_linearizeYbox_reference);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_box_reference_21;
  T88 = CALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(Yast_linearizeYbox_reference,T88);
  T92 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLbox_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_22 = YPmet(FUNCODEREF(fun_box_reference_setter_22),LITREF(lit_23),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(Yast_linearizeYbox_reference_setter);
  if (T95 != YPfalse) {
    T94 = VARREF(Yast_linearizeYbox_reference_setter);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_box_reference_setter_22;
  T93 = CALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(Yast_linearizeYbox_reference_setter,T93);
  T97 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T97,ENVNUL,PNUL,YPfalse);
  T98 = fun_23;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_linearizeYLbox_creationG),VARREF(Yast_linearizeYbox_reference),VARREF(Yast_linearizeYbox_reference_setter),VARREF(YLanyG),T98);
  lit_28 = YPPsym((P)"insert-box!");
  T99 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_24 = YPmet(FUNCODEREF(fun_insert_boxX_24),LITREF(lit_28),T99,ENVNUL,PNUL,YPfalse);
  T102 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T102 != YPfalse) {
    T101 = VARREF(Yast_linearizeYinsert_boxX);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_insert_boxX_24;
  T100 = CALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(Yast_linearizeYinsert_boxX,T100);
  T104 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_25 = YPmet(FUNCODEREF(fun_insert_boxX_25),LITREF(lit_28),T104,ENVNUL,PNUL,YPfalse);
  T107 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T107 != YPfalse) {
    T106 = VARREF(Yast_linearizeYinsert_boxX);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_insert_boxX_25;
  T105 = CALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(Yast_linearizeYinsert_boxX,T105);
  T109 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLlocal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_26 = YPmet(FUNCODEREF(fun_insert_boxX_26),LITREF(lit_28),T109,ENVNUL,PNUL,YPfalse);
  T112 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T112 != YPfalse) {
    T111 = VARREF(Yast_linearizeYinsert_boxX);
  } else {
    T111 = YPfalse;
  }
  T113 = fun_insert_boxX_26;
  T110 = CALL2(1,VARREF(YPdefine_method),T111,T113);
  VARSET(Yast_linearizeYinsert_boxX,T110);
  T114 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_27 = YPmet(FUNCODEREF(fun_insert_boxX_27),LITREF(lit_28),T114,ENVNUL,PNUL,YPfalse);
  T117 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T117 != YPfalse) {
    T116 = VARREF(Yast_linearizeYinsert_boxX);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_insert_boxX_27;
  T115 = CALL2(1,VARREF(YPdefine_method),T116,T118);
  VARSET(Yast_linearizeYinsert_boxX,T115);
  T119 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_28 = YPmet(FUNCODEREF(fun_insert_boxX_28),LITREF(lit_28),T119,ENVNUL,PNUL,YPfalse);
  T122 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T122 != YPfalse) {
    T121 = VARREF(Yast_linearizeYinsert_boxX);
  } else {
    T121 = YPfalse;
  }
  T123 = fun_insert_boxX_28;
  T120 = CALL2(1,VARREF(YPdefine_method),T121,T123);
  VARSET(Yast_linearizeYinsert_boxX,T120);
  T124 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_29 = YPmet(FUNCODEREF(fun_insert_boxX_29),LITREF(lit_28),T124,ENVNUL,PNUL,YPfalse);
  T127 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T127 != YPfalse) {
    T126 = VARREF(Yast_linearizeYinsert_boxX);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_insert_boxX_29;
  T125 = CALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(Yast_linearizeYinsert_boxX,T125);
  lit_29 = YPPsym((P)"boxify-mutable-bindings");
  lit_30 = YPPsym((P)"form");
  lit_31 = YPPsym((P)"bindings");
  lit_32 = YPPsym((P)"loop");
  lit_33 = YPPsym((P)"res");
  T130 = YPsig(YPPlist(2,LITREF(lit_33),LITREF(lit_31)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_30 = YPmet(FUNCODEREF(fun_loop_30),LITREF(lit_32),T130,ENVNUL,PNUL,YPfalse);
  T129 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_31)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_boxify_mutable_bindings_31 = YPmet(FUNCODEREF(fun_boxify_mutable_bindings_31),LITREF(lit_29),T129,ENVNUL,PNUL,YPfalse);
  T133 = BOUNDP(Yast_linearizeYboxify_mutable_bindings);
  if (T133 != YPfalse) {
    T132 = VARREF(Yast_linearizeYboxify_mutable_bindings);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_boxify_mutable_bindings_31;
  T131 = CALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(Yast_linearizeYboxify_mutable_bindings,T131);
  lit_34 = YPPsym((P)"do-do-call-references!");
  T135 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_do_call_referencesX_32 = YPmet(FUNCODEREF(fun_do_do_call_referencesX_32),LITREF(lit_34),T135,ENVNUL,PNUL,YPfalse);
  T138 = BOUNDP(Yast_linearizeYdo_do_call_referencesX);
  if (T138 != YPfalse) {
    T137 = VARREF(Yast_linearizeYdo_do_call_referencesX);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_do_do_call_referencesX_32;
  T136 = CALL2(1,VARREF(YPdefine_method),T137,T139);
  VARSET(Yast_linearizeYdo_do_call_referencesX,T136);
  lit_35 = YPPsym((P)"do-call-references!");
  T140 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_call_referencesX_33 = YPmet(FUNCODEREF(fun_do_call_referencesX_33),LITREF(lit_35),T140,ENVNUL,PNUL,YPfalse);
  T143 = BOUNDP(Yast_linearizeYdo_call_referencesX);
  if (T143 != YPfalse) {
    T142 = VARREF(Yast_linearizeYdo_call_referencesX);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_do_call_referencesX_33;
  T141 = CALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(Yast_linearizeYdo_call_referencesX,T141);
  T145 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_call_referencesX_34 = YPmet(FUNCODEREF(fun_do_call_referencesX_34),LITREF(lit_35),T145,ENVNUL,PNUL,YPfalse);
  T148 = BOUNDP(Yast_linearizeYdo_call_referencesX);
  if (T148 != YPfalse) {
    T147 = VARREF(Yast_linearizeYdo_call_referencesX);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_do_call_referencesX_34;
  T146 = CALL2(1,VARREF(YPdefine_method),T147,T149);
  VARSET(Yast_linearizeYdo_call_referencesX,T146);
  lit_36 = YPPsym((P)"analyze-call-references");
  T150 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_analyze_call_references_35 = YPmet(FUNCODEREF(fun_analyze_call_references_35),LITREF(lit_36),T150,ENVNUL,PNUL,YPfalse);
  T153 = BOUNDP(Yast_linearizeYanalyze_call_references);
  if (T153 != YPfalse) {
    T152 = VARREF(Yast_linearizeYanalyze_call_references);
  } else {
    T152 = YPfalse;
  }
  T154 = fun_analyze_call_references_35;
  T151 = CALL2(1,VARREF(YPdefine_method),T152,T154);
  VARSET(Yast_linearizeYanalyze_call_references,T151);
  lit_37 = YPPsym((P)"do-do-dynamic-extent!");
  T155 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_do_dynamic_extentX_36 = YPmet(FUNCODEREF(fun_do_do_dynamic_extentX_36),LITREF(lit_37),T155,ENVNUL,PNUL,YPfalse);
  T158 = BOUNDP(Yast_linearizeYdo_do_dynamic_extentX);
  if (T158 != YPfalse) {
    T157 = VARREF(Yast_linearizeYdo_do_dynamic_extentX);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_do_do_dynamic_extentX_36;
  T156 = CALL2(1,VARREF(YPdefine_method),T157,T159);
  VARSET(Yast_linearizeYdo_do_dynamic_extentX,T156);
  lit_38 = YPPsym((P)"do-dynamic-extent!");
  T160 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_dynamic_extentX_37 = YPmet(FUNCODEREF(fun_do_dynamic_extentX_37),LITREF(lit_38),T160,ENVNUL,PNUL,YPfalse);
  T163 = BOUNDP(Yast_linearizeYdo_dynamic_extentX);
  if (T163 != YPfalse) {
    T162 = VARREF(Yast_linearizeYdo_dynamic_extentX);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_do_dynamic_extentX_37;
  T161 = CALL2(1,VARREF(YPdefine_method),T162,T164);
  VARSET(Yast_linearizeYdo_dynamic_extentX,T161);
  T165 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_dynamic_extentX_38 = YPmet(FUNCODEREF(fun_do_dynamic_extentX_38),LITREF(lit_38),T165,ENVNUL,PNUL,YPfalse);
  T168 = BOUNDP(Yast_linearizeYdo_dynamic_extentX);
  if (T168 != YPfalse) {
    T167 = VARREF(Yast_linearizeYdo_dynamic_extentX);
  } else {
    T167 = YPfalse;
  }
  T169 = fun_do_dynamic_extentX_38;
  T166 = CALL2(1,VARREF(YPdefine_method),T167,T169);
  VARSET(Yast_linearizeYdo_dynamic_extentX,T166);
  lit_39 = YPPsym((P)"analyze-dynamic-extent");
  T170 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_analyze_dynamic_extent_39 = YPmet(FUNCODEREF(fun_analyze_dynamic_extent_39),LITREF(lit_39),T170,ENVNUL,PNUL,YPfalse);
  T173 = BOUNDP(Yast_linearizeYanalyze_dynamic_extent);
  if (T173 != YPfalse) {
    T172 = VARREF(Yast_linearizeYanalyze_dynamic_extent);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_analyze_dynamic_extent_39;
  T171 = CALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(Yast_linearizeYanalyze_dynamic_extent,T171);
  lit_40 = YPPsym((P)"do-do-call-upgrades!");
  T175 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_do_call_upgradesX_40 = YPmet(FUNCODEREF(fun_do_do_call_upgradesX_40),LITREF(lit_40),T175,ENVNUL,PNUL,YPfalse);
  T178 = BOUNDP(Yast_linearizeYdo_do_call_upgradesX);
  if (T178 != YPfalse) {
    T177 = VARREF(Yast_linearizeYdo_do_call_upgradesX);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_do_do_call_upgradesX_40;
  T176 = CALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(Yast_linearizeYdo_do_call_upgradesX,T176);
  lit_41 = YPPsym((P)"do-call-upgrades!");
  T180 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_call_upgradesX_41 = YPmet(FUNCODEREF(fun_do_call_upgradesX_41),LITREF(lit_41),T180,ENVNUL,PNUL,YPfalse);
  T183 = BOUNDP(Yast_linearizeYdo_call_upgradesX);
  if (T183 != YPfalse) {
    T182 = VARREF(Yast_linearizeYdo_call_upgradesX);
  } else {
    T182 = YPfalse;
  }
  T184 = fun_do_call_upgradesX_41;
  T181 = CALL2(1,VARREF(YPdefine_method),T182,T184);
  VARSET(Yast_linearizeYdo_call_upgradesX,T181);
  lit_42 = YPPsym((P)"unconstrained-type?");
  lit_43 = YPPsym((P)"b");
  lit_44 = YPPsym((P)"boot");
  lit_45 = YPPsym((P)"<any>");
  T185 = YPsig(YPPlist(1,LITREF(lit_43)),YPPlist(1,VARREF(YastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_42 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_42),LITREF(lit_42),T185,ENVNUL,PNUL,YPfalse);
  T188 = BOUNDP(Yast_linearizeYunconstrained_typeQ);
  if (T188 != YPfalse) {
    T187 = VARREF(Yast_linearizeYunconstrained_typeQ);
  } else {
    T187 = YPfalse;
  }
  T189 = fun_unconstrained_typeQ_42;
  T186 = CALL2(1,VARREF(YPdefine_method),T187,T189);
  VARSET(Yast_linearizeYunconstrained_typeQ,T186);
  T190 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLmodule_binding_referenceG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_43 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_43),LITREF(lit_42),T190,ENVNUL,PNUL,YPfalse);
  T193 = BOUNDP(Yast_linearizeYunconstrained_typeQ);
  if (T193 != YPfalse) {
    T192 = VARREF(Yast_linearizeYunconstrained_typeQ);
  } else {
    T192 = YPfalse;
  }
  T194 = fun_unconstrained_typeQ_43;
  T191 = CALL2(1,VARREF(YPdefine_method),T192,T194);
  VARSET(Yast_linearizeYunconstrained_typeQ,T191);
  T195 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_call_upgradesX_44 = YPmet(FUNCODEREF(fun_do_call_upgradesX_44),LITREF(lit_41),T195,ENVNUL,PNUL,YPfalse);
  T198 = BOUNDP(Yast_linearizeYdo_call_upgradesX);
  if (T198 != YPfalse) {
    T197 = VARREF(Yast_linearizeYdo_call_upgradesX);
  } else {
    T197 = YPfalse;
  }
  T199 = fun_do_call_upgradesX_44;
  T196 = CALL2(1,VARREF(YPdefine_method),T197,T199);
  VARSET(Yast_linearizeYdo_call_upgradesX,T196);
  lit_46 = YPPsym((P)"analyze-calls");
  T200 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_analyze_calls_45 = YPmet(FUNCODEREF(fun_analyze_calls_45),LITREF(lit_46),T200,ENVNUL,PNUL,YPfalse);
  T203 = BOUNDP(Yast_linearizeYanalyze_calls);
  if (T203 != YPfalse) {
    T202 = VARREF(Yast_linearizeYanalyze_calls);
  } else {
    T202 = YPfalse;
  }
  T204 = fun_analyze_calls_45;
  T201 = CALL2(1,VARREF(YPdefine_method),T202,T204);
  VARSET(Yast_linearizeYanalyze_calls,T201);
  lit_47 = YPPsym((P)"<free-reference>");
  T206 = (P)YPpair(VARREF(YastYLreal_referenceG),Ynil);
  T205 = CALL2(1,VARREF(Yfab_class),LITREF(lit_47),T206);
  VARSET(Yast_linearizeYLfree_referenceG,T205);
  lit_48 = YPPsym((P)"reference-offset");
  T207 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLfree_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_offset_46 = YPmet(FUNCODEREF(fun_reference_offset_46),LITREF(lit_48),T207,ENVNUL,PNUL,YPfalse);
  T210 = BOUNDP(Yast_linearizeYreference_offset);
  if (T210 != YPfalse) {
    T209 = VARREF(Yast_linearizeYreference_offset);
  } else {
    T209 = YPfalse;
  }
  T211 = fun_reference_offset_46;
  T208 = CALL2(1,VARREF(YPdefine_method),T209,T211);
  VARSET(Yast_linearizeYreference_offset,T208);
  lit_49 = YPPsym((P)"reference-offset-setter");
  T213 = CALL1(1,VARREF(YprotoStypesYfalse_or),VARREF(YLintG));
  T212 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,T213,VARREF(Yast_linearizeYLfree_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_offset_setter_47 = YPmet(FUNCODEREF(fun_reference_offset_setter_47),LITREF(lit_49),T212,ENVNUL,PNUL,YPfalse);
  T216 = BOUNDP(Yast_linearizeYreference_offset_setter);
  if (T216 != YPfalse) {
    T215 = VARREF(Yast_linearizeYreference_offset_setter);
  } else {
    T215 = YPfalse;
  }
  T217 = fun_reference_offset_setter_47;
  T214 = CALL2(1,VARREF(YPdefine_method),T215,T217);
  VARSET(Yast_linearizeYreference_offset_setter,T214);
  T218 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T218,ENVNUL,PNUL,YPfalse);
  T219 = CALL1(1,VARREF(YprotoStypesYfalse_or),VARREF(YLintG));
  T220 = fun_48;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_linearizeYLfree_referenceG),VARREF(Yast_linearizeYreference_offset),VARREF(Yast_linearizeYreference_offset_setter),T219,T220);
  lit_50 = YPPsym((P)"reference-self?");
  T221 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLfree_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_selfQ_49 = YPmet(FUNCODEREF(fun_reference_selfQ_49),LITREF(lit_50),T221,ENVNUL,PNUL,YPfalse);
  T224 = BOUNDP(Yast_linearizeYreference_selfQ);
  if (T224 != YPfalse) {
    T223 = VARREF(Yast_linearizeYreference_selfQ);
  } else {
    T223 = YPfalse;
  }
  T225 = fun_reference_selfQ_49;
  T222 = CALL2(1,VARREF(YPdefine_method),T223,T225);
  VARSET(Yast_linearizeYreference_selfQ,T222);
  lit_51 = YPPsym((P)"reference-self?-setter");
  T226 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLlogG),VARREF(Yast_linearizeYLfree_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_selfQ_setter_50 = YPmet(FUNCODEREF(fun_reference_selfQ_setter_50),LITREF(lit_51),T226,ENVNUL,PNUL,YPfalse);
  T229 = BOUNDP(Yast_linearizeYreference_selfQ_setter);
  if (T229 != YPfalse) {
    T228 = VARREF(Yast_linearizeYreference_selfQ_setter);
  } else {
    T228 = YPfalse;
  }
  T230 = fun_reference_selfQ_setter_50;
  T227 = CALL2(1,VARREF(YPdefine_method),T228,T230);
  VARSET(Yast_linearizeYreference_selfQ_setter,T227);
  T231 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T231,ENVNUL,PNUL,YPfalse);
  T232 = fun_51;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_linearizeYLfree_referenceG),VARREF(Yast_linearizeYreference_selfQ),VARREF(Yast_linearizeYreference_selfQ_setter),VARREF(YLlogG),T232);
  lit_52 = YPPsym((P)"lift!");
  T233 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_liftX_52 = YPmet(FUNCODEREF(fun_liftX_52),LITREF(lit_52),T233,ENVNUL,PNUL,YPfalse);
  T236 = BOUNDP(Yast_linearizeYliftX);
  if (T236 != YPfalse) {
    T235 = VARREF(Yast_linearizeYliftX);
  } else {
    T235 = YPfalse;
  }
  T237 = fun_liftX_52;
  T234 = CALL2(1,VARREF(YPdefine_method),T235,T237);
  VARSET(Yast_linearizeYliftX,T234);
  lit_53 = YPPsym((P)"lift-procedures!");
  lit_54 = YPPsym((P)"flat-fun");
  T238 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(YastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_53 = YPmet(FUNCODEREF(fun_lift_proceduresX_53),LITREF(lit_53),T238,ENVNUL,PNUL,YPfalse);
  T241 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T241 != YPfalse) {
    T240 = VARREF(Yast_linearizeYlift_proceduresX);
  } else {
    T240 = YPfalse;
  }
  T242 = fun_lift_proceduresX_53;
  T239 = CALL2(1,VARREF(YPdefine_method),T240,T242);
  VARSET(Yast_linearizeYlift_proceduresX,T239);
  T245 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(YastYLlocal_referenceG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T244 = fun_lift_proceduresX_54 = YPmet(FUNCODEREF(fun_lift_proceduresX_54),LITREF(lit_53),T245,ENVNUL,PNUL,YPfalse);
  T249 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T249 != YPfalse) {
    T248 = VARREF(Yast_linearizeYlift_proceduresX);
  } else {
    T248 = YPfalse;
  }
  T250 = fun_lift_proceduresX_54;
  T247 = CALL2(1,VARREF(YPdefine_method),T248,T250);
  T246 = VARSET(Yast_linearizeYlift_proceduresX,T247);
  T243 = T246;
  return T243;
}

P Yast_linearizeY___main_1___() {
  P T291,T290,T289,T288,T287,T286,T285,T284,T283,T282,T281,T280,T279,T278,T277,T276;
  P T275,T274,T273,T272,T271,T270,T269,T268,T267,T266,T265,T264,T263,T262,T261,T260;
  P T259,T258,T257,T256,T255,T254,T253,T252,T251,T250,T249,T248,T247,T246,T245,T244;
  P T243,T242,T241,T240,T239,T238,T237,T236,T235,T234,T233,T232,T231,T230,T229,T228;
  P T227,T226,T225,T224,T223,T222,T221,T220,T219,T218,T217,T216,T215,T214,T213,T212;
  P T211,T210,T209,T208,T207,T206,T205,T204,T203,T202,T201,T200,T199,T198,T197,T196;
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
  lit_55 = YPPsym((P)"adjoin-free-binding!");
  lit_56 = YPPsym((P)"ref");
  lit_57 = YPPsym((P)"check");
  lit_58 = YPPsym((P)"i");
  lit_59 = YPPsym((P)"free*");
  lit_60 = YPPsym((P)"add");
  T2 = YPsig(YPPlist(1,LITREF(lit_59)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_add_55 = YPmet(FUNCODEREF(fun_add_55),LITREF(lit_60),T2,ENVNUL,PNUL,YPfalse);
  T1 = YPsig(YPPlist(2,LITREF(lit_58),LITREF(lit_59)),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_check_56 = YPmet(FUNCODEREF(fun_check_56),LITREF(lit_57),T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_56)),YPPlist(2,VARREF(YastYLast_methodG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_adjoin_free_bindingX_57 = YPmet(FUNCODEREF(fun_adjoin_free_bindingX_57),LITREF(lit_55),T0,ENVNUL,PNUL,YPfalse);
  T5 = BOUNDP(Yast_linearizeYadjoin_free_bindingX);
  if (T5 != YPfalse) {
    T4 = VARREF(Yast_linearizeYadjoin_free_bindingX);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_adjoin_free_bindingX_57;
  T3 = CALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(Yast_linearizeYadjoin_free_bindingX,T3);
  T7 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(YastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_58 = YPmet(FUNCODEREF(fun_lift_proceduresX_58),LITREF(lit_53),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T10 != YPfalse) {
    T9 = VARREF(Yast_linearizeYlift_proceduresX);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_lift_proceduresX_58;
  T8 = CALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(Yast_linearizeYlift_proceduresX,T8);
  T12 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(YastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_59 = YPmet(FUNCODEREF(fun_lift_proceduresX_59),LITREF(lit_53),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T15 != YPfalse) {
    T14 = VARREF(Yast_linearizeYlift_proceduresX);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_lift_proceduresX_59;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(Yast_linearizeYlift_proceduresX,T13);
  T17 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(YastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_60 = YPmet(FUNCODEREF(fun_lift_proceduresX_60),LITREF(lit_53),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T20 != YPfalse) {
    T19 = VARREF(Yast_linearizeYlift_proceduresX);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_lift_proceduresX_60;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(Yast_linearizeYlift_proceduresX,T18);
  T22 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(YastYLast_genericG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_61 = YPmet(FUNCODEREF(fun_lift_proceduresX_61),LITREF(lit_53),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T25 != YPfalse) {
    T24 = VARREF(Yast_linearizeYlift_proceduresX);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_lift_proceduresX_61;
  T23 = CALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(Yast_linearizeYlift_proceduresX,T23);
  T27 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(YastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_62 = YPmet(FUNCODEREF(fun_lift_proceduresX_62),LITREF(lit_53),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T30 != YPfalse) {
    T29 = VARREF(Yast_linearizeYlift_proceduresX);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_lift_proceduresX_62;
  T28 = CALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(Yast_linearizeYlift_proceduresX,T28);
  lit_61 = YPPsym((P)"<flattened-program>");
  T33 = (P)YPpair(VARREF(YastYLcomputed_programG),Ynil);
  T32 = CALL2(1,VARREF(Yfab_class),LITREF(lit_61),T33);
  VARSET(Yast_linearizeYLflattened_programG,T32);
  lit_62 = YPPsym((P)"program-form");
  T34 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_form_63 = YPmet(FUNCODEREF(fun_program_form_63),LITREF(lit_62),T34,ENVNUL,PNUL,YPfalse);
  T37 = BOUNDP(Yast_linearizeYprogram_form);
  if (T37 != YPfalse) {
    T36 = VARREF(Yast_linearizeYprogram_form);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_program_form_63;
  T35 = CALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(Yast_linearizeYprogram_form,T35);
  lit_63 = YPPsym((P)"program-form-setter");
  T40 = CALL1(1,VARREF(YprotoStypesYfalse_or),VARREF(YastYLprogramG));
  T39 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,T40,VARREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_form_setter_64 = YPmet(FUNCODEREF(fun_program_form_setter_64),LITREF(lit_63),T39,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(Yast_linearizeYprogram_form_setter);
  if (T43 != YPfalse) {
    T42 = VARREF(Yast_linearizeYprogram_form_setter);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_program_form_setter_64;
  T41 = CALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(Yast_linearizeYprogram_form_setter,T41);
  T45 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T45,ENVNUL,PNUL,YPfalse);
  T46 = CALL1(1,VARREF(YprotoStypesYfalse_or),VARREF(YastYLprogramG));
  T47 = fun_65;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_linearizeYLflattened_programG),VARREF(Yast_linearizeYprogram_form),VARREF(Yast_linearizeYprogram_form_setter),T46,T47);
  lit_64 = YPPsym((P)"program-quotations");
  T48 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_quotations_66 = YPmet(FUNCODEREF(fun_program_quotations_66),LITREF(lit_64),T48,ENVNUL,PNUL,YPfalse);
  T51 = BOUNDP(Yast_linearizeYprogram_quotations);
  if (T51 != YPfalse) {
    T50 = VARREF(Yast_linearizeYprogram_quotations);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_program_quotations_66;
  T49 = CALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(Yast_linearizeYprogram_quotations,T49);
  lit_65 = YPPsym((P)"program-quotations-setter");
  T53 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_quotations_setter_67 = YPmet(FUNCODEREF(fun_program_quotations_setter_67),LITREF(lit_65),T53,ENVNUL,PNUL,YPfalse);
  T56 = BOUNDP(Yast_linearizeYprogram_quotations_setter);
  if (T56 != YPfalse) {
    T55 = VARREF(Yast_linearizeYprogram_quotations_setter);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_program_quotations_setter_67;
  T54 = CALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(Yast_linearizeYprogram_quotations_setter,T54);
  T58 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_68 = YPmet(FUNCODEREF(fun_68),YPfalse,T58,ENVNUL,PNUL,YPfalse);
  T59 = fun_68;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_linearizeYLflattened_programG),VARREF(Yast_linearizeYprogram_quotations),VARREF(Yast_linearizeYprogram_quotations_setter),VARREF(YLanyG),T59);
  lit_66 = YPPsym((P)"program-definitions");
  T60 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_definitions_69 = YPmet(FUNCODEREF(fun_program_definitions_69),LITREF(lit_66),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(Yast_linearizeYprogram_definitions);
  if (T63 != YPfalse) {
    T62 = VARREF(Yast_linearizeYprogram_definitions);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_program_definitions_69;
  T61 = CALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(Yast_linearizeYprogram_definitions,T61);
  lit_67 = YPPsym((P)"program-definitions-setter");
  T65 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_definitions_setter_70 = YPmet(FUNCODEREF(fun_program_definitions_setter_70),LITREF(lit_67),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(Yast_linearizeYprogram_definitions_setter);
  if (T68 != YPfalse) {
    T67 = VARREF(Yast_linearizeYprogram_definitions_setter);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_program_definitions_setter_70;
  T66 = CALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(Yast_linearizeYprogram_definitions_setter,T66);
  T70 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T70,ENVNUL,PNUL,YPfalse);
  T71 = fun_71;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_linearizeYLflattened_programG),VARREF(Yast_linearizeYprogram_definitions),VARREF(Yast_linearizeYprogram_definitions_setter),VARREF(YLanyG),T71);
  lit_68 = YPPsym((P)"<top-level-form>");
  T73 = (P)YPpair(VARREF(YastYLcomputed_programG),Ynil);
  T72 = CALL2(1,VARREF(Yfab_class),LITREF(lit_68),T73);
  VARSET(Yast_linearizeYLtop_level_formG,T72);
  lit_69 = YPPsym((P)"form-program");
  T74 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_program_72 = YPmet(FUNCODEREF(fun_form_program_72),LITREF(lit_69),T74,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(Yast_linearizeYform_program);
  if (T77 != YPfalse) {
    T76 = VARREF(Yast_linearizeYform_program);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_form_program_72;
  T75 = CALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(Yast_linearizeYform_program,T75);
  lit_70 = YPPsym((P)"form-program-setter");
  T79 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YastYLprogramG),VARREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_program_setter_73 = YPmet(FUNCODEREF(fun_form_program_setter_73),LITREF(lit_70),T79,ENVNUL,PNUL,YPfalse);
  T82 = BOUNDP(Yast_linearizeYform_program_setter);
  if (T82 != YPfalse) {
    T81 = VARREF(Yast_linearizeYform_program_setter);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_form_program_setter_73;
  T80 = CALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(Yast_linearizeYform_program_setter,T80);
  T84 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_74 = YPmet(FUNCODEREF(fun_74),YPfalse,T84,ENVNUL,PNUL,YPfalse);
  T85 = fun_74;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_linearizeYLtop_level_formG),VARREF(Yast_linearizeYform_program),VARREF(Yast_linearizeYform_program_setter),VARREF(YastYLprogramG),T85);
  lit_71 = YPPsym((P)"form-quotations");
  T86 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_quotations_75 = YPmet(FUNCODEREF(fun_form_quotations_75),LITREF(lit_71),T86,ENVNUL,PNUL,YPfalse);
  T89 = BOUNDP(Yast_linearizeYform_quotations);
  if (T89 != YPfalse) {
    T88 = VARREF(Yast_linearizeYform_quotations);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_form_quotations_75;
  T87 = CALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(Yast_linearizeYform_quotations,T87);
  lit_72 = YPPsym((P)"form-quotations-setter");
  T91 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_quotations_setter_76 = YPmet(FUNCODEREF(fun_form_quotations_setter_76),LITREF(lit_72),T91,ENVNUL,PNUL,YPfalse);
  T94 = BOUNDP(Yast_linearizeYform_quotations_setter);
  if (T94 != YPfalse) {
    T93 = VARREF(Yast_linearizeYform_quotations_setter);
  } else {
    T93 = YPfalse;
  }
  T95 = fun_form_quotations_setter_76;
  T92 = CALL2(1,VARREF(YPdefine_method),T93,T95);
  VARSET(Yast_linearizeYform_quotations_setter,T92);
  T96 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_77 = YPmet(FUNCODEREF(fun_77),YPfalse,T96,ENVNUL,PNUL,YPfalse);
  T97 = fun_77;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_linearizeYLtop_level_formG),VARREF(Yast_linearizeYform_quotations),VARREF(Yast_linearizeYform_quotations_setter),VARREF(YLanyG),T97);
  lit_73 = YPPsym((P)"form-definitions");
  T98 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_definitions_78 = YPmet(FUNCODEREF(fun_form_definitions_78),LITREF(lit_73),T98,ENVNUL,PNUL,YPfalse);
  T101 = BOUNDP(Yast_linearizeYform_definitions);
  if (T101 != YPfalse) {
    T100 = VARREF(Yast_linearizeYform_definitions);
  } else {
    T100 = YPfalse;
  }
  T102 = fun_form_definitions_78;
  T99 = CALL2(1,VARREF(YPdefine_method),T100,T102);
  VARSET(Yast_linearizeYform_definitions,T99);
  lit_74 = YPPsym((P)"form-definitions-setter");
  T103 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_definitions_setter_79 = YPmet(FUNCODEREF(fun_form_definitions_setter_79),LITREF(lit_74),T103,ENVNUL,PNUL,YPfalse);
  T106 = BOUNDP(Yast_linearizeYform_definitions_setter);
  if (T106 != YPfalse) {
    T105 = VARREF(Yast_linearizeYform_definitions_setter);
  } else {
    T105 = YPfalse;
  }
  T107 = fun_form_definitions_setter_79;
  T104 = CALL2(1,VARREF(YPdefine_method),T105,T107);
  VARSET(Yast_linearizeYform_definitions_setter,T104);
  T108 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T108,ENVNUL,PNUL,YPfalse);
  T109 = fun_80;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_linearizeYLtop_level_formG),VARREF(Yast_linearizeYform_definitions),VARREF(Yast_linearizeYform_definitions_setter),VARREF(YLanyG),T109);
  lit_75 = YPPsym((P)"<closure-creation>");
  T111 = (P)YPpair(VARREF(YastYLcomputed_programG),Ynil);
  T110 = CALL2(1,VARREF(Yfab_class),LITREF(lit_75),T111);
  VARSET(Yast_linearizeYLclosure_creationG,T110);
  lit_76 = YPPsym((P)"closure-creation-index");
  T112 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_closure_creation_index_81 = YPmet(FUNCODEREF(fun_closure_creation_index_81),LITREF(lit_76),T112,ENVNUL,PNUL,YPfalse);
  T115 = BOUNDP(Yast_linearizeYclosure_creation_index);
  if (T115 != YPfalse) {
    T114 = VARREF(Yast_linearizeYclosure_creation_index);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_closure_creation_index_81;
  T113 = CALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(Yast_linearizeYclosure_creation_index,T113);
  lit_77 = YPPsym((P)"closure-creation-index-setter");
  T117 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_closure_creation_index_setter_82 = YPmet(FUNCODEREF(fun_closure_creation_index_setter_82),LITREF(lit_77),T117,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(Yast_linearizeYclosure_creation_index_setter);
  if (T120 != YPfalse) {
    T119 = VARREF(Yast_linearizeYclosure_creation_index_setter);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_closure_creation_index_setter_82;
  T118 = CALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(Yast_linearizeYclosure_creation_index_setter,T118);
  T122 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_83 = YPmet(FUNCODEREF(fun_83),YPfalse,T122,ENVNUL,PNUL,YPfalse);
  T123 = fun_83;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_linearizeYLclosure_creationG),VARREF(Yast_linearizeYclosure_creation_index),VARREF(Yast_linearizeYclosure_creation_index_setter),VARREF(YLanyG),T123);
  lit_78 = YPPsym((P)"closure-creation-free");
  T124 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_closure_creation_free_84 = YPmet(FUNCODEREF(fun_closure_creation_free_84),LITREF(lit_78),T124,ENVNUL,PNUL,YPfalse);
  T127 = BOUNDP(Yast_linearizeYclosure_creation_free);
  if (T127 != YPfalse) {
    T126 = VARREF(Yast_linearizeYclosure_creation_free);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_closure_creation_free_84;
  T125 = CALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(Yast_linearizeYclosure_creation_free,T125);
  lit_79 = YPPsym((P)"closure-creation-free-setter");
  T129 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_closure_creation_free_setter_85 = YPmet(FUNCODEREF(fun_closure_creation_free_setter_85),LITREF(lit_79),T129,ENVNUL,PNUL,YPfalse);
  T132 = BOUNDP(Yast_linearizeYclosure_creation_free_setter);
  if (T132 != YPfalse) {
    T131 = VARREF(Yast_linearizeYclosure_creation_free_setter);
  } else {
    T131 = YPfalse;
  }
  T133 = fun_closure_creation_free_setter_85;
  T130 = CALL2(1,VARREF(YPdefine_method),T131,T133);
  VARSET(Yast_linearizeYclosure_creation_free_setter,T130);
  T134 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_86 = YPmet(FUNCODEREF(fun_86),YPfalse,T134,ENVNUL,PNUL,YPfalse);
  T135 = fun_86;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_linearizeYLclosure_creationG),VARREF(Yast_linearizeYclosure_creation_free),VARREF(Yast_linearizeYclosure_creation_free_setter),VARREF(YLanyG),T135);
  lit_80 = YPPsym((P)"flatten-seqs");
  T136 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_flatten_seqs_87 = YPmet(FUNCODEREF(fun_flatten_seqs_87),LITREF(lit_80),T136,ENVNUL,PNUL,YPfalse);
  T139 = BOUNDP(Yast_linearizeYflatten_seqs);
  if (T139 != YPfalse) {
    T138 = VARREF(Yast_linearizeYflatten_seqs);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_flatten_seqs_87;
  T137 = CALL2(1,VARREF(YPdefine_method),T138,T140);
  VARSET(Yast_linearizeYflatten_seqs,T137);
  lit_81 = YPPsym((P)"s");
  lit_82 = YPPsym((P)"r");
  lit_83 = YPPsym((P)"inner");
  lit_84 = YPPsym((P)"ss");
  T143 = YPsig(YPPlist(2,LITREF(lit_84),LITREF(lit_82)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_inner_88 = YPmet(FUNCODEREF(fun_inner_88),LITREF(lit_83),T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(YPPlist(2,LITREF(lit_81),LITREF(lit_82)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_89 = YPmet(FUNCODEREF(fun_loop_89),LITREF(lit_32),T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLsequentialG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_flatten_seqs_90 = YPmet(FUNCODEREF(fun_flatten_seqs_90),LITREF(lit_80),T141,ENVNUL,PNUL,YPfalse);
  T146 = BOUNDP(Yast_linearizeYflatten_seqs);
  if (T146 != YPfalse) {
    T145 = VARREF(Yast_linearizeYflatten_seqs);
  } else {
    T145 = YPfalse;
  }
  T147 = fun_flatten_seqs_90;
  T144 = CALL2(1,VARREF(YPdefine_method),T145,T147);
  VARSET(Yast_linearizeYflatten_seqs,T144);
  lit_85 = YPPsym((P)"as-top-level-forms");
  lit_86 = YPPsym((P)"programs");
  T149 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T149,ENVNUL,PNUL,YPfalse);
  T148 = YPsig(YPPlist(1,LITREF(lit_86)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_top_level_forms_92 = YPmet(FUNCODEREF(fun_as_top_level_forms_92),LITREF(lit_85),T148,ENVNUL,PNUL,YPfalse);
  T152 = BOUNDP(Yast_linearizeYas_top_level_forms);
  if (T152 != YPfalse) {
    T151 = VARREF(Yast_linearizeYas_top_level_forms);
  } else {
    T151 = YPfalse;
  }
  T153 = fun_as_top_level_forms_92;
  T150 = CALL2(1,VARREF(YPdefine_method),T151,T153);
  VARSET(Yast_linearizeYas_top_level_forms,T150);
  lit_87 = YPPsym((P)"extract-things!");
  T155 = YPsig(YPPlist(1,LITREF(lit_30)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_93 = YPmet(FUNCODEREF(fun_93),YPfalse,T155,ENVNUL,PNUL,YPfalse);
  T154 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_extract_thingsX_94 = YPmet(FUNCODEREF(fun_extract_thingsX_94),LITREF(lit_87),T154,ENVNUL,PNUL,YPfalse);
  T158 = BOUNDP(Yast_linearizeYextract_thingsX);
  if (T158 != YPfalse) {
    T157 = VARREF(Yast_linearizeYextract_thingsX);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_extract_thingsX_94;
  T156 = CALL2(1,VARREF(YPdefine_method),T157,T159);
  VARSET(Yast_linearizeYextract_thingsX,T156);
  lit_88 = YPPsym((P)"extract!");
  lit_89 = YPPsym((P)"result");
  T160 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_30),LITREF(lit_89)),YPPlist(3,VARREF(YastYLprogramG),VARREF(Yast_linearizeYLtop_level_formG),VARREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_95 = YPmet(FUNCODEREF(fun_extractX_95),LITREF(lit_88),T160,ENVNUL,PNUL,YPfalse);
  T163 = BOUNDP(Yast_linearizeYextractX);
  if (T163 != YPfalse) {
    T162 = VARREF(Yast_linearizeYextractX);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_extractX_95;
  T161 = CALL2(1,VARREF(YPdefine_method),T162,T164);
  VARSET(Yast_linearizeYextractX,T161);
  lit_90 = YPPsym((P)"quotation");
  T165 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_30),LITREF(lit_89)),YPPlist(3,VARREF(YastYLconstantG),VARREF(Yast_linearizeYLtop_level_formG),VARREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_96 = YPmet(FUNCODEREF(fun_extractX_96),LITREF(lit_88),T165,ENVNUL,PNUL,YPfalse);
  T168 = BOUNDP(Yast_linearizeYextractX);
  if (T168 != YPfalse) {
    T167 = VARREF(Yast_linearizeYextractX);
  } else {
    T167 = YPfalse;
  }
  T169 = fun_extractX_96;
  T166 = CALL2(1,VARREF(YPdefine_method),T167,T169);
  VARSET(Yast_linearizeYextractX,T166);
  T170 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_30),LITREF(lit_89)),YPPlist(3,VARREF(YastYLraw_constantG),VARREF(Yast_linearizeYLtop_level_formG),VARREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_97 = YPmet(FUNCODEREF(fun_extractX_97),LITREF(lit_88),T170,ENVNUL,PNUL,YPfalse);
  T173 = BOUNDP(Yast_linearizeYextractX);
  if (T173 != YPfalse) {
    T172 = VARREF(Yast_linearizeYextractX);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_extractX_97;
  T171 = CALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(Yast_linearizeYextractX,T171);
  lit_91 = YPPsym((P)"binding");
  T176 = YPsig(YPPlist(1,LITREF(lit_91)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_98 = YPmet(FUNCODEREF(fun_98),YPfalse,T176,ENVNUL,PNUL,YPfalse);
  T175 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_30),LITREF(lit_89)),YPPlist(3,VARREF(YastYLast_methodG),VARREF(Yast_linearizeYLtop_level_formG),VARREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_99 = YPmet(FUNCODEREF(fun_extractX_99),LITREF(lit_88),T175,ENVNUL,PNUL,YPfalse);
  T179 = BOUNDP(Yast_linearizeYextractX);
  if (T179 != YPfalse) {
    T178 = VARREF(Yast_linearizeYextractX);
  } else {
    T178 = YPfalse;
  }
  T180 = fun_extractX_99;
  T177 = CALL2(1,VARREF(YPdefine_method),T178,T180);
  VARSET(Yast_linearizeYextractX,T177);
  T181 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_30),LITREF(lit_89)),YPPlist(3,VARREF(YastYLast_primitive_definitionG),VARREF(Yast_linearizeYLtop_level_formG),VARREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_100 = YPmet(FUNCODEREF(fun_extractX_100),LITREF(lit_88),T181,ENVNUL,PNUL,YPfalse);
  T184 = BOUNDP(Yast_linearizeYextractX);
  if (T184 != YPfalse) {
    T183 = VARREF(Yast_linearizeYextractX);
  } else {
    T183 = YPfalse;
  }
  T185 = fun_extractX_100;
  T182 = CALL2(1,VARREF(YPdefine_method),T183,T185);
  VARSET(Yast_linearizeYextractX,T182);
  lit_92 = YPPsym((P)"adjoin-definition!");
  T186 = YPsig(YPPlist(3,LITREF(lit_30),LITREF(lit_89),LITREF(lit_5)),YPPlist(3,VARREF(Yast_linearizeYLtop_level_formG),VARREF(Yast_linearizeYLflattened_programG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_adjoin_definitionX_101 = YPmet(FUNCODEREF(fun_adjoin_definitionX_101),LITREF(lit_92),T186,ENVNUL,PNUL,YPfalse);
  T189 = BOUNDP(Yast_linearizeYadjoin_definitionX);
  if (T189 != YPfalse) {
    T188 = VARREF(Yast_linearizeYadjoin_definitionX);
  } else {
    T188 = YPfalse;
  }
  T190 = fun_adjoin_definitionX_101;
  T187 = CALL2(1,VARREF(YPdefine_method),T188,T190);
  VARSET(Yast_linearizeYadjoin_definitionX,T187);
  lit_93 = YPPsym((P)"split-program");
  lit_94 = YPPsym((P)"max-count");
  T191 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_94)),YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_split_program_102 = YPmet(FUNCODEREF(fun_split_program_102),LITREF(lit_93),T191,ENVNUL,PNUL,YPfalse);
  T194 = BOUNDP(Yast_linearizeYsplit_program);
  if (T194 != YPfalse) {
    T193 = VARREF(Yast_linearizeYsplit_program);
  } else {
    T193 = YPfalse;
  }
  T195 = fun_split_program_102;
  T192 = CALL2(1,VARREF(YPdefine_method),T193,T195);
  VARSET(Yast_linearizeYsplit_program,T192);
  lit_95 = YPPsym((P)"forms");
  lit_96 = YPPsym((P)"es");
  lit_97 = YPPsym((P)"count");
  T198 = YPsig(YPPlist(3,LITREF(lit_33),LITREF(lit_96),LITREF(lit_97)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_inner_103 = YPmet(FUNCODEREF(fun_inner_103),LITREF(lit_83),T198,ENVNUL,PNUL,YPfalse);
  T197 = YPsig(YPPlist(2,LITREF(lit_95),LITREF(lit_81)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_104 = YPmet(FUNCODEREF(fun_loop_104),LITREF(lit_32),T197,ENVNUL,PNUL,YPfalse);
  T196 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_94)),YPPlist(2,VARREF(YastYLsequentialG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_split_program_105 = YPmet(FUNCODEREF(fun_split_program_105),LITREF(lit_93),T196,ENVNUL,PNUL,YPfalse);
  T201 = BOUNDP(Yast_linearizeYsplit_program);
  if (T201 != YPfalse) {
    T200 = VARREF(Yast_linearizeYsplit_program);
  } else {
    T200 = YPfalse;
  }
  T202 = fun_split_program_105;
  T199 = CALL2(1,VARREF(YPdefine_method),T200,T202);
  VARSET(Yast_linearizeYsplit_program,T199);
  lit_98 = YPPsym((P)"closurize-main!");
  lit_99 = YPPsym((P)"calls");
  lit_100 = YPPsym((P)"defns");
  lit_101 = YPsb((P)"---main-");
  lit_102 = YPsb((P)"---");
  lit_103 = YPPsym((P)"predefined");
  T204 = YPsig(YPPlist(4,LITREF(lit_99),LITREF(lit_100),LITREF(lit_58),LITREF(lit_95)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_loop_106 = YPmet(FUNCODEREF(fun_loop_106),LITREF(lit_32),T204,ENVNUL,PNUL,YPfalse);
  T203 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_82),LITREF(lit_94)),YPPlist(3,VARREF(Yast_linearizeYLflattened_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(Yast_linearizeYLflattened_programG),Ynil);
  fun_closurize_mainX_107 = YPmet(FUNCODEREF(fun_closurize_mainX_107),LITREF(lit_98),T203,ENVNUL,PNUL,YPfalse);
  T207 = BOUNDP(Yast_linearizeYclosurize_mainX);
  if (T207 != YPfalse) {
    T206 = VARREF(Yast_linearizeYclosurize_mainX);
  } else {
    T206 = YPfalse;
  }
  T208 = fun_closurize_mainX_107;
  T205 = CALL2(1,VARREF(YPdefine_method),T206,T208);
  VARSET(Yast_linearizeYclosurize_mainX,T205);
  lit_104 = YPPsym((P)"gather-temporaries!");
  lit_105 = YPPsym((P)"def");
  T210 = YPsig(YPPlist(1,LITREF(lit_105)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_108 = YPmet(FUNCODEREF(fun_108),YPfalse,T210,ENVNUL,PNUL,YPfalse);
  T209 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_gather_temporariesX_109 = YPmet(FUNCODEREF(fun_gather_temporariesX_109),LITREF(lit_104),T209,ENVNUL,PNUL,YPfalse);
  T213 = BOUNDP(Yast_linearizeYgather_temporariesX);
  if (T213 != YPfalse) {
    T212 = VARREF(Yast_linearizeYgather_temporariesX);
  } else {
    T212 = YPfalse;
  }
  T214 = fun_gather_temporariesX_109;
  T211 = CALL2(1,VARREF(YPdefine_method),T212,T214);
  VARSET(Yast_linearizeYgather_temporariesX,T211);
  lit_106 = YPPsym((P)"collect-temporaries!");
  T215 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_82)),YPPlist(3,VARREF(YastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_110 = YPmet(FUNCODEREF(fun_collect_temporariesX_110),LITREF(lit_106),T215,ENVNUL,PNUL,YPfalse);
  T218 = BOUNDP(Yast_linearizeYcollect_temporariesX);
  if (T218 != YPfalse) {
    T217 = VARREF(Yast_linearizeYcollect_temporariesX);
  } else {
    T217 = YPfalse;
  }
  T219 = fun_collect_temporariesX_110;
  T216 = CALL2(1,VARREF(YPdefine_method),T217,T219);
  VARSET(Yast_linearizeYcollect_temporariesX,T216);
  T220 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_82)),YPPlist(3,VARREF(YastYLlocal_referenceG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_111 = YPmet(FUNCODEREF(fun_collect_temporariesX_111),LITREF(lit_106),T220,ENVNUL,PNUL,YPfalse);
  T223 = BOUNDP(Yast_linearizeYcollect_temporariesX);
  if (T223 != YPfalse) {
    T222 = VARREF(Yast_linearizeYcollect_temporariesX);
  } else {
    T222 = YPfalse;
  }
  T224 = fun_collect_temporariesX_111;
  T221 = CALL2(1,VARREF(YPdefine_method),T222,T224);
  VARSET(Yast_linearizeYcollect_temporariesX,T221);
  T225 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_82)),YPPlist(3,VARREF(YastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_112 = YPmet(FUNCODEREF(fun_collect_temporariesX_112),LITREF(lit_106),T225,ENVNUL,PNUL,YPfalse);
  T228 = BOUNDP(Yast_linearizeYcollect_temporariesX);
  if (T228 != YPfalse) {
    T227 = VARREF(Yast_linearizeYcollect_temporariesX);
  } else {
    T227 = YPfalse;
  }
  T229 = fun_collect_temporariesX_112;
  T226 = CALL2(1,VARREF(YPdefine_method),T227,T229);
  VARSET(Yast_linearizeYcollect_temporariesX,T226);
  T230 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_82)),YPPlist(3,VARREF(YastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_113 = YPmet(FUNCODEREF(fun_collect_temporariesX_113),LITREF(lit_106),T230,ENVNUL,PNUL,YPfalse);
  T233 = BOUNDP(Yast_linearizeYcollect_temporariesX);
  if (T233 != YPfalse) {
    T232 = VARREF(Yast_linearizeYcollect_temporariesX);
  } else {
    T232 = YPfalse;
  }
  T234 = fun_collect_temporariesX_113;
  T231 = CALL2(1,VARREF(YPdefine_method),T232,T234);
  VARSET(Yast_linearizeYcollect_temporariesX,T231);
  lit_107 = YPPsym((P)"adjoin-temporary-variables!");
  lit_108 = YPPsym((P)"new-bindings");
  lit_109 = YPPsym((P)"adjoin");
  lit_110 = YPPsym((P)"temps");
  T236 = YPsig(YPPlist(2,LITREF(lit_110),LITREF(lit_31)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_adjoin_114 = YPmet(FUNCODEREF(fun_adjoin_114),LITREF(lit_109),T236,ENVNUL,PNUL,YPfalse);
  T235 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_108)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_adjoin_temporary_variablesX_115 = YPmet(FUNCODEREF(fun_adjoin_temporary_variablesX_115),LITREF(lit_107),T235,ENVNUL,PNUL,YPfalse);
  T239 = BOUNDP(Yast_linearizeYadjoin_temporary_variablesX);
  if (T239 != YPfalse) {
    T238 = VARREF(Yast_linearizeYadjoin_temporary_variablesX);
  } else {
    T238 = YPfalse;
  }
  T240 = fun_adjoin_temporary_variablesX_115;
  T237 = CALL2(1,VARREF(YPdefine_method),T238,T240);
  VARSET(Yast_linearizeYadjoin_temporary_variablesX,T237);
  lit_111 = YPPsym((P)"<renamed-local-binding>");
  T242 = (P)YPpair(VARREF(YastYLlocal_bindingG),Ynil);
  T241 = CALL2(1,VARREF(Yfab_class),LITREF(lit_111),T242);
  VARSET(Yast_linearizeYLrenamed_local_bindingG,T241);
  lit_112 = YPPsym((P)"binding-index");
  T243 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_index_116 = YPmet(FUNCODEREF(fun_binding_index_116),LITREF(lit_112),T243,ENVNUL,PNUL,YPfalse);
  T246 = BOUNDP(YastYbinding_index);
  if (T246 != YPfalse) {
    T245 = VARREF(YastYbinding_index);
  } else {
    T245 = YPfalse;
  }
  T247 = fun_binding_index_116;
  T244 = CALL2(1,VARREF(YPdefine_method),T245,T247);
  VARSET(YastYbinding_index,T244);
  lit_113 = YPPsym((P)"binding-index-setter");
  T248 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_index_setter_117 = YPmet(FUNCODEREF(fun_binding_index_setter_117),LITREF(lit_113),T248,ENVNUL,PNUL,YPfalse);
  T251 = BOUNDP(YastYbinding_index_setter);
  if (T251 != YPfalse) {
    T250 = VARREF(YastYbinding_index_setter);
  } else {
    T250 = YPfalse;
  }
  T252 = fun_binding_index_setter_117;
  T249 = CALL2(1,VARREF(YPdefine_method),T250,T252);
  VARSET(YastYbinding_index_setter,T249);
  T253 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_118 = YPmet(FUNCODEREF(fun_118),YPfalse,T253,ENVNUL,PNUL,YPfalse);
  T254 = fun_118;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_linearizeYLrenamed_local_bindingG),VARREF(YastYbinding_index),VARREF(YastYbinding_index_setter),VARREF(YLanyG),T254);
  VARSET(Yast_linearizeYTrenaming_bindings_counterT,YPint((P)0));
  lit_114 = YPPsym((P)"new-renamed-binding");
  T255 = YPsig(YPPlist(1,LITREF(lit_91)),YPPlist(1,VARREF(YastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_new_renamed_binding_119 = YPmet(FUNCODEREF(fun_new_renamed_binding_119),LITREF(lit_114),T255,ENVNUL,PNUL,YPfalse);
  T258 = BOUNDP(Yast_linearizeYnew_renamed_binding);
  if (T258 != YPfalse) {
    T257 = VARREF(Yast_linearizeYnew_renamed_binding);
  } else {
    T257 = YPfalse;
  }
  T259 = fun_new_renamed_binding_119;
  T256 = CALL2(1,VARREF(YPdefine_method),T257,T259);
  VARSET(Yast_linearizeYnew_renamed_binding,T256);
  VARSET(Yast_linearizeYTregister_passiveQT,YPfalse);
  lit_115 = YPPsym((P)"register-allocate!");
  lit_116 = YPPsym((P)"register-passive?");
  T263 = YPsig(YPPlist(1,LITREF(lit_105)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_120 = YPmet(FUNCODEREF(fun_120),YPfalse,T263,ENVNUL,PNUL,YPfalse);
  T262 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_121 = YPmet(FUNCODEREF(fun_121),YPfalse,T262,ENVNUL,PNUL,YPfalse);
  T261 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_122 = YPmet(FUNCODEREF(fun_122),YPfalse,T261,ENVNUL,PNUL,YPfalse);
  T260 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_116)),YPPlist(2,VARREF(YastYLprogramG),VARREF(YLlogG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_register_allocateX_123 = YPmet(FUNCODEREF(fun_register_allocateX_123),LITREF(lit_115),T260,ENVNUL,PNUL,YPfalse);
  T266 = BOUNDP(Yast_linearizeYregister_allocateX);
  if (T266 != YPfalse) {
    T265 = VARREF(Yast_linearizeYregister_allocateX);
  } else {
    T265 = YPfalse;
  }
  T267 = fun_register_allocateX_123;
  T264 = CALL2(1,VARREF(YPdefine_method),T265,T267);
  VARSET(Yast_linearizeYregister_allocateX,T264);
  lit_117 = YPPsym((P)"allocate-register");
  lit_118 = YPPsym((P)"val?");
  T268 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(YastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_allocate_register_124 = YPmet(FUNCODEREF(fun_allocate_register_124),LITREF(lit_117),T268,ENVNUL,PNUL,YPfalse);
  T271 = BOUNDP(Yast_linearizeYallocate_register);
  if (T271 != YPfalse) {
    T270 = VARREF(Yast_linearizeYallocate_register);
  } else {
    T270 = YPfalse;
  }
  T272 = fun_allocate_register_124;
  T269 = CALL2(1,VARREF(YPdefine_method),T270,T272);
  VARSET(Yast_linearizeYallocate_register,T269);
  lit_119 = YPPsym((P)"collect-registers!");
  T273 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(YastYLcomputed_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_125 = YPmet(FUNCODEREF(fun_collect_registersX_125),LITREF(lit_119),T273,ENVNUL,PNUL,YPfalse);
  T276 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T276 != YPfalse) {
    T275 = VARREF(Yast_linearizeYcollect_registersX);
  } else {
    T275 = YPfalse;
  }
  T277 = fun_collect_registersX_125;
  T274 = CALL2(1,VARREF(YPdefine_method),T275,T277);
  VARSET(Yast_linearizeYcollect_registersX,T274);
  T279 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_126 = YPmet(FUNCODEREF(fun_loop_126),LITREF(lit_32),T279,ENVNUL,PNUL,YPfalse);
  T278 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(YastYLsequentialG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_127 = YPmet(FUNCODEREF(fun_collect_registersX_127),LITREF(lit_119),T278,ENVNUL,PNUL,YPfalse);
  T282 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T282 != YPfalse) {
    T281 = VARREF(Yast_linearizeYcollect_registersX);
  } else {
    T281 = YPfalse;
  }
  T283 = fun_collect_registersX_127;
  T280 = CALL2(1,VARREF(YPdefine_method),T281,T283);
  VARSET(Yast_linearizeYcollect_registersX,T280);
  T286 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(YastYLpassive_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T285 = fun_collect_registersX_128 = YPmet(FUNCODEREF(fun_collect_registersX_128),LITREF(lit_119),T286,ENVNUL,PNUL,YPfalse);
  T290 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T290 != YPfalse) {
    T289 = VARREF(Yast_linearizeYcollect_registersX);
  } else {
    T289 = YPfalse;
  }
  T291 = fun_collect_registersX_128;
  T288 = CALL2(1,VARREF(YPdefine_method),T289,T291);
  T287 = VARSET(Yast_linearizeYcollect_registersX,T288);
  T284 = T287;
  return T284;
}

P Yast_linearizeY___main_2___() {
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T1 = YPsig(YPPlist(1,LITREF(lit_105)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_129 = YPmet(FUNCODEREF(fun_129),YPfalse,T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(Yast_linearizeYLtop_level_formG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_130 = YPmet(FUNCODEREF(fun_collect_registersX_130),LITREF(lit_119),T0,ENVNUL,PNUL,YPfalse);
  T4 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T4 != YPfalse) {
    T3 = VARREF(Yast_linearizeYcollect_registersX);
  } else {
    T3 = YPfalse;
  }
  T5 = fun_collect_registersX_130;
  T2 = CALL2(1,VARREF(YPdefine_method),T3,T5);
  VARSET(Yast_linearizeYcollect_registersX,T2);
  T6 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(YastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_131 = YPmet(FUNCODEREF(fun_collect_registersX_131),LITREF(lit_119),T6,ENVNUL,PNUL,YPfalse);
  T9 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T9 != YPfalse) {
    T8 = VARREF(Yast_linearizeYcollect_registersX);
  } else {
    T8 = YPfalse;
  }
  T10 = fun_collect_registersX_131;
  T7 = CALL2(1,VARREF(YPdefine_method),T8,T10);
  VARSET(Yast_linearizeYcollect_registersX,T7);
  T11 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(YastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_132 = YPmet(FUNCODEREF(fun_collect_registersX_132),LITREF(lit_119),T11,ENVNUL,PNUL,YPfalse);
  T14 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T14 != YPfalse) {
    T13 = VARREF(Yast_linearizeYcollect_registersX);
  } else {
    T13 = YPfalse;
  }
  T15 = fun_collect_registersX_132;
  T12 = CALL2(1,VARREF(YPdefine_method),T13,T15);
  VARSET(Yast_linearizeYcollect_registersX,T12);
  lit_120 = YPPsym((P)"ast-contains-fun?");
  T16 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_ast_contains_funQ_133 = YPmet(FUNCODEREF(fun_ast_contains_funQ_133),LITREF(lit_120),T16,ENVNUL,PNUL,YPfalse);
  T19 = BOUNDP(Yast_linearizeYast_contains_funQ);
  if (T19 != YPfalse) {
    T18 = VARREF(Yast_linearizeYast_contains_funQ);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_ast_contains_funQ_133;
  T17 = CALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(Yast_linearizeYast_contains_funQ,T17);
  lit_121 = YPPsym((P)"return");
  lit_122 = YPPsym((P)"walk");
  T23 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_walk_134 = YPmet(FUNCODEREF(fun_walk_134),LITREF(lit_122),T23,ENVNUL,PNUL,YPfalse);
  T22 = YPsig(YPPlist(1,LITREF(lit_121)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_135 = YPmet(FUNCODEREF(fun_135),YPfalse,T22,ENVNUL,PNUL,YPfalse);
  T21 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_ast_contains_funQ_136 = YPmet(FUNCODEREF(fun_ast_contains_funQ_136),LITREF(lit_120),T21,ENVNUL,PNUL,YPfalse);
  T26 = BOUNDP(Yast_linearizeYast_contains_funQ);
  if (T26 != YPfalse) {
    T25 = VARREF(Yast_linearizeYast_contains_funQ);
  } else {
    T25 = YPfalse;
  }
  T27 = fun_ast_contains_funQ_136;
  T24 = CALL2(1,VARREF(YPdefine_method),T25,T27);
  VARSET(Yast_linearizeYast_contains_funQ,T24);
  T28 = YPfalse;
  return T28;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_runtime;
extern MODULE_INFO module_info_ast;
extern MODULE_INFO module_info_protoStypes;
extern MODULE_INFO module_info_protoSmath;
extern MODULE_INFO module_info_protoScollections;
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
  {&module_info_ast},
  {&module_info_protoStypes},
  {&module_info_protoSmath},
  {&module_info_protoScollections},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"add", &module_info_protoScollectionsScollection, "add"},
  {"last", &module_info_protoScollectionsSsequence, "last"},
  {"type-error", &module_info_boot, "type-error"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"identity", &module_info_runtime, "identity"},
  {"var-type", &module_info_macros, "var-type"},
  {"*gensym-counter*", &module_info_runtime, "*gensym-counter*"},
  {"<passive-program>", &module_info_ast, "<passive-program>"},
  {"assocs-test", &module_info_protoScollectionsSassoc, "assocs-test"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"zero?", &module_info_protoSmath, "zero?"},
  {"*print-base*", &module_info_protoScollectionsSstring, "*print-base*"},
  {"fill", &module_info_protoScollectionsScollection, "fill"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"=", &module_info_protoSmath, "="},
  {"nul?", &module_info_protoSmath, "nul?"},
  {"<list>", &module_info_protoScollectionsSlist, "<list>"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"load-in", &module_info_ast, "load-in"},
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
  {"reduce+", &module_info_protoScollectionsScollection, "reduce+"},
  {"%iu", &module_info_boot, "%iu"},
  {"table-shrink-threshold", &module_info_protoScollectionsStable, "table-shrink-threshold"},
  {"from", &module_info_protoScollectionsSrange, "from"},
  {"any2?", &module_info_protoScollectionsScollection, "any2?"},
  {"do3", &module_info_protoScollectionsScollection, "do3"},
  {"<locals>", &module_info_ast, "<locals>"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"<ast-function>", &module_info_ast, "<ast-function>"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"binding-name", &module_info_ast, "binding-name"},
  {"signature-specs-setter", &module_info_ast, "signature-specs-setter"},
  {"use", &module_info_boot, "use"},
  {"%lu", &module_info_boot, "%lu"},
  {"to-str", &module_info_protoSmath, "to-str"},
  {"round/", &module_info_protoSmath, "round/"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"reduce", &module_info_protoScollectionsScollection, "reduce"},
  {"type-object", &module_info_boot, "type-object"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"ini-state", &module_info_macros, "ini-state"},
  {"<class>", &module_info_boot, "<class>"},
  {"len", &module_info_protoScollectionsScollection, "len"},
  {"dp", &module_info_boot, "dp"},
  {"gensym", &module_info_macros, "gensym"},
  {"binding-index-setter", &module_info_ast, "binding-index-setter"},
  {"from-to-by", &module_info_protoScollectionsSrange, "from-to-by"},
  {"assignment-form", &module_info_ast, "assignment-form"},
  {"read", &module_info_runtime, "read"},
  {"<global-reference>", &module_info_ast, "<global-reference>"},
  {"ddv", &module_info_macros, "ddv"},
  {"format", &module_info_runtime, "format"},
  {"%pair", &module_info_boot, "%pair"},
  {"and", &module_info_macros, "and"},
  {"do-static-global-bindings", &module_info_ast, "do-static-global-bindings"},
  {"%i-", &module_info_boot, "%i-"},
  {"sub", &module_info_protoScollectionsSsequence, "sub"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"<str-tab>", &module_info_protoScollectionsStable, "<str-tab>"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"module-name-to-relpath", &module_info_ast, "module-name-to-relpath"},
  {"<type>", &module_info_boot, "<type>"},
  {"false-or", &module_info_protoStypes, "false-or"},
  {"signature-names-setter", &module_info_ast, "signature-names-setter"},
  {"monitor-info", &module_info_ast, "monitor-info"},
  {"even?", &module_info_protoSmath, "even?"},
  {"<=", &module_info_protoSmath, "<="},
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
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"len-setter", &module_info_protoScollectionsSbuffer, "len-setter"},
  {"<bind-exit>", &module_info_ast, "<bind-exit>"},
  {"env-object-name", &module_info_ast, "env-object-name"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"function-free-setter", &module_info_ast, "function-free-setter"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"binding-dynamic-extent?", &module_info_ast, "binding-dynamic-extent?"},
  {"assqn", &module_info_protoScollectionsSlist, "assqn"},
  {"rep", &module_info_boot, "rep"},
  {"into", &module_info_protoScollectionsScollection, "into"},
  {"to-digit", &module_info_protoSmath, "to-digit"},
  {"function-data-refs", &module_info_ast, "function-data-refs"},
  {"application-known?-setter", &module_info_ast, "application-known?-setter"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"id-hash", &module_info_protoScollectionsStable, "id-hash"},
  {"binding-native-to?", &module_info_ast, "binding-native-to?"},
  {"<ast-primitive-definition>", &module_info_ast, "<ast-primitive-definition>"},
  {"<definition>", &module_info_ast, "<definition>"},
  {"program-register-setter", &module_info_ast, "program-register-setter"},
  {"%c<", &module_info_boot, "%c<"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"t<", &module_info_protoStypes, "t<"},
  {"assocs-test-setter", &module_info_protoScollectionsSassoc, "assocs-test-setter"},
  {"<binding>", &module_info_ast, "<binding>"},
  {"fix-let-bindings-setter", &module_info_ast, "fix-let-bindings-setter"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"function-bindings", &module_info_ast, "function-bindings"},
  {"inc", &module_info_macros, "inc"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"%c=", &module_info_boot, "%c="},
  {"logior", &module_info_protoSmath, "logior"},
  {"fabs", &module_info_protoSmath, "fabs"},
  {"<bot>", &module_info_protoSmath, "<bot>"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"flo-bits", &module_info_protoSmath, "flo-bits"},
  {"round", &module_info_protoSmath, "round"},
  {"lab", &module_info_boot, "lab"},
  {"exported", &module_info_macros, "exported"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"t+", &module_info_protoStypes, "t+"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"locals-body-setter", &module_info_ast, "locals-body-setter"},
  {"cat2", &module_info_protoScollectionsSsequence, "cat2"},
  {"<str>", &module_info_boot, "<str>"},
  {"truncate/", &module_info_protoSmath, "truncate/"},
  {"dss", &module_info_boot, "dss"},
  {"sig", &module_info_runtime, "sig"},
  {"isa", &module_info_boot, "isa"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"export", &module_info_boot, "export"},
  {"table-protocol", &module_info_protoScollectionsStable, "table-protocol"},
  {"function-signature-setter", &module_info_ast, "function-signature-setter"},
  {"%iv", &module_info_boot, "%iv"},
  {"as-log", &module_info_protoSmath, "as-log"},
  {"binding-dynamic-extent?-setter", &module_info_ast, "binding-dynamic-extent?-setter"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"del-key", &module_info_protoScollectionsScollection, "del-key"},
  {"+", &module_info_protoSmath, "+"},
  {"@==", &module_info_boot, "@=="},
  {"assignment-reference", &module_info_ast, "assignment-reference"},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"pos", &module_info_protoScollectionsSsequence, "pos"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"function-registers-setter", &module_info_ast, "function-registers-setter"},
  {"find-environment-module", &module_info_ast, "find-environment-module"},
  {"binding-kind", &module_info_ast, "binding-kind"},
  {"init-ast", &module_info_ast, "init-ast"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"t=", &module_info_protoStypes, "t="},
  {"binding-value", &module_info_ast, "binding-value"},
  {"fix-let-bindings", &module_info_ast, "fix-let-bindings"},
  {"do", &module_info_protoScollectionsScollection, "do"},
  {"function-body-setter", &module_info_ast, "function-body-setter"},
  {">", &module_info_protoSmath, ">"},
  {"error", &module_info_boot, "error"},
  {"binding-mutable?", &module_info_ast, "binding-mutable?"},
  {"max", &module_info_protoSmath, "max"},
  {"assignment-form-setter", &module_info_ast, "assignment-form-setter"},
  {"function-signature", &module_info_ast, "function-signature"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"<local-binding>", &module_info_ast, "<local-binding>"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"<predefined-application>", &module_info_ast, "<predefined-application>"},
  {"%slen", &module_info_boot, "%slen"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"<met>", &module_info_boot, "<met>"},
  {"set-module-environments", &module_info_ast, "set-module-environments"},
  {"fab", &module_info_protoScollectionsScollection, "fab"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"do-key-vals", &module_info_protoScollectionsSsequence, "do-key-vals"},
  {"len/fill-setter", &module_info_protoScollectionsSbuffer, "len/fill-setter"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"signature-names", &module_info_ast, "signature-names"},
  {"signature-value", &module_info_ast, "signature-value"},
  {"range-check?", &module_info_protoScollectionsSsequence, "range-check?"},
  {"locals-body", &module_info_ast, "locals-body"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"all2?", &module_info_protoScollectionsScollection, "all2?"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"cat!", &module_info_protoScollectionsSsequence, "cat!"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"function-self-recursive?-setter", &module_info_ast, "function-self-recursive?-setter"},
  {"quote", &module_info_boot, "quote"},
  {"pair", &module_info_macros, "pair"},
  {"function-body", &module_info_ast, "function-body"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"binding-global-box", &module_info_ast, "binding-global-box"},
  {"head", &module_info_boot, "head"},
  {"module-syntax-environment", &module_info_ast, "module-syntax-environment"},
  {"from-above", &module_info_protoScollectionsSrange, "from-above"},
  {"neg?", &module_info_protoSmath, "neg?"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"<runtime-assignment>", &module_info_ast, "<runtime-assignment>"},
  {"when", &module_info_macros, "when"},
  {"binding-value-setter", &module_info_ast, "binding-value-setter"},
  {"<programs>", &module_info_ast, "<programs>"},
  {"<program>", &module_info_ast, "<program>"},
  {"find-key", &module_info_protoScollectionsScollection, "find-key"},
  {"nul", &module_info_boot, "nul"},
  {"apply", &module_info_macros, "apply"},
  {"object-class", &module_info_boot, "object-class"},
  {"logxor", &module_info_protoSmath, "logxor"},
  {"function-registers", &module_info_ast, "function-registers"},
  {"~==", &module_info_protoSmath, "~=="},
  {"%i<", &module_info_boot, "%i<"},
  {"<module-binding>", &module_info_ast, "<module-binding>"},
  {"%sb", &module_info_boot, "%sb"},
  {"<unwind-protect>", &module_info_ast, "<unwind-protect>"},
  {"%str", &module_info_boot, "%str"},
  {"%%sym", &module_info_boot, "%%sym"},
  {"<compile-time>", &module_info_ast, "<compile-time>"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"pop-last!", &module_info_protoScollectionsSbuffer, "pop-last!"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"monitor-type", &module_info_ast, "monitor-type"},
  {"set", &module_info_boot, "set"},
  {"as-lowercase", &module_info_protoSmath, "as-lowercase"},
  {"alternative-alternant", &module_info_ast, "alternative-alternant"},
  {"%i&", &module_info_boot, "%i&"},
  {"<restart>", &module_info_runtime, "<restart>"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"table-shrink-threshold-setter", &module_info_protoScollectionsStable, "table-shrink-threshold-setter"},
  {"eof-object?", &module_info_protoSmath, "eof-object?"},
  {"%raw", &module_info_boot, "%raw"},
  {"case", &module_info_macros, "case"},
  {"remove-modules-by-name!", &module_info_ast, "remove-modules-by-name!"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"modulo", &module_info_protoSmath, "modulo"},
  {"swapf", &module_info_macros, "swapf"},
  {"opf", &module_info_macros, "opf"},
  {"%untag", &module_info_boot, "%untag"},
  {"module-target-environment", &module_info_ast, "module-target-environment"},
  {"ct", &module_info_boot, "ct"},
  {"napply", &module_info_macros, "napply"},
  {"range-check", &module_info_protoScollectionsSsequence, "range-check"},
  {"fix-let-body-setter", &module_info_ast, "fix-let-body-setter"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"%fb", &module_info_boot, "%fb"},
  {"mem?", &module_info_protoScollectionsScollection, "mem?"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"%snul", &module_info_boot, "%snul"},
  {"module-exports", &module_info_ast, "module-exports"},
  {"add!", &module_info_protoScollectionsSsequence, "add!"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"<real-reference>", &module_info_ast, "<real-reference>"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"<fix-let>", &module_info_ast, "<fix-let>"},
  {"%cb", &module_info_boot, "%cb"},
  {"fab-map", &module_info_protoScollectionsSmap, "fab-map"},
  {"%i+", &module_info_boot, "%i+"},
  {"collect", &module_info_macros, "collect"},
  {"constant-index", &module_info_ast, "constant-index"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"module-name", &module_info_ast, "module-name"},
  {"*", &module_info_protoSmath, "*"},
  {"dc", &module_info_boot, "dc"},
  {"odd?", &module_info_protoSmath, "odd?"},
  {"function-self-recursive?", &module_info_ast, "function-self-recursive?"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"monitor-handler", &module_info_ast, "monitor-handler"},
  {"use/export", &module_info_boot, "use/export"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"slot", &module_info_boot, "slot"},
  {"fix-let-arguments", &module_info_ast, "fix-let-arguments"},
  {"signature-specs", &module_info_ast, "signature-specs"},
  {"<ast-macro-definition>", &module_info_ast, "<ast-macro-definition>"},
  {"fin", &module_info_boot, "fin"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"environment-uses-modules", &module_info_ast, "environment-uses-modules"},
  {"constant-index-setter", &module_info_ast, "constant-index-setter"},
  {"if", &module_info_boot, "if"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"do-module-loader-modules", &module_info_ast, "do-module-loader-modules"},
  {"probe-module", &module_info_ast, "probe-module"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"cat", &module_info_macros, "cat"},
  {"%i!", &module_info_boot, "%i!"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"-", &module_info_protoSmath, "-"},
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
  {"%char-ready?", &module_info_boot, "%char-ready?"},
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
  {"binding-dotted?", &module_info_ast, "binding-dotted?"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"default", &module_info_protoScollectionsScollection, "default"},
  {"fix-let-body", &module_info_ast, "fix-let-body"},
  {"map-keyed", &module_info_protoScollectionsScollection, "map-keyed"},
  {"truncate", &module_info_protoSmath, "truncate"},
  {"dg", &module_info_boot, "dg"},
  {"<ast-signature>", &module_info_ast, "<ast-signature>"},
  {"eof-object", &module_info_protoSmath, "eof-object"},
  {"for", &module_info_macros, "for"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"<error>", &module_info_runtime, "<error>"},
  {"compose", &module_info_runtime, "compose"},
  {"<local-assignment>", &module_info_ast, "<local-assignment>"},
  {"<static-global-environment>", &module_info_ast, "<static-global-environment>"},
  {"environment-module", &module_info_ast, "environment-module"},
  {"empty", &module_info_protoScollectionsScollection, "empty"},
  {"try", &module_info_boot, "try"},
  {"list", &module_info_protoScollectionsSlist, "list"},
  {"function-source-setter", &module_info_ast, "function-source-setter"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"<immediate-constant>", &module_info_ast, "<immediate-constant>"},
  {"fix-let-arguments-setter", &module_info_ast, "fix-let-arguments-setter"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"address-of", &module_info_protoSmath, "address-of"},
  {"function-debug-name-setter", &module_info_ast, "function-debug-name-setter"},
  {"dec", &module_info_macros, "dec"},
  {"binding-dotted?-setter", &module_info_ast, "binding-dotted?-setter"},
  {"buf", &module_info_protoScollectionsSbuffer, "buf"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"<computed-program>", &module_info_ast, "<computed-program>"},
  {"let", &module_info_boot, "let"},
  {"<fab-list>", &module_info_ast, "<fab-list>"},
  {"remainder", &module_info_protoSmath, "remainder"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"keys", &module_info_protoScollectionsScollection, "keys"},
  {"del-dups", &module_info_protoScollectionsSsequence, "del-dups"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"num-to-str", &module_info_protoSmath, "num-to-str"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"ds", &module_info_boot, "ds"},
  {"def-list", &module_info_ast, "def-list"},
  {"def-programs", &module_info_ast, "def-programs"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"rev", &module_info_protoScollectionsSsequence, "rev"},
  {"from-below-by", &module_info_protoScollectionsSrange, "from-below-by"},
  {"%i=", &module_info_boot, "%i="},
  {"dlet", &module_info_macros, "dlet"},
  {"%isa", &module_info_boot, "%isa"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"<free-environment>", &module_info_ast, "<free-environment>"},
  {"%i?", &module_info_boot, "%i?"},
  {"signature-arity-setter", &module_info_ast, "signature-arity-setter"},
  {"build-condition-interactively", &module_info_runtime, "build-condition-interactively"},
  {"<flo>", &module_info_boot, "<flo>"},
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
  {"sig-value", &module_info_boot, "sig-value"},
  {"class-name", &module_info_boot, "class-name"},
  {"reference-frame-number", &module_info_ast, "reference-frame-number"},
  {"%bb", &module_info_boot, "%bb"},
  {"del", &module_info_protoScollectionsSsequence, "del"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"<buf>", &module_info_protoScollectionsSbuffer, "<buf>"},
  {"locals-bindings-setter", &module_info_ast, "locals-bindings-setter"},
  {"neg", &module_info_protoSmath, "neg"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"list-handlers", &module_info_runtime, "list-handlers"},
  {"<module-binding-reference>", &module_info_ast, "<module-binding-reference>"},
  {"<num>", &module_info_boot, "<num>"},
  {"<int>", &module_info_boot, "<int>"},
  {"nil", &module_info_boot, "nil"},
  {"unchecked-runtime-environment", &module_info_ast, "unchecked-runtime-environment"},
  {"str-to-num", &module_info_protoScollectionsSstring, "str-to-num"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"%i^", &module_info_boot, "%i^"},
  {"==", &module_info_macros, "=="},
  {"binding-type", &module_info_ast, "binding-type"},
  {"function-source", &module_info_ast, "function-source"},
  {"<constant>", &module_info_ast, "<constant>"},
  {"constant-value", &module_info_ast, "constant-value"},
  {"ast-evaluate", &module_info_ast, "ast-evaluate"},
  {"<module>", &module_info_ast, "<module>"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"binding-type-setter", &module_info_ast, "binding-type-setter"},
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
  {"binding-inferred-type", &module_info_ast, "binding-inferred-type"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"%cu", &module_info_boot, "%cu"},
  {"low-elt-setter", &module_info_protoScollectionsScollection, "low-elt-setter"},
  {"empty?", &module_info_macros, "empty?"},
  {"%slot", &module_info_boot, "%slot"},
  {"build-condition-for-handler-interactively", &module_info_runtime, "build-condition-for-handler-interactively"},
  {"<arguments>", &module_info_ast, "<arguments>"},
  {"current-gc-state", &module_info_protoScollectionsStable, "current-gc-state"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"objectify-signature", &module_info_ast, "objectify-signature"},
  {"as-uppercase", &module_info_protoSmath, "as-uppercase"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"ash", &module_info_protoSmath, "ash"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"global-box-value", &module_info_ast, "global-box-value"},
  {"signature-bindings-setter", &module_info_ast, "signature-bindings-setter"},
  {"bound?", &module_info_boot, "bound?"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"<application>", &module_info_ast, "<application>"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"map2", &module_info_protoScollectionsScollection, "map2"},
  {"<log>", &module_info_boot, "<log>"},
  {"find-binding", &module_info_ast, "find-binding"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"case-insensitive-string-hash", &module_info_protoScollectionsStable, "case-insensitive-string-hash"},
  {"<assignment>", &module_info_ast, "<assignment>"},
  {"vec", &module_info_boot, "vec"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"pos?", &module_info_protoSmath, "pos?"},
  {"<map>", &module_info_protoScollectionsSmap, "<map>"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"pick", &module_info_protoScollectionsSsequence, "pick"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"lowercase?", &module_info_protoSmath, "lowercase?"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"function-index", &module_info_ast, "function-index"},
  {"char->ascii", &module_info_protoSmath, "char->ascii"},
  {"<reference>", &module_info_ast, "<reference>"},
  {"not", &module_info_boot, "not"},
  {"any?", &module_info_protoScollectionsScollection, "any?"},
  {"function-binding", &module_info_ast, "function-binding"},
  {"binding-inferred-type-setter", &module_info_ast, "binding-inferred-type-setter"},
  {"<assocs>", &module_info_protoScollectionsSassoc, "<assocs>"},
  {"%selt", &module_info_boot, "%selt"},
  {"$proto-boot-module-name", &module_info_ast, "$proto-boot-module-name"},
  {"@<", &module_info_boot, "@<"},
  {"format-to-string", &module_info_runtime, "format-to-string"},
  {"/", &module_info_protoSmath, "/"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"curry", &module_info_runtime, "curry"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"function-temporaries-setter", &module_info_ast, "function-temporaries-setter"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"<any>", &module_info_boot, "<any>"},
  {"<range>", &module_info_protoScollectionsSrange, "<range>"},
  {"fix-let-types", &module_info_ast, "fix-let-types"},
  {"function-debug-name", &module_info_ast, "function-debug-name"},
  {"dm", &module_info_boot, "dm"},
  {"<ast-method>", &module_info_ast, "<ast-method>"},
  {"alternative-condition", &module_info_ast, "alternative-condition"},
  {"<module-loader>", &module_info_ast, "<module-loader>"},
  {"low-elt", &module_info_protoScollectionsScollection, "low-elt"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"application-arguments", &module_info_ast, "application-arguments"},
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
  {"free-implemented-foreign-bindings", &module_info_ast, "free-implemented-foreign-bindings"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"mif", &module_info_boot, "mif"},
  {"<", &module_info_protoSmath, "<"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"compile-time-program", &module_info_ast, "compile-time-program"},
  {"application-binding", &module_info_ast, "application-binding"},
  {"3rd", &module_info_protoScollectionsSsequence, "3rd"},
  {"signature-value-setter", &module_info_ast, "signature-value-setter"},
  {"from-below", &module_info_protoScollectionsSsequence, "from-below"},
  {"<sequential>", &module_info_ast, "<sequential>"},
  {"bound?-reference", &module_info_ast, "bound?-reference"},
  {"table-growth-threshold-setter", &module_info_protoScollectionsStable, "table-growth-threshold-setter"},
  {"table-growth-factor", &module_info_protoScollectionsStable, "table-growth-factor"},
  {"sequentialize", &module_info_ast, "sequentialize"},
  {"map", &module_info_macros, "map"},
  {"fun", &module_info_boot, "fun"},
  {"%i*", &module_info_boot, "%i*"},
  {"signature-nary?", &module_info_ast, "signature-nary?"},
  {"lsh", &module_info_protoSmath, "lsh"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"%f<", &module_info_boot, "%f<"},
  {"collected", &module_info_macros, "collected"},
  {"do-named-static-global-bindings", &module_info_ast, "do-named-static-global-bindings"},
  {"ascii-whitespaces", &module_info_protoScollectionsSstring, "ascii-whitespaces"},
  {"<subclass>", &module_info_boot, "<subclass>"},
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
  {"free-environment", &module_info_ast, "free-environment"},
  {"or", &module_info_macros, "or"},
  {"signature-arity", &module_info_ast, "signature-arity"},
  {"binding-info-setter", &module_info_ast, "binding-info-setter"},
  {"unless", &module_info_macros, "unless"},
  {"from-above-by", &module_info_protoScollectionsSrange, "from-above-by"},
  {"min", &module_info_protoSmath, "min"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"alternative-consequent", &module_info_ast, "alternative-consequent"},
  {"from-by", &module_info_protoScollectionsSrange, "from-by"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"application-known?", &module_info_ast, "application-known?"},
  {"as-copy", &module_info_protoScollectionsScollection, "as-copy"},
  {"function-data-refs-setter", &module_info_ast, "function-data-refs-setter"},
  {"alter", &module_info_protoScollectionsScollection, "alter"},
  {"copy-state", &module_info_protoScollectionsScollection, "copy-state"},
  {"elt-setter", &module_info_protoScollectionsScollection, "elt-setter"},
  {"fab-p2c-module", &module_info_ast, "fab-p2c-module"},
  {"binding-module-name", &module_info_ast, "binding-module-name"},
  {"fix-let-types-setter", &module_info_ast, "fix-let-types-setter"},
  {"unexec", &module_info_boot, "unexec"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"%ib", &module_info_boot, "%ib"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"@olen", &module_info_boot, "@olen"},
  {"<ast-primitive>", &module_info_ast, "<ast-primitive>"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"2nd", &module_info_protoScollectionsSsequence, "2nd"},
  {"pushf", &module_info_macros, "pushf"},
  {"tup", &module_info_boot, "tup"},
  {"ceiling", &module_info_protoSmath, "ceiling"},
  {"report-undefined-global-bindings", &module_info_ast, "report-undefined-global-bindings"},
  {"module-loader-module-type", &module_info_ast, "module-loader-module-type"},
  {"$permanent-hash-state", &module_info_protoScollectionsStable, "$permanent-hash-state"},
  {"nxt-state", &module_info_macros, "nxt-state"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"collecting", &module_info_macros, "collecting"},
  {"abs", &module_info_protoSmath, "abs"},
  {"ceiling/", &module_info_protoSmath, "ceiling/"},
  {"loc", &module_info_boot, "loc"},
  {"%lb", &module_info_boot, "%lb"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"install-initial-bindings", &module_info_ast, "install-initial-bindings"},
  {"app-args", &module_info_runtime, "app-args"},
  {"load-module", &module_info_ast, "load-module"},
  {"%f-", &module_info_boot, "%f-"},
  {"%velt", &module_info_boot, "%velt"},
  {"reference-called-function?", &module_info_ast, "reference-called-function?"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"now-key", &module_info_protoScollectionsScollection, "now-key"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"sub-setter", &module_info_protoScollectionsSsequence, "sub-setter"},
  {"reference-called-function?-setter", &module_info_ast, "reference-called-function?-setter"},
  {"%with-monitor", &module_info_boot, "%with-monitor"},
  {"popf", &module_info_macros, "popf"},
  {"bind-exit-main-fun", &module_info_ast, "bind-exit-main-fun"},
  {"function-nary?", &module_info_ast, "function-nary?"},
  {"unwind-protect-protected-thunk", &module_info_ast, "unwind-protect-protected-thunk"},
  {"<global-assignment>", &module_info_ast, "<global-assignment>"},
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
  {"power-of-two-ceiling", &module_info_protoSmath, "power-of-two-ceiling"},
  {"runtime-environment", &module_info_ast, "runtime-environment"},
  {"binding-index", &module_info_ast, "binding-index"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"lift!", &Yast_linearizeYliftX},
  {"gather-temporaries!", &Yast_linearizeYgather_temporariesX},
  {"*register-passive?*", &Yast_linearizeYTregister_passiveQT},
  {"do-do-dynamic-extent!", &Yast_linearizeYdo_do_dynamic_extentX},
  {"register-allocate!", &Yast_linearizeYregister_allocateX},
  {"closure-creation-free", &Yast_linearizeYclosure_creation_free},
  {"<flattened-program>", &Yast_linearizeYLflattened_programG},
  {"closure-creation-index", &Yast_linearizeYclosure_creation_index},
  {"closure-creation-index-setter", &Yast_linearizeYclosure_creation_index_setter},
  {"adjoin-free-binding!", &Yast_linearizeYadjoin_free_bindingX},
  {"lift-procedures!", &Yast_linearizeYlift_proceduresX},
  {"form-program-setter", &Yast_linearizeYform_program_setter},
  {"assoc", &Yast_linearizeYassoc},
  {"---main-1---", NULL},
  {"program-definitions", &Yast_linearizeYprogram_definitions},
  {"assoc-value", &Yast_linearizeYassoc_value},
  {"adjoin-temporary-variables!", &Yast_linearizeYadjoin_temporary_variablesX},
  {"collect-temporaries!", &Yast_linearizeYcollect_temporariesX},
  {"program-form-setter", &Yast_linearizeYprogram_form_setter},
  {"assoc-value-setter", &Yast_linearizeYassoc_value_setter},
  {"program-form", &Yast_linearizeYprogram_form},
  {"adjoin-definition!", &Yast_linearizeYadjoin_definitionX},
  {"<box-creation>", &Yast_linearizeYLbox_creationG},
  {"flatten-seqs", &Yast_linearizeYflatten_seqs},
  {"collect-registers!", &Yast_linearizeYcollect_registersX},
  {"<top-level-form>", &Yast_linearizeYLtop_level_formG},
  {"reference-self?-setter", &Yast_linearizeYreference_selfQ_setter},
  {"<box-write>", &Yast_linearizeYLbox_writeG},
  {"form-quotations-setter", &Yast_linearizeYform_quotations_setter},
  {"closurize-main!", &Yast_linearizeYclosurize_mainX},
  {"reference-self?", &Yast_linearizeYreference_selfQ},
  {"do-call-references!", &Yast_linearizeYdo_call_referencesX},
  {"insert-box!", &Yast_linearizeYinsert_boxX},
  {"ast-walk", &Yast_linearizeYast_walk},
  {"form-quotations", &Yast_linearizeYform_quotations},
  {"extract-things!", &Yast_linearizeYextract_thingsX},
  {"as-top-level-forms", &Yast_linearizeYas_top_level_forms},
  {"---main-0---", NULL},
  {"unconstrained-type?", &Yast_linearizeYunconstrained_typeQ},
  {"analyze-dynamic-extent", &Yast_linearizeYanalyze_dynamic_extent},
  {"form-program", &Yast_linearizeYform_program},
  {"do-do-call-references!", &Yast_linearizeYdo_do_call_referencesX},
  {"*renaming-bindings-counter*", &Yast_linearizeYTrenaming_bindings_counterT},
  {"do-do-call-upgrades!", &Yast_linearizeYdo_do_call_upgradesX},
  {"analyze-calls", &Yast_linearizeYanalyze_calls},
  {"<assoc>", &Yast_linearizeYLassocG},
  {"do-call-upgrades!", &Yast_linearizeYdo_call_upgradesX},
  {"assoc-key", &Yast_linearizeYassoc_key},
  {"---main-2---", NULL},
  {"<renamed-local-binding>", &Yast_linearizeYLrenamed_local_bindingG},
  {"box-form", &Yast_linearizeYbox_form},
  {"extract!", &Yast_linearizeYextractX},
  {"form-definitions-setter", &Yast_linearizeYform_definitions_setter},
  {"reference-offset-setter", &Yast_linearizeYreference_offset_setter},
  {"assoc-key-setter", &Yast_linearizeYassoc_key_setter},
  {"<box-read>", &Yast_linearizeYLbox_readG},
  {"program-quotations-setter", &Yast_linearizeYprogram_quotations_setter},
  {"box-form-setter", &Yast_linearizeYbox_form_setter},
  {"<free-reference>", &Yast_linearizeYLfree_referenceG},
  {"allocate-register", &Yast_linearizeYallocate_register},
  {"closure-creation-free-setter", &Yast_linearizeYclosure_creation_free_setter},
  {"program-quotations", &Yast_linearizeYprogram_quotations},
  {"ast-contains-fun?", &Yast_linearizeYast_contains_funQ},
  {"form-definitions", &Yast_linearizeYform_definitions},
  {"boxify-mutable-bindings", &Yast_linearizeYboxify_mutable_bindings},
  {"reference-offset", &Yast_linearizeYreference_offset},
  {"assocq", &Yast_linearizeYassocq},
  {"box-reference-setter", &Yast_linearizeYbox_reference_setter},
  {"do-dynamic-extent!", &Yast_linearizeYdo_dynamic_extentX},
  {"update-walk!", &Yast_linearizeYupdate_walkX},
  {"<closure-creation>", &Yast_linearizeYLclosure_creationG},
  {"box-reference", &Yast_linearizeYbox_reference},
  {"analyze-call-references", &Yast_linearizeYanalyze_call_references},
  {"split-program", &Yast_linearizeYsplit_program},
  {"new-renamed-binding", &Yast_linearizeYnew_renamed_binding},
  {"program-definitions-setter", &Yast_linearizeYprogram_definitions_setter},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"lift!", "lift!"},
  {"*register-passive?*", "*register-passive?*"},
  {"closure-creation-index", "closure-creation-index"},
  {"register-allocate!", "register-allocate!"},
  {"program-definitions", "program-definitions"},
  {"collect-temporaries!", "collect-temporaries!"},
  {"<box-creation>", "<box-creation>"},
  {"flatten-seqs", "flatten-seqs"},
  {"collect-registers!", "collect-registers!"},
  {"<top-level-form>", "<top-level-form>"},
  {"program-form", "program-form"},
  {"<box-write>", "<box-write>"},
  {"closurize-main!", "closurize-main!"},
  {"reference-self?", "reference-self?"},
  {"insert-box!", "insert-box!"},
  {"form-quotations", "form-quotations"},
  {"extract-things!", "extract-things!"},
  {"unconstrained-type?", "unconstrained-type?"},
  {"analyze-dynamic-extent", "analyze-dynamic-extent"},
  {"form-program", "form-program"},
  {"analyze-calls", "analyze-calls"},
  {"gather-temporaries!", "gather-temporaries!"},
  {"<renamed-local-binding>", "<renamed-local-binding>"},
  {"box-form", "box-form"},
  {"<box-read>", "<box-read>"},
  {"<free-reference>", "<free-reference>"},
  {"program-quotations", "program-quotations"},
  {"ast-contains-fun?", "ast-contains-fun?"},
  {"form-definitions", "form-definitions"},
  {"closure-creation-free", "closure-creation-free"},
  {"reference-offset", "reference-offset"},
  {"update-walk!", "update-walk!"},
  {"<closure-creation>", "<closure-creation>"},
  {"box-reference", "box-reference"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_ast_linearize;
MODULE_INFO module_info_ast_linearize = {
  "ast-linearize",
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
extern void load_module_ast (void);
extern void load_module_protoStypes (void);
extern void load_module_protoSmath (void);
extern void load_module_protoScollections (void);

/* EXPRESSION: */

extern void load_module_ast_linearize (void);

void load_module_ast_linearize (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_boot();
  load_module_macros();
  load_module_runtime();
  load_module_ast();
  load_module_protoStypes();
  load_module_protoSmath();
  load_module_protoScollections();

  (P)Yast_linearizeY___main_0___();
  (P)Yast_linearizeY___main_1___();
  (P)Yast_linearizeY___main_2___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
