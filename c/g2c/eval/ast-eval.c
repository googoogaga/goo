/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: ast-eval */

EXT(YastYinit_ast,"ast","init-ast");
EXT(YruntimeYlogxor,"runtime","logxor");
EXT(YruntimeYdel_dups,"runtime","del-dups");
EXT(YLlocG,"boot","<loc>");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(YLseqG,"boot","<seq>");
DEF(Yast_evalYexport_proto_method,"ast-eval","export-proto-method");
EXT(YastYbinding_info,"ast","binding-info");
EXT(YastYLcomputed_programG,"ast","<computed-program>");
EXT(YruntimeYS,"runtime","/");
EXT(YruntimeYreduceA,"runtime","reduce+");
EXT(YastYLunwind_protectG,"ast","<unwind-protect>");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(YastYunwind_protect_protected_thunk,"ast","unwind-protect-protected-thunk");
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
EXT(YmacrosYpair,"macros","pair");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YastYLast_primitiveG,"ast","<ast-primitive>");
EXT(YruntimeYzeroQ,"runtime","zero?");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YLtraitsG,"boot","<traits>");
DEF(Yast_evalYenv_runtime_value,"ast-eval","env-runtime-value");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(Yfapply,"boot","fapply");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YruntimeYmap2,"runtime","map2");
EXT(YastYfunction_body_setter,"ast","function-body-setter");
DEF(Yast_evalYTstackT,"ast-eval","*stack*");
EXT(YastYalternative_alternant,"ast","alternative-alternant");
EXT(YruntimeYdo3,"runtime","do3");
EXT(YastYmodule_name,"ast","module-name");
EXT(YruntimeYreduce,"runtime","reduce");
EXT(YLsigG,"boot","<sig>");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(YastYDproto_boot_module_name,"ast","$proto-boot-module-name");
EXT(YastYset_module_environments,"ast","set-module-environments");
EXT(YastYDproto_runtime_module_name,"ast","$proto-runtime-module-name");
EXT(YastYmonitor_handler,"ast","monitor-handler");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(YastYload_in,"ast","load-in");
EXT(YobjectL,"boot","object<");
EXT(YastYassignment_form,"ast","assignment-form");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YruntimeYtA,"runtime","t+");
EXT(YruntimeYfrom,"runtime","from");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YastYprogram_register_setter,"ast","program-register-setter");
EXT(YastYlocals_body_setter,"ast","locals-body-setter");
DEF(Yast_evalYenv_names_setter,"ast-eval","env-names-setter");
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
EXT(Yslot_setter,"boot","slot-setter");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
EXT(YPsymbols,"boot","%symbols");
DEF(Yast_evalYenv_binding_value,"ast-eval","env-binding-value");
EXT(YastYfix_let_types,"ast","fix-let-types");
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
EXT(YruntimeYstr,"runtime","str");
EXT(YastYsignature_specs,"ast","signature-specs");
EXT(YruntimeYpush,"runtime","push");
EXT(YruntimeYsig,"runtime","sig");
EXT(YastYast_define_binding,"ast","ast-define-binding");
EXT(YLcolG,"boot","<col>");
DEF(Yast_evalYenv_global_binding_boundQ,"ast-eval","env-global-binding-bound?");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(YastYLfab_listG,"ast","<fab-list>");
EXT(YruntimeYmax,"runtime","max");
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
EXT(YruntimeYformat,"runtime","format");
EXT(YruntimeYpick,"runtime","pick");
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
EXT(YastYfunction_bindings,"ast","function-bindings");
EXT(YruntimeYfloor,"runtime","floor");
EXT(YruntimeYidentity,"runtime","identity");
EXT(Ynil,"boot","nil");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YruntimeYnewline,"runtime","newline");
EXT(YruntimeYaddress_of,"runtime","address-of");
DEF(Yast_evalYenv_global_binding_value_setter,"ast-eval","env-global-binding-value-setter");
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
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(YastYsignature_bindings,"ast","signature-bindings");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
EXT(YLtupG,"boot","<tup>");
EXT(YastYboundQ_reference,"ast","bound?-reference");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
DEF(Yast_evalYenv_names,"ast-eval","env-names");
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
EXT(YastYmodule_loader_module_type,"ast","module-loader-module-type");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
EXT(Ynul,"boot","nul");
EXT(YruntimeYLstepG,"runtime","<step>");
EXT(YastYreference_called_functionQ,"ast","reference-called-function?");
DEF(Yast_evalYast_eval_specs,"ast-eval","ast-eval-specs");
EXT(Ytail_setter,"boot","tail-setter");
EXT(YruntimeYwrite_string,"runtime","write-string");
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
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YastYfix_let_bindings_setter,"ast","fix-let-bindings-setter");
EXT(YruntimeYnegQ,"runtime","neg?");
EXT(YastYLast_primitive_definitionG,"ast","<ast-primitive-definition>");
EXT(YruntimeYlocative_value,"runtime","locative-value");
DEF(Yast_evalYLloc_envG,"ast-eval","<loc-env>");
EXT(YastYmonitor_type,"ast","monitor-type");
EXT(YastYLglobal_referenceG,"ast","<global-reference>");
EXT(YLgenG,"boot","<gen>");
EXT(YastYfab_p2c_module,"ast","fab-p2c-module");
EXT(YastYLast_macro_definitionG,"ast","<ast-macro-definition>");
EXT(YruntimeYread,"runtime","read");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(YastYalternative_condition,"ast","alternative-condition");
EXT(YastYfix_let_body,"ast","fix-let-body");
EXT(YmacrosYEE,"macros","==");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(YastYsignature_names,"ast","signature-names");
EXT(YastYfree_implemented_foreign_bindings,"ast","free-implemented-foreign-bindings");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YastYmonitor_info,"ast","monitor-info");
EXT(YastYbinding_dynamic_extentQ_setter,"ast","binding-dynamic-extent?-setter");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YastYfix_let_body_setter,"ast","fix-let-body-setter");
EXT(YastYapplication_function,"ast","application-function");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YruntimeYassq,"runtime","assq");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(YastYbinding_locative,"ast","binding-locative");
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
EXT(YLanyG,"boot","<any>");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
EXT(YastYbinding_name,"ast","binding-name");
EXT(YastYLdefinitionG,"ast","<definition>");
DEF(Yast_evalYast_eval,"ast-eval","ast-eval");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
EXT(YruntimeYtruncate,"runtime","truncate");
EXT(YruntimeYlen_setter,"runtime","len-setter");
DEF(Yast_evalYenv_local_value,"ast-eval","env-local-value");
EXT(Yobject_slots,"boot","object-slots");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(YLoptsG,"boot","<opts>");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
EXT(YastYinit_environment_for_eval,"ast","init-environment-for-eval");
DEF(Yast_evalYenv_binding_value_setter,"ast-eval","env-binding-value-setter");
EXT(YastYLpredefined_applicationG,"ast","<predefined-application>");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YruntimeYfloorS,"runtime","floor/");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(YastYfunction_naryQ,"ast","function-nary?");
EXT(YastYsignature_names_setter,"ast","signature-names-setter");
EXT(Yslot_type,"boot","slot-type");
EXT(YruntimeYdo2,"runtime","do2");
EXT(YastYreference_frame_offset,"ast","reference-frame-offset");
EXT(YastYLast_genericG,"ast","<ast-generic>");
DEF(Yast_evalYas_fun_name,"ast-eval","as-fun-name");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYA,"runtime","+");
EXT(YastYfunction_signature_setter,"ast","function-signature-setter");
EXT(YLintG,"boot","<int>");
EXT(YruntimeYpos,"runtime","pos");
DEF(Yast_evalYenv_function_setter,"ast-eval","env-function-setter");
DEF(Yast_evalYenv_local_value_setter,"ast-eval","env-local-value-setter");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YruntimeYkeys,"runtime","keys");
EXT(Yfind_setter,"boot","find-setter");
EXT(YastYLconstantG,"ast","<constant>");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YastYload_module,"ast","load-module");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YastYbinding_global_box,"ast","binding-global-box");
EXT(YastYbinding_value,"ast","binding-value");
EXT(YastYfunction_signature,"ast","function-signature");
EXT(YastYapplication_knownQ_setter,"ast","application-known?-setter");
EXT(YLnumG,"boot","<num>");
EXT(YastYsignature_naryQ,"ast","signature-nary?");
EXT(YastYprogram_register,"ast","program-register");
DEF(Yast_evalYenv_global_binding_value,"ast-eval","env-global-binding-value");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(YastYglobal_box_value,"ast","global-box-value");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YastYbinding_value_setter,"ast","binding-value-setter");
EXT(YLstrG,"boot","<str>");
EXT(YastYmodule_binding,"ast","module-binding");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YruntimeYPwith_monitor,"runtime","%with-monitor");
DEF(Yast_evalYenv_runtime_value_setter,"ast-eval","env-runtime-value-setter");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YastYunwind_protect_cleanup_thunk,"ast","unwind-protect-cleanup-thunk");
EXT(YastYmonitor_test,"ast","monitor-test");
EXT(YastYassignment_reference,"ast","assignment-reference");
EXT(YastYapplication_binding,"ast","application-binding");
EXT(YastYapplication_tailQ,"ast","application-tail?");
EXT(Ysym_name,"boot","sym-name");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YPdefine_method,"boot","%define-method");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
EXT(YastYLregular_applicationG,"ast","<regular-application>");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YruntimeYash,"runtime","ash");
EXT(YruntimeYto_digit,"runtime","to-digit");
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
DEF(Yast_evalYenv_parent_setter,"ast-eval","env-parent-setter");
EXT(YastYbind_exit_main_fun,"ast","bind-exit-main-fun");
DEF(Yast_evalYenv_define_bindingX,"ast-eval","env-define-binding!");
EXT(YastYfunction_debug_name,"ast","function-debug-name");
EXT(YruntimeYalways,"runtime","always");
EXT(YastYLstatic_global_environmentG,"ast","<static-global-environment>");
EXT(YruntimeYsub,"runtime","sub");
EXT(YastYLlocal_referenceG,"ast","<local-reference>");
EXT(YastYLreal_referenceG,"ast","<real-reference>");
DEF(Yast_evalYast_eval_boundQ,"ast-eval","ast-eval-bound?");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
EXT(YastYfix_let_arguments,"ast","fix-let-arguments");
EXT(YruntimeYlsh,"runtime","lsh");
EXT(YastYbinding_type,"ast","binding-type");
EXT(YruntimeYmemQ,"runtime","mem?");
EXT(YastYobjectify_quotation,"ast","objectify-quotation");
EXT(YastYbinding_kind,"ast","binding-kind");
DEF(Yast_evalYenv_frameX,"ast-eval","env-frame!");
EXT(YastYLpassive_programG,"ast","<passive-program>");
EXT(YruntimeYfind_key,"runtime","find-key");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YruntimeYin,"runtime","in");
EXT(YastYLlocal_assignmentG,"ast","<local-assignment>");
EXT(YruntimeYfill,"runtime","fill");
EXT(YruntimeYalter,"runtime","alter");
EXT(YruntimeYout,"runtime","out");
EXT(YastYLast_signatureG,"ast","<ast-signature>");
DEF(Yast_evalYenv_local_reference_value,"ast-eval","env-local-reference-value");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(YastYbinding_type_setter,"ast","binding-type-setter");
EXT(YastYlocals_functions_setter,"ast","locals-functions-setter");
EXT(YastYreference_frame_number,"ast","reference-frame-number");
EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(Ylst,"boot","lst");
EXT(Yfind_getter,"boot","find-getter");
EXT(Yobject_direct_slots,"boot","object-direct-slots");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YastYLprogramsG,"ast","<programs>");
EXT(YastYalternative_consequent,"ast","alternative-consequent");
EXT(YruntimeYempty,"runtime","empty");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YastYast_evaluate,"ast","ast-evaluate");
EXT(YastYdo_module_loader_modules,"ast","do-module-loader-modules");
EXT(YLmetG,"boot","<met>");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YastYbinding_info_setter,"ast","binding-info-setter");
EXT(YruntimeYtL,"runtime","t<");
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
EXT(YruntimeYLmapG,"runtime","<map>");
DEF(Yast_evalYenv_values,"ast-eval","env-values");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
DEF(Yast_evalYenv_local_reference_value_setter,"ast-eval","env-local-reference-value-setter");
EXT(YPvnul,"boot","%vnul");
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
EXT(YastYLast_functionG,"ast","<ast-function>");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YastYLraw_constantG,"ast","<raw-constant>");
EXT(Yadd_slot,"boot","add-slot");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(YruntimeYeof_object,"runtime","eof-object");
EXT(YruntimeYforce_output,"runtime","force-output");
DEF(Yast_evalYDnul_loc_env,"ast-eval","$nul-loc-env");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YastYfix_let_bindings,"ast","fix-let-bindings");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YLlstG,"boot","<lst>");
EXT(YastYobjectify,"ast","objectify");
EXT(Yhead_setter,"boot","head-setter");
DEF(Yast_evalYenv_function,"ast-eval","env-function");
EXT(YastYLlocal_bindingG,"ast","<local-binding>");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YPPmacro,"boot","%%macro");
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(YPcall_next_method,"boot","%call-next-method");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YastYLglobal_boxG,"ast","<global-box>");
EXT(YLfunG,"boot","<fun>");
EXT(YruntimeYtE,"runtime","t=");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(YruntimeYfrom_to,"runtime","from-to");
DEF(Yast_evalYenv_parent,"ast-eval","env-parent");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
DEF(Yast_evalYenv_values_setter,"ast-eval","env-values-setter");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_46);
DEFLIT(lit_62);
DEFLIT(lit_6);
DEFLIT(lit_30);
DEFLIT(lit_54);
DEFLIT(lit_55);
DEFLIT(lit_71);
DEFLIT(lit_39);
DEFLIT(lit_60);
DEFLIT(lit_34);
DEFLIT(lit_52);
DEFLIT(lit_80);
DEFLIT(lit_56);
DEFLIT(lit_43);
DEFLIT(lit_18);
DEFLIT(lit_37);
DEFLIT(lit_79);
DEFLIT(lit_58);
DEFLIT(lit_32);
DEFLIT(lit_64);
DEFLIT(lit_40);
DEFLIT(lit_27);
DEFLIT(lit_7);
DEFLIT(lit_2);
DEFLIT(lit_63);
DEFLIT(lit_31);
DEFLIT(lit_33);
DEFLIT(lit_51);
DEFLIT(lit_29);
DEFLIT(lit_66);
DEFLIT(lit_8);
DEFLIT(lit_9);
DEFLIT(lit_5);
DEFLIT(lit_16);
DEFLIT(lit_78);
DEFLIT(lit_48);
DEFLIT(lit_0);
DEFLIT(lit_11);
DEFLIT(lit_45);
DEFLIT(lit_12);
DEFLIT(lit_72);
DEFLIT(lit_13);
DEFLIT(lit_44);
DEFLIT(lit_49);
DEFLIT(lit_28);
DEFLIT(lit_69);
DEFLIT(lit_20);
DEFLIT(lit_15);
DEFLIT(lit_61);
DEFLIT(lit_14);
DEFLIT(lit_77);
DEFLIT(lit_68);
DEFLIT(lit_23);
DEFLIT(lit_74);
DEFLIT(lit_42);
DEFLIT(lit_57);
DEFLIT(lit_81);
DEFLIT(lit_1);
DEFLIT(lit_41);
DEFLIT(lit_67);
DEFLIT(lit_65);
DEFLIT(lit_36);
DEFLIT(lit_75);
DEFLIT(lit_10);
DEFLIT(lit_38);
DEFLIT(lit_21);
DEFLIT(lit_35);
DEFLIT(lit_70);
DEFLIT(lit_73);
DEFLIT(lit_24);
DEFLIT(lit_22);
DEFLIT(lit_59);
DEFLIT(lit_50);
DEFLIT(lit_4);
DEFLIT(lit_53);
DEFLIT(lit_17);
DEFLIT(lit_25);
DEFLIT(lit_47);
DEFLIT(lit_3);
DEFLIT(lit_26);
DEFLIT(lit_76);
DEFLIT(lit_19);

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
LOCFOR(fun_x_1265_30);
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
  P boxF1468;
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T5 = CALL1(CHKREF(YastYbinding_global_box),b_);
  boxF1468 = T5;
  if (boxF1468 != YPfalse) {
    T4 = CALL1(CHKREF(YastYglobal_box_value),boxF1468);
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
  P boxF1469;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T10 = CALL1(CHKREF(YastYbinding_global_box),b_);
  boxF1469 = T10;
  boxF1469 = BOXFAB(boxF1469);
  T7 = BOXVAL(boxF1469);
  T6 = CALL1(CHKREF(Ynot),T7);
  if (T6 != YPfalse) {
    T5 = (P)YPpair(CHKREF(YastYLglobal_boxG),Ynil);
    T4 = CALL3(CHKREF(YPisa),T5,Ynil,Ynil);
    T3 = CALL2(CHKREF(YastYbinding_global_box_setter),T4,b_);
    T2 = BOXVAL(boxF1469) = T3;
  } else {
  }
  T9 = BOXVAL(boxF1469);
  T8 = CALL2(CHKREF(YastYglobal_box_value_setter),value_,T9);
  T0 = T8;
  QRET(T0);
}

