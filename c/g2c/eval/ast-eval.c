/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: compiler/ast-eval */

EXT(YcompilerSastYLprogramG,"compiler/ast","<program>");
EXT(YcompilerSastYapplication_knownQ,"compiler/ast","application-known?");
EXT(YcompilerSastYLargumentsG,"compiler/ast","<arguments>");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YcompilerSastYLpredefined_applicationG,"compiler/ast","<predefined-application>");
EXT(Ymay_isaQ,"runtime/boot","may-isa?");
EXT(YcompilerSastYglobal_box_value,"compiler/ast","global-box-value");
EXT(YgooScollectionsStableYtab_growth_threshold,"goo/collections/table","tab-growth-threshold");
EXT(YcompilerSastYunwind_protect_protected_thunk,"compiler/ast","unwind-protect-protected-thunk");
EXT(YcompilerSastYfix_let_types_setter,"compiler/ast","fix-let-types-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScollectionsStableYtab_growth_factor,"goo/collections/table","tab-growth-factor");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YDmin_int,"runtime/boot","$min-int");
EXT(Ygen_add_met,"runtime/boot","gen-add-met");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yprop_setter,"runtime/boot","prop-setter");
EXT(YcompilerSastYunwind_protect_cleanup_thunk,"compiler/ast","unwind-protect-cleanup-thunk");
EXT(Yfun_val,"runtime/boot","fun-val");
EXT(YgooScollectionsScollectionYlow_elt,"goo/collections/collection","low-elt");
EXT(YgooScollectionsScollectionYmap_keyed,"goo/collections/collection","map-keyed");
DEF(YcompilerSast_evalYenv_frameX,"compiler/ast-eval","env-frame!");
EXT(YgooScollectionsSsequenceYsub,"goo/collections/sequence","sub");
EXT(YgooScollectionsStableYLstr_tabG,"goo/collections/table","<str-tab>");
EXT(YcompilerSastYfunction_binding,"compiler/ast","function-binding");
EXT(YruntimeSruntimeYbuild_condition_for_handler_interactively,"runtime/runtime","build-condition-for-handler-interactively");
EXT(YgooScollectionsScollectionYitems,"goo/collections/collection","items");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YcompilerSastYreference_binding,"compiler/ast","reference-binding");
EXT(YcompilerSastYload_in,"compiler/ast","load-in");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YcompilerSastYsignature_value_setter,"compiler/ast","signature-value-setter");
EXT(Yclass_ancestors,"runtime/boot","class-ancestors");
EXT(YcompilerSastYconstant_index_setter,"compiler/ast","constant-index-setter");
DEF(YcompilerSast_evalYenv_binding_value_setter,"compiler/ast-eval","env-binding-value-setter");
EXT(YcompilerSastYLast_signatureG,"compiler/ast","<ast-signature>");
EXT(YcompilerSastYfix_let_types,"compiler/ast","fix-let-types");
DEF(YcompilerSast_evalYenv_parent,"compiler/ast-eval","env-parent");
EXT(YcompilerSastYcompile_time_program,"compiler/ast","compile-time-program");
EXT(YgooScollectionsSlistYLlistG,"goo/collections/list","<list>");
EXT(YruntimeSruntimeYcondition_arguments,"runtime/runtime","condition-arguments");
EXT(YcompilerSastYsignature_naryQ_setter,"compiler/ast","signature-nary?-setter");
EXT(YruntimeSruntimeYLserious_conditionG,"runtime/runtime","<serious-condition>");
EXT(YcompilerSastYbinding_mutableQ,"compiler/ast","binding-mutable?");
EXT(YPsnul,"runtime/boot","%snul");
EXT(YcompilerSastYbinding_type,"compiler/ast","binding-type");
EXT(YcompilerSastYunchecked_runtime_environment,"compiler/ast","unchecked-runtime-environment");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YLfloG,"runtime/boot","<flo>");
EXT(YLsymG,"runtime/boot","<sym>");
EXT(YcompilerSastYLast_primitive_definitionG,"compiler/ast","<ast-primitive-definition>");
EXT(Ymet_appQ,"runtime/boot","met-app?");
EXT(YgooScollectionsScollectionYaddX,"goo/collections/collection","add!");
EXT(YruntimeSruntimeYformat_to_string,"runtime/runtime","format-to-string");
EXT(Ynew,"runtime/boot","new");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YcompilerSastYlocals_bindings,"compiler/ast","locals-bindings");
EXT(Yobject_parents,"runtime/boot","object-parents");
EXT(YgooScollectionsScollectionYfold,"goo/collections/collection","fold");
EXT(YgooScollectionsStableYtab_gc_state,"goo/collections/table","tab-gc-state");
EXT(YcompilerSastYfix_let_body_setter,"compiler/ast","fix-let-body-setter");
EXT(YcompilerSastYassignment_form_setter,"compiler/ast","assignment-form-setter");
EXT(YcompilerSastYobjectify_quotation,"compiler/ast","objectify-quotation");
EXT(YOisaQ,"runtime/boot","@isa?");
EXT(Yfun_mets,"runtime/boot","fun-mets");
EXT(YcompilerSastYapplication_arguments,"compiler/ast","application-arguments");
EXT(YcompilerSastYinstall_initial_bindings,"compiler/ast","install-initial-bindings");
EXT(YcompilerSastYfix_let_bindings_setter,"compiler/ast","fix-let-bindings-setter");
EXT(Ygen_src_setter,"runtime/boot","gen-src-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YruntimeSruntimeYLsimple_errorG,"runtime/runtime","<simple-error>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YcompilerSastYLfree_environmentG,"compiler/ast","<free-environment>");
EXT(YcompilerSastYmodule_exports,"compiler/ast","module-exports");
EXT(YgooScollectionsStableYid_hash,"goo/collections/table","id-hash");
EXT(Yadd_prop,"runtime/boot","add-prop");
EXT(YcompilerSastYfunction_index_setter,"compiler/ast","function-index-setter");
EXT(YcompilerSastYLlocalsG,"compiler/ast","<locals>");
EXT(YruntimeSruntimeYread,"runtime/runtime","read");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScollectionsScollectionYelt_setter,"goo/collections/collection","elt-setter");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScollectionsScollectionYdo_keyed,"goo/collections/collection","do-keyed");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScollectionsSsequenceYpick,"goo/collections/sequence","pick");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLpropG,"runtime/boot","<prop>");
EXT(YcompilerSastYLconstantG,"compiler/ast","<constant>");
EXT(YcompilerSastYfunction_index,"compiler/ast","function-index");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScollectionsSbufferYpush_lastX,"goo/collections/buffer","push-last!");
EXT(YgooScollectionsScollectionYelts,"goo/collections/collection","elts");
EXT(YcompilerSastYLmonitorG,"compiler/ast","<monitor>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScollectionsSsequenceYcat2,"goo/collections/sequence","cat2");
EXT(YcompilerSastYfunction_body_setter,"compiler/ast","function-body-setter");
EXT(YLgenG,"runtime/boot","<gen>");
EXT(YcompilerSastYfunction_signature_setter,"compiler/ast","function-signature-setter");
EXT(YcompilerSastYassignment_reference,"compiler/ast","assignment-reference");
EXT(Ygen_src,"runtime/boot","gen-src");
EXT(Yobject_props,"runtime/boot","object-props");
EXT(YisaQ,"runtime/boot","isa?");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YcompilerSastYLast_genericG,"compiler/ast","<ast-generic>");
EXT(YcompilerSastYconstant_index,"compiler/ast","constant-index");
EXT(YPsymbols,"runtime/boot","%symbols");
EXT(YgooScollectionsSmapYLmapG,"goo/collections/map","<map>");
EXT(YgooScollectionsSlistYpop,"goo/collections/list","pop");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScollectionsStableYtab_hash,"goo/collections/table","tab-hash");
EXT(YcompilerSastYfunction_body,"compiler/ast","function-body");
EXT(YgooScollectionsScollectionYmemQ,"goo/collections/collection","mem?");
EXT(YcompilerSastYreference_called_functionQ_setter,"compiler/ast","reference-called-function?-setter");
EXT(YruntimeSruntimeYdescribe_handler,"runtime/runtime","describe-handler");
DEF(YcompilerSast_evalYenv_function_setter,"compiler/ast-eval","env-function-setter");
EXT(YcompilerSastYLruntime_assignmentG,"compiler/ast","<runtime-assignment>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YruntimeSruntimeYrcurry,"runtime/runtime","rcurry");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YcompilerSastYLregular_applicationG,"compiler/ast","<regular-application>");
EXT(YgooScollectionsSstringYnum_to_str_base,"goo/collections/string","num-to-str-base");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YcompilerSastYfab_g2c_module,"compiler/ast","fab-g2c-module");
EXT(Ysig_naryQ,"runtime/boot","sig-nary?");
EXT(YPwith_monitor,"runtime/boot","%with-monitor");
EXT(YLintG,"runtime/boot","<int>");
EXT(YgooScollectionsSrangeYLrangeG,"goo/collections/range","<range>");
EXT(YLstrG,"runtime/boot","<str>");
DEF(YcompilerSast_evalYenv_function,"compiler/ast-eval","env-function");
EXT(YgooScollectionsScollectionYallQ,"goo/collections/collection","all?");
EXT(YgooScollectionsScollectionYmap2,"goo/collections/collection","map2");
EXT(Yfun_arity,"runtime/boot","fun-arity");
EXT(YcompilerSastYsignature_bindings_setter,"compiler/ast","signature-bindings-setter");
EXT(YPprop,"runtime/boot","%prop");
EXT(YruntimeSruntimeYchoose_handler,"runtime/runtime","choose-handler");
EXT(YruntimeSruntimeYLerrorG,"runtime/runtime","<error>");
EXT(YruntimeSruntimeYspread,"runtime/runtime","spread");
EXT(YcompilerSastYLbind_exitG,"compiler/ast","<bind-exit>");
EXT(YgooStypesYas,"goo/types","as");
EXT(YcompilerSastYfix_let_bindings,"compiler/ast","fix-let-bindings");
EXT(YcompilerSastYLprogramsG,"compiler/ast","<programs>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YPisa,"runtime/boot","%isa");
EXT(YgooScollectionsScollectionYdel,"goo/collections/collection","del");
EXT(YcompilerSastYbinding_dottedQ_setter,"compiler/ast","binding-dotted?-setter");
EXT(YcompilerSastYreference_frame_number,"compiler/ast","reference-frame-number");
EXT(YcompilerSastYremove_modules_by_nameX,"compiler/ast","remove-modules-by-name!");
EXT(YcompilerSastYfind_binding,"compiler/ast","find-binding");
EXT(YgooScollectionsSbufferYbuf,"goo/collections/buffer","buf");
EXT(YgooScollectionsScollectionYadd,"goo/collections/collection","add");
EXT(Ytup,"runtime/boot","tup");
EXT(YgooScollectionsScollectionYany2Q,"goo/collections/collection","any2?");
EXT(YTmacros_okQT,"runtime/boot","*macros-ok?*");
EXT(YruntimeSruntimeYidentity,"runtime/runtime","identity");
EXT(Yhandler_info_message,"runtime/boot","handler-info-message");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YcompilerSastYLast_primitiveG,"compiler/ast","<ast-primitive>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScollectionsSsequenceYcatX,"goo/collections/sequence","cat!");
EXT(YLreplace_generic_restartG,"runtime/boot","<replace-generic-restart>");
EXT(Ysig_unification_vars,"runtime/boot","sig-unification-vars");
EXT(YcompilerSastYmonitor_test,"compiler/ast","monitor-test");
EXT(Yhead_setter,"runtime/boot","head-setter");
EXT(Ytype_class,"runtime/boot","type-class");
EXT(Yunexec,"runtime/boot","unexec");
EXT(Yfun_sig_setter,"runtime/boot","fun-sig-setter");
EXT(Yincongruent_method_error,"runtime/boot","incongruent-method-error");
EXT(YLunionG,"runtime/boot","<union>");
EXT(YgooScollectionsStableYtab_shrink_threshold,"goo/collections/table","tab-shrink-threshold");
EXT(YLtupG,"runtime/boot","<tup>");
EXT(YgooScollectionsScollectionYnow_setter,"goo/collections/collection","now-setter");
EXT(YcompilerSastYobjectify_with_subtransaction,"compiler/ast","objectify-with-subtransaction");
EXT(YcompilerSastYfunction_registers_setter,"compiler/ast","function-registers-setter");
EXT(YgooScollectionsScollectionYnxt,"goo/collections/collection","nxt");
EXT(YcompilerSastYmodule_syntax_environment,"compiler/ast","module-syntax-environment");
EXT(YcompilerSastYapplication_binding,"compiler/ast","application-binding");
EXT(YcompilerSastYsignature_value,"compiler/ast","signature-value");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YcompilerSastYDgoo_runtime_module_name,"compiler/ast","$goo-runtime-module-name");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YruntimeSruntimeYformat,"runtime/runtime","format");
EXT(YgooScollectionsSstringYTprint_baseT,"goo/collections/string","*print-base*");
EXT(YcompilerSastYenvironment_bindings,"compiler/ast","environment-bindings");
EXT(YcompilerSastYassignment_binding,"compiler/ast","assignment-binding");
EXT(Yhead,"runtime/boot","head");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScollectionsScollectionYelt_or,"goo/collections/collection","elt-or");
DEF(YcompilerSast_evalYenv_names,"compiler/ast-eval","env-names");
EXT(YcompilerSastYbind_exit_main_fun,"compiler/ast","bind-exit-main-fun");
EXT(YcompilerSastYLapplicationG,"compiler/ast","<application>");
EXT(Ykeyboard_interrupt,"runtime/boot","keyboard-interrupt");
EXT(YLnumG,"runtime/boot","<num>");
EXT(YLvecG,"runtime/boot","<vec>");
EXT(YgooSmagnitudeYmax,"goo/magnitude","max");
EXT(Yprop_getter,"runtime/boot","prop-getter");
EXT(YcompilerSastYLlocal_bindingG,"compiler/ast","<local-binding>");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YcompilerSastYbinding_index,"compiler/ast","binding-index");
EXT(YruntimeSruntimeYfab_handler,"runtime/runtime","fab-handler");
EXT(YTboot_macro_namesT,"runtime/boot","*boot-macro-names*");
EXT(YcompilerSastYLlocal_assignmentG,"compiler/ast","<local-assignment>");
EXT(YcompilerSastYmonitor_info,"compiler/ast","monitor-info");
EXT(YgooScollectionsScollectionYinto,"goo/collections/collection","into");
EXT(YcompilerSastYenv_object_name,"compiler/ast","env-object-name");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScollectionsScollectionYempty,"goo/collections/collection","empty");
EXT(YcompilerSastYLalternativeG,"compiler/ast","<alternative>");
EXT(YcompilerSastYbinding_kind,"compiler/ast","binding-kind");
EXT(YruntimeSruntimeYapp_args,"runtime/runtime","app-args");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooScollectionsScollectionYnow_key,"goo/collections/collection","now-key");
EXT(Yclass_direct_props,"runtime/boot","class-direct-props");
EXT(YcompilerSastYfunction_debug_name_setter,"compiler/ast","function-debug-name-setter");
EXT(YgooSioSwriteYdisplay,"goo/io/write","display");
EXT(YcompilerSastYLast_macro_definitionG,"compiler/ast","<ast-macro-definition>");
EXT(YcompilerSastYLsequentialG,"compiler/ast","<sequential>");
EXT(YgooScollectionsStableYtab_test,"goo/collections/table","tab-test");
EXT(YcompilerSastYfree_environment,"compiler/ast","free-environment");
EXT(YLmetG,"runtime/boot","<met>");
EXT(YruntimeSruntimeYLconditionG,"runtime/runtime","<condition>");
EXT(YcompilerSastYLmoduleG,"compiler/ast","<module>");
EXT(YgooScollectionsScollectionYzap,"goo/collections/collection","zap");
EXT(YgooScollectionsSbufferYlen_setter,"goo/collections/buffer","len-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmagnitudeYmin,"goo/magnitude","min");
EXT(Yprop_init,"runtime/boot","prop-init");
EXT(Yfun_naryQ,"runtime/boot","fun-nary?");
EXT(YcompilerSastYdo_named_static_global_bindings,"compiler/ast","do-named-static-global-bindings");
DEF(YcompilerSast_evalYast_eval_boundQ,"compiler/ast-eval","ast-eval-bound?");
EXT(YruntimeSruntimeYinvoke_handler_interactively,"runtime/runtime","invoke-handler-interactively");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScollectionsSsequenceYlast,"goo/collections/sequence","last");
EXT(YLsubclassG,"runtime/boot","<subclass>");
EXT(YgooScollectionsScollectionYnow,"goo/collections/collection","now");
EXT(YcompilerSastYLstatic_global_environmentG,"compiler/ast","<static-global-environment>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YcompilerSastYfunction_free_setter,"compiler/ast","function-free-setter");
EXT(YcompilerSastYprogram_register_setter,"compiler/ast","program-register-setter");
EXT(Yclass_descendents,"runtime/boot","class-descendents");
EXT(YruntimeSruntimeYLrestartG,"runtime/runtime","<restart>");
EXT(YgooStypesYtT,"goo/types","t*");
DEF(YcompilerSast_evalYenv_global_binding_value_setter,"compiler/ast-eval","env-global-binding-value-setter");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Ygen_refs_setter,"runtime/boot","gen-refs-setter");
EXT(YgooScollectionsSlistYpush,"goo/collections/list","push");
EXT(YcompilerSastYfunction_registers,"compiler/ast","function-registers");
EXT(YgooSmacrosYcat,"goo/macros","cat");
DEF(YcompilerSast_evalYenv_local_reference_value,"compiler/ast-eval","env-local-reference-value");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YcompilerSastYbinding_type_setter,"compiler/ast","binding-type-setter");
EXT(Yprop_value_setter,"runtime/boot","prop-value-setter");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScollectionsScollectionYfinQ,"goo/collections/collection","fin?");
EXT(YLchrG,"runtime/boot","<chr>");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YLflatG,"runtime/boot","<flat>");
DEF(YcompilerSast_evalYexport_goo_method,"compiler/ast-eval","export-goo-method");
DEF(YcompilerSast_evalYenv_local_value,"compiler/ast-eval","env-local-value");
EXT(Yhandler_info_arguments,"runtime/boot","handler-info-arguments");
DEF(YcompilerSast_evalYenv_local_value_setter,"compiler/ast-eval","env-local-value-setter");
EXT(Ytype_error,"runtime/boot","type-error");
EXT(YgooSmathYT,"goo/math","*");
DEF(YcompilerSast_evalYenv_local_reference_value_setter,"compiler/ast-eval","env-local-reference-value-setter");
EXT(YcompilerSastYmodule_name,"compiler/ast","module-name");
EXT(YsubtypeQ,"runtime/boot","subtype?");
EXT(Ygen_refs,"runtime/boot","gen-refs");
EXT(YcompilerSastYinit_environment_for_eval,"compiler/ast","init-environment-for-eval");
EXT(Ynot,"runtime/boot","not");
EXT(YcompilerSastYsignature_bindings,"compiler/ast","signature-bindings");
DEF(YcompilerSast_evalYenv_global_binding_boundQ,"compiler/ast-eval","env-global-binding-bound?");
EXT(YcompilerSastYsignature_naryQ,"compiler/ast","signature-nary?");
DEF(YcompilerSast_evalYenv_global_binding_value,"compiler/ast-eval","env-global-binding-value");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YruntimeSruntimeYLsimple_conditionG,"runtime/runtime","<simple-condition>");
EXT(YruntimeSruntimeYapp_filename,"runtime/runtime","app-filename");
EXT(YcompilerSastYmonitor_main_thunk,"compiler/ast","monitor-main-thunk");
EXT(YgooScollectionsSsequenceY3rd,"goo/collections/sequence","3rd");
EXT(YgooScollectionsSsequenceYpos,"goo/collections/sequence","pos");
EXT(YcompilerSastYfunction_source_setter,"compiler/ast","function-source-setter");
EXT(YgooScollectionsScollectionYfill,"goo/collections/collection","fill");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(Yfab_sym,"runtime/boot","fab-sym");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ylst,"runtime/boot","lst");
EXT(YgooSmagnitudeYGE,"goo/magnitude",">=");
EXT(YruntimeSruntimeYbuild_condition_interactively,"runtime/runtime","build-condition-interactively");
EXT(Ysig_specs,"runtime/boot","sig-specs");
EXT(YOlst,"runtime/boot","@lst");
EXT(YcompilerSastYLboundQG,"compiler/ast","<bound?>");
DEF(YcompilerSast_evalYast_eval_specs,"compiler/ast-eval","ast-eval-specs");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YcompilerSastYbinding_native_toQ,"compiler/ast","binding-native-to?");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YcompilerSastYsequentialize,"compiler/ast","sequentialize");
EXT(YcompilerSastYassignment_form,"compiler/ast","assignment-form");
DEF(YcompilerSast_evalYenv_runtime_value_setter,"compiler/ast-eval","env-runtime-value-setter");
EXT(YcompilerSastYLimmediate_constantG,"compiler/ast","<immediate-constant>");
EXT(Ynul,"runtime/boot","nul");
EXT(Yerror,"runtime/boot","error");
EXT(YLsingletonG,"runtime/boot","<singleton>");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YcompilerSastYfunction_value,"compiler/ast","function-value");
EXT(YcompilerSastYast_define_binding,"compiler/ast","ast-define-binding");
EXT(YcompilerSastYbinding_inferred_type_setter,"compiler/ast","binding-inferred-type-setter");
EXT(YcompilerSastYset_module_environments,"compiler/ast","set-module-environments");
EXT(YgooScollectionsSrangeYrange,"goo/collections/range","range");
EXT(YruntimeSruntimeYsig,"runtime/runtime","sig");
EXT(YruntimeSruntimeYcompose,"runtime/runtime","compose");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLfunG,"runtime/boot","<fun>");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YcompilerSastYlocals_bindings_setter,"compiler/ast","locals-bindings-setter");
EXT(YcompilerSastYfunction_source,"compiler/ast","function-source");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YcompilerSastYLcompile_timeG,"compiler/ast","<compile-time>");
EXT(YTboot_macro_expandersT,"runtime/boot","*boot-macro-expanders*");
EXT(YgooScollectionsSstepYLstepG,"goo/collections/step","<step>");
EXT(Yprop_boundQ,"runtime/boot","prop-bound?");
EXT(YgooScollectionsSstepYfirst_then,"goo/collections/step","first-then");
DEF(YcompilerSast_evalYast_eval,"compiler/ast-eval","ast-eval");
EXT(Yfile_opening_error,"runtime/boot","file-opening-error");
EXT(YcompilerSastYsignature_arity_setter,"compiler/ast","signature-arity-setter");
EXT(YPPmacro,"runtime/boot","%%macro");
EXT(YcompilerSastYboundQ_reference,"compiler/ast","bound?-reference");
EXT(Ysig_val,"runtime/boot","sig-val");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLlstG,"runtime/boot","<lst>");
EXT(Yfab_class,"runtime/boot","fab-class");
EXT(YLlogG,"runtime/boot","<log>");
EXT(YgooSmathYC,"goo/math","^");
EXT(YLsimple_handler_infoG,"runtime/boot","<simple-handler-info>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YcompilerSastYsignature_names,"compiler/ast","signature-names");
EXT(YcompilerSastYlocals_body_setter,"compiler/ast","locals-body-setter");
DEF(YcompilerSast_evalYenv_parent_setter,"compiler/ast-eval","env-parent-setter");
EXT(Yfun_specs,"runtime/boot","fun-specs");
EXT(Ytype_object,"runtime/boot","type-object");
DEF(YcompilerSast_evalYLloc_envG,"compiler/ast-eval","<loc-env>");
DEF(YcompilerSast_evalYenv_values_setter,"compiler/ast-eval","env-values-setter");
EXT(Yfun_name_setter,"runtime/boot","fun-name-setter");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YcompilerSastYbinding_index_setter,"compiler/ast","binding-index-setter");
EXT(YgooScollectionsSsequenceYrev,"goo/collections/sequence","rev");
EXT(YcompilerSastYLpassive_programG,"compiler/ast","<passive-program>");
EXT(YcompilerSastYconstant_value,"compiler/ast","constant-value");
EXT(YgooScollectionsSsequenceY1st,"goo/collections/sequence","1st");
EXT(YgooScollectionsScollectionYenum,"goo/collections/collection","enum");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YcompilerSastYbinding_dynamic_extentQ,"compiler/ast","binding-dynamic-extent?");
EXT(YgooSmagnitudeYLE,"goo/magnitude","<=");
EXT(YcompilerSastYlocals_body,"compiler/ast","locals-body");
EXT(YcompilerSastYbinding_dynamic_extentQ_setter,"compiler/ast","binding-dynamic-extent?-setter");
EXT(Yunknown_function_error,"runtime/boot","unknown-function-error");
DEF(YcompilerSast_evalYenv_values,"compiler/ast-eval","env-values");
DEF(YcompilerSast_evalYenv_define_bindingX,"compiler/ast-eval","env-define-binding!");
EXT(YcompilerSastYfunction_bindings,"compiler/ast","function-bindings");
DEF(YcompilerSast_evalYarrange_arguments,"compiler/ast-eval","arrange-arguments");
EXT(YcompilerSastYfunction_data_refs_setter,"compiler/ast","function-data-refs-setter");
EXT(YPvnul,"runtime/boot","%vnul");
EXT(Ysym_name,"runtime/boot","sym-name");
EXT(YruntimeSruntimeYLhandler_infoG,"runtime/runtime","<handler-info>");
EXT(YgooScollectionsScollectionYfind,"goo/collections/collection","find");
EXT(YruntimeSruntimeYlist_handlers,"runtime/runtime","list-handlers");
EXT(YcompilerSastYapplication_function,"compiler/ast","application-function");
DEF(YcompilerSast_evalYTstackT,"compiler/ast-eval","*stack*");
EXT(YruntimeSruntimeYhandler_matchesQ,"runtime/runtime","handler-matches?");
EXT(YPdefine_method,"runtime/boot","%define-method");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Yfun_name,"runtime/boot","fun-name");
EXT(YcompilerSastYLmodule_bindingG,"compiler/ast","<module-binding>");
EXT(YgooScollectionsSstringYstr_to_num,"goo/collections/string","str-to-num");
EXT(YcompilerSastYalternative_consequent,"compiler/ast","alternative-consequent");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Yobject_class,"runtime/boot","object-class");
EXT(Yprop_owner,"runtime/boot","prop-owner");
EXT(YgooScollectionsSrangeYrange_by,"goo/collections/range","range-by");
EXT(YcompilerSastYLglobal_referenceG,"compiler/ast","<global-reference>");
DEF(YcompilerSast_evalYenv_runtime_value,"compiler/ast-eval","env-runtime-value");
DEF(YcompilerSast_evalYDnul_loc_env,"compiler/ast-eval","$nul-loc-env");
EXT(YcompilerSastYLruntime_referenceG,"compiler/ast","<runtime-reference>");
EXT(YcompilerSastYfunction_data_refs,"compiler/ast","function-data-refs");
EXT(YgooScollectionsScollectionYLtabG,"goo/collections/collection","<tab>");
EXT(YcompilerSastYbinding_global_box,"compiler/ast","binding-global-box");
EXT(YcompilerSsyntaxYsexpr_signature_parameters,"compiler/syntax","sexpr-signature-parameters");
EXT(YcompilerSastYfind_environment_module,"compiler/ast","find-environment-module");
EXT(YcompilerSastYsignature_specs,"compiler/ast","signature-specs");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Yprop_value,"runtime/boot","prop-value");
EXT(YgooScollectionsSlistYlist,"goo/collections/list","list");
EXT(Yclass_parents,"runtime/boot","class-parents");
EXT(YgooScollectionsStableYDpermanent_hash_state,"goo/collections/table","$permanent-hash-state");
EXT(YgooSmagnitudeYG,"goo/magnitude",">");
EXT(YcompilerSastYprogram_register,"compiler/ast","program-register");
EXT(YruntimeSruntimeYDdefault_handler_info,"runtime/runtime","$default-handler-info");
EXT(YcompilerSastYLunwind_protectG,"compiler/ast","<unwind-protect>");
EXT(YcompilerSastYenvironment_uses_modules,"compiler/ast","environment-uses-modules");
DEF(YcompilerSast_evalYenv_names_setter,"compiler/ast-eval","env-names-setter");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YcompilerSastYmodule_name_to_relpath,"compiler/ast","module-name-to-relpath");
EXT(YgooScollectionsSmapYfab_map,"goo/collections/map","fab-map");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooScollectionsScollectionYkey_test,"goo/collections/collection","key-test");
EXT(YruntimeSruntimeYdefault_handler,"runtime/runtime","default-handler");
EXT(YcompilerSastYbinding_value_setter,"compiler/ast","binding-value-setter");
EXT(YcompilerSastYLfix_letG,"compiler/ast","<fix-let>");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YcompilerSastYenvironment_module,"compiler/ast","environment-module");
EXT(YcompilerSastYfunction_self_recursiveQ_setter,"compiler/ast","function-self-recursive?-setter");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YLseqG,"runtime/boot","<seq>");
EXT(Yprop_type,"runtime/boot","prop-type");
EXT(YLanyG,"runtime/boot","<any>");
EXT(YcompilerSastYload_module,"compiler/ast","load-module");
EXT(YruntimeSruntimeYTgensym_counterT,"runtime/runtime","*gensym-counter*");
EXT(YcompilerSastYfunction_self_recursiveQ,"compiler/ast","function-self-recursive?");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YcompilerSastYfix_let_arguments_setter,"compiler/ast","fix-let-arguments-setter");
EXT(YTrestarts_okQT,"runtime/boot","*restarts-ok?*");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YruntimeSruntimeYloc_val_setter,"runtime/runtime","loc-val-setter");
EXT(YcompilerSastYobjectify_signature,"compiler/ast","objectify-signature");
EXT(YcompilerSastYLcomputed_programG,"compiler/ast","<computed-program>");
EXT(Yclass_props,"runtime/boot","class-props");
EXT(YcompilerSastYalternative_condition,"compiler/ast","alternative-condition");
EXT(YDmax_int,"runtime/boot","$max-int");
EXT(YcompilerSastYdo_module_loader_modules,"compiler/ast","do-module-loader-modules");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSmagnitudeYL,"goo/magnitude","<");
EXT(YcompilerSastYbinding_locative,"compiler/ast","binding-locative");
EXT(YcompilerSastYprogram_type_setter,"compiler/ast","program-type-setter");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YPprop_unbound_error,"runtime/boot","%prop-unbound-error");
EXT(YgooScollectionsSassocYLassocsG,"goo/collections/assoc","<assocs>");
EXT(YruntimeSruntimeYdefault_handler_description,"runtime/runtime","default-handler-description");
EXT(Yvec,"runtime/boot","vec");
EXT(YruntimeSruntimeYdescribe_condition,"runtime/runtime","describe-condition");
EXT(YTboot_macro_module_namesT,"runtime/boot","*boot-macro-module-names*");
EXT(YcompilerSastYLreal_referenceG,"compiler/ast","<real-reference>");
EXT(YgooScollectionsSsequenceYdel_dups,"goo/collections/sequence","del-dups");
EXT(YLsigG,"runtime/boot","<sig>");
EXT(YgooScollectionsSbufferYLbufG,"goo/collections/buffer","<buf>");
EXT(YcompilerSastYbinding_inferred_type,"compiler/ast","binding-inferred-type");
EXT(YcompilerSastYas_lst,"compiler/ast","as-lst");
EXT(YgooScollectionsScollectionYkey_type,"goo/collections/collection","key-type");
EXT(Yfun_names,"runtime/boot","fun-names");
EXT(YcompilerSastYdo_static_global_bindings,"compiler/ast","do-static-global-bindings");
EXT(YcompilerSastYbinding_module_name,"compiler/ast","binding-module-name");
EXT(Yfind_setter,"runtime/boot","find-setter");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooScollectionsScollectionYfind_or,"goo/collections/collection","find-or");
EXT(YgooScollectionsSsequenceYsub_setter,"goo/collections/sequence","sub-setter");
EXT(YcompilerSastYbinding_name,"compiler/ast","binding-name");
EXT(YcompilerSastYDgoo_boot_module_name,"compiler/ast","$goo-boot-module-name");
EXT(YcompilerSastYfix_let_body,"compiler/ast","fix-let-body");
EXT(YruntimeSruntimeYLhandlerG,"runtime/runtime","<handler>");
EXT(YgooSmathYE,"goo/math","=");
EXT(YcompilerSastYfix_let_arguments,"compiler/ast","fix-let-arguments");
EXT(YOall2Q,"runtime/boot","@all2?");
EXT(YruntimeSruntimeYcondition_message,"runtime/runtime","condition-message");
EXT(YcompilerSastYbinding_value,"compiler/ast","binding-value");
EXT(YcompilerSastYLmodule_loaderG,"compiler/ast","<module-loader>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YcompilerSastYlocals_functions_setter,"compiler/ast","locals-functions-setter");
EXT(YcompilerSastYLlocal_referenceG,"compiler/ast","<local-reference>");
EXT(Ynil,"runtime/boot","nil");
EXT(YcompilerSastYLast_functionG,"compiler/ast","<ast-function>");
EXT(YcompilerSastYast_evaluate,"compiler/ast","ast-evaluate");
EXT(YcompilerSastYLglobal_boxG,"compiler/ast","<global-box>");
EXT(YLcolG,"runtime/boot","<col>");
EXT(YcompilerSastYfunction_temporaries_setter,"compiler/ast","function-temporaries-setter");
EXT(Ysig_names,"runtime/boot","sig-names");
EXT(YLclassG,"runtime/boot","<class>");
EXT(YcompilerSastYfunction_signature,"compiler/ast","function-signature");
EXT(YcompilerSastYlocals_functions,"compiler/ast","locals-functions");
EXT(YcompilerSastYglobal_box_value_setter,"compiler/ast","global-box-value-setter");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(Yfab_gen,"runtime/boot","fab-gen");
EXT(YcompilerSastYalternative_alternant,"compiler/ast","alternative-alternant");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YcompilerSastYprobe_module,"compiler/ast","probe-module");
EXT(YcompilerSastYsignature_specs_setter,"compiler/ast","signature-specs-setter");
EXT(YgooScollectionsScollectionYelt_default,"goo/collections/collection","elt-default");
EXT(YcompilerSastYmodule_target_environment,"compiler/ast","module-target-environment");
EXT(YcompilerSastYbinding_info,"compiler/ast","binding-info");
EXT(YcompilerSastYLfab_listG,"compiler/ast","<fab-list>");
EXT(YgooScollectionsStableYcase_insensitive_string_hash,"goo/collections/table","case-insensitive-string-hash");
EXT(YcompilerSastYLbindingG,"compiler/ast","<binding>");
EXT(YcompilerSastYbinding_global_box_setter,"compiler/ast","binding-global-box-setter");
EXT(YcompilerSastYLreferenceG,"compiler/ast","<reference>");
DEF(YcompilerSast_evalYas_fun_name,"compiler/ast-eval","as-fun-name");
EXT(YcompilerSastYsignature_names_setter,"compiler/ast","signature-names-setter");
EXT(YruntimeSruntimeYalways,"runtime/runtime","always");
EXT(YcompilerSastYreport_undefined_global_bindings,"compiler/ast","report-undefined-global-bindings");
EXT(YruntimeSruntimeYhandler_function,"runtime/runtime","handler-function");
EXT(YcompilerSastYLglobal_assignmentG,"compiler/ast","<global-assignment>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScollectionsSbufferYlenSfill_setter,"goo/collections/buffer","len/fill-setter");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YcompilerSastYmodule_loader_module_type,"compiler/ast","module-loader-module-type");
EXT(YcompilerSastYLdefinitionG,"compiler/ast","<definition>");
EXT(YcompilerSastYmonitor_handler,"compiler/ast","monitor-handler");
EXT(YgooScollectionsSsequenceYdel_vals,"goo/collections/sequence","del-vals");
DEF(YcompilerSast_evalYenv_binding_value,"compiler/ast-eval","env-binding-value");
EXT(YcompilerSastYapplication_knownQ_setter,"compiler/ast","application-known?-setter");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YcompilerSastYbinding_info_setter,"compiler/ast","binding-info-setter");
EXT(Ytail_setter,"runtime/boot","tail-setter");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YcompilerSastYfunction_naryQ,"compiler/ast","function-nary?");
EXT(Ysig_arity,"runtime/boot","sig-arity");
EXT(YgooScollectionsScollectionYkeys,"goo/collections/collection","keys");
EXT(YgooScollectionsScollectionYfoldA,"goo/collections/collection","fold+");
EXT(YcompilerSastYsignature_arity,"compiler/ast","signature-arity");
EXT(YcompilerSastYfunction_temporaries,"compiler/ast","function-temporaries");
EXT(YruntimeSruntimeYcurry,"runtime/runtime","curry");
EXT(YcompilerSastYfunction_debug_name,"compiler/ast","function-debug-name");
EXT(YgooScollectionsStableYcase_insensitive_string_equal,"goo/collections/table","case-insensitive-string-equal");
EXT(YgooScollectionsScollectionYdo2,"goo/collections/collection","do2");
EXT(YLmagG,"runtime/boot","<mag>");
EXT(YgooScollectionsSstringYstr,"goo/collections/string","str");
EXT(YcompilerSastYruntime_environment,"compiler/ast","runtime-environment");
EXT(YcompilerSastYprogram_type,"compiler/ast","program-type");
EXT(YgooScollectionsScollectionYlow_elt_setter,"goo/collections/collection","low-elt-setter");
EXT(YLoptsG,"runtime/boot","<opts>");
EXT(Yfind_getter,"runtime/boot","find-getter");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Ytail,"runtime/boot","tail");
EXT(YgooScollectionsScollectionYelt_type,"goo/collections/collection","elt-type");
EXT(YcompilerSastYLraw_constantG,"compiler/ast","<raw-constant>");
EXT(YcompilerSastYfunction_free,"compiler/ast","function-free");
EXT(Ywrong_number_arguments_error,"runtime/boot","wrong-number-arguments-error");
EXT(YgooScollectionsSsequenceYbelow,"goo/collections/sequence","below");
EXT(YgooScollectionsScollectionYLenumG,"goo/collections/collection","<enum>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YLtypeG,"runtime/boot","<type>");
EXT(Yord_app_mets,"runtime/boot","ord-app-mets");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YcompilerSastYinit_ast,"compiler/ast","init-ast");
EXT(YruntimeSruntimeYloc_val,"runtime/runtime","loc-val");
EXT(YLlocG,"runtime/boot","<loc>");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScollectionsSbufferYpop_lastX,"goo/collections/buffer","pop-last!");
EXT(YcompilerSastYapplication_tailQ,"compiler/ast","application-tail?");
EXT(YgooScollectionsScollectionYfab,"goo/collections/collection","fab");
EXT(YcompilerSastYbinding_dottedQ,"compiler/ast","binding-dotted?");
EXT(Ytype_elts,"runtime/boot","type-elts");
EXT(YcompilerSastYmodule_binding,"compiler/ast","module-binding");
EXT(YTreport_prop_unbound_errorsQT,"runtime/boot","*report-prop-unbound-errors?*");
EXT(YgooScollectionsSrangeYfrom,"goo/collections/range","from");
EXT(YcompilerSastYLast_methodG,"compiler/ast","<ast-method>");
EXT(YgooScollectionsSassocYassocs_test,"goo/collections/assoc","assocs-test");
EXT(YcompilerSastYreference_frame_offset,"compiler/ast","reference-frame-offset");
EXT(YgooSmathYround,"goo/math","round");
EXT(YcompilerSastYreference_called_functionQ,"compiler/ast","reference-called-function?");
EXT(YcompilerSastYLmodule_binding_referenceG,"compiler/ast","<module-binding-reference>");
EXT(YcompilerSastYmonitor_type,"compiler/ast","monitor-type");
EXT(YgooScollectionsSsequenceYreject,"goo/collections/sequence","reject");
EXT(YcompilerSastYLassignmentG,"compiler/ast","<assignment>");
EXT(Yclass_name,"runtime/boot","class-name");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_43);
DEFLIT(lit_32);
DEFLIT(lit_75);
DEFLIT(lit_18);
DEFLIT(lit_0);
DEFLIT(lit_6);
DEFLIT(lit_39);
DEFLIT(lit_34);
DEFLIT(lit_31);
DEFLIT(lit_24);
DEFLIT(lit_4);
DEFLIT(lit_33);
DEFLIT(lit_28);
DEFLIT(lit_53);
DEFLIT(lit_68);
DEFLIT(lit_76);
DEFLIT(lit_70);
DEFLIT(lit_20);
DEFLIT(lit_62);
DEFLIT(lit_50);
DEFLIT(lit_73);
DEFLIT(lit_49);
DEFLIT(lit_71);
DEFLIT(lit_69);
DEFLIT(lit_7);
DEFLIT(lit_1);
DEFLIT(lit_40);
DEFLIT(lit_19);
DEFLIT(lit_21);
DEFLIT(lit_44);
DEFLIT(lit_29);
DEFLIT(lit_67);
DEFLIT(lit_48);
DEFLIT(lit_9);
DEFLIT(lit_46);
DEFLIT(lit_79);
DEFLIT(lit_59);
DEFLIT(lit_64);
DEFLIT(lit_66);
DEFLIT(lit_3);
DEFLIT(lit_12);
DEFLIT(lit_13);
DEFLIT(lit_42);
DEFLIT(lit_2);
DEFLIT(lit_5);
DEFLIT(lit_52);
DEFLIT(lit_58);
DEFLIT(lit_81);
DEFLIT(lit_14);
DEFLIT(lit_38);
DEFLIT(lit_16);
DEFLIT(lit_10);
DEFLIT(lit_54);
DEFLIT(lit_56);
DEFLIT(lit_41);
DEFLIT(lit_60);
DEFLIT(lit_57);
DEFLIT(lit_37);
DEFLIT(lit_15);
DEFLIT(lit_77);
DEFLIT(lit_17);
DEFLIT(lit_65);
DEFLIT(lit_61);
DEFLIT(lit_11);
DEFLIT(lit_55);
DEFLIT(lit_26);
DEFLIT(lit_74);
DEFLIT(lit_78);
DEFLIT(lit_72);
DEFLIT(lit_27);
DEFLIT(lit_45);
DEFLIT(lit_51);
DEFLIT(lit_30);
DEFLIT(lit_80);
DEFLIT(lit_25);
DEFLIT(lit_35);
DEFLIT(lit_22);
DEFLIT(lit_36);
DEFLIT(lit_8);
DEFLIT(lit_47);
DEFLIT(lit_63);
DEFLIT(lit_23);

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
  QRET(T0);
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
  QRET(T0);
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
  T0 = CALL2(1,VARREF(YruntimeSruntimeYloc_val_setter),v_,x_);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcompilerSast_evalYenv_parent));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcompilerSast_evalYenv_parent));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcompilerSast_evalYenv_function));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcompilerSast_evalYenv_function));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcompilerSast_evalYenv_names));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcompilerSast_evalYenv_names));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcompilerSast_evalYenv_values));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcompilerSast_evalYenv_values));
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
  P valuesF1869;
  P T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(env_, 0);
  ARG(function_, 1);
  ARG(names_, 2);
  ARG(args_, 3);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLvecG),args_);
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
  QRET(T0);
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
    T4 = CALL2(0,loopF1870,T5,YPint((P)0));
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
  QRET(T0);
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
  T2 = CALL2(0,loopF1871,T3,YPint((P)0));
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
  T0 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),e_,VARREF(YcompilerSast_evalYDnul_loc_env));
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
  T0 = CALL1(1,VARREF(YcompilerSastYconstant_value),e_);
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
  T0 = CALL1(1,VARREF(YcompilerSastYconstant_value),e_);
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
  T1 = CALL1(1,VARREF(YcompilerSastYcompile_time_program),e_);
  T0 = CALL1(1,VARREF(YcompilerSastYast_evaluate),T1);
