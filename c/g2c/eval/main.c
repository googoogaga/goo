/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: main */

EXT(YruntimeYoddQ,"runtime","odd?");
EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
EXT(Yslot_owner,"boot","slot-owner");
EXT(YastYbinding_name,"ast","binding-name");
EXT(YtopYload,"top","load");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YLlogG,"boot","<log>");
EXT(YLslotG,"boot","<slot>");
EXT(YastYLlocal_bindingG,"ast","<local-binding>");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YprotoSsystemYlabel_components,"proto/system","label-components");
EXT(YastYbinding_info_setter,"ast","binding-info-setter");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(YruntimeYpos,"runtime","pos");
EXT(YruntimeYneg,"runtime","neg");
EXT(YruntimeYmake_handler,"runtime","make-handler");
EXT(YastYmonitor_main_thunk,"ast","monitor-main-thunk");
EXT(YruntimeYpush,"runtime","push");
EXT(YastYfunction_signature,"ast","function-signature");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(YastYsignature_value_setter,"ast","signature-value-setter");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(YprotoSsystemYparent_directory,"proto/system","parent-directory");
EXT(YastYLlocalsG,"ast","<locals>");
EXT(Ynot,"boot","not");
EXT(Yslot_value,"boot","slot-value");
EXT(YLanyG,"boot","<any>");
EXT(YastYlocals_bindings,"ast","locals-bindings");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
EXT(YprotoSsystemYcomponents_to_pathname,"proto/system","components-to-pathname");
EXT(YastYreport_undefined_global_bindings,"ast","report-undefined-global-bindings");
EXT(YprotoSsystemYcomponents_parent_directory,"proto/system","components-parent-directory");
EXT(YLunionG,"boot","<union>");
EXT(YprotoSsystemYc_filename,"proto/system","c-filename");
EXT(YastYmodule_target_environment,"ast","module-target-environment");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(YastYbinding_global_box_setter,"ast","binding-global-box-setter");
EXT(YastYobjectify,"ast","objectify");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(YastYmodule_exports,"ast","module-exports");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
EXT(YastYfunction_body_setter,"ast","function-body-setter");
EXT(YruntimeYto_digit,"runtime","to-digit");
EXT(YastYenvironment_uses_modules,"ast","environment-uses-modules");
EXT(YastYsignature_specs,"ast","signature-specs");
EXT(YastYassignment_reference,"ast","assignment-reference");
EXT(YprotoSsystemYfile_mtime,"proto/system","file-mtime");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YprotoSsystemYpathname_to_components,"proto/system","pathname-to-components");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YastYfunction_value,"ast","function-value");
EXT(YastYlocals_functions_setter,"ast","locals-functions-setter");
EXT(YastYfunction_signature_setter,"ast","function-signature-setter");
EXT(YastYfunction_naryQ,"ast","function-nary?");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YwriteYwrite_to_string,"write","write-to-string");
EXT(YmacrosYcat,"macros","cat");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(YastYsignature_bindings,"ast","signature-bindings");
EXT(YreadYread_from_string,"read","read-from-string");
EXT(YtopYbacktrace,"top","backtrace");
EXT(YastYunwind_protect_protected_thunk,"ast","unwind-protect-protected-thunk");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YruntimeYbuf,"runtime","buf");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(Yslot_type,"boot","slot-type");
EXT(YruntimeYread,"runtime","read");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YruntimeYformat,"runtime","format");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(YastYalternative_condition,"ast","alternative-condition");
EXT(YastYLast_genericG,"ast","<ast-generic>");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YruntimeYlast,"runtime","last");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YruntimeYfloorS,"runtime","floor/");
EXT(YastYfind_environment_module,"ast","find-environment-module");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(Ytail,"boot","tail");
EXT(YastYlocals_bindings_setter,"ast","locals-bindings-setter");
EXT(YastYlocals_body,"ast","locals-body");
EXT(YruntimeYlsh,"runtime","lsh");
EXT(YastYLfix_letG,"ast","<fix-let>");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YastYLlocal_referenceG,"ast","<local-reference>");
EXT(YruntimeYash,"runtime","ash");
EXT(YastYapplication_knownQ,"ast","application-known?");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(YastYmonitor_test,"ast","monitor-test");
EXT(Yclass_slots,"boot","class-slots");
EXT(YruntimeYflo_bits,"runtime","flo-bits");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YruntimeYroundS,"runtime","round/");
EXT(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
EXT(YruntimeYrev,"runtime","rev");
EXT(YastYset_module_environments,"ast","set-module-environments");
EXT(YastYload_in,"ast","load-in");
EXT(YastYinit_ast,"ast","init-ast");
EXT(YastYLunwind_protectG,"ast","<unwind-protect>");
EXT(YruntimeYabs,"runtime","abs");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(YruntimeYdo2,"runtime","do2");
EXT(YastYdo_module_loader_modules,"ast","do-module-loader-modules");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(Ynil,"boot","nil");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(YruntimeYT,"runtime","*");
EXT(YastYLglobal_boxG,"ast","<global-box>");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(YastYreference_frame_offset,"ast","reference-frame-offset");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(YastYLcomputed_programG,"ast","<computed-program>");
EXT(YastYLreal_referenceG,"ast","<real-reference>");
EXT(YastYLfab_listG,"ast","<fab-list>");
EXT(YruntimeYLlistG,"runtime","<list>");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YruntimeYmax,"runtime","max");
EXT(Yp2cYp2c_top,"p2c","p2c-top");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(YtopYdo_stack_frames,"top","do-stack-frames");
EXT(Ytype_elts,"boot","type-elts");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YastYbinding_dynamic_extentQ_setter,"ast","binding-dynamic-extent?-setter");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
EXT(YPPmacro,"boot","%%macro");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YruntimeYdefault,"runtime","default");
EXT(YastYsignature_names,"ast","signature-names");
EXT(YruntimeYaddress_of,"runtime","address-of");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(YastYfunction_debug_name_setter,"ast","function-debug-name-setter");
EXT(YPdefine_method,"boot","%define-method");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YruntimeYfloor,"runtime","floor");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(YastYLmodule_loaderG,"ast","<module-loader>");
EXT(YastYfunction_body,"ast","function-body");
EXT(YruntimeYmodulo,"runtime","modulo");
EXT(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YprotoSsystemYTpath_separatorT,"proto/system","*path-separator*");
EXT(YLoptsG,"boot","<opts>");
EXT(YprotoSsystemYcomponents_basename,"proto/system","components-basename");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YastYfab_p2c_module,"ast","fab-p2c-module");
EXT(Yclass_name,"boot","class-name");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(YisaQ,"boot","isa?");
EXT(YastYLconstantG,"ast","<constant>");
EXT(YruntimeYempty,"runtime","empty");
EXT(YastYLmoduleG,"ast","<module>");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YruntimeYA,"runtime","+");
EXT(YLtypeG,"boot","<type>");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YLclassG,"boot","<class>");
EXT(YastYinstall_initial_bindings,"ast","install-initial-bindings");
EXT(YastYLsequentialG,"ast","<sequential>");
EXT(YruntimeYLrangeG,"runtime","<range>");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYfind_key,"runtime","find-key");
EXT(YastYreference_called_functionQ_setter,"ast","reference-called-function?-setter");
EXT(YruntimeYelt,"runtime","elt");
EXT(YruntimeYreduceA,"runtime","reduce+");
EXT(YruntimeYcurry,"runtime","curry");
EXT(YwriteYdisplay,"write","display");
EXT(YastYbinding_info,"ast","binding-info");
EXT(Yobject_parents,"boot","object-parents");
EXT(YsyntaxYeval,"syntax","eval");
EXT(YruntimeYLE,"runtime","<=");
EXT(YastYbinding_value_setter,"ast","binding-value-setter");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YruntimeYlogior,"runtime","logior");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
EXT(YastYDproto_runtime_module_name,"ast","$proto-runtime-module-name");
EXT(YruntimeYE,"runtime","=");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YprotoSsystemYhierarchical_components,"proto/system","hierarchical-components");
EXT(YastYLruntime_referenceG,"ast","<runtime-reference>");
EXT(YastYremove_modules_by_nameX,"ast","remove-modules-by-name!");
EXT(YruntimeYLfile_input_portG,"runtime","<file-input-port>");
EXT(YLsymG,"boot","<sym>");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YastYfunction_binding,"ast","function-binding");
EXT(YastYconstant_value,"ast","constant-value");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(YastYLast_primitive_definitionG,"ast","<ast-primitive-definition>");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
EXT(YmacrosYmap,"macros","map");
EXT(YastYbinding_dynamic_extentQ,"ast","binding-dynamic-extent?");
EXT(YastYLcompile_timeG,"ast","<compile-time>");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YruntimeYpop,"runtime","pop");
EXT(YastYbinding_type_setter,"ast","binding-type-setter");
EXT(YruntimeYmap2,"runtime","map2");
EXT(Yslot_setter,"boot","slot-setter");
DEF(YmainYTproto_versionT,"main","*proto-version*");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YastYbind_exit_main_fun,"ast","bind-exit-main-fun");
EXT(YruntimeYlogxor,"runtime","logxor");
EXT(YastYLast_macro_definitionG,"ast","<ast-macro-definition>");
EXT(YastYLruntime_assignmentG,"ast","<runtime-assignment>");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(YastYsignature_specs_setter,"ast","signature-specs-setter");
EXT(YastYLbindingG,"ast","<binding>");
EXT(YruntimeYNE,"runtime","~=");
EXT(YLgenG,"boot","<gen>");
EXT(YruntimeYcopy_state,"runtime","copy-state");
EXT(Yobject_slots,"boot","object-slots");
EXT(YastYLast_methodG,"ast","<ast-method>");
EXT(YastYLbind_exitG,"ast","<bind-exit>");
EXT(YastYsignature_naryQ,"ast","signature-nary?");
EXT(YruntimeYfrom,"runtime","from");
EXT(YLstrG,"boot","<str>");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YprotoSsystemYobj_filename,"proto/system","obj-filename");
EXT(YmacrosYEE,"macros","==");
EXT(YastYLdefinitionG,"ast","<definition>");
EXT(YtopYtop,"top","top");
EXT(YmacrosYtup,"macros","tup");
EXT(YastYreference_binding,"ast","reference-binding");
EXT(YruntimeYlogand,"runtime","logand");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YruntimeYfalse_or,"runtime","false-or");
EXT(Yfun_name,"boot","fun-name");
EXT(Yclass_parents,"boot","class-parents");
EXT(Yfind_setter,"boot","find-setter");
EXT(YprotoSsystemYTc_extensionT,"proto/system","*c-extension*");
EXT(YprotoSsystemYos_binding_value,"proto/system","os-binding-value");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(YastYprogram_register,"ast","program-register");
EXT(YprotoSsystemYprobe_directory,"proto/system","probe-directory");
EXT(YruntimeYreduce,"runtime","reduce");
EXT(YruntimeYstr,"runtime","str");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
EXT(YprotoSsystemYfile_existsQ,"proto/system","file-exists?");
EXT(YLvecG,"boot","<vec>");
EXT(Ytype_class,"boot","type-class");
EXT(YastYLregular_applicationG,"ast","<regular-application>");
EXT(YprotoSsystemYfile_type,"proto/system","file-type");
EXT(YprotoSsystemYproto_filename,"proto/system","proto-filename");
EXT(YruntimeYlognot,"runtime","lognot");
EXT(YastYmodule_name,"ast","module-name");
EXT(YastYbinding_kind,"ast","binding-kind");
EXT(Ylst,"boot","lst");
EXT(YruntimeY1st,"runtime","1st");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(YruntimeYas,"runtime","as");
EXT(YastYast_define_binding,"ast","ast-define-binding");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(Yp2cYp2c_def_app,"p2c","p2c-def-app");
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
EXT(YruntimeYalways,"runtime","always");
EXT(YruntimeYtL,"runtime","t<");
EXT(YastYapplication_knownQ_setter,"ast","application-known?-setter");
EXT(YruntimeYceiling,"runtime","ceiling");
EXT(YastYLboundQG,"ast","<bound?>");
EXT(YastYbinding_dottedQ_setter,"ast","binding-dotted?-setter");
EXT(YastYLpassive_programG,"ast","<passive-program>");
EXT(YLflatG,"boot","<flat>");
EXT(YLmetG,"boot","<met>");
EXT(YruntimeYout,"runtime","out");
EXT(Yfun_names,"boot","fun-names");
EXT(YruntimeYdo,"runtime","do");
EXT(YastYbinding_module_name,"ast","binding-module-name");
EXT(YruntimeYnewline,"runtime","newline");
EXT(YastYreference_frame_number,"ast","reference-frame-number");
EXT(YruntimeYfab,"runtime","fab");
EXT(YastYinit_environment_for_eval,"ast","init-environment-for-eval");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(YastYfree_implemented_foreign_bindings,"ast","free-implemented-foreign-bindings");
EXT(YastYapplication_binding,"ast","application-binding");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
EXT(YprotoSsystemYadd_src_path,"proto/system","add-src-path");
EXT(YastYapplication_arguments,"ast","application-arguments");
EXT(YastYLast_signatureG,"ast","<ast-signature>");
EXT(YastYLreferenceG,"ast","<reference>");
EXT(YruntimeYLstepG,"runtime","<step>");
EXT(YastYprogram_register_setter,"ast","program-register-setter");
EXT(YastYbinding_mutableQ,"ast","binding-mutable?");
EXT(YastYLraw_constantG,"ast","<raw-constant>");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(Yfind_getter,"boot","find-getter");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(YastYfix_let_bindings_setter,"ast","fix-let-bindings-setter");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(YastYfunction_bindings,"ast","function-bindings");
EXT(YruntimeYtE,"runtime","t=");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YastYdo_static_global_bindings,"ast","do-static-global-bindings");
EXT(YruntimeYzeroQ,"runtime","zero?");
EXT(YLlstG,"boot","<lst>");
EXT(YastYLglobal_referenceG,"ast","<global-reference>");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
EXT(YastYfix_let_arguments_setter,"ast","fix-let-arguments-setter");
EXT(Yfun_mets,"boot","fun-mets");
EXT(Yp2cYp2c_build_app,"p2c","p2c-build-app");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YastYlocals_body_setter,"ast","locals-body-setter");
EXT(YastYLstatic_global_environmentG,"ast","<static-global-environment>");
EXT(YLfunG,"boot","<fun>");
EXT(YruntimeYdel_dups,"runtime","del-dups");
EXT(YruntimeYpick,"runtime","pick");
EXT(YprotoSsystemYos_name,"proto/system","os-name");
EXT(YastYglobal_box_value_setter,"ast","global-box-value-setter");
EXT(YtopYparse_in,"top","parse-in");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
EXT(YastYmonitor_info,"ast","monitor-info");
EXT(YmacrosYpair,"macros","pair");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YastYlocals_functions,"ast","locals-functions");
EXT(YLseqG,"boot","<seq>");
EXT(YruntimeYGE,"runtime",">=");
EXT(YastYsequentialize,"ast","sequentialize");
EXT(YastYsignature_naryQ_setter,"ast","signature-nary?-setter");
EXT(YruntimeY_,"runtime","-");
EXT(YastYLprogramsG,"ast","<programs>");
EXT(YastYprobe_module,"ast","probe-module");
EXT(YruntimeYtA,"runtime","t+");
EXT(YastYLapplicationG,"ast","<application>");
EXT(YastYfix_let_types,"ast","fix-let-types");
EXT(YruntimeYnow_elt,"runtime","now-elt");
EXT(YastYbinding_native_toQ,"ast","binding-native-to?");
EXT(YastYbinding_value,"ast","binding-value");
EXT(YastYcompile_time_program,"ast","compile-time-program");
EXT(YastYbinding_dottedQ,"ast","binding-dotted?");
EXT(YruntimeYread_char,"runtime","read-char");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YruntimeYmemQ,"runtime","mem?");
EXT(YastYmonitor_handler,"ast","monitor-handler");
EXT(Yp2cYp2c_clean,"p2c","p2c-clean");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
EXT(YastYbinding_type,"ast","binding-type");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YruntimeYG,"runtime",">");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YLcolG,"boot","<col>");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YastYmodule_name_to_relpath,"ast","module-name-to-relpath");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YruntimeYround,"runtime","round");
EXT(YruntimeYfrom_by,"runtime","from-by");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
EXT(YprotoSsystemYTproto_extensionT,"proto/system","*proto-extension*");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YastYbinding_locative,"ast","binding-locative");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
EXT(YastYLprogramG,"ast","<program>");
EXT(Ynul,"boot","nul");
EXT(YastYLalternativeG,"ast","<alternative>");
EXT(YruntimeYL,"runtime","<");
EXT(YLlocG,"boot","<loc>");
EXT(Yfab_class,"boot","fab-class");
EXT(YwriteYwrite,"write","write");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YastYfix_let_bindings,"ast","fix-let-bindings");
EXT(YwriteYwriteln,"write","writeln");
EXT(YruntimeYdel,"runtime","del");
EXT(YastYmodule_binding,"ast","module-binding");
EXT(YruntimeYevenQ,"runtime","even?");
EXT(YruntimeYlist,"runtime","list");
EXT(Ytype_object,"boot","type-object");
EXT(YastYalternative_alternant,"ast","alternative-alternant");
DEF(YmainYTproto_dateT,"main","*proto-date*");
EXT(YastYruntime_environment,"ast","runtime-environment");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(YastYsignature_value,"ast","signature-value");
EXT(YastYdo_named_static_global_bindings,"ast","do-named-static-global-bindings");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(YastYDproto_boot_module_name,"ast","$proto-boot-module-name");
EXT(YprotoSsystemYexe_filename,"proto/system","exe-filename");
EXT(YastYfix_let_arguments,"ast","fix-let-arguments");
EXT(YastYglobal_box_value,"ast","global-box-value");
EXT(YPisa,"boot","%isa");
EXT(YastYalternative_consequent,"ast","alternative-consequent");
EXT(YLfloG,"boot","<flo>");
EXT(YruntimeYfrom_above,"runtime","from-above");
EXT(YprotoSsystemYadd_build_path,"proto/system","add-build-path");
EXT(YastYfix_let_body,"ast","fix-let-body");
EXT(YLtupG,"boot","<tup>");
EXT(YastYfunction_debug_name,"ast","function-debug-name");
EXT(YastYsignature_bindings_setter,"ast","signature-bindings-setter");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(Yerror,"boot","error");
EXT(Yhead,"boot","head");
EXT(YprotoSsystemYcreate_directory,"proto/system","create-directory");
EXT(YruntimeYnegQ,"runtime","neg?");
EXT(YastYreference_called_functionQ,"ast","reference-called-function?");
EXT(YastYunwind_protect_cleanup_thunk,"ast","unwind-protect-cleanup-thunk");
EXT(YruntimeYlen,"runtime","len");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(YastYmonitor_type,"ast","monitor-type");
EXT(YastYLargumentsG,"ast","<arguments>");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(YastYapplication_function,"ast","application-function");
EXT(YruntimeYclose_output_port,"runtime","close-output-port");
EXT(YprotoSsystemYcomponents_last,"proto/system","components-last");
EXT(YastYfix_let_types_setter,"ast","fix-let-types-setter");
EXT(YruntimeYsub,"runtime","sub");
EXT(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
EXT(Yslot_init,"boot","slot-init");
EXT(YastYLast_functionG,"ast","<ast-function>");
EXT(YLintG,"boot","<int>");
EXT(YastYLglobal_assignmentG,"ast","<global-assignment>");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YruntimeYsig,"runtime","sig");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YastYLpredefined_applicationG,"ast","<predefined-application>");
EXT(YruntimeYin,"runtime","in");
EXT(YastYLlocal_assignmentG,"ast","<local-assignment>");
EXT(YastYassignment_binding,"ast","assignment-binding");
EXT(YprotoSsystemYTproto_rootT,"proto/system","*proto-root*");
EXT(YprotoSsystemYTobj_extensionT,"proto/system","*obj-extension*");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YastYLmonitorG,"ast","<monitor>");
EXT(YprotoSsystemYTexe_extensionT,"proto/system","*exe-extension*");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(YLnumG,"boot","<num>");
EXT(YastYsignature_names_setter,"ast","signature-names-setter");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(YruntimeYTprint_baseT,"runtime","*print-base*");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
EXT(YruntimeYfill,"runtime","fill");
EXT(Yfun_value,"boot","fun-value");
EXT(YastYassignment_form,"ast","assignment-form");
EXT(YastYboundQ_reference,"ast","bound?-reference");
EXT(YprotoSsystemYos_binding_value_setter,"proto/system","os-binding-value-setter");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
EXT(YastYmodule_syntax_environment,"ast","module-syntax-environment");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YastYLmodule_bindingG,"ast","<module-binding>");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YruntimeYS,"runtime","/");
EXT(YastYLast_primitiveG,"ast","<ast-primitive>");
EXT(YruntimeYid_hash,"runtime","id-hash");
EXT(YastYmodule_loader_module_type,"ast","module-loader-module-type");
EXT(YruntimeYalter,"runtime","alter");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YLchrG,"boot","<chr>");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YruntimeYtruncate,"runtime","truncate");
EXT(YastYenv_object_name,"ast","env-object-name");
EXT(YtopYread_file,"top","read-file");
EXT(YruntimeYmin,"runtime","min");
EXT(YastYbinding_global_box,"ast","binding-global-box");
EXT(Yadd_slot,"boot","add-slot");
EXT(YastYast_evaluate,"ast","ast-evaluate");
EXT(YastYload_module,"ast","load-module");
EXT(YastYobjectify_quotation,"ast","objectify-quotation");
EXT(YruntimeYvec,"runtime","vec");
EXT(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
EXT(YastYfix_let_body_setter,"ast","fix-let-body-setter");
EXT(YastYapplication_tailQ,"ast","application-tail?");
EXT(YruntimeYcondition_message,"runtime","condition-message");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_13);
DEFLIT(lit_12);
DEFLIT(lit_15);
DEFLIT(lit_8);
DEFLIT(lit_16);
DEFLIT(lit_9);
DEFLIT(lit_7);
DEFLIT(lit_6);
DEFLIT(lit_2);
DEFLIT(lit_17);
DEFLIT(lit_4);
DEFLIT(lit_11);
DEFLIT(lit_10);
DEFLIT(lit_1);
DEFLIT(lit_0);
DEFLIT(lit_5);
DEFLIT(lit_14);
DEFLIT(lit_3);