FUNCODEDEF(fun_2) {
  ARG(b_, 0);
  P boxF1470;
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL1(CHKREF(YastYbinding_global_box),b_);
  boxF1470 = T2;
  if (boxF1470 != YPfalse) {
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
  P valuesF1471;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T11 = CALL2(CHKREF(YruntimeYas),CHKREF(YLvecG),args_);
  valuesF1471 = T11;
  T10 = (P)YPpair(CHKREF(Yast_evalYLloc_envG),Ynil);
  T9 = (P)YPpair(CHKREF(Yast_evalYenv_names),Ynil);
  T8 = (P)YPpair(CHKREF(Yast_evalYenv_values),T9);
  T7 = (P)YPpair(CHKREF(Yast_evalYenv_function),T8);
  T6 = (P)YPpair(CHKREF(Yast_evalYenv_parent),T7);
  T5 = (P)YPpair(names_,Ynil);
  T4 = (P)YPpair(valuesF1471,T5);
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
  P loopF1472;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = CALL2(CHKREF(YmacrosYEE),env_,CHKREF(Yast_evalYDnul_loc_env));
  if (T5 != YPfalse) {
    T0 = CHKREF(Ynul);
  } else {
    T4 = FUNSHELL(1,fun_loop_20,3);
    loopF1472 = T4;
    FUNINIT(loopF1472, 3,loopF1472,env_,name_);
    T3 = CALL1(CHKREF(Yast_evalYenv_names),env_);
    T2 = KCALL2(loopF1472,T3,YPint((P)0));
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
  P loopF1473;
  P T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T3 = FUNSHELL(1,fun_loop_22,4);
  loopF1473 = T3;
  FUNINIT(loopF1473, 4,loopF1473,env_,v_,name_);
  T2 = CALL1(CHKREF(Yast_evalYenv_names),env_);
  T1 = KCALL2(loopF1473,T2,YPint((P)0));
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
  P typeF1475;
  P specF1474;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T11 = CALL2(CHKREF(YruntimeYE),i_,FREEREF(2));
  if (T11 != YPfalse) {
    T10 = CALL1(CHKREF(YruntimeYrevX),res_);
    T0 = T10;
  } else {
    T9 = CALL1(CHKREF(Yhead),specs_);
    specF1474 = T9;
    if (specF1474 != YPfalse) {
      T8 = CALL2(CHKREF(Yast_evalYast_eval),specF1474,FREEREF(0));
      T7 = T8;
    } else {
      T7 = CHKREF(YLanyG);
    }
    typeF1475 = T7;
    T6 = CALL2(CHKREF(YmacrosYpair),typeF1475,res_);
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
  P loopF1477;
  P nreqF1476;
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
  nreqF1476 = T4;
  T3 = FUNSHELL(1,fun_loop_28,3);
  loopF1477 = T3;
  FUNINIT(loopF1477, 3,env_,loopF1477,nreqF1476);
  T2 = KCALL3(loopF1477,Ynil,specs_,YPint((P)0));
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1265_30) {
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
  P x_1264F1492;
  P x_1264F1491;
  P x_1264F1490;
  P x_1264F1489;
  P x_1264F1488;
  P x_1264F1487;
  P x_1264F1486;
  P x_1264F1485;
  P bodyF1484;
  P argsF1483;
  P namesF1482;
  P fF1481;
  P envF1480;
  P x_1264F1479;
  P x_1265F1478;
  P T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67;
  P T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51;
  P T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35;
  P T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
loop:
  T82 = FUNSHELL(0,fun_x_1265_30,1);
  x_1265F1478 = T82;
  FUNINIT(x_1265F1478, 1,return_);
  x_1264F1479 = FREEREF(0);
  envF1480 = YPfalse;
  envF1480 = BOXFAB(envF1480);
  fF1481 = YPfalse;
  fF1481 = BOXFAB(fF1481);
  namesF1482 = YPfalse;
  namesF1482 = BOXFAB(namesF1482);
  argsF1483 = YPfalse;
  argsF1483 = BOXFAB(argsF1483);
  bodyF1484 = YPfalse;
  bodyF1484 = BOXFAB(bodyF1484);
  T33 = CALL2(CHKREF(YisaQ),x_1264F1479,CHKREF(YLlstG));
  if (T33 != YPfalse) {
    T32 = CALL3(CHKREF(YmacrosYmatch_atom),x_1264F1479,CHKREF(lit_52),x_1265F1478);
    x_1264F1485 = T32;
    T30 = CALL2(CHKREF(YmacrosYmatch_sublist),x_1264F1485,x_1265F1478);
    x_1264F1486 = T30;
    T28 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1264F1486,x_1265F1478);
    BOXVAL(envF1480) = T28;
    T29 = CALL1(CHKREF(Ytail),x_1264F1486);
    x_1264F1487 = T29;
    T26 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1264F1487,x_1265F1478);
    BOXVAL(fF1481) = T26;
    T27 = CALL1(CHKREF(Ytail),x_1264F1487);
    x_1264F1488 = T27;
    T24 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1264F1488,x_1265F1478);
    BOXVAL(namesF1482) = T24;
    T25 = CALL1(CHKREF(Ytail),x_1264F1488);
    x_1264F1489 = T25;
    BOXVAL(argsF1483) = x_1264F1489;
    x_1264F1490 = Ynil;
    T23 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1264F1490,x_1265F1478);
    T22 = T23;
    T21 = T22;
    T20 = T21;
    T19 = T20;
    T31 = CALL1(CHKREF(Ytail),x_1264F1485);
    x_1264F1491 = T31;
    T17 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1264F1491,x_1265F1478);
    BOXVAL(bodyF1484) = T17;
    T18 = CALL1(CHKREF(Ytail),x_1264F1491);
    x_1264F1492 = T18;
    T16 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1264F1492,x_1265F1478);
    T15 = T16;
    T14 = T15;
    T13 = T14;
  } else {
    T12 = CALL2(x_1265F1478,CHKREF(lit_51),x_1264F1479);
  }
  T81 = CALL1(CHKREF(Ylst),CHKREF(lit_50));
  T80 = BOXVAL(argsF1483);
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
  T68 = BOXVAL(envF1480);
  T67 = CALL1(CHKREF(Ylst),T68);
  T66 = BOXVAL(fF1481);
  T65 = CALL1(CHKREF(Ylst),T66);
  T64 = CALL1(CHKREF(Ylst),CHKREF(lit_48));
  T63 = BOXVAL(namesF1482);
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
  T51 = BOXVAL(argsF1483);
  T50 = CALL1(CHKREF(Ylst),CHKREF(lit_44));
  T49 = CALLN(CHKREF(YmacrosYcat),4,T52,T51,T50,Ynil);
  T48 = CALL1(CHKREF(Ylst),T49);
  T47 = CALLN(CHKREF(YmacrosYcat),6,T69,T67,T65,T53,T48,Ynil);
  T46 = CALL1(CHKREF(Ylst),T47);
  T45 = CALL3(CHKREF(YmacrosYcat),T70,T46,Ynil);
  T44 = CALL1(CHKREF(Ylst),T45);
  T43 = CALL3(CHKREF(YmacrosYcat),T71,T44,Ynil);
  T42 = CALL1(CHKREF(Ylst),T43);
  T41 = BOXVAL(bodyF1484);
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
  P frameF1494;
  P nmsF1493;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6,a7,a8,a9;
