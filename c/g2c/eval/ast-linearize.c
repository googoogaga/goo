/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: ast-linearize */

EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
EXT(YruntimeYoddQ,"runtime","odd?");
EXT(YastYDproto_boot_module_name,"ast","$proto-boot-module-name");
DEF(Yast_linearizeYbinding_index,"ast-linearize","binding-index");
EXT(Yslot_owner,"boot","slot-owner");
DEF(Yast_linearizeYdo_do_call_upgradesX,"ast-linearize","do-do-call-upgrades!");
DEF(Yast_linearizeYfunction_self_recursiveQ,"ast-linearize","function-self-recursive?");
DEF(Yast_linearizeYcollect_registersX,"ast-linearize","collect-registers!");
DEF(Yast_linearizeYform_program,"ast-linearize","form-program");
EXT(YastYbinding_name,"ast","binding-name");
EXT(YPslot,"boot","%slot");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YLlogG,"boot","<log>");
EXT(YLslotG,"boot","<slot>");
EXT(YastYLlocal_bindingG,"ast","<local-binding>");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YastYbinding_info_setter,"ast","binding-info-setter");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(YastYmodule_syntax_environment,"ast","module-syntax-environment");
EXT(YruntimeYpos,"runtime","pos");
DEF(Yast_linearizeYbox_reference_setter,"ast-linearize","box-reference-setter");
EXT(YruntimeYneg,"runtime","neg");
DEF(Yast_linearizeYliftX,"ast-linearize","lift!");
EXT(YruntimeYmake_handler,"runtime","make-handler");
EXT(YastYmonitor_main_thunk,"ast","monitor-main-thunk");
EXT(YruntimeYpush,"runtime","push");
EXT(YastYfunction_signature,"ast","function-signature");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(YastYsignature_value_setter,"ast","signature-value-setter");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(YastYLlocalsG,"ast","<locals>");
EXT(Ynot,"boot","not");
EXT(YruntimeYNE,"runtime","~=");
EXT(Yslot_value,"boot","slot-value");
EXT(YLanyG,"boot","<any>");
EXT(YastYlocals_bindings,"ast","locals-bindings");
DEF(Yast_linearizeYallocate_register,"ast-linearize","allocate-register");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
EXT(YastYreport_undefined_global_bindings,"ast","report-undefined-global-bindings");
EXT(YruntimeYdo3,"runtime","do3");
EXT(YastYreference_called_functionQ_setter,"ast","reference-called-function?-setter");
EXT(YLunionG,"boot","<union>");
EXT(YruntimeYassq,"runtime","assq");
DEF(Yast_linearizeYreference_offset,"ast-linearize","reference-offset");
EXT(YPsnul,"boot","%snul");
DEF(Yast_linearizeYadjoin_temporary_variablesX,"ast-linearize","adjoin-temporary-variables!");
EXT(YastYmodule_target_environment,"ast","module-target-environment");
DEF(Yast_linearizeYreference_offset_setter,"ast-linearize","reference-offset-setter");
DEF(Yast_linearizeYLfree_referenceG,"ast-linearize","<free-reference>");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(YastYbinding_global_box_setter,"ast","binding-global-box-setter");
DEF(Yast_linearizeYfunction_index,"ast-linearize","function-index");
EXT(YastYobjectify,"ast","objectify");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
DEF(Yast_linearizeYextract_thingsX,"ast-linearize","extract-things!");
EXT(YastYmodule_exports,"ast","module-exports");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
EXT(YastYfunction_body_setter,"ast","function-body-setter");
EXT(YruntimeYto_digit,"runtime","to-digit");
EXT(YastYenvironment_uses_modules,"ast","environment-uses-modules");
EXT(YastYsignature_specs,"ast","signature-specs");
EXT(YastYassignment_reference,"ast","assignment-reference");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YastYfunction_value,"ast","function-value");
EXT(YastYlocals_functions_setter,"ast","locals-functions-setter");
EXT(YastYfunction_signature_setter,"ast","function-signature-setter");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
DEF(Yast_linearizeYupdate_walkX,"ast-linearize","update-walk!");
EXT(YastYfunction_naryQ,"ast","function-nary?");
EXT(YLsubclassG,"boot","<subclass>");
DEF(Yast_linearizeYprogram_definitions_setter,"ast-linearize","program-definitions-setter");
EXT(YmacrosYcat,"macros","cat");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
DEF(Yast_linearizeYfunction_free_setter,"ast-linearize","function-free-setter");
EXT(YastYsignature_bindings,"ast","signature-bindings");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(YastYunwind_protect_protected_thunk,"ast","unwind-protect-protected-thunk");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YruntimeYbuf,"runtime","buf");
EXT(Ytail_setter,"boot","tail-setter");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(Yslot_type,"boot","slot-type");
EXT(YruntimeYread,"runtime","read");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YruntimeYformat,"runtime","format");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(YastYalternative_condition,"ast","alternative-condition");
DEF(Yast_linearizeYas_top_level_forms,"ast-linearize","as-top-level-forms");
EXT(YastYLast_genericG,"ast","<ast-generic>");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YruntimeYlast,"runtime","last");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YPsymbols,"boot","%symbols");
EXT(YruntimeYfloorS,"runtime","floor/");
DEF(Yast_linearizeYprogram_form,"ast-linearize","program-form");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YastYfind_environment_module,"ast","find-environment-module");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(Ytail,"boot","tail");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(YastYlocals_bindings_setter,"ast","locals-bindings-setter");
EXT(YastYlocals_body,"ast","locals-body");
EXT(YruntimeYlsh,"runtime","lsh");
EXT(YastYLfix_letG,"ast","<fix-let>");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YastYLlocal_referenceG,"ast","<local-reference>");
EXT(YruntimeYash,"runtime","ash");
EXT(YastYapplication_knownQ,"ast","application-known?");
DEF(Yast_linearizeYdo_dynamic_extentX,"ast-linearize","do-dynamic-extent!");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(YastYmonitor_test,"ast","monitor-test");
EXT(Yclass_slots,"boot","class-slots");
EXT(YruntimeYflo_bits,"runtime","flo-bits");
DEF(Yast_linearizeYdo_do_dynamic_extentX,"ast-linearize","do-do-dynamic-extent!");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
EXT(YruntimeYroundS,"runtime","round/");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
EXT(YruntimeYrev,"runtime","rev");
EXT(YastYset_module_environments,"ast","set-module-environments");
EXT(YastYload_in,"ast","load-in");
EXT(YastYinit_ast,"ast","init-ast");
DEF(Yast_linearizeYclosure_creation_free_setter,"ast-linearize","closure-creation-free-setter");
DEF(Yast_linearizeYbinding_index_setter,"ast-linearize","binding-index-setter");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
EXT(YastYLunwind_protectG,"ast","<unwind-protect>");
EXT(YruntimeYabs,"runtime","abs");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(YruntimeYdo2,"runtime","do2");
EXT(YastYdo_module_loader_modules,"ast","do-module-loader-modules");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(Ynil,"boot","nil");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(YruntimeYT,"runtime","*");
EXT(YastYLglobal_boxG,"ast","<global-box>");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(YastYreference_frame_offset,"ast","reference-frame-offset");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(YastYLcomputed_programG,"ast","<computed-program>");
EXT(YastYLreal_referenceG,"ast","<real-reference>");
EXT(YastYLfab_listG,"ast","<fab-list>");
DEF(Yast_linearizeYinsert_boxX,"ast-linearize","insert-box!");
EXT(YruntimeYLlistG,"runtime","<list>");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YruntimeYmax,"runtime","max");
DEF(Yast_linearizeYsplit_program,"ast-linearize","split-program");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(Ytype_elts,"boot","type-elts");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YastYbinding_dynamic_extentQ_setter,"ast","binding-dynamic-extent?-setter");
EXT(YPPmacro,"boot","%%macro");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YruntimeYdefault,"runtime","default");
EXT(YastYsignature_names,"ast","signature-names");
EXT(YruntimeYaddress_of,"runtime","address-of");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(YPdefine_method,"boot","%define-method");
DEF(Yast_linearizeYadjoin_free_bindingX,"ast-linearize","adjoin-free-binding!");
EXT(YruntimeYfloor,"runtime","floor");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YruntimeYcat2,"runtime","cat2");
DEF(Yast_linearizeYLbox_readG,"ast-linearize","<box-read>");
EXT(YastYLmodule_loaderG,"ast","<module-loader>");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YastYfunction_body,"ast","function-body");
EXT(YruntimeYmodulo,"runtime","modulo");
EXT(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YLoptsG,"boot","<opts>");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YastYfab_p2c_module,"ast","fab-p2c-module");
EXT(Ysig_value,"boot","sig-value");
EXT(Yclass_name,"boot","class-name");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(YisaQ,"boot","isa?");
EXT(YastYLconstantG,"ast","<constant>");
EXT(YruntimeYempty,"runtime","empty");
EXT(YruntimeYassqn,"runtime","assqn");
EXT(YastYLmoduleG,"ast","<module>");
DEF(Yast_linearizeYunconstrained_typeQ,"ast-linearize","unconstrained-type?");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YruntimeYA,"runtime","+");
EXT(YLtypeG,"boot","<type>");
DEF(Yast_linearizeYDfree_environment_empty,"ast-linearize","$free-environment-empty");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YLclassG,"boot","<class>");
EXT(YastYinstall_initial_bindings,"ast","install-initial-bindings");
EXT(YastYLsequentialG,"ast","<sequential>");
DEF(Yast_linearizeYclosure_creation_free,"ast-linearize","closure-creation-free");
EXT(YruntimeYLrangeG,"runtime","<range>");
EXT(Yfab_sym,"boot","fab-sym");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(YruntimeYadd,"runtime","add");
DEF(Yast_linearizeYfunction_registers_setter,"ast-linearize","function-registers-setter");
EXT(YruntimeYfind_key,"runtime","find-key");
EXT(YruntimeYelt,"runtime","elt");
EXT(YruntimeYreduceA,"runtime","reduce+");
EXT(YruntimeYcurry,"runtime","curry");
EXT(YastYbinding_info,"ast","binding-info");
EXT(Yobject_parents,"boot","object-parents");
EXT(YruntimeYLE,"runtime","<=");
EXT(YastYbinding_value_setter,"ast","binding-value-setter");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YruntimeYlogior,"runtime","logior");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
EXT(YastYDproto_runtime_module_name,"ast","$proto-runtime-module-name");
EXT(YruntimeYE,"runtime","=");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YastYLruntime_referenceG,"ast","<runtime-reference>");
EXT(Ytype_error,"boot","type-error");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YastYremove_modules_by_nameX,"ast","remove-modules-by-name!");
EXT(YLsymG,"boot","<sym>");
EXT(YruntimeYLfile_input_portG,"runtime","<file-input-port>");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YastYfunction_binding,"ast","function-binding");
EXT(YastYconstant_value,"ast","constant-value");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
DEF(Yast_linearizeYclosure_creation_index_setter,"ast-linearize","closure-creation-index-setter");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(YmacrosYmap,"macros","map");
EXT(YastYbinding_dynamic_extentQ,"ast","binding-dynamic-extent?");
EXT(YruntimeYeof_object,"runtime","eof-object");
DEF(Yast_linearizeYbox_form_setter,"ast-linearize","box-form-setter");
EXT(Ysig_names,"boot","sig-names");
EXT(YastYLcompile_timeG,"ast","<compile-time>");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YruntimeYpop,"runtime","pop");
EXT(YastYbinding_type_setter,"ast","binding-type-setter");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YruntimeYmap2,"runtime","map2");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YastYbind_exit_main_fun,"ast","bind-exit-main-fun");
EXT(YruntimeYlogxor,"runtime","logxor");
EXT(YastYLast_macro_definitionG,"ast","<ast-macro-definition>");
EXT(YastYLruntime_assignmentG,"ast","<runtime-assignment>");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(YastYsignature_specs_setter,"ast","signature-specs-setter");
EXT(YastYLbindingG,"ast","<binding>");
EXT(YLgenG,"boot","<gen>");
EXT(Yobject_slots,"boot","object-slots");
EXT(YruntimeYcopy_state,"runtime","copy-state");
EXT(YastYLast_methodG,"ast","<ast-method>");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YastYLbind_exitG,"ast","<bind-exit>");
EXT(YastYsignature_naryQ,"ast","signature-nary?");
EXT(YruntimeYfrom,"runtime","from");
EXT(YLstrG,"boot","<str>");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YmacrosYEE,"macros","==");
EXT(YastYLdefinitionG,"ast","<definition>");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YmacrosYtup,"macros","tup");
EXT(YastYreference_binding,"ast","reference-binding");
EXT(YruntimeYlogand,"runtime","logand");
EXT(YruntimeYlocative_value,"runtime","locative-value");
DEF(Yast_linearizeYform_definitions_setter,"ast-linearize","form-definitions-setter");
EXT(YruntimeYfalse_or,"runtime","false-or");
EXT(Yfun_name,"boot","fun-name");
EXT(Yclass_parents,"boot","class-parents");
EXT(YastYfunction_debug_name_setter,"ast","function-debug-name-setter");
EXT(Yfind_setter,"boot","find-setter");
DEF(Yast_linearizeYprogram_quotations,"ast-linearize","program-quotations");
DEF(Yast_linearizeYlift_proceduresX,"ast-linearize","lift-procedures!");
EXT(YruntimeYdel_keys,"runtime","del-keys");
DEF(Yast_linearizeYform_program_setter,"ast-linearize","form-program-setter");
EXT(YastYprogram_register,"ast","program-register");
EXT(YruntimeYreduce,"runtime","reduce");
EXT(YruntimeYstr,"runtime","str");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
EXT(YLvecG,"boot","<vec>");
DEF(Yast_linearizeYdo_call_referencesX,"ast-linearize","do-call-references!");
EXT(Ytype_class,"boot","type-class");
EXT(YastYLregular_applicationG,"ast","<regular-application>");
DEF(Yast_linearizeYgather_temporariesX,"ast-linearize","gather-temporaries!");
EXT(YruntimeYLincongruent_method_errorG,"runtime","<incongruent-method-error>");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
DEF(Yast_linearizeYclosurize_mainX,"ast-linearize","closurize-main!");
EXT(YruntimeYlognot,"runtime","lognot");
EXT(YastYmodule_name,"ast","module-name");
EXT(YastYbinding_kind,"ast","binding-kind");
EXT(Ylst,"boot","lst");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YruntimeY1st,"runtime","1st");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(YruntimeYas,"runtime","as");
EXT(YastYast_define_binding,"ast","ast-define-binding");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
DEF(Yast_linearizeYLfunction_definitionG,"ast-linearize","<function-definition>");
DEF(Yast_linearizeYTrenaming_bindings_counterT,"ast-linearize","*renaming-bindings-counter*");
DEF(Yast_linearizeYanalyze_calls,"ast-linearize","analyze-calls");
EXT(YruntimeYalways,"runtime","always");
EXT(YruntimeYtL,"runtime","t<");
EXT(YastYapplication_knownQ_setter,"ast","application-known?-setter");
EXT(YruntimeYceiling,"runtime","ceiling");
EXT(YastYLboundQG,"ast","<bound?>");
EXT(YastYbinding_dottedQ_setter,"ast","binding-dotted?-setter");
EXT(YastYLpassive_programG,"ast","<passive-program>");
EXT(YLflatG,"boot","<flat>");
EXT(YLmetG,"boot","<met>");
EXT(YruntimeYout,"runtime","out");
DEF(Yast_linearizeYextractX,"ast-linearize","extract!");
EXT(Yfun_names,"boot","fun-names");
DEF(Yast_linearizeYbox_form,"ast-linearize","box-form");
EXT(YruntimeYdo,"runtime","do");
EXT(YastYbinding_module_name,"ast","binding-module-name");
EXT(YruntimeYnewline,"runtime","newline");
EXT(YastYreference_frame_number,"ast","reference-frame-number");
DEF(Yast_linearizeYLbox_creationG,"ast-linearize","<box-creation>");
DEF(Yast_linearizeYbox_reference,"ast-linearize","box-reference");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YruntimeYfab,"runtime","fab");
EXT(YastYinit_environment_for_eval,"ast","init-environment-for-eval");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(YastYfree_implemented_foreign_bindings,"ast","free-implemented-foreign-bindings");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YastYapplication_binding,"ast","application-binding");
DEF(Yast_linearizeYclosure_creation_index,"ast-linearize","closure-creation-index");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
EXT(YastYapplication_arguments,"ast","application-arguments");
EXT(YastYLast_signatureG,"ast","<ast-signature>");
EXT(YastYLreferenceG,"ast","<reference>");
EXT(YruntimeYLstepG,"runtime","<step>");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
EXT(YastYprogram_register_setter,"ast","program-register-setter");
EXT(YastYbinding_mutableQ,"ast","binding-mutable?");
EXT(YastYLraw_constantG,"ast","<raw-constant>");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
DEF(Yast_linearizeYprogram_quotations_setter,"ast-linearize","program-quotations-setter");
EXT(Yfind_getter,"boot","find-getter");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(YastYfix_let_bindings_setter,"ast","fix-let-bindings-setter");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(Yobject_class,"boot","object-class");
EXT(YruntimeYPwith_monitor,"runtime","%with-monitor");
EXT(YastYfunction_bindings,"ast","function-bindings");
EXT(YruntimeYtE,"runtime","t=");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YastYdo_static_global_bindings,"ast","do-static-global-bindings");
DEF(Yast_linearizeYLbox_writeG,"ast-linearize","<box-write>");
DEF(Yast_linearizeYflatten_seqs,"ast-linearize","flatten-seqs");
EXT(YLlstG,"boot","<lst>");
EXT(YruntimeYzeroQ,"runtime","zero?");
EXT(YastYLglobal_referenceG,"ast","<global-reference>");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
EXT(YastYfix_let_arguments_setter,"ast","fix-let-arguments-setter");
EXT(Yfun_mets,"boot","fun-mets");
DEF(Yast_linearizeYclosure_creation_bindings,"ast-linearize","closure-creation-bindings");
EXT(YastYLast_primitive_definitionG,"ast","<ast-primitive-definition>");
EXT(YastYmodule_name_to_relpath,"ast","module-name-to-relpath");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YastYlocals_body_setter,"ast","locals-body-setter");
EXT(YruntimeYlen_setter,"runtime","len-setter");
EXT(YastYLstatic_global_environmentG,"ast","<static-global-environment>");
EXT(YLfunG,"boot","<fun>");
EXT(YruntimeYdel_dups,"runtime","del-dups");
EXT(YruntimeYpick,"runtime","pick");
DEF(Yast_linearizeYfunction_index_setter,"ast-linearize","function-index-setter");
EXT(YastYglobal_box_value_setter,"ast","global-box-value-setter");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
EXT(YastYmonitor_info,"ast","monitor-info");
EXT(YmacrosYpair,"macros","pair");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YastYlocals_functions,"ast","locals-functions");
EXT(Yfab_gen,"boot","fab-gen");
DEF(Yast_linearizeYanalyze_dynamic_extent,"ast-linearize","analyze-dynamic-extent");
DEF(Yast_linearizeYfunction_registers,"ast-linearize","function-registers");
EXT(YLseqG,"boot","<seq>");
EXT(YruntimeYGE,"runtime",">=");
EXT(YastYsequentialize,"ast","sequentialize");
EXT(YastYsignature_naryQ_setter,"ast","signature-nary?-setter");
EXT(YruntimeY_,"runtime","-");
EXT(YastYLprogramsG,"ast","<programs>");
EXT(YastYprobe_module,"ast","probe-module");
EXT(YruntimeYtA,"runtime","t+");
EXT(YastYLapplicationG,"ast","<application>");
EXT(YastYfix_let_types,"ast","fix-let-types");
DEF(Yast_linearizeYfunction_temporaries,"ast-linearize","function-temporaries");
EXT(YruntimeYnow_elt,"runtime","now-elt");
EXT(YastYbinding_native_toQ,"ast","binding-native-to?");
EXT(YastYbinding_value,"ast","binding-value");
EXT(YastYcompile_time_program,"ast","compile-time-program");
EXT(YastYbinding_dottedQ,"ast","binding-dotted?");
EXT(YruntimeYread_char,"runtime","read-char");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YruntimeYmemQ,"runtime","mem?");
EXT(YastYmonitor_handler,"ast","monitor-handler");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
EXT(YastYbinding_type,"ast","binding-type");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YruntimeYG,"runtime",">");
EXT(YLcolG,"boot","<col>");
EXT(YruntimeYallQ,"runtime","all?");
DEF(Yast_linearizeYLprimitive_definitionG,"ast-linearize","<primitive-definition>");
EXT(YruntimeY2nd,"runtime","2nd");
DEF(Yast_linearizeYdo_do_call_referencesX,"ast-linearize","do-do-call-references!");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
DEF(Yast_linearizeYclosure_creation_bindings_setter,"ast-linearize","closure-creation-bindings-setter");
EXT(YPvnul,"boot","%vnul");
EXT(YruntimeYNEE,"runtime","~==");
DEF(Yast_linearizeYLfree_environmentG,"ast-linearize","<free-environment>");
DEF(Yast_linearizeYreference_selfQ,"ast-linearize","reference-self?");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YruntimeYround,"runtime","round");
EXT(YruntimeYfrom_by,"runtime","from-by");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
DEF(Yast_linearizeYboxify_mutable_bindings,"ast-linearize","boxify-mutable-bindings");
DEF(Yast_linearizeYfunction_temporaries_setter,"ast-linearize","function-temporaries-setter");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YastYbinding_locative,"ast","binding-locative");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
EXT(YastYLprogramG,"ast","<program>");
EXT(Ynul,"boot","nul");
EXT(YastYLalternativeG,"ast","<alternative>");
EXT(YruntimeYL,"runtime","<");
EXT(YLlocG,"boot","<loc>");
EXT(Yfab_class,"boot","fab-class");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YastYfix_let_bindings,"ast","fix-let-bindings");
DEF(Yast_linearizeYLflat_functionG,"ast-linearize","<flat-function>");
DEF(Yast_linearizeYfunction_self_recursiveQ_setter,"ast-linearize","function-self-recursive?-setter");
EXT(YruntimeYdel,"runtime","del");
EXT(YastYmodule_binding,"ast","module-binding");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YLsigG,"boot","<sig>");
EXT(YruntimeYlist,"runtime","list");
EXT(Ytype_object,"boot","type-object");
EXT(YastYalternative_alternant,"ast","alternative-alternant");
EXT(Yhead_setter,"boot","head-setter");
EXT(YastYruntime_environment,"ast","runtime-environment");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(YastYsignature_value,"ast","signature-value");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
EXT(YastYdo_named_static_global_bindings,"ast","do-named-static-global-bindings");
DEF(Yast_linearizeYdo_call_upgradesX,"ast-linearize","do-call-upgrades!");
EXT(YruntimeYini_state,"runtime","ini-state");
DEF(Yast_linearizeYfree_environment,"ast-linearize","free-environment");
EXT(YastYfix_let_arguments,"ast","fix-let-arguments");
EXT(YastYglobal_box_value,"ast","global-box-value");
EXT(YPisa,"boot","%isa");
EXT(YastYalternative_consequent,"ast","alternative-consequent");
EXT(YLfloG,"boot","<flo>");
EXT(YruntimeYfrom_above,"runtime","from-above");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(YastYfix_let_body,"ast","fix-let-body");
EXT(YLtupG,"boot","<tup>");
EXT(YastYfunction_debug_name,"ast","function-debug-name");
EXT(YastYsignature_bindings_setter,"ast","signature-bindings-setter");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(Yhead,"boot","head");
EXT(Yerror,"boot","error");
EXT(YruntimeYnegQ,"runtime","neg?");
EXT(YastYreference_called_functionQ,"ast","reference-called-function?");
EXT(YastYunwind_protect_cleanup_thunk,"ast","unwind-protect-cleanup-thunk");
EXT(YruntimeYlen,"runtime","len");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(YastYmonitor_type,"ast","monitor-type");
EXT(YastYLargumentsG,"ast","<arguments>");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
DEF(Yast_linearizeYLrenamed_local_bindingG,"ast-linearize","<renamed-local-binding>");
EXT(YastYapplication_function,"ast","application-function");
EXT(YruntimeYclose_output_port,"runtime","close-output-port");
EXT(YruntimeYassocq,"runtime","assocq");
DEF(Yast_linearizeYform_definitions,"ast-linearize","form-definitions");
EXT(YastYfix_let_types_setter,"ast","fix-let-types-setter");
EXT(YruntimeYsub,"runtime","sub");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YastYassignment_form,"ast","assignment-form");
DEF(Yast_linearizeYform_quotations_setter,"ast-linearize","form-quotations-setter");
EXT(Yslot_init,"boot","slot-init");
EXT(YastYLast_functionG,"ast","<ast-function>");
EXT(YLintG,"boot","<int>");
EXT(YastYLglobal_assignmentG,"ast","<global-assignment>");
EXT(YruntimeYhandler_function,"runtime","handler-function");
DEF(Yast_linearizeYadjoin_definitionX,"ast-linearize","adjoin-definition!");
DEF(Yast_linearizeYfunction_free,"ast-linearize","function-free");
DEF(Yast_linearizeYcollect_temporariesX,"ast-linearize","collect-temporaries!");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YruntimeYsig,"runtime","sig");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YastYLpredefined_applicationG,"ast","<predefined-application>");
EXT(YruntimeYin,"runtime","in");
EXT(YastYLlocal_assignmentG,"ast","<local-assignment>");
EXT(YruntimeYkeys,"runtime","keys");
EXT(YastYassignment_binding,"ast","assignment-binding");
DEF(Yast_linearizeYLtop_level_formG,"ast-linearize","<top-level-form>");
EXT(Ysym_name,"boot","sym-name");
DEF(Yast_linearizeYreference_selfQ_setter,"ast-linearize","reference-self?-setter");
DEF(Yast_linearizeYLclosure_creationG,"ast-linearize","<closure-creation>");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YastYLmonitorG,"ast","<monitor>");
EXT(YLnumG,"boot","<num>");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(YastYsignature_names_setter,"ast","signature-names-setter");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(YruntimeYTprint_baseT,"runtime","*print-base*");
EXT(YmacrosYnapply,"macros","napply");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
EXT(YruntimeYfill,"runtime","fill");
DEF(Yast_linearizeYprogram_form_setter,"ast-linearize","program-form-setter");
EXT(Yfun_value,"boot","fun-value");
EXT(YastYboundQ_reference,"ast","bound?-reference");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
DEF(Yast_linearizeYprogram_definitions,"ast-linearize","program-definitions");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
EXT(YruntimeYevenQ,"runtime","even?");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YastYLmodule_bindingG,"ast","<module-binding>");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YruntimeYS,"runtime","/");
EXT(YastYLast_primitiveG,"ast","<ast-primitive>");
DEF(Yast_linearizeYLflattened_programG,"ast-linearize","<flattened-program>");
DEF(Yast_linearizeYform_quotations,"ast-linearize","form-quotations");
EXT(YruntimeYid_hash,"runtime","id-hash");
EXT(YastYmodule_loader_module_type,"ast","module-loader-module-type");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YruntimeYalter,"runtime","alter");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YLchrG,"boot","<chr>");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YruntimeYtruncate,"runtime","truncate");
EXT(YastYenv_object_name,"ast","env-object-name");
EXT(YruntimeYmin,"runtime","min");
DEF(Yast_linearizeYanalyze_call_references,"ast-linearize","analyze-call-references");
EXT(YastYbinding_global_box,"ast","binding-global-box");
DEF(Yast_linearizeYregister_allocateX,"ast-linearize","register-allocate!");
EXT(Yadd_slot,"boot","add-slot");
EXT(YastYast_evaluate,"ast","ast-evaluate");
EXT(YastYload_module,"ast","load-module");
EXT(YruntimeYassoc,"runtime","assoc");
EXT(YastYobjectify_quotation,"ast","objectify-quotation");
DEF(Yast_linearizeYnew_renamed_binding,"ast-linearize","new-renamed-binding");
EXT(YruntimeYvec,"runtime","vec");
EXT(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
EXT(YastYfix_let_body_setter,"ast","fix-let-body-setter");
EXT(YastYapplication_tailQ,"ast","application-tail?");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_87);
DEFLIT(lit_14);
DEFLIT(lit_108);
DEFLIT(lit_75);
DEFLIT(lit_71);
DEFLIT(lit_64);
DEFLIT(lit_7);
DEFLIT(lit_19);
DEFLIT(lit_89);
DEFLIT(lit_109);
DEFLIT(lit_77);
DEFLIT(lit_13);
DEFLIT(lit_56);
DEFLIT(lit_60);
DEFLIT(lit_62);
DEFLIT(lit_37);
DEFLIT(lit_74);
DEFLIT(lit_2);
DEFLIT(lit_25);
DEFLIT(lit_41);
DEFLIT(lit_73);
DEFLIT(lit_79);
DEFLIT(lit_42);
DEFLIT(lit_20);
DEFLIT(lit_33);
DEFLIT(lit_92);
DEFLIT(lit_105);
DEFLIT(lit_40);
DEFLIT(lit_123);
DEFLIT(lit_18);
DEFLIT(lit_86);
DEFLIT(lit_66);
DEFLIT(lit_12);
DEFLIT(lit_61);
DEFLIT(lit_124);
DEFLIT(lit_95);
DEFLIT(lit_65);
DEFLIT(lit_52);
DEFLIT(lit_46);
DEFLIT(lit_44);
DEFLIT(lit_100);
DEFLIT(lit_82);
DEFLIT(lit_31);
DEFLIT(lit_101);
DEFLIT(lit_27);
DEFLIT(lit_43);
DEFLIT(lit_104);
DEFLIT(lit_26);
DEFLIT(lit_116);
DEFLIT(lit_8);
DEFLIT(lit_76);
DEFLIT(lit_28);
DEFLIT(lit_50);
DEFLIT(lit_80);
DEFLIT(lit_36);
DEFLIT(lit_91);
DEFLIT(lit_17);
DEFLIT(lit_131);
DEFLIT(lit_55);
DEFLIT(lit_115);
DEFLIT(lit_49);
DEFLIT(lit_34);
DEFLIT(lit_85);
DEFLIT(lit_127);
DEFLIT(lit_59);
DEFLIT(lit_48);
DEFLIT(lit_47);
DEFLIT(lit_96);
DEFLIT(lit_88);
DEFLIT(lit_57);
DEFLIT(lit_107);
DEFLIT(lit_102);
DEFLIT(lit_106);
DEFLIT(lit_16);
DEFLIT(lit_98);
DEFLIT(lit_97);
DEFLIT(lit_58);
DEFLIT(lit_113);
DEFLIT(lit_119);
DEFLIT(lit_10);
DEFLIT(lit_130);
DEFLIT(lit_122);
DEFLIT(lit_9);
DEFLIT(lit_51);
DEFLIT(lit_93);
DEFLIT(lit_128);
DEFLIT(lit_72);
DEFLIT(lit_24);
DEFLIT(lit_38);
DEFLIT(lit_6);
DEFLIT(lit_94);
DEFLIT(lit_15);
DEFLIT(lit_39);
DEFLIT(lit_84);
DEFLIT(lit_78);
DEFLIT(lit_83);
DEFLIT(lit_68);
DEFLIT(lit_54);
DEFLIT(lit_22);
DEFLIT(lit_126);
DEFLIT(lit_67);
DEFLIT(lit_3);
DEFLIT(lit_120);
DEFLIT(lit_69);
DEFLIT(lit_111);
DEFLIT(lit_129);
DEFLIT(lit_81);
DEFLIT(lit_1);
DEFLIT(lit_29);
DEFLIT(lit_114);
DEFLIT(lit_11);
DEFLIT(lit_112);
DEFLIT(lit_21);
DEFLIT(lit_23);
DEFLIT(lit_35);
DEFLIT(lit_118);
DEFLIT(lit_70);
DEFLIT(lit_30);
DEFLIT(lit_45);
DEFLIT(lit_103);
DEFLIT(lit_32);
DEFLIT(lit_53);
DEFLIT(lit_121);
DEFLIT(lit_125);
DEFLIT(lit_110);
DEFLIT(lit_99);
DEFLIT(lit_5);
DEFLIT(lit_63);
DEFLIT(lit_4);
DEFLIT(lit_117);
DEFLIT(lit_90);
DEFLIT(lit_0);

