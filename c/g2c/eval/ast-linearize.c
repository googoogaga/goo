/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: ast-linearize */

EXT(YastYbinding_kind,"ast","binding-kind");
EXT(YruntimeYreduceA,"runtime","reduce+");
DEF(Yast_linearizeYform_program_setter,"ast-linearize","form-program-setter");
EXT(YastYmodule_target_environment,"ast","module-target-environment");
EXT(YmacrosYmap,"macros","map");
EXT(Ynul,"boot","nul");
EXT(YruntimeYcurry,"runtime","curry");
EXT(YastYLast_genericG,"ast","<ast-generic>");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
DEF(Yast_linearizeYbox_reference_setter,"ast-linearize","box-reference-setter");
EXT(Ysig_value,"boot","sig-value");
EXT(YruntimeYin,"runtime","in");
EXT(Yclass_name,"boot","class-name");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YastYLfree_environmentG,"ast","<free-environment>");
DEF(Yast_linearizeYprogram_definitions_setter,"ast-linearize","program-definitions-setter");
EXT(YruntimeYalways,"runtime","always");
EXT(Ymay_isaQ,"boot","may-isa?");
DEF(Yast_linearizeYprogram_quotations,"ast-linearize","program-quotations");
EXT(YastYLassignmentG,"ast","<assignment>");
EXT(YastYmonitor_main_thunk,"ast","monitor-main-thunk");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YLintG,"boot","<int>");
EXT(YLnumG,"boot","<num>");
EXT(YruntimeYmap2,"runtime","map2");
EXT(YastYfunction_source_setter,"ast","function-source-setter");
EXT(YastYglobal_box_value_setter,"ast","global-box-value-setter");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
EXT(YastYfunction_data_refs_setter,"ast","function-data-refs-setter");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(YastYLlocal_referenceG,"ast","<local-reference>");
EXT(YruntimeYread_char,"runtime","read-char");
EXT(YastYLdefinitionG,"ast","<definition>");
DEF(Yast_linearizeYTrenaming_bindings_counterT,"ast-linearize","*renaming-bindings-counter*");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
DEF(Yast_linearizeYboxify_mutable_bindings,"ast-linearize","boxify-mutable-bindings");
EXT(Yfun_value,"boot","fun-value");
EXT(YastYload_in,"ast","load-in");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YastYglobal_box_value,"ast","global-box-value");
EXT(YastYsignature_specs,"ast","signature-specs");
EXT(YastYalternative_condition,"ast","alternative-condition");
EXT(YastYsignature_naryQ,"ast","signature-nary?");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
EXT(YastYfunction_signature_setter,"ast","function-signature-setter");
DEF(Yast_linearizeYallocate_register,"ast-linearize","allocate-register");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YastYunwind_protect_cleanup_thunk,"ast","unwind-protect-cleanup-thunk");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YastYfunction_temporaries,"ast","function-temporaries");
EXT(YastYsignature_value,"ast","signature-value");
EXT(YLchrG,"boot","<chr>");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YastYmodule_name_to_relpath,"ast","module-name-to-relpath");
EXT(YastYsignature_names_setter,"ast","signature-names-setter");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(YruntimeYfloorS,"runtime","floor/");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(YastYlocals_body_setter,"ast","locals-body-setter");
EXT(YastYfunction_debug_name,"ast","function-debug-name");
EXT(YruntimeYreduce,"runtime","reduce");
DEF(Yast_linearizeYform_definitions_setter,"ast-linearize","form-definitions-setter");
EXT(YPslot,"boot","%slot");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YastYLglobal_referenceG,"ast","<global-reference>");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(Ysig_names,"boot","sig-names");
EXT(YastYlocals_functions_setter,"ast","locals-functions-setter");
DEF(Yast_linearizeYextract_thingsX,"ast-linearize","extract-things!");
EXT(YastYLast_primitive_definitionG,"ast","<ast-primitive-definition>");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(YruntimeYroundS,"runtime","round/");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(YDmin_int,"boot","$min-int");
EXT(YruntimeYassocq,"runtime","assocq");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YruntimeYnow_elt,"runtime","now-elt");
DEF(Yast_linearizeYTregister_passiveQT,"ast-linearize","*register-passive?*");
EXT(YLlogG,"boot","<log>");
EXT(YastYlocals_body,"ast","locals-body");
EXT(YruntimeYflo_bits,"runtime","flo-bits");
EXT(YruntimeYlsh,"runtime","lsh");
EXT(YastYas_lst,"ast","as-lst");
EXT(YruntimeYash,"runtime","ash");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YLslotG,"boot","<slot>");
EXT(YruntimeYPwith_monitor,"runtime","%with-monitor");
EXT(YruntimeYTprint_baseT,"runtime","*print-base*");
EXT(YruntimeYLfile_input_portG,"runtime","<file-input-port>");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YmacrosYpair,"macros","pair");
EXT(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
EXT(YastYLmoduleG,"ast","<module>");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(Ynot,"boot","not");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
DEF(Yast_linearizeYdo_do_dynamic_extentX,"ast-linearize","do-do-dynamic-extent!");
EXT(YruntimeY_,"runtime","-");
EXT(YastYapplication_binding,"ast","application-binding");
EXT(Yfun_name,"boot","fun-name");
EXT(YruntimeYabs,"runtime","abs");
EXT(Yclass_parents,"boot","class-parents");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YruntimeYmax,"runtime","max");
EXT(YastYapplication_tailQ,"ast","application-tail?");
EXT(YLanyG,"boot","<any>");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
DEF(Yast_linearizeYextractX,"ast-linearize","extract!");
EXT(YastYLast_functionG,"ast","<ast-function>");
EXT(YruntimeYT,"runtime","*");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
DEF(Yast_linearizeYcollect_registersX,"ast-linearize","collect-registers!");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Ytype_class,"boot","type-class");
EXT(YastYbinding_value_setter,"ast","binding-value-setter");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(YastYLunwind_protectG,"ast","<unwind-protect>");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(YLunionG,"boot","<union>");
EXT(YastYconstant_index_setter,"ast","constant-index-setter");
DEF(Yast_linearizeYinsert_boxX,"ast-linearize","insert-box!");
EXT(Ylst,"boot","lst");
DEF(Yast_linearizeYcollect_temporariesX,"ast-linearize","collect-temporaries!");
EXT(Yslot_value,"boot","slot-value");
EXT(YDmax_int,"boot","$max-int");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YmacrosYcat,"macros","cat");
EXT(YastYbinding_global_box,"ast","binding-global-box");
DEF(Yast_linearizeYprogram_form_setter,"ast-linearize","program-form-setter");
EXT(YastYconstant_index,"ast","constant-index");
EXT(YastYLlocal_assignmentG,"ast","<local-assignment>");
EXT(YastYassignment_form_setter,"ast","assignment-form-setter");
DEF(Yast_linearizeYform_program,"ast-linearize","form-program");
EXT(YastYsignature_naryQ_setter,"ast","signature-nary?-setter");
EXT(YruntimeYassoc,"runtime","assoc");
EXT(YastYbinding_value,"ast","binding-value");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(YruntimeYfloor,"runtime","floor");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(YastYbind_exit_main_fun,"ast","bind-exit-main-fun");
EXT(YmacrosYvar_name,"macros","var-name");
DEF(Yast_linearizeYbox_form,"ast-linearize","box-form");
DEF(Yast_linearizeYas_top_level_forms,"ast-linearize","as-top-level-forms");
EXT(YruntimeYmodulo,"runtime","modulo");
EXT(YruntimeYpick,"runtime","pick");
EXT(YastYmonitor_handler,"ast","monitor-handler");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
EXT(YruntimeYlast,"runtime","last");
DEF(Yast_linearizeYclosure_creation_index_setter,"ast-linearize","closure-creation-index-setter");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YruntimeYlow_elt,"runtime","low-elt");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YastYLmodule_bindingG,"ast","<module-binding>");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(Yfab_sym,"boot","fab-sym");
EXT(YastYLast_macro_definitionG,"ast","<ast-macro-definition>");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YruntimeYLE,"runtime","<=");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(YastYLargumentsG,"ast","<arguments>");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YastYLast_signatureG,"ast","<ast-signature>");
EXT(YruntimeYformat,"runtime","format");
EXT(YruntimeYall2Q,"runtime","all2?");
EXT(YastYfunction_signature,"ast","function-signature");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");
EXT(YastYmodule_syntax_environment,"ast","module-syntax-environment");
EXT(YruntimeYlow_elt_setter,"runtime","low-elt-setter");
EXT(YastYreport_undefined_global_bindings,"ast","report-undefined-global-bindings");
EXT(YastYruntime_environment,"ast","runtime-environment");
EXT(Yunexec,"boot","unexec");
EXT(YruntimeYmemQ,"runtime","mem?");
EXT(YastYfix_let_bindings_setter,"ast","fix-let-bindings-setter");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(YastYdo_module_loader_modules,"ast","do-module-loader-modules");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YastYassignment_binding,"ast","assignment-binding");
EXT(YPsnul,"boot","%snul");
EXT(Yerror,"boot","error");
EXT(YruntimeYlogior,"runtime","logior");
EXT(YruntimeYrev,"runtime","rev");
DEF(Yast_linearizeYLbox_writeG,"ast-linearize","<box-write>");
EXT(YruntimeYclose_output_port,"runtime","close-output-port");
EXT(YastYfunction_self_recursiveQ_setter,"ast","function-self-recursive?-setter");
EXT(YruntimeYLstepG,"runtime","<step>");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(YastYDproto_boot_module_name,"ast","$proto-boot-module-name");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YastYprogram_type_setter,"ast","program-type-setter");
EXT(YastYfunction_temporaries_setter,"ast","function-temporaries-setter");
EXT(YruntimeYG,"runtime",">");
EXT(YastYdo_named_static_global_bindings,"ast","do-named-static-global-bindings");
EXT(YruntimeYNE,"runtime","~=");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YastYremove_modules_by_nameX,"ast","remove-modules-by-name!");
EXT(YastYdo_static_global_bindings,"ast","do-static-global-bindings");
EXT(YPvnul,"boot","%vnul");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YastYbinding_name,"ast","binding-name");
DEF(Yast_linearizeYanalyze_call_references,"ast-linearize","analyze-call-references");
EXT(YruntimeYsig,"runtime","sig");
EXT(YastYLpredefined_applicationG,"ast","<predefined-application>");
EXT(YastYreference_frame_offset,"ast","reference-frame-offset");
EXT(Yadd_slot,"boot","add-slot");
EXT(YruntimeYcopy_state,"runtime","copy-state");
DEF(Yast_linearizeYprogram_definitions,"ast-linearize","program-definitions");
EXT(YastYfunction_registers_setter,"ast","function-registers-setter");
EXT(YastYfunction_source,"ast","function-source");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YastYlocals_functions,"ast","locals-functions");
DEF(Yast_linearizeYadjoin_free_bindingX,"ast-linearize","adjoin-free-binding!");
EXT(YruntimeYlogxor,"runtime","logxor");
EXT(YastYsignature_arity_setter,"ast","signature-arity-setter");
EXT(YastYmodule_binding,"ast","module-binding");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
DEF(Yast_linearizeYLbox_creationG,"ast-linearize","<box-creation>");
EXT(YastYsignature_bindings_setter,"ast","signature-bindings-setter");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(YruntimeYL,"runtime","<");
EXT(YruntimeYpop,"runtime","pop");
EXT(YastYlocals_bindings,"ast","locals-bindings");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YPdefine_method,"boot","%define-method");
EXT(YastYDproto_runtime_module_name,"ast","$proto-runtime-module-name");
EXT(YastYfunction_self_recursiveQ,"ast","function-self-recursive?");
EXT(YastYLglobal_boxG,"ast","<global-box>");
EXT(YruntimeYdefault,"runtime","default");
DEF(Yast_linearizeYdo_do_call_referencesX,"ast-linearize","do-do-call-references!");
EXT(YastYfind_binding,"ast","find-binding");
DEF(Yast_linearizeYdo_do_call_upgradesX,"ast-linearize","do-do-call-upgrades!");
EXT(YLoptsG,"boot","<opts>");
EXT(YruntimeYkeys,"runtime","keys");
EXT(YruntimeYlogand,"runtime","logand");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YastYLmonitorG,"ast","<monitor>");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YastYLmodule_binding_referenceG,"ast","<module-binding-reference>");
EXT(YastYalternative_alternant,"ast","alternative-alternant");
EXT(YruntimeYlen,"runtime","len");
DEF(Yast_linearizeYclosure_creation_free_setter,"ast-linearize","closure-creation-free-setter");
EXT(YastYfunction_index_setter,"ast","function-index-setter");
EXT(YmacrosYnapply,"macros","napply");
EXT(YastYreference_called_functionQ_setter,"ast","reference-called-function?-setter");
EXT(YruntimeYE,"runtime","=");
EXT(YastYprogram_type,"ast","program-type");
EXT(YmacrosYtup,"macros","tup");
EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYceiling,"runtime","ceiling");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(YastYLreferenceG,"ast","<reference>");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YruntimeYid_hash,"runtime","id-hash");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(YruntimeYeof_object,"runtime","eof-object");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(YruntimeYlognot,"runtime","lognot");
EXT(YastYlocals_bindings_setter,"ast","locals-bindings-setter");
DEF(Yast_linearizeYanalyze_dynamic_extent,"ast-linearize","analyze-dynamic-extent");
EXT(YruntimeYLincongruent_method_errorG,"runtime","<incongruent-method-error>");
EXT(YastYfunction_bindings,"ast","function-bindings");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YruntimeYany2Q,"runtime","any2?");
EXT(Ytype_object,"boot","type-object");
EXT(YastYbinding_global_box_setter,"ast","binding-global-box-setter");
EXT(YastYfunction_registers,"ast","function-registers");
DEF(Yast_linearizeYdo_dynamic_extentX,"ast-linearize","do-dynamic-extent!");
DEF(Yast_linearizeYLtop_level_formG,"ast-linearize","<top-level-form>");
EXT(YLclassG,"boot","<class>");
EXT(YruntimeYas,"runtime","as");
EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
DEF(Yast_linearizeYdo_call_referencesX,"ast-linearize","do-call-references!");
EXT(YastYbinding_inferred_type_setter,"ast","binding-inferred-type-setter");
DEF(Yast_linearizeYform_definitions,"ast-linearize","form-definitions");
EXT(YruntimeYto_digit,"runtime","to-digit");
EXT(YastYLbotG,"ast","<bot>");
EXT(YastYprobe_module,"ast","probe-module");
EXT(YastYbinding_dottedQ,"ast","binding-dotted?");
EXT(YastYLsequentialG,"ast","<sequential>");
EXT(YastYLreal_referenceG,"ast","<real-reference>");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(YastYapplication_knownQ,"ast","application-known?");
EXT(YastYfunction_index,"ast","function-index");
EXT(YastYapplication_knownQ_setter,"ast","application-known?-setter");
EXT(YastYbinding_dynamic_extentQ,"ast","binding-dynamic-extent?");
EXT(YastYbinding_index_setter,"ast","binding-index-setter");
EXT(YruntimeYassq,"runtime","assq");
EXT(YastYbinding_native_toQ,"ast","binding-native-to?");
EXT(YLtypeG,"boot","<type>");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
EXT(YastYapplication_function,"ast","application-function");
EXT(YruntimeYpush,"runtime","push");
EXT(YastYset_module_environments,"ast","set-module-environments");
EXT(YastYmodule_name,"ast","module-name");
EXT(YastYbinding_dynamic_extentQ_setter,"ast","binding-dynamic-extent?-setter");
EXT(YastYbinding_inferred_type,"ast","binding-inferred-type");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YastYLregular_applicationG,"ast","<regular-application>");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
EXT(YruntimeYfill,"runtime","fill");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YastYbinding_mutableQ,"ast","binding-mutable?");
EXT(YruntimeYout,"runtime","out");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
EXT(YastYassignment_form,"ast","assignment-form");
EXT(YruntimeYfrom,"runtime","from");
EXT(YastYapplication_arguments,"ast","application-arguments");
EXT(Yobject_parents,"boot","object-parents");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YLgenG,"boot","<gen>");
EXT(YastYenv_object_name,"ast","env-object-name");
EXT(YastYLstatic_global_environmentG,"ast","<static-global-environment>");
EXT(YruntimeYfirst_then,"runtime","first-then");
DEF(Yast_linearizeYadjoin_temporary_variablesX,"ast-linearize","adjoin-temporary-variables!");
EXT(Yslot_init,"boot","slot-init");
EXT(YruntimeYlen_setter,"runtime","len-setter");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(YastYreference_frame_number,"ast","reference-frame-number");
EXT(YruntimeYfalse_or,"runtime","false-or");
EXT(YastYmodule_loader_module_type,"ast","module-loader-module-type");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(YastYLlocalsG,"ast","<locals>");
EXT(YPsymbols,"boot","%symbols");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
EXT(YastYfunction_value,"ast","function-value");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YastYsignature_bindings,"ast","signature-bindings");
EXT(YruntimeYzeroQ,"runtime","zero?");
DEF(Yast_linearizeYclosure_creation_free,"ast-linearize","closure-creation-free");
EXT(Yobject_slots,"boot","object-slots");
DEF(Yast_linearizeYLfree_referenceG,"ast-linearize","<free-reference>");
EXT(YastYinit_ast,"ast","init-ast");
EXT(YruntimeYaddress_of,"runtime","address-of");
EXT(YastYsignature_names,"ast","signature-names");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
EXT(YruntimeYalter,"runtime","alter");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YLsymG,"boot","<sym>");
EXT(Ysym_name,"boot","sym-name");
EXT(YastYbinding_info_setter,"ast","binding-info-setter");
EXT(YruntimeYGE,"runtime",">=");
EXT(YastYbinding_module_name,"ast","binding-module-name");
EXT(YmacrosYelt,"macros","elt");
EXT(Yfind_setter,"boot","find-setter");
DEF(Yast_linearizeYregister_allocateX,"ast-linearize","register-allocate!");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(YastYprogram_register_setter,"ast","program-register-setter");
EXT(YruntimeYLlistG,"runtime","<list>");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YastYprogram_register,"ast","program-register");
EXT(YruntimeYnewline,"runtime","newline");
EXT(YastYLast_methodG,"ast","<ast-method>");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YastYfunction_free,"ast","function-free");
EXT(YastYbinding_info,"ast","binding-info");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
EXT(YruntimeYvec,"runtime","vec");
EXT(YastYreference_binding,"ast","reference-binding");
EXT(YLstrG,"boot","<str>");
EXT(YastYLbindingG,"ast","<binding>");
EXT(YastYcompile_time_program,"ast","compile-time-program");
EXT(YruntimeYstr,"runtime","str");
EXT(YastYfind_environment_module,"ast","find-environment-module");
DEF(Yast_linearizeYupdate_walkX,"ast-linearize","update-walk!");
DEF(Yast_linearizeYform_quotations_setter,"ast-linearize","form-quotations-setter");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YastYbinding_type_setter,"ast","binding-type-setter");
EXT(YastYfunction_body,"ast","function-body");
EXT(YastYLraw_constantG,"ast","<raw-constant>");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(YruntimeYread,"runtime","read");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YruntimeY1st,"runtime","1st");
DEF(Yast_linearizeYLflattened_programG,"ast-linearize","<flattened-program>");
EXT(YastYinit_environment_for_eval,"ast","init-environment-for-eval");
DEF(Yast_linearizeYreference_offset_setter,"ast-linearize","reference-offset-setter");
EXT(YastYmonitor_test,"ast","monitor-test");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(YruntimeYpos,"runtime","pos");
EXT(YruntimeYdo3,"runtime","do3");
EXT(YastYLruntime_referenceG,"ast","<runtime-reference>");
EXT(YastYfunction_body_setter,"ast","function-body-setter");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(YastYLprogramsG,"ast","<programs>");
EXT(YruntimeYdo,"runtime","do");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YastYbinding_type,"ast","binding-type");
EXT(YastYLcomputed_programG,"ast","<computed-program>");
EXT(YastYLconstantG,"ast","<constant>");
EXT(YruntimeYround,"runtime","round");
EXT(YastYLfab_listG,"ast","<fab-list>");
EXT(YLvecG,"boot","<vec>");
EXT(YastYboundQ_reference,"ast","bound?-reference");
EXT(YastYenvironment_module,"ast","environment-module");
DEF(Yast_linearizeYast_walk,"ast-linearize","ast-walk");
EXT(YastYunwind_protect_protected_thunk,"ast","unwind-protect-protected-thunk");
EXT(Yslot_owner,"boot","slot-owner");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
DEF(Yast_linearizeYprogram_quotations_setter,"ast-linearize","program-quotations-setter");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
DEF(Yast_linearizeYunconstrained_typeQ,"ast-linearize","unconstrained-type?");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(Yfun_names,"boot","fun-names");
EXT(YLmetG,"boot","<met>");
EXT(YastYLruntime_assignmentG,"ast","<runtime-assignment>");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(Yhead_setter,"boot","head-setter");
EXT(YastYLalternativeG,"ast","<alternative>");
EXT(YruntimeYfab,"runtime","fab");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
EXT(Yfind_getter,"boot","find-getter");
EXT(Yfile_opening_error,"boot","file-opening-error");
DEF(Yast_linearizeYprogram_form,"ast-linearize","program-form");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YLflatG,"boot","<flat>");
EXT(YruntimeYlist,"runtime","list");
EXT(Yhead,"boot","head");
EXT(YruntimeYmake_handler,"runtime","make-handler");
DEF(Yast_linearizeYgather_temporariesX,"ast-linearize","gather-temporaries!");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(YastYast_define_binding,"ast","ast-define-binding");
EXT(YastYLbind_exitG,"ast","<bind-exit>");
EXT(YastYsequentialize,"ast","sequentialize");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(YruntimeYevenQ,"runtime","even?");
EXT(YastYast_evaluate,"ast","ast-evaluate");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
EXT(YastYLlocal_bindingG,"ast","<local-binding>");
DEF(Yast_linearizeYLbox_readG,"ast-linearize","<box-read>");
EXT(YruntimeYbuf,"runtime","buf");
EXT(YastYLast_primitiveG,"ast","<ast-primitive>");
EXT(Yobject_class,"boot","object-class");
EXT(YastYload_module,"ast","load-module");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
EXT(YastYLprogramG,"ast","<program>");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YastYLglobal_assignmentG,"ast","<global-assignment>");
EXT(YastYobjectify_signature,"ast","objectify-signature");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
DEF(Yast_linearizeYbox_form_setter,"ast-linearize","box-form-setter");
EXT(YruntimeYdel_dups,"runtime","del-dups");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(YruntimeYnegQ,"runtime","neg?");
EXT(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
EXT(YastYLpassive_programG,"ast","<passive-program>");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
DEF(Yast_linearizeYflatten_seqs,"ast-linearize","flatten-seqs");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YLfunG,"boot","<fun>");
DEF(Yast_linearizeYanalyze_calls,"ast-linearize","analyze-calls");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YastYbinding_locative,"ast","binding-locative");
EXT(YruntimeYempty,"runtime","empty");
EXT(YastYLboundQG,"ast","<bound?>");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(YastYalternative_consequent,"ast","alternative-consequent");
EXT(YastYfree_environment,"ast","free-environment");
EXT(YLlstG,"boot","<lst>");
EXT(YruntimeYfrom_above,"runtime","from-above");
EXT(YruntimeYtL,"runtime","t<");
EXT(YastYmodule_exports,"ast","module-exports");
EXT(YastYsignature_value_setter,"ast","signature-value-setter");
EXT(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YastYconstant_value,"ast","constant-value");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YLtupG,"boot","<tup>");
EXT(Ytype_error,"boot","type-error");
EXT(YruntimeYdo2,"runtime","do2");
EXT(YastYbinding_index,"ast","binding-index");
EXT(Ytail_setter,"boot","tail-setter");
EXT(YastYfix_let_body_setter,"ast","fix-let-body-setter");
EXT(Yslot_type,"boot","slot-type");
DEF(Yast_linearizeYdo_call_upgradesX,"ast-linearize","do-call-upgrades!");
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(YastYfree_implemented_foreign_bindings,"ast","free-implemented-foreign-bindings");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YastYfunction_naryQ,"ast","function-nary?");
EXT(YruntimeYassqn,"runtime","assqn");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YLseqG,"boot","<seq>");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YastYLapplicationG,"ast","<application>");
DEF(Yast_linearizeYsplit_program,"ast-linearize","split-program");
EXT(YastYfunction_binding,"ast","function-binding");
EXT(YruntimeYA,"runtime","+");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YastYreference_called_functionQ,"ast","reference-called-function?");
EXT(Ytail,"boot","tail");
EXT(YastYfunction_data_refs,"ast","function-data-refs");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YmacrosYEE,"macros","==");
EXT(YastYmonitor_info,"ast","monitor-info");
EXT(YastYfunction_debug_name_setter,"ast","function-debug-name-setter");
EXT(YastYfix_let_types_setter,"ast","fix-let-types-setter");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YruntimeYmin,"runtime","min");
EXT(YastYfix_let_bindings,"ast","fix-let-bindings");
EXT(YruntimeYS,"runtime","/");
DEF(Yast_linearizeYliftX,"ast-linearize","lift!");
EXT(YastYfix_let_arguments_setter,"ast","fix-let-arguments-setter");
EXT(YastYinstall_initial_bindings,"ast","install-initial-bindings");
EXT(YruntimeYtE,"runtime","t=");
EXT(YruntimeYfab_map,"runtime","fab-map");
EXT(YruntimeYfrom_by,"runtime","from-by");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(Yclass_slots,"boot","class-slots");
DEF(Yast_linearizeYreference_selfQ_setter,"ast-linearize","reference-self?-setter");
EXT(YruntimeYtruncate,"runtime","truncate");
EXT(YruntimeYfabs,"runtime","fabs");
DEF(Yast_linearizeYform_quotations,"ast-linearize","form-quotations");
EXT(YruntimeYLrangeG,"runtime","<range>");
DEF(Yast_linearizeYlift_proceduresX,"ast-linearize","lift-procedures!");
EXT(YLcolG,"boot","<col>");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(Yfab_class,"boot","fab-class");
EXT(YastYLimmediate_constantG,"ast","<immediate-constant>");
DEF(Yast_linearizeYreference_offset,"ast-linearize","reference-offset");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(YruntimeYdel,"runtime","del");
EXT(Yunknown_function_error,"boot","unknown-function-error");
DEF(Yast_linearizeYbox_reference,"ast-linearize","box-reference");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YastYsignature_specs_setter,"ast","signature-specs-setter");
EXT(YastYLfix_letG,"ast","<fix-let>");
DEF(Yast_linearizeYnew_renamed_binding,"ast-linearize","new-renamed-binding");
DEF(Yast_linearizeYreference_selfQ,"ast-linearize","reference-self?");
EXT(YLsigG,"boot","<sig>");
EXT(YastYfab_p2c_module,"ast","fab-p2c-module");
EXT(YastYmonitor_type,"ast","monitor-type");
EXT(YastYbinding_dottedQ_setter,"ast","binding-dotted?-setter");
EXT(YastYfix_let_body,"ast","fix-let-body");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
EXT(YastYfunction_free_setter,"ast","function-free-setter");
EXT(YastYsignature_arity,"ast","signature-arity");
EXT(YastYfix_let_arguments,"ast","fix-let-arguments");
DEF(Yast_linearizeYast_contains_funQ,"ast-linearize","ast-contains-fun?");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
EXT(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
EXT(YruntimeYoddQ,"runtime","odd?");
EXT(Ynil,"boot","nil");
EXT(YLlocG,"boot","<loc>");
EXT(YPPmacro,"boot","%%macro");
EXT(YastYobjectify_quotation,"ast","objectify-quotation");
EXT(YastYLmodule_loaderG,"ast","<module-loader>");
EXT(YruntimeYtA,"runtime","t+");
EXT(YastYenvironment_uses_modules,"ast","environment-uses-modules");
EXT(YruntimeYsub,"runtime","sub");
DEF(Yast_linearizeYclosurize_mainX,"ast-linearize","closurize-main!");
EXT(YruntimeYelt_or,"runtime","elt-or");
DEF(Yast_linearizeYclosure_creation_index,"ast-linearize","closure-creation-index");
DEF(Yast_linearizeYLrenamed_local_bindingG,"ast-linearize","<renamed-local-binding>");
DEF(Yast_linearizeYLclosure_creationG,"ast-linearize","<closure-creation>");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(Ytype_elts,"boot","type-elts");
EXT(YastYobjectify,"ast","objectify");
EXT(YisaQ,"boot","isa?");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YastYfix_let_types,"ast","fix-let-types");
EXT(YruntimeYneg,"runtime","neg");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YPisa,"boot","%isa");
EXT(YastYLcompile_timeG,"ast","<compile-time>");
EXT(YastYassignment_reference,"ast","assignment-reference");
EXT(YLfloG,"boot","<flo>");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(YruntimeYfind_key,"runtime","find-key");
DEF(Yast_linearizeYadjoin_definitionX,"ast-linearize","adjoin-definition!");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_45);
DEFLIT(lit_87);
DEFLIT(lit_36);
DEFLIT(lit_38);
DEFLIT(lit_86);
DEFLIT(lit_80);
DEFLIT(lit_75);
DEFLIT(lit_41);
DEFLIT(lit_78);
DEFLIT(lit_89);
DEFLIT(lit_28);
DEFLIT(lit_91);
DEFLIT(lit_60);
DEFLIT(lit_73);
DEFLIT(lit_12);
DEFLIT(lit_105);
DEFLIT(lit_3);
DEFLIT(lit_110);
DEFLIT(lit_58);
DEFLIT(lit_57);
DEFLIT(lit_67);
DEFLIT(lit_61);
DEFLIT(lit_32);
DEFLIT(lit_83);
DEFLIT(lit_7);
DEFLIT(lit_63);
DEFLIT(lit_71);
DEFLIT(lit_50);
DEFLIT(lit_55);
DEFLIT(lit_8);
DEFLIT(lit_29);
DEFLIT(lit_31);
DEFLIT(lit_22);
DEFLIT(lit_47);
DEFLIT(lit_49);
DEFLIT(lit_113);
DEFLIT(lit_77);
DEFLIT(lit_103);
DEFLIT(lit_39);
DEFLIT(lit_51);
DEFLIT(lit_54);
DEFLIT(lit_53);
DEFLIT(lit_106);
DEFLIT(lit_114);
DEFLIT(lit_52);
DEFLIT(lit_2);
DEFLIT(lit_59);
DEFLIT(lit_27);
DEFLIT(lit_66);
DEFLIT(lit_94);
DEFLIT(lit_98);
DEFLIT(lit_18);
DEFLIT(lit_11);
DEFLIT(lit_14);
DEFLIT(lit_62);
DEFLIT(lit_21);
DEFLIT(lit_24);
DEFLIT(lit_81);
DEFLIT(lit_102);
DEFLIT(lit_1);
DEFLIT(lit_65);
DEFLIT(lit_112);
DEFLIT(lit_107);
DEFLIT(lit_23);
DEFLIT(lit_72);
DEFLIT(lit_35);
DEFLIT(lit_16);
DEFLIT(lit_99);
DEFLIT(lit_10);
DEFLIT(lit_70);
DEFLIT(lit_20);
DEFLIT(lit_43);
DEFLIT(lit_48);
DEFLIT(lit_74);
DEFLIT(lit_84);
DEFLIT(lit_34);
DEFLIT(lit_76);
DEFLIT(lit_46);
DEFLIT(lit_111);
DEFLIT(lit_88);
DEFLIT(lit_40);
DEFLIT(lit_0);
DEFLIT(lit_93);
DEFLIT(lit_5);
DEFLIT(lit_19);
DEFLIT(lit_33);
DEFLIT(lit_79);
DEFLIT(lit_13);
DEFLIT(lit_108);
DEFLIT(lit_109);
DEFLIT(lit_4);
DEFLIT(lit_56);
DEFLIT(lit_37);
DEFLIT(lit_85);
DEFLIT(lit_15);
DEFLIT(lit_17);
DEFLIT(lit_92);
DEFLIT(lit_64);
DEFLIT(lit_95);
DEFLIT(lit_90);
DEFLIT(lit_26);
DEFLIT(lit_101);
DEFLIT(lit_30);
DEFLIT(lit_82);
DEFLIT(lit_96);
DEFLIT(lit_100);
DEFLIT(lit_68);
DEFLIT(lit_97);
DEFLIT(lit_44);
DEFLIT(lit_6);
DEFLIT(lit_25);
DEFLIT(lit_42);
DEFLIT(lit_69);
DEFLIT(lit_9);
DEFLIT(lit_104);