loop:
  T7 = (P)YPnext_methods();
  nmsF1493 = T7;
  T6 = CALL1(CHKREF(Ylst),CHKREF(lit_46));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(Ylst),10,a1_,a2_,a3_,a4_,a5_,a6_,a7_,a8_,a9_,nmsF1493);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1494 = T3;
  T2 = CALL1(FREEREF(3),frameF1494);
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
  P frameF1496;
  P nmsF1495;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6,a7,a8;
loop:
  T7 = (P)YPnext_methods();
  nmsF1495 = T7;
  T6 = CALL1(CHKREF(Ylst),CHKREF(lit_46));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(Ylst),9,a1_,a2_,a3_,a4_,a5_,a6_,a7_,a8_,nmsF1495);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1496 = T3;
  T2 = CALL1(FREEREF(3),frameF1496);
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
  P frameF1498;
  P nmsF1497;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6,a7;
loop:
  T7 = (P)YPnext_methods();
  nmsF1497 = T7;
  T6 = CALL1(CHKREF(Ylst),CHKREF(lit_46));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(Ylst),8,a1_,a2_,a3_,a4_,a5_,a6_,a7_,nmsF1497);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1498 = T3;
  T2 = CALL1(FREEREF(3),frameF1498);
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
  P frameF1500;
  P nmsF1499;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6;