/* FUNCTIONS: */

extern P YmainY___main_0___ ();

/* FUNCTION CODES: */

P YmainY___main_0___() {
  P T3,T2,T1,T0;
loop:
  lit_0 = YPsb((P)"0.103");
  YmainYTproto_versionT = CHKREF(lit_0);
  lit_1 = YPsb((P)"SEP 25, 2001");
  YmainYTproto_dateT = CHKREF(lit_1);
  lit_2 = YPsb((P)";;; \n");
  CALL2(1,CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_2));
  lit_3 = YPsb((P)";;; PROTO\n");
  CALL2(1,CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_3));
  lit_4 = YPsb((P)";;; JONATHAN BACHRACH\n");
  CALL2(1,CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_4));
  lit_5 = YPsb((P)";;; MIT AI Lab\n");
  CALL2(1,CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_5));
  lit_6 = YPsb((P)";;; %s\n");
  CALL3(1,CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_6),CHKREF(YmainYTproto_dateT));
  lit_7 = YPsb((P)";;; \n");
  CALL2(1,CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_7));
  lit_8 = YPsb((P)";;; VERSION = %s\n");
  CALL3(1,CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_8),CHKREF(YmainYTproto_versionT));
  lit_9 = YPsb((P)";;; ROOT    = %s\n");
  CALL3(1,CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_9),CHKREF(YprotoSsystemYTproto_rootT));
  lit_10 = YPsb((P)";;; \n");
  CALL2(1,CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_10));
  lit_11 = YPsb((P)";;; Loading Runtime Bindings...\n");
  CALL2(1,CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_11));
  CALL0(1,CHKREF(YastYinit_ast));
  lit_12 = YPsb((P)";;; Loading System Patches...\n");
  CALL2(1,CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_12));
  lit_13 = YPsb((P)"system-patches.proto");
  lit_14 = YPPsym((P)"proto/user");
  T0 = CALL1(1,CHKREF(YprotoSsystemYadd_src_path),CHKREF(lit_13));
  CALL2(1,CHKREF(YtopYload),T0,CHKREF(lit_14));
  lit_15 = YPsb((P)";;; Loading User Patches...\n");
  CALL2(1,CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_15));
  lit_16 = YPsb((P)"user-patches.proto");
  T1 = CALL1(1,CHKREF(YprotoSsystemYadd_src_path),CHKREF(lit_16));
  CALL2(1,CHKREF(YtopYload),T1,CHKREF(lit_14));
  lit_17 = YPsb((P)";;; \n");
  CALL2(1,CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_17));
  T3 = CALL1(1,CHKREF(YtopYtop),CHKREF(lit_14));
  T2 = T3;
  return T2;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_proto;
