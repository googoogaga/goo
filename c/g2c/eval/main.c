/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: compiler/main */

EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YLintG,"runtime/boot","<int>");
EXT(YLtupG,"runtime/boot","<tup>");
EXT(YLstrG,"runtime/boot","<str>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScollectionsScollectionYallQ,"goo/collections/collection","all?");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yfun_arity,"runtime/boot","fun-arity");
EXT(YcompilerSastYLruntime_assignmentG,"compiler/ast","<runtime-assignment>");
EXT(YPprop,"runtime/boot","%prop");
EXT(YcompilerSastYLfix_letG,"compiler/ast","<fix-let>");
EXT(YcompilerSastYmodule_target_environment,"compiler/ast","module-target-environment");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YPisa,"runtime/boot","%isa");
EXT(YcompilerStopYload,"compiler/top","load");
EXT(YruntimeSruntimeYloc_val_setter,"runtime/runtime","loc-val-setter");
EXT(YcompilerSastYbinding_global_box,"compiler/ast","binding-global-box");
EXT(YgooScollectionsSbufferYbuf,"goo/collections/buffer","buf");
EXT(YgooScollectionsScollectionYadd,"goo/collections/collection","add");
EXT(YcompilerSastYconstant_index_setter,"compiler/ast","constant-index-setter");
EXT(Ytup,"runtime/boot","tup");
EXT(YgooScollectionsScollectionYany2Q,"goo/collections/collection","any2?");
EXT(YcompilerSastYreference_frame_number,"compiler/ast","reference-frame-number");
EXT(YcompilerSastYast_evaluate,"compiler/ast","ast-evaluate");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YcompilerSastYLimmediate_constantG,"compiler/ast","<immediate-constant>");
EXT(YcompilerSastYenvironment_uses_modules,"compiler/ast","environment-uses-modules");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YgooScollectionsSsequenceYcatX,"goo/collections/sequence","cat!");
EXT(YcompilerSastYobjectify_quotation,"compiler/ast","objectify-quotation");
EXT(YgooSmagnitudeYmax,"goo/magnitude","max");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YcompilerSastYfunction_binding,"compiler/ast","function-binding");
EXT(Yhead_setter,"runtime/boot","head-setter");
EXT(Ytype_class,"runtime/boot","type-class");
EXT(YcompilerSastYbinding_inferred_type,"compiler/ast","binding-inferred-type");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YLunionG,"runtime/boot","<union>");
EXT(YcompilerSastYfix_let_body,"compiler/ast","fix-let-body");
EXT(YcompilerSastYfunction_signature,"compiler/ast","function-signature");
EXT(YgooScollectionsScollectionYnow_setter,"goo/collections/collection","now-setter");
EXT(YruntimeSruntimeYcurry,"runtime/runtime","curry");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YcompilerSastYsignature_specs,"compiler/ast","signature-specs");
EXT(YgooScollectionsScollectionYnxt,"goo/collections/collection","nxt");
EXT(YcompilerStopYframe,"compiler/top","frame");
EXT(YcompilerSastYLfab_listG,"compiler/ast","<fab-list>");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YcompilerSastYLfree_environmentG,"compiler/ast","<free-environment>");
EXT(YcompilerSastYbinding_type,"compiler/ast","binding-type");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YcompilerSastYLunwind_protectG,"compiler/ast","<unwind-protect>");
EXT(YruntimeSruntimeYloc_val,"runtime/runtime","loc-val");
EXT(YruntimeSruntimeYdefault_handler,"runtime/runtime","default-handler");
EXT(YgooScollectionsStableYid_hash,"goo/collections/table","id-hash");
EXT(YcompilerSastYalternative_condition,"compiler/ast","alternative-condition");
EXT(YcompilerSastYfunction_source,"compiler/ast","function-source");
EXT(Yhead,"runtime/boot","head");
EXT(YgooScollectionsScollectionYelt_or,"goo/collections/collection","elt-or");
EXT(YcompilerStopYesctst,"compiler/top","esctst");
EXT(YcompilerSastYLalternativeG,"compiler/ast","<alternative>");
EXT(YcompilerSastYbinding_index_setter,"compiler/ast","binding-index-setter");
EXT(YcompilerStopYtop,"compiler/top","top");
EXT(YcompilerSastYDgoo_boot_module_name,"compiler/ast","$goo-boot-module-name");
EXT(YLnumG,"runtime/boot","<num>");
EXT(YLvecG,"runtime/boot","<vec>");
EXT(YcompilerSastYlocals_body_setter,"compiler/ast","locals-body-setter");
EXT(YcompilerSastYfunction_registers,"compiler/ast","function-registers");
EXT(Yprop_getter,"runtime/boot","prop-getter");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YcompilerSastYbinding_locative,"compiler/ast","binding-locative");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YcompilerSastYmonitor_info,"compiler/ast","monitor-info");
EXT(YgooScollectionsScollectionYinto,"goo/collections/collection","into");
EXT(YgooScollectionsScollectionYempty,"goo/collections/collection","empty");
EXT(Yhandler_info_arguments,"runtime/boot","handler-info-arguments");
EXT(YcompilerSastYsignature_bindings,"compiler/ast","signature-bindings");
EXT(YcompilerSastYmodule_exports,"compiler/ast","module-exports");
EXT(YgooScollectionsScollectionYnow_key,"goo/collections/collection","now-key");
EXT(Yclass_direct_props,"runtime/boot","class-direct-props");
EXT(YcompilerSastYlocals_bindings_setter,"compiler/ast","locals-bindings-setter");
EXT(YcompilerSastYbinding_kind,"compiler/ast","binding-kind");
EXT(YcompilerSastYbinding_dynamic_extentQ,"compiler/ast","binding-dynamic-extent?");
EXT(YLmetG,"runtime/boot","<met>");
EXT(YcompilerSastYunwind_protect_cleanup_thunk,"compiler/ast","unwind-protect-cleanup-thunk");
EXT(YcompilerSastYassignment_form,"compiler/ast","assignment-form");
EXT(YgooScollectionsScollectionYzap,"goo/collections/collection","zap");
EXT(YcompilerStopYbt,"compiler/top","bt");
EXT(YcompilerSastYLmodule_bindingG,"compiler/ast","<module-binding>");
EXT(YcompilerSg2cYg2c_clean,"compiler/g2c","g2c-clean");
EXT(YgooSmagnitudeYmin,"goo/magnitude","min");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YcompilerSastYglobal_box_value_setter,"compiler/ast","global-box-value-setter");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(Yprop_init,"runtime/boot","prop-init");
EXT(YcompilerSastYLreferenceG,"compiler/ast","<reference>");
EXT(YgooScollectionsSassocYLassocsG,"goo/collections/assoc","<assocs>");
EXT(YcompilerSastYmodule_loader_module_type,"compiler/ast","module-loader-module-type");
EXT(YcompilerSastYbinding_module_name,"compiler/ast","binding-module-name");
EXT(YgooScollectionsScollectionYmap2,"goo/collections/collection","map2");
EXT(Yfun_naryQ,"runtime/boot","fun-nary?");
EXT(YPdefine_method,"runtime/boot","%define-method");
EXT(YcompilerSastYLmodule_loaderG,"compiler/ast","<module-loader>");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YcompilerSastYunchecked_runtime_environment,"compiler/ast","unchecked-runtime-environment");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YcompilerSastYapplication_knownQ_setter,"compiler/ast","application-known?-setter");
EXT(YgooScollectionsSsequenceYlast,"goo/collections/sequence","last");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooScollectionsScollectionYnow,"goo/collections/collection","now");
EXT(YLsubclassG,"runtime/boot","<subclass>");
EXT(YcompilerSastYprogram_type_setter,"compiler/ast","program-type-setter");
EXT(YcompilerSastYLglobal_referenceG,"compiler/ast","<global-reference>");
EXT(YruntimeSruntimeYdescribe_condition,"runtime/runtime","describe-condition");
EXT(YcompilerSastYassignment_reference,"compiler/ast","assignment-reference");
EXT(Yclass_descendents,"runtime/boot","class-descendents");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooScollectionsStableYtab_hash,"goo/collections/table","tab-hash");
EXT(YcompilerSastYLargumentsG,"compiler/ast","<arguments>");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YgooScollectionsSlistYpush,"goo/collections/list","push");
DEF(YcompilerSmainYTgoo_dateT,"compiler/main","*goo-date*");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YcompilerSastYLlocal_assignmentG,"compiler/ast","<local-assignment>");
EXT(YcompilerSastYbinding_value,"compiler/ast","binding-value");
EXT(YcompilerSastYfree_environment,"compiler/ast","free-environment");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YcompilerSastYapplication_tailQ,"compiler/ast","application-tail?");
EXT(YcompilerSastYmodule_name_to_relpath,"compiler/ast","module-name-to-relpath");
EXT(Yprop_value_setter,"runtime/boot","prop-value-setter");
EXT(YruntimeSruntimeYapp_args,"runtime/runtime","app-args");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YLchrG,"runtime/boot","<chr>");
EXT(YLflatG,"runtime/boot","<flat>");
EXT(YcompilerSastYfunction_data_refs_setter,"compiler/ast","function-data-refs-setter");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSmathYT,"goo/math","*");
EXT(YsubtypeQ,"runtime/boot","subtype?");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(Ynot,"runtime/boot","not");
EXT(YcompilerSastYLcomputed_programG,"compiler/ast","<computed-program>");
EXT(YcompilerSastYmonitor_type,"compiler/ast","monitor-type");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YcompilerSastYLglobal_assignmentG,"compiler/ast","<global-assignment>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YcompilerSastYlocals_body,"compiler/ast","locals-body");
EXT(YcompilerSg2cYg2c_ast,"compiler/g2c","g2c-ast");
EXT(YruntimeSruntimeYrcurry,"runtime/runtime","rcurry");
EXT(YgooScollectionsSsequenceY3rd,"goo/collections/sequence","3rd");
EXT(YgooScollectionsSsequenceYpos,"goo/collections/sequence","pos");
EXT(YcompilerSastYapplication_knownQ,"compiler/ast","application-known?");
EXT(YcompilerSastYsignature_specs_setter,"compiler/ast","signature-specs-setter");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScollectionsScollectionYfill,"goo/collections/collection","fill");
EXT(YcompilerSastYLast_macro_definitionG,"compiler/ast","<ast-macro-definition>");
EXT(YDmin_int,"runtime/boot","$min-int");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Ylst,"runtime/boot","lst");
EXT(YruntimeSruntimeYDdefault_handler_info,"runtime/runtime","$default-handler-info");
EXT(YcompilerSastYfind_binding,"compiler/ast","find-binding");
EXT(YgooSmagnitudeYGE,"goo/magnitude",">=");
EXT(YruntimeSruntimeYcondition_arguments,"runtime/runtime","condition-arguments");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YcompilerSastYload_module,"compiler/ast","load-module");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScollectionsStableYtab_test,"goo/collections/table","tab-test");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YcompilerSastYreference_called_functionQ_setter,"compiler/ast","reference-called-function?-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YLsingletonG,"runtime/boot","<singleton>");
EXT(YgooScollectionsScollectionYdel,"goo/collections/collection","del");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YcompilerSastYfunction_self_recursiveQ_setter,"compiler/ast","function-self-recursive?-setter");
EXT(YcompilerSastYfab_g2c_module,"compiler/ast","fab-g2c-module");
EXT(YcompilerSastYmodule_name,"compiler/ast","module-name");
EXT(YcompilerSastYsignature_value,"compiler/ast","signature-value");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YcompilerSg2cYg2c_test,"compiler/g2c","g2c-test");
EXT(YLfunG,"runtime/boot","<fun>");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YruntimeSruntimeYread,"runtime/runtime","read");
EXT(YcompilerSastYLbind_exitG,"compiler/ast","<bind-exit>");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YcompilerSg2cYg2c_def_app,"compiler/g2c","g2c-def-app");
EXT(YcompilerSastYfunction_naryQ,"compiler/ast","function-nary?");
EXT(Yprop_boundQ,"runtime/boot","prop-bound?");
EXT(YgooScollectionsScollectionYlow_elt,"goo/collections/collection","low-elt");
EXT(YcompilerSastYapplication_arguments,"compiler/ast","application-arguments");
EXT(YcompilerSastYprogram_register,"compiler/ast","program-register");
EXT(YcompilerSastYbinding_native_toQ,"compiler/ast","binding-native-to?");
EXT(YgooScollectionsScollectionYkeys,"goo/collections/collection","keys");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YcompilerSastYast_define_binding,"compiler/ast","ast-define-binding");
EXT(YLlstG,"runtime/boot","<lst>");
EXT(YcompilerSastYalternative_consequent,"compiler/ast","alternative-consequent");
EXT(YcompilerSastYfix_let_body_setter,"compiler/ast","fix-let-body-setter");
EXT(Yfab_class,"runtime/boot","fab-class");
EXT(YcompilerSastYsignature_arity_setter,"compiler/ast","signature-arity-setter");
EXT(YLlogG,"runtime/boot","<log>");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YruntimeSruntimeYLhandler_infoG,"runtime/runtime","<handler-info>");
EXT(YcompilerSastYbinding_global_box_setter,"compiler/ast","binding-global-box-setter");
EXT(Yfun_specs,"runtime/boot","fun-specs");
EXT(Ytype_object,"runtime/boot","type-object");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YcompilerSastYfix_let_types_setter,"compiler/ast","fix-let-types-setter");
EXT(YgooScollectionsSsequenceYrev,"goo/collections/sequence","rev");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScollectionsSsequenceY1st,"goo/collections/sequence","1st");
EXT(YgooScollectionsStableYcase_insensitive_string_equal,"goo/collections/table","case-insensitive-string-equal");
EXT(YgooScollectionsScollectionYenum,"goo/collections/collection","enum");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YcompilerSg2cYg2c_top,"compiler/g2c","g2c-top");
EXT(Yadd_prop,"runtime/boot","add-prop");
EXT(YcompilerSg2cYg2c_exp,"compiler/g2c","g2c-exp");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmagnitudeYLE,"goo/magnitude","<=");
EXT(YcompilerSastYfunction_data_refs,"compiler/ast","function-data-refs");
EXT(YcompilerSastYLpredefined_applicationG,"compiler/ast","<predefined-application>");
EXT(YgooScollectionsStableYDpermanent_hash_state,"goo/collections/table","$permanent-hash-state");
EXT(YgooScollectionsSrangeYrange_by,"goo/collections/range","range-by");
EXT(YcompilerSastYas_lst,"compiler/ast","as-lst");
EXT(YcompilerSastYLmoduleG,"compiler/ast","<module>");
EXT(YgooScollectionsScollectionYfind,"goo/collections/collection","find");
EXT(Ynil,"runtime/boot","nil");
EXT(YcompilerSastYbinding_dottedQ_setter,"compiler/ast","binding-dotted?-setter");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YgooScollectionsSbufferYlen_setter,"goo/collections/buffer","len-setter");
EXT(YcompilerSastYbinding_type_setter,"compiler/ast","binding-type-setter");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YcompilerSastYLregular_applicationG,"compiler/ast","<regular-application>");
EXT(Yfun_name,"runtime/boot","fun-name");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YruntimeSruntimeYhandler_function,"runtime/runtime","handler-function");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YcompilerSastYLast_primitiveG,"compiler/ast","<ast-primitive>");
EXT(YgooScollectionsSstringYstr_to_num,"goo/collections/string","str-to-num");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YcompilerSastYfunction_self_recursiveQ,"compiler/ast","function-self-recursive?");
EXT(Yprop_owner,"runtime/boot","prop-owner");
EXT(YgooScollectionsScollectionYLtabG,"goo/collections/collection","<tab>");
EXT(YcompilerSastYfunction_temporaries_setter,"compiler/ast","function-temporaries-setter");
EXT(YcompilerSastYdo_static_global_bindings,"compiler/ast","do-static-global-bindings");
EXT(YcompilerSastYsignature_arity,"compiler/ast","signature-arity");
EXT(YcompilerStopYauto_eval,"compiler/top","auto-eval");
EXT(YcompilerSastYobjectify_signature,"compiler/ast","objectify-signature");
EXT(YcompilerSastYfix_let_bindings_setter,"compiler/ast","fix-let-bindings-setter");
EXT(YcompilerSastYfunction_bindings,"compiler/ast","function-bindings");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Yprop_value,"runtime/boot","prop-value");
EXT(YcompilerSastYbinding_index,"compiler/ast","binding-index");
EXT(Yclass_parents,"runtime/boot","class-parents");
EXT(YgooSmagnitudeYG,"goo/magnitude",">");
EXT(YcompilerSastYLglobal_boxG,"compiler/ast","<global-box>");
EXT(YgooSmathYB,"goo/math","&");
EXT(YcompilerSastYmonitor_handler,"compiler/ast","monitor-handler");
EXT(YgooSioSwriteYdisplay,"goo/io/write","display");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YcompilerSastYenvironment_module,"compiler/ast","environment-module");
EXT(YgooScollectionsSmapYfab_map,"goo/collections/map","fab-map");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScollectionsScollectionYkey_test,"goo/collections/collection","key-test");
EXT(YcompilerSastYreference_binding,"compiler/ast","reference-binding");
EXT(YcompilerSastYmodule_syntax_environment,"compiler/ast","module-syntax-environment");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YLseqG,"runtime/boot","<seq>");
EXT(YLanyG,"runtime/boot","<any>");
EXT(Yprop_type,"runtime/boot","prop-type");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YcompilerSastYLast_methodG,"compiler/ast","<ast-method>");
EXT(YcompilerSastYsignature_bindings_setter,"compiler/ast","signature-bindings-setter");
EXT(YcompilerSastYbinding_mutableQ,"compiler/ast","binding-mutable?");
EXT(YcompilerSastYfix_let_arguments_setter,"compiler/ast","fix-let-arguments-setter");
EXT(YcompilerSastYLbindingG,"compiler/ast","<binding>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YruntimeSruntimeYidentity,"runtime/runtime","identity");
EXT(YcompilerSastYreference_called_functionQ,"compiler/ast","reference-called-function?");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yclass_props,"runtime/boot","class-props");
EXT(YcompilerSastYinit_ast,"compiler/ast","init-ast");
EXT(YcompilerSastYfunction_temporaries,"compiler/ast","function-temporaries");
EXT(YgooSmagnitudeYL,"goo/magnitude","<");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YcompilerSastYinit_environment_for_eval,"compiler/ast","init-environment-for-eval");
EXT(YcompilerSastYLconstantG,"compiler/ast","<constant>");
EXT(YcompilerSastYsignature_value_setter,"compiler/ast","signature-value-setter");
EXT(YruntimeSruntimeYcondition_message,"runtime/runtime","condition-message");
EXT(YPprop_unbound_error,"runtime/boot","%prop-unbound-error");
EXT(Yvec,"runtime/boot","vec");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YcompilerSastYbinding_inferred_type_setter,"compiler/ast","binding-inferred-type-setter");
EXT(YgooScollectionsSsequenceYdel_dups,"goo/collections/sequence","del-dups");
EXT(YruntimeSruntimeYfab_handler,"runtime/runtime","fab-handler");
EXT(YgooScollectionsSbufferYLbufG,"goo/collections/buffer","<buf>");
EXT(YgooScollectionsStableYcase_insensitive_string_hash,"goo/collections/table","case-insensitive-string-hash");
EXT(YcompilerSastYDgoo_runtime_module_name,"compiler/ast","$goo-runtime-module-name");
EXT(YcompilerSg2cYg2c_build_app,"compiler/g2c","g2c-build-app");
EXT(YcompilerSastYload_in,"compiler/ast","load-in");
EXT(YcompilerSastYLlocalsG,"compiler/ast","<locals>");
EXT(YcompilerSastYLreal_referenceG,"compiler/ast","<real-reference>");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScollectionsScollectionYkey_type,"goo/collections/collection","key-type");
EXT(YruntimeSruntimeYLconditionG,"runtime/runtime","<condition>");
EXT(Yfun_names,"runtime/boot","fun-names");
EXT(YcompilerSastYmodule_binding,"compiler/ast","module-binding");
EXT(Yhandler_info_message,"runtime/boot","handler-info-message");
EXT(YcompilerSastYinstall_initial_bindings,"compiler/ast","install-initial-bindings");
EXT(Yfind_setter,"runtime/boot","find-setter");
EXT(YcompilerSastYLast_genericG,"compiler/ast","<ast-generic>");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooScollectionsScollectionYfind_or,"goo/collections/collection","find-or");
EXT(YcompilerSastYsignature_naryQ,"compiler/ast","signature-nary?");
EXT(YcompilerSastYunwind_protect_protected_thunk,"compiler/ast","unwind-protect-protected-thunk");
EXT(YgooScollectionsSsequenceYsub_setter,"goo/collections/sequence","sub-setter");
EXT(YgooSmathYE,"goo/math","=");
EXT(YcompilerSsyntaxYsexpr_signature_parameters,"compiler/syntax","sexpr-signature-parameters");
EXT(YcompilerSastYfix_let_bindings,"compiler/ast","fix-let-bindings");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooScollectionsScollectionYfinQ,"goo/collections/collection","fin?");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YcompilerSastYfix_let_arguments,"compiler/ast","fix-let-arguments");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YcompilerSastYapplication_binding,"compiler/ast","application-binding");
EXT(YcompilerSastYreport_undefined_global_bindings,"compiler/ast","report-undefined-global-bindings");
EXT(YcompilerSastYdo_named_static_global_bindings,"compiler/ast","do-named-static-global-bindings");
EXT(YLcolG,"runtime/boot","<col>");
EXT(YLclassG,"runtime/boot","<class>");
EXT(YcompilerStopYdo_stack_frames,"compiler/top","do-stack-frames");
EXT(YcompilerSastYfunction_signature_setter,"compiler/ast","function-signature-setter");
EXT(YcompilerSastYbinding_name,"compiler/ast","binding-name");
EXT(YruntimeSruntimeYformat,"runtime/runtime","format");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YcompilerSastYLprogramG,"compiler/ast","<program>");
EXT(YcompilerStopYparse_in,"compiler/top","parse-in");
EXT(YgooScollectionsScollectionYelt_default,"goo/collections/collection","elt-default");
EXT(YcompilerSastYLast_functionG,"compiler/ast","<ast-function>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YcompilerSastYfix_let_types,"compiler/ast","fix-let-types");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YcompilerSastYfunction_value,"compiler/ast","function-value");
EXT(YgooScollectionsSbufferYlenSfill_setter,"goo/collections/buffer","len/fill-setter");
EXT(YcompilerSastYLdefinitionG,"compiler/ast","<definition>");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YcompilerSastYobjectify_with_subtransaction,"compiler/ast","objectify-with-subtransaction");
EXT(YgooScollectionsSsequenceYdel_vals,"goo/collections/sequence","del-vals");
EXT(Yerror,"runtime/boot","error");
EXT(YruntimeSruntimeYapp_filename,"runtime/runtime","app-filename");
EXT(YcompilerSastYenv_object_name,"compiler/ast","env-object-name");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Ytail_setter,"runtime/boot","tail-setter");
EXT(YgooSmathYA,"goo/math","+");
EXT(YcompilerSastYfunction_debug_name_setter,"compiler/ast","function-debug-name-setter");
EXT(YcompilerSastYprobe_module,"compiler/ast","probe-module");
EXT(YcompilerSastYfunction_body_setter,"compiler/ast","function-body-setter");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScollectionsScollectionYfoldA,"goo/collections/collection","fold+");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScollectionsScollectionYdo2,"goo/collections/collection","do2");
DEF(YcompilerSmainYTgoo_versionT,"compiler/main","*goo-version*");
EXT(YcompilerSastYfunction_body,"compiler/ast","function-body");
EXT(YgooScollectionsSstringYstr,"goo/collections/string","str");
EXT(YcompilerSastYLboundQG,"compiler/ast","<bound?>");
EXT(YcompilerSastYmonitor_main_thunk,"compiler/ast","monitor-main-thunk");
EXT(YgooScollectionsScollectionYlow_elt_setter,"goo/collections/collection","low-elt-setter");
EXT(YcompilerSastYLast_signatureG,"compiler/ast","<ast-signature>");
EXT(YDmax_int,"runtime/boot","$max-int");
EXT(Yfind_getter,"runtime/boot","find-getter");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YcompilerSastYglobal_box_value,"compiler/ast","global-box-value");
EXT(Ytail,"runtime/boot","tail");
EXT(YgooScollectionsSrangeYrange,"goo/collections/range","range");
EXT(YgooScollectionsScollectionYelt_type,"goo/collections/collection","elt-type");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YcompilerSastYfunction_debug_name,"compiler/ast","function-debug-name");
EXT(YgooScollectionsSsequenceYbelow,"goo/collections/sequence","below");
EXT(YgooScollectionsScollectionYLenumG,"goo/collections/collection","<enum>");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YLtypeG,"runtime/boot","<type>");
EXT(Yord_app_mets,"runtime/boot","ord-app-mets");
EXT(YcompilerStopYsave_image,"compiler/top","save-image");
EXT(YcompilerSastYprogram_register_setter,"compiler/ast","program-register-setter");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YcompilerSastYfunction_index_setter,"compiler/ast","function-index-setter");
EXT(YLlocG,"runtime/boot","<loc>");
EXT(YcompilerSastYlocals_bindings,"compiler/ast","locals-bindings");
EXT(YgooScollectionsSbufferYpop_lastX,"goo/collections/buffer","pop-last!");
EXT(YcompilerSastYremove_modules_by_nameX,"compiler/ast","remove-modules-by-name!");
EXT(YcompilerSastYassignment_binding,"compiler/ast","assignment-binding");
EXT(YgooScollectionsScollectionYfab,"goo/collections/collection","fab");
EXT(Ytype_elts,"runtime/boot","type-elts");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YcompilerSastYLapplicationG,"compiler/ast","<application>");
EXT(YgooScollectionsSrangeYfrom,"goo/collections/range","from");
EXT(YgooScollectionsStableYtab_gc_state,"goo/collections/table","tab-gc-state");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YruntimeSruntimeYLsimple_conditionG,"runtime/runtime","<simple-condition>");
EXT(YcompilerSastYbind_exit_main_fun,"compiler/ast","bind-exit-main-fun");
EXT(YgooSmathYround,"goo/math","round");
EXT(YcompilerSastYfunction_index,"compiler/ast","function-index");
EXT(YPPmacro,"runtime/boot","%%macro");
EXT(YcompilerSastYLprogramsG,"compiler/ast","<programs>");
EXT(YcompilerSastYLstatic_global_environmentG,"compiler/ast","<static-global-environment>");
EXT(YruntimeSruntimeYLsimple_errorG,"runtime/runtime","<simple-error>");
EXT(YgooScollectionsSassocYassocs_test,"goo/collections/assoc","assocs-test");
EXT(YgooScollectionsSsequenceYreject,"goo/collections/sequence","reject");
EXT(YcompilerSastYbinding_dottedQ,"compiler/ast","binding-dotted?");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(Ymay_isaQ,"runtime/boot","may-isa?");
EXT(YcompilerSastYset_module_environments,"compiler/ast","set-module-environments");
EXT(YgooScollectionsSlistYLlistG,"goo/collections/list","<list>");
EXT(YcompilerSastYLassignmentG,"compiler/ast","<assignment>");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YLoptsG,"runtime/boot","<opts>");
EXT(YcompilerStopYg2c_eval,"compiler/top","g2c-eval");
EXT(YgooScollectionsStableYtab_shrink_threshold,"goo/collections/table","tab-shrink-threshold");
EXT(Ygen_add_met,"runtime/boot","gen-add-met");
EXT(YcompilerSastYLpassive_programG,"compiler/ast","<passive-program>");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(Yprop_setter,"runtime/boot","prop-setter");
EXT(YruntimeSruntimeYsig,"runtime/runtime","sig");
EXT(Yfun_val,"runtime/boot","fun-val");
EXT(YgooScollectionsStableYtab_growth_threshold,"goo/collections/table","tab-growth-threshold");
EXT(YgooScollectionsScollectionYmap_keyed,"goo/collections/collection","map-keyed");
EXT(YcompilerSastYbinding_info,"compiler/ast","binding-info");
EXT(YgooScollectionsSsequenceYsub,"goo/collections/sequence","sub");
EXT(YcompilerSastYbinding_info_setter,"compiler/ast","binding-info-setter");
EXT(YgooScollectionsScollectionYitems,"goo/collections/collection","items");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YcompilerSastYfunction_free_setter,"compiler/ast","function-free-setter");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YcompilerSastYbinding_dynamic_extentQ_setter,"compiler/ast","binding-dynamic-extent?-setter");
EXT(YcompilerSastYalternative_alternant,"compiler/ast","alternative-alternant");
EXT(YcompilerSastYruntime_environment,"compiler/ast","runtime-environment");
EXT(YcompilerSastYenvironment_bindings,"compiler/ast","environment-bindings");
EXT(Yclass_ancestors,"runtime/boot","class-ancestors");
EXT(YcompilerSastYsignature_naryQ_setter,"compiler/ast","signature-nary?-setter");
EXT(YcompilerSastYassignment_form_setter,"compiler/ast","assignment-form-setter");
EXT(YcompilerSastYLlocal_referenceG,"compiler/ast","<local-reference>");
EXT(YcompilerSastYsignature_names_setter,"compiler/ast","signature-names-setter");
EXT(YcompilerSastYfind_environment_module,"compiler/ast","find-environment-module");
EXT(YcompilerSastYconstant_index,"compiler/ast","constant-index");
EXT(YcompilerSastYbinding_value_setter,"compiler/ast","binding-value-setter");
EXT(YcompilerSastYapplication_function,"compiler/ast","application-function");
EXT(YgooScollectionsStableYtab_growth_factor,"goo/collections/table","tab-growth-factor");
EXT(YgooScollectionsSstepYfirst_then,"goo/collections/step","first-then");
EXT(YLsimple_handler_infoG,"runtime/boot","<simple-handler-info>");
EXT(YcompilerSastYreference_frame_offset,"compiler/ast","reference-frame-offset");
EXT(YcompilerSastYLraw_constantG,"compiler/ast","<raw-constant>");
EXT(YcompilerSastYLast_primitive_definitionG,"compiler/ast","<ast-primitive-definition>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YruntimeSruntimeYLhandlerG,"runtime/runtime","<handler>");
EXT(Yclass_name,"runtime/boot","class-name");
EXT(YcompilerStopYbacktrace,"compiler/top","backtrace");
EXT(YLfloG,"runtime/boot","<flo>");
EXT(YLsymG,"runtime/boot","<sym>");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(Ymet_appQ,"runtime/boot","met-app?");
EXT(YgooScollectionsScollectionYaddX,"goo/collections/collection","add!");
EXT(YcompilerStopYframe_var,"compiler/top","frame-var");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Ynew,"runtime/boot","new");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooScollectionsScollectionYfold,"goo/collections/collection","fold");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YruntimeSruntimeYLserious_conditionG,"runtime/runtime","<serious-condition>");
EXT(YcompilerSastYmonitor_test,"compiler/ast","monitor-test");
EXT(Yfun_mets,"runtime/boot","fun-mets");
EXT(YcompilerSastYboundQ_reference,"compiler/ast","bound?-reference");
EXT(YruntimeSruntimeYcompose,"runtime/runtime","compose");
EXT(YcompilerSastYprogram_type,"compiler/ast","program-type");
EXT(YgooScollectionsSstringYTprint_baseT,"goo/collections/string","*print-base*");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YcompilerSastYdo_module_loader_modules,"compiler/ast","do-module-loader-modules");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YcompilerSastYLsequentialG,"compiler/ast","<sequential>");
EXT(YcompilerSastYlocals_functions_setter,"compiler/ast","locals-functions-setter");
EXT(YcompilerStopYread_file,"compiler/top","read-file");
EXT(Ynul,"runtime/boot","nul");
EXT(YgooScollectionsScollectionYelt_setter,"goo/collections/collection","elt-setter");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScollectionsScollectionYdo_keyed,"goo/collections/collection","do-keyed");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YcompilerSastYconstant_value,"compiler/ast","constant-value");
EXT(YgooScollectionsSsequenceYpick,"goo/collections/sequence","pick");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YcompilerSastYfunction_free,"compiler/ast","function-free");
EXT(YLpropG,"runtime/boot","<prop>");
EXT(YcompilerSastYsequentialize,"compiler/ast","sequentialize");
EXT(YgooScollectionsSrangeYLrangeG,"goo/collections/range","<range>");
EXT(YcompilerSastYlocals_functions,"compiler/ast","locals-functions");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScollectionsSbufferYpush_lastX,"goo/collections/buffer","push-last!");
EXT(YgooScollectionsScollectionYelts,"goo/collections/collection","elts");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScollectionsSsequenceYcat2,"goo/collections/sequence","cat2");
EXT(YgooScollectionsSstepYLstepG,"goo/collections/step","<step>");
EXT(YruntimeSruntimeYhandler_matchesQ,"runtime/runtime","handler-matches?");
EXT(YLgenG,"runtime/boot","<gen>");
EXT(YcompilerSsyntaxYeval,"compiler/syntax","eval");
EXT(YruntimeSruntimeYLerrorG,"runtime/runtime","<error>");
EXT(YgooScollectionsSlistYlist,"goo/collections/list","list");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YcompilerSastYcompile_time_program,"compiler/ast","compile-time-program");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YcompilerSastYLlocal_bindingG,"compiler/ast","<local-binding>");
EXT(YisaQ,"runtime/boot","isa?");
EXT(YcompilerSastYfunction_registers_setter,"compiler/ast","function-registers-setter");
EXT(YcompilerSastYLcompile_timeG,"compiler/ast","<compile-time>");
EXT(YgooScollectionsSmapYLmapG,"goo/collections/map","<map>");
EXT(YcompilerSastYLmonitorG,"compiler/ast","<monitor>");
EXT(YgooScollectionsSlistYpop,"goo/collections/list","pop");
EXT(YgooScollectionsSstringYnum_to_str_base,"goo/collections/string","num-to-str-base");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YcompilerSastYfunction_source_setter,"compiler/ast","function-source-setter");
EXT(YcompilerSastYLmodule_binding_referenceG,"compiler/ast","<module-binding-reference>");
EXT(YgooScollectionsScollectionYmemQ,"goo/collections/collection","mem?");
EXT(YcompilerSastYLruntime_referenceG,"compiler/ast","<runtime-reference>");
EXT(YgooScollectionsStableYLstr_tabG,"goo/collections/table","<str-tab>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YcompilerSastYsignature_names,"compiler/ast","signature-names");
EXT(YruntimeSruntimeYalways,"runtime/runtime","always");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_4);
DEFLIT(lit_6);
DEFLIT(lit_5);
DEFLIT(lit_8);
DEFLIT(lit_10);
DEFLIT(lit_11);
DEFLIT(lit_9);
DEFLIT(lit_2);
DEFLIT(lit_7);
DEFLIT(lit_1);
DEFLIT(lit_3);
DEFLIT(lit_0);

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
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScollectionsScollection;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_runtimeSruntime;
extern MODULE_INFO module_info_gooScollectionsSbuffer;
extern MODULE_INFO module_info_gooScollectionsSsequence;
extern MODULE_INFO module_info_gooSmagnitude;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScollectionsStable;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScollectionsSassoc;
extern MODULE_INFO module_info_gooScollectionsSlist;
extern MODULE_INFO module_info_gooScollectionsSrange;
extern MODULE_INFO module_info_gooScollectionsSstring;
extern MODULE_INFO module_info_gooScollectionsSmap;
extern MODULE_INFO module_info_compilerSsyntax;
extern MODULE_INFO module_info_gooScollectionsSstep;

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
  {"set", &module_info_runtimeSboot, "set"},
  {"abs", &module_info_gooSmath, "abs"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"<int>", &module_info_runtimeSboot, "<int>"},
  {"<tup>", &module_info_runtimeSboot, "<tup>"},
  {"<str>", &module_info_runtimeSboot, "<str>"},
  {"get", &module_info_gooSioSport, "get"},
  {"all?", &module_info_gooScollectionsScollection, "all?"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"fun-arity", &module_info_runtimeSboot, "fun-arity"},
  {"fun", &module_info_runtimeSboot, "fun"},
  {"<runtime-assignment>", &module_info_compilerSast, "<runtime-assignment>"},
  {"%prop", &module_info_runtimeSboot, "%prop"},
  {"<fix-let>", &module_info_compilerSast, "<fix-let>"},
  {"module-target-environment", &module_info_compilerSast, "module-target-environment"},
  {"as", &module_info_gooStypes, "as"},
  {"out", &module_info_gooSioSport, "out"},
  {"%isa", &module_info_runtimeSboot, "%isa"},
  {"load", &module_info_compilerStop, "load"},
  {"loc-val-setter", &module_info_runtimeSruntime, "loc-val-setter"},
  {"binding-global-box", &module_info_compilerSast, "binding-global-box"},
  {"buf", &module_info_gooScollectionsSbuffer, "buf"},
  {"try", &module_info_runtimeSboot, "try"},
  {"add", &module_info_gooScollectionsScollection, "add"},
  {"constant-index-setter", &module_info_compilerSast, "constant-index-setter"},
  {"tup", &module_info_runtimeSboot, "tup"},
  {"any2?", &module_info_gooScollectionsScollection, "any2?"},
  {"reference-frame-number", &module_info_compilerSast, "reference-frame-number"},
  {"ast-evaluate", &module_info_compilerSast, "ast-evaluate"},
  {"%pair", &module_info_runtimeSboot, "%pair"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<immediate-constant>", &module_info_compilerSast, "<immediate-constant>"},
  {"environment-uses-modules", &module_info_compilerSast, "environment-uses-modules"},
  {"dp", &module_info_runtimeSboot, "dp"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {"cat!", &module_info_gooScollectionsSsequence, "cat!"},
  {"objectify-quotation", &module_info_compilerSast, "objectify-quotation"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"max", &module_info_gooSmagnitude, "max"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"function-binding", &module_info_compilerSast, "function-binding"},
  {"ds", &module_info_runtimeSboot, "ds"},
  {"head-setter", &module_info_runtimeSboot, "head-setter"},
  {"type-class", &module_info_runtimeSboot, "type-class"},
  {"binding-inferred-type", &module_info_compilerSast, "binding-inferred-type"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"<union>", &module_info_runtimeSboot, "<union>"},
  {"fix-let-body", &module_info_compilerSast, "fix-let-body"},
  {"function-signature", &module_info_compilerSast, "function-signature"},
  {"now-setter", &module_info_gooScollectionsScollection, "now-setter"},
  {"curry", &module_info_runtimeSruntime, "curry"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"signature-specs", &module_info_compilerSast, "signature-specs"},
  {"nxt", &module_info_gooScollectionsScollection, "nxt"},
  {"frame", &module_info_compilerStop, "frame"},
  {"<fab-list>", &module_info_compilerSast, "<fab-list>"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"~=", &module_info_gooSmath, "~="},
  {"<free-environment>", &module_info_compilerSast, "<free-environment>"},
  {"loc", &module_info_runtimeSboot, "loc"},
  {"binding-type", &module_info_compilerSast, "binding-type"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"def-programs", &module_info_compilerSast, "def-programs"},
  {"<unwind-protect>", &module_info_compilerSast, "<unwind-protect>"},
  {"loc-val", &module_info_runtimeSruntime, "loc-val"},
  {"default-handler", &module_info_runtimeSruntime, "default-handler"},
  {"id-hash", &module_info_gooScollectionsStable, "id-hash"},
  {"alternative-condition", &module_info_compilerSast, "alternative-condition"},
  {"function-source", &module_info_compilerSast, "function-source"},
  {"head", &module_info_runtimeSboot, "head"},
  {"elt-or", &module_info_gooScollectionsScollection, "elt-or"},
  {"esctst", &module_info_compilerStop, "esctst"},
  {"<alternative>", &module_info_compilerSast, "<alternative>"},
  {"binding-index-setter", &module_info_compilerSast, "binding-index-setter"},
  {"top", &module_info_compilerStop, "top"},
  {"$goo-boot-module-name", &module_info_compilerSast, "$goo-boot-module-name"},
  {"when", &module_info_gooSmacros, "when"},
  {"<num>", &module_info_runtimeSboot, "<num>"},
  {"<vec>", &module_info_runtimeSboot, "<vec>"},
  {"locals-body-setter", &module_info_compilerSast, "locals-body-setter"},
  {"function-registers", &module_info_compilerSast, "function-registers"},
  {"prop-getter", &module_info_runtimeSboot, "prop-getter"},
  {"in", &module_info_gooSioSport, "in"},
  {"binding-locative", &module_info_compilerSast, "binding-locative"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"monitor-info", &module_info_compilerSast, "monitor-info"},
  {"into", &module_info_gooScollectionsScollection, "into"},
  {"empty", &module_info_gooScollectionsScollection, "empty"},
  {"handler-info-arguments", &module_info_runtimeSboot, "handler-info-arguments"},
  {"signature-bindings", &module_info_compilerSast, "signature-bindings"},
  {"module-exports", &module_info_compilerSast, "module-exports"},
  {"now-key", &module_info_gooScollectionsScollection, "now-key"},
  {"class-direct-props", &module_info_runtimeSboot, "class-direct-props"},
  {"locals-bindings-setter", &module_info_compilerSast, "locals-bindings-setter"},
  {"mif", &module_info_runtimeSboot, "mif"},
  {"binding-kind", &module_info_compilerSast, "binding-kind"},
  {"export", &module_info_runtimeSboot, "export"},
  {"binding-dynamic-extent?", &module_info_compilerSast, "binding-dynamic-extent?"},
  {"<met>", &module_info_runtimeSboot, "<met>"},
  {"unwind-protect-cleanup-thunk", &module_info_compilerSast, "unwind-protect-cleanup-thunk"},
  {"assignment-form", &module_info_compilerSast, "assignment-form"},
  {"zap", &module_info_gooScollectionsScollection, "zap"},
  {"bt", &module_info_compilerStop, "bt"},
  {"<module-binding>", &module_info_compilerSast, "<module-binding>"},
  {"g2c-clean", &module_info_compilerSg2c, "g2c-clean"},
  {"min", &module_info_gooSmagnitude, "min"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"global-box-value-setter", &module_info_compilerSast, "global-box-value-setter"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"prop-init", &module_info_runtimeSboot, "prop-init"},
  {"<reference>", &module_info_compilerSast, "<reference>"},
  {"<assocs>", &module_info_gooScollectionsSassoc, "<assocs>"},
  {"module-loader-module-type", &module_info_compilerSast, "module-loader-module-type"},
  {"binding-module-name", &module_info_compilerSast, "binding-module-name"},
  {"map2", &module_info_gooScollectionsScollection, "map2"},
  {"fun-nary?", &module_info_runtimeSboot, "fun-nary?"},
  {"%define-method", &module_info_runtimeSboot, "%define-method"},
  {"<module-loader>", &module_info_compilerSast, "<module-loader>"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"unchecked-runtime-environment", &module_info_compilerSast, "unchecked-runtime-environment"},
  {"app", &module_info_gooSmacros, "app"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"application-known?-setter", &module_info_compilerSast, "application-known?-setter"},
  {"last", &module_info_gooScollectionsSsequence, "last"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"now", &module_info_gooScollectionsScollection, "now"},
  {"<subclass>", &module_info_runtimeSboot, "<subclass>"},
  {"program-type-setter", &module_info_compilerSast, "program-type-setter"},
  {"<global-reference>", &module_info_compilerSast, "<global-reference>"},
  {"describe-condition", &module_info_runtimeSruntime, "describe-condition"},
  {"assignment-reference", &module_info_compilerSast, "assignment-reference"},
  {"while", &module_info_gooSmacros, "while"},
  {"class-descendents", &module_info_runtimeSboot, "class-descendents"},
  {"t*", &module_info_gooStypes, "t*"},
  {"tab-hash", &module_info_gooScollectionsStable, "tab-hash"},
  {"<arguments>", &module_info_compilerSast, "<arguments>"},
  {"even?", &module_info_gooSmath, "even?"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"push", &module_info_gooScollectionsSlist, "push"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"<local-assignment>", &module_info_compilerSast, "<local-assignment>"},
  {"fin", &module_info_runtimeSboot, "fin"},
  {"binding-value", &module_info_compilerSast, "binding-value"},
  {"free-environment", &module_info_compilerSast, "free-environment"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"dc", &module_info_runtimeSboot, "dc"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"application-tail?", &module_info_compilerSast, "application-tail?"},
  {"module-name-to-relpath", &module_info_compilerSast, "module-name-to-relpath"},
  {"prop-value-setter", &module_info_runtimeSboot, "prop-value-setter"},
  {"app-args", &module_info_runtimeSruntime, "app-args"},
  {"1-", &module_info_gooSmath, "1-"},
  {"<chr>", &module_info_runtimeSboot, "<chr>"},
  {"<flat>", &module_info_runtimeSboot, "<flat>"},
  {"function-data-refs-setter", &module_info_compilerSast, "function-data-refs-setter"},
  {"put", &module_info_gooSioSport, "put"},
  {"*", &module_info_gooSmath, "*"},
  {"subtype?", &module_info_runtimeSboot, "subtype?"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"not", &module_info_runtimeSboot, "not"},
  {"<computed-program>", &module_info_compilerSast, "<computed-program>"},
  {"monitor-type", &module_info_compilerSast, "monitor-type"},
  {"ct", &module_info_runtimeSboot, "ct"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"<global-assignment>", &module_info_compilerSast, "<global-assignment>"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"locals-body", &module_info_compilerSast, "locals-body"},
  {"g2c-ast", &module_info_compilerSg2c, "g2c-ast"},
  {"rcurry", &module_info_runtimeSruntime, "rcurry"},
  {"3rd", &module_info_gooScollectionsSsequence, "3rd"},
  {"pos", &module_info_gooScollectionsSsequence, "pos"},
  {"application-known?", &module_info_compilerSast, "application-known?"},
  {"signature-specs-setter", &module_info_compilerSast, "signature-specs-setter"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"fill", &module_info_gooScollectionsScollection, "fill"},
  {"<ast-macro-definition>", &module_info_compilerSast, "<ast-macro-definition>"},
  {"$min-int", &module_info_runtimeSboot, "$min-int"},
  {"~", &module_info_gooSmath, "~"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"lst", &module_info_runtimeSboot, "lst"},
  {"$default-handler-info", &module_info_runtimeSruntime, "$default-handler-info"},
  {"find-binding", &module_info_compilerSast, "find-binding"},
  {">=", &module_info_gooSmagnitude, ">="},
  {"condition-arguments", &module_info_runtimeSruntime, "condition-arguments"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"load-module", &module_info_compilerSast, "load-module"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"~==", &module_info_gooSmath, "~=="},
  {"tab-test", &module_info_gooScollectionsStable, "tab-test"},
  {"map", &module_info_gooSmacros, "map"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"reference-called-function?-setter", &module_info_compilerSast, "reference-called-function?-setter"},
  {"t+", &module_info_gooStypes, "t+"},
  {"<singleton>", &module_info_runtimeSboot, "<singleton>"},
  {"del", &module_info_gooScollectionsScollection, "del"},
  {">>", &module_info_gooSmath, ">>"},
  {"function-self-recursive?-setter", &module_info_compilerSast, "function-self-recursive?-setter"},
  {"fab-g2c-module", &module_info_compilerSast, "fab-g2c-module"},
  {"module-name", &module_info_compilerSast, "module-name"},
  {"signature-value", &module_info_compilerSast, "signature-value"},
  {"round/", &module_info_gooSmath, "round/"},
  {"g2c-test", &module_info_compilerSg2c, "g2c-test"},
  {"<fun>", &module_info_runtimeSboot, "<fun>"},
  {"1+", &module_info_gooSmath, "1+"},
  {"read", &module_info_runtimeSruntime, "read"},
  {"match", &module_info_gooSmacros, "match"},
  {"<bind-exit>", &module_info_compilerSast, "<bind-exit>"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"g2c-def-app", &module_info_compilerSg2c, "g2c-def-app"},
  {"function-nary?", &module_info_compilerSast, "function-nary?"},
  {"prop-bound?", &module_info_runtimeSboot, "prop-bound?"},
  {"low-elt", &module_info_gooScollectionsScollection, "low-elt"},
  {"application-arguments", &module_info_compilerSast, "application-arguments"},
  {"program-register", &module_info_compilerSast, "program-register"},
  {"binding-native-to?", &module_info_compilerSast, "binding-native-to?"},
  {"dg", &module_info_runtimeSboot, "dg"},
  {"keys", &module_info_gooScollectionsScollection, "keys"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"ast-define-binding", &module_info_compilerSast, "ast-define-binding"},
  {"<lst>", &module_info_runtimeSboot, "<lst>"},
  {"alternative-consequent", &module_info_compilerSast, "alternative-consequent"},
  {"fix-let-body-setter", &module_info_compilerSast, "fix-let-body-setter"},
  {"fab-class", &module_info_runtimeSboot, "fab-class"},
  {"signature-arity-setter", &module_info_compilerSast, "signature-arity-setter"},
  {"<log>", &module_info_runtimeSboot, "<log>"},
  {"^", &module_info_gooSmath, "^"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"<handler-info>", &module_info_runtimeSruntime, "<handler-info>"},
  {"binding-global-box-setter", &module_info_compilerSast, "binding-global-box-setter"},
  {"fun-specs", &module_info_runtimeSboot, "fun-specs"},
  {"type-object", &module_info_runtimeSboot, "type-object"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"fix-let-types-setter", &module_info_compilerSast, "fix-let-types-setter"},
  {"rev", &module_info_gooScollectionsSsequence, "rev"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"1st", &module_info_gooScollectionsSsequence, "1st"},
  {"case-insensitive-string-equal", &module_info_gooScollectionsStable, "case-insensitive-string-equal"},
  {"quote", &module_info_runtimeSboot, "quote"},
  {"enum", &module_info_gooScollectionsScollection, "enum"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"g2c-top", &module_info_compilerSg2c, "g2c-top"},
  {"add-prop", &module_info_runtimeSboot, "add-prop"},
  {"g2c-exp", &module_info_compilerSg2c, "g2c-exp"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"<=", &module_info_gooSmagnitude, "<="},
  {"function-data-refs", &module_info_compilerSast, "function-data-refs"},
  {"<predefined-application>", &module_info_compilerSast, "<predefined-application>"},
  {"$permanent-hash-state", &module_info_gooScollectionsStable, "$permanent-hash-state"},
  {"range-by", &module_info_gooScollectionsSrange, "range-by"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"as-lst", &module_info_compilerSast, "as-lst"},
  {"<module>", &module_info_compilerSast, "<module>"},
  {"find", &module_info_gooScollectionsScollection, "find"},
  {"nil", &module_info_runtimeSboot, "nil"},
  {"binding-dotted?-setter", &module_info_compilerSast, "binding-dotted?-setter"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"len-setter", &module_info_gooScollectionsSbuffer, "len-setter"},
  {"binding-type-setter", &module_info_compilerSast, "binding-type-setter"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"<regular-application>", &module_info_compilerSast, "<regular-application>"},
  {"fun-name", &module_info_runtimeSboot, "fun-name"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"handler-function", &module_info_runtimeSruntime, "handler-function"},
  {"dm", &module_info_runtimeSboot, "dm"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"<ast-primitive>", &module_info_compilerSast, "<ast-primitive>"},
  {"str-to-num", &module_info_gooScollectionsSstring, "str-to-num"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"function-self-recursive?", &module_info_compilerSast, "function-self-recursive?"},
  {"prop-owner", &module_info_runtimeSboot, "prop-owner"},
  {"<tab>", &module_info_gooScollectionsScollection, "<tab>"},
  {"function-temporaries-setter", &module_info_compilerSast, "function-temporaries-setter"},
  {"do-static-global-bindings", &module_info_compilerSast, "do-static-global-bindings"},
  {"signature-arity", &module_info_compilerSast, "signature-arity"},
  {"auto-eval", &module_info_compilerStop, "auto-eval"},
  {"objectify-signature", &module_info_compilerSast, "objectify-signature"},
  {"fix-let-bindings-setter", &module_info_compilerSast, "fix-let-bindings-setter"},
  {"function-bindings", &module_info_compilerSast, "function-bindings"},
  {"rem", &module_info_gooSmath, "rem"},
  {"prop-value", &module_info_runtimeSboot, "prop-value"},
  {"binding-index", &module_info_compilerSast, "binding-index"},
  {"class-parents", &module_info_runtimeSboot, "class-parents"},
  {">", &module_info_gooSmagnitude, ">"},
  {"<global-box>", &module_info_compilerSast, "<global-box>"},
  {"&", &module_info_gooSmath, "&"},
  {"monitor-handler", &module_info_compilerSast, "monitor-handler"},
  {"display", &module_info_gooSioSwrite, "display"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"environment-module", &module_info_compilerSast, "environment-module"},
  {"fab-map", &module_info_gooScollectionsSmap, "fab-map"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"|", &module_info_gooSmath, "|"},
  {"key-test", &module_info_gooScollectionsScollection, "key-test"},
  {"df", &module_info_runtimeSboot, "df"},
  {"reference-binding", &module_info_compilerSast, "reference-binding"},
  {"module-syntax-environment", &module_info_compilerSast, "module-syntax-environment"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<seq>", &module_info_runtimeSboot, "<seq>"},
  {"<any>", &module_info_runtimeSboot, "<any>"},
  {"prop-type", &module_info_runtimeSboot, "prop-type"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"<ast-method>", &module_info_compilerSast, "<ast-method>"},
  {"signature-bindings-setter", &module_info_compilerSast, "signature-bindings-setter"},
  {"binding-mutable?", &module_info_compilerSast, "binding-mutable?"},
  {"quasiquote", &module_info_runtimeSboot, "quasiquote"},
  {"fix-let-arguments-setter", &module_info_compilerSast, "fix-let-arguments-setter"},
  {"<binding>", &module_info_compilerSast, "<binding>"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"identity", &module_info_runtimeSruntime, "identity"},
  {"reference-called-function?", &module_info_compilerSast, "reference-called-function?"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"class-props", &module_info_runtimeSboot, "class-props"},
  {"init-ast", &module_info_compilerSast, "init-ast"},
  {"function-temporaries", &module_info_compilerSast, "function-temporaries"},
  {"<", &module_info_gooSmagnitude, "<"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"init-environment-for-eval", &module_info_compilerSast, "init-environment-for-eval"},
  {"<constant>", &module_info_compilerSast, "<constant>"},
  {"signature-value-setter", &module_info_compilerSast, "signature-value-setter"},
  {"condition-message", &module_info_runtimeSruntime, "condition-message"},
  {"%prop-unbound-error", &module_info_runtimeSboot, "%prop-unbound-error"},
  {"vec", &module_info_runtimeSboot, "vec"},
  {"close", &module_info_gooSioSport, "close"},
  {"binding-inferred-type-setter", &module_info_compilerSast, "binding-inferred-type-setter"},
  {"del-dups", &module_info_gooScollectionsSsequence, "del-dups"},
  {"fab-handler", &module_info_runtimeSruntime, "fab-handler"},
  {"<buf>", &module_info_gooScollectionsSbuffer, "<buf>"},
  {"case-insensitive-string-hash", &module_info_gooScollectionsStable, "case-insensitive-string-hash"},
  {"$goo-runtime-module-name", &module_info_compilerSast, "$goo-runtime-module-name"},
  {"g2c-build-app", &module_info_compilerSg2c, "g2c-build-app"},
  {"load-in", &module_info_compilerSast, "load-in"},
  {"<locals>", &module_info_compilerSast, "<locals>"},
  {"<real-reference>", &module_info_compilerSast, "<real-reference>"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"key-type", &module_info_gooScollectionsScollection, "key-type"},
  {"<condition>", &module_info_runtimeSruntime, "<condition>"},
  {"fun-names", &module_info_runtimeSboot, "fun-names"},
  {"module-binding", &module_info_compilerSast, "module-binding"},
  {"handler-info-message", &module_info_runtimeSboot, "handler-info-message"},
  {"install-initial-bindings", &module_info_compilerSast, "install-initial-bindings"},
  {"find-setter", &module_info_runtimeSboot, "find-setter"},
  {"<ast-generic>", &module_info_compilerSast, "<ast-generic>"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"find-or", &module_info_gooScollectionsScollection, "find-or"},
  {"if", &module_info_runtimeSboot, "if"},
  {"signature-nary?", &module_info_compilerSast, "signature-nary?"},
  {"use", &module_info_runtimeSboot, "use"},
  {"unwind-protect-protected-thunk", &module_info_compilerSast, "unwind-protect-protected-thunk"},
  {"sub-setter", &module_info_gooScollectionsSsequence, "sub-setter"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"=", &module_info_gooSmath, "="},
  {"sexpr-signature-parameters", &module_info_compilerSsyntax, "sexpr-signature-parameters"},
  {"fix-let-bindings", &module_info_compilerSast, "fix-let-bindings"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"rep", &module_info_runtimeSboot, "rep"},
  {"fin?", &module_info_gooScollectionsScollection, "fin?"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"isa", &module_info_runtimeSboot, "isa"},
  {"or", &module_info_gooSmacros, "or"},
  {"macro-expand", &module_info_runtimeSboot, "macro-expand"},
  {"fix-let-arguments", &module_info_compilerSast, "fix-let-arguments"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"until", &module_info_gooSmacros, "until"},
  {"application-binding", &module_info_compilerSast, "application-binding"},
  {"report-undefined-global-bindings", &module_info_compilerSast, "report-undefined-global-bindings"},
  {"do-named-static-global-bindings", &module_info_compilerSast, "do-named-static-global-bindings"},
  {"esc", &module_info_runtimeSboot, "esc"},
  {"<col>", &module_info_runtimeSboot, "<col>"},
  {"<class>", &module_info_runtimeSboot, "<class>"},
  {"do-stack-frames", &module_info_compilerStop, "do-stack-frames"},
  {"function-signature-setter", &module_info_compilerSast, "function-signature-setter"},
  {"binding-name", &module_info_compilerSast, "binding-name"},
  {"format", &module_info_runtimeSruntime, "format"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%next-methods", &module_info_runtimeSboot, "%next-methods"},
  {"<program>", &module_info_compilerSast, "<program>"},
  {"parse-in", &module_info_compilerStop, "parse-in"},
  {"elt-default", &module_info_gooScollectionsScollection, "elt-default"},
  {"<ast-function>", &module_info_compilerSast, "<ast-function>"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"fix-let-types", &module_info_compilerSast, "fix-let-types"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"function-value", &module_info_compilerSast, "function-value"},
  {"len/fill-setter", &module_info_gooScollectionsSbuffer, "len/fill-setter"},
  {"<definition>", &module_info_compilerSast, "<definition>"},
  {"def", &module_info_runtimeSboot, "def"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"mod", &module_info_gooSmath, "mod"},
  {"objectify-with-subtransaction", &module_info_compilerSast, "objectify-with-subtransaction"},
  {"del-vals", &module_info_gooScollectionsSsequence, "del-vals"},
  {"error", &module_info_runtimeSboot, "error"},
  {"app-filename", &module_info_runtimeSruntime, "app-filename"},
  {"env-object-name", &module_info_compilerSast, "env-object-name"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"tail-setter", &module_info_runtimeSboot, "tail-setter"},
  {"+", &module_info_gooSmath, "+"},
  {"function-debug-name-setter", &module_info_compilerSast, "function-debug-name-setter"},
  {"probe-module", &module_info_compilerSast, "probe-module"},
  {"function-body-setter", &module_info_compilerSast, "function-body-setter"},
  {"<<", &module_info_gooSmath, "<<"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"fold+", &module_info_gooScollectionsScollection, "fold+"},
  {"seq", &module_info_runtimeSboot, "seq"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"do2", &module_info_gooScollectionsScollection, "do2"},
  {"and", &module_info_gooSmacros, "and"},
  {"function-body", &module_info_compilerSast, "function-body"},
  {"str", &module_info_gooScollectionsSstring, "str"},
  {"<bound?>", &module_info_compilerSast, "<bound?>"},
  {"monitor-main-thunk", &module_info_compilerSast, "monitor-main-thunk"},
  {"low-elt-setter", &module_info_gooScollectionsScollection, "low-elt-setter"},
  {"<ast-signature>", &module_info_compilerSast, "<ast-signature>"},
  {"ct-also", &module_info_runtimeSboot, "ct-also"},
  {"$max-int", &module_info_runtimeSboot, "$max-int"},
  {"find-getter", &module_info_runtimeSboot, "find-getter"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"global-box-value", &module_info_compilerSast, "global-box-value"},
  {"tail", &module_info_runtimeSboot, "tail"},
  {"range", &module_info_gooScollectionsSrange, "range"},
  {"elt-type", &module_info_gooScollectionsScollection, "elt-type"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"function-debug-name", &module_info_compilerSast, "function-debug-name"},
  {"below", &module_info_gooScollectionsSsequence, "below"},
  {"<enum>", &module_info_gooScollectionsScollection, "<enum>"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"let", &module_info_runtimeSboot, "let"},
  {"<type>", &module_info_runtimeSboot, "<type>"},
  {"ord-app-mets", &module_info_runtimeSboot, "ord-app-mets"},
  {"save-image", &module_info_compilerStop, "save-image"},
  {"program-register-setter", &module_info_compilerSast, "program-register-setter"},
  {"t?", &module_info_gooStypes, "t?"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"function-index-setter", &module_info_compilerSast, "function-index-setter"},
  {"<loc>", &module_info_runtimeSboot, "<loc>"},
  {"locals-bindings", &module_info_compilerSast, "locals-bindings"},
  {"pop-last!", &module_info_gooScollectionsSbuffer, "pop-last!"},
  {"remove-modules-by-name!", &module_info_compilerSast, "remove-modules-by-name!"},
  {"assignment-binding", &module_info_compilerSast, "assignment-binding"},
  {"fab", &module_info_gooScollectionsScollection, "fab"},
  {"type-elts", &module_info_runtimeSboot, "type-elts"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"<application>", &module_info_compilerSast, "<application>"},
  {"from", &module_info_gooScollectionsSrange, "from"},
  {"tab-gc-state", &module_info_gooScollectionsStable, "tab-gc-state"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"<simple-condition>", &module_info_runtimeSruntime, "<simple-condition>"},
  {"bind-exit-main-fun", &module_info_compilerSast, "bind-exit-main-fun"},
  {"round", &module_info_gooSmath, "round"},
  {"function-index", &module_info_compilerSast, "function-index"},
  {"%%macro", &module_info_runtimeSboot, "%%macro"},
  {"<programs>", &module_info_compilerSast, "<programs>"},
  {"<static-global-environment>", &module_info_compilerSast, "<static-global-environment>"},
  {"<simple-error>", &module_info_runtimeSruntime, "<simple-error>"},
  {"assocs-test", &module_info_gooScollectionsSassoc, "assocs-test"},
  {"reject", &module_info_gooScollectionsSsequence, "reject"},
  {"binding-dotted?", &module_info_compilerSast, "binding-dotted?"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"open", &module_info_gooSioSport, "open"},
  {"may-isa?", &module_info_runtimeSboot, "may-isa?"},
  {"set-module-environments", &module_info_compilerSast, "set-module-environments"},
  {"<list>", &module_info_gooScollectionsSlist, "<list>"},
  {"<assignment>", &module_info_compilerSast, "<assignment>"},
  {"floor", &module_info_gooSmath, "floor"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"<opts>", &module_info_runtimeSboot, "<opts>"},
  {"g2c-eval", &module_info_compilerStop, "g2c-eval"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"tab-shrink-threshold", &module_info_gooScollectionsStable, "tab-shrink-threshold"},
  {"gen-add-met", &module_info_runtimeSboot, "gen-add-met"},
  {"<passive-program>", &module_info_compilerSast, "<passive-program>"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"prop-setter", &module_info_runtimeSboot, "prop-setter"},
  {"sig", &module_info_runtimeSruntime, "sig"},
  {"fun-val", &module_info_runtimeSboot, "fun-val"},
  {"tab-growth-threshold", &module_info_gooScollectionsStable, "tab-growth-threshold"},
  {"map-keyed", &module_info_gooScollectionsScollection, "map-keyed"},
  {"binding-info", &module_info_compilerSast, "binding-info"},
  {"sub", &module_info_gooScollectionsSsequence, "sub"},
  {"binding-info-setter", &module_info_compilerSast, "binding-info-setter"},
  {"items", &module_info_gooScollectionsScollection, "items"},
  {"len", &module_info_gooStypes, "len"},
  {"function-free-setter", &module_info_compilerSast, "function-free-setter"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"t<", &module_info_gooStypes, "t<"},
  {"binding-dynamic-extent?-setter", &module_info_compilerSast, "binding-dynamic-extent?-setter"},
  {"alternative-alternant", &module_info_compilerSast, "alternative-alternant"},
  {"bound?", &module_info_runtimeSboot, "bound?"},
  {"runtime-environment", &module_info_compilerSast, "runtime-environment"},
  {"environment-bindings", &module_info_compilerSast, "environment-bindings"},
  {"class-ancestors", &module_info_runtimeSboot, "class-ancestors"},
  {"signature-nary?-setter", &module_info_compilerSast, "signature-nary?-setter"},
  {"assignment-form-setter", &module_info_compilerSast, "assignment-form-setter"},
  {"<local-reference>", &module_info_compilerSast, "<local-reference>"},
  {"signature-names-setter", &module_info_compilerSast, "signature-names-setter"},
  {"find-environment-module", &module_info_compilerSast, "find-environment-module"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"constant-index", &module_info_compilerSast, "constant-index"},
  {"binding-value-setter", &module_info_compilerSast, "binding-value-setter"},
  {"application-function", &module_info_compilerSast, "application-function"},
  {"tab-growth-factor", &module_info_gooScollectionsStable, "tab-growth-factor"},
  {"first-then", &module_info_gooScollectionsSstep, "first-then"},
  {"<simple-handler-info>", &module_info_runtimeSboot, "<simple-handler-info>"},
  {"reference-frame-offset", &module_info_compilerSast, "reference-frame-offset"},
  {"<raw-constant>", &module_info_compilerSast, "<raw-constant>"},
  {"<ast-primitive-definition>", &module_info_compilerSast, "<ast-primitive-definition>"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"<handler>", &module_info_runtimeSruntime, "<handler>"},
  {"class-name", &module_info_runtimeSboot, "class-name"},
  {"backtrace", &module_info_compilerStop, "backtrace"},
  {"<flo>", &module_info_runtimeSboot, "<flo>"},
  {"<sym>", &module_info_runtimeSboot, "<sym>"},
  {"for", &module_info_gooSmacros, "for"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"def-list", &module_info_compilerSast, "def-list"},
  {"met-app?", &module_info_runtimeSboot, "met-app?"},
  {"add!", &module_info_gooScollectionsScollection, "add!"},
  {"frame-var", &module_info_compilerStop, "frame-var"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"new", &module_info_runtimeSboot, "new"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"fold", &module_info_gooScollectionsScollection, "fold"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"<serious-condition>", &module_info_runtimeSruntime, "<serious-condition>"},
  {"monitor-test", &module_info_compilerSast, "monitor-test"},
  {"fun-mets", &module_info_runtimeSboot, "fun-mets"},
  {"bound?-reference", &module_info_compilerSast, "bound?-reference"},
  {"compose", &module_info_runtimeSruntime, "compose"},
  {"program-type", &module_info_compilerSast, "program-type"},
  {"*print-base*", &module_info_gooScollectionsSstring, "*print-base*"},
  {"==", &module_info_gooSmacros, "=="},
  {"do-module-loader-modules", &module_info_compilerSast, "do-module-loader-modules"},
  {"do", &module_info_gooSmacros, "do"},
  {"<sequential>", &module_info_compilerSast, "<sequential>"},
  {"locals-functions-setter", &module_info_compilerSast, "locals-functions-setter"},
  {"read-file", &module_info_compilerStop, "read-file"},
  {"nul", &module_info_runtimeSboot, "nul"},
  {"elt-setter", &module_info_gooScollectionsScollection, "elt-setter"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"do-keyed", &module_info_gooScollectionsScollection, "do-keyed"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"t=", &module_info_gooStypes, "t="},
  {"constant-value", &module_info_compilerSast, "constant-value"},
  {"pick", &module_info_gooScollectionsSsequence, "pick"},
  {"-", &module_info_gooSmath, "-"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"function-free", &module_info_compilerSast, "function-free"},
  {"<prop>", &module_info_runtimeSboot, "<prop>"},
  {"sequentialize", &module_info_compilerSast, "sequentialize"},
  {"<range>", &module_info_gooScollectionsSrange, "<range>"},
  {"locals-functions", &module_info_compilerSast, "locals-functions"},
  {"neg", &module_info_gooSmath, "neg"},
  {"push-last!", &module_info_gooScollectionsSbuffer, "push-last!"},
  {"elts", &module_info_gooScollectionsScollection, "elts"},
  {"/", &module_info_gooSmath, "/"},
  {"cat2", &module_info_gooScollectionsSsequence, "cat2"},
  {"<step>", &module_info_gooScollectionsSstep, "<step>"},
  {"handler-matches?", &module_info_runtimeSruntime, "handler-matches?"},
  {"<gen>", &module_info_runtimeSboot, "<gen>"},
  {"eval", &module_info_compilerSsyntax, "eval"},
  {"<error>", &module_info_runtimeSruntime, "<error>"},
  {"list", &module_info_gooScollectionsSlist, "list"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"compile-time-program", &module_info_compilerSast, "compile-time-program"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"<local-binding>", &module_info_compilerSast, "<local-binding>"},
  {"isa?", &module_info_runtimeSboot, "isa?"},
  {"function-registers-setter", &module_info_compilerSast, "function-registers-setter"},
  {"<compile-time>", &module_info_compilerSast, "<compile-time>"},
  {"<map>", &module_info_gooScollectionsSmap, "<map>"},
  {"<monitor>", &module_info_compilerSast, "<monitor>"},
  {"pop", &module_info_gooScollectionsSlist, "pop"},
  {"num-to-str-base", &module_info_gooScollectionsSstring, "num-to-str-base"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"case", &module_info_gooSmacros, "case"},
  {"function-source-setter", &module_info_compilerSast, "function-source-setter"},
  {"<module-binding-reference>", &module_info_compilerSast, "<module-binding-reference>"},
  {"mem?", &module_info_gooScollectionsScollection, "mem?"},
  {"<runtime-reference>", &module_info_compilerSast, "<runtime-reference>"},
  {"dv", &module_info_runtimeSboot, "dv"},
  {"<str-tab>", &module_info_gooScollectionsStable, "<str-tab>"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"signature-names", &module_info_compilerSast, "signature-names"},
  {"always", &module_info_runtimeSruntime, "always"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", NULL},
  {"*goo-date*", &YcompilerSmainYTgoo_dateT},
  {"*goo-version*", &YcompilerSmainYTgoo_versionT},
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
