/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: ast-linearize */

EXT(YastYinit_ast,"ast","init-ast");
EXT(YruntimeYlogxor,"runtime","logxor");
EXT(YruntimeYdel_dups,"runtime","del-dups");
EXT(YLlocG,"boot","<loc>");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(YLseqG,"boot","<seq>");
EXT(YastYbinding_info,"ast","binding-info");
EXT(YastYLcomputed_programG,"ast","<computed-program>");
DEF(Yast_linearizeYLrenamed_local_bindingG,"ast-linearize","<renamed-local-binding>");
EXT(YruntimeYS,"runtime","/");
EXT(YruntimeYreduceA,"runtime","reduce+");
EXT(YastYLunwind_protectG,"ast","<unwind-protect>");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(YastYunwind_protect_protected_thunk,"ast","unwind-protect-protected-thunk");
DEF(Yast_linearizeYform_definitions_setter,"ast-linearize","form-definitions-setter");
EXT(YastYLcompile_timeG,"ast","<compile-time>");
EXT(YruntimeYroundS,"runtime","round/");
EXT(YastYlocals_bindings,"ast","locals-bindings");
EXT(YastYmodule_name_to_relpath,"ast","module-name-to-relpath");
EXT(YastYbinding_dynamic_extentQ,"ast","binding-dynamic-extent?");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YruntimeYE,"runtime","=");
EXT(Yslot_init,"boot","slot-init");
EXT(YastYfunction_binding,"ast","function-binding");
EXT(YastYLargumentsG,"ast","<arguments>");
EXT(YruntimeYrev,"runtime","rev");
DEF(Yast_linearizeYadjoin_temporary_variablesX,"ast-linearize","adjoin-temporary-variables!");
EXT(YmacrosYpair,"macros","pair");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YastYLast_primitiveG,"ast","<ast-primitive>");
DEF(Yast_linearizeYanalyze_call_references,"ast-linearize","analyze-call-references");
DEF(Yast_linearizeYdo_call_upgradesX,"ast-linearize","do-call-upgrades!");
EXT(YruntimeYzeroQ,"runtime","zero?");
DEF(Yast_linearizeYDfree_environment_empty,"ast-linearize","$free-environment-empty");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YLtraitsG,"boot","<traits>");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(Yfapply,"boot","fapply");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YruntimeYmap2,"runtime","map2");
EXT(YastYfunction_body_setter,"ast","function-body-setter");
EXT(YastYalternative_alternant,"ast","alternative-alternant");
DEF(Yast_linearizeYfunction_self_recursiveQ_setter,"ast-linearize","function-self-recursive?-setter");
EXT(YruntimeYdo3,"runtime","do3");
EXT(YastYmodule_name,"ast","module-name");
DEF(Yast_linearizeYunconstrained_typeQ,"ast-linearize","unconstrained-type?");
EXT(YruntimeYreduce,"runtime","reduce");
EXT(YLsigG,"boot","<sig>");
DEF(Yast_linearizeYsexp_Gobject,"ast-linearize","sexp->object");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(YastYDproto_boot_module_name,"ast","$proto-boot-module-name");
EXT(YastYset_module_environments,"ast","set-module-environments");
EXT(YastYDproto_runtime_module_name,"ast","$proto-runtime-module-name");
EXT(YastYmonitor_handler,"ast","monitor-handler");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(YastYload_in,"ast","load-in");
EXT(YobjectL,"boot","object<");
DEF(Yast_linearizeYfunction_temporaries_setter,"ast-linearize","function-temporaries-setter");
DEF(Yast_linearizeYcollect_temporariesX,"ast-linearize","collect-temporaries!");
EXT(YastYassignment_form,"ast","assignment-form");
DEF(Yast_linearizeYLfunction_definitionG,"ast-linearize","<function-definition>");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YruntimeYtA,"runtime","t+");
EXT(YruntimeYfrom,"runtime","from");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
DEF(Yast_linearizeYfunction_temporaries,"ast-linearize","function-temporaries");
DEF(Yast_linearizeYdo_do_dynamic_extentX,"ast-linearize","do-do-dynamic-extent!");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YastYprogram_register_setter,"ast","program-register-setter");
EXT(YastYlocals_body_setter,"ast","locals-body-setter");
DEF(Yast_linearizeYboxify_mutable_bindings,"ast-linearize","boxify-mutable-bindings");
EXT(YastYLbind_exitG,"ast","<bind-exit>");
EXT(YastYLsequentialG,"ast","<sequential>");
EXT(YastYsignature_naryQ_setter,"ast","signature-nary?-setter");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YruntimeY1st,"runtime","1st");
EXT(YastYLglobal_assignmentG,"ast","<global-assignment>");
EXT(Yfun_name,"boot","fun-name");
EXT(YruntimeYL,"runtime","<");
EXT(Yfab_sym,"boot","fab-sym");
EXT(YastYreference_called_functionQ_setter,"ast","reference-called-function?-setter");
DEF(Yast_linearizeYreference_offset_setter,"ast-linearize","reference-offset-setter");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
EXT(YPsymbols,"boot","%symbols");
DEF(Yast_linearizeYform_program,"ast-linearize","form-program");
EXT(YastYfix_let_types,"ast","fix-let-types");
DEF(Yast_linearizeYLfree_referenceG,"ast-linearize","<free-reference>");
EXT(YruntimeYas,"runtime","as");
EXT(YPsnul,"boot","%snul");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YwriteYenv_object_name,"write","env-object-name");
EXT(YruntimeYassqn,"runtime","assqn");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(YruntimeYlogand,"runtime","logand");
EXT(YastYmodule_exports,"ast","module-exports");
EXT(YruntimeYNE,"runtime","~=");
DEF(Yast_linearizeYprogram_definitions_setter,"ast-linearize","program-definitions-setter");
EXT(YruntimeYstr,"runtime","str");
DEF(Yast_linearizeYfunction_registers_setter,"ast-linearize","function-registers-setter");
EXT(YastYsignature_specs,"ast","signature-specs");
EXT(YruntimeYpush,"runtime","push");
EXT(YruntimeYsig,"runtime","sig");
EXT(YastYast_define_binding,"ast","ast-define-binding");
DEF(Yast_linearizeYform_program_setter,"ast-linearize","form-program-setter");
EXT(YLcolG,"boot","<col>");
DEF(Yast_linearizeYLtop_level_formG,"ast-linearize","<top-level-form>");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(YastYLfab_listG,"ast","<fab-list>");
EXT(YruntimeYmax,"runtime","max");
DEF(Yast_linearizeYbox_form,"ast-linearize","box-form");
DEF(Yast_linearizeYliftX,"ast-linearize","lift!");
EXT(YastYassignment_binding,"ast","assignment-binding");
EXT(YastYsignature_bindings_setter,"ast","signature-bindings-setter");
EXT(YastYfunction_value,"ast","function-value");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YmacrosYcat,"macros","cat");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
EXT(Yerror,"boot","error");
EXT(YastYmodule_target_environment,"ast","module-target-environment");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
EXT(YastYprobe_module,"ast","probe-module");
EXT(YruntimeYLE,"runtime","<=");
EXT(Ysig_value,"boot","sig-value");
EXT(YruntimeYid_hash,"runtime","id-hash");
EXT(YmacrosYtup,"macros","tup");
EXT(YruntimeYfrom_above,"runtime","from-above");
EXT(YLvecG,"boot","<vec>");
DEF(Yast_linearizeYclosure_creation_bindings,"ast-linearize","closure-creation-bindings");
EXT(YruntimeYformat,"runtime","format");
EXT(YruntimeYpick,"runtime","pick");
DEF(Yast_linearizeYclosure_creation_free,"ast-linearize","closure-creation-free");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YastYLruntime_assignmentG,"ast","<runtime-assignment>");
EXT(YastYdo_static_global_bindings,"ast","do-static-global-bindings");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YruntimeYG,"runtime",">");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
EXT(Yslot_owner,"boot","slot-owner");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
DEF(Yast_linearizeYLprimitive_definitionG,"ast-linearize","<primitive-definition>");
DEF(Yast_linearizeYextractX,"ast-linearize","extract!");
DEF(Yast_linearizeYbox_reference,"ast-linearize","box-reference");
EXT(YastYfunction_bindings,"ast","function-bindings");
DEF(Yast_linearizeYLclosure_creationG,"ast-linearize","<closure-creation>");
EXT(YruntimeYfloor,"runtime","floor");
EXT(YruntimeYidentity,"runtime","identity");
EXT(Ynil,"boot","nil");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YruntimeYnewline,"runtime","newline");
EXT(YruntimeYaddress_of,"runtime","address-of");
EXT(YastYinstall_initial_bindings,"ast","install-initial-bindings");
EXT(YastYmonitor_main_thunk,"ast","monitor-main-thunk");
EXT(YastYLast_methodG,"ast","<ast-method>");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
EXT(Ytype_error,"boot","type-error");
EXT(YLslotG,"boot","<slot>");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(YruntimeYoddQ,"runtime","odd?");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YruntimeYmake_handler,"runtime","make-handler");
EXT(YastYsignature_value_setter,"ast","signature-value-setter");
DEF(Yast_linearizeYreference_selfQ,"ast-linearize","reference-self?");
DEF(Yast_linearizeYbinding_index_setter,"ast-linearize","binding-index-setter");
EXT(YruntimeYfrom_by,"runtime","from-by");
EXT(YastYreference_binding,"ast","reference-binding");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(YruntimeYabs,"runtime","abs");
EXT(YruntimeYassocq,"runtime","assocq");
EXT(Ytail,"boot","tail");
EXT(YastYdo_named_static_global_bindings,"ast","do-named-static-global-bindings");
EXT(YastYbinding_global_box_setter,"ast","binding-global-box-setter");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YastYreport_undefined_global_bindings,"ast","report-undefined-global-bindings");
EXT(YastYenvironment_uses_modules,"ast","environment-uses-modules");
EXT(YLsymG,"boot","<sym>");
EXT(YruntimeYpop,"runtime","pop");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(YruntimeYlognot,"runtime","lognot");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
EXT(YastYcompile_time_program,"ast","compile-time-program");
EXT(YruntimeYlist,"runtime","list");
EXT(YruntimeYround,"runtime","round");
EXT(YruntimeYT,"runtime","*");
EXT(YruntimeYfab,"runtime","fab");
EXT(YruntimeYelt,"runtime","elt");
EXT(YruntimeYmodulo,"runtime","modulo");
DEF(Yast_linearizeYclosure_creation_index_setter,"ast-linearize","closure-creation-index-setter");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(YastYsignature_bindings,"ast","signature-bindings");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
DEF(Yast_linearizeYfunction_free_setter,"ast-linearize","function-free-setter");
EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
DEF(Yast_linearizeYallocate_register,"ast-linearize","allocate-register");
EXT(YLtupG,"boot","<tup>");
EXT(YastYboundQ_reference,"ast","bound?-reference");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(YruntimeYcurry,"runtime","curry");
EXT(YastYapplication_arguments,"ast","application-arguments");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YruntimeYTprint_baseT,"runtime","*print-base*");
EXT(YastYLlocalsG,"ast","<locals>");
EXT(YruntimeYceiling,"runtime","ceiling");
EXT(YruntimeYdel,"runtime","del");
EXT(YastYfind_environment_module,"ast","find-environment-module");
EXT(YruntimeYLincongruent_method_errorG,"runtime","<incongruent-method-error>");
EXT(YastYLmodule_bindingG,"ast","<module-binding>");
EXT(YastYbinding_mutableQ,"ast","binding-mutable?");
EXT(YastYfix_let_arguments_setter,"ast","fix-let-arguments-setter");
EXT(YruntimeYlast,"runtime","last");
EXT(YruntimeYLtabG,"runtime","<tab>");
DEF(Yast_linearizeYlift_proceduresX,"ast-linearize","lift-procedures!");
DEF(Yast_linearizeYTrenaming_bindings_counterT,"ast-linearize","*renaming-bindings-counter*");
DEF(Yast_linearizeYclosure_creation_free_setter,"ast-linearize","closure-creation-free-setter");
EXT(YastYmodule_loader_module_type,"ast","module-loader-module-type");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
EXT(Ynul,"boot","nul");
EXT(YruntimeYLstepG,"runtime","<step>");
EXT(YastYreference_called_functionQ,"ast","reference-called-function?");
DEF(Yast_linearizeYupdate_walkX,"ast-linearize","update-walk!");
EXT(Ytail_setter,"boot","tail-setter");
EXT(YruntimeYwrite_string,"runtime","write-string");
DEF(Yast_linearizeYextract_thingsX,"ast-linearize","extract-things!");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(YastYLfix_letG,"ast","<fix-let>");
EXT(YastYLprogramG,"ast","<program>");
EXT(Ysig_names,"boot","sig-names");
EXT(YLlogG,"boot","<log>");
EXT(YastYLmoduleG,"ast","<module>");
EXT(YPisa,"boot","%isa");
EXT(YruntimeYLrangeG,"runtime","<range>");
EXT(YruntimeYlen,"runtime","len");
EXT(YruntimeYread_char,"runtime","read-char");
EXT(YruntimeYdo,"runtime","do");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YastYLapplicationG,"ast","<application>");
EXT(YruntimeYbuf,"runtime","buf");
EXT(YisaQ,"boot","isa?");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(Yapply,"boot","apply");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
EXT(YastYLboundQG,"ast","<bound?>");
EXT(YruntimeYLlistG,"runtime","<list>");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
EXT(YastYbinding_native_toQ,"ast","binding-native-to?");
EXT(YastYLmonitorG,"ast","<monitor>");
EXT(YruntimeYflo_bits,"runtime","flo-bits");
EXT(YruntimeYassoc,"runtime","assoc");
EXT(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
EXT(Yobject_parents,"boot","object-parents");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(YastYbinding_module_name,"ast","binding-module-name");
EXT(YruntimeYnow_elt,"runtime","now-elt");
EXT(YruntimeY_,"runtime","-");
EXT(YruntimeYdel_key,"runtime","del-key");
DEF(Yast_linearizeYLbox_writeG,"ast-linearize","<box-write>");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YastYfix_let_bindings_setter,"ast","fix-let-bindings-setter");
EXT(YruntimeYnegQ,"runtime","neg?");
EXT(YastYLast_primitive_definitionG,"ast","<ast-primitive-definition>");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YastYmonitor_type,"ast","monitor-type");
EXT(YastYLglobal_referenceG,"ast","<global-reference>");
EXT(YLgenG,"boot","<gen>");
EXT(YastYfab_p2c_module,"ast","fab-p2c-module");
DEF(Yast_linearizeYdo_do_call_referencesX,"ast-linearize","do-do-call-references!");
EXT(YastYLast_macro_definitionG,"ast","<ast-macro-definition>");
EXT(YruntimeYread,"runtime","read");
EXT(YruntimeYremainder,"runtime","remainder");
DEF(Yast_linearizeYprogram_quotations_setter,"ast-linearize","program-quotations-setter");
EXT(YastYalternative_condition,"ast","alternative-condition");
EXT(YastYfix_let_body,"ast","fix-let-body");
EXT(YmacrosYEE,"macros","==");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(YastYsignature_names,"ast","signature-names");
DEF(Yast_linearizeYfunction_registers,"ast-linearize","function-registers");
EXT(YastYfree_implemented_foreign_bindings,"ast","free-implemented-foreign-bindings");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YastYmonitor_info,"ast","monitor-info");
DEF(Yast_linearizeYLbox_readG,"ast-linearize","<box-read>");
EXT(YastYbinding_dynamic_extentQ_setter,"ast","binding-dynamic-extent?-setter");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YastYfix_let_body_setter,"ast","fix-let-body-setter");
EXT(YastYapplication_function,"ast","application-function");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YruntimeYassq,"runtime","assq");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(YastYbinding_locative,"ast","binding-locative");
DEF(Yast_linearizeYLfree_environmentG,"ast-linearize","<free-environment>");
EXT(YastYLalternativeG,"ast","<alternative>");
EXT(YastYsignature_specs_setter,"ast","signature-specs-setter");
EXT(YastYfunction_debug_name_setter,"ast","function-debug-name-setter");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(Ynot,"boot","not");
EXT(YLchrG,"boot","<chr>");
EXT(YastYapplication_knownQ,"ast","application-known?");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
EXT(YmacrosYmap,"macros","map");
EXT(YastYsequentialize,"ast","sequentialize");
EXT(YastYlocals_functions,"ast","locals-functions");
EXT(YruntimeYclose_output_port,"runtime","close-output-port");
EXT(YastYfunction_body,"ast","function-body");
EXT(YastYfix_let_types_setter,"ast","fix-let-types-setter");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YruntimeYmin,"runtime","min");
EXT(YastYlocals_body,"ast","locals-body");
DEF(Yast_linearizeYclosure_creation_index,"ast-linearize","closure-creation-index");
EXT(YLanyG,"boot","<any>");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
DEF(Yast_linearizeYreference_offset,"ast-linearize","reference-offset");
DEF(Yast_linearizeYclosure_creation_bindings_setter,"ast-linearize","closure-creation-bindings-setter");
DEF(Yast_linearizeYanalyze_dynamic_extent,"ast-linearize","analyze-dynamic-extent");
EXT(YastYbinding_name,"ast","binding-name");
EXT(YastYLdefinitionG,"ast","<definition>");
DEF(Yast_linearizeYprogram_quotations,"ast-linearize","program-quotations");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
EXT(YruntimeYtruncate,"runtime","truncate");
EXT(YruntimeYlen_setter,"runtime","len-setter");
EXT(Yobject_slots,"boot","object-slots");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(YLoptsG,"boot","<opts>");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
EXT(YastYinit_environment_for_eval,"ast","init-environment-for-eval");
DEF(Yast_linearizeYflatten_seqs,"ast-linearize","flatten-seqs");
EXT(YastYLpredefined_applicationG,"ast","<predefined-application>");
DEF(Yast_linearizeYform_definitions,"ast-linearize","form-definitions");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YruntimeYfloorS,"runtime","floor/");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(YastYfunction_naryQ,"ast","function-nary?");
EXT(YastYsignature_names_setter,"ast","signature-names-setter");
EXT(Yslot_type,"boot","slot-type");
EXT(YruntimeYdo2,"runtime","do2");
EXT(YastYreference_frame_offset,"ast","reference-frame-offset");
EXT(YastYLast_genericG,"ast","<ast-generic>");
DEF(Yast_linearizeYregister_allocateX,"ast-linearize","register-allocate!");
DEF(Yast_linearizeYadjoin_definitionX,"ast-linearize","adjoin-definition!");
DEF(Yast_linearizeYprogram_form,"ast-linearize","program-form");
EXT(Yfun_specs,"boot","fun-specs");
DEF(Yast_linearizeYadjoin_free_bindingX,"ast-linearize","adjoin-free-binding!");
EXT(YruntimeYA,"runtime","+");
EXT(YastYfunction_signature_setter,"ast","function-signature-setter");
EXT(YLintG,"boot","<int>");
DEF(Yast_linearizeYfunction_self_recursiveQ,"ast-linearize","function-self-recursive?");
EXT(YruntimeYpos,"runtime","pos");
DEF(Yast_linearizeYprogram_definitions,"ast-linearize","program-definitions");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YruntimeYkeys,"runtime","keys");
EXT(Yfind_setter,"boot","find-setter");
EXT(YastYLconstantG,"ast","<constant>");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YastYload_module,"ast","load-module");
EXT(YruntimeYposQ,"runtime","pos?");
DEF(Yast_linearizeYform_quotations,"ast-linearize","form-quotations");
EXT(YastYbinding_global_box,"ast","binding-global-box");
EXT(YastYbinding_value,"ast","binding-value");
EXT(YastYfunction_signature,"ast","function-signature");
EXT(YastYapplication_knownQ_setter,"ast","application-known?-setter");
EXT(YLnumG,"boot","<num>");
EXT(YastYsignature_naryQ,"ast","signature-nary?");
EXT(YastYprogram_register,"ast","program-register");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(YastYglobal_box_value,"ast","global-box-value");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YastYbinding_value_setter,"ast","binding-value-setter");
EXT(YLstrG,"boot","<str>");
EXT(YastYmodule_binding,"ast","module-binding");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YruntimeYPwith_monitor,"runtime","%with-monitor");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YastYunwind_protect_cleanup_thunk,"ast","unwind-protect-cleanup-thunk");
EXT(YastYmonitor_test,"ast","monitor-test");
EXT(YastYassignment_reference,"ast","assignment-reference");
DEF(Yast_linearizeYfunction_free,"ast-linearize","function-free");
EXT(YastYapplication_binding,"ast","application-binding");
EXT(YastYapplication_tailQ,"ast","application-tail?");
EXT(Ysym_name,"boot","sym-name");
DEF(Yast_linearizeYdo_call_referencesX,"ast-linearize","do-call-references!");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YPdefine_method,"boot","%define-method");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
EXT(YastYLregular_applicationG,"ast","<regular-application>");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YruntimeYash,"runtime","ash");
EXT(YruntimeYto_digit,"runtime","to-digit");
DEF(Yast_linearizeYnew_renamed_binding,"ast-linearize","new-renamed-binding");
EXT(Yslot_getter,"boot","slot-getter");
EXT(Yobject_direct_parents,"boot","object-direct-parents");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YruntimeYLfile_input_portG,"runtime","<file-input-port>");
EXT(YastYLmodule_loaderG,"ast","<module-loader>");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
EXT(YruntimeYvec,"runtime","vec");
EXT(YastYmodule_syntax_environment,"ast","module-syntax-environment");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(YruntimeYfalse_or,"runtime","false-or");
EXT(YastYremove_modules_by_nameX,"ast","remove-modules-by-name!");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
EXT(YastYbind_exit_main_fun,"ast","bind-exit-main-fun");
EXT(YastYfunction_debug_name,"ast","function-debug-name");
EXT(YruntimeYalways,"runtime","always");
EXT(YastYLstatic_global_environmentG,"ast","<static-global-environment>");
DEF(Yast_linearizeYbox_form_setter,"ast-linearize","box-form-setter");
EXT(YruntimeYsub,"runtime","sub");
EXT(YastYLlocal_referenceG,"ast","<local-reference>");
DEF(Yast_linearizeYLbox_creationG,"ast-linearize","<box-creation>");
EXT(YastYLreal_referenceG,"ast","<real-reference>");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
EXT(YastYfix_let_arguments,"ast","fix-let-arguments");
EXT(YruntimeYlsh,"runtime","lsh");
EXT(YastYbinding_type,"ast","binding-type");
EXT(YruntimeYmemQ,"runtime","mem?");
EXT(YastYobjectify_quotation,"ast","objectify-quotation");
EXT(YastYbinding_kind,"ast","binding-kind");
DEF(Yast_linearizeYreference_selfQ_setter,"ast-linearize","reference-self?-setter");
EXT(YastYLpassive_programG,"ast","<passive-program>");
EXT(YruntimeYfind_key,"runtime","find-key");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YruntimeYin,"runtime","in");
DEF(Yast_linearizeYLflattened_programG,"ast-linearize","<flattened-program>");
EXT(YastYLlocal_assignmentG,"ast","<local-assignment>");
EXT(YruntimeYfill,"runtime","fill");
EXT(YruntimeYalter,"runtime","alter");
EXT(YruntimeYout,"runtime","out");
EXT(YastYLast_signatureG,"ast","<ast-signature>");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(YastYbinding_type_setter,"ast","binding-type-setter");
EXT(YastYlocals_functions_setter,"ast","locals-functions-setter");
EXT(YastYreference_frame_number,"ast","reference-frame-number");
EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
DEF(Yast_linearizeYbinding_index,"ast-linearize","binding-index");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(Ylst,"boot","lst");
EXT(Yfind_getter,"boot","find-getter");
EXT(Yobject_direct_slots,"boot","object-direct-slots");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YastYLprogramsG,"ast","<programs>");
EXT(YastYalternative_consequent,"ast","alternative-consequent");
EXT(YruntimeYempty,"runtime","empty");
DEF(Yast_linearizeYLflat_functionG,"ast-linearize","<flat-function>");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YastYast_evaluate,"ast","ast-evaluate");
EXT(YastYdo_module_loader_modules,"ast","do-module-loader-modules");
DEF(Yast_linearizeYfree_environment,"ast-linearize","free-environment");
EXT(YLmetG,"boot","<met>");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YastYbinding_info_setter,"ast","binding-info-setter");
EXT(YruntimeYtL,"runtime","t<");
DEF(Yast_linearizeYfunction_index_setter,"ast-linearize","function-index-setter");
EXT(YruntimeYlogior,"runtime","logior");
EXT(YastYlocals_bindings_setter,"ast","locals-bindings-setter");
EXT(YPslot,"boot","%slot");
EXT(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
EXT(Yhead,"boot","head");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YruntimeYdefault,"runtime","default");
EXT(Yslot_value,"boot","slot-value");
EXT(YastYsignature_value,"ast","signature-value");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(Yfun_value,"boot","fun-value");
EXT(YastYLbindingG,"ast","<binding>");
EXT(Ysig_specs,"boot","sig-specs");
EXT(Yfun_names,"boot","fun-names");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
EXT(YruntimeYevenQ,"runtime","even?");
EXT(YruntimeYGE,"runtime",">=");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
DEF(Yast_linearizeYanalyze_calls,"ast-linearize","analyze-calls");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
EXT(YPvnul,"boot","%vnul");
DEF(Yast_linearizeYsplit_program,"ast-linearize","split-program");
DEF(Yast_linearizeYfunction_index,"ast-linearize","function-index");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
EXT(YLfloG,"boot","<flo>");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YastYconstant_value,"ast","constant-value");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(YruntimeYneg,"runtime","neg");
EXT(YastYLreferenceG,"ast","<reference>");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(YLflatG,"boot","<flat>");
EXT(YastYLruntime_referenceG,"ast","<runtime-reference>");
EXT(YruntimeYcopy_state,"runtime","copy-state");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YastYruntime_environment,"ast","runtime-environment");
EXT(YastYglobal_box_value_setter,"ast","global-box-value-setter");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
DEF(Yast_linearizeYas_top_level_forms,"ast-linearize","as-top-level-forms");
EXT(YastYLast_functionG,"ast","<ast-function>");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YastYLraw_constantG,"ast","<raw-constant>");
DEF(Yast_linearizeYinsert_boxX,"ast-linearize","insert-box!");
EXT(Yadd_slot,"boot","add-slot");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(YruntimeYeof_object,"runtime","eof-object");
DEF(Yast_linearizeYbox_reference_setter,"ast-linearize","box-reference-setter");
EXT(YruntimeYforce_output,"runtime","force-output");
DEF(Yast_linearizeYclosurize_mainX,"ast-linearize","closurize-main!");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YastYfix_let_bindings,"ast","fix-let-bindings");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YLlstG,"boot","<lst>");
EXT(YastYobjectify,"ast","objectify");
DEF(Yast_linearizeYform_quotations_setter,"ast-linearize","form-quotations-setter");
DEF(Yast_linearizeYcollect_registersX,"ast-linearize","collect-registers!");
EXT(Yhead_setter,"boot","head-setter");
EXT(YastYLlocal_bindingG,"ast","<local-binding>");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YPPmacro,"boot","%%macro");
DEF(Yast_linearizeYprogram_form_setter,"ast-linearize","program-form-setter");
DEF(Yast_linearizeYdo_do_call_upgradesX,"ast-linearize","do-do-call-upgrades!");
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(YPcall_next_method,"boot","%call-next-method");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YastYLglobal_boxG,"ast","<global-box>");
EXT(YLfunG,"boot","<fun>");
EXT(YruntimeYtE,"runtime","t=");
DEF(Yast_linearizeYdo_dynamic_extentX,"ast-linearize","do-dynamic-extent!");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(YruntimeY3rd,"runtime","3rd");
DEF(Yast_linearizeYgather_temporariesX,"ast-linearize","gather-temporaries!");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_98);
DEFLIT(lit_91);
DEFLIT(lit_95);
DEFLIT(lit_106);
DEFLIT(lit_10);
DEFLIT(lit_33);
DEFLIT(lit_51);
DEFLIT(lit_111);
DEFLIT(lit_11);
DEFLIT(lit_120);
DEFLIT(lit_74);
DEFLIT(lit_69);
DEFLIT(lit_23);
DEFLIT(lit_86);
DEFLIT(lit_73);
DEFLIT(lit_45);
DEFLIT(lit_71);
DEFLIT(lit_76);
DEFLIT(lit_22);
DEFLIT(lit_102);
DEFLIT(lit_59);
DEFLIT(lit_121);
DEFLIT(lit_2);
DEFLIT(lit_15);
DEFLIT(lit_0);
DEFLIT(lit_3);
DEFLIT(lit_61);
DEFLIT(lit_101);
DEFLIT(lit_19);
DEFLIT(lit_99);
DEFLIT(lit_29);
DEFLIT(lit_6);
DEFLIT(lit_78);
DEFLIT(lit_4);
DEFLIT(lit_105);
DEFLIT(lit_25);
DEFLIT(lit_58);
DEFLIT(lit_18);
DEFLIT(lit_40);
DEFLIT(lit_110);
DEFLIT(lit_5);
DEFLIT(lit_39);
DEFLIT(lit_38);
DEFLIT(lit_87);
DEFLIT(lit_65);
DEFLIT(lit_9);
DEFLIT(lit_109);
DEFLIT(lit_56);
DEFLIT(lit_77);
DEFLIT(lit_28);
DEFLIT(lit_44);
DEFLIT(lit_60);
DEFLIT(lit_14);
DEFLIT(lit_63);
DEFLIT(lit_116);
DEFLIT(lit_75);
DEFLIT(lit_79);
DEFLIT(lit_37);
DEFLIT(lit_30);
DEFLIT(lit_13);
DEFLIT(lit_26);
DEFLIT(lit_83);
DEFLIT(lit_43);
DEFLIT(lit_24);
DEFLIT(lit_41);
DEFLIT(lit_49);
DEFLIT(lit_119);
DEFLIT(lit_100);
DEFLIT(lit_67);
DEFLIT(lit_96);
DEFLIT(lit_52);
DEFLIT(lit_108);
DEFLIT(lit_70);
DEFLIT(lit_7);
DEFLIT(lit_94);
DEFLIT(lit_114);
DEFLIT(lit_50);
DEFLIT(lit_118);
DEFLIT(lit_117);
DEFLIT(lit_42);
DEFLIT(lit_81);
DEFLIT(lit_107);
DEFLIT(lit_32);
DEFLIT(lit_16);
DEFLIT(lit_57);
DEFLIT(lit_115);
DEFLIT(lit_12);
DEFLIT(lit_90);
DEFLIT(lit_55);
DEFLIT(lit_64);
DEFLIT(lit_34);
DEFLIT(lit_31);
DEFLIT(lit_20);
DEFLIT(lit_92);
DEFLIT(lit_89);
DEFLIT(lit_85);
DEFLIT(lit_113);
DEFLIT(lit_62);
DEFLIT(lit_17);
DEFLIT(lit_93);
DEFLIT(lit_1);
DEFLIT(lit_72);
DEFLIT(lit_54);
DEFLIT(lit_66);
DEFLIT(lit_8);
DEFLIT(lit_47);
DEFLIT(lit_36);
DEFLIT(lit_27);
DEFLIT(lit_48);
DEFLIT(lit_112);
DEFLIT(lit_82);
DEFLIT(lit_104);
DEFLIT(lit_35);
DEFLIT(lit_84);
DEFLIT(lit_68);
DEFLIT(lit_46);
DEFLIT(lit_103);
DEFLIT(lit_21);
DEFLIT(lit_97);
DEFLIT(lit_80);
DEFLIT(lit_88);
DEFLIT(lit_53);

