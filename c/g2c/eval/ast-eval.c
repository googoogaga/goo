/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: ast-eval */

EXT(YLnumG,"boot","<num>");
EXT(YLvecG,"boot","<vec>");
EXT(YprotoScollectionsScollectionYkey_type,"proto/collections/collection","key-type");
EXT(Yprop_getter,"boot","prop-getter");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
EXT(YprotoSportsYin,"proto/ports","in");
DEF(Yast_evalYenv_global_binding_value,"ast-eval","env-global-binding-value");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
DEF(Yast_evalYenv_global_binding_boundQ,"ast-eval","env-global-binding-bound?");
EXT(YprotoScollectionsSsequenceYdel_dups,"proto/collections/sequence","del-dups");
EXT(YastYbinding_global_box,"ast","binding-global-box");
EXT(YprotoScollectionsScollectionYfinQ,"proto/collections/collection","fin?");
EXT(Yunexec,"boot","unexec");
DEF(Yast_evalYenv_values,"ast-eval","env-values");
EXT(Ytype_error,"boot","type-error");
EXT(YprotoSmathYA,"proto/math","+");
EXT(YastYenvironment_module,"ast","environment-module");
EXT(Yclass_direct_props,"boot","class-direct-props");
EXT(YprotoSportsYgets,"proto/ports","gets");
EXT(YmacrosYgensym,"macros","gensym");
EXT(Yvec,"boot","vec");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YprotoScollectionsSsequenceYbelow,"proto/collections/sequence","below");
EXT(YastYsignature_arity_setter,"ast","signature-arity-setter");
EXT(YastYLconstantG,"ast","<constant>");
EXT(YastYinstall_initial_bindings,"ast","install-initial-bindings");
EXT(YastYfix_let_body_setter,"ast","fix-let-body-setter");
EXT(YLmetG,"boot","<met>");
EXT(YprotoScollectionsScollectionYmap_keyed,"proto/collections/collection","map-keyed");
EXT(YastYmonitor_test,"ast","monitor-test");
EXT(YastYmodule_name,"ast","module-name");
EXT(YastYLmonitorG,"ast","<monitor>");
DEF(Yast_evalYenv_binding_value,"ast-eval","env-binding-value");
EXT(YprotoScollectionsSstringYTprint_baseT,"proto/collections/string","*print-base*");
EXT(YruntimeYloc_val_setter,"runtime","loc-val-setter");
EXT(YastYLast_macro_definitionG,"ast","<ast-macro-definition>");
EXT(YprotoScollectionsStableYtab_test,"proto/collections/table","tab-test");
EXT(YastYglobal_box_value_setter,"ast","global-box-value-setter");
EXT(YprotoSmathYzeroQ,"proto/math","zero?");
DEF(Yast_evalYenv_function,"ast-eval","env-function");
EXT(YastYapplication_knownQ,"ast","application-known?");
EXT(Yprop_init,"boot","prop-init");
DEF(Yast_evalYenv_define_bindingX,"ast-eval","env-define-binding!");
EXT(YastYfix_let_bindings_setter,"ast","fix-let-bindings-setter");
EXT(YastYbinding_info,"ast","binding-info");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
EXT(YprotoSmathYroundS,"proto/math","round/");
EXT(YastYprobe_module,"ast","probe-module");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YprotoStypesYtA,"proto/types","t+");
DEF(Yast_evalYenv_frameX,"ast-eval","env-frame!");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YprotoScollectionsScollectionYenum,"proto/collections/collection","enum");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YastYglobal_box_value,"ast","global-box-value");
EXT(Yclass_descendents,"boot","class-descendents");
EXT(YprotoScollectionsScollectionYelt_default,"proto/collections/collection","elt-default");
EXT(YprotoScollectionsSbufferYbuf,"proto/collections/buffer","buf");
DEF(Yast_evalYenv_global_binding_value_setter,"ast-eval","env-global-binding-value-setter");
EXT(YprotoScollectionsScollectionYmap2,"proto/collections/collection","map2");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YprotoScollectionsSrangeYfrom,"proto/collections/range","from");
EXT(Ygen_refs_setter,"boot","gen-refs-setter");
EXT(YastYenv_object_name,"ast","env-object-name");
EXT(YprotoSmathYevenQ,"proto/math","even?");
EXT(YastYbinding_locative,"ast","binding-locative");
EXT(YastYmonitor_main_thunk,"ast","monitor-main-thunk");
EXT(YprotoSportsYport_line,"proto/ports","port-line");
EXT(YastYfab_g2c_module,"ast","fab-g2c-module");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YLchrG,"boot","<chr>");
EXT(YprotoSmathYrem,"proto/math","rem");
EXT(YLflatG,"boot","<flat>");
EXT(YprotoScollectionsSsequenceYdel_vals,"proto/collections/sequence","del-vals");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YprotoSportsYput,"proto/ports","put");
EXT(Yprop_value_setter,"boot","prop-value-setter");
EXT(YastYLalternativeG,"ast","<alternative>");
EXT(YPdefine_method,"boot","%define-method");
EXT(Ygen_refs,"boot","gen-refs");
EXT(Ynot,"boot","not");
EXT(YprotoSmathY_,"proto/math","-");
EXT(YprotoScollectionsScollectionYdo_keyed,"proto/collections/collection","do-keyed");
EXT(YastYmodule_name_to_relpath,"ast","module-name-to-relpath");
EXT(YastYalternative_condition,"ast","alternative-condition");
EXT(YprotoScollectionsSsequenceYsub,"proto/collections/sequence","sub");
EXT(YastYmonitor_type,"ast","monitor-type");
DEF(Yast_evalYTstackT,"ast-eval","*stack*");
EXT(YastYobjectify_signature,"ast","objectify-signature");
EXT(YastYmonitor_info,"ast","monitor-info");
EXT(YprotoScollectionsScollectionYelt_type,"proto/collections/collection","elt-type");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YastYLfix_letG,"ast","<fix-let>");
EXT(Yfab_sym,"boot","fab-sym");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YastYLbindingG,"ast","<binding>");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YprotoScollectionsSsequenceYpos,"proto/collections/sequence","pos");
EXT(YprotoScollectionsScollectionYfold,"proto/collections/collection","fold");
EXT(YprotoSportsYget,"proto/ports","get");
EXT(YprotoSmathYB,"proto/math","&");
EXT(YprotoScollectionsStableYtab_shrink_threshold,"proto/collections/table","tab-shrink-threshold");
EXT(YastYfunction_index,"ast","function-index");
EXT(YprotoScollectionsScollectionYelts,"proto/collections/collection","elts");
EXT(YLtupG,"boot","<tup>");
EXT(YastYreport_undefined_global_bindings,"ast","report-undefined-global-bindings");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YOlst,"boot","@lst");
EXT(YPvnul,"boot","%vnul");
EXT(YwriteYwrite_to_string,"write","write-to-string");
EXT(YastYfunction_signature_setter,"ast","function-signature-setter");
EXT(YprotoSmathYNEE,"proto/math","~==");
EXT(YprotoSmathYflo_bits,"proto/math","flo-bits");
EXT(YLfunG,"boot","<fun>");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YastYfunction_value,"ast","function-value");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
EXT(YastYmodule_binding,"ast","module-binding");
DEF(Yast_evalYenv_local_reference_value_setter,"ast-eval","env-local-reference-value-setter");
EXT(YastYset_module_environments,"ast","set-module-environments");
EXT(YmacrosYmap,"macros","map");
EXT(YprotoSmathYtruncS,"proto/math","trunc/");
EXT(YprotoSportsYforce_out,"proto/ports","force-out");
EXT(YastYLpassive_programG,"ast","<passive-program>");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YastYfunction_temporaries_setter,"ast","function-temporaries-setter");
EXT(YprotoScollectionsStableYcase_insensitive_string_equal,"proto/collections/table","case-insensitive-string-equal");
EXT(YastYbinding_name,"ast","binding-name");
EXT(YastYLprogramG,"ast","<program>");
EXT(YastYfunction_free,"ast","function-free");
EXT(YprotoSmathYNE,"proto/math","~=");
EXT(YastYbinding_type,"ast","binding-type");
EXT(YprotoStypesYtQ,"proto/types","t?");
EXT(YastYbinding_kind,"ast","binding-kind");
EXT(YprotoStypesYall2Q,"proto/types","all2?");
EXT(YprotoScollectionsSsequenceYreject,"proto/collections/sequence","reject");
EXT(YprotoSportsYLfile_portG,"proto/ports","<file-port>");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(Ysig_val,"boot","sig-val");
EXT(YastYobjectify_quotation,"ast","objectify-quotation");
EXT(Yprop_boundQ,"boot","prop-bound?");
EXT(YastYmodule_target_environment,"ast","module-target-environment");
EXT(YLlstG,"boot","<lst>");
EXT(YastYsignature_names_setter,"ast","signature-names-setter");
EXT(YLlogG,"boot","<log>");
EXT(YprotoSmathYneg,"proto/math","neg");
EXT(YprotoSmathYK,"proto/math","|");
EXT(YprotoScollectionsScollectionYallQ,"proto/collections/collection","all?");
EXT(Ytype_object,"boot","type-object");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YwriteYwrite,"write","write");
EXT(YprotoSportsYLportG,"proto/ports","<port>");
DEF(Yast_evalYenv_binding_value_setter,"ast-eval","env-binding-value-setter");
EXT(Yfab_class,"boot","fab-class");
EXT(YprotoSportsYLstring_out_portG,"proto/ports","<string-out-port>");
EXT(YastYload_module,"ast","load-module");
EXT(YprotoSportsYLfile_out_portG,"proto/ports","<file-out-port>");
EXT(YastYfix_let_bindings,"ast","fix-let-bindings");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YprotoSmathYT,"proto/math","*");
DEF(Yast_evalYenv_names,"ast-eval","env-names");
EXT(YprotoSmathYround,"proto/math","round");
EXT(YastYboundQ_reference,"ast","bound?-reference");
EXT(Ysym_name,"boot","sym-name");
EXT(YastYprogram_type,"ast","program-type");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YprotoSmathY1A,"proto/math","1+");
DEF(Yast_evalYenv_parent_setter,"ast-eval","env-parent-setter");
EXT(YastYreference_binding,"ast","reference-binding");
EXT(YprotoSportsYnewline,"proto/ports","newline");
EXT(YprotoScollectionsScollectionYfind,"proto/collections/collection","find");
EXT(Yfun_name,"boot","fun-name");
EXT(YastYprogram_type_setter,"ast","program-type-setter");
EXT(YprotoSmathYdigitQ,"proto/math","digit?");
EXT(YastYunchecked_runtime_environment,"ast","unchecked-runtime-environment");
EXT(Yprop_owner,"boot","prop-owner");
EXT(YprotoScollectionsStableYtab_gc_state,"proto/collections/table","tab-gc-state");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YprotoSmathYto_str,"proto/math","to-str");
EXT(YmacrosYfab_setter_name,"macros","fab-setter-name");
EXT(YprotoScollectionsScollectionYaddX,"proto/collections/collection","add!");
DEF(Yast_evalYas_fun_name,"ast-eval","as-fun-name");
EXT(YastYfunction_free_setter,"ast","function-free-setter");
EXT(Yobject_class,"boot","object-class");
EXT(YprotoSmathYfloorS,"proto/math","floor/");
EXT(YprotoScollectionsSlistYpush,"proto/collections/list","push");
EXT(YastYprogram_register,"ast","program-register");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YastYreference_frame_number,"ast","reference-frame-number");
DEF(Yast_evalYenv_local_value,"ast-eval","env-local-value");
EXT(YastYsignature_arity,"ast","signature-arity");
EXT(Yclass_parents,"boot","class-parents");
EXT(YastYbinding_mutableQ,"ast","binding-mutable?");
DEF(Yast_evalYenv_values_setter,"ast-eval","env-values-setter");
EXT(YTreport_prop_unbound_errorsQT,"boot","*report-prop-unbound-errors?*");
EXT(YprotoScollectionsSsequenceYcat2,"proto/collections/sequence","cat2");
EXT(YprotoScollectionsSsequenceYsub_setter,"proto/collections/sequence","sub-setter");
EXT(Yprop_value,"boot","prop-value");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(YprotoScollectionsStableYtab_growth_threshold,"proto/collections/table","tab-growth-threshold");
EXT(YastYLcompile_timeG,"ast","<compile-time>");
EXT(YprotoScollectionsSlistYLlistG,"proto/collections/list","<list>");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YprotoSmagnitudesYG,"proto/magnitudes",">");
EXT(YprotoSportsYLstring_portG,"proto/ports","<string-port>");
EXT(Ymay_isaQ,"boot","may-isa?");
DEF(Yast_evalYexport_goo_method,"ast-eval","export-goo-method");
EXT(YastYLboundQG,"ast","<bound?>");
EXT(YLseqG,"boot","<seq>");
EXT(YLanyG,"boot","<any>");
EXT(Yprop_type,"boot","prop-type");
EXT(YprotoScollectionsScollectionYelt_setter,"proto/collections/collection","elt-setter");
EXT(YastYprogram_register_setter,"ast","program-register-setter");
EXT(YruntimeYread,"runtime","read");
EXT(YastYLunwind_protectG,"ast","<unwind-protect>");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YastYLlocalsG,"ast","<locals>");
EXT(YprotoSmathYto_upper,"proto/math","to-upper");
EXT(YastYfix_let_types_setter,"ast","fix-let-types-setter");
EXT(YprotoScollectionsSsequenceYpick,"proto/collections/sequence","pick");
EXT(YastYbinding_value,"ast","binding-value");
EXT(YprotoScollectionsSsequenceYcatX,"proto/collections/sequence","cat!");
EXT(YastYbinding_index,"ast","binding-index");
EXT(Yclass_props,"boot","class-props");
EXT(YprotoScollectionsScollectionYzap,"proto/collections/collection","zap");
EXT(YastYlocals_functions,"ast","locals-functions");
EXT(YastYLmodule_loaderG,"ast","<module-loader>");
EXT(YastYfind_binding,"ast","find-binding");
EXT(YastYLstatic_global_environmentG,"ast","<static-global-environment>");
EXT(YastYsignature_specs_setter,"ast","signature-specs-setter");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YprotoScollectionsStableYcase_insensitive_string_hash,"proto/collections/table","case-insensitive-string-hash");
EXT(YprotoSmathYaddress_of,"proto/math","address-of");
EXT(YastYLdefinitionG,"ast","<definition>");
EXT(YprotoScollectionsSmapYfab_map,"proto/collections/map","fab-map");
EXT(YprotoStypesYtE,"proto/types","t=");
EXT(Yerror,"boot","error");
EXT(YastYfree_environment,"ast","free-environment");
EXT(YprotoSmathYGGG,"proto/math",">>>");
EXT(YprotoSmagnitudesYL,"proto/magnitudes","<");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YprotoScollectionsStableYLstr_tabG,"proto/collections/table","<str-tab>");
EXT(YastYLglobal_referenceG,"ast","<global-reference>");
EXT(YastYapplication_binding,"ast","application-binding");
EXT(YastYenvironment_uses_modules,"ast","environment-uses-modules");
DEF(Yast_evalYDnul_loc_env,"ast-eval","$nul-loc-env");
EXT(YLsigG,"boot","<sig>");
EXT(YPprop_unbound_error,"boot","%prop-unbound-error");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YPsymbols,"boot","%symbols");
EXT(YastYlocals_body_setter,"ast","locals-body-setter");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(YastYreference_called_functionQ,"ast","reference-called-function?");
EXT(YwriteYdisplay,"write","display");
EXT(YastYfunction_binding,"ast","function-binding");
EXT(YastYLapplicationG,"ast","<application>");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(YprotoScollectionsSbufferYlen_setter,"proto/collections/buffer","len-setter");
EXT(Yfun_names,"boot","fun-names");
EXT(YastYfunction_naryQ,"ast","function-nary?");
EXT(YastYfunction_self_recursiveQ_setter,"ast","function-self-recursive?-setter");
EXT(YastYLast_methodG,"ast","<ast-method>");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YOall2Q,"boot","@all2?");
EXT(YastYLsequentialG,"ast","<sequential>");
EXT(YastYLast_functionG,"ast","<ast-function>");
DEF(Yast_evalYLloc_envG,"ast-eval","<loc-env>");
EXT(YprotoScollectionsScollectionYadd,"proto/collections/collection","add");
EXT(YprotoSmathYtrunc,"proto/math","trunc");
EXT(YastYsignature_value_setter,"ast","signature-value-setter");
EXT(YprotoStypesY2nd,"proto/types","2nd");
DEF(Yast_evalYenv_local_reference_value,"ast-eval","env-local-reference-value");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YprotoSmathYE,"proto/math","=");
EXT(YprotoSmathYalphaQ,"proto/math","alpha?");
EXT(YastYLast_primitiveG,"ast","<ast-primitive>");
EXT(YprotoSportsYout,"proto/ports","out");
EXT(YprotoSmathYceil,"proto/math","ceil");
EXT(YastYfunction_registers,"ast","function-registers");
EXT(YastYfix_let_arguments,"ast","fix-let-arguments");
EXT(YLcolG,"boot","<col>");
EXT(YLclassG,"boot","<class>");
EXT(YruntimeYloc_val,"runtime","loc-val");
EXT(YastYLregular_applicationG,"ast","<regular-application>");
DEF(Yast_evalYenv_local_value_setter,"ast-eval","env-local-value-setter");
EXT(YLmagG,"boot","<mag>");
EXT(YprotoSmathYto_lower,"proto/math","to-lower");
EXT(YDmax_int,"boot","$max-int");
EXT(YastYmodule_loader_module_type,"ast","module-loader-module-type");
EXT(YprotoScollectionsScollectionYfind_or,"proto/collections/collection","find-or");
EXT(Yfind_setter,"boot","find-setter");
EXT(YastYLbind_exitG,"ast","<bind-exit>");
EXT(YprotoSmathYposQ,"proto/math","pos?");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YastYenvironment_bindings,"ast","environment-bindings");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YastYfunction_signature,"ast","function-signature");
EXT(YastYfunction_self_recursiveQ,"ast","function-self-recursive?");
EXT(YastYconstant_index,"ast","constant-index");
EXT(YprotoSportsYLin_portG,"proto/ports","<in-port>");
EXT(YprotoScollectionsScollectionYLtabG,"proto/collections/collection","<tab>");
EXT(YastYLfree_environmentG,"ast","<free-environment>");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
DEF(Yast_evalYenv_runtime_value_setter,"ast-eval","env-runtime-value-setter");
EXT(Ytail_setter,"boot","tail-setter");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YastYfunction_source,"ast","function-source");
EXT(YPsnul,"boot","%snul");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YprotoScollectionsSstringYstr,"proto/collections/string","str");
EXT(YastYLlocal_bindingG,"ast","<local-binding>");
EXT(YastYfunction_data_refs_setter,"ast","function-data-refs-setter");
EXT(YastYbinding_inferred_type,"ast","binding-inferred-type");
EXT(YprotoScollectionsScollectionYelt_or,"proto/collections/collection","elt-or");
EXT(YastYast_define_binding,"ast","ast-define-binding");
EXT(YruntimeYformat,"runtime","format");
EXT(YmacrosYcat,"macros","cat");
EXT(YprotoSmathYbitQ,"proto/math","bit?");
EXT(YastYsignature_naryQ_setter,"ast","signature-nary?-setter");
EXT(YastYapplication_function,"ast","application-function");
EXT(YastYfunction_temporaries,"ast","function-temporaries");
EXT(YprotoScollectionsScollectionYdel,"proto/collections/collection","del");
EXT(YastYbinding_inferred_type_setter,"ast","binding-inferred-type-setter");
EXT(Yadd_prop,"boot","add-prop");
EXT(YprotoScollectionsStableYDpermanent_hash_state,"proto/collections/table","$permanent-hash-state");
EXT(YastYbinding_dynamic_extentQ,"ast","binding-dynamic-extent?");
EXT(YprotoStypesYlen,"proto/types","len");
EXT(YastYassignment_binding,"ast","assignment-binding");
EXT(YastYlocals_functions_setter,"ast","locals-functions-setter");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
EXT(YLoptsG,"boot","<opts>");
EXT(YastYLreal_referenceG,"ast","<real-reference>");
EXT(YprotoScollectionsScollectionYLenumG,"proto/collections/collection","<enum>");
EXT(YprotoSmathYmod,"proto/math","mod");
EXT(YastYsignature_names,"ast","signature-names");
EXT(Ytail,"boot","tail");
EXT(YprotoScollectionsScollectionYdo2,"proto/collections/collection","do2");
EXT(YprotoStypesYtL,"proto/types","t<");
EXT(YprotoSmagnitudesYmax,"proto/magnitudes","max");
EXT(YastYLast_genericG,"ast","<ast-generic>");
DEF(Yast_evalYast_eval_boundQ,"ast-eval","ast-eval-bound?");
EXT(YLtypeG,"boot","<type>");
EXT(YmacrosYnapp,"macros","napp");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YprotoScollectionsScollectionYlow_elt_setter,"proto/collections/collection","low-elt-setter");
EXT(YastYfunction_index_setter,"ast","function-index-setter");
EXT(YLlocG,"boot","<loc>");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(Yord_app_mets,"boot","ord-app-mets");
EXT(YprotoScollectionsSbufferYLbufG,"proto/collections/buffer","<buf>");
EXT(YprotoScollectionsScollectionYfab,"proto/collections/collection","fab");
EXT(Ytype_elts,"boot","type-elts");
EXT(YprotoSmathYLL,"proto/math","<<");
EXT(YastYfunction_source_setter,"ast","function-source-setter");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(YprotoSmagnitudesYmin,"proto/magnitudes","min");
EXT(YprotoStypesYanyQ,"proto/types","any?");
EXT(YprotoSportsYLfile_in_portG,"proto/ports","<file-in-port>");
EXT(YastYmodule_syntax_environment,"ast","module-syntax-environment");
EXT(YprotoScollectionsStableYtab_growth_factor,"proto/collections/table","tab-growth-factor");
EXT(YastYreference_called_functionQ_setter,"ast","reference-called-function?-setter");
EXT(YastYfix_let_body,"ast","fix-let-body");
EXT(YruntimeYalways,"runtime","always");
DEF(Yast_evalYenv_parent,"ast-eval","env-parent");
EXT(YastYLraw_constantG,"ast","<raw-constant>");
EXT(YwriteYwriteln,"write","writeln");
EXT(YprotoSportsYclose,"proto/ports","close");
EXT(YprotoScollectionsScollectionYfill,"proto/collections/collection","fill");
EXT(YprotoScollectionsSmapYLmapG,"proto/collections/map","<map>");
EXT(YastYLmodule_bindingG,"ast","<module-binding>");
EXT(Yclass_name,"boot","class-name");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YastYfunction_body_setter,"ast","function-body-setter");
EXT(YPPmacro,"boot","%%macro");
EXT(YastYsequentialize,"ast","sequentialize");
EXT(Yfind_getter,"boot","find-getter");
EXT(YastYas_lst,"ast","as-lst");
EXT(YastYdo_static_global_bindings,"ast","do-static-global-bindings");
EXT(YruntimeYsig,"runtime","sig");
EXT(YprotoSmathYupperQ,"proto/math","upper?");
EXT(YastYsignature_naryQ,"ast","signature-nary?");
EXT(YprotoSmathY1_,"proto/math","1-");
EXT(YastYLlocal_referenceG,"ast","<local-reference>");
EXT(YprotoSportsYLstring_in_portG,"proto/ports","<string-in-port>");
EXT(YastYfix_let_types,"ast","fix-let-types");
EXT(YprotoScollectionsScollectionYempty,"proto/collections/collection","empty");
EXT(YprotoSmathYeof_objectQ,"proto/math","eof-object?");
EXT(Yprop_setter,"boot","prop-setter");
EXT(Ynul,"boot","nul");
EXT(YprotoScollectionsSassocYassocs_test,"proto/collections/assoc","assocs-test");
EXT(YastYLruntime_referenceG,"ast","<runtime-reference>");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YastYLprogramsG,"ast","<programs>");
EXT(YprotoScollectionsSsequenceYlast,"proto/collections/sequence","last");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(YprotoScollectionsScollectionYitems,"proto/collections/collection","items");
EXT(YprotoScollectionsScollectionYnow,"proto/collections/collection","now");
EXT(YastYbinding_dottedQ,"ast","binding-dotted?");
EXT(YprotoScollectionsSbufferYlenSfill_setter,"proto/collections/buffer","len/fill-setter");
EXT(YastYLimmediate_constantG,"ast","<immediate-constant>");
EXT(Yfun_val,"boot","fun-val");
EXT(YastYLfab_listG,"ast","<fab-list>");
EXT(YastYalternative_consequent,"ast","alternative-consequent");
EXT(Yclass_ancestors,"boot","class-ancestors");
EXT(YprotoScollectionsScollectionYlow_elt,"proto/collections/collection","low-elt");
EXT(YastYbinding_index_setter,"ast","binding-index-setter");
EXT(YprotoScollectionsScollectionYinto,"proto/collections/collection","into");
EXT(YprotoScollectionsSsequenceYrev,"proto/collections/sequence","rev");
EXT(YprotoSmathYnum_to_str,"proto/math","num-to-str");
EXT(YastYsignature_specs,"ast","signature-specs");
EXT(YastYfix_let_arguments_setter,"ast","fix-let-arguments-setter");
EXT(YDmin_int,"boot","$min-int");
EXT(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
EXT(YastYfunction_debug_name_setter,"ast","function-debug-name-setter");
EXT(YprotoScollectionsSstepYLstepG,"proto/collections/step","<step>");
EXT(YastYobjectify_with_subtransaction,"ast","objectify-with-subtransaction");
EXT(YastYassignment_reference,"ast","assignment-reference");
EXT(YastYLast_signatureG,"ast","<ast-signature>");
EXT(YruntimeYspread,"runtime","spread");
EXT(YprotoSmathYnegQ,"proto/math","neg?");
EXT(YastYlocals_body,"ast","locals-body");
EXT(YastYbinding_dynamic_extentQ_setter,"ast","binding-dynamic-extent?-setter");
EXT(YprotoSmathYabs,"proto/math","abs");
EXT(YprotoSmathYfloor,"proto/math","floor");
EXT(YmacrosYpair,"macros","pair");
EXT(YprotoScollectionsSrangeYrange,"proto/collections/range","range");
EXT(YLfloG,"boot","<flo>");
EXT(YLsymG,"boot","<sym>");
EXT(YprotoScollectionsSrangeYrange_by,"proto/collections/range","range-by");
EXT(YastYmodule_exports,"ast","module-exports");
DEF(Yast_evalYarrange_arguments,"ast-eval","arrange-arguments");
DEF(Yast_evalYenv_function_setter,"ast-eval","env-function-setter");
EXT(YastYsignature_bindings_setter,"ast","signature-bindings-setter");
EXT(YastYbinding_native_toQ,"ast","binding-native-to?");
EXT(YprotoSmagnitudesYGE,"proto/magnitudes",">=");
EXT(YprotoSportsYLout_portG,"proto/ports","<out-port>");
EXT(YprotoSmathYceilingS,"proto/math","ceiling/");
EXT(YastYDgoo_runtime_module_name,"ast","$goo-runtime-module-name");
EXT(YprotoScollectionsSstepYfirst_then,"proto/collections/step","first-then");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YmacrosYelt,"macros","elt");
EXT(YprotoStypesYas,"proto/types","as");
EXT(YprotoScollectionsScollectionYnow_setter,"proto/collections/collection","now-setter");
EXT(YastYLassignmentG,"ast","<assignment>");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YprotoScollectionsSlistYlist,"proto/collections/list","list");
DEF(Yast_evalYast_eval,"ast-eval","ast-eval");
EXT(YprotoSmathYN,"proto/math","~");
EXT(Yobject_parents,"boot","object-parents");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YprotoScollectionsScollectionYnxt,"proto/collections/collection","nxt");
EXT(Ygen_src_setter,"boot","gen-src-setter");
EXT(YmacrosYdo,"macros","do");
EXT(YastYbinding_module_name,"ast","binding-module-name");
EXT(YOisaQ,"boot","@isa?");
EXT(YprotoScollectionsSsequenceY3rd,"proto/collections/sequence","3rd");
EXT(YprotoScollectionsScollectionYkeys,"proto/collections/collection","keys");
EXT(YastYbinding_dottedQ_setter,"ast","binding-dotted?-setter");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YastYload_in,"ast","load-in");
EXT(YastYsignature_value,"ast","signature-value");
EXT(YastYunwind_protect_cleanup_thunk,"ast","unwind-protect-cleanup-thunk");
EXT(YLpropG,"boot","<prop>");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YprotoSmathYC,"proto/math","^");
EXT(YprotoScollectionsSassocYLassocsG,"proto/collections/assoc","<assocs>");
DEF(Yast_evalYenv_runtime_value,"ast-eval","env-runtime-value");
EXT(YLgenG,"boot","<gen>");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
DEF(Yast_evalYast_eval_specs,"ast-eval","ast-eval-specs");
EXT(Ynil,"boot","nil");
EXT(YastYbinding_value_setter,"ast","binding-value-setter");
EXT(Ygen_src,"boot","gen-src");
EXT(Ynew,"boot","new");
EXT(YastYbinding_global_box_setter,"ast","binding-global-box-setter");
EXT(YprotoSportsYport_contents,"proto/ports","port-contents");
EXT(YprotoSmathYfabs,"proto/math","fabs");
EXT(YprotoSportsYreadyQ,"proto/ports","ready?");
EXT(YprotoSmathYlowerQ,"proto/math","lower?");
EXT(YprotoScollectionsScollectionYnow_key,"proto/collections/collection","now-key");
EXT(YprotoSmathYto_digit,"proto/math","to-digit");
EXT(YastYunwind_protect_protected_thunk,"ast","unwind-protect-protected-thunk");
EXT(YastYLcomputed_programG,"ast","<computed-program>");
EXT(YastYdo_module_loader_modules,"ast","do-module-loader-modules");
EXT(Yobject_props,"boot","object-props");
DEF(Yast_evalYenv_names_setter,"ast-eval","env-names-setter");
EXT(YastYsignature_bindings,"ast","signature-bindings");
EXT(YastYapplication_tailQ,"ast","application-tail?");
EXT(YastYfunction_registers_setter,"ast","function-registers-setter");
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
EXT(YprotoScollectionsStableYid_hash,"proto/collections/table","id-hash");
EXT(YprotoSportsYport_index,"proto/ports","port-index");
EXT(YPwith_monitor,"boot","%with-monitor");
EXT(YastYfind_environment_module,"ast","find-environment-module");
EXT(YprotoScollectionsSlistYpop,"proto/collections/list","pop");
EXT(YprotoScollectionsSsequenceY1st,"proto/collections/sequence","1st");
EXT(YprotoSmagnitudesYLE,"proto/magnitudes","<=");
EXT(YastYLglobal_boxG,"ast","<global-box>");
EXT(YastYconstant_index_setter,"ast","constant-index-setter");
EXT(YastYremove_modules_by_nameX,"ast","remove-modules-by-name!");
EXT(YastYLglobal_assignmentG,"ast","<global-assignment>");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YprotoSmathYGG,"proto/math",">>");
EXT(YastYapplication_knownQ_setter,"ast","application-known?-setter");
EXT(YastYast_evaluate,"ast","ast-evaluate");
EXT(YprotoSportsYopen,"proto/ports","open");
EXT(YastYmonitor_handler,"ast","monitor-handler");
EXT(YmacrosYcat_sym,"macros","cat-sym");
EXT(YprotoSmathYoddQ,"proto/math","odd?");
EXT(YmacrosYEE,"macros","==");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YruntimeYcurry,"runtime","curry");
EXT(YastYruntime_environment,"ast","runtime-environment");
EXT(Ysig_names,"boot","sig-names");
EXT(YprotoScollectionsScollectionYmemQ,"proto/collections/collection","mem?");
EXT(YprotoScollectionsScollectionYkey_test,"proto/collections/collection","key-test");
EXT(YastYLargumentsG,"ast","<arguments>");
EXT(YastYapplication_arguments,"ast","application-arguments");
EXT(YastYreference_frame_offset,"ast","reference-frame-offset");
EXT(YastYLast_primitive_definitionG,"ast","<ast-primitive-definition>");
EXT(YastYfunction_data_refs,"ast","function-data-refs");
EXT(YmacrosYrevX,"macros","rev!");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(YastYLlocal_assignmentG,"ast","<local-assignment>");
EXT(YprotoSportsYpeek,"proto/ports","peek");
EXT(YprotoSmathYS,"proto/math","/");
EXT(YprotoScollectionsScollectionYany2Q,"proto/collections/collection","any2?");
EXT(YastYinit_environment_for_eval,"ast","init-environment-for-eval");
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
EXT(YastYlocals_bindings_setter,"ast","locals-bindings-setter");
EXT(YastYcompile_time_program,"ast","compile-time-program");
EXT(YastYLpredefined_applicationG,"ast","<predefined-application>");
EXT(YastYinit_ast,"ast","init-ast");
EXT(YastYassignment_form,"ast","assignment-form");
EXT(YPprop,"boot","%prop");
EXT(YastYbinding_type_setter,"ast","binding-type-setter");
EXT(YastYfunction_bindings,"ast","function-bindings");
EXT(YprotoStypesYtT,"proto/types","t*");
EXT(YastYalternative_alternant,"ast","alternative-alternant");
EXT(YprotoScollectionsStableYtab_hash,"proto/collections/table","tab-hash");
EXT(YprotoSportsYputs,"proto/ports","puts");
EXT(YruntimeYfab_handler,"runtime","fab-handler");
EXT(YprotoScollectionsSbufferYpop_lastX,"proto/collections/buffer","pop-last!");
EXT(YastYassignment_form_setter,"ast","assignment-form-setter");
EXT(YPisa,"boot","%isa");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(YprotoScollectionsScollectionYfoldA,"proto/collections/collection","fold+");
EXT(YprotoScollectionsSbufferYpush_lastX,"proto/collections/buffer","push-last!");
EXT(YreadYread_from_string,"read","read-from-string");
EXT(Yhead,"boot","head");
EXT(YastYconstant_value,"ast","constant-value");
EXT(YastYfunction_debug_name,"ast","function-debug-name");
EXT(YastYDgoo_boot_module_name,"ast","$goo-boot-module-name");
EXT(YprotoScollectionsSstringYstr_to_num,"proto/collections/string","str-to-num");
EXT(YastYfunction_body,"ast","function-body");
EXT(YastYbinding_info_setter,"ast","binding-info-setter");
EXT(YastYLruntime_assignmentG,"ast","<runtime-assignment>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_46);
DEFLIT(lit_16);
DEFLIT(lit_30);
DEFLIT(lit_75);
DEFLIT(lit_7);
DEFLIT(lit_53);
DEFLIT(lit_60);
DEFLIT(lit_73);
DEFLIT(lit_35);
DEFLIT(lit_6);
DEFLIT(lit_0);
DEFLIT(lit_24);
DEFLIT(lit_40);
DEFLIT(lit_45);
DEFLIT(lit_80);
DEFLIT(lit_74);
DEFLIT(lit_56);
DEFLIT(lit_36);
DEFLIT(lit_55);
DEFLIT(lit_65);
DEFLIT(lit_48);
DEFLIT(lit_39);
DEFLIT(lit_51);
DEFLIT(lit_22);
DEFLIT(lit_8);
DEFLIT(lit_38);
DEFLIT(lit_63);
DEFLIT(lit_13);
DEFLIT(lit_57);
DEFLIT(lit_58);
DEFLIT(lit_47);
DEFLIT(lit_11);
DEFLIT(lit_54);
DEFLIT(lit_70);
DEFLIT(lit_1);
DEFLIT(lit_12);
DEFLIT(lit_4);
DEFLIT(lit_77);
DEFLIT(lit_29);
DEFLIT(lit_28);
DEFLIT(lit_33);
DEFLIT(lit_50);
DEFLIT(lit_3);
DEFLIT(lit_41);
DEFLIT(lit_72);
DEFLIT(lit_76);
DEFLIT(lit_49);
DEFLIT(lit_14);
DEFLIT(lit_42);
DEFLIT(lit_37);
DEFLIT(lit_27);
DEFLIT(lit_61);
DEFLIT(lit_52);
DEFLIT(lit_59);
DEFLIT(lit_26);
DEFLIT(lit_25);
DEFLIT(lit_67);
DEFLIT(lit_2);
DEFLIT(lit_17);
DEFLIT(lit_19);
DEFLIT(lit_66);
DEFLIT(lit_69);
DEFLIT(lit_43);
DEFLIT(lit_32);
DEFLIT(lit_44);
DEFLIT(lit_18);
DEFLIT(lit_64);
DEFLIT(lit_31);
DEFLIT(lit_10);
DEFLIT(lit_68);
DEFLIT(lit_9);
DEFLIT(lit_5);
DEFLIT(lit_21);
DEFLIT(lit_81);
DEFLIT(lit_79);
DEFLIT(lit_15);
DEFLIT(lit_71);
DEFLIT(lit_62);
DEFLIT(lit_78);
DEFLIT(lit_20);
DEFLIT(lit_23);
DEFLIT(lit_34);

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
LOCFOR(fun_x_2457_31);
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
  P boxF6150;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(YastYbinding_global_box),b_);
  boxF6150 = T1;
  if (boxF6150 != YPfalse) {
    T3 = CALL1(1,VARREF(YastYglobal_box_value),boxF6150);
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
  P boxF6151;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(value_, 0);
  ARG(b_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYbinding_global_box),b_);
  boxF6151 = T1;
  boxF6151 = BOXFAB(boxF6151);
  T4 = BOXVAL(boxF6151);
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T7 = CALL1(1,VARREF(Ynew),VARREF(YastYLglobal_boxG));
    T6 = CALL2(1,VARREF(YastYbinding_global_box_setter),T7,b_);
    T5 = BOXVAL(boxF6151) = T6;
  } else {
  }
  T9 = BOXVAL(boxF6151);
  T8 = CALL2(1,VARREF(YastYglobal_box_value_setter),value_,T9);
  T0 = T8;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_global_binding_boundQ_2) {
  P b_;
  P boxF6152;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(YastYbinding_global_box),b_);
  boxF6152 = T1;
  if (boxF6152 != YPfalse) {
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
  T0 = CALL1(1,VARREF(YruntimeYloc_val),x_);
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
  T0 = CALL2(1,VARREF(YruntimeYloc_val_setter),v_,x_);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yast_evalYenv_parent));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yast_evalYenv_parent));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yast_evalYenv_function));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yast_evalYenv_function));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yast_evalYenv_names));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yast_evalYenv_names));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yast_evalYenv_values));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yast_evalYenv_values));
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
  P valuesF6153;
  P T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(env_, 0);
  ARG(function_, 1);
  ARG(names_, 2);
  ARG(args_, 3);
