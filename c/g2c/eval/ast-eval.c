/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: ast-eval */

EXT(YastYbinding_dynamic_extentQ_setter,"ast","binding-dynamic-extent?-setter");
EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YruntimeYflo_bits,"runtime","flo-bits");
EXT(YastYLglobal_assignmentG,"ast","<global-assignment>");
EXT(YruntimeYlsh,"runtime","lsh");
EXT(YruntimeYfab_map,"runtime","fab-map");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YruntimeYmax,"runtime","max");
EXT(YastYLcomputed_programG,"ast","<computed-program>");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
EXT(Yslot_owner,"boot","slot-owner");
DEF(Yast_evalYenv_names_setter,"ast-eval","env-names-setter");
EXT(YPslot,"boot","%slot");
EXT(YastYreference_frame_number,"ast","reference-frame-number");
EXT(YruntimeYT,"runtime","*");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YastYLast_functionG,"ast","<ast-function>");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
EXT(YruntimeYabs,"runtime","abs");
EXT(YLlogG,"boot","<log>");
EXT(YLslotG,"boot","<slot>");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(YruntimeYaddress_of,"runtime","address-of");
EXT(YruntimeYfrom_above,"runtime","from-above");
EXT(YastYfix_let_body,"ast","fix-let-body");
EXT(YastYboundQ_reference,"ast","bound?-reference");
EXT(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
EXT(YastYlocals_functions,"ast","locals-functions");
EXT(YastYbinding_native_toQ,"ast","binding-native-to?");
EXT(YastYfix_let_types_setter,"ast","fix-let-types-setter");
EXT(YastYmonitor_info,"ast","monitor-info");
EXT(YruntimeYpos,"runtime","pos");
EXT(YastYapplication_tailQ,"ast","application-tail?");
EXT(YastYbind_exit_main_fun,"ast","bind-exit-main-fun");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YruntimeYassoc,"runtime","assoc");
EXT(YruntimeYdefault,"runtime","default");
EXT(YastYglobal_box_value,"ast","global-box-value");
EXT(YruntimeYfloor,"runtime","floor");
EXT(YastYLmodule_bindingG,"ast","<module-binding>");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(YruntimeYempty,"runtime","empty");
DEF(Yast_evalYenv_local_value,"ast-eval","env-local-value");
EXT(YDmin_int,"boot","$min-int");
EXT(Ynot,"boot","not");
EXT(YruntimeYmodulo,"runtime","modulo");
EXT(Yslot_value,"boot","slot-value");
EXT(YLanyG,"boot","<any>");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(YruntimeYfrom,"runtime","from");
EXT(YruntimeYLincongruent_method_errorG,"runtime","<incongruent-method-error>");
EXT(YastYmodule_syntax_environment,"ast","module-syntax-environment");
EXT(YastYLast_macro_definitionG,"ast","<ast-macro-definition>");
EXT(YLunionG,"boot","<union>");
DEF(Yast_evalYenv_define_bindingX,"ast-eval","env-define-binding!");
EXT(YastYinit_environment_for_eval,"ast","init-environment-for-eval");
EXT(YruntimeYfind_key,"runtime","find-key");
EXT(YruntimeYreduceA,"runtime","reduce+");
EXT(YruntimeYout,"runtime","out");
EXT(Yerror,"boot","error");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YmacrosYmap,"macros","map");
EXT(YruntimeYelt_or,"runtime","elt-or");
EXT(YastYLunwind_protectG,"ast","<unwind-protect>");
EXT(YruntimeYelt,"runtime","elt");
EXT(YastYLast_genericG,"ast","<ast-generic>");
EXT(YruntimeYLE,"runtime","<=");
EXT(YastYmodule_target_environment,"ast","module-target-environment");
DEF(Yast_evalYenv_local_reference_value,"ast-eval","env-local-reference-value");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YastYast_evaluate,"ast","ast-evaluate");
EXT(YastYalternative_alternant,"ast","alternative-alternant");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YastYLreferenceG,"ast","<reference>");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
DEF(Yast_evalYast_eval_boundQ,"ast-eval","ast-eval-bound?");
EXT(YastYsignature_specs,"ast","signature-specs");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YPsymbols,"boot","%symbols");
EXT(YruntimeYmap2,"runtime","map2");
EXT(YruntimeYlogior,"runtime","logior");
EXT(YastYLast_signatureG,"ast","<ast-signature>");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YastYfix_let_bindings,"ast","fix-let-bindings");
EXT(Ytail_setter,"boot","tail-setter");
EXT(Yslot_type,"boot","slot-type");
EXT(YruntimeYPwith_monitor,"runtime","%with-monitor");
EXT(YastYlocals_body_setter,"ast","locals-body-setter");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YastYload_module,"ast","load-module");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YruntimeYNE,"runtime","~=");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
EXT(YruntimeY1st,"runtime","1st");
EXT(YastYsignature_bindings_setter,"ast","signature-bindings-setter");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YastYbinding_locative,"ast","binding-locative");
EXT(YastYapplication_function,"ast","application-function");
EXT(Ytail,"boot","tail");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(YruntimeYlogxor,"runtime","logxor");
EXT(YastYfunction_binding,"ast","function-binding");
EXT(YastYbinding_name,"ast","binding-name");
EXT(YLtupG,"boot","<tup>");
EXT(YmacrosYEE,"macros","==");
EXT(YruntimeYreduce,"runtime","reduce");
EXT(YruntimeYLfile_input_portG,"runtime","<file-input-port>");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(YastYprogram_register_setter,"ast","program-register-setter");
EXT(YruntimeYnewline,"runtime","newline");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
EXT(YruntimeYfalse_or,"runtime","false-or");
EXT(Yclass_slots,"boot","class-slots");
EXT(YastYLbindingG,"ast","<binding>");
EXT(YmacrosYnapply,"macros","napply");
DEF(Yast_evalYenv_values,"ast-eval","env-values");
EXT(YastYLcompile_timeG,"ast","<compile-time>");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YruntimeYid_hash,"runtime","id-hash");
EXT(YastYassignment_binding,"ast","assignment-binding");
EXT(YruntimeYlogand,"runtime","logand");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YastYcompile_time_program,"ast","compile-time-program");
EXT(YastYLpredefined_applicationG,"ast","<predefined-application>");
EXT(YruntimeYread,"runtime","read");
EXT(YastYsequentialize,"ast","sequentialize");
EXT(YastYLmoduleG,"ast","<module>");
DEF(Yast_evalYenv_runtime_value_setter,"ast-eval","env-runtime-value-setter");
EXT(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
EXT(YastYLpassive_programG,"ast","<passive-program>");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YastYfix_let_arguments,"ast","fix-let-arguments");
DEF(Yast_evalYenv_local_reference_value_setter,"ast-eval","env-local-reference-value-setter");
EXT(YruntimeYas,"runtime","as");
EXT(Yfun_naryQ,"boot","fun-nary?");
DEF(Yast_evalYLloc_envG,"ast-eval","<loc-env>");
EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
EXT(YruntimeYpick,"runtime","pick");
EXT(YastYLsequentialG,"ast","<sequential>");
EXT(YruntimeYtL,"runtime","t<");
EXT(YastYinit_ast,"ast","init-ast");
EXT(YruntimeYlognot,"runtime","lognot");
EXT(YastYreference_called_functionQ_setter,"ast","reference-called-function?-setter");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(YastYLbind_exitG,"ast","<bind-exit>");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(Ytype_elts,"boot","type-elts");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(YruntimeYTprint_baseT,"runtime","*print-base*");
EXT(YruntimeYdel_dups,"runtime","del-dups");
EXT(YastYfix_let_bindings_setter,"ast","fix-let-bindings-setter");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YruntimeYceiling,"runtime","ceiling");
EXT(YPPmacro,"boot","%%macro");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(YPdefine_method,"boot","%define-method");
EXT(Yadd_slot,"boot","add-slot");
EXT(YastYreference_binding,"ast","reference-binding");
EXT(YastYdo_module_loader_modules,"ast","do-module-loader-modules");
EXT(YastYremove_modules_by_nameX,"ast","remove-modules-by-name!");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YastYfree_implemented_foreign_bindings,"ast","free-implemented-foreign-bindings");
DEF(Yast_evalYenv_frameX,"ast-eval","env-frame!");
EXT(YLoptsG,"boot","<opts>");
EXT(YruntimeYpush,"runtime","push");
EXT(YastYobjectify,"ast","objectify");
EXT(YastYLfix_letG,"ast","<fix-let>");
EXT(YastYbinding_global_box_setter,"ast","binding-global-box-setter");
EXT(YruntimeYeof_object,"runtime","eof-object");
EXT(YastYfunction_debug_name_setter,"ast","function-debug-name-setter");
EXT(YastYDproto_runtime_module_name,"ast","$proto-runtime-module-name");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
EXT(Ysig_value,"boot","sig-value");
EXT(Yclass_name,"boot","class-name");
EXT(YastYapplication_knownQ,"ast","application-known?");
EXT(YastYsignature_bindings,"ast","signature-bindings");
EXT(YisaQ,"boot","isa?");
EXT(YruntimeYtE,"runtime","t=");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(YLtypeG,"boot","<type>");
EXT(YastYmonitor_handler,"ast","monitor-handler");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
EXT(YLclassG,"boot","<class>");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(Yfab_sym,"boot","fab-sym");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YastYfix_let_types,"ast","fix-let-types");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YastYbinding_info,"ast","binding-info");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");
EXT(YastYLast_methodG,"ast","<ast-method>");
EXT(YruntimeYzeroQ,"runtime","zero?");
DEF(Yast_evalYenv_local_value_setter,"ast-eval","env-local-value-setter");
EXT(Yobject_parents,"boot","object-parents");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(YastYLraw_constantG,"ast","<raw-constant>");
EXT(YastYbinding_kind,"ast","binding-kind");
DEF(Yast_evalYDnul_loc_env,"ast-eval","$nul-loc-env");
EXT(YruntimeYmemQ,"runtime","mem?");
DEF(Yast_evalYast_eval_specs,"ast-eval","ast-eval-specs");
EXT(YastYbinding_value,"ast","binding-value");
EXT(YastYDproto_boot_module_name,"ast","$proto-boot-module-name");
EXT(YruntimeYGE,"runtime",">=");
EXT(YruntimeYE,"runtime","=");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(YastYruntime_environment,"ast","runtime-environment");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYtA,"runtime","t+");
EXT(YastYLmodule_loaderG,"ast","<module-loader>");
DEF(Yast_evalYTstackT,"ast-eval","*stack*");
EXT(YLsymG,"boot","<sym>");
EXT(YruntimeYsig,"runtime","sig");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
EXT(YruntimeYnow_elt,"runtime","now-elt");
EXT(YruntimeYdel,"runtime","del");
EXT(YastYenvironment_uses_modules,"ast","environment-uses-modules");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YastYfix_let_body_setter,"ast","fix-let-body-setter");
EXT(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YastYLboundQG,"ast","<bound?>");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
EXT(Ysig_names,"boot","sig-names");
EXT(YPvnul,"boot","%vnul");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YastYLlocal_referenceG,"ast","<local-reference>");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(YastYdo_static_global_bindings,"ast","do-static-global-bindings");
EXT(YruntimeYvec,"runtime","vec");
EXT(YastYbinding_dynamic_extentQ,"ast","binding-dynamic-extent?");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YastYLast_primitiveG,"ast","<ast-primitive>");
EXT(YLgenG,"boot","<gen>");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(Yobject_slots,"boot","object-slots");
EXT(YastYfunction_bindings,"ast","function-bindings");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YastYLglobal_boxG,"ast","<global-box>");
EXT(YLstrG,"boot","<str>");
EXT(YastYfunction_signature,"ast","function-signature");
EXT(YastYLprogramG,"ast","<program>");
EXT(YruntimeYsub,"runtime","sub");
EXT(YastYLlocal_bindingG,"ast","<local-binding>");
EXT(YastYfunction_value,"ast","function-value");
DEF(Yast_evalYast_eval,"ast-eval","ast-eval");
DEF(Yast_evalYenv_names,"ast-eval","env-names");
EXT(Ylst,"boot","lst");
DEF(Yast_evalYenv_function_setter,"ast-eval","env-function-setter");
EXT(YastYfind_environment_module,"ast","find-environment-module");
EXT(Yfun_name,"boot","fun-name");
EXT(Yclass_parents,"boot","class-parents");
EXT(YastYbinding_info_setter,"ast","binding-info-setter");
EXT(Yfind_setter,"boot","find-setter");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YruntimeYround,"runtime","round");
DEF(Yast_evalYenv_global_binding_value,"ast-eval","env-global-binding-value");
EXT(YastYLconstantG,"ast","<constant>");
EXT(YruntimeYbuf,"runtime","buf");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YastYreference_called_functionQ,"ast","reference-called-function?");
EXT(YastYLlocal_assignmentG,"ast","<local-assignment>");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YLvecG,"boot","<vec>");
EXT(YPsnul,"boot","%snul");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
EXT(Ytype_class,"boot","type-class");
EXT(YruntimeYalways,"runtime","always");
EXT(Ynul,"boot","nul");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YruntimeYlen,"runtime","len");
EXT(YastYLglobal_referenceG,"ast","<global-reference>");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(YastYdo_named_static_global_bindings,"ast","do-named-static-global-bindings");
EXT(Ygen_add_met,"boot","gen-add-met");
DEF(Yast_evalYenv_function,"ast-eval","env-function");
EXT(YastYsignature_value,"ast","signature-value");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(YruntimeYevenQ,"runtime","even?");
EXT(YastYprobe_module,"ast","probe-module");
EXT(YastYfunction_naryQ,"ast","function-nary?");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(YruntimeYlow_elt_setter,"runtime","low-elt-setter");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
EXT(YLflatG,"boot","<flat>");
EXT(YLmetG,"boot","<met>");
EXT(YastYmodule_name_to_relpath,"ast","module-name-to-relpath");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(Yfun_names,"boot","fun-names");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YruntimeYdo,"runtime","do");
EXT(YastYapplication_knownQ_setter,"ast","application-known?-setter");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
EXT(YastYassignment_reference,"ast","assignment-reference");
EXT(YastYbinding_type,"ast","binding-type");
EXT(YastYfunction_body,"ast","function-body");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YruntimeYfab,"runtime","fab");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YruntimeYclose_output_port,"runtime","close-output-port");
EXT(YruntimeYnegQ,"runtime","neg?");
EXT(YruntimeYmake_handler,"runtime","make-handler");
EXT(YastYbinding_dottedQ,"ast","binding-dotted?");
EXT(YastYset_module_environments,"ast","set-module-environments");
EXT(YruntimeYstr,"runtime","str");
EXT(YastYalternative_consequent,"ast","alternative-consequent");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(YruntimeYanyQ,"runtime","any?");
DEF(Yast_evalYenv_parent_setter,"ast-eval","env-parent-setter");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YastYsignature_names_setter,"ast","signature-names-setter");
EXT(Yfind_getter,"boot","find-getter");
EXT(YruntimeYfill,"runtime","fill");
EXT(YastYmodule_loader_module_type,"ast","module-loader-module-type");
EXT(Yobject_class,"boot","object-class");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YastYapplication_arguments,"ast","application-arguments");
EXT(YastYmodule_exports,"ast","module-exports");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(YruntimeYA,"runtime","+");
EXT(YLlstG,"boot","<lst>");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YastYobjectify_quotation,"ast","objectify-quotation");
DEF(Yast_evalYenv_parent,"ast-eval","env-parent");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
EXT(YastYLapplicationG,"ast","<application>");
EXT(YLfunG,"boot","<fun>");
EXT(YastYmodule_binding,"ast","module-binding");
EXT(YastYmonitor_main_thunk,"ast","monitor-main-thunk");
EXT(YruntimeYassq,"runtime","assq");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YruntimeYalter,"runtime","alter");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YDmax_int,"boot","$max-int");
EXT(YastYlocals_bindings,"ast","locals-bindings");
EXT(YLseqG,"boot","<seq>");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YastYsignature_naryQ,"ast","signature-nary?");
EXT(YastYbinding_value_setter,"ast","binding-value-setter");
EXT(YruntimeYmin,"runtime","min");
EXT(YastYfunction_signature_setter,"ast","function-signature-setter");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
EXT(YastYbinding_global_box,"ast","binding-global-box");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
EXT(YruntimeYtruncate,"runtime","truncate");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(YruntimeYS,"runtime","/");
EXT(YastYenv_object_name,"ast","env-object-name");
EXT(YruntimeYpop,"runtime","pop");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YastYprogram_register,"ast","program-register");
EXT(YastYast_define_binding,"ast","ast-define-binding");
DEF(Yast_evalYenv_global_binding_value_setter,"ast-eval","env-global-binding-value-setter");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YastYlocals_body,"ast","locals-body");
EXT(YruntimeYG,"runtime",">");
EXT(YLcolG,"boot","<col>");
EXT(YmacrosYcat,"macros","cat");
DEF(Yast_evalYas_fun_name,"ast-eval","as-fun-name");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(YastYlocals_functions_setter,"ast","locals-functions-setter");
EXT(YastYLregular_applicationG,"ast","<regular-application>");
EXT(YruntimeYLrangeG,"runtime","<range>");
EXT(YastYLmonitorG,"ast","<monitor>");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
EXT(YruntimeYoddQ,"runtime","odd?");
EXT(YastYapplication_binding,"ast","application-binding");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
EXT(YastYfab_p2c_module,"ast","fab-p2c-module");
EXT(YruntimeYread_char,"runtime","read-char");
DEF(Yast_evalYenv_values_setter,"ast-eval","env-values-setter");
EXT(YruntimeYLlistG,"runtime","<list>");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
EXT(YruntimeYdo3,"runtime","do3");
DEF(Yast_evalYenv_binding_value,"ast-eval","env-binding-value");
EXT(YastYlocals_bindings_setter,"ast","locals-bindings-setter");
EXT(YmacrosYtup,"macros","tup");
EXT(YastYLdefinitionG,"ast","<definition>");
EXT(Ynil,"boot","nil");
EXT(YastYbinding_module_name,"ast","binding-module-name");
DEF(Yast_evalYenv_binding_value_setter,"ast-eval","env-binding-value-setter");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YastYglobal_box_value_setter,"ast","global-box-value-setter");
EXT(YastYLlocalsG,"ast","<locals>");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(YruntimeYlast,"runtime","last");
EXT(YruntimeYlow_elt,"runtime","low-elt");
EXT(YruntimeYL,"runtime","<");
EXT(YLlocG,"boot","<loc>");
EXT(Yfab_class,"boot","fab-class");
EXT(YruntimeYformat,"runtime","format");
EXT(YastYalternative_condition,"ast","alternative-condition");
EXT(YruntimeYneg,"runtime","neg");
EXT(YruntimeYlist,"runtime","list");
EXT(YLsigG,"boot","<sig>");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(YastYunwind_protect_protected_thunk,"ast","unwind-protect-protected-thunk");
EXT(Ytype_object,"boot","type-object");
EXT(YruntimeYcopy_state,"runtime","copy-state");
EXT(YastYsignature_value_setter,"ast","signature-value-setter");
EXT(Yhead_setter,"boot","head-setter");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(YastYLalternativeG,"ast","<alternative>");
EXT(YastYfix_let_arguments_setter,"ast","fix-let-arguments-setter");
EXT(YruntimeYfrom_by,"runtime","from-by");
EXT(YastYLruntime_referenceG,"ast","<runtime-reference>");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YastYsignature_naryQ_setter,"ast","signature-nary?-setter");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YPisa,"boot","%isa");
EXT(YLfloG,"boot","<flo>");
EXT(YastYbinding_type_setter,"ast","binding-type-setter");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(Yhead,"boot","head");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(YruntimeYrev,"runtime","rev");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
EXT(YastYbinding_mutableQ,"ast","binding-mutable?");
EXT(YruntimeYassqn,"runtime","assqn");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YruntimeYto_digit,"runtime","to-digit");
EXT(YastYsignature_names,"ast","signature-names");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
DEF(Yast_evalYenv_runtime_value,"ast-eval","env-runtime-value");
EXT(YruntimeYkeys,"runtime","keys");
EXT(YastYfunction_body_setter,"ast","function-body-setter");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(YastYmonitor_test,"ast","monitor-test");
EXT(Yslot_init,"boot","slot-init");
EXT(YLintG,"boot","<int>");
EXT(YastYreport_undefined_global_bindings,"ast","report-undefined-global-bindings");
EXT(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
EXT(YastYmonitor_type,"ast","monitor-type");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YastYreference_frame_offset,"ast","reference-frame-offset");
DEF(Yast_evalYenv_global_binding_boundQ,"ast-eval","env-global-binding-bound?");
EXT(YruntimeYin,"runtime","in");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(Ysym_name,"boot","sym-name");
EXT(YruntimeYassocq,"runtime","assocq");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(YruntimeYcurry,"runtime","curry");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(YruntimeYfloorS,"runtime","floor/");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YruntimeYlen_setter,"runtime","len-setter");
EXT(YastYsignature_specs_setter,"ast","signature-specs-setter");
EXT(YastYLprogramsG,"ast","<programs>");
EXT(YastYfunction_debug_name,"ast","function-debug-name");
EXT(YLnumG,"boot","<num>");
EXT(YastYunwind_protect_cleanup_thunk,"ast","unwind-protect-cleanup-thunk");
DEF(Yast_evalYexport_proto_method,"ast-eval","export-proto-method");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YastYconstant_value,"ast","constant-value");
EXT(YastYLast_primitive_definitionG,"ast","<ast-primitive-definition>");
EXT(YastYLruntime_assignmentG,"ast","<runtime-assignment>");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(YastYbinding_dottedQ_setter,"ast","binding-dotted?-setter");
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
EXT(YruntimeYdo2,"runtime","do2");
EXT(Yfun_value,"boot","fun-value");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YruntimeYash,"runtime","ash");
EXT(YruntimeY_,"runtime","-");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(YmacrosYpair,"macros","pair");
EXT(YastYload_in,"ast","load-in");
EXT(YastYassignment_form,"ast","assignment-form");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YastYLreal_referenceG,"ast","<real-reference>");
EXT(YastYinstall_initial_bindings,"ast","install-initial-bindings");
EXT(YruntimeYLstepG,"runtime","<step>");
EXT(YastYLfab_listG,"ast","<fab-list>");
EXT(YastYLargumentsG,"ast","<arguments>");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(Ytype_error,"boot","type-error");
EXT(YLchrG,"boot","<chr>");
EXT(YastYLstatic_global_environmentG,"ast","<static-global-environment>");
EXT(YruntimeYroundS,"runtime","round/");
EXT(YastYmodule_name,"ast","module-name");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_59);
DEFLIT(lit_68);
DEFLIT(lit_16);
DEFLIT(lit_35);
DEFLIT(lit_28);
DEFLIT(lit_6);
DEFLIT(lit_10);
DEFLIT(lit_53);
DEFLIT(lit_18);
DEFLIT(lit_54);
DEFLIT(lit_21);
DEFLIT(lit_30);
DEFLIT(lit_34);
DEFLIT(lit_40);
DEFLIT(lit_72);
DEFLIT(lit_45);
DEFLIT(lit_58);
DEFLIT(lit_39);
DEFLIT(lit_41);
DEFLIT(lit_13);
DEFLIT(lit_75);
DEFLIT(lit_50);
DEFLIT(lit_76);
DEFLIT(lit_12);
DEFLIT(lit_74);
DEFLIT(lit_60);
DEFLIT(lit_15);
DEFLIT(lit_64);
DEFLIT(lit_2);
DEFLIT(lit_63);
DEFLIT(lit_1);
DEFLIT(lit_55);
DEFLIT(lit_69);
DEFLIT(lit_27);
DEFLIT(lit_3);
DEFLIT(lit_44);
DEFLIT(lit_62);
DEFLIT(lit_49);
DEFLIT(lit_0);
DEFLIT(lit_70);
DEFLIT(lit_66);
DEFLIT(lit_42);
DEFLIT(lit_46);
DEFLIT(lit_51);
DEFLIT(lit_65);
DEFLIT(lit_52);
DEFLIT(lit_14);
DEFLIT(lit_4);
DEFLIT(lit_26);
DEFLIT(lit_8);
DEFLIT(lit_23);
DEFLIT(lit_24);
DEFLIT(lit_17);
DEFLIT(lit_57);
DEFLIT(lit_71);
DEFLIT(lit_9);
DEFLIT(lit_36);
DEFLIT(lit_67);
DEFLIT(lit_43);
DEFLIT(lit_20);
DEFLIT(lit_32);
DEFLIT(lit_47);
DEFLIT(lit_5);
DEFLIT(lit_7);
DEFLIT(lit_37);
DEFLIT(lit_29);
DEFLIT(lit_48);
DEFLIT(lit_31);
DEFLIT(lit_22);
DEFLIT(lit_11);
DEFLIT(lit_19);
DEFLIT(lit_73);
DEFLIT(lit_38);
DEFLIT(lit_56);
DEFLIT(lit_25);
DEFLIT(lit_61);
DEFLIT(lit_33);

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
LOCFOR(fun_x_1288_30);
LOCFOR(fun_31);
LOCFOR(fun_32);
LOCFOR(fun_as_fun_name_33);
LOCFOR(fun_as_fun_name_34);
LOCFOR(fun_as_fun_name_35);
LOCFOR(fun_as_fun_name_36);
LOCFOR(fun_as_fun_name_37);
LOCFOR(fun_as_fun_name_38);
LOCFOR(fun_39);
LOCFOR(fun_export_proto_method_40);
LOCFOR(fun_41);
LOCFOR(fun_ast_eval_42);
LOCFOR(fun_ast_eval_43);
LOCFOR(fun_env_local_reference_value_44);
LOCFOR(fun_env_local_reference_value_setter_45);
LOCFOR(fun_ast_eval_46);
LOCFOR(fun_ast_eval_47);
LOCFOR(fun_ast_eval_48);
LOCFOR(fun_ast_eval_49);
LOCFOR(fun_ast_eval_boundQ_50);
LOCFOR(fun_ast_eval_boundQ_51);
LOCFOR(fun_ast_eval_52);
LOCFOR(fun_ast_eval_53);
LOCFOR(fun_ast_eval_54);
LOCFOR(fun_ast_eval_55);
LOCFOR(fun_env_define_bindingX_56);
LOCFOR(fun_ast_eval_57);
LOCFOR(fun_ast_eval_58);
LOCFOR(fun_eval_59);
LOCFOR(fun_ast_eval_60);
LOCFOR(fun_eval_61);
LOCFOR(fun_ast_eval_62);
LOCFOR(fun_ast_eval_63);
LOCFOR(fun_ast_eval_64);
LOCFOR(fun_ast_eval_65);
LOCFOR(fun_66);
LOCFOR(fun_ast_eval_67);
LOCFOR(fun_68);
LOCFOR(fun_69);
LOCFOR(fun_ast_eval_70);
LOCFOR(fun_71);
LOCFOR(fun_72);
LOCFOR(fun_ast_eval_73);
LOCFOR(fun_ast_eval_74);
FUNFOR(YastYinit_environment_for_eval);
extern P Yast_evalY___main_0___ ();
extern P Yast_evalY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_env_global_binding_value_0) {
  P b_;
  P boxF1519;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,CHKREF(YastYbinding_global_box),b_);
  boxF1519 = T1;
  if (boxF1519 != YPfalse) {
    T3 = CALL1(1,CHKREF(YastYglobal_box_value),boxF1519);
    T2 = T3;
  } else {
    T5 = CALL1(1,CHKREF(YastYbinding_name),b_);
    T4 = CALL2(1,CHKREF(Yerror),CHKREF(lit_2),T5);
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_global_binding_value_setter_1) {
  P value_,b_;
  P boxF1520;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(value_, 0);
  ARG(b_, 1);
loop:
  T1 = CALL1(1,CHKREF(YastYbinding_global_box),b_);
  boxF1520 = T1;
  boxF1520 = BOXFAB(boxF1520);
  T4 = BOXVAL(boxF1520);
  T3 = CALL1(1,CHKREF(Ynot),T4);
  if (T3 != YPfalse) {
    T8 = (P)YPpair(CHKREF(YastYLglobal_boxG),Ynil);
    T7 = CALL3(1,CHKREF(YPisa),T8,Ynil,Ynil);
    T6 = CALL2(1,CHKREF(YastYbinding_global_box_setter),T7,b_);
    T5 = BOXVAL(boxF1520) = T6;
  } else {
  }
  T10 = BOXVAL(boxF1520);
  T9 = CALL2(1,CHKREF(YastYglobal_box_value_setter),value_,T10);
  T0 = T9;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_global_binding_boundQ_2) {
  P b_;
  P boxF1521;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,CHKREF(YastYbinding_global_box),b_);
  boxF1521 = T1;
  if (boxF1521 != YPfalse) {
    T2 = YPtrue;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_env_runtime_value_3) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,CHKREF(YruntimeYlocative_value),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_runtime_value_setter_4) {
  P v_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(v_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYlocative_value_setter),v_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_parent_5) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(Yast_evalYenv_parent));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_parent_setter_6) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_evalYenv_parent));
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
  QRET(YPfalse);
}