/* FUNCTIONS: */

LOCFOR(fun_x_1285_0);
LOCFOR(fun_1);
LOCFOR(fun_2);
LOCFOR(fun_3);
LOCFOR(fun_4);
LOCFOR(fun_5);
LOCFOR(fun_6);
LOCFOR(fun_7);
LOCFOR(fun_8);
LOCFOR(fun_9);
LOCFOR(fun_10);
LOCFOR(fun_11);
LOCFOR(fun_12);
LOCFOR(fun_13);
LOCFOR(fun_14);
LOCFOR(fun_15);
LOCFOR(fun_16);
LOCFOR(fun_17);
LOCFOR(fun_18);
LOCFOR(fun_19);
LOCFOR(fun_loop_20);
LOCFOR(fun_21);
LOCFOR(fun_22);
LOCFOR(fun_23);
LOCFOR(fun_24);
LOCFOR(fun_25);
LOCFOR(fun_26);
LOCFOR(fun_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_30);
LOCFOR(fun_31);
LOCFOR(fun_32);
LOCFOR(fun_33);
LOCFOR(fun_34);
LOCFOR(fun_35);
LOCFOR(fun_36);
LOCFOR(fun_37);
LOCFOR(fun_38);
FUNFOR(Yast_linearizeYfree_environment);
LOCFOR(fun_40);
LOCFOR(fun_41);
LOCFOR(fun_42);
LOCFOR(fun_43);
LOCFOR(fun_44);
LOCFOR(fun_45);
LOCFOR(fun_46);
LOCFOR(fun_47);
LOCFOR(fun_48);
LOCFOR(fun_49);
LOCFOR(fun_50);
LOCFOR(fun_51);
LOCFOR(fun_52);
LOCFOR(fun_add_53);
LOCFOR(fun_check_54);
LOCFOR(fun_55);
LOCFOR(fun_56);
LOCFOR(fun_57);
LOCFOR(fun_58);
LOCFOR(fun_59);
LOCFOR(fun_60);
LOCFOR(fun_61);
LOCFOR(fun_62);
LOCFOR(fun_63);
LOCFOR(fun_64);
LOCFOR(fun_65);
LOCFOR(fun_66);
LOCFOR(fun_67);
LOCFOR(fun_68);
LOCFOR(fun_69);
LOCFOR(fun_70);
LOCFOR(fun_71);
LOCFOR(fun_72);
LOCFOR(fun_73);
LOCFOR(fun_74);
LOCFOR(fun_75);
LOCFOR(fun_76);
LOCFOR(fun_77);
LOCFOR(fun_78);
LOCFOR(fun_79);
LOCFOR(fun_80);
LOCFOR(fun_81);
LOCFOR(fun_82);
LOCFOR(fun_83);
LOCFOR(fun_84);
LOCFOR(fun_85);
LOCFOR(fun_86);
LOCFOR(fun_87);
LOCFOR(fun_88);
LOCFOR(fun_89);
LOCFOR(fun_90);
LOCFOR(fun_91);
LOCFOR(fun_92);
LOCFOR(fun_93);
LOCFOR(fun_94);
LOCFOR(fun_95);
LOCFOR(fun_96);
LOCFOR(fun_97);
LOCFOR(fun_98);
LOCFOR(fun_99);
LOCFOR(fun_100);
LOCFOR(fun_101);
LOCFOR(fun_102);
LOCFOR(fun_103);
LOCFOR(fun_104);
LOCFOR(fun_105);
LOCFOR(fun_106);
LOCFOR(fun_107);
LOCFOR(fun_108);
LOCFOR(fun_109);
LOCFOR(fun_inner_110);
LOCFOR(fun_loop_111);
LOCFOR(fun_112);
LOCFOR(fun_113);
LOCFOR(fun_114);
LOCFOR(fun_115);
LOCFOR(fun_116);
LOCFOR(fun_117);
LOCFOR(fun_118);
LOCFOR(fun_119);
LOCFOR(fun_120);
LOCFOR(fun_121);
LOCFOR(fun_122);
LOCFOR(fun_123);
LOCFOR(fun_124);
LOCFOR(fun_inner_125);
LOCFOR(fun_loop_126);
LOCFOR(fun_127);
LOCFOR(fun_loop_128);
LOCFOR(fun_129);
LOCFOR(fun_130);
LOCFOR(fun_131);
LOCFOR(fun_132);
LOCFOR(fun_133);
LOCFOR(fun_134);
LOCFOR(fun_135);
LOCFOR(fun_adjoin_136);
LOCFOR(fun_137);
LOCFOR(fun_138);
LOCFOR(fun_139);
LOCFOR(fun_140);
LOCFOR(fun_141);
LOCFOR(fun_142);
LOCFOR(fun_143);
LOCFOR(fun_144);
LOCFOR(fun_145);
LOCFOR(fun_loop_146);
LOCFOR(fun_147);
LOCFOR(fun_148);
LOCFOR(fun_149);
LOCFOR(fun_150);
LOCFOR(fun_151);
LOCFOR(fun_152);
extern P Yast_linearizeY___main_0___ ();
extern P Yast_linearizeY___main_1___ ();
extern P Yast_linearizeY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_x_1285_0) {
  ARG(x_1283_, 0);
  P xF1583;
  P setterF1582;
  P getterF1581;
  P slotF1580;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1;
loop:
  T19 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),x_1283_);
  T18 = CALL1(CHKREF(Ynot),T19);
  if (T18 != YPfalse) {
    T17 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),x_1283_);
    slotF1580 = T17;
    T14 = CALL1(CHKREF(Yslot_getter),slotF1580);
    getterF1581 = T14;
    T13 = CALL1(CHKREF(Yslot_setter),slotF1580);
    setterF1582 = T13;
    T12 = CALL2(CHKREF(YmacrosYEE),getterF1581,CHKREF(YastYbinding_value));
    T11 = CALL1(CHKREF(Ynot),T12);
    if (T11 != YPfalse) {
      T10 = CALL1(getterF1581,FREEREF(2));
      xF1583 = T10;
      T9 = CALL2(CHKREF(YisaQ),xF1583,CHKREF(YastYLprogramG));
      if (T9 != YPfalse) {
        T8 = CALL2(CHKREF(YmacrosYpair),xF1583,FREEREF(3));
        T7 = CALL2(CHKREF(Yapply),FREEREF(4),T8);
        T6 = CALL2(setterF1582,T7,FREEREF(2));
        T5 = T6;
      } else {
        T5 = YPfalse;
      }
      T4 = T5;
      T3 = T4;
    } else {
      T3 = YPfalse;
    }
    T2 = T3;
    T16 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),x_1283_);
    a1 = T16;
    x_1283_ = a1;
    goto loop;
    T1 = T15;
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_1) {
  ARG(args_, 0);
  ARG(o_, 1);
  ARG(g_, 2);
  P x_1285F1585;
  P x_1284F1584;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T4 = CALL1(CHKREF(Yobject_slots),o_);
  x_1284F1584 = T4;
  T3 = FUNSHELL(1,fun_x_1285_0,5);
  x_1285F1585 = T3;
  FUNINIT(x_1285F1585, 5,x_1284F1584,x_1285F1585,o_,args_,g_);
  T2 = CALL1(CHKREF(YruntimeYini_state),x_1284F1584);
  T1 = KCALL1(x_1285F1585,T2);
  T0 = T1;
  QRET(o_);
}

FUNCODEDEF(fun_2) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYbox_reference));
  QRET(T0);
}

FUNCODEDEF(fun_3) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYbox_reference));
  QRET(T0);
}

FUNCODEDEF(fun_4) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_5) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYbox_reference));
  QRET(T0);
}

FUNCODEDEF(fun_6) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYbox_reference));
  QRET(T0);
}

FUNCODEDEF(fun_7) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_8) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYbox_form));
  QRET(T0);
}

FUNCODEDEF(fun_9) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYbox_form));
  QRET(T0);
}

FUNCODEDEF(fun_10) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_11) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYbox_reference));
  QRET(T0);
}

FUNCODEDEF(fun_12) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYbox_reference));
  QRET(T0);
}

FUNCODEDEF(fun_13) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_14) {
  ARG(o_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yast_linearizeYupdate_walkX),CHKREF(Yast_linearizeYinsert_boxX),o_);
  QRET(T0);
}

FUNCODEDEF(fun_15) {
  ARG(o_, 0);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = CALL1(CHKREF(YastYreference_binding),o_);
  T5 = CALL1(CHKREF(YastYbinding_mutableQ),T6);
  if (T5 != YPfalse) {
    T4 = (P)YPpair(CHKREF(Yast_linearizeYLbox_readG),Ynil);
    T3 = (P)YPpair(CHKREF(Yast_linearizeYbox_reference),Ynil);
    T2 = (P)YPpair(o_,Ynil);
    T1 = CALL3(CHKREF(YPisa),T4,T3,T2);
    T0 = T1;
  } else {
    T0 = o_;
  }
  QRET(T0);
}

FUNCODEDEF(fun_16) {
  ARG(o_, 0);
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = (P)YPpair(CHKREF(Yast_linearizeYLbox_writeG),Ynil);
  T7 = (P)YPpair(CHKREF(Yast_linearizeYbox_form),Ynil);
  T6 = (P)YPpair(CHKREF(Yast_linearizeYbox_reference),T7);
  T5 = CALL1(CHKREF(YastYassignment_reference),o_);
  T4 = CALL1(CHKREF(YastYassignment_form),o_);
  T3 = CALL1(CHKREF(Yast_linearizeYinsert_boxX),T4);
  T2 = (P)YPpair(T3,Ynil);
  T1 = (P)YPpair(T5,T2);
  T0 = CALL3(CHKREF(YPisa),T8,T6,T1);
  QRET(T0);
}

FUNCODEDEF(fun_17) {
  ARG(o_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = CALL1(CHKREF(YastYfunction_body),o_);
  T2 = CALL1(CHKREF(YastYfunction_bindings),o_);
  T1 = CALL2(CHKREF(Yast_linearizeYboxify_mutable_bindings),T3,T2);
  T0 = CALL1(CHKREF(Yast_linearizeYinsert_boxX),T1);
  CALL2(CHKREF(YastYfunction_body_setter),T0,o_);
  QRET(o_);
}

FUNCODEDEF(fun_18) {
  ARG(o_, 0);
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YastYfix_let_arguments),o_);
  T0 = CALL1(CHKREF(Yast_linearizeYinsert_boxX),T1);
  CALL2(CHKREF(YastYfix_let_arguments_setter),T0,o_);
  T5 = CALL1(CHKREF(YastYfix_let_body),o_);
  T4 = CALL1(CHKREF(YastYfix_let_bindings),o_);
  T3 = CALL2(CHKREF(Yast_linearizeYboxify_mutable_bindings),T5,T4);
  T2 = CALL1(CHKREF(Yast_linearizeYinsert_boxX),T3);
  CALL2(CHKREF(YastYfix_let_body_setter),T2,o_);
  QRET(o_);
}

FUNCODEDEF(fun_19) {
  ARG(o_, 0);
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YastYlocals_functions),o_);
  T0 = CALL2(CHKREF(YmacrosYmap),CHKREF(Yast_linearizeYinsert_boxX),T1);
  CALL2(CHKREF(YastYlocals_functions_setter),T0,o_);
  T5 = CALL1(CHKREF(YastYlocals_body),o_);
  T4 = CALL1(CHKREF(YastYlocals_bindings),o_);
  T3 = CALL2(CHKREF(Yast_linearizeYboxify_mutable_bindings),T5,T4);
  T2 = CALL1(CHKREF(Yast_linearizeYinsert_boxX),T3);
  CALL2(CHKREF(YastYlocals_body_setter),T2,o_);
  QRET(o_);
}

FUNCODEDEF(fun_loop_20) {
  ARG(bindings_, 0);
  ARG(res_, 1);
  P creatorF1587;
  P bindingF1586;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T21 = CALL1(CHKREF(YmacrosYemptyQ),bindings_);
  if (T21 != YPfalse) {
    T20 = CALL2(CHKREF(YmacrosYpair),FREEREF(1),res_);
    T19 = CALL1(CHKREF(YruntimeYrevX),T20);
    T0 = T19;
  } else {
    T18 = CALL1(CHKREF(Yhead),bindings_);
    bindingF1586 = T18;
    T17 = CALL1(CHKREF(YastYbinding_mutableQ),bindingF1586);
    if (T17 != YPfalse) {
      T16 = (P)YPpair(CHKREF(Yast_linearizeYLbox_creationG),Ynil);
      T15 = (P)YPpair(CHKREF(Yast_linearizeYbox_reference),Ynil);
      T14 = (P)YPpair(CHKREF(YastYLlocal_referenceG),Ynil);
      T13 = (P)YPpair(CHKREF(YastYreference_binding),Ynil);
      T12 = (P)YPpair(bindingF1586,Ynil);
      T11 = CALL3(CHKREF(YPisa),T14,T13,T12);
      T10 = (P)YPpair(T11,Ynil);
      T9 = CALL3(CHKREF(YPisa),T16,T15,T10);
      creatorF1587 = T9;
      T8 = CALL2(CHKREF(YmacrosYpair),creatorF1587,res_);
      T7 = CALL1(CHKREF(Ytail),bindings_);
      a1 = T8;
      a2 = T7;
      res_ = a1;
      bindings_ = a2;
      goto loop;
      T5 = T6;
      T2 = T5;
    } else {
      T4 = CALL1(CHKREF(Ytail),bindings_);
      a1 = res_;
      a2 = T4;
      res_ = a1;
      bindings_ = a2;
      goto loop;
      T2 = T3;
    }
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_21) {
  ARG(bindings_, 0);
  ARG(form_, 1);
  P loopF1588;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = FUNSHELL(1,fun_loop_20,2);
  loopF1588 = T3;
  FUNINIT(loopF1588, 2,loopF1588,form_);
  T2 = KCALL2(loopF1588,Ynil,bindings_);
  T1 = T2;
  T0 = CALL1(CHKREF(YastYsequentialize),T1);
  QRET(T0);
}

FUNCODEDEF(fun_22) {
  ARG(r_, 0);
  ARG(exp_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL3(CHKREF(YastYobjectify),exp_,r_,YPfalse);
  T0 = CALL1(CHKREF(Yast_linearizeYinsert_boxX),T1);
  QRET(T0);
}

FUNCODEDEF(fun_23) {
  ARG(o_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yast_linearizeYupdate_walkX),CHKREF(Yast_linearizeYdo_call_referencesX),o_);
  QRET(T0);
}

FUNCODEDEF(fun_24) {
  ARG(o_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Yast_linearizeYdo_do_call_referencesX),o_);
  QRET(T0);
}

FUNCODEDEF(fun_25) {
  ARG(o_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  CALL1(CHKREF(Yast_linearizeYdo_do_call_referencesX),o_);
  T3 = CALL1(CHKREF(YastYapplication_function),o_);
  T2 = CALL2(CHKREF(YisaQ),T3,CHKREF(YastYLlocal_referenceG));
  if (T2 != YPfalse) {
    T1 = CALL1(CHKREF(YastYapplication_function),o_);
    T0 = CALL2(CHKREF(YastYreference_called_functionQ_setter),YPtrue,T1);
  } else {
  }
  QRET(o_);
}

FUNCODEDEF(fun_26) {
  ARG(o_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Yast_linearizeYdo_call_referencesX),o_);
  QRET(T0);
}

FUNCODEDEF(fun_27) {
  ARG(o_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yast_linearizeYupdate_walkX),CHKREF(Yast_linearizeYdo_dynamic_extentX),o_);
  QRET(T0);
}

FUNCODEDEF(fun_28) {
  ARG(o_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Yast_linearizeYdo_do_dynamic_extentX),o_);
  QRET(T0);
}

FUNCODEDEF(fun_29) {
  ARG(o_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  CALL1(CHKREF(Yast_linearizeYdo_do_dynamic_extentX),o_);
  T3 = CALL1(CHKREF(YastYreference_called_functionQ),o_);
  T2 = CALL1(CHKREF(Ynot),T3);
  if (T2 != YPfalse) {
    T1 = CALL1(CHKREF(YastYreference_binding),o_);
    T0 = CALL2(CHKREF(YastYbinding_dynamic_extentQ_setter),YPfalse,T1);
  } else {
  }
  QRET(o_);
}

FUNCODEDEF(fun_30) {
  ARG(o_, 0);
  P T0;
  P a1;
loop:
  CALL1(CHKREF(Yast_linearizeYanalyze_call_references),o_);
  T0 = CALL1(CHKREF(Yast_linearizeYdo_dynamic_extentX),o_);
  QRET(T0);
}

FUNCODEDEF(fun_31) {
  ARG(o_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yast_linearizeYupdate_walkX),CHKREF(Yast_linearizeYdo_call_upgradesX),o_);
  QRET(T0);
}

FUNCODEDEF(fun_32) {
  ARG(o_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Yast_linearizeYdo_do_call_upgradesX),o_);
  QRET(T0);
}

FUNCODEDEF(fun_33) {
  ARG(o_, 0);
  P tmpF1589;
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T5 = CALL2(CHKREF(YisaQ),o_,CHKREF(YastYLglobal_referenceG));
  tmpF1589 = T5;
  if (tmpF1589 != YPfalse) {
    T4 = CALL1(CHKREF(YastYreference_binding),o_);
    T3 = CALL1(CHKREF(YastYbinding_name),T4);
    T2 = CALL2(CHKREF(YmacrosYEE),T3,CHKREF(lit_31));
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_34) {
  ARG(o_, 0);
  P tmpF1594;
  P tmpF1593;
  P tmpF1592;
  P tmpF1591;
  P metF1590;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  CALL1(CHKREF(Yast_linearizeYdo_do_call_upgradesX),o_);
  T28 = CALL1(CHKREF(YastYapplication_function),o_);
  T27 = CALL2(CHKREF(YisaQ),T28,CHKREF(YastYLlocal_referenceG));
  if (T27 != YPfalse) {
    T26 = CALL1(CHKREF(YastYapplication_function),o_);
    T25 = CALL1(CHKREF(YastYreference_binding),T26);
    T24 = CALL1(CHKREF(YastYbinding_value),T25);
    metF1590 = T24;
    T23 = CALL2(CHKREF(YisaQ),metF1590,CHKREF(YastYLast_functionG));
    tmpF1591 = T23;
    if (tmpF1591 != YPfalse) {
      T22 = CALL2(CHKREF(YruntimeYcompose),CHKREF(Yast_linearizeYunconstrained_typeQ),CHKREF(YastYbinding_type));
      T21 = CALL1(CHKREF(YastYfunction_bindings),metF1590);
      T20 = CALL2(CHKREF(YruntimeYallQ),T22,T21);
      tmpF1592 = T20;
      if (tmpF1592 != YPfalse) {
        T19 = CALL1(CHKREF(YastYfunction_value),metF1590);
        T18 = CALL1(CHKREF(Yast_linearizeYunconstrained_typeQ),T19);
        tmpF1593 = T18;
        if (tmpF1593 != YPfalse) {
          T17 = CALL1(CHKREF(YastYfunction_naryQ),metF1590);
          T16 = CALL1(CHKREF(Ynot),T17);
          tmpF1594 = T16;
          if (tmpF1594 != YPfalse) {
            T15 = CALL1(CHKREF(YastYapplication_arguments),o_);
            T14 = CALL1(CHKREF(YruntimeYlen),T15);
            T13 = CALL1(CHKREF(YastYfunction_bindings),metF1590);
            T12 = CALL1(CHKREF(YruntimeYlen),T13);
            T11 = CALL2(CHKREF(YruntimeYE),T14,T12);
            T10 = T11;
          } else {
            T10 = YPfalse;
          }
          T9 = T10;
          T8 = T9;
        } else {
          T8 = YPfalse;
        }
        T7 = T8;
        T6 = T7;
      } else {
        T6 = YPfalse;
      }
      T5 = T6;
      T4 = T5;
    } else {
      T4 = YPfalse;
    }
    T3 = T4;
    if (T3 != YPfalse) {
      T2 = CALL2(CHKREF(YastYapplication_knownQ_setter),YPtrue,o_);
      T1 = T2;
    } else {
      T1 = YPfalse;
    }
    T0 = T1;
  } else {
  }
  QRET(o_);
}

FUNCODEDEF(fun_35) {
  ARG(o_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Yast_linearizeYdo_call_upgradesX),o_);
  QRET(T0);
}

FUNCODEDEF(fun_36) {
  ARG(x_, 0);
  ARG(p_, 1);
  P a1,a2;
loop:
  RET(x_);
}

FUNCODEDEF(fun_37) {
  ARG(x_, 0);
  ARG(p_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL2(CHKREF(Yapply),CHKREF(Ylst),x_);
  RET(T0);
}

FUNCODEDEF(fun_38) {
  ARG(x_, 0);
  ARG(p_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YmacrosYpair),CHKREF(Yast_linearizeYLfree_environmentG),x_);
  T0 = CALL2(CHKREF(Yapply),CHKREF(YruntimeYfabs),T1);
  RET(T0);
}

FUNCODEDEF(Yast_linearizeYfree_environment) {
  ARG(t_, 0);
  ARG(h_, 1);
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = (P)YPpair(CHKREF(Yast_linearizeYLfree_environmentG),Ynil);
  T4 = (P)YPpair(CHKREF(Ytail),Ynil);
  T3 = (P)YPpair(CHKREF(Yhead),T4);
  T2 = (P)YPpair(t_,Ynil);
  T1 = (P)YPpair(h_,T2);
  T0 = CALL3(CHKREF(YPisa),T5,T3,T1);
  QRET(T0);
}

FUNCODEDEF(fun_40) {
  ARG(e_, 0);
  P a1;
loop:
  RET(CHKREF(Yast_linearizeYDfree_environment_empty));
}

FUNCODEDEF(fun_41) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYfunction_free));
  QRET(T0);
}

FUNCODEDEF(fun_42) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYfunction_free));
  QRET(T0);
}

FUNCODEDEF(fun_43) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeYempty),CHKREF(Yast_linearizeYLfree_environmentG));
  QRET(T0);
}

FUNCODEDEF(fun_44) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYreference_offset));
  QRET(T0);
}

FUNCODEDEF(fun_45) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYreference_offset));
  QRET(T0);
}

FUNCODEDEF(fun_46) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_47) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYreference_selfQ));
  QRET(T0);
}

