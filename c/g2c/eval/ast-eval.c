/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: ast-eval */

DEF(Yast_evalYenv_runtime_value_setter,"ast-eval","env-runtime-value-setter");
EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YastYbinding_global_box,"ast","binding-global-box");
EXT(YruntimeYelt,"runtime","elt");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(YastYLsequentialG,"ast","<sequential>");
EXT(YastYLunwind_protectG,"ast","<unwind-protect>");
EXT(YLnumG,"boot","<num>");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
EXT(YastYLfab_listG,"ast","<fab-list>");
EXT(YastYbinding_dynamic_extentQ,"ast","binding-dynamic-extent?");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YruntimeYfrom,"runtime","from");
EXT(YastYbinding_type_setter,"ast","binding-type-setter");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
EXT(YastYfix_let_bindings,"ast","fix-let-bindings");
EXT(YLslotG,"boot","<slot>");
DEF(Yast_evalYenv_local_reference_value_setter,"ast-eval","env-local-reference-value-setter");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
EXT(YastYLmodule_bindingG,"ast","<module-binding>");
EXT(YastYassignment_binding,"ast","assignment-binding");
EXT(YastYfunction_naryQ,"ast","function-nary?");
EXT(Ynul,"boot","nul");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YastYLraw_constantG,"ast","<raw-constant>");
EXT(YruntimeYkeys,"runtime","keys");
EXT(YastYset_module_environments,"ast","set-module-environments");
EXT(YastYmonitor_info,"ast","monitor-info");
EXT(YruntimeYevenQ,"runtime","even?");
EXT(YruntimeYstr,"runtime","str");
EXT(YastYsignature_bindings_setter,"ast","signature-bindings-setter");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YastYfix_let_arguments,"ast","fix-let-arguments");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YastYbinding_locative,"ast","binding-locative");
EXT(YLchrG,"boot","<chr>");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
EXT(YruntimeYlen,"runtime","len");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YLoptsG,"boot","<opts>");
EXT(YastYdo_module_loader_modules,"ast","do-module-loader-modules");
EXT(YastYDproto_boot_module_name,"ast","$proto-boot-module-name");
EXT(YPsnul,"boot","%snul");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
EXT(YLunionG,"boot","<union>");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(YastYalternative_alternant,"ast","alternative-alternant");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
EXT(YastYLast_primitiveG,"ast","<ast-primitive>");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YastYfree_implemented_foreign_bindings,"ast","free-implemented-foreign-bindings");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
EXT(YastYsignature_names_setter,"ast","signature-names-setter");
DEF(Yast_evalYenv_global_binding_boundQ,"ast-eval","env-global-binding-bound?");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(YruntimeYin,"runtime","in");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
DEF(Yast_evalYLloc_envG,"ast-eval","<loc-env>");
EXT(YastYfix_let_bindings_setter,"ast","fix-let-bindings-setter");
EXT(YLlogG,"boot","<log>");
EXT(YmacrosYtup,"macros","tup");
EXT(YastYbinding_info,"ast","binding-info");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
EXT(YastYapplication_binding,"ast","application-binding");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YruntimeYlist,"runtime","list");
EXT(Ytail,"boot","tail");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(YastYLprogramG,"ast","<program>");
EXT(YastYLast_methodG,"ast","<ast-method>");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YruntimeYLrangeG,"runtime","<range>");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YastYbinding_kind,"ast","binding-kind");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YastYLast_genericG,"ast","<ast-generic>");
EXT(YastYfunction_bindings,"ast","function-bindings");
EXT(YruntimeYfill,"runtime","fill");
EXT(YruntimeYclose_output_port,"runtime","close-output-port");
EXT(YastYLast_macro_definitionG,"ast","<ast-macro-definition>");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(YmacrosYEE,"macros","==");
EXT(YruntimeY1st,"runtime","1st");
EXT(YastYmodule_name,"ast","module-name");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(YLanyG,"boot","<any>");
EXT(YruntimeYpop,"runtime","pop");
EXT(YruntimeYvec,"runtime","vec");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YPdefine_method,"boot","%define-method");
EXT(Ytail_setter,"boot","tail-setter");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YastYfunction_debug_name,"ast","function-debug-name");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
EXT(YastYload_module,"ast","load-module");
EXT(YruntimeYLlistG,"runtime","<list>");
DEF(Yast_evalYast_eval,"ast-eval","ast-eval");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YruntimeYassocq,"runtime","assocq");
EXT(YastYLlocal_bindingG,"ast","<local-binding>");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
DEF(Yast_evalYenv_names_setter,"ast-eval","env-names-setter");
EXT(YastYfunction_signature_setter,"ast","function-signature-setter");
EXT(YruntimeYalter,"runtime","alter");
DEF(Yast_evalYenv_names,"ast-eval","env-names");
EXT(YastYLconstantG,"ast","<constant>");
EXT(YruntimeYpick,"runtime","pick");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
DEF(Yast_evalYenv_binding_value,"ast-eval","env-binding-value");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YisaQ,"boot","isa?");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YruntimeYfrom_by,"runtime","from-by");
EXT(YastYreference_binding,"ast","reference-binding");
EXT(YastYLstatic_global_environmentG,"ast","<static-global-environment>");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(Ytype_object,"boot","type-object");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(YastYinit_environment_for_eval,"ast","init-environment-for-eval");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YastYobjectify,"ast","objectify");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YastYmodule_exports,"ast","module-exports");
EXT(YruntimeYS,"runtime","/");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YruntimeYLstepG,"runtime","<step>");
EXT(YastYprogram_register,"ast","program-register");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YastYLcompile_timeG,"ast","<compile-time>");
DEF(Yast_evalYenv_local_value_setter,"ast-eval","env-local-value-setter");
EXT(YastYLfix_letG,"ast","<fix-let>");
EXT(Yslot_init,"boot","slot-init");
EXT(YruntimeYtruncate,"runtime","truncate");
EXT(YastYLapplicationG,"ast","<application>");
DEF(Yast_evalYDnul_loc_env,"ast-eval","$nul-loc-env");
EXT(Yobject_parents,"boot","object-parents");
EXT(YruntimeYpos,"runtime","pos");
EXT(YastYruntime_environment,"ast","runtime-environment");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YastYsequentialize,"ast","sequentialize");
EXT(Ynot,"boot","not");
EXT(YastYbinding_type,"ast","binding-type");
EXT(YruntimeYmin,"runtime","min");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YruntimeYdel_dups,"runtime","del-dups");
EXT(Yfun_names,"boot","fun-names");
EXT(Ysig_value,"boot","sig-value");
EXT(YastYLreal_referenceG,"ast","<real-reference>");
EXT(Ysym_name,"boot","sym-name");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(YastYLargumentsG,"ast","<arguments>");
EXT(YruntimeYdo3,"runtime","do3");
EXT(YastYLmoduleG,"ast","<module>");
EXT(YruntimeYoddQ,"runtime","odd?");
EXT(YastYlocals_functions,"ast","locals-functions");
DEF(Yast_evalYenv_values_setter,"ast-eval","env-values-setter");
DEF(Yast_evalYast_eval_boundQ,"ast-eval","ast-eval-bound?");
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
EXT(YruntimeYassq,"runtime","assq");
EXT(YruntimeYlen_setter,"runtime","len-setter");
EXT(YruntimeYid_hash,"runtime","id-hash");
DEF(Yast_evalYast_eval_specs,"ast-eval","ast-eval-specs");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
EXT(YastYsignature_specs,"ast","signature-specs");
EXT(YPPmacro,"boot","%%macro");
EXT(YruntimeYassoc,"runtime","assoc");
EXT(YruntimeYneg,"runtime","neg");
EXT(YastYalternative_consequent,"ast","alternative-consequent");
EXT(Yobject_slots,"boot","object-slots");
DEF(Yast_evalYenv_parent_setter,"ast-eval","env-parent-setter");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(YastYinit_ast,"ast","init-ast");
EXT(YastYapplication_arguments,"ast","application-arguments");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(YastYfind_environment_module,"ast","find-environment-module");
EXT(YastYload_in,"ast","load-in");
EXT(YLclassG,"boot","<class>");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YastYmonitor_type,"ast","monitor-type");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YastYfix_let_types_setter,"ast","fix-let-types-setter");
EXT(YastYfix_let_arguments_setter,"ast","fix-let-arguments-setter");
EXT(Ytype_error,"boot","type-error");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
DEF(Yast_evalYenv_frameX,"ast-eval","env-frame!");
EXT(Yerror,"boot","error");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(Yfind_setter,"boot","find-setter");
EXT(YastYLregular_applicationG,"ast","<regular-application>");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YLtypeG,"boot","<type>");
EXT(YastYreference_frame_offset,"ast","reference-frame-offset");
EXT(YruntimeYlsh,"runtime","lsh");
EXT(YastYfunction_body_setter,"ast","function-body-setter");
EXT(Ysig_names,"boot","sig-names");
DEF(Yast_evalYenv_values,"ast-eval","env-values");
EXT(YastYalternative_condition,"ast","alternative-condition");
EXT(Yslot_owner,"boot","slot-owner");
EXT(YastYLruntime_assignmentG,"ast","<runtime-assignment>");
EXT(YmacrosYpair,"macros","pair");
EXT(YruntimeYto_digit,"runtime","to-digit");
EXT(YastYlocals_bindings_setter,"ast","locals-bindings-setter");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YPvnul,"boot","%vnul");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YruntimeY_,"runtime","-");
EXT(YastYfix_let_body,"ast","fix-let-body");
DEF(Yast_evalYas_fun_name,"ast-eval","as-fun-name");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YastYbinding_module_name,"ast","binding-module-name");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YruntimeYnegQ,"runtime","neg?");
EXT(YastYsignature_naryQ,"ast","signature-nary?");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YastYLdefinitionG,"ast","<definition>");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YastYLmodule_loaderG,"ast","<module-loader>");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YruntimeYdel,"runtime","del");
EXT(YastYboundQ_reference,"ast","bound?-reference");
EXT(Yfapply,"boot","fapply");
EXT(YastYLbind_exitG,"ast","<bind-exit>");
EXT(Yadd_slot,"boot","add-slot");
EXT(Yhead,"boot","head");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YLsymG,"boot","<sym>");
EXT(YruntimeYread,"runtime","read");
EXT(YastYLglobal_assignmentG,"ast","<global-assignment>");
EXT(YastYapplication_knownQ_setter,"ast","application-known?-setter");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(YastYapplication_knownQ,"ast","application-known?");
DEF(Yast_evalYenv_parent,"ast-eval","env-parent");
EXT(YruntimeYLincongruent_method_errorG,"runtime","<incongruent-method-error>");
EXT(YruntimeYround,"runtime","round");
EXT(YastYcompile_time_program,"ast","compile-time-program");
EXT(YastYreport_undefined_global_bindings,"ast","report-undefined-global-bindings");
EXT(YruntimeYfloorS,"runtime","floor/");
EXT(YastYLlocal_assignmentG,"ast","<local-assignment>");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YastYLglobal_boxG,"ast","<global-box>");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(YastYprogram_register_setter,"ast","program-register-setter");
EXT(YruntimeYdo2,"runtime","do2");
EXT(YastYreference_frame_number,"ast","reference-frame-number");
EXT(YastYLalternativeG,"ast","<alternative>");
EXT(YruntimeYsub,"runtime","sub");
EXT(YruntimeYnow_elt,"runtime","now-elt");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YastYfunction_binding,"ast","function-binding");
EXT(YastYLpredefined_applicationG,"ast","<predefined-application>");
EXT(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
EXT(YastYbind_exit_main_fun,"ast","bind-exit-main-fun");
EXT(YastYsignature_value_setter,"ast","signature-value-setter");
EXT(Yfab_sym,"boot","fab-sym");
EXT(Yhead_setter,"boot","head-setter");
EXT(YastYLboundQG,"ast","<bound?>");
EXT(YruntimeYroundS,"runtime","round/");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(YruntimeYaddress_of,"runtime","address-of");
EXT(YastYbinding_global_box_setter,"ast","binding-global-box-setter");
EXT(Yfind_getter,"boot","find-getter");
EXT(YruntimeYash,"runtime","ash");
DEF(Yast_evalYenv_define_bindingX,"ast-eval","env-define-binding!");
EXT(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
EXT(YLstrG,"boot","<str>");
EXT(YruntimeYflo_bits,"runtime","flo-bits");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(YastYmonitor_test,"ast","monitor-test");
EXT(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
DEF(Yast_evalYenv_local_reference_value,"ast-eval","env-local-reference-value");
EXT(Yobject_class,"boot","object-class");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
EXT(YruntimeYfrom_above,"runtime","from-above");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YLgenG,"boot","<gen>");
EXT(YastYsignature_names,"ast","signature-names");
EXT(Ynil,"boot","nil");
EXT(YPcall_next_method,"boot","%call-next-method");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
DEF(Yast_evalYenv_function,"ast-eval","env-function");
EXT(YruntimeYnewline,"runtime","newline");
EXT(YruntimeYabs,"runtime","abs");
EXT(YruntimeYformat,"runtime","format");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YruntimeYassqn,"runtime","assqn");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(Yslot_type,"boot","slot-type");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
EXT(YastYassignment_reference,"ast","assignment-reference");
EXT(YruntimeYT,"runtime","*");
DEF(Yast_evalYexport_proto_method,"ast-eval","export-proto-method");
EXT(YruntimeYPwith_monitor,"runtime","%with-monitor");
DEF(Yast_evalYenv_runtime_value,"ast-eval","env-runtime-value");
EXT(YruntimeYA,"runtime","+");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YruntimeYcurry,"runtime","curry");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(YastYobjectify_quotation,"ast","objectify-quotation");
EXT(YLvecG,"boot","<vec>");
EXT(YruntimeYread_char,"runtime","read-char");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YastYdo_static_global_bindings,"ast","do-static-global-bindings");
EXT(YruntimeYmax,"runtime","max");
EXT(YruntimeYeof_object,"runtime","eof-object");
EXT(YastYLmonitorG,"ast","<monitor>");
EXT(YruntimeYfloor,"runtime","floor");
EXT(YastYast_define_binding,"ast","ast-define-binding");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
EXT(YastYenvironment_uses_modules,"ast","environment-uses-modules");
EXT(Yclass_slots,"boot","class-slots");
EXT(YruntimeYmodulo,"runtime","modulo");
EXT(YruntimeYdefault,"runtime","default");
EXT(YLflatG,"boot","<flat>");
EXT(YastYglobal_box_value_setter,"ast","global-box-value-setter");
EXT(YastYunwind_protect_cleanup_thunk,"ast","unwind-protect-cleanup-thunk");
EXT(YruntimeYfind_key,"runtime","find-key");
EXT(YruntimeYreduceA,"runtime","reduce+");
EXT(YLmetG,"boot","<met>");
EXT(YmacrosYmap,"macros","map");
EXT(YastYapplication_function,"ast","application-function");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YruntimeYempty,"runtime","empty");
EXT(YastYdo_named_static_global_bindings,"ast","do-named-static-global-bindings");
EXT(YastYbinding_value_setter,"ast","binding-value-setter");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(YastYLlocal_referenceG,"ast","<local-reference>");
EXT(Ylst,"boot","lst");
EXT(YastYreference_called_functionQ_setter,"ast","reference-called-function?-setter");
EXT(YastYmonitor_handler,"ast","monitor-handler");
EXT(YLtupG,"boot","<tup>");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YastYmodule_binding,"ast","module-binding");
EXT(YastYremove_modules_by_nameX,"ast","remove-modules-by-name!");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(Yfab_class,"boot","fab-class");
EXT(YruntimeYlogior,"runtime","logior");
EXT(Yfun_value,"boot","fun-value");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(YPsymbols,"boot","%symbols");
EXT(YruntimeYTprint_baseT,"runtime","*print-base*");
EXT(Ytype_elts,"boot","type-elts");
EXT(YruntimeYLE,"runtime","<=");
EXT(YastYfunction_value,"ast","function-value");
EXT(YruntimeYE,"runtime","=");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
EXT(YastYbinding_name,"ast","binding-name");
EXT(YruntimeYmap2,"runtime","map2");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(YastYLbindingG,"ast","<binding>");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
EXT(YLlstG,"boot","<lst>");
EXT(YastYLpassive_programG,"ast","<passive-program>");
EXT(YastYLreferenceG,"ast","<reference>");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YPisa,"boot","%isa");
EXT(YastYlocals_body,"ast","locals-body");
EXT(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
EXT(YruntimeYfalse_or,"runtime","false-or");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YastYfab_p2c_module,"ast","fab-p2c-module");
EXT(YruntimeYL,"runtime","<");
EXT(YLfunG,"boot","<fun>");
EXT(Yfun_name,"boot","fun-name");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(Yclass_name,"boot","class-name");
EXT(YruntimeYlogxor,"runtime","logxor");
EXT(YruntimeYalways,"runtime","always");
EXT(YastYunwind_protect_protected_thunk,"ast","unwind-protect-protected-thunk");
EXT(YastYlocals_bindings,"ast","locals-bindings");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
EXT(YLseqG,"boot","<seq>");
EXT(YruntimeYpush,"runtime","push");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
EXT(YruntimeYbuf,"runtime","buf");
EXT(YruntimeYreduce,"runtime","reduce");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(YruntimeYNE,"runtime","~=");
EXT(YastYLglobal_referenceG,"ast","<global-reference>");
EXT(YastYmodule_loader_module_type,"ast","module-loader-module-type");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YmacrosYcat,"macros","cat");
DEF(Yast_evalYenv_global_binding_value,"ast-eval","env-global-binding-value");
EXT(YastYprobe_module,"ast","probe-module");
EXT(YruntimeYG,"runtime",">");
EXT(YruntimeYlast,"runtime","last");
EXT(YruntimeYlogand,"runtime","logand");
EXT(YastYbinding_dynamic_extentQ_setter,"ast","binding-dynamic-extent?-setter");
EXT(YastYLruntime_referenceG,"ast","<runtime-reference>");
EXT(YastYfix_let_body_setter,"ast","fix-let-body-setter");
EXT(YastYbinding_info_setter,"ast","binding-info-setter");
EXT(YruntimeYtL,"runtime","t<");
EXT(YastYmodule_name_to_relpath,"ast","module-name-to-relpath");
EXT(YLcolG,"boot","<col>");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
EXT(YastYinstall_initial_bindings,"ast","install-initial-bindings");
EXT(YastYbinding_mutableQ,"ast","binding-mutable?");
DEF(Yast_evalYenv_function_setter,"ast-eval","env-function-setter");
EXT(Yapply,"boot","apply");
EXT(YruntimeYdo,"runtime","do");
EXT(YastYast_evaluate,"ast","ast-evaluate");
EXT(YastYmodule_target_environment,"ast","module-target-environment");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(YruntimeYfab,"runtime","fab");
EXT(YastYreference_called_functionQ,"ast","reference-called-function?");
EXT(YruntimeYceiling,"runtime","ceiling");
EXT(YastYDproto_runtime_module_name,"ast","$proto-runtime-module-name");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YruntimeYlognot,"runtime","lognot");
EXT(YruntimeYas,"runtime","as");
EXT(YruntimeYsig,"runtime","sig");
EXT(YruntimeYout,"runtime","out");
EXT(YastYsignature_bindings,"ast","signature-bindings");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(YastYassignment_form,"ast","assignment-form");
EXT(Yslot_setter,"boot","slot-setter");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YruntimeYtE,"runtime","t=");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YruntimeYrev,"runtime","rev");
EXT(YastYconstant_value,"ast","constant-value");
EXT(YastYlocals_functions_setter,"ast","locals-functions-setter");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YLlocG,"boot","<loc>");
EXT(YLsigG,"boot","<sig>");
EXT(YastYbinding_value,"ast","binding-value");
EXT(YastYsignature_value,"ast","signature-value");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
EXT(YruntimeYLfile_input_portG,"runtime","<file-input-port>");
EXT(YastYfunction_debug_name_setter,"ast","function-debug-name-setter");
EXT(YastYLprogramsG,"ast","<programs>");
EXT(Yfun_mets,"boot","fun-mets");
EXT(Yclass_parents,"boot","class-parents");
EXT(YastYfunction_body,"ast","function-body");
EXT(YPslot,"boot","%slot");
EXT(YastYLcomputed_programG,"ast","<computed-program>");
EXT(YastYlocals_body_setter,"ast","locals-body-setter");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");
EXT(YLfloG,"boot","<flo>");
EXT(YastYfix_let_types,"ast","fix-let-types");
EXT(YruntimeYtA,"runtime","t+");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(YruntimeYcopy_state,"runtime","copy-state");
EXT(YruntimeYmemQ,"runtime","mem?");
DEF(Yast_evalYenv_local_value,"ast-eval","env-local-value");
EXT(YastYsignature_specs_setter,"ast","signature-specs-setter");
EXT(YruntimeYzeroQ,"runtime","zero?");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YastYsignature_naryQ_setter,"ast","signature-nary?-setter");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YastYenv_object_name,"ast","env-object-name");
EXT(YastYLast_functionG,"ast","<ast-function>");
EXT(Yslot_value,"boot","slot-value");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
DEF(Yast_evalYenv_global_binding_value_setter,"ast-eval","env-global-binding-value-setter");
EXT(YastYLlocalsG,"ast","<locals>");
DEF(Yast_evalYTstackT,"ast-eval","*stack*");
EXT(YastYfunction_signature,"ast","function-signature");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YastYmonitor_main_thunk,"ast","monitor-main-thunk");
EXT(YastYapplication_tailQ,"ast","application-tail?");
EXT(Ytype_class,"boot","type-class");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YastYmodule_syntax_environment,"ast","module-syntax-environment");
EXT(YastYLast_signatureG,"ast","<ast-signature>");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(YastYbinding_native_toQ,"ast","binding-native-to?");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YruntimeYGE,"runtime",">=");
DEF(Yast_evalYenv_binding_value_setter,"ast-eval","env-binding-value-setter");
EXT(YLintG,"boot","<int>");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YastYglobal_box_value,"ast","global-box-value");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YastYLast_primitive_definitionG,"ast","<ast-primitive-definition>");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YruntimeYmake_handler,"runtime","make-handler");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_33);
DEFLIT(lit_65);
DEFLIT(lit_9);
DEFLIT(lit_2);
DEFLIT(lit_36);
DEFLIT(lit_79);
DEFLIT(lit_56);
DEFLIT(lit_67);
DEFLIT(lit_19);
DEFLIT(lit_54);
DEFLIT(lit_35);
DEFLIT(lit_0);
DEFLIT(lit_42);
DEFLIT(lit_81);
DEFLIT(lit_70);
DEFLIT(lit_3);
DEFLIT(lit_64);
DEFLIT(lit_29);
DEFLIT(lit_72);
DEFLIT(lit_7);
DEFLIT(lit_68);
DEFLIT(lit_27);
DEFLIT(lit_80);
DEFLIT(lit_37);
DEFLIT(lit_6);
DEFLIT(lit_39);
DEFLIT(lit_17);
DEFLIT(lit_16);
DEFLIT(lit_51);
DEFLIT(lit_57);
DEFLIT(lit_10);
DEFLIT(lit_48);
DEFLIT(lit_66);
DEFLIT(lit_11);
DEFLIT(lit_26);
DEFLIT(lit_50);
DEFLIT(lit_46);
DEFLIT(lit_76);
DEFLIT(lit_58);
DEFLIT(lit_8);
DEFLIT(lit_49);
DEFLIT(lit_24);
DEFLIT(lit_75);
DEFLIT(lit_82);
DEFLIT(lit_4);
DEFLIT(lit_18);
DEFLIT(lit_38);
DEFLIT(lit_1);
DEFLIT(lit_45);
DEFLIT(lit_15);
DEFLIT(lit_25);
DEFLIT(lit_52);
DEFLIT(lit_21);
DEFLIT(lit_77);
DEFLIT(lit_20);
DEFLIT(lit_14);
DEFLIT(lit_31);
DEFLIT(lit_60);
DEFLIT(lit_69);
DEFLIT(lit_32);
DEFLIT(lit_41);
DEFLIT(lit_61);
DEFLIT(lit_55);
DEFLIT(lit_40);
DEFLIT(lit_30);
DEFLIT(lit_43);
DEFLIT(lit_53);
DEFLIT(lit_44);
DEFLIT(lit_13);
DEFLIT(lit_23);
DEFLIT(lit_59);
DEFLIT(lit_34);
DEFLIT(lit_78);
DEFLIT(lit_47);
DEFLIT(lit_62);
DEFLIT(lit_12);
DEFLIT(lit_74);
DEFLIT(lit_22);
DEFLIT(lit_28);
DEFLIT(lit_5);
DEFLIT(lit_71);
DEFLIT(lit_63);
DEFLIT(lit_73);

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
LOCFOR(fun_x_1267_30);
LOCFOR(fun_31);
LOCFOR(fun_32);
LOCFOR(fun_as_fun_name_33);
LOCFOR(fun_as_fun_name_34);
LOCFOR(fun_as_fun_name_35);
LOCFOR(fun_as_fun_name_36);
LOCFOR(fun_as_fun_name_37);
LOCFOR(fun_as_fun_name_38);
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
LOCFOR(fun_export_proto_method_49);
LOCFOR(fun_50);
LOCFOR(fun_ast_eval_51);
LOCFOR(fun_ast_eval_52);
LOCFOR(fun_env_local_reference_value_53);
LOCFOR(fun_env_local_reference_value_setter_54);
LOCFOR(fun_ast_eval_55);
LOCFOR(fun_ast_eval_56);
LOCFOR(fun_ast_eval_57);
LOCFOR(fun_ast_eval_58);
LOCFOR(fun_ast_eval_boundQ_59);
LOCFOR(fun_ast_eval_boundQ_60);
LOCFOR(fun_ast_eval_61);
LOCFOR(fun_ast_eval_62);
LOCFOR(fun_ast_eval_63);
LOCFOR(fun_ast_eval_64);
LOCFOR(fun_env_define_bindingX_65);
LOCFOR(fun_ast_eval_66);
LOCFOR(fun_ast_eval_67);
LOCFOR(fun_eval_68);
LOCFOR(fun_ast_eval_69);
LOCFOR(fun_eval_70);
LOCFOR(fun_ast_eval_71);
LOCFOR(fun_ast_eval_72);
LOCFOR(fun_ast_eval_73);
LOCFOR(fun_ast_eval_74);
LOCFOR(fun_75);
LOCFOR(fun_ast_eval_76);
LOCFOR(fun_77);
LOCFOR(fun_78);
LOCFOR(fun_ast_eval_79);
LOCFOR(fun_80);
LOCFOR(fun_81);
LOCFOR(fun_ast_eval_82);
LOCFOR(fun_ast_eval_83);
FUNFOR(YastYinit_environment_for_eval);
extern P Yast_evalY___main_0___ ();
extern P Yast_evalY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_env_global_binding_value_0) {
  ARG(b_, 0);
  P boxF1472;
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T5 = CALL1(CHKREF(YastYbinding_global_box),b_);
  boxF1472 = T5;
  if (boxF1472 != YPfalse) {
    T4 = CALL1(CHKREF(YastYglobal_box_value),boxF1472);
    T1 = T4;
  } else {
    T3 = CALL1(CHKREF(YastYbinding_name),b_);
    T2 = CALL2(CHKREF(Yerror),CHKREF(lit_2),T3);
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_env_global_binding_value_setter_1) {
  ARG(b_, 0);
  ARG(value_, 1);
  P boxF1473;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T10 = CALL1(CHKREF(YastYbinding_global_box),b_);
  boxF1473 = T10;
  boxF1473 = BOXFAB(boxF1473);
  T7 = BOXVAL(boxF1473);
  T6 = CALL1(CHKREF(Ynot),T7);
  if (T6 != YPfalse) {
    T5 = (P)YPpair(CHKREF(YastYLglobal_boxG),Ynil);
    T4 = CALL3(CHKREF(YPisa),T5,Ynil,Ynil);
    T3 = CALL2(CHKREF(YastYbinding_global_box_setter),T4,b_);
    T2 = BOXVAL(boxF1473) = T3;
  } else {
  }
  T9 = BOXVAL(boxF1473);
  T8 = CALL2(CHKREF(YastYglobal_box_value_setter),value_,T9);
  T0 = T8;
  QRET(T0);
}

FUNCODEDEF(fun_env_global_binding_boundQ_2) {
  ARG(b_, 0);
  P boxF1474;
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL1(CHKREF(YastYbinding_global_box),b_);
  boxF1474 = T2;
  if (boxF1474 != YPfalse) {
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
  P valuesF1475;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T11 = CALL2(CHKREF(YruntimeYas),CHKREF(YLvecG),args_);
  valuesF1475 = T11;
  T10 = (P)YPpair(CHKREF(Yast_evalYLloc_envG),Ynil);
  T9 = (P)YPpair(CHKREF(Yast_evalYenv_names),Ynil);
  T8 = (P)YPpair(CHKREF(Yast_evalYenv_values),T9);
  T7 = (P)YPpair(CHKREF(Yast_evalYenv_function),T8);
  T6 = (P)YPpair(CHKREF(Yast_evalYenv_parent),T7);
  T5 = (P)YPpair(names_,Ynil);
  T4 = (P)YPpair(valuesF1475,T5);
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
  P loopF1476;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = CALL2(CHKREF(YmacrosYEE),env_,CHKREF(Yast_evalYDnul_loc_env));
  if (T5 != YPfalse) {
    T0 = CHKREF(Ynul);
  } else {
    T4 = FUNSHELL(1,fun_loop_20,3);
    loopF1476 = T4;
    FUNINIT(loopF1476, 3,loopF1476,env_,name_);
    T3 = CALL1(CHKREF(Yast_evalYenv_names),env_);
    T2 = KCALL2(loopF1476,T3,YPint((P)0));
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
  P loopF1477;
  P T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T3 = FUNSHELL(1,fun_loop_22,4);
  loopF1477 = T3;
  FUNINIT(loopF1477, 4,loopF1477,env_,v_,name_);
  T2 = CALL1(CHKREF(Yast_evalYenv_names),env_);
  T1 = KCALL2(loopF1477,T2,YPint((P)0));
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
  P typeF1479;
  P specF1478;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T11 = CALL2(CHKREF(YruntimeYE),i_,FREEREF(2));
  if (T11 != YPfalse) {
    T10 = CALL1(CHKREF(YruntimeYrevX),res_);
    T0 = T10;
  } else {
    T9 = CALL1(CHKREF(Yhead),specs_);
    specF1478 = T9;
    if (specF1478 != YPfalse) {
      T8 = CALL2(CHKREF(Yast_evalYast_eval),specF1478,FREEREF(0));
      T7 = T8;
    } else {
      T7 = CHKREF(YLanyG);
    }
    typeF1479 = T7;
    T6 = CALL2(CHKREF(YmacrosYpair),typeF1479,res_);
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
  P loopF1481;
  P nreqF1480;
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
  nreqF1480 = T4;
  T3 = FUNSHELL(1,fun_loop_28,3);
  loopF1481 = T3;
  FUNINIT(loopF1481, 3,env_,loopF1481,nreqF1480);
  T2 = KCALL3(loopF1481,Ynil,specs_,YPint((P)0));
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1267_30) {
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
  P x_1266F1496;
  P x_1266F1495;
  P x_1266F1494;
  P x_1266F1493;
  P x_1266F1492;
  P x_1266F1491;
  P x_1266F1490;
  P x_1266F1489;
  P bodyF1488;
  P argsF1487;
  P namesF1486;
  P fF1485;
  P envF1484;
  P x_1266F1483;
  P x_1267F1482;
  P T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67;
  P T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51;
  P T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35;
  P T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
loop:
  T82 = FUNSHELL(0,fun_x_1267_30,1);
  x_1267F1482 = T82;
  FUNINIT(x_1267F1482, 1,return_);
  x_1266F1483 = FREEREF(0);
  envF1484 = YPfalse;
  envF1484 = BOXFAB(envF1484);
  fF1485 = YPfalse;
  fF1485 = BOXFAB(fF1485);
  namesF1486 = YPfalse;
  namesF1486 = BOXFAB(namesF1486);
  argsF1487 = YPfalse;
  argsF1487 = BOXFAB(argsF1487);
  bodyF1488 = YPfalse;
  bodyF1488 = BOXFAB(bodyF1488);
  T33 = CALL2(CHKREF(YisaQ),x_1266F1483,CHKREF(YLlstG));
  if (T33 != YPfalse) {
    T32 = CALL3(CHKREF(YmacrosYmatch_atom),x_1266F1483,CHKREF(lit_53),x_1267F1482);
    x_1266F1489 = T32;
    T30 = CALL2(CHKREF(YmacrosYmatch_sublist),x_1266F1489,x_1267F1482);
    x_1266F1490 = T30;
    T28 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1266F1490,x_1267F1482);
    BOXVAL(envF1484) = T28;
    T29 = CALL1(CHKREF(Ytail),x_1266F1490);
    x_1266F1491 = T29;
    T26 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1266F1491,x_1267F1482);
    BOXVAL(fF1485) = T26;
    T27 = CALL1(CHKREF(Ytail),x_1266F1491);
    x_1266F1492 = T27;
    T24 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1266F1492,x_1267F1482);
    BOXVAL(namesF1486) = T24;
    T25 = CALL1(CHKREF(Ytail),x_1266F1492);
    x_1266F1493 = T25;
    BOXVAL(argsF1487) = x_1266F1493;
    x_1266F1494 = Ynil;
    T23 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1266F1494,x_1267F1482);
    T22 = T23;
    T21 = T22;
    T20 = T21;
    T19 = T20;
    T31 = CALL1(CHKREF(Ytail),x_1266F1489);
    x_1266F1495 = T31;
    T17 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1266F1495,x_1267F1482);
    BOXVAL(bodyF1488) = T17;
    T18 = CALL1(CHKREF(Ytail),x_1266F1495);
    x_1266F1496 = T18;
    T16 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1266F1496,x_1267F1482);
    T15 = T16;
    T14 = T15;
    T13 = T14;
  } else {
    T12 = CALL2(x_1267F1482,CHKREF(lit_52),x_1266F1483);
  }
  T81 = CALL1(CHKREF(Ylst),CHKREF(lit_51));
  T80 = BOXVAL(argsF1487);
  T79 = CALL2(CHKREF(YmacrosYcat),T80,Ynil);
  T78 = CALL1(CHKREF(Ylst),T79);
  T77 = CALL1(CHKREF(Ylst),CHKREF(lit_50));
  T76 = CALL1(CHKREF(Ylst),CHKREF(lit_45));
  T75 = CALL1(CHKREF(Ylst),CHKREF(lit_47));
  T74 = CALL2(CHKREF(YmacrosYcat),T75,Ynil);
  T73 = CALL1(CHKREF(Ylst),T74);
  T72 = CALL3(CHKREF(YmacrosYcat),T76,T73,Ynil);
  T71 = CALL1(CHKREF(Ylst),T72);
  T70 = CALL1(CHKREF(Ylst),CHKREF(lit_44));
  T69 = CALL1(CHKREF(Ylst),CHKREF(lit_21));
  T68 = BOXVAL(envF1484);
  T67 = CALL1(CHKREF(Ylst),T68);
  T66 = BOXVAL(fF1485);
  T65 = CALL1(CHKREF(Ylst),T66);
  T64 = CALL1(CHKREF(Ylst),CHKREF(lit_49));
  T63 = BOXVAL(namesF1486);
  T62 = CALL1(CHKREF(Ylst),T63);
  T61 = CALL1(CHKREF(Ylst),CHKREF(lit_46));
  T60 = CALL1(CHKREF(Ylst),CHKREF(lit_48));
  T59 = CALL1(CHKREF(Ylst),CHKREF(lit_47));
  T58 = CALL3(CHKREF(YmacrosYcat),T60,T59,Ynil);
  T57 = CALL1(CHKREF(Ylst),T58);
  T56 = CALL3(CHKREF(YmacrosYcat),T61,T57,Ynil);
  T55 = CALL1(CHKREF(Ylst),T56);
  T54 = CALLN(CHKREF(YmacrosYcat),4,T64,T62,T55,Ynil);
  T53 = CALL1(CHKREF(Ylst),T54);
  T52 = CALL1(CHKREF(Ylst),CHKREF(lit_46));
  T51 = BOXVAL(argsF1487);
  T50 = CALL1(CHKREF(Ylst),CHKREF(lit_45));
  T49 = CALLN(CHKREF(YmacrosYcat),4,T52,T51,T50,Ynil);
  T48 = CALL1(CHKREF(Ylst),T49);
  T47 = CALLN(CHKREF(YmacrosYcat),6,T69,T67,T65,T53,T48,Ynil);
  T46 = CALL1(CHKREF(Ylst),T47);
  T45 = CALL3(CHKREF(YmacrosYcat),T70,T46,Ynil);
  T44 = CALL1(CHKREF(Ylst),T45);
  T43 = CALL3(CHKREF(YmacrosYcat),T71,T44,Ynil);
  T42 = CALL1(CHKREF(Ylst),T43);
  T41 = BOXVAL(bodyF1488);
  T40 = CALL1(CHKREF(Ylst),T41);
  T39 = CALL1(CHKREF(Ylst),CHKREF(lit_44));
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
  T1 = CALL1(CHKREF(YastYfunction_debug_name),x_);
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
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YastYconstant_value),x_);
  T0 = CALL1(CHKREF(Yast_evalYas_fun_name),T1);
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_37) {
  ARG(x_, 0);
  P a1;
loop:
  RET(x_);
}

