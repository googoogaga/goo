/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: ast-eval */

EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(Ytype_error,"boot","type-error");
EXT(YLoptsG,"boot","<opts>");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YruntimeYTgensym_counterT,"runtime","*gensym-counter*");
EXT(YastYLpassive_programG,"ast","<passive-program>");
EXT(YprotoScollectionsSassocYassocs_test,"proto/collections/assoc","assocs-test");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YprotoSmathYzeroQ,"proto/math","zero?");
EXT(YprotoScollectionsSstringYTprint_baseT,"proto/collections/string","*print-base*");
EXT(YprotoScollectionsScollectionYfill,"proto/collections/collection","fill");
EXT(YDmin_int,"boot","$min-int");
EXT(YprotoSmathYE,"proto/math","=");
EXT(YprotoSmathYnulQ,"proto/math","nul?");
DEF(Yast_evalYenv_local_value,"ast-eval","env-local-value");
EXT(YprotoScollectionsSlistYLlistG,"proto/collections/list","<list>");
EXT(YastYload_in,"ast","load-in");
EXT(YastYsignature_naryQ,"ast","signature-nary?");
EXT(YmacrosYfin_stateQ,"macros","fin-state?");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YruntimeYalways,"runtime","always");
EXT(YprotoSmathYuppercaseQ,"proto/math","uppercase?");
EXT(YastYast_define_binding,"ast","ast-define-binding");
EXT(YastYunwind_protect_cleanup_thunk,"ast","unwind-protect-cleanup-thunk");
EXT(YprotoScollectionsStableYtable_shrink_threshold,"proto/collections/table","table-shrink-threshold");
EXT(YprotoScollectionsSrangeYfrom,"proto/collections/range","from");
EXT(YprotoScollectionsScollectionYall2Q,"proto/collections/collection","all2?");
EXT(YastYLlocalsG,"ast","<locals>");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YprotoScollectionsScollectionYnow_elt_setter,"proto/collections/collection","now-elt-setter");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YastYbinding_name,"ast","binding-name");
EXT(YastYsignature_specs_setter,"ast","signature-specs-setter");
EXT(YprotoSmathYroundS,"proto/math","round/");
EXT(YprotoSmathYto_str,"proto/math","to-str");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(Ytype_object,"boot","type-object");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YmacrosYini_state,"macros","ini-state");
DEF(Yast_evalYenv_binding_value_setter,"ast-eval","env-binding-value-setter");
EXT(YLclassG,"boot","<class>");
EXT(YprotoScollectionsScollectionYlen,"proto/collections/collection","len");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YprotoSportsYLoutput_portG,"proto/ports","<output-port>");
EXT(YastYbinding_index_setter,"ast","binding-index-setter");
EXT(YprotoScollectionsSrangeYfrom_to_by,"proto/collections/range","from-to-by");
DEF(Yast_evalYenv_values_setter,"ast-eval","env-values-setter");
EXT(YastYassignment_form,"ast","assignment-form");
EXT(YruntimeYread,"runtime","read");
EXT(YprotoSmathYA,"proto/math","+");
EXT(YruntimeYformat,"runtime","format");
EXT(YastYdo_static_global_bindings,"ast","do-static-global-bindings");
EXT(YprotoScollectionsSsequenceYsub,"proto/collections/sequence","sub");
EXT(YprotoScollectionsStableYLstr_tabG,"proto/collections/table","<str-tab>");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(YastYmodule_name_to_relpath,"ast","module-name-to-relpath");
EXT(YreadYread_from_string,"read","read-from-string");
EXT(YLtypeG,"boot","<type>");
EXT(YprotoStypesYfalse_or,"proto/types","false-or");
EXT(YprotoScollectionsScollectionYadd,"proto/collections/collection","add");
EXT(YastYsignature_names_setter,"ast","signature-names-setter");
EXT(YprotoSmathYevenQ,"proto/math","even?");
EXT(YprotoSmathYLE,"proto/math","<=");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YastYLalternativeG,"ast","<alternative>");
DEF(Yast_evalYarrange_arguments,"ast-eval","arrange-arguments");
EXT(YastYmodule_binding,"ast","module-binding");
EXT(YastYprogram_register,"ast","program-register");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
EXT(YprotoScollectionsScollectionYdel_keys,"proto/collections/collection","del-keys");
EXT(YastYobjectify,"ast","objectify");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YprotoScollectionsSbufferYlen_setter,"proto/collections/buffer","len-setter");
EXT(YastYLbind_exitG,"ast","<bind-exit>");
EXT(YastYenv_object_name,"ast","env-object-name");
EXT(Yobject_parents,"boot","object-parents");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YprotoSportsYLstring_portG,"proto/ports","<string-port>");
EXT(YLgenG,"boot","<gen>");
EXT(YastYfunction_free_setter,"ast","function-free-setter");
EXT(Yslot_init,"boot","slot-init");
EXT(YastYbinding_dynamic_extentQ,"ast","binding-dynamic-extent?");
EXT(YprotoSportsYchar_readyQ,"proto/ports","char-ready?");
EXT(YastYmonitor_info,"ast","monitor-info");
DEF(Yast_evalYenv_global_binding_value,"ast-eval","env-global-binding-value");
EXT(YprotoSmathYto_digit,"proto/math","to-digit");
EXT(YprotoSportsYLfile_output_portG,"proto/ports","<file-output-port>");
EXT(YastYfunction_data_refs,"ast","function-data-refs");
EXT(YastYapplication_knownQ_setter,"ast","application-known?-setter");
EXT(Yobject_slots,"boot","object-slots");
EXT(YprotoScollectionsStableYid_hash,"proto/collections/table","id-hash");
EXT(YastYbinding_native_toQ,"ast","binding-native-to?");
EXT(YprotoSmathYlowercaseQ,"proto/math","lowercase?");
EXT(YastYLast_primitive_definitionG,"ast","<ast-primitive-definition>");
EXT(YastYprogram_register_setter,"ast","program-register-setter");
EXT(YLsymG,"boot","<sym>");
EXT(YprotoStypesYtL,"proto/types","t<");
EXT(YastYLdefinitionG,"ast","<definition>");
EXT(YastYLbindingG,"ast","<binding>");
EXT(YastYfix_let_bindings_setter,"ast","fix-let-bindings-setter");
EXT(Yfind_setter,"boot","find-setter");
EXT(YastYfunction_bindings,"ast","function-bindings");
EXT(YprotoSmathYlogior,"proto/math","logior");
EXT(YprotoSmathYfabs,"proto/math","fabs");
DEF(Yast_evalYTstackT,"ast-eval","*stack*");
DEF(Yast_evalYenv_parent_setter,"ast-eval","env-parent-setter");
DEF(Yast_evalYenv_names,"ast-eval","env-names");
EXT(YprotoSmathYflo_bits,"proto/math","flo-bits");
EXT(YprotoSmathYround,"proto/math","round");
DEF(Yast_evalYenv_define_bindingX,"ast-eval","env-define-binding!");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YastYlocals_body_setter,"ast","locals-body-setter");
EXT(YprotoScollectionsSsequenceYcat2,"proto/collections/sequence","cat2");
EXT(YprotoSportsYpeek_char,"proto/ports","peek-char");
EXT(YLstrG,"boot","<str>");
EXT(YprotoSmathYtruncateS,"proto/math","truncate/");
EXT(YruntimeYsig,"runtime","sig");
EXT(YprotoScollectionsStableYtable_protocol,"proto/collections/table","table-protocol");
EXT(YastYfunction_signature_setter,"ast","function-signature-setter");
EXT(YprotoSportsYcall_with_output_file,"proto/ports","call-with-output-file");
EXT(YastYbinding_dynamic_extentQ_setter,"ast","binding-dynamic-extent?-setter");
EXT(YPvnul,"boot","%vnul");
EXT(YprotoScollectionsScollectionYdel_key,"proto/collections/collection","del-key");
EXT(YastYassignment_reference,"ast","assignment-reference");
EXT(YprotoScollectionsSsequenceYpos,"proto/collections/sequence","pos");
EXT(YastYfunction_registers_setter,"ast","function-registers-setter");
EXT(YastYfind_environment_module,"ast","find-environment-module");
EXT(YastYbinding_kind,"ast","binding-kind");
EXT(YastYinit_ast,"ast","init-ast");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YprotoStypesYtE,"proto/types","t=");
EXT(YastYbinding_value,"ast","binding-value");
EXT(YprotoScollectionsScollectionYdo,"proto/collections/collection","do");
EXT(YastYfix_let_bindings,"ast","fix-let-bindings");
EXT(YprotoSmathYG,"proto/math",">");
EXT(YprotoSmathYL,"proto/math","<");
EXT(Yerror,"boot","error");
EXT(YprotoSmathYmax,"proto/math","max");
EXT(YastYbinding_mutableQ,"ast","binding-mutable?");
EXT(YastYassignment_form_setter,"ast","assignment-form-setter");
EXT(YastYfunction_signature,"ast","function-signature");
EXT(YprotoSportsYcall_with_input_file,"proto/ports","call-with-input-file");
EXT(YLvecG,"boot","<vec>");
EXT(YastYLlocal_bindingG,"ast","<local-binding>");
EXT(Yslot_owner,"boot","slot-owner");
DEF(Yast_evalYenv_runtime_value_setter,"ast-eval","env-runtime-value-setter");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(YastYLpredefined_applicationG,"ast","<predefined-application>");
EXT(Yfun_names,"boot","fun-names");
EXT(YLmetG,"boot","<met>");
EXT(YastYset_module_environments,"ast","set-module-environments");
DEF(Yast_evalYas_fun_name,"ast-eval","as-fun-name");
EXT(Yhead_setter,"boot","head-setter");
EXT(YprotoScollectionsSbufferYlenSfill_setter,"proto/collections/buffer","len/fill-setter");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YastYsignature_names,"ast","signature-names");
EXT(YastYsignature_value,"ast","signature-value");
EXT(YastYlocals_body,"ast","locals-body");
EXT(YprotoScollectionsScollectionYfab,"proto/collections/collection","fab");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
EXT(YprotoScollectionsSsequenceYcatX,"proto/collections/sequence","cat!");
EXT(YprotoSportsYport_index,"proto/ports","port-index");
EXT(Yfind_getter,"boot","find-getter");
EXT(YastYfunction_self_recursiveQ_setter,"ast","function-self-recursive?-setter");
EXT(YmacrosYpair,"macros","pair");
EXT(YastYfunction_body,"ast","function-body");
EXT(YLflatG,"boot","<flat>");
EXT(YastYbinding_global_box,"ast","binding-global-box");
EXT(Yhead,"boot","head");
EXT(YprotoScollectionsSrangeYfrom_above,"proto/collections/range","from-above");
EXT(YastYmodule_syntax_environment,"ast","module-syntax-environment");
EXT(YprotoSportsYread_char,"proto/ports","read-char");
EXT(YprotoSmathYnegQ,"proto/math","neg?");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(YprotoSportsYclose_input_port,"proto/ports","close-input-port");
EXT(YastYLruntime_assignmentG,"ast","<runtime-assignment>");
EXT(YastYbinding_value_setter,"ast","binding-value-setter");
EXT(YprotoStypesYtA,"proto/types","t+");
EXT(YastYLprogramsG,"ast","<programs>");
EXT(YprotoScollectionsScollectionYfind_key,"proto/collections/collection","find-key");
EXT(Ynul,"boot","nul");
EXT(Yobject_class,"boot","object-class");
EXT(YprotoSmathYlogxor,"proto/math","logxor");
EXT(YprotoSmathYNEE,"proto/math","~==");
EXT(YastYfunction_registers,"ast","function-registers");
EXT(YastYLmodule_bindingG,"ast","<module-binding>");
EXT(YastYLunwind_protectG,"ast","<unwind-protect>");
EXT(YastYLfab_listG,"ast","<fab-list>");
DEF(Yast_evalYenv_parent,"ast-eval","env-parent");
EXT(YprotoSportsYLstring_output_portG,"proto/ports","<string-output-port>");
EXT(YastYLcompile_timeG,"ast","<compile-time>");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YprotoScollectionsSbufferYpop_lastX,"proto/collections/buffer","pop-last!");
EXT(Ysym_name,"boot","sym-name");
EXT(YastYmonitor_type,"ast","monitor-type");
EXT(YprotoSportsYopen_output_file,"proto/ports","open-output-file");
EXT(YprotoSmathYas_lowercase,"proto/math","as-lowercase");
EXT(YastYfix_let_arguments,"ast","fix-let-arguments");
EXT(YastYalternative_alternant,"ast","alternative-alternant");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YprotoSmathYeof_objectQ,"proto/math","eof-object?");
EXT(YprotoSportsYcall_with_string_output_port,"proto/ports","call-with-string-output-port");
EXT(YastYremove_modules_by_nameX,"ast","remove-modules-by-name!");
EXT(YLfunG,"boot","<fun>");
EXT(YprotoSmathYmodulo,"proto/math","modulo");
EXT(YastYmodule_target_environment,"ast","module-target-environment");
EXT(YprotoSportsYLfile_input_portG,"proto/ports","<file-input-port>");
EXT(YprotoSportsYLstring_input_portG,"proto/ports","<string-input-port>");
EXT(YmacrosYnapply,"macros","napply");
EXT(YastYfix_let_body_setter,"ast","fix-let-body-setter");
EXT(YprotoScollectionsScollectionYmemQ,"proto/collections/collection","mem?");
EXT(YLlstG,"boot","<lst>");
EXT(YPsnul,"boot","%snul");
EXT(YastYmodule_exports,"ast","module-exports");
EXT(YprotoScollectionsSsequenceYaddX,"proto/collections/sequence","add!");
EXT(YDmax_int,"boot","$max-int");
EXT(YastYLreal_referenceG,"ast","<real-reference>");
EXT(YruntimeYmake_handler,"runtime","make-handler");
EXT(YastYLfix_letG,"ast","<fix-let>");
DEF(Yast_evalYast_eval_specs,"ast-eval","ast-eval-specs");
EXT(YprotoScollectionsSmapYfab_map,"proto/collections/map","fab-map");
EXT(YastYconstant_index,"ast","constant-index");
EXT(YastYmodule_name,"ast","module-name");
EXT(YprotoSmathYT,"proto/math","*");
EXT(YprotoSmathYoddQ,"proto/math","odd?");
EXT(YastYfunction_self_recursiveQ,"ast","function-self-recursive?");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YprotoSportsYopen_input_file,"proto/ports","open-input-file");
EXT(YastYmonitor_handler,"ast","monitor-handler");
EXT(Ytail_setter,"boot","tail-setter");
EXT(Yslot_type,"boot","slot-type");
EXT(YprotoScollectionsScollectionYreduceA,"proto/collections/collection","reduce+");
EXT(YastYsignature_specs,"ast","signature-specs");
EXT(YastYLast_macro_definitionG,"ast","<ast-macro-definition>");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(YastYenvironment_uses_modules,"ast","environment-uses-modules");
EXT(YastYconstant_index_setter,"ast","constant-index-setter");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YastYdo_module_loader_modules,"ast","do-module-loader-modules");
EXT(YastYprobe_module,"ast","probe-module");
EXT(YLseqG,"boot","<seq>");
EXT(YmacrosYcat,"macros","cat");
EXT(YprotoSmathY_,"proto/math","-");
EXT(YprotoSportsYport_contents,"proto/ports","port-contents");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YastYinit_environment_for_eval,"ast","init-environment-for-eval");
EXT(YastYLlocal_referenceG,"ast","<local-reference>");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YprotoScollectionsScollectionYallQ,"proto/collections/collection","all?");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
DEF(Yast_evalYenv_local_reference_value,"ast-eval","env-local-reference-value");
EXT(Ytail,"boot","tail");
EXT(YastYLmonitorG,"ast","<monitor>");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YprotoScollectionsStableYLtabG,"proto/collections/table","<tab>");
EXT(YastYLboundQG,"ast","<bound?>");
EXT(YastYbinding_global_box_setter,"ast","binding-global-box-setter");
EXT(YprotoStypesYas,"proto/types","as");
DEF(Yast_evalYast_eval_boundQ,"ast-eval","ast-eval-bound?");
EXT(YprotoScollectionsSbufferYpush_lastX,"proto/collections/buffer","push-last!");
EXT(YprotoScollectionsSrangeYfrom_to,"proto/collections/range","from-to");
EXT(Ylst,"boot","lst");
EXT(Yclass_slots,"boot","class-slots");
EXT(YprotoSmathYalphabeticQ,"proto/math","alphabetic?");
EXT(YastYLregular_applicationG,"ast","<regular-application>");
EXT(YLcolG,"boot","<col>");
EXT(YastYLast_genericG,"ast","<ast-generic>");
EXT(YprotoScollectionsStableYtable_growth_threshold,"proto/collections/table","table-growth-threshold");
EXT(YprotoSmathYGE,"proto/math",">=");
EXT(Yfab_class,"boot","fab-class");
EXT(YprotoSmathYlogand,"proto/math","logand");
EXT(YprotoSportsYLfile_portG,"proto/ports","<file-port>");
EXT(YastYbinding_dottedQ,"ast","binding-dotted?");
EXT(YLtupG,"boot","<tup>");
EXT(YprotoScollectionsScollectionYdefault,"proto/collections/collection","default");
DEF(Yast_evalYenv_frameX,"ast-eval","env-frame!");
EXT(YastYfix_let_body,"ast","fix-let-body");
EXT(YprotoScollectionsScollectionYmap_keyed,"proto/collections/collection","map-keyed");
EXT(YprotoSmathYtruncate,"proto/math","truncate");
EXT(YastYreference_frame_number,"ast","reference-frame-number");
EXT(YastYLast_signatureG,"ast","<ast-signature>");
EXT(YLsigG,"boot","<sig>");
EXT(YprotoSportsYout,"proto/ports","out");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YastYLlocal_assignmentG,"ast","<local-assignment>");
EXT(YastYLstatic_global_environmentG,"ast","<static-global-environment>");
DEF(Yast_evalYenv_values,"ast-eval","env-values");
EXT(YastYenvironment_module,"ast","environment-module");
DEF(Yast_evalYenv_binding_value,"ast-eval","env-binding-value");
EXT(YprotoScollectionsSlistYlist,"proto/collections/list","list");
DEF(Yast_evalYenv_function_setter,"ast-eval","env-function-setter");
EXT(YastYfunction_source_setter,"ast","function-source-setter");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YastYLimmediate_constantG,"ast","<immediate-constant>");
EXT(YastYfix_let_arguments_setter,"ast","fix-let-arguments-setter");
EXT(YLlocG,"boot","<loc>");
EXT(YprotoSmathYaddress_of,"proto/math","address-of");
EXT(YastYfunction_debug_name_setter,"ast","function-debug-name-setter");
EXT(YprotoSportsYcall_with_string_input_port,"proto/ports","call-with-string-input-port");
EXT(YprotoScollectionsSbufferYbuf,"proto/collections/buffer","buf");
EXT(YastYbinding_dottedQ_setter,"ast","binding-dotted?-setter");
EXT(YastYLcomputed_programG,"ast","<computed-program>");
EXT(YprotoSmathYremainder,"proto/math","remainder");
EXT(YprotoScollectionsScollectionYreduce,"proto/collections/collection","reduce");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YprotoScollectionsScollectionYkeys,"proto/collections/collection","keys");
EXT(YprotoScollectionsSsequenceYdel_dups,"proto/collections/sequence","del-dups");
EXT(Ytype_elts,"boot","type-elts");
EXT(YprotoSmathYnum_to_str,"proto/math","num-to-str");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YprotoScollectionsSsequenceYrev,"proto/collections/sequence","rev");
EXT(YprotoScollectionsSrangeYfrom_below_by,"proto/collections/range","from-below-by");
DEF(Yast_evalYast_eval,"ast-eval","ast-eval");
EXT(YPisa,"boot","%isa");
EXT(YwriteYwrite_to_string,"write","write-to-string");
EXT(YastYLfree_environmentG,"ast","<free-environment>");
DEF(Yast_evalYenv_names_setter,"ast-eval","env-names-setter");
EXT(YastYsignature_arity_setter,"ast","signature-arity-setter");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
EXT(YLfloG,"boot","<flo>");
EXT(YastYfunction_value,"ast","function-value");
EXT(YprotoScollectionsStableYcase_insensitive_string_equal,"proto/collections/table","case-insensitive-string-equal");
EXT(YprotoSmathYfloor,"proto/math","floor");
EXT(YastYobjectify_quotation,"ast","objectify-quotation");
EXT(YastYreference_binding,"ast","reference-binding");
EXT(YastYapplication_tailQ,"ast","application-tail?");
EXT(YprotoScollectionsScollectionYdo_keyed,"proto/collections/collection","do-keyed");
EXT(YastYfunction_temporaries,"ast","function-temporaries");
EXT(YastYassignment_binding,"ast","assignment-binding");
EXT(YastYprogram_type_setter,"ast","program-type-setter");
EXT(YastYprogram_type,"ast","program-type");
EXT(YprotoSportsYwrite_string,"proto/ports","write-string");
EXT(YprotoSportsYport_line,"proto/ports","port-line");
EXT(Ysig_value,"boot","sig-value");
EXT(YprotoSportsYin,"proto/ports","in");
EXT(Yclass_name,"boot","class-name");
EXT(YprotoScollectionsScollectionYempty,"proto/collections/collection","empty");
EXT(YprotoScollectionsSsequenceYdel,"proto/collections/sequence","del");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YprotoScollectionsSbufferYLbufG,"proto/collections/buffer","<buf>");
EXT(YprotoSmathYneg,"proto/math","neg");
EXT(YastYlocals_bindings_setter,"ast","locals-bindings-setter");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(YastYLmodule_binding_referenceG,"ast","<module-binding-reference>");
EXT(YLnumG,"boot","<num>");
EXT(YLintG,"boot","<int>");
EXT(Ynil,"boot","nil");
EXT(YprotoScollectionsSstringYstr_to_num,"proto/collections/string","str-to-num");
EXT(YastYunchecked_runtime_environment,"ast","unchecked-runtime-environment");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YmacrosYEE,"macros","==");
EXT(YastYbinding_type,"ast","binding-type");
EXT(YastYfunction_source,"ast","function-source");
EXT(YastYLconstantG,"ast","<constant>");
EXT(YwriteYwriteln,"write","writeln");
EXT(YastYconstant_value,"ast","constant-value");
EXT(YastYast_evaluate,"ast","ast-evaluate");
EXT(YastYLmoduleG,"ast","<module>");
EXT(Yfun_value,"boot","fun-value");
EXT(YastYbinding_type_setter,"ast","binding-type-setter");
DEF(Yast_evalYDnul_loc_env,"ast-eval","$nul-loc-env");
EXT(YprotoScollectionsScollectionYany2Q,"proto/collections/collection","any2?");
EXT(YastYreference_frame_offset,"ast","reference-frame-offset");
EXT(YprotoScollectionsSstepYLstepG,"proto/collections/step","<step>");
EXT(YastYsignature_bindings,"ast","signature-bindings");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YprotoSmathYlognot,"proto/math","lognot");
EXT(YastYbinding_locative,"ast","binding-locative");
EXT(YLchrG,"boot","<chr>");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
EXT(YastYbinding_inferred_type,"ast","binding-inferred-type");
EXT(YprotoScollectionsScollectionYlow_elt_setter,"proto/collections/collection","low-elt-setter");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YprotoSportsYLportG,"proto/ports","<port>");
EXT(YPslot,"boot","%slot");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
EXT(YprotoScollectionsStableYcurrent_gc_state,"proto/collections/table","current-gc-state");
EXT(YastYLargumentsG,"ast","<arguments>");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(Ysig_names,"boot","sig-names");
EXT(YastYobjectify_signature,"ast","objectify-signature");
EXT(YprotoSmathYas_uppercase,"proto/math","as-uppercase");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YprotoSmathYash,"proto/math","ash");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YastYglobal_box_value,"ast","global-box-value");
EXT(YastYsignature_bindings_setter,"ast","signature-bindings-setter");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YastYLapplicationG,"ast","<application>");
EXT(YPsymbols,"boot","%symbols");
EXT(YprotoScollectionsScollectionYmap2,"proto/collections/collection","map2");
EXT(YLlogG,"boot","<log>");
EXT(YastYfind_binding,"ast","find-binding");
EXT(YprotoScollectionsStableYcase_insensitive_string_hash,"proto/collections/table","case-insensitive-string-hash");
EXT(YastYLassignmentG,"ast","<assignment>");
EXT(Yvec,"boot","vec");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YprotoSmathYposQ,"proto/math","pos?");
EXT(YprotoScollectionsSmapYLmapG,"proto/collections/map","<map>");
DEF(Yast_evalYenv_local_value_setter,"ast-eval","env-local-value-setter");
EXT(YLslotG,"boot","<slot>");
EXT(YprotoScollectionsSsequenceYpick,"proto/collections/sequence","pick");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YprotoScollectionsSsequenceYlast,"proto/collections/sequence","last");
EXT(YPPmacro,"boot","%%macro");
EXT(YastYfunction_index,"ast","function-index");
DEF(Yast_evalYLloc_envG,"ast-eval","<loc-env>");
EXT(YastYLreferenceG,"ast","<reference>");
EXT(Ynot,"boot","not");
EXT(YprotoScollectionsScollectionYanyQ,"proto/collections/collection","any?");
EXT(YastYfunction_binding,"ast","function-binding");
EXT(YastYbinding_inferred_type_setter,"ast","binding-inferred-type-setter");
EXT(YastYDproto_boot_module_name,"ast","$proto-boot-module-name");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
EXT(YprotoSmathYS,"proto/math","/");
EXT(Yfun_name,"boot","fun-name");
EXT(YruntimeYcurry,"runtime","curry");
EXT(Yclass_parents,"boot","class-parents");
EXT(YastYfunction_temporaries_setter,"ast","function-temporaries-setter");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YLanyG,"boot","<any>");
EXT(YprotoScollectionsSrangeYLrangeG,"proto/collections/range","<range>");
EXT(YastYfix_let_types,"ast","fix-let-types");
EXT(YastYfunction_debug_name,"ast","function-debug-name");
EXT(YprotoSportsYforce_output,"proto/ports","force-output");
EXT(YastYLast_methodG,"ast","<ast-method>");
EXT(YastYalternative_condition,"ast","alternative-condition");
EXT(YprotoScollectionsScollectionYlow_elt,"proto/collections/collection","low-elt");
EXT(YastYLmodule_loaderG,"ast","<module-loader>");
EXT(YastYapplication_arguments,"ast","application-arguments");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Ytype_class,"boot","type-class");
EXT(YprotoScollectionsSstringYstr,"proto/collections/string","str");
EXT(YprotoSmathYnumericQ,"proto/math","numeric?");
EXT(YLunionG,"boot","<union>");
EXT(YprotoSmathYfloorS,"proto/math","floor/");
EXT(YastYLraw_constantG,"ast","<raw-constant>");
EXT(YastYlocals_bindings,"ast","locals-bindings");
EXT(YastYbinding_info,"ast","binding-info");
EXT(YastYfree_implemented_foreign_bindings,"ast","free-implemented-foreign-bindings");
EXT(Yslot_value,"boot","slot-value");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YastYcompile_time_program,"ast","compile-time-program");
EXT(YastYapplication_binding,"ast","application-binding");
EXT(YprotoScollectionsSsequenceY3rd,"proto/collections/sequence","3rd");
EXT(YastYsignature_value_setter,"ast","signature-value-setter");
EXT(YprotoScollectionsSsequenceYfrom_below,"proto/collections/sequence","from-below");
EXT(YastYLsequentialG,"ast","<sequential>");
EXT(YastYboundQ_reference,"ast","bound?-reference");
EXT(YprotoScollectionsStableYtable_growth_factor,"proto/collections/table","table-growth-factor");
EXT(YastYsequentialize,"ast","sequentialize");
EXT(YprotoSportsYLinput_portG,"proto/ports","<input-port>");
EXT(YmacrosYmap,"macros","map");
EXT(YprotoSmathYlsh,"proto/math","lsh");
EXT(YprotoSportsYnewline,"proto/ports","newline");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YastYdo_named_static_global_bindings,"ast","do-named-static-global-bindings");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YprotoScollectionsSstepYfirst_then,"proto/collections/step","first-then");
EXT(YastYglobal_box_value_setter,"ast","global-box-value-setter");
EXT(YastYDproto_runtime_module_name,"ast","$proto-runtime-module-name");
EXT(YprotoScollectionsSlistYpush,"proto/collections/list","push");
EXT(YprotoScollectionsSlistYpop,"proto/collections/list","pop");
EXT(YastYsignature_naryQ_setter,"ast","signature-nary?-setter");
EXT(Yfab_sym,"boot","fab-sym");
EXT(YastYLglobal_boxG,"ast","<global-box>");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YmacrosYrevX,"macros","rev!");
EXT(YastYlocals_functions_setter,"ast","locals-functions-setter");
EXT(YastYfree_environment,"ast","free-environment");
EXT(YastYsignature_arity,"ast","signature-arity");
EXT(YastYbinding_info_setter,"ast","binding-info-setter");
EXT(YprotoScollectionsSrangeYfrom_above_by,"proto/collections/range","from-above-by");
EXT(YprotoSmathYmin,"proto/math","min");
EXT(YastYalternative_consequent,"ast","alternative-consequent");
EXT(YprotoScollectionsSrangeYfrom_by,"proto/collections/range","from-by");
EXT(YastYapplication_knownQ,"ast","application-known?");
EXT(YprotoScollectionsSassocYLassocsG,"proto/collections/assoc","<assocs>");
EXT(YprotoScollectionsScollectionYalter,"proto/collections/collection","alter");
EXT(YprotoScollectionsScollectionYcopy_state,"proto/collections/collection","copy-state");
EXT(YprotoScollectionsScollectionYelt_setter,"proto/collections/collection","elt-setter");
EXT(YastYfab_p2c_module,"ast","fab-p2c-module");
EXT(YastYbinding_module_name,"ast","binding-module-name");
EXT(YastYfix_let_types_setter,"ast","fix-let-types-setter");
DEF(Yast_evalYenv_local_reference_value_setter,"ast-eval","env-local-reference-value-setter");
EXT(Yunexec,"boot","unexec");
EXT(YastYfunction_data_refs_setter,"ast","function-data-refs-setter");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YwriteYwrite,"write","write");
EXT(YastYLast_primitiveG,"ast","<ast-primitive>");
DEF(Yast_evalYenv_global_binding_value_setter,"ast-eval","env-global-binding-value-setter");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YprotoScollectionsSsequenceY2nd,"proto/collections/sequence","2nd");
EXT(Ytup,"boot","tup");
EXT(YwriteYdisplay,"write","display");
EXT(YprotoSmathYceiling,"proto/math","ceiling");
EXT(YastYreport_undefined_global_bindings,"ast","report-undefined-global-bindings");
DEF(Yast_evalYexport_proto_method,"ast-eval","export-proto-method");
EXT(YprotoScollectionsStableYDpermanent_hash_state,"proto/collections/table","$permanent-hash-state");
EXT(YastYmodule_loader_module_type,"ast","module-loader-module-type");
EXT(YmacrosYnxt_state,"macros","nxt-state");
DEF(Yast_evalYenv_function,"ast-eval","env-function");
EXT(YastYfunction_index_setter,"ast","function-index-setter");
EXT(YprotoSmathYabs,"proto/math","abs");
EXT(YprotoSmathYceilingS,"proto/math","ceiling/");
EXT(YastYinstall_initial_bindings,"ast","install-initial-bindings");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YastYload_module,"ast","load-module");
EXT(YastYfunction_body_setter,"ast","function-body-setter");
EXT(YastYreference_called_functionQ,"ast","reference-called-function?");
DEF(Yast_evalYenv_runtime_value,"ast-eval","env-runtime-value");
EXT(YprotoSportsYclose_output_port,"proto/ports","close-output-port");
EXT(YastYLprogramG,"ast","<program>");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YprotoScollectionsScollectionYnow_key,"proto/collections/collection","now-key");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YprotoScollectionsSsequenceYsub_setter,"proto/collections/sequence","sub-setter");
EXT(YastYreference_called_functionQ_setter,"ast","reference-called-function?-setter");
EXT(YPwith_monitor,"boot","%with-monitor");
EXT(YastYbind_exit_main_fun,"ast","bind-exit-main-fun");
EXT(YprotoSportsYwrite_char,"proto/ports","write-char");
EXT(YastYfunction_naryQ,"ast","function-nary?");
EXT(YastYunwind_protect_protected_thunk,"ast","unwind-protect-protected-thunk");
EXT(YastYLglobal_assignmentG,"ast","<global-assignment>");
EXT(Yadd_slot,"boot","add-slot");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YastYapplication_function,"ast","application-function");
EXT(YastYmonitor_test,"ast","monitor-test");
EXT(YastYfunction_free,"ast","function-free");
EXT(YastYas_lst,"ast","as-lst");
EXT(YisaQ,"boot","isa?");
EXT(YastYmonitor_main_thunk,"ast","monitor-main-thunk");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YmacrosYnow_elt,"macros","now-elt");
EXT(YprotoSmathYNE,"proto/math","~=");
EXT(YastYlocals_functions,"ast","locals-functions");
EXT(YprotoScollectionsScollectionYdo2,"proto/collections/collection","do2");
EXT(YprotoScollectionsSsequenceY1st,"proto/collections/sequence","1st");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YprotoSmathYlogbitQ,"proto/math","logbit?");
DEF(Yast_evalYenv_global_binding_boundQ,"ast-eval","env-global-binding-bound?");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YmacrosYelt,"macros","elt");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YPdefine_method,"boot","%define-method");
EXT(YastYLast_functionG,"ast","<ast-function>");
EXT(YastYLruntime_referenceG,"ast","<runtime-reference>");
EXT(YastYLglobal_referenceG,"ast","<global-reference>");
EXT(YastYruntime_environment,"ast","runtime-environment");
EXT(YastYbinding_index,"ast","binding-index");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_20);
DEFLIT(lit_14);
DEFLIT(lit_80);
DEFLIT(lit_24);
DEFLIT(lit_9);
DEFLIT(lit_76);
DEFLIT(lit_73);
DEFLIT(lit_32);
DEFLIT(lit_67);
DEFLIT(lit_34);
DEFLIT(lit_3);
DEFLIT(lit_7);
DEFLIT(lit_79);
DEFLIT(lit_6);
DEFLIT(lit_26);
DEFLIT(lit_38);
DEFLIT(lit_70);
DEFLIT(lit_50);
DEFLIT(lit_46);
DEFLIT(lit_81);
DEFLIT(lit_53);
DEFLIT(lit_33);
DEFLIT(lit_28);
DEFLIT(lit_56);
DEFLIT(lit_29);
DEFLIT(lit_47);
DEFLIT(lit_74);
DEFLIT(lit_25);
DEFLIT(lit_30);
DEFLIT(lit_68);
DEFLIT(lit_12);
DEFLIT(lit_22);
DEFLIT(lit_43);
DEFLIT(lit_8);
DEFLIT(lit_21);
DEFLIT(lit_1);
DEFLIT(lit_2);
DEFLIT(lit_61);
DEFLIT(lit_60);
DEFLIT(lit_55);
DEFLIT(lit_57);
DEFLIT(lit_65);
DEFLIT(lit_58);
DEFLIT(lit_4);
DEFLIT(lit_17);
DEFLIT(lit_63);
DEFLIT(lit_5);
DEFLIT(lit_31);
DEFLIT(lit_40);
DEFLIT(lit_16);
DEFLIT(lit_18);
DEFLIT(lit_64);
DEFLIT(lit_41);
DEFLIT(lit_11);
DEFLIT(lit_52);
DEFLIT(lit_39);
DEFLIT(lit_62);
DEFLIT(lit_35);
DEFLIT(lit_13);
DEFLIT(lit_54);
DEFLIT(lit_42);
DEFLIT(lit_0);
DEFLIT(lit_27);
DEFLIT(lit_77);
DEFLIT(lit_51);
DEFLIT(lit_66);
DEFLIT(lit_15);
DEFLIT(lit_10);
DEFLIT(lit_75);
DEFLIT(lit_23);
DEFLIT(lit_37);
DEFLIT(lit_48);
DEFLIT(lit_71);
DEFLIT(lit_72);
DEFLIT(lit_45);
DEFLIT(lit_36);
DEFLIT(lit_19);
DEFLIT(lit_78);
DEFLIT(lit_44);
DEFLIT(lit_59);
DEFLIT(lit_69);
DEFLIT(lit_49);

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
LOCFOR(fun_x_1342_31);
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
  P boxF1620;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(YastYbinding_global_box),b_);
  boxF1620 = T1;
  if (boxF1620 != YPfalse) {
    T3 = CALL1(1,VARREF(YastYglobal_box_value),boxF1620);
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
  P boxF1621;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(value_, 0);
  ARG(b_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYbinding_global_box),b_);
  boxF1621 = T1;
  boxF1621 = BOXFAB(boxF1621);
  T4 = BOXVAL(boxF1621);
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T7 = CALL3(1,VARREF(YPisa),VARREF(YastYLglobal_boxG),Ynil,Ynil);
    T6 = CALL2(1,VARREF(YastYbinding_global_box_setter),T7,b_);
    T5 = BOXVAL(boxF1621) = T6;
  } else {
  }
  T9 = BOXVAL(boxF1621);
  T8 = CALL2(1,VARREF(YastYglobal_box_value_setter),value_,T9);
  T0 = T8;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_global_binding_boundQ_2) {
  P b_;
  P boxF1622;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(YastYbinding_global_box),b_);
  boxF1622 = T1;
  if (boxF1622 != YPfalse) {
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
  P valuesF1623;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(env_, 0);
  ARG(function_, 1);
  ARG(names_, 2);
  ARG(args_, 3);
loop:
  T1 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLvecG),args_);
  valuesF1623 = T1;
  T6 = (P)YPpair(VARREF(Yast_evalYenv_names),Ynil);
  T5 = (P)YPpair(VARREF(Yast_evalYenv_values),T6);
  T4 = (P)YPpair(VARREF(Yast_evalYenv_function),T5);
  T3 = (P)YPpair(VARREF(Yast_evalYenv_parent),T4);
  T10 = (P)YPpair(names_,Ynil);
  T9 = (P)YPpair(valuesF1623,T10);
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
  T1 = CALL2(1,VARREF(YprotoSmathYE),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Yast_evalYenv_values),env_);
    T2 = CALL2(1,VARREF(YmacrosYelt),T3,j_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yast_evalYenv_parent),env_);
    T6 = CALL2(1,VARREF(YprotoSmathY_),i_,YPint((P)1));
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
  T1 = CALL2(1,VARREF(YprotoSmathYE),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Yast_evalYenv_values),env_);
    T2 = CALL3(1,VARREF(YprotoScollectionsScollectionYelt_setter),v_,T3,j_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yast_evalYenv_parent),env_);
    T6 = CALL2(1,VARREF(YprotoSmathY_),i_,YPint((P)1));
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
      T11 = CALL2(1,VARREF(YprotoSmathYA),i_,YPint((P)1));
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
  P loopF1624;
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
    loopF1624 = T3;
    FUNINIT(loopF1624, 3,env_,name_,loopF1624);
    T5 = CALL1(1,VARREF(Yast_evalYenv_names),env_);
    T4 = CALL2(0,loopF1624,T5,YPint((P)0));
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
      T7 = CALL3(1,VARREF(YprotoScollectionsScollectionYelt_setter),FREEREF(0),T8,i_);
      T4 = T7;
    } else {
      T10 = CALL1(1,VARREF(Ytail),names_);
      T11 = CALL2(1,VARREF(YprotoSmathYA),i_,YPint((P)1));
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
  P loopF1625;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(v_, 0);
  ARG(env_, 1);
  ARG(name_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_22,4);
  loopF1625 = T1;
  FUNINIT(loopF1625, 4,v_,env_,name_,loopF1625);
  T3 = CALL1(1,VARREF(Yast_evalYenv_names),env_);
  T2 = CALL2(0,loopF1625,T3,YPint((P)0));
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
  P typeF1627;
  P specF1626;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(res_, 0);
  ARG(specs_, 1);
  ARG(i_, 2);
loop:
  T1 = CALL2(1,VARREF(YprotoSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YmacrosYrevX),res_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),specs_);
    specF1626 = T4;
    if (specF1626 != YPfalse) {
      T7 = CALL2(1,VARREF(Yast_evalYast_eval),specF1626,FREEREF(1));
      T6 = T7;
    } else {
      T6 = VARREF(YLanyG);
    }
    typeF1627 = T6;
    T9 = CALL2(1,VARREF(YmacrosYpair),typeF1627,res_);
    T10 = CALL1(1,VARREF(Ytail),specs_);
    T11 = CALL2(1,VARREF(YprotoSmathYA),i_,YPint((P)1));
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
  P loopF1629;
  P nreqF1628;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(specs_, 0);
  ARG(naryQ_, 1);
  ARG(env_, 2);
