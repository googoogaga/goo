/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: top */

EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YastYinit_environment_for_eval,"ast","init-environment-for-eval");
EXT(YastYbinding_value_setter,"ast","binding-value-setter");
EXT(YastYfunction_body_setter,"ast","function-body-setter");
EXT(YsyntaxYsexpr_variable_name,"syntax","sexpr-variable-name");
EXT(YsyntaxYsexpr_make_getter,"syntax","sexpr-make-getter");
EXT(YastYcompile_time_program,"ast","compile-time-program");
EXT(YsyntaxYsexpr_forward_primitiveQ,"syntax","sexpr-forward-primitive?");
EXT(YastYmonitor_info,"ast","monitor-info");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YastYLdefinitionG,"ast","<definition>");
DEF(YtopYtop_in,"top","top-in");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(YLlstG,"boot","<lst>");
EXT(YLsigG,"boot","<sig>");
EXT(YastYsignature_naryQ,"ast","signature-nary?");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
EXT(YsyntaxYsexpr_unwind_protect_cleanup_forms,"syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YastYLcomputed_programG,"ast","<computed-program>");
EXT(YruntimeYassq,"runtime","assq");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YruntimeYE,"runtime","=");
EXT(Yslot_init,"boot","slot-init");
EXT(YastYassignment_binding,"ast","assignment-binding");
EXT(YsyntaxYDsexpr_set_tag,"syntax","$sexpr-set-tag");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YastYmodule_target_environment,"ast","module-target-environment");
EXT(YmacrosYmap,"macros","map");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YsyntaxYsexpr_method_signature,"syntax","sexpr-method-signature");
EXT(YastYLast_primitiveG,"ast","<ast-primitive>");
EXT(YastYLmonitorG,"ast","<monitor>");
EXT(YastYfunction_debug_name_setter,"ast","function-debug-name-setter");
EXT(YastYboundQ_reference,"ast","bound?-reference");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(YsyntaxYsexpr_expand_backquote,"syntax","sexpr-expand-backquote");
EXT(Yfapply,"boot","fapply");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YastYmodule_exports,"ast","module-exports");
EXT(YLvecG,"boot","<vec>");
EXT(YsyntaxYsexpr_syntax_definition_value,"syntax","sexpr-syntax-definition-value");
EXT(YsyntaxYsexpr_loc_bound_signatures,"syntax","sexpr-loc-bound-signatures");
EXT(YastYlocals_functions_setter,"ast","locals-functions-setter");
EXT(YsyntaxYsexpr_assignment_value,"syntax","sexpr-assignment-value");
EXT(YprotoSsystemYTc_extensionT,"proto/system","*c-extension*");
EXT(YLintG,"boot","<int>");
EXT(YastYalternative_condition,"ast","alternative-condition");
EXT(YLlogG,"boot","<log>");
EXT(YruntimeYdo2,"runtime","do2");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(YsyntaxYDsexpr_define_generic_tag,"syntax","$sexpr-define-generic-tag");
EXT(YastYlocals_functions,"ast","locals-functions");
EXT(YastYLprogramG,"ast","<program>");
EXT(YastYapplication_binding,"ast","application-binding");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YastYsignature_value_setter,"ast","signature-value-setter");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YruntimeYround,"runtime","round");
EXT(YobjectL,"boot","object<");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YsyntaxYsexpr_isa_init_values,"syntax","sexpr-isa-init-values");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
EXT(YruntimeYtype_or,"runtime","type-or");
EXT(YsyntaxYDsexpr_slot_tag,"syntax","$sexpr-slot-tag");
EXT(YastYprobe_module,"ast","probe-module");
EXT(YsyntaxYDsexpr_monitor_tag,"syntax","$sexpr-monitor-tag");
EXT(YastYLruntime_referenceG,"ast","<runtime-reference>");
EXT(YruntimeYto_digit,"runtime","to-digit");
EXT(YprotoSsystemYexe_filename,"proto/system","exe-filename");
EXT(YastYfunction_naryQ,"ast","function-nary?");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
EXT(YsyntaxYsexpr_sequence_Gbegin,"syntax","sexpr-sequence->begin");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YsyntaxYsexpr_assignment_variable,"syntax","sexpr-assignment-variable");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(Yfun_name,"boot","fun-name");
EXT(YastYLcompile_timeG,"ast","<compile-time>");
EXT(YruntimeYL,"runtime","<");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(Yfab_sym,"boot","fab-sym");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YsyntaxYsexpr_isa_slot_inits,"syntax","sexpr-isa-slot-inits");
EXT(YruntimeYcopy_state,"runtime","copy-state");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YruntimeYceiling,"runtime","ceiling");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YastYalternative_alternant,"ast","alternative-alternant");
EXT(YruntimeYPwith_monitor,"runtime","%with-monitor");
EXT(YsyntaxYsexpr_block_body,"syntax","sexpr-block-body");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YsyntaxYDsexpr_macro_expand_tag,"syntax","$sexpr-macro-expand-tag");
EXT(YruntimeYkeys,"runtime","keys");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(YsyntaxYsexpr_slot_init,"syntax","sexpr-slot-init");
DEF(YtopYparse_in,"top","parse-in");
EXT(YastYmodule_binding,"ast","module-binding");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YastYLraw_constantG,"ast","<raw-constant>");
EXT(YLcolG,"boot","<col>");
EXT(YprotoSsystemYfile_type,"proto/system","file-type");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YastYbinding_type_setter,"ast","binding-type-setter");
EXT(YastYfix_let_body_setter,"ast","fix-let-body-setter");
EXT(YPsymbols,"boot","%symbols");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YsyntaxYDsexpr_begin_tag,"syntax","$sexpr-begin-tag");
EXT(YastYLalternativeG,"ast","<alternative>");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(YastYast_evaluate,"ast","ast-evaluate");
EXT(YastYlocals_bindings,"ast","locals-bindings");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(YprotoSsystemYobj_filename,"proto/system","obj-filename");
EXT(Yerror,"boot","error");
EXT(YwriteYenv_object_name,"write","env-object-name");
EXT(YsyntaxYsexpr_syntax_definition_variable,"syntax","sexpr-syntax-definition-variable");
EXT(YmacrosYpair,"macros","pair");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(YsyntaxYDsexpr_bind_exit_tag,"syntax","$sexpr-bind-exit-tag");
EXT(Ysig_value,"boot","sig-value");
EXT(YmacrosYtup,"macros","tup");
EXT(YastYapplication_function,"ast","application-function");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YruntimeYash,"runtime","ash");
EXT(YastYset_module_environments,"ast","set-module-environments");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(YruntimeYassocq,"runtime","assocq");
EXT(YruntimeYLportG,"runtime","<port>");
DEF(YtopYbacktrace,"top","backtrace");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YastYsignature_naryQ_setter,"ast","signature-nary?-setter");
EXT(YruntimeYG,"runtime",">");
EXT(YastYlocals_bindings_setter,"ast","locals-bindings-setter");
EXT(YruntimeYGE,"runtime",">=");
EXT(YLmetG,"boot","<met>");
EXT(Yslot_owner,"boot","slot-owner");
EXT(YruntimeYTprint_baseT,"runtime","*print-base*");
EXT(YruntimeYsub,"runtime","sub");
EXT(YPvnul,"boot","%vnul");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YastYprogram_register_setter,"ast","program-register-setter");
EXT(YLoptsG,"boot","<opts>");
EXT(YastYLsequentialG,"ast","<sequential>");
EXT(YsyntaxYsexpr_function_definition_variable,"syntax","sexpr-function-definition-variable");
EXT(YwriteYdisplay,"write","display");
EXT(YruntimeYfrom_by,"runtime","from-by");
EXT(YsyntaxYsexpr_method_body,"syntax","sexpr-method-body");
EXT(YsyntaxYDsexpr_syntax_if_tag,"syntax","$sexpr-syntax-if-tag");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YastYLlocal_referenceG,"ast","<local-reference>");
EXT(YastYLboundQG,"ast","<bound?>");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YsyntaxYsexpr_slot_variable,"syntax","sexpr-slot-variable");
EXT(YruntimeYLincongruent_method_errorG,"runtime","<incongruent-method-error>");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
EXT(YastYLregular_applicationG,"ast","<regular-application>");
EXT(YruntimeYlsh,"runtime","lsh");
EXT(YastYreference_called_functionQ_setter,"ast","reference-called-function?-setter");
EXT(YruntimeYmemQ,"runtime","mem?");
EXT(YruntimeYclose_output_port,"runtime","close-output-port");
EXT(YastYmodule_loader_module_type,"ast","module-loader-module-type");
EXT(YastYdo_static_global_bindings,"ast","do-static-global-bindings");
EXT(YruntimeYfloor,"runtime","floor");
EXT(YastYLast_functionG,"ast","<ast-function>");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YastYreference_called_functionQ,"ast","reference-called-function?");
EXT(YruntimeYfind_key,"runtime","find-key");
EXT(YreadYDchar_long_names,"read","$char-long-names");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(YsyntaxYsexpr_make_macro_function,"syntax","sexpr-make-macro-function");
EXT(Ytail,"boot","tail");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(YruntimeYfill,"runtime","fill");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YruntimeYadd,"runtime","add");
EXT(YLflatG,"boot","<flat>");
EXT(YruntimeYpop,"runtime","pop");
EXT(YruntimeYalter,"runtime","alter");
EXT(YruntimeYpush,"runtime","push");
EXT(YastYassignment_form,"ast","assignment-form");
EXT(YsyntaxYDsexpr_define_tag,"syntax","$sexpr-define-tag");
EXT(YruntimeYfab,"runtime","fab");
EXT(YastYbinding_mutableQ,"ast","binding-mutable?");
EXT(YruntimeYmodulo,"runtime","modulo");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(YsyntaxYsexpr_if_else,"syntax","sexpr-if-else");
EXT(YastYenvironment_uses_modules,"ast","environment-uses-modules");
EXT(YsyntaxYsexpr_variableQ,"syntax","sexpr-variable?");
EXT(YruntimeYcurry,"runtime","curry");
EXT(YruntimeYid_hash,"runtime","id-hash");
EXT(YruntimeYtruncate,"runtime","truncate");
EXT(YastYsignature_value,"ast","signature-value");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
EXT(Ylst,"boot","lst");
EXT(YastYfix_let_arguments,"ast","fix-let-arguments");
EXT(YruntimeYassoc,"runtime","assoc");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(YastYLast_macro_definitionG,"ast","<ast-macro-definition>");
EXT(YruntimeYempty,"runtime","empty");
EXT(YastYdo_module_loader_modules,"ast","do-module-loader-modules");
EXT(YsyntaxYsexpr_unquoteQ,"syntax","sexpr-unquote?");
EXT(YastYinit_ast,"ast","init-ast");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YLstrG,"boot","<str>");
EXT(YastYbinding_name,"ast","binding-name");
EXT(YastYLbind_exitG,"ast","<bind-exit>");
EXT(YastYglobal_box_value_setter,"ast","global-box-value-setter");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YsyntaxYsexpr_isa_init_slots,"syntax","sexpr-isa-init-slots");
EXT(YruntimeYlogior,"runtime","logior");
EXT(YruntimeYdel_keys,"runtime","del-keys");
DEF(YtopYtop,"top","top");
EXT(YruntimeYfrom_above,"runtime","from-above");
EXT(YastYsignature_names_setter,"ast","signature-names-setter");
EXT(YruntimeYdefault,"runtime","default");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YastYmonitor_test,"ast","monitor-test");
EXT(YastYLconstantG,"ast","<constant>");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(YsyntaxYsexpr_operands,"syntax","sexpr-operands");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YastYLast_genericG,"ast","<ast-generic>");
EXT(YastYapplication_knownQ,"ast","application-known?");
EXT(YruntimeYevenQ,"runtime","even?");
EXT(YastYLfab_listG,"ast","<fab-list>");
EXT(Ytail_setter,"boot","tail-setter");
EXT(YastYLprogramsG,"ast","<programs>");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YruntimeYfloorS,"runtime","floor/");
EXT(YprotoSsystemYadd_src_path,"proto/system","add-src-path");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YsyntaxYsexpr_definition_variable,"syntax","sexpr-definition-variable");
EXT(Ysig_names,"boot","sig-names");
EXT(YastYruntime_environment,"ast","runtime-environment");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YPisa,"boot","%isa");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(YastYdo_named_static_global_bindings,"ast","do-named-static-global-bindings");
EXT(YastYbinding_dynamic_extentQ,"ast","binding-dynamic-extent?");
EXT(YLtupG,"boot","<tup>");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
EXT(YruntimeYneg,"runtime","neg");
EXT(YruntimeYdo,"runtime","do");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YisaQ,"boot","isa?");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(Yapply,"boot","apply");
EXT(YastYsignature_specs_setter,"ast","signature-specs-setter");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(YastYbinding_kind,"ast","binding-kind");
EXT(YsyntaxYsexpr_function_definition_value,"syntax","sexpr-function-definition-value");
EXT(Yobject_parents,"boot","object-parents");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(YastYreference_binding,"ast","reference-binding");
EXT(YruntimeYnow_elt,"runtime","now-elt");
EXT(YruntimeY_,"runtime","-");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(YsyntaxYsexpr_loc_bound_names,"syntax","sexpr-loc-bound-names");
EXT(YastYfind_environment_module,"ast","find-environment-module");
EXT(YprotoSsystemYadd_build_path,"proto/system","add-build-path");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YprotoSsystemYproto_filename,"proto/system","proto-filename");
EXT(YastYLmodule_bindingG,"ast","<module-binding>");
EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
DEF(YtopYstr_eval_in,"top","str-eval-in");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(YastYDproto_boot_module_name,"ast","$proto-boot-module-name");
EXT(YastYLpredefined_applicationG,"ast","<predefined-application>");
EXT(YastYLpassive_programG,"ast","<passive-program>");
EXT(YastYbinding_info,"ast","binding-info");
EXT(YastYmonitor_main_thunk,"ast","monitor-main-thunk");
EXT(YsyntaxYDsexpr_define_method_tag,"syntax","$sexpr-define-method-tag");
EXT(YmacrosYEE,"macros","==");
EXT(YastYapplication_tailQ,"ast","application-tail?");
EXT(YLlocG,"boot","<loc>");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YprotoSsystemYTproto_extensionT,"proto/system","*proto-extension*");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YruntimeYvec,"runtime","vec");
EXT(YastYDproto_runtime_module_name,"ast","$proto-runtime-module-name");
EXT(YastYfunction_value,"ast","function-value");
EXT(YruntimeYlen_setter,"runtime","len-setter");
EXT(YruntimeYLrangeG,"runtime","<range>");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YruntimeY3rd,"runtime","3rd");
DEF(YtopYeval_in,"top","eval-in");
EXT(YsyntaxYsexpr_syntax_if_value,"syntax","sexpr-syntax-if-value");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");
EXT(Ynot,"boot","not");
EXT(YruntimeYlogxor,"runtime","logxor");
EXT(YruntimeYdel_dups,"runtime","del-dups");
EXT(YruntimeYas,"runtime","as");
EXT(YreadYread_from_string,"read","read-from-string");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YastYapplication_knownQ_setter,"ast","application-known?-setter");
EXT(YsyntaxYDsexpr_locals_tag,"syntax","$sexpr-locals-tag");
EXT(YastYsignature_bindings,"ast","signature-bindings");
EXT(YLanyG,"boot","<any>");
EXT(YLfunG,"boot","<fun>");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
EXT(YruntimeYNE,"runtime","~=");
DEF(YtopYstr_eval,"top","str-eval");
EXT(YastYfix_let_body,"ast","fix-let-body");
EXT(YastYLglobal_assignmentG,"ast","<global-assignment>");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YruntimeYS,"runtime","/");
EXT(YsyntaxYsexpr_if_then,"syntax","sexpr-if-then");
EXT(YruntimeYreduceA,"runtime","reduce+");
EXT(YastYLreal_referenceG,"ast","<real-reference>");
EXT(YastYLglobal_boxG,"ast","<global-box>");
EXT(YastYLmoduleG,"ast","<module>");
EXT(YsyntaxYsexpr_text_of_quotation,"syntax","sexpr-text-of-quotation");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(YastYLfix_letG,"ast","<fix-let>");
EXT(YastYsignature_names,"ast","signature-names");
EXT(YruntimeYrev,"runtime","rev");
EXT(YastYunwind_protect_protected_thunk,"ast","unwind-protect-protected-thunk");
EXT(YruntimeYLlistG,"runtime","<list>");
EXT(YruntimeYmax,"runtime","max");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Yobject_slots,"boot","object-slots");
EXT(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
DEF(YtopYstr_parse_in,"top","str-parse-in");
DEF(YtopYdo_restart,"top","do-restart");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YastYlocals_body,"ast","locals-body");
EXT(YprotoSsystemYTpath_separatorT,"proto/system","*path-separator*");
EXT(YPsnul,"boot","%snul");
EXT(YLsymG,"boot","<sym>");
EXT(YruntimeYLE,"runtime","<=");
EXT(YastYLlocal_bindingG,"ast","<local-binding>");
EXT(YastYbinding_locative,"ast","binding-locative");
EXT(YruntimeYzeroQ,"runtime","zero?");
EXT(Yslot_type,"boot","slot-type");
EXT(YastYbinding_value,"ast","binding-value");
EXT(YastYLast_signatureG,"ast","<ast-signature>");
EXT(YsyntaxYsexpr_make_setter_name,"syntax","sexpr-make-setter-name");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(YruntimeYmap2,"runtime","map2");
EXT(YsyntaxYDsexpr_let_tag,"syntax","$sexpr-let-tag");
EXT(YastYlocals_body_setter,"ast","locals-body-setter");
EXT(YastYbinding_global_box,"ast","binding-global-box");
EXT(YprotoSsystemYfile_mtime,"proto/system","file-mtime");
EXT(YsyntaxYsexpr_make_anonymous_method,"syntax","sexpr-make-anonymous-method");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYA,"runtime","+");
EXT(YruntimeYaddress_of,"runtime","address-of");
EXT(YruntimeYpos,"runtime","pos");
EXT(YsyntaxYsexpr_let_Gcombination,"syntax","sexpr-let->combination");
EXT(YastYLlocalsG,"ast","<locals>");
EXT(YsyntaxYDsexpr_if_tag,"syntax","$sexpr-if-tag");
EXT(YruntimeYreduce,"runtime","reduce");
EXT(YastYload_module,"ast","load-module");
EXT(YastYmodule_syntax_environment,"ast","module-syntax-environment");
EXT(Yfind_setter,"boot","find-setter");
EXT(YastYfunction_bindings,"ast","function-bindings");
EXT(YruntimeYdo3,"runtime","do3");
EXT(YsyntaxYsexpr_loc_bound_bodies,"syntax","sexpr-loc-bound-bodies");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YsyntaxYDsexpr_define_syntax_tag,"syntax","$sexpr-define-syntax-tag");
DEF(YtopYprint_result_expression,"top","print-result-expression");
EXT(YastYfix_let_bindings_setter,"ast","fix-let-bindings-setter");
EXT(YastYLruntime_assignmentG,"ast","<runtime-assignment>");
EXT(YPPmacro,"boot","%%macro");
EXT(YprotoSsystemYos_binding_value_setter,"proto/system","os-binding-value-setter");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
EXT(YastYreference_frame_offset,"ast","reference-frame-offset");
EXT(YruntimeYfrom,"runtime","from");
EXT(YastYbinding_dynamic_extentQ_setter,"ast","binding-dynamic-extent?-setter");
EXT(YsyntaxYDsexpr_unwind_protect_tag,"syntax","$sexpr-unwind-protect-tag");
EXT(YastYreport_undefined_global_bindings,"ast","report-undefined-global-bindings");
EXT(YastYfunction_binding,"ast","function-binding");
EXT(YwriteYwriteln,"write","writeln");
EXT(YsyntaxYsexpr_function_signature,"syntax","sexpr-function-signature");
EXT(YruntimeYeof_object,"runtime","eof-object");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YruntimeY1st,"runtime","1st");
EXT(YsyntaxYDsexpr_method_tag,"syntax","$sexpr-method-tag");
EXT(YsyntaxYsexpr_variable_type,"syntax","sexpr-variable-type");
EXT(YastYfix_let_bindings,"ast","fix-let-bindings");
EXT(YprotoSsystemYTproto_rootT,"proto/system","*proto-root*");
EXT(YLchrG,"boot","<chr>");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(YastYunwind_protect_cleanup_thunk,"ast","unwind-protect-cleanup-thunk");
EXT(YsyntaxYsexpr_block_name,"syntax","sexpr-block-name");
EXT(YastYload_in,"ast","load-in");
EXT(YastYreference_frame_number,"ast","reference-frame-number");
EXT(Ysym_name,"boot","sym-name");
EXT(YwriteYwrite_to_string,"write","write-to-string");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YsyntaxYsexpr_isa_parents,"syntax","sexpr-isa-parents");
EXT(YPdefine_method,"boot","%define-method");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YsyntaxYDsexpr_quasiquote_tag,"syntax","$sexpr-quasiquote-tag");
EXT(YsyntaxYsexpr_make_setter,"syntax","sexpr-make-setter");
EXT(YruntimeYassqn,"runtime","assqn");
EXT(Yslot_getter,"boot","slot-getter");
EXT(Yobject_direct_parents,"boot","object-direct-parents");
EXT(YastYbinding_module_name,"ast","binding-module-name");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YruntimeYlogand,"runtime","logand");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
EXT(YsyntaxYsexpr_monitor_expand,"syntax","sexpr-monitor-expand");
EXT(YsyntaxYsexpr_loc_raw_body,"syntax","sexpr-loc-raw-body");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YastYLapplicationG,"ast","<application>");
EXT(YastYsignature_bindings_setter,"ast","signature-bindings-setter");
DEF(YtopYparse,"top","parse");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YprotoSsystemYcomponents_parent_directory,"proto/system","components-parent-directory");
EXT(YsyntaxYDsexpr_isa_tag,"syntax","$sexpr-isa-tag");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
EXT(YprotoSsystemYcomponents_to_pathname,"proto/system","components-to-pathname");
DEF(YtopYdo_stack_frames,"top","do-stack-frames");
EXT(YruntimeYT,"runtime","*");
EXT(YruntimeYalways,"runtime","always");
EXT(YmacrosYcat,"macros","cat");
EXT(YsyntaxYsexpr_bind_pattern_variables,"syntax","sexpr-bind-pattern-variables");
EXT(YastYfunction_signature_setter,"ast","function-signature-setter");
EXT(YLnumG,"boot","<num>");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
EXT(YsyntaxYsexpr_unquote_splicingQ,"syntax","sexpr-unquote-splicing?");
EXT(YprotoSsystemYc_filename,"proto/system","c-filename");
EXT(YprotoSsystemYpathname_to_components,"proto/system","pathname-to-components");
EXT(YprotoSsystemYfile_existsQ,"proto/system","file-exists?");
EXT(YruntimeYstr,"runtime","str");
EXT(YastYbind_exit_main_fun,"ast","bind-exit-main-fun");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
EXT(YsyntaxYDsexpr_quote_tag,"syntax","$sexpr-quote-tag");
EXT(YprotoSsystemYos_name,"proto/system","os-name");
EXT(YastYobjectify_quotation,"ast","objectify-quotation");
DEF(YtopYload_from,"top","load-from");
EXT(YastYmonitor_type,"ast","monitor-type");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YsyntaxYsexpr_slot_object,"syntax","sexpr-slot-object");
EXT(YruntimeYpick,"runtime","pick");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YruntimeYin,"runtime","in");
EXT(YastYmodule_name,"ast","module-name");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
EXT(YsyntaxYsexpr_iterate_Gloc,"syntax","sexpr-iterate->loc");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YastYsignature_specs,"ast","signature-specs");
EXT(YastYLargumentsG,"ast","<arguments>");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
EXT(YruntimeYout,"runtime","out");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YprotoSsystemYos_binding_value,"proto/system","os-binding-value");
EXT(YprotoSsystemYparent_directory,"proto/system","parent-directory");
EXT(YsyntaxYsexpr_operator,"syntax","sexpr-operator");
EXT(YsyntaxYsexpr_syntax_if_pattern,"syntax","sexpr-syntax-if-pattern");
EXT(YastYfunction_signature,"ast","function-signature");
EXT(YastYfix_let_arguments_setter,"ast","fix-let-arguments-setter");
EXT(YruntimeYoddQ,"runtime","odd?");
EXT(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
EXT(Ynil,"boot","nil");
EXT(YLseqG,"boot","<seq>");
EXT(YastYbinding_global_box_setter,"ast","binding-global-box-setter");
EXT(YastYfunction_body,"ast","function-body");
EXT(YprotoSsystemYcomponents_last,"proto/system","components-last");
EXT(Yfind_getter,"boot","find-getter");
EXT(YruntimeYroundS,"runtime","round/");
EXT(Yobject_direct_slots,"boot","object-direct-slots");
EXT(YruntimeYabs,"runtime","abs");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YruntimeYcat2,"runtime","cat2");
DEF(YtopYprompt_for_command_expression,"top","prompt-for-command-expression");
EXT(YastYast_define_binding,"ast","ast-define-binding");
EXT(YLgenG,"boot","<gen>");
EXT(YsyntaxYDsexpr_define_function_tag,"syntax","$sexpr-define-function-tag");
EXT(YsyntaxYsexpr_signature_value,"syntax","sexpr-signature-value");
EXT(YastYbinding_type,"ast","binding-type");
EXT(YastYfix_let_types_setter,"ast","fix-let-types-setter");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YastYLstatic_global_environmentG,"ast","<static-global-environment>");
EXT(YPslot,"boot","%slot");
DEF(YtopYstr_parse,"top","str-parse");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(YastYfix_let_types,"ast","fix-let-types");
EXT(YsyntaxYsexpr_syntax_if_then,"syntax","sexpr-syntax-if-then");
EXT(Yhead,"boot","head");
EXT(YruntimeYlognot,"runtime","lognot");
EXT(YsyntaxYsexpr_syntax_if_else,"syntax","sexpr-syntax-if-else");
EXT(YastYLlocal_assignmentG,"ast","<local-assignment>");
EXT(Yslot_value,"boot","slot-value");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(YprotoSsystemYcomponents_basename,"proto/system","components-basename");
EXT(YsyntaxYDsexpr_iterate_tag,"syntax","$sexpr-iterate-tag");
EXT(YruntimeYsig,"runtime","sig");
EXT(Yfun_value,"boot","fun-value");
EXT(Ysig_specs,"boot","sig-specs");
DEF(YtopYLkeyboard_interruptG,"top","<keyboard-interrupt>");
EXT(Yfun_names,"boot","fun-names");
EXT(YruntimeYelt,"runtime","elt");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YastYLglobal_referenceG,"ast","<global-reference>");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YsyntaxYsexpr_function_body,"syntax","sexpr-function-body");
EXT(YastYbinding_info_setter,"ast","binding-info-setter");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(Yadd_slot,"boot","add-slot");
EXT(YruntimeYread,"runtime","read");
EXT(YsyntaxYsexpr_if_test,"syntax","sexpr-if-test");
EXT(YastYconstant_value,"ast","constant-value");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(YprotoSsystemYprobe_directory,"proto/system","probe-directory");
EXT(YastYfree_implemented_foreign_bindings,"ast","free-implemented-foreign-bindings");
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
EXT(YastYassignment_reference,"ast","assignment-reference");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(YruntimeYdel,"runtime","del");
EXT(YsyntaxYeval,"syntax","eval");
EXT(YastYmonitor_handler,"ast","monitor-handler");
EXT(YastYbinding_native_toQ,"ast","binding-native-to?");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YsyntaxYsexpr_unwind_protect_protected_form,"syntax","sexpr-unwind-protect-protected-form");
EXT(YastYglobal_box_value,"ast","global-box-value");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(YruntimeYlast,"runtime","last");
EXT(YwriteYobject_name,"write","object-name");
EXT(YsyntaxYsexpr_definition_value,"syntax","sexpr-definition-value");
EXT(YruntimeYLstepG,"runtime","<step>");
EXT(YruntimeYmin,"runtime","min");
EXT(YastYsequentialize,"ast","sequentialize");
EXT(YruntimeYformat,"runtime","format");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
EXT(YastYLbindingG,"ast","<binding>");
EXT(YastYalternative_consequent,"ast","alternative-consequent");
EXT(Ytype_error,"boot","type-error");
EXT(YsyntaxYsexpr_make_begin,"syntax","sexpr-make-begin");
EXT(YastYLreferenceG,"ast","<reference>");
EXT(YastYprogram_register,"ast","program-register");
EXT(YruntimeYflo_bits,"runtime","flo-bits");
EXT(YastYfab_p2c_module,"ast","fab-p2c-module");
EXT(YastYapplication_arguments,"ast","application-arguments");
EXT(YruntimeYmake_handler,"runtime","make-handler");
DEF(YtopYread_file,"top","read-file");
EXT(YwriteYwrite,"write","write");
EXT(YastYmodule_name_to_relpath,"ast","module-name-to-relpath");
EXT(YastYobjectify,"ast","objectify");
EXT(Yhead_setter,"boot","head-setter");
EXT(YLtraitsG,"boot","<traits>");
DEF(YtopYload,"top","load");
EXT(YLslotG,"boot","<slot>");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YprotoSsystemYhierarchical_components,"proto/system","hierarchical-components");
EXT(YruntimeYlen,"runtime","len");
EXT(Ynul,"boot","nul");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YprotoSsystemYlabel_components,"proto/system","label-components");
EXT(YPcall_next_method,"boot","%call-next-method");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YruntimeYLfile_input_portG,"runtime","<file-input-port>");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
EXT(YastYfunction_debug_name,"ast","function-debug-name");
EXT(YsyntaxYsexpr_make_application,"syntax","sexpr-make-application");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
EXT(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
EXT(YastYremove_modules_by_nameX,"ast","remove-modules-by-name!");
EXT(YprotoSsystemYcreate_directory,"proto/system","create-directory");
EXT(YastYinstall_initial_bindings,"ast","install-initial-bindings");
EXT(YruntimeYread_char,"runtime","read-char");
EXT(YastYLmodule_loaderG,"ast","<module-loader>");
EXT(YLfloG,"boot","<flo>");
EXT(YruntimeYbuf,"runtime","buf");
EXT(YastYLast_primitive_definitionG,"ast","<ast-primitive-definition>");
EXT(YprotoSsystemYTobj_extensionT,"proto/system","*obj-extension*");
EXT(YastYLunwind_protectG,"ast","<unwind-protect>");
EXT(YprotoSsystemYTexe_extensionT,"proto/system","*exe-extension*");
EXT(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
EXT(YruntimeYlist,"runtime","list");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(YastYLast_methodG,"ast","<ast-method>");
EXT(YruntimeYnewline,"runtime","newline");
EXT(YruntimeYnegQ,"runtime","neg?");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_46);
DEFLIT(lit_49);
DEFLIT(lit_34);
DEFLIT(lit_63);
DEFLIT(lit_69);
DEFLIT(lit_39);
DEFLIT(lit_32);
DEFLIT(lit_3);
DEFLIT(lit_53);
DEFLIT(lit_60);
DEFLIT(lit_4);
DEFLIT(lit_48);
DEFLIT(lit_42);
DEFLIT(lit_62);
DEFLIT(lit_51);
DEFLIT(lit_66);
DEFLIT(lit_6);
DEFLIT(lit_22);
DEFLIT(lit_13);
DEFLIT(lit_47);
DEFLIT(lit_19);
DEFLIT(lit_43);
DEFLIT(lit_24);
DEFLIT(lit_45);
DEFLIT(lit_8);
DEFLIT(lit_41);
DEFLIT(lit_58);
DEFLIT(lit_36);
DEFLIT(lit_28);
DEFLIT(lit_7);
DEFLIT(lit_50);
DEFLIT(lit_40);
DEFLIT(lit_1);
DEFLIT(lit_35);
DEFLIT(lit_18);
DEFLIT(lit_54);
DEFLIT(lit_9);
DEFLIT(lit_27);
DEFLIT(lit_16);
DEFLIT(lit_55);
DEFLIT(lit_65);
DEFLIT(lit_57);
DEFLIT(lit_29);
DEFLIT(lit_64);
DEFLIT(lit_2);
DEFLIT(lit_37);
DEFLIT(lit_11);
DEFLIT(lit_61);
DEFLIT(lit_17);
DEFLIT(lit_23);
DEFLIT(lit_12);
DEFLIT(lit_56);
DEFLIT(lit_20);
DEFLIT(lit_30);
DEFLIT(lit_67);
DEFLIT(lit_5);
DEFLIT(lit_44);
DEFLIT(lit_14);
DEFLIT(lit_68);
DEFLIT(lit_25);
DEFLIT(lit_33);
DEFLIT(lit_38);
DEFLIT(lit_26);
DEFLIT(lit_52);
DEFLIT(lit_0);
DEFLIT(lit_31);
DEFLIT(lit_21);
DEFLIT(lit_59);
DEFLIT(lit_15);
DEFLIT(lit_10);

/* FUNCTIONS: */

LOCFOR(fun_0);
LOCFOR(fun_1);
LOCFOR(fun_2);
LOCFOR(fun_3);
LOCFOR(fun_4);
LOCFOR(fun_5);
LOCFOR(fun_6);
LOCFOR(fun_7);
LOCFOR(fun_loop_8);
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
FUNFOR(Ykeyboard_interrupt);
FUNFOR(YtopYdo_restart);
LOCFOR(fun_x_1280_21);
LOCFOR(fun_22);
LOCFOR(fun_x_1278_23);
LOCFOR(fun_24);
LOCFOR(fun_25);
LOCFOR(fun_26);
LOCFOR(fun_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_30);
LOCFOR(fun_31);
LOCFOR(fun_loop_32);
LOCFOR(fun_33);
LOCFOR(fun_34);
LOCFOR(fun_35);
LOCFOR(fun_loop_36);
LOCFOR(fun_37);
LOCFOR(fun_38);
LOCFOR(fun_39);
LOCFOR(fun_40);
LOCFOR(fun_41);
extern P YtopY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_0) {
  ARG(ct_env_, 0);
  ARG(s_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(YreadYread_from_string),s_);
  T0 = CALL3(CHKREF(YastYobjectify),T1,ct_env_,YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_1) {
  ARG(modname_, 0);
  ARG(s_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(YastYruntime_environment),modname_);
  T0 = CALL2(CHKREF(YtopYparse_in),s_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_2) {
  ARG(ct_env_, 0);
  ARG(s_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YtopYparse_in),s_,ct_env_);
  T0 = CALL3(CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_6),T1);
  QRET(T0);
}