FUNCODEDEF(fun_as_fun_name_38) {
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
  P frameF1498;
  P nmsF1497;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6,a7,a8,a9;
loop:
  T7 = (P)YPnext_methods();
  nmsF1497 = T7;
  T6 = CALL1(CHKREF(Ylst),CHKREF(lit_47));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(Ylst),10,a1_,a2_,a3_,a4_,a5_,a6_,a7_,a8_,a9_,nmsF1497);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1498 = T3;
  T2 = CALL1(FREEREF(3),frameF1498);
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
  P frameF1500;
  P nmsF1499;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6,a7,a8;
loop:
  T7 = (P)YPnext_methods();
  nmsF1499 = T7;
  T6 = CALL1(CHKREF(Ylst),CHKREF(lit_47));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(Ylst),9,a1_,a2_,a3_,a4_,a5_,a6_,a7_,a8_,nmsF1499);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1500 = T3;
  T2 = CALL1(FREEREF(3),frameF1500);
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
  P frameF1502;
  P nmsF1501;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6,a7;
loop:
  T7 = (P)YPnext_methods();
  nmsF1501 = T7;
  T6 = CALL1(CHKREF(Ylst),CHKREF(lit_47));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(Ylst),8,a1_,a2_,a3_,a4_,a5_,a6_,a7_,nmsF1501);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1502 = T3;
  T2 = CALL1(FREEREF(3),frameF1502);
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
  P frameF1504;
  P nmsF1503;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6;