/* FUNCTIONS: */

LOCFOR(fun_x_1297_0);
LOCFOR(fun_update_walkX_1);
LOCFOR(fun_x_1300_2);
LOCFOR(fun_ast_walk_3);
LOCFOR(fun_box_reference_4);
LOCFOR(fun_box_reference_setter_5);
LOCFOR(fun_6);
LOCFOR(fun_box_reference_7);
LOCFOR(fun_box_reference_setter_8);
LOCFOR(fun_9);
LOCFOR(fun_box_form_10);
LOCFOR(fun_box_form_setter_11);
LOCFOR(fun_12);
LOCFOR(fun_box_reference_13);
LOCFOR(fun_box_reference_setter_14);
LOCFOR(fun_15);
LOCFOR(fun_insert_boxX_16);
LOCFOR(fun_insert_boxX_17);
LOCFOR(fun_insert_boxX_18);
LOCFOR(fun_insert_boxX_19);
LOCFOR(fun_insert_boxX_20);
LOCFOR(fun_insert_boxX_21);
LOCFOR(fun_loop_22);
LOCFOR(fun_boxify_mutable_bindings_23);
LOCFOR(fun_do_do_call_referencesX_24);
LOCFOR(fun_do_call_referencesX_25);
LOCFOR(fun_do_call_referencesX_26);
LOCFOR(fun_analyze_call_references_27);
LOCFOR(fun_do_do_dynamic_extentX_28);
LOCFOR(fun_do_dynamic_extentX_29);
LOCFOR(fun_do_dynamic_extentX_30);
LOCFOR(fun_analyze_dynamic_extent_31);
LOCFOR(fun_do_do_call_upgradesX_32);
LOCFOR(fun_do_call_upgradesX_33);
LOCFOR(fun_unconstrained_typeQ_34);
LOCFOR(fun_unconstrained_typeQ_35);
LOCFOR(fun_do_call_upgradesX_36);
LOCFOR(fun_analyze_calls_37);
LOCFOR(fun_reference_offset_38);
LOCFOR(fun_reference_offset_setter_39);
LOCFOR(fun_40);
LOCFOR(fun_reference_selfQ_41);
LOCFOR(fun_reference_selfQ_setter_42);
LOCFOR(fun_43);
LOCFOR(fun_liftX_44);
LOCFOR(fun_lift_proceduresX_45);
LOCFOR(fun_lift_proceduresX_46);
LOCFOR(fun_add_47);
LOCFOR(fun_check_48);
LOCFOR(fun_adjoin_free_bindingX_49);
LOCFOR(fun_lift_proceduresX_50);
LOCFOR(fun_lift_proceduresX_51);
LOCFOR(fun_lift_proceduresX_52);
LOCFOR(fun_lift_proceduresX_53);
LOCFOR(fun_lift_proceduresX_54);
LOCFOR(fun_program_form_55);
LOCFOR(fun_program_form_setter_56);
LOCFOR(fun_57);
LOCFOR(fun_program_quotations_58);
LOCFOR(fun_program_quotations_setter_59);
LOCFOR(fun_60);
LOCFOR(fun_program_definitions_61);
LOCFOR(fun_program_definitions_setter_62);
LOCFOR(fun_63);
LOCFOR(fun_form_program_64);
LOCFOR(fun_form_program_setter_65);
LOCFOR(fun_66);
LOCFOR(fun_form_quotations_67);
LOCFOR(fun_form_quotations_setter_68);
LOCFOR(fun_69);
LOCFOR(fun_form_definitions_70);
LOCFOR(fun_form_definitions_setter_71);
LOCFOR(fun_72);
LOCFOR(fun_closure_creation_index_73);
LOCFOR(fun_closure_creation_index_setter_74);
LOCFOR(fun_75);
LOCFOR(fun_closure_creation_free_76);
LOCFOR(fun_closure_creation_free_setter_77);
LOCFOR(fun_78);
LOCFOR(fun_flatten_seqs_79);
LOCFOR(fun_inner_80);
LOCFOR(fun_loop_81);
LOCFOR(fun_flatten_seqs_82);
LOCFOR(fun_83);
LOCFOR(fun_as_top_level_forms_84);
LOCFOR(fun_85);
LOCFOR(fun_extract_thingsX_86);
LOCFOR(fun_extractX_87);
LOCFOR(fun_extractX_88);
LOCFOR(fun_extractX_89);
LOCFOR(fun_90);
LOCFOR(fun_extractX_91);
LOCFOR(fun_extractX_92);
LOCFOR(fun_adjoin_definitionX_93);
LOCFOR(fun_split_program_94);
LOCFOR(fun_inner_95);
LOCFOR(fun_loop_96);
LOCFOR(fun_split_program_97);
LOCFOR(fun_loop_98);
LOCFOR(fun_closurize_mainX_99);
LOCFOR(fun_100);
LOCFOR(fun_gather_temporariesX_101);
LOCFOR(fun_collect_temporariesX_102);
LOCFOR(fun_collect_temporariesX_103);
LOCFOR(fun_collect_temporariesX_104);
LOCFOR(fun_collect_temporariesX_105);
LOCFOR(fun_adjoin_106);
LOCFOR(fun_adjoin_temporary_variablesX_107);
LOCFOR(fun_binding_index_108);
LOCFOR(fun_binding_index_setter_109);
LOCFOR(fun_110);
LOCFOR(fun_new_renamed_binding_111);
LOCFOR(fun_112);
LOCFOR(fun_113);
LOCFOR(fun_114);
LOCFOR(fun_register_allocateX_115);
LOCFOR(fun_allocate_register_116);
LOCFOR(fun_collect_registersX_117);
LOCFOR(fun_loop_118);
LOCFOR(fun_collect_registersX_119);
LOCFOR(fun_collect_registersX_120);
LOCFOR(fun_121);
LOCFOR(fun_collect_registersX_122);
LOCFOR(fun_collect_registersX_123);
LOCFOR(fun_collect_registersX_124);
LOCFOR(fun_ast_contains_funQ_125);
LOCFOR(fun_walk_126);
LOCFOR(fun_127);
LOCFOR(fun_ast_contains_funQ_128);
extern P Yast_linearizeY___main_0___ ();
extern P Yast_linearizeY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_x_1297_0) {
  P x_1295_;
  P xF1492;
  P setterF1491;
  P getterF1490;
  P slotF1489;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1295_, 0);
