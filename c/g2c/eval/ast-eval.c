/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: ast-eval */

EXT(YLlstG,"boot","<lst>");
EXT(YmacrosYtup,"macros","tup");
EXT(YastYboundQ_reference,"ast","bound?-reference");
EXT(YastYcompile_time_program,"ast","compile-time-program");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
DEF(Yast_evalYenv_names,"ast-eval","env-names");
EXT(YruntimeYsub,"runtime","sub");
DEF(Yast_evalYenv_local_reference_value,"ast-eval","env-local-reference-value");
EXT(Yobject_slots,"boot","object-slots");
EXT(YruntimeYeof_object,"runtime","eof-object");
EXT(Yapply,"boot","apply");
EXT(YastYsignature_specs,"ast","signature-specs");
EXT(YastYsequentialize,"ast","sequentialize");
EXT(Yfun_name,"boot","fun-name");
EXT(YastYLmodule_loaderG,"ast","<module-loader>");
EXT(YastYreference_called_functionQ_setter,"ast","reference-called-function?-setter");
EXT(Ytail,"boot","tail");
EXT(YastYmodule_syntax_environment,"ast","module-syntax-environment");
EXT(YastYlocals_bindings,"ast","locals-bindings");
EXT(YastYlocals_functions,"ast","locals-functions");
EXT(YruntimeYassq,"runtime","assq");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(Yhead_setter,"boot","head-setter");
EXT(YLgenG,"boot","<gen>");
DEF(Yast_evalYenv_binding_value,"ast-eval","env-binding-value");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YastYprogram_register,"ast","program-register");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(YruntimeYread,"runtime","read");
EXT(YruntimeYpop,"runtime","pop");
EXT(Ynot,"boot","not");
EXT(Yfun_value,"boot","fun-value");
EXT(YastYLast_primitiveG,"ast","<ast-primitive>");
EXT(YruntimeYdo,"runtime","do");
EXT(YastYbinding_name,"ast","binding-name");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YastYset_module_environments,"ast","set-module-environments");
EXT(YastYalternative_consequent,"ast","alternative-consequent");
EXT(Ytail_setter,"boot","tail-setter");
EXT(YruntimeYfab,"runtime","fab");
EXT(YastYLraw_constantG,"ast","<raw-constant>");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(YastYLbindingG,"ast","<binding>");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YruntimeYassqn,"runtime","assqn");
EXT(YruntimeYmemQ,"runtime","mem?");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(YruntimeYlen_setter,"runtime","len-setter");
EXT(YruntimeYLmapG,"runtime","<map>");
DEF(Yast_evalYenv_global_binding_boundQ,"ast-eval","env-global-binding-bound?");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(Yerror,"boot","error");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(YPsnul,"boot","%snul");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YLchrG,"boot","<chr>");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(YastYLprogramsG,"ast","<programs>");
EXT(YastYLapplicationG,"ast","<application>");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YmacrosYlst,"macros","lst");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
DEF(Yast_evalYenv_global_binding_value_setter,"ast-eval","env-global-binding-value-setter");
EXT(YastYLboundQG,"ast","<bound?>");
EXT(YastYfix_let_bindings_setter,"ast","fix-let-bindings-setter");
DEF(Yast_evalYenv_binding_value_setter,"ast-eval","env-binding-value-setter");
EXT(YPcall_next_method,"boot","%call-next-method");
EXT(YLvecG,"boot","<vec>");
DEF(Yast_evalYast_eval,"ast-eval","ast-eval");
EXT(YastYLlocal_bindingG,"ast","<local-binding>");
EXT(YruntimeYcurry,"runtime","curry");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(YastYfix_let_types_setter,"ast","fix-let-types-setter");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YLoptsG,"boot","<opts>");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YPsymbols,"boot","%symbols");
EXT(YLflatG,"boot","<flat>");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(YruntimeYas,"runtime","as");
EXT(YastYLsequentialG,"ast","<sequential>");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(YastYbinding_dynamic_extentQ,"ast","binding-dynamic-extent?");
EXT(YruntimeYempty,"runtime","empty");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YruntimeYLE,"runtime","<=");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YastYobjectify,"ast","objectify");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(Ysym_name,"boot","sym-name");
EXT(YastYmodule_target_environment,"ast","module-target-environment");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YruntimeYNEE,"runtime","~==");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YastYassignment_reference,"ast","assignment-reference");
EXT(YastYLmonitorG,"ast","<monitor>");
EXT(YLcolG,"boot","<col>");
EXT(YastYdo_module_loader_modules,"ast","do-module-loader-modules");
EXT(YPvnul,"boot","%vnul");
DEF(Yast_evalYenv_names_setter,"ast-eval","env-names-setter");
EXT(YruntimeYhandler_info_message,"runtime","handler-info-message");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
EXT(YastYfab_p2c_module,"ast","fab-p2c-module");
EXT(YastYglobal_box_value,"ast","global-box-value");
EXT(YLtraitsG,"boot","<traits>");
EXT(YLlogG,"boot","<log>");
EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYfrom,"runtime","from");
EXT(YastYreport_undefined_global_bindings,"ast","report-undefined-global-bindings");
DEF(Yast_evalYLloc_envG,"ast-eval","<loc-env>");
EXT(YastYLlocal_referenceG,"ast","<local-reference>");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
EXT(YastYLast_signatureG,"ast","<ast-signature>");
EXT(YastYunwind_protect_cleanup_thunk,"ast","unwind-protect-cleanup-thunk");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YastYDproto_boot_module_name,"ast","$proto-boot-module-name");
EXT(YastYbinding_locative,"ast","binding-locative");
EXT(YastYfix_let_body_setter,"ast","fix-let-body-setter");
DEF(Yast_evalYenv_function,"ast-eval","env-function");
EXT(YmacrosYcat,"macros","cat");
DEF(Yast_evalYenv_values,"ast-eval","env-values");
EXT(YruntimeYfill,"runtime","fill");
EXT(YastYsignature_naryQ,"ast","signature-nary?");
EXT(YLslotG,"boot","<slot>");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
EXT(YastYalternative_condition,"ast","alternative-condition");
DEF(Yast_evalYas_fun_name,"ast-eval","as-fun-name");
EXT(Yslot_value,"boot","slot-value");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(YmacrosYEE,"macros","==");
EXT(YruntimeY1st,"runtime","1st");
EXT(YastYlocals_functions_setter,"ast","locals-functions-setter");
EXT(YastYLglobal_referenceG,"ast","<global-reference>");
EXT(YLfloG,"boot","<flo>");
EXT(YLanyG,"boot","<any>");
EXT(YastYbinding_value,"ast","binding-value");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(YastYmonitor_type,"ast","monitor-type");
EXT(YastYLalternativeG,"ast","<alternative>");
EXT(YastYLast_macro_definitionG,"ast","<ast-macro-definition>");
EXT(YastYapplication_knownQ_setter,"ast","application-known?-setter");
EXT(YastYruntime_environment,"ast","runtime-environment");
EXT(YastYapplication_knownQ,"ast","application-known?");
EXT(YastYLreferenceG,"ast","<reference>");
EXT(YastYLast_methodG,"ast","<ast-method>");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
EXT(YastYassignment_binding,"ast","assignment-binding");
EXT(YruntimeYcompose,"runtime","compose");
DEF(Yast_evalYenv_function_setter,"ast-eval","env-function-setter");
EXT(YastYfunction_body_setter,"ast","function-body-setter");
EXT(YruntimeYread_char,"runtime","read-char");
EXT(YastYmodule_name,"ast","module-name");
EXT(YastYremove_modules_by_nameX,"ast","remove-modules-by-name!");
EXT(YastYLast_genericG,"ast","<ast-generic>");
EXT(YastYapplication_binding,"ast","application-binding");
EXT(YastYapplication_function,"ast","application-function");
DEF(Yast_evalYenv_parent_setter,"ast-eval","env-parent-setter");
EXT(YastYbinding_type,"ast","binding-type");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(YastYbinding_info,"ast","binding-info");
EXT(YLseqG,"boot","<seq>");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YLfunG,"boot","<fun>");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YLnumG,"boot","<num>");
EXT(YruntimeYE,"runtime","=");
EXT(YastYconstant_value,"ast","constant-value");
EXT(YastYmonitor_main_thunk,"ast","monitor-main-thunk");
EXT(YastYfunction_naryQ,"ast","function-nary?");
EXT(Yfapply,"boot","fapply");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
DEF(Yast_evalYenv_runtime_value_setter,"ast-eval","env-runtime-value-setter");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YastYlocals_body_setter,"ast","locals-body-setter");
EXT(YastYglobal_box_value_setter,"ast","global-box-value-setter");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YastYLruntime_referenceG,"ast","<runtime-reference>");
EXT(YruntimeYPwith_monitor,"runtime","%with-monitor");
DEF(Yast_evalYenv_frameX,"ast-eval","env-frame!");
DEF(Yast_evalYast_eval_boundQ,"ast-eval","ast-eval-bound?");
DEF(Yast_evalYenv_parent,"ast-eval","env-parent");
EXT(YPisa,"boot","%isa");
EXT(YastYLreal_referenceG,"ast","<real-reference>");
EXT(YastYLbind_exitG,"ast","<bind-exit>");
EXT(YruntimeYlen,"runtime","len");
EXT(Ysig_names,"boot","sig-names");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YastYLlocalsG,"ast","<locals>");
EXT(YastYLruntime_assignmentG,"ast","<runtime-assignment>");
EXT(YmacrosYpair,"macros","pair");
EXT(YastYlocals_bindings_setter,"ast","locals-bindings-setter");
EXT(YruntimeYalways,"runtime","always");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YruntimeYL,"runtime","<");
EXT(YmacrosYmap,"macros","map");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YastYfix_let_body,"ast","fix-let-body");
EXT(YLintG,"boot","<int>");
EXT(YruntimeYtype_or,"runtime","type-or");
EXT(YruntimeYlast,"runtime","last");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YruntimeYpush,"runtime","push");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YastYlocals_body,"ast","locals-body");
EXT(YisaQ,"boot","isa?");
EXT(YLlocG,"boot","<loc>");
EXT(YastYmonitor_test,"ast","monitor-test");
EXT(YastYinit_environment_for_eval,"ast","init-environment-for-eval");
EXT(YruntimeYvec,"runtime","vec");
EXT(YruntimeYformat,"runtime","format");
EXT(YastYLconstantG,"ast","<constant>");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YastYmodule_loader_module_type,"ast","module-loader-module-type");
EXT(YastYLprogramG,"ast","<program>");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YastYreference_binding,"ast","reference-binding");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
EXT(Ysig_specs,"boot","sig-specs");
EXT(Yfab_sym,"boot","fab-sym");
EXT(YastYfunction_body,"ast","function-body");
EXT(YastYLast_functionG,"ast","<ast-function>");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YPdefine_method,"boot","%define-method");
EXT(YastYprogram_register_setter,"ast","program-register-setter");
EXT(YastYfunction_value,"ast","function-value");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YastYbinding_type_setter,"ast","binding-type-setter");
EXT(YruntimeYout,"runtime","out");
EXT(YruntimeYA,"runtime","+");
EXT(Ytype_error,"boot","type-error");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(YPslot,"boot","%slot");
EXT(YastYfunction_bindings,"ast","function-bindings");
EXT(YastYLregular_applicationG,"ast","<regular-application>");
EXT(YastYbinding_global_box,"ast","binding-global-box");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YruntimeYLsimple_handler_infoG,"runtime","<simple-handler-info>");
EXT(YastYunwind_protect_protected_thunk,"ast","unwind-protect-protected-thunk");
EXT(YastYfix_let_arguments_setter,"ast","fix-let-arguments-setter");
EXT(YruntimeYG,"runtime",">");
EXT(YastYbind_exit_main_fun,"ast","bind-exit-main-fun");
EXT(YastYfix_let_bindings,"ast","fix-let-bindings");
EXT(YastYLglobal_assignmentG,"ast","<global-assignment>");
EXT(YastYapplication_tailQ,"ast","application-tail?");
EXT(YruntimeYnewline,"runtime","newline");
EXT(YPPmacro,"boot","%%macro");
EXT(YLtupG,"boot","<tup>");
DEF(Yast_evalYenv_values_setter,"ast-eval","env-values-setter");
DEF(Yast_evalYexport_proto_method,"ast-eval","export-proto-method");
DEF(Yast_evalYast_eval_specs,"ast-eval","ast-eval-specs");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(YastYload_module,"ast","load-module");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YastYLast_primitive_definitionG,"ast","<ast-primitive-definition>");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
EXT(YastYbinding_module_name,"ast","binding-module-name");
DEF(Yast_evalYenv_local_value_setter,"ast-eval","env-local-value-setter");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YastYLcompile_timeG,"ast","<compile-time>");
EXT(YruntimeYrev,"runtime","rev");
EXT(YastYdo_static_global_bindings,"ast","do-static-global-bindings");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YruntimeY3rd,"runtime","3rd");
DEF(Yast_evalYenv_global_binding_value,"ast-eval","env-global-binding-value");
EXT(YastYfunction_signature,"ast","function-signature");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(YruntimeYmap2,"runtime","map2");
EXT(YastYLfix_letG,"ast","<fix-let>");
EXT(YwriteYenv_object_name,"write","env-object-name");
EXT(YastYalternative_alternant,"ast","alternative-alternant");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(YruntimeYGE,"runtime",">=");
EXT(YastYmodule_binding,"ast","module-binding");
EXT(Yfun_names,"boot","fun-names");
EXT(YastYLargumentsG,"ast","<arguments>");
EXT(Ysig_arity,"boot","sig-arity");
DEF(Yast_evalYTstackT,"ast-eval","*stack*");
EXT(YastYprobe_module,"ast","probe-module");
EXT(Yobject_parents,"boot","object-parents");
EXT(YastYLlocal_assignmentG,"ast","<local-assignment>");
EXT(YruntimeYdo2,"runtime","do2");
EXT(YastYmonitor_info,"ast","monitor-info");
EXT(YastYenvironment_uses_modules,"ast","environment-uses-modules");
EXT(YastYLunwind_protectG,"ast","<unwind-protect>");
EXT(YastYassignment_form,"ast","assignment-form");
DEF(Yast_evalYenv_local_value,"ast-eval","env-local-value");
EXT(YLbagG,"boot","<bag>");
EXT(YruntimeYneg,"runtime","neg");
EXT(YastYfix_let_types,"ast","fix-let-types");
EXT(YastYsignature_names,"ast","signature-names");
EXT(YruntimeYsig,"runtime","sig");
EXT(YastYmonitor_handler,"ast","monitor-handler");
EXT(YastYast_evaluate,"ast","ast-evaluate");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(YastYreference_frame_offset,"ast","reference-frame-offset");
EXT(YastYLpassive_programG,"ast","<passive-program>");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(YLmetG,"boot","<met>");
EXT(YruntimeYnow_elt,"runtime","now-elt");
EXT(YastYfunction_name,"ast","function-name");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YruntimeYdel_dups,"runtime","del-dups");
EXT(YruntimeYpos,"runtime","pos");
EXT(YastYLcomputed_programG,"ast","<computed-program>");
EXT(YLstrG,"boot","<str>");
EXT(YLsigG,"boot","<sig>");
EXT(YastYLmoduleG,"ast","<module>");
DEF(Yast_evalYDnul_loc_env,"ast-eval","$nul-loc-env");
EXT(Ysig_value,"boot","sig-value");
EXT(YastYbinding_mutableQ,"ast","binding-mutable?");
EXT(YastYbinding_value_setter,"ast","binding-value-setter");
EXT(YastYfix_let_arguments,"ast","fix-let-arguments");
EXT(YastYsignature_value,"ast","signature-value");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YruntimeYin,"runtime","in");
EXT(YruntimeYassoc,"runtime","assoc");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(YastYDproto_runtime_module_name,"ast","$proto-runtime-module-name");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
DEF(Yast_evalYenv_runtime_value,"ast-eval","env-runtime-value");
EXT(YastYbinding_global_box_setter,"ast","binding-global-box-setter");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YastYreference_called_functionQ,"ast","reference-called-function?");
EXT(Ynul,"boot","nul");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(YastYLmodule_bindingG,"ast","<module-binding>");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(YruntimeYelt,"runtime","elt");
EXT(YLsymG,"boot","<sym>");
EXT(YruntimeYhandler_info_arguments,"runtime","handler-info-arguments");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
DEF(Yast_evalYenv_define_bindingX,"ast-eval","env-define-binding!");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YastYLglobal_boxG,"ast","<global-box>");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(YruntimeYfile_mtime,"runtime","file-mtime");
EXT(YastYast_define_binding,"ast","ast-define-binding");
EXT(YastYbinding_dynamic_extentQ_setter,"ast","binding-dynamic-extent?-setter");
EXT(Yhead,"boot","head");
EXT(YastYLstatic_global_environmentG,"ast","<static-global-environment>");
EXT(YastYLdefinitionG,"ast","<definition>");
EXT(YastYreference_frame_number,"ast","reference-frame-number");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YastYbinding_kind,"ast","binding-kind");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YastYLpredefined_applicationG,"ast","<predefined-application>");
DEF(Yast_evalYenv_local_reference_value_setter,"ast-eval","env-local-reference-value-setter");
EXT(YruntimeY_,"runtime","-");
EXT(YastYinit_ast,"ast","init-ast");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YastYbinding_info_setter,"ast","binding-info-setter");
EXT(YastYapplication_arguments,"ast","application-arguments");
EXT(YruntimeYassocq,"runtime","assocq");
EXT(YastYbinding_native_toQ,"ast","binding-native-to?");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_37);
DEFLIT(lit_36);
DEFLIT(lit_35);
DEFLIT(lit_34);
DEFLIT(lit_33);
DEFLIT(lit_32);
DEFLIT(lit_31);
DEFLIT(lit_30);
DEFLIT(lit_29);
DEFLIT(lit_28);
DEFLIT(lit_27);
DEFLIT(lit_26);
DEFLIT(lit_25);
DEFLIT(lit_24);
DEFLIT(lit_23);
DEFLIT(lit_22);
DEFLIT(lit_21);
DEFLIT(lit_20);
DEFLIT(lit_19);
DEFLIT(lit_18);
DEFLIT(lit_17);
DEFLIT(lit_16);
DEFLIT(lit_15);
DEFLIT(lit_14);
DEFLIT(lit_13);
DEFLIT(lit_12);
DEFLIT(lit_11);
DEFLIT(lit_10);
DEFLIT(lit_9);
DEFLIT(lit_8);
DEFLIT(lit_7);
DEFLIT(lit_6);
DEFLIT(lit_5);
DEFLIT(lit_4);
DEFLIT(lit_3);
DEFLIT(lit_2);
DEFLIT(lit_1);
DEFLIT(lit_0);