FUNCODEDEF(fun_env_function_8) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(Yast_evalYenv_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_function_setter_9) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_evalYenv_function));
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
  QRET(YPfalse);
}

FUNCODEDEF(fun_env_names_11) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(Yast_evalYenv_names));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_names_setter_12) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_evalYenv_names));
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
  QRET(Ynil);
}

FUNCODEDEF(fun_env_values_14) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(Yast_evalYenv_values));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_values_setter_15) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_evalYenv_values));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_16) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_env_frameX_17) {
  P env_,function_,names_,args_;
  P valuesF1522;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(env_, 0);
  ARG(function_, 1);
  ARG(names_, 2);
  ARG(args_, 3);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLvecG),args_);
  valuesF1522 = T1;
  T3 = (P)YPpair(CHKREF(Yast_evalYLloc_envG),Ynil);
  T7 = (P)YPpair(CHKREF(Yast_evalYenv_names),Ynil);
  T6 = (P)YPpair(CHKREF(Yast_evalYenv_values),T7);
  T5 = (P)YPpair(CHKREF(Yast_evalYenv_function),T6);
  T4 = (P)YPpair(CHKREF(Yast_evalYenv_parent),T5);
  T11 = (P)YPpair(names_,Ynil);
  T10 = (P)YPpair(valuesF1522,T11);
  T9 = (P)YPpair(function_,T10);
  T8 = (P)YPpair(env_,T9);
  T2 = CALL3(1,CHKREF(YPisa),T3,T4,T8);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_env_local_value_18) {
  P env_,i_,j_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(env_, 0);
  ARG(i_, 1);
  ARG(j_, 2);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYE),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL1(1,CHKREF(Yast_evalYenv_values),env_);
    T2 = CALL2(1,CHKREF(YruntimeYelt),T3,j_);
    T0 = T2;
  } else {
    T5 = CALL1(1,CHKREF(Yast_evalYenv_parent),env_);
    T6 = CALL2(1,CHKREF(YruntimeY_),i_,YPint((P)1));
    T4 = CALL3(1,CHKREF(Yast_evalYenv_local_value),T5,T6,j_);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_local_value_setter_19) {
  P v_,env_,i_,j_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(v_, 0);
  ARG(env_, 1);
  ARG(i_, 2);
  ARG(j_, 3);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYE),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL1(1,CHKREF(Yast_evalYenv_values),env_);
    T2 = CALL3(1,CHKREF(YruntimeYelt_setter),v_,T3,j_);
    T0 = T2;
  } else {
    T5 = CALL1(1,CHKREF(Yast_evalYenv_parent),env_);
    T6 = CALL2(1,CHKREF(YruntimeY_),i_,YPint((P)1));
    T4 = CALLN(1,CHKREF(Yast_evalYenv_local_value_setter),4,v_,T5,T6,j_);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_20) {
  P names_,i_;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(names_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),names_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,CHKREF(Yast_evalYenv_parent),FREEREF(0));
    T2 = CALL2(1,CHKREF(Yast_evalYenv_binding_value),T3,FREEREF(1));
    T0 = T2;
  } else {
    T6 = CALL1(1,CHKREF(Yhead),names_);
    T5 = CALL2(1,CHKREF(YmacrosYEE),FREEREF(1),T6);
    if (T5 != YPfalse) {
      T8 = CALL1(1,CHKREF(Yast_evalYenv_values),FREEREF(0));
      T7 = CALL2(1,CHKREF(YruntimeYelt),T8,i_);
      T4 = T7;
    } else {
      T10 = CALL1(1,CHKREF(Ytail),names_);
      T11 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
      a1 = T10;
      a2 = T11;
      names_ = a1;
      i_ = a2;
      goto loop;
      T4 = T9;
    }
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_binding_value_21) {
  P env_,name_;
  P loopF1523;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(env_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL2(1,CHKREF(YmacrosYEE),env_,CHKREF(Yast_evalYDnul_loc_env));
  if (T1 != YPfalse) {
    T0 = CHKREF(Ynul);
  } else {
    T3 = FUNSHELL(1,fun_loop_20,3);
    loopF1523 = T3;
    FUNINIT(loopF1523, 3,env_,name_,loopF1523);
    T5 = CALL1(1,CHKREF(Yast_evalYenv_names),env_);
    T4 = CALL2(0,loopF1523,T5,YPint((P)0));
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_22) {
  P names_,i_;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(names_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),names_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,CHKREF(Yast_evalYenv_parent),FREEREF(1));
    T2 = CALL3(1,CHKREF(Yast_evalYenv_binding_value_setter),FREEREF(0),T3,FREEREF(2));
    T0 = T2;
  } else {
    T6 = CALL1(1,CHKREF(Yhead),names_);
    T5 = CALL2(1,CHKREF(YmacrosYEE),FREEREF(2),T6);
    if (T5 != YPfalse) {
      T8 = CALL1(1,CHKREF(Yast_evalYenv_values),FREEREF(1));
      T7 = CALL3(1,CHKREF(YruntimeYelt_setter),FREEREF(0),T8,i_);
      T4 = T7;
    } else {
      T10 = CALL1(1,CHKREF(Ytail),names_);
      T11 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
      a1 = T10;
      a2 = T11;
      names_ = a1;
      i_ = a2;
      goto loop;
      T4 = T9;
    }
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_binding_value_setter_23) {
  P v_,env_,name_;
  P loopF1524;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(v_, 0);
  ARG(env_, 1);
  ARG(name_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_22,4);
  loopF1524 = T1;
  FUNINIT(loopF1524, 4,v_,env_,name_,loopF1524);
  T3 = CALL1(1,CHKREF(Yast_evalYenv_names),env_);
  T2 = CALL2(0,loopF1524,T3,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_evaluate_24) {
  P e_;
  P T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yast_evalYast_eval),e_,CHKREF(Yast_evalYDnul_loc_env));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_25) {
  P e_,env_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T0 = CALL1(1,CHKREF(YastYconstant_value),e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_26) {
  P e_,env_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T0 = CALL1(1,CHKREF(YastYconstant_value),e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_27) {
  P e_,ee_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(ee_, 1);
loop:
  T1 = CALL1(1,CHKREF(YastYcompile_time_program),e_);
  T0 = CALL1(1,CHKREF(YastYast_evaluate),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_28) {
  P res_,specs_,i_;
  P typeF1526;
  P specF1525;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(res_, 0);
  ARG(specs_, 1);
  ARG(i_, 2);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL1(1,CHKREF(YruntimeYrevX),res_);
    T0 = T2;
  } else {
    T4 = CALL1(1,CHKREF(Yhead),specs_);
    specF1525 = T4;
    if (specF1525 != YPfalse) {
      T7 = CALL2(1,CHKREF(Yast_evalYast_eval),specF1525,FREEREF(1));
      T6 = T7;
    } else {
      T6 = CHKREF(YLanyG);
    }
    typeF1526 = T6;
    T9 = CALL2(1,CHKREF(YmacrosYpair),typeF1526,res_);
    T10 = CALL1(1,CHKREF(Ytail),specs_);
    T11 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
    a1 = T9;
    a2 = T10;
    a3 = T11;
    res_ = a1;
    specs_ = a2;
    i_ = a3;
    goto loop;
    T5 = T8;
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_specs_29) {
  P specs_,naryQ_,env_;
  P loopF1528;
  P nreqF1527;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(specs_, 0);
  ARG(naryQ_, 1);
  ARG(env_, 2);
loop:
  if (naryQ_ != YPfalse) {
    T3 = CALL1(1,CHKREF(YruntimeYlen),specs_);
    T2 = CALL2(1,CHKREF(YruntimeY_),T3,YPint((P)1));
    T1 = T2;
  } else {
    T4 = CALL1(1,CHKREF(YruntimeYlen),specs_);
    T1 = T4;
  }
  nreqF1527 = T1;
  T6 = FUNSHELL(1,fun_loop_28,3);
  loopF1528 = T6;
  FUNINIT(loopF1528, 3,nreqF1527,env_,loopF1528);
  T7 = CALL3(0,loopF1528,Ynil,specs_,YPint((P)0));
  T5 = T7;
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1288_30) {
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
  P x_1287F1539;
  P x_1287F1538;
  P x_1287F1537;
  P x_1287F1536;
  P x_1287F1535;
  P bodyF1534;
  P namesF1533;
  P fF1532;
  P envF1531;
  P x_1287F1530;
  P x_1288F1529;
  P T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70;
  P T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54;
  P T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1288_30,1);
  x_1288F1529 = T1;
  FUNINIT(x_1288F1529, 1,return_);
  x_1287F1530 = FREEREF(0);
  envF1531 = YPfalse;
  envF1531 = BOXFAB(envF1531);
  fF1532 = YPfalse;
  fF1532 = BOXFAB(fF1532);
  namesF1533 = YPfalse;
  namesF1533 = BOXFAB(namesF1533);
  bodyF1534 = YPfalse;
  bodyF1534 = BOXFAB(bodyF1534);
  T11 = CALL2(1,CHKREF(YisaQ),x_1287F1530,CHKREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1287F1530,CHKREF(lit_46),x_1288F1529);
    x_1287F1535 = T13;
    T15 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1287F1535,x_1288F1529);
    BOXVAL(envF1531) = T15;
    T16 = CALL1(1,CHKREF(Ytail),x_1287F1535);
    x_1287F1536 = T16;
    T18 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1287F1536,x_1288F1529);
    BOXVAL(fF1532) = T18;
    T19 = CALL1(1,CHKREF(Ytail),x_1287F1536);
    x_1287F1537 = T19;
    T21 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1287F1537,x_1288F1529);
    BOXVAL(namesF1533) = T21;
    T22 = CALL1(1,CHKREF(Ytail),x_1287F1537);
    x_1287F1538 = T22;
    T24 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1287F1538,x_1288F1529);
    BOXVAL(bodyF1534) = T24;
    T25 = CALL1(1,CHKREF(Ytail),x_1287F1538);
    x_1287F1539 = T25;
    T26 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1287F1539,x_1288F1529);
    T23 = T26;
    T20 = T23;
    T17 = T20;
    T14 = T17;
    T12 = T14;
  } else {
    T27 = CALL2(1,x_1288F1529,CHKREF(lit_47),x_1287F1530);
  }
  T29 = CALL1(1,CHKREF(Ylst),CHKREF(lit_48));
  T34 = CALL1(1,CHKREF(Ylst),CHKREF(lit_25));
  T35 = CALL1(1,CHKREF(Ylst),CHKREF(lit_49));
  T33 = CALL3(1,CHKREF(YmacrosYcat),T34,T35,Ynil);
  T32 = CALL1(1,CHKREF(Ylst),T33);
  T31 = CALL2(1,CHKREF(YmacrosYcat),T32,Ynil);
  T30 = CALL1(1,CHKREF(Ylst),T31);
  T38 = CALL1(1,CHKREF(Ylst),CHKREF(lit_50));
  T43 = CALL1(1,CHKREF(Ylst),CHKREF(lit_51));
  T46 = CALL1(1,CHKREF(Ylst),CHKREF(lit_52));
  T45 = CALL2(1,CHKREF(YmacrosYcat),T46,Ynil);
  T44 = CALL1(1,CHKREF(Ylst),T45);
  T42 = CALL3(1,CHKREF(YmacrosYcat),T43,T44,Ynil);
  T41 = CALL1(1,CHKREF(Ylst),T42);
  T49 = CALL1(1,CHKREF(Ylst),CHKREF(lit_53));
  T52 = CALL1(1,CHKREF(Ylst),CHKREF(lit_21));
  T54 = BOXVAL(envF1531);
  T53 = CALL1(1,CHKREF(Ylst),T54);
  T56 = BOXVAL(fF1532);
  T55 = CALL1(1,CHKREF(Ylst),T56);
  T59 = CALL1(1,CHKREF(Ylst),CHKREF(lit_54));
  T61 = BOXVAL(namesF1533);
  T60 = CALL1(1,CHKREF(Ylst),T61);
  T64 = CALL1(1,CHKREF(Ylst),CHKREF(lit_55));
  T67 = CALL1(1,CHKREF(Ylst),CHKREF(lit_56));
  T68 = CALL1(1,CHKREF(Ylst),CHKREF(lit_52));
  T66 = CALL3(1,CHKREF(YmacrosYcat),T67,T68,Ynil);
  T65 = CALL1(1,CHKREF(Ylst),T66);
  T63 = CALL3(1,CHKREF(YmacrosYcat),T64,T65,Ynil);
  T62 = CALL1(1,CHKREF(Ylst),T63);
  T58 = CALLN(1,CHKREF(YmacrosYcat),4,T59,T60,T62,Ynil);
  T57 = CALL1(1,CHKREF(Ylst),T58);
  T71 = CALL1(1,CHKREF(Ylst),CHKREF(lit_54));
  T74 = CALL1(1,CHKREF(Ylst),CHKREF(lit_57));
  T75 = CALL1(1,CHKREF(Ylst),CHKREF(lit_58));
  T76 = CALL1(1,CHKREF(Ylst),CHKREF(lit_25));
  T73 = CALLN(1,CHKREF(YmacrosYcat),4,T74,T75,T76,Ynil);
  T72 = CALL1(1,CHKREF(Ylst),T73);
  T79 = CALL1(1,CHKREF(Ylst),CHKREF(lit_55));
  T80 = CALL1(1,CHKREF(Ylst),CHKREF(lit_51));
  T78 = CALL3(1,CHKREF(YmacrosYcat),T79,T80,Ynil);
  T77 = CALL1(1,CHKREF(Ylst),T78);
  T70 = CALLN(1,CHKREF(YmacrosYcat),4,T71,T72,T77,Ynil);
  T69 = CALL1(1,CHKREF(Ylst),T70);
  T51 = CALLN(1,CHKREF(YmacrosYcat),6,T52,T53,T55,T57,T69,Ynil);
  T50 = CALL1(1,CHKREF(Ylst),T51);
  T48 = CALL3(1,CHKREF(YmacrosYcat),T49,T50,Ynil);
  T47 = CALL1(1,CHKREF(Ylst),T48);
  T40 = CALL3(1,CHKREF(YmacrosYcat),T41,T47,Ynil);
  T39 = CALL1(1,CHKREF(Ylst),T40);
  T84 = BOXVAL(bodyF1534);
  T83 = CALL1(1,CHKREF(Ylst),T84);
  T85 = CALL1(1,CHKREF(Ylst),CHKREF(lit_53));
  T82 = CALL3(1,CHKREF(YmacrosYcat),T83,T85,Ynil);
  T81 = CALL1(1,CHKREF(Ylst),T82);
  T37 = CALLN(1,CHKREF(YmacrosYcat),4,T38,T39,T81,Ynil);
  T36 = CALL1(1,CHKREF(Ylst),T37);
  T28 = CALLN(1,CHKREF(YmacrosYcat),4,T29,T30,T36,Ynil);
  T9 = T28;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_32) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_31,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_33) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,CHKREF(Yfun_name),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_34) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,CHKREF(YastYfunction_debug_name),x_);
  T0 = CALL1(1,CHKREF(Yast_evalYas_fun_name),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_35) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,CHKREF(YastYbinding_name),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_36) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,CHKREF(YastYconstant_value),x_);
  T0 = CALL1(1,CHKREF(Yast_evalYas_fun_name),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_37) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_as_fun_name_38) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_39) {
  P args_;
  P frameF1541;
  P nmsF1540;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  NARGS(args_, 0);
loop:
  T1 = (P)YPnext_methods();
  nmsF1540 = T1;
  T5 = CALL1(1,CHKREF(Ylst),CHKREF(lit_52));
  T4 = CALL2(1,CHKREF(YruntimeYcat2),FREEREF(2),T5);
  T7 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLlstG),args_);
  T8 = CALL1(1,CHKREF(Ylst),nmsF1540);
  T6 = CALL2(1,CHKREF(YruntimeYcat2),T7,T8);
  T3 = CALLN(1,CHKREF(Yast_evalYenv_frameX),4,FREEREF(0),FREEREF(1),T4,T6);
  frameF1541 = T3;
  T9 = CALL1(1,FREEREF(3),frameF1541);
  T2 = T9;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_export_proto_method_40) {
  P f_,names_,specs_,naryQ_,value_,body_,env_;
  P efunF1542;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6,a7;
LINK_STACK();
  ARG(f_, 0);
  ARG(names_, 1);
  ARG(specs_, 2);
  ARG(naryQ_, 3);
  ARG(value_, 4);
  ARG(body_, 5);
  ARG(env_, 6);
loop:
  T1 = FUNFAB(fun_39,4,env_,f_,names_,body_);
  efunF1542 = T1;
  T2 = CALL1(1,CHKREF(Yast_evalYas_fun_name),f_);
  CALL2(1,CHKREF(Yfun_name_setter),T2,efunF1542);
  T4 = (P)YPpair(CHKREF(YLsigG),Ynil);
  T10 = (P)YPpair(CHKREF(Ysig_unification_vars),Ynil);
  T9 = (P)YPpair(CHKREF(Ysig_value),T10);
  T8 = (P)YPpair(CHKREF(Ysig_arity),T9);
  T7 = (P)YPpair(CHKREF(Ysig_naryQ),T8);
  T6 = (P)YPpair(CHKREF(Ysig_specs),T7);
  T5 = (P)YPpair(CHKREF(Ysig_names),T6);
  T13 = CALL3(1,CHKREF(Yast_evalYast_eval_specs),specs_,naryQ_,env_);
  if (naryQ_ != YPfalse) {
    T18 = CALL1(1,CHKREF(YruntimeYlen),specs_);
    T17 = CALL2(1,CHKREF(YruntimeY_),T18,YPint((P)1));
    T16 = T17;
  } else {
    T19 = CALL1(1,CHKREF(YruntimeYlen),specs_);
    T16 = T19;
  }
  if (value_ != YPfalse) {
    T22 = CALL2(1,CHKREF(Yast_evalYast_eval),value_,env_);
    T21 = T22;
  } else {
    T21 = CHKREF(YLanyG);
  }
  T23 = (P)YPpair(Ynil,Ynil);
  T20 = (P)YPpair(T21,T23);
  T15 = (P)YPpair(T16,T20);
  T14 = (P)YPpair(naryQ_,T15);
  T12 = (P)YPpair(T13,T14);
  T11 = (P)YPpair(names_,T12);
  T3 = CALL3(1,CHKREF(YPisa),T4,T5,T11);
  CALL2(1,CHKREF(Yfun_sig_setter),T3,efunF1542);
  T0 = efunF1542;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_41) {
  P env_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  T1 = CALL1(1,CHKREF(YastYfunction_body),FREEREF(0));
  T0 = CALL2(1,CHKREF(Yast_evalYast_eval),T1,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_42) {
  P e_,env_;
  P evalF1544;
  P paramsF1543;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,CHKREF(YastYfunction_bindings),e_);
  paramsF1543 = T1;
  T3 = FUNFAB(fun_41,1,e_);
  evalF1544 = T3;
  T5 = CALL2(1,CHKREF(YmacrosYmap),CHKREF(YastYbinding_name),paramsF1543);
  T6 = CALL2(1,CHKREF(YmacrosYmap),CHKREF(YastYbinding_type),paramsF1543);
  T7 = CALL1(1,CHKREF(YastYfunction_naryQ),e_);
  T8 = CALL1(1,CHKREF(YastYfunction_value),e_);
  T4 = CALLN(1,CHKREF(Yast_evalYexport_proto_method),7,e_,T5,T6,T7,T8,evalF1544,env_);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_43) {
  P e_,env_;
  P specsF1548;
  P namesF1547;
  P naryQF1546;
  P paramsF1545;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,CHKREF(YastYfunction_bindings),e_);
  paramsF1545 = T1;
  T3 = CALL1(1,CHKREF(YastYfunction_naryQ),e_);
  naryQF1546 = T3;
  T5 = CALL2(1,CHKREF(YmacrosYmap),CHKREF(YastYbinding_name),paramsF1545);
  namesF1547 = T5;
  T8 = CALL2(1,CHKREF(YmacrosYmap),CHKREF(YastYbinding_type),paramsF1545);
  T7 = CALL3(1,CHKREF(Yast_evalYast_eval_specs),T8,naryQF1546,env_);
  specsF1548 = T7;
  T10 = CALL1(1,CHKREF(Yast_evalYas_fun_name),e_);
  T9 = CALLN(1,CHKREF(Yfab_gen),5,T10,namesF1547,specsF1548,naryQF1546,Ynil);
  T6 = T9;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_local_reference_value_44) {
  P env_,ref_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(env_, 0);
  ARG(ref_, 1);
loop:
  T1 = CALL1(1,CHKREF(YastYreference_frame_number),ref_);
  T2 = CALL1(1,CHKREF(YastYreference_frame_offset),ref_);
  T0 = CALL3(1,CHKREF(Yast_evalYenv_local_value),env_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_local_reference_value_setter_45) {
  P val_,env_,ref_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(val_, 0);
  ARG(env_, 1);
  ARG(ref_, 2);
loop:
  T1 = CALL1(1,CHKREF(YastYreference_frame_number),ref_);
  T2 = CALL1(1,CHKREF(YastYreference_frame_offset),ref_);
  T0 = CALLN(1,CHKREF(Yast_evalYenv_local_value_setter),4,val_,env_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_46) {
  P e_,env_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T0 = CALL2(1,CHKREF(Yast_evalYenv_local_reference_value),env_,e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_47) {
  P e_,env_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,CHKREF(YastYreference_binding),e_);
  T0 = CALL1(1,CHKREF(Yast_evalYenv_global_binding_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_48) {
  P e_,env_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,CHKREF(YastYreference_binding),e_);
  T1 = CALL1(1,CHKREF(YastYbinding_locative),T2);
  T0 = CALL1(1,CHKREF(Yast_evalYenv_runtime_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_49) {
  P e_,env_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,CHKREF(YastYboundQ_reference),e_);
  T1 = CALL1(1,CHKREF(YastYreference_binding),T2);
  T0 = CALL3(1,CHKREF(Yast_evalYast_eval_boundQ),e_,T1,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_boundQ_50) {
  P e_,binding_,env_;
  P x_1289F1549;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(binding_, 1);
  ARG(env_, 2);
loop:
  T1 = CALL1(1,CHKREF(YastYbinding_kind),binding_);
  x_1289F1549 = T1;
  T3 = CALL2(1,CHKREF(YmacrosYEE),x_1289F1549,CHKREF(lit_69));
  if (T3 != YPfalse) {
    T4 = CALL1(1,CHKREF(Yast_evalYenv_global_binding_boundQ),binding_);
    T2 = T4;
  } else {
    T2 = YPtrue;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_boundQ_51) {
  P e_,binding_,env_;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(binding_, 1);
  ARG(env_, 2);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_ast_eval_52) {
  P e_,env_;
  P valueF1550;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,CHKREF(YastYassignment_form),e_);
  T1 = CALL2(1,CHKREF(Yast_evalYast_eval),T2,env_);
  valueF1550 = T1;
  T4 = CALL1(1,CHKREF(YastYassignment_binding),e_);
  T3 = CALL2(1,CHKREF(Yast_evalYenv_global_binding_value_setter),valueF1550,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_53) {
  P e_,env_;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_ast_eval_54) {
  P e_,env_;
  P valueF1551;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,CHKREF(YastYassignment_form),e_);
  T1 = CALL2(1,CHKREF(Yast_evalYast_eval),T2,env_);
  valueF1551 = T1;
  T5 = CALL1(1,CHKREF(YastYassignment_binding),e_);
  T4 = CALL1(1,CHKREF(YastYbinding_locative),T5);
  T3 = CALL2(1,CHKREF(Yast_evalYenv_runtime_value_setter),valueF1551,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_55) {
  P e_,env_;
  P valueF1552;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,CHKREF(YastYassignment_form),e_);
  T1 = CALL2(1,CHKREF(Yast_evalYast_eval),T2,env_);
  valueF1552 = T1;
  T4 = CALL1(1,CHKREF(YastYassignment_reference),e_);
  T3 = CALL3(1,CHKREF(Yast_evalYenv_local_reference_value_setter),valueF1552,env_,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_define_bindingX_56) {
  P b_,v_;
  P x_1291F1554;
  P x_1290F1553;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(b_, 0);
  ARG(v_, 1);
loop:
  T1 = CALL1(1,CHKREF(YastYbinding_kind),b_);
  x_1290F1553 = T1;
  T3 = CALL2(1,CHKREF(YmacrosYEE),x_1290F1553,CHKREF(lit_71));
  if (T3 != YPfalse) {
    T5 = CALL1(1,CHKREF(YastYbinding_locative),b_);
    T4 = CALL2(1,CHKREF(Yast_evalYenv_runtime_value_setter),v_,T5);
    T2 = T4;
  } else {
    x_1291F1554 = x_1290F1553;
    T8 = CALL2(1,CHKREF(YmacrosYEE),x_1291F1554,CHKREF(lit_69));
    if (T8 != YPfalse) {
      T9 = CALL2(1,CHKREF(Yast_evalYenv_global_binding_value_setter),v_,b_);
      T7 = T9;
    } else {
      T11 = CALL1(1,CHKREF(YastYbinding_kind),b_);
      T10 = CALL2(1,CHKREF(Yerror),CHKREF(lit_72),T11);
      T7 = T10;
    }
    T6 = T7;
    T2 = T6;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_57) {
  P e_,env_;
  P valueF1555;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,CHKREF(YastYassignment_form),e_);
  T1 = CALL2(1,CHKREF(Yast_evalYast_eval),T2,env_);
  valueF1555 = T1;
  T3 = CALL1(1,CHKREF(YastYassignment_binding),e_);
  CALL2(1,CHKREF(Yast_evalYenv_define_bindingX),T3,valueF1555);
  T0 = YPfalse;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_58) {
  P e_,env_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,CHKREF(YastYalternative_condition),e_);
  T1 = CALL2(1,CHKREF(Yast_evalYast_eval),T2,env_);
  if (T1 != YPfalse) {
    T4 = CALL1(1,CHKREF(YastYalternative_consequent),e_);
    T3 = CALL2(1,CHKREF(Yast_evalYast_eval),T4,env_);
    T0 = T3;
  } else {
    T6 = CALL1(1,CHKREF(YastYalternative_alternant),e_);
    T5 = CALL2(1,CHKREF(Yast_evalYast_eval),T6,env_);
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_59) {
  P e_;
  P valF1557;
  P nxtF1556;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,CHKREF(Ytail),e_);
  nxtF1556 = T1;
  T4 = CALL1(1,CHKREF(Yhead),e_);
  T3 = CALL2(1,CHKREF(Yast_evalYast_eval),T4,FREEREF(0));
  valF1557 = T3;
  T6 = CALL1(1,CHKREF(YmacrosYemptyQ),nxtF1556);
  if (T6 != YPfalse) {
    T5 = valF1557;
  } else {
    a1 = nxtF1556;
    e_ = a1;
    goto loop;
    T5 = T7;
  }
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_60) {
  P e_,env_;
  P evalF1558;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_eval_59,2);
  evalF1558 = T1;
  FUNINIT(evalF1558, 2,env_,evalF1558);
  T2 = CALL1(0,evalF1558,e_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_61) {
  P res_,args_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(args_, 1);
loop:
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),args_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,CHKREF(YruntimeYrevX),res_);
    T0 = T2;
  } else {
    T6 = CALL1(1,CHKREF(Yhead),args_);
    T5 = CALL2(1,CHKREF(Yast_evalYast_eval),T6,FREEREF(1));
    T4 = CALL2(1,CHKREF(YmacrosYpair),T5,res_);
    T7 = CALL1(1,CHKREF(Ytail),args_);
    a1 = T4;
    a2 = T7;
    res_ = a1;
    args_ = a2;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_62) {
  P e_,env_;
  P evalF1559;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_eval_61,2);
  evalF1559 = T1;
  FUNINIT(evalF1559, 2,evalF1559,env_);
  T2 = CALL2(0,evalF1559,Ynil,e_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_63) {
  P e_,env_;
  P argsF1561;
  P fF1560;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,CHKREF(YastYapplication_function),e_);
  T1 = CALL2(1,CHKREF(Yast_evalYast_eval),T2,env_);
  fF1560 = T1;
  T5 = CALL1(1,CHKREF(YastYapplication_arguments),e_);
  T4 = CALL2(1,CHKREF(Yast_evalYast_eval),T5,env_);
  argsF1561 = T4;
  T6 = CALL3(1,CHKREF(YmacrosYnapply),fF1560,YPfalse,argsF1561);
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_64) {
  P e_,env_;
  P argsF1565;
  P fF1564;
  P nmsF1563;
  P bF1562;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,CHKREF(YastYapplication_binding),e_);
  bF1562 = T1;
  T4 = CALL1(1,CHKREF(YastYbinding_name),bF1562);
  T3 = CALL2(1,CHKREF(YmacrosYEE),T4,CHKREF(lit_52));
  if (T3 != YPfalse) {
    T6 = CALL2(1,CHKREF(Yast_evalYenv_binding_value),env_,CHKREF(lit_52));
    nmsF1563 = T6;
    T8 = CALL2(1,CHKREF(YmacrosYEE),nmsF1563,CHKREF(Ynul));
    if (T8 != YPfalse) {
      T7 = YPfalse;
    } else {
      T7 = nmsF1563;
    }
    T5 = T7;
    T2 = T5;
  } else {
    T10 = CALL1(1,CHKREF(YastYbinding_info),bF1562);
    fF1564 = T10;
    T13 = CALL1(1,CHKREF(YastYapplication_arguments),e_);
    T12 = CALL2(1,CHKREF(Yast_evalYast_eval),T13,env_);
    argsF1565 = T12;
    T14 = CALL3(1,CHKREF(YmacrosYnapply),fF1564,YPfalse,argsF1565);
    T11 = T14;
    T9 = T11;
    T2 = T9;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_65) {
  P e_,env_;
  P nenvF1567;
  P argsF1566;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,CHKREF(YastYfix_let_arguments),e_);
  T1 = CALL2(1,CHKREF(Yast_evalYast_eval),T2,env_);
  argsF1566 = T1;
  T6 = CALL1(1,CHKREF(YastYfix_let_bindings),e_);
  T5 = CALL2(1,CHKREF(YmacrosYmap),CHKREF(YastYbinding_name),T6);
  T4 = CALLN(1,CHKREF(Yast_evalYenv_frameX),4,env_,YPfalse,T5,argsF1566);
  nenvF1567 = T4;
  T8 = CALL1(1,CHKREF(YastYfix_let_body),e_);
  T7 = CALL2(1,CHKREF(Yast_evalYast_eval),T8,nenvF1567);
  T3 = T7;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_66) {
  P name_,value_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(value_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yast_evalYenv_binding_value_setter),value_,FREEREF(0),name_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_67) {
  P e_,env_;
  P new_envF1569;
  P bindingsF1568;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,CHKREF(YastYlocals_bindings),e_);
  bindingsF1568 = T1;
  T4 = CALL2(1,CHKREF(YmacrosYmap),CHKREF(YastYbinding_name),bindingsF1568);
  T6 = CALL1(1,CHKREF(YruntimeYalways),CHKREF(Ynul));
  T5 = CALL2(1,CHKREF(YmacrosYmap),T6,bindingsF1568);
  T3 = CALLN(1,CHKREF(Yast_evalYenv_frameX),4,env_,YPfalse,T4,T5);
  new_envF1569 = T3;
  T7 = FUNFAB(fun_66,1,new_envF1569);
  T8 = CALL2(1,CHKREF(YmacrosYmap),CHKREF(YastYbinding_name),bindingsF1568);
  T10 = CALL2(1,CHKREF(YruntimeYrcurry),CHKREF(Yast_evalYast_eval),new_envF1569);
  T11 = CALL1(1,CHKREF(YastYlocals_functions),e_);
  T9 = CALL2(1,CHKREF(YmacrosYmap),T10,T11);
  CALL3(1,CHKREF(YruntimeYdo2),T7,T8,T9);
  T13 = CALL1(1,CHKREF(YastYlocals_body),e_);
  T12 = CALL2(1,CHKREF(Yast_evalYast_eval),T13,new_envF1569);
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_68) {
  P env_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  T1 = CALL2(1,CHKREF(Yast_evalYenv_binding_value),env_,CHKREF(lit_7));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  P return_;
  P exitF1571;
  P rprocF1570;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNFAB(fun_68,1,return_);
  rprocF1570 = T1;
  T4 = CALL1(1,CHKREF(Ylst),CHKREF(lit_7));
  T5 = CALL1(1,CHKREF(Ylst),YPfalse);
  T3 = CALLN(1,CHKREF(Yast_evalYexport_proto_method),7,rprocF1570,T4,T5,YPfalse,YPfalse,rprocF1570,FREEREF(0));
  exitF1571 = T3;
  T8 = CALL1(1,CHKREF(YastYbind_exit_main_fun),FREEREF(1));
  T7 = CALL2(1,CHKREF(Yast_evalYast_eval),T8,FREEREF(0));
  T6 = CALL1(1,T7,exitF1571);
  T2 = T6;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_70) {
  P e_,env_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNFAB(fun_69,2,env_,e_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_71) {
  P T2,T1,T0;
LINK_STACK();
loop:
  T2 = CALL1(1,CHKREF(YastYunwind_protect_protected_thunk),FREEREF(0));
  T1 = CALL2(1,CHKREF(Yast_evalYast_eval),T2,FREEREF(1));
  T0 = CALL0(1,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_72) {
  P T2,T1,T0;
LINK_STACK();
loop:
  T2 = CALL1(1,CHKREF(YastYunwind_protect_cleanup_thunk),FREEREF(0));
  T1 = CALL2(1,CHKREF(Yast_evalYast_eval),T2,FREEREF(1));
  T0 = CALL0(1,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_73) {
  P e_,env_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNFAB(fun_71,2,e_,env_);
  T2 = FUNFAB(fun_72,2,e_,env_);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_74) {
  P e_,env_;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,CHKREF(YastYmonitor_type),e_);
  T1 = CALL2(1,CHKREF(Yast_evalYast_eval),T2,env_);
  T4 = CALL1(1,CHKREF(YastYmonitor_info),e_);
  T3 = CALL2(1,CHKREF(Yast_evalYast_eval),T4,env_);
  T6 = CALL1(1,CHKREF(YastYmonitor_test),e_);
  T5 = CALL2(1,CHKREF(Yast_evalYast_eval),T6,env_);
  T8 = CALL1(1,CHKREF(YastYmonitor_handler),e_);
  T7 = CALL2(1,CHKREF(Yast_evalYast_eval),T8,env_);
  T10 = CALL1(1,CHKREF(YastYmonitor_main_thunk),e_);
  T9 = CALL2(1,CHKREF(Yast_evalYast_eval),T10,env_);
  T0 = CALLN(1,CHKREF(YruntimeYPwith_monitor),5,T1,T3,T5,T7,T9);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYinit_environment_for_eval) {
  P env_;
  P bF1572;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  CALLN(1,CHKREF(YastYast_define_binding),4,env_,CHKREF(lit_52),YPfalse,CHKREF(lit_75));
  T1 = CALLN(1,CHKREF(YastYast_define_binding),4,env_,CHKREF(lit_76),YPfalse,CHKREF(lit_69));
  bF1572 = T1;
  T2 = CALL2(1,CHKREF(Yast_evalYenv_global_binding_value_setter),CHKREF(YmacrosYpair),bF1572);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P Yast_evalY___main_0___() {
  P T283,T282,T281,T280,T279,T278,T277,T276,T275,T274,T273,T272,T271,T270,T269,T268;
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
  lit_0 = YPPsym((P)"env-global-binding-value");
  lit_1 = YPPsym((P)"b");
  lit_2 = YPsb((P)"Unbound binding: %=");
  T0 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YastYLmodule_bindingG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_env_global_binding_value_0 = YPmet(FUNCODEREF(fun_env_global_binding_value_0),CHKREF(lit_0),T0,ENVNUL);
  T3 = BOUNDP(Yast_evalYenv_global_binding_value);
  if (T3 != YPfalse) {
    T2 = CHKREF(Yast_evalYenv_global_binding_value);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_env_global_binding_value_0;
  T1 = CALL2(1,CHKREF(YPdefine_method),T2,T4);
  Yast_evalYenv_global_binding_value = T1;
  lit_3 = YPPsym((P)"env-global-binding-value-setter");
  lit_4 = YPPsym((P)"value");
  T5 = YPsig(YPPlist(2,CHKREF(lit_4),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLmodule_bindingG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_env_global_binding_value_setter_1 = YPmet(FUNCODEREF(fun_env_global_binding_value_setter_1),CHKREF(lit_3),T5,ENVNUL);
  T8 = BOUNDP(Yast_evalYenv_global_binding_value_setter);
  if (T8 != YPfalse) {
    T7 = CHKREF(Yast_evalYenv_global_binding_value_setter);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_env_global_binding_value_setter_1;
  T6 = CALL2(1,CHKREF(YPdefine_method),T7,T9);
  Yast_evalYenv_global_binding_value_setter = T6;
  lit_5 = YPPsym((P)"env-global-binding-bound?");
  T10 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YastYLmodule_bindingG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_env_global_binding_boundQ_2 = YPmet(FUNCODEREF(fun_env_global_binding_boundQ_2),CHKREF(lit_5),T10,ENVNUL);
  T13 = BOUNDP(Yast_evalYenv_global_binding_boundQ);
  if (T13 != YPfalse) {
    T12 = CHKREF(Yast_evalYenv_global_binding_boundQ);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_env_global_binding_boundQ_2;
  T11 = CALL2(1,CHKREF(YPdefine_method),T12,T14);
  Yast_evalYenv_global_binding_boundQ = T11;
  lit_6 = YPPsym((P)"env-runtime-value");
  lit_7 = YPPsym((P)"x");
  T15 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLlocG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_env_runtime_value_3 = YPmet(FUNCODEREF(fun_env_runtime_value_3),CHKREF(lit_6),T15,ENVNUL);
  T18 = BOUNDP(Yast_evalYenv_runtime_value);
  if (T18 != YPfalse) {
    T17 = CHKREF(Yast_evalYenv_runtime_value);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_env_runtime_value_3;
  T16 = CALL2(1,CHKREF(YPdefine_method),T17,T19);
  Yast_evalYenv_runtime_value = T16;
  lit_8 = YPPsym((P)"env-runtime-value-setter");
  lit_9 = YPPsym((P)"v");
  T20 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_7)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLlocG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_env_runtime_value_setter_4 = YPmet(FUNCODEREF(fun_env_runtime_value_setter_4),CHKREF(lit_8),T20,ENVNUL);
  T23 = BOUNDP(Yast_evalYenv_runtime_value_setter);
  if (T23 != YPfalse) {
    T22 = CHKREF(Yast_evalYenv_runtime_value_setter);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_env_runtime_value_setter_4;
  T21 = CALL2(1,CHKREF(YPdefine_method),T22,T24);
  Yast_evalYenv_runtime_value_setter = T21;
  lit_10 = YPPsym((P)"<loc-env>");
  T26 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T25 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_10),T26);
  Yast_evalYLloc_envG = T25;
  lit_11 = YPPsym((P)"env-parent");
  lit_12 = YPPsym((P)"_x");
  T27 = YPsig(YPPlist(1,CHKREF(lit_12)),YPPlist(1,CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_env_parent_5 = YPmet(FUNCODEREF(fun_env_parent_5),CHKREF(lit_11),T27,ENVNUL);
  T30 = BOUNDP(Yast_evalYenv_parent);
  if (T30 != YPfalse) {
    T29 = CHKREF(Yast_evalYenv_parent);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_env_parent_5;
  T28 = CALL2(1,CHKREF(YPdefine_method),T29,T31);
  Yast_evalYenv_parent = T28;
  lit_13 = YPPsym((P)"env-parent-setter");
  lit_14 = YPPsym((P)"_z");
  T32 = YPsig(YPPlist(2,CHKREF(lit_14),CHKREF(lit_12)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_env_parent_setter_6 = YPmet(FUNCODEREF(fun_env_parent_setter_6),CHKREF(lit_13),T32,ENVNUL);
  T35 = BOUNDP(Yast_evalYenv_parent_setter);
  if (T35 != YPfalse) {
    T34 = CHKREF(Yast_evalYenv_parent_setter);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_env_parent_setter_6;
  T33 = CALL2(1,CHKREF(YPdefine_method),T34,T36);
  Yast_evalYenv_parent_setter = T33;
  T37 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T37,ENVNUL);
  T38 = fun_7;
  CALLN(1,CHKREF(YPslot),5,CHKREF(Yast_evalYLloc_envG),CHKREF(Yast_evalYenv_parent),CHKREF(Yast_evalYenv_parent_setter),CHKREF(YLanyG),T38);
  lit_15 = YPPsym((P)"env-function");
  T39 = YPsig(YPPlist(1,CHKREF(lit_12)),YPPlist(1,CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_env_function_8 = YPmet(FUNCODEREF(fun_env_function_8),CHKREF(lit_15),T39,ENVNUL);
  T42 = BOUNDP(Yast_evalYenv_function);
  if (T42 != YPfalse) {
    T41 = CHKREF(Yast_evalYenv_function);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_env_function_8;
  T40 = CALL2(1,CHKREF(YPdefine_method),T41,T43);
  Yast_evalYenv_function = T40;
  lit_16 = YPPsym((P)"env-function-setter");
  T44 = YPsig(YPPlist(2,CHKREF(lit_14),CHKREF(lit_12)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_env_function_setter_9 = YPmet(FUNCODEREF(fun_env_function_setter_9),CHKREF(lit_16),T44,ENVNUL);
  T47 = BOUNDP(Yast_evalYenv_function_setter);
  if (T47 != YPfalse) {
    T46 = CHKREF(Yast_evalYenv_function_setter);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_env_function_setter_9;
  T45 = CALL2(1,CHKREF(YPdefine_method),T46,T48);
  Yast_evalYenv_function_setter = T45;
  T49 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T49,ENVNUL);
  T50 = fun_10;
  CALLN(1,CHKREF(YPslot),5,CHKREF(Yast_evalYLloc_envG),CHKREF(Yast_evalYenv_function),CHKREF(Yast_evalYenv_function_setter),CHKREF(YLanyG),T50);
  lit_17 = YPPsym((P)"env-names");
  T51 = YPsig(YPPlist(1,CHKREF(lit_12)),YPPlist(1,CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_env_names_11 = YPmet(FUNCODEREF(fun_env_names_11),CHKREF(lit_17),T51,ENVNUL);
  T54 = BOUNDP(Yast_evalYenv_names);
  if (T54 != YPfalse) {
    T53 = CHKREF(Yast_evalYenv_names);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_env_names_11;
  T52 = CALL2(1,CHKREF(YPdefine_method),T53,T55);
  Yast_evalYenv_names = T52;
  lit_18 = YPPsym((P)"env-names-setter");
  T56 = YPsig(YPPlist(2,CHKREF(lit_14),CHKREF(lit_12)),YPPlist(2,CHKREF(YLlstG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_env_names_setter_12 = YPmet(FUNCODEREF(fun_env_names_setter_12),CHKREF(lit_18),T56,ENVNUL);
  T59 = BOUNDP(Yast_evalYenv_names_setter);
  if (T59 != YPfalse) {
    T58 = CHKREF(Yast_evalYenv_names_setter);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_env_names_setter_12;
  T57 = CALL2(1,CHKREF(YPdefine_method),T58,T60);
  Yast_evalYenv_names_setter = T57;
  T61 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T61,ENVNUL);
  T62 = fun_13;
  CALLN(1,CHKREF(YPslot),5,CHKREF(Yast_evalYLloc_envG),CHKREF(Yast_evalYenv_names),CHKREF(Yast_evalYenv_names_setter),CHKREF(YLlstG),T62);
  lit_19 = YPPsym((P)"env-values");
  T63 = YPsig(YPPlist(1,CHKREF(lit_12)),YPPlist(1,CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_env_values_14 = YPmet(FUNCODEREF(fun_env_values_14),CHKREF(lit_19),T63,ENVNUL);
  T66 = BOUNDP(Yast_evalYenv_values);
  if (T66 != YPfalse) {
    T65 = CHKREF(Yast_evalYenv_values);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_env_values_14;
  T64 = CALL2(1,CHKREF(YPdefine_method),T65,T67);
  Yast_evalYenv_values = T64;
  lit_20 = YPPsym((P)"env-values-setter");
  T68 = YPsig(YPPlist(2,CHKREF(lit_14),CHKREF(lit_12)),YPPlist(2,CHKREF(YLvecG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_env_values_setter_15 = YPmet(FUNCODEREF(fun_env_values_setter_15),CHKREF(lit_20),T68,ENVNUL);
  T71 = BOUNDP(Yast_evalYenv_values_setter);
  if (T71 != YPfalse) {
    T70 = CHKREF(Yast_evalYenv_values_setter);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_env_values_setter_15;
  T69 = CALL2(1,CHKREF(YPdefine_method),T70,T72);
  Yast_evalYenv_values_setter = T69;
  T73 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T73,ENVNUL);
  T74 = fun_16;
  CALLN(1,CHKREF(YPslot),5,CHKREF(Yast_evalYLloc_envG),CHKREF(Yast_evalYenv_values),CHKREF(Yast_evalYenv_values_setter),CHKREF(YLvecG),T74);
  T76 = (P)YPpair(CHKREF(Yast_evalYLloc_envG),Ynil);
  T75 = CALL3(1,CHKREF(YPisa),T76,Ynil,Ynil);
  Yast_evalYDnul_loc_env = T75;
  lit_21 = YPPsym((P)"env-frame!");
  lit_22 = YPPsym((P)"env");
  lit_23 = YPPsym((P)"function");
  lit_24 = YPPsym((P)"names");
  lit_25 = YPPsym((P)"args");
  T77 = YPsig(YPPlist(4,CHKREF(lit_22),CHKREF(lit_23),CHKREF(lit_24),CHKREF(lit_25)),YPPlist(4,CHKREF(Yast_evalYLloc_envG),CHKREF(YLanyG),CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)4),CHKREF(Yast_evalYLloc_envG),Ynil);
  fun_env_frameX_17 = YPmet(FUNCODEREF(fun_env_frameX_17),CHKREF(lit_21),T77,ENVNUL);
  T80 = BOUNDP(Yast_evalYenv_frameX);
  if (T80 != YPfalse) {
    T79 = CHKREF(Yast_evalYenv_frameX);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_env_frameX_17;
  T78 = CALL2(1,CHKREF(YPdefine_method),T79,T81);
  Yast_evalYenv_frameX = T78;
  lit_26 = YPPsym((P)"env-local-value");
  lit_27 = YPPsym((P)"i");
  lit_28 = YPPsym((P)"j");
  T82 = YPsig(YPPlist(3,CHKREF(lit_22),CHKREF(lit_27),CHKREF(lit_28)),YPPlist(3,CHKREF(Yast_evalYLloc_envG),CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_env_local_value_18 = YPmet(FUNCODEREF(fun_env_local_value_18),CHKREF(lit_26),T82,ENVNUL);
  T85 = BOUNDP(Yast_evalYenv_local_value);
  if (T85 != YPfalse) {
    T84 = CHKREF(Yast_evalYenv_local_value);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_env_local_value_18;
  T83 = CALL2(1,CHKREF(YPdefine_method),T84,T86);
  Yast_evalYenv_local_value = T83;
  lit_29 = YPPsym((P)"env-local-value-setter");
  T87 = YPsig(YPPlist(4,CHKREF(lit_9),CHKREF(lit_22),CHKREF(lit_27),CHKREF(lit_28)),YPPlist(4,CHKREF(YLanyG),CHKREF(Yast_evalYLloc_envG),CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_env_local_value_setter_19 = YPmet(FUNCODEREF(fun_env_local_value_setter_19),CHKREF(lit_29),T87,ENVNUL);
  T90 = BOUNDP(Yast_evalYenv_local_value_setter);
  if (T90 != YPfalse) {
    T89 = CHKREF(Yast_evalYenv_local_value_setter);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_env_local_value_setter_19;
  T88 = CALL2(1,CHKREF(YPdefine_method),T89,T91);
  Yast_evalYenv_local_value_setter = T88;
  lit_30 = YPPsym((P)"env-binding-value");
  lit_31 = YPPsym((P)"name");
  lit_32 = YPPsym((P)"loop");
  T93 = YPsig(YPPlist(2,CHKREF(lit_24),CHKREF(lit_27)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_loop_20 = YPmet(FUNCODEREF(fun_loop_20),CHKREF(lit_32),T93,ENVNUL);
  T92 = YPsig(YPPlist(2,CHKREF(lit_22),CHKREF(lit_31)),YPPlist(2,CHKREF(Yast_evalYLloc_envG),CHKREF(YLsymG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_env_binding_value_21 = YPmet(FUNCODEREF(fun_env_binding_value_21),CHKREF(lit_30),T92,ENVNUL);
  T96 = BOUNDP(Yast_evalYenv_binding_value);
  if (T96 != YPfalse) {
    T95 = CHKREF(Yast_evalYenv_binding_value);
  } else {
    T95 = YPfalse;
  }
  T97 = fun_env_binding_value_21;
  T94 = CALL2(1,CHKREF(YPdefine_method),T95,T97);
  Yast_evalYenv_binding_value = T94;
  lit_33 = YPPsym((P)"env-binding-value-setter");
  T99 = YPsig(YPPlist(2,CHKREF(lit_24),CHKREF(lit_27)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_loop_22 = YPmet(FUNCODEREF(fun_loop_22),CHKREF(lit_32),T99,ENVNUL);
  T98 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_22),CHKREF(lit_31)),YPPlist(3,CHKREF(YLanyG),CHKREF(Yast_evalYLloc_envG),CHKREF(YLsymG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_env_binding_value_setter_23 = YPmet(FUNCODEREF(fun_env_binding_value_setter_23),CHKREF(lit_33),T98,ENVNUL);
  T102 = BOUNDP(Yast_evalYenv_binding_value_setter);
  if (T102 != YPfalse) {
    T101 = CHKREF(Yast_evalYenv_binding_value_setter);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_env_binding_value_setter_23;
  T100 = CALL2(1,CHKREF(YPdefine_method),T101,T103);
  Yast_evalYenv_binding_value_setter = T100;
  lit_34 = YPPsym((P)"ast-evaluate");
  lit_35 = YPPsym((P)"e");
  T104 = YPsig(YPPlist(1,CHKREF(lit_35)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_ast_evaluate_24 = YPmet(FUNCODEREF(fun_ast_evaluate_24),CHKREF(lit_34),T104,ENVNUL);
  T107 = BOUNDP(YastYast_evaluate);
  if (T107 != YPfalse) {
    T106 = CHKREF(YastYast_evaluate);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_ast_evaluate_24;
  T105 = CALL2(1,CHKREF(YPdefine_method),T106,T108);
  YastYast_evaluate = T105;
  lit_36 = YPPsym((P)"ast-eval");
  T110 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_22)),YPPlist(2,CHKREF(YastYLprogramG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T109 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),CHKREF(lit_36),T110,Ynil,YPfalse);
  Yast_evalYast_eval = T109;
  T111 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_22)),YPPlist(2,CHKREF(YastYLconstantG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_ast_eval_25 = YPmet(FUNCODEREF(fun_ast_eval_25),CHKREF(lit_36),T111,ENVNUL);
  T114 = BOUNDP(Yast_evalYast_eval);
  if (T114 != YPfalse) {
    T113 = CHKREF(Yast_evalYast_eval);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_ast_eval_25;
  T112 = CALL2(1,CHKREF(YPdefine_method),T113,T115);
  Yast_evalYast_eval = T112;
  T116 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_22)),YPPlist(2,CHKREF(YastYLraw_constantG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_ast_eval_26 = YPmet(FUNCODEREF(fun_ast_eval_26),CHKREF(lit_36),T116,ENVNUL);
  T119 = BOUNDP(Yast_evalYast_eval);
  if (T119 != YPfalse) {
    T118 = CHKREF(Yast_evalYast_eval);
  } else {
    T118 = YPfalse;
  }
  T120 = fun_ast_eval_26;
  T117 = CALL2(1,CHKREF(YPdefine_method),T118,T120);
  Yast_evalYast_eval = T117;
  lit_37 = YPPsym((P)"ee");
  T121 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_37)),YPPlist(2,CHKREF(YastYLcompile_timeG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_ast_eval_27 = YPmet(FUNCODEREF(fun_ast_eval_27),CHKREF(lit_36),T121,ENVNUL);
  T124 = BOUNDP(Yast_evalYast_eval);
  if (T124 != YPfalse) {
    T123 = CHKREF(Yast_evalYast_eval);
  } else {
    T123 = YPfalse;
  }
  T125 = fun_ast_eval_27;
  T122 = CALL2(1,CHKREF(YPdefine_method),T123,T125);
  Yast_evalYast_eval = T122;
  lit_38 = YPPsym((P)"ast-eval-specs");
  lit_39 = YPPsym((P)"specs");
  lit_40 = YPPsym((P)"nary?");
  lit_41 = YPPsym((P)"res");
  T127 = YPsig(YPPlist(3,CHKREF(lit_41),CHKREF(lit_39),CHKREF(lit_27)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_loop_28 = YPmet(FUNCODEREF(fun_loop_28),CHKREF(lit_32),T127,ENVNUL);
  T126 = YPsig(YPPlist(3,CHKREF(lit_39),CHKREF(lit_40),CHKREF(lit_22)),YPPlist(3,CHKREF(YLlstG),CHKREF(YLlogG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_ast_eval_specs_29 = YPmet(FUNCODEREF(fun_ast_eval_specs_29),CHKREF(lit_38),T126,ENVNUL);
  T130 = BOUNDP(Yast_evalYast_eval_specs);
  if (T130 != YPfalse) {
    T129 = CHKREF(Yast_evalYast_eval_specs);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_ast_eval_specs_29;
  T128 = CALL2(1,CHKREF(YPdefine_method),T129,T131);
  Yast_evalYast_eval_specs = T128;
  T132 = CALL2(1,CHKREF(YruntimeYfab),CHKREF(YruntimeYLbufG),YPint((P)0));
  Yast_evalYTstackT = T132;
  lit_42 = YPPsym((P)"exp");
  lit_43 = YPPsym((P)"return");
  lit_44 = YPPsym((P)"x-1288");
  lit_45 = YPPsym((P)"msg");
  lit_46 = YPPsym((P)"ifun");
  lit_47 = YPsb((P)"Match Pattern Failure");
  lit_48 = YPPsym((P)"fun");
  lit_49 = YPPsym((P)"...");
  lit_50 = YPPsym((P)"let");
  lit_51 = YPPsym((P)"nms");
  lit_52 = YPPsym((P)"%next-methods");
  lit_53 = YPPsym((P)"frame");
  lit_54 = YPPsym((P)"cat2");
  lit_55 = YPPsym((P)"lst");
  lit_56 = YPPsym((P)"quote");
  lit_57 = YPPsym((P)"as");
  lit_58 = YPPsym((P)"<lst>");
  T135 = YPsig(YPPlist(2,CHKREF(lit_45),CHKREF(lit_25)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1288_30 = YPmet(FUNCODEREF(fun_x_1288_30),CHKREF(lit_44),T135,ENVNUL);
  T134 = YPsig(YPPlist(1,CHKREF(lit_43)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T134,ENVNUL);
  T133 = YPsig(YPPlist(1,CHKREF(lit_42)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T133,ENVNUL);
  T136 = fun_32;
  YPmacro(YPPsym((P)"ast-eval"),YPPsym((P)"ifun"),T136);
  lit_59 = YPPsym((P)"as-fun-name");
  T137 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_as_fun_name_33 = YPmet(FUNCODEREF(fun_as_fun_name_33),CHKREF(lit_59),T137,ENVNUL);
  T140 = BOUNDP(Yast_evalYas_fun_name);
  if (T140 != YPfalse) {
    T139 = CHKREF(Yast_evalYas_fun_name);
  } else {
    T139 = YPfalse;
  }
  T141 = fun_as_fun_name_33;
  T138 = CALL2(1,CHKREF(YPdefine_method),T139,T141);
  Yast_evalYas_fun_name = T138;
  T142 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YastYLast_functionG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_as_fun_name_34 = YPmet(FUNCODEREF(fun_as_fun_name_34),CHKREF(lit_59),T142,ENVNUL);
  T145 = BOUNDP(Yast_evalYas_fun_name);
  if (T145 != YPfalse) {
    T144 = CHKREF(Yast_evalYas_fun_name);
  } else {
    T144 = YPfalse;
  }
  T146 = fun_as_fun_name_34;
  T143 = CALL2(1,CHKREF(YPdefine_method),T144,T146);
  Yast_evalYas_fun_name = T143;
  T147 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YastYLmodule_bindingG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_as_fun_name_35 = YPmet(FUNCODEREF(fun_as_fun_name_35),CHKREF(lit_59),T147,ENVNUL);
  T150 = BOUNDP(Yast_evalYas_fun_name);
  if (T150 != YPfalse) {
    T149 = CHKREF(Yast_evalYas_fun_name);
  } else {
    T149 = YPfalse;
  }
  T151 = fun_as_fun_name_35;
  T148 = CALL2(1,CHKREF(YPdefine_method),T149,T151);
  Yast_evalYas_fun_name = T148;
  T152 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YastYLconstantG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_as_fun_name_36 = YPmet(FUNCODEREF(fun_as_fun_name_36),CHKREF(lit_59),T152,ENVNUL);
  T155 = BOUNDP(Yast_evalYas_fun_name);
  if (T155 != YPfalse) {
    T154 = CHKREF(Yast_evalYas_fun_name);
  } else {
    T154 = YPfalse;
  }
  T156 = fun_as_fun_name_36;
  T153 = CALL2(1,CHKREF(YPdefine_method),T154,T156);
  Yast_evalYas_fun_name = T153;
  T157 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLsymG)),YPfalse,YPint((P)1),CHKREF(YLsymG),Ynil);
  fun_as_fun_name_37 = YPmet(FUNCODEREF(fun_as_fun_name_37),CHKREF(lit_59),T157,ENVNUL);
  T160 = BOUNDP(Yast_evalYas_fun_name);
  if (T160 != YPfalse) {
    T159 = CHKREF(Yast_evalYas_fun_name);
  } else {
    T159 = YPfalse;
  }
  T161 = fun_as_fun_name_37;
  T158 = CALL2(1,CHKREF(YPdefine_method),T159,T161);
  Yast_evalYas_fun_name = T158;
  T162 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_as_fun_name_38 = YPmet(FUNCODEREF(fun_as_fun_name_38),CHKREF(lit_59),T162,ENVNUL);
  T165 = BOUNDP(Yast_evalYas_fun_name);
  if (T165 != YPfalse) {
    T164 = CHKREF(Yast_evalYas_fun_name);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_as_fun_name_38;
  T163 = CALL2(1,CHKREF(YPdefine_method),T164,T166);
  Yast_evalYas_fun_name = T163;
  lit_60 = YPPsym((P)"export-proto-method");
  lit_61 = YPPsym((P)"f");
  lit_62 = YPPsym((P)"body");
  T168 = YPsig(YPPlist(1,CHKREF(lit_25)),Ynil,YPtrue,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T168,ENVNUL);
  T167 = YPsig(YPPlist(7,CHKREF(lit_61),CHKREF(lit_24),CHKREF(lit_39),CHKREF(lit_40),CHKREF(lit_4),CHKREF(lit_62),CHKREF(lit_22)),YPPlist(7,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)7),CHKREF(YLanyG),Ynil);
  fun_export_proto_method_40 = YPmet(FUNCODEREF(fun_export_proto_method_40),CHKREF(lit_60),T167,ENVNUL);
  T171 = BOUNDP(Yast_evalYexport_proto_method);
  if (T171 != YPfalse) {
    T170 = CHKREF(Yast_evalYexport_proto_method);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_export_proto_method_40;
  T169 = CALL2(1,CHKREF(YPdefine_method),T170,T172);
  Yast_evalYexport_proto_method = T169;
  T174 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T174,ENVNUL);
  T173 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_22)),YPPlist(2,CHKREF(YastYLast_methodG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_ast_eval_42 = YPmet(FUNCODEREF(fun_ast_eval_42),CHKREF(lit_36),T173,ENVNUL);
  T177 = BOUNDP(Yast_evalYast_eval);
  if (T177 != YPfalse) {
    T176 = CHKREF(Yast_evalYast_eval);
  } else {
    T176 = YPfalse;
  }
  T178 = fun_ast_eval_42;
  T175 = CALL2(1,CHKREF(YPdefine_method),T176,T178);
  Yast_evalYast_eval = T175;
  T179 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_22)),YPPlist(2,CHKREF(YastYLast_genericG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_ast_eval_43 = YPmet(FUNCODEREF(fun_ast_eval_43),CHKREF(lit_36),T179,ENVNUL);
  T182 = BOUNDP(Yast_evalYast_eval);
  if (T182 != YPfalse) {
    T181 = CHKREF(Yast_evalYast_eval);
  } else {
    T181 = YPfalse;
  }
  T183 = fun_ast_eval_43;
  T180 = CALL2(1,CHKREF(YPdefine_method),T181,T183);
  Yast_evalYast_eval = T180;
  lit_63 = YPPsym((P)"env-local-reference-value");
  lit_64 = YPPsym((P)"ref");
  T184 = YPsig(YPPlist(2,CHKREF(lit_22),CHKREF(lit_64)),YPPlist(2,CHKREF(Yast_evalYLloc_envG),CHKREF(YastYLlocal_referenceG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_env_local_reference_value_44 = YPmet(FUNCODEREF(fun_env_local_reference_value_44),CHKREF(lit_63),T184,ENVNUL);
  T187 = BOUNDP(Yast_evalYenv_local_reference_value);
  if (T187 != YPfalse) {
    T186 = CHKREF(Yast_evalYenv_local_reference_value);
  } else {
    T186 = YPfalse;
  }
  T188 = fun_env_local_reference_value_44;
  T185 = CALL2(1,CHKREF(YPdefine_method),T186,T188);
  Yast_evalYenv_local_reference_value = T185;
  lit_65 = YPPsym((P)"env-local-reference-value-setter");
  lit_66 = YPPsym((P)"val");
  T189 = YPsig(YPPlist(3,CHKREF(lit_66),CHKREF(lit_22),CHKREF(lit_64)),YPPlist(3,CHKREF(YLanyG),CHKREF(Yast_evalYLloc_envG),CHKREF(YastYLlocal_referenceG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_env_local_reference_value_setter_45 = YPmet(FUNCODEREF(fun_env_local_reference_value_setter_45),CHKREF(lit_65),T189,ENVNUL);
  T192 = BOUNDP(Yast_evalYenv_local_reference_value_setter);
  if (T192 != YPfalse) {
    T191 = CHKREF(Yast_evalYenv_local_reference_value_setter);
  } else {
    T191 = YPfalse;
  }
  T193 = fun_env_local_reference_value_setter_45;
  T190 = CALL2(1,CHKREF(YPdefine_method),T191,T193);
  Yast_evalYenv_local_reference_value_setter = T190;
  T194 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_22)),YPPlist(2,CHKREF(YastYLlocal_referenceG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_ast_eval_46 = YPmet(FUNCODEREF(fun_ast_eval_46),CHKREF(lit_36),T194,ENVNUL);
  T197 = BOUNDP(Yast_evalYast_eval);
  if (T197 != YPfalse) {
    T196 = CHKREF(Yast_evalYast_eval);
  } else {
    T196 = YPfalse;
  }
  T198 = fun_ast_eval_46;
  T195 = CALL2(1,CHKREF(YPdefine_method),T196,T198);
  Yast_evalYast_eval = T195;
  T199 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_22)),YPPlist(2,CHKREF(YastYLglobal_referenceG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_ast_eval_47 = YPmet(FUNCODEREF(fun_ast_eval_47),CHKREF(lit_36),T199,ENVNUL);
  T202 = BOUNDP(Yast_evalYast_eval);
  if (T202 != YPfalse) {
    T201 = CHKREF(Yast_evalYast_eval);
  } else {
    T201 = YPfalse;
  }
  T203 = fun_ast_eval_47;
  T200 = CALL2(1,CHKREF(YPdefine_method),T201,T203);
  Yast_evalYast_eval = T200;
  T204 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_22)),YPPlist(2,CHKREF(YastYLruntime_referenceG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_ast_eval_48 = YPmet(FUNCODEREF(fun_ast_eval_48),CHKREF(lit_36),T204,ENVNUL);
  T207 = BOUNDP(Yast_evalYast_eval);
  if (T207 != YPfalse) {
    T206 = CHKREF(Yast_evalYast_eval);
  } else {
    T206 = YPfalse;
  }
  T208 = fun_ast_eval_48;
  T205 = CALL2(1,CHKREF(YPdefine_method),T206,T208);
  Yast_evalYast_eval = T205;
  T209 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_22)),YPPlist(2,CHKREF(YastYLboundQG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_ast_eval_49 = YPmet(FUNCODEREF(fun_ast_eval_49),CHKREF(lit_36),T209,ENVNUL);
  T212 = BOUNDP(Yast_evalYast_eval);
  if (T212 != YPfalse) {
    T211 = CHKREF(Yast_evalYast_eval);
  } else {
    T211 = YPfalse;
  }
  T213 = fun_ast_eval_49;
  T210 = CALL2(1,CHKREF(YPdefine_method),T211,T213);
  Yast_evalYast_eval = T210;
  lit_67 = YPPsym((P)"ast-eval-bound?");
  lit_68 = YPPsym((P)"binding");
  lit_69 = YPPsym((P)"global");
  T214 = YPsig(YPPlist(3,CHKREF(lit_35),CHKREF(lit_68),CHKREF(lit_22)),YPPlist(3,CHKREF(YastYLboundQG),CHKREF(YastYLmodule_bindingG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_ast_eval_boundQ_50 = YPmet(FUNCODEREF(fun_ast_eval_boundQ_50),CHKREF(lit_67),T214,ENVNUL);
  T217 = BOUNDP(Yast_evalYast_eval_boundQ);
  if (T217 != YPfalse) {
    T216 = CHKREF(Yast_evalYast_eval_boundQ);
  } else {
    T216 = YPfalse;
  }
  T218 = fun_ast_eval_boundQ_50;
  T215 = CALL2(1,CHKREF(YPdefine_method),T216,T218);
  Yast_evalYast_eval_boundQ = T215;
  T219 = YPsig(YPPlist(3,CHKREF(lit_35),CHKREF(lit_68),CHKREF(lit_22)),YPPlist(3,CHKREF(YastYLboundQG),CHKREF(YastYLlocal_bindingG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_ast_eval_boundQ_51 = YPmet(FUNCODEREF(fun_ast_eval_boundQ_51),CHKREF(lit_67),T219,ENVNUL);
  T222 = BOUNDP(Yast_evalYast_eval_boundQ);
  if (T222 != YPfalse) {
    T221 = CHKREF(Yast_evalYast_eval_boundQ);
  } else {
    T221 = YPfalse;
  }
  T223 = fun_ast_eval_boundQ_51;
  T220 = CALL2(1,CHKREF(YPdefine_method),T221,T223);
  Yast_evalYast_eval_boundQ = T220;
  T224 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_22)),YPPlist(2,CHKREF(YastYLglobal_assignmentG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_ast_eval_52 = YPmet(FUNCODEREF(fun_ast_eval_52),CHKREF(lit_36),T224,ENVNUL);
  T227 = BOUNDP(Yast_evalYast_eval);
  if (T227 != YPfalse) {
    T226 = CHKREF(Yast_evalYast_eval);
  } else {
    T226 = YPfalse;
  }
  T228 = fun_ast_eval_52;
  T225 = CALL2(1,CHKREF(YPdefine_method),T226,T228);
  Yast_evalYast_eval = T225;
  T229 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_22)),YPPlist(2,CHKREF(YastYLast_macro_definitionG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_ast_eval_53 = YPmet(FUNCODEREF(fun_ast_eval_53),CHKREF(lit_36),T229,ENVNUL);
  T232 = BOUNDP(Yast_evalYast_eval);
  if (T232 != YPfalse) {
    T231 = CHKREF(Yast_evalYast_eval);
  } else {
    T231 = YPfalse;
  }
  T233 = fun_ast_eval_53;
  T230 = CALL2(1,CHKREF(YPdefine_method),T231,T233);
  Yast_evalYast_eval = T230;
  T234 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_22)),YPPlist(2,CHKREF(YastYLruntime_assignmentG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_ast_eval_54 = YPmet(FUNCODEREF(fun_ast_eval_54),CHKREF(lit_36),T234,ENVNUL);
  T237 = BOUNDP(Yast_evalYast_eval);
  if (T237 != YPfalse) {
    T236 = CHKREF(Yast_evalYast_eval);
  } else {
    T236 = YPfalse;
  }
  T238 = fun_ast_eval_54;
  T235 = CALL2(1,CHKREF(YPdefine_method),T236,T238);
  Yast_evalYast_eval = T235;
  T239 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_22)),YPPlist(2,CHKREF(YastYLlocal_assignmentG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_ast_eval_55 = YPmet(FUNCODEREF(fun_ast_eval_55),CHKREF(lit_36),T239,ENVNUL);
  T242 = BOUNDP(Yast_evalYast_eval);
  if (T242 != YPfalse) {
    T241 = CHKREF(Yast_evalYast_eval);
  } else {
    T241 = YPfalse;
  }
  T243 = fun_ast_eval_55;
  T240 = CALL2(1,CHKREF(YPdefine_method),T241,T243);
  Yast_evalYast_eval = T240;
  lit_70 = YPPsym((P)"env-define-binding!");
  lit_71 = YPPsym((P)"runtime");
  lit_72 = YPsb((P)"Defining invalid binding kind %=");
  T244 = YPsig(YPPlist(2,CHKREF(lit_1),CHKREF(lit_9)),YPPlist(2,CHKREF(YastYLmodule_bindingG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_env_define_bindingX_56 = YPmet(FUNCODEREF(fun_env_define_bindingX_56),CHKREF(lit_70),T244,ENVNUL);
  T247 = BOUNDP(Yast_evalYenv_define_bindingX);
  if (T247 != YPfalse) {
    T246 = CHKREF(Yast_evalYenv_define_bindingX);
  } else {
    T246 = YPfalse;
  }
  T248 = fun_env_define_bindingX_56;
  T245 = CALL2(1,CHKREF(YPdefine_method),T246,T248);
  Yast_evalYenv_define_bindingX = T245;
  T249 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_22)),YPPlist(2,CHKREF(YastYLdefinitionG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_ast_eval_57 = YPmet(FUNCODEREF(fun_ast_eval_57),CHKREF(lit_36),T249,ENVNUL);
  T252 = BOUNDP(Yast_evalYast_eval);
  if (T252 != YPfalse) {
    T251 = CHKREF(Yast_evalYast_eval);
  } else {
    T251 = YPfalse;
  }
  T253 = fun_ast_eval_57;
  T250 = CALL2(1,CHKREF(YPdefine_method),T251,T253);
  Yast_evalYast_eval = T250;
  T254 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_22)),YPPlist(2,CHKREF(YastYLalternativeG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_ast_eval_58 = YPmet(FUNCODEREF(fun_ast_eval_58),CHKREF(lit_36),T254,ENVNUL);
  T257 = BOUNDP(Yast_evalYast_eval);
  if (T257 != YPfalse) {
    T256 = CHKREF(Yast_evalYast_eval);
  } else {
    T256 = YPfalse;
  }
  T258 = fun_ast_eval_58;
  T255 = CALL2(1,CHKREF(YPdefine_method),T256,T258);
  Yast_evalYast_eval = T255;
  lit_73 = YPPsym((P)"eval");
  T260 = YPsig(YPPlist(1,CHKREF(lit_35)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_eval_59 = YPmet(FUNCODEREF(fun_eval_59),CHKREF(lit_73),T260,ENVNUL);
  T259 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_22)),YPPlist(2,CHKREF(YastYLsequentialG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_ast_eval_60 = YPmet(FUNCODEREF(fun_ast_eval_60),CHKREF(lit_36),T259,ENVNUL);
  T263 = BOUNDP(Yast_evalYast_eval);
  if (T263 != YPfalse) {
    T262 = CHKREF(Yast_evalYast_eval);
  } else {
    T262 = YPfalse;
  }
  T264 = fun_ast_eval_60;
  T261 = CALL2(1,CHKREF(YPdefine_method),T262,T264);
  Yast_evalYast_eval = T261;
  T266 = YPsig(YPPlist(2,CHKREF(lit_41),CHKREF(lit_25)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_eval_61 = YPmet(FUNCODEREF(fun_eval_61),CHKREF(lit_73),T266,ENVNUL);
  T265 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_22)),YPPlist(2,CHKREF(YastYLargumentsG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_ast_eval_62 = YPmet(FUNCODEREF(fun_ast_eval_62),CHKREF(lit_36),T265,ENVNUL);
  T269 = BOUNDP(Yast_evalYast_eval);
  if (T269 != YPfalse) {
    T268 = CHKREF(Yast_evalYast_eval);
  } else {
    T268 = YPfalse;
  }
  T270 = fun_ast_eval_62;
  T267 = CALL2(1,CHKREF(YPdefine_method),T268,T270);
  Yast_evalYast_eval = T267;
  T271 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_22)),YPPlist(2,CHKREF(YastYLregular_applicationG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_ast_eval_63 = YPmet(FUNCODEREF(fun_ast_eval_63),CHKREF(lit_36),T271,ENVNUL);
  T274 = BOUNDP(Yast_evalYast_eval);
  if (T274 != YPfalse) {
    T273 = CHKREF(Yast_evalYast_eval);
  } else {
    T273 = YPfalse;
  }
  T275 = fun_ast_eval_63;
  T272 = CALL2(1,CHKREF(YPdefine_method),T273,T275);
  Yast_evalYast_eval = T272;
  T278 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_22)),YPPlist(2,CHKREF(YastYLpredefined_applicationG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T277 = fun_ast_eval_64 = YPmet(FUNCODEREF(fun_ast_eval_64),CHKREF(lit_36),T278,ENVNUL);
  T282 = BOUNDP(Yast_evalYast_eval);
  if (T282 != YPfalse) {
    T281 = CHKREF(Yast_evalYast_eval);
  } else {
    T281 = YPfalse;
  }
  T283 = fun_ast_eval_64;
  T280 = CALL2(1,CHKREF(YPdefine_method),T281,T283);
  T279 = Yast_evalYast_eval = T280;
  T276 = T279;
  return T276;
}

P Yast_evalY___main_1___() {
  P T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
loop:
  T0 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_22)),YPPlist(2,CHKREF(YastYLfix_letG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_ast_eval_65 = YPmet(FUNCODEREF(fun_ast_eval_65),CHKREF(lit_36),T0,ENVNUL);
  T3 = BOUNDP(Yast_evalYast_eval);
  if (T3 != YPfalse) {
    T2 = CHKREF(Yast_evalYast_eval);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_ast_eval_65;
  T1 = CALL2(1,CHKREF(YPdefine_method),T2,T4);
  Yast_evalYast_eval = T1;
  T6 = YPsig(YPPlist(2,CHKREF(lit_31),CHKREF(lit_4)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_66 = YPmet(FUNCODEREF(fun_66),YPfalse,T6,ENVNUL);
  T5 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_22)),YPPlist(2,CHKREF(YastYLlocalsG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_ast_eval_67 = YPmet(FUNCODEREF(fun_ast_eval_67),CHKREF(lit_36),T5,ENVNUL);
  T9 = BOUNDP(Yast_evalYast_eval);
  if (T9 != YPfalse) {
    T8 = CHKREF(Yast_evalYast_eval);
  } else {
    T8 = YPfalse;
  }
  T10 = fun_ast_eval_67;
  T7 = CALL2(1,CHKREF(YPdefine_method),T8,T10);
  Yast_evalYast_eval = T7;
  T13 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_68 = YPmet(FUNCODEREF(fun_68),YPfalse,T13,ENVNUL);
  T12 = YPsig(YPPlist(1,CHKREF(lit_43)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T12,ENVNUL);
  T11 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_22)),YPPlist(2,CHKREF(YastYLbind_exitG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_ast_eval_70 = YPmet(FUNCODEREF(fun_ast_eval_70),CHKREF(lit_36),T11,ENVNUL);
  T16 = BOUNDP(Yast_evalYast_eval);
  if (T16 != YPfalse) {
    T15 = CHKREF(Yast_evalYast_eval);
  } else {
    T15 = YPfalse;
  }
  T17 = fun_ast_eval_70;
  T14 = CALL2(1,CHKREF(YPdefine_method),T15,T17);
  Yast_evalYast_eval = T14;
  T20 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T20,ENVNUL);
  T19 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T19,ENVNUL);
  T18 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_22)),YPPlist(2,CHKREF(YastYLunwind_protectG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_ast_eval_73 = YPmet(FUNCODEREF(fun_ast_eval_73),CHKREF(lit_36),T18,ENVNUL);
  T23 = BOUNDP(Yast_evalYast_eval);
  if (T23 != YPfalse) {
    T22 = CHKREF(Yast_evalYast_eval);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_ast_eval_73;
  T21 = CALL2(1,CHKREF(YPdefine_method),T22,T24);
  Yast_evalYast_eval = T21;
  T25 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_22)),YPPlist(2,CHKREF(YastYLmonitorG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_ast_eval_74 = YPmet(FUNCODEREF(fun_ast_eval_74),CHKREF(lit_36),T25,ENVNUL);
  T28 = BOUNDP(Yast_evalYast_eval);
  if (T28 != YPfalse) {
    T27 = CHKREF(Yast_evalYast_eval);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_ast_eval_74;
  T26 = CALL2(1,CHKREF(YPdefine_method),T27,T29);
  Yast_evalYast_eval = T26;
  lit_74 = YPPsym((P)"init-environment-for-eval");
  lit_75 = YPPsym((P)"predefined");
  lit_76 = YPPsym((P)"%pair");
  T30 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  YastYinit_environment_for_eval = YPmet(FUNCODEREF(YastYinit_environment_for_eval),CHKREF(lit_74),T30,ENVNUL);
  T31 = YastYinit_environment_for_eval;
  YastYinit_environment_for_eval = T31;
  T32 = YPfalse;
  return T32;
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
  {"binding-dynamic-extent?-setter", &module_info_ast, "binding-dynamic-extent?-setter"},
  {"add", &module_info_runtime, "add"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"add!", &module_info_runtime, "add!"},
  {"flo-bits", &module_info_runtime, "flo-bits"},
  {"<global-assignment>", &module_info_ast, "<global-assignment>"},
  {"lsh", &module_info_runtime, "lsh"},
  {"fab-map", &module_info_runtime, "fab-map"},
  {"case", &module_info_macros, "case"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"max", &module_info_runtime, "max"},
  {"<computed-program>", &module_info_ast, "<computed-program>"},
  {"open-output-file", &module_info_runtime, "open-output-file"},
  {"set", &module_info_boot, "set"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"%slot", &module_info_boot, "%slot"},
  {"reference-frame-number", &module_info_ast, "reference-frame-number"},
  {"*", &module_info_runtime, "*"},
  {"locative-value", &module_info_runtime, "locative-value"},
  {"<ast-function>", &module_info_ast, "<ast-function>"},
  {"export", &module_info_boot, "export"},
  {"table-growth-threshold", &module_info_runtime, "table-growth-threshold"},
  {"abs", &module_info_runtime, "abs"},
  {"<log>", &module_info_boot, "<log>"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"truncate/", &module_info_runtime, "truncate/"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"address-of", &module_info_runtime, "address-of"},
  {"from-above", &module_info_runtime, "from-above"},
  {"fix-let-body", &module_info_ast, "fix-let-body"},
  {"%f*", &module_info_boot, "%f*"},
  {"bound?-reference", &module_info_ast, "bound?-reference"},
  {"<file-output-port>", &module_info_runtime, "<file-output-port>"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"table-protocol", &module_info_runtime, "table-protocol"},
  {"locals-functions", &module_info_ast, "locals-functions"},
  {"binding-native-to?", &module_info_ast, "binding-native-to?"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"fix-let-types-setter", &module_info_ast, "fix-let-types-setter"},
  {"monitor-info", &module_info_ast, "monitor-info"},
  {"%i-", &module_info_boot, "%i-"},
  {"pos", &module_info_runtime, "pos"},
  {"application-tail?", &module_info_ast, "application-tail?"},
  {"bind-exit-main-fun", &module_info_ast, "bind-exit-main-fun"},
  {"dec", &module_info_macros, "dec"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"<file-port>", &module_info_runtime, "<file-port>"},
  {"assoc", &module_info_runtime, "assoc"},
  {"collect", &module_info_macros, "collect"},
  {"default", &module_info_runtime, "default"},
  {"global-box-value", &module_info_ast, "global-box-value"},
  {"floor", &module_info_runtime, "floor"},
  {"<module-binding>", &module_info_ast, "<module-binding>"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"when", &module_info_macros, "when"},
  {"empty", &module_info_runtime, "empty"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"not", &module_info_boot, "not"},
  {"modulo", &module_info_runtime, "modulo"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"<any>", &module_info_boot, "<any>"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"<assocs>", &module_info_runtime, "<assocs>"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"from", &module_info_runtime, "from"},
  {"<incongruent-method-error>", &module_info_runtime, "<incongruent-method-error>"},
  {"module-syntax-environment", &module_info_ast, "module-syntax-environment"},
  {"<ast-macro-definition>", &module_info_ast, "<ast-macro-definition>"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"<union>", &module_info_boot, "<union>"},
  {"init-environment-for-eval", &module_info_ast, "init-environment-for-eval"},
  {"find-key", &module_info_runtime, "find-key"},
  {"reduce+", &module_info_runtime, "reduce+"},
  {"out", &module_info_runtime, "out"},
  {"error", &module_info_boot, "error"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"apply", &module_info_macros, "apply"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"map", &module_info_macros, "map"},
  {"elt-or", &module_info_runtime, "elt-or"},
  {"<unwind-protect>", &module_info_ast, "<unwind-protect>"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"elt", &module_info_runtime, "elt"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"<ast-generic>", &module_info_ast, "<ast-generic>"},
  {"<=", &module_info_runtime, "<="},
  {"%fb", &module_info_boot, "%fb"},
  {"module-target-environment", &module_info_ast, "module-target-environment"},
  {"elt-setter", &module_info_runtime, "elt-setter"},
  {"remainder", &module_info_runtime, "remainder"},
  {"assocs-test", &module_info_runtime, "assocs-test"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"ast-evaluate", &module_info_ast, "ast-evaluate"},
  {"alternative-alternant", &module_info_ast, "alternative-alternant"},
  {"nul?", &module_info_runtime, "nul?"},
  {"<reference>", &module_info_ast, "<reference>"},
  {"port-index", &module_info_runtime, "port-index"},
  {"char->ascii", &module_info_runtime, "char->ascii"},
  {"signature-specs", &module_info_ast, "signature-specs"},
  {"build-condition-interactively", &module_info_runtime, "build-condition-interactively"},
  {"quote", &module_info_boot, "quote"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"%f/", &module_info_boot, "%f/"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"map2", &module_info_runtime, "map2"},
  {"logior", &module_info_runtime, "logior"},
  {"fun", &module_info_boot, "fun"},
  {"<ast-signature>", &module_info_ast, "<ast-signature>"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"lowercase?", &module_info_runtime, "lowercase?"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"fix-let-bindings", &module_info_ast, "fix-let-bindings"},
  {"%i&", &module_info_boot, "%i&"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"%with-monitor", &module_info_runtime, "%with-monitor"},
  {"locals-body-setter", &module_info_ast, "locals-body-setter"},
  {"%i=", &module_info_boot, "%i="},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"load-module", &module_info_ast, "load-module"},
  {"call-with-output-file", &module_info_runtime, "call-with-output-file"},
  {"~=", &module_info_runtime, "~="},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"dg", &module_info_boot, "dg"},
  {"<str-tab>", &module_info_runtime, "<str-tab>"},
  {"1st", &module_info_runtime, "1st"},
  {"signature-bindings-setter", &module_info_ast, "signature-bindings-setter"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"binding-locative", &module_info_ast, "binding-locative"},
  {"def-programs", &module_info_ast, "def-programs"},
  {"%ft", &module_info_boot, "%ft"},
  {"application-function", &module_info_ast, "application-function"},
  {"tail", &module_info_boot, "tail"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"pos?", &module_info_runtime, "pos?"},
  {"<tab>", &module_info_runtime, "<tab>"},
  {"logxor", &module_info_runtime, "logxor"},
  {"function-binding", &module_info_ast, "function-binding"},
  {"binding-name", &module_info_ast, "binding-name"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"==", &module_info_macros, "=="},
  {"reduce", &module_info_runtime, "reduce"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"<file-input-port>", &module_info_runtime, "<file-input-port>"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"opf", &module_info_macros, "opf"},
  {"port-contents", &module_info_runtime, "port-contents"},
  {"program-register-setter", &module_info_ast, "program-register-setter"},
  {"newline", &module_info_runtime, "newline"},
  {"<string-output-port>", &module_info_runtime, "<string-output-port>"},
  {"false-or", &module_info_runtime, "false-or"},
  {"%i?", &module_info_boot, "%i?"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"<binding>", &module_info_ast, "<binding>"},
  {"%i*", &module_info_boot, "%i*"},
  {"napply", &module_info_macros, "napply"},
  {"<compile-time>", &module_info_ast, "<compile-time>"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"%untag", &module_info_boot, "%untag"},
  {"%su", &module_info_boot, "%su"},
  {"id-hash", &module_info_runtime, "id-hash"},
  {"assignment-binding", &module_info_ast, "assignment-binding"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"logand", &module_info_runtime, "logand"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"compile-time-program", &module_info_ast, "compile-time-program"},
  {"<predefined-application>", &module_info_ast, "<predefined-application>"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"read", &module_info_runtime, "read"},
  {"sequentialize", &module_info_ast, "sequentialize"},
  {"%vec", &module_info_boot, "%vec"},
  {"<module>", &module_info_ast, "<module>"},
  {"<string-input-port>", &module_info_runtime, "<string-input-port>"},
  {"<passive-program>", &module_info_ast, "<passive-program>"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"fix-let-arguments", &module_info_ast, "fix-let-arguments"},
  {"as", &module_info_runtime, "as"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"current-gc-state", &module_info_runtime, "current-gc-state"},
  {"%velt", &module_info_boot, "%velt"},
  {"pick", &module_info_runtime, "pick"},
  {"if", &module_info_boot, "if"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"<sequential>", &module_info_ast, "<sequential>"},
  {"%c<", &module_info_boot, "%c<"},
  {"t<", &module_info_runtime, "t<"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"init-ast", &module_info_ast, "init-ast"},
  {"lognot", &module_info_runtime, "lognot"},
  {"reference-called-function?-setter", &module_info_ast, "reference-called-function?-setter"},
  {"force-output", &module_info_runtime, "force-output"},
  {"<bind-exit>", &module_info_ast, "<bind-exit>"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"<input-port>", &module_info_runtime, "<input-port>"},
  {"*print-base*", &module_info_runtime, "*print-base*"},
  {"del-dups", &module_info_runtime, "del-dups"},
  {"fix-let-bindings-setter", &module_info_ast, "fix-let-bindings-setter"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"ceiling", &module_info_runtime, "ceiling"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"%pair", &module_info_boot, "%pair"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"case-insensitive-string-equal", &module_info_runtime, "case-insensitive-string-equal"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"reference-binding", &module_info_ast, "reference-binding"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"do-module-loader-modules", &module_info_ast, "do-module-loader-modules"},
  {"remove-modules-by-name!", &module_info_ast, "remove-modules-by-name!"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"<buf>", &module_info_runtime, "<buf>"},
  {"free-implemented-foreign-bindings", &module_info_ast, "free-implemented-foreign-bindings"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"push", &module_info_runtime, "push"},
  {"objectify", &module_info_ast, "objectify"},
  {"<fix-let>", &module_info_ast, "<fix-let>"},
  {"binding-global-box-setter", &module_info_ast, "binding-global-box-setter"},
  {"eof-object", &module_info_runtime, "eof-object"},
  {"function-debug-name-setter", &module_info_ast, "function-debug-name-setter"},
  {"$proto-runtime-module-name", &module_info_ast, "$proto-runtime-module-name"},
  {"build-condition-for-handler-interactively", &module_info_runtime, "build-condition-for-handler-interactively"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"class-name", &module_info_boot, "class-name"},
  {"application-known?", &module_info_ast, "application-known?"},
  {"signature-bindings", &module_info_ast, "signature-bindings"},
  {"isa?", &module_info_boot, "isa?"},
  {"dss", &module_info_boot, "dss"},
  {"select", &module_info_macros, "select"},
  {"t=", &module_info_runtime, "t="},
  {"use", &module_info_boot, "use"},
  {"map-keyed", &module_info_runtime, "map-keyed"},
  {"isa", &module_info_boot, "isa"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"write-char", &module_info_runtime, "write-char"},
  {"invoke-handler-interactively", &module_info_runtime, "invoke-handler-interactively"},
  {"<type>", &module_info_boot, "<type>"},
  {"monitor-handler", &module_info_ast, "monitor-handler"},
  {"nxt-state", &module_info_runtime, "nxt-state"},
  {"<class>", &module_info_boot, "<class>"},
  {"uppercase?", &module_info_runtime, "uppercase?"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"let", &module_info_boot, "let"},
  {"pushf", &module_info_macros, "pushf"},
  {"2nd", &module_info_runtime, "2nd"},
  {"fix-let-types", &module_info_ast, "fix-let-types"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"identity", &module_info_runtime, "identity"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"binding-info", &module_info_ast, "binding-info"},
  {"do-keyed", &module_info_runtime, "do-keyed"},
  {"<ast-method>", &module_info_ast, "<ast-method>"},
  {"zero?", &module_info_runtime, "zero?"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"now-key", &module_info_runtime, "now-key"},
  {"fin", &module_info_boot, "fin"},
  {"<raw-constant>", &module_info_ast, "<raw-constant>"},
  {"binding-kind", &module_info_ast, "binding-kind"},
  {"mem?", &module_info_runtime, "mem?"},
  {"binding-value", &module_info_ast, "binding-value"},
  {"$proto-boot-module-name", &module_info_ast, "$proto-boot-module-name"},
  {">=", &module_info_runtime, ">="},
  {"=", &module_info_runtime, "="},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"from-below", &module_info_runtime, "from-below"},
  {"runtime-environment", &module_info_ast, "runtime-environment"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"t+", &module_info_runtime, "t+"},
  {"<module-loader>", &module_info_ast, "<module-loader>"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"sig", &module_info_runtime, "sig"},
  {"from-below-by", &module_info_runtime, "from-below-by"},
  {"next-method", &module_info_macros, "next-method"},
  {"now-elt", &module_info_runtime, "now-elt"},
  {"del", &module_info_runtime, "del"},
  {"environment-uses-modules", &module_info_ast, "environment-uses-modules"},
  {"alphabetic?", &module_info_runtime, "alphabetic?"},
  {"fix-let-body-setter", &module_info_ast, "fix-let-body-setter"},
  {"case-insensitive-string-hash", &module_info_runtime, "case-insensitive-string-hash"},
  {"all?", &module_info_runtime, "all?"},
  {"<bound?>", &module_info_ast, "<bound?>"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"describe-handler", &module_info_runtime, "describe-handler"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"%cu", &module_info_boot, "%cu"},
  {"<local-reference>", &module_info_ast, "<local-reference>"},
  {"<map>", &module_info_runtime, "<map>"},
  {"do-static-global-bindings", &module_info_ast, "do-static-global-bindings"},
  {"vec", &module_info_runtime, "vec"},
  {"binding-dynamic-extent?", &module_info_ast, "binding-dynamic-extent?"},
  {"call-with-input-file", &module_info_runtime, "call-with-input-file"},
  {"<ast-primitive>", &module_info_ast, "<ast-primitive>"},
  {"%selt", &module_info_boot, "%selt"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"rev!", &module_info_runtime, "rev!"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"function-bindings", &module_info_ast, "function-bindings"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"~==", &module_info_runtime, "~=="},
  {"<global-box>", &module_info_ast, "<global-box>"},
  {"<str>", &module_info_boot, "<str>"},
  {"function-signature", &module_info_ast, "function-signature"},
  {"<program>", &module_info_ast, "<program>"},
  {"sub", &module_info_runtime, "sub"},
  {"<local-binding>", &module_info_ast, "<local-binding>"},
  {"function-value", &module_info_ast, "function-value"},
  {"lst", &module_info_boot, "lst"},
  {"assert", &module_info_macros, "assert"},
  {"find-environment-module", &module_info_ast, "find-environment-module"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"binding-info-setter", &module_info_ast, "binding-info-setter"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"round", &module_info_runtime, "round"},
  {"<constant>", &module_info_ast, "<constant>"},
  {"buf", &module_info_runtime, "buf"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"fin-state?", &module_info_runtime, "fin-state?"},
  {"%lu", &module_info_boot, "%lu"},
  {"pop-last!", &module_info_runtime, "pop-last!"},
  {"reference-called-function?", &module_info_ast, "reference-called-function?"},
  {"<local-assignment>", &module_info_ast, "<local-assignment>"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"%snul", &module_info_boot, "%snul"},
  {"logbit?", &module_info_runtime, "logbit?"},
  {"type-class", &module_info_boot, "type-class"},
  {"always", &module_info_runtime, "always"},
  {"nul", &module_info_boot, "nul"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"len", &module_info_runtime, "len"},
  {"<global-reference>", &module_info_ast, "<global-reference>"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"ini-state", &module_info_runtime, "ini-state"},
  {"dlet", &module_info_macros, "dlet"},
  {"do-named-static-global-bindings", &module_info_ast, "do-named-static-global-bindings"},
  {"collected", &module_info_macros, "collected"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"%lb", &module_info_boot, "%lb"},
  {"signature-value", &module_info_ast, "signature-value"},
  {"or", &module_info_macros, "or"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"list-handlers", &module_info_runtime, "list-handlers"},
  {"even?", &module_info_runtime, "even?"},
  {"probe-module", &module_info_ast, "probe-module"},
  {"function-nary?", &module_info_ast, "function-nary?"},
  {"push-last!", &module_info_runtime, "push-last!"},
  {"low-elt-setter", &module_info_runtime, "low-elt-setter"},
  {"%raw", &module_info_boot, "%raw"},
  {"%i^", &module_info_boot, "%i^"},
  {"char-ready?", &module_info_runtime, "char-ready?"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"<met>", &module_info_boot, "<met>"},
  {"module-name-to-relpath", &module_info_ast, "module-name-to-relpath"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"%process-module", &module_info_boot, "%process-module"},
  {"@<", &module_info_boot, "@<"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"dp", &module_info_boot, "dp"},
  {"var-type", &module_info_macros, "var-type"},
  {"do", &module_info_runtime, "do"},
  {"application-known?-setter", &module_info_ast, "application-known?-setter"},
  {"seq", &module_info_boot, "seq"},
  {"try", &module_info_boot, "try"},
  {"3rd", &module_info_runtime, "3rd"},
  {"open-input-file", &module_info_runtime, "open-input-file"},
  {"assignment-reference", &module_info_ast, "assignment-reference"},
  {"binding-type", &module_info_ast, "binding-type"},
  {"function-body", &module_info_ast, "function-body"},
  {"as-lowercase", &module_info_runtime, "as-lowercase"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"fab", &module_info_runtime, "fab"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"%str", &module_info_boot, "%str"},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"close-output-port", &module_info_runtime, "close-output-port"},
  {"neg?", &module_info_runtime, "neg?"},
  {"%im", &module_info_boot, "%im"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"collecting", &module_info_macros, "collecting"},
  {"binding-dotted?", &module_info_ast, "binding-dotted?"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"set-module-environments", &module_info_ast, "set-module-environments"},
  {"str", &module_info_runtime, "str"},
  {"alternative-consequent", &module_info_ast, "alternative-consequent"},
  {"str-to-num", &module_info_runtime, "str-to-num"},
  {"any?", &module_info_runtime, "any?"},
  {"dm", &module_info_boot, "dm"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"rep", &module_info_boot, "rep"},
  {"call-with-string-output-port", &module_info_runtime, "call-with-string-output-port"},
  {"to-str", &module_info_runtime, "to-str"},
  {"signature-names-setter", &module_info_ast, "signature-names-setter"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"%i+", &module_info_boot, "%i+"},
  {"fill", &module_info_runtime, "fill"},
  {"module-loader-module-type", &module_info_ast, "module-loader-module-type"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"object-class", &module_info_boot, "object-class"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"application-arguments", &module_info_ast, "application-arguments"},
  {"module-exports", &module_info_ast, "module-exports"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"del-keys", &module_info_runtime, "del-keys"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"unless", &module_info_macros, "unless"},
  {"+", &module_info_runtime, "+"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"numeric?", &module_info_runtime, "numeric?"},
  {"objectify-quotation", &module_info_ast, "objectify-quotation"},
  {"loc", &module_info_boot, "loc"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"from-to-by", &module_info_runtime, "from-to-by"},
  {"<application>", &module_info_ast, "<application>"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"dv", &module_info_boot, "dv"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"mif", &module_info_boot, "mif"},
  {"module-binding", &module_info_ast, "module-binding"},
  {"@+", &module_info_boot, "@+"},
  {"def-list", &module_info_ast, "def-list"},
  {"monitor-main-thunk", &module_info_ast, "monitor-main-thunk"},
  {"assq", &module_info_runtime, "assq"},
  {"%sb", &module_info_boot, "%sb"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"alter", &module_info_runtime, "alter"},
  {"var-name", &module_info_macros, "var-name"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"locals-bindings", &module_info_ast, "locals-bindings"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"peek-char", &module_info_runtime, "peek-char"},
  {"signature-nary?", &module_info_ast, "signature-nary?"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"binding-value-setter", &module_info_ast, "binding-value-setter"},
  {"min", &module_info_runtime, "min"},
  {"function-signature-setter", &module_info_ast, "function-signature-setter"},
  {"table-growth-factor", &module_info_runtime, "table-growth-factor"},
  {"binding-global-box", &module_info_ast, "binding-global-box"},
  {"sub-setter", &module_info_runtime, "sub-setter"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"truncate", &module_info_runtime, "truncate"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"/", &module_info_runtime, "/"},
  {"env-object-name", &module_info_ast, "env-object-name"},
  {"pop", &module_info_runtime, "pop"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"program-register", &module_info_ast, "program-register"},
  {"ast-define-binding", &module_info_ast, "ast-define-binding"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"locals-body", &module_info_ast, "locals-body"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"inc", &module_info_macros, "inc"},
  {">", &module_info_runtime, ">"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"<col>", &module_info_boot, "<col>"},
  {"cat", &module_info_macros, "cat"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"locals-functions-setter", &module_info_ast, "locals-functions-setter"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"<regular-application>", &module_info_ast, "<regular-application>"},
  {"<range>", &module_info_runtime, "<range>"},
  {"<monitor>", &module_info_ast, "<monitor>"},
  {"table-shrink-threshold", &module_info_runtime, "table-shrink-threshold"},
  {"odd?", &module_info_runtime, "odd?"},
  {"application-binding", &module_info_ast, "application-binding"},
  {"assoc-value", &module_info_runtime, "assoc-value"},
  {"fab-p2c-module", &module_info_ast, "fab-p2c-module"},
  {"read-char", &module_info_runtime, "read-char"},
  {"<list>", &module_info_runtime, "<list>"},
  {"and", &module_info_macros, "and"},
  {"first-then", &module_info_runtime, "first-then"},
  {"<string-port>", &module_info_runtime, "<string-port>"},
  {"do3", &module_info_runtime, "do3"},
  {"locals-bindings-setter", &module_info_ast, "locals-bindings-setter"},
  {"tup", &module_info_macros, "tup"},
  {"<definition>", &module_info_ast, "<definition>"},
  {"nil", &module_info_boot, "nil"},
  {"binding-module-name", &module_info_ast, "binding-module-name"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"global-box-value-setter", &module_info_ast, "global-box-value-setter"},
  {"<locals>", &module_info_ast, "<locals>"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"<port>", &module_info_runtime, "<port>"},
  {"fabs", &module_info_runtime, "fabs"},
  {"last", &module_info_runtime, "last"},
  {"low-elt", &module_info_runtime, "low-elt"},
  {"<", &module_info_runtime, "<"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"lab", &module_info_boot, "lab"},
  {"format", &module_info_runtime, "format"},
  {"%f+", &module_info_boot, "%f+"},
  {"alternative-condition", &module_info_ast, "alternative-condition"},
  {"neg", &module_info_runtime, "neg"},
  {"%f=", &module_info_boot, "%f="},
  {"list", &module_info_runtime, "list"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"dc", &module_info_boot, "dc"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"from-to", &module_info_runtime, "from-to"},
  {"@olen", &module_info_boot, "@olen"},
  {"unwind-protect-protected-thunk", &module_info_ast, "unwind-protect-protected-thunk"},
  {"type-object", &module_info_boot, "type-object"},
  {"copy-state", &module_info_runtime, "copy-state"},
  {"%i<", &module_info_boot, "%i<"},
  {"signature-value-setter", &module_info_ast, "signature-value-setter"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"$permanent-hash-state", &module_info_runtime, "$permanent-hash-state"},
  {"<alternative>", &module_info_ast, "<alternative>"},
  {"fix-let-arguments-setter", &module_info_ast, "fix-let-arguments-setter"},
  {"from-by", &module_info_runtime, "from-by"},
  {"<runtime-reference>", &module_info_ast, "<runtime-reference>"},
  {"popf", &module_info_macros, "popf"},
  {"compose", &module_info_runtime, "compose"},
  {"%bb", &module_info_boot, "%bb"},
  {"eof-object?", &module_info_runtime, "eof-object?"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"call-with-string-input-port", &module_info_runtime, "call-with-string-input-port"},
  {"signature-nary?-setter", &module_info_ast, "signature-nary?-setter"},
  {"app-args", &module_info_runtime, "app-args"},
  {"%isa", &module_info_boot, "%isa"},
  {"%ib", &module_info_boot, "%ib"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"binding-type-setter", &module_info_ast, "binding-type-setter"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"<error>", &module_info_runtime, "<error>"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"head", &module_info_boot, "head"},
  {"as-uppercase", &module_info_runtime, "as-uppercase"},
  {"rev", &module_info_runtime, "rev"},
  {"del-key", &module_info_runtime, "del-key"},
  {"format-to-string", &module_info_runtime, "format-to-string"},
  {"ascii-whitespaces", &module_info_runtime, "ascii-whitespaces"},
  {"%iu", &module_info_boot, "%iu"},
  {"binding-mutable?", &module_info_ast, "binding-mutable?"},
  {"ds", &module_info_boot, "ds"},
  {"assqn", &module_info_runtime, "assqn"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"to-digit", &module_info_runtime, "to-digit"},
  {"signature-names", &module_info_ast, "signature-names"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"keys", &module_info_runtime, "keys"},
  {"function-body-setter", &module_info_ast, "function-body-setter"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"%cb", &module_info_boot, "%cb"},
  {"<restart>", &module_info_runtime, "<restart>"},
  {"monitor-test", &module_info_ast, "monitor-test"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"<int>", &module_info_boot, "<int>"},
  {"report-undefined-global-bindings", &module_info_ast, "report-undefined-global-bindings"},
  {"now-elt-setter", &module_info_runtime, "now-elt-setter"},
  {"monitor-type", &module_info_ast, "monitor-type"},
  {"close-input-port", &module_info_runtime, "close-input-port"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"reference-frame-offset", &module_info_ast, "reference-frame-offset"},
  {"%fu", &module_info_boot, "%fu"},
  {"in", &module_info_runtime, "in"},
  {"empty?", &module_info_macros, "empty?"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"<output-port>", &module_info_runtime, "<output-port>"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"assocq", &module_info_runtime, "assocq"},
  {"write-string", &module_info_runtime, "write-string"},
  {"curry", &module_info_runtime, "curry"},
  {"%slen", &module_info_boot, "%slen"},
  {"cat2", &module_info_runtime, "cat2"},
  {"floor/", &module_info_runtime, "floor/"},
  {"gensym", &module_info_macros, "gensym"},
  {"bound?", &module_info_boot, "bound?"},
  {"len-setter", &module_info_runtime, "len-setter"},
  {"signature-specs-setter", &module_info_ast, "signature-specs-setter"},
  {"<programs>", &module_info_ast, "<programs>"},
  {"function-debug-name", &module_info_ast, "function-debug-name"},
  {"<num>", &module_info_boot, "<num>"},
  {"unwind-protect-cleanup-thunk", &module_info_ast, "unwind-protect-cleanup-thunk"},
  {"%f-", &module_info_boot, "%f-"},
  {"%i!", &module_info_boot, "%i!"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"ceiling/", &module_info_runtime, "ceiling/"},
  {"constant-value", &module_info_ast, "constant-value"},
  {"<ast-primitive-definition>", &module_info_ast, "<ast-primitive-definition>"},
  {"<runtime-assignment>", &module_info_ast, "<runtime-assignment>"},
  {"%it/", &module_info_boot, "%it/"},
  {"ascii-limit", &module_info_runtime, "ascii-limit"},
  {"binding-dotted?-setter", &module_info_ast, "binding-dotted?-setter"},
  {"from-above-by", &module_info_runtime, "from-above-by"},
  {"do2", &module_info_runtime, "do2"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"slot", &module_info_boot, "slot"},
  {"cat!", &module_info_runtime, "cat!"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"ash", &module_info_runtime, "ash"},
  {"-", &module_info_runtime, "-"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"ct", &module_info_boot, "ct"},
  {"num-to-str", &module_info_runtime, "num-to-str"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"pair", &module_info_macros, "pair"},
  {"load-in", &module_info_ast, "load-in"},
  {"%iv", &module_info_boot, "%iv"},
  {"assignment-form", &module_info_ast, "assignment-form"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"<real-reference>", &module_info_ast, "<real-reference>"},
  {"install-initial-bindings", &module_info_ast, "install-initial-bindings"},
  {"%f<", &module_info_boot, "%f<"},
  {"df", &module_info_boot, "df"},
  {"<step>", &module_info_runtime, "<step>"},
  {"<fab-list>", &module_info_ast, "<fab-list>"},
  {"<arguments>", &module_info_ast, "<arguments>"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"type-error", &module_info_boot, "type-error"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"%c=", &module_info_boot, "%c="},
  {"for", &module_info_macros, "for"},
  {"<static-global-environment>", &module_info_ast, "<static-global-environment>"},
  {"round/", &module_info_runtime, "round/"},
  {"module-name", &module_info_ast, "module-name"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"env-names-setter", &Yast_evalYenv_names_setter},
  {"env-local-value", &Yast_evalYenv_local_value},
  {"env-define-binding!", &Yast_evalYenv_define_bindingX},
  {"env-local-reference-value", &Yast_evalYenv_local_reference_value},
  {"ast-eval-bound?", &Yast_evalYast_eval_boundQ},
  {"env-values", &Yast_evalYenv_values},
  {"env-runtime-value-setter", &Yast_evalYenv_runtime_value_setter},
  {"env-local-reference-value-setter", &Yast_evalYenv_local_reference_value_setter},
  {"<loc-env>", &Yast_evalYLloc_envG},
  {"env-frame!", &Yast_evalYenv_frameX},
  {"env-local-value-setter", &Yast_evalYenv_local_value_setter},
  {"$nul-loc-env", &Yast_evalYDnul_loc_env},
  {"ast-eval-specs", &Yast_evalYast_eval_specs},
  {"*stack*", &Yast_evalYTstackT},
  {"---main-0---", NULL},
  {"ast-eval", &Yast_evalYast_eval},
  {"env-names", &Yast_evalYenv_names},
  {"env-function-setter", &Yast_evalYenv_function_setter},
  {"env-global-binding-value", &Yast_evalYenv_global_binding_value},
  {"env-function", &Yast_evalYenv_function},
  {"ifun", NULL},
  {"env-parent-setter", &Yast_evalYenv_parent_setter},
  {"env-parent", &Yast_evalYenv_parent},
  {"env-global-binding-value-setter", &Yast_evalYenv_global_binding_value_setter},
  {"as-fun-name", &Yast_evalYas_fun_name},
  {"env-values-setter", &Yast_evalYenv_values_setter},
  {"env-binding-value", &Yast_evalYenv_binding_value},
  {"env-binding-value-setter", &Yast_evalYenv_binding_value_setter},
  {"env-runtime-value", &Yast_evalYenv_runtime_value},
  {"---main-1---", NULL},
  {"env-global-binding-bound?", &Yast_evalYenv_global_binding_boundQ},
  {"export-proto-method", &Yast_evalYexport_proto_method},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"init-environment-for-eval", "init-environment-for-eval"},
  {"ast-evaluate", "ast-evaluate"},
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
