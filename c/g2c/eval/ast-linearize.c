/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: compiler/ast-linearize */

EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Ysig_naryQ,"runtime/boot","sig-nary?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YLintG,"runtime/boot","<int>");
EXT(YLtupG,"runtime/boot","<tup>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yfun_arity,"runtime/boot","fun-arity");
EXT(YTboot_macro_module_namesT,"runtime/boot","*boot-macro-module-names*");
EXT(YcompilerSastYLruntime_assignmentG,"compiler/ast","<runtime-assignment>");
EXT(YPprop,"runtime/boot","%prop");
EXT(YcompilerSastYLfix_letG,"compiler/ast","<fix-let>");
EXT(YcompilerSastYmodule_target_environment,"compiler/ast","module-target-environment");
EXT(YgooStypesYas,"goo/types","as");
DEF(YcompilerSast_linearizeYanalyze_calls,"compiler/ast-linearize","analyze-calls");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooScollectionsSlistYassq,"goo/collections/list","assq");
EXT(YPisa,"runtime/boot","%isa");
EXT(YruntimeSruntimeYloc_val_setter,"runtime/runtime","loc-val-setter");
EXT(YcompilerSastYbinding_global_box,"compiler/ast","binding-global-box");
EXT(YgooScollectionsSbufferYbuf,"goo/collections/buffer","buf");
EXT(YcompilerSastYconstant_index_setter,"compiler/ast","constant-index-setter");
EXT(YgooScollectionsScollectionYadd,"goo/collections/collection","add");
EXT(Ytup,"runtime/boot","tup");
EXT(YgooScollectionsScollectionYany2Q,"goo/collections/collection","any2?");
EXT(YcompilerSastYast_evaluate,"compiler/ast","ast-evaluate");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YcompilerSastYLimmediate_constantG,"compiler/ast","<immediate-constant>");
EXT(YcompilerSastYenvironment_uses_modules,"compiler/ast","environment-uses-modules");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YcompilerSastYobjectify_quotation,"compiler/ast","objectify-quotation");
EXT(YgooScollectionsSsequenceYcatX,"goo/collections/sequence","cat!");
EXT(Ysig_unification_vars,"runtime/boot","sig-unification-vars");
EXT(YLmagG,"runtime/boot","<mag>");
DEF(YcompilerSast_linearizeYgather_temporariesX,"compiler/ast-linearize","gather-temporaries!");
EXT(YcompilerSastYfunction_binding,"compiler/ast","function-binding");
EXT(Yhead_setter,"runtime/boot","head-setter");
EXT(Ytype_class,"runtime/boot","type-class");
EXT(Yunexec,"runtime/boot","unexec");
EXT(Yfun_sig_setter,"runtime/boot","fun-sig-setter");
DEF(YcompilerSast_linearizeYassoc_key_setter,"compiler/ast-linearize","assoc-key-setter");
DEF(YcompilerSast_linearizeYflatten_seqs,"compiler/ast-linearize","flatten-seqs");
EXT(YLunionG,"runtime/boot","<union>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YcompilerSastYfix_let_body,"compiler/ast","fix-let-body");
EXT(YcompilerSastYfunction_signature,"compiler/ast","function-signature");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooScollectionsScollectionYnow_setter,"goo/collections/collection","now-setter");
EXT(YruntimeSruntimeYcurry,"runtime/runtime","curry");
EXT(YgooScollectionsSsequenceYinsX,"goo/collections/sequence","ins!");
EXT(YcompilerSastYsignature_specs,"compiler/ast","signature-specs");
DEF(YcompilerSast_linearizeYreference_offset_setter,"compiler/ast-linearize","reference-offset-setter");
EXT(YgooScollectionsScollectionYnxt,"goo/collections/collection","nxt");
DEF(YcompilerSast_linearizeYunconstrained_typeQ,"compiler/ast-linearize","unconstrained-type?");
EXT(YcompilerSastYLfab_listG,"compiler/ast","<fab-list>");
DEF(YcompilerSast_linearizeYreference_selfQ,"compiler/ast-linearize","reference-self?");
EXT(YcompilerSastYLconstantG,"compiler/ast","<constant>");
EXT(YcompilerSastYLfree_environmentG,"compiler/ast","<free-environment>");
EXT(YruntimeSruntimeYbuild_condition_for_handler_interactively,"runtime/runtime","build-condition-for-handler-interactively");
EXT(Ykeyboard_interrupt,"runtime/boot","keyboard-interrupt");
EXT(YcompilerSastYLunwind_protectG,"compiler/ast","<unwind-protect>");
DEF(YcompilerSast_linearizeYprogram_form,"compiler/ast-linearize","program-form");
EXT(YruntimeSruntimeYbuild_condition_interactively,"runtime/runtime","build-condition-interactively");
EXT(YruntimeSruntimeYloc_val,"runtime/runtime","loc-val");
EXT(YruntimeSruntimeYdefault_handler,"runtime/runtime","default-handler");
EXT(YcompilerSastYalternative_condition,"compiler/ast","alternative-condition");
EXT(YgooScollectionsStableYid_hash,"goo/collections/table","id-hash");
EXT(YcompilerSastYfunction_source,"compiler/ast","function-source");
EXT(Yhead,"runtime/boot","head");
EXT(YcompilerSastYbinding_type,"compiler/ast","binding-type");
EXT(YgooScollectionsScollectionYelt_or,"goo/collections/collection","elt-or");
EXT(YcompilerSastYLalternativeG,"compiler/ast","<alternative>");
DEF(YcompilerSast_linearizeYclosurize_mainX,"compiler/ast-linearize","closurize-main!");
EXT(YcompilerSastYbinding_index_setter,"compiler/ast","binding-index-setter");
DEF(YcompilerSast_linearizeYliftX,"compiler/ast-linearize","lift!");
EXT(YcompilerSastYDgoo_boot_module_name,"compiler/ast","$goo-boot-module-name");
EXT(YLnumG,"runtime/boot","<num>");
EXT(YLvecG,"runtime/boot","<vec>");
EXT(YcompilerSastYlocals_body_setter,"compiler/ast","locals-body-setter");
EXT(YcompilerSastYfunction_registers,"compiler/ast","function-registers");
EXT(Yprop_getter,"runtime/boot","prop-getter");
EXT(YgooScollectionsSmapYLmapG,"goo/collections/map","<map>");
EXT(YcompilerSastYbinding_locative,"compiler/ast","binding-locative");
DEF(YcompilerSast_linearizeYextractX,"compiler/ast-linearize","extract!");
DEF(YcompilerSast_linearizeYdo_dynamic_extentX,"compiler/ast-linearize","do-dynamic-extent!");
EXT(YcompilerSastYmonitor_info,"compiler/ast","monitor-info");
EXT(YcompilerSastYLsequentialG,"compiler/ast","<sequential>");
EXT(YgooScollectionsScollectionYinto,"goo/collections/collection","into");
EXT(YgooScollectionsScollectionYempty,"goo/collections/collection","empty");
EXT(Ywrong_number_arguments_error,"runtime/boot","wrong-number-arguments-error");
EXT(Yhandler_info_arguments,"runtime/boot","handler-info-arguments");
EXT(YcompilerSastYsignature_bindings,"compiler/ast","signature-bindings");
EXT(YgooScollectionsSzipYLzipG,"goo/collections/zip","<zip>");
EXT(YcompilerSastYmodule_exports,"compiler/ast","module-exports");
EXT(YgooScollectionsScollectionYnow_key,"goo/collections/collection","now-key");
EXT(Yclass_direct_props,"runtime/boot","class-direct-props");
EXT(YgooScollectionsSstringYascii_limit,"goo/collections/string","ascii-limit");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(YcompilerSastYbinding_kind,"compiler/ast","binding-kind");
EXT(YgooSmathYacos,"goo/math","acos");
DEF(YcompilerSast_linearizeYlift_proceduresX,"compiler/ast-linearize","lift-procedures!");
EXT(YcompilerSastYbinding_dynamic_extentQ,"compiler/ast","binding-dynamic-extent?");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YLmetG,"runtime/boot","<met>");
EXT(YcompilerSastYunwind_protect_cleanup_thunk,"compiler/ast","unwind-protect-cleanup-thunk");
EXT(YcompilerSastYassignment_form,"compiler/ast","assignment-form");
EXT(YgooScollectionsScollectionYzap,"goo/collections/collection","zap");
DEF(YcompilerSast_linearizeYregister_allocateX,"compiler/ast-linearize","register-allocate!");
EXT(YcompilerSastYLmodule_bindingG,"compiler/ast","<module-binding>");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmagnitudeYmin,"goo/magnitude","min");
EXT(YcompilerSastYglobal_box_value_setter,"compiler/ast","global-box-value-setter");
DEF(YcompilerSast_linearizeYLfree_referenceG,"compiler/ast-linearize","<free-reference>");
EXT(Yprop_init,"runtime/boot","prop-init");
EXT(YgooScollectionsSassocYLassocsG,"goo/collections/assoc","<assocs>");
EXT(YcompilerSastYmodule_loader_module_type,"compiler/ast","module-loader-module-type");
EXT(YcompilerSastYbinding_module_name,"compiler/ast","binding-module-name");
EXT(Yfun_naryQ,"runtime/boot","fun-nary?");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YPdefine_method,"runtime/boot","%define-method");
EXT(YcompilerSastYLmodule_loaderG,"compiler/ast","<module-loader>");
EXT(YcompilerSastYLmoduleG,"compiler/ast","<module>");
EXT(YcompilerSastYunchecked_runtime_environment,"compiler/ast","unchecked-runtime-environment");
EXT(YgooScollectionsSsequenceYpick,"goo/collections/sequence","pick");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YcompilerSastYapplication_knownQ_setter,"compiler/ast","application-known?-setter");
EXT(YcompilerSastYfunction_registers_setter,"compiler/ast","function-registers-setter");
EXT(YLsubclassG,"runtime/boot","<subclass>");
EXT(YgooScollectionsScollectionYnow,"goo/collections/collection","now");
EXT(YcompilerSastYprogram_type_setter,"compiler/ast","program-type-setter");
DEF(YcompilerSast_linearizeYassoc_key,"compiler/ast-linearize","assoc-key");
EXT(YTmacros_okQT,"runtime/boot","*macros-ok?*");
EXT(YcompilerSastYLglobal_referenceG,"compiler/ast","<global-reference>");
EXT(YruntimeSruntimeYdescribe_condition,"runtime/runtime","describe-condition");
EXT(YcompilerSastYassignment_reference,"compiler/ast","assignment-reference");
EXT(Yclass_descendents,"runtime/boot","class-descendents");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScollectionsSsequenceYlast,"goo/collections/sequence","last");
EXT(YgooScollectionsSsequenceYfinds,"goo/collections/sequence","finds");
EXT(YcompilerSastYLargumentsG,"compiler/ast","<arguments>");
EXT(YgooScollectionsStableYtab_hash,"goo/collections/table","tab-hash");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Ygen_refs_setter,"runtime/boot","gen-refs-setter");
EXT(YgooScollectionsSlistYpush,"goo/collections/list","push");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YcompilerSastYLlocal_assignmentG,"compiler/ast","<local-assignment>");
EXT(YcompilerSastYbinding_value,"compiler/ast","binding-value");
EXT(YcompilerSastYfree_environment,"compiler/ast","free-environment");
EXT(YgooSmathYoddQ,"goo/math","odd?");
DEF(YcompilerSast_linearizeYprogram_quotations,"compiler/ast-linearize","program-quotations");
EXT(YruntimeSruntimeYdefault_handler_description,"runtime/runtime","default-handler-description");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YcompilerSastYapplication_tailQ,"compiler/ast","application-tail?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YcompilerSastYmodule_name_to_relpath,"compiler/ast","module-name-to-relpath");
DEF(YcompilerSast_linearizeYbox_form,"compiler/ast-linearize","box-form");
EXT(Yprop_value_setter,"runtime/boot","prop-value-setter");
EXT(YruntimeSruntimeYapp_args,"runtime/runtime","app-args");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YLchrG,"runtime/boot","<chr>");
EXT(YLflatG,"runtime/boot","<flat>");
EXT(YcompilerSastYfunction_data_refs_setter,"compiler/ast","function-data-refs-setter");
EXT(YgooSmathYcos,"goo/math","cos");
DEF(YcompilerSast_linearizeYbox_reference_setter,"compiler/ast-linearize","box-reference-setter");
DEF(YcompilerSast_linearizeYbox_reference,"compiler/ast-linearize","box-reference");
EXT(YgooSmathYT,"goo/math","*");
DEF(YcompilerSast_linearizeYboxify_mutable_bindings,"compiler/ast-linearize","boxify-mutable-bindings");
EXT(YsubtypeQ,"runtime/boot","subtype?");
DEF(YcompilerSast_linearizeYLclosure_creationG,"compiler/ast-linearize","<closure-creation>");
DEF(YcompilerSast_linearizeYextract_thingsX,"compiler/ast-linearize","extract-things!");
DEF(YcompilerSast_linearizeYform_quotations,"compiler/ast-linearize","form-quotations");
EXT(Ygen_refs,"runtime/boot","gen-refs");
DEF(YcompilerSast_linearizeYcollect_temporariesX,"compiler/ast-linearize","collect-temporaries!");
EXT(Ynot,"runtime/boot","not");
EXT(YcompilerSastYLcomputed_programG,"compiler/ast","<computed-program>");
EXT(YLreplace_generic_restartG,"runtime/boot","<replace-generic-restart>");
EXT(YcompilerSastYmonitor_type,"compiler/ast","monitor-type");
DEF(YcompilerSast_linearizeYdo_do_dynamic_extentX,"compiler/ast-linearize","do-do-dynamic-extent!");
EXT(YruntimeSruntimeYchoose_handler,"runtime/runtime","choose-handler");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScollectionsScycleYcycle,"goo/collections/cycle","cycle");
EXT(YruntimeSruntimeYspread,"runtime/runtime","spread");
EXT(YcompilerSastYlocals_body,"compiler/ast","locals-body");
EXT(YruntimeSruntimeYhandler_matchesQ,"runtime/runtime","handler-matches?");
EXT(YruntimeSruntimeYrcurry,"runtime/runtime","rcurry");
EXT(YgooScollectionsSsequenceY3rd,"goo/collections/sequence","3rd");
EXT(YgooScollectionsSsequenceYpos,"goo/collections/sequence","pos");
EXT(YcompilerSastYapplication_knownQ,"compiler/ast","application-known?");
EXT(YcompilerSastYsignature_specs_setter,"compiler/ast","signature-specs-setter");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScollectionsScollectionYfill,"goo/collections/collection","fill");
EXT(YcompilerSastYLast_macro_definitionG,"compiler/ast","<ast-macro-definition>");
EXT(YgooScollectionsScycleYLcycleG,"goo/collections/cycle","<cycle>");
EXT(YgooScollectionsSlistYassqn,"goo/collections/list","assqn");
EXT(Yfab_sym,"runtime/boot","fab-sym");
EXT(YDmin_int,"runtime/boot","$min-int");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ylst,"runtime/boot","lst");
EXT(YruntimeSruntimeYDdefault_handler_info,"runtime/runtime","$default-handler-info");
EXT(YcompilerSastYfind_binding,"compiler/ast","find-binding");
EXT(YruntimeSruntimeYcondition_arguments,"runtime/runtime","condition-arguments");
EXT(YgooSmagnitudeYGE,"goo/magnitude",">=");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
DEF(YcompilerSast_linearizeYLbox_readG,"compiler/ast-linearize","<box-read>");
EXT(Ysig_specs,"runtime/boot","sig-specs");
EXT(YcompilerSastYload_module,"compiler/ast","load-module");
EXT(YOlst,"runtime/boot","@lst");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScollectionsStableYtab_test,"goo/collections/table","tab-test");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YruntimeSruntimeYformat_to_string,"runtime/runtime","format-to-string");
DEF(YcompilerSast_linearizeYassoc,"compiler/ast-linearize","assoc");
DEF(YcompilerSast_linearizeYanalyze_dynamic_extent,"compiler/ast-linearize","analyze-dynamic-extent");
EXT(YcompilerSastYreference_called_functionQ_setter,"compiler/ast","reference-called-function?-setter");
DEF(YcompilerSast_linearizeYclosure_creation_free_setter,"compiler/ast-linearize","closure-creation-free-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YLsingletonG,"runtime/boot","<singleton>");
EXT(Yerror,"runtime/boot","error");
EXT(YcompilerSastYfunction_self_recursiveQ_setter,"compiler/ast","function-self-recursive?-setter");
EXT(YcompilerSastYLreferenceG,"compiler/ast","<reference>");
EXT(YcompilerSastYfab_g2c_module,"compiler/ast","fab-g2c-module");
EXT(YcompilerSastYmodule_name,"compiler/ast","module-name");
EXT(YcompilerSastYsignature_value,"compiler/ast","signature-value");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLfunG,"runtime/boot","<fun>");
EXT(YgooScollectionsSsequenceYins,"goo/collections/sequence","ins");
EXT(YruntimeSruntimeYread,"runtime/runtime","read");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YcompilerSastYenvironment_bindings,"compiler/ast","environment-bindings");
EXT(YcompilerSastYLbind_exitG,"compiler/ast","<bind-exit>");
EXT(YTboot_macro_expandersT,"runtime/boot","*boot-macro-expanders*");
EXT(YgooSmathYbitQ,"goo/math","bit?");
DEF(YcompilerSast_linearizeYLflattened_programG,"compiler/ast-linearize","<flattened-program>");
DEF(YcompilerSast_linearizeYadjoin_definitionX,"compiler/ast-linearize","adjoin-definition!");
EXT(YcompilerSastYfunction_naryQ,"compiler/ast","function-nary?");
EXT(Yprop_boundQ,"runtime/boot","prop-bound?");
EXT(YgooScollectionsScollectionYmap2,"goo/collections/collection","map2");
EXT(YgooScollectionsScollectionYlow_elt,"goo/collections/collection","low-elt");
EXT(YcompilerSastYprogram_register,"compiler/ast","program-register");
DEF(YcompilerSast_linearizeYform_program,"compiler/ast-linearize","form-program");
EXT(YcompilerSastYbinding_native_toQ,"compiler/ast","binding-native-to?");
EXT(YgooScollectionsScollectionYkeys,"goo/collections/collection","keys");
EXT(YgooScollectionsSsequenceYdo_key_vals,"goo/collections/sequence","do-key-vals");
EXT(Ysig_val,"runtime/boot","sig-val");
EXT(YcompilerSastYast_define_binding,"compiler/ast","ast-define-binding");
EXT(YLlstG,"runtime/boot","<lst>");
DEF(YcompilerSast_linearizeYdo_call_referencesX,"compiler/ast-linearize","do-call-references!");
EXT(YcompilerSastYalternative_consequent,"compiler/ast","alternative-consequent");
EXT(Yfab_class,"runtime/boot","fab-class");
EXT(YLlogG,"runtime/boot","<log>");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
DEF(YcompilerSast_linearizeYclosure_creation_free,"compiler/ast-linearize","closure-creation-free");
EXT(YruntimeSruntimeYLhandler_infoG,"runtime/runtime","<handler-info>");
EXT(YcompilerSastYbinding_global_box_setter,"compiler/ast","binding-global-box-setter");
EXT(Yfun_specs,"runtime/boot","fun-specs");
EXT(Ytype_object,"runtime/boot","type-object");
EXT(Yfun_name_setter,"runtime/boot","fun-name-setter");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScollectionsSsequenceYrev,"goo/collections/sequence","rev");
EXT(YgooScollectionsStableYcase_insensitive_string_equal,"goo/collections/table","case-insensitive-string-equal");
EXT(YgooScollectionsSsequenceY1st,"goo/collections/sequence","1st");
EXT(YgooScollectionsScollectionYenum,"goo/collections/collection","enum");
EXT(YruntimeSruntimeYTgensym_counterT,"runtime/runtime","*gensym-counter*");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Yadd_prop,"runtime/boot","add-prop");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmagnitudeYLE,"goo/magnitude","<=");
DEF(YcompilerSast_linearizeYTrenaming_bindings_counterT,"compiler/ast-linearize","*renaming-bindings-counter*");
EXT(Yfile_opening_error,"runtime/boot","file-opening-error");
EXT(YcompilerSastYfunction_data_refs,"compiler/ast","function-data-refs");
DEF(YcompilerSast_linearizeYform_definitions,"compiler/ast-linearize","form-definitions");
EXT(YcompilerSastYLpredefined_applicationG,"compiler/ast","<predefined-application>");
EXT(YcompilerSastYfunction_debug_name_setter,"compiler/ast","function-debug-name-setter");
DEF(YcompilerSast_linearizeYcollect_registersX,"compiler/ast-linearize","collect-registers!");
EXT(YgooScollectionsStableYDpermanent_hash_state,"goo/collections/table","$permanent-hash-state");
EXT(YgooScollectionsSrangeYrange_by,"goo/collections/range","range-by");
DEF(YcompilerSast_linearizeYform_program_setter,"compiler/ast-linearize","form-program-setter");
EXT(Ysym_name,"runtime/boot","sym-name");
EXT(YTboot_macro_namesT,"runtime/boot","*boot-macro-names*");
EXT(YcompilerSastYas_lst,"compiler/ast","as-lst");
EXT(YgooScollectionsScollectionYfind,"goo/collections/collection","find");
DEF(YcompilerSast_linearizeYassoc_value,"compiler/ast-linearize","assoc-value");
EXT(Ynil,"runtime/boot","nil");
EXT(YcompilerSastYbinding_dottedQ_setter,"compiler/ast","binding-dotted?-setter");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YcompilerSastYbinding_type_setter,"compiler/ast","binding-type-setter");
EXT(YgooScollectionsSbufferYlen_setter,"goo/collections/buffer","len-setter");
EXT(YgooSmathYfabs,"goo/math","fabs");
DEF(YcompilerSast_linearizeYLrenamed_local_bindingG,"compiler/ast-linearize","<renamed-local-binding>");
EXT(YcompilerSastYLregular_applicationG,"compiler/ast","<regular-application>");
EXT(Yfun_name,"runtime/boot","fun-name");
EXT(YcompilerSastYapplication_arguments,"compiler/ast","application-arguments");
EXT(YruntimeSruntimeYhandler_function,"runtime/runtime","handler-function");
EXT(YcompilerSastYLast_primitiveG,"compiler/ast","<ast-primitive>");
EXT(YgooScollectionsSstringYstr_to_num,"goo/collections/string","str-to-num");
DEF(YcompilerSast_linearizeYdo_call_upgradesX,"compiler/ast-linearize","do-call-upgrades!");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Yobject_class,"runtime/boot","object-class");
EXT(YcompilerSastYfunction_self_recursiveQ,"compiler/ast","function-self-recursive?");
EXT(Yprop_owner,"runtime/boot","prop-owner");
EXT(YgooScollectionsScollectionYLtabG,"goo/collections/collection","<tab>");
EXT(YcompilerSastYfunction_temporaries_setter,"compiler/ast","function-temporaries-setter");
EXT(YcompilerSastYdo_static_global_bindings,"compiler/ast","do-static-global-bindings");
DEF(YcompilerSast_linearizeYadjoin_free_bindingX,"compiler/ast-linearize","adjoin-free-binding!");
EXT(YcompilerSastYsignature_arity,"compiler/ast","signature-arity");
DEF(YcompilerSast_linearizeYas_top_level_forms,"compiler/ast-linearize","as-top-level-forms");
EXT(YcompilerSastYobjectify_signature,"compiler/ast","objectify-signature");
EXT(YcompilerSastYfix_let_bindings_setter,"compiler/ast","fix-let-bindings-setter");
EXT(YcompilerSastYfunction_bindings,"compiler/ast","function-bindings");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Yprop_value,"runtime/boot","prop-value");
EXT(YcompilerSastYbinding_index,"compiler/ast","binding-index");
EXT(Yclass_parents,"runtime/boot","class-parents");
EXT(YgooSmagnitudeYG,"goo/magnitude",">");
EXT(YgooScollectionsSsequenceYvals_to_str,"goo/collections/sequence","vals-to-str");
EXT(YcompilerSastYLglobal_boxG,"compiler/ast","<global-box>");
EXT(YgooSmagnitudeYmax,"goo/magnitude","max");
EXT(YgooSmathYB,"goo/math","&");
EXT(YcompilerSastYmonitor_handler,"compiler/ast","monitor-handler");
EXT(YcompilerSastYfix_let_body_setter,"compiler/ast","fix-let-body-setter");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YcompilerSastYenvironment_module,"compiler/ast","environment-module");
EXT(YgooScollectionsSmapYfab_map,"goo/collections/map","fab-map");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScollectionsScollectionYkey_test,"goo/collections/collection","key-test");
EXT(YcompilerSastYreference_binding,"compiler/ast","reference-binding");
EXT(YgooScollectionsSsequenceYrange_checkQ,"goo/collections/sequence","range-check?");
EXT(YcompilerSastYmodule_syntax_environment,"compiler/ast","module-syntax-environment");
EXT(YgooSmathYposQ,"goo/math","pos?");
DEF(YcompilerSast_linearizeYLbox_creationG,"compiler/ast-linearize","<box-creation>");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScollectionsScollectionYdel,"goo/collections/collection","del");
EXT(YLseqG,"runtime/boot","<seq>");
EXT(YLanyG,"runtime/boot","<any>");
EXT(Yprop_type,"runtime/boot","prop-type");
EXT(Yincongruent_method_error,"runtime/boot","incongruent-method-error");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YcompilerSastYLast_methodG,"compiler/ast","<ast-method>");
EXT(YcompilerSastYsignature_bindings_setter,"compiler/ast","signature-bindings-setter");
EXT(YPwith_monitor,"runtime/boot","%with-monitor");
EXT(YcompilerSastYbinding_mutableQ,"compiler/ast","binding-mutable?");
EXT(YcompilerSastYfix_let_arguments_setter,"compiler/ast","fix-let-arguments-setter");
DEF(YcompilerSast_linearizeYTregister_passiveQT,"compiler/ast-linearize","*register-passive?*");
EXT(YcompilerSastYLbindingG,"compiler/ast","<binding>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YcompilerSastYreference_called_functionQ,"compiler/ast","reference-called-function?");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
DEF(YcompilerSast_linearizeYassocq,"compiler/ast-linearize","assocq");
DEF(YcompilerSast_linearizeYprogram_definitions_setter,"compiler/ast-linearize","program-definitions-setter");
EXT(YgooScollectionsStableYLstr_tabG,"goo/collections/table","<str-tab>");
EXT(Yclass_props,"runtime/boot","class-props");
EXT(YcompilerSastYreference_frame_number,"compiler/ast","reference-frame-number");
EXT(YcompilerSastYfunction_temporaries,"compiler/ast","function-temporaries");
EXT(YgooSmagnitudeYL,"goo/magnitude","<");
EXT(YgooScollectionsScollectionYdo3,"goo/collections/collection","do3");
DEF(YcompilerSast_linearizeYbox_form_setter,"compiler/ast-linearize","box-form-setter");
EXT(YcompilerSastYinit_environment_for_eval,"compiler/ast","init-environment-for-eval");
EXT(YcompilerSastYsignature_value_setter,"compiler/ast","signature-value-setter");
EXT(YPprop_unbound_error,"runtime/boot","%prop-unbound-error");
EXT(YruntimeSruntimeYcondition_message,"runtime/runtime","condition-message");
EXT(YcompilerSastYsignature_arity_setter,"compiler/ast","signature-arity-setter");
DEF(YcompilerSast_linearizeYast_walk,"compiler/ast-linearize","ast-walk");
EXT(Yvec,"runtime/boot","vec");
EXT(YcompilerSastYbinding_inferred_type_setter,"compiler/ast","binding-inferred-type-setter");
EXT(YgooScollectionsSsequenceYdel_dups,"goo/collections/sequence","del-dups");
EXT(YLsigG,"runtime/boot","<sig>");
EXT(YruntimeSruntimeYfab_handler,"runtime/runtime","fab-handler");
EXT(YgooScollectionsStableYcase_insensitive_string_hash,"goo/collections/table","case-insensitive-string-hash");
EXT(YcompilerSastYDgoo_runtime_module_name,"compiler/ast","$goo-runtime-module-name");
EXT(YcompilerSastYload_in,"compiler/ast","load-in");
EXT(YcompilerSastYLreal_referenceG,"compiler/ast","<real-reference>");
EXT(YgooScollectionsScollectionYas_copy,"goo/collections/collection","as-copy");
EXT(YruntimeSruntimeYLconditionG,"runtime/runtime","<condition>");
EXT(YgooScollectionsScollectionYkey_type,"goo/collections/collection","key-type");
EXT(Yfun_names,"runtime/boot","fun-names");
EXT(YcompilerSastYmodule_binding,"compiler/ast","module-binding");
EXT(Yhandler_info_message,"runtime/boot","handler-info-message");
EXT(YcompilerSastYinstall_initial_bindings,"compiler/ast","install-initial-bindings");
EXT(Yfind_setter,"runtime/boot","find-setter");
EXT(YcompilerSastYLast_genericG,"compiler/ast","<ast-generic>");
EXT(YgooScollectionsSbufferYLbufG,"goo/collections/buffer","<buf>");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooScollectionsScollectionYfind_or,"goo/collections/collection","find-or");
EXT(YcompilerSastYsignature_naryQ,"compiler/ast","signature-nary?");
EXT(YcompilerSastYunwind_protect_protected_thunk,"compiler/ast","unwind-protect-protected-thunk");
EXT(YgooScollectionsSsequenceYsub_setter,"goo/collections/sequence","sub-setter");
DEF(YcompilerSast_linearizeYform_definitions_setter,"compiler/ast-linearize","form-definitions-setter");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSmathYE,"goo/math","=");
EXT(YcompilerSastYfix_let_bindings,"compiler/ast","fix-let-bindings");
EXT(YcompilerSastYLlocal_bindingG,"compiler/ast","<local-binding>");
EXT(YOall2Q,"runtime/boot","@all2?");
EXT(YgooScollectionsSsequenceYrange_check,"goo/collections/sequence","range-check");
EXT(YgooScollectionsScollectionYfinQ,"goo/collections/collection","fin?");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YcompilerSastYfix_let_arguments,"compiler/ast","fix-let-arguments");
EXT(YcompilerSastYapplication_binding,"compiler/ast","application-binding");
EXT(YcompilerSastYreport_undefined_global_bindings,"compiler/ast","report-undefined-global-bindings");
DEF(YcompilerSast_linearizeYupdate_walkX,"compiler/ast-linearize","update-walk!");
DEF(YcompilerSast_linearizeYLbox_writeG,"compiler/ast-linearize","<box-write>");
EXT(YcompilerSastYdo_named_static_global_bindings,"compiler/ast","do-named-static-global-bindings");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooScollectionsSassocYassocs_test_setter,"goo/collections/assoc","assocs-test-setter");
EXT(YLcolG,"runtime/boot","<col>");
EXT(YLclassG,"runtime/boot","<class>");
EXT(Ysig_names,"runtime/boot","sig-names");
EXT(Yfab_gen,"runtime/boot","fab-gen");
EXT(YcompilerSastYfunction_signature_setter,"compiler/ast","function-signature-setter");
EXT(YcompilerSastYbinding_name,"compiler/ast","binding-name");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YruntimeSruntimeYformat,"runtime/runtime","format");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YcompilerSastYLprogramG,"compiler/ast","<program>");
DEF(YcompilerSast_linearizeYnew_renamed_binding,"compiler/ast-linearize","new-renamed-binding");
EXT(YgooScollectionsScollectionYelt_default,"goo/collections/collection","elt-default");
EXT(YcompilerSastYLast_functionG,"compiler/ast","<ast-function>");
EXT(YcompilerSastYfix_let_types,"compiler/ast","fix-let-types");
EXT(YcompilerSastYfunction_value,"compiler/ast","function-value");
EXT(YgooScollectionsSbufferYlenSfill_setter,"goo/collections/buffer","len/fill-setter");
EXT(YcompilerSastYLdefinitionG,"compiler/ast","<definition>");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooScollectionsScollectionYallQ,"goo/collections/collection","all?");
EXT(YcompilerSastYobjectify_with_subtransaction,"compiler/ast","objectify-with-subtransaction");
EXT(YcompilerSastYLglobal_assignmentG,"compiler/ast","<global-assignment>");
EXT(YgooScollectionsSsequenceYdel_vals,"goo/collections/sequence","del-vals");
DEF(YcompilerSast_linearizeYdo_do_call_referencesX,"compiler/ast-linearize","do-do-call-references!");
EXT(YruntimeSruntimeYapp_filename,"runtime/runtime","app-filename");
EXT(YcompilerSastYenv_object_name,"compiler/ast","env-object-name");
EXT(Ytail_setter,"runtime/boot","tail-setter");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYA,"goo/math","+");
DEF(YcompilerSast_linearizeYLassocG,"compiler/ast-linearize","<assoc>");
EXT(YcompilerSastYprobe_module,"compiler/ast","probe-module");
EXT(YcompilerSastYfunction_body_setter,"compiler/ast","function-body-setter");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Ysig_arity,"runtime/boot","sig-arity");
EXT(YgooScollectionsScollectionYfoldA,"goo/collections/collection","fold+");
EXT(YgooScollectionsScollectionYLenumG,"goo/collections/collection","<enum>");
EXT(YgooScollectionsScollectionYdo2,"goo/collections/collection","do2");
EXT(YPsymbols,"runtime/boot","%symbols");
EXT(YcompilerSastYfunction_body,"compiler/ast","function-body");
EXT(YgooScollectionsSstringYstr,"goo/collections/string","str");
EXT(YcompilerSastYLboundQG,"compiler/ast","<bound?>");
EXT(YcompilerSastYmonitor_main_thunk,"compiler/ast","monitor-main-thunk");
EXT(YgooScollectionsScollectionYlow_elt_setter,"goo/collections/collection","low-elt-setter");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YcompilerSastYLast_signatureG,"compiler/ast","<ast-signature>");
DEF(YcompilerSast_linearizeYLtop_level_formG,"compiler/ast-linearize","<top-level-form>");
EXT(YDmax_int,"runtime/boot","$max-int");
EXT(Yfind_getter,"runtime/boot","find-getter");
EXT(YcompilerSastYglobal_box_value,"compiler/ast","global-box-value");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScollectionsScollectionYdup,"goo/collections/collection","dup");
EXT(Ytail,"runtime/boot","tail");
DEF(YcompilerSast_linearizeYclosure_creation_index_setter,"compiler/ast-linearize","closure-creation-index-setter");
EXT(Ytype_error,"runtime/boot","type-error");
EXT(YgooScollectionsSrangeYrange,"goo/collections/range","range");
EXT(YgooScollectionsScollectionYelt_type,"goo/collections/collection","elt-type");
DEF(YcompilerSast_linearizeYform_quotations_setter,"compiler/ast-linearize","form-quotations-setter");
EXT(YcompilerSastYfunction_debug_name,"compiler/ast","function-debug-name");
EXT(YruntimeSruntimeYLrestartG,"runtime/runtime","<restart>");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YcompilerSastYlocals_bindings_setter,"compiler/ast","locals-bindings-setter");
EXT(YgooScollectionsSsequenceYbelow,"goo/collections/sequence","below");
DEF(YcompilerSast_linearizeYadjoin_temporary_variablesX,"compiler/ast-linearize","adjoin-temporary-variables!");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YLtypeG,"runtime/boot","<type>");
EXT(YruntimeSruntimeYinvoke_handler_interactively,"runtime/runtime","invoke-handler-interactively");
EXT(Yord_app_mets,"runtime/boot","ord-app-mets");
EXT(YcompilerSastYprogram_register_setter,"compiler/ast","program-register-setter");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YcompilerSastYfunction_index_setter,"compiler/ast","function-index-setter");
EXT(YLlocG,"runtime/boot","<loc>");
DEF(YcompilerSast_linearizeYclosure_creation_index,"compiler/ast-linearize","closure-creation-index");
EXT(YcompilerSastYlocals_bindings,"compiler/ast","locals-bindings");
EXT(YgooScollectionsSbufferYpop_lastX,"goo/collections/buffer","pop-last!");
EXT(YcompilerSastYassignment_binding,"compiler/ast","assignment-binding");
EXT(YgooScollectionsScollectionYfab,"goo/collections/collection","fab");
EXT(Ytype_elts,"runtime/boot","type-elts");
EXT(YcompilerSastYLapplicationG,"compiler/ast","<application>");
EXT(YgooScollectionsStableYtab_shrink_threshold_setter,"goo/collections/table","tab-shrink-threshold-setter");
EXT(YTreport_prop_unbound_errorsQT,"runtime/boot","*report-prop-unbound-errors?*");
EXT(YgooScollectionsSrangeYfrom,"goo/collections/range","from");
EXT(YTrestarts_okQT,"runtime/boot","*restarts-ok?*");
EXT(YgooScollectionsStableYtab_gc_state,"goo/collections/table","tab-gc-state");
EXT(YruntimeSruntimeYLsimple_conditionG,"runtime/runtime","<simple-condition>");
EXT(YcompilerSastYbind_exit_main_fun,"compiler/ast","bind-exit-main-fun");
EXT(YcompilerSastYfunction_index,"compiler/ast","function-index");
EXT(YgooSmathYround,"goo/math","round");
EXT(YPPmacro,"runtime/boot","%%macro");
EXT(YcompilerSastYLprogramsG,"compiler/ast","<programs>");
EXT(YcompilerSastYLstatic_global_environmentG,"compiler/ast","<static-global-environment>");
EXT(YruntimeSruntimeYLsimple_errorG,"runtime/runtime","<simple-error>");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScollectionsSassocYassocs_test,"goo/collections/assoc","assocs-test");
EXT(YgooScollectionsSsequenceYreject,"goo/collections/sequence","reject");
EXT(YcompilerSastYbinding_dottedQ,"compiler/ast","binding-dotted?");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
DEF(YcompilerSast_linearizeYast_contains_funQ,"compiler/ast-linearize","ast-contains-fun?");
EXT(Yclass_name,"runtime/boot","class-name");
EXT(Ymay_isaQ,"runtime/boot","may-isa?");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScollectionsSlistYLlistG,"goo/collections/list","<list>");
EXT(YLstrG,"runtime/boot","<str>");
EXT(YcompilerSastYLassignmentG,"compiler/ast","<assignment>");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YLoptsG,"runtime/boot","<opts>");
DEF(YcompilerSast_linearizeYinsert_boxX,"compiler/ast-linearize","insert-box!");
EXT(YgooScollectionsStableYtab_shrink_threshold,"goo/collections/table","tab-shrink-threshold");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Ygen_add_met,"runtime/boot","gen-add-met");
EXT(YcompilerSastYLpassive_programG,"compiler/ast","<passive-program>");
EXT(YcompilerSastYbinding_inferred_type,"compiler/ast","binding-inferred-type");
EXT(YgooSmathYceil,"goo/math","ceil");
DEF(YcompilerSast_linearizeYreference_offset,"compiler/ast-linearize","reference-offset");
EXT(YgooScollectionsSstringYascii_whitespaces,"goo/collections/string","ascii-whitespaces");
EXT(Yprop_setter,"runtime/boot","prop-setter");
EXT(Yfun_val,"runtime/boot","fun-val");
EXT(YruntimeSruntimeYsig,"runtime/runtime","sig");
EXT(YgooScollectionsStableYtab_growth_threshold,"goo/collections/table","tab-growth-threshold");
EXT(YcompilerSastYbinding_info_setter,"compiler/ast","binding-info-setter");
EXT(YgooScollectionsScollectionYmap_keyed,"goo/collections/collection","map-keyed");
EXT(YcompilerSastYbinding_info,"compiler/ast","binding-info");
EXT(YgooScollectionsSzipYzip,"goo/collections/zip","zip");
EXT(YgooScollectionsSsequenceYsub,"goo/collections/sequence","sub");
EXT(YgooScollectionsScollectionYitems,"goo/collections/collection","items");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YcompilerSastYfunction_free_setter,"compiler/ast","function-free-setter");
DEF(YcompilerSast_linearizeYanalyze_call_references,"compiler/ast-linearize","analyze-call-references");
EXT(Yunknown_function_error,"runtime/boot","unknown-function-error");
DEF(YcompilerSast_linearizeYprogram_definitions,"compiler/ast-linearize","program-definitions");
EXT(YgooScollectionsSzipYunzip,"goo/collections/zip","unzip");
EXT(YcompilerSastYbinding_dynamic_extentQ_setter,"compiler/ast","binding-dynamic-extent?-setter");
EXT(YcompilerSastYremove_modules_by_nameX,"compiler/ast","remove-modules-by-name!");
DEF(YcompilerSast_linearizeYassoc_value_setter,"compiler/ast-linearize","assoc-value-setter");
EXT(YcompilerSastYalternative_alternant,"compiler/ast","alternative-alternant");
DEF(YcompilerSast_linearizeYprogram_quotations_setter,"compiler/ast-linearize","program-quotations-setter");
EXT(YcompilerSastYruntime_environment,"compiler/ast","runtime-environment");
EXT(Yclass_ancestors,"runtime/boot","class-ancestors");
EXT(YcompilerSastYsignature_naryQ_setter,"compiler/ast","signature-nary?-setter");
EXT(YcompilerSastYassignment_form_setter,"compiler/ast","assignment-form-setter");
EXT(YcompilerSastYLlocal_referenceG,"compiler/ast","<local-reference>");
EXT(YcompilerSastYsignature_names_setter,"compiler/ast","signature-names-setter");
EXT(YcompilerSastYfind_environment_module,"compiler/ast","find-environment-module");
EXT(YcompilerSastYconstant_index,"compiler/ast","constant-index");
EXT(YcompilerSastYbinding_value_setter,"compiler/ast","binding-value-setter");
EXT(YcompilerSastYapplication_function,"compiler/ast","application-function");
EXT(YgooScollectionsStableYtab_growth_factor_setter,"goo/collections/table","tab-growth-factor-setter");
EXT(YgooScollectionsStableYtab_growth_factor,"goo/collections/table","tab-growth-factor");
EXT(YgooScollectionsSstepYfirst_then,"goo/collections/step","first-then");
EXT(YLsimple_handler_infoG,"runtime/boot","<simple-handler-info>");
DEF(YcompilerSast_linearizeYallocate_register,"compiler/ast-linearize","allocate-register");
EXT(YcompilerSastYreference_frame_offset,"compiler/ast","reference-frame-offset");
EXT(YgooScollectionsScollectionYrange_error,"goo/collections/collection","range-error");
EXT(YcompilerSastYLraw_constantG,"compiler/ast","<raw-constant>");
EXT(YcompilerSastYLast_primitive_definitionG,"compiler/ast","<ast-primitive-definition>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YruntimeSruntimeYLhandlerG,"runtime/runtime","<handler>");
EXT(YcompilerSastYinit_ast,"compiler/ast","init-ast");
EXT(YgooScollectionsStableYLsetG,"goo/collections/table","<set>");
EXT(YLfloG,"runtime/boot","<flo>");
DEF(YcompilerSast_linearizeYreference_selfQ_setter,"compiler/ast-linearize","reference-self?-setter");
EXT(YLsymG,"runtime/boot","<sym>");
EXT(Ymet_appQ,"runtime/boot","met-app?");
EXT(YgooScollectionsScollectionYaddX,"goo/collections/collection","add!");
EXT(Ynew,"runtime/boot","new");
EXT(YruntimeSruntimeYidentity,"runtime/runtime","identity");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yobject_parents,"runtime/boot","object-parents");
EXT(YgooScollectionsScollectionYfold,"goo/collections/collection","fold");
EXT(YruntimeSruntimeYLserious_conditionG,"runtime/runtime","<serious-condition>");
EXT(YcompilerSastYmonitor_test,"compiler/ast","monitor-test");
EXT(Yfun_mets,"runtime/boot","fun-mets");
EXT(YOisaQ,"runtime/boot","@isa?");
EXT(YgooScollectionsStableYtab_growth_threshold_setter,"goo/collections/table","tab-growth-threshold-setter");
EXT(YPsnul,"runtime/boot","%snul");
EXT(YcompilerSastYboundQ_reference,"compiler/ast","bound?-reference");
EXT(YruntimeSruntimeYcompose,"runtime/runtime","compose");
EXT(YcompilerSastYprogram_type,"compiler/ast","program-type");
EXT(YgooScollectionsSstringYTprint_baseT,"goo/collections/string","*print-base*");
EXT(Ygen_src_setter,"runtime/boot","gen-src-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YcompilerSastYdo_module_loader_modules,"compiler/ast","do-module-loader-modules");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YcompilerSastYlocals_functions_setter,"compiler/ast","locals-functions-setter");
EXT(YruntimeSruntimeYdescribe_handler,"runtime/runtime","describe-handler");
EXT(Ynul,"runtime/boot","nul");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScollectionsScollectionYelt_setter,"goo/collections/collection","elt-setter");
EXT(YgooScollectionsScollectionYdo_keyed,"goo/collections/collection","do-keyed");
EXT(YcompilerSastYconstant_value,"compiler/ast","constant-value");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YcompilerSastYset_module_environments,"compiler/ast","set-module-environments");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YcompilerSastYfunction_free,"compiler/ast","function-free");
EXT(YLpropG,"runtime/boot","<prop>");
EXT(YcompilerSastYsequentialize,"compiler/ast","sequentialize");
EXT(YcompilerSastYlocals_functions,"compiler/ast","locals-functions");
EXT(YgooScollectionsSrangeYLrangeG,"goo/collections/range","<range>");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScollectionsSbufferYpush_lastX,"goo/collections/buffer","push-last!");
EXT(YgooScollectionsScollectionYelts,"goo/collections/collection","elts");
DEF(YcompilerSast_linearizeYsplit_program,"compiler/ast-linearize","split-program");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScollectionsSsequenceYcat2,"goo/collections/sequence","cat2");
EXT(YgooScollectionsSstepYLstepG,"goo/collections/step","<step>");
EXT(YLgenG,"runtime/boot","<gen>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YruntimeSruntimeYLerrorG,"runtime/runtime","<error>");
EXT(YgooScollectionsSlistYlist,"goo/collections/list","list");
EXT(Ygen_src,"runtime/boot","gen-src");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YcompilerSastYcompile_time_program,"compiler/ast","compile-time-program");
DEF(YcompilerSast_linearizeYdo_do_call_upgradesX,"compiler/ast-linearize","do-do-call-upgrades!");
EXT(Yobject_props,"runtime/boot","object-props");
EXT(YisaQ,"runtime/boot","isa?");
EXT(YcompilerSastYLcompile_timeG,"compiler/ast","<compile-time>");
EXT(YcompilerSastYLmonitorG,"compiler/ast","<monitor>");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScollectionsSstringYnum_to_str_base,"goo/collections/string","num-to-str-base");
EXT(YgooScollectionsSlistYpop,"goo/collections/list","pop");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YcompilerSastYfunction_source_setter,"compiler/ast","function-source-setter");
EXT(YcompilerSastYLmodule_binding_referenceG,"compiler/ast","<module-binding-reference>");
EXT(YcompilerSastYLruntime_referenceG,"compiler/ast","<runtime-reference>");
EXT(YgooScollectionsScollectionYmemQ,"goo/collections/collection","mem?");
EXT(YcompilerSastYfix_let_types_setter,"compiler/ast","fix-let-types-setter");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YruntimeSruntimeYlist_handlers,"runtime/runtime","list-handlers");
EXT(YPvnul,"runtime/boot","%vnul");
DEF(YcompilerSast_linearizeYprogram_form_setter,"compiler/ast-linearize","program-form-setter");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YcompilerSastYsignature_names,"compiler/ast","signature-names");
EXT(YruntimeSruntimeYalways,"runtime/runtime","always");
EXT(YcompilerSastYLlocalsG,"compiler/ast","<locals>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_42);
DEFLIT(lit_96);
DEFLIT(lit_34);
DEFLIT(lit_73);
DEFLIT(lit_89);
DEFLIT(lit_37);
DEFLIT(lit_46);
DEFLIT(lit_107);
DEFLIT(lit_84);
DEFLIT(lit_80);
DEFLIT(lit_58);
DEFLIT(lit_95);
DEFLIT(lit_103);
DEFLIT(lit_79);
DEFLIT(lit_28);
DEFLIT(lit_29);
DEFLIT(lit_16);
DEFLIT(lit_115);
DEFLIT(lit_64);
DEFLIT(lit_94);
DEFLIT(lit_38);
DEFLIT(lit_86);
DEFLIT(lit_69);
DEFLIT(lit_32);
DEFLIT(lit_21);
DEFLIT(lit_18);
DEFLIT(lit_13);
DEFLIT(lit_66);
DEFLIT(lit_43);
DEFLIT(lit_98);
DEFLIT(lit_88);
DEFLIT(lit_31);
DEFLIT(lit_102);
DEFLIT(lit_119);
DEFLIT(lit_87);
DEFLIT(lit_47);
DEFLIT(lit_116);
DEFLIT(lit_72);
DEFLIT(lit_99);
DEFLIT(lit_4);
DEFLIT(lit_19);
DEFLIT(lit_53);
DEFLIT(lit_25);
DEFLIT(lit_59);
DEFLIT(lit_83);
DEFLIT(lit_111);
DEFLIT(lit_81);
DEFLIT(lit_65);
DEFLIT(lit_100);
DEFLIT(lit_75);
DEFLIT(lit_93);
DEFLIT(lit_110);
DEFLIT(lit_97);
DEFLIT(lit_109);
DEFLIT(lit_8);
DEFLIT(lit_60);
DEFLIT(lit_113);
DEFLIT(lit_7);
DEFLIT(lit_112);
DEFLIT(lit_30);
DEFLIT(lit_26);
DEFLIT(lit_67);
DEFLIT(lit_61);
DEFLIT(lit_105);
DEFLIT(lit_85);
DEFLIT(lit_54);
DEFLIT(lit_50);
DEFLIT(lit_24);
DEFLIT(lit_49);
DEFLIT(lit_57);
DEFLIT(lit_6);
DEFLIT(lit_0);
DEFLIT(lit_11);
DEFLIT(lit_74);
DEFLIT(lit_82);
DEFLIT(lit_51);
DEFLIT(lit_76);
DEFLIT(lit_52);
DEFLIT(lit_20);
DEFLIT(lit_35);
DEFLIT(lit_70);
DEFLIT(lit_9);
DEFLIT(lit_90);
DEFLIT(lit_17);
DEFLIT(lit_22);
DEFLIT(lit_78);
DEFLIT(lit_101);
DEFLIT(lit_106);
DEFLIT(lit_15);
DEFLIT(lit_62);
DEFLIT(lit_48);
DEFLIT(lit_120);
DEFLIT(lit_68);
DEFLIT(lit_108);
DEFLIT(lit_104);
DEFLIT(lit_14);
DEFLIT(lit_44);
DEFLIT(lit_121);
DEFLIT(lit_117);
DEFLIT(lit_33);
DEFLIT(lit_56);
DEFLIT(lit_77);
DEFLIT(lit_63);
DEFLIT(lit_39);
DEFLIT(lit_12);
DEFLIT(lit_10);
DEFLIT(lit_114);
DEFLIT(lit_92);
DEFLIT(lit_1);
DEFLIT(lit_55);
DEFLIT(lit_3);
DEFLIT(lit_71);
DEFLIT(lit_91);
DEFLIT(lit_36);
DEFLIT(lit_27);
DEFLIT(lit_2);
DEFLIT(lit_45);
DEFLIT(lit_40);
DEFLIT(lit_23);
DEFLIT(lit_118);
DEFLIT(lit_5);
DEFLIT(lit_41);
DEFLIT(lit_122);

/* FUNCTIONS: */

LOCFOR(fun_assoc_key_0);
LOCFOR(fun_assoc_key_setter_1);
LOCFOR(fun_assoc_value_2);
LOCFOR(fun_assoc_value_setter_3);
FUNFOR(YcompilerSast_linearizeYassoc);
LOCFOR(fun_assocq_5);
LOCFOR(fun_x_1416_6);
LOCFOR(fun_update_walkX_7);
LOCFOR(fun_x_1418_8);
LOCFOR(fun_ast_walk_9);
LOCFOR(fun_box_reference_10);
LOCFOR(fun_box_reference_setter_11);
LOCFOR(fun_box_reference_12);
LOCFOR(fun_box_reference_setter_13);
LOCFOR(fun_box_form_14);
LOCFOR(fun_box_form_setter_15);
LOCFOR(fun_box_reference_16);
LOCFOR(fun_box_reference_setter_17);
LOCFOR(fun_insert_boxX_18);
LOCFOR(fun_insert_boxX_19);
LOCFOR(fun_insert_boxX_20);
LOCFOR(fun_insert_boxX_21);
LOCFOR(fun_insert_boxX_22);
LOCFOR(fun_insert_boxX_23);
LOCFOR(fun_loop_24);
LOCFOR(fun_boxify_mutable_bindings_25);
LOCFOR(fun_do_do_call_referencesX_26);
LOCFOR(fun_do_call_referencesX_27);
LOCFOR(fun_do_call_referencesX_28);
LOCFOR(fun_analyze_call_references_29);
LOCFOR(fun_do_do_dynamic_extentX_30);
LOCFOR(fun_do_dynamic_extentX_31);
LOCFOR(fun_do_dynamic_extentX_32);
LOCFOR(fun_analyze_dynamic_extent_33);
LOCFOR(fun_do_do_call_upgradesX_34);
LOCFOR(fun_do_call_upgradesX_35);
LOCFOR(fun_unconstrained_typeQ_36);
LOCFOR(fun_unconstrained_typeQ_37);
LOCFOR(fun_unconstrained_typeQ_38);
LOCFOR(fun_do_call_upgradesX_39);
LOCFOR(fun_analyze_calls_40);
LOCFOR(fun_reference_offset_41);
LOCFOR(fun_reference_offset_setter_42);
LOCFOR(fun_reference_selfQ_43);
LOCFOR(fun_reference_selfQ_setter_44);
LOCFOR(fun_liftX_45);
LOCFOR(fun_lift_proceduresX_46);
LOCFOR(fun_lift_proceduresX_47);
LOCFOR(fun_add_48);
LOCFOR(fun_check_49);
LOCFOR(fun_adjoin_free_bindingX_50);
LOCFOR(fun_lift_proceduresX_51);
LOCFOR(fun_lift_proceduresX_52);
LOCFOR(fun_lift_proceduresX_53);
LOCFOR(fun_lift_proceduresX_54);
LOCFOR(fun_lift_proceduresX_55);
LOCFOR(fun_program_form_56);
LOCFOR(fun_program_form_setter_57);
LOCFOR(fun_program_quotations_58);
LOCFOR(fun_program_quotations_setter_59);
LOCFOR(fun_60);
LOCFOR(fun_program_definitions_61);
LOCFOR(fun_program_definitions_setter_62);
LOCFOR(fun_63);
LOCFOR(fun_form_program_64);
LOCFOR(fun_form_program_setter_65);
LOCFOR(fun_form_quotations_66);
LOCFOR(fun_form_quotations_setter_67);
LOCFOR(fun_68);
LOCFOR(fun_form_definitions_69);
LOCFOR(fun_form_definitions_setter_70);
LOCFOR(fun_71);
LOCFOR(fun_closure_creation_index_72);
LOCFOR(fun_closure_creation_index_setter_73);
LOCFOR(fun_closure_creation_free_74);
LOCFOR(fun_closure_creation_free_setter_75);
LOCFOR(fun_flatten_seqs_76);
LOCFOR(fun_inner_77);
LOCFOR(fun_loop_78);
LOCFOR(fun_flatten_seqs_79);
LOCFOR(fun_80);
LOCFOR(fun_as_top_level_forms_81);
LOCFOR(fun_82);
LOCFOR(fun_extract_thingsX_83);
LOCFOR(fun_extractX_84);
LOCFOR(fun_extractX_85);
LOCFOR(fun_extractX_86);
LOCFOR(fun_87);
LOCFOR(fun_extractX_88);
LOCFOR(fun_extractX_89);
LOCFOR(fun_adjoin_definitionX_90);
LOCFOR(fun_split_program_91);
LOCFOR(fun_inner_92);
LOCFOR(fun_loop_93);
LOCFOR(fun_split_program_94);
LOCFOR(fun_loop_95);
LOCFOR(fun_closurize_mainX_96);
LOCFOR(fun_97);
LOCFOR(fun_gather_temporariesX_98);
LOCFOR(fun_collect_temporariesX_99);
LOCFOR(fun_collect_temporariesX_100);
LOCFOR(fun_collect_temporariesX_101);
LOCFOR(fun_collect_temporariesX_102);
LOCFOR(fun_adjoin_103);
LOCFOR(fun_adjoin_temporary_variablesX_104);
LOCFOR(fun_binding_index_105);
LOCFOR(fun_binding_index_setter_106);
LOCFOR(fun_new_renamed_binding_107);
LOCFOR(fun_108);
LOCFOR(fun_109);
LOCFOR(fun_110);
LOCFOR(fun_register_allocateX_111);
LOCFOR(fun_allocate_register_112);
LOCFOR(fun_collect_registersX_113);
LOCFOR(fun_loop_114);
LOCFOR(fun_collect_registersX_115);
LOCFOR(fun_collect_registersX_116);
LOCFOR(fun_117);
LOCFOR(fun_collect_registersX_118);
LOCFOR(fun_collect_registersX_119);
LOCFOR(fun_collect_registersX_120);
LOCFOR(fun_ast_contains_funQ_121);
LOCFOR(fun_walk_122);
LOCFOR(fun_123);
LOCFOR(fun_ast_contains_funQ_124);
extern P YcompilerSast_linearizeY___main_0___ ();
extern P YcompilerSast_linearizeY___main_1___ ();
extern P YcompilerSast_linearizeY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_assoc_key_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcompilerSast_linearizeYassoc_key));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assoc_key_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcompilerSast_linearizeYassoc_key));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assoc_value_2) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcompilerSast_linearizeYassoc_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assoc_value_setter_3) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcompilerSast_linearizeYassoc_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YcompilerSast_linearizeYassoc) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(YcompilerSast_linearizeYLassocG),VARREF(YcompilerSast_linearizeYassoc_key),x_,VARREF(YcompilerSast_linearizeYassoc_value),y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_assocq_5) {
  P x_,l_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(l_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),l_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T5 = CALL1(1,VARREF(Yhead),l_);
    T4 = CALL1(1,VARREF(YcompilerSast_linearizeYassoc_key),T5);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),x_,T4);
    if (T3 != YPfalse) {
      T6 = CALL1(1,VARREF(Yhead),l_);
      T2 = T6;
    } else {
      T8 = CALL1(1,VARREF(Ytail),l_);
      T7 = CALL2(1,VARREF(YcompilerSast_linearizeYassocq),x_,T8);
      T2 = T7;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1416_6) {
  P x_1415_;
  P xF1797;
  P setterF1796;
  P getterF1795;
  P propF1794;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1415_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1415_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1415_);
    propF1794 = T4;
    T6 = CALL1(1,VARREF(Yprop_getter),propF1794);
    getterF1795 = T6;
    T8 = CALL1(1,VARREF(Yprop_setter),propF1794);
    setterF1796 = T8;
    T10 = CALL2(1,VARREF(YgooSmacrosYEE),getterF1795,VARREF(YcompilerSastYbinding_value));
    T9 = CALL1(1,VARREF(Ynot),T10);
    if (T9 != YPfalse) {
      T12 = CALL2(1,VARREF(Yprop_boundQ),FREEREF(0),getterF1795);
      if (T12 != YPfalse) {
        T14 = CALL1(1,getterF1795,FREEREF(0));
        xF1797 = T14;
        T16 = CALL2(1,VARREF(YisaQ),xF1797,VARREF(YcompilerSastYLprogramG));
        if (T16 != YPfalse) {
          T18 = CALLN(1,VARREF(YgooSmacrosYnapp),4,FREEREF(1),YPfalse,xF1797,FREEREF(2));
          T17 = CALL2(1,setterF1796,T18,FREEREF(0));
          T15 = T17;
        } else {
          T15 = YPfalse;
        }
        T13 = T15;
        T11 = T13;
      } else {
        T11 = YPfalse;
      }
    } else {
    }
    T20 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1415_);
    a1 = T20;
    x_1415_ = a1;
    goto loop;
    T7 = T19;
    T5 = T7;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_update_walkX_7) {
  P g_,o_,args_;
  P x_1416F1798;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
loop:
  T0 = FUNSHELL(1,fun_x_1416_6,4);
  x_1416F1798 = T0;
  FUNINIT(x_1416F1798, 4,o_,g_,args_,x_1416F1798);
  T3 = CALL1(1,VARREF(Yobject_props),o_);
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T3);
  T1 = CALL1(0,x_1416F1798,T2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_x_1418_8) {
  P x_1417_;
  P xF1801;
  P getterF1800;
  P propF1799;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1417_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1417_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1417_);
    propF1799 = T4;
    T6 = CALL1(1,VARREF(Yprop_getter),propF1799);
    getterF1800 = T6;
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),getterF1800,VARREF(YcompilerSastYbinding_value));
    T7 = CALL1(1,VARREF(Ynot),T8);
    if (T7 != YPfalse) {
      T10 = CALL2(1,VARREF(Yprop_boundQ),FREEREF(0),getterF1800);
      if (T10 != YPfalse) {
        T12 = CALL1(1,getterF1800,FREEREF(0));
        xF1801 = T12;
        T14 = CALL2(1,VARREF(YisaQ),xF1801,VARREF(YcompilerSastYLprogramG));
        if (T14 != YPfalse) {
          T15 = CALLN(1,VARREF(YgooSmacrosYnapp),4,FREEREF(1),YPfalse,xF1801,FREEREF(2));
          T13 = T15;
        } else {
          T13 = YPfalse;
        }
        T11 = T13;
        T9 = T11;
      } else {
        T9 = YPfalse;
      }
    } else {
    }
    T17 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1417_);
    a1 = T17;
    x_1417_ = a1;
    goto loop;
    T5 = T16;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_walk_9) {
  P g_,o_,args_;
  P x_1418F1802;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
loop:
  T0 = FUNSHELL(1,fun_x_1418_8,4);
  x_1418F1802 = T0;
  FUNINIT(x_1418F1802, 4,o_,g_,args_,x_1418F1802);
  T3 = CALL1(1,VARREF(Yobject_props),o_);
  T2 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T3);
  T1 = CALL1(0,x_1418F1802,T2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_box_reference_10) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcompilerSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_setter_11) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcompilerSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_12) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcompilerSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_setter_13) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcompilerSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_form_14) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcompilerSast_linearizeYbox_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_form_setter_15) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcompilerSast_linearizeYbox_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_16) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcompilerSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_setter_17) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcompilerSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_18) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL2(1,VARREF(YcompilerSast_linearizeYupdate_walkX),VARREF(YcompilerSast_linearizeYinsert_boxX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_19) {
  P o_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T2 = CALL1(1,VARREF(YcompilerSastYreference_binding),o_);
  T1 = CALL1(1,VARREF(YcompilerSastYbinding_mutableQ),T2);
  if (T1 != YPfalse) {
    T3 = CALL3(1,VARREF(Ynew),VARREF(YcompilerSast_linearizeYLbox_readG),VARREF(YcompilerSast_linearizeYbox_reference),o_);
    T0 = T3;
  } else {
    T0 = o_;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_20) {
  P o_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYassignment_reference),o_);
  T3 = CALL1(1,VARREF(YcompilerSastYassignment_form),o_);
  T2 = CALL1(1,VARREF(YcompilerSast_linearizeYinsert_boxX),T3);
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(YcompilerSast_linearizeYLbox_writeG),VARREF(YcompilerSast_linearizeYbox_reference),T1,VARREF(YcompilerSast_linearizeYbox_form),T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_21) {
  P o_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T2 = CALL1(1,VARREF(YcompilerSastYfunction_body),o_);
  T3 = CALL1(1,VARREF(YcompilerSastYfunction_bindings),o_);
  T1 = CALL2(1,VARREF(YcompilerSast_linearizeYboxify_mutable_bindings),T2,T3);
  T0 = CALL1(1,VARREF(YcompilerSast_linearizeYinsert_boxX),T1);
  CALL2(1,VARREF(YcompilerSastYfunction_body_setter),T0,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_insert_boxX_22) {
  P o_;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYfix_let_arguments),o_);
  T0 = CALL1(1,VARREF(YcompilerSast_linearizeYinsert_boxX),T1);
  CALL2(1,VARREF(YcompilerSastYfix_let_arguments_setter),T0,o_);
  T4 = CALL1(1,VARREF(YcompilerSastYfix_let_body),o_);
  T5 = CALL1(1,VARREF(YcompilerSastYfix_let_bindings),o_);
  T3 = CALL2(1,VARREF(YcompilerSast_linearizeYboxify_mutable_bindings),T4,T5);
  T2 = CALL1(1,VARREF(YcompilerSast_linearizeYinsert_boxX),T3);
  CALL2(1,VARREF(YcompilerSastYfix_let_body_setter),T2,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_insert_boxX_23) {
  P o_;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYlocals_functions),o_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YcompilerSast_linearizeYinsert_boxX),T1);
  CALL2(1,VARREF(YcompilerSastYlocals_functions_setter),T0,o_);
  T4 = CALL1(1,VARREF(YcompilerSastYlocals_body),o_);
  T5 = CALL1(1,VARREF(YcompilerSastYlocals_bindings),o_);
  T3 = CALL2(1,VARREF(YcompilerSast_linearizeYboxify_mutable_bindings),T4,T5);
  T2 = CALL1(1,VARREF(YcompilerSast_linearizeYinsert_boxX),T3);
  CALL2(1,VARREF(YcompilerSastYlocals_body_setter),T2,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_loop_24) {
  P res_,bindings_;
  P creatorF1804;
  P bindingF1803;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(bindings_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindings_);
  if (T1 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmacrosYpair),FREEREF(0),res_);
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),T3);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yhead),bindings_);
    bindingF1803 = T5;
    T7 = CALL1(1,VARREF(YcompilerSastYbinding_mutableQ),bindingF1803);
    if (T7 != YPfalse) {
      T10 = CALL3(1,VARREF(Ynew),VARREF(YcompilerSastYLlocal_referenceG),VARREF(YcompilerSastYreference_binding),bindingF1803);
      T9 = CALL3(1,VARREF(Ynew),VARREF(YcompilerSast_linearizeYLbox_creationG),VARREF(YcompilerSast_linearizeYbox_reference),T10);
      creatorF1804 = T9;
      T12 = CALL2(1,VARREF(YgooSmacrosYpair),creatorF1804,res_);
      T13 = CALL1(1,VARREF(Ytail),bindings_);
      a1 = T12;
      a2 = T13;
      res_ = a1;
      bindings_ = a2;
      goto loop;
      T8 = T11;
      T6 = T8;
    } else {
      T15 = CALL1(1,VARREF(Ytail),bindings_);
      a1 = res_;
      a2 = T15;
      res_ = a1;
      bindings_ = a2;
      goto loop;
      T6 = T14;
    }
    T4 = T6;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_boxify_mutable_bindings_25) {
  P form_,bindings_;
  P loopF1805;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(form_, 0);
  ARG(bindings_, 1);
loop:
  T2 = FUNSHELL(1,fun_loop_24,2);
  loopF1805 = T2;
  FUNINIT(loopF1805, 2,form_,loopF1805);
  T3 = CALL2(0,loopF1805,Ynil,bindings_);
  T1 = T3;
  T0 = CALL1(1,VARREF(YcompilerSastYsequentialize),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_do_call_referencesX_26) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL2(1,VARREF(YcompilerSast_linearizeYupdate_walkX),VARREF(YcompilerSast_linearizeYdo_call_referencesX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_call_referencesX_27) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,VARREF(YcompilerSast_linearizeYdo_do_call_referencesX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_call_referencesX_28) {
  P o_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  CALL1(1,VARREF(YcompilerSast_linearizeYdo_do_call_referencesX),o_);
  T1 = CALL1(1,VARREF(YcompilerSastYapplication_function),o_);
  T0 = CALL2(1,VARREF(YisaQ),T1,VARREF(YcompilerSastYLlocal_referenceG));
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(YcompilerSastYapplication_function),o_);
    T2 = CALL2(1,VARREF(YcompilerSastYreference_called_functionQ_setter),YPtrue,T3);
  } else {
  }
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_analyze_call_references_29) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,VARREF(YcompilerSast_linearizeYdo_call_referencesX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_do_dynamic_extentX_30) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL2(1,VARREF(YcompilerSast_linearizeYupdate_walkX),VARREF(YcompilerSast_linearizeYdo_dynamic_extentX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_dynamic_extentX_31) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,VARREF(YcompilerSast_linearizeYdo_do_dynamic_extentX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_dynamic_extentX_32) {
  P o_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  CALL1(1,VARREF(YcompilerSast_linearizeYdo_do_dynamic_extentX),o_);
  T1 = CALL1(1,VARREF(YcompilerSastYreference_called_functionQ),o_);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(YcompilerSastYreference_binding),o_);
    T2 = CALL2(1,VARREF(YcompilerSastYbinding_dynamic_extentQ_setter),YPfalse,T3);
  } else {
  }
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_analyze_dynamic_extent_33) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  CALL1(1,VARREF(YcompilerSast_linearizeYanalyze_call_references),o_);
  T0 = CALL1(1,VARREF(YcompilerSast_linearizeYdo_dynamic_extentX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_do_call_upgradesX_34) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL2(1,VARREF(YcompilerSast_linearizeYupdate_walkX),VARREF(YcompilerSast_linearizeYdo_call_upgradesX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_call_upgradesX_35) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,VARREF(YcompilerSast_linearizeYdo_do_call_upgradesX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_unconstrained_typeQ_36) {
  P b_;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_unconstrained_typeQ_37) {
  P b_;
  P tmpF1806;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T2 = CALL1(1,VARREF(YcompilerSastYbinding_module_name),b_);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,LITREF(lit_44));
  tmpF1806 = T1;
  if (tmpF1806 != YPfalse) {
    T5 = CALL1(1,VARREF(YcompilerSastYbinding_name),b_);
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,LITREF(lit_45));
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_unconstrained_typeQ_38) {
  P o_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYreference_binding),o_);
  T0 = CALL1(1,VARREF(YcompilerSast_linearizeYunconstrained_typeQ),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_do_call_upgradesX_39) {
  P o_;
  P tmpF1811;
  P tmpF1810;
  P tmpF1809;
  P tmpF1808;
  P metF1807;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  CALL1(1,VARREF(YcompilerSast_linearizeYdo_do_call_upgradesX),o_);
  T1 = CALL1(1,VARREF(YcompilerSastYapplication_function),o_);
  T0 = CALL2(1,VARREF(YisaQ),T1,VARREF(YcompilerSastYLlocal_referenceG));
  if (T0 != YPfalse) {
    T5 = CALL1(1,VARREF(YcompilerSastYapplication_function),o_);
    T4 = CALL1(1,VARREF(YcompilerSastYreference_binding),T5);
    T3 = CALL1(1,VARREF(YcompilerSastYbinding_value),T4);
    metF1807 = T3;
    T8 = CALL2(1,VARREF(YisaQ),metF1807,VARREF(YcompilerSastYLast_functionG));
    tmpF1808 = T8;
    if (tmpF1808 != YPfalse) {
      T12 = CALL2(1,VARREF(YruntimeSruntimeYcompose),VARREF(YcompilerSast_linearizeYunconstrained_typeQ),VARREF(YcompilerSastYbinding_type));
      T13 = CALL1(1,VARREF(YcompilerSastYfunction_bindings),metF1807);
      T11 = CALL2(1,VARREF(YgooScollectionsScollectionYallQ),T12,T13);
      tmpF1809 = T11;
      if (tmpF1809 != YPfalse) {
        T17 = CALL1(1,VARREF(YcompilerSastYfunction_value),metF1807);
        T16 = CALL1(1,VARREF(YcompilerSast_linearizeYunconstrained_typeQ),T17);
        tmpF1810 = T16;
        if (tmpF1810 != YPfalse) {
          T21 = CALL1(1,VARREF(YcompilerSastYfunction_naryQ),metF1807);
          T20 = CALL1(1,VARREF(Ynot),T21);
          tmpF1811 = T20;
          if (tmpF1811 != YPfalse) {
            T25 = CALL1(1,VARREF(YcompilerSastYapplication_arguments),o_);
            T24 = CALL1(1,VARREF(YgooStypesYlen),T25);
            T27 = CALL1(1,VARREF(YcompilerSastYfunction_bindings),metF1807);
            T26 = CALL1(1,VARREF(YgooStypesYlen),T27);
            T23 = CALL2(1,VARREF(YgooSmathYE),T24,T26);
            T22 = T23;
          } else {
            T22 = YPfalse;
          }
          T19 = T22;
          T18 = T19;
        } else {
          T18 = YPfalse;
        }
        T15 = T18;
        T14 = T15;
      } else {
        T14 = YPfalse;
      }
      T10 = T14;
      T9 = T10;
    } else {
      T9 = YPfalse;
    }
    T7 = T9;
    if (T7 != YPfalse) {
      T28 = CALL2(1,VARREF(YcompilerSastYapplication_knownQ_setter),YPtrue,o_);
      T6 = T28;
    } else {
      T6 = YPfalse;
    }
    T2 = T6;
  } else {
  }
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_analyze_calls_40) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,VARREF(YcompilerSast_linearizeYdo_call_upgradesX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_offset_41) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcompilerSast_linearizeYreference_offset));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_offset_setter_42) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcompilerSast_linearizeYreference_offset));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_selfQ_43) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcompilerSast_linearizeYreference_selfQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_selfQ_setter_44) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcompilerSast_linearizeYreference_selfQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_liftX_45) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL3(1,VARREF(YcompilerSast_linearizeYlift_proceduresX),o_,YPfalse,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_46) {
  P o_,flat_fun_,bindings_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T0 = CALLN(1,VARREF(YcompilerSast_linearizeYupdate_walkX),4,VARREF(YcompilerSast_linearizeYlift_proceduresX),o_,flat_fun_,bindings_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_47) {
  P o_,flat_fun_,bindings_;
  P offsetF1813;
  P bF1812;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYreference_binding),o_);
  bF1812 = T1;
  T3 = CALL2(1,VARREF(YgooScollectionsScollectionYmemQ),bindings_,bF1812);
  if (T3 != YPfalse) {
    T2 = o_;
  } else {
    T5 = CALL2(1,VARREF(YcompilerSast_linearizeYadjoin_free_bindingX),flat_fun_,o_);
    offsetF1813 = T5;
    T8 = CALL1(1,VARREF(YcompilerSastYreference_binding),o_);
    T9 = CALL1(1,VARREF(YcompilerSastYfunction_binding),flat_fun_);
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),T8,T9);
    T6 = CALLN(1,VARREF(Ynew),7,VARREF(YcompilerSast_linearizeYLfree_referenceG),VARREF(YcompilerSastYreference_binding),bF1812,VARREF(YcompilerSast_linearizeYreference_offset),offsetF1813,VARREF(YcompilerSast_linearizeYreference_selfQ),T7);
    T4 = T6;
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_add_48) {
  P freeT_;
  P tailF1814;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(freeT_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),freeT_);
  tailF1814 = T1;
  T3 = CALL1(1,VARREF(YgooSmacrosYemptyQ),tailF1814);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Ytail_setter),FREEREF(0),freeT_);
    T2 = T4;
  } else {
    a1 = tailF1814;
    freeT_ = a1;
    goto loop;
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_check_49) {
  P i_,freeT_;
  P addF1816;
  P new_envF1815;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(freeT_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),freeT_);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScollectionsScollectionYempty),VARREF(YcompilerSastYLfree_environmentG));
    T3 = CALL2(1,VARREF(YcompilerSastYfree_environment),FREEREF(0),T4);
    new_envF1815 = T3;
    T6 = CALL1(1,VARREF(YcompilerSastYfunction_free),FREEREF(1));
    T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T6);
    if (T5 != YPfalse) {
      T7 = CALL2(1,VARREF(YcompilerSastYfunction_free_setter),new_envF1815,FREEREF(1));
    } else {
      T9 = FUNSHELL(1,fun_add_48,2);
      addF1816 = T9;
      FUNINIT(addF1816, 2,new_envF1815,addF1816);
      T11 = CALL1(1,VARREF(YcompilerSastYfunction_free),FREEREF(1));
      T10 = CALL1(0,addF1816,T11);
      T8 = T10;
    }
    T2 = i_;
    T0 = T2;
  } else {
    T14 = CALL1(1,VARREF(YcompilerSastYreference_binding),FREEREF(0));
    T16 = CALL1(1,VARREF(Yhead),freeT_);
    T15 = CALL1(1,VARREF(YcompilerSastYreference_binding),T16);
    T13 = CALL2(1,VARREF(YgooSmacrosYEE),T14,T15);
    if (T13 != YPfalse) {
      T12 = i_;
    } else {
      T18 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      T19 = CALL1(1,VARREF(Ytail),freeT_);
      a1 = T18;
      a2 = T19;
      i_ = a1;
      freeT_ = a2;
      goto loop;
      T12 = T17;
    }
    T0 = T12;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_free_bindingX_50) {
  P flat_fun_,ref_;
  P checkF1817;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(flat_fun_, 0);
  ARG(ref_, 1);
loop:
  T1 = FUNSHELL(1,fun_check_49,3);
  checkF1817 = T1;
  FUNINIT(checkF1817, 3,ref_,flat_fun_,checkF1817);
  T3 = CALL1(1,VARREF(YcompilerSastYfunction_free),flat_fun_);
  T2 = CALL2(1,checkF1817,YPint((P)0),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_51) {
  P o_,flat_fun_,bindings_;
  P new_bindingsF1818;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYfix_let_arguments),o_);
  T0 = CALL3(1,VARREF(YcompilerSast_linearizeYlift_proceduresX),T1,flat_fun_,bindings_);
  CALL2(1,VARREF(YcompilerSastYfix_let_arguments_setter),T0,o_);
  T4 = CALL1(1,VARREF(YcompilerSastYfix_let_bindings),o_);
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),T4,bindings_);
  new_bindingsF1818 = T3;
  T6 = CALL1(1,VARREF(YcompilerSastYfix_let_body),o_);
  T5 = CALL3(1,VARREF(YcompilerSast_linearizeYlift_proceduresX),T6,flat_fun_,new_bindingsF1818);
  CALL2(1,VARREF(YcompilerSastYfix_let_body_setter),T5,o_);
  T2 = o_;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_lift_proceduresX_52) {
  P o_,flat_fun_,bindings_;
  P new_bindingsF1819;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T2 = CALL1(1,VARREF(YcompilerSastYlocals_bindings),o_);
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),T2,bindings_);
  new_bindingsF1819 = T1;
  T4 = CALL3(1,VARREF(YruntimeSruntimeYrcurry),VARREF(YcompilerSast_linearizeYlift_proceduresX),flat_fun_,new_bindingsF1819);
  T5 = CALL1(1,VARREF(YcompilerSastYlocals_functions),o_);
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),T4,T5);
  CALL2(1,VARREF(YcompilerSastYlocals_functions_setter),T3,o_);
  T7 = CALL1(1,VARREF(YcompilerSastYlocals_body),o_);
  T6 = CALL3(1,VARREF(YcompilerSast_linearizeYlift_proceduresX),T7,flat_fun_,new_bindingsF1819);
  CALL2(1,VARREF(YcompilerSastYlocals_body_setter),T6,o_);
  T0 = o_;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_53) {
  P o_,flat_fun_,bindings_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYfunction_body),o_);
  T2 = CALL1(1,VARREF(YcompilerSastYfunction_bindings),o_);
  T0 = CALL3(1,VARREF(YcompilerSast_linearizeYlift_proceduresX),T1,YPfalse,T2);
  CALL2(1,VARREF(YcompilerSastYfunction_body_setter),T0,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_lift_proceduresX_54) {
  P o_,flat_fun_,bindings_;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_lift_proceduresX_55) {
  P o_,flat_fun_,bindings_;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYfunction_body),o_);
  T2 = CALL1(1,VARREF(YcompilerSastYfunction_bindings),o_);
  T0 = CALL3(1,VARREF(YcompilerSast_linearizeYlift_proceduresX),T1,o_,T2);
  CALL2(1,VARREF(YcompilerSastYfunction_body_setter),T0,o_);
  T4 = CALL1(1,VARREF(YcompilerSastYfunction_free),o_);
  T3 = CALL3(1,VARREF(YcompilerSast_linearizeYlift_proceduresX),T4,flat_fun_,bindings_);
  CALL2(1,VARREF(YcompilerSastYfunction_free_setter),T3,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_program_form_56) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcompilerSast_linearizeYprogram_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_form_setter_57) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcompilerSast_linearizeYprogram_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_quotations_58) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcompilerSast_linearizeYprogram_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_quotations_setter_59) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcompilerSast_linearizeYprogram_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_60) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScollectionsScollectionYfab),VARREF(YgooScollectionsScollectionYLtabG),YPint((P)40));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_definitions_61) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcompilerSast_linearizeYprogram_definitions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_definitions_setter_62) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcompilerSast_linearizeYprogram_definitions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_63) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_form_program_64) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcompilerSast_linearizeYform_program));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_program_setter_65) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcompilerSast_linearizeYform_program));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_quotations_66) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcompilerSast_linearizeYform_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_quotations_setter_67) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcompilerSast_linearizeYform_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_68) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_form_definitions_69) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcompilerSast_linearizeYform_definitions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_definitions_setter_70) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcompilerSast_linearizeYform_definitions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_71) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_closure_creation_index_72) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcompilerSast_linearizeYclosure_creation_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closure_creation_index_setter_73) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcompilerSast_linearizeYclosure_creation_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closure_creation_free_74) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcompilerSast_linearizeYclosure_creation_free));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closure_creation_free_setter_75) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcompilerSast_linearizeYclosure_creation_free));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_flatten_seqs_76) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,VARREF(Ylst),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_inner_77) {
  P ss_,r_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(ss_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),ss_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Ytail),FREEREF(1));
    T2 = CALL2(0,FREEREF(0),T3,r_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Ytail),ss_);
    T7 = CALL1(1,VARREF(Yhead),ss_);
    T6 = CALL2(1,VARREF(YgooSmacrosYpair),T7,r_);
    a1 = T5;
    a2 = T6;
    ss_ = a1;
    r_ = a2;
    goto loop;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_78) {
  P s_,r_;
  P innerF1820;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),s_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),r_);
    T0 = T2;
  } else {
    T4 = FUNSHELL(1,fun_inner_77,3);
    innerF1820 = T4;
    FUNINIT(innerF1820, 3,FREEREF(0),s_,innerF1820);
    T7 = CALL1(1,VARREF(Yhead),s_);
    T6 = CALL1(1,VARREF(YcompilerSast_linearizeYflatten_seqs),T7);
    T5 = CALL2(0,innerF1820,T6,r_);
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_flatten_seqs_79) {
  P o_;
  P loopF1821;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_78,1);
  loopF1821 = T1;
  FUNINIT(loopF1821, 1,loopF1821);
  T2 = CALL2(0,loopF1821,o_,Ynil);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_80) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(YcompilerSast_linearizeYLtop_level_formG),VARREF(YcompilerSast_linearizeYform_program),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_top_level_forms_81) {
  P programs_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(programs_, 0);
loop:
  T1 = fun_80;
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,programs_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_82) {
  P form_;
  P T0;
  P a1;
LINK_STACK();
  ARG(form_, 0);
loop:
  T0 = CALL3(1,VARREF(YcompilerSast_linearizeYextractX),form_,form_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extract_thingsX_83) {
  P o_;
  P resultF1823;
  P formsF1822;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T2 = CALL1(1,VARREF(YcompilerSast_linearizeYflatten_seqs),o_);
  T1 = CALL1(1,VARREF(YcompilerSast_linearizeYas_top_level_forms),T2);
  formsF1822 = T1;
  T4 = CALL1(1,VARREF(Ynew),VARREF(YcompilerSast_linearizeYLflattened_programG));
  resultF1823 = T4;
  T7 = FUNFAB(fun_82,1,resultF1823);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),T7,formsF1822);
  T5 = CALL1(1,VARREF(YcompilerSastYsequentialize),T6);
  CALL2(1,VARREF(YcompilerSast_linearizeYprogram_form_setter),T5,resultF1823);
  T3 = resultF1823;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_84) {
  P o_,form_,result_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T0 = CALLN(1,VARREF(YcompilerSast_linearizeYupdate_walkX),4,VARREF(YcompilerSast_linearizeYextractX),o_,form_,result_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_85) {
  P o_,form_,result_;
  P x_1419F1833;
  P qbF1832;
  P probeF1831;
  P indexF1830;
  P qbTF1829;
  P tmpF1828;
  P tmpF1827;
  P tmpF1826;
  P tmpF1825;
  P valueF1824;
  P T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYconstant_value),o_);
  valueF1824 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),valueF1824,YPfalse);
  tmpF1825 = T4;
  if (tmpF1825 != YPfalse) {
    T5 = tmpF1825;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),valueF1824,YPtrue);
    tmpF1826 = T7;
    if (tmpF1826 != YPfalse) {
      T8 = tmpF1826;
    } else {
      T10 = CALL2(1,VARREF(YgooSmacrosYEE),valueF1824,Ynil);
      tmpF1827 = T10;
      if (tmpF1827 != YPfalse) {
        T11 = tmpF1827;
      } else {
        T13 = CALL2(1,VARREF(YisaQ),valueF1824,VARREF(YLintG));
        tmpF1828 = T13;
        if (tmpF1828 != YPfalse) {
          T14 = tmpF1828;
        } else {
          T15 = CALL2(1,VARREF(YisaQ),valueF1824,VARREF(YLchrG));
          T14 = T15;
        }
        T12 = T14;
        T11 = T12;
      }
      T9 = T11;
      T8 = T9;
    }
    T6 = T8;
    T5 = T6;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T2 = o_;
  } else {
    T17 = CALL1(1,VARREF(YcompilerSast_linearizeYprogram_quotations),result_);
    qbTF1829 = T17;
    T19 = CALL1(1,VARREF(YgooStypesYlen),qbTF1829);
    indexF1830 = T19;
    T21 = CALL3(1,VARREF(YgooScollectionsScollectionYelt_or),qbTF1829,valueF1824,YPfalse);
    probeF1831 = T21;
    if (probeF1831 != YPfalse) {
      T23 = CALL3(1,VARREF(Ynew),VARREF(YcompilerSastYLglobal_referenceG),VARREF(YcompilerSastYreference_binding),probeF1831);
      T22 = T23;
    } else {
      T25 = CALLN(1,VARREF(Ynew),7,VARREF(YcompilerSastYLmodule_bindingG),VARREF(YcompilerSastYbinding_kind),LITREF(lit_90),VARREF(YcompilerSastYbinding_name),indexF1830,VARREF(YcompilerSastYbinding_info),valueF1824);
      qbF1832 = T25;
      CALL3(1,VARREF(YgooScollectionsScollectionYelt_setter),qbF1832,qbTF1829,valueF1824);
      x_1419F1833 = form_;
      T28 = CALL1(1,VARREF(YcompilerSast_linearizeYform_quotations),x_1419F1833);
      T27 = CALL2(1,VARREF(YgooScollectionsSlistYpush),T28,qbF1832);
      T26 = CALL2(1,VARREF(YcompilerSast_linearizeYform_quotations_setter),T27,x_1419F1833);
      T29 = CALL3(1,VARREF(Ynew),VARREF(YcompilerSastYLglobal_referenceG),VARREF(YcompilerSastYreference_binding),qbF1832);
      T24 = T29;
      T22 = T24;
    }
    T20 = T22;
    T18 = T20;
    T16 = T18;
    T2 = T16;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_86) {
  P o_,form_,result_;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_87) {
  P binding_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T2 = CALL1(1,VARREF(YcompilerSastYbinding_type),binding_);
  T1 = CALL3(1,VARREF(YcompilerSast_linearizeYextractX),T2,FREEREF(0),FREEREF(1));
  T0 = CALL2(1,VARREF(YcompilerSastYbinding_type_setter),T1,binding_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_88) {
  P o_,form_,result_;
  P indexF1836;
  P free_bindingsF1835;
  P freeF1834;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYfunction_debug_name),o_);
  T0 = CALL3(1,VARREF(YcompilerSast_linearizeYextractX),T1,form_,result_);
  CALL2(1,VARREF(YcompilerSastYfunction_debug_name_setter),T0,o_);
  T3 = CALL1(1,VARREF(YcompilerSastYfunction_signature),o_);
  T2 = CALL3(1,VARREF(YcompilerSast_linearizeYextractX),T3,form_,result_);
  CALL2(1,VARREF(YcompilerSastYfunction_signature_setter),T2,o_);
  T5 = CALL1(1,VARREF(YcompilerSastYfunction_body),o_);
  T4 = CALL3(1,VARREF(YcompilerSast_linearizeYextractX),T5,form_,result_);
  CALL2(1,VARREF(YcompilerSastYfunction_body_setter),T4,o_);
  T6 = FUNFAB(fun_87,2,form_,result_);
  T7 = CALL1(1,VARREF(YcompilerSastYfunction_bindings),o_);
  CALL2(1,VARREF(YgooSmacrosYdo),T6,T7);
  T9 = CALL1(1,VARREF(YcompilerSastYfunction_free),o_);
  freeF1834 = T9;
  T11 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YcompilerSastYreference_binding),freeF1834);
  free_bindingsF1835 = T11;
  T13 = CALL3(1,VARREF(YcompilerSast_linearizeYadjoin_definitionX),form_,result_,o_);
  indexF1836 = T13;
  CALL2(1,VARREF(YcompilerSastYfunction_index_setter),indexF1836,o_);
  CALL2(1,VARREF(YcompilerSastYfunction_free_setter),free_bindingsF1835,o_);
  T14 = CALLN(1,VARREF(Ynew),5,VARREF(YcompilerSast_linearizeYLclosure_creationG),VARREF(YcompilerSast_linearizeYclosure_creation_index),indexF1836,VARREF(YcompilerSast_linearizeYclosure_creation_free),freeF1834);
  T12 = T14;
  T10 = T12;
  T8 = T10;
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_extractX_89) {
  P o_,form_,result_;
  P x_1420F1838;
  P primF1837;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYassignment_form),o_);
  primF1837 = T1;
  T3 = CALL1(1,VARREF(YcompilerSastYfunction_body),primF1837);
  T2 = CALL3(1,VARREF(YcompilerSast_linearizeYextractX),T3,form_,result_);
  CALL2(1,VARREF(YcompilerSastYfunction_body_setter),T2,primF1837);
  x_1420F1838 = result_;
  T6 = CALL1(1,VARREF(YcompilerSast_linearizeYprogram_definitions),x_1420F1838);
  T5 = CALL2(1,VARREF(YgooScollectionsSlistYpush),T6,primF1837);
  T4 = CALL2(1,VARREF(YcompilerSast_linearizeYprogram_definitions_setter),T5,x_1420F1838);
  T8 = CALL3(1,VARREF(Ynew),VARREF(YcompilerSastYLconstantG),VARREF(YcompilerSastYconstant_value),YPfalse);
  T7 = CALL3(1,VARREF(YcompilerSast_linearizeYextractX),T8,form_,result_);
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_definitionX_90) {
  P form_,result_,x_;
  P x_1422F1841;
  P x_1421F1840;
  P new_indexF1839;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(form_, 0);
  ARG(result_, 1);
  ARG(x_, 2);
loop:
  T2 = CALL1(1,VARREF(YcompilerSast_linearizeYprogram_definitions),result_);
  T1 = CALL1(1,VARREF(YgooStypesYlen),T2);
  new_indexF1839 = T1;
  x_1421F1840 = result_;
  T5 = CALL1(1,VARREF(YcompilerSast_linearizeYprogram_definitions),x_1421F1840);
  T4 = CALL2(1,VARREF(YgooScollectionsSlistYpush),T5,x_);
  T3 = CALL2(1,VARREF(YcompilerSast_linearizeYprogram_definitions_setter),T4,x_1421F1840);
  x_1422F1841 = form_;
  T8 = CALL1(1,VARREF(YcompilerSast_linearizeYform_definitions),x_1422F1841);
  T7 = CALL2(1,VARREF(YgooScollectionsSlistYpush),T8,x_);
  T6 = CALL2(1,VARREF(YcompilerSast_linearizeYform_definitions_setter),T7,x_1422F1841);
  T0 = new_indexF1839;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_split_program_91) {
  P o_,max_count_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(max_count_, 1);
loop:
  T0 = CALL1(1,VARREF(Ylst),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_inner_92) {
  P res_,es_,count_;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(res_, 0);
  ARG(es_, 1);
  ARG(count_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),es_);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
    T4 = CALL1(1,VARREF(YcompilerSastYsequentialize),T5);
    T3 = CALL2(1,VARREF(YgooSmacrosYpair),T4,FREEREF(0));
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),T3);
    T0 = T2;
  } else {
    T7 = CALL2(1,VARREF(YgooSmathYE),count_,FREEREF(1));
    if (T7 != YPfalse) {
      T11 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
      T10 = CALL1(1,VARREF(YcompilerSastYsequentialize),T11);
      T9 = CALL2(1,VARREF(YgooSmacrosYpair),T10,FREEREF(0));
      T8 = CALL2(0,FREEREF(2),T9,es_);
      T6 = T8;
    } else {
      if (YPtrue != YPfalse) {
        T15 = CALL1(1,VARREF(Yhead),es_);
        T14 = CALL2(1,VARREF(YgooSmacrosYpair),T15,res_);
        T16 = CALL1(1,VARREF(Ytail),es_);
        T17 = CALL2(1,VARREF(YgooSmathYA),count_,YPint((P)1));
        a1 = T14;
        a2 = T16;
        a3 = T17;
        res_ = a1;
        es_ = a2;
        count_ = a3;
        goto loop;
        T12 = T13;
      } else {
        T12 = YPfalse;
      }
      T6 = T12;
    }
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_93) {
  P forms_,s_;
  P innerF1842;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(forms_, 0);
  ARG(s_, 1);
loop:
  T1 = FUNSHELL(1,fun_inner_92,4);
  innerF1842 = T1;
  FUNINIT(innerF1842, 4,forms_,FREEREF(0),FREEREF(1),innerF1842);
  T2 = CALL3(0,innerF1842,Ynil,s_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_split_program_94) {
  P o_,max_count_;
  P loopF1843;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(max_count_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_93,2);
  loopF1843 = T1;
  FUNINIT(loopF1843, 2,max_count_,loopF1843);
  T2 = CALL2(0,loopF1843,Ynil,o_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_95) {
  P calls_,defns_,i_,forms_;
  P callF1847;
  P defnF1846;
  P bindingF1845;
  P nameF1844;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(calls_, 0);
  ARG(defns_, 1);
  ARG(i_, 2);
  ARG(forms_, 3);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),forms_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),defns_);
    CALL2(1,VARREF(YcompilerSast_linearizeYprogram_definitions_setter),T2,FREEREF(0));
    T5 = CALL1(1,VARREF(YgooSmacrosYrevX),calls_);
    T4 = CALL1(1,VARREF(YcompilerSastYsequentialize),T5);
    T6 = CALL1(1,VARREF(YgooSmacrosYrevX),defns_);
    T3 = CALLN(1,VARREF(Ynew),5,VARREF(YcompilerSast_linearizeYLtop_level_formG),VARREF(YcompilerSast_linearizeYform_program),T4,VARREF(YcompilerSast_linearizeYform_definitions),T6);
    CALL2(1,VARREF(YcompilerSast_linearizeYprogram_form_setter),T3,FREEREF(0));
    T0 = FREEREF(0);
  } else {
    T8 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_101),i_,LITREF(lit_102));
    nameF1844 = T8;
    T10 = CALLN(1,VARREF(YcompilerSastYast_define_binding),4,FREEREF(1),nameF1844,YPfalse,LITREF(lit_103));
    bindingF1845 = T10;
    T13 = CALL2(1,VARREF(YcompilerSastYobjectify_quotation),nameF1844,YPint((P)4));
    T14 = CALL2(1,VARREF(YcompilerSastYobjectify_signature),Ynil,FREEREF(1));
    T15 = CALL1(1,VARREF(Yhead),forms_);
    T12 = CALLN(1,VARREF(Ynew),9,VARREF(YcompilerSastYLast_primitiveG),VARREF(YcompilerSastYfunction_binding),bindingF1845,VARREF(YcompilerSastYfunction_debug_name),T13,VARREF(YcompilerSastYfunction_signature),T14,VARREF(YcompilerSastYfunction_body),T15);
    defnF1846 = T12;
    T18 = CALL1(1,VARREF(YgooScollectionsScollectionYempty),VARREF(YcompilerSastYLargumentsG));
    T17 = CALLN(1,VARREF(Ynew),7,VARREF(YcompilerSastYLpredefined_applicationG),VARREF(YcompilerSastYapplication_binding),bindingF1845,VARREF(YcompilerSastYapplication_arguments),T18,VARREF(YcompilerSastYapplication_tailQ),YPfalse);
    callF1847 = T17;
    T20 = CALL2(1,VARREF(YgooSmacrosYpair),callF1847,calls_);
    T21 = CALL2(1,VARREF(YgooSmacrosYpair),defnF1846,defns_);
    T22 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    T23 = CALL1(1,VARREF(Ytail),forms_);
    a1 = T20;
    a2 = T21;
    a3 = T22;
    a4 = T23;
    calls_ = a1;
    defns_ = a2;
    i_ = a3;
    forms_ = a4;
    goto loop;
    T16 = T19;
    T11 = T16;
    T9 = T11;
    T7 = T9;
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closurize_mainX_96) {
  P o_,r_,max_count_;
  P loopF1850;
  P base_indexF1849;
  P formsF1848;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(max_count_, 2);
loop:
  T2 = CALL1(1,VARREF(YcompilerSast_linearizeYprogram_form),o_);
  T1 = CALL2(1,VARREF(YcompilerSast_linearizeYsplit_program),T2,max_count_);
  formsF1848 = T1;
  T5 = CALL1(1,VARREF(YcompilerSast_linearizeYprogram_definitions),o_);
  T4 = CALL1(1,VARREF(YgooStypesYlen),T5);
  base_indexF1849 = T4;
  T7 = FUNSHELL(1,fun_loop_95,3);
  loopF1850 = T7;
  FUNINIT(loopF1850, 3,o_,r_,loopF1850);
  T9 = CALL1(1,VARREF(YcompilerSast_linearizeYprogram_definitions),o_);
  T8 = CALLN(0,loopF1850,4,Ynil,T9,YPint((P)0),formsF1848);
  T6 = T8;
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_97) {
  P def_;
  P T0;
  P a1;
LINK_STACK();
  ARG(def_, 0);
loop:
  T0 = CALL3(1,VARREF(YcompilerSast_linearizeYcollect_temporariesX),def_,def_,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gather_temporariesX_98) {
  P o_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = fun_97;
  T2 = CALL1(1,VARREF(YcompilerSast_linearizeYprogram_definitions),o_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
  CALL2(1,VARREF(YcompilerSast_linearizeYprogram_definitions_setter),T0,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_collect_temporariesX_99) {
  P o_,flat_fun_,r_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T0 = CALLN(1,VARREF(YcompilerSast_linearizeYupdate_walkX),4,VARREF(YcompilerSast_linearizeYcollect_temporariesX),o_,flat_fun_,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_temporariesX_100) {
  P o_,flat_fun_,r_;
  P bF1852;
  P bindingF1851;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYreference_binding),o_);
  bindingF1851 = T1;
  T3 = CALL2(1,VARREF(YcompilerSast_linearizeYassocq),bindingF1851,r_);
  bF1852 = T3;
  if (bF1852 != YPfalse) {
    T6 = CALL1(1,VARREF(YcompilerSast_linearizeYassoc_value),bF1852);
    T5 = CALL3(1,VARREF(Ynew),VARREF(YcompilerSastYLlocal_referenceG),VARREF(YcompilerSastYreference_binding),T6);
    T4 = T5;
  } else {
    T4 = o_;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_temporariesX_101) {
  P o_,flat_fun_,r_;
  P new_rF1854;
  P new_bindingsF1853;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYfix_let_arguments),o_);
  T0 = CALL3(1,VARREF(YcompilerSast_linearizeYcollect_temporariesX),T1,flat_fun_,r_);
  CALL2(1,VARREF(YcompilerSastYfix_let_arguments_setter),T0,o_);
  T4 = CALL1(1,VARREF(YcompilerSastYfix_let_bindings),o_);
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YcompilerSast_linearizeYnew_renamed_binding),T4);
  new_bindingsF1853 = T3;
  T8 = CALL1(1,VARREF(YcompilerSastYfix_let_bindings),o_);
  T7 = CALL3(1,VARREF(YgooScollectionsScollectionYmap2),VARREF(YcompilerSast_linearizeYassoc),T8,new_bindingsF1853);
  T6 = CALL2(1,VARREF(YgooSmacrosYcat),T7,r_);
  new_rF1854 = T6;
  CALL2(1,VARREF(YcompilerSast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF1853);
  CALL2(1,VARREF(YcompilerSastYfix_let_bindings_setter),new_bindingsF1853,o_);
  T10 = CALL1(1,VARREF(YcompilerSastYfix_let_body),o_);
  T9 = CALL3(1,VARREF(YcompilerSast_linearizeYcollect_temporariesX),T10,flat_fun_,new_rF1854);
  CALL2(1,VARREF(YcompilerSastYfix_let_body_setter),T9,o_);
  T5 = o_;
  T2 = T5;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_collect_temporariesX_102) {
  P o_,flat_fun_,r_;
  P new_rF1856;
  P new_bindingsF1855;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T2 = CALL1(1,VARREF(YcompilerSastYlocals_bindings),o_);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YcompilerSast_linearizeYnew_renamed_binding),T2);
  new_bindingsF1855 = T1;
  T6 = CALL1(1,VARREF(YcompilerSastYlocals_bindings),o_);
  T5 = CALL3(1,VARREF(YgooScollectionsScollectionYmap2),VARREF(YcompilerSast_linearizeYassoc),T6,new_bindingsF1855);
  T4 = CALL2(1,VARREF(YgooSmacrosYcat),T5,r_);
  new_rF1856 = T4;
  T8 = CALL3(1,VARREF(YruntimeSruntimeYrcurry),VARREF(YcompilerSast_linearizeYcollect_temporariesX),flat_fun_,new_rF1856);
  T9 = CALL1(1,VARREF(YcompilerSastYlocals_functions),o_);
  T7 = CALL2(1,VARREF(YgooSmacrosYmap),T8,T9);
  CALL2(1,VARREF(YcompilerSastYlocals_functions_setter),T7,o_);
  CALL2(1,VARREF(YcompilerSast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF1855);
  CALL2(1,VARREF(YcompilerSastYlocals_bindings_setter),new_bindingsF1855,o_);
  T11 = CALL1(1,VARREF(YcompilerSastYlocals_body),o_);
  T10 = CALL3(1,VARREF(YcompilerSast_linearizeYcollect_temporariesX),T11,flat_fun_,new_rF1856);
  CALL2(1,VARREF(YcompilerSastYlocals_body_setter),T10,o_);
  T3 = o_;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_103) {
  P temps_,bindings_;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(temps_, 0);
  ARG(bindings_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindings_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YcompilerSastYfunction_temporaries_setter),temps_,FREEREF(0));
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yhead),bindings_);
    T4 = CALL2(1,VARREF(YgooScollectionsScollectionYmemQ),temps_,T5);
    if (T4 != YPfalse) {
      T7 = CALL1(1,VARREF(Ytail),bindings_);
      a1 = temps_;
      a2 = T7;
      temps_ = a1;
      bindings_ = a2;
      goto loop;
      T3 = T6;
    } else {
      T10 = CALL1(1,VARREF(Yhead),bindings_);
      T9 = CALL2(1,VARREF(YgooSmacrosYpair),T10,temps_);
      T11 = CALL1(1,VARREF(Ytail),bindings_);
      a1 = T9;
      a2 = T11;
      temps_ = a1;
      bindings_ = a2;
      goto loop;
      T3 = T8;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_temporary_variablesX_104) {
  P flat_fun_,new_bindings_;
  P adjoinF1857;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(flat_fun_, 0);
  ARG(new_bindings_, 1);
loop:
  T1 = FUNSHELL(1,fun_adjoin_103,2);
  adjoinF1857 = T1;
  FUNINIT(adjoinF1857, 2,flat_fun_,adjoinF1857);
  T3 = CALL1(1,VARREF(YcompilerSastYfunction_temporaries),flat_fun_);
  T2 = CALL2(0,adjoinF1857,T3,new_bindings_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_index_105) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcompilerSastYbinding_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_index_setter_106) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcompilerSastYbinding_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_new_renamed_binding_107) {
  P binding_;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmathYA),VARREF(YcompilerSast_linearizeYTrenaming_bindings_counterT),YPint((P)1));
  VARSET(YcompilerSast_linearizeYTrenaming_bindings_counterT,T0);
  T2 = CALL1(1,VARREF(YcompilerSastYbinding_name),binding_);
  T3 = CALL1(1,VARREF(YcompilerSastYbinding_type),binding_);
  T4 = CALL1(1,VARREF(YcompilerSastYbinding_dynamic_extentQ),binding_);
  T1 = CALLN(1,VARREF(Ynew),9,VARREF(YcompilerSast_linearizeYLrenamed_local_bindingG),VARREF(YcompilerSastYbinding_name),T2,VARREF(YcompilerSastYbinding_type),T3,VARREF(YcompilerSastYbinding_dynamic_extentQ),T4,VARREF(YcompilerSastYbinding_index),VARREF(YcompilerSast_linearizeYTrenaming_bindings_counterT));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_108) {
  P def_;
  P T0;
  P a1;
LINK_STACK();
  ARG(def_, 0);
loop:
  T0 = CALL3(1,VARREF(YcompilerSast_linearizeYcollect_registersX),def_,YPfalse,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_109) {
  P T2,T1,T0;
LINK_STACK();
loop:
  VARSET(YcompilerSast_linearizeYTregister_passiveQT,FREEREF(0));
  T1 = fun_108;
  T2 = CALL1(1,VARREF(YcompilerSast_linearizeYprogram_definitions),FREEREF(1));
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_110) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(YcompilerSast_linearizeYTregister_passiveQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_register_allocateX_111) {
  P o_,register_passiveQ_;
  P x_1423F1858;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(register_passiveQ_, 1);
loop:
  x_1423F1858 = VARREF(YcompilerSast_linearizeYTregister_passiveQT);
  T1 = FUNFAB(fun_109,2,register_passiveQ_,o_);
  T2 = FUNFAB(fun_110,1,x_1423F1858);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_allocate_register_112) {
  P o_,flat_fun_,valQ_;
  P x_1424F1861;
  P tmpF1860;
  P tmpF1859;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  tmpF1859 = valQ_;
  if (tmpF1859 != YPfalse) {
    tmpF1860 = flat_fun_;
    if (tmpF1860 != YPfalse) {
      T6 = CALL1(1,VARREF(YcompilerSastYprogram_register),o_);
      T5 = CALL1(1,VARREF(Ynot),T6);
      T4 = T5;
    } else {
      T4 = YPfalse;
    }
    T3 = T4;
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  if (T1 != YPfalse) {
    T8 = CALL1(1,VARREF(YcompilerSastYfunction_registers),flat_fun_);
    T7 = CALL1(1,VARREF(YgooStypesYlen),T8);
    CALL2(1,VARREF(YcompilerSastYprogram_register_setter),T7,o_);
    x_1424F1861 = flat_fun_;
    T12 = CALL1(1,VARREF(YcompilerSastYfunction_registers),x_1424F1861);
    T11 = CALL2(1,VARREF(YgooScollectionsSlistYpush),T12,o_);
    T10 = CALL2(1,VARREF(YcompilerSastYfunction_registers_setter),T11,x_1424F1861);
    T9 = T10;
    T0 = T9;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_113) {
  P o_,flat_fun_,valQ_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  CALL3(1,VARREF(YcompilerSast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T0 = CALLN(1,VARREF(YcompilerSast_linearizeYupdate_walkX),4,VARREF(YcompilerSast_linearizeYcollect_registersX),o_,flat_fun_,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_114) {
  P x_;
  P tmpF1863;
  P next_xF1862;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T3 = CALL1(1,VARREF(Ytail),x_);
    next_xF1862 = T3;
    T4 = CALL1(1,VARREF(Yhead),x_);
    tmpF1863 = FREEREF(2);
    if (tmpF1863 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooSmacrosYemptyQ),next_xF1862);
      T6 = T7;
    } else {
      T6 = YPfalse;
    }
    T5 = T6;
    CALL3(1,VARREF(YcompilerSast_linearizeYcollect_registersX),T4,FREEREF(1),T5);
    a1 = next_xF1862;
    x_ = a1;
    goto loop;
    T2 = T8;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_115) {
  P o_,flat_fun_,valQ_;
  P loopF1864;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_114,4);
  loopF1864 = T1;
  FUNINIT(loopF1864, 4,o_,flat_fun_,valQ_,loopF1864);
  T2 = CALL1(0,loopF1864,o_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_116) {
  P o_,flat_fun_,valQ_;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  if (VARREF(YcompilerSast_linearizeYTregister_passiveQT) != YPfalse) {
    T0 = CALL3(1,VARREF(YcompilerSast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  } else {
  }
  T1 = CALLN(1,VARREF(YcompilerSast_linearizeYupdate_walkX),4,VARREF(YcompilerSast_linearizeYcollect_registersX),o_,flat_fun_,YPtrue);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_117) {
  P def_;
  P T0;
  P a1;
LINK_STACK();
  ARG(def_, 0);
loop:
  T0 = CALL3(1,VARREF(YcompilerSast_linearizeYcollect_registersX),def_,FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_118) {
  P o_,flat_fun_,valQ_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  CALL3(1,VARREF(YcompilerSast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T0 = FUNFAB(fun_117,2,flat_fun_,valQ_);
  T1 = CALL1(1,VARREF(YcompilerSast_linearizeYform_definitions),o_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL1(1,VARREF(YcompilerSast_linearizeYform_program),o_);
  CALL3(1,VARREF(YcompilerSast_linearizeYcollect_registersX),T2,flat_fun_,valQ_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_collect_registersX_119) {
  P o_,flat_fun_,valQ_;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  CALL3(1,VARREF(YcompilerSast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T0 = CALL1(1,VARREF(YcompilerSastYfunction_signature),o_);
  CALL3(1,VARREF(YcompilerSast_linearizeYcollect_registersX),T0,flat_fun_,YPtrue);
  T1 = CALL3(1,VARREF(YruntimeSruntimeYrcurry),VARREF(YcompilerSast_linearizeYcollect_registersX),flat_fun_,YPtrue);
  T2 = CALL1(1,VARREF(YcompilerSastYfunction_data_refs),o_);
  CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
  T3 = CALL1(1,VARREF(YcompilerSastYfunction_debug_name),o_);
  CALL3(1,VARREF(YcompilerSast_linearizeYcollect_registersX),T3,o_,YPtrue);
  T4 = CALL1(1,VARREF(YcompilerSastYfunction_body),o_);
  CALL3(1,VARREF(YcompilerSast_linearizeYcollect_registersX),T4,o_,YPtrue);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_collect_registersX_120) {
  P o_,flat_fun_,valQ_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  T0 = CALL1(1,VARREF(YcompilerSastYfunction_body),o_);
  CALL3(1,VARREF(YcompilerSast_linearizeYcollect_registersX),T0,o_,YPtrue);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_ast_contains_funQ_121) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(YPtrue);
}

FUNCODEDEF(fun_walk_122) {
  P y_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(y_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),y_,VARREF(YcompilerSastYLast_methodG));
  if (T1 != YPfalse) {
    T2 = CALL1(1,FREEREF(0),YPtrue);
    T0 = T2;
  } else {
    T3 = CALL2(1,VARREF(YcompilerSast_linearizeYast_walk),FREEREF(1),y_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_123) {
  P return_;
  P walkF1865;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T0 = FUNSHELL(0,fun_walk_122,2);
  walkF1865 = T0;
  FUNINIT(walkF1865, 2,return_,walkF1865);
  T1 = CALL2(1,VARREF(YcompilerSast_linearizeYast_walk),walkF1865,FREEREF(0));
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_ast_contains_funQ_124) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNFAB(fun_123,1,x_);
  T0 = with_exit(T1);
UNLINK_STACK();
  RET(T0);
}

P YcompilerSast_linearizeY___main_0___() {
  P T234,T233,T232,T231,T230,T229,T228,T227,T226,T225,T224,T223,T222,T221,T220,T219;
  P T218,T217,T216,T215,T214,T213,T212,T211,T210,T209,T208,T207,T206,T205,T204,T203;
  P T202,T201,T200,T199,T198,T197,T196,T195,T194,T193,T192,T191,T190,T189,T188,T187;
  P T186,T185,T184,T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171;
  P T170,T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155;
  P T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139;
  P T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123;
  P T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107;
  P T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91;
  P T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75;
  P T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59;
  P T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"<assoc>");
  T1 = (P)YPpair(VARREF(YLanyG),Ynil);
  T0 = CALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YcompilerSast_linearizeYLassocG,T0);
  lit_1 = YPPsym((P)"assoc-key");
  lit_2 = YPPsym((P)"_x");
  T2 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YcompilerSast_linearizeYLassocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assoc_key_0 = YPmet(FUNCODEREF(fun_assoc_key_0),LITREF(lit_1),T2,ENVNUL,PNUL,YPfalse);
  T5 = BOUNDP(YcompilerSast_linearizeYassoc_key);
  if (T5 != YPfalse) {
    T4 = VARREF(YcompilerSast_linearizeYassoc_key);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_assoc_key_0;
  T3 = CALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(YcompilerSast_linearizeYassoc_key,T3);
  lit_3 = YPPsym((P)"assoc-key-setter");
  lit_4 = YPPsym((P)"_z");
  T7 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YcompilerSast_linearizeYLassocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assoc_key_setter_1 = YPmet(FUNCODEREF(fun_assoc_key_setter_1),LITREF(lit_3),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YcompilerSast_linearizeYassoc_key_setter);
  if (T10 != YPfalse) {
    T9 = VARREF(YcompilerSast_linearizeYassoc_key_setter);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_assoc_key_setter_1;
  T8 = CALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YcompilerSast_linearizeYassoc_key_setter,T8);
  CALLN(1,VARREF(YPprop),5,VARREF(YcompilerSast_linearizeYLassocG),VARREF(YcompilerSast_linearizeYassoc_key),VARREF(YcompilerSast_linearizeYassoc_key_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_5 = YPPsym((P)"assoc-value");
  T12 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YcompilerSast_linearizeYLassocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assoc_value_2 = YPmet(FUNCODEREF(fun_assoc_value_2),LITREF(lit_5),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YcompilerSast_linearizeYassoc_value);
  if (T15 != YPfalse) {
    T14 = VARREF(YcompilerSast_linearizeYassoc_value);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_assoc_value_2;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YcompilerSast_linearizeYassoc_value,T13);
  lit_6 = YPPsym((P)"assoc-value-setter");
  T17 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YcompilerSast_linearizeYLassocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assoc_value_setter_3 = YPmet(FUNCODEREF(fun_assoc_value_setter_3),LITREF(lit_6),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YcompilerSast_linearizeYassoc_value_setter);
  if (T20 != YPfalse) {
    T19 = VARREF(YcompilerSast_linearizeYassoc_value_setter);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_assoc_value_setter_3;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YcompilerSast_linearizeYassoc_value_setter,T18);
  CALLN(1,VARREF(YPprop),5,VARREF(YcompilerSast_linearizeYLassocG),VARREF(YcompilerSast_linearizeYassoc_value),VARREF(YcompilerSast_linearizeYassoc_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_7 = YPPsym((P)"assoc");
  lit_8 = YPPsym((P)"x");
  lit_9 = YPPsym((P)"y");
  T22 = YPsig(YPPlist(2,LITREF(lit_8),LITREF(lit_9)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YcompilerSast_linearizeYLassocG),Ynil);
  YcompilerSast_linearizeYassoc = YPmet(FUNCODEREF(YcompilerSast_linearizeYassoc),LITREF(lit_7),T22,ENVNUL,PNUL,YPfalse);
  T23 = YcompilerSast_linearizeYassoc;
  VARSET(YcompilerSast_linearizeYassoc,T23);
  lit_10 = YPPsym((P)"assocq");
  lit_11 = YPPsym((P)"l");
  T24 = YPsig(YPPlist(2,LITREF(lit_8),LITREF(lit_11)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assocq_5 = YPmet(FUNCODEREF(fun_assocq_5),LITREF(lit_10),T24,ENVNUL,PNUL,YPfalse);
  T27 = BOUNDP(YcompilerSast_linearizeYassocq);
  if (T27 != YPfalse) {
    T26 = VARREF(YcompilerSast_linearizeYassocq);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_assocq_5;
  T25 = CALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(YcompilerSast_linearizeYassocq,T25);
  lit_12 = YPPsym((P)"update-walk!");
  lit_13 = YPPsym((P)"g");
  lit_14 = YPPsym((P)"o");
  lit_15 = YPPsym((P)"args");
  lit_16 = YPPsym((P)"x-1416");
  lit_17 = YPPsym((P)"x-1415");
  T30 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1416_6 = YPmet(FUNCODEREF(fun_x_1416_6),LITREF(lit_16),T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(YPPlist(3,LITREF(lit_13),LITREF(lit_14),LITREF(lit_15)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_update_walkX_7 = YPmet(FUNCODEREF(fun_update_walkX_7),LITREF(lit_12),T29,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YcompilerSast_linearizeYupdate_walkX);
  if (T33 != YPfalse) {
    T32 = VARREF(YcompilerSast_linearizeYupdate_walkX);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_update_walkX_7;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YcompilerSast_linearizeYupdate_walkX,T31);
  lit_18 = YPPsym((P)"ast-walk");
  lit_19 = YPPsym((P)"x-1418");
  lit_20 = YPPsym((P)"x-1417");
  T36 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1418_8 = YPmet(FUNCODEREF(fun_x_1418_8),LITREF(lit_19),T36,ENVNUL,PNUL,YPfalse);
  T35 = YPsig(YPPlist(3,LITREF(lit_13),LITREF(lit_14),LITREF(lit_15)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_walk_9 = YPmet(FUNCODEREF(fun_ast_walk_9),LITREF(lit_18),T35,ENVNUL,PNUL,YPfalse);
  T39 = BOUNDP(YcompilerSast_linearizeYast_walk);
  if (T39 != YPfalse) {
    T38 = VARREF(YcompilerSast_linearizeYast_walk);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_ast_walk_9;
  T37 = CALL2(1,VARREF(YPdefine_method),T38,T40);
  VARSET(YcompilerSast_linearizeYast_walk,T37);
  lit_21 = YPPsym((P)"<box-read>");
  T42 = (P)YPpair(VARREF(YcompilerSastYLcomputed_programG),Ynil);
  T41 = CALL2(1,VARREF(Yfab_class),LITREF(lit_21),T42);
  VARSET(YcompilerSast_linearizeYLbox_readG,T41);
  lit_22 = YPPsym((P)"box-reference");
  T43 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YcompilerSast_linearizeYLbox_readG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_10 = YPmet(FUNCODEREF(fun_box_reference_10),LITREF(lit_22),T43,ENVNUL,PNUL,YPfalse);
  T46 = BOUNDP(YcompilerSast_linearizeYbox_reference);
  if (T46 != YPfalse) {
    T45 = VARREF(YcompilerSast_linearizeYbox_reference);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_box_reference_10;
  T44 = CALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YcompilerSast_linearizeYbox_reference,T44);
  lit_23 = YPPsym((P)"box-reference-setter");
  T48 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YcompilerSast_linearizeYLbox_readG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_11 = YPmet(FUNCODEREF(fun_box_reference_setter_11),LITREF(lit_23),T48,ENVNUL,PNUL,YPfalse);
  T51 = BOUNDP(YcompilerSast_linearizeYbox_reference_setter);
  if (T51 != YPfalse) {
    T50 = VARREF(YcompilerSast_linearizeYbox_reference_setter);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_box_reference_setter_11;
  T49 = CALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(YcompilerSast_linearizeYbox_reference_setter,T49);
  CALLN(1,VARREF(YPprop),5,VARREF(YcompilerSast_linearizeYLbox_readG),VARREF(YcompilerSast_linearizeYbox_reference),VARREF(YcompilerSast_linearizeYbox_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_24 = YPPsym((P)"<box-write>");
  T54 = (P)YPpair(VARREF(YcompilerSastYLcomputed_programG),Ynil);
  T53 = CALL2(1,VARREF(Yfab_class),LITREF(lit_24),T54);
  VARSET(YcompilerSast_linearizeYLbox_writeG,T53);
  T55 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YcompilerSast_linearizeYLbox_writeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_12 = YPmet(FUNCODEREF(fun_box_reference_12),LITREF(lit_22),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(YcompilerSast_linearizeYbox_reference);
  if (T58 != YPfalse) {
    T57 = VARREF(YcompilerSast_linearizeYbox_reference);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_box_reference_12;
  T56 = CALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YcompilerSast_linearizeYbox_reference,T56);
  T60 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YcompilerSast_linearizeYLbox_writeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_13 = YPmet(FUNCODEREF(fun_box_reference_setter_13),LITREF(lit_23),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(YcompilerSast_linearizeYbox_reference_setter);
  if (T63 != YPfalse) {
    T62 = VARREF(YcompilerSast_linearizeYbox_reference_setter);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_box_reference_setter_13;
  T61 = CALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YcompilerSast_linearizeYbox_reference_setter,T61);
  CALLN(1,VARREF(YPprop),5,VARREF(YcompilerSast_linearizeYLbox_writeG),VARREF(YcompilerSast_linearizeYbox_reference),VARREF(YcompilerSast_linearizeYbox_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_25 = YPPsym((P)"box-form");
  T65 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YcompilerSast_linearizeYLbox_writeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_form_14 = YPmet(FUNCODEREF(fun_box_form_14),LITREF(lit_25),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YcompilerSast_linearizeYbox_form);
  if (T68 != YPfalse) {
    T67 = VARREF(YcompilerSast_linearizeYbox_form);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_box_form_14;
  T66 = CALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YcompilerSast_linearizeYbox_form,T66);
  lit_26 = YPPsym((P)"box-form-setter");
  T70 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YcompilerSast_linearizeYLbox_writeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_form_setter_15 = YPmet(FUNCODEREF(fun_box_form_setter_15),LITREF(lit_26),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(YcompilerSast_linearizeYbox_form_setter);
  if (T73 != YPfalse) {
    T72 = VARREF(YcompilerSast_linearizeYbox_form_setter);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_box_form_setter_15;
  T71 = CALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YcompilerSast_linearizeYbox_form_setter,T71);
  CALLN(1,VARREF(YPprop),5,VARREF(YcompilerSast_linearizeYLbox_writeG),VARREF(YcompilerSast_linearizeYbox_form),VARREF(YcompilerSast_linearizeYbox_form_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_27 = YPPsym((P)"<box-creation>");
  T76 = (P)YPpair(VARREF(YcompilerSastYLcomputed_programG),Ynil);
  T75 = CALL2(1,VARREF(Yfab_class),LITREF(lit_27),T76);
  VARSET(YcompilerSast_linearizeYLbox_creationG,T75);
  T77 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YcompilerSast_linearizeYLbox_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_16 = YPmet(FUNCODEREF(fun_box_reference_16),LITREF(lit_22),T77,ENVNUL,PNUL,YPfalse);
  T80 = BOUNDP(YcompilerSast_linearizeYbox_reference);
  if (T80 != YPfalse) {
    T79 = VARREF(YcompilerSast_linearizeYbox_reference);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_box_reference_16;
  T78 = CALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(YcompilerSast_linearizeYbox_reference,T78);
  T82 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YcompilerSast_linearizeYLbox_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_17 = YPmet(FUNCODEREF(fun_box_reference_setter_17),LITREF(lit_23),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(YcompilerSast_linearizeYbox_reference_setter);
  if (T85 != YPfalse) {
    T84 = VARREF(YcompilerSast_linearizeYbox_reference_setter);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_box_reference_setter_17;
  T83 = CALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YcompilerSast_linearizeYbox_reference_setter,T83);
  CALLN(1,VARREF(YPprop),5,VARREF(YcompilerSast_linearizeYLbox_creationG),VARREF(YcompilerSast_linearizeYbox_reference),VARREF(YcompilerSast_linearizeYbox_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_28 = YPPsym((P)"insert-box!");
  T87 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YcompilerSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_18 = YPmet(FUNCODEREF(fun_insert_boxX_18),LITREF(lit_28),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YcompilerSast_linearizeYinsert_boxX);
  if (T90 != YPfalse) {
    T89 = VARREF(YcompilerSast_linearizeYinsert_boxX);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_insert_boxX_18;
  T88 = CALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YcompilerSast_linearizeYinsert_boxX,T88);
  T92 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YcompilerSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_19 = YPmet(FUNCODEREF(fun_insert_boxX_19),LITREF(lit_28),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(YcompilerSast_linearizeYinsert_boxX);
  if (T95 != YPfalse) {
    T94 = VARREF(YcompilerSast_linearizeYinsert_boxX);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_insert_boxX_19;
  T93 = CALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YcompilerSast_linearizeYinsert_boxX,T93);
  T97 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YcompilerSastYLlocal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_20 = YPmet(FUNCODEREF(fun_insert_boxX_20),LITREF(lit_28),T97,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(YcompilerSast_linearizeYinsert_boxX);
  if (T100 != YPfalse) {
    T99 = VARREF(YcompilerSast_linearizeYinsert_boxX);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_insert_boxX_20;
  T98 = CALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YcompilerSast_linearizeYinsert_boxX,T98);
  T102 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YcompilerSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_21 = YPmet(FUNCODEREF(fun_insert_boxX_21),LITREF(lit_28),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(YcompilerSast_linearizeYinsert_boxX);
  if (T105 != YPfalse) {
    T104 = VARREF(YcompilerSast_linearizeYinsert_boxX);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_insert_boxX_21;
  T103 = CALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(YcompilerSast_linearizeYinsert_boxX,T103);
  T107 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YcompilerSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_22 = YPmet(FUNCODEREF(fun_insert_boxX_22),LITREF(lit_28),T107,ENVNUL,PNUL,YPfalse);
  T110 = BOUNDP(YcompilerSast_linearizeYinsert_boxX);
  if (T110 != YPfalse) {
    T109 = VARREF(YcompilerSast_linearizeYinsert_boxX);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_insert_boxX_22;
  T108 = CALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(YcompilerSast_linearizeYinsert_boxX,T108);
  T112 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YcompilerSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_23 = YPmet(FUNCODEREF(fun_insert_boxX_23),LITREF(lit_28),T112,ENVNUL,PNUL,YPfalse);
  T115 = BOUNDP(YcompilerSast_linearizeYinsert_boxX);
  if (T115 != YPfalse) {
    T114 = VARREF(YcompilerSast_linearizeYinsert_boxX);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_insert_boxX_23;
  T113 = CALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(YcompilerSast_linearizeYinsert_boxX,T113);
  lit_29 = YPPsym((P)"boxify-mutable-bindings");
  lit_30 = YPPsym((P)"form");
  lit_31 = YPPsym((P)"bindings");
  lit_32 = YPPsym((P)"loop");
  lit_33 = YPPsym((P)"res");
  T118 = YPsig(YPPlist(2,LITREF(lit_33),LITREF(lit_31)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_24 = YPmet(FUNCODEREF(fun_loop_24),LITREF(lit_32),T118,ENVNUL,PNUL,YPfalse);
  T117 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_31)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_boxify_mutable_bindings_25 = YPmet(FUNCODEREF(fun_boxify_mutable_bindings_25),LITREF(lit_29),T117,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(YcompilerSast_linearizeYboxify_mutable_bindings);
  if (T121 != YPfalse) {
    T120 = VARREF(YcompilerSast_linearizeYboxify_mutable_bindings);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_boxify_mutable_bindings_25;
  T119 = CALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(YcompilerSast_linearizeYboxify_mutable_bindings,T119);
  lit_34 = YPPsym((P)"do-do-call-references!");
  T123 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YcompilerSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_do_call_referencesX_26 = YPmet(FUNCODEREF(fun_do_do_call_referencesX_26),LITREF(lit_34),T123,ENVNUL,PNUL,YPfalse);
  T126 = BOUNDP(YcompilerSast_linearizeYdo_do_call_referencesX);
  if (T126 != YPfalse) {
    T125 = VARREF(YcompilerSast_linearizeYdo_do_call_referencesX);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_do_do_call_referencesX_26;
  T124 = CALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(YcompilerSast_linearizeYdo_do_call_referencesX,T124);
  lit_35 = YPPsym((P)"do-call-references!");
  T128 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YcompilerSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_call_referencesX_27 = YPmet(FUNCODEREF(fun_do_call_referencesX_27),LITREF(lit_35),T128,ENVNUL,PNUL,YPfalse);
  T131 = BOUNDP(YcompilerSast_linearizeYdo_call_referencesX);
  if (T131 != YPfalse) {
    T130 = VARREF(YcompilerSast_linearizeYdo_call_referencesX);
  } else {
    T130 = YPfalse;
  }
  T132 = fun_do_call_referencesX_27;
  T129 = CALL2(1,VARREF(YPdefine_method),T130,T132);
  VARSET(YcompilerSast_linearizeYdo_call_referencesX,T129);
  T133 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YcompilerSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_call_referencesX_28 = YPmet(FUNCODEREF(fun_do_call_referencesX_28),LITREF(lit_35),T133,ENVNUL,PNUL,YPfalse);
  T136 = BOUNDP(YcompilerSast_linearizeYdo_call_referencesX);
  if (T136 != YPfalse) {
    T135 = VARREF(YcompilerSast_linearizeYdo_call_referencesX);
  } else {
    T135 = YPfalse;
  }
  T137 = fun_do_call_referencesX_28;
  T134 = CALL2(1,VARREF(YPdefine_method),T135,T137);
  VARSET(YcompilerSast_linearizeYdo_call_referencesX,T134);
  lit_36 = YPPsym((P)"analyze-call-references");
  T138 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_analyze_call_references_29 = YPmet(FUNCODEREF(fun_analyze_call_references_29),LITREF(lit_36),T138,ENVNUL,PNUL,YPfalse);
  T141 = BOUNDP(YcompilerSast_linearizeYanalyze_call_references);
  if (T141 != YPfalse) {
    T140 = VARREF(YcompilerSast_linearizeYanalyze_call_references);
  } else {
    T140 = YPfalse;
  }
  T142 = fun_analyze_call_references_29;
  T139 = CALL2(1,VARREF(YPdefine_method),T140,T142);
  VARSET(YcompilerSast_linearizeYanalyze_call_references,T139);
  lit_37 = YPPsym((P)"do-do-dynamic-extent!");
  T143 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YcompilerSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_do_dynamic_extentX_30 = YPmet(FUNCODEREF(fun_do_do_dynamic_extentX_30),LITREF(lit_37),T143,ENVNUL,PNUL,YPfalse);
  T146 = BOUNDP(YcompilerSast_linearizeYdo_do_dynamic_extentX);
  if (T146 != YPfalse) {
    T145 = VARREF(YcompilerSast_linearizeYdo_do_dynamic_extentX);
  } else {
    T145 = YPfalse;
  }
  T147 = fun_do_do_dynamic_extentX_30;
  T144 = CALL2(1,VARREF(YPdefine_method),T145,T147);
  VARSET(YcompilerSast_linearizeYdo_do_dynamic_extentX,T144);
  lit_38 = YPPsym((P)"do-dynamic-extent!");
  T148 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YcompilerSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_dynamic_extentX_31 = YPmet(FUNCODEREF(fun_do_dynamic_extentX_31),LITREF(lit_38),T148,ENVNUL,PNUL,YPfalse);
  T151 = BOUNDP(YcompilerSast_linearizeYdo_dynamic_extentX);
  if (T151 != YPfalse) {
    T150 = VARREF(YcompilerSast_linearizeYdo_dynamic_extentX);
  } else {
    T150 = YPfalse;
  }
  T152 = fun_do_dynamic_extentX_31;
  T149 = CALL2(1,VARREF(YPdefine_method),T150,T152);
  VARSET(YcompilerSast_linearizeYdo_dynamic_extentX,T149);
  T153 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YcompilerSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_dynamic_extentX_32 = YPmet(FUNCODEREF(fun_do_dynamic_extentX_32),LITREF(lit_38),T153,ENVNUL,PNUL,YPfalse);
  T156 = BOUNDP(YcompilerSast_linearizeYdo_dynamic_extentX);
  if (T156 != YPfalse) {
    T155 = VARREF(YcompilerSast_linearizeYdo_dynamic_extentX);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_do_dynamic_extentX_32;
  T154 = CALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(YcompilerSast_linearizeYdo_dynamic_extentX,T154);
  lit_39 = YPPsym((P)"analyze-dynamic-extent");
  T158 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_analyze_dynamic_extent_33 = YPmet(FUNCODEREF(fun_analyze_dynamic_extent_33),LITREF(lit_39),T158,ENVNUL,PNUL,YPfalse);
  T161 = BOUNDP(YcompilerSast_linearizeYanalyze_dynamic_extent);
  if (T161 != YPfalse) {
    T160 = VARREF(YcompilerSast_linearizeYanalyze_dynamic_extent);
  } else {
    T160 = YPfalse;
  }
  T162 = fun_analyze_dynamic_extent_33;
  T159 = CALL2(1,VARREF(YPdefine_method),T160,T162);
  VARSET(YcompilerSast_linearizeYanalyze_dynamic_extent,T159);
  lit_40 = YPPsym((P)"do-do-call-upgrades!");
  T163 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YcompilerSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_do_call_upgradesX_34 = YPmet(FUNCODEREF(fun_do_do_call_upgradesX_34),LITREF(lit_40),T163,ENVNUL,PNUL,YPfalse);
  T166 = BOUNDP(YcompilerSast_linearizeYdo_do_call_upgradesX);
  if (T166 != YPfalse) {
    T165 = VARREF(YcompilerSast_linearizeYdo_do_call_upgradesX);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_do_do_call_upgradesX_34;
  T164 = CALL2(1,VARREF(YPdefine_method),T165,T167);
  VARSET(YcompilerSast_linearizeYdo_do_call_upgradesX,T164);
  lit_41 = YPPsym((P)"do-call-upgrades!");
  T168 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YcompilerSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_call_upgradesX_35 = YPmet(FUNCODEREF(fun_do_call_upgradesX_35),LITREF(lit_41),T168,ENVNUL,PNUL,YPfalse);
  T171 = BOUNDP(YcompilerSast_linearizeYdo_call_upgradesX);
  if (T171 != YPfalse) {
    T170 = VARREF(YcompilerSast_linearizeYdo_call_upgradesX);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_do_call_upgradesX_35;
  T169 = CALL2(1,VARREF(YPdefine_method),T170,T172);
  VARSET(YcompilerSast_linearizeYdo_call_upgradesX,T169);
  lit_42 = YPPsym((P)"unconstrained-type?");
  lit_43 = YPPsym((P)"b");
  T173 = YPsig(YPPlist(1,LITREF(lit_43)),YPPlist(1,VARREF(YcompilerSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_36 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_36),LITREF(lit_42),T173,ENVNUL,PNUL,YPfalse);
  T176 = BOUNDP(YcompilerSast_linearizeYunconstrained_typeQ);
  if (T176 != YPfalse) {
    T175 = VARREF(YcompilerSast_linearizeYunconstrained_typeQ);
  } else {
    T175 = YPfalse;
  }
  T177 = fun_unconstrained_typeQ_36;
  T174 = CALL2(1,VARREF(YPdefine_method),T175,T177);
  VARSET(YcompilerSast_linearizeYunconstrained_typeQ,T174);
  lit_44 = YPPsym((P)"runtime/boot");
  lit_45 = YPPsym((P)"<any>");
  T178 = YPsig(YPPlist(1,LITREF(lit_43)),YPPlist(1,VARREF(YcompilerSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_37 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_37),LITREF(lit_42),T178,ENVNUL,PNUL,YPfalse);
  T181 = BOUNDP(YcompilerSast_linearizeYunconstrained_typeQ);
  if (T181 != YPfalse) {
    T180 = VARREF(YcompilerSast_linearizeYunconstrained_typeQ);
  } else {
    T180 = YPfalse;
  }
  T182 = fun_unconstrained_typeQ_37;
  T179 = CALL2(1,VARREF(YPdefine_method),T180,T182);
  VARSET(YcompilerSast_linearizeYunconstrained_typeQ,T179);
  T183 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YcompilerSastYLmodule_binding_referenceG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_38 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_38),LITREF(lit_42),T183,ENVNUL,PNUL,YPfalse);
  T186 = BOUNDP(YcompilerSast_linearizeYunconstrained_typeQ);
  if (T186 != YPfalse) {
    T185 = VARREF(YcompilerSast_linearizeYunconstrained_typeQ);
  } else {
    T185 = YPfalse;
  }
  T187 = fun_unconstrained_typeQ_38;
  T184 = CALL2(1,VARREF(YPdefine_method),T185,T187);
  VARSET(YcompilerSast_linearizeYunconstrained_typeQ,T184);
  T188 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YcompilerSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_call_upgradesX_39 = YPmet(FUNCODEREF(fun_do_call_upgradesX_39),LITREF(lit_41),T188,ENVNUL,PNUL,YPfalse);
  T191 = BOUNDP(YcompilerSast_linearizeYdo_call_upgradesX);
  if (T191 != YPfalse) {
    T190 = VARREF(YcompilerSast_linearizeYdo_call_upgradesX);
  } else {
    T190 = YPfalse;
  }
  T192 = fun_do_call_upgradesX_39;
  T189 = CALL2(1,VARREF(YPdefine_method),T190,T192);
  VARSET(YcompilerSast_linearizeYdo_call_upgradesX,T189);
  lit_46 = YPPsym((P)"analyze-calls");
  T193 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_analyze_calls_40 = YPmet(FUNCODEREF(fun_analyze_calls_40),LITREF(lit_46),T193,ENVNUL,PNUL,YPfalse);
  T196 = BOUNDP(YcompilerSast_linearizeYanalyze_calls);
  if (T196 != YPfalse) {
    T195 = VARREF(YcompilerSast_linearizeYanalyze_calls);
  } else {
    T195 = YPfalse;
  }
  T197 = fun_analyze_calls_40;
  T194 = CALL2(1,VARREF(YPdefine_method),T195,T197);
  VARSET(YcompilerSast_linearizeYanalyze_calls,T194);
  lit_47 = YPPsym((P)"<free-reference>");
  T199 = (P)YPpair(VARREF(YcompilerSastYLreal_referenceG),Ynil);
  T198 = CALL2(1,VARREF(Yfab_class),LITREF(lit_47),T199);
  VARSET(YcompilerSast_linearizeYLfree_referenceG,T198);
  lit_48 = YPPsym((P)"reference-offset");
  T200 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YcompilerSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_offset_41 = YPmet(FUNCODEREF(fun_reference_offset_41),LITREF(lit_48),T200,ENVNUL,PNUL,YPfalse);
  T203 = BOUNDP(YcompilerSast_linearizeYreference_offset);
  if (T203 != YPfalse) {
    T202 = VARREF(YcompilerSast_linearizeYreference_offset);
  } else {
    T202 = YPfalse;
  }
  T204 = fun_reference_offset_41;
  T201 = CALL2(1,VARREF(YPdefine_method),T202,T204);
  VARSET(YcompilerSast_linearizeYreference_offset,T201);
  lit_49 = YPPsym((P)"reference-offset-setter");
  T206 = CALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T205 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,T206,VARREF(YcompilerSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_offset_setter_42 = YPmet(FUNCODEREF(fun_reference_offset_setter_42),LITREF(lit_49),T205,ENVNUL,PNUL,YPfalse);
  T209 = BOUNDP(YcompilerSast_linearizeYreference_offset_setter);
  if (T209 != YPfalse) {
    T208 = VARREF(YcompilerSast_linearizeYreference_offset_setter);
  } else {
    T208 = YPfalse;
  }
  T210 = fun_reference_offset_setter_42;
  T207 = CALL2(1,VARREF(YPdefine_method),T208,T210);
  VARSET(YcompilerSast_linearizeYreference_offset_setter,T207);
  T211 = CALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  CALLN(1,VARREF(YPprop),5,VARREF(YcompilerSast_linearizeYLfree_referenceG),VARREF(YcompilerSast_linearizeYreference_offset),VARREF(YcompilerSast_linearizeYreference_offset_setter),T211,VARREF(YPprop_unbound_error));
  lit_50 = YPPsym((P)"reference-self?");
  T212 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YcompilerSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_selfQ_43 = YPmet(FUNCODEREF(fun_reference_selfQ_43),LITREF(lit_50),T212,ENVNUL,PNUL,YPfalse);
  T215 = BOUNDP(YcompilerSast_linearizeYreference_selfQ);
  if (T215 != YPfalse) {
    T214 = VARREF(YcompilerSast_linearizeYreference_selfQ);
  } else {
    T214 = YPfalse;
  }
  T216 = fun_reference_selfQ_43;
  T213 = CALL2(1,VARREF(YPdefine_method),T214,T216);
  VARSET(YcompilerSast_linearizeYreference_selfQ,T213);
  lit_51 = YPPsym((P)"reference-self?-setter");
  T217 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLlogG),VARREF(YcompilerSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_selfQ_setter_44 = YPmet(FUNCODEREF(fun_reference_selfQ_setter_44),LITREF(lit_51),T217,ENVNUL,PNUL,YPfalse);
  T220 = BOUNDP(YcompilerSast_linearizeYreference_selfQ_setter);
  if (T220 != YPfalse) {
    T219 = VARREF(YcompilerSast_linearizeYreference_selfQ_setter);
  } else {
    T219 = YPfalse;
  }
  T221 = fun_reference_selfQ_setter_44;
  T218 = CALL2(1,VARREF(YPdefine_method),T219,T221);
  VARSET(YcompilerSast_linearizeYreference_selfQ_setter,T218);
  CALLN(1,VARREF(YPprop),5,VARREF(YcompilerSast_linearizeYLfree_referenceG),VARREF(YcompilerSast_linearizeYreference_selfQ),VARREF(YcompilerSast_linearizeYreference_selfQ_setter),VARREF(YLlogG),VARREF(YPprop_unbound_error));
  lit_52 = YPPsym((P)"lift!");
  T222 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_liftX_45 = YPmet(FUNCODEREF(fun_liftX_45),LITREF(lit_52),T222,ENVNUL,PNUL,YPfalse);
  T225 = BOUNDP(YcompilerSast_linearizeYliftX);
  if (T225 != YPfalse) {
    T224 = VARREF(YcompilerSast_linearizeYliftX);
  } else {
    T224 = YPfalse;
  }
  T226 = fun_liftX_45;
  T223 = CALL2(1,VARREF(YPdefine_method),T224,T226);
  VARSET(YcompilerSast_linearizeYliftX,T223);
  lit_53 = YPPsym((P)"lift-procedures!");
  lit_54 = YPPsym((P)"flat-fun");
  T229 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(YcompilerSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T228 = fun_lift_proceduresX_46 = YPmet(FUNCODEREF(fun_lift_proceduresX_46),LITREF(lit_53),T229,ENVNUL,PNUL,YPfalse);
  T233 = BOUNDP(YcompilerSast_linearizeYlift_proceduresX);
  if (T233 != YPfalse) {
    T232 = VARREF(YcompilerSast_linearizeYlift_proceduresX);
  } else {
    T232 = YPfalse;
  }
  T234 = fun_lift_proceduresX_46;
  T231 = CALL2(1,VARREF(YPdefine_method),T232,T234);
  T230 = VARSET(YcompilerSast_linearizeYlift_proceduresX,T231);
  T227 = T230;
  return T227;
}

P YcompilerSast_linearizeY___main_1___() {
  P T282,T281,T280,T279,T278,T277,T276,T275,T274,T273,T272,T271,T270,T269,T268,T267;
  P T266,T265,T264,T263,T262,T261,T260,T259,T258,T257,T256,T255,T254,T253,T252,T251;
  P T250,T249,T248,T247,T246,T245,T244,T243,T242,T241,T240,T239,T238,T237,T236,T235;
  P T234,T233,T232,T231,T230,T229,T228,T227,T226,T225,T224,T223,T222,T221,T220,T219;
  P T218,T217,T216,T215,T214,T213,T212,T211,T210,T209,T208,T207,T206,T205,T204,T203;
  P T202,T201,T200,T199,T198,T197,T196,T195,T194,T193,T192,T191,T190,T189,T188,T187;
  P T186,T185,T184,T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171;
  P T170,T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155;
  P T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139;
  P T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123;
  P T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107;
  P T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91;
  P T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75;
  P T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59;
  P T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T0 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(YcompilerSastYLlocal_referenceG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_47 = YPmet(FUNCODEREF(fun_lift_proceduresX_47),LITREF(lit_53),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YcompilerSast_linearizeYlift_proceduresX);
  if (T3 != YPfalse) {
    T2 = VARREF(YcompilerSast_linearizeYlift_proceduresX);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_lift_proceduresX_47;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YcompilerSast_linearizeYlift_proceduresX,T1);
  lit_55 = YPPsym((P)"adjoin-free-binding!");
  lit_56 = YPPsym((P)"ref");
  lit_57 = YPPsym((P)"check");
  lit_58 = YPPsym((P)"i");
  lit_59 = YPPsym((P)"free*");
  lit_60 = YPPsym((P)"add");
  T7 = YPsig(YPPlist(1,LITREF(lit_59)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_add_48 = YPmet(FUNCODEREF(fun_add_48),LITREF(lit_60),T7,ENVNUL,PNUL,YPfalse);
  T6 = YPsig(YPPlist(2,LITREF(lit_58),LITREF(lit_59)),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_check_49 = YPmet(FUNCODEREF(fun_check_49),LITREF(lit_57),T6,ENVNUL,PNUL,YPfalse);
  T5 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_56)),YPPlist(2,VARREF(YcompilerSastYLast_methodG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_adjoin_free_bindingX_50 = YPmet(FUNCODEREF(fun_adjoin_free_bindingX_50),LITREF(lit_55),T5,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YcompilerSast_linearizeYadjoin_free_bindingX);
  if (T10 != YPfalse) {
    T9 = VARREF(YcompilerSast_linearizeYadjoin_free_bindingX);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_adjoin_free_bindingX_50;
  T8 = CALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YcompilerSast_linearizeYadjoin_free_bindingX,T8);
  T12 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(YcompilerSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_51 = YPmet(FUNCODEREF(fun_lift_proceduresX_51),LITREF(lit_53),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YcompilerSast_linearizeYlift_proceduresX);
  if (T15 != YPfalse) {
    T14 = VARREF(YcompilerSast_linearizeYlift_proceduresX);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_lift_proceduresX_51;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YcompilerSast_linearizeYlift_proceduresX,T13);
  T17 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(YcompilerSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_52 = YPmet(FUNCODEREF(fun_lift_proceduresX_52),LITREF(lit_53),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YcompilerSast_linearizeYlift_proceduresX);
  if (T20 != YPfalse) {
    T19 = VARREF(YcompilerSast_linearizeYlift_proceduresX);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_lift_proceduresX_52;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YcompilerSast_linearizeYlift_proceduresX,T18);
  T22 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(YcompilerSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_53 = YPmet(FUNCODEREF(fun_lift_proceduresX_53),LITREF(lit_53),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YcompilerSast_linearizeYlift_proceduresX);
  if (T25 != YPfalse) {
    T24 = VARREF(YcompilerSast_linearizeYlift_proceduresX);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_lift_proceduresX_53;
  T23 = CALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YcompilerSast_linearizeYlift_proceduresX,T23);
  T27 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(YcompilerSastYLast_genericG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_54 = YPmet(FUNCODEREF(fun_lift_proceduresX_54),LITREF(lit_53),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YcompilerSast_linearizeYlift_proceduresX);
  if (T30 != YPfalse) {
    T29 = VARREF(YcompilerSast_linearizeYlift_proceduresX);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_lift_proceduresX_54;
  T28 = CALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YcompilerSast_linearizeYlift_proceduresX,T28);
  T32 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(YcompilerSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_55 = YPmet(FUNCODEREF(fun_lift_proceduresX_55),LITREF(lit_53),T32,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(YcompilerSast_linearizeYlift_proceduresX);
  if (T35 != YPfalse) {
    T34 = VARREF(YcompilerSast_linearizeYlift_proceduresX);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_lift_proceduresX_55;
  T33 = CALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YcompilerSast_linearizeYlift_proceduresX,T33);
  lit_61 = YPPsym((P)"<flattened-program>");
  T38 = (P)YPpair(VARREF(YcompilerSastYLcomputed_programG),Ynil);
  T37 = CALL2(1,VARREF(Yfab_class),LITREF(lit_61),T38);
  VARSET(YcompilerSast_linearizeYLflattened_programG,T37);
  lit_62 = YPPsym((P)"program-form");
  T39 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YcompilerSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_form_56 = YPmet(FUNCODEREF(fun_program_form_56),LITREF(lit_62),T39,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(YcompilerSast_linearizeYprogram_form);
  if (T42 != YPfalse) {
    T41 = VARREF(YcompilerSast_linearizeYprogram_form);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_program_form_56;
  T40 = CALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YcompilerSast_linearizeYprogram_form,T40);
  lit_63 = YPPsym((P)"program-form-setter");
  T45 = CALL1(1,VARREF(YgooStypesYtQ),VARREF(YcompilerSastYLprogramG));
  T44 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,T45,VARREF(YcompilerSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_form_setter_57 = YPmet(FUNCODEREF(fun_program_form_setter_57),LITREF(lit_63),T44,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YcompilerSast_linearizeYprogram_form_setter);
  if (T48 != YPfalse) {
    T47 = VARREF(YcompilerSast_linearizeYprogram_form_setter);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_program_form_setter_57;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YcompilerSast_linearizeYprogram_form_setter,T46);
  T50 = CALL1(1,VARREF(YgooStypesYtQ),VARREF(YcompilerSastYLprogramG));
  CALLN(1,VARREF(YPprop),5,VARREF(YcompilerSast_linearizeYLflattened_programG),VARREF(YcompilerSast_linearizeYprogram_form),VARREF(YcompilerSast_linearizeYprogram_form_setter),T50,VARREF(YPprop_unbound_error));
  lit_64 = YPPsym((P)"program-quotations");
  T51 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YcompilerSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_quotations_58 = YPmet(FUNCODEREF(fun_program_quotations_58),LITREF(lit_64),T51,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(YcompilerSast_linearizeYprogram_quotations);
  if (T54 != YPfalse) {
    T53 = VARREF(YcompilerSast_linearizeYprogram_quotations);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_program_quotations_58;
  T52 = CALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YcompilerSast_linearizeYprogram_quotations,T52);
  lit_65 = YPPsym((P)"program-quotations-setter");
  T56 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YcompilerSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_quotations_setter_59 = YPmet(FUNCODEREF(fun_program_quotations_setter_59),LITREF(lit_65),T56,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(YcompilerSast_linearizeYprogram_quotations_setter);
  if (T59 != YPfalse) {
    T58 = VARREF(YcompilerSast_linearizeYprogram_quotations_setter);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_program_quotations_setter_59;
  T57 = CALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YcompilerSast_linearizeYprogram_quotations_setter,T57);
  T61 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_60 = YPmet(FUNCODEREF(fun_60),YPfalse,T61,ENVNUL,PNUL,YPfalse);
  T62 = fun_60;
  CALLN(1,VARREF(YPprop),5,VARREF(YcompilerSast_linearizeYLflattened_programG),VARREF(YcompilerSast_linearizeYprogram_quotations),VARREF(YcompilerSast_linearizeYprogram_quotations_setter),VARREF(YLanyG),T62);
  lit_66 = YPPsym((P)"program-definitions");
  T63 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YcompilerSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_definitions_61 = YPmet(FUNCODEREF(fun_program_definitions_61),LITREF(lit_66),T63,ENVNUL,PNUL,YPfalse);
  T66 = BOUNDP(YcompilerSast_linearizeYprogram_definitions);
  if (T66 != YPfalse) {
    T65 = VARREF(YcompilerSast_linearizeYprogram_definitions);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_program_definitions_61;
  T64 = CALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YcompilerSast_linearizeYprogram_definitions,T64);
  lit_67 = YPPsym((P)"program-definitions-setter");
  T68 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YcompilerSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_definitions_setter_62 = YPmet(FUNCODEREF(fun_program_definitions_setter_62),LITREF(lit_67),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(YcompilerSast_linearizeYprogram_definitions_setter);
  if (T71 != YPfalse) {
    T70 = VARREF(YcompilerSast_linearizeYprogram_definitions_setter);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_program_definitions_setter_62;
  T69 = CALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YcompilerSast_linearizeYprogram_definitions_setter,T69);
  T73 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPmet(FUNCODEREF(fun_63),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T74 = fun_63;
  CALLN(1,VARREF(YPprop),5,VARREF(YcompilerSast_linearizeYLflattened_programG),VARREF(YcompilerSast_linearizeYprogram_definitions),VARREF(YcompilerSast_linearizeYprogram_definitions_setter),VARREF(YLanyG),T74);
  lit_68 = YPPsym((P)"<top-level-form>");
  T76 = (P)YPpair(VARREF(YcompilerSastYLcomputed_programG),Ynil);
  T75 = CALL2(1,VARREF(Yfab_class),LITREF(lit_68),T76);
  VARSET(YcompilerSast_linearizeYLtop_level_formG,T75);
  lit_69 = YPPsym((P)"form-program");
  T77 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YcompilerSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_program_64 = YPmet(FUNCODEREF(fun_form_program_64),LITREF(lit_69),T77,ENVNUL,PNUL,YPfalse);
  T80 = BOUNDP(YcompilerSast_linearizeYform_program);
  if (T80 != YPfalse) {
    T79 = VARREF(YcompilerSast_linearizeYform_program);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_form_program_64;
  T78 = CALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(YcompilerSast_linearizeYform_program,T78);
  lit_70 = YPPsym((P)"form-program-setter");
  T82 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YcompilerSastYLprogramG),VARREF(YcompilerSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_program_setter_65 = YPmet(FUNCODEREF(fun_form_program_setter_65),LITREF(lit_70),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(YcompilerSast_linearizeYform_program_setter);
  if (T85 != YPfalse) {
    T84 = VARREF(YcompilerSast_linearizeYform_program_setter);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_form_program_setter_65;
  T83 = CALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YcompilerSast_linearizeYform_program_setter,T83);
  CALLN(1,VARREF(YPprop),5,VARREF(YcompilerSast_linearizeYLtop_level_formG),VARREF(YcompilerSast_linearizeYform_program),VARREF(YcompilerSast_linearizeYform_program_setter),VARREF(YcompilerSastYLprogramG),VARREF(YPprop_unbound_error));
  lit_71 = YPPsym((P)"form-quotations");
  T87 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YcompilerSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_quotations_66 = YPmet(FUNCODEREF(fun_form_quotations_66),LITREF(lit_71),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YcompilerSast_linearizeYform_quotations);
  if (T90 != YPfalse) {
    T89 = VARREF(YcompilerSast_linearizeYform_quotations);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_form_quotations_66;
  T88 = CALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YcompilerSast_linearizeYform_quotations,T88);
  lit_72 = YPPsym((P)"form-quotations-setter");
  T92 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YcompilerSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_quotations_setter_67 = YPmet(FUNCODEREF(fun_form_quotations_setter_67),LITREF(lit_72),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(YcompilerSast_linearizeYform_quotations_setter);
  if (T95 != YPfalse) {
    T94 = VARREF(YcompilerSast_linearizeYform_quotations_setter);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_form_quotations_setter_67;
  T93 = CALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YcompilerSast_linearizeYform_quotations_setter,T93);
  T97 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_68 = YPmet(FUNCODEREF(fun_68),YPfalse,T97,ENVNUL,PNUL,YPfalse);
  T98 = fun_68;
  CALLN(1,VARREF(YPprop),5,VARREF(YcompilerSast_linearizeYLtop_level_formG),VARREF(YcompilerSast_linearizeYform_quotations),VARREF(YcompilerSast_linearizeYform_quotations_setter),VARREF(YLanyG),T98);
  lit_73 = YPPsym((P)"form-definitions");
  T99 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YcompilerSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_definitions_69 = YPmet(FUNCODEREF(fun_form_definitions_69),LITREF(lit_73),T99,ENVNUL,PNUL,YPfalse);
  T102 = BOUNDP(YcompilerSast_linearizeYform_definitions);
  if (T102 != YPfalse) {
    T101 = VARREF(YcompilerSast_linearizeYform_definitions);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_form_definitions_69;
  T100 = CALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(YcompilerSast_linearizeYform_definitions,T100);
  lit_74 = YPPsym((P)"form-definitions-setter");
  T104 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YcompilerSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_definitions_setter_70 = YPmet(FUNCODEREF(fun_form_definitions_setter_70),LITREF(lit_74),T104,ENVNUL,PNUL,YPfalse);
  T107 = BOUNDP(YcompilerSast_linearizeYform_definitions_setter);
  if (T107 != YPfalse) {
    T106 = VARREF(YcompilerSast_linearizeYform_definitions_setter);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_form_definitions_setter_70;
  T105 = CALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(YcompilerSast_linearizeYform_definitions_setter,T105);
  T109 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T109,ENVNUL,PNUL,YPfalse);
  T110 = fun_71;
  CALLN(1,VARREF(YPprop),5,VARREF(YcompilerSast_linearizeYLtop_level_formG),VARREF(YcompilerSast_linearizeYform_definitions),VARREF(YcompilerSast_linearizeYform_definitions_setter),VARREF(YLanyG),T110);
  lit_75 = YPPsym((P)"<closure-creation>");
  T112 = (P)YPpair(VARREF(YcompilerSastYLcomputed_programG),Ynil);
  T111 = CALL2(1,VARREF(Yfab_class),LITREF(lit_75),T112);
  VARSET(YcompilerSast_linearizeYLclosure_creationG,T111);
  lit_76 = YPPsym((P)"closure-creation-index");
  T113 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YcompilerSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_closure_creation_index_72 = YPmet(FUNCODEREF(fun_closure_creation_index_72),LITREF(lit_76),T113,ENVNUL,PNUL,YPfalse);
  T116 = BOUNDP(YcompilerSast_linearizeYclosure_creation_index);
  if (T116 != YPfalse) {
    T115 = VARREF(YcompilerSast_linearizeYclosure_creation_index);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_closure_creation_index_72;
  T114 = CALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(YcompilerSast_linearizeYclosure_creation_index,T114);
  lit_77 = YPPsym((P)"closure-creation-index-setter");
  T118 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YcompilerSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_closure_creation_index_setter_73 = YPmet(FUNCODEREF(fun_closure_creation_index_setter_73),LITREF(lit_77),T118,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(YcompilerSast_linearizeYclosure_creation_index_setter);
  if (T121 != YPfalse) {
    T120 = VARREF(YcompilerSast_linearizeYclosure_creation_index_setter);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_closure_creation_index_setter_73;
  T119 = CALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(YcompilerSast_linearizeYclosure_creation_index_setter,T119);
  CALLN(1,VARREF(YPprop),5,VARREF(YcompilerSast_linearizeYLclosure_creationG),VARREF(YcompilerSast_linearizeYclosure_creation_index),VARREF(YcompilerSast_linearizeYclosure_creation_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_78 = YPPsym((P)"closure-creation-free");
  T123 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YcompilerSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_closure_creation_free_74 = YPmet(FUNCODEREF(fun_closure_creation_free_74),LITREF(lit_78),T123,ENVNUL,PNUL,YPfalse);
  T126 = BOUNDP(YcompilerSast_linearizeYclosure_creation_free);
  if (T126 != YPfalse) {
    T125 = VARREF(YcompilerSast_linearizeYclosure_creation_free);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_closure_creation_free_74;
  T124 = CALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(YcompilerSast_linearizeYclosure_creation_free,T124);
  lit_79 = YPPsym((P)"closure-creation-free-setter");
  T128 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YcompilerSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_closure_creation_free_setter_75 = YPmet(FUNCODEREF(fun_closure_creation_free_setter_75),LITREF(lit_79),T128,ENVNUL,PNUL,YPfalse);
  T131 = BOUNDP(YcompilerSast_linearizeYclosure_creation_free_setter);
  if (T131 != YPfalse) {
    T130 = VARREF(YcompilerSast_linearizeYclosure_creation_free_setter);
  } else {
    T130 = YPfalse;
  }
  T132 = fun_closure_creation_free_setter_75;
  T129 = CALL2(1,VARREF(YPdefine_method),T130,T132);
  VARSET(YcompilerSast_linearizeYclosure_creation_free_setter,T129);
  CALLN(1,VARREF(YPprop),5,VARREF(YcompilerSast_linearizeYLclosure_creationG),VARREF(YcompilerSast_linearizeYclosure_creation_free),VARREF(YcompilerSast_linearizeYclosure_creation_free_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_80 = YPPsym((P)"flatten-seqs");
  T133 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_flatten_seqs_76 = YPmet(FUNCODEREF(fun_flatten_seqs_76),LITREF(lit_80),T133,ENVNUL,PNUL,YPfalse);
  T136 = BOUNDP(YcompilerSast_linearizeYflatten_seqs);
  if (T136 != YPfalse) {
    T135 = VARREF(YcompilerSast_linearizeYflatten_seqs);
  } else {
    T135 = YPfalse;
  }
  T137 = fun_flatten_seqs_76;
  T134 = CALL2(1,VARREF(YPdefine_method),T135,T137);
  VARSET(YcompilerSast_linearizeYflatten_seqs,T134);
  lit_81 = YPPsym((P)"s");
  lit_82 = YPPsym((P)"r");
  lit_83 = YPPsym((P)"inner");
  lit_84 = YPPsym((P)"ss");
  T140 = YPsig(YPPlist(2,LITREF(lit_84),LITREF(lit_82)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_inner_77 = YPmet(FUNCODEREF(fun_inner_77),LITREF(lit_83),T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(YPPlist(2,LITREF(lit_81),LITREF(lit_82)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_78 = YPmet(FUNCODEREF(fun_loop_78),LITREF(lit_32),T139,ENVNUL,PNUL,YPfalse);
  T138 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YcompilerSastYLsequentialG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_flatten_seqs_79 = YPmet(FUNCODEREF(fun_flatten_seqs_79),LITREF(lit_80),T138,ENVNUL,PNUL,YPfalse);
  T143 = BOUNDP(YcompilerSast_linearizeYflatten_seqs);
  if (T143 != YPfalse) {
    T142 = VARREF(YcompilerSast_linearizeYflatten_seqs);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_flatten_seqs_79;
  T141 = CALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(YcompilerSast_linearizeYflatten_seqs,T141);
  lit_85 = YPPsym((P)"as-top-level-forms");
  lit_86 = YPPsym((P)"programs");
  T146 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T146,ENVNUL,PNUL,YPfalse);
  T145 = YPsig(YPPlist(1,LITREF(lit_86)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_top_level_forms_81 = YPmet(FUNCODEREF(fun_as_top_level_forms_81),LITREF(lit_85),T145,ENVNUL,PNUL,YPfalse);
  T149 = BOUNDP(YcompilerSast_linearizeYas_top_level_forms);
  if (T149 != YPfalse) {
    T148 = VARREF(YcompilerSast_linearizeYas_top_level_forms);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_as_top_level_forms_81;
  T147 = CALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(YcompilerSast_linearizeYas_top_level_forms,T147);
  lit_87 = YPPsym((P)"extract-things!");
  T152 = YPsig(YPPlist(1,LITREF(lit_30)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_extract_thingsX_83 = YPmet(FUNCODEREF(fun_extract_thingsX_83),LITREF(lit_87),T151,ENVNUL,PNUL,YPfalse);
  T155 = BOUNDP(YcompilerSast_linearizeYextract_thingsX);
  if (T155 != YPfalse) {
    T154 = VARREF(YcompilerSast_linearizeYextract_thingsX);
  } else {
    T154 = YPfalse;
  }
  T156 = fun_extract_thingsX_83;
  T153 = CALL2(1,VARREF(YPdefine_method),T154,T156);
  VARSET(YcompilerSast_linearizeYextract_thingsX,T153);
  lit_88 = YPPsym((P)"extract!");
  lit_89 = YPPsym((P)"result");
  T157 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_30),LITREF(lit_89)),YPPlist(3,VARREF(YcompilerSastYLprogramG),VARREF(YcompilerSast_linearizeYLtop_level_formG),VARREF(YcompilerSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_84 = YPmet(FUNCODEREF(fun_extractX_84),LITREF(lit_88),T157,ENVNUL,PNUL,YPfalse);
  T160 = BOUNDP(YcompilerSast_linearizeYextractX);
  if (T160 != YPfalse) {
    T159 = VARREF(YcompilerSast_linearizeYextractX);
  } else {
    T159 = YPfalse;
  }
  T161 = fun_extractX_84;
  T158 = CALL2(1,VARREF(YPdefine_method),T159,T161);
  VARSET(YcompilerSast_linearizeYextractX,T158);
  lit_90 = YPPsym((P)"quotation");
  T162 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_30),LITREF(lit_89)),YPPlist(3,VARREF(YcompilerSastYLconstantG),VARREF(YcompilerSast_linearizeYLtop_level_formG),VARREF(YcompilerSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_85 = YPmet(FUNCODEREF(fun_extractX_85),LITREF(lit_88),T162,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(YcompilerSast_linearizeYextractX);
  if (T165 != YPfalse) {
    T164 = VARREF(YcompilerSast_linearizeYextractX);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_extractX_85;
  T163 = CALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(YcompilerSast_linearizeYextractX,T163);
  T167 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_30),LITREF(lit_89)),YPPlist(3,VARREF(YcompilerSastYLraw_constantG),VARREF(YcompilerSast_linearizeYLtop_level_formG),VARREF(YcompilerSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_86 = YPmet(FUNCODEREF(fun_extractX_86),LITREF(lit_88),T167,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(YcompilerSast_linearizeYextractX);
  if (T170 != YPfalse) {
    T169 = VARREF(YcompilerSast_linearizeYextractX);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_extractX_86;
  T168 = CALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YcompilerSast_linearizeYextractX,T168);
  lit_91 = YPPsym((P)"binding");
  T173 = YPsig(YPPlist(1,LITREF(lit_91)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_30),LITREF(lit_89)),YPPlist(3,VARREF(YcompilerSastYLast_methodG),VARREF(YcompilerSast_linearizeYLtop_level_formG),VARREF(YcompilerSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_88 = YPmet(FUNCODEREF(fun_extractX_88),LITREF(lit_88),T172,ENVNUL,PNUL,YPfalse);
  T176 = BOUNDP(YcompilerSast_linearizeYextractX);
  if (T176 != YPfalse) {
    T175 = VARREF(YcompilerSast_linearizeYextractX);
  } else {
    T175 = YPfalse;
  }
  T177 = fun_extractX_88;
  T174 = CALL2(1,VARREF(YPdefine_method),T175,T177);
  VARSET(YcompilerSast_linearizeYextractX,T174);
  T178 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_30),LITREF(lit_89)),YPPlist(3,VARREF(YcompilerSastYLast_primitive_definitionG),VARREF(YcompilerSast_linearizeYLtop_level_formG),VARREF(YcompilerSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_89 = YPmet(FUNCODEREF(fun_extractX_89),LITREF(lit_88),T178,ENVNUL,PNUL,YPfalse);
  T181 = BOUNDP(YcompilerSast_linearizeYextractX);
  if (T181 != YPfalse) {
    T180 = VARREF(YcompilerSast_linearizeYextractX);
  } else {
    T180 = YPfalse;
  }
  T182 = fun_extractX_89;
  T179 = CALL2(1,VARREF(YPdefine_method),T180,T182);
  VARSET(YcompilerSast_linearizeYextractX,T179);
  lit_92 = YPPsym((P)"adjoin-definition!");
  T183 = YPsig(YPPlist(3,LITREF(lit_30),LITREF(lit_89),LITREF(lit_8)),YPPlist(3,VARREF(YcompilerSast_linearizeYLtop_level_formG),VARREF(YcompilerSast_linearizeYLflattened_programG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_adjoin_definitionX_90 = YPmet(FUNCODEREF(fun_adjoin_definitionX_90),LITREF(lit_92),T183,ENVNUL,PNUL,YPfalse);
  T186 = BOUNDP(YcompilerSast_linearizeYadjoin_definitionX);
  if (T186 != YPfalse) {
    T185 = VARREF(YcompilerSast_linearizeYadjoin_definitionX);
  } else {
    T185 = YPfalse;
  }
  T187 = fun_adjoin_definitionX_90;
  T184 = CALL2(1,VARREF(YPdefine_method),T185,T187);
  VARSET(YcompilerSast_linearizeYadjoin_definitionX,T184);
  lit_93 = YPPsym((P)"split-program");
  lit_94 = YPPsym((P)"max-count");
  T188 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_94)),YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_split_program_91 = YPmet(FUNCODEREF(fun_split_program_91),LITREF(lit_93),T188,ENVNUL,PNUL,YPfalse);
  T191 = BOUNDP(YcompilerSast_linearizeYsplit_program);
  if (T191 != YPfalse) {
    T190 = VARREF(YcompilerSast_linearizeYsplit_program);
  } else {
    T190 = YPfalse;
  }
  T192 = fun_split_program_91;
  T189 = CALL2(1,VARREF(YPdefine_method),T190,T192);
  VARSET(YcompilerSast_linearizeYsplit_program,T189);
  lit_95 = YPPsym((P)"forms");
  lit_96 = YPPsym((P)"es");
  lit_97 = YPPsym((P)"count");
  T195 = YPsig(YPPlist(3,LITREF(lit_33),LITREF(lit_96),LITREF(lit_97)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_inner_92 = YPmet(FUNCODEREF(fun_inner_92),LITREF(lit_83),T195,ENVNUL,PNUL,YPfalse);
  T194 = YPsig(YPPlist(2,LITREF(lit_95),LITREF(lit_81)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_93 = YPmet(FUNCODEREF(fun_loop_93),LITREF(lit_32),T194,ENVNUL,PNUL,YPfalse);
  T193 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_94)),YPPlist(2,VARREF(YcompilerSastYLsequentialG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_split_program_94 = YPmet(FUNCODEREF(fun_split_program_94),LITREF(lit_93),T193,ENVNUL,PNUL,YPfalse);
  T198 = BOUNDP(YcompilerSast_linearizeYsplit_program);
  if (T198 != YPfalse) {
    T197 = VARREF(YcompilerSast_linearizeYsplit_program);
  } else {
    T197 = YPfalse;
  }
  T199 = fun_split_program_94;
  T196 = CALL2(1,VARREF(YPdefine_method),T197,T199);
  VARSET(YcompilerSast_linearizeYsplit_program,T196);
  lit_98 = YPPsym((P)"closurize-main!");
  lit_99 = YPPsym((P)"calls");
  lit_100 = YPPsym((P)"defns");
  lit_101 = YPsb((P)"---main-");
  lit_102 = YPsb((P)"---");
  lit_103 = YPPsym((P)"predefined");
  T201 = YPsig(YPPlist(4,LITREF(lit_99),LITREF(lit_100),LITREF(lit_58),LITREF(lit_95)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_loop_95 = YPmet(FUNCODEREF(fun_loop_95),LITREF(lit_32),T201,ENVNUL,PNUL,YPfalse);
  T200 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_82),LITREF(lit_94)),YPPlist(3,VARREF(YcompilerSast_linearizeYLflattened_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YcompilerSast_linearizeYLflattened_programG),Ynil);
  fun_closurize_mainX_96 = YPmet(FUNCODEREF(fun_closurize_mainX_96),LITREF(lit_98),T200,ENVNUL,PNUL,YPfalse);
  T204 = BOUNDP(YcompilerSast_linearizeYclosurize_mainX);
  if (T204 != YPfalse) {
    T203 = VARREF(YcompilerSast_linearizeYclosurize_mainX);
  } else {
    T203 = YPfalse;
  }
  T205 = fun_closurize_mainX_96;
  T202 = CALL2(1,VARREF(YPdefine_method),T203,T205);
  VARSET(YcompilerSast_linearizeYclosurize_mainX,T202);
  lit_104 = YPPsym((P)"gather-temporaries!");
  lit_105 = YPPsym((P)"def");
  T207 = YPsig(YPPlist(1,LITREF(lit_105)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPmet(FUNCODEREF(fun_97),YPfalse,T207,ENVNUL,PNUL,YPfalse);
  T206 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YcompilerSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_gather_temporariesX_98 = YPmet(FUNCODEREF(fun_gather_temporariesX_98),LITREF(lit_104),T206,ENVNUL,PNUL,YPfalse);
  T210 = BOUNDP(YcompilerSast_linearizeYgather_temporariesX);
  if (T210 != YPfalse) {
    T209 = VARREF(YcompilerSast_linearizeYgather_temporariesX);
  } else {
    T209 = YPfalse;
  }
  T211 = fun_gather_temporariesX_98;
  T208 = CALL2(1,VARREF(YPdefine_method),T209,T211);
  VARSET(YcompilerSast_linearizeYgather_temporariesX,T208);
  lit_106 = YPPsym((P)"collect-temporaries!");
  T212 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_82)),YPPlist(3,VARREF(YcompilerSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_99 = YPmet(FUNCODEREF(fun_collect_temporariesX_99),LITREF(lit_106),T212,ENVNUL,PNUL,YPfalse);
  T215 = BOUNDP(YcompilerSast_linearizeYcollect_temporariesX);
  if (T215 != YPfalse) {
    T214 = VARREF(YcompilerSast_linearizeYcollect_temporariesX);
  } else {
    T214 = YPfalse;
  }
  T216 = fun_collect_temporariesX_99;
  T213 = CALL2(1,VARREF(YPdefine_method),T214,T216);
  VARSET(YcompilerSast_linearizeYcollect_temporariesX,T213);
  T217 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_82)),YPPlist(3,VARREF(YcompilerSastYLlocal_referenceG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_100 = YPmet(FUNCODEREF(fun_collect_temporariesX_100),LITREF(lit_106),T217,ENVNUL,PNUL,YPfalse);
  T220 = BOUNDP(YcompilerSast_linearizeYcollect_temporariesX);
  if (T220 != YPfalse) {
    T219 = VARREF(YcompilerSast_linearizeYcollect_temporariesX);
  } else {
    T219 = YPfalse;
  }
  T221 = fun_collect_temporariesX_100;
  T218 = CALL2(1,VARREF(YPdefine_method),T219,T221);
  VARSET(YcompilerSast_linearizeYcollect_temporariesX,T218);
  T222 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_82)),YPPlist(3,VARREF(YcompilerSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_101 = YPmet(FUNCODEREF(fun_collect_temporariesX_101),LITREF(lit_106),T222,ENVNUL,PNUL,YPfalse);
  T225 = BOUNDP(YcompilerSast_linearizeYcollect_temporariesX);
  if (T225 != YPfalse) {
    T224 = VARREF(YcompilerSast_linearizeYcollect_temporariesX);
  } else {
    T224 = YPfalse;
  }
  T226 = fun_collect_temporariesX_101;
  T223 = CALL2(1,VARREF(YPdefine_method),T224,T226);
  VARSET(YcompilerSast_linearizeYcollect_temporariesX,T223);
  T227 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_82)),YPPlist(3,VARREF(YcompilerSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_102 = YPmet(FUNCODEREF(fun_collect_temporariesX_102),LITREF(lit_106),T227,ENVNUL,PNUL,YPfalse);
  T230 = BOUNDP(YcompilerSast_linearizeYcollect_temporariesX);
  if (T230 != YPfalse) {
    T229 = VARREF(YcompilerSast_linearizeYcollect_temporariesX);
  } else {
    T229 = YPfalse;
  }
  T231 = fun_collect_temporariesX_102;
  T228 = CALL2(1,VARREF(YPdefine_method),T229,T231);
  VARSET(YcompilerSast_linearizeYcollect_temporariesX,T228);
  lit_107 = YPPsym((P)"adjoin-temporary-variables!");
  lit_108 = YPPsym((P)"new-bindings");
  lit_109 = YPPsym((P)"adjoin");
  lit_110 = YPPsym((P)"temps");
  T233 = YPsig(YPPlist(2,LITREF(lit_110),LITREF(lit_31)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_adjoin_103 = YPmet(FUNCODEREF(fun_adjoin_103),LITREF(lit_109),T233,ENVNUL,PNUL,YPfalse);
  T232 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_108)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_adjoin_temporary_variablesX_104 = YPmet(FUNCODEREF(fun_adjoin_temporary_variablesX_104),LITREF(lit_107),T232,ENVNUL,PNUL,YPfalse);
  T236 = BOUNDP(YcompilerSast_linearizeYadjoin_temporary_variablesX);
  if (T236 != YPfalse) {
    T235 = VARREF(YcompilerSast_linearizeYadjoin_temporary_variablesX);
  } else {
    T235 = YPfalse;
  }
  T237 = fun_adjoin_temporary_variablesX_104;
  T234 = CALL2(1,VARREF(YPdefine_method),T235,T237);
  VARSET(YcompilerSast_linearizeYadjoin_temporary_variablesX,T234);
  lit_111 = YPPsym((P)"<renamed-local-binding>");
  T239 = (P)YPpair(VARREF(YcompilerSastYLlocal_bindingG),Ynil);
  T238 = CALL2(1,VARREF(Yfab_class),LITREF(lit_111),T239);
  VARSET(YcompilerSast_linearizeYLrenamed_local_bindingG,T238);
  lit_112 = YPPsym((P)"binding-index");
  T240 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YcompilerSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_index_105 = YPmet(FUNCODEREF(fun_binding_index_105),LITREF(lit_112),T240,ENVNUL,PNUL,YPfalse);
  T243 = BOUNDP(YcompilerSastYbinding_index);
  if (T243 != YPfalse) {
    T242 = VARREF(YcompilerSastYbinding_index);
  } else {
    T242 = YPfalse;
  }
  T244 = fun_binding_index_105;
  T241 = CALL2(1,VARREF(YPdefine_method),T242,T244);
  VARSET(YcompilerSastYbinding_index,T241);
  lit_113 = YPPsym((P)"binding-index-setter");
  T245 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YcompilerSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_index_setter_106 = YPmet(FUNCODEREF(fun_binding_index_setter_106),LITREF(lit_113),T245,ENVNUL,PNUL,YPfalse);
  T248 = BOUNDP(YcompilerSastYbinding_index_setter);
  if (T248 != YPfalse) {
    T247 = VARREF(YcompilerSastYbinding_index_setter);
  } else {
    T247 = YPfalse;
  }
  T249 = fun_binding_index_setter_106;
  T246 = CALL2(1,VARREF(YPdefine_method),T247,T249);
  VARSET(YcompilerSastYbinding_index_setter,T246);
  CALLN(1,VARREF(YPprop),5,VARREF(YcompilerSast_linearizeYLrenamed_local_bindingG),VARREF(YcompilerSastYbinding_index),VARREF(YcompilerSastYbinding_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  VARSET(YcompilerSast_linearizeYTrenaming_bindings_counterT,YPint((P)0));
  lit_114 = YPPsym((P)"new-renamed-binding");
  T250 = YPsig(YPPlist(1,LITREF(lit_91)),YPPlist(1,VARREF(YcompilerSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_new_renamed_binding_107 = YPmet(FUNCODEREF(fun_new_renamed_binding_107),LITREF(lit_114),T250,ENVNUL,PNUL,YPfalse);
  T253 = BOUNDP(YcompilerSast_linearizeYnew_renamed_binding);
  if (T253 != YPfalse) {
    T252 = VARREF(YcompilerSast_linearizeYnew_renamed_binding);
  } else {
    T252 = YPfalse;
  }
  T254 = fun_new_renamed_binding_107;
  T251 = CALL2(1,VARREF(YPdefine_method),T252,T254);
  VARSET(YcompilerSast_linearizeYnew_renamed_binding,T251);
  VARSET(YcompilerSast_linearizeYTregister_passiveQT,YPfalse);
  lit_115 = YPPsym((P)"register-allocate!");
  lit_116 = YPPsym((P)"register-passive?");
  T258 = YPsig(YPPlist(1,LITREF(lit_105)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_108 = YPmet(FUNCODEREF(fun_108),YPfalse,T258,ENVNUL,PNUL,YPfalse);
  T257 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_109 = YPmet(FUNCODEREF(fun_109),YPfalse,T257,ENVNUL,PNUL,YPfalse);
  T256 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_110 = YPmet(FUNCODEREF(fun_110),YPfalse,T256,ENVNUL,PNUL,YPfalse);
  T255 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_116)),YPPlist(2,VARREF(YcompilerSastYLprogramG),VARREF(YLlogG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_register_allocateX_111 = YPmet(FUNCODEREF(fun_register_allocateX_111),LITREF(lit_115),T255,ENVNUL,PNUL,YPfalse);
  T261 = BOUNDP(YcompilerSast_linearizeYregister_allocateX);
  if (T261 != YPfalse) {
    T260 = VARREF(YcompilerSast_linearizeYregister_allocateX);
  } else {
    T260 = YPfalse;
  }
  T262 = fun_register_allocateX_111;
  T259 = CALL2(1,VARREF(YPdefine_method),T260,T262);
  VARSET(YcompilerSast_linearizeYregister_allocateX,T259);
  lit_117 = YPPsym((P)"allocate-register");
  lit_118 = YPPsym((P)"val?");
  T263 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(YcompilerSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_allocate_register_112 = YPmet(FUNCODEREF(fun_allocate_register_112),LITREF(lit_117),T263,ENVNUL,PNUL,YPfalse);
  T266 = BOUNDP(YcompilerSast_linearizeYallocate_register);
  if (T266 != YPfalse) {
    T265 = VARREF(YcompilerSast_linearizeYallocate_register);
  } else {
    T265 = YPfalse;
  }
  T267 = fun_allocate_register_112;
  T264 = CALL2(1,VARREF(YPdefine_method),T265,T267);
  VARSET(YcompilerSast_linearizeYallocate_register,T264);
  lit_119 = YPPsym((P)"collect-registers!");
  T268 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(YcompilerSastYLcomputed_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_113 = YPmet(FUNCODEREF(fun_collect_registersX_113),LITREF(lit_119),T268,ENVNUL,PNUL,YPfalse);
  T271 = BOUNDP(YcompilerSast_linearizeYcollect_registersX);
  if (T271 != YPfalse) {
    T270 = VARREF(YcompilerSast_linearizeYcollect_registersX);
  } else {
    T270 = YPfalse;
  }
  T272 = fun_collect_registersX_113;
  T269 = CALL2(1,VARREF(YPdefine_method),T270,T272);
  VARSET(YcompilerSast_linearizeYcollect_registersX,T269);
  T277 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T276 = fun_loop_114 = YPmet(FUNCODEREF(fun_loop_114),LITREF(lit_32),T277,ENVNUL,PNUL,YPfalse);
  T275 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(YcompilerSastYLsequentialG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T274 = fun_collect_registersX_115 = YPmet(FUNCODEREF(fun_collect_registersX_115),LITREF(lit_119),T275,ENVNUL,PNUL,YPfalse);
  T281 = BOUNDP(YcompilerSast_linearizeYcollect_registersX);
  if (T281 != YPfalse) {
    T280 = VARREF(YcompilerSast_linearizeYcollect_registersX);
  } else {
    T280 = YPfalse;
  }
  T282 = fun_collect_registersX_115;
  T279 = CALL2(1,VARREF(YPdefine_method),T280,T282);
  T278 = VARSET(YcompilerSast_linearizeYcollect_registersX,T279);
  T273 = T278;
  return T273;
}

P YcompilerSast_linearizeY___main_2___() {
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
loop:
  T0 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(YcompilerSastYLpassive_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_116 = YPmet(FUNCODEREF(fun_collect_registersX_116),LITREF(lit_119),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YcompilerSast_linearizeYcollect_registersX);
  if (T3 != YPfalse) {
    T2 = VARREF(YcompilerSast_linearizeYcollect_registersX);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_collect_registersX_116;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YcompilerSast_linearizeYcollect_registersX,T1);
  T6 = YPsig(YPPlist(1,LITREF(lit_105)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_117 = YPmet(FUNCODEREF(fun_117),YPfalse,T6,ENVNUL,PNUL,YPfalse);
  T5 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(YcompilerSast_linearizeYLtop_level_formG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_118 = YPmet(FUNCODEREF(fun_collect_registersX_118),LITREF(lit_119),T5,ENVNUL,PNUL,YPfalse);
  T9 = BOUNDP(YcompilerSast_linearizeYcollect_registersX);
  if (T9 != YPfalse) {
    T8 = VARREF(YcompilerSast_linearizeYcollect_registersX);
  } else {
    T8 = YPfalse;
  }
  T10 = fun_collect_registersX_118;
  T7 = CALL2(1,VARREF(YPdefine_method),T8,T10);
  VARSET(YcompilerSast_linearizeYcollect_registersX,T7);
  T11 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(YcompilerSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_119 = YPmet(FUNCODEREF(fun_collect_registersX_119),LITREF(lit_119),T11,ENVNUL,PNUL,YPfalse);
  T14 = BOUNDP(YcompilerSast_linearizeYcollect_registersX);
  if (T14 != YPfalse) {
    T13 = VARREF(YcompilerSast_linearizeYcollect_registersX);
  } else {
    T13 = YPfalse;
  }
  T15 = fun_collect_registersX_119;
  T12 = CALL2(1,VARREF(YPdefine_method),T13,T15);
  VARSET(YcompilerSast_linearizeYcollect_registersX,T12);
  T16 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(YcompilerSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_120 = YPmet(FUNCODEREF(fun_collect_registersX_120),LITREF(lit_119),T16,ENVNUL,PNUL,YPfalse);
  T19 = BOUNDP(YcompilerSast_linearizeYcollect_registersX);
  if (T19 != YPfalse) {
    T18 = VARREF(YcompilerSast_linearizeYcollect_registersX);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_collect_registersX_120;
  T17 = CALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(YcompilerSast_linearizeYcollect_registersX,T17);
  lit_120 = YPPsym((P)"ast-contains-fun?");
  T21 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YcompilerSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_ast_contains_funQ_121 = YPmet(FUNCODEREF(fun_ast_contains_funQ_121),LITREF(lit_120),T21,ENVNUL,PNUL,YPfalse);
  T24 = BOUNDP(YcompilerSast_linearizeYast_contains_funQ);
  if (T24 != YPfalse) {
    T23 = VARREF(YcompilerSast_linearizeYast_contains_funQ);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_ast_contains_funQ_121;
  T22 = CALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YcompilerSast_linearizeYast_contains_funQ,T22);
  lit_121 = YPPsym((P)"return");
  lit_122 = YPPsym((P)"walk");
  T28 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_walk_122 = YPmet(FUNCODEREF(fun_walk_122),LITREF(lit_122),T28,ENVNUL,PNUL,YPfalse);
  T27 = YPsig(YPPlist(1,LITREF(lit_121)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_123 = YPmet(FUNCODEREF(fun_123),YPfalse,T27,ENVNUL,PNUL,YPfalse);
  T26 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_ast_contains_funQ_124 = YPmet(FUNCODEREF(fun_ast_contains_funQ_124),LITREF(lit_120),T26,ENVNUL,PNUL,YPfalse);
  T31 = BOUNDP(YcompilerSast_linearizeYast_contains_funQ);
  if (T31 != YPfalse) {
    T30 = VARREF(YcompilerSast_linearizeYast_contains_funQ);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_ast_contains_funQ_124;
  T29 = CALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(YcompilerSast_linearizeYast_contains_funQ,T29);
  T33 = YPfalse;
  return T33;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_runtimeSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_runtimeSruntime;
extern MODULE_INFO module_info_compilerSast;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScollections;
extern MODULE_INFO module_info_gooScollectionsSlist;
extern MODULE_INFO module_info_gooScollectionsSbuffer;
extern MODULE_INFO module_info_gooScollectionsScollection;
extern MODULE_INFO module_info_gooScollectionsSsequence;
extern MODULE_INFO module_info_gooScollectionsStable;
extern MODULE_INFO module_info_gooScollectionsSmap;
extern MODULE_INFO module_info_gooScollectionsSzip;
extern MODULE_INFO module_info_gooScollectionsSstring;
extern MODULE_INFO module_info_gooSmagnitude;
extern MODULE_INFO module_info_gooScollectionsSassoc;
extern MODULE_INFO module_info_gooScollectionsScycle;
extern MODULE_INFO module_info_gooScollectionsSrange;
extern MODULE_INFO module_info_gooScollectionsSstep;

static USE_INFO use_infos[] = {
  {&module_info_runtimeSboot},
  {&module_info_gooSmacros},
  {&module_info_runtimeSruntime},
  {&module_info_compilerSast},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScollections},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"set", &module_info_runtimeSboot, "set"},
  {"abs", &module_info_gooSmath, "abs"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"sig-nary?", &module_info_runtimeSboot, "sig-nary?"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"<int>", &module_info_runtimeSboot, "<int>"},
  {"%app-filename", &module_info_runtimeSboot, "%app-filename"},
  {"<tup>", &module_info_runtimeSboot, "<tup>"},
  {"%loc-off-setter", &module_info_runtimeSboot, "%loc-off-setter"},
  {"%%sym", &module_info_runtimeSboot, "%%sym"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"%vec", &module_info_runtimeSboot, "%vec"},
  {"fun-arity", &module_info_runtimeSboot, "fun-arity"},
  {"fun", &module_info_runtimeSboot, "fun"},
  {"*boot-macro-module-names*", &module_info_runtimeSboot, "*boot-macro-module-names*"},
  {"%fi2f", &module_info_runtimeSboot, "%fi2f"},
  {"<runtime-assignment>", &module_info_compilerSast, "<runtime-assignment>"},
  {"%prop", &module_info_runtimeSboot, "%prop"},
  {"<fix-let>", &module_info_compilerSast, "<fix-let>"},
  {"module-target-environment", &module_info_compilerSast, "module-target-environment"},
  {"as", &module_info_gooStypes, "as"},
  {"tan", &module_info_gooSmath, "tan"},
  {"assq", &module_info_gooScollectionsSlist, "assq"},
  {"%isa", &module_info_runtimeSboot, "%isa"},
  {"%bb", &module_info_runtimeSboot, "%bb"},
  {"loc-val-setter", &module_info_runtimeSruntime, "loc-val-setter"},
  {"binding-global-box", &module_info_compilerSast, "binding-global-box"},
  {"%eof-object", &module_info_runtimeSboot, "%eof-object"},
  {"try", &module_info_runtimeSboot, "try"},
  {"buf", &module_info_gooScollectionsSbuffer, "buf"},
  {"constant-index-setter", &module_info_compilerSast, "constant-index-setter"},
  {"add", &module_info_gooScollectionsScollection, "add"},
  {"tup", &module_info_runtimeSboot, "tup"},
  {"any2?", &module_info_gooScollectionsScollection, "any2?"},
  {"%binding-name", &module_info_runtimeSboot, "%binding-name"},
  {"%ready?", &module_info_runtimeSboot, "%ready?"},
  {"ast-evaluate", &module_info_compilerSast, "ast-evaluate"},
  {"%i<", &module_info_runtimeSboot, "%i<"},
  {"%pair", &module_info_runtimeSboot, "%pair"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<immediate-constant>", &module_info_compilerSast, "<immediate-constant>"},
  {"environment-uses-modules", &module_info_compilerSast, "environment-uses-modules"},
  {"dp", &module_info_runtimeSboot, "dp"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"objectify-quotation", &module_info_compilerSast, "objectify-quotation"},
  {"cat!", &module_info_gooScollectionsSsequence, "cat!"},
  {"sig-unification-vars", &module_info_runtimeSboot, "sig-unification-vars"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"<mag>", &module_info_runtimeSboot, "<mag>"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"%i+", &module_info_runtimeSboot, "%i+"},
  {"function-binding", &module_info_compilerSast, "function-binding"},
  {"ds", &module_info_runtimeSboot, "ds"},
  {"head-setter", &module_info_runtimeSboot, "head-setter"},
  {"type-class", &module_info_runtimeSboot, "type-class"},
  {"unexec", &module_info_runtimeSboot, "unexec"},
  {"fun-sig-setter", &module_info_runtimeSboot, "fun-sig-setter"},
  {"%cu", &module_info_runtimeSboot, "%cu"},
  {"<union>", &module_info_runtimeSboot, "<union>"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"fix-let-body", &module_info_compilerSast, "fix-let-body"},
  {"function-signature", &module_info_compilerSast, "function-signature"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"%build-runtime-modules", &module_info_runtimeSboot, "%build-runtime-modules"},
  {"now-setter", &module_info_gooScollectionsScollection, "now-setter"},
  {"curry", &module_info_runtimeSruntime, "curry"},
  {"ins!", &module_info_gooScollectionsSsequence, "ins!"},
  {"signature-specs", &module_info_compilerSast, "signature-specs"},
  {"%f*", &module_info_runtimeSboot, "%f*"},
  {"nxt", &module_info_gooScollectionsScollection, "nxt"},
  {"%facos", &module_info_runtimeSboot, "%facos"},
  {"<fab-list>", &module_info_compilerSast, "<fab-list>"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"<constant>", &module_info_compilerSast, "<constant>"},
  {"<free-environment>", &module_info_compilerSast, "<free-environment>"},
  {"loc", &module_info_runtimeSboot, "loc"},
  {"build-condition-for-handler-interactively", &module_info_runtimeSruntime, "build-condition-for-handler-interactively"},
  {"@+", &module_info_runtimeSboot, "@+"},
  {"def-programs", &module_info_compilerSast, "def-programs"},
  {"keyboard-interrupt", &module_info_runtimeSboot, "keyboard-interrupt"},
  {"<unwind-protect>", &module_info_compilerSast, "<unwind-protect>"},
  {"build-condition-interactively", &module_info_runtimeSruntime, "build-condition-interactively"},
  {"loc-val", &module_info_runtimeSruntime, "loc-val"},
  {"@len", &module_info_runtimeSboot, "@len"},
  {"default-handler", &module_info_runtimeSruntime, "default-handler"},
  {"alternative-condition", &module_info_compilerSast, "alternative-condition"},
  {"id-hash", &module_info_gooScollectionsStable, "id-hash"},
  {"function-source", &module_info_compilerSast, "function-source"},
  {"head", &module_info_runtimeSboot, "head"},
  {"binding-type", &module_info_compilerSast, "binding-type"},
  {"elt-or", &module_info_gooScollectionsScollection, "elt-or"},
  {"<alternative>", &module_info_compilerSast, "<alternative>"},
  {"%flog", &module_info_runtimeSboot, "%flog"},
  {"binding-index-setter", &module_info_compilerSast, "binding-index-setter"},
  {"$goo-boot-module-name", &module_info_compilerSast, "$goo-boot-module-name"},
  {"when", &module_info_gooSmacros, "when"},
  {"<num>", &module_info_runtimeSboot, "<num>"},
  {"<vec>", &module_info_runtimeSboot, "<vec>"},
  {"locals-body-setter", &module_info_compilerSast, "locals-body-setter"},
  {"function-registers", &module_info_compilerSast, "function-registers"},
  {"prop-getter", &module_info_runtimeSboot, "prop-getter"},
  {"<map>", &module_info_gooScollectionsSmap, "<map>"},
  {"binding-locative", &module_info_compilerSast, "binding-locative"},
  {"monitor-info", &module_info_compilerSast, "monitor-info"},
  {"<sequential>", &module_info_compilerSast, "<sequential>"},
  {"into", &module_info_gooScollectionsScollection, "into"},
  {"%os-val", &module_info_runtimeSboot, "%os-val"},
  {"empty", &module_info_gooScollectionsScollection, "empty"},
  {"wrong-number-arguments-error", &module_info_runtimeSboot, "wrong-number-arguments-error"},
  {"handler-info-arguments", &module_info_runtimeSboot, "handler-info-arguments"},
  {"signature-bindings", &module_info_compilerSast, "signature-bindings"},
  {"<zip>", &module_info_gooScollectionsSzip, "<zip>"},
  {"module-exports", &module_info_compilerSast, "module-exports"},
  {"now-key", &module_info_gooScollectionsScollection, "now-key"},
  {"class-direct-props", &module_info_runtimeSboot, "class-direct-props"},
  {"ascii-limit", &module_info_gooScollectionsSstring, "ascii-limit"},
  {"%file-exists?", &module_info_runtimeSboot, "%file-exists?"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"mif", &module_info_runtimeSboot, "mif"},
  {"binding-kind", &module_info_compilerSast, "binding-kind"},
  {"export", &module_info_runtimeSboot, "export"},
  {"acos", &module_info_gooSmath, "acos"},
  {"binding-dynamic-extent?", &module_info_compilerSast, "binding-dynamic-extent?"},
  {"t<", &module_info_gooStypes, "t<"},
  {"<met>", &module_info_runtimeSboot, "<met>"},
  {"unwind-protect-cleanup-thunk", &module_info_compilerSast, "unwind-protect-cleanup-thunk"},
  {"assignment-form", &module_info_compilerSast, "assignment-form"},
  {"zap", &module_info_gooScollectionsScollection, "zap"},
  {"<module-binding>", &module_info_compilerSast, "<module-binding>"},
  {"%fatan2", &module_info_runtimeSboot, "%fatan2"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"min", &module_info_gooSmagnitude, "min"},
  {"global-box-value-setter", &module_info_compilerSast, "global-box-value-setter"},
  {"%lu", &module_info_runtimeSboot, "%lu"},
  {"prop-init", &module_info_runtimeSboot, "prop-init"},
  {"%puts", &module_info_runtimeSboot, "%puts"},
  {"<assocs>", &module_info_gooScollectionsSassoc, "<assocs>"},
  {"module-loader-module-type", &module_info_compilerSast, "module-loader-module-type"},
  {"binding-module-name", &module_info_compilerSast, "binding-module-name"},
  {"fun-nary?", &module_info_runtimeSboot, "fun-nary?"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"%define-method", &module_info_runtimeSboot, "%define-method"},
  {"<module-loader>", &module_info_compilerSast, "<module-loader>"},
  {"<module>", &module_info_compilerSast, "<module>"},
  {"%iu", &module_info_runtimeSboot, "%iu"},
  {"unchecked-runtime-environment", &module_info_compilerSast, "unchecked-runtime-environment"},
  {"pick", &module_info_gooScollectionsSsequence, "pick"},
  {"app", &module_info_gooSmacros, "app"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"application-known?-setter", &module_info_compilerSast, "application-known?-setter"},
  {"%fu", &module_info_runtimeSboot, "%fu"},
  {"function-registers-setter", &module_info_compilerSast, "function-registers-setter"},
  {"<subclass>", &module_info_runtimeSboot, "<subclass>"},
  {"now", &module_info_gooScollectionsScollection, "now"},
  {"program-type-setter", &module_info_compilerSast, "program-type-setter"},
  {"*macros-ok?*", &module_info_runtimeSboot, "*macros-ok?*"},
  {"<global-reference>", &module_info_compilerSast, "<global-reference>"},
  {"describe-condition", &module_info_runtimeSruntime, "describe-condition"},
  {"%f/", &module_info_runtimeSboot, "%f/"},
  {"assignment-reference", &module_info_compilerSast, "assignment-reference"},
  {"while", &module_info_gooSmacros, "while"},
  {"%fcos", &module_info_runtimeSboot, "%fcos"},
  {"class-descendents", &module_info_runtimeSboot, "class-descendents"},
  {"t*", &module_info_gooStypes, "t*"},
  {"asin", &module_info_gooSmath, "asin"},
  {"last", &module_info_gooScollectionsSsequence, "last"},
  {"finds", &module_info_gooScollectionsSsequence, "finds"},
  {"%i<<<", &module_info_runtimeSboot, "%i<<<"},
  {"<arguments>", &module_info_compilerSast, "<arguments>"},
  {"tab-hash", &module_info_gooScollectionsStable, "tab-hash"},
  {"even?", &module_info_gooSmath, "even?"},
  {"gen-refs-setter", &module_info_runtimeSboot, "gen-refs-setter"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"dl", &module_info_runtimeSboot, "dl"},
  {"push", &module_info_gooScollectionsSlist, "push"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%fsqrt", &module_info_runtimeSboot, "%fsqrt"},
  {"<local-assignment>", &module_info_compilerSast, "<local-assignment>"},
  {"fin", &module_info_runtimeSboot, "fin"},
  {"%file-mtime", &module_info_runtimeSboot, "%file-mtime"},
  {"binding-value", &module_info_compilerSast, "binding-value"},
  {"free-environment", &module_info_compilerSast, "free-environment"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"default-handler-description", &module_info_runtimeSruntime, "default-handler-description"},
  {"dc", &module_info_runtimeSboot, "dc"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"application-tail?", &module_info_compilerSast, "application-tail?"},
  {"atan", &module_info_gooSmath, "atan"},
  {"module-name-to-relpath", &module_info_compilerSast, "module-name-to-relpath"},
  {"%check-call-types", &module_info_runtimeSboot, "%check-call-types"},
  {"prop-value-setter", &module_info_runtimeSboot, "prop-value-setter"},
  {"app-args", &module_info_runtimeSruntime, "app-args"},
  {"1-", &module_info_gooSmath, "1-"},
  {"%unlink-stack", &module_info_runtimeSboot, "%unlink-stack"},
  {"<chr>", &module_info_runtimeSboot, "<chr>"},
  {"<flat>", &module_info_runtimeSboot, "<flat>"},
  {"function-data-refs-setter", &module_info_compilerSast, "function-data-refs-setter"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%file-type", &module_info_runtimeSboot, "%file-type"},
  {"*", &module_info_gooSmath, "*"},
  {"%fb", &module_info_runtimeSboot, "%fb"},
  {"subtype?", &module_info_runtimeSboot, "subtype?"},
  {"gen-refs", &module_info_runtimeSboot, "gen-refs"},
  {"not", &module_info_runtimeSboot, "not"},
  {"<computed-program>", &module_info_compilerSast, "<computed-program>"},
  {"<replace-generic-restart>", &module_info_runtimeSboot, "<replace-generic-restart>"},
  {"monitor-type", &module_info_compilerSast, "monitor-type"},
  {"%gen-src", &module_info_runtimeSboot, "%gen-src"},
  {"ct", &module_info_runtimeSboot, "ct"},
  {"choose-handler", &module_info_runtimeSruntime, "choose-handler"},
  {"%loc-val", &module_info_runtimeSboot, "%loc-val"},
  {"%put", &module_info_runtimeSboot, "%put"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"cycle", &module_info_gooScollectionsScycle, "cycle"},
  {"spread", &module_info_runtimeSruntime, "spread"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"locals-body", &module_info_compilerSast, "locals-body"},
  {"handler-matches?", &module_info_runtimeSruntime, "handler-matches?"},
  {"rcurry", &module_info_runtimeSruntime, "rcurry"},
  {"3rd", &module_info_gooScollectionsSsequence, "3rd"},
  {"pos", &module_info_gooScollectionsSsequence, "pos"},
  {"application-known?", &module_info_compilerSast, "application-known?"},
  {"signature-specs-setter", &module_info_compilerSast, "signature-specs-setter"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"fill", &module_info_gooScollectionsScollection, "fill"},
  {"<ast-macro-definition>", &module_info_compilerSast, "<ast-macro-definition>"},
  {"<cycle>", &module_info_gooScollectionsScycle, "<cycle>"},
  {"assqn", &module_info_gooScollectionsSlist, "assqn"},
  {"fab-sym", &module_info_runtimeSboot, "fab-sym"},
  {"$min-int", &module_info_runtimeSboot, "$min-int"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"~", &module_info_gooSmath, "~"},
  {"lst", &module_info_runtimeSboot, "lst"},
  {"$default-handler-info", &module_info_runtimeSruntime, "$default-handler-info"},
  {"find-binding", &module_info_compilerSast, "find-binding"},
  {"condition-arguments", &module_info_runtimeSruntime, "condition-arguments"},
  {">=", &module_info_gooSmagnitude, ">="},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"sig-specs", &module_info_runtimeSboot, "sig-specs"},
  {"load-module", &module_info_compilerSast, "load-module"},
  {"%do-stack-frames", &module_info_runtimeSboot, "%do-stack-frames"},
  {"@lst", &module_info_runtimeSboot, "@lst"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"~==", &module_info_gooSmath, "~=="},
  {"tab-test", &module_info_gooScollectionsStable, "tab-test"},
  {"%allocate-stack", &module_info_runtimeSboot, "%allocate-stack"},
  {"map", &module_info_gooSmacros, "map"},
  {"format-to-string", &module_info_runtimeSruntime, "format-to-string"},
  {"%sb", &module_info_runtimeSboot, "%sb"},
  {"reference-called-function?-setter", &module_info_compilerSast, "reference-called-function?-setter"},
  {"t+", &module_info_gooStypes, "t+"},
  {"<singleton>", &module_info_runtimeSboot, "<singleton>"},
  {"error", &module_info_runtimeSboot, "error"},
  {"function-self-recursive?-setter", &module_info_compilerSast, "function-self-recursive?-setter"},
  {"<reference>", &module_info_compilerSast, "<reference>"},
  {"%met-code", &module_info_runtimeSboot, "%met-code"},
  {"fab-g2c-module", &module_info_compilerSast, "fab-g2c-module"},
  {"%ftanh", &module_info_runtimeSboot, "%ftanh"},
  {"module-name", &module_info_compilerSast, "module-name"},
  {"signature-value", &module_info_compilerSast, "signature-value"},
  {"round/", &module_info_gooSmath, "round/"},
  {"<fun>", &module_info_runtimeSboot, "<fun>"},
  {"ins", &module_info_gooScollectionsSsequence, "ins"},
  {"@<", &module_info_runtimeSboot, "@<"},
  {"%fsinh", &module_info_runtimeSboot, "%fsinh"},
  {"read", &module_info_runtimeSruntime, "read"},
  {"1+", &module_info_gooSmath, "1+"},
  {"environment-bindings", &module_info_compilerSast, "environment-bindings"},
  {"match", &module_info_gooSmacros, "match"},
  {"<bind-exit>", &module_info_compilerSast, "<bind-exit>"},
  {"*boot-macro-expanders*", &module_info_runtimeSboot, "*boot-macro-expanders*"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"function-nary?", &module_info_compilerSast, "function-nary?"},
  {"prop-bound?", &module_info_runtimeSboot, "prop-bound?"},
  {"map2", &module_info_gooScollectionsScollection, "map2"},
  {"low-elt", &module_info_gooScollectionsScollection, "low-elt"},
  {"program-register", &module_info_compilerSast, "program-register"},
  {"binding-native-to?", &module_info_compilerSast, "binding-native-to?"},
  {"dg", &module_info_runtimeSboot, "dg"},
  {"keys", &module_info_gooScollectionsScollection, "keys"},
  {"do-key-vals", &module_info_gooScollectionsSsequence, "do-key-vals"},
  {"%gen-code-setter", &module_info_runtimeSboot, "%gen-code-setter"},
  {"sig-val", &module_info_runtimeSboot, "sig-val"},
  {"ast-define-binding", &module_info_compilerSast, "ast-define-binding"},
  {"<lst>", &module_info_runtimeSboot, "<lst>"},
  {"alternative-consequent", &module_info_compilerSast, "alternative-consequent"},
  {"fab-class", &module_info_runtimeSboot, "fab-class"},
  {"%fatan", &module_info_runtimeSboot, "%fatan"},
  {"<log>", &module_info_runtimeSboot, "<log>"},
  {"^", &module_info_gooSmath, "^"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"<handler-info>", &module_info_runtimeSruntime, "<handler-info>"},
  {"binding-global-box-setter", &module_info_compilerSast, "binding-global-box-setter"},
  {"fun-specs", &module_info_runtimeSboot, "fun-specs"},
  {"type-object", &module_info_runtimeSboot, "type-object"},
  {"dss", &module_info_runtimeSboot, "dss"},
  {"fun-name-setter", &module_info_runtimeSboot, "fun-name-setter"},
  {"%velt-setter", &module_info_runtimeSboot, "%velt-setter"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"rev", &module_info_gooScollectionsSsequence, "rev"},
  {"case-insensitive-string-equal", &module_info_gooScollectionsStable, "case-insensitive-string-equal"},
  {"1st", &module_info_gooScollectionsSsequence, "1st"},
  {"quote", &module_info_runtimeSboot, "quote"},
  {"enum", &module_info_gooScollectionsScollection, "enum"},
  {"*gensym-counter*", &module_info_runtimeSruntime, "*gensym-counter*"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"add-prop", &module_info_runtimeSboot, "add-prop"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"<=", &module_info_gooSmagnitude, "<="},
  {"file-opening-error", &module_info_runtimeSboot, "file-opening-error"},
  {"function-data-refs", &module_info_compilerSast, "function-data-refs"},
  {"<predefined-application>", &module_info_compilerSast, "<predefined-application>"},
  {"function-debug-name-setter", &module_info_compilerSast, "function-debug-name-setter"},
  {"$permanent-hash-state", &module_info_gooScollectionsStable, "$permanent-hash-state"},
  {"range-by", &module_info_gooScollectionsSrange, "range-by"},
  {"%i-", &module_info_runtimeSboot, "%i-"},
  {"sym-name", &module_info_runtimeSboot, "sym-name"},
  {"*boot-macro-names*", &module_info_runtimeSboot, "*boot-macro-names*"},
  {"as-lst", &module_info_compilerSast, "as-lst"},
  {"find", &module_info_gooScollectionsScollection, "find"},
  {"nil", &module_info_runtimeSboot, "nil"},
  {"binding-dotted?-setter", &module_info_compilerSast, "binding-dotted?-setter"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"sin", &module_info_gooSmath, "sin"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"~=", &module_info_gooSmath, "~="},
  {"binding-type-setter", &module_info_compilerSast, "binding-type-setter"},
  {"len-setter", &module_info_gooScollectionsSbuffer, "len-setter"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"%str", &module_info_runtimeSboot, "%str"},
  {"<regular-application>", &module_info_compilerSast, "<regular-application>"},
  {"fun-name", &module_info_runtimeSboot, "fun-name"},
  {"application-arguments", &module_info_compilerSast, "application-arguments"},
  {"dm", &module_info_runtimeSboot, "dm"},
  {"handler-function", &module_info_runtimeSruntime, "handler-function"},
  {"<ast-primitive>", &module_info_compilerSast, "<ast-primitive>"},
  {"str-to-num", &module_info_gooScollectionsSstring, "str-to-num"},
  {"log", &module_info_gooSmath, "log"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"mod", &module_info_gooSmath, "mod"},
  {"object-class", &module_info_runtimeSboot, "object-class"},
  {"function-self-recursive?", &module_info_compilerSast, "function-self-recursive?"},
  {"prop-owner", &module_info_runtimeSboot, "prop-owner"},
  {"<tab>", &module_info_gooScollectionsScollection, "<tab>"},
  {"function-temporaries-setter", &module_info_compilerSast, "function-temporaries-setter"},
  {"do-static-global-bindings", &module_info_compilerSast, "do-static-global-bindings"},
  {"%i&", &module_info_runtimeSboot, "%i&"},
  {"%im", &module_info_runtimeSboot, "%im"},
  {"signature-arity", &module_info_compilerSast, "signature-arity"},
  {"objectify-signature", &module_info_compilerSast, "objectify-signature"},
  {"fix-let-bindings-setter", &module_info_compilerSast, "fix-let-bindings-setter"},
  {"%raw-call", &module_info_runtimeSboot, "%raw-call"},
  {"function-bindings", &module_info_compilerSast, "function-bindings"},
  {"%f<", &module_info_runtimeSboot, "%f<"},
  {"rem", &module_info_gooSmath, "rem"},
  {"prop-value", &module_info_runtimeSboot, "prop-value"},
  {"binding-index", &module_info_compilerSast, "binding-index"},
  {"class-parents", &module_info_runtimeSboot, "class-parents"},
  {"@oelt", &module_info_runtimeSboot, "@oelt"},
  {">", &module_info_gooSmagnitude, ">"},
  {"vals-to-str", &module_info_gooScollectionsSsequence, "vals-to-str"},
  {"%f=", &module_info_runtimeSboot, "%f="},
  {"<global-box>", &module_info_compilerSast, "<global-box>"},
  {"max", &module_info_gooSmagnitude, "max"},
  {"&", &module_info_gooSmath, "&"},
  {"monitor-handler", &module_info_compilerSast, "monitor-handler"},
  {"%open-out-file", &module_info_runtimeSboot, "%open-out-file"},
  {"fix-let-body-setter", &module_info_compilerSast, "fix-let-body-setter"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"environment-module", &module_info_compilerSast, "environment-module"},
  {"fab-map", &module_info_gooScollectionsSmap, "fab-map"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"|", &module_info_gooSmath, "|"},
  {"df", &module_info_runtimeSboot, "df"},
  {"key-test", &module_info_gooScollectionsScollection, "key-test"},
  {"reference-binding", &module_info_compilerSast, "reference-binding"},
  {"range-check?", &module_info_gooScollectionsSsequence, "range-check?"},
  {"module-syntax-environment", &module_info_compilerSast, "module-syntax-environment"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"del", &module_info_gooScollectionsScollection, "del"},
  {"<seq>", &module_info_runtimeSboot, "<seq>"},
  {"<any>", &module_info_runtimeSboot, "<any>"},
  {"prop-type", &module_info_runtimeSboot, "prop-type"},
  {"incongruent-method-error", &module_info_runtimeSboot, "incongruent-method-error"},
  {"%fcosh", &module_info_runtimeSboot, "%fcosh"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"<ast-method>", &module_info_compilerSast, "<ast-method>"},
  {"signature-bindings-setter", &module_info_compilerSast, "signature-bindings-setter"},
  {"%with-monitor", &module_info_runtimeSboot, "%with-monitor"},
  {"binding-mutable?", &module_info_compilerSast, "binding-mutable?"},
  {"fix-let-arguments-setter", &module_info_compilerSast, "fix-let-arguments-setter"},
  {"<binding>", &module_info_compilerSast, "<binding>"},
  {"rep", &module_info_runtimeSboot, "rep"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"%get", &module_info_runtimeSboot, "%get"},
  {">>", &module_info_gooSmath, ">>"},
  {"reference-called-function?", &module_info_compilerSast, "reference-called-function?"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"<str-tab>", &module_info_gooScollectionsStable, "<str-tab>"},
  {"class-props", &module_info_runtimeSboot, "class-props"},
  {"%loc-val-setter", &module_info_runtimeSboot, "%loc-val-setter"},
  {"reference-frame-number", &module_info_compilerSast, "reference-frame-number"},
  {"function-temporaries", &module_info_compilerSast, "function-temporaries"},
  {"%c=", &module_info_runtimeSboot, "%c="},
  {"<", &module_info_gooSmagnitude, "<"},
  {"do3", &module_info_gooScollectionsScollection, "do3"},
  {"init-environment-for-eval", &module_info_compilerSast, "init-environment-for-eval"},
  {"signature-value-setter", &module_info_compilerSast, "signature-value-setter"},
  {"%prop-unbound-error", &module_info_runtimeSboot, "%prop-unbound-error"},
  {"condition-message", &module_info_runtimeSruntime, "condition-message"},
  {"signature-arity-setter", &module_info_compilerSast, "signature-arity-setter"},
  {"vec", &module_info_runtimeSboot, "vec"},
  {"binding-inferred-type-setter", &module_info_compilerSast, "binding-inferred-type-setter"},
  {"del-dups", &module_info_gooScollectionsSsequence, "del-dups"},
  {"<sig>", &module_info_runtimeSboot, "<sig>"},
  {"fab-handler", &module_info_runtimeSruntime, "fab-handler"},
  {"case-insensitive-string-hash", &module_info_gooScollectionsStable, "case-insensitive-string-hash"},
  {"$goo-runtime-module-name", &module_info_compilerSast, "$goo-runtime-module-name"},
  {"%i*", &module_info_runtimeSboot, "%i*"},
  {"load-in", &module_info_compilerSast, "load-in"},
  {"<real-reference>", &module_info_compilerSast, "<real-reference>"},
  {"as-copy", &module_info_gooScollectionsScollection, "as-copy"},
  {"<condition>", &module_info_runtimeSruntime, "<condition>"},
  {"key-type", &module_info_gooScollectionsScollection, "key-type"},
  {"fun-names", &module_info_runtimeSboot, "fun-names"},
  {"module-binding", &module_info_compilerSast, "module-binding"},
  {"handler-info-message", &module_info_runtimeSboot, "handler-info-message"},
  {"install-initial-bindings", &module_info_compilerSast, "install-initial-bindings"},
  {"find-setter", &module_info_runtimeSboot, "find-setter"},
  {"<ast-generic>", &module_info_compilerSast, "<ast-generic>"},
  {"<buf>", &module_info_gooScollectionsSbuffer, "<buf>"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"if", &module_info_runtimeSboot, "if"},
  {"find-or", &module_info_gooScollectionsScollection, "find-or"},
  {"signature-nary?", &module_info_compilerSast, "signature-nary?"},
  {"use", &module_info_runtimeSboot, "use"},
  {"unwind-protect-protected-thunk", &module_info_compilerSast, "unwind-protect-protected-thunk"},
  {"%fun-reg", &module_info_runtimeSboot, "%fun-reg"},
  {"sub-setter", &module_info_gooScollectionsSsequence, "sub-setter"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"%open-in-file", &module_info_runtimeSboot, "%open-in-file"},
  {"=", &module_info_gooSmath, "="},
  {"fix-let-bindings", &module_info_compilerSast, "fix-let-bindings"},
  {"<local-binding>", &module_info_compilerSast, "<local-binding>"},
  {"@all2?", &module_info_runtimeSboot, "@all2?"},
  {"range-check", &module_info_gooScollectionsSsequence, "range-check"},
  {"fin?", &module_info_gooScollectionsScollection, "fin?"},
  {"isa", &module_info_runtimeSboot, "isa"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"or", &module_info_gooSmacros, "or"},
  {"macro-expand", &module_info_runtimeSboot, "macro-expand"},
  {"fix-let-arguments", &module_info_compilerSast, "fix-let-arguments"},
  {"%i^", &module_info_runtimeSboot, "%i^"},
  {"until", &module_info_gooSmacros, "until"},
  {"%it/", &module_info_runtimeSboot, "%it/"},
  {"application-binding", &module_info_compilerSast, "application-binding"},
  {"report-undefined-global-bindings", &module_info_compilerSast, "report-undefined-global-bindings"},
  {"do-named-static-global-bindings", &module_info_compilerSast, "do-named-static-global-bindings"},
  {"$e", &module_info_gooSmath, "$e"},
  {"assocs-test-setter", &module_info_gooScollectionsSassoc, "assocs-test-setter"},
  {"esc", &module_info_runtimeSboot, "esc"},
  {"<col>", &module_info_runtimeSboot, "<col>"},
  {"<class>", &module_info_runtimeSboot, "<class>"},
  {"sig-names", &module_info_runtimeSboot, "sig-names"},
  {"%current-in-port", &module_info_runtimeSboot, "%current-in-port"},
  {"fab-gen", &module_info_runtimeSboot, "fab-gen"},
  {"function-signature-setter", &module_info_compilerSast, "function-signature-setter"},
  {"binding-name", &module_info_compilerSast, "binding-name"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"format", &module_info_runtimeSruntime, "format"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%next-methods", &module_info_runtimeSboot, "%next-methods"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"<program>", &module_info_compilerSast, "<program>"},
  {"elt-default", &module_info_gooScollectionsScollection, "elt-default"},
  {"%gen-refs", &module_info_runtimeSboot, "%gen-refs"},
  {"<ast-function>", &module_info_compilerSast, "<ast-function>"},
  {"%loc-off", &module_info_runtimeSboot, "%loc-off"},
  {"fix-let-types", &module_info_compilerSast, "fix-let-types"},
  {"function-value", &module_info_compilerSast, "function-value"},
  {"len/fill-setter", &module_info_gooScollectionsSbuffer, "len/fill-setter"},
  {"<definition>", &module_info_compilerSast, "<definition>"},
  {"def", &module_info_runtimeSboot, "def"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"all?", &module_info_gooScollectionsScollection, "all?"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"objectify-with-subtransaction", &module_info_compilerSast, "objectify-with-subtransaction"},
  {"<global-assignment>", &module_info_compilerSast, "<global-assignment>"},
  {"del-vals", &module_info_gooScollectionsSsequence, "del-vals"},
  {"app-filename", &module_info_runtimeSruntime, "app-filename"},
  {"env-object-name", &module_info_compilerSast, "env-object-name"},
  {"%i>>>", &module_info_runtimeSboot, "%i>>>"},
  {"tail-setter", &module_info_runtimeSboot, "tail-setter"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"+", &module_info_gooSmath, "+"},
  {"%close-in-port", &module_info_runtimeSboot, "%close-in-port"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"probe-module", &module_info_compilerSast, "probe-module"},
  {"function-body-setter", &module_info_compilerSast, "function-body-setter"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"<<", &module_info_gooSmath, "<<"},
  {"sig-arity", &module_info_runtimeSboot, "sig-arity"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"fold+", &module_info_gooScollectionsScollection, "fold+"},
  {"seq", &module_info_runtimeSboot, "seq"},
  {"<enum>", &module_info_gooScollectionsScollection, "<enum>"},
  {"%selt", &module_info_runtimeSboot, "%selt"},
  {"do2", &module_info_gooScollectionsScollection, "do2"},
  {"%symbols", &module_info_runtimeSboot, "%symbols"},
  {"and", &module_info_gooSmacros, "and"},
  {"function-body", &module_info_compilerSast, "function-body"},
  {"str", &module_info_gooScollectionsSstring, "str"},
  {"<bound?>", &module_info_compilerSast, "<bound?>"},
  {"monitor-main-thunk", &module_info_compilerSast, "monitor-main-thunk"},
  {"low-elt-setter", &module_info_gooScollectionsScollection, "low-elt-setter"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"<ast-signature>", &module_info_compilerSast, "<ast-signature>"},
  {"%invoke-debugger", &module_info_runtimeSboot, "%invoke-debugger"},
  {"ct-also", &module_info_runtimeSboot, "ct-also"},
  {"$max-int", &module_info_runtimeSboot, "$max-int"},
  {"find-getter", &module_info_runtimeSboot, "find-getter"},
  {"%close-out-port", &module_info_runtimeSboot, "%close-out-port"},
  {"global-box-value", &module_info_compilerSast, "global-box-value"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"dup", &module_info_gooScollectionsScollection, "dup"},
  {"tail", &module_info_runtimeSboot, "tail"},
  {"type-error", &module_info_runtimeSboot, "type-error"},
  {"range", &module_info_gooScollectionsSrange, "range"},
  {"elt-type", &module_info_gooScollectionsScollection, "elt-type"},
  {"function-debug-name", &module_info_compilerSast, "function-debug-name"},
  {"<restart>", &module_info_runtimeSruntime, "<restart>"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"%velt", &module_info_runtimeSboot, "%velt"},
  {"%os-name", &module_info_runtimeSboot, "%os-name"},
  {"locals-bindings-setter", &module_info_compilerSast, "locals-bindings-setter"},
  {"below", &module_info_gooScollectionsSsequence, "below"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"let", &module_info_runtimeSboot, "let"},
  {"<type>", &module_info_runtimeSboot, "<type>"},
  {"invoke-handler-interactively", &module_info_runtimeSruntime, "invoke-handler-interactively"},
  {"ord-app-mets", &module_info_runtimeSboot, "ord-app-mets"},
  {"program-register-setter", &module_info_compilerSast, "program-register-setter"},
  {"t?", &module_info_gooStypes, "t?"},
  {"function-index-setter", &module_info_compilerSast, "function-index-setter"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"<loc>", &module_info_runtimeSboot, "<loc>"},
  {"locals-bindings", &module_info_compilerSast, "locals-bindings"},
  {"pop-last!", &module_info_gooScollectionsSbuffer, "pop-last!"},
  {"@==", &module_info_runtimeSboot, "@=="},
  {"assignment-binding", &module_info_compilerSast, "assignment-binding"},
  {"fab", &module_info_gooScollectionsScollection, "fab"},
  {"type-elts", &module_info_runtimeSboot, "type-elts"},
  {"<application>", &module_info_compilerSast, "<application>"},
  {"tab-shrink-threshold-setter", &module_info_gooScollectionsStable, "tab-shrink-threshold-setter"},
  {"*report-prop-unbound-errors?*", &module_info_runtimeSboot, "*report-prop-unbound-errors?*"},
  {"from", &module_info_gooScollectionsSrange, "from"},
  {"*restarts-ok?*", &module_info_runtimeSboot, "*restarts-ok?*"},
  {"tab-gc-state", &module_info_gooScollectionsStable, "tab-gc-state"},
  {"<simple-condition>", &module_info_runtimeSruntime, "<simple-condition>"},
  {"bind-exit-main-fun", &module_info_compilerSast, "bind-exit-main-fun"},
  {"function-index", &module_info_compilerSast, "function-index"},
  {"round", &module_info_gooSmath, "round"},
  {"%%macro", &module_info_runtimeSboot, "%%macro"},
  {"<programs>", &module_info_compilerSast, "<programs>"},
  {"<static-global-environment>", &module_info_compilerSast, "<static-global-environment>"},
  {"<simple-error>", &module_info_runtimeSruntime, "<simple-error>"},
  {"pow", &module_info_gooSmath, "pow"},
  {"assocs-test", &module_info_gooScollectionsSassoc, "assocs-test"},
  {"reject", &module_info_gooScollectionsSsequence, "reject"},
  {"%raw", &module_info_runtimeSboot, "%raw"},
  {"binding-dotted?", &module_info_compilerSast, "binding-dotted?"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"%selt-setter", &module_info_runtimeSboot, "%selt-setter"},
  {"class-name", &module_info_runtimeSboot, "class-name"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%f+", &module_info_runtimeSboot, "%f+"},
  {"%create-directory", &module_info_runtimeSboot, "%create-directory"},
  {"%iv", &module_info_runtimeSboot, "%iv"},
  {"%sp-reg", &module_info_runtimeSboot, "%sp-reg"},
  {"may-isa?", &module_info_runtimeSboot, "may-isa?"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"%i!", &module_info_runtimeSboot, "%i!"},
  {"<list>", &module_info_gooScollectionsSlist, "<list>"},
  {"<str>", &module_info_runtimeSboot, "<str>"},
  {"<assignment>", &module_info_compilerSast, "<assignment>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"floor", &module_info_gooSmath, "floor"},
  {"<opts>", &module_info_runtimeSboot, "<opts>"},
  {"%f-", &module_info_runtimeSboot, "%f-"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%fasin", &module_info_runtimeSboot, "%fasin"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"tab-shrink-threshold", &module_info_gooScollectionsStable, "tab-shrink-threshold"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"gen-add-met", &module_info_runtimeSboot, "gen-add-met"},
  {"<passive-program>", &module_info_compilerSast, "<passive-program>"},
  {"binding-inferred-type", &module_info_compilerSast, "binding-inferred-type"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"ascii-whitespaces", &module_info_gooScollectionsSstring, "ascii-whitespaces"},
  {"prop-setter", &module_info_runtimeSboot, "prop-setter"},
  {"fun-val", &module_info_runtimeSboot, "fun-val"},
  {"sig", &module_info_runtimeSruntime, "sig"},
  {"tab-growth-threshold", &module_info_gooScollectionsStable, "tab-growth-threshold"},
  {"binding-info-setter", &module_info_compilerSast, "binding-info-setter"},
  {"map-keyed", &module_info_gooScollectionsScollection, "map-keyed"},
  {"binding-info", &module_info_compilerSast, "binding-info"},
  {"zip", &module_info_gooScollectionsSzip, "zip"},
  {"sub", &module_info_gooScollectionsSsequence, "sub"},
  {"%cb", &module_info_runtimeSboot, "%cb"},
  {"%ft", &module_info_runtimeSboot, "%ft"},
  {"%app-args", &module_info_runtimeSboot, "%app-args"},
  {"items", &module_info_gooScollectionsScollection, "items"},
  {"len", &module_info_gooStypes, "len"},
  {"function-free-setter", &module_info_compilerSast, "function-free-setter"},
  {"unknown-function-error", &module_info_runtimeSboot, "unknown-function-error"},
  {"unzip", &module_info_gooScollectionsSzip, "unzip"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"binding-dynamic-extent?-setter", &module_info_compilerSast, "binding-dynamic-extent?-setter"},
  {"remove-modules-by-name!", &module_info_compilerSast, "remove-modules-by-name!"},
  {"alternative-alternant", &module_info_compilerSast, "alternative-alternant"},
  {"bound?", &module_info_runtimeSboot, "bound?"},
  {"%lb", &module_info_runtimeSboot, "%lb"},
  {"runtime-environment", &module_info_compilerSast, "runtime-environment"},
  {"class-ancestors", &module_info_runtimeSboot, "class-ancestors"},
  {"%sp-reg-setter", &module_info_runtimeSboot, "%sp-reg-setter"},
  {"%eq?", &module_info_runtimeSboot, "%eq?"},
  {"%i>>", &module_info_runtimeSboot, "%i>>"},
  {"signature-nary?-setter", &module_info_compilerSast, "signature-nary?-setter"},
  {"assignment-form-setter", &module_info_compilerSast, "assignment-form-setter"},
  {"%slen", &module_info_runtimeSboot, "%slen"},
  {"<local-reference>", &module_info_compilerSast, "<local-reference>"},
  {"signature-names-setter", &module_info_compilerSast, "signature-names-setter"},
  {"%ib", &module_info_runtimeSboot, "%ib"},
  {"find-environment-module", &module_info_compilerSast, "find-environment-module"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"constant-index", &module_info_compilerSast, "constant-index"},
  {"binding-value-setter", &module_info_compilerSast, "binding-value-setter"},
  {"%force-out", &module_info_runtimeSboot, "%force-out"},
  {"application-function", &module_info_compilerSast, "application-function"},
  {"tab-growth-factor-setter", &module_info_gooScollectionsStable, "tab-growth-factor-setter"},
  {"tab-growth-factor", &module_info_gooScollectionsStable, "tab-growth-factor"},
  {"first-then", &module_info_gooScollectionsSstep, "first-then"},
  {"<simple-handler-info>", &module_info_runtimeSboot, "<simple-handler-info>"},
  {"reference-frame-offset", &module_info_compilerSast, "reference-frame-offset"},
  {"range-error", &module_info_gooScollectionsScollection, "range-error"},
  {"%os-val-setter", &module_info_runtimeSboot, "%os-val-setter"},
  {"<raw-constant>", &module_info_compilerSast, "<raw-constant>"},
  {"<ast-primitive-definition>", &module_info_compilerSast, "<ast-primitive-definition>"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"<handler>", &module_info_runtimeSruntime, "<handler>"},
  {"init-ast", &module_info_compilerSast, "init-ast"},
  {"%peek", &module_info_runtimeSboot, "%peek"},
  {"<set>", &module_info_gooScollectionsStable, "<set>"},
  {"<flo>", &module_info_runtimeSboot, "<flo>"},
  {"<sym>", &module_info_runtimeSboot, "<sym>"},
  {"for", &module_info_gooSmacros, "for"},
  {"%current-out-port", &module_info_runtimeSboot, "%current-out-port"},
  {"def-list", &module_info_compilerSast, "def-list"},
  {"met-app?", &module_info_runtimeSboot, "met-app?"},
  {"add!", &module_info_gooScollectionsScollection, "add!"},
  {"new", &module_info_runtimeSboot, "new"},
  {"identity", &module_info_runtimeSruntime, "identity"},
  {"%fpow", &module_info_runtimeSboot, "%fpow"},
  {"%gen-code", &module_info_runtimeSboot, "%gen-code"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"%su", &module_info_runtimeSboot, "%su"},
  {"%flo-bits", &module_info_runtimeSboot, "%flo-bits"},
  {"object-parents", &module_info_runtimeSboot, "object-parents"},
  {"fold", &module_info_gooScollectionsScollection, "fold"},
  {"<serious-condition>", &module_info_runtimeSruntime, "<serious-condition>"},
  {"monitor-test", &module_info_compilerSast, "monitor-test"},
  {"fun-mets", &module_info_runtimeSboot, "fun-mets"},
  {"@isa?", &module_info_runtimeSboot, "@isa?"},
  {"tab-growth-threshold-setter", &module_info_gooScollectionsStable, "tab-growth-threshold-setter"},
  {"%snul", &module_info_runtimeSboot, "%snul"},
  {"bound?-reference", &module_info_compilerSast, "bound?-reference"},
  {"compose", &module_info_runtimeSruntime, "compose"},
  {"program-type", &module_info_compilerSast, "program-type"},
  {"*print-base*", &module_info_gooScollectionsSstring, "*print-base*"},
  {"%i<<", &module_info_runtimeSboot, "%i<<"},
  {"gen-src-setter", &module_info_runtimeSboot, "gen-src-setter"},
  {"==", &module_info_gooSmacros, "=="},
  {"do-module-loader-modules", &module_info_compilerSast, "do-module-loader-modules"},
  {"%process-module", &module_info_runtimeSboot, "%process-module"},
  {"do", &module_info_gooSmacros, "do"},
  {"%i=", &module_info_runtimeSboot, "%i="},
  {"%ftan", &module_info_runtimeSboot, "%ftan"},
  {"locals-functions-setter", &module_info_compilerSast, "locals-functions-setter"},
  {"describe-handler", &module_info_runtimeSruntime, "describe-handler"},
  {"nul", &module_info_runtimeSboot, "nul"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"elt-setter", &module_info_gooScollectionsScollection, "elt-setter"},
  {"do-keyed", &module_info_gooScollectionsScollection, "do-keyed"},
  {"constant-value", &module_info_compilerSast, "constant-value"},
  {"t=", &module_info_gooStypes, "t="},
  {"set-module-environments", &module_info_compilerSast, "set-module-environments"},
  {"-", &module_info_gooSmath, "-"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"function-free", &module_info_compilerSast, "function-free"},
  {"<prop>", &module_info_runtimeSboot, "<prop>"},
  {"sequentialize", &module_info_compilerSast, "sequentialize"},
  {"locals-functions", &module_info_compilerSast, "locals-functions"},
  {"<range>", &module_info_gooScollectionsSrange, "<range>"},
  {"neg", &module_info_gooSmath, "neg"},
  {"push-last!", &module_info_gooScollectionsSbuffer, "push-last!"},
  {"elts", &module_info_gooScollectionsScollection, "elts"},
  {"%untag", &module_info_runtimeSboot, "%untag"},
  {"/", &module_info_gooSmath, "/"},
  {"cat2", &module_info_gooScollectionsSsequence, "cat2"},
  {"<step>", &module_info_gooScollectionsSstep, "<step>"},
  {"<gen>", &module_info_runtimeSboot, "<gen>"},
  {"quasiquote", &module_info_runtimeSboot, "quasiquote"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"<error>", &module_info_runtimeSruntime, "<error>"},
  {"%fsin", &module_info_runtimeSboot, "%fsin"},
  {"list", &module_info_gooScollectionsSlist, "list"},
  {"gen-src", &module_info_runtimeSboot, "gen-src"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"compile-time-program", &module_info_compilerSast, "compile-time-program"},
  {"%i?", &module_info_runtimeSboot, "%i?"},
  {"object-props", &module_info_runtimeSboot, "object-props"},
  {"isa?", &module_info_runtimeSboot, "isa?"},
  {"%c<", &module_info_runtimeSboot, "%c<"},
  {"<compile-time>", &module_info_compilerSast, "<compile-time>"},
  {"@olen", &module_info_runtimeSboot, "@olen"},
  {"<monitor>", &module_info_compilerSast, "<monitor>"},
  {"logn", &module_info_gooSmath, "logn"},
  {"num-to-str-base", &module_info_gooScollectionsSstring, "num-to-str-base"},
  {"pop", &module_info_gooScollectionsSlist, "pop"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"case", &module_info_gooSmacros, "case"},
  {"function-source-setter", &module_info_compilerSast, "function-source-setter"},
  {"<module-binding-reference>", &module_info_compilerSast, "<module-binding-reference>"},
  {"%vlen", &module_info_runtimeSboot, "%vlen"},
  {"<runtime-reference>", &module_info_compilerSast, "<runtime-reference>"},
  {"mem?", &module_info_gooScollectionsScollection, "mem?"},
  {"fix-let-types-setter", &module_info_compilerSast, "fix-let-types-setter"},
  {"dv", &module_info_runtimeSboot, "dv"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"use/export", &module_info_runtimeSboot, "use/export"},
  {"list-handlers", &module_info_runtimeSruntime, "list-handlers"},
  {"%vnul", &module_info_runtimeSboot, "%vnul"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"signature-names", &module_info_compilerSast, "signature-names"},
  {"always", &module_info_runtimeSruntime, "always"},
  {"<locals>", &module_info_compilerSast, "<locals>"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"analyze-calls", &YcompilerSast_linearizeYanalyze_calls},
  {"gather-temporaries!", &YcompilerSast_linearizeYgather_temporariesX},
  {"assoc-key-setter", &YcompilerSast_linearizeYassoc_key_setter},
  {"flatten-seqs", &YcompilerSast_linearizeYflatten_seqs},
  {"reference-offset-setter", &YcompilerSast_linearizeYreference_offset_setter},
  {"unconstrained-type?", &YcompilerSast_linearizeYunconstrained_typeQ},
  {"reference-self?", &YcompilerSast_linearizeYreference_selfQ},
  {"program-form", &YcompilerSast_linearizeYprogram_form},
  {"closurize-main!", &YcompilerSast_linearizeYclosurize_mainX},
  {"lift!", &YcompilerSast_linearizeYliftX},
  {"extract!", &YcompilerSast_linearizeYextractX},
  {"do-dynamic-extent!", &YcompilerSast_linearizeYdo_dynamic_extentX},
  {"lift-procedures!", &YcompilerSast_linearizeYlift_proceduresX},
  {"register-allocate!", &YcompilerSast_linearizeYregister_allocateX},
  {"---main-0---", NULL},
  {"---main-1---", NULL},
  {"<free-reference>", &YcompilerSast_linearizeYLfree_referenceG},
  {"assoc-key", &YcompilerSast_linearizeYassoc_key},
  {"program-quotations", &YcompilerSast_linearizeYprogram_quotations},
  {"box-form", &YcompilerSast_linearizeYbox_form},
  {"box-reference-setter", &YcompilerSast_linearizeYbox_reference_setter},
  {"box-reference", &YcompilerSast_linearizeYbox_reference},
  {"boxify-mutable-bindings", &YcompilerSast_linearizeYboxify_mutable_bindings},
  {"<closure-creation>", &YcompilerSast_linearizeYLclosure_creationG},
  {"extract-things!", &YcompilerSast_linearizeYextract_thingsX},
  {"form-quotations", &YcompilerSast_linearizeYform_quotations},
  {"collect-temporaries!", &YcompilerSast_linearizeYcollect_temporariesX},
  {"do-do-dynamic-extent!", &YcompilerSast_linearizeYdo_do_dynamic_extentX},
  {"<box-read>", &YcompilerSast_linearizeYLbox_readG},
  {"assoc", &YcompilerSast_linearizeYassoc},
  {"analyze-dynamic-extent", &YcompilerSast_linearizeYanalyze_dynamic_extent},
  {"closure-creation-free-setter", &YcompilerSast_linearizeYclosure_creation_free_setter},
  {"<flattened-program>", &YcompilerSast_linearizeYLflattened_programG},
  {"adjoin-definition!", &YcompilerSast_linearizeYadjoin_definitionX},
  {"form-program", &YcompilerSast_linearizeYform_program},
  {"do-call-references!", &YcompilerSast_linearizeYdo_call_referencesX},
  {"closure-creation-free", &YcompilerSast_linearizeYclosure_creation_free},
  {"*renaming-bindings-counter*", &YcompilerSast_linearizeYTrenaming_bindings_counterT},
  {"form-definitions", &YcompilerSast_linearizeYform_definitions},
  {"collect-registers!", &YcompilerSast_linearizeYcollect_registersX},
  {"form-program-setter", &YcompilerSast_linearizeYform_program_setter},
  {"assoc-value", &YcompilerSast_linearizeYassoc_value},
  {"<renamed-local-binding>", &YcompilerSast_linearizeYLrenamed_local_bindingG},
  {"do-call-upgrades!", &YcompilerSast_linearizeYdo_call_upgradesX},
  {"adjoin-free-binding!", &YcompilerSast_linearizeYadjoin_free_bindingX},
  {"as-top-level-forms", &YcompilerSast_linearizeYas_top_level_forms},
  {"---main-2---", NULL},
  {"<box-creation>", &YcompilerSast_linearizeYLbox_creationG},
  {"*register-passive?*", &YcompilerSast_linearizeYTregister_passiveQT},
  {"assocq", &YcompilerSast_linearizeYassocq},
  {"program-definitions-setter", &YcompilerSast_linearizeYprogram_definitions_setter},
  {"box-form-setter", &YcompilerSast_linearizeYbox_form_setter},
  {"ast-walk", &YcompilerSast_linearizeYast_walk},
  {"form-definitions-setter", &YcompilerSast_linearizeYform_definitions_setter},
  {"update-walk!", &YcompilerSast_linearizeYupdate_walkX},
  {"<box-write>", &YcompilerSast_linearizeYLbox_writeG},
  {"new-renamed-binding", &YcompilerSast_linearizeYnew_renamed_binding},
  {"do-do-call-references!", &YcompilerSast_linearizeYdo_do_call_referencesX},
  {"<assoc>", &YcompilerSast_linearizeYLassocG},
  {"<top-level-form>", &YcompilerSast_linearizeYLtop_level_formG},
  {"closure-creation-index-setter", &YcompilerSast_linearizeYclosure_creation_index_setter},
  {"form-quotations-setter", &YcompilerSast_linearizeYform_quotations_setter},
  {"adjoin-temporary-variables!", &YcompilerSast_linearizeYadjoin_temporary_variablesX},
  {"closure-creation-index", &YcompilerSast_linearizeYclosure_creation_index},
  {"ast-contains-fun?", &YcompilerSast_linearizeYast_contains_funQ},
  {"insert-box!", &YcompilerSast_linearizeYinsert_boxX},
  {"reference-offset", &YcompilerSast_linearizeYreference_offset},
  {"analyze-call-references", &YcompilerSast_linearizeYanalyze_call_references},
  {"program-definitions", &YcompilerSast_linearizeYprogram_definitions},
  {"assoc-value-setter", &YcompilerSast_linearizeYassoc_value_setter},
  {"program-quotations-setter", &YcompilerSast_linearizeYprogram_quotations_setter},
  {"allocate-register", &YcompilerSast_linearizeYallocate_register},
  {"reference-self?-setter", &YcompilerSast_linearizeYreference_selfQ_setter},
  {"split-program", &YcompilerSast_linearizeYsplit_program},
  {"do-do-call-upgrades!", &YcompilerSast_linearizeYdo_do_call_upgradesX},
  {"program-form-setter", &YcompilerSast_linearizeYprogram_form_setter},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"analyze-calls", "analyze-calls"},
  {"program-form", "program-form"},
  {"gather-temporaries!", "gather-temporaries!"},
  {"flatten-seqs", "flatten-seqs"},
  {"reference-self?", "reference-self?"},
  {"closurize-main!", "closurize-main!"},
  {"lift!", "lift!"},
  {"ast-contains-fun?", "ast-contains-fun?"},
  {"<free-reference>", "<free-reference>"},
  {"program-quotations", "program-quotations"},
  {"box-form", "box-form"},
  {"box-reference", "box-reference"},
  {"extract-things!", "extract-things!"},
  {"form-quotations", "form-quotations"},
  {"register-allocate!", "register-allocate!"},
  {"form-program", "form-program"},
  {"closure-creation-free", "closure-creation-free"},
  {"unconstrained-type?", "unconstrained-type?"},
  {"form-definitions", "form-definitions"},
  {"collect-registers!", "collect-registers!"},
  {"analyze-dynamic-extent", "analyze-dynamic-extent"},
  {"<renamed-local-binding>", "<renamed-local-binding>"},
  {"<box-read>", "<box-read>"},
  {"*register-passive?*", "*register-passive?*"},
  {"<top-level-form>", "<top-level-form>"},
  {"collect-temporaries!", "collect-temporaries!"},
  {"<box-write>", "<box-write>"},
  {"<box-creation>", "<box-creation>"},
  {"closure-creation-index", "closure-creation-index"},
  {"insert-box!", "insert-box!"},
  {"reference-offset", "reference-offset"},
  {"program-definitions", "program-definitions"},
  {"<closure-creation>", "<closure-creation>"},
  {"update-walk!", "update-walk!"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_compilerSast_linearize;
MODULE_INFO module_info_compilerSast_linearize = {
  "compiler/ast-linearize",
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
extern void load_module_compilerSast (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooScollections (void);

/* EXPRESSION: */

extern void load_module_compilerSast_linearize (void);

void load_module_compilerSast_linearize (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_runtimeSboot();
  load_module_gooSmacros();
  load_module_runtimeSruntime();
  load_module_compilerSast();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScollections();

  (P)YcompilerSast_linearizeY___main_0___();
  (P)YcompilerSast_linearizeY___main_1___();
  (P)YcompilerSast_linearizeY___main_2___();

}

/* END OF GENERATED CODE. */
