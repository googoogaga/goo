/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: ast-eval */

EXT(YLtraitsG,"boot","<traits>");
EXT(YastYreference_called_functionQ,"ast","reference-called-function?");
EXT(YastYbinding_type,"ast","binding-type");
DEF(Yast_evalYast_eval_boundQ,"ast-eval","ast-eval-bound?");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(YastYLpredefined_bindingG,"ast","<predefined-binding>");
EXT(YmacrosYmap,"macros","map");
EXT(YruntimeYassocq,"runtime","assocq");
EXT(YastYbinding_type_setter,"ast","binding-type-setter");
EXT(YastYalternative_condition,"ast","alternative-condition");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(YruntimeYdo2,"runtime","do2");
DEF(Yast_evalYenv_parent_setter,"ast-eval","env-parent-setter");
EXT(Ynot,"boot","not");
EXT(Yfun_value,"boot","fun-value");
DEF(Yast_evalYenv_local_value,"ast-eval","env-local-value");
EXT(YruntimeYelt,"runtime","elt");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(YruntimeYdo,"runtime","do");
EXT(YastYLlocal_bindingG,"ast","<local-binding>");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YLstrG,"boot","<str>");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YastYsignature_names,"ast","signature-names");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YastYbinding_value_setter,"ast","binding-value-setter");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YruntimeYpop,"runtime","pop");
EXT(YastYconstant_value,"ast","constant-value");
EXT(Ytail_setter,"boot","tail-setter");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(YruntimeYfab,"runtime","fab");
EXT(YastYLast_primitiveG,"ast","<ast-primitive>");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
DEF(Yast_evalYenv_values,"ast-eval","env-values");
EXT(YLvecG,"boot","<vec>");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YastYbinding_dynamic_extentQ,"ast","binding-dynamic-extent?");
EXT(YastYLmacro_bindingG,"ast","<macro-binding>");
EXT(YruntimeYcurry,"runtime","curry");
EXT(YastYLfix_letG,"ast","<fix-let>");
EXT(YastYload_module,"ast","load-module");
EXT(YastYLlocal_assignmentG,"ast","<local-assignment>");
EXT(YruntimeYfile_mtime,"runtime","file-mtime");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YastYLast_signatureG,"ast","<ast-signature>");
EXT(YastYdo_module_loader_modules,"ast","do-module-loader-modules");
EXT(YastYunwind_protect_protected_thunk,"ast","unwind-protect-protected-thunk");
EXT(YLlocG,"boot","<loc>");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(YastYLsequentialG,"ast","<sequential>");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
DEF(Yast_evalYLloc_envG,"ast-eval","<loc-env>");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(Yerror,"boot","error");
EXT(YastYfunction_bindings,"ast","function-bindings");
EXT(YruntimeYassq,"runtime","assq");
EXT(YastYLglobal_referenceG,"ast","<global-reference>");
EXT(YruntimeYsub,"runtime","sub");
DEF(Yast_evalYenv_global_binding_value,"ast-eval","env-global-binding-value");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(YastYcompile_time_program,"ast","compile-time-program");
EXT(YastYsignature_value,"ast","signature-value");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YruntimeYdel_dups,"runtime","del-dups");
EXT(YastYLstatic_global_environmentG,"ast","<static-global-environment>");
EXT(YPcall_next_method,"boot","%call-next-method");
EXT(YastYfunction_value,"ast","function-value");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YastYLmoduleG,"ast","<module>");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YLsymG,"boot","<sym>");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YastYbinding_locative,"ast","binding-locative");
EXT(YastYLunwind_protectG,"ast","<unwind-protect>");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YastYdo_static_global_bindings,"ast","do-static-global-bindings");
DEF(Yast_evalYenv_runtime_value,"ast-eval","env-runtime-value");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YastYbinding_mutableQ,"ast","binding-mutable?");
EXT(YwriteYenv_object_name,"write","env-object-name");
EXT(Ysym_name,"boot","sym-name");
DEF(Yast_evalYenv_local_value_setter,"ast-eval","env-local-value-setter");
EXT(YastYmodule_syntax_environment,"ast","module-syntax-environment");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(YruntimeYmemQ,"runtime","mem?");
EXT(YLslotG,"boot","<slot>");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YruntimeYas,"runtime","as");
EXT(YastYassignment_reference,"ast","assignment-reference");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(YruntimeYLE,"runtime","<=");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YastYglobal_box_value_setter,"ast","global-box-value-setter");
EXT(YastYalternative_consequent,"ast","alternative-consequent");
EXT(YastYLpassive_programG,"ast","<passive-program>");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YruntimeYout,"runtime","out");
EXT(YruntimeYnewline,"runtime","newline");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(YastYLreferenceG,"ast","<reference>");
EXT(YastYlocals_body_setter,"ast","locals-body-setter");
DEF(Yast_evalYenv_global_binding_value_setter,"ast-eval","env-global-binding-value-setter");
EXT(YastYmonitor_main_thunk,"ast","monitor-main-thunk");
EXT(YruntimeYpush,"runtime","push");
EXT(YastYLast_macro_definitionG,"ast","<ast-macro-definition>");
EXT(YruntimeY2nd,"runtime","2nd");
DEF(Yast_evalYenv_frameX,"ast-eval","env-frame!");
EXT(YastYLmonitorG,"ast","<monitor>");
EXT(YastYDproto_runtime_module_name,"ast","$proto-runtime-module-name");
EXT(YastYLmagic_bindingG,"ast","<magic-binding>");
EXT(YastYLreal_referenceG,"ast","<real-reference>");
DEF(Yast_evalYenv_function,"ast-eval","env-function");
EXT(YmacrosYlst,"macros","lst");
EXT(YastYfix_let_body,"ast","fix-let-body");
EXT(YruntimeYvec,"runtime","vec");
EXT(Yslot_value,"boot","slot-value");
EXT(YruntimeYread_char,"runtime","read-char");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YastYglobal_box_value,"ast","global-box-value");
EXT(YruntimeYfill,"runtime","fill");
EXT(YruntimeY1st,"runtime","1st");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YPsnul,"boot","%snul");
EXT(YastYLdefinitionG,"ast","<definition>");
EXT(YastYLboundQG,"ast","<bound?>");
EXT(YmacrosYEE,"macros","==");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(YLanyG,"boot","<any>");
EXT(YLfunG,"boot","<fun>");
EXT(YastYfunction_body_setter,"ast","function-body-setter");
EXT(YastYLmodule_bindingG,"ast","<module-binding>");
EXT(YastYfix_let_types,"ast","fix-let-types");
EXT(YastYfix_let_types_setter,"ast","fix-let-types-setter");
EXT(YruntimeYassoc,"runtime","assoc");
EXT(YastYLmodule_loaderG,"ast","<module-loader>");
EXT(YastYlocals_functions,"ast","locals-functions");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
DEF(Yast_evalYenv_parent,"ast-eval","env-parent");
EXT(YastYbind_exit_main_fun,"ast","bind-exit-main-fun");
EXT(YastYruntime_environment,"ast","runtime-environment");
EXT(YastYLruntime_bindingG,"ast","<runtime-binding>");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
EXT(YruntimeYeof_object,"runtime","eof-object");
EXT(YastYLalternativeG,"ast","<alternative>");
EXT(YruntimeYformat,"runtime","format");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YastYreference_frame_offset,"ast","reference-frame-offset");
EXT(YruntimeYE,"runtime","=");
EXT(YPvnul,"boot","%vnul");
EXT(YastYbinding_global_box,"ast","binding-global-box");
EXT(YastYbinding_global_box_setter,"ast","binding-global-box-setter");
DEF(Yast_evalYenv_names_setter,"ast-eval","env-names-setter");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(YruntimeYassqn,"runtime","assqn");
EXT(YastYLglobal_assignmentG,"ast","<global-assignment>");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YastYmodule_target_environment,"ast","module-target-environment");
EXT(YastYreference_called_functionQ_setter,"ast","reference-called-function?-setter");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YPisa,"boot","%isa");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YmacrosYcat,"macros","cat");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(YastYboundQ_reference,"ast","bound?-reference");
EXT(YastYLprogramG,"ast","<program>");
DEF(Yast_evalYast_eval,"ast-eval","ast-eval");
EXT(YPsymbols,"boot","%symbols");
EXT(Ysig_names,"boot","sig-names");
EXT(YastYLpredefined_applicationG,"ast","<predefined-application>");
EXT(YastYbinding_name,"ast","binding-name");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YastYreference_binding,"ast","reference-binding");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YastYsequentialize,"ast","sequentialize");
EXT(YastYLconstantG,"ast","<constant>");
EXT(YastYfix_let_bindings_setter,"ast","fix-let-bindings-setter");
DEF(Yast_evalYast_eval_specs,"ast-eval","ast-eval-specs");
EXT(YruntimeYL,"runtime","<");
EXT(YruntimeYlen,"runtime","len");
EXT(YastYapplication_knownQ_setter,"ast","application-known?-setter");
EXT(YastYfunction_name,"ast","function-name");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
DEF(Yast_evalYenv_names,"ast-eval","env-names");
EXT(YisaQ,"boot","isa?");
DEF(Yast_evalYenv_binding_value,"ast-eval","env-binding-value");
EXT(YastYLbind_exitG,"ast","<bind-exit>");
EXT(YmacrosYpair,"macros","pair");
EXT(YruntimeYfrom,"runtime","from");
EXT(YastYfab_p2c_module,"ast","fab-p2c-module");
EXT(YastYalternative_alternant,"ast","alternative-alternant");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YLgenG,"boot","<gen>");
EXT(Ynul,"boot","nul");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YastYapplication_binding,"ast","application-binding");
EXT(YruntimeYtype_or,"runtime","type-or");
EXT(YastYapplication_tailQ,"ast","application-tail?");
EXT(YruntimeYempty,"runtime","empty");
EXT(Ysig_specs,"boot","sig-specs");
EXT(Yfab_sym,"boot","fab-sym");
EXT(YastYLbindingG,"ast","<binding>");
EXT(YPdefine_method,"boot","%define-method");
DEF(Yast_evalYenv_values_setter,"ast-eval","env-values-setter");
EXT(YastYLast_primitive_definitionG,"ast","<ast-primitive-definition>");
EXT(YPslot,"boot","%slot");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YruntimeYA,"runtime","+");
EXT(YastYLlocal_referenceG,"ast","<local-reference>");
EXT(YastYLast_functionG,"ast","<ast-function>");
EXT(YLcolG,"boot","<col>");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YLlogG,"boot","<log>");
EXT(YLtupG,"boot","<tup>");
EXT(YastYbinding_dynamic_extentQ_setter,"ast","binding-dynamic-extent?-setter");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(YruntimeYG,"runtime",">");
DEF(Yast_evalYexport_proto_method,"ast-eval","export-proto-method");
DEF(Yast_evalYas_fun_name,"ast-eval","as-fun-name");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YLnumG,"boot","<num>");
EXT(YLflatG,"boot","<flat>");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(Ytype_error,"boot","type-error");
EXT(YastYenvironment_uses_modules,"ast","environment-uses-modules");
EXT(YPPmacro,"boot","%%macro");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YastYLregular_applicationG,"ast","<regular-application>");
EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(YastYfix_let_body_setter,"ast","fix-let-body-setter");
EXT(YastYLruntime_assignmentG,"ast","<runtime-assignment>");
DEF(Yast_evalYenv_binding_value_setter,"ast-eval","env-binding-value-setter");
EXT(YastYlocals_functions_setter,"ast","locals-functions-setter");
EXT(YastYapplication_function,"ast","application-function");
EXT(YastYset_module_environments,"ast","set-module-environments");
EXT(YastYmonitor_handler,"ast","monitor-handler");
EXT(YLseqG,"boot","<seq>");
EXT(YastYLcompile_timeG,"ast","<compile-time>");
EXT(YLsigG,"boot","<sig>");
EXT(YruntimeYalways,"runtime","always");
EXT(YastYfix_let_arguments,"ast","fix-let-arguments");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YastYfix_let_bindings,"ast","fix-let-bindings");
EXT(YastYfunction_signature,"ast","function-signature");
EXT(Yfun_names,"boot","fun-names");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YastYapplication_arguments,"ast","application-arguments");
EXT(YastYLargumentsG,"ast","<arguments>");
EXT(YLfloG,"boot","<flo>");
EXT(YLbagG,"boot","<bag>");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(YastYast_evaluate,"ast","ast-evaluate");
EXT(YastYLast_genericG,"ast","<ast-generic>");
EXT(YastYmodule_name,"ast","module-name");
EXT(Yobject_parents,"boot","object-parents");
EXT(YastYapplication_knownQ,"ast","application-known?");
EXT(YruntimeYGE,"runtime",">=");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YLoptsG,"boot","<opts>");
EXT(YruntimeYmap2,"runtime","map2");
EXT(YastYLglobal_bindingG,"ast","<global-binding>");
EXT(YastYLruntime_referenceG,"ast","<runtime-reference>");
EXT(YastYprogram_register_setter,"ast","program-register-setter");
DEF(Yast_evalYenv_global_binding_boundQ,"ast-eval","env-global-binding-bound?");
EXT(YastYLlocalsG,"ast","<locals>");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(YastYremove_modules_by_nameX,"ast","remove-modules-by-name!");
EXT(YastYreport_undefined_global_bindings,"ast","report-undefined-global-bindings");
DEF(Yast_evalYenv_local_reference_value,"ast-eval","env-local-reference-value");
DEF(Yast_evalYenv_runtime_value_setter,"ast-eval","env-runtime-value-setter");
EXT(YastYsignature_naryQ,"ast","signature-nary?");
EXT(YruntimeYpos,"runtime","pos");
EXT(YruntimeYneg,"runtime","neg");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(Ysig_value,"boot","sig-value");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(YastYLglobal_boxG,"ast","<global-box>");
EXT(YruntimeYwrite_char,"runtime","write-char");
DEF(Yast_evalYenv_define_bindingX,"ast-eval","env-define-binding!");
EXT(YruntimeYin,"runtime","in");
EXT(YastYobjectify,"ast","objectify");
EXT(YLlstG,"boot","<lst>");
EXT(YruntimeYnow_elt,"runtime","now-elt");
EXT(YastYfunction_naryQ,"ast","function-nary?");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
EXT(YastYLprogramsG,"ast","<programs>");
EXT(YastYfix_let_arguments_setter,"ast","fix-let-arguments-setter");
EXT(YLmetG,"boot","<met>");
EXT(YruntimeYsig,"runtime","sig");
EXT(YastYast_define_binding,"ast","ast-define-binding");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YastYlocals_body,"ast","locals-body");
EXT(YastYbinding_module_name,"ast","binding-module-name");
EXT(YastYbinding_native_toQ,"ast","binding-native-to?");
DEF(Yast_evalYDnul_loc_env,"ast-eval","$nul-loc-env");
EXT(YastYDproto_boot_module_name,"ast","$proto-boot-module-name");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(YastYprobe_module,"ast","probe-module");
EXT(YastYreference_frame_number,"ast","reference-frame-number");
EXT(YastYprogram_register,"ast","program-register");
EXT(YruntimeYlen_setter,"runtime","len-setter");
EXT(YastYLraw_constantG,"ast","<raw-constant>");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YastYinit_ast,"ast","init-ast");
EXT(YruntimeYlast,"runtime","last");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(Yhead,"boot","head");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YastYLapplicationG,"ast","<application>");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YastYassignment_binding,"ast","assignment-binding");
DEF(Yast_evalYTstackT,"ast-eval","*stack*");
EXT(YastYlocals_bindings,"ast","locals-bindings");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
EXT(YastYsignature_specs,"ast","signature-specs");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(YastYLast_methodG,"ast","<ast-method>");
EXT(YastYunwind_protect_cleanup_thunk,"ast","unwind-protect-cleanup-thunk");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YruntimeYrev,"runtime","rev");
EXT(YastYbinding_value,"ast","binding-value");
EXT(YLchrG,"boot","<chr>");
EXT(YastYLcomputed_programG,"ast","<computed-program>");
EXT(YastYinit_environment_for_eval,"ast","init-environment-for-eval");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YruntimeY_,"runtime","-");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
EXT(Yobject_slots,"boot","object-slots");
EXT(Yapply,"boot","apply");
EXT(Yfun_name,"boot","fun-name");
EXT(YastYmodule_loader_module_type,"ast","module-loader-module-type");
EXT(YLintG,"boot","<int>");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YmacrosYtup,"macros","tup");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(Ytail,"boot","tail");
DEF(Yast_evalYenv_local_reference_value_setter,"ast-eval","env-local-reference-value-setter");
DEF(Yast_evalYenv_function_setter,"ast-eval","env-function-setter");
EXT(YastYlocals_bindings_setter,"ast","locals-bindings-setter");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(YastYassignment_form,"ast","assignment-form");
EXT(Yhead_setter,"boot","head-setter");
EXT(YastYfunction_body,"ast","function-body");

