/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: compiler/ast-eval */

EXT(Ylst,"runtime/boot","lst");
EXT(YcompilerSastYLfree_environmentG,"compiler/ast","<free-environment>");
EXT(YcompilerSastYassignment_reference,"compiler/ast","assignment-reference");
EXT(YruntimeSruntimeYinvoke_handler_interactively,"runtime/runtime","invoke-handler-interactively");
EXT(YgooScollectionsScollectionYkey_type,"goo/collections/collection","key-type");
EXT(YruntimeSruntimeYidentity,"runtime/runtime","identity");
EXT(YcompilerSastYconstant_index_setter,"compiler/ast","constant-index-setter");
EXT(YPisa,"runtime/boot","%isa");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YcompilerSastYLlocalsG,"compiler/ast","<locals>");
EXT(YgooScollectionsScollectionYfind_or,"goo/collections/collection","find-or");
EXT(YcompilerSastYload_in,"compiler/ast","load-in");
EXT(YcompilerSastYcompile_time_program,"compiler/ast","compile-time-program");
EXT(YcompilerSastYmonitor_main_thunk,"compiler/ast","monitor-main-thunk");
EXT(YcompilerSastYbinding_global_box_setter,"compiler/ast","binding-global-box-setter");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScollectionsScollectionYenum,"goo/collections/collection","enum");
EXT(YcompilerSastYbinding_value_setter,"compiler/ast","binding-value-setter");
EXT(YcompilerSastYassignment_form_setter,"compiler/ast","assignment-form-setter");
EXT(Ysig_unification_vars,"runtime/boot","sig-unification-vars");
EXT(YcompilerSastYprogram_register_setter,"compiler/ast","program-register-setter");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YcompilerSastYapplication_knownQ_setter,"compiler/ast","application-known?-setter");
EXT(Yhead_setter,"runtime/boot","head-setter");
EXT(Ytype_class,"runtime/boot","type-class");
EXT(Yunexec,"runtime/boot","unexec");
EXT(Yfun_sig_setter,"runtime/boot","fun-sig-setter");
DEF(YcompilerSast_evalYenv_local_value,"compiler/ast-eval","env-local-value");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YcompilerSastYconstant_index,"compiler/ast","constant-index");
EXT(YLunionG,"runtime/boot","<union>");
EXT(YgooScollectionsSbufferYpush_lastX,"goo/collections/buffer","push-last!");
EXT(YgooSportYLfile_portG,"goo/port","<file-port>");
EXT(YruntimeSruntimeYLhandlerG,"runtime/runtime","<handler>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScollectionsStableYtab_hash,"goo/collections/table","tab-hash");
EXT(YcompilerSastYfix_let_bindings,"compiler/ast","fix-let-bindings");
EXT(YgooSportYport_line,"goo/port","port-line");
EXT(YgooScollectionsSlistYpush,"goo/collections/list","push");
EXT(YcompilerSastYmodule_exports,"compiler/ast","module-exports");
EXT(YcompilerSastYenvironment_bindings,"compiler/ast","environment-bindings");
DEF(YcompilerSast_evalYenv_define_bindingX,"compiler/ast-eval","env-define-binding!");
EXT(YcompilerSastYbinding_value,"compiler/ast","binding-value");
EXT(YcompilerSastYLlocal_bindingG,"compiler/ast","<local-binding>");
EXT(YgooScollectionsSbufferYLbufG,"goo/collections/buffer","<buf>");
EXT(YgooScollectionsScollectionYelt_default,"goo/collections/collection","elt-default");
EXT(YcompilerSastYLraw_constantG,"compiler/ast","<raw-constant>");
EXT(Yunknown_function_error,"runtime/boot","unknown-function-error");
EXT(YcompilerSastYmonitor_test,"compiler/ast","monitor-test");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Yhead,"runtime/boot","head");
EXT(YgooSportYLstr_out_portG,"goo/port","<str-out-port>");
EXT(YgooSportYget,"goo/port","get");
EXT(YgooScollectionsSsequenceYdel_vals,"goo/collections/sequence","del-vals");
EXT(YcompilerSastYremove_modules_by_nameX,"compiler/ast","remove-modules-by-name!");
EXT(YcompilerSastYreference_frame_number,"compiler/ast","reference-frame-number");
EXT(YcompilerSastYmodule_name,"compiler/ast","module-name");
EXT(YLnumG,"runtime/boot","<num>");
EXT(YLvecG,"runtime/boot","<vec>");
EXT(YcompilerSastYdo_static_global_bindings,"compiler/ast","do-static-global-bindings");
EXT(YcompilerSastYLast_primitiveG,"compiler/ast","<ast-primitive>");
EXT(YTboot_macro_module_namesT,"runtime/boot","*boot-macro-module-names*");
EXT(YgooSportYin,"goo/port","in");
EXT(YcompilerSastYfunction_signature_setter,"compiler/ast","function-signature-setter");
EXT(YcompilerSastYbinding_inferred_type_setter,"compiler/ast","binding-inferred-type-setter");
EXT(YcompilerSastYLreal_referenceG,"compiler/ast","<real-reference>");
EXT(YTboot_macro_expandersT,"runtime/boot","*boot-macro-expanders*");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSportYLfile_out_portG,"goo/port","<file-out-port>");
EXT(YcompilerSastYLast_primitive_definitionG,"compiler/ast","<ast-primitive-definition>");
DEF(YcompilerSast_evalYDnul_loc_env,"compiler/ast-eval","$nul-loc-env");
EXT(YgooScollectionsScollectionYdo2,"goo/collections/collection","do2");
EXT(YcompilerSastYfunction_naryQ,"compiler/ast","function-nary?");
EXT(YgooScollectionsSrangeYrange_by,"goo/collections/range","range-by");
EXT(YgooScollectionsSsequenceYbelow,"goo/collections/sequence","below");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yclass_direct_props,"runtime/boot","class-direct-props");
EXT(YcompilerSastYapplication_binding,"compiler/ast","application-binding");
EXT(YgooScollectionsScollectionYlow_elt_setter,"goo/collections/collection","low-elt-setter");
EXT(YcompilerSastYLbindingG,"compiler/ast","<binding>");
EXT(YruntimeSruntimeYsig,"runtime/runtime","sig");
EXT(YLmetG,"runtime/boot","<met>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScollectionsSbufferYbuf,"goo/collections/buffer","buf");
EXT(YTrestarts_okQT,"runtime/boot","*restarts-ok?*");
EXT(YgooScollectionsStableYtab_growth_factor,"goo/collections/table","tab-growth-factor");
EXT(YcompilerSastYapplication_tailQ,"compiler/ast","application-tail?");
EXT(YcompilerSastYapplication_knownQ,"compiler/ast","application-known?");
EXT(YcompilerSastYfunction_registers_setter,"compiler/ast","function-registers-setter");
EXT(YgooScollectionsScollectionYelt_type,"goo/collections/collection","elt-type");
EXT(YcompilerSastYsignature_names_setter,"compiler/ast","signature-names-setter");
DEF(YcompilerSast_evalYenv_global_binding_value,"compiler/ast-eval","env-global-binding-value");
EXT(YgooScollectionsScollectionYLenumG,"goo/collections/collection","<enum>");
EXT(YruntimeSruntimeYLsimple_errorG,"runtime/runtime","<simple-error>");
EXT(YcompilerSastYLapplicationG,"compiler/ast","<application>");
EXT(Yprop_init,"runtime/boot","prop-init");
EXT(YcompilerSastYLargumentsG,"compiler/ast","<arguments>");
EXT(YcompilerSastYboundQ_reference,"compiler/ast","bound?-reference");
EXT(YgooScollectionsStableYtab_test,"goo/collections/table","tab-test");
EXT(Yfun_naryQ,"runtime/boot","fun-nary?");
EXT(YPdefine_method,"runtime/boot","%define-method");
EXT(YcompilerSastYfix_let_body_setter,"compiler/ast","fix-let-body-setter");
EXT(YLsubclassG,"runtime/boot","<subclass>");
EXT(YcompilerSastYLmodule_bindingG,"compiler/ast","<module-binding>");
EXT(YcompilerSastYfunction_signature,"compiler/ast","function-signature");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooScollectionsStableYid_hash,"goo/collections/table","id-hash");
EXT(YcompilerSastYDgoo_runtime_module_name,"compiler/ast","$goo-runtime-module-name");
DEF(YcompilerSast_evalYenv_global_binding_value_setter,"compiler/ast-eval","env-global-binding-value-setter");
EXT(YgooScollectionsSrangeYfrom,"goo/collections/range","from");
EXT(Yclass_descendents,"runtime/boot","class-descendents");
EXT(YgooScollectionsSrangeYrange,"goo/collections/range","range");
EXT(YgooSportYputs,"goo/port","puts");
EXT(YcompilerSastYLprogramG,"compiler/ast","<program>");
EXT(YgooSportYout,"goo/port","out");
EXT(YPPmacro,"runtime/boot","%%macro");
EXT(Ygen_refs_setter,"runtime/boot","gen-refs-setter");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScollectionsSsequenceYreject,"goo/collections/sequence","reject");
EXT(YruntimeSruntimeYLrestartG,"runtime/runtime","<restart>");
DEF(YcompilerSast_evalYenv_values,"compiler/ast-eval","env-values");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooStypeY2nd,"goo/type","2nd");
EXT(YcompilerSastYdo_module_loader_modules,"compiler/ast","do-module-loader-modules");
EXT(YcompilerSastYobjectify_quotation,"compiler/ast","objectify-quotation");
EXT(YPsymbols,"runtime/boot","%symbols");
EXT(YLmagG,"runtime/boot","<mag>");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yprop_value_setter,"runtime/boot","prop-value-setter");
EXT(YcompilerSastYsignature_arity_setter,"compiler/ast","signature-arity-setter");
EXT(YcompilerSastYfix_let_body,"compiler/ast","fix-let-body");
EXT(YcompilerSastYLast_macro_definitionG,"compiler/ast","<ast-macro-definition>");
EXT(YLchrG,"runtime/boot","<chr>");
EXT(YcompilerSastYbinding_module_name,"compiler/ast","binding-module-name");
EXT(YLflatG,"runtime/boot","<flat>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YruntimeSruntimeYapp_args,"runtime/runtime","app-args");
EXT(YcompilerSastYsignature_bindings_setter,"compiler/ast","signature-bindings-setter");
EXT(YcompilerSastYfunction_data_refs_setter,"compiler/ast","function-data-refs-setter");
EXT(YcompilerSastYast_define_binding,"compiler/ast","ast-define-binding");
EXT(YcompilerSastYglobal_box_value_setter,"compiler/ast","global-box-value-setter");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YcompilerSastYLglobal_referenceG,"compiler/ast","<global-reference>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YcompilerSastYLglobal_assignmentG,"compiler/ast","<global-assignment>");
EXT(YsubtypeQ,"runtime/boot","subtype?");
EXT(YLtupG,"runtime/boot","<tup>");
EXT(YgooScollectionsScollectionYlow_elt,"goo/collections/collection","low-elt");
EXT(Ygen_refs,"runtime/boot","gen-refs");
DEF(YcompilerSast_evalYenv_global_binding_boundQ,"compiler/ast-eval","env-global-binding-bound?");
EXT(Ynot,"runtime/boot","not");
EXT(YgooScollectionsScollectionYmap_keyed,"goo/collections/collection","map-keyed");
EXT(YcompilerSastYfunction_temporaries,"compiler/ast","function-temporaries");
EXT(YgooScollectionsSsequenceYsub,"goo/collections/sequence","sub");
EXT(YcompilerSastYLast_genericG,"compiler/ast","<ast-generic>");
EXT(YgooScollectionsScollectionYitems,"goo/collections/collection","items");
EXT(YcompilerSastYassignment_form,"compiler/ast","assignment-form");
EXT(YcompilerSastYlocals_body_setter,"compiler/ast","locals-body-setter");
EXT(YcompilerSastYbinding_native_toQ,"compiler/ast","binding-native-to?");
EXT(YcompilerSastYreference_called_functionQ,"compiler/ast","reference-called-function?");
EXT(YcompilerSastYbinding_global_box,"compiler/ast","binding-global-box");
EXT(YruntimeSruntimeYlist_handlers,"runtime/runtime","list-handlers");
EXT(YgooStypeYtQ,"goo/type","t?");
EXT(YcompilerSastYLcompile_timeG,"compiler/ast","<compile-time>");
EXT(YcompilerSastYfunction_free_setter,"compiler/ast","function-free-setter");
EXT(YgooScollectionsSsequenceYpos,"goo/collections/sequence","pos");
EXT(YgooScollectionsSstringYstr,"goo/collections/string","str");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YcompilerSastYlocals_body,"compiler/ast","locals-body");
EXT(Yfab_sym,"runtime/boot","fab-sym");
EXT(YcompilerSastYbind_exit_main_fun,"compiler/ast","bind-exit-main-fun");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YcompilerSastYapplication_arguments,"compiler/ast","application-arguments");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YcompilerSastYsignature_names,"compiler/ast","signature-names");
EXT(Ysig_specs,"runtime/boot","sig-specs");
EXT(Ytype_error,"runtime/boot","type-error");
EXT(YOlst,"runtime/boot","@lst");
EXT(YcompilerSastYfunction_data_refs,"compiler/ast","function-data-refs");
EXT(YruntimeSruntimeYdescribe_condition,"runtime/runtime","describe-condition");
EXT(YruntimeSruntimeYapp_filename,"runtime/runtime","app-filename");
EXT(YruntimeSruntimeYbuild_condition_interactively,"runtime/runtime","build-condition-interactively");
EXT(YruntimeSruntimeYdefault_handler,"runtime/runtime","default-handler");
EXT(YTreport_prop_unbound_errorsQT,"runtime/boot","*report-prop-unbound-errors?*");
EXT(Yerror,"runtime/boot","error");
EXT(YLsingletonG,"runtime/boot","<singleton>");
EXT(YgooScollectionsSassocYassocs_test,"goo/collections/assoc","assocs-test");
EXT(YgooStypeYlen,"goo/type","len");
EXT(YgooScollectionsScollectionYaddX,"goo/collections/collection","add!");
EXT(YcompilerSastYLast_functionG,"compiler/ast","<ast-function>");
EXT(Ynil,"runtime/boot","nil");
EXT(Ywrong_number_arguments_error,"runtime/boot","wrong-number-arguments-error");
EXT(YLfunG,"runtime/boot","<fun>");
EXT(YcompilerSastYfunction_index,"compiler/ast","function-index");
EXT(YgooScollectionsSstringYTprint_baseT,"goo/collections/string","*print-base*");
EXT(YgooScollectionsScollectionYfold,"goo/collections/collection","fold");
EXT(YcompilerSastYfix_let_arguments_setter,"compiler/ast","fix-let-arguments-setter");
EXT(YcompilerSastYmodule_target_environment,"compiler/ast","module-target-environment");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooStypeYtL,"goo/type","t<");
EXT(YruntimeSruntimeYLerrorG,"runtime/runtime","<error>");
EXT(Yprop_boundQ,"runtime/boot","prop-bound?");
DEF(YcompilerSast_evalYenv_runtime_value,"compiler/ast-eval","env-runtime-value");
EXT(YruntimeSruntimeYcompose,"runtime/runtime","compose");
EXT(YcompilerSastYfunction_binding,"compiler/ast","function-binding");
EXT(YcompilerSastYfunction_body_setter,"compiler/ast","function-body-setter");
EXT(Ysig_val,"runtime/boot","sig-val");
EXT(YgooScollectionsScollectionYelt_or,"goo/collections/collection","elt-or");
EXT(YLlstG,"runtime/boot","<lst>");
EXT(YcompilerSastYobjectify_with_subtransaction,"compiler/ast","objectify-with-subtransaction");
EXT(Yfab_class,"runtime/boot","fab-class");
EXT(YLlogG,"runtime/boot","<log>");
EXT(YgooSportYput,"goo/port","put");
EXT(YcompilerSastYbinding_info,"compiler/ast","binding-info");
EXT(YcompilerSastYinit_environment_for_eval,"compiler/ast","init-environment-for-eval");
EXT(Yfun_specs,"runtime/boot","fun-specs");
EXT(Ytype_object,"runtime/boot","type-object");
EXT(YgooScollectionsScollectionYelt_setter,"goo/collections/collection","elt-setter");
EXT(Yfun_name_setter,"runtime/boot","fun-name-setter");
EXT(YgooScollectionsSsequenceYpick,"goo/collections/sequence","pick");
EXT(YruntimeSruntimeYread,"runtime/runtime","read");
EXT(YruntimeSruntimeYdefault_handler_description,"runtime/runtime","default-handler-description");
EXT(YcompilerSastYsignature_bindings,"compiler/ast","signature-bindings");
EXT(YgooScollectionsScollectionYdo_keyed,"goo/collections/collection","do-keyed");
EXT(YcompilerSastYbinding_dottedQ,"compiler/ast","binding-dotted?");
EXT(YcompilerSastYbinding_dynamic_extentQ_setter,"compiler/ast","binding-dynamic-extent?-setter");
EXT(YgooScollectionsSsequenceYcat2,"goo/collections/sequence","cat2");
EXT(Yhandler_info_message,"runtime/boot","handler-info-message");
EXT(YcompilerSastYfunction_source_setter,"compiler/ast","function-source-setter");
EXT(YLsimple_handler_infoG,"runtime/boot","<simple-handler-info>");
EXT(YruntimeSruntimeYformat_to_string,"runtime/runtime","format-to-string");
EXT(Ysym_name,"runtime/boot","sym-name");
EXT(YruntimeSruntimeYDdefault_handler_info,"runtime/runtime","$default-handler-info");
EXT(YcompilerSastYLpredefined_applicationG,"compiler/ast","<predefined-application>");
EXT(YcompilerSastYLboundQG,"compiler/ast","<bound?>");
EXT(YgooScollectionsScollectionYfind,"goo/collections/collection","find");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YcompilerSastYinstall_initial_bindings,"compiler/ast","install-initial-bindings");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScollectionsScollectionYzap,"goo/collections/collection","zap");
EXT(YgooScollectionsScollectionYfoldA,"goo/collections/collection","fold+");
EXT(Ynul,"runtime/boot","nul");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YcompilerSastYas_lst,"compiler/ast","as-lst");
EXT(YcompilerSastYmonitor_info,"compiler/ast","monitor-info");
EXT(YcompilerSastYfunction_free,"compiler/ast","function-free");
EXT(YcompilerSastYfunction_debug_name,"compiler/ast","function-debug-name");
EXT(Yfun_name,"runtime/boot","fun-name");
EXT(YgooScollectionsSbufferYlen_setter,"goo/collections/buffer","len-setter");
EXT(YcompilerSastYprobe_module,"compiler/ast","probe-module");
EXT(YcompilerSastYbinding_info_setter,"compiler/ast","binding-info-setter");
EXT(YgooSportYLportG,"goo/port","<port>");
EXT(YgooScollectionsScollectionYmemQ,"goo/collections/collection","mem?");
DEF(YcompilerSast_evalYenv_binding_value,"compiler/ast-eval","env-binding-value");
EXT(Yobject_class,"runtime/boot","object-class");
EXT(Yprop_owner,"runtime/boot","prop-owner");
EXT(YcompilerSastYfix_let_arguments,"compiler/ast","fix-let-arguments");
EXT(YgooStypeYtE,"goo/type","t=");
EXT(YcompilerSastYLregular_applicationG,"compiler/ast","<regular-application>");
EXT(YcompilerSastYDgoo_boot_module_name,"compiler/ast","$goo-boot-module-name");
EXT(YcompilerSastYalternative_consequent,"compiler/ast","alternative-consequent");
EXT(YcompilerSastYreference_frame_offset,"compiler/ast","reference-frame-offset");
EXT(YgooScollectionsSrangeYLrangeG,"goo/collections/range","<range>");
EXT(Yprop_value,"runtime/boot","prop-value");
EXT(YcompilerSastYLassignmentG,"compiler/ast","<assignment>");
EXT(Yclass_parents,"runtime/boot","class-parents");
EXT(YgooSportYforce_out,"goo/port","force-out");
EXT(YcompilerSastYbinding_type_setter,"compiler/ast","binding-type-setter");
EXT(YgooSmagnitudeYG,"goo/magnitude",">");
EXT(YruntimeSruntimeYhandler_function,"runtime/runtime","handler-function");
EXT(YruntimeSruntimeYloc_val_setter,"runtime/runtime","loc-val-setter");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScollectionsScollectionYadd,"goo/collections/collection","add");
EXT(YgooSportYLstr_portG,"goo/port","<str-port>");
EXT(YgooScollectionsScollectionYany2Q,"goo/collections/collection","any2?");
EXT(YcompilerSastYsignature_naryQ_setter,"compiler/ast","signature-nary?-setter");
EXT(YcompilerSastYenv_object_name,"compiler/ast","env-object-name");
DEF(YcompilerSast_evalYenv_frameX,"compiler/ast-eval","env-frame!");
EXT(YLseqG,"runtime/boot","<seq>");
EXT(YLanyG,"runtime/boot","<any>");
EXT(Yprop_type,"runtime/boot","prop-type");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YcompilerSastYunwind_protect_protected_thunk,"compiler/ast","unwind-protect-protected-thunk");
EXT(Yvec,"runtime/boot","vec");
EXT(YgooScollectionsSstepYfirst_then,"goo/collections/step","first-then");
EXT(YgooScollectionsSsequenceYcatX,"goo/collections/sequence","cat!");
DEF(YcompilerSast_evalYenv_binding_value_setter,"compiler/ast-eval","env-binding-value-setter");
EXT(YruntimeSruntimeYcurry,"runtime/runtime","curry");
EXT(YcompilerSastYLreferenceG,"compiler/ast","<reference>");
EXT(YcompilerSastYfind_environment_module,"compiler/ast","find-environment-module");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YcompilerSastYfunction_index_setter,"compiler/ast","function-index-setter");
DEF(YcompilerSast_evalYenv_parent_setter,"compiler/ast-eval","env-parent-setter");
EXT(YgooStypeYas,"goo/type","as");
EXT(YgooScollectionsSstringYnum_to_str_base,"goo/collections/string","num-to-str-base");
EXT(YcompilerSastYLfab_listG,"compiler/ast","<fab-list>");
EXT(YgooScollectionsSmapYLmapG,"goo/collections/map","<map>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YcompilerSastYLfix_letG,"compiler/ast","<fix-let>");
DEF(YcompilerSast_evalYenv_local_reference_value_setter,"compiler/ast-eval","env-local-reference-value-setter");
EXT(Yclass_props,"runtime/boot","class-props");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YcompilerSastYobjectify_signature,"compiler/ast","objectify-signature");
EXT(YgooSmagnitudeYL,"goo/magnitude","<");
EXT(YgooScollectionsScollectionYnow_setter,"goo/collections/collection","now-setter");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YcompilerSastYfree_environment,"compiler/ast","free-environment");
EXT(YcompilerSastYmonitor_handler,"compiler/ast","monitor-handler");
EXT(YcompilerSastYLruntime_assignmentG,"compiler/ast","<runtime-assignment>");
EXT(YPprop_unbound_error,"runtime/boot","%prop-unbound-error");
EXT(YgooSportYnewline,"goo/port","newline");
EXT(YcompilerSastYbinding_kind,"compiler/ast","binding-kind");
EXT(YLsigG,"runtime/boot","<sig>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYA,"goo/math","+");
EXT(YcompilerSastYLglobal_boxG,"compiler/ast","<global-box>");
EXT(YcompilerSastYreference_binding,"compiler/ast","reference-binding");
EXT(YgooSmagnitudeYmax,"goo/magnitude","max");
EXT(Yfind_setter,"runtime/boot","find-setter");
EXT(YcompilerSastYfunction_bindings,"compiler/ast","function-bindings");
EXT(YcompilerSastYLalternativeG,"compiler/ast","<alternative>");
EXT(YgooStypeYanyQ,"goo/type","any?");
EXT(YcompilerSastYbinding_index_setter,"compiler/ast","binding-index-setter");
EXT(YgooSmathYB,"goo/math","&");
EXT(YcompilerSastYfunction_source,"compiler/ast","function-source");
DEF(YcompilerSast_evalYenv_parent,"compiler/ast-eval","env-parent");
DEF(YcompilerSast_evalYenv_local_value_setter,"compiler/ast-eval","env-local-value-setter");
EXT(YgooSportYLstr_in_portG,"goo/port","<str-in-port>");
EXT(YgooScollectionsStableYtab_gc_state,"goo/collections/table","tab-gc-state");
EXT(YgooScollectionsScollectionYinto,"goo/collections/collection","into");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScollectionsStableYcase_insensitive_string_equal,"goo/collections/table","case-insensitive-string-equal");
EXT(YgooScollectionsScollectionYempty,"goo/collections/collection","empty");
EXT(YOall2Q,"runtime/boot","@all2?");
EXT(YcompilerSastYLast_methodG,"compiler/ast","<ast-method>");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YDmin_int,"runtime/boot","$min-int");
EXT(YgooSportYLin_portG,"goo/port","<in-port>");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSmathYN,"goo/math","~");
EXT(YcompilerSastYsequentialize,"compiler/ast","sequentialize");
EXT(YLcolG,"runtime/boot","<col>");
EXT(YLclassG,"runtime/boot","<class>");
EXT(Ysig_names,"runtime/boot","sig-names");
DEF(YcompilerSast_evalYenv_function_setter,"compiler/ast-eval","env-function-setter");
EXT(YgooScollectionsSassocYLassocsG,"goo/collections/assoc","<assocs>");
EXT(YcompilerSastYLconstantG,"compiler/ast","<constant>");
EXT(YcompilerSastYruntime_environment,"compiler/ast","runtime-environment");
EXT(YcompilerSastYsignature_value,"compiler/ast","signature-value");
EXT(Yfab_gen,"runtime/boot","fab-gen");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YcompilerSastYenvironment_uses_modules,"compiler/ast","environment-uses-modules");
EXT(YcompilerSastYLunwind_protectG,"compiler/ast","<unwind-protect>");
EXT(YcompilerSastYbinding_name,"compiler/ast","binding-name");
EXT(YcompilerSastYmonitor_type,"compiler/ast","monitor-type");
DEF(YcompilerSast_evalYenv_function,"compiler/ast-eval","env-function");
EXT(YDmax_int,"runtime/boot","$max-int");
EXT(YruntimeSruntimeYloc_val,"runtime/runtime","loc-val");
EXT(YgooScollectionsScollectionYmap2,"goo/collections/collection","map2");
EXT(YgooScollectionsSsequenceYlast,"goo/collections/sequence","last");
EXT(YruntimeSruntimeYLhandler_infoG,"runtime/runtime","<handler-info>");
EXT(YgooSportYLout_portG,"goo/port","<out-port>");
EXT(YcompilerSastYfix_let_types_setter,"compiler/ast","fix-let-types-setter");
EXT(YcompilerSastYmodule_binding,"compiler/ast","module-binding");
EXT(YgooSportYport_contents,"goo/port","port-contents");
EXT(YcompilerSastYunwind_protect_cleanup_thunk,"compiler/ast","unwind-protect-cleanup-thunk");
EXT(YcompilerSastYLpassive_programG,"compiler/ast","<passive-program>");
EXT(Ytail_setter,"runtime/boot","tail-setter");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YcompilerSastYalternative_condition,"compiler/ast","alternative-condition");
EXT(YcompilerSastYconstant_value,"compiler/ast","constant-value");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YPwith_monitor,"runtime/boot","%with-monitor");
EXT(Ysig_arity,"runtime/boot","sig-arity");
EXT(YLreplace_generic_restartG,"runtime/boot","<replace-generic-restart>");
EXT(YgooScollectionsStableYLstr_tabG,"goo/collections/table","<str-tab>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YcompilerSastYfunction_body,"compiler/ast","function-body");
EXT(YruntimeSruntimeYspread,"runtime/runtime","spread");
EXT(YPvnul,"runtime/boot","%vnul");
EXT(YgooSmagnitudeYmin,"goo/magnitude","min");
EXT(YcompilerSastYmodule_name_to_relpath,"compiler/ast","module-name-to-relpath");
EXT(YTboot_macro_namesT,"runtime/boot","*boot-macro-names*");
EXT(YcompilerSastYinit_ast,"compiler/ast","init-ast");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YcompilerSastYsignature_value_setter,"compiler/ast","signature-value-setter");
EXT(YcompilerSastYprogram_register,"compiler/ast","program-register");
EXT(YruntimeSruntimeYformat,"runtime/runtime","format");
EXT(YcompilerSastYlocals_bindings,"compiler/ast","locals-bindings");
EXT(YLoptsG,"runtime/boot","<opts>");
EXT(Yfind_getter,"runtime/boot","find-getter");
EXT(YcompilerSastYfunction_temporaries_setter,"compiler/ast","function-temporaries-setter");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooStypeYtT,"goo/type","t*");
EXT(YcompilerSastYfunction_registers,"compiler/ast","function-registers");
EXT(Ytail,"runtime/boot","tail");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YcompilerSastYLlocal_referenceG,"compiler/ast","<local-reference>");
EXT(YLtypeG,"runtime/boot","<type>");
EXT(Yord_app_mets,"runtime/boot","ord-app-mets");
EXT(YcompilerSastYmodule_loader_module_type,"compiler/ast","module-loader-module-type");
DEF(YcompilerSast_evalYenv_names_setter,"compiler/ast-eval","env-names-setter");
EXT(YcompilerSastYprogram_type_setter,"compiler/ast","program-type-setter");
EXT(YcompilerSastYLmonitorG,"compiler/ast","<monitor>");
EXT(YcompilerSastYfunction_self_recursiveQ_setter,"compiler/ast","function-self-recursive?-setter");
EXT(YruntimeSruntimeYdescribe_handler,"runtime/runtime","describe-handler");
EXT(YgooScollectionsScollectionYnxt,"goo/collections/collection","nxt");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YLlocG,"runtime/boot","<loc>");
EXT(YgooScollectionsSsequenceY3rd,"goo/collections/sequence","3rd");
EXT(YruntimeSruntimeYfab_handler,"runtime/runtime","fab-handler");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSportYport_index,"goo/port","port-index");
EXT(YcompilerSastYLmodule_loaderG,"compiler/ast","<module-loader>");
EXT(YgooScollectionsScollectionYfill,"goo/collections/collection","fill");
EXT(YgooScollectionsScollectionYfab,"goo/collections/collection","fab");
EXT(Ytype_elts,"runtime/boot","type-elts");
EXT(YcompilerSastYmodule_syntax_environment,"compiler/ast","module-syntax-environment");
DEF(YcompilerSast_evalYenv_names,"compiler/ast-eval","env-names");
EXT(YgooSportYreadyQ,"goo/port","ready?");
EXT(YgooSportYclose,"goo/port","close");
EXT(YgooScollectionsSbufferYlenSfill_setter,"goo/collections/buffer","len/fill-setter");
EXT(YgooScollectionsStableYDpermanent_hash_state,"goo/collections/table","$permanent-hash-state");
EXT(YcompilerSastYbinding_locative,"compiler/ast","binding-locative");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScollectionsSlistYLlistG,"goo/collections/list","<list>");
EXT(YgooScollectionsStableYcase_insensitive_string_hash,"goo/collections/table","case-insensitive-string-hash");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YcompilerSastYprogram_type,"compiler/ast","program-type");
EXT(YgooScollectionsScollectionYdel,"goo/collections/collection","del");
EXT(Yclass_name,"runtime/boot","class-name");
EXT(YcompilerSastYreference_called_functionQ_setter,"compiler/ast","reference-called-function?-setter");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YcompilerSastYbinding_mutableQ,"compiler/ast","binding-mutable?");
EXT(Ymay_isaQ,"runtime/boot","may-isa?");
EXT(YcompilerSastYLcomputed_programG,"compiler/ast","<computed-program>");
EXT(YcompilerSastYfunction_self_recursiveQ,"compiler/ast","function-self-recursive?");
EXT(Yhandler_info_arguments,"runtime/boot","handler-info-arguments");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSioSwriteYdisplay,"goo/io/write","display");
EXT(YgooScollectionsSlistYpop,"goo/collections/list","pop");
EXT(YcompilerSastYLimmediate_constantG,"compiler/ast","<immediate-constant>");
EXT(YPsnul,"runtime/boot","%snul");
EXT(YcompilerSastYLlocal_assignmentG,"compiler/ast","<local-assignment>");
EXT(YcompilerSastYLmodule_binding_referenceG,"compiler/ast","<module-binding-reference>");
EXT(YcompilerSastYfab_g2c_module,"compiler/ast","fab-g2c-module");
EXT(YgooSmathY_,"goo/math","-");
EXT(Ygen_add_met,"runtime/boot","gen-add-met");
DEF(YcompilerSast_evalYenv_runtime_value_setter,"compiler/ast-eval","env-runtime-value-setter");
EXT(YruntimeSruntimeYcondition_arguments,"runtime/runtime","condition-arguments");
EXT(YgooScollectionsScollectionYnow_key,"goo/collections/collection","now-key");
EXT(Yprop_setter,"runtime/boot","prop-setter");
DEF(YcompilerSast_evalYenv_local_reference_value,"compiler/ast-eval","env-local-reference-value");
EXT(Yfun_val,"runtime/boot","fun-val");
EXT(YruntimeSruntimeYchoose_handler,"runtime/runtime","choose-handler");
EXT(YgooScollectionsScollectionYkeys,"goo/collections/collection","keys");
EXT(YgooScollectionsStableYtab_growth_threshold,"goo/collections/table","tab-growth-threshold");
EXT(YcompilerSastYassignment_binding,"compiler/ast","assignment-binding");
EXT(YgooSmagnitudeYGE,"goo/magnitude",">=");
EXT(YgooScollectionsScollectionYLtabG,"goo/collections/collection","<tab>");
EXT(YcompilerSastYfix_let_types,"compiler/ast","fix-let-types");
DEF(YcompilerSast_evalYenv_values_setter,"compiler/ast-eval","env-values-setter");
DEF(YcompilerSast_evalYTstackT,"compiler/ast-eval","*stack*");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooStypeYtA,"goo/type","t+");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YcompilerSastYsignature_arity,"compiler/ast","signature-arity");
EXT(YgooScollectionsStableYtab_shrink_threshold,"goo/collections/table","tab-shrink-threshold");
EXT(YcompilerSastYLprogramsG,"compiler/ast","<programs>");
EXT(Yfun_names,"runtime/boot","fun-names");
EXT(YcompilerSastYbinding_type,"compiler/ast","binding-type");
EXT(YgooScollectionsSsequenceYrev,"goo/collections/sequence","rev");
EXT(Yfile_opening_error,"runtime/boot","file-opening-error");
EXT(Yclass_ancestors,"runtime/boot","class-ancestors");
EXT(YgooScollectionsSsequenceY1st,"goo/collections/sequence","1st");
EXT(YcompilerSastYlocals_bindings_setter,"compiler/ast","locals-bindings-setter");
EXT(YgooSmathYK,"goo/math","|");
EXT(Yincongruent_method_error,"runtime/boot","incongruent-method-error");
EXT(YgooSportYpeek,"goo/port","peek");
EXT(YcompilerSastYglobal_box_value,"compiler/ast","global-box-value");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScollectionsScollectionYnow,"goo/collections/collection","now");
EXT(YgooSportYLfile_in_portG,"goo/port","<file-in-port>");
DEF(YcompilerSast_evalYast_eval_specs,"compiler/ast-eval","ast-eval-specs");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YcompilerSastYLruntime_referenceG,"compiler/ast","<runtime-reference>");
EXT(YcompilerSastYenvironment_module,"compiler/ast","environment-module");
EXT(YcompilerSastYLstatic_global_environmentG,"compiler/ast","<static-global-environment>");
EXT(YcompilerSastYsignature_specs_setter,"compiler/ast","signature-specs-setter");
EXT(Ytup,"runtime/boot","tup");
EXT(YcompilerSastYLsequentialG,"compiler/ast","<sequential>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YcompilerSastYload_module,"compiler/ast","load-module");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScollectionsSbufferYpop_lastX,"goo/collections/buffer","pop-last!");
EXT(YcompilerSastYlocals_functions_setter,"compiler/ast","locals-functions-setter");
EXT(YLfloG,"runtime/boot","<flo>");
EXT(YLsymG,"runtime/boot","<sym>");
EXT(YcompilerSastYfix_let_bindings_setter,"compiler/ast","fix-let-bindings-setter");
EXT(YcompilerSastYsignature_specs,"compiler/ast","signature-specs");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(Ymet_appQ,"runtime/boot","met-app?");
EXT(Ynew,"runtime/boot","new");
EXT(Yprop_getter,"runtime/boot","prop-getter");
DEF(YcompilerSast_evalYas_fun_name,"compiler/ast-eval","as-fun-name");
EXT(YcompilerSastYbinding_dynamic_extentQ,"compiler/ast","binding-dynamic-extent?");
EXT(Yobject_parents,"runtime/boot","object-parents");
EXT(YruntimeSruntimeYLserious_conditionG,"runtime/runtime","<serious-condition>");
EXT(YcompilerSastYreport_undefined_global_bindings,"compiler/ast","report-undefined-global-bindings");
EXT(YcompilerSastYlocals_functions,"compiler/ast","locals-functions");
DEF(YcompilerSast_evalYLloc_envG,"compiler/ast-eval","<loc-env>");
EXT(YcompilerSastYapplication_function,"compiler/ast","application-function");
EXT(Yfun_mets,"runtime/boot","fun-mets");
EXT(YOisaQ,"runtime/boot","@isa?");
EXT(YruntimeSruntimeYalways,"runtime/runtime","always");
EXT(YruntimeSruntimeYhandler_matchesQ,"runtime/runtime","handler-matches?");
EXT(YcompilerSastYdo_named_static_global_bindings,"compiler/ast","do-named-static-global-bindings");
EXT(YcompilerSastYbinding_index,"compiler/ast","binding-index");
EXT(Ygen_src_setter,"runtime/boot","gen-src-setter");
EXT(YruntimeSruntimeYTgensym_counterT,"runtime/runtime","*gensym-counter*");
EXT(YgooSmacrosYdo,"goo/macros","do");
DEF(YcompilerSast_evalYast_eval_boundQ,"compiler/ast-eval","ast-eval-bound?");
EXT(YruntimeSruntimeYrcurry,"runtime/runtime","rcurry");
EXT(YruntimeSruntimeYcondition_message,"runtime/runtime","condition-message");
EXT(YruntimeSruntimeYLconditionG,"runtime/runtime","<condition>");
EXT(YcompilerSastYast_evaluate,"compiler/ast","ast-evaluate");
EXT(YLpropG,"runtime/boot","<prop>");
EXT(YcompilerSastYset_module_environments,"compiler/ast","set-module-environments");
EXT(YcompilerSastYsignature_naryQ,"compiler/ast","signature-nary?");
EXT(YcompilerSastYLbind_exitG,"compiler/ast","<bind-exit>");
EXT(YgooScollectionsScollectionYelts,"goo/collections/collection","elts");
EXT(YcompilerSastYfunction_debug_name_setter,"compiler/ast","function-debug-name-setter");
EXT(YgooScollectionsScollectionYkey_test,"goo/collections/collection","key-test");
EXT(YcompilerSastYfunction_value,"compiler/ast","function-value");
EXT(YLgenG,"runtime/boot","<gen>");
EXT(YgooSmagnitudeYLE,"goo/magnitude","<=");
DEF(YcompilerSast_evalYexport_goo_method,"compiler/ast-eval","export-goo-method");
EXT(YcompilerSastYLdefinitionG,"compiler/ast","<definition>");
EXT(Ykeyboard_interrupt,"runtime/boot","keyboard-interrupt");
EXT(YcompilerSastYLast_signatureG,"compiler/ast","<ast-signature>");
EXT(Ygen_src,"runtime/boot","gen-src");
EXT(YruntimeSruntimeYbuild_condition_for_handler_interactively,"runtime/runtime","build-condition-for-handler-interactively");
EXT(YcompilerSastYalternative_alternant,"compiler/ast","alternative-alternant");
EXT(YgooSportYgets,"goo/port","gets");
EXT(YgooScollectionsSlistYlist,"goo/collections/list","list");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YcompilerSsyntaxYsexpr_signature_parameters,"compiler/syntax","sexpr-signature-parameters");
EXT(YisaQ,"runtime/boot","isa?");
EXT(Yobject_props,"runtime/boot","object-props");
DEF(YcompilerSast_evalYarrange_arguments,"compiler/ast-eval","arrange-arguments");
EXT(YgooScollectionsScollectionYfinQ,"goo/collections/collection","fin?");
EXT(YgooScollectionsSstringYstr_to_num,"goo/collections/string","str-to-num");
EXT(YcompilerSastYLmoduleG,"compiler/ast","<module>");
EXT(YgooStypeYall2Q,"goo/type","all2?");
EXT(YcompilerSastYunchecked_runtime_environment,"compiler/ast","unchecked-runtime-environment");
EXT(YcompilerSastYfind_binding,"compiler/ast","find-binding");
EXT(YgooScollectionsSstepYLstepG,"goo/collections/step","<step>");
EXT(YcompilerSastYbinding_inferred_type,"compiler/ast","binding-inferred-type");
DEF(YcompilerSast_evalYast_eval,"compiler/ast-eval","ast-eval");
EXT(YgooSportYopen,"goo/port","open");
EXT(YTmacros_okQT,"runtime/boot","*macros-ok?*");
EXT(YcompilerSastYbinding_dottedQ_setter,"compiler/ast","binding-dotted?-setter");
EXT(Ysig_naryQ,"runtime/boot","sig-nary?");
EXT(YLintG,"runtime/boot","<int>");
EXT(YLstrG,"runtime/boot","<str>");
EXT(YgooScollectionsScollectionYallQ,"goo/collections/collection","all?");
EXT(Yfun_arity,"runtime/boot","fun-arity");
EXT(YPprop,"runtime/boot","%prop");
EXT(YgooScollectionsSsequenceYsub_setter,"goo/collections/sequence","sub-setter");
EXT(YgooScollectionsSsequenceYdel_dups,"goo/collections/sequence","del-dups");
EXT(Yadd_prop,"runtime/boot","add-prop");
EXT(YgooScollectionsSmapYfab_map,"goo/collections/map","fab-map");
EXT(YruntimeSruntimeYLsimple_conditionG,"runtime/runtime","<simple-condition>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_1);
DEFLIT(lit_59);
DEFLIT(lit_47);
DEFLIT(lit_43);
DEFLIT(lit_36);
DEFLIT(lit_56);
DEFLIT(lit_50);
DEFLIT(lit_64);
DEFLIT(lit_0);
DEFLIT(lit_77);
DEFLIT(lit_73);
DEFLIT(lit_25);
DEFLIT(lit_13);
DEFLIT(lit_40);
DEFLIT(lit_2);
DEFLIT(lit_53);
DEFLIT(lit_42);
DEFLIT(lit_49);
DEFLIT(lit_58);
DEFLIT(lit_51);
DEFLIT(lit_22);
DEFLIT(lit_6);
DEFLIT(lit_76);
DEFLIT(lit_66);
DEFLIT(lit_20);
DEFLIT(lit_62);
DEFLIT(lit_63);
DEFLIT(lit_57);
DEFLIT(lit_4);
DEFLIT(lit_74);
DEFLIT(lit_12);
DEFLIT(lit_5);
DEFLIT(lit_34);
DEFLIT(lit_23);
DEFLIT(lit_30);
DEFLIT(lit_33);
DEFLIT(lit_38);
DEFLIT(lit_75);
DEFLIT(lit_14);
DEFLIT(lit_41);
DEFLIT(lit_26);
DEFLIT(lit_71);
DEFLIT(lit_54);
DEFLIT(lit_27);
DEFLIT(lit_72);
DEFLIT(lit_45);
DEFLIT(lit_46);
DEFLIT(lit_9);
DEFLIT(lit_35);
DEFLIT(lit_31);
DEFLIT(lit_67);
DEFLIT(lit_81);
DEFLIT(lit_18);
DEFLIT(lit_69);
DEFLIT(lit_65);
DEFLIT(lit_28);
DEFLIT(lit_3);
DEFLIT(lit_32);
DEFLIT(lit_8);
DEFLIT(lit_37);
DEFLIT(lit_11);
DEFLIT(lit_17);
DEFLIT(lit_39);
DEFLIT(lit_61);
DEFLIT(lit_19);
DEFLIT(lit_24);
DEFLIT(lit_16);
DEFLIT(lit_21);
DEFLIT(lit_70);
DEFLIT(lit_44);
DEFLIT(lit_55);
DEFLIT(lit_15);
DEFLIT(lit_52);
DEFLIT(lit_68);
DEFLIT(lit_60);
DEFLIT(lit_79);
DEFLIT(lit_10);
DEFLIT(lit_80);
DEFLIT(lit_7);
DEFLIT(lit_78);
DEFLIT(lit_29);
DEFLIT(lit_48);

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
FUNFOR(YcompilerSast_evalYarrange_arguments);
LOCFOR(fun_x_1428_31);
LOCFOR(fun_32);
LOCFOR(fun_33);
LOCFOR(fun_as_fun_name_34);
LOCFOR(fun_as_fun_name_35);
LOCFOR(fun_as_fun_name_36);
LOCFOR(fun_as_fun_name_37);
LOCFOR(fun_as_fun_name_38);
LOCFOR(fun_as_fun_name_39);
LOCFOR(fun_40);
LOCFOR(fun_export_goo_method_41);
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
FUNFOR(YcompilerSastYinit_environment_for_eval);
extern P YcompilerSast_evalYPdefine_binding (P,P);
extern P YcompilerSast_evalYPlookup_binding (P,P);
extern P YcompilerSast_evalYPensure_binding (P,P);
extern P YcompilerSast_evalYPdlvar_binding (P);
extern P YcompilerSast_evalYPbinding_boundQ (P);
extern P YcompilerSast_evalYPbinding_value (P);
extern P YcompilerSast_evalYPbinding_value_setter (P,P);
extern P YcompilerSast_evalY___main_0___ ();
extern P YcompilerSast_evalY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_env_global_binding_value_0) {
  P b_;
  P boxF1866;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYbinding_global_box),b_);
  check_type(T1,VARREF(YLanyG));
  boxF1866 = T1;
  if (boxF1866 != YPfalse) {
    T3 = CALL1(1,VARREF(YcompilerSastYglobal_box_value),boxF1866);
    T2 = T3;
  } else {
    T5 = CALL1(1,VARREF(YcompilerSastYbinding_name),b_);
    T4 = CALL2(1,VARREF(Yerror),LITREF(lit_2),T5);
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_env_global_binding_value_setter_1) {
  P value_,b_;
  P boxF1867;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(value_, 0);
  ARG(b_, 1);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYbinding_global_box),b_);
  check_type(T1,VARREF(YLanyG));
  boxF1867 = T1;
  boxF1867 = BOXFAB(boxF1867);
  T4 = BOXVAL(boxF1867);
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T7 = CALL1(1,VARREF(Ynew),VARREF(YcompilerSastYLglobal_boxG));
    T6 = CALL2(1,VARREF(YcompilerSastYbinding_global_box_setter),T7,b_);
    T5 = BOXVAL(boxF1867) = T6;
  } else {
  }
  T9 = BOXVAL(boxF1867);
  T8 = CALL2(1,VARREF(YcompilerSastYglobal_box_value_setter),value_,T9);
  T0 = T8;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_env_global_binding_boundQ_2) {
  P b_;
  P boxF1868;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYbinding_global_box),b_);
  check_type(T1,VARREF(YLanyG));
  boxF1868 = T1;
  if (boxF1868 != YPfalse) {
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
  T0 = CALL1(1,VARREF(YruntimeSruntimeYloc_val),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_env_runtime_value_setter_4) {
  P v_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(v_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL2(1,VARREF(YruntimeSruntimeYloc_val_setter),v_,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_env_parent_5) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcompilerSast_evalYenv_parent));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_env_parent_setter_6) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcompilerSast_evalYenv_parent));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_7) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_env_function_8) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcompilerSast_evalYenv_function));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_env_function_setter_9) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcompilerSast_evalYenv_function));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_10) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_env_names_11) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcompilerSast_evalYenv_names));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_env_names_setter_12) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcompilerSast_evalYenv_names));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_13) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(Ynil);
}