loop:
  T2 = CALL2(1,VARREF(YruntimeYfin_stateQ),FREEREF(0),x_1295_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YruntimeYnow_elt),FREEREF(0),x_1295_);
    slotF1489 = T4;
    T5 = CALL1(1,VARREF(Yslot_getter),slotF1489);
    getterF1490 = T5;
    T7 = CALL1(1,VARREF(Yslot_setter),slotF1489);
    setterF1491 = T7;
    T10 = CALL2(1,VARREF(YmacrosYEE),getterF1490,VARREF(YastYbinding_value));
    T9 = CALL1(1,VARREF(Ynot),T10);
    if (T9 != YPfalse) {
      T12 = CALL1(1,getterF1490,FREEREF(1));
      xF1492 = T12;
      T14 = CALL2(1,VARREF(YisaQ),xF1492,VARREF(YastYLprogramG));
      if (T14 != YPfalse) {
        T16 = CALLN(1,VARREF(YmacrosYnapply),4,FREEREF(2),YPfalse,xF1492,FREEREF(3));
        T15 = CALL2(1,setterF1491,T16,FREEREF(1));
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
    T18 = CALL2(1,VARREF(YruntimeYnxt_state),FREEREF(0),x_1295_);
    a1 = T18;
    x_1295_ = a1;
    goto loop;
    T3 = T17;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_update_walkX_1) {
  P g_,o_,args_;
  P x_1297F1494;
  P x_1296F1493;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
loop:
  T0 = CALL1(1,VARREF(Yobject_slots),o_);
  x_1296F1493 = T0;
  T2 = FUNSHELL(1,fun_x_1297_0,5);
  x_1297F1494 = T2;
  FUNINIT(x_1297F1494, 5,x_1296F1493,o_,g_,args_,x_1297F1494);
  T4 = CALL1(1,VARREF(YruntimeYini_state),x_1296F1493);
  T3 = CALL1(0,x_1297F1494,T4);
  T1 = T3;
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_x_1300_2) {
  P x_1298_;
  P xF1497;
  P getterF1496;
  P slotF1495;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1298_, 0);
loop:
  T2 = CALL2(1,VARREF(YruntimeYfin_stateQ),FREEREF(0),x_1298_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YruntimeYnow_elt),FREEREF(0),x_1298_);
    slotF1495 = T4;
    T5 = CALL1(1,VARREF(Yslot_getter),slotF1495);
    getterF1496 = T5;
    T8 = CALL2(1,VARREF(YmacrosYEE),getterF1496,VARREF(YastYbinding_value));
    T7 = CALL1(1,VARREF(Ynot),T8);
    if (T7 != YPfalse) {
      T10 = CALL1(1,getterF1496,FREEREF(1));
      xF1497 = T10;
      T12 = CALL2(1,VARREF(YisaQ),xF1497,VARREF(YastYLprogramG));
      if (T12 != YPfalse) {
        T13 = CALLN(1,VARREF(YmacrosYnapply),4,FREEREF(2),YPfalse,xF1497,FREEREF(3));
        T11 = T13;
      } else {
        T11 = YPfalse;
      }
      T9 = T11;
      T6 = T9;
    } else {
      T6 = YPfalse;
    }
    T15 = CALL2(1,VARREF(YruntimeYnxt_state),FREEREF(0),x_1298_);
    a1 = T15;
    x_1298_ = a1;
    goto loop;
    T3 = T14;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_walk_3) {
  P g_,o_,args_;
  P x_1300F1499;
  P x_1299F1498;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
loop:
  T0 = CALL1(1,VARREF(Yobject_slots),o_);
  x_1299F1498 = T0;
  T2 = FUNSHELL(1,fun_x_1300_2,5);
  x_1300F1499 = T2;
  FUNINIT(x_1300F1499, 5,x_1299F1498,o_,g_,args_,x_1300F1499);
  T4 = CALL1(1,VARREF(YruntimeYini_state),x_1299F1498);
  T3 = CALL1(0,x_1300F1499,T4);
  T1 = T3;
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_box_reference_4) {
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

FUNCODEDEF(fun_box_reference_setter_5) {
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

FUNCODEDEF(fun_6) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_box_reference_7) {
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

FUNCODEDEF(fun_box_reference_setter_8) {
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

FUNCODEDEF(fun_9) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_box_form_10) {
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

FUNCODEDEF(fun_box_form_setter_11) {
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

FUNCODEDEF(fun_12) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_box_reference_13) {
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

FUNCODEDEF(fun_box_reference_setter_14) {
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

FUNCODEDEF(fun_15) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_insert_boxX_16) {
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

FUNCODEDEF(fun_insert_boxX_17) {
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

FUNCODEDEF(fun_insert_boxX_18) {
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

FUNCODEDEF(fun_insert_boxX_19) {
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

FUNCODEDEF(fun_insert_boxX_20) {
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

FUNCODEDEF(fun_insert_boxX_21) {
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

FUNCODEDEF(fun_loop_22) {
  P res_,bindings_;
  P creatorF1501;
  P bindingF1500;
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
    T2 = CALL1(1,VARREF(YruntimeYrevX),T3);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yhead),bindings_);
    bindingF1500 = T5;
    T7 = CALL1(1,VARREF(YastYbinding_mutableQ),bindingF1500);
    if (T7 != YPfalse) {
      T10 = (P)YPpair(VARREF(Yast_linearizeYbox_reference),Ynil);
      T13 = (P)YPpair(VARREF(YastYreference_binding),Ynil);
      T14 = (P)YPpair(bindingF1500,Ynil);
      T12 = CALL3(1,VARREF(YPisa),VARREF(YastYLlocal_referenceG),T13,T14);
      T11 = (P)YPpair(T12,Ynil);
      T9 = CALL3(1,VARREF(YPisa),VARREF(Yast_linearizeYLbox_creationG),T10,T11);
      creatorF1501 = T9;
      T16 = CALL2(1,VARREF(YmacrosYpair),creatorF1501,res_);
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

FUNCODEDEF(fun_boxify_mutable_bindings_23) {
  P form_,bindings_;
  P loopF1502;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(form_, 0);
  ARG(bindings_, 1);
loop:
  T2 = FUNSHELL(1,fun_loop_22,2);
  loopF1502 = T2;
  FUNINIT(loopF1502, 2,form_,loopF1502);
  T3 = CALL2(0,loopF1502,Ynil,bindings_);
  T1 = T3;
  T0 = CALL1(1,VARREF(YastYsequentialize),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_do_call_referencesX_24) {
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

FUNCODEDEF(fun_do_call_referencesX_25) {
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

FUNCODEDEF(fun_do_call_referencesX_26) {
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

FUNCODEDEF(fun_analyze_call_references_27) {
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

FUNCODEDEF(fun_do_do_dynamic_extentX_28) {
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

FUNCODEDEF(fun_do_dynamic_extentX_29) {
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

FUNCODEDEF(fun_do_dynamic_extentX_30) {
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

FUNCODEDEF(fun_analyze_dynamic_extent_31) {
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

FUNCODEDEF(fun_do_do_call_upgradesX_32) {
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

FUNCODEDEF(fun_do_call_upgradesX_33) {
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

FUNCODEDEF(fun_unconstrained_typeQ_34) {
  P b_;
  P tmpF1503;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T2 = CALL1(1,VARREF(YastYbinding_module_name),b_);
  T1 = CALL2(1,VARREF(YmacrosYEE),T2,LITREF(lit_35));
  tmpF1503 = T1;
  if (tmpF1503 != YPfalse) {
    T5 = CALL1(1,VARREF(YastYbinding_name),b_);
    T4 = CALL2(1,VARREF(YmacrosYEE),T5,LITREF(lit_36));
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_unconstrained_typeQ_35) {
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

FUNCODEDEF(fun_do_call_upgradesX_36) {
  P o_;
  P tmpF1508;
  P tmpF1507;
  P tmpF1506;
  P tmpF1505;
  P metF1504;
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
    metF1504 = T3;
    T8 = CALL2(1,VARREF(YisaQ),metF1504,VARREF(YastYLast_functionG));
    tmpF1505 = T8;
    if (tmpF1505 != YPfalse) {
      T12 = CALL2(1,VARREF(YruntimeYcompose),VARREF(Yast_linearizeYunconstrained_typeQ),VARREF(YastYbinding_type));
      T13 = CALL1(1,VARREF(YastYfunction_bindings),metF1504);
      T11 = CALL2(1,VARREF(YruntimeYallQ),T12,T13);
      tmpF1506 = T11;
      if (tmpF1506 != YPfalse) {
        T17 = CALL1(1,VARREF(YastYfunction_value),metF1504);
        T16 = CALL1(1,VARREF(Yast_linearizeYunconstrained_typeQ),T17);
        tmpF1507 = T16;
        if (tmpF1507 != YPfalse) {
          T21 = CALL1(1,VARREF(YastYfunction_naryQ),metF1504);
          T20 = CALL1(1,VARREF(Ynot),T21);
          tmpF1508 = T20;
          if (tmpF1508 != YPfalse) {
            T25 = CALL1(1,VARREF(YastYapplication_arguments),o_);
            T24 = CALL1(1,VARREF(YruntimeYlen),T25);
            T27 = CALL1(1,VARREF(YastYfunction_bindings),metF1504);
            T26 = CALL1(1,VARREF(YruntimeYlen),T27);
            T23 = CALL2(1,VARREF(YruntimeYE),T24,T26);
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

FUNCODEDEF(fun_analyze_calls_37) {
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

FUNCODEDEF(fun_reference_offset_38) {
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

FUNCODEDEF(fun_reference_offset_setter_39) {
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

FUNCODEDEF(fun_40) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_reference_selfQ_41) {
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

FUNCODEDEF(fun_reference_selfQ_setter_42) {
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

FUNCODEDEF(fun_43) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_liftX_44) {
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

FUNCODEDEF(fun_lift_proceduresX_45) {
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

FUNCODEDEF(fun_lift_proceduresX_46) {
  P o_,flat_fun_,bindings_;
  P offsetF1510;
  P bF1509;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,VARREF(YastYreference_binding),o_);
  bF1509 = T1;
  T3 = CALL2(1,VARREF(YruntimeYmemQ),bindings_,bF1509);
  if (T3 != YPfalse) {
    T2 = o_;
  } else {
    T5 = CALL2(1,VARREF(Yast_linearizeYadjoin_free_bindingX),flat_fun_,o_);
    offsetF1510 = T5;
    T9 = (P)YPpair(VARREF(Yast_linearizeYreference_selfQ),Ynil);
    T8 = (P)YPpair(VARREF(Yast_linearizeYreference_offset),T9);
    T7 = (P)YPpair(VARREF(YastYreference_binding),T8);
    T14 = CALL1(1,VARREF(YastYreference_binding),o_);
    T15 = CALL1(1,VARREF(YastYfunction_binding),flat_fun_);
    T13 = CALL2(1,VARREF(YmacrosYEE),T14,T15);
    T12 = (P)YPpair(T13,Ynil);
    T11 = (P)YPpair(offsetF1510,T12);
    T10 = (P)YPpair(bF1509,T11);
    T6 = CALL3(1,VARREF(YPisa),VARREF(Yast_linearizeYLfree_referenceG),T7,T10);
    T4 = T6;
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_add_47) {
  P freeT_;
  P tailF1511;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(freeT_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),freeT_);
  tailF1511 = T1;
  T3 = CALL1(1,VARREF(YmacrosYemptyQ),tailF1511);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Ytail_setter),FREEREF(0),freeT_);
    T2 = T4;
  } else {
    a1 = tailF1511;
    freeT_ = a1;
    goto loop;
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_check_48) {
  P i_,freeT_;
  P addF1513;
  P new_envF1512;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(freeT_, 1);
loop:
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),freeT_);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YruntimeYempty),VARREF(YastYLfree_environmentG));
    T3 = CALL2(1,VARREF(YastYfree_environment),FREEREF(0),T4);
    new_envF1512 = T3;
    T6 = CALL1(1,VARREF(YastYfunction_free),FREEREF(1));
    T5 = CALL1(1,VARREF(YmacrosYemptyQ),T6);
    if (T5 != YPfalse) {
      T7 = CALL2(1,VARREF(YastYfunction_free_setter),new_envF1512,FREEREF(1));
    } else {
      T9 = FUNSHELL(1,fun_add_47,2);
      addF1513 = T9;
      FUNINIT(addF1513, 2,new_envF1512,addF1513);
      T11 = CALL1(1,VARREF(YastYfunction_free),FREEREF(1));
      T10 = CALL1(0,addF1513,T11);
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
      T18 = CALL2(1,VARREF(YruntimeYA),i_,YPint((P)1));
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

FUNCODEDEF(fun_adjoin_free_bindingX_49) {
  P flat_fun_,ref_;
  P checkF1514;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(flat_fun_, 0);
  ARG(ref_, 1);
loop:
  T1 = FUNSHELL(1,fun_check_48,3);
  checkF1514 = T1;
  FUNINIT(checkF1514, 3,ref_,flat_fun_,checkF1514);
  T3 = CALL1(1,VARREF(YastYfunction_free),flat_fun_);
  T2 = CALL2(1,checkF1514,YPint((P)0),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_50) {
  P o_,flat_fun_,bindings_;
  P new_bindingsF1515;
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
  new_bindingsF1515 = T3;
  T6 = CALL1(1,VARREF(YastYfix_let_body),o_);
  T5 = CALL3(1,VARREF(Yast_linearizeYlift_proceduresX),T6,flat_fun_,new_bindingsF1515);
  CALL2(1,VARREF(YastYfix_let_body_setter),T5,o_);
  T2 = o_;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_lift_proceduresX_51) {
  P o_,flat_fun_,bindings_;
  P new_bindingsF1516;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T2 = CALL1(1,VARREF(YastYlocals_bindings),o_);
  T1 = CALL2(1,VARREF(YmacrosYcat),T2,bindings_);
  new_bindingsF1516 = T1;
  T4 = CALL3(1,VARREF(YruntimeYrcurry),VARREF(Yast_linearizeYlift_proceduresX),flat_fun_,new_bindingsF1516);
  T5 = CALL1(1,VARREF(YastYlocals_functions),o_);
  T3 = CALL2(1,VARREF(YmacrosYmap),T4,T5);
  CALL2(1,VARREF(YastYlocals_functions_setter),T3,o_);
  T7 = CALL1(1,VARREF(YastYlocals_body),o_);
  T6 = CALL3(1,VARREF(Yast_linearizeYlift_proceduresX),T7,flat_fun_,new_bindingsF1516);
  CALL2(1,VARREF(YastYlocals_body_setter),T6,o_);
  T0 = o_;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_52) {
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

FUNCODEDEF(fun_lift_proceduresX_53) {
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

FUNCODEDEF(fun_lift_proceduresX_54) {
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

FUNCODEDEF(fun_program_form_55) {
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

FUNCODEDEF(fun_program_form_setter_56) {
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

FUNCODEDEF(fun_57) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_program_quotations_58) {
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

FUNCODEDEF(fun_program_quotations_setter_59) {
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

FUNCODEDEF(fun_60) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YruntimeYfab),VARREF(YruntimeYLtabG),YPint((P)40));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_definitions_61) {
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

FUNCODEDEF(fun_program_definitions_setter_62) {
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

FUNCODEDEF(fun_63) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_form_program_64) {
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

FUNCODEDEF(fun_form_program_setter_65) {
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

FUNCODEDEF(fun_66) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_form_quotations_67) {
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

FUNCODEDEF(fun_form_quotations_setter_68) {
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

FUNCODEDEF(fun_69) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_form_definitions_70) {
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

FUNCODEDEF(fun_form_definitions_setter_71) {
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

FUNCODEDEF(fun_72) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_closure_creation_index_73) {
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

FUNCODEDEF(fun_closure_creation_index_setter_74) {
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

FUNCODEDEF(fun_75) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_closure_creation_free_76) {
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

FUNCODEDEF(fun_closure_creation_free_setter_77) {
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

FUNCODEDEF(fun_78) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_flatten_seqs_79) {
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

FUNCODEDEF(fun_inner_80) {
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

FUNCODEDEF(fun_loop_81) {
  P s_,r_;
  P innerF1517;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),s_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YruntimeYrevX),r_);
    T0 = T2;
  } else {
    T4 = FUNSHELL(1,fun_inner_80,3);
    innerF1517 = T4;
    FUNINIT(innerF1517, 3,FREEREF(0),s_,innerF1517);
    T7 = CALL1(1,VARREF(Yhead),s_);
    T6 = CALL1(1,VARREF(Yast_linearizeYflatten_seqs),T7);
    T5 = CALL2(0,innerF1517,T6,r_);
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_flatten_seqs_82) {
  P o_;
  P loopF1518;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_81,1);
  loopF1518 = T1;
  FUNINIT(loopF1518, 1,loopF1518);
  T2 = CALL2(0,loopF1518,o_,Ynil);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_83) {
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

FUNCODEDEF(fun_as_top_level_forms_84) {
  P programs_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(programs_, 0);
loop:
  T1 = fun_83;
  T0 = CALL2(1,VARREF(YmacrosYmap),T1,programs_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_85) {
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

FUNCODEDEF(fun_extract_thingsX_86) {
  P o_;
  P resultF1520;
  P formsF1519;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T2 = CALL1(1,VARREF(Yast_linearizeYflatten_seqs),o_);
  T1 = CALL1(1,VARREF(Yast_linearizeYas_top_level_forms),T2);
  formsF1519 = T1;
  T4 = CALL3(1,VARREF(YPisa),VARREF(Yast_linearizeYLflattened_programG),Ynil,Ynil);
  resultF1520 = T4;
  T7 = FUNFAB(fun_85,1,resultF1520);
  T6 = CALL2(1,VARREF(YmacrosYmap),T7,formsF1519);
  T5 = CALL1(1,VARREF(YastYsequentialize),T6);
  CALL2(1,VARREF(Yast_linearizeYprogram_form_setter),T5,resultF1520);
  T3 = resultF1520;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_87) {
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

FUNCODEDEF(fun_extractX_88) {
  P o_,form_,result_;
  P x_1301F1530;
  P qbF1529;
  P probeF1528;
  P indexF1527;
  P qbTF1526;
  P tmpF1525;
  P tmpF1524;
  P tmpF1523;
  P tmpF1522;
  P valueF1521;
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
  valueF1521 = T1;
  T4 = CALL2(1,VARREF(YmacrosYEE),valueF1521,YPfalse);
  tmpF1522 = T4;
  if (tmpF1522 != YPfalse) {
    T5 = tmpF1522;
  } else {
    T7 = CALL2(1,VARREF(YmacrosYEE),valueF1521,YPtrue);
    tmpF1523 = T7;
    if (tmpF1523 != YPfalse) {
      T8 = tmpF1523;
    } else {
      T10 = CALL2(1,VARREF(YmacrosYEE),valueF1521,Ynil);
      tmpF1524 = T10;
      if (tmpF1524 != YPfalse) {
        T11 = tmpF1524;
      } else {
        T13 = CALL2(1,VARREF(YisaQ),valueF1521,VARREF(YLintG));
        tmpF1525 = T13;
        if (tmpF1525 != YPfalse) {
          T14 = tmpF1525;
        } else {
          T15 = CALL2(1,VARREF(YisaQ),valueF1521,VARREF(YLchrG));
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
    qbTF1526 = T17;
    T19 = CALL1(1,VARREF(YruntimeYlen),qbTF1526);
    indexF1527 = T19;
    T21 = CALL2(1,VARREF(YmacrosYelt),qbTF1526,valueF1521);
    probeF1528 = T21;
    T23 = CALL2(1,VARREF(YruntimeYNEE),probeF1528,VARREF(Ynul));
    if (T23 != YPfalse) {
      T25 = (P)YPpair(VARREF(YastYreference_binding),Ynil);
      T26 = (P)YPpair(probeF1528,Ynil);
      T24 = CALL3(1,VARREF(YPisa),VARREF(YastYLglobal_referenceG),T25,T26);
      T22 = T24;
    } else {
      T31 = (P)YPpair(VARREF(YastYbinding_info),Ynil);
      T30 = (P)YPpair(VARREF(YastYbinding_name),T31);
      T29 = (P)YPpair(VARREF(YastYbinding_kind),T30);
      T34 = (P)YPpair(valueF1521,Ynil);
      T33 = (P)YPpair(indexF1527,T34);
      T32 = (P)YPpair(LITREF(lit_81),T33);
      T28 = CALL3(1,VARREF(YPisa),VARREF(YastYLmodule_bindingG),T29,T32);
      qbF1529 = T28;
      CALL3(1,VARREF(YruntimeYelt_setter),qbF1529,qbTF1526,valueF1521);
      x_1301F1530 = form_;
      T37 = CALL1(1,VARREF(Yast_linearizeYform_quotations),x_1301F1530);
      T36 = CALL2(1,VARREF(YruntimeYpush),T37,qbF1529);
      T35 = CALL2(1,VARREF(Yast_linearizeYform_quotations_setter),T36,x_1301F1530);
      T39 = (P)YPpair(VARREF(YastYreference_binding),Ynil);
      T40 = (P)YPpair(qbF1529,Ynil);
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

FUNCODEDEF(fun_extractX_89) {
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

FUNCODEDEF(fun_90) {
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

FUNCODEDEF(fun_extractX_91) {
  P o_,form_,result_;
  P indexF1533;
  P free_bindingsF1532;
  P freeF1531;
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
  T6 = FUNFAB(fun_90,2,form_,result_);
  T7 = CALL1(1,VARREF(YastYfunction_bindings),o_);
  CALL2(1,VARREF(YruntimeYdo),T6,T7);
  T9 = CALL1(1,VARREF(YastYfunction_free),o_);
  freeF1531 = T9;
  T11 = CALL2(1,VARREF(YmacrosYmap),VARREF(YastYreference_binding),freeF1531);
  free_bindingsF1532 = T11;
  T13 = CALL3(1,VARREF(Yast_linearizeYadjoin_definitionX),form_,result_,o_);
  indexF1533 = T13;
  CALL2(1,VARREF(YastYfunction_index_setter),indexF1533,o_);
  CALL2(1,VARREF(YastYfunction_free_setter),free_bindingsF1532,o_);
  T16 = (P)YPpair(VARREF(Yast_linearizeYclosure_creation_free),Ynil);
  T15 = (P)YPpair(VARREF(Yast_linearizeYclosure_creation_index),T16);
  T18 = (P)YPpair(freeF1531,Ynil);
  T17 = (P)YPpair(indexF1533,T18);
  T14 = CALL3(1,VARREF(YPisa),VARREF(Yast_linearizeYLclosure_creationG),T15,T17);
  T12 = T14;
  T10 = T12;
  T8 = T10;
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_extractX_92) {
  P o_,form_,result_;
  P x_1302F1535;
  P primF1534;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T1 = CALL1(1,VARREF(YastYassignment_form),o_);
  primF1534 = T1;
  T3 = CALL1(1,VARREF(YastYfunction_body),primF1534);
  T2 = CALL3(1,VARREF(Yast_linearizeYextractX),T3,form_,result_);
  CALL2(1,VARREF(YastYfunction_body_setter),T2,primF1534);
  x_1302F1535 = result_;
  T6 = CALL1(1,VARREF(Yast_linearizeYprogram_definitions),x_1302F1535);
  T5 = CALL2(1,VARREF(YruntimeYpush),T6,primF1534);
  T4 = CALL2(1,VARREF(Yast_linearizeYprogram_definitions_setter),T5,x_1302F1535);
  T9 = (P)YPpair(VARREF(YastYconstant_value),Ynil);
  T10 = (P)YPpair(YPfalse,Ynil);
  T8 = CALL3(1,VARREF(YPisa),VARREF(YastYLconstantG),T9,T10);
  T7 = CALL3(1,VARREF(Yast_linearizeYextractX),T8,form_,result_);
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_definitionX_93) {
  P form_,result_,x_;
  P x_1304F1538;
  P x_1303F1537;
  P new_indexF1536;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(form_, 0);
  ARG(result_, 1);
  ARG(x_, 2);
loop:
  T2 = CALL1(1,VARREF(Yast_linearizeYprogram_definitions),result_);
  T1 = CALL1(1,VARREF(YruntimeYlen),T2);
  new_indexF1536 = T1;
  x_1303F1537 = result_;
  T5 = CALL1(1,VARREF(Yast_linearizeYprogram_definitions),x_1303F1537);
  T4 = CALL2(1,VARREF(YruntimeYpush),T5,x_);
  T3 = CALL2(1,VARREF(Yast_linearizeYprogram_definitions_setter),T4,x_1303F1537);
  x_1304F1538 = form_;
  T8 = CALL1(1,VARREF(Yast_linearizeYform_definitions),x_1304F1538);
  T7 = CALL2(1,VARREF(YruntimeYpush),T8,x_);
  T6 = CALL2(1,VARREF(Yast_linearizeYform_definitions_setter),T7,x_1304F1538);
  T0 = new_indexF1536;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_split_program_94) {
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

FUNCODEDEF(fun_inner_95) {
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
    T5 = CALL1(1,VARREF(YruntimeYrevX),res_);
    T4 = CALL1(1,VARREF(YastYsequentialize),T5);
    T3 = CALL2(1,VARREF(YmacrosYpair),T4,FREEREF(0));
    T2 = CALL1(1,VARREF(YruntimeYrevX),T3);
    T0 = T2;
  } else {
    T7 = CALL2(1,VARREF(YruntimeYE),count_,FREEREF(1));
    if (T7 != YPfalse) {
      T11 = CALL1(1,VARREF(YruntimeYrevX),res_);
      T10 = CALL1(1,VARREF(YastYsequentialize),T11);
      T9 = CALL2(1,VARREF(YmacrosYpair),T10,FREEREF(0));
      T8 = CALL2(0,FREEREF(2),T9,es_);
      T6 = T8;
    } else {
      if (YPtrue != YPfalse) {
        T15 = CALL1(1,VARREF(Yhead),es_);
        T14 = CALL2(1,VARREF(YmacrosYpair),T15,res_);
        T16 = CALL1(1,VARREF(Ytail),es_);
        T17 = CALL2(1,VARREF(YruntimeYA),count_,YPint((P)1));
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

FUNCODEDEF(fun_loop_96) {
  P forms_,s_;
  P innerF1539;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(forms_, 0);
  ARG(s_, 1);
loop:
  T1 = FUNSHELL(1,fun_inner_95,4);
  innerF1539 = T1;
  FUNINIT(innerF1539, 4,forms_,FREEREF(0),FREEREF(1),innerF1539);
  T2 = CALL3(0,innerF1539,Ynil,s_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_split_program_97) {
  P o_,max_count_;
  P loopF1540;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(max_count_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_96,2);
  loopF1540 = T1;
  FUNINIT(loopF1540, 2,max_count_,loopF1540);
  T2 = CALL2(0,loopF1540,Ynil,o_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_98) {
  P calls_,defns_,i_,forms_;
  P callF1544;
  P defnF1543;
  P bindingF1542;
  P nameF1541;
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
    T2 = CALL1(1,VARREF(YruntimeYrevX),defns_);
    CALL2(1,VARREF(Yast_linearizeYprogram_definitions_setter),T2,FREEREF(0));
    T5 = (P)YPpair(VARREF(Yast_linearizeYform_definitions),Ynil);
    T4 = (P)YPpair(VARREF(Yast_linearizeYform_program),T5);
    T8 = CALL1(1,VARREF(YruntimeYrevX),calls_);
    T7 = CALL1(1,VARREF(YastYsequentialize),T8);
    T10 = CALL1(1,VARREF(YruntimeYrevX),defns_);
    T9 = (P)YPpair(T10,Ynil);
    T6 = (P)YPpair(T7,T9);
    T3 = CALL3(1,VARREF(YPisa),VARREF(Yast_linearizeYLtop_level_formG),T4,T6);
    CALL2(1,VARREF(Yast_linearizeYprogram_form_setter),T3,FREEREF(0));
    T0 = FREEREF(0);
  } else {
    T12 = CALL3(1,VARREF(YmacrosYmake_sym),LITREF(lit_92),i_,LITREF(lit_93));
    nameF1541 = T12;
    T14 = CALLN(1,VARREF(YastYast_define_binding),4,FREEREF(1),nameF1541,YPfalse,LITREF(lit_94));
    bindingF1542 = T14;
    T20 = (P)YPpair(VARREF(YastYfunction_body),Ynil);
    T19 = (P)YPpair(VARREF(YastYfunction_signature),T20);
    T18 = (P)YPpair(VARREF(YastYfunction_debug_name),T19);
    T17 = (P)YPpair(VARREF(YastYfunction_binding),T18);
    T23 = CALL2(1,VARREF(YastYobjectify_quotation),nameF1541,YPint((P)4));
    T25 = CALL2(1,VARREF(YastYobjectify_signature),Ynil,FREEREF(1));
    T27 = CALL1(1,VARREF(Yhead),forms_);
    T26 = (P)YPpair(T27,Ynil);
    T24 = (P)YPpair(T25,T26);
    T22 = (P)YPpair(T23,T24);
    T21 = (P)YPpair(bindingF1542,T22);
    T16 = CALL3(1,VARREF(YPisa),VARREF(YastYLast_primitiveG),T17,T21);
    defnF1543 = T16;
    T32 = (P)YPpair(VARREF(YastYapplication_tailQ),Ynil);
    T31 = (P)YPpair(VARREF(YastYapplication_arguments),T32);
    T30 = (P)YPpair(VARREF(YastYapplication_binding),T31);
    T35 = CALL1(1,VARREF(YruntimeYempty),VARREF(YastYLargumentsG));
    T36 = (P)YPpair(YPfalse,Ynil);
    T34 = (P)YPpair(T35,T36);
    T33 = (P)YPpair(bindingF1542,T34);
    T29 = CALL3(1,VARREF(YPisa),VARREF(YastYLpredefined_applicationG),T30,T33);
    callF1544 = T29;
    T38 = CALL2(1,VARREF(YmacrosYpair),callF1544,calls_);
    T39 = CALL2(1,VARREF(YmacrosYpair),defnF1543,defns_);
    T40 = CALL2(1,VARREF(YruntimeYA),i_,YPint((P)1));
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

FUNCODEDEF(fun_closurize_mainX_99) {
  P o_,r_,max_count_;
  P loopF1547;
  P base_indexF1546;
  P formsF1545;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(max_count_, 2);
loop:
  T2 = CALL1(1,VARREF(Yast_linearizeYprogram_form),o_);
  T1 = CALL2(1,VARREF(Yast_linearizeYsplit_program),T2,max_count_);
  formsF1545 = T1;
  T5 = CALL1(1,VARREF(Yast_linearizeYprogram_definitions),o_);
  T4 = CALL1(1,VARREF(YruntimeYlen),T5);
  base_indexF1546 = T4;
  T7 = FUNSHELL(1,fun_loop_98,3);
  loopF1547 = T7;
  FUNINIT(loopF1547, 3,o_,r_,loopF1547);
  T9 = CALL1(1,VARREF(Yast_linearizeYprogram_definitions),o_);
  T8 = CALLN(0,loopF1547,4,Ynil,T9,YPint((P)0),formsF1545);
  T6 = T8;
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_100) {
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

FUNCODEDEF(fun_gather_temporariesX_101) {
  P o_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = fun_100;
  T2 = CALL1(1,VARREF(Yast_linearizeYprogram_definitions),o_);
  T0 = CALL2(1,VARREF(YmacrosYmap),T1,T2);
  CALL2(1,VARREF(Yast_linearizeYprogram_definitions_setter),T0,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_collect_temporariesX_102) {
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

FUNCODEDEF(fun_collect_temporariesX_103) {
  P o_,flat_fun_,r_;
  P bF1549;
  P bindingF1548;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(YastYreference_binding),o_);
  bindingF1548 = T1;
  T3 = CALL2(1,VARREF(YruntimeYassocq),bindingF1548,r_);
  bF1549 = T3;
  if (bF1549 != YPfalse) {
    T6 = (P)YPpair(VARREF(YastYreference_binding),Ynil);
    T8 = CALL1(1,VARREF(YruntimeYassoc_value),bF1549);
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

FUNCODEDEF(fun_collect_temporariesX_104) {
  P o_,flat_fun_,r_;
  P new_rF1551;
  P new_bindingsF1550;
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
  new_bindingsF1550 = T3;
  T8 = CALL1(1,VARREF(YastYfix_let_bindings),o_);
  T7 = CALL3(1,VARREF(YruntimeYmap2),VARREF(YruntimeYassoc),T8,new_bindingsF1550);
  T6 = CALL2(1,VARREF(YmacrosYcat),T7,r_);
  new_rF1551 = T6;
  CALL2(1,VARREF(Yast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF1550);
  CALL2(1,VARREF(YastYfix_let_bindings_setter),new_bindingsF1550,o_);
  T10 = CALL1(1,VARREF(YastYfix_let_body),o_);
  T9 = CALL3(1,VARREF(Yast_linearizeYcollect_temporariesX),T10,flat_fun_,new_rF1551);
  CALL2(1,VARREF(YastYfix_let_body_setter),T9,o_);
  T5 = o_;
  T2 = T5;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_collect_temporariesX_105) {
  P o_,flat_fun_,r_;
  P new_rF1553;
  P new_bindingsF1552;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T2 = CALL1(1,VARREF(YastYlocals_bindings),o_);
  T1 = CALL2(1,VARREF(YmacrosYmap),VARREF(Yast_linearizeYnew_renamed_binding),T2);
  new_bindingsF1552 = T1;
  T6 = CALL1(1,VARREF(YastYlocals_bindings),o_);
  T5 = CALL3(1,VARREF(YruntimeYmap2),VARREF(YruntimeYassoc),T6,new_bindingsF1552);
  T4 = CALL2(1,VARREF(YmacrosYcat),T5,r_);
  new_rF1553 = T4;
  T8 = CALL3(1,VARREF(YruntimeYrcurry),VARREF(Yast_linearizeYcollect_temporariesX),flat_fun_,new_rF1553);
  T9 = CALL1(1,VARREF(YastYlocals_functions),o_);
  T7 = CALL2(1,VARREF(YmacrosYmap),T8,T9);
  CALL2(1,VARREF(YastYlocals_functions_setter),T7,o_);
  CALL2(1,VARREF(Yast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF1552);
  CALL2(1,VARREF(YastYlocals_bindings_setter),new_bindingsF1552,o_);
  T11 = CALL1(1,VARREF(YastYlocals_body),o_);
  T10 = CALL3(1,VARREF(Yast_linearizeYcollect_temporariesX),T11,flat_fun_,new_rF1553);
  CALL2(1,VARREF(YastYlocals_body_setter),T10,o_);
  T3 = o_;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_106) {
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
    T4 = CALL2(1,VARREF(YruntimeYmemQ),temps_,T5);
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

FUNCODEDEF(fun_adjoin_temporary_variablesX_107) {
  P flat_fun_,new_bindings_;
  P adjoinF1554;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(flat_fun_, 0);
  ARG(new_bindings_, 1);
loop:
  T1 = FUNSHELL(1,fun_adjoin_106,2);
  adjoinF1554 = T1;
  FUNINIT(adjoinF1554, 2,flat_fun_,adjoinF1554);
  T3 = CALL1(1,VARREF(YastYfunction_temporaries),flat_fun_);
  T2 = CALL2(0,adjoinF1554,T3,new_bindings_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_index_108) {
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

FUNCODEDEF(fun_binding_index_setter_109) {
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

FUNCODEDEF(fun_110) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_new_renamed_binding_111) {
  P binding_;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T0 = CALL2(1,VARREF(YruntimeYA),VARREF(Yast_linearizeYTrenaming_bindings_counterT),YPint((P)1));
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

FUNCODEDEF(fun_112) {
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

FUNCODEDEF(fun_113) {
  P T2,T1,T0;
LINK_STACK();
loop:
  VARSET(Yast_linearizeYTregister_passiveQT,FREEREF(0));
  T1 = fun_112;
  T2 = CALL1(1,VARREF(Yast_linearizeYprogram_definitions),FREEREF(1));
  T0 = CALL2(1,VARREF(YruntimeYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_114) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(Yast_linearizeYTregister_passiveQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_register_allocateX_115) {
  P o_,register_passiveQ_;
  P x_1305F1555;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(register_passiveQ_, 1);
loop:
  x_1305F1555 = VARREF(Yast_linearizeYTregister_passiveQT);
  T1 = FUNFAB(fun_113,2,register_passiveQ_,o_);
  T2 = FUNFAB(fun_114,1,x_1305F1555);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_allocate_register_116) {
  P o_,flat_fun_,valQ_;
  P x_1306F1558;
  P tmpF1557;
  P tmpF1556;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  tmpF1556 = valQ_;
  if (tmpF1556 != YPfalse) {
    tmpF1557 = flat_fun_;
    if (tmpF1557 != YPfalse) {
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
    T7 = CALL1(1,VARREF(YruntimeYlen),T8);
    CALL2(1,VARREF(YastYprogram_register_setter),T7,o_);
    x_1306F1558 = flat_fun_;
    T12 = CALL1(1,VARREF(YastYfunction_registers),x_1306F1558);
    T11 = CALL2(1,VARREF(YruntimeYpush),T12,o_);
    T10 = CALL2(1,VARREF(YastYfunction_registers_setter),T11,x_1306F1558);
    T9 = T10;
    T0 = T9;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_117) {
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

FUNCODEDEF(fun_loop_118) {
  P x_;
  P tmpF1560;
  P next_xF1559;
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
    next_xF1559 = T3;
    T4 = CALL1(1,VARREF(Yhead),x_);
    tmpF1560 = FREEREF(2);
    if (tmpF1560 != YPfalse) {
      T7 = CALL1(1,VARREF(YmacrosYemptyQ),next_xF1559);
      T6 = T7;
    } else {
      T6 = YPfalse;
    }
    T5 = T6;
    CALL3(1,VARREF(Yast_linearizeYcollect_registersX),T4,FREEREF(1),T5);
    a1 = next_xF1559;
    x_ = a1;
    goto loop;
    T2 = T8;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_119) {
  P o_,flat_fun_,valQ_;
  P loopF1561;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_118,4);
  loopF1561 = T1;
  FUNINIT(loopF1561, 4,o_,flat_fun_,valQ_,loopF1561);
  T2 = CALL1(0,loopF1561,o_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_120) {
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

FUNCODEDEF(fun_121) {
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

FUNCODEDEF(fun_collect_registersX_122) {
  P o_,flat_fun_,valQ_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  CALL3(1,VARREF(Yast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T0 = FUNFAB(fun_121,2,flat_fun_,valQ_);
  T1 = CALL1(1,VARREF(Yast_linearizeYform_definitions),o_);
  CALL2(1,VARREF(YruntimeYdo),T0,T1);
  T2 = CALL1(1,VARREF(Yast_linearizeYform_program),o_);
  CALL3(1,VARREF(Yast_linearizeYcollect_registersX),T2,flat_fun_,valQ_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_collect_registersX_123) {
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
  CALL2(1,VARREF(YruntimeYdo),T1,T2);
  T3 = CALL1(1,VARREF(YastYfunction_debug_name),o_);
  CALL3(1,VARREF(Yast_linearizeYcollect_registersX),T3,o_,YPtrue);
  T4 = CALL1(1,VARREF(YastYfunction_body),o_);
  CALL3(1,VARREF(Yast_linearizeYcollect_registersX),T4,o_,YPtrue);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_collect_registersX_124) {
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

FUNCODEDEF(fun_ast_contains_funQ_125) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(YPtrue);
}

FUNCODEDEF(fun_walk_126) {
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

FUNCODEDEF(fun_127) {
  P return_;
  P walkF1562;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T0 = FUNSHELL(0,fun_walk_126,2);
  walkF1562 = T0;
  FUNINIT(walkF1562, 2,return_,walkF1562);
  T1 = CALL2(1,VARREF(Yast_linearizeYast_walk),walkF1562,FREEREF(0));
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_ast_contains_funQ_128) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNFAB(fun_127,1,x_);
  T0 = with_exit(T1);
UNLINK_STACK();
  RET(T0);
}

P Yast_linearizeY___main_0___() {
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
  lit_0 = YPPsym((P)"update-walk!");
  lit_1 = YPPsym((P)"g");
  lit_2 = YPPsym((P)"o");
  lit_3 = YPPsym((P)"args");
  lit_4 = YPPsym((P)"x-1297");
  lit_5 = YPPsym((P)"x-1295");
  T1 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1297_0 = YPmet(FUNCODEREF(fun_x_1297_0),LITREF(lit_4),T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_2),LITREF(lit_3)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_update_walkX_1 = YPmet(FUNCODEREF(fun_update_walkX_1),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T4 = BOUNDP(Yast_linearizeYupdate_walkX);
  if (T4 != YPfalse) {
    T3 = VARREF(Yast_linearizeYupdate_walkX);
  } else {
    T3 = YPfalse;
  }
  T5 = fun_update_walkX_1;
  T2 = CALL2(1,VARREF(YPdefine_method),T3,T5);
  VARSET(Yast_linearizeYupdate_walkX,T2);
  lit_6 = YPPsym((P)"ast-walk");
  lit_7 = YPPsym((P)"x-1300");
  lit_8 = YPPsym((P)"x-1298");
  T7 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1300_2 = YPmet(FUNCODEREF(fun_x_1300_2),LITREF(lit_7),T7,ENVNUL,PNUL,YPfalse);
  T6 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_2),LITREF(lit_3)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_walk_3 = YPmet(FUNCODEREF(fun_ast_walk_3),LITREF(lit_6),T6,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(Yast_linearizeYast_walk);
  if (T10 != YPfalse) {
    T9 = VARREF(Yast_linearizeYast_walk);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_ast_walk_3;
  T8 = CALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(Yast_linearizeYast_walk,T8);
  lit_9 = YPPsym((P)"<box-read>");
  T13 = (P)YPpair(VARREF(YastYLcomputed_programG),Ynil);
  T12 = CALL2(1,VARREF(Yfab_class),LITREF(lit_9),T13);
  VARSET(Yast_linearizeYLbox_readG,T12);
  lit_10 = YPPsym((P)"box-reference");
  lit_11 = YPPsym((P)"_x");
  T14 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(Yast_linearizeYLbox_readG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_4 = YPmet(FUNCODEREF(fun_box_reference_4),LITREF(lit_10),T14,ENVNUL,PNUL,YPfalse);
  T17 = BOUNDP(Yast_linearizeYbox_reference);
  if (T17 != YPfalse) {
    T16 = VARREF(Yast_linearizeYbox_reference);
  } else {
    T16 = YPfalse;
  }
  T18 = fun_box_reference_4;
  T15 = CALL2(1,VARREF(YPdefine_method),T16,T18);
  VARSET(Yast_linearizeYbox_reference,T15);
  lit_12 = YPPsym((P)"box-reference-setter");
  lit_13 = YPPsym((P)"_z");
  T19 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_11)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLbox_readG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_5 = YPmet(FUNCODEREF(fun_box_reference_setter_5),LITREF(lit_12),T19,ENVNUL,PNUL,YPfalse);
  T22 = BOUNDP(Yast_linearizeYbox_reference_setter);
  if (T22 != YPfalse) {
    T21 = VARREF(Yast_linearizeYbox_reference_setter);
  } else {
    T21 = YPfalse;
  }
  T23 = fun_box_reference_setter_5;
  T20 = CALL2(1,VARREF(YPdefine_method),T21,T23);
  VARSET(Yast_linearizeYbox_reference_setter,T20);
  lit_14 = YPPsym((P)"x");
  T24 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_6 = YPmet(FUNCODEREF(fun_6),YPfalse,T24,ENVNUL,PNUL,YPfalse);
  T25 = fun_6;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_linearizeYLbox_readG),VARREF(Yast_linearizeYbox_reference),VARREF(Yast_linearizeYbox_reference_setter),VARREF(YLanyG),T25);
  lit_15 = YPPsym((P)"<box-write>");
  T27 = (P)YPpair(VARREF(YastYLcomputed_programG),Ynil);
  T26 = CALL2(1,VARREF(Yfab_class),LITREF(lit_15),T27);
  VARSET(Yast_linearizeYLbox_writeG,T26);
  T28 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(Yast_linearizeYLbox_writeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_7 = YPmet(FUNCODEREF(fun_box_reference_7),LITREF(lit_10),T28,ENVNUL,PNUL,YPfalse);
  T31 = BOUNDP(Yast_linearizeYbox_reference);
  if (T31 != YPfalse) {
    T30 = VARREF(Yast_linearizeYbox_reference);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_box_reference_7;
  T29 = CALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(Yast_linearizeYbox_reference,T29);
  T33 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_11)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLbox_writeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_8 = YPmet(FUNCODEREF(fun_box_reference_setter_8),LITREF(lit_12),T33,ENVNUL,PNUL,YPfalse);
  T36 = BOUNDP(Yast_linearizeYbox_reference_setter);
  if (T36 != YPfalse) {
    T35 = VARREF(Yast_linearizeYbox_reference_setter);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_box_reference_setter_8;
  T34 = CALL2(1,VARREF(YPdefine_method),T35,T37);
  VARSET(Yast_linearizeYbox_reference_setter,T34);
  T38 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T38,ENVNUL,PNUL,YPfalse);
  T39 = fun_9;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_linearizeYLbox_writeG),VARREF(Yast_linearizeYbox_reference),VARREF(Yast_linearizeYbox_reference_setter),VARREF(YLanyG),T39);
  lit_16 = YPPsym((P)"box-form");
  T40 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(Yast_linearizeYLbox_writeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_form_10 = YPmet(FUNCODEREF(fun_box_form_10),LITREF(lit_16),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(Yast_linearizeYbox_form);
  if (T43 != YPfalse) {
    T42 = VARREF(Yast_linearizeYbox_form);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_box_form_10;
  T41 = CALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(Yast_linearizeYbox_form,T41);
  lit_17 = YPPsym((P)"box-form-setter");
  T45 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_11)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLbox_writeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_form_setter_11 = YPmet(FUNCODEREF(fun_box_form_setter_11),LITREF(lit_17),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(Yast_linearizeYbox_form_setter);
  if (T48 != YPfalse) {
    T47 = VARREF(Yast_linearizeYbox_form_setter);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_box_form_setter_11;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(Yast_linearizeYbox_form_setter,T46);
  T50 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T50,ENVNUL,PNUL,YPfalse);
  T51 = fun_12;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_linearizeYLbox_writeG),VARREF(Yast_linearizeYbox_form),VARREF(Yast_linearizeYbox_form_setter),VARREF(YLanyG),T51);
  lit_18 = YPPsym((P)"<box-creation>");
  T53 = (P)YPpair(VARREF(YastYLcomputed_programG),Ynil);
  T52 = CALL2(1,VARREF(Yfab_class),LITREF(lit_18),T53);
  VARSET(Yast_linearizeYLbox_creationG,T52);
  T54 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(Yast_linearizeYLbox_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_13 = YPmet(FUNCODEREF(fun_box_reference_13),LITREF(lit_10),T54,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(Yast_linearizeYbox_reference);
  if (T57 != YPfalse) {
    T56 = VARREF(Yast_linearizeYbox_reference);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_box_reference_13;
  T55 = CALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(Yast_linearizeYbox_reference,T55);
  T59 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_11)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLbox_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_14 = YPmet(FUNCODEREF(fun_box_reference_setter_14),LITREF(lit_12),T59,ENVNUL,PNUL,YPfalse);
  T62 = BOUNDP(Yast_linearizeYbox_reference_setter);
  if (T62 != YPfalse) {
    T61 = VARREF(Yast_linearizeYbox_reference_setter);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_box_reference_setter_14;
  T60 = CALL2(1,VARREF(YPdefine_method),T61,T63);
  VARSET(Yast_linearizeYbox_reference_setter,T60);
  T64 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T64,ENVNUL,PNUL,YPfalse);
  T65 = fun_15;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_linearizeYLbox_creationG),VARREF(Yast_linearizeYbox_reference),VARREF(Yast_linearizeYbox_reference_setter),VARREF(YLanyG),T65);
  lit_19 = YPPsym((P)"insert-box!");
  T66 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_16 = YPmet(FUNCODEREF(fun_insert_boxX_16),LITREF(lit_19),T66,ENVNUL,PNUL,YPfalse);
  T69 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T69 != YPfalse) {
    T68 = VARREF(Yast_linearizeYinsert_boxX);
  } else {
    T68 = YPfalse;
  }
  T70 = fun_insert_boxX_16;
  T67 = CALL2(1,VARREF(YPdefine_method),T68,T70);
  VARSET(Yast_linearizeYinsert_boxX,T67);
  T71 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_17 = YPmet(FUNCODEREF(fun_insert_boxX_17),LITREF(lit_19),T71,ENVNUL,PNUL,YPfalse);
  T74 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T74 != YPfalse) {
    T73 = VARREF(Yast_linearizeYinsert_boxX);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_insert_boxX_17;
  T72 = CALL2(1,VARREF(YPdefine_method),T73,T75);
  VARSET(Yast_linearizeYinsert_boxX,T72);
  T76 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YastYLlocal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_18 = YPmet(FUNCODEREF(fun_insert_boxX_18),LITREF(lit_19),T76,ENVNUL,PNUL,YPfalse);
  T79 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T79 != YPfalse) {
    T78 = VARREF(Yast_linearizeYinsert_boxX);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_insert_boxX_18;
  T77 = CALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(Yast_linearizeYinsert_boxX,T77);
  T81 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_19 = YPmet(FUNCODEREF(fun_insert_boxX_19),LITREF(lit_19),T81,ENVNUL,PNUL,YPfalse);
  T84 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T84 != YPfalse) {
    T83 = VARREF(Yast_linearizeYinsert_boxX);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_insert_boxX_19;
  T82 = CALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(Yast_linearizeYinsert_boxX,T82);
  T86 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_20 = YPmet(FUNCODEREF(fun_insert_boxX_20),LITREF(lit_19),T86,ENVNUL,PNUL,YPfalse);
  T89 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T89 != YPfalse) {
    T88 = VARREF(Yast_linearizeYinsert_boxX);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_insert_boxX_20;
  T87 = CALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(Yast_linearizeYinsert_boxX,T87);
  T91 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_21 = YPmet(FUNCODEREF(fun_insert_boxX_21),LITREF(lit_19),T91,ENVNUL,PNUL,YPfalse);
  T94 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T94 != YPfalse) {
    T93 = VARREF(Yast_linearizeYinsert_boxX);
  } else {
    T93 = YPfalse;
  }
  T95 = fun_insert_boxX_21;
  T92 = CALL2(1,VARREF(YPdefine_method),T93,T95);
  VARSET(Yast_linearizeYinsert_boxX,T92);
  lit_20 = YPPsym((P)"boxify-mutable-bindings");
  lit_21 = YPPsym((P)"form");
  lit_22 = YPPsym((P)"bindings");
  lit_23 = YPPsym((P)"loop");
  lit_24 = YPPsym((P)"res");
  T97 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_22)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_22 = YPmet(FUNCODEREF(fun_loop_22),LITREF(lit_23),T97,ENVNUL,PNUL,YPfalse);
  T96 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_22)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_boxify_mutable_bindings_23 = YPmet(FUNCODEREF(fun_boxify_mutable_bindings_23),LITREF(lit_20),T96,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(Yast_linearizeYboxify_mutable_bindings);
  if (T100 != YPfalse) {
    T99 = VARREF(Yast_linearizeYboxify_mutable_bindings);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_boxify_mutable_bindings_23;
  T98 = CALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(Yast_linearizeYboxify_mutable_bindings,T98);
  lit_25 = YPPsym((P)"do-do-call-references!");
  T102 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_do_call_referencesX_24 = YPmet(FUNCODEREF(fun_do_do_call_referencesX_24),LITREF(lit_25),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(Yast_linearizeYdo_do_call_referencesX);
  if (T105 != YPfalse) {
    T104 = VARREF(Yast_linearizeYdo_do_call_referencesX);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_do_do_call_referencesX_24;
  T103 = CALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(Yast_linearizeYdo_do_call_referencesX,T103);
  lit_26 = YPPsym((P)"do-call-references!");
  T107 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_call_referencesX_25 = YPmet(FUNCODEREF(fun_do_call_referencesX_25),LITREF(lit_26),T107,ENVNUL,PNUL,YPfalse);
  T110 = BOUNDP(Yast_linearizeYdo_call_referencesX);
  if (T110 != YPfalse) {
    T109 = VARREF(Yast_linearizeYdo_call_referencesX);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_do_call_referencesX_25;
  T108 = CALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(Yast_linearizeYdo_call_referencesX,T108);
  T112 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_call_referencesX_26 = YPmet(FUNCODEREF(fun_do_call_referencesX_26),LITREF(lit_26),T112,ENVNUL,PNUL,YPfalse);
  T115 = BOUNDP(Yast_linearizeYdo_call_referencesX);
  if (T115 != YPfalse) {
    T114 = VARREF(Yast_linearizeYdo_call_referencesX);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_do_call_referencesX_26;
  T113 = CALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(Yast_linearizeYdo_call_referencesX,T113);
  lit_27 = YPPsym((P)"analyze-call-references");
  T117 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_analyze_call_references_27 = YPmet(FUNCODEREF(fun_analyze_call_references_27),LITREF(lit_27),T117,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(Yast_linearizeYanalyze_call_references);
  if (T120 != YPfalse) {
    T119 = VARREF(Yast_linearizeYanalyze_call_references);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_analyze_call_references_27;
  T118 = CALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(Yast_linearizeYanalyze_call_references,T118);
  lit_28 = YPPsym((P)"do-do-dynamic-extent!");
  T122 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_do_dynamic_extentX_28 = YPmet(FUNCODEREF(fun_do_do_dynamic_extentX_28),LITREF(lit_28),T122,ENVNUL,PNUL,YPfalse);
  T125 = BOUNDP(Yast_linearizeYdo_do_dynamic_extentX);
  if (T125 != YPfalse) {
    T124 = VARREF(Yast_linearizeYdo_do_dynamic_extentX);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_do_do_dynamic_extentX_28;
  T123 = CALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(Yast_linearizeYdo_do_dynamic_extentX,T123);
  lit_29 = YPPsym((P)"do-dynamic-extent!");
  T127 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_dynamic_extentX_29 = YPmet(FUNCODEREF(fun_do_dynamic_extentX_29),LITREF(lit_29),T127,ENVNUL,PNUL,YPfalse);
  T130 = BOUNDP(Yast_linearizeYdo_dynamic_extentX);
  if (T130 != YPfalse) {
    T129 = VARREF(Yast_linearizeYdo_dynamic_extentX);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_do_dynamic_extentX_29;
  T128 = CALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(Yast_linearizeYdo_dynamic_extentX,T128);
  T132 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_dynamic_extentX_30 = YPmet(FUNCODEREF(fun_do_dynamic_extentX_30),LITREF(lit_29),T132,ENVNUL,PNUL,YPfalse);
  T135 = BOUNDP(Yast_linearizeYdo_dynamic_extentX);
  if (T135 != YPfalse) {
    T134 = VARREF(Yast_linearizeYdo_dynamic_extentX);
  } else {
    T134 = YPfalse;
  }
  T136 = fun_do_dynamic_extentX_30;
  T133 = CALL2(1,VARREF(YPdefine_method),T134,T136);
  VARSET(Yast_linearizeYdo_dynamic_extentX,T133);
  lit_30 = YPPsym((P)"analyze-dynamic-extent");
  T137 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_analyze_dynamic_extent_31 = YPmet(FUNCODEREF(fun_analyze_dynamic_extent_31),LITREF(lit_30),T137,ENVNUL,PNUL,YPfalse);
  T140 = BOUNDP(Yast_linearizeYanalyze_dynamic_extent);
  if (T140 != YPfalse) {
    T139 = VARREF(Yast_linearizeYanalyze_dynamic_extent);
  } else {
    T139 = YPfalse;
  }
  T141 = fun_analyze_dynamic_extent_31;
  T138 = CALL2(1,VARREF(YPdefine_method),T139,T141);
  VARSET(Yast_linearizeYanalyze_dynamic_extent,T138);
  lit_31 = YPPsym((P)"do-do-call-upgrades!");
  T142 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_do_call_upgradesX_32 = YPmet(FUNCODEREF(fun_do_do_call_upgradesX_32),LITREF(lit_31),T142,ENVNUL,PNUL,YPfalse);
  T145 = BOUNDP(Yast_linearizeYdo_do_call_upgradesX);
  if (T145 != YPfalse) {
    T144 = VARREF(Yast_linearizeYdo_do_call_upgradesX);
  } else {
    T144 = YPfalse;
  }
  T146 = fun_do_do_call_upgradesX_32;
  T143 = CALL2(1,VARREF(YPdefine_method),T144,T146);
  VARSET(Yast_linearizeYdo_do_call_upgradesX,T143);
  lit_32 = YPPsym((P)"do-call-upgrades!");
  T147 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_call_upgradesX_33 = YPmet(FUNCODEREF(fun_do_call_upgradesX_33),LITREF(lit_32),T147,ENVNUL,PNUL,YPfalse);
  T150 = BOUNDP(Yast_linearizeYdo_call_upgradesX);
  if (T150 != YPfalse) {
    T149 = VARREF(Yast_linearizeYdo_call_upgradesX);
  } else {
    T149 = YPfalse;
  }
  T151 = fun_do_call_upgradesX_33;
  T148 = CALL2(1,VARREF(YPdefine_method),T149,T151);
  VARSET(Yast_linearizeYdo_call_upgradesX,T148);
  lit_33 = YPPsym((P)"unconstrained-type?");
  lit_34 = YPPsym((P)"b");
  lit_35 = YPPsym((P)"boot");
  lit_36 = YPPsym((P)"<any>");
  T152 = YPsig(YPPlist(1,LITREF(lit_34)),YPPlist(1,VARREF(YastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_34 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_34),LITREF(lit_33),T152,ENVNUL,PNUL,YPfalse);
  T155 = BOUNDP(Yast_linearizeYunconstrained_typeQ);
  if (T155 != YPfalse) {
    T154 = VARREF(Yast_linearizeYunconstrained_typeQ);
  } else {
    T154 = YPfalse;
  }
  T156 = fun_unconstrained_typeQ_34;
  T153 = CALL2(1,VARREF(YPdefine_method),T154,T156);
  VARSET(Yast_linearizeYunconstrained_typeQ,T153);
  T157 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YastYLmodule_binding_referenceG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_35 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_35),LITREF(lit_33),T157,ENVNUL,PNUL,YPfalse);
  T160 = BOUNDP(Yast_linearizeYunconstrained_typeQ);
  if (T160 != YPfalse) {
    T159 = VARREF(Yast_linearizeYunconstrained_typeQ);
  } else {
    T159 = YPfalse;
  }
  T161 = fun_unconstrained_typeQ_35;
  T158 = CALL2(1,VARREF(YPdefine_method),T159,T161);
  VARSET(Yast_linearizeYunconstrained_typeQ,T158);
  T162 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_call_upgradesX_36 = YPmet(FUNCODEREF(fun_do_call_upgradesX_36),LITREF(lit_32),T162,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(Yast_linearizeYdo_call_upgradesX);
  if (T165 != YPfalse) {
    T164 = VARREF(Yast_linearizeYdo_call_upgradesX);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_do_call_upgradesX_36;
  T163 = CALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(Yast_linearizeYdo_call_upgradesX,T163);
  lit_37 = YPPsym((P)"analyze-calls");
  T167 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_analyze_calls_37 = YPmet(FUNCODEREF(fun_analyze_calls_37),LITREF(lit_37),T167,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(Yast_linearizeYanalyze_calls);
  if (T170 != YPfalse) {
    T169 = VARREF(Yast_linearizeYanalyze_calls);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_analyze_calls_37;
  T168 = CALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(Yast_linearizeYanalyze_calls,T168);
  lit_38 = YPPsym((P)"<free-reference>");
  T173 = (P)YPpair(VARREF(YastYLreal_referenceG),Ynil);
  T172 = CALL2(1,VARREF(Yfab_class),LITREF(lit_38),T173);
  VARSET(Yast_linearizeYLfree_referenceG,T172);
  lit_39 = YPPsym((P)"reference-offset");
  T174 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(Yast_linearizeYLfree_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_offset_38 = YPmet(FUNCODEREF(fun_reference_offset_38),LITREF(lit_39),T174,ENVNUL,PNUL,YPfalse);
  T177 = BOUNDP(Yast_linearizeYreference_offset);
  if (T177 != YPfalse) {
    T176 = VARREF(Yast_linearizeYreference_offset);
  } else {
    T176 = YPfalse;
  }
  T178 = fun_reference_offset_38;
  T175 = CALL2(1,VARREF(YPdefine_method),T176,T178);
  VARSET(Yast_linearizeYreference_offset,T175);
  lit_40 = YPPsym((P)"reference-offset-setter");
  T180 = CALL1(1,VARREF(YruntimeYfalse_or),VARREF(YLintG));
  T179 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_11)),YPPlist(2,T180,VARREF(Yast_linearizeYLfree_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_offset_setter_39 = YPmet(FUNCODEREF(fun_reference_offset_setter_39),LITREF(lit_40),T179,ENVNUL,PNUL,YPfalse);
  T183 = BOUNDP(Yast_linearizeYreference_offset_setter);
  if (T183 != YPfalse) {
    T182 = VARREF(Yast_linearizeYreference_offset_setter);
  } else {
    T182 = YPfalse;
  }
  T184 = fun_reference_offset_setter_39;
  T181 = CALL2(1,VARREF(YPdefine_method),T182,T184);
  VARSET(Yast_linearizeYreference_offset_setter,T181);
  T185 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T185,ENVNUL,PNUL,YPfalse);
  T186 = CALL1(1,VARREF(YruntimeYfalse_or),VARREF(YLintG));
  T187 = fun_40;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_linearizeYLfree_referenceG),VARREF(Yast_linearizeYreference_offset),VARREF(Yast_linearizeYreference_offset_setter),T186,T187);
  lit_41 = YPPsym((P)"reference-self?");
  T188 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(Yast_linearizeYLfree_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_selfQ_41 = YPmet(FUNCODEREF(fun_reference_selfQ_41),LITREF(lit_41),T188,ENVNUL,PNUL,YPfalse);
  T191 = BOUNDP(Yast_linearizeYreference_selfQ);
  if (T191 != YPfalse) {
    T190 = VARREF(Yast_linearizeYreference_selfQ);
  } else {
    T190 = YPfalse;
  }
  T192 = fun_reference_selfQ_41;
  T189 = CALL2(1,VARREF(YPdefine_method),T190,T192);
  VARSET(Yast_linearizeYreference_selfQ,T189);
  lit_42 = YPPsym((P)"reference-self?-setter");
  T193 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_11)),YPPlist(2,VARREF(YLlogG),VARREF(Yast_linearizeYLfree_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_selfQ_setter_42 = YPmet(FUNCODEREF(fun_reference_selfQ_setter_42),LITREF(lit_42),T193,ENVNUL,PNUL,YPfalse);
  T196 = BOUNDP(Yast_linearizeYreference_selfQ_setter);
  if (T196 != YPfalse) {
    T195 = VARREF(Yast_linearizeYreference_selfQ_setter);
  } else {
    T195 = YPfalse;
  }
  T197 = fun_reference_selfQ_setter_42;
  T194 = CALL2(1,VARREF(YPdefine_method),T195,T197);
  VARSET(Yast_linearizeYreference_selfQ_setter,T194);
  T198 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T198,ENVNUL,PNUL,YPfalse);
  T199 = fun_43;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_linearizeYLfree_referenceG),VARREF(Yast_linearizeYreference_selfQ),VARREF(Yast_linearizeYreference_selfQ_setter),VARREF(YLlogG),T199);
  lit_43 = YPPsym((P)"lift!");
  T200 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_liftX_44 = YPmet(FUNCODEREF(fun_liftX_44),LITREF(lit_43),T200,ENVNUL,PNUL,YPfalse);
  T203 = BOUNDP(Yast_linearizeYliftX);
  if (T203 != YPfalse) {
    T202 = VARREF(Yast_linearizeYliftX);
  } else {
    T202 = YPfalse;
  }
  T204 = fun_liftX_44;
  T201 = CALL2(1,VARREF(YPdefine_method),T202,T204);
  VARSET(Yast_linearizeYliftX,T201);
  lit_44 = YPPsym((P)"lift-procedures!");
  lit_45 = YPPsym((P)"flat-fun");
  T205 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_45),LITREF(lit_22)),YPPlist(3,VARREF(YastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_45 = YPmet(FUNCODEREF(fun_lift_proceduresX_45),LITREF(lit_44),T205,ENVNUL,PNUL,YPfalse);
  T208 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T208 != YPfalse) {
    T207 = VARREF(Yast_linearizeYlift_proceduresX);
  } else {
    T207 = YPfalse;
  }
  T209 = fun_lift_proceduresX_45;
  T206 = CALL2(1,VARREF(YPdefine_method),T207,T209);
  VARSET(Yast_linearizeYlift_proceduresX,T206);
  T210 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_45),LITREF(lit_22)),YPPlist(3,VARREF(YastYLlocal_referenceG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_46 = YPmet(FUNCODEREF(fun_lift_proceduresX_46),LITREF(lit_44),T210,ENVNUL,PNUL,YPfalse);
  T213 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T213 != YPfalse) {
    T212 = VARREF(Yast_linearizeYlift_proceduresX);
  } else {
    T212 = YPfalse;
  }
  T214 = fun_lift_proceduresX_46;
  T211 = CALL2(1,VARREF(YPdefine_method),T212,T214);
  VARSET(Yast_linearizeYlift_proceduresX,T211);
  lit_46 = YPPsym((P)"adjoin-free-binding!");
  lit_47 = YPPsym((P)"ref");
  lit_48 = YPPsym((P)"check");
  lit_49 = YPPsym((P)"i");
  lit_50 = YPPsym((P)"free*");
  lit_51 = YPPsym((P)"add");
  T217 = YPsig(YPPlist(1,LITREF(lit_50)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_add_47 = YPmet(FUNCODEREF(fun_add_47),LITREF(lit_51),T217,ENVNUL,PNUL,YPfalse);
  T216 = YPsig(YPPlist(2,LITREF(lit_49),LITREF(lit_50)),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_check_48 = YPmet(FUNCODEREF(fun_check_48),LITREF(lit_48),T216,ENVNUL,PNUL,YPfalse);
  T215 = YPsig(YPPlist(2,LITREF(lit_45),LITREF(lit_47)),YPPlist(2,VARREF(YastYLast_methodG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_adjoin_free_bindingX_49 = YPmet(FUNCODEREF(fun_adjoin_free_bindingX_49),LITREF(lit_46),T215,ENVNUL,PNUL,YPfalse);
  T220 = BOUNDP(Yast_linearizeYadjoin_free_bindingX);
  if (T220 != YPfalse) {
    T219 = VARREF(Yast_linearizeYadjoin_free_bindingX);
  } else {
    T219 = YPfalse;
  }
  T221 = fun_adjoin_free_bindingX_49;
  T218 = CALL2(1,VARREF(YPdefine_method),T219,T221);
  VARSET(Yast_linearizeYadjoin_free_bindingX,T218);
  T222 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_45),LITREF(lit_22)),YPPlist(3,VARREF(YastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_50 = YPmet(FUNCODEREF(fun_lift_proceduresX_50),LITREF(lit_44),T222,ENVNUL,PNUL,YPfalse);
  T225 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T225 != YPfalse) {
    T224 = VARREF(Yast_linearizeYlift_proceduresX);
  } else {
    T224 = YPfalse;
  }
  T226 = fun_lift_proceduresX_50;
  T223 = CALL2(1,VARREF(YPdefine_method),T224,T226);
  VARSET(Yast_linearizeYlift_proceduresX,T223);
  T227 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_45),LITREF(lit_22)),YPPlist(3,VARREF(YastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_51 = YPmet(FUNCODEREF(fun_lift_proceduresX_51),LITREF(lit_44),T227,ENVNUL,PNUL,YPfalse);
  T230 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T230 != YPfalse) {
    T229 = VARREF(Yast_linearizeYlift_proceduresX);
  } else {
    T229 = YPfalse;
  }
  T231 = fun_lift_proceduresX_51;
  T228 = CALL2(1,VARREF(YPdefine_method),T229,T231);
  VARSET(Yast_linearizeYlift_proceduresX,T228);
  T232 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_45),LITREF(lit_22)),YPPlist(3,VARREF(YastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_52 = YPmet(FUNCODEREF(fun_lift_proceduresX_52),LITREF(lit_44),T232,ENVNUL,PNUL,YPfalse);
  T235 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T235 != YPfalse) {
    T234 = VARREF(Yast_linearizeYlift_proceduresX);
  } else {
    T234 = YPfalse;
  }
  T236 = fun_lift_proceduresX_52;
  T233 = CALL2(1,VARREF(YPdefine_method),T234,T236);
  VARSET(Yast_linearizeYlift_proceduresX,T233);
  T237 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_45),LITREF(lit_22)),YPPlist(3,VARREF(YastYLast_genericG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_53 = YPmet(FUNCODEREF(fun_lift_proceduresX_53),LITREF(lit_44),T237,ENVNUL,PNUL,YPfalse);
  T240 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T240 != YPfalse) {
    T239 = VARREF(Yast_linearizeYlift_proceduresX);
  } else {
    T239 = YPfalse;
  }
  T241 = fun_lift_proceduresX_53;
  T238 = CALL2(1,VARREF(YPdefine_method),T239,T241);
  VARSET(Yast_linearizeYlift_proceduresX,T238);
  T242 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_45),LITREF(lit_22)),YPPlist(3,VARREF(YastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_54 = YPmet(FUNCODEREF(fun_lift_proceduresX_54),LITREF(lit_44),T242,ENVNUL,PNUL,YPfalse);
  T245 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T245 != YPfalse) {
    T244 = VARREF(Yast_linearizeYlift_proceduresX);
  } else {
    T244 = YPfalse;
  }
  T246 = fun_lift_proceduresX_54;
  T243 = CALL2(1,VARREF(YPdefine_method),T244,T246);
  VARSET(Yast_linearizeYlift_proceduresX,T243);
  lit_52 = YPPsym((P)"<flattened-program>");
  T248 = (P)YPpair(VARREF(YastYLcomputed_programG),Ynil);
  T247 = CALL2(1,VARREF(Yfab_class),LITREF(lit_52),T248);
  VARSET(Yast_linearizeYLflattened_programG,T247);
  lit_53 = YPPsym((P)"program-form");
  T249 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_form_55 = YPmet(FUNCODEREF(fun_program_form_55),LITREF(lit_53),T249,ENVNUL,PNUL,YPfalse);
  T252 = BOUNDP(Yast_linearizeYprogram_form);
  if (T252 != YPfalse) {
    T251 = VARREF(Yast_linearizeYprogram_form);
  } else {
    T251 = YPfalse;
  }
  T253 = fun_program_form_55;
  T250 = CALL2(1,VARREF(YPdefine_method),T251,T253);
  VARSET(Yast_linearizeYprogram_form,T250);
  lit_54 = YPPsym((P)"program-form-setter");
  T255 = CALL1(1,VARREF(YruntimeYfalse_or),VARREF(YastYLprogramG));
  T254 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_11)),YPPlist(2,T255,VARREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_form_setter_56 = YPmet(FUNCODEREF(fun_program_form_setter_56),LITREF(lit_54),T254,ENVNUL,PNUL,YPfalse);
  T258 = BOUNDP(Yast_linearizeYprogram_form_setter);
  if (T258 != YPfalse) {
    T257 = VARREF(Yast_linearizeYprogram_form_setter);
  } else {
    T257 = YPfalse;
  }
  T259 = fun_program_form_setter_56;
  T256 = CALL2(1,VARREF(YPdefine_method),T257,T259);
  VARSET(Yast_linearizeYprogram_form_setter,T256);
  T260 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_57 = YPmet(FUNCODEREF(fun_57),YPfalse,T260,ENVNUL,PNUL,YPfalse);
  T261 = CALL1(1,VARREF(YruntimeYfalse_or),VARREF(YastYLprogramG));
  T262 = fun_57;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_linearizeYLflattened_programG),VARREF(Yast_linearizeYprogram_form),VARREF(Yast_linearizeYprogram_form_setter),T261,T262);
  lit_55 = YPPsym((P)"program-quotations");
  T263 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_quotations_58 = YPmet(FUNCODEREF(fun_program_quotations_58),LITREF(lit_55),T263,ENVNUL,PNUL,YPfalse);
  T266 = BOUNDP(Yast_linearizeYprogram_quotations);
  if (T266 != YPfalse) {
    T265 = VARREF(Yast_linearizeYprogram_quotations);
  } else {
    T265 = YPfalse;
  }
  T267 = fun_program_quotations_58;
  T264 = CALL2(1,VARREF(YPdefine_method),T265,T267);
  VARSET(Yast_linearizeYprogram_quotations,T264);
  lit_56 = YPPsym((P)"program-quotations-setter");
  T270 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_11)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T269 = fun_program_quotations_setter_59 = YPmet(FUNCODEREF(fun_program_quotations_setter_59),LITREF(lit_56),T270,ENVNUL,PNUL,YPfalse);
  T274 = BOUNDP(Yast_linearizeYprogram_quotations_setter);
  if (T274 != YPfalse) {
    T273 = VARREF(Yast_linearizeYprogram_quotations_setter);
  } else {
    T273 = YPfalse;
  }
  T275 = fun_program_quotations_setter_59;
  T272 = CALL2(1,VARREF(YPdefine_method),T273,T275);
  T271 = VARSET(Yast_linearizeYprogram_quotations_setter,T272);
  T268 = T271;
  return T268;
}

P Yast_linearizeY___main_1___() {
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
  T0 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_60 = YPmet(FUNCODEREF(fun_60),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T1 = fun_60;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_linearizeYLflattened_programG),VARREF(Yast_linearizeYprogram_quotations),VARREF(Yast_linearizeYprogram_quotations_setter),VARREF(YLanyG),T1);
  lit_57 = YPPsym((P)"program-definitions");
  T2 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_definitions_61 = YPmet(FUNCODEREF(fun_program_definitions_61),LITREF(lit_57),T2,ENVNUL,PNUL,YPfalse);
  T5 = BOUNDP(Yast_linearizeYprogram_definitions);
  if (T5 != YPfalse) {
    T4 = VARREF(Yast_linearizeYprogram_definitions);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_program_definitions_61;
  T3 = CALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(Yast_linearizeYprogram_definitions,T3);
  lit_58 = YPPsym((P)"program-definitions-setter");
  T7 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_11)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_definitions_setter_62 = YPmet(FUNCODEREF(fun_program_definitions_setter_62),LITREF(lit_58),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(Yast_linearizeYprogram_definitions_setter);
  if (T10 != YPfalse) {
    T9 = VARREF(Yast_linearizeYprogram_definitions_setter);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_program_definitions_setter_62;
  T8 = CALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(Yast_linearizeYprogram_definitions_setter,T8);
  T12 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPmet(FUNCODEREF(fun_63),YPfalse,T12,ENVNUL,PNUL,YPfalse);
  T13 = fun_63;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_linearizeYLflattened_programG),VARREF(Yast_linearizeYprogram_definitions),VARREF(Yast_linearizeYprogram_definitions_setter),VARREF(YLanyG),T13);
  lit_59 = YPPsym((P)"<top-level-form>");
  T15 = (P)YPpair(VARREF(YastYLcomputed_programG),Ynil);
  T14 = CALL2(1,VARREF(Yfab_class),LITREF(lit_59),T15);
  VARSET(Yast_linearizeYLtop_level_formG,T14);
  lit_60 = YPPsym((P)"form-program");
  T16 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_program_64 = YPmet(FUNCODEREF(fun_form_program_64),LITREF(lit_60),T16,ENVNUL,PNUL,YPfalse);
  T19 = BOUNDP(Yast_linearizeYform_program);
  if (T19 != YPfalse) {
    T18 = VARREF(Yast_linearizeYform_program);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_form_program_64;
  T17 = CALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(Yast_linearizeYform_program,T17);
  lit_61 = YPPsym((P)"form-program-setter");
  T21 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_11)),YPPlist(2,VARREF(YastYLprogramG),VARREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_program_setter_65 = YPmet(FUNCODEREF(fun_form_program_setter_65),LITREF(lit_61),T21,ENVNUL,PNUL,YPfalse);
  T24 = BOUNDP(Yast_linearizeYform_program_setter);
  if (T24 != YPfalse) {
    T23 = VARREF(Yast_linearizeYform_program_setter);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_form_program_setter_65;
  T22 = CALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(Yast_linearizeYform_program_setter,T22);
  T26 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_66 = YPmet(FUNCODEREF(fun_66),YPfalse,T26,ENVNUL,PNUL,YPfalse);
  T27 = fun_66;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_linearizeYLtop_level_formG),VARREF(Yast_linearizeYform_program),VARREF(Yast_linearizeYform_program_setter),VARREF(YastYLprogramG),T27);
  lit_62 = YPPsym((P)"form-quotations");
  T28 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_quotations_67 = YPmet(FUNCODEREF(fun_form_quotations_67),LITREF(lit_62),T28,ENVNUL,PNUL,YPfalse);
  T31 = BOUNDP(Yast_linearizeYform_quotations);
  if (T31 != YPfalse) {
    T30 = VARREF(Yast_linearizeYform_quotations);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_form_quotations_67;
  T29 = CALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(Yast_linearizeYform_quotations,T29);
  lit_63 = YPPsym((P)"form-quotations-setter");
  T33 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_11)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_quotations_setter_68 = YPmet(FUNCODEREF(fun_form_quotations_setter_68),LITREF(lit_63),T33,ENVNUL,PNUL,YPfalse);
  T36 = BOUNDP(Yast_linearizeYform_quotations_setter);
  if (T36 != YPfalse) {
    T35 = VARREF(Yast_linearizeYform_quotations_setter);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_form_quotations_setter_68;
  T34 = CALL2(1,VARREF(YPdefine_method),T35,T37);
  VARSET(Yast_linearizeYform_quotations_setter,T34);
  T38 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T38,ENVNUL,PNUL,YPfalse);
  T39 = fun_69;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_linearizeYLtop_level_formG),VARREF(Yast_linearizeYform_quotations),VARREF(Yast_linearizeYform_quotations_setter),VARREF(YLanyG),T39);
  lit_64 = YPPsym((P)"form-definitions");
  T40 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_definitions_70 = YPmet(FUNCODEREF(fun_form_definitions_70),LITREF(lit_64),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(Yast_linearizeYform_definitions);
  if (T43 != YPfalse) {
    T42 = VARREF(Yast_linearizeYform_definitions);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_form_definitions_70;
  T41 = CALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(Yast_linearizeYform_definitions,T41);
  lit_65 = YPPsym((P)"form-definitions-setter");
  T45 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_11)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_definitions_setter_71 = YPmet(FUNCODEREF(fun_form_definitions_setter_71),LITREF(lit_65),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(Yast_linearizeYform_definitions_setter);
  if (T48 != YPfalse) {
    T47 = VARREF(Yast_linearizeYform_definitions_setter);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_form_definitions_setter_71;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(Yast_linearizeYform_definitions_setter,T46);
  T50 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T50,ENVNUL,PNUL,YPfalse);
  T51 = fun_72;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_linearizeYLtop_level_formG),VARREF(Yast_linearizeYform_definitions),VARREF(Yast_linearizeYform_definitions_setter),VARREF(YLanyG),T51);
  lit_66 = YPPsym((P)"<closure-creation>");
  T53 = (P)YPpair(VARREF(YastYLcomputed_programG),Ynil);
  T52 = CALL2(1,VARREF(Yfab_class),LITREF(lit_66),T53);
  VARSET(Yast_linearizeYLclosure_creationG,T52);
  lit_67 = YPPsym((P)"closure-creation-index");
  T54 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(Yast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_closure_creation_index_73 = YPmet(FUNCODEREF(fun_closure_creation_index_73),LITREF(lit_67),T54,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(Yast_linearizeYclosure_creation_index);
  if (T57 != YPfalse) {
    T56 = VARREF(Yast_linearizeYclosure_creation_index);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_closure_creation_index_73;
  T55 = CALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(Yast_linearizeYclosure_creation_index,T55);
  lit_68 = YPPsym((P)"closure-creation-index-setter");
  T59 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_11)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_closure_creation_index_setter_74 = YPmet(FUNCODEREF(fun_closure_creation_index_setter_74),LITREF(lit_68),T59,ENVNUL,PNUL,YPfalse);
  T62 = BOUNDP(Yast_linearizeYclosure_creation_index_setter);
  if (T62 != YPfalse) {
    T61 = VARREF(Yast_linearizeYclosure_creation_index_setter);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_closure_creation_index_setter_74;
  T60 = CALL2(1,VARREF(YPdefine_method),T61,T63);
  VARSET(Yast_linearizeYclosure_creation_index_setter,T60);
  T64 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T64,ENVNUL,PNUL,YPfalse);
  T65 = fun_75;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_linearizeYLclosure_creationG),VARREF(Yast_linearizeYclosure_creation_index),VARREF(Yast_linearizeYclosure_creation_index_setter),VARREF(YLanyG),T65);
  lit_69 = YPPsym((P)"closure-creation-free");
  T66 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(Yast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_closure_creation_free_76 = YPmet(FUNCODEREF(fun_closure_creation_free_76),LITREF(lit_69),T66,ENVNUL,PNUL,YPfalse);
  T69 = BOUNDP(Yast_linearizeYclosure_creation_free);
  if (T69 != YPfalse) {
    T68 = VARREF(Yast_linearizeYclosure_creation_free);
  } else {
    T68 = YPfalse;
  }
  T70 = fun_closure_creation_free_76;
  T67 = CALL2(1,VARREF(YPdefine_method),T68,T70);
  VARSET(Yast_linearizeYclosure_creation_free,T67);
  lit_70 = YPPsym((P)"closure-creation-free-setter");
  T71 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_11)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_closure_creation_free_setter_77 = YPmet(FUNCODEREF(fun_closure_creation_free_setter_77),LITREF(lit_70),T71,ENVNUL,PNUL,YPfalse);
  T74 = BOUNDP(Yast_linearizeYclosure_creation_free_setter);
  if (T74 != YPfalse) {
    T73 = VARREF(Yast_linearizeYclosure_creation_free_setter);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_closure_creation_free_setter_77;
  T72 = CALL2(1,VARREF(YPdefine_method),T73,T75);
  VARSET(Yast_linearizeYclosure_creation_free_setter,T72);
  T76 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_78 = YPmet(FUNCODEREF(fun_78),YPfalse,T76,ENVNUL,PNUL,YPfalse);
  T77 = fun_78;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_linearizeYLclosure_creationG),VARREF(Yast_linearizeYclosure_creation_free),VARREF(Yast_linearizeYclosure_creation_free_setter),VARREF(YLanyG),T77);
  lit_71 = YPPsym((P)"flatten-seqs");
  T78 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_flatten_seqs_79 = YPmet(FUNCODEREF(fun_flatten_seqs_79),LITREF(lit_71),T78,ENVNUL,PNUL,YPfalse);
  T81 = BOUNDP(Yast_linearizeYflatten_seqs);
  if (T81 != YPfalse) {
    T80 = VARREF(Yast_linearizeYflatten_seqs);
  } else {
    T80 = YPfalse;
  }
  T82 = fun_flatten_seqs_79;
  T79 = CALL2(1,VARREF(YPdefine_method),T80,T82);
  VARSET(Yast_linearizeYflatten_seqs,T79);
  lit_72 = YPPsym((P)"s");
  lit_73 = YPPsym((P)"r");
  lit_74 = YPPsym((P)"inner");
  lit_75 = YPPsym((P)"ss");
  T85 = YPsig(YPPlist(2,LITREF(lit_75),LITREF(lit_73)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_inner_80 = YPmet(FUNCODEREF(fun_inner_80),LITREF(lit_74),T85,ENVNUL,PNUL,YPfalse);
  T84 = YPsig(YPPlist(2,LITREF(lit_72),LITREF(lit_73)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_81 = YPmet(FUNCODEREF(fun_loop_81),LITREF(lit_23),T84,ENVNUL,PNUL,YPfalse);
  T83 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YastYLsequentialG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_flatten_seqs_82 = YPmet(FUNCODEREF(fun_flatten_seqs_82),LITREF(lit_71),T83,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(Yast_linearizeYflatten_seqs);
  if (T88 != YPfalse) {
    T87 = VARREF(Yast_linearizeYflatten_seqs);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_flatten_seqs_82;
  T86 = CALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(Yast_linearizeYflatten_seqs,T86);
  lit_76 = YPPsym((P)"as-top-level-forms");
  lit_77 = YPPsym((P)"programs");
  T91 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_83 = YPmet(FUNCODEREF(fun_83),YPfalse,T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(YPPlist(1,LITREF(lit_77)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_top_level_forms_84 = YPmet(FUNCODEREF(fun_as_top_level_forms_84),LITREF(lit_76),T90,ENVNUL,PNUL,YPfalse);
  T94 = BOUNDP(Yast_linearizeYas_top_level_forms);
  if (T94 != YPfalse) {
    T93 = VARREF(Yast_linearizeYas_top_level_forms);
  } else {
    T93 = YPfalse;
  }
  T95 = fun_as_top_level_forms_84;
  T92 = CALL2(1,VARREF(YPdefine_method),T93,T95);
  VARSET(Yast_linearizeYas_top_level_forms,T92);
  lit_78 = YPPsym((P)"extract-things!");
  T97 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T97,ENVNUL,PNUL,YPfalse);
  T96 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_extract_thingsX_86 = YPmet(FUNCODEREF(fun_extract_thingsX_86),LITREF(lit_78),T96,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(Yast_linearizeYextract_thingsX);
  if (T100 != YPfalse) {
    T99 = VARREF(Yast_linearizeYextract_thingsX);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_extract_thingsX_86;
  T98 = CALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(Yast_linearizeYextract_thingsX,T98);
  lit_79 = YPPsym((P)"extract!");
  lit_80 = YPPsym((P)"result");
  T102 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_21),LITREF(lit_80)),YPPlist(3,VARREF(YastYLprogramG),VARREF(Yast_linearizeYLtop_level_formG),VARREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_87 = YPmet(FUNCODEREF(fun_extractX_87),LITREF(lit_79),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(Yast_linearizeYextractX);
  if (T105 != YPfalse) {
    T104 = VARREF(Yast_linearizeYextractX);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_extractX_87;
  T103 = CALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(Yast_linearizeYextractX,T103);
  lit_81 = YPPsym((P)"quotation");
  T107 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_21),LITREF(lit_80)),YPPlist(3,VARREF(YastYLconstantG),VARREF(Yast_linearizeYLtop_level_formG),VARREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_88 = YPmet(FUNCODEREF(fun_extractX_88),LITREF(lit_79),T107,ENVNUL,PNUL,YPfalse);
  T110 = BOUNDP(Yast_linearizeYextractX);
  if (T110 != YPfalse) {
    T109 = VARREF(Yast_linearizeYextractX);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_extractX_88;
  T108 = CALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(Yast_linearizeYextractX,T108);
  T112 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_21),LITREF(lit_80)),YPPlist(3,VARREF(YastYLraw_constantG),VARREF(Yast_linearizeYLtop_level_formG),VARREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_89 = YPmet(FUNCODEREF(fun_extractX_89),LITREF(lit_79),T112,ENVNUL,PNUL,YPfalse);
  T115 = BOUNDP(Yast_linearizeYextractX);
  if (T115 != YPfalse) {
    T114 = VARREF(Yast_linearizeYextractX);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_extractX_89;
  T113 = CALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(Yast_linearizeYextractX,T113);
  lit_82 = YPPsym((P)"binding");
  T118 = YPsig(YPPlist(1,LITREF(lit_82)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_90 = YPmet(FUNCODEREF(fun_90),YPfalse,T118,ENVNUL,PNUL,YPfalse);
  T117 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_21),LITREF(lit_80)),YPPlist(3,VARREF(YastYLast_methodG),VARREF(Yast_linearizeYLtop_level_formG),VARREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_91 = YPmet(FUNCODEREF(fun_extractX_91),LITREF(lit_79),T117,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(Yast_linearizeYextractX);
  if (T121 != YPfalse) {
    T120 = VARREF(Yast_linearizeYextractX);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_extractX_91;
  T119 = CALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(Yast_linearizeYextractX,T119);
  T123 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_21),LITREF(lit_80)),YPPlist(3,VARREF(YastYLast_primitive_definitionG),VARREF(Yast_linearizeYLtop_level_formG),VARREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_92 = YPmet(FUNCODEREF(fun_extractX_92),LITREF(lit_79),T123,ENVNUL,PNUL,YPfalse);
  T126 = BOUNDP(Yast_linearizeYextractX);
  if (T126 != YPfalse) {
    T125 = VARREF(Yast_linearizeYextractX);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_extractX_92;
  T124 = CALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(Yast_linearizeYextractX,T124);
  lit_83 = YPPsym((P)"adjoin-definition!");
  T128 = YPsig(YPPlist(3,LITREF(lit_21),LITREF(lit_80),LITREF(lit_14)),YPPlist(3,VARREF(Yast_linearizeYLtop_level_formG),VARREF(Yast_linearizeYLflattened_programG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_adjoin_definitionX_93 = YPmet(FUNCODEREF(fun_adjoin_definitionX_93),LITREF(lit_83),T128,ENVNUL,PNUL,YPfalse);
  T131 = BOUNDP(Yast_linearizeYadjoin_definitionX);
  if (T131 != YPfalse) {
    T130 = VARREF(Yast_linearizeYadjoin_definitionX);
  } else {
    T130 = YPfalse;
  }
  T132 = fun_adjoin_definitionX_93;
  T129 = CALL2(1,VARREF(YPdefine_method),T130,T132);
  VARSET(Yast_linearizeYadjoin_definitionX,T129);
  lit_84 = YPPsym((P)"split-program");
  lit_85 = YPPsym((P)"max-count");
  T133 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_85)),YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_split_program_94 = YPmet(FUNCODEREF(fun_split_program_94),LITREF(lit_84),T133,ENVNUL,PNUL,YPfalse);
  T136 = BOUNDP(Yast_linearizeYsplit_program);
  if (T136 != YPfalse) {
    T135 = VARREF(Yast_linearizeYsplit_program);
  } else {
    T135 = YPfalse;
  }
  T137 = fun_split_program_94;
  T134 = CALL2(1,VARREF(YPdefine_method),T135,T137);
  VARSET(Yast_linearizeYsplit_program,T134);
  lit_86 = YPPsym((P)"forms");
  lit_87 = YPPsym((P)"es");
  lit_88 = YPPsym((P)"count");
  T140 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_87),LITREF(lit_88)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_inner_95 = YPmet(FUNCODEREF(fun_inner_95),LITREF(lit_74),T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(YPPlist(2,LITREF(lit_86),LITREF(lit_72)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_96 = YPmet(FUNCODEREF(fun_loop_96),LITREF(lit_23),T139,ENVNUL,PNUL,YPfalse);
  T138 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_85)),YPPlist(2,VARREF(YastYLsequentialG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_split_program_97 = YPmet(FUNCODEREF(fun_split_program_97),LITREF(lit_84),T138,ENVNUL,PNUL,YPfalse);
  T143 = BOUNDP(Yast_linearizeYsplit_program);
  if (T143 != YPfalse) {
    T142 = VARREF(Yast_linearizeYsplit_program);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_split_program_97;
  T141 = CALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(Yast_linearizeYsplit_program,T141);
  lit_89 = YPPsym((P)"closurize-main!");
  lit_90 = YPPsym((P)"calls");
  lit_91 = YPPsym((P)"defns");
  lit_92 = YPsb((P)"---main-");
  lit_93 = YPsb((P)"---");
  lit_94 = YPPsym((P)"predefined");
  T146 = YPsig(YPPlist(4,LITREF(lit_90),LITREF(lit_91),LITREF(lit_49),LITREF(lit_86)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_loop_98 = YPmet(FUNCODEREF(fun_loop_98),LITREF(lit_23),T146,ENVNUL,PNUL,YPfalse);
  T145 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_73),LITREF(lit_85)),YPPlist(3,VARREF(Yast_linearizeYLflattened_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(Yast_linearizeYLflattened_programG),Ynil);
  fun_closurize_mainX_99 = YPmet(FUNCODEREF(fun_closurize_mainX_99),LITREF(lit_89),T145,ENVNUL,PNUL,YPfalse);
  T149 = BOUNDP(Yast_linearizeYclosurize_mainX);
  if (T149 != YPfalse) {
    T148 = VARREF(Yast_linearizeYclosurize_mainX);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_closurize_mainX_99;
  T147 = CALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(Yast_linearizeYclosurize_mainX,T147);
  lit_95 = YPPsym((P)"gather-temporaries!");
  lit_96 = YPPsym((P)"def");
  T152 = YPsig(YPPlist(1,LITREF(lit_96)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_100 = YPmet(FUNCODEREF(fun_100),YPfalse,T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_gather_temporariesX_101 = YPmet(FUNCODEREF(fun_gather_temporariesX_101),LITREF(lit_95),T151,ENVNUL,PNUL,YPfalse);
  T155 = BOUNDP(Yast_linearizeYgather_temporariesX);
  if (T155 != YPfalse) {
    T154 = VARREF(Yast_linearizeYgather_temporariesX);
  } else {
    T154 = YPfalse;
  }
  T156 = fun_gather_temporariesX_101;
  T153 = CALL2(1,VARREF(YPdefine_method),T154,T156);
  VARSET(Yast_linearizeYgather_temporariesX,T153);
  lit_97 = YPPsym((P)"collect-temporaries!");
  T157 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_45),LITREF(lit_73)),YPPlist(3,VARREF(YastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_102 = YPmet(FUNCODEREF(fun_collect_temporariesX_102),LITREF(lit_97),T157,ENVNUL,PNUL,YPfalse);
  T160 = BOUNDP(Yast_linearizeYcollect_temporariesX);
  if (T160 != YPfalse) {
    T159 = VARREF(Yast_linearizeYcollect_temporariesX);
  } else {
    T159 = YPfalse;
  }
  T161 = fun_collect_temporariesX_102;
  T158 = CALL2(1,VARREF(YPdefine_method),T159,T161);
  VARSET(Yast_linearizeYcollect_temporariesX,T158);
  T162 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_45),LITREF(lit_73)),YPPlist(3,VARREF(YastYLlocal_referenceG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_103 = YPmet(FUNCODEREF(fun_collect_temporariesX_103),LITREF(lit_97),T162,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(Yast_linearizeYcollect_temporariesX);
  if (T165 != YPfalse) {
    T164 = VARREF(Yast_linearizeYcollect_temporariesX);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_collect_temporariesX_103;
  T163 = CALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(Yast_linearizeYcollect_temporariesX,T163);
  T167 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_45),LITREF(lit_73)),YPPlist(3,VARREF(YastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_104 = YPmet(FUNCODEREF(fun_collect_temporariesX_104),LITREF(lit_97),T167,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(Yast_linearizeYcollect_temporariesX);
  if (T170 != YPfalse) {
    T169 = VARREF(Yast_linearizeYcollect_temporariesX);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_collect_temporariesX_104;
  T168 = CALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(Yast_linearizeYcollect_temporariesX,T168);
  T172 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_45),LITREF(lit_73)),YPPlist(3,VARREF(YastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_105 = YPmet(FUNCODEREF(fun_collect_temporariesX_105),LITREF(lit_97),T172,ENVNUL,PNUL,YPfalse);
  T175 = BOUNDP(Yast_linearizeYcollect_temporariesX);
  if (T175 != YPfalse) {
    T174 = VARREF(Yast_linearizeYcollect_temporariesX);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_collect_temporariesX_105;
  T173 = CALL2(1,VARREF(YPdefine_method),T174,T176);
  VARSET(Yast_linearizeYcollect_temporariesX,T173);
  lit_98 = YPPsym((P)"adjoin-temporary-variables!");
  lit_99 = YPPsym((P)"new-bindings");
  lit_100 = YPPsym((P)"adjoin");
  lit_101 = YPPsym((P)"temps");
  T178 = YPsig(YPPlist(2,LITREF(lit_101),LITREF(lit_22)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_adjoin_106 = YPmet(FUNCODEREF(fun_adjoin_106),LITREF(lit_100),T178,ENVNUL,PNUL,YPfalse);
  T177 = YPsig(YPPlist(2,LITREF(lit_45),LITREF(lit_99)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_adjoin_temporary_variablesX_107 = YPmet(FUNCODEREF(fun_adjoin_temporary_variablesX_107),LITREF(lit_98),T177,ENVNUL,PNUL,YPfalse);
  T181 = BOUNDP(Yast_linearizeYadjoin_temporary_variablesX);
  if (T181 != YPfalse) {
    T180 = VARREF(Yast_linearizeYadjoin_temporary_variablesX);
  } else {
    T180 = YPfalse;
  }
  T182 = fun_adjoin_temporary_variablesX_107;
  T179 = CALL2(1,VARREF(YPdefine_method),T180,T182);
  VARSET(Yast_linearizeYadjoin_temporary_variablesX,T179);
  lit_102 = YPPsym((P)"<renamed-local-binding>");
  T184 = (P)YPpair(VARREF(YastYLlocal_bindingG),Ynil);
  T183 = CALL2(1,VARREF(Yfab_class),LITREF(lit_102),T184);
  VARSET(Yast_linearizeYLrenamed_local_bindingG,T183);
  lit_103 = YPPsym((P)"binding-index");
  T185 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(Yast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_index_108 = YPmet(FUNCODEREF(fun_binding_index_108),LITREF(lit_103),T185,ENVNUL,PNUL,YPfalse);
  T188 = BOUNDP(YastYbinding_index);
  if (T188 != YPfalse) {
    T187 = VARREF(YastYbinding_index);
  } else {
    T187 = YPfalse;
  }
  T189 = fun_binding_index_108;
  T186 = CALL2(1,VARREF(YPdefine_method),T187,T189);
  VARSET(YastYbinding_index,T186);
  lit_104 = YPPsym((P)"binding-index-setter");
  T190 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_11)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_index_setter_109 = YPmet(FUNCODEREF(fun_binding_index_setter_109),LITREF(lit_104),T190,ENVNUL,PNUL,YPfalse);
  T193 = BOUNDP(YastYbinding_index_setter);
  if (T193 != YPfalse) {
    T192 = VARREF(YastYbinding_index_setter);
  } else {
    T192 = YPfalse;
  }
  T194 = fun_binding_index_setter_109;
  T191 = CALL2(1,VARREF(YPdefine_method),T192,T194);
  VARSET(YastYbinding_index_setter,T191);
  T195 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_110 = YPmet(FUNCODEREF(fun_110),YPfalse,T195,ENVNUL,PNUL,YPfalse);
  T196 = fun_110;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_linearizeYLrenamed_local_bindingG),VARREF(YastYbinding_index),VARREF(YastYbinding_index_setter),VARREF(YLanyG),T196);
  VARSET(Yast_linearizeYTrenaming_bindings_counterT,YPint((P)0));
  lit_105 = YPPsym((P)"new-renamed-binding");
  T197 = YPsig(YPPlist(1,LITREF(lit_82)),YPPlist(1,VARREF(YastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_new_renamed_binding_111 = YPmet(FUNCODEREF(fun_new_renamed_binding_111),LITREF(lit_105),T197,ENVNUL,PNUL,YPfalse);
  T200 = BOUNDP(Yast_linearizeYnew_renamed_binding);
  if (T200 != YPfalse) {
    T199 = VARREF(Yast_linearizeYnew_renamed_binding);
  } else {
    T199 = YPfalse;
  }
  T201 = fun_new_renamed_binding_111;
  T198 = CALL2(1,VARREF(YPdefine_method),T199,T201);
  VARSET(Yast_linearizeYnew_renamed_binding,T198);
  VARSET(Yast_linearizeYTregister_passiveQT,YPfalse);
  lit_106 = YPPsym((P)"register-allocate!");
  lit_107 = YPPsym((P)"register-passive?");
  T205 = YPsig(YPPlist(1,LITREF(lit_96)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_112 = YPmet(FUNCODEREF(fun_112),YPfalse,T205,ENVNUL,PNUL,YPfalse);
  T204 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_113 = YPmet(FUNCODEREF(fun_113),YPfalse,T204,ENVNUL,PNUL,YPfalse);
  T203 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_114 = YPmet(FUNCODEREF(fun_114),YPfalse,T203,ENVNUL,PNUL,YPfalse);
  T202 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_107)),YPPlist(2,VARREF(YastYLprogramG),VARREF(YLlogG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_register_allocateX_115 = YPmet(FUNCODEREF(fun_register_allocateX_115),LITREF(lit_106),T202,ENVNUL,PNUL,YPfalse);
  T208 = BOUNDP(Yast_linearizeYregister_allocateX);
  if (T208 != YPfalse) {
    T207 = VARREF(Yast_linearizeYregister_allocateX);
  } else {
    T207 = YPfalse;
  }
  T209 = fun_register_allocateX_115;
  T206 = CALL2(1,VARREF(YPdefine_method),T207,T209);
  VARSET(Yast_linearizeYregister_allocateX,T206);
  lit_108 = YPPsym((P)"allocate-register");
  lit_109 = YPPsym((P)"val?");
  T210 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_45),LITREF(lit_109)),YPPlist(3,VARREF(YastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_allocate_register_116 = YPmet(FUNCODEREF(fun_allocate_register_116),LITREF(lit_108),T210,ENVNUL,PNUL,YPfalse);
  T213 = BOUNDP(Yast_linearizeYallocate_register);
  if (T213 != YPfalse) {
    T212 = VARREF(Yast_linearizeYallocate_register);
  } else {
    T212 = YPfalse;
  }
  T214 = fun_allocate_register_116;
  T211 = CALL2(1,VARREF(YPdefine_method),T212,T214);
  VARSET(Yast_linearizeYallocate_register,T211);
  lit_110 = YPPsym((P)"collect-registers!");
  T215 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_45),LITREF(lit_109)),YPPlist(3,VARREF(YastYLcomputed_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_117 = YPmet(FUNCODEREF(fun_collect_registersX_117),LITREF(lit_110),T215,ENVNUL,PNUL,YPfalse);
  T218 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T218 != YPfalse) {
    T217 = VARREF(Yast_linearizeYcollect_registersX);
  } else {
    T217 = YPfalse;
  }
  T219 = fun_collect_registersX_117;
  T216 = CALL2(1,VARREF(YPdefine_method),T217,T219);
  VARSET(Yast_linearizeYcollect_registersX,T216);
  T221 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_118 = YPmet(FUNCODEREF(fun_loop_118),LITREF(lit_23),T221,ENVNUL,PNUL,YPfalse);
  T220 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_45),LITREF(lit_109)),YPPlist(3,VARREF(YastYLsequentialG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_119 = YPmet(FUNCODEREF(fun_collect_registersX_119),LITREF(lit_110),T220,ENVNUL,PNUL,YPfalse);
  T224 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T224 != YPfalse) {
    T223 = VARREF(Yast_linearizeYcollect_registersX);
  } else {
    T223 = YPfalse;
  }
  T225 = fun_collect_registersX_119;
  T222 = CALL2(1,VARREF(YPdefine_method),T223,T225);
  VARSET(Yast_linearizeYcollect_registersX,T222);
  T226 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_45),LITREF(lit_109)),YPPlist(3,VARREF(YastYLpassive_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_120 = YPmet(FUNCODEREF(fun_collect_registersX_120),LITREF(lit_110),T226,ENVNUL,PNUL,YPfalse);
  T229 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T229 != YPfalse) {
    T228 = VARREF(Yast_linearizeYcollect_registersX);
  } else {
    T228 = YPfalse;
  }
  T230 = fun_collect_registersX_120;
  T227 = CALL2(1,VARREF(YPdefine_method),T228,T230);
  VARSET(Yast_linearizeYcollect_registersX,T227);
  T232 = YPsig(YPPlist(1,LITREF(lit_96)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_121 = YPmet(FUNCODEREF(fun_121),YPfalse,T232,ENVNUL,PNUL,YPfalse);
  T231 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_45),LITREF(lit_109)),YPPlist(3,VARREF(Yast_linearizeYLtop_level_formG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_122 = YPmet(FUNCODEREF(fun_collect_registersX_122),LITREF(lit_110),T231,ENVNUL,PNUL,YPfalse);
  T235 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T235 != YPfalse) {
    T234 = VARREF(Yast_linearizeYcollect_registersX);
  } else {
    T234 = YPfalse;
  }
  T236 = fun_collect_registersX_122;
  T233 = CALL2(1,VARREF(YPdefine_method),T234,T236);
  VARSET(Yast_linearizeYcollect_registersX,T233);
  T237 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_45),LITREF(lit_109)),YPPlist(3,VARREF(YastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_123 = YPmet(FUNCODEREF(fun_collect_registersX_123),LITREF(lit_110),T237,ENVNUL,PNUL,YPfalse);
  T240 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T240 != YPfalse) {
    T239 = VARREF(Yast_linearizeYcollect_registersX);
  } else {
    T239 = YPfalse;
  }
  T241 = fun_collect_registersX_123;
  T238 = CALL2(1,VARREF(YPdefine_method),T239,T241);
  VARSET(Yast_linearizeYcollect_registersX,T238);
  T242 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_45),LITREF(lit_109)),YPPlist(3,VARREF(YastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_124 = YPmet(FUNCODEREF(fun_collect_registersX_124),LITREF(lit_110),T242,ENVNUL,PNUL,YPfalse);
  T245 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T245 != YPfalse) {
    T244 = VARREF(Yast_linearizeYcollect_registersX);
  } else {
    T244 = YPfalse;
  }
  T246 = fun_collect_registersX_124;
  T243 = CALL2(1,VARREF(YPdefine_method),T244,T246);
  VARSET(Yast_linearizeYcollect_registersX,T243);
  lit_111 = YPPsym((P)"ast-contains-fun?");
  T247 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_ast_contains_funQ_125 = YPmet(FUNCODEREF(fun_ast_contains_funQ_125),LITREF(lit_111),T247,ENVNUL,PNUL,YPfalse);
  T250 = BOUNDP(Yast_linearizeYast_contains_funQ);
  if (T250 != YPfalse) {
    T249 = VARREF(Yast_linearizeYast_contains_funQ);
  } else {
    T249 = YPfalse;
  }
  T251 = fun_ast_contains_funQ_125;
  T248 = CALL2(1,VARREF(YPdefine_method),T249,T251);
  VARSET(Yast_linearizeYast_contains_funQ,T248);
  lit_112 = YPPsym((P)"return");
  lit_113 = YPPsym((P)"walk");
  lit_114 = YPPsym((P)"y");
  T254 = YPsig(YPPlist(1,LITREF(lit_114)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_walk_126 = YPmet(FUNCODEREF(fun_walk_126),LITREF(lit_113),T254,ENVNUL,PNUL,YPfalse);
  T253 = YPsig(YPPlist(1,LITREF(lit_112)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_127 = YPmet(FUNCODEREF(fun_127),YPfalse,T253,ENVNUL,PNUL,YPfalse);
  T252 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_ast_contains_funQ_128 = YPmet(FUNCODEREF(fun_ast_contains_funQ_128),LITREF(lit_111),T252,ENVNUL,PNUL,YPfalse);
  T257 = BOUNDP(Yast_linearizeYast_contains_funQ);
  if (T257 != YPfalse) {
    T256 = VARREF(Yast_linearizeYast_contains_funQ);
  } else {
    T256 = YPfalse;
  }
  T258 = fun_ast_contains_funQ_128;
  T255 = CALL2(1,VARREF(YPdefine_method),T256,T258);
  VARSET(Yast_linearizeYast_contains_funQ,T255);
  T259 = YPfalse;
  return T259;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_runtime;
extern MODULE_INFO module_info_ast;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {&module_info_macros},
  {&module_info_runtime},
  {&module_info_ast},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"binding-kind", &module_info_ast, "binding-kind"},
  {"reduce+", &module_info_runtime, "reduce+"},
  {"module-target-environment", &module_info_ast, "module-target-environment"},
  {"map", &module_info_macros, "map"},
  {"nul", &module_info_boot, "nul"},
  {"swapf", &module_info_macros, "swapf"},
  {"curry", &module_info_runtime, "curry"},
  {"<ast-generic>", &module_info_ast, "<ast-generic>"},
  {"%i<", &module_info_boot, "%i<"},
  {"table-protocol", &module_info_runtime, "table-protocol"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"in", &module_info_runtime, "in"},
  {"class-name", &module_info_boot, "class-name"},
  {"assocs-test", &module_info_runtime, "assocs-test"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"<free-environment>", &module_info_ast, "<free-environment>"},
  {"always", &module_info_runtime, "always"},
  {"select", &module_info_macros, "select"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"<assignment>", &module_info_ast, "<assignment>"},
  {"monitor-main-thunk", &module_info_ast, "monitor-main-thunk"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"<int>", &module_info_boot, "<int>"},
  {"<num>", &module_info_boot, "<num>"},
  {"map2", &module_info_runtime, "map2"},
  {"function-source-setter", &module_info_ast, "function-source-setter"},
  {"global-box-value-setter", &module_info_ast, "global-box-value-setter"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"function-data-refs-setter", &module_info_ast, "function-data-refs-setter"},
  {"%i^", &module_info_boot, "%i^"},
  {"3rd", &module_info_runtime, "3rd"},
  {"<local-reference>", &module_info_ast, "<local-reference>"},
  {"read-char", &module_info_runtime, "read-char"},
  {"<definition>", &module_info_ast, "<definition>"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"<file-port>", &module_info_runtime, "<file-port>"},
  {"nxt-state", &module_info_runtime, "nxt-state"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"load-in", &module_info_ast, "load-in"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"%i-", &module_info_boot, "%i-"},
  {"global-box-value", &module_info_ast, "global-box-value"},
  {"loc", &module_info_boot, "loc"},
  {"signature-specs", &module_info_ast, "signature-specs"},
  {"alternative-condition", &module_info_ast, "alternative-condition"},
  {"signature-nary?", &module_info_ast, "signature-nary?"},
  {"<string-port>", &module_info_runtime, "<string-port>"},
  {"function-signature-setter", &module_info_ast, "function-signature-setter"},
  {"ceiling/", &module_info_runtime, "ceiling/"},
  {"unwind-protect-cleanup-thunk", &module_info_ast, "unwind-protect-cleanup-thunk"},
  {"call-with-input-file", &module_info_runtime, "call-with-input-file"},
  {"function-temporaries", &module_info_ast, "function-temporaries"},
  {"signature-value", &module_info_ast, "signature-value"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"%selt", &module_info_boot, "%selt"},
  {"module-name-to-relpath", &module_info_ast, "module-name-to-relpath"},
  {"signature-names-setter", &module_info_ast, "signature-names-setter"},
  {"port-index", &module_info_runtime, "port-index"},
  {"floor/", &module_info_runtime, "floor/"},
  {"now-key", &module_info_runtime, "now-key"},
  {"locals-body-setter", &module_info_ast, "locals-body-setter"},
  {"function-debug-name", &module_info_ast, "function-debug-name"},
  {"%cu", &module_info_boot, "%cu"},
  {"reduce", &module_info_runtime, "reduce"},
  {"%slot", &module_info_boot, "%slot"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"<global-reference>", &module_info_ast, "<global-reference>"},
  {"%fu", &module_info_boot, "%fu"},
  {"var-type", &module_info_macros, "var-type"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"locals-functions-setter", &module_info_ast, "locals-functions-setter"},
  {"dg", &module_info_boot, "dg"},
  {"<ast-primitive-definition>", &module_info_ast, "<ast-primitive-definition>"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"close-input-port", &module_info_runtime, "close-input-port"},
  {"round/", &module_info_runtime, "round/"},
  {"num-to-str", &module_info_runtime, "num-to-str"},
  {"dss", &module_info_boot, "dss"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"dp", &module_info_boot, "dp"},
  {"assocq", &module_info_runtime, "assocq"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"now-elt", &module_info_runtime, "now-elt"},
  {"%sb", &module_info_boot, "%sb"},
  {"<log>", &module_info_boot, "<log>"},
  {"locals-body", &module_info_ast, "locals-body"},
  {"flo-bits", &module_info_runtime, "flo-bits"},
  {"lsh", &module_info_runtime, "lsh"},
  {"as-lst", &module_info_ast, "as-lst"},
  {"ash", &module_info_runtime, "ash"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"identity", &module_info_runtime, "identity"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"%with-monitor", &module_info_runtime, "%with-monitor"},
  {"*print-base*", &module_info_runtime, "*print-base*"},
  {"<file-input-port>", &module_info_runtime, "<file-input-port>"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"pair", &module_info_macros, "pair"},
  {"dv", &module_info_boot, "dv"},
  {"now-elt-setter", &module_info_runtime, "now-elt-setter"},
  {"<module>", &module_info_ast, "<module>"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"not", &module_info_boot, "not"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"-", &module_info_runtime, "-"},
  {"application-binding", &module_info_ast, "application-binding"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"abs", &module_info_runtime, "abs"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"to-str", &module_info_runtime, "to-str"},
  {"max", &module_info_runtime, "max"},
  {"application-tail?", &module_info_ast, "application-tail?"},
  {"%f*", &module_info_boot, "%f*"},
  {"<any>", &module_info_boot, "<any>"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"sub-setter", &module_info_runtime, "sub-setter"},
  {"%su", &module_info_boot, "%su"},
  {"assert", &module_info_macros, "assert"},
  {"<ast-function>", &module_info_ast, "<ast-function>"},
  {"*", &module_info_runtime, "*"},
  {"table-growth-threshold", &module_info_runtime, "table-growth-threshold"},
  {"set", &module_info_boot, "set"},
  {"export", &module_info_boot, "export"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"type-class", &module_info_boot, "type-class"},
  {"binding-value-setter", &module_info_ast, "binding-value-setter"},
  {"ddv", &module_info_macros, "ddv"},
  {"fin-state?", &module_info_runtime, "fin-state?"},
  {"<unwind-protect>", &module_info_ast, "<unwind-protect>"},
  {"invoke-handler-interactively", &module_info_runtime, "invoke-handler-interactively"},
  {"<union>", &module_info_boot, "<union>"},
  {"constant-index-setter", &module_info_ast, "constant-index-setter"},
  {"%bb", &module_info_boot, "%bb"},
  {"lst", &module_info_boot, "lst"},
  {"%ft", &module_info_boot, "%ft"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"cat", &module_info_macros, "cat"},
  {"binding-global-box", &module_info_ast, "binding-global-box"},
  {"constant-index", &module_info_ast, "constant-index"},
  {"<local-assignment>", &module_info_ast, "<local-assignment>"},
  {"assignment-form-setter", &module_info_ast, "assignment-form-setter"},
  {"signature-nary?-setter", &module_info_ast, "signature-nary?-setter"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"assoc", &module_info_runtime, "assoc"},
  {"binding-value", &module_info_ast, "binding-value"},
  {"isa", &module_info_boot, "isa"},
  {"ini-state", &module_info_runtime, "ini-state"},
  {"floor", &module_info_runtime, "floor"},
  {"<error>", &module_info_runtime, "<error>"},
  {"bind-exit-main-fun", &module_info_ast, "bind-exit-main-fun"},
  {"var-name", &module_info_macros, "var-name"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"modulo", &module_info_runtime, "modulo"},
  {"fun", &module_info_boot, "fun"},
  {"pick", &module_info_runtime, "pick"},
  {"collect", &module_info_macros, "collect"},
  {"monitor-handler", &module_info_ast, "monitor-handler"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"map-keyed", &module_info_runtime, "map-keyed"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"last", &module_info_runtime, "last"},
  {"or", &module_info_macros, "or"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"low-elt", &module_info_runtime, "low-elt"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"<module-binding>", &module_info_ast, "<module-binding>"},
  {"dec", &module_info_macros, "dec"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"<ast-macro-definition>", &module_info_ast, "<ast-macro-definition>"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"<=", &module_info_runtime, "<="},
  {"peek-char", &module_info_runtime, "peek-char"},
  {"push-last!", &module_info_runtime, "push-last!"},
  {"<arguments>", &module_info_ast, "<arguments>"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"<ast-signature>", &module_info_ast, "<ast-signature>"},
  {"format", &module_info_runtime, "format"},
  {"all2?", &module_info_runtime, "all2?"},
  {"function-signature", &module_info_ast, "function-signature"},
  {"@+", &module_info_boot, "@+"},
  {"do-keyed", &module_info_runtime, "do-keyed"},
  {"module-syntax-environment", &module_info_ast, "module-syntax-environment"},
  {"low-elt-setter", &module_info_runtime, "low-elt-setter"},
  {"report-undefined-global-bindings", &module_info_ast, "report-undefined-global-bindings"},
  {"seq", &module_info_boot, "seq"},
  {"runtime-environment", &module_info_ast, "runtime-environment"},
  {"unexec", &module_info_boot, "unexec"},
  {"%pair", &module_info_boot, "%pair"},
  {"mem?", &module_info_runtime, "mem?"},
  {"apply", &module_info_macros, "apply"},
  {"%c=", &module_info_boot, "%c="},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"fix-let-bindings-setter", &module_info_ast, "fix-let-bindings-setter"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"remainder", &module_info_runtime, "remainder"},
  {"do-module-loader-modules", &module_info_ast, "do-module-loader-modules"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"assignment-binding", &module_info_ast, "assignment-binding"},
  {"%vec", &module_info_boot, "%vec"},
  {"%snul", &module_info_boot, "%snul"},
  {"error", &module_info_boot, "error"},
  {"rep", &module_info_boot, "rep"},
  {"logior", &module_info_runtime, "logior"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"rev", &module_info_runtime, "rev"},
  {"close-output-port", &module_info_runtime, "close-output-port"},
  {"function-self-recursive?-setter", &module_info_ast, "function-self-recursive?-setter"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"<step>", &module_info_runtime, "<step>"},
  {"try", &module_info_boot, "try"},
  {"%i*", &module_info_boot, "%i*"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"<map>", &module_info_runtime, "<map>"},
  {"%%sym", &module_info_boot, "%%sym"},
  {"$proto-boot-module-name", &module_info_ast, "$proto-boot-module-name"},
  {"lowercase?", &module_info_runtime, "lowercase?"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"pos?", &module_info_runtime, "pos?"},
  {"program-type-setter", &module_info_ast, "program-type-setter"},
  {"%ib", &module_info_boot, "%ib"},
  {"function-temporaries-setter", &module_info_ast, "function-temporaries-setter"},
  {">", &module_info_runtime, ">"},
  {"do-named-static-global-bindings", &module_info_ast, "do-named-static-global-bindings"},
  {"unless", &module_info_macros, "unless"},
  {"~=", &module_info_runtime, "~="},
  {"<restart>", &module_info_runtime, "<restart>"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"remove-modules-by-name!", &module_info_ast, "remove-modules-by-name!"},
  {"do-static-global-bindings", &module_info_ast, "do-static-global-bindings"},
  {"quote", &module_info_boot, "quote"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"pop-last!", &module_info_runtime, "pop-last!"},
  {"binding-name", &module_info_ast, "binding-name"},
  {"sig", &module_info_runtime, "sig"},
  {"<predefined-application>", &module_info_ast, "<predefined-application>"},
  {"reference-frame-offset", &module_info_ast, "reference-frame-offset"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"copy-state", &module_info_runtime, "copy-state"},
  {"function-registers-setter", &module_info_ast, "function-registers-setter"},
  {"function-source", &module_info_ast, "function-source"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"locals-functions", &module_info_ast, "locals-functions"},
  {"logxor", &module_info_runtime, "logxor"},
  {"signature-arity-setter", &module_info_ast, "signature-arity-setter"},
  {"module-binding", &module_info_ast, "module-binding"},
  {"ascii-limit", &module_info_runtime, "ascii-limit"},
  {"char-ready?", &module_info_runtime, "char-ready?"},
  {"%fb", &module_info_boot, "%fb"},
  {"signature-bindings-setter", &module_info_ast, "signature-bindings-setter"},
  {"list-handlers", &module_info_runtime, "list-handlers"},
  {"cat2", &module_info_runtime, "cat2"},
  {"<", &module_info_runtime, "<"},
  {"pop", &module_info_runtime, "pop"},
  {"locals-bindings", &module_info_ast, "locals-bindings"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"$proto-runtime-module-name", &module_info_ast, "$proto-runtime-module-name"},
  {"function-self-recursive?", &module_info_ast, "function-self-recursive?"},
  {"<global-box>", &module_info_ast, "<global-box>"},
  {"default", &module_info_runtime, "default"},
  {"%f=", &module_info_boot, "%f="},
  {"find-binding", &module_info_ast, "find-binding"},
  {"%process-module", &module_info_boot, "%process-module"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"keys", &module_info_runtime, "keys"},
  {"logand", &module_info_runtime, "logand"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"<monitor>", &module_info_ast, "<monitor>"},
  {"cat!", &module_info_runtime, "cat!"},
  {"<module-binding-reference>", &module_info_ast, "<module-binding-reference>"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"alternative-alternant", &module_info_ast, "alternative-alternant"},
  {"len", &module_info_runtime, "len"},
  {"function-index-setter", &module_info_ast, "function-index-setter"},
  {"napply", &module_info_macros, "napply"},
  {"and", &module_info_macros, "and"},
  {"reference-called-function?-setter", &module_info_ast, "reference-called-function?-setter"},
  {"=", &module_info_runtime, "="},
  {"program-type", &module_info_ast, "program-type"},
  {"tup", &module_info_macros, "tup"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"add", &module_info_runtime, "add"},
  {"ceiling", &module_info_runtime, "ceiling"},
  {"<input-port>", &module_info_runtime, "<input-port>"},
  {"<reference>", &module_info_ast, "<reference>"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"add!", &module_info_runtime, "add!"},
  {"%str", &module_info_boot, "%str"},
  {"id-hash", &module_info_runtime, "id-hash"},
  {"@<", &module_info_boot, "@<"},
  {"truncate/", &module_info_runtime, "truncate/"},
  {"eof-object", &module_info_runtime, "eof-object"},
  {"eof-object?", &module_info_runtime, "eof-object?"},
  {"lognot", &module_info_runtime, "lognot"},
  {"locals-bindings-setter", &module_info_ast, "locals-bindings-setter"},
  {"<incongruent-method-error>", &module_info_runtime, "<incongruent-method-error>"},
  {"function-bindings", &module_info_ast, "function-bindings"},
  {"%lb", &module_info_boot, "%lb"},
  {"gensym", &module_info_macros, "gensym"},
  {"any2?", &module_info_runtime, "any2?"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"type-object", &module_info_boot, "type-object"},
  {"binding-global-box-setter", &module_info_ast, "binding-global-box-setter"},
  {"if", &module_info_boot, "if"},
  {"function-registers", &module_info_ast, "function-registers"},
  {"<class>", &module_info_boot, "<class>"},
  {"popf", &module_info_macros, "popf"},
  {"as", &module_info_runtime, "as"},
  {"current-gc-state", &module_info_runtime, "current-gc-state"},
  {"binding-inferred-type-setter", &module_info_ast, "binding-inferred-type-setter"},
  {"fin", &module_info_boot, "fin"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"to-digit", &module_info_runtime, "to-digit"},
  {"<bot>", &module_info_ast, "<bot>"},
  {"probe-module", &module_info_ast, "probe-module"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"binding-dotted?", &module_info_ast, "binding-dotted?"},
  {"<sequential>", &module_info_ast, "<sequential>"},
  {"<real-reference>", &module_info_ast, "<real-reference>"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"any?", &module_info_runtime, "any?"},
  {"application-known?", &module_info_ast, "application-known?"},
  {"function-index", &module_info_ast, "function-index"},
  {"application-known?-setter", &module_info_ast, "application-known?-setter"},
  {"binding-dynamic-extent?", &module_info_ast, "binding-dynamic-extent?"},
  {"binding-index-setter", &module_info_ast, "binding-index-setter"},
  {"assq", &module_info_runtime, "assq"},
  {"binding-native-to?", &module_info_ast, "binding-native-to?"},
  {"<type>", &module_info_boot, "<type>"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"<str-tab>", &module_info_runtime, "<str-tab>"},
  {"application-function", &module_info_ast, "application-function"},
  {"push", &module_info_runtime, "push"},
  {"set-module-environments", &module_info_ast, "set-module-environments"},
  {"module-name", &module_info_ast, "module-name"},
  {"binding-dynamic-extent?-setter", &module_info_ast, "binding-dynamic-extent?-setter"},
  {"binding-inferred-type", &module_info_ast, "binding-inferred-type"},
  {"compose", &module_info_runtime, "compose"},
  {"<regular-application>", &module_info_ast, "<regular-application>"},
  {"open-input-file", &module_info_runtime, "open-input-file"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"fill", &module_info_runtime, "fill"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"binding-mutable?", &module_info_ast, "binding-mutable?"},
  {"out", &module_info_runtime, "out"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"%iu", &module_info_boot, "%iu"},
  {"call-with-output-file", &module_info_runtime, "call-with-output-file"},
  {"%slen", &module_info_boot, "%slen"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"<buf>", &module_info_runtime, "<buf>"},
  {"char->ascii", &module_info_runtime, "char->ascii"},
  {"assignment-form", &module_info_ast, "assignment-form"},
  {"from", &module_info_runtime, "from"},
  {"application-arguments", &module_info_ast, "application-arguments"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"dc", &module_info_boot, "dc"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"env-object-name", &module_info_ast, "env-object-name"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"%iv", &module_info_boot, "%iv"},
  {"<static-global-environment>", &module_info_ast, "<static-global-environment>"},
  {"first-then", &module_info_runtime, "first-then"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"len-setter", &module_info_runtime, "len-setter"},
  {"$permanent-hash-state", &module_info_runtime, "$permanent-hash-state"},
  {"reference-frame-number", &module_info_ast, "reference-frame-number"},
  {"false-or", &module_info_runtime, "false-or"},
  {"module-loader-module-type", &module_info_ast, "module-loader-module-type"},
  {"uppercase?", &module_info_runtime, "uppercase?"},
  {"<locals>", &module_info_ast, "<locals>"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"build-condition-for-handler-interactively", &module_info_runtime, "build-condition-for-handler-interactively"},
  {"function-value", &module_info_ast, "function-value"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"signature-bindings", &module_info_ast, "signature-bindings"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"zero?", &module_info_runtime, "zero?"},
  {"pushf", &module_info_macros, "pushf"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"init-ast", &module_info_ast, "init-ast"},
  {"def-list", &module_info_ast, "def-list"},
  {"address-of", &module_info_runtime, "address-of"},
  {"signature-names", &module_info_ast, "signature-names"},
  {"build-condition-interactively", &module_info_runtime, "build-condition-interactively"},
  {"alter", &module_info_runtime, "alter"},
  {"all?", &module_info_runtime, "all?"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"binding-info-setter", &module_info_ast, "binding-info-setter"},
  {">=", &module_info_runtime, ">="},
  {"binding-module-name", &module_info_ast, "binding-module-name"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"def-programs", &module_info_ast, "def-programs"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"elt", &module_info_macros, "elt"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"%c<", &module_info_boot, "%c<"},
  {"let", &module_info_boot, "let"},
  {"<port>", &module_info_runtime, "<port>"},
  {"program-register-setter", &module_info_ast, "program-register-setter"},
  {"<list>", &module_info_runtime, "<list>"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"elt-setter", &module_info_runtime, "elt-setter"},
  {"%i+", &module_info_boot, "%i+"},
  {"alphabetic?", &module_info_runtime, "alphabetic?"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"program-register", &module_info_ast, "program-register"},
  {"newline", &module_info_runtime, "newline"},
  {"%raw", &module_info_boot, "%raw"},
  {"<ast-method>", &module_info_ast, "<ast-method>"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"function-free", &module_info_ast, "function-free"},
  {"binding-info", &module_info_ast, "binding-info"},
  {"<string-output-port>", &module_info_runtime, "<string-output-port>"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"vec", &module_info_runtime, "vec"},
  {"%im", &module_info_boot, "%im"},
  {"reference-binding", &module_info_ast, "reference-binding"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"<str>", &module_info_boot, "<str>"},
  {"<binding>", &module_info_ast, "<binding>"},
  {"compile-time-program", &module_info_ast, "compile-time-program"},
  {"dlet", &module_info_macros, "dlet"},
  {"str", &module_info_runtime, "str"},
  {"find-environment-module", &module_info_ast, "find-environment-module"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"next-method", &module_info_macros, "next-method"},
  {"app-args", &module_info_runtime, "app-args"},
  {"binding-type-setter", &module_info_ast, "binding-type-setter"},
  {"bound?", &module_info_boot, "bound?"},
  {"function-body", &module_info_ast, "function-body"},
  {"%f+", &module_info_boot, "%f+"},
  {"<raw-constant>", &module_info_ast, "<raw-constant>"},
  {"~==", &module_info_runtime, "~=="},
  {"case-insensitive-string-equal", &module_info_runtime, "case-insensitive-string-equal"},
  {"read", &module_info_runtime, "read"},
  {"rev!", &module_info_runtime, "rev!"},
  {"1st", &module_info_runtime, "1st"},
  {"init-environment-for-eval", &module_info_ast, "init-environment-for-eval"},
  {"monitor-test", &module_info_ast, "monitor-test"},
  {"write-string", &module_info_runtime, "write-string"},
  {"pos", &module_info_runtime, "pos"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"do3", &module_info_runtime, "do3"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"<runtime-reference>", &module_info_ast, "<runtime-reference>"},
  {"%lu", &module_info_boot, "%lu"},
  {"function-body-setter", &module_info_ast, "function-body-setter"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"force-output", &module_info_runtime, "force-output"},
  {"<programs>", &module_info_ast, "<programs>"},
  {"do", &module_info_runtime, "do"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"case", &module_info_macros, "case"},
  {"for", &module_info_macros, "for"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"binding-type", &module_info_ast, "binding-type"},
  {"<computed-program>", &module_info_ast, "<computed-program>"},
  {"<constant>", &module_info_ast, "<constant>"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"round", &module_info_runtime, "round"},
  {"<fab-list>", &module_info_ast, "<fab-list>"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"bound?-reference", &module_info_ast, "bound?-reference"},
  {"environment-module", &module_info_ast, "environment-module"},
  {"unwind-protect-protected-thunk", &module_info_ast, "unwind-protect-protected-thunk"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"ascii-whitespaces", &module_info_runtime, "ascii-whitespaces"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"<tab>", &module_info_runtime, "<tab>"},
  {"logbit?", &module_info_runtime, "logbit?"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"<met>", &module_info_boot, "<met>"},
  {"<runtime-assignment>", &module_info_ast, "<runtime-assignment>"},
  {"nul?", &module_info_runtime, "nul?"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"@olen", &module_info_boot, "@olen"},
  {"<alternative>", &module_info_ast, "<alternative>"},
  {"fab", &module_info_runtime, "fab"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"table-shrink-threshold", &module_info_runtime, "table-shrink-threshold"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"%it/", &module_info_boot, "%it/"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"list", &module_info_runtime, "list"},
  {"head", &module_info_boot, "head"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"<output-port>", &module_info_runtime, "<output-port>"},
  {"ast-define-binding", &module_info_ast, "ast-define-binding"},
  {"collected", &module_info_macros, "collected"},
  {"<bind-exit>", &module_info_ast, "<bind-exit>"},
  {"sequentialize", &module_info_ast, "sequentialize"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"even?", &module_info_runtime, "even?"},
  {"ast-evaluate", &module_info_ast, "ast-evaluate"},
  {"describe-handler", &module_info_runtime, "describe-handler"},
  {"<local-binding>", &module_info_ast, "<local-binding>"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"use", &module_info_boot, "use"},
  {"df", &module_info_boot, "df"},
  {"buf", &module_info_runtime, "buf"},
  {"<ast-primitive>", &module_info_ast, "<ast-primitive>"},
  {"object-class", &module_info_boot, "object-class"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"load-module", &module_info_ast, "load-module"},
  {"assoc-value", &module_info_runtime, "assoc-value"},
  {"<program>", &module_info_ast, "<program>"},
  {"dm", &module_info_boot, "dm"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"<global-assignment>", &module_info_ast, "<global-assignment>"},
  {"objectify-signature", &module_info_ast, "objectify-signature"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"del-dups", &module_info_runtime, "del-dups"},
  {"port-contents", &module_info_runtime, "port-contents"},
  {"when", &module_info_macros, "when"},
  {"neg?", &module_info_runtime, "neg?"},
  {"case-insensitive-string-hash", &module_info_runtime, "case-insensitive-string-hash"},
  {"%velt", &module_info_boot, "%velt"},
  {"<passive-program>", &module_info_ast, "<passive-program>"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"as-lowercase", &module_info_runtime, "as-lowercase"},
  {"table-growth-factor", &module_info_runtime, "table-growth-factor"},
  {"format-to-string", &module_info_runtime, "format-to-string"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"call-with-string-input-port", &module_info_runtime, "call-with-string-input-port"},
  {"binding-locative", &module_info_ast, "binding-locative"},
  {"empty", &module_info_runtime, "empty"},
  {"collecting", &module_info_macros, "collecting"},
  {"<bound?>", &module_info_ast, "<bound?>"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"str-to-num", &module_info_runtime, "str-to-num"},
  {"alternative-consequent", &module_info_ast, "alternative-consequent"},
  {"%untag", &module_info_boot, "%untag"},
  {"%i=", &module_info_boot, "%i="},
  {"free-environment", &module_info_ast, "free-environment"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"from-above", &module_info_runtime, "from-above"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"t<", &module_info_runtime, "t<"},
  {"module-exports", &module_info_ast, "module-exports"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"signature-value-setter", &module_info_ast, "signature-value-setter"},
  {"<file-output-port>", &module_info_runtime, "<file-output-port>"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"numeric?", &module_info_runtime, "numeric?"},
  {"constant-value", &module_info_ast, "constant-value"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"type-error", &module_info_boot, "type-error"},
  {"do2", &module_info_runtime, "do2"},
  {"binding-index", &module_info_ast, "binding-index"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"fix-let-body-setter", &module_info_ast, "fix-let-body-setter"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"slot", &module_info_boot, "slot"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"from-above-by", &module_info_runtime, "from-above-by"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"from-below", &module_info_runtime, "from-below"},
  {"free-implemented-foreign-bindings", &module_info_ast, "free-implemented-foreign-bindings"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"locative-value", &module_info_runtime, "locative-value"},
  {"function-nary?", &module_info_ast, "function-nary?"},
  {"assqn", &module_info_runtime, "assqn"},
  {"call-with-string-output-port", &module_info_runtime, "call-with-string-output-port"},
  {"2nd", &module_info_runtime, "2nd"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"<application>", &module_info_ast, "<application>"},
  {"function-binding", &module_info_ast, "function-binding"},
  {"+", &module_info_runtime, "+"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"reference-called-function?", &module_info_ast, "reference-called-function?"},
  {"ct", &module_info_boot, "ct"},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"tail", &module_info_boot, "tail"},
  {"%f<", &module_info_boot, "%f<"},
  {"function-data-refs", &module_info_ast, "function-data-refs"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"==", &module_info_macros, "=="},
  {"monitor-info", &module_info_ast, "monitor-info"},
  {"function-debug-name-setter", &module_info_ast, "function-debug-name-setter"},
  {"fix-let-types-setter", &module_info_ast, "fix-let-types-setter"},
  {"write-char", &module_info_runtime, "write-char"},
  {"%i!", &module_info_boot, "%i!"},
  {"opf", &module_info_macros, "opf"},
  {"min", &module_info_runtime, "min"},
  {"fix-let-bindings", &module_info_ast, "fix-let-bindings"},
  {"/", &module_info_runtime, "/"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"fix-let-arguments-setter", &module_info_ast, "fix-let-arguments-setter"},
  {"install-initial-bindings", &module_info_ast, "install-initial-bindings"},
  {"t=", &module_info_runtime, "t="},
  {"fab-map", &module_info_runtime, "fab-map"},
  {"from-by", &module_info_runtime, "from-by"},
  {"del-keys", &module_info_runtime, "del-keys"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"truncate", &module_info_runtime, "truncate"},
  {"fabs", &module_info_runtime, "fabs"},
  {"<range>", &module_info_runtime, "<range>"},
  {"<col>", &module_info_boot, "<col>"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"from-below-by", &module_info_runtime, "from-below-by"},
  {"@==", &module_info_boot, "@=="},
  {"from-to", &module_info_runtime, "from-to"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"<immediate-constant>", &module_info_ast, "<immediate-constant>"},
  {"del-key", &module_info_runtime, "del-key"},
  {"del", &module_info_runtime, "del"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"lab", &module_info_boot, "lab"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"%cb", &module_info_boot, "%cb"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"signature-specs-setter", &module_info_ast, "signature-specs-setter"},
  {"<fix-let>", &module_info_ast, "<fix-let>"},
  {"mif", &module_info_boot, "mif"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"fab-p2c-module", &module_info_ast, "fab-p2c-module"},
  {"monitor-type", &module_info_ast, "monitor-type"},
  {"binding-dotted?-setter", &module_info_ast, "binding-dotted?-setter"},
  {"fix-let-body", &module_info_ast, "fix-let-body"},
  {"open-output-file", &module_info_runtime, "open-output-file"},
  {"function-free-setter", &module_info_ast, "function-free-setter"},
  {"signature-arity", &module_info_ast, "signature-arity"},
  {"fix-let-arguments", &module_info_ast, "fix-let-arguments"},
  {"from-to-by", &module_info_runtime, "from-to-by"},
  {"<string-input-port>", &module_info_runtime, "<string-input-port>"},
  {"odd?", &module_info_runtime, "odd?"},
  {"nil", &module_info_boot, "nil"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"objectify-quotation", &module_info_ast, "objectify-quotation"},
  {"<module-loader>", &module_info_ast, "<module-loader>"},
  {"t+", &module_info_runtime, "t+"},
  {"inc", &module_info_macros, "inc"},
  {"environment-uses-modules", &module_info_ast, "environment-uses-modules"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"sub", &module_info_runtime, "sub"},
  {"%f/", &module_info_boot, "%f/"},
  {"elt-or", &module_info_runtime, "elt-or"},
  {"%f-", &module_info_boot, "%f-"},
  {"<assocs>", &module_info_runtime, "<assocs>"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"objectify", &module_info_ast, "objectify"},
  {"isa?", &module_info_boot, "isa?"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"fix-let-types", &module_info_ast, "fix-let-types"},
  {"ds", &module_info_boot, "ds"},
  {"neg", &module_info_runtime, "neg"},
  {"empty?", &module_info_macros, "empty?"},
  {"%i?", &module_info_boot, "%i?"},
  {"%isa", &module_info_boot, "%isa"},
  {"<compile-time>", &module_info_ast, "<compile-time>"},
  {"%i&", &module_info_boot, "%i&"},
  {"assignment-reference", &module_info_ast, "assignment-reference"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"as-uppercase", &module_info_runtime, "as-uppercase"},
  {"find-key", &module_info_runtime, "find-key"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"form-program-setter", &Yast_linearizeYform_program_setter},
  {"box-reference-setter", &Yast_linearizeYbox_reference_setter},
  {"program-definitions-setter", &Yast_linearizeYprogram_definitions_setter},
  {"program-quotations", &Yast_linearizeYprogram_quotations},
  {"*renaming-bindings-counter*", &Yast_linearizeYTrenaming_bindings_counterT},
  {"boxify-mutable-bindings", &Yast_linearizeYboxify_mutable_bindings},
  {"allocate-register", &Yast_linearizeYallocate_register},
  {"form-definitions-setter", &Yast_linearizeYform_definitions_setter},
  {"extract-things!", &Yast_linearizeYextract_thingsX},
  {"*register-passive?*", &Yast_linearizeYTregister_passiveQT},
  {"do-do-dynamic-extent!", &Yast_linearizeYdo_do_dynamic_extentX},
  {"extract!", &Yast_linearizeYextractX},
  {"collect-registers!", &Yast_linearizeYcollect_registersX},
  {"insert-box!", &Yast_linearizeYinsert_boxX},
  {"collect-temporaries!", &Yast_linearizeYcollect_temporariesX},
  {"program-form-setter", &Yast_linearizeYprogram_form_setter},
  {"form-program", &Yast_linearizeYform_program},
  {"box-form", &Yast_linearizeYbox_form},
  {"as-top-level-forms", &Yast_linearizeYas_top_level_forms},
  {"closure-creation-index-setter", &Yast_linearizeYclosure_creation_index_setter},
  {"<box-write>", &Yast_linearizeYLbox_writeG},
  {"analyze-call-references", &Yast_linearizeYanalyze_call_references},
  {"program-definitions", &Yast_linearizeYprogram_definitions},
  {"adjoin-free-binding!", &Yast_linearizeYadjoin_free_bindingX},
  {"<box-creation>", &Yast_linearizeYLbox_creationG},
  {"do-do-call-references!", &Yast_linearizeYdo_do_call_referencesX},
  {"do-do-call-upgrades!", &Yast_linearizeYdo_do_call_upgradesX},
  {"closure-creation-free-setter", &Yast_linearizeYclosure_creation_free_setter},
  {"analyze-dynamic-extent", &Yast_linearizeYanalyze_dynamic_extent},
  {"do-dynamic-extent!", &Yast_linearizeYdo_dynamic_extentX},
  {"<top-level-form>", &Yast_linearizeYLtop_level_formG},
  {"do-call-references!", &Yast_linearizeYdo_call_referencesX},
  {"form-definitions", &Yast_linearizeYform_definitions},
  {"adjoin-temporary-variables!", &Yast_linearizeYadjoin_temporary_variablesX},
  {"closure-creation-free", &Yast_linearizeYclosure_creation_free},
  {"<free-reference>", &Yast_linearizeYLfree_referenceG},
  {"register-allocate!", &Yast_linearizeYregister_allocateX},
  {"update-walk!", &Yast_linearizeYupdate_walkX},
  {"form-quotations-setter", &Yast_linearizeYform_quotations_setter},
  {"<flattened-program>", &Yast_linearizeYLflattened_programG},
  {"reference-offset-setter", &Yast_linearizeYreference_offset_setter},
  {"ast-walk", &Yast_linearizeYast_walk},
  {"program-quotations-setter", &Yast_linearizeYprogram_quotations_setter},
  {"unconstrained-type?", &Yast_linearizeYunconstrained_typeQ},
  {"program-form", &Yast_linearizeYprogram_form},
  {"gather-temporaries!", &Yast_linearizeYgather_temporariesX},
  {"<box-read>", &Yast_linearizeYLbox_readG},
  {"box-form-setter", &Yast_linearizeYbox_form_setter},
  {"flatten-seqs", &Yast_linearizeYflatten_seqs},
  {"analyze-calls", &Yast_linearizeYanalyze_calls},
  {"do-call-upgrades!", &Yast_linearizeYdo_call_upgradesX},
  {"split-program", &Yast_linearizeYsplit_program},
  {"lift!", &Yast_linearizeYliftX},
  {"reference-self?-setter", &Yast_linearizeYreference_selfQ_setter},
  {"form-quotations", &Yast_linearizeYform_quotations},
  {"lift-procedures!", &Yast_linearizeYlift_proceduresX},
  {"reference-offset", &Yast_linearizeYreference_offset},
  {"box-reference", &Yast_linearizeYbox_reference},
  {"new-renamed-binding", &Yast_linearizeYnew_renamed_binding},
  {"reference-self?", &Yast_linearizeYreference_selfQ},
  {"---main-1---", NULL},
  {"ast-contains-fun?", &Yast_linearizeYast_contains_funQ},
  {"closurize-main!", &Yast_linearizeYclosurize_mainX},
  {"closure-creation-index", &Yast_linearizeYclosure_creation_index},
  {"<renamed-local-binding>", &Yast_linearizeYLrenamed_local_bindingG},
  {"<closure-creation>", &Yast_linearizeYLclosure_creationG},
  {"---main-0---", NULL},
  {"adjoin-definition!", &Yast_linearizeYadjoin_definitionX},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"closure-creation-index", "closure-creation-index"},
  {"extract-things!", "extract-things!"},
  {"*register-passive?*", "*register-passive?*"},
  {"gather-temporaries!", "gather-temporaries!"},
  {"collect-registers!", "collect-registers!"},
  {"flatten-seqs", "flatten-seqs"},
  {"insert-box!", "insert-box!"},
  {"collect-temporaries!", "collect-temporaries!"},
  {"form-program", "form-program"},
  {"<box-write>", "<box-write>"},
  {"program-definitions", "program-definitions"},
  {"<box-creation>", "<box-creation>"},
  {"analyze-dynamic-extent", "analyze-dynamic-extent"},
  {"<top-level-form>", "<top-level-form>"},
  {"form-definitions", "form-definitions"},
  {"closure-creation-free", "closure-creation-free"},
  {"<free-reference>", "<free-reference>"},
  {"register-allocate!", "register-allocate!"},
  {"update-walk!", "update-walk!"},
  {"unconstrained-type?", "unconstrained-type?"},
  {"program-form", "program-form"},
  {"<box-read>", "<box-read>"},
  {"analyze-calls", "analyze-calls"},
  {"program-quotations", "program-quotations"},
  {"box-form", "box-form"},
  {"lift!", "lift!"},
  {"form-quotations", "form-quotations"},
  {"reference-offset", "reference-offset"},
  {"box-reference", "box-reference"},
  {"reference-self?", "reference-self?"},
  {"ast-contains-fun?", "ast-contains-fun?"},
  {"closurize-main!", "closurize-main!"},
  {"<renamed-local-binding>", "<renamed-local-binding>"},
  {"<closure-creation>", "<closure-creation>"},
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

  (P)Yast_linearizeY___main_0___();
  (P)Yast_linearizeY___main_1___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
