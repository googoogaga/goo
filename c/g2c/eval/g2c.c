/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: compiler/g2c */

EXT(YcompilerSastYLprogramG,"compiler/ast","<program>");
EXT(YcompilerSastYapplication_knownQ,"compiler/ast","application-known?");
EXT(YcompilerSastYLargumentsG,"compiler/ast","<arguments>");
EXT(YcompilerStopYtop,"compiler/top","top");
DEF(YcompilerSg2cYDnumber_call_templates,"compiler/g2c","$number-call-templates");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YcompilerSastYLpredefined_applicationG,"compiler/ast","<predefined-application>");
DEF(YcompilerSg2cYmodule_loader_appname,"compiler/g2c","module-loader-appname");
EXT(Ymay_isaQ,"runtime/boot","may-isa?");
EXT(YcompilerSastYglobal_box_value,"compiler/ast","global-box-value");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YcompilerSastYunwind_protect_protected_thunk,"compiler/ast","unwind-protect-protected-thunk");
EXT(YgooScollectionsStableYtab_growth_threshold,"goo/collections/table","tab-growth-threshold");
EXT(YcompilerSastYfix_let_types_setter,"compiler/ast","fix-let-types-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YcompilerSastYreport_undefined_global_bindings,"compiler/ast","report-undefined-global-bindings");
EXT(YgooScollectionsStableYtab_growth_factor,"goo/collections/table","tab-growth-factor");
DEF(YcompilerSg2cYpp,"compiler/g2c","pp");
DEF(YcompilerSg2cYgenerate_makefile,"compiler/g2c","generate-makefile");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
DEF(YcompilerSg2cYgenerate_function_forward,"compiler/g2c","generate-function-forward");
EXT(YDmin_int,"runtime/boot","$min-int");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Ygen_add_met,"runtime/boot","gen-add-met");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yprop_setter,"runtime/boot","prop-setter");
EXT(YcompilerSastYunwind_protect_cleanup_thunk,"compiler/ast","unwind-protect-cleanup-thunk");
EXT(Yfun_val,"runtime/boot","fun-val");
EXT(YgooScollectionsScollectionYlow_elt,"goo/collections/collection","low-elt");
EXT(YgooScollectionsScollectionYmap_keyed,"goo/collections/collection","map-keyed");
EXT(YgooScollectionsSsequenceYsub,"goo/collections/sequence","sub");
EXT(YgooScollectionsStableYLstr_tabG,"goo/collections/table","<str-tab>");
EXT(YcompilerSastYfunction_binding,"compiler/ast","function-binding");
EXT(YruntimeSruntimeYbuild_condition_for_handler_interactively,"runtime/runtime","build-condition-for-handler-interactively");
EXT(YgooScollectionsScollectionYitems,"goo/collections/collection","items");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
DEF(YcompilerSg2cYfalse_name,"compiler/g2c","false-name");
EXT(YcompilerSastYreference_binding,"compiler/ast","reference-binding");
DEF(YcompilerSg2cYgenerate_shadow_args,"compiler/g2c","generate-shadow-args");
EXT(YcompilerSastYload_in,"compiler/ast","load-in");
EXT(YgooStypesYtL,"goo/types","t<");
DEF(YcompilerSg2cYgenerate_global_binding,"compiler/g2c","generate-global-binding");
EXT(YcompilerSastYsignature_value_setter,"compiler/ast","signature-value-setter");
EXT(Yclass_ancestors,"runtime/boot","class-ancestors");
EXT(YcompilerSastYconstant_index_setter,"compiler/ast","constant-index-setter");
EXT(YcompilerSast_linearizeYast_contains_funQ,"compiler/ast-linearize","ast-contains-fun?");
EXT(YcompilerSastYLast_signatureG,"compiler/ast","<ast-signature>");
EXT(YcompilerSastYfix_let_types,"compiler/ast","fix-let-types");
EXT(YcompilerSast_linearizeYform_quotations,"compiler/ast-linearize","form-quotations");
EXT(YcompilerSastYcompile_time_program,"compiler/ast","compile-time-program");
EXT(YcompilerStopYesctst,"compiler/top","esctst");
EXT(YgooScollectionsSlistYLlistG,"goo/collections/list","<list>");
EXT(YgooSioSportYclose,"goo/io/port","close");
DEF(YcompilerSg2cYgen_fab_list,"compiler/g2c","gen-fab-list");
EXT(YruntimeSruntimeYcondition_arguments,"runtime/runtime","condition-arguments");
DEF(YcompilerSg2cYDmodule_marker,"compiler/g2c","$module-marker");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YcompilerSastYsignature_naryQ_setter,"compiler/ast","signature-nary?-setter");
EXT(YcompilerStopYparse_in,"compiler/top","parse-in");
EXT(YruntimeSruntimeYLserious_conditionG,"runtime/runtime","<serious-condition>");
EXT(YcompilerSastYbinding_mutableQ,"compiler/ast","binding-mutable?");
EXT(YPsnul,"runtime/boot","%snul");
EXT(YcompilerSastYbinding_type,"compiler/ast","binding-type");
EXT(YcompilerSastYunchecked_runtime_environment,"compiler/ast","unchecked-runtime-environment");
EXT(YgooScollectionsSsequenceYcat2,"goo/collections/sequence","cat2");
EXT(YgooScollectionsSrangeYfrom,"goo/collections/range","from");
EXT(YgooScollectionsStableYtab_growth_threshold_setter,"goo/collections/table","tab-growth-threshold-setter");
DEF(YcompilerSg2cYdeclare_imported_module_infos,"compiler/g2c","declare-imported-module-infos");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScollectionsStableYtab_growth_factor_setter,"goo/collections/table","tab-growth-factor-setter");
EXT(YLfloG,"runtime/boot","<flo>");
EXT(YLsymG,"runtime/boot","<sym>");
EXT(YcompilerSastYLast_primitive_definitionG,"compiler/ast","<ast-primitive-definition>");
EXT(Ymet_appQ,"runtime/boot","met-app?");
EXT(YgooScollectionsScollectionYaddX,"goo/collections/collection","add!");
EXT(YruntimeSruntimeYformat_to_string,"runtime/runtime","format-to-string");
EXT(Ynew,"runtime/boot","new");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YcompilerSastYlocals_bindings,"compiler/ast","locals-bindings");
DEF(YcompilerSg2cYdispatcherQ,"compiler/g2c","dispatcher?");
EXT(Yobject_parents,"runtime/boot","object-parents");
EXT(YcompilerSast_linearizeYLclosure_creationG,"compiler/ast-linearize","<closure-creation>");
EXT(YgooScollectionsScollectionYfold,"goo/collections/collection","fold");
DEF(YcompilerSg2cYDlocal_marker,"compiler/g2c","$local-marker");
EXT(YgooScollectionsStableYtab_gc_state,"goo/collections/table","tab-gc-state");
EXT(YcompilerSastYfix_let_body_setter,"compiler/ast","fix-let-body-setter");
DEF(YcompilerSg2cYfunshell_to_c,"compiler/g2c","funshell-to-c");
EXT(YcompilerSastYassignment_form_setter,"compiler/ast","assignment-form-setter");
EXT(YcompilerSastYobjectify_quotation,"compiler/ast","objectify-quotation");
EXT(YOisaQ,"runtime/boot","@isa?");
EXT(Yfun_mets,"runtime/boot","fun-mets");
EXT(YcompilerSastYapplication_arguments,"compiler/ast","application-arguments");
EXT(YcompilerStopYframe_var,"compiler/top","frame-var");
EXT(YcompilerSastYinstall_initial_bindings,"compiler/ast","install-initial-bindings");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YcompilerSastYfix_let_bindings_setter,"compiler/ast","fix-let-bindings-setter");
EXT(Ygen_src_setter,"runtime/boot","gen-src-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YruntimeSruntimeYLsimple_errorG,"runtime/runtime","<simple-error>");
EXT(YgooSmacrosYdo,"goo/macros","do");
DEF(YcompilerSg2cYgenerate_c_module,"compiler/g2c","generate-c-module");
EXT(YcompilerSastYLfree_environmentG,"compiler/ast","<free-environment>");
DEF(YcompilerSg2cYDmangles_data,"compiler/g2c","$mangles-data");
EXT(YcompilerSastYmodule_exports,"compiler/ast","module-exports");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooScollectionsStableYid_hash,"goo/collections/table","id-hash");
EXT(Yadd_prop,"runtime/boot","add-prop");
EXT(YcompilerSastYfunction_index_setter,"compiler/ast","function-index-setter");
EXT(YcompilerSastYLlocalsG,"compiler/ast","<locals>");
EXT(YgooScollectionsSzipYunzip,"goo/collections/zip","unzip");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YcompilerSast_linearizeYLtop_level_formG,"compiler/ast-linearize","<top-level-form>");
EXT(YruntimeSruntimeYread,"runtime/runtime","read");
DEF(YcompilerSg2cYmodule_src_file_setter,"compiler/g2c","module-src-file-setter");
EXT(YcompilerSastYbinding_value_setter,"compiler/ast","binding-value-setter");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScollectionsScollectionYdo_keyed,"goo/collections/collection","do-keyed");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScollectionsSsequenceYpick,"goo/collections/sequence","pick");
EXT(YgooSmacrosYpair,"goo/macros","pair");
DEF(YcompilerSg2cYgen_result,"compiler/g2c","gen-result");
EXT(YLpropG,"runtime/boot","<prop>");
EXT(YcompilerSastYLconstantG,"compiler/ast","<constant>");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YcompilerSastYfunction_index,"compiler/ast","function-index");
EXT(YgooScollectionsSbufferYpush_lastX,"goo/collections/buffer","push-last!");
EXT(YcompilerSastYLmonitorG,"compiler/ast","<monitor>");
EXT(YgooScollectionsScollectionYelts,"goo/collections/collection","elts");
EXT(YgooSmathYS,"goo/math","/");
EXT(YcompilerSastYfunction_body_setter,"compiler/ast","function-body-setter");
EXT(YcompilerSastYLraw_constantG,"compiler/ast","<raw-constant>");
EXT(YLgenG,"runtime/boot","<gen>");
EXT(YcompilerSastYfunction_signature_setter,"compiler/ast","function-signature-setter");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YcompilerSastYassignment_reference,"compiler/ast","assignment-reference");
EXT(YgooSmathYDe,"goo/math","$e");
DEF(YcompilerSg2cYmangle_integer,"compiler/g2c","mangle-integer");
EXT(Ygen_src,"runtime/boot","gen-src");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
DEF(YcompilerSg2cYmangle_raw_name,"compiler/g2c","mangle-raw-name");
EXT(YcompilerSast_linearizeYprogram_form,"compiler/ast-linearize","program-form");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(Yobject_props,"runtime/boot","object-props");
EXT(YisaQ,"runtime/boot","isa?");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YcompilerSastYLast_genericG,"compiler/ast","<ast-generic>");
DEF(YcompilerSg2cYTg2c_appT,"compiler/g2c","*g2c-app*");
EXT(YcompilerSastYconstant_index,"compiler/ast","constant-index");
DEF(YcompilerSg2cYgenerate_functions,"compiler/g2c","generate-functions");
DEF(YcompilerSg2cYDnumber_characters,"compiler/g2c","$number-characters");
DEF(YcompilerSg2cYgenerate_function_binding,"compiler/g2c","generate-function-binding");
EXT(YPsymbols,"runtime/boot","%symbols");
EXT(YcompilerSastYfind_environment_module,"compiler/ast","find-environment-module");
EXT(YgooScollectionsSlistYpop,"goo/collections/list","pop");
EXT(YgooSmathYtrunc,"goo/math","trunc");
DEF(YcompilerSg2cYTdynamic_linkingQT,"compiler/g2c","*dynamic-linking?*");
EXT(YgooScollectionsStableYtab_hash,"goo/collections/table","tab-hash");
EXT(YcompilerSastYfunction_body,"compiler/ast","function-body");
EXT(YcompilerSastYreference_called_functionQ_setter,"compiler/ast","reference-called-function?-setter");
EXT(YgooScollectionsScollectionYmemQ,"goo/collections/collection","mem?");
EXT(YruntimeSruntimeYdescribe_handler,"runtime/runtime","describe-handler");
DEF(YcompilerSg2cYgenerate_quotation,"compiler/g2c","generate-quotation");
DEF(YcompilerSg2cYto_c,"compiler/g2c","to-c");
EXT(YcompilerSastYLruntime_assignmentG,"compiler/ast","<runtime-assignment>");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
DEF(YcompilerSg2cYgenerate_header,"compiler/g2c","generate-header");
EXT(YruntimeSruntimeYrcurry,"runtime/runtime","rcurry");
EXT(YcompilerSastYLregular_applicationG,"compiler/ast","<regular-application>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScollectionsSstringYnum_to_str_base,"goo/collections/string","num-to-str-base");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YcompilerSastYfab_g2c_module,"compiler/ast","fab-g2c-module");
EXT(Ysig_naryQ,"runtime/boot","sig-nary?");
EXT(YPwith_monitor,"runtime/boot","%with-monitor");
EXT(YLintG,"runtime/boot","<int>");
EXT(YgooScollectionsSrangeYLrangeG,"goo/collections/range","<range>");
EXT(YLstrG,"runtime/boot","<str>");
DEF(YcompilerSg2cYso_load,"compiler/g2c","so-load");
DEF(YcompilerSg2cYTmangle_bufferT,"compiler/g2c","*mangle-buffer*");
DEF(YcompilerSg2cYmangle_name_into,"compiler/g2c","mangle-name-into");
EXT(YcompilerSastYLprogramsG,"compiler/ast","<programs>");
EXT(YgooScollectionsScollectionYallQ,"goo/collections/collection","all?");
EXT(Yfun_arity,"runtime/boot","fun-arity");
EXT(YgooScollectionsScollectionYrange_error,"goo/collections/collection","range-error");
EXT(YcompilerSsyntaxYeval,"compiler/syntax","eval");
EXT(YcompilerSastYsignature_bindings_setter,"compiler/ast","signature-bindings-setter");
EXT(YPprop,"runtime/boot","%prop");
EXT(YruntimeSruntimeYchoose_handler,"runtime/runtime","choose-handler");
EXT(YruntimeSruntimeYLerrorG,"runtime/runtime","<error>");
EXT(YruntimeSruntimeYspread,"runtime/runtime","spread");
EXT(YcompilerSastYLbind_exitG,"compiler/ast","<bind-exit>");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooScollectionsSlistYassq,"goo/collections/list","assq");
EXT(YcompilerSastYfix_let_bindings,"compiler/ast","fix-let-bindings");
DEF(YcompilerSg2cYfuninit_to_c,"compiler/g2c","funinit-to-c");
EXT(YgooScollectionsScollectionYelt_or,"goo/collections/collection","elt-or");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScollectionsScollectionYelt_setter,"goo/collections/collection","elt-setter");
EXT(YPisa,"runtime/boot","%isa");
EXT(YgooScollectionsScollectionYdel,"goo/collections/collection","del");
EXT(YcompilerSastYbinding_dottedQ_setter,"compiler/ast","binding-dotted?-setter");
EXT(YcompilerSastYreference_frame_number,"compiler/ast","reference-frame-number");
EXT(YgooScollectionsScollectionYLenumG,"goo/collections/collection","<enum>");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YcompilerSastYremove_modules_by_nameX,"compiler/ast","remove-modules-by-name!");
EXT(YcompilerSastYfind_binding,"compiler/ast","find-binding");
EXT(YgooScollectionsSbufferYbuf,"goo/collections/buffer","buf");
DEF(YcompilerSg2cYmangle_local_marked_name,"compiler/g2c","mangle-local-marked-name");
EXT(YgooScollectionsScollectionYadd,"goo/collections/collection","add");
EXT(Ytup,"runtime/boot","tup");
EXT(YgooScollectionsScollectionYany2Q,"goo/collections/collection","any2?");
EXT(YTmacros_okQT,"runtime/boot","*macros-ok?*");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
DEF(YcompilerSg2cYDhygiene_marker,"compiler/g2c","$hygiene-marker");
EXT(YruntimeSruntimeYidentity,"runtime/runtime","identity");
EXT(Yhandler_info_message,"runtime/boot","handler-info-message");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YcompilerSastYLast_primitiveG,"compiler/ast","<ast-primitive>");
DEF(YcompilerSg2cYmodule_info_name,"compiler/g2c","module-info-name");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScollectionsSsequenceYcatX,"goo/collections/sequence","cat!");
EXT(YLreplace_generic_restartG,"runtime/boot","<replace-generic-restart>");
EXT(Ysig_unification_vars,"runtime/boot","sig-unification-vars");
EXT(YgooSmathYas_log,"goo/math","as-log");
DEF(YcompilerSg2cYmodule_mtime_setter,"compiler/g2c","module-mtime-setter");
DEF(YcompilerSg2cYDhygiene_char,"compiler/g2c","$hygiene-char");
EXT(YcompilerSastYmonitor_test,"compiler/ast","monitor-test");
EXT(Yhead_setter,"runtime/boot","head-setter");
EXT(Ytype_class,"runtime/boot","type-class");
EXT(Yunexec,"runtime/boot","unexec");
EXT(Yfun_sig_setter,"runtime/boot","fun-sig-setter");
EXT(Yincongruent_method_error,"runtime/boot","incongruent-method-error");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YLunionG,"runtime/boot","<union>");
EXT(YcompilerSast_linearizeYanalyze_calls,"compiler/ast-linearize","analyze-calls");
DEF(YcompilerSg2cYDname_mangler_table,"compiler/g2c","$name-mangler-table");
EXT(YgooScollectionsStableYtab_shrink_threshold,"goo/collections/table","tab-shrink-threshold");
DEF(YcompilerSg2cYcompute_program,"compiler/g2c","compute-program");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YLtupG,"runtime/boot","<tup>");
EXT(YgooScollectionsScollectionYnow_setter,"goo/collections/collection","now-setter");
EXT(YcompilerSast_linearizeYcollect_temporariesX,"compiler/ast-linearize","collect-temporaries!");
EXT(YcompilerSastYobjectify_with_subtransaction,"compiler/ast","objectify-with-subtransaction");
EXT(YcompilerSastYfunction_registers_setter,"compiler/ast","function-registers-setter");
EXT(YgooScollectionsSsequenceYinsX,"goo/collections/sequence","ins!");
EXT(YcompilerSast_linearizeYLbox_readG,"compiler/ast-linearize","<box-read>");
EXT(YcompilerSast_linearizeYclosure_creation_index,"compiler/ast-linearize","closure-creation-index");
EXT(YgooScollectionsScollectionYnxt,"goo/collections/collection","nxt");
DEF(YcompilerSg2cYgenerate_function_code,"compiler/g2c","generate-function-code");
EXT(YcompilerSastYmodule_syntax_environment,"compiler/ast","module-syntax-environment");
EXT(YcompilerSastYapplication_binding,"compiler/ast","application-binding");
EXT(YcompilerSastYsignature_value,"compiler/ast","signature-value");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YcompilerSastYDgoo_runtime_module_name,"compiler/ast","$goo-runtime-module-name");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
DEF(YcompilerSg2cYgenerate_module_info,"compiler/g2c","generate-module-info");
EXT(YruntimeSruntimeYformat,"runtime/runtime","format");
EXT(YcompilerSast_linearizeYprogram_quotations,"compiler/ast-linearize","program-quotations");
EXT(YgooScollectionsSstringYTprint_baseT,"goo/collections/string","*print-base*");
EXT(YcompilerSast_linearizeYanalyze_dynamic_extent,"compiler/ast-linearize","analyze-dynamic-extent");
EXT(YgooScollectionsSstringsYstring_repeat,"goo/collections/strings","string-repeat");
EXT(Yhead,"runtime/boot","head");
DEF(YcompilerSg2cYgenerate_self_recursive_call,"compiler/g2c","generate-self-recursive-call");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YcompilerSastYfunction_bindings,"compiler/ast","function-bindings");
EXT(YcompilerSastYbind_exit_main_fun,"compiler/ast","bind-exit-main-fun");
EXT(YcompilerSastYLapplicationG,"compiler/ast","<application>");
EXT(Ykeyboard_interrupt,"runtime/boot","keyboard-interrupt");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YLnumG,"runtime/boot","<num>");
EXT(YLvecG,"runtime/boot","<vec>");
EXT(YgooScollectionsStableYLsetG,"goo/collections/table","<set>");
EXT(YgooSmagnitudeYmax,"goo/magnitude","max");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(Yprop_getter,"runtime/boot","prop-getter");
EXT(YcompilerSastYLlocal_bindingG,"compiler/ast","<local-binding>");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YcompilerSastYbinding_index,"compiler/ast","binding-index");
EXT(YgooSioSportYin,"goo/io/port","in");
DEF(YcompilerSg2cYcompute_ast,"compiler/g2c","compute-ast");
EXT(YruntimeSruntimeYfab_handler,"runtime/runtime","fab-handler");
DEF(YcompilerSg2cYgenerate_global_environment,"compiler/g2c","generate-global-environment");
EXT(YTboot_macro_namesT,"runtime/boot","*boot-macro-names*");
DEF(YcompilerSg2cYmodule_src_file,"compiler/g2c","module-src-file");
DEF(YcompilerSg2cYgenerate_closure_structure,"compiler/g2c","generate-closure-structure");
EXT(YcompilerSastYLlocal_assignmentG,"compiler/ast","<local-assignment>");
EXT(YcompilerSastYmonitor_info,"compiler/ast","monitor-info");
EXT(YgooScollectionsScollectionYinto,"goo/collections/collection","into");
EXT(YcompilerSastYenv_object_name,"compiler/ast","env-object-name");
EXT(YgooScollectionsScollectionYempty,"goo/collections/collection","empty");
EXT(YcompilerSastYLalternativeG,"compiler/ast","<alternative>");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YcompilerSastYbinding_kind,"compiler/ast","binding-kind");
EXT(YruntimeSruntimeYapp_args,"runtime/runtime","app-args");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YcompilerSast_linearizeYreference_selfQ,"compiler/ast-linearize","reference-self?");
EXT(YcompilerSast_linearizeYform_definitions,"compiler/ast-linearize","form-definitions");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooScollectionsScollectionYnow_key,"goo/collections/collection","now-key");
EXT(Yclass_direct_props,"runtime/boot","class-direct-props");
EXT(YgooScollectionsSzipYLzipG,"goo/collections/zip","<zip>");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(YcompilerStopYsave_image,"compiler/top","save-image");
EXT(YgooSioSwriteYdisplay,"goo/io/write","display");
EXT(YcompilerSastYLast_macro_definitionG,"compiler/ast","<ast-macro-definition>");
DEF(YcompilerSg2cYDescape_separator,"compiler/g2c","$escape-separator");
EXT(YcompilerSastYLsequentialG,"compiler/ast","<sequential>");
EXT(YcompilerSastYenvironment_bindings,"compiler/ast","environment-bindings");
EXT(YgooSmathYacos,"goo/math","acos");
DEF(YcompilerSg2cYg2c_top,"compiler/g2c","g2c-top");
EXT(YcompilerSastYfree_environment,"compiler/ast","free-environment");
EXT(YLmetG,"runtime/boot","<met>");
EXT(YruntimeSruntimeYLconditionG,"runtime/runtime","<condition>");
EXT(YcompilerSastYLmoduleG,"compiler/ast","<module>");
DEF(YcompilerSg2cYg2c_ast,"compiler/g2c","g2c-ast");
EXT(YgooScollectionsScollectionYzap,"goo/collections/collection","zap");
EXT(YcompilerSast_linearizeYLrenamed_local_bindingG,"compiler/ast-linearize","<renamed-local-binding>");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooScollectionsSbufferYlen_setter,"goo/collections/buffer","len-setter");
EXT(YgooStypesYtA,"goo/types","t+");
DEF(YcompilerSg2cYmangle_local_name,"compiler/g2c","mangle-local-name");
EXT(YcompilerSast_linearizeYLfree_referenceG,"compiler/ast-linearize","<free-reference>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
DEF(YcompilerSg2cYout_list_builder,"compiler/g2c","out-list-builder");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YcompilerSast_linearizeYregister_allocateX,"compiler/ast-linearize","register-allocate!");
DEF(YcompilerSg2cYgenerate_c_application,"compiler/g2c","generate-c-application");
EXT(YgooSmagnitudeYmin,"goo/magnitude","min");
EXT(Yprop_init,"runtime/boot","prop-init");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
DEF(YcompilerSg2cYg2c_def_app,"compiler/g2c","g2c-def-app");
EXT(Yfun_naryQ,"runtime/boot","fun-nary?");
EXT(YcompilerSastYdo_named_static_global_bindings,"compiler/ast","do-named-static-global-bindings");
EXT(YruntimeSruntimeYinvoke_handler_interactively,"runtime/runtime","invoke-handler-interactively");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScollectionsSsequenceYlast,"goo/collections/sequence","last");
EXT(YLsubclassG,"runtime/boot","<subclass>");
EXT(YgooScollectionsScollectionYnow,"goo/collections/collection","now");
EXT(YcompilerSastYLstatic_global_environmentG,"compiler/ast","<static-global-environment>");
DEF(YcompilerSg2cYmangle_global_name,"compiler/g2c","mangle-global-name");
EXT(YcompilerSast_linearizeYliftX,"compiler/ast-linearize","lift!");
EXT(YcompilerSastYfunction_free_setter,"compiler/ast","function-free-setter");
EXT(YcompilerStopYread_file,"compiler/top","read-file");
DEF(YcompilerSg2cYgenerate_main,"compiler/g2c","generate-main");
EXT(YcompilerSastYprogram_register_setter,"compiler/ast","program-register-setter");
DEF(YcompilerSg2cYg2c_exp,"compiler/g2c","g2c-exp");
EXT(Yclass_descendents,"runtime/boot","class-descendents");
EXT(YruntimeSruntimeYLrestartG,"runtime/runtime","<restart>");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooScollectionsStableYtab_shrink_threshold_setter,"goo/collections/table","tab-shrink-threshold-setter");
EXT(YcompilerSast_linearizeYLbox_creationG,"compiler/ast-linearize","<box-creation>");
DEF(YcompilerSg2cYTregisters_per_lineT,"compiler/g2c","*registers-per-line*");
EXT(YgooSmathYevenQ,"goo/math","even?");
DEF(YcompilerSg2cYgenerate_function_bodies,"compiler/g2c","generate-function-bodies");
EXT(Ygen_refs_setter,"runtime/boot","gen-refs-setter");
EXT(YgooScollectionsSlistYpush,"goo/collections/list","push");
EXT(YcompilerSastYfunction_registers,"compiler/ast","function-registers");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScollectionsSstringYascii_limit,"goo/collections/string","ascii-limit");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
DEF(YcompilerSg2cYDc_escapes,"compiler/g2c","$c-escapes");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YcompilerSast_linearizeYreference_offset,"compiler/ast-linearize","reference-offset");
DEF(YcompilerSg2cYmodule_up_to_dateQ,"compiler/g2c","module-up-to-date?");
EXT(YcompilerSastYbinding_type_setter,"compiler/ast","binding-type-setter");
DEF(YcompilerSg2cYcompile_load,"compiler/g2c","compile-load");
EXT(Yprop_value_setter,"runtime/boot","prop-value-setter");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScollectionsScollectionYfinQ,"goo/collections/collection","fin?");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YLchrG,"runtime/boot","<chr>");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YLflatG,"runtime/boot","<flat>");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(Yhandler_info_arguments,"runtime/boot","handler-info-arguments");
EXT(Ytype_error,"runtime/boot","type-error");
EXT(YgooSmathYT,"goo/math","*");
DEF(YcompilerSg2cYDmin_character_code,"compiler/g2c","$min-character-code");
EXT(YcompilerSastYmodule_name,"compiler/ast","module-name");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YsubtypeQ,"runtime/boot","subtype?");
DEF(YcompilerSg2cYmodule_init_name,"compiler/g2c","module-init-name");
EXT(Ygen_refs,"runtime/boot","gen-refs");
EXT(YcompilerSastYinit_environment_for_eval,"compiler/ast","init-environment-for-eval");
EXT(Ynot,"runtime/boot","not");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YcompilerSastYsignature_bindings,"compiler/ast","signature-bindings");
EXT(YcompilerSastYsignature_naryQ,"compiler/ast","signature-nary?");
DEF(YcompilerSg2cYgenerate_function_specs,"compiler/g2c","generate-function-specs");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YruntimeSruntimeYLsimple_conditionG,"runtime/runtime","<simple-condition>");
EXT(YruntimeSruntimeYapp_filename,"runtime/runtime","app-filename");
EXT(YcompilerSastYmonitor_main_thunk,"compiler/ast","monitor-main-thunk");
EXT(YgooScollectionsSsequenceY3rd,"goo/collections/sequence","3rd");
DEF(YcompilerSg2cYg2c_clean,"compiler/g2c","g2c-clean");
EXT(YgooScollectionsSsequenceYpos,"goo/collections/sequence","pos");
EXT(YcompilerSastYfunction_source_setter,"compiler/ast","function-source-setter");
EXT(YcompilerSast_linearizeYupdate_walkX,"compiler/ast-linearize","update-walk!");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScollectionsScollectionYfill,"goo/collections/collection","fill");
EXT(YgooScollectionsSlistYassqn,"goo/collections/list","assqn");
EXT(Yfab_sym,"runtime/boot","fab-sym");
DEF(YcompilerSg2cYmangle_module_binding,"compiler/g2c","mangle-module-binding");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ylst,"runtime/boot","lst");
EXT(YgooSmagnitudeYGE,"goo/magnitude",">=");
EXT(YruntimeSruntimeYbuild_condition_interactively,"runtime/runtime","build-condition-interactively");
EXT(YgooSmathYmod,"goo/math","mod");
DEF(YcompilerSg2cYTtrace_registersQT,"compiler/g2c","*trace-registers?*");
EXT(Ysig_specs,"runtime/boot","sig-specs");
EXT(YOlst,"runtime/boot","@lst");
EXT(YcompilerSastYLboundQG,"compiler/ast","<bound?>");
EXT(YcompilerSast_linearizeYcollect_registersX,"compiler/ast-linearize","collect-registers!");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YcompilerSastYbinding_native_toQ,"compiler/ast","binding-native-to?");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScollectionsSassocYassocs_test_setter,"goo/collections/assoc","assocs-test-setter");
EXT(YgooScollectionsSstringYascii_whitespaces,"goo/collections/string","ascii-whitespaces");
EXT(YcompilerSastYsequentialize,"compiler/ast","sequentialize");
EXT(YcompilerSastYassignment_form,"compiler/ast","assignment-form");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YcompilerSastYLimmediate_constantG,"compiler/ast","<immediate-constant>");
EXT(Ynul,"runtime/boot","nul");
EXT(Yerror,"runtime/boot","error");
EXT(YLsingletonG,"runtime/boot","<singleton>");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YcompilerSastYfunction_value,"compiler/ast","function-value");
DEF(YcompilerSg2cYgenerate_trailer,"compiler/g2c","generate-trailer");
EXT(YcompilerSastYast_define_binding,"compiler/ast","ast-define-binding");
EXT(YcompilerStopYframe,"compiler/top","frame");
EXT(YcompilerSastYbinding_inferred_type_setter,"compiler/ast","binding-inferred-type-setter");
EXT(YcompilerSastYset_module_environments,"compiler/ast","set-module-environments");
EXT(YcompilerSast_linearizeYextract_thingsX,"compiler/ast-linearize","extract-things!");
EXT(YgooScollectionsSrangeYrange,"goo/collections/range","range");
DEF(YcompilerSg2cYbinding_Gc,"compiler/g2c","binding->c");
DEF(YcompilerSg2cYgen_depth,"compiler/g2c","gen-depth");
EXT(YruntimeSruntimeYsig,"runtime/runtime","sig");
EXT(YruntimeSruntimeYcompose,"runtime/runtime","compose");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLfunG,"runtime/boot","<fun>");
EXT(YgooScollectionsSsequenceYins,"goo/collections/sequence","ins");
DEF(YcompilerSg2cYTtmp_file_counterT,"compiler/g2c","*tmp-file-counter*");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScollectionsSzipYzip,"goo/collections/zip","zip");
EXT(YcompilerSastYlocals_bindings_setter,"compiler/ast","locals-bindings-setter");
EXT(YcompilerSastYfunction_source,"compiler/ast","function-source");
DEF(YcompilerSg2cYmodule_mtime,"compiler/g2c","module-mtime");
DEF(YcompilerSg2cYfloat_to_c_string,"compiler/g2c","float-to-c-string");
DEF(YcompilerSg2cYDlocal_suffix,"compiler/g2c","$local-suffix");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YcompilerSastYLcompile_timeG,"compiler/ast","<compile-time>");
EXT(YTboot_macro_expandersT,"runtime/boot","*boot-macro-expanders*");
EXT(YgooScollectionsSstepYLstepG,"goo/collections/step","<step>");
EXT(Yprop_boundQ,"runtime/boot","prop-bound?");
EXT(YcompilerSast_linearizeYflatten_seqs,"compiler/ast-linearize","flatten-seqs");
EXT(YcompilerStopYg2c_eval,"compiler/top","g2c-eval");
EXT(YgooScollectionsSstepYfirst_then,"goo/collections/step","first-then");
EXT(YcompilerStopYauto_eval,"compiler/top","auto-eval");
EXT(YcompilerStopYdo_stack_frames,"compiler/top","do-stack-frames");
DEF(YcompilerSg2cYTdefinitionsT,"compiler/g2c","*definitions*");
EXT(Yfile_opening_error,"runtime/boot","file-opening-error");
EXT(YgooScollectionsSsequenceYdo_key_vals,"goo/collections/sequence","do-key-vals");
EXT(YcompilerSastYsignature_arity_setter,"compiler/ast","signature-arity-setter");
EXT(YPPmacro,"runtime/boot","%%macro");
EXT(YcompilerSastYboundQ_reference,"compiler/ast","bound?-reference");
EXT(Ysig_val,"runtime/boot","sig-val");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YcompilerSast_linearizeYclosurize_mainX,"compiler/ast-linearize","closurize-main!");
EXT(YLlstG,"runtime/boot","<lst>");
EXT(Yfab_class,"runtime/boot","fab-class");
EXT(YLlogG,"runtime/boot","<log>");
EXT(YgooSmathYC,"goo/math","^");
EXT(YcompilerStopYbacktrace,"compiler/top","backtrace");
EXT(YLsimple_handler_infoG,"runtime/boot","<simple-handler-info>");
EXT(YcompilerSastYsignature_names,"compiler/ast","signature-names");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YcompilerSastYlocals_body_setter,"compiler/ast","locals-body-setter");
DEF(YcompilerSg2cYpurge_outdated_modules,"compiler/g2c","purge-outdated-modules");
EXT(Yfun_specs,"runtime/boot","fun-specs");
EXT(Ytype_object,"runtime/boot","type-object");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Yfun_name_setter,"runtime/boot","fun-name-setter");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YcompilerSastYbinding_index_setter,"compiler/ast","binding-index-setter");
EXT(YcompilerSastYLpassive_programG,"compiler/ast","<passive-program>");
EXT(YgooScollectionsSsequenceYrev,"goo/collections/sequence","rev");
EXT(YcompilerSastYconstant_value,"compiler/ast","constant-value");
DEF(YcompilerSg2cYg2c_test,"compiler/g2c","g2c-test");
EXT(YgooScollectionsSsequenceY1st,"goo/collections/sequence","1st");
EXT(YgooScollectionsScollectionYenum,"goo/collections/collection","enum");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YcompilerSastYbinding_dynamic_extentQ,"compiler/ast","binding-dynamic-extent?");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YcompilerSastYlocals_body,"compiler/ast","locals-body");
EXT(YgooSmagnitudeYLE,"goo/magnitude","<=");
EXT(YcompilerSastYbinding_dynamic_extentQ_setter,"compiler/ast","binding-dynamic-extent?-setter");
DEF(YcompilerSg2cYmodule_init_decl,"compiler/g2c","module-init-decl");
EXT(Yunknown_function_error,"runtime/boot","unknown-function-error");
EXT(YgooScollectionsStableYtab_test,"goo/collections/table","tab-test");
EXT(YgooScollectionsScollectionYelt_default,"goo/collections/collection","elt-default");
DEF(YcompilerSg2cYgenerate_return,"compiler/g2c","generate-return");
EXT(YcompilerSastYfunction_data_refs_setter,"compiler/ast","function-data-refs-setter");
EXT(YPvnul,"runtime/boot","%vnul");
EXT(Ysym_name,"runtime/boot","sym-name");
DEF(YcompilerSg2cYprimitive_inlinableQ,"compiler/g2c","primitive-inlinable?");
EXT(YruntimeSruntimeYLhandler_infoG,"runtime/runtime","<handler-info>");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooScollectionsScollectionYfind,"goo/collections/collection","find");
EXT(YruntimeSruntimeYlist_handlers,"runtime/runtime","list-handlers");
DEF(YcompilerSg2cYDmethod_mangled_marker,"compiler/g2c","$method-mangled-marker");
EXT(YcompilerSastYapplication_function,"compiler/ast","application-function");
EXT(YruntimeSruntimeYhandler_matchesQ,"runtime/runtime","handler-matches?");
EXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YPdefine_method,"runtime/boot","%define-method");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Yfun_name,"runtime/boot","fun-name");
EXT(YcompilerSastYLmodule_bindingG,"compiler/ast","<module-binding>");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooScollectionsSstringYstr_to_num,"goo/collections/string","str-to-num");
EXT(YcompilerSastYalternative_consequent,"compiler/ast","alternative-consequent");
EXT(YcompilerSastYast_evaluate,"compiler/ast","ast-evaluate");
EXT(Yobject_class,"runtime/boot","object-class");
EXT(Yprop_owner,"runtime/boot","prop-owner");
DEF(YcompilerSg2cYgenerate_quotation_forwards,"compiler/g2c","generate-quotation-forwards");
EXT(YcompilerSastYLglobal_referenceG,"compiler/ast","<global-reference>");
EXT(YgooScollectionsSrangeYrange_by,"goo/collections/range","range-by");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
DEF(YcompilerSg2cYDmax_character_code,"compiler/g2c","$max-character-code");
DEF(YcompilerSg2cYgenerate_registers,"compiler/g2c","generate-registers");
EXT(YcompilerSastYLruntime_referenceG,"compiler/ast","<runtime-reference>");
EXT(YcompilerSast_linearizeYgather_temporariesX,"compiler/ast-linearize","gather-temporaries!");
EXT(YcompilerStopYload,"compiler/top","load");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YcompilerSastYfunction_data_refs,"compiler/ast","function-data-refs");
EXT(YgooScollectionsScollectionYLtabG,"goo/collections/collection","<tab>");
DEF(YcompilerSg2cYmangler_reset,"compiler/g2c","mangler-reset");
EXT(YcompilerSastYbinding_global_box,"compiler/ast","binding-global-box");
DEF(YcompilerSg2cYDiep_suffix,"compiler/g2c","$iep-suffix");
EXT(YcompilerSastYsignature_specs,"compiler/ast","signature-specs");
EXT(YcompilerSast_linearizeYinsert_boxX,"compiler/ast-linearize","insert-box!");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Yprop_value,"runtime/boot","prop-value");
EXT(YgooScollectionsSlistYlist,"goo/collections/list","list");
EXT(Yclass_parents,"runtime/boot","class-parents");
EXT(YgooScollectionsStableYDpermanent_hash_state,"goo/collections/table","$permanent-hash-state");
EXT(YcompilerSastYprogram_register,"compiler/ast","program-register");
EXT(YgooSmagnitudeYG,"goo/magnitude",">");
DEF(YcompilerSg2cYmangle_boot_name,"compiler/g2c","mangle-boot-name");
EXT(YruntimeSruntimeYDdefault_handler_info,"runtime/runtime","$default-handler-info");
EXT(YcompilerSastYLunwind_protectG,"compiler/ast","<unwind-protect>");
DEF(YcompilerSg2cYDescape_marker,"compiler/g2c","$escape-marker");
EXT(YcompilerSastYenvironment_uses_modules,"compiler/ast","environment-uses-modules");
EXT(YgooScollectionsSsequenceYvals_to_str,"goo/collections/sequence","vals-to-str");
EXT(YgooSmathYB,"goo/math","&");
DEF(YcompilerSg2cYgenerate_local_temporaries,"compiler/g2c","generate-local-temporaries");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YcompilerSastYmodule_name_to_relpath,"compiler/ast","module-name-to-relpath");
EXT(YgooScollectionsSmapYfab_map,"goo/collections/map","fab-map");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScollectionsScycleYcycle,"goo/collections/cycle","cycle");
EXT(YgooScollectionsSstringsYstring_split,"goo/collections/strings","string-split");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScollectionsScollectionYkey_test,"goo/collections/collection","key-test");
EXT(YruntimeSruntimeYdefault_handler,"runtime/runtime","default-handler");
EXT(YgooScollectionsSsequenceYrange_checkQ,"goo/collections/sequence","range-check?");
EXT(YcompilerSastYLfix_letG,"compiler/ast","<fix-let>");
EXT(YgooSmathYposQ,"goo/math","pos?");
DEF(YcompilerSg2cYreference_Gc,"compiler/g2c","reference->c");
EXT(YcompilerSastYenvironment_module,"compiler/ast","environment-module");
EXT(YcompilerSastYfunction_self_recursiveQ_setter,"compiler/ast","function-self-recursive?-setter");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YLseqG,"runtime/boot","<seq>");
EXT(Yprop_type,"runtime/boot","prop-type");
EXT(YLanyG,"runtime/boot","<any>");
EXT(YcompilerSastYload_module,"compiler/ast","load-module");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YruntimeSruntimeYTgensym_counterT,"runtime/runtime","*gensym-counter*");
EXT(YcompilerSastYfunction_self_recursiveQ,"compiler/ast","function-self-recursive?");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
DEF(YcompilerSg2cYmangle_string_literal,"compiler/g2c","mangle-string-literal");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YcompilerSastYfix_let_arguments_setter,"compiler/ast","fix-let-arguments-setter");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScollectionsSstringsYmap_str,"goo/collections/strings","map-str");
EXT(YTrestarts_okQT,"runtime/boot","*restarts-ok?*");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YruntimeSruntimeYloc_val_setter,"runtime/runtime","loc-val-setter");
EXT(YcompilerSastYobjectify_signature,"compiler/ast","objectify-signature");
EXT(YcompilerSastYLcomputed_programG,"compiler/ast","<computed-program>");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(Yclass_props,"runtime/boot","class-props");
DEF(YcompilerSg2cYgen_ref,"compiler/g2c","gen-ref");
EXT(YcompilerSastYalternative_condition,"compiler/ast","alternative-condition");
EXT(YDmax_int,"runtime/boot","$max-int");
EXT(YcompilerSastYdo_module_loader_modules,"compiler/ast","do-module-loader-modules");
EXT(YcompilerSast_linearizeYbox_reference,"compiler/ast-linearize","box-reference");
EXT(YgooSmagnitudeYL,"goo/magnitude","<");
EXT(YgooScollectionsScollectionYdo3,"goo/collections/collection","do3");
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
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooScollectionsSsequenceYdel_dups,"goo/collections/sequence","del-dups");
EXT(YgooSmathYDpi,"goo/math","$pi");
DEF(YcompilerSg2cYDiep_marker,"compiler/g2c","$iep-marker");
EXT(YLsigG,"runtime/boot","<sig>");
EXT(YgooScollectionsSbufferYLbufG,"goo/collections/buffer","<buf>");
EXT(YcompilerSastYbinding_inferred_type,"compiler/ast","binding-inferred-type");
DEF(YcompilerSg2cYLg2c_module_loaderG,"compiler/g2c","<g2c-module-loader>");
EXT(YcompilerSastYas_lst,"compiler/ast","as-lst");
EXT(YgooScollectionsScollectionYas_copy,"goo/collections/collection","as-copy");
EXT(YgooScollectionsScollectionYkey_type,"goo/collections/collection","key-type");
EXT(Yfun_names,"runtime/boot","fun-names");
EXT(YcompilerSastYdo_static_global_bindings,"compiler/ast","do-static-global-bindings");
EXT(Yfind_setter,"runtime/boot","find-setter");
DEF(YcompilerSg2cYchar_buffer_as_string,"compiler/g2c","char-buffer-as-string");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooScollectionsScollectionYfind_or,"goo/collections/collection","find-or");
EXT(YcompilerStopYbt,"compiler/top","bt");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
DEF(YcompilerSg2cYmodule_loader_app_modname_setter,"compiler/g2c","module-loader-app-modname-setter");
DEF(YcompilerSg2cYDmodule_separator,"compiler/g2c","$module-separator");
DEF(YcompilerSg2cYgenerate_function_forwards,"compiler/g2c","generate-function-forwards");
EXT(YgooScollectionsSsequenceYsub_setter,"goo/collections/sequence","sub-setter");
EXT(YcompilerSastYbinding_name,"compiler/ast","binding-name");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YcompilerSastYDgoo_boot_module_name,"compiler/ast","$goo-boot-module-name");
EXT(YcompilerSastYfix_let_body,"compiler/ast","fix-let-body");
EXT(YruntimeSruntimeYLhandlerG,"runtime/runtime","<handler>");
EXT(YcompilerSastYfix_let_arguments,"compiler/ast","fix-let-arguments");
EXT(YgooSmathYE,"goo/math","=");
EXT(YOall2Q,"runtime/boot","@all2?");
EXT(YruntimeSruntimeYcondition_message,"runtime/runtime","condition-message");
EXT(YcompilerSastYbinding_value,"compiler/ast","binding-value");
EXT(YgooScollectionsSsequenceYrange_check,"goo/collections/sequence","range-check");
EXT(YcompilerSastYLmodule_loaderG,"compiler/ast","<module-loader>");
EXT(YgooScollectionsScollectionYlow_elt_setter,"goo/collections/collection","low-elt-setter");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YcompilerSastYlocals_functions_setter,"compiler/ast","locals-functions-setter");
EXT(YcompilerSastYLlocal_referenceG,"compiler/ast","<local-reference>");
EXT(Ynil,"runtime/boot","nil");
EXT(YcompilerSastYLast_functionG,"compiler/ast","<ast-function>");
EXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YcompilerSastYLglobal_boxG,"compiler/ast","<global-box>");
EXT(YcompilerSast_linearizeYclosure_creation_free,"compiler/ast-linearize","closure-creation-free");
EXT(YLcolG,"runtime/boot","<col>");
EXT(YcompilerSastYfunction_temporaries_setter,"compiler/ast","function-temporaries-setter");
EXT(Ysig_names,"runtime/boot","sig-names");
EXT(YLclassG,"runtime/boot","<class>");
EXT(YcompilerSastYfunction_signature,"compiler/ast","function-signature");
EXT(YgooScollectionsScollectionYmap2,"goo/collections/collection","map2");
EXT(YcompilerSastYlocals_functions,"compiler/ast","locals-functions");
EXT(YcompilerSastYglobal_box_value_setter,"compiler/ast","global-box-value-setter");
EXT(YgooScollectionsScycleYLcycleG,"goo/collections/cycle","<cycle>");
EXT(YcompilerSast_linearizeYform_program,"compiler/ast-linearize","form-program");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(Yfab_gen,"runtime/boot","fab-gen");
DEF(YcompilerSg2cYgenerate_module_init,"compiler/g2c","generate-module-init");
EXT(YcompilerSastYalternative_alternant,"compiler/ast","alternative-alternant");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YcompilerSastYprobe_module,"compiler/ast","probe-module");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YcompilerSastYsignature_specs_setter,"compiler/ast","signature-specs-setter");
EXT(YcompilerSastYmodule_target_environment,"compiler/ast","module-target-environment");
EXT(YcompilerSast_linearizeYLbox_writeG,"compiler/ast-linearize","<box-write>");
EXT(YcompilerSastYbinding_info,"compiler/ast","binding-info");
DEF(YcompilerSg2cYgenerate_quotations,"compiler/g2c","generate-quotations");
EXT(YgooScollectionsStableYcase_insensitive_string_hash,"goo/collections/table","case-insensitive-string-hash");
EXT(YcompilerSastYLbindingG,"compiler/ast","<binding>");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YcompilerSastYbinding_global_box_setter,"compiler/ast","binding-global-box-setter");
EXT(YcompilerSastYLreferenceG,"compiler/ast","<reference>");
EXT(YcompilerSastYsignature_names_setter,"compiler/ast","signature-names-setter");
EXT(YruntimeSruntimeYalways,"runtime/runtime","always");
EXT(YruntimeSruntimeYhandler_function,"runtime/runtime","handler-function");
EXT(YcompilerSastYLglobal_assignmentG,"compiler/ast","<global-assignment>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScollectionsSbufferYlenSfill_setter,"goo/collections/buffer","len/fill-setter");
EXT(YcompilerSast_linearizeYTregister_passiveQT,"compiler/ast-linearize","*register-passive?*");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YcompilerSastYmodule_loader_module_type,"compiler/ast","module-loader-module-type");
EXT(YcompilerSastYLdefinitionG,"compiler/ast","<definition>");
EXT(YcompilerSastYmonitor_handler,"compiler/ast","monitor-handler");
EXT(YgooScollectionsSsequenceYdel_vals,"goo/collections/sequence","del-vals");
DEF(YcompilerSg2cYgenerate_function_body_reference,"compiler/g2c","generate-function-body-reference");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YgooScollectionsSstringsYstring_join,"goo/collections/strings","string-join");
EXT(YcompilerSastYapplication_knownQ_setter,"compiler/ast","application-known?-setter");
EXT(YcompilerSastYbinding_info_setter,"compiler/ast","binding-info-setter");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(Ytail_setter,"runtime/boot","tail-setter");
EXT(YgooSmathYA,"goo/math","+");
EXT(YcompilerSastYfunction_naryQ,"compiler/ast","function-nary?");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
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
DEF(YcompilerSg2cYDmethod_mangled_marker_string,"compiler/g2c","$method-mangled-marker-string");
DEF(YcompilerSg2cYLg2c_moduleG,"compiler/g2c","<g2c-module>");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YgooScollectionsSstringYstr,"goo/collections/string","str");
EXT(YcompilerSastYruntime_environment,"compiler/ast","runtime-environment");
EXT(YcompilerSastYprogram_type,"compiler/ast","program-type");
EXT(YcompilerSast_linearizeYprogram_definitions,"compiler/ast-linearize","program-definitions");
EXT(YcompilerSastYfunction_debug_name_setter,"compiler/ast","function-debug-name-setter");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
DEF(YcompilerSg2cYmodule_loader_appname_setter,"compiler/g2c","module-loader-appname-setter");
DEF(YcompilerSg2cYg2c_build_app,"compiler/g2c","g2c-build-app");
EXT(YcompilerSast_linearizeYbox_form,"compiler/ast-linearize","box-form");
EXT(YLoptsG,"runtime/boot","<opts>");
EXT(Yfind_getter,"runtime/boot","find-getter");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScollectionsScollectionYdup,"goo/collections/collection","dup");
EXT(Ytail,"runtime/boot","tail");
EXT(YgooScollectionsScollectionYelt_type,"goo/collections/collection","elt-type");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YcompilerSastYfunction_free,"compiler/ast","function-free");
EXT(Ywrong_number_arguments_error,"runtime/boot","wrong-number-arguments-error");
EXT(YcompilerSastYLfab_listG,"compiler/ast","<fab-list>");
EXT(YgooScollectionsSsequenceYbelow,"goo/collections/sequence","below");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YLtypeG,"runtime/boot","<type>");
EXT(Yord_app_mets,"runtime/boot","ord-app-mets");
EXT(YcompilerSastYinit_ast,"compiler/ast","init-ast");
EXT(YcompilerSastYassignment_binding,"compiler/ast","assignment-binding");
EXT(YruntimeSruntimeYloc_val,"runtime/runtime","loc-val");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YLlocG,"runtime/boot","<loc>");
EXT(YcompilerSastYbinding_module_name,"compiler/ast","binding-module-name");
EXT(YcompilerSastYapplication_tailQ,"compiler/ast","application-tail?");
EXT(YgooScollectionsSbufferYpop_lastX,"goo/collections/buffer","pop-last!");
EXT(YcompilerSastYbinding_dottedQ,"compiler/ast","binding-dotted?");
EXT(YgooScollectionsScollectionYfab,"goo/collections/collection","fab");
EXT(Ytype_elts,"runtime/boot","type-elts");
EXT(YcompilerSastYmodule_binding,"compiler/ast","module-binding");
EXT(YTreport_prop_unbound_errorsQT,"runtime/boot","*report-prop-unbound-errors?*");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YcompilerSastYLast_methodG,"compiler/ast","<ast-method>");
EXT(YgooScollectionsSassocYassocs_test,"goo/collections/assoc","assocs-test");
EXT(YgooScollectionsSsequenceYfinds,"goo/collections/sequence","finds");
DEF(YcompilerSg2cYmodule_loader_app_modname,"compiler/g2c","module-loader-app-modname");
EXT(YcompilerSastYreference_frame_offset,"compiler/ast","reference-frame-offset");
EXT(YgooSmathYround,"goo/math","round");
EXT(YcompilerSastYreference_called_functionQ,"compiler/ast","reference-called-function?");
EXT(YcompilerSastYLmodule_binding_referenceG,"compiler/ast","<module-binding-reference>");
EXT(YcompilerSastYmonitor_type,"compiler/ast","monitor-type");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScollectionsSmapYLmapG,"goo/collections/map","<map>");
EXT(YgooScollectionsSsequenceYreject,"goo/collections/sequence","reject");
EXT(YcompilerSastYLassignmentG,"compiler/ast","<assignment>");
EXT(YcompilerSast_linearizeYunconstrained_typeQ,"compiler/ast-linearize","unconstrained-type?");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(Yclass_name,"runtime/boot","class-name");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_145);
DEFLIT(lit_91);
DEFLIT(lit_147);
DEFLIT(lit_1);
DEFLIT(lit_340);
DEFLIT(lit_392);
DEFLIT(lit_65);
DEFLIT(lit_26);
DEFLIT(lit_330);
DEFLIT(lit_387);
DEFLIT(lit_305);
DEFLIT(lit_339);
DEFLIT(lit_21);
DEFLIT(lit_349);
DEFLIT(lit_424);
DEFLIT(lit_240);
DEFLIT(lit_386);
DEFLIT(lit_192);
DEFLIT(lit_360);
DEFLIT(lit_204);
DEFLIT(lit_260);
DEFLIT(lit_161);
DEFLIT(lit_288);
DEFLIT(lit_427);
DEFLIT(lit_298);
DEFLIT(lit_265);
DEFLIT(lit_205);
DEFLIT(lit_44);
DEFLIT(lit_78);
DEFLIT(lit_224);
DEFLIT(lit_251);
DEFLIT(lit_253);
DEFLIT(lit_478);
DEFLIT(lit_365);
DEFLIT(lit_64);
DEFLIT(lit_319);
DEFLIT(lit_153);
DEFLIT(lit_107);
DEFLIT(lit_169);
DEFLIT(lit_230);
DEFLIT(lit_53);
DEFLIT(lit_148);
DEFLIT(lit_158);
DEFLIT(lit_295);
DEFLIT(lit_24);
DEFLIT(lit_332);
DEFLIT(lit_338);
DEFLIT(lit_234);
DEFLIT(lit_296);
DEFLIT(lit_356);
DEFLIT(lit_293);
DEFLIT(lit_47);
DEFLIT(lit_85);
DEFLIT(lit_323);
DEFLIT(lit_138);
DEFLIT(lit_163);
DEFLIT(lit_381);
DEFLIT(lit_454);
DEFLIT(lit_39);
DEFLIT(lit_74);
DEFLIT(lit_441);
DEFLIT(lit_9);
DEFLIT(lit_157);
DEFLIT(lit_151);
DEFLIT(lit_472);
DEFLIT(lit_164);
DEFLIT(lit_249);
DEFLIT(lit_15);
DEFLIT(lit_45);
DEFLIT(lit_307);
DEFLIT(lit_446);
DEFLIT(lit_233);
DEFLIT(lit_342);
DEFLIT(lit_75);
DEFLIT(lit_31);
DEFLIT(lit_149);
DEFLIT(lit_448);
DEFLIT(lit_420);
DEFLIT(lit_139);
DEFLIT(lit_398);
DEFLIT(lit_216);
DEFLIT(lit_380);
DEFLIT(lit_350);
DEFLIT(lit_346);
DEFLIT(lit_228);
DEFLIT(lit_409);
DEFLIT(lit_87);
DEFLIT(lit_312);
DEFLIT(lit_291);
DEFLIT(lit_194);
DEFLIT(lit_225);
DEFLIT(lit_405);
DEFLIT(lit_57);
DEFLIT(lit_229);
DEFLIT(lit_18);
DEFLIT(lit_237);
DEFLIT(lit_92);
DEFLIT(lit_36);
DEFLIT(lit_445);
DEFLIT(lit_166);
DEFLIT(lit_355);
DEFLIT(lit_299);
DEFLIT(lit_292);
DEFLIT(lit_459);
DEFLIT(lit_369);
DEFLIT(lit_303);
DEFLIT(lit_465);
DEFLIT(lit_300);
DEFLIT(lit_297);
DEFLIT(lit_396);
DEFLIT(lit_222);
DEFLIT(lit_200);
DEFLIT(lit_213);
DEFLIT(lit_71);
DEFLIT(lit_255);
DEFLIT(lit_144);
DEFLIT(lit_190);
DEFLIT(lit_375);
DEFLIT(lit_133);
DEFLIT(lit_314);
DEFLIT(lit_281);
DEFLIT(lit_67);
DEFLIT(lit_399);
DEFLIT(lit_320);
DEFLIT(lit_196);
DEFLIT(lit_362);
DEFLIT(lit_123);
DEFLIT(lit_422);
DEFLIT(lit_11);
DEFLIT(lit_321);
DEFLIT(lit_210);
DEFLIT(lit_121);
DEFLIT(lit_202);
DEFLIT(lit_97);
DEFLIT(lit_278);
DEFLIT(lit_364);
DEFLIT(lit_214);
DEFLIT(lit_373);
DEFLIT(lit_333);
DEFLIT(lit_294);
DEFLIT(lit_198);
DEFLIT(lit_418);
DEFLIT(lit_197);
DEFLIT(lit_316);
DEFLIT(lit_83);
DEFLIT(lit_313);
DEFLIT(lit_327);
DEFLIT(lit_245);
DEFLIT(lit_61);
DEFLIT(lit_19);
DEFLIT(lit_384);
DEFLIT(lit_84);
DEFLIT(lit_256);
DEFLIT(lit_180);
DEFLIT(lit_220);
DEFLIT(lit_452);
DEFLIT(lit_391);
DEFLIT(lit_72);
DEFLIT(lit_8);
DEFLIT(lit_27);
DEFLIT(lit_241);
DEFLIT(lit_352);
DEFLIT(lit_104);
DEFLIT(lit_262);
DEFLIT(lit_170);
DEFLIT(lit_232);
DEFLIT(lit_103);
DEFLIT(lit_374);
DEFLIT(lit_326);
DEFLIT(lit_209);
DEFLIT(lit_102);
DEFLIT(lit_73);
DEFLIT(lit_179);
DEFLIT(lit_135);
DEFLIT(lit_377);
DEFLIT(lit_22);
DEFLIT(lit_29);
DEFLIT(lit_41);
DEFLIT(lit_136);
DEFLIT(lit_140);
DEFLIT(lit_177);
DEFLIT(lit_306);
DEFLIT(lit_50);
DEFLIT(lit_431);
DEFLIT(lit_94);
DEFLIT(lit_419);
DEFLIT(lit_457);
DEFLIT(lit_160);
DEFLIT(lit_20);
DEFLIT(lit_193);
DEFLIT(lit_2);
DEFLIT(lit_52);
DEFLIT(lit_141);
DEFLIT(lit_372);
DEFLIT(lit_274);
DEFLIT(lit_270);
DEFLIT(lit_259);
DEFLIT(lit_142);
DEFLIT(lit_165);
DEFLIT(lit_33);
DEFLIT(lit_453);
DEFLIT(lit_223);
DEFLIT(lit_347);
DEFLIT(lit_128);
DEFLIT(lit_269);
DEFLIT(lit_283);
DEFLIT(lit_479);
DEFLIT(lit_480);
DEFLIT(lit_16);
DEFLIT(lit_105);
DEFLIT(lit_354);
DEFLIT(lit_408);
DEFLIT(lit_473);
DEFLIT(lit_402);
DEFLIT(lit_58);
DEFLIT(lit_119);
DEFLIT(lit_404);
DEFLIT(lit_130);
DEFLIT(lit_383);
DEFLIT(lit_345);
DEFLIT(lit_451);
DEFLIT(lit_89);
DEFLIT(lit_302);
DEFLIT(lit_442);
DEFLIT(lit_315);
DEFLIT(lit_272);
DEFLIT(lit_235);
DEFLIT(lit_156);
DEFLIT(lit_109);
DEFLIT(lit_112);
DEFLIT(lit_304);
DEFLIT(lit_40);
DEFLIT(lit_284);
DEFLIT(lit_246);
DEFLIT(lit_116);
DEFLIT(lit_275);
DEFLIT(lit_433);
DEFLIT(lit_34);
DEFLIT(lit_268);
DEFLIT(lit_13);
DEFLIT(lit_261);
DEFLIT(lit_38);
DEFLIT(lit_324);
DEFLIT(lit_66);
DEFLIT(lit_359);
DEFLIT(lit_455);
DEFLIT(lit_184);
DEFLIT(lit_182);
DEFLIT(lit_70);
DEFLIT(lit_463);
DEFLIT(lit_218);
DEFLIT(lit_167);
DEFLIT(lit_254);
DEFLIT(lit_150);
DEFLIT(lit_162);
DEFLIT(lit_476);
DEFLIT(lit_435);
DEFLIT(lit_366);
DEFLIT(lit_388);
DEFLIT(lit_32);
DEFLIT(lit_203);
DEFLIT(lit_239);
DEFLIT(lit_54);
DEFLIT(lit_101);
DEFLIT(lit_37);
DEFLIT(lit_28);
DEFLIT(lit_115);
DEFLIT(lit_290);
DEFLIT(lit_125);
DEFLIT(lit_337);
DEFLIT(lit_474);
DEFLIT(lit_172);
DEFLIT(lit_176);
DEFLIT(lit_219);
DEFLIT(lit_25);
DEFLIT(lit_90);
DEFLIT(lit_336);
DEFLIT(lit_449);
DEFLIT(lit_363);
DEFLIT(lit_106);
DEFLIT(lit_96);
DEFLIT(lit_322);
DEFLIT(lit_131);
DEFLIT(lit_271);
DEFLIT(lit_93);
DEFLIT(lit_311);
DEFLIT(lit_401);
DEFLIT(lit_325);
DEFLIT(lit_477);
DEFLIT(lit_368);
DEFLIT(lit_467);
DEFLIT(lit_318);
DEFLIT(lit_444);
DEFLIT(lit_371);
DEFLIT(lit_137);
DEFLIT(lit_378);
DEFLIT(lit_438);
DEFLIT(lit_199);
DEFLIT(lit_353);
DEFLIT(lit_95);
DEFLIT(lit_415);
DEFLIT(lit_425);
DEFLIT(lit_111);
DEFLIT(lit_267);
DEFLIT(lit_77);
DEFLIT(lit_434);
DEFLIT(lit_367);
DEFLIT(lit_242);
DEFLIT(lit_17);
DEFLIT(lit_358);
DEFLIT(lit_348);
DEFLIT(lit_171);
DEFLIT(lit_328);
DEFLIT(lit_341);
DEFLIT(lit_266);
DEFLIT(lit_289);
DEFLIT(lit_159);
DEFLIT(lit_413);
DEFLIT(lit_282);
DEFLIT(lit_56);
DEFLIT(lit_48);
DEFLIT(lit_208);
DEFLIT(lit_252);
DEFLIT(lit_187);
DEFLIT(lit_277);
DEFLIT(lit_43);
DEFLIT(lit_397);
DEFLIT(lit_181);
DEFLIT(lit_385);
DEFLIT(lit_217);
DEFLIT(lit_143);
DEFLIT(lit_426);
DEFLIT(lit_481);
DEFLIT(lit_468);
DEFLIT(lit_122);
DEFLIT(lit_206);
DEFLIT(lit_30);
DEFLIT(lit_280);
DEFLIT(lit_450);
DEFLIT(lit_221);
DEFLIT(lit_243);
DEFLIT(lit_63);
DEFLIT(lit_212);
DEFLIT(lit_14);
DEFLIT(lit_185);
DEFLIT(lit_407);
DEFLIT(lit_4);
DEFLIT(lit_120);
DEFLIT(lit_175);
DEFLIT(lit_108);
DEFLIT(lit_279);
DEFLIT(lit_344);
DEFLIT(lit_10);
DEFLIT(lit_440);
DEFLIT(lit_429);
DEFLIT(lit_376);
DEFLIT(lit_124);
DEFLIT(lit_227);
DEFLIT(lit_201);
DEFLIT(lit_469);
DEFLIT(lit_286);
DEFLIT(lit_113);
DEFLIT(lit_114);
DEFLIT(lit_416);
DEFLIT(lit_82);
DEFLIT(lit_195);
DEFLIT(lit_428);
DEFLIT(lit_99);
DEFLIT(lit_410);
DEFLIT(lit_129);
DEFLIT(lit_400);
DEFLIT(lit_382);
DEFLIT(lit_412);
DEFLIT(lit_0);
DEFLIT(lit_443);
DEFLIT(lit_466);
DEFLIT(lit_80);
DEFLIT(lit_215);
DEFLIT(lit_414);
DEFLIT(lit_132);
DEFLIT(lit_329);
DEFLIT(lit_389);
DEFLIT(lit_317);
DEFLIT(lit_68);
DEFLIT(lit_447);
DEFLIT(lit_134);
DEFLIT(lit_370);
DEFLIT(lit_6);
DEFLIT(lit_191);
DEFLIT(lit_461);
DEFLIT(lit_334);
DEFLIT(lit_357);
DEFLIT(lit_432);
DEFLIT(lit_231);
DEFLIT(lit_464);
DEFLIT(lit_248);
DEFLIT(lit_154);
DEFLIT(lit_394);
DEFLIT(lit_436);
DEFLIT(lit_79);
DEFLIT(lit_207);
DEFLIT(lit_411);
DEFLIT(lit_100);
DEFLIT(lit_146);
DEFLIT(lit_471);
DEFLIT(lit_273);
DEFLIT(lit_168);
DEFLIT(lit_456);
DEFLIT(lit_343);
DEFLIT(lit_263);
DEFLIT(lit_423);
DEFLIT(lit_257);
DEFLIT(lit_118);
DEFLIT(lit_308);
DEFLIT(lit_110);
DEFLIT(lit_188);
DEFLIT(lit_390);
DEFLIT(lit_62);
DEFLIT(lit_46);
DEFLIT(lit_88);
DEFLIT(lit_69);
DEFLIT(lit_12);
DEFLIT(lit_250);
DEFLIT(lit_439);
DEFLIT(lit_430);
DEFLIT(lit_417);
DEFLIT(lit_59);
DEFLIT(lit_458);
DEFLIT(lit_183);
DEFLIT(lit_98);
DEFLIT(lit_276);
DEFLIT(lit_285);
DEFLIT(lit_309);
DEFLIT(lit_335);
DEFLIT(lit_173);
DEFLIT(lit_49);
DEFLIT(lit_475);
DEFLIT(lit_7);
DEFLIT(lit_117);
DEFLIT(lit_189);
DEFLIT(lit_406);
DEFLIT(lit_238);
DEFLIT(lit_421);
DEFLIT(lit_3);
DEFLIT(lit_23);
DEFLIT(lit_403);
DEFLIT(lit_301);
DEFLIT(lit_155);
DEFLIT(lit_287);
DEFLIT(lit_236);
DEFLIT(lit_226);
DEFLIT(lit_60);
DEFLIT(lit_462);
DEFLIT(lit_470);
DEFLIT(lit_331);
DEFLIT(lit_55);
DEFLIT(lit_310);
DEFLIT(lit_126);
DEFLIT(lit_264);
DEFLIT(lit_152);
DEFLIT(lit_178);
DEFLIT(lit_211);
DEFLIT(lit_361);
DEFLIT(lit_258);
DEFLIT(lit_395);
DEFLIT(lit_351);
DEFLIT(lit_186);
DEFLIT(lit_379);
DEFLIT(lit_460);
DEFLIT(lit_76);
DEFLIT(lit_5);
DEFLIT(lit_81);
DEFLIT(lit_437);
DEFLIT(lit_247);
DEFLIT(lit_42);
DEFLIT(lit_86);
DEFLIT(lit_35);
DEFLIT(lit_127);
DEFLIT(lit_393);
DEFLIT(lit_244);
DEFLIT(lit_51);
DEFLIT(lit_174);

/* FUNCTIONS: */

LOCFOR(fun_module_loader_appname_0);
LOCFOR(fun_module_loader_appname_setter_1);
LOCFOR(fun_module_loader_app_modname_2);
LOCFOR(fun_module_loader_app_modname_setter_3);
LOCFOR(fun_module_src_file_4);
LOCFOR(fun_module_src_file_setter_5);
LOCFOR(fun_module_mtime_6);
LOCFOR(fun_module_mtime_setter_7);
LOCFOR(fun_module_loader_module_type_8);
LOCFOR(fun_9);
LOCFOR(fun_10);
LOCFOR(fun_11);
LOCFOR(fun_12);
LOCFOR(fun_load_module_13);
FUNFOR(YcompilerSg2cYmodule_up_to_dateQ);
LOCFOR(fun_15);
LOCFOR(fun_16);
FUNFOR(YcompilerSg2cYpurge_outdated_modules);
FUNFOR(YcompilerSg2cYg2c_def_app);
FUNFOR(YcompilerSg2cYg2c_build_app);
FUNFOR(YcompilerSg2cYg2c_test);
LOCFOR(fun_21);
LOCFOR(fun_22);
LOCFOR(fun_23);
LOCFOR(fun_24);
LOCFOR(fun_25);
LOCFOR(fun_26);
LOCFOR(fun_g2c_ast_27);
LOCFOR(fun_g2c_exp_28);
LOCFOR(fun_compile_load_29);
LOCFOR(fun_so_load_30);
LOCFOR(fun_g2c_eval_31);
LOCFOR(fun_g2c_eval_32);
LOCFOR(fun_g2c_top_33);
LOCFOR(fun_g2c_clean_34);
LOCFOR(fun_compute_ast_35);
LOCFOR(fun_compute_program_36);
LOCFOR(fun_generate_c_module_37);
LOCFOR(fun_38);
LOCFOR(fun_39);
LOCFOR(fun_generate_c_application_40);
LOCFOR(fun_41);
LOCFOR(fun_42);
LOCFOR(fun_43);
LOCFOR(fun_generate_makefile_44);
LOCFOR(fun_pp_45);
LOCFOR(fun_generate_header_46);
LOCFOR(fun_generate_trailer_47);
LOCFOR(fun_48);
LOCFOR(fun_generate_global_environment_49);
LOCFOR(fun_generate_global_binding_50);
LOCFOR(fun_x_1480_51);
FUNFOR(YcompilerSg2cYchar_buffer_as_string);
LOCFOR(fun_loop_53);
LOCFOR(fun_mangle_string_literal_54);
LOCFOR(fun_mangle_string_literal_55);
LOCFOR(fun_process_integer_56);
LOCFOR(fun_mangle_integer_57);
LOCFOR(fun_x_1482_58);
LOCFOR(fun_x_1484_59);
LOCFOR(fun_x_1486_60);
LOCFOR(fun_x_1488_61);
FUNFOR(YcompilerSg2cYmangler_reset);
LOCFOR(fun_x_1490_63);
FUNFOR(YcompilerSg2cYmangle_name_into);
LOCFOR(fun_mangle_raw_name_65);
LOCFOR(fun_mangle_raw_name_66);
LOCFOR(fun_mangle_local_name_67);
LOCFOR(fun_mangle_local_name_68);
LOCFOR(fun_mangle_global_name_69);
LOCFOR(fun_mangle_global_name_70);
LOCFOR(fun_mangle_boot_name_71);
LOCFOR(fun_mangle_module_binding_72);
LOCFOR(fun_mangle_local_marked_name_73);
LOCFOR(fun_mangle_local_marked_name_74);
LOCFOR(fun_x_1494_75);
LOCFOR(fun_76);
LOCFOR(fun_77);
LOCFOR(fun_x_1498_78);
LOCFOR(fun_79);
LOCFOR(fun_80);
LOCFOR(fun_x_1502_81);
LOCFOR(fun_loop_82);
LOCFOR(fun_83);
LOCFOR(fun_84);
LOCFOR(fun_gen_result_85);
LOCFOR(fun_x_1504_86);
LOCFOR(fun_gen_depth_87);
LOCFOR(fun_x_1508_88);
LOCFOR(fun_89);
LOCFOR(fun_90);
LOCFOR(fun_x_1512_91);
LOCFOR(fun_92);
LOCFOR(fun_93);
LOCFOR(fun_x_1516_94);
LOCFOR(fun_95);
LOCFOR(fun_96);
LOCFOR(fun_x_1518_97);
LOCFOR(fun_generate_quotation_forwards_98);
LOCFOR(fun_x_1520_99);
LOCFOR(fun_generate_quotations_100);
LOCFOR(fun_false_name_101);
LOCFOR(fun_generate_quotation_102);
LOCFOR(fun_generate_quotation_103);
LOCFOR(fun_104);
LOCFOR(fun_generate_quotation_105);
LOCFOR(fun_generate_quotation_106);
LOCFOR(fun_generate_quotation_107);
LOCFOR(fun_loop_108);
LOCFOR(fun_109);
LOCFOR(fun_float_to_c_string_110);
LOCFOR(fun_generate_quotation_111);
LOCFOR(fun_generate_quotation_112);
LOCFOR(fun_x_1524_113);
LOCFOR(fun_generate_quotation_114);
LOCFOR(fun_generate_quotation_115);
LOCFOR(fun_binding_Gc_116);
LOCFOR(fun_binding_Gc_117);
LOCFOR(fun_binding_Gc_118);
LOCFOR(fun_reference_Gc_119);
LOCFOR(fun_reference_Gc_120);
LOCFOR(fun_to_c_121);
LOCFOR(fun_to_c_122);
LOCFOR(fun_gen_ref_123);
LOCFOR(fun_gen_ref_124);
LOCFOR(fun_gen_ref_125);
LOCFOR(fun_gen_ref_126);
LOCFOR(fun_gen_ref_127);
LOCFOR(fun_gen_ref_128);
LOCFOR(fun_to_c_129);
LOCFOR(fun_to_c_130);
LOCFOR(fun_to_c_131);
LOCFOR(fun_to_c_132);
LOCFOR(fun_to_c_133);
LOCFOR(fun_to_c_134);
LOCFOR(fun_135);
LOCFOR(fun_to_c_136);
LOCFOR(fun_x_1532_137);
LOCFOR(fun_x_1535_138);
LOCFOR(fun_x_1538_139);
LOCFOR(fun_generate_self_recursive_call_140);
LOCFOR(fun_x_1540_141);
LOCFOR(fun_x_1543_142);
LOCFOR(fun_to_c_143);
LOCFOR(fun_x_1547_144);
LOCFOR(fun_to_c_145);
LOCFOR(fun_x_1551_146);
LOCFOR(fun_to_c_147);
LOCFOR(fun_x_1555_148);
LOCFOR(fun_to_c_149);
LOCFOR(fun_to_c_150);
LOCFOR(fun_to_c_151);
LOCFOR(fun_to_c_152);
LOCFOR(fun_x_1560_153);
LOCFOR(fun_x_1565_154);
LOCFOR(fun_to_c_155);
LOCFOR(fun_156);
LOCFOR(fun_x_1568_157);
LOCFOR(fun_to_c_158);
LOCFOR(fun_funshell_to_c_159);
LOCFOR(fun_160);
LOCFOR(fun_x_1572_161);
LOCFOR(fun_funinit_to_c_162);
LOCFOR(fun_to_c_163);
LOCFOR(fun_x_1576_164);
LOCFOR(fun_out_list_builder_165);
LOCFOR(fun_166);
LOCFOR(fun_gen_fab_list_167);
LOCFOR(fun_generate_function_specs_168);
LOCFOR(fun_169);
LOCFOR(fun_to_c_170);
LOCFOR(fun_to_c_171);
LOCFOR(fun_x_1580_172);
LOCFOR(fun_generate_function_forwards_173);
LOCFOR(fun_x_1584_174);
LOCFOR(fun_generate_function_forward_175);
LOCFOR(fun_generate_function_binding_176);
LOCFOR(fun_generate_function_forward_177);
LOCFOR(fun_178);
LOCFOR(fun_generate_function_bodies_179);
LOCFOR(fun_180);
LOCFOR(fun_generate_functions_181);
LOCFOR(fun_generate_closure_structure_182);
LOCFOR(fun_generate_function_body_reference_183);
LOCFOR(fun_x_1590_184);
LOCFOR(fun_generate_shadow_args_185);
LOCFOR(fun_generate_return_186);
LOCFOR(fun_generate_return_187);
LOCFOR(fun_primitive_inlinableQ_188);
LOCFOR(fun_x_1596_189);
LOCFOR(fun_generate_function_code_190);
LOCFOR(fun_dispatcherQ_191);
LOCFOR(fun_x_1600_192);
LOCFOR(fun_193);
LOCFOR(fun_generate_function_code_194);
LOCFOR(fun_x_1602_195);
LOCFOR(fun_generate_local_temporaries_196);
LOCFOR(fun_next_reg_197);
LOCFOR(fun_next_line_198);
LOCFOR(fun_generate_registers_199);
LOCFOR(fun_module_info_name_200);
LOCFOR(fun_maybe_declare_201);
LOCFOR(fun_202);
FUNFOR(YcompilerSg2cYdeclare_imported_module_infos);
LOCFOR(fun_x_1604_204);
LOCFOR(fun_205);
LOCFOR(fun_206);
LOCFOR(fun_x_1606_207);
FUNFOR(YcompilerSg2cYgenerate_module_info);
LOCFOR(fun_module_init_name_209);
LOCFOR(fun_module_init_decl_210);
LOCFOR(fun_x_1608_211);
LOCFOR(fun_x_1610_212);
LOCFOR(fun_generate_module_init_213);
LOCFOR(fun_generate_main_214);
extern P YcompilerSg2cY___main_0___ ();
extern P YcompilerSg2cY___main_1___ ();
extern P YcompilerSg2cY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_module_loader_appname_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcompilerSg2cYmodule_loader_appname));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_appname_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcompilerSg2cYmodule_loader_appname));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_app_modname_2) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcompilerSg2cYmodule_loader_app_modname));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_app_modname_setter_3) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcompilerSg2cYmodule_loader_app_modname));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_src_file_4) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcompilerSg2cYmodule_src_file));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_src_file_setter_5) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcompilerSg2cYmodule_src_file));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_mtime_6) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcompilerSg2cYmodule_mtime));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_mtime_setter_7) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcompilerSg2cYmodule_mtime));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_module_type_8) {
  P loader_;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YcompilerSg2cYLg2c_moduleG));
}

FUNCODEDEF(fun_9) {
  P T2,T1,T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YcompilerSast_linearizeYprogram_definitions),FREEREF(0));
  VARSET(YcompilerSg2cYTdefinitionsT,T0);
  T2 = BOXVAL(FREEREF(1));
  T1 = CALLN(1,VARREF(YcompilerSg2cYgenerate_c_module),4,T2,FREEREF(2),FREEREF(0),FREEREF(3));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_10) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(YcompilerSg2cYTdefinitionsT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_11) {
  P x_1476F2039;
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  x_1476F2039 = VARREF(YcompilerSg2cYTdefinitionsT);
  T3 = FUNFAB(fun_9,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T4 = FUNFAB(fun_10,1,x_1476F2039);
  T2 = with_cleanup(T3,T4);
  T1 = T2;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_12) {
  P tmpF2040;
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2040 = T1;
  if (tmpF2040 != YPfalse) {
    T4 = BOXVAL(FREEREF(0));
    T3 = CALL1(1,VARREF(YgooSioSportYclose),T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_module_13) {
  P loader_,name_;
  P out_portF2049;
  P prgF2048;
  P astF2047;
  P out_fileF2046;
  P src_fileF2045;
  P fileF2044;
  P envF2043;
  P keepmodQF2042;
  P modF2041;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL2(1,VARREF(YcompilerSastYfab_g2c_module),loader_,name_);
  modF2041 = T1;
  keepmodQF2042 = YPfalse;
  T4 = CALL1(1,VARREF(YcompilerSastYmodule_target_environment),modF2041);
  envF2043 = T4;
  T6 = CALL1(1,VARREF(YcompilerSastYmodule_name_to_relpath),name_);
  fileF2044 = T6;
  T9 = CALL1(1,VARREF(YgooSsystemYgoo_filename),fileF2044);
  T8 = CALL1(1,VARREF(YgooSsystemYadd_src_path),T9);
  src_fileF2045 = T8;
  T12 = CALL1(1,VARREF(YcompilerSg2cYmodule_loader_appname),loader_);
  T13 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF2044);
  T11 = CALL2(1,VARREF(YgooSsystemYadd_build_path),T12,T13);
  out_fileF2046 = T11;
  CALL2(1,VARREF(YcompilerSg2cYmodule_src_file_setter),src_fileF2045,modF2041);
  T14 = CALL1(1,VARREF(YgooSsystemYfile_mtime),src_fileF2045);
  CALL2(1,VARREF(YcompilerSg2cYmodule_mtime_setter),T14,modF2041);
  T16 = CALL2(1,VARREF(YcompilerSg2cYcompute_ast),src_fileF2045,envF2043);
  astF2047 = T16;
  T18 = CALL2(1,VARREF(YcompilerSg2cYcompute_program),astF2047,envF2043);
  prgF2048 = T18;
  T19 = CALL1(1,VARREF(YgooSsystemYparent_directory),out_fileF2046);
  CALL1(1,VARREF(YgooSsystemYprobe_directory),T19);
  out_portF2049 = YPfalse;
  out_portF2049 = BOXFAB(out_portF2049);
  T22 = FUNFAB(fun_11,5,out_portF2049,out_fileF2046,prgF2048,astF2047,modF2041);
  T23 = FUNFAB(fun_12,1,out_portF2049);
  T21 = with_cleanup(T22,T23);
  T17 = modF2041;
  T15 = T17;
  T10 = T15;
  T7 = T10;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YcompilerSg2cYmodule_up_to_dateQ) {
  P mod_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSg2cYmodule_mtime),mod_);
  T3 = CALL1(1,VARREF(YcompilerSg2cYmodule_src_file),mod_);
  T2 = CALL1(1,VARREF(YgooSsystemYfile_mtime),T3);
  T0 = CALL2(1,VARREF(YgooSmagnitudeYGE),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_15) {
  P mod_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T2 = CALL1(1,VARREF(YcompilerSg2cYmodule_up_to_dateQ),mod_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = BOXVAL(FREEREF(0));
    T6 = CALL1(1,VARREF(YcompilerSastYmodule_name),mod_);
    T4 = CALL2(1,VARREF(YgooScollectionsSlistYpush),T5,T6);
    T3 = BOXVAL(FREEREF(0)) = T4;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_16) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T0 = CALL3(1,VARREF(YruntimeSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_19),name_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YcompilerSg2cYpurge_outdated_modules) {
  P loader_;
  P changedF2050;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
  changedF2050 = Ynil;
  changedF2050 = BOXFAB(changedF2050);
  T2 = FUNFAB(fun_15,1,changedF2050);
  CALL2(1,VARREF(YcompilerSastYdo_module_loader_modules),T2,loader_);
  T3 = fun_16;
  T4 = BOXVAL(changedF2050);
  CALL2(1,VARREF(YgooSmacrosYdo),T3,T4);
  T6 = BOXVAL(changedF2050);
  T5 = CALL2(1,VARREF(YcompilerSastYremove_modules_by_nameX),loader_,T6);
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YcompilerSg2cYg2c_def_app) {
  P appname_,modname_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(appname_, 0);
  ARG(modname_, 1);
loop:
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(YcompilerSg2cYLg2c_module_loaderG),VARREF(YcompilerSg2cYmodule_loader_appname),appname_,VARREF(YcompilerSg2cYmodule_loader_app_modname),modname_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YcompilerSg2cYg2c_build_app) {
  P loader_;
  P modF2051;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
  CALL1(1,VARREF(YcompilerSg2cYpurge_outdated_modules),loader_);
  T2 = CALL1(1,VARREF(YcompilerSg2cYmodule_loader_app_modname),loader_);
  T1 = CALL2(1,VARREF(YcompilerSastYprobe_module),loader_,T2);
  modF2051 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),VARREF(YgooSioSportYout),LITREF(lit_24));
  CALL2(1,VARREF(YcompilerSastYdo_module_loader_modules),VARREF(YcompilerSastYreport_undefined_global_bindings),loader_);
  CALL2(1,VARREF(YcompilerSg2cYgenerate_c_application),loader_,modF2051);
  CALL1(1,VARREF(YcompilerSg2cYgenerate_makefile),loader_);
  T0 = YPfalse;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YcompilerSg2cYg2c_test) {
  P x_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T3 = CALL1(1,VARREF(YgooSmathYto_str),x_);
  T2 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_27),T3);
  T1 = CALL2(1,VARREF(YcompilerSg2cYg2c_def_app),T2,LITREF(lit_28));
  T0 = VARSET(YcompilerSg2cYTg2c_appT,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_21) {
  P T2,T1,T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YcompilerSast_linearizeYprogram_definitions),FREEREF(0));
  VARSET(YcompilerSg2cYTdefinitionsT,T0);
  T2 = BOXVAL(FREEREF(1));
  T1 = CALLN(1,VARREF(YcompilerSg2cYgenerate_c_module),4,T2,FREEREF(2),FREEREF(0),FREEREF(3));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_22) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(YcompilerSg2cYTdefinitionsT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_23) {
  P x_1478F2052;
  P T3,T2,T1,T0;
LINK_STACK();
loop:
  VARSET(YcompilerSg2cYTdynamic_linkingQT,YPtrue);
  x_1478F2052 = VARREF(YcompilerSg2cYTdefinitionsT);
  T2 = FUNFAB(fun_21,4,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  T3 = FUNFAB(fun_22,1,x_1478F2052);
  T1 = with_cleanup(T2,T3);
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_24) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(YcompilerSg2cYTdynamic_linkingQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_25) {
  P x_1477F2053;
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  x_1477F2053 = VARREF(YcompilerSg2cYTdynamic_linkingQT);
  T3 = FUNFAB(fun_23,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T4 = FUNFAB(fun_24,1,x_1477F2053);
  T2 = with_cleanup(T3,T4);
  T1 = T2;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_26) {
  P tmpF2054;
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2054 = T1;
  if (tmpF2054 != YPfalse) {
    T4 = BOXVAL(FREEREF(0));
    T3 = CALL1(1,VARREF(YgooSioSportYclose),T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_ast_27) {
  P ast_,env_;
  P out_portF2060;
  P prgF2059;
  P out_fileF2058;
  P fileF2057;
  P nameF2056;
  P modF2055;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYenvironment_module),env_);
  modF2055 = T1;
  T4 = CALL0(1,VARREF(YgooSsystemYprocess_id));
  T6 = CALL2(1,VARREF(YgooSmathYA),VARREF(YcompilerSg2cYTtmp_file_counterT),YPint((P)1));
  T5 = VARSET(YcompilerSg2cYTtmp_file_counterT,T6);
  T3 = CALL3(1,VARREF(YruntimeSruntimeYformat_to_string),LITREF(lit_32),T4,T5);
  nameF2056 = T3;
  T8 = CALL1(1,VARREF(YgooSsystemYadd_tmp_path),nameF2056);
  fileF2057 = T8;
  T10 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF2057);
  out_fileF2058 = T10;
  T12 = CALL2(1,VARREF(YcompilerSg2cYcompute_program),ast_,env_);
  prgF2059 = T12;
  out_portF2060 = YPfalse;
  out_portF2060 = BOXFAB(out_portF2060);
  T15 = FUNFAB(fun_25,5,out_portF2060,out_fileF2058,prgF2059,ast_,modF2055);
  T16 = FUNFAB(fun_26,1,out_portF2060);
  T14 = with_cleanup(T15,T16);
  T11 = fileF2057;
  T9 = T11;
  T7 = T9;
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_exp_28) {
  P exp_,env_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(exp_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL3(1,VARREF(YcompilerSastYobjectify_with_subtransaction),exp_,env_,YPfalse);
  T0 = CALL2(1,VARREF(YcompilerSg2cYg2c_ast),T1,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_compile_load_29) {
  P name_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T0 = (P)YPsu(name_);
  (P)YcompilerSg2cYPcompile(T0);
  T2 = (P)YPsu(name_);
  T1 = (P)YcompilerSg2cYPload(T2);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_so_load_30) {
  P name_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = (P)YPsu(name_);
  T0 = (P)YcompilerSg2cYPload(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_eval_31) {
  P exp_,env_;
  P nameF2061;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(exp_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL2(1,VARREF(YcompilerSg2cYg2c_exp),exp_,env_);
  nameF2061 = T1;
  T2 = CALL1(1,VARREF(YcompilerSg2cYcompile_load),nameF2061);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_eval_32) {
  P ast_,env_;
  P nameF2062;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL2(1,VARREF(YcompilerSg2cYg2c_ast),ast_,env_);
  nameF2062 = T1;
  T2 = CALL1(1,VARREF(YcompilerSg2cYcompile_load),nameF2062);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_top_33) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YcompilerSg2cYg2c_build_app),VARREF(YcompilerSg2cYTg2c_appT));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_clean_34) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YcompilerSg2cYg2c_def_app),LITREF(lit_41),LITREF(lit_28));
  VARSET(YcompilerSg2cYTg2c_appT,T0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_compute_ast_35) {
  P filename_,ct_env_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(filename_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL1(1,VARREF(YcompilerStopYread_file),filename_);
  T0 = CALL3(1,VARREF(YcompilerSastYobjectify_with_subtransaction),T1,ct_env_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_compute_program_36) {
  P e_,env_;
  P fltF2068;
  P prgF2067;
  P lftF2066;
  P calF2065;
  P dynF2064;
  P boxF2063;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YcompilerSast_linearizeYinsert_boxX),e_);
  boxF2063 = T1;
  T3 = CALL1(1,VARREF(YcompilerSast_linearizeYanalyze_dynamic_extent),boxF2063);
  dynF2064 = T3;
  T5 = CALL1(1,VARREF(YcompilerSast_linearizeYanalyze_calls),dynF2064);
  calF2065 = T5;
  T7 = CALL1(1,VARREF(YcompilerSast_linearizeYliftX),calF2065);
  lftF2066 = T7;
  T9 = CALL1(1,VARREF(YcompilerSast_linearizeYextract_thingsX),lftF2066);
  prgF2067 = T9;
  T11 = CALL3(1,VARREF(YcompilerSast_linearizeYclosurize_mainX),prgF2067,env_,YPint((P)64));
  fltF2068 = T11;
  CALL1(1,VARREF(YcompilerSast_linearizeYgather_temporariesX),fltF2068);
  CALL2(1,VARREF(YcompilerSast_linearizeYregister_allocateX),fltF2068,YPfalse);
  T10 = prgF2067;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_c_module_37) {
  P code_out_,e_,prg_,mod_;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(e_, 1);
  ARG(prg_, 2);
  ARG(mod_, 3);
loop:
  CALL2(1,VARREF(YcompilerSg2cYgenerate_header),code_out_,e_);
  CALL2(1,VARREF(YcompilerSg2cYgenerate_global_environment),code_out_,mod_);
  T0 = CALL1(1,VARREF(YcompilerSast_linearizeYprogram_quotations),prg_);
  CALL2(1,VARREF(YcompilerSg2cYgenerate_quotation_forwards),code_out_,T0);
  T1 = CALL1(1,VARREF(YcompilerSast_linearizeYprogram_definitions),prg_);
  CALL2(1,VARREF(YcompilerSg2cYgenerate_function_forwards),code_out_,T1);
  T2 = CALL1(1,VARREF(YcompilerSast_linearizeYprogram_definitions),prg_);
  CALL2(1,VARREF(YcompilerSg2cYgenerate_function_bodies),code_out_,T2);
  T3 = CALL1(1,VARREF(Ynot),VARREF(YcompilerSg2cYTdynamic_linkingQT));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YcompilerSg2cYgenerate_module_info),code_out_,mod_);
  } else {
  }
  T5 = CALL1(1,VARREF(YcompilerSast_linearizeYprogram_form),prg_);
  CALL3(1,VARREF(YcompilerSg2cYgenerate_module_init),code_out_,mod_,T5);
  CALL1(1,VARREF(YcompilerSg2cYgenerate_trailer),code_out_);
UNLINK_STACK();
  QRET(prg_);
}

FUNCODEDEF(fun_38) {
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T1 = BOXVAL(FREEREF(0));
  CALL2(1,VARREF(YcompilerSg2cYgenerate_header),T1,YPfalse);
  T2 = BOXVAL(FREEREF(0));
  CALL2(1,VARREF(YcompilerSg2cYgenerate_main),T2,FREEREF(2));
  T4 = BOXVAL(FREEREF(0));
  T3 = CALL1(1,VARREF(YcompilerSg2cYgenerate_trailer),T4);
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_39) {
  P tmpF2069;
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2069 = T1;
  if (tmpF2069 != YPfalse) {
    T4 = BOXVAL(FREEREF(0));
    T3 = CALL1(1,VARREF(YgooSioSportYclose),T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_c_application_40) {
  P loader_,mod_;
  P out_portF2073;
  P out_nameF2072;
  P init_nameF2071;
  P appnameF2070;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL1(1,VARREF(YcompilerSg2cYmodule_loader_appname),loader_);
  appnameF2070 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF2070,LITREF(lit_51));
  init_nameF2071 = T3;
  T6 = CALL1(1,VARREF(YgooSsystemYc_filename),init_nameF2071);
  T5 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF2070,T6);
  out_nameF2072 = T5;
  out_portF2073 = YPfalse;
  out_portF2073 = BOXFAB(out_portF2073);
  T9 = FUNFAB(fun_38,3,out_portF2073,out_nameF2072,mod_);
  T10 = FUNFAB(fun_39,1,out_portF2073);
  T8 = with_cleanup(T9,T10);
  T4 = YPfalse;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_41) {
  P mod_;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T1 = BOXVAL(FREEREF(0));
  T4 = CALL1(1,VARREF(YcompilerSastYmodule_name),mod_);
  T3 = CALL1(1,VARREF(YcompilerSastYmodule_name_to_relpath),T4);
  T2 = CALL1(1,VARREF(YgooSsystemYobj_filename),T3);
  T0 = CALL3(1,VARREF(YruntimeSruntimeYformat),T1,LITREF(lit_60),T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_42) {
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T1 = BOXVAL(FREEREF(0));
  CALL3(1,VARREF(YruntimeSruntimeYformat),T1,LITREF(lit_55),FREEREF(2));
  T2 = BOXVAL(FREEREF(0));
  CALL3(1,VARREF(YruntimeSruntimeYformat),T2,LITREF(lit_56),FREEREF(2));
  T3 = BOXVAL(FREEREF(0));
  CALLN(1,VARREF(YruntimeSruntimeYformat),5,T3,LITREF(lit_57),VARREF(YgooSsystemYTc_extensionT),VARREF(YgooSsystemYTobj_extensionT),FREEREF(2));
  T4 = BOXVAL(FREEREF(0));
  CALL2(1,VARREF(YruntimeSruntimeYformat),T4,LITREF(lit_58));
  T5 = BOXVAL(FREEREF(0));
  CALL2(1,VARREF(YruntimeSruntimeYformat),T5,LITREF(lit_59));
  T6 = FUNFAB(fun_41,1,FREEREF(0));
  CALL2(1,VARREF(YcompilerSastYdo_module_loader_modules),T6,FREEREF(3));
  T7 = BOXVAL(FREEREF(0));
  T8 = CALL1(1,VARREF(YgooSsystemYobj_filename),FREEREF(4));
  CALL3(1,VARREF(YruntimeSruntimeYformat),T7,LITREF(lit_61),T8);
  T9 = BOXVAL(FREEREF(0));
  CALL3(1,VARREF(YruntimeSruntimeYformat),T9,LITREF(lit_62),FREEREF(5));
  T10 = BOXVAL(FREEREF(0));
  CALLN(1,VARREF(YruntimeSruntimeYformat),5,T10,LITREF(lit_63),FREEREF(5),FREEREF(2),FREEREF(2));
  T12 = BOXVAL(FREEREF(0));
  T11 = CALLN(1,VARREF(YruntimeSruntimeYformat),4,T12,LITREF(lit_64),FREEREF(5),FREEREF(2));
UNLINK_STACK();
  QRET(T11);
}

FUNCODEDEF(fun_43) {
  P tmpF2074;
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2074 = T1;
  if (tmpF2074 != YPfalse) {
    T4 = BOXVAL(FREEREF(0));
    T3 = CALL1(1,VARREF(YgooSioSportYclose),T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_makefile_44) {
  P loader_;
  P code_outF2080;
  P out_nameF2079;
  P sepF2078;
  P exe_nameF2077;
  P init_nameF2076;
  P appnameF2075;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSg2cYmodule_loader_appname),loader_);
  appnameF2075 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF2075,LITREF(lit_53));
  init_nameF2076 = T3;
  T5 = CALL1(1,VARREF(YgooSsystemYexe_filename),appnameF2075);
  exe_nameF2077 = T5;
  sepF2078 = VARREF(YgooSsystemYTpath_separatorT);
  T8 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF2075,LITREF(lit_54));
  out_nameF2079 = T8;
  code_outF2080 = YPfalse;
  code_outF2080 = BOXFAB(code_outF2080);
  T12 = FUNFAB(fun_42,6,code_outF2080,out_nameF2079,sepF2078,loader_,init_nameF2076,exe_nameF2077);
  T13 = FUNFAB(fun_43,1,code_outF2080);
  T11 = with_cleanup(T12,T13);
  T9 = T11;
  T7 = T9;
  T6 = T7;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pp_45) {
  P e_,code_out_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite),code_out_,e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_header_46) {
  P code_out_,e_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(e_, 1);
loop:
  CALL2(1,VARREF(YruntimeSruntimeYformat),code_out_,LITREF(lit_67));
  CALL2(1,VARREF(YruntimeSruntimeYformat),code_out_,LITREF(lit_68));
  if (VARREF(YcompilerSg2cYTdynamic_linkingQT) != YPfalse) {
    T1 = CALL2(1,VARREF(YruntimeSruntimeYformat),code_out_,LITREF(lit_69));
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_trailer_47) {
  P code_out_;
  P T0;
  P a1;
LINK_STACK();
  ARG(code_out_, 0);
loop:
  T0 = CALL2(1,VARREF(YruntimeSruntimeYformat),code_out_,LITREF(lit_71));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_48) {
  P binding_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T2 = CALL2(1,VARREF(YcompilerSastYbinding_native_toQ),binding_,FREEREF(1));
  T1 = CALL1(1,VARREF(Ynot),T2);
  T0 = CALL3(1,VARREF(YcompilerSg2cYgenerate_global_binding),FREEREF(0),T1,binding_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_global_environment_49) {
  P code_out_,mod_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  T0 = CALL1(1,VARREF(YcompilerSastYmodule_name),mod_);
  CALL3(1,VARREF(YruntimeSruntimeYformat),code_out_,LITREF(lit_73),T0);
  T2 = FUNFAB(fun_48,2,code_out_,mod_);
  T3 = CALL1(1,VARREF(YcompilerSastYmodule_target_environment),mod_);
  T1 = CALL2(1,VARREF(YcompilerSastYdo_static_global_bindings),T2,T3);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_generate_global_binding_50) {
  P code_out_,importedQ_,gb_;
  P nameF2083;
  P tmpF2082;
  P kindF2081;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(importedQ_, 1);
  ARG(gb_, 2);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYbinding_kind),gb_);
  kindF2081 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),kindF2081,LITREF(lit_78));
  tmpF2082 = T4;
  if (tmpF2082 != YPfalse) {
    T5 = tmpF2082;
  } else {
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),kindF2081,LITREF(lit_79));
    T5 = T6;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T8 = CALL1(1,VARREF(YcompilerSastYbinding_name),gb_);
    nameF2083 = T8;
    if (importedQ_ != YPfalse) {
      T10 = LITREF(lit_81);
    } else {
      T10 = LITREF(lit_82);
    }
    T11 = CALL1(1,VARREF(YcompilerSg2cYmangle_module_binding),gb_);
    T13 = CALL1(1,VARREF(YcompilerSastYbinding_module_name),gb_);
    T12 = CALL1(1,VARREF(YcompilerSg2cYmangle_string_literal),T13);
    T14 = CALL1(1,VARREF(YcompilerSg2cYmangle_string_literal),nameF2083);
    T9 = CALLN(1,VARREF(YruntimeSruntimeYformat),6,code_out_,LITREF(lit_80),T10,T11,T12,T14);
    T7 = T9;
    T2 = T7;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1480_51) {
  P x_1479_;
  P iF2084;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1479_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1479_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1479_);
    check_type(T4,VARREF(YLintG));
    iF2084 = T4;
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(0),iF2084);
    CALL3(1,VARREF(YgooScollectionsScollectionYelt_setter),T5,FREEREF(1),iF2084);
    T7 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1479_);
    a1 = T7;
    x_1479_ = a1;
    goto loop;
    T3 = T6;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YcompilerSg2cYchar_buffer_as_string) {
  P buffer_;
  P x_1480F2087;
  P stringF2086;
  P buffer_sizeF2085;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(buffer_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),buffer_);
  check_type(T1,VARREF(YLintG));
  buffer_sizeF2085 = T1;
  T3 = CALL2(1,VARREF(YgooScollectionsScollectionYfab),VARREF(YLstrG),buffer_sizeF2085);
  check_type(T3,VARREF(YLstrG));
  stringF2086 = T3;
  T4 = FUNSHELL(1,fun_x_1480_51,3);
  x_1480F2087 = T4;
  FUNINIT(x_1480F2087, 3,buffer_,stringF2086,x_1480F2087);
  T7 = CALL1(1,VARREF(YgooScollectionsSsequenceYbelow),buffer_sizeF2085);
  T6 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T7);
  T5 = CALL1(0,x_1480F2087,T6);
  T2 = stringF2086;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_53) {
  P i_;
  P encF2089;
  P cF2088;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YcompilerSg2cYchar_buffer_as_string),VARREF(YcompilerSg2cYTmangle_bufferT));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(1),i_);
    cF2088 = T4;
    T7 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),cF2088);
    T6 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YcompilerSg2cYDc_escapes),T7);
    encF2089 = T6;
    T8 = CALL2(1,VARREF(YgooSmathYE),encF2089,YPfalse);
    if (T8 != YPfalse) {
      T9 = CALL2(1,VARREF(YgooScollectionsScollectionYaddX),VARREF(YcompilerSg2cYTmangle_bufferT),cF2088);
    } else {
      T10 = CALL2(1,VARREF(YgooScollectionsSsequenceYcatX),VARREF(YcompilerSg2cYTmangle_bufferT),encF2089);
    }
    T12 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T12;
    i_ = a1;
    goto loop;
    T5 = T11;
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_string_literal_54) {
  P str_;
  P loopF2091;
  P lenF2090;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(str_, 0);
loop:
  CALL2(1,VARREF(YgooScollectionsSbufferYlen_setter),YPint((P)0),VARREF(YcompilerSg2cYTmangle_bufferT));
  T1 = CALL1(1,VARREF(YgooStypesYlen),str_);
  lenF2090 = T1;
  T3 = FUNSHELL(1,fun_loop_53,3);
  loopF2091 = T3;
  FUNINIT(loopF2091, 3,lenF2090,str_,loopF2091);
  T4 = CALL1(0,loopF2091,YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_string_literal_55) {
  P sym_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(sym_, 0);
loop:
  T1 = CALL1(1,VARREF(Ysym_name),sym_);
  T0 = CALL1(1,VARREF(YcompilerSg2cYmangle_string_literal),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_process_integer_56) {
  P number_,index_;
  P resultF2097;
  P resultF2096;
  P digitF2095;
  P remainderF2094;
  P quotientF2093;
  P tup40F2092;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(number_, 0);
  ARG(index_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYtruncS),number_,YPint((P)10));
  tup40F2092 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup40F2092,YPint((P)0));
  check_type(T3,VARREF(YLintG));
  quotientF2093 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup40F2092,YPint((P)1));
  check_type(T5,VARREF(YLintG));
  remainderF2094 = T5;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YcompilerSg2cYDnumber_characters),remainderF2094);
  check_type(T7,VARREF(YLchrG));
  digitF2095 = T7;
  T9 = CALL2(1,VARREF(YgooSmathYE),quotientF2093,YPint((P)0));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooScollectionsScollectionYfab),VARREF(YLstrG),index_);
    check_type(T11,VARREF(YLstrG));
    resultF2096 = T11;
    CALL3(1,VARREF(YgooScollectionsScollectionYelt_setter),digitF2095,resultF2096,YPint((P)0));
    T10 = resultF2096;
    T8 = T10;
  } else {
    T14 = CALL2(1,VARREF(YgooSmathYA),index_,YPint((P)1));
    T13 = CALL2(1,FREEREF(0),quotientF2093,T14);
    check_type(T13,VARREF(YLstrG));
    resultF2097 = T13;
    T16 = CALL1(1,VARREF(YgooStypesYlen),resultF2097);
    T15 = CALL2(1,VARREF(YgooSmathY_),T16,index_);
    CALL3(1,VARREF(YgooScollectionsScollectionYelt_setter),digitF2095,resultF2097,T15);
    T12 = resultF2097;
    T8 = T12;
  }
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_integer_57) {
  P number_;
  P process_integerF2098;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(number_, 0);
loop:
  T1 = FUNSHELL(1,fun_process_integer_56,1);
  process_integerF2098 = T1;
  FUNINIT(process_integerF2098, 1,process_integerF2098);
  T2 = CALL2(1,process_integerF2098,number_,YPint((P)1));
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1482_58) {
  P x_1481_;
  P iF2099;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1481_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1481_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1481_);
    iF2099 = T4;
    T6 = CALL1(1,VARREF(YcompilerSg2cYmangle_integer),iF2099);
    T5 = CALL3(1,VARREF(YgooSmacrosYcat),VARREF(YcompilerSg2cYDescape_separator),T6,VARREF(YcompilerSg2cYDescape_separator));
    CALL3(1,VARREF(YgooScollectionsScollectionYelt_setter),T5,FREEREF(0),iF2099);
    T8 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1481_);
    a1 = T8;
    x_1481_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1484_59) {
  P x_1483_;
  P mangleF2100;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1483_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1483_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1483_);
    mangleF2100 = T4;
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),mangleF2100,YPint((P)1));
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),mangleF2100,YPint((P)0));
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T7);
    CALL3(1,VARREF(YgooScollectionsScollectionYelt_setter),T5,FREEREF(0),T6);
    T9 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1483_);
    a1 = T9;
    x_1483_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1486_60) {
  P x_1485_;
  P iF2101;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1485_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1485_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1485_);
    iF2101 = T4;
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF2101);
    CALL3(1,VARREF(YgooScollectionsScollectionYelt_setter),T5,FREEREF(0),iF2101);
    T7 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1485_);
    a1 = T7;
    x_1485_ = a1;
    goto loop;
    T3 = T6;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1488_61) {
  P x_1487_;
  P iF2102;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1487_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1487_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1487_);
    iF2102 = T4;
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF2102);
    CALL3(1,VARREF(YgooScollectionsScollectionYelt_setter),T5,FREEREF(0),iF2102);
    T7 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1487_);
    a1 = T7;
    x_1487_ = a1;
    goto loop;
    T3 = T6;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YcompilerSg2cYmangler_reset) {
  P buffer_;
  P T0;
  P a1;
LINK_STACK();
  ARG(buffer_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScollectionsSbufferYlen_setter),YPint((P)0),buffer_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1490_63) {
  P x_1489_;
  P cF2103;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1489_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1489_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1489_);
    cF2103 = T4;
    T7 = CALL1(1,VARREF(YgooSmathYto_lower),cF2103);
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T7);
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YcompilerSg2cYDname_mangler_table),T6);
    CALL2(1,VARREF(YgooScollectionsScollectionYaddX),FREEREF(0),T5);
    T9 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1489_);
    a1 = T9;
    x_1489_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YcompilerSg2cYmangle_name_into) {
  P buf_,name_;
  P x_1490F2104;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(buf_, 0);
  ARG(name_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_1490_63,2);
  x_1490F2104 = T1;
  FUNINIT(x_1490F2104, 2,buf_,x_1490F2104);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),name_);
  T2 = CALL1(0,x_1490F2104,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_raw_name_65) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  CALL1(1,VARREF(YcompilerSg2cYmangler_reset),VARREF(YcompilerSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YcompilerSg2cYmangle_name_into),VARREF(YcompilerSg2cYTmangle_bufferT),name_);
  T0 = CALL1(1,VARREF(YcompilerSg2cYchar_buffer_as_string),VARREF(YcompilerSg2cYTmangle_bufferT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_raw_name_66) {
  P name_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T0 = CALL1(1,VARREF(YcompilerSg2cYmangle_raw_name),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_local_name_67) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  CALL1(1,VARREF(YcompilerSg2cYmangler_reset),VARREF(YcompilerSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YcompilerSg2cYmangle_name_into),VARREF(YcompilerSg2cYTmangle_bufferT),name_);
  CALL2(1,VARREF(YgooScollectionsScollectionYaddX),VARREF(YcompilerSg2cYTmangle_bufferT),VARREF(YcompilerSg2cYDlocal_marker));
  T0 = CALL1(1,VARREF(YcompilerSg2cYchar_buffer_as_string),VARREF(YcompilerSg2cYTmangle_bufferT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_local_name_68) {
  P name_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T0 = CALL1(1,VARREF(YcompilerSg2cYmangle_local_name),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_global_name_69) {
  P modname_,name_;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(modname_, 0);
  ARG(name_, 1);
loop:
  CALL1(1,VARREF(YcompilerSg2cYmangler_reset),VARREF(YcompilerSg2cYTmangle_bufferT));
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),modname_,VARREF(YcompilerSastYDgoo_boot_module_name));
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    CALL2(1,VARREF(YgooScollectionsScollectionYaddX),VARREF(YcompilerSg2cYTmangle_bufferT),VARREF(YcompilerSg2cYDmodule_marker));
    T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),modname_);
    T2 = CALL2(1,VARREF(YcompilerSg2cYmangle_name_into),VARREF(YcompilerSg2cYTmangle_bufferT),T3);
  } else {
  }
  CALL2(1,VARREF(YgooScollectionsScollectionYaddX),VARREF(YcompilerSg2cYTmangle_bufferT),VARREF(YcompilerSg2cYDmodule_marker));
  CALL2(1,VARREF(YcompilerSg2cYmangle_name_into),VARREF(YcompilerSg2cYTmangle_bufferT),name_);
  T4 = CALL1(1,VARREF(YcompilerSg2cYchar_buffer_as_string),VARREF(YcompilerSg2cYTmangle_bufferT));
UNLINK_STACK();
  RET(T4);
}

FUNCODEDEF(fun_mangle_global_name_70) {
  P modname_,name_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(modname_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T0 = CALL2(1,VARREF(YcompilerSg2cYmangle_global_name),modname_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_boot_name_71) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T0 = CALL2(1,VARREF(YcompilerSg2cYmangle_global_name),VARREF(YcompilerSastYDgoo_boot_module_name),name_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_module_binding_72) {
  P binding_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYbinding_module_name),binding_);
  T2 = CALL1(1,VARREF(YcompilerSastYbinding_name),binding_);
  T0 = CALL2(1,VARREF(YcompilerSg2cYmangle_global_name),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_local_marked_name_73) {
  P name_,marker_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(marker_, 1);
loop:
  CALL1(1,VARREF(YcompilerSg2cYmangler_reset),VARREF(YcompilerSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YcompilerSg2cYmangle_name_into),VARREF(YcompilerSg2cYTmangle_bufferT),name_);
  CALL2(1,VARREF(YgooScollectionsScollectionYaddX),VARREF(YcompilerSg2cYTmangle_bufferT),VARREF(YcompilerSg2cYDhygiene_char));
  T0 = CALL1(1,VARREF(YcompilerSg2cYmangle_integer),marker_);
  CALL2(1,VARREF(YgooScollectionsSsequenceYcatX),VARREF(YcompilerSg2cYTmangle_bufferT),T0);
  T1 = CALL1(1,VARREF(YcompilerSg2cYchar_buffer_as_string),VARREF(YcompilerSg2cYTmangle_bufferT));
UNLINK_STACK();
  RET(T1);
}

FUNCODEDEF(fun_mangle_local_marked_name_74) {
  P name_,marker_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(marker_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T0 = CALL2(1,VARREF(YcompilerSg2cYmangle_local_marked_name),T1,marker_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1494_75) {
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

FUNCODEDEF(fun_76) {
  P return_;
  P out_varF2116;
  P x_1493F2115;
  P x_1493F2114;
  P x_1493F2113;
  P x_1493F2112;
  P x_1493F2111;
  P x_1493F2110;
  P bodyF2109;
  P clausesF2108;
  P out_valF2107;
  P x_1493F2106;
  P x_1494F2105;
  P T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1494_75,1);
  x_1494F2105 = T1;
  FUNINIT(x_1494F2105, 1,return_);
  x_1493F2106 = FREEREF(0);
  out_valF2107 = YPfalse;
  out_valF2107 = BOXFAB(out_valF2107);
  clausesF2108 = YPfalse;
  clausesF2108 = BOXFAB(clausesF2108);
  bodyF2109 = YPfalse;
  bodyF2109 = BOXFAB(bodyF2109);
  T9 = CALL2(1,VARREF(YisaQ),x_1493F2106,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1493F2106,LITREF(lit_150),x_1494F2105);
    x_1493F2110 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1493F2110,x_1494F2105);
    BOXVAL(out_valF2107) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1493F2110);
    x_1493F2111 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1493F2111,x_1494F2105);
    x_1493F2112 = T16;
    BOXVAL(clausesF2108) = x_1493F2112;
    x_1493F2113 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1493F2113,x_1494F2105);
    T17 = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1493F2111);
    x_1493F2114 = T19;
    BOXVAL(bodyF2109) = x_1493F2114;
    x_1493F2115 = Ynil;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1493F2115,x_1494F2105);
    T20 = T21;
    T15 = T20;
    T12 = T15;
    T10 = T12;
  } else {
    T22 = CALL2(1,x_1494F2105,LITREF(lit_151),x_1493F2106);
  }
  T24 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF2116 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_152));
  T31 = CALL1(1,VARREF(Ylst),out_varF2116);
  T33 = BOXVAL(out_valF2107);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T28 = CALL2(1,VARREF(YgooSmacrosYcat),T29,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_153));
  T39 = BOXVAL(clausesF2108);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_154));
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_155));
  T46 = CALL1(1,VARREF(Ylst),YPtrue);
  T47 = CALL1(1,VARREF(Ylst),YPfalse);
  T44 = CALLN(1,VARREF(YgooSmacrosYcat),4,T45,T46,T47,Ynil);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T38 = CALL3(1,VARREF(YgooSmacrosYcat),T39,T40,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_156));
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_154));
  T54 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
  T55 = CALL1(1,VARREF(Ylst),out_varF2116);
  T56 = CALL1(1,VARREF(Ylst),YPchr((P)44));
  T53 = CALLN(1,VARREF(YgooSmacrosYcat),4,T54,T55,T56,Ynil);
  T52 = CALL1(1,VARREF(Ylst),T53);
  T49 = CALLN(1,VARREF(YgooSmacrosYcat),4,T50,T51,T52,Ynil);
  T48 = CALL1(1,VARREF(Ylst),T49);
  T57 = BOXVAL(bodyF2109);
  T35 = CALLN(1,VARREF(YgooSmacrosYcat),5,T36,T37,T48,T57,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T25 = CALLN(1,VARREF(YgooSmacrosYcat),4,T26,T27,T34,Ynil);
  T23 = T25;
  T7 = T23;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_77) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_76,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1498_78) {
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

FUNCODEDEF(fun_79) {
  P return_;
  P out_varF2126;
  P x_1497F2125;
  P x_1497F2124;
  P x_1497F2123;
  P x_1497F2122;
  P x_1497F2121;
  P bodyF2120;
  P out_valF2119;
  P x_1497F2118;
  P x_1498F2117;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1498_78,1);
  x_1498F2117 = T1;
  FUNINIT(x_1498F2117, 1,return_);
  x_1497F2118 = FREEREF(0);
  out_valF2119 = YPfalse;
  out_valF2119 = BOXFAB(out_valF2119);
  bodyF2120 = YPfalse;
  bodyF2120 = BOXFAB(bodyF2120);
  T7 = CALL2(1,VARREF(YisaQ),x_1497F2118,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1497F2118,LITREF(lit_159),x_1498F2117);
    x_1497F2121 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1497F2121,x_1498F2117);
    x_1497F2122 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1497F2122,x_1498F2117);
    BOXVAL(out_valF2119) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1497F2122);
    x_1497F2123 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1497F2123,x_1498F2117);
    T12 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1497F2121);
    x_1497F2124 = T16;
    BOXVAL(bodyF2120) = x_1497F2124;
    x_1497F2125 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1497F2125,x_1498F2117);
    T17 = T18;
    T10 = T17;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1498F2117,LITREF(lit_151),x_1497F2118);
  }
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF2126 = T21;
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_152));
  T28 = CALL1(1,VARREF(Ylst),out_varF2126);
  T30 = BOXVAL(out_valF2119);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),T28,T29,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T25 = CALL2(1,VARREF(YgooSmacrosYcat),T26,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
  T34 = CALL1(1,VARREF(Ylst),out_varF2126);
  T35 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T32 = CALLN(1,VARREF(YgooSmacrosYcat),4,T33,T34,T35,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T36 = BOXVAL(bodyF2120);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
  T40 = CALL1(1,VARREF(Ylst),out_varF2126);
  T41 = CALL1(1,VARREF(Ylst),YPchr((P)41));
  T38 = CALLN(1,VARREF(YgooSmacrosYcat),4,T39,T40,T41,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T22 = CALLN(1,VARREF(YgooSmacrosYcat),6,T23,T24,T31,T36,T37,Ynil);
  T20 = T22;
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_80) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_79,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1502_81) {
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

FUNCODEDEF(fun_loop_82) {
  P forms_,body_,firstQ_;
  P tmpF2127;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(forms_, 0);
  ARG(body_, 1);
  ARG(firstQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),body_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),forms_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yhead),body_);
    tmpF2127 = firstQ_;
    if (tmpF2127 != YPfalse) {
      T8 = tmpF2127;
    } else {
      T10 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
      T11 = CALL1(1,VARREF(Ylst),FREEREF(1));
      T12 = CALL1(1,VARREF(Ylst),YPchr((P)44));
      T9 = CALLN(1,VARREF(YgooSmacrosYcat),4,T10,T11,T12,Ynil);
      T8 = T9;
    }
    T7 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYpair),T7,forms_);
    T4 = CALL2(1,VARREF(YgooSmacrosYpair),T5,T6);
    T13 = CALL1(1,VARREF(Ytail),body_);
    a1 = T4;
    a2 = T13;
    a3 = YPfalse;
    forms_ = a1;
    body_ = a2;
    firstQ_ = a3;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_83) {
  P return_;
  P loopF2138;
  P out_varF2137;
  P x_1501F2136;
  P x_1501F2135;
  P x_1501F2134;
  P x_1501F2133;
  P x_1501F2132;
  P bodyF2131;
  P out_valF2130;
  P x_1501F2129;
  P x_1502F2128;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1502_81,1);
  x_1502F2128 = T1;
  FUNINIT(x_1502F2128, 1,return_);
  x_1501F2129 = FREEREF(0);
  out_valF2130 = YPfalse;
  out_valF2130 = BOXFAB(out_valF2130);
  bodyF2131 = YPfalse;
  bodyF2131 = BOXFAB(bodyF2131);
  T7 = CALL2(1,VARREF(YisaQ),x_1501F2129,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1501F2129,LITREF(lit_161),x_1502F2128);
    x_1501F2132 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1501F2132,x_1502F2128);
    x_1501F2133 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1501F2133,x_1502F2128);
    BOXVAL(out_valF2130) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1501F2133);
    x_1501F2134 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1501F2134,x_1502F2128);
    T12 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1501F2132);
    x_1501F2135 = T16;
    BOXVAL(bodyF2131) = x_1501F2135;
    x_1501F2136 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1501F2136,x_1502F2128);
    T17 = T18;
    T10 = T17;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1502F2128,LITREF(lit_151),x_1501F2129);
  }
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF2137 = T21;
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_152));
  T28 = CALL1(1,VARREF(Ylst),out_varF2137);
  T30 = BOXVAL(out_valF2130);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),T28,T29,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T25 = CALL2(1,VARREF(YgooSmacrosYcat),T26,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
  T34 = CALL1(1,VARREF(Ylst),out_varF2137);
  T35 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T32 = CALLN(1,VARREF(YgooSmacrosYcat),4,T33,T34,T35,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T37 = FUNSHELL(1,fun_loop_82,2);
  loopF2138 = T37;
  FUNINIT(loopF2138, 2,loopF2138,out_varF2137);
  T39 = BOXVAL(bodyF2131);
  T38 = CALL3(0,loopF2138,Ynil,T39,YPtrue);
  T36 = T38;
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
  T43 = CALL1(1,VARREF(Ylst),out_varF2137);
  T44 = CALL1(1,VARREF(Ylst),YPchr((P)41));
  T41 = CALLN(1,VARREF(YgooSmacrosYcat),4,T42,T43,T44,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T22 = CALLN(1,VARREF(YgooSmacrosYcat),6,T23,T24,T31,T36,T40,Ynil);
  T20 = T22;
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_84) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_83,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_result_85) {
  P e_,d_,code_out_;
  P tmpF2141;
  P tmpF2140;
  P regF2139;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(d_, 1);
  ARG(code_out_, 2);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYprogram_register),e_);
  regF2139 = T1;
  tmpF2140 = regF2139;
  if (tmpF2140 != YPfalse) {
    T5 = CALL3(1,VARREF(YruntimeSruntimeYformat),code_out_,LITREF(lit_166),regF2139);
    tmpF2141 = T5;
    if (tmpF2141 != YPfalse) {
      T6 = YPtrue;
    } else {
      T6 = YPfalse;
    }
    T4 = T6;
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1504_86) {
  P x_1503_;
  P iF2142;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1503_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1503_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1503_);
    iF2142 = T4;
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_170));
    T6 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1503_);
    a1 = T6;
    x_1503_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_depth_87) {
  P d_,code_out_;
  P x_1504F2143;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(d_, 0);
  ARG(code_out_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_1504_86,2);
  x_1504F2143 = T1;
  FUNINIT(x_1504F2143, 2,code_out_,x_1504F2143);
  T4 = CALL1(1,VARREF(YgooScollectionsSsequenceYbelow),d_);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T4);
  T2 = CALL1(0,x_1504F2143,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1508_88) {
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

FUNCODEDEF(fun_89) {
  P return_;
  P x_1507F2154;
  P x_1507F2153;
  P x_1507F2152;
  P x_1507F2151;
  P x_1507F2150;
  P x_1507F2149;
  P bodyF2148;
  P code_outF2147;
  P dF2146;
  P x_1507F2145;
  P x_1508F2144;
  P T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1508_88,1);
  x_1508F2144 = T1;
  FUNINIT(x_1508F2144, 1,return_);
  x_1507F2145 = FREEREF(0);
  dF2146 = YPfalse;
  dF2146 = BOXFAB(dF2146);
  code_outF2147 = YPfalse;
  code_outF2147 = BOXFAB(code_outF2147);
  bodyF2148 = YPfalse;
  bodyF2148 = BOXFAB(bodyF2148);
  T9 = CALL2(1,VARREF(YisaQ),x_1507F2145,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1507F2145,LITREF(lit_172),x_1508F2144);
    x_1507F2149 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1507F2149,x_1508F2144);
    x_1507F2150 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1507F2150,x_1508F2144);
    BOXVAL(dF2146) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1507F2150);
    x_1507F2151 = T16;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1507F2151,x_1508F2144);
    BOXVAL(code_outF2147) = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1507F2151);
    x_1507F2152 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1507F2152,x_1508F2144);
    T17 = T20;
    T14 = T17;
    T21 = CALL1(1,VARREF(Ytail),x_1507F2149);
    x_1507F2153 = T21;
    BOXVAL(bodyF2148) = x_1507F2153;
    x_1507F2154 = Ynil;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1507F2154,x_1508F2144);
    T22 = T23;
    T12 = T22;
    T10 = T12;
  } else {
    T24 = CALL2(1,x_1508F2144,LITREF(lit_151),x_1507F2145);
  }
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_173));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_167));
  T31 = BOXVAL(dF2146);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T33 = BOXVAL(code_outF2147);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T28 = CALLN(1,VARREF(YgooSmacrosYcat),4,T29,T30,T32,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T34 = BOXVAL(bodyF2148);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_174));
  T39 = BOXVAL(code_outF2147);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_175));
  T36 = CALLN(1,VARREF(YgooSmacrosYcat),4,T37,T38,T40,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T25 = CALLN(1,VARREF(YgooSmacrosYcat),5,T26,T27,T34,T35,Ynil);
  T7 = T25;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_90) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_89,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1512_91) {
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

FUNCODEDEF(fun_92) {
  P return_;
  P x_1511F2167;
  P x_1511F2166;
  P x_1511F2165;
  P x_1511F2164;
  P x_1511F2163;
  P x_1511F2162;
  P x_1511F2161;
  P bodyF2160;
  P code_outF2159;
  P dF2158;
  P eF2157;
  P x_1511F2156;
  P x_1512F2155;
  P T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1512_91,1);
  x_1512F2155 = T1;
  FUNINIT(x_1512F2155, 1,return_);
  x_1511F2156 = FREEREF(0);
  eF2157 = YPfalse;
  eF2157 = BOXFAB(eF2157);
  dF2158 = YPfalse;
  dF2158 = BOXFAB(dF2158);
  code_outF2159 = YPfalse;
  code_outF2159 = BOXFAB(code_outF2159);
  bodyF2160 = YPfalse;
  bodyF2160 = BOXFAB(bodyF2160);
  T11 = CALL2(1,VARREF(YisaQ),x_1511F2156,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1511F2156,LITREF(lit_177),x_1512F2155);
    x_1511F2161 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1511F2161,x_1512F2155);
    x_1511F2162 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1511F2162,x_1512F2155);
    BOXVAL(eF2157) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1511F2162);
    x_1511F2163 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1511F2163,x_1512F2155);
    BOXVAL(dF2158) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1511F2163);
    x_1511F2164 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1511F2164,x_1512F2155);
    BOXVAL(code_outF2159) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1511F2164);
    x_1511F2165 = T24;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1511F2165,x_1512F2155);
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T26 = CALL1(1,VARREF(Ytail),x_1511F2161);
    x_1511F2166 = T26;
    BOXVAL(bodyF2160) = x_1511F2166;
    x_1511F2167 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1511F2167,x_1512F2155);
    T27 = T28;
    T14 = T27;
    T12 = T14;
  } else {
    T29 = CALL2(1,x_1512F2155,LITREF(lit_151),x_1511F2156);
  }
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_172));
  T35 = BOXVAL(dF2158);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T37 = BOXVAL(code_outF2159);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T36,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_164));
  T42 = BOXVAL(eF2157);
  T41 = CALL1(1,VARREF(Ylst),T42);
  T44 = BOXVAL(dF2158);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T46 = BOXVAL(code_outF2159);
  T45 = CALL1(1,VARREF(Ylst),T46);
  T39 = CALLN(1,VARREF(YgooSmacrosYcat),5,T40,T41,T43,T45,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T47 = BOXVAL(bodyF2160);
  T30 = CALLN(1,VARREF(YgooSmacrosYcat),5,T31,T32,T38,T47,Ynil);
  T9 = T30;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_93) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_92,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1516_94) {
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

FUNCODEDEF(fun_95) {
  P return_;
  P x_1515F2180;
  P x_1515F2179;
  P x_1515F2178;
  P x_1515F2177;
  P x_1515F2176;
  P x_1515F2175;
  P x_1515F2174;
  P bodyF2173;
  P code_outF2172;
  P dF2171;
  P eF2170;
  P x_1515F2169;
  P x_1516F2168;
  P T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33;
  P T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1516_94,1);
  x_1516F2168 = T1;
  FUNINIT(x_1516F2168, 1,return_);
  x_1515F2169 = FREEREF(0);
  eF2170 = YPfalse;
  eF2170 = BOXFAB(eF2170);
  dF2171 = YPfalse;
  dF2171 = BOXFAB(dF2171);
  code_outF2172 = YPfalse;
  code_outF2172 = BOXFAB(code_outF2172);
  bodyF2173 = YPfalse;
  bodyF2173 = BOXFAB(bodyF2173);
  T11 = CALL2(1,VARREF(YisaQ),x_1515F2169,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1515F2169,LITREF(lit_179),x_1516F2168);
    x_1515F2174 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1515F2174,x_1516F2168);
    x_1515F2175 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1515F2175,x_1516F2168);
    BOXVAL(eF2170) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1515F2175);
    x_1515F2176 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1515F2176,x_1516F2168);
    BOXVAL(dF2171) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1515F2176);
    x_1515F2177 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1515F2177,x_1516F2168);
    BOXVAL(code_outF2172) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1515F2177);
    x_1515F2178 = T24;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1515F2178,x_1516F2168);
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T26 = CALL1(1,VARREF(Ytail),x_1515F2174);
    x_1515F2179 = T26;
    BOXVAL(bodyF2173) = x_1515F2179;
    x_1515F2180 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1515F2180,x_1516F2168);
    T27 = T28;
    T14 = T27;
    T12 = T14;
  } else {
    T29 = CALL2(1,x_1516F2168,LITREF(lit_151),x_1515F2169);
  }
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_180));
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_181));
  T36 = BOXVAL(eF2170);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T35,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_177));
  T43 = BOXVAL(eF2170);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T45 = BOXVAL(dF2171);
  T44 = CALL1(1,VARREF(Ylst),T45);
  T47 = BOXVAL(code_outF2172);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T41 = CALLN(1,VARREF(YgooSmacrosYcat),4,T42,T44,T46,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T48 = BOXVAL(bodyF2173);
  T38 = CALLN(1,VARREF(YgooSmacrosYcat),4,T39,T40,T48,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T30 = CALLN(1,VARREF(YgooSmacrosYcat),4,T31,T32,T37,Ynil);
  T9 = T30;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_96) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_95,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1518_97) {
  P x_1517_;
  P qbF2181;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1517_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1517_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1517_);
    qbF2181 = T4;
    T5 = CALL1(1,VARREF(YcompilerSastYbinding_name),qbF2181);
    CALL3(1,VARREF(YruntimeSruntimeYformat),FREEREF(0),LITREF(lit_187),T5);
    T7 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1517_);
    a1 = T7;
    x_1517_ = a1;
    goto loop;
    T3 = T6;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_forwards_98) {
  P code_out_,qbT_;
  P x_1518F2182;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qbT_, 1);
loop:
  CALL2(1,VARREF(YruntimeSruntimeYformat),code_out_,LITREF(lit_184));
  T1 = FUNSHELL(1,fun_x_1518_97,2);
  x_1518F2182 = T1;
  FUNINIT(x_1518F2182, 2,code_out_,x_1518F2182);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),qbT_);
  T2 = CALL1(0,x_1518F2182,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1520_99) {
  P x_1519_;
  P qbF2183;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1519_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1519_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1519_);
    qbF2183 = T4;
    CALL2(1,VARREF(YcompilerSg2cYgen_depth),YPint((P)1),FREEREF(0));
    T5 = CALL1(1,VARREF(YcompilerSastYbinding_name),qbF2183);
    CALL3(1,VARREF(YruntimeSruntimeYformat),FREEREF(0),LITREF(lit_191),T5);
    T6 = CALL1(1,VARREF(YcompilerSastYbinding_info),qbF2183);
    CALL2(1,VARREF(YcompilerSg2cYgenerate_quotation),FREEREF(0),T6);
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_175));
    T8 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1519_);
    a1 = T8;
    x_1519_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotations_100) {
  P code_out_,qbT_;
  P x_1520F2184;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qbT_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_1520_99,2);
  x_1520F2184 = T1;
  FUNINIT(x_1520F2184, 2,code_out_,x_1520F2184);
  T4 = CALL1(1,VARREF(YgooScollectionsSsequenceYrev),qbT_);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T4);
  T2 = CALL1(0,x_1520F2184,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_false_name_101) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YcompilerSg2cYmangle_boot_name),LITREF(lit_193));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_102) {
  P code_out_,qb_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qb_, 1);
loop:
  if (qb_ != YPfalse) {
    T2 = LITREF(lit_196);
  } else {
    T2 = LITREF(lit_197);
  }
  T1 = CALL1(1,VARREF(YcompilerSg2cYmangle_boot_name),T2);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_103) {
  P code_out_,qb_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qb_, 1);
loop:
  T1 = CALL1(1,VARREF(YcompilerSg2cYmangle_boot_name),LITREF(lit_198));
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_104) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YcompilerSg2cYgenerate_quotation),FREEREF(0),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_105) {
  P code_out_,qb_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qb_, 1);
loop:
  T1 = FUNFAB(fun_104,1,code_out_);
  T0 = CALL3(1,VARREF(YcompilerSg2cYout_list_builder),T1,code_out_,qb_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_106) {
  P code_out_,x_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YcompilerSg2cYmangle_boot_name),LITREF(lit_200));
  T0 = CALLN(1,VARREF(YruntimeSruntimeYformat),4,code_out_,LITREF(lit_199),T1,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_107) {
  P code_out_,x_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YcompilerSg2cYmangle_boot_name),LITREF(lit_202));
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),x_);
  T0 = CALLN(1,VARREF(YruntimeSruntimeYformat),4,code_out_,LITREF(lit_201),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_108) {
  P i_;
  P x_1522F2186;
  P x_1521F2185;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooSmathYneg),YPint((P)1));
  T1 = CALL2(1,VARREF(YgooSmagnitudeYG),i_,T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(0),i_);
    x_1521F2185 = T4;
    x_1522F2186 = VARREF(YgooSmacrosYEE);
    T7 = CALL2(1,x_1522F2186,x_1521F2185,YPchr((P)115));
    if (T7 != YPfalse) {
      CALL3(1,VARREF(YgooScollectionsScollectionYelt_setter),YPchr((P)101),FREEREF(0),i_);
      T8 = CALL1(1,FREEREF(1),YPfalse);
      T6 = T8;
    } else {
      T10 = CALL2(1,x_1522F2186,x_1521F2185,YPchr((P)100));
      if (T10 != YPfalse) {
        CALL3(1,VARREF(YgooScollectionsScollectionYelt_setter),YPchr((P)101),FREEREF(0),i_);
        T11 = CALL1(1,FREEREF(1),YPfalse);
        T9 = T11;
      } else {
        T13 = CALL2(1,x_1522F2186,x_1521F2185,YPchr((P)120));
        if (T13 != YPfalse) {
          CALL3(1,VARREF(YgooScollectionsScollectionYelt_setter),YPchr((P)101),FREEREF(0),i_);
          T14 = CALL1(1,FREEREF(1),YPfalse);
          T12 = T14;
        } else {
          T16 = CALL2(1,VARREF(YgooSmathY_),i_,YPint((P)1));
          a1 = T16;
          i_ = a1;
          goto loop;
          T12 = T15;
        }
        T9 = T12;
      }
      T6 = T9;
    }
    T5 = T6;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = FREEREF(0);
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_109) {
  P done_;
  P loopF2187;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(done_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_108,3);
  loopF2187 = T1;
  FUNINIT(loopF2187, 3,FREEREF(0),done_,loopF2187);
  T4 = CALL1(1,VARREF(YgooStypesYlen),FREEREF(0));
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)1));
  T2 = CALL1(0,loopF2187,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_float_to_c_string_110) {
  P o_;
  P sF2188;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),o_);
  sF2188 = T1;
  T3 = FUNFAB(fun_109,1,sF2188);
  T2 = with_exit(T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_generate_quotation_111) {
  P code_out_,x_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YcompilerSg2cYmangle_boot_name),LITREF(lit_207));
  T2 = CALL1(1,VARREF(YcompilerSg2cYfloat_to_c_string),x_);
  T0 = CALLN(1,VARREF(YruntimeSruntimeYformat),4,code_out_,LITREF(lit_206),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_112) {
  P code_out_,x_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YcompilerSg2cYmangle_boot_name),LITREF(lit_209));
  T2 = CALL1(1,VARREF(YcompilerSg2cYmangle_string_literal),x_);
  T0 = CALLN(1,VARREF(YruntimeSruntimeYformat),4,code_out_,LITREF(lit_208),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1524_113) {
  P x_1523_;
  P eF2189;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1523_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1523_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1523_);
    eF2189 = T4;
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_214));
    CALL2(1,VARREF(YcompilerSg2cYgenerate_quotation),FREEREF(0),eF2189);
    T6 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1523_);
    a1 = T6;
    x_1523_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_114) {
  P code_out_,x_;
  P x_1524F2190;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL1(1,VARREF(YcompilerSg2cYmangle_boot_name),LITREF(lit_211));
  T1 = CALL1(1,VARREF(YgooStypesYlen),x_);
  CALLN(1,VARREF(YruntimeSruntimeYformat),4,code_out_,LITREF(lit_210),T0,T1);
  T2 = FUNSHELL(1,fun_x_1524_113,2);
  x_1524F2190 = T2;
  FUNINIT(x_1524F2190, 2,code_out_,x_1524F2190);
  T4 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),x_);
  T3 = CALL1(0,x_1524F2190,T4);
  T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_215));
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_generate_quotation_115) {
  P code_out_,x_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YcompilerSg2cYmangle_boot_name),LITREF(lit_217));
  T2 = CALL1(1,VARREF(YcompilerSg2cYmangle_string_literal),x_);
  T0 = CALLN(1,VARREF(YruntimeSruntimeYformat),4,code_out_,LITREF(lit_216),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_Gc_116) {
  P binding_,code_out_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(code_out_, 1);
loop:
  T2 = CALL1(1,VARREF(YcompilerSastYbinding_kind),binding_);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,LITREF(lit_219));
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YcompilerSastYbinding_name),binding_);
    T3 = CALL3(1,VARREF(YruntimeSruntimeYformat),code_out_,LITREF(lit_220),T4);
    T0 = T3;
  } else {
    T6 = CALL1(1,VARREF(YcompilerSg2cYmangle_module_binding),binding_);
    T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T6);
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_Gc_117) {
  P binding_,code_out_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(code_out_, 1);
loop:
  T2 = CALL1(1,VARREF(YcompilerSastYbinding_name),binding_);
  T1 = CALL1(1,VARREF(YcompilerSg2cYmangle_local_name),T2);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_Gc_118) {
  P binding_,code_out_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(code_out_, 1);
loop:
  T2 = CALL1(1,VARREF(YcompilerSastYbinding_name),binding_);
  T3 = CALL1(1,VARREF(YcompilerSastYbinding_index),binding_);
  T1 = CALL2(1,VARREF(YcompilerSg2cYmangle_local_marked_name),T2,T3);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_Gc_119) {
  P v_,code_out_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(v_, 0);
  ARG(code_out_, 1);
loop:
  T0 = CALL2(1,VARREF(YcompilerSg2cYbinding_Gc),v_,code_out_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_Gc_120) {
  P v_,code_out_;
  P x_1525F2191;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(v_, 0);
  ARG(code_out_, 1);
loop:
  T2 = CALL1(1,VARREF(YcompilerSastYbinding_kind),v_);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,LITREF(lit_219));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_223);
  } else {
    T0 = LITREF(lit_224);
  }
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T0);
  x_1525F2191 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1525F2191,YPchr((P)40));
  CALL2(1,VARREF(YcompilerSg2cYbinding_Gc),v_,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1525F2191,YPchr((P)41));
  T3 = T4;
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_to_c_121) {
  P e_,f_,d_,code_out_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YcompilerSast_linearizeYform_quotations),e_);
  CALL2(1,VARREF(YcompilerSg2cYgenerate_quotations),code_out_,T0);
  T1 = CALL1(1,VARREF(YcompilerSast_linearizeYform_definitions),e_);
  CALLN(1,VARREF(YcompilerSg2cYgenerate_functions),4,T1,f_,d_,code_out_);
  T2 = CALL1(1,VARREF(YcompilerSast_linearizeYform_program),e_);
  CALLN(1,VARREF(YcompilerSg2cYto_c),4,T2,f_,d_,code_out_);
  T4 = CALL1(1,VARREF(YcompilerSastYprogram_register),e_);
  if (T4 != YPfalse) {
    CALL2(1,VARREF(YcompilerSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YcompilerSg2cYgen_result),e_,d_,code_out_);
    T5 = CALL1(1,VARREF(YcompilerSast_linearizeYform_program),e_);
    CALL2(1,VARREF(YcompilerSg2cYgen_ref),T5,code_out_);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
    T3 = T6;
  } else {
    T3 = YPfalse;
  }
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_to_c_122) {
  P e_,f_,d_,code_out_;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_gen_ref_123) {
  P e_,code_out_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYreference_binding),e_);
  T0 = CALL2(1,VARREF(YcompilerSg2cYreference_Gc),T1,code_out_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_124) {
  P e_,code_out_;
  P x_1526F2192;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_228));
  x_1526F2192 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1526F2192,YPchr((P)40));
  T1 = CALL1(1,VARREF(YcompilerSast_linearizeYreference_offset),e_);
  CALL3(1,VARREF(YruntimeSruntimeYformat),code_out_,LITREF(lit_229),T1);
  T2 = CALL2(1,VARREF(YgooSioSportYput),x_1526F2192,YPchr((P)41));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_125) {
  P e_,code_out_;
  P regF2193;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYprogram_register),e_);
  regF2193 = T1;
  if (regF2193 != YPfalse) {
    T3 = CALL3(1,VARREF(YruntimeSruntimeYformat),code_out_,LITREF(lit_230),regF2193);
    T2 = T3;
  } else {
    T4 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_231));
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_126) {
  P e_,code_out_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYconstant_value),e_);
  T0 = CALL3(1,VARREF(YruntimeSruntimeYformat),code_out_,LITREF(lit_232),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_127) {
  P e_,code_out_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYconstant_value),e_);
  T0 = CALL2(1,VARREF(YcompilerSg2cYgenerate_quotation),code_out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_128) {
  P e_,code_out_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsSsequenceYlast),e_);
  T0 = CALL2(1,VARREF(YcompilerSg2cYgen_ref),T1,code_out_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_129) {
  P e_,f_,d_,code_out_;
  P T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YcompilerSastYassignment_form),e_);
  CALLN(1,VARREF(YcompilerSg2cYto_c),4,T0,f_,d_,code_out_);
  CALL2(1,VARREF(YcompilerSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YcompilerSg2cYgen_result),e_,d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_233));
  T1 = CALL1(1,VARREF(YcompilerSastYassignment_binding),e_);
  CALL2(1,VARREF(YcompilerSg2cYbinding_Gc),T1,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_234));
  T2 = CALL1(1,VARREF(YcompilerSastYassignment_form),e_);
  CALL2(1,VARREF(YcompilerSg2cYgen_ref),T2,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_235));
  T3 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_to_c_130) {
  P e_,f_,d_,code_out_;
  P x_1527F2194;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYprogram_register),e_);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YcompilerSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YcompilerSg2cYgen_result),e_,d_,code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_236));
    x_1527F2194 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1527F2194,YPchr((P)40));
    T3 = CALL1(1,VARREF(YcompilerSastYboundQ_reference),e_);
    T2 = CALL1(1,VARREF(YcompilerSastYreference_binding),T3);
    CALL2(1,VARREF(YcompilerSg2cYbinding_Gc),T2,code_out_);
    T4 = CALL2(1,VARREF(YgooSioSportYput),x_1527F2194,YPchr((P)41));
    T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_131) {
  P e_,f_,d_,code_out_;
  P x_1528F2195;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YcompilerSast_linearizeYbox_reference),e_);
  CALLN(1,VARREF(YcompilerSg2cYto_c),4,T0,f_,d_,code_out_);
  T2 = CALL1(1,VARREF(YcompilerSastYprogram_register),e_);
  if (T2 != YPfalse) {
    CALL2(1,VARREF(YcompilerSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YcompilerSg2cYgen_result),e_,d_,code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_237));
    x_1528F2195 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1528F2195,YPchr((P)40));
    T3 = CALL1(1,VARREF(YcompilerSast_linearizeYbox_reference),e_);
    CALL2(1,VARREF(YcompilerSg2cYgen_ref),T3,code_out_);
    T4 = CALL2(1,VARREF(YgooSioSportYput),x_1528F2195,YPchr((P)41));
    T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
    T1 = T5;
  } else {
    T1 = YPfalse;
  }
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_to_c_132) {
  P e_,f_,d_,code_out_;
  P x_1529F2196;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YcompilerSast_linearizeYbox_form),e_);
  CALLN(1,VARREF(YcompilerSg2cYto_c),4,T0,f_,d_,code_out_);
  CALL2(1,VARREF(YcompilerSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YcompilerSg2cYgen_result),e_,d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_238));
  x_1529F2196 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1529F2196,YPchr((P)40));
  T1 = CALL1(1,VARREF(YcompilerSast_linearizeYbox_reference),e_);
  CALL2(1,VARREF(YcompilerSg2cYgen_ref),T1,code_out_);
  T2 = CALL2(1,VARREF(YgooSioSportYput),x_1529F2196,YPchr((P)41));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_239));
  T3 = CALL1(1,VARREF(YcompilerSast_linearizeYbox_form),e_);
  CALL2(1,VARREF(YcompilerSg2cYgen_ref),T3,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(fun_to_c_133) {
  P e_,f_,d_,code_out_;
  P x_1530F2198;
  P bindingF2197;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  CALL2(1,VARREF(YcompilerSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YcompilerSg2cYgen_result),e_,d_,code_out_);
  T3 = CALL1(1,VARREF(YcompilerSast_linearizeYbox_reference),e_);
  T2 = CALL1(1,VARREF(YcompilerSast_linearizeYbox_reference),T3);
  T1 = CALL1(1,VARREF(YcompilerSastYreference_binding),T2);
  bindingF2197 = T1;
  CALL2(1,VARREF(YcompilerSg2cYbinding_Gc),bindingF2197,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_240));
  x_1530F2198 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1530F2198,YPchr((P)40));
  CALL2(1,VARREF(YcompilerSg2cYbinding_Gc),bindingF2197,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1530F2198,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_134) {
  P e_,f_,d_,code_out_;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YcompilerSastYalternative_condition),e_);
  CALLN(1,VARREF(YcompilerSg2cYto_c),4,T0,f_,d_,code_out_);
  CALL2(1,VARREF(YcompilerSg2cYgen_depth),d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_241));
  T1 = CALL1(1,VARREF(YcompilerSastYalternative_condition),e_);
  CALL2(1,VARREF(YcompilerSg2cYgen_ref),T1,code_out_);
  T2 = CALL0(1,VARREF(YcompilerSg2cYfalse_name));
  CALL3(1,VARREF(YruntimeSruntimeYformat),code_out_,LITREF(lit_242),T2);
  T3 = CALL1(1,VARREF(YcompilerSastYalternative_consequent),e_);
  T4 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
  CALLN(1,VARREF(YcompilerSg2cYto_c),4,T3,f_,T4,code_out_);
  T5 = CALL1(1,VARREF(YcompilerSastYprogram_register),e_);
  if (T5 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL2(1,VARREF(YcompilerSg2cYgen_depth),T6,code_out_);
    T7 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL3(1,VARREF(YcompilerSg2cYgen_result),e_,T7,code_out_);
    T8 = CALL1(1,VARREF(YcompilerSastYalternative_consequent),e_);
    CALL2(1,VARREF(YcompilerSg2cYgen_ref),T8,code_out_);
    T9 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
  } else {
  }
  CALL2(1,VARREF(YcompilerSg2cYgen_depth),d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_243));
  T10 = CALL1(1,VARREF(YcompilerSastYalternative_alternant),e_);
  T11 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
  CALLN(1,VARREF(YcompilerSg2cYto_c),4,T10,f_,T11,code_out_);
  T12 = CALL1(1,VARREF(YcompilerSastYprogram_register),e_);
  if (T12 != YPfalse) {
    T13 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL2(1,VARREF(YcompilerSg2cYgen_depth),T13,code_out_);
    T14 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL3(1,VARREF(YcompilerSg2cYgen_result),e_,T14,code_out_);
    T15 = CALL1(1,VARREF(YcompilerSastYalternative_alternant),e_);
    CALL2(1,VARREF(YcompilerSg2cYgen_ref),T15,code_out_);
    T16 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
  } else {
  }
  CALL2(1,VARREF(YcompilerSg2cYgen_depth),d_,code_out_);
  T17 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_244));
UNLINK_STACK();
  QRET(T17);
}

FUNCODEDEF(fun_135) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALLN(1,VARREF(YcompilerSg2cYto_c),4,x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_136) {
  P e_,f_,d_,code_out_;
  P T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = FUNFAB(fun_135,3,f_,d_,code_out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1532_137) {
  P x_1531_;
  P argF2199;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1531_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1531_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1531_);
    argF2199 = T4;
    CALLN(1,VARREF(YcompilerSg2cYto_c),4,argF2199,FREEREF(0),FREEREF(1),FREEREF(2));
    T6 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1531_);
    a1 = T6;
    x_1531_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1535_138) {
  P x_1534_,x_1533_;
  P argF2202;
  P iF2201;
  P tmpF2200;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1534_, 0);
  ARG(x_1533_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1534_);
  tmpF2200 = T3;
  if (tmpF2200 != YPfalse) {
    T4 = tmpF2200;
  } else {
    T5 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1533_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1534_);
    iF2201 = T7;
    T9 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1533_);
    argF2202 = T9;
    CALL2(1,VARREF(YcompilerSg2cYgen_depth),FREEREF(0),FREEREF(1));
    CALL3(1,VARREF(YruntimeSruntimeYformat),FREEREF(1),LITREF(lit_251),iF2201);
    CALL2(1,VARREF(YcompilerSg2cYgen_ref),argF2202,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_175));
    T11 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1534_);
    T12 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1533_);
    a1 = T11;
    a2 = T12;
    x_1534_ = a1;
    x_1533_ = a2;
    goto loop;
    T8 = T10;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1538_139) {
  P x_1537_,x_1536_;
  P bindingF2205;
  P iF2204;
  P tmpF2203;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1537_, 0);
  ARG(x_1536_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1537_);
  tmpF2203 = T3;
  if (tmpF2203 != YPfalse) {
    T4 = tmpF2203;
  } else {
    T5 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1536_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1537_);
    iF2204 = T7;
    T9 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1536_);
    bindingF2205 = T9;
    CALL2(1,VARREF(YcompilerSg2cYgen_depth),FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(YcompilerSg2cYbinding_Gc),bindingF2205,FREEREF(1));
    CALL3(1,VARREF(YruntimeSruntimeYformat),FREEREF(1),LITREF(lit_255),iF2204);
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_175));
    T11 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1537_);
    T12 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1536_);
    a1 = T11;
    a2 = T12;
    x_1537_ = a1;
    x_1536_ = a2;
    goto loop;
    T8 = T10;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_self_recursive_call_140) {
  P e_,f_,d_,code_out_;
  P x_1538F2208;
  P x_1535F2207;
  P x_1532F2206;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNSHELL(1,fun_x_1532_137,4);
  x_1532F2206 = T0;
  FUNINIT(x_1532F2206, 4,f_,d_,code_out_,x_1532F2206);
  T3 = CALL1(1,VARREF(YcompilerSastYapplication_arguments),e_);
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T3);
  T1 = CALL1(0,x_1532F2206,T2);
  T4 = FUNSHELL(1,fun_x_1535_138,3);
  x_1535F2207 = T4;
  FUNINIT(x_1535F2207, 3,d_,code_out_,x_1535F2207);
  T7 = CALL1(1,VARREF(YgooScollectionsSrangeYfrom),YPint((P)1));
  T6 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T7);
  T9 = CALL1(1,VARREF(YcompilerSastYapplication_arguments),e_);
  T8 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T9);
  T5 = CALL2(0,x_1535F2207,T6,T8);
  T10 = FUNSHELL(1,fun_x_1538_139,3);
  x_1538F2208 = T10;
  FUNINIT(x_1538F2208, 3,d_,code_out_,x_1538F2208);
  T13 = CALL1(1,VARREF(YgooScollectionsSrangeYfrom),YPint((P)1));
  T12 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T13);
  T15 = CALL1(1,VARREF(YcompilerSastYfunction_bindings),f_);
  T14 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T15);
  T11 = CALL2(0,x_1538F2208,T12,T14);
  CALL2(1,VARREF(YcompilerSg2cYgen_depth),d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_256));
  T16 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
UNLINK_STACK();
  QRET(T16);
}

FUNCODEDEF(fun_x_1540_141) {
  P x_1539_;
  P argF2209;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1539_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1539_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1539_);
    argF2209 = T4;
    CALLN(1,VARREF(YcompilerSg2cYto_c),4,argF2209,FREEREF(0),FREEREF(1),FREEREF(2));
    T6 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1539_);
    a1 = T6;
    x_1539_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1543_142) {
  P x_1542_;
  P argF2210;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1542_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1542_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1542_);
    argF2210 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL2(1,VARREF(YcompilerSg2cYgen_ref),argF2210,FREEREF(0));
    T6 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1542_);
    a1 = T6;
    x_1542_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_143) {
  P e_,f_,d_,code_out_;
  P x_1543F2219;
  P x_1541F2218;
  P x_1540F2217;
  P nF2216;
  P tmpF2215;
  P tmpF2214;
  P tmpF2213;
  P tmpF2212;
  P functionF2211;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYapplication_function),e_);
  functionF2211 = T1;
  T4 = CALL1(1,VARREF(YcompilerSastYapplication_tailQ),e_);
  tmpF2212 = T4;
  if (tmpF2212 != YPfalse) {
    T7 = CALL2(1,VARREF(YisaQ),f_,VARREF(YcompilerSastYLast_methodG));
    tmpF2213 = T7;
    if (tmpF2213 != YPfalse) {
      T11 = CALL1(1,VARREF(YcompilerSastYfunction_naryQ),f_);
      T10 = CALL1(1,VARREF(Ynot),T11);
      tmpF2214 = T10;
      if (tmpF2214 != YPfalse) {
        T14 = CALL2(1,VARREF(YisaQ),functionF2211,VARREF(YcompilerSast_linearizeYLfree_referenceG));
        tmpF2215 = T14;
        if (tmpF2215 != YPfalse) {
          T16 = CALL1(1,VARREF(YcompilerSast_linearizeYreference_selfQ),functionF2211);
          T15 = T16;
        } else {
          T15 = YPfalse;
        }
        T13 = T15;
        T12 = T13;
      } else {
        T12 = YPfalse;
      }
      T9 = T12;
      T8 = T9;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T17 = CALLN(1,VARREF(YcompilerSg2cYgenerate_self_recursive_call),4,e_,f_,d_,code_out_);
    T2 = T17;
  } else {
    T20 = CALL1(1,VARREF(YcompilerSastYapplication_arguments),e_);
    T19 = CALL1(1,VARREF(YgooStypesYlen),T20);
    nF2216 = T19;
    T21 = CALL1(1,VARREF(YcompilerSastYapplication_function),e_);
    CALLN(1,VARREF(YcompilerSg2cYto_c),4,T21,f_,d_,code_out_);
    T22 = FUNSHELL(1,fun_x_1540_141,4);
    x_1540F2217 = T22;
    FUNINIT(x_1540F2217, 4,f_,d_,code_out_,x_1540F2217);
    T25 = CALL1(1,VARREF(YcompilerSastYapplication_arguments),e_);
    T24 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T25);
    T23 = CALL1(0,x_1540F2217,T24);
    CALL2(1,VARREF(YcompilerSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YcompilerSg2cYgen_result),e_,d_,code_out_);
    T27 = CALL2(1,VARREF(YgooSmagnitudeYG),nF2216,VARREF(YcompilerSg2cYDnumber_call_templates));
    if (T27 != YPfalse) {
      T26 = LITREF(lit_260);
    } else {
      T26 = nF2216;
    }
    CALL3(1,VARREF(YruntimeSruntimeYformat),code_out_,LITREF(lit_259),T26);
    x_1541F2218 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1541F2218,YPchr((P)40));
    T29 = CALL1(1,VARREF(YcompilerSastYapplication_knownQ),e_);
    if (T29 != YPfalse) {
      T28 = LITREF(lit_261);
    } else {
      T28 = LITREF(lit_262);
    }
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,T28);
    T30 = CALL1(1,VARREF(YcompilerSastYapplication_function),e_);
    CALL2(1,VARREF(YcompilerSg2cYgen_ref),T30,code_out_);
    T31 = CALL2(1,VARREF(YgooSmagnitudeYG),nF2216,VARREF(YcompilerSg2cYDnumber_call_templates));
    if (T31 != YPfalse) {
      T32 = CALL3(1,VARREF(YruntimeSruntimeYformat),code_out_,LITREF(lit_263),nF2216);
    } else {
    }
    T33 = FUNSHELL(1,fun_x_1543_142,2);
    x_1543F2219 = T33;
    FUNINIT(x_1543F2219, 2,code_out_,x_1543F2219);
    T36 = CALL1(1,VARREF(YcompilerSastYapplication_arguments),e_);
    T35 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T36);
    T34 = CALL1(0,x_1543F2219,T35);
    T37 = CALL2(1,VARREF(YgooSioSportYput),x_1541F2218,YPchr((P)41));
    T38 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
    T18 = T38;
    T2 = T18;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1547_144) {
  P x_1546_,x_1545_;
  P xF2222;
  P firstQF2221;
  P tmpF2220;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1546_, 0);
  ARG(x_1545_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1546_);
  tmpF2220 = T3;
  if (tmpF2220 != YPfalse) {
    T4 = tmpF2220;
  } else {
    T5 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1545_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1546_);
    firstQF2221 = T7;
    T9 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1545_);
    xF2222 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF2221);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YcompilerSg2cYgen_ref),xF2222,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1546_);
    T14 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1545_);
    a1 = T13;
    a2 = T14;
    x_1546_ = a1;
    x_1545_ = a2;
    goto loop;
    T8 = T12;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_145) {
  P e_,f_,d_,code_out_;
  P x_1547F2224;
  P x_1544F2223;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  x_1544F2223 = code_out_;
  T2 = FUNSHELL(1,fun_x_1547_144,3);
  x_1547F2224 = T2;
  FUNINIT(x_1547F2224, 3,x_1544F2223,code_out_,x_1547F2224);
  T5 = CALL2(1,VARREF(YgooScollectionsSstepYfirst_then),YPtrue,YPfalse);
  T4 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T5);
  T6 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),e_);
  T3 = CALL2(0,x_1547F2224,T4,T6);
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1551_146) {
  P x_1550_,x_1549_,x_1548_;
  P x_1552F2230;
  P bindingF2229;
  P typeF2228;
  P initF2227;
  P tmpF2226;
  P tmpF2225;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_1550_, 0);
  ARG(x_1549_, 1);
  ARG(x_1548_, 2);
loop:
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1550_);
  tmpF2225 = T3;
  if (tmpF2225 != YPfalse) {
    T4 = tmpF2225;
  } else {
    T6 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1549_);
    tmpF2226 = T6;
    if (tmpF2226 != YPfalse) {
      T7 = tmpF2226;
    } else {
      T8 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1548_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1550_);
    initF2227 = T10;
    T12 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1549_);
    typeF2228 = T12;
    T14 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1548_);
    bindingF2229 = T14;
    CALLN(1,VARREF(YcompilerSg2cYto_c),4,initF2227,YPfalse,FREEREF(0),FREEREF(1));
    T16 = CALL1(1,VARREF(YcompilerSast_linearizeYunconstrained_typeQ),typeF2228);
    T15 = CALL1(1,VARREF(Ynot),T16);
    if (T15 != YPfalse) {
      CALLN(1,VARREF(YcompilerSg2cYto_c),4,typeF2228,YPfalse,FREEREF(0),FREEREF(1));
      CALL2(1,VARREF(YcompilerSg2cYgen_depth),FREEREF(0),FREEREF(1));
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_273));
      x_1552F2230 = FREEREF(1);
      CALL2(1,VARREF(YgooSioSportYput),x_1552F2230,YPchr((P)40));
      CALL2(1,VARREF(YcompilerSg2cYgen_ref),initF2227,FREEREF(1));
      CALL2(1,VARREF(YgooSioSportYput),x_1552F2230,YPchr((P)44));
      CALL2(1,VARREF(YcompilerSg2cYgen_ref),typeF2228,FREEREF(1));
      T17 = CALL2(1,VARREF(YgooSioSportYput),x_1552F2230,YPchr((P)41));
      T18 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_175));
    } else {
    }
    CALL2(1,VARREF(YcompilerSg2cYgen_depth),FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(YcompilerSg2cYbinding_Gc),bindingF2229,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_274));
    CALL2(1,VARREF(YcompilerSg2cYgen_ref),initF2227,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_175));
    T20 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1550_);
    T21 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1549_);
    T22 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1548_);
    a1 = T20;
    a2 = T21;
    a3 = T22;
    x_1550_ = a1;
    x_1549_ = a2;
    x_1548_ = a3;
    goto loop;
    T13 = T19;
    T11 = T13;
    T9 = T11;
    T0 = T9;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_147) {
  P e_,f_,d_,code_out_;
  P x_1551F2231;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNSHELL(1,fun_x_1551_146,3);
  x_1551F2231 = T0;
  FUNINIT(x_1551F2231, 3,d_,code_out_,x_1551F2231);
  T3 = CALL1(1,VARREF(YcompilerSastYfix_let_arguments),e_);
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T3);
  T5 = CALL1(1,VARREF(YcompilerSastYfix_let_types),e_);
  T4 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T5);
  T7 = CALL1(1,VARREF(YcompilerSastYfix_let_bindings),e_);
  T6 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T7);
  T1 = CALL3(0,x_1551F2231,T2,T4,T6);
  T8 = CALL1(1,VARREF(YcompilerSastYfix_let_body),e_);
  CALLN(1,VARREF(YcompilerSg2cYto_c),4,T8,f_,d_,code_out_);
  T10 = CALL1(1,VARREF(YcompilerSastYprogram_register),e_);
  if (T10 != YPfalse) {
    CALL2(1,VARREF(YcompilerSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YcompilerSg2cYgen_result),e_,d_,code_out_);
    T11 = CALL1(1,VARREF(YcompilerSastYfix_let_body),e_);
    CALL2(1,VARREF(YcompilerSg2cYgen_ref),T11,code_out_);
    T12 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
    T9 = T12;
  } else {
    T9 = YPfalse;
  }
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_x_1555_148) {
  P x_1554_,x_1553_;
  P bindingF2234;
  P initF2233;
  P tmpF2232;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1554_, 0);
  ARG(x_1553_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1554_);
  tmpF2232 = T3;
  if (tmpF2232 != YPfalse) {
    T4 = tmpF2232;
  } else {
    T5 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1553_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1554_);
    initF2233 = T7;
    T9 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1553_);
    bindingF2234 = T9;
    CALLN(1,VARREF(YcompilerSg2cYfunshell_to_c),5,bindingF2234,initF2233,YPfalse,FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(YcompilerSg2cYgen_depth),FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(YcompilerSg2cYbinding_Gc),bindingF2234,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_278));
    CALL2(1,VARREF(YcompilerSg2cYgen_ref),initF2233,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_175));
    T11 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1554_);
    T12 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1553_);
    a1 = T11;
    a2 = T12;
    x_1554_ = a1;
    x_1553_ = a2;
    goto loop;
    T8 = T10;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_149) {
  P e_,f_,d_,code_out_;
  P x_1555F2235;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNSHELL(1,fun_x_1555_148,3);
  x_1555F2235 = T0;
  FUNINIT(x_1555F2235, 3,d_,code_out_,x_1555F2235);
  T3 = CALL1(1,VARREF(YcompilerSastYlocals_functions),e_);
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T3);
  T5 = CALL1(1,VARREF(YcompilerSastYlocals_bindings),e_);
  T4 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T5);
  T1 = CALL2(0,x_1555F2235,T2,T4);
  T6 = CALLN(1,VARREF(YruntimeSruntimeYrcurry),4,VARREF(YcompilerSg2cYfuninit_to_c),f_,d_,code_out_);
  T7 = CALL1(1,VARREF(YcompilerSastYlocals_bindings),e_);
  T8 = CALL1(1,VARREF(YcompilerSastYlocals_functions),e_);
  CALL3(1,VARREF(YgooScollectionsScollectionYdo2),T6,T7,T8);
  T9 = CALL1(1,VARREF(YcompilerSastYlocals_body),e_);
  CALLN(1,VARREF(YcompilerSg2cYto_c),4,T9,f_,d_,code_out_);
  T11 = CALL1(1,VARREF(YcompilerSastYprogram_register),e_);
  if (T11 != YPfalse) {
    CALL2(1,VARREF(YcompilerSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YcompilerSg2cYgen_result),e_,d_,code_out_);
    T12 = CALL1(1,VARREF(YcompilerSastYlocals_body),e_);
    CALL2(1,VARREF(YcompilerSg2cYgen_ref),T12,code_out_);
    T13 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
    T10 = T13;
  } else {
    T10 = YPfalse;
  }
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_to_c_150) {
  P e_,f_,d_,code_out_;
  P x_1556F2236;
  P T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YcompilerSastYbind_exit_main_fun),e_);
  CALLN(1,VARREF(YcompilerSg2cYto_c),4,T0,f_,d_,code_out_);
  CALL2(1,VARREF(YcompilerSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YcompilerSg2cYgen_result),e_,d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_279));
  x_1556F2236 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1556F2236,YPchr((P)40));
  T1 = CALL1(1,VARREF(YcompilerSastYbind_exit_main_fun),e_);
  CALL2(1,VARREF(YcompilerSg2cYgen_ref),T1,code_out_);
  T2 = CALL2(1,VARREF(YgooSioSportYput),x_1556F2236,YPchr((P)41));
  T3 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_to_c_151) {
  P e_,f_,d_,code_out_;
  P x_1557F2237;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YcompilerSastYunwind_protect_protected_thunk),e_);
  CALLN(1,VARREF(YcompilerSg2cYto_c),4,T0,f_,d_,code_out_);
  T1 = CALL1(1,VARREF(YcompilerSastYunwind_protect_cleanup_thunk),e_);
  CALLN(1,VARREF(YcompilerSg2cYto_c),4,T1,f_,d_,code_out_);
  CALL2(1,VARREF(YcompilerSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YcompilerSg2cYgen_result),e_,d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_280));
  x_1557F2237 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1557F2237,YPchr((P)40));
  T2 = CALL1(1,VARREF(YcompilerSastYunwind_protect_protected_thunk),e_);
  CALL2(1,VARREF(YcompilerSg2cYgen_ref),T2,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1557F2237,YPchr((P)44));
  T3 = CALL1(1,VARREF(YcompilerSastYunwind_protect_cleanup_thunk),e_);
  CALL2(1,VARREF(YcompilerSg2cYgen_ref),T3,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1557F2237,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_to_c_152) {
  P e_,f_,d_,code_out_;
  P x_1558F2238;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YcompilerSastYmonitor_type),e_);
  CALLN(1,VARREF(YcompilerSg2cYto_c),4,T0,f_,d_,code_out_);
  T1 = CALL1(1,VARREF(YcompilerSastYmonitor_info),e_);
  CALLN(1,VARREF(YcompilerSg2cYto_c),4,T1,f_,d_,code_out_);
  T2 = CALL1(1,VARREF(YcompilerSastYmonitor_test),e_);
  CALLN(1,VARREF(YcompilerSg2cYto_c),4,T2,f_,d_,code_out_);
  T3 = CALL1(1,VARREF(YcompilerSastYmonitor_handler),e_);
  CALLN(1,VARREF(YcompilerSg2cYto_c),4,T3,f_,d_,code_out_);
  T4 = CALL1(1,VARREF(YcompilerSastYmonitor_main_thunk),e_);
  CALLN(1,VARREF(YcompilerSg2cYto_c),4,T4,f_,d_,code_out_);
  CALL2(1,VARREF(YcompilerSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YcompilerSg2cYgen_result),e_,d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_281));
  x_1558F2238 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1558F2238,YPchr((P)40));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_282));
  CALL2(1,VARREF(YgooSioSportYput),x_1558F2238,YPchr((P)44));
  T5 = CALL1(1,VARREF(YcompilerSg2cYmangle_boot_name),LITREF(lit_283));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T5);
  CALL2(1,VARREF(YgooSioSportYput),x_1558F2238,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_284));
  CALL2(1,VARREF(YgooSioSportYput),x_1558F2238,YPchr((P)44));
  T6 = CALL1(1,VARREF(YcompilerSastYmonitor_type),e_);
  CALL2(1,VARREF(YcompilerSg2cYgen_ref),T6,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1558F2238,YPchr((P)44));
  T7 = CALL1(1,VARREF(YcompilerSastYmonitor_info),e_);
  CALL2(1,VARREF(YcompilerSg2cYgen_ref),T7,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1558F2238,YPchr((P)44));
  T8 = CALL1(1,VARREF(YcompilerSastYmonitor_test),e_);
  CALL2(1,VARREF(YcompilerSg2cYgen_ref),T8,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1558F2238,YPchr((P)44));
  T9 = CALL1(1,VARREF(YcompilerSastYmonitor_handler),e_);
  CALL2(1,VARREF(YcompilerSg2cYgen_ref),T9,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1558F2238,YPchr((P)44));
  T10 = CALL1(1,VARREF(YcompilerSastYmonitor_main_thunk),e_);
  CALL2(1,VARREF(YcompilerSg2cYgen_ref),T10,code_out_);
  T11 = CALL2(1,VARREF(YgooSioSportYput),x_1558F2238,YPchr((P)41));
  T12 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
UNLINK_STACK();
  QRET(T12);
}

FUNCODEDEF(fun_x_1560_153) {
  P x_1559_;
  P argF2239;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1559_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1559_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1559_);
    argF2239 = T4;
    CALLN(1,VARREF(YcompilerSg2cYto_c),4,argF2239,FREEREF(0),FREEREF(1),FREEREF(2));
    T6 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1559_);
    a1 = T6;
    x_1559_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1565_154) {
  P x_1564_,x_1563_;
  P argF2242;
  P firstQF2241;
  P tmpF2240;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1564_, 0);
  ARG(x_1563_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1564_);
  tmpF2240 = T3;
  if (tmpF2240 != YPfalse) {
    T4 = tmpF2240;
  } else {
    T5 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1563_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1564_);
    firstQF2241 = T7;
    T9 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1563_);
    argF2242 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF2241);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YcompilerSg2cYgen_ref),argF2242,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1564_);
    T14 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1563_);
    a1 = T13;
    a2 = T14;
    x_1564_ = a1;
    x_1563_ = a2;
    goto loop;
    T8 = T12;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_155) {
  P e_,f_,d_,code_out_;
  P x_1565F2249;
  P x_1562F2248;
  P x_1561F2247;
  P x_1560F2246;
  P tmpF2245;
  P tmpF2244;
  P bindingF2243;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYapplication_binding),e_);
  bindingF2243 = T1;
  T4 = CALL1(1,VARREF(YcompilerSastYapplication_tailQ),e_);
  tmpF2244 = T4;
  if (tmpF2244 != YPfalse) {
    T7 = CALL2(1,VARREF(YisaQ),f_,VARREF(YcompilerSastYLast_primitiveG));
    tmpF2245 = T7;
    if (tmpF2245 != YPfalse) {
      T10 = CALL1(1,VARREF(YcompilerSastYfunction_binding),f_);
      T9 = CALL2(1,VARREF(YgooSmacrosYEE),bindingF2243,T10);
      T8 = T9;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T11 = CALLN(1,VARREF(YcompilerSg2cYgenerate_self_recursive_call),4,e_,f_,d_,code_out_);
    T2 = T11;
  } else {
    T12 = FUNSHELL(1,fun_x_1560_153,4);
    x_1560F2246 = T12;
    FUNINIT(x_1560F2246, 4,f_,d_,code_out_,x_1560F2246);
    T15 = CALL1(1,VARREF(YcompilerSastYapplication_arguments),e_);
    T14 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T15);
    T13 = CALL1(0,x_1560F2246,T14);
    CALL2(1,VARREF(YcompilerSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YcompilerSg2cYgen_result),e_,d_,code_out_);
    T17 = CALL1(1,VARREF(YcompilerSastYapplication_binding),e_);
    T16 = CALL1(1,VARREF(YcompilerSg2cYmangle_module_binding),T17);
    CALL3(1,VARREF(YruntimeSruntimeYformat),code_out_,LITREF(lit_287),T16);
    x_1561F2247 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1561F2247,YPchr((P)40));
    x_1562F2248 = code_out_;
    T19 = FUNSHELL(1,fun_x_1565_154,3);
    x_1565F2249 = T19;
    FUNINIT(x_1565F2249, 3,x_1562F2248,code_out_,x_1565F2249);
    T22 = CALL2(1,VARREF(YgooScollectionsSstepYfirst_then),YPtrue,YPfalse);
    T21 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T22);
    T24 = CALL1(1,VARREF(YcompilerSastYapplication_arguments),e_);
    T23 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T24);
    T20 = CALL2(0,x_1565F2249,T21,T23);
    T18 = T20;
    T25 = CALL2(1,VARREF(YgooSioSportYput),x_1561F2247,YPchr((P)41));
    T26 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
    T2 = T26;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_156) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALLN(1,VARREF(YcompilerSg2cYto_c),4,x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1568_157) {
  P x_1567_;
  P xF2250;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1567_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1567_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1567_);
    xF2250 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL2(1,VARREF(YcompilerSg2cYgen_ref),xF2250,FREEREF(0));
    T6 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1567_);
    a1 = T6;
    x_1567_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_158) {
  P e_,f_,d_,code_out_;
  P x_1568F2254;
  P x_1566F2253;
  P fF2252;
  P nF2251;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T2 = CALL1(1,VARREF(YcompilerSast_linearizeYclosure_creation_free),e_);
  T1 = CALL1(1,VARREF(YgooStypesYlen),T2);
  nF2251 = T1;
  T5 = CALL1(1,VARREF(YcompilerSast_linearizeYclosure_creation_index),e_);
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YcompilerSg2cYTdefinitionsT),T5);
  fF2252 = T4;
  T7 = CALL2(1,VARREF(YgooSmacrosYEE),nF2251,YPint((P)0));
  if (T7 != YPfalse) {
    T9 = CALL1(1,VARREF(YcompilerSastYprogram_register),e_);
    if (T9 != YPfalse) {
      CALL2(1,VARREF(YcompilerSg2cYgen_depth),d_,code_out_);
      CALL3(1,VARREF(YcompilerSg2cYgen_result),e_,d_,code_out_);
      CALL2(1,VARREF(YcompilerSg2cYgenerate_function_binding),code_out_,fF2252);
      T10 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
      T8 = T10;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
  } else {
    T11 = FUNFAB(fun_156,3,fF2252,d_,code_out_);
    T12 = CALL1(1,VARREF(YcompilerSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T11,T12);
    CALL2(1,VARREF(YcompilerSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YcompilerSg2cYgen_result),e_,d_,code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_291));
    x_1566F2253 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1566F2253,YPchr((P)40));
    CALL2(1,VARREF(YcompilerSg2cYgenerate_function_binding),code_out_,fF2252);
    CALL3(1,VARREF(YruntimeSruntimeYformat),code_out_,LITREF(lit_292),nF2251);
    T13 = FUNSHELL(1,fun_x_1568_157,2);
    x_1568F2254 = T13;
    FUNINIT(x_1568F2254, 2,code_out_,x_1568F2254);
    T16 = CALL1(1,VARREF(YcompilerSast_linearizeYclosure_creation_free),e_);
    T15 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T16);
    T14 = CALL1(0,x_1568F2254,T15);
    T17 = CALL2(1,VARREF(YgooSioSportYput),x_1566F2253,YPchr((P)41));
    T18 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
    T6 = T18;
  }
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_funshell_to_c_159) {
  P b_,e_,f_,d_,code_out_;
  P x_1569F2257;
  P fF2256;
  P nF2255;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(b_, 0);
  ARG(e_, 1);
  ARG(f_, 2);
  ARG(d_, 3);
  ARG(code_out_, 4);
loop:
  T2 = CALL1(1,VARREF(YcompilerSast_linearizeYclosure_creation_free),e_);
  T1 = CALL1(1,VARREF(YgooStypesYlen),T2);
  nF2255 = T1;
  T5 = CALL1(1,VARREF(YcompilerSast_linearizeYclosure_creation_index),e_);
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YcompilerSg2cYTdefinitionsT),T5);
  fF2256 = T4;
  CALL2(1,VARREF(YcompilerSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YcompilerSg2cYgen_result),e_,d_,code_out_);
  T6 = CALL2(1,VARREF(YgooSmacrosYEE),nF2255,YPint((P)0));
  if (T6 != YPfalse) {
    T7 = CALL2(1,VARREF(YcompilerSg2cYgenerate_function_binding),code_out_,fF2256);
  } else {
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_297));
    x_1569F2257 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1569F2257,YPchr((P)40));
    T10 = CALL1(1,VARREF(YcompilerSastYbinding_dynamic_extentQ),b_);
    if (T10 != YPfalse) {
      T9 = YPint((P)1);
    } else {
      T9 = YPint((P)0);
    }
    CALL3(1,VARREF(YruntimeSruntimeYformat),code_out_,LITREF(lit_298),T9);
    CALL2(1,VARREF(YgooSioSportYput),x_1569F2257,YPchr((P)44));
    CALL2(1,VARREF(YcompilerSg2cYgenerate_function_binding),code_out_,fF2256);
    CALL2(1,VARREF(YgooSioSportYput),x_1569F2257,YPchr((P)44));
    CALL3(1,VARREF(YruntimeSruntimeYformat),code_out_,LITREF(lit_299),nF2255);
    T11 = CALL2(1,VARREF(YgooSioSportYput),x_1569F2257,YPchr((P)41));
    T8 = T11;
  }
  T12 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
  T3 = T12;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_160) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALLN(1,VARREF(YcompilerSg2cYto_c),4,x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1572_161) {
  P x_1571_;
  P xF2258;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1571_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1571_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1571_);
    xF2258 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL2(1,VARREF(YcompilerSg2cYgen_ref),xF2258,FREEREF(0));
    T6 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1571_);
    a1 = T6;
    x_1571_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_funinit_to_c_162) {
  P b_,e_,f_,d_,code_out_;
  P x_1572F2261;
  P x_1570F2260;
  P nF2259;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(b_, 0);
  ARG(e_, 1);
  ARG(f_, 2);
  ARG(d_, 3);
  ARG(code_out_, 4);
loop:
  T2 = CALL1(1,VARREF(YcompilerSast_linearizeYclosure_creation_free),e_);
  T1 = CALL1(1,VARREF(YgooStypesYlen),T2);
  nF2259 = T1;
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),nF2259,YPint((P)0));
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = FUNFAB(fun_160,3,f_,d_,code_out_);
    T7 = CALL1(1,VARREF(YcompilerSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T6,T7);
    CALL2(1,VARREF(YcompilerSg2cYgen_depth),d_,code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_301));
    x_1570F2260 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1570F2260,YPchr((P)40));
    CALL2(1,VARREF(YcompilerSg2cYbinding_Gc),b_,code_out_);
    CALL3(1,VARREF(YruntimeSruntimeYformat),code_out_,LITREF(lit_302),nF2259);
    T8 = FUNSHELL(1,fun_x_1572_161,2);
    x_1572F2261 = T8;
    FUNINIT(x_1572F2261, 2,code_out_,x_1572F2261);
    T11 = CALL1(1,VARREF(YcompilerSast_linearizeYclosure_creation_free),e_);
    T10 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T11);
    T9 = CALL1(0,x_1572F2261,T10);
    T12 = CALL2(1,VARREF(YgooSioSportYput),x_1570F2260,YPchr((P)41));
    T13 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
    T3 = T13;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_163) {
  P e_,f_,d_,code_out_;
  P x_1573F2262;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YcompilerSastYassignment_form),e_);
  CALLN(1,VARREF(YcompilerSg2cYto_c),4,T0,YPfalse,d_,code_out_);
  CALL2(1,VARREF(YcompilerSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YcompilerSg2cYgen_result),e_,d_,code_out_);
  T1 = CALL1(1,VARREF(YcompilerSg2cYmangle_boot_name),LITREF(lit_305));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
  x_1573F2262 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1573F2262,YPchr((P)40));
  T3 = CALL1(1,VARREF(YcompilerSastYassignment_binding),e_);
  T2 = CALL1(1,VARREF(YcompilerSastYbinding_module_name),T3);
  CALL2(1,VARREF(YcompilerSg2cYgenerate_quotation),code_out_,T2);
  CALL2(1,VARREF(YgooSioSportYput),x_1573F2262,YPchr((P)44));
  T5 = CALL1(1,VARREF(YcompilerSastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(YcompilerSastYbinding_name),T5);
  CALL2(1,VARREF(YcompilerSg2cYgenerate_quotation),code_out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_1573F2262,YPchr((P)44));
  T6 = CALL1(1,VARREF(YcompilerSastYassignment_form),e_);
  CALL2(1,VARREF(YcompilerSg2cYgen_ref),T6,code_out_);
  T7 = CALL2(1,VARREF(YgooSioSportYput),x_1573F2262,YPchr((P)41));
  T8 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_x_1576_164) {
  P x_1575_;
  P eF2263;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1575_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1575_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1575_);
    eF2263 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL1(1,FREEREF(1),eF2263);
    T6 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1575_);
    a1 = T6;
    x_1575_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_out_list_builder_165) {
  P f_,code_out_,elts_;
  P x_1576F2265;
  P x_1574F2264;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(f_, 0);
  ARG(code_out_, 1);
  ARG(elts_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),elts_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YcompilerSg2cYmangle_boot_name),LITREF(lit_308));
    T2 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T3);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YcompilerSg2cYmangle_boot_name),LITREF(lit_309));
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,T4);
    x_1574F2264 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1574F2264,YPchr((P)40));
    T6 = CALL1(1,VARREF(YgooStypesYlen),elts_);
    CALL3(1,VARREF(YruntimeSruntimeYformat),code_out_,LITREF(lit_310),T6);
    T7 = FUNSHELL(1,fun_x_1576_164,3);
    x_1576F2265 = T7;
    FUNINIT(x_1576F2265, 3,code_out_,f_,x_1576F2265);
    T9 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),elts_);
    T8 = CALL1(0,x_1576F2265,T9);
    T10 = CALL2(1,VARREF(YgooSioSportYput),x_1574F2264,YPchr((P)41));
    T5 = T10;
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_166) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YcompilerSg2cYgen_ref),x_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_fab_list_167) {
  P code_out_,refs_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(refs_, 1);
loop:
  T1 = FUNFAB(fun_166,1,code_out_);
  T0 = CALL3(1,VARREF(YcompilerSg2cYout_list_builder),T1,code_out_,refs_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_specs_168) {
  P code_out_,sig_;
  P specsF2267;
  P typesF2266;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(sig_, 1);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYsignature_specs),sig_);
  typesF2266 = T1;
  T5 = CALL1(1,VARREF(YcompilerSastYsignature_naryQ),sig_);
  T4 = CALL1(1,VARREF(YcompilerSastYconstant_value),T5);
  if (T4 != YPfalse) {
    T8 = CALL1(1,VARREF(YgooStypesYlen),typesF2266);
    T7 = CALL2(1,VARREF(YgooSmathY_),T8,YPint((P)1));
    T6 = CALL3(1,VARREF(YgooScollectionsSsequenceYsub),typesF2266,YPint((P)0),T7);
    T3 = T6;
  } else {
    T3 = typesF2266;
  }
  specsF2267 = T3;
  T9 = CALL2(1,VARREF(YcompilerSg2cYgen_fab_list),code_out_,specsF2267);
  T2 = T9;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_169) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALLN(1,VARREF(YcompilerSg2cYto_c),4,x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_170) {
  P e_,f_,d_,code_out_;
  P x_1577F2268;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNFAB(fun_169,3,f_,d_,code_out_);
  T1 = CALL1(1,VARREF(YcompilerSastYsignature_specs),e_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL1(1,VARREF(YcompilerSastYsignature_value),e_);
  CALLN(1,VARREF(YcompilerSg2cYto_c),4,T2,f_,d_,code_out_);
  CALL2(1,VARREF(YcompilerSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YcompilerSg2cYgen_result),e_,d_,code_out_);
  T3 = CALL1(1,VARREF(YcompilerSg2cYmangle_boot_name),LITREF(lit_317));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T3);
  x_1577F2268 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1577F2268,YPchr((P)40));
  T4 = CALL1(1,VARREF(YcompilerSastYsignature_names),e_);
  CALL2(1,VARREF(YcompilerSg2cYgen_fab_list),code_out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_1577F2268,YPchr((P)44));
  CALL2(1,VARREF(YcompilerSg2cYgenerate_function_specs),code_out_,e_);
  CALL2(1,VARREF(YgooSioSportYput),x_1577F2268,YPchr((P)44));
  T5 = CALL1(1,VARREF(YcompilerSastYsignature_naryQ),e_);
  CALL2(1,VARREF(YcompilerSg2cYgen_ref),T5,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1577F2268,YPchr((P)44));
  T6 = CALL1(1,VARREF(YcompilerSastYsignature_arity),e_);
  CALL2(1,VARREF(YcompilerSg2cYgen_ref),T6,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1577F2268,YPchr((P)44));
  T7 = CALL1(1,VARREF(YcompilerSastYsignature_value),e_);
  CALL2(1,VARREF(YcompilerSg2cYgen_ref),T7,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1577F2268,YPchr((P)44));
  T8 = CALL1(1,VARREF(YcompilerSg2cYmangle_boot_name),LITREF(lit_318));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T8);
  T9 = CALL2(1,VARREF(YgooSioSportYput),x_1577F2268,YPchr((P)41));
  T10 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_to_c_171) {
  P e_,f_,d_,code_out_;
  P x_1578F2269;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YcompilerSastYfunction_signature),e_);
  CALLN(1,VARREF(YcompilerSg2cYto_c),4,T0,f_,d_,code_out_);
  CALL2(1,VARREF(YcompilerSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YcompilerSg2cYgen_result),e_,d_,code_out_);
  T1 = CALL1(1,VARREF(YcompilerSg2cYmangle_boot_name),LITREF(lit_319));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
  x_1578F2269 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1578F2269,YPchr((P)40));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_320));
  CALL2(1,VARREF(YgooSioSportYput),x_1578F2269,YPchr((P)44));
  T2 = CALL1(1,VARREF(YcompilerSastYfunction_debug_name),e_);
  CALL2(1,VARREF(YcompilerSg2cYgen_ref),T2,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1578F2269,YPchr((P)44));
  T3 = CALL1(1,VARREF(YcompilerSastYfunction_signature),e_);
  CALL2(1,VARREF(YcompilerSg2cYgen_ref),T3,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1578F2269,YPchr((P)44));
  T4 = CALL1(1,VARREF(YcompilerSg2cYmangle_boot_name),LITREF(lit_321));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_1578F2269,YPchr((P)44));
  T5 = CALL1(1,VARREF(YcompilerSg2cYmangle_boot_name),LITREF(lit_322));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T5);
  CALL2(1,VARREF(YgooSioSportYput),x_1578F2269,YPchr((P)44));
  T6 = CALL1(1,VARREF(YcompilerSg2cYmangle_boot_name),LITREF(lit_323));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T6);
  CALL2(1,VARREF(YgooSioSportYput),x_1578F2269,YPchr((P)44));
  T7 = CALL1(1,VARREF(YcompilerSg2cYmangle_boot_name),LITREF(lit_324));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T7);
  T8 = CALL2(1,VARREF(YgooSioSportYput),x_1578F2269,YPchr((P)41));
  T9 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_x_1580_172) {
  P x_1579_;
  P defF2270;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1579_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1579_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1579_);
    defF2270 = T4;
    CALL2(1,VARREF(YcompilerSg2cYgenerate_function_forward),FREEREF(0),defF2270);
    T6 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1579_);
    a1 = T6;
    x_1579_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_forwards_173) {
  P code_out_,definitions_;
  P x_1580F2271;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definitions_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_327));
  T1 = FUNSHELL(1,fun_x_1580_172,2);
  x_1580F2271 = T1;
  FUNINIT(x_1580F2271, 2,code_out_,x_1580F2271);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),definitions_);
  T2 = CALL1(0,x_1580F2271,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1584_174) {
  P x_1583_,x_1582_;
  P iF2274;
  P firstQF2273;
  P tmpF2272;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1583_, 0);
  ARG(x_1582_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1583_);
  tmpF2272 = T3;
  if (tmpF2272 != YPfalse) {
    T4 = tmpF2272;
  } else {
    T5 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1582_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1583_);
    firstQF2273 = T7;
    T9 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1582_);
    iF2274 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF2273);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_338));
    T13 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1583_);
    T14 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1582_);
    a1 = T13;
    a2 = T14;
    x_1583_ = a1;
    x_1582_ = a2;
    goto loop;
    T8 = T12;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_forward_175) {
  P code_out_,defn_;
  P x_1584F2276;
  P x_1581F2275;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(defn_, 1);
loop:
  if (VARREF(YcompilerSg2cYTdynamic_linkingQT) != YPfalse) {
    T0 = LITREF(lit_333);
  } else {
    T0 = LITREF(lit_334);
  }
  T2 = CALL1(1,VARREF(YcompilerSastYfunction_binding),defn_);
  T1 = CALL1(1,VARREF(YcompilerSg2cYmangle_module_binding),T2);
  CALLN(1,VARREF(YruntimeSruntimeYformat),4,code_out_,LITREF(lit_332),T0,T1);
  x_1581F2275 = code_out_;
  T4 = FUNSHELL(1,fun_x_1584_174,3);
  x_1584F2276 = T4;
  FUNINIT(x_1584F2276, 3,x_1581F2275,code_out_,x_1584F2276);
  T7 = CALL2(1,VARREF(YgooScollectionsSstepYfirst_then),YPtrue,YPfalse);
  T6 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T7);
  T11 = CALL1(1,VARREF(YcompilerSastYfunction_bindings),defn_);
  T10 = CALL1(1,VARREF(YgooStypesYlen),T11);
  T9 = CALL1(1,VARREF(YgooScollectionsSsequenceYbelow),T10);
  T8 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T9);
  T5 = CALL2(0,x_1584F2276,T6,T8);
  T3 = T5;
  T12 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_339));
UNLINK_STACK();
  QRET(T12);
}

FUNCODEDEF(fun_generate_function_binding_176) {
  P code_out_,defn_;
  P nameF2279;
  P tmpF2278;
  P nameF2277;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(defn_, 1);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYfunction_binding),defn_);
  nameF2277 = T1;
  T4 = CALL2(1,VARREF(YisaQ),nameF2277,VARREF(YcompilerSastYLmodule_bindingG));
  tmpF2278 = T4;
  if (tmpF2278 != YPfalse) {
    T7 = CALL1(1,VARREF(YcompilerSastYbinding_kind),nameF2277);
    T6 = CALL2(1,VARREF(YgooScollectionsScollectionYmemQ),LITREF(lit_341),T7);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T9 = CALL1(1,VARREF(YcompilerSg2cYmangle_module_binding),nameF2277);
    T8 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T9);
    T2 = T8;
  } else {
    T11 = CALL2(1,VARREF(YgooSmacrosYEE),nameF2277,YPfalse);
    if (T11 != YPfalse) {
      T13 = CALL1(1,VARREF(YcompilerSastYfunction_index),defn_);
      T12 = CALL3(1,VARREF(YruntimeSruntimeYformat),code_out_,LITREF(lit_342),T13);
      T10 = T12;
    } else {
      T16 = CALL2(1,VARREF(YisaQ),nameF2277,VARREF(YcompilerSastYLlocal_bindingG));
      if (T16 != YPfalse) {
        T17 = CALL1(1,VARREF(YcompilerSastYbinding_name),nameF2277);
        T15 = T17;
      } else {
        T15 = nameF2277;
      }
      nameF2279 = T15;
      T19 = CALL1(1,VARREF(YcompilerSg2cYmangle_raw_name),nameF2279);
      T20 = CALL1(1,VARREF(YcompilerSastYfunction_index),defn_);
      T18 = CALLN(1,VARREF(YruntimeSruntimeYformat),4,code_out_,LITREF(lit_343),T19,T20);
      T14 = T18;
      T10 = T14;
    }
    T2 = T10;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_forward_177) {
  P code_out_,defn_;
  P boundQF2280;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(defn_, 1);
loop:
  T2 = CALL1(1,VARREF(YcompilerSastYfunction_binding),defn_);
  T1 = CALL2(1,VARREF(YisaQ),T2,VARREF(YcompilerSastYLmodule_bindingG));
  boundQF2280 = T1;
  if (boundQF2280 != YPfalse) {
    T3 = LITREF(lit_344);
  } else {
    T3 = LITREF(lit_345);
  }
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T3);
  CALL2(1,VARREF(YcompilerSg2cYgenerate_function_binding),code_out_,defn_);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_346));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_178) {
  P def_;
  P T0;
  P a1;
LINK_STACK();
  ARG(def_, 0);
loop:
  T0 = CALL2(1,VARREF(YcompilerSg2cYgenerate_function_code),FREEREF(0),def_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_bodies_179) {
  P code_out_,definitions_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definitions_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_348));
  T1 = FUNFAB(fun_178,1,code_out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,definitions_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_180) {
  P def_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(def_, 0);
loop:
  T2 = CALL2(1,VARREF(YisaQ),def_,VARREF(YcompilerSastYLast_primitiveG));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALLN(1,VARREF(YcompilerSg2cYgenerate_closure_structure),4,def_,FREEREF(0),FREEREF(1),FREEREF(2));
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_functions_181) {
  P definitions_,f_,d_,code_out_;
  P T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(definitions_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = FUNFAB(fun_180,3,f_,d_,code_out_);
  T2 = CALL1(1,VARREF(YgooScollectionsSsequenceYrev),definitions_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_closure_structure_182) {
  P definition_,f_,d_,code_out_;
  P x_1585F2281;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(definition_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YcompilerSastYfunction_signature),definition_);
  CALLN(1,VARREF(YcompilerSg2cYto_c),4,T0,f_,d_,code_out_);
  CALL2(1,VARREF(YcompilerSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YcompilerSg2cYgen_result),definition_,d_,code_out_);
  CALL2(1,VARREF(YcompilerSg2cYgenerate_function_binding),code_out_,definition_);
  T1 = CALL1(1,VARREF(YcompilerSg2cYmangle_boot_name),LITREF(lit_354));
  CALL3(1,VARREF(YruntimeSruntimeYformat),code_out_,LITREF(lit_353),T1);
  x_1585F2281 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1585F2281,YPchr((P)40));
  CALL2(1,VARREF(YcompilerSg2cYgenerate_function_body_reference),code_out_,definition_);
  CALL2(1,VARREF(YgooSioSportYput),x_1585F2281,YPchr((P)44));
  T2 = CALL1(1,VARREF(YcompilerSastYfunction_debug_name),definition_);
  CALL2(1,VARREF(YcompilerSg2cYgen_ref),T2,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1585F2281,YPchr((P)44));
  T3 = CALL1(1,VARREF(YcompilerSastYfunction_signature),definition_);
  CALL2(1,VARREF(YcompilerSg2cYgen_ref),T3,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1585F2281,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_355));
  CALL2(1,VARREF(YgooSioSportYput),x_1585F2281,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_356));
  CALL2(1,VARREF(YgooSioSportYput),x_1585F2281,YPchr((P)44));
  T4 = CALL1(1,VARREF(YcompilerSastYfunction_source),definition_);
  CALL2(1,VARREF(YcompilerSg2cYgen_ref),T4,code_out_);
  T5 = CALL2(1,VARREF(YgooSioSportYput),x_1585F2281,YPchr((P)41));
  T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_generate_function_body_reference_183) {
  P code_out_,definition_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definition_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_358));
  CALL2(1,VARREF(YcompilerSg2cYgenerate_function_binding),code_out_,definition_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_359));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1590_184) {
  P x_1589_,x_1588_,x_1587_;
  P bF2286;
  P iF2285;
  P firstQF2284;
  P tmpF2283;
  P tmpF2282;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_1589_, 0);
  ARG(x_1588_, 1);
  ARG(x_1587_, 2);
loop:
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1589_);
  tmpF2282 = T3;
  if (tmpF2282 != YPfalse) {
    T4 = tmpF2282;
  } else {
    T6 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1588_);
    tmpF2283 = T6;
    if (tmpF2283 != YPfalse) {
      T7 = tmpF2283;
    } else {
      T8 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1587_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1589_);
    firstQF2284 = T10;
    T12 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1588_);
    iF2285 = T12;
    T14 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1587_);
    bF2286 = T14;
    T15 = CALL1(1,VARREF(Ynot),firstQF2284);
    if (T15 != YPfalse) {
      T16 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL3(1,VARREF(YruntimeSruntimeYformat),FREEREF(1),LITREF(lit_367),iF2285);
    T18 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1589_);
    T19 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1588_);
    T20 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1587_);
    a1 = T18;
    a2 = T19;
    a3 = T20;
    x_1589_ = a1;
    x_1588_ = a2;
    x_1587_ = a3;
    goto loop;
    T13 = T17;
    T11 = T13;
    T9 = T11;
    T0 = T9;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_shadow_args_185) {
  P bindings_,code_out_;
  P x_1590F2288;
  P x_1586F2287;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(bindings_, 0);
  ARG(code_out_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindings_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YcompilerSg2cYgen_depth),YPint((P)1),code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_362));
    x_1586F2287 = code_out_;
    T4 = FUNSHELL(1,fun_x_1590_184,3);
    x_1590F2288 = T4;
    FUNINIT(x_1590F2288, 3,x_1586F2287,code_out_,x_1590F2288);
    T7 = CALL2(1,VARREF(YgooScollectionsSstepYfirst_then),YPtrue,YPfalse);
    T6 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T7);
    T9 = CALL1(1,VARREF(YgooScollectionsSrangeYfrom),YPint((P)1));
    T8 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T9);
    T10 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),bindings_);
    T5 = CALL3(0,x_1590F2288,T6,T8,T10);
    T3 = T5;
    T11 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
    T0 = T11;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_return_186) {
  P defn_,d_,code_out_;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(defn_, 0);
  ARG(d_, 1);
  ARG(code_out_, 2);
loop:
  CALL2(1,VARREF(YcompilerSg2cYgen_depth),d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_369));
  T0 = CALL1(1,VARREF(YcompilerSastYfunction_body),defn_);
  CALL2(1,VARREF(YcompilerSg2cYgen_ref),T0,code_out_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_generate_return_187) {
  P defn_,d_,code_out_;
  P x_1591F2289;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(defn_, 0);
  ARG(d_, 1);
  ARG(code_out_, 2);
loop:
  CALL2(1,VARREF(YcompilerSg2cYgen_depth),d_,code_out_);
  T1 = CALL1(1,VARREF(YcompilerSastYfunction_value),defn_);
  T0 = CALL1(1,VARREF(YcompilerSast_linearizeYunconstrained_typeQ),T1);
  if (T0 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYput),code_out_,YPchr((P)81));
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_370));
  x_1591F2289 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1591F2289,YPchr((P)40));
  T3 = CALL1(1,VARREF(YcompilerSastYfunction_body),defn_);
  CALL2(1,VARREF(YcompilerSg2cYgen_ref),T3,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1591F2289,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_primitive_inlinableQ_188) {
  P e_;
  P bindingF2290;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYfunction_binding),e_);
  bindingF2290 = T1;
  T3 = CALL1(1,VARREF(YcompilerSastYbinding_name),bindingF2290);
  T2 = CALL2(1,VARREF(YgooScollectionsScollectionYmemQ),LITREF(lit_372),T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1596_189) {
  P x_1595_,x_1594_;
  P bindingF2293;
  P firstQF2292;
  P tmpF2291;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1595_, 0);
  ARG(x_1594_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1595_);
  tmpF2291 = T3;
  if (tmpF2291 != YPfalse) {
    T4 = tmpF2291;
  } else {
    T5 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1594_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1595_);
    firstQF2292 = T7;
    T9 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1594_);
    bindingF2293 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF2292);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_381));
    CALL2(1,VARREF(YcompilerSg2cYbinding_Gc),bindingF2293,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1595_);
    T14 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1594_);
    a1 = T13;
    a2 = T14;
    x_1595_ = a1;
    x_1594_ = a2;
    goto loop;
    T8 = T12;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_code_190) {
  P code_out_,e_;
  P x_1596F2296;
  P x_1593F2295;
  P x_1592F2294;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(e_, 1);
loop:
  if (VARREF(YcompilerSg2cYTdynamic_linkingQT) != YPfalse) {
    T0 = LITREF(lit_375);
  } else {
    T0 = LITREF(lit_376);
  }
  T2 = CALL1(1,VARREF(YcompilerSg2cYprimitive_inlinableQ),e_);
  if (T2 != YPfalse) {
    T1 = LITREF(lit_377);
  } else {
    T1 = LITREF(lit_376);
  }
  CALLN(1,VARREF(YruntimeSruntimeYformat),4,code_out_,LITREF(lit_374),T0,T1);
  T3 = CALL1(1,VARREF(YcompilerSastYfunction_binding),e_);
  CALL2(1,VARREF(YcompilerSg2cYbinding_Gc),T3,code_out_);
  x_1592F2294 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1592F2294,YPchr((P)40));
  x_1593F2295 = code_out_;
  T5 = FUNSHELL(1,fun_x_1596_189,3);
  x_1596F2296 = T5;
  FUNINIT(x_1596F2296, 3,x_1593F2295,code_out_,x_1596F2296);
  T8 = CALL2(1,VARREF(YgooScollectionsSstepYfirst_then),YPtrue,YPfalse);
  T7 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T8);
  T10 = CALL1(1,VARREF(YcompilerSastYfunction_bindings),e_);
  T9 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T10);
  T6 = CALL2(0,x_1596F2296,T7,T9);
  T4 = T6;
  T11 = CALL2(1,VARREF(YgooSioSportYput),x_1592F2294,YPchr((P)41));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_382));
  T12 = CALL1(1,VARREF(YcompilerSastYfunction_temporaries),e_);
  CALL2(1,VARREF(YcompilerSg2cYgenerate_local_temporaries),T12,code_out_);
  T13 = CALL1(1,VARREF(YcompilerSastYfunction_registers),e_);
  CALL2(1,VARREF(YcompilerSg2cYgenerate_registers),T13,code_out_);
  T14 = CALL1(1,VARREF(YcompilerSastYfunction_bindings),e_);
  CALL2(1,VARREF(YcompilerSg2cYgenerate_shadow_args),T14,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_383));
  T15 = CALL1(1,VARREF(YcompilerSastYfunction_body),e_);
  CALLN(1,VARREF(YcompilerSg2cYto_c),4,T15,e_,YPint((P)1),code_out_);
  CALL3(1,VARREF(YcompilerSg2cYgenerate_return),e_,YPint((P)1),code_out_);
  T16 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_384));
UNLINK_STACK();
  QRET(T16);
}

FUNCODEDEF(fun_dispatcherQ_191) {
  P definition_;
  P tmpF2300;
  P nameF2299;
  P tmpF2298;
  P bindingF2297;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(definition_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYfunction_binding),definition_);
  bindingF2297 = T1;
  T3 = CALL2(1,VARREF(YisaQ),bindingF2297,VARREF(YcompilerSastYLmodule_bindingG));
  tmpF2298 = T3;
  if (tmpF2298 != YPfalse) {
    T7 = CALL1(1,VARREF(YcompilerSastYbinding_name),bindingF2297);
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T7);
    nameF2299 = T6;
    T9 = CALL2(1,VARREF(YgooSmathYE),nameF2299,LITREF(lit_386));
    tmpF2300 = T9;
    if (tmpF2300 != YPfalse) {
      T10 = tmpF2300;
    } else {
      T12 = CALL2(1,VARREF(YgooScollectionsSsequenceYfinds),nameF2299,LITREF(lit_387));
      T14 = CALL1(1,VARREF(YgooStypesYlen),nameF2299);
      T15 = CALL1(1,VARREF(YgooStypesYlen),LITREF(lit_388));
      T13 = CALL2(1,VARREF(YgooSmathY_),T14,T15);
      T11 = CALL2(1,VARREF(YgooSmathYE),T12,T13);
      T10 = T11;
    }
    T8 = T10;
    T5 = T8;
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1600_192) {
  P x_1599_,x_1598_;
  P bF2303;
  P firstQF2302;
  P tmpF2301;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1599_, 0);
  ARG(x_1598_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1599_);
  tmpF2301 = T3;
  if (tmpF2301 != YPfalse) {
    T4 = tmpF2301;
  } else {
    T5 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1598_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1599_);
    firstQF2302 = T7;
    T9 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1598_);
    bF2303 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF2302);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YcompilerSg2cYbinding_Gc),bF2303,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1599_);
    T14 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1598_);
    a1 = T13;
    a2 = T14;
    x_1599_ = a1;
    x_1598_ = a2;
    goto loop;
    T8 = T12;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_193) {
  P b_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),b_,VARREF(YcompilerSastYLbindingG));
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YcompilerSg2cYgen_depth),YPint((P)1),FREEREF(0));
    T2 = CALL1(1,VARREF(YcompilerSastYbinding_dottedQ),b_);
    if (T2 != YPfalse) {
      T3 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_396));
    } else {
      T4 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_397));
    }
    CALL2(1,VARREF(YcompilerSg2cYbinding_Gc),b_,FREEREF(0));
    T5 = BOXVAL(FREEREF(1));
    CALL3(1,VARREF(YruntimeSruntimeYformat),FREEREF(0),LITREF(lit_398),T5);
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_175));
    T8 = BOXVAL(FREEREF(1));
    T7 = CALL2(1,VARREF(YgooSmathYA),T8,YPint((P)1));
    T6 = BOXVAL(FREEREF(1)) = T7;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_code_194) {
  P code_out_,definition_;
  P x_1600F2307;
  P x_1597F2306;
  P bindingsF2305;
  P offsetF2304;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definition_, 1);
loop:
  offsetF2304 = YPint((P)0);
  offsetF2304 = BOXFAB(offsetF2304);
  T3 = CALL1(1,VARREF(YcompilerSastYfunction_bindings),definition_);
  bindingsF2305 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_389));
  CALL2(1,VARREF(YcompilerSg2cYgenerate_function_binding),code_out_,definition_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_390));
  T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindingsF2305);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    CALL2(1,VARREF(YcompilerSg2cYgen_depth),YPint((P)1),code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_391));
    x_1597F2306 = code_out_;
    T7 = FUNSHELL(1,fun_x_1600_192,3);
    x_1600F2307 = T7;
    FUNINIT(x_1600F2307, 3,x_1597F2306,code_out_,x_1600F2307);
    T10 = CALL2(1,VARREF(YgooScollectionsSstepYfirst_then),YPtrue,YPfalse);
    T9 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T10);
    T12 = CALL1(1,VARREF(YcompilerSastYfunction_bindings),definition_);
    T11 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T12);
    T8 = CALL2(0,x_1600F2307,T9,T11);
    T6 = T8;
    T13 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
  } else {
  }
  T14 = CALL1(1,VARREF(YcompilerSastYfunction_temporaries),definition_);
  CALL2(1,VARREF(YcompilerSg2cYgenerate_local_temporaries),T14,code_out_);
  T15 = CALL1(1,VARREF(YcompilerSastYfunction_registers),definition_);
  CALL2(1,VARREF(YcompilerSg2cYgenerate_registers),T15,code_out_);
  T16 = CALL1(1,VARREF(YcompilerSastYfunction_bindings),definition_);
  CALL2(1,VARREF(YcompilerSg2cYgenerate_shadow_args),T16,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_395));
  T17 = FUNFAB(fun_193,2,code_out_,offsetF2304);
  CALL2(1,VARREF(YgooSmacrosYdo),T17,bindingsF2305);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_399));
  T18 = CALL1(1,VARREF(YcompilerSastYfunction_body),definition_);
  CALLN(1,VARREF(YcompilerSg2cYto_c),4,T18,definition_,YPint((P)1),code_out_);
  T20 = CALL1(1,VARREF(YcompilerSg2cYdispatcherQ),definition_);
  T19 = CALL1(1,VARREF(Ynot),T20);
  if (T19 != YPfalse) {
    T21 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_400));
  } else {
  }
  CALL3(1,VARREF(YcompilerSg2cYgenerate_return),definition_,YPint((P)1),code_out_);
  T22 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_401));
  T2 = T22;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1602_195) {
  P x_1601_;
  P tempF2308;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1601_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1601_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1601_);
    tempF2308 = T4;
    CALL2(1,VARREF(YcompilerSg2cYgen_depth),YPint((P)1),FREEREF(0));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_406));
    CALL2(1,VARREF(YcompilerSg2cYbinding_Gc),tempF2308,FREEREF(0));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_175));
    T6 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1601_);
    a1 = T6;
    x_1601_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_local_temporaries_196) {
  P temps_,code_out_;
  P x_1602F2309;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(temps_, 0);
  ARG(code_out_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_1602_195,2);
  x_1602F2309 = T1;
  FUNINIT(x_1602F2309, 2,code_out_,x_1602F2309);
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),temps_);
  T2 = CALL1(0,x_1602F2309,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_next_reg_197) {
  P regs_,i_;
  P tmpF2310;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(regs_, 0);
  ARG(i_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooSmathYE),i_,VARREF(YcompilerSg2cYTregisters_per_lineT));
  tmpF2310 = T2;
  if (tmpF2310 != YPfalse) {
    T3 = tmpF2310;
  } else {
    T4 = CALL1(1,VARREF(YgooSmacrosYemptyQ),regs_);
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_412));
    T5 = CALL1(0,FREEREF(1),regs_);
    T0 = T5;
  } else {
    T7 = CALL2(1,VARREF(YgooSmathYE),i_,YPint((P)0));
    T6 = CALL1(1,VARREF(Ynot),T7);
    if (T6 != YPfalse) {
      T8 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    T9 = CALL1(1,VARREF(Yhead),regs_);
    CALL2(1,VARREF(YcompilerSg2cYgen_ref),T9,FREEREF(0));
    T11 = CALL1(1,VARREF(Ytail),regs_);
    T12 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T11;
    a2 = T12;
    regs_ = a1;
    i_ = a2;
    goto loop;
    T0 = T10;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_next_line_198) {
  P regs_;
  P next_regF2311;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(regs_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),regs_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YcompilerSg2cYgen_depth),YPint((P)1),FREEREF(0));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_410));
    T4 = FUNSHELL(1,fun_next_reg_197,3);
    next_regF2311 = T4;
    FUNINIT(next_regF2311, 3,FREEREF(0),FREEREF(1),next_regF2311);
    T5 = CALL2(0,next_regF2311,regs_,YPint((P)0));
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_registers_199) {
  P regs_,code_out_;
  P next_lineF2312;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(regs_, 0);
  ARG(code_out_, 1);
loop:
  T1 = FUNSHELL(1,fun_next_line_198,2);
  next_lineF2312 = T1;
  FUNINIT(next_lineF2312, 2,code_out_,next_lineF2312);
  T2 = CALL1(0,next_lineF2312,regs_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_info_name_200) {
  P name_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSg2cYmangle_raw_name),name_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_414),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_maybe_declare_201) {
  P modname_;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T2 = CALL3(1,VARREF(YgooScollectionsScollectionYelt_or),FREEREF(0),modname_,YPfalse);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL3(1,VARREF(YgooScollectionsScollectionYelt_setter),YPtrue,FREEREF(0),modname_);
    T4 = CALL1(1,VARREF(YcompilerSg2cYmodule_info_name),modname_);
    T3 = CALL3(1,VARREF(YruntimeSruntimeYformat),FREEREF(1),LITREF(lit_417),T4);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_202) {
  P binding_;
  P home_modF2313;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYbinding_module_name),binding_);
  home_modF2313 = T1;
  T4 = CALL2(1,VARREF(YcompilerSastYbinding_native_toQ),binding_,FREEREF(0));
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T5 = CALL1(0,FREEREF(1),home_modF2313);
    T2 = T5;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YcompilerSg2cYdeclare_imported_module_infos) {
  P code_out_,mod_;
  P maybe_declareF2316;
  P envF2315;
  P seenF2314;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooScollectionsScollectionYfab),VARREF(YgooScollectionsScollectionYLtabG),YPint((P)50));
  seenF2314 = T1;
  T3 = CALL1(1,VARREF(YcompilerSastYmodule_target_environment),mod_);
  envF2315 = T3;
  T5 = FUNSHELL(0,fun_maybe_declare_201,2);
  maybe_declareF2316 = T5;
  FUNINIT(maybe_declareF2316, 2,seenF2314,code_out_);
  T7 = CALL1(1,VARREF(YcompilerSastYenvironment_uses_modules),envF2315);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YcompilerSastYmodule_name),T7);
  CALL2(1,VARREF(YgooSmacrosYdo),maybe_declareF2316,T6);
  T9 = FUNFAB(fun_202,2,mod_,maybe_declareF2316);
  T10 = CALL1(1,VARREF(YcompilerSastYmodule_target_environment),mod_);
  T8 = CALL2(1,VARREF(YcompilerSastYdo_static_global_bindings),T9,T10);
  T4 = T8;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1604_204) {
  P x_1603_;
  P nF2317;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1603_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1603_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1603_);
    nF2317 = T4;
    T5 = CALL1(1,VARREF(YcompilerSg2cYmodule_info_name),nF2317);
    CALL3(1,VARREF(YruntimeSruntimeYformat),FREEREF(0),LITREF(lit_423),T5);
    T7 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1603_);
    a1 = T7;
    x_1603_ = a1;
    goto loop;
    T3 = T6;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_205) {
  P local_name_,binding_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(local_name_, 0);
  ARG(binding_, 1);
loop:
  T2 = CALL2(1,VARREF(YcompilerSastYbinding_native_toQ),binding_,FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YcompilerSastYbinding_name),binding_);
    T4 = CALL1(1,VARREF(YcompilerSg2cYmangle_string_literal),T5);
    T7 = CALL1(1,VARREF(YcompilerSastYbinding_module_name),binding_);
    T6 = CALL1(1,VARREF(YcompilerSg2cYmodule_info_name),T7);
    T8 = CALL1(1,VARREF(YcompilerSg2cYmangle_string_literal),local_name_);
    T3 = CALLN(1,VARREF(YruntimeSruntimeYformat),5,FREEREF(1),LITREF(lit_427),T4,T6,T8);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_206) {
  P binding_;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL2(1,VARREF(YcompilerSastYbinding_native_toQ),binding_,FREEREF(0));
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YcompilerSastYbinding_kind),binding_);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_78));
    if (T3 != YPfalse) {
      T7 = CALL1(1,VARREF(YcompilerSastYbinding_name),binding_);
      T6 = CALL1(1,VARREF(YcompilerSg2cYmangle_string_literal),T7);
      T8 = CALL1(1,VARREF(YcompilerSg2cYmangle_module_binding),binding_);
      T5 = CALLN(1,VARREF(YruntimeSruntimeYformat),4,FREEREF(1),LITREF(lit_430),T6,T8);
      T2 = T5;
    } else {
      T11 = CALL1(1,VARREF(YcompilerSastYbinding_name),binding_);
      T10 = CALL1(1,VARREF(YcompilerSg2cYmangle_string_literal),T11);
      T9 = CALL3(1,VARREF(YruntimeSruntimeYformat),FREEREF(1),LITREF(lit_431),T10);
      T2 = T9;
    }
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1606_207) {
  P x_1605_;
  P bindingF2320;
  P exported_asF2319;
  P tup41F2318;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1605_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1605_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooScollectionsScollectionYnow_key),x_1605_);
    T6 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1605_);
    T4 = CALL2(1,VARREF(Ytup),T5,T6);
    tup41F2318 = T4;
    T8 = CALL2(1,VARREF(YgooSmacrosYelt),tup41F2318,YPint((P)0));
    exported_asF2319 = T8;
    T10 = CALL2(1,VARREF(YgooSmacrosYelt),tup41F2318,YPint((P)1));
    bindingF2320 = T10;
    T12 = CALL1(1,VARREF(YcompilerSastYbinding_name),bindingF2320);
    T11 = CALL1(1,VARREF(YcompilerSg2cYmangle_string_literal),T12);
    T13 = CALL1(1,VARREF(YcompilerSg2cYmangle_string_literal),exported_asF2319);
    CALLN(1,VARREF(YruntimeSruntimeYformat),4,FREEREF(0),LITREF(lit_436),T11,T13);
    T15 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1605_);
    a1 = T15;
    x_1605_ = a1;
    goto loop;
    T9 = T14;
    T7 = T9;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YcompilerSg2cYgenerate_module_info) {
  P code_out_,mod_;
  P x_1606F2327;
  P x_1604F2326;
  P uses_namesF2325;
  P usesF2324;
  P envF2323;
  P info_nameF2322;
  P nameF2321;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYmodule_name),mod_);
  nameF2321 = T1;
  T3 = CALL1(1,VARREF(YcompilerSg2cYmodule_info_name),nameF2321);
  info_nameF2322 = T3;
  T5 = CALL1(1,VARREF(YcompilerSastYmodule_target_environment),mod_);
  envF2323 = T5;
  T7 = CALL1(1,VARREF(YcompilerSastYenvironment_uses_modules),envF2323);
  usesF2324 = T7;
  T9 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YcompilerSastYmodule_name),usesF2324);
  uses_namesF2325 = T9;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_419));
  CALL2(1,VARREF(YcompilerSg2cYdeclare_imported_module_infos),code_out_,mod_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_420));
  T10 = FUNSHELL(1,fun_x_1604_204,2);
  x_1604F2326 = T10;
  FUNINIT(x_1604F2326, 2,code_out_,x_1604F2326);
  T12 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),uses_namesF2325);
  T11 = CALL1(0,x_1604F2326,T12);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_424));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_425));
  T13 = FUNFAB(fun_205,2,mod_,code_out_);
  T14 = CALL1(1,VARREF(YcompilerSastYmodule_target_environment),mod_);
  CALL2(1,VARREF(YcompilerSastYdo_named_static_global_bindings),T13,T14);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_428));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_429));
  T15 = FUNFAB(fun_206,2,mod_,code_out_);
  T16 = CALL1(1,VARREF(YcompilerSastYmodule_target_environment),mod_);
  CALL2(1,VARREF(YcompilerSastYdo_static_global_bindings),T15,T16);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_432));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_433));
  T17 = FUNSHELL(1,fun_x_1606_207,2);
  x_1606F2327 = T17;
  FUNINIT(x_1606F2327, 2,code_out_,x_1606F2327);
  T20 = CALL1(1,VARREF(YcompilerSastYmodule_exports),mod_);
  T19 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T20);
  T18 = CALL1(0,x_1606F2327,T19);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_437));
  CALL3(1,VARREF(YruntimeSruntimeYformat),code_out_,LITREF(lit_438),info_nameF2322);
  CALL3(1,VARREF(YruntimeSruntimeYformat),code_out_,LITREF(lit_439),info_nameF2322);
  T21 = CALL1(1,VARREF(YcompilerSg2cYmangle_string_literal),nameF2321);
  CALL3(1,VARREF(YruntimeSruntimeYformat),code_out_,LITREF(lit_440),T21);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_441));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_442));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_443));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_444));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_445));
  T22 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_446));
  T8 = T22;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_init_name_209) {
  P name_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSg2cYmangle_raw_name),name_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_448),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_init_decl_210) {
  P name_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSg2cYmodule_init_name),name_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_450),T1,LITREF(lit_451));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1608_211) {
  P x_1607_;
  P nF2328;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1607_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1607_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1607_);
    nF2328 = T4;
    T5 = CALL1(1,VARREF(YcompilerSg2cYmodule_init_decl),nF2328);
    CALL3(1,VARREF(YruntimeSruntimeYformat),FREEREF(0),LITREF(lit_458),T5);
    T7 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1607_);
    a1 = T7;
    x_1607_ = a1;
    goto loop;
    T3 = T6;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1610_212) {
  P x_1609_;
  P nF2329;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1609_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1609_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1609_);
    nF2329 = T4;
    T5 = CALL1(1,VARREF(YcompilerSg2cYmodule_init_name),nF2329);
    CALL3(1,VARREF(YruntimeSruntimeYformat),FREEREF(0),LITREF(lit_467),T5);
    T7 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1609_);
    a1 = T7;
    x_1609_ = a1;
    goto loop;
    T3 = T6;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_module_init_213) {
  P code_out_,mod_,form_;
  P x_1610F2336;
  P x_1608F2335;
  P uses_namesF2334;
  P usesF2333;
  P envF2332;
  P init_declF2331;
  P nameF2330;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
  ARG(form_, 2);
loop:
  if (VARREF(YcompilerSg2cYTdynamic_linkingQT) != YPfalse) {
    T1 = LITREF(lit_454);
  } else {
    T2 = CALL1(1,VARREF(YcompilerSastYmodule_name),mod_);
    T1 = T2;
  }
  nameF2330 = T1;
  T4 = CALL1(1,VARREF(YcompilerSg2cYmodule_init_decl),nameF2330);
  init_declF2331 = T4;
  T6 = CALL1(1,VARREF(YcompilerSastYmodule_target_environment),mod_);
  envF2332 = T6;
  T8 = CALL1(1,VARREF(YcompilerSastYenvironment_uses_modules),envF2332);
  usesF2333 = T8;
  T10 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YcompilerSastYmodule_name),usesF2333);
  uses_namesF2334 = T10;
  T11 = CALL1(1,VARREF(Ynot),VARREF(YcompilerSg2cYTdynamic_linkingQT));
  if (T11 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_455));
    T13 = FUNSHELL(1,fun_x_1608_211,2);
    x_1608F2335 = T13;
    FUNINIT(x_1608F2335, 2,code_out_,x_1608F2335);
    T15 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),uses_namesF2334);
    T14 = CALL1(0,x_1608F2335,T15);
    T12 = T14;
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_459));
  CALL3(1,VARREF(YruntimeSruntimeYformat),code_out_,LITREF(lit_460),init_declF2331);
  CALL3(1,VARREF(YruntimeSruntimeYformat),code_out_,LITREF(lit_461),init_declF2331);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_462));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_463));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_464));
  T16 = CALL1(1,VARREF(Ynot),VARREF(YcompilerSg2cYTdynamic_linkingQT));
  if (T16 != YPfalse) {
    T17 = FUNSHELL(1,fun_x_1610_212,2);
    x_1610F2336 = T17;
    FUNINIT(x_1610F2336, 2,code_out_,x_1610F2336);
    T19 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),uses_namesF2334);
    T18 = CALL1(0,x_1610F2336,T19);
    T20 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_468));
  } else {
  }
  CALLN(1,VARREF(YcompilerSg2cYto_c),4,form_,YPfalse,YPint((P)1),code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_469));
  T21 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_470));
  T9 = T21;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_main_214) {
  P code_out_,mod_;
  P info_nameF2338;
  P nameF2337;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYmodule_name),mod_);
  nameF2337 = T1;
  T3 = CALL1(1,VARREF(YcompilerSg2cYmodule_info_name),nameF2337);
  info_nameF2338 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_472));
  CALL3(1,VARREF(YruntimeSruntimeYformat),code_out_,LITREF(lit_473),info_nameF2338);
  T4 = CALL1(1,VARREF(YcompilerSg2cYmodule_init_decl),nameF2337);
  CALL3(1,VARREF(YruntimeSruntimeYformat),code_out_,LITREF(lit_474),T4);
  CALL3(1,VARREF(YruntimeSruntimeYformat),code_out_,LITREF(lit_475),info_nameF2338);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_476));
  T5 = CALL1(1,VARREF(YcompilerSg2cYmangle_boot_name),LITREF(lit_478));
  CALL3(1,VARREF(YruntimeSruntimeYformat),code_out_,LITREF(lit_477),T5);
  T6 = CALL1(1,VARREF(YcompilerSg2cYmodule_init_name),nameF2337);
  CALL3(1,VARREF(YruntimeSruntimeYformat),code_out_,LITREF(lit_479),T6);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_480));
  T7 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_481));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YcompilerSg2cY___main_0___() {
  P T174,T173,T172,T171,T170,T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159;
  P T158,T157,T156,T155,T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143;
  P T142,T141,T140,T139,T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127;
  P T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111;
  P T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95;
  P T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79;
  P T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63;
  P T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47;
  P T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31;
  P T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  VARSET(YcompilerSg2cYTdefinitionsT,YPfalse);
  VARSET(YcompilerSg2cYTdynamic_linkingQT,YPfalse);
  lit_0 = YPPsym((P)"<g2c-module-loader>");
  T1 = (P)YPpair(VARREF(YcompilerSastYLmodule_loaderG),Ynil);
  T0 = CALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YcompilerSg2cYLg2c_module_loaderG,T0);
  lit_1 = YPPsym((P)"module-loader-appname");
  lit_2 = YPPsym((P)"_x");
  T2 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YcompilerSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_appname_0 = YPmet(FUNCODEREF(fun_module_loader_appname_0),LITREF(lit_1),T2,ENVNUL,PNUL,YPfalse);
  T5 = BOUNDP(YcompilerSg2cYmodule_loader_appname);
  if (T5 != YPfalse) {
    T4 = VARREF(YcompilerSg2cYmodule_loader_appname);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_module_loader_appname_0;
  T3 = CALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(YcompilerSg2cYmodule_loader_appname,T3);
  lit_3 = YPPsym((P)"module-loader-appname-setter");
  lit_4 = YPPsym((P)"_z");
  T7 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLstrG),VARREF(YcompilerSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_appname_setter_1 = YPmet(FUNCODEREF(fun_module_loader_appname_setter_1),LITREF(lit_3),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YcompilerSg2cYmodule_loader_appname_setter);
  if (T10 != YPfalse) {
    T9 = VARREF(YcompilerSg2cYmodule_loader_appname_setter);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_module_loader_appname_setter_1;
  T8 = CALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YcompilerSg2cYmodule_loader_appname_setter,T8);
  CALLN(1,VARREF(YPprop),5,VARREF(YcompilerSg2cYLg2c_module_loaderG),VARREF(YcompilerSg2cYmodule_loader_appname),VARREF(YcompilerSg2cYmodule_loader_appname_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_5 = YPPsym((P)"module-loader-app-modname");
  T12 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YcompilerSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_app_modname_2 = YPmet(FUNCODEREF(fun_module_loader_app_modname_2),LITREF(lit_5),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YcompilerSg2cYmodule_loader_app_modname);
  if (T15 != YPfalse) {
    T14 = VARREF(YcompilerSg2cYmodule_loader_app_modname);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_module_loader_app_modname_2;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YcompilerSg2cYmodule_loader_app_modname,T13);
  lit_6 = YPPsym((P)"module-loader-app-modname-setter");
  T17 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLsymG),VARREF(YcompilerSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_app_modname_setter_3 = YPmet(FUNCODEREF(fun_module_loader_app_modname_setter_3),LITREF(lit_6),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YcompilerSg2cYmodule_loader_app_modname_setter);
  if (T20 != YPfalse) {
    T19 = VARREF(YcompilerSg2cYmodule_loader_app_modname_setter);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_module_loader_app_modname_setter_3;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YcompilerSg2cYmodule_loader_app_modname_setter,T18);
  CALLN(1,VARREF(YPprop),5,VARREF(YcompilerSg2cYLg2c_module_loaderG),VARREF(YcompilerSg2cYmodule_loader_app_modname),VARREF(YcompilerSg2cYmodule_loader_app_modname_setter),VARREF(YLsymG),VARREF(YPprop_unbound_error));
  lit_7 = YPPsym((P)"<g2c-module>");
  T23 = (P)YPpair(VARREF(YcompilerSastYLmoduleG),Ynil);
  T22 = CALL2(1,VARREF(Yfab_class),LITREF(lit_7),T23);
  VARSET(YcompilerSg2cYLg2c_moduleG,T22);
  lit_8 = YPPsym((P)"module-src-file");
  T24 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YcompilerSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_src_file_4 = YPmet(FUNCODEREF(fun_module_src_file_4),LITREF(lit_8),T24,ENVNUL,PNUL,YPfalse);
  T27 = BOUNDP(YcompilerSg2cYmodule_src_file);
  if (T27 != YPfalse) {
    T26 = VARREF(YcompilerSg2cYmodule_src_file);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_module_src_file_4;
  T25 = CALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(YcompilerSg2cYmodule_src_file,T25);
  lit_9 = YPPsym((P)"module-src-file-setter");
  T29 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLstrG),VARREF(YcompilerSg2cYLg2c_moduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_src_file_setter_5 = YPmet(FUNCODEREF(fun_module_src_file_setter_5),LITREF(lit_9),T29,ENVNUL,PNUL,YPfalse);
  T32 = BOUNDP(YcompilerSg2cYmodule_src_file_setter);
  if (T32 != YPfalse) {
    T31 = VARREF(YcompilerSg2cYmodule_src_file_setter);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_module_src_file_setter_5;
  T30 = CALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(YcompilerSg2cYmodule_src_file_setter,T30);
  CALLN(1,VARREF(YPprop),5,VARREF(YcompilerSg2cYLg2c_moduleG),VARREF(YcompilerSg2cYmodule_src_file),VARREF(YcompilerSg2cYmodule_src_file_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_10 = YPPsym((P)"module-mtime");
  T34 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YcompilerSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_mtime_6 = YPmet(FUNCODEREF(fun_module_mtime_6),LITREF(lit_10),T34,ENVNUL,PNUL,YPfalse);
  T37 = BOUNDP(YcompilerSg2cYmodule_mtime);
  if (T37 != YPfalse) {
    T36 = VARREF(YcompilerSg2cYmodule_mtime);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_module_mtime_6;
  T35 = CALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(YcompilerSg2cYmodule_mtime,T35);
  lit_11 = YPPsym((P)"module-mtime-setter");
  T39 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLfloG),VARREF(YcompilerSg2cYLg2c_moduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_mtime_setter_7 = YPmet(FUNCODEREF(fun_module_mtime_setter_7),LITREF(lit_11),T39,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(YcompilerSg2cYmodule_mtime_setter);
  if (T42 != YPfalse) {
    T41 = VARREF(YcompilerSg2cYmodule_mtime_setter);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_module_mtime_setter_7;
  T40 = CALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YcompilerSg2cYmodule_mtime_setter,T40);
  CALLN(1,VARREF(YPprop),5,VARREF(YcompilerSg2cYLg2c_moduleG),VARREF(YcompilerSg2cYmodule_mtime),VARREF(YcompilerSg2cYmodule_mtime_setter),VARREF(YLfloG),VARREF(YPprop_unbound_error));
  lit_12 = YPPsym((P)"module-loader-module-type");
  lit_13 = YPPsym((P)"loader");
  T44 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YcompilerSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_module_loader_module_type_8 = YPmet(FUNCODEREF(fun_module_loader_module_type_8),LITREF(lit_12),T44,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(YcompilerSastYmodule_loader_module_type);
  if (T47 != YPfalse) {
    T46 = VARREF(YcompilerSastYmodule_loader_module_type);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_module_loader_module_type_8;
  T45 = CALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YcompilerSastYmodule_loader_module_type,T45);
  lit_14 = YPPsym((P)"load-module");
  lit_15 = YPPsym((P)"name");
  T53 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T53,ENVNUL,PNUL,YPfalse);
  T52 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T52,ENVNUL,PNUL,YPfalse);
  T51 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T51,ENVNUL,PNUL,YPfalse);
  T50 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T50,ENVNUL,PNUL,YPfalse);
  T49 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_15)),YPPlist(2,VARREF(YcompilerSg2cYLg2c_module_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YcompilerSastYLmoduleG),Ynil);
  fun_load_module_13 = YPmet(FUNCODEREF(fun_load_module_13),LITREF(lit_14),T49,ENVNUL,PNUL,YPfalse);
  T56 = BOUNDP(YcompilerSastYload_module);
  if (T56 != YPfalse) {
    T55 = VARREF(YcompilerSastYload_module);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_load_module_13;
  T54 = CALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(YcompilerSastYload_module,T54);
  lit_16 = YPPsym((P)"module-up-to-date?");
  lit_17 = YPPsym((P)"mod");
  T58 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YcompilerSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YcompilerSg2cYmodule_up_to_dateQ = YPmet(FUNCODEREF(YcompilerSg2cYmodule_up_to_dateQ),LITREF(lit_16),T58,ENVNUL,PNUL,YPfalse);
  T59 = YcompilerSg2cYmodule_up_to_dateQ;
  VARSET(YcompilerSg2cYmodule_up_to_dateQ,T59);
  lit_18 = YPPsym((P)"purge-outdated-modules");
  lit_19 = YPsb((P)"%s has changed.\n");
  T62 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T62,ENVNUL,PNUL,YPfalse);
  T61 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T61,ENVNUL,PNUL,YPfalse);
  T60 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YcompilerSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YcompilerSg2cYpurge_outdated_modules = YPmet(FUNCODEREF(YcompilerSg2cYpurge_outdated_modules),LITREF(lit_18),T60,ENVNUL,PNUL,YPfalse);
  T63 = YcompilerSg2cYpurge_outdated_modules;
  VARSET(YcompilerSg2cYpurge_outdated_modules,T63);
  lit_20 = YPPsym((P)"g2c-def-app");
  lit_21 = YPPsym((P)"appname");
  lit_22 = YPPsym((P)"modname");
  T64 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_22)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YcompilerSg2cYLg2c_module_loaderG),Ynil);
  YcompilerSg2cYg2c_def_app = YPmet(FUNCODEREF(YcompilerSg2cYg2c_def_app),LITREF(lit_20),T64,ENVNUL,PNUL,YPfalse);
  T65 = YcompilerSg2cYg2c_def_app;
  VARSET(YcompilerSg2cYg2c_def_app,T65);
  lit_23 = YPPsym((P)"g2c-build-app");
  lit_24 = YPsb((P)"Searching for undefined global bindings.\n");
  T66 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YcompilerSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YcompilerSg2cYg2c_build_app = YPmet(FUNCODEREF(YcompilerSg2cYg2c_build_app),LITREF(lit_23),T66,ENVNUL,PNUL,YPfalse);
  T67 = YcompilerSg2cYg2c_build_app;
  VARSET(YcompilerSg2cYg2c_build_app,T67);
  lit_25 = YPPsym((P)"g2c-test");
  lit_26 = YPPsym((P)"x");
  lit_27 = YPsb((P)"g2c-");
  lit_28 = YPPsym((P)"compiler/main");
  T68 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YcompilerSg2cYg2c_test = YPmet(FUNCODEREF(YcompilerSg2cYg2c_test),LITREF(lit_25),T68,ENVNUL,PNUL,YPfalse);
  T69 = YcompilerSg2cYg2c_test;
  VARSET(YcompilerSg2cYg2c_test,T69);
  VARSET(YcompilerSg2cYTtmp_file_counterT,YPint((P)-1));
  lit_29 = YPPsym((P)"g2c-ast");
  lit_30 = YPPsym((P)"ast");
  lit_31 = YPPsym((P)"env");
  lit_32 = YPsb((P)"exp-%d-%d");
  T76 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T76,ENVNUL,PNUL,YPfalse);
  T75 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T75,ENVNUL,PNUL,YPfalse);
  T74 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T73 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T72 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_25 = YPmet(FUNCODEREF(fun_25),YPfalse,T72,ENVNUL,PNUL,YPfalse);
  T71 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T71,ENVNUL,PNUL,YPfalse);
  T70 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_31)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_ast_27 = YPmet(FUNCODEREF(fun_g2c_ast_27),LITREF(lit_29),T70,ENVNUL,PNUL,YPfalse);
  T79 = BOUNDP(YcompilerSg2cYg2c_ast);
  if (T79 != YPfalse) {
    T78 = VARREF(YcompilerSg2cYg2c_ast);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_g2c_ast_27;
  T77 = CALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(YcompilerSg2cYg2c_ast,T77);
  lit_33 = YPPsym((P)"g2c-exp");
  lit_34 = YPPsym((P)"exp");
  T81 = YPsig(YPPlist(2,LITREF(lit_34),LITREF(lit_31)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_exp_28 = YPmet(FUNCODEREF(fun_g2c_exp_28),LITREF(lit_33),T81,ENVNUL,PNUL,YPfalse);
  T84 = BOUNDP(YcompilerSg2cYg2c_exp);
  if (T84 != YPfalse) {
    T83 = VARREF(YcompilerSg2cYg2c_exp);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_g2c_exp_28;
  T82 = CALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(YcompilerSg2cYg2c_exp,T82);
  lit_35 = YPPsym((P)"compile-load");
  T86 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_compile_load_29 = YPmet(FUNCODEREF(fun_compile_load_29),LITREF(lit_35),T86,ENVNUL,PNUL,YPfalse);
  T89 = BOUNDP(YcompilerSg2cYcompile_load);
  if (T89 != YPfalse) {
    T88 = VARREF(YcompilerSg2cYcompile_load);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_compile_load_29;
  T87 = CALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(YcompilerSg2cYcompile_load,T87);
  lit_36 = YPPsym((P)"so-load");
  T91 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_so_load_30 = YPmet(FUNCODEREF(fun_so_load_30),LITREF(lit_36),T91,ENVNUL,PNUL,YPfalse);
  T94 = BOUNDP(YcompilerSg2cYso_load);
  if (T94 != YPfalse) {
    T93 = VARREF(YcompilerSg2cYso_load);
  } else {
    T93 = YPfalse;
  }
  T95 = fun_so_load_30;
  T92 = CALL2(1,VARREF(YPdefine_method),T93,T95);
  VARSET(YcompilerSg2cYso_load,T92);
  lit_37 = YPPsym((P)"g2c-eval");
  T96 = YPsig(YPPlist(2,LITREF(lit_34),LITREF(lit_31)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_eval_31 = YPmet(FUNCODEREF(fun_g2c_eval_31),LITREF(lit_37),T96,ENVNUL,PNUL,YPfalse);
  T99 = BOUNDP(YcompilerStopYg2c_eval);
  if (T99 != YPfalse) {
    T98 = VARREF(YcompilerStopYg2c_eval);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_g2c_eval_31;
  T97 = CALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(YcompilerStopYg2c_eval,T97);
  T101 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_31)),YPPlist(2,VARREF(YcompilerSastYLprogramG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_eval_32 = YPmet(FUNCODEREF(fun_g2c_eval_32),LITREF(lit_37),T101,ENVNUL,PNUL,YPfalse);
  T104 = BOUNDP(YcompilerStopYg2c_eval);
  if (T104 != YPfalse) {
    T103 = VARREF(YcompilerStopYg2c_eval);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_g2c_eval_32;
  T102 = CALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(YcompilerStopYg2c_eval,T102);
  lit_38 = YPsb((P)"g2c");
  T106 = CALL2(1,VARREF(YcompilerSg2cYg2c_def_app),LITREF(lit_38),LITREF(lit_28));
  VARSET(YcompilerSg2cYTg2c_appT,T106);
  lit_39 = YPPsym((P)"g2c-top");
  T107 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_g2c_top_33 = YPmet(FUNCODEREF(fun_g2c_top_33),LITREF(lit_39),T107,ENVNUL,PNUL,YPfalse);
  T110 = BOUNDP(YcompilerSg2cYg2c_top);
  if (T110 != YPfalse) {
    T109 = VARREF(YcompilerSg2cYg2c_top);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_g2c_top_33;
  T108 = CALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(YcompilerSg2cYg2c_top,T108);
  lit_40 = YPPsym((P)"g2c-clean");
  lit_41 = YPsb((P)"g2c");
  T112 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_g2c_clean_34 = YPmet(FUNCODEREF(fun_g2c_clean_34),LITREF(lit_40),T112,ENVNUL,PNUL,YPfalse);
  T115 = BOUNDP(YcompilerSg2cYg2c_clean);
  if (T115 != YPfalse) {
    T114 = VARREF(YcompilerSg2cYg2c_clean);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_g2c_clean_34;
  T113 = CALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(YcompilerSg2cYg2c_clean,T113);
  lit_42 = YPPsym((P)"compute-ast");
  lit_43 = YPPsym((P)"filename");
  lit_44 = YPPsym((P)"ct-env");
  T117 = YPsig(YPPlist(2,LITREF(lit_43),LITREF(lit_44)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compute_ast_35 = YPmet(FUNCODEREF(fun_compute_ast_35),LITREF(lit_42),T117,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(YcompilerSg2cYcompute_ast);
  if (T120 != YPfalse) {
    T119 = VARREF(YcompilerSg2cYcompute_ast);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_compute_ast_35;
  T118 = CALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YcompilerSg2cYcompute_ast,T118);
  lit_45 = YPPsym((P)"compute-program");
  lit_46 = YPPsym((P)"e");
  T122 = YPsig(YPPlist(2,LITREF(lit_46),LITREF(lit_31)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compute_program_36 = YPmet(FUNCODEREF(fun_compute_program_36),LITREF(lit_45),T122,ENVNUL,PNUL,YPfalse);
  T125 = BOUNDP(YcompilerSg2cYcompute_program);
  if (T125 != YPfalse) {
    T124 = VARREF(YcompilerSg2cYcompute_program);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_compute_program_36;
  T123 = CALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(YcompilerSg2cYcompute_program,T123);
  lit_47 = YPPsym((P)"generate-c-module");
  lit_48 = YPPsym((P)"code-out");
  lit_49 = YPPsym((P)"prg");
  T127 = YPsig(YPPlist(4,LITREF(lit_48),LITREF(lit_46),LITREF(lit_49),LITREF(lit_17)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_c_module_37 = YPmet(FUNCODEREF(fun_generate_c_module_37),LITREF(lit_47),T127,ENVNUL,PNUL,YPfalse);
  T130 = BOUNDP(YcompilerSg2cYgenerate_c_module);
  if (T130 != YPfalse) {
    T129 = VARREF(YcompilerSg2cYgenerate_c_module);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_generate_c_module_37;
  T128 = CALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(YcompilerSg2cYgenerate_c_module,T128);
  lit_50 = YPPsym((P)"generate-c-application");
  lit_51 = YPsb((P)"-init");
  T134 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_17)),YPPlist(2,VARREF(YcompilerSastYLmodule_loaderG),VARREF(YcompilerSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_c_application_40 = YPmet(FUNCODEREF(fun_generate_c_application_40),LITREF(lit_50),T132,ENVNUL,PNUL,YPfalse);
  T137 = BOUNDP(YcompilerSg2cYgenerate_c_application);
  if (T137 != YPfalse) {
    T136 = VARREF(YcompilerSg2cYgenerate_c_application);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_generate_c_application_40;
  T135 = CALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(YcompilerSg2cYgenerate_c_application,T135);
  lit_52 = YPPsym((P)"generate-makefile");
  lit_53 = YPsb((P)"-init");
  lit_54 = YPsb((P)"Makefile");
  lit_55 = YPsb((P)"include ..%sMake.inc\n");
  lit_56 = YPsb((P)"C_OBJS_DD = $(patsubst %%,..%s%%,$(C_OBJS))\n");
  lit_57 = YPsb((P)"%s%s: ..%sgrt.h\n");
  lit_58 = YPsb((P)"\t$(CC) -I.. -c -g -O -o $@ $<\n\n");
  lit_59 = YPsb((P)"OBJS = \\\n");
  lit_60 = YPsb((P)"\t%s \\\n");
  lit_61 = YPsb((P)"\t%s\n\n");
  lit_62 = YPsb((P)"%s: $(C_OBJS_DD) $(OBJS)\n");
  lit_63 = YPsb((P)"\t$(CC) -Wl,--export-dynamic -o %s $(C_OBJS_DD) $(LIBS) $(OBJS)\n\n");
  lit_64 = YPsb((P)"clean:\n\trm -f %s $(OBJS)\n");
  T142 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YcompilerSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_generate_makefile_44 = YPmet(FUNCODEREF(fun_generate_makefile_44),LITREF(lit_52),T139,ENVNUL,PNUL,YPfalse);
  T145 = BOUNDP(YcompilerSg2cYgenerate_makefile);
  if (T145 != YPfalse) {
    T144 = VARREF(YcompilerSg2cYgenerate_makefile);
  } else {
    T144 = YPfalse;
  }
  T146 = fun_generate_makefile_44;
  T143 = CALL2(1,VARREF(YPdefine_method),T144,T146);
  VARSET(YcompilerSg2cYgenerate_makefile,T143);
  lit_65 = YPPsym((P)"pp");
  T147 = YPsig(YPPlist(2,LITREF(lit_46),LITREF(lit_48)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_pp_45 = YPmet(FUNCODEREF(fun_pp_45),LITREF(lit_65),T147,ENVNUL,PNUL,YPfalse);
  T150 = BOUNDP(YcompilerSg2cYpp);
  if (T150 != YPfalse) {
    T149 = VARREF(YcompilerSg2cYpp);
  } else {
    T149 = YPfalse;
  }
  T151 = fun_pp_45;
  T148 = CALL2(1,VARREF(YPdefine_method),T149,T151);
  VARSET(YcompilerSg2cYpp,T148);
  lit_66 = YPPsym((P)"generate-header");
  lit_67 = YPsb((P)"/* GOO 2 C $REVISION: 0.111 $ \n");
  lit_68 = YPsb((P)"  */\n\n#include \"grt.h\"\n");
  lit_69 = YPsb((P)"#include \"dlgrt.h\"\n");
  T152 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_46)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_header_46 = YPmet(FUNCODEREF(fun_generate_header_46),LITREF(lit_66),T152,ENVNUL,PNUL,YPfalse);
  T155 = BOUNDP(YcompilerSg2cYgenerate_header);
  if (T155 != YPfalse) {
    T154 = VARREF(YcompilerSg2cYgenerate_header);
  } else {
    T154 = YPfalse;
  }
  T156 = fun_generate_header_46;
  T153 = CALL2(1,VARREF(YPdefine_method),T154,T156);
  VARSET(YcompilerSg2cYgenerate_header,T153);
  lit_70 = YPPsym((P)"generate-trailer");
  lit_71 = YPsb((P)"\n/* END OF GENERATED CODE. */\n");
  T157 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_generate_trailer_47 = YPmet(FUNCODEREF(fun_generate_trailer_47),LITREF(lit_70),T157,ENVNUL,PNUL,YPfalse);
  T160 = BOUNDP(YcompilerSg2cYgenerate_trailer);
  if (T160 != YPfalse) {
    T159 = VARREF(YcompilerSg2cYgenerate_trailer);
  } else {
    T159 = YPfalse;
  }
  T161 = fun_generate_trailer_47;
  T158 = CALL2(1,VARREF(YPdefine_method),T159,T161);
  VARSET(YcompilerSg2cYgenerate_trailer,T158);
  lit_72 = YPPsym((P)"generate-global-environment");
  lit_73 = YPsb((P)"\n/* MODULE ENVIRONMENT: %s */\n\n");
  lit_74 = YPPsym((P)"binding");
  T163 = YPsig(YPPlist(1,LITREF(lit_74)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_17)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_global_environment_49 = YPmet(FUNCODEREF(fun_generate_global_environment_49),LITREF(lit_72),T162,ENVNUL,PNUL,YPfalse);
  T166 = BOUNDP(YcompilerSg2cYgenerate_global_environment);
  if (T166 != YPfalse) {
    T165 = VARREF(YcompilerSg2cYgenerate_global_environment);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_generate_global_environment_49;
  T164 = CALL2(1,VARREF(YPdefine_method),T165,T167);
  VARSET(YcompilerSg2cYgenerate_global_environment,T164);
  lit_75 = YPPsym((P)"generate-global-binding");
  lit_76 = YPPsym((P)"imported?");
  lit_77 = YPPsym((P)"gb");
  lit_78 = YPPsym((P)"global");
  lit_79 = YPPsym((P)"runtime");
  lit_80 = YPsb((P)"%s(%s,\"%s\",\"%s\");\n");
  lit_81 = YPsb((P)"EXT");
  lit_82 = YPsb((P)"DEF");
  T168 = YPsig(YPPlist(3,LITREF(lit_48),LITREF(lit_76),LITREF(lit_77)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_global_binding_50 = YPmet(FUNCODEREF(fun_generate_global_binding_50),LITREF(lit_75),T168,ENVNUL,PNUL,YPfalse);
  T171 = BOUNDP(YcompilerSg2cYgenerate_global_binding);
  if (T171 != YPfalse) {
    T170 = VARREF(YcompilerSg2cYgenerate_global_binding);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_generate_global_binding_50;
  T169 = CALL2(1,VARREF(YPdefine_method),T170,T172);
  VARSET(YcompilerSg2cYgenerate_global_binding,T169);
  lit_83 = YPsb((P)"Y");
  VARSET(YcompilerSg2cYDmodule_separator,LITREF(lit_83));
  lit_84 = YPsb((P)"_");
  VARSET(YcompilerSg2cYDlocal_suffix,LITREF(lit_84));
  lit_85 = YPsb((P)"F");
  VARSET(YcompilerSg2cYDhygiene_marker,LITREF(lit_85));
  lit_86 = YPsb((P)"Z");
  VARSET(YcompilerSg2cYDescape_separator,LITREF(lit_86));
  lit_87 = YPsb((P)"I");
  VARSET(YcompilerSg2cYDiep_suffix,LITREF(lit_87));
  lit_88 = YPsb((P)"M");
  T174 = VARSET(YcompilerSg2cYDmethod_mangled_marker_string,LITREF(lit_88));
  T173 = T174;
  return T173;
}

P YcompilerSg2cY___main_1___() {
  P x_1488F2344;
  P x_1486F2343;
  P x_1484F2342;
  P x_1482F2341;
  P tableF2340;
  P vecF2339;
  P T289,T288,T287,T286,T285,T284,T283,T282,T281,T280,T279,T278,T277,T276,T275,T274;
  P T273,T272,T271,T270,T269,T268,T267,T266,T265,T264,T263,T262,T261,T260,T259,T258;
  P T257,T256,T255,T254,T253,T252,T251,T250,T249,T248,T247,T246,T245,T244,T243,T242;
  P T241,T240,T239,T238,T237,T236,T235,T234,T233,T232,T231,T230,T229,T228,T227,T226;
  P T225,T224,T223,T222,T221,T220,T219,T218,T217,T216,T215,T214,T213,T212,T211,T210;
  P T209,T208,T207,T206,T205,T204,T203,T202,T201,T200,T199,T198,T197,T196,T195,T194;
  P T193,T192,T191,T190,T189,T188,T187,T186,T185,T184,T183,T182,T181,T180,T179,T178;
  P T177,T176,T175,T174,T173,T172,T171,T170,T169,T168,T167,T166,T165,T164,T163,T162;
  P T161,T160,T159,T158,T157,T156,T155,T154,T153,T152,T151,T150,T149,T148,T147,T146;
  P T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134,T133,T132,T131,T130;
  P T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114;
  P T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98;
  P T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82;
  P T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66;
  P T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50;
  P T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YcompilerSg2cYDmodule_separator),YPint((P)0));
  VARSET(YcompilerSg2cYDmodule_marker,T0);
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YcompilerSg2cYDlocal_suffix),YPint((P)0));
  VARSET(YcompilerSg2cYDlocal_marker,T1);
  T2 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YcompilerSg2cYDhygiene_marker),YPint((P)0));
  VARSET(YcompilerSg2cYDhygiene_char,T2);
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YcompilerSg2cYDescape_separator),YPint((P)0));
  VARSET(YcompilerSg2cYDescape_marker,T3);
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YcompilerSg2cYDiep_suffix),YPint((P)0));
  VARSET(YcompilerSg2cYDiep_marker,T4);
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YcompilerSg2cYDmethod_mangled_marker_string),YPint((P)0));
  VARSET(YcompilerSg2cYDmethod_mangled_marker,T5);
  VARSET(YcompilerSg2cYDmin_character_code,YPint((P)0));
  VARSET(YcompilerSg2cYDmax_character_code,YPint((P)255));
  T6 = CALL1(1,VARREF(Ynew),VARREF(YgooScollectionsSbufferYLbufG));
  VARSET(YcompilerSg2cYTmangle_bufferT,T6);
  lit_89 = CALLN(1, Yvec, 2, YPchr((P)45), YPchr((P)95));
  lit_90 = CALLN(1, Yvec, 2, YPchr((P)33), YPchr((P)88));
  lit_91 = CALLN(1, Yvec, 2, YPchr((P)36), YPchr((P)68));
  lit_92 = CALLN(1, Yvec, 2, YPchr((P)37), YPchr((P)80));
  lit_93 = CALLN(1, Yvec, 2, YPchr((P)42), YPchr((P)84));
  lit_94 = CALLN(1, Yvec, 2, YPchr((P)47), YPchr((P)83));
  lit_95 = CALLN(1, Yvec, 2, YPchr((P)60), YPchr((P)76));
  lit_96 = CALLN(1, Yvec, 2, YPchr((P)62), YPchr((P)71));
  lit_97 = CALLN(1, Yvec, 2, YPchr((P)63), YPchr((P)81));
  lit_98 = CALLN(1, Yvec, 2, YPchr((P)43), YPchr((P)65));
  lit_99 = CALLN(1, Yvec, 2, YPchr((P)38), YPchr((P)66));
  lit_100 = CALLN(1, Yvec, 2, YPchr((P)94), YPchr((P)67));
  lit_101 = CALLN(1, Yvec, 2, YPchr((P)95), YPchr((P)85));
  lit_102 = CALLN(1, Yvec, 2, YPchr((P)64), YPchr((P)79));
  lit_103 = CALLN(1, Yvec, 2, YPchr((P)61), YPchr((P)69));
  lit_104 = CALLN(1, Yvec, 2, YPchr((P)126), YPchr((P)78));
  lit_105 = CALLN(1, Yvec, 2, YPchr((P)124), YPchr((P)75));
  T7 = CALLN(1,VARREF(Yvec),17,LITREF(lit_89),LITREF(lit_90),LITREF(lit_91),LITREF(lit_92),LITREF(lit_93),LITREF(lit_94),LITREF(lit_95),LITREF(lit_96),LITREF(lit_97),LITREF(lit_98),LITREF(lit_99),LITREF(lit_100),LITREF(lit_101),LITREF(lit_102),LITREF(lit_103),LITREF(lit_104),LITREF(lit_105));
  VARSET(YcompilerSg2cYDmangles_data,T7);
  lit_106 = YPPsym((P)"char-buffer-as-string");
  lit_107 = YPPsym((P)"buffer");
  lit_108 = YPPsym((P)"x-1480");
  lit_109 = YPPsym((P)"x-1479");
  T9 = YPsig(YPPlist(1,LITREF(lit_109)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1480_51 = YPmet(FUNCODEREF(fun_x_1480_51),LITREF(lit_108),T9,ENVNUL,PNUL,YPfalse);
  T8 = YPsig(YPPlist(1,LITREF(lit_107)),YPPlist(1,VARREF(YgooScollectionsSbufferYLbufG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YcompilerSg2cYchar_buffer_as_string = YPmet(FUNCODEREF(YcompilerSg2cYchar_buffer_as_string),LITREF(lit_106),T8,ENVNUL,PNUL,YPfalse);
  T10 = YcompilerSg2cYchar_buffer_as_string;
  VARSET(YcompilerSg2cYchar_buffer_as_string,T10);
  lit_110 = YPsb((P)"\\t");
  lit_111 = YPsb((P)"\\f");
  lit_112 = YPsb((P)"\\r");
  lit_113 = YPsb((P)"\\n");
  lit_114 = YPsb((P)"\\\"");
  lit_115 = YPsb((P)"\\\\");
  T13 = CALL2(1,VARREF(YgooScollectionsScollectionYfab),VARREF(YLvecG),VARREF(YgooScollectionsSstringYascii_limit));
  T12 = CALL2(1,VARREF(YgooScollectionsScollectionYfill),T13,YPfalse);
  vecF2339 = T12;
  T14 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)9));
  CALL3(1,VARREF(YgooScollectionsScollectionYelt_setter),LITREF(lit_110),vecF2339,T14);
  T15 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)12));
  CALL3(1,VARREF(YgooScollectionsScollectionYelt_setter),LITREF(lit_111),vecF2339,T15);
  T16 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)13));
  CALL3(1,VARREF(YgooScollectionsScollectionYelt_setter),LITREF(lit_112),vecF2339,T16);
  T17 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)10));
  CALL3(1,VARREF(YgooScollectionsScollectionYelt_setter),LITREF(lit_113),vecF2339,T17);
  T18 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)34));
  CALL3(1,VARREF(YgooScollectionsScollectionYelt_setter),LITREF(lit_114),vecF2339,T18);
  T19 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)92));
  CALL3(1,VARREF(YgooScollectionsScollectionYelt_setter),LITREF(lit_115),vecF2339,T19);
  T11 = vecF2339;
  VARSET(YcompilerSg2cYDc_escapes,T11);
  lit_116 = YPPsym((P)"mangle-string-literal");
  lit_117 = YPPsym((P)"str");
  lit_118 = YPPsym((P)"loop");
  lit_119 = YPPsym((P)"i");
  T21 = YPsig(YPPlist(1,LITREF(lit_119)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_53 = YPmet(FUNCODEREF(fun_loop_53),LITREF(lit_118),T21,ENVNUL,PNUL,YPfalse);
  T20 = YPsig(YPPlist(1,LITREF(lit_117)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_54 = YPmet(FUNCODEREF(fun_mangle_string_literal_54),LITREF(lit_116),T20,ENVNUL,PNUL,YPfalse);
  T24 = BOUNDP(YcompilerSg2cYmangle_string_literal);
  if (T24 != YPfalse) {
    T23 = VARREF(YcompilerSg2cYmangle_string_literal);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_mangle_string_literal_54;
  T22 = CALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YcompilerSg2cYmangle_string_literal,T22);
  lit_120 = YPPsym((P)"sym");
  T26 = YPsig(YPPlist(1,LITREF(lit_120)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_55 = YPmet(FUNCODEREF(fun_mangle_string_literal_55),LITREF(lit_116),T26,ENVNUL,PNUL,YPfalse);
  T29 = BOUNDP(YcompilerSg2cYmangle_string_literal);
  if (T29 != YPfalse) {
    T28 = VARREF(YcompilerSg2cYmangle_string_literal);
  } else {
    T28 = YPfalse;
  }
  T30 = fun_mangle_string_literal_55;
  T27 = CALL2(1,VARREF(YPdefine_method),T28,T30);
  VARSET(YcompilerSg2cYmangle_string_literal,T27);
  lit_121 = YPsb((P)"0123456789");
  VARSET(YcompilerSg2cYDnumber_characters,LITREF(lit_121));
  lit_122 = YPPsym((P)"mangle-integer");
  lit_123 = YPPsym((P)"number");
  lit_124 = YPPsym((P)"process-integer");
  lit_125 = YPPsym((P)"index");
  T32 = YPsig(YPPlist(2,LITREF(lit_123),LITREF(lit_125)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_process_integer_56 = YPmet(FUNCODEREF(fun_process_integer_56),LITREF(lit_124),T32,ENVNUL,PNUL,YPfalse);
  T31 = YPsig(YPPlist(1,LITREF(lit_123)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_integer_57 = YPmet(FUNCODEREF(fun_mangle_integer_57),LITREF(lit_122),T31,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(YcompilerSg2cYmangle_integer);
  if (T35 != YPfalse) {
    T34 = VARREF(YcompilerSg2cYmangle_integer);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_mangle_integer_57;
  T33 = CALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YcompilerSg2cYmangle_integer,T33);
  lit_126 = YPPsym((P)"x-1482");
  lit_127 = YPPsym((P)"x-1481");
  lit_128 = YPPsym((P)"x-1484");
  lit_129 = YPPsym((P)"x-1483");
  lit_130 = YPPsym((P)"x-1486");
  lit_131 = YPPsym((P)"x-1485");
  lit_132 = YPPsym((P)"x-1488");
  lit_133 = YPPsym((P)"x-1487");
  T40 = YPsig(YPPlist(1,LITREF(lit_127)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1482_58 = YPmet(FUNCODEREF(fun_x_1482_58),LITREF(lit_126),T40,ENVNUL,PNUL,YPfalse);
  T39 = YPsig(YPPlist(1,LITREF(lit_129)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1484_59 = YPmet(FUNCODEREF(fun_x_1484_59),LITREF(lit_128),T39,ENVNUL,PNUL,YPfalse);
  T38 = YPsig(YPPlist(1,LITREF(lit_131)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1486_60 = YPmet(FUNCODEREF(fun_x_1486_60),LITREF(lit_130),T38,ENVNUL,PNUL,YPfalse);
  T37 = YPsig(YPPlist(1,LITREF(lit_133)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1488_61 = YPmet(FUNCODEREF(fun_x_1488_61),LITREF(lit_132),T37,ENVNUL,PNUL,YPfalse);
  T43 = CALL2(1,VARREF(YgooSmathYA),VARREF(YcompilerSg2cYDmax_character_code),YPint((P)1));
  T42 = CALL2(1,VARREF(YgooScollectionsScollectionYfab),VARREF(YLvecG),T43);
  tableF2340 = T42;
  T44 = FUNSHELL(1,fun_x_1482_58,2);
  x_1482F2341 = T44;
  FUNINIT(x_1482F2341, 2,tableF2340,x_1482F2341);
  T47 = CALL3(1,VARREF(YgooScollectionsSrangeYrange),VARREF(YcompilerSg2cYDmin_character_code),VARREF(YgooSmagnitudeYLE),VARREF(YcompilerSg2cYDmax_character_code));
  T46 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T47);
  T45 = CALL1(0,x_1482F2341,T46);
  T48 = FUNSHELL(1,fun_x_1484_59,2);
  x_1484F2342 = T48;
  FUNINIT(x_1484F2342, 2,tableF2340,x_1484F2342);
  T50 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),VARREF(YcompilerSg2cYDmangles_data));
  T49 = CALL1(0,x_1484F2342,T50);
  T51 = FUNSHELL(1,fun_x_1486_60,2);
  x_1486F2343 = T51;
  FUNINIT(x_1486F2343, 2,tableF2340,x_1486F2343);
  T55 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)97));
  T56 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)122));
  T54 = CALL3(1,VARREF(YgooScollectionsSrangeYrange),T55,VARREF(YgooSmagnitudeYLE),T56);
  T53 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T54);
  T52 = CALL1(0,x_1486F2343,T53);
  T57 = FUNSHELL(1,fun_x_1488_61,2);
  x_1488F2344 = T57;
  FUNINIT(x_1488F2344, 2,tableF2340,x_1488F2344);
  T61 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)48));
  T62 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)57));
  T60 = CALL3(1,VARREF(YgooScollectionsSrangeYrange),T61,VARREF(YgooSmagnitudeYLE),T62);
  T59 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T60);
  T58 = CALL1(0,x_1488F2344,T59);
  T41 = tableF2340;
  VARSET(YcompilerSg2cYDname_mangler_table,T41);
  lit_134 = YPPsym((P)"mangler-reset");
  T63 = YPsig(YPPlist(1,LITREF(lit_107)),YPPlist(1,VARREF(YgooScollectionsSbufferYLbufG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YcompilerSg2cYmangler_reset = YPmet(FUNCODEREF(YcompilerSg2cYmangler_reset),LITREF(lit_134),T63,ENVNUL,PNUL,YPfalse);
  T64 = YcompilerSg2cYmangler_reset;
  VARSET(YcompilerSg2cYmangler_reset,T64);
  lit_135 = YPPsym((P)"mangle-name-into");
  lit_136 = YPPsym((P)"buf");
  lit_137 = YPPsym((P)"x-1490");
  lit_138 = YPPsym((P)"x-1489");
  T66 = YPsig(YPPlist(1,LITREF(lit_138)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1490_63 = YPmet(FUNCODEREF(fun_x_1490_63),LITREF(lit_137),T66,ENVNUL,PNUL,YPfalse);
  T65 = YPsig(YPPlist(2,LITREF(lit_136),LITREF(lit_15)),YPPlist(2,VARREF(YgooScollectionsSbufferYLbufG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YcompilerSg2cYmangle_name_into = YPmet(FUNCODEREF(YcompilerSg2cYmangle_name_into),LITREF(lit_135),T65,ENVNUL,PNUL,YPfalse);
  T67 = YcompilerSg2cYmangle_name_into;
  VARSET(YcompilerSg2cYmangle_name_into,T67);
  lit_139 = YPPsym((P)"mangle-raw-name");
  T68 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_65 = YPmet(FUNCODEREF(fun_mangle_raw_name_65),LITREF(lit_139),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(YcompilerSg2cYmangle_raw_name);
  if (T71 != YPfalse) {
    T70 = VARREF(YcompilerSg2cYmangle_raw_name);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_mangle_raw_name_65;
  T69 = CALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YcompilerSg2cYmangle_raw_name,T69);
  T73 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_66 = YPmet(FUNCODEREF(fun_mangle_raw_name_66),LITREF(lit_139),T73,ENVNUL,PNUL,YPfalse);
  T76 = BOUNDP(YcompilerSg2cYmangle_raw_name);
  if (T76 != YPfalse) {
    T75 = VARREF(YcompilerSg2cYmangle_raw_name);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_mangle_raw_name_66;
  T74 = CALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(YcompilerSg2cYmangle_raw_name,T74);
  lit_140 = YPPsym((P)"mangle-local-name");
  T78 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_67 = YPmet(FUNCODEREF(fun_mangle_local_name_67),LITREF(lit_140),T78,ENVNUL,PNUL,YPfalse);
  T81 = BOUNDP(YcompilerSg2cYmangle_local_name);
  if (T81 != YPfalse) {
    T80 = VARREF(YcompilerSg2cYmangle_local_name);
  } else {
    T80 = YPfalse;
  }
  T82 = fun_mangle_local_name_67;
  T79 = CALL2(1,VARREF(YPdefine_method),T80,T82);
  VARSET(YcompilerSg2cYmangle_local_name,T79);
  T83 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_68 = YPmet(FUNCODEREF(fun_mangle_local_name_68),LITREF(lit_140),T83,ENVNUL,PNUL,YPfalse);
  T86 = BOUNDP(YcompilerSg2cYmangle_local_name);
  if (T86 != YPfalse) {
    T85 = VARREF(YcompilerSg2cYmangle_local_name);
  } else {
    T85 = YPfalse;
  }
  T87 = fun_mangle_local_name_68;
  T84 = CALL2(1,VARREF(YPdefine_method),T85,T87);
  VARSET(YcompilerSg2cYmangle_local_name,T84);
  lit_141 = YPPsym((P)"mangle-global-name");
  T88 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_15)),YPPlist(2,VARREF(YLsymG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_69 = YPmet(FUNCODEREF(fun_mangle_global_name_69),LITREF(lit_141),T88,ENVNUL,PNUL,YPfalse);
  T91 = BOUNDP(YcompilerSg2cYmangle_global_name);
  if (T91 != YPfalse) {
    T90 = VARREF(YcompilerSg2cYmangle_global_name);
  } else {
    T90 = YPfalse;
  }
  T92 = fun_mangle_global_name_69;
  T89 = CALL2(1,VARREF(YPdefine_method),T90,T92);
  VARSET(YcompilerSg2cYmangle_global_name,T89);
  T93 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_15)),YPPlist(2,VARREF(YLsymG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_70 = YPmet(FUNCODEREF(fun_mangle_global_name_70),LITREF(lit_141),T93,ENVNUL,PNUL,YPfalse);
  T96 = BOUNDP(YcompilerSg2cYmangle_global_name);
  if (T96 != YPfalse) {
    T95 = VARREF(YcompilerSg2cYmangle_global_name);
  } else {
    T95 = YPfalse;
  }
  T97 = fun_mangle_global_name_70;
  T94 = CALL2(1,VARREF(YPdefine_method),T95,T97);
  VARSET(YcompilerSg2cYmangle_global_name,T94);
  lit_142 = YPPsym((P)"mangle-boot-name");
  T98 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_boot_name_71 = YPmet(FUNCODEREF(fun_mangle_boot_name_71),LITREF(lit_142),T98,ENVNUL,PNUL,YPfalse);
  T101 = BOUNDP(YcompilerSg2cYmangle_boot_name);
  if (T101 != YPfalse) {
    T100 = VARREF(YcompilerSg2cYmangle_boot_name);
  } else {
    T100 = YPfalse;
  }
  T102 = fun_mangle_boot_name_71;
  T99 = CALL2(1,VARREF(YPdefine_method),T100,T102);
  VARSET(YcompilerSg2cYmangle_boot_name,T99);
  lit_143 = YPPsym((P)"mangle-module-binding");
  T103 = YPsig(YPPlist(1,LITREF(lit_74)),YPPlist(1,VARREF(YcompilerSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_module_binding_72 = YPmet(FUNCODEREF(fun_mangle_module_binding_72),LITREF(lit_143),T103,ENVNUL,PNUL,YPfalse);
  T106 = BOUNDP(YcompilerSg2cYmangle_module_binding);
  if (T106 != YPfalse) {
    T105 = VARREF(YcompilerSg2cYmangle_module_binding);
  } else {
    T105 = YPfalse;
  }
  T107 = fun_mangle_module_binding_72;
  T104 = CALL2(1,VARREF(YPdefine_method),T105,T107);
  VARSET(YcompilerSg2cYmangle_module_binding,T104);
  lit_144 = YPPsym((P)"mangle-local-marked-name");
  lit_145 = YPPsym((P)"marker");
  T108 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_145)),YPPlist(2,VARREF(YLstrG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_local_marked_name_73 = YPmet(FUNCODEREF(fun_mangle_local_marked_name_73),LITREF(lit_144),T108,ENVNUL,PNUL,YPfalse);
  T111 = BOUNDP(YcompilerSg2cYmangle_local_marked_name);
  if (T111 != YPfalse) {
    T110 = VARREF(YcompilerSg2cYmangle_local_marked_name);
  } else {
    T110 = YPfalse;
  }
  T112 = fun_mangle_local_marked_name_73;
  T109 = CALL2(1,VARREF(YPdefine_method),T110,T112);
  VARSET(YcompilerSg2cYmangle_local_marked_name,T109);
  T113 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_145)),YPPlist(2,VARREF(YLsymG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_local_marked_name_74 = YPmet(FUNCODEREF(fun_mangle_local_marked_name_74),LITREF(lit_144),T113,ENVNUL,PNUL,YPfalse);
  T116 = BOUNDP(YcompilerSg2cYmangle_local_marked_name);
  if (T116 != YPfalse) {
    T115 = VARREF(YcompilerSg2cYmangle_local_marked_name);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_mangle_local_marked_name_74;
  T114 = CALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(YcompilerSg2cYmangle_local_marked_name,T114);
  lit_146 = YPPsym((P)"return");
  lit_147 = YPPsym((P)"x-1494");
  lit_148 = YPPsym((P)"msg");
  lit_149 = YPPsym((P)"args");
  lit_150 = YPPsym((P)"for-commas");
  lit_151 = YPsb((P)"Match Pattern Failure");
  lit_152 = YPPsym((P)"let");
  lit_153 = YPPsym((P)"for");
  lit_154 = YPPsym((P)"first?");
  lit_155 = YPPsym((P)"first-then");
  lit_156 = YPPsym((P)"unless");
  lit_157 = YPPsym((P)"put");
  T120 = YPsig(YPPlist(2,LITREF(lit_148),LITREF(lit_149)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1494_75 = YPmet(FUNCODEREF(fun_x_1494_75),LITREF(lit_147),T120,ENVNUL,PNUL,YPfalse);
  T119 = YPsig(YPPlist(1,LITREF(lit_146)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T119,ENVNUL,PNUL,YPfalse);
  T118 = YPsig(YPPlist(1,LITREF(lit_34)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_77 = YPmet(FUNCODEREF(fun_77),YPfalse,T118,ENVNUL,PNUL,YPfalse);
  T121 = fun_77;
  YPmacro(YPPsym((P)"compiler/g2c"),YPPsym((P)"for-commas"),T121);
  lit_158 = YPPsym((P)"x-1498");
  lit_159 = YPPsym((P)"between-parentheses");
  T124 = YPsig(YPPlist(2,LITREF(lit_148),LITREF(lit_149)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1498_78 = YPmet(FUNCODEREF(fun_x_1498_78),LITREF(lit_158),T124,ENVNUL,PNUL,YPfalse);
  T123 = YPsig(YPPlist(1,LITREF(lit_146)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T123,ENVNUL,PNUL,YPfalse);
  T122 = YPsig(YPPlist(1,LITREF(lit_34)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T122,ENVNUL,PNUL,YPfalse);
  T125 = fun_80;
  YPmacro(YPPsym((P)"compiler/g2c"),YPPsym((P)"between-parentheses"),T125);
  lit_160 = YPPsym((P)"x-1502");
  lit_161 = YPPsym((P)"between-parentheses-comma-separated");
  lit_162 = YPPsym((P)"forms");
  lit_163 = YPPsym((P)"body");
  T129 = YPsig(YPPlist(2,LITREF(lit_148),LITREF(lit_149)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1502_81 = YPmet(FUNCODEREF(fun_x_1502_81),LITREF(lit_160),T129,ENVNUL,PNUL,YPfalse);
  T128 = YPsig(YPPlist(3,LITREF(lit_162),LITREF(lit_163),LITREF(lit_154)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_82 = YPmet(FUNCODEREF(fun_loop_82),LITREF(lit_118),T128,ENVNUL,PNUL,YPfalse);
  T127 = YPsig(YPPlist(1,LITREF(lit_146)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_83 = YPmet(FUNCODEREF(fun_83),YPfalse,T127,ENVNUL,PNUL,YPfalse);
  T126 = YPsig(YPPlist(1,LITREF(lit_34)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_84 = YPmet(FUNCODEREF(fun_84),YPfalse,T126,ENVNUL,PNUL,YPfalse);
  T130 = fun_84;
  YPmacro(YPPsym((P)"compiler/g2c"),YPPsym((P)"between-parentheses-comma-separated"),T130);
  lit_164 = YPPsym((P)"gen-result");
  lit_165 = YPPsym((P)"d");
  lit_166 = YPsb((P)"T%d = ");
  T131 = YPsig(YPPlist(3,LITREF(lit_46),LITREF(lit_165),LITREF(lit_48)),YPPlist(3,VARREF(YcompilerSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_gen_result_85 = YPmet(FUNCODEREF(fun_gen_result_85),LITREF(lit_164),T131,ENVNUL,PNUL,YPfalse);
  T134 = BOUNDP(YcompilerSg2cYgen_result);
  if (T134 != YPfalse) {
    T133 = VARREF(YcompilerSg2cYgen_result);
  } else {
    T133 = YPfalse;
  }
  T135 = fun_gen_result_85;
  T132 = CALL2(1,VARREF(YPdefine_method),T133,T135);
  VARSET(YcompilerSg2cYgen_result,T132);
  lit_167 = YPPsym((P)"gen-depth");
  lit_168 = YPPsym((P)"x-1504");
  lit_169 = YPPsym((P)"x-1503");
  lit_170 = YPsb((P)"  ");
  T137 = YPsig(YPPlist(1,LITREF(lit_169)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1504_86 = YPmet(FUNCODEREF(fun_x_1504_86),LITREF(lit_168),T137,ENVNUL,PNUL,YPfalse);
  T136 = YPsig(YPPlist(2,LITREF(lit_165),LITREF(lit_48)),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_depth_87 = YPmet(FUNCODEREF(fun_gen_depth_87),LITREF(lit_167),T136,ENVNUL,PNUL,YPfalse);
  T140 = BOUNDP(YcompilerSg2cYgen_depth);
  if (T140 != YPfalse) {
    T139 = VARREF(YcompilerSg2cYgen_depth);
  } else {
    T139 = YPfalse;
  }
  T141 = fun_gen_depth_87;
  T138 = CALL2(1,VARREF(YPdefine_method),T139,T141);
  VARSET(YcompilerSg2cYgen_depth,T138);
  lit_171 = YPPsym((P)"x-1508");
  lit_172 = YPPsym((P)"with-statement");
  lit_173 = YPPsym((P)"seq");
  lit_174 = YPPsym((P)"puts");
  lit_175 = YPsb((P)";\n");
  T144 = YPsig(YPPlist(2,LITREF(lit_148),LITREF(lit_149)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1508_88 = YPmet(FUNCODEREF(fun_x_1508_88),LITREF(lit_171),T144,ENVNUL,PNUL,YPfalse);
  T143 = YPsig(YPPlist(1,LITREF(lit_146)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_89 = YPmet(FUNCODEREF(fun_89),YPfalse,T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(YPPlist(1,LITREF(lit_34)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_90 = YPmet(FUNCODEREF(fun_90),YPfalse,T142,ENVNUL,PNUL,YPfalse);
  T145 = fun_90;
  YPmacro(YPPsym((P)"compiler/g2c"),YPPsym((P)"with-statement"),T145);
  lit_176 = YPPsym((P)"x-1512");
  lit_177 = YPPsym((P)"with-expression");
  T148 = YPsig(YPPlist(2,LITREF(lit_148),LITREF(lit_149)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1512_91 = YPmet(FUNCODEREF(fun_x_1512_91),LITREF(lit_176),T148,ENVNUL,PNUL,YPfalse);
  T147 = YPsig(YPPlist(1,LITREF(lit_146)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_92 = YPmet(FUNCODEREF(fun_92),YPfalse,T147,ENVNUL,PNUL,YPfalse);
  T146 = YPsig(YPPlist(1,LITREF(lit_34)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_93 = YPmet(FUNCODEREF(fun_93),YPfalse,T146,ENVNUL,PNUL,YPfalse);
  T149 = fun_93;
  YPmacro(YPPsym((P)"compiler/g2c"),YPPsym((P)"with-expression"),T149);
  lit_178 = YPPsym((P)"x-1516");
  lit_179 = YPPsym((P)"with-used-expression");
  lit_180 = YPPsym((P)"when");
  lit_181 = YPPsym((P)"program-register");
  T152 = YPsig(YPPlist(2,LITREF(lit_148),LITREF(lit_149)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1516_94 = YPmet(FUNCODEREF(fun_x_1516_94),LITREF(lit_178),T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(YPPlist(1,LITREF(lit_146)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_95 = YPmet(FUNCODEREF(fun_95),YPfalse,T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(YPPlist(1,LITREF(lit_34)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_96 = YPmet(FUNCODEREF(fun_96),YPfalse,T150,ENVNUL,PNUL,YPfalse);
  T153 = fun_96;
  YPmacro(YPPsym((P)"compiler/g2c"),YPPsym((P)"with-used-expression"),T153);
  lit_182 = YPPsym((P)"generate-quotation-forwards");
  lit_183 = YPPsym((P)"qb*");
  lit_184 = YPsb((P)"\n/* FORWARD QUOTATIONS: */\n\n");
  lit_185 = YPPsym((P)"x-1518");
  lit_186 = YPPsym((P)"x-1517");
  lit_187 = YPsb((P)"DEFLIT(lit_%s);\n");
  T155 = YPsig(YPPlist(1,LITREF(lit_186)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1518_97 = YPmet(FUNCODEREF(fun_x_1518_97),LITREF(lit_185),T155,ENVNUL,PNUL,YPfalse);
  T154 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_183)),YPPlist(2,VARREF(YLanyG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_forwards_98 = YPmet(FUNCODEREF(fun_generate_quotation_forwards_98),LITREF(lit_182),T154,ENVNUL,PNUL,YPfalse);
  T158 = BOUNDP(YcompilerSg2cYgenerate_quotation_forwards);
  if (T158 != YPfalse) {
    T157 = VARREF(YcompilerSg2cYgenerate_quotation_forwards);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_generate_quotation_forwards_98;
  T156 = CALL2(1,VARREF(YPdefine_method),T157,T159);
  VARSET(YcompilerSg2cYgenerate_quotation_forwards,T156);
  lit_188 = YPPsym((P)"generate-quotations");
  lit_189 = YPPsym((P)"x-1520");
  lit_190 = YPPsym((P)"x-1519");
  lit_191 = YPsb((P)"lit_%s = ");
  T161 = YPsig(YPPlist(1,LITREF(lit_190)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1520_99 = YPmet(FUNCODEREF(fun_x_1520_99),LITREF(lit_189),T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_183)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotations_100 = YPmet(FUNCODEREF(fun_generate_quotations_100),LITREF(lit_188),T160,ENVNUL,PNUL,YPfalse);
  T164 = BOUNDP(YcompilerSg2cYgenerate_quotations);
  if (T164 != YPfalse) {
    T163 = VARREF(YcompilerSg2cYgenerate_quotations);
  } else {
    T163 = YPfalse;
  }
  T165 = fun_generate_quotations_100;
  T162 = CALL2(1,VARREF(YPdefine_method),T163,T165);
  VARSET(YcompilerSg2cYgenerate_quotations,T162);
  lit_192 = YPPsym((P)"false-name");
  lit_193 = YPsb((P)"%false");
  T166 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_false_name_101 = YPmet(FUNCODEREF(fun_false_name_101),LITREF(lit_192),T166,ENVNUL,PNUL,YPfalse);
  T169 = BOUNDP(YcompilerSg2cYfalse_name);
  if (T169 != YPfalse) {
    T168 = VARREF(YcompilerSg2cYfalse_name);
  } else {
    T168 = YPfalse;
  }
  T170 = fun_false_name_101;
  T167 = CALL2(1,VARREF(YPdefine_method),T168,T170);
  VARSET(YcompilerSg2cYfalse_name,T167);
  lit_194 = YPPsym((P)"generate-quotation");
  lit_195 = YPPsym((P)"qb");
  lit_196 = YPsb((P)"%true");
  lit_197 = YPsb((P)"%false");
  T171 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_195)),YPPlist(2,VARREF(YLanyG),VARREF(YLlogG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_102 = YPmet(FUNCODEREF(fun_generate_quotation_102),LITREF(lit_194),T171,ENVNUL,PNUL,YPfalse);
  T174 = BOUNDP(YcompilerSg2cYgenerate_quotation);
  if (T174 != YPfalse) {
    T173 = VARREF(YcompilerSg2cYgenerate_quotation);
  } else {
    T173 = YPfalse;
  }
  T175 = fun_generate_quotation_102;
  T172 = CALL2(1,VARREF(YPdefine_method),T173,T175);
  VARSET(YcompilerSg2cYgenerate_quotation,T172);
  lit_198 = YPsb((P)"nil");
  T177 = CALL1(1,VARREF(YgooStypesYtE),Ynil);
  T176 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_195)),YPPlist(2,VARREF(YLanyG),T177),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_103 = YPmet(FUNCODEREF(fun_generate_quotation_103),LITREF(lit_194),T176,ENVNUL,PNUL,YPfalse);
  T180 = BOUNDP(YcompilerSg2cYgenerate_quotation);
  if (T180 != YPfalse) {
    T179 = VARREF(YcompilerSg2cYgenerate_quotation);
  } else {
    T179 = YPfalse;
  }
  T181 = fun_generate_quotation_103;
  T178 = CALL2(1,VARREF(YPdefine_method),T179,T181);
  VARSET(YcompilerSg2cYgenerate_quotation,T178);
  T183 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_104 = YPmet(FUNCODEREF(fun_104),YPfalse,T183,ENVNUL,PNUL,YPfalse);
  T182 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_195)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_105 = YPmet(FUNCODEREF(fun_generate_quotation_105),LITREF(lit_194),T182,ENVNUL,PNUL,YPfalse);
  T186 = BOUNDP(YcompilerSg2cYgenerate_quotation);
  if (T186 != YPfalse) {
    T185 = VARREF(YcompilerSg2cYgenerate_quotation);
  } else {
    T185 = YPfalse;
  }
  T187 = fun_generate_quotation_105;
  T184 = CALL2(1,VARREF(YPdefine_method),T185,T187);
  VARSET(YcompilerSg2cYgenerate_quotation,T184);
  lit_199 = YPsb((P)"%s((P)%d)");
  lit_200 = YPsb((P)"%int");
  T188 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_26)),YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_106 = YPmet(FUNCODEREF(fun_generate_quotation_106),LITREF(lit_194),T188,ENVNUL,PNUL,YPfalse);
  T191 = BOUNDP(YcompilerSg2cYgenerate_quotation);
  if (T191 != YPfalse) {
    T190 = VARREF(YcompilerSg2cYgenerate_quotation);
  } else {
    T190 = YPfalse;
  }
  T192 = fun_generate_quotation_106;
  T189 = CALL2(1,VARREF(YPdefine_method),T190,T192);
  VARSET(YcompilerSg2cYgenerate_quotation,T189);
  lit_201 = YPsb((P)"%s((P)%d)");
  lit_202 = YPsb((P)"%chr");
  T193 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_26)),YPPlist(2,VARREF(YLanyG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_107 = YPmet(FUNCODEREF(fun_generate_quotation_107),LITREF(lit_194),T193,ENVNUL,PNUL,YPfalse);
  T196 = BOUNDP(YcompilerSg2cYgenerate_quotation);
  if (T196 != YPfalse) {
    T195 = VARREF(YcompilerSg2cYgenerate_quotation);
  } else {
    T195 = YPfalse;
  }
  T197 = fun_generate_quotation_107;
  T194 = CALL2(1,VARREF(YPdefine_method),T195,T197);
  VARSET(YcompilerSg2cYgenerate_quotation,T194);
  lit_203 = YPPsym((P)"float-to-c-string");
  lit_204 = YPPsym((P)"o");
  lit_205 = YPPsym((P)"done");
  T200 = YPsig(YPPlist(1,LITREF(lit_119)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_108 = YPmet(FUNCODEREF(fun_loop_108),LITREF(lit_118),T200,ENVNUL,PNUL,YPfalse);
  T199 = YPsig(YPPlist(1,LITREF(lit_205)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_109 = YPmet(FUNCODEREF(fun_109),YPfalse,T199,ENVNUL,PNUL,YPfalse);
  T198 = YPsig(YPPlist(1,LITREF(lit_204)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_float_to_c_string_110 = YPmet(FUNCODEREF(fun_float_to_c_string_110),LITREF(lit_203),T198,ENVNUL,PNUL,YPfalse);
  T203 = BOUNDP(YcompilerSg2cYfloat_to_c_string);
  if (T203 != YPfalse) {
    T202 = VARREF(YcompilerSg2cYfloat_to_c_string);
  } else {
    T202 = YPfalse;
  }
  T204 = fun_float_to_c_string_110;
  T201 = CALL2(1,VARREF(YPdefine_method),T202,T204);
  VARSET(YcompilerSg2cYfloat_to_c_string,T201);
  lit_206 = YPsb((P)"%s(FLOINT(%s))");
  lit_207 = YPsb((P)"%flo");
  T205 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_26)),YPPlist(2,VARREF(YLanyG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_111 = YPmet(FUNCODEREF(fun_generate_quotation_111),LITREF(lit_194),T205,ENVNUL,PNUL,YPfalse);
  T208 = BOUNDP(YcompilerSg2cYgenerate_quotation);
  if (T208 != YPfalse) {
    T207 = VARREF(YcompilerSg2cYgenerate_quotation);
  } else {
    T207 = YPfalse;
  }
  T209 = fun_generate_quotation_111;
  T206 = CALL2(1,VARREF(YPdefine_method),T207,T209);
  VARSET(YcompilerSg2cYgenerate_quotation,T206);
  lit_208 = YPsb((P)"%s((P)\"%s\")");
  lit_209 = YPsb((P)"%sb");
  T210 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_26)),YPPlist(2,VARREF(YLanyG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_112 = YPmet(FUNCODEREF(fun_generate_quotation_112),LITREF(lit_194),T210,ENVNUL,PNUL,YPfalse);
  T213 = BOUNDP(YcompilerSg2cYgenerate_quotation);
  if (T213 != YPfalse) {
    T212 = VARREF(YcompilerSg2cYgenerate_quotation);
  } else {
    T212 = YPfalse;
  }
  T214 = fun_generate_quotation_112;
  T211 = CALL2(1,VARREF(YPdefine_method),T212,T214);
  VARSET(YcompilerSg2cYgenerate_quotation,T211);
  lit_210 = YPsb((P)"CALLN(1, %s, %s");
  lit_211 = YPsb((P)"vec");
  lit_212 = YPPsym((P)"x-1524");
  lit_213 = YPPsym((P)"x-1523");
  lit_214 = YPsb((P)", ");
  lit_215 = YPsb((P)")");
  T216 = YPsig(YPPlist(1,LITREF(lit_213)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1524_113 = YPmet(FUNCODEREF(fun_x_1524_113),LITREF(lit_212),T216,ENVNUL,PNUL,YPfalse);
  T215 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_26)),YPPlist(2,VARREF(YLanyG),VARREF(YLvecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_114 = YPmet(FUNCODEREF(fun_generate_quotation_114),LITREF(lit_194),T215,ENVNUL,PNUL,YPfalse);
  T219 = BOUNDP(YcompilerSg2cYgenerate_quotation);
  if (T219 != YPfalse) {
    T218 = VARREF(YcompilerSg2cYgenerate_quotation);
  } else {
    T218 = YPfalse;
  }
  T220 = fun_generate_quotation_114;
  T217 = CALL2(1,VARREF(YPdefine_method),T218,T220);
  VARSET(YcompilerSg2cYgenerate_quotation,T217);
  lit_216 = YPsb((P)"%s((P)\"%s\")");
  lit_217 = YPsb((P)"%%sym");
  T221 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_26)),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_115 = YPmet(FUNCODEREF(fun_generate_quotation_115),LITREF(lit_194),T221,ENVNUL,PNUL,YPfalse);
  T224 = BOUNDP(YcompilerSg2cYgenerate_quotation);
  if (T224 != YPfalse) {
    T223 = VARREF(YcompilerSg2cYgenerate_quotation);
  } else {
    T223 = YPfalse;
  }
  T225 = fun_generate_quotation_115;
  T222 = CALL2(1,VARREF(YPdefine_method),T223,T225);
  VARSET(YcompilerSg2cYgenerate_quotation,T222);
  lit_218 = YPPsym((P)"binding->c");
  T227 = YPsig(YPPlist(2,LITREF(lit_74),LITREF(lit_48)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T226 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_218),T227,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YcompilerSg2cYbinding_Gc,T226);
  lit_219 = YPPsym((P)"quotation");
  lit_220 = YPsb((P)"lit_%s");
  T228 = YPsig(YPPlist(2,LITREF(lit_74),LITREF(lit_48)),YPPlist(2,VARREF(YcompilerSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_Gc_116 = YPmet(FUNCODEREF(fun_binding_Gc_116),LITREF(lit_218),T228,ENVNUL,PNUL,YPfalse);
  T231 = BOUNDP(YcompilerSg2cYbinding_Gc);
  if (T231 != YPfalse) {
    T230 = VARREF(YcompilerSg2cYbinding_Gc);
  } else {
    T230 = YPfalse;
  }
  T232 = fun_binding_Gc_116;
  T229 = CALL2(1,VARREF(YPdefine_method),T230,T232);
  VARSET(YcompilerSg2cYbinding_Gc,T229);
  T233 = YPsig(YPPlist(2,LITREF(lit_74),LITREF(lit_48)),YPPlist(2,VARREF(YcompilerSastYLlocal_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_Gc_117 = YPmet(FUNCODEREF(fun_binding_Gc_117),LITREF(lit_218),T233,ENVNUL,PNUL,YPfalse);
  T236 = BOUNDP(YcompilerSg2cYbinding_Gc);
  if (T236 != YPfalse) {
    T235 = VARREF(YcompilerSg2cYbinding_Gc);
  } else {
    T235 = YPfalse;
  }
  T237 = fun_binding_Gc_117;
  T234 = CALL2(1,VARREF(YPdefine_method),T235,T237);
  VARSET(YcompilerSg2cYbinding_Gc,T234);
  T238 = YPsig(YPPlist(2,LITREF(lit_74),LITREF(lit_48)),YPPlist(2,VARREF(YcompilerSast_linearizeYLrenamed_local_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_Gc_118 = YPmet(FUNCODEREF(fun_binding_Gc_118),LITREF(lit_218),T238,ENVNUL,PNUL,YPfalse);
  T241 = BOUNDP(YcompilerSg2cYbinding_Gc);
  if (T241 != YPfalse) {
    T240 = VARREF(YcompilerSg2cYbinding_Gc);
  } else {
    T240 = YPfalse;
  }
  T242 = fun_binding_Gc_118;
  T239 = CALL2(1,VARREF(YPdefine_method),T240,T242);
  VARSET(YcompilerSg2cYbinding_Gc,T239);
  lit_221 = YPPsym((P)"reference->c");
  lit_222 = YPPsym((P)"v");
  T244 = YPsig(YPPlist(2,LITREF(lit_222),LITREF(lit_48)),YPPlist(2,VARREF(YcompilerSastYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T243 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_221),T244,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YcompilerSg2cYreference_Gc,T243);
  T245 = YPsig(YPPlist(2,LITREF(lit_222),LITREF(lit_48)),YPPlist(2,VARREF(YcompilerSastYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_Gc_119 = YPmet(FUNCODEREF(fun_reference_Gc_119),LITREF(lit_221),T245,ENVNUL,PNUL,YPfalse);
  T248 = BOUNDP(YcompilerSg2cYreference_Gc);
  if (T248 != YPfalse) {
    T247 = VARREF(YcompilerSg2cYreference_Gc);
  } else {
    T247 = YPfalse;
  }
  T249 = fun_reference_Gc_119;
  T246 = CALL2(1,VARREF(YPdefine_method),T247,T249);
  VARSET(YcompilerSg2cYreference_Gc,T246);
  lit_223 = YPsb((P)"LITREF");
  lit_224 = YPsb((P)"VARREF");
  T250 = YPsig(YPPlist(2,LITREF(lit_222),LITREF(lit_48)),YPPlist(2,VARREF(YcompilerSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_Gc_120 = YPmet(FUNCODEREF(fun_reference_Gc_120),LITREF(lit_221),T250,ENVNUL,PNUL,YPfalse);
  T253 = BOUNDP(YcompilerSg2cYreference_Gc);
  if (T253 != YPfalse) {
    T252 = VARREF(YcompilerSg2cYreference_Gc);
  } else {
    T252 = YPfalse;
  }
  T254 = fun_reference_Gc_120;
  T251 = CALL2(1,VARREF(YPdefine_method),T252,T254);
  VARSET(YcompilerSg2cYreference_Gc,T251);
  lit_225 = YPPsym((P)"to-c");
  lit_226 = YPPsym((P)"f");
  T256 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(YcompilerSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T255 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_225),T256,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YcompilerSg2cYto_c,T255);
  T257 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(YcompilerSast_linearizeYLtop_level_formG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_121 = YPmet(FUNCODEREF(fun_to_c_121),LITREF(lit_225),T257,ENVNUL,PNUL,YPfalse);
  T260 = BOUNDP(YcompilerSg2cYto_c);
  if (T260 != YPfalse) {
    T259 = VARREF(YcompilerSg2cYto_c);
  } else {
    T259 = YPfalse;
  }
  T261 = fun_to_c_121;
  T258 = CALL2(1,VARREF(YPdefine_method),T259,T261);
  VARSET(YcompilerSg2cYto_c,T258);
  T262 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(YcompilerSastYLpassive_programG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_122 = YPmet(FUNCODEREF(fun_to_c_122),LITREF(lit_225),T262,ENVNUL,PNUL,YPfalse);
  T265 = BOUNDP(YcompilerSg2cYto_c);
  if (T265 != YPfalse) {
    T264 = VARREF(YcompilerSg2cYto_c);
  } else {
    T264 = YPfalse;
  }
  T266 = fun_to_c_122;
  T263 = CALL2(1,VARREF(YPdefine_method),T264,T266);
  VARSET(YcompilerSg2cYto_c,T263);
  lit_227 = YPPsym((P)"gen-ref");
  T267 = YPsig(YPPlist(2,LITREF(lit_46),LITREF(lit_48)),YPPlist(2,VARREF(YcompilerSastYLreferenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_123 = YPmet(FUNCODEREF(fun_gen_ref_123),LITREF(lit_227),T267,ENVNUL,PNUL,YPfalse);
  T270 = BOUNDP(YcompilerSg2cYgen_ref);
  if (T270 != YPfalse) {
    T269 = VARREF(YcompilerSg2cYgen_ref);
  } else {
    T269 = YPfalse;
  }
  T271 = fun_gen_ref_123;
  T268 = CALL2(1,VARREF(YPdefine_method),T269,T271);
  VARSET(YcompilerSg2cYgen_ref,T268);
  lit_228 = YPsb((P)"FREEREF");
  lit_229 = YPsb((P)"%d");
  T272 = YPsig(YPPlist(2,LITREF(lit_46),LITREF(lit_48)),YPPlist(2,VARREF(YcompilerSast_linearizeYLfree_referenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_124 = YPmet(FUNCODEREF(fun_gen_ref_124),LITREF(lit_227),T272,ENVNUL,PNUL,YPfalse);
  T275 = BOUNDP(YcompilerSg2cYgen_ref);
  if (T275 != YPfalse) {
    T274 = VARREF(YcompilerSg2cYgen_ref);
  } else {
    T274 = YPfalse;
  }
  T276 = fun_gen_ref_124;
  T273 = CALL2(1,VARREF(YPdefine_method),T274,T276);
  VARSET(YcompilerSg2cYgen_ref,T273);
  lit_230 = YPsb((P)"T%d");
  lit_231 = YPsb((P)"T_1");
  T277 = YPsig(YPPlist(2,LITREF(lit_46),LITREF(lit_48)),YPPlist(2,VARREF(YcompilerSastYLprogramG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_125 = YPmet(FUNCODEREF(fun_gen_ref_125),LITREF(lit_227),T277,ENVNUL,PNUL,YPfalse);
  T280 = BOUNDP(YcompilerSg2cYgen_ref);
  if (T280 != YPfalse) {
    T279 = VARREF(YcompilerSg2cYgen_ref);
  } else {
    T279 = YPfalse;
  }
  T281 = fun_gen_ref_125;
  T278 = CALL2(1,VARREF(YPdefine_method),T279,T281);
  VARSET(YcompilerSg2cYgen_ref,T278);
  lit_232 = YPsb((P)"(P)%s");
  T284 = YPsig(YPPlist(2,LITREF(lit_46),LITREF(lit_48)),YPPlist(2,VARREF(YcompilerSastYLraw_constantG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T283 = fun_gen_ref_126 = YPmet(FUNCODEREF(fun_gen_ref_126),LITREF(lit_227),T284,ENVNUL,PNUL,YPfalse);
  T288 = BOUNDP(YcompilerSg2cYgen_ref);
  if (T288 != YPfalse) {
    T287 = VARREF(YcompilerSg2cYgen_ref);
  } else {
    T287 = YPfalse;
  }
  T289 = fun_gen_ref_126;
  T286 = CALL2(1,VARREF(YPdefine_method),T287,T289);
  T285 = VARSET(YcompilerSg2cYgen_ref,T286);
  T282 = T285;
  return T282;
}

P YcompilerSg2cY___main_2___() {
  P T286,T285,T284,T283,T282,T281,T280,T279,T278,T277,T276,T275,T274,T273,T272,T271;
  P T270,T269,T268,T267,T266,T265,T264,T263,T262,T261,T260,T259,T258,T257,T256,T255;
  P T254,T253,T252,T251,T250,T249,T248,T247,T246,T245,T244,T243,T242,T241,T240,T239;
  P T238,T237,T236,T235,T234,T233,T232,T231,T230,T229,T228,T227,T226,T225,T224,T223;
  P T222,T221,T220,T219,T218,T217,T216,T215,T214,T213,T212,T211,T210,T209,T208,T207;
  P T206,T205,T204,T203,T202,T201,T200,T199,T198,T197,T196,T195,T194,T193,T192,T191;
  P T190,T189,T188,T187,T186,T185,T184,T183,T182,T181,T180,T179,T178,T177,T176,T175;
  P T174,T173,T172,T171,T170,T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159;
  P T158,T157,T156,T155,T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143;
  P T142,T141,T140,T139,T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127;
  P T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111;
  P T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95;
  P T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79;
  P T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63;
  P T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47;
  P T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31;
  P T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T0 = YPsig(YPPlist(2,LITREF(lit_46),LITREF(lit_48)),YPPlist(2,VARREF(YcompilerSastYLconstantG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_127 = YPmet(FUNCODEREF(fun_gen_ref_127),LITREF(lit_227),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YcompilerSg2cYgen_ref);
  if (T3 != YPfalse) {
    T2 = VARREF(YcompilerSg2cYgen_ref);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_gen_ref_127;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YcompilerSg2cYgen_ref,T1);
  T5 = YPsig(YPPlist(2,LITREF(lit_46),LITREF(lit_48)),YPPlist(2,VARREF(YcompilerSastYLsequentialG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_128 = YPmet(FUNCODEREF(fun_gen_ref_128),LITREF(lit_227),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YcompilerSg2cYgen_ref);
  if (T8 != YPfalse) {
    T7 = VARREF(YcompilerSg2cYgen_ref);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_gen_ref_128;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YcompilerSg2cYgen_ref,T6);
  lit_233 = YPsb((P)"VARSET(");
  lit_234 = YPsb((P)",");
  lit_235 = YPsb((P)")");
  T10 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(YcompilerSastYLglobal_assignmentG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_129 = YPmet(FUNCODEREF(fun_to_c_129),LITREF(lit_225),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YcompilerSg2cYto_c);
  if (T13 != YPfalse) {
    T12 = VARREF(YcompilerSg2cYto_c);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_to_c_129;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YcompilerSg2cYto_c,T11);
  lit_236 = YPsb((P)"BOUNDP");
  T15 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(YcompilerSastYLboundQG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_130 = YPmet(FUNCODEREF(fun_to_c_130),LITREF(lit_225),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YcompilerSg2cYto_c);
  if (T18 != YPfalse) {
    T17 = VARREF(YcompilerSg2cYto_c);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_to_c_130;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YcompilerSg2cYto_c,T16);
  lit_237 = YPsb((P)"BOXVAL");
  T20 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(YcompilerSast_linearizeYLbox_readG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_131 = YPmet(FUNCODEREF(fun_to_c_131),LITREF(lit_225),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YcompilerSg2cYto_c);
  if (T23 != YPfalse) {
    T22 = VARREF(YcompilerSg2cYto_c);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_to_c_131;
  T21 = CALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YcompilerSg2cYto_c,T21);
  lit_238 = YPsb((P)"BOXVAL");
  lit_239 = YPsb((P)" = ");
  T25 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(YcompilerSast_linearizeYLbox_writeG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_132 = YPmet(FUNCODEREF(fun_to_c_132),LITREF(lit_225),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YcompilerSg2cYto_c);
  if (T28 != YPfalse) {
    T27 = VARREF(YcompilerSg2cYto_c);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_to_c_132;
  T26 = CALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YcompilerSg2cYto_c,T26);
  lit_240 = YPsb((P)" = BOXFAB");
  T30 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(YcompilerSast_linearizeYLbox_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_133 = YPmet(FUNCODEREF(fun_to_c_133),LITREF(lit_225),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YcompilerSg2cYto_c);
  if (T33 != YPfalse) {
    T32 = VARREF(YcompilerSg2cYto_c);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_to_c_133;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YcompilerSg2cYto_c,T31);
  lit_241 = YPsb((P)"if (");
  lit_242 = YPsb((P)" != %s) {\n");
  lit_243 = YPsb((P)"} else {\n");
  lit_244 = YPsb((P)"}\n");
  T35 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(YcompilerSastYLalternativeG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_134 = YPmet(FUNCODEREF(fun_to_c_134),LITREF(lit_225),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YcompilerSg2cYto_c);
  if (T38 != YPfalse) {
    T37 = VARREF(YcompilerSg2cYto_c);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_to_c_134;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YcompilerSg2cYto_c,T36);
  T41 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_135 = YPmet(FUNCODEREF(fun_135),YPfalse,T41,ENVNUL,PNUL,YPfalse);
  T40 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(YcompilerSastYLsequentialG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_136 = YPmet(FUNCODEREF(fun_to_c_136),LITREF(lit_225),T40,ENVNUL,PNUL,YPfalse);
  T44 = BOUNDP(YcompilerSg2cYto_c);
  if (T44 != YPfalse) {
    T43 = VARREF(YcompilerSg2cYto_c);
  } else {
    T43 = YPfalse;
  }
  T45 = fun_to_c_136;
  T42 = CALL2(1,VARREF(YPdefine_method),T43,T45);
  VARSET(YcompilerSg2cYto_c,T42);
  lit_245 = YPPsym((P)"generate-self-recursive-call");
  lit_246 = YPPsym((P)"x-1532");
  lit_247 = YPPsym((P)"x-1531");
  lit_248 = YPPsym((P)"x-1535");
  lit_249 = YPPsym((P)"x-1534");
  lit_250 = YPPsym((P)"x-1533");
  lit_251 = YPsb((P)"a%d = ");
  lit_252 = YPPsym((P)"x-1538");
  lit_253 = YPPsym((P)"x-1537");
  lit_254 = YPPsym((P)"x-1536");
  lit_255 = YPsb((P)" = a%d");
  lit_256 = YPsb((P)"goto loop");
  T49 = YPsig(YPPlist(1,LITREF(lit_247)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1532_137 = YPmet(FUNCODEREF(fun_x_1532_137),LITREF(lit_246),T49,ENVNUL,PNUL,YPfalse);
  T48 = YPsig(YPPlist(2,LITREF(lit_249),LITREF(lit_250)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1535_138 = YPmet(FUNCODEREF(fun_x_1535_138),LITREF(lit_248),T48,ENVNUL,PNUL,YPfalse);
  T47 = YPsig(YPPlist(2,LITREF(lit_253),LITREF(lit_254)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1538_139 = YPmet(FUNCODEREF(fun_x_1538_139),LITREF(lit_252),T47,ENVNUL,PNUL,YPfalse);
  T46 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(YcompilerSastYLapplicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_self_recursive_call_140 = YPmet(FUNCODEREF(fun_generate_self_recursive_call_140),LITREF(lit_245),T46,ENVNUL,PNUL,YPfalse);
  T52 = BOUNDP(YcompilerSg2cYgenerate_self_recursive_call);
  if (T52 != YPfalse) {
    T51 = VARREF(YcompilerSg2cYgenerate_self_recursive_call);
  } else {
    T51 = YPfalse;
  }
  T53 = fun_generate_self_recursive_call_140;
  T50 = CALL2(1,VARREF(YPdefine_method),T51,T53);
  VARSET(YcompilerSg2cYgenerate_self_recursive_call,T50);
  VARSET(YcompilerSg2cYDnumber_call_templates,YPint((P)3));
  lit_257 = YPPsym((P)"x-1540");
  lit_258 = YPPsym((P)"x-1539");
  lit_259 = YPsb((P)"CALL%s");
  lit_260 = YPsb((P)"N");
  lit_261 = YPsb((P)"0,");
  lit_262 = YPsb((P)"1,");
  lit_263 = YPsb((P)",%s");
  lit_264 = YPPsym((P)"x-1543");
  lit_265 = YPPsym((P)"x-1542");
  T56 = YPsig(YPPlist(1,LITREF(lit_258)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1540_141 = YPmet(FUNCODEREF(fun_x_1540_141),LITREF(lit_257),T56,ENVNUL,PNUL,YPfalse);
  T55 = YPsig(YPPlist(1,LITREF(lit_265)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1543_142 = YPmet(FUNCODEREF(fun_x_1543_142),LITREF(lit_264),T55,ENVNUL,PNUL,YPfalse);
  T54 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(YcompilerSastYLregular_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_143 = YPmet(FUNCODEREF(fun_to_c_143),LITREF(lit_225),T54,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(YcompilerSg2cYto_c);
  if (T59 != YPfalse) {
    T58 = VARREF(YcompilerSg2cYto_c);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_to_c_143;
  T57 = CALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YcompilerSg2cYto_c,T57);
  lit_266 = YPPsym((P)"x-1547");
  lit_267 = YPPsym((P)"x-1546");
  lit_268 = YPPsym((P)"x-1545");
  T62 = YPsig(YPPlist(2,LITREF(lit_267),LITREF(lit_268)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1547_144 = YPmet(FUNCODEREF(fun_x_1547_144),LITREF(lit_266),T62,ENVNUL,PNUL,YPfalse);
  T61 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(YcompilerSastYLargumentsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_145 = YPmet(FUNCODEREF(fun_to_c_145),LITREF(lit_225),T61,ENVNUL,PNUL,YPfalse);
  T65 = BOUNDP(YcompilerSg2cYto_c);
  if (T65 != YPfalse) {
    T64 = VARREF(YcompilerSg2cYto_c);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_to_c_145;
  T63 = CALL2(1,VARREF(YPdefine_method),T64,T66);
  VARSET(YcompilerSg2cYto_c,T63);
  lit_269 = YPPsym((P)"x-1551");
  lit_270 = YPPsym((P)"x-1550");
  lit_271 = YPPsym((P)"x-1549");
  lit_272 = YPPsym((P)"x-1548");
  lit_273 = YPsb((P)"check_type");
  lit_274 = YPsb((P)" = ");
  T68 = YPsig(YPPlist(3,LITREF(lit_270),LITREF(lit_271),LITREF(lit_272)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_x_1551_146 = YPmet(FUNCODEREF(fun_x_1551_146),LITREF(lit_269),T68,ENVNUL,PNUL,YPfalse);
  T67 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(YcompilerSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_147 = YPmet(FUNCODEREF(fun_to_c_147),LITREF(lit_225),T67,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(YcompilerSg2cYto_c);
  if (T71 != YPfalse) {
    T70 = VARREF(YcompilerSg2cYto_c);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_to_c_147;
  T69 = CALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YcompilerSg2cYto_c,T69);
  lit_275 = YPPsym((P)"x-1555");
  lit_276 = YPPsym((P)"x-1554");
  lit_277 = YPPsym((P)"x-1553");
  lit_278 = YPsb((P)" = ");
  T74 = YPsig(YPPlist(2,LITREF(lit_276),LITREF(lit_277)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1555_148 = YPmet(FUNCODEREF(fun_x_1555_148),LITREF(lit_275),T74,ENVNUL,PNUL,YPfalse);
  T73 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(YcompilerSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_149 = YPmet(FUNCODEREF(fun_to_c_149),LITREF(lit_225),T73,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YcompilerSg2cYto_c);
  if (T77 != YPfalse) {
    T76 = VARREF(YcompilerSg2cYto_c);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_to_c_149;
  T75 = CALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YcompilerSg2cYto_c,T75);
  lit_279 = YPsb((P)"with_exit");
  T79 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(YcompilerSastYLbind_exitG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_150 = YPmet(FUNCODEREF(fun_to_c_150),LITREF(lit_225),T79,ENVNUL,PNUL,YPfalse);
  T82 = BOUNDP(YcompilerSg2cYto_c);
  if (T82 != YPfalse) {
    T81 = VARREF(YcompilerSg2cYto_c);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_to_c_150;
  T80 = CALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(YcompilerSg2cYto_c,T80);
  lit_280 = YPsb((P)"with_cleanup");
  T84 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(YcompilerSastYLunwind_protectG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_151 = YPmet(FUNCODEREF(fun_to_c_151),LITREF(lit_225),T84,ENVNUL,PNUL,YPfalse);
  T87 = BOUNDP(YcompilerSg2cYto_c);
  if (T87 != YPfalse) {
    T86 = VARREF(YcompilerSg2cYto_c);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_to_c_151;
  T85 = CALL2(1,VARREF(YPdefine_method),T86,T88);
  VARSET(YcompilerSg2cYto_c,T85);
  lit_281 = YPsb((P)"CALLN");
  lit_282 = YPsb((P)"1");
  lit_283 = YPsb((P)"%with-monitor");
  lit_284 = YPsb((P)"5");
  T89 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(YcompilerSastYLmonitorG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_152 = YPmet(FUNCODEREF(fun_to_c_152),LITREF(lit_225),T89,ENVNUL,PNUL,YPfalse);
  T92 = BOUNDP(YcompilerSg2cYto_c);
  if (T92 != YPfalse) {
    T91 = VARREF(YcompilerSg2cYto_c);
  } else {
    T91 = YPfalse;
  }
  T93 = fun_to_c_152;
  T90 = CALL2(1,VARREF(YPdefine_method),T91,T93);
  VARSET(YcompilerSg2cYto_c,T90);
  lit_285 = YPPsym((P)"x-1560");
  lit_286 = YPPsym((P)"x-1559");
  lit_287 = YPsb((P)"(P)%s");
  lit_288 = YPPsym((P)"x-1565");
  lit_289 = YPPsym((P)"x-1564");
  lit_290 = YPPsym((P)"x-1563");
  T96 = YPsig(YPPlist(1,LITREF(lit_286)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1560_153 = YPmet(FUNCODEREF(fun_x_1560_153),LITREF(lit_285),T96,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(YPPlist(2,LITREF(lit_289),LITREF(lit_290)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1565_154 = YPmet(FUNCODEREF(fun_x_1565_154),LITREF(lit_288),T95,ENVNUL,PNUL,YPfalse);
  T94 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(YcompilerSastYLpredefined_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_155 = YPmet(FUNCODEREF(fun_to_c_155),LITREF(lit_225),T94,ENVNUL,PNUL,YPfalse);
  T99 = BOUNDP(YcompilerSg2cYto_c);
  if (T99 != YPfalse) {
    T98 = VARREF(YcompilerSg2cYto_c);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_to_c_155;
  T97 = CALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(YcompilerSg2cYto_c,T97);
  lit_291 = YPsb((P)"FUNFAB");
  lit_292 = YPsb((P)",%d");
  lit_293 = YPPsym((P)"x-1568");
  lit_294 = YPPsym((P)"x-1567");
  T103 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_156 = YPmet(FUNCODEREF(fun_156),YPfalse,T103,ENVNUL,PNUL,YPfalse);
  T102 = YPsig(YPPlist(1,LITREF(lit_294)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1568_157 = YPmet(FUNCODEREF(fun_x_1568_157),LITREF(lit_293),T102,ENVNUL,PNUL,YPfalse);
  T101 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(YcompilerSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_158 = YPmet(FUNCODEREF(fun_to_c_158),LITREF(lit_225),T101,ENVNUL,PNUL,YPfalse);
  T106 = BOUNDP(YcompilerSg2cYto_c);
  if (T106 != YPfalse) {
    T105 = VARREF(YcompilerSg2cYto_c);
  } else {
    T105 = YPfalse;
  }
  T107 = fun_to_c_158;
  T104 = CALL2(1,VARREF(YPdefine_method),T105,T107);
  VARSET(YcompilerSg2cYto_c,T104);
  lit_295 = YPPsym((P)"funshell-to-c");
  lit_296 = YPPsym((P)"b");
  lit_297 = YPsb((P)"FUNSHELL");
  lit_298 = YPsb((P)"%d");
  lit_299 = YPsb((P)"%d");
  T108 = YPsig(YPPlist(5,LITREF(lit_296),LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(5,VARREF(YcompilerSastYLbindingG),VARREF(YcompilerSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funshell_to_c_159 = YPmet(FUNCODEREF(fun_funshell_to_c_159),LITREF(lit_295),T108,ENVNUL,PNUL,YPfalse);
  T111 = BOUNDP(YcompilerSg2cYfunshell_to_c);
  if (T111 != YPfalse) {
    T110 = VARREF(YcompilerSg2cYfunshell_to_c);
  } else {
    T110 = YPfalse;
  }
  T112 = fun_funshell_to_c_159;
  T109 = CALL2(1,VARREF(YPdefine_method),T110,T112);
  VARSET(YcompilerSg2cYfunshell_to_c,T109);
  lit_300 = YPPsym((P)"funinit-to-c");
  lit_301 = YPsb((P)"FUNINIT");
  lit_302 = YPsb((P)", %s");
  lit_303 = YPPsym((P)"x-1572");
  lit_304 = YPPsym((P)"x-1571");
  T115 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_160 = YPmet(FUNCODEREF(fun_160),YPfalse,T115,ENVNUL,PNUL,YPfalse);
  T114 = YPsig(YPPlist(1,LITREF(lit_304)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1572_161 = YPmet(FUNCODEREF(fun_x_1572_161),LITREF(lit_303),T114,ENVNUL,PNUL,YPfalse);
  T113 = YPsig(YPPlist(5,LITREF(lit_296),LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(5,VARREF(YcompilerSastYLbindingG),VARREF(YcompilerSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funinit_to_c_162 = YPmet(FUNCODEREF(fun_funinit_to_c_162),LITREF(lit_300),T113,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YcompilerSg2cYfuninit_to_c);
  if (T118 != YPfalse) {
    T117 = VARREF(YcompilerSg2cYfuninit_to_c);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_funinit_to_c_162;
  T116 = CALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YcompilerSg2cYfuninit_to_c,T116);
  lit_305 = YPsb((P)"%macro");
  T120 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(YcompilerSastYLast_macro_definitionG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_163 = YPmet(FUNCODEREF(fun_to_c_163),LITREF(lit_225),T120,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YcompilerSg2cYto_c);
  if (T123 != YPfalse) {
    T122 = VARREF(YcompilerSg2cYto_c);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_to_c_163;
  T121 = CALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YcompilerSg2cYto_c,T121);
  lit_306 = YPPsym((P)"out-list-builder");
  lit_307 = YPPsym((P)"elts");
  lit_308 = YPsb((P)"nil");
  lit_309 = YPsb((P)"%%list");
  lit_310 = YPsb((P)"%d");
  lit_311 = YPPsym((P)"x-1576");
  lit_312 = YPPsym((P)"x-1575");
  T126 = YPsig(YPPlist(1,LITREF(lit_312)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1576_164 = YPmet(FUNCODEREF(fun_x_1576_164),LITREF(lit_311),T126,ENVNUL,PNUL,YPfalse);
  T125 = YPsig(YPPlist(3,LITREF(lit_226),LITREF(lit_48),LITREF(lit_307)),YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_out_list_builder_165 = YPmet(FUNCODEREF(fun_out_list_builder_165),LITREF(lit_306),T125,ENVNUL,PNUL,YPfalse);
  T129 = BOUNDP(YcompilerSg2cYout_list_builder);
  if (T129 != YPfalse) {
    T128 = VARREF(YcompilerSg2cYout_list_builder);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_out_list_builder_165;
  T127 = CALL2(1,VARREF(YPdefine_method),T128,T130);
  VARSET(YcompilerSg2cYout_list_builder,T127);
  lit_313 = YPPsym((P)"gen-fab-list");
  lit_314 = YPPsym((P)"refs");
  T132 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_166 = YPmet(FUNCODEREF(fun_166),YPfalse,T132,ENVNUL,PNUL,YPfalse);
  T131 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_314)),YPPlist(2,VARREF(YLanyG),VARREF(YcompilerSastYLfab_listG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_fab_list_167 = YPmet(FUNCODEREF(fun_gen_fab_list_167),LITREF(lit_313),T131,ENVNUL,PNUL,YPfalse);
  T135 = BOUNDP(YcompilerSg2cYgen_fab_list);
  if (T135 != YPfalse) {
    T134 = VARREF(YcompilerSg2cYgen_fab_list);
  } else {
    T134 = YPfalse;
  }
  T136 = fun_gen_fab_list_167;
  T133 = CALL2(1,VARREF(YPdefine_method),T134,T136);
  VARSET(YcompilerSg2cYgen_fab_list,T133);
  lit_315 = YPPsym((P)"generate-function-specs");
  lit_316 = YPPsym((P)"sig");
  T137 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_316)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_specs_168 = YPmet(FUNCODEREF(fun_generate_function_specs_168),LITREF(lit_315),T137,ENVNUL,PNUL,YPfalse);
  T140 = BOUNDP(YcompilerSg2cYgenerate_function_specs);
  if (T140 != YPfalse) {
    T139 = VARREF(YcompilerSg2cYgenerate_function_specs);
  } else {
    T139 = YPfalse;
  }
  T141 = fun_generate_function_specs_168;
  T138 = CALL2(1,VARREF(YPdefine_method),T139,T141);
  VARSET(YcompilerSg2cYgenerate_function_specs,T138);
  lit_317 = YPsb((P)"%sig");
  lit_318 = YPsb((P)"nil");
  T143 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_169 = YPmet(FUNCODEREF(fun_169),YPfalse,T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(YcompilerSastYLast_signatureG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_170 = YPmet(FUNCODEREF(fun_to_c_170),LITREF(lit_225),T142,ENVNUL,PNUL,YPfalse);
  T146 = BOUNDP(YcompilerSg2cYto_c);
  if (T146 != YPfalse) {
    T145 = VARREF(YcompilerSg2cYto_c);
  } else {
    T145 = YPfalse;
  }
  T147 = fun_to_c_170;
  T144 = CALL2(1,VARREF(YPdefine_method),T145,T147);
  VARSET(YcompilerSg2cYto_c,T144);
  lit_319 = YPsb((P)"%gen");
  lit_320 = YPsb((P)"(P)YPgen_code((P)YPdispatch)");
  lit_321 = YPsb((P)"nil");
  lit_322 = YPsb((P)"%false");
  lit_323 = YPsb((P)"%false");
  lit_324 = YPsb((P)"%false");
  T148 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(YcompilerSastYLast_genericG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_171 = YPmet(FUNCODEREF(fun_to_c_171),LITREF(lit_225),T148,ENVNUL,PNUL,YPfalse);
  T151 = BOUNDP(YcompilerSg2cYto_c);
  if (T151 != YPfalse) {
    T150 = VARREF(YcompilerSg2cYto_c);
  } else {
    T150 = YPfalse;
  }
  T152 = fun_to_c_171;
  T149 = CALL2(1,VARREF(YPdefine_method),T150,T152);
  VARSET(YcompilerSg2cYto_c,T149);
  lit_325 = YPPsym((P)"generate-function-forwards");
  lit_326 = YPPsym((P)"definitions");
  lit_327 = YPsb((P)"\n/* FUNCTIONS: */\n\n");
  lit_328 = YPPsym((P)"x-1580");
  lit_329 = YPPsym((P)"x-1579");
  T154 = YPsig(YPPlist(1,LITREF(lit_329)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1580_172 = YPmet(FUNCODEREF(fun_x_1580_172),LITREF(lit_328),T154,ENVNUL,PNUL,YPfalse);
  T153 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_326)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forwards_173 = YPmet(FUNCODEREF(fun_generate_function_forwards_173),LITREF(lit_325),T153,ENVNUL,PNUL,YPfalse);
  T157 = BOUNDP(YcompilerSg2cYgenerate_function_forwards);
  if (T157 != YPfalse) {
    T156 = VARREF(YcompilerSg2cYgenerate_function_forwards);
  } else {
    T156 = YPfalse;
  }
  T158 = fun_generate_function_forwards_173;
  T155 = CALL2(1,VARREF(YPdefine_method),T156,T158);
  VARSET(YcompilerSg2cYgenerate_function_forwards,T155);
  lit_330 = YPPsym((P)"generate-function-forward");
  lit_331 = YPPsym((P)"defn");
  lit_332 = YPsb((P)"%s P %s (");
  lit_333 = YPsb((P)"static");
  lit_334 = YPsb((P)"extern");
  lit_335 = YPPsym((P)"x-1584");
  lit_336 = YPPsym((P)"x-1583");
  lit_337 = YPPsym((P)"x-1582");
  lit_338 = YPsb((P)"P");
  lit_339 = YPsb((P)");\n");
  T160 = YPsig(YPPlist(2,LITREF(lit_336),LITREF(lit_337)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1584_174 = YPmet(FUNCODEREF(fun_x_1584_174),LITREF(lit_335),T160,ENVNUL,PNUL,YPfalse);
  T159 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_331)),YPPlist(2,VARREF(YLanyG),VARREF(YcompilerSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_175 = YPmet(FUNCODEREF(fun_generate_function_forward_175),LITREF(lit_330),T159,ENVNUL,PNUL,YPfalse);
  T163 = BOUNDP(YcompilerSg2cYgenerate_function_forward);
  if (T163 != YPfalse) {
    T162 = VARREF(YcompilerSg2cYgenerate_function_forward);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_generate_function_forward_175;
  T161 = CALL2(1,VARREF(YPdefine_method),T162,T164);
  VARSET(YcompilerSg2cYgenerate_function_forward,T161);
  lit_340 = YPPsym((P)"generate-function-binding");
  lit_341 = YPPlist(2,YPPsym((P)"global"),YPPsym((P)"runtime"));
  lit_342 = YPsb((P)"fun_%s");
  lit_343 = YPsb((P)"fun_%s_%s");
  T165 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_331)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_binding_176 = YPmet(FUNCODEREF(fun_generate_function_binding_176),LITREF(lit_340),T165,ENVNUL,PNUL,YPfalse);
  T168 = BOUNDP(YcompilerSg2cYgenerate_function_binding);
  if (T168 != YPfalse) {
    T167 = VARREF(YcompilerSg2cYgenerate_function_binding);
  } else {
    T167 = YPfalse;
  }
  T169 = fun_generate_function_binding_176;
  T166 = CALL2(1,VARREF(YPdefine_method),T167,T169);
  VARSET(YcompilerSg2cYgenerate_function_binding,T166);
  lit_344 = YPsb((P)"FUNFOR(");
  lit_345 = YPsb((P)"LOCFOR(");
  lit_346 = YPsb((P)");\n");
  T170 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_331)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_177 = YPmet(FUNCODEREF(fun_generate_function_forward_177),LITREF(lit_330),T170,ENVNUL,PNUL,YPfalse);
  T173 = BOUNDP(YcompilerSg2cYgenerate_function_forward);
  if (T173 != YPfalse) {
    T172 = VARREF(YcompilerSg2cYgenerate_function_forward);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_generate_function_forward_177;
  T171 = CALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(YcompilerSg2cYgenerate_function_forward,T171);
  lit_347 = YPPsym((P)"generate-function-bodies");
  lit_348 = YPsb((P)"\n/* FUNCTION CODES: */\n");
  lit_349 = YPPsym((P)"def");
  T176 = YPsig(YPPlist(1,LITREF(lit_349)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_178 = YPmet(FUNCODEREF(fun_178),YPfalse,T176,ENVNUL,PNUL,YPfalse);
  T175 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_326)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_bodies_179 = YPmet(FUNCODEREF(fun_generate_function_bodies_179),LITREF(lit_347),T175,ENVNUL,PNUL,YPfalse);
  T179 = BOUNDP(YcompilerSg2cYgenerate_function_bodies);
  if (T179 != YPfalse) {
    T178 = VARREF(YcompilerSg2cYgenerate_function_bodies);
  } else {
    T178 = YPfalse;
  }
  T180 = fun_generate_function_bodies_179;
  T177 = CALL2(1,VARREF(YPdefine_method),T178,T180);
  VARSET(YcompilerSg2cYgenerate_function_bodies,T177);
  lit_350 = YPPsym((P)"generate-functions");
  T182 = YPsig(YPPlist(1,LITREF(lit_349)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_180 = YPmet(FUNCODEREF(fun_180),YPfalse,T182,ENVNUL,PNUL,YPfalse);
  T181 = YPsig(YPPlist(4,LITREF(lit_326),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_functions_181 = YPmet(FUNCODEREF(fun_generate_functions_181),LITREF(lit_350),T181,ENVNUL,PNUL,YPfalse);
  T185 = BOUNDP(YcompilerSg2cYgenerate_functions);
  if (T185 != YPfalse) {
    T184 = VARREF(YcompilerSg2cYgenerate_functions);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_generate_functions_181;
  T183 = CALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YcompilerSg2cYgenerate_functions,T183);
  lit_351 = YPPsym((P)"generate-closure-structure");
  lit_352 = YPPsym((P)"definition");
  lit_353 = YPsb((P)" = %s");
  lit_354 = YPsb((P)"%met");
  lit_355 = YPsb((P)"ENVNUL");
  lit_356 = YPsb((P)"PNUL");
  T187 = YPsig(YPPlist(4,LITREF(lit_352),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_closure_structure_182 = YPmet(FUNCODEREF(fun_generate_closure_structure_182),LITREF(lit_351),T187,ENVNUL,PNUL,YPfalse);
  T190 = BOUNDP(YcompilerSg2cYgenerate_closure_structure);
  if (T190 != YPfalse) {
    T189 = VARREF(YcompilerSg2cYgenerate_closure_structure);
  } else {
    T189 = YPfalse;
  }
  T191 = fun_generate_closure_structure_182;
  T188 = CALL2(1,VARREF(YPdefine_method),T189,T191);
  VARSET(YcompilerSg2cYgenerate_closure_structure,T188);
  lit_357 = YPPsym((P)"generate-function-body-reference");
  lit_358 = YPsb((P)"FUNCODEREF(");
  lit_359 = YPsb((P)")");
  T192 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_352)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_body_reference_183 = YPmet(FUNCODEREF(fun_generate_function_body_reference_183),LITREF(lit_357),T192,ENVNUL,PNUL,YPfalse);
  T195 = BOUNDP(YcompilerSg2cYgenerate_function_body_reference);
  if (T195 != YPfalse) {
    T194 = VARREF(YcompilerSg2cYgenerate_function_body_reference);
  } else {
    T194 = YPfalse;
  }
  T196 = fun_generate_function_body_reference_183;
  T193 = CALL2(1,VARREF(YPdefine_method),T194,T196);
  VARSET(YcompilerSg2cYgenerate_function_body_reference,T193);
  lit_360 = YPPsym((P)"generate-shadow-args");
  lit_361 = YPPsym((P)"bindings");
  lit_362 = YPsb((P)"P ");
  lit_363 = YPPsym((P)"x-1590");
  lit_364 = YPPsym((P)"x-1589");
  lit_365 = YPPsym((P)"x-1588");
  lit_366 = YPPsym((P)"x-1587");
  lit_367 = YPsb((P)"a%d");
  T198 = YPsig(YPPlist(3,LITREF(lit_364),LITREF(lit_365),LITREF(lit_366)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_x_1590_184 = YPmet(FUNCODEREF(fun_x_1590_184),LITREF(lit_363),T198,ENVNUL,PNUL,YPfalse);
  T197 = YPsig(YPPlist(2,LITREF(lit_361),LITREF(lit_48)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_shadow_args_185 = YPmet(FUNCODEREF(fun_generate_shadow_args_185),LITREF(lit_360),T197,ENVNUL,PNUL,YPfalse);
  T201 = BOUNDP(YcompilerSg2cYgenerate_shadow_args);
  if (T201 != YPfalse) {
    T200 = VARREF(YcompilerSg2cYgenerate_shadow_args);
  } else {
    T200 = YPfalse;
  }
  T202 = fun_generate_shadow_args_185;
  T199 = CALL2(1,VARREF(YPdefine_method),T200,T202);
  VARSET(YcompilerSg2cYgenerate_shadow_args,T199);
  lit_368 = YPPsym((P)"generate-return");
  lit_369 = YPsb((P)"return ");
  T203 = YPsig(YPPlist(3,LITREF(lit_331),LITREF(lit_165),LITREF(lit_48)),YPPlist(3,VARREF(YcompilerSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_return_186 = YPmet(FUNCODEREF(fun_generate_return_186),LITREF(lit_368),T203,ENVNUL,PNUL,YPfalse);
  T206 = BOUNDP(YcompilerSg2cYgenerate_return);
  if (T206 != YPfalse) {
    T205 = VARREF(YcompilerSg2cYgenerate_return);
  } else {
    T205 = YPfalse;
  }
  T207 = fun_generate_return_186;
  T204 = CALL2(1,VARREF(YPdefine_method),T205,T207);
  VARSET(YcompilerSg2cYgenerate_return,T204);
  lit_370 = YPsb((P)"RET");
  T208 = YPsig(YPPlist(3,LITREF(lit_331),LITREF(lit_165),LITREF(lit_48)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_return_187 = YPmet(FUNCODEREF(fun_generate_return_187),LITREF(lit_368),T208,ENVNUL,PNUL,YPfalse);
  T211 = BOUNDP(YcompilerSg2cYgenerate_return);
  if (T211 != YPfalse) {
    T210 = VARREF(YcompilerSg2cYgenerate_return);
  } else {
    T210 = YPfalse;
  }
  T212 = fun_generate_return_187;
  T209 = CALL2(1,VARREF(YPdefine_method),T210,T212);
  VARSET(YcompilerSg2cYgenerate_return,T209);
  lit_371 = YPPsym((P)"primitive-inlinable?");
  lit_372 = YPPlist(34,YPPsym((P)"%tag-bits"),YPPsym((P)"%tag"),YPPsym((P)"%untag"),YPPsym((P)"%class-of"),YPPsym((P)"%int"),YPPsym((P)"%ib"),YPPsym((P)"%iu"),YPPsym((P)"%chr"),YPPsym((P)"%cb"),YPPsym((P)"%cu"),YPPsym((P)"%loc"),YPPsym((P)"%lb"),YPPsym((P)"%lu"),YPPsym((P)"%empty?"),YPPsym((P)"%head"),YPPsym((P)"%tail"),YPPsym((P)"@empty?"),YPPsym((P)"@head"),YPPsym((P)"@tail"),YPPsym((P)"@=="),YPPsym((P)"@="),YPPsym((P)"@+"),YPPsym((P)"@<"),YPPsym((P)"%gen-cache-arg-pos"),YPPsym((P)"%gen-cache-singletons"),YPPsym((P)"%gen-cache-classes"),YPPsym((P)"%gen-cache-missable?"),YPPsym((P)"@oelt"),YPPsym((P)"@oelt-setter"),YPPsym((P)"@olen"),YPPsym((P)"prop-value-at"),YPPsym((P)"prop-value-at-setter"),YPPsym((P)"gen-lookup"),YPPsym((P)"gen-lookup-1-using"));
  T213 = YPsig(YPPlist(1,LITREF(lit_46)),YPPlist(1,VARREF(YcompilerSastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_primitive_inlinableQ_188 = YPmet(FUNCODEREF(fun_primitive_inlinableQ_188),LITREF(lit_371),T213,ENVNUL,PNUL,YPfalse);
  T216 = BOUNDP(YcompilerSg2cYprimitive_inlinableQ);
  if (T216 != YPfalse) {
    T215 = VARREF(YcompilerSg2cYprimitive_inlinableQ);
  } else {
    T215 = YPfalse;
  }
  T217 = fun_primitive_inlinableQ_188;
  T214 = CALL2(1,VARREF(YPdefine_method),T215,T217);
  VARSET(YcompilerSg2cYprimitive_inlinableQ,T214);
  lit_373 = YPPsym((P)"generate-function-code");
  lit_374 = YPsb((P)"\n%s%sP ");
  lit_375 = YPsb((P)"static ");
  lit_376 = YPsb((P)"");
  lit_377 = YPsb((P)"INLINE ");
  lit_378 = YPPsym((P)"x-1596");
  lit_379 = YPPsym((P)"x-1595");
  lit_380 = YPPsym((P)"x-1594");
  lit_381 = YPsb((P)"P ");
  lit_382 = YPsb((P)" {\n");
  lit_383 = YPsb((P)"loop:\n");
  lit_384 = YPsb((P)"}\n");
  T219 = YPsig(YPPlist(2,LITREF(lit_379),LITREF(lit_380)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1596_189 = YPmet(FUNCODEREF(fun_x_1596_189),LITREF(lit_378),T219,ENVNUL,PNUL,YPfalse);
  T218 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_46)),YPPlist(2,VARREF(YLanyG),VARREF(YcompilerSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_190 = YPmet(FUNCODEREF(fun_generate_function_code_190),LITREF(lit_373),T218,ENVNUL,PNUL,YPfalse);
  T222 = BOUNDP(YcompilerSg2cYgenerate_function_code);
  if (T222 != YPfalse) {
    T221 = VARREF(YcompilerSg2cYgenerate_function_code);
  } else {
    T221 = YPfalse;
  }
  T223 = fun_generate_function_code_190;
  T220 = CALL2(1,VARREF(YPdefine_method),T221,T223);
  VARSET(YcompilerSg2cYgenerate_function_code,T220);
  lit_385 = YPPsym((P)"dispatcher?");
  lit_386 = YPsb((P)"%dispatch");
  lit_387 = YPsb((P)"-dispatch");
  lit_388 = YPsb((P)"-dispatch");
  T224 = YPsig(YPPlist(1,LITREF(lit_352)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_dispatcherQ_191 = YPmet(FUNCODEREF(fun_dispatcherQ_191),LITREF(lit_385),T224,ENVNUL,PNUL,YPfalse);
  T227 = BOUNDP(YcompilerSg2cYdispatcherQ);
  if (T227 != YPfalse) {
    T226 = VARREF(YcompilerSg2cYdispatcherQ);
  } else {
    T226 = YPfalse;
  }
  T228 = fun_dispatcherQ_191;
  T225 = CALL2(1,VARREF(YPdefine_method),T226,T228);
  VARSET(YcompilerSg2cYdispatcherQ,T225);
  lit_389 = YPsb((P)"\nFUNCODEDEF(");
  lit_390 = YPsb((P)") {\n");
  lit_391 = YPsb((P)"P ");
  lit_392 = YPPsym((P)"x-1600");
  lit_393 = YPPsym((P)"x-1599");
  lit_394 = YPPsym((P)"x-1598");
  lit_395 = YPsb((P)"LINK_STACK();\n");
  lit_396 = YPsb((P)"NARGS(");
  lit_397 = YPsb((P)"ARG(");
  lit_398 = YPsb((P)", %d)");
  lit_399 = YPsb((P)"loop:\n");
  lit_400 = YPsb((P)"UNLINK_STACK();\n");
  lit_401 = YPsb((P)"}\n");
  T231 = YPsig(YPPlist(2,LITREF(lit_393),LITREF(lit_394)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1600_192 = YPmet(FUNCODEREF(fun_x_1600_192),LITREF(lit_392),T231,ENVNUL,PNUL,YPfalse);
  T230 = YPsig(YPPlist(1,LITREF(lit_296)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_193 = YPmet(FUNCODEREF(fun_193),YPfalse,T230,ENVNUL,PNUL,YPfalse);
  T229 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_352)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_194 = YPmet(FUNCODEREF(fun_generate_function_code_194),LITREF(lit_373),T229,ENVNUL,PNUL,YPfalse);
  T234 = BOUNDP(YcompilerSg2cYgenerate_function_code);
  if (T234 != YPfalse) {
    T233 = VARREF(YcompilerSg2cYgenerate_function_code);
  } else {
    T233 = YPfalse;
  }
  T235 = fun_generate_function_code_194;
  T232 = CALL2(1,VARREF(YPdefine_method),T233,T235);
  VARSET(YcompilerSg2cYgenerate_function_code,T232);
  lit_402 = YPPsym((P)"generate-local-temporaries");
  lit_403 = YPPsym((P)"temps");
  lit_404 = YPPsym((P)"x-1602");
  lit_405 = YPPsym((P)"x-1601");
  lit_406 = YPsb((P)"P ");
  T237 = YPsig(YPPlist(1,LITREF(lit_405)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1602_195 = YPmet(FUNCODEREF(fun_x_1602_195),LITREF(lit_404),T237,ENVNUL,PNUL,YPfalse);
  T236 = YPsig(YPPlist(2,LITREF(lit_403),LITREF(lit_48)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_local_temporaries_196 = YPmet(FUNCODEREF(fun_generate_local_temporaries_196),LITREF(lit_402),T236,ENVNUL,PNUL,YPfalse);
  T240 = BOUNDP(YcompilerSg2cYgenerate_local_temporaries);
  if (T240 != YPfalse) {
    T239 = VARREF(YcompilerSg2cYgenerate_local_temporaries);
  } else {
    T239 = YPfalse;
  }
  T241 = fun_generate_local_temporaries_196;
  T238 = CALL2(1,VARREF(YPdefine_method),T239,T241);
  VARSET(YcompilerSg2cYgenerate_local_temporaries,T238);
  VARSET(YcompilerSg2cYTtrace_registersQT,YPfalse);
  VARSET(YcompilerSg2cYTregisters_per_lineT,YPint((P)16));
  lit_407 = YPPsym((P)"generate-registers");
  lit_408 = YPPsym((P)"regs");
  lit_409 = YPPsym((P)"next-line");
  lit_410 = YPsb((P)"P ");
  lit_411 = YPPsym((P)"next-reg");
  lit_412 = YPsb((P)";\n");
  T244 = YPsig(YPPlist(2,LITREF(lit_408),LITREF(lit_119)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_next_reg_197 = YPmet(FUNCODEREF(fun_next_reg_197),LITREF(lit_411),T244,ENVNUL,PNUL,YPfalse);
  T243 = YPsig(YPPlist(1,LITREF(lit_408)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_next_line_198 = YPmet(FUNCODEREF(fun_next_line_198),LITREF(lit_409),T243,ENVNUL,PNUL,YPfalse);
  T242 = YPsig(YPPlist(2,LITREF(lit_408),LITREF(lit_48)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_registers_199 = YPmet(FUNCODEREF(fun_generate_registers_199),LITREF(lit_407),T242,ENVNUL,PNUL,YPfalse);
  T247 = BOUNDP(YcompilerSg2cYgenerate_registers);
  if (T247 != YPfalse) {
    T246 = VARREF(YcompilerSg2cYgenerate_registers);
  } else {
    T246 = YPfalse;
  }
  T248 = fun_generate_registers_199;
  T245 = CALL2(1,VARREF(YPdefine_method),T246,T248);
  VARSET(YcompilerSg2cYgenerate_registers,T245);
  lit_413 = YPPsym((P)"module-info-name");
  lit_414 = YPsb((P)"module_info_");
  T249 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_info_name_200 = YPmet(FUNCODEREF(fun_module_info_name_200),LITREF(lit_413),T249,ENVNUL,PNUL,YPfalse);
  T252 = BOUNDP(YcompilerSg2cYmodule_info_name);
  if (T252 != YPfalse) {
    T251 = VARREF(YcompilerSg2cYmodule_info_name);
  } else {
    T251 = YPfalse;
  }
  T253 = fun_module_info_name_200;
  T250 = CALL2(1,VARREF(YPdefine_method),T251,T253);
  VARSET(YcompilerSg2cYmodule_info_name,T250);
  lit_415 = YPPsym((P)"declare-imported-module-infos");
  lit_416 = YPPsym((P)"maybe-declare");
  lit_417 = YPsb((P)"extern MODULE_INFO %s;\n");
  T256 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_maybe_declare_201 = YPmet(FUNCODEREF(fun_maybe_declare_201),LITREF(lit_416),T256,ENVNUL,PNUL,YPfalse);
  T255 = YPsig(YPPlist(1,LITREF(lit_74)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_202 = YPmet(FUNCODEREF(fun_202),YPfalse,T255,ENVNUL,PNUL,YPfalse);
  T254 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_17)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YcompilerSg2cYdeclare_imported_module_infos = YPmet(FUNCODEREF(YcompilerSg2cYdeclare_imported_module_infos),LITREF(lit_415),T254,ENVNUL,PNUL,YPfalse);
  T257 = YcompilerSg2cYdeclare_imported_module_infos;
  VARSET(YcompilerSg2cYdeclare_imported_module_infos,T257);
  lit_418 = YPPsym((P)"generate-module-info");
  lit_419 = YPsb((P)"\n/* MODULE ENVIRONMENT INFORMATION */\n\n");
  lit_420 = YPsb((P)"\nstatic USE_INFO use_infos[] = {\n");
  lit_421 = YPPsym((P)"x-1604");
  lit_422 = YPPsym((P)"x-1603");
  lit_423 = YPsb((P)"  {&%s},\n");
  lit_424 = YPsb((P)"  {NULL}\n};\n");
  lit_425 = YPsb((P)"\nstatic IMPORT_INFO import_infos[] = {\n");
  lit_426 = YPPsym((P)"local-name");
  lit_427 = YPsb((P)"  {\"%s\", &%s, \"%s\"},\n");
  lit_428 = YPsb((P)"  {NULL,NULL,NULL}\n};\n");
  lit_429 = YPsb((P)"\nstatic BINDING_INFO binding_infos[] = {\n");
  lit_430 = YPsb((P)"  {\"%s\", &%s},\n");
  lit_431 = YPsb((P)"  {\"%s\", NULL},\n");
  lit_432 = YPsb((P)"  {NULL, NULL}\n};\n");
  lit_433 = YPsb((P)"\nstatic EXPORT_INFO export_infos[] = {\n");
  lit_434 = YPPsym((P)"x-1606");
  lit_435 = YPPsym((P)"x-1605");
  lit_436 = YPsb((P)"  {\"%s\", \"%s\"},\n");
  lit_437 = YPsb((P)"  {NULL, NULL}\n};\n");
  lit_438 = YPsb((P)"\nextern MODULE_INFO %s;\n");
  lit_439 = YPsb((P)"MODULE_INFO %s = {\n");
  lit_440 = YPsb((P)"  \"%s\",\n");
  lit_441 = YPsb((P)"  NULL,\n");
  lit_442 = YPsb((P)"  use_infos,\n");
  lit_443 = YPsb((P)"  import_infos,\n");
  lit_444 = YPsb((P)"  binding_infos,\n");
  lit_445 = YPsb((P)"  export_infos,\n");
  lit_446 = YPsb((P)"};\n");
  T262 = YPsig(YPPlist(1,LITREF(lit_422)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1604_204 = YPmet(FUNCODEREF(fun_x_1604_204),LITREF(lit_421),T262,ENVNUL,PNUL,YPfalse);
  T261 = YPsig(YPPlist(2,LITREF(lit_426),LITREF(lit_74)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_205 = YPmet(FUNCODEREF(fun_205),YPfalse,T261,ENVNUL,PNUL,YPfalse);
  T260 = YPsig(YPPlist(1,LITREF(lit_74)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_206 = YPmet(FUNCODEREF(fun_206),YPfalse,T260,ENVNUL,PNUL,YPfalse);
  T259 = YPsig(YPPlist(1,LITREF(lit_435)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1606_207 = YPmet(FUNCODEREF(fun_x_1606_207),LITREF(lit_434),T259,ENVNUL,PNUL,YPfalse);
  T258 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_17)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YcompilerSg2cYgenerate_module_info = YPmet(FUNCODEREF(YcompilerSg2cYgenerate_module_info),LITREF(lit_418),T258,ENVNUL,PNUL,YPfalse);
  T263 = YcompilerSg2cYgenerate_module_info;
  VARSET(YcompilerSg2cYgenerate_module_info,T263);
  lit_447 = YPPsym((P)"module-init-name");
  lit_448 = YPsb((P)"load_module_");
  T264 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_name_209 = YPmet(FUNCODEREF(fun_module_init_name_209),LITREF(lit_447),T264,ENVNUL,PNUL,YPfalse);
  T267 = BOUNDP(YcompilerSg2cYmodule_init_name);
  if (T267 != YPfalse) {
    T266 = VARREF(YcompilerSg2cYmodule_init_name);
  } else {
    T266 = YPfalse;
  }
  T268 = fun_module_init_name_209;
  T265 = CALL2(1,VARREF(YPdefine_method),T266,T268);
  VARSET(YcompilerSg2cYmodule_init_name,T265);
  lit_449 = YPPsym((P)"module-init-decl");
  lit_450 = YPsb((P)"void ");
  lit_451 = YPsb((P)" (void)");
  T269 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_decl_210 = YPmet(FUNCODEREF(fun_module_init_decl_210),LITREF(lit_449),T269,ENVNUL,PNUL,YPfalse);
  T272 = BOUNDP(YcompilerSg2cYmodule_init_decl);
  if (T272 != YPfalse) {
    T271 = VARREF(YcompilerSg2cYmodule_init_decl);
  } else {
    T271 = YPfalse;
  }
  T273 = fun_module_init_decl_210;
  T270 = CALL2(1,VARREF(YPdefine_method),T271,T273);
  VARSET(YcompilerSg2cYmodule_init_decl,T270);
  lit_452 = YPPsym((P)"generate-module-init");
  lit_453 = YPPsym((P)"form");
  lit_454 = YPsb((P)"dl");
  lit_455 = YPsb((P)"\n/* MODULES USED: */\n\n");
  lit_456 = YPPsym((P)"x-1608");
  lit_457 = YPPsym((P)"x-1607");
  lit_458 = YPsb((P)"extern %s;\n");
  lit_459 = YPsb((P)"\n/* EXPRESSION: */\n\n");
  lit_460 = YPsb((P)"extern %s;\n\n");
  lit_461 = YPsb((P)"%s {\n");
  lit_462 = YPsb((P)"  static int need_init = 1;\n");
  lit_463 = YPsb((P)"  if (!need_init) return;\n\n");
  lit_464 = YPsb((P)"  need_init = 0;\n");
  lit_465 = YPPsym((P)"x-1610");
  lit_466 = YPPsym((P)"x-1609");
  lit_467 = YPsb((P)"  %s();\n");
  lit_468 = YPsb((P)"\n");
  lit_469 = YPsb((P)"\n");
  lit_470 = YPsb((P)"}\n");
  T276 = YPsig(YPPlist(1,LITREF(lit_457)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1608_211 = YPmet(FUNCODEREF(fun_x_1608_211),LITREF(lit_456),T276,ENVNUL,PNUL,YPfalse);
  T275 = YPsig(YPPlist(1,LITREF(lit_466)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1610_212 = YPmet(FUNCODEREF(fun_x_1610_212),LITREF(lit_465),T275,ENVNUL,PNUL,YPfalse);
  T274 = YPsig(YPPlist(3,LITREF(lit_48),LITREF(lit_17),LITREF(lit_453)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_module_init_213 = YPmet(FUNCODEREF(fun_generate_module_init_213),LITREF(lit_452),T274,ENVNUL,PNUL,YPfalse);
  T279 = BOUNDP(YcompilerSg2cYgenerate_module_init);
  if (T279 != YPfalse) {
    T278 = VARREF(YcompilerSg2cYgenerate_module_init);
  } else {
    T278 = YPfalse;
  }
  T280 = fun_generate_module_init_213;
  T277 = CALL2(1,VARREF(YPdefine_method),T278,T280);
  VARSET(YcompilerSg2cYgenerate_module_init,T277);
  lit_471 = YPPsym((P)"generate-main");
  lit_472 = YPsb((P)"\n/* APPLICATION: */\n\n");
  lit_473 = YPsb((P)"extern MODULE_INFO %s;\n");
  lit_474 = YPsb((P)"extern %s;\n\n");
  lit_475 = YPsb((P)"MODULE_INFO *goo_toplevel_module_info = &%s;\n\n");
  lit_476 = YPsb((P)"int main(int argc, char* argv[]) {\n");
  lit_477 = YPsb((P)"  %s(argc, argv);\n");
  lit_478 = YPsb((P)"%init-world");
  lit_479 = YPsb((P)"  %s();\n");
  lit_480 = YPsb((P)"  return 0;\n");
  lit_481 = YPsb((P)"}\n");
  T281 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_17)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_main_214 = YPmet(FUNCODEREF(fun_generate_main_214),LITREF(lit_471),T281,ENVNUL,PNUL,YPfalse);
  T284 = BOUNDP(YcompilerSg2cYgenerate_main);
  if (T284 != YPfalse) {
    T283 = VARREF(YcompilerSg2cYgenerate_main);
  } else {
    T283 = YPfalse;
  }
  T285 = fun_generate_main_214;
  T282 = CALL2(1,VARREF(YPdefine_method),T283,T285);
  VARSET(YcompilerSg2cYgenerate_main,T282);
  T286 = YPfalse;
  return T286;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_runtimeSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_runtimeSruntime;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_compilerSast;
extern MODULE_INFO module_info_compilerStop;
extern MODULE_INFO module_info_compilerSast_linearize;
extern MODULE_INFO module_info_gooScollectionsSstrings;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScollections;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScollectionsStable;
extern MODULE_INFO module_info_gooScollectionsScollection;
extern MODULE_INFO module_info_gooScollectionsSsequence;
extern MODULE_INFO module_info_gooScollectionsSlist;
extern MODULE_INFO module_info_gooScollectionsSrange;
extern MODULE_INFO module_info_gooScollectionsSzip;
extern MODULE_INFO module_info_gooScollectionsSbuffer;
extern MODULE_INFO module_info_gooScollectionsSstring;
extern MODULE_INFO module_info_compilerSsyntax;
extern MODULE_INFO module_info_gooSmagnitude;
extern MODULE_INFO module_info_gooScollectionsSassoc;
extern MODULE_INFO module_info_gooScollectionsSstep;
extern MODULE_INFO module_info_gooScollectionsSmap;
extern MODULE_INFO module_info_gooScollectionsScycle;

static USE_INFO use_infos[] = {
  {&module_info_runtimeSboot},
  {&module_info_gooSmacros},
  {&module_info_runtimeSruntime},
  {&module_info_gooSioSwrite},
  {&module_info_compilerSast},
  {&module_info_compilerStop},
  {&module_info_compilerSast_linearize},
  {&module_info_gooScollectionsSstrings},
  {&module_info_gooSsystem},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScollections},
  {&module_info_gooSioSport},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"<program>", &module_info_compilerSast, "<program>"},
  {"loc", &module_info_runtimeSboot, "loc"},
  {"application-known?", &module_info_compilerSast, "application-known?"},
  {"<arguments>", &module_info_compilerSast, "<arguments>"},
  {"top", &module_info_compilerStop, "top"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"<predefined-application>", &module_info_compilerSast, "<predefined-application>"},
  {"may-isa?", &module_info_runtimeSboot, "may-isa?"},
  {"%open-out-file", &module_info_runtimeSboot, "%open-out-file"},
  {"global-box-value", &module_info_compilerSast, "global-box-value"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"unwind-protect-protected-thunk", &module_info_compilerSast, "unwind-protect-protected-thunk"},
  {"tab-growth-threshold", &module_info_gooScollectionsStable, "tab-growth-threshold"},
  {"fix-let-types-setter", &module_info_compilerSast, "fix-let-types-setter"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"floor", &module_info_gooSmath, "floor"},
  {"report-undefined-global-bindings", &module_info_compilerSast, "report-undefined-global-bindings"},
  {"tab-growth-factor", &module_info_gooScollectionsStable, "tab-growth-factor"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"$min-int", &module_info_runtimeSboot, "$min-int"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
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
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
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
  {"ast-contains-fun?", &module_info_compilerSast_linearize, "ast-contains-fun?"},
  {"<ast-signature>", &module_info_compilerSast, "<ast-signature>"},
  {"fix-let-types", &module_info_compilerSast, "fix-let-types"},
  {"form-quotations", &module_info_compilerSast_linearize, "form-quotations"},
  {"compile-time-program", &module_info_compilerSast, "compile-time-program"},
  {"esctst", &module_info_compilerStop, "esctst"},
  {"<list>", &module_info_gooScollectionsSlist, "<list>"},
  {"close", &module_info_gooSioSport, "close"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"condition-arguments", &module_info_runtimeSruntime, "condition-arguments"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"signature-nary?-setter", &module_info_compilerSast, "signature-nary?-setter"},
  {"parse-in", &module_info_compilerStop, "parse-in"},
  {"<serious-condition>", &module_info_runtimeSruntime, "<serious-condition>"},
  {"binding-mutable?", &module_info_compilerSast, "binding-mutable?"},
  {"%snul", &module_info_runtimeSboot, "%snul"},
  {"binding-type", &module_info_compilerSast, "binding-type"},
  {"unchecked-runtime-environment", &module_info_compilerSast, "unchecked-runtime-environment"},
  {"cat2", &module_info_gooScollectionsSsequence, "cat2"},
  {"from", &module_info_gooScollectionsSrange, "from"},
  {"tab-growth-threshold-setter", &module_info_gooScollectionsStable, "tab-growth-threshold-setter"},
  {"%velt-setter", &module_info_runtimeSboot, "%velt-setter"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"tab-growth-factor-setter", &module_info_gooScollectionsStable, "tab-growth-factor-setter"},
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
  {"<closure-creation>", &module_info_compilerSast_linearize, "<closure-creation>"},
  {"fold", &module_info_gooScollectionsScollection, "fold"},
  {"tab-gc-state", &module_info_gooScollectionsStable, "tab-gc-state"},
  {"fix-let-body-setter", &module_info_compilerSast, "fix-let-body-setter"},
  {"assignment-form-setter", &module_info_compilerSast, "assignment-form-setter"},
  {"objectify-quotation", &module_info_compilerSast, "objectify-quotation"},
  {"@isa?", &module_info_runtimeSboot, "@isa?"},
  {"fun-mets", &module_info_runtimeSboot, "fun-mets"},
  {"application-arguments", &module_info_compilerSast, "application-arguments"},
  {"frame-var", &module_info_compilerStop, "frame-var"},
  {"%gen-code", &module_info_runtimeSboot, "%gen-code"},
  {"install-initial-bindings", &module_info_compilerSast, "install-initial-bindings"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"%pair", &module_info_runtimeSboot, "%pair"},
  {"fix-let-bindings-setter", &module_info_compilerSast, "fix-let-bindings-setter"},
  {"gen-src-setter", &module_info_runtimeSboot, "gen-src-setter"},
  {"==", &module_info_gooSmacros, "=="},
  {"<simple-error>", &module_info_runtimeSruntime, "<simple-error>"},
  {"do", &module_info_gooSmacros, "do"},
  {"<free-environment>", &module_info_compilerSast, "<free-environment>"},
  {"module-exports", &module_info_compilerSast, "module-exports"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"id-hash", &module_info_gooScollectionsStable, "id-hash"},
  {"add-prop", &module_info_runtimeSboot, "add-prop"},
  {"function-index-setter", &module_info_compilerSast, "function-index-setter"},
  {"<locals>", &module_info_compilerSast, "<locals>"},
  {"unzip", &module_info_gooScollectionsSzip, "unzip"},
  {"%i^", &module_info_runtimeSboot, "%i^"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"<top-level-form>", &module_info_compilerSast_linearize, "<top-level-form>"},
  {"read", &module_info_runtimeSruntime, "read"},
  {"binding-value-setter", &module_info_compilerSast, "binding-value-setter"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"do-keyed", &module_info_gooScollectionsScollection, "do-keyed"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"%c<", &module_info_runtimeSboot, "%c<"},
  {"t=", &module_info_gooStypes, "t="},
  {"put", &module_info_gooSioSport, "put"},
  {"-", &module_info_gooSmath, "-"},
  {"pick", &module_info_gooScollectionsSsequence, "pick"},
  {"%su", &module_info_runtimeSboot, "%su"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"<prop>", &module_info_runtimeSboot, "<prop>"},
  {"<constant>", &module_info_compilerSast, "<constant>"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"%binding-name", &module_info_runtimeSboot, "%binding-name"},
  {"function-index", &module_info_compilerSast, "function-index"},
  {"%file-type", &module_info_runtimeSboot, "%file-type"},
  {"push-last!", &module_info_gooScollectionsSbuffer, "push-last!"},
  {"<monitor>", &module_info_compilerSast, "<monitor>"},
  {"elts", &module_info_gooScollectionsScollection, "elts"},
  {"%current-out-port", &module_info_runtimeSboot, "%current-out-port"},
  {"/", &module_info_gooSmath, "/"},
  {"function-body-setter", &module_info_compilerSast, "function-body-setter"},
  {"<raw-constant>", &module_info_compilerSast, "<raw-constant>"},
  {"<gen>", &module_info_runtimeSboot, "<gen>"},
  {"function-signature-setter", &module_info_compilerSast, "function-signature-setter"},
  {"%f=", &module_info_runtimeSboot, "%f="},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"assignment-reference", &module_info_compilerSast, "assignment-reference"},
  {"$e", &module_info_gooSmath, "$e"},
  {"gen-src", &module_info_runtimeSboot, "gen-src"},
  {"%iv", &module_info_runtimeSboot, "%iv"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"program-form", &module_info_compilerSast_linearize, "program-form"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"object-props", &module_info_runtimeSboot, "object-props"},
  {"isa?", &module_info_runtimeSboot, "isa?"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"<ast-generic>", &module_info_compilerSast, "<ast-generic>"},
  {"constant-index", &module_info_compilerSast, "constant-index"},
  {"%symbols", &module_info_runtimeSboot, "%symbols"},
  {"find-environment-module", &module_info_compilerSast, "find-environment-module"},
  {"pop", &module_info_gooScollectionsSlist, "pop"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"case", &module_info_gooSmacros, "case"},
  {"tab-hash", &module_info_gooScollectionsStable, "tab-hash"},
  {"macro-expand", &module_info_runtimeSboot, "macro-expand"},
  {"function-body", &module_info_compilerSast, "function-body"},
  {"reference-called-function?-setter", &module_info_compilerSast, "reference-called-function?-setter"},
  {"mem?", &module_info_gooScollectionsScollection, "mem?"},
  {"%fun-reg", &module_info_runtimeSboot, "%fun-reg"},
  {"describe-handler", &module_info_runtimeSruntime, "describe-handler"},
  {"dv", &module_info_runtimeSboot, "dv"},
  {"<runtime-assignment>", &module_info_compilerSast, "<runtime-assignment>"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"%slen", &module_info_runtimeSboot, "%slen"},
  {"rcurry", &module_info_runtimeSruntime, "rcurry"},
  {"<regular-application>", &module_info_compilerSast, "<regular-application>"},
  {"to-str", &module_info_gooSmath, "to-str"},
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
  {"<programs>", &module_info_compilerSast, "<programs>"},
  {"all?", &module_info_gooScollectionsScollection, "all?"},
  {"fun-arity", &module_info_runtimeSboot, "fun-arity"},
  {"fun", &module_info_runtimeSboot, "fun"},
  {"range-error", &module_info_gooScollectionsScollection, "range-error"},
  {"eval", &module_info_compilerSsyntax, "eval"},
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
  {"tan", &module_info_gooSmath, "tan"},
  {"%str", &module_info_runtimeSboot, "%str"},
  {"assq", &module_info_gooScollectionsSlist, "assq"},
  {"fix-let-bindings", &module_info_compilerSast, "fix-let-bindings"},
  {"elt-or", &module_info_gooScollectionsScollection, "elt-or"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"elt-setter", &module_info_gooScollectionsScollection, "elt-setter"},
  {"%isa", &module_info_runtimeSboot, "%isa"},
  {"del", &module_info_gooScollectionsScollection, "del"},
  {"binding-dotted?-setter", &module_info_compilerSast, "binding-dotted?-setter"},
  {"reference-frame-number", &module_info_compilerSast, "reference-frame-number"},
  {"<enum>", &module_info_gooScollectionsScollection, "<enum>"},
  {"recurring-write", &module_info_gooSioSwrite, "recurring-write"},
  {"remove-modules-by-name!", &module_info_compilerSast, "remove-modules-by-name!"},
  {"find-binding", &module_info_compilerSast, "find-binding"},
  {"buf", &module_info_gooScollectionsSbuffer, "buf"},
  {"add", &module_info_gooScollectionsScollection, "add"},
  {"tup", &module_info_runtimeSboot, "tup"},
  {"any2?", &module_info_gooScollectionsScollection, "any2?"},
  {"*macros-ok?*", &module_info_runtimeSboot, "*macros-ok?*"},
  {"%invoke-debugger", &module_info_runtimeSboot, "%invoke-debugger"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"%puts", &module_info_runtimeSboot, "%puts"},
  {"identity", &module_info_runtimeSruntime, "identity"},
  {"handler-info-message", &module_info_runtimeSboot, "handler-info-message"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {">>>", &module_info_gooSmath, ">>>"},
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
  {"as-log", &module_info_gooSmath, "as-log"},
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
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"<union>", &module_info_runtimeSboot, "<union>"},
  {"analyze-calls", &module_info_compilerSast_linearize, "analyze-calls"},
  {"tab-shrink-threshold", &module_info_gooScollectionsStable, "tab-shrink-threshold"},
  {"%i<<", &module_info_runtimeSboot, "%i<<"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"<tup>", &module_info_runtimeSboot, "<tup>"},
  {"now-setter", &module_info_gooScollectionsScollection, "now-setter"},
  {"%close-out-port", &module_info_runtimeSboot, "%close-out-port"},
  {"collect-temporaries!", &module_info_compilerSast_linearize, "collect-temporaries!"},
  {"objectify-with-subtransaction", &module_info_compilerSast, "objectify-with-subtransaction"},
  {"function-registers-setter", &module_info_compilerSast, "function-registers-setter"},
  {"ins!", &module_info_gooScollectionsSsequence, "ins!"},
  {"<box-read>", &module_info_compilerSast_linearize, "<box-read>"},
  {"closure-creation-index", &module_info_compilerSast_linearize, "closure-creation-index"},
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
  {"program-quotations", &module_info_compilerSast_linearize, "program-quotations"},
  {"*print-base*", &module_info_gooScollectionsSstring, "*print-base*"},
  {"ct-also", &module_info_runtimeSboot, "ct-also"},
  {"%f/", &module_info_runtimeSboot, "%f/"},
  {"analyze-dynamic-extent", &module_info_compilerSast_linearize, "analyze-dynamic-extent"},
  {"string-repeat", &module_info_gooScollectionsSstrings, "string-repeat"},
  {"head", &module_info_runtimeSboot, "head"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"%fatan", &module_info_runtimeSboot, "%fatan"},
  {"function-bindings", &module_info_compilerSast, "function-bindings"},
  {"bind-exit-main-fun", &module_info_compilerSast, "bind-exit-main-fun"},
  {"<application>", &module_info_compilerSast, "<application>"},
  {"keyboard-interrupt", &module_info_runtimeSboot, "keyboard-interrupt"},
  {"%eq?", &module_info_runtimeSboot, "%eq?"},
  {"when", &module_info_gooSmacros, "when"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"<num>", &module_info_runtimeSboot, "<num>"},
  {"%app-args", &module_info_runtimeSboot, "%app-args"},
  {"<vec>", &module_info_runtimeSboot, "<vec>"},
  {"<set>", &module_info_gooScollectionsStable, "<set>"},
  {"max", &module_info_gooSmagnitude, "max"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"prop-getter", &module_info_runtimeSboot, "prop-getter"},
  {"<local-binding>", &module_info_compilerSast, "<local-binding>"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"binding-index", &module_info_compilerSast, "binding-index"},
  {"in", &module_info_gooSioSport, "in"},
  {"%ftanh", &module_info_runtimeSboot, "%ftanh"},
  {"fab-handler", &module_info_runtimeSruntime, "fab-handler"},
  {"*boot-macro-names*", &module_info_runtimeSboot, "*boot-macro-names*"},
  {"<local-assignment>", &module_info_compilerSast, "<local-assignment>"},
  {"%sp-reg", &module_info_runtimeSboot, "%sp-reg"},
  {"monitor-info", &module_info_compilerSast, "monitor-info"},
  {"into", &module_info_gooScollectionsScollection, "into"},
  {"env-object-name", &module_info_compilerSast, "env-object-name"},
  {"empty", &module_info_gooScollectionsScollection, "empty"},
  {"<alternative>", &module_info_compilerSast, "<alternative>"},
  {"<<", &module_info_gooSmath, "<<"},
  {"binding-kind", &module_info_compilerSast, "binding-kind"},
  {"app-args", &module_info_runtimeSruntime, "app-args"},
  {"t?", &module_info_gooStypes, "t?"},
  {"%selt-setter", &module_info_runtimeSboot, "%selt-setter"},
  {"reference-self?", &module_info_compilerSast_linearize, "reference-self?"},
  {"form-definitions", &module_info_compilerSast_linearize, "form-definitions"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"def-list", &module_info_compilerSast, "def-list"},
  {"now-key", &module_info_gooScollectionsScollection, "now-key"},
  {"class-direct-props", &module_info_runtimeSboot, "class-direct-props"},
  {"<zip>", &module_info_gooScollectionsSzip, "<zip>"},
  {"%untag", &module_info_runtimeSboot, "%untag"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"save-image", &module_info_compilerStop, "save-image"},
  {"display", &module_info_gooSioSwrite, "display"},
  {"mif", &module_info_runtimeSboot, "mif"},
  {"<ast-macro-definition>", &module_info_compilerSast, "<ast-macro-definition>"},
  {"<sequential>", &module_info_compilerSast, "<sequential>"},
  {"export", &module_info_runtimeSboot, "export"},
  {"environment-bindings", &module_info_compilerSast, "environment-bindings"},
  {"acos", &module_info_gooSmath, "acos"},
  {"free-environment", &module_info_compilerSast, "free-environment"},
  {"<met>", &module_info_runtimeSboot, "<met>"},
  {"<condition>", &module_info_runtimeSruntime, "<condition>"},
  {"<module>", &module_info_compilerSast, "<module>"},
  {"zap", &module_info_gooScollectionsScollection, "zap"},
  {"%fsinh", &module_info_runtimeSboot, "%fsinh"},
  {"<renamed-local-binding>", &module_info_compilerSast_linearize, "<renamed-local-binding>"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"len-setter", &module_info_gooScollectionsSbuffer, "len-setter"},
  {"%build-runtime-modules", &module_info_runtimeSboot, "%build-runtime-modules"},
  {"t+", &module_info_gooStypes, "t+"},
  {"<free-reference>", &module_info_compilerSast_linearize, "<free-reference>"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"register-allocate!", &module_info_compilerSast_linearize, "register-allocate!"},
  {"min", &module_info_gooSmagnitude, "min"},
  {"prop-init", &module_info_runtimeSboot, "prop-init"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"process-id", &module_info_gooSsystem, "process-id"},
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
  {"lift!", &module_info_compilerSast_linearize, "lift!"},
  {"%i!", &module_info_runtimeSboot, "%i!"},
  {"function-free-setter", &module_info_compilerSast, "function-free-setter"},
  {"read-file", &module_info_compilerStop, "read-file"},
  {"program-register-setter", &module_info_compilerSast, "program-register-setter"},
  {"while", &module_info_gooSmacros, "while"},
  {"class-descendents", &module_info_runtimeSboot, "class-descendents"},
  {"<restart>", &module_info_runtimeSruntime, "<restart>"},
  {"t*", &module_info_gooStypes, "t*"},
  {"%put", &module_info_runtimeSboot, "%put"},
  {"tab-shrink-threshold-setter", &module_info_gooScollectionsStable, "tab-shrink-threshold-setter"},
  {"<box-creation>", &module_info_compilerSast_linearize, "<box-creation>"},
  {"%i-", &module_info_runtimeSboot, "%i-"},
  {"even?", &module_info_gooSmath, "even?"},
  {"gen-refs-setter", &module_info_runtimeSboot, "gen-refs-setter"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"push", &module_info_gooScollectionsSlist, "push"},
  {"function-registers", &module_info_compilerSast, "function-registers"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"ascii-limit", &module_info_gooScollectionsSstring, "ascii-limit"},
  {"fin", &module_info_runtimeSboot, "fin"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"dc", &module_info_runtimeSboot, "dc"},
  {"%bb", &module_info_runtimeSboot, "%bb"},
  {"%i<", &module_info_runtimeSboot, "%i<"},
  {"reference-offset", &module_info_compilerSast_linearize, "reference-offset"},
  {"%flog", &module_info_runtimeSboot, "%flog"},
  {"binding-type-setter", &module_info_compilerSast, "binding-type-setter"},
  {"prop-value-setter", &module_info_runtimeSboot, "prop-value-setter"},
  {"1-", &module_info_gooSmath, "1-"},
  {"fin?", &module_info_gooScollectionsScollection, "fin?"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"<chr>", &module_info_runtimeSboot, "<chr>"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"<flat>", &module_info_runtimeSboot, "<flat>"},
  {"quasiquote", &module_info_runtimeSboot, "quasiquote"},
  {"%app-filename", &module_info_runtimeSboot, "%app-filename"},
  {"cos", &module_info_gooSmath, "cos"},
  {"handler-info-arguments", &module_info_runtimeSboot, "handler-info-arguments"},
  {"%current-in-port", &module_info_runtimeSboot, "%current-in-port"},
  {"type-error", &module_info_runtimeSboot, "type-error"},
  {"*", &module_info_gooSmath, "*"},
  {"%fb", &module_info_runtimeSboot, "%fb"},
  {"module-name", &module_info_compilerSast, "module-name"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"subtype?", &module_info_runtimeSboot, "subtype?"},
  {"gen-refs", &module_info_runtimeSboot, "gen-refs"},
  {"init-environment-for-eval", &module_info_compilerSast, "init-environment-for-eval"},
  {"not", &module_info_runtimeSboot, "not"},
  {"sin", &module_info_gooSmath, "sin"},
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
  {"update-walk!", &module_info_compilerSast_linearize, "update-walk!"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"fill", &module_info_gooScollectionsScollection, "fill"},
  {"assqn", &module_info_gooScollectionsSlist, "assqn"},
  {"fab-sym", &module_info_runtimeSboot, "fab-sym"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"~", &module_info_gooSmath, "~"},
  {"lst", &module_info_runtimeSboot, "lst"},
  {"%gen-refs", &module_info_runtimeSboot, "%gen-refs"},
  {"%%sym", &module_info_runtimeSboot, "%%sym"},
  {">=", &module_info_gooSmagnitude, ">="},
  {"build-condition-interactively", &module_info_runtimeSruntime, "build-condition-interactively"},
  {"mod", &module_info_gooSmath, "mod"},
  {"sig-specs", &module_info_runtimeSboot, "sig-specs"},
  {"@lst", &module_info_runtimeSboot, "@lst"},
  {"<bound?>", &module_info_compilerSast, "<bound?>"},
  {"collect-registers!", &module_info_compilerSast_linearize, "collect-registers!"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"binding-native-to?", &module_info_compilerSast, "binding-native-to?"},
  {"~==", &module_info_gooSmath, "~=="},
  {"map", &module_info_gooSmacros, "map"},
  {"assocs-test-setter", &module_info_gooScollectionsSassoc, "assocs-test-setter"},
  {"ascii-whitespaces", &module_info_gooScollectionsSstring, "ascii-whitespaces"},
  {"sequentialize", &module_info_compilerSast, "sequentialize"},
  {"assignment-form", &module_info_compilerSast, "assignment-form"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"<immediate-constant>", &module_info_compilerSast, "<immediate-constant>"},
  {"%loc-val-setter", &module_info_runtimeSboot, "%loc-val-setter"},
  {"nul", &module_info_runtimeSboot, "nul"},
  {"error", &module_info_runtimeSboot, "error"},
  {"<singleton>", &module_info_runtimeSboot, "<singleton>"},
  {">>", &module_info_gooSmath, ">>"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"function-value", &module_info_compilerSast, "function-value"},
  {"ast-define-binding", &module_info_compilerSast, "ast-define-binding"},
  {"frame", &module_info_compilerStop, "frame"},
  {"binding-inferred-type-setter", &module_info_compilerSast, "binding-inferred-type-setter"},
  {"set-module-environments", &module_info_compilerSast, "set-module-environments"},
  {"extract-things!", &module_info_compilerSast_linearize, "extract-things!"},
  {"range", &module_info_gooScollectionsSrange, "range"},
  {"%open-in-file", &module_info_runtimeSboot, "%open-in-file"},
  {"sig", &module_info_runtimeSruntime, "sig"},
  {"compose", &module_info_runtimeSruntime, "compose"},
  {"round/", &module_info_gooSmath, "round/"},
  {"<fun>", &module_info_runtimeSboot, "<fun>"},
  {"ins", &module_info_gooScollectionsSsequence, "ins"},
  {"1+", &module_info_gooSmath, "1+"},
  {"%flo-bits", &module_info_runtimeSboot, "%flo-bits"},
  {"zip", &module_info_gooScollectionsSzip, "zip"},
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
  {"flatten-seqs", &module_info_compilerSast_linearize, "flatten-seqs"},
  {"g2c-eval", &module_info_compilerStop, "g2c-eval"},
  {"first-then", &module_info_gooScollectionsSstep, "first-then"},
  {"%cu", &module_info_runtimeSboot, "%cu"},
  {"dg", &module_info_runtimeSboot, "dg"},
  {"auto-eval", &module_info_compilerStop, "auto-eval"},
  {"do-stack-frames", &module_info_compilerStop, "do-stack-frames"},
  {"file-opening-error", &module_info_runtimeSboot, "file-opening-error"},
  {"do-key-vals", &module_info_gooScollectionsSsequence, "do-key-vals"},
  {"signature-arity-setter", &module_info_compilerSast, "signature-arity-setter"},
  {"%%macro", &module_info_runtimeSboot, "%%macro"},
  {"bound?-reference", &module_info_compilerSast, "bound?-reference"},
  {"sig-val", &module_info_runtimeSboot, "sig-val"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"closurize-main!", &module_info_compilerSast_linearize, "closurize-main!"},
  {"<lst>", &module_info_runtimeSboot, "<lst>"},
  {"fab-class", &module_info_runtimeSboot, "fab-class"},
  {"<log>", &module_info_runtimeSboot, "<log>"},
  {"^", &module_info_gooSmath, "^"},
  {"backtrace", &module_info_compilerStop, "backtrace"},
  {"@oelt", &module_info_runtimeSboot, "@oelt"},
  {"<simple-handler-info>", &module_info_runtimeSboot, "<simple-handler-info>"},
  {"signature-names", &module_info_compilerSast, "signature-names"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"locals-body-setter", &module_info_compilerSast, "locals-body-setter"},
  {"fun-specs", &module_info_runtimeSboot, "fun-specs"},
  {"type-object", &module_info_runtimeSboot, "type-object"},
  {"atan", &module_info_gooSmath, "atan"},
  {"try", &module_info_runtimeSboot, "try"},
  {"fun-name-setter", &module_info_runtimeSboot, "fun-name-setter"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"binding-index-setter", &module_info_compilerSast, "binding-index-setter"},
  {"<passive-program>", &module_info_compilerSast, "<passive-program>"},
  {"rev", &module_info_gooScollectionsSsequence, "rev"},
  {"def-programs", &module_info_compilerSast, "def-programs"},
  {"constant-value", &module_info_compilerSast, "constant-value"},
  {"%ftan", &module_info_runtimeSboot, "%ftan"},
  {"1st", &module_info_gooScollectionsSsequence, "1st"},
  {"quote", &module_info_runtimeSboot, "quote"},
  {"enum", &module_info_gooScollectionsScollection, "enum"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%file-exists?", &module_info_runtimeSboot, "%file-exists?"},
  {"binding-dynamic-extent?", &module_info_compilerSast, "binding-dynamic-extent?"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"locals-body", &module_info_compilerSast, "locals-body"},
  {"<=", &module_info_gooSmagnitude, "<="},
  {"binding-dynamic-extent?-setter", &module_info_compilerSast, "binding-dynamic-extent?-setter"},
  {"unknown-function-error", &module_info_runtimeSboot, "unknown-function-error"},
  {"tab-test", &module_info_gooScollectionsStable, "tab-test"},
  {"%velt", &module_info_runtimeSboot, "%velt"},
  {"elt-default", &module_info_gooScollectionsScollection, "elt-default"},
  {"function-data-refs-setter", &module_info_compilerSast, "function-data-refs-setter"},
  {"%vnul", &module_info_runtimeSboot, "%vnul"},
  {"sym-name", &module_info_runtimeSboot, "sym-name"},
  {"<handler-info>", &module_info_runtimeSruntime, "<handler-info>"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"%i>>", &module_info_runtimeSboot, "%i>>"},
  {"find", &module_info_gooScollectionsScollection, "find"},
  {"list-handlers", &module_info_runtimeSruntime, "list-handlers"},
  {"application-function", &module_info_compilerSast, "application-function"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"handler-matches?", &module_info_runtimeSruntime, "handler-matches?"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"%i+", &module_info_runtimeSboot, "%i+"},
  {"%define-method", &module_info_runtimeSboot, "%define-method"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"fun-name", &module_info_runtimeSboot, "fun-name"},
  {"<module-binding>", &module_info_compilerSast, "<module-binding>"},
  {"dm", &module_info_runtimeSboot, "dm"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"str-to-num", &module_info_gooScollectionsSstring, "str-to-num"},
  {"alternative-consequent", &module_info_compilerSast, "alternative-consequent"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"ast-evaluate", &module_info_compilerSast, "ast-evaluate"},
  {"object-class", &module_info_runtimeSboot, "object-class"},
  {"prop-owner", &module_info_runtimeSboot, "prop-owner"},
  {"<global-reference>", &module_info_compilerSast, "<global-reference>"},
  {"range-by", &module_info_gooScollectionsSrange, "range-by"},
  {"%fcos", &module_info_runtimeSboot, "%fcos"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"%gen-code-setter", &module_info_runtimeSboot, "%gen-code-setter"},
  {"<runtime-reference>", &module_info_compilerSast, "<runtime-reference>"},
  {"gather-temporaries!", &module_info_compilerSast_linearize, "gather-temporaries!"},
  {"load", &module_info_compilerStop, "load"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"function-data-refs", &module_info_compilerSast, "function-data-refs"},
  {"<tab>", &module_info_gooScollectionsScollection, "<tab>"},
  {"binding-global-box", &module_info_compilerSast, "binding-global-box"},
  {"signature-specs", &module_info_compilerSast, "signature-specs"},
  {"insert-box!", &module_info_compilerSast_linearize, "insert-box!"},
  {"rem", &module_info_gooSmath, "rem"},
  {"prop-value", &module_info_runtimeSboot, "prop-value"},
  {"list", &module_info_gooScollectionsSlist, "list"},
  {"class-parents", &module_info_runtimeSboot, "class-parents"},
  {"$permanent-hash-state", &module_info_gooScollectionsStable, "$permanent-hash-state"},
  {"program-register", &module_info_compilerSast, "program-register"},
  {">", &module_info_gooSmagnitude, ">"},
  {"@olen", &module_info_runtimeSboot, "@olen"},
  {"$default-handler-info", &module_info_runtimeSruntime, "$default-handler-info"},
  {"<unwind-protect>", &module_info_compilerSast, "<unwind-protect>"},
  {"environment-uses-modules", &module_info_compilerSast, "environment-uses-modules"},
  {"vals-to-str", &module_info_gooScollectionsSsequence, "vals-to-str"},
  {"&", &module_info_gooSmath, "&"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"%fatan2", &module_info_runtimeSboot, "%fatan2"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"module-name-to-relpath", &module_info_compilerSast, "module-name-to-relpath"},
  {"fab-map", &module_info_gooScollectionsSmap, "fab-map"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"cycle", &module_info_gooScollectionsScycle, "cycle"},
  {"string-split", &module_info_gooScollectionsSstrings, "string-split"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"|", &module_info_gooSmath, "|"},
  {"df", &module_info_runtimeSboot, "df"},
  {"key-test", &module_info_gooScollectionsScollection, "key-test"},
  {"default-handler", &module_info_runtimeSruntime, "default-handler"},
  {"range-check?", &module_info_gooScollectionsSsequence, "range-check?"},
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
  {"tanh", &module_info_gooSmath, "tanh"},
  {"%i=", &module_info_runtimeSboot, "%i="},
  {"log", &module_info_gooSmath, "log"},
  {"*gensym-counter*", &module_info_runtimeSruntime, "*gensym-counter*"},
  {"function-self-recursive?", &module_info_compilerSast, "function-self-recursive?"},
  {"%loc-off-setter", &module_info_runtimeSboot, "%loc-off-setter"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"%raw", &module_info_runtimeSboot, "%raw"},
  {"rep", &module_info_runtimeSboot, "rep"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fix-let-arguments-setter", &module_info_compilerSast, "fix-let-arguments-setter"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"map-str", &module_info_gooScollectionsSstrings, "map-str"},
  {"*restarts-ok?*", &module_info_runtimeSboot, "*restarts-ok?*"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"loc-val-setter", &module_info_runtimeSruntime, "loc-val-setter"},
  {"objectify-signature", &module_info_compilerSast, "objectify-signature"},
  {"@len", &module_info_runtimeSboot, "@len"},
  {"<computed-program>", &module_info_compilerSast, "<computed-program>"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"class-props", &module_info_runtimeSboot, "class-props"},
  {"@+", &module_info_runtimeSboot, "@+"},
  {"alternative-condition", &module_info_compilerSast, "alternative-condition"},
  {"$max-int", &module_info_runtimeSboot, "$max-int"},
  {"do-module-loader-modules", &module_info_compilerSast, "do-module-loader-modules"},
  {"box-reference", &module_info_compilerSast_linearize, "box-reference"},
  {"<", &module_info_gooSmagnitude, "<"},
  {"%allocate-stack", &module_info_runtimeSboot, "%allocate-stack"},
  {"do3", &module_info_gooScollectionsScollection, "do3"},
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
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"%i>>>", &module_info_runtimeSboot, "%i>>>"},
  {"%facos", &module_info_runtimeSboot, "%facos"},
  {"del-dups", &module_info_gooScollectionsSsequence, "del-dups"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"<sig>", &module_info_runtimeSboot, "<sig>"},
  {"<buf>", &module_info_gooScollectionsSbuffer, "<buf>"},
  {"binding-inferred-type", &module_info_compilerSast, "binding-inferred-type"},
  {"as-lst", &module_info_compilerSast, "as-lst"},
  {"as-copy", &module_info_gooScollectionsScollection, "as-copy"},
  {"key-type", &module_info_gooScollectionsScollection, "key-type"},
  {"fun-names", &module_info_runtimeSboot, "fun-names"},
  {"%create-directory", &module_info_runtimeSboot, "%create-directory"},
  {"do-static-global-bindings", &module_info_compilerSast, "do-static-global-bindings"},
  {"find-setter", &module_info_runtimeSboot, "find-setter"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"if", &module_info_runtimeSboot, "if"},
  {"find-or", &module_info_gooScollectionsScollection, "find-or"},
  {"dl", &module_info_runtimeSboot, "dl"},
  {"%f+", &module_info_runtimeSboot, "%f+"},
  {"ct", &module_info_runtimeSboot, "ct"},
  {"bt", &module_info_compilerStop, "bt"},
  {"asin", &module_info_gooSmath, "asin"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"%ib", &module_info_runtimeSboot, "%ib"},
  {"use/export", &module_info_runtimeSboot, "use/export"},
  {"sub-setter", &module_info_gooScollectionsSsequence, "sub-setter"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"binding-name", &module_info_compilerSast, "binding-name"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"$goo-boot-module-name", &module_info_compilerSast, "$goo-boot-module-name"},
  {"fix-let-body", &module_info_compilerSast, "fix-let-body"},
  {"%selt", &module_info_runtimeSboot, "%selt"},
  {"<handler>", &module_info_runtimeSruntime, "<handler>"},
  {"fix-let-arguments", &module_info_compilerSast, "fix-let-arguments"},
  {"=", &module_info_gooSmath, "="},
  {"@all2?", &module_info_runtimeSboot, "@all2?"},
  {"condition-message", &module_info_runtimeSruntime, "condition-message"},
  {"binding-value", &module_info_compilerSast, "binding-value"},
  {"range-check", &module_info_gooScollectionsSsequence, "range-check"},
  {"<module-loader>", &module_info_compilerSast, "<module-loader>"},
  {"low-elt-setter", &module_info_gooScollectionsScollection, "low-elt-setter"},
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
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"<global-box>", &module_info_compilerSast, "<global-box>"},
  {"closure-creation-free", &module_info_compilerSast_linearize, "closure-creation-free"},
  {"<col>", &module_info_runtimeSboot, "<col>"},
  {"function-temporaries-setter", &module_info_compilerSast, "function-temporaries-setter"},
  {"sig-names", &module_info_runtimeSboot, "sig-names"},
  {"<class>", &module_info_runtimeSboot, "<class>"},
  {"function-signature", &module_info_compilerSast, "function-signature"},
  {"map2", &module_info_gooScollectionsScollection, "map2"},
  {"locals-functions", &module_info_compilerSast, "locals-functions"},
  {"global-box-value-setter", &module_info_compilerSast, "global-box-value-setter"},
  {"<cycle>", &module_info_gooScollectionsScycle, "<cycle>"},
  {"form-program", &module_info_compilerSast_linearize, "form-program"},
  {"%ft", &module_info_runtimeSboot, "%ft"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"fab-gen", &module_info_runtimeSboot, "fab-gen"},
  {"%c=", &module_info_runtimeSboot, "%c="},
  {"alternative-alternant", &module_info_compilerSast, "alternative-alternant"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%next-methods", &module_info_runtimeSboot, "%next-methods"},
  {"neg", &module_info_gooSmath, "neg"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"probe-module", &module_info_compilerSast, "probe-module"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"signature-specs-setter", &module_info_compilerSast, "signature-specs-setter"},
  {"module-target-environment", &module_info_compilerSast, "module-target-environment"},
  {"<box-write>", &module_info_compilerSast_linearize, "<box-write>"},
  {"binding-info", &module_info_compilerSast, "binding-info"},
  {"case-insensitive-string-hash", &module_info_gooScollectionsStable, "case-insensitive-string-hash"},
  {"<binding>", &module_info_compilerSast, "<binding>"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"%get", &module_info_runtimeSboot, "%get"},
  {"binding-global-box-setter", &module_info_compilerSast, "binding-global-box-setter"},
  {"<reference>", &module_info_compilerSast, "<reference>"},
  {"%eof-object", &module_info_runtimeSboot, "%eof-object"},
  {"signature-names-setter", &module_info_compilerSast, "signature-names-setter"},
  {"always", &module_info_runtimeSruntime, "always"},
  {"handler-function", &module_info_runtimeSruntime, "handler-function"},
  {"<global-assignment>", &module_info_compilerSast, "<global-assignment>"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"len/fill-setter", &module_info_gooScollectionsSbuffer, "len/fill-setter"},
  {"*register-passive?*", &module_info_compilerSast_linearize, "*register-passive?*"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"module-loader-module-type", &module_info_compilerSast, "module-loader-module-type"},
  {"<definition>", &module_info_compilerSast, "<definition>"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"monitor-handler", &module_info_compilerSast, "monitor-handler"},
  {"%lb", &module_info_runtimeSboot, "%lb"},
  {"del-vals", &module_info_gooScollectionsSsequence, "del-vals"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"string-join", &module_info_gooScollectionsSstrings, "string-join"},
  {"%i<<<", &module_info_runtimeSboot, "%i<<<"},
  {"application-known?-setter", &module_info_compilerSast, "application-known?-setter"},
  {"binding-info-setter", &module_info_compilerSast, "binding-info-setter"},
  {"get", &module_info_gooSioSport, "get"},
  {"tail-setter", &module_info_runtimeSboot, "tail-setter"},
  {"+", &module_info_gooSmath, "+"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"function-nary?", &module_info_compilerSast, "function-nary?"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
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
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"str", &module_info_gooScollectionsSstring, "str"},
  {"runtime-environment", &module_info_compilerSast, "runtime-environment"},
  {"program-type", &module_info_compilerSast, "program-type"},
  {"program-definitions", &module_info_compilerSast_linearize, "program-definitions"},
  {"%im", &module_info_runtimeSboot, "%im"},
  {"esc", &module_info_runtimeSboot, "esc"},
  {"function-debug-name-setter", &module_info_compilerSast, "function-debug-name-setter"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"%check-call-types", &module_info_runtimeSboot, "%check-call-types"},
  {"box-form", &module_info_compilerSast_linearize, "box-form"},
  {"<opts>", &module_info_runtimeSboot, "<opts>"},
  {"find-getter", &module_info_runtimeSboot, "find-getter"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"dup", &module_info_gooScollectionsScollection, "dup"},
  {"tail", &module_info_runtimeSboot, "tail"},
  {"elt-type", &module_info_gooScollectionsScollection, "elt-type"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"%file-mtime", &module_info_runtimeSboot, "%file-mtime"},
  {"%loc-off", &module_info_runtimeSboot, "%loc-off"},
  {"function-free", &module_info_compilerSast, "function-free"},
  {"wrong-number-arguments-error", &module_info_runtimeSboot, "wrong-number-arguments-error"},
  {"<fab-list>", &module_info_compilerSast, "<fab-list>"},
  {"below", &module_info_gooScollectionsSsequence, "below"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"<type>", &module_info_runtimeSboot, "<type>"},
  {"let", &module_info_runtimeSboot, "let"},
  {"ord-app-mets", &module_info_runtimeSboot, "ord-app-mets"},
  {"init-ast", &module_info_compilerSast, "init-ast"},
  {"assignment-binding", &module_info_compilerSast, "assignment-binding"},
  {"loc-val", &module_info_runtimeSruntime, "loc-val"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%force-out", &module_info_runtimeSboot, "%force-out"},
  {"<loc>", &module_info_runtimeSboot, "<loc>"},
  {"%ready?", &module_info_runtimeSboot, "%ready?"},
  {"%close-in-port", &module_info_runtimeSboot, "%close-in-port"},
  {"binding-module-name", &module_info_compilerSast, "binding-module-name"},
  {"application-tail?", &module_info_compilerSast, "application-tail?"},
  {"pop-last!", &module_info_gooScollectionsSbuffer, "pop-last!"},
  {"%it/", &module_info_runtimeSboot, "%it/"},
  {"binding-dotted?", &module_info_compilerSast, "binding-dotted?"},
  {"fab", &module_info_gooScollectionsScollection, "fab"},
  {"type-elts", &module_info_runtimeSboot, "type-elts"},
  {"module-binding", &module_info_compilerSast, "module-binding"},
  {"*report-prop-unbound-errors?*", &module_info_runtimeSboot, "*report-prop-unbound-errors?*"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"<ast-method>", &module_info_compilerSast, "<ast-method>"},
  {"assocs-test", &module_info_gooScollectionsSassoc, "assocs-test"},
  {"finds", &module_info_gooScollectionsSsequence, "finds"},
  {"reference-frame-offset", &module_info_compilerSast, "reference-frame-offset"},
  {"round", &module_info_gooSmath, "round"},
  {"reference-called-function?", &module_info_compilerSast, "reference-called-function?"},
  {"%os-val", &module_info_runtimeSboot, "%os-val"},
  {"<module-binding-reference>", &module_info_compilerSast, "<module-binding-reference>"},
  {"monitor-type", &module_info_compilerSast, "monitor-type"},
  {"logn", &module_info_gooSmath, "logn"},
  {"pow", &module_info_gooSmath, "pow"},
  {"<map>", &module_info_gooScollectionsSmap, "<map>"},
  {"reject", &module_info_gooScollectionsSsequence, "reject"},
  {"%fsqrt", &module_info_runtimeSboot, "%fsqrt"},
  {"<assignment>", &module_info_compilerSast, "<assignment>"},
  {"unconstrained-type?", &module_info_compilerSast_linearize, "unconstrained-type?"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"class-name", &module_info_runtimeSboot, "class-name"},
  {"unless", &module_info_gooSmacros, "unless"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"$number-call-templates", &YcompilerSg2cYDnumber_call_templates},
  {"module-loader-appname", &YcompilerSg2cYmodule_loader_appname},
  {"pp", &YcompilerSg2cYpp},
  {"generate-makefile", &YcompilerSg2cYgenerate_makefile},
  {"generate-function-forward", &YcompilerSg2cYgenerate_function_forward},
  {"false-name", &YcompilerSg2cYfalse_name},
  {"generate-shadow-args", &YcompilerSg2cYgenerate_shadow_args},
  {"generate-global-binding", &YcompilerSg2cYgenerate_global_binding},
  {"between-parentheses-comma-separated", NULL},
  {"gen-fab-list", &YcompilerSg2cYgen_fab_list},
  {"$module-marker", &YcompilerSg2cYDmodule_marker},
  {"---main-2---", NULL},
  {"declare-imported-module-infos", &YcompilerSg2cYdeclare_imported_module_infos},
  {"dispatcher?", &YcompilerSg2cYdispatcherQ},
  {"$local-marker", &YcompilerSg2cYDlocal_marker},
  {"funshell-to-c", &YcompilerSg2cYfunshell_to_c},
  {"generate-c-module", &YcompilerSg2cYgenerate_c_module},
  {"$mangles-data", &YcompilerSg2cYDmangles_data},
  {"module-src-file-setter", &YcompilerSg2cYmodule_src_file_setter},
  {"gen-result", &YcompilerSg2cYgen_result},
  {"mangle-integer", &YcompilerSg2cYmangle_integer},
  {"mangle-raw-name", &YcompilerSg2cYmangle_raw_name},
  {"*g2c-app*", &YcompilerSg2cYTg2c_appT},
  {"generate-functions", &YcompilerSg2cYgenerate_functions},
  {"$number-characters", &YcompilerSg2cYDnumber_characters},
  {"generate-function-binding", &YcompilerSg2cYgenerate_function_binding},
  {"*dynamic-linking?*", &YcompilerSg2cYTdynamic_linkingQT},
  {"generate-quotation", &YcompilerSg2cYgenerate_quotation},
  {"to-c", &YcompilerSg2cYto_c},
  {"generate-header", &YcompilerSg2cYgenerate_header},
  {"so-load", &YcompilerSg2cYso_load},
  {"*mangle-buffer*", &YcompilerSg2cYTmangle_bufferT},
  {"mangle-name-into", &YcompilerSg2cYmangle_name_into},
  {"funinit-to-c", &YcompilerSg2cYfuninit_to_c},
  {"mangle-local-marked-name", &YcompilerSg2cYmangle_local_marked_name},
  {"$hygiene-marker", &YcompilerSg2cYDhygiene_marker},
  {"module-info-name", &YcompilerSg2cYmodule_info_name},
  {"module-mtime-setter", &YcompilerSg2cYmodule_mtime_setter},
  {"$hygiene-char", &YcompilerSg2cYDhygiene_char},
  {"$name-mangler-table", &YcompilerSg2cYDname_mangler_table},
  {"compute-program", &YcompilerSg2cYcompute_program},
  {"generate-function-code", &YcompilerSg2cYgenerate_function_code},
  {"generate-module-info", &YcompilerSg2cYgenerate_module_info},
  {"---main-1---", NULL},
  {"generate-self-recursive-call", &YcompilerSg2cYgenerate_self_recursive_call},
  {"compute-ast", &YcompilerSg2cYcompute_ast},
  {"generate-global-environment", &YcompilerSg2cYgenerate_global_environment},
  {"module-src-file", &YcompilerSg2cYmodule_src_file},
  {"generate-closure-structure", &YcompilerSg2cYgenerate_closure_structure},
  {"with-used-expression", NULL},
  {"$escape-separator", &YcompilerSg2cYDescape_separator},
  {"g2c-top", &YcompilerSg2cYg2c_top},
  {"g2c-ast", &YcompilerSg2cYg2c_ast},
  {"mangle-local-name", &YcompilerSg2cYmangle_local_name},
  {"out-list-builder", &YcompilerSg2cYout_list_builder},
  {"generate-c-application", &YcompilerSg2cYgenerate_c_application},
  {"g2c-def-app", &YcompilerSg2cYg2c_def_app},
  {"mangle-global-name", &YcompilerSg2cYmangle_global_name},
  {"generate-main", &YcompilerSg2cYgenerate_main},
  {"g2c-exp", &YcompilerSg2cYg2c_exp},
  {"*registers-per-line*", &YcompilerSg2cYTregisters_per_lineT},
  {"generate-function-bodies", &YcompilerSg2cYgenerate_function_bodies},
  {"$c-escapes", &YcompilerSg2cYDc_escapes},
  {"module-up-to-date?", &YcompilerSg2cYmodule_up_to_dateQ},
  {"compile-load", &YcompilerSg2cYcompile_load},
  {"$min-character-code", &YcompilerSg2cYDmin_character_code},
  {"module-init-name", &YcompilerSg2cYmodule_init_name},
  {"generate-function-specs", &YcompilerSg2cYgenerate_function_specs},
  {"g2c-clean", &YcompilerSg2cYg2c_clean},
  {"mangle-module-binding", &YcompilerSg2cYmangle_module_binding},
  {"*trace-registers?*", &YcompilerSg2cYTtrace_registersQT},
  {"%compile", NULL},
  {"generate-trailer", &YcompilerSg2cYgenerate_trailer},
  {"binding->c", &YcompilerSg2cYbinding_Gc},
  {"gen-depth", &YcompilerSg2cYgen_depth},
  {"*tmp-file-counter*", &YcompilerSg2cYTtmp_file_counterT},
  {"module-mtime", &YcompilerSg2cYmodule_mtime},
  {"float-to-c-string", &YcompilerSg2cYfloat_to_c_string},
  {"$local-suffix", &YcompilerSg2cYDlocal_suffix},
  {"*definitions*", &YcompilerSg2cYTdefinitionsT},
  {"with-statement", NULL},
  {"purge-outdated-modules", &YcompilerSg2cYpurge_outdated_modules},
  {"g2c-test", &YcompilerSg2cYg2c_test},
  {"module-init-decl", &YcompilerSg2cYmodule_init_decl},
  {"generate-return", &YcompilerSg2cYgenerate_return},
  {"primitive-inlinable?", &YcompilerSg2cYprimitive_inlinableQ},
  {"$method-mangled-marker", &YcompilerSg2cYDmethod_mangled_marker},
  {"generate-quotation-forwards", &YcompilerSg2cYgenerate_quotation_forwards},
  {"%load", NULL},
  {"$max-character-code", &YcompilerSg2cYDmax_character_code},
  {"generate-registers", &YcompilerSg2cYgenerate_registers},
  {"for-commas", NULL},
  {"mangler-reset", &YcompilerSg2cYmangler_reset},
  {"$iep-suffix", &YcompilerSg2cYDiep_suffix},
  {"mangle-boot-name", &YcompilerSg2cYmangle_boot_name},
  {"$escape-marker", &YcompilerSg2cYDescape_marker},
  {"generate-local-temporaries", &YcompilerSg2cYgenerate_local_temporaries},
  {"reference->c", &YcompilerSg2cYreference_Gc},
  {"mangle-string-literal", &YcompilerSg2cYmangle_string_literal},
  {"gen-ref", &YcompilerSg2cYgen_ref},
  {"$iep-marker", &YcompilerSg2cYDiep_marker},
  {"<g2c-module-loader>", &YcompilerSg2cYLg2c_module_loaderG},
  {"char-buffer-as-string", &YcompilerSg2cYchar_buffer_as_string},
  {"with-expression", NULL},
  {"module-loader-app-modname-setter", &YcompilerSg2cYmodule_loader_app_modname_setter},
  {"$module-separator", &YcompilerSg2cYDmodule_separator},
  {"generate-function-forwards", &YcompilerSg2cYgenerate_function_forwards},
  {"generate-module-init", &YcompilerSg2cYgenerate_module_init},
  {"generate-quotations", &YcompilerSg2cYgenerate_quotations},
  {"generate-function-body-reference", &YcompilerSg2cYgenerate_function_body_reference},
  {"$method-mangled-marker-string", &YcompilerSg2cYDmethod_mangled_marker_string},
  {"<g2c-module>", &YcompilerSg2cYLg2c_moduleG},
  {"module-loader-appname-setter", &YcompilerSg2cYmodule_loader_appname_setter},
  {"g2c-build-app", &YcompilerSg2cYg2c_build_app},
  {"between-parentheses", NULL},
  {"---main-0---", NULL},
  {"module-loader-app-modname", &YcompilerSg2cYmodule_loader_app_modname},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"g2c-top", "g2c-top"},
  {"g2c-ast", "g2c-ast"},
  {"g2c-def-app", "g2c-def-app"},
  {"g2c-exp", "g2c-exp"},
  {"g2c-clean", "g2c-clean"},
  {"g2c-eval", "g2c-eval"},
  {"g2c-test", "g2c-test"},
  {"g2c-build-app", "g2c-build-app"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_compilerSg2c;
MODULE_INFO module_info_compilerSg2c = {
  "compiler/g2c",
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
extern void load_module_gooSioSwrite (void);
extern void load_module_compilerSast (void);
extern void load_module_compilerStop (void);
extern void load_module_compilerSast_linearize (void);
extern void load_module_gooScollectionsSstrings (void);
extern void load_module_gooSsystem (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooScollections (void);
extern void load_module_gooSioSport (void);

/* EXPRESSION: */

extern void load_module_compilerSg2c (void);

void load_module_compilerSg2c (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_runtimeSboot();
  load_module_gooSmacros();
  load_module_runtimeSruntime();
  load_module_gooSioSwrite();
  load_module_compilerSast();
  load_module_compilerStop();
  load_module_compilerSast_linearize();
  load_module_gooScollectionsSstrings();
  load_module_gooSsystem();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScollections();
  load_module_gooSioSport();

  (P)YcompilerSg2cY___main_0___();
  (P)YcompilerSg2cY___main_1___();
  (P)YcompilerSg2cY___main_2___();

}

/* END OF GENERATED CODE. */