FUNCODEDEF(fun_env_values_14) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcompilerSast_evalYenv_values));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_env_values_setter_15) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcompilerSast_evalYenv_values));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_16) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(Ynil);
}

FUNCODEDEF(fun_env_frameX_17) {
  P env_,function_,names_,args_;
  P valuesF1869;
  P T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(env_, 0);
  ARG(function_, 1);
  ARG(names_, 2);
  ARG(args_, 3);
loop:
  T1 = CALL2(1,VARREF(YgooStypeYas),VARREF(YLvecG),args_);
  check_type(T1,VARREF(YLanyG));
  valuesF1869 = T1;
  T2 = CALLN(1,VARREF(Ynew),9,VARREF(YcompilerSast_evalYLloc_envG),VARREF(YcompilerSast_evalYenv_parent),env_,VARREF(YcompilerSast_evalYenv_function),function_,VARREF(YcompilerSast_evalYenv_values),valuesF1869,VARREF(YcompilerSast_evalYenv_names),names_);
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
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YcompilerSast_evalYenv_values),env_);
    T2 = CALL2(1,VARREF(YgooSmacrosYelt),T3,j_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YcompilerSast_evalYenv_parent),env_);
    T6 = CALL2(1,VARREF(YgooSmathY_),i_,YPint((P)1));
    T4 = CALL3(1,VARREF(YcompilerSast_evalYenv_local_value),T5,T6,j_);
    T0 = T4;
  }
