/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: ast-eval */

EXT(YastYbinding_kind,"ast","binding-kind");
EXT(YruntimeYreduceA,"runtime","reduce+");
EXT(YastYmodule_target_environment,"ast","module-target-environment");
EXT(YmacrosYmap,"macros","map");
EXT(Ynul,"boot","nul");
EXT(YruntimeYcurry,"runtime","curry");
EXT(YastYLast_genericG,"ast","<ast-generic>");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
DEF(Yast_evalYenv_parent_setter,"ast-eval","env-parent-setter");
EXT(Ysig_value,"boot","sig-value");
EXT(YruntimeYin,"runtime","in");
EXT(Yclass_name,"boot","class-name");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YastYLfree_environmentG,"ast","<free-environment>");
EXT(YruntimeYalways,"runtime","always");
EXT(Ymay_isaQ,"boot","may-isa?");
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
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
EXT(Yfun_value,"boot","fun-value");
EXT(YastYload_in,"ast","load-in");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YastYglobal_box_value,"ast","global-box-value");
EXT(YastYsignature_specs,"ast","signature-specs");
EXT(YastYalternative_condition,"ast","alternative-condition");
EXT(YastYsignature_naryQ,"ast","signature-nary?");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
EXT(YastYfunction_signature_setter,"ast","function-signature-setter");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YastYunwind_protect_cleanup_thunk,"ast","unwind-protect-cleanup-thunk");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YastYfunction_temporaries,"ast","function-temporaries");
EXT(YastYsignature_value,"ast","signature-value");
EXT(YLchrG,"boot","<chr>");
EXT(YmacrosYmatch_atom,"macros","match-atom");
DEF(Yast_evalYenv_local_reference_value_setter,"ast-eval","env-local-reference-value-setter");
EXT(YastYmodule_name_to_relpath,"ast","module-name-to-relpath");
EXT(YastYsignature_names_setter,"ast","signature-names-setter");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(YruntimeYfloorS,"runtime","floor/");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(YastYlocals_body_setter,"ast","locals-body-setter");
EXT(YastYfunction_debug_name,"ast","function-debug-name");
EXT(YruntimeYreduce,"runtime","reduce");
EXT(YPslot,"boot","%slot");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YastYLglobal_referenceG,"ast","<global-reference>");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(Ysig_names,"boot","sig-names");
EXT(YastYlocals_functions_setter,"ast","locals-functions-setter");
EXT(YastYLast_primitive_definitionG,"ast","<ast-primitive-definition>");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(YruntimeYroundS,"runtime","round/");
DEF(Yast_evalYDnul_loc_env,"ast-eval","$nul-loc-env");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(YDmin_int,"boot","$min-int");
EXT(YruntimeYassocq,"runtime","assocq");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YruntimeYnow_elt,"runtime","now-elt");
DEF(Yast_evalYTstackT,"ast-eval","*stack*");
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
EXT(YastYLast_functionG,"ast","<ast-function>");
EXT(YruntimeYT,"runtime","*");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Ytype_class,"boot","type-class");
EXT(YastYbinding_value_setter,"ast","binding-value-setter");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(YastYLunwind_protectG,"ast","<unwind-protect>");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
DEF(Yast_evalYexport_proto_method,"ast-eval","export-proto-method");
EXT(YLunionG,"boot","<union>");
EXT(YastYconstant_index_setter,"ast","constant-index-setter");
EXT(Ylst,"boot","lst");
EXT(Yslot_value,"boot","slot-value");
EXT(YDmax_int,"boot","$max-int");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YmacrosYcat,"macros","cat");
EXT(YastYbinding_global_box,"ast","binding-global-box");
EXT(YastYconstant_index,"ast","constant-index");
EXT(YastYLlocal_assignmentG,"ast","<local-assignment>");
EXT(YastYassignment_form_setter,"ast","assignment-form-setter");
EXT(YastYsignature_naryQ_setter,"ast","signature-nary?-setter");
EXT(YruntimeYassoc,"runtime","assoc");
EXT(YastYbinding_value,"ast","binding-value");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(YruntimeYfloor,"runtime","floor");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(YastYbind_exit_main_fun,"ast","bind-exit-main-fun");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YruntimeYmodulo,"runtime","modulo");
EXT(YruntimeYpick,"runtime","pick");
EXT(YastYmonitor_handler,"ast","monitor-handler");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
EXT(YruntimeYlast,"runtime","last");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YruntimeYlow_elt,"runtime","low-elt");
DEF(Yast_evalYast_eval_boundQ,"ast-eval","ast-eval-bound?");
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
EXT(YruntimeYsig,"runtime","sig");
EXT(YastYLpredefined_applicationG,"ast","<predefined-application>");
EXT(YastYreference_frame_offset,"ast","reference-frame-offset");
EXT(Yadd_slot,"boot","add-slot");
EXT(YruntimeYcopy_state,"runtime","copy-state");
EXT(YastYfunction_registers_setter,"ast","function-registers-setter");
EXT(YastYfunction_source,"ast","function-source");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YastYlocals_functions,"ast","locals-functions");
EXT(YruntimeYlogxor,"runtime","logxor");
EXT(YastYsignature_arity_setter,"ast","signature-arity-setter");
EXT(YastYmodule_binding,"ast","module-binding");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
EXT(YastYsignature_bindings_setter,"ast","signature-bindings-setter");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(YruntimeYL,"runtime","<");
EXT(YruntimeYpop,"runtime","pop");
EXT(YastYlocals_bindings,"ast","locals-bindings");
DEF(Yast_evalYenv_function,"ast-eval","env-function");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YPdefine_method,"boot","%define-method");
EXT(YastYDproto_runtime_module_name,"ast","$proto-runtime-module-name");
EXT(YastYfunction_self_recursiveQ,"ast","function-self-recursive?");
EXT(YastYLglobal_boxG,"ast","<global-box>");
EXT(YruntimeYdefault,"runtime","default");
DEF(Yast_evalYenv_global_binding_value,"ast-eval","env-global-binding-value");
EXT(YastYfind_binding,"ast","find-binding");
DEF(Yast_evalYenv_names_setter,"ast-eval","env-names-setter");
EXT(YLoptsG,"boot","<opts>");
DEF(Yast_evalYLloc_envG,"ast-eval","<loc-env>");
EXT(YruntimeYkeys,"runtime","keys");
EXT(YruntimeYlogand,"runtime","logand");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YastYLmonitorG,"ast","<monitor>");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YastYLmodule_binding_referenceG,"ast","<module-binding-reference>");
EXT(YastYalternative_alternant,"ast","alternative-alternant");
EXT(YruntimeYlen,"runtime","len");
EXT(YastYfunction_index_setter,"ast","function-index-setter");
DEF(Yast_evalYast_eval_specs,"ast-eval","ast-eval-specs");
EXT(YmacrosYnapply,"macros","napply");
EXT(YastYreference_called_functionQ_setter,"ast","reference-called-function?-setter");
EXT(YruntimeYE,"runtime","=");
EXT(YastYprogram_type,"ast","program-type");
EXT(YmacrosYtup,"macros","tup");
DEF(Yast_evalYenv_values_setter,"ast-eval","env-values-setter");
EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYceiling,"runtime","ceiling");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(YastYLreferenceG,"ast","<reference>");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YruntimeYid_hash,"runtime","id-hash");
DEF(Yast_evalYarrange_arguments,"ast-eval","arrange-arguments");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(YruntimeYeof_object,"runtime","eof-object");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(YruntimeYlognot,"runtime","lognot");
EXT(YastYlocals_bindings_setter,"ast","locals-bindings-setter");
EXT(YruntimeYLincongruent_method_errorG,"runtime","<incongruent-method-error>");
EXT(YastYfunction_bindings,"ast","function-bindings");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YruntimeYany2Q,"runtime","any2?");
EXT(Ytype_object,"boot","type-object");
EXT(YastYbinding_global_box_setter,"ast","binding-global-box-setter");
EXT(YastYfunction_registers,"ast","function-registers");
EXT(YLclassG,"boot","<class>");
EXT(YruntimeYas,"runtime","as");
EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
EXT(YastYbinding_inferred_type_setter,"ast","binding-inferred-type-setter");
EXT(YruntimeYto_digit,"runtime","to-digit");
EXT(YastYLbotG,"ast","<bot>");
DEF(Yast_evalYast_eval,"ast-eval","ast-eval");
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
DEF(Yast_evalYenv_global_binding_boundQ,"ast-eval","env-global-binding-bound?");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
EXT(YastYassignment_form,"ast","assignment-form");
EXT(YruntimeYfrom,"runtime","from");
EXT(YastYapplication_arguments,"ast","application-arguments");
DEF(Yast_evalYas_fun_name,"ast-eval","as-fun-name");
EXT(Yobject_parents,"boot","object-parents");
DEF(Yast_evalYenv_define_bindingX,"ast-eval","env-define-binding!");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YLgenG,"boot","<gen>");
EXT(YastYenv_object_name,"ast","env-object-name");
EXT(YastYLstatic_global_environmentG,"ast","<static-global-environment>");
EXT(YruntimeYfirst_then,"runtime","first-then");
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
EXT(Yobject_slots,"boot","object-slots");
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
DEF(Yast_evalYenv_binding_value,"ast-eval","env-binding-value");
EXT(YmacrosYelt,"macros","elt");
EXT(Yfind_setter,"boot","find-setter");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(YastYprogram_register_setter,"ast","program-register-setter");
EXT(YruntimeYLlistG,"runtime","<list>");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
DEF(Yast_evalYenv_values,"ast-eval","env-values");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YastYprogram_register,"ast","program-register");
EXT(YruntimeYnewline,"runtime","newline");
EXT(YastYLast_methodG,"ast","<ast-method>");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YastYfunction_free,"ast","function-free");
EXT(YastYbinding_info,"ast","binding-info");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
DEF(Yast_evalYenv_parent,"ast-eval","env-parent");
EXT(YruntimeYvec,"runtime","vec");
EXT(YastYreference_binding,"ast","reference-binding");
EXT(YLstrG,"boot","<str>");
EXT(YastYLbindingG,"ast","<binding>");
EXT(YastYcompile_time_program,"ast","compile-time-program");
EXT(YruntimeYstr,"runtime","str");
EXT(YastYfind_environment_module,"ast","find-environment-module");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YastYbinding_type_setter,"ast","binding-type-setter");
EXT(YastYfunction_body,"ast","function-body");
EXT(YastYLraw_constantG,"ast","<raw-constant>");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(YruntimeYread,"runtime","read");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YruntimeY1st,"runtime","1st");
EXT(YastYinit_environment_for_eval,"ast","init-environment-for-eval");
DEF(Yast_evalYenv_global_binding_value_setter,"ast-eval","env-global-binding-value-setter");
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
EXT(YastYunwind_protect_protected_thunk,"ast","unwind-protect-protected-thunk");
EXT(Yslot_owner,"boot","slot-owner");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(Yfun_names,"boot","fun-names");
EXT(YLmetG,"boot","<met>");
EXT(YastYLruntime_assignmentG,"ast","<runtime-assignment>");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(Yhead_setter,"boot","head-setter");
EXT(YastYLalternativeG,"ast","<alternative>");
EXT(YruntimeYfab,"runtime","fab");
DEF(Yast_evalYenv_runtime_value_setter,"ast-eval","env-runtime-value-setter");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
EXT(Yfind_getter,"boot","find-getter");
EXT(Yfile_opening_error,"boot","file-opening-error");
DEF(Yast_evalYenv_local_reference_value,"ast-eval","env-local-reference-value");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YLflatG,"boot","<flat>");
EXT(YruntimeYlist,"runtime","list");
EXT(Yhead,"boot","head");
EXT(YruntimeYmake_handler,"runtime","make-handler");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(YastYast_define_binding,"ast","ast-define-binding");
EXT(YastYLbind_exitG,"ast","<bind-exit>");
EXT(YastYsequentialize,"ast","sequentialize");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(YruntimeYevenQ,"runtime","even?");
EXT(YastYast_evaluate,"ast","ast-evaluate");
DEF(Yast_evalYenv_names,"ast-eval","env-names");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
EXT(YastYLlocal_bindingG,"ast","<local-binding>");
EXT(YruntimeYbuf,"runtime","buf");
EXT(YastYLast_primitiveG,"ast","<ast-primitive>");
EXT(Yobject_class,"boot","object-class");
EXT(YastYload_module,"ast","load-module");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
EXT(YastYLprogramG,"ast","<program>");
EXT(Yfun_mets,"boot","fun-mets");
DEF(Yast_evalYenv_frameX,"ast-eval","env-frame!");
EXT(YastYLglobal_assignmentG,"ast","<global-assignment>");
EXT(YastYobjectify_signature,"ast","objectify-signature");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YruntimeYdel_dups,"runtime","del-dups");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(YruntimeYnegQ,"runtime","neg?");
EXT(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
EXT(YastYLpassive_programG,"ast","<passive-program>");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YLfunG,"boot","<fun>");
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
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(YastYfree_implemented_foreign_bindings,"ast","free-implemented-foreign-bindings");
DEF(Yast_evalYenv_local_value,"ast-eval","env-local-value");
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
EXT(YastYfunction_binding,"ast","function-binding");
EXT(YruntimeYA,"runtime","+");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YastYreference_called_functionQ,"ast","reference-called-function?");
EXT(Ytail,"boot","tail");
EXT(YastYfunction_data_refs,"ast","function-data-refs");
DEF(Yast_evalYenv_binding_value_setter,"ast-eval","env-binding-value-setter");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YmacrosYEE,"macros","==");
EXT(YastYmonitor_info,"ast","monitor-info");
EXT(YastYfunction_debug_name_setter,"ast","function-debug-name-setter");
EXT(YastYfix_let_types_setter,"ast","fix-let-types-setter");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YruntimeYmin,"runtime","min");
EXT(YastYfix_let_bindings,"ast","fix-let-bindings");
EXT(YruntimeYS,"runtime","/");
DEF(Yast_evalYenv_local_value_setter,"ast-eval","env-local-value-setter");
EXT(YastYfix_let_arguments_setter,"ast","fix-let-arguments-setter");
EXT(YastYinstall_initial_bindings,"ast","install-initial-bindings");
EXT(YruntimeYtE,"runtime","t=");
EXT(YruntimeYfab_map,"runtime","fab-map");
EXT(YruntimeYfrom_by,"runtime","from-by");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(Yclass_slots,"boot","class-slots");
EXT(YruntimeYtruncate,"runtime","truncate");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(YruntimeYLrangeG,"runtime","<range>");
EXT(YLcolG,"boot","<col>");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(Yfab_class,"boot","fab-class");
EXT(YastYLimmediate_constantG,"ast","<immediate-constant>");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(YruntimeYdel,"runtime","del");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YastYsignature_specs_setter,"ast","signature-specs-setter");
EXT(YastYLfix_letG,"ast","<fix-let>");
EXT(YLsigG,"boot","<sig>");
DEF(Yast_evalYenv_runtime_value,"ast-eval","env-runtime-value");
EXT(YastYfab_p2c_module,"ast","fab-p2c-module");
EXT(YastYmonitor_type,"ast","monitor-type");
EXT(YastYbinding_dottedQ_setter,"ast","binding-dotted?-setter");
EXT(YastYfix_let_body,"ast","fix-let-body");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
EXT(YastYfunction_free_setter,"ast","function-free-setter");
EXT(YastYsignature_arity,"ast","signature-arity");
EXT(YastYfix_let_arguments,"ast","fix-let-arguments");
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
EXT(YruntimeYelt_or,"runtime","elt-or");
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
DEF(Yast_evalYenv_function_setter,"ast-eval","env-function-setter");
EXT(YLfloG,"boot","<flo>");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(YruntimeYfind_key,"runtime","find-key");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_14);
DEFLIT(lit_48);
DEFLIT(lit_62);
DEFLIT(lit_29);
DEFLIT(lit_10);
DEFLIT(lit_41);
DEFLIT(lit_68);
DEFLIT(lit_6);
DEFLIT(lit_39);
DEFLIT(lit_53);
DEFLIT(lit_35);
DEFLIT(lit_0);
DEFLIT(lit_66);
DEFLIT(lit_54);
DEFLIT(lit_49);
DEFLIT(lit_21);
DEFLIT(lit_26);
DEFLIT(lit_27);
DEFLIT(lit_73);
DEFLIT(lit_12);
DEFLIT(lit_34);
DEFLIT(lit_31);
DEFLIT(lit_64);
DEFLIT(lit_16);
DEFLIT(lit_61);
DEFLIT(lit_3);
DEFLIT(lit_67);
DEFLIT(lit_74);
DEFLIT(lit_63);
DEFLIT(lit_76);
DEFLIT(lit_77);
DEFLIT(lit_33);
DEFLIT(lit_9);
DEFLIT(lit_22);
DEFLIT(lit_24);
DEFLIT(lit_65);
DEFLIT(lit_32);
DEFLIT(lit_23);
DEFLIT(lit_20);
DEFLIT(lit_42);
DEFLIT(lit_7);
DEFLIT(lit_13);
DEFLIT(lit_44);
DEFLIT(lit_46);
DEFLIT(lit_18);
DEFLIT(lit_71);
DEFLIT(lit_15);
DEFLIT(lit_37);
DEFLIT(lit_1);
DEFLIT(lit_17);
DEFLIT(lit_59);
DEFLIT(lit_47);
DEFLIT(lit_52);
DEFLIT(lit_30);
DEFLIT(lit_70);
DEFLIT(lit_25);
DEFLIT(lit_51);
DEFLIT(lit_55);
DEFLIT(lit_28);
DEFLIT(lit_69);
DEFLIT(lit_38);
DEFLIT(lit_4);
DEFLIT(lit_43);
DEFLIT(lit_8);
DEFLIT(lit_78);
DEFLIT(lit_75);
DEFLIT(lit_56);
DEFLIT(lit_79);
DEFLIT(lit_50);
DEFLIT(lit_81);
DEFLIT(lit_2);
DEFLIT(lit_80);
DEFLIT(lit_45);
DEFLIT(lit_5);
DEFLIT(lit_60);
DEFLIT(lit_11);
DEFLIT(lit_19);
DEFLIT(lit_72);
DEFLIT(lit_57);
DEFLIT(lit_36);
DEFLIT(lit_58);
DEFLIT(lit_40);

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
FUNFOR(Yast_evalYarrange_arguments);
LOCFOR(fun_x_1310_31);
LOCFOR(fun_32);
LOCFOR(fun_33);
LOCFOR(fun_as_fun_name_34);
LOCFOR(fun_as_fun_name_35);
LOCFOR(fun_as_fun_name_36);
LOCFOR(fun_as_fun_name_37);
LOCFOR(fun_as_fun_name_38);
LOCFOR(fun_as_fun_name_39);
LOCFOR(fun_40);
LOCFOR(fun_export_proto_method_41);
LOCFOR(fun_42);
LOCFOR(fun_ast_eval_43);
LOCFOR(fun_ast_eval_44);
LOCFOR(fun_env_local_reference_value_45);
LOCFOR(fun_env_local_reference_value_setter_46);
LOCFOR(fun_ast_eval_47);
LOCFOR(fun_ast_eval_48);
LOCFOR(fun_ast_eval_49);
LOCFOR(fun_ast_eval_50);
LOCFOR(fun_ast_eval_boundQ_51);
LOCFOR(fun_ast_eval_boundQ_52);
LOCFOR(fun_ast_eval_53);
LOCFOR(fun_ast_eval_54);
LOCFOR(fun_ast_eval_55);
LOCFOR(fun_ast_eval_56);
LOCFOR(fun_env_define_bindingX_57);
LOCFOR(fun_ast_eval_58);
LOCFOR(fun_ast_eval_59);
LOCFOR(fun_eval_60);
LOCFOR(fun_ast_eval_61);
LOCFOR(fun_eval_62);
LOCFOR(fun_ast_eval_63);
LOCFOR(fun_ast_eval_64);
LOCFOR(fun_ast_eval_65);
LOCFOR(fun_ast_eval_66);
LOCFOR(fun_67);
LOCFOR(fun_ast_eval_68);
LOCFOR(fun_69);
LOCFOR(fun_70);
LOCFOR(fun_ast_eval_71);
LOCFOR(fun_72);
LOCFOR(fun_73);
LOCFOR(fun_ast_eval_74);
LOCFOR(fun_ast_eval_75);
FUNFOR(YastYinit_environment_for_eval);
extern P Yast_evalYPdefine_binding (P,P);
extern P Yast_evalYPlookup_binding (P,P);
extern P Yast_evalYPensure_binding (P,P);
extern P Yast_evalYPdlvar_binding (P);
extern P Yast_evalYPbinding_boundQ (P);
extern P Yast_evalYPbinding_value (P);
extern P Yast_evalYPbinding_value_setter (P,P);
extern P Yast_evalY___main_0___ ();
extern P Yast_evalY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_env_global_binding_value_0) {
  P b_;
  P boxF1563;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(YastYbinding_global_box),b_);
  boxF1563 = T1;
  if (boxF1563 != YPfalse) {
    T3 = CALL1(1,VARREF(YastYglobal_box_value),boxF1563);
    T2 = T3;
  } else {
    T5 = CALL1(1,VARREF(YastYbinding_name),b_);
    T4 = CALL2(1,VARREF(Yerror),LITREF(lit_2),T5);
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_global_binding_value_setter_1) {
  P value_,b_;
  P boxF1564;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(value_, 0);
  ARG(b_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYbinding_global_box),b_);
  boxF1564 = T1;
  boxF1564 = BOXFAB(boxF1564);
  T4 = BOXVAL(boxF1564);
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T7 = CALL3(1,VARREF(YPisa),VARREF(YastYLglobal_boxG),Ynil,Ynil);
    T6 = CALL2(1,VARREF(YastYbinding_global_box_setter),T7,b_);
    T5 = BOXVAL(boxF1564) = T6;
  } else {
  }
  T9 = BOXVAL(boxF1564);
  T8 = CALL2(1,VARREF(YastYglobal_box_value_setter),value_,T9);
  T0 = T8;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_global_binding_boundQ_2) {
  P b_;
  P boxF1565;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(YastYbinding_global_box),b_);
  boxF1565 = T1;
  if (boxF1565 != YPfalse) {
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
  T0 = CALL1(1,VARREF(YruntimeYlocative_value),x_);
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
  T0 = CALL2(1,VARREF(YruntimeYlocative_value_setter),v_,x_);
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
  T0 = CALL2(1,VARREF(Yslot_value),Ux_,VARREF(Yast_evalYenv_parent));
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
  T0 = CALL3(1,VARREF(Yslot_value_setter),Uz_,Ux_,VARREF(Yast_evalYenv_parent));
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
  T0 = CALL2(1,VARREF(Yslot_value),Ux_,VARREF(Yast_evalYenv_function));
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
  T0 = CALL3(1,VARREF(Yslot_value_setter),Uz_,Ux_,VARREF(Yast_evalYenv_function));
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
  T0 = CALL2(1,VARREF(Yslot_value),Ux_,VARREF(Yast_evalYenv_names));
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
  T0 = CALL3(1,VARREF(Yslot_value_setter),Uz_,Ux_,VARREF(Yast_evalYenv_names));
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
  T0 = CALL2(1,VARREF(Yslot_value),Ux_,VARREF(Yast_evalYenv_values));
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
  T0 = CALL3(1,VARREF(Yslot_value_setter),Uz_,Ux_,VARREF(Yast_evalYenv_values));
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
  P valuesF1566;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(env_, 0);
  ARG(function_, 1);
  ARG(names_, 2);
  ARG(args_, 3);
loop:
  T1 = CALL2(1,VARREF(YruntimeYas),VARREF(YLvecG),args_);
  valuesF1566 = T1;
  T6 = (P)YPpair(VARREF(Yast_evalYenv_names),Ynil);
  T5 = (P)YPpair(VARREF(Yast_evalYenv_values),T6);
  T4 = (P)YPpair(VARREF(Yast_evalYenv_function),T5);
  T3 = (P)YPpair(VARREF(Yast_evalYenv_parent),T4);
  T10 = (P)YPpair(names_,Ynil);
  T9 = (P)YPpair(valuesF1566,T10);
  T8 = (P)YPpair(function_,T9);
  T7 = (P)YPpair(env_,T8);
  T2 = CALL3(1,VARREF(YPisa),VARREF(Yast_evalYLloc_envG),T3,T7);
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
  T1 = CALL2(1,VARREF(YruntimeYE),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Yast_evalYenv_values),env_);
    T2 = CALL2(1,VARREF(YmacrosYelt),T3,j_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yast_evalYenv_parent),env_);
    T6 = CALL2(1,VARREF(YruntimeY_),i_,YPint((P)1));
    T4 = CALL3(1,VARREF(Yast_evalYenv_local_value),T5,T6,j_);
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
  T1 = CALL2(1,VARREF(YruntimeYE),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Yast_evalYenv_values),env_);
    T2 = CALL3(1,VARREF(YruntimeYelt_setter),v_,T3,j_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yast_evalYenv_parent),env_);
    T6 = CALL2(1,VARREF(YruntimeY_),i_,YPint((P)1));
    T4 = CALLN(1,VARREF(Yast_evalYenv_local_value_setter),4,v_,T5,T6,j_);
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
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),names_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Yast_evalYenv_parent),FREEREF(0));
    T2 = CALL2(1,VARREF(Yast_evalYenv_binding_value),T3,FREEREF(1));
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(Yhead),names_);
    T5 = CALL2(1,VARREF(YmacrosYEE),FREEREF(1),T6);
    if (T5 != YPfalse) {
      T8 = CALL1(1,VARREF(Yast_evalYenv_values),FREEREF(0));
      T7 = CALL2(1,VARREF(YmacrosYelt),T8,i_);
      T4 = T7;
    } else {
      T10 = CALL1(1,VARREF(Ytail),names_);
      T11 = CALL2(1,VARREF(YruntimeYA),i_,YPint((P)1));
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
  P loopF1567;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(env_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL2(1,VARREF(YmacrosYEE),env_,VARREF(Yast_evalYDnul_loc_env));
  if (T1 != YPfalse) {
    T0 = VARREF(Ynul);
  } else {
    T3 = FUNSHELL(1,fun_loop_20,3);
    loopF1567 = T3;
    FUNINIT(loopF1567, 3,env_,name_,loopF1567);
    T5 = CALL1(1,VARREF(Yast_evalYenv_names),env_);
    T4 = CALL2(0,loopF1567,T5,YPint((P)0));
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
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),names_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Yast_evalYenv_parent),FREEREF(1));
    T2 = CALL3(1,VARREF(Yast_evalYenv_binding_value_setter),FREEREF(0),T3,FREEREF(2));
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(Yhead),names_);
    T5 = CALL2(1,VARREF(YmacrosYEE),FREEREF(2),T6);
    if (T5 != YPfalse) {
      T8 = CALL1(1,VARREF(Yast_evalYenv_values),FREEREF(1));
      T7 = CALL3(1,VARREF(YruntimeYelt_setter),FREEREF(0),T8,i_);
      T4 = T7;
    } else {
      T10 = CALL1(1,VARREF(Ytail),names_);
      T11 = CALL2(1,VARREF(YruntimeYA),i_,YPint((P)1));
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
  P loopF1568;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(v_, 0);
  ARG(env_, 1);
  ARG(name_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_22,4);
  loopF1568 = T1;
  FUNINIT(loopF1568, 4,v_,env_,name_,loopF1568);
  T3 = CALL1(1,VARREF(Yast_evalYenv_names),env_);
  T2 = CALL2(0,loopF1568,T3,YPint((P)0));
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
  T0 = CALL2(1,VARREF(Yast_evalYast_eval),e_,VARREF(Yast_evalYDnul_loc_env));
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
  T0 = CALL1(1,VARREF(YastYconstant_value),e_);
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
  T0 = CALL1(1,VARREF(YastYconstant_value),e_);
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
  T1 = CALL1(1,VARREF(YastYcompile_time_program),e_);
  T0 = CALL1(1,VARREF(YastYast_evaluate),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_28) {
  P res_,specs_,i_;
  P typeF1570;
  P specF1569;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(res_, 0);
  ARG(specs_, 1);
  ARG(i_, 2);
loop:
  T1 = CALL2(1,VARREF(YruntimeYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YruntimeYrevX),res_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),specs_);
    specF1569 = T4;
    if (specF1569 != YPfalse) {
      T7 = CALL2(1,VARREF(Yast_evalYast_eval),specF1569,FREEREF(1));
      T6 = T7;
    } else {
      T6 = VARREF(YLanyG);
    }
    typeF1570 = T6;
    T9 = CALL2(1,VARREF(YmacrosYpair),typeF1570,res_);
    T10 = CALL1(1,VARREF(Ytail),specs_);
    T11 = CALL2(1,VARREF(YruntimeYA),i_,YPint((P)1));
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
  P loopF1572;
  P nreqF1571;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(specs_, 0);
  ARG(naryQ_, 1);
  ARG(env_, 2);
loop:
  if (naryQ_ != YPfalse) {
    T3 = CALL1(1,VARREF(YruntimeYlen),specs_);
    T2 = CALL2(1,VARREF(YruntimeY_),T3,YPint((P)1));
    T1 = T2;
  } else {
    T4 = CALL1(1,VARREF(YruntimeYlen),specs_);
    T1 = T4;
  }
  nreqF1571 = T1;
  T6 = FUNSHELL(1,fun_loop_28,3);
  loopF1572 = T6;
  FUNINIT(loopF1572, 3,nreqF1571,env_,loopF1572);
  T7 = CALL3(0,loopF1572,Ynil,specs_,YPint((P)0));
  T5 = T7;
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yast_evalYarrange_arguments) {
  P f_,naryQ_,arity_,args_;
  P countF1573;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(naryQ_, 1);
  ARG(arity_, 2);
  ARG(args_, 3);
loop:
  T1 = CALL1(1,VARREF(YruntimeYlen),args_);
  countF1573 = T1;
  if (naryQ_ != YPfalse) {
    T4 = CALL2(1,VARREF(YruntimeYL),countF1573,arity_);
    if (T4 != YPfalse) {
      T6 = CALL1(1,VARREF(Yast_evalYas_fun_name),f_);
      T5 = CALLN(1,VARREF(Yerror),4,LITREF(lit_45),T6,args_,arity_);
      T3 = T5;
    } else {
      T8 = CALL3(1,VARREF(YruntimeYsub),args_,YPint((P)0),arity_);
      T10 = CALL3(1,VARREF(YruntimeYsub),args_,arity_,countF1573);
      T9 = CALL1(1,VARREF(Ylst),T10);
      T7 = CALL2(1,VARREF(YruntimeYcat2),T8,T9);
      T3 = T7;
    }
    T2 = T3;
  } else {
    T12 = CALL2(1,VARREF(YruntimeYNEE),countF1573,arity_);
    if (T12 != YPfalse) {
      T14 = CALL1(1,VARREF(Yast_evalYas_fun_name),f_);
      T13 = CALLN(1,VARREF(Yerror),4,LITREF(lit_46),T14,args_,arity_);
      T11 = T13;
    } else {
      T11 = args_;
    }
    T2 = T11;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1310_31) {
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

FUNCODEDEF(fun_32) {
  P return_;
  P x_1309F1588;
  P x_1309F1587;
  P x_1309F1586;
  P x_1309F1585;
  P x_1309F1584;
  P x_1309F1583;
  P x_1309F1582;
  P bodyF1581;
  P namesF1580;
  P arityF1579;
  P naryQF1578;
  P fF1577;
  P envF1576;
  P x_1309F1575;
  P x_1310F1574;
  P T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90;
  P T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74;
  P T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58;
  P T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1310_31,1);
  x_1310F1574 = T1;
  FUNINIT(x_1310F1574, 1,return_);
  x_1309F1575 = FREEREF(0);
  envF1576 = YPfalse;
  envF1576 = BOXFAB(envF1576);
  fF1577 = YPfalse;
  fF1577 = BOXFAB(fF1577);
  naryQF1578 = YPfalse;
  naryQF1578 = BOXFAB(naryQF1578);
  arityF1579 = YPfalse;
  arityF1579 = BOXFAB(arityF1579);
  namesF1580 = YPfalse;
  namesF1580 = BOXFAB(namesF1580);
  bodyF1581 = YPfalse;
  bodyF1581 = BOXFAB(bodyF1581);
  T15 = CALL2(1,VARREF(YisaQ),x_1309F1575,VARREF(YLlstG));
  if (T15 != YPfalse) {
    T17 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1309F1575,LITREF(lit_51),x_1310F1574);
    x_1309F1582 = T17;
    T19 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1309F1582,x_1310F1574);
    BOXVAL(envF1576) = T19;
    T20 = CALL1(1,VARREF(Ytail),x_1309F1582);
    x_1309F1583 = T20;
    T22 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1309F1583,x_1310F1574);
    BOXVAL(fF1577) = T22;
    T23 = CALL1(1,VARREF(Ytail),x_1309F1583);
    x_1309F1584 = T23;
    T25 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1309F1584,x_1310F1574);
    BOXVAL(naryQF1578) = T25;
    T26 = CALL1(1,VARREF(Ytail),x_1309F1584);
    x_1309F1585 = T26;
    T28 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1309F1585,x_1310F1574);
    BOXVAL(arityF1579) = T28;
    T29 = CALL1(1,VARREF(Ytail),x_1309F1585);
    x_1309F1586 = T29;
    T31 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1309F1586,x_1310F1574);
    BOXVAL(namesF1580) = T31;
    T32 = CALL1(1,VARREF(Ytail),x_1309F1586);
    x_1309F1587 = T32;
    T34 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1309F1587,x_1310F1574);
    BOXVAL(bodyF1581) = T34;
    T35 = CALL1(1,VARREF(Ytail),x_1309F1587);
    x_1309F1588 = T35;
    T36 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1309F1588,x_1310F1574);
    T33 = T36;
    T30 = T33;
    T27 = T30;
    T24 = T27;
    T21 = T24;
    T18 = T21;
    T16 = T18;
  } else {
    T37 = CALL2(1,x_1310F1574,LITREF(lit_52),x_1309F1575);
  }
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_53));
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_54));
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T43 = CALL3(1,VARREF(YmacrosYcat),T44,T45,Ynil);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T41 = CALL2(1,VARREF(YmacrosYcat),T42,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T53 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_42));
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_43));
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_40));
  T59 = CALL1(1,VARREF(Ylst),LITREF(lit_44));
  T62 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_58));
  T64 = CALL1(1,VARREF(Ylst),LITREF(lit_54));
  T61 = CALLN(1,VARREF(YmacrosYcat),4,T62,T63,T64,Ynil);
  T60 = CALL1(1,VARREF(Ylst),T61);
  T55 = CALLN(1,VARREF(YmacrosYcat),6,T56,T57,T58,T59,T60,Ynil);
  T54 = CALL1(1,VARREF(Ylst),T55);
  T52 = CALL3(1,VARREF(YmacrosYcat),T53,T54,Ynil);
  T51 = CALL1(1,VARREF(Ylst),T52);
  T67 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T70 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T69 = CALL2(1,VARREF(YmacrosYcat),T70,Ynil);
  T68 = CALL1(1,VARREF(Ylst),T69);
  T66 = CALL3(1,VARREF(YmacrosYcat),T67,T68,Ynil);
  T65 = CALL1(1,VARREF(Ylst),T66);
  T73 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T76 = CALL1(1,VARREF(Ylst),LITREF(lit_21));
  T78 = BOXVAL(envF1576);
  T77 = CALL1(1,VARREF(Ylst),T78);
  T80 = BOXVAL(fF1577);
  T79 = CALL1(1,VARREF(Ylst),T80);
  T83 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T85 = BOXVAL(namesF1580);
  T84 = CALL1(1,VARREF(Ylst),T85);
  T88 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T91 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T92 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T90 = CALL3(1,VARREF(YmacrosYcat),T91,T92,Ynil);
  T89 = CALL1(1,VARREF(Ylst),T90);
  T87 = CALL3(1,VARREF(YmacrosYcat),T88,T89,Ynil);
  T86 = CALL1(1,VARREF(Ylst),T87);
  T82 = CALLN(1,VARREF(YmacrosYcat),4,T83,T84,T86,Ynil);
  T81 = CALL1(1,VARREF(Ylst),T82);
  T95 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T96 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
  T99 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T100 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T98 = CALL3(1,VARREF(YmacrosYcat),T99,T100,Ynil);
  T97 = CALL1(1,VARREF(Ylst),T98);
  T94 = CALLN(1,VARREF(YmacrosYcat),4,T95,T96,T97,Ynil);
  T93 = CALL1(1,VARREF(Ylst),T94);
  T75 = CALLN(1,VARREF(YmacrosYcat),6,T76,T77,T79,T81,T93,Ynil);
  T74 = CALL1(1,VARREF(Ylst),T75);
  T72 = CALL3(1,VARREF(YmacrosYcat),T73,T74,Ynil);
  T71 = CALL1(1,VARREF(Ylst),T72);
  T50 = CALLN(1,VARREF(YmacrosYcat),4,T51,T65,T71,Ynil);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T104 = BOXVAL(bodyF1581);
  T103 = CALL1(1,VARREF(Ylst),T104);
  T105 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T102 = CALL3(1,VARREF(YmacrosYcat),T103,T105,Ynil);
  T101 = CALL1(1,VARREF(Ylst),T102);
  T47 = CALLN(1,VARREF(YmacrosYcat),4,T48,T49,T101,Ynil);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T38 = CALLN(1,VARREF(YmacrosYcat),4,T39,T40,T46,Ynil);
  T13 = T38;
  T11 = T13;
  T9 = T11;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_33) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_32,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_34) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(Yfun_name),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_35) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YastYfunction_debug_name),x_);
  T0 = CALL1(1,VARREF(Yast_evalYas_fun_name),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_36) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YastYbinding_name),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_37) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YastYconstant_value),x_);
  T0 = CALL1(1,VARREF(Yast_evalYas_fun_name),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_38) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_as_fun_name_39) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_40) {
  P arg_vector_;
  P frameF1591;
  P nmsF1590;
  P argsF1589;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  NARGS(arg_vector_, 0);
loop:
  T2 = CALL2(1,VARREF(YruntimeYas),VARREF(YLlstG),arg_vector_);
  T1 = CALLN(1,VARREF(Yast_evalYarrange_arguments),4,FREEREF(0),FREEREF(1),FREEREF(2),T2);
  argsF1589 = T1;
  T4 = (P)YPnext_methods();
  nmsF1590 = T4;
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T7 = CALL2(1,VARREF(YruntimeYcat2),FREEREF(4),T8);
  T10 = CALL1(1,VARREF(Ylst),nmsF1590);
  T9 = CALL2(1,VARREF(YruntimeYcat2),argsF1589,T10);
  T6 = CALLN(1,VARREF(Yast_evalYenv_frameX),4,FREEREF(3),FREEREF(0),T7,T9);
  frameF1591 = T6;
  T11 = CALL1(1,FREEREF(5),frameF1591);
  T5 = T11;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_export_proto_method_41) {
  P f_,names_,specs_,naryQ_,value_,body_,env_;
  P efunF1593;
  P arityF1592;
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
  if (naryQ_ != YPfalse) {
    T3 = CALL1(1,VARREF(YruntimeYlen),specs_);
    T2 = CALL2(1,VARREF(YruntimeY_),T3,YPint((P)1));
    T1 = T2;
  } else {
    T4 = CALL1(1,VARREF(YruntimeYlen),specs_);
    T1 = T4;
  }
  arityF1592 = T1;
  T6 = FUNFAB(fun_40,6,f_,naryQ_,arityF1592,env_,names_,body_);
  efunF1593 = T6;
  T7 = CALL1(1,VARREF(Yast_evalYas_fun_name),f_);
  CALL2(1,VARREF(Yfun_name_setter),T7,efunF1593);
  T14 = (P)YPpair(VARREF(Ysig_unification_vars),Ynil);
  T13 = (P)YPpair(VARREF(Ysig_value),T14);
  T12 = (P)YPpair(VARREF(Ysig_arity),T13);
  T11 = (P)YPpair(VARREF(Ysig_naryQ),T12);
  T10 = (P)YPpair(VARREF(Ysig_specs),T11);
  T9 = (P)YPpair(VARREF(Ysig_names),T10);
  T17 = CALL3(1,VARREF(Yast_evalYast_eval_specs),specs_,naryQ_,env_);
  if (value_ != YPfalse) {
    T22 = CALL2(1,VARREF(Yast_evalYast_eval),value_,env_);
    T21 = T22;
  } else {
    T21 = VARREF(YLanyG);
  }
  T23 = (P)YPpair(Ynil,Ynil);
  T20 = (P)YPpair(T21,T23);
  T19 = (P)YPpair(arityF1592,T20);
  T18 = (P)YPpair(naryQ_,T19);
  T16 = (P)YPpair(T17,T18);
  T15 = (P)YPpair(names_,T16);
  T8 = CALL3(1,VARREF(YPisa),VARREF(YLsigG),T9,T15);
  CALL2(1,VARREF(Yfun_sig_setter),T8,efunF1593);
  T5 = efunF1593;
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_42) {
  P env_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  T1 = CALL1(1,VARREF(YastYfunction_body),FREEREF(0));
  T0 = CALL2(1,VARREF(Yast_evalYast_eval),T1,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_43) {
  P e_,env_;
  P evalF1595;
  P paramsF1594;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYfunction_bindings),e_);
  paramsF1594 = T1;
  T3 = FUNFAB(fun_42,1,e_);
  evalF1595 = T3;
  T5 = CALL2(1,VARREF(YmacrosYmap),VARREF(YastYbinding_name),paramsF1594);
  T6 = CALL2(1,VARREF(YmacrosYmap),VARREF(YastYbinding_type),paramsF1594);
  T7 = CALL1(1,VARREF(YastYfunction_naryQ),e_);
  T8 = CALL1(1,VARREF(YastYfunction_value),e_);
  T4 = CALLN(1,VARREF(Yast_evalYexport_proto_method),7,e_,T5,T6,T7,T8,evalF1595,env_);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_44) {
  P e_,env_;
  P specsF1599;
  P namesF1598;
  P naryQF1597;
  P paramsF1596;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYfunction_bindings),e_);
  paramsF1596 = T1;
  T3 = CALL1(1,VARREF(YastYfunction_naryQ),e_);
  naryQF1597 = T3;
  T5 = CALL2(1,VARREF(YmacrosYmap),VARREF(YastYbinding_name),paramsF1596);
  namesF1598 = T5;
  T8 = CALL2(1,VARREF(YmacrosYmap),VARREF(YastYbinding_type),paramsF1596);
  T7 = CALL3(1,VARREF(Yast_evalYast_eval_specs),T8,naryQF1597,env_);
  specsF1599 = T7;
  T10 = CALL1(1,VARREF(Yast_evalYas_fun_name),e_);
  T9 = CALLN(1,VARREF(Yfab_gen),5,T10,namesF1598,specsF1599,naryQF1597,Ynil);
  T6 = T9;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_local_reference_value_45) {
  P env_,ref_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(env_, 0);
  ARG(ref_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYreference_frame_number),ref_);
  T2 = CALL1(1,VARREF(YastYreference_frame_offset),ref_);
  T0 = CALL3(1,VARREF(Yast_evalYenv_local_value),env_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_local_reference_value_setter_46) {
  P val_,env_,ref_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(val_, 0);
  ARG(env_, 1);
  ARG(ref_, 2);
loop:
  T1 = CALL1(1,VARREF(YastYreference_frame_number),ref_);
  T2 = CALL1(1,VARREF(YastYreference_frame_offset),ref_);
  T0 = CALLN(1,VARREF(Yast_evalYenv_local_value_setter),4,val_,env_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_47) {
  P e_,env_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T0 = CALL2(1,VARREF(Yast_evalYenv_local_reference_value),env_,e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_48) {
  P e_,env_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYreference_binding),e_);
  T0 = CALL1(1,VARREF(Yast_evalYenv_global_binding_value),T1);
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
  T2 = CALL1(1,VARREF(YastYreference_binding),e_);
  T1 = CALL1(1,VARREF(YastYbinding_locative),T2);
  T0 = CALL1(1,VARREF(Yast_evalYenv_runtime_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_50) {
  P e_,env_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YastYboundQ_reference),e_);
  T1 = CALL1(1,VARREF(YastYreference_binding),T2);
  T0 = CALL3(1,VARREF(Yast_evalYast_eval_boundQ),e_,T1,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_boundQ_51) {
  P e_,binding_,env_;
  P x_1311F1600;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(binding_, 1);
  ARG(env_, 2);
loop:
  T1 = CALL1(1,VARREF(YastYbinding_kind),binding_);
  x_1311F1600 = T1;
  T3 = CALL2(1,VARREF(YmacrosYEE),x_1311F1600,LITREF(lit_74));
  if (T3 != YPfalse) {
    T4 = CALL1(1,VARREF(Yast_evalYenv_global_binding_boundQ),binding_);
    T2 = T4;
  } else {
    T2 = YPtrue;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_boundQ_52) {
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

FUNCODEDEF(fun_ast_eval_53) {
  P e_,env_;
  P valueF1601;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YastYassignment_form),e_);
  T1 = CALL2(1,VARREF(Yast_evalYast_eval),T2,env_);
  valueF1601 = T1;
  T4 = CALL1(1,VARREF(YastYassignment_binding),e_);
  T3 = CALL2(1,VARREF(Yast_evalYenv_global_binding_value_setter),valueF1601,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_54) {
  P e_,env_;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_ast_eval_55) {
  P e_,env_;
  P valueF1602;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YastYassignment_form),e_);
  T1 = CALL2(1,VARREF(Yast_evalYast_eval),T2,env_);
  valueF1602 = T1;
  T5 = CALL1(1,VARREF(YastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(YastYbinding_locative),T5);
  T3 = CALL2(1,VARREF(Yast_evalYenv_runtime_value_setter),valueF1602,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_56) {
  P e_,env_;
  P valueF1603;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YastYassignment_form),e_);
  T1 = CALL2(1,VARREF(Yast_evalYast_eval),T2,env_);
  valueF1603 = T1;
  T4 = CALL1(1,VARREF(YastYassignment_reference),e_);
  T3 = CALL3(1,VARREF(Yast_evalYenv_local_reference_value_setter),valueF1603,env_,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_define_bindingX_57) {
  P b_,v_;
  P x_1313F1605;
  P x_1312F1604;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(b_, 0);
  ARG(v_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYbinding_kind),b_);
  x_1312F1604 = T1;
  T3 = CALL2(1,VARREF(YmacrosYEE),x_1312F1604,LITREF(lit_76));
  if (T3 != YPfalse) {
    T5 = CALL1(1,VARREF(YastYbinding_locative),b_);
    T4 = CALL2(1,VARREF(Yast_evalYenv_runtime_value_setter),v_,T5);
    T2 = T4;
  } else {
    x_1313F1605 = x_1312F1604;
    T8 = CALL2(1,VARREF(YmacrosYEE),x_1313F1605,LITREF(lit_74));
    if (T8 != YPfalse) {
      T9 = CALL2(1,VARREF(Yast_evalYenv_global_binding_value_setter),v_,b_);
      T7 = T9;
    } else {
      T11 = CALL1(1,VARREF(YastYbinding_kind),b_);
      T10 = CALL2(1,VARREF(Yerror),LITREF(lit_77),T11);
      T7 = T10;
    }
    T6 = T7;
    T2 = T6;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_58) {
  P e_,env_;
  P valueF1606;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YastYassignment_form),e_);
  T1 = CALL2(1,VARREF(Yast_evalYast_eval),T2,env_);
  valueF1606 = T1;
  T3 = CALL1(1,VARREF(YastYassignment_binding),e_);
  CALL2(1,VARREF(Yast_evalYenv_define_bindingX),T3,valueF1606);
  T0 = YPfalse;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_59) {
  P e_,env_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YastYalternative_condition),e_);
  T1 = CALL2(1,VARREF(Yast_evalYast_eval),T2,env_);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YastYalternative_consequent),e_);
    T3 = CALL2(1,VARREF(Yast_evalYast_eval),T4,env_);
    T0 = T3;
  } else {
    T6 = CALL1(1,VARREF(YastYalternative_alternant),e_);
    T5 = CALL2(1,VARREF(Yast_evalYast_eval),T6,env_);
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_60) {
  P e_;
  P valF1608;
  P nxtF1607;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),e_);
  nxtF1607 = T1;
  T4 = CALL1(1,VARREF(Yhead),e_);
  T3 = CALL2(1,VARREF(Yast_evalYast_eval),T4,FREEREF(0));
  valF1608 = T3;
  T6 = CALL1(1,VARREF(YmacrosYemptyQ),nxtF1607);
  if (T6 != YPfalse) {
    T5 = valF1608;
  } else {
    a1 = nxtF1607;
    e_ = a1;
    goto loop;
    T5 = T7;
  }
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_61) {
  P e_,env_;
  P evalF1609;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_eval_60,2);
  evalF1609 = T1;
  FUNINIT(evalF1609, 2,env_,evalF1609);
  T2 = CALL1(0,evalF1609,e_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_62) {
  P res_,args_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),args_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YruntimeYrevX),res_);
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(Yhead),args_);
    T5 = CALL2(1,VARREF(Yast_evalYast_eval),T6,FREEREF(1));
    T4 = CALL2(1,VARREF(YmacrosYpair),T5,res_);
    T7 = CALL1(1,VARREF(Ytail),args_);
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

