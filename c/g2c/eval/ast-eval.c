/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: ast-eval */

EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YastYbinding_value_setter,"ast","binding-value-setter");
EXT(YastYfunction_body_setter,"ast","function-body-setter");
EXT(YastYcompile_time_program,"ast","compile-time-program");
EXT(YastYmonitor_info,"ast","monitor-info");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YastYLdefinitionG,"ast","<definition>");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(YLlstG,"boot","<lst>");
EXT(YLsigG,"boot","<sig>");
EXT(YastYsignature_naryQ,"ast","signature-nary?");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
EXT(YastYLcomputed_programG,"ast","<computed-program>");
EXT(YruntimeYassq,"runtime","assq");
DEF(Yast_evalYenv_runtime_value_setter,"ast-eval","env-runtime-value-setter");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YruntimeYE,"runtime","=");
EXT(Yslot_init,"boot","slot-init");
EXT(YastYassignment_binding,"ast","assignment-binding");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YastYmodule_target_environment,"ast","module-target-environment");
DEF(Yast_evalYenv_frameX,"ast-eval","env-frame!");
EXT(YmacrosYmap,"macros","map");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YastYLast_primitiveG,"ast","<ast-primitive>");
EXT(YastYLmonitorG,"ast","<monitor>");
EXT(YastYfunction_debug_name_setter,"ast","function-debug-name-setter");
EXT(YastYboundQ_reference,"ast","bound?-reference");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(Yfapply,"boot","fapply");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YastYmodule_exports,"ast","module-exports");
EXT(YLvecG,"boot","<vec>");
EXT(YastYlocals_functions_setter,"ast","locals-functions-setter");
EXT(YLintG,"boot","<int>");
EXT(YastYalternative_condition,"ast","alternative-condition");
EXT(YLlogG,"boot","<log>");
EXT(YruntimeYdo2,"runtime","do2");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(YastYlocals_functions,"ast","locals-functions");
DEF(Yast_evalYenv_binding_value,"ast-eval","env-binding-value");
EXT(YastYLprogramG,"ast","<program>");
EXT(YastYapplication_binding,"ast","application-binding");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YastYsignature_value_setter,"ast","signature-value-setter");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YruntimeYround,"runtime","round");
EXT(YobjectL,"boot","object<");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YastYLast_primitive_definitionG,"ast","<ast-primitive-definition>");
DEF(Yast_evalYTstackT,"ast-eval","*stack*");
DEF(Yast_evalYenv_runtime_value,"ast-eval","env-runtime-value");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
EXT(YruntimeYtype_or,"runtime","type-or");
EXT(YastYprobe_module,"ast","probe-module");
EXT(YastYLruntime_referenceG,"ast","<runtime-reference>");
EXT(YruntimeYto_digit,"runtime","to-digit");
EXT(YastYfunction_naryQ,"ast","function-nary?");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(Yfun_name,"boot","fun-name");
EXT(YastYLcompile_timeG,"ast","<compile-time>");
EXT(YruntimeYL,"runtime","<");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(Yfab_sym,"boot","fab-sym");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YruntimeYcopy_state,"runtime","copy-state");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YruntimeYceiling,"runtime","ceiling");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YastYalternative_alternant,"ast","alternative-alternant");
EXT(YruntimeYPwith_monitor,"runtime","%with-monitor");
DEF(Yast_evalYenv_local_value_setter,"ast-eval","env-local-value-setter");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YruntimeYkeys,"runtime","keys");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(YastYmodule_binding,"ast","module-binding");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YastYLraw_constantG,"ast","<raw-constant>");
EXT(YLcolG,"boot","<col>");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YastYbinding_type_setter,"ast","binding-type-setter");
DEF(Yast_evalYas_fun_name,"ast-eval","as-fun-name");
EXT(YastYfix_let_body_setter,"ast","fix-let-body-setter");
EXT(YPsymbols,"boot","%symbols");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YastYdo_module_loader_modules,"ast","do-module-loader-modules");
EXT(YastYLalternativeG,"ast","<alternative>");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(YastYast_evaluate,"ast","ast-evaluate");
EXT(YastYlocals_bindings,"ast","locals-bindings");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(Yerror,"boot","error");
EXT(YwriteYenv_object_name,"write","env-object-name");
EXT(YmacrosYpair,"macros","pair");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(Ysig_value,"boot","sig-value");
EXT(YmacrosYtup,"macros","tup");
EXT(YastYapplication_function,"ast","application-function");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YruntimeYash,"runtime","ash");
EXT(YastYset_module_environments,"ast","set-module-environments");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(YruntimeYassocq,"runtime","assocq");
EXT(YruntimeYLportG,"runtime","<port>");
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
EXT(YruntimeYfrom_by,"runtime","from-by");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YastYLlocal_referenceG,"ast","<local-reference>");
EXT(YastYLboundQG,"ast","<bound?>");
EXT(YmacrosYmake_sym,"macros","make-sym");
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
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
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
EXT(YruntimeYfab,"runtime","fab");
EXT(YastYbinding_mutableQ,"ast","binding-mutable?");
EXT(YruntimeYmodulo,"runtime","modulo");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(YastYenvironment_uses_modules,"ast","environment-uses-modules");
EXT(YastYinit_environment_for_eval,"ast","init-environment-for-eval");
EXT(YruntimeYcurry,"runtime","curry");
DEF(Yast_evalYenv_parent_setter,"ast-eval","env-parent-setter");
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
EXT(YastYinit_ast,"ast","init-ast");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YLstrG,"boot","<str>");
EXT(YastYbinding_name,"ast","binding-name");
EXT(YastYglobal_box_value_setter,"ast","global-box-value-setter");
DEF(Yast_evalYenv_global_binding_value_setter,"ast-eval","env-global-binding-value-setter");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YruntimeYlogior,"runtime","logior");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(YruntimeYfrom_above,"runtime","from-above");
EXT(YastYsignature_names_setter,"ast","signature-names-setter");
EXT(YruntimeYdefault,"runtime","default");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YastYmonitor_test,"ast","monitor-test");
EXT(YastYLconstantG,"ast","<constant>");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(YastYLprogramsG,"ast","<programs>");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YastYLast_genericG,"ast","<ast-generic>");
EXT(YastYapplication_knownQ,"ast","application-known?");
EXT(YruntimeYevenQ,"runtime","even?");
EXT(YastYLfab_listG,"ast","<fab-list>");
EXT(Ytail_setter,"boot","tail-setter");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YruntimeYfloorS,"runtime","floor/");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(Ysig_names,"boot","sig-names");
EXT(YastYruntime_environment,"ast","runtime-environment");
DEF(Yast_evalYLloc_envG,"ast-eval","<loc-env>");
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
EXT(Yobject_parents,"boot","object-parents");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(YastYreference_binding,"ast","reference-binding");
EXT(YruntimeYnow_elt,"runtime","now-elt");
EXT(YruntimeY_,"runtime","-");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(YastYfind_environment_module,"ast","find-environment-module");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YastYLmodule_bindingG,"ast","<module-binding>");
EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(YastYDproto_boot_module_name,"ast","$proto-boot-module-name");
EXT(YastYLpredefined_applicationG,"ast","<predefined-application>");
EXT(YastYLpassive_programG,"ast","<passive-program>");
EXT(YastYbinding_info,"ast","binding-info");
EXT(YastYmonitor_main_thunk,"ast","monitor-main-thunk");
EXT(YmacrosYEE,"macros","==");
EXT(YastYapplication_tailQ,"ast","application-tail?");
EXT(YLlocG,"boot","<loc>");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YruntimeYvec,"runtime","vec");
EXT(YastYDproto_runtime_module_name,"ast","$proto-runtime-module-name");
EXT(YastYfunction_value,"ast","function-value");
EXT(YruntimeYlen_setter,"runtime","len-setter");
EXT(YruntimeYLrangeG,"runtime","<range>");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");
DEF(Yast_evalYenv_local_value,"ast-eval","env-local-value");
EXT(Ynot,"boot","not");
EXT(YruntimeYlogxor,"runtime","logxor");
EXT(YruntimeYdel_dups,"runtime","del-dups");
DEF(Yast_evalYDnul_loc_env,"ast-eval","$nul-loc-env");
EXT(YruntimeYas,"runtime","as");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YastYapplication_knownQ_setter,"ast","application-known?-setter");
EXT(YastYsignature_bindings,"ast","signature-bindings");
EXT(YLanyG,"boot","<any>");
DEF(Yast_evalYenv_function_setter,"ast-eval","env-function-setter");
EXT(YLfunG,"boot","<fun>");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
EXT(YruntimeYNE,"runtime","~=");
EXT(YastYfix_let_body,"ast","fix-let-body");
EXT(YastYLglobal_assignmentG,"ast","<global-assignment>");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YruntimeYS,"runtime","/");
EXT(YruntimeYreduceA,"runtime","reduce+");
EXT(YastYLreal_referenceG,"ast","<real-reference>");
EXT(YastYLglobal_boxG,"ast","<global-box>");
EXT(YastYLmoduleG,"ast","<module>");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(YastYLfix_letG,"ast","<fix-let>");
EXT(YastYsignature_names,"ast","signature-names");
EXT(YruntimeYrev,"runtime","rev");
DEF(Yast_evalYenv_global_binding_value,"ast-eval","env-global-binding-value");
EXT(YastYunwind_protect_protected_thunk,"ast","unwind-protect-protected-thunk");
EXT(YruntimeYLlistG,"runtime","<list>");
EXT(YruntimeYmax,"runtime","max");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Yobject_slots,"boot","object-slots");
EXT(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YastYlocals_body,"ast","locals-body");
EXT(YPsnul,"boot","%snul");
EXT(YLsymG,"boot","<sym>");
EXT(YruntimeYLE,"runtime","<=");
EXT(YastYLlocal_bindingG,"ast","<local-binding>");
EXT(YastYbinding_locative,"ast","binding-locative");
EXT(YruntimeYzeroQ,"runtime","zero?");
EXT(Yslot_type,"boot","slot-type");
EXT(YastYbinding_value,"ast","binding-value");
EXT(YastYLast_signatureG,"ast","<ast-signature>");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(YruntimeYmap2,"runtime","map2");
EXT(YastYlocals_body_setter,"ast","locals-body-setter");
EXT(YastYbinding_global_box,"ast","binding-global-box");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYA,"runtime","+");
EXT(YruntimeYaddress_of,"runtime","address-of");
DEF(Yast_evalYast_eval_boundQ,"ast-eval","ast-eval-bound?");
EXT(YruntimeYpos,"runtime","pos");
EXT(YastYLbind_exitG,"ast","<bind-exit>");
EXT(YastYLlocalsG,"ast","<locals>");
EXT(YruntimeYreduce,"runtime","reduce");
EXT(YastYload_module,"ast","load-module");
EXT(YastYmodule_syntax_environment,"ast","module-syntax-environment");
EXT(Yfind_setter,"boot","find-setter");
EXT(YastYfunction_bindings,"ast","function-bindings");
EXT(YruntimeYdo3,"runtime","do3");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YastYfix_let_bindings_setter,"ast","fix-let-bindings-setter");
EXT(YastYLruntime_assignmentG,"ast","<runtime-assignment>");
EXT(YPPmacro,"boot","%%macro");
DEF(Yast_evalYenv_names_setter,"ast-eval","env-names-setter");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
EXT(YastYreference_frame_offset,"ast","reference-frame-offset");
EXT(YruntimeYfrom,"runtime","from");
EXT(YastYbinding_dynamic_extentQ_setter,"ast","binding-dynamic-extent?-setter");
EXT(YastYreport_undefined_global_bindings,"ast","report-undefined-global-bindings");
EXT(YastYfunction_binding,"ast","function-binding");
EXT(YruntimeYeof_object,"runtime","eof-object");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YruntimeY1st,"runtime","1st");
EXT(YastYfix_let_bindings,"ast","fix-let-bindings");
DEF(Yast_evalYenv_binding_value_setter,"ast-eval","env-binding-value-setter");
EXT(YLchrG,"boot","<chr>");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(YastYunwind_protect_cleanup_thunk,"ast","unwind-protect-cleanup-thunk");
EXT(YastYload_in,"ast","load-in");
EXT(YastYreference_frame_number,"ast","reference-frame-number");
EXT(Ysym_name,"boot","sym-name");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YPdefine_method,"boot","%define-method");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YruntimeYassqn,"runtime","assqn");
EXT(Yslot_getter,"boot","slot-getter");
EXT(Yobject_direct_parents,"boot","object-direct-parents");
EXT(YastYbinding_module_name,"ast","binding-module-name");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YruntimeYlogand,"runtime","logand");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YastYLapplicationG,"ast","<application>");
EXT(YastYsignature_bindings_setter,"ast","signature-bindings-setter");
EXT(Yhandler_info_message,"boot","handler-info-message");
DEF(Yast_evalYenv_global_binding_boundQ,"ast-eval","env-global-binding-bound?");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
EXT(YruntimeYT,"runtime","*");
EXT(YruntimeYalways,"runtime","always");
EXT(YmacrosYcat,"macros","cat");
EXT(YastYfunction_signature_setter,"ast","function-signature-setter");
EXT(YLnumG,"boot","<num>");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
DEF(Yast_evalYenv_parent,"ast-eval","env-parent");
DEF(Yast_evalYenv_values_setter,"ast-eval","env-values-setter");
EXT(YruntimeYstr,"runtime","str");
EXT(YastYbind_exit_main_fun,"ast","bind-exit-main-fun");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
DEF(Yast_evalYenv_local_reference_value_setter,"ast-eval","env-local-reference-value-setter");
DEF(Yast_evalYast_eval_specs,"ast-eval","ast-eval-specs");
EXT(YastYobjectify_quotation,"ast","objectify-quotation");
EXT(YastYmonitor_type,"ast","monitor-type");
DEF(Yast_evalYenv_function,"ast-eval","env-function");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YruntimeYpick,"runtime","pick");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YruntimeYin,"runtime","in");
EXT(YastYmodule_name,"ast","module-name");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YastYsignature_specs,"ast","signature-specs");
EXT(YastYLargumentsG,"ast","<arguments>");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
EXT(YruntimeYout,"runtime","out");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YastYfunction_signature,"ast","function-signature");
EXT(YastYfix_let_arguments_setter,"ast","fix-let-arguments-setter");
EXT(YruntimeYoddQ,"runtime","odd?");
EXT(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
EXT(Ynil,"boot","nil");
EXT(YLseqG,"boot","<seq>");
EXT(YastYbinding_global_box_setter,"ast","binding-global-box-setter");
EXT(YastYfunction_body,"ast","function-body");
EXT(Yfind_getter,"boot","find-getter");
EXT(YruntimeYroundS,"runtime","round/");
EXT(Yobject_direct_slots,"boot","object-direct-slots");
EXT(YruntimeYabs,"runtime","abs");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(YastYast_define_binding,"ast","ast-define-binding");
EXT(YLgenG,"boot","<gen>");
EXT(YastYbinding_type,"ast","binding-type");
EXT(YastYfix_let_types_setter,"ast","fix-let-types-setter");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YastYLstatic_global_environmentG,"ast","<static-global-environment>");
EXT(YPslot,"boot","%slot");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(YastYfix_let_types,"ast","fix-let-types");
EXT(Yhead,"boot","head");
EXT(YruntimeYlognot,"runtime","lognot");
EXT(YastYLlocal_assignmentG,"ast","<local-assignment>");
EXT(Yslot_value,"boot","slot-value");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
DEF(Yast_evalYexport_proto_method,"ast-eval","export-proto-method");
EXT(YruntimeYsig,"runtime","sig");
EXT(Yfun_value,"boot","fun-value");
EXT(Ysig_specs,"boot","sig-specs");
EXT(Yfun_names,"boot","fun-names");
EXT(YruntimeYelt,"runtime","elt");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YastYLglobal_referenceG,"ast","<global-reference>");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YastYbinding_info_setter,"ast","binding-info-setter");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(Yadd_slot,"boot","add-slot");
EXT(YruntimeYread,"runtime","read");
EXT(YastYconstant_value,"ast","constant-value");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(YastYfree_implemented_foreign_bindings,"ast","free-implemented-foreign-bindings");
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
EXT(YastYassignment_reference,"ast","assignment-reference");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
DEF(Yast_evalYenv_values,"ast-eval","env-values");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(YruntimeYdel,"runtime","del");
EXT(YastYmonitor_handler,"ast","monitor-handler");
EXT(YastYbinding_native_toQ,"ast","binding-native-to?");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YastYglobal_box_value,"ast","global-box-value");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(YruntimeYlast,"runtime","last");
EXT(YruntimeYLstepG,"runtime","<step>");
EXT(YruntimeYmin,"runtime","min");
EXT(YastYsequentialize,"ast","sequentialize");
DEF(Yast_evalYenv_local_reference_value,"ast-eval","env-local-reference-value");
EXT(YruntimeYformat,"runtime","format");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
EXT(YastYLbindingG,"ast","<binding>");
EXT(YastYalternative_consequent,"ast","alternative-consequent");
EXT(Ytype_error,"boot","type-error");
EXT(YastYLreferenceG,"ast","<reference>");
EXT(YastYprogram_register,"ast","program-register");
EXT(YruntimeYflo_bits,"runtime","flo-bits");
EXT(YastYfab_p2c_module,"ast","fab-p2c-module");
EXT(YastYapplication_arguments,"ast","application-arguments");
EXT(YruntimeYmake_handler,"runtime","make-handler");
DEF(Yast_evalYenv_names,"ast-eval","env-names");
EXT(YastYmodule_name_to_relpath,"ast","module-name-to-relpath");
EXT(YastYobjectify,"ast","objectify");
EXT(Yhead_setter,"boot","head-setter");
EXT(YLtraitsG,"boot","<traits>");
EXT(YLslotG,"boot","<slot>");
EXT(YruntimeYnumericQ,"runtime","numeric?");
DEF(Yast_evalYenv_define_bindingX,"ast-eval","env-define-binding!");
EXT(YruntimeYlen,"runtime","len");
EXT(Ynul,"boot","nul");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YPcall_next_method,"boot","%call-next-method");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YruntimeYLfile_input_portG,"runtime","<file-input-port>");
DEF(Yast_evalYast_eval,"ast-eval","ast-eval");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
EXT(YastYfunction_debug_name,"ast","function-debug-name");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
EXT(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
EXT(YastYremove_modules_by_nameX,"ast","remove-modules-by-name!");
EXT(YastYinstall_initial_bindings,"ast","install-initial-bindings");
EXT(YruntimeYread_char,"runtime","read-char");
EXT(YastYLmodule_loaderG,"ast","<module-loader>");
EXT(YLfloG,"boot","<flo>");
EXT(YruntimeYbuf,"runtime","buf");
EXT(YastYLunwind_protectG,"ast","<unwind-protect>");
EXT(YruntimeYlist,"runtime","list");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(YastYLast_methodG,"ast","<ast-method>");
EXT(YruntimeYnewline,"runtime","newline");
EXT(YruntimeYnegQ,"runtime","neg?");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_25);
DEFLIT(lit_38);
DEFLIT(lit_21);
DEFLIT(lit_16);
DEFLIT(lit_12);
DEFLIT(lit_19);
DEFLIT(lit_14);
DEFLIT(lit_2);
DEFLIT(lit_81);
DEFLIT(lit_50);
DEFLIT(lit_3);
DEFLIT(lit_72);
DEFLIT(lit_22);
DEFLIT(lit_57);
DEFLIT(lit_35);
DEFLIT(lit_6);
DEFLIT(lit_60);
DEFLIT(lit_17);
DEFLIT(lit_51);
DEFLIT(lit_67);
DEFLIT(lit_37);
DEFLIT(lit_46);
DEFLIT(lit_70);
DEFLIT(lit_48);
DEFLIT(lit_44);
DEFLIT(lit_74);
DEFLIT(lit_52);
DEFLIT(lit_45);
DEFLIT(lit_4);
DEFLIT(lit_34);
DEFLIT(lit_80);
DEFLIT(lit_26);
DEFLIT(lit_54);
DEFLIT(lit_55);
DEFLIT(lit_28);
DEFLIT(lit_11);
DEFLIT(lit_58);
DEFLIT(lit_41);
DEFLIT(lit_66);
DEFLIT(lit_40);
DEFLIT(lit_27);
DEFLIT(lit_7);
DEFLIT(lit_65);
DEFLIT(lit_69);
DEFLIT(lit_31);
DEFLIT(lit_13);
DEFLIT(lit_53);
DEFLIT(lit_43);
DEFLIT(lit_63);
DEFLIT(lit_76);
DEFLIT(lit_23);
DEFLIT(lit_71);
DEFLIT(lit_29);
DEFLIT(lit_62);
DEFLIT(lit_79);
DEFLIT(lit_20);
DEFLIT(lit_1);
DEFLIT(lit_0);
DEFLIT(lit_10);
DEFLIT(lit_73);
DEFLIT(lit_18);
DEFLIT(lit_47);
DEFLIT(lit_75);
DEFLIT(lit_49);
DEFLIT(lit_15);
DEFLIT(lit_32);
DEFLIT(lit_68);
DEFLIT(lit_39);
DEFLIT(lit_64);
DEFLIT(lit_59);
DEFLIT(lit_24);
DEFLIT(lit_61);
DEFLIT(lit_56);
DEFLIT(lit_42);
DEFLIT(lit_9);
DEFLIT(lit_8);
DEFLIT(lit_30);
DEFLIT(lit_33);
DEFLIT(lit_36);
DEFLIT(lit_5);
DEFLIT(lit_77);
DEFLIT(lit_78);