UNLINK_STACK();
  RET(T0);
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
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YcompilerSast_evalYenv_values),env_);
    T2 = CALL3(1,VARREF(YgooScollectionsScollectionYelt_setter),v_,T3,j_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YcompilerSast_evalYenv_parent),env_);
    T6 = CALL2(1,VARREF(YgooSmathY_),i_,YPint((P)1));
    T4 = CALLN(1,VARREF(YcompilerSast_evalYenv_local_value_setter),4,v_,T5,T6,j_);
    T0 = T4;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_20) {
  P names_,i_;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(names_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),names_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YcompilerSast_evalYenv_parent),FREEREF(0));
    T2 = CALL2(1,VARREF(YcompilerSast_evalYenv_binding_value),T3,FREEREF(1));
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(Yhead),names_);
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(1),T6);
    if (T5 != YPfalse) {
      T8 = CALL1(1,VARREF(YcompilerSast_evalYenv_values),FREEREF(0));
      T7 = CALL2(1,VARREF(YgooSmacrosYelt),T8,i_);
      T4 = T7;
    } else {
      T10 = CALL1(1,VARREF(Ytail),names_);
      T11 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
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
  RET(T0);
}

FUNCODEDEF(fun_env_binding_value_21) {
  P env_,name_;
  P loopF1870;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(env_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),env_,VARREF(YcompilerSast_evalYDnul_loc_env));
  if (T1 != YPfalse) {
    T0 = VARREF(Ynul);
  } else {
    T3 = FUNSHELL(1,fun_loop_20,3);
    loopF1870 = T3;
    FUNINIT(loopF1870, 3,env_,name_,loopF1870);
    T5 = CALL1(1,VARREF(YcompilerSast_evalYenv_names),env_);
    T4 = CALL2(1,loopF1870,T5,YPint((P)0));
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_22) {
  P names_,i_;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(names_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),names_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YcompilerSast_evalYenv_parent),FREEREF(1));
    T2 = CALL3(1,VARREF(YcompilerSast_evalYenv_binding_value_setter),FREEREF(0),T3,FREEREF(2));
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(Yhead),names_);
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(2),T6);
    if (T5 != YPfalse) {
      T8 = CALL1(1,VARREF(YcompilerSast_evalYenv_values),FREEREF(1));
      T7 = CALL3(1,VARREF(YgooScollectionsScollectionYelt_setter),FREEREF(0),T8,i_);
      T4 = T7;
    } else {
      T10 = CALL1(1,VARREF(Ytail),names_);
      T11 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
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
  RET(T0);
}

FUNCODEDEF(fun_env_binding_value_setter_23) {
  P v_,env_,name_;
  P loopF1871;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(v_, 0);
  ARG(env_, 1);
  ARG(name_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_22,4);
  loopF1871 = T1;
  FUNINIT(loopF1871, 4,v_,env_,name_,loopF1871);
  T3 = CALL1(1,VARREF(YcompilerSast_evalYenv_names),env_);
  T2 = CALL2(1,loopF1871,T3,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ast_evaluate_24) {
  P e_;
  P T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T0 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),e_,VARREF(YcompilerSast_evalYDnul_loc_env));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ast_eval_25) {
  P e_,env_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T0 = CALL1(1,VARREF(YcompilerSastYconstant_value),e_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ast_eval_26) {
  P e_,env_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T0 = CALL1(1,VARREF(YcompilerSastYconstant_value),e_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ast_eval_27) {
  P e_,ee_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(ee_, 1);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYcompile_time_program),e_);
  T0 = CALL1(1,VARREF(YcompilerSastYast_evaluate),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_28) {
  P res_,specs_,i_;
  P typeF1873;
  P specF1872;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(res_, 0);
  ARG(specs_, 1);
  ARG(i_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),specs_);
    check_type(T4,VARREF(YLanyG));
    specF1872 = T4;
    if (specF1872 != YPfalse) {
      T7 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),specF1872,FREEREF(1));
      T6 = T7;
    } else {
      T6 = VARREF(YLanyG);
    }
    check_type(T6,VARREF(YLanyG));
    typeF1873 = T6;
    T9 = CALL2(1,VARREF(YgooSmacrosYpair),typeF1873,res_);
    T10 = CALL1(1,VARREF(Ytail),specs_);
    T11 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
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
  RET(T0);
}

FUNCODEDEF(fun_ast_eval_specs_29) {
  P specs_,naryQ_,env_;
  P loopF1875;
  P nreqF1874;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(specs_, 0);
  ARG(naryQ_, 1);
  ARG(env_, 2);
loop:
  if (naryQ_ != YPfalse) {
    T3 = CALL1(1,VARREF(YgooStypeYlen),specs_);
    T2 = CALL2(1,VARREF(YgooSmathY_),T3,YPint((P)1));
    T1 = T2;
  } else {
    T4 = CALL1(1,VARREF(YgooStypeYlen),specs_);
    T1 = T4;
  }
  check_type(T1,VARREF(YLanyG));
  nreqF1874 = T1;
  T6 = FUNSHELL(1,fun_loop_28,3);
  loopF1875 = T6;
  FUNINIT(loopF1875, 3,nreqF1874,env_,loopF1875);
  T7 = CALL3(1,loopF1875,Ynil,specs_,YPint((P)0));
  T5 = T7;
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YcompilerSast_evalYarrange_arguments) {
  P f_,naryQ_,arity_,args_;
  P countF1876;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(naryQ_, 1);
  ARG(arity_, 2);
  ARG(args_, 3);
loop:
  T1 = CALL1(1,VARREF(YgooStypeYlen),args_);
  check_type(T1,VARREF(YLanyG));
  countF1876 = T1;
  if (naryQ_ != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmagnitudeYL),countF1876,arity_);
    if (T4 != YPfalse) {
      T6 = CALL1(1,VARREF(YcompilerSast_evalYas_fun_name),f_);
      T5 = CALLN(1,VARREF(Yerror),4,LITREF(lit_45),T6,args_,arity_);
      T3 = T5;
    } else {
      T8 = CALL3(1,VARREF(YgooScollectionsSsequenceYsub),args_,YPint((P)0),arity_);
      T10 = CALL3(1,VARREF(YgooScollectionsSsequenceYsub),args_,arity_,countF1876);
      T9 = CALL1(1,VARREF(Ylst),T10);
      T7 = CALL2(1,VARREF(YgooScollectionsSsequenceYcat2),T8,T9);
      T3 = T7;
    }
    T2 = T3;
  } else {
    T12 = CALL2(1,VARREF(YgooSmathYNEE),countF1876,arity_);
    if (T12 != YPfalse) {
      T14 = CALL1(1,VARREF(YcompilerSast_evalYas_fun_name),f_);
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

FUNCODEDEF(fun_x_1428_31) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_32) {
  P return_;
  P x_1427F1891;
  P x_1427F1890;
  P x_1427F1889;
  P x_1427F1888;
  P x_1427F1887;
  P x_1427F1886;
  P x_1427F1885;
  P bodyF1884;
  P namesF1883;
  P arityF1882;
  P naryQF1881;
  P fF1880;
  P envF1879;
  P x_1427F1878;
  P x_1428F1877;
  P T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88;
  P T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72;
  P T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56;
  P T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40;
  P T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1428_31,1);
  x_1428F1877 = T1;
  FUNINIT(x_1428F1877, 1,return_);
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1427F1878 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  envF1879 = YPfalse;
  envF1879 = BOXFAB(envF1879);
  check_type(YPfalse,VARREF(YLanyG));
  fF1880 = YPfalse;
  fF1880 = BOXFAB(fF1880);
  check_type(YPfalse,VARREF(YLanyG));
  naryQF1881 = YPfalse;
  naryQF1881 = BOXFAB(naryQF1881);
  check_type(YPfalse,VARREF(YLanyG));
  arityF1882 = YPfalse;
  arityF1882 = BOXFAB(arityF1882);
  check_type(YPfalse,VARREF(YLanyG));
  namesF1883 = YPfalse;
  namesF1883 = BOXFAB(namesF1883);
  check_type(YPfalse,VARREF(YLanyG));
  bodyF1884 = YPfalse;
  bodyF1884 = BOXFAB(bodyF1884);
  T15 = CALL2(1,VARREF(YisaQ),x_1427F1878,VARREF(YLlstG));
  if (T15 != YPfalse) {
    T17 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1427F1878,LITREF(lit_51),x_1428F1877);
    check_type(T17,VARREF(YLanyG));
    x_1427F1885 = T17;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1427F1885,x_1428F1877);
    BOXVAL(envF1879) = T19;
    T20 = CALL1(1,VARREF(Ytail),x_1427F1885);
    check_type(T20,VARREF(YLanyG));
    x_1427F1886 = T20;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1427F1886,x_1428F1877);
    BOXVAL(fF1880) = T22;
    T23 = CALL1(1,VARREF(Ytail),x_1427F1886);
    check_type(T23,VARREF(YLanyG));
    x_1427F1887 = T23;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1427F1887,x_1428F1877);
    BOXVAL(naryQF1881) = T25;
    T26 = CALL1(1,VARREF(Ytail),x_1427F1887);
    check_type(T26,VARREF(YLanyG));
    x_1427F1888 = T26;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1427F1888,x_1428F1877);
    BOXVAL(arityF1882) = T28;
    T29 = CALL1(1,VARREF(Ytail),x_1427F1888);
    check_type(T29,VARREF(YLanyG));
    x_1427F1889 = T29;
    T31 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1427F1889,x_1428F1877);
    BOXVAL(namesF1883) = T31;
    T32 = CALL1(1,VARREF(Ytail),x_1427F1889);
    check_type(T32,VARREF(YLanyG));
    x_1427F1890 = T32;
    T34 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1427F1890,x_1428F1877);
    BOXVAL(bodyF1884) = T34;
    T35 = CALL1(1,VARREF(Ytail),x_1427F1890);
    check_type(T35,VARREF(YLanyG));
    x_1427F1891 = T35;
    T36 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1427F1891,x_1428F1877);
    T33 = T36;
    T30 = T33;
    T27 = T30;
    T24 = T27;
    T21 = T24;
    T18 = T21;
    T16 = T18;
  } else {
    T37 = CALL2(1,x_1428F1877,LITREF(lit_52),x_1427F1878);
  }
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_53));
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_54));
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T43 = CALL3(1,VARREF(YgooSmacrosYcat),T44,T45,Ynil);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T41 = CALL2(1,VARREF(YgooSmacrosYcat),T42,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_42));
  T53 = CALL1(1,VARREF(Ylst),LITREF(lit_43));
  T54 = CALL1(1,VARREF(Ylst),LITREF(lit_40));
  T55 = CALL1(1,VARREF(Ylst),LITREF(lit_44));
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
  T59 = CALL1(1,VARREF(Ylst),LITREF(lit_58));
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_54));
  T57 = CALLN(1,VARREF(YgooSmacrosYcat),4,T58,T59,T60,Ynil);
  T56 = CALL1(1,VARREF(Ylst),T57);
  T51 = CALLN(1,VARREF(YgooSmacrosYcat),6,T52,T53,T54,T55,T56,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T47 = CALLN(1,VARREF(YgooSmacrosYcat),4,T48,T49,T50,Ynil);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T64 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T67 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T66 = CALL2(1,VARREF(YgooSmacrosYcat),T67,Ynil);
  T65 = CALL1(1,VARREF(Ylst),T66);
  T62 = CALLN(1,VARREF(YgooSmacrosYcat),4,T63,T64,T65,Ynil);
  T61 = CALL1(1,VARREF(Ylst),T62);
  T70 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T71 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T74 = CALL1(1,VARREF(Ylst),LITREF(lit_21));
  T76 = BOXVAL(envF1879);
  T75 = CALL1(1,VARREF(Ylst),T76);
  T78 = BOXVAL(fF1880);
  T77 = CALL1(1,VARREF(Ylst),T78);
  T81 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T83 = BOXVAL(namesF1883);
  T82 = CALL1(1,VARREF(Ylst),T83);
  T86 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T89 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T90 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T88 = CALL3(1,VARREF(YgooSmacrosYcat),T89,T90,Ynil);
  T87 = CALL1(1,VARREF(Ylst),T88);
  T85 = CALL3(1,VARREF(YgooSmacrosYcat),T86,T87,Ynil);
  T84 = CALL1(1,VARREF(Ylst),T85);
  T80 = CALLN(1,VARREF(YgooSmacrosYcat),4,T81,T82,T84,Ynil);
  T79 = CALL1(1,VARREF(Ylst),T80);
  T93 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T94 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
  T97 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T98 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T96 = CALL3(1,VARREF(YgooSmacrosYcat),T97,T98,Ynil);
  T95 = CALL1(1,VARREF(Ylst),T96);
  T92 = CALLN(1,VARREF(YgooSmacrosYcat),4,T93,T94,T95,Ynil);
  T91 = CALL1(1,VARREF(Ylst),T92);
  T73 = CALLN(1,VARREF(YgooSmacrosYcat),6,T74,T75,T77,T79,T91,Ynil);
  T72 = CALL1(1,VARREF(Ylst),T73);
  T69 = CALLN(1,VARREF(YgooSmacrosYcat),4,T70,T71,T72,Ynil);
  T68 = CALL1(1,VARREF(Ylst),T69);
  T102 = BOXVAL(bodyF1884);
  T101 = CALL1(1,VARREF(Ylst),T102);
  T103 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T100 = CALL3(1,VARREF(YgooSmacrosYcat),T101,T103,Ynil);
  T99 = CALL1(1,VARREF(Ylst),T100);
  T38 = CALLN(1,VARREF(YgooSmacrosYcat),7,T39,T40,T46,T61,T68,T99,Ynil);
  T13 = T38;
  T11 = T13;
  T9 = T11;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_as_fun_name_35) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYfunction_debug_name),x_);
  T0 = CALL1(1,VARREF(YcompilerSast_evalYas_fun_name),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_fun_name_36) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YcompilerSastYbinding_name),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_fun_name_37) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYconstant_value),x_);
  T0 = CALL1(1,VARREF(YcompilerSast_evalYas_fun_name),T1);
UNLINK_STACK();
  RET(T0);
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
  RET(YPfalse);
}

FUNCODEDEF(fun_40) {
  P arg_vector_;
  P frameF1894;
  P nmsF1893;
  P argsF1892;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  NARGS(arg_vector_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooStypeYas),VARREF(YLlstG),arg_vector_);
  T1 = CALLN(1,VARREF(YcompilerSast_evalYarrange_arguments),4,FREEREF(0),FREEREF(1),FREEREF(2),T2);
  check_type(T1,VARREF(YLanyG));
  argsF1892 = T1;
  T4 = (P)YPnext_methods();
  check_type(T4,VARREF(YLanyG));
  nmsF1893 = T4;
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T7 = CALL2(1,VARREF(YgooScollectionsSsequenceYcat2),FREEREF(4),T8);
  T10 = CALL1(1,VARREF(Ylst),nmsF1893);
  T9 = CALL2(1,VARREF(YgooScollectionsSsequenceYcat2),argsF1892,T10);
  T6 = CALLN(1,VARREF(YcompilerSast_evalYenv_frameX),4,FREEREF(3),FREEREF(0),T7,T9);
  check_type(T6,VARREF(YLanyG));
  frameF1894 = T6;
  T11 = CALL1(1,FREEREF(5),frameF1894);
  T5 = T11;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_export_goo_method_41) {
  P f_,names_,specs_,naryQ_,value_,body_,env_;
  P efunF1896;
  P arityF1895;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
    T3 = CALL1(1,VARREF(YgooStypeYlen),specs_);
    T2 = CALL2(1,VARREF(YgooSmathY_),T3,YPint((P)1));
    T1 = T2;
  } else {
    T4 = CALL1(1,VARREF(YgooStypeYlen),specs_);
    T1 = T4;
  }
  check_type(T1,VARREF(YLanyG));
  arityF1895 = T1;
  T6 = FUNFAB(fun_40,6,f_,naryQ_,arityF1895,env_,names_,body_);
  check_type(T6,VARREF(YLanyG));
  efunF1896 = T6;
  T7 = CALL1(1,VARREF(YcompilerSast_evalYas_fun_name),f_);
  CALL2(1,VARREF(Yfun_name_setter),T7,efunF1896);
  T9 = CALL3(1,VARREF(YcompilerSast_evalYast_eval_specs),specs_,naryQ_,env_);
  if (value_ != YPfalse) {
    T11 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),value_,env_);
    T10 = T11;
  } else {
    T10 = VARREF(YLanyG);
  }
  T8 = CALLN(1,VARREF(Ynew),13,VARREF(YLsigG),VARREF(Ysig_names),names_,VARREF(Ysig_specs),T9,VARREF(Ysig_naryQ),naryQ_,VARREF(Ysig_arity),arityF1895,VARREF(Ysig_val),T10,VARREF(Ysig_unification_vars),Ynil);
  CALL2(1,VARREF(Yfun_sig_setter),T8,efunF1896);
  T5 = efunF1896;
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_42) {
  P env_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYfunction_body),FREEREF(0));
  T0 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),T1,env_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ast_eval_43) {
  P e_,env_;
  P evalF1898;
  P paramsF1897;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYfunction_bindings),e_);
  check_type(T1,VARREF(YLanyG));
  paramsF1897 = T1;
  T3 = FUNFAB(fun_42,1,e_);
  check_type(T3,VARREF(YLanyG));
  evalF1898 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YcompilerSastYbinding_name),paramsF1897);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YcompilerSastYbinding_type),paramsF1897);
  T7 = CALL1(1,VARREF(YcompilerSastYfunction_naryQ),e_);
  T8 = CALL1(1,VARREF(YcompilerSastYfunction_value),e_);
  T4 = CALLN(1,VARREF(YcompilerSast_evalYexport_goo_method),7,e_,T5,T6,T7,T8,evalF1898,env_);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ast_eval_44) {
  P e_,env_;
  P specsF1902;
  P namesF1901;
  P naryQF1900;
  P paramsF1899;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYfunction_bindings),e_);
  check_type(T1,VARREF(YLanyG));
  paramsF1899 = T1;
  T3 = CALL1(1,VARREF(YcompilerSastYfunction_naryQ),e_);
  check_type(T3,VARREF(YLanyG));
  naryQF1900 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YcompilerSastYbinding_name),paramsF1899);
  check_type(T5,VARREF(YLanyG));
  namesF1901 = T5;
  T8 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YcompilerSastYbinding_type),paramsF1899);
  T7 = CALL3(1,VARREF(YcompilerSast_evalYast_eval_specs),T8,naryQF1900,env_);
  check_type(T7,VARREF(YLanyG));
  specsF1902 = T7;
  T10 = CALL1(1,VARREF(YcompilerSast_evalYas_fun_name),e_);
  T9 = CALLN(1,VARREF(Yfab_gen),5,T10,namesF1901,specsF1902,naryQF1900,Ynil);
  T6 = T9;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_env_local_reference_value_45) {
  P env_,ref_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(env_, 0);
  ARG(ref_, 1);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYreference_frame_number),ref_);
  T2 = CALL1(1,VARREF(YcompilerSastYreference_frame_offset),ref_);
  T0 = CALL3(1,VARREF(YcompilerSast_evalYenv_local_value),env_,T1,T2);