UNLINK_STACK();
  QRET(T0);
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
    specF1872 = T4;
    if (specF1872 != YPfalse) {
      T7 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),specF1872,FREEREF(1));
      T6 = T7;
    } else {
      T6 = VARREF(YLanyG);
    }
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
  QRET(T0);
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
    T3 = CALL1(1,VARREF(YgooStypesYlen),specs_);
    T2 = CALL2(1,VARREF(YgooSmathY_),T3,YPint((P)1));
    T1 = T2;
  } else {
    T4 = CALL1(1,VARREF(YgooStypesYlen),specs_);
    T1 = T4;
  }
  nreqF1874 = T1;
  T6 = FUNSHELL(1,fun_loop_28,3);
  loopF1875 = T6;
  FUNINIT(loopF1875, 3,nreqF1874,env_,loopF1875);
  T7 = CALL3(0,loopF1875,Ynil,specs_,YPint((P)0));
  T5 = T7;
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
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
  T1 = CALL1(1,VARREF(YgooStypesYlen),args_);
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
  QRET(T0);
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
  x_1427F1878 = FREEREF(0);
  envF1879 = YPfalse;
  envF1879 = BOXFAB(envF1879);
  fF1880 = YPfalse;
  fF1880 = BOXFAB(fF1880);
  naryQF1881 = YPfalse;
  naryQF1881 = BOXFAB(naryQF1881);
  arityF1882 = YPfalse;
  arityF1882 = BOXFAB(arityF1882);
  namesF1883 = YPfalse;
  namesF1883 = BOXFAB(namesF1883);
  bodyF1884 = YPfalse;
  bodyF1884 = BOXFAB(bodyF1884);
  T15 = CALL2(1,VARREF(YisaQ),x_1427F1878,VARREF(YLlstG));
  if (T15 != YPfalse) {
    T17 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1427F1878,LITREF(lit_51),x_1428F1877);
    x_1427F1885 = T17;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1427F1885,x_1428F1877);
    BOXVAL(envF1879) = T19;
    T20 = CALL1(1,VARREF(Ytail),x_1427F1885);
    x_1427F1886 = T20;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1427F1886,x_1428F1877);
    BOXVAL(fF1880) = T22;
    T23 = CALL1(1,VARREF(Ytail),x_1427F1886);
    x_1427F1887 = T23;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1427F1887,x_1428F1877);
    BOXVAL(naryQF1881) = T25;
    T26 = CALL1(1,VARREF(Ytail),x_1427F1887);
    x_1427F1888 = T26;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1427F1888,x_1428F1877);
    BOXVAL(arityF1882) = T28;
    T29 = CALL1(1,VARREF(Ytail),x_1427F1888);
    x_1427F1889 = T29;
    T31 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1427F1889,x_1428F1877);
    BOXVAL(namesF1883) = T31;
    T32 = CALL1(1,VARREF(Ytail),x_1427F1889);
    x_1427F1890 = T32;
    T34 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1427F1890,x_1428F1877);
    BOXVAL(bodyF1884) = T34;
    T35 = CALL1(1,VARREF(Ytail),x_1427F1890);
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
  T1 = CALL1(1,VARREF(YcompilerSastYfunction_debug_name),x_);
  T0 = CALL1(1,VARREF(YcompilerSast_evalYas_fun_name),T1);
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
  T0 = CALL1(1,VARREF(YcompilerSastYbinding_name),x_);
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
  T1 = CALL1(1,VARREF(YcompilerSastYconstant_value),x_);
  T0 = CALL1(1,VARREF(YcompilerSast_evalYas_fun_name),T1);
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
  P frameF1894;
  P nmsF1893;
  P argsF1892;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  NARGS(arg_vector_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),arg_vector_);
  T1 = CALLN(1,VARREF(YcompilerSast_evalYarrange_arguments),4,FREEREF(0),FREEREF(1),FREEREF(2),T2);
  argsF1892 = T1;
  T4 = (P)YPnext_methods();
  nmsF1893 = T4;
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T7 = CALL2(1,VARREF(YgooScollectionsSsequenceYcat2),FREEREF(4),T8);
  T10 = CALL1(1,VARREF(Ylst),nmsF1893);
  T9 = CALL2(1,VARREF(YgooScollectionsSsequenceYcat2),argsF1892,T10);
  T6 = CALLN(1,VARREF(YcompilerSast_evalYenv_frameX),4,FREEREF(3),FREEREF(0),T7,T9);
  frameF1894 = T6;
  T11 = CALL1(1,FREEREF(5),frameF1894);
  T5 = T11;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
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
    T3 = CALL1(1,VARREF(YgooStypesYlen),specs_);
    T2 = CALL2(1,VARREF(YgooSmathY_),T3,YPint((P)1));
    T1 = T2;
  } else {
    T4 = CALL1(1,VARREF(YgooStypesYlen),specs_);
    T1 = T4;
  }
  arityF1895 = T1;
  T6 = FUNFAB(fun_40,6,f_,naryQ_,arityF1895,env_,names_,body_);
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
  QRET(T0);
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
  QRET(T0);
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
  paramsF1897 = T1;
  T3 = FUNFAB(fun_42,1,e_);
  evalF1898 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YcompilerSastYbinding_name),paramsF1897);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YcompilerSastYbinding_type),paramsF1897);
  T7 = CALL1(1,VARREF(YcompilerSastYfunction_naryQ),e_);
  T8 = CALL1(1,VARREF(YcompilerSastYfunction_value),e_);
  T4 = CALLN(1,VARREF(YcompilerSast_evalYexport_goo_method),7,e_,T5,T6,T7,T8,evalF1898,env_);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
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
  paramsF1899 = T1;
  T3 = CALL1(1,VARREF(YcompilerSastYfunction_naryQ),e_);
  naryQF1900 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YcompilerSastYbinding_name),paramsF1899);
  namesF1901 = T5;
  T8 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YcompilerSastYbinding_type),paramsF1899);
  T7 = CALL3(1,VARREF(YcompilerSast_evalYast_eval_specs),T8,naryQF1900,env_);
  specsF1902 = T7;
  T10 = CALL1(1,VARREF(YcompilerSast_evalYas_fun_name),e_);
  T9 = CALLN(1,VARREF(Yfab_gen),5,T10,namesF1901,specsF1902,naryQF1900,Ynil);
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
  T1 = CALL1(1,VARREF(YcompilerSastYreference_frame_number),ref_);
  T2 = CALL1(1,VARREF(YcompilerSastYreference_frame_offset),ref_);
  T0 = CALL3(1,VARREF(YcompilerSast_evalYenv_local_value),env_,T1,T2);
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
  T1 = CALL1(1,VARREF(YcompilerSastYreference_frame_number),ref_);
  T2 = CALL1(1,VARREF(YcompilerSastYreference_frame_offset),ref_);
  T0 = CALLN(1,VARREF(YcompilerSast_evalYenv_local_value_setter),4,val_,env_,T1,T2);
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
  T0 = CALL2(1,VARREF(YcompilerSast_evalYenv_local_reference_value),env_,e_);
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
  T1 = CALL1(1,VARREF(YcompilerSastYreference_binding),e_);
  T0 = CALL1(1,VARREF(YcompilerSast_evalYenv_global_binding_value),T1);
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
  T2 = CALL1(1,VARREF(YcompilerSastYreference_binding),e_);
  T1 = CALL1(1,VARREF(YcompilerSastYbinding_locative),T2);
  T0 = CALL1(1,VARREF(YcompilerSast_evalYenv_runtime_value),T1);
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
  T2 = CALL1(1,VARREF(YcompilerSastYboundQ_reference),e_);
  T1 = CALL1(1,VARREF(YcompilerSastYreference_binding),T2);
  T0 = CALL3(1,VARREF(YcompilerSast_evalYast_eval_boundQ),e_,T1,env_);