/* FUNCTIONS: */

LOCFOR(fun_env_global_binding_value_0);
LOCFOR(fun_env_global_binding_value_setter_1);
LOCFOR(fun_env_global_binding_boundQ_2);
LOCFOR(fun_env_runtime_value_3);
LOCFOR(fun_env_runtime_value_setter_4);
LOCFOR(fun_env_parent_5);
LOCFOR(fun_env_parent_setter_6);
LOCFOR(fun_7);
LOCFOR(fun_env_function_8);
LOCFOR(fun_env_function_setter_9);
LOCFOR(fun_10);
LOCFOR(fun_env_names_11);
LOCFOR(fun_env_names_setter_12);
LOCFOR(fun_13);
LOCFOR(fun_env_values_14);
LOCFOR(fun_env_values_setter_15);
LOCFOR(fun_16);
LOCFOR(fun_env_frameX_17);
LOCFOR(fun_env_local_value_18);
LOCFOR(fun_env_local_value_setter_19);
LOCFOR(fun_loop_20);
LOCFOR(fun_env_binding_value_21);
LOCFOR(fun_loop_22);
LOCFOR(fun_env_binding_value_setter_23);
LOCFOR(fun_ast_evaluate_24);
LOCFOR(fun_ast_eval_25);
LOCFOR(fun_ast_eval_26);
LOCFOR(fun_ast_eval_27);
LOCFOR(fun_loop_28);
LOCFOR(fun_ast_eval_specs_29);
LOCFOR(fun_x_1255_30);
LOCFOR(fun_31);
LOCFOR(fun_32);
LOCFOR(fun_as_fun_name_33);
LOCFOR(fun_as_fun_name_34);
LOCFOR(fun_as_fun_name_35);
LOCFOR(fun_as_fun_name_36);
LOCFOR(fun_as_fun_name_37);
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
LOCFOR(fun_export_proto_method_48);
LOCFOR(fun_49);
LOCFOR(fun_ast_eval_50);
LOCFOR(fun_ast_eval_51);
LOCFOR(fun_env_local_reference_value_52);
LOCFOR(fun_env_local_reference_value_setter_53);
LOCFOR(fun_ast_eval_54);
LOCFOR(fun_ast_eval_55);
LOCFOR(fun_ast_eval_56);
LOCFOR(fun_ast_eval_57);
LOCFOR(fun_ast_eval_boundQ_58);
LOCFOR(fun_ast_eval_boundQ_59);
LOCFOR(fun_ast_eval_60);
LOCFOR(fun_ast_eval_61);
LOCFOR(fun_ast_eval_62);
LOCFOR(fun_ast_eval_63);
LOCFOR(fun_env_define_bindingX_64);
LOCFOR(fun_ast_eval_65);
LOCFOR(fun_ast_eval_66);
LOCFOR(fun_eval_67);
LOCFOR(fun_ast_eval_68);
LOCFOR(fun_eval_69);
LOCFOR(fun_ast_eval_70);
LOCFOR(fun_ast_eval_71);
LOCFOR(fun_ast_eval_72);
LOCFOR(fun_ast_eval_73);
LOCFOR(fun_74);
LOCFOR(fun_ast_eval_75);
LOCFOR(fun_76);
LOCFOR(fun_77);
LOCFOR(fun_ast_eval_78);
LOCFOR(fun_79);
LOCFOR(fun_80);
LOCFOR(fun_ast_eval_81);
LOCFOR(fun_ast_eval_82);
FUNFOR(YastYinit_environment_for_eval);
extern P Yast_evalY___main_0___ ();
extern P Yast_evalY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_env_global_binding_value_0) {
  ARG(b_, 0);
  P boxF1533;
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T5 = CALL1(CHKREF(YastYbinding_global_box),b_);
  boxF1533 = T5;
  if (boxF1533 != YPfalse) {
    T4 = CALL1(CHKREF(YastYglobal_box_value),boxF1533);
    T1 = T4;
  } else {
    T3 = CALL1(CHKREF(YastYbinding_name),b_);
    T2 = CALL2(CHKREF(Yerror),CHKREF(lit_0),T3);
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_env_global_binding_value_setter_1) {
  ARG(b_, 0);
  ARG(value_, 1);
  P boxF1534;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T10 = CALL1(CHKREF(YastYbinding_global_box),b_);
  boxF1534 = T10;
  boxF1534 = BOXFAB(boxF1534);
  T7 = BOXVAL(boxF1534);
  T6 = CALL1(CHKREF(Ynot),T7);
  if (T6 != YPfalse) {
    T5 = (P)YPpair(CHKREF(YastYLglobal_boxG),Ynil);
    T4 = CALL3(CHKREF(YPisa),T5,Ynil,Ynil);
    T3 = CALL2(CHKREF(YastYbinding_global_box_setter),T4,b_);
    T2 = BOXVAL(boxF1534) = T3;
  } else {
  }
  T9 = BOXVAL(boxF1534);
  T8 = CALL2(CHKREF(YastYglobal_box_value_setter),value_,T9);
  T0 = T8;
  QRET(T0);
}

FUNCODEDEF(fun_env_global_binding_boundQ_2) {
  ARG(b_, 0);
  P boxF1535;
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL1(CHKREF(YastYbinding_global_box),b_);
  boxF1535 = T2;
  if (boxF1535 != YPfalse) {
    T1 = YPtrue;
  } else {
    T1 = YPfalse;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_env_runtime_value_3) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeYlocative_value),x_);
  QRET(T0);
}

FUNCODEDEF(fun_env_runtime_value_setter_4) {
  ARG(x_, 0);
  ARG(v_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL2(CHKREF(YruntimeYlocative_value_setter),v_,x_);
  QRET(T0);
}

FUNCODEDEF(fun_env_parent_5) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_evalYenv_parent));
  QRET(T0);
}

FUNCODEDEF(fun_env_parent_setter_6) {
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

FUNCODEDEF(fun_env_function_8) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_evalYenv_function));
  QRET(T0);
}

FUNCODEDEF(fun_env_function_setter_9) {
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

FUNCODEDEF(fun_env_names_11) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_evalYenv_names));
  QRET(T0);
}

FUNCODEDEF(fun_env_names_setter_12) {
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

FUNCODEDEF(fun_env_values_14) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_evalYenv_values));
  QRET(T0);
}