FUNCODEDEF(fun_ast_eval_63) {
  P e_,env_;
  P evalF1610;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_eval_62,2);
  evalF1610 = T1;
  FUNINIT(evalF1610, 2,evalF1610,env_);
  T2 = CALL2(0,evalF1610,Ynil,e_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_64) {
  P e_,env_;
  P argsF1612;
  P fF1611;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YastYapplication_function),e_);
  T1 = CALL2(1,VARREF(Yast_evalYast_eval),T2,env_);
  fF1611 = T1;
  T5 = CALL1(1,VARREF(YastYapplication_arguments),e_);
  T4 = CALL2(1,VARREF(Yast_evalYast_eval),T5,env_);
  argsF1612 = T4;
  T6 = CALL3(1,VARREF(YmacrosYnapply),fF1611,YPfalse,argsF1612);
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_65) {
  P e_,env_;
  P argsF1616;
  P fF1615;
  P nmsF1614;
  P bF1613;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYapplication_binding),e_);
  bF1613 = T1;
  T4 = CALL1(1,VARREF(YastYbinding_name),bF1613);
  T3 = CALL2(1,VARREF(YmacrosYEE),T4,LITREF(lit_60));
  if (T3 != YPfalse) {
    T6 = CALL2(1,VARREF(Yast_evalYenv_binding_value),env_,LITREF(lit_60));
    nmsF1614 = T6;
    T8 = CALL2(1,VARREF(YmacrosYEE),nmsF1614,VARREF(Ynul));
    if (T8 != YPfalse) {
      T7 = YPfalse;
    } else {
      T7 = nmsF1614;
    }
    T5 = T7;
    T2 = T5;
  } else {
    T10 = CALL1(1,VARREF(YastYbinding_info),bF1613);
    fF1615 = T10;
    T13 = CALL1(1,VARREF(YastYapplication_arguments),e_);
    T12 = CALL2(1,VARREF(Yast_evalYast_eval),T13,env_);
    argsF1616 = T12;
    T14 = CALL3(1,VARREF(YmacrosYnapply),fF1615,YPfalse,argsF1616);
    T11 = T14;
    T9 = T11;
    T2 = T9;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_66) {
  P e_,env_;
  P nenvF1618;
  P argsF1617;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YastYfix_let_arguments),e_);
  T1 = CALL2(1,VARREF(Yast_evalYast_eval),T2,env_);
  argsF1617 = T1;
  T6 = CALL1(1,VARREF(YastYfix_let_bindings),e_);
  T5 = CALL2(1,VARREF(YmacrosYmap),VARREF(YastYbinding_name),T6);
  T4 = CALLN(1,VARREF(Yast_evalYenv_frameX),4,env_,YPfalse,T5,argsF1617);
  nenvF1618 = T4;
  T8 = CALL1(1,VARREF(YastYfix_let_body),e_);
  T7 = CALL2(1,VARREF(Yast_evalYast_eval),T8,nenvF1618);
  T3 = T7;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_67) {
  P name_,value_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(value_, 1);
loop:
  T0 = CALL3(1,VARREF(Yast_evalYenv_binding_value_setter),value_,FREEREF(0),name_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_68) {
  P e_,env_;
  P new_envF1620;
  P bindingsF1619;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYlocals_bindings),e_);
  bindingsF1619 = T1;
  T4 = CALL2(1,VARREF(YmacrosYmap),VARREF(YastYbinding_name),bindingsF1619);
  T6 = CALL1(1,VARREF(YruntimeYalways),VARREF(Ynul));
  T5 = CALL2(1,VARREF(YmacrosYmap),T6,bindingsF1619);
  T3 = CALLN(1,VARREF(Yast_evalYenv_frameX),4,env_,YPfalse,T4,T5);
  new_envF1620 = T3;
  T7 = FUNFAB(fun_67,1,new_envF1620);
  T8 = CALL2(1,VARREF(YmacrosYmap),VARREF(YastYbinding_name),bindingsF1619);
  T10 = CALL2(1,VARREF(YruntimeYrcurry),VARREF(Yast_evalYast_eval),new_envF1620);
  T11 = CALL1(1,VARREF(YastYlocals_functions),e_);
  T9 = CALL2(1,VARREF(YmacrosYmap),T10,T11);
  CALL3(1,VARREF(YruntimeYdo2),T7,T8,T9);
  T13 = CALL1(1,VARREF(YastYlocals_body),e_);
  T12 = CALL2(1,VARREF(Yast_evalYast_eval),T13,new_envF1620);
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  P env_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  T1 = CALL2(1,VARREF(Yast_evalYenv_binding_value),env_,LITREF(lit_7));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_70) {
  P return_;
  P exitF1622;
  P rprocF1621;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNFAB(fun_69,1,return_);
  rprocF1621 = T1;
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T5 = CALL1(1,VARREF(Ylst),YPfalse);
  T3 = CALLN(1,VARREF(Yast_evalYexport_proto_method),7,rprocF1621,T4,T5,YPfalse,YPfalse,rprocF1621,FREEREF(0));
  exitF1622 = T3;
  T8 = CALL1(1,VARREF(YastYbind_exit_main_fun),FREEREF(1));
  T7 = CALL2(1,VARREF(Yast_evalYast_eval),T8,FREEREF(0));
  T6 = CALL1(1,T7,exitF1622);
  T2 = T6;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_71) {
  P e_,env_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNFAB(fun_70,2,env_,e_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_72) {
  P T2,T1,T0;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(YastYunwind_protect_protected_thunk),FREEREF(0));
  T1 = CALL2(1,VARREF(Yast_evalYast_eval),T2,FREEREF(1));
  T0 = CALL0(1,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_73) {
  P T2,T1,T0;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(YastYunwind_protect_cleanup_thunk),FREEREF(0));
  T1 = CALL2(1,VARREF(Yast_evalYast_eval),T2,FREEREF(1));
  T0 = CALL0(1,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_74) {
  P e_,env_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNFAB(fun_72,2,e_,env_);
  T2 = FUNFAB(fun_73,2,e_,env_);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_75) {
  P e_,env_;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YastYmonitor_type),e_);
  T1 = CALL2(1,VARREF(Yast_evalYast_eval),T2,env_);
  T4 = CALL1(1,VARREF(YastYmonitor_info),e_);
  T3 = CALL2(1,VARREF(Yast_evalYast_eval),T4,env_);
  T6 = CALL1(1,VARREF(YastYmonitor_test),e_);
  T5 = CALL2(1,VARREF(Yast_evalYast_eval),T6,env_);
  T8 = CALL1(1,VARREF(YastYmonitor_handler),e_);
  T7 = CALL2(1,VARREF(Yast_evalYast_eval),T8,env_);
  T10 = CALL1(1,VARREF(YastYmonitor_main_thunk),e_);
  T9 = CALL2(1,VARREF(Yast_evalYast_eval),T10,env_);
  T0 = CALLN(1,VARREF(YruntimeYPwith_monitor),5,T1,T3,T5,T7,T9);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYinit_environment_for_eval) {
  P env_;
  P bF1623;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  CALLN(1,VARREF(YastYast_define_binding),4,env_,LITREF(lit_60),YPfalse,LITREF(lit_80));
  T1 = CALLN(1,VARREF(YastYast_define_binding),4,env_,LITREF(lit_81),YPfalse,LITREF(lit_74));
  bF1623 = T1;
  T2 = CALL2(1,VARREF(Yast_evalYenv_global_binding_value_setter),VARREF(YmacrosYpair),bF1623);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P Yast_evalYPdefine_binding(P raw_mod_,P raw_nam_) {
  P eF1624;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T2 = (P)YPPsym(raw_mod_);
  T1 = CALL1(1,VARREF(YastYruntime_environment),T2);
  eF1624 = T1;
  T4 = (P)YPPsym(raw_nam_);
  T3 = CALLN(1,VARREF(YastYast_define_binding),4,eF1624,T4,YPfalse,LITREF(lit_74));
  T0 = T3;
  return T0;
}

P Yast_evalYPlookup_binding(P raw_mod_,P raw_nam_) {
  P eF1625;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T2 = (P)YPPsym(raw_mod_);
  T1 = CALL1(1,VARREF(YastYruntime_environment),T2);
  eF1625 = T1;
  T4 = (P)YPPsym(raw_nam_);
  T3 = CALL2(1,VARREF(YastYfind_binding),T4,eF1625);
  T0 = T3;
  return T0;
}

P Yast_evalYPensure_binding(P raw_mod_,P raw_nam_) {
  P tmpF1626;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T1 = (P)Yast_evalYPlookup_binding(raw_mod_,raw_nam_);
  tmpF1626 = T1;
  if (tmpF1626 != YPfalse) {
    T2 = tmpF1626;
  } else {
    T3 = (P)Yast_evalYPdefine_binding(raw_mod_,raw_nam_);
    T2 = T3;
  }
  T0 = T2;
  return T0;
}

P Yast_evalYPdlvar_binding(P dlvar_) {
  P bF1627;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T1 = (P)Yast_evalYPdlvar(dlvar_);
  bF1627 = T1;
  T4 = (P)YPiu(YPint((P)0));
  T3 = (P)YOEE(bF1627,T4);
  if (T3 != YPfalse) {
    T7 = (P)Yast_evalYPdlvar_mod(dlvar_);
    T8 = (P)Yast_evalYPdlvar_nam(dlvar_);
    T6 = (P)Yast_evalYPensure_binding(T7,T8);
    T5 = (P)Yast_evalYPdlvar_setter(T6,dlvar_);
    T2 = T5;
  } else {
    T2 = bF1627;
  }
  T0 = T2;
  return T0;
}

P Yast_evalYPbinding_boundQ(P dlvar_) {
  P tmpF1629;
  P bF1628;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T2 = (P)Yast_evalYPdlvar_mod(dlvar_);
  T3 = (P)Yast_evalYPdlvar_nam(dlvar_);
  T1 = (P)Yast_evalYPlookup_binding(T2,T3);
  bF1628 = T1;
  tmpF1629 = bF1628;
  if (tmpF1629 != YPfalse) {
    T6 = CALL1(1,VARREF(YastYbinding_info),bF1628);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T4 = T5;
  T0 = T4;
  return T0;
}

P Yast_evalYPbinding_value(P dlvar_) {
  P bindingF1630;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T1 = (P)Yast_evalYPdlvar_binding(dlvar_);
  bindingF1630 = T1;
  T4 = CALL1(1,VARREF(YastYbinding_kind),bindingF1630);
  T3 = CALL2(1,VARREF(YmacrosYEE),T4,LITREF(lit_76));
  if (T3 != YPfalse) {
    T6 = CALL1(1,VARREF(YastYbinding_locative),bindingF1630);
    T5 = CALL1(1,VARREF(Yast_evalYenv_runtime_value),T6);
    T2 = T5;
  } else {
    T7 = CALL1(1,VARREF(Yast_evalYenv_global_binding_value),bindingF1630);
    T2 = T7;
  }
  T0 = T2;
  return T0;
}

P Yast_evalYPbinding_value_setter(P val_,P dlvar_) {
  P bindingF1631;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T1 = (P)Yast_evalYPdlvar_binding(dlvar_);
  bindingF1631 = T1;
  T4 = CALL1(1,VARREF(YastYbinding_kind),bindingF1631);
  T3 = CALL2(1,VARREF(YmacrosYEE),T4,LITREF(lit_76));
  if (T3 != YPfalse) {
    T6 = CALL1(1,VARREF(YastYbinding_locative),bindingF1631);
    T5 = CALL2(1,VARREF(Yast_evalYenv_runtime_value_setter),val_,T6);
    T2 = T5;
  } else {
    T7 = CALL2(1,VARREF(Yast_evalYenv_global_binding_value_setter),val_,bindingF1631);
    T2 = T7;
  }
  T0 = T2;
  return T0;
}

P Yast_evalY___main_0___() {
  P T279,T278,T277,T276,T275,T274,T273,T272,T271,T270,T269,T268,T267,T266,T265,T264;
  P T263,T262,T261,T260,T259,T258,T257,T256,T255,T254,T253,T252,T251,T250,T249,T248;
  P T247,T246,T245,T244,T243,T242,T241,T240,T239,T238,T237,T236,T235,T234,T233,T232;
  P T231,T230,T229,T228,T227,T226,T225,T224,T223,T222,T221,T220,T219,T218,T217,T216;
  P T215,T214,T213,T212,T211,T210,T209,T208,T207,T206,T205,T204,T203,T202,T201,T200;
  P T199,T198,T197,T196,T195,T194,T193,T192,T191,T190,T189,T188,T187,T186,T185,T184;
  P T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168;
  P T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152;
  P T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136;
  P T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120;
  P T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104;
  P T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88;
  P T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72;
  P T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56;
  P T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40;
  P T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"env-global-binding-value");
  lit_1 = YPPsym((P)"b");
  lit_2 = YPsb((P)"Unbound binding: %=");
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_global_binding_value_0 = YPmet(FUNCODEREF(fun_env_global_binding_value_0),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(Yast_evalYenv_global_binding_value);
  if (T3 != YPfalse) {
    T2 = VARREF(Yast_evalYenv_global_binding_value);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_env_global_binding_value_0;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(Yast_evalYenv_global_binding_value,T1);
  lit_3 = YPPsym((P)"env-global-binding-value-setter");
  lit_4 = YPPsym((P)"value");
  T5 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_global_binding_value_setter_1 = YPmet(FUNCODEREF(fun_env_global_binding_value_setter_1),LITREF(lit_3),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(Yast_evalYenv_global_binding_value_setter);
  if (T8 != YPfalse) {
    T7 = VARREF(Yast_evalYenv_global_binding_value_setter);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_env_global_binding_value_setter_1;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(Yast_evalYenv_global_binding_value_setter,T6);
  lit_5 = YPPsym((P)"env-global-binding-bound?");
  T10 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_env_global_binding_boundQ_2 = YPmet(FUNCODEREF(fun_env_global_binding_boundQ_2),LITREF(lit_5),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(Yast_evalYenv_global_binding_boundQ);
  if (T13 != YPfalse) {
    T12 = VARREF(Yast_evalYenv_global_binding_boundQ);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_env_global_binding_boundQ_2;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(Yast_evalYenv_global_binding_boundQ,T11);
  lit_6 = YPPsym((P)"env-runtime-value");
  lit_7 = YPPsym((P)"x");
  T15 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLlocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_runtime_value_3 = YPmet(FUNCODEREF(fun_env_runtime_value_3),LITREF(lit_6),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(Yast_evalYenv_runtime_value);
  if (T18 != YPfalse) {
    T17 = VARREF(Yast_evalYenv_runtime_value);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_env_runtime_value_3;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(Yast_evalYenv_runtime_value,T16);
  lit_8 = YPPsym((P)"env-runtime-value-setter");
  lit_9 = YPPsym((P)"v");
  T20 = YPsig(YPPlist(2,LITREF(lit_9),LITREF(lit_7)),YPPlist(2,VARREF(YLanyG),VARREF(YLlocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_runtime_value_setter_4 = YPmet(FUNCODEREF(fun_env_runtime_value_setter_4),LITREF(lit_8),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(Yast_evalYenv_runtime_value_setter);
  if (T23 != YPfalse) {
    T22 = VARREF(Yast_evalYenv_runtime_value_setter);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_env_runtime_value_setter_4;
  T21 = CALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(Yast_evalYenv_runtime_value_setter,T21);
  lit_10 = YPPsym((P)"<loc-env>");
  T26 = (P)YPpair(VARREF(YLanyG),Ynil);
  T25 = CALL2(1,VARREF(Yfab_class),LITREF(lit_10),T26);
  VARSET(Yast_evalYLloc_envG,T25);
  lit_11 = YPPsym((P)"env-parent");
  lit_12 = YPPsym((P)"_x");
  T27 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_parent_5 = YPmet(FUNCODEREF(fun_env_parent_5),LITREF(lit_11),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(Yast_evalYenv_parent);
  if (T30 != YPfalse) {
    T29 = VARREF(Yast_evalYenv_parent);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_env_parent_5;
  T28 = CALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(Yast_evalYenv_parent,T28);
  lit_13 = YPPsym((P)"env-parent-setter");
  lit_14 = YPPsym((P)"_z");
  T32 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_parent_setter_6 = YPmet(FUNCODEREF(fun_env_parent_setter_6),LITREF(lit_13),T32,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(Yast_evalYenv_parent_setter);
  if (T35 != YPfalse) {
    T34 = VARREF(Yast_evalYenv_parent_setter);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_env_parent_setter_6;
  T33 = CALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(Yast_evalYenv_parent_setter,T33);
  T37 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T37,ENVNUL,PNUL,YPfalse);
  T38 = fun_7;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_evalYLloc_envG),VARREF(Yast_evalYenv_parent),VARREF(Yast_evalYenv_parent_setter),VARREF(YLanyG),T38);
  lit_15 = YPPsym((P)"env-function");
  T39 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_function_8 = YPmet(FUNCODEREF(fun_env_function_8),LITREF(lit_15),T39,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(Yast_evalYenv_function);
  if (T42 != YPfalse) {
    T41 = VARREF(Yast_evalYenv_function);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_env_function_8;
  T40 = CALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(Yast_evalYenv_function,T40);
  lit_16 = YPPsym((P)"env-function-setter");
  T44 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_function_setter_9 = YPmet(FUNCODEREF(fun_env_function_setter_9),LITREF(lit_16),T44,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(Yast_evalYenv_function_setter);
  if (T47 != YPfalse) {
    T46 = VARREF(Yast_evalYenv_function_setter);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_env_function_setter_9;
  T45 = CALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(Yast_evalYenv_function_setter,T45);
  T49 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T49,ENVNUL,PNUL,YPfalse);
  T50 = fun_10;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_evalYLloc_envG),VARREF(Yast_evalYenv_function),VARREF(Yast_evalYenv_function_setter),VARREF(YLanyG),T50);
  lit_17 = YPPsym((P)"env-names");
  T51 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_names_11 = YPmet(FUNCODEREF(fun_env_names_11),LITREF(lit_17),T51,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(Yast_evalYenv_names);
  if (T54 != YPfalse) {
    T53 = VARREF(Yast_evalYenv_names);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_env_names_11;
  T52 = CALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(Yast_evalYenv_names,T52);
  lit_18 = YPPsym((P)"env-names-setter");
  T56 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YLlstG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_names_setter_12 = YPmet(FUNCODEREF(fun_env_names_setter_12),LITREF(lit_18),T56,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(Yast_evalYenv_names_setter);
  if (T59 != YPfalse) {
    T58 = VARREF(Yast_evalYenv_names_setter);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_env_names_setter_12;
  T57 = CALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(Yast_evalYenv_names_setter,T57);
  T61 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T61,ENVNUL,PNUL,YPfalse);
  T62 = fun_13;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_evalYLloc_envG),VARREF(Yast_evalYenv_names),VARREF(Yast_evalYenv_names_setter),VARREF(YLlstG),T62);
  lit_19 = YPPsym((P)"env-values");
  T63 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_values_14 = YPmet(FUNCODEREF(fun_env_values_14),LITREF(lit_19),T63,ENVNUL,PNUL,YPfalse);
  T66 = BOUNDP(Yast_evalYenv_values);
  if (T66 != YPfalse) {
    T65 = VARREF(Yast_evalYenv_values);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_env_values_14;
  T64 = CALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(Yast_evalYenv_values,T64);
  lit_20 = YPPsym((P)"env-values-setter");
  T68 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YLvecG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_values_setter_15 = YPmet(FUNCODEREF(fun_env_values_setter_15),LITREF(lit_20),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(Yast_evalYenv_values_setter);
  if (T71 != YPfalse) {
    T70 = VARREF(Yast_evalYenv_values_setter);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_env_values_setter_15;
  T69 = CALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(Yast_evalYenv_values_setter,T69);
  T73 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T74 = fun_16;
  CALLN(1,VARREF(YPslot),5,VARREF(Yast_evalYLloc_envG),VARREF(Yast_evalYenv_values),VARREF(Yast_evalYenv_values_setter),VARREF(YLvecG),T74);
  T75 = CALL3(1,VARREF(YPisa),VARREF(Yast_evalYLloc_envG),Ynil,Ynil);
  VARSET(Yast_evalYDnul_loc_env,T75);
  lit_21 = YPPsym((P)"env-frame!");
  lit_22 = YPPsym((P)"env");
  lit_23 = YPPsym((P)"function");
  lit_24 = YPPsym((P)"names");
  lit_25 = YPPsym((P)"args");
  T76 = YPsig(YPPlist(4,LITREF(lit_22),LITREF(lit_23),LITREF(lit_24),LITREF(lit_25)),YPPlist(4,VARREF(Yast_evalYLloc_envG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)4),VARREF(Yast_evalYLloc_envG),Ynil);
  fun_env_frameX_17 = YPmet(FUNCODEREF(fun_env_frameX_17),LITREF(lit_21),T76,ENVNUL,PNUL,YPfalse);
  T79 = BOUNDP(Yast_evalYenv_frameX);
  if (T79 != YPfalse) {
    T78 = VARREF(Yast_evalYenv_frameX);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_env_frameX_17;
  T77 = CALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(Yast_evalYenv_frameX,T77);
  lit_26 = YPPsym((P)"env-local-value");
  lit_27 = YPPsym((P)"i");
  lit_28 = YPPsym((P)"j");
  T81 = YPsig(YPPlist(3,LITREF(lit_22),LITREF(lit_27),LITREF(lit_28)),YPPlist(3,VARREF(Yast_evalYLloc_envG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_local_value_18 = YPmet(FUNCODEREF(fun_env_local_value_18),LITREF(lit_26),T81,ENVNUL,PNUL,YPfalse);
  T84 = BOUNDP(Yast_evalYenv_local_value);
  if (T84 != YPfalse) {
    T83 = VARREF(Yast_evalYenv_local_value);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_env_local_value_18;
  T82 = CALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(Yast_evalYenv_local_value,T82);
  lit_29 = YPPsym((P)"env-local-value-setter");
  T86 = YPsig(YPPlist(4,LITREF(lit_9),LITREF(lit_22),LITREF(lit_27),LITREF(lit_28)),YPPlist(4,VARREF(YLanyG),VARREF(Yast_evalYLloc_envG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_env_local_value_setter_19 = YPmet(FUNCODEREF(fun_env_local_value_setter_19),LITREF(lit_29),T86,ENVNUL,PNUL,YPfalse);
  T89 = BOUNDP(Yast_evalYenv_local_value_setter);
  if (T89 != YPfalse) {
    T88 = VARREF(Yast_evalYenv_local_value_setter);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_env_local_value_setter_19;
  T87 = CALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(Yast_evalYenv_local_value_setter,T87);
  lit_30 = YPPsym((P)"env-binding-value");
  lit_31 = YPPsym((P)"name");
  lit_32 = YPPsym((P)"loop");
  T92 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_27)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_20 = YPmet(FUNCODEREF(fun_loop_20),LITREF(lit_32),T92,ENVNUL,PNUL,YPfalse);
  T91 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_31)),YPPlist(2,VARREF(Yast_evalYLloc_envG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_binding_value_21 = YPmet(FUNCODEREF(fun_env_binding_value_21),LITREF(lit_30),T91,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(Yast_evalYenv_binding_value);
  if (T95 != YPfalse) {
    T94 = VARREF(Yast_evalYenv_binding_value);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_env_binding_value_21;
  T93 = CALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(Yast_evalYenv_binding_value,T93);
  lit_33 = YPPsym((P)"env-binding-value-setter");
  T98 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_27)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_22 = YPmet(FUNCODEREF(fun_loop_22),LITREF(lit_32),T98,ENVNUL,PNUL,YPfalse);
  T97 = YPsig(YPPlist(3,LITREF(lit_9),LITREF(lit_22),LITREF(lit_31)),YPPlist(3,VARREF(YLanyG),VARREF(Yast_evalYLloc_envG),VARREF(YLsymG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_binding_value_setter_23 = YPmet(FUNCODEREF(fun_env_binding_value_setter_23),LITREF(lit_33),T97,ENVNUL,PNUL,YPfalse);
  T101 = BOUNDP(Yast_evalYenv_binding_value_setter);
  if (T101 != YPfalse) {
    T100 = VARREF(Yast_evalYenv_binding_value_setter);
  } else {
    T100 = YPfalse;
  }
  T102 = fun_env_binding_value_setter_23;
  T99 = CALL2(1,VARREF(YPdefine_method),T100,T102);
  VARSET(Yast_evalYenv_binding_value_setter,T99);
  lit_34 = YPPsym((P)"ast-evaluate");
  lit_35 = YPPsym((P)"e");
  T103 = YPsig(YPPlist(1,LITREF(lit_35)),YPPlist(1,VARREF(YastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_evaluate_24 = YPmet(FUNCODEREF(fun_ast_evaluate_24),LITREF(lit_34),T103,ENVNUL,PNUL,YPfalse);
  T106 = BOUNDP(YastYast_evaluate);
  if (T106 != YPfalse) {
    T105 = VARREF(YastYast_evaluate);
  } else {
    T105 = YPfalse;
  }
  T107 = fun_ast_evaluate_24;
  T104 = CALL2(1,VARREF(YPdefine_method),T105,T107);
  VARSET(YastYast_evaluate,T104);
  lit_36 = YPPsym((P)"ast-eval");
  T109 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YastYLprogramG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T108 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_36),T109,Ynil,YPfalse);
  VARSET(Yast_evalYast_eval,T108);
  T110 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YastYLconstantG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_25 = YPmet(FUNCODEREF(fun_ast_eval_25),LITREF(lit_36),T110,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(Yast_evalYast_eval);
  if (T113 != YPfalse) {
    T112 = VARREF(Yast_evalYast_eval);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_ast_eval_25;
  T111 = CALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(Yast_evalYast_eval,T111);
  T115 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YastYLraw_constantG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_26 = YPmet(FUNCODEREF(fun_ast_eval_26),LITREF(lit_36),T115,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(Yast_evalYast_eval);
  if (T118 != YPfalse) {
    T117 = VARREF(Yast_evalYast_eval);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_ast_eval_26;
  T116 = CALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(Yast_evalYast_eval,T116);
  lit_37 = YPPsym((P)"ee");
  T120 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_37)),YPPlist(2,VARREF(YastYLcompile_timeG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_27 = YPmet(FUNCODEREF(fun_ast_eval_27),LITREF(lit_36),T120,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(Yast_evalYast_eval);
  if (T123 != YPfalse) {
    T122 = VARREF(Yast_evalYast_eval);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_ast_eval_27;
  T121 = CALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(Yast_evalYast_eval,T121);
  lit_38 = YPPsym((P)"ast-eval-specs");
  lit_39 = YPPsym((P)"specs");
  lit_40 = YPPsym((P)"nary?");
  lit_41 = YPPsym((P)"res");
  T126 = YPsig(YPPlist(3,LITREF(lit_41),LITREF(lit_39),LITREF(lit_27)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_28 = YPmet(FUNCODEREF(fun_loop_28),LITREF(lit_32),T126,ENVNUL,PNUL,YPfalse);
  T125 = YPsig(YPPlist(3,LITREF(lit_39),LITREF(lit_40),LITREF(lit_22)),YPPlist(3,VARREF(YLlstG),VARREF(YLlogG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_specs_29 = YPmet(FUNCODEREF(fun_ast_eval_specs_29),LITREF(lit_38),T125,ENVNUL,PNUL,YPfalse);
  T129 = BOUNDP(Yast_evalYast_eval_specs);
  if (T129 != YPfalse) {
    T128 = VARREF(Yast_evalYast_eval_specs);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_ast_eval_specs_29;
  T127 = CALL2(1,VARREF(YPdefine_method),T128,T130);
  VARSET(Yast_evalYast_eval_specs,T127);
  T131 = CALL2(1,VARREF(YruntimeYfab),VARREF(YruntimeYLbufG),YPint((P)0));
  VARSET(Yast_evalYTstackT,T131);
  lit_42 = YPPsym((P)"arrange-arguments");
  lit_43 = YPPsym((P)"f");
  lit_44 = YPPsym((P)"arity");
  lit_45 = YPsb((P)"%= called with %=; needs at least %d arguments");
  lit_46 = YPsb((P)"%= called with %=; needs %d arguments");
  T132 = YPsig(YPPlist(4,LITREF(lit_43),LITREF(lit_40),LITREF(lit_44),LITREF(lit_25)),YPPlist(4,VARREF(YLanyG),VARREF(YLlogG),VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)4),VARREF(YLlstG),Ynil);
  Yast_evalYarrange_arguments = YPmet(FUNCODEREF(Yast_evalYarrange_arguments),LITREF(lit_42),T132,ENVNUL,PNUL,YPfalse);
  T133 = Yast_evalYarrange_arguments;
  VARSET(Yast_evalYarrange_arguments,T133);
  lit_47 = YPPsym((P)"exp");
  lit_48 = YPPsym((P)"return");
  lit_49 = YPPsym((P)"x-1310");
  lit_50 = YPPsym((P)"msg");
  lit_51 = YPPsym((P)"ifun");
  lit_52 = YPsb((P)"Match Pattern Failure");
  lit_53 = YPPsym((P)"fun");
  lit_54 = YPPsym((P)"arg-vector");
  lit_55 = YPPsym((P)"...");
  lit_56 = YPPsym((P)"let");
  lit_57 = YPPsym((P)"as");
  lit_58 = YPPsym((P)"<lst>");
  lit_59 = YPPsym((P)"nms");
  lit_60 = YPPsym((P)"%next-methods");
  lit_61 = YPPsym((P)"frame");
  lit_62 = YPPsym((P)"cat2");
  lit_63 = YPPsym((P)"lst");
  lit_64 = YPPsym((P)"quote");
  T136 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_25)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1310_31 = YPmet(FUNCODEREF(fun_x_1310_31),LITREF(lit_49),T136,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T135,ENVNUL,PNUL,YPfalse);
  T134 = YPsig(YPPlist(1,LITREF(lit_47)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T134,ENVNUL,PNUL,YPfalse);
  T137 = fun_33;
  YPmacro(YPPsym((P)"ast-eval"),YPPsym((P)"ifun"),T137);
  lit_65 = YPPsym((P)"as-fun-name");
  T138 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_34 = YPmet(FUNCODEREF(fun_as_fun_name_34),LITREF(lit_65),T138,ENVNUL,PNUL,YPfalse);
  T141 = BOUNDP(Yast_evalYas_fun_name);
  if (T141 != YPfalse) {
    T140 = VARREF(Yast_evalYas_fun_name);
  } else {
    T140 = YPfalse;
  }
  T142 = fun_as_fun_name_34;
  T139 = CALL2(1,VARREF(YPdefine_method),T140,T142);
  VARSET(Yast_evalYas_fun_name,T139);
  T143 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_35 = YPmet(FUNCODEREF(fun_as_fun_name_35),LITREF(lit_65),T143,ENVNUL,PNUL,YPfalse);
  T146 = BOUNDP(Yast_evalYas_fun_name);
  if (T146 != YPfalse) {
    T145 = VARREF(Yast_evalYas_fun_name);
  } else {
    T145 = YPfalse;
  }
  T147 = fun_as_fun_name_35;
  T144 = CALL2(1,VARREF(YPdefine_method),T145,T147);
  VARSET(Yast_evalYas_fun_name,T144);
  T148 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_36 = YPmet(FUNCODEREF(fun_as_fun_name_36),LITREF(lit_65),T148,ENVNUL,PNUL,YPfalse);
  T151 = BOUNDP(Yast_evalYas_fun_name);
  if (T151 != YPfalse) {
    T150 = VARREF(Yast_evalYas_fun_name);
  } else {
    T150 = YPfalse;
  }
  T152 = fun_as_fun_name_36;
  T149 = CALL2(1,VARREF(YPdefine_method),T150,T152);
  VARSET(Yast_evalYas_fun_name,T149);
  T153 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_37 = YPmet(FUNCODEREF(fun_as_fun_name_37),LITREF(lit_65),T153,ENVNUL,PNUL,YPfalse);
  T156 = BOUNDP(Yast_evalYas_fun_name);
  if (T156 != YPfalse) {
    T155 = VARREF(Yast_evalYas_fun_name);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_as_fun_name_37;
  T154 = CALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(Yast_evalYas_fun_name,T154);
  T158 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_as_fun_name_38 = YPmet(FUNCODEREF(fun_as_fun_name_38),LITREF(lit_65),T158,ENVNUL,PNUL,YPfalse);
  T161 = BOUNDP(Yast_evalYas_fun_name);
  if (T161 != YPfalse) {
    T160 = VARREF(Yast_evalYas_fun_name);
  } else {
    T160 = YPfalse;
  }
  T162 = fun_as_fun_name_38;
  T159 = CALL2(1,VARREF(YPdefine_method),T160,T162);
  VARSET(Yast_evalYas_fun_name,T159);
  T163 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_39 = YPmet(FUNCODEREF(fun_as_fun_name_39),LITREF(lit_65),T163,ENVNUL,PNUL,YPfalse);
  T166 = BOUNDP(Yast_evalYas_fun_name);
  if (T166 != YPfalse) {
    T165 = VARREF(Yast_evalYas_fun_name);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_as_fun_name_39;
  T164 = CALL2(1,VARREF(YPdefine_method),T165,T167);
  VARSET(Yast_evalYas_fun_name,T164);
  lit_66 = YPPsym((P)"export-proto-method");
  lit_67 = YPPsym((P)"body");
  T169 = YPsig(YPPlist(1,LITREF(lit_54)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(YPPlist(7,LITREF(lit_43),LITREF(lit_24),LITREF(lit_39),LITREF(lit_40),LITREF(lit_4),LITREF(lit_67),LITREF(lit_22)),YPPlist(7,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)7),VARREF(YLanyG),Ynil);
  fun_export_proto_method_41 = YPmet(FUNCODEREF(fun_export_proto_method_41),LITREF(lit_66),T168,ENVNUL,PNUL,YPfalse);
  T172 = BOUNDP(Yast_evalYexport_proto_method);
  if (T172 != YPfalse) {
    T171 = VARREF(Yast_evalYexport_proto_method);
  } else {
    T171 = YPfalse;
  }
  T173 = fun_export_proto_method_41;
  T170 = CALL2(1,VARREF(YPdefine_method),T171,T173);
  VARSET(Yast_evalYexport_proto_method,T170);
  T175 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T175,ENVNUL,PNUL,YPfalse);
  T174 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YastYLast_methodG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_43 = YPmet(FUNCODEREF(fun_ast_eval_43),LITREF(lit_36),T174,ENVNUL,PNUL,YPfalse);
  T178 = BOUNDP(Yast_evalYast_eval);
  if (T178 != YPfalse) {
    T177 = VARREF(Yast_evalYast_eval);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_ast_eval_43;
  T176 = CALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(Yast_evalYast_eval,T176);
  T180 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YastYLast_genericG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_44 = YPmet(FUNCODEREF(fun_ast_eval_44),LITREF(lit_36),T180,ENVNUL,PNUL,YPfalse);
  T183 = BOUNDP(Yast_evalYast_eval);
  if (T183 != YPfalse) {
    T182 = VARREF(Yast_evalYast_eval);
  } else {
    T182 = YPfalse;
  }
  T184 = fun_ast_eval_44;
  T181 = CALL2(1,VARREF(YPdefine_method),T182,T184);
  VARSET(Yast_evalYast_eval,T181);
  lit_68 = YPPsym((P)"env-local-reference-value");
  lit_69 = YPPsym((P)"ref");
  T185 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_69)),YPPlist(2,VARREF(Yast_evalYLloc_envG),VARREF(YastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_local_reference_value_45 = YPmet(FUNCODEREF(fun_env_local_reference_value_45),LITREF(lit_68),T185,ENVNUL,PNUL,YPfalse);
  T188 = BOUNDP(Yast_evalYenv_local_reference_value);
  if (T188 != YPfalse) {
    T187 = VARREF(Yast_evalYenv_local_reference_value);
  } else {
    T187 = YPfalse;
  }
  T189 = fun_env_local_reference_value_45;
  T186 = CALL2(1,VARREF(YPdefine_method),T187,T189);
  VARSET(Yast_evalYenv_local_reference_value,T186);
  lit_70 = YPPsym((P)"env-local-reference-value-setter");
  lit_71 = YPPsym((P)"val");
  T190 = YPsig(YPPlist(3,LITREF(lit_71),LITREF(lit_22),LITREF(lit_69)),YPPlist(3,VARREF(YLanyG),VARREF(Yast_evalYLloc_envG),VARREF(YastYLlocal_referenceG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_local_reference_value_setter_46 = YPmet(FUNCODEREF(fun_env_local_reference_value_setter_46),LITREF(lit_70),T190,ENVNUL,PNUL,YPfalse);
  T193 = BOUNDP(Yast_evalYenv_local_reference_value_setter);
  if (T193 != YPfalse) {
    T192 = VARREF(Yast_evalYenv_local_reference_value_setter);
  } else {
    T192 = YPfalse;
  }
  T194 = fun_env_local_reference_value_setter_46;
  T191 = CALL2(1,VARREF(YPdefine_method),T192,T194);
  VARSET(Yast_evalYenv_local_reference_value_setter,T191);
  T195 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YastYLlocal_referenceG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_47 = YPmet(FUNCODEREF(fun_ast_eval_47),LITREF(lit_36),T195,ENVNUL,PNUL,YPfalse);
  T198 = BOUNDP(Yast_evalYast_eval);
  if (T198 != YPfalse) {
    T197 = VARREF(Yast_evalYast_eval);
  } else {
    T197 = YPfalse;
  }
  T199 = fun_ast_eval_47;
  T196 = CALL2(1,VARREF(YPdefine_method),T197,T199);
  VARSET(Yast_evalYast_eval,T196);
  T200 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YastYLglobal_referenceG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_48 = YPmet(FUNCODEREF(fun_ast_eval_48),LITREF(lit_36),T200,ENVNUL,PNUL,YPfalse);
  T203 = BOUNDP(Yast_evalYast_eval);
  if (T203 != YPfalse) {
    T202 = VARREF(Yast_evalYast_eval);
  } else {
    T202 = YPfalse;
  }
  T204 = fun_ast_eval_48;
  T201 = CALL2(1,VARREF(YPdefine_method),T202,T204);
  VARSET(Yast_evalYast_eval,T201);
  T205 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YastYLruntime_referenceG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_49 = YPmet(FUNCODEREF(fun_ast_eval_49),LITREF(lit_36),T205,ENVNUL,PNUL,YPfalse);
  T208 = BOUNDP(Yast_evalYast_eval);
  if (T208 != YPfalse) {
    T207 = VARREF(Yast_evalYast_eval);
  } else {
    T207 = YPfalse;
  }
  T209 = fun_ast_eval_49;
  T206 = CALL2(1,VARREF(YPdefine_method),T207,T209);
  VARSET(Yast_evalYast_eval,T206);
  T210 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YastYLboundQG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_50 = YPmet(FUNCODEREF(fun_ast_eval_50),LITREF(lit_36),T210,ENVNUL,PNUL,YPfalse);
  T213 = BOUNDP(Yast_evalYast_eval);
  if (T213 != YPfalse) {
    T212 = VARREF(Yast_evalYast_eval);
  } else {
    T212 = YPfalse;
  }
  T214 = fun_ast_eval_50;
  T211 = CALL2(1,VARREF(YPdefine_method),T212,T214);
  VARSET(Yast_evalYast_eval,T211);
  lit_72 = YPPsym((P)"ast-eval-bound?");
  lit_73 = YPPsym((P)"binding");
  lit_74 = YPPsym((P)"global");
  T215 = YPsig(YPPlist(3,LITREF(lit_35),LITREF(lit_73),LITREF(lit_22)),YPPlist(3,VARREF(YastYLboundQG),VARREF(YastYLmodule_bindingG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_boundQ_51 = YPmet(FUNCODEREF(fun_ast_eval_boundQ_51),LITREF(lit_72),T215,ENVNUL,PNUL,YPfalse);
  T218 = BOUNDP(Yast_evalYast_eval_boundQ);
  if (T218 != YPfalse) {
    T217 = VARREF(Yast_evalYast_eval_boundQ);
  } else {
    T217 = YPfalse;
  }
  T219 = fun_ast_eval_boundQ_51;
  T216 = CALL2(1,VARREF(YPdefine_method),T217,T219);
  VARSET(Yast_evalYast_eval_boundQ,T216);
  T220 = YPsig(YPPlist(3,LITREF(lit_35),LITREF(lit_73),LITREF(lit_22)),YPPlist(3,VARREF(YastYLboundQG),VARREF(YastYLlocal_bindingG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_boundQ_52 = YPmet(FUNCODEREF(fun_ast_eval_boundQ_52),LITREF(lit_72),T220,ENVNUL,PNUL,YPfalse);
  T223 = BOUNDP(Yast_evalYast_eval_boundQ);
  if (T223 != YPfalse) {
    T222 = VARREF(Yast_evalYast_eval_boundQ);
  } else {
    T222 = YPfalse;
  }
  T224 = fun_ast_eval_boundQ_52;
  T221 = CALL2(1,VARREF(YPdefine_method),T222,T224);
  VARSET(Yast_evalYast_eval_boundQ,T221);
  T225 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YastYLglobal_assignmentG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_53 = YPmet(FUNCODEREF(fun_ast_eval_53),LITREF(lit_36),T225,ENVNUL,PNUL,YPfalse);
  T228 = BOUNDP(Yast_evalYast_eval);
  if (T228 != YPfalse) {
    T227 = VARREF(Yast_evalYast_eval);
  } else {
    T227 = YPfalse;
  }
  T229 = fun_ast_eval_53;
  T226 = CALL2(1,VARREF(YPdefine_method),T227,T229);
  VARSET(Yast_evalYast_eval,T226);
  T230 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YastYLast_macro_definitionG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_54 = YPmet(FUNCODEREF(fun_ast_eval_54),LITREF(lit_36),T230,ENVNUL,PNUL,YPfalse);
  T233 = BOUNDP(Yast_evalYast_eval);
  if (T233 != YPfalse) {
    T232 = VARREF(Yast_evalYast_eval);
  } else {
    T232 = YPfalse;
  }
  T234 = fun_ast_eval_54;
  T231 = CALL2(1,VARREF(YPdefine_method),T232,T234);
  VARSET(Yast_evalYast_eval,T231);
  T235 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YastYLruntime_assignmentG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_55 = YPmet(FUNCODEREF(fun_ast_eval_55),LITREF(lit_36),T235,ENVNUL,PNUL,YPfalse);
  T238 = BOUNDP(Yast_evalYast_eval);
  if (T238 != YPfalse) {
    T237 = VARREF(Yast_evalYast_eval);
  } else {
    T237 = YPfalse;
  }
  T239 = fun_ast_eval_55;
  T236 = CALL2(1,VARREF(YPdefine_method),T237,T239);
  VARSET(Yast_evalYast_eval,T236);
  T240 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YastYLlocal_assignmentG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_56 = YPmet(FUNCODEREF(fun_ast_eval_56),LITREF(lit_36),T240,ENVNUL,PNUL,YPfalse);
  T243 = BOUNDP(Yast_evalYast_eval);
  if (T243 != YPfalse) {
    T242 = VARREF(Yast_evalYast_eval);
  } else {
    T242 = YPfalse;
  }
  T244 = fun_ast_eval_56;
  T241 = CALL2(1,VARREF(YPdefine_method),T242,T244);
  VARSET(Yast_evalYast_eval,T241);
  lit_75 = YPPsym((P)"env-define-binding!");
  lit_76 = YPPsym((P)"runtime");
  lit_77 = YPsb((P)"Defining invalid binding kind %=");
  T245 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_define_bindingX_57 = YPmet(FUNCODEREF(fun_env_define_bindingX_57),LITREF(lit_75),T245,ENVNUL,PNUL,YPfalse);
  T248 = BOUNDP(Yast_evalYenv_define_bindingX);
  if (T248 != YPfalse) {
    T247 = VARREF(Yast_evalYenv_define_bindingX);
  } else {
    T247 = YPfalse;
  }
  T249 = fun_env_define_bindingX_57;
  T246 = CALL2(1,VARREF(YPdefine_method),T247,T249);
  VARSET(Yast_evalYenv_define_bindingX,T246);
  T250 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YastYLdefinitionG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_58 = YPmet(FUNCODEREF(fun_ast_eval_58),LITREF(lit_36),T250,ENVNUL,PNUL,YPfalse);
  T253 = BOUNDP(Yast_evalYast_eval);
  if (T253 != YPfalse) {
    T252 = VARREF(Yast_evalYast_eval);
  } else {
    T252 = YPfalse;
  }
  T254 = fun_ast_eval_58;
  T251 = CALL2(1,VARREF(YPdefine_method),T252,T254);
  VARSET(Yast_evalYast_eval,T251);
  T255 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YastYLalternativeG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_59 = YPmet(FUNCODEREF(fun_ast_eval_59),LITREF(lit_36),T255,ENVNUL,PNUL,YPfalse);
  T258 = BOUNDP(Yast_evalYast_eval);
  if (T258 != YPfalse) {
    T257 = VARREF(Yast_evalYast_eval);
  } else {
    T257 = YPfalse;
  }
  T259 = fun_ast_eval_59;
  T256 = CALL2(1,VARREF(YPdefine_method),T257,T259);
  VARSET(Yast_evalYast_eval,T256);
  lit_78 = YPPsym((P)"eval");
  T261 = YPsig(YPPlist(1,LITREF(lit_35)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_eval_60 = YPmet(FUNCODEREF(fun_eval_60),LITREF(lit_78),T261,ENVNUL,PNUL,YPfalse);
  T260 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YastYLsequentialG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_61 = YPmet(FUNCODEREF(fun_ast_eval_61),LITREF(lit_36),T260,ENVNUL,PNUL,YPfalse);
  T264 = BOUNDP(Yast_evalYast_eval);
  if (T264 != YPfalse) {
    T263 = VARREF(Yast_evalYast_eval);
  } else {
    T263 = YPfalse;
  }
  T265 = fun_ast_eval_61;
  T262 = CALL2(1,VARREF(YPdefine_method),T263,T265);
  VARSET(Yast_evalYast_eval,T262);
  T267 = YPsig(YPPlist(2,LITREF(lit_41),LITREF(lit_25)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_62 = YPmet(FUNCODEREF(fun_eval_62),LITREF(lit_78),T267,ENVNUL,PNUL,YPfalse);
  T266 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YastYLargumentsG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_63 = YPmet(FUNCODEREF(fun_ast_eval_63),LITREF(lit_36),T266,ENVNUL,PNUL,YPfalse);
  T270 = BOUNDP(Yast_evalYast_eval);
  if (T270 != YPfalse) {
    T269 = VARREF(Yast_evalYast_eval);
  } else {
    T269 = YPfalse;
  }
  T271 = fun_ast_eval_63;
  T268 = CALL2(1,VARREF(YPdefine_method),T269,T271);
  VARSET(Yast_evalYast_eval,T268);
  T274 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YastYLregular_applicationG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T273 = fun_ast_eval_64 = YPmet(FUNCODEREF(fun_ast_eval_64),LITREF(lit_36),T274,ENVNUL,PNUL,YPfalse);
  T278 = BOUNDP(Yast_evalYast_eval);
  if (T278 != YPfalse) {
    T277 = VARREF(Yast_evalYast_eval);
  } else {
    T277 = YPfalse;
  }
  T279 = fun_ast_eval_64;
  T276 = CALL2(1,VARREF(YPdefine_method),T277,T279);
  T275 = VARSET(Yast_evalYast_eval,T276);
  T272 = T275;
  return T272;
}

P Yast_evalY___main_1___() {
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
loop:
  T0 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YastYLpredefined_applicationG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_65 = YPmet(FUNCODEREF(fun_ast_eval_65),LITREF(lit_36),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(Yast_evalYast_eval);
  if (T3 != YPfalse) {
    T2 = VARREF(Yast_evalYast_eval);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_ast_eval_65;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(Yast_evalYast_eval,T1);
  T5 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YastYLfix_letG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_66 = YPmet(FUNCODEREF(fun_ast_eval_66),LITREF(lit_36),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(Yast_evalYast_eval);
  if (T8 != YPfalse) {
    T7 = VARREF(Yast_evalYast_eval);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_ast_eval_66;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(Yast_evalYast_eval,T6);
  T11 = YPsig(YPPlist(2,LITREF(lit_31),LITREF(lit_4)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_67 = YPmet(FUNCODEREF(fun_67),YPfalse,T11,ENVNUL,PNUL,YPfalse);
  T10 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YastYLlocalsG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_68 = YPmet(FUNCODEREF(fun_ast_eval_68),LITREF(lit_36),T10,ENVNUL,PNUL,YPfalse);
  T14 = BOUNDP(Yast_evalYast_eval);
  if (T14 != YPfalse) {
    T13 = VARREF(Yast_evalYast_eval);
  } else {
    T13 = YPfalse;
  }
  T15 = fun_ast_eval_68;
  T12 = CALL2(1,VARREF(YPdefine_method),T13,T15);
  VARSET(Yast_evalYast_eval,T12);
  T18 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T18,ENVNUL,PNUL,YPfalse);
  T17 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T17,ENVNUL,PNUL,YPfalse);
  T16 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YastYLbind_exitG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_71 = YPmet(FUNCODEREF(fun_ast_eval_71),LITREF(lit_36),T16,ENVNUL,PNUL,YPfalse);
  T21 = BOUNDP(Yast_evalYast_eval);
  if (T21 != YPfalse) {
    T20 = VARREF(Yast_evalYast_eval);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_ast_eval_71;
  T19 = CALL2(1,VARREF(YPdefine_method),T20,T22);
  VARSET(Yast_evalYast_eval,T19);
  T25 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T25,ENVNUL,PNUL,YPfalse);
  T24 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T24,ENVNUL,PNUL,YPfalse);
  T23 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YastYLunwind_protectG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_74 = YPmet(FUNCODEREF(fun_ast_eval_74),LITREF(lit_36),T23,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(Yast_evalYast_eval);
  if (T28 != YPfalse) {
    T27 = VARREF(Yast_evalYast_eval);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_ast_eval_74;
  T26 = CALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(Yast_evalYast_eval,T26);
  T30 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YastYLmonitorG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_75 = YPmet(FUNCODEREF(fun_ast_eval_75),LITREF(lit_36),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(Yast_evalYast_eval);
  if (T33 != YPfalse) {
    T32 = VARREF(Yast_evalYast_eval);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_ast_eval_75;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(Yast_evalYast_eval,T31);
  lit_79 = YPPsym((P)"init-environment-for-eval");
  lit_80 = YPPsym((P)"predefined");
  lit_81 = YPPsym((P)"%pair");
  T35 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YastYinit_environment_for_eval = YPmet(FUNCODEREF(YastYinit_environment_for_eval),LITREF(lit_79),T35,ENVNUL,PNUL,YPfalse);
  T36 = YastYinit_environment_for_eval;
  VARSET(YastYinit_environment_for_eval,T36);
  T37 = YPfalse;
  return T37;
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
  {"env-parent-setter", &Yast_evalYenv_parent_setter},
  {"env-local-reference-value-setter", &Yast_evalYenv_local_reference_value_setter},
  {"$nul-loc-env", &Yast_evalYDnul_loc_env},
  {"*stack*", &Yast_evalYTstackT},
  {"%dlvar-nam", NULL},
  {"%ensure-binding", NULL},
  {"%lookup-binding", NULL},
  {"%dlvar-setter", NULL},
  {"%dlvar-binding", NULL},
  {"export-proto-method", &Yast_evalYexport_proto_method},
  {"%binding-bound?", NULL},
  {"%binding-value-setter", NULL},
  {"ast-eval-bound?", &Yast_evalYast_eval_boundQ},
  {"ifun", NULL},
  {"%dlvar", NULL},
  {"env-function", &Yast_evalYenv_function},
  {"env-global-binding-value", &Yast_evalYenv_global_binding_value},
  {"env-names-setter", &Yast_evalYenv_names_setter},
  {"<loc-env>", &Yast_evalYLloc_envG},
  {"ast-eval-specs", &Yast_evalYast_eval_specs},
  {"env-values-setter", &Yast_evalYenv_values_setter},
  {"arrange-arguments", &Yast_evalYarrange_arguments},
  {"ast-eval", &Yast_evalYast_eval},
  {"env-global-binding-bound?", &Yast_evalYenv_global_binding_boundQ},
  {"as-fun-name", &Yast_evalYas_fun_name},
  {"env-define-binding!", &Yast_evalYenv_define_bindingX},
  {"%dlvar-mod", NULL},
  {"env-binding-value", &Yast_evalYenv_binding_value},
  {"env-values", &Yast_evalYenv_values},
  {"%binding-value", NULL},
  {"env-parent", &Yast_evalYenv_parent},
  {"env-global-binding-value-setter", &Yast_evalYenv_global_binding_value_setter},
  {"env-runtime-value-setter", &Yast_evalYenv_runtime_value_setter},
  {"env-local-reference-value", &Yast_evalYenv_local_reference_value},
  {"%define-binding", NULL},
  {"env-names", &Yast_evalYenv_names},
  {"env-frame!", &Yast_evalYenv_frameX},
  {"env-local-value", &Yast_evalYenv_local_value},
  {"env-binding-value-setter", &Yast_evalYenv_binding_value_setter},
  {"env-local-value-setter", &Yast_evalYenv_local_value_setter},
  {"env-runtime-value", &Yast_evalYenv_runtime_value},
  {"---main-1---", NULL},
  {"---main-0---", NULL},
  {"env-function-setter", &Yast_evalYenv_function_setter},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"%binding-value-setter", "%binding-value-setter"},
  {"%binding-bound?", "%binding-bound?"},
  {"%binding-value", "%binding-value"},
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