loop:
  T7 = (P)YPnext_methods();
  nmsF1499 = T7;
  T6 = CALL1(CHKREF(Ylst),CHKREF(lit_46));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(Ylst),7,a1_,a2_,a3_,a4_,a5_,a6_,nmsF1499);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1500 = T3;
  T2 = CALL1(FREEREF(3),frameF1500);
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
  P frameF1502;
  P nmsF1501;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5;
loop:
  T7 = (P)YPnext_methods();
  nmsF1501 = T7;
  T6 = CALL1(CHKREF(Ylst),CHKREF(lit_46));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(Ylst),6,a1_,a2_,a3_,a4_,a5_,nmsF1501);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1502 = T3;
  T2 = CALL1(FREEREF(3),frameF1502);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_44) {
  ARG(a4_, 0);
  ARG(a3_, 1);
  ARG(a2_, 2);
  ARG(a1_, 3);
  P frameF1504;
  P nmsF1503;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T7 = (P)YPnext_methods();
  nmsF1503 = T7;
  T6 = CALL1(CHKREF(Ylst),CHKREF(lit_46));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(Ylst),5,a1_,a2_,a3_,a4_,nmsF1503);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1504 = T3;
  T2 = CALL1(FREEREF(3),frameF1504);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_45) {
  ARG(a3_, 0);
  ARG(a2_, 1);
  ARG(a1_, 2);
  P frameF1506;
  P nmsF1505;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T7 = (P)YPnext_methods();
  nmsF1505 = T7;
  T6 = CALL1(CHKREF(Ylst),CHKREF(lit_46));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(Ylst),4,a1_,a2_,a3_,nmsF1505);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1506 = T3;
  T2 = CALL1(FREEREF(3),frameF1506);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_46) {
  ARG(a2_, 0);
  ARG(a1_, 1);
  P frameF1508;
  P nmsF1507;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T7 = (P)YPnext_methods();
  nmsF1507 = T7;
  T6 = CALL1(CHKREF(Ylst),CHKREF(lit_46));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALL3(CHKREF(Ylst),a1_,a2_,nmsF1507);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1508 = T3;
  T2 = CALL1(FREEREF(3),frameF1508);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_47) {
  ARG(a1_, 0);
  P frameF1510;
  P nmsF1509;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = (P)YPnext_methods();
  nmsF1509 = T7;
  T6 = CALL1(CHKREF(Ylst),CHKREF(lit_46));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALL2(CHKREF(Ylst),a1_,nmsF1509);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1510 = T3;
  T2 = CALL1(FREEREF(3),frameF1510);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_48) {
  P frameF1512;
  P nmsF1511;
  P T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T7 = (P)YPnext_methods();
  nmsF1511 = T7;
  T6 = CALL1(CHKREF(Ylst),CHKREF(lit_46));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALL1(CHKREF(Ylst),nmsF1511);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1512 = T3;
  T2 = CALL1(FREEREF(3),frameF1512);
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
  P efunF1523;
  P x_1275F1522;
  P x_1274F1521;
  P x_1273F1520;
  P x_1272F1519;
  P x_1271F1518;
  P x_1270F1517;
  P x_1269F1516;
  P x_1268F1515;
  P x_1267F1514;
  P x_1266F1513;
  P T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6,a7;
loop:
  T60 = CALL1(CHKREF(YruntimeYlen),names_);
  x_1266F1513 = T60;
  T59 = CALL2(CHKREF(YmacrosYEE),x_1266F1513,YPint((P)0));
  if (T59 != YPfalse) {
    T58 = FUNFAB(fun_48,4,names_,f_,env_,body_);
    T21 = T58;
  } else {
    x_1267F1514 = x_1266F1513;
    T57 = CALL2(CHKREF(YmacrosYEE),x_1267F1514,YPint((P)1));
    if (T57 != YPfalse) {
      T56 = FUNFAB(fun_47,4,names_,f_,env_,body_);
      T23 = T56;
    } else {
      x_1268F1515 = x_1267F1514;
      T55 = CALL2(CHKREF(YmacrosYEE),x_1268F1515,YPint((P)2));
      if (T55 != YPfalse) {
        T54 = FUNFAB(fun_46,4,names_,f_,env_,body_);
        T25 = T54;
      } else {
        x_1269F1516 = x_1268F1515;
        T53 = CALL2(CHKREF(YmacrosYEE),x_1269F1516,YPint((P)3));
        if (T53 != YPfalse) {
          T52 = FUNFAB(fun_45,4,names_,f_,env_,body_);
          T27 = T52;
        } else {
          x_1270F1517 = x_1269F1516;
          T51 = CALL2(CHKREF(YmacrosYEE),x_1270F1517,YPint((P)4));
          if (T51 != YPfalse) {
            T50 = FUNFAB(fun_44,4,names_,f_,env_,body_);
            T29 = T50;
          } else {
            x_1271F1518 = x_1270F1517;
            T49 = CALL2(CHKREF(YmacrosYEE),x_1271F1518,YPint((P)5));
            if (T49 != YPfalse) {
              T48 = FUNFAB(fun_43,4,names_,f_,env_,body_);
              T31 = T48;
            } else {
              x_1272F1519 = x_1271F1518;
              T47 = CALL2(CHKREF(YmacrosYEE),x_1272F1519,YPint((P)6));
              if (T47 != YPfalse) {
                T46 = FUNFAB(fun_42,4,names_,f_,env_,body_);
                T33 = T46;
              } else {
                x_1273F1520 = x_1272F1519;
                T45 = CALL2(CHKREF(YmacrosYEE),x_1273F1520,YPint((P)7));
                if (T45 != YPfalse) {
                  T44 = FUNFAB(fun_41,4,names_,f_,env_,body_);
                  T35 = T44;
                } else {
                  x_1274F1521 = x_1273F1520;
                  T43 = CALL2(CHKREF(YmacrosYEE),x_1274F1521,YPint((P)8));
                  if (T43 != YPfalse) {
                    T42 = FUNFAB(fun_40,4,names_,f_,env_,body_);
                    T37 = T42;
                  } else {
                    x_1275F1522 = x_1274F1521;
                    T41 = CALL2(CHKREF(YmacrosYEE),x_1275F1522,YPint((P)9));
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
  efunF1523 = T20;
  T1 = CALL1(CHKREF(Yast_evalYas_fun_name),f_);
  CALL2(CHKREF(Yfun_name_setter),T1,efunF1523);
  T19 = (P)YPpair(CHKREF(YLsigG),Ynil);
  T18 = (P)YPpair(CHKREF(Ysig_value),Ynil);
  T17 = (P)YPpair(CHKREF(Ysig_arity),T18);
  T16 = (P)YPpair(CHKREF(Ysig_naryQ),T17);
  T15 = (P)YPpair(CHKREF(Ysig_specs),T16);
  T14 = (P)YPpair(CHKREF(Ysig_names),T15);
  T13 = CALL3(CHKREF(Yast_evalYast_eval_specs),specs_,naryQ_,env_);
  T12 = CALL1(CHKREF(Yfun_arity),efunF1523);
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
  CALL2(CHKREF(Yfun_sig_setter),T2,efunF1523);
  T0 = efunF1523;
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
  P evalF1525;
  P paramsF1524;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T8 = CALL1(CHKREF(YastYfunction_bindings),e_);
  paramsF1524 = T8;
  T7 = FUNFAB(fun_50,1,e_);
  evalF1525 = T7;
  T6 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_name),paramsF1524);
  T5 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_type),paramsF1524);
  T4 = CALL1(CHKREF(YastYfunction_naryQ),e_);
  T3 = CALL1(CHKREF(YastYfunction_value),e_);
  T2 = CALLN(CHKREF(Yast_evalYexport_proto_method),7,e_,T6,T5,T4,T3,evalF1525,env_);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_52) {
  ARG(env_, 0);
  ARG(e_, 1);
  P specsF1529;
  P namesF1528;
  P naryQF1527;
  P paramsF1526;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T10 = CALL1(CHKREF(YastYfunction_bindings),e_);
  paramsF1526 = T10;
  T9 = CALL1(CHKREF(YastYfunction_naryQ),e_);
  naryQF1527 = T9;
  T8 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_name),paramsF1526);
  namesF1528 = T8;
  T7 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_type),paramsF1526);
  T6 = CALL3(CHKREF(Yast_evalYast_eval_specs),T7,naryQF1527,env_);
  specsF1529 = T6;
  T5 = CALL1(CHKREF(Yast_evalYas_fun_name),e_);
  T4 = CALLN(CHKREF(Yfab_gen),5,T5,namesF1528,specsF1529,naryQF1527,Ynil);
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
  P x_1276F1530;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T4 = CALL1(CHKREF(YastYbinding_kind),binding_);
  x_1276F1530 = T4;
  T3 = CALL2(CHKREF(YmacrosYEE),x_1276F1530,CHKREF(lit_74));
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
  P valueF1531;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL1(CHKREF(YastYassignment_form),e_);
  T3 = CALL2(CHKREF(Yast_evalYast_eval),T4,env_);
  valueF1531 = T3;
  T2 = CALL1(CHKREF(YastYassignment_binding),e_);
  T1 = CALL2(CHKREF(Yast_evalYenv_global_binding_value_setter),valueF1531,T2);
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
  P valueF1532;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = CALL1(CHKREF(YastYassignment_form),e_);
  T4 = CALL2(CHKREF(Yast_evalYast_eval),T5,env_);
  valueF1532 = T4;
  T3 = CALL1(CHKREF(YastYassignment_binding),e_);
  T2 = CALL1(CHKREF(YastYbinding_locative),T3);
  T1 = CALL2(CHKREF(Yast_evalYenv_runtime_value_setter),valueF1532,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_64) {
  ARG(env_, 0);
  ARG(e_, 1);
  P valueF1533;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL1(CHKREF(YastYassignment_form),e_);
  T3 = CALL2(CHKREF(Yast_evalYast_eval),T4,env_);
  valueF1533 = T3;
  T2 = CALL1(CHKREF(YastYassignment_reference),e_);
  T1 = CALL3(CHKREF(Yast_evalYenv_local_reference_value_setter),valueF1533,env_,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_65) {
  ARG(v_, 0);
  ARG(b_, 1);
  P x_1278F1535;
  P x_1277F1534;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T11 = CALL1(CHKREF(YastYbinding_kind),b_);
  x_1277F1534 = T11;
  T10 = CALL2(CHKREF(YmacrosYEE),x_1277F1534,CHKREF(lit_77));
  if (T10 != YPfalse) {
    T9 = CALL1(CHKREF(YastYbinding_locative),b_);
    T8 = CALL2(CHKREF(Yast_evalYenv_runtime_value_setter),v_,T9);
    T1 = T8;
  } else {
    x_1278F1535 = x_1277F1534;
    T7 = CALL2(CHKREF(YmacrosYEE),x_1278F1535,CHKREF(lit_74));
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
  P valueF1536;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = CALL1(CHKREF(YastYassignment_form),e_);
  T2 = CALL2(CHKREF(Yast_evalYast_eval),T3,env_);
  valueF1536 = T2;
  T1 = CALL1(CHKREF(YastYassignment_binding),e_);
  CALL2(CHKREF(Yast_evalYenv_define_bindingX),T1,valueF1536);
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
  P valF1538;
  P nxtF1537;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = CALL1(CHKREF(Ytail),e_);
  nxtF1537 = T7;
  T6 = CALL1(CHKREF(Yhead),e_);
  T5 = CALL2(CHKREF(Yast_evalYast_eval),T6,FREEREF(0));
  valF1538 = T5;
  T4 = CALL1(CHKREF(YmacrosYemptyQ),nxtF1537);
  if (T4 != YPfalse) {
    T2 = valF1538;
  } else {
    a1 = nxtF1537;
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
  P evalF1539;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_eval_68,2);
  evalF1539 = T2;
  FUNINIT(evalF1539, 2,env_,evalF1539);
  T1 = KCALL1(evalF1539,e_);
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
  P evalF1540;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_eval_70,2);
  evalF1540 = T2;
  FUNINIT(evalF1540, 2,env_,evalF1540);
  T1 = KCALL2(evalF1540,Ynil,e_);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_72) {
  ARG(env_, 0);
  ARG(e_, 1);
  P argsF1542;
  P fF1541;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T6 = CALL1(CHKREF(YastYapplication_function),e_);
  T5 = CALL2(CHKREF(Yast_evalYast_eval),T6,env_);
  fF1541 = T5;
  T4 = CALL1(CHKREF(YastYapplication_arguments),e_);
  T3 = CALL2(CHKREF(Yast_evalYast_eval),T4,env_);
  argsF1542 = T3;
  T2 = CALL2(CHKREF(Yapply),fF1541,argsF1542);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_73) {
  ARG(env_, 0);
  ARG(e_, 1);
  P nmsF1546;
  P argsF1545;
  P fF1544;
  P bF1543;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T14 = CALL1(CHKREF(YastYapplication_binding),e_);
  bF1543 = T14;
  T13 = CALL1(CHKREF(YastYbinding_name),bF1543);
  T12 = CALL2(CHKREF(YmacrosYEE),T13,CHKREF(lit_46));
  if (T12 != YPfalse) {
    T11 = CALL2(CHKREF(Yast_evalYenv_binding_value),env_,CHKREF(lit_46));
    nmsF1546 = T11;
    T10 = CALL2(CHKREF(YmacrosYEE),nmsF1546,CHKREF(Ynul));
    if (T10 != YPfalse) {
      T9 = YPfalse;
    } else {
      T9 = nmsF1546;
    }
    T8 = T9;
    T1 = T8;
  } else {
    T7 = CALL1(CHKREF(YastYbinding_info),bF1543);
    fF1544 = T7;
    T6 = CALL1(CHKREF(YastYapplication_arguments),e_);
    T5 = CALL2(CHKREF(Yast_evalYast_eval),T6,env_);
    argsF1545 = T5;
    T4 = CALL2(CHKREF(Yapply),fF1544,argsF1545);
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
  P nenvF1548;
  P argsF1547;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T8 = CALL1(CHKREF(YastYfix_let_arguments),e_);
  T7 = CALL2(CHKREF(Yast_evalYast_eval),T8,env_);
  argsF1547 = T7;
  T6 = CALL1(CHKREF(YastYfix_let_bindings),e_);
  T5 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_name),T6);
  T4 = CALLN(CHKREF(Yast_evalYenv_frameX),4,env_,YPfalse,T5,argsF1547);
  nenvF1548 = T4;
  T3 = CALL1(CHKREF(YastYfix_let_body),e_);
  T2 = CALL2(CHKREF(Yast_evalYast_eval),T3,nenvF1548);
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
  P new_envF1550;
  P bindingsF1549;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T13 = CALL1(CHKREF(YastYlocals_bindings),e_);
  bindingsF1549 = T13;
  T12 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_name),bindingsF1549);
  T11 = CALL1(CHKREF(YruntimeYalways),CHKREF(Ynul));
  T10 = CALL2(CHKREF(YmacrosYmap),T11,bindingsF1549);
  T9 = CALLN(CHKREF(Yast_evalYenv_frameX),4,env_,YPfalse,T12,T10);
  new_envF1550 = T9;
  T6 = FUNFAB(fun_75,1,new_envF1550);
  T5 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_name),bindingsF1549);
  T4 = CALL2(CHKREF(YruntimeYrcurry),CHKREF(Yast_evalYast_eval),new_envF1550);
  T3 = CALL1(CHKREF(YastYlocals_functions),e_);
  T2 = CALL2(CHKREF(YmacrosYmap),T4,T3);
  CALL3(CHKREF(YruntimeYdo2),T6,T5,T2);
  T8 = CALL1(CHKREF(YastYlocals_body),e_);
  T7 = CALL2(CHKREF(Yast_evalYast_eval),T8,new_envF1550);
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
  P exitF1552;
  P rprocF1551;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = FUNFAB(fun_77,1,return_);
  rprocF1551 = T8;
  T7 = CALL1(CHKREF(Ylst),CHKREF(lit_7));
  T6 = CALL1(CHKREF(Ylst),YPfalse);
  T5 = CALLN(CHKREF(Yast_evalYexport_proto_method),7,rprocF1551,T7,T6,YPfalse,YPfalse,rprocF1551,FREEREF(0));
  exitF1552 = T5;
  T4 = CALL1(CHKREF(YastYbind_exit_main_fun),FREEREF(1));
  T3 = CALL2(CHKREF(Yast_evalYast_eval),T4,FREEREF(0));
  T2 = CALL1(T3,exitF1552);
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
  P bF1553;
  P T2,T1,T0;
  P a1;