/* FORWARD QUOTATIONS: */

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
LOCFOR(fun_x_1241_30);
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
LOCFOR(fun_ast_eval_boundQ_60);
LOCFOR(fun_ast_eval_61);
LOCFOR(fun_ast_eval_62);
LOCFOR(fun_ast_eval_63);
LOCFOR(fun_ast_eval_64);
LOCFOR(fun_env_define_bindingX_65);
LOCFOR(fun_env_define_bindingX_66);
LOCFOR(fun_ast_eval_67);
LOCFOR(fun_ast_eval_68);
LOCFOR(fun_eval_69);
LOCFOR(fun_ast_eval_70);
LOCFOR(fun_eval_71);
LOCFOR(fun_ast_eval_72);
LOCFOR(fun_ast_eval_73);
LOCFOR(fun_ast_eval_74);
LOCFOR(fun_ast_eval_75);
LOCFOR(fun_76);
LOCFOR(fun_ast_eval_77);
LOCFOR(fun_78);
LOCFOR(fun_79);
LOCFOR(fun_ast_eval_80);
LOCFOR(fun_81);
LOCFOR(fun_82);
LOCFOR(fun_ast_eval_83);
LOCFOR(fun_ast_eval_84);
LOCFOR(fun_85);
FUNFOR(YastYinit_environment_for_eval);
extern P Yast_evalY___main_0___ ();
extern P Yast_evalY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_env_global_binding_value_0) {
  ARG(b_, 0);
  P boxF1465;
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T5 = CALL1(CHKREF(YastYbinding_global_box),b_);
  boxF1465 = T5;
  if (boxF1465 != YPfalse) {
    T4 = CALL1(CHKREF(YastYglobal_box_value),boxF1465);
    T1 = T4;
  } else {
    T3 = CALL1(CHKREF(YastYbinding_name),b_);
    T2 = CALL2(CHKREF(Yerror),lit_0,T3);
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_env_global_binding_value_setter_1) {
  ARG(b_, 0);
  ARG(value_, 1);
  P boxF1466;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T10 = CALL1(CHKREF(YastYbinding_global_box),b_);
  boxF1466 = T10;
  boxF1466 = BOXFAB(boxF1466);
  T7 = BOXVAL(boxF1466);
  T6 = CALL1(CHKREF(Ynot),T7);
  if (T6 != YPfalse) {
    T5 = (P)YPpair(CHKREF(YastYLglobal_boxG),Ynil);
    T4 = CALL3(CHKREF(YPisa),T5,Ynil,Ynil);
    T3 = CALL2(CHKREF(YastYbinding_global_box_setter),T4,b_);
    T2 = BOXVAL(boxF1466) = T3;
  } else {
  }
  T9 = BOXVAL(boxF1466);
  T8 = CALL2(CHKREF(YastYglobal_box_value_setter),value_,T9);
  T0 = T8;
  QRET(T0);
}

FUNCODEDEF(fun_env_global_binding_boundQ_2) {
  ARG(b_, 0);
  P boxF1467;
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL1(CHKREF(YastYbinding_global_box),b_);
  boxF1467 = T2;
  if (boxF1467 != YPfalse) {
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
  P valuesF1468;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T11 = CALL2(CHKREF(YruntimeYas),CHKREF(YLvecG),args_);
  valuesF1468 = T11;
  T10 = (P)YPpair(CHKREF(Yast_evalYLloc_envG),Ynil);
  T9 = (P)YPpair(CHKREF(Yast_evalYenv_names),Ynil);
  T8 = (P)YPpair(CHKREF(Yast_evalYenv_values),T9);
  T7 = (P)YPpair(CHKREF(Yast_evalYenv_function),T8);
  T6 = (P)YPpair(CHKREF(Yast_evalYenv_parent),T7);
  T5 = (P)YPpair(names_,Ynil);
  T4 = (P)YPpair(valuesF1468,T5);
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
  P loopF1469;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = CALL2(CHKREF(YmacrosYEE),env_,CHKREF(Yast_evalYDnul_loc_env));
  if (T5 != YPfalse) {
    T0 = CHKREF(Ynul);
  } else {
    T4 = FUNSHELL(1,fun_loop_20,3);
    loopF1469 = T4;
    FUNINIT(loopF1469, 3,loopF1469,env_,name_);
    T3 = CALL1(CHKREF(Yast_evalYenv_names),env_);
    T2 = KCALL2(loopF1469,T3,YPint((P)0));
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
  P loopF1470;
  P T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T3 = FUNSHELL(1,fun_loop_22,4);
  loopF1470 = T3;
  FUNINIT(loopF1470, 4,loopF1470,env_,v_,name_);
  T2 = CALL1(CHKREF(Yast_evalYenv_names),env_);
  T1 = KCALL2(loopF1470,T2,YPint((P)0));
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
  P typeF1472;
  P specF1471;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T11 = CALL2(CHKREF(YruntimeYE),i_,FREEREF(2));
  if (T11 != YPfalse) {
    T10 = CALL1(CHKREF(YruntimeYrevX),res_);
    T0 = T10;
  } else {
    T9 = CALL1(CHKREF(Yhead),specs_);
    specF1471 = T9;
    if (specF1471 != YPfalse) {
      T8 = CALL2(CHKREF(Yast_evalYast_eval),specF1471,FREEREF(0));
      T7 = T8;
    } else {
      T7 = CHKREF(YLanyG);
    }
    typeF1472 = T7;
    T6 = CALL2(CHKREF(YmacrosYpair),typeF1472,res_);
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
  P loopF1474;
  P nreqF1473;
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
  nreqF1473 = T4;
  T3 = FUNSHELL(1,fun_loop_28,3);
  loopF1474 = T3;
  FUNINIT(loopF1474, 3,env_,loopF1474,nreqF1473);
  T2 = KCALL3(loopF1474,Ynil,specs_,YPint((P)0));
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1241_30) {
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
  P x_1240F1489;
  P x_1240F1488;
  P x_1240F1487;
  P x_1240F1486;
  P x_1240F1485;
  P x_1240F1484;
  P x_1240F1483;
  P x_1240F1482;
  P bodyF1481;
  P argsF1480;
  P namesF1479;
  P fF1478;
  P envF1477;
  P x_1240F1476;
  P x_1241F1475;
  P T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67;
  P T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51;
  P T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35;
  P T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
loop:
  T82 = FUNSHELL(0,fun_x_1241_30,1);
  x_1241F1475 = T82;
  FUNINIT(x_1241F1475, 1,return_);
  x_1240F1476 = FREEREF(0);
  envF1477 = YPfalse;
  envF1477 = BOXFAB(envF1477);
  fF1478 = YPfalse;
  fF1478 = BOXFAB(fF1478);
  namesF1479 = YPfalse;
  namesF1479 = BOXFAB(namesF1479);
  argsF1480 = YPfalse;
  argsF1480 = BOXFAB(argsF1480);
  bodyF1481 = YPfalse;
  bodyF1481 = BOXFAB(bodyF1481);
  T33 = CALL2(CHKREF(YisaQ),x_1240F1476,CHKREF(YLlstG));
  if (T33 != YPfalse) {
    T32 = CALL3(CHKREF(YmacrosYmatch_atom),x_1240F1476,lit_15,x_1241F1475);
    x_1240F1482 = T32;
    T30 = CALL2(CHKREF(YmacrosYmatch_sublist),x_1240F1482,x_1241F1475);
    x_1240F1483 = T30;
    T28 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1240F1483,x_1241F1475);
    BOXVAL(envF1477) = T28;
    T29 = CALL1(CHKREF(Ytail),x_1240F1483);
    x_1240F1484 = T29;
    T26 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1240F1484,x_1241F1475);
    BOXVAL(fF1478) = T26;
    T27 = CALL1(CHKREF(Ytail),x_1240F1484);
    x_1240F1485 = T27;
    T24 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1240F1485,x_1241F1475);
    BOXVAL(namesF1479) = T24;
    T25 = CALL1(CHKREF(Ytail),x_1240F1485);
    x_1240F1486 = T25;
    BOXVAL(argsF1480) = x_1240F1486;
    x_1240F1487 = Ynil;
    T23 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1240F1487,x_1241F1475);
    T22 = T23;
    T21 = T22;
    T20 = T21;
    T19 = T20;
    T31 = CALL1(CHKREF(Ytail),x_1240F1482);
    x_1240F1488 = T31;
    T17 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1240F1488,x_1241F1475);
    BOXVAL(bodyF1481) = T17;
    T18 = CALL1(CHKREF(Ytail),x_1240F1488);
    x_1240F1489 = T18;
    T16 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1240F1489,x_1241F1475);
    T15 = T16;
    T14 = T15;
    T13 = T14;
  } else {
    T12 = CALL2(x_1241F1475,lit_14,x_1240F1476);
  }
  T81 = CALL1(CHKREF(YmacrosYlst),lit_13);
  T80 = BOXVAL(argsF1480);
  T79 = CALL2(CHKREF(YmacrosYcat),T80,Ynil);
  T78 = CALL1(CHKREF(YmacrosYlst),T79);
  T77 = CALL1(CHKREF(YmacrosYlst),lit_12);
  T76 = CALL1(CHKREF(YmacrosYlst),lit_11);
  T75 = CALL1(CHKREF(YmacrosYlst),lit_10);
  T74 = CALL2(CHKREF(YmacrosYcat),T75,Ynil);
  T73 = CALL1(CHKREF(YmacrosYlst),T74);
  T72 = CALL3(CHKREF(YmacrosYcat),T76,T73,Ynil);
  T71 = CALL1(CHKREF(YmacrosYlst),T72);
  T70 = CALL1(CHKREF(YmacrosYlst),lit_9);
  T69 = CALL1(CHKREF(YmacrosYlst),lit_8);
  T68 = BOXVAL(envF1477);
  T67 = CALL1(CHKREF(YmacrosYlst),T68);
  T66 = BOXVAL(fF1478);
  T65 = CALL1(CHKREF(YmacrosYlst),T66);
  T64 = CALL1(CHKREF(YmacrosYlst),lit_7);
  T63 = BOXVAL(namesF1479);
  T62 = CALL1(CHKREF(YmacrosYlst),T63);
  T61 = CALL1(CHKREF(YmacrosYlst),lit_6);
  T60 = CALL1(CHKREF(YmacrosYlst),lit_5);
  T59 = CALL1(CHKREF(YmacrosYlst),lit_4);
  T58 = CALL3(CHKREF(YmacrosYcat),T60,T59,Ynil);
  T57 = CALL1(CHKREF(YmacrosYlst),T58);
  T56 = CALL3(CHKREF(YmacrosYcat),T61,T57,Ynil);
  T55 = CALL1(CHKREF(YmacrosYlst),T56);
  T54 = CALLN(CHKREF(YmacrosYcat),4,T64,T62,T55,Ynil);
  T53 = CALL1(CHKREF(YmacrosYlst),T54);
  T52 = CALL1(CHKREF(YmacrosYlst),lit_3);
  T51 = BOXVAL(argsF1480);
  T50 = CALL1(CHKREF(YmacrosYlst),lit_2);
  T49 = CALLN(CHKREF(YmacrosYcat),4,T52,T51,T50,Ynil);
  T48 = CALL1(CHKREF(YmacrosYlst),T49);
  T47 = CALLN(CHKREF(YmacrosYcat),6,T69,T67,T65,T53,T48,Ynil);
  T46 = CALL1(CHKREF(YmacrosYlst),T47);
  T45 = CALL3(CHKREF(YmacrosYcat),T70,T46,Ynil);
  T44 = CALL1(CHKREF(YmacrosYlst),T45);
  T43 = CALL3(CHKREF(YmacrosYcat),T71,T44,Ynil);
  T42 = CALL1(CHKREF(YmacrosYlst),T43);
  T41 = BOXVAL(bodyF1481);
  T40 = CALL1(CHKREF(YmacrosYlst),T41);
  T39 = CALL1(CHKREF(YmacrosYlst),lit_1);
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
  P frameF1491;
  P nmsF1490;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6,a7,a8,a9;
