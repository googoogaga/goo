/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: compiler/main */

EXT(YcompilerSastYLprogramG,"compiler/ast","<program>");
EXT(YcompilerSastYapplication_knownQ,"compiler/ast","application-known?");
EXT(YcompilerSastYLargumentsG,"compiler/ast","<arguments>");
EXT(YcompilerStopYtop,"compiler/top","top");
EXT(YcompilerSastYLpredefined_applicationG,"compiler/ast","<predefined-application>");
EXT(Ymay_isaQ,"runtime/boot","may-isa?");
EXT(YgooScollectionsStableYtab_growth_threshold,"goo/collections/table","tab-growth-threshold");
EXT(YcompilerSastYunwind_protect_protected_thunk,"compiler/ast","unwind-protect-protected-thunk");
EXT(YcompilerSastYfix_let_types_setter,"compiler/ast","fix-let-types-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScollectionsStableYtab_growth_factor,"goo/collections/table","tab-growth-factor");
EXT(YcompilerSastYreport_undefined_global_bindings,"compiler/ast","report-undefined-global-bindings");
EXT(YDmin_int,"runtime/boot","$min-int");
EXT(Ygen_add_met,"runtime/boot","gen-add-met");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yprop_setter,"runtime/boot","prop-setter");
EXT(YcompilerSastYunwind_protect_cleanup_thunk,"compiler/ast","unwind-protect-cleanup-thunk");
EXT(YgooScollectionsScollectionYlow_elt,"goo/collections/collection","low-elt");
EXT(Yfun_val,"runtime/boot","fun-val");
EXT(YgooScollectionsScollectionYmap_keyed,"goo/collections/collection","map-keyed");
EXT(YgooScollectionsSsequenceYsub,"goo/collections/sequence","sub");
EXT(YgooScollectionsStableYLstr_tabG,"goo/collections/table","<str-tab>");
EXT(YcompilerSastYfunction_binding,"compiler/ast","function-binding");
EXT(YgooScollectionsScollectionYitems,"goo/collections/collection","items");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YcompilerSastYreference_binding,"compiler/ast","reference-binding");
EXT(YcompilerSastYload_in,"compiler/ast","load-in");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YcompilerSastYsignature_value_setter,"compiler/ast","signature-value-setter");
EXT(Yclass_ancestors,"runtime/boot","class-ancestors");
EXT(YcompilerSastYconstant_index_setter,"compiler/ast","constant-index-setter");
EXT(YcompilerSastYfix_let_types,"compiler/ast","fix-let-types");
EXT(YcompilerSastYcompile_time_program,"compiler/ast","compile-time-program");
EXT(YcompilerStopYesctst,"compiler/top","esctst");
EXT(YgooScollectionsSlistYLlistG,"goo/collections/list","<list>");
EXT(YruntimeSruntimeYcondition_arguments,"runtime/runtime","condition-arguments");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YcompilerSastYsignature_naryQ_setter,"compiler/ast","signature-nary?-setter");
EXT(YcompilerStopYparse_in,"compiler/top","parse-in");
EXT(YruntimeSruntimeYLserious_conditionG,"runtime/runtime","<serious-condition>");
EXT(YcompilerSastYbinding_mutableQ,"compiler/ast","binding-mutable?");
EXT(YcompilerSastYbinding_type,"compiler/ast","binding-type");
EXT(YcompilerSastYunchecked_runtime_environment,"compiler/ast","unchecked-runtime-environment");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YLfloG,"runtime/boot","<flo>");
EXT(YLsymG,"runtime/boot","<sym>");
EXT(YcompilerSastYLast_primitive_definitionG,"compiler/ast","<ast-primitive-definition>");
EXT(YgooScollectionsScollectionYaddX,"goo/collections/collection","add!");
EXT(Ymet_appQ,"runtime/boot","met-app?");
EXT(Ynew,"runtime/boot","new");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YcompilerSastYlocals_bindings,"compiler/ast","locals-bindings");
EXT(YgooScollectionsScollectionYfold,"goo/collections/collection","fold");
EXT(YcompilerSastYfix_let_body_setter,"compiler/ast","fix-let-body-setter");
EXT(YcompilerSastYassignment_form_setter,"compiler/ast","assignment-form-setter");
EXT(YcompilerSastYobjectify_quotation,"compiler/ast","objectify-quotation");
EXT(Yfun_mets,"runtime/boot","fun-mets");
EXT(YcompilerStopYframe_var,"compiler/top","frame-var");
EXT(YcompilerSastYapplication_arguments,"compiler/ast","application-arguments");
EXT(YcompilerSastYinstall_initial_bindings,"compiler/ast","install-initial-bindings");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YcompilerSastYfix_let_bindings_setter,"compiler/ast","fix-let-bindings-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YruntimeSruntimeYLsimple_errorG,"runtime/runtime","<simple-error>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YcompilerSastYLfree_environmentG,"compiler/ast","<free-environment>");
EXT(YcompilerSastYmodule_exports,"compiler/ast","module-exports");
EXT(YgooScollectionsStableYid_hash,"goo/collections/table","id-hash");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(Yadd_prop,"runtime/boot","add-prop");
EXT(YcompilerSastYfunction_index_setter,"compiler/ast","function-index-setter");
EXT(YcompilerSastYLlocalsG,"compiler/ast","<locals>");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YcompilerSg2cYg2c_top,"compiler/g2c","g2c-top");
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
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YLpropG,"runtime/boot","<prop>");
EXT(YcompilerSastYLconstantG,"compiler/ast","<constant>");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YcompilerSastYfunction_index,"compiler/ast","function-index");
EXT(YgooScollectionsSbufferYpush_lastX,"goo/collections/buffer","push-last!");
EXT(YgooScollectionsScollectionYelts,"goo/collections/collection","elts");
EXT(YcompilerSastYLmonitorG,"compiler/ast","<monitor>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScollectionsSsequenceYcat2,"goo/collections/sequence","cat2");
EXT(YcompilerSastYfunction_body_setter,"compiler/ast","function-body-setter");
EXT(YLgenG,"runtime/boot","<gen>");
EXT(YcompilerSastYfunction_signature_setter,"compiler/ast","function-signature-setter");
DEF(YcompilerSmainYTgoo_dateT,"compiler/main","*goo-date*");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YisaQ,"runtime/boot","isa?");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YcompilerSastYLast_genericG,"compiler/ast","<ast-generic>");
EXT(YcompilerSastYconstant_index,"compiler/ast","constant-index");
EXT(YgooScollectionsSmapYLmapG,"goo/collections/map","<map>");
EXT(YcompilerSastYfind_environment_module,"compiler/ast","find-environment-module");
EXT(YgooScollectionsSlistYpop,"goo/collections/list","pop");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScollectionsStableYtab_hash,"goo/collections/table","tab-hash");
EXT(YcompilerSastYfunction_body,"compiler/ast","function-body");
EXT(YgooScollectionsScollectionYmemQ,"goo/collections/collection","mem?");
EXT(YcompilerSastYreference_called_functionQ_setter,"compiler/ast","reference-called-function?-setter");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YcompilerSastYLruntime_assignmentG,"compiler/ast","<runtime-assignment>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YruntimeSruntimeYrcurry,"runtime/runtime","rcurry");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YcompilerSastYLregular_applicationG,"compiler/ast","<regular-application>");
EXT(YgooScollectionsSstringYnum_to_str_base,"goo/collections/string","num-to-str-base");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YcompilerSastYfab_g2c_module,"compiler/ast","fab-g2c-module");
EXT(YLintG,"runtime/boot","<int>");
EXT(YgooScollectionsSrangeYLrangeG,"goo/collections/range","<range>");
EXT(YLstrG,"runtime/boot","<str>");
EXT(YgooScollectionsScollectionYallQ,"goo/collections/collection","all?");
EXT(YcompilerSastYLprogramsG,"compiler/ast","<programs>");
EXT(Yfun_arity,"runtime/boot","fun-arity");
EXT(YcompilerSsyntaxYeval,"compiler/syntax","eval");
EXT(YcompilerSastYsignature_bindings_setter,"compiler/ast","signature-bindings-setter");
EXT(YPprop,"runtime/boot","%prop");
EXT(YcompilerSastYmodule_loader_module_type,"compiler/ast","module-loader-module-type");
EXT(YruntimeSruntimeYLerrorG,"runtime/runtime","<error>");
EXT(YcompilerSastYLbind_exitG,"compiler/ast","<bind-exit>");
EXT(YgooStypesYas,"goo/types","as");
EXT(YcompilerSastYfix_let_bindings,"compiler/ast","fix-let-bindings");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YPisa,"runtime/boot","%isa");
EXT(YgooScollectionsScollectionYdel,"goo/collections/collection","del");
EXT(YcompilerSastYbinding_dottedQ_setter,"compiler/ast","binding-dotted?-setter");
EXT(YcompilerSastYreference_frame_number,"compiler/ast","reference-frame-number");
EXT(YcompilerSastYremove_modules_by_nameX,"compiler/ast","remove-modules-by-name!");
EXT(YcompilerSastYfind_binding,"compiler/ast","find-binding");
EXT(YgooScollectionsSbufferYbuf,"goo/collections/buffer","buf");
EXT(YgooScollectionsScollectionYadd,"goo/collections/collection","add");
EXT(YgooScollectionsScollectionYany2Q,"goo/collections/collection","any2?");
EXT(Ytup,"runtime/boot","tup");
EXT(YcompilerSastYbinding_global_box,"compiler/ast","binding-global-box");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YruntimeSruntimeYidentity,"runtime/runtime","identity");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(Yhandler_info_message,"runtime/boot","handler-info-message");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScollectionsStableYtab_gc_state,"goo/collections/table","tab-gc-state");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YcompilerSastYLast_primitiveG,"compiler/ast","<ast-primitive>");
DEF(YcompilerSmainYTgoo_versionT,"compiler/main","*goo-version*");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScollectionsSsequenceYcatX,"goo/collections/sequence","cat!");
EXT(YgooSmagnitudeYmax,"goo/magnitude","max");
EXT(YcompilerSastYmonitor_test,"compiler/ast","monitor-test");
EXT(YcompilerSastYLglobal_referenceG,"compiler/ast","<global-reference>");
EXT(Yhead_setter,"runtime/boot","head-setter");
EXT(Ytype_class,"runtime/boot","type-class");
EXT(YcompilerSastYassignment_reference,"compiler/ast","assignment-reference");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YLunionG,"runtime/boot","<union>");
EXT(YgooScollectionsStableYtab_shrink_threshold,"goo/collections/table","tab-shrink-threshold");
EXT(YgooScollectionsScollectionYnow_setter,"goo/collections/collection","now-setter");
EXT(YLtupG,"runtime/boot","<tup>");
EXT(YcompilerSastYobjectify_with_subtransaction,"compiler/ast","objectify-with-subtransaction");
EXT(YcompilerSastYfunction_registers_setter,"compiler/ast","function-registers-setter");
EXT(YgooScollectionsScollectionYnxt,"goo/collections/collection","nxt");
EXT(YcompilerSastYmodule_syntax_environment,"compiler/ast","module-syntax-environment");
EXT(YcompilerSastYapplication_binding,"compiler/ast","application-binding");
EXT(YcompilerSastYsignature_value,"compiler/ast","signature-value");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YcompilerSastYDgoo_runtime_module_name,"compiler/ast","$goo-runtime-module-name");
EXT(YcompilerSastYglobal_box_value,"compiler/ast","global-box-value");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YruntimeSruntimeYformat,"runtime/runtime","format");
EXT(YgooScollectionsSstringYTprint_baseT,"goo/collections/string","*print-base*");
EXT(YruntimeSruntimeYfab_handler,"runtime/runtime","fab-handler");
EXT(YcompilerSastYenvironment_bindings,"compiler/ast","environment-bindings");
EXT(YcompilerSastYassignment_binding,"compiler/ast","assignment-binding");
EXT(Yhead,"runtime/boot","head");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScollectionsScollectionYelt_or,"goo/collections/collection","elt-or");
EXT(YcompilerSastYfunction_bindings,"compiler/ast","function-bindings");
EXT(YcompilerSastYbind_exit_main_fun,"compiler/ast","bind-exit-main-fun");
EXT(YcompilerSastYLapplicationG,"compiler/ast","<application>");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YLnumG,"runtime/boot","<num>");
EXT(YLvecG,"runtime/boot","<vec>");
EXT(Yprop_getter,"runtime/boot","prop-getter");
EXT(YcompilerSastYLlocal_bindingG,"compiler/ast","<local-binding>");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YcompilerSastYbinding_index,"compiler/ast","binding-index");
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
EXT(YcompilerStopYsave_image,"compiler/top","save-image");
EXT(YgooSioSwriteYdisplay,"goo/io/write","display");
EXT(YcompilerSastYLast_macro_definitionG,"compiler/ast","<ast-macro-definition>");
EXT(YcompilerSastYLsequentialG,"compiler/ast","<sequential>");
EXT(YgooScollectionsStableYtab_test,"goo/collections/table","tab-test");
EXT(YcompilerSastYfree_environment,"compiler/ast","free-environment");
EXT(YLmetG,"runtime/boot","<met>");
EXT(YruntimeSruntimeYLconditionG,"runtime/runtime","<condition>");
EXT(YcompilerSastYLmoduleG,"compiler/ast","<module>");
EXT(YcompilerSg2cYg2c_ast,"compiler/g2c","g2c-ast");
EXT(YgooScollectionsScollectionYzap,"goo/collections/collection","zap");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmagnitudeYmin,"goo/magnitude","min");
EXT(Yprop_init,"runtime/boot","prop-init");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YcompilerSg2cYg2c_def_app,"compiler/g2c","g2c-def-app");
EXT(YgooScollectionsScollectionYmap2,"goo/collections/collection","map2");
EXT(Yfun_naryQ,"runtime/boot","fun-nary?");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YPdefine_method,"runtime/boot","%define-method");
EXT(YcompilerSastYdo_named_static_global_bindings,"compiler/ast","do-named-static-global-bindings");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScollectionsSsequenceYlast,"goo/collections/sequence","last");
EXT(YLsubclassG,"runtime/boot","<subclass>");
EXT(YgooScollectionsScollectionYnow,"goo/collections/collection","now");
EXT(YcompilerSastYLstatic_global_environmentG,"compiler/ast","<static-global-environment>");
EXT(YcompilerSastYfunction_free_setter,"compiler/ast","function-free-setter");
EXT(YcompilerSastYmonitor_main_thunk,"compiler/ast","monitor-main-thunk");
EXT(YcompilerStopYread_file,"compiler/top","read-file");
EXT(YcompilerSastYprogram_register_setter,"compiler/ast","program-register-setter");
EXT(YcompilerSg2cYg2c_exp,"compiler/g2c","g2c-exp");
EXT(Yclass_descendents,"runtime/boot","class-descendents");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScollectionsSlistYpush,"goo/collections/list","push");
EXT(YcompilerSastYfunction_registers,"compiler/ast","function-registers");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YcompilerSastYbinding_type_setter,"compiler/ast","binding-type-setter");
EXT(Yprop_value_setter,"runtime/boot","prop-value-setter");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YLchrG,"runtime/boot","<chr>");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YLflatG,"runtime/boot","<flat>");
EXT(Yhandler_info_arguments,"runtime/boot","handler-info-arguments");
EXT(YgooSmathYT,"goo/math","*");
EXT(YcompilerSastYmodule_name,"compiler/ast","module-name");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YsubtypeQ,"runtime/boot","subtype?");
EXT(YcompilerSastYinit_environment_for_eval,"compiler/ast","init-environment-for-eval");
EXT(Ynot,"runtime/boot","not");
EXT(YcompilerSastYsignature_bindings,"compiler/ast","signature-bindings");
EXT(YcompilerSastYsignature_naryQ,"compiler/ast","signature-nary?");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YruntimeSruntimeYLsimple_conditionG,"runtime/runtime","<simple-condition>");
EXT(YruntimeSruntimeYapp_filename,"runtime/runtime","app-filename");
EXT(YgooScollectionsSsequenceY3rd,"goo/collections/sequence","3rd");
EXT(YcompilerSg2cYg2c_clean,"compiler/g2c","g2c-clean");
EXT(YgooScollectionsSsequenceYpos,"goo/collections/sequence","pos");
EXT(YcompilerSastYfunction_source_setter,"compiler/ast","function-source-setter");
EXT(YgooScollectionsScollectionYfill,"goo/collections/collection","fill");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ylst,"runtime/boot","lst");
EXT(YgooSmagnitudeYGE,"goo/magnitude",">=");
EXT(YcompilerSastYLboundQG,"compiler/ast","<bound?>");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YcompilerSastYbinding_native_toQ,"compiler/ast","binding-native-to?");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YcompilerSastYsequentialize,"compiler/ast","sequentialize");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YcompilerSastYassignment_form,"compiler/ast","assignment-form");
EXT(YcompilerSastYLimmediate_constantG,"compiler/ast","<immediate-constant>");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Ynul,"runtime/boot","nul");
EXT(YgooScollectionsScollectionYfinQ,"goo/collections/collection","fin?");
EXT(Yerror,"runtime/boot","error");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YcompilerSastYfunction_value,"compiler/ast","function-value");
EXT(YcompilerStopYframe,"compiler/top","frame");
EXT(YcompilerSastYast_define_binding,"compiler/ast","ast-define-binding");
EXT(YcompilerSastYbinding_inferred_type_setter,"compiler/ast","binding-inferred-type-setter");
EXT(YcompilerSastYset_module_environments,"compiler/ast","set-module-environments");
EXT(YgooScollectionsSrangeYrange,"goo/collections/range","range");
EXT(YruntimeSruntimeYsig,"runtime/runtime","sig");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YruntimeSruntimeYcompose,"runtime/runtime","compose");
EXT(YLfunG,"runtime/boot","<fun>");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YcompilerSastYlocals_bindings_setter,"compiler/ast","locals-bindings-setter");
EXT(YcompilerSastYfunction_source,"compiler/ast","function-source");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YcompilerSastYLcompile_timeG,"compiler/ast","<compile-time>");
EXT(YgooScollectionsSstepYLstepG,"goo/collections/step","<step>");
EXT(Yprop_boundQ,"runtime/boot","prop-bound?");
EXT(YcompilerStopYg2c_eval,"compiler/top","g2c-eval");
EXT(YgooScollectionsSstepYfirst_then,"goo/collections/step","first-then");
EXT(YgooScollectionsScollectionYkeys,"goo/collections/collection","keys");
EXT(YcompilerStopYdo_stack_frames,"compiler/top","do-stack-frames");
EXT(YcompilerStopYauto_eval,"compiler/top","auto-eval");
EXT(YcompilerSastYsignature_arity_setter,"compiler/ast","signature-arity-setter");
EXT(YPPmacro,"runtime/boot","%%macro");
EXT(YcompilerSastYboundQ_reference,"compiler/ast","bound?-reference");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YcompilerSg2cYg2c_test,"compiler/g2c","g2c-test");
EXT(YLlstG,"runtime/boot","<lst>");
EXT(Yfab_class,"runtime/boot","fab-class");
EXT(YgooSmathYC,"goo/math","^");
EXT(YLlogG,"runtime/boot","<log>");
EXT(YcompilerStopYbacktrace,"compiler/top","backtrace");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YcompilerSastYsignature_names,"compiler/ast","signature-names");
EXT(YcompilerSastYlocals_body_setter,"compiler/ast","locals-body-setter");
EXT(Yfun_specs,"runtime/boot","fun-specs");
EXT(Ytype_object,"runtime/boot","type-object");
EXT(YruntimeSruntimeYLhandler_infoG,"runtime/runtime","<handler-info>");
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
EXT(YcompilerSastYfunction_data_refs_setter,"compiler/ast","function-data-refs-setter");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooScollectionsScollectionYfind,"goo/collections/collection","find");
EXT(YcompilerSastYapplication_function,"compiler/ast","application-function");
EXT(YruntimeSruntimeYhandler_matchesQ,"runtime/runtime","handler-matches?");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooScollectionsSbufferYlen_setter,"goo/collections/buffer","len-setter");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Yfun_name,"runtime/boot","fun-name");
EXT(YcompilerSastYLmodule_bindingG,"compiler/ast","<module-binding>");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooScollectionsSstringYstr_to_num,"goo/collections/string","str-to-num");
EXT(YcompilerSastYalternative_consequent,"compiler/ast","alternative-consequent");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Yprop_owner,"runtime/boot","prop-owner");
EXT(YLsingletonG,"runtime/boot","<singleton>");
EXT(YgooScollectionsSrangeYrange_by,"goo/collections/range","range-by");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YcompilerSastYLruntime_referenceG,"compiler/ast","<runtime-reference>");
EXT(YcompilerStopYload,"compiler/top","load");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YcompilerSastYfunction_data_refs,"compiler/ast","function-data-refs");
EXT(YgooScollectionsScollectionYLtabG,"goo/collections/collection","<tab>");
EXT(YcompilerSsyntaxYsexpr_signature_parameters,"compiler/syntax","sexpr-signature-parameters");
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
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YcompilerSastYmodule_name_to_relpath,"compiler/ast","module-name-to-relpath");
EXT(YgooScollectionsSmapYfab_map,"goo/collections/map","fab-map");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScollectionsScollectionYkey_test,"goo/collections/collection","key-test");
EXT(YruntimeSruntimeYdefault_handler,"runtime/runtime","default-handler");
EXT(YcompilerSastYbinding_value_setter,"compiler/ast","binding-value-setter");
EXT(YcompilerSastYLfix_letG,"compiler/ast","<fix-let>");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YcompilerSastYenvironment_module,"compiler/ast","environment-module");
EXT(YcompilerSastYfunction_self_recursiveQ_setter,"compiler/ast","function-self-recursive?-setter");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLseqG,"runtime/boot","<seq>");
EXT(YruntimeSruntimeYcondition_message,"runtime/runtime","condition-message");
EXT(Yprop_type,"runtime/boot","prop-type");
EXT(YLanyG,"runtime/boot","<any>");
EXT(YcompilerSastYload_module,"compiler/ast","load-module");
EXT(YcompilerSastYfunction_self_recursiveQ,"compiler/ast","function-self-recursive?");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YcompilerSastYfix_let_arguments_setter,"compiler/ast","fix-let-arguments-setter");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YruntimeSruntimeYloc_val_setter,"runtime/runtime","loc-val-setter");
EXT(YcompilerSastYobjectify_signature,"compiler/ast","objectify-signature");
EXT(YcompilerSastYLcomputed_programG,"compiler/ast","<computed-program>");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(Yclass_props,"runtime/boot","class-props");
EXT(YcompilerSastYalternative_condition,"compiler/ast","alternative-condition");
EXT(YDmax_int,"runtime/boot","$max-int");
EXT(YcompilerSastYdo_module_loader_modules,"compiler/ast","do-module-loader-modules");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSmagnitudeYL,"goo/magnitude","<");
EXT(YcompilerSastYbinding_locative,"compiler/ast","binding-locative");
EXT(YcompilerSastYprogram_type_setter,"compiler/ast","program-type-setter");
EXT(YPprop_unbound_error,"runtime/boot","%prop-unbound-error");
EXT(YgooScollectionsSassocYLassocsG,"goo/collections/assoc","<assocs>");
EXT(Yvec,"runtime/boot","vec");
EXT(YcompilerSastYfunction_naryQ,"compiler/ast","function-nary?");
EXT(YruntimeSruntimeYdescribe_condition,"runtime/runtime","describe-condition");
EXT(YcompilerSastYLreal_referenceG,"compiler/ast","<real-reference>");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooScollectionsSsequenceYdel_dups,"goo/collections/sequence","del-dups");
EXT(YgooScollectionsSbufferYLbufG,"goo/collections/buffer","<buf>");
EXT(YcompilerSastYbinding_inferred_type,"compiler/ast","binding-inferred-type");
EXT(YcompilerSastYas_lst,"compiler/ast","as-lst");
EXT(YgooScollectionsScollectionYkey_type,"goo/collections/collection","key-type");
EXT(Yfun_names,"runtime/boot","fun-names");
EXT(YcompilerSastYdo_static_global_bindings,"compiler/ast","do-static-global-bindings");
EXT(Yfind_setter,"runtime/boot","find-setter");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooScollectionsScollectionYfind_or,"goo/collections/collection","find-or");
EXT(YcompilerSastYLast_signatureG,"compiler/ast","<ast-signature>");
EXT(YcompilerStopYbt,"compiler/top","bt");
EXT(YgooScollectionsSsequenceYsub_setter,"goo/collections/sequence","sub-setter");
EXT(YcompilerSastYbinding_name,"compiler/ast","binding-name");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YcompilerSastYDgoo_boot_module_name,"compiler/ast","$goo-boot-module-name");
EXT(YcompilerSastYfix_let_body,"compiler/ast","fix-let-body");
EXT(YruntimeSruntimeYLhandlerG,"runtime/runtime","<handler>");
EXT(YgooSmathYE,"goo/math","=");
EXT(YcompilerSastYfix_let_arguments,"compiler/ast","fix-let-arguments");
EXT(YcompilerSastYbinding_value,"compiler/ast","binding-value");
EXT(YcompilerSastYLmodule_loaderG,"compiler/ast","<module-loader>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YcompilerSastYlocals_functions_setter,"compiler/ast","locals-functions-setter");
EXT(YcompilerSastYLlocal_referenceG,"compiler/ast","<local-reference>");
EXT(Ynil,"runtime/boot","nil");
EXT(YcompilerSastYLast_functionG,"compiler/ast","<ast-function>");
EXT(YcompilerSastYast_evaluate,"compiler/ast","ast-evaluate");
EXT(YcompilerSastYLglobal_boxG,"compiler/ast","<global-box>");
EXT(YLcolG,"runtime/boot","<col>");
EXT(YcompilerSastYfunction_temporaries_setter,"compiler/ast","function-temporaries-setter");
EXT(YLclassG,"runtime/boot","<class>");
EXT(YcompilerSastYfunction_signature,"compiler/ast","function-signature");
EXT(YcompilerSastYlocals_functions,"compiler/ast","locals-functions");
EXT(YcompilerSastYglobal_box_value_setter,"compiler/ast","global-box-value-setter");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
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
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YcompilerSastYLbindingG,"compiler/ast","<binding>");
EXT(YcompilerSastYbinding_global_box_setter,"compiler/ast","binding-global-box-setter");
EXT(YcompilerSastYLreferenceG,"compiler/ast","<reference>");
EXT(YcompilerSastYsignature_names_setter,"compiler/ast","signature-names-setter");
EXT(YruntimeSruntimeYalways,"runtime/runtime","always");
EXT(YruntimeSruntimeYhandler_function,"runtime/runtime","handler-function");
EXT(YcompilerSastYLglobal_assignmentG,"compiler/ast","<global-assignment>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScollectionsSbufferYlenSfill_setter,"goo/collections/buffer","len/fill-setter");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YcompilerSastYLdefinitionG,"compiler/ast","<definition>");
EXT(YcompilerSastYmonitor_handler,"compiler/ast","monitor-handler");
EXT(YgooScollectionsSsequenceYdel_vals,"goo/collections/sequence","del-vals");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YcompilerSastYapplication_knownQ_setter,"compiler/ast","application-known?-setter");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YcompilerSastYbinding_info_setter,"compiler/ast","binding-info-setter");
EXT(Ytail_setter,"runtime/boot","tail-setter");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScollectionsScollectionYfoldA,"goo/collections/collection","fold+");
EXT(YcompilerSastYsignature_arity,"compiler/ast","signature-arity");
EXT(YcompilerSastYfunction_temporaries,"compiler/ast","function-temporaries");
EXT(YruntimeSruntimeYcurry,"runtime/runtime","curry");
EXT(YcompilerSastYfunction_debug_name,"compiler/ast","function-debug-name");
EXT(YgooScollectionsStableYcase_insensitive_string_equal,"goo/collections/table","case-insensitive-string-equal");
EXT(YgooScollectionsScollectionYdo2,"goo/collections/collection","do2");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YgooScollectionsSstringYstr,"goo/collections/string","str");
EXT(YcompilerSastYruntime_environment,"compiler/ast","runtime-environment");
EXT(YcompilerSastYprogram_type,"compiler/ast","program-type");
EXT(YgooScollectionsScollectionYlow_elt_setter,"goo/collections/collection","low-elt-setter");
EXT(YcompilerSg2cYg2c_build_app,"compiler/g2c","g2c-build-app");
EXT(YLoptsG,"runtime/boot","<opts>");
EXT(Yfind_getter,"runtime/boot","find-getter");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Ytail,"runtime/boot","tail");
EXT(YgooScollectionsScollectionYelt_type,"goo/collections/collection","elt-type");
EXT(YcompilerSastYLraw_constantG,"compiler/ast","<raw-constant>");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YLsimple_handler_infoG,"runtime/boot","<simple-handler-info>");
EXT(YcompilerSastYfunction_free,"compiler/ast","function-free");
EXT(YgooScollectionsSsequenceYbelow,"goo/collections/sequence","below");
EXT(YgooScollectionsScollectionYLenumG,"goo/collections/collection","<enum>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YLtypeG,"runtime/boot","<type>");
EXT(Yord_app_mets,"runtime/boot","ord-app-mets");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YcompilerSastYinit_ast,"compiler/ast","init-ast");
EXT(YruntimeSruntimeYloc_val,"runtime/runtime","loc-val");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YLlocG,"runtime/boot","<loc>");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YcompilerSastYbinding_module_name,"compiler/ast","binding-module-name");
EXT(YgooScollectionsSbufferYpop_lastX,"goo/collections/buffer","pop-last!");
EXT(YcompilerSastYapplication_tailQ,"compiler/ast","application-tail?");
EXT(YgooScollectionsScollectionYfab,"goo/collections/collection","fab");
EXT(YcompilerSastYbinding_dottedQ,"compiler/ast","binding-dotted?");
EXT(Ytype_elts,"runtime/boot","type-elts");
EXT(YcompilerSastYmodule_binding,"compiler/ast","module-binding");
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
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(Yclass_name,"runtime/boot","class-name");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_3);
DEFLIT(lit_5);
DEFLIT(lit_9);
DEFLIT(lit_0);
DEFLIT(lit_6);
DEFLIT(lit_1);
DEFLIT(lit_10);
DEFLIT(lit_8);
DEFLIT(lit_7);
DEFLIT(lit_11);
DEFLIT(lit_4);
DEFLIT(lit_2);