loop:
  T1 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLvecG),args_);
  valuesF6153 = T1;
  T2 = CALLN(1,VARREF(Ynew),9,VARREF(Yast_evalYLloc_envG),VARREF(Yast_evalYenv_parent),env_,VARREF(Yast_evalYenv_function),function_,VARREF(Yast_evalYenv_values),valuesF6153,VARREF(Yast_evalYenv_names),names_);
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
  P loopF6154;
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
    loopF6154 = T3;
    FUNINIT(loopF6154, 3,env_,name_,loopF6154);
    T5 = CALL1(1,VARREF(Yast_evalYenv_names),env_);
    T4 = CALL2(0,loopF6154,T5,YPint((P)0));
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
  P loopF6155;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(v_, 0);
  ARG(env_, 1);
  ARG(name_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_22,4);
  loopF6155 = T1;
  FUNINIT(loopF6155, 4,v_,env_,name_,loopF6155);
  T3 = CALL1(1,VARREF(Yast_evalYenv_names),env_);
  T2 = CALL2(0,loopF6155,T3,YPint((P)0));
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
  P typeF6157;
  P specF6156;
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
    specF6156 = T4;
    if (specF6156 != YPfalse) {
      T7 = CALL2(1,VARREF(Yast_evalYast_eval),specF6156,FREEREF(1));
      T6 = T7;
    } else {
      T6 = VARREF(YLanyG);
    }
    typeF6157 = T6;
    T9 = CALL2(1,VARREF(YmacrosYpair),typeF6157,res_);
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
  P loopF6159;
  P nreqF6158;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(specs_, 0);
  ARG(naryQ_, 1);
  ARG(env_, 2);