/* FUNCTIONS: */

LOCFOR(fun_x_1294_0);
LOCFOR(fun_update_walkX_1);
LOCFOR(fun_box_reference_2);
LOCFOR(fun_box_reference_setter_3);
LOCFOR(fun_4);
LOCFOR(fun_box_reference_5);
LOCFOR(fun_box_reference_setter_6);
LOCFOR(fun_7);
LOCFOR(fun_box_form_8);
LOCFOR(fun_box_form_setter_9);
LOCFOR(fun_10);
LOCFOR(fun_box_reference_11);
LOCFOR(fun_box_reference_setter_12);
LOCFOR(fun_13);
LOCFOR(fun_insert_boxX_14);
LOCFOR(fun_insert_boxX_15);
LOCFOR(fun_insert_boxX_16);
LOCFOR(fun_insert_boxX_17);
LOCFOR(fun_insert_boxX_18);
LOCFOR(fun_insert_boxX_19);
LOCFOR(fun_loop_20);
LOCFOR(fun_boxify_mutable_bindings_21);
LOCFOR(fun_do_do_call_referencesX_22);
LOCFOR(fun_do_call_referencesX_23);
LOCFOR(fun_do_call_referencesX_24);
LOCFOR(fun_analyze_call_references_25);
LOCFOR(fun_do_do_dynamic_extentX_26);
LOCFOR(fun_do_dynamic_extentX_27);
LOCFOR(fun_do_dynamic_extentX_28);
LOCFOR(fun_analyze_dynamic_extent_29);
LOCFOR(fun_do_do_call_upgradesX_30);
LOCFOR(fun_do_call_upgradesX_31);
LOCFOR(fun_unconstrained_typeQ_32);
LOCFOR(fun_do_call_upgradesX_33);
LOCFOR(fun_analyze_calls_34);
LOCFOR(fun_as_35);
LOCFOR(fun_as_36);
LOCFOR(fun_as_37);
FUNFOR(Yast_linearizeYfree_environment);
LOCFOR(fun_empty_39);
LOCFOR(fun_function_free_40);
LOCFOR(fun_function_free_setter_41);
LOCFOR(fun_42);
LOCFOR(fun_reference_offset_43);
LOCFOR(fun_reference_offset_setter_44);
LOCFOR(fun_45);
LOCFOR(fun_reference_selfQ_46);
LOCFOR(fun_reference_selfQ_setter_47);
LOCFOR(fun_48);
LOCFOR(fun_liftX_49);
LOCFOR(fun_lift_proceduresX_50);
LOCFOR(fun_lift_proceduresX_51);
LOCFOR(fun_add_52);
LOCFOR(fun_check_53);
LOCFOR(fun_adjoin_free_bindingX_54);
LOCFOR(fun_lift_proceduresX_55);
LOCFOR(fun_lift_proceduresX_56);
LOCFOR(fun_lift_proceduresX_57);
LOCFOR(fun_lift_proceduresX_58);
LOCFOR(fun_lift_proceduresX_59);
LOCFOR(fun_program_form_60);
LOCFOR(fun_program_form_setter_61);
LOCFOR(fun_62);
LOCFOR(fun_program_quotations_63);
LOCFOR(fun_program_quotations_setter_64);
LOCFOR(fun_65);
LOCFOR(fun_program_definitions_66);
LOCFOR(fun_program_definitions_setter_67);
LOCFOR(fun_68);
LOCFOR(fun_form_program_69);
LOCFOR(fun_form_program_setter_70);
LOCFOR(fun_71);
LOCFOR(fun_form_quotations_72);
LOCFOR(fun_form_quotations_setter_73);
LOCFOR(fun_74);
LOCFOR(fun_form_definitions_75);
LOCFOR(fun_form_definitions_setter_76);
LOCFOR(fun_77);
LOCFOR(fun_function_index_78);
LOCFOR(fun_function_index_setter_79);
LOCFOR(fun_80);
LOCFOR(fun_function_temporaries_81);
LOCFOR(fun_function_temporaries_setter_82);
LOCFOR(fun_83);
LOCFOR(fun_function_registers_84);
LOCFOR(fun_function_registers_setter_85);
LOCFOR(fun_86);
LOCFOR(fun_function_self_recursiveQ_87);
LOCFOR(fun_function_self_recursiveQ_setter_88);
LOCFOR(fun_89);
LOCFOR(fun_function_temporaries_90);
LOCFOR(fun_function_temporaries_setter_91);
LOCFOR(fun_92);
LOCFOR(fun_function_registers_93);
LOCFOR(fun_function_registers_setter_94);
LOCFOR(fun_95);
LOCFOR(fun_function_self_recursiveQ_96);
LOCFOR(fun_function_self_recursiveQ_setter_97);
LOCFOR(fun_98);
LOCFOR(fun_closure_creation_index_99);
LOCFOR(fun_closure_creation_index_setter_100);
LOCFOR(fun_101);
LOCFOR(fun_closure_creation_bindings_102);
LOCFOR(fun_closure_creation_bindings_setter_103);
LOCFOR(fun_104);
LOCFOR(fun_closure_creation_free_105);
LOCFOR(fun_closure_creation_free_setter_106);
LOCFOR(fun_107);
LOCFOR(fun_flatten_seqs_108);
LOCFOR(fun_inner_109);
LOCFOR(fun_loop_110);
LOCFOR(fun_flatten_seqs_111);
LOCFOR(fun_112);
LOCFOR(fun_as_top_level_forms_113);
LOCFOR(fun_114);
LOCFOR(fun_extract_thingsX_115);
LOCFOR(fun_extractX_116);
LOCFOR(fun_extractX_117);
LOCFOR(fun_extractX_118);
LOCFOR(fun_119);
LOCFOR(fun_extractX_120);
LOCFOR(fun_extractX_121);
LOCFOR(fun_adjoin_definitionX_122);
LOCFOR(fun_split_program_123);
LOCFOR(fun_inner_124);
LOCFOR(fun_loop_125);
LOCFOR(fun_split_program_126);
LOCFOR(fun_loop_127);
LOCFOR(fun_closurize_mainX_128);
LOCFOR(fun_129);
LOCFOR(fun_gather_temporariesX_130);
LOCFOR(fun_collect_temporariesX_131);
LOCFOR(fun_collect_temporariesX_132);
LOCFOR(fun_collect_temporariesX_133);
LOCFOR(fun_collect_temporariesX_134);
LOCFOR(fun_adjoin_135);
LOCFOR(fun_adjoin_temporary_variablesX_136);
LOCFOR(fun_binding_index_137);
LOCFOR(fun_binding_index_setter_138);
LOCFOR(fun_139);
LOCFOR(fun_new_renamed_binding_140);
LOCFOR(fun_141);
LOCFOR(fun_register_allocateX_142);
LOCFOR(fun_allocate_register_143);
LOCFOR(fun_collect_registersX_144);
LOCFOR(fun_loop_145);
LOCFOR(fun_collect_registersX_146);
LOCFOR(fun_collect_registersX_147);
LOCFOR(fun_148);
LOCFOR(fun_collect_registersX_149);
LOCFOR(fun_collect_registersX_150);
LOCFOR(fun_collect_registersX_151);
extern P Yast_linearizeY___main_0___ ();
extern P Yast_linearizeY___main_1___ ();
extern P Yast_linearizeY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_x_1294_0) {
  P x_1292_;
  P xF1587;
  P setterF1586;
  P getterF1585;
  P slotF1584;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1292_, 0);
loop:
  T2 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),x_1292_);
  T1 = CALL1(1,CHKREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(0),x_1292_);
    slotF1584 = T4;
    T5 = CALL1(1,CHKREF(Yslot_getter),slotF1584);
    getterF1585 = T5;
    T7 = CALL1(1,CHKREF(Yslot_setter),slotF1584);
    setterF1586 = T7;
    T10 = CALL2(1,CHKREF(YmacrosYEE),getterF1585,CHKREF(YastYbinding_value));
    T9 = CALL1(1,CHKREF(Ynot),T10);
    if (T9 != YPfalse) {
      T12 = CALL1(1,getterF1585,FREEREF(1));
      xF1587 = T12;
      T14 = CALL2(1,CHKREF(YisaQ),xF1587,CHKREF(YastYLprogramG));
      if (T14 != YPfalse) {
        T16 = CALLN(1,CHKREF(YmacrosYnapply),4,FREEREF(2),YPfalse,xF1587,FREEREF(3));
        T15 = CALL2(1,setterF1586,T16,FREEREF(1));
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
    T18 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),x_1292_);
    a1 = T18;
    x_1292_ = a1;
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
  P x_1294F1589;
  P x_1293F1588;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
loop:
  T0 = CALL1(1,CHKREF(Yobject_slots),o_);
  x_1293F1588 = T0;
  T2 = FUNSHELL(1,fun_x_1294_0,5);
  x_1294F1589 = T2;
  FUNINIT(x_1294F1589, 5,x_1293F1588,o_,g_,args_,x_1294F1589);
  T4 = CALL1(1,CHKREF(YruntimeYini_state),x_1293F1588);
  T3 = CALL1(0,x_1294F1589,T4);
  T1 = T3;
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_box_reference_2) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_setter_3) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_4) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_box_reference_5) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_setter_6) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_7) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_box_form_8) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYbox_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_form_setter_9) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYbox_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_10) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_box_reference_11) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_setter_12) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_13) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_insert_boxX_14) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yast_linearizeYupdate_walkX),CHKREF(Yast_linearizeYinsert_boxX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_15) {
  P o_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T2 = CALL1(1,CHKREF(YastYreference_binding),o_);
  T1 = CALL1(1,CHKREF(YastYbinding_mutableQ),T2);
  if (T1 != YPfalse) {
    T4 = (P)YPpair(CHKREF(Yast_linearizeYLbox_readG),Ynil);
    T5 = (P)YPpair(CHKREF(Yast_linearizeYbox_reference),Ynil);
    T6 = (P)YPpair(o_,Ynil);
    T3 = CALL3(1,CHKREF(YPisa),T4,T5,T6);
    T0 = T3;
  } else {
    T0 = o_;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_16) {
  P o_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = (P)YPpair(CHKREF(Yast_linearizeYLbox_writeG),Ynil);
  T3 = (P)YPpair(CHKREF(Yast_linearizeYbox_form),Ynil);
  T2 = (P)YPpair(CHKREF(Yast_linearizeYbox_reference),T3);
  T5 = CALL1(1,CHKREF(YastYassignment_reference),o_);
  T8 = CALL1(1,CHKREF(YastYassignment_form),o_);
  T7 = CALL1(1,CHKREF(Yast_linearizeYinsert_boxX),T8);
  T6 = (P)YPpair(T7,Ynil);
  T4 = (P)YPpair(T5,T6);
  T0 = CALL3(1,CHKREF(YPisa),T1,T2,T4);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_17) {
  P o_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T2 = CALL1(1,CHKREF(YastYfunction_body),o_);
  T3 = CALL1(1,CHKREF(YastYfunction_bindings),o_);
  T1 = CALL2(1,CHKREF(Yast_linearizeYboxify_mutable_bindings),T2,T3);
  T0 = CALL1(1,CHKREF(Yast_linearizeYinsert_boxX),T1);
  CALL2(1,CHKREF(YastYfunction_body_setter),T0,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_insert_boxX_18) {
  P o_;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL1(1,CHKREF(YastYfix_let_arguments),o_);
  T0 = CALL1(1,CHKREF(Yast_linearizeYinsert_boxX),T1);
  CALL2(1,CHKREF(YastYfix_let_arguments_setter),T0,o_);
  T4 = CALL1(1,CHKREF(YastYfix_let_body),o_);
  T5 = CALL1(1,CHKREF(YastYfix_let_bindings),o_);
  T3 = CALL2(1,CHKREF(Yast_linearizeYboxify_mutable_bindings),T4,T5);
  T2 = CALL1(1,CHKREF(Yast_linearizeYinsert_boxX),T3);
  CALL2(1,CHKREF(YastYfix_let_body_setter),T2,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_insert_boxX_19) {
  P o_;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL1(1,CHKREF(YastYlocals_functions),o_);
  T0 = CALL2(1,CHKREF(YmacrosYmap),CHKREF(Yast_linearizeYinsert_boxX),T1);
  CALL2(1,CHKREF(YastYlocals_functions_setter),T0,o_);
  T4 = CALL1(1,CHKREF(YastYlocals_body),o_);
  T5 = CALL1(1,CHKREF(YastYlocals_bindings),o_);
  T3 = CALL2(1,CHKREF(Yast_linearizeYboxify_mutable_bindings),T4,T5);
  T2 = CALL1(1,CHKREF(Yast_linearizeYinsert_boxX),T3);
  CALL2(1,CHKREF(YastYlocals_body_setter),T2,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_loop_20) {
  P res_,bindings_;
  P creatorF1591;
  P bindingF1590;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(bindings_, 1);
loop:
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),bindings_);
  if (T1 != YPfalse) {
    T3 = CALL2(1,CHKREF(YmacrosYpair),FREEREF(0),res_);
    T2 = CALL1(1,CHKREF(YruntimeYrevX),T3);
    T0 = T2;
  } else {
    T5 = CALL1(1,CHKREF(Yhead),bindings_);
    bindingF1590 = T5;
    T7 = CALL1(1,CHKREF(YastYbinding_mutableQ),bindingF1590);
    if (T7 != YPfalse) {
      T10 = (P)YPpair(CHKREF(Yast_linearizeYLbox_creationG),Ynil);
      T11 = (P)YPpair(CHKREF(Yast_linearizeYbox_reference),Ynil);
      T14 = (P)YPpair(CHKREF(YastYLlocal_referenceG),Ynil);
      T15 = (P)YPpair(CHKREF(YastYreference_binding),Ynil);
      T16 = (P)YPpair(bindingF1590,Ynil);
      T13 = CALL3(1,CHKREF(YPisa),T14,T15,T16);
      T12 = (P)YPpair(T13,Ynil);
      T9 = CALL3(1,CHKREF(YPisa),T10,T11,T12);
      creatorF1591 = T9;
      T18 = CALL2(1,CHKREF(YmacrosYpair),creatorF1591,res_);
      T19 = CALL1(1,CHKREF(Ytail),bindings_);
      a1 = T18;
      a2 = T19;
      res_ = a1;
      bindings_ = a2;
      goto loop;
      T8 = T17;
      T6 = T8;
    } else {
      T21 = CALL1(1,CHKREF(Ytail),bindings_);
      a1 = res_;
      a2 = T21;
      res_ = a1;
      bindings_ = a2;
      goto loop;
      T6 = T20;
    }
    T4 = T6;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_boxify_mutable_bindings_21) {
  P form_,bindings_;
  P loopF1592;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(form_, 0);
  ARG(bindings_, 1);
loop:
  T2 = FUNSHELL(1,fun_loop_20,2);
  loopF1592 = T2;
  FUNINIT(loopF1592, 2,form_,loopF1592);
  T3 = CALL2(0,loopF1592,Ynil,bindings_);
  T1 = T3;
  T0 = CALL1(1,CHKREF(YastYsequentialize),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_do_call_referencesX_22) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yast_linearizeYupdate_walkX),CHKREF(Yast_linearizeYdo_call_referencesX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_call_referencesX_23) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,CHKREF(Yast_linearizeYdo_do_call_referencesX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_call_referencesX_24) {
  P o_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  CALL1(1,CHKREF(Yast_linearizeYdo_do_call_referencesX),o_);
  T1 = CALL1(1,CHKREF(YastYapplication_function),o_);
  T0 = CALL2(1,CHKREF(YisaQ),T1,CHKREF(YastYLlocal_referenceG));
  if (T0 != YPfalse) {
    T3 = CALL1(1,CHKREF(YastYapplication_function),o_);
    T2 = CALL2(1,CHKREF(YastYreference_called_functionQ_setter),YPtrue,T3);
  } else {
  }
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_analyze_call_references_25) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,CHKREF(Yast_linearizeYdo_call_referencesX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_do_dynamic_extentX_26) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yast_linearizeYupdate_walkX),CHKREF(Yast_linearizeYdo_dynamic_extentX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_dynamic_extentX_27) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,CHKREF(Yast_linearizeYdo_do_dynamic_extentX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_dynamic_extentX_28) {
  P o_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  CALL1(1,CHKREF(Yast_linearizeYdo_do_dynamic_extentX),o_);
  T1 = CALL1(1,CHKREF(YastYreference_called_functionQ),o_);
  T0 = CALL1(1,CHKREF(Ynot),T1);
  if (T0 != YPfalse) {
    T3 = CALL1(1,CHKREF(YastYreference_binding),o_);
    T2 = CALL2(1,CHKREF(YastYbinding_dynamic_extentQ_setter),YPfalse,T3);
  } else {
  }
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_analyze_dynamic_extent_29) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  CALL1(1,CHKREF(Yast_linearizeYanalyze_call_references),o_);
  T0 = CALL1(1,CHKREF(Yast_linearizeYdo_dynamic_extentX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_do_call_upgradesX_30) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yast_linearizeYupdate_walkX),CHKREF(Yast_linearizeYdo_call_upgradesX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_call_upgradesX_31) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,CHKREF(Yast_linearizeYdo_do_call_upgradesX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_unconstrained_typeQ_32) {
  P o_;
  P tmpF1593;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL2(1,CHKREF(YisaQ),o_,CHKREF(YastYLglobal_referenceG));
  tmpF1593 = T1;
  if (tmpF1593 != YPfalse) {
    T5 = CALL1(1,CHKREF(YastYreference_binding),o_);
    T4 = CALL1(1,CHKREF(YastYbinding_name),T5);
    T3 = CALL2(1,CHKREF(YmacrosYEE),T4,CHKREF(lit_31));
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_do_call_upgradesX_33) {
  P o_;
  P tmpF1598;
  P tmpF1597;
  P tmpF1596;
  P tmpF1595;
  P metF1594;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  CALL1(1,CHKREF(Yast_linearizeYdo_do_call_upgradesX),o_);
  T1 = CALL1(1,CHKREF(YastYapplication_function),o_);
  T0 = CALL2(1,CHKREF(YisaQ),T1,CHKREF(YastYLlocal_referenceG));
  if (T0 != YPfalse) {
    T5 = CALL1(1,CHKREF(YastYapplication_function),o_);
    T4 = CALL1(1,CHKREF(YastYreference_binding),T5);
    T3 = CALL1(1,CHKREF(YastYbinding_value),T4);
    metF1594 = T3;
    T8 = CALL2(1,CHKREF(YisaQ),metF1594,CHKREF(YastYLast_functionG));
    tmpF1595 = T8;
    if (tmpF1595 != YPfalse) {
      T12 = CALL2(1,CHKREF(YruntimeYcompose),CHKREF(Yast_linearizeYunconstrained_typeQ),CHKREF(YastYbinding_type));
      T13 = CALL1(1,CHKREF(YastYfunction_bindings),metF1594);
      T11 = CALL2(1,CHKREF(YruntimeYallQ),T12,T13);
      tmpF1596 = T11;
      if (tmpF1596 != YPfalse) {
        T17 = CALL1(1,CHKREF(YastYfunction_value),metF1594);
        T16 = CALL1(1,CHKREF(Yast_linearizeYunconstrained_typeQ),T17);
        tmpF1597 = T16;
        if (tmpF1597 != YPfalse) {
          T21 = CALL1(1,CHKREF(YastYfunction_naryQ),metF1594);
          T20 = CALL1(1,CHKREF(Ynot),T21);
          tmpF1598 = T20;
          if (tmpF1598 != YPfalse) {
            T25 = CALL1(1,CHKREF(YastYapplication_arguments),o_);
            T24 = CALL1(1,CHKREF(YruntimeYlen),T25);
            T27 = CALL1(1,CHKREF(YastYfunction_bindings),metF1594);
            T26 = CALL1(1,CHKREF(YruntimeYlen),T27);
            T23 = CALL2(1,CHKREF(YruntimeYE),T24,T26);
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
      T28 = CALL2(1,CHKREF(YastYapplication_knownQ_setter),YPtrue,o_);
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

FUNCODEDEF(fun_analyze_calls_34) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,CHKREF(Yast_linearizeYdo_call_upgradesX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_35) {
  P p_,x_;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(x_, 1);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_as_36) {
  P p_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL3(1,CHKREF(YmacrosYnapply),CHKREF(Ylst),YPfalse,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_37) {
  P p_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(x_, 1);
loop:
  T0 = CALLN(1,CHKREF(YmacrosYnapply),4,CHKREF(YruntimeYfabs),YPfalse,CHKREF(Yast_linearizeYLfree_environmentG),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yast_linearizeYfree_environment) {
  P h_,t_;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
loop:
  T1 = (P)YPpair(CHKREF(Yast_linearizeYLfree_environmentG),Ynil);
  T3 = (P)YPpair(CHKREF(Ytail),Ynil);
  T2 = (P)YPpair(CHKREF(Yhead),T3);
  T5 = (P)YPpair(t_,Ynil);
  T4 = (P)YPpair(h_,T5);
  T0 = CALL3(1,CHKREF(YPisa),T1,T2,T4);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_empty_39) {
  P e_;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
UNLINK_STACK();
  RET(CHKREF(Yast_linearizeYDfree_environment_empty));
}

FUNCODEDEF(fun_function_free_40) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYfunction_free));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_free_setter_41) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYfunction_free));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_42) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,CHKREF(YruntimeYempty),CHKREF(Yast_linearizeYLfree_environmentG));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_offset_43) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYreference_offset));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_offset_setter_44) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYreference_offset));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_45) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_reference_selfQ_46) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYreference_selfQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_selfQ_setter_47) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYreference_selfQ));
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
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_liftX_49) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL3(1,CHKREF(Yast_linearizeYlift_proceduresX),o_,YPfalse,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_50) {
  P o_,flat_fun_,bindings_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T0 = CALLN(1,CHKREF(Yast_linearizeYupdate_walkX),4,CHKREF(Yast_linearizeYlift_proceduresX),o_,flat_fun_,bindings_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_51) {
  P o_,flat_fun_,bindings_;
  P offsetF1600;
  P bF1599;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,CHKREF(YastYreference_binding),o_);
  bF1599 = T1;
  T3 = CALL2(1,CHKREF(YruntimeYmemQ),bindings_,bF1599);
  if (T3 != YPfalse) {
    T2 = o_;
  } else {
    T5 = CALL2(1,CHKREF(Yast_linearizeYadjoin_free_bindingX),flat_fun_,o_);
    offsetF1600 = T5;
    T7 = (P)YPpair(CHKREF(Yast_linearizeYLfree_referenceG),Ynil);
    T10 = (P)YPpair(CHKREF(Yast_linearizeYreference_selfQ),Ynil);
    T9 = (P)YPpair(CHKREF(Yast_linearizeYreference_offset),T10);
    T8 = (P)YPpair(CHKREF(YastYreference_binding),T9);
    T15 = CALL1(1,CHKREF(YastYreference_binding),o_);
    T16 = CALL1(1,CHKREF(YastYfunction_binding),flat_fun_);
    T14 = CALL2(1,CHKREF(YmacrosYEE),T15,T16);
    T13 = (P)YPpair(T14,Ynil);
    T12 = (P)YPpair(offsetF1600,T13);
    T11 = (P)YPpair(bF1599,T12);
    T6 = CALL3(1,CHKREF(YPisa),T7,T8,T11);
    T4 = T6;
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_add_52) {
  P freeT_;
  P tailF1601;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(freeT_, 0);
loop:
  T1 = CALL1(1,CHKREF(Ytail),freeT_);
  tailF1601 = T1;
  T3 = CALL1(1,CHKREF(YmacrosYemptyQ),tailF1601);
  if (T3 != YPfalse) {
    T4 = CALL2(1,CHKREF(Ytail_setter),FREEREF(0),freeT_);
    T2 = T4;
  } else {
    a1 = tailF1601;
    freeT_ = a1;
    goto loop;
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_check_53) {
  P i_,freeT_;
  P addF1603;
  P new_envF1602;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(freeT_, 1);
loop:
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),freeT_);
  if (T1 != YPfalse) {
    T4 = CALL1(1,CHKREF(YruntimeYempty),CHKREF(Yast_linearizeYLfree_environmentG));
    T3 = CALL2(1,CHKREF(Yast_linearizeYfree_environment),FREEREF(0),T4);
    new_envF1602 = T3;
    T6 = CALL1(1,CHKREF(Yast_linearizeYfunction_free),FREEREF(1));
    T5 = CALL1(1,CHKREF(YmacrosYemptyQ),T6);
    if (T5 != YPfalse) {
      T7 = CALL2(1,CHKREF(Yast_linearizeYfunction_free_setter),new_envF1602,FREEREF(1));
    } else {
      T9 = FUNSHELL(1,fun_add_52,2);
      addF1603 = T9;
      FUNINIT(addF1603, 2,new_envF1602,addF1603);
      T11 = CALL1(1,CHKREF(Yast_linearizeYfunction_free),FREEREF(1));
      T10 = CALL1(0,addF1603,T11);
      T8 = T10;
    }
    T2 = i_;
    T0 = T2;
  } else {
    T14 = CALL1(1,CHKREF(YastYreference_binding),FREEREF(0));
    T16 = CALL1(1,CHKREF(Yhead),freeT_);
    T15 = CALL1(1,CHKREF(YastYreference_binding),T16);
    T13 = CALL2(1,CHKREF(YmacrosYEE),T14,T15);
    if (T13 != YPfalse) {
      T12 = i_;
    } else {
      T18 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
      T19 = CALL1(1,CHKREF(Ytail),freeT_);
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

FUNCODEDEF(fun_adjoin_free_bindingX_54) {
  P flat_fun_,ref_;
  P checkF1604;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(flat_fun_, 0);
  ARG(ref_, 1);
loop:
  T1 = FUNSHELL(1,fun_check_53,3);
  checkF1604 = T1;
  FUNINIT(checkF1604, 3,ref_,flat_fun_,checkF1604);
  T3 = CALL1(1,CHKREF(Yast_linearizeYfunction_free),flat_fun_);
  T2 = CALL2(1,checkF1604,YPint((P)0),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_55) {
  P o_,flat_fun_,bindings_;
  P new_bindingsF1605;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,CHKREF(YastYfix_let_arguments),o_);
  T0 = CALL3(1,CHKREF(Yast_linearizeYlift_proceduresX),T1,flat_fun_,bindings_);
  CALL2(1,CHKREF(YastYfix_let_arguments_setter),T0,o_);
  T4 = CALL1(1,CHKREF(YastYfix_let_bindings),o_);
  T3 = CALL2(1,CHKREF(YmacrosYcat),T4,bindings_);
  new_bindingsF1605 = T3;
  T6 = CALL1(1,CHKREF(YastYfix_let_body),o_);
  T5 = CALL3(1,CHKREF(Yast_linearizeYlift_proceduresX),T6,flat_fun_,new_bindingsF1605);
  CALL2(1,CHKREF(YastYfix_let_body_setter),T5,o_);
  T2 = o_;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_lift_proceduresX_56) {
  P o_,flat_fun_,bindings_;
  P new_bindingsF1606;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T2 = CALL1(1,CHKREF(YastYlocals_bindings),o_);
  T1 = CALL2(1,CHKREF(YmacrosYcat),T2,bindings_);
  new_bindingsF1606 = T1;
  T4 = CALL3(1,CHKREF(YruntimeYrcurry),CHKREF(Yast_linearizeYlift_proceduresX),flat_fun_,new_bindingsF1606);
  T5 = CALL1(1,CHKREF(YastYlocals_functions),o_);
  T3 = CALL2(1,CHKREF(YmacrosYmap),T4,T5);
  CALL2(1,CHKREF(YastYlocals_functions_setter),T3,o_);
  T7 = CALL1(1,CHKREF(YastYlocals_body),o_);
  T6 = CALL3(1,CHKREF(Yast_linearizeYlift_proceduresX),T7,flat_fun_,new_bindingsF1606);
  CALL2(1,CHKREF(YastYlocals_body_setter),T6,o_);
  T0 = o_;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_57) {
  P o_,flat_fun_,bindings_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,CHKREF(YastYfunction_body),o_);
  T2 = CALL1(1,CHKREF(YastYfunction_bindings),o_);
  T0 = CALL3(1,CHKREF(Yast_linearizeYlift_proceduresX),T1,YPfalse,T2);
  CALL2(1,CHKREF(YastYfunction_body_setter),T0,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_lift_proceduresX_58) {
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

FUNCODEDEF(fun_lift_proceduresX_59) {
  P o_,flat_fun_,bindings_;
  P freeTF1610;
  P new_funF1609;
  P bodyF1608;
  P local_bindingsF1607;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,CHKREF(YastYfunction_bindings),o_);
  local_bindingsF1607 = T1;
  T3 = CALL1(1,CHKREF(YastYfunction_body),o_);
  bodyF1608 = T3;
  T6 = (P)YPpair(CHKREF(Yast_linearizeYLflat_functionG),Ynil);
  T11 = (P)YPpair(CHKREF(Yast_linearizeYfunction_free),Ynil);
  T10 = (P)YPpair(CHKREF(YastYfunction_body),T11);
  T9 = (P)YPpair(CHKREF(YastYfunction_signature),T10);
  T8 = (P)YPpair(CHKREF(YastYfunction_debug_name),T9);
  T7 = (P)YPpair(CHKREF(YastYfunction_binding),T8);
  T13 = CALL1(1,CHKREF(YastYfunction_binding),o_);
  T15 = CALL1(1,CHKREF(YastYfunction_debug_name),o_);
  T17 = CALL1(1,CHKREF(YastYfunction_signature),o_);
  T20 = CALL1(1,CHKREF(YruntimeYempty),CHKREF(Yast_linearizeYLfree_environmentG));
  T19 = (P)YPpair(T20,Ynil);
  T18 = (P)YPpair(bodyF1608,T19);
  T16 = (P)YPpair(T17,T18);
  T14 = (P)YPpair(T15,T16);
  T12 = (P)YPpair(T13,T14);
  T5 = CALL3(1,CHKREF(YPisa),T6,T7,T12);
  new_funF1609 = T5;
  T21 = CALL3(1,CHKREF(Yast_linearizeYlift_proceduresX),bodyF1608,new_funF1609,local_bindingsF1607);
  CALL2(1,CHKREF(YastYfunction_body_setter),T21,new_funF1609);
  T22 = CALL1(1,CHKREF(Yast_linearizeYfunction_free),new_funF1609);
  freeTF1610 = T22;
  T24 = CALL3(1,CHKREF(Yast_linearizeYlift_proceduresX),freeTF1610,flat_fun_,bindings_);
  T23 = CALL2(1,CHKREF(Yast_linearizeYfunction_free_setter),T24,new_funF1609);
  T4 = new_funF1609;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_form_60) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYprogram_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_form_setter_61) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYprogram_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_62) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_program_quotations_63) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYprogram_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_quotations_setter_64) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYprogram_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_65) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYfab),CHKREF(YruntimeYLtabG),YPint((P)40));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_definitions_66) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYprogram_definitions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_definitions_setter_67) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYprogram_definitions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_68) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_form_program_69) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYform_program));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_program_setter_70) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYform_program));
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
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_form_quotations_72) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYform_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_quotations_setter_73) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYform_quotations));
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