loop:
  CALLN(CHKREF(YastYast_define_binding),4,env_,CHKREF(lit_46),YPfalse,CHKREF(lit_81));
  T2 = CALLN(CHKREF(YastYast_define_binding),4,env_,CHKREF(lit_80),YPfalse,CHKREF(lit_74));
  bF1553 = T2;
  T1 = CALL2(CHKREF(Yast_evalYenv_global_binding_value_setter),CHKREF(YmacrosYpair),bF1553);
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
  lit_53 = YPPsym((P)"x-1265");
  lit_54 = YPPsym((P)"msg");
  T135 = YPsig(YPPlist(2,CHKREF(lit_54),CHKREF(lit_21)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1265_30 = YPmet(FUNCODEREF(fun_x_1265_30),CHKREF(lit_53),T135,ENVNUL);
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
  {"export-proto-method", &Yast_evalYexport_proto_method},
  {"ifun", NULL},
  {"env-runtime-value", &Yast_evalYenv_runtime_value},
  {"*stack*", &Yast_evalYTstackT},
  {"env-names-setter", &Yast_evalYenv_names_setter},
  {"env-binding-value", &Yast_evalYenv_binding_value},
  {"env-global-binding-bound?", &Yast_evalYenv_global_binding_boundQ},
  {"env-global-binding-value-setter", &Yast_evalYenv_global_binding_value_setter},
  {"env-names", &Yast_evalYenv_names},
  {"ast-eval-specs", &Yast_evalYast_eval_specs},
  {"<loc-env>", &Yast_evalYLloc_envG},
  {"---main-1---", NULL},
  {"ast-eval", &Yast_evalYast_eval},
  {"env-local-value", &Yast_evalYenv_local_value},
  {"env-binding-value-setter", &Yast_evalYenv_binding_value_setter},
  {"as-fun-name", &Yast_evalYas_fun_name},
  {"env-function-setter", &Yast_evalYenv_function_setter},
  {"env-local-value-setter", &Yast_evalYenv_local_value_setter},
  {"env-global-binding-value", &Yast_evalYenv_global_binding_value},
  {"env-runtime-value-setter", &Yast_evalYenv_runtime_value_setter},
  {"env-parent-setter", &Yast_evalYenv_parent_setter},
  {"env-define-binding!", &Yast_evalYenv_define_bindingX},
  {"ast-eval-bound?", &Yast_evalYast_eval_boundQ},
  {"env-frame!", &Yast_evalYenv_frameX},
  {"env-local-reference-value", &Yast_evalYenv_local_reference_value},
  {"env-values", &Yast_evalYenv_values},
  {"---main-0---", NULL},
  {"env-local-reference-value-setter", &Yast_evalYenv_local_reference_value_setter},
  {"$nul-loc-env", &Yast_evalYDnul_loc_env},
  {"env-function", &Yast_evalYenv_function},
  {"env-parent", &Yast_evalYenv_parent},
  {"env-values-setter", &Yast_evalYenv_values_setter},
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
