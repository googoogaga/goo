/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: main */

EXT(YastYbinding_kind,"ast","binding-kind");
EXT(YruntimeYreduceA,"runtime","reduce+");
EXT(YtopYload,"top","load");
EXT(YastYmodule_target_environment,"ast","module-target-environment");
EXT(YwriteYwriteln,"write","writeln");
EXT(YmacrosYmap,"macros","map");
EXT(Ynul,"boot","nul");
EXT(YruntimeYcurry,"runtime","curry");
EXT(YastYLast_genericG,"ast","<ast-generic>");
EXT(YprotoSsystemYcomponents_basename,"proto/system","components-basename");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
EXT(YruntimeYin,"runtime","in");
EXT(YastYLfree_environmentG,"ast","<free-environment>");
EXT(Yclass_name,"boot","class-name");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YruntimeYalways,"runtime","always");
EXT(YprotoSsystemYTc_extensionT,"proto/system","*c-extension*");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YastYLassignmentG,"ast","<assignment>");
EXT(YastYmonitor_main_thunk,"ast","monitor-main-thunk");
EXT(Yp2cYp2c_clean,"p2c","p2c-clean");
EXT(YruntimeYto_digit,"runtime","to-digit");
EXT(YLintG,"boot","<int>");
EXT(YruntimeYmap2,"runtime","map2");
EXT(YastYfunction_source_setter,"ast","function-source-setter");
EXT(YastYglobal_box_value_setter,"ast","global-box-value-setter");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(YastYLlocal_referenceG,"ast","<local-reference>");
EXT(YruntimeYread_char,"runtime","read-char");
EXT(YastYLdefinitionG,"ast","<definition>");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
EXT(Yfun_value,"boot","fun-value");
EXT(YastYload_in,"ast","load-in");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YastYglobal_box_value,"ast","global-box-value");
EXT(YastYLmonitorG,"ast","<monitor>");
EXT(YastYsignature_specs,"ast","signature-specs");
EXT(YastYalternative_condition,"ast","alternative-condition");
EXT(YastYsignature_naryQ,"ast","signature-nary?");
EXT(YastYfunction_signature_setter,"ast","function-signature-setter");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YastYunwind_protect_cleanup_thunk,"ast","unwind-protect-cleanup-thunk");
EXT(YastYfunction_temporaries,"ast","function-temporaries");
EXT(YastYsignature_value,"ast","signature-value");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(YLchrG,"boot","<chr>");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YastYmodule_name_to_relpath,"ast","module-name-to-relpath");
EXT(YastYsignature_names_setter,"ast","signature-names-setter");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(YprotoSsystemYos_name,"proto/system","os-name");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(YruntimeYfloorS,"runtime","floor/");
EXT(YastYfunction_debug_name,"ast","function-debug-name");
EXT(YwriteYwrite_to_string,"write","write-to-string");
EXT(YruntimeYreduce,"runtime","reduce");
EXT(YPslot,"boot","%slot");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YastYLglobal_referenceG,"ast","<global-reference>");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YastYlocals_functions_setter,"ast","locals-functions-setter");
EXT(YprotoSsystemYproto_filename,"proto/system","proto-filename");
EXT(YastYLast_primitive_definitionG,"ast","<ast-primitive-definition>");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YruntimeYroundS,"runtime","round/");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(YDmin_int,"boot","$min-int");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YruntimeYnow_elt,"runtime","now-elt");
EXT(YsyntaxYeval,"syntax","eval");
EXT(YLlogG,"boot","<log>");
EXT(YastYlocals_body,"ast","locals-body");
EXT(YruntimeYflo_bits,"runtime","flo-bits");
EXT(YruntimeYlsh,"runtime","lsh");
EXT(YruntimeYash,"runtime","ash");
EXT(YruntimeYidentity,"runtime","identity");
EXT(Yp2cYp2c_def_app,"p2c","p2c-def-app");
EXT(YLslotG,"boot","<slot>");
EXT(YruntimeYTprint_baseT,"runtime","*print-base*");
EXT(YastYapplication_knownQ_setter,"ast","application-known?-setter");
EXT(YruntimeYLfile_input_portG,"runtime","<file-input-port>");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YmacrosYpair,"macros","pair");
EXT(YprotoSsystemYTobj_extensionT,"proto/system","*obj-extension*");
EXT(YprotoSsystemYadd_tmp_path,"proto/system","add-tmp-path");
EXT(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
EXT(YastYLmoduleG,"ast","<module>");
EXT(Ynot,"boot","not");
EXT(YprotoSsystemYcomponents_to_pathname,"proto/system","components-to-pathname");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YruntimeY_,"runtime","-");
EXT(YprotoSsystemYfile_mtime,"proto/system","file-mtime");
EXT(YprotoSsystemYadd_src_path,"proto/system","add-src-path");
EXT(YastYapplication_binding,"ast","application-binding");
EXT(YruntimeYabs,"runtime","abs");
EXT(Yfun_name,"boot","fun-name");
EXT(Yclass_parents,"boot","class-parents");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YruntimeYmax,"runtime","max");
EXT(YastYapplication_tailQ,"ast","application-tail?");
EXT(YLanyG,"boot","<any>");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
EXT(YruntimeYT,"runtime","*");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
EXT(YtopYbacktrace,"top","backtrace");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(Ytype_class,"boot","type-class");
EXT(YastYbinding_value_setter,"ast","binding-value-setter");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(YwriteYwrite,"write","write");
EXT(YastYLunwind_protectG,"ast","<unwind-protect>");
EXT(YLunionG,"boot","<union>");
EXT(YastYconstant_index_setter,"ast","constant-index-setter");
EXT(Ylst,"boot","lst");
EXT(YtopYread_file,"top","read-file");
EXT(YDmax_int,"boot","$max-int");
EXT(YruntimeYdefault,"runtime","default");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YmacrosYcat,"macros","cat");
EXT(YastYbinding_global_box,"ast","binding-global-box");
EXT(YastYconstant_index,"ast","constant-index");
EXT(YastYLlocal_assignmentG,"ast","<local-assignment>");
EXT(YastYassignment_form_setter,"ast","assignment-form-setter");
EXT(YprotoSsystemYprobe_directory,"proto/system","probe-directory");
EXT(YastYsignature_naryQ_setter,"ast","signature-nary?-setter");
EXT(YastYbinding_value,"ast","binding-value");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(YruntimeYfloor,"runtime","floor");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(YastYbind_exit_main_fun,"ast","bind-exit-main-fun");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YruntimeYmodulo,"runtime","modulo");
EXT(YastYlocals_body_setter,"ast","locals-body-setter");
EXT(YastYmonitor_handler,"ast","monitor-handler");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
EXT(YprotoSsystemYcomponents_last,"proto/system","components-last");
EXT(YruntimeYlast,"runtime","last");
EXT(YruntimeYlow_elt,"runtime","low-elt");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
EXT(YtopYp2c_eval,"top","p2c-eval");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YastYLmodule_bindingG,"ast","<module-binding>");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(YastYas_lst,"ast","as-lst");
EXT(YastYLast_macro_definitionG,"ast","<ast-macro-definition>");
EXT(YruntimeYLE,"runtime","<=");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(YastYLargumentsG,"ast","<arguments>");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YastYLast_signatureG,"ast","<ast-signature>");
EXT(YruntimeYformat,"runtime","format");
EXT(YprotoSsystemYTexe_extensionT,"proto/system","*exe-extension*");
EXT(YruntimeYall2Q,"runtime","all2?");
EXT(YastYfunction_signature,"ast","function-signature");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");
EXT(YastYmodule_syntax_environment,"ast","module-syntax-environment");
EXT(YruntimeYlow_elt_setter,"runtime","low-elt-setter");
EXT(YastYreport_undefined_global_bindings,"ast","report-undefined-global-bindings");
EXT(YastYruntime_environment,"ast","runtime-environment");
EXT(YruntimeYmemQ,"runtime","mem?");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(YastYdo_module_loader_modules,"ast","do-module-loader-modules");
EXT(YwriteYdisplay,"write","display");
EXT(YastYassignment_binding,"ast","assignment-binding");
EXT(YprotoSsystemYTpath_separatorT,"proto/system","*path-separator*");
EXT(YastYapplication_function,"ast","application-function");
EXT(YtopYtop,"top","top");
EXT(Yerror,"boot","error");
EXT(YruntimeYlogior,"runtime","logior");
EXT(YruntimeYrev,"runtime","rev");
EXT(YruntimeYclose_output_port,"runtime","close-output-port");
EXT(YastYfunction_self_recursiveQ_setter,"ast","function-self-recursive?-setter");
EXT(YruntimeYLstepG,"runtime","<step>");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(YastYDproto_boot_module_name,"ast","$proto-boot-module-name");
DEF(YmainYTproto_versionT,"main","*proto-version*");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YastYprogram_type_setter,"ast","program-type-setter");
EXT(YastYfunction_temporaries_setter,"ast","function-temporaries-setter");
EXT(YruntimeYG,"runtime",">");
EXT(YastYdo_named_static_global_bindings,"ast","do-named-static-global-bindings");
EXT(YruntimeYNE,"runtime","~=");
EXT(YprotoSsystemYadd_build_path,"proto/system","add-build-path");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YastYremove_modules_by_nameX,"ast","remove-modules-by-name!");
EXT(YastYdo_static_global_bindings,"ast","do-static-global-bindings");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YastYfab_p2c_module,"ast","fab-p2c-module");
EXT(YastYbinding_name,"ast","binding-name");
EXT(YruntimeYsig,"runtime","sig");
EXT(YastYLpredefined_applicationG,"ast","<predefined-application>");
EXT(YastYreference_frame_offset,"ast","reference-frame-offset");
EXT(Yadd_slot,"boot","add-slot");
EXT(YruntimeYcopy_state,"runtime","copy-state");
EXT(YprotoSsystemYexe_filename,"proto/system","exe-filename");
EXT(YastYfunction_registers_setter,"ast","function-registers-setter");
EXT(YastYfunction_source,"ast","function-source");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YastYlocals_functions,"ast","locals-functions");
EXT(YruntimeYlogxor,"runtime","logxor");
EXT(YastYsignature_arity_setter,"ast","signature-arity-setter");
EXT(YastYmodule_binding,"ast","module-binding");
EXT(Yp2cYp2c_exp,"p2c","p2c-exp");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
EXT(YastYsignature_bindings_setter,"ast","signature-bindings-setter");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(YruntimeYL,"runtime","<");
EXT(YruntimeYpop,"runtime","pop");
EXT(YastYlocals_bindings,"ast","locals-bindings");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YastYDproto_runtime_module_name,"ast","$proto-runtime-module-name");
EXT(YastYfunction_self_recursiveQ,"ast","function-self-recursive?");
EXT(YtopYdo_stack_frames,"top","do-stack-frames");
EXT(YastYLglobal_boxG,"ast","<global-box>");
EXT(YastYfind_binding,"ast","find-binding");
EXT(YLoptsG,"boot","<opts>");
EXT(YruntimeYkeys,"runtime","keys");
EXT(YruntimeYlogand,"runtime","logand");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YprotoSsystemYpathname_to_components,"proto/system","pathname-to-components");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YastYLmodule_binding_referenceG,"ast","<module-binding-reference>");
EXT(YastYalternative_alternant,"ast","alternative-alternant");
EXT(YruntimeYlen,"runtime","len");
EXT(YastYfunction_index_setter,"ast","function-index-setter");
EXT(YmacrosYnapply,"macros","napply");
EXT(YastYreference_called_functionQ_setter,"ast","reference-called-function?-setter");
EXT(YruntimeYE,"runtime","=");
EXT(YastYprogram_type,"ast","program-type");
EXT(YmacrosYtup,"macros","tup");
EXT(YprotoSsystemYparent_directory,"proto/system","parent-directory");
EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYceiling,"runtime","ceiling");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(YprotoSsystemYhierarchical_components,"proto/system","hierarchical-components");
EXT(YastYLreferenceG,"ast","<reference>");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YruntimeYid_hash,"runtime","id-hash");
EXT(Yp2cYp2c_ast,"p2c","p2c-ast");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YruntimeYlognot,"runtime","lognot");
EXT(YastYlocals_bindings_setter,"ast","locals-bindings-setter");
EXT(YastYfunction_bindings,"ast","function-bindings");
EXT(YastYLast_primitiveG,"ast","<ast-primitive>");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YruntimeYany2Q,"runtime","any2?");
DEF(YmainYTproto_dateT,"main","*proto-date*");
EXT(Ytype_object,"boot","type-object");
EXT(YastYbinding_global_box_setter,"ast","binding-global-box-setter");
EXT(YastYfunction_registers,"ast","function-registers");
EXT(YLclassG,"boot","<class>");
EXT(YruntimeYas,"runtime","as");
EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
EXT(YastYbinding_inferred_type_setter,"ast","binding-inferred-type-setter");
EXT(YastYLruntime_referenceG,"ast","<runtime-reference>");
EXT(YastYLast_functionG,"ast","<ast-function>");
EXT(YastYLbotG,"ast","<bot>");
EXT(YastYprobe_module,"ast","probe-module");
EXT(YastYbinding_dottedQ,"ast","binding-dotted?");
EXT(YastYLsequentialG,"ast","<sequential>");
EXT(YastYLreal_referenceG,"ast","<real-reference>");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(YastYapplication_knownQ,"ast","application-known?");
EXT(YastYfunction_index,"ast","function-index");
EXT(YastYbinding_dynamic_extentQ,"ast","binding-dynamic-extent?");
EXT(YastYbinding_index_setter,"ast","binding-index-setter");
EXT(YastYbinding_native_toQ,"ast","binding-native-to?");
EXT(YLtypeG,"boot","<type>");
EXT(YastYbinding_module_name,"ast","binding-module-name");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
EXT(YruntimeYpush,"runtime","push");
EXT(YastYset_module_environments,"ast","set-module-environments");
EXT(YastYmodule_name,"ast","module-name");
EXT(YastYbinding_dynamic_extentQ_setter,"ast","binding-dynamic-extent?-setter");
EXT(YastYbinding_inferred_type,"ast","binding-inferred-type");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YastYLregular_applicationG,"ast","<regular-application>");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
EXT(YruntimeYfill,"runtime","fill");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YprotoSsystemYprocess_id,"proto/system","process-id");
EXT(YruntimeYout,"runtime","out");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YastYassignment_form,"ast","assignment-form");
EXT(YruntimeYfrom,"runtime","from");
EXT(Yobject_parents,"boot","object-parents");
EXT(YLgenG,"boot","<gen>");
EXT(YastYenv_object_name,"ast","env-object-name");
EXT(YastYLstatic_global_environmentG,"ast","<static-global-environment>");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YreadYread_from_string,"read","read-from-string");
EXT(Yslot_init,"boot","slot-init");
EXT(YruntimeYlen_setter,"runtime","len-setter");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(YastYreference_frame_number,"ast","reference-frame-number");
EXT(YastYmodule_loader_module_type,"ast","module-loader-module-type");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(YprotoSsystemYos_binding_value,"proto/system","os-binding-value");
EXT(YastYLlocalsG,"ast","<locals>");
EXT(YastYfunction_value,"ast","function-value");
EXT(YastYfunction_free_setter,"ast","function-free-setter");
EXT(YprotoSsystemYobj_filename,"proto/system","obj-filename");
EXT(YastYsignature_bindings,"ast","signature-bindings");
EXT(YruntimeYzeroQ,"runtime","zero?");
EXT(YastYLalternativeG,"ast","<alternative>");
EXT(Yobject_slots,"boot","object-slots");
EXT(YastYinit_ast,"ast","init-ast");
EXT(YruntimeYaddress_of,"runtime","address-of");
EXT(YastYsignature_names,"ast","signature-names");
EXT(YruntimeYalter,"runtime","alter");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YLsymG,"boot","<sym>");
EXT(YastYbinding_info_setter,"ast","binding-info-setter");
EXT(YruntimeYGE,"runtime",">=");
EXT(YmacrosYelt,"macros","elt");
EXT(Yfind_setter,"boot","find-setter");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(YastYprogram_register_setter,"ast","program-register-setter");
EXT(YruntimeYLlistG,"runtime","<list>");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YprotoSsystemYTproto_extensionT,"proto/system","*proto-extension*");
EXT(YprotoSsystemYos_binding_value_setter,"proto/system","os-binding-value-setter");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YastYprogram_register,"ast","program-register");
EXT(YruntimeYnewline,"runtime","newline");
EXT(YastYLast_methodG,"ast","<ast-method>");
EXT(YastYbinding_type_setter,"ast","binding-type-setter");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(YastYobjectify,"ast","objectify");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YastYfunction_free,"ast","function-free");
EXT(YprotoSsystemYTproto_rootT,"proto/system","*proto-root*");
EXT(YastYbinding_info,"ast","binding-info");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
EXT(YruntimeYvec,"runtime","vec");
EXT(YprotoSsystemYlabel_components,"proto/system","label-components");
EXT(YastYreference_binding,"ast","reference-binding");
EXT(YastYLprogramsG,"ast","<programs>");
EXT(YLstrG,"boot","<str>");
EXT(YastYLbindingG,"ast","<binding>");
EXT(YastYcompile_time_program,"ast","compile-time-program");
EXT(YruntimeYstr,"runtime","str");
EXT(YastYfind_environment_module,"ast","find-environment-module");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YastYfunction_body,"ast","function-body");
EXT(YastYLraw_constantG,"ast","<raw-constant>");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YruntimeYread,"runtime","read");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YruntimeY1st,"runtime","1st");
EXT(YastYinit_environment_for_eval,"ast","init-environment-for-eval");
EXT(YastYmonitor_test,"ast","monitor-test");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(YruntimeYpos,"runtime","pos");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Yslot_value,"boot","slot-value");
EXT(YastYfunction_body_setter,"ast","function-body-setter");
EXT(YastYfunction_data_refs_setter,"ast","function-data-refs-setter");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YPdefine_method,"boot","%define-method");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(YruntimeYdo,"runtime","do");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YastYbinding_type,"ast","binding-type");
EXT(YastYLcomputed_programG,"ast","<computed-program>");
EXT(YastYLconstantG,"ast","<constant>");
EXT(YruntimeYround,"runtime","round");
EXT(YastYLfab_listG,"ast","<fab-list>");
EXT(YLvecG,"boot","<vec>");
EXT(YastYboundQ_reference,"ast","bound?-reference");
EXT(YastYenvironment_module,"ast","environment-module");
EXT(YastYunwind_protect_protected_thunk,"ast","unwind-protect-protected-thunk");
EXT(Yslot_owner,"boot","slot-owner");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(Yfun_names,"boot","fun-names");
EXT(YastYfix_let_bindings_setter,"ast","fix-let-bindings-setter");
EXT(YLmetG,"boot","<met>");
EXT(YastYLruntime_assignmentG,"ast","<runtime-assignment>");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YLnumG,"boot","<num>");
EXT(YprotoSsystemYcreate_directory,"proto/system","create-directory");
EXT(Yhead_setter,"boot","head-setter");
EXT(Yp2cYp2c_build_app,"p2c","p2c-build-app");
EXT(YruntimeYfab,"runtime","fab");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
EXT(Yp2cYp2c_top,"p2c","p2c-top");
EXT(Yfind_getter,"boot","find-getter");
EXT(YprotoSsystemYcomponents_parent_directory,"proto/system","components-parent-directory");
EXT(YprotoSsystemYfile_existsQ,"proto/system","file-exists?");
EXT(YLflatG,"boot","<flat>");
EXT(YruntimeYlist,"runtime","list");
EXT(YruntimeYmake_handler,"runtime","make-handler");
EXT(Yhead,"boot","head");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(YastYast_define_binding,"ast","ast-define-binding");
EXT(YprotoSsystemYc_filename,"proto/system","c-filename");
EXT(YastYLbind_exitG,"ast","<bind-exit>");
EXT(YastYsequentialize,"ast","sequentialize");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(YruntimeYevenQ,"runtime","even?");
EXT(YastYast_evaluate,"ast","ast-evaluate");
EXT(YastYLlocal_bindingG,"ast","<local-binding>");
EXT(YruntimeYfalse_or,"runtime","false-or");
EXT(YruntimeYbuf,"runtime","buf");
EXT(YruntimeYpick,"runtime","pick");
EXT(YastYload_module,"ast","load-module");
EXT(YastYLprogramG,"ast","<program>");
EXT(YtopYparse_in,"top","parse-in");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YastYLglobal_assignmentG,"ast","<global-assignment>");
EXT(YastYobjectify_signature,"ast","objectify-signature");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(YruntimeYdel_dups,"runtime","del-dups");
EXT(YruntimeYnegQ,"runtime","neg?");
EXT(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
EXT(YastYLpassive_programG,"ast","<passive-program>");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
EXT(YLfunG,"boot","<fun>");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YastYbinding_locative,"ast","binding-locative");
EXT(YruntimeYempty,"runtime","empty");
EXT(YastYLboundQG,"ast","<bound?>");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(YastYalternative_consequent,"ast","alternative-consequent");
EXT(YastYfree_environment,"ast","free-environment");
EXT(YLlstG,"boot","<lst>");
EXT(YruntimeYfrom_above,"runtime","from-above");
EXT(YruntimeYtL,"runtime","t<");
EXT(YastYmodule_exports,"ast","module-exports");
EXT(YastYsignature_value_setter,"ast","signature-value-setter");
EXT(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YtopYsave_image,"top","save-image");
EXT(YastYconstant_value,"ast","constant-value");
EXT(YLtupG,"boot","<tup>");
EXT(YruntimeYdo2,"runtime","do2");
EXT(YastYbinding_index,"ast","binding-index");
EXT(Ytail_setter,"boot","tail-setter");
EXT(YastYfix_let_body_setter,"ast","fix-let-body-setter");
EXT(Yslot_type,"boot","slot-type");
EXT(YastYapplication_arguments,"ast","application-arguments");
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(YastYfree_implemented_foreign_bindings,"ast","free-implemented-foreign-bindings");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YastYfunction_naryQ,"ast","function-nary?");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YLseqG,"boot","<seq>");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YastYLapplicationG,"ast","<application>");
EXT(YastYfunction_binding,"ast","function-binding");
EXT(YruntimeYA,"runtime","+");
EXT(YastYreference_called_functionQ,"ast","reference-called-function?");
EXT(Ytail,"boot","tail");
EXT(YastYfunction_data_refs,"ast","function-data-refs");
EXT(YmacrosYEE,"macros","==");
EXT(YastYmonitor_info,"ast","monitor-info");
EXT(YastYfunction_debug_name_setter,"ast","function-debug-name-setter");
EXT(YastYfix_let_types_setter,"ast","fix-let-types-setter");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YastYbinding_mutableQ,"ast","binding-mutable?");
EXT(YruntimeYmin,"runtime","min");
EXT(YastYfix_let_bindings,"ast","fix-let-bindings");
EXT(YruntimeYS,"runtime","/");
EXT(YastYfix_let_arguments_setter,"ast","fix-let-arguments-setter");
EXT(YastYinstall_initial_bindings,"ast","install-initial-bindings");
EXT(YruntimeYtE,"runtime","t=");
EXT(YruntimeYfab_map,"runtime","fab-map");
EXT(YruntimeYfrom_by,"runtime","from-by");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(Yclass_slots,"boot","class-slots");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(YruntimeYtruncate,"runtime","truncate");
EXT(YruntimeYLrangeG,"runtime","<range>");
EXT(YLcolG,"boot","<col>");
EXT(YprotoSsystemYfile_type,"proto/system","file-type");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(Yfab_class,"boot","fab-class");
EXT(YastYLimmediate_constantG,"ast","<immediate-constant>");
EXT(YruntimeYdel,"runtime","del");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YastYsignature_specs_setter,"ast","signature-specs-setter");
EXT(YastYLfix_letG,"ast","<fix-let>");
EXT(YastYmonitor_type,"ast","monitor-type");
EXT(YastYbinding_dottedQ_setter,"ast","binding-dotted?-setter");
EXT(YastYfix_let_body,"ast","fix-let-body");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
EXT(YastYsignature_arity,"ast","signature-arity");
EXT(YastYfix_let_arguments,"ast","fix-let-arguments");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
EXT(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
EXT(YruntimeYoddQ,"runtime","odd?");
EXT(Ynil,"boot","nil");
EXT(YLlocG,"boot","<loc>");
EXT(YPPmacro,"boot","%%macro");
EXT(YastYobjectify_quotation,"ast","objectify-quotation");
EXT(YastYLmodule_loaderG,"ast","<module-loader>");
EXT(YruntimeYtA,"runtime","t+");
EXT(YastYenvironment_uses_modules,"ast","environment-uses-modules");
EXT(YruntimeYsub,"runtime","sub");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(Ytype_elts,"boot","type-elts");
EXT(YisaQ,"boot","isa?");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YastYfix_let_types,"ast","fix-let-types");
EXT(YruntimeYneg,"runtime","neg");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YPisa,"boot","%isa");
EXT(YastYLcompile_timeG,"ast","<compile-time>");
EXT(YastYassignment_reference,"ast","assignment-reference");
EXT(YLfloG,"boot","<flo>");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(YruntimeYfind_key,"runtime","find-key");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_15);
DEFLIT(lit_7);
DEFLIT(lit_4);
DEFLIT(lit_9);
DEFLIT(lit_3);
DEFLIT(lit_1);
DEFLIT(lit_5);
DEFLIT(lit_13);
DEFLIT(lit_6);
DEFLIT(lit_17);
DEFLIT(lit_11);
DEFLIT(lit_8);
DEFLIT(lit_16);
DEFLIT(lit_10);
DEFLIT(lit_12);
DEFLIT(lit_14);
DEFLIT(lit_2);
DEFLIT(lit_0);

