/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: ast-linearize */

EXT(YLnumG,"boot","<num>");
EXT(YLvecG,"boot","<vec>");
EXT(YprotoScollectionsScollectionYkey_type,"proto/collections/collection","key-type");
EXT(Yprop_getter,"boot","prop-getter");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
EXT(YastYfunction_free,"ast","function-free");
EXT(YprotoScollectionsStableYcase_insensitive_string_equal,"proto/collections/table","case-insensitive-string-equal");
EXT(YprotoScollectionsStableYcase_insensitive_string_hash,"proto/collections/table","case-insensitive-string-hash");
EXT(YprotoScollectionsSassocYassocs_test_setter,"proto/collections/assoc","assocs-test-setter");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
DEF(Yast_linearizeYcollect_temporariesX,"ast-linearize","collect-temporaries!");
EXT(YprotoScollectionsSsequenceYdel_dups,"proto/collections/sequence","del-dups");
EXT(YastYbinding_global_box,"ast","binding-global-box");
EXT(YprotoScollectionsScollectionYfinQ,"proto/collections/collection","fin?");
EXT(Yunexec,"boot","unexec");
EXT(Ytype_error,"boot","type-error");
EXT(YprotoSmathYA,"proto/math","+");
EXT(YastYenvironment_module,"ast","environment-module");
EXT(Yclass_direct_props,"boot","class-direct-props");
EXT(YmacrosYgensym,"macros","gensym");
EXT(Yvec,"boot","vec");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YprotoScollectionsSsequenceYbelow,"proto/collections/sequence","below");
EXT(YastYsignature_arity_setter,"ast","signature-arity-setter");
EXT(YastYLconstantG,"ast","<constant>");
EXT(YastYinstall_initial_bindings,"ast","install-initial-bindings");
EXT(YastYfix_let_body_setter,"ast","fix-let-body-setter");
EXT(YLmetG,"boot","<met>");
EXT(YastYmonitor_test,"ast","monitor-test");
EXT(YprotoSmathYcontagious_call,"proto/math","contagious-call");
EXT(YastYmodule_name,"ast","module-name");
EXT(YastYLmonitorG,"ast","<monitor>");
EXT(YprotoScollectionsSstringYTprint_baseT,"proto/collections/string","*print-base*");
EXT(YruntimeYloc_val_setter,"runtime","loc-val-setter");
EXT(YastYLast_macro_definitionG,"ast","<ast-macro-definition>");
EXT(YastYsignature_value_setter,"ast","signature-value-setter");
EXT(YastYglobal_box_value_setter,"ast","global-box-value-setter");
EXT(YprotoSmathYzeroQ,"proto/math","zero?");
EXT(YastYapplication_knownQ,"ast","application-known?");
EXT(Yprop_init,"boot","prop-init");
EXT(YastYfix_let_bindings_setter,"ast","fix-let-bindings-setter");
DEF(Yast_linearizeYLrenamed_local_bindingG,"ast-linearize","<renamed-local-binding>");
EXT(YastYbinding_info,"ast","binding-info");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
DEF(Yast_linearizeYcollect_registersX,"ast-linearize","collect-registers!");
EXT(YastYprobe_module,"ast","probe-module");
EXT(YprotoSmathYroundS,"proto/math","round/");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YprotoSmathYsin,"proto/math","sin");
EXT(YprotoStypesYtA,"proto/types","t+");
EXT(YprotoSmathYeof_object,"proto/math","eof-object");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YprotoScollectionsScollectionYenum,"proto/collections/collection","enum");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YastYglobal_box_value,"ast","global-box-value");
EXT(Yclass_descendents,"boot","class-descendents");
EXT(YprotoScollectionsScollectionYelt_default,"proto/collections/collection","elt-default");
EXT(YprotoScollectionsSbufferYbuf,"proto/collections/buffer","buf");
EXT(YprotoScollectionsScollectionYmap2,"proto/collections/collection","map2");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YprotoScollectionsSrangeYfrom,"proto/collections/range","from");
EXT(Ygen_refs_setter,"boot","gen-refs-setter");
EXT(YastYenv_object_name,"ast","env-object-name");
EXT(YastYbinding_locative,"ast","binding-locative");
EXT(YprotoSmathYevenQ,"proto/math","even?");
DEF(Yast_linearizeYdo_do_call_upgradesX,"ast-linearize","do-do-call-upgrades!");
EXT(YastYmonitor_main_thunk,"ast","monitor-main-thunk");
DEF(Yast_linearizeYregister_allocateX,"ast-linearize","register-allocate!");
EXT(YastYfab_g2c_module,"ast","fab-g2c-module");
DEF(Yast_linearizeYform_program_setter,"ast-linearize","form-program-setter");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
DEF(Yast_linearizeYprogram_definitions_setter,"ast-linearize","program-definitions-setter");
EXT(YLchrG,"boot","<chr>");
EXT(YprotoSmathYrem,"proto/math","rem");
EXT(YLflatG,"boot","<flat>");
EXT(YprotoScollectionsSsequenceYdel_vals,"proto/collections/sequence","del-vals");
EXT(YsubtypeQ,"boot","subtype?");
EXT(Yprop_value_setter,"boot","prop-value-setter");
EXT(YastYLalternativeG,"ast","<alternative>");
EXT(YprotoSmathYlog,"proto/math","log");
DEF(Yast_linearizeYnew_renamed_binding,"ast-linearize","new-renamed-binding");
EXT(YPdefine_method,"boot","%define-method");
EXT(Ygen_refs,"boot","gen-refs");
EXT(Ynot,"boot","not");
EXT(YprotoSmathY_,"proto/math","-");
DEF(Yast_linearizeYboxify_mutable_bindings,"ast-linearize","boxify-mutable-bindings");
EXT(YprotoScollectionsScollectionYdo_keyed,"proto/collections/collection","do-keyed");
EXT(YastYmodule_name_to_relpath,"ast","module-name-to-relpath");
DEF(Yast_linearizeYprogram_quotations,"ast-linearize","program-quotations");
EXT(YprotoScollectionsSsequenceYsub,"proto/collections/sequence","sub");
EXT(YastYmonitor_type,"ast","monitor-type");
EXT(YprotoScollectionsSlistYassq,"proto/collections/list","assq");
EXT(YprotoScollectionsStableYLstr_tabG,"proto/collections/table","<str-tab>");
EXT(YastYobjectify_signature,"ast","objectify-signature");
EXT(YprotoScollectionsScollectionYdup,"proto/collections/collection","dup");
EXT(YastYmonitor_info,"ast","monitor-info");
EXT(YprotoScollectionsScollectionYelt_type,"proto/collections/collection","elt-type");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YprotoScollectionsSsequenceYrange_checkQ,"proto/collections/sequence","range-check?");
EXT(YastYLfix_letG,"ast","<fix-let>");
EXT(YprotoSmathYtanh,"proto/math","tanh");
EXT(Yfab_sym,"boot","fab-sym");
DEF(Yast_linearizeYliftX,"ast-linearize","lift!");
EXT(Yunknown_function_error,"boot","unknown-function-error");
DEF(Yast_linearizeYform_quotations_setter,"ast-linearize","form-quotations-setter");
EXT(YastYLbindingG,"ast","<binding>");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YprotoScollectionsSsequenceYpos,"proto/collections/sequence","pos");
EXT(YastYfunction_registers_setter,"ast","function-registers-setter");
EXT(YprotoScollectionsScollectionYfold,"proto/collections/collection","fold");
EXT(YprotoSmathYB,"proto/math","&");
EXT(YprotoScollectionsStableYtab_shrink_threshold,"proto/collections/table","tab-shrink-threshold");
EXT(YastYfunction_index,"ast","function-index");
DEF(Yast_linearizeYassoc_value,"ast-linearize","assoc-value");
EXT(YprotoScollectionsScollectionYelts,"proto/collections/collection","elts");
EXT(YLtupG,"boot","<tup>");
EXT(YastYreport_undefined_global_bindings,"ast","report-undefined-global-bindings");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YOlst,"boot","@lst");
EXT(YPvnul,"boot","%vnul");
EXT(YastYassignment_form_setter,"ast","assignment-form-setter");
EXT(YastYfunction_signature_setter,"ast","function-signature-setter");
DEF(Yast_linearizeYinsert_boxX,"ast-linearize","insert-box!");
EXT(YastYsignature_bindings,"ast","signature-bindings");
EXT(YprotoSmathYNEE,"proto/math","~==");
EXT(YLfunG,"boot","<fun>");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YastYfunction_value,"ast","function-value");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
EXT(YastYmodule_binding,"ast","module-binding");
EXT(YastYset_module_environments,"ast","set-module-environments");
EXT(YmacrosYmap,"macros","map");
EXT(YprotoSmathYtruncS,"proto/math","trunc/");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YastYfunction_temporaries_setter,"ast","function-temporaries-setter");
EXT(YastYbinding_name,"ast","binding-name");
EXT(YastYenvironment_bindings,"ast","environment-bindings");
EXT(YastYLprogramG,"ast","<program>");
EXT(YprotoSmathYNE,"proto/math","~=");
EXT(YastYbinding_type,"ast","binding-type");
EXT(YastYbinding_kind,"ast","binding-kind");
EXT(YprotoStypesYtQ,"proto/types","t?");
EXT(YprotoStypesYall2Q,"proto/types","all2?");
EXT(YprotoScollectionsSsequenceYreject,"proto/collections/sequence","reject");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YprotoScollectionsSrangeYrange,"proto/collections/range","range");
EXT(Ysig_val,"boot","sig-val");
EXT(YastYobjectify_quotation,"ast","objectify-quotation");
EXT(Yprop_boundQ,"boot","prop-bound?");
EXT(YastYmodule_target_environment,"ast","module-target-environment");
EXT(YLlstG,"boot","<lst>");
EXT(YastYsignature_names_setter,"ast","signature-names-setter");
EXT(YprotoSmathYtan,"proto/math","tan");
EXT(YLlogG,"boot","<log>");
EXT(YprotoScollectionsSrangeYrange_by,"proto/collections/range","range-by");
EXT(YprotoSmathYneg,"proto/math","neg");
EXT(YprotoSmathYK,"proto/math","|");
EXT(YprotoSmathYsqrt,"proto/math","sqrt");
EXT(Ytype_object,"boot","type-object");
EXT(Yfun_name_setter,"boot","fun-name-setter");
DEF(Yast_linearizeYLassocG,"ast-linearize","<assoc>");
EXT(Yfab_class,"boot","fab-class");
EXT(YastYload_module,"ast","load-module");
EXT(YastYfix_let_bindings,"ast","fix-let-bindings");
EXT(YprotoScollectionsScollectionYallQ,"proto/collections/collection","all?");
DEF(Yast_linearizeYLtop_level_formG,"ast-linearize","<top-level-form>");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YprotoSmathYT,"proto/math","*");
DEF(Yast_linearizeYform_definitions_setter,"ast-linearize","form-definitions-setter");
EXT(YastYboundQ_reference,"ast","bound?-reference");
EXT(YprotoSmathYround,"proto/math","round");
EXT(YprotoSmathYlogn,"proto/math","logn");
EXT(Ysym_name,"boot","sym-name");
EXT(YprotoSmathYas_log,"proto/math","as-log");
EXT(YastYprogram_type,"ast","program-type");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YprotoSmathY1A,"proto/math","1+");
EXT(YprotoSmathYpow,"proto/math","pow");
EXT(YprotoScollectionsSsequenceYrange_check,"proto/collections/sequence","range-check");
DEF(Yast_linearizeYsplit_program,"ast-linearize","split-program");
EXT(YastYreference_binding,"ast","reference-binding");
EXT(YprotoScollectionsScollectionYfind,"proto/collections/collection","find");
EXT(Yfun_name,"boot","fun-name");
EXT(YastYprogram_type_setter,"ast","program-type-setter");
EXT(YastYunchecked_runtime_environment,"ast","unchecked-runtime-environment");
EXT(YprotoSmathYdigitQ,"proto/math","digit?");
EXT(Yprop_owner,"boot","prop-owner");
EXT(YprotoScollectionsStableYtab_gc_state,"proto/collections/table","tab-gc-state");
DEF(Yast_linearizeYadjoin_definitionX,"ast-linearize","adjoin-definition!");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YprotoSmathYLbotG,"proto/math","<bot>");
DEF(Yast_linearizeYLflattened_programG,"ast-linearize","<flattened-program>");
EXT(YprotoSmathYto_str,"proto/math","to-str");
EXT(YmacrosYfab_setter_name,"macros","fab-setter-name");
EXT(YprotoStypesYtL,"proto/types","t<");
DEF(Yast_linearizeYreference_selfQ,"ast-linearize","reference-self?");
EXT(YastYfunction_free_setter,"ast","function-free-setter");
EXT(Yobject_class,"boot","object-class");
EXT(YprotoSmathYfloorS,"proto/math","floor/");
EXT(YprotoScollectionsSlistYpush,"proto/collections/list","push");
EXT(YastYprogram_register,"ast","program-register");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YastYreference_frame_number,"ast","reference-frame-number");
EXT(YprotoSmathYatan,"proto/math","atan");
EXT(YastYsignature_arity,"ast","signature-arity");
DEF(Yast_linearizeYanalyze_dynamic_extent,"ast-linearize","analyze-dynamic-extent");
DEF(Yast_linearizeYextract_thingsX,"ast-linearize","extract-things!");
EXT(Yclass_parents,"boot","class-parents");
EXT(YastYbinding_mutableQ,"ast","binding-mutable?");
DEF(Yast_linearizeYclosure_creation_index,"ast-linearize","closure-creation-index");
DEF(Yast_linearizeYextractX,"ast-linearize","extract!");
EXT(YTreport_prop_unbound_errorsQT,"boot","*report-prop-unbound-errors?*");
EXT(YprotoScollectionsSsequenceYcat2,"proto/collections/sequence","cat2");
EXT(YprotoScollectionsSsequenceYpick,"proto/collections/sequence","pick");
DEF(Yast_linearizeYupdate_walkX,"ast-linearize","update-walk!");
EXT(Yprop_value,"boot","prop-value");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(YprotoScollectionsStableYtab_growth_threshold,"proto/collections/table","tab-growth-threshold");
EXT(YastYLcompile_timeG,"ast","<compile-time>");
EXT(YprotoScollectionsSlistYLlistG,"proto/collections/list","<list>");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YprotoSmagnitudesYG,"proto/magnitudes",">");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YprotoSmathYchar_Gascii,"proto/math","char->ascii");
EXT(YastYLboundQG,"ast","<bound?>");
EXT(YLseqG,"boot","<seq>");
DEF(Yast_linearizeYast_walk,"ast-linearize","ast-walk");
DEF(Yast_linearizeYdo_do_call_referencesX,"ast-linearize","do-do-call-references!");
EXT(YLanyG,"boot","<any>");
EXT(Yprop_type,"boot","prop-type");
EXT(YastYprogram_register_setter,"ast","program-register-setter");
EXT(YprotoScollectionsScollectionYelt_setter,"proto/collections/collection","elt-setter");
EXT(YruntimeYread,"runtime","read");
EXT(YastYLunwind_protectG,"ast","<unwind-protect>");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YastYLlocalsG,"ast","<locals>");
DEF(Yast_linearizeYreference_offset_setter,"ast-linearize","reference-offset-setter");
EXT(YastYLglobal_boxG,"ast","<global-box>");
EXT(YastYfix_let_types_setter,"ast","fix-let-types-setter");
EXT(YprotoStypesYanyQ,"proto/types","any?");
EXT(YastYbinding_value,"ast","binding-value");
EXT(YprotoScollectionsSsequenceYcatX,"proto/collections/sequence","cat!");
EXT(YastYbinding_index,"ast","binding-index");
EXT(Yclass_props,"boot","class-props");
EXT(YprotoScollectionsScollectionYzap,"proto/collections/collection","zap");
EXT(YastYlocals_functions,"ast","locals-functions");
DEF(Yast_linearizeYTregister_passiveQT,"ast-linearize","*register-passive?*");
EXT(YastYLmodule_loaderG,"ast","<module-loader>");
EXT(YastYfind_binding,"ast","find-binding");
EXT(YastYLstatic_global_environmentG,"ast","<static-global-environment>");
DEF(Yast_linearizeYgather_temporariesX,"ast-linearize","gather-temporaries!");
EXT(YastYsignature_specs_setter,"ast","signature-specs-setter");
EXT(YprotoScollectionsSlistYassqn,"proto/collections/list","assqn");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YastYreference_called_functionQ,"ast","reference-called-function?");
EXT(YprotoSmathYaddress_of,"proto/math","address-of");
EXT(YastYLdefinitionG,"ast","<definition>");
EXT(YprotoScollectionsSmapYfab_map,"proto/collections/map","fab-map");
EXT(YprotoStypesYtE,"proto/types","t=");
EXT(Yerror,"boot","error");
EXT(YastYfree_environment,"ast","free-environment");
EXT(YprotoSmathYGGG,"proto/math",">>>");
EXT(YprotoSmagnitudesYL,"proto/magnitudes","<");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YastYLglobal_referenceG,"ast","<global-reference>");
EXT(YprotoScollectionsStableYtab_test,"proto/collections/table","tab-test");
EXT(YastYapplication_binding,"ast","application-binding");
EXT(YastYenvironment_uses_modules,"ast","environment-uses-modules");
EXT(YLsigG,"boot","<sig>");
EXT(YPprop_unbound_error,"boot","%prop-unbound-error");
EXT(YprotoScollectionsSstringYnum_to_str_base,"proto/collections/string","num-to-str-base");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YPsymbols,"boot","%symbols");
EXT(YastYlocals_body_setter,"ast","locals-body-setter");
EXT(YprotoScollectionsScollectionYdo3,"proto/collections/collection","do3");
EXT(YruntimeYLerrorG,"runtime","<error>");
DEF(Yast_linearizeYflatten_seqs,"ast-linearize","flatten-seqs");
EXT(YastYlocals_bindings_setter,"ast","locals-bindings-setter");
DEF(Yast_linearizeYclosurize_mainX,"ast-linearize","closurize-main!");
EXT(YastYLapplicationG,"ast","<application>");
EXT(Yhandler_info_message,"boot","handler-info-message");
DEF(Yast_linearizeYLfree_referenceG,"ast-linearize","<free-reference>");
EXT(YprotoScollectionsSbufferYlen_setter,"proto/collections/buffer","len-setter");
EXT(Yfun_names,"boot","fun-names");
EXT(YastYfunction_naryQ,"ast","function-nary?");
EXT(YprotoScollectionsScollectionYas_copy,"proto/collections/collection","as-copy");
EXT(YastYfunction_self_recursiveQ_setter,"ast","function-self-recursive?-setter");
EXT(YastYLast_methodG,"ast","<ast-method>");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YOall2Q,"boot","@all2?");
EXT(YastYLsequentialG,"ast","<sequential>");
EXT(YastYLast_functionG,"ast","<ast-function>");
EXT(YprotoScollectionsScollectionYadd,"proto/collections/collection","add");
EXT(YastYdo_static_global_bindings,"ast","do-static-global-bindings");
EXT(YprotoSmathYto_upper,"proto/math","to-upper");
EXT(YprotoStypesY2nd,"proto/types","2nd");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YprotoSmathYE,"proto/math","=");
EXT(YprotoSmathYalphaQ,"proto/math","alpha?");
EXT(YastYLast_primitiveG,"ast","<ast-primitive>");
EXT(YprotoSmathYceil,"proto/math","ceil");
EXT(YastYfunction_registers,"ast","function-registers");
EXT(YastYfix_let_arguments,"ast","fix-let-arguments");
EXT(YLcolG,"boot","<col>");
EXT(YLclassG,"boot","<class>");
EXT(YruntimeYloc_val,"runtime","loc-val");
EXT(YprotoScollectionsScollectionYkey_test,"proto/collections/collection","key-test");
EXT(YastYLregular_applicationG,"ast","<regular-application>");
EXT(YprotoSmathYto_lower,"proto/math","to-lower");
EXT(YprotoScollectionsScollectionYaddX,"proto/collections/collection","add!");
EXT(YprotoScollectionsSsequenceYfinds,"proto/collections/sequence","finds");
EXT(YLmagG,"boot","<mag>");
EXT(YastYfunction_source_setter,"ast","function-source-setter");
DEF(Yast_linearizeYassocq,"ast-linearize","assocq");
EXT(YDmax_int,"boot","$max-int");
EXT(YastYmodule_loader_module_type,"ast","module-loader-module-type");
EXT(YprotoScollectionsScollectionYfind_or,"proto/collections/collection","find-or");
EXT(Yfind_setter,"boot","find-setter");
EXT(YastYLbind_exitG,"ast","<bind-exit>");
EXT(YprotoSmathYposQ,"proto/math","pos?");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
EXT(YruntimeYhandler_function,"runtime","handler-function");
DEF(Yast_linearizeYbox_reference,"ast-linearize","box-reference");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YastYfunction_signature,"ast","function-signature");
EXT(YastYfunction_self_recursiveQ,"ast","function-self-recursive?");
EXT(YastYconstant_index,"ast","constant-index");
EXT(YprotoScollectionsStableYtab_shrink_threshold_setter,"proto/collections/table","tab-shrink-threshold-setter");
DEF(Yast_linearizeYassoc_key,"ast-linearize","assoc-key");
EXT(YastYfunction_binding,"ast","function-binding");
EXT(YprotoScollectionsScollectionYLtabG,"proto/collections/collection","<tab>");
DEF(Yast_linearizeYassoc_key_setter,"ast-linearize","assoc-key-setter");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(Ytail_setter,"boot","tail-setter");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YastYfunction_source,"ast","function-source");
DEF(Yast_linearizeYTrenaming_bindings_counterT,"ast-linearize","*renaming-bindings-counter*");
EXT(YprotoStypesYLproductG,"proto/types","<product>");
EXT(YPsnul,"boot","%snul");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YprotoScollectionsSstringYstr,"proto/collections/string","str");
EXT(YastYLlocal_bindingG,"ast","<local-binding>");
EXT(YastYfunction_data_refs_setter,"ast","function-data-refs-setter");
EXT(YprotoScollectionsSstringYascii_whitespaces,"proto/collections/string","ascii-whitespaces");
EXT(YastYbinding_inferred_type,"ast","binding-inferred-type");
EXT(YastYast_define_binding,"ast","ast-define-binding");
EXT(YprotoScollectionsScollectionYelt_or,"proto/collections/collection","elt-or");
EXT(YruntimeYformat,"runtime","format");
DEF(Yast_linearizeYclosure_creation_free_setter,"ast-linearize","closure-creation-free-setter");
EXT(YmacrosYcat,"macros","cat");
EXT(YastYLlocal_assignmentG,"ast","<local-assignment>");
EXT(YprotoSmathYcosh,"proto/math","cosh");
EXT(YastYsignature_naryQ_setter,"ast","signature-nary?-setter");
EXT(YastYapplication_function,"ast","application-function");
EXT(YastYfunction_temporaries,"ast","function-temporaries");
EXT(YastYbinding_inferred_type_setter,"ast","binding-inferred-type-setter");
EXT(YprotoScollectionsScollectionYdel,"proto/collections/collection","del");
EXT(Yadd_prop,"boot","add-prop");
DEF(Yast_linearizeYanalyze_calls,"ast-linearize","analyze-calls");
EXT(YprotoScollectionsStableYDpermanent_hash_state,"proto/collections/table","$permanent-hash-state");
EXT(YastYbinding_dynamic_extentQ,"ast","binding-dynamic-extent?");
EXT(YastYassignment_binding,"ast","assignment-binding");
EXT(YprotoStypesYlen,"proto/types","len");
EXT(YastYlocals_functions_setter,"ast","locals-functions-setter");
EXT(YprotoStypesYtype_elts_setter,"proto/types","type-elts-setter");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
EXT(YLoptsG,"boot","<opts>");
EXT(YastYLreal_referenceG,"ast","<real-reference>");
EXT(YprotoScollectionsScollectionYLenumG,"proto/collections/collection","<enum>");
EXT(YprotoSmathYmod,"proto/math","mod");
EXT(YastYsignature_names,"ast","signature-names");
EXT(Ytail,"boot","tail");
DEF(Yast_linearizeYanalyze_call_references,"ast-linearize","analyze-call-references");
EXT(YprotoScollectionsScollectionYdo2,"proto/collections/collection","do2");
EXT(YprotoSmagnitudesYmax,"proto/magnitudes","max");
EXT(YastYLast_genericG,"ast","<ast-generic>");
DEF(Yast_linearizeYdo_call_referencesX,"ast-linearize","do-call-references!");
DEF(Yast_linearizeYdo_call_upgradesX,"ast-linearize","do-call-upgrades!");
EXT(YprotoSmathYacos,"proto/math","acos");
EXT(YprotoSmathYpower_of_two_ceiling,"proto/math","power-of-two-ceiling");
EXT(YLtypeG,"boot","<type>");
EXT(YmacrosYnapp,"macros","napp");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YprotoScollectionsScollectionYlow_elt_setter,"proto/collections/collection","low-elt-setter");
EXT(YprotoSmathYflo_bits,"proto/math","flo-bits");
EXT(YastYfunction_index_setter,"ast","function-index-setter");
DEF(Yast_linearizeYclosure_creation_free,"ast-linearize","closure-creation-free");
EXT(YLlocG,"boot","<loc>");
DEF(Yast_linearizeYast_contains_funQ,"ast-linearize","ast-contains-fun?");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(Yord_app_mets,"boot","ord-app-mets");
EXT(YprotoScollectionsSbufferYLbufG,"proto/collections/buffer","<buf>");
EXT(YprotoScollectionsScollectionYfab,"proto/collections/collection","fab");
EXT(Ytype_elts,"boot","type-elts");
EXT(YprotoSmathYLL,"proto/math","<<");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(YprotoSmagnitudesYmin,"proto/magnitudes","min");
EXT(YprotoStypesYtT,"proto/types","t*");
EXT(YastYmodule_syntax_environment,"ast","module-syntax-environment");
EXT(YastYreference_called_functionQ_setter,"ast","reference-called-function?-setter");
EXT(YprotoScollectionsStableYtab_growth_factor,"proto/collections/table","tab-growth-factor");
EXT(YprotoScollectionsSsequenceYins,"proto/collections/sequence","ins");
EXT(YruntimeYalways,"runtime","always");
EXT(YastYLraw_constantG,"ast","<raw-constant>");
DEF(Yast_linearizeYas_top_level_forms,"ast-linearize","as-top-level-forms");
EXT(YprotoScollectionsScollectionYfill,"proto/collections/collection","fill");
EXT(YprotoScollectionsSmapYLmapG,"proto/collections/map","<map>");
EXT(YastYLmodule_bindingG,"ast","<module-binding>");
EXT(YprotoSmathYbitQ,"proto/math","bit?");
EXT(Yclass_name,"boot","class-name");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YprotoScollectionsStableYLsetG,"proto/collections/table","<set>");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YprotoSmathYsinh,"proto/math","sinh");
DEF(Yast_linearizeYprogram_quotations_setter,"ast-linearize","program-quotations-setter");
EXT(YastYfunction_body_setter,"ast","function-body-setter");
EXT(YPPmacro,"boot","%%macro");
EXT(YastYsequentialize,"ast","sequentialize");
EXT(Yfind_getter,"boot","find-getter");
EXT(YastYas_lst,"ast","as-lst");
EXT(YruntimeYsig,"runtime","sig");
EXT(YprotoSmathYupperQ,"proto/math","upper?");
EXT(YastYsignature_naryQ,"ast","signature-nary?");
EXT(YprotoSmathYisqrt,"proto/math","isqrt");
EXT(YprotoSmathY1_,"proto/math","1-");
EXT(YastYLlocal_referenceG,"ast","<local-reference>");
EXT(YprotoSmathYDe,"proto/math","$e");
EXT(YastYfix_let_types,"ast","fix-let-types");
EXT(YprotoSmathYeof_objectQ,"proto/math","eof-object?");
EXT(YprotoScollectionsScollectionYempty,"proto/collections/collection","empty");
EXT(Yprop_setter,"boot","prop-setter");
EXT(Ynul,"boot","nul");
DEF(Yast_linearizeYreference_offset,"ast-linearize","reference-offset");
EXT(YastYLruntime_referenceG,"ast","<runtime-reference>");
EXT(YprotoScollectionsSassocYassocs_test,"proto/collections/assoc","assocs-test");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YastYLprogramsG,"ast","<programs>");
DEF(Yast_linearizeYunconstrained_typeQ,"ast-linearize","unconstrained-type?");
EXT(YprotoScollectionsSsequenceYlast,"proto/collections/sequence","last");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(YprotoScollectionsScollectionYitems,"proto/collections/collection","items");
EXT(YprotoScollectionsScollectionYnow,"proto/collections/collection","now");
EXT(YastYbinding_dottedQ,"ast","binding-dotted?");
EXT(YastYLimmediate_constantG,"ast","<immediate-constant>");
EXT(YprotoScollectionsSbufferYlenSfill_setter,"proto/collections/buffer","len/fill-setter");
EXT(Yfun_val,"boot","fun-val");
EXT(YastYLfab_listG,"ast","<fab-list>");
EXT(YastYalternative_consequent,"ast","alternative-consequent");
DEF(Yast_linearizeYadjoin_temporary_variablesX,"ast-linearize","adjoin-temporary-variables!");
EXT(Yclass_ancestors,"boot","class-ancestors");
EXT(YprotoSmathYatan2,"proto/math","atan2");
EXT(YprotoScollectionsScollectionYlow_elt,"proto/collections/collection","low-elt");
EXT(YastYbinding_index_setter,"ast","binding-index-setter");
EXT(YprotoScollectionsScollectionYinto,"proto/collections/collection","into");
DEF(Yast_linearizeYLclosure_creationG,"ast-linearize","<closure-creation>");
EXT(YprotoScollectionsSsequenceYrev,"proto/collections/sequence","rev");
EXT(YprotoSmathYnum_to_str,"proto/math","num-to-str");
EXT(YastYsignature_specs,"ast","signature-specs");
EXT(YastYfix_let_arguments_setter,"ast","fix-let-arguments-setter");
DEF(Yast_linearizeYprogram_form,"ast-linearize","program-form");
EXT(YDmin_int,"boot","$min-int");
EXT(YastYfunction_debug_name_setter,"ast","function-debug-name-setter");
EXT(YprotoScollectionsSstepYLstepG,"proto/collections/step","<step>");
EXT(YastYobjectify_with_subtransaction,"ast","objectify-with-subtransaction");
EXT(YastYassignment_reference,"ast","assignment-reference");
DEF(Yast_linearizeYprogram_definitions,"ast-linearize","program-definitions");
EXT(YastYLast_signatureG,"ast","<ast-signature>");
EXT(YruntimeYspread,"runtime","spread");
EXT(YprotoSmathYnegQ,"proto/math","neg?");
EXT(YastYlocals_body,"ast","locals-body");
DEF(Yast_linearizeYdo_do_dynamic_extentX,"ast-linearize","do-do-dynamic-extent!");
EXT(YastYbinding_dynamic_extentQ_setter,"ast","binding-dynamic-extent?-setter");
EXT(YprotoSmathYabs,"proto/math","abs");
EXT(YprotoSmathYfloor,"proto/math","floor");
EXT(YmacrosYpair,"macros","pair");
EXT(YastYalternative_condition,"ast","alternative-condition");
EXT(YLfloG,"boot","<flo>");
EXT(YLsymG,"boot","<sym>");
DEF(Yast_linearizeYlift_proceduresX,"ast-linearize","lift-procedures!");
EXT(YprotoSmathYDpi,"proto/math","$pi");
EXT(YprotoScollectionsSsequenceYinsX,"proto/collections/sequence","ins!");
EXT(YastYmodule_exports,"ast","module-exports");
EXT(YastYsignature_bindings_setter,"ast","signature-bindings-setter");
EXT(YastYbinding_native_toQ,"ast","binding-native-to?");
EXT(YprotoSmagnitudesYGE,"proto/magnitudes",">=");
EXT(YastYDgoo_runtime_module_name,"ast","$goo-runtime-module-name");
EXT(YprotoSmathYceilingS,"proto/math","ceiling/");
EXT(YprotoSmathYasin,"proto/math","asin");
EXT(YprotoScollectionsSstepYfirst_then,"proto/collections/step","first-then");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YmacrosYelt,"macros","elt");
EXT(YprotoStypesYas,"proto/types","as");
EXT(YprotoScollectionsSstringYascii_limit,"proto/collections/string","ascii-limit");
EXT(YprotoScollectionsScollectionYnow_setter,"proto/collections/collection","now-setter");
EXT(YastYLassignmentG,"ast","<assignment>");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YprotoScollectionsSlistYlist,"proto/collections/list","list");
EXT(YprotoSmathYN,"proto/math","~");
EXT(Yobject_parents,"boot","object-parents");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YprotoScollectionsScollectionYnxt,"proto/collections/collection","nxt");
EXT(Ygen_src_setter,"boot","gen-src-setter");
DEF(Yast_linearizeYform_quotations,"ast-linearize","form-quotations");
EXT(YmacrosYdo,"macros","do");
EXT(YastYbinding_module_name,"ast","binding-module-name");
EXT(YOisaQ,"boot","@isa?");
EXT(YprotoScollectionsSsequenceY3rd,"proto/collections/sequence","3rd");
EXT(YprotoScollectionsScollectionYkeys,"proto/collections/collection","keys");
EXT(YastYbinding_dottedQ_setter,"ast","binding-dotted?-setter");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YastYload_in,"ast","load-in");
EXT(YprotoScollectionsScollectionYrange_error,"proto/collections/collection","range-error");
EXT(YastYsignature_value,"ast","signature-value");
EXT(YastYunwind_protect_cleanup_thunk,"ast","unwind-protect-cleanup-thunk");
EXT(YLpropG,"boot","<prop>");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YprotoScollectionsStableYtab_growth_factor_setter,"proto/collections/table","tab-growth-factor-setter");
EXT(YprotoSmathYC,"proto/math","^");
EXT(YprotoScollectionsSsequenceYsub_setter,"proto/collections/sequence","sub-setter");
DEF(Yast_linearizeYform_definitions,"ast-linearize","form-definitions");
EXT(YprotoScollectionsSassocYLassocsG,"proto/collections/assoc","<assocs>");
DEF(Yast_linearizeYbox_reference_setter,"ast-linearize","box-reference-setter");
EXT(YLgenG,"boot","<gen>");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(YprotoSmathYtrunc,"proto/math","trunc");
EXT(Ynil,"boot","nil");
EXT(YastYbinding_value_setter,"ast","binding-value-setter");
EXT(Ygen_src,"boot","gen-src");
EXT(Ynew,"boot","new");
EXT(YprotoScollectionsStableYtab_growth_threshold_setter,"proto/collections/table","tab-growth-threshold-setter");
EXT(YastYbinding_global_box_setter,"ast","binding-global-box-setter");
DEF(Yast_linearizeYadjoin_free_bindingX,"ast-linearize","adjoin-free-binding!");
EXT(YprotoSmathYfabs,"proto/math","fabs");
EXT(YastYLfree_environmentG,"ast","<free-environment>");
DEF(Yast_linearizeYreference_selfQ_setter,"ast-linearize","reference-self?-setter");
EXT(YprotoSmathYlowerQ,"proto/math","lower?");
EXT(YprotoScollectionsScollectionYnow_key,"proto/collections/collection","now-key");
EXT(YprotoSmathYto_digit,"proto/math","to-digit");
EXT(YastYunwind_protect_protected_thunk,"ast","unwind-protect-protected-thunk");
EXT(YastYLcomputed_programG,"ast","<computed-program>");
EXT(YastYdo_module_loader_modules,"ast","do-module-loader-modules");
EXT(Yobject_props,"boot","object-props");
DEF(Yast_linearizeYform_program,"ast-linearize","form-program");
EXT(YastYapplication_tailQ,"ast","application-tail?");
DEF(Yast_linearizeYassoc,"ast-linearize","assoc");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YastYLreferenceG,"ast","<reference>");
EXT(YruntimeYTgensym_counterT,"runtime","*gensym-counter*");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YastYLmoduleG,"ast","<module>");
EXT(YastYLmodule_binding_referenceG,"ast","<module-binding-reference>");
EXT(YLintG,"boot","<int>");
EXT(YprotoScollectionsSrangeYLrangeG,"proto/collections/range","<range>");
EXT(YLstrG,"boot","<str>");
EXT(YastYbind_exit_main_fun,"ast","bind-exit-main-fun");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YastYfix_let_body,"ast","fix-let-body");
EXT(YPwith_monitor,"boot","%with-monitor");
DEF(Yast_linearizeYclosure_creation_index_setter,"ast-linearize","closure-creation-index-setter");
EXT(YastYfind_environment_module,"ast","find-environment-module");
DEF(Yast_linearizeYLbox_writeG,"ast-linearize","<box-write>");
EXT(YprotoScollectionsSsequenceYdo_key_vals,"proto/collections/sequence","do-key-vals");
EXT(YprotoScollectionsSsequenceY1st,"proto/collections/sequence","1st");
EXT(YprotoScollectionsSlistYpop,"proto/collections/list","pop");
EXT(YprotoSmagnitudesYLE,"proto/magnitudes","<=");
EXT(YprotoScollectionsSstringYstr_to_num,"proto/collections/string","str-to-num");
EXT(YastYconstant_index_setter,"ast","constant-index-setter");
EXT(YastYremove_modules_by_nameX,"ast","remove-modules-by-name!");
EXT(YastYLglobal_assignmentG,"ast","<global-assignment>");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YprotoSmathYGG,"proto/math",">>");
EXT(YastYast_evaluate,"ast","ast-evaluate");
EXT(YastYmonitor_handler,"ast","monitor-handler");
EXT(YmacrosYcat_sym,"macros","cat-sym");
DEF(Yast_linearizeYallocate_register,"ast-linearize","allocate-register");
EXT(YprotoSmathYoddQ,"proto/math","odd?");
EXT(YmacrosYEE,"macros","==");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YruntimeYcurry,"runtime","curry");
EXT(YastYruntime_environment,"ast","runtime-environment");
DEF(Yast_linearizeYbox_form,"ast-linearize","box-form");
EXT(Ysig_names,"boot","sig-names");
EXT(YprotoScollectionsScollectionYmemQ,"proto/collections/collection","mem?");
DEF(Yast_linearizeYdo_dynamic_extentX,"ast-linearize","do-dynamic-extent!");
DEF(Yast_linearizeYbox_form_setter,"ast-linearize","box-form-setter");
EXT(YastYLargumentsG,"ast","<arguments>");
EXT(YastYapplication_knownQ_setter,"ast","application-known?-setter");
EXT(YastYapplication_arguments,"ast","application-arguments");
EXT(YastYreference_frame_offset,"ast","reference-frame-offset");
EXT(YastYLast_primitive_definitionG,"ast","<ast-primitive-definition>");
EXT(YastYfunction_data_refs,"ast","function-data-refs");
EXT(YprotoScollectionsScollectionYmap_keyed,"proto/collections/collection","map-keyed");
DEF(Yast_linearizeYprogram_form_setter,"ast-linearize","program-form-setter");
EXT(YmacrosYrevX,"macros","rev!");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(YprotoSmathYS,"proto/math","/");
EXT(YprotoScollectionsSsequenceYvals_to_str,"proto/collections/sequence","vals-to-str");
EXT(YastYinit_environment_for_eval,"ast","init-environment-for-eval");
EXT(YprotoScollectionsScollectionYany2Q,"proto/collections/collection","any2?");
EXT(Yhead_setter,"boot","head-setter");
EXT(Ytype_class,"boot","type-class");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(Ylst,"boot","lst");
EXT(Ytup,"boot","tup");
EXT(YastYlocals_bindings,"ast","locals-bindings");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YisaQ,"boot","isa?");
EXT(YLunionG,"boot","<union>");
EXT(YastYdo_named_static_global_bindings,"ast","do-named-static-global-bindings");
EXT(YastYcompile_time_program,"ast","compile-time-program");
EXT(YastYLpredefined_applicationG,"ast","<predefined-application>");
EXT(YastYinit_ast,"ast","init-ast");
EXT(YprotoSmathYcontagious_type,"proto/math","contagious-type");
EXT(YastYassignment_form,"ast","assignment-form");
EXT(YPprop,"boot","%prop");
EXT(YastYbinding_type_setter,"ast","binding-type-setter");
EXT(YprotoSmathYcos,"proto/math","cos");
EXT(YastYfunction_bindings,"ast","function-bindings");
EXT(YastYalternative_alternant,"ast","alternative-alternant");
EXT(YastYDgoo_boot_module_name,"ast","$goo-boot-module-name");
EXT(YprotoScollectionsStableYtab_hash,"proto/collections/table","tab-hash");
DEF(Yast_linearizeYLbox_creationG,"ast-linearize","<box-creation>");
EXT(YruntimeYfab_handler,"runtime","fab-handler");
EXT(YprotoScollectionsSbufferYpop_lastX,"proto/collections/buffer","pop-last!");
EXT(YPisa,"boot","%isa");
EXT(YprotoScollectionsStableYid_hash,"proto/collections/table","id-hash");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(YprotoScollectionsScollectionYfoldA,"proto/collections/collection","fold+");
EXT(YprotoScollectionsSbufferYpush_lastX,"proto/collections/buffer","push-last!");
EXT(Yhead,"boot","head");
EXT(YastYconstant_value,"ast","constant-value");
EXT(YastYfunction_debug_name,"ast","function-debug-name");
DEF(Yast_linearizeYassoc_value_setter,"ast-linearize","assoc-value-setter");
DEF(Yast_linearizeYLbox_readG,"ast-linearize","<box-read>");
EXT(YastYLpassive_programG,"ast","<passive-program>");
EXT(YastYfunction_body,"ast","function-body");
EXT(YastYbinding_info_setter,"ast","binding-info-setter");
EXT(YastYLruntime_assignmentG,"ast","<runtime-assignment>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_109);
DEFLIT(lit_22);
DEFLIT(lit_47);
DEFLIT(lit_43);
DEFLIT(lit_15);
DEFLIT(lit_89);
DEFLIT(lit_34);
DEFLIT(lit_19);
DEFLIT(lit_75);
DEFLIT(lit_33);
DEFLIT(lit_60);
DEFLIT(lit_107);
DEFLIT(lit_14);
DEFLIT(lit_91);
DEFLIT(lit_35);
DEFLIT(lit_53);
DEFLIT(lit_97);
DEFLIT(lit_27);
DEFLIT(lit_11);
DEFLIT(lit_88);
DEFLIT(lit_70);
DEFLIT(lit_3);
DEFLIT(lit_86);
DEFLIT(lit_73);
DEFLIT(lit_105);
DEFLIT(lit_80);
DEFLIT(lit_108);
DEFLIT(lit_96);
DEFLIT(lit_45);
DEFLIT(lit_5);
DEFLIT(lit_90);
DEFLIT(lit_106);
DEFLIT(lit_41);
DEFLIT(lit_40);
DEFLIT(lit_71);
DEFLIT(lit_28);
DEFLIT(lit_24);
DEFLIT(lit_100);
DEFLIT(lit_63);
DEFLIT(lit_84);
DEFLIT(lit_37);
DEFLIT(lit_58);
DEFLIT(lit_85);
DEFLIT(lit_116);
DEFLIT(lit_81);
DEFLIT(lit_120);
DEFLIT(lit_59);
DEFLIT(lit_51);
DEFLIT(lit_113);
DEFLIT(lit_94);
DEFLIT(lit_20);
DEFLIT(lit_32);
DEFLIT(lit_29);
DEFLIT(lit_21);
DEFLIT(lit_87);
DEFLIT(lit_49);
DEFLIT(lit_74);
DEFLIT(lit_56);
DEFLIT(lit_26);
DEFLIT(lit_112);
DEFLIT(lit_115);
DEFLIT(lit_52);
DEFLIT(lit_72);
DEFLIT(lit_6);
DEFLIT(lit_36);
DEFLIT(lit_99);
DEFLIT(lit_38);
DEFLIT(lit_92);
DEFLIT(lit_110);
DEFLIT(lit_68);
DEFLIT(lit_25);
DEFLIT(lit_114);
DEFLIT(lit_57);
DEFLIT(lit_44);
DEFLIT(lit_119);
DEFLIT(lit_4);
DEFLIT(lit_77);
DEFLIT(lit_1);
DEFLIT(lit_2);
DEFLIT(lit_79);
DEFLIT(lit_122);
DEFLIT(lit_12);
DEFLIT(lit_42);
DEFLIT(lit_93);
DEFLIT(lit_117);
DEFLIT(lit_8);
DEFLIT(lit_118);
DEFLIT(lit_39);
DEFLIT(lit_13);
DEFLIT(lit_121);
DEFLIT(lit_101);
DEFLIT(lit_78);
DEFLIT(lit_83);
DEFLIT(lit_95);
DEFLIT(lit_64);
DEFLIT(lit_66);
DEFLIT(lit_10);
DEFLIT(lit_62);
DEFLIT(lit_7);
DEFLIT(lit_30);
DEFLIT(lit_98);
DEFLIT(lit_46);
DEFLIT(lit_17);
DEFLIT(lit_48);
DEFLIT(lit_104);
DEFLIT(lit_55);
DEFLIT(lit_103);
DEFLIT(lit_16);
DEFLIT(lit_9);
DEFLIT(lit_111);
DEFLIT(lit_23);
DEFLIT(lit_61);
DEFLIT(lit_102);
DEFLIT(lit_54);
DEFLIT(lit_65);
DEFLIT(lit_31);
DEFLIT(lit_18);
DEFLIT(lit_67);
DEFLIT(lit_69);
DEFLIT(lit_50);
DEFLIT(lit_82);
DEFLIT(lit_0);
DEFLIT(lit_76);

/* FUNCTIONS: */

LOCFOR(fun_assoc_key_0);
LOCFOR(fun_assoc_key_setter_1);
LOCFOR(fun_assoc_value_2);
LOCFOR(fun_assoc_value_setter_3);
FUNFOR(Yast_linearizeYassoc);
LOCFOR(fun_assocq_5);
LOCFOR(fun_x_2445_6);
LOCFOR(fun_update_walkX_7);
LOCFOR(fun_x_2447_8);
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
extern P Yast_linearizeY___main_0___ ();
extern P Yast_linearizeY___main_1___ ();
extern P Yast_linearizeY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_assoc_key_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yast_linearizeYassoc_key));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yast_linearizeYassoc_key));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yast_linearizeYassoc_value));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yast_linearizeYassoc_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yast_linearizeYassoc) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(Yast_linearizeYLassocG),VARREF(Yast_linearizeYassoc_key),x_,VARREF(Yast_linearizeYassoc_value),y_);
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
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),l_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T5 = CALL1(1,VARREF(Yhead),l_);
    T4 = CALL1(1,VARREF(Yast_linearizeYassoc_key),T5);
    T3 = CALL2(1,VARREF(YmacrosYEE),x_,T4);
    if (T3 != YPfalse) {
      T6 = CALL1(1,VARREF(Yhead),l_);
      T2 = T6;
    } else {
      T8 = CALL1(1,VARREF(Ytail),l_);
      T7 = CALL2(1,VARREF(Yast_linearizeYassocq),x_,T8);
      T2 = T7;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2445_6) {
  P x_2444_;
  P xF6081;
  P setterF6080;
  P getterF6079;
  P propF6078;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_2444_, 0);