loop:
  T7 = (P)YPnext_methods();
  nmsF1490 = T7;
  T6 = CALL1(CHKREF(YmacrosYlst),lit_16);
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(YmacrosYlst),10,a1_,a2_,a3_,a4_,a5_,a6_,a7_,a8_,a9_,nmsF1490);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1491 = T3;
  T2 = CALL1(FREEREF(3),frameF1491);
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
  P frameF1493;
  P nmsF1492;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6,a7,a8;
loop:
  T7 = (P)YPnext_methods();
  nmsF1492 = T7;
  T6 = CALL1(CHKREF(YmacrosYlst),lit_17);
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(YmacrosYlst),9,a1_,a2_,a3_,a4_,a5_,a6_,a7_,a8_,nmsF1492);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1493 = T3;
  T2 = CALL1(FREEREF(3),frameF1493);
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
  P frameF1495;
  P nmsF1494;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6,a7;
loop:
  T7 = (P)YPnext_methods();
  nmsF1494 = T7;
  T6 = CALL1(CHKREF(YmacrosYlst),lit_18);
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(YmacrosYlst),8,a1_,a2_,a3_,a4_,a5_,a6_,a7_,nmsF1494);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1495 = T3;
  T2 = CALL1(FREEREF(3),frameF1495);
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
  P frameF1497;
  P nmsF1496;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6;