loop:
  if (naryQ_ != YPfalse) {
    T3 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),specs_);
    T2 = CALL2(1,VARREF(YprotoSmathY_),T3,YPint((P)1));
    T1 = T2;
  } else {
    T4 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),specs_);
    T1 = T4;
  }
  nreqF1628 = T1;
  T6 = FUNSHELL(1,fun_loop_28,3);
  loopF1629 = T6;
  FUNINIT(loopF1629, 3,nreqF1628,env_,loopF1629);
  T7 = CALL3(0,loopF1629,Ynil,specs_,YPint((P)0));
  T5 = T7;
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yast_evalYarrange_arguments) {
  P f_,naryQ_,arity_,args_;
  P countF1630;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(naryQ_, 1);
  ARG(arity_, 2);
  ARG(args_, 3);
loop:
  T1 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),args_);
  countF1630 = T1;
  if (naryQ_ != YPfalse) {
    T4 = CALL2(1,VARREF(YprotoSmathYL),countF1630,arity_);
    if (T4 != YPfalse) {
      T6 = CALL1(1,VARREF(Yast_evalYas_fun_name),f_);
      T5 = CALLN(1,VARREF(Yerror),4,LITREF(lit_45),T6,args_,arity_);
      T3 = T5;
    } else {
      T8 = CALL3(1,VARREF(YprotoScollectionsSsequenceYsub),args_,YPint((P)0),arity_);
      T10 = CALL3(1,VARREF(YprotoScollectionsSsequenceYsub),args_,arity_,countF1630);
      T9 = CALL1(1,VARREF(Ylst),T10);
      T7 = CALL2(1,VARREF(YprotoScollectionsSsequenceYcat2),T8,T9);
      T3 = T7;
    }
    T2 = T3;
  } else {
    T12 = CALL2(1,VARREF(YprotoSmathYNEE),countF1630,arity_);
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

FUNCODEDEF(fun_x_1342_31) {
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
  P x_1341F1645;
  P x_1341F1644;
  P x_1341F1643;
  P x_1341F1642;
  P x_1341F1641;
  P x_1341F1640;
  P x_1341F1639;
  P bodyF1638;
  P namesF1637;
  P arityF1636;
  P naryQF1635;
  P fF1634;
  P envF1633;
  P x_1341F1632;
  P x_1342F1631;
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
  T1 = FUNSHELL(0,fun_x_1342_31,1);
  x_1342F1631 = T1;
  FUNINIT(x_1342F1631, 1,return_);
  x_1341F1632 = FREEREF(0);
  envF1633 = YPfalse;
  envF1633 = BOXFAB(envF1633);
  fF1634 = YPfalse;
  fF1634 = BOXFAB(fF1634);
  naryQF1635 = YPfalse;
  naryQF1635 = BOXFAB(naryQF1635);
  arityF1636 = YPfalse;
  arityF1636 = BOXFAB(arityF1636);
  namesF1637 = YPfalse;
  namesF1637 = BOXFAB(namesF1637);
  bodyF1638 = YPfalse;
  bodyF1638 = BOXFAB(bodyF1638);
  T15 = CALL2(1,VARREF(YisaQ),x_1341F1632,VARREF(YLlstG));
  if (T15 != YPfalse) {
    T17 = CALL3(1,VARREF(YmacrosYmatch_atom),x_1341F1632,LITREF(lit_51),x_1342F1631);
    x_1341F1639 = T17;
    T19 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1341F1639,x_1342F1631);
    BOXVAL(envF1633) = T19;
    T20 = CALL1(1,VARREF(Ytail),x_1341F1639);
    x_1341F1640 = T20;
    T22 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1341F1640,x_1342F1631);
    BOXVAL(fF1634) = T22;
    T23 = CALL1(1,VARREF(Ytail),x_1341F1640);
    x_1341F1641 = T23;
    T25 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1341F1641,x_1342F1631);
    BOXVAL(naryQF1635) = T25;
    T26 = CALL1(1,VARREF(Ytail),x_1341F1641);
    x_1341F1642 = T26;
    T28 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1341F1642,x_1342F1631);
    BOXVAL(arityF1636) = T28;
    T29 = CALL1(1,VARREF(Ytail),x_1341F1642);
    x_1341F1643 = T29;
    T31 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1341F1643,x_1342F1631);
    BOXVAL(namesF1637) = T31;
    T32 = CALL1(1,VARREF(Ytail),x_1341F1643);
    x_1341F1644 = T32;
    T34 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_1341F1644,x_1342F1631);
    BOXVAL(bodyF1638) = T34;
    T35 = CALL1(1,VARREF(Ytail),x_1341F1644);
    x_1341F1645 = T35;
    T36 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_1341F1645,x_1342F1631);
    T33 = T36;
    T30 = T33;
    T27 = T30;
    T24 = T27;
    T21 = T24;
    T18 = T21;
    T16 = T18;
  } else {
    T37 = CALL2(1,x_1342F1631,LITREF(lit_52),x_1341F1632);
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
  T78 = BOXVAL(envF1633);
  T77 = CALL1(1,VARREF(Ylst),T78);
  T80 = BOXVAL(fF1634);
  T79 = CALL1(1,VARREF(Ylst),T80);
  T83 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T85 = BOXVAL(namesF1637);
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
  T104 = BOXVAL(bodyF1638);
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
  P frameF1648;
  P nmsF1647;
  P argsF1646;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  NARGS(arg_vector_, 0);
loop:
  T2 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLlstG),arg_vector_);
  T1 = CALLN(1,VARREF(Yast_evalYarrange_arguments),4,FREEREF(0),FREEREF(1),FREEREF(2),T2);
  argsF1646 = T1;
  T4 = (P)YPnext_methods();
  nmsF1647 = T4;
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T7 = CALL2(1,VARREF(YprotoScollectionsSsequenceYcat2),FREEREF(4),T8);
  T10 = CALL1(1,VARREF(Ylst),nmsF1647);
  T9 = CALL2(1,VARREF(YprotoScollectionsSsequenceYcat2),argsF1646,T10);
  T6 = CALLN(1,VARREF(Yast_evalYenv_frameX),4,FREEREF(3),FREEREF(0),T7,T9);
  frameF1648 = T6;
  T11 = CALL1(1,FREEREF(5),frameF1648);
  T5 = T11;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_export_proto_method_41) {
  P f_,names_,specs_,naryQ_,value_,body_,env_;
  P efunF1650;
  P arityF1649;
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
    T3 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),specs_);
    T2 = CALL2(1,VARREF(YprotoSmathY_),T3,YPint((P)1));
    T1 = T2;
  } else {
    T4 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),specs_);
    T1 = T4;
  }
  arityF1649 = T1;
  T6 = FUNFAB(fun_40,6,f_,naryQ_,arityF1649,env_,names_,body_);
  efunF1650 = T6;
  T7 = CALL1(1,VARREF(Yast_evalYas_fun_name),f_);
  CALL2(1,VARREF(Yfun_name_setter),T7,efunF1650);
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
  T19 = (P)YPpair(arityF1649,T20);
  T18 = (P)YPpair(naryQ_,T19);
  T16 = (P)YPpair(T17,T18);
  T15 = (P)YPpair(names_,T16);
  T8 = CALL3(1,VARREF(YPisa),VARREF(YLsigG),T9,T15);
  CALL2(1,VARREF(Yfun_sig_setter),T8,efunF1650);
  T5 = efunF1650;
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
  P evalF1652;
  P paramsF1651;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYfunction_bindings),e_);
  paramsF1651 = T1;
  T3 = FUNFAB(fun_42,1,e_);
  evalF1652 = T3;
  T5 = CALL2(1,VARREF(YmacrosYmap),VARREF(YastYbinding_name),paramsF1651);
  T6 = CALL2(1,VARREF(YmacrosYmap),VARREF(YastYbinding_type),paramsF1651);
  T7 = CALL1(1,VARREF(YastYfunction_naryQ),e_);
  T8 = CALL1(1,VARREF(YastYfunction_value),e_);
  T4 = CALLN(1,VARREF(Yast_evalYexport_proto_method),7,e_,T5,T6,T7,T8,evalF1652,env_);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_44) {
  P e_,env_;
  P specsF1656;
  P namesF1655;
  P naryQF1654;
  P paramsF1653;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYfunction_bindings),e_);
  paramsF1653 = T1;
  T3 = CALL1(1,VARREF(YastYfunction_naryQ),e_);
  naryQF1654 = T3;
  T5 = CALL2(1,VARREF(YmacrosYmap),VARREF(YastYbinding_name),paramsF1653);
  namesF1655 = T5;
  T8 = CALL2(1,VARREF(YmacrosYmap),VARREF(YastYbinding_type),paramsF1653);
  T7 = CALL3(1,VARREF(Yast_evalYast_eval_specs),T8,naryQF1654,env_);
  specsF1656 = T7;
  T10 = CALL1(1,VARREF(Yast_evalYas_fun_name),e_);
  T9 = CALLN(1,VARREF(Yfab_gen),5,T10,namesF1655,specsF1656,naryQF1654,Ynil);
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
  P x_1343F1657;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(binding_, 1);
  ARG(env_, 2);