loop:
  if (naryQ_ != YPfalse) {
    T3 = CALL1(1,VARREF(YprotoStypesYlen),specs_);
    T2 = CALL2(1,VARREF(YprotoSmathY_),T3,YPint((P)1));
    T1 = T2;
  } else {
    T4 = CALL1(1,VARREF(YprotoStypesYlen),specs_);
    T1 = T4;
  }
  nreqF6158 = T1;
  T6 = FUNSHELL(1,fun_loop_28,3);
  loopF6159 = T6;
  FUNINIT(loopF6159, 3,nreqF6158,env_,loopF6159);
  T7 = CALL3(0,loopF6159,Ynil,specs_,YPint((P)0));
  T5 = T7;
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yast_evalYarrange_arguments) {
  P f_,naryQ_,arity_,args_;
  P countF6160;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(naryQ_, 1);
  ARG(arity_, 2);
  ARG(args_, 3);
loop:
  T1 = CALL1(1,VARREF(YprotoStypesYlen),args_);
  countF6160 = T1;
  if (naryQ_ != YPfalse) {
    T4 = CALL2(1,VARREF(YprotoSmagnitudesYL),countF6160,arity_);
    if (T4 != YPfalse) {
      T6 = CALL1(1,VARREF(Yast_evalYas_fun_name),f_);
      T5 = CALLN(1,VARREF(Yerror),4,LITREF(lit_45),T6,args_,arity_);
      T3 = T5;
    } else {
      T8 = CALL3(1,VARREF(YprotoScollectionsSsequenceYsub),args_,YPint((P)0),arity_);
      T10 = CALL3(1,VARREF(YprotoScollectionsSsequenceYsub),args_,arity_,countF6160);
      T9 = CALL1(1,VARREF(Ylst),T10);
      T7 = CALL2(1,VARREF(YprotoScollectionsSsequenceYcat2),T8,T9);
      T3 = T7;
    }
    T2 = T3;
  } else {
    T12 = CALL2(1,VARREF(YprotoSmathYNEE),countF6160,arity_);
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

FUNCODEDEF(fun_x_2457_31) {
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
  P x_2456F6175;
  P x_2456F6174;
  P x_2456F6173;
  P x_2456F6172;
  P x_2456F6171;
  P x_2456F6170;
  P x_2456F6169;
  P bodyF6168;
  P namesF6167;
  P arityF6166;
  P naryQF6165;
  P fF6164;
  P envF6163;
  P x_2456F6162;
  P x_2457F6161;
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
  T1 = FUNSHELL(0,fun_x_2457_31,1);
  x_2457F6161 = T1;
  FUNINIT(x_2457F6161, 1,return_);
  x_2456F6162 = FREEREF(0);
  envF6163 = YPfalse;
  envF6163 = BOXFAB(envF6163);
  fF6164 = YPfalse;
  fF6164 = BOXFAB(fF6164);
  naryQF6165 = YPfalse;
  naryQF6165 = BOXFAB(naryQF6165);
  arityF6166 = YPfalse;
  arityF6166 = BOXFAB(arityF6166);
  namesF6167 = YPfalse;
  namesF6167 = BOXFAB(namesF6167);
  bodyF6168 = YPfalse;
  bodyF6168 = BOXFAB(bodyF6168);
  T15 = CALL2(1,VARREF(YisaQ),x_2456F6162,VARREF(YLlstG));
  if (T15 != YPfalse) {
    T17 = CALL3(1,VARREF(YmacrosYmatch_atom),x_2456F6162,LITREF(lit_51),x_2457F6161);
    x_2456F6169 = T17;
    T19 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2456F6169,x_2457F6161);
    BOXVAL(envF6163) = T19;
    T20 = CALL1(1,VARREF(Ytail),x_2456F6169);
    x_2456F6170 = T20;
    T22 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2456F6170,x_2457F6161);
    BOXVAL(fF6164) = T22;
    T23 = CALL1(1,VARREF(Ytail),x_2456F6170);
    x_2456F6171 = T23;
    T25 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2456F6171,x_2457F6161);
    BOXVAL(naryQF6165) = T25;
    T26 = CALL1(1,VARREF(Ytail),x_2456F6171);
    x_2456F6172 = T26;
    T28 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2456F6172,x_2457F6161);
    BOXVAL(arityF6166) = T28;
    T29 = CALL1(1,VARREF(Ytail),x_2456F6172);
    x_2456F6173 = T29;
    T31 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2456F6173,x_2457F6161);
    BOXVAL(namesF6167) = T31;
    T32 = CALL1(1,VARREF(Ytail),x_2456F6173);
    x_2456F6174 = T32;
    T34 = CALL2(1,VARREF(YmacrosYmatch_unquote),x_2456F6174,x_2457F6161);
    BOXVAL(bodyF6168) = T34;
    T35 = CALL1(1,VARREF(Ytail),x_2456F6174);
    x_2456F6175 = T35;
    T36 = CALL2(1,VARREF(YmacrosYmatch_empty_list),x_2456F6175,x_2457F6161);
    T33 = T36;
    T30 = T33;
    T27 = T30;
    T24 = T27;
    T21 = T24;
    T18 = T21;
    T16 = T18;
  } else {
    T37 = CALL2(1,x_2457F6161,LITREF(lit_52),x_2456F6162);
  }
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_53));
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_54));
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T43 = CALL3(1,VARREF(YmacrosYcat),T44,T45,Ynil);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T41 = CALL2(1,VARREF(YmacrosYcat),T42,Ynil);
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
  T57 = CALLN(1,VARREF(YmacrosYcat),4,T58,T59,T60,Ynil);
  T56 = CALL1(1,VARREF(Ylst),T57);
  T51 = CALLN(1,VARREF(YmacrosYcat),6,T52,T53,T54,T55,T56,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T47 = CALLN(1,VARREF(YmacrosYcat),4,T48,T49,T50,Ynil);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T64 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T67 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T66 = CALL2(1,VARREF(YmacrosYcat),T67,Ynil);
  T65 = CALL1(1,VARREF(Ylst),T66);
  T62 = CALLN(1,VARREF(YmacrosYcat),4,T63,T64,T65,Ynil);
  T61 = CALL1(1,VARREF(Ylst),T62);
  T70 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T71 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T74 = CALL1(1,VARREF(Ylst),LITREF(lit_21));
  T76 = BOXVAL(envF6163);
  T75 = CALL1(1,VARREF(Ylst),T76);
  T78 = BOXVAL(fF6164);
  T77 = CALL1(1,VARREF(Ylst),T78);
  T81 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T83 = BOXVAL(namesF6167);
  T82 = CALL1(1,VARREF(Ylst),T83);
  T86 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T89 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T90 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T88 = CALL3(1,VARREF(YmacrosYcat),T89,T90,Ynil);
  T87 = CALL1(1,VARREF(Ylst),T88);
  T85 = CALL3(1,VARREF(YmacrosYcat),T86,T87,Ynil);
  T84 = CALL1(1,VARREF(Ylst),T85);
  T80 = CALLN(1,VARREF(YmacrosYcat),4,T81,T82,T84,Ynil);
  T79 = CALL1(1,VARREF(Ylst),T80);
  T93 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T94 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
  T97 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T98 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T96 = CALL3(1,VARREF(YmacrosYcat),T97,T98,Ynil);
  T95 = CALL1(1,VARREF(Ylst),T96);
  T92 = CALLN(1,VARREF(YmacrosYcat),4,T93,T94,T95,Ynil);
  T91 = CALL1(1,VARREF(Ylst),T92);
  T73 = CALLN(1,VARREF(YmacrosYcat),6,T74,T75,T77,T79,T91,Ynil);
  T72 = CALL1(1,VARREF(Ylst),T73);
  T69 = CALLN(1,VARREF(YmacrosYcat),4,T70,T71,T72,Ynil);
  T68 = CALL1(1,VARREF(Ylst),T69);
  T102 = BOXVAL(bodyF6168);
  T101 = CALL1(1,VARREF(Ylst),T102);
  T103 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T100 = CALL3(1,VARREF(YmacrosYcat),T101,T103,Ynil);
  T99 = CALL1(1,VARREF(Ylst),T100);
  T38 = CALLN(1,VARREF(YmacrosYcat),7,T39,T40,T46,T61,T68,T99,Ynil);
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
  P frameF6178;
  P nmsF6177;
  P argsF6176;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  NARGS(arg_vector_, 0);
loop:
  T2 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLlstG),arg_vector_);
  T1 = CALLN(1,VARREF(Yast_evalYarrange_arguments),4,FREEREF(0),FREEREF(1),FREEREF(2),T2);
  argsF6176 = T1;
  T4 = (P)YPnext_methods();
  nmsF6177 = T4;
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T7 = CALL2(1,VARREF(YprotoScollectionsSsequenceYcat2),FREEREF(4),T8);
  T10 = CALL1(1,VARREF(Ylst),nmsF6177);
  T9 = CALL2(1,VARREF(YprotoScollectionsSsequenceYcat2),argsF6176,T10);
  T6 = CALLN(1,VARREF(Yast_evalYenv_frameX),4,FREEREF(3),FREEREF(0),T7,T9);
  frameF6178 = T6;
  T11 = CALL1(1,FREEREF(5),frameF6178);
  T5 = T11;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_export_goo_method_41) {
  P f_,names_,specs_,naryQ_,value_,body_,env_;
  P efunF6180;
  P arityF6179;
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
    T3 = CALL1(1,VARREF(YprotoStypesYlen),specs_);
    T2 = CALL2(1,VARREF(YprotoSmathY_),T3,YPint((P)1));
    T1 = T2;
  } else {
    T4 = CALL1(1,VARREF(YprotoStypesYlen),specs_);
    T1 = T4;
  }
  arityF6179 = T1;
  T6 = FUNFAB(fun_40,6,f_,naryQ_,arityF6179,env_,names_,body_);
  efunF6180 = T6;
  T7 = CALL1(1,VARREF(Yast_evalYas_fun_name),f_);
  CALL2(1,VARREF(Yfun_name_setter),T7,efunF6180);
  T9 = CALL3(1,VARREF(Yast_evalYast_eval_specs),specs_,naryQ_,env_);
  if (value_ != YPfalse) {
    T11 = CALL2(1,VARREF(Yast_evalYast_eval),value_,env_);
    T10 = T11;
  } else {
    T10 = VARREF(YLanyG);
  }
  T8 = CALLN(1,VARREF(Ynew),13,VARREF(YLsigG),VARREF(Ysig_names),names_,VARREF(Ysig_specs),T9,VARREF(Ysig_naryQ),naryQ_,VARREF(Ysig_arity),arityF6179,VARREF(Ysig_val),T10,VARREF(Ysig_unification_vars),Ynil);
  CALL2(1,VARREF(Yfun_sig_setter),T8,efunF6180);
  T5 = efunF6180;
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
  P evalF6182;
  P paramsF6181;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYfunction_bindings),e_);
  paramsF6181 = T1;
  T3 = FUNFAB(fun_42,1,e_);
  evalF6182 = T3;
  T5 = CALL2(1,VARREF(YmacrosYmap),VARREF(YastYbinding_name),paramsF6181);
  T6 = CALL2(1,VARREF(YmacrosYmap),VARREF(YastYbinding_type),paramsF6181);
  T7 = CALL1(1,VARREF(YastYfunction_naryQ),e_);
  T8 = CALL1(1,VARREF(YastYfunction_value),e_);
  T4 = CALLN(1,VARREF(Yast_evalYexport_goo_method),7,e_,T5,T6,T7,T8,evalF6182,env_);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_44) {
  P e_,env_;
  P specsF6186;
  P namesF6185;
  P naryQF6184;
  P paramsF6183;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYfunction_bindings),e_);
  paramsF6183 = T1;
  T3 = CALL1(1,VARREF(YastYfunction_naryQ),e_);
  naryQF6184 = T3;
  T5 = CALL2(1,VARREF(YmacrosYmap),VARREF(YastYbinding_name),paramsF6183);
  namesF6185 = T5;
  T8 = CALL2(1,VARREF(YmacrosYmap),VARREF(YastYbinding_type),paramsF6183);
  T7 = CALL3(1,VARREF(Yast_evalYast_eval_specs),T8,naryQF6184,env_);
  specsF6186 = T7;
  T10 = CALL1(1,VARREF(Yast_evalYas_fun_name),e_);
  T9 = CALLN(1,VARREF(Yfab_gen),5,T10,namesF6185,specsF6186,naryQF6184,Ynil);
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
  P x_2459F6188;
  P x_2458F6187;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(binding_, 1);
  ARG(env_, 2);