UNLINK_STACK();
  RET(T0);
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
  T1 = CALL1(1,VARREF(YcompilerSastYreference_frame_number),ref_);
  T2 = CALL1(1,VARREF(YcompilerSastYreference_frame_offset),ref_);
  T0 = CALLN(1,VARREF(YcompilerSast_evalYenv_local_value_setter),4,val_,env_,T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ast_eval_47) {
  P e_,env_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T0 = CALL2(1,VARREF(YcompilerSast_evalYenv_local_reference_value),env_,e_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ast_eval_48) {
  P e_,env_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYreference_binding),e_);
  T0 = CALL1(1,VARREF(YcompilerSast_evalYenv_global_binding_value),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ast_eval_49) {
  P e_,env_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YcompilerSastYreference_binding),e_);
  T1 = CALL1(1,VARREF(YcompilerSastYbinding_locative),T2);
  T0 = CALL1(1,VARREF(YcompilerSast_evalYenv_runtime_value),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ast_eval_50) {
  P e_,env_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YcompilerSastYboundQ_reference),e_);
  T1 = CALL1(1,VARREF(YcompilerSastYreference_binding),T2);
  T0 = CALL3(1,VARREF(YcompilerSast_evalYast_eval_boundQ),e_,T1,env_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ast_eval_boundQ_51) {
  P e_,binding_,env_;
  P x_1430F1904;
  P x_1429F1903;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(binding_, 1);
  ARG(env_, 2);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYbinding_kind),binding_);
  check_type(T1,VARREF(YLanyG));
  x_1429F1903 = T1;
  check_type(VARREF(YgooSmacrosYEE),VARREF(YLanyG));
  x_1430F1904 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_1430F1904,x_1429F1903,LITREF(lit_74));
  if (T4 != YPfalse) {
    T5 = CALL1(1,VARREF(YcompilerSast_evalYenv_global_binding_boundQ),binding_);
    T3 = T5;
  } else {
    T3 = YPtrue;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(YPtrue);
}

FUNCODEDEF(fun_ast_eval_53) {
  P e_,env_;
  P valueF1905;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YcompilerSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),T2,env_);
  check_type(T1,VARREF(YLanyG));
  valueF1905 = T1;
  T4 = CALL1(1,VARREF(YcompilerSastYassignment_binding),e_);
  T3 = CALL2(1,VARREF(YcompilerSast_evalYenv_global_binding_value_setter),valueF1905,T4);
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ast_eval_54) {
  P e_,env_;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_ast_eval_55) {
  P e_,env_;
  P valueF1906;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YcompilerSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),T2,env_);
  check_type(T1,VARREF(YLanyG));
  valueF1906 = T1;
  T5 = CALL1(1,VARREF(YcompilerSastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(YcompilerSastYbinding_locative),T5);
  T3 = CALL2(1,VARREF(YcompilerSast_evalYenv_runtime_value_setter),valueF1906,T4);
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ast_eval_56) {
  P e_,env_;
  P valueF1907;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YcompilerSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),T2,env_);
  check_type(T1,VARREF(YLanyG));
  valueF1907 = T1;
  T4 = CALL1(1,VARREF(YcompilerSastYassignment_reference),e_);
  T3 = CALL3(1,VARREF(YcompilerSast_evalYenv_local_reference_value_setter),valueF1907,env_,T4);
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_env_define_bindingX_57) {
  P b_,v_;
  P x_1432F1909;
  P x_1431F1908;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(b_, 0);
  ARG(v_, 1);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYbinding_kind),b_);
  check_type(T1,VARREF(YLanyG));
  x_1431F1908 = T1;
  check_type(VARREF(YgooSmacrosYEE),VARREF(YLanyG));
  x_1432F1909 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_1432F1909,x_1431F1908,LITREF(lit_76));
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(YcompilerSastYbinding_locative),b_);
    T5 = CALL2(1,VARREF(YcompilerSast_evalYenv_runtime_value_setter),v_,T6);
    T3 = T5;
  } else {
    T8 = CALL2(1,x_1432F1909,x_1431F1908,LITREF(lit_74));
    if (T8 != YPfalse) {
      T9 = CALL2(1,VARREF(YcompilerSast_evalYenv_global_binding_value_setter),v_,b_);
      T7 = T9;
    } else {
      T11 = CALL1(1,VARREF(YcompilerSastYbinding_kind),b_);
      T10 = CALL2(1,VARREF(Yerror),LITREF(lit_77),T11);
      T7 = T10;
    }
    T3 = T7;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ast_eval_58) {
  P e_,env_;
  P valueF1910;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YcompilerSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),T2,env_);
  check_type(T1,VARREF(YLanyG));
  valueF1910 = T1;
  T3 = CALL1(1,VARREF(YcompilerSastYassignment_binding),e_);
  CALL2(1,VARREF(YcompilerSast_evalYenv_define_bindingX),T3,valueF1910);
  T0 = YPfalse;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ast_eval_59) {
  P e_,env_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YcompilerSastYalternative_condition),e_);
  T1 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),T2,env_);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YcompilerSastYalternative_consequent),e_);
    T3 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),T4,env_);
    T0 = T3;
  } else {
    T6 = CALL1(1,VARREF(YcompilerSastYalternative_alternant),e_);
    T5 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),T6,env_);
    T0 = T5;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_eval_60) {
  P e_;
  P valF1912;
  P nxtF1911;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),e_);
  check_type(T1,VARREF(YLanyG));
  nxtF1911 = T1;
  T4 = CALL1(1,VARREF(Yhead),e_);
  T3 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),T4,FREEREF(0));
  check_type(T3,VARREF(YLanyG));
  valF1912 = T3;
  T6 = CALL1(1,VARREF(YgooSmacrosYemptyQ),nxtF1911);
  if (T6 != YPfalse) {
    T5 = valF1912;
  } else {
    a1 = nxtF1911;
    e_ = a1;
    goto loop;
    T5 = T7;
  }
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ast_eval_61) {
  P e_,env_;
  P evalF1913;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_eval_60,2);
  evalF1913 = T1;
  FUNINIT(evalF1913, 2,env_,evalF1913);
  T2 = CALL1(1,evalF1913,e_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_eval_62) {
  P res_,args_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),args_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(Yhead),args_);
    T5 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),T6,FREEREF(1));
    T4 = CALL2(1,VARREF(YgooSmacrosYpair),T5,res_);
    T7 = CALL1(1,VARREF(Ytail),args_);
    a1 = T4;
    a2 = T7;
    res_ = a1;
    args_ = a2;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ast_eval_63) {
  P e_,env_;
  P evalF1914;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_eval_62,2);
  evalF1914 = T1;
  FUNINIT(evalF1914, 2,evalF1914,env_);
  T2 = CALL2(1,evalF1914,Ynil,e_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ast_eval_64) {
  P e_,env_;
  P argsF1916;
  P fF1915;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YcompilerSastYapplication_function),e_);
  T1 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),T2,env_);
  check_type(T1,VARREF(YLanyG));
  fF1915 = T1;
  T5 = CALL1(1,VARREF(YcompilerSastYapplication_arguments),e_);
  T4 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),T5,env_);
  check_type(T4,VARREF(YLanyG));
  argsF1916 = T4;
  T6 = CALL3(1,VARREF(YgooSmacrosYnapp),fF1915,YPfalse,argsF1916);
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ast_eval_65) {
  P e_,env_;
  P argsF1920;
  P fF1919;
  P nmsF1918;
  P bF1917;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYapplication_binding),e_);
  check_type(T1,VARREF(YLanyG));
  bF1917 = T1;
  T4 = CALL1(1,VARREF(YcompilerSastYbinding_name),bF1917);
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_60));
  if (T3 != YPfalse) {
    T6 = CALL2(1,VARREF(YcompilerSast_evalYenv_binding_value),env_,LITREF(lit_60));
    check_type(T6,VARREF(YLanyG));
    nmsF1918 = T6;
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),nmsF1918,VARREF(Ynul));
    if (T8 != YPfalse) {
      T7 = YPfalse;
    } else {
      T7 = nmsF1918;
    }
    T5 = T7;
    T2 = T5;
  } else {
    T10 = CALL1(1,VARREF(YcompilerSastYbinding_info),bF1917);
    check_type(T10,VARREF(YLanyG));
    fF1919 = T10;
    T13 = CALL1(1,VARREF(YcompilerSastYapplication_arguments),e_);
    T12 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),T13,env_);
    check_type(T12,VARREF(YLanyG));
    argsF1920 = T12;
    T14 = CALL3(1,VARREF(YgooSmacrosYnapp),fF1919,YPfalse,argsF1920);
    T11 = T14;
    T9 = T11;
    T2 = T9;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ast_eval_66) {
  P e_,env_;
  P nenvF1922;
  P argsF1921;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YcompilerSastYfix_let_arguments),e_);
  T1 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),T2,env_);
  check_type(T1,VARREF(YLanyG));
  argsF1921 = T1;
  T6 = CALL1(1,VARREF(YcompilerSastYfix_let_bindings),e_);
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YcompilerSastYbinding_name),T6);
  T4 = CALLN(1,VARREF(YcompilerSast_evalYenv_frameX),4,env_,YPfalse,T5,argsF1921);
  check_type(T4,VARREF(YLanyG));
  nenvF1922 = T4;
  T8 = CALL1(1,VARREF(YcompilerSastYfix_let_body),e_);
  T7 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),T8,nenvF1922);
  T3 = T7;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_67) {
  P name_,value_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(value_, 1);
loop:
  T0 = CALL3(1,VARREF(YcompilerSast_evalYenv_binding_value_setter),value_,FREEREF(0),name_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ast_eval_68) {
  P e_,env_;
  P new_envF1924;
  P bindingsF1923;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYlocals_bindings),e_);
  check_type(T1,VARREF(YLanyG));
  bindingsF1923 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YcompilerSastYbinding_name),bindingsF1923);
  T6 = CALL1(1,VARREF(YruntimeSruntimeYalways),VARREF(Ynul));
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),T6,bindingsF1923);
  T3 = CALLN(1,VARREF(YcompilerSast_evalYenv_frameX),4,env_,YPfalse,T4,T5);
  check_type(T3,VARREF(YLanyG));
  new_envF1924 = T3;
  T7 = FUNFAB(fun_67,1,new_envF1924);
  T8 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YcompilerSastYbinding_name),bindingsF1923);
  T10 = CALL2(1,VARREF(YruntimeSruntimeYrcurry),VARREF(YcompilerSast_evalYast_eval),new_envF1924);
  T11 = CALL1(1,VARREF(YcompilerSastYlocals_functions),e_);
  T9 = CALL2(1,VARREF(YgooSmacrosYmap),T10,T11);
  CALL3(1,VARREF(YgooScollectionsScollectionYdo2),T7,T8,T9);
  T13 = CALL1(1,VARREF(YcompilerSastYlocals_body),e_);
  T12 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),T13,new_envF1924);
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_69) {
  P env_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  T1 = CALL2(1,VARREF(YcompilerSast_evalYenv_binding_value),env_,LITREF(lit_7));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_70) {
  P return_;
  P exitF1926;
  P rprocF1925;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNFAB(fun_69,1,return_);
  check_type(T1,VARREF(YLanyG));
  rprocF1925 = T1;
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T5 = CALL1(1,VARREF(Ylst),YPfalse);
  T3 = CALLN(1,VARREF(YcompilerSast_evalYexport_goo_method),7,rprocF1925,T4,T5,YPfalse,YPfalse,rprocF1925,FREEREF(0));
  check_type(T3,VARREF(YLanyG));
  exitF1926 = T3;
  T8 = CALL1(1,VARREF(YcompilerSastYbind_exit_main_fun),FREEREF(1));
  T7 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),T8,FREEREF(0));
  T6 = CALL1(1,T7,exitF1926);
  T2 = T6;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_72) {
  P T2,T1,T0;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(YcompilerSastYunwind_protect_protected_thunk),FREEREF(0));
  T1 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),T2,FREEREF(1));
  T0 = CALL0(1,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_73) {
  P T2,T1,T0;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(YcompilerSastYunwind_protect_cleanup_thunk),FREEREF(0));
  T1 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),T2,FREEREF(1));
  T0 = CALL0(1,T1);
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_ast_eval_75) {
  P e_,env_;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YcompilerSastYmonitor_type),e_);
  T1 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),T2,env_);
  T4 = CALL1(1,VARREF(YcompilerSastYmonitor_info),e_);
  T3 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),T4,env_);
  T6 = CALL1(1,VARREF(YcompilerSastYmonitor_test),e_);
  T5 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),T6,env_);
  T8 = CALL1(1,VARREF(YcompilerSastYmonitor_handler),e_);
  T7 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),T8,env_);
  T10 = CALL1(1,VARREF(YcompilerSastYmonitor_main_thunk),e_);
  T9 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),T10,env_);
  T0 = CALLN(1,VARREF(YPwith_monitor),5,T1,T3,T5,T7,T9);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YcompilerSastYinit_environment_for_eval) {
  P env_;
  P bF1927;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  CALLN(1,VARREF(YcompilerSastYast_define_binding),4,env_,LITREF(lit_60),YPfalse,LITREF(lit_80));
  T1 = CALLN(1,VARREF(YcompilerSastYast_define_binding),4,env_,LITREF(lit_81),YPfalse,LITREF(lit_74));
  check_type(T1,VARREF(YLanyG));
  bF1927 = T1;
  T2 = CALL2(1,VARREF(YcompilerSast_evalYenv_global_binding_value_setter),VARREF(YgooSmacrosYpair),bF1927);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

P YcompilerSast_evalYPdefine_binding(P raw_mod_,P raw_nam_) {
  P eF1928;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T2 = (P)YPPsym(raw_mod_);
  T1 = CALL1(1,VARREF(YcompilerSastYunchecked_runtime_environment),T2);
  check_type(T1,VARREF(YLanyG));
  eF1928 = T1;
  T4 = (P)YPPsym(raw_nam_);
  T3 = CALLN(1,VARREF(YcompilerSastYast_define_binding),4,eF1928,T4,YPfalse,LITREF(lit_74));
  T0 = T3;
  return T0;
}

P YcompilerSast_evalYPlookup_binding(P raw_mod_,P raw_nam_) {
  P eF1929;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T2 = (P)YPPsym(raw_mod_);
  T1 = CALL1(1,VARREF(YcompilerSastYunchecked_runtime_environment),T2);
  check_type(T1,VARREF(YLanyG));
  eF1929 = T1;
  T4 = (P)YPPsym(raw_nam_);
  T3 = CALL2(1,VARREF(YcompilerSastYfind_binding),T4,eF1929);
  T0 = T3;
  return T0;
}

P YcompilerSast_evalYPensure_binding(P raw_mod_,P raw_nam_) {
  P tmpF1930;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T1 = (P)YcompilerSast_evalYPlookup_binding(raw_mod_,raw_nam_);
  check_type(T1,VARREF(YLanyG));
  tmpF1930 = T1;
  if (tmpF1930 != YPfalse) {
    T2 = tmpF1930;
  } else {
    T3 = (P)YcompilerSast_evalYPdefine_binding(raw_mod_,raw_nam_);
    T2 = T3;
  }
  T0 = T2;
  return T0;
}

P YcompilerSast_evalYPdlvar_binding(P dlvar_) {
  P bF1931;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T1 = (P)YcompilerSast_evalYPdlvar(dlvar_);
  check_type(T1,VARREF(YLanyG));
  bF1931 = T1;
  T4 = (P)YPiu(YPint((P)0));
  T3 = (P)YOEE(bF1931,T4);
  if (T3 != YPfalse) {
    T7 = (P)YcompilerSast_evalYPdlvar_mod(dlvar_);
    T8 = (P)YcompilerSast_evalYPdlvar_nam(dlvar_);
    T6 = (P)YcompilerSast_evalYPensure_binding(T7,T8);
    T5 = (P)YcompilerSast_evalYPdlvar_setter(T6,dlvar_);
    T2 = T5;
  } else {
    T2 = bF1931;
  }
  T0 = T2;
  return T0;
}

P YcompilerSast_evalYPbinding_boundQ(P dlvar_) {
  P tmpF1933;
  P bF1932;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T2 = (P)YcompilerSast_evalYPdlvar_mod(dlvar_);
  T3 = (P)YcompilerSast_evalYPdlvar_nam(dlvar_);
  T1 = (P)YcompilerSast_evalYPlookup_binding(T2,T3);
  check_type(T1,VARREF(YLanyG));
  bF1932 = T1;
  check_type(bF1932,VARREF(YLanyG));
  tmpF1933 = bF1932;
  if (tmpF1933 != YPfalse) {
    T6 = CALL1(1,VARREF(YcompilerSastYbinding_info),bF1932);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T4 = T5;
  T0 = T4;
  return T0;
}

P YcompilerSast_evalYPbinding_value(P dlvar_) {
  P bindingF1934;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T1 = (P)YcompilerSast_evalYPdlvar_binding(dlvar_);
  check_type(T1,VARREF(YLanyG));
  bindingF1934 = T1;
  T4 = CALL1(1,VARREF(YcompilerSastYbinding_kind),bindingF1934);
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_76));
  if (T3 != YPfalse) {
    T6 = CALL1(1,VARREF(YcompilerSastYbinding_locative),bindingF1934);
    T5 = CALL1(1,VARREF(YcompilerSast_evalYenv_runtime_value),T6);
    T2 = T5;
  } else {
    T7 = CALL1(1,VARREF(YcompilerSast_evalYenv_global_binding_value),bindingF1934);
    T2 = T7;
  }
  T0 = T2;
  return T0;
}

P YcompilerSast_evalYPbinding_value_setter(P val_,P dlvar_) {
  P bindingF1935;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T1 = (P)YcompilerSast_evalYPdlvar_binding(dlvar_);
  check_type(T1,VARREF(YLanyG));
  bindingF1935 = T1;
  T4 = CALL1(1,VARREF(YcompilerSastYbinding_kind),bindingF1935);
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_76));
  if (T3 != YPfalse) {
    T6 = CALL1(1,VARREF(YcompilerSastYbinding_locative),bindingF1935);
    T5 = CALL2(1,VARREF(YcompilerSast_evalYenv_runtime_value_setter),val_,T6);
    T2 = T5;
  } else {
    T7 = CALL2(1,VARREF(YcompilerSast_evalYenv_global_binding_value_setter),val_,bindingF1935);
    T2 = T7;
  }
  T0 = T2;
  return T0;
}

