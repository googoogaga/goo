/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: top */

EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
EXT(YruntimeYoddQ,"runtime","odd?");
EXT(YastYDproto_boot_module_name,"ast","$proto-boot-module-name");
EXT(Yslot_owner,"boot","slot-owner");
EXT(YastYbinding_name,"ast","binding-name");
DEF(YtopYload,"top","load");
EXT(YPslot,"boot","%slot");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YsyntaxYsexpr_make_begin,"syntax","sexpr-make-begin");
EXT(YLlogG,"boot","<log>");
EXT(YLslotG,"boot","<slot>");
EXT(YsyntaxYsexpr_loc_bound_bodies,"syntax","sexpr-loc-bound-bodies");
EXT(YastYLlocal_bindingG,"ast","<local-binding>");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YastYbinding_info_setter,"ast","binding-info-setter");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(YastYmodule_syntax_environment,"ast","module-syntax-environment");
EXT(YsyntaxYDsexpr_let_tag,"syntax","$sexpr-let-tag");
EXT(YruntimeYpos,"runtime","pos");
EXT(YruntimeYneg,"runtime","neg");
EXT(YprotoSsystemYTexe_extensionT,"proto/system","*exe-extension*");
EXT(YruntimeYmake_handler,"runtime","make-handler");
EXT(YastYmonitor_main_thunk,"ast","monitor-main-thunk");
EXT(YruntimeYpush,"runtime","push");
EXT(YastYfunction_signature,"ast","function-signature");
EXT(YprotoSsystemYTproto_rootT,"proto/system","*proto-root*");
DEF(YtopYparse,"top","parse");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(YastYsignature_value_setter,"ast","signature-value-setter");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(YsyntaxYsexpr_variableQ,"syntax","sexpr-variable?");
EXT(YsyntaxYDsexpr_begin_tag,"syntax","$sexpr-begin-tag");
EXT(YastYLlocalsG,"ast","<locals>");
EXT(Ynot,"boot","not");
EXT(YruntimeYNE,"runtime","~=");
EXT(Yslot_value,"boot","slot-value");
EXT(YLanyG,"boot","<any>");
EXT(YastYlocals_bindings,"ast","locals-bindings");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
EXT(YprotoSsystemYcomponents_to_pathname,"proto/system","components-to-pathname");
EXT(YwriteYwrite,"write","write");
EXT(YprotoSsystemYparent_directory,"proto/system","parent-directory");
EXT(YastYreport_undefined_global_bindings,"ast","report-undefined-global-bindings");
EXT(YprotoSsystemYcomponents_parent_directory,"proto/system","components-parent-directory");
EXT(YruntimeYdo3,"runtime","do3");
EXT(YastYreference_called_functionQ_setter,"ast","reference-called-function?-setter");
EXT(YLunionG,"boot","<union>");
EXT(YruntimeYassq,"runtime","assq");
EXT(YPsnul,"boot","%snul");
EXT(YprotoSsystemYc_filename,"proto/system","c-filename");
EXT(YastYmodule_target_environment,"ast","module-target-environment");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(YastYbinding_global_box_setter,"ast","binding-global-box-setter");
EXT(YastYobjectify,"ast","objectify");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(YsyntaxYsexpr_unwind_protect_cleanup_forms,"syntax","sexpr-unwind-protect-cleanup-forms");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YsyntaxYsexpr_assignment_variable,"syntax","sexpr-assignment-variable");
EXT(YsyntaxYDsexpr_set_tag,"syntax","$sexpr-set-tag");
EXT(YastYmodule_exports,"ast","module-exports");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
EXT(YastYfunction_body_setter,"ast","function-body-setter");
EXT(YruntimeYto_digit,"runtime","to-digit");
EXT(YastYenvironment_uses_modules,"ast","environment-uses-modules");
EXT(YastYsignature_specs,"ast","signature-specs");
EXT(YastYassignment_reference,"ast","assignment-reference");
EXT(YprotoSsystemYfile_mtime,"proto/system","file-mtime");
EXT(YsyntaxYsexpr_syntax_if_pattern,"syntax","sexpr-syntax-if-pattern");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YprotoSsystemYpathname_to_components,"proto/system","pathname-to-components");
DEF(YtopYeval_in,"top","eval-in");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YastYfunction_value,"ast","function-value");
EXT(YastYlocals_functions_setter,"ast","locals-functions-setter");
EXT(YastYfunction_signature_setter,"ast","function-signature-setter");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YastYfunction_naryQ,"ast","function-nary?");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YsyntaxYsexpr_sequence_Gbegin,"syntax","sexpr-sequence->begin");
EXT(YwriteYwrite_to_string,"write","write-to-string");
EXT(YmacrosYcat,"macros","cat");
EXT(YsyntaxYDsexpr_quasiquote_tag,"syntax","$sexpr-quasiquote-tag");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(YsyntaxYsexpr_function_body,"syntax","sexpr-function-body");
EXT(YastYsignature_bindings,"ast","signature-bindings");
EXT(YreadYread_from_string,"read","read-from-string");
DEF(YtopYbacktrace,"top","backtrace");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(YastYunwind_protect_protected_thunk,"ast","unwind-protect-protected-thunk");
EXT(YsyntaxYDsexpr_isa_tag,"syntax","$sexpr-isa-tag");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YmacrosYemptyQ,"macros","empty?");
DEF(YtopYstr_eval,"top","str-eval");
EXT(YruntimeYbuf,"runtime","buf");
EXT(YsyntaxYsexpr_definition_variable,"syntax","sexpr-definition-variable");
EXT(Ytail_setter,"boot","tail-setter");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(Yslot_type,"boot","slot-type");
EXT(YruntimeYread,"runtime","read");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YsyntaxYsexpr_bind_pattern_variables,"syntax","sexpr-bind-pattern-variables");
EXT(YruntimeYformat,"runtime","format");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(YastYalternative_condition,"ast","alternative-condition");
EXT(YastYLast_genericG,"ast","<ast-generic>");
EXT(YsyntaxYsexpr_text_of_quotation,"syntax","sexpr-text-of-quotation");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YruntimeYlast,"runtime","last");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YPsymbols,"boot","%symbols");
EXT(YruntimeYfloorS,"runtime","floor/");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YastYfind_environment_module,"ast","find-environment-module");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YastYLast_functionG,"ast","<ast-function>");
EXT(Ytail,"boot","tail");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(YastYlocals_bindings_setter,"ast","locals-bindings-setter");
EXT(YastYlocals_body,"ast","locals-body");
EXT(YsyntaxYsexpr_signature_value,"syntax","sexpr-signature-value");
EXT(YruntimeYlsh,"runtime","lsh");
EXT(YastYLfix_letG,"ast","<fix-let>");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YastYLlocal_referenceG,"ast","<local-reference>");
EXT(YruntimeYash,"runtime","ash");
EXT(YastYapplication_knownQ,"ast","application-known?");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
DEF(YtopYprint_result_expression,"top","print-result-expression");
EXT(YastYmonitor_test,"ast","monitor-test");
EXT(Yclass_slots,"boot","class-slots");
EXT(YruntimeYflo_bits,"runtime","flo-bits");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
EXT(YruntimeYroundS,"runtime","round/");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
EXT(YruntimeYrev,"runtime","rev");
EXT(YastYset_module_environments,"ast","set-module-environments");
EXT(YastYload_in,"ast","load-in");
EXT(YastYinit_ast,"ast","init-ast");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
EXT(YastYLunwind_protectG,"ast","<unwind-protect>");
EXT(YruntimeYabs,"runtime","abs");
EXT(YsyntaxYsexpr_function_definition_value,"syntax","sexpr-function-definition-value");
EXT(YreadYDchar_long_names,"read","$char-long-names");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(YruntimeYdo2,"runtime","do2");
EXT(YastYdo_module_loader_modules,"ast","do-module-loader-modules");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(Ynil,"boot","nil");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(YruntimeYT,"runtime","*");
EXT(YsyntaxYsexpr_make_getter,"syntax","sexpr-make-getter");
EXT(YastYLglobal_boxG,"ast","<global-box>");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(YastYreference_frame_offset,"ast","reference-frame-offset");
EXT(YsyntaxYsexpr_if_then,"syntax","sexpr-if-then");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(YastYLcomputed_programG,"ast","<computed-program>");
EXT(YsyntaxYsexpr_let_Gcombination,"syntax","sexpr-let->combination");
EXT(YastYLreal_referenceG,"ast","<real-reference>");
EXT(YruntimeYLlistG,"runtime","<list>");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YruntimeYmax,"runtime","max");
EXT(YruntimeYLerrorG,"runtime","<error>");
DEF(YtopYdo_stack_frames,"top","do-stack-frames");
EXT(Ytype_elts,"boot","type-elts");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YastYbinding_dynamic_extentQ_setter,"ast","binding-dynamic-extent?-setter");
EXT(YsyntaxYsexpr_iterate_Gloc,"syntax","sexpr-iterate->loc");
EXT(YPPmacro,"boot","%%macro");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YsyntaxYsexpr_block_name,"syntax","sexpr-block-name");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YruntimeYdefault,"runtime","default");
EXT(YastYsignature_names,"ast","signature-names");
EXT(YruntimeYaddress_of,"runtime","address-of");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(YPdefine_method,"boot","%define-method");
EXT(YsyntaxYsexpr_isa_parents,"syntax","sexpr-isa-parents");
EXT(YruntimeYfloor,"runtime","floor");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(YastYLmodule_loaderG,"ast","<module-loader>");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YsyntaxYsexpr_unwind_protect_protected_form,"syntax","sexpr-unwind-protect-protected-form");
EXT(YastYfunction_body,"ast","function-body");
EXT(YruntimeYmodulo,"runtime","modulo");
EXT(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YprotoSsystemYTpath_separatorT,"proto/system","*path-separator*");
EXT(YsyntaxYsexpr_make_setter_name,"syntax","sexpr-make-setter-name");
EXT(YLoptsG,"boot","<opts>");
EXT(YprotoSsystemYcomponents_basename,"proto/system","components-basename");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YsyntaxYsexpr_assignment_value,"syntax","sexpr-assignment-value");
EXT(YastYfab_p2c_module,"ast","fab-p2c-module");
EXT(Ysig_value,"boot","sig-value");
EXT(Yclass_name,"boot","class-name");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(YsyntaxYsexpr_if_else,"syntax","sexpr-if-else");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(YisaQ,"boot","isa?");
EXT(YsyntaxYDsexpr_define_generic_tag,"syntax","$sexpr-define-generic-tag");
EXT(YastYLconstantG,"ast","<constant>");
EXT(YruntimeYempty,"runtime","empty");
EXT(YruntimeYassqn,"runtime","assqn");
EXT(YsyntaxYDsexpr_locals_tag,"syntax","$sexpr-locals-tag");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YruntimeYA,"runtime","+");
EXT(YLtypeG,"boot","<type>");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YLclassG,"boot","<class>");
EXT(YastYinstall_initial_bindings,"ast","install-initial-bindings");
EXT(YastYLsequentialG,"ast","<sequential>");
EXT(YsyntaxYsexpr_variable_name,"syntax","sexpr-variable-name");
EXT(YruntimeYLrangeG,"runtime","<range>");
EXT(Yfab_sym,"boot","fab-sym");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYfind_key,"runtime","find-key");
EXT(YruntimeYelt,"runtime","elt");
EXT(YruntimeYreduceA,"runtime","reduce+");
EXT(YruntimeYcurry,"runtime","curry");
EXT(YsyntaxYsexpr_operands,"syntax","sexpr-operands");
EXT(YsyntaxYDsexpr_define_method_tag,"syntax","$sexpr-define-method-tag");
EXT(YwriteYdisplay,"write","display");
EXT(YastYbinding_info,"ast","binding-info");
EXT(Yobject_parents,"boot","object-parents");
EXT(YsyntaxYeval,"syntax","eval");
EXT(YruntimeYLE,"runtime","<=");
EXT(YastYbinding_value_setter,"ast","binding-value-setter");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YsyntaxYsexpr_define_classQ,"syntax","sexpr-define-class?");
EXT(YruntimeYlogior,"runtime","logior");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
EXT(YastYDproto_runtime_module_name,"ast","$proto-runtime-module-name");
EXT(YruntimeYE,"runtime","=");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YprotoSsystemYhierarchical_components,"proto/system","hierarchical-components");
EXT(YastYLruntime_referenceG,"ast","<runtime-reference>");
EXT(Ytype_error,"boot","type-error");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YastYremove_modules_by_nameX,"ast","remove-modules-by-name!");
EXT(YLsymG,"boot","<sym>");
EXT(YruntimeYLfile_input_portG,"runtime","<file-input-port>");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(YsyntaxYsexpr_variable_type,"syntax","sexpr-variable-type");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YastYfunction_binding,"ast","function-binding");
EXT(YastYconstant_value,"ast","constant-value");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(YmacrosYmap,"macros","map");
EXT(YastYbinding_dynamic_extentQ,"ast","binding-dynamic-extent?");
EXT(YruntimeYeof_object,"runtime","eof-object");
EXT(Ysig_names,"boot","sig-names");
EXT(YastYLcompile_timeG,"ast","<compile-time>");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YsyntaxYDsexpr_monitor_tag,"syntax","$sexpr-monitor-tag");
EXT(YruntimeYpop,"runtime","pop");
EXT(YastYbinding_type_setter,"ast","binding-type-setter");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YruntimeYmap2,"runtime","map2");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YastYbind_exit_main_fun,"ast","bind-exit-main-fun");
EXT(YruntimeYlogxor,"runtime","logxor");
EXT(YastYLast_macro_definitionG,"ast","<ast-macro-definition>");
EXT(YsyntaxYsexpr_function_signature,"syntax","sexpr-function-signature");
EXT(YastYLruntime_assignmentG,"ast","<runtime-assignment>");
EXT(YsyntaxYDsexpr_define_class_tag,"syntax","$sexpr-define-class-tag");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(YprotoSsystemYfile_existsQ,"proto/system","file-exists?");
EXT(YastYsignature_specs_setter,"ast","signature-specs-setter");
EXT(YastYLbindingG,"ast","<binding>");
EXT(YLgenG,"boot","<gen>");
EXT(Yobject_slots,"boot","object-slots");
EXT(YruntimeYcopy_state,"runtime","copy-state");
DEF(YtopYprompt_for_command_expression,"top","prompt-for-command-expression");
EXT(YastYLast_methodG,"ast","<ast-method>");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YastYLbind_exitG,"ast","<bind-exit>");
EXT(YastYsignature_naryQ,"ast","signature-nary?");
EXT(YruntimeYfrom,"runtime","from");
EXT(YLstrG,"boot","<str>");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YprotoSsystemYobj_filename,"proto/system","obj-filename");
DEF(YtopYstr_parse_in,"top","str-parse-in");
EXT(YsyntaxYsexpr_make_anonymous_method,"syntax","sexpr-make-anonymous-method");
EXT(YmacrosYEE,"macros","==");
EXT(YastYLdefinitionG,"ast","<definition>");
EXT(YsyntaxYDsexpr_bind_exit_tag,"syntax","$sexpr-bind-exit-tag");
EXT(Yunknown_function_error,"boot","unknown-function-error");
DEF(YtopYtop,"top","top");
EXT(YmacrosYtup,"macros","tup");
EXT(YastYreference_binding,"ast","reference-binding");
EXT(YruntimeYlogand,"runtime","logand");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YsyntaxYsexpr_syntax_if_value,"syntax","sexpr-syntax-if-value");
EXT(YsyntaxYsexpr_forward_primitiveQ,"syntax","sexpr-forward-primitive?");
EXT(YruntimeYfalse_or,"runtime","false-or");
EXT(Yfun_name,"boot","fun-name");
EXT(Yclass_parents,"boot","class-parents");
EXT(YastYfunction_debug_name_setter,"ast","function-debug-name-setter");
EXT(Yfind_setter,"boot","find-setter");
EXT(YsyntaxYsexpr_unquoteQ,"syntax","sexpr-unquote?");
EXT(YprotoSsystemYTc_extensionT,"proto/system","*c-extension*");
EXT(YprotoSsystemYos_binding_value,"proto/system","os-binding-value");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(YastYprogram_register,"ast","program-register");
EXT(YprotoSsystemYprobe_directory,"proto/system","probe-directory");
EXT(YruntimeYreduce,"runtime","reduce");
EXT(YruntimeYstr,"runtime","str");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
EXT(YLvecG,"boot","<vec>");
EXT(Ytype_class,"boot","type-class");
EXT(YsyntaxYDsexpr_define_syntax_tag,"syntax","$sexpr-define-syntax-tag");
EXT(YastYLregular_applicationG,"ast","<regular-application>");
EXT(YastYLmoduleG,"ast","<module>");
EXT(YruntimeYLincongruent_method_errorG,"runtime","<incongruent-method-error>");
EXT(YprotoSsystemYfile_type,"proto/system","file-type");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
EXT(YprotoSsystemYproto_filename,"proto/system","proto-filename");
EXT(YruntimeYlognot,"runtime","lognot");
EXT(YastYmodule_name,"ast","module-name");
EXT(YsyntaxYsexpr_syntax_if_else,"syntax","sexpr-syntax-if-else");
EXT(YastYbinding_kind,"ast","binding-kind");
EXT(Ylst,"boot","lst");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YruntimeY1st,"runtime","1st");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(YruntimeYas,"runtime","as");
EXT(YastYast_define_binding,"ast","ast-define-binding");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
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
EXT(YsyntaxYDsexpr_if_tag,"syntax","$sexpr-if-tag");
EXT(YruntimeYdo,"runtime","do");
EXT(YastYbinding_module_name,"ast","binding-module-name");
EXT(YruntimeYnewline,"runtime","newline");
EXT(YastYreference_frame_number,"ast","reference-frame-number");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YruntimeYfab,"runtime","fab");
EXT(YsyntaxYsexpr_make_macro_function,"syntax","sexpr-make-macro-function");
EXT(YsyntaxYDsexpr_quote_tag,"syntax","$sexpr-quote-tag");
EXT(YastYinit_environment_for_eval,"ast","init-environment-for-eval");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(YastYfree_implemented_foreign_bindings,"ast","free-implemented-foreign-bindings");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YastYapplication_binding,"ast","application-binding");
DEF(YtopYstr_parse,"top","str-parse");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
EXT(YprotoSsystemYadd_src_path,"proto/system","add-src-path");
EXT(YastYapplication_arguments,"ast","application-arguments");
EXT(YastYLast_signatureG,"ast","<ast-signature>");
EXT(YastYLreferenceG,"ast","<reference>");
EXT(YruntimeYLstepG,"runtime","<step>");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
EXT(YastYprogram_register_setter,"ast","program-register-setter");
EXT(YprotoSsystemYlabel_components,"proto/system","label-components");
EXT(YastYbinding_mutableQ,"ast","binding-mutable?");
EXT(YastYLraw_constantG,"ast","<raw-constant>");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
EXT(YsyntaxYsexpr_syntax_if_then,"syntax","sexpr-syntax-if-then");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(Yfind_getter,"boot","find-getter");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(YastYfix_let_bindings_setter,"ast","fix-let-bindings-setter");
EXT(YsyntaxYDsexpr_iterate_tag,"syntax","$sexpr-iterate-tag");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(Yobject_class,"boot","object-class");
EXT(YruntimeYPwith_monitor,"runtime","%with-monitor");
EXT(YastYfunction_bindings,"ast","function-bindings");
EXT(YruntimeYtE,"runtime","t=");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YastYdo_static_global_bindings,"ast","do-static-global-bindings");
EXT(YLlstG,"boot","<lst>");
EXT(YruntimeYzeroQ,"runtime","zero?");
EXT(YastYLglobal_referenceG,"ast","<global-reference>");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
EXT(YastYfix_let_arguments_setter,"ast","fix-let-arguments-setter");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YastYLast_primitive_definitionG,"ast","<ast-primitive-definition>");
EXT(YastYmodule_name_to_relpath,"ast","module-name-to-relpath");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YastYlocals_body_setter,"ast","locals-body-setter");
EXT(YruntimeYlen_setter,"runtime","len-setter");
EXT(YastYLstatic_global_environmentG,"ast","<static-global-environment>");
EXT(YLfunG,"boot","<fun>");
EXT(YruntimeYdel_dups,"runtime","del-dups");
EXT(YruntimeYpick,"runtime","pick");
EXT(YprotoSsystemYos_name,"proto/system","os-name");
EXT(YastYglobal_box_value_setter,"ast","global-box-value-setter");
DEF(YtopYparse_in,"top","parse-in");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
EXT(YastYmonitor_info,"ast","monitor-info");
EXT(YsyntaxYsexpr_isa_init_values,"syntax","sexpr-isa-init-values");
EXT(YmacrosYpair,"macros","pair");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YsyntaxYsexpr_expand_backquote,"syntax","sexpr-expand-backquote");
EXT(YastYlocals_functions,"ast","locals-functions");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YsyntaxYsexpr_definition_value,"syntax","sexpr-definition-value");
EXT(YLseqG,"boot","<seq>");
EXT(YruntimeYGE,"runtime",">=");
EXT(YastYsequentialize,"ast","sequentialize");
EXT(YastYsignature_naryQ_setter,"ast","signature-nary?-setter");
EXT(YruntimeY_,"runtime","-");
EXT(YastYLprogramsG,"ast","<programs>");
EXT(YastYprobe_module,"ast","probe-module");
EXT(YsyntaxYDsexpr_unwind_protect_tag,"syntax","$sexpr-unwind-protect-tag");
EXT(YruntimeYtA,"runtime","t+");
EXT(YsyntaxYsexpr_unquote_splicingQ,"syntax","sexpr-unquote-splicing?");
EXT(YastYLapplicationG,"ast","<application>");
EXT(YastYfix_let_types,"ast","fix-let-types");
DEF(YtopYstr_eval_in,"top","str-eval-in");
EXT(YruntimeYnow_elt,"runtime","now-elt");
EXT(YastYbinding_native_toQ,"ast","binding-native-to?");
EXT(YastYbinding_value,"ast","binding-value");
EXT(YastYcompile_time_program,"ast","compile-time-program");
EXT(YastYbinding_dottedQ,"ast","binding-dotted?");
EXT(YruntimeYread_char,"runtime","read-char");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YruntimeYmemQ,"runtime","mem?");
EXT(YastYmonitor_handler,"ast","monitor-handler");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
EXT(YastYbinding_type,"ast","binding-type");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YsyntaxYsexpr_loc_bound_names,"syntax","sexpr-loc-bound-names");
EXT(YruntimeYG,"runtime",">");
EXT(YLcolG,"boot","<col>");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
EXT(YsyntaxYDsexpr_macro_expand_tag,"syntax","$sexpr-macro-expand-tag");
EXT(YPvnul,"boot","%vnul");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YruntimeYround,"runtime","round");
EXT(YruntimeYfrom_by,"runtime","from-by");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
EXT(YsyntaxYsexpr_syntax_definition_value,"syntax","sexpr-syntax-definition-value");
EXT(YprotoSsystemYTproto_extensionT,"proto/system","*proto-extension*");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YastYbinding_locative,"ast","binding-locative");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
DEF(YtopYtop_in,"top","top-in");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
EXT(YastYLprogramG,"ast","<program>");
EXT(Ynul,"boot","nul");
EXT(YastYLalternativeG,"ast","<alternative>");
EXT(YruntimeYL,"runtime","<");
EXT(YLlocG,"boot","<loc>");
EXT(Yfab_class,"boot","fab-class");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YsyntaxYsexpr_isa_slot_inits,"syntax","sexpr-isa-slot-inits");
EXT(YastYfix_let_bindings,"ast","fix-let-bindings");
EXT(YruntimeYdel,"runtime","del");
EXT(YwriteYwriteln,"write","writeln");
EXT(YastYmodule_binding,"ast","module-binding");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YLsigG,"boot","<sig>");
EXT(YruntimeYlist,"runtime","list");
EXT(YsyntaxYDsexpr_method_tag,"syntax","$sexpr-method-tag");
EXT(Ytype_object,"boot","type-object");
EXT(YastYalternative_alternant,"ast","alternative-alternant");
EXT(Yhead_setter,"boot","head-setter");
EXT(YastYruntime_environment,"ast","runtime-environment");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(YastYsignature_value,"ast","signature-value");
EXT(YsyntaxYsexpr_monitor_expand,"syntax","sexpr-monitor-expand");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
EXT(YastYdo_named_static_global_bindings,"ast","do-named-static-global-bindings");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(YprotoSsystemYexe_filename,"proto/system","exe-filename");
EXT(YsyntaxYsexpr_slot_variable,"syntax","sexpr-slot-variable");
EXT(YastYfix_let_arguments,"ast","fix-let-arguments");
EXT(YastYglobal_box_value,"ast","global-box-value");
EXT(YPisa,"boot","%isa");
EXT(YastYalternative_consequent,"ast","alternative-consequent");
EXT(YLfloG,"boot","<flo>");
EXT(YruntimeYfrom_above,"runtime","from-above");
EXT(YprotoSsystemYadd_build_path,"proto/system","add-build-path");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(YastYfix_let_body,"ast","fix-let-body");
EXT(YLtupG,"boot","<tup>");
EXT(YastYfunction_debug_name,"ast","function-debug-name");
EXT(YastYsignature_bindings_setter,"ast","signature-bindings-setter");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(Yhead,"boot","head");
EXT(Yerror,"boot","error");
EXT(YsyntaxYsexpr_make_setter,"syntax","sexpr-make-setter");
EXT(YsyntaxYsexpr_block_body,"syntax","sexpr-block-body");
EXT(YprotoSsystemYcreate_directory,"proto/system","create-directory");
EXT(YruntimeYnegQ,"runtime","neg?");
EXT(YastYreference_called_functionQ,"ast","reference-called-function?");
EXT(YastYunwind_protect_cleanup_thunk,"ast","unwind-protect-cleanup-thunk");
EXT(YruntimeYlen,"runtime","len");
EXT(YsyntaxYsexpr_isa_init_slots,"syntax","sexpr-isa-init-slots");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(YastYmonitor_type,"ast","monitor-type");
EXT(YastYLargumentsG,"ast","<arguments>");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YsyntaxYDsexpr_define_function_tag,"syntax","$sexpr-define-function-tag");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YsyntaxYDsexpr_slot_tag,"syntax","$sexpr-slot-tag");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(YastYapplication_function,"ast","application-function");
EXT(YruntimeYclose_output_port,"runtime","close-output-port");
EXT(YruntimeYassocq,"runtime","assocq");
EXT(YprotoSsystemYcomponents_last,"proto/system","components-last");
EXT(YastYfix_let_types_setter,"ast","fix-let-types-setter");
EXT(YruntimeYsub,"runtime","sub");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YastYassignment_form,"ast","assignment-form");
EXT(YsyntaxYsexpr_slot_init,"syntax","sexpr-slot-init");
EXT(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
EXT(Yslot_init,"boot","slot-init");
EXT(YsyntaxYDsexpr_define_tag,"syntax","$sexpr-define-tag");
EXT(YsyntaxYsexpr_make_application,"syntax","sexpr-make-application");
EXT(YLintG,"boot","<int>");
EXT(YastYLglobal_assignmentG,"ast","<global-assignment>");
EXT(YsyntaxYsexpr_method_body,"syntax","sexpr-method-body");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YsyntaxYsexpr_operator,"syntax","sexpr-operator");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YsyntaxYsexpr_syntax_definition_variable,"syntax","sexpr-syntax-definition-variable");
EXT(YruntimeYsig,"runtime","sig");
EXT(YsyntaxYsexpr_slot_object,"syntax","sexpr-slot-object");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YsyntaxYsexpr_loc_bound_signatures,"syntax","sexpr-loc-bound-signatures");
EXT(YastYLpredefined_applicationG,"ast","<predefined-application>");
EXT(YruntimeYin,"runtime","in");
EXT(YastYLlocal_assignmentG,"ast","<local-assignment>");
EXT(YruntimeYkeys,"runtime","keys");
EXT(YastYassignment_binding,"ast","assignment-binding");
EXT(Ysym_name,"boot","sym-name");
EXT(YsyntaxYsexpr_method_signature,"syntax","sexpr-method-signature");
EXT(YsyntaxYsexpr_function_definition_variable,"syntax","sexpr-function-definition-variable");
EXT(YprotoSsystemYTobj_extensionT,"proto/system","*obj-extension*");
DEF(YtopYload_from,"top","load-from");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YastYLmonitorG,"ast","<monitor>");
EXT(YLnumG,"boot","<num>");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(YastYsignature_names_setter,"ast","signature-names-setter");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(YruntimeYTprint_baseT,"runtime","*print-base*");
EXT(YmacrosYnapply,"macros","napply");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
EXT(YsyntaxYsexpr_define_class_parents,"syntax","sexpr-define-class-parents");
EXT(YruntimeYfill,"runtime","fill");
EXT(YsyntaxYsexpr_if_test,"syntax","sexpr-if-test");
EXT(Yfun_value,"boot","fun-value");
DEF(YtopYLkeyboard_interruptG,"top","<keyboard-interrupt>");
EXT(YastYboundQ_reference,"ast","bound?-reference");
EXT(YprotoSsystemYos_binding_value_setter,"proto/system","os-binding-value-setter");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
EXT(YruntimeYevenQ,"runtime","even?");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YastYLmodule_bindingG,"ast","<module-binding>");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YruntimeYS,"runtime","/");
EXT(YastYLast_primitiveG,"ast","<ast-primitive>");
EXT(YruntimeYid_hash,"runtime","id-hash");
EXT(YastYmodule_loader_module_type,"ast","module-loader-module-type");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YruntimeYalter,"runtime","alter");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YLchrG,"boot","<chr>");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YastYLfab_listG,"ast","<fab-list>");
EXT(YruntimeYtruncate,"runtime","truncate");
EXT(YastYenv_object_name,"ast","env-object-name");
DEF(YtopYread_file,"top","read-file");
EXT(YsyntaxYDsexpr_syntax_if_tag,"syntax","$sexpr-syntax-if-tag");
EXT(YruntimeYmin,"runtime","min");
EXT(YsyntaxYsexpr_loc_raw_body,"syntax","sexpr-loc-raw-body");
EXT(YastYbinding_global_box,"ast","binding-global-box");
DEF(YtopYdo_restart,"top","do-restart");
EXT(Yadd_slot,"boot","add-slot");
EXT(YastYast_evaluate,"ast","ast-evaluate");
EXT(YastYload_module,"ast","load-module");
EXT(YruntimeYassoc,"runtime","assoc");
EXT(YastYobjectify_quotation,"ast","objectify-quotation");
EXT(YruntimeYvec,"runtime","vec");
EXT(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
EXT(YastYfix_let_body_setter,"ast","fix-let-body-setter");
EXT(YastYapplication_tailQ,"ast","application-tail?");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_61);
DEFLIT(lit_25);
DEFLIT(lit_4);
DEFLIT(lit_23);
DEFLIT(lit_18);
DEFLIT(lit_0);
DEFLIT(lit_66);
DEFLIT(lit_20);
DEFLIT(lit_13);
DEFLIT(lit_46);
DEFLIT(lit_1);
DEFLIT(lit_26);
DEFLIT(lit_53);
DEFLIT(lit_45);
DEFLIT(lit_17);
DEFLIT(lit_16);
DEFLIT(lit_57);
DEFLIT(lit_31);
DEFLIT(lit_21);
DEFLIT(lit_51);
DEFLIT(lit_9);
DEFLIT(lit_28);
DEFLIT(lit_43);
DEFLIT(lit_32);
DEFLIT(lit_59);
DEFLIT(lit_70);
DEFLIT(lit_68);
DEFLIT(lit_44);
DEFLIT(lit_56);
DEFLIT(lit_8);
DEFLIT(lit_27);
DEFLIT(lit_2);
DEFLIT(lit_34);
DEFLIT(lit_35);
DEFLIT(lit_39);
DEFLIT(lit_41);
DEFLIT(lit_6);
DEFLIT(lit_40);
DEFLIT(lit_54);
DEFLIT(lit_19);
DEFLIT(lit_11);
DEFLIT(lit_10);
DEFLIT(lit_63);
DEFLIT(lit_55);
DEFLIT(lit_3);
DEFLIT(lit_14);
DEFLIT(lit_67);
DEFLIT(lit_48);
DEFLIT(lit_12);
DEFLIT(lit_38);
DEFLIT(lit_52);
DEFLIT(lit_65);
DEFLIT(lit_37);
DEFLIT(lit_60);
DEFLIT(lit_30);
DEFLIT(lit_7);
DEFLIT(lit_22);
DEFLIT(lit_50);
DEFLIT(lit_47);
DEFLIT(lit_24);
DEFLIT(lit_64);
DEFLIT(lit_69);
DEFLIT(lit_49);
DEFLIT(lit_5);
DEFLIT(lit_33);
DEFLIT(lit_29);
DEFLIT(lit_15);
DEFLIT(lit_42);
DEFLIT(lit_58);
DEFLIT(lit_62);
DEFLIT(lit_36);