FUNCODEDEF(fun_48) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYreference_selfQ));
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_50) {
  ARG(o_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL3(CHKREF(Yast_linearizeYlift_proceduresX),o_,YPfalse,Ynil);
  QRET(T0);
}

FUNCODEDEF(fun_51) {
  ARG(bindings_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P T0;
  P a1,a2,a3;
loop:
  T0 = CALLN(CHKREF(Yast_linearizeYupdate_walkX),4,CHKREF(Yast_linearizeYlift_proceduresX),o_,flat_fun_,bindings_);
  QRET(T0);
}

FUNCODEDEF(fun_52) {
  ARG(bindings_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P offsetF1596;
  P bF1595;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2,a3;
loop:
  T16 = CALL1(CHKREF(YastYreference_binding),o_);
  bF1595 = T16;
  T15 = CALL2(CHKREF(YruntimeYmemQ),bindings_,bF1595);
  if (T15 != YPfalse) {
    T1 = o_;
  } else {
    T14 = CALL2(CHKREF(Yast_linearizeYadjoin_free_bindingX),flat_fun_,o_);
    offsetF1596 = T14;
    T13 = (P)YPpair(CHKREF(Yast_linearizeYLfree_referenceG),Ynil);
    T12 = (P)YPpair(CHKREF(Yast_linearizeYreference_selfQ),Ynil);
    T11 = (P)YPpair(CHKREF(Yast_linearizeYreference_offset),T12);
    T10 = (P)YPpair(CHKREF(YastYreference_binding),T11);
    T9 = CALL1(CHKREF(YastYreference_binding),o_);
    T8 = CALL1(CHKREF(YastYfunction_binding),flat_fun_);
    T7 = CALL2(CHKREF(YmacrosYEE),T9,T8);
    T6 = (P)YPpair(T7,Ynil);
    T5 = (P)YPpair(offsetF1596,T6);
    T4 = (P)YPpair(bF1595,T5);
    T3 = CALL3(CHKREF(YPisa),T13,T10,T4);
    T2 = T3;
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_add_53) {
  ARG(freeT_, 0);
  P tailF1597;
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T5 = CALL1(CHKREF(Ytail),freeT_);
  tailF1597 = T5;
  T4 = CALL1(CHKREF(YmacrosYemptyQ),tailF1597);
  if (T4 != YPfalse) {
    T3 = CALL2(CHKREF(Ytail_setter),FREEREF(1),freeT_);
    T1 = T3;
  } else {
    a1 = tailF1597;
    freeT_ = a1;
    goto loop;
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_check_54) {
  ARG(freeT_, 0);
  ARG(i_, 1);
  P addF1599;
  P new_envF1598;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T19 = CALL1(CHKREF(YmacrosYemptyQ),freeT_);
  if (T19 != YPfalse) {
    T18 = CALL1(CHKREF(YruntimeYempty),CHKREF(Yast_linearizeYLfree_environmentG));
    T17 = CALL2(CHKREF(Yast_linearizeYfree_environment),FREEREF(1),T18);
    new_envF1598 = T17;
    T16 = CALL1(CHKREF(Yast_linearizeYfunction_free),FREEREF(2));
    T15 = CALL1(CHKREF(YmacrosYemptyQ),T16);
    if (T15 != YPfalse) {
      T14 = CALL2(CHKREF(Yast_linearizeYfunction_free_setter),new_envF1598,FREEREF(2));
    } else {
      T13 = FUNSHELL(1,fun_add_53,2);
      addF1599 = T13;
      FUNINIT(addF1599, 2,addF1599,new_envF1598);
      T12 = CALL1(CHKREF(Yast_linearizeYfunction_free),FREEREF(2));
      T11 = KCALL1(addF1599,T12);
      T10 = T11;
    }
    T9 = i_;
    T0 = T9;
  } else {
    T8 = CALL1(CHKREF(YastYreference_binding),FREEREF(1));
    T7 = CALL1(CHKREF(Yhead),freeT_);
    T6 = CALL1(CHKREF(YastYreference_binding),T7);
    T5 = CALL2(CHKREF(YmacrosYEE),T8,T6);
    if (T5 != YPfalse) {
      T1 = i_;
    } else {
      T4 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
      T3 = CALL1(CHKREF(Ytail),freeT_);
      a1 = T4;
      a2 = T3;
      i_ = a1;
      freeT_ = a2;
      goto loop;
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  ARG(ref_, 0);
  ARG(flat_fun_, 1);
  P checkF1600;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = FUNSHELL(1,fun_check_54,3);
  checkF1600 = T3;
  FUNINIT(checkF1600, 3,checkF1600,ref_,flat_fun_);
  T2 = CALL1(CHKREF(Yast_linearizeYfunction_free),flat_fun_);
  T1 = CALL2(checkF1600,YPint((P)0),T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_56) {
  ARG(bindings_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P new_bindingsF1601;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T1 = CALL1(CHKREF(YastYfix_let_arguments),o_);
  T0 = CALL3(CHKREF(Yast_linearizeYlift_proceduresX),T1,flat_fun_,bindings_);
  CALL2(CHKREF(YastYfix_let_arguments_setter),T0,o_);
  T6 = CALL1(CHKREF(YastYfix_let_bindings),o_);
  T5 = CALL2(CHKREF(YmacrosYcat),T6,bindings_);
  new_bindingsF1601 = T5;
  T4 = CALL1(CHKREF(YastYfix_let_body),o_);
  T3 = CALL3(CHKREF(Yast_linearizeYlift_proceduresX),T4,flat_fun_,new_bindingsF1601);
  CALL2(CHKREF(YastYfix_let_body_setter),T3,o_);
  T2 = o_;
  QRET(T2);
}

FUNCODEDEF(fun_57) {
  ARG(bindings_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P new_bindingsF1602;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T7 = CALL1(CHKREF(YastYlocals_bindings),o_);
  T6 = CALL2(CHKREF(YmacrosYcat),T7,bindings_);
  new_bindingsF1602 = T6;
  T3 = CALL3(CHKREF(YruntimeYrcurry),CHKREF(Yast_linearizeYlift_proceduresX),flat_fun_,new_bindingsF1602);
  T2 = CALL1(CHKREF(YastYlocals_functions),o_);
  T1 = CALL2(CHKREF(YmacrosYmap),T3,T2);
  CALL2(CHKREF(YastYlocals_functions_setter),T1,o_);
  T5 = CALL1(CHKREF(YastYlocals_body),o_);
  T4 = CALL3(CHKREF(Yast_linearizeYlift_proceduresX),T5,flat_fun_,new_bindingsF1602);
  CALL2(CHKREF(YastYlocals_body_setter),T4,o_);
  T0 = o_;
  QRET(T0);
}

FUNCODEDEF(fun_58) {
  ARG(bindings_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T2 = CALL1(CHKREF(YastYfunction_body),o_);
  T1 = CALL1(CHKREF(YastYfunction_bindings),o_);
  T0 = CALL3(CHKREF(Yast_linearizeYlift_proceduresX),T2,YPfalse,T1);
  CALL2(CHKREF(YastYfunction_body_setter),T0,o_);
  QRET(o_);
}

FUNCODEDEF(fun_59) {
  ARG(bindings_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P a1,a2,a3;
loop:
  QRET(o_);
}

FUNCODEDEF(fun_60) {
  ARG(bindings_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P freeTF1606;
  P new_funF1605;
  P bodyF1604;
  P local_bindingsF1603;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T24 = CALL1(CHKREF(YastYfunction_bindings),o_);
  local_bindingsF1603 = T24;
  T23 = CALL1(CHKREF(YastYfunction_body),o_);
  bodyF1604 = T23;
  T22 = (P)YPpair(CHKREF(Yast_linearizeYLflat_functionG),Ynil);
  T21 = (P)YPpair(CHKREF(Yast_linearizeYfunction_free),Ynil);
  T20 = (P)YPpair(CHKREF(YastYfunction_body),T21);
  T19 = (P)YPpair(CHKREF(YastYfunction_signature),T20);
  T18 = (P)YPpair(CHKREF(YastYfunction_debug_name),T19);
  T17 = (P)YPpair(CHKREF(YastYfunction_binding),T18);
  T16 = CALL1(CHKREF(YastYfunction_binding),o_);
  T15 = CALL1(CHKREF(YastYfunction_debug_name),o_);
  T14 = CALL1(CHKREF(YastYfunction_signature),o_);
  T13 = CALL1(CHKREF(YruntimeYempty),CHKREF(Yast_linearizeYLfree_environmentG));
  T12 = (P)YPpair(T13,Ynil);
  T11 = (P)YPpair(bodyF1604,T12);
  T10 = (P)YPpair(T14,T11);
  T9 = (P)YPpair(T15,T10);
  T8 = (P)YPpair(T16,T9);
  T7 = CALL3(CHKREF(YPisa),T22,T17,T8);
  new_funF1605 = T7;
  T3 = CALL3(CHKREF(Yast_linearizeYlift_proceduresX),bodyF1604,new_funF1605,local_bindingsF1603);
  CALL2(CHKREF(YastYfunction_body_setter),T3,new_funF1605);
  T6 = CALL1(CHKREF(Yast_linearizeYfunction_free),new_funF1605);
  freeTF1606 = T6;
  T5 = CALL3(CHKREF(Yast_linearizeYlift_proceduresX),freeTF1606,flat_fun_,bindings_);
  T4 = CALL2(CHKREF(Yast_linearizeYfunction_free_setter),T5,new_funF1605);
  T2 = new_funF1605;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_61) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYprogram_form));
  QRET(T0);
}

FUNCODEDEF(fun_62) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYprogram_form));
  QRET(T0);
}

FUNCODEDEF(fun_63) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_64) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYprogram_quotations));
  QRET(T0);
}

FUNCODEDEF(fun_65) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYprogram_quotations));
  QRET(T0);
}

FUNCODEDEF(fun_66) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYfab),CHKREF(YruntimeYLtabG),YPint((P)40));
  QRET(T0);
}

FUNCODEDEF(fun_67) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYprogram_definitions));
  QRET(T0);
}

FUNCODEDEF(fun_68) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYprogram_definitions));
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(Ynil);
}

FUNCODEDEF(fun_70) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYform_program));
  QRET(T0);
}

FUNCODEDEF(fun_71) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYform_program));
  QRET(T0);
}

FUNCODEDEF(fun_72) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_73) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYform_quotations));
  QRET(T0);
}

FUNCODEDEF(fun_74) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYform_quotations));
  QRET(T0);
}

FUNCODEDEF(fun_75) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(Ynil);
}

FUNCODEDEF(fun_76) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYform_definitions));
  QRET(T0);
}

FUNCODEDEF(fun_77) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYform_definitions));
  QRET(T0);
}

FUNCODEDEF(fun_78) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(Ynil);
}

FUNCODEDEF(fun_79) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYfunction_index));
  QRET(T0);
}

FUNCODEDEF(fun_80) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYfunction_index));
  QRET(T0);
}

FUNCODEDEF(fun_81) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_82) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYfunction_temporaries));
  QRET(T0);
}

FUNCODEDEF(fun_83) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYfunction_temporaries));
  QRET(T0);
}

FUNCODEDEF(fun_84) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(Ynil);
}

FUNCODEDEF(fun_85) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYfunction_registers));
  QRET(T0);
}

FUNCODEDEF(fun_86) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYfunction_registers));
  QRET(T0);
}

FUNCODEDEF(fun_87) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(Ynil);
}

FUNCODEDEF(fun_88) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYfunction_self_recursiveQ));
  QRET(T0);
}

FUNCODEDEF(fun_89) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYfunction_self_recursiveQ));
  QRET(T0);
}

FUNCODEDEF(fun_90) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_91) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYfunction_temporaries));
  QRET(T0);
}

FUNCODEDEF(fun_92) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYfunction_temporaries));
  QRET(T0);
}

FUNCODEDEF(fun_93) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(Ynil);
}

FUNCODEDEF(fun_94) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYfunction_registers));
  QRET(T0);
}

FUNCODEDEF(fun_95) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYfunction_registers));
  QRET(T0);
}

FUNCODEDEF(fun_96) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(Ynil);
}

FUNCODEDEF(fun_97) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYfunction_self_recursiveQ));
  QRET(T0);
}

FUNCODEDEF(fun_98) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYfunction_self_recursiveQ));
  QRET(T0);
}

FUNCODEDEF(fun_99) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_100) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYclosure_creation_index));
  QRET(T0);
}

FUNCODEDEF(fun_101) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYclosure_creation_index));
  QRET(T0);
}

FUNCODEDEF(fun_102) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_103) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYclosure_creation_bindings));
  QRET(T0);
}

FUNCODEDEF(fun_104) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYclosure_creation_bindings));
  QRET(T0);
}

FUNCODEDEF(fun_105) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_106) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYclosure_creation_free));
  QRET(T0);
}

FUNCODEDEF(fun_107) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYclosure_creation_free));
  QRET(T0);
}

FUNCODEDEF(fun_108) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_109) {
  ARG(o_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Ylst),o_);
  QRET(T0);
}