loop:
  T7 = (P)YPnext_methods();
  nmsF1503 = T7;
  T6 = CALL1(CHKREF(Ylst),CHKREF(lit_47));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(Ylst),7,a1_,a2_,a3_,a4_,a5_,a6_,nmsF1503);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1504 = T3;
  T2 = CALL1(FREEREF(3),frameF1504);
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
  P frameF1506;
  P nmsF1505;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5;
loop:
  T7 = (P)YPnext_methods();
  nmsF1505 = T7;
  T6 = CALL1(CHKREF(Ylst),CHKREF(lit_47));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(Ylst),6,a1_,a2_,a3_,a4_,a5_,nmsF1505);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1506 = T3;
  T2 = CALL1(FREEREF(3),frameF1506);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_44) {
  ARG(a4_, 0);
  ARG(a3_, 1);
  ARG(a2_, 2);
  ARG(a1_, 3);
  P frameF1508;
  P nmsF1507;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T7 = (P)YPnext_methods();
  nmsF1507 = T7;
  T6 = CALL1(CHKREF(Ylst),CHKREF(lit_47));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(Ylst),5,a1_,a2_,a3_,a4_,nmsF1507);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1508 = T3;
  T2 = CALL1(FREEREF(3),frameF1508);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_45) {
  ARG(a3_, 0);
  ARG(a2_, 1);
  ARG(a1_, 2);
  P frameF1510;
  P nmsF1509;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T7 = (P)YPnext_methods();
  nmsF1509 = T7;
  T6 = CALL1(CHKREF(Ylst),CHKREF(lit_47));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALLN(CHKREF(Ylst),4,a1_,a2_,a3_,nmsF1509);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1510 = T3;
  T2 = CALL1(FREEREF(3),frameF1510);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_46) {
  ARG(a2_, 0);
  ARG(a1_, 1);
  P frameF1512;
  P nmsF1511;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T7 = (P)YPnext_methods();
  nmsF1511 = T7;
  T6 = CALL1(CHKREF(Ylst),CHKREF(lit_47));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALL3(CHKREF(Ylst),a1_,a2_,nmsF1511);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1512 = T3;
  T2 = CALL1(FREEREF(3),frameF1512);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_47) {
  ARG(a1_, 0);
  P frameF1514;
  P nmsF1513;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = (P)YPnext_methods();
  nmsF1513 = T7;
  T6 = CALL1(CHKREF(Ylst),CHKREF(lit_47));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALL2(CHKREF(Ylst),a1_,nmsF1513);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1514 = T3;
  T2 = CALL1(FREEREF(3),frameF1514);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_48) {
  P frameF1516;
  P nmsF1515;
  P T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T7 = (P)YPnext_methods();
  nmsF1515 = T7;
  T6 = CALL1(CHKREF(Ylst),CHKREF(lit_47));
  T5 = CALL2(CHKREF(YruntimeYcat2),FREEREF(0),T6);
  T4 = CALL1(CHKREF(Ylst),nmsF1515);
  T3 = CALLN(CHKREF(Yast_evalYenv_frameX),4,FREEREF(2),FREEREF(1),T5,T4);
  frameF1516 = T3;
  T2 = CALL1(FREEREF(3),frameF1516);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_export_proto_method_49) {
  ARG(env_, 0);
  ARG(body_, 1);
  ARG(value_, 2);
  ARG(naryQ_, 3);
  ARG(specs_, 4);
  ARG(names_, 5);
  ARG(f_, 6);
  P efunF1527;
  P x_1277F1526;
  P x_1276F1525;
  P x_1275F1524;
  P x_1274F1523;
  P x_1273F1522;
  P x_1272F1521;
  P x_1271F1520;
  P x_1270F1519;
  P x_1269F1518;
  P x_1268F1517;
  P T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6,a7;
loop:
  T60 = CALL1(CHKREF(YruntimeYlen),names_);
  x_1268F1517 = T60;
  T59 = CALL2(CHKREF(YmacrosYEE),x_1268F1517,YPint((P)0));
  if (T59 != YPfalse) {
    T58 = FUNFAB(fun_48,4,names_,f_,env_,body_);
    T21 = T58;
  } else {
    x_1269F1518 = x_1268F1517;
    T57 = CALL2(CHKREF(YmacrosYEE),x_1269F1518,YPint((P)1));
    if (T57 != YPfalse) {
      T56 = FUNFAB(fun_47,4,names_,f_,env_,body_);
      T23 = T56;
    } else {
      x_1270F1519 = x_1269F1518;
      T55 = CALL2(CHKREF(YmacrosYEE),x_1270F1519,YPint((P)2));
      if (T55 != YPfalse) {
        T54 = FUNFAB(fun_46,4,names_,f_,env_,body_);
        T25 = T54;
      } else {
        x_1271F1520 = x_1270F1519;
        T53 = CALL2(CHKREF(YmacrosYEE),x_1271F1520,YPint((P)3));
        if (T53 != YPfalse) {
          T52 = FUNFAB(fun_45,4,names_,f_,env_,body_);
          T27 = T52;
        } else {
          x_1272F1521 = x_1271F1520;
          T51 = CALL2(CHKREF(YmacrosYEE),x_1272F1521,YPint((P)4));
          if (T51 != YPfalse) {
            T50 = FUNFAB(fun_44,4,names_,f_,env_,body_);
            T29 = T50;
          } else {
            x_1273F1522 = x_1272F1521;
            T49 = CALL2(CHKREF(YmacrosYEE),x_1273F1522,YPint((P)5));
            if (T49 != YPfalse) {
              T48 = FUNFAB(fun_43,4,names_,f_,env_,body_);
              T31 = T48;
            } else {
              x_1274F1523 = x_1273F1522;
              T47 = CALL2(CHKREF(YmacrosYEE),x_1274F1523,YPint((P)6));
              if (T47 != YPfalse) {
                T46 = FUNFAB(fun_42,4,names_,f_,env_,body_);
                T33 = T46;
              } else {
                x_1275F1524 = x_1274F1523;
                T45 = CALL2(CHKREF(YmacrosYEE),x_1275F1524,YPint((P)7));
                if (T45 != YPfalse) {
                  T44 = FUNFAB(fun_41,4,names_,f_,env_,body_);
                  T35 = T44;
                } else {
                  x_1276F1525 = x_1275F1524;
                  T43 = CALL2(CHKREF(YmacrosYEE),x_1276F1525,YPint((P)8));
                  if (T43 != YPfalse) {
                    T42 = FUNFAB(fun_40,4,names_,f_,env_,body_);
                    T37 = T42;
                  } else {
                    x_1277F1526 = x_1276F1525;
                    T41 = CALL2(CHKREF(YmacrosYEE),x_1277F1526,YPint((P)9));
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
  efunF1527 = T20;
  T1 = CALL1(CHKREF(Yast_evalYas_fun_name),f_);
  CALL2(CHKREF(Yfun_name_setter),T1,efunF1527);
  T19 = (P)YPpair(CHKREF(YLsigG),Ynil);
  T18 = (P)YPpair(CHKREF(Ysig_value),Ynil);
  T17 = (P)YPpair(CHKREF(Ysig_arity),T18);
  T16 = (P)YPpair(CHKREF(Ysig_naryQ),T17);
  T15 = (P)YPpair(CHKREF(Ysig_specs),T16);
  T14 = (P)YPpair(CHKREF(Ysig_names),T15);
  T13 = CALL3(CHKREF(Yast_evalYast_eval_specs),specs_,naryQ_,env_);
  T12 = CALL1(CHKREF(Yfun_arity),efunF1527);
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
  CALL2(CHKREF(Yfun_sig_setter),T2,efunF1527);
  T0 = efunF1527;
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

FUNCODEDEF(fun_ast_eval_51) {
  ARG(env_, 0);
  ARG(e_, 1);
  P evalF1529;
  P paramsF1528;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T8 = CALL1(CHKREF(YastYfunction_bindings),e_);
  paramsF1528 = T8;
  T7 = FUNFAB(fun_50,1,e_);
  evalF1529 = T7;
  T6 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_name),paramsF1528);
  T5 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_type),paramsF1528);
  T4 = CALL1(CHKREF(YastYfunction_naryQ),e_);
  T3 = CALL1(CHKREF(YastYfunction_value),e_);
  T2 = CALLN(CHKREF(Yast_evalYexport_proto_method),7,e_,T6,T5,T4,T3,evalF1529,env_);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_52) {
  ARG(env_, 0);
  ARG(e_, 1);
  P specsF1533;
  P namesF1532;
  P naryQF1531;
  P paramsF1530;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T10 = CALL1(CHKREF(YastYfunction_bindings),e_);
  paramsF1530 = T10;
  T9 = CALL1(CHKREF(YastYfunction_naryQ),e_);
  naryQF1531 = T9;
  T8 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_name),paramsF1530);
  namesF1532 = T8;
  T7 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_type),paramsF1530);
  T6 = CALL3(CHKREF(Yast_evalYast_eval_specs),T7,naryQF1531,env_);
  specsF1533 = T6;
  T5 = CALL1(CHKREF(Yast_evalYas_fun_name),e_);
  T4 = CALLN(CHKREF(Yfab_gen),5,T5,namesF1532,specsF1533,naryQF1531,Ynil);
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_env_local_reference_value_53) {
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

FUNCODEDEF(fun_env_local_reference_value_setter_54) {
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

FUNCODEDEF(fun_ast_eval_55) {
  ARG(env_, 0);
  ARG(e_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL2(CHKREF(Yast_evalYenv_local_reference_value),env_,e_);
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_56) {
  ARG(env_, 0);
  ARG(e_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(YastYreference_binding),e_);
  T0 = CALL1(CHKREF(Yast_evalYenv_global_binding_value),T1);
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_57) {
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

FUNCODEDEF(fun_ast_eval_58) {
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

FUNCODEDEF(fun_ast_eval_boundQ_59) {
  ARG(env_, 0);
  ARG(binding_, 1);
  ARG(e_, 2);
  P x_1278F1534;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T4 = CALL1(CHKREF(YastYbinding_kind),binding_);
  x_1278F1534 = T4;
  T3 = CALL2(CHKREF(YmacrosYEE),x_1278F1534,CHKREF(lit_75));
  if (T3 != YPfalse) {
    T2 = CALL1(CHKREF(Yast_evalYenv_global_binding_boundQ),binding_);
    T1 = T2;
  } else {
    T1 = YPtrue;
  }
  T0 = T1;
  QRET(T0);
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
  P valueF1535;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL1(CHKREF(YastYassignment_form),e_);
  T3 = CALL2(CHKREF(Yast_evalYast_eval),T4,env_);
  valueF1535 = T3;
  T2 = CALL1(CHKREF(YastYassignment_binding),e_);
  T1 = CALL2(CHKREF(Yast_evalYenv_global_binding_value_setter),valueF1535,T2);
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
  P valueF1536;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = CALL1(CHKREF(YastYassignment_form),e_);
  T4 = CALL2(CHKREF(Yast_evalYast_eval),T5,env_);
  valueF1536 = T4;
  T3 = CALL1(CHKREF(YastYassignment_binding),e_);
  T2 = CALL1(CHKREF(YastYbinding_locative),T3);
  T1 = CALL2(CHKREF(Yast_evalYenv_runtime_value_setter),valueF1536,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_64) {
  ARG(env_, 0);
  ARG(e_, 1);
  P valueF1537;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL1(CHKREF(YastYassignment_form),e_);
  T3 = CALL2(CHKREF(Yast_evalYast_eval),T4,env_);
  valueF1537 = T3;
  T2 = CALL1(CHKREF(YastYassignment_reference),e_);
  T1 = CALL3(CHKREF(Yast_evalYenv_local_reference_value_setter),valueF1537,env_,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_env_define_bindingX_65) {
  ARG(v_, 0);
  ARG(b_, 1);
  P x_1280F1539;
  P x_1279F1538;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T11 = CALL1(CHKREF(YastYbinding_kind),b_);
  x_1279F1538 = T11;
  T10 = CALL2(CHKREF(YmacrosYEE),x_1279F1538,CHKREF(lit_78));
  if (T10 != YPfalse) {
    T9 = CALL1(CHKREF(YastYbinding_locative),b_);
    T8 = CALL2(CHKREF(Yast_evalYenv_runtime_value_setter),v_,T9);
    T1 = T8;
  } else {
    x_1280F1539 = x_1279F1538;
    T7 = CALL2(CHKREF(YmacrosYEE),x_1280F1539,CHKREF(lit_75));
    if (T7 != YPfalse) {
      T6 = CALL2(CHKREF(Yast_evalYenv_global_binding_value_setter),v_,b_);
      T3 = T6;
    } else {
      T5 = CALL1(CHKREF(YastYbinding_kind),b_);
      T4 = CALL2(CHKREF(Yerror),CHKREF(lit_77),T5);
      T3 = T4;
    }
    T2 = T3;
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_66) {
  ARG(env_, 0);
  ARG(e_, 1);
  P valueF1540;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = CALL1(CHKREF(YastYassignment_form),e_);
  T2 = CALL2(CHKREF(Yast_evalYast_eval),T3,env_);
  valueF1540 = T2;
  T1 = CALL1(CHKREF(YastYassignment_binding),e_);
  CALL2(CHKREF(Yast_evalYenv_define_bindingX),T1,valueF1540);
  T0 = YPfalse;
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_67) {
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
  P valF1542;
  P nxtF1541;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = CALL1(CHKREF(Ytail),e_);
  nxtF1541 = T7;
  T6 = CALL1(CHKREF(Yhead),e_);
  T5 = CALL2(CHKREF(Yast_evalYast_eval),T6,FREEREF(0));
  valF1542 = T5;
  T4 = CALL1(CHKREF(YmacrosYemptyQ),nxtF1541);
  if (T4 != YPfalse) {
    T2 = valF1542;
  } else {
    a1 = nxtF1541;
    e_ = a1;
    goto loop;
    T2 = T3;
  }
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_69) {
  ARG(env_, 0);
  ARG(e_, 1);
  P evalF1543;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_eval_68,2);
  evalF1543 = T2;
  FUNINIT(evalF1543, 2,env_,evalF1543);
  T1 = KCALL1(evalF1543,e_);
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

FUNCODEDEF(fun_ast_eval_71) {
  ARG(env_, 0);
  ARG(e_, 1);
  P evalF1544;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_eval_70,2);
  evalF1544 = T2;
  FUNINIT(evalF1544, 2,env_,evalF1544);
  T1 = KCALL2(evalF1544,Ynil,e_);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_72) {
  ARG(env_, 0);
  ARG(e_, 1);
  P argsF1546;
  P fF1545;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T6 = CALL1(CHKREF(YastYapplication_function),e_);
  T5 = CALL2(CHKREF(Yast_evalYast_eval),T6,env_);
  fF1545 = T5;
  T4 = CALL1(CHKREF(YastYapplication_arguments),e_);
  T3 = CALL2(CHKREF(Yast_evalYast_eval),T4,env_);
  argsF1546 = T3;
  T2 = CALL2(CHKREF(Yapply),fF1545,argsF1546);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_73) {
  ARG(env_, 0);
  ARG(e_, 1);
  P nmsF1550;
  P argsF1549;
  P fF1548;
  P bF1547;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T14 = CALL1(CHKREF(YastYapplication_binding),e_);
  bF1547 = T14;
  T13 = CALL1(CHKREF(YastYbinding_name),bF1547);
  T12 = CALL2(CHKREF(YmacrosYEE),T13,CHKREF(lit_47));
  if (T12 != YPfalse) {
    T11 = CALL2(CHKREF(Yast_evalYenv_binding_value),env_,CHKREF(lit_47));
    nmsF1550 = T11;
    T10 = CALL2(CHKREF(YmacrosYEE),nmsF1550,CHKREF(Ynul));
    if (T10 != YPfalse) {
      T9 = YPfalse;
    } else {
      T9 = nmsF1550;
    }
    T8 = T9;
    T1 = T8;
  } else {
    T7 = CALL1(CHKREF(YastYbinding_info),bF1547);
    fF1548 = T7;
    T6 = CALL1(CHKREF(YastYapplication_arguments),e_);
    T5 = CALL2(CHKREF(Yast_evalYast_eval),T6,env_);
    argsF1549 = T5;
    T4 = CALL2(CHKREF(Yapply),fF1548,argsF1549);
    T3 = T4;
    T2 = T3;
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_74) {
  ARG(env_, 0);
  ARG(e_, 1);
  P nenvF1552;
  P argsF1551;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T8 = CALL1(CHKREF(YastYfix_let_arguments),e_);
  T7 = CALL2(CHKREF(Yast_evalYast_eval),T8,env_);
  argsF1551 = T7;
  T6 = CALL1(CHKREF(YastYfix_let_bindings),e_);
  T5 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_name),T6);
  T4 = CALLN(CHKREF(Yast_evalYenv_frameX),4,env_,YPfalse,T5,argsF1551);
  nenvF1552 = T4;
  T3 = CALL1(CHKREF(YastYfix_let_body),e_);
  T2 = CALL2(CHKREF(Yast_evalYast_eval),T3,nenvF1552);
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

FUNCODEDEF(fun_ast_eval_76) {
  ARG(env_, 0);
  ARG(e_, 1);
  P new_envF1554;
  P bindingsF1553;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T13 = CALL1(CHKREF(YastYlocals_bindings),e_);
  bindingsF1553 = T13;
  T12 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_name),bindingsF1553);
  T11 = CALL1(CHKREF(YruntimeYalways),CHKREF(Ynul));
  T10 = CALL2(CHKREF(YmacrosYmap),T11,bindingsF1553);
  T9 = CALLN(CHKREF(Yast_evalYenv_frameX),4,env_,YPfalse,T12,T10);
  new_envF1554 = T9;
  T6 = FUNFAB(fun_75,1,new_envF1554);
  T5 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYbinding_name),bindingsF1553);
  T4 = CALL2(CHKREF(YruntimeYrcurry),CHKREF(Yast_evalYast_eval),new_envF1554);
  T3 = CALL1(CHKREF(YastYlocals_functions),e_);
  T2 = CALL2(CHKREF(YmacrosYmap),T4,T3);
  CALL3(CHKREF(YruntimeYdo2),T6,T5,T2);
  T8 = CALL1(CHKREF(YastYlocals_body),e_);
  T7 = CALL2(CHKREF(Yast_evalYast_eval),T8,new_envF1554);
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
  P exitF1556;
  P rprocF1555;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = FUNFAB(fun_77,1,return_);
  rprocF1555 = T8;
  T7 = CALL1(CHKREF(Ylst),CHKREF(lit_7));
  T6 = CALL1(CHKREF(Ylst),YPfalse);
  T5 = CALLN(CHKREF(Yast_evalYexport_proto_method),7,rprocF1555,T7,T6,YPfalse,YPfalse,rprocF1555,FREEREF(0));
  exitF1556 = T5;
  T4 = CALL1(CHKREF(YastYbind_exit_main_fun),FREEREF(1));
  T3 = CALL2(CHKREF(Yast_evalYast_eval),T4,FREEREF(0));
  T2 = CALL1(T3,exitF1556);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_79) {
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

FUNCODEDEF(fun_ast_eval_82) {
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

FUNCODEDEF(fun_ast_eval_83) {
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
  P bF1557;
  P T2,T1,T0;
  P a1;
loop:
  CALLN(CHKREF(YastYast_define_binding),4,env_,CHKREF(lit_47),YPfalse,CHKREF(lit_82));
  T2 = CALLN(CHKREF(YastYast_define_binding),4,env_,CHKREF(lit_81),YPfalse,CHKREF(lit_75));
  bF1557 = T2;
  T1 = CALL2(CHKREF(Yast_evalYenv_global_binding_value_setter),CHKREF(YmacrosYpair),bF1557);
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
  fun_env_global_binding_value_0 = YPmet(FUNCODEREF(fun_env_global_binding_value_0),CHKREF(lit_0),T0,ENVNUL);
  T4 = BOUNDP(Yast_evalYenv_global_binding_value);
  if (T4 != YPfalse) {
    T3 = CHKREF(Yast_evalYenv_global_binding_value);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_env_global_binding_value_0;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  Yast_evalYenv_global_binding_value = T1;
  lit_3 = YPPsym((P)"env-global-binding-value-setter");
  lit_4 = YPPsym((P)"value");
  T5 = YPsig(YPPlist(2,CHKREF(lit_4),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YastYLmodule_bindingG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_env_global_binding_value_setter_1 = YPmet(FUNCODEREF(fun_env_global_binding_value_setter_1),CHKREF(lit_3),T5,ENVNUL);
  T9 = BOUNDP(Yast_evalYenv_global_binding_value_setter);
  if (T9 != YPfalse) {
    T8 = CHKREF(Yast_evalYenv_global_binding_value_setter);
  } else {
    T8 = YPfalse;
  }
  T7 = fun_env_global_binding_value_setter_1;
  T6 = CALL2(CHKREF(YPdefine_method),T8,T7);
  Yast_evalYenv_global_binding_value_setter = T6;
  lit_5 = YPPsym((P)"env-global-binding-bound?");
  T10 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YastYLmodule_bindingG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_env_global_binding_boundQ_2 = YPmet(FUNCODEREF(fun_env_global_binding_boundQ_2),CHKREF(lit_5),T10,ENVNUL);
  T14 = BOUNDP(Yast_evalYenv_global_binding_boundQ);
  if (T14 != YPfalse) {
    T13 = CHKREF(Yast_evalYenv_global_binding_boundQ);
  } else {
    T13 = YPfalse;
  }
  T12 = fun_env_global_binding_boundQ_2;
  T11 = CALL2(CHKREF(YPdefine_method),T13,T12);
  Yast_evalYenv_global_binding_boundQ = T11;
  lit_6 = YPPsym((P)"env-runtime-value");
  lit_7 = YPPsym((P)"x");
  T15 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLlocG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_env_runtime_value_3 = YPmet(FUNCODEREF(fun_env_runtime_value_3),CHKREF(lit_6),T15,ENVNUL);
  T19 = BOUNDP(Yast_evalYenv_runtime_value);
  if (T19 != YPfalse) {
    T18 = CHKREF(Yast_evalYenv_runtime_value);
  } else {
    T18 = YPfalse;
  }
  T17 = fun_env_runtime_value_3;
  T16 = CALL2(CHKREF(YPdefine_method),T18,T17);
  Yast_evalYenv_runtime_value = T16;
  lit_8 = YPPsym((P)"env-runtime-value-setter");
  lit_9 = YPPsym((P)"v");
  T20 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_7)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLlocG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_env_runtime_value_setter_4 = YPmet(FUNCODEREF(fun_env_runtime_value_setter_4),CHKREF(lit_8),T20,ENVNUL);
  T24 = BOUNDP(Yast_evalYenv_runtime_value_setter);
  if (T24 != YPfalse) {
    T23 = CHKREF(Yast_evalYenv_runtime_value_setter);
  } else {
    T23 = YPfalse;
  }
  T22 = fun_env_runtime_value_setter_4;
  T21 = CALL2(CHKREF(YPdefine_method),T23,T22);
  Yast_evalYenv_runtime_value_setter = T21;
  lit_10 = YPPsym((P)"<loc-env>");
  T26 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T25 = CALL2(CHKREF(Yfab_class),CHKREF(lit_10),T26);
  Yast_evalYLloc_envG = T25;
  lit_11 = YPPsym((P)"env-parent");
  lit_12 = YPPsym((P)"_x");
  T27 = YPsig(YPPlist(1,CHKREF(lit_12)),YPPlist(1,CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_env_parent_5 = YPmet(FUNCODEREF(fun_env_parent_5),CHKREF(lit_11),T27,ENVNUL);
  T31 = BOUNDP(Yast_evalYenv_parent);
  if (T31 != YPfalse) {
    T30 = CHKREF(Yast_evalYenv_parent);
  } else {
    T30 = YPfalse;
  }
  T29 = fun_env_parent_5;
  T28 = CALL2(CHKREF(YPdefine_method),T30,T29);
  Yast_evalYenv_parent = T28;
  lit_13 = YPPsym((P)"env-parent-setter");
  lit_14 = YPPsym((P)"_z");
  T32 = YPsig(YPPlist(2,CHKREF(lit_14),CHKREF(lit_12)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_env_parent_setter_6 = YPmet(FUNCODEREF(fun_env_parent_setter_6),CHKREF(lit_13),T32,ENVNUL);
  T36 = BOUNDP(Yast_evalYenv_parent_setter);
  if (T36 != YPfalse) {
    T35 = CHKREF(Yast_evalYenv_parent_setter);
  } else {
    T35 = YPfalse;
  }
  T34 = fun_env_parent_setter_6;
  T33 = CALL2(CHKREF(YPdefine_method),T35,T34);
  Yast_evalYenv_parent_setter = T33;
  T37 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T37,ENVNUL);
  T38 = fun_7;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_evalYLloc_envG),CHKREF(Yast_evalYenv_parent),CHKREF(Yast_evalYenv_parent_setter),CHKREF(YLanyG),T38);
  lit_15 = YPPsym((P)"env-function");
  T39 = YPsig(YPPlist(1,CHKREF(lit_12)),YPPlist(1,CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_env_function_8 = YPmet(FUNCODEREF(fun_env_function_8),CHKREF(lit_15),T39,ENVNUL);
  T43 = BOUNDP(Yast_evalYenv_function);
  if (T43 != YPfalse) {
    T42 = CHKREF(Yast_evalYenv_function);
  } else {
    T42 = YPfalse;
  }
  T41 = fun_env_function_8;
  T40 = CALL2(CHKREF(YPdefine_method),T42,T41);
  Yast_evalYenv_function = T40;
  lit_16 = YPPsym((P)"env-function-setter");
  T44 = YPsig(YPPlist(2,CHKREF(lit_14),CHKREF(lit_12)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_env_function_setter_9 = YPmet(FUNCODEREF(fun_env_function_setter_9),CHKREF(lit_16),T44,ENVNUL);
  T48 = BOUNDP(Yast_evalYenv_function_setter);
  if (T48 != YPfalse) {
    T47 = CHKREF(Yast_evalYenv_function_setter);
  } else {
    T47 = YPfalse;
  }
  T46 = fun_env_function_setter_9;
  T45 = CALL2(CHKREF(YPdefine_method),T47,T46);
  Yast_evalYenv_function_setter = T45;
  T49 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T49,ENVNUL);
  T50 = fun_10;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_evalYLloc_envG),CHKREF(Yast_evalYenv_function),CHKREF(Yast_evalYenv_function_setter),CHKREF(YLanyG),T50);
  lit_17 = YPPsym((P)"env-names");
  T51 = YPsig(YPPlist(1,CHKREF(lit_12)),YPPlist(1,CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_env_names_11 = YPmet(FUNCODEREF(fun_env_names_11),CHKREF(lit_17),T51,ENVNUL);
  T55 = BOUNDP(Yast_evalYenv_names);
  if (T55 != YPfalse) {
    T54 = CHKREF(Yast_evalYenv_names);
  } else {
    T54 = YPfalse;
  }
  T53 = fun_env_names_11;
  T52 = CALL2(CHKREF(YPdefine_method),T54,T53);
  Yast_evalYenv_names = T52;
  lit_18 = YPPsym((P)"env-names-setter");
  T56 = YPsig(YPPlist(2,CHKREF(lit_14),CHKREF(lit_12)),YPPlist(2,CHKREF(YLlstG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_env_names_setter_12 = YPmet(FUNCODEREF(fun_env_names_setter_12),CHKREF(lit_18),T56,ENVNUL);
  T60 = BOUNDP(Yast_evalYenv_names_setter);
  if (T60 != YPfalse) {
    T59 = CHKREF(Yast_evalYenv_names_setter);
  } else {
    T59 = YPfalse;
  }
  T58 = fun_env_names_setter_12;
  T57 = CALL2(CHKREF(YPdefine_method),T59,T58);
  Yast_evalYenv_names_setter = T57;
  T61 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T61,ENVNUL);
  T62 = fun_13;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_evalYLloc_envG),CHKREF(Yast_evalYenv_names),CHKREF(Yast_evalYenv_names_setter),CHKREF(YLlstG),T62);
  lit_19 = YPPsym((P)"env-values");
  T63 = YPsig(YPPlist(1,CHKREF(lit_12)),YPPlist(1,CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_env_values_14 = YPmet(FUNCODEREF(fun_env_values_14),CHKREF(lit_19),T63,ENVNUL);
  T67 = BOUNDP(Yast_evalYenv_values);
  if (T67 != YPfalse) {
    T66 = CHKREF(Yast_evalYenv_values);
  } else {
    T66 = YPfalse;
  }
  T65 = fun_env_values_14;
  T64 = CALL2(CHKREF(YPdefine_method),T66,T65);
  Yast_evalYenv_values = T64;
  lit_20 = YPPsym((P)"env-values-setter");
  T68 = YPsig(YPPlist(2,CHKREF(lit_14),CHKREF(lit_12)),YPPlist(2,CHKREF(YLvecG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_env_values_setter_15 = YPmet(FUNCODEREF(fun_env_values_setter_15),CHKREF(lit_20),T68,ENVNUL);
  T72 = BOUNDP(Yast_evalYenv_values_setter);
  if (T72 != YPfalse) {
    T71 = CHKREF(Yast_evalYenv_values_setter);
  } else {
    T71 = YPfalse;
  }
  T70 = fun_env_values_setter_15;
  T69 = CALL2(CHKREF(YPdefine_method),T71,T70);
  Yast_evalYenv_values_setter = T69;
  T73 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T73,ENVNUL);
  T74 = fun_16;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_evalYLloc_envG),CHKREF(Yast_evalYenv_values),CHKREF(Yast_evalYenv_values_setter),CHKREF(YLvecG),T74);
  T76 = (P)YPpair(CHKREF(Yast_evalYLloc_envG),Ynil);
  T75 = CALL3(CHKREF(YPisa),T76,Ynil,Ynil);
  Yast_evalYDnul_loc_env = T75;
  lit_21 = YPPsym((P)"env-frame!");
  lit_22 = YPPsym((P)"args");
  lit_23 = YPPsym((P)"names");
  lit_24 = YPPsym((P)"function");
  lit_25 = YPPsym((P)"env");
  T77 = YPsig(YPPlist(4,CHKREF(lit_25),CHKREF(lit_24),CHKREF(lit_23),CHKREF(lit_22)),YPPlist(4,CHKREF(Yast_evalYLloc_envG),CHKREF(YLanyG),CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)4),CHKREF(Yast_evalYLloc_envG));
  fun_env_frameX_17 = YPmet(FUNCODEREF(fun_env_frameX_17),CHKREF(lit_21),T77,ENVNUL);
  T81 = BOUNDP(Yast_evalYenv_frameX);
  if (T81 != YPfalse) {
    T80 = CHKREF(Yast_evalYenv_frameX);
  } else {
    T80 = YPfalse;
  }
  T79 = fun_env_frameX_17;
  T78 = CALL2(CHKREF(YPdefine_method),T80,T79);
  Yast_evalYenv_frameX = T78;
  lit_26 = YPPsym((P)"env-local-value");
  lit_27 = YPPsym((P)"j");
  lit_28 = YPPsym((P)"i");
  T82 = YPsig(YPPlist(3,CHKREF(lit_25),CHKREF(lit_28),CHKREF(lit_27)),YPPlist(3,CHKREF(Yast_evalYLloc_envG),CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_env_local_value_18 = YPmet(FUNCODEREF(fun_env_local_value_18),CHKREF(lit_26),T82,ENVNUL);
  T86 = BOUNDP(Yast_evalYenv_local_value);
  if (T86 != YPfalse) {
    T85 = CHKREF(Yast_evalYenv_local_value);
  } else {
    T85 = YPfalse;
  }
  T84 = fun_env_local_value_18;
  T83 = CALL2(CHKREF(YPdefine_method),T85,T84);
  Yast_evalYenv_local_value = T83;
  lit_29 = YPPsym((P)"env-local-value-setter");
  T87 = YPsig(YPPlist(4,CHKREF(lit_9),CHKREF(lit_25),CHKREF(lit_28),CHKREF(lit_27)),YPPlist(4,CHKREF(YLanyG),CHKREF(Yast_evalYLloc_envG),CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_env_local_value_setter_19 = YPmet(FUNCODEREF(fun_env_local_value_setter_19),CHKREF(lit_29),T87,ENVNUL);
  T91 = BOUNDP(Yast_evalYenv_local_value_setter);
  if (T91 != YPfalse) {
    T90 = CHKREF(Yast_evalYenv_local_value_setter);
  } else {
    T90 = YPfalse;
  }
  T89 = fun_env_local_value_setter_19;
  T88 = CALL2(CHKREF(YPdefine_method),T90,T89);
  Yast_evalYenv_local_value_setter = T88;
  lit_30 = YPPsym((P)"env-binding-value");
  lit_31 = YPPsym((P)"name");
  lit_32 = YPPsym((P)"loop");
  T93 = YPsig(YPPlist(2,CHKREF(lit_23),CHKREF(lit_28)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_20 = YPmet(FUNCODEREF(fun_loop_20),CHKREF(lit_32),T93,ENVNUL);
  T92 = YPsig(YPPlist(2,CHKREF(lit_25),CHKREF(lit_31)),YPPlist(2,CHKREF(Yast_evalYLloc_envG),CHKREF(YLsymG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_env_binding_value_21 = YPmet(FUNCODEREF(fun_env_binding_value_21),CHKREF(lit_30),T92,ENVNUL);
  T97 = BOUNDP(Yast_evalYenv_binding_value);
  if (T97 != YPfalse) {
    T96 = CHKREF(Yast_evalYenv_binding_value);
  } else {
    T96 = YPfalse;
  }
  T95 = fun_env_binding_value_21;
  T94 = CALL2(CHKREF(YPdefine_method),T96,T95);
  Yast_evalYenv_binding_value = T94;
  lit_33 = YPPsym((P)"env-binding-value-setter");
  T99 = YPsig(YPPlist(2,CHKREF(lit_23),CHKREF(lit_28)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_22 = YPmet(FUNCODEREF(fun_loop_22),CHKREF(lit_32),T99,ENVNUL);
  T98 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_25),CHKREF(lit_31)),YPPlist(3,CHKREF(YLanyG),CHKREF(Yast_evalYLloc_envG),CHKREF(YLsymG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_env_binding_value_setter_23 = YPmet(FUNCODEREF(fun_env_binding_value_setter_23),CHKREF(lit_33),T98,ENVNUL);
  T103 = BOUNDP(Yast_evalYenv_binding_value_setter);
  if (T103 != YPfalse) {
    T102 = CHKREF(Yast_evalYenv_binding_value_setter);
  } else {
    T102 = YPfalse;
  }
  T101 = fun_env_binding_value_setter_23;
  T100 = CALL2(CHKREF(YPdefine_method),T102,T101);
  Yast_evalYenv_binding_value_setter = T100;
  lit_34 = YPPsym((P)"ast-evaluate");
  lit_35 = YPPsym((P)"e");
  T104 = YPsig(YPPlist(1,CHKREF(lit_35)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_ast_evaluate_24 = YPmet(FUNCODEREF(fun_ast_evaluate_24),CHKREF(lit_34),T104,ENVNUL);
  T108 = BOUNDP(YastYast_evaluate);
  if (T108 != YPfalse) {
    T107 = CHKREF(YastYast_evaluate);
  } else {
    T107 = YPfalse;
  }
  T106 = fun_ast_evaluate_24;
  T105 = CALL2(CHKREF(YPdefine_method),T107,T106);
  YastYast_evaluate = T105;
  lit_36 = YPPsym((P)"ast-eval");
  T110 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_25)),YPPlist(2,CHKREF(YastYLprogramG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  T109 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),CHKREF(lit_36),T110,Ynil,YPfalse);
  Yast_evalYast_eval = T109;
  T111 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_25)),YPPlist(2,CHKREF(YastYLconstantG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_25 = YPmet(FUNCODEREF(fun_ast_eval_25),CHKREF(lit_36),T111,ENVNUL);
  T115 = BOUNDP(Yast_evalYast_eval);
  if (T115 != YPfalse) {
    T114 = CHKREF(Yast_evalYast_eval);
  } else {
    T114 = YPfalse;
  }
  T113 = fun_ast_eval_25;
  T112 = CALL2(CHKREF(YPdefine_method),T114,T113);
  Yast_evalYast_eval = T112;
  T116 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_25)),YPPlist(2,CHKREF(YastYLraw_constantG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_26 = YPmet(FUNCODEREF(fun_ast_eval_26),CHKREF(lit_36),T116,ENVNUL);
  T120 = BOUNDP(Yast_evalYast_eval);
  if (T120 != YPfalse) {
    T119 = CHKREF(Yast_evalYast_eval);
  } else {
    T119 = YPfalse;
  }
  T118 = fun_ast_eval_26;
  T117 = CALL2(CHKREF(YPdefine_method),T119,T118);
  Yast_evalYast_eval = T117;
  lit_37 = YPPsym((P)"ee");
  T121 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_37)),YPPlist(2,CHKREF(YastYLcompile_timeG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_27 = YPmet(FUNCODEREF(fun_ast_eval_27),CHKREF(lit_36),T121,ENVNUL);
  T125 = BOUNDP(Yast_evalYast_eval);
  if (T125 != YPfalse) {
    T124 = CHKREF(Yast_evalYast_eval);
  } else {
    T124 = YPfalse;
  }
  T123 = fun_ast_eval_27;
  T122 = CALL2(CHKREF(YPdefine_method),T124,T123);
  Yast_evalYast_eval = T122;
  lit_38 = YPPsym((P)"ast-eval-specs");
  lit_39 = YPPsym((P)"nary?");
  lit_40 = YPPsym((P)"specs");
  lit_41 = YPPsym((P)"res");
  T127 = YPsig(YPPlist(3,CHKREF(lit_41),CHKREF(lit_40),CHKREF(lit_28)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_loop_28 = YPmet(FUNCODEREF(fun_loop_28),CHKREF(lit_32),T127,ENVNUL);
  T126 = YPsig(YPPlist(3,CHKREF(lit_40),CHKREF(lit_39),CHKREF(lit_25)),YPPlist(3,CHKREF(YLlstG),CHKREF(YLlogG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_ast_eval_specs_29 = YPmet(FUNCODEREF(fun_ast_eval_specs_29),CHKREF(lit_38),T126,ENVNUL);
  T131 = BOUNDP(Yast_evalYast_eval_specs);
  if (T131 != YPfalse) {
    T130 = CHKREF(Yast_evalYast_eval_specs);
  } else {
    T130 = YPfalse;
  }
  T129 = fun_ast_eval_specs_29;
  T128 = CALL2(CHKREF(YPdefine_method),T130,T129);
  Yast_evalYast_eval_specs = T128;
  T132 = CALL2(CHKREF(YruntimeYfab),CHKREF(YruntimeYLbufG),YPint((P)0));
  Yast_evalYTstackT = T132;
  lit_42 = YPPsym((P)"exp");
  lit_43 = YPPsym((P)"return");
  lit_44 = YPPsym((P)"frame");
  lit_45 = YPPsym((P)"nms");
  lit_46 = YPPsym((P)"lst");
  lit_47 = YPPsym((P)"%next-methods");
  lit_48 = YPPsym((P)"quote");
  lit_49 = YPPsym((P)"cat2");
  lit_50 = YPPsym((P)"let");
  lit_51 = YPPsym((P)"fun");
  lit_52 = YPsb((P)"Match Pattern Failure");
  lit_53 = YPPsym((P)"ifun");
  lit_54 = YPPsym((P)"x-1267");
  lit_55 = YPPsym((P)"msg");
  T135 = YPsig(YPPlist(2,CHKREF(lit_55),CHKREF(lit_22)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1267_30 = YPmet(FUNCODEREF(fun_x_1267_30),CHKREF(lit_54),T135,ENVNUL);
  T134 = YPsig(YPPlist(1,CHKREF(lit_43)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T134,ENVNUL);
  T133 = YPsig(YPPlist(1,CHKREF(lit_42)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T133,ENVNUL);
  T136 = fun_32;
  YPmacro(YPPsym((P)"ast-eval"),YPPsym((P)"ifun"),T136);
  lit_56 = YPPsym((P)"as-fun-name");
  T137 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_as_fun_name_33 = YPmet(FUNCODEREF(fun_as_fun_name_33),CHKREF(lit_56),T137,ENVNUL);
  T141 = BOUNDP(Yast_evalYas_fun_name);
  if (T141 != YPfalse) {
    T140 = CHKREF(Yast_evalYas_fun_name);
  } else {
    T140 = YPfalse;
  }
  T139 = fun_as_fun_name_33;
  T138 = CALL2(CHKREF(YPdefine_method),T140,T139);
  Yast_evalYas_fun_name = T138;
  T142 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YastYLast_functionG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_as_fun_name_34 = YPmet(FUNCODEREF(fun_as_fun_name_34),CHKREF(lit_56),T142,ENVNUL);
  T146 = BOUNDP(Yast_evalYas_fun_name);
  if (T146 != YPfalse) {
    T145 = CHKREF(Yast_evalYas_fun_name);
  } else {
    T145 = YPfalse;
  }
  T144 = fun_as_fun_name_34;
  T143 = CALL2(CHKREF(YPdefine_method),T145,T144);
  Yast_evalYas_fun_name = T143;
  T147 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YastYLmodule_bindingG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_as_fun_name_35 = YPmet(FUNCODEREF(fun_as_fun_name_35),CHKREF(lit_56),T147,ENVNUL);
  T151 = BOUNDP(Yast_evalYas_fun_name);
  if (T151 != YPfalse) {
    T150 = CHKREF(Yast_evalYas_fun_name);
  } else {
    T150 = YPfalse;
  }
  T149 = fun_as_fun_name_35;
  T148 = CALL2(CHKREF(YPdefine_method),T150,T149);
  Yast_evalYas_fun_name = T148;
  T152 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YastYLconstantG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_as_fun_name_36 = YPmet(FUNCODEREF(fun_as_fun_name_36),CHKREF(lit_56),T152,ENVNUL);
  T156 = BOUNDP(Yast_evalYas_fun_name);
  if (T156 != YPfalse) {
    T155 = CHKREF(Yast_evalYas_fun_name);
  } else {
    T155 = YPfalse;
  }
  T154 = fun_as_fun_name_36;
  T153 = CALL2(CHKREF(YPdefine_method),T155,T154);
  Yast_evalYas_fun_name = T153;
  T157 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLsymG)),YPfalse,YPint((P)1),CHKREF(YLsymG));
  fun_as_fun_name_37 = YPmet(FUNCODEREF(fun_as_fun_name_37),CHKREF(lit_56),T157,ENVNUL);
  T161 = BOUNDP(Yast_evalYas_fun_name);
  if (T161 != YPfalse) {
    T160 = CHKREF(Yast_evalYas_fun_name);
  } else {
    T160 = YPfalse;
  }
  T159 = fun_as_fun_name_37;
  T158 = CALL2(CHKREF(YPdefine_method),T160,T159);
  Yast_evalYas_fun_name = T158;
  T162 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_as_fun_name_38 = YPmet(FUNCODEREF(fun_as_fun_name_38),CHKREF(lit_56),T162,ENVNUL);
  T166 = BOUNDP(Yast_evalYas_fun_name);
  if (T166 != YPfalse) {
    T165 = CHKREF(Yast_evalYas_fun_name);
  } else {
    T165 = YPfalse;
  }
  T164 = fun_as_fun_name_38;
  T163 = CALL2(CHKREF(YPdefine_method),T165,T164);
  Yast_evalYas_fun_name = T163;
  lit_57 = YPPsym((P)"export-proto-method");
  lit_58 = YPPsym((P)"body");
  lit_59 = YPPsym((P)"f");
  lit_60 = YPPsym((P)"a9");
  lit_61 = YPPsym((P)"a8");
  lit_62 = YPPsym((P)"a7");
  lit_63 = YPPsym((P)"a6");
  lit_64 = YPPsym((P)"a5");
  lit_65 = YPPsym((P)"a4");
  lit_66 = YPPsym((P)"a3");
  lit_67 = YPPsym((P)"a2");
  lit_68 = YPPsym((P)"a1");
  T177 = YPsig(YPPlist(9,CHKREF(lit_68),CHKREF(lit_67),CHKREF(lit_66),CHKREF(lit_65),CHKREF(lit_64),CHKREF(lit_63),CHKREF(lit_62),CHKREF(lit_61),CHKREF(lit_60)),YPPlist(9,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)9),CHKREF(YLanyG));
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T177,ENVNUL);
  T176 = YPsig(YPPlist(8,CHKREF(lit_68),CHKREF(lit_67),CHKREF(lit_66),CHKREF(lit_65),CHKREF(lit_64),CHKREF(lit_63),CHKREF(lit_62),CHKREF(lit_61)),YPPlist(8,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)8),CHKREF(YLanyG));
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T176,ENVNUL);
  T175 = YPsig(YPPlist(7,CHKREF(lit_68),CHKREF(lit_67),CHKREF(lit_66),CHKREF(lit_65),CHKREF(lit_64),CHKREF(lit_63),CHKREF(lit_62)),YPPlist(7,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)7),CHKREF(YLanyG));
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T175,ENVNUL);
  T174 = YPsig(YPPlist(6,CHKREF(lit_68),CHKREF(lit_67),CHKREF(lit_66),CHKREF(lit_65),CHKREF(lit_64),CHKREF(lit_63)),YPPlist(6,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)6),CHKREF(YLanyG));
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T174,ENVNUL);
  T173 = YPsig(YPPlist(5,CHKREF(lit_68),CHKREF(lit_67),CHKREF(lit_66),CHKREF(lit_65),CHKREF(lit_64)),YPPlist(5,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)5),CHKREF(YLanyG));
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T173,ENVNUL);
  T172 = YPsig(YPPlist(4,CHKREF(lit_68),CHKREF(lit_67),CHKREF(lit_66),CHKREF(lit_65)),YPPlist(4,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T172,ENVNUL);
  T171 = YPsig(YPPlist(3,CHKREF(lit_68),CHKREF(lit_67),CHKREF(lit_66)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T171,ENVNUL);
  T170 = YPsig(YPPlist(2,CHKREF(lit_68),CHKREF(lit_67)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_46 = YPmet(FUNCODEREF(fun_46),YPfalse,T170,ENVNUL);
  T169 = YPsig(YPPlist(1,CHKREF(lit_68)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T169,ENVNUL);
  T168 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T168,ENVNUL);
  T167 = YPsig(YPPlist(7,CHKREF(lit_59),CHKREF(lit_23),CHKREF(lit_40),CHKREF(lit_39),CHKREF(lit_4),CHKREF(lit_58),CHKREF(lit_25)),YPPlist(7,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)7),CHKREF(YLanyG));
  fun_export_proto_method_49 = YPmet(FUNCODEREF(fun_export_proto_method_49),CHKREF(lit_57),T167,ENVNUL);
  T181 = BOUNDP(Yast_evalYexport_proto_method);
  if (T181 != YPfalse) {
    T180 = CHKREF(Yast_evalYexport_proto_method);
  } else {
    T180 = YPfalse;
  }
  T179 = fun_export_proto_method_49;
  T178 = CALL2(CHKREF(YPdefine_method),T180,T179);
  Yast_evalYexport_proto_method = T178;
  T183 = YPsig(YPPlist(1,CHKREF(lit_25)),YPPlist(1,CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T183,ENVNUL);
  T182 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_25)),YPPlist(2,CHKREF(YastYLast_methodG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_51 = YPmet(FUNCODEREF(fun_ast_eval_51),CHKREF(lit_36),T182,ENVNUL);
  T187 = BOUNDP(Yast_evalYast_eval);
  if (T187 != YPfalse) {
    T186 = CHKREF(Yast_evalYast_eval);
  } else {
    T186 = YPfalse;
  }
  T185 = fun_ast_eval_51;
  T184 = CALL2(CHKREF(YPdefine_method),T186,T185);
  Yast_evalYast_eval = T184;
  T188 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_25)),YPPlist(2,CHKREF(YastYLast_genericG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_52 = YPmet(FUNCODEREF(fun_ast_eval_52),CHKREF(lit_36),T188,ENVNUL);
  T192 = BOUNDP(Yast_evalYast_eval);
  if (T192 != YPfalse) {
    T191 = CHKREF(Yast_evalYast_eval);
  } else {
    T191 = YPfalse;
  }
  T190 = fun_ast_eval_52;
  T189 = CALL2(CHKREF(YPdefine_method),T191,T190);
  Yast_evalYast_eval = T189;
  lit_69 = YPPsym((P)"env-local-reference-value");
  lit_70 = YPPsym((P)"ref");
  T193 = YPsig(YPPlist(2,CHKREF(lit_25),CHKREF(lit_70)),YPPlist(2,CHKREF(Yast_evalYLloc_envG),CHKREF(YastYLlocal_referenceG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_env_local_reference_value_53 = YPmet(FUNCODEREF(fun_env_local_reference_value_53),CHKREF(lit_69),T193,ENVNUL);
  T197 = BOUNDP(Yast_evalYenv_local_reference_value);
  if (T197 != YPfalse) {
    T196 = CHKREF(Yast_evalYenv_local_reference_value);
  } else {
    T196 = YPfalse;
  }
  T195 = fun_env_local_reference_value_53;
  T194 = CALL2(CHKREF(YPdefine_method),T196,T195);
  Yast_evalYenv_local_reference_value = T194;
  lit_71 = YPPsym((P)"env-local-reference-value-setter");
  lit_72 = YPPsym((P)"val");
  T198 = YPsig(YPPlist(3,CHKREF(lit_72),CHKREF(lit_25),CHKREF(lit_70)),YPPlist(3,CHKREF(YLanyG),CHKREF(Yast_evalYLloc_envG),CHKREF(YastYLlocal_referenceG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_env_local_reference_value_setter_54 = YPmet(FUNCODEREF(fun_env_local_reference_value_setter_54),CHKREF(lit_71),T198,ENVNUL);
  T202 = BOUNDP(Yast_evalYenv_local_reference_value_setter);
  if (T202 != YPfalse) {
    T201 = CHKREF(Yast_evalYenv_local_reference_value_setter);
  } else {
    T201 = YPfalse;
  }
  T200 = fun_env_local_reference_value_setter_54;
  T199 = CALL2(CHKREF(YPdefine_method),T201,T200);
  Yast_evalYenv_local_reference_value_setter = T199;
  T203 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_25)),YPPlist(2,CHKREF(YastYLlocal_referenceG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_55 = YPmet(FUNCODEREF(fun_ast_eval_55),CHKREF(lit_36),T203,ENVNUL);
  T207 = BOUNDP(Yast_evalYast_eval);
  if (T207 != YPfalse) {
    T206 = CHKREF(Yast_evalYast_eval);
  } else {
    T206 = YPfalse;
  }
  T205 = fun_ast_eval_55;
  T204 = CALL2(CHKREF(YPdefine_method),T206,T205);
  Yast_evalYast_eval = T204;
  T208 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_25)),YPPlist(2,CHKREF(YastYLglobal_referenceG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_56 = YPmet(FUNCODEREF(fun_ast_eval_56),CHKREF(lit_36),T208,ENVNUL);
  T212 = BOUNDP(Yast_evalYast_eval);
  if (T212 != YPfalse) {
    T211 = CHKREF(Yast_evalYast_eval);
  } else {
    T211 = YPfalse;
  }
  T210 = fun_ast_eval_56;
  T209 = CALL2(CHKREF(YPdefine_method),T211,T210);
  Yast_evalYast_eval = T209;
  T213 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_25)),YPPlist(2,CHKREF(YastYLruntime_referenceG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_57 = YPmet(FUNCODEREF(fun_ast_eval_57),CHKREF(lit_36),T213,ENVNUL);
  T217 = BOUNDP(Yast_evalYast_eval);
  if (T217 != YPfalse) {
    T216 = CHKREF(Yast_evalYast_eval);
  } else {
    T216 = YPfalse;
  }
  T215 = fun_ast_eval_57;
  T214 = CALL2(CHKREF(YPdefine_method),T216,T215);
  Yast_evalYast_eval = T214;
  T218 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_25)),YPPlist(2,CHKREF(YastYLboundQG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_58 = YPmet(FUNCODEREF(fun_ast_eval_58),CHKREF(lit_36),T218,ENVNUL);
  T222 = BOUNDP(Yast_evalYast_eval);
  if (T222 != YPfalse) {
    T221 = CHKREF(Yast_evalYast_eval);
  } else {
    T221 = YPfalse;
  }
  T220 = fun_ast_eval_58;
  T219 = CALL2(CHKREF(YPdefine_method),T221,T220);
  Yast_evalYast_eval = T219;
  lit_73 = YPPsym((P)"ast-eval-bound?");
  lit_74 = YPPsym((P)"binding");
  lit_75 = YPPsym((P)"global");
  T223 = YPsig(YPPlist(3,CHKREF(lit_35),CHKREF(lit_74),CHKREF(lit_25)),YPPlist(3,CHKREF(YastYLboundQG),CHKREF(YastYLmodule_bindingG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_ast_eval_boundQ_59 = YPmet(FUNCODEREF(fun_ast_eval_boundQ_59),CHKREF(lit_73),T223,ENVNUL);
  T227 = BOUNDP(Yast_evalYast_eval_boundQ);
  if (T227 != YPfalse) {
    T226 = CHKREF(Yast_evalYast_eval_boundQ);
  } else {
    T226 = YPfalse;
  }
  T225 = fun_ast_eval_boundQ_59;
  T224 = CALL2(CHKREF(YPdefine_method),T226,T225);
  Yast_evalYast_eval_boundQ = T224;
  T228 = YPsig(YPPlist(3,CHKREF(lit_35),CHKREF(lit_74),CHKREF(lit_25)),YPPlist(3,CHKREF(YastYLboundQG),CHKREF(YastYLlocal_bindingG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_ast_eval_boundQ_60 = YPmet(FUNCODEREF(fun_ast_eval_boundQ_60),CHKREF(lit_73),T228,ENVNUL);
  T232 = BOUNDP(Yast_evalYast_eval_boundQ);
  if (T232 != YPfalse) {
    T231 = CHKREF(Yast_evalYast_eval_boundQ);
  } else {
    T231 = YPfalse;
  }
  T230 = fun_ast_eval_boundQ_60;
  T229 = CALL2(CHKREF(YPdefine_method),T231,T230);
  Yast_evalYast_eval_boundQ = T229;
  T233 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_25)),YPPlist(2,CHKREF(YastYLglobal_assignmentG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_61 = YPmet(FUNCODEREF(fun_ast_eval_61),CHKREF(lit_36),T233,ENVNUL);
  T237 = BOUNDP(Yast_evalYast_eval);
  if (T237 != YPfalse) {
    T236 = CHKREF(Yast_evalYast_eval);
  } else {
    T236 = YPfalse;
  }
  T235 = fun_ast_eval_61;
  T234 = CALL2(CHKREF(YPdefine_method),T236,T235);
  Yast_evalYast_eval = T234;
  T238 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_25)),YPPlist(2,CHKREF(YastYLast_macro_definitionG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_62 = YPmet(FUNCODEREF(fun_ast_eval_62),CHKREF(lit_36),T238,ENVNUL);
  T242 = BOUNDP(Yast_evalYast_eval);
  if (T242 != YPfalse) {
    T241 = CHKREF(Yast_evalYast_eval);
  } else {
    T241 = YPfalse;
  }
  T240 = fun_ast_eval_62;
  T239 = CALL2(CHKREF(YPdefine_method),T241,T240);
  Yast_evalYast_eval = T239;
  T243 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_25)),YPPlist(2,CHKREF(YastYLruntime_assignmentG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_63 = YPmet(FUNCODEREF(fun_ast_eval_63),CHKREF(lit_36),T243,ENVNUL);
  T247 = BOUNDP(Yast_evalYast_eval);
  if (T247 != YPfalse) {
    T246 = CHKREF(Yast_evalYast_eval);
  } else {
    T246 = YPfalse;
  }
  T245 = fun_ast_eval_63;
  T244 = CALL2(CHKREF(YPdefine_method),T246,T245);
  Yast_evalYast_eval = T244;
  T248 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_25)),YPPlist(2,CHKREF(YastYLlocal_assignmentG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_64 = YPmet(FUNCODEREF(fun_ast_eval_64),CHKREF(lit_36),T248,ENVNUL);
  T252 = BOUNDP(Yast_evalYast_eval);
  if (T252 != YPfalse) {
    T251 = CHKREF(Yast_evalYast_eval);
  } else {
    T251 = YPfalse;
  }
  T250 = fun_ast_eval_64;
  T249 = CALL2(CHKREF(YPdefine_method),T251,T250);
  Yast_evalYast_eval = T249;
  lit_76 = YPPsym((P)"env-define-binding!");
  lit_77 = YPsb((P)"Defining invalid binding kind %=");
  lit_78 = YPPsym((P)"runtime");
  T253 = YPsig(YPPlist(2,CHKREF(lit_1),CHKREF(lit_9)),YPPlist(2,CHKREF(YastYLmodule_bindingG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_env_define_bindingX_65 = YPmet(FUNCODEREF(fun_env_define_bindingX_65),CHKREF(lit_76),T253,ENVNUL);
  T257 = BOUNDP(Yast_evalYenv_define_bindingX);
  if (T257 != YPfalse) {
    T256 = CHKREF(Yast_evalYenv_define_bindingX);
  } else {
    T256 = YPfalse;
  }
  T255 = fun_env_define_bindingX_65;
  T254 = CALL2(CHKREF(YPdefine_method),T256,T255);
  Yast_evalYenv_define_bindingX = T254;
  T258 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_25)),YPPlist(2,CHKREF(YastYLdefinitionG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_66 = YPmet(FUNCODEREF(fun_ast_eval_66),CHKREF(lit_36),T258,ENVNUL);
  T262 = BOUNDP(Yast_evalYast_eval);
  if (T262 != YPfalse) {
    T261 = CHKREF(Yast_evalYast_eval);
  } else {
    T261 = YPfalse;
  }
  T260 = fun_ast_eval_66;
  T259 = CALL2(CHKREF(YPdefine_method),T261,T260);
  Yast_evalYast_eval = T259;
  T263 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_25)),YPPlist(2,CHKREF(YastYLalternativeG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_67 = YPmet(FUNCODEREF(fun_ast_eval_67),CHKREF(lit_36),T263,ENVNUL);
  T267 = BOUNDP(Yast_evalYast_eval);
  if (T267 != YPfalse) {
    T266 = CHKREF(Yast_evalYast_eval);
  } else {
    T266 = YPfalse;
  }
  T265 = fun_ast_eval_67;
  T264 = CALL2(CHKREF(YPdefine_method),T266,T265);
  Yast_evalYast_eval = T264;
  lit_79 = YPPsym((P)"eval");
  T269 = YPsig(YPPlist(1,CHKREF(lit_35)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_eval_68 = YPmet(FUNCODEREF(fun_eval_68),CHKREF(lit_79),T269,ENVNUL);
  T268 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_25)),YPPlist(2,CHKREF(YastYLsequentialG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_69 = YPmet(FUNCODEREF(fun_ast_eval_69),CHKREF(lit_36),T268,ENVNUL);
  T273 = BOUNDP(Yast_evalYast_eval);
  if (T273 != YPfalse) {
    T272 = CHKREF(Yast_evalYast_eval);
  } else {
    T272 = YPfalse;
  }
  T271 = fun_ast_eval_69;
  T270 = CALL2(CHKREF(YPdefine_method),T272,T271);
  Yast_evalYast_eval = T270;
  T275 = YPsig(YPPlist(2,CHKREF(lit_41),CHKREF(lit_22)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_eval_70 = YPmet(FUNCODEREF(fun_eval_70),CHKREF(lit_79),T275,ENVNUL);
  T274 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_25)),YPPlist(2,CHKREF(YastYLargumentsG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_71 = YPmet(FUNCODEREF(fun_ast_eval_71),CHKREF(lit_36),T274,ENVNUL);
  T279 = BOUNDP(Yast_evalYast_eval);
  if (T279 != YPfalse) {
    T278 = CHKREF(Yast_evalYast_eval);
  } else {
    T278 = YPfalse;
  }
  T277 = fun_ast_eval_71;
  T276 = CALL2(CHKREF(YPdefine_method),T278,T277);
  Yast_evalYast_eval = T276;
  T280 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_25)),YPPlist(2,CHKREF(YastYLregular_applicationG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_72 = YPmet(FUNCODEREF(fun_ast_eval_72),CHKREF(lit_36),T280,ENVNUL);
  T284 = BOUNDP(Yast_evalYast_eval);
  if (T284 != YPfalse) {
    T283 = CHKREF(Yast_evalYast_eval);
  } else {
    T283 = YPfalse;
  }
  T282 = fun_ast_eval_72;
  T281 = CALL2(CHKREF(YPdefine_method),T283,T282);
  Yast_evalYast_eval = T281;
  T287 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_25)),YPPlist(2,CHKREF(YastYLpredefined_applicationG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  T286 = fun_ast_eval_73 = YPmet(FUNCODEREF(fun_ast_eval_73),CHKREF(lit_36),T287,ENVNUL);
  T292 = BOUNDP(Yast_evalYast_eval);
  if (T292 != YPfalse) {
    T291 = CHKREF(Yast_evalYast_eval);
  } else {
    T291 = YPfalse;
  }
  T290 = fun_ast_eval_73;
  T289 = CALL2(CHKREF(YPdefine_method),T291,T290);
  T288 = Yast_evalYast_eval = T289;
  T285 = T288;
  return T285;
}

P Yast_evalY___main_1___() {
  P T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
loop:
  T0 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_25)),YPPlist(2,CHKREF(YastYLfix_letG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_74 = YPmet(FUNCODEREF(fun_ast_eval_74),CHKREF(lit_36),T0,ENVNUL);
  T4 = BOUNDP(Yast_evalYast_eval);
  if (T4 != YPfalse) {
    T3 = CHKREF(Yast_evalYast_eval);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_ast_eval_74;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  Yast_evalYast_eval = T1;
  T6 = YPsig(YPPlist(2,CHKREF(lit_31),CHKREF(lit_4)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T6,ENVNUL);
  T5 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_25)),YPPlist(2,CHKREF(YastYLlocalsG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_76 = YPmet(FUNCODEREF(fun_ast_eval_76),CHKREF(lit_36),T5,ENVNUL);
  T10 = BOUNDP(Yast_evalYast_eval);
  if (T10 != YPfalse) {
    T9 = CHKREF(Yast_evalYast_eval);
  } else {
    T9 = YPfalse;
  }
  T8 = fun_ast_eval_76;
  T7 = CALL2(CHKREF(YPdefine_method),T9,T8);
  Yast_evalYast_eval = T7;
  T13 = YPsig(YPPlist(1,CHKREF(lit_25)),YPPlist(1,CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_77 = YPmet(FUNCODEREF(fun_77),YPfalse,T13,ENVNUL);
  T12 = YPsig(YPPlist(1,CHKREF(lit_43)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_78 = YPmet(FUNCODEREF(fun_78),YPfalse,T12,ENVNUL);
  T11 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_25)),YPPlist(2,CHKREF(YastYLbind_exitG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_79 = YPmet(FUNCODEREF(fun_ast_eval_79),CHKREF(lit_36),T11,ENVNUL);
  T17 = BOUNDP(Yast_evalYast_eval);
  if (T17 != YPfalse) {
    T16 = CHKREF(Yast_evalYast_eval);
  } else {
    T16 = YPfalse;
  }
  T15 = fun_ast_eval_79;
  T14 = CALL2(CHKREF(YPdefine_method),T16,T15);
  Yast_evalYast_eval = T14;
  T20 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T20,ENVNUL);
  T19 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T19,ENVNUL);
  T18 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_25)),YPPlist(2,CHKREF(YastYLunwind_protectG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_82 = YPmet(FUNCODEREF(fun_ast_eval_82),CHKREF(lit_36),T18,ENVNUL);
  T24 = BOUNDP(Yast_evalYast_eval);
  if (T24 != YPfalse) {
    T23 = CHKREF(Yast_evalYast_eval);
  } else {
    T23 = YPfalse;
  }
  T22 = fun_ast_eval_82;
  T21 = CALL2(CHKREF(YPdefine_method),T23,T22);
  Yast_evalYast_eval = T21;
  T25 = YPsig(YPPlist(2,CHKREF(lit_35),CHKREF(lit_25)),YPPlist(2,CHKREF(YastYLmonitorG),CHKREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_ast_eval_83 = YPmet(FUNCODEREF(fun_ast_eval_83),CHKREF(lit_36),T25,ENVNUL);
  T29 = BOUNDP(Yast_evalYast_eval);
  if (T29 != YPfalse) {
    T28 = CHKREF(Yast_evalYast_eval);
  } else {
    T28 = YPfalse;
  }
  T27 = fun_ast_eval_83;
  T26 = CALL2(CHKREF(YPdefine_method),T28,T27);
  Yast_evalYast_eval = T26;
  lit_80 = YPPsym((P)"init-environment-for-eval");
  lit_81 = YPPsym((P)"%pair");
  lit_82 = YPPsym((P)"predefined");
  T30 = YPsig(YPPlist(1,CHKREF(lit_25)),YPPlist(1,CHKREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YastYinit_environment_for_eval = YPmet(FUNCODEREF(YastYinit_environment_for_eval),CHKREF(lit_80),T30,ENVNUL);
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
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"add", &module_info_runtime, "add"},
  {"quote", &module_info_boot, "quote"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"binding-global-box", &module_info_ast, "binding-global-box"},
  {"%i?", &module_info_boot, "%i?"},
  {"%fb", &module_info_boot, "%fb"},
  {"elt", &module_info_runtime, "elt"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"<sequential>", &module_info_ast, "<sequential>"},
  {"<unwind-protect>", &module_info_ast, "<unwind-protect>"},
  {"<num>", &module_info_boot, "<num>"},
  {"from-below-by", &module_info_runtime, "from-below-by"},
  {"<fab-list>", &module_info_ast, "<fab-list>"},
  {"fun", &module_info_boot, "fun"},
  {"binding-dynamic-extent?", &module_info_ast, "binding-dynamic-extent?"},
  {"ds", &module_info_boot, "ds"},
  {"elt-setter", &module_info_runtime, "elt-setter"},
  {"identity", &module_info_runtime, "identity"},
  {"from", &module_info_runtime, "from"},
  {"binding-type-setter", &module_info_ast, "binding-type-setter"},
  {"logbit?", &module_info_runtime, "logbit?"},
  {"fix-let-bindings", &module_info_ast, "fix-let-bindings"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"%bb", &module_info_boot, "%bb"},
  {"%f+", &module_info_boot, "%f+"},
  {"char->ascii", &module_info_runtime, "char->ascii"},
  {"<module-binding>", &module_info_ast, "<module-binding>"},
  {"assignment-binding", &module_info_ast, "assignment-binding"},
  {"function-nary?", &module_info_ast, "function-nary?"},
  {"bound?", &module_info_boot, "bound?"},
  {"nul", &module_info_boot, "nul"},
  {"~==", &module_info_runtime, "~=="},
  {"<raw-constant>", &module_info_ast, "<raw-constant>"},
  {"keys", &module_info_runtime, "keys"},
  {"collected", &module_info_macros, "collected"},
  {"%su", &module_info_boot, "%su"},
  {"%i&", &module_info_boot, "%i&"},
  {"set-module-environments", &module_info_ast, "set-module-environments"},
  {"monitor-info", &module_info_ast, "monitor-info"},
  {"even?", &module_info_runtime, "even?"},
  {"str", &module_info_runtime, "str"},
  {"signature-bindings-setter", &module_info_ast, "signature-bindings-setter"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"call-with-string-input-port", &module_info_runtime, "call-with-string-input-port"},
  {"fix-let-arguments", &module_info_ast, "fix-let-arguments"},
  {"%cu", &module_info_boot, "%cu"},
  {"var-type", &module_info_macros, "var-type"},
  {"binding-locative", &module_info_ast, "binding-locative"},
  {"%c<", &module_info_boot, "%c<"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"popf", &module_info_macros, "popf"},
  {"describe-handler", &module_info_runtime, "describe-handler"},
  {"len", &module_info_runtime, "len"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"do-module-loader-modules", &module_info_ast, "do-module-loader-modules"},
  {"$proto-boot-module-name", &module_info_ast, "$proto-boot-module-name"},
  {"%i+", &module_info_boot, "%i+"},
  {"%snul", &module_info_boot, "%snul"},
  {"build-condition-for-handler-interactively", &module_info_runtime, "build-condition-for-handler-interactively"},
  {"next-method", &module_info_macros, "next-method"},
  {"<union>", &module_info_boot, "<union>"},
  {"from-to", &module_info_runtime, "from-to"},
  {"alternative-alternant", &module_info_ast, "alternative-alternant"},
  {"slot", &module_info_boot, "slot"},
  {"format-to-string", &module_info_runtime, "format-to-string"},
  {"<ast-primitive>", &module_info_ast, "<ast-primitive>"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"free-implemented-foreign-bindings", &module_info_ast, "free-implemented-foreign-bindings"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"char-ready?", &module_info_runtime, "char-ready?"},
  {"signature-names-setter", &module_info_ast, "signature-names-setter"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"str-to-num", &module_info_runtime, "str-to-num"},
  {"in", &module_info_runtime, "in"},
  {"to-str", &module_info_runtime, "to-str"},
  {"as-lowercase", &module_info_runtime, "as-lowercase"},
  {"loc", &module_info_boot, "loc"},
  {"fix-let-bindings-setter", &module_info_ast, "fix-let-bindings-setter"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"<log>", &module_info_boot, "<log>"},
  {"tup", &module_info_macros, "tup"},
  {"binding-info", &module_info_ast, "binding-info"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"current-gc-state", &module_info_runtime, "current-gc-state"},
  {"application-binding", &module_info_ast, "application-binding"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"list", &module_info_runtime, "list"},
  {"tail", &module_info_boot, "tail"},
  {"any?", &module_info_runtime, "any?"},
  {"<program>", &module_info_ast, "<program>"},
  {"<ast-method>", &module_info_ast, "<ast-method>"},
  {"all?", &module_info_runtime, "all?"},
  {"<range>", &module_info_runtime, "<range>"},
  {"%im", &module_info_boot, "%im"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"binding-kind", &module_info_ast, "binding-kind"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"<ast-generic>", &module_info_ast, "<ast-generic>"},
  {"%selt", &module_info_boot, "%selt"},
  {"function-bindings", &module_info_ast, "function-bindings"},
  {"%f=", &module_info_boot, "%f="},
  {"fill", &module_info_runtime, "fill"},
  {"close-output-port", &module_info_runtime, "close-output-port"},
  {"%sb", &module_info_boot, "%sb"},
  {"<ast-macro-definition>", &module_info_ast, "<ast-macro-definition>"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"==", &module_info_macros, "=="},
  {"1st", &module_info_runtime, "1st"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"module-name", &module_info_ast, "module-name"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"<string-port>", &module_info_runtime, "<string-port>"},
  {"ascii-whitespaces", &module_info_runtime, "ascii-whitespaces"},
  {"<port>", &module_info_runtime, "<port>"},
  {"<any>", &module_info_boot, "<any>"},
  {"pop", &module_info_runtime, "pop"},
  {"vec", &module_info_runtime, "vec"},
  {"numeric?", &module_info_runtime, "numeric?"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"function-debug-name", &module_info_ast, "function-debug-name"},
  {"<restart>", &module_info_runtime, "<restart>"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"for", &module_info_macros, "for"},
  {"assoc-value", &module_info_runtime, "assoc-value"},
  {"load-module", &module_info_ast, "load-module"},
  {"<list>", &module_info_runtime, "<list>"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"<file-port>", &module_info_runtime, "<file-port>"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"var-name", &module_info_macros, "var-name"},
  {"assocq", &module_info_runtime, "assocq"},
  {"<local-binding>", &module_info_ast, "<local-binding>"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"function-signature-setter", &module_info_ast, "function-signature-setter"},
  {"alter", &module_info_runtime, "alter"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"<constant>", &module_info_ast, "<constant>"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"%pair", &module_info_boot, "%pair"},
  {"df", &module_info_boot, "df"},
  {"pick", &module_info_runtime, "pick"},
  {"<str-tab>", &module_info_runtime, "<str-tab>"},
  {"app-args", &module_info_runtime, "app-args"},
  {"isa?", &module_info_boot, "isa?"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"from-by", &module_info_runtime, "from-by"},
  {"select", &module_info_macros, "select"},
  {"reference-binding", &module_info_ast, "reference-binding"},
  {"<static-global-environment>", &module_info_ast, "<static-global-environment>"},
  {"<input-port>", &module_info_runtime, "<input-port>"},
  {"type-object", &module_info_boot, "type-object"},
  {"del-keys", &module_info_runtime, "del-keys"},
  {"fin", &module_info_boot, "fin"},
  {"init-environment-for-eval", &module_info_ast, "init-environment-for-eval"},
  {"rep", &module_info_boot, "rep"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"objectify", &module_info_ast, "objectify"},
  {"2nd", &module_info_runtime, "2nd"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"module-exports", &module_info_ast, "module-exports"},
  {"%iu", &module_info_boot, "%iu"},
  {"/", &module_info_runtime, "/"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"<step>", &module_info_runtime, "<step>"},
  {"program-register", &module_info_ast, "program-register"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"<compile-time>", &module_info_ast, "<compile-time>"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"<fix-let>", &module_info_ast, "<fix-let>"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"truncate", &module_info_runtime, "truncate"},
  {"<application>", &module_info_ast, "<application>"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"pos", &module_info_runtime, "pos"},
  {"runtime-environment", &module_info_ast, "runtime-environment"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"sequentialize", &module_info_ast, "sequentialize"},
  {"not", &module_info_boot, "not"},
  {"binding-type", &module_info_ast, "binding-type"},
  {"dlet", &module_info_macros, "dlet"},
  {"min", &module_info_runtime, "min"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"del-dups", &module_info_runtime, "del-dups"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"<real-reference>", &module_info_ast, "<real-reference>"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"fabs", &module_info_runtime, "fabs"},
  {"<arguments>", &module_info_ast, "<arguments>"},
  {"do3", &module_info_runtime, "do3"},
  {"<module>", &module_info_ast, "<module>"},
  {"odd?", &module_info_runtime, "odd?"},
  {"locals-functions", &module_info_ast, "locals-functions"},
  {"use", &module_info_boot, "use"},
  {"from-above-by", &module_info_runtime, "from-above-by"},
  {"assq", &module_info_runtime, "assq"},
  {"len-setter", &module_info_runtime, "len-setter"},
  {"dec", &module_info_macros, "dec"},
  {"id-hash", &module_info_runtime, "id-hash"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"collect", &module_info_macros, "collect"},
  {"lab", &module_info_boot, "lab"},
  {"assert", &module_info_macros, "assert"},
  {"table-shrink-threshold", &module_info_runtime, "table-shrink-threshold"},
  {"%i-", &module_info_boot, "%i-"},
  {"signature-specs", &module_info_ast, "signature-specs"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"assoc", &module_info_runtime, "assoc"},
  {"neg", &module_info_runtime, "neg"},
  {"alternative-consequent", &module_info_ast, "alternative-consequent"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"ini-state", &module_info_runtime, "ini-state"},
  {"isa", &module_info_boot, "isa"},
  {"init-ast", &module_info_ast, "init-ast"},
  {"application-arguments", &module_info_ast, "application-arguments"},
  {"as-uppercase", &module_info_runtime, "as-uppercase"},
  {"write-string", &module_info_runtime, "write-string"},
  {"find-environment-module", &module_info_ast, "find-environment-module"},
  {"load-in", &module_info_ast, "load-in"},
  {"<class>", &module_info_boot, "<class>"},
  {"table-growth-threshold", &module_info_runtime, "table-growth-threshold"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"monitor-type", &module_info_ast, "monitor-type"},
  {"open-input-file", &module_info_runtime, "open-input-file"},
  {"set", &module_info_boot, "set"},
  {"eof-object?", &module_info_runtime, "eof-object?"},
  {"from-below", &module_info_runtime, "from-below"},
  {"case-insensitive-string-equal", &module_info_runtime, "case-insensitive-string-equal"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"fix-let-types-setter", &module_info_ast, "fix-let-types-setter"},
  {"fix-let-arguments-setter", &module_info_ast, "fix-let-arguments-setter"},
  {"type-error", &module_info_boot, "type-error"},
  {"push-last!", &module_info_runtime, "push-last!"},
  {"fin-state?", &module_info_runtime, "fin-state?"},
  {"error", &module_info_boot, "error"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"or", &module_info_macros, "or"},
  {"<regular-application>", &module_info_ast, "<regular-application>"},
  {"call-with-input-file", &module_info_runtime, "call-with-input-file"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"<type>", &module_info_boot, "<type>"},
  {"reference-frame-offset", &module_info_ast, "reference-frame-offset"},
  {"%velt", &module_info_boot, "%velt"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"lsh", &module_info_runtime, "lsh"},
  {"function-body-setter", &module_info_ast, "function-body-setter"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"alternative-condition", &module_info_ast, "alternative-condition"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"<runtime-assignment>", &module_info_ast, "<runtime-assignment>"},
  {"pair", &module_info_macros, "pair"},
  {"to-digit", &module_info_runtime, "to-digit"},
  {"locals-bindings-setter", &module_info_ast, "locals-bindings-setter"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"<buf>", &module_info_runtime, "<buf>"},
  {"-", &module_info_runtime, "-"},
  {"fix-let-body", &module_info_ast, "fix-let-body"},
  {"locative-value", &module_info_runtime, "locative-value"},
  {"binding-module-name", &module_info_ast, "binding-module-name"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"neg?", &module_info_runtime, "neg?"},
  {"signature-nary?", &module_info_ast, "signature-nary?"},
  {"call-with-output-file", &module_info_runtime, "call-with-output-file"},
  {"<definition>", &module_info_ast, "<definition>"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"<module-loader>", &module_info_ast, "<module-loader>"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"del", &module_info_runtime, "del"},
  {"bound?-reference", &module_info_ast, "bound?-reference"},
  {"fapply", &module_info_boot, "fapply"},
  {"<bind-exit>", &module_info_ast, "<bind-exit>"},
  {"%fu", &module_info_boot, "%fu"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"head", &module_info_boot, "head"},
  {"call-with-string-output-port", &module_info_runtime, "call-with-string-output-port"},
  {"empty?", &module_info_macros, "empty?"},
  {"gensym", &module_info_macros, "gensym"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"read", &module_info_runtime, "read"},
  {"<global-assignment>", &module_info_ast, "<global-assignment>"},
  {"dv", &module_info_boot, "dv"},
  {"application-known?-setter", &module_info_ast, "application-known?-setter"},
  {"table-growth-factor", &module_info_runtime, "table-growth-factor"},
  {"ceiling/", &module_info_runtime, "ceiling/"},
  {"now-key", &module_info_runtime, "now-key"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"application-known?", &module_info_ast, "application-known?"},
  {"<incongruent-method-error>", &module_info_runtime, "<incongruent-method-error>"},
  {"%raw", &module_info_boot, "%raw"},
  {"%i^", &module_info_boot, "%i^"},
  {"unless", &module_info_macros, "unless"},
  {"round", &module_info_runtime, "round"},
  {"compile-time-program", &module_info_ast, "compile-time-program"},
  {"report-undefined-global-bindings", &module_info_ast, "report-undefined-global-bindings"},
  {"floor/", &module_info_runtime, "floor/"},
  {"<local-assignment>", &module_info_ast, "<local-assignment>"},
  {"compose", &module_info_runtime, "compose"},
  {"<global-box>", &module_info_ast, "<global-box>"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"program-register-setter", &module_info_ast, "program-register-setter"},
  {"do2", &module_info_runtime, "do2"},
  {"reference-frame-number", &module_info_ast, "reference-frame-number"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"<alternative>", &module_info_ast, "<alternative>"},
  {"dc", &module_info_boot, "dc"},
  {"sub", &module_info_runtime, "sub"},
  {"now-elt", &module_info_runtime, "now-elt"},
  {"%c=", &module_info_boot, "%c="},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"function-binding", &module_info_ast, "function-binding"},
  {"dp", &module_info_boot, "dp"},
  {"<predefined-application>", &module_info_ast, "<predefined-application>"},
  {"now-elt-setter", &module_info_runtime, "now-elt-setter"},
  {"bind-exit-main-fun", &module_info_ast, "bind-exit-main-fun"},
  {"signature-value-setter", &module_info_ast, "signature-value-setter"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"<bound?>", &module_info_ast, "<bound?>"},
  {"round/", &module_info_runtime, "round/"},
  {"num-to-str", &module_info_runtime, "num-to-str"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"<tab>", &module_info_runtime, "<tab>"},
  {"address-of", &module_info_runtime, "address-of"},
  {"binding-global-box-setter", &module_info_ast, "binding-global-box-setter"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"ash", &module_info_runtime, "ash"},
  {"case-insensitive-string-hash", &module_info_runtime, "case-insensitive-string-hash"},
  {"if", &module_info_boot, "if"},
  {"<str>", &module_info_boot, "<str>"},
  {"flo-bits", &module_info_runtime, "flo-bits"},
  {"del-key", &module_info_runtime, "del-key"},
  {"monitor-test", &module_info_ast, "monitor-test"},
  {"<file-output-port>", &module_info_runtime, "<file-output-port>"},
  {"object-class", &module_info_boot, "object-class"},
  {"nxt-state", &module_info_runtime, "nxt-state"},
  {"from-above", &module_info_runtime, "from-above"},
  {"%f/", &module_info_boot, "%f/"},
  {"write-char", &module_info_runtime, "write-char"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"signature-names", &module_info_ast, "signature-names"},
  {"nil", &module_info_boot, "nil"},
  {"%call-next-method", &module_info_boot, "%call-next-method"},
  {"table-protocol", &module_info_runtime, "table-protocol"},
  {"newline", &module_info_runtime, "newline"},
  {"abs", &module_info_runtime, "abs"},
  {"format", &module_info_runtime, "format"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"assqn", &module_info_runtime, "assqn"},
  {"dm", &module_info_boot, "dm"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"<string-output-port>", &module_info_runtime, "<string-output-port>"},
  {"assignment-reference", &module_info_ast, "assignment-reference"},
  {"*", &module_info_runtime, "*"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"%with-monitor", &module_info_runtime, "%with-monitor"},
  {"+", &module_info_runtime, "+"},
  {"truncate/", &module_info_runtime, "truncate/"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"and", &module_info_macros, "and"},
  {"curry", &module_info_runtime, "curry"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"objectify-quotation", &module_info_ast, "objectify-quotation"},
  {"seq", &module_info_boot, "seq"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"read-char", &module_info_runtime, "read-char"},
  {"3rd", &module_info_runtime, "3rd"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"%f<", &module_info_boot, "%f<"},
  {"try", &module_info_boot, "try"},
  {"do-static-global-bindings", &module_info_ast, "do-static-global-bindings"},
  {"%vec", &module_info_boot, "%vec"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"max", &module_info_runtime, "max"},
  {"eof-object", &module_info_runtime, "eof-object"},
  {"<monitor>", &module_info_ast, "<monitor>"},
  {"def-list", &module_info_ast, "def-list"},
  {"floor", &module_info_runtime, "floor"},
  {"ast-define-binding", &module_info_ast, "ast-define-binding"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"environment-uses-modules", &module_info_ast, "environment-uses-modules"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"modulo", &module_info_runtime, "modulo"},
  {"default", &module_info_runtime, "default"},
  {"%i=", &module_info_boot, "%i="},
  {"<flat>", &module_info_boot, "<flat>"},
  {"global-box-value-setter", &module_info_ast, "global-box-value-setter"},
  {"%cb", &module_info_boot, "%cb"},
  {"unwind-protect-cleanup-thunk", &module_info_ast, "unwind-protect-cleanup-thunk"},
  {"find-key", &module_info_runtime, "find-key"},
  {"reduce+", &module_info_runtime, "reduce+"},
  {"<met>", &module_info_boot, "<met>"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"map", &module_info_macros, "map"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"application-function", &module_info_ast, "application-function"},
  {"$permanent-hash-state", &module_info_runtime, "$permanent-hash-state"},
  {"nul?", &module_info_runtime, "nul?"},
  {"empty", &module_info_runtime, "empty"},
  {"do-named-static-global-bindings", &module_info_ast, "do-named-static-global-bindings"},
  {"binding-value-setter", &module_info_ast, "binding-value-setter"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"port-index", &module_info_runtime, "port-index"},
  {"<local-reference>", &module_info_ast, "<local-reference>"},
  {"lst", &module_info_boot, "lst"},
  {"reference-called-function?-setter", &module_info_ast, "reference-called-function?-setter"},
  {"monitor-handler", &module_info_ast, "monitor-handler"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"first-then", &module_info_runtime, "first-then"},
  {"module-binding", &module_info_ast, "module-binding"},
  {"remove-modules-by-name!", &module_info_ast, "remove-modules-by-name!"},
  {"remainder", &module_info_runtime, "remainder"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"logior", &module_info_runtime, "logior"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"<assocs>", &module_info_runtime, "<assocs>"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"*print-base*", &module_info_runtime, "*print-base*"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"<=", &module_info_runtime, "<="},
  {"function-value", &module_info_ast, "function-value"},
  {"=", &module_info_runtime, "="},
  {"map-keyed", &module_info_runtime, "map-keyed"},
  {"binding-name", &module_info_ast, "binding-name"},
  {"map2", &module_info_runtime, "map2"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"<binding>", &module_info_ast, "<binding>"},
  {"lowercase?", &module_info_runtime, "lowercase?"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"pushf", &module_info_macros, "pushf"},
  {"<passive-program>", &module_info_ast, "<passive-program>"},
  {"<reference>", &module_info_ast, "<reference>"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"pos?", &module_info_runtime, "pos?"},
  {"%isa", &module_info_boot, "%isa"},
  {"locals-body", &module_info_ast, "locals-body"},
  {"%f-", &module_info_boot, "%f-"},
  {"<string-input-port>", &module_info_runtime, "<string-input-port>"},
  {"false-or", &module_info_runtime, "false-or"},
  {"%ib", &module_info_boot, "%ib"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"fab-p2c-module", &module_info_ast, "fab-p2c-module"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"<", &module_info_runtime, "<"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"%lu", &module_info_boot, "%lu"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"class-name", &module_info_boot, "class-name"},
  {"logxor", &module_info_runtime, "logxor"},
  {"always", &module_info_runtime, "always"},
  {"unwind-protect-protected-thunk", &module_info_ast, "unwind-protect-protected-thunk"},
  {"locals-bindings", &module_info_ast, "locals-bindings"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"<output-port>", &module_info_runtime, "<output-port>"},
  {"sub-setter", &module_info_runtime, "sub-setter"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"push", &module_info_runtime, "push"},
  {"%i*", &module_info_boot, "%i*"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"open-output-file", &module_info_runtime, "open-output-file"},
  {"buf", &module_info_runtime, "buf"},
  {"reduce", &module_info_runtime, "reduce"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"invoke-handler-interactively", &module_info_runtime, "invoke-handler-interactively"},
  {"~=", &module_info_runtime, "~="},
  {"<global-reference>", &module_info_ast, "<global-reference>"},
  {"module-loader-module-type", &module_info_ast, "module-loader-module-type"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"def-programs", &module_info_ast, "def-programs"},
  {"cat", &module_info_macros, "cat"},
  {"probe-module", &module_info_ast, "probe-module"},
  {">", &module_info_runtime, ">"},
  {"last", &module_info_runtime, "last"},
  {"logand", &module_info_runtime, "logand"},
  {"binding-dynamic-extent?-setter", &module_info_ast, "binding-dynamic-extent?-setter"},
  {"<runtime-reference>", &module_info_ast, "<runtime-reference>"},
  {"fix-let-body-setter", &module_info_ast, "fix-let-body-setter"},
  {"binding-info-setter", &module_info_ast, "binding-info-setter"},
  {"t<", &module_info_runtime, "t<"},
  {"module-name-to-relpath", &module_info_ast, "module-name-to-relpath"},
  {"<col>", &module_info_boot, "<col>"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"from-to-by", &module_info_runtime, "from-to-by"},
  {"install-initial-bindings", &module_info_ast, "install-initial-bindings"},
  {"binding-mutable?", &module_info_ast, "binding-mutable?"},
  {"apply", &module_info_boot, "apply"},
  {"do", &module_info_runtime, "do"},
  {"ast-evaluate", &module_info_ast, "ast-evaluate"},
  {"module-target-environment", &module_info_ast, "module-target-environment"},
  {"force-output", &module_info_runtime, "force-output"},
  {"%f*", &module_info_boot, "%f*"},
  {"fab", &module_info_runtime, "fab"},
  {"reference-called-function?", &module_info_ast, "reference-called-function?"},
  {"ceiling", &module_info_runtime, "ceiling"},
  {"$proto-runtime-module-name", &module_info_ast, "$proto-runtime-module-name"},
  {"rev!", &module_info_runtime, "rev!"},
  {"lognot", &module_info_runtime, "lognot"},
  {"as", &module_info_runtime, "as"},
  {"sig", &module_info_runtime, "sig"},
  {"out", &module_info_runtime, "out"},
  {"signature-bindings", &module_info_ast, "signature-bindings"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"assocs-test", &module_info_runtime, "assocs-test"},
  {"ascii-limit", &module_info_runtime, "ascii-limit"},
  {"assignment-form", &module_info_ast, "assignment-form"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"t=", &module_info_runtime, "t="},
  {"subtype?", &module_info_boot, "subtype?"},
  {"case", &module_info_macros, "case"},
  {"rev", &module_info_runtime, "rev"},
  {"constant-value", &module_info_ast, "constant-value"},
  {"locals-functions-setter", &module_info_ast, "locals-functions-setter"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"export", &module_info_boot, "export"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"binding-value", &module_info_ast, "binding-value"},
  {"%it/", &module_info_boot, "%it/"},
  {"signature-value", &module_info_ast, "signature-value"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"mif", &module_info_boot, "mif"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"build-condition-interactively", &module_info_runtime, "build-condition-interactively"},
  {"%i!", &module_info_boot, "%i!"},
  {"<file-input-port>", &module_info_runtime, "<file-input-port>"},
  {"function-debug-name-setter", &module_info_ast, "function-debug-name-setter"},
  {"<programs>", &module_info_ast, "<programs>"},
  {"%iv", &module_info_boot, "%iv"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"function-body", &module_info_ast, "function-body"},
  {"%slot", &module_info_boot, "%slot"},
  {"<computed-program>", &module_info_ast, "<computed-program>"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"locals-body-setter", &module_info_ast, "locals-body-setter"},
  {"collecting", &module_info_macros, "collecting"},
  {"uppercase?", &module_info_runtime, "uppercase?"},
  {"%i<", &module_info_boot, "%i<"},
  {"do-keyed", &module_info_runtime, "do-keyed"},
  {"%slen", &module_info_boot, "%slen"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"fix-let-types", &module_info_ast, "fix-let-types"},
  {"t+", &module_info_runtime, "t+"},
  {"cat2", &module_info_runtime, "cat2"},
  {"copy-state", &module_info_runtime, "copy-state"},
  {"mem?", &module_info_runtime, "mem?"},
  {"signature-specs-setter", &module_info_ast, "signature-specs-setter"},
  {"zero?", &module_info_runtime, "zero?"},
  {"alphabetic?", &module_info_runtime, "alphabetic?"},
  {"signature-nary?-setter", &module_info_ast, "signature-nary?-setter"},
  {"when", &module_info_macros, "when"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"env-object-name", &module_info_ast, "env-object-name"},
  {"<ast-function>", &module_info_ast, "<ast-function>"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"list-handlers", &module_info_runtime, "list-handlers"},
  {"<locals>", &module_info_ast, "<locals>"},
  {"dss", &module_info_boot, "dss"},
  {"function-signature", &module_info_ast, "function-signature"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"cat!", &module_info_runtime, "cat!"},
  {"monitor-main-thunk", &module_info_ast, "monitor-main-thunk"},
  {"application-tail?", &module_info_ast, "application-tail?"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"ct", &module_info_boot, "ct"},
  {"type-class", &module_info_boot, "type-class"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"module-syntax-environment", &module_info_ast, "module-syntax-environment"},
  {"<ast-signature>", &module_info_ast, "<ast-signature>"},
  {"let", &module_info_boot, "let"},
  {"<error>", &module_info_runtime, "<error>"},
  {"binding-native-to?", &module_info_ast, "binding-native-to?"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"close-input-port", &module_info_runtime, "close-input-port"},
  {"peek-char", &module_info_runtime, "peek-char"},
  {">=", &module_info_runtime, ">="},
  {"<int>", &module_info_boot, "<int>"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"port-contents", &module_info_runtime, "port-contents"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"global-box-value", &module_info_ast, "global-box-value"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"%ft", &module_info_boot, "%ft"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"pop-last!", &module_info_runtime, "pop-last!"},
  {"<ast-primitive-definition>", &module_info_ast, "<ast-primitive-definition>"},
  {"dg", &module_info_boot, "dg"},
  {"add!", &module_info_runtime, "add!"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"<map>", &module_info_runtime, "<map>"},
  {"%str", &module_info_boot, "%str"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"inc", &module_info_macros, "inc"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"env-runtime-value-setter", &Yast_evalYenv_runtime_value_setter},
  {"env-local-reference-value-setter", &Yast_evalYenv_local_reference_value_setter},
  {"ifun", NULL},
  {"env-global-binding-bound?", &Yast_evalYenv_global_binding_boundQ},
  {"<loc-env>", &Yast_evalYLloc_envG},
  {"ast-eval", &Yast_evalYast_eval},
  {"env-names-setter", &Yast_evalYenv_names_setter},
  {"env-names", &Yast_evalYenv_names},
  {"env-binding-value", &Yast_evalYenv_binding_value},
  {"env-local-value-setter", &Yast_evalYenv_local_value_setter},
  {"$nul-loc-env", &Yast_evalYDnul_loc_env},
  {"env-values-setter", &Yast_evalYenv_values_setter},
  {"ast-eval-bound?", &Yast_evalYast_eval_boundQ},
  {"ast-eval-specs", &Yast_evalYast_eval_specs},
  {"env-parent-setter", &Yast_evalYenv_parent_setter},
  {"env-frame!", &Yast_evalYenv_frameX},
  {"env-values", &Yast_evalYenv_values},
  {"as-fun-name", &Yast_evalYas_fun_name},
  {"env-parent", &Yast_evalYenv_parent},
  {"env-define-binding!", &Yast_evalYenv_define_bindingX},
  {"env-local-reference-value", &Yast_evalYenv_local_reference_value},
  {"env-function", &Yast_evalYenv_function},
  {"---main-0---", NULL},
  {"export-proto-method", &Yast_evalYexport_proto_method},
  {"env-runtime-value", &Yast_evalYenv_runtime_value},
  {"---main-1---", NULL},
  {"env-global-binding-value", &Yast_evalYenv_global_binding_value},
  {"env-function-setter", &Yast_evalYenv_function_setter},
  {"env-local-value", &Yast_evalYenv_local_value},
  {"env-global-binding-value-setter", &Yast_evalYenv_global_binding_value_setter},
  {"*stack*", &Yast_evalYTstackT},
  {"env-binding-value-setter", &Yast_evalYenv_binding_value_setter},
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