/* FUNCTIONS: */

LOCFOR(fun_0);
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
LOCFOR(fun_loop_22);
LOCFOR(fun_23);
LOCFOR(fun_24);
LOCFOR(fun_25);
LOCFOR(fun_26);
LOCFOR(fun_27);
LOCFOR(fun_loop_28);
LOCFOR(fun_29);
LOCFOR(fun_x_1263_30);
LOCFOR(fun_31);
LOCFOR(fun_32);
LOCFOR(fun_33);
LOCFOR(fun_34);
LOCFOR(fun_35);
LOCFOR(fun_36);
LOCFOR(fun_37);
LOCFOR(fun_38);
LOCFOR(fun_39);
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
LOCFOR(fun_53);
LOCFOR(fun_54);
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
LOCFOR(fun_eval_68);
LOCFOR(fun_69);
LOCFOR(fun_eval_70);
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
FUNFOR(YastYinit_environment_for_eval);
extern P Yast_evalY___main_0___ ();
extern P Yast_evalY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_0) {
  ARG(b_, 0);
  P boxF1467;
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T5 = CALL1(CHKREF(YastYbinding_global_box),b_);
  boxF1467 = T5;
  if (boxF1467 != YPfalse) {
    T4 = CALL1(CHKREF(YastYglobal_box_value),boxF1467);
    T1 = T4;
  } else {
    T3 = CALL1(CHKREF(YastYbinding_name),b_);
    T2 = CALL2(CHKREF(Yerror),CHKREF(lit_2),T3);
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_1) {
  ARG(b_, 0);
  ARG(value_, 1);
  P boxF1468;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T10 = CALL1(CHKREF(YastYbinding_global_box),b_);
  boxF1468 = T10;
  boxF1468 = BOXFAB(boxF1468);
  T7 = BOXVAL(boxF1468);
  T6 = CALL1(CHKREF(Ynot),T7);
  if (T6 != YPfalse) {
    T5 = (P)YPpair(CHKREF(YastYLglobal_boxG),Ynil);
    T4 = CALL3(CHKREF(YPisa),T5,Ynil,Ynil);
    T3 = CALL2(CHKREF(YastYbinding_global_box_setter),T4,b_);
    T2 = BOXVAL(boxF1468) = T3;
  } else {
  }
  T9 = BOXVAL(boxF1468);
  T8 = CALL2(CHKREF(YastYglobal_box_value_setter),value_,T9);
  T0 = T8;
  QRET(T0);
}

FUNCODEDEF(fun_2) {
  ARG(b_, 0);
  P boxF1469;
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL1(CHKREF(YastYbinding_global_box),b_);
  boxF1469 = T2;
  if (boxF1469 != YPfalse) {
    T1 = YPtrue;
  } else {
    T1 = YPfalse;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_3) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeYlocative_value),x_);
  QRET(T0);
}

FUNCODEDEF(fun_4) {
  ARG(x_, 0);
  ARG(v_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL2(CHKREF(YruntimeYlocative_value_setter),v_,x_);
  QRET(T0);
}

FUNCODEDEF(fun_5) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_evalYenv_parent));
  QRET(T0);
}

FUNCODEDEF(fun_6) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_evalYenv_parent));
  QRET(T0);
}

FUNCODEDEF(fun_7) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_8) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_evalYenv_function));
  QRET(T0);
}

FUNCODEDEF(fun_9) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_evalYenv_function));
  QRET(T0);
}

FUNCODEDEF(fun_10) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_11) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_evalYenv_names));
  QRET(T0);
}

FUNCODEDEF(fun_12) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_evalYenv_names));
  QRET(T0);
}

FUNCODEDEF(fun_13) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(Ynil);
}

FUNCODEDEF(fun_14) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_evalYenv_values));
  QRET(T0);
}

FUNCODEDEF(fun_15) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_evalYenv_values));
  QRET(T0);
}

FUNCODEDEF(fun_16) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(Ynil);
}

FUNCODEDEF(fun_17) {
  ARG(args_, 0);
  ARG(names_, 1);
  ARG(function_, 2);
  ARG(env_, 3);
  P valuesF1470;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T11 = CALL2(CHKREF(YruntimeYas),CHKREF(YLvecG),args_);
  valuesF1470 = T11;
  T10 = (P)YPpair(CHKREF(Yast_evalYLloc_envG),Ynil);
  T9 = (P)YPpair(CHKREF(Yast_evalYenv_names),Ynil);
  T8 = (P)YPpair(CHKREF(Yast_evalYenv_values),T9);
  T7 = (P)YPpair(CHKREF(Yast_evalYenv_function),T8);
  T6 = (P)YPpair(CHKREF(Yast_evalYenv_parent),T7);
  T5 = (P)YPpair(names_,Ynil);
  T4 = (P)YPpair(valuesF1470,T5);
  T3 = (P)YPpair(function_,T4);
  T2 = (P)YPpair(env_,T3);
  T1 = CALL3(CHKREF(YPisa),T10,T6,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_18) {
  ARG(j_, 0);
  ARG(i_, 1);
  ARG(env_, 2);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T6 = CALL2(CHKREF(YruntimeYE),i_,YPint((P)0));
  if (T6 != YPfalse) {
    T5 = CALL1(CHKREF(Yast_evalYenv_values),env_);
    T4 = CALL2(CHKREF(YruntimeYelt),T5,j_);
    T0 = T4;
  } else {
    T3 = CALL1(CHKREF(Yast_evalYenv_parent),env_);
    T2 = CALL2(CHKREF(YruntimeY_),i_,YPint((P)1));
    T1 = CALL3(CHKREF(Yast_evalYenv_local_value),T3,T2,j_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_19) {
  ARG(j_, 0);
  ARG(i_, 1);
  ARG(env_, 2);
  ARG(v_, 3);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T6 = CALL2(CHKREF(YruntimeYE),i_,YPint((P)0));
  if (T6 != YPfalse) {
    T5 = CALL1(CHKREF(Yast_evalYenv_values),env_);
    T4 = CALL3(CHKREF(YruntimeYelt_setter),v_,T5,j_);
    T0 = T4;
  } else {
    T3 = CALL1(CHKREF(Yast_evalYenv_parent),env_);
    T2 = CALL2(CHKREF(YruntimeY_),i_,YPint((P)1));
    T1 = CALLN(CHKREF(Yast_evalYenv_local_value_setter),4,v_,T3,T2,j_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_loop_20) {
  ARG(i_, 0);
  ARG(names_, 1);
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T11 = CALL1(CHKREF(YmacrosYemptyQ),names_);
  if (T11 != YPfalse) {
    T10 = CALL1(CHKREF(Yast_evalYenv_parent),FREEREF(1));
    T9 = CALL2(CHKREF(Yast_evalYenv_binding_value),T10,FREEREF(2));
    T0 = T9;
  } else {
    T8 = CALL1(CHKREF(Yhead),names_);
    T7 = CALL2(CHKREF(YmacrosYEE),FREEREF(2),T8);
    if (T7 != YPfalse) {
      T6 = CALL1(CHKREF(Yast_evalYenv_values),FREEREF(1));
      T5 = CALL2(CHKREF(YruntimeYelt),T6,i_);
      T1 = T5;
    } else {
      T4 = CALL1(CHKREF(Ytail),names_);
      T3 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
      a1 = T4;
      a2 = T3;
      names_ = a1;
      i_ = a2;
      goto loop;
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_21) {
  ARG(name_, 0);
  ARG(env_, 1);
  P loopF1471;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = CALL2(CHKREF(YmacrosYEE),env_,CHKREF(Yast_evalYDnul_loc_env));
  if (T5 != YPfalse) {
    T0 = CHKREF(Ynul);
  } else {
    T4 = FUNSHELL(1,fun_loop_20,3);
    loopF1471 = T4;
    FUNINIT(loopF1471, 3,loopF1471,env_,name_);
    T3 = CALL1(CHKREF(Yast_evalYenv_names),env_);
    T2 = KCALL2(loopF1471,T3,YPint((P)0));
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_loop_22) {
  ARG(i_, 0);
  ARG(names_, 1);
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T11 = CALL1(CHKREF(YmacrosYemptyQ),names_);
  if (T11 != YPfalse) {
    T10 = CALL1(CHKREF(Yast_evalYenv_parent),FREEREF(1));
    T9 = CALL3(CHKREF(Yast_evalYenv_binding_value_setter),FREEREF(2),T10,FREEREF(3));
    T0 = T9;
  } else {
    T8 = CALL1(CHKREF(Yhead),names_);
    T7 = CALL2(CHKREF(YmacrosYEE),FREEREF(3),T8);
    if (T7 != YPfalse) {
      T6 = CALL1(CHKREF(Yast_evalYenv_values),FREEREF(1));
      T5 = CALL3(CHKREF(YruntimeYelt_setter),FREEREF(2),T6,i_);
      T1 = T5;
    } else {
      T4 = CALL1(CHKREF(Ytail),names_);
      T3 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
      a1 = T4;
      a2 = T3;
      names_ = a1;
      i_ = a2;
      goto loop;
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_23) {
  ARG(name_, 0);
  ARG(env_, 1);
  ARG(v_, 2);
  P loopF1472;
  P T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T3 = FUNSHELL(1,fun_loop_22,4);
  loopF1472 = T3;
  FUNINIT(loopF1472, 4,loopF1472,env_,v_,name_);
  T2 = CALL1(CHKREF(Yast_evalYenv_names),env_);
  T1 = KCALL2(loopF1472,T2,YPint((P)0));
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_24) {
  ARG(e_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yast_evalYast_eval),e_,CHKREF(Yast_evalYDnul_loc_env));
  QRET(T0);
}

FUNCODEDEF(fun_25) {
  ARG(env_, 0);
  ARG(e_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(CHKREF(YastYconstant_value),e_);
  QRET(T0);
}

FUNCODEDEF(fun_26) {
  ARG(env_, 0);
  ARG(e_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(CHKREF(YastYconstant_value),e_);
  QRET(T0);
}

FUNCODEDEF(fun_27) {
  ARG(ee_, 0);
  ARG(e_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(YastYcompile_time_program),e_);
  T0 = CALL1(CHKREF(YastYast_evaluate),T1);
  QRET(T0);
}

FUNCODEDEF(fun_loop_28) {
  ARG(i_, 0);
  ARG(specs_, 1);
  ARG(res_, 2);
  P typeF1474;
  P specF1473;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T11 = CALL2(CHKREF(YruntimeYE),i_,FREEREF(2));
  if (T11 != YPfalse) {
    T10 = CALL1(CHKREF(YruntimeYrevX),res_);
    T0 = T10;
  } else {
    T9 = CALL1(CHKREF(Yhead),specs_);
    specF1473 = T9;
    if (specF1473 != YPfalse) {
      T8 = CALL2(CHKREF(Yast_evalYast_eval),specF1473,FREEREF(0));
      T7 = T8;
    } else {
      T7 = CHKREF(YLanyG);
    }
    typeF1474 = T7;
    T6 = CALL2(CHKREF(YmacrosYpair),typeF1474,res_);
    T5 = CALL1(CHKREF(Ytail),specs_);
    T4 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
    a1 = T6;
    a2 = T5;
    a3 = T4;
    res_ = a1;
    specs_ = a2;
    i_ = a3;
    goto loop;
    T2 = T3;
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_29) {
  ARG(env_, 0);
  ARG(naryQ_, 1);
  ARG(specs_, 2);
  P loopF1476;
  P nreqF1475;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  if (naryQ_ != YPfalse) {
    T7 = CALL1(CHKREF(YruntimeYlen),specs_);
    T6 = CALL2(CHKREF(YruntimeY_),T7,YPint((P)1));
    T4 = T6;
  } else {
    T5 = CALL1(CHKREF(YruntimeYlen),specs_);
    T4 = T5;
  }
  nreqF1475 = T4;
  T3 = FUNSHELL(1,fun_loop_28,3);
  loopF1476 = T3;
  FUNINIT(loopF1476, 3,env_,loopF1476,nreqF1475);
  T2 = KCALL3(loopF1476,Ynil,specs_,YPint((P)0));
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1263_30) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_31) {
  ARG(return_, 0);
  P x_1262F1491;
  P x_1262F1490;
  P x_1262F1489;
  P x_1262F1488;
  P x_1262F1487;
  P x_1262F1486;
  P x_1262F1485;
  P x_1262F1484;
  P bodyF1483;
  P argsF1482;
  P namesF1481;
  P fF1480;
  P envF1479;
  P x_1262F1478;
  P x_1263F1477;
  P T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67;
  P T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51;
  P T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35;
  P T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
loop:
  T82 = FUNSHELL(0,fun_x_1263_30,1);
  x_1263F1477 = T82;
  FUNINIT(x_1263F1477, 1,return_);
  x_1262F1478 = FREEREF(0);
  envF1479 = YPfalse;
  envF1479 = BOXFAB(envF1479);
  fF1480 = YPfalse;
  fF1480 = BOXFAB(fF1480);
  namesF1481 = YPfalse;
  namesF1481 = BOXFAB(namesF1481);
  argsF1482 = YPfalse;
  argsF1482 = BOXFAB(argsF1482);
  bodyF1483 = YPfalse;
  bodyF1483 = BOXFAB(bodyF1483);
  T33 = CALL2(CHKREF(YisaQ),x_1262F1478,CHKREF(YLlstG));
  if (T33 != YPfalse) {
    T32 = CALL3(CHKREF(YmacrosYmatch_atom),x_1262F1478,CHKREF(lit_52),x_1263F1477);
    x_1262F1484 = T32;
    T30 = CALL2(CHKREF(YmacrosYmatch_sublist),x_1262F1484,x_1263F1477);
    x_1262F1485 = T30;
    T28 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1262F1485,x_1263F1477);
    BOXVAL(envF1479) = T28;
    T29 = CALL1(CHKREF(Ytail),x_1262F1485);
    x_1262F1486 = T29;
    T26 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1262F1486,x_1263F1477);
    BOXVAL(fF1480) = T26;
    T27 = CALL1(CHKREF(Ytail),x_1262F1486);
    x_1262F1487 = T27;
    T24 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1262F1487,x_1263F1477);
    BOXVAL(namesF1481) = T24;
    T25 = CALL1(CHKREF(Ytail),x_1262F1487);
    x_1262F1488 = T25;
    BOXVAL(argsF1482) = x_1262F1488;
    x_1262F1489 = Ynil;
    T23 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1262F1489,x_1263F1477);
    T22 = T23;
    T21 = T22;
    T20 = T21;
    T19 = T20;
    T31 = CALL1(CHKREF(Ytail),x_1262F1484);
    x_1262F1490 = T31;
    T17 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1262F1490,x_1263F1477);
    BOXVAL(bodyF1483) = T17;
    T18 = CALL1(CHKREF(Ytail),x_1262F1490);
    x_1262F1491 = T18;
    T16 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1262F1491,x_1263F1477);
    T15 = T16;
    T14 = T15;
    T13 = T14;
  } else {
    T12 = CALL2(x_1263F1477,CHKREF(lit_51),x_1262F1478);
  }
  T81 = CALL1(CHKREF(Ylst),CHKREF(lit_50));
  T80 = BOXVAL(argsF1482);
  T79 = CALL2(CHKREF(YmacrosYcat),T80,Ynil);
  T78 = CALL1(CHKREF(Ylst),T79);
  T77 = CALL1(CHKREF(Ylst),CHKREF(lit_49));
  T76 = CALL1(CHKREF(Ylst),CHKREF(lit_44));
  T75 = CALL1(CHKREF(Ylst),CHKREF(lit_46));
  T74 = CALL2(CHKREF(YmacrosYcat),T75,Ynil);
  T73 = CALL1(CHKREF(Ylst),T74);
  T72 = CALL3(CHKREF(YmacrosYcat),T76,T73,Ynil);
  T71 = CALL1(CHKREF(Ylst),T72);
  T70 = CALL1(CHKREF(Ylst),CHKREF(lit_43));
  T69 = CALL1(CHKREF(Ylst),CHKREF(lit_20));
  T68 = BOXVAL(envF1479);
  T67 = CALL1(CHKREF(Ylst),T68);
  T66 = BOXVAL(fF1480);
  T65 = CALL1(CHKREF(Ylst),T66);
  T64 = CALL1(CHKREF(Ylst),CHKREF(lit_48));
  T63 = BOXVAL(namesF1481);
  T62 = CALL1(CHKREF(Ylst),T63);
  T61 = CALL1(CHKREF(Ylst),CHKREF(lit_45));
  T60 = CALL1(CHKREF(Ylst),CHKREF(lit_47));
  T59 = CALL1(CHKREF(Ylst),CHKREF(lit_46));
  T58 = CALL3(CHKREF(YmacrosYcat),T60,T59,Ynil);
  T57 = CALL1(CHKREF(Ylst),T58);
  T56 = CALL3(CHKREF(YmacrosYcat),T61,T57,Ynil);
  T55 = CALL1(CHKREF(Ylst),T56);
  T54 = CALLN(CHKREF(YmacrosYcat),4,T64,T62,T55,Ynil);
  T53 = CALL1(CHKREF(Ylst),T54);
  T52 = CALL1(CHKREF(Ylst),CHKREF(lit_45));
  T51 = BOXVAL(argsF1482);
  T50 = CALL1(CHKREF(Ylst),CHKREF(lit_44));
  T49 = CALLN(CHKREF(YmacrosYcat),4,T52,T51,T50,Ynil);
  T48 = CALL1(CHKREF(Ylst),T49);
  T47 = CALLN(CHKREF(YmacrosYcat),6,T69,T67,T65,T53,T48,Ynil);
  T46 = CALL1(CHKREF(Ylst),T47);
  T45 = CALL3(CHKREF(YmacrosYcat),T70,T46,Ynil);
  T44 = CALL1(CHKREF(Ylst),T45);
  T43 = CALL3(CHKREF(YmacrosYcat),T71,T44,Ynil);
  T42 = CALL1(CHKREF(Ylst),T43);
  T41 = BOXVAL(bodyF1483);
  T40 = CALL1(CHKREF(Ylst),T41);
  T39 = CALL1(CHKREF(Ylst),CHKREF(lit_43));
  T38 = CALL3(CHKREF(YmacrosYcat),T40,T39,Ynil);
  T37 = CALL1(CHKREF(Ylst),T38);
  T36 = CALLN(CHKREF(YmacrosYcat),4,T77,T42,T37,Ynil);
  T35 = CALL1(CHKREF(Ylst),T36);
  T34 = CALLN(CHKREF(YmacrosYcat),4,T81,T78,T35,Ynil);
  T10 = T34;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_32) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_31,1,exp_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_33) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Yfun_name),x_);
  QRET(T0);
}

FUNCODEDEF(fun_34) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YastYfunction_debug_name),x_);
  T0 = CALL1(CHKREF(Yast_evalYas_fun_name),T1);
  QRET(T0);
}