FUNCODEDEF(fun_3) {
  ARG(modname_, 0);
  ARG(s_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(YastYruntime_environment),modname_);
  T0 = CALL2(CHKREF(YtopYstr_parse_in),s_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_4) {
  ARG(ct_env_, 0);
  ARG(x_, 1);
  P eF1554;
  P oF1553;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = CALL3(CHKREF(YastYobjectify),x_,ct_env_,YPfalse);
  oF1553 = T3;
  T2 = CALL1(CHKREF(YastYast_evaluate),oF1553);
  eF1554 = T2;
  T1 = eF1554;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_5) {
  ARG(modname_, 0);
  ARG(x_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(YastYruntime_environment),modname_);
  T0 = CALL2(CHKREF(YtopYeval_in),x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_6) {
  ARG(ct_env_, 0);
  ARG(x_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = CALL1(CHKREF(YreadYread_from_string),x_);
  T1 = CALL2(CHKREF(YtopYeval_in),T2,ct_env_);
  T0 = CALL1(CHKREF(YwriteYwrite_to_string),T1);
  QRET(T0);
}

FUNCODEDEF(fun_7) {
  ARG(modname_, 0);
  ARG(x_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(YastYruntime_environment),modname_);
  T0 = CALL2(CHKREF(YtopYstr_eval_in),x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_loop_8) {
  ARG(forms_, 0);
  P xF1555;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = CALL1(CHKREF(YruntimeYread),FREEREF(0));
  xF1555 = T7;
  T6 = CALL1(CHKREF(YruntimeYeof_objectQ),xF1555);
  if (T6 != YPfalse) {
    T5 = CALL1(CHKREF(YruntimeYrevX),forms_);
    T4 = CALL1(CHKREF(YsyntaxYsexpr_sequence_Gbegin),T5);
    T1 = T4;
  } else {
    T3 = CALL2(CHKREF(YmacrosYpair),xF1555,forms_);
    a1 = T3;
    forms_ = a1;
    goto loop;
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_9) {
  ARG(port_, 0);
  P loopF1556;
  P T2,T1,T0;
  P a1;
loop:
  T2 = FUNSHELL(1,fun_loop_8,2);
  loopF1556 = T2;
  FUNINIT(loopF1556, 2,port_,loopF1556);
  T1 = KCALL1(loopF1556,Ynil);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_10) {
  ARG(filename_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = fun_9;
  T0 = CALL2(CHKREF(YruntimeYcall_with_input_file),filename_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_11) {
  ARG(ct_env_, 0);
  ARG(filename_, 1);
  P oF1558;
  P xF1557;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL1(CHKREF(YtopYread_file),filename_);
  xF1557 = T4;
  T3 = CALL3(CHKREF(YastYobjectify),xF1557,ct_env_,YPfalse);
  oF1558 = T3;
  T2 = CALL1(CHKREF(YastYast_evaluate),oF1558);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_12) {
  ARG(modname_, 0);
  ARG(filename_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(YastYruntime_environment),modname_);
  T0 = CALL2(CHKREF(YastYload_in),filename_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_13) {
  ARG(modname_, 0);
  ARG(name_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(YprotoSsystemYproto_filename),name_);
  T0 = CALL2(CHKREF(YtopYload),T1,modname_);
  QRET(T0);
}

FUNCODEDEF(fun_14) {
  ARG(prompt_, 0);
  ARG(level_, 1);
  ARG(env_, 2);
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T1 = CALL1(CHKREF(YastYfind_environment_module),env_);
  T0 = CALL1(CHKREF(YastYmodule_name),T1);
  CALLN(CHKREF(YruntimeYformat),5,CHKREF(YruntimeYout),CHKREF(lit_26),T0,level_,prompt_);
  CALL1(CHKREF(YruntimeYforce_output),CHKREF(YruntimeYout));
  T2 = CALL1(CHKREF(YruntimeYread),CHKREF(YruntimeYin));
  QRET(T2);
}

FUNCODEDEF(fun_15) {
  ARG(result_, 0);
  ARG(label_, 1);
  ARG(level_, 2);
  ARG(env_, 3);
  P T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T1 = CALL1(CHKREF(YastYfind_environment_module),env_);
  T0 = CALL1(CHKREF(YastYmodule_name),T1);
  CALLN(CHKREF(YruntimeYformat),5,CHKREF(YruntimeYout),CHKREF(lit_30),T0,level_,label_);
  T2 = CALL2(CHKREF(YwriteYwrite),CHKREF(YruntimeYout),result_);
  QRET(T2);
}

FUNCODEDEF(fun_16) {
  ARG(fun_, 0);
  P T0;
  P a1;
loop:
  T0 = (P)YPdo_stack_frames(fun_);
  QRET(T0);
}

FUNCODEDEF(fun_17) {
  ARG(args_, 0);
  ARG(f_, 1);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T6 = CALL2(CHKREF(YisaQ),f_,CHKREF(YLgenG));
  T5 = CALL1(CHKREF(Ynot),T6);
  if (T5 != YPfalse) {
    T1 = BOXVAL(FREEREF(0));
    CALLN(CHKREF(YruntimeYformat),5,CHKREF(YruntimeYout),CHKREF(lit_36),T1,f_,args_);
    T4 = BOXVAL(FREEREF(0));
    T3 = CALL2(CHKREF(YruntimeYA),T4,YPint((P)1));
    T2 = BOXVAL(FREEREF(0)) = T3;
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_18) {
  P numF1559;
  P T3,T2,T1,T0;
loop:
  numF1559 = YPint((P)0);
  numF1559 = BOXFAB(numF1559);
  T3 = FUNFAB(fun_17,1,numF1559);
  T2 = CALL1(CHKREF(YtopYdo_stack_frames),T3);
  T0 = T2;
  QRET(T0);
}

FUNCODEDEF(Ykeyboard_interrupt) {
  P T0;
loop:
  T0 = CALL1(CHKREF(YruntimeYsig),CHKREF(YtopYLkeyboard_interruptG));
  QRET(T0);
}

FUNCODEDEF(YtopYdo_restart) {
  ARG(n_, 0);
  ARG(restarts_, 1);
  P tmpF1560;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(Ynot),restarts_);
  if (T1 != YPfalse) {
    T0 = CALL1(CHKREF(Yerror),CHKREF(lit_42));
  } else {
  }
  T8 = CALL2(CHKREF(YruntimeYG),n_,YPint((P)0));
  tmpF1560 = T8;
  if (tmpF1560 != YPfalse) {
    T7 = CALL1(CHKREF(YruntimeYlen),restarts_);
    T6 = CALL2(CHKREF(YruntimeYLE),n_,T7);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T4 = T5;
  T3 = CALL1(CHKREF(Ynot),T4);
  if (T3 != YPfalse) {
    T2 = CALL1(CHKREF(Yerror),CHKREF(lit_41));
  } else {
  }
  T11 = CALL2(CHKREF(YruntimeY_),n_,YPint((P)1));
  T10 = CALL2(CHKREF(YruntimeYelt),restarts_,T11);
  T9 = CALL3(CHKREF(YruntimeYinvoke_handler_interactively),T10,CHKREF(YruntimeYin),CHKREF(YruntimeYout));
  QRET(T9);
}

FUNCODEDEF(fun_x_1280_21) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_22) {
  ARG(return_, 0);
  P x_1279F1565;
  P x_1279F1564;
  P mF1563;
  P x_1279F1562;
  P x_1280F1561;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T12 = FUNSHELL(0,fun_x_1280_21,1);
  x_1280F1561 = T12;
  FUNINIT(x_1280F1561, 1,return_);
  x_1279F1562 = FREEREF(0);
  mF1563 = YPfalse;
  mF1563 = BOXFAB(mF1563);
  T11 = CALL2(CHKREF(YisaQ),x_1279F1562,CHKREF(YLlstG));
  if (T11 != YPfalse) {
    T10 = CALL3(CHKREF(YmacrosYmatch_atom),x_1279F1562,CHKREF(lit_52),x_1280F1561);
    x_1279F1564 = T10;
    T8 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1279F1564,x_1280F1561);
    BOXVAL(mF1563) = T8;
    T9 = CALL1(CHKREF(Ytail),x_1279F1564);
    x_1279F1565 = T9;
    T7 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1279F1565,x_1280F1561);
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1280F1561,CHKREF(lit_51),x_1279F1562);
  }
  T2 = YPtrue;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1278_23) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_24) {
  ARG(return_, 0);
  P x_1277F1570;
  P x_1277F1569;
  P nF1568;
  P x_1277F1567;
  P x_1278F1566;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T12 = FUNSHELL(0,fun_x_1278_23,1);
  x_1278F1566 = T12;
  FUNINIT(x_1278F1566, 1,return_);
  x_1277F1567 = FREEREF(0);
  nF1568 = YPfalse;
  nF1568 = BOXFAB(nF1568);
  T11 = CALL2(CHKREF(YisaQ),x_1277F1567,CHKREF(YLlstG));
  if (T11 != YPfalse) {
    T10 = CALL3(CHKREF(YmacrosYmatch_atom),x_1277F1567,CHKREF(lit_55),x_1278F1566);
    x_1277F1569 = T10;
    T8 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1277F1569,x_1278F1566);
    BOXVAL(nF1568) = T8;
    T9 = CALL1(CHKREF(Ytail),x_1277F1569);
    x_1277F1570 = T9;
    T7 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1277F1570,x_1278F1566);
    T6 = T7;
    T5 = T6;
  } else {
    T4 = CALL2(x_1278F1566,CHKREF(lit_51),x_1277F1567);
  }
  T2 = YPtrue;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_25) {
  P tmpF1575;
  P new_envF1574;
  P resultF1573;
  P astF1572;
  P formF1571;
  P T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30;
  P T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  CALL1(CHKREF(YruntimeYnewline),CHKREF(YruntimeYout));
  T2 = BOXVAL(FREEREF(6));
  if (T2 != YPfalse) {
    CALL2(CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_63));
    T0 = CALL2(CHKREF(YruntimeYlist_handlers),CHKREF(YruntimeYLrestartG),CHKREF(YruntimeYout));
    BOXVAL(FREEREF(2)) = T0;
    T1 = BOXVAL(FREEREF(6)) = YPfalse;
  } else {
  }
  T45 = BOXVAL(FREEREF(1));
  T44 = CALL3(CHKREF(YtopYprompt_for_command_expression),T45,FREEREF(0),CHKREF(lit_62));
  formF1571 = T44;
  T43 = CALL2(CHKREF(YruntimeYE),formF1571,CHKREF(lit_61));
  tmpF1575 = T43;
  if (tmpF1575 != YPfalse) {
    T40 = tmpF1575;
  } else {
    T42 = CALL0(CHKREF(YruntimeYeof_object));
    T41 = CALL2(CHKREF(YruntimeYE),formF1571,T42);
    T40 = T41;
  }
  T39 = T40;
  if (T39 != YPfalse) {
    T38 = CALL1(FREEREF(5),YPfalse);
    T4 = T38;
  } else {
    T37 = CALL2(CHKREF(YruntimeYE),formF1571,CHKREF(lit_60));
    if (T37 != YPfalse) {
      T36 = CALL1(FREEREF(4),YPfalse);
      T5 = T36;
    } else {
      T35 = CALL2(CHKREF(YruntimeYE),formF1571,CHKREF(lit_59));
      if (T35 != YPfalse) {
        T34 = CALL1(FREEREF(3),YPfalse);
        T6 = T34;
      } else {
        T33 = CALL2(CHKREF(YruntimeYE),formF1571,CHKREF(lit_58));
        if (T33 != YPfalse) {
          T32 = CALL2(CHKREF(YruntimeYlist_handlers),CHKREF(YruntimeYLconditionG),CHKREF(YruntimeYout));
          T7 = T32;
        } else {
          T31 = CALL2(CHKREF(YruntimeYE),formF1571,CHKREF(lit_57));
          if (T31 != YPfalse) {
            T30 = CALL2(CHKREF(YruntimeYlist_handlers),CHKREF(YruntimeYLrestartG),CHKREF(YruntimeYout));
            T8 = T30;
          } else {
            T29 = FUNFAB(fun_24,1,formF1571);
            T28 = with_exit(T29);
            if (T28 != YPfalse) {
              T27 = BOXVAL(FREEREF(2));
              T26 = CALL1(CHKREF(YruntimeY2nd),formF1571);
              T25 = CALL2(CHKREF(YtopYdo_restart),T27,T26);
              T9 = T25;
            } else {
              T24 = FUNFAB(fun_22,1,formF1571);
              T23 = with_exit(T24);
              if (T23 != YPfalse) {
                T22 = CALL1(CHKREF(YruntimeY2nd),formF1571);
                T21 = CALL1(CHKREF(YastYruntime_environment),T22);
                new_envF1574 = T21;
                T20 = BOXVAL(FREEREF(1)) = new_envF1574;
                T19 = T20;
                T10 = T19;
              } else {
                if (YPtrue != YPfalse) {
                  T18 = BOXVAL(FREEREF(1));
                  T17 = CALL3(CHKREF(YastYobjectify),formF1571,T18,YPfalse);
                  astF1572 = T17;
                  T16 = CALL1(CHKREF(YastYast_evaluate),astF1572);
                  resultF1573 = T16;
                  T15 = BOXVAL(FREEREF(1));
                  T14 = CALLN(CHKREF(YtopYprint_result_expression),4,T15,FREEREF(0),CHKREF(lit_49),resultF1573);
                  T13 = T14;
                  T12 = T13;
                  T11 = T12;
                } else {
                  T11 = YPfalse;
                }
                T10 = T11;
              }
              T9 = T10;
            }
            T8 = T9;
          }
          T7 = T8;
        }
        T6 = T7;
      }
      T5 = T6;
    }
    T4 = T5;
  }
  T3 = T4;
  QRET(T3);
}

FUNCODEDEF(fun_26) {
  ARG(r_, 0);
  ARG(c_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_27) {
loop:
  QRET(YPtrue);
}

FUNCODEDEF(fun_28) {
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T10 = (P)YPpair(CHKREF(YLsimple_handler_infoG),Ynil);
  T9 = (P)YPpair(CHKREF(Yhandler_info_arguments),Ynil);
  T8 = (P)YPpair(CHKREF(Yhandler_info_message),T9);
  T7 = CALL1(CHKREF(Ylst),FREEREF(6));
  T6 = (P)YPpair(T7,Ynil);
  T5 = (P)YPpair(CHKREF(lit_66),T6);
  T4 = CALL3(CHKREF(YPisa),T10,T8,T5);
  T3 = fun_27;
  T2 = FUNFAB(fun_26,1,FREEREF(7));
  T1 = FUNFAB(fun_25,7,FREEREF(6),FREEREF(5),FREEREF(4),FREEREF(3),FREEREF(2),FREEREF(1),FREEREF(0));
  T0 = CALLN(YruntimeYPwith_monitor,5,CHKREF(YruntimeYLrestartG),T4,T3,T2,T1);
  QRET(T0);
}

FUNCODEDEF(fun_29) {
  ARG(r_, 0);
  ARG(c_, 1);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = CALL2(CHKREF(YisaQ),c_,CHKREF(YtopYLkeyboard_interruptG));
  if (T3 != YPfalse) {
    T2 = CALL2(CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_68));
  } else {
    T1 = CALL1(CHKREF(YruntimeYdescribe_condition),c_);
    T0 = CALL3(CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_67),T1);
  }
  T5 = CALL2(CHKREF(YruntimeYA),FREEREF(4),YPint((P)1));
  T4 = BOXVAL(FREEREF(1));
  CALLN(CHKREF(YtopYtop_in),5,T5,FREEREF(3),FREEREF(2),YPtrue,T4);
  T6 = CALL1(FREEREF(0),YPfalse);
  QRET(T6);
}

