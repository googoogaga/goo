/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: main */

EXT(YtopYp2c_eval,"top","p2c-eval");
EXT(YtopYbacktrace,"top","backtrace");
EXT(YLoptsG,"boot","<opts>");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YprotoSsystemYpathname_to_components,"proto/system","pathname-to-components");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YastYassignment_reference,"ast","assignment-reference");
EXT(YastYLpassive_programG,"ast","<passive-program>");
EXT(YprotoScollectionsSassocYassocs_test,"proto/collections/assoc","assocs-test");
EXT(YprotoSmathYzeroQ,"proto/math","zero?");
EXT(YprotoScollectionsSstringYTprint_baseT,"proto/collections/string","*print-base*");
EXT(YprotoScollectionsScollectionYfill,"proto/collections/collection","fill");
EXT(YDmin_int,"boot","$min-int");
EXT(YtopYdo_stack_frames,"top","do-stack-frames");
EXT(YprotoSmathYE,"proto/math","=");
EXT(YprotoSmathYnulQ,"proto/math","nul?");
EXT(YprotoScollectionsSlistYLlistG,"proto/collections/list","<list>");
EXT(YastYload_in,"ast","load-in");
EXT(YastYassignment_form_setter,"ast","assignment-form-setter");
EXT(YastYsignature_naryQ,"ast","signature-nary?");
EXT(YmacrosYfin_stateQ,"macros","fin-state?");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YprotoSmathYuppercaseQ,"proto/math","uppercase?");
EXT(YruntimeYalways,"runtime","always");
EXT(YastYast_define_binding,"ast","ast-define-binding");
EXT(YastYunwind_protect_cleanup_thunk,"ast","unwind-protect-cleanup-thunk");
EXT(YprotoScollectionsStableYtable_shrink_threshold,"proto/collections/table","table-shrink-threshold");
EXT(YastYreference_frame_number,"ast","reference-frame-number");
EXT(YastYLlocalsG,"ast","<locals>");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YprotoScollectionsScollectionYnow_elt_setter,"proto/collections/collection","now-elt-setter");
EXT(YastYLast_functionG,"ast","<ast-function>");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YastYbinding_name,"ast","binding-name");
EXT(YastYsignature_specs_setter,"ast","signature-specs-setter");
EXT(YprotoSmathYroundS,"proto/math","round/");
EXT(YprotoSmathYto_str,"proto/math","to-str");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(Ytype_object,"boot","type-object");
EXT(YprotoScollectionsSrangeYfrom,"proto/collections/range","from");
EXT(YmacrosYini_state,"macros","ini-state");
EXT(YprotoScollectionsScollectionYlen,"proto/collections/collection","len");
EXT(YLclassG,"boot","<class>");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YprotoSportsYLoutput_portG,"proto/ports","<output-port>");
EXT(YastYbinding_index_setter,"ast","binding-index-setter");
EXT(YprotoScollectionsSrangeYfrom_to_by,"proto/collections/range","from-to-by");
EXT(YastYassignment_form,"ast","assignment-form");
EXT(YprotoSmathYA,"proto/math","+");
EXT(YruntimeYread,"runtime","read");
EXT(YruntimeYformat,"runtime","format");
EXT(YastYdo_static_global_bindings,"ast","do-static-global-bindings");
EXT(YprotoScollectionsSsequenceYsub,"proto/collections/sequence","sub");
EXT(YprotoScollectionsStableYLstr_tabG,"proto/collections/table","<str-tab>");
EXT(YprotoSmathYto_digit,"proto/math","to-digit");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(YastYmodule_name_to_relpath,"ast","module-name-to-relpath");
EXT(YreadYread_from_string,"read","read-from-string");
EXT(YprotoSsystemYhierarchical_components,"proto/system","hierarchical-components");
EXT(YLtypeG,"boot","<type>");
EXT(YprotoStypesYfalse_or,"proto/types","false-or");
EXT(YprotoScollectionsScollectionYadd,"proto/collections/collection","add");
EXT(YastYsignature_names_setter,"ast","signature-names-setter");
EXT(YprotoSmathYevenQ,"proto/math","even?");
EXT(YprotoSmathYLE,"proto/math","<=");
EXT(YprotoSsystemYparent_directory,"proto/system","parent-directory");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YastYLalternativeG,"ast","<alternative>");
EXT(YastYmodule_binding,"ast","module-binding");
EXT(YastYprogram_register,"ast","program-register");
EXT(YprotoScollectionsScollectionYdel_keys,"proto/collections/collection","del-keys");
EXT(YastYobjectify,"ast","objectify");
EXT(Yp2cYp2c_clean,"p2c","p2c-clean");
EXT(YprotoScollectionsSbufferYlen_setter,"proto/collections/buffer","len-setter");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YastYLbind_exitG,"ast","<bind-exit>");
EXT(YastYenv_object_name,"ast","env-object-name");
EXT(Yobject_parents,"boot","object-parents");
EXT(YprotoSportsYLstring_portG,"proto/ports","<string-port>");
EXT(YLgenG,"boot","<gen>");
EXT(YastYfunction_free_setter,"ast","function-free-setter");
EXT(Yslot_init,"boot","slot-init");
EXT(YastYbinding_dynamic_extentQ,"ast","binding-dynamic-extent?");
EXT(YprotoSportsYchar_readyQ,"proto/ports","char-ready?");
EXT(YastYmonitor_info,"ast","monitor-info");
EXT(YprotoSportsYLfile_output_portG,"proto/ports","<file-output-port>");
EXT(YastYfunction_data_refs,"ast","function-data-refs");
EXT(YastYapplication_knownQ_setter,"ast","application-known?-setter");
EXT(Yobject_slots,"boot","object-slots");
EXT(YprotoScollectionsStableYid_hash,"proto/collections/table","id-hash");
EXT(YastYbinding_native_toQ,"ast","binding-native-to?");
EXT(YastYLast_primitive_definitionG,"ast","<ast-primitive-definition>");
EXT(YastYLdefinitionG,"ast","<definition>");
EXT(YastYprogram_register_setter,"ast","program-register-setter");
EXT(YprotoSsystemYcreate_directory,"proto/system","create-directory");
EXT(YLsymG,"boot","<sym>");
EXT(YprotoStypesYtL,"proto/types","t<");
EXT(YastYLbindingG,"ast","<binding>");
EXT(YastYfix_let_bindings_setter,"ast","fix-let-bindings-setter");
EXT(Yfind_setter,"boot","find-setter");
EXT(YastYfunction_bindings,"ast","function-bindings");
EXT(YprotoSmathYlogior,"proto/math","logior");
EXT(YprotoSmathYfabs,"proto/math","fabs");
EXT(YprotoSmathYflo_bits,"proto/math","flo-bits");
EXT(YprotoSmathYround,"proto/math","round");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(YastYlocals_body_setter,"ast","locals-body-setter");
EXT(YprotoScollectionsSsequenceYcat2,"proto/collections/sequence","cat2");
EXT(YprotoSportsYpeek_char,"proto/ports","peek-char");
EXT(YprotoSsystemYadd_src_path,"proto/system","add-src-path");
EXT(YprotoSsystemYTpath_separatorT,"proto/system","*path-separator*");
EXT(YsyntaxYeval,"syntax","eval");
EXT(YprotoSmathYtruncateS,"proto/math","truncate/");
EXT(YLstrG,"boot","<str>");
EXT(YruntimeYsig,"runtime","sig");
EXT(YprotoSsystemYos_name,"proto/system","os-name");
EXT(YprotoSsystemYc_filename,"proto/system","c-filename");
EXT(YprotoScollectionsStableYtable_protocol,"proto/collections/table","table-protocol");
EXT(YprotoSsystemYTc_extensionT,"proto/system","*c-extension*");
EXT(YastYfunction_signature_setter,"ast","function-signature-setter");
EXT(YprotoSportsYcall_with_output_file,"proto/ports","call-with-output-file");
EXT(YastYbinding_dynamic_extentQ_setter,"ast","binding-dynamic-extent?-setter");
EXT(YprotoScollectionsScollectionYdel_key,"proto/collections/collection","del-key");
EXT(YprotoScollectionsSsequenceYpos,"proto/collections/sequence","pos");
EXT(YastYfunction_registers_setter,"ast","function-registers-setter");
EXT(YastYfind_environment_module,"ast","find-environment-module");
EXT(YastYbinding_kind,"ast","binding-kind");
EXT(YastYinit_ast,"ast","init-ast");
EXT(Yp2cYp2c_build_app,"p2c","p2c-build-app");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YprotoStypesYtE,"proto/types","t=");
EXT(YastYbinding_value,"ast","binding-value");
EXT(YprotoScollectionsScollectionYdo,"proto/collections/collection","do");
EXT(YastYfix_let_bindings,"ast","fix-let-bindings");
EXT(YprotoSmathYL,"proto/math","<");
EXT(YastYfunction_body_setter,"ast","function-body-setter");
EXT(Yerror,"boot","error");
EXT(YprotoSmathYmax,"proto/math","max");
EXT(YastYbinding_mutableQ,"ast","binding-mutable?");
EXT(YastYfunction_signature,"ast","function-signature");
EXT(YprotoSportsYcall_with_input_file,"proto/ports","call-with-input-file");
EXT(YLvecG,"boot","<vec>");
EXT(YastYLlocal_bindingG,"ast","<local-binding>");
EXT(Yslot_owner,"boot","slot-owner");
EXT(YastYLpredefined_applicationG,"ast","<predefined-application>");
EXT(Yfun_names,"boot","fun-names");
EXT(YastYconstant_value,"ast","constant-value");
EXT(YLmetG,"boot","<met>");
EXT(YastYset_module_environments,"ast","set-module-environments");
EXT(Yhead_setter,"boot","head-setter");
EXT(YprotoScollectionsSbufferYlenSfill_setter,"proto/collections/buffer","len/fill-setter");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YastYsignature_names,"ast","signature-names");
EXT(YastYsignature_value,"ast","signature-value");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YastYlocals_body,"ast","locals-body");
EXT(YprotoScollectionsScollectionYfab,"proto/collections/collection","fab");
EXT(YprotoScollectionsScollectionYall2Q,"proto/collections/collection","all2?");
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
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(YprotoSportsYclose_input_port,"proto/ports","close-input-port");
EXT(YastYLruntime_assignmentG,"ast","<runtime-assignment>");
EXT(YastYbinding_value_setter,"ast","binding-value-setter");
EXT(YprotoStypesYtA,"proto/types","t+");
EXT(YastYLprogramsG,"ast","<programs>");
EXT(YprotoScollectionsScollectionYfind_key,"proto/collections/collection","find-key");
EXT(Ynul,"boot","nul");
EXT(YprotoSsystemYadd_tmp_path,"proto/system","add-tmp-path");
EXT(YprotoSmathYlogxor,"proto/math","logxor");
EXT(YprotoSsystemYTproto_extensionT,"proto/system","*proto-extension*");
EXT(YprotoSmathYNEE,"proto/math","~==");
EXT(YprotoSsystemYlabel_components,"proto/system","label-components");
EXT(YastYLmodule_bindingG,"ast","<module-binding>");
EXT(YastYLunwind_protectG,"ast","<unwind-protect>");
EXT(YastYLfab_listG,"ast","<fab-list>");
EXT(YprotoSportsYLstring_output_portG,"proto/ports","<string-output-port>");
EXT(YastYLcompile_timeG,"ast","<compile-time>");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YprotoScollectionsSbufferYpop_lastX,"proto/collections/buffer","pop-last!");
EXT(YastYmonitor_type,"ast","monitor-type");
EXT(YprotoSportsYopen_output_file,"proto/ports","open-output-file");
EXT(YprotoSmathYas_lowercase,"proto/math","as-lowercase");
EXT(YastYfix_let_arguments,"ast","fix-let-arguments");
EXT(YastYalternative_alternant,"ast","alternative-alternant");
EXT(YprotoSmathYS,"proto/math","/");
EXT(YprotoSmathYeof_objectQ,"proto/math","eof-object?");
EXT(YprotoSportsYcall_with_string_output_port,"proto/ports","call-with-string-output-port");
EXT(YastYremove_modules_by_nameX,"ast","remove-modules-by-name!");
EXT(YLfunG,"boot","<fun>");
EXT(YprotoSmathYmodulo,"proto/math","modulo");
EXT(YastYmodule_target_environment,"ast","module-target-environment");
EXT(YprotoSportsYLfile_input_portG,"proto/ports","<file-input-port>");
EXT(YprotoSportsYLstring_input_portG,"proto/ports","<string-input-port>");
EXT(YmacrosYnapply,"macros","napply");
EXT(YprotoSsystemYcomponents_parent_directory,"proto/system","components-parent-directory");
EXT(YastYfix_let_body_setter,"ast","fix-let-body-setter");
EXT(YprotoScollectionsScollectionYmemQ,"proto/collections/collection","mem?");
EXT(YLlstG,"boot","<lst>");
EXT(YastYmodule_exports,"ast","module-exports");
EXT(YprotoScollectionsSsequenceYaddX,"proto/collections/sequence","add!");
EXT(YDmax_int,"boot","$max-int");
EXT(YastYLreal_referenceG,"ast","<real-reference>");
EXT(YruntimeYmake_handler,"runtime","make-handler");
EXT(YastYLfix_letG,"ast","<fix-let>");
EXT(YprotoScollectionsSmapYfab_map,"proto/collections/map","fab-map");
EXT(YastYconstant_index,"ast","constant-index");
EXT(YastYmodule_name,"ast","module-name");
EXT(YprotoSmathYT,"proto/math","*");
EXT(YprotoSmathYoddQ,"proto/math","odd?");
EXT(YastYfunction_self_recursiveQ,"ast","function-self-recursive?");
EXT(YprotoSportsYopen_input_file,"proto/ports","open-input-file");
EXT(YastYmonitor_handler,"ast","monitor-handler");
EXT(YtopYparse_in,"top","parse-in");
EXT(YprotoSsystemYfile_type,"proto/system","file-type");
EXT(Ytail_setter,"boot","tail-setter");
EXT(Yslot_type,"boot","slot-type");
EXT(YprotoScollectionsScollectionYreduceA,"proto/collections/collection","reduce+");
EXT(YastYsignature_specs,"ast","signature-specs");
EXT(YastYLast_macro_definitionG,"ast","<ast-macro-definition>");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(YprotoSsystemYTobj_extensionT,"proto/system","*obj-extension*");
EXT(YastYenvironment_uses_modules,"ast","environment-uses-modules");
EXT(YastYconstant_index_setter,"ast","constant-index-setter");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YastYdo_module_loader_modules,"ast","do-module-loader-modules");
EXT(YastYprobe_module,"ast","probe-module");
EXT(YLseqG,"boot","<seq>");
EXT(YmacrosYcat,"macros","cat");
EXT(YprotoSmathY_,"proto/math","-");
EXT(YprotoSsystemYproto_filename,"proto/system","proto-filename");
EXT(YprotoSportsYport_contents,"proto/ports","port-contents");
EXT(YastYinit_environment_for_eval,"ast","init-environment-for-eval");
EXT(YastYLlocal_referenceG,"ast","<local-reference>");
EXT(YprotoScollectionsScollectionYallQ,"proto/collections/collection","all?");
EXT(YprotoScollectionsScollectionYany2Q,"proto/collections/collection","any2?");
EXT(Ytail,"boot","tail");
EXT(YastYfind_binding,"ast","find-binding");
EXT(YastYLmonitorG,"ast","<monitor>");
EXT(YprotoScollectionsStableYLtabG,"proto/collections/table","<tab>");
EXT(YastYLboundQG,"ast","<bound?>");
EXT(YastYbinding_global_box_setter,"ast","binding-global-box-setter");
EXT(YprotoStypesYas,"proto/types","as");
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
EXT(YastYfix_let_body,"ast","fix-let-body");
EXT(YprotoScollectionsScollectionYmap_keyed,"proto/collections/collection","map-keyed");
EXT(YprotoSmathYtruncate,"proto/math","truncate");
EXT(YastYLast_signatureG,"ast","<ast-signature>");
EXT(YprotoSportsYout,"proto/ports","out");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YastYLlocal_assignmentG,"ast","<local-assignment>");
EXT(YastYLstatic_global_environmentG,"ast","<static-global-environment>");
EXT(YastYenvironment_module,"ast","environment-module");
EXT(YprotoScollectionsSlistYlist,"proto/collections/list","list");
EXT(YastYfunction_source_setter,"ast","function-source-setter");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YastYLimmediate_constantG,"ast","<immediate-constant>");
EXT(YastYfix_let_arguments_setter,"ast","fix-let-arguments-setter");
EXT(YprotoSmathYaddress_of,"proto/math","address-of");
EXT(YLlocG,"boot","<loc>");
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
EXT(YprotoSsystemYfile_mtime,"proto/system","file-mtime");
EXT(Ytype_elts,"boot","type-elts");
EXT(YprotoSmathYnum_to_str,"proto/math","num-to-str");
EXT(YprotoSsystemYadd_build_path,"proto/system","add-build-path");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YprotoScollectionsSsequenceYrev,"proto/collections/sequence","rev");
EXT(YprotoScollectionsSrangeYfrom_below_by,"proto/collections/range","from-below-by");
EXT(YPisa,"boot","%isa");
EXT(YwriteYwrite_to_string,"write","write-to-string");
EXT(YastYLfree_environmentG,"ast","<free-environment>");
EXT(YastYsignature_arity_setter,"ast","signature-arity-setter");
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
EXT(YprotoSportsYin,"proto/ports","in");
EXT(YprotoScollectionsScollectionYempty,"proto/collections/collection","empty");
EXT(Yclass_name,"boot","class-name");
EXT(YprotoScollectionsSsequenceYdel,"proto/collections/sequence","del");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YprotoScollectionsSbufferYLbufG,"proto/collections/buffer","<buf>");
EXT(YprotoSmathYneg,"proto/math","neg");
EXT(YastYlocals_bindings_setter,"ast","locals-bindings-setter");
EXT(YprotoSsystemYcomponents_basename,"proto/system","components-basename");
EXT(YastYLmodule_binding_referenceG,"ast","<module-binding-reference>");
EXT(YLintG,"boot","<int>");
EXT(YLnumG,"boot","<num>");
EXT(Ynil,"boot","nil");
EXT(YprotoScollectionsSstringYstr_to_num,"proto/collections/string","str-to-num");
EXT(YastYunchecked_runtime_environment,"ast","unchecked-runtime-environment");
EXT(YmacrosYEE,"macros","==");
EXT(YastYbinding_type,"ast","binding-type");
EXT(YastYfunction_source,"ast","function-source");
EXT(YastYLconstantG,"ast","<constant>");
EXT(YwriteYwriteln,"write","writeln");
EXT(YastYast_evaluate,"ast","ast-evaluate");
EXT(YastYLmoduleG,"ast","<module>");
EXT(Yfun_value,"boot","fun-value");
EXT(YastYbinding_type_setter,"ast","binding-type-setter");
EXT(YprotoSsystemYfile_existsQ,"proto/system","file-exists?");
EXT(YastYreference_frame_offset,"ast","reference-frame-offset");
EXT(YprotoScollectionsSstepYLstepG,"proto/collections/step","<step>");
EXT(YastYsignature_bindings,"ast","signature-bindings");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YprotoSmathYlognot,"proto/math","lognot");
EXT(YastYbinding_locative,"ast","binding-locative");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YLchrG,"boot","<chr>");
EXT(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
EXT(YastYbinding_inferred_type,"ast","binding-inferred-type");
EXT(YprotoScollectionsScollectionYlow_elt_setter,"proto/collections/collection","low-elt-setter");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YprotoSportsYLportG,"proto/ports","<port>");
EXT(YPslot,"boot","%slot");
EXT(YprotoScollectionsStableYcurrent_gc_state,"proto/collections/table","current-gc-state");
EXT(YastYLargumentsG,"ast","<arguments>");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YastYobjectify_signature,"ast","objectify-signature");
EXT(YprotoSmathYas_uppercase,"proto/math","as-uppercase");
EXT(YprotoSsystemYos_binding_value,"proto/system","os-binding-value");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YprotoSmathYash,"proto/math","ash");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YastYglobal_box_value,"ast","global-box-value");
EXT(YastYsignature_bindings_setter,"ast","signature-bindings-setter");
EXT(YprotoSportsYwrite_char,"proto/ports","write-char");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YtopYtop,"top","top");
EXT(YastYLapplicationG,"ast","<application>");
EXT(YprotoScollectionsScollectionYmap2,"proto/collections/collection","map2");
EXT(YLlogG,"boot","<log>");
EXT(YprotoScollectionsStableYcase_insensitive_string_hash,"proto/collections/table","case-insensitive-string-hash");
EXT(YastYLassignmentG,"ast","<assignment>");
EXT(Yvec,"boot","vec");
EXT(YastYLprogramG,"ast","<program>");
EXT(YprotoSmathYposQ,"proto/math","pos?");
EXT(YprotoScollectionsSmapYLmapG,"proto/collections/map","<map>");
DEF(YmainYTproto_dateT,"main","*proto-date*");
EXT(YLslotG,"boot","<slot>");
EXT(YtopYsave_image,"top","save-image");
EXT(YprotoScollectionsSsequenceYpick,"proto/collections/sequence","pick");
EXT(YprotoSsystemYTexe_extensionT,"proto/system","*exe-extension*");
EXT(YprotoScollectionsSsequenceYlast,"proto/collections/sequence","last");
EXT(YprotoSmathYlowercaseQ,"proto/math","lowercase?");
EXT(YPPmacro,"boot","%%macro");
EXT(YastYfunction_index,"ast","function-index");
EXT(YprotoSsystemYTproto_rootT,"proto/system","*proto-root*");
EXT(YastYLreferenceG,"ast","<reference>");
EXT(YprotoScollectionsScollectionYanyQ,"proto/collections/collection","any?");
EXT(Ynot,"boot","not");
EXT(YastYfunction_binding,"ast","function-binding");
EXT(YastYbinding_inferred_type_setter,"ast","binding-inferred-type-setter");
DEF(YmainYTproto_versionT,"main","*proto-version*");
EXT(YastYDproto_boot_module_name,"ast","$proto-boot-module-name");
EXT(YruntimeYcurry,"runtime","curry");
EXT(Yfun_name,"boot","fun-name");
EXT(Yclass_parents,"boot","class-parents");
EXT(YastYfunction_temporaries_setter,"ast","function-temporaries-setter");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YprotoScollectionsSrangeYLrangeG,"proto/collections/range","<range>");
EXT(YLanyG,"boot","<any>");
EXT(YastYfix_let_types,"ast","fix-let-types");
EXT(YastYfunction_debug_name,"ast","function-debug-name");
EXT(YprotoSportsYforce_output,"proto/ports","force-output");
EXT(YastYalternative_condition,"ast","alternative-condition");
EXT(YprotoScollectionsScollectionYlow_elt,"proto/collections/collection","low-elt");
EXT(YastYLmodule_loaderG,"ast","<module-loader>");
EXT(YprotoSsystemYcomponents_to_pathname,"proto/system","components-to-pathname");
EXT(YtopYload,"top","load");
EXT(YastYapplication_arguments,"ast","application-arguments");
EXT(YprotoSsystemYexe_filename,"proto/system","exe-filename");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Ytype_class,"boot","type-class");
EXT(YastYfunction_naryQ,"ast","function-nary?");
EXT(YprotoScollectionsSstringYstr,"proto/collections/string","str");
EXT(YastYLast_methodG,"ast","<ast-method>");
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
EXT(Yp2cYp2c_ast,"p2c","p2c-ast");
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
EXT(Yp2cYp2c_top,"p2c","p2c-top");
EXT(YastYLglobal_boxG,"ast","<global-box>");
EXT(YmacrosYrevX,"macros","rev!");
EXT(YastYlocals_functions_setter,"ast","locals-functions-setter");
EXT(YprotoSsystemYcomponents_last,"proto/system","components-last");
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
EXT(YastYfunction_data_refs_setter,"ast","function-data-refs-setter");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YwriteYwrite,"write","write");
EXT(YprotoSsystemYprobe_directory,"proto/system","probe-directory");
EXT(YastYLast_primitiveG,"ast","<ast-primitive>");
EXT(YastYfunction_registers,"ast","function-registers");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YprotoSsystemYos_binding_value_setter,"proto/system","os-binding-value-setter");
EXT(YprotoScollectionsSsequenceY2nd,"proto/collections/sequence","2nd");
EXT(Ytup,"boot","tup");
EXT(YwriteYdisplay,"write","display");
EXT(YprotoSmathYceiling,"proto/math","ceiling");
EXT(YastYreport_undefined_global_bindings,"ast","report-undefined-global-bindings");
EXT(YprotoScollectionsStableYDpermanent_hash_state,"proto/collections/table","$permanent-hash-state");
EXT(YastYmodule_loader_module_type,"ast","module-loader-module-type");
EXT(YmacrosYnxt_state,"macros","nxt-state");
EXT(YprotoSsystemYprocess_id,"proto/system","process-id");
EXT(YastYfunction_index_setter,"ast","function-index-setter");
EXT(YprotoSmathYabs,"proto/math","abs");
EXT(YprotoSmathYceilingS,"proto/math","ceiling/");
EXT(YastYinstall_initial_bindings,"ast","install-initial-bindings");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YastYload_module,"ast","load-module");
EXT(Yp2cYp2c_def_app,"p2c","p2c-def-app");
EXT(YastYreference_called_functionQ,"ast","reference-called-function?");
EXT(YprotoSportsYclose_output_port,"proto/ports","close-output-port");
EXT(YprotoScollectionsScollectionYnow_key,"proto/collections/collection","now-key");
EXT(YprotoSmathYG,"proto/math",">");
EXT(YastYLruntime_referenceG,"ast","<runtime-reference>");
EXT(YprotoScollectionsSsequenceYsub_setter,"proto/collections/sequence","sub-setter");
EXT(YastYreference_called_functionQ_setter,"ast","reference-called-function?-setter");
EXT(YastYbind_exit_main_fun,"ast","bind-exit-main-fun");
EXT(YtopYread_file,"top","read-file");
EXT(YastYunwind_protect_protected_thunk,"ast","unwind-protect-protected-thunk");
EXT(YastYLglobal_assignmentG,"ast","<global-assignment>");
EXT(Yp2cYp2c_exp,"p2c","p2c-exp");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(Yadd_slot,"boot","add-slot");
EXT(YastYapplication_function,"ast","application-function");
EXT(YastYmonitor_test,"ast","monitor-test");
EXT(YastYfunction_free,"ast","function-free");
EXT(YastYas_lst,"ast","as-lst");
EXT(YisaQ,"boot","isa?");
EXT(YastYmonitor_main_thunk,"ast","monitor-main-thunk");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(YmacrosYnow_elt,"macros","now-elt");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YprotoSmathYNE,"proto/math","~=");
EXT(YastYlocals_functions,"ast","locals-functions");
EXT(YprotoScollectionsScollectionYdo2,"proto/collections/collection","do2");
EXT(YprotoScollectionsSsequenceY1st,"proto/collections/sequence","1st");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YprotoSmathYlogbitQ,"proto/math","logbit?");
EXT(YmacrosYelt,"macros","elt");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(YPdefine_method,"boot","%define-method");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YprotoSsystemYobj_filename,"proto/system","obj-filename");
EXT(YastYLglobal_referenceG,"ast","<global-reference>");
EXT(YastYruntime_environment,"ast","runtime-environment");
EXT(YastYbinding_index,"ast","binding-index");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_13);
DEFLIT(lit_1);
DEFLIT(lit_14);
DEFLIT(lit_8);
DEFLIT(lit_16);
DEFLIT(lit_15);
DEFLIT(lit_11);
DEFLIT(lit_7);
DEFLIT(lit_3);
DEFLIT(lit_2);
DEFLIT(lit_6);
DEFLIT(lit_12);
DEFLIT(lit_4);
DEFLIT(lit_9);
DEFLIT(lit_10);
DEFLIT(lit_17);
DEFLIT(lit_5);
DEFLIT(lit_0);