/* FUNCTIONS: */

extern P YmainY___main_0___ ();

/* FUNCTION CODES: */

P YmainY___main_0___() {
  P T3,T2,T1,T0;
loop:
  lit_0 = YPsb((P)"0.108");
  VARSET(YmainYTproto_versionT,LITREF(lit_0));
  lit_1 = YPsb((P)"OCT 29, 2001");
  VARSET(YmainYTproto_dateT,LITREF(lit_1));
  lit_2 = YPsb((P)";;; \n");
  CALL2(1,VARREF(YruntimeYformat),VARREF(YruntimeYout),LITREF(lit_2));
  lit_3 = YPsb((P)";;; PROTO\n");
  CALL2(1,VARREF(YruntimeYformat),VARREF(YruntimeYout),LITREF(lit_3));
  lit_4 = YPsb((P)";;; JONATHAN BACHRACH\n");
  CALL2(1,VARREF(YruntimeYformat),VARREF(YruntimeYout),LITREF(lit_4));
  lit_5 = YPsb((P)";;; MIT AI Lab\n");
  CALL2(1,VARREF(YruntimeYformat),VARREF(YruntimeYout),LITREF(lit_5));
  lit_6 = YPsb((P)";;; %s\n");
  CALL3(1,VARREF(YruntimeYformat),VARREF(YruntimeYout),LITREF(lit_6),VARREF(YmainYTproto_dateT));
  lit_7 = YPsb((P)";;; \n");
  CALL2(1,VARREF(YruntimeYformat),VARREF(YruntimeYout),LITREF(lit_7));
  lit_8 = YPsb((P)";;; VERSION = %s\n");
  CALL3(1,VARREF(YruntimeYformat),VARREF(YruntimeYout),LITREF(lit_8),VARREF(YmainYTproto_versionT));
  lit_9 = YPsb((P)";;; ROOT    = %s\n");
  CALL3(1,VARREF(YruntimeYformat),VARREF(YruntimeYout),LITREF(lit_9),VARREF(YprotoSsystemYTproto_rootT));
  lit_10 = YPsb((P)";;; \n");
  CALL2(1,VARREF(YruntimeYformat),VARREF(YruntimeYout),LITREF(lit_10));
  lit_11 = YPsb((P)";;; Loading Runtime Bindings...\n");
  CALL2(1,VARREF(YruntimeYformat),VARREF(YruntimeYout),LITREF(lit_11));
  CALL0(1,VARREF(YastYinit_ast));
  lit_12 = YPsb((P)";;; Loading System Patches...\n");
  CALL2(1,VARREF(YruntimeYformat),VARREF(YruntimeYout),LITREF(lit_12));
  lit_13 = YPsb((P)"system-patches.proto");
  lit_14 = YPPsym((P)"proto/user");
  T0 = CALL1(1,VARREF(YprotoSsystemYadd_src_path),LITREF(lit_13));
  CALL2(1,VARREF(YtopYload),T0,LITREF(lit_14));
  lit_15 = YPsb((P)";;; Loading User Patches...\n");
  CALL2(1,VARREF(YruntimeYformat),VARREF(YruntimeYout),LITREF(lit_15));
  lit_16 = YPsb((P)"user-patches.proto");
  T1 = CALL1(1,VARREF(YprotoSsystemYadd_src_path),LITREF(lit_16));
  CALL2(1,VARREF(YtopYload),T1,LITREF(lit_14));
  lit_17 = YPsb((P)";;; \n");
  CALL2(1,VARREF(YruntimeYformat),VARREF(YruntimeYout),LITREF(lit_17));
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
extern MODULE_INFO module_info_runtime;
extern MODULE_INFO module_info_write;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_syntax;
extern MODULE_INFO module_info_read;

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
  {"binding-kind", &module_info_ast, "binding-kind"},
  {"reduce+", &module_info_runtime, "reduce+"},
  {"load", &module_info_top, "load"},
  {"module-target-environment", &module_info_ast, "module-target-environment"},
  {"writeln", &module_info_write, "writeln"},
  {"map", &module_info_macros, "map"},
  {"swapf", &module_info_macros, "swapf"},
  {"nul", &module_info_boot, "nul"},
  {"curry", &module_info_runtime, "curry"},
  {"<ast-generic>", &module_info_ast, "<ast-generic>"},
  {"components-basename", &module_info_protoSsystem, "components-basename"},
  {"table-protocol", &module_info_runtime, "table-protocol"},
  {"in", &module_info_runtime, "in"},
  {"<free-environment>", &module_info_ast, "<free-environment>"},
  {"class-name", &module_info_boot, "class-name"},
  {"assocs-test", &module_info_runtime, "assocs-test"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"always", &module_info_runtime, "always"},
  {"*c-extension*", &module_info_protoSsystem, "*c-extension*"},
  {"select", &module_info_macros, "select"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"<assignment>", &module_info_ast, "<assignment>"},
  {"monitor-main-thunk", &module_info_ast, "monitor-main-thunk"},
  {"p2c-clean", &module_info_p2c, "p2c-clean"},
  {"to-digit", &module_info_runtime, "to-digit"},
  {"<int>", &module_info_boot, "<int>"},
  {"map2", &module_info_runtime, "map2"},
  {"function-source-setter", &module_info_ast, "function-source-setter"},
  {"global-box-value-setter", &module_info_ast, "global-box-value-setter"},
  {"3rd", &module_info_runtime, "3rd"},
  {"<local-reference>", &module_info_ast, "<local-reference>"},
  {"read-char", &module_info_runtime, "read-char"},
  {"<definition>", &module_info_ast, "<definition>"},
  {"<file-port>", &module_info_runtime, "<file-port>"},
  {"nxt-state", &module_info_runtime, "nxt-state"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"load-in", &module_info_ast, "load-in"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"global-box-value", &module_info_ast, "global-box-value"},
  {"<monitor>", &module_info_ast, "<monitor>"},
  {"loc", &module_info_boot, "loc"},
  {"signature-specs", &module_info_ast, "signature-specs"},
  {"alternative-condition", &module_info_ast, "alternative-condition"},
  {"signature-nary?", &module_info_ast, "signature-nary?"},
  {"function-signature-setter", &module_info_ast, "function-signature-setter"},
  {"ceiling/", &module_info_runtime, "ceiling/"},
  {"unwind-protect-cleanup-thunk", &module_info_ast, "unwind-protect-cleanup-thunk"},
  {"function-temporaries", &module_info_ast, "function-temporaries"},
  {"signature-value", &module_info_ast, "signature-value"},
  {"eof-object?", &module_info_runtime, "eof-object?"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"module-name-to-relpath", &module_info_ast, "module-name-to-relpath"},
  {"signature-names-setter", &module_info_ast, "signature-names-setter"},
  {"port-index", &module_info_runtime, "port-index"},
  {"os-name", &module_info_protoSsystem, "os-name"},
  {"now-key", &module_info_runtime, "now-key"},
  {"floor/", &module_info_runtime, "floor/"},
  {"function-debug-name", &module_info_ast, "function-debug-name"},
  {"write-to-string", &module_info_write, "write-to-string"},
  {"reduce", &module_info_runtime, "reduce"},
  {"%slot", &module_info_boot, "%slot"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"<global-reference>", &module_info_ast, "<global-reference>"},
  {"var-type", &module_info_macros, "var-type"},
  {"locals-functions-setter", &module_info_ast, "locals-functions-setter"},
  {"proto-filename", &module_info_protoSsystem, "proto-filename"},
  {"dg", &module_info_boot, "dg"},
  {"<ast-primitive-definition>", &module_info_ast, "<ast-primitive-definition>"},
  {"close-input-port", &module_info_runtime, "close-input-port"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"round/", &module_info_runtime, "round/"},
  {"num-to-str", &module_info_runtime, "num-to-str"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"now-elt", &module_info_runtime, "now-elt"},
  {"eval", &module_info_syntax, "eval"},
  {"<log>", &module_info_boot, "<log>"},
  {"locals-body", &module_info_ast, "locals-body"},
  {"flo-bits", &module_info_runtime, "flo-bits"},
  {"lsh", &module_info_runtime, "lsh"},
  {"ash", &module_info_runtime, "ash"},
  {"identity", &module_info_runtime, "identity"},
  {"p2c-def-app", &module_info_p2c, "p2c-def-app"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"*print-base*", &module_info_runtime, "*print-base*"},
  {"application-known?-setter", &module_info_ast, "application-known?-setter"},
  {"<file-input-port>", &module_info_runtime, "<file-input-port>"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"pair", &module_info_macros, "pair"},
  {"*obj-extension*", &module_info_protoSsystem, "*obj-extension*"},
  {"dv", &module_info_boot, "dv"},
  {"add-tmp-path", &module_info_protoSsystem, "add-tmp-path"},
  {"now-elt-setter", &module_info_runtime, "now-elt-setter"},
  {"<module>", &module_info_ast, "<module>"},
  {"not", &module_info_boot, "not"},
  {"components-to-pathname", &module_info_protoSsystem, "components-to-pathname"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"-", &module_info_runtime, "-"},
  {"file-mtime", &module_info_protoSsystem, "file-mtime"},
  {"add-src-path", &module_info_protoSsystem, "add-src-path"},
  {"application-binding", &module_info_ast, "application-binding"},
  {"abs", &module_info_runtime, "abs"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"to-str", &module_info_runtime, "to-str"},
  {"max", &module_info_runtime, "max"},
  {"application-tail?", &module_info_ast, "application-tail?"},
  {"<any>", &module_info_boot, "<any>"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"sub-setter", &module_info_runtime, "sub-setter"},
  {"assert", &module_info_macros, "assert"},
  {"*", &module_info_runtime, "*"},
  {"table-growth-threshold", &module_info_runtime, "table-growth-threshold"},
  {"backtrace", &module_info_top, "backtrace"},
  {"set", &module_info_boot, "set"},
  {"export", &module_info_boot, "export"},
  {"truncate/", &module_info_runtime, "truncate/"},
  {"type-class", &module_info_boot, "type-class"},
  {"binding-value-setter", &module_info_ast, "binding-value-setter"},
  {"fin-state?", &module_info_runtime, "fin-state?"},
  {"write", &module_info_write, "write"},
  {"<unwind-protect>", &module_info_ast, "<unwind-protect>"},
  {"<union>", &module_info_boot, "<union>"},
  {"constant-index-setter", &module_info_ast, "constant-index-setter"},
  {"lst", &module_info_boot, "lst"},
  {"read-file", &module_info_top, "read-file"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"default", &module_info_runtime, "default"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"cat", &module_info_macros, "cat"},
  {"binding-global-box", &module_info_ast, "binding-global-box"},
  {"constant-index", &module_info_ast, "constant-index"},
  {"<local-assignment>", &module_info_ast, "<local-assignment>"},
  {"assignment-form-setter", &module_info_ast, "assignment-form-setter"},
  {"probe-directory", &module_info_protoSsystem, "probe-directory"},
  {"signature-nary?-setter", &module_info_ast, "signature-nary?-setter"},
  {"binding-value", &module_info_ast, "binding-value"},
  {"isa", &module_info_boot, "isa"},
  {"ini-state", &module_info_runtime, "ini-state"},
  {"floor", &module_info_runtime, "floor"},
  {"<error>", &module_info_runtime, "<error>"},
  {"bind-exit-main-fun", &module_info_ast, "bind-exit-main-fun"},
  {"var-name", &module_info_macros, "var-name"},
  {"modulo", &module_info_runtime, "modulo"},
  {"fun", &module_info_boot, "fun"},
  {"locals-body-setter", &module_info_ast, "locals-body-setter"},
  {"collect", &module_info_macros, "collect"},
  {"monitor-handler", &module_info_ast, "monitor-handler"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"map-keyed", &module_info_runtime, "map-keyed"},
  {"components-last", &module_info_protoSsystem, "components-last"},
  {"last", &module_info_runtime, "last"},
  {"or", &module_info_macros, "or"},
  {"low-elt", &module_info_runtime, "low-elt"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"sexpr-signature-parameters", &module_info_syntax, "sexpr-signature-parameters"},
  {"p2c-eval", &module_info_top, "p2c-eval"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"<module-binding>", &module_info_ast, "<module-binding>"},
  {"dec", &module_info_macros, "dec"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"as-lst", &module_info_ast, "as-lst"},
  {"<ast-macro-definition>", &module_info_ast, "<ast-macro-definition>"},
  {"<=", &module_info_runtime, "<="},
  {"peek-char", &module_info_runtime, "peek-char"},
  {"push-last!", &module_info_runtime, "push-last!"},
  {"<arguments>", &module_info_ast, "<arguments>"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"<ast-signature>", &module_info_ast, "<ast-signature>"},
  {"format", &module_info_runtime, "format"},
  {"*exe-extension*", &module_info_protoSsystem, "*exe-extension*"},
  {"all2?", &module_info_runtime, "all2?"},
  {"function-signature", &module_info_ast, "function-signature"},
  {"do-keyed", &module_info_runtime, "do-keyed"},
  {"module-syntax-environment", &module_info_ast, "module-syntax-environment"},
  {"low-elt-setter", &module_info_runtime, "low-elt-setter"},
  {"report-undefined-global-bindings", &module_info_ast, "report-undefined-global-bindings"},
  {"seq", &module_info_boot, "seq"},
  {"runtime-environment", &module_info_ast, "runtime-environment"},
  {"%pair", &module_info_boot, "%pair"},
  {"mem?", &module_info_runtime, "mem?"},
  {"apply", &module_info_macros, "apply"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"remainder", &module_info_runtime, "remainder"},
  {"do-module-loader-modules", &module_info_ast, "do-module-loader-modules"},
  {"display", &module_info_write, "display"},
  {"assignment-binding", &module_info_ast, "assignment-binding"},
  {"*path-separator*", &module_info_protoSsystem, "*path-separator*"},
  {"application-function", &module_info_ast, "application-function"},
  {"top", &module_info_top, "top"},
  {"rep", &module_info_boot, "rep"},
  {"error", &module_info_boot, "error"},
  {"logior", &module_info_runtime, "logior"},
  {"rev", &module_info_runtime, "rev"},
  {"close-output-port", &module_info_runtime, "close-output-port"},
  {"function-self-recursive?-setter", &module_info_ast, "function-self-recursive?-setter"},
  {"<step>", &module_info_runtime, "<step>"},
  {"try", &module_info_boot, "try"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"<map>", &module_info_runtime, "<map>"},
  {"$proto-boot-module-name", &module_info_ast, "$proto-boot-module-name"},
  {"lowercase?", &module_info_runtime, "lowercase?"},
  {"pos?", &module_info_runtime, "pos?"},
  {"program-type-setter", &module_info_ast, "program-type-setter"},
  {"function-temporaries-setter", &module_info_ast, "function-temporaries-setter"},
  {">", &module_info_runtime, ">"},
  {"do-named-static-global-bindings", &module_info_ast, "do-named-static-global-bindings"},
  {"unless", &module_info_macros, "unless"},
  {"~=", &module_info_runtime, "~="},
  {"add-build-path", &module_info_protoSsystem, "add-build-path"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"remove-modules-by-name!", &module_info_ast, "remove-modules-by-name!"},
  {"do-static-global-bindings", &module_info_ast, "do-static-global-bindings"},
  {"quote", &module_info_boot, "quote"},
  {"pop-last!", &module_info_runtime, "pop-last!"},
  {"fab-p2c-module", &module_info_ast, "fab-p2c-module"},
  {"binding-name", &module_info_ast, "binding-name"},
  {"sig", &module_info_runtime, "sig"},
  {"<predefined-application>", &module_info_ast, "<predefined-application>"},
  {"reference-frame-offset", &module_info_ast, "reference-frame-offset"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"copy-state", &module_info_runtime, "copy-state"},
  {"exe-filename", &module_info_protoSsystem, "exe-filename"},
  {"function-registers-setter", &module_info_ast, "function-registers-setter"},
  {"function-source", &module_info_ast, "function-source"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"locals-functions", &module_info_ast, "locals-functions"},
  {"logxor", &module_info_runtime, "logxor"},
  {"signature-arity-setter", &module_info_ast, "signature-arity-setter"},
  {"module-binding", &module_info_ast, "module-binding"},
  {"p2c-exp", &module_info_p2c, "p2c-exp"},
  {"char-ready?", &module_info_runtime, "char-ready?"},
  {"signature-bindings-setter", &module_info_ast, "signature-bindings-setter"},
  {"cat2", &module_info_runtime, "cat2"},
  {"<", &module_info_runtime, "<"},
  {"pop", &module_info_runtime, "pop"},
  {"locals-bindings", &module_info_ast, "locals-bindings"},
  {"<string-port>", &module_info_runtime, "<string-port>"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"$proto-runtime-module-name", &module_info_ast, "$proto-runtime-module-name"},
  {"function-self-recursive?", &module_info_ast, "function-self-recursive?"},
  {"do-stack-frames", &module_info_top, "do-stack-frames"},
  {"<global-box>", &module_info_ast, "<global-box>"},
  {"find-binding", &module_info_ast, "find-binding"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"keys", &module_info_runtime, "keys"},
  {"logand", &module_info_runtime, "logand"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"pathname-to-components", &module_info_protoSsystem, "pathname-to-components"},
  {"cat!", &module_info_runtime, "cat!"},
  {"<module-binding-reference>", &module_info_ast, "<module-binding-reference>"},
  {"alternative-alternant", &module_info_ast, "alternative-alternant"},
  {"len", &module_info_runtime, "len"},
  {"function-index-setter", &module_info_ast, "function-index-setter"},
  {"napply", &module_info_macros, "napply"},
  {"and", &module_info_macros, "and"},
  {"reference-called-function?-setter", &module_info_ast, "reference-called-function?-setter"},
  {"=", &module_info_runtime, "="},
  {"program-type", &module_info_ast, "program-type"},
  {"tup", &module_info_macros, "tup"},
  {"parent-directory", &module_info_protoSsystem, "parent-directory"},
  {"add", &module_info_runtime, "add"},
  {"ceiling", &module_info_runtime, "ceiling"},
  {"<input-port>", &module_info_runtime, "<input-port>"},
  {"hierarchical-components", &module_info_protoSsystem, "hierarchical-components"},
  {"<reference>", &module_info_ast, "<reference>"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"add!", &module_info_runtime, "add!"},
  {"id-hash", &module_info_runtime, "id-hash"},
  {"p2c-ast", &module_info_p2c, "p2c-ast"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"lognot", &module_info_runtime, "lognot"},
  {"locals-bindings-setter", &module_info_ast, "locals-bindings-setter"},
  {"function-bindings", &module_info_ast, "function-bindings"},
  {"<ast-primitive>", &module_info_ast, "<ast-primitive>"},
  {"call-with-input-file", &module_info_runtime, "call-with-input-file"},
  {"gensym", &module_info_macros, "gensym"},
  {"any2?", &module_info_runtime, "any2?"},
  {"type-object", &module_info_boot, "type-object"},
  {"binding-global-box-setter", &module_info_ast, "binding-global-box-setter"},
  {"if", &module_info_boot, "if"},
  {"function-registers", &module_info_ast, "function-registers"},
  {"<class>", &module_info_boot, "<class>"},
  {"popf", &module_info_macros, "popf"},
  {"as", &module_info_runtime, "as"},
  {"current-gc-state", &module_info_runtime, "current-gc-state"},
  {"binding-inferred-type-setter", &module_info_ast, "binding-inferred-type-setter"},
  {"fin", &module_info_boot, "fin"},
  {"<runtime-reference>", &module_info_ast, "<runtime-reference>"},
  {"<ast-function>", &module_info_ast, "<ast-function>"},
  {"<bot>", &module_info_ast, "<bot>"},
  {"probe-module", &module_info_ast, "probe-module"},
  {"binding-dotted?", &module_info_ast, "binding-dotted?"},
  {"<sequential>", &module_info_ast, "<sequential>"},
  {"<real-reference>", &module_info_ast, "<real-reference>"},
  {"any?", &module_info_runtime, "any?"},
  {"application-known?", &module_info_ast, "application-known?"},
  {"function-index", &module_info_ast, "function-index"},
  {"binding-dynamic-extent?", &module_info_ast, "binding-dynamic-extent?"},
  {"binding-index-setter", &module_info_ast, "binding-index-setter"},
  {"binding-native-to?", &module_info_ast, "binding-native-to?"},
  {"<type>", &module_info_boot, "<type>"},
  {"binding-module-name", &module_info_ast, "binding-module-name"},
  {"df", &module_info_boot, "df"},
  {"<str-tab>", &module_info_runtime, "<str-tab>"},
  {"push", &module_info_runtime, "push"},
  {"set-module-environments", &module_info_ast, "set-module-environments"},
  {"module-name", &module_info_ast, "module-name"},
  {"binding-dynamic-extent?-setter", &module_info_ast, "binding-dynamic-extent?-setter"},
  {"binding-inferred-type", &module_info_ast, "binding-inferred-type"},
  {"compose", &module_info_runtime, "compose"},
  {"<regular-application>", &module_info_ast, "<regular-application>"},
  {"open-input-file", &module_info_runtime, "open-input-file"},
  {"fill", &module_info_runtime, "fill"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"process-id", &module_info_protoSsystem, "process-id"},
  {"out", &module_info_runtime, "out"},
  {"call-with-output-file", &module_info_runtime, "call-with-output-file"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"<buf>", &module_info_runtime, "<buf>"},
  {"assignment-form", &module_info_ast, "assignment-form"},
  {"from", &module_info_runtime, "from"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"dc", &module_info_boot, "dc"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"env-object-name", &module_info_ast, "env-object-name"},
  {"<static-global-environment>", &module_info_ast, "<static-global-environment>"},
  {"first-then", &module_info_runtime, "first-then"},
  {"read-from-string", &module_info_read, "read-from-string"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"len-setter", &module_info_runtime, "len-setter"},
  {"$permanent-hash-state", &module_info_runtime, "$permanent-hash-state"},
  {"reference-frame-number", &module_info_ast, "reference-frame-number"},
  {"module-loader-module-type", &module_info_ast, "module-loader-module-type"},
  {"uppercase?", &module_info_runtime, "uppercase?"},
  {"os-binding-value", &module_info_protoSsystem, "os-binding-value"},
  {"<locals>", &module_info_ast, "<locals>"},
  {"function-value", &module_info_ast, "function-value"},
  {"function-free-setter", &module_info_ast, "function-free-setter"},
  {"obj-filename", &module_info_protoSsystem, "obj-filename"},
  {"signature-bindings", &module_info_ast, "signature-bindings"},
  {"zero?", &module_info_runtime, "zero?"},
  {"<alternative>", &module_info_ast, "<alternative>"},
  {"pushf", &module_info_macros, "pushf"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"init-ast", &module_info_ast, "init-ast"},
  {"def-list", &module_info_ast, "def-list"},
  {"address-of", &module_info_runtime, "address-of"},
  {"signature-names", &module_info_ast, "signature-names"},
  {"alter", &module_info_runtime, "alter"},
  {"all?", &module_info_runtime, "all?"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"binding-info-setter", &module_info_ast, "binding-info-setter"},
  {">=", &module_info_runtime, ">="},
  {"def-programs", &module_info_ast, "def-programs"},
  {"elt", &module_info_macros, "elt"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"let", &module_info_boot, "let"},
  {"<port>", &module_info_runtime, "<port>"},
  {"program-register-setter", &module_info_ast, "program-register-setter"},
  {"<list>", &module_info_runtime, "<list>"},
  {"elt-setter", &module_info_runtime, "elt-setter"},
  {"*proto-extension*", &module_info_protoSsystem, "*proto-extension*"},
  {"os-binding-value-setter", &module_info_protoSsystem, "os-binding-value-setter"},
  {"alphabetic?", &module_info_runtime, "alphabetic?"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"program-register", &module_info_ast, "program-register"},
  {"newline", &module_info_runtime, "newline"},
  {"<ast-method>", &module_info_ast, "<ast-method>"},
  {"binding-type-setter", &module_info_ast, "binding-type-setter"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"objectify", &module_info_ast, "objectify"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"function-free", &module_info_ast, "function-free"},
  {"*proto-root*", &module_info_protoSsystem, "*proto-root*"},
  {"binding-info", &module_info_ast, "binding-info"},
  {"<string-output-port>", &module_info_runtime, "<string-output-port>"},
  {"vec", &module_info_runtime, "vec"},
  {"label-components", &module_info_protoSsystem, "label-components"},
  {"reference-binding", &module_info_ast, "reference-binding"},
  {"<programs>", &module_info_ast, "<programs>"},
  {"<str>", &module_info_boot, "<str>"},
  {"<binding>", &module_info_ast, "<binding>"},
  {"compile-time-program", &module_info_ast, "compile-time-program"},
  {"dlet", &module_info_macros, "dlet"},
  {"str", &module_info_runtime, "str"},
  {"find-environment-module", &module_info_ast, "find-environment-module"},
  {"app-args", &module_info_runtime, "app-args"},
  {"next-method", &module_info_macros, "next-method"},
  {"bound?", &module_info_boot, "bound?"},
  {"function-body", &module_info_ast, "function-body"},
  {"<raw-constant>", &module_info_ast, "<raw-constant>"},
  {"~==", &module_info_runtime, "~=="},
  {"read", &module_info_runtime, "read"},
  {"case-insensitive-string-equal", &module_info_runtime, "case-insensitive-string-equal"},
  {"rev!", &module_info_runtime, "rev!"},
  {"1st", &module_info_runtime, "1st"},
  {"init-environment-for-eval", &module_info_ast, "init-environment-for-eval"},
  {"monitor-test", &module_info_ast, "monitor-test"},
  {"write-string", &module_info_runtime, "write-string"},
  {"pos", &module_info_runtime, "pos"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"function-body-setter", &module_info_ast, "function-body-setter"},
  {"function-data-refs-setter", &module_info_ast, "function-data-refs-setter"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"force-output", &module_info_runtime, "force-output"},
  {"do", &module_info_runtime, "do"},
  {"case", &module_info_macros, "case"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"for", &module_info_macros, "for"},
  {"binding-type", &module_info_ast, "binding-type"},
  {"<computed-program>", &module_info_ast, "<computed-program>"},
  {"<constant>", &module_info_ast, "<constant>"},
  {"round", &module_info_runtime, "round"},
  {"<fab-list>", &module_info_ast, "<fab-list>"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"bound?-reference", &module_info_ast, "bound?-reference"},
  {"environment-module", &module_info_ast, "environment-module"},
  {"unwind-protect-protected-thunk", &module_info_ast, "unwind-protect-protected-thunk"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"<tab>", &module_info_runtime, "<tab>"},
  {"logbit?", &module_info_runtime, "logbit?"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"fix-let-bindings-setter", &module_info_ast, "fix-let-bindings-setter"},
  {"<met>", &module_info_boot, "<met>"},
  {"<runtime-assignment>", &module_info_ast, "<runtime-assignment>"},
  {"nul?", &module_info_runtime, "nul?"},
  {"<num>", &module_info_boot, "<num>"},
  {"create-directory", &module_info_protoSsystem, "create-directory"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"p2c-build-app", &module_info_p2c, "p2c-build-app"},
  {"fab", &module_info_runtime, "fab"},
  {"table-shrink-threshold", &module_info_runtime, "table-shrink-threshold"},
  {"p2c-top", &module_info_p2c, "p2c-top"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"components-parent-directory", &module_info_protoSsystem, "components-parent-directory"},
  {"file-exists?", &module_info_protoSsystem, "file-exists?"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"list", &module_info_runtime, "list"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"head", &module_info_boot, "head"},
  {"<output-port>", &module_info_runtime, "<output-port>"},
  {"ast-define-binding", &module_info_ast, "ast-define-binding"},
  {"collected", &module_info_macros, "collected"},
  {"c-filename", &module_info_protoSsystem, "c-filename"},
  {"<bind-exit>", &module_info_ast, "<bind-exit>"},
  {"sequentialize", &module_info_ast, "sequentialize"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"even?", &module_info_runtime, "even?"},
  {"ast-evaluate", &module_info_ast, "ast-evaluate"},
  {"<local-binding>", &module_info_ast, "<local-binding>"},
  {"use", &module_info_boot, "use"},
  {"false-or", &module_info_runtime, "false-or"},
  {"buf", &module_info_runtime, "buf"},
  {"pick", &module_info_runtime, "pick"},
  {"load-module", &module_info_ast, "load-module"},
  {"<program>", &module_info_ast, "<program>"},
  {"dm", &module_info_boot, "dm"},
  {"parse-in", &module_info_top, "parse-in"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"<global-assignment>", &module_info_ast, "<global-assignment>"},
  {"objectify-signature", &module_info_ast, "objectify-signature"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"port-contents", &module_info_runtime, "port-contents"},
  {"del-dups", &module_info_runtime, "del-dups"},
  {"neg?", &module_info_runtime, "neg?"},
  {"when", &module_info_macros, "when"},
  {"case-insensitive-string-hash", &module_info_runtime, "case-insensitive-string-hash"},
  {"<passive-program>", &module_info_ast, "<passive-program>"},
  {"as-lowercase", &module_info_runtime, "as-lowercase"},
  {"table-growth-factor", &module_info_runtime, "table-growth-factor"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"call-with-string-input-port", &module_info_runtime, "call-with-string-input-port"},
  {"binding-locative", &module_info_ast, "binding-locative"},
  {"empty", &module_info_runtime, "empty"},
  {"collecting", &module_info_macros, "collecting"},
  {"<bound?>", &module_info_ast, "<bound?>"},
  {"str-to-num", &module_info_runtime, "str-to-num"},
  {"alternative-consequent", &module_info_ast, "alternative-consequent"},
  {"free-environment", &module_info_ast, "free-environment"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"from-above", &module_info_runtime, "from-above"},
  {"t<", &module_info_runtime, "t<"},
  {"module-exports", &module_info_ast, "module-exports"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"signature-value-setter", &module_info_ast, "signature-value-setter"},
  {"<file-output-port>", &module_info_runtime, "<file-output-port>"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"numeric?", &module_info_runtime, "numeric?"},
  {"save-image", &module_info_top, "save-image"},
  {"constant-value", &module_info_ast, "constant-value"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"do2", &module_info_runtime, "do2"},
  {"binding-index", &module_info_ast, "binding-index"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"fix-let-body-setter", &module_info_ast, "fix-let-body-setter"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"slot", &module_info_boot, "slot"},
  {"application-arguments", &module_info_ast, "application-arguments"},
  {"from-above-by", &module_info_runtime, "from-above-by"},
  {"from-below", &module_info_runtime, "from-below"},
  {"free-implemented-foreign-bindings", &module_info_ast, "free-implemented-foreign-bindings"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"locative-value", &module_info_runtime, "locative-value"},
  {"function-nary?", &module_info_ast, "function-nary?"},
  {"call-with-string-output-port", &module_info_runtime, "call-with-string-output-port"},
  {"2nd", &module_info_runtime, "2nd"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"<application>", &module_info_ast, "<application>"},
  {"function-binding", &module_info_ast, "function-binding"},
  {"+", &module_info_runtime, "+"},
  {"reference-called-function?", &module_info_ast, "reference-called-function?"},
  {"ct", &module_info_boot, "ct"},
  {"tail", &module_info_boot, "tail"},
  {"function-data-refs", &module_info_ast, "function-data-refs"},
  {"==", &module_info_macros, "=="},
  {"monitor-info", &module_info_ast, "monitor-info"},
  {"function-debug-name-setter", &module_info_ast, "function-debug-name-setter"},
  {"fix-let-types-setter", &module_info_ast, "fix-let-types-setter"},
  {"write-char", &module_info_runtime, "write-char"},
  {"opf", &module_info_macros, "opf"},
  {"binding-mutable?", &module_info_ast, "binding-mutable?"},
  {"min", &module_info_runtime, "min"},
  {"fix-let-bindings", &module_info_ast, "fix-let-bindings"},
  {"/", &module_info_runtime, "/"},
  {"fix-let-arguments-setter", &module_info_ast, "fix-let-arguments-setter"},
  {"install-initial-bindings", &module_info_ast, "install-initial-bindings"},
  {"t=", &module_info_runtime, "t="},
  {"fab-map", &module_info_runtime, "fab-map"},
  {"from-by", &module_info_runtime, "from-by"},
  {"del-keys", &module_info_runtime, "del-keys"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"fabs", &module_info_runtime, "fabs"},
  {"truncate", &module_info_runtime, "truncate"},
  {"<range>", &module_info_runtime, "<range>"},
  {"<col>", &module_info_boot, "<col>"},
  {"file-type", &module_info_protoSsystem, "file-type"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"from-below-by", &module_info_runtime, "from-below-by"},
  {"from-to", &module_info_runtime, "from-to"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"<immediate-constant>", &module_info_ast, "<immediate-constant>"},
  {"del", &module_info_runtime, "del"},
  {"del-key", &module_info_runtime, "del-key"},
  {"lab", &module_info_boot, "lab"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"signature-specs-setter", &module_info_ast, "signature-specs-setter"},
  {"<fix-let>", &module_info_ast, "<fix-let>"},
  {"mif", &module_info_boot, "mif"},
  {"monitor-type", &module_info_ast, "monitor-type"},
  {"binding-dotted?-setter", &module_info_ast, "binding-dotted?-setter"},
  {"fix-let-body", &module_info_ast, "fix-let-body"},
  {"open-output-file", &module_info_runtime, "open-output-file"},
  {"signature-arity", &module_info_ast, "signature-arity"},
  {"fix-let-arguments", &module_info_ast, "fix-let-arguments"},
  {"from-to-by", &module_info_runtime, "from-to-by"},
  {"<string-input-port>", &module_info_runtime, "<string-input-port>"},
  {"odd?", &module_info_runtime, "odd?"},
  {"nil", &module_info_boot, "nil"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"objectify-quotation", &module_info_ast, "objectify-quotation"},
  {"<module-loader>", &module_info_ast, "<module-loader>"},
  {"t+", &module_info_runtime, "t+"},
  {"inc", &module_info_macros, "inc"},
  {"environment-uses-modules", &module_info_ast, "environment-uses-modules"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"sub", &module_info_runtime, "sub"},
  {"<assocs>", &module_info_runtime, "<assocs>"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"isa?", &module_info_boot, "isa?"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"fix-let-types", &module_info_ast, "fix-let-types"},
  {"neg", &module_info_runtime, "neg"},
  {"ds", &module_info_boot, "ds"},
  {"empty?", &module_info_macros, "empty?"},
  {"%isa", &module_info_boot, "%isa"},
  {"<compile-time>", &module_info_ast, "<compile-time>"},
  {"assignment-reference", &module_info_ast, "assignment-reference"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"as-uppercase", &module_info_runtime, "as-uppercase"},
  {"find-key", &module_info_runtime, "find-key"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"*proto-version*", &YmainYTproto_versionT},
  {"*proto-date*", &YmainYTproto_dateT},
  {"---main-0---", NULL},
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