UNLINK_STACK();
  QRET(T0);
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
  x_1429F1903 = T1;
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
  P valueF1905;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YcompilerSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),T2,env_);
  valueF1905 = T1;
  T4 = CALL1(1,VARREF(YcompilerSastYassignment_binding),e_);
  T3 = CALL2(1,VARREF(YcompilerSast_evalYenv_global_binding_value_setter),valueF1905,T4);
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
  P valueF1906;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YcompilerSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),T2,env_);
  valueF1906 = T1;
  T5 = CALL1(1,VARREF(YcompilerSastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(YcompilerSastYbinding_locative),T5);
  T3 = CALL2(1,VARREF(YcompilerSast_evalYenv_runtime_value_setter),valueF1906,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
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
  valueF1907 = T1;
  T4 = CALL1(1,VARREF(YcompilerSastYassignment_reference),e_);
  T3 = CALL3(1,VARREF(YcompilerSast_evalYenv_local_reference_value_setter),valueF1907,env_,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
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
  x_1431F1908 = T1;
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
  QRET(T0);
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
  valueF1910 = T1;
  T3 = CALL1(1,VARREF(YcompilerSastYassignment_binding),e_);
  CALL2(1,VARREF(YcompilerSast_evalYenv_define_bindingX),T3,valueF1910);
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
  QRET(T0);
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
  nxtF1911 = T1;
  T4 = CALL1(1,VARREF(Yhead),e_);
  T3 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),T4,FREEREF(0));
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
  QRET(T0);
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
  T2 = CALL1(0,evalF1913,e_);
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
  QRET(T0);
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
  T2 = CALL2(0,evalF1914,Ynil,e_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
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
  fF1915 = T1;
  T5 = CALL1(1,VARREF(YcompilerSastYapplication_arguments),e_);
  T4 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),T5,env_);
  argsF1916 = T4;
  T6 = CALL3(1,VARREF(YgooSmacrosYnapp),fF1915,YPfalse,argsF1916);
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
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
  bF1917 = T1;
  T4 = CALL1(1,VARREF(YcompilerSastYbinding_name),bF1917);
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_60));
  if (T3 != YPfalse) {
    T6 = CALL2(1,VARREF(YcompilerSast_evalYenv_binding_value),env_,LITREF(lit_60));
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
    fF1919 = T10;
    T13 = CALL1(1,VARREF(YcompilerSastYapplication_arguments),e_);
    T12 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),T13,env_);
    argsF1920 = T12;
    T14 = CALL3(1,VARREF(YgooSmacrosYnapp),fF1919,YPfalse,argsF1920);
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
  argsF1921 = T1;
  T6 = CALL1(1,VARREF(YcompilerSastYfix_let_bindings),e_);
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YcompilerSastYbinding_name),T6);
  T4 = CALLN(1,VARREF(YcompilerSast_evalYenv_frameX),4,env_,YPfalse,T5,argsF1921);
  nenvF1922 = T4;
  T8 = CALL1(1,VARREF(YcompilerSastYfix_let_body),e_);
  T7 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),T8,nenvF1922);
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
  T0 = CALL3(1,VARREF(YcompilerSast_evalYenv_binding_value_setter),value_,FREEREF(0),name_);