loop:
  T2 = CALL1(1,VARREF(YprotoScollectionsScollectionYfinQ),x_2444_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YprotoScollectionsScollectionYnow),x_2444_);
    propF6078 = T4;
    T6 = CALL1(1,VARREF(Yprop_getter),propF6078);
    getterF6079 = T6;
    T8 = CALL1(1,VARREF(Yprop_setter),propF6078);
    setterF6080 = T8;
    T10 = CALL2(1,VARREF(YmacrosYEE),getterF6079,VARREF(YastYbinding_value));
    T9 = CALL1(1,VARREF(Ynot),T10);
    if (T9 != YPfalse) {
      T12 = CALL2(1,VARREF(Yprop_boundQ),FREEREF(0),getterF6079);
      if (T12 != YPfalse) {
        T14 = CALL1(1,getterF6079,FREEREF(0));
        xF6081 = T14;
        T16 = CALL2(1,VARREF(YisaQ),xF6081,VARREF(YastYLprogramG));
        if (T16 != YPfalse) {
          T18 = CALLN(1,VARREF(YmacrosYnapp),4,FREEREF(1),YPfalse,xF6081,FREEREF(2));
          T17 = CALL2(1,setterF6080,T18,FREEREF(0));
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
    T20 = CALL1(1,VARREF(YprotoScollectionsScollectionYnxt),x_2444_);
    a1 = T20;
    x_2444_ = a1;
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
  P x_2445F6082;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
loop:
  T0 = FUNSHELL(1,fun_x_2445_6,4);
  x_2445F6082 = T0;
  FUNINIT(x_2445F6082, 4,o_,g_,args_,x_2445F6082);
  T3 = CALL1(1,VARREF(Yobject_props),o_);
  T2 = CALL1(1,VARREF(YprotoScollectionsScollectionYenum),T3);
  T1 = CALL1(0,x_2445F6082,T2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_x_2447_8) {
  P x_2446_;
  P xF6085;
  P getterF6084;
  P propF6083;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_2446_, 0);
loop:
  T2 = CALL1(1,VARREF(YprotoScollectionsScollectionYfinQ),x_2446_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YprotoScollectionsScollectionYnow),x_2446_);
    propF6083 = T4;
    T6 = CALL1(1,VARREF(Yprop_getter),propF6083);
    getterF6084 = T6;
    T8 = CALL2(1,VARREF(YmacrosYEE),getterF6084,VARREF(YastYbinding_value));
    T7 = CALL1(1,VARREF(Ynot),T8);
    if (T7 != YPfalse) {
      T10 = CALL2(1,VARREF(Yprop_boundQ),FREEREF(0),getterF6084);
      if (T10 != YPfalse) {
        T12 = CALL1(1,getterF6084,FREEREF(0));
        xF6085 = T12;
        T14 = CALL2(1,VARREF(YisaQ),xF6085,VARREF(YastYLprogramG));
        if (T14 != YPfalse) {
          T15 = CALLN(1,VARREF(YmacrosYnapp),4,FREEREF(1),YPfalse,xF6085,FREEREF(2));
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
    T17 = CALL1(1,VARREF(YprotoScollectionsScollectionYnxt),x_2446_);
    a1 = T17;
    x_2446_ = a1;
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
  P x_2447F6086;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
loop:
  T0 = FUNSHELL(1,fun_x_2447_8,4);
  x_2447F6086 = T0;
  FUNINIT(x_2447F6086, 4,o_,g_,args_,x_2447F6086);
  T3 = CALL1(1,VARREF(Yobject_props),o_);
  T2 = CALL1(1,VARREF(YprotoScollectionsScollectionYenum),T3);
  T1 = CALL1(0,x_2447F6086,T2);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yast_linearizeYbox_reference));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yast_linearizeYbox_reference));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yast_linearizeYbox_reference));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yast_linearizeYbox_reference));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yast_linearizeYbox_form));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yast_linearizeYbox_form));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yast_linearizeYbox_reference));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yast_linearizeYbox_reference));
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
  T0 = CALL2(1,VARREF(Yast_linearizeYupdate_walkX),VARREF(Yast_linearizeYinsert_boxX),o_);
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
  T2 = CALL1(1,VARREF(YastYreference_binding),o_);
  T1 = CALL1(1,VARREF(YastYbinding_mutableQ),T2);
  if (T1 != YPfalse) {
    T3 = CALL3(1,VARREF(Ynew),VARREF(Yast_linearizeYLbox_readG),VARREF(Yast_linearizeYbox_reference),o_);
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
  T1 = CALL1(1,VARREF(YastYassignment_reference),o_);
  T3 = CALL1(1,VARREF(YastYassignment_form),o_);
  T2 = CALL1(1,VARREF(Yast_linearizeYinsert_boxX),T3);
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(Yast_linearizeYLbox_writeG),VARREF(Yast_linearizeYbox_reference),T1,VARREF(Yast_linearizeYbox_form),T2);
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
  T2 = CALL1(1,VARREF(YastYfunction_body),o_);
  T3 = CALL1(1,VARREF(YastYfunction_bindings),o_);
  T1 = CALL2(1,VARREF(Yast_linearizeYboxify_mutable_bindings),T2,T3);
  T0 = CALL1(1,VARREF(Yast_linearizeYinsert_boxX),T1);
  CALL2(1,VARREF(YastYfunction_body_setter),T0,o_);
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
  T1 = CALL1(1,VARREF(YastYfix_let_arguments),o_);
  T0 = CALL1(1,VARREF(Yast_linearizeYinsert_boxX),T1);
  CALL2(1,VARREF(YastYfix_let_arguments_setter),T0,o_);
  T4 = CALL1(1,VARREF(YastYfix_let_body),o_);
  T5 = CALL1(1,VARREF(YastYfix_let_bindings),o_);
  T3 = CALL2(1,VARREF(Yast_linearizeYboxify_mutable_bindings),T4,T5);
  T2 = CALL1(1,VARREF(Yast_linearizeYinsert_boxX),T3);
  CALL2(1,VARREF(YastYfix_let_body_setter),T2,o_);
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
  T1 = CALL1(1,VARREF(YastYlocals_functions),o_);
  T0 = CALL2(1,VARREF(YmacrosYmap),VARREF(Yast_linearizeYinsert_boxX),T1);
  CALL2(1,VARREF(YastYlocals_functions_setter),T0,o_);
  T4 = CALL1(1,VARREF(YastYlocals_body),o_);
  T5 = CALL1(1,VARREF(YastYlocals_bindings),o_);
  T3 = CALL2(1,VARREF(Yast_linearizeYboxify_mutable_bindings),T4,T5);
  T2 = CALL1(1,VARREF(Yast_linearizeYinsert_boxX),T3);
  CALL2(1,VARREF(YastYlocals_body_setter),T2,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_loop_24) {
  P res_,bindings_;
  P creatorF6088;
  P bindingF6087;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(bindings_, 1);
loop:
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),bindings_);
  if (T1 != YPfalse) {
    T3 = CALL2(1,VARREF(YmacrosYpair),FREEREF(0),res_);
    T2 = CALL1(1,VARREF(YmacrosYrevX),T3);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yhead),bindings_);
    bindingF6087 = T5;
    T7 = CALL1(1,VARREF(YastYbinding_mutableQ),bindingF6087);
    if (T7 != YPfalse) {
      T10 = CALL3(1,VARREF(Ynew),VARREF(YastYLlocal_referenceG),VARREF(YastYreference_binding),bindingF6087);
      T9 = CALL3(1,VARREF(Ynew),VARREF(Yast_linearizeYLbox_creationG),VARREF(Yast_linearizeYbox_reference),T10);
      creatorF6088 = T9;
      T12 = CALL2(1,VARREF(YmacrosYpair),creatorF6088,res_);
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
  P loopF6089;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(form_, 0);
  ARG(bindings_, 1);
loop:
  T2 = FUNSHELL(1,fun_loop_24,2);
  loopF6089 = T2;
  FUNINIT(loopF6089, 2,form_,loopF6089);
  T3 = CALL2(0,loopF6089,Ynil,bindings_);
  T1 = T3;
  T0 = CALL1(1,VARREF(YastYsequentialize),T1);
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
  T0 = CALL2(1,VARREF(Yast_linearizeYupdate_walkX),VARREF(Yast_linearizeYdo_call_referencesX),o_);
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
  T0 = CALL1(1,VARREF(Yast_linearizeYdo_do_call_referencesX),o_);
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
  CALL1(1,VARREF(Yast_linearizeYdo_do_call_referencesX),o_);
  T1 = CALL1(1,VARREF(YastYapplication_function),o_);
  T0 = CALL2(1,VARREF(YisaQ),T1,VARREF(YastYLlocal_referenceG));
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(YastYapplication_function),o_);
    T2 = CALL2(1,VARREF(YastYreference_called_functionQ_setter),YPtrue,T3);
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
  T0 = CALL1(1,VARREF(Yast_linearizeYdo_call_referencesX),o_);
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
  T0 = CALL2(1,VARREF(Yast_linearizeYupdate_walkX),VARREF(Yast_linearizeYdo_dynamic_extentX),o_);
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
  T0 = CALL1(1,VARREF(Yast_linearizeYdo_do_dynamic_extentX),o_);
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
  CALL1(1,VARREF(Yast_linearizeYdo_do_dynamic_extentX),o_);
  T1 = CALL1(1,VARREF(YastYreference_called_functionQ),o_);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(YastYreference_binding),o_);
    T2 = CALL2(1,VARREF(YastYbinding_dynamic_extentQ_setter),YPfalse,T3);
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
  CALL1(1,VARREF(Yast_linearizeYanalyze_call_references),o_);
  T0 = CALL1(1,VARREF(Yast_linearizeYdo_dynamic_extentX),o_);
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
  T0 = CALL2(1,VARREF(Yast_linearizeYupdate_walkX),VARREF(Yast_linearizeYdo_call_upgradesX),o_);
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
  T0 = CALL1(1,VARREF(Yast_linearizeYdo_do_call_upgradesX),o_);
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
  P tmpF6090;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T2 = CALL1(1,VARREF(YastYbinding_module_name),b_);
  T1 = CALL2(1,VARREF(YmacrosYEE),T2,LITREF(lit_44));
  tmpF6090 = T1;
  if (tmpF6090 != YPfalse) {
    T5 = CALL1(1,VARREF(YastYbinding_name),b_);
    T4 = CALL2(1,VARREF(YmacrosYEE),T5,LITREF(lit_45));
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
  T1 = CALL1(1,VARREF(YastYreference_binding),o_);
  T0 = CALL1(1,VARREF(Yast_linearizeYunconstrained_typeQ),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_do_call_upgradesX_39) {
  P o_;
  P tmpF6095;
  P tmpF6094;
  P tmpF6093;
  P tmpF6092;
  P metF6091;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  CALL1(1,VARREF(Yast_linearizeYdo_do_call_upgradesX),o_);
  T1 = CALL1(1,VARREF(YastYapplication_function),o_);
  T0 = CALL2(1,VARREF(YisaQ),T1,VARREF(YastYLlocal_referenceG));
  if (T0 != YPfalse) {
    T5 = CALL1(1,VARREF(YastYapplication_function),o_);
    T4 = CALL1(1,VARREF(YastYreference_binding),T5);
    T3 = CALL1(1,VARREF(YastYbinding_value),T4);
    metF6091 = T3;
    T8 = CALL2(1,VARREF(YisaQ),metF6091,VARREF(YastYLast_functionG));
    tmpF6092 = T8;
    if (tmpF6092 != YPfalse) {
      T12 = CALL2(1,VARREF(YruntimeYcompose),VARREF(Yast_linearizeYunconstrained_typeQ),VARREF(YastYbinding_type));
      T13 = CALL1(1,VARREF(YastYfunction_bindings),metF6091);
      T11 = CALL2(1,VARREF(YprotoScollectionsScollectionYallQ),T12,T13);
      tmpF6093 = T11;
      if (tmpF6093 != YPfalse) {
        T17 = CALL1(1,VARREF(YastYfunction_value),metF6091);
        T16 = CALL1(1,VARREF(Yast_linearizeYunconstrained_typeQ),T17);
        tmpF6094 = T16;
        if (tmpF6094 != YPfalse) {
          T21 = CALL1(1,VARREF(YastYfunction_naryQ),metF6091);
          T20 = CALL1(1,VARREF(Ynot),T21);
          tmpF6095 = T20;
          if (tmpF6095 != YPfalse) {
            T25 = CALL1(1,VARREF(YastYapplication_arguments),o_);
            T24 = CALL1(1,VARREF(YprotoStypesYlen),T25);
            T27 = CALL1(1,VARREF(YastYfunction_bindings),metF6091);
            T26 = CALL1(1,VARREF(YprotoStypesYlen),T27);
            T23 = CALL2(1,VARREF(YprotoSmathYE),T24,T26);
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
      T28 = CALL2(1,VARREF(YastYapplication_knownQ_setter),YPtrue,o_);
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
  T0 = CALL1(1,VARREF(Yast_linearizeYdo_call_upgradesX),o_);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yast_linearizeYreference_offset));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yast_linearizeYreference_offset));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yast_linearizeYreference_selfQ));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yast_linearizeYreference_selfQ));
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
  T0 = CALL3(1,VARREF(Yast_linearizeYlift_proceduresX),o_,YPfalse,Ynil);
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
  T0 = CALLN(1,VARREF(Yast_linearizeYupdate_walkX),4,VARREF(Yast_linearizeYlift_proceduresX),o_,flat_fun_,bindings_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_47) {
  P o_,flat_fun_,bindings_;
  P offsetF6097;
  P bF6096;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,VARREF(YastYreference_binding),o_);
  bF6096 = T1;
  T3 = CALL2(1,VARREF(YprotoScollectionsScollectionYmemQ),bindings_,bF6096);
  if (T3 != YPfalse) {
    T2 = o_;
  } else {
    T5 = CALL2(1,VARREF(Yast_linearizeYadjoin_free_bindingX),flat_fun_,o_);
    offsetF6097 = T5;
    T8 = CALL1(1,VARREF(YastYreference_binding),o_);
    T9 = CALL1(1,VARREF(YastYfunction_binding),flat_fun_);
    T7 = CALL2(1,VARREF(YmacrosYEE),T8,T9);
    T6 = CALLN(1,VARREF(Ynew),7,VARREF(Yast_linearizeYLfree_referenceG),VARREF(YastYreference_binding),bF6096,VARREF(Yast_linearizeYreference_offset),offsetF6097,VARREF(Yast_linearizeYreference_selfQ),T7);
    T4 = T6;
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_add_48) {
  P freeT_;
  P tailF6098;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(freeT_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),freeT_);
  tailF6098 = T1;
  T3 = CALL1(1,VARREF(YmacrosYemptyQ),tailF6098);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Ytail_setter),FREEREF(0),freeT_);
    T2 = T4;
  } else {
    a1 = tailF6098;
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
  P addF6100;
  P new_envF6099;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(freeT_, 1);
loop:
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),freeT_);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YprotoScollectionsScollectionYempty),VARREF(YastYLfree_environmentG));
    T3 = CALL2(1,VARREF(YastYfree_environment),FREEREF(0),T4);
    new_envF6099 = T3;
    T6 = CALL1(1,VARREF(YastYfunction_free),FREEREF(1));
    T5 = CALL1(1,VARREF(YmacrosYemptyQ),T6);
    if (T5 != YPfalse) {
      T7 = CALL2(1,VARREF(YastYfunction_free_setter),new_envF6099,FREEREF(1));
    } else {
      T9 = FUNSHELL(1,fun_add_48,2);
      addF6100 = T9;
      FUNINIT(addF6100, 2,new_envF6099,addF6100);
      T11 = CALL1(1,VARREF(YastYfunction_free),FREEREF(1));
      T10 = CALL1(0,addF6100,T11);
      T8 = T10;
    }
    T2 = i_;
    T0 = T2;
  } else {
    T14 = CALL1(1,VARREF(YastYreference_binding),FREEREF(0));
    T16 = CALL1(1,VARREF(Yhead),freeT_);
    T15 = CALL1(1,VARREF(YastYreference_binding),T16);
    T13 = CALL2(1,VARREF(YmacrosYEE),T14,T15);
    if (T13 != YPfalse) {
      T12 = i_;
    } else {
      T18 = CALL2(1,VARREF(YprotoSmathYA),i_,YPint((P)1));
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
  P checkF6101;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(flat_fun_, 0);
  ARG(ref_, 1);
loop:
  T1 = FUNSHELL(1,fun_check_49,3);
  checkF6101 = T1;
  FUNINIT(checkF6101, 3,ref_,flat_fun_,checkF6101);
  T3 = CALL1(1,VARREF(YastYfunction_free),flat_fun_);
  T2 = CALL2(1,checkF6101,YPint((P)0),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_51) {
  P o_,flat_fun_,bindings_;
  P new_bindingsF6102;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,VARREF(YastYfix_let_arguments),o_);
  T0 = CALL3(1,VARREF(Yast_linearizeYlift_proceduresX),T1,flat_fun_,bindings_);
  CALL2(1,VARREF(YastYfix_let_arguments_setter),T0,o_);
  T4 = CALL1(1,VARREF(YastYfix_let_bindings),o_);
  T3 = CALL2(1,VARREF(YmacrosYcat),T4,bindings_);
  new_bindingsF6102 = T3;
  T6 = CALL1(1,VARREF(YastYfix_let_body),o_);
  T5 = CALL3(1,VARREF(Yast_linearizeYlift_proceduresX),T6,flat_fun_,new_bindingsF6102);
  CALL2(1,VARREF(YastYfix_let_body_setter),T5,o_);
  T2 = o_;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_lift_proceduresX_52) {
  P o_,flat_fun_,bindings_;
  P new_bindingsF6103;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T2 = CALL1(1,VARREF(YastYlocals_bindings),o_);
  T1 = CALL2(1,VARREF(YmacrosYcat),T2,bindings_);
  new_bindingsF6103 = T1;
  T4 = CALL3(1,VARREF(YruntimeYrcurry),VARREF(Yast_linearizeYlift_proceduresX),flat_fun_,new_bindingsF6103);
  T5 = CALL1(1,VARREF(YastYlocals_functions),o_);
  T3 = CALL2(1,VARREF(YmacrosYmap),T4,T5);
  CALL2(1,VARREF(YastYlocals_functions_setter),T3,o_);
  T7 = CALL1(1,VARREF(YastYlocals_body),o_);
  T6 = CALL3(1,VARREF(Yast_linearizeYlift_proceduresX),T7,flat_fun_,new_bindingsF6103);
  CALL2(1,VARREF(YastYlocals_body_setter),T6,o_);
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
  T1 = CALL1(1,VARREF(YastYfunction_body),o_);
  T2 = CALL1(1,VARREF(YastYfunction_bindings),o_);
  T0 = CALL3(1,VARREF(Yast_linearizeYlift_proceduresX),T1,YPfalse,T2);
  CALL2(1,VARREF(YastYfunction_body_setter),T0,o_);
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
  T1 = CALL1(1,VARREF(YastYfunction_body),o_);
  T2 = CALL1(1,VARREF(YastYfunction_bindings),o_);
  T0 = CALL3(1,VARREF(Yast_linearizeYlift_proceduresX),T1,o_,T2);
  CALL2(1,VARREF(YastYfunction_body_setter),T0,o_);
  T4 = CALL1(1,VARREF(YastYfunction_free),o_);
  T3 = CALL3(1,VARREF(Yast_linearizeYlift_proceduresX),T4,flat_fun_,bindings_);
  CALL2(1,VARREF(YastYfunction_free_setter),T3,o_);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yast_linearizeYprogram_form));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yast_linearizeYprogram_form));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yast_linearizeYprogram_quotations));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yast_linearizeYprogram_quotations));
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
  T0 = CALL2(1,VARREF(YprotoScollectionsScollectionYfab),VARREF(YprotoScollectionsScollectionYLtabG),YPint((P)40));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yast_linearizeYprogram_definitions));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yast_linearizeYprogram_definitions));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yast_linearizeYform_program));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yast_linearizeYform_program));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yast_linearizeYform_quotations));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yast_linearizeYform_quotations));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yast_linearizeYform_definitions));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yast_linearizeYform_definitions));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yast_linearizeYclosure_creation_index));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yast_linearizeYclosure_creation_index));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yast_linearizeYclosure_creation_free));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yast_linearizeYclosure_creation_free));
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
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),ss_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Ytail),FREEREF(1));
    T2 = CALL2(0,FREEREF(0),T3,r_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Ytail),ss_);
    T7 = CALL1(1,VARREF(Yhead),ss_);
    T6 = CALL2(1,VARREF(YmacrosYpair),T7,r_);
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
  P innerF6104;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),s_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YmacrosYrevX),r_);
    T0 = T2;
  } else {
    T4 = FUNSHELL(1,fun_inner_77,3);
    innerF6104 = T4;
    FUNINIT(innerF6104, 3,FREEREF(0),s_,innerF6104);
    T7 = CALL1(1,VARREF(Yhead),s_);
    T6 = CALL1(1,VARREF(Yast_linearizeYflatten_seqs),T7);
    T5 = CALL2(0,innerF6104,T6,r_);
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_flatten_seqs_79) {
  P o_;
  P loopF6105;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_78,1);
  loopF6105 = T1;
  FUNINIT(loopF6105, 1,loopF6105);
  T2 = CALL2(0,loopF6105,o_,Ynil);
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
  T0 = CALL3(1,VARREF(Ynew),VARREF(Yast_linearizeYLtop_level_formG),VARREF(Yast_linearizeYform_program),x_);
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
  T0 = CALL2(1,VARREF(YmacrosYmap),T1,programs_);
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
  T0 = CALL3(1,VARREF(Yast_linearizeYextractX),form_,form_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extract_thingsX_83) {
  P o_;
  P resultF6107;
  P formsF6106;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T2 = CALL1(1,VARREF(Yast_linearizeYflatten_seqs),o_);
  T1 = CALL1(1,VARREF(Yast_linearizeYas_top_level_forms),T2);
  formsF6106 = T1;
  T4 = CALL1(1,VARREF(Ynew),VARREF(Yast_linearizeYLflattened_programG));
  resultF6107 = T4;
  T7 = FUNFAB(fun_82,1,resultF6107);
  T6 = CALL2(1,VARREF(YmacrosYmap),T7,formsF6106);
  T5 = CALL1(1,VARREF(YastYsequentialize),T6);
  CALL2(1,VARREF(Yast_linearizeYprogram_form_setter),T5,resultF6107);
  T3 = resultF6107;
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
  T0 = CALLN(1,VARREF(Yast_linearizeYupdate_walkX),4,VARREF(Yast_linearizeYextractX),o_,form_,result_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_85) {
  P o_,form_,result_;
  P x_2448F6117;
  P qbF6116;
  P probeF6115;
  P indexF6114;
  P qbTF6113;
  P tmpF6112;
  P tmpF6111;
  P tmpF6110;
  P tmpF6109;
  P valueF6108;
  P T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T1 = CALL1(1,VARREF(YastYconstant_value),o_);
  valueF6108 = T1;
  T4 = CALL2(1,VARREF(YmacrosYEE),valueF6108,YPfalse);
  tmpF6109 = T4;
  if (tmpF6109 != YPfalse) {
    T5 = tmpF6109;
  } else {
    T7 = CALL2(1,VARREF(YmacrosYEE),valueF6108,YPtrue);
    tmpF6110 = T7;
    if (tmpF6110 != YPfalse) {
      T8 = tmpF6110;
    } else {
      T10 = CALL2(1,VARREF(YmacrosYEE),valueF6108,Ynil);
      tmpF6111 = T10;
      if (tmpF6111 != YPfalse) {
        T11 = tmpF6111;
      } else {
        T13 = CALL2(1,VARREF(YisaQ),valueF6108,VARREF(YLintG));
        tmpF6112 = T13;
        if (tmpF6112 != YPfalse) {
          T14 = tmpF6112;
        } else {
          T15 = CALL2(1,VARREF(YisaQ),valueF6108,VARREF(YLchrG));
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
    T17 = CALL1(1,VARREF(Yast_linearizeYprogram_quotations),result_);
    qbTF6113 = T17;
    T19 = CALL1(1,VARREF(YprotoStypesYlen),qbTF6113);
    indexF6114 = T19;
    T21 = CALL3(1,VARREF(YprotoScollectionsScollectionYelt_or),qbTF6113,valueF6108,YPfalse);
    probeF6115 = T21;
    if (probeF6115 != YPfalse) {
      T23 = CALL3(1,VARREF(Ynew),VARREF(YastYLglobal_referenceG),VARREF(YastYreference_binding),probeF6115);
      T22 = T23;
    } else {
      T25 = CALLN(1,VARREF(Ynew),7,VARREF(YastYLmodule_bindingG),VARREF(YastYbinding_kind),LITREF(lit_90),VARREF(YastYbinding_name),indexF6114,VARREF(YastYbinding_info),valueF6108);
      qbF6116 = T25;
      CALL3(1,VARREF(YprotoScollectionsScollectionYelt_setter),qbF6116,qbTF6113,valueF6108);
      x_2448F6117 = form_;
      T28 = CALL1(1,VARREF(Yast_linearizeYform_quotations),x_2448F6117);
      T27 = CALL2(1,VARREF(YprotoScollectionsSlistYpush),T28,qbF6116);
      T26 = CALL2(1,VARREF(Yast_linearizeYform_quotations_setter),T27,x_2448F6117);
      T29 = CALL3(1,VARREF(Ynew),VARREF(YastYLglobal_referenceG),VARREF(YastYreference_binding),qbF6116);
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
  T2 = CALL1(1,VARREF(YastYbinding_type),binding_);
  T1 = CALL3(1,VARREF(Yast_linearizeYextractX),T2,FREEREF(0),FREEREF(1));
  T0 = CALL2(1,VARREF(YastYbinding_type_setter),T1,binding_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_88) {
  P o_,form_,result_;
  P indexF6120;
  P free_bindingsF6119;
  P freeF6118;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T1 = CALL1(1,VARREF(YastYfunction_debug_name),o_);
  T0 = CALL3(1,VARREF(Yast_linearizeYextractX),T1,form_,result_);
  CALL2(1,VARREF(YastYfunction_debug_name_setter),T0,o_);
  T3 = CALL1(1,VARREF(YastYfunction_signature),o_);
  T2 = CALL3(1,VARREF(Yast_linearizeYextractX),T3,form_,result_);
  CALL2(1,VARREF(YastYfunction_signature_setter),T2,o_);
  T5 = CALL1(1,VARREF(YastYfunction_body),o_);
  T4 = CALL3(1,VARREF(Yast_linearizeYextractX),T5,form_,result_);
  CALL2(1,VARREF(YastYfunction_body_setter),T4,o_);
  T6 = FUNFAB(fun_87,2,form_,result_);
  T7 = CALL1(1,VARREF(YastYfunction_bindings),o_);
  CALL2(1,VARREF(YmacrosYdo),T6,T7);
  T9 = CALL1(1,VARREF(YastYfunction_free),o_);
  freeF6118 = T9;
  T11 = CALL2(1,VARREF(YmacrosYmap),VARREF(YastYreference_binding),freeF6118);
  free_bindingsF6119 = T11;
  T13 = CALL3(1,VARREF(Yast_linearizeYadjoin_definitionX),form_,result_,o_);
  indexF6120 = T13;
  CALL2(1,VARREF(YastYfunction_index_setter),indexF6120,o_);
  CALL2(1,VARREF(YastYfunction_free_setter),free_bindingsF6119,o_);
  T14 = CALLN(1,VARREF(Ynew),5,VARREF(Yast_linearizeYLclosure_creationG),VARREF(Yast_linearizeYclosure_creation_index),indexF6120,VARREF(Yast_linearizeYclosure_creation_free),freeF6118);
  T12 = T14;
  T10 = T12;
  T8 = T10;
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_extractX_89) {
  P o_,form_,result_;
  P x_2449F6122;
  P primF6121;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T1 = CALL1(1,VARREF(YastYassignment_form),o_);
  primF6121 = T1;
  T3 = CALL1(1,VARREF(YastYfunction_body),primF6121);
  T2 = CALL3(1,VARREF(Yast_linearizeYextractX),T3,form_,result_);
  CALL2(1,VARREF(YastYfunction_body_setter),T2,primF6121);
  x_2449F6122 = result_;
  T6 = CALL1(1,VARREF(Yast_linearizeYprogram_definitions),x_2449F6122);
  T5 = CALL2(1,VARREF(YprotoScollectionsSlistYpush),T6,primF6121);
  T4 = CALL2(1,VARREF(Yast_linearizeYprogram_definitions_setter),T5,x_2449F6122);
  T8 = CALL3(1,VARREF(Ynew),VARREF(YastYLconstantG),VARREF(YastYconstant_value),YPfalse);
  T7 = CALL3(1,VARREF(Yast_linearizeYextractX),T8,form_,result_);
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_definitionX_90) {
  P form_,result_,x_;
  P x_2451F6125;
  P x_2450F6124;
  P new_indexF6123;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(form_, 0);
  ARG(result_, 1);
  ARG(x_, 2);
loop:
  T2 = CALL1(1,VARREF(Yast_linearizeYprogram_definitions),result_);
  T1 = CALL1(1,VARREF(YprotoStypesYlen),T2);
  new_indexF6123 = T1;
  x_2450F6124 = result_;
  T5 = CALL1(1,VARREF(Yast_linearizeYprogram_definitions),x_2450F6124);
  T4 = CALL2(1,VARREF(YprotoScollectionsSlistYpush),T5,x_);
  T3 = CALL2(1,VARREF(Yast_linearizeYprogram_definitions_setter),T4,x_2450F6124);
  x_2451F6125 = form_;
  T8 = CALL1(1,VARREF(Yast_linearizeYform_definitions),x_2451F6125);
  T7 = CALL2(1,VARREF(YprotoScollectionsSlistYpush),T8,x_);
  T6 = CALL2(1,VARREF(Yast_linearizeYform_definitions_setter),T7,x_2451F6125);
  T0 = new_indexF6123;
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
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),es_);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YmacrosYrevX),res_);
    T4 = CALL1(1,VARREF(YastYsequentialize),T5);
    T3 = CALL2(1,VARREF(YmacrosYpair),T4,FREEREF(0));
    T2 = CALL1(1,VARREF(YmacrosYrevX),T3);
    T0 = T2;
  } else {
    T7 = CALL2(1,VARREF(YprotoSmathYE),count_,FREEREF(1));
    if (T7 != YPfalse) {
      T11 = CALL1(1,VARREF(YmacrosYrevX),res_);
      T10 = CALL1(1,VARREF(YastYsequentialize),T11);
      T9 = CALL2(1,VARREF(YmacrosYpair),T10,FREEREF(0));
      T8 = CALL2(0,FREEREF(2),T9,es_);
      T6 = T8;
    } else {
      if (YPtrue != YPfalse) {
        T15 = CALL1(1,VARREF(Yhead),es_);
        T14 = CALL2(1,VARREF(YmacrosYpair),T15,res_);
        T16 = CALL1(1,VARREF(Ytail),es_);
        T17 = CALL2(1,VARREF(YprotoSmathYA),count_,YPint((P)1));
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
  P innerF6126;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(forms_, 0);
  ARG(s_, 1);
loop:
  T1 = FUNSHELL(1,fun_inner_92,4);
  innerF6126 = T1;
  FUNINIT(innerF6126, 4,forms_,FREEREF(0),FREEREF(1),innerF6126);
  T2 = CALL3(0,innerF6126,Ynil,s_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_split_program_94) {
  P o_,max_count_;
  P loopF6127;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(max_count_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_93,2);
  loopF6127 = T1;
  FUNINIT(loopF6127, 2,max_count_,loopF6127);
  T2 = CALL2(0,loopF6127,Ynil,o_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_95) {
  P calls_,defns_,i_,forms_;
  P callF6131;
  P defnF6130;
  P bindingF6129;
  P nameF6128;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(calls_, 0);
  ARG(defns_, 1);
  ARG(i_, 2);
  ARG(forms_, 3);
loop:
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),forms_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YmacrosYrevX),defns_);
    CALL2(1,VARREF(Yast_linearizeYprogram_definitions_setter),T2,FREEREF(0));
    T5 = CALL1(1,VARREF(YmacrosYrevX),calls_);
    T4 = CALL1(1,VARREF(YastYsequentialize),T5);
    T6 = CALL1(1,VARREF(YmacrosYrevX),defns_);
    T3 = CALLN(1,VARREF(Ynew),5,VARREF(Yast_linearizeYLtop_level_formG),VARREF(Yast_linearizeYform_program),T4,VARREF(Yast_linearizeYform_definitions),T6);
    CALL2(1,VARREF(Yast_linearizeYprogram_form_setter),T3,FREEREF(0));
    T0 = FREEREF(0);
  } else {
    T8 = CALL3(1,VARREF(YmacrosYcat_sym),LITREF(lit_101),i_,LITREF(lit_102));
    nameF6128 = T8;
    T10 = CALLN(1,VARREF(YastYast_define_binding),4,FREEREF(1),nameF6128,YPfalse,LITREF(lit_103));
    bindingF6129 = T10;
    T13 = CALL2(1,VARREF(YastYobjectify_quotation),nameF6128,YPint((P)4));
    T14 = CALL2(1,VARREF(YastYobjectify_signature),Ynil,FREEREF(1));
    T15 = CALL1(1,VARREF(Yhead),forms_);
    T12 = CALLN(1,VARREF(Ynew),9,VARREF(YastYLast_primitiveG),VARREF(YastYfunction_binding),bindingF6129,VARREF(YastYfunction_debug_name),T13,VARREF(YastYfunction_signature),T14,VARREF(YastYfunction_body),T15);
    defnF6130 = T12;
    T18 = CALL1(1,VARREF(YprotoScollectionsScollectionYempty),VARREF(YastYLargumentsG));
    T17 = CALLN(1,VARREF(Ynew),7,VARREF(YastYLpredefined_applicationG),VARREF(YastYapplication_binding),bindingF6129,VARREF(YastYapplication_arguments),T18,VARREF(YastYapplication_tailQ),YPfalse);
    callF6131 = T17;
    T20 = CALL2(1,VARREF(YmacrosYpair),callF6131,calls_);
    T21 = CALL2(1,VARREF(YmacrosYpair),defnF6130,defns_);
    T22 = CALL2(1,VARREF(YprotoSmathYA),i_,YPint((P)1));
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
  P loopF6134;
  P base_indexF6133;
  P formsF6132;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(max_count_, 2);
loop:
  T2 = CALL1(1,VARREF(Yast_linearizeYprogram_form),o_);
  T1 = CALL2(1,VARREF(Yast_linearizeYsplit_program),T2,max_count_);
  formsF6132 = T1;
  T5 = CALL1(1,VARREF(Yast_linearizeYprogram_definitions),o_);
  T4 = CALL1(1,VARREF(YprotoStypesYlen),T5);
  base_indexF6133 = T4;
  T7 = FUNSHELL(1,fun_loop_95,3);
  loopF6134 = T7;
  FUNINIT(loopF6134, 3,o_,r_,loopF6134);
  T9 = CALL1(1,VARREF(Yast_linearizeYprogram_definitions),o_);
  T8 = CALLN(0,loopF6134,4,Ynil,T9,YPint((P)0),formsF6132);
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
  T0 = CALL3(1,VARREF(Yast_linearizeYcollect_temporariesX),def_,def_,Ynil);
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
  T2 = CALL1(1,VARREF(Yast_linearizeYprogram_definitions),o_);
  T0 = CALL2(1,VARREF(YmacrosYmap),T1,T2);
  CALL2(1,VARREF(Yast_linearizeYprogram_definitions_setter),T0,o_);
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
  T0 = CALLN(1,VARREF(Yast_linearizeYupdate_walkX),4,VARREF(Yast_linearizeYcollect_temporariesX),o_,flat_fun_,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_temporariesX_100) {
  P o_,flat_fun_,r_;
  P bF6136;
  P bindingF6135;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(YastYreference_binding),o_);
  bindingF6135 = T1;
  T3 = CALL2(1,VARREF(Yast_linearizeYassocq),bindingF6135,r_);
  bF6136 = T3;
  if (bF6136 != YPfalse) {
    T6 = CALL1(1,VARREF(Yast_linearizeYassoc_value),bF6136);
    T5 = CALL3(1,VARREF(Ynew),VARREF(YastYLlocal_referenceG),VARREF(YastYreference_binding),T6);
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
  P new_rF6138;
  P new_bindingsF6137;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(YastYfix_let_arguments),o_);
  T0 = CALL3(1,VARREF(Yast_linearizeYcollect_temporariesX),T1,flat_fun_,r_);
  CALL2(1,VARREF(YastYfix_let_arguments_setter),T0,o_);
  T4 = CALL1(1,VARREF(YastYfix_let_bindings),o_);
  T3 = CALL2(1,VARREF(YmacrosYmap),VARREF(Yast_linearizeYnew_renamed_binding),T4);
  new_bindingsF6137 = T3;
  T8 = CALL1(1,VARREF(YastYfix_let_bindings),o_);
  T7 = CALL3(1,VARREF(YprotoScollectionsScollectionYmap2),VARREF(Yast_linearizeYassoc),T8,new_bindingsF6137);
  T6 = CALL2(1,VARREF(YmacrosYcat),T7,r_);
  new_rF6138 = T6;
  CALL2(1,VARREF(Yast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF6137);
  CALL2(1,VARREF(YastYfix_let_bindings_setter),new_bindingsF6137,o_);
  T10 = CALL1(1,VARREF(YastYfix_let_body),o_);
  T9 = CALL3(1,VARREF(Yast_linearizeYcollect_temporariesX),T10,flat_fun_,new_rF6138);
  CALL2(1,VARREF(YastYfix_let_body_setter),T9,o_);
  T5 = o_;
  T2 = T5;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_collect_temporariesX_102) {
  P o_,flat_fun_,r_;
  P new_rF6140;
  P new_bindingsF6139;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T2 = CALL1(1,VARREF(YastYlocals_bindings),o_);
  T1 = CALL2(1,VARREF(YmacrosYmap),VARREF(Yast_linearizeYnew_renamed_binding),T2);
  new_bindingsF6139 = T1;
  T6 = CALL1(1,VARREF(YastYlocals_bindings),o_);
  T5 = CALL3(1,VARREF(YprotoScollectionsScollectionYmap2),VARREF(Yast_linearizeYassoc),T6,new_bindingsF6139);
  T4 = CALL2(1,VARREF(YmacrosYcat),T5,r_);
  new_rF6140 = T4;
  T8 = CALL3(1,VARREF(YruntimeYrcurry),VARREF(Yast_linearizeYcollect_temporariesX),flat_fun_,new_rF6140);
  T9 = CALL1(1,VARREF(YastYlocals_functions),o_);
  T7 = CALL2(1,VARREF(YmacrosYmap),T8,T9);
  CALL2(1,VARREF(YastYlocals_functions_setter),T7,o_);
  CALL2(1,VARREF(Yast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF6139);
  CALL2(1,VARREF(YastYlocals_bindings_setter),new_bindingsF6139,o_);
  T11 = CALL1(1,VARREF(YastYlocals_body),o_);
  T10 = CALL3(1,VARREF(Yast_linearizeYcollect_temporariesX),T11,flat_fun_,new_rF6140);
  CALL2(1,VARREF(YastYlocals_body_setter),T10,o_);
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
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),bindings_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YastYfunction_temporaries_setter),temps_,FREEREF(0));
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yhead),bindings_);
    T4 = CALL2(1,VARREF(YprotoScollectionsScollectionYmemQ),temps_,T5);
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
      T9 = CALL2(1,VARREF(YmacrosYpair),T10,temps_);
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
  P adjoinF6141;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(flat_fun_, 0);
  ARG(new_bindings_, 1);
loop:
  T1 = FUNSHELL(1,fun_adjoin_103,2);
  adjoinF6141 = T1;
  FUNINIT(adjoinF6141, 2,flat_fun_,adjoinF6141);
  T3 = CALL1(1,VARREF(YastYfunction_temporaries),flat_fun_);
  T2 = CALL2(0,adjoinF6141,T3,new_bindings_);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YastYbinding_index));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YastYbinding_index));
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
  T0 = CALL2(1,VARREF(YprotoSmathYA),VARREF(Yast_linearizeYTrenaming_bindings_counterT),YPint((P)1));
  VARSET(Yast_linearizeYTrenaming_bindings_counterT,T0);
  T2 = CALL1(1,VARREF(YastYbinding_name),binding_);
  T3 = CALL1(1,VARREF(YastYbinding_type),binding_);
  T4 = CALL1(1,VARREF(YastYbinding_dynamic_extentQ),binding_);
  T1 = CALLN(1,VARREF(Ynew),9,VARREF(Yast_linearizeYLrenamed_local_bindingG),VARREF(YastYbinding_name),T2,VARREF(YastYbinding_type),T3,VARREF(YastYbinding_dynamic_extentQ),T4,VARREF(YastYbinding_index),VARREF(Yast_linearizeYTrenaming_bindings_counterT));
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
  T0 = CALL3(1,VARREF(Yast_linearizeYcollect_registersX),def_,YPfalse,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_109) {
  P T2,T1,T0;
LINK_STACK();
loop:
  VARSET(Yast_linearizeYTregister_passiveQT,FREEREF(0));
  T1 = fun_108;
  T2 = CALL1(1,VARREF(Yast_linearizeYprogram_definitions),FREEREF(1));
  T0 = CALL2(1,VARREF(YmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_110) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(Yast_linearizeYTregister_passiveQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_register_allocateX_111) {
  P o_,register_passiveQ_;
  P x_2452F6142;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(register_passiveQ_, 1);
loop:
  x_2452F6142 = VARREF(Yast_linearizeYTregister_passiveQT);
  T1 = FUNFAB(fun_109,2,register_passiveQ_,o_);
  T2 = FUNFAB(fun_110,1,x_2452F6142);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_allocate_register_112) {
  P o_,flat_fun_,valQ_;
  P x_2453F6145;
  P tmpF6144;
  P tmpF6143;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  tmpF6143 = valQ_;
  if (tmpF6143 != YPfalse) {
    tmpF6144 = flat_fun_;
    if (tmpF6144 != YPfalse) {
      T6 = CALL1(1,VARREF(YastYprogram_register),o_);
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
    T8 = CALL1(1,VARREF(YastYfunction_registers),flat_fun_);
    T7 = CALL1(1,VARREF(YprotoStypesYlen),T8);
    CALL2(1,VARREF(YastYprogram_register_setter),T7,o_);
    x_2453F6145 = flat_fun_;
    T12 = CALL1(1,VARREF(YastYfunction_registers),x_2453F6145);
    T11 = CALL2(1,VARREF(YprotoScollectionsSlistYpush),T12,o_);
    T10 = CALL2(1,VARREF(YastYfunction_registers_setter),T11,x_2453F6145);
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
  CALL3(1,VARREF(Yast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T0 = CALLN(1,VARREF(Yast_linearizeYupdate_walkX),4,VARREF(Yast_linearizeYcollect_registersX),o_,flat_fun_,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_114) {
  P x_;
  P tmpF6147;
  P next_xF6146;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T3 = CALL1(1,VARREF(Ytail),x_);
    next_xF6146 = T3;
    T4 = CALL1(1,VARREF(Yhead),x_);
    tmpF6147 = FREEREF(2);
    if (tmpF6147 != YPfalse) {
      T7 = CALL1(1,VARREF(YmacrosYemptyQ),next_xF6146);
      T6 = T7;
    } else {
      T6 = YPfalse;
    }
    T5 = T6;
    CALL3(1,VARREF(Yast_linearizeYcollect_registersX),T4,FREEREF(1),T5);
    a1 = next_xF6146;
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
  P loopF6148;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_114,4);
  loopF6148 = T1;
  FUNINIT(loopF6148, 4,o_,flat_fun_,valQ_,loopF6148);
  T2 = CALL1(0,loopF6148,o_);
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
  if (VARREF(Yast_linearizeYTregister_passiveQT) != YPfalse) {
    T0 = CALL3(1,VARREF(Yast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  } else {
  }
  T1 = CALLN(1,VARREF(Yast_linearizeYupdate_walkX),4,VARREF(Yast_linearizeYcollect_registersX),o_,flat_fun_,YPtrue);
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
  T0 = CALL3(1,VARREF(Yast_linearizeYcollect_registersX),def_,FREEREF(0),FREEREF(1));
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
  CALL3(1,VARREF(Yast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T0 = FUNFAB(fun_117,2,flat_fun_,valQ_);
  T1 = CALL1(1,VARREF(Yast_linearizeYform_definitions),o_);
  CALL2(1,VARREF(YmacrosYdo),T0,T1);
  T2 = CALL1(1,VARREF(Yast_linearizeYform_program),o_);
  CALL3(1,VARREF(Yast_linearizeYcollect_registersX),T2,flat_fun_,valQ_);
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
  CALL3(1,VARREF(Yast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T0 = CALL1(1,VARREF(YastYfunction_signature),o_);
  CALL3(1,VARREF(Yast_linearizeYcollect_registersX),T0,flat_fun_,YPtrue);
  T1 = CALL3(1,VARREF(YruntimeYrcurry),VARREF(Yast_linearizeYcollect_registersX),flat_fun_,YPtrue);
  T2 = CALL1(1,VARREF(YastYfunction_data_refs),o_);
  CALL2(1,VARREF(YmacrosYdo),T1,T2);
  T3 = CALL1(1,VARREF(YastYfunction_debug_name),o_);
  CALL3(1,VARREF(Yast_linearizeYcollect_registersX),T3,o_,YPtrue);
  T4 = CALL1(1,VARREF(YastYfunction_body),o_);
  CALL3(1,VARREF(Yast_linearizeYcollect_registersX),T4,o_,YPtrue);
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
  T0 = CALL1(1,VARREF(YastYfunction_body),o_);
  CALL3(1,VARREF(Yast_linearizeYcollect_registersX),T0,o_,YPtrue);
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
  T1 = CALL2(1,VARREF(YisaQ),y_,VARREF(YastYLast_methodG));
  if (T1 != YPfalse) {
    T2 = CALL1(1,FREEREF(0),YPtrue);
    T0 = T2;
  } else {
    T3 = CALL2(1,VARREF(Yast_linearizeYast_walk),FREEREF(1),y_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_123) {
  P return_;
  P walkF6149;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T0 = FUNSHELL(0,fun_walk_122,2);
  walkF6149 = T0;
  FUNINIT(walkF6149, 2,return_,walkF6149);
  T1 = CALL2(1,VARREF(Yast_linearizeYast_walk),walkF6149,FREEREF(0));
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

P Yast_linearizeY___main_0___() {
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
  VARSET(Yast_linearizeYLassocG,T0);
  lit_1 = YPPsym((P)"assoc-key");
  lit_2 = YPPsym((P)"_x");
  T2 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLassocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assoc_key_0 = YPmet(FUNCODEREF(fun_assoc_key_0),LITREF(lit_1),T2,ENVNUL,PNUL,YPfalse);
  T5 = BOUNDP(Yast_linearizeYassoc_key);
  if (T5 != YPfalse) {
    T4 = VARREF(Yast_linearizeYassoc_key);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_assoc_key_0;
  T3 = CALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(Yast_linearizeYassoc_key,T3);
  lit_3 = YPPsym((P)"assoc-key-setter");
  lit_4 = YPPsym((P)"_z");
  T7 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLassocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assoc_key_setter_1 = YPmet(FUNCODEREF(fun_assoc_key_setter_1),LITREF(lit_3),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(Yast_linearizeYassoc_key_setter);
  if (T10 != YPfalse) {
    T9 = VARREF(Yast_linearizeYassoc_key_setter);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_assoc_key_setter_1;
  T8 = CALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(Yast_linearizeYassoc_key_setter,T8);
  CALLN(1,VARREF(YPprop),5,VARREF(Yast_linearizeYLassocG),VARREF(Yast_linearizeYassoc_key),VARREF(Yast_linearizeYassoc_key_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_5 = YPPsym((P)"assoc-value");
  T12 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLassocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assoc_value_2 = YPmet(FUNCODEREF(fun_assoc_value_2),LITREF(lit_5),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(Yast_linearizeYassoc_value);
  if (T15 != YPfalse) {
    T14 = VARREF(Yast_linearizeYassoc_value);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_assoc_value_2;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(Yast_linearizeYassoc_value,T13);
  lit_6 = YPPsym((P)"assoc-value-setter");
  T17 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLassocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assoc_value_setter_3 = YPmet(FUNCODEREF(fun_assoc_value_setter_3),LITREF(lit_6),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(Yast_linearizeYassoc_value_setter);
  if (T20 != YPfalse) {
    T19 = VARREF(Yast_linearizeYassoc_value_setter);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_assoc_value_setter_3;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(Yast_linearizeYassoc_value_setter,T18);
  CALLN(1,VARREF(YPprop),5,VARREF(Yast_linearizeYLassocG),VARREF(Yast_linearizeYassoc_value),VARREF(Yast_linearizeYassoc_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_7 = YPPsym((P)"assoc");
  lit_8 = YPPsym((P)"x");
  lit_9 = YPPsym((P)"y");
  T22 = YPsig(YPPlist(2,LITREF(lit_8),LITREF(lit_9)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(Yast_linearizeYLassocG),Ynil);
  Yast_linearizeYassoc = YPmet(FUNCODEREF(Yast_linearizeYassoc),LITREF(lit_7),T22,ENVNUL,PNUL,YPfalse);
  T23 = Yast_linearizeYassoc;
  VARSET(Yast_linearizeYassoc,T23);
  lit_10 = YPPsym((P)"assocq");
  lit_11 = YPPsym((P)"l");
  T24 = YPsig(YPPlist(2,LITREF(lit_8),LITREF(lit_11)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assocq_5 = YPmet(FUNCODEREF(fun_assocq_5),LITREF(lit_10),T24,ENVNUL,PNUL,YPfalse);
  T27 = BOUNDP(Yast_linearizeYassocq);
  if (T27 != YPfalse) {
    T26 = VARREF(Yast_linearizeYassocq);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_assocq_5;
  T25 = CALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(Yast_linearizeYassocq,T25);
  lit_12 = YPPsym((P)"update-walk!");
  lit_13 = YPPsym((P)"g");
  lit_14 = YPPsym((P)"o");
  lit_15 = YPPsym((P)"args");
  lit_16 = YPPsym((P)"x-2445");
  lit_17 = YPPsym((P)"x-2444");
  T30 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2445_6 = YPmet(FUNCODEREF(fun_x_2445_6),LITREF(lit_16),T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(YPPlist(3,LITREF(lit_13),LITREF(lit_14),LITREF(lit_15)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_update_walkX_7 = YPmet(FUNCODEREF(fun_update_walkX_7),LITREF(lit_12),T29,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(Yast_linearizeYupdate_walkX);
  if (T33 != YPfalse) {
    T32 = VARREF(Yast_linearizeYupdate_walkX);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_update_walkX_7;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(Yast_linearizeYupdate_walkX,T31);
  lit_18 = YPPsym((P)"ast-walk");
  lit_19 = YPPsym((P)"x-2447");
  lit_20 = YPPsym((P)"x-2446");
  T36 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2447_8 = YPmet(FUNCODEREF(fun_x_2447_8),LITREF(lit_19),T36,ENVNUL,PNUL,YPfalse);
  T35 = YPsig(YPPlist(3,LITREF(lit_13),LITREF(lit_14),LITREF(lit_15)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_walk_9 = YPmet(FUNCODEREF(fun_ast_walk_9),LITREF(lit_18),T35,ENVNUL,PNUL,YPfalse);
  T39 = BOUNDP(Yast_linearizeYast_walk);
  if (T39 != YPfalse) {
    T38 = VARREF(Yast_linearizeYast_walk);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_ast_walk_9;
  T37 = CALL2(1,VARREF(YPdefine_method),T38,T40);
  VARSET(Yast_linearizeYast_walk,T37);
  lit_21 = YPPsym((P)"<box-read>");
  T42 = (P)YPpair(VARREF(YastYLcomputed_programG),Ynil);
  T41 = CALL2(1,VARREF(Yfab_class),LITREF(lit_21),T42);
  VARSET(Yast_linearizeYLbox_readG,T41);
  lit_22 = YPPsym((P)"box-reference");
  T43 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLbox_readG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_10 = YPmet(FUNCODEREF(fun_box_reference_10),LITREF(lit_22),T43,ENVNUL,PNUL,YPfalse);
  T46 = BOUNDP(Yast_linearizeYbox_reference);
  if (T46 != YPfalse) {
    T45 = VARREF(Yast_linearizeYbox_reference);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_box_reference_10;
  T44 = CALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(Yast_linearizeYbox_reference,T44);
  lit_23 = YPPsym((P)"box-reference-setter");
  T48 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLbox_readG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_11 = YPmet(FUNCODEREF(fun_box_reference_setter_11),LITREF(lit_23),T48,ENVNUL,PNUL,YPfalse);
  T51 = BOUNDP(Yast_linearizeYbox_reference_setter);
  if (T51 != YPfalse) {
    T50 = VARREF(Yast_linearizeYbox_reference_setter);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_box_reference_setter_11;
  T49 = CALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(Yast_linearizeYbox_reference_setter,T49);
  CALLN(1,VARREF(YPprop),5,VARREF(Yast_linearizeYLbox_readG),VARREF(Yast_linearizeYbox_reference),VARREF(Yast_linearizeYbox_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_24 = YPPsym((P)"<box-write>");
  T54 = (P)YPpair(VARREF(YastYLcomputed_programG),Ynil);
  T53 = CALL2(1,VARREF(Yfab_class),LITREF(lit_24),T54);
  VARSET(Yast_linearizeYLbox_writeG,T53);
  T55 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLbox_writeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_12 = YPmet(FUNCODEREF(fun_box_reference_12),LITREF(lit_22),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(Yast_linearizeYbox_reference);
  if (T58 != YPfalse) {
    T57 = VARREF(Yast_linearizeYbox_reference);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_box_reference_12;
  T56 = CALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(Yast_linearizeYbox_reference,T56);
  T60 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLbox_writeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_13 = YPmet(FUNCODEREF(fun_box_reference_setter_13),LITREF(lit_23),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(Yast_linearizeYbox_reference_setter);
  if (T63 != YPfalse) {
    T62 = VARREF(Yast_linearizeYbox_reference_setter);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_box_reference_setter_13;
  T61 = CALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(Yast_linearizeYbox_reference_setter,T61);
  CALLN(1,VARREF(YPprop),5,VARREF(Yast_linearizeYLbox_writeG),VARREF(Yast_linearizeYbox_reference),VARREF(Yast_linearizeYbox_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_25 = YPPsym((P)"box-form");
  T65 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLbox_writeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_form_14 = YPmet(FUNCODEREF(fun_box_form_14),LITREF(lit_25),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(Yast_linearizeYbox_form);
  if (T68 != YPfalse) {
    T67 = VARREF(Yast_linearizeYbox_form);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_box_form_14;
  T66 = CALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(Yast_linearizeYbox_form,T66);
  lit_26 = YPPsym((P)"box-form-setter");
  T70 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLbox_writeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_form_setter_15 = YPmet(FUNCODEREF(fun_box_form_setter_15),LITREF(lit_26),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(Yast_linearizeYbox_form_setter);
  if (T73 != YPfalse) {
    T72 = VARREF(Yast_linearizeYbox_form_setter);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_box_form_setter_15;
  T71 = CALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(Yast_linearizeYbox_form_setter,T71);
  CALLN(1,VARREF(YPprop),5,VARREF(Yast_linearizeYLbox_writeG),VARREF(Yast_linearizeYbox_form),VARREF(Yast_linearizeYbox_form_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_27 = YPPsym((P)"<box-creation>");
  T76 = (P)YPpair(VARREF(YastYLcomputed_programG),Ynil);
  T75 = CALL2(1,VARREF(Yfab_class),LITREF(lit_27),T76);
  VARSET(Yast_linearizeYLbox_creationG,T75);
  T77 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLbox_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_16 = YPmet(FUNCODEREF(fun_box_reference_16),LITREF(lit_22),T77,ENVNUL,PNUL,YPfalse);
  T80 = BOUNDP(Yast_linearizeYbox_reference);
  if (T80 != YPfalse) {
    T79 = VARREF(Yast_linearizeYbox_reference);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_box_reference_16;
  T78 = CALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(Yast_linearizeYbox_reference,T78);
  T82 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLbox_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_17 = YPmet(FUNCODEREF(fun_box_reference_setter_17),LITREF(lit_23),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(Yast_linearizeYbox_reference_setter);
  if (T85 != YPfalse) {
    T84 = VARREF(Yast_linearizeYbox_reference_setter);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_box_reference_setter_17;
  T83 = CALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(Yast_linearizeYbox_reference_setter,T83);
  CALLN(1,VARREF(YPprop),5,VARREF(Yast_linearizeYLbox_creationG),VARREF(Yast_linearizeYbox_reference),VARREF(Yast_linearizeYbox_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_28 = YPPsym((P)"insert-box!");
  T87 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_18 = YPmet(FUNCODEREF(fun_insert_boxX_18),LITREF(lit_28),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T90 != YPfalse) {
    T89 = VARREF(Yast_linearizeYinsert_boxX);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_insert_boxX_18;
  T88 = CALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(Yast_linearizeYinsert_boxX,T88);
  T92 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_19 = YPmet(FUNCODEREF(fun_insert_boxX_19),LITREF(lit_28),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T95 != YPfalse) {
    T94 = VARREF(Yast_linearizeYinsert_boxX);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_insert_boxX_19;
  T93 = CALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(Yast_linearizeYinsert_boxX,T93);
  T97 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLlocal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_20 = YPmet(FUNCODEREF(fun_insert_boxX_20),LITREF(lit_28),T97,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T100 != YPfalse) {
    T99 = VARREF(Yast_linearizeYinsert_boxX);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_insert_boxX_20;
  T98 = CALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(Yast_linearizeYinsert_boxX,T98);
  T102 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_21 = YPmet(FUNCODEREF(fun_insert_boxX_21),LITREF(lit_28),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T105 != YPfalse) {
    T104 = VARREF(Yast_linearizeYinsert_boxX);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_insert_boxX_21;
  T103 = CALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(Yast_linearizeYinsert_boxX,T103);
  T107 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_22 = YPmet(FUNCODEREF(fun_insert_boxX_22),LITREF(lit_28),T107,ENVNUL,PNUL,YPfalse);
  T110 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T110 != YPfalse) {
    T109 = VARREF(Yast_linearizeYinsert_boxX);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_insert_boxX_22;
  T108 = CALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(Yast_linearizeYinsert_boxX,T108);
  T112 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_23 = YPmet(FUNCODEREF(fun_insert_boxX_23),LITREF(lit_28),T112,ENVNUL,PNUL,YPfalse);
  T115 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T115 != YPfalse) {
    T114 = VARREF(Yast_linearizeYinsert_boxX);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_insert_boxX_23;
  T113 = CALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(Yast_linearizeYinsert_boxX,T113);
  lit_29 = YPPsym((P)"boxify-mutable-bindings");
  lit_30 = YPPsym((P)"form");
  lit_31 = YPPsym((P)"bindings");
  lit_32 = YPPsym((P)"loop");
  lit_33 = YPPsym((P)"res");
  T118 = YPsig(YPPlist(2,LITREF(lit_33),LITREF(lit_31)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_24 = YPmet(FUNCODEREF(fun_loop_24),LITREF(lit_32),T118,ENVNUL,PNUL,YPfalse);
  T117 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_31)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_boxify_mutable_bindings_25 = YPmet(FUNCODEREF(fun_boxify_mutable_bindings_25),LITREF(lit_29),T117,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(Yast_linearizeYboxify_mutable_bindings);
  if (T121 != YPfalse) {
    T120 = VARREF(Yast_linearizeYboxify_mutable_bindings);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_boxify_mutable_bindings_25;
  T119 = CALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(Yast_linearizeYboxify_mutable_bindings,T119);
  lit_34 = YPPsym((P)"do-do-call-references!");
  T123 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_do_call_referencesX_26 = YPmet(FUNCODEREF(fun_do_do_call_referencesX_26),LITREF(lit_34),T123,ENVNUL,PNUL,YPfalse);
  T126 = BOUNDP(Yast_linearizeYdo_do_call_referencesX);
  if (T126 != YPfalse) {
    T125 = VARREF(Yast_linearizeYdo_do_call_referencesX);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_do_do_call_referencesX_26;
  T124 = CALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(Yast_linearizeYdo_do_call_referencesX,T124);
  lit_35 = YPPsym((P)"do-call-references!");
  T128 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_call_referencesX_27 = YPmet(FUNCODEREF(fun_do_call_referencesX_27),LITREF(lit_35),T128,ENVNUL,PNUL,YPfalse);
  T131 = BOUNDP(Yast_linearizeYdo_call_referencesX);
  if (T131 != YPfalse) {
    T130 = VARREF(Yast_linearizeYdo_call_referencesX);
  } else {
    T130 = YPfalse;
  }
  T132 = fun_do_call_referencesX_27;
  T129 = CALL2(1,VARREF(YPdefine_method),T130,T132);
  VARSET(Yast_linearizeYdo_call_referencesX,T129);
  T133 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_call_referencesX_28 = YPmet(FUNCODEREF(fun_do_call_referencesX_28),LITREF(lit_35),T133,ENVNUL,PNUL,YPfalse);
  T136 = BOUNDP(Yast_linearizeYdo_call_referencesX);
  if (T136 != YPfalse) {
    T135 = VARREF(Yast_linearizeYdo_call_referencesX);
  } else {
    T135 = YPfalse;
  }
  T137 = fun_do_call_referencesX_28;
  T134 = CALL2(1,VARREF(YPdefine_method),T135,T137);
  VARSET(Yast_linearizeYdo_call_referencesX,T134);
  lit_36 = YPPsym((P)"analyze-call-references");
  T138 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_analyze_call_references_29 = YPmet(FUNCODEREF(fun_analyze_call_references_29),LITREF(lit_36),T138,ENVNUL,PNUL,YPfalse);
  T141 = BOUNDP(Yast_linearizeYanalyze_call_references);
  if (T141 != YPfalse) {
    T140 = VARREF(Yast_linearizeYanalyze_call_references);
  } else {
    T140 = YPfalse;
  }
  T142 = fun_analyze_call_references_29;
  T139 = CALL2(1,VARREF(YPdefine_method),T140,T142);
  VARSET(Yast_linearizeYanalyze_call_references,T139);
  lit_37 = YPPsym((P)"do-do-dynamic-extent!");
  T143 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_do_dynamic_extentX_30 = YPmet(FUNCODEREF(fun_do_do_dynamic_extentX_30),LITREF(lit_37),T143,ENVNUL,PNUL,YPfalse);
  T146 = BOUNDP(Yast_linearizeYdo_do_dynamic_extentX);
  if (T146 != YPfalse) {
    T145 = VARREF(Yast_linearizeYdo_do_dynamic_extentX);
  } else {
    T145 = YPfalse;
  }
  T147 = fun_do_do_dynamic_extentX_30;
  T144 = CALL2(1,VARREF(YPdefine_method),T145,T147);
  VARSET(Yast_linearizeYdo_do_dynamic_extentX,T144);
  lit_38 = YPPsym((P)"do-dynamic-extent!");
  T148 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_dynamic_extentX_31 = YPmet(FUNCODEREF(fun_do_dynamic_extentX_31),LITREF(lit_38),T148,ENVNUL,PNUL,YPfalse);
  T151 = BOUNDP(Yast_linearizeYdo_dynamic_extentX);
  if (T151 != YPfalse) {
    T150 = VARREF(Yast_linearizeYdo_dynamic_extentX);
  } else {
    T150 = YPfalse;
  }
  T152 = fun_do_dynamic_extentX_31;
  T149 = CALL2(1,VARREF(YPdefine_method),T150,T152);
  VARSET(Yast_linearizeYdo_dynamic_extentX,T149);
  T153 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_dynamic_extentX_32 = YPmet(FUNCODEREF(fun_do_dynamic_extentX_32),LITREF(lit_38),T153,ENVNUL,PNUL,YPfalse);
  T156 = BOUNDP(Yast_linearizeYdo_dynamic_extentX);
  if (T156 != YPfalse) {
    T155 = VARREF(Yast_linearizeYdo_dynamic_extentX);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_do_dynamic_extentX_32;
  T154 = CALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(Yast_linearizeYdo_dynamic_extentX,T154);
  lit_39 = YPPsym((P)"analyze-dynamic-extent");
  T158 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_analyze_dynamic_extent_33 = YPmet(FUNCODEREF(fun_analyze_dynamic_extent_33),LITREF(lit_39),T158,ENVNUL,PNUL,YPfalse);
  T161 = BOUNDP(Yast_linearizeYanalyze_dynamic_extent);
  if (T161 != YPfalse) {
    T160 = VARREF(Yast_linearizeYanalyze_dynamic_extent);
  } else {
    T160 = YPfalse;
  }
  T162 = fun_analyze_dynamic_extent_33;
  T159 = CALL2(1,VARREF(YPdefine_method),T160,T162);
  VARSET(Yast_linearizeYanalyze_dynamic_extent,T159);
  lit_40 = YPPsym((P)"do-do-call-upgrades!");
  T163 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_do_call_upgradesX_34 = YPmet(FUNCODEREF(fun_do_do_call_upgradesX_34),LITREF(lit_40),T163,ENVNUL,PNUL,YPfalse);
  T166 = BOUNDP(Yast_linearizeYdo_do_call_upgradesX);
  if (T166 != YPfalse) {
    T165 = VARREF(Yast_linearizeYdo_do_call_upgradesX);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_do_do_call_upgradesX_34;
  T164 = CALL2(1,VARREF(YPdefine_method),T165,T167);
  VARSET(Yast_linearizeYdo_do_call_upgradesX,T164);
  lit_41 = YPPsym((P)"do-call-upgrades!");
  T168 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_call_upgradesX_35 = YPmet(FUNCODEREF(fun_do_call_upgradesX_35),LITREF(lit_41),T168,ENVNUL,PNUL,YPfalse);
  T171 = BOUNDP(Yast_linearizeYdo_call_upgradesX);
  if (T171 != YPfalse) {
    T170 = VARREF(Yast_linearizeYdo_call_upgradesX);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_do_call_upgradesX_35;
  T169 = CALL2(1,VARREF(YPdefine_method),T170,T172);
  VARSET(Yast_linearizeYdo_call_upgradesX,T169);
  lit_42 = YPPsym((P)"unconstrained-type?");
  lit_43 = YPPsym((P)"b");
  T173 = YPsig(YPPlist(1,LITREF(lit_43)),YPPlist(1,VARREF(YastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_36 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_36),LITREF(lit_42),T173,ENVNUL,PNUL,YPfalse);
  T176 = BOUNDP(Yast_linearizeYunconstrained_typeQ);
  if (T176 != YPfalse) {
    T175 = VARREF(Yast_linearizeYunconstrained_typeQ);
  } else {
    T175 = YPfalse;
  }
  T177 = fun_unconstrained_typeQ_36;
  T174 = CALL2(1,VARREF(YPdefine_method),T175,T177);
  VARSET(Yast_linearizeYunconstrained_typeQ,T174);
  lit_44 = YPPsym((P)"boot");
  lit_45 = YPPsym((P)"<any>");
  T178 = YPsig(YPPlist(1,LITREF(lit_43)),YPPlist(1,VARREF(YastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_37 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_37),LITREF(lit_42),T178,ENVNUL,PNUL,YPfalse);
  T181 = BOUNDP(Yast_linearizeYunconstrained_typeQ);
  if (T181 != YPfalse) {
    T180 = VARREF(Yast_linearizeYunconstrained_typeQ);
  } else {
    T180 = YPfalse;
  }
  T182 = fun_unconstrained_typeQ_37;
  T179 = CALL2(1,VARREF(YPdefine_method),T180,T182);
  VARSET(Yast_linearizeYunconstrained_typeQ,T179);
  T183 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLmodule_binding_referenceG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_38 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_38),LITREF(lit_42),T183,ENVNUL,PNUL,YPfalse);
  T186 = BOUNDP(Yast_linearizeYunconstrained_typeQ);
  if (T186 != YPfalse) {
    T185 = VARREF(Yast_linearizeYunconstrained_typeQ);
  } else {
    T185 = YPfalse;
  }
  T187 = fun_unconstrained_typeQ_38;
  T184 = CALL2(1,VARREF(YPdefine_method),T185,T187);
  VARSET(Yast_linearizeYunconstrained_typeQ,T184);
  T188 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_call_upgradesX_39 = YPmet(FUNCODEREF(fun_do_call_upgradesX_39),LITREF(lit_41),T188,ENVNUL,PNUL,YPfalse);
  T191 = BOUNDP(Yast_linearizeYdo_call_upgradesX);
  if (T191 != YPfalse) {
    T190 = VARREF(Yast_linearizeYdo_call_upgradesX);
  } else {
    T190 = YPfalse;
  }
  T192 = fun_do_call_upgradesX_39;
  T189 = CALL2(1,VARREF(YPdefine_method),T190,T192);
  VARSET(Yast_linearizeYdo_call_upgradesX,T189);
  lit_46 = YPPsym((P)"analyze-calls");
  T193 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_analyze_calls_40 = YPmet(FUNCODEREF(fun_analyze_calls_40),LITREF(lit_46),T193,ENVNUL,PNUL,YPfalse);
  T196 = BOUNDP(Yast_linearizeYanalyze_calls);
  if (T196 != YPfalse) {
    T195 = VARREF(Yast_linearizeYanalyze_calls);
  } else {
    T195 = YPfalse;
  }
  T197 = fun_analyze_calls_40;
  T194 = CALL2(1,VARREF(YPdefine_method),T195,T197);
  VARSET(Yast_linearizeYanalyze_calls,T194);
  lit_47 = YPPsym((P)"<free-reference>");
  T199 = (P)YPpair(VARREF(YastYLreal_referenceG),Ynil);
  T198 = CALL2(1,VARREF(Yfab_class),LITREF(lit_47),T199);
  VARSET(Yast_linearizeYLfree_referenceG,T198);
  lit_48 = YPPsym((P)"reference-offset");
  T200 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLfree_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_offset_41 = YPmet(FUNCODEREF(fun_reference_offset_41),LITREF(lit_48),T200,ENVNUL,PNUL,YPfalse);
  T203 = BOUNDP(Yast_linearizeYreference_offset);
  if (T203 != YPfalse) {
    T202 = VARREF(Yast_linearizeYreference_offset);
  } else {
    T202 = YPfalse;
  }
  T204 = fun_reference_offset_41;
  T201 = CALL2(1,VARREF(YPdefine_method),T202,T204);
  VARSET(Yast_linearizeYreference_offset,T201);
  lit_49 = YPPsym((P)"reference-offset-setter");
  T206 = CALL1(1,VARREF(YprotoStypesYtQ),VARREF(YLintG));
  T205 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,T206,VARREF(Yast_linearizeYLfree_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_offset_setter_42 = YPmet(FUNCODEREF(fun_reference_offset_setter_42),LITREF(lit_49),T205,ENVNUL,PNUL,YPfalse);
  T209 = BOUNDP(Yast_linearizeYreference_offset_setter);
  if (T209 != YPfalse) {
    T208 = VARREF(Yast_linearizeYreference_offset_setter);
  } else {
    T208 = YPfalse;
  }
  T210 = fun_reference_offset_setter_42;
  T207 = CALL2(1,VARREF(YPdefine_method),T208,T210);
  VARSET(Yast_linearizeYreference_offset_setter,T207);
  T211 = CALL1(1,VARREF(YprotoStypesYtQ),VARREF(YLintG));
  CALLN(1,VARREF(YPprop),5,VARREF(Yast_linearizeYLfree_referenceG),VARREF(Yast_linearizeYreference_offset),VARREF(Yast_linearizeYreference_offset_setter),T211,VARREF(YPprop_unbound_error));
  lit_50 = YPPsym((P)"reference-self?");
  T212 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLfree_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_selfQ_43 = YPmet(FUNCODEREF(fun_reference_selfQ_43),LITREF(lit_50),T212,ENVNUL,PNUL,YPfalse);
  T215 = BOUNDP(Yast_linearizeYreference_selfQ);
  if (T215 != YPfalse) {
    T214 = VARREF(Yast_linearizeYreference_selfQ);
  } else {
    T214 = YPfalse;
  }
  T216 = fun_reference_selfQ_43;
  T213 = CALL2(1,VARREF(YPdefine_method),T214,T216);
  VARSET(Yast_linearizeYreference_selfQ,T213);
  lit_51 = YPPsym((P)"reference-self?-setter");
  T217 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLlogG),VARREF(Yast_linearizeYLfree_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_selfQ_setter_44 = YPmet(FUNCODEREF(fun_reference_selfQ_setter_44),LITREF(lit_51),T217,ENVNUL,PNUL,YPfalse);
  T220 = BOUNDP(Yast_linearizeYreference_selfQ_setter);
  if (T220 != YPfalse) {
    T219 = VARREF(Yast_linearizeYreference_selfQ_setter);
  } else {
    T219 = YPfalse;
  }
  T221 = fun_reference_selfQ_setter_44;
  T218 = CALL2(1,VARREF(YPdefine_method),T219,T221);
  VARSET(Yast_linearizeYreference_selfQ_setter,T218);
  CALLN(1,VARREF(YPprop),5,VARREF(Yast_linearizeYLfree_referenceG),VARREF(Yast_linearizeYreference_selfQ),VARREF(Yast_linearizeYreference_selfQ_setter),VARREF(YLlogG),VARREF(YPprop_unbound_error));
  lit_52 = YPPsym((P)"lift!");
  T222 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_liftX_45 = YPmet(FUNCODEREF(fun_liftX_45),LITREF(lit_52),T222,ENVNUL,PNUL,YPfalse);
  T225 = BOUNDP(Yast_linearizeYliftX);
  if (T225 != YPfalse) {
    T224 = VARREF(Yast_linearizeYliftX);
  } else {
    T224 = YPfalse;
  }
  T226 = fun_liftX_45;
  T223 = CALL2(1,VARREF(YPdefine_method),T224,T226);
  VARSET(Yast_linearizeYliftX,T223);
  lit_53 = YPPsym((P)"lift-procedures!");
  lit_54 = YPPsym((P)"flat-fun");
  T229 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(YastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T228 = fun_lift_proceduresX_46 = YPmet(FUNCODEREF(fun_lift_proceduresX_46),LITREF(lit_53),T229,ENVNUL,PNUL,YPfalse);
  T233 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T233 != YPfalse) {
    T232 = VARREF(Yast_linearizeYlift_proceduresX);
  } else {
    T232 = YPfalse;
  }
  T234 = fun_lift_proceduresX_46;
  T231 = CALL2(1,VARREF(YPdefine_method),T232,T234);
  T230 = VARSET(Yast_linearizeYlift_proceduresX,T231);
  T227 = T230;
  return T227;
}

P Yast_linearizeY___main_1___() {
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
  T0 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(YastYLlocal_referenceG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_47 = YPmet(FUNCODEREF(fun_lift_proceduresX_47),LITREF(lit_53),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T3 != YPfalse) {
    T2 = VARREF(Yast_linearizeYlift_proceduresX);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_lift_proceduresX_47;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(Yast_linearizeYlift_proceduresX,T1);
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
  T5 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_56)),YPPlist(2,VARREF(YastYLast_methodG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_adjoin_free_bindingX_50 = YPmet(FUNCODEREF(fun_adjoin_free_bindingX_50),LITREF(lit_55),T5,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(Yast_linearizeYadjoin_free_bindingX);
  if (T10 != YPfalse) {
    T9 = VARREF(Yast_linearizeYadjoin_free_bindingX);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_adjoin_free_bindingX_50;
  T8 = CALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(Yast_linearizeYadjoin_free_bindingX,T8);
  T12 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(YastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_51 = YPmet(FUNCODEREF(fun_lift_proceduresX_51),LITREF(lit_53),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T15 != YPfalse) {
    T14 = VARREF(Yast_linearizeYlift_proceduresX);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_lift_proceduresX_51;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(Yast_linearizeYlift_proceduresX,T13);
  T17 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(YastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_52 = YPmet(FUNCODEREF(fun_lift_proceduresX_52),LITREF(lit_53),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T20 != YPfalse) {
    T19 = VARREF(Yast_linearizeYlift_proceduresX);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_lift_proceduresX_52;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(Yast_linearizeYlift_proceduresX,T18);
  T22 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(YastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_53 = YPmet(FUNCODEREF(fun_lift_proceduresX_53),LITREF(lit_53),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T25 != YPfalse) {
    T24 = VARREF(Yast_linearizeYlift_proceduresX);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_lift_proceduresX_53;
  T23 = CALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(Yast_linearizeYlift_proceduresX,T23);
  T27 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(YastYLast_genericG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_54 = YPmet(FUNCODEREF(fun_lift_proceduresX_54),LITREF(lit_53),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T30 != YPfalse) {
    T29 = VARREF(Yast_linearizeYlift_proceduresX);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_lift_proceduresX_54;
  T28 = CALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(Yast_linearizeYlift_proceduresX,T28);
  T32 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(YastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_55 = YPmet(FUNCODEREF(fun_lift_proceduresX_55),LITREF(lit_53),T32,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T35 != YPfalse) {
    T34 = VARREF(Yast_linearizeYlift_proceduresX);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_lift_proceduresX_55;
  T33 = CALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(Yast_linearizeYlift_proceduresX,T33);
  lit_61 = YPPsym((P)"<flattened-program>");
  T38 = (P)YPpair(VARREF(YastYLcomputed_programG),Ynil);
  T37 = CALL2(1,VARREF(Yfab_class),LITREF(lit_61),T38);
  VARSET(Yast_linearizeYLflattened_programG,T37);
  lit_62 = YPPsym((P)"program-form");
  T39 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_form_56 = YPmet(FUNCODEREF(fun_program_form_56),LITREF(lit_62),T39,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(Yast_linearizeYprogram_form);
  if (T42 != YPfalse) {
    T41 = VARREF(Yast_linearizeYprogram_form);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_program_form_56;
  T40 = CALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(Yast_linearizeYprogram_form,T40);
  lit_63 = YPPsym((P)"program-form-setter");
  T45 = CALL1(1,VARREF(YprotoStypesYtQ),VARREF(YastYLprogramG));
  T44 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,T45,VARREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_form_setter_57 = YPmet(FUNCODEREF(fun_program_form_setter_57),LITREF(lit_63),T44,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(Yast_linearizeYprogram_form_setter);
  if (T48 != YPfalse) {
    T47 = VARREF(Yast_linearizeYprogram_form_setter);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_program_form_setter_57;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(Yast_linearizeYprogram_form_setter,T46);
  T50 = CALL1(1,VARREF(YprotoStypesYtQ),VARREF(YastYLprogramG));
  CALLN(1,VARREF(YPprop),5,VARREF(Yast_linearizeYLflattened_programG),VARREF(Yast_linearizeYprogram_form),VARREF(Yast_linearizeYprogram_form_setter),T50,VARREF(YPprop_unbound_error));
  lit_64 = YPPsym((P)"program-quotations");
  T51 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_quotations_58 = YPmet(FUNCODEREF(fun_program_quotations_58),LITREF(lit_64),T51,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(Yast_linearizeYprogram_quotations);
  if (T54 != YPfalse) {
    T53 = VARREF(Yast_linearizeYprogram_quotations);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_program_quotations_58;
  T52 = CALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(Yast_linearizeYprogram_quotations,T52);
  lit_65 = YPPsym((P)"program-quotations-setter");
  T56 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_quotations_setter_59 = YPmet(FUNCODEREF(fun_program_quotations_setter_59),LITREF(lit_65),T56,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(Yast_linearizeYprogram_quotations_setter);
  if (T59 != YPfalse) {
    T58 = VARREF(Yast_linearizeYprogram_quotations_setter);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_program_quotations_setter_59;
  T57 = CALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(Yast_linearizeYprogram_quotations_setter,T57);
  T61 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_60 = YPmet(FUNCODEREF(fun_60),YPfalse,T61,ENVNUL,PNUL,YPfalse);
  T62 = fun_60;
  CALLN(1,VARREF(YPprop),5,VARREF(Yast_linearizeYLflattened_programG),VARREF(Yast_linearizeYprogram_quotations),VARREF(Yast_linearizeYprogram_quotations_setter),VARREF(YLanyG),T62);
  lit_66 = YPPsym((P)"program-definitions");
  T63 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_definitions_61 = YPmet(FUNCODEREF(fun_program_definitions_61),LITREF(lit_66),T63,ENVNUL,PNUL,YPfalse);
  T66 = BOUNDP(Yast_linearizeYprogram_definitions);
  if (T66 != YPfalse) {
    T65 = VARREF(Yast_linearizeYprogram_definitions);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_program_definitions_61;
  T64 = CALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(Yast_linearizeYprogram_definitions,T64);
  lit_67 = YPPsym((P)"program-definitions-setter");
  T68 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_definitions_setter_62 = YPmet(FUNCODEREF(fun_program_definitions_setter_62),LITREF(lit_67),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(Yast_linearizeYprogram_definitions_setter);
  if (T71 != YPfalse) {
    T70 = VARREF(Yast_linearizeYprogram_definitions_setter);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_program_definitions_setter_62;
  T69 = CALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(Yast_linearizeYprogram_definitions_setter,T69);
  T73 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPmet(FUNCODEREF(fun_63),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T74 = fun_63;
  CALLN(1,VARREF(YPprop),5,VARREF(Yast_linearizeYLflattened_programG),VARREF(Yast_linearizeYprogram_definitions),VARREF(Yast_linearizeYprogram_definitions_setter),VARREF(YLanyG),T74);
  lit_68 = YPPsym((P)"<top-level-form>");
  T76 = (P)YPpair(VARREF(YastYLcomputed_programG),Ynil);
  T75 = CALL2(1,VARREF(Yfab_class),LITREF(lit_68),T76);
  VARSET(Yast_linearizeYLtop_level_formG,T75);
  lit_69 = YPPsym((P)"form-program");
  T77 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_program_64 = YPmet(FUNCODEREF(fun_form_program_64),LITREF(lit_69),T77,ENVNUL,PNUL,YPfalse);
  T80 = BOUNDP(Yast_linearizeYform_program);
  if (T80 != YPfalse) {
    T79 = VARREF(Yast_linearizeYform_program);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_form_program_64;
  T78 = CALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(Yast_linearizeYform_program,T78);
  lit_70 = YPPsym((P)"form-program-setter");
  T82 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YastYLprogramG),VARREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_program_setter_65 = YPmet(FUNCODEREF(fun_form_program_setter_65),LITREF(lit_70),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(Yast_linearizeYform_program_setter);
  if (T85 != YPfalse) {
    T84 = VARREF(Yast_linearizeYform_program_setter);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_form_program_setter_65;
  T83 = CALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(Yast_linearizeYform_program_setter,T83);
  CALLN(1,VARREF(YPprop),5,VARREF(Yast_linearizeYLtop_level_formG),VARREF(Yast_linearizeYform_program),VARREF(Yast_linearizeYform_program_setter),VARREF(YastYLprogramG),VARREF(YPprop_unbound_error));
  lit_71 = YPPsym((P)"form-quotations");
  T87 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_quotations_66 = YPmet(FUNCODEREF(fun_form_quotations_66),LITREF(lit_71),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(Yast_linearizeYform_quotations);
  if (T90 != YPfalse) {
    T89 = VARREF(Yast_linearizeYform_quotations);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_form_quotations_66;
  T88 = CALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(Yast_linearizeYform_quotations,T88);
  lit_72 = YPPsym((P)"form-quotations-setter");
  T92 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_quotations_setter_67 = YPmet(FUNCODEREF(fun_form_quotations_setter_67),LITREF(lit_72),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(Yast_linearizeYform_quotations_setter);
  if (T95 != YPfalse) {
    T94 = VARREF(Yast_linearizeYform_quotations_setter);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_form_quotations_setter_67;
  T93 = CALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(Yast_linearizeYform_quotations_setter,T93);
  T97 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_68 = YPmet(FUNCODEREF(fun_68),YPfalse,T97,ENVNUL,PNUL,YPfalse);
  T98 = fun_68;
  CALLN(1,VARREF(YPprop),5,VARREF(Yast_linearizeYLtop_level_formG),VARREF(Yast_linearizeYform_quotations),VARREF(Yast_linearizeYform_quotations_setter),VARREF(YLanyG),T98);
  lit_73 = YPPsym((P)"form-definitions");
  T99 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_definitions_69 = YPmet(FUNCODEREF(fun_form_definitions_69),LITREF(lit_73),T99,ENVNUL,PNUL,YPfalse);
  T102 = BOUNDP(Yast_linearizeYform_definitions);
  if (T102 != YPfalse) {
    T101 = VARREF(Yast_linearizeYform_definitions);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_form_definitions_69;
  T100 = CALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(Yast_linearizeYform_definitions,T100);
  lit_74 = YPPsym((P)"form-definitions-setter");
  T104 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_definitions_setter_70 = YPmet(FUNCODEREF(fun_form_definitions_setter_70),LITREF(lit_74),T104,ENVNUL,PNUL,YPfalse);
  T107 = BOUNDP(Yast_linearizeYform_definitions_setter);
  if (T107 != YPfalse) {
    T106 = VARREF(Yast_linearizeYform_definitions_setter);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_form_definitions_setter_70;
  T105 = CALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(Yast_linearizeYform_definitions_setter,T105);
  T109 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T109,ENVNUL,PNUL,YPfalse);
  T110 = fun_71;
  CALLN(1,VARREF(YPprop),5,VARREF(Yast_linearizeYLtop_level_formG),VARREF(Yast_linearizeYform_definitions),VARREF(Yast_linearizeYform_definitions_setter),VARREF(YLanyG),T110);
  lit_75 = YPPsym((P)"<closure-creation>");
  T112 = (P)YPpair(VARREF(YastYLcomputed_programG),Ynil);
  T111 = CALL2(1,VARREF(Yfab_class),LITREF(lit_75),T112);
  VARSET(Yast_linearizeYLclosure_creationG,T111);
  lit_76 = YPPsym((P)"closure-creation-index");
  T113 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_closure_creation_index_72 = YPmet(FUNCODEREF(fun_closure_creation_index_72),LITREF(lit_76),T113,ENVNUL,PNUL,YPfalse);
  T116 = BOUNDP(Yast_linearizeYclosure_creation_index);
  if (T116 != YPfalse) {
    T115 = VARREF(Yast_linearizeYclosure_creation_index);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_closure_creation_index_72;
  T114 = CALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(Yast_linearizeYclosure_creation_index,T114);
  lit_77 = YPPsym((P)"closure-creation-index-setter");
  T118 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_closure_creation_index_setter_73 = YPmet(FUNCODEREF(fun_closure_creation_index_setter_73),LITREF(lit_77),T118,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(Yast_linearizeYclosure_creation_index_setter);
  if (T121 != YPfalse) {
    T120 = VARREF(Yast_linearizeYclosure_creation_index_setter);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_closure_creation_index_setter_73;
  T119 = CALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(Yast_linearizeYclosure_creation_index_setter,T119);
  CALLN(1,VARREF(YPprop),5,VARREF(Yast_linearizeYLclosure_creationG),VARREF(Yast_linearizeYclosure_creation_index),VARREF(Yast_linearizeYclosure_creation_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_78 = YPPsym((P)"closure-creation-free");
  T123 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_closure_creation_free_74 = YPmet(FUNCODEREF(fun_closure_creation_free_74),LITREF(lit_78),T123,ENVNUL,PNUL,YPfalse);
  T126 = BOUNDP(Yast_linearizeYclosure_creation_free);
  if (T126 != YPfalse) {
    T125 = VARREF(Yast_linearizeYclosure_creation_free);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_closure_creation_free_74;
  T124 = CALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(Yast_linearizeYclosure_creation_free,T124);
  lit_79 = YPPsym((P)"closure-creation-free-setter");
  T128 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_closure_creation_free_setter_75 = YPmet(FUNCODEREF(fun_closure_creation_free_setter_75),LITREF(lit_79),T128,ENVNUL,PNUL,YPfalse);
  T131 = BOUNDP(Yast_linearizeYclosure_creation_free_setter);
  if (T131 != YPfalse) {
    T130 = VARREF(Yast_linearizeYclosure_creation_free_setter);
  } else {
    T130 = YPfalse;
  }
  T132 = fun_closure_creation_free_setter_75;
  T129 = CALL2(1,VARREF(YPdefine_method),T130,T132);
  VARSET(Yast_linearizeYclosure_creation_free_setter,T129);
  CALLN(1,VARREF(YPprop),5,VARREF(Yast_linearizeYLclosure_creationG),VARREF(Yast_linearizeYclosure_creation_free),VARREF(Yast_linearizeYclosure_creation_free_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_80 = YPPsym((P)"flatten-seqs");
  T133 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_flatten_seqs_76 = YPmet(FUNCODEREF(fun_flatten_seqs_76),LITREF(lit_80),T133,ENVNUL,PNUL,YPfalse);
  T136 = BOUNDP(Yast_linearizeYflatten_seqs);
  if (T136 != YPfalse) {
    T135 = VARREF(Yast_linearizeYflatten_seqs);
  } else {
    T135 = YPfalse;
  }
  T137 = fun_flatten_seqs_76;
  T134 = CALL2(1,VARREF(YPdefine_method),T135,T137);
  VARSET(Yast_linearizeYflatten_seqs,T134);
  lit_81 = YPPsym((P)"s");
  lit_82 = YPPsym((P)"r");
  lit_83 = YPPsym((P)"inner");
  lit_84 = YPPsym((P)"ss");
  T140 = YPsig(YPPlist(2,LITREF(lit_84),LITREF(lit_82)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_inner_77 = YPmet(FUNCODEREF(fun_inner_77),LITREF(lit_83),T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(YPPlist(2,LITREF(lit_81),LITREF(lit_82)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_78 = YPmet(FUNCODEREF(fun_loop_78),LITREF(lit_32),T139,ENVNUL,PNUL,YPfalse);
  T138 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLsequentialG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_flatten_seqs_79 = YPmet(FUNCODEREF(fun_flatten_seqs_79),LITREF(lit_80),T138,ENVNUL,PNUL,YPfalse);
  T143 = BOUNDP(Yast_linearizeYflatten_seqs);
  if (T143 != YPfalse) {
    T142 = VARREF(Yast_linearizeYflatten_seqs);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_flatten_seqs_79;
  T141 = CALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(Yast_linearizeYflatten_seqs,T141);
  lit_85 = YPPsym((P)"as-top-level-forms");
  lit_86 = YPPsym((P)"programs");
  T146 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T146,ENVNUL,PNUL,YPfalse);
  T145 = YPsig(YPPlist(1,LITREF(lit_86)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_top_level_forms_81 = YPmet(FUNCODEREF(fun_as_top_level_forms_81),LITREF(lit_85),T145,ENVNUL,PNUL,YPfalse);
  T149 = BOUNDP(Yast_linearizeYas_top_level_forms);
  if (T149 != YPfalse) {
    T148 = VARREF(Yast_linearizeYas_top_level_forms);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_as_top_level_forms_81;
  T147 = CALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(Yast_linearizeYas_top_level_forms,T147);
  lit_87 = YPPsym((P)"extract-things!");
  T152 = YPsig(YPPlist(1,LITREF(lit_30)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_extract_thingsX_83 = YPmet(FUNCODEREF(fun_extract_thingsX_83),LITREF(lit_87),T151,ENVNUL,PNUL,YPfalse);
  T155 = BOUNDP(Yast_linearizeYextract_thingsX);
  if (T155 != YPfalse) {
    T154 = VARREF(Yast_linearizeYextract_thingsX);
  } else {
    T154 = YPfalse;
  }
  T156 = fun_extract_thingsX_83;
  T153 = CALL2(1,VARREF(YPdefine_method),T154,T156);
  VARSET(Yast_linearizeYextract_thingsX,T153);
  lit_88 = YPPsym((P)"extract!");
  lit_89 = YPPsym((P)"result");
  T157 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_30),LITREF(lit_89)),YPPlist(3,VARREF(YastYLprogramG),VARREF(Yast_linearizeYLtop_level_formG),VARREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_84 = YPmet(FUNCODEREF(fun_extractX_84),LITREF(lit_88),T157,ENVNUL,PNUL,YPfalse);
  T160 = BOUNDP(Yast_linearizeYextractX);
  if (T160 != YPfalse) {
    T159 = VARREF(Yast_linearizeYextractX);
  } else {
    T159 = YPfalse;
  }
  T161 = fun_extractX_84;
  T158 = CALL2(1,VARREF(YPdefine_method),T159,T161);
  VARSET(Yast_linearizeYextractX,T158);
  lit_90 = YPPsym((P)"quotation");
  T162 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_30),LITREF(lit_89)),YPPlist(3,VARREF(YastYLconstantG),VARREF(Yast_linearizeYLtop_level_formG),VARREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_85 = YPmet(FUNCODEREF(fun_extractX_85),LITREF(lit_88),T162,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(Yast_linearizeYextractX);
  if (T165 != YPfalse) {
    T164 = VARREF(Yast_linearizeYextractX);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_extractX_85;
  T163 = CALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(Yast_linearizeYextractX,T163);
  T167 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_30),LITREF(lit_89)),YPPlist(3,VARREF(YastYLraw_constantG),VARREF(Yast_linearizeYLtop_level_formG),VARREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_86 = YPmet(FUNCODEREF(fun_extractX_86),LITREF(lit_88),T167,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(Yast_linearizeYextractX);
  if (T170 != YPfalse) {
    T169 = VARREF(Yast_linearizeYextractX);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_extractX_86;
  T168 = CALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(Yast_linearizeYextractX,T168);
  lit_91 = YPPsym((P)"binding");
  T173 = YPsig(YPPlist(1,LITREF(lit_91)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_30),LITREF(lit_89)),YPPlist(3,VARREF(YastYLast_methodG),VARREF(Yast_linearizeYLtop_level_formG),VARREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_88 = YPmet(FUNCODEREF(fun_extractX_88),LITREF(lit_88),T172,ENVNUL,PNUL,YPfalse);
  T176 = BOUNDP(Yast_linearizeYextractX);
  if (T176 != YPfalse) {
    T175 = VARREF(Yast_linearizeYextractX);
  } else {
    T175 = YPfalse;
  }
  T177 = fun_extractX_88;
  T174 = CALL2(1,VARREF(YPdefine_method),T175,T177);
  VARSET(Yast_linearizeYextractX,T174);
  T178 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_30),LITREF(lit_89)),YPPlist(3,VARREF(YastYLast_primitive_definitionG),VARREF(Yast_linearizeYLtop_level_formG),VARREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_89 = YPmet(FUNCODEREF(fun_extractX_89),LITREF(lit_88),T178,ENVNUL,PNUL,YPfalse);
  T181 = BOUNDP(Yast_linearizeYextractX);
  if (T181 != YPfalse) {
    T180 = VARREF(Yast_linearizeYextractX);
  } else {
    T180 = YPfalse;
  }
  T182 = fun_extractX_89;
  T179 = CALL2(1,VARREF(YPdefine_method),T180,T182);
  VARSET(Yast_linearizeYextractX,T179);
  lit_92 = YPPsym((P)"adjoin-definition!");
  T183 = YPsig(YPPlist(3,LITREF(lit_30),LITREF(lit_89),LITREF(lit_8)),YPPlist(3,VARREF(Yast_linearizeYLtop_level_formG),VARREF(Yast_linearizeYLflattened_programG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_adjoin_definitionX_90 = YPmet(FUNCODEREF(fun_adjoin_definitionX_90),LITREF(lit_92),T183,ENVNUL,PNUL,YPfalse);
  T186 = BOUNDP(Yast_linearizeYadjoin_definitionX);
  if (T186 != YPfalse) {
    T185 = VARREF(Yast_linearizeYadjoin_definitionX);
  } else {
    T185 = YPfalse;
  }
  T187 = fun_adjoin_definitionX_90;
  T184 = CALL2(1,VARREF(YPdefine_method),T185,T187);
  VARSET(Yast_linearizeYadjoin_definitionX,T184);
  lit_93 = YPPsym((P)"split-program");
  lit_94 = YPPsym((P)"max-count");
  T188 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_94)),YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_split_program_91 = YPmet(FUNCODEREF(fun_split_program_91),LITREF(lit_93),T188,ENVNUL,PNUL,YPfalse);
  T191 = BOUNDP(Yast_linearizeYsplit_program);
  if (T191 != YPfalse) {
    T190 = VARREF(Yast_linearizeYsplit_program);
  } else {
    T190 = YPfalse;
  }
  T192 = fun_split_program_91;
  T189 = CALL2(1,VARREF(YPdefine_method),T190,T192);
  VARSET(Yast_linearizeYsplit_program,T189);
  lit_95 = YPPsym((P)"forms");
  lit_96 = YPPsym((P)"es");
  lit_97 = YPPsym((P)"count");
  T195 = YPsig(YPPlist(3,LITREF(lit_33),LITREF(lit_96),LITREF(lit_97)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_inner_92 = YPmet(FUNCODEREF(fun_inner_92),LITREF(lit_83),T195,ENVNUL,PNUL,YPfalse);
  T194 = YPsig(YPPlist(2,LITREF(lit_95),LITREF(lit_81)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_93 = YPmet(FUNCODEREF(fun_loop_93),LITREF(lit_32),T194,ENVNUL,PNUL,YPfalse);
  T193 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_94)),YPPlist(2,VARREF(YastYLsequentialG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_split_program_94 = YPmet(FUNCODEREF(fun_split_program_94),LITREF(lit_93),T193,ENVNUL,PNUL,YPfalse);
  T198 = BOUNDP(Yast_linearizeYsplit_program);
  if (T198 != YPfalse) {
    T197 = VARREF(Yast_linearizeYsplit_program);
  } else {
    T197 = YPfalse;
  }
  T199 = fun_split_program_94;
  T196 = CALL2(1,VARREF(YPdefine_method),T197,T199);
  VARSET(Yast_linearizeYsplit_program,T196);
  lit_98 = YPPsym((P)"closurize-main!");
  lit_99 = YPPsym((P)"calls");
  lit_100 = YPPsym((P)"defns");
  lit_101 = YPsb((P)"---main-");
  lit_102 = YPsb((P)"---");
  lit_103 = YPPsym((P)"predefined");
  T201 = YPsig(YPPlist(4,LITREF(lit_99),LITREF(lit_100),LITREF(lit_58),LITREF(lit_95)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_loop_95 = YPmet(FUNCODEREF(fun_loop_95),LITREF(lit_32),T201,ENVNUL,PNUL,YPfalse);
  T200 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_82),LITREF(lit_94)),YPPlist(3,VARREF(Yast_linearizeYLflattened_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(Yast_linearizeYLflattened_programG),Ynil);
  fun_closurize_mainX_96 = YPmet(FUNCODEREF(fun_closurize_mainX_96),LITREF(lit_98),T200,ENVNUL,PNUL,YPfalse);
  T204 = BOUNDP(Yast_linearizeYclosurize_mainX);
  if (T204 != YPfalse) {
    T203 = VARREF(Yast_linearizeYclosurize_mainX);
  } else {
    T203 = YPfalse;
  }
  T205 = fun_closurize_mainX_96;
  T202 = CALL2(1,VARREF(YPdefine_method),T203,T205);
  VARSET(Yast_linearizeYclosurize_mainX,T202);
  lit_104 = YPPsym((P)"gather-temporaries!");
  lit_105 = YPPsym((P)"def");
  T207 = YPsig(YPPlist(1,LITREF(lit_105)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPmet(FUNCODEREF(fun_97),YPfalse,T207,ENVNUL,PNUL,YPfalse);
  T206 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_gather_temporariesX_98 = YPmet(FUNCODEREF(fun_gather_temporariesX_98),LITREF(lit_104),T206,ENVNUL,PNUL,YPfalse);
  T210 = BOUNDP(Yast_linearizeYgather_temporariesX);
  if (T210 != YPfalse) {
    T209 = VARREF(Yast_linearizeYgather_temporariesX);
  } else {
    T209 = YPfalse;
  }
  T211 = fun_gather_temporariesX_98;
  T208 = CALL2(1,VARREF(YPdefine_method),T209,T211);
  VARSET(Yast_linearizeYgather_temporariesX,T208);
  lit_106 = YPPsym((P)"collect-temporaries!");
  T212 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_82)),YPPlist(3,VARREF(YastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_99 = YPmet(FUNCODEREF(fun_collect_temporariesX_99),LITREF(lit_106),T212,ENVNUL,PNUL,YPfalse);
  T215 = BOUNDP(Yast_linearizeYcollect_temporariesX);
  if (T215 != YPfalse) {
    T214 = VARREF(Yast_linearizeYcollect_temporariesX);
  } else {
    T214 = YPfalse;
  }
  T216 = fun_collect_temporariesX_99;
  T213 = CALL2(1,VARREF(YPdefine_method),T214,T216);
  VARSET(Yast_linearizeYcollect_temporariesX,T213);
  T217 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_82)),YPPlist(3,VARREF(YastYLlocal_referenceG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_100 = YPmet(FUNCODEREF(fun_collect_temporariesX_100),LITREF(lit_106),T217,ENVNUL,PNUL,YPfalse);
  T220 = BOUNDP(Yast_linearizeYcollect_temporariesX);
  if (T220 != YPfalse) {
    T219 = VARREF(Yast_linearizeYcollect_temporariesX);
  } else {
    T219 = YPfalse;
  }
  T221 = fun_collect_temporariesX_100;
  T218 = CALL2(1,VARREF(YPdefine_method),T219,T221);
  VARSET(Yast_linearizeYcollect_temporariesX,T218);
  T222 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_82)),YPPlist(3,VARREF(YastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_101 = YPmet(FUNCODEREF(fun_collect_temporariesX_101),LITREF(lit_106),T222,ENVNUL,PNUL,YPfalse);
  T225 = BOUNDP(Yast_linearizeYcollect_temporariesX);
  if (T225 != YPfalse) {
    T224 = VARREF(Yast_linearizeYcollect_temporariesX);
  } else {
    T224 = YPfalse;
  }
  T226 = fun_collect_temporariesX_101;
  T223 = CALL2(1,VARREF(YPdefine_method),T224,T226);
  VARSET(Yast_linearizeYcollect_temporariesX,T223);
  T227 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_82)),YPPlist(3,VARREF(YastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_102 = YPmet(FUNCODEREF(fun_collect_temporariesX_102),LITREF(lit_106),T227,ENVNUL,PNUL,YPfalse);
  T230 = BOUNDP(Yast_linearizeYcollect_temporariesX);
  if (T230 != YPfalse) {
    T229 = VARREF(Yast_linearizeYcollect_temporariesX);
  } else {
    T229 = YPfalse;
  }
  T231 = fun_collect_temporariesX_102;
  T228 = CALL2(1,VARREF(YPdefine_method),T229,T231);
  VARSET(Yast_linearizeYcollect_temporariesX,T228);
  lit_107 = YPPsym((P)"adjoin-temporary-variables!");
  lit_108 = YPPsym((P)"new-bindings");
  lit_109 = YPPsym((P)"adjoin");
  lit_110 = YPPsym((P)"temps");
  T233 = YPsig(YPPlist(2,LITREF(lit_110),LITREF(lit_31)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_adjoin_103 = YPmet(FUNCODEREF(fun_adjoin_103),LITREF(lit_109),T233,ENVNUL,PNUL,YPfalse);
  T232 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_108)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_adjoin_temporary_variablesX_104 = YPmet(FUNCODEREF(fun_adjoin_temporary_variablesX_104),LITREF(lit_107),T232,ENVNUL,PNUL,YPfalse);
  T236 = BOUNDP(Yast_linearizeYadjoin_temporary_variablesX);
  if (T236 != YPfalse) {
    T235 = VARREF(Yast_linearizeYadjoin_temporary_variablesX);
  } else {
    T235 = YPfalse;
  }
  T237 = fun_adjoin_temporary_variablesX_104;
  T234 = CALL2(1,VARREF(YPdefine_method),T235,T237);
  VARSET(Yast_linearizeYadjoin_temporary_variablesX,T234);
  lit_111 = YPPsym((P)"<renamed-local-binding>");
  T239 = (P)YPpair(VARREF(YastYLlocal_bindingG),Ynil);
  T238 = CALL2(1,VARREF(Yfab_class),LITREF(lit_111),T239);
  VARSET(Yast_linearizeYLrenamed_local_bindingG,T238);
  lit_112 = YPPsym((P)"binding-index");
  T240 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_index_105 = YPmet(FUNCODEREF(fun_binding_index_105),LITREF(lit_112),T240,ENVNUL,PNUL,YPfalse);
  T243 = BOUNDP(YastYbinding_index);
  if (T243 != YPfalse) {
    T242 = VARREF(YastYbinding_index);
  } else {
    T242 = YPfalse;
  }
  T244 = fun_binding_index_105;
  T241 = CALL2(1,VARREF(YPdefine_method),T242,T244);
  VARSET(YastYbinding_index,T241);
  lit_113 = YPPsym((P)"binding-index-setter");
  T245 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_index_setter_106 = YPmet(FUNCODEREF(fun_binding_index_setter_106),LITREF(lit_113),T245,ENVNUL,PNUL,YPfalse);
  T248 = BOUNDP(YastYbinding_index_setter);
  if (T248 != YPfalse) {
    T247 = VARREF(YastYbinding_index_setter);
  } else {
    T247 = YPfalse;
  }
  T249 = fun_binding_index_setter_106;
  T246 = CALL2(1,VARREF(YPdefine_method),T247,T249);
  VARSET(YastYbinding_index_setter,T246);
  CALLN(1,VARREF(YPprop),5,VARREF(Yast_linearizeYLrenamed_local_bindingG),VARREF(YastYbinding_index),VARREF(YastYbinding_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  VARSET(Yast_linearizeYTrenaming_bindings_counterT,YPint((P)0));
  lit_114 = YPPsym((P)"new-renamed-binding");
  T250 = YPsig(YPPlist(1,LITREF(lit_91)),YPPlist(1,VARREF(YastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_new_renamed_binding_107 = YPmet(FUNCODEREF(fun_new_renamed_binding_107),LITREF(lit_114),T250,ENVNUL,PNUL,YPfalse);
  T253 = BOUNDP(Yast_linearizeYnew_renamed_binding);
  if (T253 != YPfalse) {
    T252 = VARREF(Yast_linearizeYnew_renamed_binding);
  } else {
    T252 = YPfalse;
  }
  T254 = fun_new_renamed_binding_107;
  T251 = CALL2(1,VARREF(YPdefine_method),T252,T254);
  VARSET(Yast_linearizeYnew_renamed_binding,T251);
  VARSET(Yast_linearizeYTregister_passiveQT,YPfalse);
  lit_115 = YPPsym((P)"register-allocate!");
  lit_116 = YPPsym((P)"register-passive?");
  T258 = YPsig(YPPlist(1,LITREF(lit_105)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_108 = YPmet(FUNCODEREF(fun_108),YPfalse,T258,ENVNUL,PNUL,YPfalse);
  T257 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_109 = YPmet(FUNCODEREF(fun_109),YPfalse,T257,ENVNUL,PNUL,YPfalse);
  T256 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_110 = YPmet(FUNCODEREF(fun_110),YPfalse,T256,ENVNUL,PNUL,YPfalse);
  T255 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_116)),YPPlist(2,VARREF(YastYLprogramG),VARREF(YLlogG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_register_allocateX_111 = YPmet(FUNCODEREF(fun_register_allocateX_111),LITREF(lit_115),T255,ENVNUL,PNUL,YPfalse);
  T261 = BOUNDP(Yast_linearizeYregister_allocateX);
  if (T261 != YPfalse) {
    T260 = VARREF(Yast_linearizeYregister_allocateX);
  } else {
    T260 = YPfalse;
  }
  T262 = fun_register_allocateX_111;
  T259 = CALL2(1,VARREF(YPdefine_method),T260,T262);
  VARSET(Yast_linearizeYregister_allocateX,T259);
  lit_117 = YPPsym((P)"allocate-register");
  lit_118 = YPPsym((P)"val?");
  T263 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(YastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_allocate_register_112 = YPmet(FUNCODEREF(fun_allocate_register_112),LITREF(lit_117),T263,ENVNUL,PNUL,YPfalse);
  T266 = BOUNDP(Yast_linearizeYallocate_register);
  if (T266 != YPfalse) {
    T265 = VARREF(Yast_linearizeYallocate_register);
  } else {
    T265 = YPfalse;
  }
  T267 = fun_allocate_register_112;
  T264 = CALL2(1,VARREF(YPdefine_method),T265,T267);
  VARSET(Yast_linearizeYallocate_register,T264);
  lit_119 = YPPsym((P)"collect-registers!");
  T268 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(YastYLcomputed_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_113 = YPmet(FUNCODEREF(fun_collect_registersX_113),LITREF(lit_119),T268,ENVNUL,PNUL,YPfalse);
  T271 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T271 != YPfalse) {
    T270 = VARREF(Yast_linearizeYcollect_registersX);
  } else {
    T270 = YPfalse;
  }
  T272 = fun_collect_registersX_113;
  T269 = CALL2(1,VARREF(YPdefine_method),T270,T272);
  VARSET(Yast_linearizeYcollect_registersX,T269);
  T277 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T276 = fun_loop_114 = YPmet(FUNCODEREF(fun_loop_114),LITREF(lit_32),T277,ENVNUL,PNUL,YPfalse);
  T275 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(YastYLsequentialG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T274 = fun_collect_registersX_115 = YPmet(FUNCODEREF(fun_collect_registersX_115),LITREF(lit_119),T275,ENVNUL,PNUL,YPfalse);
  T281 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T281 != YPfalse) {
    T280 = VARREF(Yast_linearizeYcollect_registersX);
  } else {
    T280 = YPfalse;
  }
  T282 = fun_collect_registersX_115;
  T279 = CALL2(1,VARREF(YPdefine_method),T280,T282);
  T278 = VARSET(Yast_linearizeYcollect_registersX,T279);
  T273 = T278;
  return T273;
}

P Yast_linearizeY___main_2___() {
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
loop:
  T0 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(YastYLpassive_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_116 = YPmet(FUNCODEREF(fun_collect_registersX_116),LITREF(lit_119),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T3 != YPfalse) {
    T2 = VARREF(Yast_linearizeYcollect_registersX);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_collect_registersX_116;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(Yast_linearizeYcollect_registersX,T1);
  T6 = YPsig(YPPlist(1,LITREF(lit_105)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_117 = YPmet(FUNCODEREF(fun_117),YPfalse,T6,ENVNUL,PNUL,YPfalse);
  T5 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(Yast_linearizeYLtop_level_formG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_118 = YPmet(FUNCODEREF(fun_collect_registersX_118),LITREF(lit_119),T5,ENVNUL,PNUL,YPfalse);
  T9 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T9 != YPfalse) {
    T8 = VARREF(Yast_linearizeYcollect_registersX);
  } else {
    T8 = YPfalse;
  }
  T10 = fun_collect_registersX_118;
  T7 = CALL2(1,VARREF(YPdefine_method),T8,T10);
  VARSET(Yast_linearizeYcollect_registersX,T7);
  T11 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(YastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_119 = YPmet(FUNCODEREF(fun_collect_registersX_119),LITREF(lit_119),T11,ENVNUL,PNUL,YPfalse);
  T14 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T14 != YPfalse) {
    T13 = VARREF(Yast_linearizeYcollect_registersX);
  } else {
    T13 = YPfalse;
  }
  T15 = fun_collect_registersX_119;
  T12 = CALL2(1,VARREF(YPdefine_method),T13,T15);
  VARSET(Yast_linearizeYcollect_registersX,T12);
  T16 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(YastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_120 = YPmet(FUNCODEREF(fun_collect_registersX_120),LITREF(lit_119),T16,ENVNUL,PNUL,YPfalse);
  T19 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T19 != YPfalse) {
    T18 = VARREF(Yast_linearizeYcollect_registersX);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_collect_registersX_120;
  T17 = CALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(Yast_linearizeYcollect_registersX,T17);
  lit_120 = YPPsym((P)"ast-contains-fun?");
  T21 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_ast_contains_funQ_121 = YPmet(FUNCODEREF(fun_ast_contains_funQ_121),LITREF(lit_120),T21,ENVNUL,PNUL,YPfalse);
  T24 = BOUNDP(Yast_linearizeYast_contains_funQ);
  if (T24 != YPfalse) {
    T23 = VARREF(Yast_linearizeYast_contains_funQ);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_ast_contains_funQ_121;
  T22 = CALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(Yast_linearizeYast_contains_funQ,T22);
  lit_121 = YPPsym((P)"return");
  lit_122 = YPPsym((P)"walk");
  T28 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_walk_122 = YPmet(FUNCODEREF(fun_walk_122),LITREF(lit_122),T28,ENVNUL,PNUL,YPfalse);
  T27 = YPsig(YPPlist(1,LITREF(lit_121)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_123 = YPmet(FUNCODEREF(fun_123),YPfalse,T27,ENVNUL,PNUL,YPfalse);
  T26 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_ast_contains_funQ_124 = YPmet(FUNCODEREF(fun_ast_contains_funQ_124),LITREF(lit_120),T26,ENVNUL,PNUL,YPfalse);
  T31 = BOUNDP(Yast_linearizeYast_contains_funQ);
  if (T31 != YPfalse) {
    T30 = VARREF(Yast_linearizeYast_contains_funQ);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_ast_contains_funQ_124;
  T29 = CALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(Yast_linearizeYast_contains_funQ,T29);
  T33 = YPfalse;
  return T33;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_runtime;
extern MODULE_INFO module_info_ast;
extern MODULE_INFO module_info_protoStypes;
extern MODULE_INFO module_info_protoSmath;
extern MODULE_INFO module_info_protoScollections;
extern MODULE_INFO module_info_protoScollectionsScollection;
extern MODULE_INFO module_info_protoScollectionsStable;
extern MODULE_INFO module_info_protoScollectionsSassoc;
extern MODULE_INFO module_info_protoScollectionsSsequence;
extern MODULE_INFO module_info_protoScollectionsSstring;
extern MODULE_INFO module_info_protoScollectionsSbuffer;
extern MODULE_INFO module_info_protoScollectionsSrange;
extern MODULE_INFO module_info_protoScollectionsSlist;
extern MODULE_INFO module_info_protoSmagnitudes;
extern MODULE_INFO module_info_protoScollectionsSmap;
extern MODULE_INFO module_info_protoScollectionsSstep;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {&module_info_macros},
  {&module_info_runtime},
  {&module_info_ast},
  {&module_info_protoStypes},
  {&module_info_protoSmath},
  {&module_info_protoScollections},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"<num>", &module_info_boot, "<num>"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"key-type", &module_info_protoScollectionsScollection, "key-type"},
  {"prop-getter", &module_info_boot, "prop-getter"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"function-free", &module_info_ast, "function-free"},
  {"case-insensitive-string-equal", &module_info_protoScollectionsStable, "case-insensitive-string-equal"},
  {"case-insensitive-string-hash", &module_info_protoScollectionsStable, "case-insensitive-string-hash"},
  {"assocs-test-setter", &module_info_protoScollectionsSassoc, "assocs-test-setter"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"and", &module_info_macros, "and"},
  {"del-dups", &module_info_protoScollectionsSsequence, "del-dups"},
  {"binding-global-box", &module_info_ast, "binding-global-box"},
  {"fin?", &module_info_protoScollectionsScollection, "fin?"},
  {"%unlink-stack", &module_info_boot, "%unlink-stack"},
  {"unexec", &module_info_boot, "unexec"},
  {"type-error", &module_info_boot, "type-error"},
  {"+", &module_info_protoSmath, "+"},
  {"%fun-reg", &module_info_boot, "%fun-reg"},
  {"environment-module", &module_info_ast, "environment-module"},
  {"class-direct-props", &module_info_boot, "class-direct-props"},
  {"gensym", &module_info_macros, "gensym"},
  {"vec", &module_info_boot, "vec"},
  {"or", &module_info_macros, "or"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"below", &module_info_protoScollectionsSsequence, "below"},
  {"signature-arity-setter", &module_info_ast, "signature-arity-setter"},
  {"<constant>", &module_info_ast, "<constant>"},
  {"install-initial-bindings", &module_info_ast, "install-initial-bindings"},
  {"fix-let-body-setter", &module_info_ast, "fix-let-body-setter"},
  {"<met>", &module_info_boot, "<met>"},
  {"monitor-test", &module_info_ast, "monitor-test"},
  {"contagious-call", &module_info_protoSmath, "contagious-call"},
  {"module-name", &module_info_ast, "module-name"},
  {"<monitor>", &module_info_ast, "<monitor>"},
  {"*print-base*", &module_info_protoScollectionsSstring, "*print-base*"},
  {"loc-val-setter", &module_info_runtime, "loc-val-setter"},
  {"<ast-macro-definition>", &module_info_ast, "<ast-macro-definition>"},
  {"mif", &module_info_boot, "mif"},
  {"signature-value-setter", &module_info_ast, "signature-value-setter"},
  {"global-box-value-setter", &module_info_ast, "global-box-value-setter"},
  {"use/export", &module_info_boot, "use/export"},
  {"zero?", &module_info_protoSmath, "zero?"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"@olen", &module_info_boot, "@olen"},
  {"until", &module_info_macros, "until"},
  {"application-known?", &module_info_ast, "application-known?"},
  {"prop-init", &module_info_boot, "prop-init"},
  {"fix-let-bindings-setter", &module_info_ast, "fix-let-bindings-setter"},
  {"binding-info", &module_info_ast, "binding-info"},
  {"format-to-string", &module_info_runtime, "format-to-string"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"probe-module", &module_info_ast, "probe-module"},
  {"round/", &module_info_protoSmath, "round/"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"sin", &module_info_protoSmath, "sin"},
  {"t+", &module_info_protoStypes, "t+"},
  {"eof-object", &module_info_protoSmath, "eof-object"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"enum", &module_info_protoScollectionsScollection, "enum"},
  {"var-name", &module_info_macros, "var-name"},
  {"global-box-value", &module_info_ast, "global-box-value"},
  {"class-descendents", &module_info_boot, "class-descendents"},
  {"elt-default", &module_info_protoScollectionsScollection, "elt-default"},
  {"buf", &module_info_protoScollectionsSbuffer, "buf"},
  {"map2", &module_info_protoScollectionsScollection, "map2"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"from", &module_info_protoScollectionsSrange, "from"},
  {"gen-refs-setter", &module_info_boot, "gen-refs-setter"},
  {"env-object-name", &module_info_ast, "env-object-name"},
  {"binding-locative", &module_info_ast, "binding-locative"},
  {"even?", &module_info_protoSmath, "even?"},
  {"%fcos", &module_info_boot, "%fcos"},
  {"monitor-main-thunk", &module_info_ast, "monitor-main-thunk"},
  {"cond", &module_info_macros, "cond"},
  {"%loc-val-setter", &module_info_boot, "%loc-val-setter"},
  {"app", &module_info_macros, "app"},
  {"fab-g2c-module", &module_info_ast, "fab-g2c-module"},
  {"isa", &module_info_boot, "isa"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"@+", &module_info_boot, "@+"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"rem", &module_info_protoSmath, "rem"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"del-vals", &module_info_protoScollectionsSsequence, "del-vals"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"dss", &module_info_boot, "dss"},
  {"prop-value-setter", &module_info_boot, "prop-value-setter"},
  {"<alternative>", &module_info_ast, "<alternative>"},
  {"%lu", &module_info_boot, "%lu"},
  {"log", &module_info_protoSmath, "log"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"gen-refs", &module_info_boot, "gen-refs"},
  {"exported", &module_info_macros, "exported"},
  {"not", &module_info_boot, "not"},
  {"-", &module_info_protoSmath, "-"},
  {"incf", &module_info_macros, "incf"},
  {"do-keyed", &module_info_protoScollectionsScollection, "do-keyed"},
  {"module-name-to-relpath", &module_info_ast, "module-name-to-relpath"},
  {"%get", &module_info_boot, "%get"},
  {"%i+", &module_info_boot, "%i+"},
  {"sub", &module_info_protoScollectionsSsequence, "sub"},
  {"monitor-type", &module_info_ast, "monitor-type"},
  {"assq", &module_info_protoScollectionsSlist, "assq"},
  {"%f*", &module_info_boot, "%f*"},
  {"<str-tab>", &module_info_protoScollectionsStable, "<str-tab>"},
  {"objectify-signature", &module_info_ast, "objectify-signature"},
  {"dup", &module_info_protoScollectionsScollection, "dup"},
  {"monitor-info", &module_info_ast, "monitor-info"},
  {"%iu", &module_info_boot, "%iu"},
  {"elt-type", &module_info_protoScollectionsScollection, "elt-type"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"range-check?", &module_info_protoScollectionsSsequence, "range-check?"},
  {"<fix-let>", &module_info_ast, "<fix-let>"},
  {"tanh", &module_info_protoSmath, "tanh"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"%gen-src", &module_info_boot, "%gen-src"},
  {"<binding>", &module_info_ast, "<binding>"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"pos", &module_info_protoScollectionsSsequence, "pos"},
  {"function-registers-setter", &module_info_ast, "function-registers-setter"},
  {"fold", &module_info_protoScollectionsScollection, "fold"},
  {"&", &module_info_protoSmath, "&"},
  {"tab-shrink-threshold", &module_info_protoScollectionsStable, "tab-shrink-threshold"},
  {"function-index", &module_info_ast, "function-index"},
  {"%im", &module_info_boot, "%im"},
  {"elts", &module_info_protoScollectionsScollection, "elts"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"%fsinh", &module_info_boot, "%fsinh"},
  {"%met-code", &module_info_boot, "%met-code"},
  {"report-undefined-global-bindings", &module_info_ast, "report-undefined-global-bindings"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"@lst", &module_info_boot, "@lst"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"assignment-form-setter", &module_info_ast, "assignment-form-setter"},
  {"function-signature-setter", &module_info_ast, "function-signature-setter"},
  {"rep", &module_info_boot, "rep"},
  {"opf", &module_info_macros, "opf"},
  {"signature-bindings", &module_info_ast, "signature-bindings"},
  {"~==", &module_info_protoSmath, "~=="},
  {"<fun>", &module_info_boot, "<fun>"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"function-value", &module_info_ast, "function-value"},
  {"build-condition-for-handler-interactively", &module_info_runtime, "build-condition-for-handler-interactively"},
  {"module-binding", &module_info_ast, "module-binding"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"set-module-environments", &module_info_ast, "set-module-environments"},
  {"%os-val-setter", &module_info_boot, "%os-val-setter"},
  {"map", &module_info_macros, "map"},
  {"trunc/", &module_info_protoSmath, "trunc/"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"function-temporaries-setter", &module_info_ast, "function-temporaries-setter"},
  {"binding-name", &module_info_ast, "binding-name"},
  {"environment-bindings", &module_info_ast, "environment-bindings"},
  {"<program>", &module_info_ast, "<program>"},
  {"~=", &module_info_protoSmath, "~="},
  {"binding-type", &module_info_ast, "binding-type"},
  {"binding-kind", &module_info_ast, "binding-kind"},
  {"t?", &module_info_protoStypes, "t?"},
  {"all2?", &module_info_protoStypes, "all2?"},
  {"reject", &module_info_protoScollectionsSsequence, "reject"},
  {"match", &module_info_macros, "match"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"range", &module_info_protoScollectionsSrange, "range"},
  {"assert", &module_info_macros, "assert"},
  {"sig-val", &module_info_boot, "sig-val"},
  {"objectify-quotation", &module_info_ast, "objectify-quotation"},
  {"prop-bound?", &module_info_boot, "prop-bound?"},
  {"module-target-environment", &module_info_ast, "module-target-environment"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"signature-names-setter", &module_info_ast, "signature-names-setter"},
  {"tan", &module_info_protoSmath, "tan"},
  {"<log>", &module_info_boot, "<log>"},
  {"range-by", &module_info_protoScollectionsSrange, "range-by"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"neg", &module_info_protoSmath, "neg"},
  {"|", &module_info_protoSmath, "|"},
  {"sqrt", &module_info_protoSmath, "sqrt"},
  {"type-object", &module_info_boot, "type-object"},
  {"%open-out-file", &module_info_boot, "%open-out-file"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"%c<", &module_info_boot, "%c<"},
  {"%ftan", &module_info_boot, "%ftan"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"load-module", &module_info_ast, "load-module"},
  {"fix-let-bindings", &module_info_ast, "fix-let-bindings"},
  {"all?", &module_info_protoScollectionsScollection, "all?"},
  {"%%sym", &module_info_boot, "%%sym"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"*", &module_info_protoSmath, "*"},
  {"renew", &module_info_macros, "renew"},
  {"bound?-reference", &module_info_ast, "bound?-reference"},
  {"round", &module_info_protoSmath, "round"},
  {"decf", &module_info_macros, "decf"},
  {"%raw", &module_info_boot, "%raw"},
  {"logn", &module_info_protoSmath, "logn"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"as-log", &module_info_protoSmath, "as-log"},
  {"program-type", &module_info_ast, "program-type"},
  {"%ready?", &module_info_boot, "%ready?"},
  {"invoke-handler-interactively", &module_info_runtime, "invoke-handler-interactively"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"%f+", &module_info_boot, "%f+"},
  {"@len", &module_info_boot, "@len"},
  {"1+", &module_info_protoSmath, "1+"},
  {"pow", &module_info_protoSmath, "pow"},
  {"range-check", &module_info_protoScollectionsSsequence, "range-check"},
  {"%vec", &module_info_boot, "%vec"},
  {"%facos", &module_info_boot, "%facos"},
  {"%slen", &module_info_boot, "%slen"},
  {"reference-binding", &module_info_ast, "reference-binding"},
  {"find", &module_info_protoScollectionsScollection, "find"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"program-type-setter", &module_info_ast, "program-type-setter"},
  {"unchecked-runtime-environment", &module_info_ast, "unchecked-runtime-environment"},
  {"digit?", &module_info_protoSmath, "digit?"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"prop-owner", &module_info_boot, "prop-owner"},
  {"tab-gc-state", &module_info_protoScollectionsStable, "tab-gc-state"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"<bot>", &module_info_protoSmath, "<bot>"},
  {"to-str", &module_info_protoSmath, "to-str"},
  {"fab-setter-name", &module_info_macros, "fab-setter-name"},
  {"%ft", &module_info_boot, "%ft"},
  {"t<", &module_info_protoStypes, "t<"},
  {"function-free-setter", &module_info_ast, "function-free-setter"},
  {"%untag", &module_info_boot, "%untag"},
  {"object-class", &module_info_boot, "object-class"},
  {"floor/", &module_info_protoSmath, "floor/"},
  {"push", &module_info_protoScollectionsSlist, "push"},
  {"program-register", &module_info_ast, "program-register"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"reference-frame-number", &module_info_ast, "reference-frame-number"},
  {"atan", &module_info_protoSmath, "atan"},
  {"signature-arity", &module_info_ast, "signature-arity"},
  {"%fsin", &module_info_boot, "%fsin"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"binding-mutable?", &module_info_ast, "binding-mutable?"},
  {"try", &module_info_boot, "try"},
  {"*report-prop-unbound-errors?*", &module_info_boot, "*report-prop-unbound-errors?*"},
  {"cat2", &module_info_protoScollectionsSsequence, "cat2"},
  {"pick", &module_info_protoScollectionsSsequence, "pick"},
  {"prop-value", &module_info_boot, "prop-value"},
  {"<restart>", &module_info_runtime, "<restart>"},
  {"collected", &module_info_macros, "collected"},
  {"tab-growth-threshold", &module_info_protoScollectionsStable, "tab-growth-threshold"},
  {"<compile-time>", &module_info_ast, "<compile-time>"},
  {"%i-", &module_info_boot, "%i-"},
  {"dv", &module_info_boot, "dv"},
  {"<list>", &module_info_protoScollectionsSlist, "<list>"},
  {"match-atom", &module_info_macros, "match-atom"},
  {">", &module_info_protoSmagnitudes, ">"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"char->ascii", &module_info_protoSmath, "char->ascii"},
  {"<bound?>", &module_info_ast, "<bound?>"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"<any>", &module_info_boot, "<any>"},
  {"prop-type", &module_info_boot, "prop-type"},
  {"program-register-setter", &module_info_ast, "program-register-setter"},
  {"elt-setter", &module_info_protoScollectionsScollection, "elt-setter"},
  {"seq", &module_info_boot, "seq"},
  {"read", &module_info_runtime, "read"},
  {"<unwind-protect>", &module_info_ast, "<unwind-protect>"},
  {"var-type", &module_info_macros, "var-type"},
  {"<locals>", &module_info_ast, "<locals>"},
  {"%i<", &module_info_boot, "%i<"},
  {"<global-box>", &module_info_ast, "<global-box>"},
  {"fix-let-types-setter", &module_info_ast, "fix-let-types-setter"},
  {"%selt", &module_info_boot, "%selt"},
  {"any?", &module_info_protoStypes, "any?"},
  {"%fatan", &module_info_boot, "%fatan"},
  {"binding-value", &module_info_ast, "binding-value"},
  {"cat!", &module_info_protoScollectionsSsequence, "cat!"},
  {"pushf", &module_info_macros, "pushf"},
  {"binding-index", &module_info_ast, "binding-index"},
  {"class-props", &module_info_boot, "class-props"},
  {"zap", &module_info_protoScollectionsScollection, "zap"},
  {"locals-functions", &module_info_ast, "locals-functions"},
  {"<module-loader>", &module_info_ast, "<module-loader>"},
  {"find-binding", &module_info_ast, "find-binding"},
  {"<static-global-environment>", &module_info_ast, "<static-global-environment>"},
  {"signature-specs-setter", &module_info_ast, "signature-specs-setter"},
  {"assqn", &module_info_protoScollectionsSlist, "assqn"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"reference-called-function?", &module_info_ast, "reference-called-function?"},
  {"address-of", &module_info_protoSmath, "address-of"},
  {"<definition>", &module_info_ast, "<definition>"},
  {"fab-map", &module_info_protoScollectionsSmap, "fab-map"},
  {"t=", &module_info_protoStypes, "t="},
  {"error", &module_info_boot, "error"},
  {"free-environment", &module_info_ast, "free-environment"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"ddv", &module_info_macros, "ddv"},
  {">>>", &module_info_protoSmath, ">>>"},
  {"%cb", &module_info_boot, "%cb"},
  {"<", &module_info_protoSmagnitudes, "<"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"<global-reference>", &module_info_ast, "<global-reference>"},
  {"tab-test", &module_info_protoScollectionsStable, "tab-test"},
  {"application-binding", &module_info_ast, "application-binding"},
  {"%force-out", &module_info_boot, "%force-out"},
  {"environment-uses-modules", &module_info_ast, "environment-uses-modules"},
  {"%fsqrt", &module_info_boot, "%fsqrt"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"%prop-unbound-error", &module_info_boot, "%prop-unbound-error"},
  {"num-to-str-base", &module_info_protoScollectionsSstring, "num-to-str-base"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"%iv", &module_info_boot, "%iv"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"locals-body-setter", &module_info_ast, "locals-body-setter"},
  {"do3", &module_info_protoScollectionsScollection, "do3"},
  {"<error>", &module_info_runtime, "<error>"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"locals-bindings-setter", &module_info_ast, "locals-bindings-setter"},
  {"collecting", &module_info_macros, "collecting"},
  {"<application>", &module_info_ast, "<application>"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"len-setter", &module_info_protoScollectionsSbuffer, "len-setter"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"def", &module_info_boot, "def"},
  {"%gen-code", &module_info_boot, "%gen-code"},
  {"%puts", &module_info_boot, "%puts"},
  {"function-nary?", &module_info_ast, "function-nary?"},
  {"%su", &module_info_boot, "%su"},
  {"as-copy", &module_info_protoScollectionsScollection, "as-copy"},
  {"function-self-recursive?-setter", &module_info_ast, "function-self-recursive?-setter"},
  {"<ast-method>", &module_info_ast, "<ast-method>"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"@all2?", &module_info_boot, "@all2?"},
  {"@==", &module_info_boot, "@=="},
  {"<sequential>", &module_info_ast, "<sequential>"},
  {"<ast-function>", &module_info_ast, "<ast-function>"},
  {"def-list", &module_info_ast, "def-list"},
  {"add", &module_info_protoScollectionsScollection, "add"},
  {"quote", &module_info_boot, "quote"},
  {"do-static-global-bindings", &module_info_ast, "do-static-global-bindings"},
  {"%str", &module_info_boot, "%str"},
  {"to-upper", &module_info_protoSmath, "to-upper"},
  {"2nd", &module_info_protoStypes, "2nd"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"=", &module_info_protoSmath, "="},
  {"alpha?", &module_info_protoSmath, "alpha?"},
  {"<ast-primitive>", &module_info_ast, "<ast-primitive>"},
  {"ceil", &module_info_protoSmath, "ceil"},
  {"function-registers", &module_info_ast, "function-registers"},
  {"fix-let-arguments", &module_info_ast, "fix-let-arguments"},
  {"fin", &module_info_boot, "fin"},
  {"<col>", &module_info_boot, "<col>"},
  {"esc", &module_info_boot, "esc"},
  {"<class>", &module_info_boot, "<class>"},
  {"%close-in-port", &module_info_boot, "%close-in-port"},
  {"loc-val", &module_info_runtime, "loc-val"},
  {"key-test", &module_info_protoScollectionsScollection, "key-test"},
  {"<regular-application>", &module_info_ast, "<regular-application>"},
  {"to-lower", &module_info_protoSmath, "to-lower"},
  {"add!", &module_info_protoScollectionsScollection, "add!"},
  {"finds", &module_info_protoScollectionsSsequence, "finds"},
  {"<mag>", &module_info_boot, "<mag>"},
  {"function-source-setter", &module_info_ast, "function-source-setter"},
  {"%i^", &module_info_boot, "%i^"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"module-loader-module-type", &module_info_ast, "module-loader-module-type"},
  {"find-or", &module_info_protoScollectionsScollection, "find-or"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"<bind-exit>", &module_info_ast, "<bind-exit>"},
  {"pos?", &module_info_protoSmath, "pos?"},
  {"%fatan2", &module_info_boot, "%fatan2"},
  {"describe-handler", &module_info_runtime, "describe-handler"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"%i=", &module_info_boot, "%i="},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"function-signature", &module_info_ast, "function-signature"},
  {"function-self-recursive?", &module_info_ast, "function-self-recursive?"},
  {"constant-index", &module_info_ast, "constant-index"},
  {"tab-shrink-threshold-setter", &module_info_protoScollectionsStable, "tab-shrink-threshold-setter"},
  {"def-programs", &module_info_ast, "def-programs"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"function-binding", &module_info_ast, "function-binding"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"<tab>", &module_info_protoScollectionsScollection, "<tab>"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"function-source", &module_info_ast, "function-source"},
  {"<product>", &module_info_protoStypes, "<product>"},
  {"%i?", &module_info_boot, "%i?"},
  {"%snul", &module_info_boot, "%snul"},
  {"dp", &module_info_boot, "dp"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"str", &module_info_protoScollectionsSstring, "str"},
  {"<local-binding>", &module_info_ast, "<local-binding>"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"function-data-refs-setter", &module_info_ast, "function-data-refs-setter"},
  {"ascii-whitespaces", &module_info_protoScollectionsSstring, "ascii-whitespaces"},
  {"binding-inferred-type", &module_info_ast, "binding-inferred-type"},
  {"ast-define-binding", &module_info_ast, "ast-define-binding"},
  {"elt-or", &module_info_protoScollectionsScollection, "elt-or"},
  {"format", &module_info_runtime, "format"},
  {"%ftanh", &module_info_boot, "%ftanh"},
  {"cat", &module_info_macros, "cat"},
  {"for", &module_info_macros, "for"},
  {"%put", &module_info_boot, "%put"},
  {"<local-assignment>", &module_info_ast, "<local-assignment>"},
  {"cosh", &module_info_protoSmath, "cosh"},
  {"signature-nary?-setter", &module_info_ast, "signature-nary?-setter"},
  {"application-function", &module_info_ast, "application-function"},
  {"function-temporaries", &module_info_ast, "function-temporaries"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"binding-inferred-type-setter", &module_info_ast, "binding-inferred-type-setter"},
  {"del", &module_info_protoScollectionsScollection, "del"},
  {"add-prop", &module_info_boot, "add-prop"},
  {"bound?", &module_info_boot, "bound?"},
  {"$permanent-hash-state", &module_info_protoScollectionsStable, "$permanent-hash-state"},
  {"binding-dynamic-extent?", &module_info_ast, "binding-dynamic-extent?"},
  {"assignment-binding", &module_info_ast, "assignment-binding"},
  {"len", &module_info_protoStypes, "len"},
  {"locals-functions-setter", &module_info_ast, "locals-functions-setter"},
  {"type-elts-setter", &module_info_protoStypes, "type-elts-setter"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"build-condition-interactively", &module_info_runtime, "build-condition-interactively"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"<real-reference>", &module_info_ast, "<real-reference>"},
  {"<enum>", &module_info_protoScollectionsScollection, "<enum>"},
  {"@<", &module_info_boot, "@<"},
  {"dm", &module_info_boot, "dm"},
  {"mod", &module_info_protoSmath, "mod"},
  {"signature-names", &module_info_ast, "signature-names"},
  {"tail", &module_info_boot, "tail"},
  {"do2", &module_info_protoScollectionsScollection, "do2"},
  {"max", &module_info_protoSmagnitudes, "max"},
  {"<ast-generic>", &module_info_ast, "<ast-generic>"},
  {"acos", &module_info_protoSmath, "acos"},
  {"power-of-two-ceiling", &module_info_protoSmath, "power-of-two-ceiling"},
  {"%gen-code-setter", &module_info_boot, "%gen-code-setter"},
  {"<type>", &module_info_boot, "<type>"},
  {"napp", &module_info_macros, "napp"},
  {"app-args", &module_info_runtime, "app-args"},
  {"low-elt-setter", &module_info_protoScollectionsScollection, "low-elt-setter"},
  {"flo-bits", &module_info_protoSmath, "flo-bits"},
  {"function-index-setter", &module_info_ast, "function-index-setter"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"ord-app-mets", &module_info_boot, "ord-app-mets"},
  {"<buf>", &module_info_protoScollectionsSbuffer, "<buf>"},
  {"fab", &module_info_protoScollectionsScollection, "fab"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"<<", &module_info_protoSmath, "<<"},
  {"case-by", &module_info_macros, "case-by"},
  {"list-handlers", &module_info_runtime, "list-handlers"},
  {"min", &module_info_protoSmagnitudes, "min"},
  {"t*", &module_info_protoStypes, "t*"},
  {"module-syntax-environment", &module_info_ast, "module-syntax-environment"},
  {"reference-called-function?-setter", &module_info_ast, "reference-called-function?-setter"},
  {"tab-growth-factor", &module_info_protoScollectionsStable, "tab-growth-factor"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"ins", &module_info_protoScollectionsSsequence, "ins"},
  {"always", &module_info_runtime, "always"},
  {"<raw-constant>", &module_info_ast, "<raw-constant>"},
  {"set", &module_info_boot, "set"},
  {"loc", &module_info_boot, "loc"},
  {"fill", &module_info_protoScollectionsScollection, "fill"},
  {"%i&", &module_info_boot, "%i&"},
  {"<map>", &module_info_protoScollectionsSmap, "<map>"},
  {"<module-binding>", &module_info_ast, "<module-binding>"},
  {"bit?", &module_info_protoSmath, "bit?"},
  {"class-name", &module_info_boot, "class-name"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"<set>", &module_info_protoScollectionsStable, "<set>"},
  {"identity", &module_info_runtime, "identity"},
  {"swapf", &module_info_macros, "swapf"},
  {"sinh", &module_info_protoSmath, "sinh"},
  {"function-body-setter", &module_info_ast, "function-body-setter"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"sequentialize", &module_info_ast, "sequentialize"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"%loc-val", &module_info_boot, "%loc-val"},
  {"as-lst", &module_info_ast, "as-lst"},
  {"sig", &module_info_runtime, "sig"},
  {"upper?", &module_info_protoSmath, "upper?"},
  {"if", &module_info_boot, "if"},
  {"signature-nary?", &module_info_ast, "signature-nary?"},
  {"isqrt", &module_info_protoSmath, "isqrt"},
  {"1-", &module_info_protoSmath, "1-"},
  {"<local-reference>", &module_info_ast, "<local-reference>"},
  {"$e", &module_info_protoSmath, "$e"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"fix-let-types", &module_info_ast, "fix-let-types"},
  {"dlet", &module_info_macros, "dlet"},
  {"eof-object?", &module_info_protoSmath, "eof-object?"},
  {"empty", &module_info_protoScollectionsScollection, "empty"},
  {"%peek", &module_info_boot, "%peek"},
  {"prop-setter", &module_info_boot, "prop-setter"},
  {"nul", &module_info_boot, "nul"},
  {"<runtime-reference>", &module_info_ast, "<runtime-reference>"},
  {"assocs-test", &module_info_protoScollectionsSassoc, "assocs-test"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"<programs>", &module_info_ast, "<programs>"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"last", &module_info_protoScollectionsSsequence, "last"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"items", &module_info_protoScollectionsScollection, "items"},
  {"now", &module_info_protoScollectionsScollection, "now"},
  {"binding-dotted?", &module_info_ast, "binding-dotted?"},
  {"%fasin", &module_info_boot, "%fasin"},
  {"<immediate-constant>", &module_info_ast, "<immediate-constant>"},
  {"len/fill-setter", &module_info_protoScollectionsSbuffer, "len/fill-setter"},
  {"fun-val", &module_info_boot, "fun-val"},
  {"when", &module_info_macros, "when"},
  {"%it/", &module_info_boot, "%it/"},
  {"<fab-list>", &module_info_ast, "<fab-list>"},
  {"alternative-consequent", &module_info_ast, "alternative-consequent"},
  {"%pair", &module_info_boot, "%pair"},
  {"collect", &module_info_macros, "collect"},
  {"class-ancestors", &module_info_boot, "class-ancestors"},
  {"atan2", &module_info_protoSmath, "atan2"},
  {"low-elt", &module_info_protoScollectionsScollection, "low-elt"},
  {"binding-index-setter", &module_info_ast, "binding-index-setter"},
  {"into", &module_info_protoScollectionsScollection, "into"},
  {"rev", &module_info_protoScollectionsSsequence, "rev"},
  {"%current-out-port", &module_info_boot, "%current-out-port"},
  {"num-to-str", &module_info_protoSmath, "num-to-str"},
  {"%c=", &module_info_boot, "%c="},
  {"signature-specs", &module_info_ast, "signature-specs"},
  {"unless", &module_info_macros, "unless"},
  {"fix-let-arguments-setter", &module_info_ast, "fix-let-arguments-setter"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"function-debug-name-setter", &module_info_ast, "function-debug-name-setter"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"<step>", &module_info_protoScollectionsSstep, "<step>"},
  {"objectify-with-subtransaction", &module_info_ast, "objectify-with-subtransaction"},
  {"assignment-reference", &module_info_ast, "assignment-reference"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"<ast-signature>", &module_info_ast, "<ast-signature>"},
  {"%f=", &module_info_boot, "%f="},
  {"spread", &module_info_runtime, "spread"},
  {"neg?", &module_info_protoSmath, "neg?"},
  {"locals-body", &module_info_ast, "locals-body"},
  {"binding-dynamic-extent?-setter", &module_info_ast, "binding-dynamic-extent?-setter"},
  {"dc", &module_info_boot, "dc"},
  {"abs", &module_info_protoSmath, "abs"},
  {"floor", &module_info_protoSmath, "floor"},
  {"pair", &module_info_macros, "pair"},
  {"alternative-condition", &module_info_ast, "alternative-condition"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"$pi", &module_info_protoSmath, "$pi"},
  {"ins!", &module_info_protoScollectionsSsequence, "ins!"},
  {"module-exports", &module_info_ast, "module-exports"},
  {"signature-bindings-setter", &module_info_ast, "signature-bindings-setter"},
  {"%gen-refs", &module_info_boot, "%gen-refs"},
  {"binding-native-to?", &module_info_ast, "binding-native-to?"},
  {">=", &module_info_protoSmagnitudes, ">="},
  {"$goo-runtime-module-name", &module_info_ast, "$goo-runtime-module-name"},
  {"ceiling/", &module_info_protoSmath, "ceiling/"},
  {"asin", &module_info_protoSmath, "asin"},
  {"app-sup", &module_info_macros, "app-sup"},
  {"first-then", &module_info_protoScollectionsSstep, "first-then"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"elt", &module_info_macros, "elt"},
  {"as", &module_info_protoStypes, "as"},
  {"ascii-limit", &module_info_protoScollectionsSstring, "ascii-limit"},
  {"now-setter", &module_info_protoScollectionsScollection, "now-setter"},
  {"<assignment>", &module_info_ast, "<assignment>"},
  {"%close-out-port", &module_info_boot, "%close-out-port"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"list", &module_info_protoScollectionsSlist, "list"},
  {"~", &module_info_protoSmath, "~"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"%f/", &module_info_boot, "%f/"},
  {"nxt", &module_info_protoScollectionsScollection, "nxt"},
  {"gen-src-setter", &module_info_boot, "gen-src-setter"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"do", &module_info_macros, "do"},
  {"binding-module-name", &module_info_ast, "binding-module-name"},
  {"%fpow", &module_info_boot, "%fpow"},
  {"@isa?", &module_info_boot, "@isa?"},
  {"export", &module_info_boot, "export"},
  {"3rd", &module_info_protoScollectionsSsequence, "3rd"},
  {"keys", &module_info_protoScollectionsScollection, "keys"},
  {"binding-dotted?-setter", &module_info_ast, "binding-dotted?-setter"},
  {"while", &module_info_macros, "while"},
  {"compose", &module_info_runtime, "compose"},
  {"%fcosh", &module_info_boot, "%fcosh"},
  {"ct", &module_info_boot, "ct"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"load-in", &module_info_ast, "load-in"},
  {"range-error", &module_info_protoScollectionsScollection, "range-error"},
  {"signature-value", &module_info_ast, "signature-value"},
  {"unwind-protect-cleanup-thunk", &module_info_ast, "unwind-protect-cleanup-thunk"},
  {"<prop>", &module_info_boot, "<prop>"},
  {"empty?", &module_info_macros, "empty?"},
  {"tab-growth-factor-setter", &module_info_protoScollectionsStable, "tab-growth-factor-setter"},
  {"^", &module_info_protoSmath, "^"},
  {"sub-setter", &module_info_protoScollectionsSsequence, "sub-setter"},
  {"dl", &module_info_boot, "dl"},
  {"<assocs>", &module_info_protoScollectionsSassoc, "<assocs>"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"%ib", &module_info_boot, "%ib"},
  {"%i*", &module_info_boot, "%i*"},
  {"trunc", &module_info_protoSmath, "trunc"},
  {"nil", &module_info_boot, "nil"},
  {"let", &module_info_boot, "let"},
  {"%open-in-file", &module_info_boot, "%open-in-file"},
  {"binding-value-setter", &module_info_ast, "binding-value-setter"},
  {"gen-src", &module_info_boot, "gen-src"},
  {"new", &module_info_boot, "new"},
  {"%f<", &module_info_boot, "%f<"},
  {"use", &module_info_boot, "use"},
  {"tab-growth-threshold-setter", &module_info_protoScollectionsStable, "tab-growth-threshold-setter"},
  {"binding-global-box-setter", &module_info_ast, "binding-global-box-setter"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"fabs", &module_info_protoSmath, "fabs"},
  {"%i!", &module_info_boot, "%i!"},
  {"<free-environment>", &module_info_ast, "<free-environment>"},
  {"lower?", &module_info_protoSmath, "lower?"},
  {"now-key", &module_info_protoScollectionsScollection, "now-key"},
  {"to-digit", &module_info_protoSmath, "to-digit"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"unwind-protect-protected-thunk", &module_info_ast, "unwind-protect-protected-thunk"},
  {"<computed-program>", &module_info_ast, "<computed-program>"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"do-module-loader-modules", &module_info_ast, "do-module-loader-modules"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"object-props", &module_info_boot, "object-props"},
  {"application-tail?", &module_info_ast, "application-tail?"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"<reference>", &module_info_ast, "<reference>"},
  {"dg", &module_info_boot, "dg"},
  {"*gensym-counter*", &module_info_runtime, "*gensym-counter*"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"<module>", &module_info_ast, "<module>"},
  {"<module-binding-reference>", &module_info_ast, "<module-binding-reference>"},
  {"<int>", &module_info_boot, "<int>"},
  {"<range>", &module_info_protoScollectionsSrange, "<range>"},
  {"%lb", &module_info_boot, "%lb"},
  {"<str>", &module_info_boot, "<str>"},
  {"bind-exit-main-fun", &module_info_ast, "bind-exit-main-fun"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"fix-let-body", &module_info_ast, "fix-let-body"},
  {"%with-monitor", &module_info_boot, "%with-monitor"},
  {"find-environment-module", &module_info_ast, "find-environment-module"},
  {"%fu", &module_info_boot, "%fu"},
  {"do-key-vals", &module_info_protoScollectionsSsequence, "do-key-vals"},
  {"1st", &module_info_protoScollectionsSsequence, "1st"},
  {"pop", &module_info_protoScollectionsSlist, "pop"},
  {"<=", &module_info_protoSmagnitudes, "<="},
  {"str-to-num", &module_info_protoScollectionsSstring, "str-to-num"},
  {"constant-index-setter", &module_info_ast, "constant-index-setter"},
  {"sup", &module_info_macros, "sup"},
  {"remove-modules-by-name!", &module_info_ast, "remove-modules-by-name!"},
  {"%sb", &module_info_boot, "%sb"},
  {"<global-assignment>", &module_info_ast, "<global-assignment>"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"%os-val", &module_info_boot, "%os-val"},
  {">>", &module_info_protoSmath, ">>"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"ast-evaluate", &module_info_ast, "ast-evaluate"},
  {"monitor-handler", &module_info_ast, "monitor-handler"},
  {"cat-sym", &module_info_macros, "cat-sym"},
  {"%velt", &module_info_boot, "%velt"},
  {"odd?", &module_info_protoSmath, "odd?"},
  {"==", &module_info_macros, "=="},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"curry", &module_info_runtime, "curry"},
  {"runtime-environment", &module_info_ast, "runtime-environment"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"mem?", &module_info_protoScollectionsScollection, "mem?"},
  {"<arguments>", &module_info_ast, "<arguments>"},
  {"application-known?-setter", &module_info_ast, "application-known?-setter"},
  {"application-arguments", &module_info_ast, "application-arguments"},
  {"reference-frame-offset", &module_info_ast, "reference-frame-offset"},
  {"<ast-primitive-definition>", &module_info_ast, "<ast-primitive-definition>"},
  {"function-data-refs", &module_info_ast, "function-data-refs"},
  {"%cu", &module_info_boot, "%cu"},
  {"%current-in-port", &module_info_boot, "%current-in-port"},
  {"map-keyed", &module_info_protoScollectionsScollection, "map-keyed"},
  {"rev!", &module_info_macros, "rev!"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"/", &module_info_protoSmath, "/"},
  {"vals-to-str", &module_info_protoScollectionsSsequence, "vals-to-str"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"without-prop-unbound-errors", &module_info_macros, "without-prop-unbound-errors"},
  {"init-environment-for-eval", &module_info_ast, "init-environment-for-eval"},
  {"any2?", &module_info_protoScollectionsScollection, "any2?"},
  {"ds", &module_info_boot, "ds"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"type-class", &module_info_boot, "type-class"},
  {"%flog", &module_info_boot, "%flog"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"%fb", &module_info_boot, "%fb"},
  {"lst", &module_info_boot, "lst"},
  {"tup", &module_info_boot, "tup"},
  {"locals-bindings", &module_info_ast, "locals-bindings"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"isa?", &module_info_boot, "isa?"},
  {"<union>", &module_info_boot, "<union>"},
  {"do-named-static-global-bindings", &module_info_ast, "do-named-static-global-bindings"},
  {"compile-time-program", &module_info_ast, "compile-time-program"},
  {"<predefined-application>", &module_info_ast, "<predefined-application>"},
  {"init-ast", &module_info_ast, "init-ast"},
  {"contagious-type", &module_info_protoSmath, "contagious-type"},
  {"fun", &module_info_boot, "fun"},
  {"%bb", &module_info_boot, "%bb"},
  {"assignment-form", &module_info_ast, "assignment-form"},
  {"%prop", &module_info_boot, "%prop"},
  {"binding-type-setter", &module_info_ast, "binding-type-setter"},
  {"cos", &module_info_protoSmath, "cos"},
  {"function-bindings", &module_info_ast, "function-bindings"},
  {"%process-module", &module_info_boot, "%process-module"},
  {"alternative-alternant", &module_info_ast, "alternative-alternant"},
  {"$goo-boot-module-name", &module_info_ast, "$goo-boot-module-name"},
  {"%f-", &module_info_boot, "%f-"},
  {"tab-hash", &module_info_protoScollectionsStable, "tab-hash"},
  {"case", &module_info_macros, "case"},
  {"fab-handler", &module_info_runtime, "fab-handler"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"pop-last!", &module_info_protoScollectionsSbuffer, "pop-last!"},
  {"%isa", &module_info_boot, "%isa"},
  {"id-hash", &module_info_protoScollectionsStable, "id-hash"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"fold+", &module_info_protoScollectionsScollection, "fold+"},
  {"push-last!", &module_info_protoScollectionsSbuffer, "push-last!"},
  {"popf", &module_info_macros, "popf"},
  {"head", &module_info_boot, "head"},
  {"constant-value", &module_info_ast, "constant-value"},
  {"function-debug-name", &module_info_ast, "function-debug-name"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"df", &module_info_boot, "df"},
  {"<passive-program>", &module_info_ast, "<passive-program>"},
  {"function-body", &module_info_ast, "function-body"},
  {"binding-info-setter", &module_info_ast, "binding-info-setter"},
  {"<runtime-assignment>", &module_info_ast, "<runtime-assignment>"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"collect-temporaries!", &Yast_linearizeYcollect_temporariesX},
  {"---main-2---", NULL},
  {"<renamed-local-binding>", &Yast_linearizeYLrenamed_local_bindingG},
  {"collect-registers!", &Yast_linearizeYcollect_registersX},
  {"do-do-call-upgrades!", &Yast_linearizeYdo_do_call_upgradesX},
  {"register-allocate!", &Yast_linearizeYregister_allocateX},
  {"form-program-setter", &Yast_linearizeYform_program_setter},
  {"program-definitions-setter", &Yast_linearizeYprogram_definitions_setter},
  {"new-renamed-binding", &Yast_linearizeYnew_renamed_binding},
  {"boxify-mutable-bindings", &Yast_linearizeYboxify_mutable_bindings},
  {"program-quotations", &Yast_linearizeYprogram_quotations},
  {"lift!", &Yast_linearizeYliftX},
  {"form-quotations-setter", &Yast_linearizeYform_quotations_setter},
  {"assoc-value", &Yast_linearizeYassoc_value},
  {"insert-box!", &Yast_linearizeYinsert_boxX},
  {"<assoc>", &Yast_linearizeYLassocG},
  {"<top-level-form>", &Yast_linearizeYLtop_level_formG},
  {"form-definitions-setter", &Yast_linearizeYform_definitions_setter},
  {"split-program", &Yast_linearizeYsplit_program},
  {"adjoin-definition!", &Yast_linearizeYadjoin_definitionX},
  {"<flattened-program>", &Yast_linearizeYLflattened_programG},
  {"reference-self?", &Yast_linearizeYreference_selfQ},
  {"analyze-dynamic-extent", &Yast_linearizeYanalyze_dynamic_extent},
  {"extract-things!", &Yast_linearizeYextract_thingsX},
  {"closure-creation-index", &Yast_linearizeYclosure_creation_index},
  {"extract!", &Yast_linearizeYextractX},
  {"update-walk!", &Yast_linearizeYupdate_walkX},
  {"ast-walk", &Yast_linearizeYast_walk},
  {"do-do-call-references!", &Yast_linearizeYdo_do_call_referencesX},
  {"reference-offset-setter", &Yast_linearizeYreference_offset_setter},
  {"*register-passive?*", &Yast_linearizeYTregister_passiveQT},
  {"gather-temporaries!", &Yast_linearizeYgather_temporariesX},
  {"flatten-seqs", &Yast_linearizeYflatten_seqs},
  {"closurize-main!", &Yast_linearizeYclosurize_mainX},
  {"<free-reference>", &Yast_linearizeYLfree_referenceG},
  {"assocq", &Yast_linearizeYassocq},
  {"---main-1---", NULL},
  {"box-reference", &Yast_linearizeYbox_reference},
  {"assoc-key", &Yast_linearizeYassoc_key},
  {"assoc-key-setter", &Yast_linearizeYassoc_key_setter},
  {"*renaming-bindings-counter*", &Yast_linearizeYTrenaming_bindings_counterT},
  {"closure-creation-free-setter", &Yast_linearizeYclosure_creation_free_setter},
  {"analyze-calls", &Yast_linearizeYanalyze_calls},
  {"analyze-call-references", &Yast_linearizeYanalyze_call_references},
  {"do-call-references!", &Yast_linearizeYdo_call_referencesX},
  {"do-call-upgrades!", &Yast_linearizeYdo_call_upgradesX},
  {"closure-creation-free", &Yast_linearizeYclosure_creation_free},
  {"ast-contains-fun?", &Yast_linearizeYast_contains_funQ},
  {"as-top-level-forms", &Yast_linearizeYas_top_level_forms},
  {"program-quotations-setter", &Yast_linearizeYprogram_quotations_setter},
  {"reference-offset", &Yast_linearizeYreference_offset},
  {"unconstrained-type?", &Yast_linearizeYunconstrained_typeQ},
  {"adjoin-temporary-variables!", &Yast_linearizeYadjoin_temporary_variablesX},
  {"<closure-creation>", &Yast_linearizeYLclosure_creationG},
  {"program-form", &Yast_linearizeYprogram_form},
  {"program-definitions", &Yast_linearizeYprogram_definitions},
  {"do-do-dynamic-extent!", &Yast_linearizeYdo_do_dynamic_extentX},
  {"lift-procedures!", &Yast_linearizeYlift_proceduresX},
  {"form-quotations", &Yast_linearizeYform_quotations},
  {"form-definitions", &Yast_linearizeYform_definitions},
  {"box-reference-setter", &Yast_linearizeYbox_reference_setter},
  {"adjoin-free-binding!", &Yast_linearizeYadjoin_free_bindingX},
  {"reference-self?-setter", &Yast_linearizeYreference_selfQ_setter},
  {"form-program", &Yast_linearizeYform_program},
  {"assoc", &Yast_linearizeYassoc},
  {"closure-creation-index-setter", &Yast_linearizeYclosure_creation_index_setter},
  {"<box-write>", &Yast_linearizeYLbox_writeG},
  {"allocate-register", &Yast_linearizeYallocate_register},
  {"box-form", &Yast_linearizeYbox_form},
  {"do-dynamic-extent!", &Yast_linearizeYdo_dynamic_extentX},
  {"box-form-setter", &Yast_linearizeYbox_form_setter},
  {"program-form-setter", &Yast_linearizeYprogram_form_setter},
  {"---main-0---", NULL},
  {"<box-creation>", &Yast_linearizeYLbox_creationG},
  {"assoc-value-setter", &Yast_linearizeYassoc_value_setter},
  {"<box-read>", &Yast_linearizeYLbox_readG},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"collect-temporaries!", "collect-temporaries!"},
  {"box-form", "box-form"},
  {"lift!", "lift!"},
  {"insert-box!", "insert-box!"},
  {"<top-level-form>", "<top-level-form>"},
  {"<renamed-local-binding>", "<renamed-local-binding>"},
  {"analyze-dynamic-extent", "analyze-dynamic-extent"},
  {"extract-things!", "extract-things!"},
  {"register-allocate!", "register-allocate!"},
  {"closure-creation-index", "closure-creation-index"},
  {"update-walk!", "update-walk!"},
  {"*register-passive?*", "*register-passive?*"},
  {"gather-temporaries!", "gather-temporaries!"},
  {"flatten-seqs", "flatten-seqs"},
  {"closurize-main!", "closurize-main!"},
  {"<free-reference>", "<free-reference>"},
  {"form-quotations", "form-quotations"},
  {"box-reference", "box-reference"},
  {"analyze-calls", "analyze-calls"},
  {"form-program", "form-program"},
  {"closure-creation-free", "closure-creation-free"},
  {"ast-contains-fun?", "ast-contains-fun?"},
  {"program-quotations", "program-quotations"},
  {"reference-offset", "reference-offset"},
  {"unconstrained-type?", "unconstrained-type?"},
  {"<closure-creation>", "<closure-creation>"},
  {"program-form", "program-form"},
  {"program-definitions", "program-definitions"},
  {"form-definitions", "form-definitions"},
  {"<box-write>", "<box-write>"},
  {"collect-registers!", "collect-registers!"},
  {"<box-creation>", "<box-creation>"},
  {"reference-self?", "reference-self?"},
  {"<box-read>", "<box-read>"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_ast_linearize;
MODULE_INFO module_info_ast_linearize = {
  "ast-linearize",
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
extern void load_module_protoStypes (void);
extern void load_module_protoSmath (void);
extern void load_module_protoScollections (void);

/* EXPRESSION: */

extern void load_module_ast_linearize (void);

void load_module_ast_linearize (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_boot();
  load_module_macros();
  load_module_runtime();
  load_module_ast();
  load_module_protoStypes();
  load_module_protoSmath();
  load_module_protoScollections();

  (P)Yast_linearizeY___main_0___();
  (P)Yast_linearizeY___main_1___();
  (P)Yast_linearizeY___main_2___();

}

/* END OF GENERATED CODE. */