P YcompilerSast_evalY___main_0___() {
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
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YcompilerSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_global_binding_value_0 = YPmet(FUNCODEREF(fun_env_global_binding_value_0),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YcompilerSast_evalYenv_global_binding_value);
  if (T3 != YPfalse) {
    T2 = VARREF(YcompilerSast_evalYenv_global_binding_value);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_env_global_binding_value_0;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YcompilerSast_evalYenv_global_binding_value,T1);
  lit_3 = YPPsym((P)"env-global-binding-value-setter");
  lit_4 = YPPsym((P)"value");
  T5 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YcompilerSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_global_binding_value_setter_1 = YPmet(FUNCODEREF(fun_env_global_binding_value_setter_1),LITREF(lit_3),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YcompilerSast_evalYenv_global_binding_value_setter);
  if (T8 != YPfalse) {
    T7 = VARREF(YcompilerSast_evalYenv_global_binding_value_setter);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_env_global_binding_value_setter_1;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YcompilerSast_evalYenv_global_binding_value_setter,T6);
  lit_5 = YPPsym((P)"env-global-binding-bound?");
  T10 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YcompilerSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_env_global_binding_boundQ_2 = YPmet(FUNCODEREF(fun_env_global_binding_boundQ_2),LITREF(lit_5),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YcompilerSast_evalYenv_global_binding_boundQ);
  if (T13 != YPfalse) {
    T12 = VARREF(YcompilerSast_evalYenv_global_binding_boundQ);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_env_global_binding_boundQ_2;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YcompilerSast_evalYenv_global_binding_boundQ,T11);
  lit_6 = YPPsym((P)"env-runtime-value");
  lit_7 = YPPsym((P)"x");
  T15 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLlocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_runtime_value_3 = YPmet(FUNCODEREF(fun_env_runtime_value_3),LITREF(lit_6),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YcompilerSast_evalYenv_runtime_value);
  if (T18 != YPfalse) {
    T17 = VARREF(YcompilerSast_evalYenv_runtime_value);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_env_runtime_value_3;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YcompilerSast_evalYenv_runtime_value,T16);
  lit_8 = YPPsym((P)"env-runtime-value-setter");
  lit_9 = YPPsym((P)"v");
  T20 = YPsig(YPPlist(2,LITREF(lit_9),LITREF(lit_7)),YPPlist(2,VARREF(YLanyG),VARREF(YLlocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_runtime_value_setter_4 = YPmet(FUNCODEREF(fun_env_runtime_value_setter_4),LITREF(lit_8),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YcompilerSast_evalYenv_runtime_value_setter);
  if (T23 != YPfalse) {
    T22 = VARREF(YcompilerSast_evalYenv_runtime_value_setter);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_env_runtime_value_setter_4;
  T21 = CALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YcompilerSast_evalYenv_runtime_value_setter,T21);
  lit_10 = YPPsym((P)"<loc-env>");
  T26 = (P)YPpair(VARREF(YLanyG),Ynil);
  T25 = CALL2(1,VARREF(Yfab_class),LITREF(lit_10),T26);
  VARSET(YcompilerSast_evalYLloc_envG,T25);
  lit_11 = YPPsym((P)"env-parent");
  lit_12 = YPPsym((P)"_x");
  T27 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_parent_5 = YPmet(FUNCODEREF(fun_env_parent_5),LITREF(lit_11),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YcompilerSast_evalYenv_parent);
  if (T30 != YPfalse) {
    T29 = VARREF(YcompilerSast_evalYenv_parent);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_env_parent_5;
  T28 = CALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YcompilerSast_evalYenv_parent,T28);
  lit_13 = YPPsym((P)"env-parent-setter");
  lit_14 = YPPsym((P)"_z");
  T32 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YLanyG),VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_parent_setter_6 = YPmet(FUNCODEREF(fun_env_parent_setter_6),LITREF(lit_13),T32,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(YcompilerSast_evalYenv_parent_setter);
  if (T35 != YPfalse) {
    T34 = VARREF(YcompilerSast_evalYenv_parent_setter);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_env_parent_setter_6;
  T33 = CALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YcompilerSast_evalYenv_parent_setter,T33);
  T37 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T37,ENVNUL,PNUL,YPfalse);
  T38 = fun_7;
  CALLN(1,VARREF(YPprop),5,VARREF(YcompilerSast_evalYLloc_envG),VARREF(YcompilerSast_evalYenv_parent),VARREF(YcompilerSast_evalYenv_parent_setter),VARREF(YLanyG),T38);
  lit_15 = YPPsym((P)"env-function");
  T39 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_function_8 = YPmet(FUNCODEREF(fun_env_function_8),LITREF(lit_15),T39,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(YcompilerSast_evalYenv_function);
  if (T42 != YPfalse) {
    T41 = VARREF(YcompilerSast_evalYenv_function);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_env_function_8;
  T40 = CALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YcompilerSast_evalYenv_function,T40);
  lit_16 = YPPsym((P)"env-function-setter");
  T44 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YLanyG),VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_function_setter_9 = YPmet(FUNCODEREF(fun_env_function_setter_9),LITREF(lit_16),T44,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(YcompilerSast_evalYenv_function_setter);
  if (T47 != YPfalse) {
    T46 = VARREF(YcompilerSast_evalYenv_function_setter);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_env_function_setter_9;
  T45 = CALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YcompilerSast_evalYenv_function_setter,T45);
  T49 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T49,ENVNUL,PNUL,YPfalse);
  T50 = fun_10;
  CALLN(1,VARREF(YPprop),5,VARREF(YcompilerSast_evalYLloc_envG),VARREF(YcompilerSast_evalYenv_function),VARREF(YcompilerSast_evalYenv_function_setter),VARREF(YLanyG),T50);
  lit_17 = YPPsym((P)"env-names");
  T51 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_names_11 = YPmet(FUNCODEREF(fun_env_names_11),LITREF(lit_17),T51,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(YcompilerSast_evalYenv_names);
  if (T54 != YPfalse) {
    T53 = VARREF(YcompilerSast_evalYenv_names);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_env_names_11;
  T52 = CALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YcompilerSast_evalYenv_names,T52);
  lit_18 = YPPsym((P)"env-names-setter");
  T56 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YLlstG),VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_names_setter_12 = YPmet(FUNCODEREF(fun_env_names_setter_12),LITREF(lit_18),T56,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(YcompilerSast_evalYenv_names_setter);
  if (T59 != YPfalse) {
    T58 = VARREF(YcompilerSast_evalYenv_names_setter);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_env_names_setter_12;
  T57 = CALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YcompilerSast_evalYenv_names_setter,T57);
  T61 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T61,ENVNUL,PNUL,YPfalse);
  T62 = fun_13;
  CALLN(1,VARREF(YPprop),5,VARREF(YcompilerSast_evalYLloc_envG),VARREF(YcompilerSast_evalYenv_names),VARREF(YcompilerSast_evalYenv_names_setter),VARREF(YLlstG),T62);
  lit_19 = YPPsym((P)"env-values");
  T63 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_values_14 = YPmet(FUNCODEREF(fun_env_values_14),LITREF(lit_19),T63,ENVNUL,PNUL,YPfalse);
  T66 = BOUNDP(YcompilerSast_evalYenv_values);
  if (T66 != YPfalse) {
    T65 = VARREF(YcompilerSast_evalYenv_values);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_env_values_14;
  T64 = CALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YcompilerSast_evalYenv_values,T64);
  lit_20 = YPPsym((P)"env-values-setter");
  T68 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YLvecG),VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_values_setter_15 = YPmet(FUNCODEREF(fun_env_values_setter_15),LITREF(lit_20),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(YcompilerSast_evalYenv_values_setter);
  if (T71 != YPfalse) {
    T70 = VARREF(YcompilerSast_evalYenv_values_setter);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_env_values_setter_15;
  T69 = CALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YcompilerSast_evalYenv_values_setter,T69);
  T73 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T74 = fun_16;
  CALLN(1,VARREF(YPprop),5,VARREF(YcompilerSast_evalYLloc_envG),VARREF(YcompilerSast_evalYenv_values),VARREF(YcompilerSast_evalYenv_values_setter),VARREF(YLvecG),T74);
  T75 = CALL1(1,VARREF(Ynew),VARREF(YcompilerSast_evalYLloc_envG));
  VARSET(YcompilerSast_evalYDnul_loc_env,T75);
  lit_21 = YPPsym((P)"env-frame!");
  lit_22 = YPPsym((P)"env");
  lit_23 = YPPsym((P)"function");
  lit_24 = YPPsym((P)"names");
  lit_25 = YPPsym((P)"args");
  T76 = YPsig(YPPlist(4,LITREF(lit_22),LITREF(lit_23),LITREF(lit_24),LITREF(lit_25)),YPPlist(4,VARREF(YcompilerSast_evalYLloc_envG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)4),VARREF(YcompilerSast_evalYLloc_envG),Ynil);
  fun_env_frameX_17 = YPmet(FUNCODEREF(fun_env_frameX_17),LITREF(lit_21),T76,ENVNUL,PNUL,YPfalse);
  T79 = BOUNDP(YcompilerSast_evalYenv_frameX);
  if (T79 != YPfalse) {
    T78 = VARREF(YcompilerSast_evalYenv_frameX);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_env_frameX_17;
  T77 = CALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(YcompilerSast_evalYenv_frameX,T77);
  lit_26 = YPPsym((P)"env-local-value");
  lit_27 = YPPsym((P)"i");
  lit_28 = YPPsym((P)"j");
  T81 = YPsig(YPPlist(3,LITREF(lit_22),LITREF(lit_27),LITREF(lit_28)),YPPlist(3,VARREF(YcompilerSast_evalYLloc_envG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_local_value_18 = YPmet(FUNCODEREF(fun_env_local_value_18),LITREF(lit_26),T81,ENVNUL,PNUL,YPfalse);
  T84 = BOUNDP(YcompilerSast_evalYenv_local_value);
  if (T84 != YPfalse) {
    T83 = VARREF(YcompilerSast_evalYenv_local_value);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_env_local_value_18;
  T82 = CALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(YcompilerSast_evalYenv_local_value,T82);
  lit_29 = YPPsym((P)"env-local-value-setter");
  T86 = YPsig(YPPlist(4,LITREF(lit_9),LITREF(lit_22),LITREF(lit_27),LITREF(lit_28)),YPPlist(4,VARREF(YLanyG),VARREF(YcompilerSast_evalYLloc_envG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_env_local_value_setter_19 = YPmet(FUNCODEREF(fun_env_local_value_setter_19),LITREF(lit_29),T86,ENVNUL,PNUL,YPfalse);
  T89 = BOUNDP(YcompilerSast_evalYenv_local_value_setter);
  if (T89 != YPfalse) {
    T88 = VARREF(YcompilerSast_evalYenv_local_value_setter);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_env_local_value_setter_19;
  T87 = CALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(YcompilerSast_evalYenv_local_value_setter,T87);
  lit_30 = YPPsym((P)"env-binding-value");
  lit_31 = YPPsym((P)"name");
  lit_32 = YPPsym((P)"loop");
  T92 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_27)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_20 = YPmet(FUNCODEREF(fun_loop_20),LITREF(lit_32),T92,ENVNUL,PNUL,YPfalse);
  T91 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_31)),YPPlist(2,VARREF(YcompilerSast_evalYLloc_envG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_binding_value_21 = YPmet(FUNCODEREF(fun_env_binding_value_21),LITREF(lit_30),T91,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(YcompilerSast_evalYenv_binding_value);
  if (T95 != YPfalse) {
    T94 = VARREF(YcompilerSast_evalYenv_binding_value);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_env_binding_value_21;
  T93 = CALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YcompilerSast_evalYenv_binding_value,T93);
  lit_33 = YPPsym((P)"env-binding-value-setter");
  T98 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_27)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_22 = YPmet(FUNCODEREF(fun_loop_22),LITREF(lit_32),T98,ENVNUL,PNUL,YPfalse);
  T97 = YPsig(YPPlist(3,LITREF(lit_9),LITREF(lit_22),LITREF(lit_31)),YPPlist(3,VARREF(YLanyG),VARREF(YcompilerSast_evalYLloc_envG),VARREF(YLsymG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_binding_value_setter_23 = YPmet(FUNCODEREF(fun_env_binding_value_setter_23),LITREF(lit_33),T97,ENVNUL,PNUL,YPfalse);
  T101 = BOUNDP(YcompilerSast_evalYenv_binding_value_setter);
  if (T101 != YPfalse) {
    T100 = VARREF(YcompilerSast_evalYenv_binding_value_setter);
  } else {
    T100 = YPfalse;
  }
  T102 = fun_env_binding_value_setter_23;
  T99 = CALL2(1,VARREF(YPdefine_method),T100,T102);
  VARSET(YcompilerSast_evalYenv_binding_value_setter,T99);
  lit_34 = YPPsym((P)"ast-evaluate");
  lit_35 = YPPsym((P)"e");
  T103 = YPsig(YPPlist(1,LITREF(lit_35)),YPPlist(1,VARREF(YcompilerSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_evaluate_24 = YPmet(FUNCODEREF(fun_ast_evaluate_24),LITREF(lit_34),T103,ENVNUL,PNUL,YPfalse);
  T106 = BOUNDP(YcompilerSastYast_evaluate);
  if (T106 != YPfalse) {
    T105 = VARREF(YcompilerSastYast_evaluate);
  } else {
    T105 = YPfalse;
  }
  T107 = fun_ast_evaluate_24;
  T104 = CALL2(1,VARREF(YPdefine_method),T105,T107);
  VARSET(YcompilerSastYast_evaluate,T104);
  lit_36 = YPPsym((P)"ast-eval");
  T109 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YcompilerSastYLprogramG),VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T108 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_36),T109,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YcompilerSast_evalYast_eval,T108);
  T110 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YcompilerSastYLconstantG),VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_25 = YPmet(FUNCODEREF(fun_ast_eval_25),LITREF(lit_36),T110,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(YcompilerSast_evalYast_eval);
  if (T113 != YPfalse) {
    T112 = VARREF(YcompilerSast_evalYast_eval);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_ast_eval_25;
  T111 = CALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YcompilerSast_evalYast_eval,T111);
  T115 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YcompilerSastYLraw_constantG),VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_26 = YPmet(FUNCODEREF(fun_ast_eval_26),LITREF(lit_36),T115,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YcompilerSast_evalYast_eval);
  if (T118 != YPfalse) {
    T117 = VARREF(YcompilerSast_evalYast_eval);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_ast_eval_26;
  T116 = CALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YcompilerSast_evalYast_eval,T116);
  lit_37 = YPPsym((P)"ee");
  T120 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_37)),YPPlist(2,VARREF(YcompilerSastYLcompile_timeG),VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_27 = YPmet(FUNCODEREF(fun_ast_eval_27),LITREF(lit_36),T120,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YcompilerSast_evalYast_eval);
  if (T123 != YPfalse) {
    T122 = VARREF(YcompilerSast_evalYast_eval);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_ast_eval_27;
  T121 = CALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YcompilerSast_evalYast_eval,T121);
  lit_38 = YPPsym((P)"ast-eval-specs");
  lit_39 = YPPsym((P)"specs");
  lit_40 = YPPsym((P)"nary?");
  lit_41 = YPPsym((P)"res");
  T126 = YPsig(YPPlist(3,LITREF(lit_41),LITREF(lit_39),LITREF(lit_27)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_28 = YPmet(FUNCODEREF(fun_loop_28),LITREF(lit_32),T126,ENVNUL,PNUL,YPfalse);
  T125 = YPsig(YPPlist(3,LITREF(lit_39),LITREF(lit_40),LITREF(lit_22)),YPPlist(3,VARREF(YLlstG),VARREF(YLlogG),VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_specs_29 = YPmet(FUNCODEREF(fun_ast_eval_specs_29),LITREF(lit_38),T125,ENVNUL,PNUL,YPfalse);
  T129 = BOUNDP(YcompilerSast_evalYast_eval_specs);
  if (T129 != YPfalse) {
    T128 = VARREF(YcompilerSast_evalYast_eval_specs);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_ast_eval_specs_29;
  T127 = CALL2(1,VARREF(YPdefine_method),T128,T130);
  VARSET(YcompilerSast_evalYast_eval_specs,T127);
  T131 = CALL2(1,VARREF(YgooScollectionsScollectionYfab),VARREF(YgooScollectionsSbufferYLbufG),YPint((P)0));
  VARSET(YcompilerSast_evalYTstackT,T131);
  lit_42 = YPPsym((P)"arrange-arguments");
  lit_43 = YPPsym((P)"f");
  lit_44 = YPPsym((P)"arity");
  lit_45 = YPsb((P)"%= called with %=; needs at least %d arguments");
  lit_46 = YPsb((P)"%= called with %=; needs %d arguments");
  T132 = YPsig(YPPlist(4,LITREF(lit_43),LITREF(lit_40),LITREF(lit_44),LITREF(lit_25)),YPPlist(4,VARREF(YLanyG),VARREF(YLlogG),VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)4),VARREF(YLlstG),Ynil);
  YcompilerSast_evalYarrange_arguments = YPmet(FUNCODEREF(YcompilerSast_evalYarrange_arguments),LITREF(lit_42),T132,ENVNUL,PNUL,YPfalse);
  T133 = YcompilerSast_evalYarrange_arguments;
  VARSET(YcompilerSast_evalYarrange_arguments,T133);
  lit_47 = YPPsym((P)"exp");
  lit_48 = YPPsym((P)"return");
  lit_49 = YPPsym((P)"x-1428");
  lit_50 = YPPsym((P)"msg");
  lit_51 = YPPsym((P)"ifun");
  lit_52 = YPsb((P)"Match Pattern Failure");
  lit_53 = YPPsym((P)"fun");
  lit_54 = YPPsym((P)"arg-vector");
  lit_55 = YPPsym((P)"...");
  lit_56 = YPPsym((P)"def");
  lit_57 = YPPsym((P)"as");
  lit_58 = YPPsym((P)"<lst>");
  lit_59 = YPPsym((P)"nms");
  lit_60 = YPPsym((P)"%next-methods");
  lit_61 = YPPsym((P)"frame");
  lit_62 = YPPsym((P)"cat2");
  lit_63 = YPPsym((P)"lst");
  lit_64 = YPPsym((P)"quote");
  T136 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_25)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1428_31 = YPmet(FUNCODEREF(fun_x_1428_31),LITREF(lit_49),T136,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T135,ENVNUL,PNUL,YPfalse);
  T134 = YPsig(YPPlist(1,LITREF(lit_47)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T134,ENVNUL,PNUL,YPfalse);
  T137 = fun_33;
  YPmacro(YPPsym((P)"compiler/ast-eval"),YPPsym((P)"ifun"),T137);
  lit_65 = YPPsym((P)"as-fun-name");
  T138 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_34 = YPmet(FUNCODEREF(fun_as_fun_name_34),LITREF(lit_65),T138,ENVNUL,PNUL,YPfalse);
  T141 = BOUNDP(YcompilerSast_evalYas_fun_name);
  if (T141 != YPfalse) {
    T140 = VARREF(YcompilerSast_evalYas_fun_name);
  } else {
    T140 = YPfalse;
  }
  T142 = fun_as_fun_name_34;
  T139 = CALL2(1,VARREF(YPdefine_method),T140,T142);
  VARSET(YcompilerSast_evalYas_fun_name,T139);
  T143 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YcompilerSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_35 = YPmet(FUNCODEREF(fun_as_fun_name_35),LITREF(lit_65),T143,ENVNUL,PNUL,YPfalse);
  T146 = BOUNDP(YcompilerSast_evalYas_fun_name);
  if (T146 != YPfalse) {
    T145 = VARREF(YcompilerSast_evalYas_fun_name);
  } else {
    T145 = YPfalse;
  }
  T147 = fun_as_fun_name_35;
  T144 = CALL2(1,VARREF(YPdefine_method),T145,T147);
  VARSET(YcompilerSast_evalYas_fun_name,T144);
  T148 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YcompilerSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_36 = YPmet(FUNCODEREF(fun_as_fun_name_36),LITREF(lit_65),T148,ENVNUL,PNUL,YPfalse);
  T151 = BOUNDP(YcompilerSast_evalYas_fun_name);
  if (T151 != YPfalse) {
    T150 = VARREF(YcompilerSast_evalYas_fun_name);
  } else {
    T150 = YPfalse;
  }
  T152 = fun_as_fun_name_36;
  T149 = CALL2(1,VARREF(YPdefine_method),T150,T152);
  VARSET(YcompilerSast_evalYas_fun_name,T149);
  T153 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YcompilerSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_37 = YPmet(FUNCODEREF(fun_as_fun_name_37),LITREF(lit_65),T153,ENVNUL,PNUL,YPfalse);
  T156 = BOUNDP(YcompilerSast_evalYas_fun_name);
  if (T156 != YPfalse) {
    T155 = VARREF(YcompilerSast_evalYas_fun_name);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_as_fun_name_37;
  T154 = CALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(YcompilerSast_evalYas_fun_name,T154);
  T158 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_as_fun_name_38 = YPmet(FUNCODEREF(fun_as_fun_name_38),LITREF(lit_65),T158,ENVNUL,PNUL,YPfalse);
  T161 = BOUNDP(YcompilerSast_evalYas_fun_name);
  if (T161 != YPfalse) {
    T160 = VARREF(YcompilerSast_evalYas_fun_name);
  } else {
    T160 = YPfalse;
  }
  T162 = fun_as_fun_name_38;
  T159 = CALL2(1,VARREF(YPdefine_method),T160,T162);
  VARSET(YcompilerSast_evalYas_fun_name,T159);
  T163 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_39 = YPmet(FUNCODEREF(fun_as_fun_name_39),LITREF(lit_65),T163,ENVNUL,PNUL,YPfalse);
  T166 = BOUNDP(YcompilerSast_evalYas_fun_name);
  if (T166 != YPfalse) {
    T165 = VARREF(YcompilerSast_evalYas_fun_name);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_as_fun_name_39;
  T164 = CALL2(1,VARREF(YPdefine_method),T165,T167);
  VARSET(YcompilerSast_evalYas_fun_name,T164);
  lit_66 = YPPsym((P)"export-goo-method");
  lit_67 = YPPsym((P)"body");
  T169 = YPsig(YPPlist(1,LITREF(lit_54)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(YPPlist(7,LITREF(lit_43),LITREF(lit_24),LITREF(lit_39),LITREF(lit_40),LITREF(lit_4),LITREF(lit_67),LITREF(lit_22)),YPPlist(7,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)7),VARREF(YLanyG),Ynil);
  fun_export_goo_method_41 = YPmet(FUNCODEREF(fun_export_goo_method_41),LITREF(lit_66),T168,ENVNUL,PNUL,YPfalse);
  T172 = BOUNDP(YcompilerSast_evalYexport_goo_method);
  if (T172 != YPfalse) {
    T171 = VARREF(YcompilerSast_evalYexport_goo_method);
  } else {
    T171 = YPfalse;
  }
  T173 = fun_export_goo_method_41;
  T170 = CALL2(1,VARREF(YPdefine_method),T171,T173);
  VARSET(YcompilerSast_evalYexport_goo_method,T170);
  T175 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T175,ENVNUL,PNUL,YPfalse);
  T174 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YcompilerSastYLast_methodG),VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_43 = YPmet(FUNCODEREF(fun_ast_eval_43),LITREF(lit_36),T174,ENVNUL,PNUL,YPfalse);
  T178 = BOUNDP(YcompilerSast_evalYast_eval);
  if (T178 != YPfalse) {
    T177 = VARREF(YcompilerSast_evalYast_eval);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_ast_eval_43;
  T176 = CALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(YcompilerSast_evalYast_eval,T176);
  T180 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YcompilerSastYLast_genericG),VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_44 = YPmet(FUNCODEREF(fun_ast_eval_44),LITREF(lit_36),T180,ENVNUL,PNUL,YPfalse);
  T183 = BOUNDP(YcompilerSast_evalYast_eval);
  if (T183 != YPfalse) {
    T182 = VARREF(YcompilerSast_evalYast_eval);
  } else {
    T182 = YPfalse;
  }
  T184 = fun_ast_eval_44;
  T181 = CALL2(1,VARREF(YPdefine_method),T182,T184);
  VARSET(YcompilerSast_evalYast_eval,T181);
  lit_68 = YPPsym((P)"env-local-reference-value");
  lit_69 = YPPsym((P)"ref");
  T185 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_69)),YPPlist(2,VARREF(YcompilerSast_evalYLloc_envG),VARREF(YcompilerSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_local_reference_value_45 = YPmet(FUNCODEREF(fun_env_local_reference_value_45),LITREF(lit_68),T185,ENVNUL,PNUL,YPfalse);
  T188 = BOUNDP(YcompilerSast_evalYenv_local_reference_value);
  if (T188 != YPfalse) {
    T187 = VARREF(YcompilerSast_evalYenv_local_reference_value);
  } else {
    T187 = YPfalse;
  }
  T189 = fun_env_local_reference_value_45;
  T186 = CALL2(1,VARREF(YPdefine_method),T187,T189);
  VARSET(YcompilerSast_evalYenv_local_reference_value,T186);
  lit_70 = YPPsym((P)"env-local-reference-value-setter");
  lit_71 = YPPsym((P)"val");
  T190 = YPsig(YPPlist(3,LITREF(lit_71),LITREF(lit_22),LITREF(lit_69)),YPPlist(3,VARREF(YLanyG),VARREF(YcompilerSast_evalYLloc_envG),VARREF(YcompilerSastYLlocal_referenceG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_local_reference_value_setter_46 = YPmet(FUNCODEREF(fun_env_local_reference_value_setter_46),LITREF(lit_70),T190,ENVNUL,PNUL,YPfalse);
  T193 = BOUNDP(YcompilerSast_evalYenv_local_reference_value_setter);
  if (T193 != YPfalse) {
    T192 = VARREF(YcompilerSast_evalYenv_local_reference_value_setter);
  } else {
    T192 = YPfalse;
  }
  T194 = fun_env_local_reference_value_setter_46;
  T191 = CALL2(1,VARREF(YPdefine_method),T192,T194);
  VARSET(YcompilerSast_evalYenv_local_reference_value_setter,T191);
  T195 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YcompilerSastYLlocal_referenceG),VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_47 = YPmet(FUNCODEREF(fun_ast_eval_47),LITREF(lit_36),T195,ENVNUL,PNUL,YPfalse);
  T198 = BOUNDP(YcompilerSast_evalYast_eval);
  if (T198 != YPfalse) {
    T197 = VARREF(YcompilerSast_evalYast_eval);
  } else {
    T197 = YPfalse;
  }
  T199 = fun_ast_eval_47;
  T196 = CALL2(1,VARREF(YPdefine_method),T197,T199);
  VARSET(YcompilerSast_evalYast_eval,T196);
  T200 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YcompilerSastYLglobal_referenceG),VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_48 = YPmet(FUNCODEREF(fun_ast_eval_48),LITREF(lit_36),T200,ENVNUL,PNUL,YPfalse);
  T203 = BOUNDP(YcompilerSast_evalYast_eval);
  if (T203 != YPfalse) {
    T202 = VARREF(YcompilerSast_evalYast_eval);
  } else {
    T202 = YPfalse;
  }
  T204 = fun_ast_eval_48;
  T201 = CALL2(1,VARREF(YPdefine_method),T202,T204);
  VARSET(YcompilerSast_evalYast_eval,T201);
  T205 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YcompilerSastYLruntime_referenceG),VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_49 = YPmet(FUNCODEREF(fun_ast_eval_49),LITREF(lit_36),T205,ENVNUL,PNUL,YPfalse);
  T208 = BOUNDP(YcompilerSast_evalYast_eval);
  if (T208 != YPfalse) {
    T207 = VARREF(YcompilerSast_evalYast_eval);
  } else {
    T207 = YPfalse;
  }
  T209 = fun_ast_eval_49;
  T206 = CALL2(1,VARREF(YPdefine_method),T207,T209);
  VARSET(YcompilerSast_evalYast_eval,T206);
  T210 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YcompilerSastYLboundQG),VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_50 = YPmet(FUNCODEREF(fun_ast_eval_50),LITREF(lit_36),T210,ENVNUL,PNUL,YPfalse);
  T213 = BOUNDP(YcompilerSast_evalYast_eval);
  if (T213 != YPfalse) {
    T212 = VARREF(YcompilerSast_evalYast_eval);
  } else {
    T212 = YPfalse;
  }
  T214 = fun_ast_eval_50;
  T211 = CALL2(1,VARREF(YPdefine_method),T212,T214);
  VARSET(YcompilerSast_evalYast_eval,T211);
  lit_72 = YPPsym((P)"ast-eval-bound?");
  lit_73 = YPPsym((P)"binding");
  lit_74 = YPPsym((P)"global");
  T215 = YPsig(YPPlist(3,LITREF(lit_35),LITREF(lit_73),LITREF(lit_22)),YPPlist(3,VARREF(YcompilerSastYLboundQG),VARREF(YcompilerSastYLmodule_bindingG),VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_boundQ_51 = YPmet(FUNCODEREF(fun_ast_eval_boundQ_51),LITREF(lit_72),T215,ENVNUL,PNUL,YPfalse);
  T218 = BOUNDP(YcompilerSast_evalYast_eval_boundQ);
  if (T218 != YPfalse) {
    T217 = VARREF(YcompilerSast_evalYast_eval_boundQ);
  } else {
    T217 = YPfalse;
  }
  T219 = fun_ast_eval_boundQ_51;
  T216 = CALL2(1,VARREF(YPdefine_method),T217,T219);
  VARSET(YcompilerSast_evalYast_eval_boundQ,T216);
  T220 = YPsig(YPPlist(3,LITREF(lit_35),LITREF(lit_73),LITREF(lit_22)),YPPlist(3,VARREF(YcompilerSastYLboundQG),VARREF(YcompilerSastYLlocal_bindingG),VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_boundQ_52 = YPmet(FUNCODEREF(fun_ast_eval_boundQ_52),LITREF(lit_72),T220,ENVNUL,PNUL,YPfalse);
  T223 = BOUNDP(YcompilerSast_evalYast_eval_boundQ);
  if (T223 != YPfalse) {
    T222 = VARREF(YcompilerSast_evalYast_eval_boundQ);
  } else {
    T222 = YPfalse;
  }
  T224 = fun_ast_eval_boundQ_52;
  T221 = CALL2(1,VARREF(YPdefine_method),T222,T224);
  VARSET(YcompilerSast_evalYast_eval_boundQ,T221);
  T225 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YcompilerSastYLglobal_assignmentG),VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_53 = YPmet(FUNCODEREF(fun_ast_eval_53),LITREF(lit_36),T225,ENVNUL,PNUL,YPfalse);
  T228 = BOUNDP(YcompilerSast_evalYast_eval);
  if (T228 != YPfalse) {
    T227 = VARREF(YcompilerSast_evalYast_eval);
  } else {
    T227 = YPfalse;
  }
  T229 = fun_ast_eval_53;
  T226 = CALL2(1,VARREF(YPdefine_method),T227,T229);
  VARSET(YcompilerSast_evalYast_eval,T226);
  T230 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YcompilerSastYLast_macro_definitionG),VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_54 = YPmet(FUNCODEREF(fun_ast_eval_54),LITREF(lit_36),T230,ENVNUL,PNUL,YPfalse);
  T233 = BOUNDP(YcompilerSast_evalYast_eval);
  if (T233 != YPfalse) {
    T232 = VARREF(YcompilerSast_evalYast_eval);
  } else {
    T232 = YPfalse;
  }
  T234 = fun_ast_eval_54;
  T231 = CALL2(1,VARREF(YPdefine_method),T232,T234);
  VARSET(YcompilerSast_evalYast_eval,T231);
  T235 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YcompilerSastYLruntime_assignmentG),VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_55 = YPmet(FUNCODEREF(fun_ast_eval_55),LITREF(lit_36),T235,ENVNUL,PNUL,YPfalse);
  T238 = BOUNDP(YcompilerSast_evalYast_eval);
  if (T238 != YPfalse) {
    T237 = VARREF(YcompilerSast_evalYast_eval);
  } else {
    T237 = YPfalse;
  }
  T239 = fun_ast_eval_55;
  T236 = CALL2(1,VARREF(YPdefine_method),T237,T239);
  VARSET(YcompilerSast_evalYast_eval,T236);
  T240 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YcompilerSastYLlocal_assignmentG),VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_56 = YPmet(FUNCODEREF(fun_ast_eval_56),LITREF(lit_36),T240,ENVNUL,PNUL,YPfalse);
  T243 = BOUNDP(YcompilerSast_evalYast_eval);
  if (T243 != YPfalse) {
    T242 = VARREF(YcompilerSast_evalYast_eval);
  } else {
    T242 = YPfalse;
  }
  T244 = fun_ast_eval_56;
  T241 = CALL2(1,VARREF(YPdefine_method),T242,T244);
  VARSET(YcompilerSast_evalYast_eval,T241);
  lit_75 = YPPsym((P)"env-define-binding!");
  lit_76 = YPPsym((P)"runtime");
  lit_77 = YPsb((P)"Defining invalid binding kind %=");
  T245 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YcompilerSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_define_bindingX_57 = YPmet(FUNCODEREF(fun_env_define_bindingX_57),LITREF(lit_75),T245,ENVNUL,PNUL,YPfalse);
  T248 = BOUNDP(YcompilerSast_evalYenv_define_bindingX);
  if (T248 != YPfalse) {
    T247 = VARREF(YcompilerSast_evalYenv_define_bindingX);
  } else {
    T247 = YPfalse;
  }
  T249 = fun_env_define_bindingX_57;
  T246 = CALL2(1,VARREF(YPdefine_method),T247,T249);
  VARSET(YcompilerSast_evalYenv_define_bindingX,T246);
  T250 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YcompilerSastYLdefinitionG),VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_58 = YPmet(FUNCODEREF(fun_ast_eval_58),LITREF(lit_36),T250,ENVNUL,PNUL,YPfalse);
  T253 = BOUNDP(YcompilerSast_evalYast_eval);
  if (T253 != YPfalse) {
    T252 = VARREF(YcompilerSast_evalYast_eval);
  } else {
    T252 = YPfalse;
  }
  T254 = fun_ast_eval_58;
  T251 = CALL2(1,VARREF(YPdefine_method),T252,T254);
  VARSET(YcompilerSast_evalYast_eval,T251);
  T255 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YcompilerSastYLalternativeG),VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_59 = YPmet(FUNCODEREF(fun_ast_eval_59),LITREF(lit_36),T255,ENVNUL,PNUL,YPfalse);
  T258 = BOUNDP(YcompilerSast_evalYast_eval);
  if (T258 != YPfalse) {
    T257 = VARREF(YcompilerSast_evalYast_eval);
  } else {
    T257 = YPfalse;
  }
  T259 = fun_ast_eval_59;
  T256 = CALL2(1,VARREF(YPdefine_method),T257,T259);
  VARSET(YcompilerSast_evalYast_eval,T256);
  lit_78 = YPPsym((P)"eval");
  T261 = YPsig(YPPlist(1,LITREF(lit_35)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_eval_60 = YPmet(FUNCODEREF(fun_eval_60),LITREF(lit_78),T261,ENVNUL,PNUL,YPfalse);
  T260 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YcompilerSastYLsequentialG),VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_61 = YPmet(FUNCODEREF(fun_ast_eval_61),LITREF(lit_36),T260,ENVNUL,PNUL,YPfalse);
  T264 = BOUNDP(YcompilerSast_evalYast_eval);
  if (T264 != YPfalse) {
    T263 = VARREF(YcompilerSast_evalYast_eval);
  } else {
    T263 = YPfalse;
  }
  T265 = fun_ast_eval_61;
  T262 = CALL2(1,VARREF(YPdefine_method),T263,T265);
  VARSET(YcompilerSast_evalYast_eval,T262);
  T270 = YPsig(YPPlist(2,LITREF(lit_41),LITREF(lit_25)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T269 = fun_eval_62 = YPmet(FUNCODEREF(fun_eval_62),LITREF(lit_78),T270,ENVNUL,PNUL,YPfalse);
  T268 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YcompilerSastYLargumentsG),VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T267 = fun_ast_eval_63 = YPmet(FUNCODEREF(fun_ast_eval_63),LITREF(lit_36),T268,ENVNUL,PNUL,YPfalse);
  T274 = BOUNDP(YcompilerSast_evalYast_eval);
  if (T274 != YPfalse) {
    T273 = VARREF(YcompilerSast_evalYast_eval);
  } else {
    T273 = YPfalse;
  }
  T275 = fun_ast_eval_63;
  T272 = CALL2(1,VARREF(YPdefine_method),T273,T275);
  T271 = VARSET(YcompilerSast_evalYast_eval,T272);
  T266 = T271;
  return T266;
}

P YcompilerSast_evalY___main_1___() {
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T0 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YcompilerSastYLregular_applicationG),VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_64 = YPmet(FUNCODEREF(fun_ast_eval_64),LITREF(lit_36),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YcompilerSast_evalYast_eval);
  if (T3 != YPfalse) {
    T2 = VARREF(YcompilerSast_evalYast_eval);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_ast_eval_64;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YcompilerSast_evalYast_eval,T1);
  T5 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YcompilerSastYLpredefined_applicationG),VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_65 = YPmet(FUNCODEREF(fun_ast_eval_65),LITREF(lit_36),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YcompilerSast_evalYast_eval);
  if (T8 != YPfalse) {
    T7 = VARREF(YcompilerSast_evalYast_eval);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_ast_eval_65;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YcompilerSast_evalYast_eval,T6);
  T10 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YcompilerSastYLfix_letG),VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_66 = YPmet(FUNCODEREF(fun_ast_eval_66),LITREF(lit_36),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YcompilerSast_evalYast_eval);
  if (T13 != YPfalse) {
    T12 = VARREF(YcompilerSast_evalYast_eval);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_ast_eval_66;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YcompilerSast_evalYast_eval,T11);
  T16 = YPsig(YPPlist(2,LITREF(lit_31),LITREF(lit_4)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_67 = YPmet(FUNCODEREF(fun_67),YPfalse,T16,ENVNUL,PNUL,YPfalse);
  T15 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YcompilerSastYLlocalsG),VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_68 = YPmet(FUNCODEREF(fun_ast_eval_68),LITREF(lit_36),T15,ENVNUL,PNUL,YPfalse);
  T19 = BOUNDP(YcompilerSast_evalYast_eval);
  if (T19 != YPfalse) {
    T18 = VARREF(YcompilerSast_evalYast_eval);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_ast_eval_68;
  T17 = CALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(YcompilerSast_evalYast_eval,T17);
  T23 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T23,ENVNUL,PNUL,YPfalse);
  T22 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T22,ENVNUL,PNUL,YPfalse);
  T21 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YcompilerSastYLbind_exitG),VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_71 = YPmet(FUNCODEREF(fun_ast_eval_71),LITREF(lit_36),T21,ENVNUL,PNUL,YPfalse);
  T26 = BOUNDP(YcompilerSast_evalYast_eval);
  if (T26 != YPfalse) {
    T25 = VARREF(YcompilerSast_evalYast_eval);
  } else {
    T25 = YPfalse;
  }
  T27 = fun_ast_eval_71;
  T24 = CALL2(1,VARREF(YPdefine_method),T25,T27);
  VARSET(YcompilerSast_evalYast_eval,T24);
  T30 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T29,ENVNUL,PNUL,YPfalse);
  T28 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YcompilerSastYLunwind_protectG),VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_74 = YPmet(FUNCODEREF(fun_ast_eval_74),LITREF(lit_36),T28,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YcompilerSast_evalYast_eval);
  if (T33 != YPfalse) {
    T32 = VARREF(YcompilerSast_evalYast_eval);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_ast_eval_74;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YcompilerSast_evalYast_eval,T31);
  T35 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YcompilerSastYLmonitorG),VARREF(YcompilerSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_75 = YPmet(FUNCODEREF(fun_ast_eval_75),LITREF(lit_36),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YcompilerSast_evalYast_eval);
  if (T38 != YPfalse) {
    T37 = VARREF(YcompilerSast_evalYast_eval);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_ast_eval_75;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YcompilerSast_evalYast_eval,T36);
  lit_79 = YPPsym((P)"init-environment-for-eval");
  lit_80 = YPPsym((P)"predefined");
  lit_81 = YPPsym((P)"%pair");
  T40 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YcompilerSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YcompilerSastYinit_environment_for_eval = YPmet(FUNCODEREF(YcompilerSastYinit_environment_for_eval),LITREF(lit_79),T40,ENVNUL,PNUL,YPfalse);
  T41 = YcompilerSastYinit_environment_for_eval;
  VARSET(YcompilerSastYinit_environment_for_eval,T41);
  T42 = YPfalse;
  return T42;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_runtimeSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_runtimeSruntime;
extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_compilerSast;
extern MODULE_INFO module_info_runtimeSboot;
extern MODULE_INFO module_info_gooScollectionsScollection;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScollectionsSbuffer;
extern MODULE_INFO module_info_gooSport;
extern MODULE_INFO module_info_gooScollectionsStable;
extern MODULE_INFO module_info_gooScollectionsSlist;
extern MODULE_INFO module_info_gooScollectionsSsequence;
extern MODULE_INFO module_info_gooScollectionsSrange;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooStype;
extern MODULE_INFO module_info_gooScollectionsSstring;
extern MODULE_INFO module_info_gooScollectionsSassoc;
extern MODULE_INFO module_info_gooSmagnitude;
extern MODULE_INFO module_info_gooScollectionsSstep;
extern MODULE_INFO module_info_gooScollectionsSmap;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_compilerSsyntax;

static USE_INFO use_infos[] = {
  {&module_info_runtimeSboot},
  {&module_info_gooSmacros},
  {&module_info_runtimeSruntime},
  {&module_info_goo},
  {&module_info_compilerSast},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"lst", &module_info_runtimeSboot, "lst"},
  {"@len", &module_info_runtimeSboot, "@len"},
  {"df", &module_info_runtimeSboot, "df"},
  {"<free-environment>", &module_info_compilerSast, "<free-environment>"},
  {"assignment-reference", &module_info_compilerSast, "assignment-reference"},
  {"%i&", &module_info_runtimeSboot, "%i&"},
  {"invoke-handler-interactively", &module_info_runtimeSruntime, "invoke-handler-interactively"},
  {"key-type", &module_info_gooScollectionsScollection, "key-type"},
  {"identity", &module_info_runtimeSruntime, "identity"},
  {"constant-index-setter", &module_info_compilerSast, "constant-index-setter"},
  {"%f/", &module_info_runtimeSboot, "%f/"},
  {"%iv", &module_info_runtimeSboot, "%iv"},
  {"%isa", &module_info_runtimeSboot, "%isa"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"<locals>", &module_info_compilerSast, "<locals>"},
  {"find-or", &module_info_gooScollectionsScollection, "find-or"},
  {"load-in", &module_info_compilerSast, "load-in"},
  {"match", &module_info_gooSmacros, "match"},
  {"compile-time-program", &module_info_compilerSast, "compile-time-program"},
  {"monitor-main-thunk", &module_info_compilerSast, "monitor-main-thunk"},
  {"binding-global-box-setter", &module_info_compilerSast, "binding-global-box-setter"},
  {"rem", &module_info_gooSmath, "rem"},
  {"enum", &module_info_gooScollectionsScollection, "enum"},
  {"binding-value-setter", &module_info_compilerSast, "binding-value-setter"},
  {"%gen-src", &module_info_runtimeSboot, "%gen-src"},
  {"assignment-form-setter", &module_info_compilerSast, "assignment-form-setter"},
  {"sig-unification-vars", &module_info_runtimeSboot, "sig-unification-vars"},
  {"program-register-setter", &module_info_compilerSast, "program-register-setter"},
  {"%iu", &module_info_runtimeSboot, "%iu"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"application-known?-setter", &module_info_compilerSast, "application-known?-setter"},
  {"ds", &module_info_runtimeSboot, "ds"},
  {"head-setter", &module_info_runtimeSboot, "head-setter"},
  {"type-class", &module_info_runtimeSboot, "type-class"},
  {"unexec", &module_info_runtimeSboot, "unexec"},
  {"fun-sig-setter", &module_info_runtimeSboot, "fun-sig-setter"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"constant-index", &module_info_compilerSast, "constant-index"},
  {"%close-in-port", &module_info_runtimeSboot, "%close-in-port"},
  {"<union>", &module_info_runtimeSboot, "<union>"},
  {"push-last!", &module_info_gooScollectionsSbuffer, "push-last!"},
  {"<file-port>", &module_info_gooSport, "<file-port>"},
  {"<handler>", &module_info_runtimeSruntime, "<handler>"},
  {"mod", &module_info_gooSmath, "mod"},
  {"tab-hash", &module_info_gooScollectionsStable, "tab-hash"},
  {"fix-let-bindings", &module_info_compilerSast, "fix-let-bindings"},
  {"port-line", &module_info_gooSport, "port-line"},
  {"push", &module_info_gooScollectionsSlist, "push"},
  {"module-exports", &module_info_compilerSast, "module-exports"},
  {"environment-bindings", &module_info_compilerSast, "environment-bindings"},
  {"binding-value", &module_info_compilerSast, "binding-value"},
  {"@==", &module_info_runtimeSboot, "@=="},
  {"<local-binding>", &module_info_compilerSast, "<local-binding>"},
  {"<buf>", &module_info_gooScollectionsSbuffer, "<buf>"},
  {"elt-default", &module_info_gooScollectionsScollection, "elt-default"},
  {"<raw-constant>", &module_info_compilerSast, "<raw-constant>"},
  {"unknown-function-error", &module_info_runtimeSboot, "unknown-function-error"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%vlen", &module_info_runtimeSboot, "%vlen"},
  {"monitor-test", &module_info_compilerSast, "monitor-test"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"abs", &module_info_gooSmath, "abs"},
  {"dss", &module_info_runtimeSboot, "dss"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"head", &module_info_runtimeSboot, "head"},
  {"%os-val", &module_info_runtimeSboot, "%os-val"},
  {"<str-out-port>", &module_info_gooSport, "<str-out-port>"},
  {"%fsin", &module_info_runtimeSboot, "%fsin"},
  {"get", &module_info_gooSport, "get"},
  {"del-vals", &module_info_gooScollectionsSsequence, "del-vals"},
  {"remove-modules-by-name!", &module_info_compilerSast, "remove-modules-by-name!"},
  {"reference-frame-number", &module_info_compilerSast, "reference-frame-number"},
  {"module-name", &module_info_compilerSast, "module-name"},
  {"<num>", &module_info_runtimeSboot, "<num>"},
  {"<vec>", &module_info_runtimeSboot, "<vec>"},
  {"do-static-global-bindings", &module_info_compilerSast, "do-static-global-bindings"},
  {"<ast-primitive>", &module_info_compilerSast, "<ast-primitive>"},
  {"*boot-macro-module-names*", &module_info_runtimeSboot, "*boot-macro-module-names*"},
  {"%i-", &module_info_runtimeSboot, "%i-"},
  {"in", &module_info_gooSport, "in"},
  {"%os-name", &module_info_runtimeSboot, "%os-name"},
  {"%file-type", &module_info_runtimeSboot, "%file-type"},
  {"function-signature-setter", &module_info_compilerSast, "function-signature-setter"},
  {"%untag", &module_info_runtimeSboot, "%untag"},
  {"binding-inferred-type-setter", &module_info_compilerSast, "binding-inferred-type-setter"},
  {"<real-reference>", &module_info_compilerSast, "<real-reference>"},
  {"*boot-macro-expanders*", &module_info_runtimeSboot, "*boot-macro-expanders*"},
  {"floor", &module_info_gooSmath, "floor"},
  {"<file-out-port>", &module_info_gooSport, "<file-out-port>"},
  {"%su", &module_info_runtimeSboot, "%su"},
  {"<ast-primitive-definition>", &module_info_compilerSast, "<ast-primitive-definition>"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"do2", &module_info_gooScollectionsScollection, "do2"},
  {"function-nary?", &module_info_compilerSast, "function-nary?"},
  {"range-by", &module_info_gooScollectionsSrange, "range-by"},
  {"below", &module_info_gooScollectionsSsequence, "below"},
  {"%slen", &module_info_runtimeSboot, "%slen"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"class-direct-props", &module_info_runtimeSboot, "class-direct-props"},
  {"application-binding", &module_info_compilerSast, "application-binding"},
  {"low-elt-setter", &module_info_gooScollectionsScollection, "low-elt-setter"},
  {"<binding>", &module_info_compilerSast, "<binding>"},
  {"sig", &module_info_runtimeSruntime, "sig"},
  {"@oelt", &module_info_runtimeSboot, "@oelt"},
  {"<met>", &module_info_runtimeSboot, "<met>"},
  {"app", &module_info_gooSmacros, "app"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"isa", &module_info_runtimeSboot, "isa"},
  {"rep", &module_info_runtimeSboot, "rep"},
  {"buf", &module_info_gooScollectionsSbuffer, "buf"},
  {"*restarts-ok?*", &module_info_runtimeSboot, "*restarts-ok?*"},
  {"tab-growth-factor", &module_info_gooScollectionsStable, "tab-growth-factor"},
  {"application-tail?", &module_info_compilerSast, "application-tail?"},
  {"%lb", &module_info_runtimeSboot, "%lb"},
  {"try", &module_info_runtimeSboot, "try"},
  {"application-known?", &module_info_compilerSast, "application-known?"},
  {"function-registers-setter", &module_info_compilerSast, "function-registers-setter"},
  {"elt-type", &module_info_gooScollectionsScollection, "elt-type"},
  {"signature-names-setter", &module_info_compilerSast, "signature-names-setter"},
  {"%fcos", &module_info_runtimeSboot, "%fcos"},
  {"<enum>", &module_info_gooScollectionsScollection, "<enum>"},
  {"<simple-error>", &module_info_runtimeSruntime, "<simple-error>"},
  {"<application>", &module_info_compilerSast, "<application>"},
  {"prop-init", &module_info_runtimeSboot, "prop-init"},
  {"<arguments>", &module_info_compilerSast, "<arguments>"},
  {"%i^", &module_info_runtimeSboot, "%i^"},
  {"bound?-reference", &module_info_compilerSast, "bound?-reference"},
  {"tab-test", &module_info_gooScollectionsStable, "tab-test"},
  {"fun-nary?", &module_info_runtimeSboot, "fun-nary?"},
  {"%define-method", &module_info_runtimeSboot, "%define-method"},
  {"%sb", &module_info_runtimeSboot, "%sb"},
  {"%fasin", &module_info_runtimeSboot, "%fasin"},
  {"fix-let-body-setter", &module_info_compilerSast, "fix-let-body-setter"},
  {"<subclass>", &module_info_runtimeSboot, "<subclass>"},
  {"<module-binding>", &module_info_compilerSast, "<module-binding>"},
  {"function-signature", &module_info_compilerSast, "function-signature"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%invoke-debugger", &module_info_runtimeSboot, "%invoke-debugger"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"id-hash", &module_info_gooScollectionsStable, "id-hash"},
  {"$goo-runtime-module-name", &module_info_compilerSast, "$goo-runtime-module-name"},
  {"from", &module_info_gooScollectionsSrange, "from"},
  {"class-descendents", &module_info_runtimeSboot, "class-descendents"},
  {"range", &module_info_gooScollectionsSrange, "range"},
  {"%i?", &module_info_runtimeSboot, "%i?"},
  {"puts", &module_info_gooSport, "puts"},
  {"<program>", &module_info_compilerSast, "<program>"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%gen-refs", &module_info_runtimeSboot, "%gen-refs"},
  {"out", &module_info_gooSport, "out"},
  {"%%macro", &module_info_runtimeSboot, "%%macro"},
  {"gen-refs-setter", &module_info_runtimeSboot, "gen-refs-setter"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"%sp-reg", &module_info_runtimeSboot, "%sp-reg"},
  {"reject", &module_info_gooScollectionsSsequence, "reject"},
  {"<restart>", &module_info_runtimeSruntime, "<restart>"},
  {"<<", &module_info_gooSmath, "<<"},
  {"until", &module_info_gooSmacros, "until"},
  {"%eq?", &module_info_runtimeSboot, "%eq?"},
  {"2nd", &module_info_gooStype, "2nd"},
  {"do-module-loader-modules", &module_info_compilerSast, "do-module-loader-modules"},
  {"objectify-quotation", &module_info_compilerSast, "objectify-quotation"},
  {"%symbols", &module_info_runtimeSboot, "%symbols"},
  {"<mag>", &module_info_runtimeSboot, "<mag>"},
  {"round", &module_info_gooSmath, "round"},
  {"prop-value-setter", &module_info_runtimeSboot, "prop-value-setter"},
  {"signature-arity-setter", &module_info_compilerSast, "signature-arity-setter"},
  {"fix-let-body", &module_info_compilerSast, "fix-let-body"},
  {"<ast-macro-definition>", &module_info_compilerSast, "<ast-macro-definition>"},
  {"<chr>", &module_info_runtimeSboot, "<chr>"},
  {"binding-module-name", &module_info_compilerSast, "binding-module-name"},
  {"<flat>", &module_info_runtimeSboot, "<flat>"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"def-programs", &module_info_compilerSast, "def-programs"},
  {"app-args", &module_info_runtimeSruntime, "app-args"},
  {"signature-bindings-setter", &module_info_compilerSast, "signature-bindings-setter"},
  {"%ftanh", &module_info_runtimeSboot, "%ftanh"},
  {"function-data-refs-setter", &module_info_compilerSast, "function-data-refs-setter"},
  {"%unlink-stack", &module_info_runtimeSboot, "%unlink-stack"},
  {"ast-define-binding", &module_info_compilerSast, "ast-define-binding"},
  {"global-box-value-setter", &module_info_compilerSast, "global-box-value-setter"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"<global-reference>", &module_info_compilerSast, "<global-reference>"},
  {"/", &module_info_gooSmath, "/"},
  {"<global-assignment>", &module_info_compilerSast, "<global-assignment>"},
  {"subtype?", &module_info_runtimeSboot, "subtype?"},
  {"%i<", &module_info_runtimeSboot, "%i<"},
  {"<tup>", &module_info_runtimeSboot, "<tup>"},
  {"low-elt", &module_info_gooScollectionsScollection, "low-elt"},
  {"gen-refs", &module_info_runtimeSboot, "gen-refs"},
  {"not", &module_info_runtimeSboot, "not"},
  {"map-keyed", &module_info_gooScollectionsScollection, "map-keyed"},
  {"function-temporaries", &module_info_compilerSast, "function-temporaries"},
  {"sub", &module_info_gooScollectionsSsequence, "sub"},
  {"<ast-generic>", &module_info_compilerSast, "<ast-generic>"},
  {"items", &module_info_gooScollectionsScollection, "items"},
  {"assignment-form", &module_info_compilerSast, "assignment-form"},
  {"%open-out-file", &module_info_runtimeSboot, "%open-out-file"},
  {"locals-body-setter", &module_info_compilerSast, "locals-body-setter"},
  {"binding-native-to?", &module_info_compilerSast, "binding-native-to?"},
  {"reference-called-function?", &module_info_compilerSast, "reference-called-function?"},
  {"binding-global-box", &module_info_compilerSast, "binding-global-box"},
  {"list-handlers", &module_info_runtimeSruntime, "list-handlers"},
  {"%met-code", &module_info_runtimeSboot, "%met-code"},
  {"t?", &module_info_gooStype, "t?"},
  {"<compile-time>", &module_info_compilerSast, "<compile-time>"},
  {"function-free-setter", &module_info_compilerSast, "function-free-setter"},
  {"pos", &module_info_gooScollectionsSsequence, "pos"},
  {"str", &module_info_gooScollectionsSstring, "str"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"locals-body", &module_info_compilerSast, "locals-body"},
  {"use", &module_info_runtimeSboot, "use"},
  {"quasiquote", &module_info_runtimeSboot, "quasiquote"},
  {"fab-sym", &module_info_runtimeSboot, "fab-sym"},
  {"bind-exit-main-fun", &module_info_compilerSast, "bind-exit-main-fun"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"application-arguments", &module_info_compilerSast, "application-arguments"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"signature-names", &module_info_compilerSast, "signature-names"},
  {"sig-specs", &module_info_runtimeSboot, "sig-specs"},
  {"type-error", &module_info_runtimeSboot, "type-error"},
  {"@lst", &module_info_runtimeSboot, "@lst"},
  {"function-data-refs", &module_info_compilerSast, "function-data-refs"},
  {"describe-condition", &module_info_runtimeSruntime, "describe-condition"},
  {"app-filename", &module_info_runtimeSruntime, "app-filename"},
  {"build-condition-interactively", &module_info_runtimeSruntime, "build-condition-interactively"},
  {"default-handler", &module_info_runtimeSruntime, "default-handler"},
  {"*report-prop-unbound-errors?*", &module_info_runtimeSboot, "*report-prop-unbound-errors?*"},
  {"dl", &module_info_runtimeSboot, "dl"},
  {"error", &module_info_runtimeSboot, "error"},
  {"<singleton>", &module_info_runtimeSboot, "<singleton>"},
  {"assocs-test", &module_info_gooScollectionsSassoc, "assocs-test"},
  {"len", &module_info_gooStype, "len"},
  {"add!", &module_info_gooScollectionsScollection, "add!"},
  {"<ast-function>", &module_info_compilerSast, "<ast-function>"},
  {"nil", &module_info_runtimeSboot, "nil"},
  {"wrong-number-arguments-error", &module_info_runtimeSboot, "wrong-number-arguments-error"},
  {"<fun>", &module_info_runtimeSboot, "<fun>"},
  {"function-index", &module_info_compilerSast, "function-index"},
  {"*print-base*", &module_info_gooScollectionsSstring, "*print-base*"},
  {"fold", &module_info_gooScollectionsScollection, "fold"},
  {"fix-let-arguments-setter", &module_info_compilerSast, "fix-let-arguments-setter"},
  {"module-target-environment", &module_info_compilerSast, "module-target-environment"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"t<", &module_info_gooStype, "t<"},
  {"<error>", &module_info_runtimeSruntime, "<error>"},
  {"prop-bound?", &module_info_runtimeSboot, "prop-bound?"},
  {"compose", &module_info_runtimeSruntime, "compose"},
  {"function-binding", &module_info_compilerSast, "function-binding"},
  {"%i+", &module_info_runtimeSboot, "%i+"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"function-body-setter", &module_info_compilerSast, "function-body-setter"},
  {"sig-val", &module_info_runtimeSboot, "sig-val"},
  {"elt-or", &module_info_gooScollectionsScollection, "elt-or"},
  {"%i>>", &module_info_runtimeSboot, "%i>>"},
  {"or", &module_info_gooSmacros, "or"},
  {"<lst>", &module_info_runtimeSboot, "<lst>"},
  {"objectify-with-subtransaction", &module_info_compilerSast, "objectify-with-subtransaction"},
  {"fab-class", &module_info_runtimeSboot, "fab-class"},
  {"<log>", &module_info_runtimeSboot, "<log>"},
  {"put", &module_info_gooSport, "put"},
  {"%loc-val-setter", &module_info_runtimeSboot, "%loc-val-setter"},
  {"binding-info", &module_info_compilerSast, "binding-info"},
  {"init-environment-for-eval", &module_info_compilerSast, "init-environment-for-eval"},
  {"fun-specs", &module_info_runtimeSboot, "fun-specs"},
  {"type-object", &module_info_runtimeSboot, "type-object"},
  {"elt-setter", &module_info_gooScollectionsScollection, "elt-setter"},
  {"%fatan2", &module_info_runtimeSboot, "%fatan2"},
  {"fun-name-setter", &module_info_runtimeSboot, "fun-name-setter"},
  {"pick", &module_info_gooScollectionsSsequence, "pick"},
  {"read", &module_info_runtimeSruntime, "read"},
  {"quote", &module_info_runtimeSboot, "quote"},
  {"default-handler-description", &module_info_runtimeSruntime, "default-handler-description"},
  {"signature-bindings", &module_info_compilerSast, "signature-bindings"},
  {"%facos", &module_info_runtimeSboot, "%facos"},
  {"do-keyed", &module_info_gooScollectionsScollection, "do-keyed"},
  {"binding-dotted?", &module_info_compilerSast, "binding-dotted?"},
  {"%i!", &module_info_runtimeSboot, "%i!"},
  {"%lu", &module_info_runtimeSboot, "%lu"},
  {"binding-dynamic-extent?-setter", &module_info_compilerSast, "binding-dynamic-extent?-setter"},
  {"cat2", &module_info_gooScollectionsSsequence, "cat2"},
  {"handler-info-message", &module_info_runtimeSboot, "handler-info-message"},
  {"%eof-object", &module_info_runtimeSboot, "%eof-object"},
  {"function-source-setter", &module_info_compilerSast, "function-source-setter"},
  {"<simple-handler-info>", &module_info_runtimeSboot, "<simple-handler-info>"},
  {"format-to-string", &module_info_runtimeSruntime, "format-to-string"},
  {"sym-name", &module_info_runtimeSboot, "sym-name"},
  {"$default-handler-info", &module_info_runtimeSruntime, "$default-handler-info"},
  {"<predefined-application>", &module_info_compilerSast, "<predefined-application>"},
  {"<bound?>", &module_info_compilerSast, "<bound?>"},
  {"find", &module_info_gooScollectionsScollection, "find"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"install-initial-bindings", &module_info_compilerSast, "install-initial-bindings"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"zap", &module_info_gooScollectionsScollection, "zap"},
  {"fold+", &module_info_gooScollectionsScollection, "fold+"},
  {"nul", &module_info_runtimeSboot, "nul"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"as-lst", &module_info_compilerSast, "as-lst"},
  {"monitor-info", &module_info_compilerSast, "monitor-info"},
  {"function-free", &module_info_compilerSast, "function-free"},
  {"function-debug-name", &module_info_compilerSast, "function-debug-name"},
  {"fun-name", &module_info_runtimeSboot, "fun-name"},
  {"len-setter", &module_info_gooScollectionsSbuffer, "len-setter"},
  {"probe-module", &module_info_compilerSast, "probe-module"},
  {"%gen-code", &module_info_runtimeSboot, "%gen-code"},
  {"binding-info-setter", &module_info_compilerSast, "binding-info-setter"},
  {"<port>", &module_info_gooSport, "<port>"},
  {"mem?", &module_info_gooScollectionsScollection, "mem?"},
  {"%check-call-types", &module_info_runtimeSboot, "%check-call-types"},
  {"%pair", &module_info_runtimeSboot, "%pair"},
  {"object-class", &module_info_runtimeSboot, "object-class"},
  {"%fsinh", &module_info_runtimeSboot, "%fsinh"},
  {"prop-owner", &module_info_runtimeSboot, "prop-owner"},
  {"%c=", &module_info_runtimeSboot, "%c="},
  {"fix-let-arguments", &module_info_compilerSast, "fix-let-arguments"},
  {"%raw", &module_info_runtimeSboot, "%raw"},
  {"t=", &module_info_gooStype, "t="},
  {"and", &module_info_gooSmacros, "and"},
  {"<regular-application>", &module_info_compilerSast, "<regular-application>"},
  {"$goo-boot-module-name", &module_info_compilerSast, "$goo-boot-module-name"},
  {"%app-args", &module_info_runtimeSboot, "%app-args"},
  {"alternative-consequent", &module_info_compilerSast, "alternative-consequent"},
  {"reference-frame-offset", &module_info_compilerSast, "reference-frame-offset"},
  {"<range>", &module_info_gooScollectionsSrange, "<range>"},
  {"bound?", &module_info_runtimeSboot, "bound?"},
  {"%open-in-file", &module_info_runtimeSboot, "%open-in-file"},
  {"prop-value", &module_info_runtimeSboot, "prop-value"},
  {"%selt-setter", &module_info_runtimeSboot, "%selt-setter"},
  {"<assignment>", &module_info_compilerSast, "<assignment>"},
  {"%loc-off-setter", &module_info_runtimeSboot, "%loc-off-setter"},
  {"class-parents", &module_info_runtimeSboot, "class-parents"},
  {"force-out", &module_info_gooSport, "force-out"},
  {"binding-type-setter", &module_info_compilerSast, "binding-type-setter"},
  {">", &module_info_gooSmagnitude, ">"},
  {"%bb", &module_info_runtimeSboot, "%bb"},
  {"handler-function", &module_info_runtimeSruntime, "handler-function"},
  {"%f<", &module_info_runtimeSboot, "%f<"},
  {"seq", &module_info_runtimeSboot, "seq"},
  {"loc-val-setter", &module_info_runtimeSruntime, "loc-val-setter"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"add", &module_info_gooScollectionsScollection, "add"},
  {"<str-port>", &module_info_gooSport, "<str-port>"},
  {"any2?", &module_info_gooScollectionsScollection, "any2?"},
  {"with-port", &module_info_gooSport, "with-port"},
  {"signature-nary?-setter", &module_info_compilerSast, "signature-nary?-setter"},
  {"env-object-name", &module_info_compilerSast, "env-object-name"},
  {"%fun-reg", &module_info_runtimeSboot, "%fun-reg"},
  {"%flo-bits", &module_info_runtimeSboot, "%flo-bits"},
  {"<seq>", &module_info_runtimeSboot, "<seq>"},
  {"<any>", &module_info_runtimeSboot, "<any>"},
  {"prop-type", &module_info_runtimeSboot, "prop-type"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"unwind-protect-protected-thunk", &module_info_compilerSast, "unwind-protect-protected-thunk"},
  {"vec", &module_info_runtimeSboot, "vec"},
  {"first-then", &module_info_gooScollectionsSstep, "first-then"},
  {"cat!", &module_info_gooScollectionsSsequence, "cat!"},
  {"curry", &module_info_runtimeSruntime, "curry"},
  {"<reference>", &module_info_compilerSast, "<reference>"},
  {"find-environment-module", &module_info_compilerSast, "find-environment-module"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"function-index-setter", &module_info_compilerSast, "function-index-setter"},
  {"as", &module_info_gooStype, "as"},
  {"num-to-str-base", &module_info_gooScollectionsSstring, "num-to-str-base"},
  {"<fab-list>", &module_info_compilerSast, "<fab-list>"},
  {"<map>", &module_info_gooScollectionsSmap, "<map>"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"%i=", &module_info_runtimeSboot, "%i="},
  {"%file-mtime", &module_info_runtimeSboot, "%file-mtime"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"%fatan", &module_info_runtimeSboot, "%fatan"},
  {"<fix-let>", &module_info_compilerSast, "<fix-let>"},
  {"class-props", &module_info_runtimeSboot, "class-props"},
  {"for", &module_info_gooSmacros, "for"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"objectify-signature", &module_info_compilerSast, "objectify-signature"},
  {"<", &module_info_gooSmagnitude, "<"},
  {"%ready?", &module_info_runtimeSboot, "%ready?"},
  {"%fpow", &module_info_runtimeSboot, "%fpow"},
  {"now-setter", &module_info_gooScollectionsScollection, "now-setter"},
  {"even?", &module_info_gooSmath, "even?"},
  {"free-environment", &module_info_compilerSast, "free-environment"},
  {"monitor-handler", &module_info_compilerSast, "monitor-handler"},
  {"<runtime-assignment>", &module_info_compilerSast, "<runtime-assignment>"},
  {"%prop-unbound-error", &module_info_runtimeSboot, "%prop-unbound-error"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"newline", &module_info_gooSport, "newline"},
  {"use/export", &module_info_runtimeSboot, "use/export"},
  {"%cb", &module_info_runtimeSboot, "%cb"},
  {"binding-kind", &module_info_compilerSast, "binding-kind"},
  {"<sig>", &module_info_runtimeSboot, "<sig>"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"ct", &module_info_runtimeSboot, "ct"},
  {">>", &module_info_gooSmath, ">>"},
  {"+", &module_info_gooSmath, "+"},
  {"<global-box>", &module_info_compilerSast, "<global-box>"},
  {"def", &module_info_runtimeSboot, "def"},
  {"%i*", &module_info_runtimeSboot, "%i*"},
  {"%process-module", &module_info_runtimeSboot, "%process-module"},
  {"macro-expand", &module_info_runtimeSboot, "macro-expand"},
  {"reference-binding", &module_info_compilerSast, "reference-binding"},
  {"max", &module_info_gooSmagnitude, "max"},
  {"find-setter", &module_info_runtimeSboot, "find-setter"},
  {"function-bindings", &module_info_compilerSast, "function-bindings"},
  {"<alternative>", &module_info_compilerSast, "<alternative>"},
  {"if", &module_info_runtimeSboot, "if"},
  {"any?", &module_info_gooStype, "any?"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"binding-index-setter", &module_info_compilerSast, "binding-index-setter"},
  {"dp", &module_info_runtimeSboot, "dp"},
  {"&", &module_info_gooSmath, "&"},
  {"function-source", &module_info_compilerSast, "function-source"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"<str-in-port>", &module_info_gooSport, "<str-in-port>"},
  {"%raw-call", &module_info_runtimeSboot, "%raw-call"},
  {"%fu", &module_info_runtimeSboot, "%fu"},
  {"dv", &module_info_runtimeSboot, "dv"},
  {"tab-gc-state", &module_info_gooScollectionsStable, "tab-gc-state"},
  {"into", &module_info_gooScollectionsScollection, "into"},
  {"neg", &module_info_gooSmath, "neg"},
  {"=", &module_info_gooSmath, "="},
  {"case-insensitive-string-equal", &module_info_gooScollectionsStable, "case-insensitive-string-equal"},
  {"empty", &module_info_gooScollectionsScollection, "empty"},
  {"@all2?", &module_info_runtimeSboot, "@all2?"},
  {"%os-val-setter", &module_info_runtimeSboot, "%os-val-setter"},
  {"%get", &module_info_runtimeSboot, "%get"},
  {"%vec", &module_info_runtimeSboot, "%vec"},
  {"@olen", &module_info_runtimeSboot, "@olen"},
  {"%binding-name", &module_info_runtimeSboot, "%binding-name"},
  {"<ast-method>", &module_info_compilerSast, "<ast-method>"},
  {"~=", &module_info_gooSmath, "~="},
  {"==", &module_info_gooSmacros, "=="},
  {"$min-int", &module_info_runtimeSboot, "$min-int"},
  {"<in-port>", &module_info_gooSport, "<in-port>"},
  {"*", &module_info_gooSmath, "*"},
  {"~", &module_info_gooSmath, "~"},
  {"sequentialize", &module_info_compilerSast, "sequentialize"},
  {"<col>", &module_info_runtimeSboot, "<col>"},
  {"<class>", &module_info_runtimeSboot, "<class>"},
  {"sig-names", &module_info_runtimeSboot, "sig-names"},
  {"<assocs>", &module_info_gooScollectionsSassoc, "<assocs>"},
  {"%i<<<", &module_info_runtimeSboot, "%i<<<"},
  {"<constant>", &module_info_compilerSast, "<constant>"},
  {"runtime-environment", &module_info_compilerSast, "runtime-environment"},
  {"signature-value", &module_info_compilerSast, "signature-value"},
  {"fab-gen", &module_info_runtimeSboot, "fab-gen"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"environment-uses-modules", &module_info_compilerSast, "environment-uses-modules"},
  {"<unwind-protect>", &module_info_compilerSast, "<unwind-protect>"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"binding-name", &module_info_compilerSast, "binding-name"},
  {"monitor-type", &module_info_compilerSast, "monitor-type"},
  {"%next-methods", &module_info_runtimeSboot, "%next-methods"},
  {"%f*", &module_info_runtimeSboot, "%f*"},
  {"esc", &module_info_runtimeSboot, "esc"},
  {"$max-int", &module_info_runtimeSboot, "$max-int"},
  {"loc-val", &module_info_runtimeSruntime, "loc-val"},
  {"%force-out", &module_info_runtimeSboot, "%force-out"},
  {"map2", &module_info_gooScollectionsScollection, "map2"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"last", &module_info_gooScollectionsSsequence, "last"},
  {"<handler-info>", &module_info_runtimeSruntime, "<handler-info>"},
  {"%f+", &module_info_runtimeSboot, "%f+"},
  {"<out-port>", &module_info_gooSport, "<out-port>"},
  {"fix-let-types-setter", &module_info_compilerSast, "fix-let-types-setter"},
  {"%str", &module_info_runtimeSboot, "%str"},
  {"module-binding", &module_info_compilerSast, "module-binding"},
  {"port-contents", &module_info_gooSport, "port-contents"},
  {"unwind-protect-cleanup-thunk", &module_info_compilerSast, "unwind-protect-cleanup-thunk"},
  {"%velt", &module_info_runtimeSboot, "%velt"},
  {"%fb", &module_info_runtimeSboot, "%fb"},
  {"<passive-program>", &module_info_compilerSast, "<passive-program>"},
  {"tail-setter", &module_info_runtimeSboot, "tail-setter"},
  {"%c<", &module_info_runtimeSboot, "%c<"},
  {"case", &module_info_gooSmacros, "case"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"alternative-condition", &module_info_compilerSast, "alternative-condition"},
  {"constant-value", &module_info_compilerSast, "constant-value"},
  {"%gen-code-setter", &module_info_runtimeSboot, "%gen-code-setter"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%with-monitor", &module_info_runtimeSboot, "%with-monitor"},
  {"sig-arity", &module_info_runtimeSboot, "sig-arity"},
  {"<replace-generic-restart>", &module_info_runtimeSboot, "<replace-generic-restart>"},
  {"<str-tab>", &module_info_gooScollectionsStable, "<str-tab>"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"function-body", &module_info_compilerSast, "function-body"},
  {"spread", &module_info_runtimeSruntime, "spread"},
  {"%vnul", &module_info_runtimeSboot, "%vnul"},
  {"min", &module_info_gooSmagnitude, "min"},
  {"module-name-to-relpath", &module_info_compilerSast, "module-name-to-relpath"},
  {"*boot-macro-names*", &module_info_runtimeSboot, "*boot-macro-names*"},
  {"init-ast", &module_info_compilerSast, "init-ast"},
  {"%ftan", &module_info_runtimeSboot, "%ftan"},
  {"1+", &module_info_gooSmath, "1+"},
  {"%selt", &module_info_runtimeSboot, "%selt"},
  {"signature-value-setter", &module_info_compilerSast, "signature-value-setter"},
  {"%ft", &module_info_runtimeSboot, "%ft"},
  {"program-register", &module_info_compilerSast, "program-register"},
  {"format", &module_info_runtimeSruntime, "format"},
  {"locals-bindings", &module_info_compilerSast, "locals-bindings"},
  {"<opts>", &module_info_runtimeSboot, "<opts>"},
  {"find-getter", &module_info_runtimeSboot, "find-getter"},
  {"function-temporaries-setter", &module_info_compilerSast, "function-temporaries-setter"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"t*", &module_info_gooStype, "t*"},
  {"function-registers", &module_info_compilerSast, "function-registers"},
  {"tail", &module_info_runtimeSboot, "tail"},
  {"^", &module_info_gooSmath, "^"},
  {"round/", &module_info_gooSmath, "round/"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"<local-reference>", &module_info_compilerSast, "<local-reference>"},
  {"let", &module_info_runtimeSboot, "let"},
  {"<type>", &module_info_runtimeSboot, "<type>"},
  {"ord-app-mets", &module_info_runtimeSboot, "ord-app-mets"},
  {"module-loader-module-type", &module_info_compilerSast, "module-loader-module-type"},
  {"program-type-setter", &module_info_compilerSast, "program-type-setter"},
  {"<monitor>", &module_info_compilerSast, "<monitor>"},
  {"function-self-recursive?-setter", &module_info_compilerSast, "function-self-recursive?-setter"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"describe-handler", &module_info_runtimeSruntime, "describe-handler"},
  {"%im", &module_info_runtimeSboot, "%im"},
  {"nxt", &module_info_gooScollectionsScollection, "nxt"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"<loc>", &module_info_runtimeSboot, "<loc>"},
  {"3rd", &module_info_gooScollectionsSsequence, "3rd"},
  {"fab-handler", &module_info_runtimeSruntime, "fab-handler"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"port-index", &module_info_gooSport, "port-index"},
  {"%i>>>", &module_info_runtimeSboot, "%i>>>"},
  {"<module-loader>", &module_info_compilerSast, "<module-loader>"},
  {"fill", &module_info_gooScollectionsScollection, "fill"},
  {"%cu", &module_info_runtimeSboot, "%cu"},
  {"fab", &module_info_gooScollectionsScollection, "fab"},
  {"type-elts", &module_info_runtimeSboot, "type-elts"},
  {"module-syntax-environment", &module_info_compilerSast, "module-syntax-environment"},
  {"export", &module_info_runtimeSboot, "export"},
  {"%create-directory", &module_info_runtimeSboot, "%create-directory"},
  {"ready?", &module_info_gooSport, "ready?"},
  {"close", &module_info_gooSport, "close"},
  {"len/fill-setter", &module_info_gooScollectionsSbuffer, "len/fill-setter"},
  {"$permanent-hash-state", &module_info_gooScollectionsStable, "$permanent-hash-state"},
  {"binding-locative", &module_info_compilerSast, "binding-locative"},
  {"%close-out-port", &module_info_runtimeSboot, "%close-out-port"},
  {"dc", &module_info_runtimeSboot, "dc"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"@+", &module_info_runtimeSboot, "@+"},
  {"<list>", &module_info_gooScollectionsSlist, "<list>"},
  {"case-insensitive-string-hash", &module_info_gooScollectionsStable, "case-insensitive-string-hash"},
  {"map", &module_info_gooSmacros, "map"},
  {"%puts", &module_info_runtimeSboot, "%puts"},
  {"program-type", &module_info_compilerSast, "program-type"},
  {"%current-out-port", &module_info_runtimeSboot, "%current-out-port"},
  {"del", &module_info_gooScollectionsScollection, "del"},
  {"class-name", &module_info_runtimeSboot, "class-name"},
  {"reference-called-function?-setter", &module_info_compilerSast, "reference-called-function?-setter"},
  {"1-", &module_info_gooSmath, "1-"},
  {"binding-mutable?", &module_info_compilerSast, "binding-mutable?"},
  {"may-isa?", &module_info_runtimeSboot, "may-isa?"},
  {"<computed-program>", &module_info_compilerSast, "<computed-program>"},
  {"function-self-recursive?", &module_info_compilerSast, "function-self-recursive?"},
  {"handler-info-arguments", &module_info_runtimeSboot, "handler-info-arguments"},
  {"%file-exists?", &module_info_runtimeSboot, "%file-exists?"},
  {"%put", &module_info_runtimeSboot, "%put"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"display", &module_info_gooSioSwrite, "display"},
  {"pop", &module_info_gooScollectionsSlist, "pop"},
  {"<immediate-constant>", &module_info_compilerSast, "<immediate-constant>"},
  {"%snul", &module_info_runtimeSboot, "%snul"},
  {"<local-assignment>", &module_info_compilerSast, "<local-assignment>"},
  {"<module-binding-reference>", &module_info_compilerSast, "<module-binding-reference>"},
  {"fab-g2c-module", &module_info_compilerSast, "fab-g2c-module"},
  {"%f=", &module_info_runtimeSboot, "%f="},
  {"-", &module_info_gooSmath, "-"},
  {"loc", &module_info_runtimeSboot, "loc"},
  {"gen-add-met", &module_info_runtimeSboot, "gen-add-met"},
  {"%fcosh", &module_info_runtimeSboot, "%fcosh"},
  {"condition-arguments", &module_info_runtimeSruntime, "condition-arguments"},
  {"now-key", &module_info_gooScollectionsScollection, "now-key"},
  {"prop-setter", &module_info_runtimeSboot, "prop-setter"},
  {"%loc-val", &module_info_runtimeSboot, "%loc-val"},
  {"fun-val", &module_info_runtimeSboot, "fun-val"},
  {"%f-", &module_info_runtimeSboot, "%f-"},
  {"choose-handler", &module_info_runtimeSruntime, "choose-handler"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"keys", &module_info_gooScollectionsScollection, "keys"},
  {"tab-growth-threshold", &module_info_gooScollectionsStable, "tab-growth-threshold"},
  {"assignment-binding", &module_info_compilerSast, "assignment-binding"},
  {">=", &module_info_gooSmagnitude, ">="},
  {"<tab>", &module_info_gooScollectionsScollection, "<tab>"},
  {"fin", &module_info_runtimeSboot, "fin"},
  {"fix-let-types", &module_info_compilerSast, "fix-let-types"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"t+", &module_info_gooStype, "t+"},
  {"~==", &module_info_gooSmath, "~=="},
  {"signature-arity", &module_info_compilerSast, "signature-arity"},
  {"tab-shrink-threshold", &module_info_gooScollectionsStable, "tab-shrink-threshold"},
  {"<programs>", &module_info_compilerSast, "<programs>"},
  {"fun-names", &module_info_runtimeSboot, "fun-names"},
  {"%flog", &module_info_runtimeSboot, "%flog"},
  {"binding-type", &module_info_compilerSast, "binding-type"},
  {"rev", &module_info_gooScollectionsSsequence, "rev"},
  {"file-opening-error", &module_info_runtimeSboot, "file-opening-error"},
  {"class-ancestors", &module_info_runtimeSboot, "class-ancestors"},
  {"1st", &module_info_gooScollectionsSsequence, "1st"},
  {"%ib", &module_info_runtimeSboot, "%ib"},
  {"mif", &module_info_runtimeSboot, "mif"},
  {"locals-bindings-setter", &module_info_compilerSast, "locals-bindings-setter"},
  {"|", &module_info_gooSmath, "|"},
  {"incongruent-method-error", &module_info_runtimeSboot, "incongruent-method-error"},
  {"peek", &module_info_gooSport, "peek"},
  {"global-box-value", &module_info_compilerSast, "global-box-value"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"now", &module_info_gooScollectionsScollection, "now"},
  {"<file-in-port>", &module_info_gooSport, "<file-in-port>"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"<runtime-reference>", &module_info_compilerSast, "<runtime-reference>"},
  {"environment-module", &module_info_compilerSast, "environment-module"},
  {"<static-global-environment>", &module_info_compilerSast, "<static-global-environment>"},
  {"signature-specs-setter", &module_info_compilerSast, "signature-specs-setter"},
  {"tup", &module_info_runtimeSboot, "tup"},
  {"%velt-setter", &module_info_runtimeSboot, "%velt-setter"},
  {"<sequential>", &module_info_compilerSast, "<sequential>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"load-module", &module_info_compilerSast, "load-module"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"pop-last!", &module_info_gooScollectionsSbuffer, "pop-last!"},
  {"locals-functions-setter", &module_info_compilerSast, "locals-functions-setter"},
  {"<flo>", &module_info_runtimeSboot, "<flo>"},
  {"%fi2f", &module_info_runtimeSboot, "%fi2f"},
  {"<sym>", &module_info_runtimeSboot, "<sym>"},
  {"fix-let-bindings-setter", &module_info_compilerSast, "fix-let-bindings-setter"},
  {"signature-specs", &module_info_compilerSast, "signature-specs"},
  {"while", &module_info_gooSmacros, "while"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"met-app?", &module_info_runtimeSboot, "met-app?"},
  {"%i<<", &module_info_runtimeSboot, "%i<<"},
  {"new", &module_info_runtimeSboot, "new"},
  {"%loc-off", &module_info_runtimeSboot, "%loc-off"},
  {"%allocate-stack", &module_info_runtimeSboot, "%allocate-stack"},
  {"prop-getter", &module_info_runtimeSboot, "prop-getter"},
  {"binding-dynamic-extent?", &module_info_compilerSast, "binding-dynamic-extent?"},
  {"object-parents", &module_info_runtimeSboot, "object-parents"},
  {"<serious-condition>", &module_info_runtimeSruntime, "<serious-condition>"},
  {"report-undefined-global-bindings", &module_info_compilerSast, "report-undefined-global-bindings"},
  {"locals-functions", &module_info_compilerSast, "locals-functions"},
  {"dg", &module_info_runtimeSboot, "dg"},
  {"application-function", &module_info_compilerSast, "application-function"},
  {"fun-mets", &module_info_runtimeSboot, "fun-mets"},
  {"@isa?", &module_info_runtimeSboot, "@isa?"},
  {"always", &module_info_runtimeSruntime, "always"},
  {"handler-matches?", &module_info_runtimeSruntime, "handler-matches?"},
  {"do-named-static-global-bindings", &module_info_compilerSast, "do-named-static-global-bindings"},
  {"binding-index", &module_info_compilerSast, "binding-index"},
  {"gen-src-setter", &module_info_runtimeSboot, "gen-src-setter"},
  {"*gensym-counter*", &module_info_runtimeSruntime, "*gensym-counter*"},
  {"do", &module_info_gooSmacros, "do"},
  {"%do-stack-frames", &module_info_runtimeSboot, "%do-stack-frames"},
  {"rcurry", &module_info_runtimeSruntime, "rcurry"},
  {"condition-message", &module_info_runtimeSruntime, "condition-message"},
  {"%build-runtime-modules", &module_info_runtimeSboot, "%build-runtime-modules"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"<condition>", &module_info_runtimeSruntime, "<condition>"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"set", &module_info_runtimeSboot, "set"},
  {"ast-evaluate", &module_info_compilerSast, "ast-evaluate"},
  {"<prop>", &module_info_runtimeSboot, "<prop>"},
  {"set-module-environments", &module_info_compilerSast, "set-module-environments"},
  {"signature-nary?", &module_info_compilerSast, "signature-nary?"},
  {"<bind-exit>", &module_info_compilerSast, "<bind-exit>"},
  {"elts", &module_info_gooScollectionsScollection, "elts"},
  {"function-debug-name-setter", &module_info_compilerSast, "function-debug-name-setter"},
  {"key-test", &module_info_gooScollectionsScollection, "key-test"},
  {"%app-filename", &module_info_runtimeSboot, "%app-filename"},
  {"function-value", &module_info_compilerSast, "function-value"},
  {"<gen>", &module_info_runtimeSboot, "<gen>"},
  {"<=", &module_info_gooSmagnitude, "<="},
  {"<definition>", &module_info_compilerSast, "<definition>"},
  {"keyboard-interrupt", &module_info_runtimeSboot, "keyboard-interrupt"},
  {"when", &module_info_gooSmacros, "when"},
  {"<ast-signature>", &module_info_compilerSast, "<ast-signature>"},
  {"gen-src", &module_info_runtimeSboot, "gen-src"},
  {"build-condition-for-handler-interactively", &module_info_runtimeSruntime, "build-condition-for-handler-interactively"},
  {"alternative-alternant", &module_info_compilerSast, "alternative-alternant"},
  {"gets", &module_info_gooSport, "gets"},
  {"list", &module_info_gooScollectionsSlist, "list"},
  {"%current-in-port", &module_info_runtimeSboot, "%current-in-port"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"sexpr-signature-parameters", &module_info_compilerSsyntax, "sexpr-signature-parameters"},
  {"isa?", &module_info_runtimeSboot, "isa?"},
  {"object-props", &module_info_runtimeSboot, "object-props"},
  {"def-list", &module_info_compilerSast, "def-list"},
  {"%peek", &module_info_runtimeSboot, "%peek"},
  {"%%sym", &module_info_runtimeSboot, "%%sym"},
  {"%sp-reg-setter", &module_info_runtimeSboot, "%sp-reg-setter"},
  {"ct-also", &module_info_runtimeSboot, "ct-also"},
  {"%fsqrt", &module_info_runtimeSboot, "%fsqrt"},
  {"fin?", &module_info_gooScollectionsScollection, "fin?"},
  {"str-to-num", &module_info_gooScollectionsSstring, "str-to-num"},
  {"<module>", &module_info_compilerSast, "<module>"},
  {"all2?", &module_info_gooStype, "all2?"},
  {"unchecked-runtime-environment", &module_info_compilerSast, "unchecked-runtime-environment"},
  {"find-binding", &module_info_compilerSast, "find-binding"},
  {"<step>", &module_info_gooScollectionsSstep, "<step>"},
  {"binding-inferred-type", &module_info_compilerSast, "binding-inferred-type"},
  {"open", &module_info_gooSport, "open"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"*macros-ok?*", &module_info_runtimeSboot, "*macros-ok?*"},
  {"binding-dotted?-setter", &module_info_compilerSast, "binding-dotted?-setter"},
  {"sig-nary?", &module_info_runtimeSboot, "sig-nary?"},
  {"<int>", &module_info_runtimeSboot, "<int>"},
  {"<str>", &module_info_runtimeSboot, "<str>"},
  {"all?", &module_info_gooScollectionsScollection, "all?"},
  {"fun-arity", &module_info_runtimeSboot, "fun-arity"},
  {"@<", &module_info_runtimeSboot, "@<"},
  {"fun", &module_info_runtimeSboot, "fun"},
  {"%prop", &module_info_runtimeSboot, "%prop"},
  {"%it/", &module_info_runtimeSboot, "%it/"},
  {"dm", &module_info_runtimeSboot, "dm"},
  {"sub-setter", &module_info_gooScollectionsSsequence, "sub-setter"},
  {"del-dups", &module_info_gooScollectionsSsequence, "del-dups"},
  {"add-prop", &module_info_runtimeSboot, "add-prop"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"fab-map", &module_info_gooScollectionsSmap, "fab-map"},
  {"<simple-condition>", &module_info_runtimeSruntime, "<simple-condition>"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"%binding-value", NULL},
  {"env-local-value", &YcompilerSast_evalYenv_local_value},
  {"ifun", NULL},
  {"---main-1---", NULL},
  {"env-define-binding!", &YcompilerSast_evalYenv_define_bindingX},
  {"$nul-loc-env", &YcompilerSast_evalYDnul_loc_env},
  {"env-global-binding-value", &YcompilerSast_evalYenv_global_binding_value},
  {"env-global-binding-value-setter", &YcompilerSast_evalYenv_global_binding_value_setter},
  {"env-values", &YcompilerSast_evalYenv_values},
  {"%dlvar-setter", NULL},
  {"env-global-binding-bound?", &YcompilerSast_evalYenv_global_binding_boundQ},
  {"%dlvar-mod", NULL},
  {"env-runtime-value", &YcompilerSast_evalYenv_runtime_value},
  {"env-binding-value", &YcompilerSast_evalYenv_binding_value},
  {"env-frame!", &YcompilerSast_evalYenv_frameX},
  {"env-binding-value-setter", &YcompilerSast_evalYenv_binding_value_setter},
  {"env-parent-setter", &YcompilerSast_evalYenv_parent_setter},
  {"env-local-reference-value-setter", &YcompilerSast_evalYenv_local_reference_value_setter},
  {"%binding-bound?", NULL},
  {"env-parent", &YcompilerSast_evalYenv_parent},
  {"env-local-value-setter", &YcompilerSast_evalYenv_local_value_setter},
  {"env-function-setter", &YcompilerSast_evalYenv_function_setter},
  {"env-function", &YcompilerSast_evalYenv_function},
  {"env-names-setter", &YcompilerSast_evalYenv_names_setter},
  {"env-names", &YcompilerSast_evalYenv_names},
  {"%binding-value-setter", NULL},
  {"%define-binding", NULL},
  {"%dlvar", NULL},
  {"---main-0---", NULL},
  {"%dlvar-nam", NULL},
  {"env-runtime-value-setter", &YcompilerSast_evalYenv_runtime_value_setter},
  {"env-local-reference-value", &YcompilerSast_evalYenv_local_reference_value},
  {"%lookup-binding", NULL},
  {"env-values-setter", &YcompilerSast_evalYenv_values_setter},
  {"*stack*", &YcompilerSast_evalYTstackT},
  {"%ensure-binding", NULL},
  {"ast-eval-specs", &YcompilerSast_evalYast_eval_specs},
  {"as-fun-name", &YcompilerSast_evalYas_fun_name},
  {"<loc-env>", &YcompilerSast_evalYLloc_envG},
  {"ast-eval-bound?", &YcompilerSast_evalYast_eval_boundQ},
  {"export-goo-method", &YcompilerSast_evalYexport_goo_method},
  {"arrange-arguments", &YcompilerSast_evalYarrange_arguments},
  {"%dlvar-binding", NULL},
  {"ast-eval", &YcompilerSast_evalYast_eval},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"%binding-value", "%binding-value"},
  {"init-environment-for-eval", "init-environment-for-eval"},
  {"%binding-bound?", "%binding-bound?"},
  {"%binding-value-setter", "%binding-value-setter"},
  {"ast-evaluate", "ast-evaluate"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_compilerSast_eval;
MODULE_INFO module_info_compilerSast_eval = {
  "compiler/ast-eval",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_runtimeSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_runtimeSruntime (void);
extern void load_module_goo (void);
extern void load_module_compilerSast (void);

/* EXPRESSION: */

extern void load_module_compilerSast_eval (void);

void load_module_compilerSast_eval (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_runtimeSboot();
  load_module_gooSmacros();
  load_module_runtimeSruntime();
  load_module_goo();
  load_module_compilerSast();

  (P)YcompilerSast_evalY___main_0___();
  (P)YcompilerSast_evalY___main_1___();

}

/* END OF GENERATED CODE. */