UNLINK_STACK();
  QRET(T0);
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
  bindingsF1923 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YcompilerSastYbinding_name),bindingsF1923);
  T6 = CALL1(1,VARREF(YruntimeSruntimeYalways),VARREF(Ynul));
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),T6,bindingsF1923);
  T3 = CALLN(1,VARREF(YcompilerSast_evalYenv_frameX),4,env_,YPfalse,T4,T5);
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
  QRET(T0);
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
  QRET(T0);
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
  rprocF1925 = T1;
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T5 = CALL1(1,VARREF(Ylst),YPfalse);
  T3 = CALLN(1,VARREF(YcompilerSast_evalYexport_goo_method),7,rprocF1925,T4,T5,YPfalse,YPfalse,rprocF1925,FREEREF(0));
  exitF1926 = T3;
  T8 = CALL1(1,VARREF(YcompilerSastYbind_exit_main_fun),FREEREF(1));
  T7 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),T8,FREEREF(0));
  T6 = CALL1(1,T7,exitF1926);
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
  T2 = CALL1(1,VARREF(YcompilerSastYunwind_protect_protected_thunk),FREEREF(0));
  T1 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),T2,FREEREF(1));
  T0 = CALL0(1,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_73) {
  P T2,T1,T0;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(YcompilerSastYunwind_protect_cleanup_thunk),FREEREF(0));
  T1 = CALL2(1,VARREF(YcompilerSast_evalYast_eval),T2,FREEREF(1));
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
  QRET(T0);
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
  bF1927 = T1;
  T2 = CALL2(1,VARREF(YcompilerSast_evalYenv_global_binding_value_setter),VARREF(YgooSmacrosYpair),bF1927);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YcompilerSast_evalYPdefine_binding(P raw_mod_,P raw_nam_) {
  P eF1928;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T2 = (P)YPPsym(raw_mod_);
  T1 = CALL1(1,VARREF(YcompilerSastYunchecked_runtime_environment),T2);
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
  bF1932 = T1;
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
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScollectionsStable;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScollectionsScollection;
extern MODULE_INFO module_info_gooScollectionsSsequence;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScollectionsSlist;
extern MODULE_INFO module_info_gooScollectionsSbuffer;
extern MODULE_INFO module_info_gooScollectionsSmap;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScollectionsSstring;
extern MODULE_INFO module_info_gooScollectionsSrange;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSmagnitude;
extern MODULE_INFO module_info_gooScollectionsSstep;
extern MODULE_INFO module_info_compilerSsyntax;
extern MODULE_INFO module_info_gooScollectionsSassoc;

static USE_INFO use_infos[] = {
  {&module_info_runtimeSboot},
  {&module_info_gooSmacros},
  {&module_info_runtimeSruntime},
  {&module_info_goo},
  {&module_info_compilerSast},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"<program>", &module_info_compilerSast, "<program>"},
  {"loc", &module_info_runtimeSboot, "loc"},
  {"application-known?", &module_info_compilerSast, "application-known?"},
  {"<arguments>", &module_info_compilerSast, "<arguments>"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"<predefined-application>", &module_info_compilerSast, "<predefined-application>"},
  {"may-isa?", &module_info_runtimeSboot, "may-isa?"},
  {"%open-out-file", &module_info_runtimeSboot, "%open-out-file"},
  {"global-box-value", &module_info_compilerSast, "global-box-value"},
  {"tab-growth-threshold", &module_info_gooScollectionsStable, "tab-growth-threshold"},
  {"unwind-protect-protected-thunk", &module_info_compilerSast, "unwind-protect-protected-thunk"},
  {"fix-let-types-setter", &module_info_compilerSast, "fix-let-types-setter"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"floor", &module_info_gooSmath, "floor"},
  {"tab-growth-factor", &module_info_gooScollectionsStable, "tab-growth-factor"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"$min-int", &module_info_runtimeSboot, "$min-int"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"gen-add-met", &module_info_runtimeSboot, "gen-add-met"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"%vec", &module_info_runtimeSboot, "%vec"},
  {"%raw-call", &module_info_runtimeSboot, "%raw-call"},
  {"prop-setter", &module_info_runtimeSboot, "prop-setter"},
  {"unwind-protect-cleanup-thunk", &module_info_compilerSast, "unwind-protect-cleanup-thunk"},
  {"fun-val", &module_info_runtimeSboot, "fun-val"},
  {"low-elt", &module_info_gooScollectionsScollection, "low-elt"},
  {"map-keyed", &module_info_gooScollectionsScollection, "map-keyed"},
  {"def", &module_info_runtimeSboot, "def"},
  {"sub", &module_info_gooScollectionsSsequence, "sub"},
  {"<str-tab>", &module_info_gooScollectionsStable, "<str-tab>"},
  {"function-binding", &module_info_compilerSast, "function-binding"},
  {"build-condition-for-handler-interactively", &module_info_runtimeSruntime, "build-condition-for-handler-interactively"},
  {"items", &module_info_gooScollectionsScollection, "items"},
  {"len", &module_info_gooStypes, "len"},
  {"%fasin", &module_info_runtimeSboot, "%fasin"},
  {"%cb", &module_info_runtimeSboot, "%cb"},
  {"reference-binding", &module_info_compilerSast, "reference-binding"},
  {"%met-code", &module_info_runtimeSboot, "%met-code"},
  {"load-in", &module_info_compilerSast, "load-in"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"t<", &module_info_gooStypes, "t<"},
  {"isa", &module_info_runtimeSboot, "isa"},
  {"signature-value-setter", &module_info_compilerSast, "signature-value-setter"},
  {"class-ancestors", &module_info_runtimeSboot, "class-ancestors"},
  {"constant-index-setter", &module_info_compilerSast, "constant-index-setter"},
  {"<ast-signature>", &module_info_compilerSast, "<ast-signature>"},
  {"fix-let-types", &module_info_compilerSast, "fix-let-types"},
  {"compile-time-program", &module_info_compilerSast, "compile-time-program"},
  {"<list>", &module_info_gooScollectionsSlist, "<list>"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"condition-arguments", &module_info_runtimeSruntime, "condition-arguments"},
  {"signature-nary?-setter", &module_info_compilerSast, "signature-nary?-setter"},
  {"<serious-condition>", &module_info_runtimeSruntime, "<serious-condition>"},
  {"binding-mutable?", &module_info_compilerSast, "binding-mutable?"},
  {"%snul", &module_info_runtimeSboot, "%snul"},
  {"binding-type", &module_info_compilerSast, "binding-type"},
  {"unchecked-runtime-environment", &module_info_compilerSast, "unchecked-runtime-environment"},
  {"%velt-setter", &module_info_runtimeSboot, "%velt-setter"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"<flo>", &module_info_runtimeSboot, "<flo>"},
  {"<sym>", &module_info_runtimeSboot, "<sym>"},
  {"for", &module_info_gooSmacros, "for"},
  {"%gen-src", &module_info_runtimeSboot, "%gen-src"},
  {"<ast-primitive-definition>", &module_info_compilerSast, "<ast-primitive-definition>"},
  {"met-app?", &module_info_runtimeSboot, "met-app?"},
  {"add!", &module_info_gooScollectionsScollection, "add!"},
  {"format-to-string", &module_info_runtimeSruntime, "format-to-string"},
  {"new", &module_info_runtimeSboot, "new"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"locals-bindings", &module_info_compilerSast, "locals-bindings"},
  {"object-parents", &module_info_runtimeSboot, "object-parents"},
  {"fold", &module_info_gooScollectionsScollection, "fold"},
  {"tab-gc-state", &module_info_gooScollectionsStable, "tab-gc-state"},
  {"fix-let-body-setter", &module_info_compilerSast, "fix-let-body-setter"},
  {"assignment-form-setter", &module_info_compilerSast, "assignment-form-setter"},
  {"objectify-quotation", &module_info_compilerSast, "objectify-quotation"},
  {"@isa?", &module_info_runtimeSboot, "@isa?"},
  {"fun-mets", &module_info_runtimeSboot, "fun-mets"},
  {"application-arguments", &module_info_compilerSast, "application-arguments"},
  {"%gen-code", &module_info_runtimeSboot, "%gen-code"},
  {"install-initial-bindings", &module_info_compilerSast, "install-initial-bindings"},
  {"%pair", &module_info_runtimeSboot, "%pair"},
  {"fix-let-bindings-setter", &module_info_compilerSast, "fix-let-bindings-setter"},
  {"gen-src-setter", &module_info_runtimeSboot, "gen-src-setter"},
  {"==", &module_info_gooSmacros, "=="},
  {"<simple-error>", &module_info_runtimeSruntime, "<simple-error>"},
  {"do", &module_info_gooSmacros, "do"},
  {"<free-environment>", &module_info_compilerSast, "<free-environment>"},
  {"module-exports", &module_info_compilerSast, "module-exports"},
  {"id-hash", &module_info_gooScollectionsStable, "id-hash"},
  {"add-prop", &module_info_runtimeSboot, "add-prop"},
  {"function-index-setter", &module_info_compilerSast, "function-index-setter"},
  {"<locals>", &module_info_compilerSast, "<locals>"},
  {"%i^", &module_info_runtimeSboot, "%i^"},
  {"read", &module_info_runtimeSruntime, "read"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"elt-setter", &module_info_gooScollectionsScollection, "elt-setter"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"do-keyed", &module_info_gooScollectionsScollection, "do-keyed"},
  {"%c<", &module_info_runtimeSboot, "%c<"},
  {"put", &module_info_gooSioSport, "put"},
  {"t=", &module_info_gooStypes, "t="},
  {"pick", &module_info_gooScollectionsSsequence, "pick"},
  {"-", &module_info_gooSmath, "-"},
  {"%su", &module_info_runtimeSboot, "%su"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"<prop>", &module_info_runtimeSboot, "<prop>"},
  {"<constant>", &module_info_compilerSast, "<constant>"},
  {"function-index", &module_info_compilerSast, "function-index"},
  {"%binding-name", &module_info_runtimeSboot, "%binding-name"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%file-type", &module_info_runtimeSboot, "%file-type"},
  {"push-last!", &module_info_gooScollectionsSbuffer, "push-last!"},
  {"elts", &module_info_gooScollectionsScollection, "elts"},
  {"<monitor>", &module_info_compilerSast, "<monitor>"},
  {"%current-out-port", &module_info_runtimeSboot, "%current-out-port"},
  {"/", &module_info_gooSmath, "/"},
  {"cat2", &module_info_gooScollectionsSsequence, "cat2"},
  {"function-body-setter", &module_info_compilerSast, "function-body-setter"},
  {"<gen>", &module_info_runtimeSboot, "<gen>"},
  {"function-signature-setter", &module_info_compilerSast, "function-signature-setter"},
  {"%f=", &module_info_runtimeSboot, "%f="},
  {"assignment-reference", &module_info_compilerSast, "assignment-reference"},
  {"gen-src", &module_info_runtimeSboot, "gen-src"},
  {"%iv", &module_info_runtimeSboot, "%iv"},
  {"object-props", &module_info_runtimeSboot, "object-props"},
  {"isa?", &module_info_runtimeSboot, "isa?"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"<ast-generic>", &module_info_compilerSast, "<ast-generic>"},
  {"constant-index", &module_info_compilerSast, "constant-index"},
  {"%symbols", &module_info_runtimeSboot, "%symbols"},
  {"<map>", &module_info_gooScollectionsSmap, "<map>"},
  {"pop", &module_info_gooScollectionsSlist, "pop"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"case", &module_info_gooSmacros, "case"},
  {"tab-hash", &module_info_gooScollectionsStable, "tab-hash"},
  {"macro-expand", &module_info_runtimeSboot, "macro-expand"},
  {"function-body", &module_info_compilerSast, "function-body"},
  {"mem?", &module_info_gooScollectionsScollection, "mem?"},
  {"reference-called-function?-setter", &module_info_compilerSast, "reference-called-function?-setter"},
  {"%fun-reg", &module_info_runtimeSboot, "%fun-reg"},
  {"describe-handler", &module_info_runtimeSruntime, "describe-handler"},
  {"dv", &module_info_runtimeSboot, "dv"},
  {"<runtime-assignment>", &module_info_compilerSast, "<runtime-assignment>"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"%slen", &module_info_runtimeSboot, "%slen"},
  {"rcurry", &module_info_runtimeSruntime, "rcurry"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"<regular-application>", &module_info_compilerSast, "<regular-application>"},
  {"num-to-str-base", &module_info_gooScollectionsSstring, "num-to-str-base"},
  {"set", &module_info_runtimeSboot, "set"},
  {"abs", &module_info_gooSmath, "abs"},
  {"fab-g2c-module", &module_info_compilerSast, "fab-g2c-module"},
  {"sig-nary?", &module_info_runtimeSboot, "sig-nary?"},
  {"%with-monitor", &module_info_runtimeSboot, "%with-monitor"},
  {"%sp-reg-setter", &module_info_runtimeSboot, "%sp-reg-setter"},
  {"<int>", &module_info_runtimeSboot, "<int>"},
  {"<range>", &module_info_gooScollectionsSrange, "<range>"},
  {"<str>", &module_info_runtimeSboot, "<str>"},
  {"all?", &module_info_gooScollectionsScollection, "all?"},
  {"map2", &module_info_gooScollectionsScollection, "map2"},
  {"fun-arity", &module_info_runtimeSboot, "fun-arity"},
  {"fun", &module_info_runtimeSboot, "fun"},
  {"signature-bindings-setter", &module_info_compilerSast, "signature-bindings-setter"},
  {"%iu", &module_info_runtimeSboot, "%iu"},
  {"%prop", &module_info_runtimeSboot, "%prop"},
  {"choose-handler", &module_info_runtimeSruntime, "choose-handler"},
  {"<error>", &module_info_runtimeSruntime, "<error>"},
  {"spread", &module_info_runtimeSruntime, "spread"},
  {"<bind-exit>", &module_info_compilerSast, "<bind-exit>"},
  {"%sb", &module_info_runtimeSboot, "%sb"},
  {"as", &module_info_gooStypes, "as"},
  {"bound?", &module_info_runtimeSboot, "bound?"},
  {"%str", &module_info_runtimeSboot, "%str"},
  {"fix-let-bindings", &module_info_compilerSast, "fix-let-bindings"},
  {"<programs>", &module_info_compilerSast, "<programs>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"%isa", &module_info_runtimeSboot, "%isa"},
  {"del", &module_info_gooScollectionsScollection, "del"},
  {"binding-dotted?-setter", &module_info_compilerSast, "binding-dotted?-setter"},
  {"reference-frame-number", &module_info_compilerSast, "reference-frame-number"},
  {"remove-modules-by-name!", &module_info_compilerSast, "remove-modules-by-name!"},
  {"find-binding", &module_info_compilerSast, "find-binding"},
  {"buf", &module_info_gooScollectionsSbuffer, "buf"},
  {"add", &module_info_gooScollectionsScollection, "add"},
  {"tup", &module_info_runtimeSboot, "tup"},
  {"any2?", &module_info_gooScollectionsScollection, "any2?"},
  {"*macros-ok?*", &module_info_runtimeSboot, "*macros-ok?*"},
  {"%invoke-debugger", &module_info_runtimeSboot, "%invoke-debugger"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"%puts", &module_info_runtimeSboot, "%puts"},
  {"identity", &module_info_runtimeSruntime, "identity"},
  {"handler-info-message", &module_info_runtimeSboot, "handler-info-message"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"open", &module_info_gooSioSport, "open"},
  {"<ast-primitive>", &module_info_compilerSast, "<ast-primitive>"},
  {"dp", &module_info_runtimeSboot, "dp"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"%f*", &module_info_runtimeSboot, "%f*"},
  {"cat!", &module_info_gooScollectionsSsequence, "cat!"},
  {"<replace-generic-restart>", &module_info_runtimeSboot, "<replace-generic-restart>"},
  {"sig-unification-vars", &module_info_runtimeSboot, "sig-unification-vars"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"monitor-test", &module_info_compilerSast, "monitor-test"},
  {"ds", &module_info_runtimeSboot, "ds"},
  {"head-setter", &module_info_runtimeSboot, "head-setter"},
  {"type-class", &module_info_runtimeSboot, "type-class"},
  {"unexec", &module_info_runtimeSboot, "unexec"},
  {"fun-sig-setter", &module_info_runtimeSboot, "fun-sig-setter"},
  {"use", &module_info_runtimeSboot, "use"},
  {"%vlen", &module_info_runtimeSboot, "%vlen"},
  {"incongruent-method-error", &module_info_runtimeSboot, "incongruent-method-error"},
  {"@<", &module_info_runtimeSboot, "@<"},
  {"<union>", &module_info_runtimeSboot, "<union>"},
  {"tab-shrink-threshold", &module_info_gooScollectionsStable, "tab-shrink-threshold"},
  {"%i<<", &module_info_runtimeSboot, "%i<<"},
  {"<tup>", &module_info_runtimeSboot, "<tup>"},
  {"now-setter", &module_info_gooScollectionsScollection, "now-setter"},
  {"%close-out-port", &module_info_runtimeSboot, "%close-out-port"},
  {"objectify-with-subtransaction", &module_info_compilerSast, "objectify-with-subtransaction"},
  {"function-registers-setter", &module_info_compilerSast, "function-registers-setter"},
  {"nxt", &module_info_gooScollectionsScollection, "nxt"},
  {"module-syntax-environment", &module_info_compilerSast, "module-syntax-environment"},
  {"application-binding", &module_info_compilerSast, "application-binding"},
  {"signature-value", &module_info_compilerSast, "signature-value"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"~=", &module_info_gooSmath, "~="},
  {"%i*", &module_info_runtimeSboot, "%i*"},
  {"$goo-runtime-module-name", &module_info_compilerSast, "$goo-runtime-module-name"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"format", &module_info_runtimeSruntime, "format"},
  {"*print-base*", &module_info_gooScollectionsSstring, "*print-base*"},
  {"ct-also", &module_info_runtimeSboot, "ct-also"},
  {"%f/", &module_info_runtimeSboot, "%f/"},
  {"environment-bindings", &module_info_compilerSast, "environment-bindings"},
  {"assignment-binding", &module_info_compilerSast, "assignment-binding"},
  {"head", &module_info_runtimeSboot, "head"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"%fatan", &module_info_runtimeSboot, "%fatan"},
  {"elt-or", &module_info_gooScollectionsScollection, "elt-or"},
  {"bind-exit-main-fun", &module_info_compilerSast, "bind-exit-main-fun"},
  {"<application>", &module_info_compilerSast, "<application>"},
  {"keyboard-interrupt", &module_info_runtimeSboot, "keyboard-interrupt"},
  {"%eq?", &module_info_runtimeSboot, "%eq?"},
  {"when", &module_info_gooSmacros, "when"},
  {"<num>", &module_info_runtimeSboot, "<num>"},
  {"%app-args", &module_info_runtimeSboot, "%app-args"},
  {"<vec>", &module_info_runtimeSboot, "<vec>"},
  {"max", &module_info_gooSmagnitude, "max"},
  {"prop-getter", &module_info_runtimeSboot, "prop-getter"},
  {"<local-binding>", &module_info_compilerSast, "<local-binding>"},
  {"in", &module_info_gooSioSport, "in"},
  {"binding-index", &module_info_compilerSast, "binding-index"},
  {"%ftanh", &module_info_runtimeSboot, "%ftanh"},
  {"fab-handler", &module_info_runtimeSruntime, "fab-handler"},
  {"*boot-macro-names*", &module_info_runtimeSboot, "*boot-macro-names*"},
  {"<local-assignment>", &module_info_compilerSast, "<local-assignment>"},
  {"%sp-reg", &module_info_runtimeSboot, "%sp-reg"},
  {"monitor-info", &module_info_compilerSast, "monitor-info"},
  {"into", &module_info_gooScollectionsScollection, "into"},
  {"env-object-name", &module_info_compilerSast, "env-object-name"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"empty", &module_info_gooScollectionsScollection, "empty"},
  {"<alternative>", &module_info_compilerSast, "<alternative>"},
  {"binding-kind", &module_info_compilerSast, "binding-kind"},
  {"app-args", &module_info_runtimeSruntime, "app-args"},
  {"%selt-setter", &module_info_runtimeSboot, "%selt-setter"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"def-list", &module_info_compilerSast, "def-list"},
  {"now-key", &module_info_gooScollectionsScollection, "now-key"},
  {"class-direct-props", &module_info_runtimeSboot, "class-direct-props"},
  {"%untag", &module_info_runtimeSboot, "%untag"},
  {"function-debug-name-setter", &module_info_compilerSast, "function-debug-name-setter"},
  {"display", &module_info_gooSioSwrite, "display"},
  {"mif", &module_info_runtimeSboot, "mif"},
  {"<ast-macro-definition>", &module_info_compilerSast, "<ast-macro-definition>"},
  {"<sequential>", &module_info_compilerSast, "<sequential>"},
  {"export", &module_info_runtimeSboot, "export"},
  {"tab-test", &module_info_gooScollectionsStable, "tab-test"},
  {"free-environment", &module_info_compilerSast, "free-environment"},
  {"<met>", &module_info_runtimeSboot, "<met>"},
  {"<condition>", &module_info_runtimeSruntime, "<condition>"},
  {"<module>", &module_info_compilerSast, "<module>"},
  {"zap", &module_info_gooScollectionsScollection, "zap"},
  {"%fsinh", &module_info_runtimeSboot, "%fsinh"},
  {"len-setter", &module_info_gooScollectionsSbuffer, "len-setter"},
  {"%build-runtime-modules", &module_info_runtimeSboot, "%build-runtime-modules"},
  {"t+", &module_info_gooStypes, "t+"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"min", &module_info_gooSmagnitude, "min"},
  {"prop-init", &module_info_runtimeSboot, "prop-init"},
  {"%os-val-setter", &module_info_runtimeSboot, "%os-val-setter"},
  {"fun-nary?", &module_info_runtimeSboot, "fun-nary?"},
  {"%os-name", &module_info_runtimeSboot, "%os-name"},
  {"%fsin", &module_info_runtimeSboot, "%fsin"},
  {"do-named-static-global-bindings", &module_info_compilerSast, "do-named-static-global-bindings"},
  {"%lu", &module_info_runtimeSboot, "%lu"},
  {"@==", &module_info_runtimeSboot, "@=="},
  {"app", &module_info_gooSmacros, "app"},
  {"invoke-handler-interactively", &module_info_runtimeSruntime, "invoke-handler-interactively"},
  {"out", &module_info_gooSioSport, "out"},
  {"%fu", &module_info_runtimeSboot, "%fu"},
  {"last", &module_info_gooScollectionsSsequence, "last"},
  {"<subclass>", &module_info_runtimeSboot, "<subclass>"},
  {"now", &module_info_gooScollectionsScollection, "now"},
  {"<static-global-environment>", &module_info_compilerSast, "<static-global-environment>"},
  {"|", &module_info_gooSmath, "|"},
  {"%i!", &module_info_runtimeSboot, "%i!"},
  {"function-free-setter", &module_info_compilerSast, "function-free-setter"},
  {"program-register-setter", &module_info_compilerSast, "program-register-setter"},
  {"while", &module_info_gooSmacros, "while"},
  {"class-descendents", &module_info_runtimeSboot, "class-descendents"},
  {"<restart>", &module_info_runtimeSruntime, "<restart>"},
  {"t*", &module_info_gooStypes, "t*"},
  {"%put", &module_info_runtimeSboot, "%put"},
  {"%i-", &module_info_runtimeSboot, "%i-"},
  {"even?", &module_info_gooSmath, "even?"},
  {"gen-refs-setter", &module_info_runtimeSboot, "gen-refs-setter"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"push", &module_info_gooScollectionsSlist, "push"},
  {"function-registers", &module_info_compilerSast, "function-registers"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"fin", &module_info_runtimeSboot, "fin"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"dc", &module_info_runtimeSboot, "dc"},
  {"%bb", &module_info_runtimeSboot, "%bb"},
  {"%i<", &module_info_runtimeSboot, "%i<"},
  {"%flog", &module_info_runtimeSboot, "%flog"},
  {"binding-type-setter", &module_info_compilerSast, "binding-type-setter"},
  {"prop-value-setter", &module_info_runtimeSboot, "prop-value-setter"},
  {"1-", &module_info_gooSmath, "1-"},
  {"fin?", &module_info_gooScollectionsScollection, "fin?"},
  {"<chr>", &module_info_runtimeSboot, "<chr>"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"<flat>", &module_info_runtimeSboot, "<flat>"},
  {"quasiquote", &module_info_runtimeSboot, "quasiquote"},
  {"%app-filename", &module_info_runtimeSboot, "%app-filename"},
  {"handler-info-arguments", &module_info_runtimeSboot, "handler-info-arguments"},
  {"%current-in-port", &module_info_runtimeSboot, "%current-in-port"},
  {"type-error", &module_info_runtimeSboot, "type-error"},
  {"*", &module_info_gooSmath, "*"},
  {"%fb", &module_info_runtimeSboot, "%fb"},
  {"module-name", &module_info_compilerSast, "module-name"},
  {"subtype?", &module_info_runtimeSboot, "subtype?"},
  {"gen-refs", &module_info_runtimeSboot, "gen-refs"},
  {"init-environment-for-eval", &module_info_compilerSast, "init-environment-for-eval"},
  {"not", &module_info_runtimeSboot, "not"},
  {"signature-bindings", &module_info_compilerSast, "signature-bindings"},
  {"%process-module", &module_info_runtimeSboot, "%process-module"},
  {"%f-", &module_info_runtimeSboot, "%f-"},
  {"signature-nary?", &module_info_compilerSast, "signature-nary?"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"<simple-condition>", &module_info_runtimeSruntime, "<simple-condition>"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"app-filename", &module_info_runtimeSruntime, "app-filename"},
  {"%peek", &module_info_runtimeSboot, "%peek"},
  {"monitor-main-thunk", &module_info_compilerSast, "monitor-main-thunk"},
  {"3rd", &module_info_gooScollectionsSsequence, "3rd"},
  {"pos", &module_info_gooScollectionsSsequence, "pos"},
  {"function-source-setter", &module_info_compilerSast, "function-source-setter"},
  {"fill", &module_info_gooScollectionsScollection, "fill"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"fab-sym", &module_info_runtimeSboot, "fab-sym"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"~", &module_info_gooSmath, "~"},
  {"lst", &module_info_runtimeSboot, "lst"},
  {"%gen-refs", &module_info_runtimeSboot, "%gen-refs"},
  {"%%sym", &module_info_runtimeSboot, "%%sym"},
  {">=", &module_info_gooSmagnitude, ">="},
  {"build-condition-interactively", &module_info_runtimeSruntime, "build-condition-interactively"},
  {"sig-specs", &module_info_runtimeSboot, "sig-specs"},
  {"@lst", &module_info_runtimeSboot, "@lst"},
  {"<bound?>", &module_info_compilerSast, "<bound?>"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"~==", &module_info_gooSmath, "~=="},
  {"binding-native-to?", &module_info_compilerSast, "binding-native-to?"},
  {"map", &module_info_gooSmacros, "map"},
  {"sequentialize", &module_info_compilerSast, "sequentialize"},
  {"assignment-form", &module_info_compilerSast, "assignment-form"},
  {"<immediate-constant>", &module_info_compilerSast, "<immediate-constant>"},
  {"%loc-val-setter", &module_info_runtimeSboot, "%loc-val-setter"},
  {"nul", &module_info_runtimeSboot, "nul"},
  {"error", &module_info_runtimeSboot, "error"},
  {"<singleton>", &module_info_runtimeSboot, "<singleton>"},
  {">>", &module_info_gooSmath, ">>"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"function-value", &module_info_compilerSast, "function-value"},
  {"ast-define-binding", &module_info_compilerSast, "ast-define-binding"},
  {"binding-inferred-type-setter", &module_info_compilerSast, "binding-inferred-type-setter"},
  {"set-module-environments", &module_info_compilerSast, "set-module-environments"},
  {"range", &module_info_gooScollectionsSrange, "range"},
  {"%open-in-file", &module_info_runtimeSboot, "%open-in-file"},
  {"sig", &module_info_runtimeSruntime, "sig"},
  {"compose", &module_info_runtimeSruntime, "compose"},
  {"round/", &module_info_gooSmath, "round/"},
  {"<fun>", &module_info_runtimeSboot, "<fun>"},
  {"1+", &module_info_gooSmath, "1+"},
  {"%flo-bits", &module_info_runtimeSboot, "%flo-bits"},
  {"locals-bindings-setter", &module_info_compilerSast, "locals-bindings-setter"},
  {"%fi2f", &module_info_runtimeSboot, "%fi2f"},
  {"function-source", &module_info_compilerSast, "function-source"},
  {"match", &module_info_gooSmacros, "match"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"<compile-time>", &module_info_compilerSast, "<compile-time>"},
  {"*boot-macro-expanders*", &module_info_runtimeSboot, "*boot-macro-expanders*"},
  {"<step>", &module_info_gooScollectionsSstep, "<step>"},
  {"%fpow", &module_info_runtimeSboot, "%fpow"},
  {"prop-bound?", &module_info_runtimeSboot, "prop-bound?"},
  {"first-then", &module_info_gooScollectionsSstep, "first-then"},
  {"%cu", &module_info_runtimeSboot, "%cu"},
  {"dg", &module_info_runtimeSboot, "dg"},
  {"file-opening-error", &module_info_runtimeSboot, "file-opening-error"},
  {"signature-arity-setter", &module_info_compilerSast, "signature-arity-setter"},
  {"%%macro", &module_info_runtimeSboot, "%%macro"},
  {"bound?-reference", &module_info_compilerSast, "bound?-reference"},
  {"sig-val", &module_info_runtimeSboot, "sig-val"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"<lst>", &module_info_runtimeSboot, "<lst>"},
  {"fab-class", &module_info_runtimeSboot, "fab-class"},
  {"<log>", &module_info_runtimeSboot, "<log>"},
  {"^", &module_info_gooSmath, "^"},
  {"@oelt", &module_info_runtimeSboot, "@oelt"},
  {"<simple-handler-info>", &module_info_runtimeSboot, "<simple-handler-info>"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"signature-names", &module_info_compilerSast, "signature-names"},
  {"locals-body-setter", &module_info_compilerSast, "locals-body-setter"},
  {"fun-specs", &module_info_runtimeSboot, "fun-specs"},
  {"type-object", &module_info_runtimeSboot, "type-object"},
  {"try", &module_info_runtimeSboot, "try"},
  {"fun-name-setter", &module_info_runtimeSboot, "fun-name-setter"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"binding-index-setter", &module_info_compilerSast, "binding-index-setter"},
  {"rev", &module_info_gooScollectionsSsequence, "rev"},
  {"<passive-program>", &module_info_compilerSast, "<passive-program>"},
  {"def-programs", &module_info_compilerSast, "def-programs"},
  {"constant-value", &module_info_compilerSast, "constant-value"},
  {"%ftan", &module_info_runtimeSboot, "%ftan"},
  {"1st", &module_info_gooScollectionsSsequence, "1st"},
  {"quote", &module_info_runtimeSboot, "quote"},
  {"enum", &module_info_gooScollectionsScollection, "enum"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%file-exists?", &module_info_runtimeSboot, "%file-exists?"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"binding-dynamic-extent?", &module_info_compilerSast, "binding-dynamic-extent?"},
  {"<=", &module_info_gooSmagnitude, "<="},
  {"locals-body", &module_info_compilerSast, "locals-body"},
  {"binding-dynamic-extent?-setter", &module_info_compilerSast, "binding-dynamic-extent?-setter"},
  {"unknown-function-error", &module_info_runtimeSboot, "unknown-function-error"},
  {"%velt", &module_info_runtimeSboot, "%velt"},
  {"function-bindings", &module_info_compilerSast, "function-bindings"},
  {"function-data-refs-setter", &module_info_compilerSast, "function-data-refs-setter"},
  {"%vnul", &module_info_runtimeSboot, "%vnul"},
  {"sym-name", &module_info_runtimeSboot, "sym-name"},
  {"<handler-info>", &module_info_runtimeSruntime, "<handler-info>"},
  {"%i>>", &module_info_runtimeSboot, "%i>>"},
  {"find", &module_info_gooScollectionsScollection, "find"},
  {"list-handlers", &module_info_runtimeSruntime, "list-handlers"},
  {"application-function", &module_info_compilerSast, "application-function"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"handler-matches?", &module_info_runtimeSruntime, "handler-matches?"},
  {"%i+", &module_info_runtimeSboot, "%i+"},
  {"%define-method", &module_info_runtimeSboot, "%define-method"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"fun-name", &module_info_runtimeSboot, "fun-name"},
  {"<module-binding>", &module_info_compilerSast, "<module-binding>"},
  {"dm", &module_info_runtimeSboot, "dm"},
  {"str-to-num", &module_info_gooScollectionsSstring, "str-to-num"},
  {"alternative-consequent", &module_info_compilerSast, "alternative-consequent"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"mod", &module_info_gooSmath, "mod"},
  {"object-class", &module_info_runtimeSboot, "object-class"},
  {"prop-owner", &module_info_runtimeSboot, "prop-owner"},
  {"range-by", &module_info_gooScollectionsSrange, "range-by"},
  {"<global-reference>", &module_info_compilerSast, "<global-reference>"},
  {"%fcos", &module_info_runtimeSboot, "%fcos"},
  {"%gen-code-setter", &module_info_runtimeSboot, "%gen-code-setter"},
  {"<runtime-reference>", &module_info_compilerSast, "<runtime-reference>"},
  {"function-data-refs", &module_info_compilerSast, "function-data-refs"},
  {"<tab>", &module_info_gooScollectionsScollection, "<tab>"},
  {"binding-global-box", &module_info_compilerSast, "binding-global-box"},
  {"sexpr-signature-parameters", &module_info_compilerSsyntax, "sexpr-signature-parameters"},
  {"find-environment-module", &module_info_compilerSast, "find-environment-module"},
  {"signature-specs", &module_info_compilerSast, "signature-specs"},
  {"rem", &module_info_gooSmath, "rem"},
  {"prop-value", &module_info_runtimeSboot, "prop-value"},
  {"list", &module_info_gooScollectionsSlist, "list"},
  {"class-parents", &module_info_runtimeSboot, "class-parents"},
  {"$permanent-hash-state", &module_info_gooScollectionsStable, "$permanent-hash-state"},
  {">", &module_info_gooSmagnitude, ">"},
  {"program-register", &module_info_compilerSast, "program-register"},
  {"@olen", &module_info_runtimeSboot, "@olen"},
  {"$default-handler-info", &module_info_runtimeSruntime, "$default-handler-info"},
  {"<unwind-protect>", &module_info_compilerSast, "<unwind-protect>"},
  {"environment-uses-modules", &module_info_compilerSast, "environment-uses-modules"},
  {"&", &module_info_gooSmath, "&"},
  {"%fatan2", &module_info_runtimeSboot, "%fatan2"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"module-name-to-relpath", &module_info_compilerSast, "module-name-to-relpath"},
  {"fab-map", &module_info_gooScollectionsSmap, "fab-map"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"df", &module_info_runtimeSboot, "df"},
  {"key-test", &module_info_gooScollectionsScollection, "key-test"},
  {"default-handler", &module_info_runtimeSruntime, "default-handler"},
  {"binding-value-setter", &module_info_compilerSast, "binding-value-setter"},
  {"<fix-let>", &module_info_compilerSast, "<fix-let>"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"environment-module", &module_info_compilerSast, "environment-module"},
  {"function-self-recursive?-setter", &module_info_compilerSast, "function-self-recursive?-setter"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<seq>", &module_info_runtimeSboot, "<seq>"},
  {"%fcosh", &module_info_runtimeSboot, "%fcosh"},
  {"prop-type", &module_info_runtimeSboot, "prop-type"},
  {"<any>", &module_info_runtimeSboot, "<any>"},
  {"%do-stack-frames", &module_info_runtimeSboot, "%do-stack-frames"},
  {"load-module", &module_info_compilerSast, "load-module"},
  {"%i=", &module_info_runtimeSboot, "%i="},
  {"*gensym-counter*", &module_info_runtimeSruntime, "*gensym-counter*"},
  {"function-self-recursive?", &module_info_compilerSast, "function-self-recursive?"},
  {"%loc-off-setter", &module_info_runtimeSboot, "%loc-off-setter"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"%raw", &module_info_runtimeSboot, "%raw"},
  {"rep", &module_info_runtimeSboot, "rep"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"fix-let-arguments-setter", &module_info_compilerSast, "fix-let-arguments-setter"},
  {"*restarts-ok?*", &module_info_runtimeSboot, "*restarts-ok?*"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"loc-val-setter", &module_info_runtimeSruntime, "loc-val-setter"},
  {"objectify-signature", &module_info_compilerSast, "objectify-signature"},
  {"@len", &module_info_runtimeSboot, "@len"},
  {"<computed-program>", &module_info_compilerSast, "<computed-program>"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"class-props", &module_info_runtimeSboot, "class-props"},
  {"@+", &module_info_runtimeSboot, "@+"},
  {"alternative-condition", &module_info_compilerSast, "alternative-condition"},
  {"$max-int", &module_info_runtimeSboot, "$max-int"},
  {"do-module-loader-modules", &module_info_compilerSast, "do-module-loader-modules"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"<", &module_info_gooSmagnitude, "<"},
  {"%allocate-stack", &module_info_runtimeSboot, "%allocate-stack"},
  {"binding-locative", &module_info_compilerSast, "binding-locative"},
  {"program-type-setter", &module_info_compilerSast, "program-type-setter"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"%prop-unbound-error", &module_info_runtimeSboot, "%prop-unbound-error"},
  {"<assocs>", &module_info_gooScollectionsSassoc, "<assocs>"},
  {"%unlink-stack", &module_info_runtimeSboot, "%unlink-stack"},
  {"default-handler-description", &module_info_runtimeSruntime, "default-handler-description"},
  {"vec", &module_info_runtimeSboot, "vec"},
  {"%i&", &module_info_runtimeSboot, "%i&"},
  {"dss", &module_info_runtimeSboot, "dss"},
  {"describe-condition", &module_info_runtimeSruntime, "describe-condition"},
  {"*boot-macro-module-names*", &module_info_runtimeSboot, "*boot-macro-module-names*"},
  {"<real-reference>", &module_info_compilerSast, "<real-reference>"},
  {"%i>>>", &module_info_runtimeSboot, "%i>>>"},
  {"%facos", &module_info_runtimeSboot, "%facos"},
  {"del-dups", &module_info_gooScollectionsSsequence, "del-dups"},
  {"<sig>", &module_info_runtimeSboot, "<sig>"},
  {"<buf>", &module_info_gooScollectionsSbuffer, "<buf>"},
  {"binding-inferred-type", &module_info_compilerSast, "binding-inferred-type"},
  {"as-lst", &module_info_compilerSast, "as-lst"},
  {"key-type", &module_info_gooScollectionsScollection, "key-type"},
  {"fun-names", &module_info_runtimeSboot, "fun-names"},
  {"%create-directory", &module_info_runtimeSboot, "%create-directory"},
  {"do-static-global-bindings", &module_info_compilerSast, "do-static-global-bindings"},
  {"binding-module-name", &module_info_compilerSast, "binding-module-name"},
  {"find-setter", &module_info_runtimeSboot, "find-setter"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"if", &module_info_runtimeSboot, "if"},
  {"find-or", &module_info_gooScollectionsScollection, "find-or"},
  {"dl", &module_info_runtimeSboot, "dl"},
  {"%f+", &module_info_runtimeSboot, "%f+"},
  {"ct", &module_info_runtimeSboot, "ct"},
  {"%ib", &module_info_runtimeSboot, "%ib"},
  {"use/export", &module_info_runtimeSboot, "use/export"},
  {"sub-setter", &module_info_gooScollectionsSsequence, "sub-setter"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"binding-name", &module_info_compilerSast, "binding-name"},
  {"$goo-boot-module-name", &module_info_compilerSast, "$goo-boot-module-name"},
  {"fix-let-body", &module_info_compilerSast, "fix-let-body"},
  {"%selt", &module_info_runtimeSboot, "%selt"},
  {"<handler>", &module_info_runtimeSruntime, "<handler>"},
  {"=", &module_info_gooSmath, "="},
  {"fix-let-arguments", &module_info_compilerSast, "fix-let-arguments"},
  {"@all2?", &module_info_runtimeSboot, "@all2?"},
  {"condition-message", &module_info_runtimeSruntime, "condition-message"},
  {"binding-value", &module_info_compilerSast, "binding-value"},
  {"<module-loader>", &module_info_compilerSast, "<module-loader>"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"or", &module_info_gooSmacros, "or"},
  {"locals-functions-setter", &module_info_compilerSast, "locals-functions-setter"},
  {"<local-reference>", &module_info_compilerSast, "<local-reference>"},
  {"%f<", &module_info_runtimeSboot, "%f<"},
  {"until", &module_info_gooSmacros, "until"},
  {"%i?", &module_info_runtimeSboot, "%i?"},
  {"nil", &module_info_runtimeSboot, "nil"},
  {"<ast-function>", &module_info_compilerSast, "<ast-function>"},
  {"ast-evaluate", &module_info_compilerSast, "ast-evaluate"},
  {"<global-box>", &module_info_compilerSast, "<global-box>"},
  {"<col>", &module_info_runtimeSboot, "<col>"},
  {"function-temporaries-setter", &module_info_compilerSast, "function-temporaries-setter"},
  {"sig-names", &module_info_runtimeSboot, "sig-names"},
  {"<class>", &module_info_runtimeSboot, "<class>"},
  {"function-signature", &module_info_compilerSast, "function-signature"},
  {"locals-functions", &module_info_compilerSast, "locals-functions"},
  {"global-box-value-setter", &module_info_compilerSast, "global-box-value-setter"},
  {"%ft", &module_info_runtimeSboot, "%ft"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"fab-gen", &module_info_runtimeSboot, "fab-gen"},
  {"%c=", &module_info_runtimeSboot, "%c="},
  {"alternative-alternant", &module_info_compilerSast, "alternative-alternant"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%next-methods", &module_info_runtimeSboot, "%next-methods"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"probe-module", &module_info_compilerSast, "probe-module"},
  {"signature-specs-setter", &module_info_compilerSast, "signature-specs-setter"},
  {"elt-default", &module_info_gooScollectionsScollection, "elt-default"},
  {"module-target-environment", &module_info_compilerSast, "module-target-environment"},
  {"binding-info", &module_info_compilerSast, "binding-info"},
  {"<fab-list>", &module_info_compilerSast, "<fab-list>"},
  {"case-insensitive-string-hash", &module_info_gooScollectionsStable, "case-insensitive-string-hash"},
  {"<binding>", &module_info_compilerSast, "<binding>"},
  {"%get", &module_info_runtimeSboot, "%get"},
  {"binding-global-box-setter", &module_info_compilerSast, "binding-global-box-setter"},
  {"<reference>", &module_info_compilerSast, "<reference>"},
  {"%eof-object", &module_info_runtimeSboot, "%eof-object"},
  {"signature-names-setter", &module_info_compilerSast, "signature-names-setter"},
  {"always", &module_info_runtimeSruntime, "always"},
  {"report-undefined-global-bindings", &module_info_compilerSast, "report-undefined-global-bindings"},
  {"handler-function", &module_info_runtimeSruntime, "handler-function"},
  {"<global-assignment>", &module_info_compilerSast, "<global-assignment>"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"len/fill-setter", &module_info_gooScollectionsSbuffer, "len/fill-setter"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"module-loader-module-type", &module_info_compilerSast, "module-loader-module-type"},
  {"<definition>", &module_info_compilerSast, "<definition>"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"monitor-handler", &module_info_compilerSast, "monitor-handler"},
  {"%lb", &module_info_runtimeSboot, "%lb"},
  {"del-vals", &module_info_gooScollectionsSsequence, "del-vals"},
  {"%i<<<", &module_info_runtimeSboot, "%i<<<"},
  {"application-known?-setter", &module_info_compilerSast, "application-known?-setter"},
  {"get", &module_info_gooSioSport, "get"},
  {"binding-info-setter", &module_info_compilerSast, "binding-info-setter"},
  {"tail-setter", &module_info_runtimeSboot, "tail-setter"},
  {"+", &module_info_gooSmath, "+"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"<<", &module_info_gooSmath, "<<"},
  {"function-nary?", &module_info_compilerSast, "function-nary?"},
  {"sig-arity", &module_info_runtimeSboot, "sig-arity"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"keys", &module_info_gooScollectionsScollection, "keys"},
  {"fold+", &module_info_gooScollectionsScollection, "fold+"},
  {"seq", &module_info_runtimeSboot, "seq"},
  {"signature-arity", &module_info_compilerSast, "signature-arity"},
  {"function-temporaries", &module_info_compilerSast, "function-temporaries"},
  {"curry", &module_info_runtimeSruntime, "curry"},
  {"function-debug-name", &module_info_compilerSast, "function-debug-name"},
  {"case-insensitive-string-equal", &module_info_gooScollectionsStable, "case-insensitive-string-equal"},
  {"%loc-val", &module_info_runtimeSboot, "%loc-val"},
  {"do2", &module_info_gooScollectionsScollection, "do2"},
  {"<mag>", &module_info_runtimeSboot, "<mag>"},
  {"and", &module_info_gooSmacros, "and"},
  {"str", &module_info_gooScollectionsSstring, "str"},
  {"runtime-environment", &module_info_compilerSast, "runtime-environment"},
  {"program-type", &module_info_compilerSast, "program-type"},
  {"%im", &module_info_runtimeSboot, "%im"},
  {"esc", &module_info_runtimeSboot, "esc"},
  {"low-elt-setter", &module_info_gooScollectionsScollection, "low-elt-setter"},
  {"%check-call-types", &module_info_runtimeSboot, "%check-call-types"},
  {"<opts>", &module_info_runtimeSboot, "<opts>"},
  {"find-getter", &module_info_runtimeSboot, "find-getter"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"tail", &module_info_runtimeSboot, "tail"},
  {"elt-type", &module_info_gooScollectionsScollection, "elt-type"},
  {"<raw-constant>", &module_info_compilerSast, "<raw-constant>"},
  {"%file-mtime", &module_info_runtimeSboot, "%file-mtime"},
  {"%loc-off", &module_info_runtimeSboot, "%loc-off"},
  {"function-free", &module_info_compilerSast, "function-free"},
  {"wrong-number-arguments-error", &module_info_runtimeSboot, "wrong-number-arguments-error"},
  {"below", &module_info_gooScollectionsSsequence, "below"},
  {"<enum>", &module_info_gooScollectionsScollection, "<enum>"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"<type>", &module_info_runtimeSboot, "<type>"},
  {"let", &module_info_runtimeSboot, "let"},
  {"ord-app-mets", &module_info_runtimeSboot, "ord-app-mets"},
  {"t?", &module_info_gooStypes, "t?"},
  {"init-ast", &module_info_compilerSast, "init-ast"},
  {"loc-val", &module_info_runtimeSruntime, "loc-val"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%force-out", &module_info_runtimeSboot, "%force-out"},
  {"<loc>", &module_info_runtimeSboot, "<loc>"},
  {"%ready?", &module_info_runtimeSboot, "%ready?"},
  {"%close-in-port", &module_info_runtimeSboot, "%close-in-port"},
  {"close", &module_info_gooSioSport, "close"},
  {"pop-last!", &module_info_gooScollectionsSbuffer, "pop-last!"},
  {"application-tail?", &module_info_compilerSast, "application-tail?"},
  {"%it/", &module_info_runtimeSboot, "%it/"},
  {"fab", &module_info_gooScollectionsScollection, "fab"},
  {"binding-dotted?", &module_info_compilerSast, "binding-dotted?"},
  {"type-elts", &module_info_runtimeSboot, "type-elts"},
  {"module-binding", &module_info_compilerSast, "module-binding"},
  {"*report-prop-unbound-errors?*", &module_info_runtimeSboot, "*report-prop-unbound-errors?*"},
  {"from", &module_info_gooScollectionsSrange, "from"},
  {"<ast-method>", &module_info_compilerSast, "<ast-method>"},
  {"assocs-test", &module_info_gooScollectionsSassoc, "assocs-test"},
  {"reference-frame-offset", &module_info_compilerSast, "reference-frame-offset"},
  {"round", &module_info_gooSmath, "round"},
  {"reference-called-function?", &module_info_compilerSast, "reference-called-function?"},
  {"%os-val", &module_info_runtimeSboot, "%os-val"},
  {"<module-binding-reference>", &module_info_compilerSast, "<module-binding-reference>"},
  {"monitor-type", &module_info_compilerSast, "monitor-type"},
  {"reject", &module_info_gooScollectionsSsequence, "reject"},
  {"%fsqrt", &module_info_runtimeSboot, "%fsqrt"},
  {"<assignment>", &module_info_compilerSast, "<assignment>"},
  {"class-name", &module_info_runtimeSboot, "class-name"},
  {"unless", &module_info_gooSmacros, "unless"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"env-frame!", &YcompilerSast_evalYenv_frameX},
  {"env-binding-value-setter", &YcompilerSast_evalYenv_binding_value_setter},
  {"env-parent", &YcompilerSast_evalYenv_parent},
  {"%dlvar-nam", NULL},
  {"%dlvar", NULL},
  {"%lookup-binding", NULL},
  {"%dlvar-mod", NULL},
  {"env-function-setter", &YcompilerSast_evalYenv_function_setter},
  {"%define-binding", NULL},
  {"env-function", &YcompilerSast_evalYenv_function},
  {"%binding-value-setter", NULL},
  {"---main-1---", NULL},
  {"env-names", &YcompilerSast_evalYenv_names},
  {"%dlvar-setter", NULL},
  {"ast-eval-bound?", &YcompilerSast_evalYast_eval_boundQ},
  {"env-global-binding-value-setter", &YcompilerSast_evalYenv_global_binding_value_setter},
  {"env-local-reference-value", &YcompilerSast_evalYenv_local_reference_value},
  {"export-goo-method", &YcompilerSast_evalYexport_goo_method},
  {"env-local-value", &YcompilerSast_evalYenv_local_value},
  {"env-local-value-setter", &YcompilerSast_evalYenv_local_value_setter},
  {"env-local-reference-value-setter", &YcompilerSast_evalYenv_local_reference_value_setter},
  {"env-global-binding-bound?", &YcompilerSast_evalYenv_global_binding_boundQ},
  {"env-global-binding-value", &YcompilerSast_evalYenv_global_binding_value},
  {"%dlvar-binding", NULL},
  {"ast-eval-specs", &YcompilerSast_evalYast_eval_specs},
  {"env-runtime-value-setter", &YcompilerSast_evalYenv_runtime_value_setter},
  {"%ensure-binding", NULL},
  {"ast-eval", &YcompilerSast_evalYast_eval},
  {"ifun", NULL},
  {"env-parent-setter", &YcompilerSast_evalYenv_parent_setter},
  {"<loc-env>", &YcompilerSast_evalYLloc_envG},
  {"env-values-setter", &YcompilerSast_evalYenv_values_setter},
  {"env-values", &YcompilerSast_evalYenv_values},
  {"env-define-binding!", &YcompilerSast_evalYenv_define_bindingX},
  {"arrange-arguments", &YcompilerSast_evalYarrange_arguments},
  {"*stack*", &YcompilerSast_evalYTstackT},
  {"%binding-value", NULL},
  {"env-runtime-value", &YcompilerSast_evalYenv_runtime_value},
  {"$nul-loc-env", &YcompilerSast_evalYDnul_loc_env},
  {"env-names-setter", &YcompilerSast_evalYenv_names_setter},
  {"%binding-bound?", NULL},
  {"as-fun-name", &YcompilerSast_evalYas_fun_name},
  {"env-binding-value", &YcompilerSast_evalYenv_binding_value},
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"%binding-value-setter", "%binding-value-setter"},
  {"init-environment-for-eval", "init-environment-for-eval"},
  {"ast-evaluate", "ast-evaluate"},
  {"%binding-value", "%binding-value"},
  {"%binding-bound?", "%binding-bound?"},
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