FUNCODEDEF(fun_30) {
loop:
  QRET(YPtrue);
}

FUNCODEDEF(fun_31) {
  ARG(continue_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = fun_30;
  T2 = FUNFAB(fun_29,5,continue_,FREEREF(1),FREEREF(5),FREEREF(3),FREEREF(0));
  T1 = FUNFAB(fun_28,8,FREEREF(6),FREEREF(5),FREEREF(4),FREEREF(3),FREEREF(2),FREEREF(1),FREEREF(0),continue_);
  T0 = CALLN(YruntimeYPwith_monitor,5,CHKREF(YruntimeYLconditionG),CHKREF(YruntimeYDdefault_handler_info),T3,T2,T1);
  QRET(T0);
}

FUNCODEDEF(fun_loop_32) {
  P T1,T0;
loop:
  T0 = FUNFAB(fun_31,7,FREEREF(7),FREEREF(6),FREEREF(5),FREEREF(4),FREEREF(3),FREEREF(2),FREEREF(1));
  with_exit(T0);
  goto loop;
  QRET(T1);
}

FUNCODEDEF(fun_33) {
  ARG(blow_, 0);
  P loopF1576;
  P T2,T1,T0;
  P a1;
loop:
  T2 = FUNSHELL(1,fun_loop_32,8);
  loopF1576 = T2;
  FUNINIT(loopF1576, 8,loopF1576,FREEREF(5),FREEREF(4),blow_,FREEREF(3),FREEREF(2),FREEREF(1),FREEREF(0));
  T1 = KCALL0(loopF1576);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_34) {
  ARG(ct_env_, 0);
  ARG(show_restartsQ_, 1);
  ARG(quit_, 2);
  ARG(top_, 3);
  ARG(level_, 4);
  P restartsF1577;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5;
loop:
  show_restartsQ_ = BOXFAB(show_restartsQ_);
  ct_env_ = BOXFAB(ct_env_);
  restartsF1577 = YPfalse;
  restartsF1577 = BOXFAB(restartsF1577);
  T5 = FUNFAB(fun_33,6,level_,ct_env_,restartsF1577,top_,quit_,show_restartsQ_);
  T4 = with_exit(T5);
  T2 = T4;
  QRET(T2);
}

FUNCODEDEF(fun_35) {
  ARG(top_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YastYruntime_environment),FREEREF(0));
  T0 = CALLN(CHKREF(YtopYtop_in),5,YPint((P)0),top_,FREEREF(1),YPfalse,T1);
  QRET(T0);
}