extern MODULE_INFO module_info_protoSeval;
extern MODULE_INFO module_info_ast;
extern MODULE_INFO module_info_top;
extern MODULE_INFO module_info_p2c;
extern MODULE_INFO module_info_protoSsystem;
extern MODULE_INFO module_info_protoSuser;
extern MODULE_INFO module_info_runtime;
extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_write;
extern MODULE_INFO module_info_read;
extern MODULE_INFO module_info_syntax;

static USE_INFO use_infos[] = {
  {&module_info_proto},
  {&module_info_protoSeval},
  {&module_info_ast},
  {&module_info_top},
  {&module_info_p2c},
  {&module_info_protoSsystem},
  {&module_info_protoSuser},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"odd?", &module_info_runtime, "odd?"},
  {"current-gc-state", &module_info_runtime, "current-gc-state"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"binding-name", &module_info_ast, "binding-name"},
  {"load", &module_info_top, "load"},
  {"and", &module_info_macros, "and"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"<log>", &module_info_boot, "<log>"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"<local-binding>", &module_info_ast, "<local-binding>"},
  {"call-with-string-input-port", &module_info_runtime, "call-with-string-input-port"},
  {"label-components", &module_info_protoSsystem, "label-components"},
  {"binding-info-setter", &module_info_ast, "binding-info-setter"},
  {"fabs", &module_info_runtime, "fabs"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"ct", &module_info_boot, "ct"},
  {"pos", &module_info_runtime, "pos"},
  {"neg", &module_info_runtime, "neg"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"monitor-main-thunk", &module_info_ast, "monitor-main-thunk"},
  {"push", &module_info_runtime, "push"},
  {"function-signature", &module_info_ast, "function-signature"},
  {"as-uppercase", &module_info_runtime, "as-uppercase"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"from-below", &module_info_runtime, "from-below"},
  {"signature-value-setter", &module_info_ast, "signature-value-setter"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"close-input-port", &module_info_runtime, "close-input-port"},
  {"parent-directory", &module_info_protoSsystem, "parent-directory"},
  {"<locals>", &module_info_ast, "<locals>"},
  {"not", &module_info_boot, "not"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"<any>", &module_info_boot, "<any>"},
  {"locals-bindings", &module_info_ast, "locals-bindings"},
  {"from-below-by", &module_info_runtime, "from-below-by"},
  {"components-to-pathname", &module_info_protoSsystem, "components-to-pathname"},
  {"report-undefined-global-bindings", &module_info_ast, "report-undefined-global-bindings"},
  {"components-parent-directory", &module_info_protoSsystem, "components-parent-directory"},
  {"<union>", &module_info_boot, "<union>"},
  {"c-filename", &module_info_protoSsystem, "c-filename"},
  {"module-target-environment", &module_info_ast, "module-target-environment"},
  {"write-string", &module_info_runtime, "write-string"},
  {"let", &module_info_boot, "let"},
  {"binding-global-box-setter", &module_info_ast, "binding-global-box-setter"},
  {"pushf", &module_info_macros, "pushf"},
  {"objectify", &module_info_ast, "objectify"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"case-insensitive-string-equal", &module_info_runtime, "case-insensitive-string-equal"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"pop-last!", &module_info_runtime, "pop-last!"},
  {"fin-state?", &module_info_runtime, "fin-state?"},
  {"module-exports", &module_info_ast, "module-exports"},
  {"sub-setter", &module_info_runtime, "sub-setter"},
  {"function-body-setter", &module_info_ast, "function-body-setter"},
  {"loc", &module_info_boot, "loc"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"to-digit", &module_info_runtime, "to-digit"},
  {"environment-uses-modules", &module_info_ast, "environment-uses-modules"},
  {"signature-specs", &module_info_ast, "signature-specs"},
  {"assignment-reference", &module_info_ast, "assignment-reference"},
  {"file-mtime", &module_info_protoSsystem, "file-mtime"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"pathname-to-components", &module_info_protoSsystem, "pathname-to-components"},
  {"<file-port>", &module_info_runtime, "<file-port>"},
  {"function-value", &module_info_ast, "function-value"},
  {"locals-functions-setter", &module_info_ast, "locals-functions-setter"},
  {"function-signature-setter", &module_info_ast, "function-signature-setter"},
  {"function-nary?", &module_info_ast, "function-nary?"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"write-to-string", &module_info_write, "write-to-string"},
  {"cat", &module_info_macros, "cat"},
  {"<input-port>", &module_info_runtime, "<input-port>"},
  {"dg", &module_info_boot, "dg"},
  {"signature-bindings", &module_info_ast, "signature-bindings"},
  {"next-method", &module_info_macros, "next-method"},
  {"read-from-string", &module_info_read, "read-from-string"},
  {"backtrace", &module_info_top, "backtrace"},
  {"unwind-protect-protected-thunk", &module_info_ast, "unwind-protect-protected-thunk"},
  {"fun", &module_info_boot, "fun"},
  {"empty?", &module_info_macros, "empty?"},
  {"buf", &module_info_runtime, "buf"},
  {"port-index", &module_info_runtime, "port-index"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"read", &module_info_runtime, "read"},
  {"ceiling/", &module_info_runtime, "ceiling/"},
  {"format", &module_info_runtime, "format"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"alternative-condition", &module_info_ast, "alternative-condition"},
  {"<ast-generic>", &module_info_ast, "<ast-generic>"},
  {"rev!", &module_info_runtime, "rev!"},
  {"last", &module_info_runtime, "last"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"floor/", &module_info_runtime, "floor/"},
  {"find-environment-module", &module_info_ast, "find-environment-module"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"tail", &module_info_boot, "tail"},
  {"locals-bindings-setter", &module_info_ast, "locals-bindings-setter"},
  {"locals-body", &module_info_ast, "locals-body"},
  {"lsh", &module_info_runtime, "lsh"},
  {"<fix-let>", &module_info_ast, "<fix-let>"},
  {"gensym", &module_info_macros, "gensym"},
  {"<local-reference>", &module_info_ast, "<local-reference>"},
  {"ash", &module_info_runtime, "ash"},
  {"application-known?", &module_info_ast, "application-known?"},
  {"num-to-str", &module_info_runtime, "num-to-str"},
  {"monitor-test", &module_info_ast, "monitor-test"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"flo-bits", &module_info_runtime, "flo-bits"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"round/", &module_info_runtime, "round/"},
  {"case-insensitive-string-hash", &module_info_runtime, "case-insensitive-string-hash"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"<string-output-port>", &module_info_runtime, "<string-output-port>"},
  {"rev", &module_info_runtime, "rev"},
  {"set-module-environments", &module_info_ast, "set-module-environments"},
  {"use", &module_info_boot, "use"},
  {"load-in", &module_info_ast, "load-in"},
  {"init-ast", &module_info_ast, "init-ast"},
  {"<unwind-protect>", &module_info_ast, "<unwind-protect>"},
  {"abs", &module_info_runtime, "abs"},
  {"bound?", &module_info_boot, "bound?"},
  {"<port>", &module_info_runtime, "<port>"},
  {"for", &module_info_macros, "for"},
  {"do2", &module_info_runtime, "do2"},
  {"do-module-loader-modules", &module_info_ast, "do-module-loader-modules"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"nil", &module_info_boot, "nil"},
  {"push-last!", &module_info_runtime, "push-last!"},
  {"*", &module_info_runtime, "*"},
  {"<global-box>", &module_info_ast, "<global-box>"},
  {"<output-port>", &module_info_runtime, "<output-port>"},
  {"reference-frame-offset", &module_info_ast, "reference-frame-offset"},
  {"truncate/", &module_info_runtime, "truncate/"},
  {"<computed-program>", &module_info_ast, "<computed-program>"},
  {"<real-reference>", &module_info_ast, "<real-reference>"},
  {"<fab-list>", &module_info_ast, "<fab-list>"},
  {"case", &module_info_macros, "case"},
  {"<list>", &module_info_runtime, "<list>"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"max", &module_info_runtime, "max"},
  {"p2c-top", &module_info_p2c, "p2c-top"},
  {"<error>", &module_info_runtime, "<error>"},
  {"do-stack-frames", &module_info_top, "do-stack-frames"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"compose", &module_info_runtime, "compose"},
  {"binding-dynamic-extent?-setter", &module_info_ast, "binding-dynamic-extent?-setter"},
  {"export", &module_info_boot, "export"},
  {"open-output-file", &module_info_runtime, "open-output-file"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"app-args", &module_info_runtime, "app-args"},
  {"write-char", &module_info_runtime, "write-char"},
  {"default", &module_info_runtime, "default"},
  {"signature-names", &module_info_ast, "signature-names"},
  {"address-of", &module_info_runtime, "address-of"},
  {"port-contents", &module_info_runtime, "port-contents"},
  {"function-debug-name-setter", &module_info_ast, "function-debug-name-setter"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"call-with-output-file", &module_info_runtime, "call-with-output-file"},
  {"floor", &module_info_runtime, "floor"},
  {"cat2", &module_info_runtime, "cat2"},
  {"<module-loader>", &module_info_ast, "<module-loader>"},
  {"function-body", &module_info_ast, "function-body"},
  {"modulo", &module_info_runtime, "modulo"},
  {"collecting", &module_info_macros, "collecting"},
  {"<string-input-port>", &module_info_runtime, "<string-input-port>"},
  {"cat!", &module_info_runtime, "cat!"},
  {"*path-separator*", &module_info_protoSsystem, "*path-separator*"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"components-basename", &module_info_protoSsystem, "components-basename"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"fab-p2c-module", &module_info_ast, "fab-p2c-module"},
  {"class-name", &module_info_boot, "class-name"},
  {"when", &module_info_macros, "when"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"<assocs>", &module_info_runtime, "<assocs>"},
  {"isa?", &module_info_boot, "isa?"},
  {"<constant>", &module_info_ast, "<constant>"},
  {"empty", &module_info_runtime, "empty"},
  {"<module>", &module_info_ast, "<module>"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"+", &module_info_runtime, "+"},
  {"<type>", &module_info_boot, "<type>"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"<class>", &module_info_boot, "<class>"},
  {"install-initial-bindings", &module_info_ast, "install-initial-bindings"},
  {"<sequential>", &module_info_ast, "<sequential>"},
  {"<range>", &module_info_runtime, "<range>"},
  {"remainder", &module_info_runtime, "remainder"},
  {"add", &module_info_runtime, "add"},
  {"find-key", &module_info_runtime, "find-key"},
  {"reference-called-function?-setter", &module_info_ast, "reference-called-function?-setter"},
  {"elt", &module_info_runtime, "elt"},
  {"reduce+", &module_info_runtime, "reduce+"},
  {"curry", &module_info_runtime, "curry"},
  {"display", &module_info_write, "display"},
  {"binding-info", &module_info_ast, "binding-info"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"eval", &module_info_syntax, "eval"},
  {"<=", &module_info_runtime, "<="},
  {"binding-value-setter", &module_info_ast, "binding-value-setter"},
  {"elt-setter", &module_info_runtime, "elt-setter"},
  {"logior", &module_info_runtime, "logior"},
  {"lowercase?", &module_info_runtime, "lowercase?"},
  {"%pair", &module_info_boot, "%pair"},
  {"$proto-runtime-module-name", &module_info_ast, "$proto-runtime-module-name"},
  {"=", &module_info_runtime, "="},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"nul?", &module_info_runtime, "nul?"},
  {"hierarchical-components", &module_info_protoSsystem, "hierarchical-components"},
  {"<runtime-reference>", &module_info_ast, "<runtime-reference>"},
  {"remove-modules-by-name!", &module_info_ast, "remove-modules-by-name!"},
  {"<file-input-port>", &module_info_runtime, "<file-input-port>"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"<tab>", &module_info_runtime, "<tab>"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"function-binding", &module_info_ast, "function-binding"},
  {"constant-value", &module_info_ast, "constant-value"},
  {"assocs-test", &module_info_runtime, "assocs-test"},
  {"<ast-primitive-definition>", &module_info_ast, "<ast-primitive-definition>"},
  {"from-to-by", &module_info_runtime, "from-to-by"},
  {"map", &module_info_macros, "map"},
  {"binding-dynamic-extent?", &module_info_ast, "binding-dynamic-extent?"},
  {"<compile-time>", &module_info_ast, "<compile-time>"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"pop", &module_info_runtime, "pop"},
  {"binding-type-setter", &module_info_ast, "binding-type-setter"},
  {"map2", &module_info_runtime, "map2"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"pos?", &module_info_runtime, "pos?"},
  {"bind-exit-main-fun", &module_info_ast, "bind-exit-main-fun"},
  {"logxor", &module_info_runtime, "logxor"},
  {"<ast-macro-definition>", &module_info_ast, "<ast-macro-definition>"},
  {"<runtime-assignment>", &module_info_ast, "<runtime-assignment>"},
  {"from-to", &module_info_runtime, "from-to"},
  {"signature-specs-setter", &module_info_ast, "signature-specs-setter"},
  {"inc", &module_info_macros, "inc"},
  {"<binding>", &module_info_ast, "<binding>"},
  {"~=", &module_info_runtime, "~="},
  {"<gen>", &module_info_boot, "<gen>"},
  {"copy-state", &module_info_runtime, "copy-state"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"<ast-method>", &module_info_ast, "<ast-method>"},
  {"<bind-exit>", &module_info_ast, "<bind-exit>"},
  {"signature-nary?", &module_info_ast, "signature-nary?"},
  {"from", &module_info_runtime, "from"},
  {"<str>", &module_info_boot, "<str>"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"obj-filename", &module_info_protoSsystem, "obj-filename"},
  {"==", &module_info_macros, "=="},
  {"<definition>", &module_info_ast, "<definition>"},
  {"dc", &module_info_boot, "dc"},
  {"top", &module_info_top, "top"},
  {"tup", &module_info_macros, "tup"},
  {"reference-binding", &module_info_ast, "reference-binding"},
  {"logand", &module_info_runtime, "logand"},
  {"locative-value", &module_info_runtime, "locative-value"},
  {"false-or", &module_info_runtime, "false-or"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"*c-extension*", &module_info_protoSsystem, "*c-extension*"},
  {"os-binding-value", &module_info_protoSsystem, "os-binding-value"},
  {"del-keys", &module_info_runtime, "del-keys"},
  {"program-register", &module_info_ast, "program-register"},
  {"probe-directory", &module_info_protoSsystem, "probe-directory"},
  {"reduce", &module_info_runtime, "reduce"},
  {"str", &module_info_runtime, "str"},
  {"table-shrink-threshold", &module_info_runtime, "table-shrink-threshold"},
  {"file-exists?", &module_info_protoSsystem, "file-exists?"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"type-class", &module_info_boot, "type-class"},
  {"<regular-application>", &module_info_ast, "<regular-application>"},
  {"file-type", &module_info_protoSsystem, "file-type"},
  {"proto-filename", &module_info_protoSsystem, "proto-filename"},
  {"lognot", &module_info_runtime, "lognot"},
  {"module-name", &module_info_ast, "module-name"},
  {"popf", &module_info_macros, "popf"},
  {"binding-kind", &module_info_ast, "binding-kind"},
  {"lst", &module_info_boot, "lst"},
  {"1st", &module_info_runtime, "1st"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"as", &module_info_runtime, "as"},
  {"ast-define-binding", &module_info_ast, "ast-define-binding"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"p2c-def-app", &module_info_p2c, "p2c-def-app"},
  {"from-above-by", &module_info_runtime, "from-above-by"},
  {"always", &module_info_runtime, "always"},
  {"t<", &module_info_runtime, "t<"},
  {"application-known?-setter", &module_info_ast, "application-known?-setter"},
  {"ceiling", &module_info_runtime, "ceiling"},
  {"<bound?>", &module_info_ast, "<bound?>"},
  {"binding-dotted?-setter", &module_info_ast, "binding-dotted?-setter"},
  {"<passive-program>", &module_info_ast, "<passive-program>"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"<met>", &module_info_boot, "<met>"},
  {"out", &module_info_runtime, "out"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"do", &module_info_runtime, "do"},
  {"binding-module-name", &module_info_ast, "binding-module-name"},
  {"newline", &module_info_runtime, "newline"},
  {"reference-frame-number", &module_info_ast, "reference-frame-number"},
  {"fab", &module_info_runtime, "fab"},
  {"init-environment-for-eval", &module_info_ast, "init-environment-for-eval"},
  {"table-growth-factor", &module_info_runtime, "table-growth-factor"},
  {"force-output", &module_info_runtime, "force-output"},
  {"free-implemented-foreign-bindings", &module_info_ast, "free-implemented-foreign-bindings"},
  {"application-binding", &module_info_ast, "application-binding"},
  {"char-ready?", &module_info_runtime, "char-ready?"},
  {"add-src-path", &module_info_protoSsystem, "add-src-path"},
  {"application-arguments", &module_info_ast, "application-arguments"},
  {"<ast-signature>", &module_info_ast, "<ast-signature>"},
  {"<reference>", &module_info_ast, "<reference>"},
  {"<step>", &module_info_runtime, "<step>"},
  {"program-register-setter", &module_info_ast, "program-register-setter"},
  {"binding-mutable?", &module_info_ast, "binding-mutable?"},
  {"<raw-constant>", &module_info_ast, "<raw-constant>"},
  {"uppercase?", &module_info_runtime, "uppercase?"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"$permanent-hash-state", &module_info_runtime, "$permanent-hash-state"},
  {"isa", &module_info_boot, "isa"},
  {"fix-let-bindings-setter", &module_info_ast, "fix-let-bindings-setter"},
  {"del-key", &module_info_runtime, "del-key"},
  {"lab", &module_info_boot, "lab"},
  {"function-bindings", &module_info_ast, "function-bindings"},
  {"t=", &module_info_runtime, "t="},
  {"select", &module_info_macros, "select"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"do-static-global-bindings", &module_info_ast, "do-static-global-bindings"},
  {"zero?", &module_info_runtime, "zero?"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"<global-reference>", &module_info_ast, "<global-reference>"},
  {"nxt-state", &module_info_runtime, "nxt-state"},
  {"fix-let-arguments-setter", &module_info_ast, "fix-let-arguments-setter"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"p2c-build-app", &module_info_p2c, "p2c-build-app"},
  {"call-with-input-file", &module_info_runtime, "call-with-input-file"},
  {"locals-body-setter", &module_info_ast, "locals-body-setter"},
  {"<static-global-environment>", &module_info_ast, "<static-global-environment>"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"del-dups", &module_info_runtime, "del-dups"},
  {"pick", &module_info_runtime, "pick"},
  {"os-name", &module_info_protoSsystem, "os-name"},
  {"global-box-value-setter", &module_info_ast, "global-box-value-setter"},
  {"parse-in", &module_info_top, "parse-in"},
  {"do-keyed", &module_info_runtime, "do-keyed"},
  {"map-keyed", &module_info_runtime, "map-keyed"},
  {"monitor-info", &module_info_ast, "monitor-info"},
  {"pair", &module_info_macros, "pair"},
  {"now-key", &module_info_runtime, "now-key"},
  {"fin", &module_info_boot, "fin"},
  {"alphabetic?", &module_info_runtime, "alphabetic?"},
  {"locals-functions", &module_info_ast, "locals-functions"},
  {"<seq>", &module_info_boot, "<seq>"},
  {">=", &module_info_runtime, ">="},
  {"sequentialize", &module_info_ast, "sequentialize"},
  {"signature-nary?-setter", &module_info_ast, "signature-nary?-setter"},
  {"-", &module_info_runtime, "-"},
  {"<programs>", &module_info_ast, "<programs>"},
  {"probe-module", &module_info_ast, "probe-module"},
  {"t+", &module_info_runtime, "t+"},
  {"<application>", &module_info_ast, "<application>"},
  {"fix-let-types", &module_info_ast, "fix-let-types"},
  {"now-elt", &module_info_runtime, "now-elt"},
  {"binding-native-to?", &module_info_ast, "binding-native-to?"},
  {"binding-value", &module_info_ast, "binding-value"},
  {"compile-time-program", &module_info_ast, "compile-time-program"},
  {"binding-dotted?", &module_info_ast, "binding-dotted?"},
  {"read-char", &module_info_runtime, "read-char"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"mem?", &module_info_runtime, "mem?"},
  {"monitor-handler", &module_info_ast, "monitor-handler"},
  {"p2c-clean", &module_info_p2c, "p2c-clean"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"set", &module_info_boot, "set"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"<file-output-port>", &module_info_runtime, "<file-output-port>"},
  {"binding-type", &module_info_ast, "binding-type"},
  {"peek-char", &module_info_runtime, "peek-char"},
  {">", &module_info_runtime, ">"},
  {"all?", &module_info_runtime, "all?"},
  {"<col>", &module_info_boot, "<col>"},
  {"2nd", &module_info_runtime, "2nd"},
  {"open-input-file", &module_info_runtime, "open-input-file"},
  {"def-programs", &module_info_ast, "def-programs"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"module-name-to-relpath", &module_info_ast, "module-name-to-relpath"},
  {"<string-port>", &module_info_runtime, "<string-port>"},
  {"~==", &module_info_runtime, "~=="},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"round", &module_info_runtime, "round"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"from-by", &module_info_runtime, "from-by"},
  {"df", &module_info_boot, "df"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"call-with-string-output-port", &module_info_runtime, "call-with-string-output-port"},
  {"logbit?", &module_info_runtime, "logbit?"},
  {"assert", &module_info_macros, "assert"},
  {"*proto-extension*", &module_info_protoSsystem, "*proto-extension*"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"binding-locative", &module_info_ast, "binding-locative"},
  {"eof-object?", &module_info_runtime, "eof-object?"},
  {"table-protocol", &module_info_runtime, "table-protocol"},
  {"<program>", &module_info_ast, "<program>"},
  {"nul", &module_info_boot, "nul"},
  {"<alternative>", &module_info_ast, "<alternative>"},
  {"<", &module_info_runtime, "<"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"write", &module_info_write, "write"},
  {"dec", &module_info_macros, "dec"},
  {"first-then", &module_info_runtime, "first-then"},
  {"fix-let-bindings", &module_info_ast, "fix-let-bindings"},
  {"writeln", &module_info_write, "writeln"},
  {"del", &module_info_runtime, "del"},
  {"module-binding", &module_info_ast, "module-binding"},
  {"even?", &module_info_runtime, "even?"},
  {"list", &module_info_runtime, "list"},
  {"type-object", &module_info_boot, "type-object"},
  {"alternative-alternant", &module_info_ast, "alternative-alternant"},
  {"runtime-environment", &module_info_ast, "runtime-environment"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"signature-value", &module_info_ast, "signature-value"},
  {"do-named-static-global-bindings", &module_info_ast, "do-named-static-global-bindings"},
  {"ini-state", &module_info_runtime, "ini-state"},
  {"dlet", &module_info_macros, "dlet"},
  {"apply", &module_info_macros, "apply"},
  {"$proto-boot-module-name", &module_info_ast, "$proto-boot-module-name"},
  {"exe-filename", &module_info_protoSsystem, "exe-filename"},
  {"or", &module_info_macros, "or"},
  {"mif", &module_info_boot, "mif"},
  {"def-list", &module_info_ast, "def-list"},
  {"fix-let-arguments", &module_info_ast, "fix-let-arguments"},
  {"global-box-value", &module_info_ast, "global-box-value"},
  {"%isa", &module_info_boot, "%isa"},
  {"alternative-consequent", &module_info_ast, "alternative-consequent"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"from-above", &module_info_runtime, "from-above"},
  {"add-build-path", &module_info_protoSsystem, "add-build-path"},
  {"fix-let-body", &module_info_ast, "fix-let-body"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"function-debug-name", &module_info_ast, "function-debug-name"},
  {"signature-bindings-setter", &module_info_ast, "signature-bindings-setter"},
  {"as-lowercase", &module_info_runtime, "as-lowercase"},
  {"error", &module_info_boot, "error"},
  {"head", &module_info_boot, "head"},
  {"create-directory", &module_info_protoSsystem, "create-directory"},
  {"neg?", &module_info_runtime, "neg?"},
  {"reference-called-function?", &module_info_ast, "reference-called-function?"},
  {"unwind-protect-cleanup-thunk", &module_info_ast, "unwind-protect-cleanup-thunk"},
  {"len", &module_info_runtime, "len"},
  {"<map>", &module_info_runtime, "<map>"},
  {"monitor-type", &module_info_ast, "monitor-type"},
  {"<arguments>", &module_info_ast, "<arguments>"},
  {"identity", &module_info_runtime, "identity"},
  {"ds", &module_info_boot, "ds"},
  {"var-type", &module_info_macros, "var-type"},
  {"str-to-num", &module_info_runtime, "str-to-num"},
  {"seq", &module_info_boot, "seq"},
  {"quote", &module_info_boot, "quote"},
  {"application-function", &module_info_ast, "application-function"},
  {"close-output-port", &module_info_runtime, "close-output-port"},
  {"components-last", &module_info_protoSsystem, "components-last"},
  {"fix-let-types-setter", &module_info_ast, "fix-let-types-setter"},
  {"sub", &module_info_runtime, "sub"},
  {"sexpr-signature-parameters", &module_info_syntax, "sexpr-signature-parameters"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"<ast-function>", &module_info_ast, "<ast-function>"},
  {"<int>", &module_info_boot, "<int>"},
  {"<global-assignment>", &module_info_ast, "<global-assignment>"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"dm", &module_info_boot, "dm"},
  {"numeric?", &module_info_runtime, "numeric?"},
  {"rep", &module_info_boot, "rep"},
  {"sig", &module_info_runtime, "sig"},
  {"to-str", &module_info_runtime, "to-str"},
  {"<predefined-application>", &module_info_ast, "<predefined-application>"},
  {"in", &module_info_runtime, "in"},
  {"<local-assignment>", &module_info_ast, "<local-assignment>"},
  {"assignment-binding", &module_info_ast, "assignment-binding"},
  {"*proto-root*", &module_info_protoSsystem, "*proto-root*"},
  {"*obj-extension*", &module_info_protoSsystem, "*obj-extension*"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"<monitor>", &module_info_ast, "<monitor>"},
  {"unless", &module_info_macros, "unless"},
  {"*exe-extension*", &module_info_protoSsystem, "*exe-extension*"},
  {"any?", &module_info_runtime, "any?"},
  {"<num>", &module_info_boot, "<num>"},
  {"signature-names-setter", &module_info_ast, "signature-names-setter"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"*print-base*", &module_info_runtime, "*print-base*"},
  {"table-growth-threshold", &module_info_runtime, "table-growth-threshold"},
  {"dv", &module_info_boot, "dv"},
  {"fill", &module_info_runtime, "fill"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"try", &module_info_boot, "try"},
  {"slot", &module_info_boot, "slot"},
  {"assignment-form", &module_info_ast, "assignment-form"},
  {"bound?-reference", &module_info_ast, "bound?-reference"},
  {"os-binding-value-setter", &module_info_protoSsystem, "os-binding-value-setter"},
  {"<buf>", &module_info_runtime, "<buf>"},
  {"<str-tab>", &module_info_runtime, "<str-tab>"},
  {"module-syntax-environment", &module_info_ast, "module-syntax-environment"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"<module-binding>", &module_info_ast, "<module-binding>"},
  {"var-name", &module_info_macros, "var-name"},
  {"/", &module_info_runtime, "/"},
  {"<ast-primitive>", &module_info_ast, "<ast-primitive>"},
  {"id-hash", &module_info_runtime, "id-hash"},
  {"module-loader-module-type", &module_info_ast, "module-loader-module-type"},
  {"alter", &module_info_runtime, "alter"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"3rd", &module_info_runtime, "3rd"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"truncate", &module_info_runtime, "truncate"},
  {"env-object-name", &module_info_ast, "env-object-name"},
  {"read-file", &module_info_top, "read-file"},
  {"min", &module_info_runtime, "min"},
  {"binding-global-box", &module_info_ast, "binding-global-box"},
  {"if", &module_info_boot, "if"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"ast-evaluate", &module_info_ast, "ast-evaluate"},
  {"load-module", &module_info_ast, "load-module"},
  {"objectify-quotation", &module_info_ast, "objectify-quotation"},
  {"vec", &module_info_runtime, "vec"},
  {"now-elt-setter", &module_info_runtime, "now-elt-setter"},
  {"fix-let-body-setter", &module_info_ast, "fix-let-body-setter"},
  {"application-tail?", &module_info_ast, "application-tail?"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", NULL},
  {"*proto-version*", &YmainYTproto_versionT},
  {"*proto-date*", &YmainYTproto_dateT},
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
extern void load_module_ast (void);
extern void load_module_top (void);
extern void load_module_p2c (void);
extern void load_module_protoSsystem (void);
extern void load_module_protoSuser (void);

/* EXPRESSION: */

extern void load_module_main (void);

void load_module_main (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_proto();
  load_module_protoSeval();
  load_module_ast();
  load_module_top();
  load_module_p2c();
  load_module_protoSsystem();
  load_module_protoSuser();

  (P)YmainY___main_0___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