/* FUNCTIONS: */

extern P YmainY___main_0___ ();

/* FUNCTION CODES: */

P YmainY___main_0___() {
  P T3,T2,T1,T0;
loop:
  lit_0 = YPsb((P)"0.109");
  VARSET(YmainYTproto_versionT,LITREF(lit_0));
  lit_1 = YPsb((P)"OCT 30, 2001");
  VARSET(YmainYTproto_dateT,LITREF(lit_1));
  lit_2 = YPsb((P)";;; \n");
  CALL2(1,VARREF(YruntimeYformat),VARREF(YprotoSportsYout),LITREF(lit_2));
  lit_3 = YPsb((P)";;; PROTO\n");
  CALL2(1,VARREF(YruntimeYformat),VARREF(YprotoSportsYout),LITREF(lit_3));
  lit_4 = YPsb((P)";;; JONATHAN BACHRACH\n");
  CALL2(1,VARREF(YruntimeYformat),VARREF(YprotoSportsYout),LITREF(lit_4));
  lit_5 = YPsb((P)";;; MIT AI Lab\n");
  CALL2(1,VARREF(YruntimeYformat),VARREF(YprotoSportsYout),LITREF(lit_5));
  lit_6 = YPsb((P)";;; %s\n");
  CALL3(1,VARREF(YruntimeYformat),VARREF(YprotoSportsYout),LITREF(lit_6),VARREF(YmainYTproto_dateT));
  lit_7 = YPsb((P)";;; \n");
  CALL2(1,VARREF(YruntimeYformat),VARREF(YprotoSportsYout),LITREF(lit_7));
  lit_8 = YPsb((P)";;; VERSION = %s\n");
  CALL3(1,VARREF(YruntimeYformat),VARREF(YprotoSportsYout),LITREF(lit_8),VARREF(YmainYTproto_versionT));
  lit_9 = YPsb((P)";;; ROOT    = %s\n");
  CALL3(1,VARREF(YruntimeYformat),VARREF(YprotoSportsYout),LITREF(lit_9),VARREF(YprotoSsystemYTproto_rootT));
  lit_10 = YPsb((P)";;; \n");
  CALL2(1,VARREF(YruntimeYformat),VARREF(YprotoSportsYout),LITREF(lit_10));
  lit_11 = YPsb((P)";;; Loading Runtime Bindings...\n");
  CALL2(1,VARREF(YruntimeYformat),VARREF(YprotoSportsYout),LITREF(lit_11));
  CALL0(1,VARREF(YastYinit_ast));
  lit_12 = YPsb((P)";;; Loading System Patches...\n");
  CALL2(1,VARREF(YruntimeYformat),VARREF(YprotoSportsYout),LITREF(lit_12));
  lit_13 = YPsb((P)"system-patches.proto");
  lit_14 = YPPsym((P)"proto/user");
  T0 = CALL1(1,VARREF(YprotoSsystemYadd_src_path),LITREF(lit_13));
  CALL2(1,VARREF(YtopYload),T0,LITREF(lit_14));
  lit_15 = YPsb((P)";;; Loading User Patches...\n");
  CALL2(1,VARREF(YruntimeYformat),VARREF(YprotoSportsYout),LITREF(lit_15));
  lit_16 = YPsb((P)"user-patches.proto");
  T1 = CALL1(1,VARREF(YprotoSsystemYadd_src_path),LITREF(lit_16));
  CALL2(1,VARREF(YtopYload),T1,LITREF(lit_14));
  lit_17 = YPsb((P)";;; \n");
  CALL2(1,VARREF(YruntimeYformat),VARREF(YprotoSportsYout),LITREF(lit_17));
  T3 = CALL1(1,VARREF(YtopYtop),LITREF(lit_14));
  T2 = T3;
  return T2;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_proto;
extern MODULE_INFO module_info_protoSeval;
extern MODULE_INFO module_info_protoSsystem;
extern MODULE_INFO module_info_ast;
extern MODULE_INFO module_info_top;
extern MODULE_INFO module_info_p2c;
extern MODULE_INFO module_info_protoSuser;
extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_runtime;
extern MODULE_INFO module_info_macros;
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
extern MODULE_INFO module_info_syntax;
extern MODULE_INFO module_info_protoScollectionsSmap;
extern MODULE_INFO module_info_write;
extern MODULE_INFO module_info_protoScollectionsSstep;

static USE_INFO use_infos[] = {
  {&module_info_proto},
  {&module_info_protoSeval},
  {&module_info_protoSsystem},
  {&module_info_ast},
  {&module_info_top},
  {&module_info_p2c},
  {&module_info_protoSuser},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"p2c-eval", &module_info_top, "p2c-eval"},
  {"backtrace", &module_info_top, "backtrace"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"identity", &module_info_runtime, "identity"},
  {"pathname-to-components", &module_info_protoSsystem, "pathname-to-components"},
  {"var-type", &module_info_macros, "var-type"},
  {"assignment-reference", &module_info_ast, "assignment-reference"},
  {"<passive-program>", &module_info_ast, "<passive-program>"},
  {"assocs-test", &module_info_protoScollectionsSassoc, "assocs-test"},
  {"zero?", &module_info_protoSmath, "zero?"},
  {"*print-base*", &module_info_protoScollectionsSstring, "*print-base*"},
  {"fill", &module_info_protoScollectionsScollection, "fill"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"do-stack-frames", &module_info_top, "do-stack-frames"},
  {"=", &module_info_protoSmath, "="},
  {"nul?", &module_info_protoSmath, "nul?"},
  {"<list>", &module_info_protoScollectionsSlist, "<list>"},
  {"load-in", &module_info_ast, "load-in"},
  {"assignment-form-setter", &module_info_ast, "assignment-form-setter"},
  {"signature-nary?", &module_info_ast, "signature-nary?"},
  {"dv", &module_info_boot, "dv"},
  {"fin-state?", &module_info_macros, "fin-state?"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"uppercase?", &module_info_protoSmath, "uppercase?"},
  {"always", &module_info_runtime, "always"},
  {"ast-define-binding", &module_info_ast, "ast-define-binding"},
  {"unwind-protect-cleanup-thunk", &module_info_ast, "unwind-protect-cleanup-thunk"},
  {"table-shrink-threshold", &module_info_protoScollectionsStable, "table-shrink-threshold"},
  {"reference-frame-number", &module_info_ast, "reference-frame-number"},
  {"<locals>", &module_info_ast, "<locals>"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"now-elt-setter", &module_info_protoScollectionsScollection, "now-elt-setter"},
  {"<ast-function>", &module_info_ast, "<ast-function>"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"binding-name", &module_info_ast, "binding-name"},
  {"signature-specs-setter", &module_info_ast, "signature-specs-setter"},
  {"use", &module_info_boot, "use"},
  {"round/", &module_info_protoSmath, "round/"},
  {"to-str", &module_info_protoSmath, "to-str"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"type-object", &module_info_boot, "type-object"},
  {"from", &module_info_protoScollectionsSrange, "from"},
  {"ini-state", &module_info_macros, "ini-state"},
  {"len", &module_info_protoScollectionsScollection, "len"},
  {"<class>", &module_info_boot, "<class>"},
  {"gensym", &module_info_macros, "gensym"},
  {"<output-port>", &module_info_protoSports, "<output-port>"},
  {"binding-index-setter", &module_info_ast, "binding-index-setter"},
  {"from-to-by", &module_info_protoScollectionsSrange, "from-to-by"},
  {"assignment-form", &module_info_ast, "assignment-form"},
  {"+", &module_info_protoSmath, "+"},
  {"read", &module_info_runtime, "read"},
  {"format", &module_info_runtime, "format"},
  {"and", &module_info_macros, "and"},
  {"%pair", &module_info_boot, "%pair"},
  {"do-static-global-bindings", &module_info_ast, "do-static-global-bindings"},
  {"sub", &module_info_protoScollectionsSsequence, "sub"},
  {"<str-tab>", &module_info_protoScollectionsStable, "<str-tab>"},
  {"to-digit", &module_info_protoSmath, "to-digit"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"module-name-to-relpath", &module_info_ast, "module-name-to-relpath"},
  {"read-from-string", &module_info_read, "read-from-string"},
  {"hierarchical-components", &module_info_protoSsystem, "hierarchical-components"},
  {"<type>", &module_info_boot, "<type>"},
  {"false-or", &module_info_protoStypes, "false-or"},
  {"add", &module_info_protoScollectionsScollection, "add"},
  {"signature-names-setter", &module_info_ast, "signature-names-setter"},
  {"even?", &module_info_protoSmath, "even?"},
  {"<=", &module_info_protoSmath, "<="},
  {"parent-directory", &module_info_protoSsystem, "parent-directory"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"locative-value", &module_info_runtime, "locative-value"},
  {"<alternative>", &module_info_ast, "<alternative>"},
  {"module-binding", &module_info_ast, "module-binding"},
  {"program-register", &module_info_ast, "program-register"},
  {"del-keys", &module_info_protoScollectionsScollection, "del-keys"},
  {"objectify", &module_info_ast, "objectify"},
  {"p2c-clean", &module_info_p2c, "p2c-clean"},
  {"len-setter", &module_info_protoScollectionsSbuffer, "len-setter"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"<bind-exit>", &module_info_ast, "<bind-exit>"},
  {"env-object-name", &module_info_ast, "env-object-name"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"<string-port>", &module_info_protoSports, "<string-port>"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"function-free-setter", &module_info_ast, "function-free-setter"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"binding-dynamic-extent?", &module_info_ast, "binding-dynamic-extent?"},
  {"char-ready?", &module_info_protoSports, "char-ready?"},
  {"monitor-info", &module_info_ast, "monitor-info"},
  {"rep", &module_info_boot, "rep"},
  {"<file-output-port>", &module_info_protoSports, "<file-output-port>"},
  {"function-data-refs", &module_info_ast, "function-data-refs"},
  {"application-known?-setter", &module_info_ast, "application-known?-setter"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"id-hash", &module_info_protoScollectionsStable, "id-hash"},
  {"binding-native-to?", &module_info_ast, "binding-native-to?"},
  {"<ast-primitive-definition>", &module_info_ast, "<ast-primitive-definition>"},
  {"<definition>", &module_info_ast, "<definition>"},
  {"program-register-setter", &module_info_ast, "program-register-setter"},
  {"create-directory", &module_info_protoSsystem, "create-directory"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"t<", &module_info_protoStypes, "t<"},
  {"<binding>", &module_info_ast, "<binding>"},
  {"fix-let-bindings-setter", &module_info_ast, "fix-let-bindings-setter"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"function-bindings", &module_info_ast, "function-bindings"},
  {"inc", &module_info_macros, "inc"},
  {"logior", &module_info_protoSmath, "logior"},
  {"fabs", &module_info_protoSmath, "fabs"},
  {"flo-bits", &module_info_protoSmath, "flo-bits"},
  {"round", &module_info_protoSmath, "round"},
  {"lab", &module_info_boot, "lab"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"locals-body-setter", &module_info_ast, "locals-body-setter"},
  {"cat2", &module_info_protoScollectionsSsequence, "cat2"},
  {"peek-char", &module_info_protoSports, "peek-char"},
  {"add-src-path", &module_info_protoSsystem, "add-src-path"},
  {"*path-separator*", &module_info_protoSsystem, "*path-separator*"},
  {"eval", &module_info_syntax, "eval"},
  {"truncate/", &module_info_protoSmath, "truncate/"},
  {"<str>", &module_info_boot, "<str>"},
  {"sig", &module_info_runtime, "sig"},
  {"os-name", &module_info_protoSsystem, "os-name"},
  {"isa", &module_info_boot, "isa"},
  {"c-filename", &module_info_protoSsystem, "c-filename"},
  {"export", &module_info_boot, "export"},
  {"table-protocol", &module_info_protoScollectionsStable, "table-protocol"},
  {"*c-extension*", &module_info_protoSsystem, "*c-extension*"},
  {"function-signature-setter", &module_info_ast, "function-signature-setter"},
  {"call-with-output-file", &module_info_protoSports, "call-with-output-file"},
  {"binding-dynamic-extent?-setter", &module_info_ast, "binding-dynamic-extent?-setter"},
  {"del-key", &module_info_protoScollectionsScollection, "del-key"},
  {"pos", &module_info_protoScollectionsSsequence, "pos"},
  {"function-registers-setter", &module_info_ast, "function-registers-setter"},
  {"find-environment-module", &module_info_ast, "find-environment-module"},
  {"binding-kind", &module_info_ast, "binding-kind"},
  {"init-ast", &module_info_ast, "init-ast"},
  {"p2c-build-app", &module_info_p2c, "p2c-build-app"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"t=", &module_info_protoStypes, "t="},
  {"binding-value", &module_info_ast, "binding-value"},
  {"do", &module_info_protoScollectionsScollection, "do"},
  {"fix-let-bindings", &module_info_ast, "fix-let-bindings"},
  {"<", &module_info_protoSmath, "<"},
  {"function-body-setter", &module_info_ast, "function-body-setter"},
  {"error", &module_info_boot, "error"},
  {"max", &module_info_protoSmath, "max"},
  {"binding-mutable?", &module_info_ast, "binding-mutable?"},
  {"function-signature", &module_info_ast, "function-signature"},
  {"call-with-input-file", &module_info_protoSports, "call-with-input-file"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"<local-binding>", &module_info_ast, "<local-binding>"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"<predefined-application>", &module_info_ast, "<predefined-application>"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"constant-value", &module_info_ast, "constant-value"},
  {"<met>", &module_info_boot, "<met>"},
  {"set-module-environments", &module_info_ast, "set-module-environments"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"len/fill-setter", &module_info_protoScollectionsSbuffer, "len/fill-setter"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"signature-names", &module_info_ast, "signature-names"},
  {"signature-value", &module_info_ast, "signature-value"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"locals-body", &module_info_ast, "locals-body"},
  {"fab", &module_info_protoScollectionsScollection, "fab"},
  {"all2?", &module_info_protoScollectionsScollection, "all2?"},
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
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"close-input-port", &module_info_protoSports, "close-input-port"},
  {"<runtime-assignment>", &module_info_ast, "<runtime-assignment>"},
  {"when", &module_info_macros, "when"},
  {"binding-value-setter", &module_info_ast, "binding-value-setter"},
  {"t+", &module_info_protoStypes, "t+"},
  {"<programs>", &module_info_ast, "<programs>"},
  {"find-key", &module_info_protoScollectionsScollection, "find-key"},
  {"nul", &module_info_boot, "nul"},
  {"add-tmp-path", &module_info_protoSsystem, "add-tmp-path"},
  {"apply", &module_info_macros, "apply"},
  {"logxor", &module_info_protoSmath, "logxor"},
  {"*proto-extension*", &module_info_protoSsystem, "*proto-extension*"},
  {"~==", &module_info_protoSmath, "~=="},
  {"label-components", &module_info_protoSsystem, "label-components"},
  {"<module-binding>", &module_info_ast, "<module-binding>"},
  {"<unwind-protect>", &module_info_ast, "<unwind-protect>"},
  {"<fab-list>", &module_info_ast, "<fab-list>"},
  {"<string-output-port>", &module_info_protoSports, "<string-output-port>"},
  {"<compile-time>", &module_info_ast, "<compile-time>"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"pop-last!", &module_info_protoScollectionsSbuffer, "pop-last!"},
  {"monitor-type", &module_info_ast, "monitor-type"},
  {"set", &module_info_boot, "set"},
  {"open-output-file", &module_info_protoSports, "open-output-file"},
  {"as-lowercase", &module_info_protoSmath, "as-lowercase"},
  {"fix-let-arguments", &module_info_ast, "fix-let-arguments"},
  {"alternative-alternant", &module_info_ast, "alternative-alternant"},
  {"/", &module_info_protoSmath, "/"},
  {"eof-object?", &module_info_protoSmath, "eof-object?"},
  {"call-with-string-output-port", &module_info_protoSports, "call-with-string-output-port"},
  {"case", &module_info_macros, "case"},
  {"remove-modules-by-name!", &module_info_ast, "remove-modules-by-name!"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"modulo", &module_info_protoSmath, "modulo"},
  {"swapf", &module_info_macros, "swapf"},
  {"opf", &module_info_macros, "opf"},
  {"module-target-environment", &module_info_ast, "module-target-environment"},
  {"ct", &module_info_boot, "ct"},
  {"<file-input-port>", &module_info_protoSports, "<file-input-port>"},
  {"<string-input-port>", &module_info_protoSports, "<string-input-port>"},
  {"napply", &module_info_macros, "napply"},
  {"components-parent-directory", &module_info_protoSsystem, "components-parent-directory"},
  {"fix-let-body-setter", &module_info_ast, "fix-let-body-setter"},
  {"mem?", &module_info_protoScollectionsScollection, "mem?"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"module-exports", &module_info_ast, "module-exports"},
  {"add!", &module_info_protoScollectionsSsequence, "add!"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"<real-reference>", &module_info_ast, "<real-reference>"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"<fix-let>", &module_info_ast, "<fix-let>"},
  {"fab-map", &module_info_protoScollectionsSmap, "fab-map"},
  {"collect", &module_info_macros, "collect"},
  {"constant-index", &module_info_ast, "constant-index"},
  {"module-name", &module_info_ast, "module-name"},
  {"*", &module_info_protoSmath, "*"},
  {"dc", &module_info_boot, "dc"},
  {"odd?", &module_info_protoSmath, "odd?"},
  {"function-self-recursive?", &module_info_ast, "function-self-recursive?"},
  {"open-input-file", &module_info_protoSports, "open-input-file"},
  {"monitor-handler", &module_info_ast, "monitor-handler"},
  {"parse-in", &module_info_top, "parse-in"},
  {"file-type", &module_info_protoSsystem, "file-type"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"reduce+", &module_info_protoScollectionsScollection, "reduce+"},
  {"slot", &module_info_boot, "slot"},
  {"signature-specs", &module_info_ast, "signature-specs"},
  {"<ast-macro-definition>", &module_info_ast, "<ast-macro-definition>"},
  {"fin", &module_info_boot, "fin"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"*obj-extension*", &module_info_protoSsystem, "*obj-extension*"},
  {"environment-uses-modules", &module_info_ast, "environment-uses-modules"},
  {"constant-index-setter", &module_info_ast, "constant-index-setter"},
  {"if", &module_info_boot, "if"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"do-module-loader-modules", &module_info_ast, "do-module-loader-modules"},
  {"probe-module", &module_info_ast, "probe-module"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"cat", &module_info_macros, "cat"},
  {"-", &module_info_protoSmath, "-"},
  {"proto-filename", &module_info_protoSsystem, "proto-filename"},
  {"port-contents", &module_info_protoSports, "port-contents"},
  {"init-environment-for-eval", &module_info_ast, "init-environment-for-eval"},
  {"<local-reference>", &module_info_ast, "<local-reference>"},
  {"all?", &module_info_protoScollectionsScollection, "all?"},
  {"any2?", &module_info_protoScollectionsScollection, "any2?"},
  {"tail", &module_info_boot, "tail"},
  {"find-binding", &module_info_ast, "find-binding"},
  {"<monitor>", &module_info_ast, "<monitor>"},
  {"<tab>", &module_info_protoScollectionsStable, "<tab>"},
  {"<bound?>", &module_info_ast, "<bound?>"},
  {"binding-global-box-setter", &module_info_ast, "binding-global-box-setter"},
  {"as", &module_info_protoStypes, "as"},
  {"push-last!", &module_info_protoScollectionsSbuffer, "push-last!"},
  {"from-to", &module_info_protoScollectionsSrange, "from-to"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"lst", &module_info_boot, "lst"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"alphabetic?", &module_info_protoSmath, "alphabetic?"},
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
  {"dg", &module_info_boot, "dg"},
  {"<ast-signature>", &module_info_ast, "<ast-signature>"},
  {"for", &module_info_macros, "for"},
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
  {"address-of", &module_info_protoSmath, "address-of"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"function-debug-name-setter", &module_info_ast, "function-debug-name-setter"},
  {"call-with-string-input-port", &module_info_protoSports, "call-with-string-input-port"},
  {"dec", &module_info_macros, "dec"},
  {"buf", &module_info_protoScollectionsSbuffer, "buf"},
  {"binding-dotted?-setter", &module_info_ast, "binding-dotted?-setter"},
  {"<computed-program>", &module_info_ast, "<computed-program>"},
  {"let", &module_info_boot, "let"},
  {"remainder", &module_info_protoSmath, "remainder"},
  {"reduce", &module_info_protoScollectionsScollection, "reduce"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"keys", &module_info_protoScollectionsScollection, "keys"},
  {"del-dups", &module_info_protoScollectionsSsequence, "del-dups"},
  {"file-mtime", &module_info_protoSsystem, "file-mtime"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"num-to-str", &module_info_protoSmath, "num-to-str"},
  {"add-build-path", &module_info_protoSsystem, "add-build-path"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"ds", &module_info_boot, "ds"},
  {"def-list", &module_info_ast, "def-list"},
  {"def-programs", &module_info_ast, "def-programs"},
  {"rev", &module_info_protoScollectionsSsequence, "rev"},
  {"from-below-by", &module_info_protoScollectionsSrange, "from-below-by"},
  {"dlet", &module_info_macros, "dlet"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"%isa", &module_info_boot, "%isa"},
  {"write-to-string", &module_info_write, "write-to-string"},
  {"<free-environment>", &module_info_ast, "<free-environment>"},
  {"signature-arity-setter", &module_info_ast, "signature-arity-setter"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"function-value", &module_info_ast, "function-value"},
  {"case-insensitive-string-equal", &module_info_protoScollectionsStable, "case-insensitive-string-equal"},
  {"floor", &module_info_protoSmath, "floor"},
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
  {"in", &module_info_protoSports, "in"},
  {"empty", &module_info_protoScollectionsScollection, "empty"},
  {"class-name", &module_info_boot, "class-name"},
  {"del", &module_info_protoScollectionsSsequence, "del"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"<buf>", &module_info_protoScollectionsSbuffer, "<buf>"},
  {"neg", &module_info_protoSmath, "neg"},
  {"locals-bindings-setter", &module_info_ast, "locals-bindings-setter"},
  {"components-basename", &module_info_protoSsystem, "components-basename"},
  {"<module-binding-reference>", &module_info_ast, "<module-binding-reference>"},
  {"<int>", &module_info_boot, "<int>"},
  {"<num>", &module_info_boot, "<num>"},
  {"nil", &module_info_boot, "nil"},
  {"str-to-num", &module_info_protoScollectionsSstring, "str-to-num"},
  {"unchecked-runtime-environment", &module_info_ast, "unchecked-runtime-environment"},
  {"==", &module_info_macros, "=="},
  {"binding-type", &module_info_ast, "binding-type"},
  {"function-source", &module_info_ast, "function-source"},
  {"<constant>", &module_info_ast, "<constant>"},
  {"writeln", &module_info_write, "writeln"},
  {"ast-evaluate", &module_info_ast, "ast-evaluate"},
  {"<module>", &module_info_ast, "<module>"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"binding-type-setter", &module_info_ast, "binding-type-setter"},
  {"file-exists?", &module_info_protoSsystem, "file-exists?"},
  {"reference-frame-offset", &module_info_ast, "reference-frame-offset"},
  {"<step>", &module_info_protoScollectionsSstep, "<step>"},
  {"signature-bindings", &module_info_ast, "signature-bindings"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"lognot", &module_info_protoSmath, "lognot"},
  {"binding-locative", &module_info_ast, "binding-locative"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"sexpr-signature-parameters", &module_info_syntax, "sexpr-signature-parameters"},
  {"binding-inferred-type", &module_info_ast, "binding-inferred-type"},
  {"low-elt-setter", &module_info_protoScollectionsScollection, "low-elt-setter"},
  {"empty?", &module_info_macros, "empty?"},
  {"<port>", &module_info_protoSports, "<port>"},
  {"%slot", &module_info_boot, "%slot"},
  {"current-gc-state", &module_info_protoScollectionsStable, "current-gc-state"},
  {"<arguments>", &module_info_ast, "<arguments>"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"objectify-signature", &module_info_ast, "objectify-signature"},
  {"as-uppercase", &module_info_protoSmath, "as-uppercase"},
  {"os-binding-value", &module_info_protoSsystem, "os-binding-value"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"ash", &module_info_protoSmath, "ash"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"global-box-value", &module_info_ast, "global-box-value"},
  {"signature-bindings-setter", &module_info_ast, "signature-bindings-setter"},
  {"write-char", &module_info_protoSports, "write-char"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"top", &module_info_top, "top"},
  {"<application>", &module_info_ast, "<application>"},
  {"map2", &module_info_protoScollectionsScollection, "map2"},
  {"bound?", &module_info_boot, "bound?"},
  {"<log>", &module_info_boot, "<log>"},
  {"case-insensitive-string-hash", &module_info_protoScollectionsStable, "case-insensitive-string-hash"},
  {"<assignment>", &module_info_ast, "<assignment>"},
  {"vec", &module_info_boot, "vec"},
  {"<program>", &module_info_ast, "<program>"},
  {"pos?", &module_info_protoSmath, "pos?"},
  {"<map>", &module_info_protoScollectionsSmap, "<map>"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"save-image", &module_info_top, "save-image"},
  {"pick", &module_info_protoScollectionsSsequence, "pick"},
  {"*exe-extension*", &module_info_protoSsystem, "*exe-extension*"},
  {"last", &module_info_protoScollectionsSsequence, "last"},
  {"lowercase?", &module_info_protoSmath, "lowercase?"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"function-index", &module_info_ast, "function-index"},
  {"*proto-root*", &module_info_protoSsystem, "*proto-root*"},
  {"<reference>", &module_info_ast, "<reference>"},
  {"any?", &module_info_protoScollectionsScollection, "any?"},
  {"not", &module_info_boot, "not"},
  {"function-binding", &module_info_ast, "function-binding"},
  {"binding-inferred-type-setter", &module_info_ast, "binding-inferred-type-setter"},
  {"$proto-boot-module-name", &module_info_ast, "$proto-boot-module-name"},
  {"curry", &module_info_runtime, "curry"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"function-temporaries-setter", &module_info_ast, "function-temporaries-setter"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"<range>", &module_info_protoScollectionsSrange, "<range>"},
  {"<any>", &module_info_boot, "<any>"},
  {"fix-let-types", &module_info_ast, "fix-let-types"},
  {"function-debug-name", &module_info_ast, "function-debug-name"},
  {"force-output", &module_info_protoSports, "force-output"},
  {"dm", &module_info_boot, "dm"},
  {"alternative-condition", &module_info_ast, "alternative-condition"},
  {"low-elt", &module_info_protoScollectionsScollection, "low-elt"},
  {"<module-loader>", &module_info_ast, "<module-loader>"},
  {"components-to-pathname", &module_info_protoSsystem, "components-to-pathname"},
  {"load", &module_info_top, "load"},
  {"application-arguments", &module_info_ast, "application-arguments"},
  {"exe-filename", &module_info_protoSsystem, "exe-filename"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"type-class", &module_info_boot, "type-class"},
  {"function-nary?", &module_info_ast, "function-nary?"},
  {"str", &module_info_protoScollectionsSstring, "str"},
  {"<ast-method>", &module_info_ast, "<ast-method>"},
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
  {"p2c-ast", &module_info_p2c, "p2c-ast"},
  {"lsh", &module_info_protoSmath, "lsh"},
  {"newline", &module_info_protoSports, "newline"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"collected", &module_info_macros, "collected"},
  {"do-named-static-global-bindings", &module_info_ast, "do-named-static-global-bindings"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"first-then", &module_info_protoScollectionsSstep, "first-then"},
  {"global-box-value-setter", &module_info_ast, "global-box-value-setter"},
  {"$proto-runtime-module-name", &module_info_ast, "$proto-runtime-module-name"},
  {"push", &module_info_protoScollectionsSlist, "push"},
  {"pop", &module_info_protoScollectionsSlist, "pop"},
  {"signature-nary?-setter", &module_info_ast, "signature-nary?-setter"},
  {"p2c-top", &module_info_p2c, "p2c-top"},
  {"<global-box>", &module_info_ast, "<global-box>"},
  {"rev!", &module_info_macros, "rev!"},
  {"locals-functions-setter", &module_info_ast, "locals-functions-setter"},
  {"components-last", &module_info_protoSsystem, "components-last"},
  {"free-environment", &module_info_ast, "free-environment"},
  {"or", &module_info_macros, "or"},
  {"signature-arity", &module_info_ast, "signature-arity"},
  {"binding-info-setter", &module_info_ast, "binding-info-setter"},
  {"from-above-by", &module_info_protoScollectionsSrange, "from-above-by"},
  {"unless", &module_info_macros, "unless"},
  {"min", &module_info_protoSmath, "min"},
  {"alternative-consequent", &module_info_ast, "alternative-consequent"},
  {"from-by", &module_info_protoScollectionsSrange, "from-by"},
  {"application-known?", &module_info_ast, "application-known?"},
  {"<assocs>", &module_info_protoScollectionsSassoc, "<assocs>"},
  {"alter", &module_info_protoScollectionsScollection, "alter"},
  {"copy-state", &module_info_protoScollectionsScollection, "copy-state"},
  {"elt-setter", &module_info_protoScollectionsScollection, "elt-setter"},
  {"fab-p2c-module", &module_info_ast, "fab-p2c-module"},
  {"binding-module-name", &module_info_ast, "binding-module-name"},
  {"fix-let-types-setter", &module_info_ast, "fix-let-types-setter"},
  {"function-data-refs-setter", &module_info_ast, "function-data-refs-setter"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"write", &module_info_write, "write"},
  {"probe-directory", &module_info_protoSsystem, "probe-directory"},
  {"<ast-primitive>", &module_info_ast, "<ast-primitive>"},
  {"function-registers", &module_info_ast, "function-registers"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"os-binding-value-setter", &module_info_protoSsystem, "os-binding-value-setter"},
  {"2nd", &module_info_protoScollectionsSsequence, "2nd"},
  {"pushf", &module_info_macros, "pushf"},
  {"tup", &module_info_boot, "tup"},
  {"display", &module_info_write, "display"},
  {"ceiling", &module_info_protoSmath, "ceiling"},
  {"report-undefined-global-bindings", &module_info_ast, "report-undefined-global-bindings"},
  {"$permanent-hash-state", &module_info_protoScollectionsStable, "$permanent-hash-state"},
  {"module-loader-module-type", &module_info_ast, "module-loader-module-type"},
  {"nxt-state", &module_info_macros, "nxt-state"},
  {"collecting", &module_info_macros, "collecting"},
  {"process-id", &module_info_protoSsystem, "process-id"},
  {"function-index-setter", &module_info_ast, "function-index-setter"},
  {"abs", &module_info_protoSmath, "abs"},
  {"ceiling/", &module_info_protoSmath, "ceiling/"},
  {"loc", &module_info_boot, "loc"},
  {"install-initial-bindings", &module_info_ast, "install-initial-bindings"},
  {"app-args", &module_info_runtime, "app-args"},
  {"load-module", &module_info_ast, "load-module"},
  {"p2c-def-app", &module_info_p2c, "p2c-def-app"},
  {"reference-called-function?", &module_info_ast, "reference-called-function?"},
  {"close-output-port", &module_info_protoSports, "close-output-port"},
  {"now-key", &module_info_protoScollectionsScollection, "now-key"},
  {">", &module_info_protoSmath, ">"},
  {"<runtime-reference>", &module_info_ast, "<runtime-reference>"},
  {"sub-setter", &module_info_protoScollectionsSsequence, "sub-setter"},
  {"reference-called-function?-setter", &module_info_ast, "reference-called-function?-setter"},
  {"popf", &module_info_macros, "popf"},
  {"bind-exit-main-fun", &module_info_ast, "bind-exit-main-fun"},
  {"read-file", &module_info_top, "read-file"},
  {"unwind-protect-protected-thunk", &module_info_ast, "unwind-protect-protected-thunk"},
  {"<global-assignment>", &module_info_ast, "<global-assignment>"},
  {"p2c-exp", &module_info_p2c, "p2c-exp"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"application-function", &module_info_ast, "application-function"},
  {"monitor-test", &module_info_ast, "monitor-test"},
  {"function-free", &module_info_ast, "function-free"},
  {"as-lst", &module_info_ast, "as-lst"},
  {"isa?", &module_info_boot, "isa?"},
  {"monitor-main-thunk", &module_info_ast, "monitor-main-thunk"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"now-elt", &module_info_macros, "now-elt"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"~=", &module_info_protoSmath, "~="},
  {"locals-functions", &module_info_ast, "locals-functions"},
  {"do2", &module_info_protoScollectionsScollection, "do2"},
  {"1st", &module_info_protoScollectionsSsequence, "1st"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"logbit?", &module_info_protoSmath, "logbit?"},
  {"assert", &module_info_macros, "assert"},
  {"elt", &module_info_macros, "elt"},
  {"var-name", &module_info_macros, "var-name"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"obj-filename", &module_info_protoSsystem, "obj-filename"},
  {"<global-reference>", &module_info_ast, "<global-reference>"},
  {"runtime-environment", &module_info_ast, "runtime-environment"},
  {"binding-index", &module_info_ast, "binding-index"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", NULL},
  {"*proto-date*", &YmainYTproto_dateT},
  {"*proto-version*", &YmainYTproto_versionT},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {NULL, NULL}
};

extern MODULE_INFO module_info_main;
MODULE_INFO module_info_main = {
  "main",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_proto (void);
extern void load_module_protoSeval (void);
extern void load_module_protoSsystem (void);
extern void load_module_ast (void);
extern void load_module_top (void);
extern void load_module_p2c (void);
extern void load_module_protoSuser (void);

/* EXPRESSION: */

extern void load_module_main (void);

void load_module_main (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_proto();
  load_module_protoSeval();
  load_module_protoSsystem();
  load_module_ast();
  load_module_top();
  load_module_p2c();
  load_module_protoSuser();

  (P)YmainY___main_0___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