FUNCODEDEF(fun_env_values_setter_15) {
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

FUNCODEDEF(fun_env_frameX_17) {
  ARG(args_, 0);
  ARG(names_, 1);
  ARG(function_, 2);
  ARG(env_, 3);
  P valuesF1536;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T11 = CALL2(CHKREF(YruntimeYas),CHKREF(YLvecG),args_);
  valuesF1536 = T11;
  T10 = (P)YPpair(CHKREF(Yast_evalYLloc_envG),Ynil);
  T9 = (P)YPpair(CHKREF(Yast_evalYenv_names),Ynil);
  T8 = (P)YPpair(CHKREF(Yast_evalYenv_values),T9);
  T7 = (P)YPpair(CHKREF(Yast_evalYenv_function),T8);
  T6 = (P)YPpair(CHKREF(Yast_evalYenv_parent),T7);
  T5 = (P)YPpair(names_,Ynil);
  T4 = (P)YPpair(valuesF1536,T5);
  T3 = (P)YPpair(function_,T4);
  T2 = (P)YPpair(env_,T3);
  T1 = CALL3(CHKREF(YPisa),T10,T6,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_env_local_value_18) {
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

FUNCODEDEF(fun_env_local_value_setter_19) {
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

FUNCODEDEF(fun_env_binding_value_21) {
  ARG(name_, 0);
  ARG(env_, 1);
  P loopF1537;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = CALL2(CHKREF(YmacrosYEE),env_,CHKREF(Yast_evalYDnul_loc_env));
  if (T5 != YPfalse) {
    T0 = CHKREF(Ynul);
  } else {
    T4 = FUNSHELL(1,fun_loop_20,3);
    loopF1537 = T4;
    FUNINIT(loopF1537, 3,loopF1537,env_,name_);
    T3 = CALL1(CHKREF(Yast_evalYenv_names),env_);
    T2 = KCALL2(loopF1537,T3,YPint((P)0));
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

FUNCODEDEF(fun_env_binding_value_setter_23) {
  ARG(name_, 0);
  ARG(env_, 1);
  ARG(v_, 2);
  P loopF1538;
  P T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T3 = FUNSHELL(1,fun_loop_22,4);
  loopF1538 = T3;
  FUNINIT(loopF1538, 4,loopF1538,env_,v_,name_);
  T2 = CALL1(CHKREF(Yast_evalYenv_names),env_);
  T1 = KCALL2(loopF1538,T2,YPint((P)0));
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_ast_evaluate_24) {
  ARG(e_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yast_evalYast_eval),e_,CHKREF(Yast_evalYDnul_loc_env));
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_25) {
  ARG(env_, 0);
  ARG(e_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(CHKREF(YastYconstant_value),e_);
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_26) {
  ARG(env_, 0);
  ARG(e_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(CHKREF(YastYconstant_value),e_);
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_27) {
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
  P typeF1540;
  P specF1539;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T11 = CALL2(CHKREF(YruntimeYE),i_,FREEREF(2));
  if (T11 != YPfalse) {
    T10 = CALL1(CHKREF(YruntimeYrevX),res_);
    T0 = T10;
  } else {
    T9 = CALL1(CHKREF(Yhead),specs_);
    specF1539 = T9;
    if (specF1539 != YPfalse) {
      T8 = CALL2(CHKREF(Yast_evalYast_eval),specF1539,FREEREF(0));
      T7 = T8;
    } else {
      T7 = CHKREF(YLanyG);
    }
    typeF1540 = T7;
    T6 = CALL2(CHKREF(YmacrosYpair),typeF1540,res_);
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

FUNCODEDEF(fun_ast_eval_specs_29) {
  ARG(env_, 0);
  ARG(naryQ_, 1);
  ARG(specs_, 2);
  P loopF1542;
  P nreqF1541;
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
  nreqF1541 = T4;
  T3 = FUNSHELL(1,fun_loop_28,3);
  loopF1542 = T3;
  FUNINIT(loopF1542, 3,env_,loopF1542,nreqF1541);
  T2 = KCALL3(loopF1542,Ynil,specs_,YPint((P)0));
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1255_30) {
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
  P x_1254F1557;
  P x_1254F1556;
  P x_1254F1555;
  P x_1254F1554;
  P x_1254F1553;
  P x_1254F1552;
  P x_1254F1551;
  P x_1254F1550;
  P bodyF1549;
  P argsF1548;
  P namesF1547;
  P fF1546;
  P envF1545;
  P x_1254F1544;
  P x_1255F1543;
  P T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67;
  P T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51;
  P T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35;
  P T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
loop:
  T82 = FUNSHELL(0,fun_x_1255_30,1);
  x_1255F1543 = T82;
  FUNINIT(x_1255F1543, 1,return_);
  x_1254F1544 = FREEREF(0);
  envF1545 = YPfalse;
  envF1545 = BOXFAB(envF1545);
  fF1546 = YPfalse;
  fF1546 = BOXFAB(fF1546);
  namesF1547 = YPfalse;
  namesF1547 = BOXFAB(namesF1547);
  argsF1548 = YPfalse;
  argsF1548 = BOXFAB(argsF1548);
  bodyF1549 = YPfalse;
  bodyF1549 = BOXFAB(bodyF1549);
  T33 = CALL2(CHKREF(YisaQ),x_1254F1544,CHKREF(YLlstG));
  if (T33 != YPfalse) {
    T32 = CALL3(CHKREF(YmacrosYmatch_atom),x_1254F1544,CHKREF(lit_15),x_1255F1543);
    x_1254F1550 = T32;
    T30 = CALL2(CHKREF(YmacrosYmatch_sublist),x_1254F1550,x_1255F1543);
    x_1254F1551 = T30;
    T28 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1254F1551,x_1255F1543);
    BOXVAL(envF1545) = T28;
    T29 = CALL1(CHKREF(Ytail),x_1254F1551);
    x_1254F1552 = T29;
    T26 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1254F1552,x_1255F1543);
    BOXVAL(fF1546) = T26;
    T27 = CALL1(CHKREF(Ytail),x_1254F1552);
    x_1254F1553 = T27;
    T24 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1254F1553,x_1255F1543);
    BOXVAL(namesF1547) = T24;
    T25 = CALL1(CHKREF(Ytail),x_1254F1553);
    x_1254F1554 = T25;
    BOXVAL(argsF1548) = x_1254F1554;
    x_1254F1555 = Ynil;
    T23 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1254F1555,x_1255F1543);
    T22 = T23;
    T21 = T22;
    T20 = T21;
    T19 = T20;
    T31 = CALL1(CHKREF(Ytail),x_1254F1550);
    x_1254F1556 = T31;
    T17 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1254F1556,x_1255F1543);
    BOXVAL(bodyF1549) = T17;
    T18 = CALL1(CHKREF(Ytail),x_1254F1556);
    x_1254F1557 = T18;
    T16 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1254F1557,x_1255F1543);
    T15 = T16;
    T14 = T15;
    T13 = T14;
  } else {
    T12 = CALL2(x_1255F1543,CHKREF(lit_14),x_1254F1544);
  }
  T81 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_13));
  T80 = BOXVAL(argsF1548);
  T79 = CALL2(CHKREF(YmacrosYcat),T80,Ynil);
  T78 = CALL1(CHKREF(YmacrosYlst),T79);
  T77 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_12));
  T76 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_11));
  T75 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_10));
  T74 = CALL2(CHKREF(YmacrosYcat),T75,Ynil);
  T73 = CALL1(CHKREF(YmacrosYlst),T74);
  T72 = CALL3(CHKREF(YmacrosYcat),T76,T73,Ynil);
  T71 = CALL1(CHKREF(YmacrosYlst),T72);
  T70 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_9));
  T69 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_8));
  T68 = BOXVAL(envF1545);
  T67 = CALL1(CHKREF(YmacrosYlst),T68);
  T66 = BOXVAL(fF1546);
  T65 = CALL1(CHKREF(YmacrosYlst),T66);
  T64 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_7));
  T63 = BOXVAL(namesF1547);
  T62 = CALL1(CHKREF(YmacrosYlst),T63);
  T61 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_6));
  T60 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_5));
  T59 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_4));
  T58 = CALL3(CHKREF(YmacrosYcat),T60,T59,Ynil);
  T57 = CALL1(CHKREF(YmacrosYlst),T58);
  T56 = CALL3(CHKREF(YmacrosYcat),T61,T57,Ynil);
  T55 = CALL1(CHKREF(YmacrosYlst),T56);
  T54 = CALLN(CHKREF(YmacrosYcat),4,T64,T62,T55,Ynil);
  T53 = CALL1(CHKREF(YmacrosYlst),T54);
  T52 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_3));
  T51 = BOXVAL(argsF1548);
  T50 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_2));
  T49 = CALLN(CHKREF(YmacrosYcat),4,T52,T51,T50,Ynil);
  T48 = CALL1(CHKREF(YmacrosYlst),T49);
  T47 = CALLN(CHKREF(YmacrosYcat),6,T69,T67,T65,T53,T48,Ynil);
  T46 = CALL1(CHKREF(YmacrosYlst),T47);
  T45 = CALL3(CHKREF(YmacrosYcat),T70,T46,Ynil);
  T44 = CALL1(CHKREF(YmacrosYlst),T45);
  T43 = CALL3(CHKREF(YmacrosYcat),T71,T44,Ynil);
  T42 = CALL1(CHKREF(YmacrosYlst),T43);
  T41 = BOXVAL(bodyF1549);
  T40 = CALL1(CHKREF(YmacrosYlst),T41);
  T39 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_1));
  T38 = CALL3(CHKREF(YmacrosYcat),T40,T39,Ynil);
  T37 = CALL1(CHKREF(YmacrosYlst),T38);
  T36 = CALLN(CHKREF(YmacrosYcat),4,T77,T42,T37,Ynil);
  T35 = CALL1(CHKREF(YmacrosYlst),T36);
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

FUNCODEDEF(fun_as_fun_name_33) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Yfun_name),x_);
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_34) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YastYfunction_name),x_);
  T0 = CALL1(CHKREF(Yast_evalYas_fun_name),T1);
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_35) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YastYbinding_name),x_);
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_36) {
  ARG(x_, 0);
  P a1;
loop:
  RET(x_);
}