FUNCODEDEF(fun_loop_36) {
  P T1,T0;
loop:
  T0 = FUNFAB(fun_35,2,FREEREF(2),FREEREF(1));
  with_exit(T0);
  goto loop;
  QRET(T1);
}

FUNCODEDEF(fun_37) {
  P loopF1578;
  P T2,T1,T0;
loop:
  T2 = FUNSHELL(1,fun_loop_36,3);
  loopF1578 = T2;
  FUNINIT(loopF1578, 3,loopF1578,FREEREF(1),FREEREF(0));
  T1 = KCALL0(loopF1578);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_38) {
  ARG(r_, 0);
  ARG(c_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_39) {
loop:
  QRET(YPtrue);
}

FUNCODEDEF(fun_40) {
  ARG(quit_, 0);
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T10 = (P)YPpair(CHKREF(YLsimple_handler_infoG),Ynil);
  T9 = (P)YPpair(CHKREF(Yhandler_info_arguments),Ynil);
  T8 = (P)YPpair(CHKREF(Yhandler_info_message),T9);
  T7 = CALL0(CHKREF(Ylst));
  T6 = (P)YPpair(T7,Ynil);
  T5 = (P)YPpair(CHKREF(lit_69),T6);
  T4 = CALL3(CHKREF(YPisa),T10,T8,T5);
  T3 = fun_39;
  T2 = FUNFAB(fun_38,1,quit_);
  T1 = FUNFAB(fun_37,2,FREEREF(0),quit_);
  T0 = CALLN(YruntimeYPwith_monitor,5,CHKREF(YruntimeYLrestartG),T4,T3,T2,T1);
  QRET(T0);
}

FUNCODEDEF(fun_41) {
  ARG(modname_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_40,1,modname_);
  T0 = with_exit(T1);
  QRET(T0);
}

P YtopY___main_0___() {
  P T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103;
  P T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87;
  P T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71;
  P T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55;
  P T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"parse-in");
  lit_1 = YPPsym((P)"ct-env");
  lit_2 = YPPsym((P)"s");
  T0 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_1)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_0 = YPmet(FUNCODEREF(fun_0),CHKREF(lit_0),T0,ENVNUL);
  T4 = BOUNDP(YtopYparse_in);
  if (T4 != YPfalse) {
    T3 = CHKREF(YtopYparse_in);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_0;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  YtopYparse_in = T1;
  regsym(&YtopYparse_in,"top","parse-in");
  lit_3 = YPPsym((P)"parse");
  lit_4 = YPPsym((P)"modname");
  T5 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_4)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLsymG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_1 = YPmet(FUNCODEREF(fun_1),CHKREF(lit_3),T5,ENVNUL);
  T9 = BOUNDP(YtopYparse);
  if (T9 != YPfalse) {
    T8 = CHKREF(YtopYparse);
  } else {
    T8 = YPfalse;
  }
  T7 = fun_1;
  T6 = CALL2(CHKREF(YPdefine_method),T8,T7);
  YtopYparse = T6;
  regsym(&YtopYparse,"top","parse");
  lit_5 = YPPsym((P)"str-parse-in");
  lit_6 = YPsb((P)"%=\n");
  T10 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_1)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_2 = YPmet(FUNCODEREF(fun_2),CHKREF(lit_5),T10,ENVNUL);
  T14 = BOUNDP(YtopYstr_parse_in);
  if (T14 != YPfalse) {
    T13 = CHKREF(YtopYstr_parse_in);
  } else {
    T13 = YPfalse;
  }
  T12 = fun_2;
  T11 = CALL2(CHKREF(YPdefine_method),T13,T12);
  YtopYstr_parse_in = T11;
  regsym(&YtopYstr_parse_in,"top","str-parse-in");
  lit_7 = YPPsym((P)"str-parse");
  T15 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_4)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLsymG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_3 = YPmet(FUNCODEREF(fun_3),CHKREF(lit_7),T15,ENVNUL);
  T19 = BOUNDP(YtopYstr_parse);
  if (T19 != YPfalse) {
    T18 = CHKREF(YtopYstr_parse);
  } else {
    T18 = YPfalse;
  }
  T17 = fun_3;
  T16 = CALL2(CHKREF(YPdefine_method),T18,T17);
  YtopYstr_parse = T16;
  regsym(&YtopYstr_parse,"top","str-parse");
  lit_8 = YPPsym((P)"eval-in");
  lit_9 = YPPsym((P)"x");
  T20 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_4 = YPmet(FUNCODEREF(fun_4),CHKREF(lit_8),T20,ENVNUL);
  T24 = BOUNDP(YtopYeval_in);
  if (T24 != YPfalse) {
    T23 = CHKREF(YtopYeval_in);
  } else {
    T23 = YPfalse;
  }
  T22 = fun_4;
  T21 = CALL2(CHKREF(YPdefine_method),T23,T22);
  YtopYeval_in = T21;
  regsym(&YtopYeval_in,"top","eval-in");
  lit_10 = YPPsym((P)"eval");
  T25 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_4)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLsymG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_5 = YPmet(FUNCODEREF(fun_5),CHKREF(lit_10),T25,ENVNUL);
  T29 = BOUNDP(YsyntaxYeval);
  if (T29 != YPfalse) {
    T28 = CHKREF(YsyntaxYeval);
  } else {
    T28 = YPfalse;
  }
  T27 = fun_5;
  T26 = CALL2(CHKREF(YPdefine_method),T28,T27);
  YsyntaxYeval = T26;
  regsym(&YsyntaxYeval,"syntax","eval");
  lit_11 = YPPsym((P)"str-eval-in");
  T30 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_1)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_6 = YPmet(FUNCODEREF(fun_6),CHKREF(lit_11),T30,ENVNUL);
  T34 = BOUNDP(YtopYstr_eval_in);
  if (T34 != YPfalse) {
    T33 = CHKREF(YtopYstr_eval_in);
  } else {
    T33 = YPfalse;
  }
  T32 = fun_6;
  T31 = CALL2(CHKREF(YPdefine_method),T33,T32);
  YtopYstr_eval_in = T31;
  regsym(&YtopYstr_eval_in,"top","str-eval-in");
  lit_12 = YPPsym((P)"str-eval");
  T35 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_4)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLsymG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_7 = YPmet(FUNCODEREF(fun_7),CHKREF(lit_12),T35,ENVNUL);
  T39 = BOUNDP(YtopYstr_eval);
  if (T39 != YPfalse) {
    T38 = CHKREF(YtopYstr_eval);
  } else {
    T38 = YPfalse;
  }
  T37 = fun_7;
  T36 = CALL2(CHKREF(YPdefine_method),T38,T37);
  YtopYstr_eval = T36;
  regsym(&YtopYstr_eval,"top","str-eval");
  lit_13 = YPPsym((P)"read-file");
  lit_14 = YPPsym((P)"filename");
  lit_15 = YPPsym((P)"port");
  lit_16 = YPPsym((P)"loop");
  lit_17 = YPPsym((P)"forms");
  T42 = YPsig(YPPlist(1,CHKREF(lit_17)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_8 = YPmet(FUNCODEREF(fun_loop_8),CHKREF(lit_16),T42,ENVNUL);
  T41 = YPsig(YPPlist(1,CHKREF(lit_15)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T41,ENVNUL);
  T40 = YPsig(YPPlist(1,CHKREF(lit_14)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_10 = YPmet(FUNCODEREF(fun_10),CHKREF(lit_13),T40,ENVNUL);
  T46 = BOUNDP(YtopYread_file);
  if (T46 != YPfalse) {
    T45 = CHKREF(YtopYread_file);
  } else {
    T45 = YPfalse;
  }
  T44 = fun_10;
  T43 = CALL2(CHKREF(YPdefine_method),T45,T44);
  YtopYread_file = T43;
  regsym(&YtopYread_file,"top","read-file");
  lit_18 = YPPsym((P)"load-in");
  T47 = YPsig(YPPlist(2,CHKREF(lit_14),CHKREF(lit_1)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_11 = YPmet(FUNCODEREF(fun_11),CHKREF(lit_18),T47,ENVNUL);
  T51 = BOUNDP(YastYload_in);
  if (T51 != YPfalse) {
    T50 = CHKREF(YastYload_in);
  } else {
    T50 = YPfalse;
  }
  T49 = fun_11;
  T48 = CALL2(CHKREF(YPdefine_method),T50,T49);
  YastYload_in = T48;
  regsym(&YastYload_in,"ast","load-in");
  lit_19 = YPPsym((P)"load");
  T52 = YPsig(YPPlist(2,CHKREF(lit_14),CHKREF(lit_4)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLsymG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_12 = YPmet(FUNCODEREF(fun_12),CHKREF(lit_19),T52,ENVNUL);
  T56 = BOUNDP(YtopYload);
  if (T56 != YPfalse) {
    T55 = CHKREF(YtopYload);
  } else {
    T55 = YPfalse;
  }
  T54 = fun_12;
  T53 = CALL2(CHKREF(YPdefine_method),T55,T54);
  YtopYload = T53;
  regsym(&YtopYload,"top","load");
  lit_20 = YPPsym((P)"load-from");
  lit_21 = YPPsym((P)"name");
  T57 = YPsig(YPPlist(2,CHKREF(lit_21),CHKREF(lit_4)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLsymG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_13 = YPmet(FUNCODEREF(fun_13),CHKREF(lit_20),T57,ENVNUL);
  T61 = BOUNDP(YtopYload_from);
  if (T61 != YPfalse) {
    T60 = CHKREF(YtopYload_from);
  } else {
    T60 = YPfalse;
  }
  T59 = fun_13;
  T58 = CALL2(CHKREF(YPdefine_method),T60,T59);
  YtopYload_from = T58;
  regsym(&YtopYload_from,"top","load-from");
  lit_22 = YPPsym((P)"prompt-for-command-expression");
  lit_23 = YPPsym((P)"prompt");
  lit_24 = YPPsym((P)"level");
  lit_25 = YPPsym((P)"env");
  lit_26 = YPsb((P)"%s %=%s");
  T62 = YPsig(YPPlist(3,CHKREF(lit_25),CHKREF(lit_24),CHKREF(lit_23)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_14 = YPmet(FUNCODEREF(fun_14),CHKREF(lit_22),T62,ENVNUL);
  T66 = BOUNDP(YtopYprompt_for_command_expression);
  if (T66 != YPfalse) {
    T65 = CHKREF(YtopYprompt_for_command_expression);
  } else {
    T65 = YPfalse;
  }
  T64 = fun_14;
  T63 = CALL2(CHKREF(YPdefine_method),T65,T64);
  YtopYprompt_for_command_expression = T63;
  regsym(&YtopYprompt_for_command_expression,"top","prompt-for-command-expression");
  lit_27 = YPPsym((P)"print-result-expression");
  lit_28 = YPPsym((P)"result");
  lit_29 = YPPsym((P)"label");
  lit_30 = YPsb((P)"%s %=%s");
  T67 = YPsig(YPPlist(4,CHKREF(lit_25),CHKREF(lit_24),CHKREF(lit_29),CHKREF(lit_28)),YPPlist(4,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_15 = YPmet(FUNCODEREF(fun_15),CHKREF(lit_27),T67,ENVNUL);
  T71 = BOUNDP(YtopYprint_result_expression);
  if (T71 != YPfalse) {
    T70 = CHKREF(YtopYprint_result_expression);
  } else {
    T70 = YPfalse;
  }
  T69 = fun_15;
  T68 = CALL2(CHKREF(YPdefine_method),T70,T69);
  YtopYprint_result_expression = T68;
  regsym(&YtopYprint_result_expression,"top","print-result-expression");
  lit_31 = YPPsym((P)"do-stack-frames");
  lit_32 = YPPsym((P)"fun");
  T72 = YPsig(YPPlist(1,CHKREF(lit_32)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_16 = YPmet(FUNCODEREF(fun_16),CHKREF(lit_31),T72,ENVNUL);
  T76 = BOUNDP(YtopYdo_stack_frames);
  if (T76 != YPfalse) {
    T75 = CHKREF(YtopYdo_stack_frames);
  } else {
    T75 = YPfalse;
  }
  T74 = fun_16;
  T73 = CALL2(CHKREF(YPdefine_method),T75,T74);
  YtopYdo_stack_frames = T73;
  regsym(&YtopYdo_stack_frames,"top","do-stack-frames");
  lit_33 = YPPsym((P)"backtrace");
  lit_34 = YPPsym((P)"args");
  lit_35 = YPPsym((P)"f");
  lit_36 = YPsb((P)"[%=] %= %=\n");
  T78 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_34)),YPPlist(1,CHKREF(YLanyG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T78,ENVNUL);
  T77 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_18 = YPmet(FUNCODEREF(fun_18),CHKREF(lit_33),T77,ENVNUL);
  T82 = BOUNDP(YtopYbacktrace);
  if (T82 != YPfalse) {
    T81 = CHKREF(YtopYbacktrace);
  } else {
    T81 = YPfalse;
  }
  T80 = fun_18;
  T79 = CALL2(CHKREF(YPdefine_method),T81,T80);
  YtopYbacktrace = T79;
  regsym(&YtopYbacktrace,"top","backtrace");
  T84 = (P)YPpair(CHKREF(YruntimeYLconditionG),Ynil);
  T83 = CALL3(CHKREF(YPisa),T84,Ynil,Ynil);
  YtopYLkeyboard_interruptG = T83;
  regsym(&YtopYLkeyboard_interruptG,"top","<keyboard-interrupt>");
  lit_37 = YPPsym((P)"keyboard-interrupt");
  T85 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  Ykeyboard_interrupt = YPmet(FUNCODEREF(Ykeyboard_interrupt),CHKREF(lit_37),T85,ENVNUL);
  T86 = Ykeyboard_interrupt;
  Ykeyboard_interrupt = T86;
  regsym(&Ykeyboard_interrupt,"boot","keyboard-interrupt");
  lit_38 = YPPsym((P)"do-restart");
  lit_39 = YPPsym((P)"n");
  lit_40 = YPPsym((P)"restarts");
  lit_41 = YPsb((P)"No restart #%d.\n");
  lit_42 = YPsb((P)"No restarts available.\n");
  T87 = YPsig(YPPlist(2,CHKREF(lit_40),CHKREF(lit_39)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YtopYdo_restart = YPmet(FUNCODEREF(YtopYdo_restart),CHKREF(lit_38),T87,ENVNUL);
  T88 = YtopYdo_restart;
  YtopYdo_restart = T88;
  regsym(&YtopYdo_restart,"top","do-restart");
  lit_43 = YPPsym((P)"top-in");
  lit_44 = YPPsym((P)"show-restarts?");
  lit_45 = YPPsym((P)"quit");
  lit_46 = YPPsym((P)"top");
  lit_47 = YPPsym((P)"blow");
  lit_48 = YPPsym((P)"continue");
  lit_49 = YPsb((P)"=> ");
  lit_50 = YPPsym((P)"return");
  lit_51 = YPsb((P)"Match Pattern Failure");
  lit_52 = YPPsym((P)"in-mod");
  lit_53 = YPPsym((P)"x-1280");
  lit_54 = YPPsym((P)"msg");
  lit_55 = YPPsym((P)"restart");
  lit_56 = YPPsym((P)"x-1278");
  lit_57 = YPPlist(1,YPPsym((P)"restarts"));
  lit_58 = YPPlist(1,YPPsym((P)"handlers"));
  lit_59 = YPPlist(1,YPPsym((P)"top"));
  lit_60 = YPPlist(1,YPPsym((P)"up"));
  lit_61 = YPPlist(1,YPPsym((P)"quit"));
  lit_62 = YPsb((P)"<= ");
  lit_63 = YPsb((P)"Type (restart N) to restart execution:\n");
  lit_64 = YPPsym((P)"r");
  lit_65 = YPPsym((P)"c");
  lit_66 = YPsb((P)"Return to interpreter level %d");
  lit_67 = YPsb((P)"ERROR: %s");
  lit_68 = YPsb((P)"BREAK");
  T102 = YPsig(YPPlist(2,CHKREF(lit_54),CHKREF(lit_34)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1280_21 = YPmet(FUNCODEREF(fun_x_1280_21),CHKREF(lit_53),T102,ENVNUL);
  T101 = YPsig(YPPlist(1,CHKREF(lit_50)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T101,ENVNUL);
  T100 = YPsig(YPPlist(2,CHKREF(lit_54),CHKREF(lit_34)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1278_23 = YPmet(FUNCODEREF(fun_x_1278_23),CHKREF(lit_56),T100,ENVNUL);
  T99 = YPsig(YPPlist(1,CHKREF(lit_50)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T99,ENVNUL);
  T98 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_25 = YPmet(FUNCODEREF(fun_25),YPfalse,T98,ENVNUL);
  T97 = YPsig(YPPlist(2,CHKREF(lit_65),CHKREF(lit_64)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T97,ENVNUL);
  T96 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T96,ENVNUL);
  T95 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T95,ENVNUL);
  T94 = YPsig(YPPlist(2,CHKREF(lit_65),CHKREF(lit_64)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T94,ENVNUL);
  T93 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T93,ENVNUL);
  T92 = YPsig(YPPlist(1,CHKREF(lit_48)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T92,ENVNUL);
  T91 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_loop_32 = YPmet(FUNCODEREF(fun_loop_32),CHKREF(lit_16),T91,ENVNUL);
  T90 = YPsig(YPPlist(1,CHKREF(lit_47)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T90,ENVNUL);
  T89 = YPsig(YPPlist(5,CHKREF(lit_24),CHKREF(lit_46),CHKREF(lit_45),CHKREF(lit_44),CHKREF(lit_1)),YPPlist(5,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)5),CHKREF(YLanyG));
  fun_34 = YPmet(FUNCODEREF(fun_34),CHKREF(lit_43),T89,ENVNUL);
  T106 = BOUNDP(YtopYtop_in);
  if (T106 != YPfalse) {
    T105 = CHKREF(YtopYtop_in);
  } else {
    T105 = YPfalse;
  }
  T104 = fun_34;
  T103 = CALL2(CHKREF(YPdefine_method),T105,T104);
  YtopYtop_in = T103;
  regsym(&YtopYtop_in,"top","top-in");
  lit_69 = YPsb((P)"Exit the top-level interpreter");
  T113 = YPsig(YPPlist(1,CHKREF(lit_46)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T113,ENVNUL);
  T112 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_loop_36 = YPmet(FUNCODEREF(fun_loop_36),CHKREF(lit_16),T112,ENVNUL);
  T111 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T111,ENVNUL);
  T110 = YPsig(YPPlist(2,CHKREF(lit_65),CHKREF(lit_64)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T110,ENVNUL);
  T109 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T109,ENVNUL);
  T108 = YPsig(YPPlist(1,CHKREF(lit_45)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T108,ENVNUL);
  T107 = YPsig(YPPlist(1,CHKREF(lit_4)),YPPlist(1,CHKREF(YLsymG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_41 = YPmet(FUNCODEREF(fun_41),CHKREF(lit_46),T107,ENVNUL);
  T117 = BOUNDP(YtopYtop);
  if (T117 != YPfalse) {
    T116 = CHKREF(YtopYtop);
  } else {
    T116 = YPfalse;
  }
  T115 = fun_41;
  T114 = CALL2(CHKREF(YPdefine_method),T116,T115);
  YtopYtop = T114;
  regsym(&YtopYtop,"top","top");
  T118 = YPfalse;
  return T118;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_runtime;
extern MODULE_INFO module_info_read;
extern MODULE_INFO module_info_write;
extern MODULE_INFO module_info_syntax;
extern MODULE_INFO module_info_ast;
extern MODULE_INFO module_info_ast_eval;
extern MODULE_INFO module_info_protoSsystem;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {&module_info_macros},
  {&module_info_runtime},
  {&module_info_read},
  {&module_info_write},
  {&module_info_syntax},
  {&module_info_ast},
  {&module_info_ast_eval},
  {&module_info_protoSsystem},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"locative-value", &module_info_runtime, "locative-value"},
  {"init-environment-for-eval", &module_info_ast, "init-environment-for-eval"},
  {"binding-value-setter", &module_info_ast, "binding-value-setter"},
  {"function-body-setter", &module_info_ast, "function-body-setter"},
  {"sexpr-variable-name", &module_info_syntax, "sexpr-variable-name"},
  {"sexpr-make-getter", &module_info_syntax, "sexpr-make-getter"},
  {"compile-time-program", &module_info_ast, "compile-time-program"},
  {"sexpr-forward-primitive?", &module_info_syntax, "sexpr-forward-primitive?"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"monitor-info", &module_info_ast, "monitor-info"},
  {"elt-setter", &module_info_runtime, "elt-setter"},
  {"<definition>", &module_info_ast, "<definition>"},
  {"port-contents", &module_info_runtime, "port-contents"},
  {"remainder", &module_info_runtime, "remainder"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"%i?", &module_info_boot, "%i?"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"signature-nary?", &module_info_ast, "signature-nary?"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"call-with-string-output-port", &module_info_runtime, "call-with-string-output-port"},
  {"ascii-whitespaces", &module_info_runtime, "ascii-whitespaces"},
  {"%su", &module_info_boot, "%su"},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_syntax, "sexpr-unwind-protect-cleanup-forms"},
  {"<computed-program>", &module_info_ast, "<computed-program>"},
  {"assq", &module_info_runtime, "assq"},
  {"ceiling/", &module_info_runtime, "ceiling/"},
  {"=", &module_info_runtime, "="},
  {"slot-init", &module_info_boot, "slot-init"},
  {"assignment-binding", &module_info_ast, "assignment-binding"},
  {"$sexpr-set-tag", &module_info_syntax, "$sexpr-set-tag"},
  {"export", &module_info_boot, "export"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"module-target-environment", &module_info_ast, "module-target-environment"},
  {"map", &module_info_macros, "map"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"sexpr-method-signature", &module_info_syntax, "sexpr-method-signature"},
  {"%i!", &module_info_boot, "%i!"},
  {"<ast-primitive>", &module_info_ast, "<ast-primitive>"},
  {"<monitor>", &module_info_ast, "<monitor>"},
  {"function-debug-name-setter", &module_info_ast, "function-debug-name-setter"},
  {"bound?-reference", &module_info_ast, "bound?-reference"},
  {"2nd", &module_info_runtime, "2nd"},
  {"<output-port>", &module_info_runtime, "<output-port>"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"sexpr-expand-backquote", &module_info_syntax, "sexpr-expand-backquote"},
  {"fapply", &module_info_boot, "fapply"},
  {"var-name", &module_info_macros, "var-name"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"module-exports", &module_info_ast, "module-exports"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"sexpr-syntax-definition-value", &module_info_syntax, "sexpr-syntax-definition-value"},
  {"sexpr-loc-bound-signatures", &module_info_syntax, "sexpr-loc-bound-signatures"},
  {"locals-functions-setter", &module_info_ast, "locals-functions-setter"},
  {"sexpr-assignment-value", &module_info_syntax, "sexpr-assignment-value"},
  {"*c-extension*", &module_info_protoSsystem, "*c-extension*"},
  {"if", &module_info_boot, "if"},
  {"<int>", &module_info_boot, "<int>"},
  {"alternative-condition", &module_info_ast, "alternative-condition"},
  {"<log>", &module_info_boot, "<log>"},
  {"do2", &module_info_runtime, "do2"},
  {"ini-state", &module_info_runtime, "ini-state"},
  {"$sexpr-define-generic-tag", &module_info_syntax, "$sexpr-define-generic-tag"},
  {"locals-functions", &module_info_ast, "locals-functions"},
  {"<program>", &module_info_ast, "<program>"},
  {"application-binding", &module_info_ast, "application-binding"},
  {"compose", &module_info_runtime, "compose"},
  {"signature-value-setter", &module_info_ast, "signature-value-setter"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"or", &module_info_macros, "or"},
  {"assert", &module_info_macros, "assert"},
  {"round", &module_info_runtime, "round"},
  {"when", &module_info_macros, "when"},
  {"object<", &module_info_boot, "object<"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"sexpr-isa-init-values", &module_info_syntax, "sexpr-isa-init-values"},
  {"from-below", &module_info_runtime, "from-below"},
  {"<string-input-port>", &module_info_runtime, "<string-input-port>"},
  {"type-or", &module_info_runtime, "type-or"},
  {"$sexpr-slot-tag", &module_info_syntax, "$sexpr-slot-tag"},
  {"popf", &module_info_macros, "popf"},
  {"try", &module_info_boot, "try"},
  {"probe-module", &module_info_ast, "probe-module"},
  {"$sexpr-monitor-tag", &module_info_syntax, "$sexpr-monitor-tag"},
  {"<runtime-reference>", &module_info_ast, "<runtime-reference>"},
  {"to-digit", &module_info_runtime, "to-digit"},
  {"exe-filename", &module_info_protoSsystem, "exe-filename"},
  {"let", &module_info_boot, "let"},
  {"dp", &module_info_boot, "dp"},
  {"function-nary?", &module_info_ast, "function-nary?"},
  {"char-ready?", &module_info_runtime, "char-ready?"},
  {"sexpr-sequence->begin", &module_info_syntax, "sexpr-sequence->begin"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"sexpr-assignment-variable", &module_info_syntax, "sexpr-assignment-variable"},
  {"as-uppercase", &module_info_runtime, "as-uppercase"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"<compile-time>", &module_info_ast, "<compile-time>"},
  {"<", &module_info_runtime, "<"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"sexpr-isa-slot-inits", &module_info_syntax, "sexpr-isa-slot-inits"},
  {"copy-state", &module_info_runtime, "copy-state"},
  {"%lu", &module_info_boot, "%lu"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"ceiling", &module_info_runtime, "ceiling"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"alternative-alternant", &module_info_ast, "alternative-alternant"},
  {"%with-monitor", &module_info_runtime, "%with-monitor"},
  {"sexpr-block-body", &module_info_syntax, "sexpr-block-body"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"eof-object?", &module_info_runtime, "eof-object?"},
  {"<assocs>", &module_info_runtime, "<assocs>"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"cat!", &module_info_runtime, "cat!"},
  {"$sexpr-macro-expand-tag", &module_info_syntax, "$sexpr-macro-expand-tag"},
  {"keys", &module_info_runtime, "keys"},
  {"table-growth-threshold", &module_info_runtime, "table-growth-threshold"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"sexpr-slot-init", &module_info_syntax, "sexpr-slot-init"},
  {"module-binding", &module_info_ast, "module-binding"},
  {"pos?", &module_info_runtime, "pos?"},
  {"<buf>", &module_info_runtime, "<buf>"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"<raw-constant>", &module_info_ast, "<raw-constant>"},
  {"<col>", &module_info_boot, "<col>"},
  {"file-type", &module_info_protoSsystem, "file-type"},
  {"pop-last!", &module_info_runtime, "pop-last!"},
  {"binding-type-setter", &module_info_ast, "binding-type-setter"},
  {"fix-let-body-setter", &module_info_ast, "fix-let-body-setter"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"dv", &module_info_boot, "dv"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"%f-", &module_info_boot, "%f-"},
  {"$sexpr-begin-tag", &module_info_syntax, "$sexpr-begin-tag"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"%fu", &module_info_boot, "%fu"},
  {"<alternative>", &module_info_ast, "<alternative>"},
  {"fin-state?", &module_info_runtime, "fin-state?"},
  {"ast-evaluate", &module_info_ast, "ast-evaluate"},
  {"%pair", &module_info_boot, "%pair"},
  {"locals-bindings", &module_info_ast, "locals-bindings"},
  {"list-handlers", &module_info_runtime, "list-handlers"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"~==", &module_info_runtime, "~=="},
  {"<input-port>", &module_info_runtime, "<input-port>"},
  {"obj-filename", &module_info_protoSsystem, "obj-filename"},
  {"error", &module_info_boot, "error"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"env-object-name", &module_info_write, "env-object-name"},
  {"sexpr-syntax-definition-variable", &module_info_syntax, "sexpr-syntax-definition-variable"},
  {"pair", &module_info_macros, "pair"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"$sexpr-bind-exit-tag", &module_info_syntax, "$sexpr-bind-exit-tag"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"seq", &module_info_boot, "seq"},
  {"tup", &module_info_macros, "tup"},
  {"application-function", &module_info_ast, "application-function"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"pushf", &module_info_macros, "pushf"},
  {"ash", &module_info_runtime, "ash"},
  {"quote", &module_info_boot, "quote"},
  {"set-module-environments", &module_info_ast, "set-module-environments"},
  {"port-index", &module_info_runtime, "port-index"},
  {"assocq", &module_info_runtime, "assocq"},
  {"%f+", &module_info_boot, "%f+"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"<port>", &module_info_runtime, "<port>"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"signature-nary?-setter", &module_info_ast, "signature-nary?-setter"},
  {">", &module_info_runtime, ">"},
  {"locals-bindings-setter", &module_info_ast, "locals-bindings-setter"},
  {">=", &module_info_runtime, ">="},
  {"<met>", &module_info_boot, "<met>"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"*print-base*", &module_info_runtime, "*print-base*"},
  {"sub", &module_info_runtime, "sub"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"program-register-setter", &module_info_ast, "program-register-setter"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"<sequential>", &module_info_ast, "<sequential>"},
  {"sexpr-function-definition-variable", &module_info_syntax, "sexpr-function-definition-variable"},
  {"display", &module_info_write, "display"},
  {"from-by", &module_info_runtime, "from-by"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"%str", &module_info_boot, "%str"},
  {"sexpr-method-body", &module_info_syntax, "sexpr-method-body"},
  {"$sexpr-syntax-if-tag", &module_info_syntax, "$sexpr-syntax-if-tag"},
  {"dec", &module_info_macros, "dec"},
  {"identity", &module_info_runtime, "identity"},
  {"<local-reference>", &module_info_ast, "<local-reference>"},
  {"<bound?>", &module_info_ast, "<bound?>"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"bound?", &module_info_boot, "bound?"},
  {"sexpr-slot-variable", &module_info_syntax, "sexpr-slot-variable"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"<incongruent-method-error>", &module_info_runtime, "<incongruent-method-error>"},
  {"logbit?", &module_info_runtime, "logbit?"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"<regular-application>", &module_info_ast, "<regular-application>"},
  {"lsh", &module_info_runtime, "lsh"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"reference-called-function?-setter", &module_info_ast, "reference-called-function?-setter"},
  {"mem?", &module_info_runtime, "mem?"},
  {"lab", &module_info_boot, "lab"},
  {"close-output-port", &module_info_runtime, "close-output-port"},
  {"module-loader-module-type", &module_info_ast, "module-loader-module-type"},
  {"do-static-global-bindings", &module_info_ast, "do-static-global-bindings"},
  {"floor", &module_info_runtime, "floor"},
  {"<ast-function>", &module_info_ast, "<ast-function>"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"reference-called-function?", &module_info_ast, "reference-called-function?"},
  {"find-key", &module_info_runtime, "find-key"},
  {"$char-long-names", &module_info_read, "$char-long-names"},
  {"df", &module_info_boot, "df"},
  {"$permanent-hash-state", &module_info_runtime, "$permanent-hash-state"},
  {"sexpr-make-macro-function", &module_info_syntax, "sexpr-make-macro-function"},
  {"dg", &module_info_boot, "dg"},
  {"tail", &module_info_boot, "tail"},
  {"push-last!", &module_info_runtime, "push-last!"},
  {"%i+", &module_info_boot, "%i+"},
  {"fill", &module_info_runtime, "fill"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"add", &module_info_runtime, "add"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"pop", &module_info_runtime, "pop"},
  {"alter", &module_info_runtime, "alter"},
  {"push", &module_info_runtime, "push"},
  {"collected", &module_info_macros, "collected"},
  {"assignment-form", &module_info_ast, "assignment-form"},
  {"$sexpr-define-tag", &module_info_syntax, "$sexpr-define-tag"},
  {"fab", &module_info_runtime, "fab"},
  {"binding-mutable?", &module_info_ast, "binding-mutable?"},
  {"modulo", &module_info_runtime, "modulo"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"sexpr-if-else", &module_info_syntax, "sexpr-if-else"},
  {"environment-uses-modules", &module_info_ast, "environment-uses-modules"},
  {"%f/", &module_info_boot, "%f/"},
  {"sexpr-variable?", &module_info_syntax, "sexpr-variable?"},
  {"%cu", &module_info_boot, "%cu"},
  {"curry", &module_info_runtime, "curry"},
  {"%iu", &module_info_boot, "%iu"},
  {"id-hash", &module_info_runtime, "id-hash"},
  {"truncate", &module_info_runtime, "truncate"},
  {"signature-value", &module_info_ast, "signature-value"},
  {"build-condition-for-handler-interactively", &module_info_runtime, "build-condition-for-handler-interactively"},
  {"%i^", &module_info_boot, "%i^"},
  {"lst", &module_info_boot, "lst"},
  {"fix-let-arguments", &module_info_ast, "fix-let-arguments"},
  {"assoc", &module_info_runtime, "assoc"},
  {"%vec", &module_info_boot, "%vec"},
  {"now-key", &module_info_runtime, "now-key"},
  {"next-method", &module_info_macros, "next-method"},
  {"<ast-macro-definition>", &module_info_ast, "<ast-macro-definition>"},
  {"empty", &module_info_runtime, "empty"},
  {"do-module-loader-modules", &module_info_ast, "do-module-loader-modules"},
  {"sexpr-unquote?", &module_info_syntax, "sexpr-unquote?"},
  {"init-ast", &module_info_ast, "init-ast"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"<str>", &module_info_boot, "<str>"},
  {"binding-name", &module_info_ast, "binding-name"},
  {"<bind-exit>", &module_info_ast, "<bind-exit>"},
  {"%i&", &module_info_boot, "%i&"},
  {"global-box-value-setter", &module_info_ast, "global-box-value-setter"},
  {"all?", &module_info_runtime, "all?"},
  {"%cb", &module_info_boot, "%cb"},
  {"dm", &module_info_boot, "dm"},
  {"sexpr-isa-init-slots", &module_info_syntax, "sexpr-isa-init-slots"},
  {"logior", &module_info_runtime, "logior"},
  {"del-keys", &module_info_runtime, "del-keys"},
  {"from-above", &module_info_runtime, "from-above"},
  {"signature-names-setter", &module_info_ast, "signature-names-setter"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"default", &module_info_runtime, "default"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"monitor-test", &module_info_ast, "monitor-test"},
  {"<constant>", &module_info_ast, "<constant>"},
  {"any?", &module_info_runtime, "any?"},
  {"sexpr-operands", &module_info_syntax, "sexpr-operands"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"<ast-generic>", &module_info_ast, "<ast-generic>"},
  {"%i<", &module_info_boot, "%i<"},
  {"application-known?", &module_info_ast, "application-known?"},
  {"even?", &module_info_runtime, "even?"},
  {"<fab-list>", &module_info_ast, "<fab-list>"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"<programs>", &module_info_ast, "<programs>"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"floor/", &module_info_runtime, "floor/"},
  {"add-src-path", &module_info_protoSsystem, "add-src-path"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"sexpr-definition-variable", &module_info_syntax, "sexpr-definition-variable"},
  {"%im", &module_info_boot, "%im"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"runtime-environment", &module_info_ast, "runtime-environment"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"%isa", &module_info_boot, "%isa"},
  {"case-insensitive-string-equal", &module_info_runtime, "case-insensitive-string-equal"},
  {"do-named-static-global-bindings", &module_info_ast, "do-named-static-global-bindings"},
  {"binding-dynamic-extent?", &module_info_ast, "binding-dynamic-extent?"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"char->ascii", &module_info_runtime, "char->ascii"},
  {"neg", &module_info_runtime, "neg"},
  {"do", &module_info_runtime, "do"},
  {"add!", &module_info_runtime, "add!"},
  {"inc", &module_info_macros, "inc"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"isa?", &module_info_boot, "isa?"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"apply", &module_info_boot, "apply"},
  {"signature-specs-setter", &module_info_ast, "signature-specs-setter"},
  {"assocs-test", &module_info_runtime, "assocs-test"},
  {"binding-kind", &module_info_ast, "binding-kind"},
  {"sexpr-function-definition-value", &module_info_syntax, "sexpr-function-definition-value"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"reference-binding", &module_info_ast, "reference-binding"},
  {"now-elt", &module_info_runtime, "now-elt"},
  {"-", &module_info_runtime, "-"},
  {"call-with-string-input-port", &module_info_runtime, "call-with-string-input-port"},
  {"<string-port>", &module_info_runtime, "<string-port>"},
  {"%ib", &module_info_boot, "%ib"},
  {"close-input-port", &module_info_runtime, "close-input-port"},
  {"sexpr-loc-bound-names", &module_info_syntax, "sexpr-loc-bound-names"},
  {"%it/", &module_info_boot, "%it/"},
  {"%do-runtime-bindings", &module_info_boot, "%do-runtime-bindings"},
  {"find-environment-module", &module_info_ast, "find-environment-module"},
  {"add-build-path", &module_info_protoSsystem, "add-build-path"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"proto-filename", &module_info_protoSsystem, "proto-filename"},
  {"fun", &module_info_boot, "fun"},
  {"<module-binding>", &module_info_ast, "<module-binding>"},
  {"current-gc-state", &module_info_runtime, "current-gc-state"},
  {"<error>", &module_info_runtime, "<error>"},
  {"$proto-boot-module-name", &module_info_ast, "$proto-boot-module-name"},
  {"<predefined-application>", &module_info_ast, "<predefined-application>"},
  {"<passive-program>", &module_info_ast, "<passive-program>"},
  {"binding-info", &module_info_ast, "binding-info"},
  {"%raw", &module_info_boot, "%raw"},
  {"%ft", &module_info_boot, "%ft"},
  {"monitor-main-thunk", &module_info_ast, "monitor-main-thunk"},
  {"$sexpr-define-method-tag", &module_info_syntax, "$sexpr-define-method-tag"},
  {"==", &module_info_macros, "=="},
  {"application-tail?", &module_info_ast, "application-tail?"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"truncate/", &module_info_runtime, "truncate/"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"*proto-extension*", &module_info_protoSsystem, "*proto-extension*"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"vec", &module_info_runtime, "vec"},
  {"%sb", &module_info_boot, "%sb"},
  {"$proto-runtime-module-name", &module_info_ast, "$proto-runtime-module-name"},
  {"function-value", &module_info_ast, "function-value"},
  {"len-setter", &module_info_runtime, "len-setter"},
  {"<range>", &module_info_runtime, "<range>"},
  {"write-char", &module_info_runtime, "write-char"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"3rd", &module_info_runtime, "3rd"},
  {"sexpr-syntax-if-value", &module_info_syntax, "sexpr-syntax-if-value"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"do-keyed", &module_info_runtime, "do-keyed"},
  {"isa", &module_info_boot, "isa"},
  {"not", &module_info_boot, "not"},
  {"logxor", &module_info_runtime, "logxor"},
  {"del-dups", &module_info_runtime, "del-dups"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"as", &module_info_runtime, "as"},
  {"read-from-string", &module_info_read, "read-from-string"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"application-known?-setter", &module_info_ast, "application-known?-setter"},
  {"$sexpr-locals-tag", &module_info_syntax, "$sexpr-locals-tag"},
  {"signature-bindings", &module_info_ast, "signature-bindings"},
  {"<any>", &module_info_boot, "<any>"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"nxt-state", &module_info_runtime, "nxt-state"},
  {"~=", &module_info_runtime, "~="},
  {"fix-let-body", &module_info_ast, "fix-let-body"},
  {"<global-assignment>", &module_info_ast, "<global-assignment>"},
  {"app-args", &module_info_runtime, "app-args"},
  {"/", &module_info_runtime, "/"},
  {"sexpr-if-then", &module_info_syntax, "sexpr-if-then"},
  {"reduce+", &module_info_runtime, "reduce+"},
  {"<real-reference>", &module_info_ast, "<real-reference>"},
  {"<global-box>", &module_info_ast, "<global-box>"},
  {"<module>", &module_info_ast, "<module>"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"sexpr-text-of-quotation", &module_info_syntax, "sexpr-text-of-quotation"},
  {"fin", &module_info_boot, "fin"},
  {"format-to-string", &module_info_runtime, "format-to-string"},
  {"fabs", &module_info_runtime, "fabs"},
  {"<fix-let>", &module_info_ast, "<fix-let>"},
  {"signature-names", &module_info_ast, "signature-names"},
  {"rev", &module_info_runtime, "rev"},
  {"unwind-protect-protected-thunk", &module_info_ast, "unwind-protect-protected-thunk"},
  {"<list>", &module_info_runtime, "<list>"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"max", &module_info_runtime, "max"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"case-insensitive-string-hash", &module_info_runtime, "case-insensitive-string-hash"},
  {"peek-char", &module_info_runtime, "peek-char"},
  {"ds", &module_info_boot, "ds"},
  {"locals-body", &module_info_ast, "locals-body"},
  {"*path-separator*", &module_info_protoSsystem, "*path-separator*"},
  {"%snul", &module_info_boot, "%snul"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"<=", &module_info_runtime, "<="},
  {"<local-binding>", &module_info_ast, "<local-binding>"},
  {"binding-locative", &module_info_ast, "binding-locative"},
  {"zero?", &module_info_runtime, "zero?"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"binding-value", &module_info_ast, "binding-value"},
  {"<ast-signature>", &module_info_ast, "<ast-signature>"},
  {"sexpr-make-setter-name", &module_info_syntax, "sexpr-make-setter-name"},
  {"uppercase?", &module_info_runtime, "uppercase?"},
  {"map2", &module_info_runtime, "map2"},
  {"$sexpr-let-tag", &module_info_syntax, "$sexpr-let-tag"},
  {"locals-body-setter", &module_info_ast, "locals-body-setter"},
  {"binding-global-box", &module_info_ast, "binding-global-box"},
  {"file-mtime", &module_info_protoSsystem, "file-mtime"},
  {"sexpr-make-anonymous-method", &module_info_syntax, "sexpr-make-anonymous-method"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"+", &module_info_runtime, "+"},
  {"address-of", &module_info_runtime, "address-of"},
  {"%velt", &module_info_boot, "%velt"},
  {"select", &module_info_macros, "select"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"pos", &module_info_runtime, "pos"},
  {"sexpr-let->combination", &module_info_syntax, "sexpr-let->combination"},
  {"<locals>", &module_info_ast, "<locals>"},
  {"$sexpr-if-tag", &module_info_syntax, "$sexpr-if-tag"},
  {"reduce", &module_info_runtime, "reduce"},
  {"load-module", &module_info_ast, "load-module"},
  {"module-syntax-environment", &module_info_ast, "module-syntax-environment"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"function-bindings", &module_info_ast, "function-bindings"},
  {"do3", &module_info_runtime, "do3"},
  {"sexpr-loc-bound-bodies", &module_info_syntax, "sexpr-loc-bound-bodies"},
  {"var-type", &module_info_macros, "var-type"},
  {"%i-", &module_info_boot, "%i-"},
  {"$sexpr-define-syntax-tag", &module_info_syntax, "$sexpr-define-syntax-tag"},
  {"fix-let-bindings-setter", &module_info_ast, "fix-let-bindings-setter"},
  {"<runtime-assignment>", &module_info_ast, "<runtime-assignment>"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"os-binding-value-setter", &module_info_protoSsystem, "os-binding-value-setter"},
  {"open-input-file", &module_info_runtime, "open-input-file"},
  {"reference-frame-offset", &module_info_ast, "reference-frame-offset"},
  {"from", &module_info_runtime, "from"},
  {"dlet", &module_info_macros, "dlet"},
  {"binding-dynamic-extent?-setter", &module_info_ast, "binding-dynamic-extent?-setter"},
  {"$sexpr-unwind-protect-tag", &module_info_syntax, "$sexpr-unwind-protect-tag"},
  {"report-undefined-global-bindings", &module_info_ast, "report-undefined-global-bindings"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"function-binding", &module_info_ast, "function-binding"},
  {"writeln", &module_info_write, "writeln"},
  {"case", &module_info_macros, "case"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"sexpr-function-signature", &module_info_syntax, "sexpr-function-signature"},
  {"eof-object", &module_info_runtime, "eof-object"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"1st", &module_info_runtime, "1st"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"$sexpr-method-tag", &module_info_syntax, "$sexpr-method-tag"},
  {"sexpr-variable-type", &module_info_syntax, "sexpr-variable-type"},
  {"fix-let-bindings", &module_info_ast, "fix-let-bindings"},
  {"*proto-root*", &module_info_protoSsystem, "*proto-root*"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"force-output", &module_info_runtime, "force-output"},
  {"unwind-protect-cleanup-thunk", &module_info_ast, "unwind-protect-cleanup-thunk"},
  {"sexpr-block-name", &module_info_syntax, "sexpr-block-name"},
  {"load-in", &module_info_ast, "load-in"},
  {"reference-frame-number", &module_info_ast, "reference-frame-number"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"write-to-string", &module_info_write, "write-to-string"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"sexpr-isa-parents", &module_info_syntax, "sexpr-isa-parents"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"gensym", &module_info_macros, "gensym"},
  {"$sexpr-quasiquote-tag", &module_info_syntax, "$sexpr-quasiquote-tag"},
  {"sexpr-make-setter", &module_info_syntax, "sexpr-make-setter"},
  {"assqn", &module_info_runtime, "assqn"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"object-direct-parents", &module_info_boot, "object-direct-parents"},
  {"binding-module-name", &module_info_ast, "binding-module-name"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"logand", &module_info_runtime, "logand"},
  {"table-protocol", &module_info_runtime, "table-protocol"},
  {"sexpr-monitor-expand", &module_info_syntax, "sexpr-monitor-expand"},
  {"sexpr-loc-raw-body", &module_info_syntax, "sexpr-loc-raw-body"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"<application>", &module_info_ast, "<application>"},
  {"signature-bindings-setter", &module_info_ast, "signature-bindings-setter"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"call-with-output-file", &module_info_runtime, "call-with-output-file"},
  {"components-parent-directory", &module_info_protoSsystem, "components-parent-directory"},
  {"$sexpr-isa-tag", &module_info_syntax, "$sexpr-isa-tag"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"components-to-pathname", &module_info_protoSsystem, "components-to-pathname"},
  {"*", &module_info_runtime, "*"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"always", &module_info_runtime, "always"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"cat", &module_info_macros, "cat"},
  {"sexpr-bind-pattern-variables", &module_info_syntax, "sexpr-bind-pattern-variables"},
  {"function-signature-setter", &module_info_ast, "function-signature-setter"},
  {"<num>", &module_info_boot, "<num>"},
  {"describe-handler", &module_info_runtime, "describe-handler"},
  {"sexpr-unquote-splicing?", &module_info_syntax, "sexpr-unquote-splicing?"},
  {"c-filename", &module_info_protoSsystem, "c-filename"},
  {"pathname-to-components", &module_info_protoSsystem, "pathname-to-components"},
  {"file-exists?", &module_info_protoSsystem, "file-exists?"},
  {"str", &module_info_runtime, "str"},
  {"bind-exit-main-fun", &module_info_ast, "bind-exit-main-fun"},
  {"<string-output-port>", &module_info_runtime, "<string-output-port>"},
  {"$sexpr-quote-tag", &module_info_syntax, "$sexpr-quote-tag"},
  {"os-name", &module_info_protoSsystem, "os-name"},
  {"objectify-quotation", &module_info_ast, "objectify-quotation"},
  {"monitor-type", &module_info_ast, "monitor-type"},
  {"alphabetic?", &module_info_runtime, "alphabetic?"},
  {"loc", &module_info_boot, "loc"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"sexpr-slot-object", &module_info_syntax, "sexpr-slot-object"},
  {"pick", &module_info_runtime, "pick"},
  {"from-to-by", &module_info_runtime, "from-to-by"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"assoc-value", &module_info_runtime, "assoc-value"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"in", &module_info_runtime, "in"},
  {"module-name", &module_info_ast, "module-name"},
  {"map-keyed", &module_info_runtime, "map-keyed"},
  {"sexpr-iterate->loc", &module_info_syntax, "sexpr-iterate->loc"},
  {"call-with-input-file", &module_info_runtime, "call-with-input-file"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"signature-specs", &module_info_ast, "signature-specs"},
  {"<arguments>", &module_info_ast, "<arguments>"},
  {"open-output-file", &module_info_runtime, "open-output-file"},
  {"out", &module_info_runtime, "out"},
  {"%c=", &module_info_boot, "%c="},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"os-binding-value", &module_info_protoSsystem, "os-binding-value"},
  {"parent-directory", &module_info_protoSsystem, "parent-directory"},
  {"sexpr-operator", &module_info_syntax, "sexpr-operator"},
  {"and", &module_info_macros, "and"},
  {"sexpr-syntax-if-pattern", &module_info_syntax, "sexpr-syntax-if-pattern"},
  {"function-signature", &module_info_ast, "function-signature"},
  {"ct", &module_info_boot, "ct"},
  {"fix-let-arguments-setter", &module_info_ast, "fix-let-arguments-setter"},
  {"odd?", &module_info_runtime, "odd?"},
  {"now-elt-setter", &module_info_runtime, "now-elt-setter"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"nil", &module_info_boot, "nil"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"binding-global-box-setter", &module_info_ast, "binding-global-box-setter"},
  {"function-body", &module_info_ast, "function-body"},
  {"for", &module_info_macros, "for"},
  {"components-last", &module_info_protoSsystem, "components-last"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"round/", &module_info_runtime, "round/"},
  {"object-direct-slots", &module_info_boot, "object-direct-slots"},
  {"mif", &module_info_boot, "mif"},
  {"abs", &module_info_runtime, "abs"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"%i=", &module_info_boot, "%i="},
  {"cat2", &module_info_runtime, "cat2"},
  {"ast-define-binding", &module_info_ast, "ast-define-binding"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"$sexpr-define-function-tag", &module_info_syntax, "$sexpr-define-function-tag"},
  {"sexpr-signature-value", &module_info_syntax, "sexpr-signature-value"},
  {"%slen", &module_info_boot, "%slen"},
  {"binding-type", &module_info_ast, "binding-type"},
  {"fix-let-types-setter", &module_info_ast, "fix-let-types-setter"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"<static-global-environment>", &module_info_ast, "<static-global-environment>"},
  {"%slot", &module_info_boot, "%slot"},
  {"str-to-num", &module_info_runtime, "str-to-num"},
  {"fix-let-types", &module_info_ast, "fix-let-types"},
  {"sexpr-syntax-if-then", &module_info_syntax, "sexpr-syntax-if-then"},
  {"head", &module_info_boot, "head"},
  {"lognot", &module_info_runtime, "lognot"},
  {"sexpr-syntax-if-else", &module_info_syntax, "sexpr-syntax-if-else"},
  {"<local-assignment>", &module_info_ast, "<local-assignment>"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"slot", &module_info_boot, "slot"},
  {"ascii-limit", &module_info_runtime, "ascii-limit"},
  {"components-basename", &module_info_protoSsystem, "components-basename"},
  {"$sexpr-iterate-tag", &module_info_syntax, "$sexpr-iterate-tag"},
  {"sig", &module_info_runtime, "sig"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"elt", &module_info_runtime, "elt"},
  {"first-then", &module_info_runtime, "first-then"},
  {"<global-reference>", &module_info_ast, "<global-reference>"},
  {"%f*", &module_info_boot, "%f*"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"to-str", &module_info_runtime, "to-str"},
  {"sexpr-function-body", &module_info_syntax, "sexpr-function-body"},
  {"binding-info-setter", &module_info_ast, "binding-info-setter"},
  {"collect", &module_info_macros, "collect"},
  {"num-to-str", &module_info_runtime, "num-to-str"},
  {"<map>", &module_info_runtime, "<map>"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"read", &module_info_runtime, "read"},
  {"sexpr-if-test", &module_info_syntax, "sexpr-if-test"},
  {"constant-value", &module_info_ast, "constant-value"},
  {"write-string", &module_info_runtime, "write-string"},
  {"<tab>", &module_info_runtime, "<tab>"},
  {"%f<", &module_info_boot, "%f<"},
  {"probe-directory", &module_info_protoSsystem, "probe-directory"},
  {"free-implemented-foreign-bindings", &module_info_ast, "free-implemented-foreign-bindings"},
  {"from-above-by", &module_info_runtime, "from-above-by"},
  {"build-condition-interactively", &module_info_runtime, "build-condition-interactively"},
  {"<restart>", &module_info_runtime, "<restart>"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"<str-tab>", &module_info_runtime, "<str-tab>"},
  {"assignment-reference", &module_info_ast, "assignment-reference"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"%c<", &module_info_boot, "%c<"},
  {"table-growth-factor", &module_info_runtime, "table-growth-factor"},
  {"dss", &module_info_boot, "dss"},
  {"from-below-by", &module_info_runtime, "from-below-by"},
  {"def-list", &module_info_ast, "def-list"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"del-key", &module_info_runtime, "del-key"},
  {"del", &module_info_runtime, "del"},
  {"eval", &module_info_syntax, "eval"},
  {"monitor-handler", &module_info_ast, "monitor-handler"},
  {"binding-native-to?", &module_info_ast, "binding-native-to?"},
  {"<file-port>", &module_info_runtime, "<file-port>"},
  {"sexpr-unwind-protect-protected-form", &module_info_syntax, "sexpr-unwind-protect-protected-form"},
  {"global-box-value", &module_info_ast, "global-box-value"},
  {"%fb", &module_info_boot, "%fb"},
  {"from-to", &module_info_runtime, "from-to"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"rep", &module_info_boot, "rep"},
  {"last", &module_info_runtime, "last"},
  {"%f=", &module_info_boot, "%f="},
  {"object-name", &module_info_write, "object-name"},
  {"%bb", &module_info_boot, "%bb"},
  {"sexpr-definition-value", &module_info_syntax, "sexpr-definition-value"},
  {"<step>", &module_info_runtime, "<step>"},
  {"min", &module_info_runtime, "min"},
  {"sequentialize", &module_info_ast, "sequentialize"},
  {"format", &module_info_runtime, "format"},
  {"sub-setter", &module_info_runtime, "sub-setter"},
  {"<binding>", &module_info_ast, "<binding>"},
  {"alternative-consequent", &module_info_ast, "alternative-consequent"},
  {"type-error", &module_info_boot, "type-error"},
  {"sexpr-make-begin", &module_info_syntax, "sexpr-make-begin"},
  {"%iv", &module_info_boot, "%iv"},
  {"<reference>", &module_info_ast, "<reference>"},
  {"program-register", &module_info_ast, "program-register"},
  {"flo-bits", &module_info_runtime, "flo-bits"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"fab-p2c-module", &module_info_ast, "fab-p2c-module"},
  {"use", &module_info_boot, "use"},
  {"application-arguments", &module_info_ast, "application-arguments"},
  {"%i*", &module_info_boot, "%i*"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"write", &module_info_write, "write"},
  {"collecting", &module_info_macros, "collecting"},
  {"module-name-to-relpath", &module_info_ast, "module-name-to-relpath"},
  {"objectify", &module_info_ast, "objectify"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"<traits>", &module_info_boot, "<traits>"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"numeric?", &module_info_runtime, "numeric?"},
  {"hierarchical-components", &module_info_protoSsystem, "hierarchical-components"},
  {"len", &module_info_runtime, "len"},
  {"nul", &module_info_boot, "nul"},
  {"empty?", &module_info_macros, "empty?"},
  {"label-components", &module_info_protoSsystem, "label-components"},
  {"%call-next-method", &module_info_boot, "%call-next-method"},
  {"as-lowercase", &module_info_runtime, "as-lowercase"},
  {"rev!", &module_info_runtime, "rev!"},
  {"<file-input-port>", &module_info_runtime, "<file-input-port>"},
  {"set", &module_info_boot, "set"},
  {"nul?", &module_info_runtime, "nul?"},
  {"lowercase?", &module_info_runtime, "lowercase?"},
  {"function-debug-name", &module_info_ast, "function-debug-name"},
  {"sexpr-make-application", &module_info_syntax, "sexpr-make-application"},
  {"table-shrink-threshold", &module_info_runtime, "table-shrink-threshold"},
  {"<file-output-port>", &module_info_runtime, "<file-output-port>"},
  {"remove-modules-by-name!", &module_info_ast, "remove-modules-by-name!"},
  {"create-directory", &module_info_protoSsystem, "create-directory"},
  {"def-programs", &module_info_ast, "def-programs"},
  {"install-initial-bindings", &module_info_ast, "install-initial-bindings"},
  {"%selt", &module_info_boot, "%selt"},
  {"read-char", &module_info_runtime, "read-char"},
  {"<module-loader>", &module_info_ast, "<module-loader>"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"buf", &module_info_runtime, "buf"},
  {"<ast-primitive-definition>", &module_info_ast, "<ast-primitive-definition>"},
  {"*obj-extension*", &module_info_protoSsystem, "*obj-extension*"},
  {"<unwind-protect>", &module_info_ast, "<unwind-protect>"},
  {"*exe-extension*", &module_info_protoSsystem, "*exe-extension*"},
  {"sexpr-signature-parameters", &module_info_syntax, "sexpr-signature-parameters"},
  {"list", &module_info_runtime, "list"},
  {"invoke-handler-interactively", &module_info_runtime, "invoke-handler-interactively"},
  {"<ast-method>", &module_info_ast, "<ast-method>"},
  {"newline", &module_info_runtime, "newline"},
  {"neg?", &module_info_runtime, "neg?"},
  {"unless", &module_info_macros, "unless"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"top-in", &YtopYtop_in},
  {"parse-in", &YtopYparse_in},
  {"backtrace", &YtopYbacktrace},
  {"top", &YtopYtop},
  {"str-eval-in", &YtopYstr_eval_in},
  {"eval-in", &YtopYeval_in},
  {"str-eval", &YtopYstr_eval},
  {"str-parse-in", &YtopYstr_parse_in},
  {"do-restart", &YtopYdo_restart},
  {"print-result-expression", &YtopYprint_result_expression},
  {"parse", &YtopYparse},
  {"do-stack-frames", &YtopYdo_stack_frames},
  {"load-from", &YtopYload_from},
  {"---main-0---", NULL},
  {"prompt-for-command-expression", &YtopYprompt_for_command_expression},
  {"str-parse", &YtopYstr_parse},
  {"<keyboard-interrupt>", &YtopYLkeyboard_interruptG},
  {"read-file", &YtopYread_file},
  {"load", &YtopYload},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"parse-in", "parse-in"},
  {"backtrace", "backtrace"},
  {"top", "top"},
  {"do-stack-frames", "do-stack-frames"},
  {"eval", "eval"},
  {"read-file", "read-file"},
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
extern void load_module_ast_eval (void);
extern void load_module_protoSsystem (void);

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
  load_module_ast_eval();
  load_module_protoSsystem();

  (P)YtopY___main_0___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