FUNCODEDEF(fun_35) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YastYbinding_name),x_);
  QRET(T0);
}

FUNCODEDEF(fun_36) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YastYconstant_value),x_);
  T0 = CALL1(CHKREF(Yast_evalYas_fun_name),T1);
  QRET(T0);
}

FUNCODEDEF(fun_37) {
  ARG(x_, 0);
  P a1;
loop:
  RET(x_);
}

FUNCODEDEF(fun_38) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_39) {
  ARG(a9_, 0);
  ARG(a8_, 1);
  ARG(a7_, 2);
  ARG(a6_, 3);
  ARG(a5_, 4);
  ARG(a4_, 5);
  ARG(a3_, 6);
  ARG(a2_, 7);
  ARG(a1_, 8);
  P frameF1493;
  P nmsF1492;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6,a7,a8,a9;
loop:
  T7 = (P)YPnext_methods();
  nmsF1492 = T7;
  T6 = CALL1(CHKREF(Ylst),CHKREF(lit_46));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(Ylst),10,a1_,a2_,a3_,a4_,a5_,a6_,a7_,a8_,a9_,nmsF1492);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1493 = T3;
  T2 = CALL1(FREEREF(3),frameF1493);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_40) {
  ARG(a8_, 0);
  ARG(a7_, 1);
  ARG(a6_, 2);
  ARG(a5_, 3);
  ARG(a4_, 4);
  ARG(a3_, 5);
  ARG(a2_, 6);
  ARG(a1_, 7);
  P frameF1495;
  P nmsF1494;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6,a7,a8;
loop:
  T7 = (P)YPnext_methods();
  nmsF1494 = T7;
  T6 = CALL1(CHKREF(Ylst),CHKREF(lit_46));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(Ylst),9,a1_,a2_,a3_,a4_,a5_,a6_,a7_,a8_,nmsF1494);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1495 = T3;
  T2 = CALL1(FREEREF(3),frameF1495);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_41) {
  ARG(a7_, 0);
  ARG(a6_, 1);
  ARG(a5_, 2);
  ARG(a4_, 3);
  ARG(a3_, 4);
  ARG(a2_, 5);
  ARG(a1_, 6);
  P frameF1497;
  P nmsF1496;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6,a7;
loop:
  T7 = (P)YPnext_methods();
  nmsF1496 = T7;
  T6 = CALL1(CHKREF(Ylst),CHKREF(lit_46));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(Ylst),8,a1_,a2_,a3_,a4_,a5_,a6_,a7_,nmsF1496);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1497 = T3;
  T2 = CALL1(FREEREF(3),frameF1497);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_42) {
  ARG(a6_, 0);
  ARG(a5_, 1);
  ARG(a4_, 2);
  ARG(a3_, 3);
  ARG(a2_, 4);
  ARG(a1_, 5);
  P frameF1499;
  P nmsF1498;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6;
loop:
  T7 = (P)YPnext_methods();
  nmsF1498 = T7;
  T6 = CALL1(CHKREF(Ylst),CHKREF(lit_46));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(Ylst),7,a1_,a2_,a3_,a4_,a5_,a6_,nmsF1498);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1499 = T3;
  T2 = CALL1(FREEREF(3),frameF1499);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_43) {
  ARG(a5_, 0);
  ARG(a4_, 1);
  ARG(a3_, 2);
  ARG(a2_, 3);
  ARG(a1_, 4);
  P frameF1501;
  P nmsF1500;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5;
loop:
  T7 = (P)YPnext_methods();
  nmsF1500 = T7;
  T6 = CALL1(CHKREF(Ylst),CHKREF(lit_46));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(Ylst),6,a1_,a2_,a3_,a4_,a5_,nmsF1500);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1501 = T3;
  T2 = CALL1(FREEREF(3),frameF1501);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_44) {
  ARG(a4_, 0);
  ARG(a3_, 1);
  ARG(a2_, 2);
  ARG(a1_, 3);
  P frameF1503;
  P nmsF1502;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T7 = (P)YPnext_methods();
  nmsF1502 = T7;
  T6 = CALL1(CHKREF(Ylst),CHKREF(lit_46));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(Ylst),5,a1_,a2_,a3_,a4_,nmsF1502);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1503 = T3;
  T2 = CALL1(FREEREF(3),frameF1503);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_45) {
  ARG(a3_, 0);
  ARG(a2_, 1);
  ARG(a1_, 2);
  P frameF1505;
  P nmsF1504;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T7 = (P)YPnext_methods();
  nmsF1504 = T7;
  T6 = CALL1(CHKREF(Ylst),CHKREF(lit_46));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(Ylst),4,a1_,a2_,a3_,nmsF1504);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1505 = T3;
  T2 = CALL1(FREEREF(3),frameF1505);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_46) {
  ARG(a2_, 0);
  ARG(a1_, 1);
  P frameF1507;
  P nmsF1506;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T7 = (P)YPnext_methods();
  nmsF1506 = T7;
  T6 = CALL1(CHKREF(Ylst),CHKREF(lit_46));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALL3(CHKREF(Ylst),a1_,a2_,nmsF1506);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1507 = T3;
  T2 = CALL1(FREEREF(3),frameF1507);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_47) {
  ARG(a1_, 0);
  P frameF1509;
  P nmsF1508;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = (P)YPnext_methods();
  nmsF1508 = T7;
  T6 = CALL1(CHKREF(Ylst),CHKREF(lit_46));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALL2(CHKREF(Ylst),a1_,nmsF1508);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1509 = T3;
  T2 = CALL1(FREEREF(3),frameF1509);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_48) {
  P frameF1511;
  P nmsF1510;
  P T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T7 = (P)YPnext_methods();
  nmsF1510 = T7;
  T6 = CALL1(CHKREF(Ylst),CHKREF(lit_46));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALL1(CHKREF(Ylst),nmsF1510);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1511 = T3;
  T2 = CALL1(FREEREF(3),frameF1511);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  ARG(env_, 0);
  ARG(body_, 1);
  ARG(value_, 2);
  ARG(naryQ_, 3);
  ARG(specs_, 4);
  ARG(names_, 5);
  ARG(f_, 6);
  P efunF1522;
  P x_1273F1521;
  P x_1272F1520;
  P x_1271F1519;
  P x_1270F1518;
  P x_1269F1517;
  P x_1268F1516;
  P x_1267F1515;
  P x_1266F1514;
  P x_1265F1513;
  P x_1264F1512;
  P T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6,a7;
loop:
  T60 = CALL1(CHKREF(YruntimeYlen),names_);
  x_1264F1512 = T60;
  T59 = CALL2(CHKREF(YmacrosYEE),x_1264F1512,YPint((P)0));
  if (T59 != YPfalse) {
    T58 = FUNFAB(fun_48,4,names_,f_,env_,body_);
    T21 = T58;
  } else {
    x_1265F1513 = x_1264F1512;
    T57 = CALL2(CHKREF(YmacrosYEE),x_1265F1513,YPint((P)1));
    if (T57 != YPfalse) {
      T56 = FUNFAB(fun_47,4,names_,f_,env_,body_);
      T23 = T56;
    } else {
      x_1266F1514 = x_1265F1513;
      T55 = CALL2(CHKREF(YmacrosYEE),x_1266F1514,YPint((P)2));
      if (T55 != YPfalse) {
        T54 = FUNFAB(fun_46,4,names_,f_,env_,body_);
        T25 = T54;
      } else {
        x_1267F1515 = x_1266F1514;
        T53 = CALL2(CHKREF(YmacrosYEE),x_1267F1515,YPint((P)3));
        if (T53 != YPfalse) {
          T52 = FUNFAB(fun_45,4,names_,f_,env_,body_);
          T27 = T52;
        } else {
          x_1268F1516 = x_1267F1515;
          T51 = CALL2(CHKREF(YmacrosYEE),x_1268F1516,YPint((P)4));
          if (T51 != YPfalse) {
            T50 = FUNFAB(fun_44,4,names_,f_,env_,body_);
            T29 = T50;
          } else {
            x_1269F1517 = x_1268F1516;
            T49 = CALL2(CHKREF(YmacrosYEE),x_1269F1517,YPint((P)5));
            if (T49 != YPfalse) {
              T48 = FUNFAB(fun_43,4,names_,f_,env_,body_);
              T31 = T48;
            } else {
              x_1270F1518 = x_1269F1517;
              T47 = CALL2(CHKREF(YmacrosYEE),x_1270F1518,YPint((P)6));
              if (T47 != YPfalse) {
                T46 = FUNFAB(fun_42,4,names_,f_,env_,body_);
                T33 = T46;
              } else {
                x_1271F1519 = x_1270F1518;
                T45 = CALL2(CHKREF(YmacrosYEE),x_1271F1519,YPint((P)7));
                if (T45 != YPfalse) {
                  T44 = FUNFAB(fun_41,4,names_,f_,env_,body_);
                  T35 = T44;
                } else {
                  x_1272F1520 = x_1271F1519;
                  T43 = CALL2(CHKREF(YmacrosYEE),x_1272F1520,YPint((P)8));
                  if (T43 != YPfalse) {
                    T42 = FUNFAB(fun_40,4,names_,f_,env_,body_);
                    T37 = T42;
                  } else {
                    x_1273F1521 = x_1272F1520;
                    T41 = CALL2(CHKREF(YmacrosYEE),x_1273F1521,YPint((P)9));
                    if (T41 != YPfalse) {
                      T40 = FUNFAB(fun_39,4,names_,f_,env_,body_);
                      T39 = T40;
                    } else {
                      T39 = YPfalse;
                    }
                    T38 = T39;
                    T37 = T38;
                  }
                  T36 = T37;
                  T35 = T36;
                }
                T34 = T35;
                T33 = T34;
              }
              T32 = T33;
              T31 = T32;
            }
            T30 = T31;
            T29 = T30;
          }
          T28 = T29;
          T27 = T28;
        }
        T26 = T27;
        T25 = T26;
      }
      T24 = T25;
      T23 = T24;
    }
    T22 = T23;
    T21 = T22;
  }
  T20 = T21;
  efunF1522 = T20;
  T1 = CALL1(CHKREF(Yast_evalYas_fun_name),f_);
  CALL2(CHKREF(Yfun_name_setter),T1,efunF1522);
  T19 = (P)YPpair(CHKREF(YLsigG),Ynil);
  T18 = (P)YPpair(CHKREF(Ysig_value),Ynil);
  T17 = (P)YPpair(CHKREF(Ysig_arity),T18);
  T16 = (P)YPpair(CHKREF(Ysig_naryQ),T17);
  T15 = (P)YPpair(CHKREF(Ysig_specs),T16);
  T14 = (P)YPpair(CHKREF(Ysig_names),T15);
  T13 = CALL3(CHKREF(Yast_evalYast_eval_specs),specs_,naryQ_,env_);
  T12 = CALL1(CHKREF(Yfun_arity),efunF1522);
  if (naryQ_ != YPfalse) {
    T11 = YPint((P)1);
  } else {
    T11 = YPint((P)0);
  }
  T10 = CALL2(CHKREF(YruntimeY_),T12,T11);
  if (value_ != YPfalse) {
    T9 = CALL2(CHKREF(Yast_evalYast_eval),value_,env_);
    T8 = T9;
  } else {
    T8 = CHKREF(YLanyG);
  }
  T7 = (P)YPpair(T8,Ynil);
  T6 = (P)YPpair(T10,T7);
  T5 = (P)YPpair(naryQ_,T6);
  T4 = (P)YPpair(T13,T5);
  T3 = (P)YPpair(names_,T4);
  T2 = CALL3(CHKREF(YPisa),T19,T14,T3);
  CALL2(CHKREF(Yfun_sig_setter),T2,efunF1522);
  T0 = efunF1522;
  QRET(T0);
}