loop:
  T7 = (P)YPnext_methods();
  nmsF1496 = T7;
  T6 = CALL1(CHKREF(YmacrosYlst),lit_19);
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(YmacrosYlst),7,a1_,a2_,a3_,a4_,a5_,a6_,nmsF1496);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1497 = T3;
  T2 = CALL1(FREEREF(3),frameF1497);
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
  P frameF1499;
  P nmsF1498;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5;
loop:
  T7 = (P)YPnext_methods();
  nmsF1498 = T7;
  T6 = CALL1(CHKREF(YmacrosYlst),lit_20);
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(YmacrosYlst),6,a1_,a2_,a3_,a4_,a5_,nmsF1498);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1499 = T3;
  T2 = CALL1(FREEREF(3),frameF1499);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_43) {
  ARG(a4_, 0);
  ARG(a3_, 1);
  ARG(a2_, 2);
  ARG(a1_, 3);
  P frameF1501;
  P nmsF1500;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T7 = (P)YPnext_methods();
  nmsF1500 = T7;
  T6 = CALL1(CHKREF(YmacrosYlst),lit_21);
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(YmacrosYlst),5,a1_,a2_,a3_,a4_,nmsF1500);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1501 = T3;
  T2 = CALL1(FREEREF(3),frameF1501);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_44) {
  ARG(a3_, 0);
  ARG(a2_, 1);
  ARG(a1_, 2);
  P frameF1503;
  P nmsF1502;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T7 = (P)YPnext_methods();
  nmsF1502 = T7;
  T6 = CALL1(CHKREF(YmacrosYlst),lit_22);
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(YmacrosYlst),4,a1_,a2_,a3_,nmsF1502);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1503 = T3;
  T2 = CALL1(FREEREF(3),frameF1503);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_45) {
  ARG(a2_, 0);
  ARG(a1_, 1);
  P frameF1505;
  P nmsF1504;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T7 = (P)YPnext_methods();
  nmsF1504 = T7;
  T6 = CALL1(CHKREF(YmacrosYlst),lit_23);
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALL3(CHKREF(YmacrosYlst),a1_,a2_,nmsF1504);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1505 = T3;
  T2 = CALL1(FREEREF(3),frameF1505);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_46) {
  ARG(a1_, 0);
  P frameF1507;
  P nmsF1506;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = (P)YPnext_methods();
  nmsF1506 = T7;
  T6 = CALL1(CHKREF(YmacrosYlst),lit_24);
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALL2(CHKREF(YmacrosYlst),a1_,nmsF1506);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1507 = T3;
  T2 = CALL1(FREEREF(3),frameF1507);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_47) {
  P frameF1509;
  P nmsF1508;
  P T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T7 = (P)YPnext_methods();
  nmsF1508 = T7;
  T6 = CALL1(CHKREF(YmacrosYlst),lit_25);
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALL1(CHKREF(YmacrosYlst),nmsF1508);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1509 = T3;
  T2 = CALL1(FREEREF(3),frameF1509);
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
  P efunF1520;
  P x_1251F1519;
  P x_1250F1518;
  P x_1249F1517;
  P x_1248F1516;
  P x_1247F1515;
  P x_1246F1514;
  P x_1245F1513;
  P x_1244F1512;
  P x_1243F1511;
  P x_1242F1510;
  P T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6,a7;
loop:
  T60 = CALL1(CHKREF(YruntimeYlen),names_);
  x_1242F1510 = T60;
  T59 = CALL2(CHKREF(YmacrosYEE),x_1242F1510,YPint((P)0));
  if (T59 != YPfalse) {
    T58 = FUNFAB(fun_47,4,names_,f_,env_,body_);
    T21 = T58;
  } else {
    x_1243F1511 = x_1242F1510;
    T57 = CALL2(CHKREF(YmacrosYEE),x_1243F1511,YPint((P)1));
    if (T57 != YPfalse) {
      T56 = FUNFAB(fun_46,4,names_,f_,env_,body_);
      T23 = T56;
    } else {
      x_1244F1512 = x_1243F1511;
      T55 = CALL2(CHKREF(YmacrosYEE),x_1244F1512,YPint((P)2));
      if (T55 != YPfalse) {
        T54 = FUNFAB(fun_45,4,names_,f_,env_,body_);
        T25 = T54;
      } else {
        x_1245F1513 = x_1244F1512;
        T53 = CALL2(CHKREF(YmacrosYEE),x_1245F1513,YPint((P)3));
        if (T53 != YPfalse) {
          T52 = FUNFAB(fun_44,4,names_,f_,env_,body_);
          T27 = T52;
        } else {
          x_1246F1514 = x_1245F1513;
          T51 = CALL2(CHKREF(YmacrosYEE),x_1246F1514,YPint((P)4));
          if (T51 != YPfalse) {
            T50 = FUNFAB(fun_43,4,names_,f_,env_,body_);
            T29 = T50;
          } else {
            x_1247F1515 = x_1246F1514;
            T49 = CALL2(CHKREF(YmacrosYEE),x_1247F1515,YPint((P)5));
            if (T49 != YPfalse) {
              T48 = FUNFAB(fun_42,4,names_,f_,env_,body_);
              T31 = T48;
            } else {
              x_1248F1516 = x_1247F1515;
              T47 = CALL2(CHKREF(YmacrosYEE),x_1248F1516,YPint((P)6));
              if (T47 != YPfalse) {
                T46 = FUNFAB(fun_41,4,names_,f_,env_,body_);
                T33 = T46;
              } else {
                x_1249F1517 = x_1248F1516;
                T45 = CALL2(CHKREF(YmacrosYEE),x_1249F1517,YPint((P)7));
                if (T45 != YPfalse) {
                  T44 = FUNFAB(fun_40,4,names_,f_,env_,body_);
                  T35 = T44;
                } else {
                  x_1250F1518 = x_1249F1517;
                  T43 = CALL2(CHKREF(YmacrosYEE),x_1250F1518,YPint((P)8));
                  if (T43 != YPfalse) {
                    T42 = FUNFAB(fun_39,4,names_,f_,env_,body_);
                    T37 = T42;
                  } else {
                    x_1251F1519 = x_1250F1518;
                    T41 = CALL2(CHKREF(YmacrosYEE),x_1251F1519,YPint((P)9));
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
  efunF1520 = T20;
  T1 = CALL1(CHKREF(Yast_evalYas_fun_name),f_);
  CALL2(CHKREF(Yfun_name_setter),T1,efunF1520);
  T19 = (P)YPpair(CHKREF(YLsigG),Ynil);
  T18 = (P)YPpair(CHKREF(Ysig_value),Ynil);
  T17 = (P)YPpair(CHKREF(Ysig_arity),T18);
  T16 = (P)YPpair(CHKREF(Ysig_naryQ),T17);
  T15 = (P)YPpair(CHKREF(Ysig_specs),T16);
  T14 = (P)YPpair(CHKREF(Ysig_names),T15);
  T13 = CALL3(CHKREF(Yast_evalYast_eval_specs),specs_,naryQ_,env_);
  T12 = CALL1(CHKREF(Yfun_arity),efunF1520);
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
  CALL2(CHKREF(Yfun_sig_setter),T2,efunF1520);
  T0 = efunF1520;
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
  P evalF1522;
  P paramsF1521;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T8 = CALL1(CHKREF(YastYfunction_bindings),e_);
  paramsF1521 = T8;
  T7 = FUNFAB(fun_49,1,e_);
  evalF1522 = T7;
  T6 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_name),paramsF1521);
  T5 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_type),paramsF1521);
  T4 = CALL1(CHKREF(YastYfunction_naryQ),e_);
  T3 = CALL1(CHKREF(YastYfunction_value),e_);
  T2 = CALLN(CHKREF(Yast_evalYexport_proto_method),7,e_,T6,T5,T4,T3,evalF1522,env_);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_51) {
  ARG(env_, 0);
  ARG(e_, 1);
  P specsF1526;
  P namesF1525;
  P naryQF1524;
  P paramsF1523;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T10 = CALL1(CHKREF(YastYfunction_bindings),e_);
  paramsF1523 = T10;
  T9 = CALL1(CHKREF(YastYfunction_naryQ),e_);
  naryQF1524 = T9;
  T8 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_name),paramsF1523);
  namesF1525 = T8;
  T7 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_type),paramsF1523);
  T6 = CALL3(CHKREF(Yast_evalYast_eval_specs),T7,naryQF1524,env_);
  specsF1526 = T6;
  T5 = CALL1(CHKREF(Yast_evalYas_fun_name),e_);
  T4 = CALLN(CHKREF(Yfab_gen),5,T5,namesF1525,specsF1526,naryQF1524,Ynil);
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
  P T0;
  P a1,a2,a3;
loop:
  T0 = CALL1(CHKREF(Yast_evalYenv_global_binding_boundQ),binding_);
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

FUNCODEDEF(fun_ast_eval_boundQ_60) {
  ARG(env_, 0);
  ARG(binding_, 1);
  ARG(e_, 2);
  P a1,a2,a3;
loop:
  QRET(YPtrue);
}

FUNCODEDEF(fun_ast_eval_61) {
  ARG(env_, 0);
  ARG(e_, 1);
  P valueF1527;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL1(CHKREF(YastYassignment_form),e_);
  T3 = CALL2(CHKREF(Yast_evalYast_eval),T4,env_);
  valueF1527 = T3;
  T2 = CALL1(CHKREF(YastYassignment_binding),e_);
  T1 = CALL2(CHKREF(Yast_evalYenv_global_binding_value_setter),valueF1527,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_62) {
  ARG(env_, 0);
  ARG(e_, 1);
  P a1,a2;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_ast_eval_63) {
  ARG(env_, 0);
  ARG(e_, 1);
  P valueF1528;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = CALL1(CHKREF(YastYassignment_form),e_);
  T4 = CALL2(CHKREF(Yast_evalYast_eval),T5,env_);
  valueF1528 = T4;
  T3 = CALL1(CHKREF(YastYassignment_binding),e_);
  T2 = CALL1(CHKREF(YastYbinding_locative),T3);
  T1 = CALL2(CHKREF(Yast_evalYenv_runtime_value_setter),valueF1528,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_64) {
  ARG(env_, 0);
  ARG(e_, 1);
  P valueF1529;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL1(CHKREF(YastYassignment_form),e_);
  T3 = CALL2(CHKREF(Yast_evalYast_eval),T4,env_);
  valueF1529 = T3;
  T2 = CALL1(CHKREF(YastYassignment_reference),e_);
  T1 = CALL3(CHKREF(Yast_evalYenv_local_reference_value_setter),valueF1529,env_,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_env_define_bindingX_65) {
  ARG(v_, 0);
  ARG(b_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(YastYbinding_locative),b_);
  T0 = CALL2(CHKREF(Yast_evalYenv_runtime_value_setter),v_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_env_define_bindingX_66) {
  ARG(v_, 0);
  ARG(b_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL2(CHKREF(Yast_evalYenv_global_binding_value_setter),v_,b_);
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_67) {
  ARG(env_, 0);
  ARG(e_, 1);
  P valueF1530;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = CALL1(CHKREF(YastYassignment_form),e_);
  T2 = CALL2(CHKREF(Yast_evalYast_eval),T3,env_);
  valueF1530 = T2;
  T1 = CALL1(CHKREF(YastYassignment_binding),e_);
  CALL2(CHKREF(Yast_evalYenv_define_bindingX),T1,valueF1530);
  T0 = YPfalse;
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_68) {
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

FUNCODEDEF(fun_eval_69) {
  ARG(e_, 0);
  P valF1532;
  P nxtF1531;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = CALL1(CHKREF(Ytail),e_);
  nxtF1531 = T7;
  T6 = CALL1(CHKREF(Yhead),e_);
  T5 = CALL2(CHKREF(Yast_evalYast_eval),T6,FREEREF(0));
  valF1532 = T5;
  T4 = CALL1(CHKREF(YmacrosYemptyQ),nxtF1531);
  if (T4 != YPfalse) {
    T2 = valF1532;
  } else {
    a1 = nxtF1531;
    e_ = a1;
    goto loop;
    T2 = T3;
  }
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_70) {
  ARG(env_, 0);
  ARG(e_, 1);
  P evalF1533;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_eval_69,2);
  evalF1533 = T2;
  FUNINIT(evalF1533, 2,env_,evalF1533);
  T1 = KCALL1(evalF1533,e_);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_eval_71) {
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

FUNCODEDEF(fun_ast_eval_72) {
  ARG(env_, 0);
  ARG(e_, 1);
  P evalF1534;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_eval_71,2);
  evalF1534 = T2;
  FUNINIT(evalF1534, 2,env_,evalF1534);
  T1 = KCALL2(evalF1534,Ynil,e_);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_73) {
  ARG(env_, 0);
  ARG(e_, 1);
  P argsF1536;
  P fF1535;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T6 = CALL1(CHKREF(YastYapplication_function),e_);
  T5 = CALL2(CHKREF(Yast_evalYast_eval),T6,env_);
  fF1535 = T5;
  T4 = CALL1(CHKREF(YastYapplication_arguments),e_);
  T3 = CALL2(CHKREF(Yast_evalYast_eval),T4,env_);
  argsF1536 = T3;
  T2 = CALL2(CHKREF(Yapply),fF1535,argsF1536);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_74) {
  ARG(env_, 0);
  ARG(e_, 1);
  P nmsF1540;
  P argsF1539;
  P fF1538;
  P bF1537;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T14 = CALL1(CHKREF(YastYapplication_binding),e_);
  bF1537 = T14;
  T13 = CALL1(CHKREF(YastYbinding_name),bF1537);
  T12 = CALL2(CHKREF(YmacrosYEE),T13,lit_27);
  if (T12 != YPfalse) {
    T11 = CALL2(CHKREF(Yast_evalYenv_binding_value),env_,lit_26);
    nmsF1540 = T11;
    T10 = CALL2(CHKREF(YmacrosYEE),nmsF1540,CHKREF(Ynul));
    if (T10 != YPfalse) {
      T9 = YPfalse;
    } else {
      T9 = nmsF1540;
    }
    T8 = T9;
    T1 = T8;
  } else {
    T7 = CALL1(CHKREF(YastYbinding_value),bF1537);
    fF1538 = T7;
    T6 = CALL1(CHKREF(YastYapplication_arguments),e_);
    T5 = CALL2(CHKREF(Yast_evalYast_eval),T6,env_);
    argsF1539 = T5;
    T4 = CALL2(CHKREF(Yapply),fF1538,argsF1539);
    T3 = T4;
    T2 = T3;
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_75) {
  ARG(env_, 0);
  ARG(e_, 1);
  P nenvF1542;
  P argsF1541;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T8 = CALL1(CHKREF(YastYfix_let_arguments),e_);
  T7 = CALL2(CHKREF(Yast_evalYast_eval),T8,env_);
  argsF1541 = T7;
  T6 = CALL1(CHKREF(YastYfix_let_bindings),e_);
  T5 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_name),T6);
  T4 = CALLN(CHKREF(Yast_evalYenv_frameX),4,env_,YPfalse,T5,argsF1541);
  nenvF1542 = T4;
  T3 = CALL1(CHKREF(YastYfix_let_body),e_);
  T2 = CALL2(CHKREF(Yast_evalYast_eval),T3,nenvF1542);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_76) {
  ARG(value_, 0);
  ARG(name_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yast_evalYenv_binding_value_setter),value_,FREEREF(0),name_);
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_77) {
  ARG(env_, 0);
  ARG(e_, 1);
  P new_envF1544;
  P bindingsF1543;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T13 = CALL1(CHKREF(YastYlocals_bindings),e_);
  bindingsF1543 = T13;
  T12 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_name),bindingsF1543);
  T11 = CALL1(CHKREF(YruntimeYalways),CHKREF(Ynul));
  T10 = CALL2(CHKREF(YmacrosYmap),T11,bindingsF1543);
  T9 = CALLN(CHKREF(Yast_evalYenv_frameX),4,env_,YPfalse,T12,T10);
  new_envF1544 = T9;
  T6 = FUNFAB(fun_76,1,new_envF1544);
  T5 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_name),bindingsF1543);
  T4 = CALL2(CHKREF(YruntimeYrcurry),CHKREF(Yast_evalYast_eval),new_envF1544);
  T3 = CALL1(CHKREF(YastYlocals_functions),e_);
  T2 = CALL2(CHKREF(YmacrosYmap),T4,T3);
  CALL3(CHKREF(YruntimeYdo2),T6,T5,T2);
  T8 = CALL1(CHKREF(YastYlocals_body),e_);
  T7 = CALL2(CHKREF(Yast_evalYast_eval),T8,new_envF1544);
  T1 = T7;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_78) {
  ARG(env_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(Yast_evalYenv_binding_value),env_,lit_29);
  T0 = CALL1(FREEREF(0),T1);
  QRET(T0);
}

FUNCODEDEF(fun_79) {
  ARG(return_, 0);
  P exitF1546;
  P rprocF1545;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = FUNFAB(fun_78,1,return_);
  rprocF1545 = T8;
  T7 = CALL1(CHKREF(YmacrosYlst),lit_28);
  T6 = CALL1(CHKREF(YmacrosYlst),YPfalse);
  T5 = CALLN(CHKREF(Yast_evalYexport_proto_method),7,rprocF1545,T7,T6,YPfalse,YPfalse,rprocF1545,FREEREF(0));
  exitF1546 = T5;
  T4 = CALL1(CHKREF(YastYbind_exit_main_fun),FREEREF(1));
  T3 = CALL2(CHKREF(Yast_evalYast_eval),T4,FREEREF(0));
  T2 = CALL1(T3,exitF1546);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_80) {
  ARG(env_, 0);
  ARG(e_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = FUNFAB(fun_79,2,env_,e_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_81) {
  P T2,T1,T0;
loop:
  T2 = CALL1(CHKREF(YastYunwind_protect_cleanup_thunk),FREEREF(1));
  T1 = CALL2(CHKREF(Yast_evalYast_eval),T2,FREEREF(0));
  T0 = CALL0(T1);
  QRET(T0);
}

FUNCODEDEF(fun_82) {
  P T2,T1,T0;
loop:
  T2 = CALL1(CHKREF(YastYunwind_protect_protected_thunk),FREEREF(1));
  T1 = CALL2(CHKREF(Yast_evalYast_eval),T2,FREEREF(0));
  T0 = CALL0(T1);
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_83) {
  ARG(env_, 0);
  ARG(e_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNFAB(fun_82,2,env_,e_);
  T1 = FUNFAB(fun_81,2,env_,e_);
  T0 = with_cleanup(T2,T1);
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_84) {
  ARG(env_, 0);
  ARG(e_, 1);
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL1(CHKREF(YastYmonitor_handler),e_);
  T3 = CALL2(CHKREF(Yast_evalYast_eval),T4,env_);
  T2 = CALL1(CHKREF(YastYmonitor_main_thunk),e_);
  T1 = CALL2(CHKREF(Yast_evalYast_eval),T2,env_);
  T0 = (P)YruntimeYPwith_monitor(T3,T1);
  QRET(T0);
}

FUNCODEDEF(fun_85) {
  P T1,T0;
loop:
  T1 = (P)YPpair(CHKREF(YastYLglobal_bindingG),Ynil);
  T0 = CALL3(CHKREF(YPisa),T1,Ynil,Ynil);
  QRET(T0);
}

FUNCODEDEF(YastYinit_environment_for_eval) {
  ARG(env_, 0);
  P bF1547;
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = fun_85;
  T2 = CALLN(CHKREF(YastYast_define_binding),4,env_,lit_30,YPfalse,T3);
  bF1547 = T2;
  T1 = CALL2(CHKREF(Yast_evalYenv_global_binding_value_setter),CHKREF(YmacrosYpair),bF1547);
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
  T0 = YPsig(YPpair(YPPsym((P)"b"),Ynil),YPpair(CHKREF(YastYLglobal_bindingG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
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
  T5 = YPsig(YPpair(YPPsym((P)"value"),YPpair(YPPsym((P)"b"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YastYLglobal_bindingG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
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
  T10 = YPsig(YPpair(YPPsym((P)"b"),Ynil),YPpair(CHKREF(YastYLglobal_bindingG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
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
  fun_x_1241_30 = YPmet(FUNCODEREF(fun_x_1241_30),YPPsym((P)"x-1241"),T135,ENVNUL);
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
  T147 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YastYLglobal_bindingG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
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
  T218 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"binding"),YPpair(YPPsym((P)"env"),Ynil))),YPpair(CHKREF(YastYLboundQG),YPpair(CHKREF(YastYLglobal_bindingG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
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
  T223 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"binding"),YPpair(YPPsym((P)"env"),Ynil))),YPpair(CHKREF(YastYLboundQG),YPpair(CHKREF(YastYLruntime_bindingG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
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
  T228 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"binding"),YPpair(YPPsym((P)"env"),Ynil))),YPpair(CHKREF(YastYLboundQG),YPpair(CHKREF(YastYLlocal_bindingG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_ast_eval_boundQ_60 = YPmet(FUNCODEREF(fun_ast_eval_boundQ_60),YPPsym((P)"ast-eval-bound?"),T228,ENVNUL);
  T232 = BOUNDP(Yast_evalYast_eval_boundQ);
  if (T232 != YPfalse) {
    T231 = CHKREF(Yast_evalYast_eval_boundQ);
  } else {
    T231 = YPfalse;
  }
  T230 = fun_ast_eval_boundQ_60;
  T229 = CALL2(CHKREF(YPdefine_method),T231,T230);
  Yast_evalYast_eval_boundQ = T229;
  regsym(&Yast_evalYast_eval_boundQ,"ast-eval","ast-eval-bound?");
  T233 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLglobal_assignmentG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
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
  T238 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLast_macro_definitionG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
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
  T243 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLruntime_assignmentG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
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
  T248 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLlocal_assignmentG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_64 = YPmet(FUNCODEREF(fun_ast_eval_64),YPPsym((P)"ast-eval"),T248,ENVNUL);
  T252 = BOUNDP(Yast_evalYast_eval);
  if (T252 != YPfalse) {
    T251 = CHKREF(Yast_evalYast_eval);
  } else {
    T251 = YPfalse;
  }
  T250 = fun_ast_eval_64;
  T249 = CALL2(CHKREF(YPdefine_method),T251,T250);
  Yast_evalYast_eval = T249;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T253 = YPsig(YPpair(YPPsym((P)"b"),YPpair(YPPsym((P)"v"),Ynil)),YPpair(CHKREF(YastYLruntime_bindingG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_env_define_bindingX_65 = YPmet(FUNCODEREF(fun_env_define_bindingX_65),YPPsym((P)"env-define-binding!"),T253,ENVNUL);
  T257 = BOUNDP(Yast_evalYenv_define_bindingX);
  if (T257 != YPfalse) {
    T256 = CHKREF(Yast_evalYenv_define_bindingX);
  } else {
    T256 = YPfalse;
  }
  T255 = fun_env_define_bindingX_65;
  T254 = CALL2(CHKREF(YPdefine_method),T256,T255);
  Yast_evalYenv_define_bindingX = T254;
  regsym(&Yast_evalYenv_define_bindingX,"ast-eval","env-define-binding!");
  T258 = YPsig(YPpair(YPPsym((P)"b"),YPpair(YPPsym((P)"v"),Ynil)),YPpair(CHKREF(YastYLglobal_bindingG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_env_define_bindingX_66 = YPmet(FUNCODEREF(fun_env_define_bindingX_66),YPPsym((P)"env-define-binding!"),T258,ENVNUL);
  T262 = BOUNDP(Yast_evalYenv_define_bindingX);
  if (T262 != YPfalse) {
    T261 = CHKREF(Yast_evalYenv_define_bindingX);
  } else {
    T261 = YPfalse;
  }
  T260 = fun_env_define_bindingX_66;
  T259 = CALL2(CHKREF(YPdefine_method),T261,T260);
  Yast_evalYenv_define_bindingX = T259;
  regsym(&Yast_evalYenv_define_bindingX,"ast-eval","env-define-binding!");
  T263 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLdefinitionG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_67 = YPmet(FUNCODEREF(fun_ast_eval_67),YPPsym((P)"ast-eval"),T263,ENVNUL);
  T267 = BOUNDP(Yast_evalYast_eval);
  if (T267 != YPfalse) {
    T266 = CHKREF(Yast_evalYast_eval);
  } else {
    T266 = YPfalse;
  }
  T265 = fun_ast_eval_67;
  T264 = CALL2(CHKREF(YPdefine_method),T266,T265);
  Yast_evalYast_eval = T264;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T268 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLalternativeG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_68 = YPmet(FUNCODEREF(fun_ast_eval_68),YPPsym((P)"ast-eval"),T268,ENVNUL);
  T272 = BOUNDP(Yast_evalYast_eval);
  if (T272 != YPfalse) {
    T271 = CHKREF(Yast_evalYast_eval);
  } else {
    T271 = YPfalse;
  }
  T270 = fun_ast_eval_68;
  T269 = CALL2(CHKREF(YPdefine_method),T271,T270);
  Yast_evalYast_eval = T269;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T274 = YPsig(YPpair(YPPsym((P)"e"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_eval_69 = YPmet(FUNCODEREF(fun_eval_69),YPPsym((P)"eval"),T274,ENVNUL);
  T273 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLsequentialG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_70 = YPmet(FUNCODEREF(fun_ast_eval_70),YPPsym((P)"ast-eval"),T273,ENVNUL);
  T278 = BOUNDP(Yast_evalYast_eval);
  if (T278 != YPfalse) {
    T277 = CHKREF(Yast_evalYast_eval);
  } else {
    T277 = YPfalse;
  }
  T276 = fun_ast_eval_70;
  T275 = CALL2(CHKREF(YPdefine_method),T277,T276);
  Yast_evalYast_eval = T275;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T280 = YPsig(YPpair(YPPsym((P)"res"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_eval_71 = YPmet(FUNCODEREF(fun_eval_71),YPPsym((P)"eval"),T280,ENVNUL);
  T279 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLargumentsG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_72 = YPmet(FUNCODEREF(fun_ast_eval_72),YPPsym((P)"ast-eval"),T279,ENVNUL);
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
  T287 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLregular_applicationG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
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
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_26 = YPPsym((P)"%next-methods");
  lit_27 = YPPsym((P)"%next-methods");
  T0 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLpredefined_applicationG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_74 = YPmet(FUNCODEREF(fun_ast_eval_74),YPPsym((P)"ast-eval"),T0,ENVNUL);
  T4 = BOUNDP(Yast_evalYast_eval);
  if (T4 != YPfalse) {
    T3 = CHKREF(Yast_evalYast_eval);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_ast_eval_74;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  Yast_evalYast_eval = T1;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T5 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLfix_letG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_75 = YPmet(FUNCODEREF(fun_ast_eval_75),YPPsym((P)"ast-eval"),T5,ENVNUL);
  T9 = BOUNDP(Yast_evalYast_eval);
  if (T9 != YPfalse) {
    T8 = CHKREF(Yast_evalYast_eval);
  } else {
    T8 = YPfalse;
  }
  T7 = fun_ast_eval_75;
  T6 = CALL2(CHKREF(YPdefine_method),T8,T7);
  Yast_evalYast_eval = T6;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T11 = YPsig(YPpair(YPPsym((P)"name"),YPpair(YPPsym((P)"value"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T11,ENVNUL);
  T10 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLlocalsG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_77 = YPmet(FUNCODEREF(fun_ast_eval_77),YPPsym((P)"ast-eval"),T10,ENVNUL);
  T15 = BOUNDP(Yast_evalYast_eval);
  if (T15 != YPfalse) {
    T14 = CHKREF(Yast_evalYast_eval);
  } else {
    T14 = YPfalse;
  }
  T13 = fun_ast_eval_77;
  T12 = CALL2(CHKREF(YPdefine_method),T14,T13);
  Yast_evalYast_eval = T12;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  lit_28 = YPPsym((P)"x");
  lit_29 = YPPsym((P)"x");
  T18 = YPsig(YPpair(YPPsym((P)"env"),Ynil),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_78 = YPmet(FUNCODEREF(fun_78),YPfalse,T18,ENVNUL);
  T17 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T17,ENVNUL);
  T16 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLbind_exitG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_80 = YPmet(FUNCODEREF(fun_ast_eval_80),YPPsym((P)"ast-eval"),T16,ENVNUL);
  T22 = BOUNDP(Yast_evalYast_eval);
  if (T22 != YPfalse) {
    T21 = CHKREF(Yast_evalYast_eval);
  } else {
    T21 = YPfalse;
  }
  T20 = fun_ast_eval_80;
  T19 = CALL2(CHKREF(YPdefine_method),T21,T20);
  Yast_evalYast_eval = T19;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T25 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T25,ENVNUL);
  T24 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T24,ENVNUL);
  T23 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLunwind_protectG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_83 = YPmet(FUNCODEREF(fun_ast_eval_83),YPPsym((P)"ast-eval"),T23,ENVNUL);
  T29 = BOUNDP(Yast_evalYast_eval);
  if (T29 != YPfalse) {
    T28 = CHKREF(Yast_evalYast_eval);
  } else {
    T28 = YPfalse;
  }
  T27 = fun_ast_eval_83;
  T26 = CALL2(CHKREF(YPdefine_method),T28,T27);
  Yast_evalYast_eval = T26;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  T30 = YPsig(YPpair(YPPsym((P)"e"),YPpair(YPPsym((P)"env"),Ynil)),YPpair(CHKREF(YastYLmonitorG),YPpair(CHKREF(Yast_evalYLloc_envG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_84 = YPmet(FUNCODEREF(fun_ast_eval_84),YPPsym((P)"ast-eval"),T30,ENVNUL);
  T34 = BOUNDP(Yast_evalYast_eval);
  if (T34 != YPfalse) {
    T33 = CHKREF(Yast_evalYast_eval);
  } else {
    T33 = YPfalse;
  }
  T32 = fun_ast_eval_84;
  T31 = CALL2(CHKREF(YPdefine_method),T33,T32);
  Yast_evalYast_eval = T31;
  regsym(&Yast_evalYast_eval,"ast-eval","ast-eval");
  lit_30 = YPPsym((P)"%pair");
  T36 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T36,ENVNUL);
  T35 = YPsig(YPpair(YPPsym((P)"env"),Ynil),YPpair(CHKREF(YastYLstatic_global_environmentG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YastYinit_environment_for_eval = YPmet(FUNCODEREF(YastYinit_environment_for_eval),YPPsym((P)"init-environment-for-eval"),T35,ENVNUL);
  T37 = YastYinit_environment_for_eval;
  YastYinit_environment_for_eval = T37;
  regsym(&YastYinit_environment_for_eval,"ast","init-environment-for-eval");
  T38 = YPfalse;
  return T38;
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