FUNCODEDEF(fun_inner_110) {
  ARG(r_, 0);
  ARG(ss_, 1);
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T7 = CALL1(CHKREF(YmacrosYemptyQ),ss_);
  if (T7 != YPfalse) {
    T6 = CALL1(CHKREF(Ytail),FREEREF(1));
    T5 = KCALL2(FREEREF(2),T6,r_);
    T0 = T5;
  } else {
    T4 = CALL1(CHKREF(Ytail),ss_);
    T3 = CALL1(CHKREF(Yhead),ss_);
    T2 = CALL2(CHKREF(YmacrosYpair),T3,r_);
    a1 = T4;
    a2 = T2;
    ss_ = a1;
    r_ = a2;
    goto loop;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_loop_111) {
  ARG(r_, 0);
  ARG(s_, 1);
  P innerF1607;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T7 = CALL1(CHKREF(YmacrosYemptyQ),s_);
  if (T7 != YPfalse) {
    T6 = CALL1(CHKREF(YruntimeYrevX),r_);
    T0 = T6;
  } else {
    T5 = FUNSHELL(1,fun_inner_110,3);
    innerF1607 = T5;
    FUNINIT(innerF1607, 3,innerF1607,s_,FREEREF(0));
    T4 = CALL1(CHKREF(Yhead),s_);
    T3 = CALL1(CHKREF(Yast_linearizeYflatten_seqs),T4);
    T2 = KCALL2(innerF1607,T3,r_);
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_112) {
  ARG(o_, 0);
  P loopF1608;
  P T2,T1,T0;
  P a1;
loop:
  T2 = FUNSHELL(1,fun_loop_111,1);
  loopF1608 = T2;
  FUNINIT(loopF1608, 1,loopF1608);
  T1 = KCALL2(loopF1608,o_,Ynil);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_113) {
  ARG(x_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = (P)YPpair(CHKREF(Yast_linearizeYLtop_level_formG),Ynil);
  T2 = (P)YPpair(CHKREF(Yast_linearizeYform_program),Ynil);
  T1 = (P)YPpair(x_,Ynil);
  T0 = CALL3(CHKREF(YPisa),T3,T2,T1);
  QRET(T0);
}

FUNCODEDEF(fun_114) {
  ARG(programs_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = fun_113;
  T0 = CALL2(CHKREF(YmacrosYmap),T1,programs_);
  QRET(T0);
}

FUNCODEDEF(fun_115) {
  ARG(form_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL3(CHKREF(Yast_linearizeYextractX),form_,form_,FREEREF(0));
  QRET(T0);
}

FUNCODEDEF(fun_116) {
  ARG(o_, 0);
  P resultF1610;
  P formsF1609;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = CALL1(CHKREF(Yast_linearizeYflatten_seqs),o_);
  T7 = CALL1(CHKREF(Yast_linearizeYas_top_level_forms),T8);
  formsF1609 = T7;
  T6 = (P)YPpair(CHKREF(Yast_linearizeYLflattened_programG),Ynil);
  T5 = CALL3(CHKREF(YPisa),T6,Ynil,Ynil);
  resultF1610 = T5;
  T4 = FUNFAB(fun_115,1,resultF1610);
  T3 = CALL2(CHKREF(YmacrosYmap),T4,formsF1609);
  T2 = CALL1(CHKREF(YastYsequentialize),T3);
  CALL2(CHKREF(Yast_linearizeYprogram_form_setter),T2,resultF1610);
  T1 = resultF1610;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_117) {
  ARG(result_, 0);
  ARG(form_, 1);
  ARG(o_, 2);
  P T0;
  P a1,a2,a3;
loop:
  T0 = CALLN(CHKREF(Yast_linearizeYupdate_walkX),4,CHKREF(Yast_linearizeYextractX),o_,form_,result_);
  QRET(T0);
}

FUNCODEDEF(fun_118) {
  ARG(result_, 0);
  ARG(form_, 1);
  ARG(o_, 2);
  P tmpF1619;
  P tmpF1618;
  P tmpF1617;
  P tmpF1616;
  P qbF1615;
  P probeF1614;
  P indexF1613;
  P qbTF1612;
  P valueF1611;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T42 = CALL1(CHKREF(YastYconstant_value),o_);
  valueF1611 = T42;
  T41 = CALL2(CHKREF(YmacrosYEE),valueF1611,YPfalse);
  tmpF1616 = T41;
  if (tmpF1616 != YPfalse) {
    T30 = tmpF1616;
  } else {
    T40 = CALL2(CHKREF(YmacrosYEE),valueF1611,YPtrue);
    tmpF1617 = T40;
    if (tmpF1617 != YPfalse) {
      T32 = tmpF1617;
    } else {
      T39 = CALL2(CHKREF(YmacrosYEE),valueF1611,Ynil);
      tmpF1618 = T39;
      if (tmpF1618 != YPfalse) {
        T34 = tmpF1618;
      } else {
        T38 = CALL2(CHKREF(YisaQ),valueF1611,CHKREF(YLintG));
        tmpF1619 = T38;
        if (tmpF1619 != YPfalse) {
          T36 = tmpF1619;
        } else {
          T37 = CALL2(CHKREF(YisaQ),valueF1611,CHKREF(YLchrG));
          T36 = T37;
        }
        T35 = T36;
        T34 = T35;
      }
      T33 = T34;
      T32 = T33;
    }
    T31 = T32;
    T30 = T31;
  }
  T29 = T30;
  if (T29 != YPfalse) {
    T1 = o_;
  } else {
    T28 = CALL1(CHKREF(Yast_linearizeYprogram_quotations),result_);
    qbTF1612 = T28;
    T27 = CALL1(CHKREF(YruntimeYlen),qbTF1612);
    indexF1613 = T27;
    T26 = CALL2(CHKREF(YruntimeYelt),qbTF1612,valueF1611);
    probeF1614 = T26;
    T25 = CALL2(CHKREF(YruntimeYNEE),probeF1614,CHKREF(Ynul));
    if (T25 != YPfalse) {
      T24 = (P)YPpair(CHKREF(YastYLglobal_referenceG),Ynil);
      T23 = (P)YPpair(CHKREF(YastYreference_binding),Ynil);
      T22 = (P)YPpair(probeF1614,Ynil);
      T21 = CALL3(CHKREF(YPisa),T24,T23,T22);
      T5 = T21;
    } else {
      T20 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
      T19 = (P)YPpair(CHKREF(YastYbinding_info),Ynil);
      T18 = (P)YPpair(CHKREF(YastYbinding_name),T19);
      T17 = (P)YPpair(CHKREF(YastYbinding_kind),T18);
      T16 = (P)YPpair(valueF1611,Ynil);
      T15 = (P)YPpair(indexF1613,T16);
      T14 = (P)YPpair(CHKREF(lit_90),T15);
      T13 = CALL3(CHKREF(YPisa),T20,T17,T14);
      qbF1615 = T13;
      CALL3(CHKREF(YruntimeYelt_setter),qbF1615,qbTF1612,valueF1611);
      T8 = CALL1(CHKREF(Yast_linearizeYform_quotations),form_);
      T7 = CALL2(CHKREF(YmacrosYpair),qbF1615,T8);
      CALL2(CHKREF(Yast_linearizeYform_quotations_setter),T7,form_);
      T12 = (P)YPpair(CHKREF(YastYLglobal_referenceG),Ynil);
      T11 = (P)YPpair(CHKREF(YastYreference_binding),Ynil);
      T10 = (P)YPpair(qbF1615,Ynil);
      T9 = CALL3(CHKREF(YPisa),T12,T11,T10);
      T6 = T9;
      T5 = T6;
    }
    T4 = T5;
    T3 = T4;
    T2 = T3;
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_119) {
  ARG(result_, 0);
  ARG(form_, 1);
  ARG(o_, 2);
  P a1,a2,a3;
loop:
  QRET(o_);
}

FUNCODEDEF(fun_120) {
  ARG(binding_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL1(CHKREF(YastYbinding_type),binding_);
  T1 = CALL3(CHKREF(Yast_linearizeYextractX),T2,FREEREF(1),FREEREF(0));
  T0 = CALL2(CHKREF(YastYbinding_type_setter),T1,binding_);
  QRET(T0);
}

FUNCODEDEF(fun_121) {
  ARG(result_, 0);
  ARG(form_, 1);
  ARG(o_, 2);
  P indexF1625;
  P free_bindingsF1624;
  P signatureF1623;
  P bindingF1622;
  P debug_nameF1621;
  P new_bodyF1620;
  P T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T1 = CALL1(CHKREF(YastYfunction_debug_name),o_);
  T0 = CALL3(CHKREF(Yast_linearizeYextractX),T1,form_,result_);
  CALL2(CHKREF(YastYfunction_debug_name_setter),T0,o_);
  T3 = CALL1(CHKREF(YastYfunction_signature),o_);
  T2 = CALL3(CHKREF(Yast_linearizeYextractX),T3,form_,result_);
  CALL2(CHKREF(YastYfunction_signature_setter),T2,o_);
  T29 = CALL1(CHKREF(YastYfunction_body),o_);
  T28 = CALL3(CHKREF(Yast_linearizeYextractX),T29,form_,result_);
  new_bodyF1620 = T28;
  T27 = CALL1(CHKREF(YastYfunction_debug_name),o_);
  debug_nameF1621 = T27;
  T26 = CALL1(CHKREF(YastYfunction_binding),o_);
  bindingF1622 = T26;
  T25 = CALL1(CHKREF(YastYfunction_signature),o_);
  signatureF1623 = T25;
  T9 = FUNFAB(fun_120,2,result_,form_);
  T8 = CALL1(CHKREF(YastYfunction_bindings),o_);
  CALL2(CHKREF(YruntimeYdo),T9,T8);
  T24 = CALL1(CHKREF(Yast_linearizeYfunction_free),o_);
  T23 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYreference_binding),T24);
  free_bindingsF1624 = T23;
  T22 = CALLN(CHKREF(Yast_linearizeYadjoin_definitionX),7,form_,result_,debug_nameF1621,bindingF1622,signatureF1623,new_bodyF1620,free_bindingsF1624);
  indexF1625 = T22;
  T21 = (P)YPpair(CHKREF(Yast_linearizeYLclosure_creationG),Ynil);
  T20 = (P)YPpair(CHKREF(Yast_linearizeYclosure_creation_free),Ynil);
  T19 = (P)YPpair(CHKREF(Yast_linearizeYclosure_creation_bindings),T20);
  T18 = (P)YPpair(CHKREF(Yast_linearizeYclosure_creation_index),T19);
  T17 = CALL1(CHKREF(YastYfunction_bindings),o_);
  T16 = CALL1(CHKREF(Yast_linearizeYfunction_free),o_);
  T15 = (P)YPpair(T16,Ynil);
  T14 = (P)YPpair(T17,T15);
  T13 = (P)YPpair(indexF1625,T14);
  T12 = CALL3(CHKREF(YPisa),T21,T18,T13);
  T11 = T12;
  T10 = T11;
  T7 = T10;
  T6 = T7;
  T5 = T6;
  T4 = T5;
  QRET(T4);
}

FUNCODEDEF(fun_122) {
  ARG(result_, 0);
  ARG(form_, 1);
  ARG(o_, 2);
  P definitionF1628;
  P bodyF1627;
  P pF1626;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T25 = CALL1(CHKREF(YastYassignment_form),o_);
  pF1626 = T25;
  T24 = CALL1(CHKREF(YastYfunction_body),pF1626);
  T23 = CALL3(CHKREF(Yast_linearizeYextractX),T24,form_,result_);
  bodyF1627 = T23;
  T22 = (P)YPpair(CHKREF(Yast_linearizeYLprimitive_definitionG),Ynil);
  T21 = (P)YPpair(CHKREF(YastYfunction_body),Ynil);
  T20 = (P)YPpair(CHKREF(YastYfunction_signature),T21);
  T19 = (P)YPpair(CHKREF(YastYfunction_debug_name),T20);
  T18 = (P)YPpair(CHKREF(YastYfunction_binding),T19);
  T17 = CALL1(CHKREF(YastYfunction_binding),pF1626);
  T16 = CALL1(CHKREF(YastYfunction_debug_name),pF1626);
  T15 = CALL1(CHKREF(YastYfunction_signature),pF1626);
  T14 = (P)YPpair(bodyF1627,Ynil);
  T13 = (P)YPpair(T15,T14);
  T12 = (P)YPpair(T16,T13);
  T11 = (P)YPpair(T17,T12);
  T10 = CALL3(CHKREF(YPisa),T22,T18,T11);
  definitionF1628 = T10;
  T4 = CALL1(CHKREF(Yast_linearizeYprogram_definitions),result_);
  T3 = CALL2(CHKREF(YmacrosYpair),definitionF1628,T4);
  CALL2(CHKREF(Yast_linearizeYprogram_definitions_setter),T3,result_);
  T9 = (P)YPpair(CHKREF(YastYLconstantG),Ynil);
  T8 = (P)YPpair(CHKREF(YastYconstant_value),Ynil);
  T7 = (P)YPpair(YPfalse,Ynil);
  T6 = CALL3(CHKREF(YPisa),T9,T8,T7);
  T5 = CALL3(CHKREF(Yast_linearizeYextractX),T6,form_,result_);
  T2 = T5;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_123) {
  ARG(free_, 0);
  ARG(body_, 1);
  ARG(signature_, 2);
  ARG(binding_, 3);
  ARG(debug_name_, 4);
  ARG(result_, 5);
  ARG(form_, 6);
  P definitionF1631;
  P new_indexF1630;
  P definitionsF1629;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6,a7;
loop:
  T21 = CALL1(CHKREF(Yast_linearizeYprogram_definitions),result_);
  definitionsF1629 = T21;
  T20 = CALL1(CHKREF(YruntimeYlen),definitionsF1629);
  new_indexF1630 = T20;
  T19 = (P)YPpair(CHKREF(Yast_linearizeYLfunction_definitionG),Ynil);
  T18 = (P)YPpair(CHKREF(Yast_linearizeYfunction_index),Ynil);
  T17 = (P)YPpair(CHKREF(Yast_linearizeYfunction_free),T18);
  T16 = (P)YPpair(CHKREF(YastYfunction_body),T17);
  T15 = (P)YPpair(CHKREF(YastYfunction_signature),T16);
  T14 = (P)YPpair(CHKREF(YastYfunction_debug_name),T15);
  T13 = (P)YPpair(CHKREF(YastYfunction_binding),T14);
  T12 = (P)YPpair(new_indexF1630,Ynil);
  T11 = (P)YPpair(free_,T12);
  T10 = (P)YPpair(body_,T11);
  T9 = (P)YPpair(signature_,T10);
  T8 = (P)YPpair(debug_name_,T9);
  T7 = (P)YPpair(binding_,T8);
  T6 = CALL3(CHKREF(YPisa),T19,T13,T7);
  definitionF1631 = T6;
  T3 = CALL2(CHKREF(YmacrosYpair),definitionF1631,definitionsF1629);
  CALL2(CHKREF(Yast_linearizeYprogram_definitions_setter),T3,result_);
  T5 = CALL1(CHKREF(Yast_linearizeYform_definitions),form_);
  T4 = CALL2(CHKREF(YmacrosYpair),definitionF1631,T5);
  CALL2(CHKREF(Yast_linearizeYform_definitions_setter),T4,form_);
  T2 = new_indexF1630;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_124) {
  ARG(max_count_, 0);
  ARG(o_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(CHKREF(Ylst),o_);
  QRET(T0);
}

FUNCODEDEF(fun_inner_125) {
  ARG(count_, 0);
  ARG(es_, 1);
  ARG(res_, 2);
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2,a3;
loop:
  T17 = CALL1(CHKREF(YmacrosYemptyQ),es_);
  if (T17 != YPfalse) {
    T16 = CALL1(CHKREF(YruntimeYrevX),res_);
    T15 = CALL1(CHKREF(YastYsequentialize),T16);
    T14 = CALL2(CHKREF(YmacrosYpair),T15,FREEREF(1));
    T13 = CALL1(CHKREF(YruntimeYrevX),T14);
    T0 = T13;
  } else {
    T12 = CALL2(CHKREF(YruntimeYE),count_,FREEREF(3));
    if (T12 != YPfalse) {
      T11 = CALL1(CHKREF(YruntimeYrevX),res_);
      T10 = CALL1(CHKREF(YastYsequentialize),T11);
      T9 = CALL2(CHKREF(YmacrosYpair),T10,FREEREF(1));
      T8 = KCALL2(FREEREF(2),T9,es_);
      T1 = T8;
    } else {
      if (YPtrue != YPfalse) {
        T7 = CALL1(CHKREF(Yhead),es_);
        T6 = CALL2(CHKREF(YmacrosYpair),T7,res_);
        T5 = CALL1(CHKREF(Ytail),es_);
        T4 = CALL2(CHKREF(YruntimeYA),count_,YPint((P)1));
        a1 = T6;
        a2 = T5;
        a3 = T4;
        res_ = a1;
        es_ = a2;
        count_ = a3;
        goto loop;
        T2 = T3;
      } else {
        T2 = YPfalse;
      }
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_loop_126) {
  ARG(s_, 0);
  ARG(forms_, 1);
  P innerF1632;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_inner_125,4);
  innerF1632 = T2;
  FUNINIT(innerF1632, 4,innerF1632,forms_,FREEREF(1),FREEREF(0));
  T1 = KCALL3(innerF1632,Ynil,s_,YPint((P)0));
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_127) {
  ARG(max_count_, 0);
  ARG(o_, 1);
  P loopF1633;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_loop_126,2);
  loopF1633 = T2;
  FUNINIT(loopF1633, 2,max_count_,loopF1633);
  T1 = KCALL2(loopF1633,Ynil,o_);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_loop_128) {
  ARG(forms_, 0);
  ARG(i_, 1);
  ARG(defns_, 2);
  ARG(calls_, 3);
  P callF1637;
  P defnF1636;
  P bindingF1635;
  P nameF1634;
  P T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30;
  P T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T45 = CALL1(CHKREF(YmacrosYemptyQ),forms_);
  if (T45 != YPfalse) {
    T35 = CALL1(CHKREF(YruntimeYrevX),defns_);
    CALL2(CHKREF(Yast_linearizeYprogram_definitions_setter),T35,FREEREF(2));
    T44 = (P)YPpair(CHKREF(Yast_linearizeYLtop_level_formG),Ynil);
    T43 = (P)YPpair(CHKREF(Yast_linearizeYform_definitions),Ynil);
    T42 = (P)YPpair(CHKREF(Yast_linearizeYform_program),T43);
    T41 = CALL1(CHKREF(YruntimeYrevX),calls_);
    T40 = CALL1(CHKREF(YastYsequentialize),T41);
    T39 = CALL1(CHKREF(YruntimeYrevX),defns_);
    T38 = (P)YPpair(T39,Ynil);
    T37 = (P)YPpair(T40,T38);
    T36 = CALL3(CHKREF(YPisa),T44,T42,T37);
    CALL2(CHKREF(Yast_linearizeYprogram_form_setter),T36,FREEREF(2));
    T0 = FREEREF(2);
  } else {
    T34 = CALL3(CHKREF(YmacrosYmake_sym),CHKREF(lit_107),i_,CHKREF(lit_106));
    nameF1634 = T34;
    T33 = CALLN(CHKREF(YastYast_define_binding),4,FREEREF(0),nameF1634,YPfalse,CHKREF(lit_105));
    bindingF1635 = T33;
    T32 = (P)YPpair(CHKREF(Yast_linearizeYLprimitive_definitionG),Ynil);
    T31 = (P)YPpair(CHKREF(YastYfunction_body),Ynil);
    T30 = (P)YPpair(CHKREF(YastYfunction_signature),T31);
    T29 = (P)YPpair(CHKREF(YastYfunction_debug_name),T30);
    T28 = (P)YPpair(CHKREF(YastYfunction_binding),T29);
    T27 = CALL2(CHKREF(YastYobjectify_quotation),nameF1634,YPint((P)4));
    T26 = (P)YPpair(CHKREF(YastYLast_signatureG),Ynil);
    T25 = CALL3(CHKREF(YPisa),T26,Ynil,Ynil);
    T24 = CALL1(CHKREF(Yhead),forms_);
    T23 = (P)YPpair(T24,Ynil);
    T22 = (P)YPpair(T25,T23);
    T21 = (P)YPpair(T27,T22);
    T20 = (P)YPpair(bindingF1635,T21);
    T19 = CALL3(CHKREF(YPisa),T32,T28,T20);
    defnF1636 = T19;
    T18 = (P)YPpair(CHKREF(YastYLpredefined_applicationG),Ynil);
    T17 = (P)YPpair(CHKREF(YastYapplication_tailQ),Ynil);
    T16 = (P)YPpair(CHKREF(YastYapplication_arguments),T17);
    T15 = (P)YPpair(CHKREF(YastYapplication_binding),T16);
    T14 = CALL1(CHKREF(YruntimeYempty),CHKREF(YastYLargumentsG));
    T13 = (P)YPpair(YPfalse,Ynil);
    T12 = (P)YPpair(T14,T13);
    T11 = (P)YPpair(bindingF1635,T12);
    T10 = CALL3(CHKREF(YPisa),T18,T15,T11);
    callF1637 = T10;
    T9 = CALL2(CHKREF(YmacrosYpair),callF1637,calls_);
    T8 = CALL2(CHKREF(YmacrosYpair),defnF1636,defns_);
    T7 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
    T6 = CALL1(CHKREF(Ytail),forms_);
    a1 = T9;
    a2 = T8;
    a3 = T7;
    a4 = T6;
    calls_ = a1;
    defns_ = a2;
    i_ = a3;
    forms_ = a4;
    goto loop;
    T4 = T5;
    T3 = T4;
    T2 = T3;
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_129) {
  ARG(max_count_, 0);
  ARG(r_, 1);
  ARG(o_, 2);
  P loopF1640;
  P base_indexF1639;
  P formsF1638;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T9 = CALL1(CHKREF(Yast_linearizeYprogram_form),o_);
  T8 = CALL2(CHKREF(Yast_linearizeYsplit_program),T9,max_count_);
  formsF1638 = T8;
  T7 = CALL1(CHKREF(Yast_linearizeYprogram_definitions),o_);
  T6 = CALL1(CHKREF(YruntimeYlen),T7);
  base_indexF1639 = T6;
  T5 = FUNSHELL(1,fun_loop_128,3);
  loopF1640 = T5;
  FUNINIT(loopF1640, 3,r_,loopF1640,o_);
  T4 = CALL1(CHKREF(Yast_linearizeYprogram_definitions),o_);
  T3 = KCALLN(loopF1640,4,Ynil,T4,YPint((P)0),formsF1638);
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_130) {
  ARG(def_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL3(CHKREF(Yast_linearizeYcollect_temporariesX),def_,def_,Ynil);
  QRET(T0);
}

FUNCODEDEF(fun_131) {
  ARG(o_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = fun_130;
  T1 = CALL1(CHKREF(Yast_linearizeYprogram_definitions),o_);
  T0 = CALL2(CHKREF(YmacrosYmap),T2,T1);
  CALL2(CHKREF(Yast_linearizeYprogram_definitions_setter),T0,o_);
  QRET(o_);
}

FUNCODEDEF(fun_132) {
  ARG(r_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P T0;
  P a1,a2,a3;
loop:
  T0 = CALLN(CHKREF(Yast_linearizeYupdate_walkX),4,CHKREF(Yast_linearizeYcollect_temporariesX),o_,flat_fun_,r_);
  QRET(T0);
}

FUNCODEDEF(fun_133) {
  ARG(r_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P bF1642;
  P bindingF1641;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T9 = CALL1(CHKREF(YastYreference_binding),o_);
  bindingF1641 = T9;
  T8 = CALL2(CHKREF(YruntimeYassocq),bindingF1641,r_);
  bF1642 = T8;
  if (bF1642 != YPfalse) {
    T7 = (P)YPpair(CHKREF(YastYLlocal_referenceG),Ynil);
    T6 = (P)YPpair(CHKREF(YastYreference_binding),Ynil);
    T5 = CALL1(CHKREF(YruntimeYassoc_value),bF1642);
    T4 = (P)YPpair(T5,Ynil);
    T3 = CALL3(CHKREF(YPisa),T7,T6,T4);
    T2 = T3;
  } else {
    T2 = o_;
  }
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_134) {
  ARG(r_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P new_rF1644;
  P new_bindingsF1643;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T1 = CALL1(CHKREF(YastYfix_let_arguments),o_);
  T0 = CALL3(CHKREF(Yast_linearizeYcollect_temporariesX),T1,flat_fun_,r_);
  CALL2(CHKREF(YastYfix_let_arguments_setter),T0,o_);
  T10 = CALL1(CHKREF(YastYfix_let_bindings),o_);
  T9 = CALL2(CHKREF(YmacrosYmap),CHKREF(Yast_linearizeYnew_renamed_binding),T10);
  new_bindingsF1643 = T9;
  T8 = CALL1(CHKREF(YastYfix_let_bindings),o_);
  T7 = CALL3(CHKREF(YruntimeYmap2),CHKREF(YruntimeYassoc),T8,new_bindingsF1643);
  T6 = CALL2(CHKREF(YmacrosYcat),T7,r_);
  new_rF1644 = T6;
  CALL2(CHKREF(Yast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF1643);
  CALL2(CHKREF(YastYfix_let_bindings_setter),new_bindingsF1643,o_);
  T5 = CALL1(CHKREF(YastYfix_let_body),o_);
  T4 = CALL3(CHKREF(Yast_linearizeYcollect_temporariesX),T5,flat_fun_,new_rF1644);
  CALL2(CHKREF(YastYfix_let_body_setter),T4,o_);
  T3 = o_;
  T2 = T3;
  QRET(T2);
}

FUNCODEDEF(fun_135) {
  ARG(r_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P new_rF1646;
  P new_bindingsF1645;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T11 = CALL1(CHKREF(YastYlocals_bindings),o_);
  T10 = CALL2(CHKREF(YmacrosYmap),CHKREF(Yast_linearizeYnew_renamed_binding),T11);
  new_bindingsF1645 = T10;
  T9 = CALL1(CHKREF(YastYlocals_bindings),o_);
  T8 = CALL3(CHKREF(YruntimeYmap2),CHKREF(YruntimeYassoc),T9,new_bindingsF1645);
  T7 = CALL2(CHKREF(YmacrosYcat),T8,r_);
  new_rF1646 = T7;
  T4 = CALL3(CHKREF(YruntimeYrcurry),CHKREF(Yast_linearizeYcollect_temporariesX),flat_fun_,new_rF1646);
  T3 = CALL1(CHKREF(YastYlocals_functions),o_);
  T2 = CALL2(CHKREF(YmacrosYmap),T4,T3);
  CALL2(CHKREF(YastYlocals_functions_setter),T2,o_);
  CALL2(CHKREF(Yast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF1645);
  CALL2(CHKREF(YastYlocals_bindings_setter),new_bindingsF1645,o_);
  T6 = CALL1(CHKREF(YastYlocals_body),o_);
  T5 = CALL3(CHKREF(Yast_linearizeYcollect_temporariesX),T6,flat_fun_,new_rF1646);
  CALL2(CHKREF(YastYlocals_body_setter),T5,o_);
  T1 = o_;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_136) {
  ARG(bindings_, 0);
  ARG(temps_, 1);
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T11 = CALL1(CHKREF(YmacrosYemptyQ),bindings_);
  if (T11 != YPfalse) {
    T10 = CALL2(CHKREF(Yast_linearizeYfunction_temporaries_setter),temps_,FREEREF(1));
    T0 = T10;
  } else {
    T9 = CALL1(CHKREF(Yhead),bindings_);
    T8 = CALL2(CHKREF(YruntimeYmemQ),temps_,T9);
    if (T8 != YPfalse) {
      T7 = CALL1(CHKREF(Ytail),bindings_);
      a1 = temps_;
      a2 = T7;
      temps_ = a1;
      bindings_ = a2;
      goto loop;
      T1 = T6;
    } else {
      T5 = CALL1(CHKREF(Yhead),bindings_);
      T4 = CALL2(CHKREF(YmacrosYpair),T5,temps_);
      T3 = CALL1(CHKREF(Ytail),bindings_);
      a1 = T4;
      a2 = T3;
      temps_ = a1;
      bindings_ = a2;
      goto loop;
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_137) {
  ARG(new_bindings_, 0);
  ARG(flat_fun_, 1);
  P adjoinF1647;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = FUNSHELL(1,fun_adjoin_136,2);
  adjoinF1647 = T3;
  FUNINIT(adjoinF1647, 2,adjoinF1647,flat_fun_);
  T2 = CALL1(CHKREF(Yast_linearizeYfunction_temporaries),flat_fun_);
  T1 = KCALL2(adjoinF1647,T2,new_bindings_);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_138) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYbinding_index));
  QRET(T0);
}

FUNCODEDEF(fun_139) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYbinding_index));
  QRET(T0);
}

FUNCODEDEF(fun_140) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_141) {
  ARG(binding_, 0);
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYA),CHKREF(Yast_linearizeYTrenaming_bindings_counterT),YPint((P)1));
  Yast_linearizeYTrenaming_bindings_counterT = T0;
  T13 = (P)YPpair(CHKREF(Yast_linearizeYLrenamed_local_bindingG),Ynil);
  T12 = (P)YPpair(CHKREF(Yast_linearizeYbinding_index),Ynil);
  T11 = (P)YPpair(CHKREF(YastYbinding_dynamic_extentQ),T12);
  T10 = (P)YPpair(CHKREF(YastYbinding_type),T11);
  T9 = (P)YPpair(CHKREF(YastYbinding_name),T10);
  T8 = CALL1(CHKREF(YastYbinding_name),binding_);
  T7 = CALL1(CHKREF(YastYbinding_type),binding_);
  T6 = CALL1(CHKREF(YastYbinding_dynamic_extentQ),binding_);
  T5 = (P)YPpair(CHKREF(Yast_linearizeYTrenaming_bindings_counterT),Ynil);
  T4 = (P)YPpair(T6,T5);
  T3 = (P)YPpair(T7,T4);
  T2 = (P)YPpair(T8,T3);
  T1 = CALL3(CHKREF(YPisa),T13,T9,T2);
  QRET(T1);
}

FUNCODEDEF(fun_142) {
  ARG(def_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL3(CHKREF(Yast_linearizeYcollect_registersX),def_,YPfalse,YPtrue);
  QRET(T0);
}

FUNCODEDEF(fun_143) {
  ARG(o_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = fun_142;
  T0 = CALL1(CHKREF(Yast_linearizeYprogram_definitions),o_);
  CALL2(CHKREF(YruntimeYdo),T1,T0);
  QRET(o_);
}

FUNCODEDEF(fun_144) {
  ARG(valQ_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P tmpF1649;
  P tmpF1648;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  tmpF1648 = valQ_;
  if (tmpF1648 != YPfalse) {
    tmpF1649 = flat_fun_;
    if (tmpF1649 != YPfalse) {
      T11 = CALL1(CHKREF(YastYprogram_register),o_);
      T10 = CALL1(CHKREF(Ynot),T11);
      T9 = T10;
    } else {
      T9 = YPfalse;
    }
    T8 = T9;
    T7 = T8;
  } else {
    T7 = YPfalse;
  }
  T6 = T7;
  if (T6 != YPfalse) {
    T2 = CALL1(CHKREF(Yast_linearizeYfunction_registers),flat_fun_);
    T1 = CALL1(CHKREF(YruntimeYlen),T2);
    CALL2(CHKREF(YastYprogram_register_setter),T1,o_);
    T5 = CALL1(CHKREF(Yast_linearizeYfunction_registers),flat_fun_);
    T4 = CALL2(CHKREF(YmacrosYpair),o_,T5);
    T3 = CALL2(CHKREF(Yast_linearizeYfunction_registers_setter),T4,flat_fun_);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_145) {
  ARG(valQ_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P T0;
  P a1,a2,a3;
loop:
  CALL3(CHKREF(Yast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T0 = CALLN(CHKREF(Yast_linearizeYupdate_walkX),4,CHKREF(Yast_linearizeYcollect_registersX),o_,flat_fun_,YPtrue);
  QRET(T0);
}

FUNCODEDEF(fun_loop_146) {
  ARG(x_, 0);
  P tmpF1651;
  P next_xF1650;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = CALL1(CHKREF(YmacrosYemptyQ),x_);
  if (T8 != YPfalse) {
    T0 = FREEREF(3);
  } else {
    T7 = CALL1(CHKREF(Ytail),x_);
    next_xF1650 = T7;
    T5 = CALL1(CHKREF(Yhead),x_);
    tmpF1651 = FREEREF(1);
    if (tmpF1651 != YPfalse) {
      T4 = CALL1(CHKREF(YmacrosYemptyQ),next_xF1650);
      T3 = T4;
    } else {
      T3 = YPfalse;
    }
    T2 = T3;
    CALL3(CHKREF(Yast_linearizeYcollect_registersX),T5,FREEREF(2),T2);
    a1 = next_xF1650;
    x_ = a1;
    goto loop;
    T1 = T6;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_147) {
  ARG(valQ_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P loopF1652;
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T2 = FUNSHELL(1,fun_loop_146,4);
  loopF1652 = T2;
  FUNINIT(loopF1652, 4,loopF1652,valQ_,flat_fun_,o_);
  T1 = KCALL1(loopF1652,o_);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_148) {
  ARG(valQ_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P T0;
  P a1,a2,a3;
loop:
  T0 = CALLN(CHKREF(Yast_linearizeYupdate_walkX),4,CHKREF(Yast_linearizeYcollect_registersX),o_,flat_fun_,YPtrue);
  QRET(T0);
}

FUNCODEDEF(fun_149) {
  ARG(def_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL3(CHKREF(Yast_linearizeYcollect_registersX),def_,FREEREF(1),FREEREF(0));
  QRET(T0);
}

FUNCODEDEF(fun_150) {
  ARG(valQ_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  CALL3(CHKREF(Yast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T1 = FUNFAB(fun_149,2,valQ_,flat_fun_);
  T0 = CALL1(CHKREF(Yast_linearizeYform_definitions),o_);
  CALL2(CHKREF(YruntimeYdo),T1,T0);
  T2 = CALL1(CHKREF(Yast_linearizeYform_program),o_);
  CALL3(CHKREF(Yast_linearizeYcollect_registersX),T2,flat_fun_,valQ_);
  QRET(o_);
}

FUNCODEDEF(fun_151) {
  ARG(valQ_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P T1,T0;
  P a1,a2,a3;
loop:
  CALL3(CHKREF(Yast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T0 = CALL1(CHKREF(YastYfunction_signature),o_);
  CALL3(CHKREF(Yast_linearizeYcollect_registersX),T0,flat_fun_,YPtrue);
  T1 = CALL1(CHKREF(YastYfunction_body),o_);
  CALL3(CHKREF(Yast_linearizeYcollect_registersX),T1,o_,YPtrue);
  QRET(o_);
}

FUNCODEDEF(fun_152) {
  ARG(valQ_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P T0;
  P a1,a2,a3;
loop:
  T0 = CALL1(CHKREF(YastYfunction_body),o_);
  CALL3(CHKREF(Yast_linearizeYcollect_registersX),T0,o_,YPtrue);
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
  lit_1 = YPPsym((P)"args");
  lit_2 = YPPsym((P)"o");
  lit_3 = YPPsym((P)"g");
  lit_4 = YPPsym((P)"x-1285");
  lit_5 = YPPsym((P)"x-1283");
  T1 = YPsig(YPPlist(1,CHKREF(lit_5)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_x_1285_0 = YPmet(FUNCODEREF(fun_x_1285_0),CHKREF(lit_4),T1,ENVNUL);
  T0 = YPsig(YPPlist(3,CHKREF(lit_3),CHKREF(lit_2),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPtrue,YPint((P)2),CHKREF(YLanyG));
  fun_1 = YPmet(FUNCODEREF(fun_1),CHKREF(lit_0),T0,ENVNUL);
  T5 = BOUNDP(Yast_linearizeYupdate_walkX);
  if (T5 != YPfalse) {
    T4 = CHKREF(Yast_linearizeYupdate_walkX);
  } else {
    T4 = YPfalse;
  }
  T3 = fun_1;
  T2 = CALL2(CHKREF(YPdefine_method),T4,T3);
  Yast_linearizeYupdate_walkX = T2;
  regsym(&Yast_linearizeYupdate_walkX,"ast-linearize","update-walk!");
  T7 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T6 = CALL3(CHKREF(YPisa),T7,Ynil,Ynil);
  Yast_linearizeYLbox_readG = T6;
  regsym(&Yast_linearizeYLbox_readG,"ast-linearize","<box-read>");
  lit_6 = YPPsym((P)"box-reference");
  lit_7 = YPPsym((P)"_x");
  T8 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(Yast_linearizeYLbox_readG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_2 = YPmet(FUNCODEREF(fun_2),CHKREF(lit_6),T8,ENVNUL);
  T12 = BOUNDP(Yast_linearizeYbox_reference);
  if (T12 != YPfalse) {
    T11 = CHKREF(Yast_linearizeYbox_reference);
  } else {
    T11 = YPfalse;
  }
  T10 = fun_2;
  T9 = CALL2(CHKREF(YPdefine_method),T11,T10);
  Yast_linearizeYbox_reference = T9;
  regsym(&Yast_linearizeYbox_reference,"ast-linearize","box-reference");
  lit_8 = YPPsym((P)"box-reference-setter");
  lit_9 = YPPsym((P)"_z");
  T13 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_7)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLbox_readG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_3 = YPmet(FUNCODEREF(fun_3),CHKREF(lit_8),T13,ENVNUL);
  T17 = BOUNDP(Yast_linearizeYbox_reference_setter);
  if (T17 != YPfalse) {
    T16 = CHKREF(Yast_linearizeYbox_reference_setter);
  } else {
    T16 = YPfalse;
  }
  T15 = fun_3;
  T14 = CALL2(CHKREF(YPdefine_method),T16,T15);
  Yast_linearizeYbox_reference_setter = T14;
  regsym(&Yast_linearizeYbox_reference_setter,"ast-linearize","box-reference-setter");
  lit_10 = YPPsym((P)"x");
  T18 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_4 = YPmet(FUNCODEREF(fun_4),YPfalse,T18,ENVNUL);
  T19 = fun_4;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLbox_readG),CHKREF(Yast_linearizeYbox_reference),CHKREF(Yast_linearizeYbox_reference_setter),CHKREF(YLanyG),T19);
  T21 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T20 = CALL3(CHKREF(YPisa),T21,Ynil,Ynil);
  Yast_linearizeYLbox_writeG = T20;
  regsym(&Yast_linearizeYLbox_writeG,"ast-linearize","<box-write>");
  T22 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(Yast_linearizeYLbox_writeG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_5 = YPmet(FUNCODEREF(fun_5),CHKREF(lit_6),T22,ENVNUL);
  T26 = BOUNDP(Yast_linearizeYbox_reference);
  if (T26 != YPfalse) {
    T25 = CHKREF(Yast_linearizeYbox_reference);
  } else {
    T25 = YPfalse;
  }
  T24 = fun_5;
  T23 = CALL2(CHKREF(YPdefine_method),T25,T24);
  Yast_linearizeYbox_reference = T23;
  regsym(&Yast_linearizeYbox_reference,"ast-linearize","box-reference");
  T27 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_7)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLbox_writeG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_6 = YPmet(FUNCODEREF(fun_6),CHKREF(lit_8),T27,ENVNUL);
  T31 = BOUNDP(Yast_linearizeYbox_reference_setter);
  if (T31 != YPfalse) {
    T30 = CHKREF(Yast_linearizeYbox_reference_setter);
  } else {
    T30 = YPfalse;
  }
  T29 = fun_6;
  T28 = CALL2(CHKREF(YPdefine_method),T30,T29);
  Yast_linearizeYbox_reference_setter = T28;
  regsym(&Yast_linearizeYbox_reference_setter,"ast-linearize","box-reference-setter");
  T32 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T32,ENVNUL);
  T33 = fun_7;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLbox_writeG),CHKREF(Yast_linearizeYbox_reference),CHKREF(Yast_linearizeYbox_reference_setter),CHKREF(YLanyG),T33);
  lit_11 = YPPsym((P)"box-form");
  T34 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(Yast_linearizeYLbox_writeG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_8 = YPmet(FUNCODEREF(fun_8),CHKREF(lit_11),T34,ENVNUL);
  T38 = BOUNDP(Yast_linearizeYbox_form);
  if (T38 != YPfalse) {
    T37 = CHKREF(Yast_linearizeYbox_form);
  } else {
    T37 = YPfalse;
  }
  T36 = fun_8;
  T35 = CALL2(CHKREF(YPdefine_method),T37,T36);
  Yast_linearizeYbox_form = T35;
  regsym(&Yast_linearizeYbox_form,"ast-linearize","box-form");
  lit_12 = YPPsym((P)"box-form-setter");
  T39 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_7)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLbox_writeG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_9 = YPmet(FUNCODEREF(fun_9),CHKREF(lit_12),T39,ENVNUL);
  T43 = BOUNDP(Yast_linearizeYbox_form_setter);
  if (T43 != YPfalse) {
    T42 = CHKREF(Yast_linearizeYbox_form_setter);
  } else {
    T42 = YPfalse;
  }
  T41 = fun_9;
  T40 = CALL2(CHKREF(YPdefine_method),T42,T41);
  Yast_linearizeYbox_form_setter = T40;
  regsym(&Yast_linearizeYbox_form_setter,"ast-linearize","box-form-setter");
  T44 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T44,ENVNUL);
  T45 = fun_10;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLbox_writeG),CHKREF(Yast_linearizeYbox_form),CHKREF(Yast_linearizeYbox_form_setter),CHKREF(YLanyG),T45);
  T47 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T46 = CALL3(CHKREF(YPisa),T47,Ynil,Ynil);
  Yast_linearizeYLbox_creationG = T46;
  regsym(&Yast_linearizeYLbox_creationG,"ast-linearize","<box-creation>");
  T48 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(Yast_linearizeYLbox_creationG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_11 = YPmet(FUNCODEREF(fun_11),CHKREF(lit_6),T48,ENVNUL);
  T52 = BOUNDP(Yast_linearizeYbox_reference);
  if (T52 != YPfalse) {
    T51 = CHKREF(Yast_linearizeYbox_reference);
  } else {
    T51 = YPfalse;
  }
  T50 = fun_11;
  T49 = CALL2(CHKREF(YPdefine_method),T51,T50);
  Yast_linearizeYbox_reference = T49;
  regsym(&Yast_linearizeYbox_reference,"ast-linearize","box-reference");
  T53 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_7)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLbox_creationG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_12 = YPmet(FUNCODEREF(fun_12),CHKREF(lit_8),T53,ENVNUL);
  T57 = BOUNDP(Yast_linearizeYbox_reference_setter);
  if (T57 != YPfalse) {
    T56 = CHKREF(Yast_linearizeYbox_reference_setter);
  } else {
    T56 = YPfalse;
  }
  T55 = fun_12;
  T54 = CALL2(CHKREF(YPdefine_method),T56,T55);
  Yast_linearizeYbox_reference_setter = T54;
  regsym(&Yast_linearizeYbox_reference_setter,"ast-linearize","box-reference-setter");
  T58 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T58,ENVNUL);
  T59 = fun_13;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLbox_creationG),CHKREF(Yast_linearizeYbox_reference),CHKREF(Yast_linearizeYbox_reference_setter),CHKREF(YLanyG),T59);
  lit_13 = YPPsym((P)"insert-box!");
  T60 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_14 = YPmet(FUNCODEREF(fun_14),CHKREF(lit_13),T60,ENVNUL);
  T64 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T64 != YPfalse) {
    T63 = CHKREF(Yast_linearizeYinsert_boxX);
  } else {
    T63 = YPfalse;
  }
  T62 = fun_14;
  T61 = CALL2(CHKREF(YPdefine_method),T63,T62);
  Yast_linearizeYinsert_boxX = T61;
  regsym(&Yast_linearizeYinsert_boxX,"ast-linearize","insert-box!");
  T65 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLlocal_referenceG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_15 = YPmet(FUNCODEREF(fun_15),CHKREF(lit_13),T65,ENVNUL);
  T69 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T69 != YPfalse) {
    T68 = CHKREF(Yast_linearizeYinsert_boxX);
  } else {
    T68 = YPfalse;
  }
  T67 = fun_15;
  T66 = CALL2(CHKREF(YPdefine_method),T68,T67);
  Yast_linearizeYinsert_boxX = T66;
  regsym(&Yast_linearizeYinsert_boxX,"ast-linearize","insert-box!");
  T70 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLlocal_assignmentG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_16 = YPmet(FUNCODEREF(fun_16),CHKREF(lit_13),T70,ENVNUL);
  T74 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T74 != YPfalse) {
    T73 = CHKREF(Yast_linearizeYinsert_boxX);
  } else {
    T73 = YPfalse;
  }
  T72 = fun_16;
  T71 = CALL2(CHKREF(YPdefine_method),T73,T72);
  Yast_linearizeYinsert_boxX = T71;
  regsym(&Yast_linearizeYinsert_boxX,"ast-linearize","insert-box!");
  T75 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLast_methodG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_17 = YPmet(FUNCODEREF(fun_17),CHKREF(lit_13),T75,ENVNUL);
  T79 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T79 != YPfalse) {
    T78 = CHKREF(Yast_linearizeYinsert_boxX);
  } else {
    T78 = YPfalse;
  }
  T77 = fun_17;
  T76 = CALL2(CHKREF(YPdefine_method),T78,T77);
  Yast_linearizeYinsert_boxX = T76;
  regsym(&Yast_linearizeYinsert_boxX,"ast-linearize","insert-box!");
  T80 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLfix_letG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_18 = YPmet(FUNCODEREF(fun_18),CHKREF(lit_13),T80,ENVNUL);
  T84 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T84 != YPfalse) {
    T83 = CHKREF(Yast_linearizeYinsert_boxX);
  } else {
    T83 = YPfalse;
  }
  T82 = fun_18;
  T81 = CALL2(CHKREF(YPdefine_method),T83,T82);
  Yast_linearizeYinsert_boxX = T81;
  regsym(&Yast_linearizeYinsert_boxX,"ast-linearize","insert-box!");
  T85 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLlocalsG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_19 = YPmet(FUNCODEREF(fun_19),CHKREF(lit_13),T85,ENVNUL);
  T89 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T89 != YPfalse) {
    T88 = CHKREF(Yast_linearizeYinsert_boxX);
  } else {
    T88 = YPfalse;
  }
  T87 = fun_19;
  T86 = CALL2(CHKREF(YPdefine_method),T88,T87);
  Yast_linearizeYinsert_boxX = T86;
  regsym(&Yast_linearizeYinsert_boxX,"ast-linearize","insert-box!");
  lit_14 = YPPsym((P)"boxify-mutable-bindings");
  lit_15 = YPPsym((P)"bindings");
  lit_16 = YPPsym((P)"form");
  lit_17 = YPPsym((P)"loop");
  lit_18 = YPPsym((P)"res");
  T91 = YPsig(YPPlist(2,CHKREF(lit_18),CHKREF(lit_15)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_20 = YPmet(FUNCODEREF(fun_loop_20),CHKREF(lit_17),T91,ENVNUL);
  T90 = YPsig(YPPlist(2,CHKREF(lit_16),CHKREF(lit_15)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_21 = YPmet(FUNCODEREF(fun_21),CHKREF(lit_14),T90,ENVNUL);
  T95 = BOUNDP(Yast_linearizeYboxify_mutable_bindings);
  if (T95 != YPfalse) {
    T94 = CHKREF(Yast_linearizeYboxify_mutable_bindings);
  } else {
    T94 = YPfalse;
  }
  T93 = fun_21;
  T92 = CALL2(CHKREF(YPdefine_method),T94,T93);
  Yast_linearizeYboxify_mutable_bindings = T92;
  regsym(&Yast_linearizeYboxify_mutable_bindings,"ast-linearize","boxify-mutable-bindings");
  lit_19 = YPPsym((P)"sexp->object");
  lit_20 = YPPsym((P)"r");
  lit_21 = YPPsym((P)"exp");
  T96 = YPsig(YPPlist(2,CHKREF(lit_21),CHKREF(lit_20)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_22 = YPmet(FUNCODEREF(fun_22),CHKREF(lit_19),T96,ENVNUL);
  T100 = BOUNDP(Yast_linearizeYsexp_Gobject);
  if (T100 != YPfalse) {
    T99 = CHKREF(Yast_linearizeYsexp_Gobject);
  } else {
    T99 = YPfalse;
  }
  T98 = fun_22;
  T97 = CALL2(CHKREF(YPdefine_method),T99,T98);
  Yast_linearizeYsexp_Gobject = T97;
  regsym(&Yast_linearizeYsexp_Gobject,"ast-linearize","sexp->object");
  lit_22 = YPPsym((P)"do-do-call-references!");
  T101 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_23 = YPmet(FUNCODEREF(fun_23),CHKREF(lit_22),T101,ENVNUL);
  T105 = BOUNDP(Yast_linearizeYdo_do_call_referencesX);
  if (T105 != YPfalse) {
    T104 = CHKREF(Yast_linearizeYdo_do_call_referencesX);
  } else {
    T104 = YPfalse;
  }
  T103 = fun_23;
  T102 = CALL2(CHKREF(YPdefine_method),T104,T103);
  Yast_linearizeYdo_do_call_referencesX = T102;
  regsym(&Yast_linearizeYdo_do_call_referencesX,"ast-linearize","do-do-call-references!");
  lit_23 = YPPsym((P)"do-call-references!");
  T106 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_24 = YPmet(FUNCODEREF(fun_24),CHKREF(lit_23),T106,ENVNUL);
  T110 = BOUNDP(Yast_linearizeYdo_call_referencesX);
  if (T110 != YPfalse) {
    T109 = CHKREF(Yast_linearizeYdo_call_referencesX);
  } else {
    T109 = YPfalse;
  }
  T108 = fun_24;
  T107 = CALL2(CHKREF(YPdefine_method),T109,T108);
  Yast_linearizeYdo_call_referencesX = T107;
  regsym(&Yast_linearizeYdo_call_referencesX,"ast-linearize","do-call-references!");
  T111 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLregular_applicationG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_25 = YPmet(FUNCODEREF(fun_25),CHKREF(lit_23),T111,ENVNUL);
  T115 = BOUNDP(Yast_linearizeYdo_call_referencesX);
  if (T115 != YPfalse) {
    T114 = CHKREF(Yast_linearizeYdo_call_referencesX);
  } else {
    T114 = YPfalse;
  }
  T113 = fun_25;
  T112 = CALL2(CHKREF(YPdefine_method),T114,T113);
  Yast_linearizeYdo_call_referencesX = T112;
  regsym(&Yast_linearizeYdo_call_referencesX,"ast-linearize","do-call-references!");
  lit_24 = YPPsym((P)"analyze-call-references");
  T116 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_26 = YPmet(FUNCODEREF(fun_26),CHKREF(lit_24),T116,ENVNUL);
  T120 = BOUNDP(Yast_linearizeYanalyze_call_references);
  if (T120 != YPfalse) {
    T119 = CHKREF(Yast_linearizeYanalyze_call_references);
  } else {
    T119 = YPfalse;
  }
  T118 = fun_26;
  T117 = CALL2(CHKREF(YPdefine_method),T119,T118);
  Yast_linearizeYanalyze_call_references = T117;
  regsym(&Yast_linearizeYanalyze_call_references,"ast-linearize","analyze-call-references");
  lit_25 = YPPsym((P)"do-do-dynamic-extent!");
  T121 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_27 = YPmet(FUNCODEREF(fun_27),CHKREF(lit_25),T121,ENVNUL);
  T125 = BOUNDP(Yast_linearizeYdo_do_dynamic_extentX);
  if (T125 != YPfalse) {
    T124 = CHKREF(Yast_linearizeYdo_do_dynamic_extentX);
  } else {
    T124 = YPfalse;
  }
  T123 = fun_27;
  T122 = CALL2(CHKREF(YPdefine_method),T124,T123);
  Yast_linearizeYdo_do_dynamic_extentX = T122;
  regsym(&Yast_linearizeYdo_do_dynamic_extentX,"ast-linearize","do-do-dynamic-extent!");
  lit_26 = YPPsym((P)"do-dynamic-extent!");
  T126 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_28 = YPmet(FUNCODEREF(fun_28),CHKREF(lit_26),T126,ENVNUL);
  T130 = BOUNDP(Yast_linearizeYdo_dynamic_extentX);
  if (T130 != YPfalse) {
    T129 = CHKREF(Yast_linearizeYdo_dynamic_extentX);
  } else {
    T129 = YPfalse;
  }
  T128 = fun_28;
  T127 = CALL2(CHKREF(YPdefine_method),T129,T128);
  Yast_linearizeYdo_dynamic_extentX = T127;
  regsym(&Yast_linearizeYdo_dynamic_extentX,"ast-linearize","do-dynamic-extent!");
  T131 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLlocal_referenceG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_29 = YPmet(FUNCODEREF(fun_29),CHKREF(lit_26),T131,ENVNUL);
  T135 = BOUNDP(Yast_linearizeYdo_dynamic_extentX);
  if (T135 != YPfalse) {
    T134 = CHKREF(Yast_linearizeYdo_dynamic_extentX);
  } else {
    T134 = YPfalse;
  }
  T133 = fun_29;
  T132 = CALL2(CHKREF(YPdefine_method),T134,T133);
  Yast_linearizeYdo_dynamic_extentX = T132;
  regsym(&Yast_linearizeYdo_dynamic_extentX,"ast-linearize","do-dynamic-extent!");
  lit_27 = YPPsym((P)"analyze-dynamic-extent");
  T136 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_30 = YPmet(FUNCODEREF(fun_30),CHKREF(lit_27),T136,ENVNUL);
  T140 = BOUNDP(Yast_linearizeYanalyze_dynamic_extent);
  if (T140 != YPfalse) {
    T139 = CHKREF(Yast_linearizeYanalyze_dynamic_extent);
  } else {
    T139 = YPfalse;
  }
  T138 = fun_30;
  T137 = CALL2(CHKREF(YPdefine_method),T139,T138);
  Yast_linearizeYanalyze_dynamic_extent = T137;
  regsym(&Yast_linearizeYanalyze_dynamic_extent,"ast-linearize","analyze-dynamic-extent");
  lit_28 = YPPsym((P)"do-do-call-upgrades!");
  T141 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_31 = YPmet(FUNCODEREF(fun_31),CHKREF(lit_28),T141,ENVNUL);
  T145 = BOUNDP(Yast_linearizeYdo_do_call_upgradesX);
  if (T145 != YPfalse) {
    T144 = CHKREF(Yast_linearizeYdo_do_call_upgradesX);
  } else {
    T144 = YPfalse;
  }
  T143 = fun_31;
  T142 = CALL2(CHKREF(YPdefine_method),T144,T143);
  Yast_linearizeYdo_do_call_upgradesX = T142;
  regsym(&Yast_linearizeYdo_do_call_upgradesX,"ast-linearize","do-do-call-upgrades!");
  lit_29 = YPPsym((P)"do-call-upgrades!");
  T146 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_32 = YPmet(FUNCODEREF(fun_32),CHKREF(lit_29),T146,ENVNUL);
  T150 = BOUNDP(Yast_linearizeYdo_call_upgradesX);
  if (T150 != YPfalse) {
    T149 = CHKREF(Yast_linearizeYdo_call_upgradesX);
  } else {
    T149 = YPfalse;
  }
  T148 = fun_32;
  T147 = CALL2(CHKREF(YPdefine_method),T149,T148);
  Yast_linearizeYdo_call_upgradesX = T147;
  regsym(&Yast_linearizeYdo_call_upgradesX,"ast-linearize","do-call-upgrades!");
  lit_30 = YPPsym((P)"unconstrained-type?");
  lit_31 = YPPsym((P)"<any>");
  T151 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_33 = YPmet(FUNCODEREF(fun_33),CHKREF(lit_30),T151,ENVNUL);
  T155 = BOUNDP(Yast_linearizeYunconstrained_typeQ);
  if (T155 != YPfalse) {
    T154 = CHKREF(Yast_linearizeYunconstrained_typeQ);
  } else {
    T154 = YPfalse;
  }
  T153 = fun_33;
  T152 = CALL2(CHKREF(YPdefine_method),T154,T153);
  Yast_linearizeYunconstrained_typeQ = T152;
  regsym(&Yast_linearizeYunconstrained_typeQ,"ast-linearize","unconstrained-type?");
  T156 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLregular_applicationG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_34 = YPmet(FUNCODEREF(fun_34),CHKREF(lit_29),T156,ENVNUL);
  T160 = BOUNDP(Yast_linearizeYdo_call_upgradesX);
  if (T160 != YPfalse) {
    T159 = CHKREF(Yast_linearizeYdo_call_upgradesX);
  } else {
    T159 = YPfalse;
  }
  T158 = fun_34;
  T157 = CALL2(CHKREF(YPdefine_method),T159,T158);
  Yast_linearizeYdo_call_upgradesX = T157;
  regsym(&Yast_linearizeYdo_call_upgradesX,"ast-linearize","do-call-upgrades!");
  lit_32 = YPPsym((P)"analyze-calls");
  T161 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_35 = YPmet(FUNCODEREF(fun_35),CHKREF(lit_32),T161,ENVNUL);
  T165 = BOUNDP(Yast_linearizeYanalyze_calls);
  if (T165 != YPfalse) {
    T164 = CHKREF(Yast_linearizeYanalyze_calls);
  } else {
    T164 = YPfalse;
  }
  T163 = fun_35;
  T162 = CALL2(CHKREF(YPdefine_method),T164,T163);
  Yast_linearizeYanalyze_calls = T162;
  regsym(&Yast_linearizeYanalyze_calls,"ast-linearize","analyze-calls");
  T168 = (P)YPpair(CHKREF(YastYLprogramsG),Ynil);
  T167 = (P)YPpair(CHKREF(YLlstG),T168);
  T166 = CALL3(CHKREF(YPisa),T167,Ynil,Ynil);
  Yast_linearizeYLfree_environmentG = T166;
  regsym(&Yast_linearizeYLfree_environmentG,"ast-linearize","<free-environment>");
  T174 = (P)YPpair(CHKREF(Yast_linearizeYLfree_environmentG),Ynil);
  T173 = (P)YPpair(CHKREF(Ytail),Ynil);
  T172 = (P)YPpair(CHKREF(Yhead),T173);
  T171 = (P)YPpair(YPfalse,Ynil);
  T170 = (P)YPpair(YPfalse,T171);
  T169 = CALL3(CHKREF(YPisa),T174,T172,T170);
  Yast_linearizeYDfree_environment_empty = T169;
  regsym(&Yast_linearizeYDfree_environment_empty,"ast-linearize","$free-environment-empty");
  lit_33 = YPPsym((P)"as");
  lit_34 = YPPsym((P)"p");
  T176 = CALL1(CHKREF(YruntimeYtE),CHKREF(Yast_linearizeYLfree_environmentG));
  T175 = YPsig(YPPlist(2,CHKREF(lit_34),CHKREF(lit_10)),YPPlist(2,T176,CHKREF(Yast_linearizeYLfree_environmentG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_36 = YPmet(FUNCODEREF(fun_36),CHKREF(lit_33),T175,ENVNUL);
  T180 = BOUNDP(YruntimeYas);
  if (T180 != YPfalse) {
    T179 = CHKREF(YruntimeYas);
  } else {
    T179 = YPfalse;
  }
  T178 = fun_36;
  T177 = CALL2(CHKREF(YPdefine_method),T179,T178);
  YruntimeYas = T177;
  regsym(&YruntimeYas,"runtime","as");
  T182 = CALL1(CHKREF(YruntimeYtE),CHKREF(YLlstG));
  T181 = YPsig(YPPlist(2,CHKREF(lit_34),CHKREF(lit_10)),YPPlist(2,T182,CHKREF(Yast_linearizeYLfree_environmentG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_37 = YPmet(FUNCODEREF(fun_37),CHKREF(lit_33),T181,ENVNUL);
  T186 = BOUNDP(YruntimeYas);
  if (T186 != YPfalse) {
    T185 = CHKREF(YruntimeYas);
  } else {
    T185 = YPfalse;
  }
  T184 = fun_37;
  T183 = CALL2(CHKREF(YPdefine_method),T185,T184);
  YruntimeYas = T183;
  regsym(&YruntimeYas,"runtime","as");
  T188 = CALL1(CHKREF(YruntimeYtE),CHKREF(Yast_linearizeYLfree_environmentG));
  T187 = YPsig(YPPlist(2,CHKREF(lit_34),CHKREF(lit_10)),YPPlist(2,T188,CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_38 = YPmet(FUNCODEREF(fun_38),CHKREF(lit_33),T187,ENVNUL);
  T192 = BOUNDP(YruntimeYas);
  if (T192 != YPfalse) {
    T191 = CHKREF(YruntimeYas);
  } else {
    T191 = YPfalse;
  }
  T190 = fun_38;
  T189 = CALL2(CHKREF(YPdefine_method),T191,T190);
  YruntimeYas = T189;
  regsym(&YruntimeYas,"runtime","as");
  lit_35 = YPPsym((P)"free-environment");
  lit_36 = YPPsym((P)"t");
  lit_37 = YPPsym((P)"h");
  T193 = YPsig(YPPlist(2,CHKREF(lit_37),CHKREF(lit_36)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  Yast_linearizeYfree_environment = YPmet(FUNCODEREF(Yast_linearizeYfree_environment),CHKREF(lit_35),T193,ENVNUL);
  T194 = Yast_linearizeYfree_environment;
  Yast_linearizeYfree_environment = T194;
  regsym(&Yast_linearizeYfree_environment,"ast-linearize","free-environment");
  lit_38 = YPPsym((P)"empty");
  lit_39 = YPPsym((P)"e");
  T196 = CALL1(CHKREF(YruntimeYtE),CHKREF(Yast_linearizeYLfree_environmentG));
  T195 = YPsig(YPPlist(1,CHKREF(lit_39)),YPPlist(1,T196),YPfalse,YPint((P)1),CHKREF(Yast_linearizeYLfree_environmentG));
  fun_40 = YPmet(FUNCODEREF(fun_40),CHKREF(lit_38),T195,ENVNUL);
  T200 = BOUNDP(YruntimeYempty);
  if (T200 != YPfalse) {
    T199 = CHKREF(YruntimeYempty);
  } else {
    T199 = YPfalse;
  }
  T198 = fun_40;
  T197 = CALL2(CHKREF(YPdefine_method),T199,T198);
  YruntimeYempty = T197;
  regsym(&YruntimeYempty,"runtime","empty");
  T202 = (P)YPpair(CHKREF(YastYLast_methodG),Ynil);
  T201 = CALL3(CHKREF(YPisa),T202,Ynil,Ynil);
  Yast_linearizeYLflat_functionG = T201;
  regsym(&Yast_linearizeYLflat_functionG,"ast-linearize","<flat-function>");
  lit_40 = YPPsym((P)"function-free");
  T203 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(Yast_linearizeYLflat_functionG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_41 = YPmet(FUNCODEREF(fun_41),CHKREF(lit_40),T203,ENVNUL);
  T207 = BOUNDP(Yast_linearizeYfunction_free);
  if (T207 != YPfalse) {
    T206 = CHKREF(Yast_linearizeYfunction_free);
  } else {
    T206 = YPfalse;
  }
  T205 = fun_41;
  T204 = CALL2(CHKREF(YPdefine_method),T206,T205);
  Yast_linearizeYfunction_free = T204;
  regsym(&Yast_linearizeYfunction_free,"ast-linearize","function-free");
  lit_41 = YPPsym((P)"function-free-setter");
  T208 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_7)),YPPlist(2,CHKREF(Yast_linearizeYLfree_environmentG),CHKREF(Yast_linearizeYLflat_functionG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_42 = YPmet(FUNCODEREF(fun_42),CHKREF(lit_41),T208,ENVNUL);
  T212 = BOUNDP(Yast_linearizeYfunction_free_setter);
  if (T212 != YPfalse) {
    T211 = CHKREF(Yast_linearizeYfunction_free_setter);
  } else {
    T211 = YPfalse;
  }
  T210 = fun_42;
  T209 = CALL2(CHKREF(YPdefine_method),T211,T210);
  Yast_linearizeYfunction_free_setter = T209;
  regsym(&Yast_linearizeYfunction_free_setter,"ast-linearize","function-free-setter");
  T213 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T213,ENVNUL);
  T214 = fun_43;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLflat_functionG),CHKREF(Yast_linearizeYfunction_free),CHKREF(Yast_linearizeYfunction_free_setter),CHKREF(Yast_linearizeYLfree_environmentG),T214);
  T216 = (P)YPpair(CHKREF(YastYLreal_referenceG),Ynil);
  T215 = CALL3(CHKREF(YPisa),T216,Ynil,Ynil);
  Yast_linearizeYLfree_referenceG = T215;
  regsym(&Yast_linearizeYLfree_referenceG,"ast-linearize","<free-reference>");
  lit_42 = YPPsym((P)"reference-offset");
  T217 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(Yast_linearizeYLfree_referenceG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_44 = YPmet(FUNCODEREF(fun_44),CHKREF(lit_42),T217,ENVNUL);
  T221 = BOUNDP(Yast_linearizeYreference_offset);
  if (T221 != YPfalse) {
    T220 = CHKREF(Yast_linearizeYreference_offset);
  } else {
    T220 = YPfalse;
  }
  T219 = fun_44;
  T218 = CALL2(CHKREF(YPdefine_method),T220,T219);
  Yast_linearizeYreference_offset = T218;
  regsym(&Yast_linearizeYreference_offset,"ast-linearize","reference-offset");
  lit_43 = YPPsym((P)"reference-offset-setter");
  T223 = CALL1(CHKREF(YruntimeYfalse_or),CHKREF(YLintG));
  T222 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_7)),YPPlist(2,T223,CHKREF(Yast_linearizeYLfree_referenceG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_45 = YPmet(FUNCODEREF(fun_45),CHKREF(lit_43),T222,ENVNUL);
  T227 = BOUNDP(Yast_linearizeYreference_offset_setter);
  if (T227 != YPfalse) {
    T226 = CHKREF(Yast_linearizeYreference_offset_setter);
  } else {
    T226 = YPfalse;
  }
  T225 = fun_45;
  T224 = CALL2(CHKREF(YPdefine_method),T226,T225);
  Yast_linearizeYreference_offset_setter = T224;
  regsym(&Yast_linearizeYreference_offset_setter,"ast-linearize","reference-offset-setter");
  T228 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_46 = YPmet(FUNCODEREF(fun_46),YPfalse,T228,ENVNUL);
  T230 = CALL1(CHKREF(YruntimeYfalse_or),CHKREF(YLintG));
  T229 = fun_46;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLfree_referenceG),CHKREF(Yast_linearizeYreference_offset),CHKREF(Yast_linearizeYreference_offset_setter),T230,T229);
  lit_44 = YPPsym((P)"reference-self?");
  T231 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(Yast_linearizeYLfree_referenceG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_47 = YPmet(FUNCODEREF(fun_47),CHKREF(lit_44),T231,ENVNUL);
  T235 = BOUNDP(Yast_linearizeYreference_selfQ);
  if (T235 != YPfalse) {
    T234 = CHKREF(Yast_linearizeYreference_selfQ);
  } else {
    T234 = YPfalse;
  }
  T233 = fun_47;
  T232 = CALL2(CHKREF(YPdefine_method),T234,T233);
  Yast_linearizeYreference_selfQ = T232;
  regsym(&Yast_linearizeYreference_selfQ,"ast-linearize","reference-self?");
  lit_45 = YPPsym((P)"reference-self?-setter");
  T236 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_7)),YPPlist(2,CHKREF(YLlogG),CHKREF(Yast_linearizeYLfree_referenceG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_48 = YPmet(FUNCODEREF(fun_48),CHKREF(lit_45),T236,ENVNUL);
  T240 = BOUNDP(Yast_linearizeYreference_selfQ_setter);
  if (T240 != YPfalse) {
    T239 = CHKREF(Yast_linearizeYreference_selfQ_setter);
  } else {
    T239 = YPfalse;
  }
  T238 = fun_48;
  T237 = CALL2(CHKREF(YPdefine_method),T239,T238);
  Yast_linearizeYreference_selfQ_setter = T237;
  regsym(&Yast_linearizeYreference_selfQ_setter,"ast-linearize","reference-self?-setter");
  T241 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T241,ENVNUL);
  T242 = fun_49;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLfree_referenceG),CHKREF(Yast_linearizeYreference_selfQ),CHKREF(Yast_linearizeYreference_selfQ_setter),CHKREF(YLlogG),T242);
  lit_46 = YPPsym((P)"lift!");
  T243 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_50 = YPmet(FUNCODEREF(fun_50),CHKREF(lit_46),T243,ENVNUL);
  T247 = BOUNDP(Yast_linearizeYliftX);
  if (T247 != YPfalse) {
    T246 = CHKREF(Yast_linearizeYliftX);
  } else {
    T246 = YPfalse;
  }
  T245 = fun_50;
  T244 = CALL2(CHKREF(YPdefine_method),T246,T245);
  Yast_linearizeYliftX = T244;
  regsym(&Yast_linearizeYliftX,"ast-linearize","lift!");
  lit_47 = YPPsym((P)"lift-procedures!");
  lit_48 = YPPsym((P)"flat-fun");
  T248 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_48),CHKREF(lit_15)),YPPlist(3,CHKREF(YastYLprogramG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_51 = YPmet(FUNCODEREF(fun_51),CHKREF(lit_47),T248,ENVNUL);
  T252 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T252 != YPfalse) {
    T251 = CHKREF(Yast_linearizeYlift_proceduresX);
  } else {
    T251 = YPfalse;
  }
  T250 = fun_51;
  T249 = CALL2(CHKREF(YPdefine_method),T251,T250);
  Yast_linearizeYlift_proceduresX = T249;
  regsym(&Yast_linearizeYlift_proceduresX,"ast-linearize","lift-procedures!");
  T253 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_48),CHKREF(lit_15)),YPPlist(3,CHKREF(YastYLlocal_referenceG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_52 = YPmet(FUNCODEREF(fun_52),CHKREF(lit_47),T253,ENVNUL);
  T257 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T257 != YPfalse) {
    T256 = CHKREF(Yast_linearizeYlift_proceduresX);
  } else {
    T256 = YPfalse;
  }
  T255 = fun_52;
  T254 = CALL2(CHKREF(YPdefine_method),T256,T255);
  Yast_linearizeYlift_proceduresX = T254;
  regsym(&Yast_linearizeYlift_proceduresX,"ast-linearize","lift-procedures!");
  lit_49 = YPPsym((P)"adjoin-free-binding!");
  lit_50 = YPPsym((P)"ref");
  lit_51 = YPPsym((P)"check");
  lit_52 = YPPsym((P)"free*");
  lit_53 = YPPsym((P)"i");
  lit_54 = YPPsym((P)"add");
  T260 = YPsig(YPPlist(1,CHKREF(lit_52)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_add_53 = YPmet(FUNCODEREF(fun_add_53),CHKREF(lit_54),T260,ENVNUL);
  T259 = YPsig(YPPlist(2,CHKREF(lit_53),CHKREF(lit_52)),YPPlist(2,CHKREF(YLintG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_check_54 = YPmet(FUNCODEREF(fun_check_54),CHKREF(lit_51),T259,ENVNUL);
  T258 = YPsig(YPPlist(2,CHKREF(lit_48),CHKREF(lit_50)),YPPlist(2,CHKREF(Yast_linearizeYLflat_functionG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLintG));
  fun_55 = YPmet(FUNCODEREF(fun_55),CHKREF(lit_49),T258,ENVNUL);
  T264 = BOUNDP(Yast_linearizeYadjoin_free_bindingX);
  if (T264 != YPfalse) {
    T263 = CHKREF(Yast_linearizeYadjoin_free_bindingX);
  } else {
    T263 = YPfalse;
  }
  T262 = fun_55;
  T261 = CALL2(CHKREF(YPdefine_method),T263,T262);
  Yast_linearizeYadjoin_free_bindingX = T261;
  regsym(&Yast_linearizeYadjoin_free_bindingX,"ast-linearize","adjoin-free-binding!");
  T267 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_48),CHKREF(lit_15)),YPPlist(3,CHKREF(YastYLfix_letG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  T266 = fun_56 = YPmet(FUNCODEREF(fun_56),CHKREF(lit_47),T267,ENVNUL);
  T272 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T272 != YPfalse) {
    T271 = CHKREF(Yast_linearizeYlift_proceduresX);
  } else {
    T271 = YPfalse;
  }
  T270 = fun_56;
  T269 = CALL2(CHKREF(YPdefine_method),T271,T270);
  T268 = Yast_linearizeYlift_proceduresX = T269;
  regsym(&Yast_linearizeYlift_proceduresX,"ast-linearize","lift-procedures!");
  T265 = T268;
  return T265;
}

P Yast_linearizeY___main_1___() {
  P T265,T264,T263,T262,T261,T260,T259,T258,T257,T256,T255,T254,T253,T252,T251,T250;
  P T249,T248,T247,T246,T245,T244,T243,T242,T241,T240,T239,T238,T237,T236,T235,T234;
  P T233,T232,T231,T230,T229,T228,T227,T226,T225,T224,T223,T222,T221,T220,T219,T218;
  P T217,T216,T215,T214,T213,T212,T211,T210,T209,T208,T207,T206,T205,T204,T203,T202;
  P T201,T200,T199,T198,T197,T196,T195,T194,T193,T192,T191,T190,T189,T188,T187,T186;
  P T185,T184,T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171,T170;
  P T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154;
  P T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138;
  P T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122;
  P T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106;
  P T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90;
  P T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74;
  P T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58;
  P T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T0 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_48),CHKREF(lit_15)),YPPlist(3,CHKREF(YastYLlocalsG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_57 = YPmet(FUNCODEREF(fun_57),CHKREF(lit_47),T0,ENVNUL);
  T4 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T4 != YPfalse) {
    T3 = CHKREF(Yast_linearizeYlift_proceduresX);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_57;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  Yast_linearizeYlift_proceduresX = T1;
  regsym(&Yast_linearizeYlift_proceduresX,"ast-linearize","lift-procedures!");
  T5 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_48),CHKREF(lit_15)),YPPlist(3,CHKREF(YastYLast_primitiveG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_58 = YPmet(FUNCODEREF(fun_58),CHKREF(lit_47),T5,ENVNUL);
  T9 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T9 != YPfalse) {
    T8 = CHKREF(Yast_linearizeYlift_proceduresX);
  } else {
    T8 = YPfalse;
  }
  T7 = fun_58;
  T6 = CALL2(CHKREF(YPdefine_method),T8,T7);
  Yast_linearizeYlift_proceduresX = T6;
  regsym(&Yast_linearizeYlift_proceduresX,"ast-linearize","lift-procedures!");
  T10 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_48),CHKREF(lit_15)),YPPlist(3,CHKREF(YastYLast_genericG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_59 = YPmet(FUNCODEREF(fun_59),CHKREF(lit_47),T10,ENVNUL);
  T14 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T14 != YPfalse) {
    T13 = CHKREF(Yast_linearizeYlift_proceduresX);
  } else {
    T13 = YPfalse;
  }
  T12 = fun_59;
  T11 = CALL2(CHKREF(YPdefine_method),T13,T12);
  Yast_linearizeYlift_proceduresX = T11;
  regsym(&Yast_linearizeYlift_proceduresX,"ast-linearize","lift-procedures!");
  T15 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_48),CHKREF(lit_15)),YPPlist(3,CHKREF(YastYLast_functionG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_60 = YPmet(FUNCODEREF(fun_60),CHKREF(lit_47),T15,ENVNUL);
  T19 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T19 != YPfalse) {
    T18 = CHKREF(Yast_linearizeYlift_proceduresX);
  } else {
    T18 = YPfalse;
  }
  T17 = fun_60;
  T16 = CALL2(CHKREF(YPdefine_method),T18,T17);
  Yast_linearizeYlift_proceduresX = T16;
  regsym(&Yast_linearizeYlift_proceduresX,"ast-linearize","lift-procedures!");
  T21 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T20 = CALL3(CHKREF(YPisa),T21,Ynil,Ynil);
  Yast_linearizeYLflattened_programG = T20;
  regsym(&Yast_linearizeYLflattened_programG,"ast-linearize","<flattened-program>");
  lit_55 = YPPsym((P)"program-form");
  T22 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_61 = YPmet(FUNCODEREF(fun_61),CHKREF(lit_55),T22,ENVNUL);
  T26 = BOUNDP(Yast_linearizeYprogram_form);
  if (T26 != YPfalse) {
    T25 = CHKREF(Yast_linearizeYprogram_form);
  } else {
    T25 = YPfalse;
  }
  T24 = fun_61;
  T23 = CALL2(CHKREF(YPdefine_method),T25,T24);
  Yast_linearizeYprogram_form = T23;
  regsym(&Yast_linearizeYprogram_form,"ast-linearize","program-form");
  lit_56 = YPPsym((P)"program-form-setter");
  T28 = CALL1(CHKREF(YruntimeYfalse_or),CHKREF(YastYLprogramG));
  T27 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_7)),YPPlist(2,T28,CHKREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_62 = YPmet(FUNCODEREF(fun_62),CHKREF(lit_56),T27,ENVNUL);
  T32 = BOUNDP(Yast_linearizeYprogram_form_setter);
  if (T32 != YPfalse) {
    T31 = CHKREF(Yast_linearizeYprogram_form_setter);
  } else {
    T31 = YPfalse;
  }
  T30 = fun_62;
  T29 = CALL2(CHKREF(YPdefine_method),T31,T30);
  Yast_linearizeYprogram_form_setter = T29;
  regsym(&Yast_linearizeYprogram_form_setter,"ast-linearize","program-form-setter");
  T33 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_63 = YPmet(FUNCODEREF(fun_63),YPfalse,T33,ENVNUL);
  T35 = CALL1(CHKREF(YruntimeYfalse_or),CHKREF(YastYLprogramG));
  T34 = fun_63;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLflattened_programG),CHKREF(Yast_linearizeYprogram_form),CHKREF(Yast_linearizeYprogram_form_setter),T35,T34);
  lit_57 = YPPsym((P)"program-quotations");
  T36 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_64 = YPmet(FUNCODEREF(fun_64),CHKREF(lit_57),T36,ENVNUL);
  T40 = BOUNDP(Yast_linearizeYprogram_quotations);
  if (T40 != YPfalse) {
    T39 = CHKREF(Yast_linearizeYprogram_quotations);
  } else {
    T39 = YPfalse;
  }
  T38 = fun_64;
  T37 = CALL2(CHKREF(YPdefine_method),T39,T38);
  Yast_linearizeYprogram_quotations = T37;
  regsym(&Yast_linearizeYprogram_quotations,"ast-linearize","program-quotations");
  lit_58 = YPPsym((P)"program-quotations-setter");
  T41 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_7)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_65 = YPmet(FUNCODEREF(fun_65),CHKREF(lit_58),T41,ENVNUL);
  T45 = BOUNDP(Yast_linearizeYprogram_quotations_setter);
  if (T45 != YPfalse) {
    T44 = CHKREF(Yast_linearizeYprogram_quotations_setter);
  } else {
    T44 = YPfalse;
  }
  T43 = fun_65;
  T42 = CALL2(CHKREF(YPdefine_method),T44,T43);
  Yast_linearizeYprogram_quotations_setter = T42;
  regsym(&Yast_linearizeYprogram_quotations_setter,"ast-linearize","program-quotations-setter");
  T46 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_66 = YPmet(FUNCODEREF(fun_66),YPfalse,T46,ENVNUL);
  T47 = fun_66;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLflattened_programG),CHKREF(Yast_linearizeYprogram_quotations),CHKREF(Yast_linearizeYprogram_quotations_setter),CHKREF(YLanyG),T47);
  lit_59 = YPPsym((P)"program-definitions");
  T48 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_67 = YPmet(FUNCODEREF(fun_67),CHKREF(lit_59),T48,ENVNUL);
  T52 = BOUNDP(Yast_linearizeYprogram_definitions);
  if (T52 != YPfalse) {
    T51 = CHKREF(Yast_linearizeYprogram_definitions);
  } else {
    T51 = YPfalse;
  }
  T50 = fun_67;
  T49 = CALL2(CHKREF(YPdefine_method),T51,T50);
  Yast_linearizeYprogram_definitions = T49;
  regsym(&Yast_linearizeYprogram_definitions,"ast-linearize","program-definitions");
  lit_60 = YPPsym((P)"program-definitions-setter");
  T53 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_7)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_68 = YPmet(FUNCODEREF(fun_68),CHKREF(lit_60),T53,ENVNUL);
  T57 = BOUNDP(Yast_linearizeYprogram_definitions_setter);
  if (T57 != YPfalse) {
    T56 = CHKREF(Yast_linearizeYprogram_definitions_setter);
  } else {
    T56 = YPfalse;
  }
  T55 = fun_68;
  T54 = CALL2(CHKREF(YPdefine_method),T56,T55);
  Yast_linearizeYprogram_definitions_setter = T54;
  regsym(&Yast_linearizeYprogram_definitions_setter,"ast-linearize","program-definitions-setter");
  T58 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T58,ENVNUL);
  T59 = fun_69;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLflattened_programG),CHKREF(Yast_linearizeYprogram_definitions),CHKREF(Yast_linearizeYprogram_definitions_setter),CHKREF(YLanyG),T59);
  T61 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T60 = CALL3(CHKREF(YPisa),T61,Ynil,Ynil);
  Yast_linearizeYLtop_level_formG = T60;
  regsym(&Yast_linearizeYLtop_level_formG,"ast-linearize","<top-level-form>");
  lit_61 = YPPsym((P)"form-program");
  T62 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_70 = YPmet(FUNCODEREF(fun_70),CHKREF(lit_61),T62,ENVNUL);
  T66 = BOUNDP(Yast_linearizeYform_program);
  if (T66 != YPfalse) {
    T65 = CHKREF(Yast_linearizeYform_program);
  } else {
    T65 = YPfalse;
  }
  T64 = fun_70;
  T63 = CALL2(CHKREF(YPdefine_method),T65,T64);
  Yast_linearizeYform_program = T63;
  regsym(&Yast_linearizeYform_program,"ast-linearize","form-program");
  lit_62 = YPPsym((P)"form-program-setter");
  T67 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_7)),YPPlist(2,CHKREF(YastYLprogramG),CHKREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_71 = YPmet(FUNCODEREF(fun_71),CHKREF(lit_62),T67,ENVNUL);
  T71 = BOUNDP(Yast_linearizeYform_program_setter);
  if (T71 != YPfalse) {
    T70 = CHKREF(Yast_linearizeYform_program_setter);
  } else {
    T70 = YPfalse;
  }
  T69 = fun_71;
  T68 = CALL2(CHKREF(YPdefine_method),T70,T69);
  Yast_linearizeYform_program_setter = T68;
  regsym(&Yast_linearizeYform_program_setter,"ast-linearize","form-program-setter");
  T72 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T72,ENVNUL);
  T73 = fun_72;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLtop_level_formG),CHKREF(Yast_linearizeYform_program),CHKREF(Yast_linearizeYform_program_setter),CHKREF(YastYLprogramG),T73);
  lit_63 = YPPsym((P)"form-quotations");
  T74 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_73 = YPmet(FUNCODEREF(fun_73),CHKREF(lit_63),T74,ENVNUL);
  T78 = BOUNDP(Yast_linearizeYform_quotations);
  if (T78 != YPfalse) {
    T77 = CHKREF(Yast_linearizeYform_quotations);
  } else {
    T77 = YPfalse;
  }
  T76 = fun_73;
  T75 = CALL2(CHKREF(YPdefine_method),T77,T76);
  Yast_linearizeYform_quotations = T75;
  regsym(&Yast_linearizeYform_quotations,"ast-linearize","form-quotations");
  lit_64 = YPPsym((P)"form-quotations-setter");
  T79 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_7)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_74 = YPmet(FUNCODEREF(fun_74),CHKREF(lit_64),T79,ENVNUL);
  T83 = BOUNDP(Yast_linearizeYform_quotations_setter);
  if (T83 != YPfalse) {
    T82 = CHKREF(Yast_linearizeYform_quotations_setter);
  } else {
    T82 = YPfalse;
  }
  T81 = fun_74;
  T80 = CALL2(CHKREF(YPdefine_method),T82,T81);
  Yast_linearizeYform_quotations_setter = T80;
  regsym(&Yast_linearizeYform_quotations_setter,"ast-linearize","form-quotations-setter");
  T84 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T84,ENVNUL);
  T85 = fun_75;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLtop_level_formG),CHKREF(Yast_linearizeYform_quotations),CHKREF(Yast_linearizeYform_quotations_setter),CHKREF(YLanyG),T85);
  lit_65 = YPPsym((P)"form-definitions");
  T86 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_76 = YPmet(FUNCODEREF(fun_76),CHKREF(lit_65),T86,ENVNUL);
  T90 = BOUNDP(Yast_linearizeYform_definitions);
  if (T90 != YPfalse) {
    T89 = CHKREF(Yast_linearizeYform_definitions);
  } else {
    T89 = YPfalse;
  }
  T88 = fun_76;
  T87 = CALL2(CHKREF(YPdefine_method),T89,T88);
  Yast_linearizeYform_definitions = T87;
  regsym(&Yast_linearizeYform_definitions,"ast-linearize","form-definitions");
  lit_66 = YPPsym((P)"form-definitions-setter");
  T91 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_7)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_77 = YPmet(FUNCODEREF(fun_77),CHKREF(lit_66),T91,ENVNUL);
  T95 = BOUNDP(Yast_linearizeYform_definitions_setter);
  if (T95 != YPfalse) {
    T94 = CHKREF(Yast_linearizeYform_definitions_setter);
  } else {
    T94 = YPfalse;
  }
  T93 = fun_77;
  T92 = CALL2(CHKREF(YPdefine_method),T94,T93);
  Yast_linearizeYform_definitions_setter = T92;
  regsym(&Yast_linearizeYform_definitions_setter,"ast-linearize","form-definitions-setter");
  T96 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_78 = YPmet(FUNCODEREF(fun_78),YPfalse,T96,ENVNUL);
  T97 = fun_78;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLtop_level_formG),CHKREF(Yast_linearizeYform_definitions),CHKREF(Yast_linearizeYform_definitions_setter),CHKREF(YLanyG),T97);
  T99 = (P)YPpair(CHKREF(Yast_linearizeYLflat_functionG),Ynil);
  T98 = CALL3(CHKREF(YPisa),T99,Ynil,Ynil);
  Yast_linearizeYLfunction_definitionG = T98;
  regsym(&Yast_linearizeYLfunction_definitionG,"ast-linearize","<function-definition>");
  lit_67 = YPPsym((P)"function-index");
  T100 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(Yast_linearizeYLfunction_definitionG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_79 = YPmet(FUNCODEREF(fun_79),CHKREF(lit_67),T100,ENVNUL);
  T104 = BOUNDP(Yast_linearizeYfunction_index);
  if (T104 != YPfalse) {
    T103 = CHKREF(Yast_linearizeYfunction_index);
  } else {
    T103 = YPfalse;
  }
  T102 = fun_79;
  T101 = CALL2(CHKREF(YPdefine_method),T103,T102);
  Yast_linearizeYfunction_index = T101;
  regsym(&Yast_linearizeYfunction_index,"ast-linearize","function-index");
  lit_68 = YPPsym((P)"function-index-setter");
  T105 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_7)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLfunction_definitionG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_80 = YPmet(FUNCODEREF(fun_80),CHKREF(lit_68),T105,ENVNUL);
  T109 = BOUNDP(Yast_linearizeYfunction_index_setter);
  if (T109 != YPfalse) {
    T108 = CHKREF(Yast_linearizeYfunction_index_setter);
  } else {
    T108 = YPfalse;
  }
  T107 = fun_80;
  T106 = CALL2(CHKREF(YPdefine_method),T108,T107);
  Yast_linearizeYfunction_index_setter = T106;
  regsym(&Yast_linearizeYfunction_index_setter,"ast-linearize","function-index-setter");
  T110 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T110,ENVNUL);
  T111 = fun_81;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLfunction_definitionG),CHKREF(Yast_linearizeYfunction_index),CHKREF(Yast_linearizeYfunction_index_setter),CHKREF(YLanyG),T111);
  lit_69 = YPPsym((P)"function-temporaries");
  T112 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(Yast_linearizeYLfunction_definitionG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_82 = YPmet(FUNCODEREF(fun_82),CHKREF(lit_69),T112,ENVNUL);
  T116 = BOUNDP(Yast_linearizeYfunction_temporaries);
  if (T116 != YPfalse) {
    T115 = CHKREF(Yast_linearizeYfunction_temporaries);
  } else {
    T115 = YPfalse;
  }
  T114 = fun_82;
  T113 = CALL2(CHKREF(YPdefine_method),T115,T114);
  Yast_linearizeYfunction_temporaries = T113;
  regsym(&Yast_linearizeYfunction_temporaries,"ast-linearize","function-temporaries");
  lit_70 = YPPsym((P)"function-temporaries-setter");
  T117 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_7)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLfunction_definitionG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_83 = YPmet(FUNCODEREF(fun_83),CHKREF(lit_70),T117,ENVNUL);
  T121 = BOUNDP(Yast_linearizeYfunction_temporaries_setter);
  if (T121 != YPfalse) {
    T120 = CHKREF(Yast_linearizeYfunction_temporaries_setter);
  } else {
    T120 = YPfalse;
  }
  T119 = fun_83;
  T118 = CALL2(CHKREF(YPdefine_method),T120,T119);
  Yast_linearizeYfunction_temporaries_setter = T118;
  regsym(&Yast_linearizeYfunction_temporaries_setter,"ast-linearize","function-temporaries-setter");
  T122 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_84 = YPmet(FUNCODEREF(fun_84),YPfalse,T122,ENVNUL);
  T123 = fun_84;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLfunction_definitionG),CHKREF(Yast_linearizeYfunction_temporaries),CHKREF(Yast_linearizeYfunction_temporaries_setter),CHKREF(YLanyG),T123);
  lit_71 = YPPsym((P)"function-registers");
  T124 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(Yast_linearizeYLfunction_definitionG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_85 = YPmet(FUNCODEREF(fun_85),CHKREF(lit_71),T124,ENVNUL);
  T128 = BOUNDP(Yast_linearizeYfunction_registers);
  if (T128 != YPfalse) {
    T127 = CHKREF(Yast_linearizeYfunction_registers);
  } else {
    T127 = YPfalse;
  }
  T126 = fun_85;
  T125 = CALL2(CHKREF(YPdefine_method),T127,T126);
  Yast_linearizeYfunction_registers = T125;
  regsym(&Yast_linearizeYfunction_registers,"ast-linearize","function-registers");
  lit_72 = YPPsym((P)"function-registers-setter");
  T129 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_7)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLfunction_definitionG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_86 = YPmet(FUNCODEREF(fun_86),CHKREF(lit_72),T129,ENVNUL);
  T133 = BOUNDP(Yast_linearizeYfunction_registers_setter);
  if (T133 != YPfalse) {
    T132 = CHKREF(Yast_linearizeYfunction_registers_setter);
  } else {
    T132 = YPfalse;
  }
  T131 = fun_86;
  T130 = CALL2(CHKREF(YPdefine_method),T132,T131);
  Yast_linearizeYfunction_registers_setter = T130;
  regsym(&Yast_linearizeYfunction_registers_setter,"ast-linearize","function-registers-setter");
  T134 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T134,ENVNUL);
  T135 = fun_87;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLfunction_definitionG),CHKREF(Yast_linearizeYfunction_registers),CHKREF(Yast_linearizeYfunction_registers_setter),CHKREF(YLanyG),T135);
  lit_73 = YPPsym((P)"function-self-recursive?");
  T136 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(Yast_linearizeYLfunction_definitionG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_88 = YPmet(FUNCODEREF(fun_88),CHKREF(lit_73),T136,ENVNUL);
  T140 = BOUNDP(Yast_linearizeYfunction_self_recursiveQ);
  if (T140 != YPfalse) {
    T139 = CHKREF(Yast_linearizeYfunction_self_recursiveQ);
  } else {
    T139 = YPfalse;
  }
  T138 = fun_88;
  T137 = CALL2(CHKREF(YPdefine_method),T139,T138);
  Yast_linearizeYfunction_self_recursiveQ = T137;
  regsym(&Yast_linearizeYfunction_self_recursiveQ,"ast-linearize","function-self-recursive?");
  lit_74 = YPPsym((P)"function-self-recursive?-setter");
  T141 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_7)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLfunction_definitionG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_89 = YPmet(FUNCODEREF(fun_89),CHKREF(lit_74),T141,ENVNUL);
  T145 = BOUNDP(Yast_linearizeYfunction_self_recursiveQ_setter);
  if (T145 != YPfalse) {
    T144 = CHKREF(Yast_linearizeYfunction_self_recursiveQ_setter);
  } else {
    T144 = YPfalse;
  }
  T143 = fun_89;
  T142 = CALL2(CHKREF(YPdefine_method),T144,T143);
  Yast_linearizeYfunction_self_recursiveQ_setter = T142;
  regsym(&Yast_linearizeYfunction_self_recursiveQ_setter,"ast-linearize","function-self-recursive?-setter");
  T146 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_90 = YPmet(FUNCODEREF(fun_90),YPfalse,T146,ENVNUL);
  T147 = fun_90;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLfunction_definitionG),CHKREF(Yast_linearizeYfunction_self_recursiveQ),CHKREF(Yast_linearizeYfunction_self_recursiveQ_setter),CHKREF(YLanyG),T147);
  T149 = (P)YPpair(CHKREF(YastYLast_primitiveG),Ynil);
  T148 = CALL3(CHKREF(YPisa),T149,Ynil,Ynil);
  Yast_linearizeYLprimitive_definitionG = T148;
  regsym(&Yast_linearizeYLprimitive_definitionG,"ast-linearize","<primitive-definition>");
  T150 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(Yast_linearizeYLprimitive_definitionG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_91 = YPmet(FUNCODEREF(fun_91),CHKREF(lit_69),T150,ENVNUL);
  T154 = BOUNDP(Yast_linearizeYfunction_temporaries);
  if (T154 != YPfalse) {
    T153 = CHKREF(Yast_linearizeYfunction_temporaries);
  } else {
    T153 = YPfalse;
  }
  T152 = fun_91;
  T151 = CALL2(CHKREF(YPdefine_method),T153,T152);
  Yast_linearizeYfunction_temporaries = T151;
  regsym(&Yast_linearizeYfunction_temporaries,"ast-linearize","function-temporaries");
  T155 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_7)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLprimitive_definitionG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_92 = YPmet(FUNCODEREF(fun_92),CHKREF(lit_70),T155,ENVNUL);
  T159 = BOUNDP(Yast_linearizeYfunction_temporaries_setter);
  if (T159 != YPfalse) {
    T158 = CHKREF(Yast_linearizeYfunction_temporaries_setter);
  } else {
    T158 = YPfalse;
  }
  T157 = fun_92;
  T156 = CALL2(CHKREF(YPdefine_method),T158,T157);
  Yast_linearizeYfunction_temporaries_setter = T156;
  regsym(&Yast_linearizeYfunction_temporaries_setter,"ast-linearize","function-temporaries-setter");
  T160 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_93 = YPmet(FUNCODEREF(fun_93),YPfalse,T160,ENVNUL);
  T161 = fun_93;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLprimitive_definitionG),CHKREF(Yast_linearizeYfunction_temporaries),CHKREF(Yast_linearizeYfunction_temporaries_setter),CHKREF(YLanyG),T161);
  T162 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(Yast_linearizeYLprimitive_definitionG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_94 = YPmet(FUNCODEREF(fun_94),CHKREF(lit_71),T162,ENVNUL);
  T166 = BOUNDP(Yast_linearizeYfunction_registers);
  if (T166 != YPfalse) {
    T165 = CHKREF(Yast_linearizeYfunction_registers);
  } else {
    T165 = YPfalse;
  }
  T164 = fun_94;
  T163 = CALL2(CHKREF(YPdefine_method),T165,T164);
  Yast_linearizeYfunction_registers = T163;
  regsym(&Yast_linearizeYfunction_registers,"ast-linearize","function-registers");
  T167 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_7)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLprimitive_definitionG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_95 = YPmet(FUNCODEREF(fun_95),CHKREF(lit_72),T167,ENVNUL);
  T171 = BOUNDP(Yast_linearizeYfunction_registers_setter);
  if (T171 != YPfalse) {
    T170 = CHKREF(Yast_linearizeYfunction_registers_setter);
  } else {
    T170 = YPfalse;
  }
  T169 = fun_95;
  T168 = CALL2(CHKREF(YPdefine_method),T170,T169);
  Yast_linearizeYfunction_registers_setter = T168;
  regsym(&Yast_linearizeYfunction_registers_setter,"ast-linearize","function-registers-setter");
  T172 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_96 = YPmet(FUNCODEREF(fun_96),YPfalse,T172,ENVNUL);
  T173 = fun_96;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLprimitive_definitionG),CHKREF(Yast_linearizeYfunction_registers),CHKREF(Yast_linearizeYfunction_registers_setter),CHKREF(YLanyG),T173);
  T174 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(Yast_linearizeYLprimitive_definitionG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_97 = YPmet(FUNCODEREF(fun_97),CHKREF(lit_73),T174,ENVNUL);
  T178 = BOUNDP(Yast_linearizeYfunction_self_recursiveQ);
  if (T178 != YPfalse) {
    T177 = CHKREF(Yast_linearizeYfunction_self_recursiveQ);
  } else {
    T177 = YPfalse;
  }
  T176 = fun_97;
  T175 = CALL2(CHKREF(YPdefine_method),T177,T176);
  Yast_linearizeYfunction_self_recursiveQ = T175;
  regsym(&Yast_linearizeYfunction_self_recursiveQ,"ast-linearize","function-self-recursive?");
  T179 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_7)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLprimitive_definitionG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_98 = YPmet(FUNCODEREF(fun_98),CHKREF(lit_74),T179,ENVNUL);
  T183 = BOUNDP(Yast_linearizeYfunction_self_recursiveQ_setter);
  if (T183 != YPfalse) {
    T182 = CHKREF(Yast_linearizeYfunction_self_recursiveQ_setter);
  } else {
    T182 = YPfalse;
  }
  T181 = fun_98;
  T180 = CALL2(CHKREF(YPdefine_method),T182,T181);
  Yast_linearizeYfunction_self_recursiveQ_setter = T180;
  regsym(&Yast_linearizeYfunction_self_recursiveQ_setter,"ast-linearize","function-self-recursive?-setter");
  T184 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_99 = YPmet(FUNCODEREF(fun_99),YPfalse,T184,ENVNUL);
  T185 = fun_99;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLprimitive_definitionG),CHKREF(Yast_linearizeYfunction_self_recursiveQ),CHKREF(Yast_linearizeYfunction_self_recursiveQ_setter),CHKREF(YLanyG),T185);
  T187 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T186 = CALL3(CHKREF(YPisa),T187,Ynil,Ynil);
  Yast_linearizeYLclosure_creationG = T186;
  regsym(&Yast_linearizeYLclosure_creationG,"ast-linearize","<closure-creation>");
  lit_75 = YPPsym((P)"closure-creation-index");
  T188 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(Yast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_100 = YPmet(FUNCODEREF(fun_100),CHKREF(lit_75),T188,ENVNUL);
  T192 = BOUNDP(Yast_linearizeYclosure_creation_index);
  if (T192 != YPfalse) {
    T191 = CHKREF(Yast_linearizeYclosure_creation_index);
  } else {
    T191 = YPfalse;
  }
  T190 = fun_100;
  T189 = CALL2(CHKREF(YPdefine_method),T191,T190);
  Yast_linearizeYclosure_creation_index = T189;
  regsym(&Yast_linearizeYclosure_creation_index,"ast-linearize","closure-creation-index");
  lit_76 = YPPsym((P)"closure-creation-index-setter");
  T193 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_7)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_101 = YPmet(FUNCODEREF(fun_101),CHKREF(lit_76),T193,ENVNUL);
  T197 = BOUNDP(Yast_linearizeYclosure_creation_index_setter);
  if (T197 != YPfalse) {
    T196 = CHKREF(Yast_linearizeYclosure_creation_index_setter);
  } else {
    T196 = YPfalse;
  }
  T195 = fun_101;
  T194 = CALL2(CHKREF(YPdefine_method),T196,T195);
  Yast_linearizeYclosure_creation_index_setter = T194;
  regsym(&Yast_linearizeYclosure_creation_index_setter,"ast-linearize","closure-creation-index-setter");
  T198 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_102 = YPmet(FUNCODEREF(fun_102),YPfalse,T198,ENVNUL);
  T199 = fun_102;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLclosure_creationG),CHKREF(Yast_linearizeYclosure_creation_index),CHKREF(Yast_linearizeYclosure_creation_index_setter),CHKREF(YLanyG),T199);
  lit_77 = YPPsym((P)"closure-creation-bindings");
  T200 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(Yast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_103 = YPmet(FUNCODEREF(fun_103),CHKREF(lit_77),T200,ENVNUL);
  T204 = BOUNDP(Yast_linearizeYclosure_creation_bindings);
  if (T204 != YPfalse) {
    T203 = CHKREF(Yast_linearizeYclosure_creation_bindings);
  } else {
    T203 = YPfalse;
  }
  T202 = fun_103;
  T201 = CALL2(CHKREF(YPdefine_method),T203,T202);
  Yast_linearizeYclosure_creation_bindings = T201;
  regsym(&Yast_linearizeYclosure_creation_bindings,"ast-linearize","closure-creation-bindings");
  lit_78 = YPPsym((P)"closure-creation-bindings-setter");
  T205 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_7)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_104 = YPmet(FUNCODEREF(fun_104),CHKREF(lit_78),T205,ENVNUL);
  T209 = BOUNDP(Yast_linearizeYclosure_creation_bindings_setter);
  if (T209 != YPfalse) {
    T208 = CHKREF(Yast_linearizeYclosure_creation_bindings_setter);
  } else {
    T208 = YPfalse;
  }
  T207 = fun_104;
  T206 = CALL2(CHKREF(YPdefine_method),T208,T207);
  Yast_linearizeYclosure_creation_bindings_setter = T206;
  regsym(&Yast_linearizeYclosure_creation_bindings_setter,"ast-linearize","closure-creation-bindings-setter");
  T210 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_105 = YPmet(FUNCODEREF(fun_105),YPfalse,T210,ENVNUL);
  T211 = fun_105;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLclosure_creationG),CHKREF(Yast_linearizeYclosure_creation_bindings),CHKREF(Yast_linearizeYclosure_creation_bindings_setter),CHKREF(YLanyG),T211);
  lit_79 = YPPsym((P)"closure-creation-free");
  T212 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(Yast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_106 = YPmet(FUNCODEREF(fun_106),CHKREF(lit_79),T212,ENVNUL);
  T216 = BOUNDP(Yast_linearizeYclosure_creation_free);
  if (T216 != YPfalse) {
    T215 = CHKREF(Yast_linearizeYclosure_creation_free);
  } else {
    T215 = YPfalse;
  }
  T214 = fun_106;
  T213 = CALL2(CHKREF(YPdefine_method),T215,T214);
  Yast_linearizeYclosure_creation_free = T213;
  regsym(&Yast_linearizeYclosure_creation_free,"ast-linearize","closure-creation-free");
  lit_80 = YPPsym((P)"closure-creation-free-setter");
  T217 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_7)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_107 = YPmet(FUNCODEREF(fun_107),CHKREF(lit_80),T217,ENVNUL);
  T221 = BOUNDP(Yast_linearizeYclosure_creation_free_setter);
  if (T221 != YPfalse) {
    T220 = CHKREF(Yast_linearizeYclosure_creation_free_setter);
  } else {
    T220 = YPfalse;
  }
  T219 = fun_107;
  T218 = CALL2(CHKREF(YPdefine_method),T220,T219);
  Yast_linearizeYclosure_creation_free_setter = T218;
  regsym(&Yast_linearizeYclosure_creation_free_setter,"ast-linearize","closure-creation-free-setter");
  T222 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_108 = YPmet(FUNCODEREF(fun_108),YPfalse,T222,ENVNUL);
  T223 = fun_108;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLclosure_creationG),CHKREF(Yast_linearizeYclosure_creation_free),CHKREF(Yast_linearizeYclosure_creation_free_setter),CHKREF(YLanyG),T223);
  lit_81 = YPPsym((P)"flatten-seqs");
  T224 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_109 = YPmet(FUNCODEREF(fun_109),CHKREF(lit_81),T224,ENVNUL);
  T228 = BOUNDP(Yast_linearizeYflatten_seqs);
  if (T228 != YPfalse) {
    T227 = CHKREF(Yast_linearizeYflatten_seqs);
  } else {
    T227 = YPfalse;
  }
  T226 = fun_109;
  T225 = CALL2(CHKREF(YPdefine_method),T227,T226);
  Yast_linearizeYflatten_seqs = T225;
  regsym(&Yast_linearizeYflatten_seqs,"ast-linearize","flatten-seqs");
  lit_82 = YPPsym((P)"s");
  lit_83 = YPPsym((P)"inner");
  lit_84 = YPPsym((P)"ss");
  T231 = YPsig(YPPlist(2,CHKREF(lit_84),CHKREF(lit_20)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_inner_110 = YPmet(FUNCODEREF(fun_inner_110),CHKREF(lit_83),T231,ENVNUL);
  T230 = YPsig(YPPlist(2,CHKREF(lit_82),CHKREF(lit_20)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_111 = YPmet(FUNCODEREF(fun_loop_111),CHKREF(lit_17),T230,ENVNUL);
  T229 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLsequentialG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_112 = YPmet(FUNCODEREF(fun_112),CHKREF(lit_81),T229,ENVNUL);
  T235 = BOUNDP(Yast_linearizeYflatten_seqs);
  if (T235 != YPfalse) {
    T234 = CHKREF(Yast_linearizeYflatten_seqs);
  } else {
    T234 = YPfalse;
  }
  T233 = fun_112;
  T232 = CALL2(CHKREF(YPdefine_method),T234,T233);
  Yast_linearizeYflatten_seqs = T232;
  regsym(&Yast_linearizeYflatten_seqs,"ast-linearize","flatten-seqs");
  lit_85 = YPPsym((P)"as-top-level-forms");
  lit_86 = YPPsym((P)"programs");
  T237 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_113 = YPmet(FUNCODEREF(fun_113),YPfalse,T237,ENVNUL);
  T236 = YPsig(YPPlist(1,CHKREF(lit_86)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_114 = YPmet(FUNCODEREF(fun_114),CHKREF(lit_85),T236,ENVNUL);
  T241 = BOUNDP(Yast_linearizeYas_top_level_forms);
  if (T241 != YPfalse) {
    T240 = CHKREF(Yast_linearizeYas_top_level_forms);
  } else {
    T240 = YPfalse;
  }
  T239 = fun_114;
  T238 = CALL2(CHKREF(YPdefine_method),T240,T239);
  Yast_linearizeYas_top_level_forms = T238;
  regsym(&Yast_linearizeYas_top_level_forms,"ast-linearize","as-top-level-forms");
  lit_87 = YPPsym((P)"extract-things!");
  T243 = YPsig(YPPlist(1,CHKREF(lit_16)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_115 = YPmet(FUNCODEREF(fun_115),YPfalse,T243,ENVNUL);
  T242 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_116 = YPmet(FUNCODEREF(fun_116),CHKREF(lit_87),T242,ENVNUL);
  T247 = BOUNDP(Yast_linearizeYextract_thingsX);
  if (T247 != YPfalse) {
    T246 = CHKREF(Yast_linearizeYextract_thingsX);
  } else {
    T246 = YPfalse;
  }
  T245 = fun_116;
  T244 = CALL2(CHKREF(YPdefine_method),T246,T245);
  Yast_linearizeYextract_thingsX = T244;
  regsym(&Yast_linearizeYextract_thingsX,"ast-linearize","extract-things!");
  lit_88 = YPPsym((P)"extract!");
  lit_89 = YPPsym((P)"result");
  T248 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_16),CHKREF(lit_89)),YPPlist(3,CHKREF(YastYLprogramG),CHKREF(Yast_linearizeYLtop_level_formG),CHKREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_117 = YPmet(FUNCODEREF(fun_117),CHKREF(lit_88),T248,ENVNUL);
  T252 = BOUNDP(Yast_linearizeYextractX);
  if (T252 != YPfalse) {
    T251 = CHKREF(Yast_linearizeYextractX);
  } else {
    T251 = YPfalse;
  }
  T250 = fun_117;
  T249 = CALL2(CHKREF(YPdefine_method),T251,T250);
  Yast_linearizeYextractX = T249;
  regsym(&Yast_linearizeYextractX,"ast-linearize","extract!");
  lit_90 = YPPsym((P)"quotation");
  T253 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_16),CHKREF(lit_89)),YPPlist(3,CHKREF(YastYLconstantG),CHKREF(Yast_linearizeYLtop_level_formG),CHKREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_118 = YPmet(FUNCODEREF(fun_118),CHKREF(lit_88),T253,ENVNUL);
  T257 = BOUNDP(Yast_linearizeYextractX);
  if (T257 != YPfalse) {
    T256 = CHKREF(Yast_linearizeYextractX);
  } else {
    T256 = YPfalse;
  }
  T255 = fun_118;
  T254 = CALL2(CHKREF(YPdefine_method),T256,T255);
  Yast_linearizeYextractX = T254;
  regsym(&Yast_linearizeYextractX,"ast-linearize","extract!");
  T260 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_16),CHKREF(lit_89)),YPPlist(3,CHKREF(YastYLraw_constantG),CHKREF(Yast_linearizeYLtop_level_formG),CHKREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  T259 = fun_119 = YPmet(FUNCODEREF(fun_119),CHKREF(lit_88),T260,ENVNUL);
  T265 = BOUNDP(Yast_linearizeYextractX);
  if (T265 != YPfalse) {
    T264 = CHKREF(Yast_linearizeYextractX);
  } else {
    T264 = YPfalse;
  }
  T263 = fun_119;
  T262 = CALL2(CHKREF(YPdefine_method),T264,T263);
  T261 = Yast_linearizeYextractX = T262;
  regsym(&Yast_linearizeYextractX,"ast-linearize","extract!");
  T258 = T261;
  return T258;
}

P Yast_linearizeY___main_2___() {
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
  lit_91 = YPPsym((P)"binding");
  T1 = YPsig(YPPlist(1,CHKREF(lit_91)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_120 = YPmet(FUNCODEREF(fun_120),YPfalse,T1,ENVNUL);
  T0 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_16),CHKREF(lit_89)),YPPlist(3,CHKREF(Yast_linearizeYLflat_functionG),CHKREF(Yast_linearizeYLtop_level_formG),CHKREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_121 = YPmet(FUNCODEREF(fun_121),CHKREF(lit_88),T0,ENVNUL);
  T5 = BOUNDP(Yast_linearizeYextractX);
  if (T5 != YPfalse) {
    T4 = CHKREF(Yast_linearizeYextractX);
  } else {
    T4 = YPfalse;
  }
  T3 = fun_121;
  T2 = CALL2(CHKREF(YPdefine_method),T4,T3);
  Yast_linearizeYextractX = T2;
  regsym(&Yast_linearizeYextractX,"ast-linearize","extract!");
  T6 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_16),CHKREF(lit_89)),YPPlist(3,CHKREF(YastYLast_primitive_definitionG),CHKREF(Yast_linearizeYLtop_level_formG),CHKREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_122 = YPmet(FUNCODEREF(fun_122),CHKREF(lit_88),T6,ENVNUL);
  T10 = BOUNDP(Yast_linearizeYextractX);
  if (T10 != YPfalse) {
    T9 = CHKREF(Yast_linearizeYextractX);
  } else {
    T9 = YPfalse;
  }
  T8 = fun_122;
  T7 = CALL2(CHKREF(YPdefine_method),T9,T8);
  Yast_linearizeYextractX = T7;
  regsym(&Yast_linearizeYextractX,"ast-linearize","extract!");
  lit_92 = YPPsym((P)"adjoin-definition!");
  lit_93 = YPPsym((P)"free");
  lit_94 = YPPsym((P)"body");
  lit_95 = YPPsym((P)"signature");
  lit_96 = YPPsym((P)"debug-name");
  T11 = YPsig(YPPlist(7,CHKREF(lit_16),CHKREF(lit_89),CHKREF(lit_96),CHKREF(lit_91),CHKREF(lit_95),CHKREF(lit_94),CHKREF(lit_93)),YPPlist(7,CHKREF(Yast_linearizeYLtop_level_formG),CHKREF(Yast_linearizeYLflattened_programG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)7),CHKREF(YLanyG));
  fun_123 = YPmet(FUNCODEREF(fun_123),CHKREF(lit_92),T11,ENVNUL);
  T15 = BOUNDP(Yast_linearizeYadjoin_definitionX);
  if (T15 != YPfalse) {
    T14 = CHKREF(Yast_linearizeYadjoin_definitionX);
  } else {
    T14 = YPfalse;
  }
  T13 = fun_123;
  T12 = CALL2(CHKREF(YPdefine_method),T14,T13);
  Yast_linearizeYadjoin_definitionX = T12;
  regsym(&Yast_linearizeYadjoin_definitionX,"ast-linearize","adjoin-definition!");
  lit_97 = YPPsym((P)"split-program");
  lit_98 = YPPsym((P)"max-count");
  T16 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_98)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_124 = YPmet(FUNCODEREF(fun_124),CHKREF(lit_97),T16,ENVNUL);
  T20 = BOUNDP(Yast_linearizeYsplit_program);
  if (T20 != YPfalse) {
    T19 = CHKREF(Yast_linearizeYsplit_program);
  } else {
    T19 = YPfalse;
  }
  T18 = fun_124;
  T17 = CALL2(CHKREF(YPdefine_method),T19,T18);
  Yast_linearizeYsplit_program = T17;
  regsym(&Yast_linearizeYsplit_program,"ast-linearize","split-program");
  lit_99 = YPPsym((P)"forms");
  lit_100 = YPPsym((P)"count");
  lit_101 = YPPsym((P)"es");
  T23 = YPsig(YPPlist(3,CHKREF(lit_18),CHKREF(lit_101),CHKREF(lit_100)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_inner_125 = YPmet(FUNCODEREF(fun_inner_125),CHKREF(lit_83),T23,ENVNUL);
  T22 = YPsig(YPPlist(2,CHKREF(lit_99),CHKREF(lit_82)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_126 = YPmet(FUNCODEREF(fun_loop_126),CHKREF(lit_17),T22,ENVNUL);
  T21 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_98)),YPPlist(2,CHKREF(YastYLsequentialG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_127 = YPmet(FUNCODEREF(fun_127),CHKREF(lit_97),T21,ENVNUL);
  T27 = BOUNDP(Yast_linearizeYsplit_program);
  if (T27 != YPfalse) {
    T26 = CHKREF(Yast_linearizeYsplit_program);
  } else {
    T26 = YPfalse;
  }
  T25 = fun_127;
  T24 = CALL2(CHKREF(YPdefine_method),T26,T25);
  Yast_linearizeYsplit_program = T24;
  regsym(&Yast_linearizeYsplit_program,"ast-linearize","split-program");
  lit_102 = YPPsym((P)"closurize-main!");
  lit_103 = YPPsym((P)"defns");
  lit_104 = YPPsym((P)"calls");
  lit_105 = YPPsym((P)"predefined");
  lit_106 = YPsb((P)"---");
  lit_107 = YPsb((P)"---main-");
  T29 = YPsig(YPPlist(4,CHKREF(lit_104),CHKREF(lit_103),CHKREF(lit_53),CHKREF(lit_99)),YPPlist(4,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_loop_128 = YPmet(FUNCODEREF(fun_loop_128),CHKREF(lit_17),T29,ENVNUL);
  T28 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_20),CHKREF(lit_98)),YPPlist(3,CHKREF(Yast_linearizeYLflattened_programG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(Yast_linearizeYLflattened_programG));
  fun_129 = YPmet(FUNCODEREF(fun_129),CHKREF(lit_102),T28,ENVNUL);
  T33 = BOUNDP(Yast_linearizeYclosurize_mainX);
  if (T33 != YPfalse) {
    T32 = CHKREF(Yast_linearizeYclosurize_mainX);
  } else {
    T32 = YPfalse;
  }
  T31 = fun_129;
  T30 = CALL2(CHKREF(YPdefine_method),T32,T31);
  Yast_linearizeYclosurize_mainX = T30;
  regsym(&Yast_linearizeYclosurize_mainX,"ast-linearize","closurize-main!");
  lit_108 = YPPsym((P)"gather-temporaries!");
  lit_109 = YPPsym((P)"def");
  T35 = YPsig(YPPlist(1,CHKREF(lit_109)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_130 = YPmet(FUNCODEREF(fun_130),YPfalse,T35,ENVNUL);
  T34 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_131 = YPmet(FUNCODEREF(fun_131),CHKREF(lit_108),T34,ENVNUL);
  T39 = BOUNDP(Yast_linearizeYgather_temporariesX);
  if (T39 != YPfalse) {
    T38 = CHKREF(Yast_linearizeYgather_temporariesX);
  } else {
    T38 = YPfalse;
  }
  T37 = fun_131;
  T36 = CALL2(CHKREF(YPdefine_method),T38,T37);
  Yast_linearizeYgather_temporariesX = T36;
  regsym(&Yast_linearizeYgather_temporariesX,"ast-linearize","gather-temporaries!");
  lit_110 = YPPsym((P)"collect-temporaries!");
  T40 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_48),CHKREF(lit_20)),YPPlist(3,CHKREF(YastYLprogramG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_132 = YPmet(FUNCODEREF(fun_132),CHKREF(lit_110),T40,ENVNUL);
  T44 = BOUNDP(Yast_linearizeYcollect_temporariesX);
  if (T44 != YPfalse) {
    T43 = CHKREF(Yast_linearizeYcollect_temporariesX);
  } else {
    T43 = YPfalse;
  }
  T42 = fun_132;
  T41 = CALL2(CHKREF(YPdefine_method),T43,T42);
  Yast_linearizeYcollect_temporariesX = T41;
  regsym(&Yast_linearizeYcollect_temporariesX,"ast-linearize","collect-temporaries!");
  T45 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_48),CHKREF(lit_20)),YPPlist(3,CHKREF(YastYLlocal_referenceG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_133 = YPmet(FUNCODEREF(fun_133),CHKREF(lit_110),T45,ENVNUL);
  T49 = BOUNDP(Yast_linearizeYcollect_temporariesX);
  if (T49 != YPfalse) {
    T48 = CHKREF(Yast_linearizeYcollect_temporariesX);
  } else {
    T48 = YPfalse;
  }
  T47 = fun_133;
  T46 = CALL2(CHKREF(YPdefine_method),T48,T47);
  Yast_linearizeYcollect_temporariesX = T46;
  regsym(&Yast_linearizeYcollect_temporariesX,"ast-linearize","collect-temporaries!");
  T50 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_48),CHKREF(lit_20)),YPPlist(3,CHKREF(YastYLfix_letG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_134 = YPmet(FUNCODEREF(fun_134),CHKREF(lit_110),T50,ENVNUL);
  T54 = BOUNDP(Yast_linearizeYcollect_temporariesX);
  if (T54 != YPfalse) {
    T53 = CHKREF(Yast_linearizeYcollect_temporariesX);
  } else {
    T53 = YPfalse;
  }
  T52 = fun_134;
  T51 = CALL2(CHKREF(YPdefine_method),T53,T52);
  Yast_linearizeYcollect_temporariesX = T51;
  regsym(&Yast_linearizeYcollect_temporariesX,"ast-linearize","collect-temporaries!");
  T55 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_48),CHKREF(lit_20)),YPPlist(3,CHKREF(YastYLlocalsG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_135 = YPmet(FUNCODEREF(fun_135),CHKREF(lit_110),T55,ENVNUL);
  T59 = BOUNDP(Yast_linearizeYcollect_temporariesX);
  if (T59 != YPfalse) {
    T58 = CHKREF(Yast_linearizeYcollect_temporariesX);
  } else {
    T58 = YPfalse;
  }
  T57 = fun_135;
  T56 = CALL2(CHKREF(YPdefine_method),T58,T57);
  Yast_linearizeYcollect_temporariesX = T56;
  regsym(&Yast_linearizeYcollect_temporariesX,"ast-linearize","collect-temporaries!");
  lit_111 = YPPsym((P)"adjoin-temporary-variables!");
  lit_112 = YPPsym((P)"new-bindings");
  lit_113 = YPPsym((P)"adjoin");
  lit_114 = YPPsym((P)"temps");
  T61 = YPsig(YPPlist(2,CHKREF(lit_114),CHKREF(lit_15)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_adjoin_136 = YPmet(FUNCODEREF(fun_adjoin_136),CHKREF(lit_113),T61,ENVNUL);
  T60 = YPsig(YPPlist(2,CHKREF(lit_48),CHKREF(lit_112)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_137 = YPmet(FUNCODEREF(fun_137),CHKREF(lit_111),T60,ENVNUL);
  T65 = BOUNDP(Yast_linearizeYadjoin_temporary_variablesX);
  if (T65 != YPfalse) {
    T64 = CHKREF(Yast_linearizeYadjoin_temporary_variablesX);
  } else {
    T64 = YPfalse;
  }
  T63 = fun_137;
  T62 = CALL2(CHKREF(YPdefine_method),T64,T63);
  Yast_linearizeYadjoin_temporary_variablesX = T62;
  regsym(&Yast_linearizeYadjoin_temporary_variablesX,"ast-linearize","adjoin-temporary-variables!");
  T67 = (P)YPpair(CHKREF(YastYLlocal_bindingG),Ynil);
  T66 = CALL3(CHKREF(YPisa),T67,Ynil,Ynil);
  Yast_linearizeYLrenamed_local_bindingG = T66;
  regsym(&Yast_linearizeYLrenamed_local_bindingG,"ast-linearize","<renamed-local-binding>");
  lit_115 = YPPsym((P)"binding-index");
  T68 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(Yast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_138 = YPmet(FUNCODEREF(fun_138),CHKREF(lit_115),T68,ENVNUL);
  T72 = BOUNDP(Yast_linearizeYbinding_index);
  if (T72 != YPfalse) {
    T71 = CHKREF(Yast_linearizeYbinding_index);
  } else {
    T71 = YPfalse;
  }
  T70 = fun_138;
  T69 = CALL2(CHKREF(YPdefine_method),T71,T70);
  Yast_linearizeYbinding_index = T69;
  regsym(&Yast_linearizeYbinding_index,"ast-linearize","binding-index");
  lit_116 = YPPsym((P)"binding-index-setter");
  T73 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_7)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_139 = YPmet(FUNCODEREF(fun_139),CHKREF(lit_116),T73,ENVNUL);
  T77 = BOUNDP(Yast_linearizeYbinding_index_setter);
  if (T77 != YPfalse) {
    T76 = CHKREF(Yast_linearizeYbinding_index_setter);
  } else {
    T76 = YPfalse;
  }
  T75 = fun_139;
  T74 = CALL2(CHKREF(YPdefine_method),T76,T75);
  Yast_linearizeYbinding_index_setter = T74;
  regsym(&Yast_linearizeYbinding_index_setter,"ast-linearize","binding-index-setter");
  T78 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_140 = YPmet(FUNCODEREF(fun_140),YPfalse,T78,ENVNUL);
  T79 = fun_140;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLrenamed_local_bindingG),CHKREF(Yast_linearizeYbinding_index),CHKREF(Yast_linearizeYbinding_index_setter),CHKREF(YLanyG),T79);
  Yast_linearizeYTrenaming_bindings_counterT = YPint((P)0);
  regsym(&Yast_linearizeYTrenaming_bindings_counterT,"ast-linearize","*renaming-bindings-counter*");
  lit_117 = YPPsym((P)"new-renamed-binding");
  T80 = YPsig(YPPlist(1,CHKREF(lit_91)),YPPlist(1,CHKREF(YastYLlocal_bindingG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_141 = YPmet(FUNCODEREF(fun_141),CHKREF(lit_117),T80,ENVNUL);
  T84 = BOUNDP(Yast_linearizeYnew_renamed_binding);
  if (T84 != YPfalse) {
    T83 = CHKREF(Yast_linearizeYnew_renamed_binding);
  } else {
    T83 = YPfalse;
  }
  T82 = fun_141;
  T81 = CALL2(CHKREF(YPdefine_method),T83,T82);
  Yast_linearizeYnew_renamed_binding = T81;
  regsym(&Yast_linearizeYnew_renamed_binding,"ast-linearize","new-renamed-binding");
  lit_118 = YPPsym((P)"register-allocate!");
  T86 = YPsig(YPPlist(1,CHKREF(lit_109)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_142 = YPmet(FUNCODEREF(fun_142),YPfalse,T86,ENVNUL);
  T85 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_143 = YPmet(FUNCODEREF(fun_143),CHKREF(lit_118),T85,ENVNUL);
  T90 = BOUNDP(Yast_linearizeYregister_allocateX);
  if (T90 != YPfalse) {
    T89 = CHKREF(Yast_linearizeYregister_allocateX);
  } else {
    T89 = YPfalse;
  }
  T88 = fun_143;
  T87 = CALL2(CHKREF(YPdefine_method),T89,T88);
  Yast_linearizeYregister_allocateX = T87;
  regsym(&Yast_linearizeYregister_allocateX,"ast-linearize","register-allocate!");
  lit_119 = YPPsym((P)"allocate-register");
  lit_120 = YPPsym((P)"val?");
  T91 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_48),CHKREF(lit_120)),YPPlist(3,CHKREF(YastYLcomputed_programG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_144 = YPmet(FUNCODEREF(fun_144),CHKREF(lit_119),T91,ENVNUL);
  T95 = BOUNDP(Yast_linearizeYallocate_register);
  if (T95 != YPfalse) {
    T94 = CHKREF(Yast_linearizeYallocate_register);
  } else {
    T94 = YPfalse;
  }
  T93 = fun_144;
  T92 = CALL2(CHKREF(YPdefine_method),T94,T93);
  Yast_linearizeYallocate_register = T92;
  regsym(&Yast_linearizeYallocate_register,"ast-linearize","allocate-register");
  lit_121 = YPPsym((P)"collect-registers!");
  T96 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_48),CHKREF(lit_120)),YPPlist(3,CHKREF(YastYLcomputed_programG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_145 = YPmet(FUNCODEREF(fun_145),CHKREF(lit_121),T96,ENVNUL);
  T100 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T100 != YPfalse) {
    T99 = CHKREF(Yast_linearizeYcollect_registersX);
  } else {
    T99 = YPfalse;
  }
  T98 = fun_145;
  T97 = CALL2(CHKREF(YPdefine_method),T99,T98);
  Yast_linearizeYcollect_registersX = T97;
  regsym(&Yast_linearizeYcollect_registersX,"ast-linearize","collect-registers!");
  T102 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_146 = YPmet(FUNCODEREF(fun_loop_146),CHKREF(lit_17),T102,ENVNUL);
  T101 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_48),CHKREF(lit_120)),YPPlist(3,CHKREF(YastYLsequentialG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_147 = YPmet(FUNCODEREF(fun_147),CHKREF(lit_121),T101,ENVNUL);
  T106 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T106 != YPfalse) {
    T105 = CHKREF(Yast_linearizeYcollect_registersX);
  } else {
    T105 = YPfalse;
  }
  T104 = fun_147;
  T103 = CALL2(CHKREF(YPdefine_method),T105,T104);
  Yast_linearizeYcollect_registersX = T103;
  regsym(&Yast_linearizeYcollect_registersX,"ast-linearize","collect-registers!");
  T107 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_48),CHKREF(lit_120)),YPPlist(3,CHKREF(YastYLpassive_programG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_148 = YPmet(FUNCODEREF(fun_148),CHKREF(lit_121),T107,ENVNUL);
  T111 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T111 != YPfalse) {
    T110 = CHKREF(Yast_linearizeYcollect_registersX);
  } else {
    T110 = YPfalse;
  }
  T109 = fun_148;
  T108 = CALL2(CHKREF(YPdefine_method),T110,T109);
  Yast_linearizeYcollect_registersX = T108;
  regsym(&Yast_linearizeYcollect_registersX,"ast-linearize","collect-registers!");
  T113 = YPsig(YPPlist(1,CHKREF(lit_109)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_149 = YPmet(FUNCODEREF(fun_149),YPfalse,T113,ENVNUL);
  T112 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_48),CHKREF(lit_120)),YPPlist(3,CHKREF(Yast_linearizeYLtop_level_formG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_150 = YPmet(FUNCODEREF(fun_150),CHKREF(lit_121),T112,ENVNUL);
  T117 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T117 != YPfalse) {
    T116 = CHKREF(Yast_linearizeYcollect_registersX);
  } else {
    T116 = YPfalse;
  }
  T115 = fun_150;
  T114 = CALL2(CHKREF(YPdefine_method),T116,T115);
  Yast_linearizeYcollect_registersX = T114;
  regsym(&Yast_linearizeYcollect_registersX,"ast-linearize","collect-registers!");
  T118 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_48),CHKREF(lit_120)),YPPlist(3,CHKREF(Yast_linearizeYLflat_functionG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_151 = YPmet(FUNCODEREF(fun_151),CHKREF(lit_121),T118,ENVNUL);
  T122 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T122 != YPfalse) {
    T121 = CHKREF(Yast_linearizeYcollect_registersX);
  } else {
    T121 = YPfalse;
  }
  T120 = fun_151;
  T119 = CALL2(CHKREF(YPdefine_method),T121,T120);
  Yast_linearizeYcollect_registersX = T119;
  regsym(&Yast_linearizeYcollect_registersX,"ast-linearize","collect-registers!");
  T123 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_48),CHKREF(lit_120)),YPPlist(3,CHKREF(Yast_linearizeYLprimitive_definitionG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_152 = YPmet(FUNCODEREF(fun_152),CHKREF(lit_121),T123,ENVNUL);
  T127 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T127 != YPfalse) {
    T126 = CHKREF(Yast_linearizeYcollect_registersX);
  } else {
    T126 = YPfalse;
  }
  T125 = fun_152;
  T124 = CALL2(CHKREF(YPdefine_method),T126,T125);
  Yast_linearizeYcollect_registersX = T124;
  regsym(&Yast_linearizeYcollect_registersX,"ast-linearize","collect-registers!");
  T128 = YPfalse;
  return T128;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_runtime;
extern MODULE_INFO module_info_ast;
extern MODULE_INFO module_info_write;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {&module_info_macros},
  {&module_info_runtime},
  {&module_info_ast},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"%fb", &module_info_boot, "%fb"},
  {"init-ast", &module_info_ast, "init-ast"},
  {"dss", &module_info_boot, "dss"},
  {"logxor", &module_info_runtime, "logxor"},
  {"del-dups", &module_info_runtime, "del-dups"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"unless", &module_info_macros, "unless"},
  {"peek-char", &module_info_runtime, "peek-char"},
  {"$permanent-hash-state", &module_info_runtime, "$permanent-hash-state"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"binding-info", &module_info_ast, "binding-info"},
  {"<computed-program>", &module_info_ast, "<computed-program>"},
  {"/", &module_info_runtime, "/"},
  {"reduce+", &module_info_runtime, "reduce+"},
  {"<unwind-protect>", &module_info_ast, "<unwind-protect>"},
  {"from-below", &module_info_runtime, "from-below"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"fabs", &module_info_runtime, "fabs"},
  {"unwind-protect-protected-thunk", &module_info_ast, "unwind-protect-protected-thunk"},
  {"<compile-time>", &module_info_ast, "<compile-time>"},
  {"%ft", &module_info_boot, "%ft"},
  {"round/", &module_info_runtime, "round/"},
  {"locals-bindings", &module_info_ast, "locals-bindings"},
  {"module-name-to-relpath", &module_info_ast, "module-name-to-relpath"},
  {"binding-dynamic-extent?", &module_info_ast, "binding-dynamic-extent?"},
  {"%im", &module_info_boot, "%im"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"=", &module_info_runtime, "="},
  {"slot-init", &module_info_boot, "slot-init"},
  {"function-binding", &module_info_ast, "function-binding"},
  {"<arguments>", &module_info_ast, "<arguments>"},
  {"rev", &module_info_runtime, "rev"},
  {"export", &module_info_boot, "export"},
  {"pair", &module_info_macros, "pair"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"<ast-primitive>", &module_info_ast, "<ast-primitive>"},
  {"%f/", &module_info_boot, "%f/"},
  {"zero?", &module_info_runtime, "zero?"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"<traits>", &module_info_boot, "<traits>"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"<assocs>", &module_info_runtime, "<assocs>"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"fapply", &module_info_boot, "fapply"},
  {"var-name", &module_info_macros, "var-name"},
  {"map2", &module_info_runtime, "map2"},
  {"function-body-setter", &module_info_ast, "function-body-setter"},
  {"alternative-alternant", &module_info_ast, "alternative-alternant"},
  {"do3", &module_info_runtime, "do3"},
  {"module-name", &module_info_ast, "module-name"},
  {"if", &module_info_boot, "if"},
  {"reduce", &module_info_runtime, "reduce"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"ini-state", &module_info_runtime, "ini-state"},
  {"$proto-boot-module-name", &module_info_ast, "$proto-boot-module-name"},
  {"set-module-environments", &module_info_ast, "set-module-environments"},
  {"$proto-runtime-module-name", &module_info_ast, "$proto-runtime-module-name"},
  {"%i^", &module_info_boot, "%i^"},
  {"monitor-handler", &module_info_ast, "monitor-handler"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"assert", &module_info_macros, "assert"},
  {"port-index", &module_info_runtime, "port-index"},
  {"when", &module_info_macros, "when"},
  {"load-in", &module_info_ast, "load-in"},
  {"object<", &module_info_boot, "object<"},
  {"assignment-form", &module_info_ast, "assignment-form"},
  {"%i!", &module_info_boot, "%i!"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"t+", &module_info_runtime, "t+"},
  {"from", &module_info_runtime, "from"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"now-elt-setter", &module_info_runtime, "now-elt-setter"},
  {"popf", &module_info_macros, "popf"},
  {"compose", &module_info_runtime, "compose"},
  {"program-register-setter", &module_info_ast, "program-register-setter"},
  {"locals-body-setter", &module_info_ast, "locals-body-setter"},
  {"let", &module_info_boot, "let"},
  {"<bind-exit>", &module_info_ast, "<bind-exit>"},
  {"<sequential>", &module_info_ast, "<sequential>"},
  {"%f=", &module_info_boot, "%f="},
  {"%cb", &module_info_boot, "%cb"},
  {"signature-nary?-setter", &module_info_ast, "signature-nary?-setter"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"1st", &module_info_runtime, "1st"},
  {"<global-assignment>", &module_info_ast, "<global-assignment>"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"<", &module_info_runtime, "<"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"reference-called-function?-setter", &module_info_ast, "reference-called-function?-setter"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"<string-port>", &module_info_runtime, "<string-port>"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"%i*", &module_info_boot, "%i*"},
  {"fix-let-types", &module_info_ast, "fix-let-types"},
  {"as", &module_info_runtime, "as"},
  {"%snul", &module_info_boot, "%snul"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"env-object-name", &module_info_write, "env-object-name"},
  {"assqn", &module_info_runtime, "assqn"},
  {"%slen", &module_info_boot, "%slen"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"uppercase?", &module_info_runtime, "uppercase?"},
  {"logand", &module_info_runtime, "logand"},
  {"module-exports", &module_info_ast, "module-exports"},
  {"~=", &module_info_runtime, "~="},
  {"df", &module_info_boot, "df"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"str", &module_info_runtime, "str"},
  {"or", &module_info_macros, "or"},
  {"signature-specs", &module_info_ast, "signature-specs"},
  {"push", &module_info_runtime, "push"},
  {"sig", &module_info_runtime, "sig"},
  {"dv", &module_info_boot, "dv"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"ast-define-binding", &module_info_ast, "ast-define-binding"},
  {"<col>", &module_info_boot, "<col>"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"%lu", &module_info_boot, "%lu"},
  {"list-handlers", &module_info_runtime, "list-handlers"},
  {"fin-state?", &module_info_runtime, "fin-state?"},
  {"<fab-list>", &module_info_ast, "<fab-list>"},
  {"max", &module_info_runtime, "max"},
  {"assignment-binding", &module_info_ast, "assignment-binding"},
  {"signature-bindings-setter", &module_info_ast, "signature-bindings-setter"},
  {"function-value", &module_info_ast, "function-value"},
  {"ceiling/", &module_info_runtime, "ceiling/"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"cat", &module_info_macros, "cat"},
  {"open-input-file", &module_info_runtime, "open-input-file"},
  {"error", &module_info_boot, "error"},
  {"module-target-environment", &module_info_ast, "module-target-environment"},
  {"%do-runtime-bindings", &module_info_boot, "%do-runtime-bindings"},
  {"%cu", &module_info_boot, "%cu"},
  {"open-output-file", &module_info_runtime, "open-output-file"},
  {"probe-module", &module_info_ast, "probe-module"},
  {"<=", &module_info_runtime, "<="},
  {"%pair", &module_info_boot, "%pair"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"seq", &module_info_boot, "seq"},
  {"id-hash", &module_info_runtime, "id-hash"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"tup", &module_info_macros, "tup"},
  {"from-above", &module_info_runtime, "from-above"},
  {"%sb", &module_info_boot, "%sb"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"pushf", &module_info_macros, "pushf"},
  {"quote", &module_info_boot, "quote"},
  {"format", &module_info_runtime, "format"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"pick", &module_info_runtime, "pick"},
  {"pop-last!", &module_info_runtime, "pop-last!"},
  {"<runtime-assignment>", &module_info_ast, "<runtime-assignment>"},
  {"do-static-global-bindings", &module_info_ast, "do-static-global-bindings"},
  {"%it/", &module_info_boot, "%it/"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {">", &module_info_runtime, ">"},
  {"loc", &module_info_boot, "loc"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"call-with-input-file", &module_info_runtime, "call-with-input-file"},
  {"map-keyed", &module_info_runtime, "map-keyed"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"%i=", &module_info_boot, "%i="},
  {"function-bindings", &module_info_ast, "function-bindings"},
  {"floor", &module_info_runtime, "floor"},
  {"identity", &module_info_runtime, "identity"},
  {"dec", &module_info_macros, "dec"},
  {"%ib", &module_info_boot, "%ib"},
  {"nil", &module_info_boot, "nil"},
  {"%c<", &module_info_boot, "%c<"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"newline", &module_info_runtime, "newline"},
  {"address-of", &module_info_runtime, "address-of"},
  {"install-initial-bindings", &module_info_ast, "install-initial-bindings"},
  {"monitor-main-thunk", &module_info_ast, "monitor-main-thunk"},
  {"<ast-method>", &module_info_ast, "<ast-method>"},
  {"<string-output-port>", &module_info_runtime, "<string-output-port>"},
  {"type-error", &module_info_boot, "type-error"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"case-insensitive-string-equal", &module_info_runtime, "case-insensitive-string-equal"},
  {"odd?", &module_info_runtime, "odd?"},
  {"call-with-string-input-port", &module_info_runtime, "call-with-string-input-port"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"signature-value-setter", &module_info_ast, "signature-value-setter"},
  {"from-by", &module_info_runtime, "from-by"},
  {"reference-binding", &module_info_ast, "reference-binding"},
  {"cat2", &module_info_runtime, "cat2"},
  {"abs", &module_info_runtime, "abs"},
  {"assocq", &module_info_runtime, "assocq"},
  {"tail", &module_info_boot, "tail"},
  {"do-named-static-global-bindings", &module_info_ast, "do-named-static-global-bindings"},
  {"binding-global-box-setter", &module_info_ast, "binding-global-box-setter"},
  {"char->ascii", &module_info_runtime, "char->ascii"},
  {"%fu", &module_info_boot, "%fu"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"report-undefined-global-bindings", &module_info_ast, "report-undefined-global-bindings"},
  {"environment-uses-modules", &module_info_ast, "environment-uses-modules"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"pop", &module_info_runtime, "pop"},
  {"alphabetic?", &module_info_runtime, "alphabetic?"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"str-to-num", &module_info_runtime, "str-to-num"},
  {"collected", &module_info_macros, "collected"},
  {"lognot", &module_info_runtime, "lognot"},
  {"%f<", &module_info_boot, "%f<"},
  {"table-protocol", &module_info_runtime, "table-protocol"},
  {"compile-time-program", &module_info_ast, "compile-time-program"},
  {"list", &module_info_runtime, "list"},
  {"round", &module_info_runtime, "round"},
  {"*", &module_info_runtime, "*"},
  {"fab", &module_info_runtime, "fab"},
  {"elt", &module_info_runtime, "elt"},
  {"modulo", &module_info_runtime, "modulo"},
  {"num-to-str", &module_info_runtime, "num-to-str"},
  {"signature-bindings", &module_info_ast, "signature-bindings"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"current-gc-state", &module_info_runtime, "current-gc-state"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"bound?-reference", &module_info_ast, "bound?-reference"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"now-key", &module_info_runtime, "now-key"},
  {"as-uppercase", &module_info_runtime, "as-uppercase"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"next-method", &module_info_macros, "next-method"},
  {"push-last!", &module_info_runtime, "push-last!"},
  {"curry", &module_info_runtime, "curry"},
  {"application-arguments", &module_info_ast, "application-arguments"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"%f*", &module_info_boot, "%f*"},
  {"*print-base*", &module_info_runtime, "*print-base*"},
  {"<locals>", &module_info_ast, "<locals>"},
  {"dp", &module_info_boot, "dp"},
  {"ceiling", &module_info_runtime, "ceiling"},
  {"del", &module_info_runtime, "del"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"find-environment-module", &module_info_ast, "find-environment-module"},
  {"dm", &module_info_boot, "dm"},
  {"<incongruent-method-error>", &module_info_runtime, "<incongruent-method-error>"},
  {"%iu", &module_info_boot, "%iu"},
  {"<module-binding>", &module_info_ast, "<module-binding>"},
  {"binding-mutable?", &module_info_ast, "binding-mutable?"},
  {"fix-let-arguments-setter", &module_info_ast, "fix-let-arguments-setter"},
  {"last", &module_info_runtime, "last"},
  {"<tab>", &module_info_runtime, "<tab>"},
  {"module-loader-module-type", &module_info_ast, "module-loader-module-type"},
  {"sub-setter", &module_info_runtime, "sub-setter"},
  {"table-growth-factor", &module_info_runtime, "table-growth-factor"},
  {"nul", &module_info_boot, "nul"},
  {"<step>", &module_info_runtime, "<step>"},
  {"reference-called-function?", &module_info_ast, "reference-called-function?"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"write-string", &module_info_runtime, "write-string"},
  {"<port>", &module_info_runtime, "<port>"},
  {"<fix-let>", &module_info_ast, "<fix-let>"},
  {"<program>", &module_info_ast, "<program>"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"<log>", &module_info_boot, "<log>"},
  {"mif", &module_info_boot, "mif"},
  {"<module>", &module_info_ast, "<module>"},
  {"%isa", &module_info_boot, "%isa"},
  {"dc", &module_info_boot, "dc"},
  {"dg", &module_info_boot, "dg"},
  {"<range>", &module_info_runtime, "<range>"},
  {"len", &module_info_runtime, "len"},
  {"read-char", &module_info_runtime, "read-char"},
  {"do", &module_info_runtime, "do"},
  {"empty?", &module_info_macros, "empty?"},
  {"<application>", &module_info_ast, "<application>"},
  {"buf", &module_info_runtime, "buf"},
  {"inc", &module_info_macros, "inc"},
  {"isa?", &module_info_boot, "isa?"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"apply", &module_info_boot, "apply"},
  {"lowercase?", &module_info_runtime, "lowercase?"},
  {"<bound?>", &module_info_ast, "<bound?>"},
  {"<list>", &module_info_runtime, "<list>"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"describe-handler", &module_info_runtime, "describe-handler"},
  {"binding-native-to?", &module_info_ast, "binding-native-to?"},
  {"<monitor>", &module_info_ast, "<monitor>"},
  {"flo-bits", &module_info_runtime, "flo-bits"},
  {"assoc", &module_info_runtime, "assoc"},
  {"case-insensitive-string-hash", &module_info_runtime, "case-insensitive-string-hash"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"binding-module-name", &module_info_ast, "binding-module-name"},
  {"now-elt", &module_info_runtime, "now-elt"},
  {"-", &module_info_runtime, "-"},
  {"del-key", &module_info_runtime, "del-key"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"isa", &module_info_boot, "isa"},
  {"fix-let-bindings-setter", &module_info_ast, "fix-let-bindings-setter"},
  {"neg?", &module_info_runtime, "neg?"},
  {"<ast-primitive-definition>", &module_info_ast, "<ast-primitive-definition>"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"locative-value", &module_info_runtime, "locative-value"},
  {"fun", &module_info_boot, "fun"},
  {"monitor-type", &module_info_ast, "monitor-type"},
  {"<global-reference>", &module_info_ast, "<global-reference>"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"fab-p2c-module", &module_info_ast, "fab-p2c-module"},
  {"<ast-macro-definition>", &module_info_ast, "<ast-macro-definition>"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"read", &module_info_runtime, "read"},
  {"remainder", &module_info_runtime, "remainder"},
  {"alternative-condition", &module_info_ast, "alternative-condition"},
  {"fix-let-body", &module_info_ast, "fix-let-body"},
  {"==", &module_info_macros, "=="},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"to-str", &module_info_runtime, "to-str"},
  {"eof-object?", &module_info_runtime, "eof-object?"},
  {"signature-names", &module_info_ast, "signature-names"},
  {"free-implemented-foreign-bindings", &module_info_ast, "free-implemented-foreign-bindings"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"monitor-info", &module_info_ast, "monitor-info"},
  {"binding-dynamic-extent?-setter", &module_info_ast, "binding-dynamic-extent?-setter"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"write-char", &module_info_runtime, "write-char"},
  {"fix-let-body-setter", &module_info_ast, "fix-let-body-setter"},
  {"application-function", &module_info_ast, "application-function"},
  {"elt-setter", &module_info_runtime, "elt-setter"},
  {"assq", &module_info_runtime, "assq"},
  {"numeric?", &module_info_runtime, "numeric?"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"port-contents", &module_info_runtime, "port-contents"},
  {"binding-locative", &module_info_ast, "binding-locative"},
  {"<alternative>", &module_info_ast, "<alternative>"},
  {"signature-specs-setter", &module_info_ast, "signature-specs-setter"},
  {"%i<", &module_info_boot, "%i<"},
  {"function-debug-name-setter", &module_info_ast, "function-debug-name-setter"},
  {"as-lowercase", &module_info_runtime, "as-lowercase"},
  {"not", &module_info_boot, "not"},
  {"%i+", &module_info_boot, "%i+"},
  {"try", &module_info_boot, "try"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"application-known?", &module_info_ast, "application-known?"},
  {"table-shrink-threshold", &module_info_runtime, "table-shrink-threshold"},
  {"from-to-by", &module_info_runtime, "from-to-by"},
  {"map", &module_info_macros, "map"},
  {"sequentialize", &module_info_ast, "sequentialize"},
  {"locals-functions", &module_info_ast, "locals-functions"},
  {"close-output-port", &module_info_runtime, "close-output-port"},
  {"function-body", &module_info_ast, "function-body"},
  {"fix-let-types-setter", &module_info_ast, "fix-let-types-setter"},
  {"2nd", &module_info_runtime, "2nd"},
  {"min", &module_info_runtime, "min"},
  {"locals-body", &module_info_ast, "locals-body"},
  {"<any>", &module_info_boot, "<any>"},
  {"nxt-state", &module_info_runtime, "nxt-state"},
  {"binding-name", &module_info_ast, "binding-name"},
  {"<definition>", &module_info_ast, "<definition>"},
  {"fin", &module_info_boot, "fin"},
  {"build-condition-for-handler-interactively", &module_info_runtime, "build-condition-for-handler-interactively"},
  {"truncate", &module_info_runtime, "truncate"},
  {"len-setter", &module_info_runtime, "len-setter"},
  {"def-programs", &module_info_ast, "def-programs"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"char-ready?", &module_info_runtime, "char-ready?"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"init-environment-for-eval", &module_info_ast, "init-environment-for-eval"},
  {"ds", &module_info_boot, "ds"},
  {"<predefined-application>", &module_info_ast, "<predefined-application>"},
  {"nul?", &module_info_runtime, "nul?"},
  {"floor/", &module_info_runtime, "floor/"},
  {"<error>", &module_info_runtime, "<error>"},
  {"function-nary?", &module_info_ast, "function-nary?"},
  {"signature-names-setter", &module_info_ast, "signature-names-setter"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"do2", &module_info_runtime, "do2"},
  {"reference-frame-offset", &module_info_ast, "reference-frame-offset"},
  {"<ast-generic>", &module_info_ast, "<ast-generic>"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"+", &module_info_runtime, "+"},
  {"function-signature-setter", &module_info_ast, "function-signature-setter"},
  {"select", &module_info_macros, "select"},
  {"<int>", &module_info_boot, "<int>"},
  {"%vec", &module_info_boot, "%vec"},
  {"pos", &module_info_runtime, "pos"},
  {"cat!", &module_info_runtime, "cat!"},
  {"keys", &module_info_runtime, "keys"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"<constant>", &module_info_ast, "<constant>"},
  {"var-type", &module_info_macros, "var-type"},
  {"load-module", &module_info_ast, "load-module"},
  {"pos?", &module_info_runtime, "pos?"},
  {"binding-global-box", &module_info_ast, "binding-global-box"},
  {"binding-value", &module_info_ast, "binding-value"},
  {"function-signature", &module_info_ast, "function-signature"},
  {"application-known?-setter", &module_info_ast, "application-known?-setter"},
  {"<num>", &module_info_boot, "<num>"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"%su", &module_info_boot, "%su"},
  {"signature-nary?", &module_info_ast, "signature-nary?"},
  {"dlet", &module_info_macros, "dlet"},
  {"program-register", &module_info_ast, "program-register"},
  {"<restart>", &module_info_runtime, "<restart>"},
  {"global-box-value", &module_info_ast, "global-box-value"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"binding-value-setter", &module_info_ast, "binding-value-setter"},
  {"<str>", &module_info_boot, "<str>"},
  {"module-binding", &module_info_ast, "module-binding"},
  {"case", &module_info_macros, "case"},
  {"<file-port>", &module_info_runtime, "<file-port>"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"%with-monitor", &module_info_runtime, "%with-monitor"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"unwind-protect-cleanup-thunk", &module_info_ast, "unwind-protect-cleanup-thunk"},
  {"monitor-test", &module_info_ast, "monitor-test"},
  {"assignment-reference", &module_info_ast, "assignment-reference"},
  {"application-binding", &module_info_ast, "application-binding"},
  {"application-tail?", &module_info_ast, "application-tail?"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"%bb", &module_info_boot, "%bb"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"assoc-value", &module_info_runtime, "assoc-value"},
  {"<regular-application>", &module_info_ast, "<regular-application>"},
  {"gensym", &module_info_macros, "gensym"},
  {"ash", &module_info_runtime, "ash"},
  {"to-digit", &module_info_runtime, "to-digit"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"object-direct-parents", &module_info_boot, "object-direct-parents"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"<file-input-port>", &module_info_runtime, "<file-input-port>"},
  {"<module-loader>", &module_info_ast, "<module-loader>"},
  {"ascii-whitespaces", &module_info_runtime, "ascii-whitespaces"},
  {"vec", &module_info_runtime, "vec"},
  {"module-syntax-environment", &module_info_ast, "module-syntax-environment"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"truncate/", &module_info_runtime, "truncate/"},
  {"false-or", &module_info_runtime, "false-or"},
  {"remove-modules-by-name!", &module_info_ast, "remove-modules-by-name!"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"bind-exit-main-fun", &module_info_ast, "bind-exit-main-fun"},
  {"function-debug-name", &module_info_ast, "function-debug-name"},
  {"always", &module_info_runtime, "always"},
  {"<static-global-environment>", &module_info_ast, "<static-global-environment>"},
  {"%raw", &module_info_boot, "%raw"},
  {"def-list", &module_info_ast, "def-list"},
  {"sub", &module_info_runtime, "sub"},
  {"%f-", &module_info_boot, "%f-"},
  {"%f+", &module_info_boot, "%f+"},
  {"<local-reference>", &module_info_ast, "<local-reference>"},
  {"<real-reference>", &module_info_ast, "<real-reference>"},
  {"table-growth-threshold", &module_info_runtime, "table-growth-threshold"},
  {"logbit?", &module_info_runtime, "logbit?"},
  {"fix-let-arguments", &module_info_ast, "fix-let-arguments"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"lsh", &module_info_runtime, "lsh"},
  {"use", &module_info_boot, "use"},
  {"%i&", &module_info_boot, "%i&"},
  {"binding-type", &module_info_ast, "binding-type"},
  {"mem?", &module_info_runtime, "mem?"},
  {"objectify-quotation", &module_info_ast, "objectify-quotation"},
  {"binding-kind", &module_info_ast, "binding-kind"},
  {"<passive-program>", &module_info_ast, "<passive-program>"},
  {"find-key", &module_info_runtime, "find-key"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"in", &module_info_runtime, "in"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"<local-assignment>", &module_info_ast, "<local-assignment>"},
  {"fill", &module_info_runtime, "fill"},
  {"ct", &module_info_boot, "ct"},
  {"alter", &module_info_runtime, "alter"},
  {"out", &module_info_runtime, "out"},
  {"<ast-signature>", &module_info_ast, "<ast-signature>"},
  {"%iv", &module_info_boot, "%iv"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"from-below-by", &module_info_runtime, "from-below-by"},
  {"<output-port>", &module_info_runtime, "<output-port>"},
  {"and", &module_info_macros, "and"},
  {"binding-type-setter", &module_info_ast, "binding-type-setter"},
  {"locals-functions-setter", &module_info_ast, "locals-functions-setter"},
  {"reference-frame-number", &module_info_ast, "reference-frame-number"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"add", &module_info_runtime, "add"},
  {"%selt", &module_info_boot, "%selt"},
  {"call-with-string-output-port", &module_info_runtime, "call-with-string-output-port"},
  {"<buf>", &module_info_runtime, "<buf>"},
  {"<input-port>", &module_info_runtime, "<input-port>"},
  {"for", &module_info_macros, "for"},
  {"lst", &module_info_boot, "lst"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"object-direct-slots", &module_info_boot, "object-direct-slots"},
  {"~==", &module_info_runtime, "~=="},
  {"<programs>", &module_info_ast, "<programs>"},
  {"alternative-consequent", &module_info_ast, "alternative-consequent"},
  {"empty", &module_info_runtime, "empty"},
  {"lab", &module_info_boot, "lab"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"ast-evaluate", &module_info_ast, "ast-evaluate"},
  {"do-module-loader-modules", &module_info_ast, "do-module-loader-modules"},
  {"<met>", &module_info_boot, "<met>"},
  {"all?", &module_info_runtime, "all?"},
  {"binding-info-setter", &module_info_ast, "binding-info-setter"},
  {"t<", &module_info_runtime, "t<"},
  {"logior", &module_info_runtime, "logior"},
  {"locals-bindings-setter", &module_info_ast, "locals-bindings-setter"},
  {"%slot", &module_info_boot, "%slot"},
  {"<string-input-port>", &module_info_runtime, "<string-input-port>"},
  {"%i?", &module_info_boot, "%i?"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"head", &module_info_boot, "head"},
  {"call-with-output-file", &module_info_runtime, "call-with-output-file"},
  {"default", &module_info_runtime, "default"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"slot", &module_info_boot, "slot"},
  {"signature-value", &module_info_ast, "signature-value"},
  {"any?", &module_info_runtime, "any?"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"<binding>", &module_info_ast, "<binding>"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"format-to-string", &module_info_runtime, "format-to-string"},
  {"even?", &module_info_runtime, "even?"},
  {">=", &module_info_runtime, ">="},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"%velt", &module_info_boot, "%velt"},
  {"<map>", &module_info_runtime, "<map>"},
  {"collect", &module_info_macros, "collect"},
  {"%str", &module_info_boot, "%str"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"build-condition-interactively", &module_info_runtime, "build-condition-interactively"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"add!", &module_info_runtime, "add!"},
  {"<file-output-port>", &module_info_runtime, "<file-output-port>"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"first-then", &module_info_runtime, "first-then"},
  {"constant-value", &module_info_ast, "constant-value"},
  {"assocs-test", &module_info_runtime, "assocs-test"},
  {"neg", &module_info_runtime, "neg"},
  {"<reference>", &module_info_ast, "<reference>"},
  {"del-keys", &module_info_runtime, "del-keys"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"rep", &module_info_boot, "rep"},
  {"<runtime-reference>", &module_info_ast, "<runtime-reference>"},
  {"copy-state", &module_info_runtime, "copy-state"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"runtime-environment", &module_info_ast, "runtime-environment"},
  {"global-box-value-setter", &module_info_ast, "global-box-value-setter"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"<ast-function>", &module_info_ast, "<ast-function>"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"<raw-constant>", &module_info_ast, "<raw-constant>"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"close-input-port", &module_info_runtime, "close-input-port"},
  {"eof-object", &module_info_runtime, "eof-object"},
  {"force-output", &module_info_runtime, "force-output"},
  {"app-args", &module_info_runtime, "app-args"},
  {"fix-let-bindings", &module_info_ast, "fix-let-bindings"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"%i-", &module_info_boot, "%i-"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"objectify", &module_info_ast, "objectify"},
  {"collecting", &module_info_macros, "collecting"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"<local-binding>", &module_info_ast, "<local-binding>"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"bound?", &module_info_boot, "bound?"},
  {"from-above-by", &module_info_runtime, "from-above-by"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"ascii-limit", &module_info_runtime, "ascii-limit"},
  {"%call-next-method", &module_info_boot, "%call-next-method"},
  {"rev!", &module_info_runtime, "rev!"},
  {"<global-box>", &module_info_ast, "<global-box>"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"set", &module_info_boot, "set"},
  {"t=", &module_info_runtime, "t="},
  {"%c=", &module_info_boot, "%c="},
  {"invoke-handler-interactively", &module_info_runtime, "invoke-handler-interactively"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"from-to", &module_info_runtime, "from-to"},
  {"3rd", &module_info_runtime, "3rd"},
  {"<str-tab>", &module_info_runtime, "<str-tab>"},
  {"do-keyed", &module_info_runtime, "do-keyed"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"<renamed-local-binding>", &Yast_linearizeYLrenamed_local_bindingG},
  {"form-definitions-setter", &Yast_linearizeYform_definitions_setter},
  {"adjoin-temporary-variables!", &Yast_linearizeYadjoin_temporary_variablesX},
  {"analyze-call-references", &Yast_linearizeYanalyze_call_references},
  {"do-call-upgrades!", &Yast_linearizeYdo_call_upgradesX},
  {"$free-environment-empty", &Yast_linearizeYDfree_environment_empty},
  {"function-self-recursive?-setter", &Yast_linearizeYfunction_self_recursiveQ_setter},
  {"unconstrained-type?", &Yast_linearizeYunconstrained_typeQ},
  {"sexp->object", &Yast_linearizeYsexp_Gobject},
  {"function-temporaries-setter", &Yast_linearizeYfunction_temporaries_setter},
  {"collect-temporaries!", &Yast_linearizeYcollect_temporariesX},
  {"<function-definition>", &Yast_linearizeYLfunction_definitionG},
  {"function-temporaries", &Yast_linearizeYfunction_temporaries},
  {"do-do-dynamic-extent!", &Yast_linearizeYdo_do_dynamic_extentX},
  {"boxify-mutable-bindings", &Yast_linearizeYboxify_mutable_bindings},
  {"reference-offset-setter", &Yast_linearizeYreference_offset_setter},
  {"form-program", &Yast_linearizeYform_program},
  {"<free-reference>", &Yast_linearizeYLfree_referenceG},
  {"program-definitions-setter", &Yast_linearizeYprogram_definitions_setter},
  {"function-registers-setter", &Yast_linearizeYfunction_registers_setter},
  {"form-program-setter", &Yast_linearizeYform_program_setter},
  {"<top-level-form>", &Yast_linearizeYLtop_level_formG},
  {"box-form", &Yast_linearizeYbox_form},
  {"lift!", &Yast_linearizeYliftX},
  {"closure-creation-bindings", &Yast_linearizeYclosure_creation_bindings},
  {"closure-creation-free", &Yast_linearizeYclosure_creation_free},
  {"<primitive-definition>", &Yast_linearizeYLprimitive_definitionG},
  {"extract!", &Yast_linearizeYextractX},
  {"box-reference", &Yast_linearizeYbox_reference},
  {"<closure-creation>", &Yast_linearizeYLclosure_creationG},
  {"reference-self?", &Yast_linearizeYreference_selfQ},
  {"binding-index-setter", &Yast_linearizeYbinding_index_setter},
  {"closure-creation-index-setter", &Yast_linearizeYclosure_creation_index_setter},
  {"function-free-setter", &Yast_linearizeYfunction_free_setter},
  {"allocate-register", &Yast_linearizeYallocate_register},
  {"lift-procedures!", &Yast_linearizeYlift_proceduresX},
  {"*renaming-bindings-counter*", &Yast_linearizeYTrenaming_bindings_counterT},
  {"closure-creation-free-setter", &Yast_linearizeYclosure_creation_free_setter},
  {"update-walk!", &Yast_linearizeYupdate_walkX},
  {"extract-things!", &Yast_linearizeYextract_thingsX},
  {"<box-write>", &Yast_linearizeYLbox_writeG},
  {"do-do-call-references!", &Yast_linearizeYdo_do_call_referencesX},
  {"program-quotations-setter", &Yast_linearizeYprogram_quotations_setter},
  {"function-registers", &Yast_linearizeYfunction_registers},
  {"<box-read>", &Yast_linearizeYLbox_readG},
  {"<free-environment>", &Yast_linearizeYLfree_environmentG},
  {"---main-1---", NULL},
  {"closure-creation-index", &Yast_linearizeYclosure_creation_index},
  {"reference-offset", &Yast_linearizeYreference_offset},
  {"closure-creation-bindings-setter", &Yast_linearizeYclosure_creation_bindings_setter},
  {"analyze-dynamic-extent", &Yast_linearizeYanalyze_dynamic_extent},
  {"program-quotations", &Yast_linearizeYprogram_quotations},
  {"flatten-seqs", &Yast_linearizeYflatten_seqs},
  {"form-definitions", &Yast_linearizeYform_definitions},
  {"register-allocate!", &Yast_linearizeYregister_allocateX},
  {"adjoin-definition!", &Yast_linearizeYadjoin_definitionX},
  {"program-form", &Yast_linearizeYprogram_form},
  {"adjoin-free-binding!", &Yast_linearizeYadjoin_free_bindingX},
  {"function-self-recursive?", &Yast_linearizeYfunction_self_recursiveQ},
  {"program-definitions", &Yast_linearizeYprogram_definitions},
  {"form-quotations", &Yast_linearizeYform_quotations},
  {"function-free", &Yast_linearizeYfunction_free},
  {"do-call-references!", &Yast_linearizeYdo_call_referencesX},
  {"new-renamed-binding", &Yast_linearizeYnew_renamed_binding},
  {"box-form-setter", &Yast_linearizeYbox_form_setter},
  {"<box-creation>", &Yast_linearizeYLbox_creationG},
  {"---main-2---", NULL},
  {"reference-self?-setter", &Yast_linearizeYreference_selfQ_setter},
  {"<flattened-program>", &Yast_linearizeYLflattened_programG},
  {"binding-index", &Yast_linearizeYbinding_index},
  {"<flat-function>", &Yast_linearizeYLflat_functionG},
  {"free-environment", &Yast_linearizeYfree_environment},
  {"function-index-setter", &Yast_linearizeYfunction_index_setter},
  {"analyze-calls", &Yast_linearizeYanalyze_calls},
  {"---main-0---", NULL},
  {"split-program", &Yast_linearizeYsplit_program},
  {"function-index", &Yast_linearizeYfunction_index},
  {"as-top-level-forms", &Yast_linearizeYas_top_level_forms},
  {"insert-box!", &Yast_linearizeYinsert_boxX},
  {"box-reference-setter", &Yast_linearizeYbox_reference_setter},
  {"closurize-main!", &Yast_linearizeYclosurize_mainX},
  {"form-quotations-setter", &Yast_linearizeYform_quotations_setter},
  {"collect-registers!", &Yast_linearizeYcollect_registersX},
  {"program-form-setter", &Yast_linearizeYprogram_form_setter},
  {"do-do-call-upgrades!", &Yast_linearizeYdo_do_call_upgradesX},
  {"do-dynamic-extent!", &Yast_linearizeYdo_dynamic_extentX},
  {"gather-temporaries!", &Yast_linearizeYgather_temporariesX},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<renamed-local-binding>", "<renamed-local-binding>"},
  {"<box-read>", "<box-read>"},
  {"function-self-recursive?-setter", "function-self-recursive?-setter"},
  {"unconstrained-type?", "unconstrained-type?"},
  {"sexp->object", "sexp->object"},
  {"function-temporaries", "function-temporaries"},
  {"form-program", "form-program"},
  {"box-form", "box-form"},
  {"lift!", "lift!"},
  {"closure-creation-free", "closure-creation-free"},
  {"<primitive-definition>", "<primitive-definition>"},
  {"box-reference", "box-reference"},
  {"reference-self?", "reference-self?"},
  {"extract-things!", "extract-things!"},
  {"<box-write>", "<box-write>"},
  {"function-registers", "function-registers"},
  {"<free-environment>", "<free-environment>"},
  {"closure-creation-index", "closure-creation-index"},
  {"reference-offset", "reference-offset"},
  {"analyze-dynamic-extent", "analyze-dynamic-extent"},
  {"program-quotations", "program-quotations"},
  {"form-definitions", "form-definitions"},
  {"register-allocate!", "register-allocate!"},
  {"program-form", "program-form"},
  {"function-self-recursive?", "function-self-recursive?"},
  {"program-definitions", "program-definitions"},
  {"form-quotations", "form-quotations"},
  {"<closure-creation>", "<closure-creation>"},
  {"<free-reference>", "<free-reference>"},
  {"<top-level-form>", "<top-level-form>"},
  {"<box-creation>", "<box-creation>"},
  {"binding-index", "binding-index"},
  {"<flat-function>", "<flat-function>"},
  {"function-index", "function-index"},
  {"closurize-main!", "closurize-main!"},
  {"analyze-calls", "analyze-calls"},
  {"gather-temporaries!", "gather-temporaries!"},
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