/* FUNCTIONS: */

LOCFOR(fun_parse_in_0);
LOCFOR(fun_parse_1);
LOCFOR(fun_str_parse_in_2);
LOCFOR(fun_str_parse_3);
LOCFOR(fun_eval_in_4);
LOCFOR(fun_eval_5);
LOCFOR(fun_str_eval_in_6);
LOCFOR(fun_str_eval_7);
LOCFOR(fun_loop_8);
LOCFOR(fun_9);
LOCFOR(fun_read_file_10);
LOCFOR(fun_load_in_11);
LOCFOR(fun_load_12);
LOCFOR(fun_load_from_13);
LOCFOR(fun_prompt_for_command_expression_14);
LOCFOR(fun_print_result_expression_15);
LOCFOR(fun_do_stack_frames_16);
LOCFOR(fun_17);
LOCFOR(fun_backtrace_18);
FUNFOR(Ykeyboard_interrupt);
FUNFOR(YtopYdo_restart);
LOCFOR(fun_21);
LOCFOR(fun_22);
LOCFOR(fun_23);
LOCFOR(fun_24);
LOCFOR(fun_x_1289_25);
LOCFOR(fun_26);
LOCFOR(fun_x_1291_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_30);
LOCFOR(fun_31);
LOCFOR(fun_loop_32);
LOCFOR(fun_33);
LOCFOR(fun_top_in_34);
LOCFOR(fun_35);
LOCFOR(fun_36);
LOCFOR(fun_37);
LOCFOR(fun_loop_38);
LOCFOR(fun_39);
LOCFOR(fun_40);
LOCFOR(fun_top_41);
extern P YtopY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_parse_in_0) {
  P s_,ct_env_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL1(1,CHKREF(YreadYread_from_string),s_);
  T0 = CALL3(1,CHKREF(YastYobjectify),T1,ct_env_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_parse_1) {
  P s_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,CHKREF(YastYruntime_environment),modname_);
  T0 = CALL2(1,CHKREF(YtopYparse_in),s_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_parse_in_2) {
  P s_,ct_env_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL2(1,CHKREF(YtopYparse_in),s_,ct_env_);
  T0 = CALL3(1,CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_6),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_parse_3) {
  P s_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,CHKREF(YastYruntime_environment),modname_);
  T0 = CALL2(1,CHKREF(YtopYstr_parse_in),s_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_in_4) {
  P x_,ct_env_;
  P eF1559;
  P oF1558;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL3(1,CHKREF(YastYobjectify),x_,ct_env_,YPfalse);
  oF1558 = T1;
  T3 = CALL1(1,CHKREF(YastYast_evaluate),oF1558);
  eF1559 = T3;
  T2 = eF1559;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_5) {
  P x_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,CHKREF(YastYruntime_environment),modname_);
  T0 = CALL2(1,CHKREF(YtopYeval_in),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_eval_in_6) {
  P x_,ct_env_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(ct_env_, 1);
loop:
  T2 = CALL1(1,CHKREF(YreadYread_from_string),x_);
  T1 = CALL2(1,CHKREF(YtopYeval_in),T2,ct_env_);
  T0 = CALL1(1,CHKREF(YwriteYwrite_to_string),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_eval_7) {
  P x_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,CHKREF(YastYruntime_environment),modname_);
  T0 = CALL2(1,CHKREF(YtopYstr_eval_in),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_8) {
  P forms_;
  P xF1560;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(forms_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYread),FREEREF(0));
  xF1560 = T1;
  T3 = CALL1(1,CHKREF(YruntimeYeof_objectQ),xF1560);
  if (T3 != YPfalse) {
    T5 = CALL1(1,CHKREF(YruntimeYrevX),forms_);
    T4 = CALL1(1,CHKREF(YsyntaxYsexpr_sequence_Gbegin),T5);
    T2 = T4;
  } else {
    T7 = CALL2(1,CHKREF(YmacrosYpair),xF1560,forms_);
    a1 = T7;
    forms_ = a1;
    goto loop;
    T2 = T6;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_9) {
  P port_;
  P loopF1561;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_8,2);
  loopF1561 = T1;
  FUNINIT(loopF1561, 2,port_,loopF1561);
  T2 = CALL1(0,loopF1561,Ynil);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_read_file_10) {
  P filename_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  T1 = fun_9;
  T0 = CALL2(1,CHKREF(YruntimeYcall_with_input_file),filename_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_in_11) {
  P filename_,ct_env_;
  P oF1563;
  P xF1562;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(filename_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL1(1,CHKREF(YtopYread_file),filename_);
  xF1562 = T1;
  T3 = CALL3(1,CHKREF(YastYobjectify),xF1562,ct_env_,YPfalse);
  oF1563 = T3;
  T4 = CALL1(1,CHKREF(YastYast_evaluate),oF1563);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_12) {
  P filename_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(filename_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,CHKREF(YastYruntime_environment),modname_);
  T0 = CALL2(1,CHKREF(YastYload_in),filename_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_from_13) {
  P name_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,CHKREF(YprotoSsystemYproto_filename),name_);
  T0 = CALL2(1,CHKREF(YtopYload),T1,modname_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_prompt_for_command_expression_14) {
  P env_,level_,prompt_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(env_, 0);
  ARG(level_, 1);
  ARG(prompt_, 2);
loop:
  T1 = CALL1(1,CHKREF(YastYfind_environment_module),env_);
  T0 = CALL1(1,CHKREF(YastYmodule_name),T1);
  CALLN(1,CHKREF(YruntimeYformat),5,CHKREF(YruntimeYout),CHKREF(lit_26),T0,level_,prompt_);
  CALL1(1,CHKREF(YruntimeYforce_output),CHKREF(YruntimeYout));
  T2 = CALL1(1,CHKREF(YruntimeYread),CHKREF(YruntimeYin));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_print_result_expression_15) {
  P env_,level_,label_,result_;
  P T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(env_, 0);
  ARG(level_, 1);
  ARG(label_, 2);
  ARG(result_, 3);
loop:
  T1 = CALL1(1,CHKREF(YastYfind_environment_module),env_);
  T0 = CALL1(1,CHKREF(YastYmodule_name),T1);
  CALLN(1,CHKREF(YruntimeYformat),5,CHKREF(YruntimeYout),CHKREF(lit_30),T0,level_,label_);
  T2 = CALL2(1,CHKREF(YwriteYwrite),CHKREF(YruntimeYout),result_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_do_stack_frames_16) {
  P fun_;
  P T0;
  P a1;
LINK_STACK();
  ARG(fun_, 0);
loop:
  T0 = (P)YPdo_stack_frames(fun_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_17) {
  P f_,args_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(args_, 1);
loop:
  T2 = CALL2(1,CHKREF(YisaQ),f_,CHKREF(YLgenG));
  T1 = CALL1(1,CHKREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = BOXVAL(FREEREF(0));
    CALLN(1,CHKREF(YruntimeYformat),5,CHKREF(YruntimeYout),CHKREF(lit_36),T3,f_,args_);
    T6 = BOXVAL(FREEREF(0));
    T5 = CALL2(1,CHKREF(YruntimeYA),T6,YPint((P)1));
    T4 = BOXVAL(FREEREF(0)) = T5;
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_backtrace_18) {
  P numF1564;
  P T3,T2,T1,T0;
LINK_STACK();
loop:
  numF1564 = YPint((P)0);
  numF1564 = BOXFAB(numF1564);
  T3 = FUNFAB(fun_17,1,numF1564);
  T2 = CALL1(1,CHKREF(YtopYdo_stack_frames),T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ykeyboard_interrupt) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,CHKREF(YruntimeYsig),CHKREF(YtopYLkeyboard_interruptG));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YtopYdo_restart) {
  P restarts_,n_;
  P tmpF1565;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(restarts_, 0);
  ARG(n_, 1);
loop:
  T0 = CALL1(1,CHKREF(Ynot),restarts_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,CHKREF(Yerror),CHKREF(lit_42));
  } else {
  }
  T4 = CALL2(1,CHKREF(YruntimeYG),n_,YPint((P)0));
  tmpF1565 = T4;
  if (tmpF1565 != YPfalse) {
    T7 = CALL1(1,CHKREF(YruntimeYlen),restarts_);
    T6 = CALL2(1,CHKREF(YruntimeYLE),n_,T7);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  T2 = CALL1(1,CHKREF(Ynot),T3);
  if (T2 != YPfalse) {
    T8 = CALL1(1,CHKREF(Yerror),CHKREF(lit_43));
  } else {
  }
  T11 = CALL2(1,CHKREF(YruntimeY_),n_,YPint((P)1));
  T10 = CALL2(1,CHKREF(YruntimeYelt),restarts_,T11);
  T9 = CALL3(1,CHKREF(YruntimeYinvoke_handler_interactively),T10,CHKREF(YruntimeYin),CHKREF(YruntimeYout));
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_21) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_22) {
  P c_,r_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
loop:
  T0 = CALL2(1,CHKREF(YisaQ),c_,CHKREF(YtopYLkeyboard_interruptG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_52));
  } else {
    T3 = CALL1(1,CHKREF(YruntimeYdescribe_condition),c_);
    T2 = CALL3(1,CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_53),T3);
  }
  T4 = CALL2(1,CHKREF(YruntimeYA),FREEREF(0),YPint((P)1));
  T5 = BOXVAL(FREEREF(3));
  CALLN(1,CHKREF(YtopYtop_in),5,T4,FREEREF(1),FREEREF(2),YPtrue,T5);
  T6 = CALL1(1,FREEREF(4),YPfalse);
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_23) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_24) {
  P c_,r_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1289_25) {
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

FUNCODEDEF(fun_26) {
  P return_;
  P x_1288F1570;
  P x_1288F1569;
  P nF1568;
  P x_1288F1567;
  P x_1289F1566;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1289_25,1);
  x_1289F1566 = T1;
  FUNINIT(x_1289F1566, 1,return_);
  x_1288F1567 = FREEREF(0);
  nF1568 = YPfalse;
  nF1568 = BOXFAB(nF1568);
  T5 = CALL2(1,CHKREF(YisaQ),x_1288F1567,CHKREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1288F1567,CHKREF(lit_65),x_1289F1566);
    x_1288F1569 = T7;
    T9 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1288F1569,x_1289F1566);
    BOXVAL(nF1568) = T9;
    T10 = CALL1(1,CHKREF(Ytail),x_1288F1569);
    x_1288F1570 = T10;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1288F1570,x_1289F1566);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1289F1566,CHKREF(lit_66),x_1288F1567);
  }
  T3 = YPtrue;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1291_27) {
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

FUNCODEDEF(fun_28) {
  P return_;
  P x_1290F1575;
  P x_1290F1574;
  P mF1573;
  P x_1290F1572;
  P x_1291F1571;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1291_27,1);
  x_1291F1571 = T1;
  FUNINIT(x_1291F1571, 1,return_);
  x_1290F1572 = FREEREF(0);
  mF1573 = YPfalse;
  mF1573 = BOXFAB(mF1573);
  T5 = CALL2(1,CHKREF(YisaQ),x_1290F1572,CHKREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1290F1572,CHKREF(lit_68),x_1291F1571);
    x_1290F1574 = T7;
    T9 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1290F1574,x_1291F1571);
    BOXVAL(mF1573) = T9;
    T10 = CALL1(1,CHKREF(Ytail),x_1290F1574);
    x_1290F1575 = T10;
    T11 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1290F1575,x_1291F1571);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1291F1571,CHKREF(lit_66),x_1290F1572);
  }
  T3 = YPtrue;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_29) {
  P resultF1580;
  P astF1579;
  P new_envF1578;
  P tmpF1577;
  P formF1576;
  P T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30;
  P T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  CALL1(1,CHKREF(YruntimeYnewline),CHKREF(YruntimeYout));
  T0 = BOXVAL(FREEREF(0));
  if (T0 != YPfalse) {
    CALL2(1,CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_55));
    T1 = CALL2(1,CHKREF(YruntimeYlist_handlers),CHKREF(YruntimeYLrestartG),CHKREF(YruntimeYout));
    BOXVAL(FREEREF(1)) = T1;
    T2 = BOXVAL(FREEREF(0)) = YPfalse;
  } else {
  }
  T5 = BOXVAL(FREEREF(2));
  T4 = CALL3(1,CHKREF(YtopYprompt_for_command_expression),T5,FREEREF(3),CHKREF(lit_56));
  formF1576 = T4;
  T8 = CALL2(1,CHKREF(YruntimeYE),formF1576,CHKREF(lit_57));
  tmpF1577 = T8;
  if (tmpF1577 != YPfalse) {
    T9 = tmpF1577;
  } else {
    T11 = CALL0(1,CHKREF(YruntimeYeof_object));
    T10 = CALL2(1,CHKREF(YruntimeYE),formF1576,T11);
    T9 = T10;
  }
  T7 = T9;
  if (T7 != YPfalse) {
    T12 = CALL1(1,FREEREF(4),YPfalse);
    T6 = T12;
  } else {
    T14 = CALL2(1,CHKREF(YruntimeYE),formF1576,CHKREF(lit_58));
    if (T14 != YPfalse) {
      T15 = CALL1(1,FREEREF(5),YPfalse);
      T13 = T15;
    } else {
      T17 = CALL2(1,CHKREF(YruntimeYE),formF1576,CHKREF(lit_59));
      if (T17 != YPfalse) {
        T18 = CALL1(1,FREEREF(6),YPfalse);
        T16 = T18;
      } else {
        T20 = CALL2(1,CHKREF(YruntimeYE),formF1576,CHKREF(lit_60));
        if (T20 != YPfalse) {
          T21 = CALL2(1,CHKREF(YruntimeYlist_handlers),CHKREF(YruntimeYLconditionG),CHKREF(YruntimeYout));
          T19 = T21;
        } else {
          T23 = CALL2(1,CHKREF(YruntimeYE),formF1576,CHKREF(lit_61));
          if (T23 != YPfalse) {
            T24 = CALL2(1,CHKREF(YruntimeYlist_handlers),CHKREF(YruntimeYLrestartG),CHKREF(YruntimeYout));
            T22 = T24;
          } else {
            T27 = FUNFAB(fun_26,1,formF1576);
            T26 = with_exit(T27);
            if (T26 != YPfalse) {
              T29 = BOXVAL(FREEREF(1));
              T30 = CALL1(1,CHKREF(YruntimeY2nd),formF1576);
              T28 = CALL2(1,CHKREF(YtopYdo_restart),T29,T30);
              T25 = T28;
            } else {
              T33 = FUNFAB(fun_28,1,formF1576);
              T32 = with_exit(T33);
              if (T32 != YPfalse) {
                T36 = CALL1(1,CHKREF(YruntimeY2nd),formF1576);
                T35 = CALL1(1,CHKREF(YastYruntime_environment),T36);
                new_envF1578 = T35;
                T37 = BOXVAL(FREEREF(2)) = new_envF1578;
                T34 = T37;
                T31 = T34;
              } else {
                if (YPtrue != YPfalse) {
                  T41 = BOXVAL(FREEREF(2));
                  T40 = CALL3(1,CHKREF(YastYobjectify),formF1576,T41,YPfalse);
                  astF1579 = T40;
                  T43 = CALL1(1,CHKREF(YastYast_evaluate),astF1579);
                  resultF1580 = T43;
                  T45 = BOXVAL(FREEREF(2));
                  T44 = CALLN(1,CHKREF(YtopYprint_result_expression),4,T45,FREEREF(3),CHKREF(lit_69),resultF1580);
                  T42 = T44;
                  T39 = T42;
                  T38 = T39;
                } else {
                  T38 = YPfalse;
                }
                T31 = T38;
              }
              T25 = T31;
            }
            T22 = T25;
          }
          T19 = T22;
        }
        T16 = T19;
      }
      T13 = T16;
    }
    T6 = T13;
  }
  T3 = T6;
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_30) {
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T2 = (P)YPpair(CHKREF(YLsimple_handler_infoG),Ynil);
  T4 = (P)YPpair(CHKREF(Yhandler_info_arguments),Ynil);
  T3 = (P)YPpair(CHKREF(Yhandler_info_message),T4);
  T7 = CALL1(1,CHKREF(Ylst),FREEREF(0));
  T6 = (P)YPpair(T7,Ynil);
  T5 = (P)YPpair(CHKREF(lit_54),T6);
  T1 = CALL3(1,CHKREF(YPisa),T2,T3,T5);
  T8 = fun_23;
  T9 = FUNFAB(fun_24,1,FREEREF(1));
  T10 = FUNFAB(fun_29,7,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(0),FREEREF(5),FREEREF(6),FREEREF(7));
  T0 = CALLN(1,YruntimeYPwith_monitor,5,CHKREF(YruntimeYLrestartG),T1,T8,T9,T10);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_31) {
  P continue_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(continue_, 0);
loop:
  T1 = fun_21;
  T2 = FUNFAB(fun_22,5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),continue_);
  T3 = FUNFAB(fun_30,8,FREEREF(0),continue_,FREEREF(4),FREEREF(5),FREEREF(3),FREEREF(2),FREEREF(6),FREEREF(1));
  T0 = CALLN(1,YruntimeYPwith_monitor,5,CHKREF(YruntimeYLconditionG),CHKREF(YruntimeYDdefault_handler_info),T1,T2,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_32) {
  P T1,T0;
LINK_STACK();
loop:
  T0 = FUNFAB(fun_31,7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6));
  with_exit(T0);
  goto loop;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_33) {
  P blow_;
  P loopF1581;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_32,8);
  loopF1581 = T1;
  FUNINIT(loopF1581, 8,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),blow_,loopF1581);
  T2 = CALL0(0,loopF1581);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_top_in_34) {
  P level_,top_,quit_,show_restartsQ_,ct_env_;
  P restartsF1582;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(level_, 0);
  ARG(top_, 1);
  ARG(quit_, 2);
  ARG(show_restartsQ_, 3);
  ARG(ct_env_, 4);
loop:
  show_restartsQ_ = BOXFAB(show_restartsQ_);
  ct_env_ = BOXFAB(ct_env_);
  restartsF1582 = YPfalse;
  restartsF1582 = BOXFAB(restartsF1582);
  T5 = FUNFAB(fun_33,6,level_,top_,quit_,ct_env_,show_restartsQ_,restartsF1582);
  T4 = with_exit(T5);
  T2 = T4;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_35) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_36) {
  P c_,r_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_37) {
  P top_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(top_, 0);
loop:
  T1 = CALL1(1,CHKREF(YastYruntime_environment),FREEREF(1));
  T0 = CALLN(1,CHKREF(YtopYtop_in),5,YPint((P)0),top_,FREEREF(0),YPfalse,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_38) {
  P T1,T0;
LINK_STACK();
loop:
  T0 = FUNFAB(fun_37,2,FREEREF(0),FREEREF(1));
  with_exit(T0);
  goto loop;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_39) {
  P loopF1583;
  P T2,T1,T0;
LINK_STACK();
loop:
  T1 = FUNSHELL(1,fun_loop_38,3);
  loopF1583 = T1;
  FUNINIT(loopF1583, 3,FREEREF(0),FREEREF(1),loopF1583);
  T2 = CALL0(0,loopF1583);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_40) {
  P quit_;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(quit_, 0);
loop:
  T2 = (P)YPpair(CHKREF(YLsimple_handler_infoG),Ynil);
  T4 = (P)YPpair(CHKREF(Yhandler_info_arguments),Ynil);
  T3 = (P)YPpair(CHKREF(Yhandler_info_message),T4);
  T7 = CALL0(1,CHKREF(Ylst));
  T6 = (P)YPpair(T7,Ynil);
  T5 = (P)YPpair(CHKREF(lit_70),T6);
  T1 = CALL3(1,CHKREF(YPisa),T2,T3,T5);
  T8 = fun_35;
  T9 = FUNFAB(fun_36,1,quit_);
  T10 = FUNFAB(fun_39,2,quit_,FREEREF(0));
  T0 = CALLN(1,YruntimeYPwith_monitor,5,CHKREF(YruntimeYLrestartG),T1,T8,T9,T10);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_top_41) {
  P modname_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = FUNFAB(fun_40,1,modname_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

P YtopY___main_0___() {
  P T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103;
  P T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87;
  P T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71;
  P T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55;
  P T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"parse-in");
  lit_1 = YPPsym((P)"s");
  lit_2 = YPPsym((P)"ct-env");
  T0 = YPsig(YPPlist(2,CHKREF(lit_1),CHKREF(lit_2)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_parse_in_0 = YPmet(FUNCODEREF(fun_parse_in_0),CHKREF(lit_0),T0,ENVNUL);
  T3 = BOUNDP(YtopYparse_in);
  if (T3 != YPfalse) {
    T2 = CHKREF(YtopYparse_in);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_parse_in_0;
  T1 = CALL2(1,CHKREF(YPdefine_method),T2,T4);
  YtopYparse_in = T1;
  lit_3 = YPPsym((P)"parse");
  lit_4 = YPPsym((P)"modname");
  T5 = YPsig(YPPlist(2,CHKREF(lit_1),CHKREF(lit_4)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLsymG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_parse_1 = YPmet(FUNCODEREF(fun_parse_1),CHKREF(lit_3),T5,ENVNUL);
  T8 = BOUNDP(YtopYparse);
  if (T8 != YPfalse) {
    T7 = CHKREF(YtopYparse);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_parse_1;
  T6 = CALL2(1,CHKREF(YPdefine_method),T7,T9);
  YtopYparse = T6;
  lit_5 = YPPsym((P)"str-parse-in");
  lit_6 = YPsb((P)"%=\n");
  T10 = YPsig(YPPlist(2,CHKREF(lit_1),CHKREF(lit_2)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_str_parse_in_2 = YPmet(FUNCODEREF(fun_str_parse_in_2),CHKREF(lit_5),T10,ENVNUL);
  T13 = BOUNDP(YtopYstr_parse_in);
  if (T13 != YPfalse) {
    T12 = CHKREF(YtopYstr_parse_in);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_str_parse_in_2;
  T11 = CALL2(1,CHKREF(YPdefine_method),T12,T14);
  YtopYstr_parse_in = T11;
  lit_7 = YPPsym((P)"str-parse");
  T15 = YPsig(YPPlist(2,CHKREF(lit_1),CHKREF(lit_4)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLsymG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_str_parse_3 = YPmet(FUNCODEREF(fun_str_parse_3),CHKREF(lit_7),T15,ENVNUL);
  T18 = BOUNDP(YtopYstr_parse);
  if (T18 != YPfalse) {
    T17 = CHKREF(YtopYstr_parse);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_str_parse_3;
  T16 = CALL2(1,CHKREF(YPdefine_method),T17,T19);
  YtopYstr_parse = T16;
  lit_8 = YPPsym((P)"eval-in");
  lit_9 = YPPsym((P)"x");
  T20 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_2)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_eval_in_4 = YPmet(FUNCODEREF(fun_eval_in_4),CHKREF(lit_8),T20,ENVNUL);
  T23 = BOUNDP(YtopYeval_in);
  if (T23 != YPfalse) {
    T22 = CHKREF(YtopYeval_in);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_eval_in_4;
  T21 = CALL2(1,CHKREF(YPdefine_method),T22,T24);
  YtopYeval_in = T21;
  lit_10 = YPPsym((P)"eval");
  T25 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_4)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLsymG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_eval_5 = YPmet(FUNCODEREF(fun_eval_5),CHKREF(lit_10),T25,ENVNUL);
  T28 = BOUNDP(YsyntaxYeval);
  if (T28 != YPfalse) {
    T27 = CHKREF(YsyntaxYeval);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_eval_5;
  T26 = CALL2(1,CHKREF(YPdefine_method),T27,T29);
  YsyntaxYeval = T26;
  lit_11 = YPPsym((P)"str-eval-in");
  T30 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_2)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_str_eval_in_6 = YPmet(FUNCODEREF(fun_str_eval_in_6),CHKREF(lit_11),T30,ENVNUL);
  T33 = BOUNDP(YtopYstr_eval_in);
  if (T33 != YPfalse) {
    T32 = CHKREF(YtopYstr_eval_in);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_str_eval_in_6;
  T31 = CALL2(1,CHKREF(YPdefine_method),T32,T34);
  YtopYstr_eval_in = T31;
  lit_12 = YPPsym((P)"str-eval");
  T35 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_4)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLsymG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_str_eval_7 = YPmet(FUNCODEREF(fun_str_eval_7),CHKREF(lit_12),T35,ENVNUL);
  T38 = BOUNDP(YtopYstr_eval);
  if (T38 != YPfalse) {
    T37 = CHKREF(YtopYstr_eval);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_str_eval_7;
  T36 = CALL2(1,CHKREF(YPdefine_method),T37,T39);
  YtopYstr_eval = T36;
  lit_13 = YPPsym((P)"read-file");
  lit_14 = YPPsym((P)"filename");
  lit_15 = YPPsym((P)"port");
  lit_16 = YPPsym((P)"loop");
  lit_17 = YPPsym((P)"forms");
  T42 = YPsig(YPPlist(1,CHKREF(lit_17)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_loop_8 = YPmet(FUNCODEREF(fun_loop_8),CHKREF(lit_16),T42,ENVNUL);
  T41 = YPsig(YPPlist(1,CHKREF(lit_15)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T41,ENVNUL);
  T40 = YPsig(YPPlist(1,CHKREF(lit_14)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_read_file_10 = YPmet(FUNCODEREF(fun_read_file_10),CHKREF(lit_13),T40,ENVNUL);
  T45 = BOUNDP(YtopYread_file);
  if (T45 != YPfalse) {
    T44 = CHKREF(YtopYread_file);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_read_file_10;
  T43 = CALL2(1,CHKREF(YPdefine_method),T44,T46);
  YtopYread_file = T43;
  lit_18 = YPPsym((P)"load-in");
  T47 = YPsig(YPPlist(2,CHKREF(lit_14),CHKREF(lit_2)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_load_in_11 = YPmet(FUNCODEREF(fun_load_in_11),CHKREF(lit_18),T47,ENVNUL);
  T50 = BOUNDP(YastYload_in);
  if (T50 != YPfalse) {
    T49 = CHKREF(YastYload_in);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_load_in_11;
  T48 = CALL2(1,CHKREF(YPdefine_method),T49,T51);
  YastYload_in = T48;
  lit_19 = YPPsym((P)"load");
  T52 = YPsig(YPPlist(2,CHKREF(lit_14),CHKREF(lit_4)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLsymG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_load_12 = YPmet(FUNCODEREF(fun_load_12),CHKREF(lit_19),T52,ENVNUL);
  T55 = BOUNDP(YtopYload);
  if (T55 != YPfalse) {
    T54 = CHKREF(YtopYload);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_load_12;
  T53 = CALL2(1,CHKREF(YPdefine_method),T54,T56);
  YtopYload = T53;
  lit_20 = YPPsym((P)"load-from");
  lit_21 = YPPsym((P)"name");
  T57 = YPsig(YPPlist(2,CHKREF(lit_21),CHKREF(lit_4)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLsymG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_load_from_13 = YPmet(FUNCODEREF(fun_load_from_13),CHKREF(lit_20),T57,ENVNUL);
  T60 = BOUNDP(YtopYload_from);
  if (T60 != YPfalse) {
    T59 = CHKREF(YtopYload_from);
  } else {
    T59 = YPfalse;
  }
  T61 = fun_load_from_13;
  T58 = CALL2(1,CHKREF(YPdefine_method),T59,T61);
  YtopYload_from = T58;
  lit_22 = YPPsym((P)"prompt-for-command-expression");
  lit_23 = YPPsym((P)"env");
  lit_24 = YPPsym((P)"level");
  lit_25 = YPPsym((P)"prompt");
  lit_26 = YPsb((P)"%s %=%s");
  T62 = YPsig(YPPlist(3,CHKREF(lit_23),CHKREF(lit_24),CHKREF(lit_25)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_prompt_for_command_expression_14 = YPmet(FUNCODEREF(fun_prompt_for_command_expression_14),CHKREF(lit_22),T62,ENVNUL);
  T65 = BOUNDP(YtopYprompt_for_command_expression);
  if (T65 != YPfalse) {
    T64 = CHKREF(YtopYprompt_for_command_expression);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_prompt_for_command_expression_14;
  T63 = CALL2(1,CHKREF(YPdefine_method),T64,T66);
  YtopYprompt_for_command_expression = T63;
  lit_27 = YPPsym((P)"print-result-expression");
  lit_28 = YPPsym((P)"label");
  lit_29 = YPPsym((P)"result");
  lit_30 = YPsb((P)"%s %=%s");
  T67 = YPsig(YPPlist(4,CHKREF(lit_23),CHKREF(lit_24),CHKREF(lit_28),CHKREF(lit_29)),YPPlist(4,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_print_result_expression_15 = YPmet(FUNCODEREF(fun_print_result_expression_15),CHKREF(lit_27),T67,ENVNUL);
  T70 = BOUNDP(YtopYprint_result_expression);
  if (T70 != YPfalse) {
    T69 = CHKREF(YtopYprint_result_expression);
  } else {
    T69 = YPfalse;
  }
  T71 = fun_print_result_expression_15;
  T68 = CALL2(1,CHKREF(YPdefine_method),T69,T71);
  YtopYprint_result_expression = T68;
  lit_31 = YPPsym((P)"do-stack-frames");
  lit_32 = YPPsym((P)"fun");
  T72 = YPsig(YPPlist(1,CHKREF(lit_32)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_do_stack_frames_16 = YPmet(FUNCODEREF(fun_do_stack_frames_16),CHKREF(lit_31),T72,ENVNUL);
  T75 = BOUNDP(YtopYdo_stack_frames);
  if (T75 != YPfalse) {
    T74 = CHKREF(YtopYdo_stack_frames);
  } else {
    T74 = YPfalse;
  }
  T76 = fun_do_stack_frames_16;
  T73 = CALL2(1,CHKREF(YPdefine_method),T74,T76);
  YtopYdo_stack_frames = T73;
  lit_33 = YPPsym((P)"backtrace");
  lit_34 = YPPsym((P)"f");
  lit_35 = YPPsym((P)"args");
  lit_36 = YPsb((P)"[%=] %= %=\n");
  T78 = YPsig(YPPlist(2,CHKREF(lit_34),CHKREF(lit_35)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T78,ENVNUL);
  T77 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_backtrace_18 = YPmet(FUNCODEREF(fun_backtrace_18),CHKREF(lit_33),T77,ENVNUL);
  T81 = BOUNDP(YtopYbacktrace);
  if (T81 != YPfalse) {
    T80 = CHKREF(YtopYbacktrace);
  } else {
    T80 = YPfalse;
  }
  T82 = fun_backtrace_18;
  T79 = CALL2(1,CHKREF(YPdefine_method),T80,T82);
  YtopYbacktrace = T79;
  lit_37 = YPPsym((P)"<keyboard-interrupt>");
  T84 = (P)YPpair(CHKREF(YruntimeYLconditionG),Ynil);
  T83 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_37),T84);
  YtopYLkeyboard_interruptG = T83;
  lit_38 = YPPsym((P)"keyboard-interrupt");
  T85 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  Ykeyboard_interrupt = YPmet(FUNCODEREF(Ykeyboard_interrupt),CHKREF(lit_38),T85,ENVNUL);
  T86 = Ykeyboard_interrupt;
  Ykeyboard_interrupt = T86;
  lit_39 = YPPsym((P)"do-restart");
  lit_40 = YPPsym((P)"restarts");
  lit_41 = YPPsym((P)"n");
  lit_42 = YPsb((P)"No restarts available.\n");
  lit_43 = YPsb((P)"No restart #%d.\n");
  T87 = YPsig(YPPlist(2,CHKREF(lit_40),CHKREF(lit_41)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  YtopYdo_restart = YPmet(FUNCODEREF(YtopYdo_restart),CHKREF(lit_39),T87,ENVNUL);
  T88 = YtopYdo_restart;
  YtopYdo_restart = T88;
  lit_44 = YPPsym((P)"top-in");
  lit_45 = YPPsym((P)"top");
  lit_46 = YPPsym((P)"quit");
  lit_47 = YPPsym((P)"show-restarts?");
  lit_48 = YPPsym((P)"blow");
  lit_49 = YPPsym((P)"continue");
  lit_50 = YPPsym((P)"c");
  lit_51 = YPPsym((P)"r");
  lit_52 = YPsb((P)"BREAK");
  lit_53 = YPsb((P)"ERROR: %s");
  lit_54 = YPsb((P)"Return to interpreter level %d");
  lit_55 = YPsb((P)"Type (restart N) to restart execution:\n");
  lit_56 = YPsb((P)"<= ");
  lit_57 = YPPlist(1,YPPsym((P)"quit"));
  lit_58 = YPPlist(1,YPPsym((P)"up"));
  lit_59 = YPPlist(1,YPPsym((P)"top"));
  lit_60 = YPPlist(1,YPPsym((P)"handlers"));
  lit_61 = YPPlist(1,YPPsym((P)"restarts"));
  lit_62 = YPPsym((P)"return");
  lit_63 = YPPsym((P)"x-1289");
  lit_64 = YPPsym((P)"msg");
  lit_65 = YPPsym((P)"restart");
  lit_66 = YPsb((P)"Match Pattern Failure");
  lit_67 = YPPsym((P)"x-1291");
  lit_68 = YPPsym((P)"in-mod");
  lit_69 = YPsb((P)"=> ");
  T102 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T102,ENVNUL);
  T101 = YPsig(YPPlist(2,CHKREF(lit_50),CHKREF(lit_51)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T101,ENVNUL);
  T100 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T100,ENVNUL);
  T99 = YPsig(YPPlist(2,CHKREF(lit_50),CHKREF(lit_51)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T99,ENVNUL);
  T98 = YPsig(YPPlist(2,CHKREF(lit_64),CHKREF(lit_35)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1289_25 = YPmet(FUNCODEREF(fun_x_1289_25),CHKREF(lit_63),T98,ENVNUL);
  T97 = YPsig(YPPlist(1,CHKREF(lit_62)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T97,ENVNUL);
  T96 = YPsig(YPPlist(2,CHKREF(lit_64),CHKREF(lit_35)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1291_27 = YPmet(FUNCODEREF(fun_x_1291_27),CHKREF(lit_67),T96,ENVNUL);
  T95 = YPsig(YPPlist(1,CHKREF(lit_62)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T95,ENVNUL);
  T94 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T94,ENVNUL);
  T93 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T93,ENVNUL);
  T92 = YPsig(YPPlist(1,CHKREF(lit_49)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T92,ENVNUL);
  T91 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_loop_32 = YPmet(FUNCODEREF(fun_loop_32),CHKREF(lit_16),T91,ENVNUL);
  T90 = YPsig(YPPlist(1,CHKREF(lit_48)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T90,ENVNUL);
  T89 = YPsig(YPPlist(5,CHKREF(lit_24),CHKREF(lit_45),CHKREF(lit_46),CHKREF(lit_47),CHKREF(lit_2)),YPPlist(5,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)5),CHKREF(YLanyG),Ynil);
  fun_top_in_34 = YPmet(FUNCODEREF(fun_top_in_34),CHKREF(lit_44),T89,ENVNUL);
  T105 = BOUNDP(YtopYtop_in);
  if (T105 != YPfalse) {
    T104 = CHKREF(YtopYtop_in);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_top_in_34;
  T103 = CALL2(1,CHKREF(YPdefine_method),T104,T106);
  YtopYtop_in = T103;
  lit_70 = YPsb((P)"Exit the top-level interpreter");
  T113 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T113,ENVNUL);
  T112 = YPsig(YPPlist(2,CHKREF(lit_50),CHKREF(lit_51)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T112,ENVNUL);
  T111 = YPsig(YPPlist(1,CHKREF(lit_45)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T111,ENVNUL);
  T110 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_loop_38 = YPmet(FUNCODEREF(fun_loop_38),CHKREF(lit_16),T110,ENVNUL);
  T109 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T109,ENVNUL);
  T108 = YPsig(YPPlist(1,CHKREF(lit_46)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T108,ENVNUL);
  T107 = YPsig(YPPlist(1,CHKREF(lit_4)),YPPlist(1,CHKREF(YLsymG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_top_41 = YPmet(FUNCODEREF(fun_top_41),CHKREF(lit_45),T107,ENVNUL);
  T116 = BOUNDP(YtopYtop);
  if (T116 != YPfalse) {
    T115 = CHKREF(YtopYtop);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_top_41;
  T114 = CALL2(1,CHKREF(YPdefine_method),T115,T117);
  YtopYtop = T114;
  T118 = YPfalse;
  return T118;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_runtime;
extern MODULE_INFO module_info_read;
extern MODULE_INFO module_info_write;
extern MODULE_INFO module_info_syntax;
extern MODULE_INFO module_info_ast;
extern MODULE_INFO module_info_ast_eval;
extern MODULE_INFO module_info_protoSsystem;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {&module_info_macros},
  {&module_info_runtime},
  {&module_info_read},
  {&module_info_write},
  {&module_info_syntax},
  {&module_info_ast},
  {&module_info_ast_eval},
  {&module_info_protoSsystem},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"current-gc-state", &module_info_runtime, "current-gc-state"},
  {"odd?", &module_info_runtime, "odd?"},
  {"$proto-boot-module-name", &module_info_ast, "$proto-boot-module-name"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"binding-name", &module_info_ast, "binding-name"},
  {"and", &module_info_macros, "and"},
  {"%slot", &module_info_boot, "%slot"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"%selt", &module_info_boot, "%selt"},
  {"sexpr-make-begin", &module_info_syntax, "sexpr-make-begin"},
  {"<log>", &module_info_boot, "<log>"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"sexpr-loc-bound-bodies", &module_info_syntax, "sexpr-loc-bound-bodies"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"<local-binding>", &module_info_ast, "<local-binding>"},
  {"%im", &module_info_boot, "%im"},
  {"call-with-string-input-port", &module_info_runtime, "call-with-string-input-port"},
  {"binding-info-setter", &module_info_ast, "binding-info-setter"},
  {"%iu", &module_info_boot, "%iu"},
  {"fabs", &module_info_runtime, "fabs"},
  {"module-syntax-environment", &module_info_ast, "module-syntax-environment"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"ct", &module_info_boot, "ct"},
  {"$sexpr-let-tag", &module_info_syntax, "$sexpr-let-tag"},
  {"pos", &module_info_runtime, "pos"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"neg", &module_info_runtime, "neg"},
  {"*exe-extension*", &module_info_protoSsystem, "*exe-extension*"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"monitor-main-thunk", &module_info_ast, "monitor-main-thunk"},
  {"push", &module_info_runtime, "push"},
  {"function-signature", &module_info_ast, "function-signature"},
  {"*proto-root*", &module_info_protoSsystem, "*proto-root*"},
  {"as-uppercase", &module_info_runtime, "as-uppercase"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"from-below", &module_info_runtime, "from-below"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"signature-value-setter", &module_info_ast, "signature-value-setter"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"close-input-port", &module_info_runtime, "close-input-port"},
  {"sexpr-variable?", &module_info_syntax, "sexpr-variable?"},
  {"%i<", &module_info_boot, "%i<"},
  {"$sexpr-begin-tag", &module_info_syntax, "$sexpr-begin-tag"},
  {"<locals>", &module_info_ast, "<locals>"},
  {"not", &module_info_boot, "not"},
  {"~=", &module_info_runtime, "~="},
  {"slot-value", &module_info_boot, "slot-value"},
  {"<any>", &module_info_boot, "<any>"},
  {"locals-bindings", &module_info_ast, "locals-bindings"},
  {"from-below-by", &module_info_runtime, "from-below-by"},
  {"components-to-pathname", &module_info_protoSsystem, "components-to-pathname"},
  {"write", &module_info_write, "write"},
  {"parent-directory", &module_info_protoSsystem, "parent-directory"},
  {"report-undefined-global-bindings", &module_info_ast, "report-undefined-global-bindings"},
  {"components-parent-directory", &module_info_protoSsystem, "components-parent-directory"},
  {"%i+", &module_info_boot, "%i+"},
  {"do3", &module_info_runtime, "do3"},
  {"reference-called-function?-setter", &module_info_ast, "reference-called-function?-setter"},
  {"<union>", &module_info_boot, "<union>"},
  {"assq", &module_info_runtime, "assq"},
  {"%snul", &module_info_boot, "%snul"},
  {"c-filename", &module_info_protoSsystem, "c-filename"},
  {"module-target-environment", &module_info_ast, "module-target-environment"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"write-string", &module_info_runtime, "write-string"},
  {"let", &module_info_boot, "let"},
  {"binding-global-box-setter", &module_info_ast, "binding-global-box-setter"},
  {"pushf", &module_info_macros, "pushf"},
  {"objectify", &module_info_ast, "objectify"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"case-insensitive-string-equal", &module_info_runtime, "case-insensitive-string-equal"},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_syntax, "sexpr-unwind-protect-cleanup-forms"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"pop-last!", &module_info_runtime, "pop-last!"},
  {"sexpr-assignment-variable", &module_info_syntax, "sexpr-assignment-variable"},
  {"$sexpr-set-tag", &module_info_syntax, "$sexpr-set-tag"},
  {"module-exports", &module_info_ast, "module-exports"},
  {"sub-setter", &module_info_runtime, "sub-setter"},
  {"function-body-setter", &module_info_ast, "function-body-setter"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"loc", &module_info_boot, "loc"},
  {"to-digit", &module_info_runtime, "to-digit"},
  {"environment-uses-modules", &module_info_ast, "environment-uses-modules"},
  {"signature-specs", &module_info_ast, "signature-specs"},
  {"assignment-reference", &module_info_ast, "assignment-reference"},
  {"file-mtime", &module_info_protoSsystem, "file-mtime"},
  {"sexpr-syntax-if-pattern", &module_info_syntax, "sexpr-syntax-if-pattern"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"pathname-to-components", &module_info_protoSsystem, "pathname-to-components"},
  {"<file-port>", &module_info_runtime, "<file-port>"},
  {"function-value", &module_info_ast, "function-value"},
  {"locals-functions-setter", &module_info_ast, "locals-functions-setter"},
  {"function-signature-setter", &module_info_ast, "function-signature-setter"},
  {"apply", &module_info_macros, "apply"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"function-nary?", &module_info_ast, "function-nary?"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"sexpr-sequence->begin", &module_info_syntax, "sexpr-sequence->begin"},
  {"write-to-string", &module_info_write, "write-to-string"},
  {"cat", &module_info_macros, "cat"},
  {"$sexpr-quasiquote-tag", &module_info_syntax, "$sexpr-quasiquote-tag"},
  {"<input-port>", &module_info_runtime, "<input-port>"},
  {"dg", &module_info_boot, "dg"},
  {"sexpr-function-body", &module_info_syntax, "sexpr-function-body"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"signature-bindings", &module_info_ast, "signature-bindings"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"next-method", &module_info_macros, "next-method"},
  {"read-from-string", &module_info_read, "read-from-string"},
  {"ascii-limit", &module_info_runtime, "ascii-limit"},
  {"unwind-protect-protected-thunk", &module_info_ast, "unwind-protect-protected-thunk"},
  {"$sexpr-isa-tag", &module_info_syntax, "$sexpr-isa-tag"},
  {"fun", &module_info_boot, "fun"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"empty?", &module_info_macros, "empty?"},
  {"buf", &module_info_runtime, "buf"},
  {"sexpr-definition-variable", &module_info_syntax, "sexpr-definition-variable"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"port-index", &module_info_runtime, "port-index"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"read", &module_info_runtime, "read"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"ceiling/", &module_info_runtime, "ceiling/"},
  {"sexpr-bind-pattern-variables", &module_info_syntax, "sexpr-bind-pattern-variables"},
  {"format", &module_info_runtime, "format"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"%iv", &module_info_boot, "%iv"},
  {"alternative-condition", &module_info_ast, "alternative-condition"},
  {"<ast-generic>", &module_info_ast, "<ast-generic>"},
  {"sexpr-text-of-quotation", &module_info_syntax, "sexpr-text-of-quotation"},
  {"rev!", &module_info_runtime, "rev!"},
  {"last", &module_info_runtime, "last"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"floor/", &module_info_runtime, "floor/"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"find-environment-module", &module_info_ast, "find-environment-module"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"<ast-function>", &module_info_ast, "<ast-function>"},
  {"tail", &module_info_boot, "tail"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"locals-bindings-setter", &module_info_ast, "locals-bindings-setter"},
  {"%ft", &module_info_boot, "%ft"},
  {"locals-body", &module_info_ast, "locals-body"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"sexpr-signature-value", &module_info_syntax, "sexpr-signature-value"},
  {"lsh", &module_info_runtime, "lsh"},
  {"<fix-let>", &module_info_ast, "<fix-let>"},
  {"gensym", &module_info_macros, "gensym"},
  {"<local-reference>", &module_info_ast, "<local-reference>"},
  {"ash", &module_info_runtime, "ash"},
  {"application-known?", &module_info_ast, "application-known?"},
  {"num-to-str", &module_info_runtime, "num-to-str"},
  {"monitor-test", &module_info_ast, "monitor-test"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"flo-bits", &module_info_runtime, "flo-bits"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"case-insensitive-string-hash", &module_info_runtime, "case-insensitive-string-hash"},
  {"round/", &module_info_runtime, "round/"},
  {"%su", &module_info_boot, "%su"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"<string-output-port>", &module_info_runtime, "<string-output-port>"},
  {"%i?", &module_info_boot, "%i?"},
  {"rev", &module_info_runtime, "rev"},
  {"set-module-environments", &module_info_ast, "set-module-environments"},
  {"use", &module_info_boot, "use"},
  {"load-in", &module_info_ast, "load-in"},
  {"@olen", &module_info_boot, "@olen"},
  {"init-ast", &module_info_ast, "init-ast"},
  {"assoc-value", &module_info_runtime, "assoc-value"},
  {"<unwind-protect>", &module_info_ast, "<unwind-protect>"},
  {"abs", &module_info_runtime, "abs"},
  {"sexpr-function-definition-value", &module_info_syntax, "sexpr-function-definition-value"},
  {"bound?", &module_info_boot, "bound?"},
  {"$char-long-names", &module_info_read, "$char-long-names"},
  {"<port>", &module_info_runtime, "<port>"},
  {"%velt", &module_info_boot, "%velt"},
  {"collected", &module_info_macros, "collected"},
  {"for", &module_info_macros, "for"},
  {"do2", &module_info_runtime, "do2"},
  {"do-module-loader-modules", &module_info_ast, "do-module-loader-modules"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"nil", &module_info_boot, "nil"},
  {"push-last!", &module_info_runtime, "push-last!"},
  {"*", &module_info_runtime, "*"},
  {"sexpr-make-getter", &module_info_syntax, "sexpr-make-getter"},
  {"<global-box>", &module_info_ast, "<global-box>"},
  {"<output-port>", &module_info_runtime, "<output-port>"},
  {"reference-frame-offset", &module_info_ast, "reference-frame-offset"},
  {"sexpr-if-then", &module_info_syntax, "sexpr-if-then"},
  {"truncate/", &module_info_runtime, "truncate/"},
  {"<computed-program>", &module_info_ast, "<computed-program>"},
  {"sexpr-let->combination", &module_info_syntax, "sexpr-let->combination"},
  {"<real-reference>", &module_info_ast, "<real-reference>"},
  {"case", &module_info_macros, "case"},
  {"<list>", &module_info_runtime, "<list>"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"max", &module_info_runtime, "max"},
  {"<error>", &module_info_runtime, "<error>"},
  {"%i^", &module_info_boot, "%i^"},
  {"%ib", &module_info_boot, "%ib"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"compose", &module_info_runtime, "compose"},
  {"binding-dynamic-extent?-setter", &module_info_ast, "binding-dynamic-extent?-setter"},
  {"sexpr-iterate->loc", &module_info_syntax, "sexpr-iterate->loc"},
  {"export", &module_info_boot, "export"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"open-output-file", &module_info_runtime, "open-output-file"},
  {"app-args", &module_info_runtime, "app-args"},
  {"sexpr-block-name", &module_info_syntax, "sexpr-block-name"},
  {"write-char", &module_info_runtime, "write-char"},
  {"default", &module_info_runtime, "default"},
  {"signature-names", &module_info_ast, "signature-names"},
  {"address-of", &module_info_runtime, "address-of"},
  {"%f+", &module_info_boot, "%f+"},
  {"port-contents", &module_info_runtime, "port-contents"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"sexpr-isa-parents", &module_info_syntax, "sexpr-isa-parents"},
  {"floor", &module_info_runtime, "floor"},
  {"call-with-output-file", &module_info_runtime, "call-with-output-file"},
  {"cat2", &module_info_runtime, "cat2"},
  {"<module-loader>", &module_info_ast, "<module-loader>"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"sexpr-unwind-protect-protected-form", &module_info_syntax, "sexpr-unwind-protect-protected-form"},
  {"function-body", &module_info_ast, "function-body"},
  {"modulo", &module_info_runtime, "modulo"},
  {"collecting", &module_info_macros, "collecting"},
  {"<string-input-port>", &module_info_runtime, "<string-input-port>"},
  {"cat!", &module_info_runtime, "cat!"},
  {"*path-separator*", &module_info_protoSsystem, "*path-separator*"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"sexpr-make-setter-name", &module_info_syntax, "sexpr-make-setter-name"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"components-basename", &module_info_protoSsystem, "components-basename"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"sexpr-assignment-value", &module_info_syntax, "sexpr-assignment-value"},
  {"fab-p2c-module", &module_info_ast, "fab-p2c-module"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"%bb", &module_info_boot, "%bb"},
  {"class-name", &module_info_boot, "class-name"},
  {"when", &module_info_macros, "when"},
  {"<restart>", &module_info_runtime, "<restart>"},
  {"sexpr-if-else", &module_info_syntax, "sexpr-if-else"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"%vec", &module_info_boot, "%vec"},
  {"<assocs>", &module_info_runtime, "<assocs>"},
  {"isa?", &module_info_boot, "isa?"},
  {"$sexpr-define-generic-tag", &module_info_syntax, "$sexpr-define-generic-tag"},
  {"<constant>", &module_info_ast, "<constant>"},
  {"empty", &module_info_runtime, "empty"},
  {"assqn", &module_info_runtime, "assqn"},
  {"$sexpr-locals-tag", &module_info_syntax, "$sexpr-locals-tag"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"add!", &module_info_runtime, "add!"},
  {"+", &module_info_runtime, "+"},
  {"<type>", &module_info_boot, "<type>"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"<class>", &module_info_boot, "<class>"},
  {"install-initial-bindings", &module_info_ast, "install-initial-bindings"},
  {"<sequential>", &module_info_ast, "<sequential>"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"sexpr-variable-name", &module_info_syntax, "sexpr-variable-name"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"<range>", &module_info_runtime, "<range>"},
  {"dp", &module_info_boot, "dp"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"remainder", &module_info_runtime, "remainder"},
  {"add", &module_info_runtime, "add"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"find-key", &module_info_runtime, "find-key"},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"elt", &module_info_runtime, "elt"},
  {"reduce+", &module_info_runtime, "reduce+"},
  {"curry", &module_info_runtime, "curry"},
  {"sexpr-operands", &module_info_syntax, "sexpr-operands"},
  {"$sexpr-define-method-tag", &module_info_syntax, "$sexpr-define-method-tag"},
  {"display", &module_info_write, "display"},
  {"binding-info", &module_info_ast, "binding-info"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"eval", &module_info_syntax, "eval"},
  {"<=", &module_info_runtime, "<="},
  {"binding-value-setter", &module_info_ast, "binding-value-setter"},
  {"elt-setter", &module_info_runtime, "elt-setter"},
  {"sexpr-define-class?", &module_info_syntax, "sexpr-define-class?"},
  {"logior", &module_info_runtime, "logior"},
  {"%pair", &module_info_boot, "%pair"},
  {"lowercase?", &module_info_runtime, "lowercase?"},
  {"$proto-runtime-module-name", &module_info_ast, "$proto-runtime-module-name"},
  {"=", &module_info_runtime, "="},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"nul?", &module_info_runtime, "nul?"},
  {"hierarchical-components", &module_info_protoSsystem, "hierarchical-components"},
  {"<runtime-reference>", &module_info_ast, "<runtime-reference>"},
  {"type-error", &module_info_boot, "type-error"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"remove-modules-by-name!", &module_info_ast, "remove-modules-by-name!"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"<file-input-port>", &module_info_runtime, "<file-input-port>"},
  {"<tab>", &module_info_runtime, "<tab>"},
  {"sexpr-variable-type", &module_info_syntax, "sexpr-variable-type"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"function-binding", &module_info_ast, "function-binding"},
  {"constant-value", &module_info_ast, "constant-value"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"assocs-test", &module_info_runtime, "assocs-test"},
  {"from-to-by", &module_info_runtime, "from-to-by"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"map", &module_info_macros, "map"},
  {"binding-dynamic-extent?", &module_info_ast, "binding-dynamic-extent?"},
  {"eof-object", &module_info_runtime, "eof-object"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"<compile-time>", &module_info_ast, "<compile-time>"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"$sexpr-monitor-tag", &module_info_syntax, "$sexpr-monitor-tag"},
  {"pop", &module_info_runtime, "pop"},
  {"binding-type-setter", &module_info_ast, "binding-type-setter"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"map2", &module_info_runtime, "map2"},
  {"pos?", &module_info_runtime, "pos?"},
  {"bind-exit-main-fun", &module_info_ast, "bind-exit-main-fun"},
  {"logxor", &module_info_runtime, "logxor"},
  {"<ast-macro-definition>", &module_info_ast, "<ast-macro-definition>"},
  {"%cu", &module_info_boot, "%cu"},
  {"sexpr-function-signature", &module_info_syntax, "sexpr-function-signature"},
  {"<runtime-assignment>", &module_info_ast, "<runtime-assignment>"},
  {"$sexpr-define-class-tag", &module_info_syntax, "$sexpr-define-class-tag"},
  {"from-to", &module_info_runtime, "from-to"},
  {"file-exists?", &module_info_protoSsystem, "file-exists?"},
  {"signature-specs-setter", &module_info_ast, "signature-specs-setter"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"inc", &module_info_macros, "inc"},
  {"<binding>", &module_info_ast, "<binding>"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"%sb", &module_info_boot, "%sb"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"copy-state", &module_info_runtime, "copy-state"},
  {"<ast-method>", &module_info_ast, "<ast-method>"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"<bind-exit>", &module_info_ast, "<bind-exit>"},
  {"signature-nary?", &module_info_ast, "signature-nary?"},
  {"%f-", &module_info_boot, "%f-"},
  {"from", &module_info_runtime, "from"},
  {"<str>", &module_info_boot, "<str>"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"obj-filename", &module_info_protoSsystem, "obj-filename"},
  {"sexpr-make-anonymous-method", &module_info_syntax, "sexpr-make-anonymous-method"},
  {"==", &module_info_macros, "=="},
  {"<definition>", &module_info_ast, "<definition>"},
  {"$sexpr-bind-exit-tag", &module_info_syntax, "$sexpr-bind-exit-tag"},
  {"dc", &module_info_boot, "dc"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"tup", &module_info_macros, "tup"},
  {"reference-binding", &module_info_ast, "reference-binding"},
  {"logand", &module_info_runtime, "logand"},
  {"locative-value", &module_info_runtime, "locative-value"},
  {"sexpr-syntax-if-value", &module_info_syntax, "sexpr-syntax-if-value"},
  {"sexpr-forward-primitive?", &module_info_syntax, "sexpr-forward-primitive?"},
  {"false-or", &module_info_runtime, "false-or"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"function-debug-name-setter", &module_info_ast, "function-debug-name-setter"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"sexpr-unquote?", &module_info_syntax, "sexpr-unquote?"},
  {"*c-extension*", &module_info_protoSsystem, "*c-extension*"},
  {"os-binding-value", &module_info_protoSsystem, "os-binding-value"},
  {"del-keys", &module_info_runtime, "del-keys"},
  {"program-register", &module_info_ast, "program-register"},
  {"probe-directory", &module_info_protoSsystem, "probe-directory"},
  {"reduce", &module_info_runtime, "reduce"},
  {"str", &module_info_runtime, "str"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"table-shrink-threshold", &module_info_runtime, "table-shrink-threshold"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"type-class", &module_info_boot, "type-class"},
  {"$sexpr-define-syntax-tag", &module_info_syntax, "$sexpr-define-syntax-tag"},
  {"<regular-application>", &module_info_ast, "<regular-application>"},
  {"<module>", &module_info_ast, "<module>"},
  {"<incongruent-method-error>", &module_info_runtime, "<incongruent-method-error>"},
  {"file-type", &module_info_protoSsystem, "file-type"},
  {"format-to-string", &module_info_runtime, "format-to-string"},
  {"proto-filename", &module_info_protoSsystem, "proto-filename"},
  {"lognot", &module_info_runtime, "lognot"},
  {"module-name", &module_info_ast, "module-name"},
  {"sexpr-syntax-if-else", &module_info_syntax, "sexpr-syntax-if-else"},
  {"popf", &module_info_macros, "popf"},
  {"binding-kind", &module_info_ast, "binding-kind"},
  {"lst", &module_info_boot, "lst"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"1st", &module_info_runtime, "1st"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"as", &module_info_runtime, "as"},
  {"ast-define-binding", &module_info_ast, "ast-define-binding"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"%slen", &module_info_boot, "%slen"},
  {"from-above-by", &module_info_runtime, "from-above-by"},
  {"%i*", &module_info_boot, "%i*"},
  {"always", &module_info_runtime, "always"},
  {"%f<", &module_info_boot, "%f<"},
  {"t<", &module_info_runtime, "t<"},
  {"application-known?-setter", &module_info_ast, "application-known?-setter"},
  {"ceiling", &module_info_runtime, "ceiling"},
  {"<bound?>", &module_info_ast, "<bound?>"},
  {"binding-dotted?-setter", &module_info_ast, "binding-dotted?-setter"},
  {"<passive-program>", &module_info_ast, "<passive-program>"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"<met>", &module_info_boot, "<met>"},
  {"out", &module_info_runtime, "out"},
  {"%str", &module_info_boot, "%str"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"$sexpr-if-tag", &module_info_syntax, "$sexpr-if-tag"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"do", &module_info_runtime, "do"},
  {"binding-module-name", &module_info_ast, "binding-module-name"},
  {"newline", &module_info_runtime, "newline"},
  {"reference-frame-number", &module_info_ast, "reference-frame-number"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"fab", &module_info_runtime, "fab"},
  {"sexpr-make-macro-function", &module_info_syntax, "sexpr-make-macro-function"},
  {"$sexpr-quote-tag", &module_info_syntax, "$sexpr-quote-tag"},
  {"init-environment-for-eval", &module_info_ast, "init-environment-for-eval"},
  {"table-growth-factor", &module_info_runtime, "table-growth-factor"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"force-output", &module_info_runtime, "force-output"},
  {"free-implemented-foreign-bindings", &module_info_ast, "free-implemented-foreign-bindings"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"application-binding", &module_info_ast, "application-binding"},
  {"char-ready?", &module_info_runtime, "char-ready?"},
  {"add-src-path", &module_info_protoSsystem, "add-src-path"},
  {"application-arguments", &module_info_ast, "application-arguments"},
  {"<ast-signature>", &module_info_ast, "<ast-signature>"},
  {"<reference>", &module_info_ast, "<reference>"},
  {"<step>", &module_info_runtime, "<step>"},
  {"%lb", &module_info_boot, "%lb"},
  {"char->ascii", &module_info_runtime, "char->ascii"},
  {"program-register-setter", &module_info_ast, "program-register-setter"},
  {"label-components", &module_info_protoSsystem, "label-components"},
  {"binding-mutable?", &module_info_ast, "binding-mutable?"},
  {"<raw-constant>", &module_info_ast, "<raw-constant>"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"build-condition-interactively", &module_info_runtime, "build-condition-interactively"},
  {"sexpr-syntax-if-then", &module_info_syntax, "sexpr-syntax-if-then"},
  {"uppercase?", &module_info_runtime, "uppercase?"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"$permanent-hash-state", &module_info_runtime, "$permanent-hash-state"},
  {"isa", &module_info_boot, "isa"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"fix-let-bindings-setter", &module_info_ast, "fix-let-bindings-setter"},
  {"$sexpr-iterate-tag", &module_info_syntax, "$sexpr-iterate-tag"},
  {"%c<", &module_info_boot, "%c<"},
  {"del-key", &module_info_runtime, "del-key"},
  {"object-class", &module_info_boot, "object-class"},
  {"%with-monitor", &module_info_runtime, "%with-monitor"},
  {"lab", &module_info_boot, "lab"},
  {"function-bindings", &module_info_ast, "function-bindings"},
  {"select", &module_info_macros, "select"},
  {"t=", &module_info_runtime, "t="},
  {"@+", &module_info_boot, "@+"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"do-static-global-bindings", &module_info_ast, "do-static-global-bindings"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"zero?", &module_info_runtime, "zero?"},
  {"<global-reference>", &module_info_ast, "<global-reference>"},
  {"nxt-state", &module_info_runtime, "nxt-state"},
  {"fix-let-arguments-setter", &module_info_ast, "fix-let-arguments-setter"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"<ast-primitive-definition>", &module_info_ast, "<ast-primitive-definition>"},
  {"module-name-to-relpath", &module_info_ast, "module-name-to-relpath"},
  {"call-with-input-file", &module_info_runtime, "call-with-input-file"},
  {"locals-body-setter", &module_info_ast, "locals-body-setter"},
  {"len-setter", &module_info_runtime, "len-setter"},
  {"<static-global-environment>", &module_info_ast, "<static-global-environment>"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"del-dups", &module_info_runtime, "del-dups"},
  {"pick", &module_info_runtime, "pick"},
  {"%fb", &module_info_boot, "%fb"},
  {"os-name", &module_info_protoSsystem, "os-name"},
  {"global-box-value-setter", &module_info_ast, "global-box-value-setter"},
  {"do-keyed", &module_info_runtime, "do-keyed"},
  {"ascii-whitespaces", &module_info_runtime, "ascii-whitespaces"},
  {"map-keyed", &module_info_runtime, "map-keyed"},
  {"monitor-info", &module_info_ast, "monitor-info"},
  {"sexpr-isa-init-values", &module_info_syntax, "sexpr-isa-init-values"},
  {"%cb", &module_info_boot, "%cb"},
  {"pair", &module_info_macros, "pair"},
  {"now-key", &module_info_runtime, "now-key"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"fin", &module_info_boot, "fin"},
  {"alphabetic?", &module_info_runtime, "alphabetic?"},
  {"sexpr-expand-backquote", &module_info_syntax, "sexpr-expand-backquote"},
  {"locals-functions", &module_info_ast, "locals-functions"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"%f/", &module_info_boot, "%f/"},
  {"sexpr-definition-value", &module_info_syntax, "sexpr-definition-value"},
  {"<seq>", &module_info_boot, "<seq>"},
  {">=", &module_info_runtime, ">="},
  {"sequentialize", &module_info_ast, "sequentialize"},
  {"signature-nary?-setter", &module_info_ast, "signature-nary?-setter"},
  {"-", &module_info_runtime, "-"},
  {"<programs>", &module_info_ast, "<programs>"},
  {"probe-module", &module_info_ast, "probe-module"},
  {"$sexpr-unwind-protect-tag", &module_info_syntax, "$sexpr-unwind-protect-tag"},
  {"t+", &module_info_runtime, "t+"},
  {"sexpr-unquote-splicing?", &module_info_syntax, "sexpr-unquote-splicing?"},
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
  {"dss", &module_info_boot, "dss"},
  {"monitor-handler", &module_info_ast, "monitor-handler"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"set", &module_info_boot, "set"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"<file-output-port>", &module_info_runtime, "<file-output-port>"},
  {"binding-type", &module_info_ast, "binding-type"},
  {"peek-char", &module_info_runtime, "peek-char"},
  {"sexpr-loc-bound-names", &module_info_syntax, "sexpr-loc-bound-names"},
  {"%i&", &module_info_boot, "%i&"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {">", &module_info_runtime, ">"},
  {"<col>", &module_info_boot, "<col>"},
  {"all?", &module_info_runtime, "all?"},
  {"2nd", &module_info_runtime, "2nd"},
  {"open-input-file", &module_info_runtime, "open-input-file"},
  {"def-programs", &module_info_ast, "def-programs"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"<string-port>", &module_info_runtime, "<string-port>"},
  {"$sexpr-macro-expand-tag", &module_info_syntax, "$sexpr-macro-expand-tag"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"~==", &module_info_runtime, "~=="},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"round", &module_info_runtime, "round"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"from-by", &module_info_runtime, "from-by"},
  {"df", &module_info_boot, "df"},
  {"describe-handler", &module_info_runtime, "describe-handler"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"collect", &module_info_macros, "collect"},
  {"call-with-string-output-port", &module_info_runtime, "call-with-string-output-port"},
  {"logbit?", &module_info_runtime, "logbit?"},
  {"sexpr-syntax-definition-value", &module_info_syntax, "sexpr-syntax-definition-value"},
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
  {"fin-state?", &module_info_runtime, "fin-state?"},
  {"dec", &module_info_macros, "dec"},
  {"first-then", &module_info_runtime, "first-then"},
  {"sexpr-isa-slot-inits", &module_info_syntax, "sexpr-isa-slot-inits"},
  {"fix-let-bindings", &module_info_ast, "fix-let-bindings"},
  {"del", &module_info_runtime, "del"},
  {"writeln", &module_info_write, "writeln"},
  {"module-binding", &module_info_ast, "module-binding"},
  {"%it/", &module_info_boot, "%it/"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"list", &module_info_runtime, "list"},
  {"$sexpr-method-tag", &module_info_syntax, "$sexpr-method-tag"},
  {"type-object", &module_info_boot, "type-object"},
  {"alternative-alternant", &module_info_ast, "alternative-alternant"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"runtime-environment", &module_info_ast, "runtime-environment"},
  {"%fu", &module_info_boot, "%fu"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"signature-value", &module_info_ast, "signature-value"},
  {"sexpr-monitor-expand", &module_info_syntax, "sexpr-monitor-expand"},
  {"build-condition-for-handler-interactively", &module_info_runtime, "build-condition-for-handler-interactively"},
  {"do-named-static-global-bindings", &module_info_ast, "do-named-static-global-bindings"},
  {"%raw", &module_info_boot, "%raw"},
  {"ini-state", &module_info_runtime, "ini-state"},
  {"dlet", &module_info_macros, "dlet"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"%i-", &module_info_boot, "%i-"},
  {"%untag", &module_info_boot, "%untag"},
  {"exe-filename", &module_info_protoSsystem, "exe-filename"},
  {"mif", &module_info_boot, "mif"},
  {"or", &module_info_macros, "or"},
  {"def-list", &module_info_ast, "def-list"},
  {"sexpr-slot-variable", &module_info_syntax, "sexpr-slot-variable"},
  {"fix-let-arguments", &module_info_ast, "fix-let-arguments"},
  {"global-box-value", &module_info_ast, "global-box-value"},
  {"%isa", &module_info_boot, "%isa"},
  {"alternative-consequent", &module_info_ast, "alternative-consequent"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"from-above", &module_info_runtime, "from-above"},
  {"add-build-path", &module_info_protoSsystem, "add-build-path"},
  {"invoke-handler-interactively", &module_info_runtime, "invoke-handler-interactively"},
  {"fix-let-body", &module_info_ast, "fix-let-body"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"%i=", &module_info_boot, "%i="},
  {"function-debug-name", &module_info_ast, "function-debug-name"},
  {"signature-bindings-setter", &module_info_ast, "signature-bindings-setter"},
  {"as-lowercase", &module_info_runtime, "as-lowercase"},
  {"head", &module_info_boot, "head"},
  {"error", &module_info_boot, "error"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"sexpr-make-setter", &module_info_syntax, "sexpr-make-setter"},
  {"sexpr-block-body", &module_info_syntax, "sexpr-block-body"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"create-directory", &module_info_protoSsystem, "create-directory"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"neg?", &module_info_runtime, "neg?"},
  {"reference-called-function?", &module_info_ast, "reference-called-function?"},
  {"unwind-protect-cleanup-thunk", &module_info_ast, "unwind-protect-cleanup-thunk"},
  {"len", &module_info_runtime, "len"},
  {"sexpr-isa-init-slots", &module_info_syntax, "sexpr-isa-init-slots"},
  {"<map>", &module_info_runtime, "<map>"},
  {"monitor-type", &module_info_ast, "monitor-type"},
  {"<arguments>", &module_info_ast, "<arguments>"},
  {"ds", &module_info_boot, "ds"},
  {"identity", &module_info_runtime, "identity"},
  {"$sexpr-define-function-tag", &module_info_syntax, "$sexpr-define-function-tag"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"var-type", &module_info_macros, "var-type"},
  {"$sexpr-slot-tag", &module_info_syntax, "$sexpr-slot-tag"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"str-to-num", &module_info_runtime, "str-to-num"},
  {"seq", &module_info_boot, "seq"},
  {"quote", &module_info_boot, "quote"},
  {"application-function", &module_info_ast, "application-function"},
  {"close-output-port", &module_info_runtime, "close-output-port"},
  {"%f=", &module_info_boot, "%f="},
  {"assocq", &module_info_runtime, "assocq"},
  {"components-last", &module_info_protoSsystem, "components-last"},
  {"fix-let-types-setter", &module_info_ast, "fix-let-types-setter"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"sub", &module_info_runtime, "sub"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"assignment-form", &module_info_ast, "assignment-form"},
  {"sexpr-slot-init", &module_info_syntax, "sexpr-slot-init"},
  {"sexpr-signature-parameters", &module_info_syntax, "sexpr-signature-parameters"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"$sexpr-define-tag", &module_info_syntax, "$sexpr-define-tag"},
  {"sexpr-make-application", &module_info_syntax, "sexpr-make-application"},
  {"<int>", &module_info_boot, "<int>"},
  {"<global-assignment>", &module_info_ast, "<global-assignment>"},
  {"sexpr-method-body", &module_info_syntax, "sexpr-method-body"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"%lu", &module_info_boot, "%lu"},
  {"sexpr-operator", &module_info_syntax, "sexpr-operator"},
  {"dm", &module_info_boot, "dm"},
  {"numeric?", &module_info_runtime, "numeric?"},
  {"sexpr-syntax-definition-variable", &module_info_syntax, "sexpr-syntax-definition-variable"},
  {"rep", &module_info_boot, "rep"},
  {"sig", &module_info_runtime, "sig"},
  {"sexpr-slot-object", &module_info_syntax, "sexpr-slot-object"},
  {"to-str", &module_info_runtime, "to-str"},
  {"sexpr-loc-bound-signatures", &module_info_syntax, "sexpr-loc-bound-signatures"},
  {"<predefined-application>", &module_info_ast, "<predefined-application>"},
  {"in", &module_info_runtime, "in"},
  {"<local-assignment>", &module_info_ast, "<local-assignment>"},
  {"keys", &module_info_runtime, "keys"},
  {"assignment-binding", &module_info_ast, "assignment-binding"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"sexpr-method-signature", &module_info_syntax, "sexpr-method-signature"},
  {"sexpr-function-definition-variable", &module_info_syntax, "sexpr-function-definition-variable"},
  {"*obj-extension*", &module_info_protoSsystem, "*obj-extension*"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"%i!", &module_info_boot, "%i!"},
  {"<monitor>", &module_info_ast, "<monitor>"},
  {"%f*", &module_info_boot, "%f*"},
  {"unless", &module_info_macros, "unless"},
  {"<num>", &module_info_boot, "<num>"},
  {"any?", &module_info_runtime, "any?"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"signature-names-setter", &module_info_ast, "signature-names-setter"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"*print-base*", &module_info_runtime, "*print-base*"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"napply", &module_info_macros, "napply"},
  {"dv", &module_info_boot, "dv"},
  {"table-growth-threshold", &module_info_runtime, "table-growth-threshold"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"sexpr-define-class-parents", &module_info_syntax, "sexpr-define-class-parents"},
  {"fill", &module_info_runtime, "fill"},
  {"sexpr-if-test", &module_info_syntax, "sexpr-if-test"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"try", &module_info_boot, "try"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"slot", &module_info_boot, "slot"},
  {"bound?-reference", &module_info_ast, "bound?-reference"},
  {"@<", &module_info_boot, "@<"},
  {"os-binding-value-setter", &module_info_protoSsystem, "os-binding-value-setter"},
  {"<buf>", &module_info_runtime, "<buf>"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"<str-tab>", &module_info_runtime, "<str-tab>"},
  {"even?", &module_info_runtime, "even?"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"<module-binding>", &module_info_ast, "<module-binding>"},
  {"%c=", &module_info_boot, "%c="},
  {"var-name", &module_info_macros, "var-name"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"/", &module_info_runtime, "/"},
  {"<ast-primitive>", &module_info_ast, "<ast-primitive>"},
  {"id-hash", &module_info_runtime, "id-hash"},
  {"module-loader-module-type", &module_info_ast, "module-loader-module-type"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"alter", &module_info_runtime, "alter"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"3rd", &module_info_runtime, "3rd"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"<fab-list>", &module_info_ast, "<fab-list>"},
  {"truncate", &module_info_runtime, "truncate"},
  {"env-object-name", &module_info_ast, "env-object-name"},
  {"$sexpr-syntax-if-tag", &module_info_syntax, "$sexpr-syntax-if-tag"},
  {"min", &module_info_runtime, "min"},
  {"sexpr-loc-raw-body", &module_info_syntax, "sexpr-loc-raw-body"},
  {"binding-global-box", &module_info_ast, "binding-global-box"},
  {"if", &module_info_boot, "if"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"ast-evaluate", &module_info_ast, "ast-evaluate"},
  {"load-module", &module_info_ast, "load-module"},
  {"assoc", &module_info_runtime, "assoc"},
  {"objectify-quotation", &module_info_ast, "objectify-quotation"},
  {"vec", &module_info_runtime, "vec"},
  {"now-elt-setter", &module_info_runtime, "now-elt-setter"},
  {"fix-let-body-setter", &module_info_ast, "fix-let-body-setter"},
  {"application-tail?", &module_info_ast, "application-tail?"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"list-handlers", &module_info_runtime, "list-handlers"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"load", &YtopYload},
  {"parse", &YtopYparse},
  {"eval-in", &YtopYeval_in},
  {"backtrace", &YtopYbacktrace},
  {"str-eval", &YtopYstr_eval},
  {"print-result-expression", &YtopYprint_result_expression},
  {"do-stack-frames", &YtopYdo_stack_frames},
  {"---main-0---", NULL},
  {"prompt-for-command-expression", &YtopYprompt_for_command_expression},
  {"str-parse-in", &YtopYstr_parse_in},
  {"top", &YtopYtop},
  {"str-parse", &YtopYstr_parse},
  {"parse-in", &YtopYparse_in},
  {"str-eval-in", &YtopYstr_eval_in},
  {"top-in", &YtopYtop_in},
  {"load-from", &YtopYload_from},
  {"<keyboard-interrupt>", &YtopYLkeyboard_interruptG},
  {"read-file", &YtopYread_file},
  {"do-restart", &YtopYdo_restart},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"load", "load"},
  {"backtrace", "backtrace"},
  {"do-stack-frames", "do-stack-frames"},
  {"eval", "eval"},
  {"top", "top"},
  {"parse-in", "parse-in"},
  {"read-file", "read-file"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_top;
MODULE_INFO module_info_top = {
  "top",
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
extern void load_module_read (void);
extern void load_module_write (void);
extern void load_module_syntax (void);
extern void load_module_ast (void);
extern void load_module_ast_eval (void);
extern void load_module_protoSsystem (void);

/* EXPRESSION: */

extern void load_module_top (void);

void load_module_top (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_boot();
  load_module_macros();
  load_module_runtime();
  load_module_read();
  load_module_write();
  load_module_syntax();
  load_module_ast();
  load_module_ast_eval();
  load_module_protoSsystem();

  (P)YtopY___main_0___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