/* FUNCTIONS: */

extern P YcompilerSmainY___main_0___ ();

/* FUNCTION CODES: */

P YcompilerSmainY___main_0___() {
  P T3,T2,T1,T0;
loop:
  lit_0 = YPsb((P)"0.114");
  VARSET(YcompilerSmainYTgoo_versionT,LITREF(lit_0));
  lit_1 = YPsb((P)"MAR 14, 2002");
  VARSET(YcompilerSmainYTgoo_dateT,LITREF(lit_1));
  lit_2 = YPsb((P)";;; GOO\n");
  CALL2(1,VARREF(YruntimeSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_2));
  lit_3 = YPsb((P)";;; JONATHAN BACHRACH\n");
  CALL2(1,VARREF(YruntimeSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_3));
  lit_4 = YPsb((P)";;; MIT AI Lab\n");
  CALL2(1,VARREF(YruntimeSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_4));
  lit_5 = YPsb((P)";;; %s\n");
  CALL3(1,VARREF(YruntimeSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_5),VARREF(YcompilerSmainYTgoo_dateT));
  lit_6 = YPsb((P)";;; \n");
  CALL2(1,VARREF(YruntimeSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_6));
  lit_7 = YPsb((P)";;; VERSION = %s\n");
  CALL3(1,VARREF(YruntimeSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_7),VARREF(YcompilerSmainYTgoo_versionT));
  lit_8 = YPsb((P)";;; ROOT    = %s\n");
  CALL3(1,VARREF(YruntimeSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_8),VARREF(YgooSsystemYTgoo_rootT));
  CALL0(1,VARREF(YcompilerSastYinit_ast));
  lit_9 = YPsb((P)"system-patches.goo");
  lit_10 = YPPsym((P)"goo/user");
  T0 = CALL1(1,VARREF(YgooSsystemYadd_src_path),LITREF(lit_9));
  CALL2(1,VARREF(YcompilerStopYload),T0,LITREF(lit_10));
  lit_11 = YPsb((P)"user-patches.goo");
  T1 = CALL1(1,VARREF(YgooSsystemYadd_src_path),LITREF(lit_11));
  CALL2(1,VARREF(YcompilerStopYload),T1,LITREF(lit_10));
  T3 = CALL1(1,VARREF(YcompilerStopYtop),LITREF(lit_10));
  T2 = T3;
  return T2;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSeval;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_compilerSast;
extern MODULE_INFO module_info_compilerStop;
extern MODULE_INFO module_info_compilerSg2c;
extern MODULE_INFO module_info_gooSuser;
extern MODULE_INFO module_info_runtimeSboot;
extern MODULE_INFO module_info_gooScollectionsStable;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScollectionsScollection;
extern MODULE_INFO module_info_gooScollectionsSsequence;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScollectionsSlist;
extern MODULE_INFO module_info_runtimeSruntime;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScollectionsSbuffer;
extern MODULE_INFO module_info_gooScollectionsSmap;
extern MODULE_INFO module_info_gooScollectionsSstring;
extern MODULE_INFO module_info_gooScollectionsSrange;
extern MODULE_INFO module_info_compilerSsyntax;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSmagnitude;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScollectionsSstep;
extern MODULE_INFO module_info_gooScollectionsSassoc;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSeval},
  {&module_info_gooSsystem},
  {&module_info_compilerSast},
  {&module_info_compilerStop},
  {&module_info_compilerSg2c},
  {&module_info_gooSuser},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"<program>", &module_info_compilerSast, "<program>"},
  {"loc", &module_info_runtimeSboot, "loc"},
  {"application-known?", &module_info_compilerSast, "application-known?"},
  {"<arguments>", &module_info_compilerSast, "<arguments>"},
  {"top", &module_info_compilerStop, "top"},
  {"<predefined-application>", &module_info_compilerSast, "<predefined-application>"},
  {"may-isa?", &module_info_runtimeSboot, "may-isa?"},
  {"tab-growth-threshold", &module_info_gooScollectionsStable, "tab-growth-threshold"},
  {"unwind-protect-protected-thunk", &module_info_compilerSast, "unwind-protect-protected-thunk"},
  {"fix-let-types-setter", &module_info_compilerSast, "fix-let-types-setter"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"floor", &module_info_gooSmath, "floor"},
  {"tab-growth-factor", &module_info_gooScollectionsStable, "tab-growth-factor"},
  {"report-undefined-global-bindings", &module_info_compilerSast, "report-undefined-global-bindings"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"$min-int", &module_info_runtimeSboot, "$min-int"},
  {"gen-add-met", &module_info_runtimeSboot, "gen-add-met"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"prop-setter", &module_info_runtimeSboot, "prop-setter"},
  {"unwind-protect-cleanup-thunk", &module_info_compilerSast, "unwind-protect-cleanup-thunk"},
  {"low-elt", &module_info_gooScollectionsScollection, "low-elt"},
  {"fun-val", &module_info_runtimeSboot, "fun-val"},
  {"map-keyed", &module_info_gooScollectionsScollection, "map-keyed"},
  {"def", &module_info_runtimeSboot, "def"},
  {"sub", &module_info_gooScollectionsSsequence, "sub"},
  {"<str-tab>", &module_info_gooScollectionsStable, "<str-tab>"},
  {"function-binding", &module_info_compilerSast, "function-binding"},
  {"items", &module_info_gooScollectionsScollection, "items"},
  {"len", &module_info_gooStypes, "len"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"reference-binding", &module_info_compilerSast, "reference-binding"},
  {"load-in", &module_info_compilerSast, "load-in"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"t<", &module_info_gooStypes, "t<"},
  {"isa", &module_info_runtimeSboot, "isa"},
  {"signature-value-setter", &module_info_compilerSast, "signature-value-setter"},
  {"class-ancestors", &module_info_runtimeSboot, "class-ancestors"},
  {"constant-index-setter", &module_info_compilerSast, "constant-index-setter"},
  {"fix-let-types", &module_info_compilerSast, "fix-let-types"},
  {"compile-time-program", &module_info_compilerSast, "compile-time-program"},
  {"esctst", &module_info_compilerStop, "esctst"},
  {"<list>", &module_info_gooScollectionsSlist, "<list>"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"condition-arguments", &module_info_runtimeSruntime, "condition-arguments"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"signature-nary?-setter", &module_info_compilerSast, "signature-nary?-setter"},
  {"parse-in", &module_info_compilerStop, "parse-in"},
  {"<serious-condition>", &module_info_runtimeSruntime, "<serious-condition>"},
  {"binding-mutable?", &module_info_compilerSast, "binding-mutable?"},
  {"binding-type", &module_info_compilerSast, "binding-type"},
  {"unchecked-runtime-environment", &module_info_compilerSast, "unchecked-runtime-environment"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"<flo>", &module_info_runtimeSboot, "<flo>"},
  {"for", &module_info_gooSmacros, "for"},
  {"<sym>", &module_info_runtimeSboot, "<sym>"},
  {"<ast-primitive-definition>", &module_info_compilerSast, "<ast-primitive-definition>"},
  {"add!", &module_info_gooScollectionsScollection, "add!"},
  {"met-app?", &module_info_runtimeSboot, "met-app?"},
  {"new", &module_info_runtimeSboot, "new"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"locals-bindings", &module_info_compilerSast, "locals-bindings"},
  {"fold", &module_info_gooScollectionsScollection, "fold"},
  {"fix-let-body-setter", &module_info_compilerSast, "fix-let-body-setter"},
  {"assignment-form-setter", &module_info_compilerSast, "assignment-form-setter"},
  {"objectify-quotation", &module_info_compilerSast, "objectify-quotation"},
  {"fun-mets", &module_info_runtimeSboot, "fun-mets"},
  {"frame-var", &module_info_compilerStop, "frame-var"},
  {"application-arguments", &module_info_compilerSast, "application-arguments"},
  {"install-initial-bindings", &module_info_compilerSast, "install-initial-bindings"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"%pair", &module_info_runtimeSboot, "%pair"},
  {"fix-let-bindings-setter", &module_info_compilerSast, "fix-let-bindings-setter"},
  {"==", &module_info_gooSmacros, "=="},
  {"<simple-error>", &module_info_runtimeSruntime, "<simple-error>"},
  {"do", &module_info_gooSmacros, "do"},
  {"<free-environment>", &module_info_compilerSast, "<free-environment>"},
  {"module-exports", &module_info_compilerSast, "module-exports"},
  {"id-hash", &module_info_gooScollectionsStable, "id-hash"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"add-prop", &module_info_runtimeSboot, "add-prop"},
  {"function-index-setter", &module_info_compilerSast, "function-index-setter"},
  {"<locals>", &module_info_compilerSast, "<locals>"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"g2c-top", &module_info_compilerSg2c, "g2c-top"},
  {"read", &module_info_runtimeSruntime, "read"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"elt-setter", &module_info_gooScollectionsScollection, "elt-setter"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"do-keyed", &module_info_gooScollectionsScollection, "do-keyed"},
  {"put", &module_info_gooSioSport, "put"},
  {"t=", &module_info_gooStypes, "t="},
  {"pick", &module_info_gooScollectionsSsequence, "pick"},
  {"-", &module_info_gooSmath, "-"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"<prop>", &module_info_runtimeSboot, "<prop>"},
  {"<constant>", &module_info_compilerSast, "<constant>"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"neg", &module_info_gooSmath, "neg"},
  {"function-index", &module_info_compilerSast, "function-index"},
  {"push-last!", &module_info_gooScollectionsSbuffer, "push-last!"},
  {"elts", &module_info_gooScollectionsScollection, "elts"},
  {"<monitor>", &module_info_compilerSast, "<monitor>"},
  {"/", &module_info_gooSmath, "/"},
  {"cat2", &module_info_gooScollectionsSsequence, "cat2"},
  {"function-body-setter", &module_info_compilerSast, "function-body-setter"},
  {"<gen>", &module_info_runtimeSboot, "<gen>"},
  {"function-signature-setter", &module_info_compilerSast, "function-signature-setter"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"isa?", &module_info_runtimeSboot, "isa?"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"<ast-generic>", &module_info_compilerSast, "<ast-generic>"},
  {"constant-index", &module_info_compilerSast, "constant-index"},
  {"<map>", &module_info_gooScollectionsSmap, "<map>"},
  {"find-environment-module", &module_info_compilerSast, "find-environment-module"},
  {"pop", &module_info_gooScollectionsSlist, "pop"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"case", &module_info_gooSmacros, "case"},
  {"tab-hash", &module_info_gooScollectionsStable, "tab-hash"},
  {"macro-expand", &module_info_runtimeSboot, "macro-expand"},
  {"function-body", &module_info_compilerSast, "function-body"},
  {"mem?", &module_info_gooScollectionsScollection, "mem?"},
  {"reference-called-function?-setter", &module_info_compilerSast, "reference-called-function?-setter"},
  {"dv", &module_info_runtimeSboot, "dv"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"<runtime-assignment>", &module_info_compilerSast, "<runtime-assignment>"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"rcurry", &module_info_runtimeSruntime, "rcurry"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"<regular-application>", &module_info_compilerSast, "<regular-application>"},
  {"num-to-str-base", &module_info_gooScollectionsSstring, "num-to-str-base"},
  {"set", &module_info_runtimeSboot, "set"},
  {"abs", &module_info_gooSmath, "abs"},
  {"fab-g2c-module", &module_info_compilerSast, "fab-g2c-module"},
  {"<int>", &module_info_runtimeSboot, "<int>"},
  {"<range>", &module_info_gooScollectionsSrange, "<range>"},
  {"<str>", &module_info_runtimeSboot, "<str>"},
  {"all?", &module_info_gooScollectionsScollection, "all?"},
  {"<programs>", &module_info_compilerSast, "<programs>"},
  {"fun-arity", &module_info_runtimeSboot, "fun-arity"},
  {"fun", &module_info_runtimeSboot, "fun"},
  {"eval", &module_info_compilerSsyntax, "eval"},
  {"signature-bindings-setter", &module_info_compilerSast, "signature-bindings-setter"},
  {"%prop", &module_info_runtimeSboot, "%prop"},
  {"module-loader-module-type", &module_info_compilerSast, "module-loader-module-type"},
  {"<error>", &module_info_runtimeSruntime, "<error>"},
  {"<bind-exit>", &module_info_compilerSast, "<bind-exit>"},
  {"as", &module_info_gooStypes, "as"},
  {"bound?", &module_info_runtimeSboot, "bound?"},
  {"fix-let-bindings", &module_info_compilerSast, "fix-let-bindings"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"%isa", &module_info_runtimeSboot, "%isa"},
  {"del", &module_info_gooScollectionsScollection, "del"},
  {"binding-dotted?-setter", &module_info_compilerSast, "binding-dotted?-setter"},
  {"reference-frame-number", &module_info_compilerSast, "reference-frame-number"},
  {"remove-modules-by-name!", &module_info_compilerSast, "remove-modules-by-name!"},
  {"find-binding", &module_info_compilerSast, "find-binding"},
  {"buf", &module_info_gooScollectionsSbuffer, "buf"},
  {"add", &module_info_gooScollectionsScollection, "add"},
  {"any2?", &module_info_gooScollectionsScollection, "any2?"},
  {"tup", &module_info_runtimeSboot, "tup"},
  {"binding-global-box", &module_info_compilerSast, "binding-global-box"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"identity", &module_info_runtimeSruntime, "identity"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"handler-info-message", &module_info_runtimeSboot, "handler-info-message"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"tab-gc-state", &module_info_gooScollectionsStable, "tab-gc-state"},
  {"open", &module_info_gooSioSport, "open"},
  {"<ast-primitive>", &module_info_compilerSast, "<ast-primitive>"},
  {"dp", &module_info_runtimeSboot, "dp"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"cat!", &module_info_gooScollectionsSsequence, "cat!"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"max", &module_info_gooSmagnitude, "max"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"monitor-test", &module_info_compilerSast, "monitor-test"},
  {"<global-reference>", &module_info_compilerSast, "<global-reference>"},
  {"ds", &module_info_runtimeSboot, "ds"},
  {"head-setter", &module_info_runtimeSboot, "head-setter"},
  {"type-class", &module_info_runtimeSboot, "type-class"},
  {"use", &module_info_runtimeSboot, "use"},
  {"assignment-reference", &module_info_compilerSast, "assignment-reference"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"<union>", &module_info_runtimeSboot, "<union>"},
  {"tab-shrink-threshold", &module_info_gooScollectionsStable, "tab-shrink-threshold"},
  {"now-setter", &module_info_gooScollectionsScollection, "now-setter"},
  {"<tup>", &module_info_runtimeSboot, "<tup>"},
  {"objectify-with-subtransaction", &module_info_compilerSast, "objectify-with-subtransaction"},
  {"function-registers-setter", &module_info_compilerSast, "function-registers-setter"},
  {"nxt", &module_info_gooScollectionsScollection, "nxt"},
  {"module-syntax-environment", &module_info_compilerSast, "module-syntax-environment"},
  {"application-binding", &module_info_compilerSast, "application-binding"},
  {"signature-value", &module_info_compilerSast, "signature-value"},
  {"~=", &module_info_gooSmath, "~="},
  {"popf", &module_info_gooSmacros, "popf"},
  {"$goo-runtime-module-name", &module_info_compilerSast, "$goo-runtime-module-name"},
  {"global-box-value", &module_info_compilerSast, "global-box-value"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"format", &module_info_runtimeSruntime, "format"},
  {"*print-base*", &module_info_gooScollectionsSstring, "*print-base*"},
  {"ct-also", &module_info_runtimeSboot, "ct-also"},
  {"fab-handler", &module_info_runtimeSruntime, "fab-handler"},
  {"environment-bindings", &module_info_compilerSast, "environment-bindings"},
  {"assignment-binding", &module_info_compilerSast, "assignment-binding"},
  {"head", &module_info_runtimeSboot, "head"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"elt-or", &module_info_gooScollectionsScollection, "elt-or"},
  {"function-bindings", &module_info_compilerSast, "function-bindings"},
  {"bind-exit-main-fun", &module_info_compilerSast, "bind-exit-main-fun"},
  {"<application>", &module_info_compilerSast, "<application>"},
  {"when", &module_info_gooSmacros, "when"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"<num>", &module_info_runtimeSboot, "<num>"},
  {"<vec>", &module_info_runtimeSboot, "<vec>"},
  {"prop-getter", &module_info_runtimeSboot, "prop-getter"},
  {"<local-binding>", &module_info_compilerSast, "<local-binding>"},
  {"in", &module_info_gooSioSport, "in"},
  {"binding-index", &module_info_compilerSast, "binding-index"},
  {"<local-assignment>", &module_info_compilerSast, "<local-assignment>"},
  {"monitor-info", &module_info_compilerSast, "monitor-info"},
  {"into", &module_info_gooScollectionsScollection, "into"},
  {"env-object-name", &module_info_compilerSast, "env-object-name"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"empty", &module_info_gooScollectionsScollection, "empty"},
  {"<alternative>", &module_info_compilerSast, "<alternative>"},
  {"binding-kind", &module_info_compilerSast, "binding-kind"},
  {"app-args", &module_info_runtimeSruntime, "app-args"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"def-list", &module_info_compilerSast, "def-list"},
  {"now-key", &module_info_gooScollectionsScollection, "now-key"},
  {"class-direct-props", &module_info_runtimeSboot, "class-direct-props"},
  {"function-debug-name-setter", &module_info_compilerSast, "function-debug-name-setter"},
  {"save-image", &module_info_compilerStop, "save-image"},
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
  {"g2c-ast", &module_info_compilerSg2c, "g2c-ast"},
  {"zap", &module_info_gooScollectionsScollection, "zap"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"min", &module_info_gooSmagnitude, "min"},
  {"prop-init", &module_info_runtimeSboot, "prop-init"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {"g2c-def-app", &module_info_compilerSg2c, "g2c-def-app"},
  {"map2", &module_info_gooScollectionsScollection, "map2"},
  {"fun-nary?", &module_info_runtimeSboot, "fun-nary?"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"%define-method", &module_info_runtimeSboot, "%define-method"},
  {"do-named-static-global-bindings", &module_info_compilerSast, "do-named-static-global-bindings"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"app", &module_info_gooSmacros, "app"},
  {"out", &module_info_gooSioSport, "out"},
  {"last", &module_info_gooScollectionsSsequence, "last"},
  {"<subclass>", &module_info_runtimeSboot, "<subclass>"},
  {"now", &module_info_gooScollectionsScollection, "now"},
  {"<static-global-environment>", &module_info_compilerSast, "<static-global-environment>"},
  {"function-free-setter", &module_info_compilerSast, "function-free-setter"},
  {"monitor-main-thunk", &module_info_compilerSast, "monitor-main-thunk"},
  {"read-file", &module_info_compilerStop, "read-file"},
  {"program-register-setter", &module_info_compilerSast, "program-register-setter"},
  {"while", &module_info_gooSmacros, "while"},
  {"g2c-exp", &module_info_compilerSg2c, "g2c-exp"},
  {"class-descendents", &module_info_runtimeSboot, "class-descendents"},
  {"t*", &module_info_gooStypes, "t*"},
  {"even?", &module_info_gooSmath, "even?"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"push", &module_info_gooScollectionsSlist, "push"},
  {"function-registers", &module_info_compilerSast, "function-registers"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"fin", &module_info_runtimeSboot, "fin"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"dc", &module_info_runtimeSboot, "dc"},
  {"binding-type-setter", &module_info_compilerSast, "binding-type-setter"},
  {"prop-value-setter", &module_info_runtimeSboot, "prop-value-setter"},
  {"1-", &module_info_gooSmath, "1-"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"<chr>", &module_info_runtimeSboot, "<chr>"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"<flat>", &module_info_runtimeSboot, "<flat>"},
  {"quasiquote", &module_info_runtimeSboot, "quasiquote"},
  {"handler-info-arguments", &module_info_runtimeSboot, "handler-info-arguments"},
  {"*", &module_info_gooSmath, "*"},
  {"module-name", &module_info_compilerSast, "module-name"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"subtype?", &module_info_runtimeSboot, "subtype?"},
  {"init-environment-for-eval", &module_info_compilerSast, "init-environment-for-eval"},
  {"not", &module_info_runtimeSboot, "not"},
  {"signature-bindings", &module_info_compilerSast, "signature-bindings"},
  {"signature-nary?", &module_info_compilerSast, "signature-nary?"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"<simple-condition>", &module_info_runtimeSruntime, "<simple-condition>"},
  {"app-filename", &module_info_runtimeSruntime, "app-filename"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"3rd", &module_info_gooScollectionsSsequence, "3rd"},
  {"g2c-clean", &module_info_compilerSg2c, "g2c-clean"},
  {"pos", &module_info_gooScollectionsSsequence, "pos"},
  {"function-source-setter", &module_info_compilerSast, "function-source-setter"},
  {"fill", &module_info_gooScollectionsScollection, "fill"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"~", &module_info_gooSmath, "~"},
  {"lst", &module_info_runtimeSboot, "lst"},
  {">=", &module_info_gooSmagnitude, ">="},
  {"<bound?>", &module_info_compilerSast, "<bound?>"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"~==", &module_info_gooSmath, "~=="},
  {"binding-native-to?", &module_info_compilerSast, "binding-native-to?"},
  {"map", &module_info_gooSmacros, "map"},
  {"sequentialize", &module_info_compilerSast, "sequentialize"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"assignment-form", &module_info_compilerSast, "assignment-form"},
  {"<immediate-constant>", &module_info_compilerSast, "<immediate-constant>"},
  {"t+", &module_info_gooStypes, "t+"},
  {"nul", &module_info_runtimeSboot, "nul"},
  {"fin?", &module_info_gooScollectionsScollection, "fin?"},
  {"error", &module_info_runtimeSboot, "error"},
  {">>", &module_info_gooSmath, ">>"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"function-value", &module_info_compilerSast, "function-value"},
  {"frame", &module_info_compilerStop, "frame"},
  {"ast-define-binding", &module_info_compilerSast, "ast-define-binding"},
  {"binding-inferred-type-setter", &module_info_compilerSast, "binding-inferred-type-setter"},
  {"set-module-environments", &module_info_compilerSast, "set-module-environments"},
  {"range", &module_info_gooScollectionsSrange, "range"},
  {"sig", &module_info_runtimeSruntime, "sig"},
  {"round/", &module_info_gooSmath, "round/"},
  {"compose", &module_info_runtimeSruntime, "compose"},
  {"<fun>", &module_info_runtimeSboot, "<fun>"},
  {"1+", &module_info_gooSmath, "1+"},
  {"locals-bindings-setter", &module_info_compilerSast, "locals-bindings-setter"},
  {"function-source", &module_info_compilerSast, "function-source"},
  {"match", &module_info_gooSmacros, "match"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"<compile-time>", &module_info_compilerSast, "<compile-time>"},
  {"<step>", &module_info_gooScollectionsSstep, "<step>"},
  {"prop-bound?", &module_info_runtimeSboot, "prop-bound?"},
  {"g2c-eval", &module_info_compilerStop, "g2c-eval"},
  {"first-then", &module_info_gooScollectionsSstep, "first-then"},
  {"dg", &module_info_runtimeSboot, "dg"},
  {"keys", &module_info_gooScollectionsScollection, "keys"},
  {"do-stack-frames", &module_info_compilerStop, "do-stack-frames"},
  {"auto-eval", &module_info_compilerStop, "auto-eval"},
  {"signature-arity-setter", &module_info_compilerSast, "signature-arity-setter"},
  {"%%macro", &module_info_runtimeSboot, "%%macro"},
  {"bound?-reference", &module_info_compilerSast, "bound?-reference"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"g2c-test", &module_info_compilerSg2c, "g2c-test"},
  {"<lst>", &module_info_runtimeSboot, "<lst>"},
  {"fab-class", &module_info_runtimeSboot, "fab-class"},
  {"^", &module_info_gooSmath, "^"},
  {"<log>", &module_info_runtimeSboot, "<log>"},
  {"backtrace", &module_info_compilerStop, "backtrace"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"signature-names", &module_info_compilerSast, "signature-names"},
  {"locals-body-setter", &module_info_compilerSast, "locals-body-setter"},
  {"fun-specs", &module_info_runtimeSboot, "fun-specs"},
  {"type-object", &module_info_runtimeSboot, "type-object"},
  {"try", &module_info_runtimeSboot, "try"},
  {"<handler-info>", &module_info_runtimeSruntime, "<handler-info>"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"binding-index-setter", &module_info_compilerSast, "binding-index-setter"},
  {"rev", &module_info_gooScollectionsSsequence, "rev"},
  {"<passive-program>", &module_info_compilerSast, "<passive-program>"},
  {"def-programs", &module_info_compilerSast, "def-programs"},
  {"constant-value", &module_info_compilerSast, "constant-value"},
  {"1st", &module_info_gooScollectionsSsequence, "1st"},
  {"enum", &module_info_gooScollectionsScollection, "enum"},
  {"quote", &module_info_runtimeSboot, "quote"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"binding-dynamic-extent?", &module_info_compilerSast, "binding-dynamic-extent?"},
  {"<=", &module_info_gooSmagnitude, "<="},
  {"locals-body", &module_info_compilerSast, "locals-body"},
  {"binding-dynamic-extent?-setter", &module_info_compilerSast, "binding-dynamic-extent?-setter"},
  {"function-data-refs-setter", &module_info_compilerSast, "function-data-refs-setter"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"find", &module_info_gooScollectionsScollection, "find"},
  {"application-function", &module_info_compilerSast, "application-function"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"handler-matches?", &module_info_runtimeSruntime, "handler-matches?"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"len-setter", &module_info_gooScollectionsSbuffer, "len-setter"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"fun-name", &module_info_runtimeSboot, "fun-name"},
  {"<module-binding>", &module_info_compilerSast, "<module-binding>"},
  {"dm", &module_info_runtimeSboot, "dm"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"str-to-num", &module_info_gooScollectionsSstring, "str-to-num"},
  {"alternative-consequent", &module_info_compilerSast, "alternative-consequent"},
  {"mod", &module_info_gooSmath, "mod"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"prop-owner", &module_info_runtimeSboot, "prop-owner"},
  {"<singleton>", &module_info_runtimeSboot, "<singleton>"},
  {"range-by", &module_info_gooScollectionsSrange, "range-by"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"<runtime-reference>", &module_info_compilerSast, "<runtime-reference>"},
  {"load", &module_info_compilerStop, "load"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"function-data-refs", &module_info_compilerSast, "function-data-refs"},
  {"<tab>", &module_info_gooScollectionsScollection, "<tab>"},
  {"sexpr-signature-parameters", &module_info_compilerSsyntax, "sexpr-signature-parameters"},
  {"signature-specs", &module_info_compilerSast, "signature-specs"},
  {"rem", &module_info_gooSmath, "rem"},
  {"prop-value", &module_info_runtimeSboot, "prop-value"},
  {"list", &module_info_gooScollectionsSlist, "list"},
  {"class-parents", &module_info_runtimeSboot, "class-parents"},
  {"$permanent-hash-state", &module_info_gooScollectionsStable, "$permanent-hash-state"},
  {">", &module_info_gooSmagnitude, ">"},
  {"program-register", &module_info_compilerSast, "program-register"},
  {"$default-handler-info", &module_info_runtimeSruntime, "$default-handler-info"},
  {"<unwind-protect>", &module_info_compilerSast, "<unwind-protect>"},
  {"environment-uses-modules", &module_info_compilerSast, "environment-uses-modules"},
  {"&", &module_info_gooSmath, "&"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"module-name-to-relpath", &module_info_compilerSast, "module-name-to-relpath"},
  {"fab-map", &module_info_gooScollectionsSmap, "fab-map"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"|", &module_info_gooSmath, "|"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"df", &module_info_runtimeSboot, "df"},
  {"key-test", &module_info_gooScollectionsScollection, "key-test"},
  {"default-handler", &module_info_runtimeSruntime, "default-handler"},
  {"binding-value-setter", &module_info_compilerSast, "binding-value-setter"},
  {"<fix-let>", &module_info_compilerSast, "<fix-let>"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"environment-module", &module_info_compilerSast, "environment-module"},
  {"function-self-recursive?-setter", &module_info_compilerSast, "function-self-recursive?-setter"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"<seq>", &module_info_runtimeSboot, "<seq>"},
  {"condition-message", &module_info_runtimeSruntime, "condition-message"},
  {"prop-type", &module_info_runtimeSboot, "prop-type"},
  {"<any>", &module_info_runtimeSboot, "<any>"},
  {"load-module", &module_info_compilerSast, "load-module"},
  {"function-self-recursive?", &module_info_compilerSast, "function-self-recursive?"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"rep", &module_info_runtimeSboot, "rep"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"fix-let-arguments-setter", &module_info_compilerSast, "fix-let-arguments-setter"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"loc-val-setter", &module_info_runtimeSruntime, "loc-val-setter"},
  {"objectify-signature", &module_info_compilerSast, "objectify-signature"},
  {"<computed-program>", &module_info_compilerSast, "<computed-program>"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"class-props", &module_info_runtimeSboot, "class-props"},
  {"alternative-condition", &module_info_compilerSast, "alternative-condition"},
  {"$max-int", &module_info_runtimeSboot, "$max-int"},
  {"do-module-loader-modules", &module_info_compilerSast, "do-module-loader-modules"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"<", &module_info_gooSmagnitude, "<"},
  {"binding-locative", &module_info_compilerSast, "binding-locative"},
  {"program-type-setter", &module_info_compilerSast, "program-type-setter"},
  {"%prop-unbound-error", &module_info_runtimeSboot, "%prop-unbound-error"},
  {"<assocs>", &module_info_gooScollectionsSassoc, "<assocs>"},
  {"vec", &module_info_runtimeSboot, "vec"},
  {"function-nary?", &module_info_compilerSast, "function-nary?"},
  {"describe-condition", &module_info_runtimeSruntime, "describe-condition"},
  {"<real-reference>", &module_info_compilerSast, "<real-reference>"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"del-dups", &module_info_gooScollectionsSsequence, "del-dups"},
  {"<buf>", &module_info_gooScollectionsSbuffer, "<buf>"},
  {"binding-inferred-type", &module_info_compilerSast, "binding-inferred-type"},
  {"as-lst", &module_info_compilerSast, "as-lst"},
  {"key-type", &module_info_gooScollectionsScollection, "key-type"},
  {"fun-names", &module_info_runtimeSboot, "fun-names"},
  {"do-static-global-bindings", &module_info_compilerSast, "do-static-global-bindings"},
  {"find-setter", &module_info_runtimeSboot, "find-setter"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"find-or", &module_info_gooScollectionsScollection, "find-or"},
  {"if", &module_info_runtimeSboot, "if"},
  {"ct", &module_info_runtimeSboot, "ct"},
  {"<ast-signature>", &module_info_compilerSast, "<ast-signature>"},
  {"bt", &module_info_compilerStop, "bt"},
  {"sub-setter", &module_info_gooScollectionsSsequence, "sub-setter"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"binding-name", &module_info_compilerSast, "binding-name"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"$goo-boot-module-name", &module_info_compilerSast, "$goo-boot-module-name"},
  {"fix-let-body", &module_info_compilerSast, "fix-let-body"},
  {"<handler>", &module_info_runtimeSruntime, "<handler>"},
  {"=", &module_info_gooSmath, "="},
  {"fix-let-arguments", &module_info_compilerSast, "fix-let-arguments"},
  {"binding-value", &module_info_compilerSast, "binding-value"},
  {"<module-loader>", &module_info_compilerSast, "<module-loader>"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"or", &module_info_gooSmacros, "or"},
  {"locals-functions-setter", &module_info_compilerSast, "locals-functions-setter"},
  {"<local-reference>", &module_info_compilerSast, "<local-reference>"},
  {"until", &module_info_gooSmacros, "until"},
  {"nil", &module_info_runtimeSboot, "nil"},
  {"<ast-function>", &module_info_compilerSast, "<ast-function>"},
  {"ast-evaluate", &module_info_compilerSast, "ast-evaluate"},
  {"<global-box>", &module_info_compilerSast, "<global-box>"},
  {"<col>", &module_info_runtimeSboot, "<col>"},
  {"function-temporaries-setter", &module_info_compilerSast, "function-temporaries-setter"},
  {"<class>", &module_info_runtimeSboot, "<class>"},
  {"function-signature", &module_info_compilerSast, "function-signature"},
  {"locals-functions", &module_info_compilerSast, "locals-functions"},
  {"global-box-value-setter", &module_info_compilerSast, "global-box-value-setter"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
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
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"<binding>", &module_info_compilerSast, "<binding>"},
  {"binding-global-box-setter", &module_info_compilerSast, "binding-global-box-setter"},
  {"<reference>", &module_info_compilerSast, "<reference>"},
  {"signature-names-setter", &module_info_compilerSast, "signature-names-setter"},
  {"always", &module_info_runtimeSruntime, "always"},
  {"handler-function", &module_info_runtimeSruntime, "handler-function"},
  {"<global-assignment>", &module_info_compilerSast, "<global-assignment>"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"len/fill-setter", &module_info_gooScollectionsSbuffer, "len/fill-setter"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"<definition>", &module_info_compilerSast, "<definition>"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"monitor-handler", &module_info_compilerSast, "monitor-handler"},
  {"del-vals", &module_info_gooScollectionsSsequence, "del-vals"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"application-known?-setter", &module_info_compilerSast, "application-known?-setter"},
  {"get", &module_info_gooSioSport, "get"},
  {"binding-info-setter", &module_info_compilerSast, "binding-info-setter"},
  {"tail-setter", &module_info_runtimeSboot, "tail-setter"},
  {"+", &module_info_gooSmath, "+"},
  {"<<", &module_info_gooSmath, "<<"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"fold+", &module_info_gooScollectionsScollection, "fold+"},
  {"seq", &module_info_runtimeSboot, "seq"},
  {"signature-arity", &module_info_compilerSast, "signature-arity"},
  {"function-temporaries", &module_info_compilerSast, "function-temporaries"},
  {"curry", &module_info_runtimeSruntime, "curry"},
  {"function-debug-name", &module_info_compilerSast, "function-debug-name"},
  {"case-insensitive-string-equal", &module_info_gooScollectionsStable, "case-insensitive-string-equal"},
  {"do2", &module_info_gooScollectionsScollection, "do2"},
  {"and", &module_info_gooSmacros, "and"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"str", &module_info_gooScollectionsSstring, "str"},
  {"runtime-environment", &module_info_compilerSast, "runtime-environment"},
  {"program-type", &module_info_compilerSast, "program-type"},
  {"low-elt-setter", &module_info_gooScollectionsScollection, "low-elt-setter"},
  {"esc", &module_info_runtimeSboot, "esc"},
  {"g2c-build-app", &module_info_compilerSg2c, "g2c-build-app"},
  {"<opts>", &module_info_runtimeSboot, "<opts>"},
  {"find-getter", &module_info_runtimeSboot, "find-getter"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"tail", &module_info_runtimeSboot, "tail"},
  {"elt-type", &module_info_gooScollectionsScollection, "elt-type"},
  {"<raw-constant>", &module_info_compilerSast, "<raw-constant>"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"<simple-handler-info>", &module_info_runtimeSboot, "<simple-handler-info>"},
  {"function-free", &module_info_compilerSast, "function-free"},
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
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"<loc>", &module_info_runtimeSboot, "<loc>"},
  {"close", &module_info_gooSioSport, "close"},
  {"binding-module-name", &module_info_compilerSast, "binding-module-name"},
  {"pop-last!", &module_info_gooScollectionsSbuffer, "pop-last!"},
  {"application-tail?", &module_info_compilerSast, "application-tail?"},
  {"fab", &module_info_gooScollectionsScollection, "fab"},
  {"binding-dotted?", &module_info_compilerSast, "binding-dotted?"},
  {"type-elts", &module_info_runtimeSboot, "type-elts"},
  {"module-binding", &module_info_compilerSast, "module-binding"},
  {"from", &module_info_gooScollectionsSrange, "from"},
  {"<ast-method>", &module_info_compilerSast, "<ast-method>"},
  {"assocs-test", &module_info_gooScollectionsSassoc, "assocs-test"},
  {"reference-frame-offset", &module_info_compilerSast, "reference-frame-offset"},
  {"round", &module_info_gooSmath, "round"},
  {"reference-called-function?", &module_info_compilerSast, "reference-called-function?"},
  {"<module-binding-reference>", &module_info_compilerSast, "<module-binding-reference>"},
  {"monitor-type", &module_info_compilerSast, "monitor-type"},
  {"reject", &module_info_gooScollectionsSsequence, "reject"},
  {"<assignment>", &module_info_compilerSast, "<assignment>"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"class-name", &module_info_runtimeSboot, "class-name"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"*goo-date*", &YcompilerSmainYTgoo_dateT},
  {"*goo-version*", &YcompilerSmainYTgoo_versionT},
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {NULL, NULL}
};

extern MODULE_INFO module_info_compilerSmain;
MODULE_INFO module_info_compilerSmain = {
  "compiler/main",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooSeval (void);
extern void load_module_gooSsystem (void);
extern void load_module_compilerSast (void);
extern void load_module_compilerStop (void);
extern void load_module_compilerSg2c (void);
extern void load_module_gooSuser (void);

/* EXPRESSION: */

extern void load_module_compilerSmain (void);

void load_module_compilerSmain (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSeval();
  load_module_gooSsystem();
  load_module_compilerSast();
  load_module_compilerStop();
  load_module_compilerSg2c();
  load_module_gooSuser();

  (P)YcompilerSmainY___main_0___();

}

/* END OF GENERATED CODE. */