loop:
  T1 = CALL1(1,VARREF(YastYbinding_kind),binding_);
  x_2458F6187 = T1;
  x_2459F6188 = VARREF(YmacrosYEE);
  T4 = CALL2(1,x_2459F6188,x_2458F6187,LITREF(lit_74));
  if (T4 != YPfalse) {
    T5 = CALL1(1,VARREF(Yast_evalYenv_global_binding_boundQ),binding_);
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
  P valueF6189;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YastYassignment_form),e_);
  T1 = CALL2(1,VARREF(Yast_evalYast_eval),T2,env_);
  valueF6189 = T1;
  T4 = CALL1(1,VARREF(YastYassignment_binding),e_);
  T3 = CALL2(1,VARREF(Yast_evalYenv_global_binding_value_setter),valueF6189,T4);
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
  P valueF6190;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YastYassignment_form),e_);
  T1 = CALL2(1,VARREF(Yast_evalYast_eval),T2,env_);
  valueF6190 = T1;
  T5 = CALL1(1,VARREF(YastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(YastYbinding_locative),T5);
  T3 = CALL2(1,VARREF(Yast_evalYenv_runtime_value_setter),valueF6190,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_56) {
  P e_,env_;
  P valueF6191;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YastYassignment_form),e_);
  T1 = CALL2(1,VARREF(Yast_evalYast_eval),T2,env_);
  valueF6191 = T1;
  T4 = CALL1(1,VARREF(YastYassignment_reference),e_);
  T3 = CALL3(1,VARREF(Yast_evalYenv_local_reference_value_setter),valueF6191,env_,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_define_bindingX_57) {
  P b_,v_;
  P x_2461F6193;
  P x_2460F6192;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(b_, 0);
  ARG(v_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYbinding_kind),b_);
  x_2460F6192 = T1;
  x_2461F6193 = VARREF(YmacrosYEE);
  T4 = CALL2(1,x_2461F6193,x_2460F6192,LITREF(lit_76));
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(YastYbinding_locative),b_);
    T5 = CALL2(1,VARREF(Yast_evalYenv_runtime_value_setter),v_,T6);
    T3 = T5;
  } else {
    T8 = CALL2(1,x_2461F6193,x_2460F6192,LITREF(lit_74));
    if (T8 != YPfalse) {
      T9 = CALL2(1,VARREF(Yast_evalYenv_global_binding_value_setter),v_,b_);
      T7 = T9;
    } else {
      T11 = CALL1(1,VARREF(YastYbinding_kind),b_);
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
  P valueF6194;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YastYassignment_form),e_);
  T1 = CALL2(1,VARREF(Yast_evalYast_eval),T2,env_);
  valueF6194 = T1;
  T3 = CALL1(1,VARREF(YastYassignment_binding),e_);
  CALL2(1,VARREF(Yast_evalYenv_define_bindingX),T3,valueF6194);
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
  P valF6196;
  P nxtF6195;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),e_);
  nxtF6195 = T1;
  T4 = CALL1(1,VARREF(Yhead),e_);
  T3 = CALL2(1,VARREF(Yast_evalYast_eval),T4,FREEREF(0));
  valF6196 = T3;
  T6 = CALL1(1,VARREF(YmacrosYemptyQ),nxtF6195);
  if (T6 != YPfalse) {
    T5 = valF6196;
  } else {
    a1 = nxtF6195;
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
  P evalF6197;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_eval_60,2);
  evalF6197 = T1;
  FUNINIT(evalF6197, 2,env_,evalF6197);
  T2 = CALL1(0,evalF6197,e_);
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
  P evalF6198;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_eval_62,2);
  evalF6198 = T1;
  FUNINIT(evalF6198, 2,evalF6198,env_);
  T2 = CALL2(0,evalF6198,Ynil,e_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_64) {
  P e_,env_;
  P argsF6200;
  P fF6199;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YastYapplication_function),e_);
  T1 = CALL2(1,VARREF(Yast_evalYast_eval),T2,env_);
  fF6199 = T1;
  T5 = CALL1(1,VARREF(YastYapplication_arguments),e_);
  T4 = CALL2(1,VARREF(Yast_evalYast_eval),T5,env_);
  argsF6200 = T4;
  T6 = CALL3(1,VARREF(YmacrosYnapp),fF6199,YPfalse,argsF6200);
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_65) {
  P e_,env_;
  P argsF6204;
  P fF6203;
  P nmsF6202;
  P bF6201;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYapplication_binding),e_);
  bF6201 = T1;
  T4 = CALL1(1,VARREF(YastYbinding_name),bF6201);
  T3 = CALL2(1,VARREF(YmacrosYEE),T4,LITREF(lit_60));
  if (T3 != YPfalse) {
    T6 = CALL2(1,VARREF(Yast_evalYenv_binding_value),env_,LITREF(lit_60));
    nmsF6202 = T6;
    T8 = CALL2(1,VARREF(YmacrosYEE),nmsF6202,VARREF(Ynul));
    if (T8 != YPfalse) {
      T7 = YPfalse;
    } else {
      T7 = nmsF6202;
    }
    T5 = T7;
    T2 = T5;
  } else {
    T10 = CALL1(1,VARREF(YastYbinding_info),bF6201);
    fF6203 = T10;
    T13 = CALL1(1,VARREF(YastYapplication_arguments),e_);
    T12 = CALL2(1,VARREF(Yast_evalYast_eval),T13,env_);
    argsF6204 = T12;
    T14 = CALL3(1,VARREF(YmacrosYnapp),fF6203,YPfalse,argsF6204);
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
  P nenvF6206;
  P argsF6205;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YastYfix_let_arguments),e_);
  T1 = CALL2(1,VARREF(Yast_evalYast_eval),T2,env_);
  argsF6205 = T1;
  T6 = CALL1(1,VARREF(YastYfix_let_bindings),e_);
  T5 = CALL2(1,VARREF(YmacrosYmap),VARREF(YastYbinding_name),T6);
  T4 = CALLN(1,VARREF(Yast_evalYenv_frameX),4,env_,YPfalse,T5,argsF6205);
  nenvF6206 = T4;
  T8 = CALL1(1,VARREF(YastYfix_let_body),e_);
  T7 = CALL2(1,VARREF(Yast_evalYast_eval),T8,nenvF6206);
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
  P new_envF6208;
  P bindingsF6207;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YastYlocals_bindings),e_);
  bindingsF6207 = T1;
  T4 = CALL2(1,VARREF(YmacrosYmap),VARREF(YastYbinding_name),bindingsF6207);
  T6 = CALL1(1,VARREF(YruntimeYalways),VARREF(Ynul));
  T5 = CALL2(1,VARREF(YmacrosYmap),T6,bindingsF6207);
  T3 = CALLN(1,VARREF(Yast_evalYenv_frameX),4,env_,YPfalse,T4,T5);
  new_envF6208 = T3;
  T7 = FUNFAB(fun_67,1,new_envF6208);
  T8 = CALL2(1,VARREF(YmacrosYmap),VARREF(YastYbinding_name),bindingsF6207);
  T10 = CALL2(1,VARREF(YruntimeYrcurry),VARREF(Yast_evalYast_eval),new_envF6208);
  T11 = CALL1(1,VARREF(YastYlocals_functions),e_);
  T9 = CALL2(1,VARREF(YmacrosYmap),T10,T11);
  CALL3(1,VARREF(YprotoScollectionsScollectionYdo2),T7,T8,T9);
  T13 = CALL1(1,VARREF(YastYlocals_body),e_);
  T12 = CALL2(1,VARREF(Yast_evalYast_eval),T13,new_envF6208);
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
  P exitF6210;
  P rprocF6209;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNFAB(fun_69,1,return_);
  rprocF6209 = T1;
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T5 = CALL1(1,VARREF(Ylst),YPfalse);
  T3 = CALLN(1,VARREF(Yast_evalYexport_goo_method),7,rprocF6209,T4,T5,YPfalse,YPfalse,rprocF6209,FREEREF(0));
  exitF6210 = T3;
  T8 = CALL1(1,VARREF(YastYbind_exit_main_fun),FREEREF(1));
  T7 = CALL2(1,VARREF(Yast_evalYast_eval),T8,FREEREF(0));
  T6 = CALL1(1,T7,exitF6210);
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
  P bF6211;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  CALLN(1,VARREF(YastYast_define_binding),4,env_,LITREF(lit_60),YPfalse,LITREF(lit_80));
  T1 = CALLN(1,VARREF(YastYast_define_binding),4,env_,LITREF(lit_81),YPfalse,LITREF(lit_74));
  bF6211 = T1;
  T2 = CALL2(1,VARREF(Yast_evalYenv_global_binding_value_setter),VARREF(YmacrosYpair),bF6211);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P Yast_evalYPdefine_binding(P raw_mod_,P raw_nam_) {
  P eF6212;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T2 = (P)YPPsym(raw_mod_);
  T1 = CALL1(1,VARREF(YastYunchecked_runtime_environment),T2);
  eF6212 = T1;
  T4 = (P)YPPsym(raw_nam_);
  T3 = CALLN(1,VARREF(YastYast_define_binding),4,eF6212,T4,YPfalse,LITREF(lit_74));
  T0 = T3;
  return T0;
}