FUNCODEDEF(fun_as_fun_name_37) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_38) {
  ARG(a9_, 0);
  ARG(a8_, 1);
  ARG(a7_, 2);
  ARG(a6_, 3);
  ARG(a5_, 4);
  ARG(a4_, 5);
  ARG(a3_, 6);
  ARG(a2_, 7);
  ARG(a1_, 8);
  P frameF1559;
  P nmsF1558;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6,a7,a8,a9;
loop:
  T7 = (P)YPnext_methods();
  nmsF1558 = T7;
  T6 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_16));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(YmacrosYlst),10,a1_,a2_,a3_,a4_,a5_,a6_,a7_,a8_,a9_,nmsF1558);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1559 = T3;
  T2 = CALL1(FREEREF(3),frameF1559);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_39) {
  ARG(a8_, 0);
  ARG(a7_, 1);
  ARG(a6_, 2);
  ARG(a5_, 3);
  ARG(a4_, 4);
  ARG(a3_, 5);
  ARG(a2_, 6);
  ARG(a1_, 7);
  P frameF1561;
  P nmsF1560;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6,a7,a8;
loop:
  T7 = (P)YPnext_methods();
  nmsF1560 = T7;
  T6 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_17));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(YmacrosYlst),9,a1_,a2_,a3_,a4_,a5_,a6_,a7_,a8_,nmsF1560);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1561 = T3;
  T2 = CALL1(FREEREF(3),frameF1561);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_40) {
  ARG(a7_, 0);
  ARG(a6_, 1);
  ARG(a5_, 2);
  ARG(a4_, 3);
  ARG(a3_, 4);
  ARG(a2_, 5);
  ARG(a1_, 6);
  P frameF1563;
  P nmsF1562;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6,a7;
loop:
  T7 = (P)YPnext_methods();
  nmsF1562 = T7;
  T6 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_18));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(YmacrosYlst),8,a1_,a2_,a3_,a4_,a5_,a6_,a7_,nmsF1562);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1563 = T3;
  T2 = CALL1(FREEREF(3),frameF1563);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_41) {
  ARG(a6_, 0);
  ARG(a5_, 1);
  ARG(a4_, 2);
  ARG(a3_, 3);
  ARG(a2_, 4);
  ARG(a1_, 5);
  P frameF1565;
  P nmsF1564;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6;
loop:
  T7 = (P)YPnext_methods();
  nmsF1564 = T7;
  T6 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_19));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(YmacrosYlst),7,a1_,a2_,a3_,a4_,a5_,a6_,nmsF1564);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1565 = T3;
  T2 = CALL1(FREEREF(3),frameF1565);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_42) {
  ARG(a5_, 0);
  ARG(a4_, 1);
  ARG(a3_, 2);
  ARG(a2_, 3);
  ARG(a1_, 4);
  P frameF1567;
  P nmsF1566;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5;
loop:
  T7 = (P)YPnext_methods();
  nmsF1566 = T7;
  T6 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_20));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(YmacrosYlst),6,a1_,a2_,a3_,a4_,a5_,nmsF1566);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1567 = T3;
  T2 = CALL1(FREEREF(3),frameF1567);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_43) {
  ARG(a4_, 0);
  ARG(a3_, 1);
  ARG(a2_, 2);
  ARG(a1_, 3);
  P frameF1569;
  P nmsF1568;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T7 = (P)YPnext_methods();
  nmsF1568 = T7;
  T6 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_21));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(YmacrosYlst),5,a1_,a2_,a3_,a4_,nmsF1568);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1569 = T3;
  T2 = CALL1(FREEREF(3),frameF1569);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_44) {
  ARG(a3_, 0);
  ARG(a2_, 1);
  ARG(a1_, 2);
  P frameF1571;
  P nmsF1570;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T7 = (P)YPnext_methods();
  nmsF1570 = T7;
  T6 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_22));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(YmacrosYlst),4,a1_,a2_,a3_,nmsF1570);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1571 = T3;
  T2 = CALL1(FREEREF(3),frameF1571);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_45) {
  ARG(a2_, 0);
  ARG(a1_, 1);
  P frameF1573;
  P nmsF1572;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T7 = (P)YPnext_methods();
  nmsF1572 = T7;
  T6 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_23));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALL3(CHKREF(YmacrosYlst),a1_,a2_,nmsF1572);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1573 = T3;
  T2 = CALL1(FREEREF(3),frameF1573);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_46) {
  ARG(a1_, 0);
  P frameF1575;
  P nmsF1574;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = (P)YPnext_methods();
  nmsF1574 = T7;
  T6 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_24));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALL2(CHKREF(YmacrosYlst),a1_,nmsF1574);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1575 = T3;
  T2 = CALL1(FREEREF(3),frameF1575);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_47) {
  P frameF1577;
  P nmsF1576;
  P T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T7 = (P)YPnext_methods();
  nmsF1576 = T7;
  T6 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_25));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALL1(CHKREF(YmacrosYlst),nmsF1576);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1577 = T3;
  T2 = CALL1(FREEREF(3),frameF1577);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_export_proto_method_48) {
  ARG(env_, 0);
  ARG(body_, 1);
  ARG(value_, 2);
  ARG(naryQ_, 3);
  ARG(specs_, 4);
  ARG(names_, 5);
  ARG(f_, 6);
  P efunF1588;
  P x_1265F1587;
  P x_1264F1586;
  P x_1263F1585;
  P x_1262F1584;
  P x_1261F1583;
  P x_1260F1582;
  P x_1259F1581;
  P x_1258F1580;
  P x_1257F1579;
  P x_1256F1578;
  P T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6,a7;
loop:
  T60 = CALL1(CHKREF(YruntimeYlen),names_);
  x_1256F1578 = T60;
  T59 = CALL2(CHKREF(YmacrosYEE),x_1256F1578,YPint((P)0));
  if (T59 != YPfalse) {
    T58 = FUNFAB(fun_47,4,names_,f_,env_,body_);
    T21 = T58;
  } else {
    x_1257F1579 = x_1256F1578;
    T57 = CALL2(CHKREF(YmacrosYEE),x_1257F1579,YPint((P)1));
    if (T57 != YPfalse) {
      T56 = FUNFAB(fun_46,4,names_,f_,env_,body_);
      T23 = T56;
    } else {
      x_1258F1580 = x_1257F1579;
      T55 = CALL2(CHKREF(YmacrosYEE),x_1258F1580,YPint((P)2));
      if (T55 != YPfalse) {
        T54 = FUNFAB(fun_45,4,names_,f_,env_,body_);
        T25 = T54;
      } else {
        x_1259F1581 = x_1258F1580;
        T53 = CALL2(CHKREF(YmacrosYEE),x_1259F1581,YPint((P)3));
        if (T53 != YPfalse) {
          T52 = FUNFAB(fun_44,4,names_,f_,env_,body_);
          T27 = T52;
        } else {
          x_1260F1582 = x_1259F1581;
          T51 = CALL2(CHKREF(YmacrosYEE),x_1260F1582,YPint((P)4));
          if (T51 != YPfalse) {
            T50 = FUNFAB(fun_43,4,names_,f_,env_,body_);
            T29 = T50;
          } else {
            x_1261F1583 = x_1260F1582;
            T49 = CALL2(CHKREF(YmacrosYEE),x_1261F1583,YPint((P)5));
            if (T49 != YPfalse) {
              T48 = FUNFAB(fun_42,4,names_,f_,env_,body_);
              T31 = T48;
            } else {
              x_1262F1584 = x_1261F1583;
              T47 = CALL2(CHKREF(YmacrosYEE),x_1262F1584,YPint((P)6));
              if (T47 != YPfalse) {
                T46 = FUNFAB(fun_41,4,names_,f_,env_,body_);
                T33 = T46;
              } else {
                x_1263F1585 = x_1262F1584;
                T45 = CALL2(CHKREF(YmacrosYEE),x_1263F1585,YPint((P)7));
                if (T45 != YPfalse) {
                  T44 = FUNFAB(fun_40,4,names_,f_,env_,body_);
                  T35 = T44;
                } else {
                  x_1264F1586 = x_1263F1585;
                  T43 = CALL2(CHKREF(YmacrosYEE),x_1264F1586,YPint((P)8));
                  if (T43 != YPfalse) {
                    T42 = FUNFAB(fun_39,4,names_,f_,env_,body_);
                    T37 = T42;
                  } else {
                    x_1265F1587 = x_1264F1586;
                    T41 = CALL2(CHKREF(YmacrosYEE),x_1265F1587,YPint((P)9));
                    if (T41 != YPfalse) {
                      T40 = FUNFAB(fun_38,4,names_,f_,env_,body_);
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
  efunF1588 = T20;
  T1 = CALL1(CHKREF(Yast_evalYas_fun_name),f_);
  CALL2(CHKREF(Yfun_name_setter),T1,efunF1588);
  T19 = (P)YPpair(CHKREF(YLsigG),Ynil);
  T18 = (P)YPpair(CHKREF(Ysig_value),Ynil);
  T17 = (P)YPpair(CHKREF(Ysig_arity),T18);
  T16 = (P)YPpair(CHKREF(Ysig_naryQ),T17);
  T15 = (P)YPpair(CHKREF(Ysig_specs),T16);
  T14 = (P)YPpair(CHKREF(Ysig_names),T15);
  T13 = CALL3(CHKREF(Yast_evalYast_eval_specs),specs_,naryQ_,env_);
  T12 = CALL1(CHKREF(Yfun_arity),efunF1588);
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
  CALL2(CHKREF(Yfun_sig_setter),T2,efunF1588);
  T0 = efunF1588;
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  ARG(env_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YastYfunction_body),FREEREF(0));
  T0 = CALL2(CHKREF(Yast_evalYast_eval),T1,env_);
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_50) {
  ARG(env_, 0);
  ARG(e_, 1);
  P evalF1590;
  P paramsF1589;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T8 = CALL1(CHKREF(YastYfunction_bindings),e_);
  paramsF1589 = T8;
  T7 = FUNFAB(fun_49,1,e_);
  evalF1590 = T7;
  T6 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_name),paramsF1589);
  T5 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_type),paramsF1589);
  T4 = CALL1(CHKREF(YastYfunction_naryQ),e_);
  T3 = CALL1(CHKREF(YastYfunction_value),e_);
  T2 = CALLN(CHKREF(Yast_evalYexport_proto_method),7,e_,T6,T5,T4,T3,evalF1590,env_);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_51) {
  ARG(env_, 0);
  ARG(e_, 1);
  P specsF1594;
  P namesF1593;
  P naryQF1592;
  P paramsF1591;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T10 = CALL1(CHKREF(YastYfunction_bindings),e_);
  paramsF1591 = T10;
  T9 = CALL1(CHKREF(YastYfunction_naryQ),e_);
  naryQF1592 = T9;
  T8 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_name),paramsF1591);
  namesF1593 = T8;
  T7 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_type),paramsF1591);
  T6 = CALL3(CHKREF(Yast_evalYast_eval_specs),T7,naryQF1592,env_);
  specsF1594 = T6;
  T5 = CALL1(CHKREF(Yast_evalYas_fun_name),e_);
  T4 = CALLN(CHKREF(Yfab_gen),5,T5,namesF1593,specsF1594,naryQF1592,Ynil);
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_env_local_reference_value_52) {
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

FUNCODEDEF(fun_env_local_reference_value_setter_53) {
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

FUNCODEDEF(fun_ast_eval_54) {
  ARG(env_, 0);
  ARG(e_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL2(CHKREF(Yast_evalYenv_local_reference_value),env_,e_);
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_55) {
  ARG(env_, 0);
  ARG(e_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(YastYreference_binding),e_);
  T0 = CALL1(CHKREF(Yast_evalYenv_global_binding_value),T1);
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_56) {
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

FUNCODEDEF(fun_ast_eval_57) {
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

FUNCODEDEF(fun_ast_eval_boundQ_58) {
  ARG(env_, 0);
  ARG(binding_, 1);
  ARG(e_, 2);
  P x_1266F1595;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T4 = CALL1(CHKREF(YastYbinding_kind),binding_);
  x_1266F1595 = T4;
  T3 = CALL2(CHKREF(YmacrosYEE),x_1266F1595,CHKREF(lit_26));
  if (T3 != YPfalse) {
    T2 = CALL1(CHKREF(Yast_evalYenv_global_binding_boundQ),binding_);
    T1 = T2;
  } else {
    T1 = YPtrue;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_boundQ_59) {
  ARG(env_, 0);
  ARG(binding_, 1);
  ARG(e_, 2);
  P a1,a2,a3;
loop:
  QRET(YPtrue);
}

FUNCODEDEF(fun_ast_eval_60) {
  ARG(env_, 0);
  ARG(e_, 1);
  P valueF1596;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL1(CHKREF(YastYassignment_form),e_);
  T3 = CALL2(CHKREF(Yast_evalYast_eval),T4,env_);
  valueF1596 = T3;
  T2 = CALL1(CHKREF(YastYassignment_binding),e_);
  T1 = CALL2(CHKREF(Yast_evalYenv_global_binding_value_setter),valueF1596,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_61) {
  ARG(env_, 0);
  ARG(e_, 1);
  P a1,a2;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_ast_eval_62) {
  ARG(env_, 0);
  ARG(e_, 1);
  P valueF1597;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = CALL1(CHKREF(YastYassignment_form),e_);
  T4 = CALL2(CHKREF(Yast_evalYast_eval),T5,env_);
  valueF1597 = T4;
  T3 = CALL1(CHKREF(YastYassignment_binding),e_);
  T2 = CALL1(CHKREF(YastYbinding_locative),T3);
  T1 = CALL2(CHKREF(Yast_evalYenv_runtime_value_setter),valueF1597,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_63) {
  ARG(env_, 0);
  ARG(e_, 1);
  P valueF1598;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL1(CHKREF(YastYassignment_form),e_);
  T3 = CALL2(CHKREF(Yast_evalYast_eval),T4,env_);
  valueF1598 = T3;
  T2 = CALL1(CHKREF(YastYassignment_reference),e_);
  T1 = CALL3(CHKREF(Yast_evalYenv_local_reference_value_setter),valueF1598,env_,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_env_define_bindingX_64) {
  ARG(v_, 0);
  ARG(b_, 1);
  P x_1268F1600;
  P x_1267F1599;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T11 = CALL1(CHKREF(YastYbinding_kind),b_);
  x_1267F1599 = T11;
  T10 = CALL2(CHKREF(YmacrosYEE),x_1267F1599,CHKREF(lit_29));
  if (T10 != YPfalse) {
    T9 = CALL1(CHKREF(YastYbinding_locative),b_);
    T8 = CALL2(CHKREF(Yast_evalYenv_runtime_value_setter),v_,T9);
    T1 = T8;
  } else {
    x_1268F1600 = x_1267F1599;
    T7 = CALL2(CHKREF(YmacrosYEE),x_1268F1600,CHKREF(lit_28));
    if (T7 != YPfalse) {
      T6 = CALL2(CHKREF(Yast_evalYenv_global_binding_value_setter),v_,b_);
      T3 = T6;
    } else {
      T5 = CALL1(CHKREF(YastYbinding_kind),b_);
      T4 = CALL2(CHKREF(Yerror),CHKREF(lit_27),T5);
      T3 = T4;
    }
    T2 = T3;
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_65) {
  ARG(env_, 0);
  ARG(e_, 1);
  P valueF1601;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = CALL1(CHKREF(YastYassignment_form),e_);
  T2 = CALL2(CHKREF(Yast_evalYast_eval),T3,env_);
  valueF1601 = T2;
  T1 = CALL1(CHKREF(YastYassignment_binding),e_);
  CALL2(CHKREF(Yast_evalYenv_define_bindingX),T1,valueF1601);
  T0 = YPfalse;
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_66) {
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

FUNCODEDEF(fun_eval_67) {
  ARG(e_, 0);
  P valF1603;
  P nxtF1602;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = CALL1(CHKREF(Ytail),e_);
  nxtF1602 = T7;
  T6 = CALL1(CHKREF(Yhead),e_);
  T5 = CALL2(CHKREF(Yast_evalYast_eval),T6,FREEREF(0));
  valF1603 = T5;
  T4 = CALL1(CHKREF(YmacrosYemptyQ),nxtF1602);
  if (T4 != YPfalse) {
    T2 = valF1603;
  } else {
    a1 = nxtF1602;
    e_ = a1;
    goto loop;
    T2 = T3;
  }
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_68) {
  ARG(env_, 0);
  ARG(e_, 1);
  P evalF1604;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_eval_67,2);
  evalF1604 = T2;
  FUNINIT(evalF1604, 2,env_,evalF1604);
  T1 = KCALL1(evalF1604,e_);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_eval_69) {
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

FUNCODEDEF(fun_ast_eval_70) {
  ARG(env_, 0);
  ARG(e_, 1);
  P evalF1605;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_eval_69,2);
  evalF1605 = T2;
  FUNINIT(evalF1605, 2,env_,evalF1605);
  T1 = KCALL2(evalF1605,Ynil,e_);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_71) {
  ARG(env_, 0);
  ARG(e_, 1);
  P argsF1607;
  P fF1606;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T6 = CALL1(CHKREF(YastYapplication_function),e_);
  T5 = CALL2(CHKREF(Yast_evalYast_eval),T6,env_);
  fF1606 = T5;
  T4 = CALL1(CHKREF(YastYapplication_arguments),e_);
  T3 = CALL2(CHKREF(Yast_evalYast_eval),T4,env_);
  argsF1607 = T3;
  T2 = CALL2(CHKREF(Yapply),fF1606,argsF1607);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_72) {
  ARG(env_, 0);
  ARG(e_, 1);
  P nmsF1611;
  P argsF1610;
  P fF1609;
  P bF1608;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T14 = CALL1(CHKREF(YastYapplication_binding),e_);
  bF1608 = T14;
  T13 = CALL1(CHKREF(YastYbinding_name),bF1608);
  T12 = CALL2(CHKREF(YmacrosYEE),T13,CHKREF(lit_31));
  if (T12 != YPfalse) {
    T11 = CALL2(CHKREF(Yast_evalYenv_binding_value),env_,CHKREF(lit_30));
    nmsF1611 = T11;
    T10 = CALL2(CHKREF(YmacrosYEE),nmsF1611,CHKREF(Ynul));
    if (T10 != YPfalse) {
      T9 = YPfalse;
    } else {
      T9 = nmsF1611;
    }
    T8 = T9;
    T1 = T8;
  } else {
    T7 = CALL1(CHKREF(YastYbinding_info),bF1608);
    fF1609 = T7;
    T6 = CALL1(CHKREF(YastYapplication_arguments),e_);
    T5 = CALL2(CHKREF(Yast_evalYast_eval),T6,env_);
    argsF1610 = T5;
    T4 = CALL2(CHKREF(Yapply),fF1609,argsF1610);
    T3 = T4;
    T2 = T3;
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_73) {
  ARG(env_, 0);
  ARG(e_, 1);
  P nenvF1613;
  P argsF1612;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T8 = CALL1(CHKREF(YastYfix_let_arguments),e_);
  T7 = CALL2(CHKREF(Yast_evalYast_eval),T8,env_);
  argsF1612 = T7;
  T6 = CALL1(CHKREF(YastYfix_let_bindings),e_);
  T5 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_name),T6);
  T4 = CALLN(CHKREF(Yast_evalYenv_frameX),4,env_,YPfalse,T5,argsF1612);
  nenvF1613 = T4;
  T3 = CALL1(CHKREF(YastYfix_let_body),e_);
  T2 = CALL2(CHKREF(Yast_evalYast_eval),T3,nenvF1613);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_74) {
  ARG(value_, 0);
  ARG(name_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yast_evalYenv_binding_value_setter),value_,FREEREF(0),name_);
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_75) {
  ARG(env_, 0);
  ARG(e_, 1);
  P new_envF1615;
  P bindingsF1614;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T13 = CALL1(CHKREF(YastYlocals_bindings),e_);
  bindingsF1614 = T13;
  T12 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_name),bindingsF1614);
  T11 = CALL1(CHKREF(YruntimeYalways),CHKREF(Ynul));
  T10 = CALL2(CHKREF(YmacrosYmap),T11,bindingsF1614);
  T9 = CALLN(CHKREF(Yast_evalYenv_frameX),4,env_,YPfalse,T12,T10);
  new_envF1615 = T9;
  T6 = FUNFAB(fun_74,1,new_envF1615);
  T5 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_name),bindingsF1614);
  T4 = CALL2(CHKREF(YruntimeYrcurry),CHKREF(Yast_evalYast_eval),new_envF1615);
  T3 = CALL1(CHKREF(YastYlocals_functions),e_);
  T2 = CALL2(CHKREF(YmacrosYmap),T4,T3);
  CALL3(CHKREF(YruntimeYdo2),T6,T5,T2);
  T8 = CALL1(CHKREF(YastYlocals_body),e_);
  T7 = CALL2(CHKREF(Yast_evalYast_eval),T8,new_envF1615);
  T1 = T7;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_76) {
  ARG(env_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(Yast_evalYenv_binding_value),env_,CHKREF(lit_33));
  T0 = CALL1(FREEREF(0),T1);
  QRET(T0);
}

FUNCODEDEF(fun_77) {
  ARG(return_, 0);
  P exitF1617;
  P rprocF1616;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = FUNFAB(fun_76,1,return_);
  rprocF1616 = T8;
  T7 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_32));
  T6 = CALL1(CHKREF(YmacrosYlst),YPfalse);
  T5 = CALLN(CHKREF(Yast_evalYexport_proto_method),7,rprocF1616,T7,T6,YPfalse,YPfalse,rprocF1616,FREEREF(0));
  exitF1617 = T5;
  T4 = CALL1(CHKREF(YastYbind_exit_main_fun),FREEREF(1));
  T3 = CALL2(CHKREF(Yast_evalYast_eval),T4,FREEREF(0));
  T2 = CALL1(T3,exitF1617);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_78) {
  ARG(env_, 0);
  ARG(e_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = FUNFAB(fun_77,2,env_,e_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_79) {
  P T2,T1,T0;
loop:
  T2 = CALL1(CHKREF(YastYunwind_protect_cleanup_thunk),FREEREF(1));
  T1 = CALL2(CHKREF(Yast_evalYast_eval),T2,FREEREF(0));
  T0 = CALL0(T1);
  QRET(T0);
}

FUNCODEDEF(fun_80) {
  P T2,T1,T0;
loop:
  T2 = CALL1(CHKREF(YastYunwind_protect_protected_thunk),FREEREF(1));
  T1 = CALL2(CHKREF(Yast_evalYast_eval),T2,FREEREF(0));
  T0 = CALL0(T1);
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_81) {
  ARG(env_, 0);
  ARG(e_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNFAB(fun_80,2,env_,e_);
  T1 = FUNFAB(fun_79,2,env_,e_);
  T0 = with_cleanup(T2,T1);
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_82) {
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
  P bF1618;
  P T2,T1,T0;
  P a1;
loop:
  CALLN(CHKREF(YastYast_define_binding),4,env_,CHKREF(lit_37),YPfalse,CHKREF(lit_36));
  T2 = CALLN(CHKREF(YastYast_define_binding),4,env_,CHKREF(lit_35),YPfalse,CHKREF(lit_34));
  bF1618 = T2;
  T1 = CALL2(CHKREF(Yast_evalYenv_global_binding_value_setter),CHKREF(YmacrosYpair),bF1618);
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
  lit_0 = YPsb((P)"Unbound binding: %=");
  T0 = YPsig(YPpair(YPPsym((P)"b"),Ynil),YPpair(CHKREF(YastYLmodule_bindingG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_env_global_binding_value_0 = YPmet(FUNCODEREF(fun_env_global_binding_value_0),YPPsym((P)"env-global-binding-value"),T0,ENVNUL);
  T4 = BOUNDP(Yast_evalYenv_global_binding_value);
  if (T4 != YPfalse) {
    T3 = CHKREF(Yast_evalYenv_global_binding_value);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_env_global_binding_value_0;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  Yast_evalYenv_global_binding_value = T1;
  regsym(&Yast_evalYenv_global_binding_value,"ast-eval","env-global-binding-value");
  T5 = YPsig(YPpair(YPPsym((P)"value"),YPpair(YPPsym((P)"b"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLmodule_bindingG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_env_global_binding_value_setter_1 = YPmet(FUNCODEREF(fun_env_global_binding_value_setter_1),YPPsym((P)"env-global-binding-value-setter"),T5,ENVNUL);
  T9 = BOUNDP(Yast_evalYenv_global_binding_value_setter);
  if (T9 != YPfalse) {
    T8 = CHKREF(Yast_evalYenv_global_binding_value_setter);
  } else {
    T8 = YPfalse;
  }
  T7 = fun_env_global_binding_value_setter_1;
  T6 = CALL2(CHKREF(YPdefine_method),T8,T7);
  Yast_evalYenv_global_binding_value_setter = T6;
  regsym(&Yast_evalYenv_global_binding_value_setter,"ast-eval","env-global-binding-value-setter");
  T10 = YPsig(YPpair(YPPsym((P)"b"),Ynil),YPpair(CHKREF(YastYLmodule_bindingG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_env_global_binding_boundQ_2 = YPmet(FUNCODEREF(fun_env_global_binding_boundQ_2),YPPsym((P)"env-global-binding-bound?"),T10,ENVNUL);
  T14 = BOUNDP(Yast_evalYenv_global_binding_boundQ);
  if (T14 != YPfalse) {
    T13 = CHKREF(Yast_evalYenv_global_binding_boundQ);
  } else {
    T13 = YPfalse;
  }
  T12 = fun_env_global_binding_boundQ_2;
  T11 = CALL2(CHKREF(YPdefine_method),T13,T12);
  Yast_evalYenv_global_binding_boundQ = T11;
  regsym(&Yast_evalYenv_global_binding_boundQ,"ast-eval","env-global-binding-bound?");
  T15 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLlocG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_env_runtime_value_3 = YPmet(FUNCODEREF(fun_env_runtime_value_3),YPPsym((P)"env-runtime-value"),T15,ENVNUL);
  T19 = BOUNDP(Yast_evalYenv_runtime_value);
  if (T19 != YPfalse) {
    T18 = CHKREF(Yast_evalYenv_runtime_value);
  } else {
    T18 = YPfalse;
  }
  T17 = fun_env_runtime_value_3;
  T16 = CALL2(CHKREF(YPdefine_method),T18,T17);
  Yast_evalYenv_runtime_value = T16;
  regsym(&Yast_evalYenv_runtime_value,"ast-eval","env-runtime-value");
  T20 = YPsig(YPpair(YPPsym((P)"v"),YPpair(YPPsym((P)"x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLlocG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_env_runtime_value_setter_4 = YPmet(FUNCODEREF(fun_env_runtime_value_setter_4),YPPsym((P)"env-runtime-value-setter"),T20,ENVNUL);
  T24 = BOUNDP(Yast_evalYenv_runtime_value_setter);
  if (T24 != YPfalse) {
    T23 = CHKREF(Yast_evalYenv_runtime_value_setter);
  } else {
    T23 = YPfalse;
  }
  T22 = fun_env_runtime_value_setter_4;
  T21 = CALL2(CHKREF(YPdefine_method),T23,T22);
  Yast_evalYenv_runtime_value_setter = T21;
  regsym(&Yast_evalYenv_runtime_value_setter,"ast-eval","env-runtime-value-setter");
  T26 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T25 = CALL3(CHKREF(YPisa),T26,Ynil,Ynil);
  Yast_evalYLloc_envG = T25;
  regsym(&Yast_evalYLloc_envG,"ast-eval","<loc-env>");
  T27 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_env_parent_5 = YPmet(FUNCODEREF(fun_env_parent_5),YPPsym((P)"env-parent"),T27,ENVNUL);
  T31 = BOUNDP(Yast_evalYenv_parent);
  if (T31 != YPfalse) {
    T30 = CHKREF(Yast_evalYenv_parent);
  } else {
    T30 = YPfalse;
  }
  T29 = fun_env_parent_5;
  T28 = CALL2(CHKREF(YPdefine_method),T30,T29);
  Yast_evalYenv_parent = T28;
  regsym(&Yast_evalYenv_parent,"ast-eval","env-parent");
  T32 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_env_parent_setter_6 = YPmet(FUNCODEREF(fun_env_parent_setter_6),YPPsym((P)"env-parent-setter"),T32,ENVNUL);
  T36 = BOUNDP(Yast_evalYenv_parent_setter);
  if (T36 != YPfalse) {
    T35 = CHKREF(Yast_evalYenv_parent_setter);
  } else {
    T35 = YPfalse;
  }
  T34 = fun_env_parent_setter_6;
  T33 = CALL2(CHKREF(YPdefine_method),T35,T34);
  Yast_evalYenv_parent_setter = T33;
  regsym(&Yast_evalYenv_parent_setter,"ast-eval","env-parent-setter");
  T37 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T37,ENVNUL);
  T38 = fun_7;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_evalYLloc_envG),CHKREF(Yast_evalYenv_parent),CHKREF(Yast_evalYenv_parent_setter),CHKREF(YLanyG),T38);
  T39 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_env_function_8 = YPmet(FUNCODEREF(fun_env_function_8),YPPsym((P)"env-function"),T39,ENVNUL);
  T43 = BOUNDP(Yast_evalYenv_function);
  if (T43 != YPfalse) {
    T42 = CHKREF(Yast_evalYenv_function);
  } else {
    T42 = YPfalse;
  }
  T41 = fun_env_function_8;
  T40 = CALL2(CHKREF(YPdefine_method),T42,T41);
  Yast_evalYenv_function = T40;
  regsym(&Yast_evalYenv_function,"ast-eval","env-function");
  T44 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_env_function_setter_9 = YPmet(FUNCODEREF(fun_env_function_setter_9),YPPsym((P)"env-function-setter"),T44,ENVNUL);
  T48 = BOUNDP(Yast_evalYenv_function_setter);
  if (T48 != YPfalse) {
    T47 = CHKREF(Yast_evalYenv_function_setter);
  } else {
    T47 = YPfalse;
  }
  T46 = fun_env_function_setter_9;
  T45 = CALL2(CHKREF(YPdefine_method),T47,T46);
  Yast_evalYenv_function_setter = T45;
  regsym(&Yast_evalYenv_function_setter,"ast-eval","env-function-setter");
  T49 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T49,ENVNUL);
  T50 = fun_10;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_evalYLloc_envG),CHKREF(Yast_evalYenv_function),CHKREF(Yast_evalYenv_function_setter),CHKREF(YLanyG),T50);
  T51 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_env_names_11 = YPmet(FUNCODEREF(fun_env_names_11),YPPsym((P)"env-names"),T51,ENVNUL);
  T55 = BOUNDP(Yast_evalYenv_names);
  if (T55 != YPfalse) {
    T54 = CHKREF(Yast_evalYenv_names);
  } else {
    T54 = YPfalse;
  }
  T53 = fun_env_names_11;
  T52 = CALL2(CHKREF(YPdefine_method),T54,T53);
  Yast_evalYenv_names = T52;
  regsym(&Yast_evalYenv_names,"ast-eval","env-names");
  T56 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLlstG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_env_names_setter_12 = YPmet(FUNCODEREF(fun_env_names_setter_12),YPPsym((P)"env-names-setter"),T56,ENVNUL);
  T60 = BOUNDP(Yast_evalYenv_names_setter);
  if (T60 != YPfalse) {
    T59 = CHKREF(Yast_evalYenv_names_setter);
  } else {
    T59 = YPfalse;
  }
  T58 = fun_env_names_setter_12;
  T57 = CALL2(CHKREF(YPdefine_method),T59,T58);
  Yast_evalYenv_names_setter = T57;
  regsym(&Yast_evalYenv_names_setter,"ast-eval","env-names-setter");
  T61 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T61,ENVNUL);
  T62 = fun_13;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_evalYLloc_envG),CHKREF(Yast_evalYenv_names),CHKREF(Yast_evalYenv_names_setter),CHKREF(YLlstG),T62);
  T63 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_env_values_14 = YPmet(FUNCODEREF(fun_env_values_14),YPPsym((P)"env-values"),T63,ENVNUL);
  T67 = BOUNDP(Yast_evalYenv_values);
  if (T67 != YPfalse) {
    T66 = CHKREF(Yast_evalYenv_values);
  } else {
    T66 = YPfalse;
  }
  T65 = fun_env_values_14;
  T64 = CALL2(CHKREF(YPdefine_method),T66,T65);
  Yast_evalYenv_values = T64;
  regsym(&Yast_evalYenv_values,"ast-eval","env-values");
  T68 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLvecG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_env_values_setter_15 = YPmet(FUNCODEREF(fun_env_values_setter_15),YPPsym((P)"env-values-setter"),T68,ENVNUL);
  T72 = BOUNDP(Yast_evalYenv_values_setter);
  if (T72 != YPfalse) {
    T71 = CHKREF(Yast_evalYenv_values_setter);
  } else {
    T71 = YPfalse;
  }
  T70 = fun_env_values_setter_15;
  T69 = CALL2(CHKREF(YPdefine_method),T71,T70);
  Yast_evalYenv_values_setter = T69;
  regsym(&Yast_evalYenv_values_setter,"ast-eval","env-values-setter");
  T73 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T73,ENVNUL);
  T74 = fun_16;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_evalYLloc_envG),CHKREF(Yast_evalYenv_values),CHKREF(Yast_evalYenv_values_setter),CHKREF(YLvecG),T74);
  T76 = (P)YPpair(CHKREF(Yast_evalYLloc_envG),Ynil);
  T75 = CALL3(CHKREF(YPisa),T76,Ynil,Ynil);
  Yast_evalYDnul_loc_env = T75;
  regsym(&Yast_evalYDnul_loc_env,"ast-eval","$nul-loc-env");
  T77 = YPsig(YPpair(YPPsym((P)"env"),YPpair(YPPsym((P)"function"),YPpair(YPPsym((P)"names"),YPpair(YPPsym((P)"args"),Ynil)))),YPpair(CHKREF(Yast_evalYLloc_envG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlstG),Ynil)))),YPfalse,YPint((P)4),CHKREF(Yast_evalYLloc_envG));
  fun_env_frameX_17 = YPmet(FUNCODEREF(fun_env_frameX_17),YPPsym((P)"env-frame!"),T77,ENVNUL);
  T81 = BOUNDP(Yast_evalYenv_frameX);
  if (T81 != YPfalse) {
    T80 = CHKREF(Yast_evalYenv_frameX);
  } else {
    T80 = YPfalse;
  }
  T79 = fun_env_frameX_17;
  T78 = CALL2(CHKREF(YPdefine_method),T80,T79);
  Yast_evalYenv_frameX = T78;
  regsym(&Yast_evalYenv_frameX,"ast-eval","env-frame!");
  T82 = YPsig(YPpair(YPPsym((P)"env"),YPpair(YPPsym((P)"i"),YPpair(YPPsym((P)"j"),Ynil))),YPpair(CHKREF(Yast_evalYLloc_envG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLintG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_env_local_value_18 = YPmet(FUNCODEREF(fun_env_local_value_18),YPPsym((P)"env-local-value"),T82,ENVNUL);
  T86 = BOUNDP(Yast_evalYenv_local_value);
  if (T86 != YPfalse) {
    T85 = CHKREF(Yast_evalYenv_local_value);
  } else {
    T85 = YPfalse;
  }
  T84 = fun_env_local_value_18;
  T83 = CALL2(CHKREF(YPdefine_method),T85,T84);
  Yast_evalYenv_local_value = T83;
  regsym(&Yast_evalYenv_local_value,"ast-eval","env-local-value");
  T87 = YPsig(YPpair(YPPsym((P)"v"),YPpair(YPPsym((P)"env"),YPpair(YPPsym((P)"i"),YPpair(YPPsym((P)"j"),Ynil)))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(Yast_evalYLloc_envG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLintG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_env_local_value_setter_19 = YPmet(FUNCODEREF(fun_env_local_value_setter_19),YPPsym((P)"env-local-value-setter"),T87,ENVNUL);
  T91 = BOUNDP(Yast_evalYenv_local_value_setter);
  if (T91 != YPfalse) {
    T90 = CHKREF(Yast_evalYenv_local_value_setter);
  } else {
    T90 = YPfalse;
  }
  T89 = fun_env_local_value_setter_19;
  T88 = CALL2(CHKREF(YPdefine_method),T90,T89);
  Yast_evalYenv_local_value_setter = T88;
  regsym(&Yast_evalYenv_local_value_setter,"ast-eval","env-local-value-setter");
  T93 = YPsig(YPpair(YPPsym((P)"names"),YPpair(YPPsym((P)"i"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_20 = YPmet(FUNCODEREF(fun_loop_20),YPPsym((P)"loop"),T93,ENVNUL);
  T92 = YPsig(YPpair(YPPsym((P)"env"),YPpair(YPPsym((P)"name"),Ynil)),YPpair(CHKREF(Yast_evalYLloc_envG),YPpair(CHKREF(YLsymG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_env_binding_value_21 = YPmet(FUNCODEREF(fun_env_binding_value_21),YPPsym((P)"env-binding-value"),T92,ENVNUL);
  T97 = BOUNDP(Yast_evalYenv_binding_value);
  if (T97 != YPfalse) {
    T96 = CHKREF(Yast_evalYenv_binding_value);
  } else {
    T96 = YPfalse;
  }
  T95 = fun_env_binding_value_21;
  T94 = CALL2(CHKREF(YPdefine_method),T96,T95);
  Yast_evalYenv_binding_value = T94;
  regsym(&Yast_evalYenv_binding_value,"ast-eval","env-binding-value");
  T99 = YPsig(YPpair(YPPsym((P)"names"),YPpair(YPPsym((P)"i"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_22 = YPmet(FUNCODEREF(fun_loop_22),YPPsym((P)"loop"),T99,ENVNUL);
  T98 = YPsig(YPpair(YPPsym((P)"v"),YPpair(YPPsym((P)"env"),YPpair(YPPsym((P)"name"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(Yast_evalYLloc_envG),YPpair(CHKREF(YLsymG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_env_binding_value_setter_23 = YPmet(FUNCODEREF(fun_env_binding_value_setter_23),YPPsym((P)"env-binding-value-setter"),T98,ENVNUL);
  T103 = BOUNDP(Yast_evalYenv_binding_value_setter);
  if (T103 != YPfalse) {
    T102 = CHKREF(Yast_evalYenv_binding_value_setter);
  } else {
    T102 = YPfalse;
  }
  T101 = fun_env_binding_value_setter_23;
  T100 = CALL2(CHKREF(YPdefine_method),T102,T101);
  Yast_evalYenv_binding_value_setter = T100;
  regsym(&Yast_evalYenv_binding_value_setter,"ast-eval","env-binding-value-setter");
  T104 = YPsig(YPpair(YPPsym((P)"e"),Ynil),YPpair(CHKREF(YastYLprogramG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_ast_evaluate_24 = YPmet(FUNCODEREF(fun_ast_evaluate_24),YPPsym((P)"ast-evaluate"),T104,ENVNUL);
  T108 = BOUNDP(YastYast_evaluate);
  if (T108 != YPfalse) {
    T107 = CHKREF(YastYast_evaluate);
  } else {
    T107 = YPfalse;
  }
  T106 = fun_ast_evaluate_24;
  T105 = CALL2(CHKREF(YPdefine_method),T107,T106);
  YastYast_evaluate = T105;
  regsym(&YastYast_evaluate,"ast","ast-evaluate");
  T110 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLprogramG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  T109 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),YPPsym((P)"ast-eval"),T110,Ynil,YPfalse);
  Yast_evalYast_eval = T109;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T111 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLconstantG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_25 = YPmet(FUNCODEREF(fun_ast_eval_25),YPPsym((P)"ast-eval"),T111,ENVNUL);
  T115 = BOUNDP(Yast_evalYast_eval);
  if (T115 != YPfalse) {
    T114 = CHKREF(Yast_evalYast_eval);
  } else {
    T114 = YPfalse;
  }
  T113 = fun_ast_eval_25;
  T112 = CALL2(CHKREF(YPdefine_method),T114,T113);
  Yast_evalYast_eval = T112;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T116 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLraw_constantG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_26 = YPmet(FUNCODEREF(fun_ast_eval_26),YPPsym((P)"ast-eval"),T116,ENVNUL);
  T120 = BOUNDP(Yast_evalYast_eval);
  if (T120 != YPfalse) {
    T119 = CHKREF(Yast_evalYast_eval);
  } else {
    T119 = YPfalse;
  }
  T118 = fun_ast_eval_26;
  T117 = CALL2(CHKREF(YPdefine_method),T119,T118);
  Yast_evalYast_eval = T117;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T121 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"ee"),Ynil)),YPpair(CHKREF(YastYLcompile_timeG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_27 = YPmet(FUNCODEREF(fun_ast_eval_27),YPPsym((P)"ast-eval"),T121,ENVNUL);
  T125 = BOUNDP(Yast_evalYast_eval);
  if (T125 != YPfalse) {
    T124 = CHKREF(Yast_evalYast_eval);
  } else {
    T124 = YPfalse;
  }
  T123 = fun_ast_eval_27;
  T122 = CALL2(CHKREF(YPdefine_method),T124,T123);
  Yast_evalYast_eval = T122;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T127 = YPsig(YPpair(YPPsym((P)"res"),YPpair(YPPsym((P)"specs"),YPpair(YPPsym((P)"i"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_loop_28 = YPmet(FUNCODEREF(fun_loop_28),YPPsym((P)"loop"),T127,ENVNUL);
  T126 = YPsig(YPpair(YPPsym((P)"specs"),YPpair(YPPsym((P)"nary?"),YPpair(YPPsym((P)"env"),Ynil))),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLlogG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_ast_eval_specs_29 = YPmet(FUNCODEREF(fun_ast_eval_specs_29),YPPsym((P)"ast-eval-specs"),T126,ENVNUL);
  T131 = BOUNDP(Yast_evalYast_eval_specs);
  if (T131 != YPfalse) {
    T130 = CHKREF(Yast_evalYast_eval_specs);
  } else {
    T130 = YPfalse;
  }
  T129 = fun_ast_eval_specs_29;
  T128 = CALL2(CHKREF(YPdefine_method),T130,T129);
  Yast_evalYast_eval_specs = T128;
  regsym(&Yast_evalYast_eval_specs,"ast-eval","ast-eval-specs");
  T132 = CALL2(CHKREF(YruntimeYfab),CHKREF(YruntimeYLbufG),YPint((P)0));
  Yast_evalYTstackT = T132;
  regsym(&Yast_evalYTstackT,"ast-eval","*stack*");
  lit_1 = YPPsym((P)"frame");
  lit_2 = YPPsym((P)"nms");
  lit_3 = YPPsym((P)"lst");
  lit_4 = YPPsym((P)"%next-methods");
  lit_5 = YPPsym((P)"quote");
  lit_6 = YPPsym((P)"lst");
  lit_7 = YPPsym((P)"cat2");
  lit_8 = YPPsym((P)"env-frame!");
  lit_9 = YPPsym((P)"frame");
  lit_10 = YPPsym((P)"%next-methods");
  lit_11 = YPPsym((P)"nms");
  lit_12 = YPPsym((P)"let");
  lit_13 = YPPsym((P)"fun");
  lit_14 = YPsb((P)"Match Pattern Failure");
  lit_15 = YPPsym((P)"ifun");
  T135 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1255_30 = YPmet(FUNCODEREF(fun_x_1255_30),YPPsym((P)"x-1255"),T135,ENVNUL);
  T134 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T134,ENVNUL);
  T133 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T133,ENVNUL);
  T136 = fun_32;
  YPmacro(YPPsym((P)"ifun"),T136);
  T137 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLfunG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_as_fun_name_33 = YPmet(FUNCODEREF(fun_as_fun_name_33),YPPsym((P)"as-fun-name"),T137,ENVNUL);
  T141 = BOUNDP(Yast_evalYas_fun_name);
  if (T141 != YPfalse) {
    T140 = CHKREF(Yast_evalYas_fun_name);
  } else {
    T140 = YPfalse;
  }
  T139 = fun_as_fun_name_33;
  T138 = CALL2(CHKREF(YPdefine_method),T140,T139);
  Yast_evalYas_fun_name = T138;
  regsym(&Yast_evalYas_fun_name,"ast-eval","as-fun-name");
  T142 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YastYLast_functionG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_as_fun_name_34 = YPmet(FUNCODEREF(fun_as_fun_name_34),YPPsym((P)"as-fun-name"),T142,ENVNUL);
  T146 = BOUNDP(Yast_evalYas_fun_name);
  if (T146 != YPfalse) {
    T145 = CHKREF(Yast_evalYas_fun_name);
  } else {
    T145 = YPfalse;
  }
  T144 = fun_as_fun_name_34;
  T143 = CALL2(CHKREF(YPdefine_method),T145,T144);
  Yast_evalYas_fun_name = T143;
  regsym(&Yast_evalYas_fun_name,"ast-eval","as-fun-name");
  T147 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YastYLmodule_bindingG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_as_fun_name_35 = YPmet(FUNCODEREF(fun_as_fun_name_35),YPPsym((P)"as-fun-name"),T147,ENVNUL);
  T151 = BOUNDP(Yast_evalYas_fun_name);
  if (T151 != YPfalse) {
    T150 = CHKREF(Yast_evalYas_fun_name);
  } else {
    T150 = YPfalse;
  }
  T149 = fun_as_fun_name_35;
  T148 = CALL2(CHKREF(YPdefine_method),T150,T149);
  Yast_evalYas_fun_name = T148;
  regsym(&Yast_evalYas_fun_name,"ast-eval","as-fun-name");
  T152 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLsymG),Ynil),YPfalse,YPint((P)1),CHKREF(YLsymG));
  fun_as_fun_name_36 = YPmet(FUNCODEREF(fun_as_fun_name_36),YPPsym((P)"as-fun-name"),T152,ENVNUL);
  T156 = BOUNDP(Yast_evalYas_fun_name);
  if (T156 != YPfalse) {
    T155 = CHKREF(Yast_evalYas_fun_name);
  } else {
    T155 = YPfalse;
  }
  T154 = fun_as_fun_name_36;
  T153 = CALL2(CHKREF(YPdefine_method),T155,T154);
  Yast_evalYas_fun_name = T153;
  regsym(&Yast_evalYas_fun_name,"ast-eval","as-fun-name");
  T157 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_as_fun_name_37 = YPmet(FUNCODEREF(fun_as_fun_name_37),YPPsym((P)"as-fun-name"),T157,ENVNUL);
  T161 = BOUNDP(Yast_evalYas_fun_name);
  if (T161 != YPfalse) {
    T160 = CHKREF(Yast_evalYas_fun_name);
  } else {
    T160 = YPfalse;
  }
  T159 = fun_as_fun_name_37;
  T158 = CALL2(CHKREF(YPdefine_method),T160,T159);
  Yast_evalYas_fun_name = T158;
  regsym(&Yast_evalYas_fun_name,"ast-eval","as-fun-name");
  lit_16 = YPPsym((P)"%next-methods");
  lit_17 = YPPsym((P)"%next-methods");
  lit_18 = YPPsym((P)"%next-methods");
  lit_19 = YPPsym((P)"%next-methods");
  lit_20 = YPPsym((P)"%next-methods");
  lit_21 = YPPsym((P)"%next-methods");
  lit_22 = YPPsym((P)"%next-methods");
  lit_23 = YPPsym((P)"%next-methods");
  lit_24 = YPPsym((P)"%next-methods");
  lit_25 = YPPsym((P)"%next-methods");
  T172 = YPsig(YPpair(YPPsym((P)"a1"),YPpair(YPPsym((P)"a2"),YPpair(YPPsym((P)"a3"),YPpair(YPPsym((P)"a4"),YPpair(YPPsym((P)"a5"),YPpair(YPPsym((P)"a6"),YPpair(YPPsym((P)"a7"),YPpair(YPPsym((P)"a8"),YPpair(YPPsym((P)"a9"),Ynil))))))))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))))))))),YPfalse,YPint((P)9),CHKREF(YLanyG));
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T172,ENVNUL);
  T171 = YPsig(YPpair(YPPsym((P)"a1"),YPpair(YPPsym((P)"a2"),YPpair(YPPsym((P)"a3"),YPpair(YPPsym((P)"a4"),YPpair(YPPsym((P)"a5"),YPpair(YPPsym((P)"a6"),YPpair(YPPsym((P)"a7"),YPpair(YPPsym((P)"a8"),Ynil)))))))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))))))),YPfalse,YPint((P)8),CHKREF(YLanyG));
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T171,ENVNUL);
  T170 = YPsig(YPpair(YPPsym((P)"a1"),YPpair(YPPsym((P)"a2"),YPpair(YPPsym((P)"a3"),YPpair(YPPsym((P)"a4"),YPpair(YPPsym((P)"a5"),YPpair(YPPsym((P)"a6"),YPpair(YPPsym((P)"a7"),Ynil))))))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))))))),YPfalse,YPint((P)7),CHKREF(YLanyG));
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T170,ENVNUL);
  T169 = YPsig(YPpair(YPPsym((P)"a1"),YPpair(YPPsym((P)"a2"),YPpair(YPPsym((P)"a3"),YPpair(YPPsym((P)"a4"),YPpair(YPPsym((P)"a5"),YPpair(YPPsym((P)"a6"),Ynil)))))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))))),YPfalse,YPint((P)6),CHKREF(YLanyG));
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T169,ENVNUL);
  T168 = YPsig(YPpair(YPPsym((P)"a1"),YPpair(YPPsym((P)"a2"),YPpair(YPPsym((P)"a3"),YPpair(YPPsym((P)"a4"),YPpair(YPPsym((P)"a5"),Ynil))))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))))),YPfalse,YPint((P)5),CHKREF(YLanyG));
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T168,ENVNUL);
  T167 = YPsig(YPpair(YPPsym((P)"a1"),YPpair(YPPsym((P)"a2"),YPpair(YPPsym((P)"a3"),YPpair(YPPsym((P)"a4"),Ynil)))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T167,ENVNUL);
  T166 = YPsig(YPpair(YPPsym((P)"a1"),YPpair(YPPsym((P)"a2"),YPpair(YPPsym((P)"a3"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T166,ENVNUL);
  T165 = YPsig(YPpair(YPPsym((P)"a1"),YPpair(YPPsym((P)"a2"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T165,ENVNUL);
  T164 = YPsig(YPpair(YPPsym((P)"a1"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_46 = YPmet(FUNCODEREF(fun_46),YPfalse,T164,ENVNUL);
  T163 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T163,ENVNUL);
  T162 = YPsig(YPpair(YPPsym((P)"f"),YPpair(YPPsym((P)"names"),YPpair(YPPsym((P)"specs"),YPpair(YPPsym((P)"nary?"),YPpair(YPPsym((P)"value"),YPpair(YPPsym((P)"body"),YPpair(YPPsym((P)"env"),Ynil))))))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))))))),YPfalse,YPint((P)7),CHKREF(YLanyG));
  fun_export_proto_method_48 = YPmet(FUNCODEREF(fun_export_proto_method_48),YPPsym((P)"export-proto-method"),T162,ENVNUL);
  T176 = BOUNDP(Yast_evalYexport_proto_method);
  if (T176 != YPfalse) {
    T175 = CHKREF(Yast_evalYexport_proto_method);
  } else {
    T175 = YPfalse;
  }
  T174 = fun_export_proto_method_48;
  T173 = CALL2(CHKREF(YPdefine_method),T175,T174);
  Yast_evalYexport_proto_method = T173;
  regsym(&Yast_evalYexport_proto_method,"ast-eval","export-proto-method");
  T178 = YPsig(YPpair(YPPsym((P)"env"),Ynil),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T178,ENVNUL);
  T177 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLast_methodG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_50 = YPmet(FUNCODEREF(fun_ast_eval_50),YPPsym((P)"ast-eval"),T177,ENVNUL);
  T182 = BOUNDP(Yast_evalYast_eval);
  if (T182 != YPfalse) {
    T181 = CHKREF(Yast_evalYast_eval);
  } else {
    T181 = YPfalse;
  }
  T180 = fun_ast_eval_50;
  T179 = CALL2(CHKREF(YPdefine_method),T181,T180);
  Yast_evalYast_eval = T179;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T183 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLast_genericG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_51 = YPmet(FUNCODEREF(fun_ast_eval_51),YPPsym((P)"ast-eval"),T183,ENVNUL);
  T187 = BOUNDP(Yast_evalYast_eval);
  if (T187 != YPfalse) {
    T186 = CHKREF(Yast_evalYast_eval);
  } else {
    T186 = YPfalse;
  }
  T185 = fun_ast_eval_51;
  T184 = CALL2(CHKREF(YPdefine_method),T186,T185);
  Yast_evalYast_eval = T184;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T188 = YPsig(YPpair(YPPsym((P)"env"),YPpair(YPPsym((P)"ref"),Ynil)),YPpair(CHKREF(Yast_evalYLloc_envG),YPpair(CHKREF(YastYLlocal_referenceG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_env_local_reference_value_52 = YPmet(FUNCODEREF(fun_env_local_reference_value_52),YPPsym((P)"env-local-reference-value"),T188,ENVNUL);
  T192 = BOUNDP(Yast_evalYenv_local_reference_value);
  if (T192 != YPfalse) {
    T191 = CHKREF(Yast_evalYenv_local_reference_value);
  } else {
    T191 = YPfalse;
  }
  T190 = fun_env_local_reference_value_52;
  T189 = CALL2(CHKREF(YPdefine_method),T191,T190);
  Yast_evalYenv_local_reference_value = T189;
  regsym(&Yast_evalYenv_local_reference_value,"ast-eval","env-local-reference-value");
  T193 = YPsig(YPpair(YPPsym((P)"val"),YPpair(YPPsym((P)"env"),YPpair(YPPsym((P)"ref"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(Yast_evalYLloc_envG),YPpair(CHKREF(YastYLlocal_referenceG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_env_local_reference_value_setter_53 = YPmet(FUNCODEREF(fun_env_local_reference_value_setter_53),YPPsym((P)"env-local-reference-value-setter"),T193,ENVNUL);
  T197 = BOUNDP(Yast_evalYenv_local_reference_value_setter);
  if (T197 != YPfalse) {
    T196 = CHKREF(Yast_evalYenv_local_reference_value_setter);
  } else {
    T196 = YPfalse;
  }
  T195 = fun_env_local_reference_value_setter_53;
  T194 = CALL2(CHKREF(YPdefine_method),T196,T195);
  Yast_evalYenv_local_reference_value_setter = T194;
  regsym(&Yast_evalYenv_local_reference_value_setter,"ast-eval","env-local-reference-value-setter");
  T198 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLlocal_referenceG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_54 = YPmet(FUNCODEREF(fun_ast_eval_54),YPPsym((P)"ast-eval"),T198,ENVNUL);
  T202 = BOUNDP(Yast_evalYast_eval);
  if (T202 != YPfalse) {
    T201 = CHKREF(Yast_evalYast_eval);
  } else {
    T201 = YPfalse;
  }
  T200 = fun_ast_eval_54;
  T199 = CALL2(CHKREF(YPdefine_method),T201,T200);
  Yast_evalYast_eval = T199;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T203 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLglobal_referenceG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_55 = YPmet(FUNCODEREF(fun_ast_eval_55),YPPsym((P)"ast-eval"),T203,ENVNUL);
  T207 = BOUNDP(Yast_evalYast_eval);
  if (T207 != YPfalse) {
    T206 = CHKREF(Yast_evalYast_eval);
  } else {
    T206 = YPfalse;
  }
  T205 = fun_ast_eval_55;
  T204 = CALL2(CHKREF(YPdefine_method),T206,T205);
  Yast_evalYast_eval = T204;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T208 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLruntime_referenceG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_56 = YPmet(FUNCODEREF(fun_ast_eval_56),YPPsym((P)"ast-eval"),T208,ENVNUL);
  T212 = BOUNDP(Yast_evalYast_eval);
  if (T212 != YPfalse) {
    T211 = CHKREF(Yast_evalYast_eval);
  } else {
    T211 = YPfalse;
  }
  T210 = fun_ast_eval_56;
  T209 = CALL2(CHKREF(YPdefine_method),T211,T210);
  Yast_evalYast_eval = T209;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T213 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLboundQG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_57 = YPmet(FUNCODEREF(fun_ast_eval_57),YPPsym((P)"ast-eval"),T213,ENVNUL);
  T217 = BOUNDP(Yast_evalYast_eval);
  if (T217 != YPfalse) {
    T216 = CHKREF(Yast_evalYast_eval);
  } else {
    T216 = YPfalse;
  }
  T215 = fun_ast_eval_57;
  T214 = CALL2(CHKREF(YPdefine_method),T216,T215);
  Yast_evalYast_eval = T214;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  lit_26 = YPPsym((P)"global");
  T218 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"binding"),YPpair(YPPsym((P)"env"),Ynil))),YPpair(CHKREF(YastYLboundQG),YPpair(CHKREF(YastYLmodule_bindingG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_ast_eval_boundQ_58 = YPmet(FUNCODEREF(fun_ast_eval_boundQ_58),YPPsym((P)"ast-eval-bound?"),T218,ENVNUL);
  T222 = BOUNDP(Yast_evalYast_eval_boundQ);
  if (T222 != YPfalse) {
    T221 = CHKREF(Yast_evalYast_eval_boundQ);
  } else {
    T221 = YPfalse;
  }
  T220 = fun_ast_eval_boundQ_58;
  T219 = CALL2(CHKREF(YPdefine_method),T221,T220);
  Yast_evalYast_eval_boundQ = T219;
  regsym(&Yast_evalYast_eval_boundQ,"ast-eval","ast-eval-bound?");
  T223 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"binding"),YPpair(YPPsym((P)"env"),Ynil))),YPpair(CHKREF(YastYLboundQG),YPpair(CHKREF(YastYLlocal_bindingG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_ast_eval_boundQ_59 = YPmet(FUNCODEREF(fun_ast_eval_boundQ_59),YPPsym((P)"ast-eval-bound?"),T223,ENVNUL);
  T227 = BOUNDP(Yast_evalYast_eval_boundQ);
  if (T227 != YPfalse) {
    T226 = CHKREF(Yast_evalYast_eval_boundQ);
  } else {
    T226 = YPfalse;
  }
  T225 = fun_ast_eval_boundQ_59;
  T224 = CALL2(CHKREF(YPdefine_method),T226,T225);
  Yast_evalYast_eval_boundQ = T224;
  regsym(&Yast_evalYast_eval_boundQ,"ast-eval","ast-eval-bound?");
  T228 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLglobal_assignmentG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_60 = YPmet(FUNCODEREF(fun_ast_eval_60),YPPsym((P)"ast-eval"),T228,ENVNUL);
  T232 = BOUNDP(Yast_evalYast_eval);
  if (T232 != YPfalse) {
    T231 = CHKREF(Yast_evalYast_eval);
  } else {
    T231 = YPfalse;
  }
  T230 = fun_ast_eval_60;
  T229 = CALL2(CHKREF(YPdefine_method),T231,T230);
  Yast_evalYast_eval = T229;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T233 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLast_macro_definitionG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_61 = YPmet(FUNCODEREF(fun_ast_eval_61),YPPsym((P)"ast-eval"),T233,ENVNUL);
  T237 = BOUNDP(Yast_evalYast_eval);
  if (T237 != YPfalse) {
    T236 = CHKREF(Yast_evalYast_eval);
  } else {
    T236 = YPfalse;
  }
  T235 = fun_ast_eval_61;
  T234 = CALL2(CHKREF(YPdefine_method),T236,T235);
  Yast_evalYast_eval = T234;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T238 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLruntime_assignmentG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_62 = YPmet(FUNCODEREF(fun_ast_eval_62),YPPsym((P)"ast-eval"),T238,ENVNUL);
  T242 = BOUNDP(Yast_evalYast_eval);
  if (T242 != YPfalse) {
    T241 = CHKREF(Yast_evalYast_eval);
  } else {
    T241 = YPfalse;
  }
  T240 = fun_ast_eval_62;
  T239 = CALL2(CHKREF(YPdefine_method),T241,T240);
  Yast_evalYast_eval = T239;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T243 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLlocal_assignmentG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_63 = YPmet(FUNCODEREF(fun_ast_eval_63),YPPsym((P)"ast-eval"),T243,ENVNUL);
  T247 = BOUNDP(Yast_evalYast_eval);
  if (T247 != YPfalse) {
    T246 = CHKREF(Yast_evalYast_eval);
  } else {
    T246 = YPfalse;
  }
  T245 = fun_ast_eval_63;
  T244 = CALL2(CHKREF(YPdefine_method),T246,T245);
  Yast_evalYast_eval = T244;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  lit_27 = YPsb((P)"Defining invalid binding kind %=");
  lit_28 = YPPsym((P)"global");
  lit_29 = YPPsym((P)"runtime");
  T248 = YPsig(YPpair(YPPsym((P)"b"),YPpair(YPPsym((P)"v"),Ynil)),YPpair(CHKREF(YastYLmodule_bindingG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_env_define_bindingX_64 = YPmet(FUNCODEREF(fun_env_define_bindingX_64),YPPsym((P)"env-define-binding!"),T248,ENVNUL);
  T252 = BOUNDP(Yast_evalYenv_define_bindingX);
  if (T252 != YPfalse) {
    T251 = CHKREF(Yast_evalYenv_define_bindingX);
  } else {
    T251 = YPfalse;
  }
  T250 = fun_env_define_bindingX_64;
  T249 = CALL2(CHKREF(YPdefine_method),T251,T250);
  Yast_evalYenv_define_bindingX = T249;
  regsym(&Yast_evalYenv_define_bindingX,"ast-eval","env-define-binding!");
  T253 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLdefinitionG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_65 = YPmet(FUNCODEREF(fun_ast_eval_65),YPPsym((P)"ast-eval"),T253,ENVNUL);
  T257 = BOUNDP(Yast_evalYast_eval);
  if (T257 != YPfalse) {
    T256 = CHKREF(Yast_evalYast_eval);
  } else {
    T256 = YPfalse;
  }
  T255 = fun_ast_eval_65;
  T254 = CALL2(CHKREF(YPdefine_method),T256,T255);
  Yast_evalYast_eval = T254;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T258 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLalternativeG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_66 = YPmet(FUNCODEREF(fun_ast_eval_66),YPPsym((P)"ast-eval"),T258,ENVNUL);
  T262 = BOUNDP(Yast_evalYast_eval);
  if (T262 != YPfalse) {
    T261 = CHKREF(Yast_evalYast_eval);
  } else {
    T261 = YPfalse;
  }
  T260 = fun_ast_eval_66;
  T259 = CALL2(CHKREF(YPdefine_method),T261,T260);
  Yast_evalYast_eval = T259;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T264 = YPsig(YPpair(YPPsym((P)"e"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_eval_67 = YPmet(FUNCODEREF(fun_eval_67),YPPsym((P)"eval"),T264,ENVNUL);
  T263 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLsequentialG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_68 = YPmet(FUNCODEREF(fun_ast_eval_68),YPPsym((P)"ast-eval"),T263,ENVNUL);
  T268 = BOUNDP(Yast_evalYast_eval);
  if (T268 != YPfalse) {
    T267 = CHKREF(Yast_evalYast_eval);
  } else {
    T267 = YPfalse;
  }
  T266 = fun_ast_eval_68;
  T265 = CALL2(CHKREF(YPdefine_method),T267,T266);
  Yast_evalYast_eval = T265;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T270 = YPsig(YPpair(YPPsym((P)"res"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_eval_69 = YPmet(FUNCODEREF(fun_eval_69),YPPsym((P)"eval"),T270,ENVNUL);
  T269 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLargumentsG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_70 = YPmet(FUNCODEREF(fun_ast_eval_70),YPPsym((P)"ast-eval"),T269,ENVNUL);
  T274 = BOUNDP(Yast_evalYast_eval);
  if (T274 != YPfalse) {
    T273 = CHKREF(Yast_evalYast_eval);
  } else {
    T273 = YPfalse;
  }
  T272 = fun_ast_eval_70;
  T271 = CALL2(CHKREF(YPdefine_method),T273,T272);
  Yast_evalYast_eval = T271;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T275 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLregular_applicationG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_71 = YPmet(FUNCODEREF(fun_ast_eval_71),YPPsym((P)"ast-eval"),T275,ENVNUL);
  T279 = BOUNDP(Yast_evalYast_eval);
  if (T279 != YPfalse) {
    T278 = CHKREF(Yast_evalYast_eval);
  } else {
    T278 = YPfalse;
  }
  T277 = fun_ast_eval_71;
  T276 = CALL2(CHKREF(YPdefine_method),T278,T277);
  Yast_evalYast_eval = T276;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  lit_30 = YPPsym((P)"%next-methods");
  lit_31 = YPPsym((P)"%next-methods");
  T280 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLpredefined_applicationG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_72 = YPmet(FUNCODEREF(fun_ast_eval_72),YPPsym((P)"ast-eval"),T280,ENVNUL);
  T284 = BOUNDP(Yast_evalYast_eval);
  if (T284 != YPfalse) {
    T283 = CHKREF(Yast_evalYast_eval);
  } else {
    T283 = YPfalse;
  }
  T282 = fun_ast_eval_72;
  T281 = CALL2(CHKREF(YPdefine_method),T283,T282);
  Yast_evalYast_eval = T281;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T287 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLfix_letG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  T286 = fun_ast_eval_73 = YPmet(FUNCODEREF(fun_ast_eval_73),YPPsym((P)"ast-eval"),T287,ENVNUL);
  T292 = BOUNDP(Yast_evalYast_eval);
  if (T292 != YPfalse) {
    T291 = CHKREF(Yast_evalYast_eval);
  } else {
    T291 = YPfalse;
  }
  T290 = fun_ast_eval_73;
  T289 = CALL2(CHKREF(YPdefine_method),T291,T290);
  T288 = Yast_evalYast_eval = T289;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T285 = T288;
  return T285;
}

P Yast_evalY___main_1___() {
  P T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T1 = YPsig(YPpair(YPPsym((P)"name"),YPpair(YPPsym((P)"value"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_74 = YPmet(FUNCODEREF(fun_74),YPfalse,T1,ENVNUL);
  T0 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLlocalsG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_75 = YPmet(FUNCODEREF(fun_ast_eval_75),YPPsym((P)"ast-eval"),T0,ENVNUL);
  T5 = BOUNDP(Yast_evalYast_eval);
  if (T5 != YPfalse) {
    T4 = CHKREF(Yast_evalYast_eval);
  } else {
    T4 = YPfalse;
  }
  T3 = fun_ast_eval_75;
  T2 = CALL2(CHKREF(YPdefine_method),T4,T3);
  Yast_evalYast_eval = T2;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  lit_32 = YPPsym((P)"x");
  lit_33 = YPPsym((P)"x");
  T8 = YPsig(YPpair(YPPsym((P)"env"),Ynil),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T8,ENVNUL);
  T7 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_77 = YPmet(FUNCODEREF(fun_77),YPfalse,T7,ENVNUL);
  T6 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLbind_exitG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_78 = YPmet(FUNCODEREF(fun_ast_eval_78),YPPsym((P)"ast-eval"),T6,ENVNUL);
  T12 = BOUNDP(Yast_evalYast_eval);
  if (T12 != YPfalse) {
    T11 = CHKREF(Yast_evalYast_eval);
  } else {
    T11 = YPfalse;
  }
  T10 = fun_ast_eval_78;
  T9 = CALL2(CHKREF(YPdefine_method),T11,T10);
  Yast_evalYast_eval = T9;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T15 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T15,ENVNUL);
  T14 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T14,ENVNUL);
  T13 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLunwind_protectG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_81 = YPmet(FUNCODEREF(fun_ast_eval_81),YPPsym((P)"ast-eval"),T13,ENVNUL);
  T19 = BOUNDP(Yast_evalYast_eval);
  if (T19 != YPfalse) {
    T18 = CHKREF(Yast_evalYast_eval);
  } else {
    T18 = YPfalse;
  }
  T17 = fun_ast_eval_81;
  T16 = CALL2(CHKREF(YPdefine_method),T18,T17);
  Yast_evalYast_eval = T16;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T20 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLmonitorG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_82 = YPmet(FUNCODEREF(fun_ast_eval_82),YPPsym((P)"ast-eval"),T20,ENVNUL);
  T24 = BOUNDP(Yast_evalYast_eval);
  if (T24 != YPfalse) {
    T23 = CHKREF(Yast_evalYast_eval);
  } else {
    T23 = YPfalse;
  }
  T22 = fun_ast_eval_82;
  T21 = CALL2(CHKREF(YPdefine_method),T23,T22);
  Yast_evalYast_eval = T21;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  lit_34 = YPPsym((P)"global");
  lit_35 = YPPsym((P)"%pair");
  lit_36 = YPPsym((P)"predefined");
  lit_37 = YPPsym((P)"%next-methods");
  T25 = YPsig(YPpair(YPPsym((P)"env"),Ynil),YPpair(CHKREF(YastYLstatic_global_environmentG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YastYinit_environment_for_eval = YPmet(FUNCODEREF(YastYinit_environment_for_eval),YPPsym((P)"init-environment-for-eval"),T25,ENVNUL);
  T26 = YastYinit_environment_for_eval;
  YastYinit_environment_for_eval = T26;
  regsym(&YastYinit_environment_for_eval,"ast","init-environment-for-eval");
  T27 = YPfalse;
  return T27;
}

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

  load_module_boot();
  load_module_macros();
  load_module_runtime();
  load_module_ast();

  (P)Yast_evalY___main_0___();
  (P)Yast_evalY___main_1___();

  need_init = 0;
}

/* END OF GENERATED CODE. */