FUNCODEDEF(fun_50) {
  ARG(env_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YastYfunction_body),FREEREF(0));
  T0 = CALL2(CHKREF(Yast_evalYast_eval),T1,env_);
  QRET(T0);
}

FUNCODEDEF(fun_51) {
  ARG(env_, 0);
  ARG(e_, 1);
  P evalF1524;
  P paramsF1523;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T8 = CALL1(CHKREF(YastYfunction_bindings),e_);
  paramsF1523 = T8;
  T7 = FUNFAB(fun_50,1,e_);
  evalF1524 = T7;
  T6 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_name),paramsF1523);
  T5 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_type),paramsF1523);
  T4 = CALL1(CHKREF(YastYfunction_naryQ),e_);
  T3 = CALL1(CHKREF(YastYfunction_value),e_);
  T2 = CALLN(CHKREF(Yast_evalYexport_proto_method),7,e_,T6,T5,T4,T3,evalF1524,env_);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_52) {
  ARG(env_, 0);
  ARG(e_, 1);
  P specsF1528;
  P namesF1527;
  P naryQF1526;
  P paramsF1525;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T10 = CALL1(CHKREF(YastYfunction_bindings),e_);
  paramsF1525 = T10;
  T9 = CALL1(CHKREF(YastYfunction_naryQ),e_);
  naryQF1526 = T9;
  T8 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_name),paramsF1525);
  namesF1527 = T8;
  T7 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_type),paramsF1525);
  T6 = CALL3(CHKREF(Yast_evalYast_eval_specs),T7,naryQF1526,env_);
  specsF1528 = T6;
  T5 = CALL1(CHKREF(Yast_evalYas_fun_name),e_);
  T4 = CALLN(CHKREF(Yfab_gen),5,T5,namesF1527,specsF1528,naryQF1526,Ynil);
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_53) {
  ARG(ref_, 0);
  ARG(env_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = CALL1(CHKREF(YastYreference_frame_number),ref_);
  T1 = CALL1(CHKREF(YastYreference_frame_offset),ref_);
  T0 = CALL3(CHKREF(Yast_evalYenv_local_value),env_,T2,T1);
  QRET(T0);
}

FUNCODEDEF(fun_54) {
  ARG(ref_, 0);
  ARG(env_, 1);
  ARG(val_, 2);
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T2 = CALL1(CHKREF(YastYreference_frame_number),ref_);
  T1 = CALL1(CHKREF(YastYreference_frame_offset),ref_);
  T0 = CALLN(CHKREF(Yast_evalYenv_local_value_setter),4,val_,env_,T2,T1);
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  ARG(env_, 0);
  ARG(e_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL2(CHKREF(Yast_evalYenv_local_reference_value),env_,e_);
  QRET(T0);
}

FUNCODEDEF(fun_56) {
  ARG(env_, 0);
  ARG(e_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(YastYreference_binding),e_);
  T0 = CALL1(CHKREF(Yast_evalYenv_global_binding_value),T1);
  QRET(T0);
}

FUNCODEDEF(fun_57) {
  ARG(env_, 0);
  ARG(e_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = CALL1(CHKREF(YastYreference_binding),e_);
  T1 = CALL1(CHKREF(YastYbinding_locative),T2);
  T0 = CALL1(CHKREF(Yast_evalYenv_runtime_value),T1);
  QRET(T0);
}

FUNCODEDEF(fun_58) {
  ARG(env_, 0);
  ARG(e_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = CALL1(CHKREF(YastYboundQ_reference),e_);
  T1 = CALL1(CHKREF(YastYreference_binding),T2);
  T0 = CALL3(CHKREF(Yast_evalYast_eval_boundQ),e_,T1,env_);
  QRET(T0);
}

FUNCODEDEF(fun_59) {
  ARG(env_, 0);
  ARG(binding_, 1);
  ARG(e_, 2);
  P x_1274F1529;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T4 = CALL1(CHKREF(YastYbinding_kind),binding_);
  x_1274F1529 = T4;
  T3 = CALL2(CHKREF(YmacrosYEE),x_1274F1529,CHKREF(lit_74));
  if (T3 != YPfalse) {
    T2 = CALL1(CHKREF(Yast_evalYenv_global_binding_boundQ),binding_);
    T1 = T2;
  } else {
    T1 = YPtrue;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_60) {
  ARG(env_, 0);
  ARG(binding_, 1);
  ARG(e_, 2);
  P a1,a2,a3;
loop:
  QRET(YPtrue);
}

FUNCODEDEF(fun_61) {
  ARG(env_, 0);
  ARG(e_, 1);
  P valueF1530;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL1(CHKREF(YastYassignment_form),e_);
  T3 = CALL2(CHKREF(Yast_evalYast_eval),T4,env_);
  valueF1530 = T3;
  T2 = CALL1(CHKREF(YastYassignment_binding),e_);
  T1 = CALL2(CHKREF(Yast_evalYenv_global_binding_value_setter),valueF1530,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_62) {
  ARG(env_, 0);
  ARG(e_, 1);
  P a1,a2;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_63) {
  ARG(env_, 0);
  ARG(e_, 1);
  P valueF1531;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = CALL1(CHKREF(YastYassignment_form),e_);
  T4 = CALL2(CHKREF(Yast_evalYast_eval),T5,env_);
  valueF1531 = T4;
  T3 = CALL1(CHKREF(YastYassignment_binding),e_);
  T2 = CALL1(CHKREF(YastYbinding_locative),T3);
  T1 = CALL2(CHKREF(Yast_evalYenv_runtime_value_setter),valueF1531,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_64) {
  ARG(env_, 0);
  ARG(e_, 1);
  P valueF1532;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL1(CHKREF(YastYassignment_form),e_);
  T3 = CALL2(CHKREF(Yast_evalYast_eval),T4,env_);
  valueF1532 = T3;
  T2 = CALL1(CHKREF(YastYassignment_reference),e_);
  T1 = CALL3(CHKREF(Yast_evalYenv_local_reference_value_setter),valueF1532,env_,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_65) {
  ARG(v_, 0);
  ARG(b_, 1);
  P x_1276F1534;
  P x_1275F1533;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T11 = CALL1(CHKREF(YastYbinding_kind),b_);
  x_1275F1533 = T11;
  T10 = CALL2(CHKREF(YmacrosYEE),x_1275F1533,CHKREF(lit_77));
  if (T10 != YPfalse) {
    T9 = CALL1(CHKREF(YastYbinding_locative),b_);
    T8 = CALL2(CHKREF(Yast_evalYenv_runtime_value_setter),v_,T9);
    T1 = T8;
  } else {
    x_1276F1534 = x_1275F1533;
    T7 = CALL2(CHKREF(YmacrosYEE),x_1276F1534,CHKREF(lit_74));
    if (T7 != YPfalse) {
      T6 = CALL2(CHKREF(Yast_evalYenv_global_binding_value_setter),v_,b_);
      T3 = T6;
    } else {
      T5 = CALL1(CHKREF(YastYbinding_kind),b_);
      T4 = CALL2(CHKREF(Yerror),CHKREF(lit_76),T5);
      T3 = T4;
    }
    T2 = T3;
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_66) {
  ARG(env_, 0);
  ARG(e_, 1);
  P valueF1535;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = CALL1(CHKREF(YastYassignment_form),e_);
  T2 = CALL2(CHKREF(Yast_evalYast_eval),T3,env_);
  valueF1535 = T2;
  T1 = CALL1(CHKREF(YastYassignment_binding),e_);
  CALL2(CHKREF(Yast_evalYenv_define_bindingX),T1,valueF1535);
  T0 = YPfalse;
  QRET(T0);
}

FUNCODEDEF(fun_67) {
  ARG(env_, 0);
  ARG(e_, 1);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T6 = CALL1(CHKREF(YastYalternative_condition),e_);
  T5 = CALL2(CHKREF(Yast_evalYast_eval),T6,env_);
  if (T5 != YPfalse) {
    T4 = CALL1(CHKREF(YastYalternative_consequent),e_);
    T3 = CALL2(CHKREF(Yast_evalYast_eval),T4,env_);
    T0 = T3;
  } else {
    T2 = CALL1(CHKREF(YastYalternative_alternant),e_);
    T1 = CALL2(CHKREF(Yast_evalYast_eval),T2,env_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_eval_68) {
  ARG(e_, 0);
  P valF1537;
  P nxtF1536;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = CALL1(CHKREF(Ytail),e_);
  nxtF1536 = T7;
  T6 = CALL1(CHKREF(Yhead),e_);
  T5 = CALL2(CHKREF(Yast_evalYast_eval),T6,FREEREF(0));
  valF1537 = T5;
  T4 = CALL1(CHKREF(YmacrosYemptyQ),nxtF1536);
  if (T4 != YPfalse) {
    T2 = valF1537;
  } else {
    a1 = nxtF1536;
    e_ = a1;
    goto loop;
    T2 = T3;
  }
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  ARG(env_, 0);
  ARG(e_, 1);
  P evalF1538;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_eval_68,2);
  evalF1538 = T2;
  FUNINIT(evalF1538, 2,env_,evalF1538);
  T1 = KCALL1(evalF1538,e_);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_eval_70) {
  ARG(args_, 0);
  ARG(res_, 1);
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T7 = CALL1(CHKREF(YmacrosYemptyQ),args_);
  if (T7 != YPfalse) {
    T6 = CALL1(CHKREF(YruntimeYrevX),res_);
    T0 = T6;
  } else {
    T5 = CALL1(CHKREF(Yhead),args_);
    T4 = CALL2(CHKREF(Yast_evalYast_eval),T5,FREEREF(0));
    T3 = CALL2(CHKREF(YmacrosYpair),T4,res_);
    T2 = CALL1(CHKREF(Ytail),args_);
    a1 = T3;
    a2 = T2;
    res_ = a1;
    args_ = a2;
    goto loop;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_71) {
  ARG(env_, 0);
  ARG(e_, 1);
  P evalF1539;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_eval_70,2);
  evalF1539 = T2;
  FUNINIT(evalF1539, 2,env_,evalF1539);
  T1 = KCALL2(evalF1539,Ynil,e_);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_72) {
  ARG(env_, 0);
  ARG(e_, 1);
  P argsF1541;
  P fF1540;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T6 = CALL1(CHKREF(YastYapplication_function),e_);
  T5 = CALL2(CHKREF(Yast_evalYast_eval),T6,env_);
  fF1540 = T5;
  T4 = CALL1(CHKREF(YastYapplication_arguments),e_);
  T3 = CALL2(CHKREF(Yast_evalYast_eval),T4,env_);
  argsF1541 = T3;
  T2 = CALL2(CHKREF(Yapply),fF1540,argsF1541);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_73) {
  ARG(env_, 0);
  ARG(e_, 1);
  P nmsF1545;
  P argsF1544;
  P fF1543;
  P bF1542;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T14 = CALL1(CHKREF(YastYapplication_binding),e_);
  bF1542 = T14;
  T13 = CALL1(CHKREF(YastYbinding_name),bF1542);
  T12 = CALL2(CHKREF(YmacrosYEE),T13,CHKREF(lit_46));
  if (T12 != YPfalse) {
    T11 = CALL2(CHKREF(Yast_evalYenv_binding_value),env_,CHKREF(lit_46));
    nmsF1545 = T11;
    T10 = CALL2(CHKREF(YmacrosYEE),nmsF1545,CHKREF(Ynul));
    if (T10 != YPfalse) {
      T9 = YPfalse;
    } else {
      T9 = nmsF1545;
    }
    T8 = T9;
    T1 = T8;
  } else {
    T7 = CALL1(CHKREF(YastYbinding_info),bF1542);
    fF1543 = T7;
    T6 = CALL1(CHKREF(YastYapplication_arguments),e_);
    T5 = CALL2(CHKREF(Yast_evalYast_eval),T6,env_);
    argsF1544 = T5;
    T4 = CALL2(CHKREF(Yapply),fF1543,argsF1544);
    T3 = T4;
    T2 = T3;
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_74) {
  ARG(env_, 0);
  ARG(e_, 1);
  P nenvF1547;
  P argsF1546;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T8 = CALL1(CHKREF(YastYfix_let_arguments),e_);
  T7 = CALL2(CHKREF(Yast_evalYast_eval),T8,env_);
  argsF1546 = T7;
  T6 = CALL1(CHKREF(YastYfix_let_bindings),e_);
  T5 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_name),T6);
  T4 = CALLN(CHKREF(Yast_evalYenv_frameX),4,env_,YPfalse,T5,argsF1546);
  nenvF1547 = T4;
  T3 = CALL1(CHKREF(YastYfix_let_body),e_);
  T2 = CALL2(CHKREF(Yast_evalYast_eval),T3,nenvF1547);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_75) {
  ARG(value_, 0);
  ARG(name_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yast_evalYenv_binding_value_setter),value_,FREEREF(0),name_);
  QRET(T0);
}

FUNCODEDEF(fun_76) {
  ARG(env_, 0);
  ARG(e_, 1);
  P new_envF1549;
  P bindingsF1548;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T13 = CALL1(CHKREF(YastYlocals_bindings),e_);
  bindingsF1548 = T13;
  T12 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_name),bindingsF1548);
  T11 = CALL1(CHKREF(YruntimeYalways),CHKREF(Ynul));
  T10 = CALL2(CHKREF(YmacrosYmap),T11,bindingsF1548);
  T9 = CALLN(CHKREF(Yast_evalYenv_frameX),4,env_,YPfalse,T12,T10);
  new_envF1549 = T9;
  T6 = FUNFAB(fun_75,1,new_envF1549);
  T5 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_name),bindingsF1548);
  T4 = CALL2(CHKREF(YruntimeYrcurry),CHKREF(Yast_evalYast_eval),new_envF1549);
  T3 = CALL1(CHKREF(YastYlocals_functions),e_);
  T2 = CALL2(CHKREF(YmacrosYmap),T4,T3);
  CALL3(CHKREF(YruntimeYdo2),T6,T5,T2);
  T8 = CALL1(CHKREF(YastYlocals_body),e_);
  T7 = CALL2(CHKREF(Yast_evalYast_eval),T8,new_envF1549);
  T1 = T7;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_77) {
  ARG(env_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(Yast_evalYenv_binding_value),env_,CHKREF(lit_7));
  T0 = CALL1(FREEREF(0),T1);
  QRET(T0);
}

FUNCODEDEF(fun_78) {
  ARG(return_, 0);
  P exitF1551;
  P rprocF1550;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = FUNFAB(fun_77,1,return_);
  rprocF1550 = T8;
  T7 = CALL1(CHKREF(Ylst),CHKREF(lit_7));
  T6 = CALL1(CHKREF(Ylst),YPfalse);
  T5 = CALLN(CHKREF(Yast_evalYexport_proto_method),7,rprocF1550,T7,T6,YPfalse,YPfalse,rprocF1550,FREEREF(0));
  exitF1551 = T5;
  T4 = CALL1(CHKREF(YastYbind_exit_main_fun),FREEREF(1));
  T3 = CALL2(CHKREF(Yast_evalYast_eval),T4,FREEREF(0));
  T2 = CALL1(T3,exitF1551);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_79) {
  ARG(env_, 0);
  ARG(e_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = FUNFAB(fun_78,2,env_,e_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_80) {
  P T2,T1,T0;
loop:
  T2 = CALL1(CHKREF(YastYunwind_protect_cleanup_thunk),FREEREF(1));
  T1 = CALL2(CHKREF(Yast_evalYast_eval),T2,FREEREF(0));
  T0 = CALL0(T1);
  QRET(T0);
}

FUNCODEDEF(fun_81) {
  P T2,T1,T0;
loop:
  T2 = CALL1(CHKREF(YastYunwind_protect_protected_thunk),FREEREF(1));
  T1 = CALL2(CHKREF(Yast_evalYast_eval),T2,FREEREF(0));
  T0 = CALL0(T1);
  QRET(T0);
}

FUNCODEDEF(fun_82) {
  ARG(env_, 0);
  ARG(e_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNFAB(fun_81,2,env_,e_);
  T1 = FUNFAB(fun_80,2,env_,e_);
  T0 = with_cleanup(T2,T1);
  QRET(T0);
}

FUNCODEDEF(fun_83) {
  ARG(env_, 0);
  ARG(e_, 1);
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T10 = CALL1(CHKREF(YastYmonitor_type),e_);
  T9 = CALL2(CHKREF(Yast_evalYast_eval),T10,env_);
  T8 = CALL1(CHKREF(YastYmonitor_info),e_);
  T7 = CALL2(CHKREF(Yast_evalYast_eval),T8,env_);
  T6 = CALL1(CHKREF(YastYmonitor_test),e_);
  T5 = CALL2(CHKREF(Yast_evalYast_eval),T6,env_);
  T4 = CALL1(CHKREF(YastYmonitor_handler),e_);
  T3 = CALL2(CHKREF(Yast_evalYast_eval),T4,env_);
  T2 = CALL1(CHKREF(YastYmonitor_main_thunk),e_);
  T1 = CALL2(CHKREF(Yast_evalYast_eval),T2,env_);
  T0 = CALLN(CHKREF(YruntimeYPwith_monitor),5,T9,T7,T5,T3,T1);
  QRET(T0);
}

FUNCODEDEF(YastYinit_environment_for_eval) {
  ARG(env_, 0);
  P bF1552;
  P T2,T1,T0;
  P a1;
loop:
  CALLN(CHKREF(YastYast_define_binding),4,env_,CHKREF(lit_46),YPfalse,CHKREF(lit_81));
  T2 = CALLN(CHKREF(YastYast_define_binding),4,env_,CHKREF(lit_80),YPfalse,CHKREF(lit_74));
  bF1552 = T2;
  T1 = CALL2(CHKREF(Yast_evalYenv_global_binding_value_setter),CHKREF(YmacrosYpair),bF1552);
  T0 = T1;
  QRET(T0);
}

P Yast_evalY___main_0___() {
  P T292,T291,T290,T289,T288,T287,T286,T285,T284,T283,T282,T281,T280,T279,T278,T277;
  P T276,T275,T274,T273,T272,T271,T270,T269,T268,T267,T266,T265,T264,T263,T262,T261;
  P T260,T259,T258,T257,T256,T255,T254,T253,T252,T251,T250,T249,T248,T247,T246,T245;
  P T244,T243,T242,T241,T240,T239,T238,T237,T236,T235,T234,T233,T232,T231,T230,T229;
  P T228,T227,T226,T225,T224,T223,T222,T221,T220,T219,T218,T217,T216,T215,T214,T213;
  P T212,T211,T210,T209,T208,T207,T206,T205,T204,T203,T202,T201,T200,T199,T198,T197;
  P T196,T195,T194,T193,T192,T191,T190,T189,T188,T187,T186,T185,T184,T183,T182,T181;
  P T180,T179,T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168,T167,T166,T165;
  P T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152,T151,T150,T149;
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
  lit_0 = YPPsym((P)"env-global-binding-value");
  lit_1 = YPPsym((P)"b");
  lit_2 = YPsb((P)"Unbound binding: %=");
  T0 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YastYLmodule_bindingG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_0 = YPmet(FUNCODEREF(fun_0),CHKREF(lit_0),T0,ENVNUL);
  T4 = BOUNDP(Yast_evalYenv_global_binding_value);
  if (T4 != YPfalse) {
    T3 = CHKREF(Yast_evalYenv_global_binding_value);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_0;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  Yast_evalYenv_global_binding_value = T1;
  regsym(&Yast_evalYenv_global_binding_value,"ast-eval","env-global-binding-value");
  lit_3 = YPPsym((P)"env-global-binding-value-setter");
  lit_4 = YPPsym((P)"value");
  T5 = YPsig(YPPlist(2,CHKREF(lit_4),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLmodule_bindingG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_1 = YPmet(FUNCODEREF(fun_1),CHKREF(lit_3),T5,ENVNUL);
  T9 = BOUNDP(Yast_evalYenv_global_binding_value_setter);
  if (T9 != YPfalse) {
    T8 = CHKREF(Yast_evalYenv_global_binding_value_setter);
  } else {
    T8 = YPfalse;
  }
  T7 = fun_1;
  T6 = CALL2(CHKREF(YPdefine_method),T8,T7);
  Yast_evalYenv_global_binding_value_setter = T6;
  regsym(&Yast_evalYenv_global_binding_value_setter,"ast-eval","env-global-binding-value-setter");
  lit_5 = YPPsym((P)"env-global-binding-bound?");
  T10 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YastYLmodule_bindingG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_2 = YPmet(FUNCODEREF(fun_2),CHKREF(lit_5),T10,ENVNUL);
  T14 = BOUNDP(Yast_evalYenv_global_binding_boundQ);
  if (T14 != YPfalse) {
    T13 = CHKREF(Yast_evalYenv_global_binding_boundQ);
  } else {
    T13 = YPfalse;
  }
  T12 = fun_2;
  T11 = CALL2(CHKREF(YPdefine_method),T13,T12);
  Yast_evalYenv_global_binding_boundQ = T11;
  regsym(&Yast_evalYenv_global_binding_boundQ,"ast-eval","env-global-binding-bound?");
  lit_6 = YPPsym((P)"env-runtime-value");
  lit_7 = YPPsym((P)"x");
  T15 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLlocG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_3 = YPmet(FUNCODEREF(fun_3),CHKREF(lit_6),T15,ENVNUL);
  T19 = BOUNDP(Yast_evalYenv_runtime_value);
  if (T19 != YPfalse) {
    T18 = CHKREF(Yast_evalYenv_runtime_value);
  } else {
    T18 = YPfalse;
  }
  T17 = fun_3;
  T16 = CALL2(CHKREF(YPdefine_method),T18,T17);
  Yast_evalYenv_runtime_value = T16;
  regsym(&Yast_evalYenv_runtime_value,"ast-eval","env-runtime-value");
  lit_8 = YPPsym((P)"env-runtime-value-setter");
  lit_9 = YPPsym((P)"v");
  T20 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_7)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLlocG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_4 = YPmet(FUNCODEREF(fun_4),CHKREF(lit_8),T20,ENVNUL);
  T24 = BOUNDP(Yast_evalYenv_runtime_value_setter);
  if (T24 != YPfalse) {
    T23 = CHKREF(Yast_evalYenv_runtime_value_setter);
  } else {
    T23 = YPfalse;
  }
  T22 = fun_4;
  T21 = CALL2(CHKREF(YPdefine_method),T23,T22);
  Yast_evalYenv_runtime_value_setter = T21;
  regsym(&Yast_evalYenv_runtime_value_setter,"ast-eval","env-runtime-value-setter");
  T26 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T25 = CALL3(CHKREF(YPisa),T26,Ynil,Ynil);
  Yast_evalYLloc_envG = T25;
  regsym(&Yast_evalYLloc_envG,"ast-eval","<loc-env>");
  lit_10 = YPPsym((P)"env-parent");
  lit_11 = YPPsym((P)"_x");
  T27 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_5 = YPmet(FUNCODEREF(fun_5),CHKREF(lit_10),T27,ENVNUL);
  T31 = BOUNDP(Yast_evalYenv_parent);
  if (T31 != YPfalse) {
    T30 = CHKREF(Yast_evalYenv_parent);
  } else {
    T30 = YPfalse;
  }
  T29 = fun_5;
  T28 = CALL2(CHKREF(YPdefine_method),T30,T29);
  Yast_evalYenv_parent = T28;
  regsym(&Yast_evalYenv_parent,"ast-eval","env-parent");
  lit_12 = YPPsym((P)"env-parent-setter");
  lit_13 = YPPsym((P)"_z");
  T32 = YPsig(YPPlist(2,CHKREF(lit_13),CHKREF(lit_11)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_6 = YPmet(FUNCODEREF(fun_6),CHKREF(lit_12),T32,ENVNUL);
  T36 = BOUNDP(Yast_evalYenv_parent_setter);
  if (T36 != YPfalse) {
    T35 = CHKREF(Yast_evalYenv_parent_setter);
  } else {
    T35 = YPfalse;
  }
  T34 = fun_6;
  T33 = CALL2(CHKREF(YPdefine_method),T35,T34);
  Yast_evalYenv_parent_setter = T33;
  regsym(&Yast_evalYenv_parent_setter,"ast-eval","env-parent-setter");
  T37 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T37,ENVNUL);
  T38 = fun_7;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_evalYLloc_envG),CHKREF(Yast_evalYenv_parent),CHKREF(Yast_evalYenv_parent_setter),CHKREF(YLanyG),T38);
  lit_14 = YPPsym((P)"env-function");
  T39 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_8 = YPmet(FUNCODEREF(fun_8),CHKREF(lit_14),T39,ENVNUL);
  T43 = BOUNDP(Yast_evalYenv_function);
  if (T43 != YPfalse) {
    T42 = CHKREF(Yast_evalYenv_function);
  } else {
    T42 = YPfalse;
  }
  T41 = fun_8;
  T40 = CALL2(CHKREF(YPdefine_method),T42,T41);
  Yast_evalYenv_function = T40;
  regsym(&Yast_evalYenv_function,"ast-eval","env-function");
  lit_15 = YPPsym((P)"env-function-setter");
  T44 = YPsig(YPPlist(2,CHKREF(lit_13),CHKREF(lit_11)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_9 = YPmet(FUNCODEREF(fun_9),CHKREF(lit_15),T44,ENVNUL);
  T48 = BOUNDP(Yast_evalYenv_function_setter);
  if (T48 != YPfalse) {
    T47 = CHKREF(Yast_evalYenv_function_setter);
  } else {
    T47 = YPfalse;
  }
  T46 = fun_9;
  T45 = CALL2(CHKREF(YPdefine_method),T47,T46);
  Yast_evalYenv_function_setter = T45;
  regsym(&Yast_evalYenv_function_setter,"ast-eval","env-function-setter");
  T49 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T49,ENVNUL);
  T50 = fun_10;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_evalYLloc_envG),CHKREF(Yast_evalYenv_function),CHKREF(Yast_evalYenv_function_setter),CHKREF(YLanyG),T50);
  lit_16 = YPPsym((P)"env-names");
  T51 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_11 = YPmet(FUNCODEREF(fun_11),CHKREF(lit_16),T51,ENVNUL);
  T55 = BOUNDP(Yast_evalYenv_names);
  if (T55 != YPfalse) {
    T54 = CHKREF(Yast_evalYenv_names);
  } else {
    T54 = YPfalse;
  }
  T53 = fun_11;
  T52 = CALL2(CHKREF(YPdefine_method),T54,T53);
  Yast_evalYenv_names = T52;
  regsym(&Yast_evalYenv_names,"ast-eval","env-names");
  lit_17 = YPPsym((P)"env-names-setter");
  T56 = YPsig(YPPlist(2,CHKREF(lit_13),CHKREF(lit_11)),YPPlist(2,CHKREF(YLlstG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_12 = YPmet(FUNCODEREF(fun_12),CHKREF(lit_17),T56,ENVNUL);
  T60 = BOUNDP(Yast_evalYenv_names_setter);
  if (T60 != YPfalse) {
    T59 = CHKREF(Yast_evalYenv_names_setter);
  } else {
    T59 = YPfalse;
  }
  T58 = fun_12;
  T57 = CALL2(CHKREF(YPdefine_method),T59,T58);
  Yast_evalYenv_names_setter = T57;
  regsym(&Yast_evalYenv_names_setter,"ast-eval","env-names-setter");
  T61 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T61,ENVNUL);
  T62 = fun_13;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_evalYLloc_envG),CHKREF(Yast_evalYenv_names),CHKREF(Yast_evalYenv_names_setter),CHKREF(YLlstG),T62);
  lit_18 = YPPsym((P)"env-values");
  T63 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_14 = YPmet(FUNCODEREF(fun_14),CHKREF(lit_18),T63,ENVNUL);
  T67 = BOUNDP(Yast_evalYenv_values);
  if (T67 != YPfalse) {
    T66 = CHKREF(Yast_evalYenv_values);
  } else {
    T66 = YPfalse;
  }
  T65 = fun_14;
  T64 = CALL2(CHKREF(YPdefine_method),T66,T65);
  Yast_evalYenv_values = T64;
  regsym(&Yast_evalYenv_values,"ast-eval","env-values");
  lit_19 = YPPsym((P)"env-values-setter");
  T68 = YPsig(YPPlist(2,CHKREF(lit_13),CHKREF(lit_11)),YPPlist(2,CHKREF(YLvecG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_15 = YPmet(FUNCODEREF(fun_15),CHKREF(lit_19),T68,ENVNUL);
  T72 = BOUNDP(Yast_evalYenv_values_setter);
  if (T72 != YPfalse) {
    T71 = CHKREF(Yast_evalYenv_values_setter);
  } else {
    T71 = YPfalse;
  }
  T70 = fun_15;
  T69 = CALL2(CHKREF(YPdefine_method),T71,T70);
  Yast_evalYenv_values_setter = T69;
  regsym(&Yast_evalYenv_values_setter,"ast-eval","env-values-setter");
  T73 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T73,ENVNUL);
  T74 = fun_16;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_evalYLloc_envG),CHKREF(Yast_evalYenv_values),CHKREF(Yast_evalYenv_values_setter),CHKREF(YLvecG),T74);
  T76 = (P)YPpair(CHKREF(Yast_evalYLloc_envG),Ynil);
  T75 = CALL3(CHKREF(YPisa),T76,Ynil,Ynil);
  Yast_evalYDnul_loc_env = T75;
  regsym(&Yast_evalYDnul_loc_env,"ast-eval","$nul-loc-env");
  lit_20 = YPPsym((P)"env-frame!");
  lit_21 = YPPsym((P)"args");
  lit_22 = YPPsym((P)"names");
  lit_23 = YPPsym((P)"function");
  lit_24 = YPPsym((P)"env");
  T77 = YPsig(YPPlist(4,CHKREF(lit_24),CHKREF(lit_23),CHKREF(lit_22),CHKREF(lit_21)),YPPlist(4,CHKREF(Yast_evalYLloc_envG),CHKREF(YLanyG),CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)4),CHKREF(Yast_evalYLloc_envG));
  fun_17 = YPmet(FUNCODEREF(fun_17),CHKREF(lit_20),T77,ENVNUL);
  T81 = BOUNDP(Yast_evalYenv_frameX);
  if (T81 != YPfalse) {
    T80 = CHKREF(Yast_evalYenv_frameX);
  } else {
    T80 = YPfalse;
  }
  T79 = fun_17;
  T78 = CALL2(CHKREF(YPdefine_method),T80,T79);
  Yast_evalYenv_frameX = T78;
  regsym(&Yast_evalYenv_frameX,"ast-eval","env-frame!");
  lit_25 = YPPsym((P)"env-local-value");
  lit_26 = YPPsym((P)"j");
  lit_27 = YPPsym((P)"i");
  T82 = YPsig(YPPlist(3,CHKREF(lit_24),CHKREF(lit_27),CHKREF(lit_26)),YPPlist(3,CHKREF(Yast_evalYLloc_envG),CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_18 = YPmet(FUNCODEREF(fun_18),CHKREF(lit_25),T82,ENVNUL);
  T86 = BOUNDP(Yast_evalYenv_local_value);
  if (T86 != YPfalse) {
    T85 = CHKREF(Yast_evalYenv_local_value);
  } else {
    T85 = YPfalse;
  }
  T84 = fun_18;
  T83 = CALL2(CHKREF(YPdefine_method),T85,T84);
  Yast_evalYenv_local_value = T83;
  regsym(&Yast_evalYenv_local_value,"ast-eval","env-local-value");
  lit_28 = YPPsym((P)"env-local-value-setter");
  T87 = YPsig(YPPlist(4,CHKREF(lit_9),CHKREF(lit_24),CHKREF(lit_27),CHKREF(lit_26)),YPPlist(4,CHKREF(YLanyG),CHKREF(Yast_evalYLloc_envG),CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_19 = YPmet(FUNCODEREF(fun_19),CHKREF(lit_28),T87,ENVNUL);
  T91 = BOUNDP(Yast_evalYenv_local_value_setter);
  if (T91 != YPfalse) {
    T90 = CHKREF(Yast_evalYenv_local_value_setter);
  } else {
    T90 = YPfalse;
  }
  T89 = fun_19;
  T88 = CALL2(CHKREF(YPdefine_method),T90,T89);
  Yast_evalYenv_local_value_setter = T88;
  regsym(&Yast_evalYenv_local_value_setter,"ast-eval","env-local-value-setter");
  lit_29 = YPPsym((P)"env-binding-value");
  lit_30 = YPPsym((P)"name");
  lit_31 = YPPsym((P)"loop");
  T93 = YPsig(YPPlist(2,CHKREF(lit_22),CHKREF(lit_27)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_20 = YPmet(FUNCODEREF(fun_loop_20),CHKREF(lit_31),T93,ENVNUL);
  T92 = YPsig(YPPlist(2,CHKREF(lit_24),CHKREF(lit_30)),YPPlist(2,CHKREF(Yast_evalYLloc_envG),CHKREF(YLsymG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_21 = YPmet(FUNCODEREF(fun_21),CHKREF(lit_29),T92,ENVNUL);
  T97 = BOUNDP(Yast_evalYenv_binding_value);
  if (T97 != YPfalse) {
    T96 = CHKREF(Yast_evalYenv_binding_value);
  } else {
    T96 = YPfalse;
  }
  T95 = fun_21;
  T94 = CALL2(CHKREF(YPdefine_method),T96,T95);
  Yast_evalYenv_binding_value = T94;
  regsym(&Yast_evalYenv_binding_value,"ast-eval","env-binding-value");
  lit_32 = YPPsym((P)"env-binding-value-setter");
  T99 = YPsig(YPPlist(2,CHKREF(lit_22),CHKREF(lit_27)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_22 = YPmet(FUNCODEREF(fun_loop_22),CHKREF(lit_31),T99,ENVNUL);
  T98 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_24),CHKREF(lit_30)),YPPlist(3,CHKREF(YLanyG),CHKREF(Yast_evalYLloc_envG),CHKREF(YLsymG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_23 = YPmet(FUNCODEREF(fun_23),CHKREF(lit_32),T98,ENVNUL);
  T103 = BOUNDP(Yast_evalYenv_binding_value_setter);
  if (T103 != YPfalse) {
    T102 = CHKREF(Yast_evalYenv_binding_value_setter);
  } else {
    T102 = YPfalse;
  }
  T101 = fun_23;
  T100 = CALL2(CHKREF(YPdefine_method),T102,T101);
  Yast_evalYenv_binding_value_setter = T100;
  regsym(&Yast_evalYenv_binding_value_setter,"ast-eval","env-binding-value-setter");
  lit_33 = YPPsym((P)"ast-evaluate");
  lit_34 = YPPsym((P)"e");
  T104 = YPsig(YPPlist(1,CHKREF(lit_34)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_24 = YPmet(FUNCODEREF(fun_24),CHKREF(lit_33),T104,ENVNUL);
  T108 = BOUNDP(YastYast_evaluate);
  if (T108 != YPfalse) {
    T107 = CHKREF(YastYast_evaluate);
  } else {
    T107 = YPfalse;
  }
  T106 = fun_24;
  T105 = CALL2(CHKREF(YPdefine_method),T107,T106);
  YastYast_evaluate = T105;
  regsym(&YastYast_evaluate,"ast","ast-evaluate");
  lit_35 = YPPsym((P)"ast-eval");
  T110 = YPsig(YPPlist(2,CHKREF(lit_34),CHKREF(lit_24)),YPPlist(2,CHKREF(YastYLprogramG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  T109 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),CHKREF(lit_35),T110,Ynil,YPfalse);
  Yast_evalYast_eval = T109;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T111 = YPsig(YPPlist(2,CHKREF(lit_34),CHKREF(lit_24)),YPPlist(2,CHKREF(YastYLconstantG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_25 = YPmet(FUNCODEREF(fun_25),CHKREF(lit_35),T111,ENVNUL);
  T115 = BOUNDP(Yast_evalYast_eval);
  if (T115 != YPfalse) {
    T114 = CHKREF(Yast_evalYast_eval);
  } else {
    T114 = YPfalse;
  }
  T113 = fun_25;
  T112 = CALL2(CHKREF(YPdefine_method),T114,T113);
  Yast_evalYast_eval = T112;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T116 = YPsig(YPPlist(2,CHKREF(lit_34),CHKREF(lit_24)),YPPlist(2,CHKREF(YastYLraw_constantG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_26 = YPmet(FUNCODEREF(fun_26),CHKREF(lit_35),T116,ENVNUL);
  T120 = BOUNDP(Yast_evalYast_eval);
  if (T120 != YPfalse) {
    T119 = CHKREF(Yast_evalYast_eval);
  } else {
    T119 = YPfalse;
  }
  T118 = fun_26;
  T117 = CALL2(CHKREF(YPdefine_method),T119,T118);
  Yast_evalYast_eval = T117;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  lit_36 = YPPsym((P)"ee");
  T121 = YPsig(YPPlist(2,CHKREF(lit_34),CHKREF(lit_36)),YPPlist(2,CHKREF(YastYLcompile_timeG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_27 = YPmet(FUNCODEREF(fun_27),CHKREF(lit_35),T121,ENVNUL);
  T125 = BOUNDP(Yast_evalYast_eval);
  if (T125 != YPfalse) {
    T124 = CHKREF(Yast_evalYast_eval);
  } else {
    T124 = YPfalse;
  }
  T123 = fun_27;
  T122 = CALL2(CHKREF(YPdefine_method),T124,T123);
  Yast_evalYast_eval = T122;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  lit_37 = YPPsym((P)"ast-eval-specs");
  lit_38 = YPPsym((P)"nary?");
  lit_39 = YPPsym((P)"specs");
  lit_40 = YPPsym((P)"res");
  T127 = YPsig(YPPlist(3,CHKREF(lit_40),CHKREF(lit_39),CHKREF(lit_27)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_loop_28 = YPmet(FUNCODEREF(fun_loop_28),CHKREF(lit_31),T127,ENVNUL);
  T126 = YPsig(YPPlist(3,CHKREF(lit_39),CHKREF(lit_38),CHKREF(lit_24)),YPPlist(3,CHKREF(YLlstG),CHKREF(YLlogG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_29 = YPmet(FUNCODEREF(fun_29),CHKREF(lit_37),T126,ENVNUL);
  T131 = BOUNDP(Yast_evalYast_eval_specs);
  if (T131 != YPfalse) {
    T130 = CHKREF(Yast_evalYast_eval_specs);
  } else {
    T130 = YPfalse;
  }
  T129 = fun_29;
  T128 = CALL2(CHKREF(YPdefine_method),T130,T129);
  Yast_evalYast_eval_specs = T128;
  regsym(&Yast_evalYast_eval_specs,"ast-eval","ast-eval-specs");
  T132 = CALL2(CHKREF(YruntimeYfab),CHKREF(YruntimeYLbufG),YPint((P)0));
  Yast_evalYTstackT = T132;
  regsym(&Yast_evalYTstackT,"ast-eval","*stack*");
  lit_41 = YPPsym((P)"exp");
  lit_42 = YPPsym((P)"return");
  lit_43 = YPPsym((P)"frame");
  lit_44 = YPPsym((P)"nms");
  lit_45 = YPPsym((P)"lst");
  lit_46 = YPPsym((P)"%next-methods");
  lit_47 = YPPsym((P)"quote");
  lit_48 = YPPsym((P)"cat2");
  lit_49 = YPPsym((P)"let");
  lit_50 = YPPsym((P)"fun");
  lit_51 = YPsb((P)"Match Pattern Failure");
  lit_52 = YPPsym((P)"ifun");
  lit_53 = YPPsym((P)"x-1263");
  lit_54 = YPPsym((P)"msg");
  T135 = YPsig(YPPlist(2,CHKREF(lit_54),CHKREF(lit_21)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1263_30 = YPmet(FUNCODEREF(fun_x_1263_30),CHKREF(lit_53),T135,ENVNUL);
  T134 = YPsig(YPPlist(1,CHKREF(lit_42)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T134,ENVNUL);
  T133 = YPsig(YPPlist(1,CHKREF(lit_41)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T133,ENVNUL);
  T136 = fun_32;
  YPmacro(YPPsym((P)"ast-eval"),YPPsym((P)"ifun"),T136);
  lit_55 = YPPsym((P)"as-fun-name");
  T137 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_33 = YPmet(FUNCODEREF(fun_33),CHKREF(lit_55),T137,ENVNUL);
  T141 = BOUNDP(Yast_evalYas_fun_name);
  if (T141 != YPfalse) {
    T140 = CHKREF(Yast_evalYas_fun_name);
  } else {
    T140 = YPfalse;
  }
  T139 = fun_33;
  T138 = CALL2(CHKREF(YPdefine_method),T140,T139);
  Yast_evalYas_fun_name = T138;
  regsym(&Yast_evalYas_fun_name,"ast-eval","as-fun-name");
  T142 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YastYLast_functionG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_34 = YPmet(FUNCODEREF(fun_34),CHKREF(lit_55),T142,ENVNUL);
  T146 = BOUNDP(Yast_evalYas_fun_name);
  if (T146 != YPfalse) {
    T145 = CHKREF(Yast_evalYas_fun_name);
  } else {
    T145 = YPfalse;
  }
  T144 = fun_34;
  T143 = CALL2(CHKREF(YPdefine_method),T145,T144);
  Yast_evalYas_fun_name = T143;
  regsym(&Yast_evalYas_fun_name,"ast-eval","as-fun-name");
  T147 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YastYLmodule_bindingG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_35 = YPmet(FUNCODEREF(fun_35),CHKREF(lit_55),T147,ENVNUL);
  T151 = BOUNDP(Yast_evalYas_fun_name);
  if (T151 != YPfalse) {
    T150 = CHKREF(Yast_evalYas_fun_name);
  } else {
    T150 = YPfalse;
  }
  T149 = fun_35;
  T148 = CALL2(CHKREF(YPdefine_method),T150,T149);
  Yast_evalYas_fun_name = T148;
  regsym(&Yast_evalYas_fun_name,"ast-eval","as-fun-name");
  T152 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YastYLconstantG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_36 = YPmet(FUNCODEREF(fun_36),CHKREF(lit_55),T152,ENVNUL);
  T156 = BOUNDP(Yast_evalYas_fun_name);
  if (T156 != YPfalse) {
    T155 = CHKREF(Yast_evalYas_fun_name);
  } else {
    T155 = YPfalse;
  }
  T154 = fun_36;
  T153 = CALL2(CHKREF(YPdefine_method),T155,T154);
  Yast_evalYas_fun_name = T153;
  regsym(&Yast_evalYas_fun_name,"ast-eval","as-fun-name");
  T157 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLsymG)),YPfalse,YPint((P)1),CHKREF(YLsymG));
  fun_37 = YPmet(FUNCODEREF(fun_37),CHKREF(lit_55),T157,ENVNUL);
  T161 = BOUNDP(Yast_evalYas_fun_name);
  if (T161 != YPfalse) {
    T160 = CHKREF(Yast_evalYas_fun_name);
  } else {
    T160 = YPfalse;
  }
  T159 = fun_37;
  T158 = CALL2(CHKREF(YPdefine_method),T160,T159);
  Yast_evalYas_fun_name = T158;
  regsym(&Yast_evalYas_fun_name,"ast-eval","as-fun-name");
  T162 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_38 = YPmet(FUNCODEREF(fun_38),CHKREF(lit_55),T162,ENVNUL);
  T166 = BOUNDP(Yast_evalYas_fun_name);
  if (T166 != YPfalse) {
    T165 = CHKREF(Yast_evalYas_fun_name);
  } else {
    T165 = YPfalse;
  }
  T164 = fun_38;
  T163 = CALL2(CHKREF(YPdefine_method),T165,T164);
  Yast_evalYas_fun_name = T163;
  regsym(&Yast_evalYas_fun_name,"ast-eval","as-fun-name");
  lit_56 = YPPsym((P)"export-proto-method");
  lit_57 = YPPsym((P)"body");
  lit_58 = YPPsym((P)"f");
  lit_59 = YPPsym((P)"a9");
  lit_60 = YPPsym((P)"a8");
  lit_61 = YPPsym((P)"a7");
  lit_62 = YPPsym((P)"a6");
  lit_63 = YPPsym((P)"a5");
  lit_64 = YPPsym((P)"a4");
  lit_65 = YPPsym((P)"a3");
  lit_66 = YPPsym((P)"a2");
  lit_67 = YPPsym((P)"a1");
  T177 = YPsig(YPPlist(9,CHKREF(lit_67),CHKREF(lit_66),CHKREF(lit_65),CHKREF(lit_64),CHKREF(lit_63),CHKREF(lit_62),CHKREF(lit_61),CHKREF(lit_60),CHKREF(lit_59)),YPPlist(9,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)9),CHKREF(YLanyG));
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T177,ENVNUL);
  T176 = YPsig(YPPlist(8,CHKREF(lit_67),CHKREF(lit_66),CHKREF(lit_65),CHKREF(lit_64),CHKREF(lit_63),CHKREF(lit_62),CHKREF(lit_61),CHKREF(lit_60)),YPPlist(8,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)8),CHKREF(YLanyG));
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T176,ENVNUL);
  T175 = YPsig(YPPlist(7,CHKREF(lit_67),CHKREF(lit_66),CHKREF(lit_65),CHKREF(lit_64),CHKREF(lit_63),CHKREF(lit_62),CHKREF(lit_61)),YPPlist(7,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)7),CHKREF(YLanyG));
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T175,ENVNUL);
  T174 = YPsig(YPPlist(6,CHKREF(lit_67),CHKREF(lit_66),CHKREF(lit_65),CHKREF(lit_64),CHKREF(lit_63),CHKREF(lit_62)),YPPlist(6,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)6),CHKREF(YLanyG));
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T174,ENVNUL);
  T173 = YPsig(YPPlist(5,CHKREF(lit_67),CHKREF(lit_66),CHKREF(lit_65),CHKREF(lit_64),CHKREF(lit_63)),YPPlist(5,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)5),CHKREF(YLanyG));
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T173,ENVNUL);
  T172 = YPsig(YPPlist(4,CHKREF(lit_67),CHKREF(lit_66),CHKREF(lit_65),CHKREF(lit_64)),YPPlist(4,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T172,ENVNUL);
  T171 = YPsig(YPPlist(3,CHKREF(lit_67),CHKREF(lit_66),CHKREF(lit_65)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T171,ENVNUL);
  T170 = YPsig(YPPlist(2,CHKREF(lit_67),CHKREF(lit_66)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_46 = YPmet(FUNCODEREF(fun_46),YPfalse,T170,ENVNUL);
  T169 = YPsig(YPPlist(1,CHKREF(lit_67)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T169,ENVNUL);
  T168 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T168,ENVNUL);
  T167 = YPsig(YPPlist(7,CHKREF(lit_58),CHKREF(lit_22),CHKREF(lit_39),CHKREF(lit_38),CHKREF(lit_4),CHKREF(lit_57),CHKREF(lit_24)),YPPlist(7,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)7),CHKREF(YLanyG));
  fun_49 = YPmet(FUNCODEREF(fun_49),CHKREF(lit_56),T167,ENVNUL);
  T181 = BOUNDP(Yast_evalYexport_proto_method);
  if (T181 != YPfalse) {
    T180 = CHKREF(Yast_evalYexport_proto_method);
  } else {
    T180 = YPfalse;
  }
  T179 = fun_49;
  T178 = CALL2(CHKREF(YPdefine_method),T180,T179);
  Yast_evalYexport_proto_method = T178;
  regsym(&Yast_evalYexport_proto_method,"ast-eval","export-proto-method");
  T183 = YPsig(YPPlist(1,CHKREF(lit_24)),YPPlist(1,CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T183,ENVNUL);
  T182 = YPsig(YPPlist(2,CHKREF(lit_34),CHKREF(lit_24)),YPPlist(2,CHKREF(YastYLast_methodG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_51 = YPmet(FUNCODEREF(fun_51),CHKREF(lit_35),T182,ENVNUL);
  T187 = BOUNDP(Yast_evalYast_eval);
  if (T187 != YPfalse) {
    T186 = CHKREF(Yast_evalYast_eval);
  } else {
    T186 = YPfalse;
  }
  T185 = fun_51;
  T184 = CALL2(CHKREF(YPdefine_method),T186,T185);
  Yast_evalYast_eval = T184;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T188 = YPsig(YPPlist(2,CHKREF(lit_34),CHKREF(lit_24)),YPPlist(2,CHKREF(YastYLast_genericG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_52 = YPmet(FUNCODEREF(fun_52),CHKREF(lit_35),T188,ENVNUL);
  T192 = BOUNDP(Yast_evalYast_eval);
  if (T192 != YPfalse) {
    T191 = CHKREF(Yast_evalYast_eval);
  } else {
    T191 = YPfalse;
  }
  T190 = fun_52;
  T189 = CALL2(CHKREF(YPdefine_method),T191,T190);
  Yast_evalYast_eval = T189;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  lit_68 = YPPsym((P)"env-local-reference-value");
  lit_69 = YPPsym((P)"ref");
  T193 = YPsig(YPPlist(2,CHKREF(lit_24),CHKREF(lit_69)),YPPlist(2,CHKREF(Yast_evalYLloc_envG),CHKREF(YastYLlocal_referenceG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_53 = YPmet(FUNCODEREF(fun_53),CHKREF(lit_68),T193,ENVNUL);
  T197 = BOUNDP(Yast_evalYenv_local_reference_value);
  if (T197 != YPfalse) {
    T196 = CHKREF(Yast_evalYenv_local_reference_value);
  } else {
    T196 = YPfalse;
  }
  T195 = fun_53;
  T194 = CALL2(CHKREF(YPdefine_method),T196,T195);
  Yast_evalYenv_local_reference_value = T194;
  regsym(&Yast_evalYenv_local_reference_value,"ast-eval","env-local-reference-value");
  lit_70 = YPPsym((P)"env-local-reference-value-setter");
  lit_71 = YPPsym((P)"val");
  T198 = YPsig(YPPlist(3,CHKREF(lit_71),CHKREF(lit_24),CHKREF(lit_69)),YPPlist(3,CHKREF(YLanyG),CHKREF(Yast_evalYLloc_envG),CHKREF(YastYLlocal_referenceG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_54 = YPmet(FUNCODEREF(fun_54),CHKREF(lit_70),T198,ENVNUL);
  T202 = BOUNDP(Yast_evalYenv_local_reference_value_setter);
  if (T202 != YPfalse) {
    T201 = CHKREF(Yast_evalYenv_local_reference_value_setter);
  } else {
    T201 = YPfalse;
  }
  T200 = fun_54;
  T199 = CALL2(CHKREF(YPdefine_method),T201,T200);
  Yast_evalYenv_local_reference_value_setter = T199;
  regsym(&Yast_evalYenv_local_reference_value_setter,"ast-eval","env-local-reference-value-setter");
  T203 = YPsig(YPPlist(2,CHKREF(lit_34),CHKREF(lit_24)),YPPlist(2,CHKREF(YastYLlocal_referenceG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_55 = YPmet(FUNCODEREF(fun_55),CHKREF(lit_35),T203,ENVNUL);
  T207 = BOUNDP(Yast_evalYast_eval);
  if (T207 != YPfalse) {
    T206 = CHKREF(Yast_evalYast_eval);
  } else {
    T206 = YPfalse;
  }
  T205 = fun_55;
  T204 = CALL2(CHKREF(YPdefine_method),T206,T205);
  Yast_evalYast_eval = T204;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T208 = YPsig(YPPlist(2,CHKREF(lit_34),CHKREF(lit_24)),YPPlist(2,CHKREF(YastYLglobal_referenceG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_56 = YPmet(FUNCODEREF(fun_56),CHKREF(lit_35),T208,ENVNUL);
  T212 = BOUNDP(Yast_evalYast_eval);
  if (T212 != YPfalse) {
    T211 = CHKREF(Yast_evalYast_eval);
  } else {
    T211 = YPfalse;
  }
  T210 = fun_56;
  T209 = CALL2(CHKREF(YPdefine_method),T211,T210);
  Yast_evalYast_eval = T209;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T213 = YPsig(YPPlist(2,CHKREF(lit_34),CHKREF(lit_24)),YPPlist(2,CHKREF(YastYLruntime_referenceG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_57 = YPmet(FUNCODEREF(fun_57),CHKREF(lit_35),T213,ENVNUL);
  T217 = BOUNDP(Yast_evalYast_eval);
  if (T217 != YPfalse) {
    T216 = CHKREF(Yast_evalYast_eval);
  } else {
    T216 = YPfalse;
  }
  T215 = fun_57;
  T214 = CALL2(CHKREF(YPdefine_method),T216,T215);
  Yast_evalYast_eval = T214;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T218 = YPsig(YPPlist(2,CHKREF(lit_34),CHKREF(lit_24)),YPPlist(2,CHKREF(YastYLboundQG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_58 = YPmet(FUNCODEREF(fun_58),CHKREF(lit_35),T218,ENVNUL);
  T222 = BOUNDP(Yast_evalYast_eval);
  if (T222 != YPfalse) {
    T221 = CHKREF(Yast_evalYast_eval);
  } else {
    T221 = YPfalse;
  }
  T220 = fun_58;
  T219 = CALL2(CHKREF(YPdefine_method),T221,T220);
  Yast_evalYast_eval = T219;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  lit_72 = YPPsym((P)"ast-eval-bound?");
  lit_73 = YPPsym((P)"binding");
  lit_74 = YPPsym((P)"global");
  T223 = YPsig(YPPlist(3,CHKREF(lit_34),CHKREF(lit_73),CHKREF(lit_24)),YPPlist(3,CHKREF(YastYLboundQG),CHKREF(YastYLmodule_bindingG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_59 = YPmet(FUNCODEREF(fun_59),CHKREF(lit_72),T223,ENVNUL);
  T227 = BOUNDP(Yast_evalYast_eval_boundQ);
  if (T227 != YPfalse) {
    T226 = CHKREF(Yast_evalYast_eval_boundQ);
  } else {
    T226 = YPfalse;
  }
  T225 = fun_59;
  T224 = CALL2(CHKREF(YPdefine_method),T226,T225);
  Yast_evalYast_eval_boundQ = T224;
  regsym(&Yast_evalYast_eval_boundQ,"ast-eval","ast-eval-bound?");
  T228 = YPsig(YPPlist(3,CHKREF(lit_34),CHKREF(lit_73),CHKREF(lit_24)),YPPlist(3,CHKREF(YastYLboundQG),CHKREF(YastYLlocal_bindingG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_60 = YPmet(FUNCODEREF(fun_60),CHKREF(lit_72),T228,ENVNUL);
  T232 = BOUNDP(Yast_evalYast_eval_boundQ);
  if (T232 != YPfalse) {
    T231 = CHKREF(Yast_evalYast_eval_boundQ);
  } else {
    T231 = YPfalse;
  }
  T230 = fun_60;
  T229 = CALL2(CHKREF(YPdefine_method),T231,T230);
  Yast_evalYast_eval_boundQ = T229;
  regsym(&Yast_evalYast_eval_boundQ,"ast-eval","ast-eval-bound?");
  T233 = YPsig(YPPlist(2,CHKREF(lit_34),CHKREF(lit_24)),YPPlist(2,CHKREF(YastYLglobal_assignmentG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_61 = YPmet(FUNCODEREF(fun_61),CHKREF(lit_35),T233,ENVNUL);
  T237 = BOUNDP(Yast_evalYast_eval);
  if (T237 != YPfalse) {
    T236 = CHKREF(Yast_evalYast_eval);
  } else {
    T236 = YPfalse;
  }
  T235 = fun_61;
  T234 = CALL2(CHKREF(YPdefine_method),T236,T235);
  Yast_evalYast_eval = T234;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T238 = YPsig(YPPlist(2,CHKREF(lit_34),CHKREF(lit_24)),YPPlist(2,CHKREF(YastYLast_macro_definitionG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_62 = YPmet(FUNCODEREF(fun_62),CHKREF(lit_35),T238,ENVNUL);
  T242 = BOUNDP(Yast_evalYast_eval);
  if (T242 != YPfalse) {
    T241 = CHKREF(Yast_evalYast_eval);
  } else {
    T241 = YPfalse;
  }
  T240 = fun_62;
  T239 = CALL2(CHKREF(YPdefine_method),T241,T240);
  Yast_evalYast_eval = T239;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T243 = YPsig(YPPlist(2,CHKREF(lit_34),CHKREF(lit_24)),YPPlist(2,CHKREF(YastYLruntime_assignmentG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_63 = YPmet(FUNCODEREF(fun_63),CHKREF(lit_35),T243,ENVNUL);
  T247 = BOUNDP(Yast_evalYast_eval);
  if (T247 != YPfalse) {
    T246 = CHKREF(Yast_evalYast_eval);
  } else {
    T246 = YPfalse;
  }
  T245 = fun_63;
  T244 = CALL2(CHKREF(YPdefine_method),T246,T245);
  Yast_evalYast_eval = T244;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T248 = YPsig(YPPlist(2,CHKREF(lit_34),CHKREF(lit_24)),YPPlist(2,CHKREF(YastYLlocal_assignmentG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_64 = YPmet(FUNCODEREF(fun_64),CHKREF(lit_35),T248,ENVNUL);
  T252 = BOUNDP(Yast_evalYast_eval);
  if (T252 != YPfalse) {
    T251 = CHKREF(Yast_evalYast_eval);
  } else {
    T251 = YPfalse;
  }
  T250 = fun_64;
  T249 = CALL2(CHKREF(YPdefine_method),T251,T250);
  Yast_evalYast_eval = T249;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  lit_75 = YPPsym((P)"env-define-binding!");
  lit_76 = YPsb((P)"Defining invalid binding kind %=");
  lit_77 = YPPsym((P)"runtime");
  T253 = YPsig(YPPlist(2,CHKREF(lit_1),CHKREF(lit_9)),YPPlist(2,CHKREF(YastYLmodule_bindingG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_65 = YPmet(FUNCODEREF(fun_65),CHKREF(lit_75),T253,ENVNUL);
  T257 = BOUNDP(Yast_evalYenv_define_bindingX);
  if (T257 != YPfalse) {
    T256 = CHKREF(Yast_evalYenv_define_bindingX);
  } else {
    T256 = YPfalse;
  }
  T255 = fun_65;
  T254 = CALL2(CHKREF(YPdefine_method),T256,T255);
  Yast_evalYenv_define_bindingX = T254;
  regsym(&Yast_evalYenv_define_bindingX,"ast-eval","env-define-binding!");
  T258 = YPsig(YPPlist(2,CHKREF(lit_34),CHKREF(lit_24)),YPPlist(2,CHKREF(YastYLdefinitionG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_66 = YPmet(FUNCODEREF(fun_66),CHKREF(lit_35),T258,ENVNUL);
  T262 = BOUNDP(Yast_evalYast_eval);
  if (T262 != YPfalse) {
    T261 = CHKREF(Yast_evalYast_eval);
  } else {
    T261 = YPfalse;
  }
  T260 = fun_66;
  T259 = CALL2(CHKREF(YPdefine_method),T261,T260);
  Yast_evalYast_eval = T259;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T263 = YPsig(YPPlist(2,CHKREF(lit_34),CHKREF(lit_24)),YPPlist(2,CHKREF(YastYLalternativeG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_67 = YPmet(FUNCODEREF(fun_67),CHKREF(lit_35),T263,ENVNUL);
  T267 = BOUNDP(Yast_evalYast_eval);
  if (T267 != YPfalse) {
    T266 = CHKREF(Yast_evalYast_eval);
  } else {
    T266 = YPfalse;
  }
  T265 = fun_67;
  T264 = CALL2(CHKREF(YPdefine_method),T266,T265);
  Yast_evalYast_eval = T264;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  lit_78 = YPPsym((P)"eval");
  T269 = YPsig(YPPlist(1,CHKREF(lit_34)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_eval_68 = YPmet(FUNCODEREF(fun_eval_68),CHKREF(lit_78),T269,ENVNUL);
  T268 = YPsig(YPPlist(2,CHKREF(lit_34),CHKREF(lit_24)),YPPlist(2,CHKREF(YastYLsequentialG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_69 = YPmet(FUNCODEREF(fun_69),CHKREF(lit_35),T268,ENVNUL);
  T273 = BOUNDP(Yast_evalYast_eval);
  if (T273 != YPfalse) {
    T272 = CHKREF(Yast_evalYast_eval);
  } else {
    T272 = YPfalse;
  }
  T271 = fun_69;
  T270 = CALL2(CHKREF(YPdefine_method),T272,T271);
  Yast_evalYast_eval = T270;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T275 = YPsig(YPPlist(2,CHKREF(lit_40),CHKREF(lit_21)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_eval_70 = YPmet(FUNCODEREF(fun_eval_70),CHKREF(lit_78),T275,ENVNUL);
  T274 = YPsig(YPPlist(2,CHKREF(lit_34),CHKREF(lit_24)),YPPlist(2,CHKREF(YastYLargumentsG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_71 = YPmet(FUNCODEREF(fun_71),CHKREF(lit_35),T274,ENVNUL);
  T279 = BOUNDP(Yast_evalYast_eval);
  if (T279 != YPfalse) {
    T278 = CHKREF(Yast_evalYast_eval);
  } else {
    T278 = YPfalse;
  }
  T277 = fun_71;
  T276 = CALL2(CHKREF(YPdefine_method),T278,T277);
  Yast_evalYast_eval = T276;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T280 = YPsig(YPPlist(2,CHKREF(lit_34),CHKREF(lit_24)),YPPlist(2,CHKREF(YastYLregular_applicationG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_72 = YPmet(FUNCODEREF(fun_72),CHKREF(lit_35),T280,ENVNUL);
  T284 = BOUNDP(Yast_evalYast_eval);
  if (T284 != YPfalse) {
    T283 = CHKREF(Yast_evalYast_eval);
  } else {
    T283 = YPfalse;
  }
  T282 = fun_72;
  T281 = CALL2(CHKREF(YPdefine_method),T283,T282);
  Yast_evalYast_eval = T281;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T287 = YPsig(YPPlist(2,CHKREF(lit_34),CHKREF(lit_24)),YPPlist(2,CHKREF(YastYLpredefined_applicationG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  T286 = fun_73 = YPmet(FUNCODEREF(fun_73),CHKREF(lit_35),T287,ENVNUL);
  T292 = BOUNDP(Yast_evalYast_eval);
  if (T292 != YPfalse) {
    T291 = CHKREF(Yast_evalYast_eval);
  } else {
    T291 = YPfalse;
  }
  T290 = fun_73;
  T289 = CALL2(CHKREF(YPdefine_method),T291,T290);
  T288 = Yast_evalYast_eval = T289;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T285 = T288;
  return T285;
}

P Yast_evalY___main_1___() {
  P T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
loop:
  T0 = YPsig(YPPlist(2,CHKREF(lit_34),CHKREF(lit_24)),YPPlist(2,CHKREF(YastYLfix_letG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_74 = YPmet(FUNCODEREF(fun_74),CHKREF(lit_35),T0,ENVNUL);
  T4 = BOUNDP(Yast_evalYast_eval);
  if (T4 != YPfalse) {
    T3 = CHKREF(Yast_evalYast_eval);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_74;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  Yast_evalYast_eval = T1;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T6 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_4)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T6,ENVNUL);
  T5 = YPsig(YPPlist(2,CHKREF(lit_34),CHKREF(lit_24)),YPPlist(2,CHKREF(YastYLlocalsG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_76 = YPmet(FUNCODEREF(fun_76),CHKREF(lit_35),T5,ENVNUL);
  T10 = BOUNDP(Yast_evalYast_eval);
  if (T10 != YPfalse) {
    T9 = CHKREF(Yast_evalYast_eval);
  } else {
    T9 = YPfalse;
  }
  T8 = fun_76;
  T7 = CALL2(CHKREF(YPdefine_method),T9,T8);
  Yast_evalYast_eval = T7;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T13 = YPsig(YPPlist(1,CHKREF(lit_24)),YPPlist(1,CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_77 = YPmet(FUNCODEREF(fun_77),YPfalse,T13,ENVNUL);
  T12 = YPsig(YPPlist(1,CHKREF(lit_42)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_78 = YPmet(FUNCODEREF(fun_78),YPfalse,T12,ENVNUL);
  T11 = YPsig(YPPlist(2,CHKREF(lit_34),CHKREF(lit_24)),YPPlist(2,CHKREF(YastYLbind_exitG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_79 = YPmet(FUNCODEREF(fun_79),CHKREF(lit_35),T11,ENVNUL);
  T17 = BOUNDP(Yast_evalYast_eval);
  if (T17 != YPfalse) {
    T16 = CHKREF(Yast_evalYast_eval);
  } else {
    T16 = YPfalse;
  }
  T15 = fun_79;
  T14 = CALL2(CHKREF(YPdefine_method),T16,T15);
  Yast_evalYast_eval = T14;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T20 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T20,ENVNUL);
  T19 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T19,ENVNUL);
  T18 = YPsig(YPPlist(2,CHKREF(lit_34),CHKREF(lit_24)),YPPlist(2,CHKREF(YastYLunwind_protectG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_82 = YPmet(FUNCODEREF(fun_82),CHKREF(lit_35),T18,ENVNUL);
  T24 = BOUNDP(Yast_evalYast_eval);
  if (T24 != YPfalse) {
    T23 = CHKREF(Yast_evalYast_eval);
  } else {
    T23 = YPfalse;
  }
  T22 = fun_82;
  T21 = CALL2(CHKREF(YPdefine_method),T23,T22);
  Yast_evalYast_eval = T21;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T25 = YPsig(YPPlist(2,CHKREF(lit_34),CHKREF(lit_24)),YPPlist(2,CHKREF(YastYLmonitorG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_83 = YPmet(FUNCODEREF(fun_83),CHKREF(lit_35),T25,ENVNUL);
  T29 = BOUNDP(Yast_evalYast_eval);
  if (T29 != YPfalse) {
    T28 = CHKREF(Yast_evalYast_eval);
  } else {
    T28 = YPfalse;
  }
  T27 = fun_83;
  T26 = CALL2(CHKREF(YPdefine_method),T28,T27);
  Yast_evalYast_eval = T26;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  lit_79 = YPPsym((P)"init-environment-for-eval");
  lit_80 = YPPsym((P)"%pair");
  lit_81 = YPPsym((P)"predefined");
  T30 = YPsig(YPPlist(1,CHKREF(lit_24)),YPPlist(1,CHKREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YastYinit_environment_for_eval = YPmet(FUNCODEREF(YastYinit_environment_for_eval),CHKREF(lit_79),T30,ENVNUL);
  T31 = YastYinit_environment_for_eval;
  YastYinit_environment_for_eval = T31;
  regsym(&YastYinit_environment_for_eval,"ast","init-environment-for-eval");
  T32 = YPfalse;
  return T32;
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
  {"locative-value", &module_info_runtime, "locative-value"},
  {"binding-value-setter", &module_info_ast, "binding-value-setter"},
  {"function-body-setter", &module_info_ast, "function-body-setter"},
  {"compile-time-program", &module_info_ast, "compile-time-program"},
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
  {"<computed-program>", &module_info_ast, "<computed-program>"},
  {"assq", &module_info_runtime, "assq"},
  {"ceiling/", &module_info_runtime, "ceiling/"},
  {"=", &module_info_runtime, "="},
  {"slot-init", &module_info_boot, "slot-init"},
  {"assignment-binding", &module_info_ast, "assignment-binding"},
  {"export", &module_info_boot, "export"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"module-target-environment", &module_info_ast, "module-target-environment"},
  {"map", &module_info_macros, "map"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"%i!", &module_info_boot, "%i!"},
  {"<ast-primitive>", &module_info_ast, "<ast-primitive>"},
  {"<monitor>", &module_info_ast, "<monitor>"},
  {"function-debug-name-setter", &module_info_ast, "function-debug-name-setter"},
  {"bound?-reference", &module_info_ast, "bound?-reference"},
  {"2nd", &module_info_runtime, "2nd"},
  {"<output-port>", &module_info_runtime, "<output-port>"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"fapply", &module_info_boot, "fapply"},
  {"var-name", &module_info_macros, "var-name"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"module-exports", &module_info_ast, "module-exports"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"locals-functions-setter", &module_info_ast, "locals-functions-setter"},
  {"if", &module_info_boot, "if"},
  {"<int>", &module_info_boot, "<int>"},
  {"alternative-condition", &module_info_ast, "alternative-condition"},
  {"<log>", &module_info_boot, "<log>"},
  {"do2", &module_info_runtime, "do2"},
  {"ini-state", &module_info_runtime, "ini-state"},
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
  {"<ast-primitive-definition>", &module_info_ast, "<ast-primitive-definition>"},
  {"from-below", &module_info_runtime, "from-below"},
  {"<string-input-port>", &module_info_runtime, "<string-input-port>"},
  {"type-or", &module_info_runtime, "type-or"},
  {"popf", &module_info_macros, "popf"},
  {"try", &module_info_boot, "try"},
  {"probe-module", &module_info_ast, "probe-module"},
  {"<runtime-reference>", &module_info_ast, "<runtime-reference>"},
  {"to-digit", &module_info_runtime, "to-digit"},
  {"let", &module_info_boot, "let"},
  {"dp", &module_info_boot, "dp"},
  {"function-nary?", &module_info_ast, "function-nary?"},
  {"char-ready?", &module_info_runtime, "char-ready?"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"as-uppercase", &module_info_runtime, "as-uppercase"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"<compile-time>", &module_info_ast, "<compile-time>"},
  {"<", &module_info_runtime, "<"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"copy-state", &module_info_runtime, "copy-state"},
  {"%lu", &module_info_boot, "%lu"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"ceiling", &module_info_runtime, "ceiling"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"alternative-alternant", &module_info_ast, "alternative-alternant"},
  {"%with-monitor", &module_info_runtime, "%with-monitor"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"eof-object?", &module_info_runtime, "eof-object?"},
  {"<assocs>", &module_info_runtime, "<assocs>"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"cat!", &module_info_runtime, "cat!"},
  {"keys", &module_info_runtime, "keys"},
  {"table-growth-threshold", &module_info_runtime, "table-growth-threshold"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"module-binding", &module_info_ast, "module-binding"},
  {"pos?", &module_info_runtime, "pos?"},
  {"<buf>", &module_info_runtime, "<buf>"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"<raw-constant>", &module_info_ast, "<raw-constant>"},
  {"<col>", &module_info_boot, "<col>"},
  {"pop-last!", &module_info_runtime, "pop-last!"},
  {"binding-type-setter", &module_info_ast, "binding-type-setter"},
  {"fix-let-body-setter", &module_info_ast, "fix-let-body-setter"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"dv", &module_info_boot, "dv"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"%f-", &module_info_boot, "%f-"},
  {"do-module-loader-modules", &module_info_ast, "do-module-loader-modules"},
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
  {"error", &module_info_boot, "error"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"env-object-name", &module_info_write, "env-object-name"},
  {"pair", &module_info_macros, "pair"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
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
  {"from-by", &module_info_runtime, "from-by"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"%str", &module_info_boot, "%str"},
  {"dec", &module_info_macros, "dec"},
  {"identity", &module_info_runtime, "identity"},
  {"<local-reference>", &module_info_ast, "<local-reference>"},
  {"<bound?>", &module_info_ast, "<bound?>"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"bound?", &module_info_boot, "bound?"},
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
  {"df", &module_info_boot, "df"},
  {"$permanent-hash-state", &module_info_runtime, "$permanent-hash-state"},
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
  {"fab", &module_info_runtime, "fab"},
  {"binding-mutable?", &module_info_ast, "binding-mutable?"},
  {"modulo", &module_info_runtime, "modulo"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"environment-uses-modules", &module_info_ast, "environment-uses-modules"},
  {"%f/", &module_info_boot, "%f/"},
  {"init-environment-for-eval", &module_info_ast, "init-environment-for-eval"},
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
  {"init-ast", &module_info_ast, "init-ast"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"<str>", &module_info_boot, "<str>"},
  {"binding-name", &module_info_ast, "binding-name"},
  {"%i&", &module_info_boot, "%i&"},
  {"global-box-value-setter", &module_info_ast, "global-box-value-setter"},
  {"all?", &module_info_runtime, "all?"},
  {"%cb", &module_info_boot, "%cb"},
  {"dm", &module_info_boot, "dm"},
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
  {"<programs>", &module_info_ast, "<programs>"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"<ast-generic>", &module_info_ast, "<ast-generic>"},
  {"%i<", &module_info_boot, "%i<"},
  {"application-known?", &module_info_ast, "application-known?"},
  {"even?", &module_info_runtime, "even?"},
  {"<fab-list>", &module_info_ast, "<fab-list>"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"floor/", &module_info_runtime, "floor/"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
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
  {"object-parents", &module_info_boot, "object-parents"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"reference-binding", &module_info_ast, "reference-binding"},
  {"now-elt", &module_info_runtime, "now-elt"},
  {"-", &module_info_runtime, "-"},
  {"call-with-string-input-port", &module_info_runtime, "call-with-string-input-port"},
  {"<string-port>", &module_info_runtime, "<string-port>"},
  {"%ib", &module_info_boot, "%ib"},
  {"close-input-port", &module_info_runtime, "close-input-port"},
  {"%it/", &module_info_boot, "%it/"},
  {"%do-runtime-bindings", &module_info_boot, "%do-runtime-bindings"},
  {"find-environment-module", &module_info_ast, "find-environment-module"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
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
  {"==", &module_info_macros, "=="},
  {"application-tail?", &module_info_ast, "application-tail?"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"truncate/", &module_info_runtime, "truncate/"},
  {"default-handler", &module_info_runtime, "default-handler"},
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
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"do-keyed", &module_info_runtime, "do-keyed"},
  {"isa", &module_info_boot, "isa"},
  {"not", &module_info_boot, "not"},
  {"logxor", &module_info_runtime, "logxor"},
  {"del-dups", &module_info_runtime, "del-dups"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"as", &module_info_runtime, "as"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"application-known?-setter", &module_info_ast, "application-known?-setter"},
  {"signature-bindings", &module_info_ast, "signature-bindings"},
  {"<any>", &module_info_boot, "<any>"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"nxt-state", &module_info_runtime, "nxt-state"},
  {"~=", &module_info_runtime, "~="},
  {"fix-let-body", &module_info_ast, "fix-let-body"},
  {"<global-assignment>", &module_info_ast, "<global-assignment>"},
  {"app-args", &module_info_runtime, "app-args"},
  {"/", &module_info_runtime, "/"},
  {"reduce+", &module_info_runtime, "reduce+"},
  {"<real-reference>", &module_info_ast, "<real-reference>"},
  {"<global-box>", &module_info_ast, "<global-box>"},
  {"<module>", &module_info_ast, "<module>"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
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
  {"%snul", &module_info_boot, "%snul"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"<=", &module_info_runtime, "<="},
  {"<local-binding>", &module_info_ast, "<local-binding>"},
  {"binding-locative", &module_info_ast, "binding-locative"},
  {"zero?", &module_info_runtime, "zero?"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"binding-value", &module_info_ast, "binding-value"},
  {"<ast-signature>", &module_info_ast, "<ast-signature>"},
  {"uppercase?", &module_info_runtime, "uppercase?"},
  {"map2", &module_info_runtime, "map2"},
  {"locals-body-setter", &module_info_ast, "locals-body-setter"},
  {"binding-global-box", &module_info_ast, "binding-global-box"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"+", &module_info_runtime, "+"},
  {"address-of", &module_info_runtime, "address-of"},
  {"%velt", &module_info_boot, "%velt"},
  {"select", &module_info_macros, "select"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"pos", &module_info_runtime, "pos"},
  {"<bind-exit>", &module_info_ast, "<bind-exit>"},
  {"<locals>", &module_info_ast, "<locals>"},
  {"reduce", &module_info_runtime, "reduce"},
  {"load-module", &module_info_ast, "load-module"},
  {"module-syntax-environment", &module_info_ast, "module-syntax-environment"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"function-bindings", &module_info_ast, "function-bindings"},
  {"do3", &module_info_runtime, "do3"},
  {"var-type", &module_info_macros, "var-type"},
  {"%i-", &module_info_boot, "%i-"},
  {"fix-let-bindings-setter", &module_info_ast, "fix-let-bindings-setter"},
  {"<runtime-assignment>", &module_info_ast, "<runtime-assignment>"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"open-input-file", &module_info_runtime, "open-input-file"},
  {"reference-frame-offset", &module_info_ast, "reference-frame-offset"},
  {"from", &module_info_runtime, "from"},
  {"dlet", &module_info_macros, "dlet"},
  {"binding-dynamic-extent?-setter", &module_info_ast, "binding-dynamic-extent?-setter"},
  {"report-undefined-global-bindings", &module_info_ast, "report-undefined-global-bindings"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"function-binding", &module_info_ast, "function-binding"},
  {"case", &module_info_macros, "case"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"eof-object", &module_info_runtime, "eof-object"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"1st", &module_info_runtime, "1st"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"fix-let-bindings", &module_info_ast, "fix-let-bindings"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"force-output", &module_info_runtime, "force-output"},
  {"unwind-protect-cleanup-thunk", &module_info_ast, "unwind-protect-cleanup-thunk"},
  {"load-in", &module_info_ast, "load-in"},
  {"reference-frame-number", &module_info_ast, "reference-frame-number"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"gensym", &module_info_macros, "gensym"},
  {"assqn", &module_info_runtime, "assqn"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"object-direct-parents", &module_info_boot, "object-direct-parents"},
  {"binding-module-name", &module_info_ast, "binding-module-name"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"logand", &module_info_runtime, "logand"},
  {"table-protocol", &module_info_runtime, "table-protocol"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"<application>", &module_info_ast, "<application>"},
  {"signature-bindings-setter", &module_info_ast, "signature-bindings-setter"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"call-with-output-file", &module_info_runtime, "call-with-output-file"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"*", &module_info_runtime, "*"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"always", &module_info_runtime, "always"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"cat", &module_info_macros, "cat"},
  {"function-signature-setter", &module_info_ast, "function-signature-setter"},
  {"<num>", &module_info_boot, "<num>"},
  {"describe-handler", &module_info_runtime, "describe-handler"},
  {"str", &module_info_runtime, "str"},
  {"bind-exit-main-fun", &module_info_ast, "bind-exit-main-fun"},
  {"<string-output-port>", &module_info_runtime, "<string-output-port>"},
  {"objectify-quotation", &module_info_ast, "objectify-quotation"},
  {"monitor-type", &module_info_ast, "monitor-type"},
  {"alphabetic?", &module_info_runtime, "alphabetic?"},
  {"loc", &module_info_boot, "loc"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"pick", &module_info_runtime, "pick"},
  {"from-to-by", &module_info_runtime, "from-to-by"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"assoc-value", &module_info_runtime, "assoc-value"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"in", &module_info_runtime, "in"},
  {"module-name", &module_info_ast, "module-name"},
  {"map-keyed", &module_info_runtime, "map-keyed"},
  {"call-with-input-file", &module_info_runtime, "call-with-input-file"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"signature-specs", &module_info_ast, "signature-specs"},
  {"<arguments>", &module_info_ast, "<arguments>"},
  {"open-output-file", &module_info_runtime, "open-output-file"},
  {"out", &module_info_runtime, "out"},
  {"%c=", &module_info_boot, "%c="},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"and", &module_info_macros, "and"},
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
  {"%slen", &module_info_boot, "%slen"},
  {"binding-type", &module_info_ast, "binding-type"},
  {"fix-let-types-setter", &module_info_ast, "fix-let-types-setter"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"<static-global-environment>", &module_info_ast, "<static-global-environment>"},
  {"%slot", &module_info_boot, "%slot"},
  {"str-to-num", &module_info_runtime, "str-to-num"},
  {"fix-let-types", &module_info_ast, "fix-let-types"},
  {"head", &module_info_boot, "head"},
  {"lognot", &module_info_runtime, "lognot"},
  {"<local-assignment>", &module_info_ast, "<local-assignment>"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"slot", &module_info_boot, "slot"},
  {"ascii-limit", &module_info_runtime, "ascii-limit"},
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
  {"binding-info-setter", &module_info_ast, "binding-info-setter"},
  {"collect", &module_info_macros, "collect"},
  {"num-to-str", &module_info_runtime, "num-to-str"},
  {"<map>", &module_info_runtime, "<map>"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"read", &module_info_runtime, "read"},
  {"constant-value", &module_info_ast, "constant-value"},
  {"write-string", &module_info_runtime, "write-string"},
  {"<tab>", &module_info_runtime, "<tab>"},
  {"%f<", &module_info_boot, "%f<"},
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
  {"monitor-handler", &module_info_ast, "monitor-handler"},
  {"binding-native-to?", &module_info_ast, "binding-native-to?"},
  {"<file-port>", &module_info_runtime, "<file-port>"},
  {"global-box-value", &module_info_ast, "global-box-value"},
  {"%fb", &module_info_boot, "%fb"},
  {"from-to", &module_info_runtime, "from-to"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"rep", &module_info_boot, "rep"},
  {"last", &module_info_runtime, "last"},
  {"%f=", &module_info_boot, "%f="},
  {"%bb", &module_info_boot, "%bb"},
  {"<step>", &module_info_runtime, "<step>"},
  {"min", &module_info_runtime, "min"},
  {"sequentialize", &module_info_ast, "sequentialize"},
  {"format", &module_info_runtime, "format"},
  {"sub-setter", &module_info_runtime, "sub-setter"},
  {"<binding>", &module_info_ast, "<binding>"},
  {"alternative-consequent", &module_info_ast, "alternative-consequent"},
  {"type-error", &module_info_boot, "type-error"},
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
  {"collecting", &module_info_macros, "collecting"},
  {"module-name-to-relpath", &module_info_ast, "module-name-to-relpath"},
  {"objectify", &module_info_ast, "objectify"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"<traits>", &module_info_boot, "<traits>"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"numeric?", &module_info_runtime, "numeric?"},
  {"len", &module_info_runtime, "len"},
  {"nul", &module_info_boot, "nul"},
  {"empty?", &module_info_macros, "empty?"},
  {"%call-next-method", &module_info_boot, "%call-next-method"},
  {"as-lowercase", &module_info_runtime, "as-lowercase"},
  {"rev!", &module_info_runtime, "rev!"},
  {"<file-input-port>", &module_info_runtime, "<file-input-port>"},
  {"set", &module_info_boot, "set"},
  {"nul?", &module_info_runtime, "nul?"},
  {"lowercase?", &module_info_runtime, "lowercase?"},
  {"function-debug-name", &module_info_ast, "function-debug-name"},
  {"table-shrink-threshold", &module_info_runtime, "table-shrink-threshold"},
  {"<file-output-port>", &module_info_runtime, "<file-output-port>"},
  {"remove-modules-by-name!", &module_info_ast, "remove-modules-by-name!"},
  {"def-programs", &module_info_ast, "def-programs"},
  {"install-initial-bindings", &module_info_ast, "install-initial-bindings"},
  {"%selt", &module_info_boot, "%selt"},
  {"read-char", &module_info_runtime, "read-char"},
  {"<module-loader>", &module_info_ast, "<module-loader>"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"buf", &module_info_runtime, "buf"},
  {"<unwind-protect>", &module_info_ast, "<unwind-protect>"},
  {"list", &module_info_runtime, "list"},
  {"invoke-handler-interactively", &module_info_runtime, "invoke-handler-interactively"},
  {"<ast-method>", &module_info_ast, "<ast-method>"},
  {"newline", &module_info_runtime, "newline"},
  {"neg?", &module_info_runtime, "neg?"},
  {"unless", &module_info_macros, "unless"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-1---", NULL},
  {"env-runtime-value-setter", &Yast_evalYenv_runtime_value_setter},
  {"env-frame!", &Yast_evalYenv_frameX},
  {"env-binding-value", &Yast_evalYenv_binding_value},
  {"*stack*", &Yast_evalYTstackT},
  {"env-runtime-value", &Yast_evalYenv_runtime_value},
  {"env-local-value-setter", &Yast_evalYenv_local_value_setter},
  {"as-fun-name", &Yast_evalYas_fun_name},
  {"env-parent-setter", &Yast_evalYenv_parent_setter},
  {"env-global-binding-value-setter", &Yast_evalYenv_global_binding_value_setter},
  {"<loc-env>", &Yast_evalYLloc_envG},
  {"env-local-value", &Yast_evalYenv_local_value},
  {"$nul-loc-env", &Yast_evalYDnul_loc_env},
  {"env-function-setter", &Yast_evalYenv_function_setter},
  {"env-global-binding-value", &Yast_evalYenv_global_binding_value},
  {"ast-eval-bound?", &Yast_evalYast_eval_boundQ},
  {"ifun", NULL},
  {"env-names-setter", &Yast_evalYenv_names_setter},
  {"env-binding-value-setter", &Yast_evalYenv_binding_value_setter},
  {"env-global-binding-bound?", &Yast_evalYenv_global_binding_boundQ},
  {"env-parent", &Yast_evalYenv_parent},
  {"env-values-setter", &Yast_evalYenv_values_setter},
  {"env-local-reference-value-setter", &Yast_evalYenv_local_reference_value_setter},
  {"ast-eval-specs", &Yast_evalYast_eval_specs},
  {"env-function", &Yast_evalYenv_function},
  {"---main-0---", NULL},
  {"export-proto-method", &Yast_evalYexport_proto_method},
  {"env-values", &Yast_evalYenv_values},
  {"env-local-reference-value", &Yast_evalYenv_local_reference_value},
  {"env-names", &Yast_evalYenv_names},
  {"env-define-binding!", &Yast_evalYenv_define_bindingX},
  {"ast-eval", &Yast_evalYast_eval},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"ast-evaluate", "ast-evaluate"},
  {"init-environment-for-eval", "init-environment-for-eval"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_ast_eval;
MODULE_INFO module_info_ast_eval = {
  "ast-eval",
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

extern void load_module_ast_eval (void);

void load_module_ast_eval (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_boot();
  load_module_macros();
  load_module_runtime();
  load_module_ast();

  (P)Yast_evalY___main_0___();
  (P)Yast_evalY___main_1___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