P Yast_evalYPlookup_binding(P raw_mod_,P raw_nam_) {
  P eF6213;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T2 = (P)YPPsym(raw_mod_);
  T1 = CALL1(1,VARREF(YastYunchecked_runtime_environment),T2);
  eF6213 = T1;
  T4 = (P)YPPsym(raw_nam_);
  T3 = CALL2(1,VARREF(YastYfind_binding),T4,eF6213);
  T0 = T3;
  return T0;
}

P Yast_evalYPensure_binding(P raw_mod_,P raw_nam_) {
  P tmpF6214;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T1 = (P)Yast_evalYPlookup_binding(raw_mod_,raw_nam_);
  tmpF6214 = T1;
  if (tmpF6214 != YPfalse) {
    T2 = tmpF6214;
  } else {
    T3 = (P)Yast_evalYPdefine_binding(raw_mod_,raw_nam_);
    T2 = T3;
  }
  T0 = T2;
  return T0;
}

P Yast_evalYPdlvar_binding(P dlvar_) {
  P bF6215;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T1 = (P)Yast_evalYPdlvar(dlvar_);
  bF6215 = T1;
  T4 = (P)YPiu(YPint((P)0));
  T3 = (P)YOEE(bF6215,T4);
  if (T3 != YPfalse) {
    T7 = (P)Yast_evalYPdlvar_mod(dlvar_);
    T8 = (P)Yast_evalYPdlvar_nam(dlvar_);
    T6 = (P)Yast_evalYPensure_binding(T7,T8);
    T5 = (P)Yast_evalYPdlvar_setter(T6,dlvar_);
    T2 = T5;
  } else {
    T2 = bF6215;
  }
  T0 = T2;
  return T0;
}