FUNCODEDEF(fun_form_definitions_75) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYform_definitions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_definitions_setter_76) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYform_definitions));
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

FUNCODEDEF(fun_function_index_78) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYfunction_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_index_setter_79) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYfunction_index));
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
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_function_temporaries_81) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYfunction_temporaries));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_temporaries_setter_82) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYfunction_temporaries));
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
  QRET(Ynil);
}

FUNCODEDEF(fun_function_registers_84) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYfunction_registers));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_registers_setter_85) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYfunction_registers));
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
  QRET(Ynil);
}

FUNCODEDEF(fun_function_self_recursiveQ_87) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYfunction_self_recursiveQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_self_recursiveQ_setter_88) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYfunction_self_recursiveQ));
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

FUNCODEDEF(fun_function_temporaries_90) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYfunction_temporaries));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_temporaries_setter_91) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYfunction_temporaries));
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
  QRET(Ynil);
}

FUNCODEDEF(fun_function_registers_93) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYfunction_registers));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_registers_setter_94) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYfunction_registers));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_95) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_function_self_recursiveQ_96) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYfunction_self_recursiveQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_function_self_recursiveQ_setter_97) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYfunction_self_recursiveQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_98) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_closure_creation_index_99) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYclosure_creation_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closure_creation_index_setter_100) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYclosure_creation_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_101) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_closure_creation_bindings_102) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYclosure_creation_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closure_creation_bindings_setter_103) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYclosure_creation_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_104) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_closure_creation_free_105) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYclosure_creation_free));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closure_creation_free_setter_106) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYclosure_creation_free));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_107) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_flatten_seqs_108) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,CHKREF(Ylst),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_inner_109) {
  P ss_,r_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(ss_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),ss_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,CHKREF(Ytail),FREEREF(1));
    T2 = CALL2(0,FREEREF(0),T3,r_);
    T0 = T2;
  } else {
    T5 = CALL1(1,CHKREF(Ytail),ss_);
    T7 = CALL1(1,CHKREF(Yhead),ss_);
    T6 = CALL2(1,CHKREF(YmacrosYpair),T7,r_);
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

FUNCODEDEF(fun_loop_110) {
  P s_,r_;
  P innerF1611;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),s_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,CHKREF(YruntimeYrevX),r_);
    T0 = T2;
  } else {
    T4 = FUNSHELL(1,fun_inner_109,3);
    innerF1611 = T4;
    FUNINIT(innerF1611, 3,FREEREF(0),s_,innerF1611);
    T7 = CALL1(1,CHKREF(Yhead),s_);
    T6 = CALL1(1,CHKREF(Yast_linearizeYflatten_seqs),T7);
    T5 = CALL2(0,innerF1611,T6,r_);
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_flatten_seqs_111) {
  P o_;
  P loopF1612;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_110,1);
  loopF1612 = T1;
  FUNINIT(loopF1612, 1,loopF1612);
  T2 = CALL2(0,loopF1612,o_,Ynil);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_112) {
  P x_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = (P)YPpair(CHKREF(Yast_linearizeYLtop_level_formG),Ynil);
  T2 = (P)YPpair(CHKREF(Yast_linearizeYform_program),Ynil);
  T3 = (P)YPpair(x_,Ynil);
  T0 = CALL3(1,CHKREF(YPisa),T1,T2,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_top_level_forms_113) {
  P programs_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(programs_, 0);
loop:
  T1 = fun_112;
  T0 = CALL2(1,CHKREF(YmacrosYmap),T1,programs_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_114) {
  P form_;
  P T0;
  P a1;
LINK_STACK();
  ARG(form_, 0);
loop:
  T0 = CALL3(1,CHKREF(Yast_linearizeYextractX),form_,form_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extract_thingsX_115) {
  P o_;
  P resultF1614;
  P formsF1613;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T2 = CALL1(1,CHKREF(Yast_linearizeYflatten_seqs),o_);
  T1 = CALL1(1,CHKREF(Yast_linearizeYas_top_level_forms),T2);
  formsF1613 = T1;
  T5 = (P)YPpair(CHKREF(Yast_linearizeYLflattened_programG),Ynil);
  T4 = CALL3(1,CHKREF(YPisa),T5,Ynil,Ynil);
  resultF1614 = T4;
  T8 = FUNFAB(fun_114,1,resultF1614);
  T7 = CALL2(1,CHKREF(YmacrosYmap),T8,formsF1613);
  T6 = CALL1(1,CHKREF(YastYsequentialize),T7);
  CALL2(1,CHKREF(Yast_linearizeYprogram_form_setter),T6,resultF1614);
  T3 = resultF1614;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_116) {
  P o_,form_,result_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T0 = CALLN(1,CHKREF(Yast_linearizeYupdate_walkX),4,CHKREF(Yast_linearizeYextractX),o_,form_,result_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_117) {
  P o_,form_,result_;
  P qbF1623;
  P probeF1622;
  P indexF1621;
  P qbTF1620;
  P tmpF1619;
  P tmpF1618;
  P tmpF1617;
  P tmpF1616;
  P valueF1615;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T1 = CALL1(1,CHKREF(YastYconstant_value),o_);
  valueF1615 = T1;
  T4 = CALL2(1,CHKREF(YmacrosYEE),valueF1615,YPfalse);
  tmpF1616 = T4;
  if (tmpF1616 != YPfalse) {
    T5 = tmpF1616;
  } else {
    T7 = CALL2(1,CHKREF(YmacrosYEE),valueF1615,YPtrue);
    tmpF1617 = T7;
    if (tmpF1617 != YPfalse) {
      T8 = tmpF1617;
    } else {
      T10 = CALL2(1,CHKREF(YmacrosYEE),valueF1615,Ynil);
      tmpF1618 = T10;
      if (tmpF1618 != YPfalse) {
        T11 = tmpF1618;
      } else {
        T13 = CALL2(1,CHKREF(YisaQ),valueF1615,CHKREF(YLintG));
        tmpF1619 = T13;
        if (tmpF1619 != YPfalse) {
          T14 = tmpF1619;
        } else {
          T15 = CALL2(1,CHKREF(YisaQ),valueF1615,CHKREF(YLchrG));
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
    T17 = CALL1(1,CHKREF(Yast_linearizeYprogram_quotations),result_);
    qbTF1620 = T17;
    T19 = CALL1(1,CHKREF(YruntimeYlen),qbTF1620);
    indexF1621 = T19;
    T21 = CALL2(1,CHKREF(YruntimeYelt),qbTF1620,valueF1615);
    probeF1622 = T21;
    T23 = CALL2(1,CHKREF(YruntimeYNEE),probeF1622,CHKREF(Ynul));
    if (T23 != YPfalse) {
      T25 = (P)YPpair(CHKREF(YastYLglobal_referenceG),Ynil);
      T26 = (P)YPpair(CHKREF(YastYreference_binding),Ynil);
      T27 = (P)YPpair(probeF1622,Ynil);
      T24 = CALL3(1,CHKREF(YPisa),T25,T26,T27);
      T22 = T24;
    } else {
      T30 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
      T33 = (P)YPpair(CHKREF(YastYbinding_info),Ynil);
      T32 = (P)YPpair(CHKREF(YastYbinding_name),T33);
      T31 = (P)YPpair(CHKREF(YastYbinding_kind),T32);
      T36 = (P)YPpair(valueF1615,Ynil);
      T35 = (P)YPpair(indexF1621,T36);
      T34 = (P)YPpair(CHKREF(lit_99),T35);
      T29 = CALL3(1,CHKREF(YPisa),T30,T31,T34);
      qbF1623 = T29;
      CALL3(1,CHKREF(YruntimeYelt_setter),qbF1623,qbTF1620,valueF1615);
      T38 = CALL1(1,CHKREF(Yast_linearizeYform_quotations),form_);
      T37 = CALL2(1,CHKREF(YmacrosYpair),qbF1623,T38);
      CALL2(1,CHKREF(Yast_linearizeYform_quotations_setter),T37,form_);
      T40 = (P)YPpair(CHKREF(YastYLglobal_referenceG),Ynil);
      T41 = (P)YPpair(CHKREF(YastYreference_binding),Ynil);
      T42 = (P)YPpair(qbF1623,Ynil);
      T39 = CALL3(1,CHKREF(YPisa),T40,T41,T42);
      T28 = T39;
      T22 = T28;
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

FUNCODEDEF(fun_extractX_118) {
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

FUNCODEDEF(fun_119) {
  P binding_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T2 = CALL1(1,CHKREF(YastYbinding_type),binding_);
  T1 = CALL3(1,CHKREF(Yast_linearizeYextractX),T2,FREEREF(0),FREEREF(1));
  T0 = CALL2(1,CHKREF(YastYbinding_type_setter),T1,binding_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_120) {
  P o_,form_,result_;
  P indexF1629;
  P free_bindingsF1628;
  P signatureF1627;
  P bindingF1626;
  P debug_nameF1625;
  P new_bodyF1624;
  P T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T1 = CALL1(1,CHKREF(YastYfunction_debug_name),o_);
  T0 = CALL3(1,CHKREF(Yast_linearizeYextractX),T1,form_,result_);
  CALL2(1,CHKREF(YastYfunction_debug_name_setter),T0,o_);
  T3 = CALL1(1,CHKREF(YastYfunction_signature),o_);
  T2 = CALL3(1,CHKREF(Yast_linearizeYextractX),T3,form_,result_);
  CALL2(1,CHKREF(YastYfunction_signature_setter),T2,o_);
  T6 = CALL1(1,CHKREF(YastYfunction_body),o_);
  T5 = CALL3(1,CHKREF(Yast_linearizeYextractX),T6,form_,result_);
  new_bodyF1624 = T5;
  T8 = CALL1(1,CHKREF(YastYfunction_debug_name),o_);
  debug_nameF1625 = T8;
  T10 = CALL1(1,CHKREF(YastYfunction_binding),o_);
  bindingF1626 = T10;
  T12 = CALL1(1,CHKREF(YastYfunction_signature),o_);
  signatureF1627 = T12;
  T13 = FUNFAB(fun_119,2,form_,result_);
  T14 = CALL1(1,CHKREF(YastYfunction_bindings),o_);
  CALL2(1,CHKREF(YruntimeYdo),T13,T14);
  T17 = CALL1(1,CHKREF(Yast_linearizeYfunction_free),o_);
  T16 = CALL2(1,CHKREF(YmacrosYmap),CHKREF(YastYreference_binding),T17);
  free_bindingsF1628 = T16;
  T19 = CALLN(1,CHKREF(Yast_linearizeYadjoin_definitionX),7,form_,result_,debug_nameF1625,bindingF1626,signatureF1627,new_bodyF1624,free_bindingsF1628);
  indexF1629 = T19;
  T21 = (P)YPpair(CHKREF(Yast_linearizeYLclosure_creationG),Ynil);
  T24 = (P)YPpair(CHKREF(Yast_linearizeYclosure_creation_free),Ynil);
  T23 = (P)YPpair(CHKREF(Yast_linearizeYclosure_creation_bindings),T24);
  T22 = (P)YPpair(CHKREF(Yast_linearizeYclosure_creation_index),T23);
  T27 = CALL1(1,CHKREF(YastYfunction_bindings),o_);
  T29 = CALL1(1,CHKREF(Yast_linearizeYfunction_free),o_);
  T28 = (P)YPpair(T29,Ynil);
  T26 = (P)YPpair(T27,T28);
  T25 = (P)YPpair(indexF1629,T26);
  T20 = CALL3(1,CHKREF(YPisa),T21,T22,T25);
  T18 = T20;
  T15 = T18;
  T11 = T15;
  T9 = T11;
  T7 = T9;
  T4 = T7;
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(fun_extractX_121) {
  P o_,form_,result_;
  P definitionF1632;
  P bodyF1631;
  P pF1630;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T1 = CALL1(1,CHKREF(YastYassignment_form),o_);
  pF1630 = T1;
  T4 = CALL1(1,CHKREF(YastYfunction_body),pF1630);
  T3 = CALL3(1,CHKREF(Yast_linearizeYextractX),T4,form_,result_);
  bodyF1631 = T3;
  T7 = (P)YPpair(CHKREF(Yast_linearizeYLprimitive_definitionG),Ynil);
  T11 = (P)YPpair(CHKREF(YastYfunction_body),Ynil);
  T10 = (P)YPpair(CHKREF(YastYfunction_signature),T11);
  T9 = (P)YPpair(CHKREF(YastYfunction_debug_name),T10);
  T8 = (P)YPpair(CHKREF(YastYfunction_binding),T9);
  T13 = CALL1(1,CHKREF(YastYfunction_binding),pF1630);
  T15 = CALL1(1,CHKREF(YastYfunction_debug_name),pF1630);
  T17 = CALL1(1,CHKREF(YastYfunction_signature),pF1630);
  T18 = (P)YPpair(bodyF1631,Ynil);
  T16 = (P)YPpair(T17,T18);
  T14 = (P)YPpair(T15,T16);
  T12 = (P)YPpair(T13,T14);
  T6 = CALL3(1,CHKREF(YPisa),T7,T8,T12);
  definitionF1632 = T6;
  T20 = CALL1(1,CHKREF(Yast_linearizeYprogram_definitions),result_);
  T19 = CALL2(1,CHKREF(YmacrosYpair),definitionF1632,T20);
  CALL2(1,CHKREF(Yast_linearizeYprogram_definitions_setter),T19,result_);
  T23 = (P)YPpair(CHKREF(YastYLconstantG),Ynil);
  T24 = (P)YPpair(CHKREF(YastYconstant_value),Ynil);
  T25 = (P)YPpair(YPfalse,Ynil);
  T22 = CALL3(1,CHKREF(YPisa),T23,T24,T25);
  T21 = CALL3(1,CHKREF(Yast_linearizeYextractX),T22,form_,result_);
  T5 = T21;
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_definitionX_122) {
  P form_,result_,debug_name_,binding_,signature_,body_,free_;
  P definitionF1635;
  P new_indexF1634;
  P definitionsF1633;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6,a7;
LINK_STACK();
  ARG(form_, 0);
  ARG(result_, 1);
  ARG(debug_name_, 2);
  ARG(binding_, 3);
  ARG(signature_, 4);
  ARG(body_, 5);
  ARG(free_, 6);
loop:
  T1 = CALL1(1,CHKREF(Yast_linearizeYprogram_definitions),result_);
  definitionsF1633 = T1;
  T3 = CALL1(1,CHKREF(YruntimeYlen),definitionsF1633);
  new_indexF1634 = T3;
  T6 = (P)YPpair(CHKREF(Yast_linearizeYLfunction_definitionG),Ynil);
  T12 = (P)YPpair(CHKREF(Yast_linearizeYfunction_index),Ynil);
  T11 = (P)YPpair(CHKREF(Yast_linearizeYfunction_free),T12);
  T10 = (P)YPpair(CHKREF(YastYfunction_body),T11);
  T9 = (P)YPpair(CHKREF(YastYfunction_signature),T10);
  T8 = (P)YPpair(CHKREF(YastYfunction_debug_name),T9);
  T7 = (P)YPpair(CHKREF(YastYfunction_binding),T8);
  T18 = (P)YPpair(new_indexF1634,Ynil);
  T17 = (P)YPpair(free_,T18);
  T16 = (P)YPpair(body_,T17);
  T15 = (P)YPpair(signature_,T16);
  T14 = (P)YPpair(debug_name_,T15);
  T13 = (P)YPpair(binding_,T14);
  T5 = CALL3(1,CHKREF(YPisa),T6,T7,T13);
  definitionF1635 = T5;
  T19 = CALL2(1,CHKREF(YmacrosYpair),definitionF1635,definitionsF1633);
  CALL2(1,CHKREF(Yast_linearizeYprogram_definitions_setter),T19,result_);
  T21 = CALL1(1,CHKREF(Yast_linearizeYform_definitions),form_);
  T20 = CALL2(1,CHKREF(YmacrosYpair),definitionF1635,T21);
  CALL2(1,CHKREF(Yast_linearizeYform_definitions_setter),T20,form_);
  T4 = new_indexF1634;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_split_program_123) {
  P o_,max_count_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(max_count_, 1);
loop:
  T0 = CALL1(1,CHKREF(Ylst),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_inner_124) {
  P res_,es_,count_;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(res_, 0);
  ARG(es_, 1);
  ARG(count_, 2);
loop:
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),es_);
  if (T1 != YPfalse) {
    T5 = CALL1(1,CHKREF(YruntimeYrevX),res_);
    T4 = CALL1(1,CHKREF(YastYsequentialize),T5);
    T3 = CALL2(1,CHKREF(YmacrosYpair),T4,FREEREF(0));
    T2 = CALL1(1,CHKREF(YruntimeYrevX),T3);
    T0 = T2;
  } else {
    T7 = CALL2(1,CHKREF(YruntimeYE),count_,FREEREF(1));
    if (T7 != YPfalse) {
      T11 = CALL1(1,CHKREF(YruntimeYrevX),res_);
      T10 = CALL1(1,CHKREF(YastYsequentialize),T11);
      T9 = CALL2(1,CHKREF(YmacrosYpair),T10,FREEREF(0));
      T8 = CALL2(0,FREEREF(2),T9,es_);
      T6 = T8;
    } else {
      if (YPtrue != YPfalse) {
        T15 = CALL1(1,CHKREF(Yhead),es_);
        T14 = CALL2(1,CHKREF(YmacrosYpair),T15,res_);
        T16 = CALL1(1,CHKREF(Ytail),es_);
        T17 = CALL2(1,CHKREF(YruntimeYA),count_,YPint((P)1));
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

FUNCODEDEF(fun_loop_125) {
  P forms_,s_;
  P innerF1636;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(forms_, 0);
  ARG(s_, 1);
loop:
  T1 = FUNSHELL(1,fun_inner_124,4);
  innerF1636 = T1;
  FUNINIT(innerF1636, 4,forms_,FREEREF(0),FREEREF(1),innerF1636);
  T2 = CALL3(0,innerF1636,Ynil,s_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_split_program_126) {
  P o_,max_count_;
  P loopF1637;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(max_count_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_125,2);
  loopF1637 = T1;
  FUNINIT(loopF1637, 2,max_count_,loopF1637);
  T2 = CALL2(0,loopF1637,Ynil,o_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_127) {
  P calls_,defns_,i_,forms_;
  P callF1641;
  P defnF1640;
  P bindingF1639;
  P nameF1638;
  P T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30;
  P T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(calls_, 0);
  ARG(defns_, 1);
  ARG(i_, 2);
  ARG(forms_, 3);
loop:
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),forms_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,CHKREF(YruntimeYrevX),defns_);
    CALL2(1,CHKREF(Yast_linearizeYprogram_definitions_setter),T2,FREEREF(0));
    T4 = (P)YPpair(CHKREF(Yast_linearizeYLtop_level_formG),Ynil);
    T6 = (P)YPpair(CHKREF(Yast_linearizeYform_definitions),Ynil);
    T5 = (P)YPpair(CHKREF(Yast_linearizeYform_program),T6);
    T9 = CALL1(1,CHKREF(YruntimeYrevX),calls_);
    T8 = CALL1(1,CHKREF(YastYsequentialize),T9);
    T11 = CALL1(1,CHKREF(YruntimeYrevX),defns_);
    T10 = (P)YPpair(T11,Ynil);
    T7 = (P)YPpair(T8,T10);
    T3 = CALL3(1,CHKREF(YPisa),T4,T5,T7);
    CALL2(1,CHKREF(Yast_linearizeYprogram_form_setter),T3,FREEREF(0));
    T0 = FREEREF(0);
  } else {
    T13 = CALL3(1,CHKREF(YmacrosYmake_sym),CHKREF(lit_114),i_,CHKREF(lit_115));
    nameF1638 = T13;
    T15 = CALLN(1,CHKREF(YastYast_define_binding),4,FREEREF(1),nameF1638,YPfalse,CHKREF(lit_116));
    bindingF1639 = T15;
    T18 = (P)YPpair(CHKREF(Yast_linearizeYLprimitive_definitionG),Ynil);
    T22 = (P)YPpair(CHKREF(YastYfunction_body),Ynil);
    T21 = (P)YPpair(CHKREF(YastYfunction_signature),T22);
    T20 = (P)YPpair(CHKREF(YastYfunction_debug_name),T21);
    T19 = (P)YPpair(CHKREF(YastYfunction_binding),T20);
    T25 = CALL2(1,CHKREF(YastYobjectify_quotation),nameF1638,YPint((P)4));
    T28 = (P)YPpair(CHKREF(YastYLast_signatureG),Ynil);
    T27 = CALL3(1,CHKREF(YPisa),T28,Ynil,Ynil);
    T30 = CALL1(1,CHKREF(Yhead),forms_);
    T29 = (P)YPpair(T30,Ynil);
    T26 = (P)YPpair(T27,T29);
    T24 = (P)YPpair(T25,T26);
    T23 = (P)YPpair(bindingF1639,T24);
    T17 = CALL3(1,CHKREF(YPisa),T18,T19,T23);
    defnF1640 = T17;
    T33 = (P)YPpair(CHKREF(YastYLpredefined_applicationG),Ynil);
    T36 = (P)YPpair(CHKREF(YastYapplication_tailQ),Ynil);
    T35 = (P)YPpair(CHKREF(YastYapplication_arguments),T36);
    T34 = (P)YPpair(CHKREF(YastYapplication_binding),T35);
    T39 = CALL1(1,CHKREF(YruntimeYempty),CHKREF(YastYLargumentsG));
    T40 = (P)YPpair(YPfalse,Ynil);
    T38 = (P)YPpair(T39,T40);
    T37 = (P)YPpair(bindingF1639,T38);
    T32 = CALL3(1,CHKREF(YPisa),T33,T34,T37);
    callF1641 = T32;
    T42 = CALL2(1,CHKREF(YmacrosYpair),callF1641,calls_);
    T43 = CALL2(1,CHKREF(YmacrosYpair),defnF1640,defns_);
    T44 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
    T45 = CALL1(1,CHKREF(Ytail),forms_);
    a1 = T42;
    a2 = T43;
    a3 = T44;
    a4 = T45;
    calls_ = a1;
    defns_ = a2;
    i_ = a3;
    forms_ = a4;
    goto loop;
    T31 = T41;
    T16 = T31;
    T14 = T16;
    T12 = T14;
    T0 = T12;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closurize_mainX_128) {
  P o_,r_,max_count_;
  P loopF1644;
  P base_indexF1643;
  P formsF1642;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(max_count_, 2);
loop:
  T2 = CALL1(1,CHKREF(Yast_linearizeYprogram_form),o_);
  T1 = CALL2(1,CHKREF(Yast_linearizeYsplit_program),T2,max_count_);
  formsF1642 = T1;
  T5 = CALL1(1,CHKREF(Yast_linearizeYprogram_definitions),o_);
  T4 = CALL1(1,CHKREF(YruntimeYlen),T5);
  base_indexF1643 = T4;
  T7 = FUNSHELL(1,fun_loop_127,3);
  loopF1644 = T7;
  FUNINIT(loopF1644, 3,o_,r_,loopF1644);
  T9 = CALL1(1,CHKREF(Yast_linearizeYprogram_definitions),o_);
  T8 = CALLN(0,loopF1644,4,Ynil,T9,YPint((P)0),formsF1642);
  T6 = T8;
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_129) {
  P def_;
  P T0;
  P a1;
LINK_STACK();
  ARG(def_, 0);
loop:
  T0 = CALL3(1,CHKREF(Yast_linearizeYcollect_temporariesX),def_,def_,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gather_temporariesX_130) {
  P o_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = fun_129;
  T2 = CALL1(1,CHKREF(Yast_linearizeYprogram_definitions),o_);
  T0 = CALL2(1,CHKREF(YmacrosYmap),T1,T2);
  CALL2(1,CHKREF(Yast_linearizeYprogram_definitions_setter),T0,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_collect_temporariesX_131) {
  P o_,flat_fun_,r_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T0 = CALLN(1,CHKREF(Yast_linearizeYupdate_walkX),4,CHKREF(Yast_linearizeYcollect_temporariesX),o_,flat_fun_,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_temporariesX_132) {
  P o_,flat_fun_,r_;
  P bF1646;
  P bindingF1645;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,CHKREF(YastYreference_binding),o_);
  bindingF1645 = T1;
  T3 = CALL2(1,CHKREF(YruntimeYassocq),bindingF1645,r_);
  bF1646 = T3;
  if (bF1646 != YPfalse) {
    T6 = (P)YPpair(CHKREF(YastYLlocal_referenceG),Ynil);
    T7 = (P)YPpair(CHKREF(YastYreference_binding),Ynil);
    T9 = CALL1(1,CHKREF(YruntimeYassoc_value),bF1646);
    T8 = (P)YPpair(T9,Ynil);
    T5 = CALL3(1,CHKREF(YPisa),T6,T7,T8);
    T4 = T5;
  } else {
    T4 = o_;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_temporariesX_133) {
  P o_,flat_fun_,r_;
  P new_rF1648;
  P new_bindingsF1647;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,CHKREF(YastYfix_let_arguments),o_);
  T0 = CALL3(1,CHKREF(Yast_linearizeYcollect_temporariesX),T1,flat_fun_,r_);
  CALL2(1,CHKREF(YastYfix_let_arguments_setter),T0,o_);
  T4 = CALL1(1,CHKREF(YastYfix_let_bindings),o_);
  T3 = CALL2(1,CHKREF(YmacrosYmap),CHKREF(Yast_linearizeYnew_renamed_binding),T4);
  new_bindingsF1647 = T3;
  T8 = CALL1(1,CHKREF(YastYfix_let_bindings),o_);
  T7 = CALL3(1,CHKREF(YruntimeYmap2),CHKREF(YruntimeYassoc),T8,new_bindingsF1647);
  T6 = CALL2(1,CHKREF(YmacrosYcat),T7,r_);
  new_rF1648 = T6;
  CALL2(1,CHKREF(Yast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF1647);
  CALL2(1,CHKREF(YastYfix_let_bindings_setter),new_bindingsF1647,o_);
  T10 = CALL1(1,CHKREF(YastYfix_let_body),o_);
  T9 = CALL3(1,CHKREF(Yast_linearizeYcollect_temporariesX),T10,flat_fun_,new_rF1648);
  CALL2(1,CHKREF(YastYfix_let_body_setter),T9,o_);
  T5 = o_;
  T2 = T5;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_collect_temporariesX_134) {
  P o_,flat_fun_,r_;
  P new_rF1650;
  P new_bindingsF1649;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T2 = CALL1(1,CHKREF(YastYlocals_bindings),o_);
  T1 = CALL2(1,CHKREF(YmacrosYmap),CHKREF(Yast_linearizeYnew_renamed_binding),T2);
  new_bindingsF1649 = T1;
  T6 = CALL1(1,CHKREF(YastYlocals_bindings),o_);
  T5 = CALL3(1,CHKREF(YruntimeYmap2),CHKREF(YruntimeYassoc),T6,new_bindingsF1649);
  T4 = CALL2(1,CHKREF(YmacrosYcat),T5,r_);
  new_rF1650 = T4;
  T8 = CALL3(1,CHKREF(YruntimeYrcurry),CHKREF(Yast_linearizeYcollect_temporariesX),flat_fun_,new_rF1650);
  T9 = CALL1(1,CHKREF(YastYlocals_functions),o_);
  T7 = CALL2(1,CHKREF(YmacrosYmap),T8,T9);
  CALL2(1,CHKREF(YastYlocals_functions_setter),T7,o_);
  CALL2(1,CHKREF(Yast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF1649);
  CALL2(1,CHKREF(YastYlocals_bindings_setter),new_bindingsF1649,o_);
  T11 = CALL1(1,CHKREF(YastYlocals_body),o_);
  T10 = CALL3(1,CHKREF(Yast_linearizeYcollect_temporariesX),T11,flat_fun_,new_rF1650);
  CALL2(1,CHKREF(YastYlocals_body_setter),T10,o_);
  T3 = o_;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_135) {
  P temps_,bindings_;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(temps_, 0);
  ARG(bindings_, 1);
loop:
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),bindings_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,CHKREF(Yast_linearizeYfunction_temporaries_setter),temps_,FREEREF(0));
    T0 = T2;
  } else {
    T5 = CALL1(1,CHKREF(Yhead),bindings_);
    T4 = CALL2(1,CHKREF(YruntimeYmemQ),temps_,T5);
    if (T4 != YPfalse) {
      T7 = CALL1(1,CHKREF(Ytail),bindings_);
      a1 = temps_;
      a2 = T7;
      temps_ = a1;
      bindings_ = a2;
      goto loop;
      T3 = T6;
    } else {
      T10 = CALL1(1,CHKREF(Yhead),bindings_);
      T9 = CALL2(1,CHKREF(YmacrosYpair),T10,temps_);
      T11 = CALL1(1,CHKREF(Ytail),bindings_);
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

FUNCODEDEF(fun_adjoin_temporary_variablesX_136) {
  P flat_fun_,new_bindings_;
  P adjoinF1651;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(flat_fun_, 0);
  ARG(new_bindings_, 1);
loop:
  T1 = FUNSHELL(1,fun_adjoin_135,2);
  adjoinF1651 = T1;
  FUNINIT(adjoinF1651, 2,flat_fun_,adjoinF1651);
  T3 = CALL1(1,CHKREF(Yast_linearizeYfunction_temporaries),flat_fun_);
  T2 = CALL2(0,adjoinF1651,T3,new_bindings_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_index_137) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYbinding_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_index_setter_138) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYbinding_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_139) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_new_renamed_binding_140) {
  P binding_;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYA),CHKREF(Yast_linearizeYTrenaming_bindings_counterT),YPint((P)1));
  Yast_linearizeYTrenaming_bindings_counterT = T0;
  T2 = (P)YPpair(CHKREF(Yast_linearizeYLrenamed_local_bindingG),Ynil);
  T6 = (P)YPpair(CHKREF(Yast_linearizeYbinding_index),Ynil);
  T5 = (P)YPpair(CHKREF(YastYbinding_dynamic_extentQ),T6);
  T4 = (P)YPpair(CHKREF(YastYbinding_type),T5);
  T3 = (P)YPpair(CHKREF(YastYbinding_name),T4);
  T8 = CALL1(1,CHKREF(YastYbinding_name),binding_);
  T10 = CALL1(1,CHKREF(YastYbinding_type),binding_);
  T12 = CALL1(1,CHKREF(YastYbinding_dynamic_extentQ),binding_);
  T13 = (P)YPpair(CHKREF(Yast_linearizeYTrenaming_bindings_counterT),Ynil);
  T11 = (P)YPpair(T12,T13);
  T9 = (P)YPpair(T10,T11);
  T7 = (P)YPpair(T8,T9);
  T1 = CALL3(1,CHKREF(YPisa),T2,T3,T7);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_141) {
  P def_;
  P T0;
  P a1;
LINK_STACK();
  ARG(def_, 0);
loop:
  T0 = CALL3(1,CHKREF(Yast_linearizeYcollect_registersX),def_,YPfalse,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_register_allocateX_142) {
  P o_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = fun_141;
  T1 = CALL1(1,CHKREF(Yast_linearizeYprogram_definitions),o_);
  CALL2(1,CHKREF(YruntimeYdo),T0,T1);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_allocate_register_143) {
  P o_,flat_fun_,valQ_;
  P tmpF1653;
  P tmpF1652;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  tmpF1652 = valQ_;
  if (tmpF1652 != YPfalse) {
    tmpF1653 = flat_fun_;
    if (tmpF1653 != YPfalse) {
      T6 = CALL1(1,CHKREF(YastYprogram_register),o_);
      T5 = CALL1(1,CHKREF(Ynot),T6);
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
    T8 = CALL1(1,CHKREF(Yast_linearizeYfunction_registers),flat_fun_);
    T7 = CALL1(1,CHKREF(YruntimeYlen),T8);
    CALL2(1,CHKREF(YastYprogram_register_setter),T7,o_);
    T11 = CALL1(1,CHKREF(Yast_linearizeYfunction_registers),flat_fun_);
    T10 = CALL2(1,CHKREF(YmacrosYpair),o_,T11);
    T9 = CALL2(1,CHKREF(Yast_linearizeYfunction_registers_setter),T10,flat_fun_);
    T0 = T9;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_144) {
  P o_,flat_fun_,valQ_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  CALL3(1,CHKREF(Yast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T0 = CALLN(1,CHKREF(Yast_linearizeYupdate_walkX),4,CHKREF(Yast_linearizeYcollect_registersX),o_,flat_fun_,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_145) {
  P x_;
  P tmpF1655;
  P next_xF1654;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T3 = CALL1(1,CHKREF(Ytail),x_);
    next_xF1654 = T3;
    T4 = CALL1(1,CHKREF(Yhead),x_);
    tmpF1655 = FREEREF(2);
    if (tmpF1655 != YPfalse) {
      T7 = CALL1(1,CHKREF(YmacrosYemptyQ),next_xF1654);
      T6 = T7;
    } else {
      T6 = YPfalse;
    }
    T5 = T6;
    CALL3(1,CHKREF(Yast_linearizeYcollect_registersX),T4,FREEREF(1),T5);
    a1 = next_xF1654;
    x_ = a1;
    goto loop;
    T2 = T8;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_146) {
  P o_,flat_fun_,valQ_;
  P loopF1656;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_145,4);
  loopF1656 = T1;
  FUNINIT(loopF1656, 4,o_,flat_fun_,valQ_,loopF1656);
  T2 = CALL1(0,loopF1656,o_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_147) {
  P o_,flat_fun_,valQ_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  T0 = CALLN(1,CHKREF(Yast_linearizeYupdate_walkX),4,CHKREF(Yast_linearizeYcollect_registersX),o_,flat_fun_,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_148) {
  P def_;
  P T0;
  P a1;
LINK_STACK();
  ARG(def_, 0);
loop:
  T0 = CALL3(1,CHKREF(Yast_linearizeYcollect_registersX),def_,FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_149) {
  P o_,flat_fun_,valQ_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  CALL3(1,CHKREF(Yast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T0 = FUNFAB(fun_148,2,flat_fun_,valQ_);
  T1 = CALL1(1,CHKREF(Yast_linearizeYform_definitions),o_);
  CALL2(1,CHKREF(YruntimeYdo),T0,T1);
  T2 = CALL1(1,CHKREF(Yast_linearizeYform_program),o_);
  CALL3(1,CHKREF(Yast_linearizeYcollect_registersX),T2,flat_fun_,valQ_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_collect_registersX_150) {
  P o_,flat_fun_,valQ_;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  CALL3(1,CHKREF(Yast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T0 = CALL1(1,CHKREF(YastYfunction_signature),o_);
  CALL3(1,CHKREF(Yast_linearizeYcollect_registersX),T0,flat_fun_,YPtrue);
  T1 = CALL1(1,CHKREF(YastYfunction_body),o_);
  CALL3(1,CHKREF(Yast_linearizeYcollect_registersX),T1,o_,YPtrue);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_collect_registersX_151) {
  P o_,flat_fun_,valQ_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  T0 = CALL1(1,CHKREF(YastYfunction_body),o_);
  CALL3(1,CHKREF(Yast_linearizeYcollect_registersX),T0,o_,YPtrue);
UNLINK_STACK();
  QRET(o_);
}

P Yast_linearizeY___main_0___() {
  P T272,T271,T270,T269,T268,T267,T266,T265,T264,T263,T262,T261,T260,T259,T258,T257;
  P T256,T255,T254,T253,T252,T251,T250,T249,T248,T247,T246,T245,T244,T243,T242,T241;
  P T240,T239,T238,T237,T236,T235,T234,T233,T232,T231,T230,T229,T228,T227,T226,T225;
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
  lit_0 = YPPsym((P)"update-walk!");
  lit_1 = YPPsym((P)"g");
  lit_2 = YPPsym((P)"o");
  lit_3 = YPPsym((P)"args");
  lit_4 = YPPsym((P)"x-1294");
  lit_5 = YPPsym((P)"x-1292");
  T1 = YPsig(YPPlist(1,CHKREF(lit_5)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1294_0 = YPmet(FUNCODEREF(fun_x_1294_0),CHKREF(lit_4),T1,ENVNUL);
  T0 = YPsig(YPPlist(3,CHKREF(lit_1),CHKREF(lit_2),CHKREF(lit_3)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPtrue,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_update_walkX_1 = YPmet(FUNCODEREF(fun_update_walkX_1),CHKREF(lit_0),T0,ENVNUL);
  T4 = BOUNDP(Yast_linearizeYupdate_walkX);
  if (T4 != YPfalse) {
    T3 = CHKREF(Yast_linearizeYupdate_walkX);
  } else {
    T3 = YPfalse;
  }
  T5 = fun_update_walkX_1;
  T2 = CALL2(1,CHKREF(YPdefine_method),T3,T5);
  Yast_linearizeYupdate_walkX = T2;
  lit_6 = YPPsym((P)"<box-read>");
  T7 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T6 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_6),T7);
  Yast_linearizeYLbox_readG = T6;
  lit_7 = YPPsym((P)"box-reference");
  lit_8 = YPPsym((P)"_x");
  T8 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLbox_readG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_box_reference_2 = YPmet(FUNCODEREF(fun_box_reference_2),CHKREF(lit_7),T8,ENVNUL);
  T11 = BOUNDP(Yast_linearizeYbox_reference);
  if (T11 != YPfalse) {
    T10 = CHKREF(Yast_linearizeYbox_reference);
  } else {
    T10 = YPfalse;
  }
  T12 = fun_box_reference_2;
  T9 = CALL2(1,CHKREF(YPdefine_method),T10,T12);
  Yast_linearizeYbox_reference = T9;
  lit_9 = YPPsym((P)"box-reference-setter");
  lit_10 = YPPsym((P)"_z");
  T13 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLbox_readG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_box_reference_setter_3 = YPmet(FUNCODEREF(fun_box_reference_setter_3),CHKREF(lit_9),T13,ENVNUL);
  T16 = BOUNDP(Yast_linearizeYbox_reference_setter);
  if (T16 != YPfalse) {
    T15 = CHKREF(Yast_linearizeYbox_reference_setter);
  } else {
    T15 = YPfalse;
  }
  T17 = fun_box_reference_setter_3;
  T14 = CALL2(1,CHKREF(YPdefine_method),T15,T17);
  Yast_linearizeYbox_reference_setter = T14;
  lit_11 = YPPsym((P)"x");
  T18 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_4 = YPmet(FUNCODEREF(fun_4),YPfalse,T18,ENVNUL);
  T19 = fun_4;
  CALLN(1,CHKREF(YPslot),5,CHKREF(Yast_linearizeYLbox_readG),CHKREF(Yast_linearizeYbox_reference),CHKREF(Yast_linearizeYbox_reference_setter),CHKREF(YLanyG),T19);
  lit_12 = YPPsym((P)"<box-write>");
  T21 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T20 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_12),T21);
  Yast_linearizeYLbox_writeG = T20;
  T22 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLbox_writeG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_box_reference_5 = YPmet(FUNCODEREF(fun_box_reference_5),CHKREF(lit_7),T22,ENVNUL);
  T25 = BOUNDP(Yast_linearizeYbox_reference);
  if (T25 != YPfalse) {
    T24 = CHKREF(Yast_linearizeYbox_reference);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_box_reference_5;
  T23 = CALL2(1,CHKREF(YPdefine_method),T24,T26);
  Yast_linearizeYbox_reference = T23;
  T27 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLbox_writeG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_box_reference_setter_6 = YPmet(FUNCODEREF(fun_box_reference_setter_6),CHKREF(lit_9),T27,ENVNUL);
  T30 = BOUNDP(Yast_linearizeYbox_reference_setter);
  if (T30 != YPfalse) {
    T29 = CHKREF(Yast_linearizeYbox_reference_setter);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_box_reference_setter_6;
  T28 = CALL2(1,CHKREF(YPdefine_method),T29,T31);
  Yast_linearizeYbox_reference_setter = T28;
  T32 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T32,ENVNUL);
  T33 = fun_7;
  CALLN(1,CHKREF(YPslot),5,CHKREF(Yast_linearizeYLbox_writeG),CHKREF(Yast_linearizeYbox_reference),CHKREF(Yast_linearizeYbox_reference_setter),CHKREF(YLanyG),T33);
  lit_13 = YPPsym((P)"box-form");
  T34 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLbox_writeG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_box_form_8 = YPmet(FUNCODEREF(fun_box_form_8),CHKREF(lit_13),T34,ENVNUL);
  T37 = BOUNDP(Yast_linearizeYbox_form);
  if (T37 != YPfalse) {
    T36 = CHKREF(Yast_linearizeYbox_form);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_box_form_8;
  T35 = CALL2(1,CHKREF(YPdefine_method),T36,T38);
  Yast_linearizeYbox_form = T35;
  lit_14 = YPPsym((P)"box-form-setter");
  T39 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLbox_writeG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_box_form_setter_9 = YPmet(FUNCODEREF(fun_box_form_setter_9),CHKREF(lit_14),T39,ENVNUL);
  T42 = BOUNDP(Yast_linearizeYbox_form_setter);
  if (T42 != YPfalse) {
    T41 = CHKREF(Yast_linearizeYbox_form_setter);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_box_form_setter_9;
  T40 = CALL2(1,CHKREF(YPdefine_method),T41,T43);
  Yast_linearizeYbox_form_setter = T40;
  T44 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T44,ENVNUL);
  T45 = fun_10;
  CALLN(1,CHKREF(YPslot),5,CHKREF(Yast_linearizeYLbox_writeG),CHKREF(Yast_linearizeYbox_form),CHKREF(Yast_linearizeYbox_form_setter),CHKREF(YLanyG),T45);
  lit_15 = YPPsym((P)"<box-creation>");
  T47 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T46 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_15),T47);
  Yast_linearizeYLbox_creationG = T46;
  T48 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLbox_creationG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_box_reference_11 = YPmet(FUNCODEREF(fun_box_reference_11),CHKREF(lit_7),T48,ENVNUL);
  T51 = BOUNDP(Yast_linearizeYbox_reference);
  if (T51 != YPfalse) {
    T50 = CHKREF(Yast_linearizeYbox_reference);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_box_reference_11;
  T49 = CALL2(1,CHKREF(YPdefine_method),T50,T52);
  Yast_linearizeYbox_reference = T49;
  T53 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLbox_creationG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_box_reference_setter_12 = YPmet(FUNCODEREF(fun_box_reference_setter_12),CHKREF(lit_9),T53,ENVNUL);
  T56 = BOUNDP(Yast_linearizeYbox_reference_setter);
  if (T56 != YPfalse) {
    T55 = CHKREF(Yast_linearizeYbox_reference_setter);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_box_reference_setter_12;
  T54 = CALL2(1,CHKREF(YPdefine_method),T55,T57);
  Yast_linearizeYbox_reference_setter = T54;
  T58 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T58,ENVNUL);
  T59 = fun_13;
  CALLN(1,CHKREF(YPslot),5,CHKREF(Yast_linearizeYLbox_creationG),CHKREF(Yast_linearizeYbox_reference),CHKREF(Yast_linearizeYbox_reference_setter),CHKREF(YLanyG),T59);
  lit_16 = YPPsym((P)"insert-box!");
  T60 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_insert_boxX_14 = YPmet(FUNCODEREF(fun_insert_boxX_14),CHKREF(lit_16),T60,ENVNUL);
  T63 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T63 != YPfalse) {
    T62 = CHKREF(Yast_linearizeYinsert_boxX);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_insert_boxX_14;
  T61 = CALL2(1,CHKREF(YPdefine_method),T62,T64);
  Yast_linearizeYinsert_boxX = T61;
  T65 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLlocal_referenceG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_insert_boxX_15 = YPmet(FUNCODEREF(fun_insert_boxX_15),CHKREF(lit_16),T65,ENVNUL);
  T68 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T68 != YPfalse) {
    T67 = CHKREF(Yast_linearizeYinsert_boxX);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_insert_boxX_15;
  T66 = CALL2(1,CHKREF(YPdefine_method),T67,T69);
  Yast_linearizeYinsert_boxX = T66;
  T70 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLlocal_assignmentG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_insert_boxX_16 = YPmet(FUNCODEREF(fun_insert_boxX_16),CHKREF(lit_16),T70,ENVNUL);
  T73 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T73 != YPfalse) {
    T72 = CHKREF(Yast_linearizeYinsert_boxX);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_insert_boxX_16;
  T71 = CALL2(1,CHKREF(YPdefine_method),T72,T74);
  Yast_linearizeYinsert_boxX = T71;
  T75 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLast_methodG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_insert_boxX_17 = YPmet(FUNCODEREF(fun_insert_boxX_17),CHKREF(lit_16),T75,ENVNUL);
  T78 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T78 != YPfalse) {
    T77 = CHKREF(Yast_linearizeYinsert_boxX);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_insert_boxX_17;
  T76 = CALL2(1,CHKREF(YPdefine_method),T77,T79);
  Yast_linearizeYinsert_boxX = T76;
  T80 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLfix_letG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_insert_boxX_18 = YPmet(FUNCODEREF(fun_insert_boxX_18),CHKREF(lit_16),T80,ENVNUL);
  T83 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T83 != YPfalse) {
    T82 = CHKREF(Yast_linearizeYinsert_boxX);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_insert_boxX_18;
  T81 = CALL2(1,CHKREF(YPdefine_method),T82,T84);
  Yast_linearizeYinsert_boxX = T81;
  T85 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLlocalsG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_insert_boxX_19 = YPmet(FUNCODEREF(fun_insert_boxX_19),CHKREF(lit_16),T85,ENVNUL);
  T88 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T88 != YPfalse) {
    T87 = CHKREF(Yast_linearizeYinsert_boxX);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_insert_boxX_19;
  T86 = CALL2(1,CHKREF(YPdefine_method),T87,T89);
  Yast_linearizeYinsert_boxX = T86;
  lit_17 = YPPsym((P)"boxify-mutable-bindings");
  lit_18 = YPPsym((P)"form");
  lit_19 = YPPsym((P)"bindings");
  lit_20 = YPPsym((P)"loop");
  lit_21 = YPPsym((P)"res");
  T91 = YPsig(YPPlist(2,CHKREF(lit_21),CHKREF(lit_19)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_loop_20 = YPmet(FUNCODEREF(fun_loop_20),CHKREF(lit_20),T91,ENVNUL);
  T90 = YPsig(YPPlist(2,CHKREF(lit_18),CHKREF(lit_19)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_boxify_mutable_bindings_21 = YPmet(FUNCODEREF(fun_boxify_mutable_bindings_21),CHKREF(lit_17),T90,ENVNUL);
  T94 = BOUNDP(Yast_linearizeYboxify_mutable_bindings);
  if (T94 != YPfalse) {
    T93 = CHKREF(Yast_linearizeYboxify_mutable_bindings);
  } else {
    T93 = YPfalse;
  }
  T95 = fun_boxify_mutable_bindings_21;
  T92 = CALL2(1,CHKREF(YPdefine_method),T93,T95);
  Yast_linearizeYboxify_mutable_bindings = T92;
  lit_22 = YPPsym((P)"do-do-call-references!");
  T96 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_do_do_call_referencesX_22 = YPmet(FUNCODEREF(fun_do_do_call_referencesX_22),CHKREF(lit_22),T96,ENVNUL);
  T99 = BOUNDP(Yast_linearizeYdo_do_call_referencesX);
  if (T99 != YPfalse) {
    T98 = CHKREF(Yast_linearizeYdo_do_call_referencesX);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_do_do_call_referencesX_22;
  T97 = CALL2(1,CHKREF(YPdefine_method),T98,T100);
  Yast_linearizeYdo_do_call_referencesX = T97;
  lit_23 = YPPsym((P)"do-call-references!");
  T101 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_do_call_referencesX_23 = YPmet(FUNCODEREF(fun_do_call_referencesX_23),CHKREF(lit_23),T101,ENVNUL);
  T104 = BOUNDP(Yast_linearizeYdo_call_referencesX);
  if (T104 != YPfalse) {
    T103 = CHKREF(Yast_linearizeYdo_call_referencesX);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_do_call_referencesX_23;
  T102 = CALL2(1,CHKREF(YPdefine_method),T103,T105);
  Yast_linearizeYdo_call_referencesX = T102;
  T106 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLregular_applicationG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_do_call_referencesX_24 = YPmet(FUNCODEREF(fun_do_call_referencesX_24),CHKREF(lit_23),T106,ENVNUL);
  T109 = BOUNDP(Yast_linearizeYdo_call_referencesX);
  if (T109 != YPfalse) {
    T108 = CHKREF(Yast_linearizeYdo_call_referencesX);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_do_call_referencesX_24;
  T107 = CALL2(1,CHKREF(YPdefine_method),T108,T110);
  Yast_linearizeYdo_call_referencesX = T107;
  lit_24 = YPPsym((P)"analyze-call-references");
  T111 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_analyze_call_references_25 = YPmet(FUNCODEREF(fun_analyze_call_references_25),CHKREF(lit_24),T111,ENVNUL);
  T114 = BOUNDP(Yast_linearizeYanalyze_call_references);
  if (T114 != YPfalse) {
    T113 = CHKREF(Yast_linearizeYanalyze_call_references);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_analyze_call_references_25;
  T112 = CALL2(1,CHKREF(YPdefine_method),T113,T115);
  Yast_linearizeYanalyze_call_references = T112;
  lit_25 = YPPsym((P)"do-do-dynamic-extent!");
  T116 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_do_do_dynamic_extentX_26 = YPmet(FUNCODEREF(fun_do_do_dynamic_extentX_26),CHKREF(lit_25),T116,ENVNUL);
  T119 = BOUNDP(Yast_linearizeYdo_do_dynamic_extentX);
  if (T119 != YPfalse) {
    T118 = CHKREF(Yast_linearizeYdo_do_dynamic_extentX);
  } else {
    T118 = YPfalse;
  }
  T120 = fun_do_do_dynamic_extentX_26;
  T117 = CALL2(1,CHKREF(YPdefine_method),T118,T120);
  Yast_linearizeYdo_do_dynamic_extentX = T117;
  lit_26 = YPPsym((P)"do-dynamic-extent!");
  T121 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_do_dynamic_extentX_27 = YPmet(FUNCODEREF(fun_do_dynamic_extentX_27),CHKREF(lit_26),T121,ENVNUL);
  T124 = BOUNDP(Yast_linearizeYdo_dynamic_extentX);
  if (T124 != YPfalse) {
    T123 = CHKREF(Yast_linearizeYdo_dynamic_extentX);
  } else {
    T123 = YPfalse;
  }
  T125 = fun_do_dynamic_extentX_27;
  T122 = CALL2(1,CHKREF(YPdefine_method),T123,T125);
  Yast_linearizeYdo_dynamic_extentX = T122;
  T126 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLlocal_referenceG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_do_dynamic_extentX_28 = YPmet(FUNCODEREF(fun_do_dynamic_extentX_28),CHKREF(lit_26),T126,ENVNUL);
  T129 = BOUNDP(Yast_linearizeYdo_dynamic_extentX);
  if (T129 != YPfalse) {
    T128 = CHKREF(Yast_linearizeYdo_dynamic_extentX);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_do_dynamic_extentX_28;
  T127 = CALL2(1,CHKREF(YPdefine_method),T128,T130);
  Yast_linearizeYdo_dynamic_extentX = T127;
  lit_27 = YPPsym((P)"analyze-dynamic-extent");
  T131 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_analyze_dynamic_extent_29 = YPmet(FUNCODEREF(fun_analyze_dynamic_extent_29),CHKREF(lit_27),T131,ENVNUL);
  T134 = BOUNDP(Yast_linearizeYanalyze_dynamic_extent);
  if (T134 != YPfalse) {
    T133 = CHKREF(Yast_linearizeYanalyze_dynamic_extent);
  } else {
    T133 = YPfalse;
  }
  T135 = fun_analyze_dynamic_extent_29;
  T132 = CALL2(1,CHKREF(YPdefine_method),T133,T135);
  Yast_linearizeYanalyze_dynamic_extent = T132;
  lit_28 = YPPsym((P)"do-do-call-upgrades!");
  T136 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_do_do_call_upgradesX_30 = YPmet(FUNCODEREF(fun_do_do_call_upgradesX_30),CHKREF(lit_28),T136,ENVNUL);
  T139 = BOUNDP(Yast_linearizeYdo_do_call_upgradesX);
  if (T139 != YPfalse) {
    T138 = CHKREF(Yast_linearizeYdo_do_call_upgradesX);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_do_do_call_upgradesX_30;
  T137 = CALL2(1,CHKREF(YPdefine_method),T138,T140);
  Yast_linearizeYdo_do_call_upgradesX = T137;
  lit_29 = YPPsym((P)"do-call-upgrades!");
  T141 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_do_call_upgradesX_31 = YPmet(FUNCODEREF(fun_do_call_upgradesX_31),CHKREF(lit_29),T141,ENVNUL);
  T144 = BOUNDP(Yast_linearizeYdo_call_upgradesX);
  if (T144 != YPfalse) {
    T143 = CHKREF(Yast_linearizeYdo_call_upgradesX);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_do_call_upgradesX_31;
  T142 = CALL2(1,CHKREF(YPdefine_method),T143,T145);
  Yast_linearizeYdo_call_upgradesX = T142;
  lit_30 = YPPsym((P)"unconstrained-type?");
  lit_31 = YPPsym((P)"<any>");
  T146 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_32 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_32),CHKREF(lit_30),T146,ENVNUL);
  T149 = BOUNDP(Yast_linearizeYunconstrained_typeQ);
  if (T149 != YPfalse) {
    T148 = CHKREF(Yast_linearizeYunconstrained_typeQ);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_unconstrained_typeQ_32;
  T147 = CALL2(1,CHKREF(YPdefine_method),T148,T150);
  Yast_linearizeYunconstrained_typeQ = T147;
  T151 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLregular_applicationG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_do_call_upgradesX_33 = YPmet(FUNCODEREF(fun_do_call_upgradesX_33),CHKREF(lit_29),T151,ENVNUL);
  T154 = BOUNDP(Yast_linearizeYdo_call_upgradesX);
  if (T154 != YPfalse) {
    T153 = CHKREF(Yast_linearizeYdo_call_upgradesX);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_do_call_upgradesX_33;
  T152 = CALL2(1,CHKREF(YPdefine_method),T153,T155);
  Yast_linearizeYdo_call_upgradesX = T152;
  lit_32 = YPPsym((P)"analyze-calls");
  T156 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_analyze_calls_34 = YPmet(FUNCODEREF(fun_analyze_calls_34),CHKREF(lit_32),T156,ENVNUL);
  T159 = BOUNDP(Yast_linearizeYanalyze_calls);
  if (T159 != YPfalse) {
    T158 = CHKREF(Yast_linearizeYanalyze_calls);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_analyze_calls_34;
  T157 = CALL2(1,CHKREF(YPdefine_method),T158,T160);
  Yast_linearizeYanalyze_calls = T157;
  lit_33 = YPPsym((P)"<free-environment>");
  T163 = (P)YPpair(CHKREF(YastYLprogramsG),Ynil);
  T162 = (P)YPpair(CHKREF(YLlstG),T163);
  T161 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_33),T162);
  Yast_linearizeYLfree_environmentG = T161;
  T165 = (P)YPpair(CHKREF(Yast_linearizeYLfree_environmentG),Ynil);
  T167 = (P)YPpair(CHKREF(Ytail),Ynil);
  T166 = (P)YPpair(CHKREF(Yhead),T167);
  T169 = (P)YPpair(YPfalse,Ynil);
  T168 = (P)YPpair(YPfalse,T169);
  T164 = CALL3(1,CHKREF(YPisa),T165,T166,T168);
  Yast_linearizeYDfree_environment_empty = T164;
  lit_34 = YPPsym((P)"as");
  lit_35 = YPPsym((P)"p");
  T171 = CALL1(1,CHKREF(YruntimeYtE),CHKREF(Yast_linearizeYLfree_environmentG));
  T170 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_11)),YPPlist(2,T171,CHKREF(Yast_linearizeYLfree_environmentG)),YPfalse,YPint((P)2),CHKREF(YLlstG),Ynil);
  fun_as_35 = YPmet(FUNCODEREF(fun_as_35),CHKREF(lit_34),T170,ENVNUL);
  T174 = BOUNDP(YruntimeYas);
  if (T174 != YPfalse) {
    T173 = CHKREF(YruntimeYas);
  } else {
    T173 = YPfalse;
  }
  T175 = fun_as_35;
  T172 = CALL2(1,CHKREF(YPdefine_method),T173,T175);
  YruntimeYas = T172;
  T177 = CALL1(1,CHKREF(YruntimeYtE),CHKREF(YLlstG));
  T176 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_11)),YPPlist(2,T177,CHKREF(Yast_linearizeYLfree_environmentG)),YPfalse,YPint((P)2),CHKREF(YLlstG),Ynil);
  fun_as_36 = YPmet(FUNCODEREF(fun_as_36),CHKREF(lit_34),T176,ENVNUL);
  T180 = BOUNDP(YruntimeYas);
  if (T180 != YPfalse) {
    T179 = CHKREF(YruntimeYas);
  } else {
    T179 = YPfalse;
  }
  T181 = fun_as_36;
  T178 = CALL2(1,CHKREF(YPdefine_method),T179,T181);
  YruntimeYas = T178;
  T183 = CALL1(1,CHKREF(YruntimeYtE),CHKREF(Yast_linearizeYLfree_environmentG));
  T182 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_11)),YPPlist(2,T183,CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG),Ynil);
  fun_as_37 = YPmet(FUNCODEREF(fun_as_37),CHKREF(lit_34),T182,ENVNUL);
  T186 = BOUNDP(YruntimeYas);
  if (T186 != YPfalse) {
    T185 = CHKREF(YruntimeYas);
  } else {
    T185 = YPfalse;
  }
  T187 = fun_as_37;
  T184 = CALL2(1,CHKREF(YPdefine_method),T185,T187);
  YruntimeYas = T184;
  lit_36 = YPPsym((P)"free-environment");
  lit_37 = YPPsym((P)"h");
  lit_38 = YPPsym((P)"t");
  T188 = YPsig(YPPlist(2,CHKREF(lit_37),CHKREF(lit_38)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  Yast_linearizeYfree_environment = YPmet(FUNCODEREF(Yast_linearizeYfree_environment),CHKREF(lit_36),T188,ENVNUL);
  T189 = Yast_linearizeYfree_environment;
  Yast_linearizeYfree_environment = T189;
  lit_39 = YPPsym((P)"empty");
  lit_40 = YPPsym((P)"e");
  T191 = CALL1(1,CHKREF(YruntimeYtE),CHKREF(Yast_linearizeYLfree_environmentG));
  T190 = YPsig(YPPlist(1,CHKREF(lit_40)),YPPlist(1,T191),YPfalse,YPint((P)1),CHKREF(Yast_linearizeYLfree_environmentG),Ynil);
  fun_empty_39 = YPmet(FUNCODEREF(fun_empty_39),CHKREF(lit_39),T190,ENVNUL);
  T194 = BOUNDP(YruntimeYempty);
  if (T194 != YPfalse) {
    T193 = CHKREF(YruntimeYempty);
  } else {
    T193 = YPfalse;
  }
  T195 = fun_empty_39;
  T192 = CALL2(1,CHKREF(YPdefine_method),T193,T195);
  YruntimeYempty = T192;
  lit_41 = YPPsym((P)"<flat-function>");
  T197 = (P)YPpair(CHKREF(YastYLast_methodG),Ynil);
  T196 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_41),T197);
  Yast_linearizeYLflat_functionG = T196;
  lit_42 = YPPsym((P)"function-free");
  T198 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLflat_functionG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_function_free_40 = YPmet(FUNCODEREF(fun_function_free_40),CHKREF(lit_42),T198,ENVNUL);
  T201 = BOUNDP(Yast_linearizeYfunction_free);
  if (T201 != YPfalse) {
    T200 = CHKREF(Yast_linearizeYfunction_free);
  } else {
    T200 = YPfalse;
  }
  T202 = fun_function_free_40;
  T199 = CALL2(1,CHKREF(YPdefine_method),T200,T202);
  Yast_linearizeYfunction_free = T199;
  lit_43 = YPPsym((P)"function-free-setter");
  T203 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(Yast_linearizeYLfree_environmentG),CHKREF(Yast_linearizeYLflat_functionG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_function_free_setter_41 = YPmet(FUNCODEREF(fun_function_free_setter_41),CHKREF(lit_43),T203,ENVNUL);
  T206 = BOUNDP(Yast_linearizeYfunction_free_setter);
  if (T206 != YPfalse) {
    T205 = CHKREF(Yast_linearizeYfunction_free_setter);
  } else {
    T205 = YPfalse;
  }
  T207 = fun_function_free_setter_41;
  T204 = CALL2(1,CHKREF(YPdefine_method),T205,T207);
  Yast_linearizeYfunction_free_setter = T204;
  T208 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T208,ENVNUL);
  T209 = fun_42;
  CALLN(1,CHKREF(YPslot),5,CHKREF(Yast_linearizeYLflat_functionG),CHKREF(Yast_linearizeYfunction_free),CHKREF(Yast_linearizeYfunction_free_setter),CHKREF(Yast_linearizeYLfree_environmentG),T209);
  lit_44 = YPPsym((P)"<free-reference>");
  T211 = (P)YPpair(CHKREF(YastYLreal_referenceG),Ynil);
  T210 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_44),T211);
  Yast_linearizeYLfree_referenceG = T210;
  lit_45 = YPPsym((P)"reference-offset");
  T212 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLfree_referenceG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_reference_offset_43 = YPmet(FUNCODEREF(fun_reference_offset_43),CHKREF(lit_45),T212,ENVNUL);
  T215 = BOUNDP(Yast_linearizeYreference_offset);
  if (T215 != YPfalse) {
    T214 = CHKREF(Yast_linearizeYreference_offset);
  } else {
    T214 = YPfalse;
  }
  T216 = fun_reference_offset_43;
  T213 = CALL2(1,CHKREF(YPdefine_method),T214,T216);
  Yast_linearizeYreference_offset = T213;
  lit_46 = YPPsym((P)"reference-offset-setter");
  T218 = CALL1(1,CHKREF(YruntimeYfalse_or),CHKREF(YLintG));
  T217 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,T218,CHKREF(Yast_linearizeYLfree_referenceG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_reference_offset_setter_44 = YPmet(FUNCODEREF(fun_reference_offset_setter_44),CHKREF(lit_46),T217,ENVNUL);
  T221 = BOUNDP(Yast_linearizeYreference_offset_setter);
  if (T221 != YPfalse) {
    T220 = CHKREF(Yast_linearizeYreference_offset_setter);
  } else {
    T220 = YPfalse;
  }
  T222 = fun_reference_offset_setter_44;
  T219 = CALL2(1,CHKREF(YPdefine_method),T220,T222);
  Yast_linearizeYreference_offset_setter = T219;
  T223 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T223,ENVNUL);
  T224 = CALL1(1,CHKREF(YruntimeYfalse_or),CHKREF(YLintG));
  T225 = fun_45;
  CALLN(1,CHKREF(YPslot),5,CHKREF(Yast_linearizeYLfree_referenceG),CHKREF(Yast_linearizeYreference_offset),CHKREF(Yast_linearizeYreference_offset_setter),T224,T225);
  lit_47 = YPPsym((P)"reference-self?");
  T226 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLfree_referenceG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_reference_selfQ_46 = YPmet(FUNCODEREF(fun_reference_selfQ_46),CHKREF(lit_47),T226,ENVNUL);
  T229 = BOUNDP(Yast_linearizeYreference_selfQ);
  if (T229 != YPfalse) {
    T228 = CHKREF(Yast_linearizeYreference_selfQ);
  } else {
    T228 = YPfalse;
  }
  T230 = fun_reference_selfQ_46;
  T227 = CALL2(1,CHKREF(YPdefine_method),T228,T230);
  Yast_linearizeYreference_selfQ = T227;
  lit_48 = YPPsym((P)"reference-self?-setter");
  T231 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLlogG),CHKREF(Yast_linearizeYLfree_referenceG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_reference_selfQ_setter_47 = YPmet(FUNCODEREF(fun_reference_selfQ_setter_47),CHKREF(lit_48),T231,ENVNUL);
  T234 = BOUNDP(Yast_linearizeYreference_selfQ_setter);
  if (T234 != YPfalse) {
    T233 = CHKREF(Yast_linearizeYreference_selfQ_setter);
  } else {
    T233 = YPfalse;
  }
  T235 = fun_reference_selfQ_setter_47;
  T232 = CALL2(1,CHKREF(YPdefine_method),T233,T235);
  Yast_linearizeYreference_selfQ_setter = T232;
  T236 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T236,ENVNUL);
  T237 = fun_48;
  CALLN(1,CHKREF(YPslot),5,CHKREF(Yast_linearizeYLfree_referenceG),CHKREF(Yast_linearizeYreference_selfQ),CHKREF(Yast_linearizeYreference_selfQ_setter),CHKREF(YLlogG),T237);
  lit_49 = YPPsym((P)"lift!");
  T238 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_liftX_49 = YPmet(FUNCODEREF(fun_liftX_49),CHKREF(lit_49),T238,ENVNUL);
  T241 = BOUNDP(Yast_linearizeYliftX);
  if (T241 != YPfalse) {
    T240 = CHKREF(Yast_linearizeYliftX);
  } else {
    T240 = YPfalse;
  }
  T242 = fun_liftX_49;
  T239 = CALL2(1,CHKREF(YPdefine_method),T240,T242);
  Yast_linearizeYliftX = T239;
  lit_50 = YPPsym((P)"lift-procedures!");
  lit_51 = YPPsym((P)"flat-fun");
  T243 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_51),CHKREF(lit_19)),YPPlist(3,CHKREF(YastYLprogramG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_lift_proceduresX_50 = YPmet(FUNCODEREF(fun_lift_proceduresX_50),CHKREF(lit_50),T243,ENVNUL);
  T246 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T246 != YPfalse) {
    T245 = CHKREF(Yast_linearizeYlift_proceduresX);
  } else {
    T245 = YPfalse;
  }
  T247 = fun_lift_proceduresX_50;
  T244 = CALL2(1,CHKREF(YPdefine_method),T245,T247);
  Yast_linearizeYlift_proceduresX = T244;
  T248 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_51),CHKREF(lit_19)),YPPlist(3,CHKREF(YastYLlocal_referenceG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_lift_proceduresX_51 = YPmet(FUNCODEREF(fun_lift_proceduresX_51),CHKREF(lit_50),T248,ENVNUL);
  T251 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T251 != YPfalse) {
    T250 = CHKREF(Yast_linearizeYlift_proceduresX);
  } else {
    T250 = YPfalse;
  }
  T252 = fun_lift_proceduresX_51;
  T249 = CALL2(1,CHKREF(YPdefine_method),T250,T252);
  Yast_linearizeYlift_proceduresX = T249;
  lit_52 = YPPsym((P)"adjoin-free-binding!");
  lit_53 = YPPsym((P)"ref");
  lit_54 = YPPsym((P)"check");
  lit_55 = YPPsym((P)"i");
  lit_56 = YPPsym((P)"free*");
  lit_57 = YPPsym((P)"add");
  T255 = YPsig(YPPlist(1,CHKREF(lit_56)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_add_52 = YPmet(FUNCODEREF(fun_add_52),CHKREF(lit_57),T255,ENVNUL);
  T254 = YPsig(YPPlist(2,CHKREF(lit_55),CHKREF(lit_56)),YPPlist(2,CHKREF(YLintG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_check_53 = YPmet(FUNCODEREF(fun_check_53),CHKREF(lit_54),T254,ENVNUL);
  T253 = YPsig(YPPlist(2,CHKREF(lit_51),CHKREF(lit_53)),YPPlist(2,CHKREF(Yast_linearizeYLflat_functionG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLintG),Ynil);
  fun_adjoin_free_bindingX_54 = YPmet(FUNCODEREF(fun_adjoin_free_bindingX_54),CHKREF(lit_52),T253,ENVNUL);
  T258 = BOUNDP(Yast_linearizeYadjoin_free_bindingX);
  if (T258 != YPfalse) {
    T257 = CHKREF(Yast_linearizeYadjoin_free_bindingX);
  } else {
    T257 = YPfalse;
  }
  T259 = fun_adjoin_free_bindingX_54;
  T256 = CALL2(1,CHKREF(YPdefine_method),T257,T259);
  Yast_linearizeYadjoin_free_bindingX = T256;
  T260 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_51),CHKREF(lit_19)),YPPlist(3,CHKREF(YastYLfix_letG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_lift_proceduresX_55 = YPmet(FUNCODEREF(fun_lift_proceduresX_55),CHKREF(lit_50),T260,ENVNUL);
  T263 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T263 != YPfalse) {
    T262 = CHKREF(Yast_linearizeYlift_proceduresX);
  } else {
    T262 = YPfalse;
  }
  T264 = fun_lift_proceduresX_55;
  T261 = CALL2(1,CHKREF(YPdefine_method),T262,T264);
  Yast_linearizeYlift_proceduresX = T261;
  T267 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_51),CHKREF(lit_19)),YPPlist(3,CHKREF(YastYLlocalsG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  T266 = fun_lift_proceduresX_56 = YPmet(FUNCODEREF(fun_lift_proceduresX_56),CHKREF(lit_50),T267,ENVNUL);
  T271 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T271 != YPfalse) {
    T270 = CHKREF(Yast_linearizeYlift_proceduresX);
  } else {
    T270 = YPfalse;
  }
  T272 = fun_lift_proceduresX_56;
  T269 = CALL2(1,CHKREF(YPdefine_method),T270,T272);
  T268 = Yast_linearizeYlift_proceduresX = T269;
  T265 = T268;
  return T265;
}

P Yast_linearizeY___main_1___() {
  P T267,T266,T265,T264,T263,T262,T261,T260,T259,T258,T257,T256,T255,T254,T253,T252;
  P T251,T250,T249,T248,T247,T246,T245,T244,T243,T242,T241,T240,T239,T238,T237,T236;
  P T235,T234,T233,T232,T231,T230,T229,T228,T227,T226,T225,T224,T223,T222,T221,T220;
  P T219,T218,T217,T216,T215,T214,T213,T212,T211,T210,T209,T208,T207,T206,T205,T204;
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
  T0 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_51),CHKREF(lit_19)),YPPlist(3,CHKREF(YastYLast_primitiveG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_lift_proceduresX_57 = YPmet(FUNCODEREF(fun_lift_proceduresX_57),CHKREF(lit_50),T0,ENVNUL);
  T3 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T3 != YPfalse) {
    T2 = CHKREF(Yast_linearizeYlift_proceduresX);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_lift_proceduresX_57;
  T1 = CALL2(1,CHKREF(YPdefine_method),T2,T4);
  Yast_linearizeYlift_proceduresX = T1;
  T5 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_51),CHKREF(lit_19)),YPPlist(3,CHKREF(YastYLast_genericG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_lift_proceduresX_58 = YPmet(FUNCODEREF(fun_lift_proceduresX_58),CHKREF(lit_50),T5,ENVNUL);
  T8 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T8 != YPfalse) {
    T7 = CHKREF(Yast_linearizeYlift_proceduresX);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_lift_proceduresX_58;
  T6 = CALL2(1,CHKREF(YPdefine_method),T7,T9);
  Yast_linearizeYlift_proceduresX = T6;
  T10 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_51),CHKREF(lit_19)),YPPlist(3,CHKREF(YastYLast_functionG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_lift_proceduresX_59 = YPmet(FUNCODEREF(fun_lift_proceduresX_59),CHKREF(lit_50),T10,ENVNUL);
  T13 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T13 != YPfalse) {
    T12 = CHKREF(Yast_linearizeYlift_proceduresX);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_lift_proceduresX_59;
  T11 = CALL2(1,CHKREF(YPdefine_method),T12,T14);
  Yast_linearizeYlift_proceduresX = T11;
  lit_58 = YPPsym((P)"<flattened-program>");
  T16 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T15 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_58),T16);
  Yast_linearizeYLflattened_programG = T15;
  lit_59 = YPPsym((P)"program-form");
  T17 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_program_form_60 = YPmet(FUNCODEREF(fun_program_form_60),CHKREF(lit_59),T17,ENVNUL);
  T20 = BOUNDP(Yast_linearizeYprogram_form);
  if (T20 != YPfalse) {
    T19 = CHKREF(Yast_linearizeYprogram_form);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_program_form_60;
  T18 = CALL2(1,CHKREF(YPdefine_method),T19,T21);
  Yast_linearizeYprogram_form = T18;
  lit_60 = YPPsym((P)"program-form-setter");
  T23 = CALL1(1,CHKREF(YruntimeYfalse_or),CHKREF(YastYLprogramG));
  T22 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,T23,CHKREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_program_form_setter_61 = YPmet(FUNCODEREF(fun_program_form_setter_61),CHKREF(lit_60),T22,ENVNUL);
  T26 = BOUNDP(Yast_linearizeYprogram_form_setter);
  if (T26 != YPfalse) {
    T25 = CHKREF(Yast_linearizeYprogram_form_setter);
  } else {
    T25 = YPfalse;
  }
  T27 = fun_program_form_setter_61;
  T24 = CALL2(1,CHKREF(YPdefine_method),T25,T27);
  Yast_linearizeYprogram_form_setter = T24;
  T28 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_62 = YPmet(FUNCODEREF(fun_62),YPfalse,T28,ENVNUL);
  T29 = CALL1(1,CHKREF(YruntimeYfalse_or),CHKREF(YastYLprogramG));
  T30 = fun_62;
  CALLN(1,CHKREF(YPslot),5,CHKREF(Yast_linearizeYLflattened_programG),CHKREF(Yast_linearizeYprogram_form),CHKREF(Yast_linearizeYprogram_form_setter),T29,T30);
  lit_61 = YPPsym((P)"program-quotations");
  T31 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_program_quotations_63 = YPmet(FUNCODEREF(fun_program_quotations_63),CHKREF(lit_61),T31,ENVNUL);
  T34 = BOUNDP(Yast_linearizeYprogram_quotations);
  if (T34 != YPfalse) {
    T33 = CHKREF(Yast_linearizeYprogram_quotations);
  } else {
    T33 = YPfalse;
  }
  T35 = fun_program_quotations_63;
  T32 = CALL2(1,CHKREF(YPdefine_method),T33,T35);
  Yast_linearizeYprogram_quotations = T32;
  lit_62 = YPPsym((P)"program-quotations-setter");
  T36 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_program_quotations_setter_64 = YPmet(FUNCODEREF(fun_program_quotations_setter_64),CHKREF(lit_62),T36,ENVNUL);
  T39 = BOUNDP(Yast_linearizeYprogram_quotations_setter);
  if (T39 != YPfalse) {
    T38 = CHKREF(Yast_linearizeYprogram_quotations_setter);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_program_quotations_setter_64;
  T37 = CALL2(1,CHKREF(YPdefine_method),T38,T40);
  Yast_linearizeYprogram_quotations_setter = T37;
  T41 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T41,ENVNUL);
  T42 = fun_65;
  CALLN(1,CHKREF(YPslot),5,CHKREF(Yast_linearizeYLflattened_programG),CHKREF(Yast_linearizeYprogram_quotations),CHKREF(Yast_linearizeYprogram_quotations_setter),CHKREF(YLanyG),T42);
  lit_63 = YPPsym((P)"program-definitions");
  T43 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_program_definitions_66 = YPmet(FUNCODEREF(fun_program_definitions_66),CHKREF(lit_63),T43,ENVNUL);
  T46 = BOUNDP(Yast_linearizeYprogram_definitions);
  if (T46 != YPfalse) {
    T45 = CHKREF(Yast_linearizeYprogram_definitions);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_program_definitions_66;
  T44 = CALL2(1,CHKREF(YPdefine_method),T45,T47);
  Yast_linearizeYprogram_definitions = T44;
  lit_64 = YPPsym((P)"program-definitions-setter");
  T48 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_program_definitions_setter_67 = YPmet(FUNCODEREF(fun_program_definitions_setter_67),CHKREF(lit_64),T48,ENVNUL);
  T51 = BOUNDP(Yast_linearizeYprogram_definitions_setter);
  if (T51 != YPfalse) {
    T50 = CHKREF(Yast_linearizeYprogram_definitions_setter);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_program_definitions_setter_67;
  T49 = CALL2(1,CHKREF(YPdefine_method),T50,T52);
  Yast_linearizeYprogram_definitions_setter = T49;
  T53 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_68 = YPmet(FUNCODEREF(fun_68),YPfalse,T53,ENVNUL);
  T54 = fun_68;
  CALLN(1,CHKREF(YPslot),5,CHKREF(Yast_linearizeYLflattened_programG),CHKREF(Yast_linearizeYprogram_definitions),CHKREF(Yast_linearizeYprogram_definitions_setter),CHKREF(YLanyG),T54);
  lit_65 = YPPsym((P)"<top-level-form>");
  T56 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T55 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_65),T56);
  Yast_linearizeYLtop_level_formG = T55;
  lit_66 = YPPsym((P)"form-program");
  T57 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_form_program_69 = YPmet(FUNCODEREF(fun_form_program_69),CHKREF(lit_66),T57,ENVNUL);
  T60 = BOUNDP(Yast_linearizeYform_program);
  if (T60 != YPfalse) {
    T59 = CHKREF(Yast_linearizeYform_program);
  } else {
    T59 = YPfalse;
  }
  T61 = fun_form_program_69;
  T58 = CALL2(1,CHKREF(YPdefine_method),T59,T61);
  Yast_linearizeYform_program = T58;
  lit_67 = YPPsym((P)"form-program-setter");
  T62 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YastYLprogramG),CHKREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_form_program_setter_70 = YPmet(FUNCODEREF(fun_form_program_setter_70),CHKREF(lit_67),T62,ENVNUL);
  T65 = BOUNDP(Yast_linearizeYform_program_setter);
  if (T65 != YPfalse) {
    T64 = CHKREF(Yast_linearizeYform_program_setter);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_form_program_setter_70;
  T63 = CALL2(1,CHKREF(YPdefine_method),T64,T66);
  Yast_linearizeYform_program_setter = T63;
  T67 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T67,ENVNUL);
  T68 = fun_71;
  CALLN(1,CHKREF(YPslot),5,CHKREF(Yast_linearizeYLtop_level_formG),CHKREF(Yast_linearizeYform_program),CHKREF(Yast_linearizeYform_program_setter),CHKREF(YastYLprogramG),T68);
  lit_68 = YPPsym((P)"form-quotations");
  T69 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_form_quotations_72 = YPmet(FUNCODEREF(fun_form_quotations_72),CHKREF(lit_68),T69,ENVNUL);
  T72 = BOUNDP(Yast_linearizeYform_quotations);
  if (T72 != YPfalse) {
    T71 = CHKREF(Yast_linearizeYform_quotations);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_form_quotations_72;
  T70 = CALL2(1,CHKREF(YPdefine_method),T71,T73);
  Yast_linearizeYform_quotations = T70;
  lit_69 = YPPsym((P)"form-quotations-setter");
  T74 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_form_quotations_setter_73 = YPmet(FUNCODEREF(fun_form_quotations_setter_73),CHKREF(lit_69),T74,ENVNUL);
  T77 = BOUNDP(Yast_linearizeYform_quotations_setter);
  if (T77 != YPfalse) {
    T76 = CHKREF(Yast_linearizeYform_quotations_setter);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_form_quotations_setter_73;
  T75 = CALL2(1,CHKREF(YPdefine_method),T76,T78);
  Yast_linearizeYform_quotations_setter = T75;
  T79 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_74 = YPmet(FUNCODEREF(fun_74),YPfalse,T79,ENVNUL);
  T80 = fun_74;
  CALLN(1,CHKREF(YPslot),5,CHKREF(Yast_linearizeYLtop_level_formG),CHKREF(Yast_linearizeYform_quotations),CHKREF(Yast_linearizeYform_quotations_setter),CHKREF(YLanyG),T80);
  lit_70 = YPPsym((P)"form-definitions");
  T81 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_form_definitions_75 = YPmet(FUNCODEREF(fun_form_definitions_75),CHKREF(lit_70),T81,ENVNUL);
  T84 = BOUNDP(Yast_linearizeYform_definitions);
  if (T84 != YPfalse) {
    T83 = CHKREF(Yast_linearizeYform_definitions);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_form_definitions_75;
  T82 = CALL2(1,CHKREF(YPdefine_method),T83,T85);
  Yast_linearizeYform_definitions = T82;
  lit_71 = YPPsym((P)"form-definitions-setter");
  T86 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_form_definitions_setter_76 = YPmet(FUNCODEREF(fun_form_definitions_setter_76),CHKREF(lit_71),T86,ENVNUL);
  T89 = BOUNDP(Yast_linearizeYform_definitions_setter);
  if (T89 != YPfalse) {
    T88 = CHKREF(Yast_linearizeYform_definitions_setter);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_form_definitions_setter_76;
  T87 = CALL2(1,CHKREF(YPdefine_method),T88,T90);
  Yast_linearizeYform_definitions_setter = T87;
  T91 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_77 = YPmet(FUNCODEREF(fun_77),YPfalse,T91,ENVNUL);
  T92 = fun_77;
  CALLN(1,CHKREF(YPslot),5,CHKREF(Yast_linearizeYLtop_level_formG),CHKREF(Yast_linearizeYform_definitions),CHKREF(Yast_linearizeYform_definitions_setter),CHKREF(YLanyG),T92);
  lit_72 = YPPsym((P)"<function-definition>");
  T94 = (P)YPpair(CHKREF(Yast_linearizeYLflat_functionG),Ynil);
  T93 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_72),T94);
  Yast_linearizeYLfunction_definitionG = T93;
  lit_73 = YPPsym((P)"function-index");
  T95 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLfunction_definitionG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_function_index_78 = YPmet(FUNCODEREF(fun_function_index_78),CHKREF(lit_73),T95,ENVNUL);
  T98 = BOUNDP(Yast_linearizeYfunction_index);
  if (T98 != YPfalse) {
    T97 = CHKREF(Yast_linearizeYfunction_index);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_function_index_78;
  T96 = CALL2(1,CHKREF(YPdefine_method),T97,T99);
  Yast_linearizeYfunction_index = T96;
  lit_74 = YPPsym((P)"function-index-setter");
  T100 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLfunction_definitionG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_function_index_setter_79 = YPmet(FUNCODEREF(fun_function_index_setter_79),CHKREF(lit_74),T100,ENVNUL);
  T103 = BOUNDP(Yast_linearizeYfunction_index_setter);
  if (T103 != YPfalse) {
    T102 = CHKREF(Yast_linearizeYfunction_index_setter);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_function_index_setter_79;
  T101 = CALL2(1,CHKREF(YPdefine_method),T102,T104);
  Yast_linearizeYfunction_index_setter = T101;
  T105 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T105,ENVNUL);
  T106 = fun_80;
  CALLN(1,CHKREF(YPslot),5,CHKREF(Yast_linearizeYLfunction_definitionG),CHKREF(Yast_linearizeYfunction_index),CHKREF(Yast_linearizeYfunction_index_setter),CHKREF(YLanyG),T106);
  lit_75 = YPPsym((P)"function-temporaries");
  T107 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLfunction_definitionG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_function_temporaries_81 = YPmet(FUNCODEREF(fun_function_temporaries_81),CHKREF(lit_75),T107,ENVNUL);
  T110 = BOUNDP(Yast_linearizeYfunction_temporaries);
  if (T110 != YPfalse) {
    T109 = CHKREF(Yast_linearizeYfunction_temporaries);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_function_temporaries_81;
  T108 = CALL2(1,CHKREF(YPdefine_method),T109,T111);
  Yast_linearizeYfunction_temporaries = T108;
  lit_76 = YPPsym((P)"function-temporaries-setter");
  T112 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLfunction_definitionG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_function_temporaries_setter_82 = YPmet(FUNCODEREF(fun_function_temporaries_setter_82),CHKREF(lit_76),T112,ENVNUL);
  T115 = BOUNDP(Yast_linearizeYfunction_temporaries_setter);
  if (T115 != YPfalse) {
    T114 = CHKREF(Yast_linearizeYfunction_temporaries_setter);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_function_temporaries_setter_82;
  T113 = CALL2(1,CHKREF(YPdefine_method),T114,T116);
  Yast_linearizeYfunction_temporaries_setter = T113;
  T117 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_83 = YPmet(FUNCODEREF(fun_83),YPfalse,T117,ENVNUL);
  T118 = fun_83;
  CALLN(1,CHKREF(YPslot),5,CHKREF(Yast_linearizeYLfunction_definitionG),CHKREF(Yast_linearizeYfunction_temporaries),CHKREF(Yast_linearizeYfunction_temporaries_setter),CHKREF(YLanyG),T118);
  lit_77 = YPPsym((P)"function-registers");
  T119 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLfunction_definitionG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_function_registers_84 = YPmet(FUNCODEREF(fun_function_registers_84),CHKREF(lit_77),T119,ENVNUL);
  T122 = BOUNDP(Yast_linearizeYfunction_registers);
  if (T122 != YPfalse) {
    T121 = CHKREF(Yast_linearizeYfunction_registers);
  } else {
    T121 = YPfalse;
  }
  T123 = fun_function_registers_84;
  T120 = CALL2(1,CHKREF(YPdefine_method),T121,T123);
  Yast_linearizeYfunction_registers = T120;
  lit_78 = YPPsym((P)"function-registers-setter");
  T124 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLfunction_definitionG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_function_registers_setter_85 = YPmet(FUNCODEREF(fun_function_registers_setter_85),CHKREF(lit_78),T124,ENVNUL);
  T127 = BOUNDP(Yast_linearizeYfunction_registers_setter);
  if (T127 != YPfalse) {
    T126 = CHKREF(Yast_linearizeYfunction_registers_setter);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_function_registers_setter_85;
  T125 = CALL2(1,CHKREF(YPdefine_method),T126,T128);
  Yast_linearizeYfunction_registers_setter = T125;
  T129 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_86 = YPmet(FUNCODEREF(fun_86),YPfalse,T129,ENVNUL);
  T130 = fun_86;
  CALLN(1,CHKREF(YPslot),5,CHKREF(Yast_linearizeYLfunction_definitionG),CHKREF(Yast_linearizeYfunction_registers),CHKREF(Yast_linearizeYfunction_registers_setter),CHKREF(YLanyG),T130);
  lit_79 = YPPsym((P)"function-self-recursive?");
  T131 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLfunction_definitionG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_function_self_recursiveQ_87 = YPmet(FUNCODEREF(fun_function_self_recursiveQ_87),CHKREF(lit_79),T131,ENVNUL);
  T134 = BOUNDP(Yast_linearizeYfunction_self_recursiveQ);
  if (T134 != YPfalse) {
    T133 = CHKREF(Yast_linearizeYfunction_self_recursiveQ);
  } else {
    T133 = YPfalse;
  }
  T135 = fun_function_self_recursiveQ_87;
  T132 = CALL2(1,CHKREF(YPdefine_method),T133,T135);
  Yast_linearizeYfunction_self_recursiveQ = T132;
  lit_80 = YPPsym((P)"function-self-recursive?-setter");
  T136 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLfunction_definitionG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_function_self_recursiveQ_setter_88 = YPmet(FUNCODEREF(fun_function_self_recursiveQ_setter_88),CHKREF(lit_80),T136,ENVNUL);
  T139 = BOUNDP(Yast_linearizeYfunction_self_recursiveQ_setter);
  if (T139 != YPfalse) {
    T138 = CHKREF(Yast_linearizeYfunction_self_recursiveQ_setter);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_function_self_recursiveQ_setter_88;
  T137 = CALL2(1,CHKREF(YPdefine_method),T138,T140);
  Yast_linearizeYfunction_self_recursiveQ_setter = T137;
  T141 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_89 = YPmet(FUNCODEREF(fun_89),YPfalse,T141,ENVNUL);
  T142 = fun_89;
  CALLN(1,CHKREF(YPslot),5,CHKREF(Yast_linearizeYLfunction_definitionG),CHKREF(Yast_linearizeYfunction_self_recursiveQ),CHKREF(Yast_linearizeYfunction_self_recursiveQ_setter),CHKREF(YLanyG),T142);
  lit_81 = YPPsym((P)"<primitive-definition>");
  T144 = (P)YPpair(CHKREF(YastYLast_primitiveG),Ynil);
  T143 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_81),T144);
  Yast_linearizeYLprimitive_definitionG = T143;
  T145 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLprimitive_definitionG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_function_temporaries_90 = YPmet(FUNCODEREF(fun_function_temporaries_90),CHKREF(lit_75),T145,ENVNUL);
  T148 = BOUNDP(Yast_linearizeYfunction_temporaries);
  if (T148 != YPfalse) {
    T147 = CHKREF(Yast_linearizeYfunction_temporaries);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_function_temporaries_90;
  T146 = CALL2(1,CHKREF(YPdefine_method),T147,T149);
  Yast_linearizeYfunction_temporaries = T146;
  T150 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLprimitive_definitionG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_function_temporaries_setter_91 = YPmet(FUNCODEREF(fun_function_temporaries_setter_91),CHKREF(lit_76),T150,ENVNUL);
  T153 = BOUNDP(Yast_linearizeYfunction_temporaries_setter);
  if (T153 != YPfalse) {
    T152 = CHKREF(Yast_linearizeYfunction_temporaries_setter);
  } else {
    T152 = YPfalse;
  }
  T154 = fun_function_temporaries_setter_91;
  T151 = CALL2(1,CHKREF(YPdefine_method),T152,T154);
  Yast_linearizeYfunction_temporaries_setter = T151;
  T155 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_92 = YPmet(FUNCODEREF(fun_92),YPfalse,T155,ENVNUL);
  T156 = fun_92;
  CALLN(1,CHKREF(YPslot),5,CHKREF(Yast_linearizeYLprimitive_definitionG),CHKREF(Yast_linearizeYfunction_temporaries),CHKREF(Yast_linearizeYfunction_temporaries_setter),CHKREF(YLanyG),T156);
  T157 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLprimitive_definitionG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_function_registers_93 = YPmet(FUNCODEREF(fun_function_registers_93),CHKREF(lit_77),T157,ENVNUL);
  T160 = BOUNDP(Yast_linearizeYfunction_registers);
  if (T160 != YPfalse) {
    T159 = CHKREF(Yast_linearizeYfunction_registers);
  } else {
    T159 = YPfalse;
  }
  T161 = fun_function_registers_93;
  T158 = CALL2(1,CHKREF(YPdefine_method),T159,T161);
  Yast_linearizeYfunction_registers = T158;
  T162 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLprimitive_definitionG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_function_registers_setter_94 = YPmet(FUNCODEREF(fun_function_registers_setter_94),CHKREF(lit_78),T162,ENVNUL);
  T165 = BOUNDP(Yast_linearizeYfunction_registers_setter);
  if (T165 != YPfalse) {
    T164 = CHKREF(Yast_linearizeYfunction_registers_setter);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_function_registers_setter_94;
  T163 = CALL2(1,CHKREF(YPdefine_method),T164,T166);
  Yast_linearizeYfunction_registers_setter = T163;
  T167 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_95 = YPmet(FUNCODEREF(fun_95),YPfalse,T167,ENVNUL);
  T168 = fun_95;
  CALLN(1,CHKREF(YPslot),5,CHKREF(Yast_linearizeYLprimitive_definitionG),CHKREF(Yast_linearizeYfunction_registers),CHKREF(Yast_linearizeYfunction_registers_setter),CHKREF(YLanyG),T168);
  T169 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLprimitive_definitionG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_function_self_recursiveQ_96 = YPmet(FUNCODEREF(fun_function_self_recursiveQ_96),CHKREF(lit_79),T169,ENVNUL);
  T172 = BOUNDP(Yast_linearizeYfunction_self_recursiveQ);
  if (T172 != YPfalse) {
    T171 = CHKREF(Yast_linearizeYfunction_self_recursiveQ);
  } else {
    T171 = YPfalse;
  }
  T173 = fun_function_self_recursiveQ_96;
  T170 = CALL2(1,CHKREF(YPdefine_method),T171,T173);
  Yast_linearizeYfunction_self_recursiveQ = T170;
  T174 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLprimitive_definitionG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_function_self_recursiveQ_setter_97 = YPmet(FUNCODEREF(fun_function_self_recursiveQ_setter_97),CHKREF(lit_80),T174,ENVNUL);
  T177 = BOUNDP(Yast_linearizeYfunction_self_recursiveQ_setter);
  if (T177 != YPfalse) {
    T176 = CHKREF(Yast_linearizeYfunction_self_recursiveQ_setter);
  } else {
    T176 = YPfalse;
  }
  T178 = fun_function_self_recursiveQ_setter_97;
  T175 = CALL2(1,CHKREF(YPdefine_method),T176,T178);
  Yast_linearizeYfunction_self_recursiveQ_setter = T175;
  T179 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_98 = YPmet(FUNCODEREF(fun_98),YPfalse,T179,ENVNUL);
  T180 = fun_98;
  CALLN(1,CHKREF(YPslot),5,CHKREF(Yast_linearizeYLprimitive_definitionG),CHKREF(Yast_linearizeYfunction_self_recursiveQ),CHKREF(Yast_linearizeYfunction_self_recursiveQ_setter),CHKREF(YLanyG),T180);
  lit_82 = YPPsym((P)"<closure-creation>");
  T182 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T181 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_82),T182);
  Yast_linearizeYLclosure_creationG = T181;
  lit_83 = YPPsym((P)"closure-creation-index");
  T183 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_closure_creation_index_99 = YPmet(FUNCODEREF(fun_closure_creation_index_99),CHKREF(lit_83),T183,ENVNUL);
  T186 = BOUNDP(Yast_linearizeYclosure_creation_index);
  if (T186 != YPfalse) {
    T185 = CHKREF(Yast_linearizeYclosure_creation_index);
  } else {
    T185 = YPfalse;
  }
  T187 = fun_closure_creation_index_99;
  T184 = CALL2(1,CHKREF(YPdefine_method),T185,T187);
  Yast_linearizeYclosure_creation_index = T184;
  lit_84 = YPPsym((P)"closure-creation-index-setter");
  T188 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_closure_creation_index_setter_100 = YPmet(FUNCODEREF(fun_closure_creation_index_setter_100),CHKREF(lit_84),T188,ENVNUL);
  T191 = BOUNDP(Yast_linearizeYclosure_creation_index_setter);
  if (T191 != YPfalse) {
    T190 = CHKREF(Yast_linearizeYclosure_creation_index_setter);
  } else {
    T190 = YPfalse;
  }
  T192 = fun_closure_creation_index_setter_100;
  T189 = CALL2(1,CHKREF(YPdefine_method),T190,T192);
  Yast_linearizeYclosure_creation_index_setter = T189;
  T193 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_101 = YPmet(FUNCODEREF(fun_101),YPfalse,T193,ENVNUL);
  T194 = fun_101;
  CALLN(1,CHKREF(YPslot),5,CHKREF(Yast_linearizeYLclosure_creationG),CHKREF(Yast_linearizeYclosure_creation_index),CHKREF(Yast_linearizeYclosure_creation_index_setter),CHKREF(YLanyG),T194);
  lit_85 = YPPsym((P)"closure-creation-bindings");
  T195 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_closure_creation_bindings_102 = YPmet(FUNCODEREF(fun_closure_creation_bindings_102),CHKREF(lit_85),T195,ENVNUL);
  T198 = BOUNDP(Yast_linearizeYclosure_creation_bindings);
  if (T198 != YPfalse) {
    T197 = CHKREF(Yast_linearizeYclosure_creation_bindings);
  } else {
    T197 = YPfalse;
  }
  T199 = fun_closure_creation_bindings_102;
  T196 = CALL2(1,CHKREF(YPdefine_method),T197,T199);
  Yast_linearizeYclosure_creation_bindings = T196;
  lit_86 = YPPsym((P)"closure-creation-bindings-setter");
  T200 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_closure_creation_bindings_setter_103 = YPmet(FUNCODEREF(fun_closure_creation_bindings_setter_103),CHKREF(lit_86),T200,ENVNUL);
  T203 = BOUNDP(Yast_linearizeYclosure_creation_bindings_setter);
  if (T203 != YPfalse) {
    T202 = CHKREF(Yast_linearizeYclosure_creation_bindings_setter);
  } else {
    T202 = YPfalse;
  }
  T204 = fun_closure_creation_bindings_setter_103;
  T201 = CALL2(1,CHKREF(YPdefine_method),T202,T204);
  Yast_linearizeYclosure_creation_bindings_setter = T201;
  T205 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_104 = YPmet(FUNCODEREF(fun_104),YPfalse,T205,ENVNUL);
  T206 = fun_104;
  CALLN(1,CHKREF(YPslot),5,CHKREF(Yast_linearizeYLclosure_creationG),CHKREF(Yast_linearizeYclosure_creation_bindings),CHKREF(Yast_linearizeYclosure_creation_bindings_setter),CHKREF(YLanyG),T206);
  lit_87 = YPPsym((P)"closure-creation-free");
  T207 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_closure_creation_free_105 = YPmet(FUNCODEREF(fun_closure_creation_free_105),CHKREF(lit_87),T207,ENVNUL);
  T210 = BOUNDP(Yast_linearizeYclosure_creation_free);
  if (T210 != YPfalse) {
    T209 = CHKREF(Yast_linearizeYclosure_creation_free);
  } else {
    T209 = YPfalse;
  }
  T211 = fun_closure_creation_free_105;
  T208 = CALL2(1,CHKREF(YPdefine_method),T209,T211);
  Yast_linearizeYclosure_creation_free = T208;
  lit_88 = YPPsym((P)"closure-creation-free-setter");
  T212 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_closure_creation_free_setter_106 = YPmet(FUNCODEREF(fun_closure_creation_free_setter_106),CHKREF(lit_88),T212,ENVNUL);
  T215 = BOUNDP(Yast_linearizeYclosure_creation_free_setter);
  if (T215 != YPfalse) {
    T214 = CHKREF(Yast_linearizeYclosure_creation_free_setter);
  } else {
    T214 = YPfalse;
  }
  T216 = fun_closure_creation_free_setter_106;
  T213 = CALL2(1,CHKREF(YPdefine_method),T214,T216);
  Yast_linearizeYclosure_creation_free_setter = T213;
  T217 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_107 = YPmet(FUNCODEREF(fun_107),YPfalse,T217,ENVNUL);
  T218 = fun_107;
  CALLN(1,CHKREF(YPslot),5,CHKREF(Yast_linearizeYLclosure_creationG),CHKREF(Yast_linearizeYclosure_creation_free),CHKREF(Yast_linearizeYclosure_creation_free_setter),CHKREF(YLanyG),T218);
  lit_89 = YPPsym((P)"flatten-seqs");
  T219 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_flatten_seqs_108 = YPmet(FUNCODEREF(fun_flatten_seqs_108),CHKREF(lit_89),T219,ENVNUL);
  T222 = BOUNDP(Yast_linearizeYflatten_seqs);
  if (T222 != YPfalse) {
    T221 = CHKREF(Yast_linearizeYflatten_seqs);
  } else {
    T221 = YPfalse;
  }
  T223 = fun_flatten_seqs_108;
  T220 = CALL2(1,CHKREF(YPdefine_method),T221,T223);
  Yast_linearizeYflatten_seqs = T220;
  lit_90 = YPPsym((P)"s");
  lit_91 = YPPsym((P)"r");
  lit_92 = YPPsym((P)"inner");
  lit_93 = YPPsym((P)"ss");
  T226 = YPsig(YPPlist(2,CHKREF(lit_93),CHKREF(lit_91)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_inner_109 = YPmet(FUNCODEREF(fun_inner_109),CHKREF(lit_92),T226,ENVNUL);
  T225 = YPsig(YPPlist(2,CHKREF(lit_90),CHKREF(lit_91)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_loop_110 = YPmet(FUNCODEREF(fun_loop_110),CHKREF(lit_20),T225,ENVNUL);
  T224 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLsequentialG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_flatten_seqs_111 = YPmet(FUNCODEREF(fun_flatten_seqs_111),CHKREF(lit_89),T224,ENVNUL);
  T229 = BOUNDP(Yast_linearizeYflatten_seqs);
  if (T229 != YPfalse) {
    T228 = CHKREF(Yast_linearizeYflatten_seqs);
  } else {
    T228 = YPfalse;
  }
  T230 = fun_flatten_seqs_111;
  T227 = CALL2(1,CHKREF(YPdefine_method),T228,T230);
  Yast_linearizeYflatten_seqs = T227;
  lit_94 = YPPsym((P)"as-top-level-forms");
  lit_95 = YPPsym((P)"programs");
  T232 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_112 = YPmet(FUNCODEREF(fun_112),YPfalse,T232,ENVNUL);
  T231 = YPsig(YPPlist(1,CHKREF(lit_95)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_as_top_level_forms_113 = YPmet(FUNCODEREF(fun_as_top_level_forms_113),CHKREF(lit_94),T231,ENVNUL);
  T235 = BOUNDP(Yast_linearizeYas_top_level_forms);
  if (T235 != YPfalse) {
    T234 = CHKREF(Yast_linearizeYas_top_level_forms);
  } else {
    T234 = YPfalse;
  }
  T236 = fun_as_top_level_forms_113;
  T233 = CALL2(1,CHKREF(YPdefine_method),T234,T236);
  Yast_linearizeYas_top_level_forms = T233;
  lit_96 = YPPsym((P)"extract-things!");
  T238 = YPsig(YPPlist(1,CHKREF(lit_18)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_114 = YPmet(FUNCODEREF(fun_114),YPfalse,T238,ENVNUL);
  T237 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_extract_thingsX_115 = YPmet(FUNCODEREF(fun_extract_thingsX_115),CHKREF(lit_96),T237,ENVNUL);
  T241 = BOUNDP(Yast_linearizeYextract_thingsX);
  if (T241 != YPfalse) {
    T240 = CHKREF(Yast_linearizeYextract_thingsX);
  } else {
    T240 = YPfalse;
  }
  T242 = fun_extract_thingsX_115;
  T239 = CALL2(1,CHKREF(YPdefine_method),T240,T242);
  Yast_linearizeYextract_thingsX = T239;
  lit_97 = YPPsym((P)"extract!");
  lit_98 = YPPsym((P)"result");
  T243 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_18),CHKREF(lit_98)),YPPlist(3,CHKREF(YastYLprogramG),CHKREF(Yast_linearizeYLtop_level_formG),CHKREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_extractX_116 = YPmet(FUNCODEREF(fun_extractX_116),CHKREF(lit_97),T243,ENVNUL);
  T246 = BOUNDP(Yast_linearizeYextractX);
  if (T246 != YPfalse) {
    T245 = CHKREF(Yast_linearizeYextractX);
  } else {
    T245 = YPfalse;
  }
  T247 = fun_extractX_116;
  T244 = CALL2(1,CHKREF(YPdefine_method),T245,T247);
  Yast_linearizeYextractX = T244;
  lit_99 = YPPsym((P)"quotation");
  T248 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_18),CHKREF(lit_98)),YPPlist(3,CHKREF(YastYLconstantG),CHKREF(Yast_linearizeYLtop_level_formG),CHKREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_extractX_117 = YPmet(FUNCODEREF(fun_extractX_117),CHKREF(lit_97),T248,ENVNUL);
  T251 = BOUNDP(Yast_linearizeYextractX);
  if (T251 != YPfalse) {
    T250 = CHKREF(Yast_linearizeYextractX);
  } else {
    T250 = YPfalse;
  }
  T252 = fun_extractX_117;
  T249 = CALL2(1,CHKREF(YPdefine_method),T250,T252);
  Yast_linearizeYextractX = T249;
  T253 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_18),CHKREF(lit_98)),YPPlist(3,CHKREF(YastYLraw_constantG),CHKREF(Yast_linearizeYLtop_level_formG),CHKREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_extractX_118 = YPmet(FUNCODEREF(fun_extractX_118),CHKREF(lit_97),T253,ENVNUL);
  T256 = BOUNDP(Yast_linearizeYextractX);
  if (T256 != YPfalse) {
    T255 = CHKREF(Yast_linearizeYextractX);
  } else {
    T255 = YPfalse;
  }
  T257 = fun_extractX_118;
  T254 = CALL2(1,CHKREF(YPdefine_method),T255,T257);
  Yast_linearizeYextractX = T254;
  lit_100 = YPPsym((P)"binding");
  T262 = YPsig(YPPlist(1,CHKREF(lit_100)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T261 = fun_119 = YPmet(FUNCODEREF(fun_119),YPfalse,T262,ENVNUL);
  T260 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_18),CHKREF(lit_98)),YPPlist(3,CHKREF(Yast_linearizeYLflat_functionG),CHKREF(Yast_linearizeYLtop_level_formG),CHKREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  T259 = fun_extractX_120 = YPmet(FUNCODEREF(fun_extractX_120),CHKREF(lit_97),T260,ENVNUL);
  T266 = BOUNDP(Yast_linearizeYextractX);
  if (T266 != YPfalse) {
    T265 = CHKREF(Yast_linearizeYextractX);
  } else {
    T265 = YPfalse;
  }
  T267 = fun_extractX_120;
  T264 = CALL2(1,CHKREF(YPdefine_method),T265,T267);
  T263 = Yast_linearizeYextractX = T264;
  T258 = T263;
  return T258;
}

P Yast_linearizeY___main_2___() {
  P T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107;
  P T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91;
  P T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75;
  P T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59;
  P T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T0 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_18),CHKREF(lit_98)),YPPlist(3,CHKREF(YastYLast_primitive_definitionG),CHKREF(Yast_linearizeYLtop_level_formG),CHKREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_extractX_121 = YPmet(FUNCODEREF(fun_extractX_121),CHKREF(lit_97),T0,ENVNUL);
  T3 = BOUNDP(Yast_linearizeYextractX);
  if (T3 != YPfalse) {
    T2 = CHKREF(Yast_linearizeYextractX);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_extractX_121;
  T1 = CALL2(1,CHKREF(YPdefine_method),T2,T4);
  Yast_linearizeYextractX = T1;
  lit_101 = YPPsym((P)"adjoin-definition!");
  lit_102 = YPPsym((P)"debug-name");
  lit_103 = YPPsym((P)"signature");
  lit_104 = YPPsym((P)"body");
  lit_105 = YPPsym((P)"free");
  T5 = YPsig(YPPlist(7,CHKREF(lit_18),CHKREF(lit_98),CHKREF(lit_102),CHKREF(lit_100),CHKREF(lit_103),CHKREF(lit_104),CHKREF(lit_105)),YPPlist(7,CHKREF(Yast_linearizeYLtop_level_formG),CHKREF(Yast_linearizeYLflattened_programG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)7),CHKREF(YLanyG),Ynil);
  fun_adjoin_definitionX_122 = YPmet(FUNCODEREF(fun_adjoin_definitionX_122),CHKREF(lit_101),T5,ENVNUL);
  T8 = BOUNDP(Yast_linearizeYadjoin_definitionX);
  if (T8 != YPfalse) {
    T7 = CHKREF(Yast_linearizeYadjoin_definitionX);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_adjoin_definitionX_122;
  T6 = CALL2(1,CHKREF(YPdefine_method),T7,T9);
  Yast_linearizeYadjoin_definitionX = T6;
  lit_106 = YPPsym((P)"split-program");
  lit_107 = YPPsym((P)"max-count");
  T10 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_107)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_split_program_123 = YPmet(FUNCODEREF(fun_split_program_123),CHKREF(lit_106),T10,ENVNUL);
  T13 = BOUNDP(Yast_linearizeYsplit_program);
  if (T13 != YPfalse) {
    T12 = CHKREF(Yast_linearizeYsplit_program);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_split_program_123;
  T11 = CALL2(1,CHKREF(YPdefine_method),T12,T14);
  Yast_linearizeYsplit_program = T11;
  lit_108 = YPPsym((P)"forms");
  lit_109 = YPPsym((P)"es");
  lit_110 = YPPsym((P)"count");
  T17 = YPsig(YPPlist(3,CHKREF(lit_21),CHKREF(lit_109),CHKREF(lit_110)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_inner_124 = YPmet(FUNCODEREF(fun_inner_124),CHKREF(lit_92),T17,ENVNUL);
  T16 = YPsig(YPPlist(2,CHKREF(lit_108),CHKREF(lit_90)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_loop_125 = YPmet(FUNCODEREF(fun_loop_125),CHKREF(lit_20),T16,ENVNUL);
  T15 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_107)),YPPlist(2,CHKREF(YastYLsequentialG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_split_program_126 = YPmet(FUNCODEREF(fun_split_program_126),CHKREF(lit_106),T15,ENVNUL);
  T20 = BOUNDP(Yast_linearizeYsplit_program);
  if (T20 != YPfalse) {
    T19 = CHKREF(Yast_linearizeYsplit_program);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_split_program_126;
  T18 = CALL2(1,CHKREF(YPdefine_method),T19,T21);
  Yast_linearizeYsplit_program = T18;
  lit_111 = YPPsym((P)"closurize-main!");
  lit_112 = YPPsym((P)"calls");
  lit_113 = YPPsym((P)"defns");
  lit_114 = YPsb((P)"---main-");
  lit_115 = YPsb((P)"---");
  lit_116 = YPPsym((P)"predefined");
  T23 = YPsig(YPPlist(4,CHKREF(lit_112),CHKREF(lit_113),CHKREF(lit_55),CHKREF(lit_108)),YPPlist(4,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_loop_127 = YPmet(FUNCODEREF(fun_loop_127),CHKREF(lit_20),T23,ENVNUL);
  T22 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_91),CHKREF(lit_107)),YPPlist(3,CHKREF(Yast_linearizeYLflattened_programG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(Yast_linearizeYLflattened_programG),Ynil);
  fun_closurize_mainX_128 = YPmet(FUNCODEREF(fun_closurize_mainX_128),CHKREF(lit_111),T22,ENVNUL);
  T26 = BOUNDP(Yast_linearizeYclosurize_mainX);
  if (T26 != YPfalse) {
    T25 = CHKREF(Yast_linearizeYclosurize_mainX);
  } else {
    T25 = YPfalse;
  }
  T27 = fun_closurize_mainX_128;
  T24 = CALL2(1,CHKREF(YPdefine_method),T25,T27);
  Yast_linearizeYclosurize_mainX = T24;
  lit_117 = YPPsym((P)"gather-temporaries!");
  lit_118 = YPPsym((P)"def");
  T29 = YPsig(YPPlist(1,CHKREF(lit_118)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_129 = YPmet(FUNCODEREF(fun_129),YPfalse,T29,ENVNUL);
  T28 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_gather_temporariesX_130 = YPmet(FUNCODEREF(fun_gather_temporariesX_130),CHKREF(lit_117),T28,ENVNUL);
  T32 = BOUNDP(Yast_linearizeYgather_temporariesX);
  if (T32 != YPfalse) {
    T31 = CHKREF(Yast_linearizeYgather_temporariesX);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_gather_temporariesX_130;
  T30 = CALL2(1,CHKREF(YPdefine_method),T31,T33);
  Yast_linearizeYgather_temporariesX = T30;
  lit_119 = YPPsym((P)"collect-temporaries!");
  T34 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_51),CHKREF(lit_91)),YPPlist(3,CHKREF(YastYLprogramG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_collect_temporariesX_131 = YPmet(FUNCODEREF(fun_collect_temporariesX_131),CHKREF(lit_119),T34,ENVNUL);
  T37 = BOUNDP(Yast_linearizeYcollect_temporariesX);
  if (T37 != YPfalse) {
    T36 = CHKREF(Yast_linearizeYcollect_temporariesX);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_collect_temporariesX_131;
  T35 = CALL2(1,CHKREF(YPdefine_method),T36,T38);
  Yast_linearizeYcollect_temporariesX = T35;
  T39 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_51),CHKREF(lit_91)),YPPlist(3,CHKREF(YastYLlocal_referenceG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_collect_temporariesX_132 = YPmet(FUNCODEREF(fun_collect_temporariesX_132),CHKREF(lit_119),T39,ENVNUL);
  T42 = BOUNDP(Yast_linearizeYcollect_temporariesX);
  if (T42 != YPfalse) {
    T41 = CHKREF(Yast_linearizeYcollect_temporariesX);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_collect_temporariesX_132;
  T40 = CALL2(1,CHKREF(YPdefine_method),T41,T43);
  Yast_linearizeYcollect_temporariesX = T40;
  T44 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_51),CHKREF(lit_91)),YPPlist(3,CHKREF(YastYLfix_letG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_collect_temporariesX_133 = YPmet(FUNCODEREF(fun_collect_temporariesX_133),CHKREF(lit_119),T44,ENVNUL);
  T47 = BOUNDP(Yast_linearizeYcollect_temporariesX);
  if (T47 != YPfalse) {
    T46 = CHKREF(Yast_linearizeYcollect_temporariesX);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_collect_temporariesX_133;
  T45 = CALL2(1,CHKREF(YPdefine_method),T46,T48);
  Yast_linearizeYcollect_temporariesX = T45;
  T49 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_51),CHKREF(lit_91)),YPPlist(3,CHKREF(YastYLlocalsG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_collect_temporariesX_134 = YPmet(FUNCODEREF(fun_collect_temporariesX_134),CHKREF(lit_119),T49,ENVNUL);
  T52 = BOUNDP(Yast_linearizeYcollect_temporariesX);
  if (T52 != YPfalse) {
    T51 = CHKREF(Yast_linearizeYcollect_temporariesX);
  } else {
    T51 = YPfalse;
  }
  T53 = fun_collect_temporariesX_134;
  T50 = CALL2(1,CHKREF(YPdefine_method),T51,T53);
  Yast_linearizeYcollect_temporariesX = T50;
  lit_120 = YPPsym((P)"adjoin-temporary-variables!");
  lit_121 = YPPsym((P)"new-bindings");
  lit_122 = YPPsym((P)"adjoin");
  lit_123 = YPPsym((P)"temps");
  T55 = YPsig(YPPlist(2,CHKREF(lit_123),CHKREF(lit_19)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_adjoin_135 = YPmet(FUNCODEREF(fun_adjoin_135),CHKREF(lit_122),T55,ENVNUL);
  T54 = YPsig(YPPlist(2,CHKREF(lit_51),CHKREF(lit_121)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_adjoin_temporary_variablesX_136 = YPmet(FUNCODEREF(fun_adjoin_temporary_variablesX_136),CHKREF(lit_120),T54,ENVNUL);
  T58 = BOUNDP(Yast_linearizeYadjoin_temporary_variablesX);
  if (T58 != YPfalse) {
    T57 = CHKREF(Yast_linearizeYadjoin_temporary_variablesX);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_adjoin_temporary_variablesX_136;
  T56 = CALL2(1,CHKREF(YPdefine_method),T57,T59);
  Yast_linearizeYadjoin_temporary_variablesX = T56;
  lit_124 = YPPsym((P)"<renamed-local-binding>");
  T61 = (P)YPpair(CHKREF(YastYLlocal_bindingG),Ynil);
  T60 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_124),T61);
  Yast_linearizeYLrenamed_local_bindingG = T60;
  lit_125 = YPPsym((P)"binding-index");
  T62 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_binding_index_137 = YPmet(FUNCODEREF(fun_binding_index_137),CHKREF(lit_125),T62,ENVNUL);
  T65 = BOUNDP(Yast_linearizeYbinding_index);
  if (T65 != YPfalse) {
    T64 = CHKREF(Yast_linearizeYbinding_index);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_binding_index_137;
  T63 = CALL2(1,CHKREF(YPdefine_method),T64,T66);
  Yast_linearizeYbinding_index = T63;
  lit_126 = YPPsym((P)"binding-index-setter");
  T67 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_binding_index_setter_138 = YPmet(FUNCODEREF(fun_binding_index_setter_138),CHKREF(lit_126),T67,ENVNUL);
  T70 = BOUNDP(Yast_linearizeYbinding_index_setter);
  if (T70 != YPfalse) {
    T69 = CHKREF(Yast_linearizeYbinding_index_setter);
  } else {
    T69 = YPfalse;
  }
  T71 = fun_binding_index_setter_138;
  T68 = CALL2(1,CHKREF(YPdefine_method),T69,T71);
  Yast_linearizeYbinding_index_setter = T68;
  T72 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_139 = YPmet(FUNCODEREF(fun_139),YPfalse,T72,ENVNUL);
  T73 = fun_139;
  CALLN(1,CHKREF(YPslot),5,CHKREF(Yast_linearizeYLrenamed_local_bindingG),CHKREF(Yast_linearizeYbinding_index),CHKREF(Yast_linearizeYbinding_index_setter),CHKREF(YLanyG),T73);
  Yast_linearizeYTrenaming_bindings_counterT = YPint((P)0);
  lit_127 = YPPsym((P)"new-renamed-binding");
  T74 = YPsig(YPPlist(1,CHKREF(lit_100)),YPPlist(1,CHKREF(YastYLlocal_bindingG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_new_renamed_binding_140 = YPmet(FUNCODEREF(fun_new_renamed_binding_140),CHKREF(lit_127),T74,ENVNUL);
  T77 = BOUNDP(Yast_linearizeYnew_renamed_binding);
  if (T77 != YPfalse) {
    T76 = CHKREF(Yast_linearizeYnew_renamed_binding);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_new_renamed_binding_140;
  T75 = CALL2(1,CHKREF(YPdefine_method),T76,T78);
  Yast_linearizeYnew_renamed_binding = T75;
  lit_128 = YPPsym((P)"register-allocate!");
  T80 = YPsig(YPPlist(1,CHKREF(lit_118)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_141 = YPmet(FUNCODEREF(fun_141),YPfalse,T80,ENVNUL);
  T79 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_register_allocateX_142 = YPmet(FUNCODEREF(fun_register_allocateX_142),CHKREF(lit_128),T79,ENVNUL);
  T83 = BOUNDP(Yast_linearizeYregister_allocateX);
  if (T83 != YPfalse) {
    T82 = CHKREF(Yast_linearizeYregister_allocateX);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_register_allocateX_142;
  T81 = CALL2(1,CHKREF(YPdefine_method),T82,T84);
  Yast_linearizeYregister_allocateX = T81;
  lit_129 = YPPsym((P)"allocate-register");
  lit_130 = YPPsym((P)"val?");
  T85 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_51),CHKREF(lit_130)),YPPlist(3,CHKREF(YastYLcomputed_programG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_allocate_register_143 = YPmet(FUNCODEREF(fun_allocate_register_143),CHKREF(lit_129),T85,ENVNUL);
  T88 = BOUNDP(Yast_linearizeYallocate_register);
  if (T88 != YPfalse) {
    T87 = CHKREF(Yast_linearizeYallocate_register);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_allocate_register_143;
  T86 = CALL2(1,CHKREF(YPdefine_method),T87,T89);
  Yast_linearizeYallocate_register = T86;
  lit_131 = YPPsym((P)"collect-registers!");
  T90 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_51),CHKREF(lit_130)),YPPlist(3,CHKREF(YastYLcomputed_programG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_collect_registersX_144 = YPmet(FUNCODEREF(fun_collect_registersX_144),CHKREF(lit_131),T90,ENVNUL);
  T93 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T93 != YPfalse) {
    T92 = CHKREF(Yast_linearizeYcollect_registersX);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_collect_registersX_144;
  T91 = CALL2(1,CHKREF(YPdefine_method),T92,T94);
  Yast_linearizeYcollect_registersX = T91;
  T96 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_loop_145 = YPmet(FUNCODEREF(fun_loop_145),CHKREF(lit_20),T96,ENVNUL);
  T95 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_51),CHKREF(lit_130)),YPPlist(3,CHKREF(YastYLsequentialG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_collect_registersX_146 = YPmet(FUNCODEREF(fun_collect_registersX_146),CHKREF(lit_131),T95,ENVNUL);
  T99 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T99 != YPfalse) {
    T98 = CHKREF(Yast_linearizeYcollect_registersX);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_collect_registersX_146;
  T97 = CALL2(1,CHKREF(YPdefine_method),T98,T100);
  Yast_linearizeYcollect_registersX = T97;
  T101 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_51),CHKREF(lit_130)),YPPlist(3,CHKREF(YastYLpassive_programG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_collect_registersX_147 = YPmet(FUNCODEREF(fun_collect_registersX_147),CHKREF(lit_131),T101,ENVNUL);
  T104 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T104 != YPfalse) {
    T103 = CHKREF(Yast_linearizeYcollect_registersX);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_collect_registersX_147;
  T102 = CALL2(1,CHKREF(YPdefine_method),T103,T105);
  Yast_linearizeYcollect_registersX = T102;
  T107 = YPsig(YPPlist(1,CHKREF(lit_118)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_148 = YPmet(FUNCODEREF(fun_148),YPfalse,T107,ENVNUL);
  T106 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_51),CHKREF(lit_130)),YPPlist(3,CHKREF(Yast_linearizeYLtop_level_formG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_collect_registersX_149 = YPmet(FUNCODEREF(fun_collect_registersX_149),CHKREF(lit_131),T106,ENVNUL);
  T110 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T110 != YPfalse) {
    T109 = CHKREF(Yast_linearizeYcollect_registersX);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_collect_registersX_149;
  T108 = CALL2(1,CHKREF(YPdefine_method),T109,T111);
  Yast_linearizeYcollect_registersX = T108;
  T112 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_51),CHKREF(lit_130)),YPPlist(3,CHKREF(Yast_linearizeYLflat_functionG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_collect_registersX_150 = YPmet(FUNCODEREF(fun_collect_registersX_150),CHKREF(lit_131),T112,ENVNUL);
  T115 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T115 != YPfalse) {
    T114 = CHKREF(Yast_linearizeYcollect_registersX);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_collect_registersX_150;
  T113 = CALL2(1,CHKREF(YPdefine_method),T114,T116);
  Yast_linearizeYcollect_registersX = T113;
  T117 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_51),CHKREF(lit_130)),YPPlist(3,CHKREF(Yast_linearizeYLprimitive_definitionG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_collect_registersX_151 = YPmet(FUNCODEREF(fun_collect_registersX_151),CHKREF(lit_131),T117,ENVNUL);
  T120 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T120 != YPfalse) {
    T119 = CHKREF(Yast_linearizeYcollect_registersX);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_collect_registersX_151;
  T118 = CALL2(1,CHKREF(YPdefine_method),T119,T121);
  Yast_linearizeYcollect_registersX = T118;
  T122 = YPfalse;
  return T122;
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
  {"current-gc-state", &module_info_runtime, "current-gc-state"},
  {"odd?", &module_info_runtime, "odd?"},
  {"$proto-boot-module-name", &module_info_ast, "$proto-boot-module-name"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"binding-name", &module_info_ast, "binding-name"},
  {"and", &module_info_macros, "and"},
  {"%slot", &module_info_boot, "%slot"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"%selt", &module_info_boot, "%selt"},
  {"<log>", &module_info_boot, "<log>"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"<local-binding>", &module_info_ast, "<local-binding>"},
  {"%im", &module_info_boot, "%im"},
  {"call-with-string-input-port", &module_info_runtime, "call-with-string-input-port"},
  {"binding-info-setter", &module_info_ast, "binding-info-setter"},
  {"%iu", &module_info_boot, "%iu"},
  {"fabs", &module_info_runtime, "fabs"},
  {"module-syntax-environment", &module_info_ast, "module-syntax-environment"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"ct", &module_info_boot, "ct"},
  {"pos", &module_info_runtime, "pos"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"neg", &module_info_runtime, "neg"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"monitor-main-thunk", &module_info_ast, "monitor-main-thunk"},
  {"push", &module_info_runtime, "push"},
  {"function-signature", &module_info_ast, "function-signature"},
  {"as-uppercase", &module_info_runtime, "as-uppercase"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"from-below", &module_info_runtime, "from-below"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"signature-value-setter", &module_info_ast, "signature-value-setter"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"close-input-port", &module_info_runtime, "close-input-port"},
  {"%i<", &module_info_boot, "%i<"},
  {"<locals>", &module_info_ast, "<locals>"},
  {"not", &module_info_boot, "not"},
  {"~=", &module_info_runtime, "~="},
  {"slot-value", &module_info_boot, "slot-value"},
  {"<any>", &module_info_boot, "<any>"},
  {"locals-bindings", &module_info_ast, "locals-bindings"},
  {"from-below-by", &module_info_runtime, "from-below-by"},
  {"report-undefined-global-bindings", &module_info_ast, "report-undefined-global-bindings"},
  {"%i+", &module_info_boot, "%i+"},
  {"do3", &module_info_runtime, "do3"},
  {"reference-called-function?-setter", &module_info_ast, "reference-called-function?-setter"},
  {"<union>", &module_info_boot, "<union>"},
  {"assq", &module_info_runtime, "assq"},
  {"%snul", &module_info_boot, "%snul"},
  {"module-target-environment", &module_info_ast, "module-target-environment"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"write-string", &module_info_runtime, "write-string"},
  {"let", &module_info_boot, "let"},
  {"binding-global-box-setter", &module_info_ast, "binding-global-box-setter"},
  {"pushf", &module_info_macros, "pushf"},
  {"objectify", &module_info_ast, "objectify"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"case-insensitive-string-equal", &module_info_runtime, "case-insensitive-string-equal"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"pop-last!", &module_info_runtime, "pop-last!"},
  {"module-exports", &module_info_ast, "module-exports"},
  {"sub-setter", &module_info_runtime, "sub-setter"},
  {"function-body-setter", &module_info_ast, "function-body-setter"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"loc", &module_info_boot, "loc"},
  {"to-digit", &module_info_runtime, "to-digit"},
  {"environment-uses-modules", &module_info_ast, "environment-uses-modules"},
  {"signature-specs", &module_info_ast, "signature-specs"},
  {"assignment-reference", &module_info_ast, "assignment-reference"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"<file-port>", &module_info_runtime, "<file-port>"},
  {"function-value", &module_info_ast, "function-value"},
  {"locals-functions-setter", &module_info_ast, "locals-functions-setter"},
  {"function-signature-setter", &module_info_ast, "function-signature-setter"},
  {"apply", &module_info_macros, "apply"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"function-nary?", &module_info_ast, "function-nary?"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"cat", &module_info_macros, "cat"},
  {"<input-port>", &module_info_runtime, "<input-port>"},
  {"dg", &module_info_boot, "dg"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"signature-bindings", &module_info_ast, "signature-bindings"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"next-method", &module_info_macros, "next-method"},
  {"ascii-limit", &module_info_runtime, "ascii-limit"},
  {"unwind-protect-protected-thunk", &module_info_ast, "unwind-protect-protected-thunk"},
  {"fun", &module_info_boot, "fun"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"empty?", &module_info_macros, "empty?"},
  {"buf", &module_info_runtime, "buf"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"port-index", &module_info_runtime, "port-index"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"read", &module_info_runtime, "read"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"ceiling/", &module_info_runtime, "ceiling/"},
  {"format", &module_info_runtime, "format"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"%iv", &module_info_boot, "%iv"},
  {"alternative-condition", &module_info_ast, "alternative-condition"},
  {"<ast-generic>", &module_info_ast, "<ast-generic>"},
  {"rev!", &module_info_runtime, "rev!"},
  {"last", &module_info_runtime, "last"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"floor/", &module_info_runtime, "floor/"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"find-environment-module", &module_info_ast, "find-environment-module"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"tail", &module_info_boot, "tail"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"locals-bindings-setter", &module_info_ast, "locals-bindings-setter"},
  {"%ft", &module_info_boot, "%ft"},
  {"locals-body", &module_info_ast, "locals-body"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"lsh", &module_info_runtime, "lsh"},
  {"<fix-let>", &module_info_ast, "<fix-let>"},
  {"gensym", &module_info_macros, "gensym"},
  {"<local-reference>", &module_info_ast, "<local-reference>"},
  {"ash", &module_info_runtime, "ash"},
  {"application-known?", &module_info_ast, "application-known?"},
  {"num-to-str", &module_info_runtime, "num-to-str"},
  {"monitor-test", &module_info_ast, "monitor-test"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"flo-bits", &module_info_runtime, "flo-bits"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"case-insensitive-string-hash", &module_info_runtime, "case-insensitive-string-hash"},
  {"round/", &module_info_runtime, "round/"},
  {"%su", &module_info_boot, "%su"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"<string-output-port>", &module_info_runtime, "<string-output-port>"},
  {"%i?", &module_info_boot, "%i?"},
  {"rev", &module_info_runtime, "rev"},
  {"set-module-environments", &module_info_ast, "set-module-environments"},
  {"use", &module_info_boot, "use"},
  {"load-in", &module_info_ast, "load-in"},
  {"@olen", &module_info_boot, "@olen"},
  {"init-ast", &module_info_ast, "init-ast"},
  {"assoc-value", &module_info_runtime, "assoc-value"},
  {"<unwind-protect>", &module_info_ast, "<unwind-protect>"},
  {"abs", &module_info_runtime, "abs"},
  {"bound?", &module_info_boot, "bound?"},
  {"<port>", &module_info_runtime, "<port>"},
  {"%velt", &module_info_boot, "%velt"},
  {"collected", &module_info_macros, "collected"},
  {"for", &module_info_macros, "for"},
  {"do2", &module_info_runtime, "do2"},
  {"do-module-loader-modules", &module_info_ast, "do-module-loader-modules"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"nil", &module_info_boot, "nil"},
  {"push-last!", &module_info_runtime, "push-last!"},
  {"*", &module_info_runtime, "*"},
  {"<global-box>", &module_info_ast, "<global-box>"},
  {"<output-port>", &module_info_runtime, "<output-port>"},
  {"reference-frame-offset", &module_info_ast, "reference-frame-offset"},
  {"truncate/", &module_info_runtime, "truncate/"},
  {"<computed-program>", &module_info_ast, "<computed-program>"},
  {"<real-reference>", &module_info_ast, "<real-reference>"},
  {"<fab-list>", &module_info_ast, "<fab-list>"},
  {"case", &module_info_macros, "case"},
  {"<list>", &module_info_runtime, "<list>"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"max", &module_info_runtime, "max"},
  {"<error>", &module_info_runtime, "<error>"},
  {"%i^", &module_info_boot, "%i^"},
  {"%ib", &module_info_boot, "%ib"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"compose", &module_info_runtime, "compose"},
  {"binding-dynamic-extent?-setter", &module_info_ast, "binding-dynamic-extent?-setter"},
  {"export", &module_info_boot, "export"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"open-output-file", &module_info_runtime, "open-output-file"},
  {"app-args", &module_info_runtime, "app-args"},
  {"write-char", &module_info_runtime, "write-char"},
  {"default", &module_info_runtime, "default"},
  {"signature-names", &module_info_ast, "signature-names"},
  {"address-of", &module_info_runtime, "address-of"},
  {"%f+", &module_info_boot, "%f+"},
  {"port-contents", &module_info_runtime, "port-contents"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"floor", &module_info_runtime, "floor"},
  {"call-with-output-file", &module_info_runtime, "call-with-output-file"},
  {"cat2", &module_info_runtime, "cat2"},
  {"<module-loader>", &module_info_ast, "<module-loader>"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"function-body", &module_info_ast, "function-body"},
  {"modulo", &module_info_runtime, "modulo"},
  {"collecting", &module_info_macros, "collecting"},
  {"<string-input-port>", &module_info_runtime, "<string-input-port>"},
  {"cat!", &module_info_runtime, "cat!"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"fab-p2c-module", &module_info_ast, "fab-p2c-module"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"%bb", &module_info_boot, "%bb"},
  {"class-name", &module_info_boot, "class-name"},
  {"when", &module_info_macros, "when"},
  {"<restart>", &module_info_runtime, "<restart>"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"%vec", &module_info_boot, "%vec"},
  {"<assocs>", &module_info_runtime, "<assocs>"},
  {"isa?", &module_info_boot, "isa?"},
  {"<constant>", &module_info_ast, "<constant>"},
  {"empty", &module_info_runtime, "empty"},
  {"assqn", &module_info_runtime, "assqn"},
  {"<module>", &module_info_ast, "<module>"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"add!", &module_info_runtime, "add!"},
  {"+", &module_info_runtime, "+"},
  {"<type>", &module_info_boot, "<type>"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"<class>", &module_info_boot, "<class>"},
  {"install-initial-bindings", &module_info_ast, "install-initial-bindings"},
  {"<sequential>", &module_info_ast, "<sequential>"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"<range>", &module_info_runtime, "<range>"},
  {"dp", &module_info_boot, "dp"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"remainder", &module_info_runtime, "remainder"},
  {"add", &module_info_runtime, "add"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"find-key", &module_info_runtime, "find-key"},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"elt", &module_info_runtime, "elt"},
  {"reduce+", &module_info_runtime, "reduce+"},
  {"curry", &module_info_runtime, "curry"},
  {"binding-info", &module_info_ast, "binding-info"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"<=", &module_info_runtime, "<="},
  {"binding-value-setter", &module_info_ast, "binding-value-setter"},
  {"elt-setter", &module_info_runtime, "elt-setter"},
  {"logior", &module_info_runtime, "logior"},
  {"%pair", &module_info_boot, "%pair"},
  {"lowercase?", &module_info_runtime, "lowercase?"},
  {"$proto-runtime-module-name", &module_info_ast, "$proto-runtime-module-name"},
  {"=", &module_info_runtime, "="},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"nul?", &module_info_runtime, "nul?"},
  {"<runtime-reference>", &module_info_ast, "<runtime-reference>"},
  {"type-error", &module_info_boot, "type-error"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"remove-modules-by-name!", &module_info_ast, "remove-modules-by-name!"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"<file-input-port>", &module_info_runtime, "<file-input-port>"},
  {"<tab>", &module_info_runtime, "<tab>"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"function-binding", &module_info_ast, "function-binding"},
  {"constant-value", &module_info_ast, "constant-value"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"assocs-test", &module_info_runtime, "assocs-test"},
  {"from-to-by", &module_info_runtime, "from-to-by"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"map", &module_info_macros, "map"},
  {"binding-dynamic-extent?", &module_info_ast, "binding-dynamic-extent?"},
  {"eof-object", &module_info_runtime, "eof-object"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"<compile-time>", &module_info_ast, "<compile-time>"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"pop", &module_info_runtime, "pop"},
  {"binding-type-setter", &module_info_ast, "binding-type-setter"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"map2", &module_info_runtime, "map2"},
  {"pos?", &module_info_runtime, "pos?"},
  {"bind-exit-main-fun", &module_info_ast, "bind-exit-main-fun"},
  {"logxor", &module_info_runtime, "logxor"},
  {"<ast-macro-definition>", &module_info_ast, "<ast-macro-definition>"},
  {"%cu", &module_info_boot, "%cu"},
  {"<runtime-assignment>", &module_info_ast, "<runtime-assignment>"},
  {"from-to", &module_info_runtime, "from-to"},
  {"signature-specs-setter", &module_info_ast, "signature-specs-setter"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"inc", &module_info_macros, "inc"},
  {"<binding>", &module_info_ast, "<binding>"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"%sb", &module_info_boot, "%sb"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"copy-state", &module_info_runtime, "copy-state"},
  {"<ast-method>", &module_info_ast, "<ast-method>"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"<bind-exit>", &module_info_ast, "<bind-exit>"},
  {"signature-nary?", &module_info_ast, "signature-nary?"},
  {"%f-", &module_info_boot, "%f-"},
  {"from", &module_info_runtime, "from"},
  {"<str>", &module_info_boot, "<str>"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"==", &module_info_macros, "=="},
  {"<definition>", &module_info_ast, "<definition>"},
  {"dc", &module_info_boot, "dc"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"tup", &module_info_macros, "tup"},
  {"reference-binding", &module_info_ast, "reference-binding"},
  {"logand", &module_info_runtime, "logand"},
  {"locative-value", &module_info_runtime, "locative-value"},
  {"false-or", &module_info_runtime, "false-or"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"function-debug-name-setter", &module_info_ast, "function-debug-name-setter"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"del-keys", &module_info_runtime, "del-keys"},
  {"program-register", &module_info_ast, "program-register"},
  {"reduce", &module_info_runtime, "reduce"},
  {"str", &module_info_runtime, "str"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"table-shrink-threshold", &module_info_runtime, "table-shrink-threshold"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"type-class", &module_info_boot, "type-class"},
  {"<regular-application>", &module_info_ast, "<regular-application>"},
  {"<incongruent-method-error>", &module_info_runtime, "<incongruent-method-error>"},
  {"format-to-string", &module_info_runtime, "format-to-string"},
  {"lognot", &module_info_runtime, "lognot"},
  {"module-name", &module_info_ast, "module-name"},
  {"popf", &module_info_macros, "popf"},
  {"binding-kind", &module_info_ast, "binding-kind"},
  {"lst", &module_info_boot, "lst"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"1st", &module_info_runtime, "1st"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"as", &module_info_runtime, "as"},
  {"ast-define-binding", &module_info_ast, "ast-define-binding"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"%slen", &module_info_boot, "%slen"},
  {"from-above-by", &module_info_runtime, "from-above-by"},
  {"%i*", &module_info_boot, "%i*"},
  {"always", &module_info_runtime, "always"},
  {"%f<", &module_info_boot, "%f<"},
  {"t<", &module_info_runtime, "t<"},
  {"application-known?-setter", &module_info_ast, "application-known?-setter"},
  {"ceiling", &module_info_runtime, "ceiling"},
  {"<bound?>", &module_info_ast, "<bound?>"},
  {"binding-dotted?-setter", &module_info_ast, "binding-dotted?-setter"},
  {"<passive-program>", &module_info_ast, "<passive-program>"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"<met>", &module_info_boot, "<met>"},
  {"out", &module_info_runtime, "out"},
  {"%str", &module_info_boot, "%str"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"do", &module_info_runtime, "do"},
  {"binding-module-name", &module_info_ast, "binding-module-name"},
  {"newline", &module_info_runtime, "newline"},
  {"reference-frame-number", &module_info_ast, "reference-frame-number"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"fab", &module_info_runtime, "fab"},
  {"init-environment-for-eval", &module_info_ast, "init-environment-for-eval"},
  {"table-growth-factor", &module_info_runtime, "table-growth-factor"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"force-output", &module_info_runtime, "force-output"},
  {"free-implemented-foreign-bindings", &module_info_ast, "free-implemented-foreign-bindings"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"application-binding", &module_info_ast, "application-binding"},
  {"char-ready?", &module_info_runtime, "char-ready?"},
  {"application-arguments", &module_info_ast, "application-arguments"},
  {"<ast-signature>", &module_info_ast, "<ast-signature>"},
  {"<reference>", &module_info_ast, "<reference>"},
  {"<step>", &module_info_runtime, "<step>"},
  {"%lb", &module_info_boot, "%lb"},
  {"char->ascii", &module_info_runtime, "char->ascii"},
  {"program-register-setter", &module_info_ast, "program-register-setter"},
  {"binding-mutable?", &module_info_ast, "binding-mutable?"},
  {"<raw-constant>", &module_info_ast, "<raw-constant>"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"build-condition-interactively", &module_info_runtime, "build-condition-interactively"},
  {"uppercase?", &module_info_runtime, "uppercase?"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"$permanent-hash-state", &module_info_runtime, "$permanent-hash-state"},
  {"isa", &module_info_boot, "isa"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"fix-let-bindings-setter", &module_info_ast, "fix-let-bindings-setter"},
  {"%c<", &module_info_boot, "%c<"},
  {"del-key", &module_info_runtime, "del-key"},
  {"object-class", &module_info_boot, "object-class"},
  {"%with-monitor", &module_info_runtime, "%with-monitor"},
  {"lab", &module_info_boot, "lab"},
  {"function-bindings", &module_info_ast, "function-bindings"},
  {"select", &module_info_macros, "select"},
  {"t=", &module_info_runtime, "t="},
  {"@+", &module_info_boot, "@+"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"do-static-global-bindings", &module_info_ast, "do-static-global-bindings"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"zero?", &module_info_runtime, "zero?"},
  {"<global-reference>", &module_info_ast, "<global-reference>"},
  {"nxt-state", &module_info_runtime, "nxt-state"},
  {"fix-let-arguments-setter", &module_info_ast, "fix-let-arguments-setter"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"<ast-primitive-definition>", &module_info_ast, "<ast-primitive-definition>"},
  {"module-name-to-relpath", &module_info_ast, "module-name-to-relpath"},
  {"call-with-input-file", &module_info_runtime, "call-with-input-file"},
  {"locals-body-setter", &module_info_ast, "locals-body-setter"},
  {"len-setter", &module_info_runtime, "len-setter"},
  {"<static-global-environment>", &module_info_ast, "<static-global-environment>"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"del-dups", &module_info_runtime, "del-dups"},
  {"pick", &module_info_runtime, "pick"},
  {"%fb", &module_info_boot, "%fb"},
  {"global-box-value-setter", &module_info_ast, "global-box-value-setter"},
  {"do-keyed", &module_info_runtime, "do-keyed"},
  {"ascii-whitespaces", &module_info_runtime, "ascii-whitespaces"},
  {"map-keyed", &module_info_runtime, "map-keyed"},
  {"monitor-info", &module_info_ast, "monitor-info"},
  {"%cb", &module_info_boot, "%cb"},
  {"pair", &module_info_macros, "pair"},
  {"now-key", &module_info_runtime, "now-key"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"fin", &module_info_boot, "fin"},
  {"alphabetic?", &module_info_runtime, "alphabetic?"},
  {"locals-functions", &module_info_ast, "locals-functions"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"%f/", &module_info_boot, "%f/"},
  {"<seq>", &module_info_boot, "<seq>"},
  {">=", &module_info_runtime, ">="},
  {"sequentialize", &module_info_ast, "sequentialize"},
  {"signature-nary?-setter", &module_info_ast, "signature-nary?-setter"},
  {"-", &module_info_runtime, "-"},
  {"<programs>", &module_info_ast, "<programs>"},
  {"probe-module", &module_info_ast, "probe-module"},
  {"t+", &module_info_runtime, "t+"},
  {"<application>", &module_info_ast, "<application>"},
  {"fix-let-types", &module_info_ast, "fix-let-types"},
  {"now-elt", &module_info_runtime, "now-elt"},
  {"binding-native-to?", &module_info_ast, "binding-native-to?"},
  {"binding-value", &module_info_ast, "binding-value"},
  {"compile-time-program", &module_info_ast, "compile-time-program"},
  {"binding-dotted?", &module_info_ast, "binding-dotted?"},
  {"read-char", &module_info_runtime, "read-char"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"mem?", &module_info_runtime, "mem?"},
  {"dss", &module_info_boot, "dss"},
  {"monitor-handler", &module_info_ast, "monitor-handler"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"set", &module_info_boot, "set"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"<file-output-port>", &module_info_runtime, "<file-output-port>"},
  {"binding-type", &module_info_ast, "binding-type"},
  {"peek-char", &module_info_runtime, "peek-char"},
  {"%i&", &module_info_boot, "%i&"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {">", &module_info_runtime, ">"},
  {"<col>", &module_info_boot, "<col>"},
  {"all?", &module_info_runtime, "all?"},
  {"2nd", &module_info_runtime, "2nd"},
  {"open-input-file", &module_info_runtime, "open-input-file"},
  {"def-programs", &module_info_ast, "def-programs"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"<string-port>", &module_info_runtime, "<string-port>"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"~==", &module_info_runtime, "~=="},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"round", &module_info_runtime, "round"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"from-by", &module_info_runtime, "from-by"},
  {"df", &module_info_boot, "df"},
  {"describe-handler", &module_info_runtime, "describe-handler"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"collect", &module_info_macros, "collect"},
  {"call-with-string-output-port", &module_info_runtime, "call-with-string-output-port"},
  {"logbit?", &module_info_runtime, "logbit?"},
  {"assert", &module_info_macros, "assert"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"binding-locative", &module_info_ast, "binding-locative"},
  {"eof-object?", &module_info_runtime, "eof-object?"},
  {"table-protocol", &module_info_runtime, "table-protocol"},
  {"<program>", &module_info_ast, "<program>"},
  {"nul", &module_info_boot, "nul"},
  {"<alternative>", &module_info_ast, "<alternative>"},
  {"<", &module_info_runtime, "<"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"fin-state?", &module_info_runtime, "fin-state?"},
  {"dec", &module_info_macros, "dec"},
  {"first-then", &module_info_runtime, "first-then"},
  {"fix-let-bindings", &module_info_ast, "fix-let-bindings"},
  {"del", &module_info_runtime, "del"},
  {"module-binding", &module_info_ast, "module-binding"},
  {"%it/", &module_info_boot, "%it/"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"list", &module_info_runtime, "list"},
  {"type-object", &module_info_boot, "type-object"},
  {"alternative-alternant", &module_info_ast, "alternative-alternant"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"runtime-environment", &module_info_ast, "runtime-environment"},
  {"%fu", &module_info_boot, "%fu"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"signature-value", &module_info_ast, "signature-value"},
  {"build-condition-for-handler-interactively", &module_info_runtime, "build-condition-for-handler-interactively"},
  {"do-named-static-global-bindings", &module_info_ast, "do-named-static-global-bindings"},
  {"%raw", &module_info_boot, "%raw"},
  {"ini-state", &module_info_runtime, "ini-state"},
  {"dlet", &module_info_macros, "dlet"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"%i-", &module_info_boot, "%i-"},
  {"%untag", &module_info_boot, "%untag"},
  {"mif", &module_info_boot, "mif"},
  {"or", &module_info_macros, "or"},
  {"def-list", &module_info_ast, "def-list"},
  {"fix-let-arguments", &module_info_ast, "fix-let-arguments"},
  {"global-box-value", &module_info_ast, "global-box-value"},
  {"%isa", &module_info_boot, "%isa"},
  {"alternative-consequent", &module_info_ast, "alternative-consequent"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"from-above", &module_info_runtime, "from-above"},
  {"invoke-handler-interactively", &module_info_runtime, "invoke-handler-interactively"},
  {"fix-let-body", &module_info_ast, "fix-let-body"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"%i=", &module_info_boot, "%i="},
  {"function-debug-name", &module_info_ast, "function-debug-name"},
  {"signature-bindings-setter", &module_info_ast, "signature-bindings-setter"},
  {"as-lowercase", &module_info_runtime, "as-lowercase"},
  {"head", &module_info_boot, "head"},
  {"error", &module_info_boot, "error"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"neg?", &module_info_runtime, "neg?"},
  {"reference-called-function?", &module_info_ast, "reference-called-function?"},
  {"unwind-protect-cleanup-thunk", &module_info_ast, "unwind-protect-cleanup-thunk"},
  {"len", &module_info_runtime, "len"},
  {"<map>", &module_info_runtime, "<map>"},
  {"monitor-type", &module_info_ast, "monitor-type"},
  {"<arguments>", &module_info_ast, "<arguments>"},
  {"ds", &module_info_boot, "ds"},
  {"identity", &module_info_runtime, "identity"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"var-type", &module_info_macros, "var-type"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"str-to-num", &module_info_runtime, "str-to-num"},
  {"seq", &module_info_boot, "seq"},
  {"quote", &module_info_boot, "quote"},
  {"application-function", &module_info_ast, "application-function"},
  {"close-output-port", &module_info_runtime, "close-output-port"},
  {"%f=", &module_info_boot, "%f="},
  {"assocq", &module_info_runtime, "assocq"},
  {"fix-let-types-setter", &module_info_ast, "fix-let-types-setter"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"sub", &module_info_runtime, "sub"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"assignment-form", &module_info_ast, "assignment-form"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"<ast-function>", &module_info_ast, "<ast-function>"},
  {"<int>", &module_info_boot, "<int>"},
  {"<global-assignment>", &module_info_ast, "<global-assignment>"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"%lu", &module_info_boot, "%lu"},
  {"dm", &module_info_boot, "dm"},
  {"numeric?", &module_info_runtime, "numeric?"},
  {"rep", &module_info_boot, "rep"},
  {"sig", &module_info_runtime, "sig"},
  {"to-str", &module_info_runtime, "to-str"},
  {"<predefined-application>", &module_info_ast, "<predefined-application>"},
  {"in", &module_info_runtime, "in"},
  {"<local-assignment>", &module_info_ast, "<local-assignment>"},
  {"keys", &module_info_runtime, "keys"},
  {"assignment-binding", &module_info_ast, "assignment-binding"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"%i!", &module_info_boot, "%i!"},
  {"<monitor>", &module_info_ast, "<monitor>"},
  {"%f*", &module_info_boot, "%f*"},
  {"unless", &module_info_macros, "unless"},
  {"<num>", &module_info_boot, "<num>"},
  {"any?", &module_info_runtime, "any?"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"signature-names-setter", &module_info_ast, "signature-names-setter"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"*print-base*", &module_info_runtime, "*print-base*"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"napply", &module_info_macros, "napply"},
  {"dv", &module_info_boot, "dv"},
  {"table-growth-threshold", &module_info_runtime, "table-growth-threshold"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"fill", &module_info_runtime, "fill"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"try", &module_info_boot, "try"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"slot", &module_info_boot, "slot"},
  {"bound?-reference", &module_info_ast, "bound?-reference"},
  {"@<", &module_info_boot, "@<"},
  {"<buf>", &module_info_runtime, "<buf>"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"<str-tab>", &module_info_runtime, "<str-tab>"},
  {"even?", &module_info_runtime, "even?"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"<module-binding>", &module_info_ast, "<module-binding>"},
  {"%c=", &module_info_boot, "%c="},
  {"var-name", &module_info_macros, "var-name"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"/", &module_info_runtime, "/"},
  {"<ast-primitive>", &module_info_ast, "<ast-primitive>"},
  {"id-hash", &module_info_runtime, "id-hash"},
  {"module-loader-module-type", &module_info_ast, "module-loader-module-type"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"alter", &module_info_runtime, "alter"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"3rd", &module_info_runtime, "3rd"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"truncate", &module_info_runtime, "truncate"},
  {"env-object-name", &module_info_ast, "env-object-name"},
  {"min", &module_info_runtime, "min"},
  {"binding-global-box", &module_info_ast, "binding-global-box"},
  {"if", &module_info_boot, "if"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"ast-evaluate", &module_info_ast, "ast-evaluate"},
  {"load-module", &module_info_ast, "load-module"},
  {"assoc", &module_info_runtime, "assoc"},
  {"objectify-quotation", &module_info_ast, "objectify-quotation"},
  {"vec", &module_info_runtime, "vec"},
  {"now-elt-setter", &module_info_runtime, "now-elt-setter"},
  {"fix-let-body-setter", &module_info_ast, "fix-let-body-setter"},
  {"application-tail?", &module_info_ast, "application-tail?"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"list-handlers", &module_info_runtime, "list-handlers"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"binding-index", &Yast_linearizeYbinding_index},
  {"do-do-call-upgrades!", &Yast_linearizeYdo_do_call_upgradesX},
  {"function-self-recursive?", &Yast_linearizeYfunction_self_recursiveQ},
  {"collect-registers!", &Yast_linearizeYcollect_registersX},
  {"form-program", &Yast_linearizeYform_program},
  {"box-reference-setter", &Yast_linearizeYbox_reference_setter},
  {"lift!", &Yast_linearizeYliftX},
  {"allocate-register", &Yast_linearizeYallocate_register},
  {"reference-offset", &Yast_linearizeYreference_offset},
  {"adjoin-temporary-variables!", &Yast_linearizeYadjoin_temporary_variablesX},
  {"reference-offset-setter", &Yast_linearizeYreference_offset_setter},
  {"<free-reference>", &Yast_linearizeYLfree_referenceG},
  {"function-index", &Yast_linearizeYfunction_index},
  {"extract-things!", &Yast_linearizeYextract_thingsX},
  {"update-walk!", &Yast_linearizeYupdate_walkX},
  {"program-definitions-setter", &Yast_linearizeYprogram_definitions_setter},
  {"function-free-setter", &Yast_linearizeYfunction_free_setter},
  {"---main-1---", NULL},
  {"as-top-level-forms", &Yast_linearizeYas_top_level_forms},
  {"program-form", &Yast_linearizeYprogram_form},
  {"do-dynamic-extent!", &Yast_linearizeYdo_dynamic_extentX},
  {"do-do-dynamic-extent!", &Yast_linearizeYdo_do_dynamic_extentX},
  {"closure-creation-free-setter", &Yast_linearizeYclosure_creation_free_setter},
  {"binding-index-setter", &Yast_linearizeYbinding_index_setter},
  {"insert-box!", &Yast_linearizeYinsert_boxX},
  {"split-program", &Yast_linearizeYsplit_program},
  {"adjoin-free-binding!", &Yast_linearizeYadjoin_free_bindingX},
  {"<box-read>", &Yast_linearizeYLbox_readG},
  {"---main-2---", NULL},
  {"unconstrained-type?", &Yast_linearizeYunconstrained_typeQ},
  {"$free-environment-empty", &Yast_linearizeYDfree_environment_empty},
  {"closure-creation-free", &Yast_linearizeYclosure_creation_free},
  {"function-registers-setter", &Yast_linearizeYfunction_registers_setter},
  {"closure-creation-index-setter", &Yast_linearizeYclosure_creation_index_setter},
  {"box-form-setter", &Yast_linearizeYbox_form_setter},
  {"---main-0---", NULL},
  {"form-definitions-setter", &Yast_linearizeYform_definitions_setter},
  {"program-quotations", &Yast_linearizeYprogram_quotations},
  {"lift-procedures!", &Yast_linearizeYlift_proceduresX},
  {"form-program-setter", &Yast_linearizeYform_program_setter},
  {"do-call-references!", &Yast_linearizeYdo_call_referencesX},
  {"gather-temporaries!", &Yast_linearizeYgather_temporariesX},
  {"closurize-main!", &Yast_linearizeYclosurize_mainX},
  {"<function-definition>", &Yast_linearizeYLfunction_definitionG},
  {"*renaming-bindings-counter*", &Yast_linearizeYTrenaming_bindings_counterT},
  {"analyze-calls", &Yast_linearizeYanalyze_calls},
  {"extract!", &Yast_linearizeYextractX},
  {"box-form", &Yast_linearizeYbox_form},
  {"<box-creation>", &Yast_linearizeYLbox_creationG},
  {"box-reference", &Yast_linearizeYbox_reference},
  {"closure-creation-index", &Yast_linearizeYclosure_creation_index},
  {"program-quotations-setter", &Yast_linearizeYprogram_quotations_setter},
  {"<box-write>", &Yast_linearizeYLbox_writeG},
  {"flatten-seqs", &Yast_linearizeYflatten_seqs},
  {"closure-creation-bindings", &Yast_linearizeYclosure_creation_bindings},
  {"function-index-setter", &Yast_linearizeYfunction_index_setter},
  {"analyze-dynamic-extent", &Yast_linearizeYanalyze_dynamic_extent},
  {"function-registers", &Yast_linearizeYfunction_registers},
  {"function-temporaries", &Yast_linearizeYfunction_temporaries},
  {"<primitive-definition>", &Yast_linearizeYLprimitive_definitionG},
  {"do-do-call-references!", &Yast_linearizeYdo_do_call_referencesX},
  {"closure-creation-bindings-setter", &Yast_linearizeYclosure_creation_bindings_setter},
  {"<free-environment>", &Yast_linearizeYLfree_environmentG},
  {"reference-self?", &Yast_linearizeYreference_selfQ},
  {"boxify-mutable-bindings", &Yast_linearizeYboxify_mutable_bindings},
  {"function-temporaries-setter", &Yast_linearizeYfunction_temporaries_setter},
  {"<flat-function>", &Yast_linearizeYLflat_functionG},
  {"function-self-recursive?-setter", &Yast_linearizeYfunction_self_recursiveQ_setter},
  {"do-call-upgrades!", &Yast_linearizeYdo_call_upgradesX},
  {"free-environment", &Yast_linearizeYfree_environment},
  {"<renamed-local-binding>", &Yast_linearizeYLrenamed_local_bindingG},
  {"form-definitions", &Yast_linearizeYform_definitions},
  {"form-quotations-setter", &Yast_linearizeYform_quotations_setter},
  {"adjoin-definition!", &Yast_linearizeYadjoin_definitionX},
  {"function-free", &Yast_linearizeYfunction_free},
  {"collect-temporaries!", &Yast_linearizeYcollect_temporariesX},
  {"<top-level-form>", &Yast_linearizeYLtop_level_formG},
  {"reference-self?-setter", &Yast_linearizeYreference_selfQ_setter},
  {"<closure-creation>", &Yast_linearizeYLclosure_creationG},
  {"program-form-setter", &Yast_linearizeYprogram_form_setter},
  {"program-definitions", &Yast_linearizeYprogram_definitions},
  {"<flattened-program>", &Yast_linearizeYLflattened_programG},
  {"form-quotations", &Yast_linearizeYform_quotations},
  {"analyze-call-references", &Yast_linearizeYanalyze_call_references},
  {"register-allocate!", &Yast_linearizeYregister_allocateX},
  {"new-renamed-binding", &Yast_linearizeYnew_renamed_binding},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"binding-index", "binding-index"},
  {"function-self-recursive?", "function-self-recursive?"},
  {"form-program", "form-program"},
  {"extract-things!", "extract-things!"},
  {"lift!", "lift!"},
  {"function-index", "function-index"},
  {"register-allocate!", "register-allocate!"},
  {"program-form", "program-form"},
  {"<box-creation>", "<box-creation>"},
  {"gather-temporaries!", "gather-temporaries!"},
  {"insert-box!", "insert-box!"},
  {"form-definitions", "form-definitions"},
  {"<box-read>", "<box-read>"},
  {"unconstrained-type?", "unconstrained-type?"},
  {"closure-creation-free", "closure-creation-free"},
  {"program-quotations", "program-quotations"},
  {"analyze-calls", "analyze-calls"},
  {"box-form", "box-form"},
  {"box-reference", "box-reference"},
  {"closure-creation-index", "closure-creation-index"},
  {"<box-write>", "<box-write>"},
  {"analyze-dynamic-extent", "analyze-dynamic-extent"},
  {"function-temporaries", "function-temporaries"},
  {"<free-environment>", "<free-environment>"},
  {"reference-self?", "reference-self?"},
  {"function-registers", "function-registers"},
  {"<primitive-definition>", "<primitive-definition>"},
  {"<free-reference>", "<free-reference>"},
  {"<flat-function>", "<flat-function>"},
  {"function-self-recursive?-setter", "function-self-recursive?-setter"},
  {"reference-offset", "reference-offset"},
  {"<renamed-local-binding>", "<renamed-local-binding>"},
  {"closurize-main!", "closurize-main!"},
  {"<top-level-form>", "<top-level-form>"},
  {"<closure-creation>", "<closure-creation>"},
  {"program-definitions", "program-definitions"},
  {"form-quotations", "form-quotations"},
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
  (P)Yast_linearizeY___main_2___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