loop:
  T1 = CALL1(1,VARREF(YastYbinding_kind),binding_);
  x_1343F1657 = T1;
  T3 = CALL2(1,VARREF(YmacrosYEE),x_1343F1657,LITREF(lit_74));
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
  P valueF1658;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YastYassignment_form),e_);
  T1 = CALL2(1,VARREF(Yast_evalYast_eval),T2,env_);
  valueF1658 = T1;
  T4 = CALL1(1,VARREF(YastYassignment_binding),e_);
  T3 = CALL2(1,VARREF(Yast_evalYenv_global_binding_value_setter),valueF1658,T4);
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
  P valueF1659;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YastYassignment_form),e_);
  T1 = CALL2(1,VARREF(Yast_evalYast_eval),T2,env_);
  valueF1659 = T1;
  T5 = CALL1(1,VARREF(YastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(YastYbinding_locative),T5);
  T3 = CALL2(1,VARREF(Yast_evalYenv_runtime_value_setter),valueF1659,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_56) {
  P e_,env_;
  P valueF1660;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YastYassignment_form),e_);
  T1 = CALL2(1,VARREF(Yast_evalYast_eval),T2,env_);
  valueF1660 = T1;
  T4 = CALL1(1,VARREF(YastYassignment_reference),e_);
  T3 = CALL3(1,VARREF(Yast_evalYenv_local_reference_value_setter),valueF1660,env_,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_define_bindingX_57) {
  P b_,v_;
  P x_1345F1662;
  P x_1344F1661;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(b_, 0);
  ARG(v_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYbinding_kind),b_);
  x_1344F1661 = T1;
  T3 = CALL2(1,VARREF(YmacrosYEE),x_1344F1661,LITREF(lit_76));
  if (T3 != YPfalse) {
    T5 = CALL1(1,VARREF(YastYbinding_locative),b_);
    T4 = CALL2(1,VARREF(Yast_evalYenv_runtime_value_setter),v_,T5);
    T2 = T4;
  } else {
    x_1345F1662 = x_1344F1661;
    T8 = CALL2(1,VARREF(YmacrosYEE),x_1345F1662,LITREF(lit_74));
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
  P valueF1663;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YastYassignment_form),e_);
  T1 = CALL2(1,VARREF(Yast_evalYast_eval),T2,env_);
  valueF1663 = T1;
  T3 = CALL1(1,VARREF(YastYassignment_binding),e_);
  CALL2(1,VARREF(Yast_evalYenv_define_bindingX),T3,valueF1663);
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
  P valF1665;
  P nxtF1664;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),e_);
  nxtF1664 = T1;
  T4 = CALL1(1,VARREF(Yhead),e_);
  T3 = CALL2(1,VARREF(Yast_evalYast_eval),T4,FREEREF(0));
  valF1665 = T3;
  T6 = CALL1(1,VARREF(YmacrosYemptyQ),nxtF1664);
  if (T6 != YPfalse) {
    T5 = valF1665;
  } else {
    a1 = nxtF1664;
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
  P evalF1666;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_eval_60,2);
  evalF1666 = T1;
  FUNINIT(evalF1666, 2,env_,evalF1666);
  T2 = CALL1(0,evalF1666,e_);
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
    T2 = CALL1(1,VARREF(YmacrosYrevX),res_);
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
  P evalF1667;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_eval_62,2);
  evalF1667 = T1;
  FUNINIT(evalF1667, 2,evalF1667,env_);
  T2 = CALL2(0,evalF1667,Ynil,e_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_64) {
  P e_,env_;
  P argsF1669;
  P fF1668;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YastYapplication_function),e_);
  T1 = CALL2(1,VARREF(Yast_evalYast_eval),T2,env_);
  fF1668 = T1;
  T5 = CALL1(1,VARREF(YastYapplication_arguments),e_);
  T4 = CALL2(1,VARREF(Yast_evalYast_eval),T5,env_);
  argsF1669 = T4;
  T6 = CALL3(1,VARREF(YmacrosYnapply),fF1668,YPfalse,argsF1669);
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_65) {
  P e_,env_;
  P argsF1673;
  P fF1672;
  P nmsF1671;
  P bF1670;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYapplication_binding),e_);
  bF1670 = T1;
  T4 = CALL1(1,VARREF(YastYbinding_name),bF1670);
  T3 = CALL2(1,VARREF(YmacrosYEE),T4,LITREF(lit_60));
  if (T3 != YPfalse) {
    T6 = CALL2(1,VARREF(Yast_evalYenv_binding_value),env_,LITREF(lit_60));
    nmsF1671 = T6;
    T8 = CALL2(1,VARREF(YmacrosYEE),nmsF1671,VARREF(Ynul));
    if (T8 != YPfalse) {
      T7 = YPfalse;
    } else {
      T7 = nmsF1671;
    }
    T5 = T7;
    T2 = T5;
  } else {
    T10 = CALL1(1,VARREF(YastYbinding_info),bF1670);
    fF1672 = T10;
    T13 = CALL1(1,VARREF(YastYapplication_arguments),e_);
    T12 = CALL2(1,VARREF(Yast_evalYast_eval),T13,env_);
    argsF1673 = T12;
    T14 = CALL3(1,VARREF(YmacrosYnapply),fF1672,YPfalse,argsF1673);
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
  P nenvF1675;
  P argsF1674;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YastYfix_let_arguments),e_);
  T1 = CALL2(1,VARREF(Yast_evalYast_eval),T2,env_);
  argsF1674 = T1;
  T6 = CALL1(1,VARREF(YastYfix_let_bindings),e_);
  T5 = CALL2(1,VARREF(YmacrosYmap),VARREF(YastYbinding_name),T6);
  T4 = CALLN(1,VARREF(Yast_evalYenv_frameX),4,env_,YPfalse,T5,argsF1674);
  nenvF1675 = T4;
  T8 = CALL1(1,VARREF(YastYfix_let_body),e_);
  T7 = CALL2(1,VARREF(Yast_evalYast_eval),T8,nenvF1675);
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
  P new_envF1677;
  P bindingsF1676;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYlocals_bindings),e_);
  bindingsF1676 = T1;
  T4 = CALL2(1,VARREF(YmacrosYmap),VARREF(YastYbinding_name),bindingsF1676);
  T6 = CALL1(1,VARREF(YruntimeYalways),VARREF(Ynul));
  T5 = CALL2(1,VARREF(YmacrosYmap),T6,bindingsF1676);
  T3 = CALLN(1,VARREF(Yast_evalYenv_frameX),4,env_,YPfalse,T4,T5);
  new_envF1677 = T3;
  T7 = FUNFAB(fun_67,1,new_envF1677);
  T8 = CALL2(1,VARREF(YmacrosYmap),VARREF(YastYbinding_name),bindingsF1676);
  T10 = CALL2(1,VARREF(YruntimeYrcurry),VARREF(Yast_evalYast_eval),new_envF1677);
  T11 = CALL1(1,VARREF(YastYlocals_functions),e_);
  T9 = CALL2(1,VARREF(YmacrosYmap),T10,T11);
  CALL3(1,VARREF(YprotoScollectionsScollectionYdo2),T7,T8,T9);
  T13 = CALL1(1,VARREF(YastYlocals_body),e_);
  T12 = CALL2(1,VARREF(Yast_evalYast_eval),T13,new_envF1677);
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
  P exitF1679;
  P rprocF1678;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNFAB(fun_69,1,return_);
  rprocF1678 = T1;
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T5 = CALL1(1,VARREF(Ylst),YPfalse);
  T3 = CALLN(1,VARREF(Yast_evalYexport_proto_method),7,rprocF1678,T4,T5,YPfalse,YPfalse,rprocF1678,FREEREF(0));
  exitF1679 = T3;
  T8 = CALL1(1,VARREF(YastYbind_exit_main_fun),FREEREF(1));
  T7 = CALL2(1,VARREF(Yast_evalYast_eval),T8,FREEREF(0));
  T6 = CALL1(1,T7,exitF1679);
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
  T0 = CALLN(1,VARREF(YPwith_monitor),5,T1,T3,T5,T7,T9);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YastYinit_environment_for_eval) {
  P env_;
  P bF1680;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  CALLN(1,VARREF(YastYast_define_binding),4,env_,LITREF(lit_60),YPfalse,LITREF(lit_80));
  T1 = CALLN(1,VARREF(YastYast_define_binding),4,env_,LITREF(lit_81),YPfalse,LITREF(lit_74));
  bF1680 = T1;
  T2 = CALL2(1,VARREF(Yast_evalYenv_global_binding_value_setter),VARREF(YmacrosYpair),bF1680);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P Yast_evalYPdefine_binding(P raw_mod_,P raw_nam_) {
  P eF1681;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T2 = (P)YPPsym(raw_mod_);
  T1 = CALL1(1,VARREF(YastYunchecked_runtime_environment),T2);
  eF1681 = T1;
  T4 = (P)YPPsym(raw_nam_);
  T3 = CALLN(1,VARREF(YastYast_define_binding),4,eF1681,T4,YPfalse,LITREF(lit_74));
  T0 = T3;
  return T0;
}

P Yast_evalYPlookup_binding(P raw_mod_,P raw_nam_) {
  P eF1682;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T2 = (P)YPPsym(raw_mod_);
  T1 = CALL1(1,VARREF(YastYunchecked_runtime_environment),T2);
  eF1682 = T1;
  T4 = (P)YPPsym(raw_nam_);
  T3 = CALL2(1,VARREF(YastYfind_binding),T4,eF1682);
  T0 = T3;
  return T0;
}

P Yast_evalYPensure_binding(P raw_mod_,P raw_nam_) {
  P tmpF1683;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T1 = (P)Yast_evalYPlookup_binding(raw_mod_,raw_nam_);
  tmpF1683 = T1;
  if (tmpF1683 != YPfalse) {
    T2 = tmpF1683;
  } else {
    T3 = (P)Yast_evalYPdefine_binding(raw_mod_,raw_nam_);
    T2 = T3;
  }
  T0 = T2;
  return T0;
}

P Yast_evalYPdlvar_binding(P dlvar_) {
  P bF1684;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T1 = (P)Yast_evalYPdlvar(dlvar_);
  bF1684 = T1;
  T4 = (P)YPiu(YPint((P)0));
  T3 = (P)YOEE(bF1684,T4);
  if (T3 != YPfalse) {
    T7 = (P)Yast_evalYPdlvar_mod(dlvar_);
    T8 = (P)Yast_evalYPdlvar_nam(dlvar_);
    T6 = (P)Yast_evalYPensure_binding(T7,T8);
    T5 = (P)Yast_evalYPdlvar_setter(T6,dlvar_);
    T2 = T5;
  } else {
    T2 = bF1684;
  }
  T0 = T2;
  return T0;
}

P Yast_evalYPbinding_boundQ(P dlvar_) {
  P tmpF1686;
  P bF1685;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T2 = (P)Yast_evalYPdlvar_mod(dlvar_);
  T3 = (P)Yast_evalYPdlvar_nam(dlvar_);
  T1 = (P)Yast_evalYPlookup_binding(T2,T3);
  bF1685 = T1;
  tmpF1686 = bF1685;
  if (tmpF1686 != YPfalse) {
    T6 = CALL1(1,VARREF(YastYbinding_info),bF1685);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T4 = T5;
  T0 = T4;
  return T0;
}

P Yast_evalYPbinding_value(P dlvar_) {
  P bindingF1687;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T1 = (P)Yast_evalYPdlvar_binding(dlvar_);
  bindingF1687 = T1;
  T4 = CALL1(1,VARREF(YastYbinding_kind),bindingF1687);
  T3 = CALL2(1,VARREF(YmacrosYEE),T4,LITREF(lit_76));
  if (T3 != YPfalse) {
    T6 = CALL1(1,VARREF(YastYbinding_locative),bindingF1687);
    T5 = CALL1(1,VARREF(Yast_evalYenv_runtime_value),T6);
    T2 = T5;
  } else {
    T7 = CALL1(1,VARREF(Yast_evalYenv_global_binding_value),bindingF1687);
    T2 = T7;
  }
  T0 = T2;
  return T0;
}

P Yast_evalYPbinding_value_setter(P val_,P dlvar_) {
  P bindingF1688;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T1 = (P)Yast_evalYPdlvar_binding(dlvar_);
  bindingF1688 = T1;
  T4 = CALL1(1,VARREF(YastYbinding_kind),bindingF1688);
  T3 = CALL2(1,VARREF(YmacrosYEE),T4,LITREF(lit_76));
  if (T3 != YPfalse) {
    T6 = CALL1(1,VARREF(YastYbinding_locative),bindingF1688);
    T5 = CALL2(1,VARREF(Yast_evalYenv_runtime_value_setter),val_,T6);
    T2 = T5;
  } else {
    T7 = CALL2(1,VARREF(Yast_evalYenv_global_binding_value_setter),val_,bindingF1688);
    T2 = T7;
  }
  T0 = T2;
  return T0;
}

P Yast_evalY___main_0___() {
  P T275,T274,T273,T272,T271,T270,T269,T268,T267,T266,T265,T264,T263,T262,T261,T260;
  P T259,T258,T257,T256,T255,T254,T253,T252,T251,T250,T249,T248,T247,T246,T245,T244;
  P T243,T242,T241,T240,T239,T238,T237,T236,T235,T234,T233,T232,T231,T230,T229,T228;
  P T227,T226,T225,T224,T223,T222,T221,T220,T219,T218,T217,T216,T215,T214,T213,T212;
  P T211,T210,T209,T208,T207,T206,T205,T204,T203,T202,T201,T200,T199,T198,T197,T196;
  P T195,T194,T193,T192,T191,T190,T189,T188,T187,T186,T185,T184,T183,T182,T181,T180;
  P T179,T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168,T167,T166,T165,T164;
  P T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152,T151,T150,T149,T148;
  P T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134,T133,T132;
  P T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116;
  P T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100;
  P T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84;
  P T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68;
  P T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52;
  P T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36;
  P T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
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
  T131 = CALL2(1,VARREF(YprotoScollectionsScollectionYfab),VARREF(YprotoScollectionsSbufferYLbufG),YPint((P)0));
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
  lit_49 = YPPsym((P)"x-1342");
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
  fun_x_1342_31 = YPmet(FUNCODEREF(fun_x_1342_31),LITREF(lit_49),T136,ENVNUL,PNUL,YPfalse);
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
  T270 = YPsig(YPPlist(2,LITREF(lit_41),LITREF(lit_25)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T269 = fun_eval_62 = YPmet(FUNCODEREF(fun_eval_62),LITREF(lit_78),T270,ENVNUL,PNUL,YPfalse);
  T268 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YastYLargumentsG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T267 = fun_ast_eval_63 = YPmet(FUNCODEREF(fun_ast_eval_63),LITREF(lit_36),T268,ENVNUL,PNUL,YPfalse);
  T274 = BOUNDP(Yast_evalYast_eval);
  if (T274 != YPfalse) {
    T273 = VARREF(Yast_evalYast_eval);
  } else {
    T273 = YPfalse;
  }
  T275 = fun_ast_eval_63;
  T272 = CALL2(1,VARREF(YPdefine_method),T273,T275);
  T271 = VARSET(Yast_evalYast_eval,T272);
  T266 = T271;
  return T266;
}

P Yast_evalY___main_1___() {
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T0 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YastYLregular_applicationG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_64 = YPmet(FUNCODEREF(fun_ast_eval_64),LITREF(lit_36),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(Yast_evalYast_eval);
  if (T3 != YPfalse) {
    T2 = VARREF(Yast_evalYast_eval);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_ast_eval_64;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(Yast_evalYast_eval,T1);
  T5 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YastYLpredefined_applicationG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_65 = YPmet(FUNCODEREF(fun_ast_eval_65),LITREF(lit_36),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(Yast_evalYast_eval);
  if (T8 != YPfalse) {
    T7 = VARREF(Yast_evalYast_eval);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_ast_eval_65;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(Yast_evalYast_eval,T6);
  T10 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YastYLfix_letG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_66 = YPmet(FUNCODEREF(fun_ast_eval_66),LITREF(lit_36),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(Yast_evalYast_eval);
  if (T13 != YPfalse) {
    T12 = VARREF(Yast_evalYast_eval);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_ast_eval_66;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(Yast_evalYast_eval,T11);
  T16 = YPsig(YPPlist(2,LITREF(lit_31),LITREF(lit_4)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_67 = YPmet(FUNCODEREF(fun_67),YPfalse,T16,ENVNUL,PNUL,YPfalse);
  T15 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YastYLlocalsG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_68 = YPmet(FUNCODEREF(fun_ast_eval_68),LITREF(lit_36),T15,ENVNUL,PNUL,YPfalse);
  T19 = BOUNDP(Yast_evalYast_eval);
  if (T19 != YPfalse) {
    T18 = VARREF(Yast_evalYast_eval);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_ast_eval_68;
  T17 = CALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(Yast_evalYast_eval,T17);
  T23 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T23,ENVNUL,PNUL,YPfalse);
  T22 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T22,ENVNUL,PNUL,YPfalse);
  T21 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YastYLbind_exitG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_71 = YPmet(FUNCODEREF(fun_ast_eval_71),LITREF(lit_36),T21,ENVNUL,PNUL,YPfalse);
  T26 = BOUNDP(Yast_evalYast_eval);
  if (T26 != YPfalse) {
    T25 = VARREF(Yast_evalYast_eval);
  } else {
    T25 = YPfalse;
  }
  T27 = fun_ast_eval_71;
  T24 = CALL2(1,VARREF(YPdefine_method),T25,T27);
  VARSET(Yast_evalYast_eval,T24);
  T30 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T29,ENVNUL,PNUL,YPfalse);
  T28 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YastYLunwind_protectG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_74 = YPmet(FUNCODEREF(fun_ast_eval_74),LITREF(lit_36),T28,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(Yast_evalYast_eval);
  if (T33 != YPfalse) {
    T32 = VARREF(Yast_evalYast_eval);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_ast_eval_74;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(Yast_evalYast_eval,T31);
  T35 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YastYLmonitorG),VARREF(Yast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_75 = YPmet(FUNCODEREF(fun_ast_eval_75),LITREF(lit_36),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(Yast_evalYast_eval);
  if (T38 != YPfalse) {
    T37 = VARREF(Yast_evalYast_eval);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_ast_eval_75;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(Yast_evalYast_eval,T36);
  lit_79 = YPPsym((P)"init-environment-for-eval");
  lit_80 = YPPsym((P)"predefined");
  lit_81 = YPPsym((P)"%pair");
  T40 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YastYinit_environment_for_eval = YPmet(FUNCODEREF(YastYinit_environment_for_eval),LITREF(lit_79),T40,ENVNUL,PNUL,YPfalse);
  T41 = YastYinit_environment_for_eval;
  VARSET(YastYinit_environment_for_eval,T41);
  T42 = YPfalse;
  return T42;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_runtime;
extern MODULE_INFO module_info_proto;
extern MODULE_INFO module_info_ast;
extern MODULE_INFO module_info_protoScollectionsSassoc;
extern MODULE_INFO module_info_protoSmath;
extern MODULE_INFO module_info_protoScollectionsSstring;
extern MODULE_INFO module_info_protoScollectionsScollection;
extern MODULE_INFO module_info_protoScollectionsSlist;
extern MODULE_INFO module_info_protoScollectionsStable;
extern MODULE_INFO module_info_protoScollectionsSrange;
extern MODULE_INFO module_info_protoSports;
extern MODULE_INFO module_info_protoScollectionsSsequence;
extern MODULE_INFO module_info_read;
extern MODULE_INFO module_info_protoStypes;
extern MODULE_INFO module_info_protoScollectionsSbuffer;
extern MODULE_INFO module_info_protoScollectionsSmap;
extern MODULE_INFO module_info_write;
extern MODULE_INFO module_info_protoScollectionsSstep;
extern MODULE_INFO module_info_syntax;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {&module_info_macros},
  {&module_info_runtime},
  {&module_info_proto},
  {&module_info_ast},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"type-error", &module_info_boot, "type-error"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"identity", &module_info_runtime, "identity"},
  {"var-type", &module_info_macros, "var-type"},
  {"*gensym-counter*", &module_info_runtime, "*gensym-counter*"},
  {"<passive-program>", &module_info_ast, "<passive-program>"},
  {"assocs-test", &module_info_protoScollectionsSassoc, "assocs-test"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"zero?", &module_info_protoSmath, "zero?"},
  {"*print-base*", &module_info_protoScollectionsSstring, "*print-base*"},
  {"fill", &module_info_protoScollectionsScollection, "fill"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"=", &module_info_protoSmath, "="},
  {"nul?", &module_info_protoSmath, "nul?"},
  {"<list>", &module_info_protoScollectionsSlist, "<list>"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"load-in", &module_info_ast, "load-in"},
  {"signature-nary?", &module_info_ast, "signature-nary?"},
  {"dv", &module_info_boot, "dv"},
  {"%f=", &module_info_boot, "%f="},
  {"fin-state?", &module_info_macros, "fin-state?"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"always", &module_info_runtime, "always"},
  {"uppercase?", &module_info_protoSmath, "uppercase?"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"ast-define-binding", &module_info_ast, "ast-define-binding"},
  {"unwind-protect-cleanup-thunk", &module_info_ast, "unwind-protect-cleanup-thunk"},
  {"%iu", &module_info_boot, "%iu"},
  {"table-shrink-threshold", &module_info_protoScollectionsStable, "table-shrink-threshold"},
  {"from", &module_info_protoScollectionsSrange, "from"},
  {"all2?", &module_info_protoScollectionsScollection, "all2?"},
  {"<locals>", &module_info_ast, "<locals>"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"now-elt-setter", &module_info_protoScollectionsScollection, "now-elt-setter"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"binding-name", &module_info_ast, "binding-name"},
  {"signature-specs-setter", &module_info_ast, "signature-specs-setter"},
  {"use", &module_info_boot, "use"},
  {"%lu", &module_info_boot, "%lu"},
  {"round/", &module_info_protoSmath, "round/"},
  {"to-str", &module_info_protoSmath, "to-str"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"type-object", &module_info_boot, "type-object"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"ini-state", &module_info_macros, "ini-state"},
  {"<class>", &module_info_boot, "<class>"},
  {"len", &module_info_protoScollectionsScollection, "len"},
  {"dp", &module_info_boot, "dp"},
  {"gensym", &module_info_macros, "gensym"},
  {"<output-port>", &module_info_protoSports, "<output-port>"},
  {"binding-index-setter", &module_info_ast, "binding-index-setter"},
  {"from-to-by", &module_info_protoScollectionsSrange, "from-to-by"},
  {"assignment-form", &module_info_ast, "assignment-form"},
  {"read", &module_info_runtime, "read"},
  {"+", &module_info_protoSmath, "+"},
  {"ddv", &module_info_macros, "ddv"},
  {"format", &module_info_runtime, "format"},
  {"%pair", &module_info_boot, "%pair"},
  {"and", &module_info_macros, "and"},
  {"do-static-global-bindings", &module_info_ast, "do-static-global-bindings"},
  {"%i-", &module_info_boot, "%i-"},
  {"sub", &module_info_protoScollectionsSsequence, "sub"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"<str-tab>", &module_info_protoScollectionsStable, "<str-tab>"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"module-name-to-relpath", &module_info_ast, "module-name-to-relpath"},
  {"read-from-string", &module_info_read, "read-from-string"},
  {"<type>", &module_info_boot, "<type>"},
  {"false-or", &module_info_protoStypes, "false-or"},
  {"add", &module_info_protoScollectionsScollection, "add"},
  {"signature-names-setter", &module_info_ast, "signature-names-setter"},
  {"even?", &module_info_protoSmath, "even?"},
  {"<=", &module_info_protoSmath, "<="},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"locative-value", &module_info_runtime, "locative-value"},
  {"<alternative>", &module_info_ast, "<alternative>"},
  {"module-binding", &module_info_ast, "module-binding"},
  {"program-register", &module_info_ast, "program-register"},
  {"describe-handler", &module_info_runtime, "describe-handler"},
  {"del-keys", &module_info_protoScollectionsScollection, "del-keys"},
  {"objectify", &module_info_ast, "objectify"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"len-setter", &module_info_protoScollectionsSbuffer, "len-setter"},
  {"<bind-exit>", &module_info_ast, "<bind-exit>"},
  {"env-object-name", &module_info_ast, "env-object-name"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"<string-port>", &module_info_protoSports, "<string-port>"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"function-free-setter", &module_info_ast, "function-free-setter"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"binding-dynamic-extent?", &module_info_ast, "binding-dynamic-extent?"},
  {"char-ready?", &module_info_protoSports, "char-ready?"},
  {"monitor-info", &module_info_ast, "monitor-info"},
  {"rep", &module_info_boot, "rep"},
  {"to-digit", &module_info_protoSmath, "to-digit"},
  {"<file-output-port>", &module_info_protoSports, "<file-output-port>"},
  {"function-data-refs", &module_info_ast, "function-data-refs"},
  {"application-known?-setter", &module_info_ast, "application-known?-setter"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"id-hash", &module_info_protoScollectionsStable, "id-hash"},
  {"binding-native-to?", &module_info_ast, "binding-native-to?"},
  {"lowercase?", &module_info_protoSmath, "lowercase?"},
  {"<ast-primitive-definition>", &module_info_ast, "<ast-primitive-definition>"},
  {"program-register-setter", &module_info_ast, "program-register-setter"},
  {"%c<", &module_info_boot, "%c<"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"t<", &module_info_protoStypes, "t<"},
  {"<definition>", &module_info_ast, "<definition>"},
  {"<binding>", &module_info_ast, "<binding>"},
  {"fix-let-bindings-setter", &module_info_ast, "fix-let-bindings-setter"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"function-bindings", &module_info_ast, "function-bindings"},
  {"inc", &module_info_macros, "inc"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"%c=", &module_info_boot, "%c="},
  {"logior", &module_info_protoSmath, "logior"},
  {"fabs", &module_info_protoSmath, "fabs"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"flo-bits", &module_info_protoSmath, "flo-bits"},
  {"round", &module_info_protoSmath, "round"},
  {"lab", &module_info_boot, "lab"},
  {"exported", &module_info_macros, "exported"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"locals-body-setter", &module_info_ast, "locals-body-setter"},
  {"cat2", &module_info_protoScollectionsSsequence, "cat2"},
  {"peek-char", &module_info_protoSports, "peek-char"},
  {"<str>", &module_info_boot, "<str>"},
  {"truncate/", &module_info_protoSmath, "truncate/"},
  {"dss", &module_info_boot, "dss"},
  {"sig", &module_info_runtime, "sig"},
  {"isa", &module_info_boot, "isa"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"export", &module_info_boot, "export"},
  {"table-protocol", &module_info_protoScollectionsStable, "table-protocol"},
  {"function-signature-setter", &module_info_ast, "function-signature-setter"},
  {"%iv", &module_info_boot, "%iv"},
  {"call-with-output-file", &module_info_protoSports, "call-with-output-file"},
  {"binding-dynamic-extent?-setter", &module_info_ast, "binding-dynamic-extent?-setter"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"del-key", &module_info_protoScollectionsScollection, "del-key"},
  {"@==", &module_info_boot, "@=="},
  {"assignment-reference", &module_info_ast, "assignment-reference"},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"pos", &module_info_protoScollectionsSsequence, "pos"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"function-registers-setter", &module_info_ast, "function-registers-setter"},
  {"find-environment-module", &module_info_ast, "find-environment-module"},
  {"binding-kind", &module_info_ast, "binding-kind"},
  {"init-ast", &module_info_ast, "init-ast"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"t=", &module_info_protoStypes, "t="},
  {"binding-value", &module_info_ast, "binding-value"},
  {"do", &module_info_protoScollectionsScollection, "do"},
  {"fix-let-bindings", &module_info_ast, "fix-let-bindings"},
  {">", &module_info_protoSmath, ">"},
  {"<", &module_info_protoSmath, "<"},
  {"error", &module_info_boot, "error"},
  {"max", &module_info_protoSmath, "max"},
  {"binding-mutable?", &module_info_ast, "binding-mutable?"},
  {"assignment-form-setter", &module_info_ast, "assignment-form-setter"},
  {"function-signature", &module_info_ast, "function-signature"},
  {"call-with-input-file", &module_info_protoSports, "call-with-input-file"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"<local-binding>", &module_info_ast, "<local-binding>"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"<predefined-application>", &module_info_ast, "<predefined-application>"},
  {"%slen", &module_info_boot, "%slen"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"<met>", &module_info_boot, "<met>"},
  {"set-module-environments", &module_info_ast, "set-module-environments"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"len/fill-setter", &module_info_protoScollectionsSbuffer, "len/fill-setter"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"signature-names", &module_info_ast, "signature-names"},
  {"signature-value", &module_info_ast, "signature-value"},
  {"locals-body", &module_info_ast, "locals-body"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"fab", &module_info_protoScollectionsScollection, "fab"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"cat!", &module_info_protoScollectionsSsequence, "cat!"},
  {"port-index", &module_info_protoSports, "port-index"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"function-self-recursive?-setter", &module_info_ast, "function-self-recursive?-setter"},
  {"quote", &module_info_boot, "quote"},
  {"pair", &module_info_macros, "pair"},
  {"function-body", &module_info_ast, "function-body"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"binding-global-box", &module_info_ast, "binding-global-box"},
  {"head", &module_info_boot, "head"},
  {"from-above", &module_info_protoScollectionsSrange, "from-above"},
  {"module-syntax-environment", &module_info_ast, "module-syntax-environment"},
  {"read-char", &module_info_protoSports, "read-char"},
  {"neg?", &module_info_protoSmath, "neg?"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"close-input-port", &module_info_protoSports, "close-input-port"},
  {"<runtime-assignment>", &module_info_ast, "<runtime-assignment>"},
  {"when", &module_info_macros, "when"},
  {"binding-value-setter", &module_info_ast, "binding-value-setter"},
  {"t+", &module_info_protoStypes, "t+"},
  {"<programs>", &module_info_ast, "<programs>"},
  {"find-key", &module_info_protoScollectionsScollection, "find-key"},
  {"nul", &module_info_boot, "nul"},
  {"apply", &module_info_macros, "apply"},
  {"object-class", &module_info_boot, "object-class"},
  {"logxor", &module_info_protoSmath, "logxor"},
  {"~==", &module_info_protoSmath, "~=="},
  {"function-registers", &module_info_ast, "function-registers"},
  {"%i<", &module_info_boot, "%i<"},
  {"<module-binding>", &module_info_ast, "<module-binding>"},
  {"%sb", &module_info_boot, "%sb"},
  {"<unwind-protect>", &module_info_ast, "<unwind-protect>"},
  {"<fab-list>", &module_info_ast, "<fab-list>"},
  {"%str", &module_info_boot, "%str"},
  {"%%sym", &module_info_boot, "%%sym"},
  {"<string-output-port>", &module_info_protoSports, "<string-output-port>"},
  {"<compile-time>", &module_info_ast, "<compile-time>"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"pop-last!", &module_info_protoScollectionsSbuffer, "pop-last!"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"monitor-type", &module_info_ast, "monitor-type"},
  {"set", &module_info_boot, "set"},
  {"open-output-file", &module_info_protoSports, "open-output-file"},
  {"as-lowercase", &module_info_protoSmath, "as-lowercase"},
  {"fix-let-arguments", &module_info_ast, "fix-let-arguments"},
  {"alternative-alternant", &module_info_ast, "alternative-alternant"},
  {"%i&", &module_info_boot, "%i&"},
  {"<restart>", &module_info_runtime, "<restart>"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"eof-object?", &module_info_protoSmath, "eof-object?"},
  {"%raw", &module_info_boot, "%raw"},
  {"call-with-string-output-port", &module_info_protoSports, "call-with-string-output-port"},
  {"case", &module_info_macros, "case"},
  {"remove-modules-by-name!", &module_info_ast, "remove-modules-by-name!"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"modulo", &module_info_protoSmath, "modulo"},
  {"swapf", &module_info_macros, "swapf"},
  {"opf", &module_info_macros, "opf"},
  {"%untag", &module_info_boot, "%untag"},
  {"module-target-environment", &module_info_ast, "module-target-environment"},
  {"ct", &module_info_boot, "ct"},
  {"<file-input-port>", &module_info_protoSports, "<file-input-port>"},
  {"<string-input-port>", &module_info_protoSports, "<string-input-port>"},
  {"napply", &module_info_macros, "napply"},
  {"fix-let-body-setter", &module_info_ast, "fix-let-body-setter"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"%fb", &module_info_boot, "%fb"},
  {"mem?", &module_info_protoScollectionsScollection, "mem?"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"%snul", &module_info_boot, "%snul"},
  {"module-exports", &module_info_ast, "module-exports"},
  {"add!", &module_info_protoScollectionsSsequence, "add!"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"<real-reference>", &module_info_ast, "<real-reference>"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"<fix-let>", &module_info_ast, "<fix-let>"},
  {"%cb", &module_info_boot, "%cb"},
  {"fab-map", &module_info_protoScollectionsSmap, "fab-map"},
  {"%i+", &module_info_boot, "%i+"},
  {"collect", &module_info_macros, "collect"},
  {"constant-index", &module_info_ast, "constant-index"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"module-name", &module_info_ast, "module-name"},
  {"*", &module_info_protoSmath, "*"},
  {"dc", &module_info_boot, "dc"},
  {"odd?", &module_info_protoSmath, "odd?"},
  {"function-self-recursive?", &module_info_ast, "function-self-recursive?"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"open-input-file", &module_info_protoSports, "open-input-file"},
  {"monitor-handler", &module_info_ast, "monitor-handler"},
  {"use/export", &module_info_boot, "use/export"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"slot", &module_info_boot, "slot"},
  {"reduce+", &module_info_protoScollectionsScollection, "reduce+"},
  {"signature-specs", &module_info_ast, "signature-specs"},
  {"<ast-macro-definition>", &module_info_ast, "<ast-macro-definition>"},
  {"fin", &module_info_boot, "fin"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"environment-uses-modules", &module_info_ast, "environment-uses-modules"},
  {"constant-index-setter", &module_info_ast, "constant-index-setter"},
  {"if", &module_info_boot, "if"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"do-module-loader-modules", &module_info_ast, "do-module-loader-modules"},
  {"probe-module", &module_info_ast, "probe-module"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"cat", &module_info_macros, "cat"},
  {"%i!", &module_info_boot, "%i!"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"-", &module_info_protoSmath, "-"},
  {"port-contents", &module_info_protoSports, "port-contents"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"init-environment-for-eval", &module_info_ast, "init-environment-for-eval"},
  {"<local-reference>", &module_info_ast, "<local-reference>"},
  {"%f*", &module_info_boot, "%f*"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"all?", &module_info_protoScollectionsScollection, "all?"},
  {"invoke-handler-interactively", &module_info_runtime, "invoke-handler-interactively"},
  {"tail", &module_info_boot, "tail"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"<monitor>", &module_info_ast, "<monitor>"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"<tab>", &module_info_protoScollectionsStable, "<tab>"},
  {"<bound?>", &module_info_ast, "<bound?>"},
  {"binding-global-box-setter", &module_info_ast, "binding-global-box-setter"},
  {"as", &module_info_protoStypes, "as"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"push-last!", &module_info_protoScollectionsSbuffer, "push-last!"},
  {"from-to", &module_info_protoScollectionsSrange, "from-to"},
  {"%f+", &module_info_boot, "%f+"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"lst", &module_info_boot, "lst"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"alphabetic?", &module_info_protoSmath, "alphabetic?"},
  {"%vec", &module_info_boot, "%vec"},
  {"<regular-application>", &module_info_ast, "<regular-application>"},
  {"<col>", &module_info_boot, "<col>"},
  {"<ast-generic>", &module_info_ast, "<ast-generic>"},
  {"table-growth-threshold", &module_info_protoScollectionsStable, "table-growth-threshold"},
  {">=", &module_info_protoSmath, ">="},
  {"fab-class", &module_info_boot, "fab-class"},
  {"logand", &module_info_protoSmath, "logand"},
  {"<file-port>", &module_info_protoSports, "<file-port>"},
  {"binding-dotted?", &module_info_ast, "binding-dotted?"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"default", &module_info_protoScollectionsScollection, "default"},
  {"fix-let-body", &module_info_ast, "fix-let-body"},
  {"map-keyed", &module_info_protoScollectionsScollection, "map-keyed"},
  {"truncate", &module_info_protoSmath, "truncate"},
  {"reference-frame-number", &module_info_ast, "reference-frame-number"},
  {"dg", &module_info_boot, "dg"},
  {"<ast-signature>", &module_info_ast, "<ast-signature>"},
  {"for", &module_info_macros, "for"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"out", &module_info_protoSports, "out"},
  {"<error>", &module_info_runtime, "<error>"},
  {"compose", &module_info_runtime, "compose"},
  {"<local-assignment>", &module_info_ast, "<local-assignment>"},
  {"<static-global-environment>", &module_info_ast, "<static-global-environment>"},
  {"environment-module", &module_info_ast, "environment-module"},
  {"try", &module_info_boot, "try"},
  {"list", &module_info_protoScollectionsSlist, "list"},
  {"function-source-setter", &module_info_ast, "function-source-setter"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"<immediate-constant>", &module_info_ast, "<immediate-constant>"},
  {"fix-let-arguments-setter", &module_info_ast, "fix-let-arguments-setter"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"address-of", &module_info_protoSmath, "address-of"},
  {"function-debug-name-setter", &module_info_ast, "function-debug-name-setter"},
  {"call-with-string-input-port", &module_info_protoSports, "call-with-string-input-port"},
  {"dec", &module_info_macros, "dec"},
  {"buf", &module_info_protoScollectionsSbuffer, "buf"},
  {"binding-dotted?-setter", &module_info_ast, "binding-dotted?-setter"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"<computed-program>", &module_info_ast, "<computed-program>"},
  {"let", &module_info_boot, "let"},
  {"remainder", &module_info_protoSmath, "remainder"},
  {"reduce", &module_info_protoScollectionsScollection, "reduce"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"keys", &module_info_protoScollectionsScollection, "keys"},
  {"del-dups", &module_info_protoScollectionsSsequence, "del-dups"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"num-to-str", &module_info_protoSmath, "num-to-str"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"ds", &module_info_boot, "ds"},
  {"def-list", &module_info_ast, "def-list"},
  {"def-programs", &module_info_ast, "def-programs"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"rev", &module_info_protoScollectionsSsequence, "rev"},
  {"from-below-by", &module_info_protoScollectionsSrange, "from-below-by"},
  {"%i=", &module_info_boot, "%i="},
  {"dlet", &module_info_macros, "dlet"},
  {"%isa", &module_info_boot, "%isa"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"write-to-string", &module_info_write, "write-to-string"},
  {"<free-environment>", &module_info_ast, "<free-environment>"},
  {"%i?", &module_info_boot, "%i?"},
  {"signature-arity-setter", &module_info_ast, "signature-arity-setter"},
  {"build-condition-interactively", &module_info_runtime, "build-condition-interactively"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"function-value", &module_info_ast, "function-value"},
  {"@+", &module_info_boot, "@+"},
  {"case-insensitive-string-equal", &module_info_protoScollectionsStable, "case-insensitive-string-equal"},
  {"floor", &module_info_protoSmath, "floor"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"%fu", &module_info_boot, "%fu"},
  {"next-method", &module_info_macros, "next-method"},
  {"objectify-quotation", &module_info_ast, "objectify-quotation"},
  {"reference-binding", &module_info_ast, "reference-binding"},
  {"application-tail?", &module_info_ast, "application-tail?"},
  {"do-keyed", &module_info_protoScollectionsScollection, "do-keyed"},
  {"function-temporaries", &module_info_ast, "function-temporaries"},
  {"assignment-binding", &module_info_ast, "assignment-binding"},
  {"program-type-setter", &module_info_ast, "program-type-setter"},
  {"df", &module_info_boot, "df"},
  {"program-type", &module_info_ast, "program-type"},
  {"write-string", &module_info_protoSports, "write-string"},
  {"port-line", &module_info_protoSports, "port-line"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"in", &module_info_protoSports, "in"},
  {"class-name", &module_info_boot, "class-name"},
  {"empty", &module_info_protoScollectionsScollection, "empty"},
  {"%bb", &module_info_boot, "%bb"},
  {"del", &module_info_protoScollectionsSsequence, "del"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"<buf>", &module_info_protoScollectionsSbuffer, "<buf>"},
  {"neg", &module_info_protoSmath, "neg"},
  {"locals-bindings-setter", &module_info_ast, "locals-bindings-setter"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"list-handlers", &module_info_runtime, "list-handlers"},
  {"<module-binding-reference>", &module_info_ast, "<module-binding-reference>"},
  {"<num>", &module_info_boot, "<num>"},
  {"<int>", &module_info_boot, "<int>"},
  {"nil", &module_info_boot, "nil"},
  {"str-to-num", &module_info_protoScollectionsSstring, "str-to-num"},
  {"unchecked-runtime-environment", &module_info_ast, "unchecked-runtime-environment"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"%i^", &module_info_boot, "%i^"},
  {"==", &module_info_macros, "=="},
  {"binding-type", &module_info_ast, "binding-type"},
  {"function-source", &module_info_ast, "function-source"},
  {"<constant>", &module_info_ast, "<constant>"},
  {"writeln", &module_info_write, "writeln"},
  {"constant-value", &module_info_ast, "constant-value"},
  {"ast-evaluate", &module_info_ast, "ast-evaluate"},
  {"<module>", &module_info_ast, "<module>"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"binding-type-setter", &module_info_ast, "binding-type-setter"},
  {"any2?", &module_info_protoScollectionsScollection, "any2?"},
  {"reference-frame-offset", &module_info_ast, "reference-frame-offset"},
  {"<step>", &module_info_protoScollectionsSstep, "<step>"},
  {"signature-bindings", &module_info_ast, "signature-bindings"},
  {"%f/", &module_info_boot, "%f/"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"lognot", &module_info_protoSmath, "lognot"},
  {"%su", &module_info_boot, "%su"},
  {"binding-locative", &module_info_ast, "binding-locative"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"%ft", &module_info_boot, "%ft"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"sexpr-signature-parameters", &module_info_syntax, "sexpr-signature-parameters"},
  {"binding-inferred-type", &module_info_ast, "binding-inferred-type"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"%cu", &module_info_boot, "%cu"},
  {"low-elt-setter", &module_info_protoScollectionsScollection, "low-elt-setter"},
  {"empty?", &module_info_macros, "empty?"},
  {"<port>", &module_info_protoSports, "<port>"},
  {"%slot", &module_info_boot, "%slot"},
  {"build-condition-for-handler-interactively", &module_info_runtime, "build-condition-for-handler-interactively"},
  {"current-gc-state", &module_info_protoScollectionsStable, "current-gc-state"},
  {"<arguments>", &module_info_ast, "<arguments>"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"objectify-signature", &module_info_ast, "objectify-signature"},
  {"as-uppercase", &module_info_protoSmath, "as-uppercase"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"ash", &module_info_protoSmath, "ash"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"global-box-value", &module_info_ast, "global-box-value"},
  {"signature-bindings-setter", &module_info_ast, "signature-bindings-setter"},
  {"bound?", &module_info_boot, "bound?"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"<application>", &module_info_ast, "<application>"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"map2", &module_info_protoScollectionsScollection, "map2"},
  {"<log>", &module_info_boot, "<log>"},
  {"find-binding", &module_info_ast, "find-binding"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"case-insensitive-string-hash", &module_info_protoScollectionsStable, "case-insensitive-string-hash"},
  {"<assignment>", &module_info_ast, "<assignment>"},
  {"vec", &module_info_boot, "vec"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"pos?", &module_info_protoSmath, "pos?"},
  {"<map>", &module_info_protoScollectionsSmap, "<map>"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"pick", &module_info_protoScollectionsSsequence, "pick"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"last", &module_info_protoScollectionsSsequence, "last"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"function-index", &module_info_ast, "function-index"},
  {"<reference>", &module_info_ast, "<reference>"},
  {"not", &module_info_boot, "not"},
  {"any?", &module_info_protoScollectionsScollection, "any?"},
  {"function-binding", &module_info_ast, "function-binding"},
  {"binding-inferred-type-setter", &module_info_ast, "binding-inferred-type-setter"},
  {"%selt", &module_info_boot, "%selt"},
  {"$proto-boot-module-name", &module_info_ast, "$proto-boot-module-name"},
  {"@<", &module_info_boot, "@<"},
  {"format-to-string", &module_info_runtime, "format-to-string"},
  {"/", &module_info_protoSmath, "/"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"curry", &module_info_runtime, "curry"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"function-temporaries-setter", &module_info_ast, "function-temporaries-setter"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"<any>", &module_info_boot, "<any>"},
  {"<range>", &module_info_protoScollectionsSrange, "<range>"},
  {"fix-let-types", &module_info_ast, "fix-let-types"},
  {"function-debug-name", &module_info_ast, "function-debug-name"},
  {"dm", &module_info_boot, "dm"},
  {"force-output", &module_info_protoSports, "force-output"},
  {"<ast-method>", &module_info_ast, "<ast-method>"},
  {"alternative-condition", &module_info_ast, "alternative-condition"},
  {"low-elt", &module_info_protoScollectionsScollection, "low-elt"},
  {"<module-loader>", &module_info_ast, "<module-loader>"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"application-arguments", &module_info_ast, "application-arguments"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"type-class", &module_info_boot, "type-class"},
  {"%im", &module_info_boot, "%im"},
  {"str", &module_info_protoScollectionsSstring, "str"},
  {"%it/", &module_info_boot, "%it/"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"numeric?", &module_info_protoSmath, "numeric?"},
  {"<union>", &module_info_boot, "<union>"},
  {"floor/", &module_info_protoSmath, "floor/"},
  {"select", &module_info_macros, "select"},
  {"<raw-constant>", &module_info_ast, "<raw-constant>"},
  {"seq", &module_info_boot, "seq"},
  {"locals-bindings", &module_info_ast, "locals-bindings"},
  {"binding-info", &module_info_ast, "binding-info"},
  {"free-implemented-foreign-bindings", &module_info_ast, "free-implemented-foreign-bindings"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"mif", &module_info_boot, "mif"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"compile-time-program", &module_info_ast, "compile-time-program"},
  {"application-binding", &module_info_ast, "application-binding"},
  {"3rd", &module_info_protoScollectionsSsequence, "3rd"},
  {"signature-value-setter", &module_info_ast, "signature-value-setter"},
  {"from-below", &module_info_protoScollectionsSsequence, "from-below"},
  {"<sequential>", &module_info_ast, "<sequential>"},
  {"bound?-reference", &module_info_ast, "bound?-reference"},
  {"table-growth-factor", &module_info_protoScollectionsStable, "table-growth-factor"},
  {"sequentialize", &module_info_ast, "sequentialize"},
  {"<input-port>", &module_info_protoSports, "<input-port>"},
  {"map", &module_info_macros, "map"},
  {"fun", &module_info_boot, "fun"},
  {"%i*", &module_info_boot, "%i*"},
  {"lsh", &module_info_protoSmath, "lsh"},
  {"newline", &module_info_protoSports, "newline"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"%f<", &module_info_boot, "%f<"},
  {"collected", &module_info_macros, "collected"},
  {"do-named-static-global-bindings", &module_info_ast, "do-named-static-global-bindings"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"%process-module", &module_info_boot, "%process-module"},
  {"first-then", &module_info_protoScollectionsSstep, "first-then"},
  {"global-box-value-setter", &module_info_ast, "global-box-value-setter"},
  {"$proto-runtime-module-name", &module_info_ast, "$proto-runtime-module-name"},
  {"push", &module_info_protoScollectionsSlist, "push"},
  {"pop", &module_info_protoScollectionsSlist, "pop"},
  {"signature-nary?-setter", &module_info_ast, "signature-nary?-setter"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"<global-box>", &module_info_ast, "<global-box>"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"rev!", &module_info_macros, "rev!"},
  {"locals-functions-setter", &module_info_ast, "locals-functions-setter"},
  {"free-environment", &module_info_ast, "free-environment"},
  {"or", &module_info_macros, "or"},
  {"signature-arity", &module_info_ast, "signature-arity"},
  {"binding-info-setter", &module_info_ast, "binding-info-setter"},
  {"unless", &module_info_macros, "unless"},
  {"from-above-by", &module_info_protoScollectionsSrange, "from-above-by"},
  {"min", &module_info_protoSmath, "min"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"alternative-consequent", &module_info_ast, "alternative-consequent"},
  {"from-by", &module_info_protoScollectionsSrange, "from-by"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"application-known?", &module_info_ast, "application-known?"},
  {"<assocs>", &module_info_protoScollectionsSassoc, "<assocs>"},
  {"alter", &module_info_protoScollectionsScollection, "alter"},
  {"copy-state", &module_info_protoScollectionsScollection, "copy-state"},
  {"elt-setter", &module_info_protoScollectionsScollection, "elt-setter"},
  {"fab-p2c-module", &module_info_ast, "fab-p2c-module"},
  {"binding-module-name", &module_info_ast, "binding-module-name"},
  {"fix-let-types-setter", &module_info_ast, "fix-let-types-setter"},
  {"unexec", &module_info_boot, "unexec"},
  {"function-data-refs-setter", &module_info_ast, "function-data-refs-setter"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"%ib", &module_info_boot, "%ib"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"write", &module_info_write, "write"},
  {"@olen", &module_info_boot, "@olen"},
  {"<ast-primitive>", &module_info_ast, "<ast-primitive>"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"2nd", &module_info_protoScollectionsSsequence, "2nd"},
  {"pushf", &module_info_macros, "pushf"},
  {"tup", &module_info_boot, "tup"},
  {"display", &module_info_write, "display"},
  {"ceiling", &module_info_protoSmath, "ceiling"},
  {"report-undefined-global-bindings", &module_info_ast, "report-undefined-global-bindings"},
  {"$permanent-hash-state", &module_info_protoScollectionsStable, "$permanent-hash-state"},
  {"module-loader-module-type", &module_info_ast, "module-loader-module-type"},
  {"nxt-state", &module_info_macros, "nxt-state"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"collecting", &module_info_macros, "collecting"},
  {"function-index-setter", &module_info_ast, "function-index-setter"},
  {"abs", &module_info_protoSmath, "abs"},
  {"ceiling/", &module_info_protoSmath, "ceiling/"},
  {"loc", &module_info_boot, "loc"},
  {"%lb", &module_info_boot, "%lb"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"install-initial-bindings", &module_info_ast, "install-initial-bindings"},
  {"app-args", &module_info_runtime, "app-args"},
  {"load-module", &module_info_ast, "load-module"},
  {"function-body-setter", &module_info_ast, "function-body-setter"},
  {"%f-", &module_info_boot, "%f-"},
  {"%velt", &module_info_boot, "%velt"},
  {"reference-called-function?", &module_info_ast, "reference-called-function?"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"close-output-port", &module_info_protoSports, "close-output-port"},
  {"<program>", &module_info_ast, "<program>"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"now-key", &module_info_protoScollectionsScollection, "now-key"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"sub-setter", &module_info_protoScollectionsSsequence, "sub-setter"},
  {"reference-called-function?-setter", &module_info_ast, "reference-called-function?-setter"},
  {"%with-monitor", &module_info_boot, "%with-monitor"},
  {"popf", &module_info_macros, "popf"},
  {"bind-exit-main-fun", &module_info_ast, "bind-exit-main-fun"},
  {"write-char", &module_info_protoSports, "write-char"},
  {"function-nary?", &module_info_ast, "function-nary?"},
  {"unwind-protect-protected-thunk", &module_info_ast, "unwind-protect-protected-thunk"},
  {"<global-assignment>", &module_info_ast, "<global-assignment>"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"application-function", &module_info_ast, "application-function"},
  {"monitor-test", &module_info_ast, "monitor-test"},
  {"function-free", &module_info_ast, "function-free"},
  {"as-lst", &module_info_ast, "as-lst"},
  {"isa?", &module_info_boot, "isa?"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"monitor-main-thunk", &module_info_ast, "monitor-main-thunk"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"now-elt", &module_info_macros, "now-elt"},
  {"~=", &module_info_protoSmath, "~="},
  {"locals-functions", &module_info_ast, "locals-functions"},
  {"do2", &module_info_protoScollectionsScollection, "do2"},
  {"1st", &module_info_protoScollectionsSsequence, "1st"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"logbit?", &module_info_protoSmath, "logbit?"},
  {"assert", &module_info_macros, "assert"},
  {"var-name", &module_info_macros, "var-name"},
  {"elt", &module_info_macros, "elt"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"<ast-function>", &module_info_ast, "<ast-function>"},
  {"<runtime-reference>", &module_info_ast, "<runtime-reference>"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"<global-reference>", &module_info_ast, "<global-reference>"},
  {"runtime-environment", &module_info_ast, "runtime-environment"},
  {"binding-index", &module_info_ast, "binding-index"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"%define-binding", NULL},
  {"env-local-value", &Yast_evalYenv_local_value},
  {"env-binding-value-setter", &Yast_evalYenv_binding_value_setter},
  {"env-values-setter", &Yast_evalYenv_values_setter},
  {"%dlvar-binding", NULL},
  {"ifun", NULL},
  {"arrange-arguments", &Yast_evalYarrange_arguments},
  {"%ensure-binding", NULL},
  {"%dlvar", NULL},
  {"env-global-binding-value", &Yast_evalYenv_global_binding_value},
  {"---main-1---", NULL},
  {"*stack*", &Yast_evalYTstackT},
  {"env-parent-setter", &Yast_evalYenv_parent_setter},
  {"env-names", &Yast_evalYenv_names},
  {"env-define-binding!", &Yast_evalYenv_define_bindingX},
  {"%binding-value", NULL},
  {"env-runtime-value-setter", &Yast_evalYenv_runtime_value_setter},
  {"as-fun-name", &Yast_evalYas_fun_name},
  {"%binding-bound?", NULL},
  {"env-parent", &Yast_evalYenv_parent},
  {"ast-eval-specs", &Yast_evalYast_eval_specs},
  {"%dlvar-mod", NULL},
  {"env-local-reference-value", &Yast_evalYenv_local_reference_value},
  {"%dlvar-setter", NULL},
  {"ast-eval-bound?", &Yast_evalYast_eval_boundQ},
  {"---main-0---", NULL},
  {"%lookup-binding", NULL},
  {"env-frame!", &Yast_evalYenv_frameX},
  {"env-values", &Yast_evalYenv_values},
  {"env-binding-value", &Yast_evalYenv_binding_value},
  {"env-function-setter", &Yast_evalYenv_function_setter},
  {"ast-eval", &Yast_evalYast_eval},
  {"env-names-setter", &Yast_evalYenv_names_setter},
  {"$nul-loc-env", &Yast_evalYDnul_loc_env},
  {"env-local-value-setter", &Yast_evalYenv_local_value_setter},
  {"<loc-env>", &Yast_evalYLloc_envG},
  {"env-local-reference-value-setter", &Yast_evalYenv_local_reference_value_setter},
  {"env-global-binding-value-setter", &Yast_evalYenv_global_binding_value_setter},
  {"%binding-value-setter", NULL},
  {"export-proto-method", &Yast_evalYexport_proto_method},
  {"env-function", &Yast_evalYenv_function},
  {"env-runtime-value", &Yast_evalYenv_runtime_value},
  {"env-global-binding-bound?", &Yast_evalYenv_global_binding_boundQ},
  {"%dlvar-nam", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"%binding-value", "%binding-value"},
  {"%binding-bound?", "%binding-bound?"},
  {"init-environment-for-eval", "init-environment-for-eval"},
  {"ast-evaluate", "ast-evaluate"},
  {"%binding-value-setter", "%binding-value-setter"},
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
extern void load_module_proto (void);
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
  load_module_proto();
  load_module_ast();

  (P)Yast_evalY___main_0___();
  (P)Yast_evalY___main_1___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