P Yast_evalYPbinding_boundQ(P dlvar_) {
  P tmpF6217;
  P bF6216;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T2 = (P)Yast_evalYPdlvar_mod(dlvar_);
  T3 = (P)Yast_evalYPdlvar_nam(dlvar_);
  T1 = (P)Yast_evalYPlookup_binding(T2,T3);
  bF6216 = T1;
  tmpF6217 = bF6216;
  if (tmpF6217 != YPfalse) {
    T6 = CALL1(1,VARREF(YastYbinding_info),bF6216);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T4 = T5;
  T0 = T4;
  return T0;
}

P Yast_evalYPbinding_value(P dlvar_) {
  P bindingF6218;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T1 = (P)Yast_evalYPdlvar_binding(dlvar_);
  bindingF6218 = T1;
  T4 = CALL1(1,VARREF(YastYbinding_kind),bindingF6218);
  T3 = CALL2(1,VARREF(YmacrosYEE),T4,LITREF(lit_76));
  if (T3 != YPfalse) {
    T6 = CALL1(1,VARREF(YastYbinding_locative),bindingF6218);
    T5 = CALL1(1,VARREF(Yast_evalYenv_runtime_value),T6);
    T2 = T5;
  } else {
    T7 = CALL1(1,VARREF(Yast_evalYenv_global_binding_value),bindingF6218);
    T2 = T7;
  }
  T0 = T2;
  return T0;
}

P Yast_evalYPbinding_value_setter(P val_,P dlvar_) {
  P bindingF6219;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T1 = (P)Yast_evalYPdlvar_binding(dlvar_);
  bindingF6219 = T1;
  T4 = CALL1(1,VARREF(YastYbinding_kind),bindingF6219);
  T3 = CALL2(1,VARREF(YmacrosYEE),T4,LITREF(lit_76));
  if (T3 != YPfalse) {
    T6 = CALL1(1,VARREF(YastYbinding_locative),bindingF6219);
    T5 = CALL2(1,VARREF(Yast_evalYenv_runtime_value_setter),val_,T6);
    T2 = T5;
  } else {
    T7 = CALL2(1,VARREF(Yast_evalYenv_global_binding_value_setter),val_,bindingF6219);
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
  CALLN(1,VARREF(YPprop),5,VARREF(Yast_evalYLloc_envG),VARREF(Yast_evalYenv_parent),VARREF(Yast_evalYenv_parent_setter),VARREF(YLanyG),T38);
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
  CALLN(1,VARREF(YPprop),5,VARREF(Yast_evalYLloc_envG),VARREF(Yast_evalYenv_function),VARREF(Yast_evalYenv_function_setter),VARREF(YLanyG),T50);
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
  CALLN(1,VARREF(YPprop),5,VARREF(Yast_evalYLloc_envG),VARREF(Yast_evalYenv_names),VARREF(Yast_evalYenv_names_setter),VARREF(YLlstG),T62);
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
  CALLN(1,VARREF(YPprop),5,VARREF(Yast_evalYLloc_envG),VARREF(Yast_evalYenv_values),VARREF(Yast_evalYenv_values_setter),VARREF(YLvecG),T74);
  T75 = CALL1(1,VARREF(Ynew),VARREF(Yast_evalYLloc_envG));
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
  T108 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_36),T109,Ynil,YPfalse,YPfalse,YPfalse);
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
  lit_49 = YPPsym((P)"x-2457");
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
  fun_x_2457_31 = YPmet(FUNCODEREF(fun_x_2457_31),LITREF(lit_49),T136,ENVNUL,PNUL,YPfalse);
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
  lit_66 = YPPsym((P)"export-goo-method");
  lit_67 = YPPsym((P)"body");
  T169 = YPsig(YPPlist(1,LITREF(lit_54)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(YPPlist(7,LITREF(lit_43),LITREF(lit_24),LITREF(lit_39),LITREF(lit_40),LITREF(lit_4),LITREF(lit_67),LITREF(lit_22)),YPPlist(7,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)7),VARREF(YLanyG),Ynil);
  fun_export_goo_method_41 = YPmet(FUNCODEREF(fun_export_goo_method_41),LITREF(lit_66),T168,ENVNUL,PNUL,YPfalse);
  T172 = BOUNDP(Yast_evalYexport_goo_method);
  if (T172 != YPfalse) {
    T171 = VARREF(Yast_evalYexport_goo_method);
  } else {
    T171 = YPfalse;
  }
  T173 = fun_export_goo_method_41;
  T170 = CALL2(1,VARREF(YPdefine_method),T171,T173);
  VARSET(Yast_evalYexport_goo_method,T170);
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
extern MODULE_INFO module_info_protoScollectionsScollection;
extern MODULE_INFO module_info_protoSports;
extern MODULE_INFO module_info_protoScollectionsSsequence;
extern MODULE_INFO module_info_protoSmath;
extern MODULE_INFO module_info_protoScollectionsSstring;
extern MODULE_INFO module_info_protoScollectionsStable;
extern MODULE_INFO module_info_protoStypes;
extern MODULE_INFO module_info_protoScollectionsSbuffer;
extern MODULE_INFO module_info_protoScollectionsSrange;
extern MODULE_INFO module_info_write;
extern MODULE_INFO module_info_protoScollectionsSlist;
extern MODULE_INFO module_info_protoSmagnitudes;
extern MODULE_INFO module_info_protoScollectionsSmap;
extern MODULE_INFO module_info_protoScollectionsSassoc;
extern MODULE_INFO module_info_syntax;
extern MODULE_INFO module_info_protoScollectionsSstep;
extern MODULE_INFO module_info_read;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {&module_info_macros},
  {&module_info_runtime},
  {&module_info_proto},
  {&module_info_ast},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"<num>", &module_info_boot, "<num>"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"key-type", &module_info_protoScollectionsScollection, "key-type"},
  {"prop-getter", &module_info_boot, "prop-getter"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"in", &module_info_protoSports, "in"},
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
  {"gets", &module_info_protoSports, "gets"},
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
  {"map-keyed", &module_info_protoScollectionsScollection, "map-keyed"},
  {"monitor-test", &module_info_ast, "monitor-test"},
  {"module-name", &module_info_ast, "module-name"},
  {"<monitor>", &module_info_ast, "<monitor>"},
  {"*print-base*", &module_info_protoScollectionsSstring, "*print-base*"},
  {"loc-val-setter", &module_info_runtime, "loc-val-setter"},
  {"<ast-macro-definition>", &module_info_ast, "<ast-macro-definition>"},
  {"mif", &module_info_boot, "mif"},
  {"tab-test", &module_info_protoScollectionsStable, "tab-test"},
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
  {"round/", &module_info_protoSmath, "round/"},
  {"probe-module", &module_info_ast, "probe-module"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"t+", &module_info_protoStypes, "t+"},
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
  {"even?", &module_info_protoSmath, "even?"},
  {"binding-locative", &module_info_ast, "binding-locative"},
  {"%fcos", &module_info_boot, "%fcos"},
  {"monitor-main-thunk", &module_info_ast, "monitor-main-thunk"},
  {"cond", &module_info_macros, "cond"},
  {"%loc-val-setter", &module_info_boot, "%loc-val-setter"},
  {"app", &module_info_macros, "app"},
  {"port-line", &module_info_protoSports, "port-line"},
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
  {"put", &module_info_protoSports, "put"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"dss", &module_info_boot, "dss"},
  {"prop-value-setter", &module_info_boot, "prop-value-setter"},
  {"<alternative>", &module_info_ast, "<alternative>"},
  {"%lu", &module_info_boot, "%lu"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"gen-refs", &module_info_boot, "gen-refs"},
  {"exported", &module_info_macros, "exported"},
  {"not", &module_info_boot, "not"},
  {"-", &module_info_protoSmath, "-"},
  {"incf", &module_info_macros, "incf"},
  {"do-keyed", &module_info_protoScollectionsScollection, "do-keyed"},
  {"module-name-to-relpath", &module_info_ast, "module-name-to-relpath"},
  {"alternative-condition", &module_info_ast, "alternative-condition"},
  {"%get", &module_info_boot, "%get"},
  {"%i+", &module_info_boot, "%i+"},
  {"sub", &module_info_protoScollectionsSsequence, "sub"},
  {"monitor-type", &module_info_ast, "monitor-type"},
  {"%f*", &module_info_boot, "%f*"},
  {"objectify-signature", &module_info_ast, "objectify-signature"},
  {"monitor-info", &module_info_ast, "monitor-info"},
  {"%iu", &module_info_boot, "%iu"},
  {"elt-type", &module_info_protoScollectionsScollection, "elt-type"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"<fix-let>", &module_info_ast, "<fix-let>"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"%gen-src", &module_info_boot, "%gen-src"},
  {"<binding>", &module_info_ast, "<binding>"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"pos", &module_info_protoScollectionsSsequence, "pos"},
  {"fold", &module_info_protoScollectionsScollection, "fold"},
  {"get", &module_info_protoSports, "get"},
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
  {"write-to-string", &module_info_write, "write-to-string"},
  {"function-signature-setter", &module_info_ast, "function-signature-setter"},
  {"rep", &module_info_boot, "rep"},
  {"opf", &module_info_macros, "opf"},
  {"~==", &module_info_protoSmath, "~=="},
  {"flo-bits", &module_info_protoSmath, "flo-bits"},
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
  {"force-out", &module_info_protoSports, "force-out"},
  {"<passive-program>", &module_info_ast, "<passive-program>"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"function-temporaries-setter", &module_info_ast, "function-temporaries-setter"},
  {"case-insensitive-string-equal", &module_info_protoScollectionsStable, "case-insensitive-string-equal"},
  {"binding-name", &module_info_ast, "binding-name"},
  {"<program>", &module_info_ast, "<program>"},
  {"function-free", &module_info_ast, "function-free"},
  {"~=", &module_info_protoSmath, "~="},
  {"binding-type", &module_info_ast, "binding-type"},
  {"t?", &module_info_protoStypes, "t?"},
  {"binding-kind", &module_info_ast, "binding-kind"},
  {"all2?", &module_info_protoStypes, "all2?"},
  {"reject", &module_info_protoScollectionsSsequence, "reject"},
  {"match", &module_info_macros, "match"},
  {"<file-port>", &module_info_protoSports, "<file-port>"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"assert", &module_info_macros, "assert"},
  {"sig-val", &module_info_boot, "sig-val"},
  {"objectify-quotation", &module_info_ast, "objectify-quotation"},
  {"prop-bound?", &module_info_boot, "prop-bound?"},
  {"module-target-environment", &module_info_ast, "module-target-environment"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"signature-names-setter", &module_info_ast, "signature-names-setter"},
  {"<log>", &module_info_boot, "<log>"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"neg", &module_info_protoSmath, "neg"},
  {"|", &module_info_protoSmath, "|"},
  {"all?", &module_info_protoScollectionsScollection, "all?"},
  {"type-object", &module_info_boot, "type-object"},
  {"%open-out-file", &module_info_boot, "%open-out-file"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"write", &module_info_write, "write"},
  {"%c<", &module_info_boot, "%c<"},
  {"%ftan", &module_info_boot, "%ftan"},
  {"<port>", &module_info_protoSports, "<port>"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"<string-out-port>", &module_info_protoSports, "<string-out-port>"},
  {"load-module", &module_info_ast, "load-module"},
  {"<file-out-port>", &module_info_protoSports, "<file-out-port>"},
  {"fix-let-bindings", &module_info_ast, "fix-let-bindings"},
  {"%%sym", &module_info_boot, "%%sym"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"*", &module_info_protoSmath, "*"},
  {"renew", &module_info_macros, "renew"},
  {"round", &module_info_protoSmath, "round"},
  {"bound?-reference", &module_info_ast, "bound?-reference"},
  {"decf", &module_info_macros, "decf"},
  {"%raw", &module_info_boot, "%raw"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"program-type", &module_info_ast, "program-type"},
  {"%ready?", &module_info_boot, "%ready?"},
  {"invoke-handler-interactively", &module_info_runtime, "invoke-handler-interactively"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"%f+", &module_info_boot, "%f+"},
  {"@len", &module_info_boot, "@len"},
  {"1+", &module_info_protoSmath, "1+"},
  {"%vec", &module_info_boot, "%vec"},
  {"%facos", &module_info_boot, "%facos"},
  {"%slen", &module_info_boot, "%slen"},
  {"reference-binding", &module_info_ast, "reference-binding"},
  {"newline", &module_info_protoSports, "newline"},
  {"find", &module_info_protoScollectionsScollection, "find"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"program-type-setter", &module_info_ast, "program-type-setter"},
  {"digit?", &module_info_protoSmath, "digit?"},
  {"unchecked-runtime-environment", &module_info_ast, "unchecked-runtime-environment"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"prop-owner", &module_info_boot, "prop-owner"},
  {"tab-gc-state", &module_info_protoScollectionsStable, "tab-gc-state"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"to-str", &module_info_protoSmath, "to-str"},
  {"fab-setter-name", &module_info_macros, "fab-setter-name"},
  {"%ft", &module_info_boot, "%ft"},
  {"add!", &module_info_protoScollectionsScollection, "add!"},
  {"function-free-setter", &module_info_ast, "function-free-setter"},
  {"%untag", &module_info_boot, "%untag"},
  {"object-class", &module_info_boot, "object-class"},
  {"floor/", &module_info_protoSmath, "floor/"},
  {"push", &module_info_protoScollectionsSlist, "push"},
  {"program-register", &module_info_ast, "program-register"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"reference-frame-number", &module_info_ast, "reference-frame-number"},
  {"signature-arity", &module_info_ast, "signature-arity"},
  {"%fsin", &module_info_boot, "%fsin"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"binding-mutable?", &module_info_ast, "binding-mutable?"},
  {"try", &module_info_boot, "try"},
  {"*report-prop-unbound-errors?*", &module_info_boot, "*report-prop-unbound-errors?*"},
  {"cat2", &module_info_protoScollectionsSsequence, "cat2"},
  {"sub-setter", &module_info_protoScollectionsSsequence, "sub-setter"},
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
  {"<string-port>", &module_info_protoSports, "<string-port>"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"<bound?>", &module_info_ast, "<bound?>"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"<any>", &module_info_boot, "<any>"},
  {"prop-type", &module_info_boot, "prop-type"},
  {"elt-setter", &module_info_protoScollectionsScollection, "elt-setter"},
  {"program-register-setter", &module_info_ast, "program-register-setter"},
  {"seq", &module_info_boot, "seq"},
  {"read", &module_info_runtime, "read"},
  {"<unwind-protect>", &module_info_ast, "<unwind-protect>"},
  {"var-type", &module_info_macros, "var-type"},
  {"<locals>", &module_info_ast, "<locals>"},
  {"%i<", &module_info_boot, "%i<"},
  {"to-upper", &module_info_protoSmath, "to-upper"},
  {"fix-let-types-setter", &module_info_ast, "fix-let-types-setter"},
  {"%selt", &module_info_boot, "%selt"},
  {"pick", &module_info_protoScollectionsSsequence, "pick"},
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
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"case-insensitive-string-hash", &module_info_protoScollectionsStable, "case-insensitive-string-hash"},
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
  {"<str-tab>", &module_info_protoScollectionsStable, "<str-tab>"},
  {"<global-reference>", &module_info_ast, "<global-reference>"},
  {"application-binding", &module_info_ast, "application-binding"},
  {"%force-out", &module_info_boot, "%force-out"},
  {"environment-uses-modules", &module_info_ast, "environment-uses-modules"},
  {"%fsqrt", &module_info_boot, "%fsqrt"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"%prop-unbound-error", &module_info_boot, "%prop-unbound-error"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"%iv", &module_info_boot, "%iv"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"locals-body-setter", &module_info_ast, "locals-body-setter"},
  {"<error>", &module_info_runtime, "<error>"},
  {"reference-called-function?", &module_info_ast, "reference-called-function?"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"display", &module_info_write, "display"},
  {"function-binding", &module_info_ast, "function-binding"},
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
  {"function-self-recursive?-setter", &module_info_ast, "function-self-recursive?-setter"},
  {"<ast-method>", &module_info_ast, "<ast-method>"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"@all2?", &module_info_boot, "@all2?"},
  {"@==", &module_info_boot, "@=="},
  {"<sequential>", &module_info_ast, "<sequential>"},
  {"<ast-function>", &module_info_ast, "<ast-function>"},
  {"add", &module_info_protoScollectionsScollection, "add"},
  {"def-list", &module_info_ast, "def-list"},
  {"quote", &module_info_boot, "quote"},
  {"trunc", &module_info_protoSmath, "trunc"},
  {"%str", &module_info_boot, "%str"},
  {"signature-value-setter", &module_info_ast, "signature-value-setter"},
  {"2nd", &module_info_protoStypes, "2nd"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"=", &module_info_protoSmath, "="},
  {"alpha?", &module_info_protoSmath, "alpha?"},
  {"<ast-primitive>", &module_info_ast, "<ast-primitive>"},
  {"out", &module_info_protoSports, "out"},
  {"ceil", &module_info_protoSmath, "ceil"},
  {"function-registers", &module_info_ast, "function-registers"},
  {"fix-let-arguments", &module_info_ast, "fix-let-arguments"},
  {"fin", &module_info_boot, "fin"},
  {"<col>", &module_info_boot, "<col>"},
  {"esc", &module_info_boot, "esc"},
  {"<class>", &module_info_boot, "<class>"},
  {"%close-in-port", &module_info_boot, "%close-in-port"},
  {"loc-val", &module_info_runtime, "loc-val"},
  {"<regular-application>", &module_info_ast, "<regular-application>"},
  {"<mag>", &module_info_boot, "<mag>"},
  {"to-lower", &module_info_protoSmath, "to-lower"},
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
  {"environment-bindings", &module_info_ast, "environment-bindings"},
  {"%i=", &module_info_boot, "%i="},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"function-signature", &module_info_ast, "function-signature"},
  {"function-self-recursive?", &module_info_ast, "function-self-recursive?"},
  {"constant-index", &module_info_ast, "constant-index"},
  {"def-programs", &module_info_ast, "def-programs"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"<in-port>", &module_info_protoSports, "<in-port>"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"<tab>", &module_info_protoScollectionsScollection, "<tab>"},
  {"<free-environment>", &module_info_ast, "<free-environment>"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"function-source", &module_info_ast, "function-source"},
  {"%i?", &module_info_boot, "%i?"},
  {"%snul", &module_info_boot, "%snul"},
  {"dp", &module_info_boot, "dp"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"str", &module_info_protoScollectionsSstring, "str"},
  {"<local-binding>", &module_info_ast, "<local-binding>"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"function-data-refs-setter", &module_info_ast, "function-data-refs-setter"},
  {"binding-inferred-type", &module_info_ast, "binding-inferred-type"},
  {"elt-or", &module_info_protoScollectionsScollection, "elt-or"},
  {"ast-define-binding", &module_info_ast, "ast-define-binding"},
  {"format", &module_info_runtime, "format"},
  {"%ftanh", &module_info_boot, "%ftanh"},
  {"cat", &module_info_macros, "cat"},
  {"for", &module_info_macros, "for"},
  {"%put", &module_info_boot, "%put"},
  {"bit?", &module_info_protoSmath, "bit?"},
  {"signature-nary?-setter", &module_info_ast, "signature-nary?-setter"},
  {"application-function", &module_info_ast, "application-function"},
  {"function-temporaries", &module_info_ast, "function-temporaries"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"del", &module_info_protoScollectionsScollection, "del"},
  {"binding-inferred-type-setter", &module_info_ast, "binding-inferred-type-setter"},
  {"add-prop", &module_info_boot, "add-prop"},
  {"bound?", &module_info_boot, "bound?"},
  {"$permanent-hash-state", &module_info_protoScollectionsStable, "$permanent-hash-state"},
  {"binding-dynamic-extent?", &module_info_ast, "binding-dynamic-extent?"},
  {"len", &module_info_protoStypes, "len"},
  {"assignment-binding", &module_info_ast, "assignment-binding"},
  {"locals-functions-setter", &module_info_ast, "locals-functions-setter"},
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
  {"t<", &module_info_protoStypes, "t<"},
  {"max", &module_info_protoSmagnitudes, "max"},
  {"<ast-generic>", &module_info_ast, "<ast-generic>"},
  {"%gen-code-setter", &module_info_boot, "%gen-code-setter"},
  {"<type>", &module_info_boot, "<type>"},
  {"napp", &module_info_macros, "napp"},
  {"app-args", &module_info_runtime, "app-args"},
  {"low-elt-setter", &module_info_protoScollectionsScollection, "low-elt-setter"},
  {"function-index-setter", &module_info_ast, "function-index-setter"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"ord-app-mets", &module_info_boot, "ord-app-mets"},
  {"<buf>", &module_info_protoScollectionsSbuffer, "<buf>"},
  {"fab", &module_info_protoScollectionsScollection, "fab"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"<<", &module_info_protoSmath, "<<"},
  {"case-by", &module_info_macros, "case-by"},
  {"function-source-setter", &module_info_ast, "function-source-setter"},
  {"list-handlers", &module_info_runtime, "list-handlers"},
  {"min", &module_info_protoSmagnitudes, "min"},
  {"any?", &module_info_protoStypes, "any?"},
  {"<file-in-port>", &module_info_protoSports, "<file-in-port>"},
  {"module-syntax-environment", &module_info_ast, "module-syntax-environment"},
  {"tab-growth-factor", &module_info_protoScollectionsStable, "tab-growth-factor"},
  {"reference-called-function?-setter", &module_info_ast, "reference-called-function?-setter"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"fix-let-body", &module_info_ast, "fix-let-body"},
  {"always", &module_info_runtime, "always"},
  {"<raw-constant>", &module_info_ast, "<raw-constant>"},
  {"writeln", &module_info_write, "writeln"},
  {"close", &module_info_protoSports, "close"},
  {"set", &module_info_boot, "set"},
  {"loc", &module_info_boot, "loc"},
  {"fill", &module_info_protoScollectionsScollection, "fill"},
  {"%i&", &module_info_boot, "%i&"},
  {"<map>", &module_info_protoScollectionsSmap, "<map>"},
  {"<module-binding>", &module_info_ast, "<module-binding>"},
  {"class-name", &module_info_boot, "class-name"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"identity", &module_info_runtime, "identity"},
  {"swapf", &module_info_macros, "swapf"},
  {"function-body-setter", &module_info_ast, "function-body-setter"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"sequentialize", &module_info_ast, "sequentialize"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"%loc-val", &module_info_boot, "%loc-val"},
  {"as-lst", &module_info_ast, "as-lst"},
  {"do-static-global-bindings", &module_info_ast, "do-static-global-bindings"},
  {"sig", &module_info_runtime, "sig"},
  {"upper?", &module_info_protoSmath, "upper?"},
  {"if", &module_info_boot, "if"},
  {"signature-nary?", &module_info_ast, "signature-nary?"},
  {"1-", &module_info_protoSmath, "1-"},
  {"<local-reference>", &module_info_ast, "<local-reference>"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"<string-in-port>", &module_info_protoSports, "<string-in-port>"},
  {"fix-let-types", &module_info_ast, "fix-let-types"},
  {"dlet", &module_info_macros, "dlet"},
  {"empty", &module_info_protoScollectionsScollection, "empty"},
  {"eof-object?", &module_info_protoSmath, "eof-object?"},
  {"%peek", &module_info_boot, "%peek"},
  {"prop-setter", &module_info_boot, "prop-setter"},
  {"nul", &module_info_boot, "nul"},
  {"assocs-test", &module_info_protoScollectionsSassoc, "assocs-test"},
  {"<runtime-reference>", &module_info_ast, "<runtime-reference>"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"<programs>", &module_info_ast, "<programs>"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"last", &module_info_protoScollectionsSsequence, "last"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"items", &module_info_protoScollectionsScollection, "items"},
  {"now", &module_info_protoScollectionsScollection, "now"},
  {"binding-dotted?", &module_info_ast, "binding-dotted?"},
  {"%fasin", &module_info_boot, "%fasin"},
  {"len/fill-setter", &module_info_protoScollectionsSbuffer, "len/fill-setter"},
  {"<immediate-constant>", &module_info_ast, "<immediate-constant>"},
  {"fun-val", &module_info_boot, "fun-val"},
  {"when", &module_info_macros, "when"},
  {"%it/", &module_info_boot, "%it/"},
  {"<fab-list>", &module_info_ast, "<fab-list>"},
  {"alternative-consequent", &module_info_ast, "alternative-consequent"},
  {"%pair", &module_info_boot, "%pair"},
  {"collect", &module_info_macros, "collect"},
  {"class-ancestors", &module_info_boot, "class-ancestors"},
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
  {"sexpr-signature-parameters", &module_info_syntax, "sexpr-signature-parameters"},
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
  {"with-port", &module_info_protoSports, "with-port"},
  {"locals-body", &module_info_ast, "locals-body"},
  {"binding-dynamic-extent?-setter", &module_info_ast, "binding-dynamic-extent?-setter"},
  {"dc", &module_info_boot, "dc"},
  {"abs", &module_info_protoSmath, "abs"},
  {"floor", &module_info_protoSmath, "floor"},
  {"pair", &module_info_macros, "pair"},
  {"range", &module_info_protoScollectionsSrange, "range"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"range-by", &module_info_protoScollectionsSrange, "range-by"},
  {"module-exports", &module_info_ast, "module-exports"},
  {"signature-bindings-setter", &module_info_ast, "signature-bindings-setter"},
  {"%gen-refs", &module_info_boot, "%gen-refs"},
  {"binding-native-to?", &module_info_ast, "binding-native-to?"},
  {">=", &module_info_protoSmagnitudes, ">="},
  {"<out-port>", &module_info_protoSports, "<out-port>"},
  {"ceiling/", &module_info_protoSmath, "ceiling/"},
  {"$goo-runtime-module-name", &module_info_ast, "$goo-runtime-module-name"},
  {"app-sup", &module_info_macros, "app-sup"},
  {"first-then", &module_info_protoScollectionsSstep, "first-then"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"elt", &module_info_macros, "elt"},
  {"as", &module_info_protoStypes, "as"},
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
  {"signature-value", &module_info_ast, "signature-value"},
  {"unwind-protect-cleanup-thunk", &module_info_ast, "unwind-protect-cleanup-thunk"},
  {"<prop>", &module_info_boot, "<prop>"},
  {"empty?", &module_info_macros, "empty?"},
  {"^", &module_info_protoSmath, "^"},
  {"dl", &module_info_boot, "dl"},
  {"<assocs>", &module_info_protoScollectionsSassoc, "<assocs>"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"%ib", &module_info_boot, "%ib"},
  {"%i*", &module_info_boot, "%i*"},
  {"nil", &module_info_boot, "nil"},
  {"let", &module_info_boot, "let"},
  {"%open-in-file", &module_info_boot, "%open-in-file"},
  {"binding-value-setter", &module_info_ast, "binding-value-setter"},
  {"gen-src", &module_info_boot, "gen-src"},
  {"new", &module_info_boot, "new"},
  {"%f<", &module_info_boot, "%f<"},
  {"use", &module_info_boot, "use"},
  {"binding-global-box-setter", &module_info_ast, "binding-global-box-setter"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"port-contents", &module_info_protoSports, "port-contents"},
  {"fabs", &module_info_protoSmath, "fabs"},
  {"%i!", &module_info_boot, "%i!"},
  {"ready?", &module_info_protoSports, "ready?"},
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
  {"signature-bindings", &module_info_ast, "signature-bindings"},
  {"application-tail?", &module_info_ast, "application-tail?"},
  {"function-registers-setter", &module_info_ast, "function-registers-setter"},
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
  {"id-hash", &module_info_protoScollectionsStable, "id-hash"},
  {"port-index", &module_info_protoSports, "port-index"},
  {"%with-monitor", &module_info_boot, "%with-monitor"},
  {"find-environment-module", &module_info_ast, "find-environment-module"},
  {"%fu", &module_info_boot, "%fu"},
  {"pop", &module_info_protoScollectionsSlist, "pop"},
  {"1st", &module_info_protoScollectionsSsequence, "1st"},
  {"<=", &module_info_protoSmagnitudes, "<="},
  {"<global-box>", &module_info_ast, "<global-box>"},
  {"constant-index-setter", &module_info_ast, "constant-index-setter"},
  {"sup", &module_info_macros, "sup"},
  {"remove-modules-by-name!", &module_info_ast, "remove-modules-by-name!"},
  {"%sb", &module_info_boot, "%sb"},
  {"<global-assignment>", &module_info_ast, "<global-assignment>"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"%os-val", &module_info_boot, "%os-val"},
  {">>", &module_info_protoSmath, ">>"},
  {"application-known?-setter", &module_info_ast, "application-known?-setter"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"ast-evaluate", &module_info_ast, "ast-evaluate"},
  {"open", &module_info_protoSports, "open"},
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
  {"key-test", &module_info_protoScollectionsScollection, "key-test"},
  {"<arguments>", &module_info_ast, "<arguments>"},
  {"application-arguments", &module_info_ast, "application-arguments"},
  {"reference-frame-offset", &module_info_ast, "reference-frame-offset"},
  {"<ast-primitive-definition>", &module_info_ast, "<ast-primitive-definition>"},
  {"function-data-refs", &module_info_ast, "function-data-refs"},
  {"%cu", &module_info_boot, "%cu"},
  {"%current-in-port", &module_info_boot, "%current-in-port"},
  {"rev!", &module_info_macros, "rev!"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"<local-assignment>", &module_info_ast, "<local-assignment>"},
  {"peek", &module_info_protoSports, "peek"},
  {"/", &module_info_protoSmath, "/"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"without-prop-unbound-errors", &module_info_macros, "without-prop-unbound-errors"},
  {"any2?", &module_info_protoScollectionsScollection, "any2?"},
  {"init-environment-for-eval", &module_info_ast, "init-environment-for-eval"},
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
  {"locals-bindings-setter", &module_info_ast, "locals-bindings-setter"},
  {"compile-time-program", &module_info_ast, "compile-time-program"},
  {"<predefined-application>", &module_info_ast, "<predefined-application>"},
  {"init-ast", &module_info_ast, "init-ast"},
  {"fun", &module_info_boot, "fun"},
  {"%bb", &module_info_boot, "%bb"},
  {"assignment-form", &module_info_ast, "assignment-form"},
  {"%prop", &module_info_boot, "%prop"},
  {"binding-type-setter", &module_info_ast, "binding-type-setter"},
  {"function-bindings", &module_info_ast, "function-bindings"},
  {"%process-module", &module_info_boot, "%process-module"},
  {"t*", &module_info_protoStypes, "t*"},
  {"alternative-alternant", &module_info_ast, "alternative-alternant"},
  {"%f-", &module_info_boot, "%f-"},
  {"tab-hash", &module_info_protoScollectionsStable, "tab-hash"},
  {"case", &module_info_macros, "case"},
  {"puts", &module_info_protoSports, "puts"},
  {"fab-handler", &module_info_runtime, "fab-handler"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"pop-last!", &module_info_protoScollectionsSbuffer, "pop-last!"},
  {"assignment-form-setter", &module_info_ast, "assignment-form-setter"},
  {"%isa", &module_info_boot, "%isa"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"fold+", &module_info_protoScollectionsScollection, "fold+"},
  {"push-last!", &module_info_protoScollectionsSbuffer, "push-last!"},
  {"popf", &module_info_macros, "popf"},
  {"read-from-string", &module_info_read, "read-from-string"},
  {"head", &module_info_boot, "head"},
  {"constant-value", &module_info_ast, "constant-value"},
  {"function-debug-name", &module_info_ast, "function-debug-name"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"$goo-boot-module-name", &module_info_ast, "$goo-boot-module-name"},
  {"df", &module_info_boot, "df"},
  {"str-to-num", &module_info_protoScollectionsSstring, "str-to-num"},
  {"function-body", &module_info_ast, "function-body"},
  {"binding-info-setter", &module_info_ast, "binding-info-setter"},
  {"<runtime-assignment>", &module_info_ast, "<runtime-assignment>"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"env-global-binding-value", &Yast_evalYenv_global_binding_value},
  {"env-global-binding-bound?", &Yast_evalYenv_global_binding_boundQ},
  {"env-values", &Yast_evalYenv_values},
  {"%ensure-binding", NULL},
  {"env-binding-value", &Yast_evalYenv_binding_value},
  {"env-function", &Yast_evalYenv_function},
  {"env-define-binding!", &Yast_evalYenv_define_bindingX},
  {"env-frame!", &Yast_evalYenv_frameX},
  {"env-global-binding-value-setter", &Yast_evalYenv_global_binding_value_setter},
  {"*stack*", &Yast_evalYTstackT},
  {"env-local-reference-value-setter", &Yast_evalYenv_local_reference_value_setter},
  {"env-binding-value-setter", &Yast_evalYenv_binding_value_setter},
  {"env-names", &Yast_evalYenv_names},
  {"%dlvar-setter", NULL},
  {"env-parent-setter", &Yast_evalYenv_parent_setter},
  {"as-fun-name", &Yast_evalYas_fun_name},
  {"env-local-value", &Yast_evalYenv_local_value},
  {"env-values-setter", &Yast_evalYenv_values_setter},
  {"export-goo-method", &Yast_evalYexport_goo_method},
  {"$nul-loc-env", &Yast_evalYDnul_loc_env},
  {"<loc-env>", &Yast_evalYLloc_envG},
  {"env-local-reference-value", &Yast_evalYenv_local_reference_value},
  {"env-local-value-setter", &Yast_evalYenv_local_value_setter},
  {"---main-1---", NULL},
  {"%dlvar-mod", NULL},
  {"env-runtime-value-setter", &Yast_evalYenv_runtime_value_setter},
  {"%define-binding", NULL},
  {"%dlvar-binding", NULL},
  {"ast-eval-bound?", &Yast_evalYast_eval_boundQ},
  {"%binding-bound?", NULL},
  {"env-parent", &Yast_evalYenv_parent},
  {"%binding-value-setter", NULL},
  {"%dlvar-nam", NULL},
  {"arrange-arguments", &Yast_evalYarrange_arguments},
  {"env-function-setter", &Yast_evalYenv_function_setter},
  {"ast-eval", &Yast_evalYast_eval},
  {"%lookup-binding", NULL},
  {"env-runtime-value", &Yast_evalYenv_runtime_value},
  {"ast-eval-specs", &Yast_evalYast_eval_specs},
  {"%dlvar", NULL},
  {"env-names-setter", &Yast_evalYenv_names_setter},
  {"ifun", NULL},
  {"---main-0---", NULL},
  {"%binding-value", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"%binding-bound?", "%binding-bound?"},
  {"%binding-value-setter", "%binding-value-setter"},
  {"ast-evaluate", "ast-evaluate"},
  {"init-environment-for-eval", "init-environment-for-eval"},
  {"%binding-value", "%binding-value"},
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

}

/* END OF GENERATED CODE. */
