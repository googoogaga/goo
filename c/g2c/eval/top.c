/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: top */

DEF(YtopYbacktrace,"top","backtrace");
EXT(YLtraitsG,"boot","<traits>");
EXT(YastYreference_called_functionQ,"ast","reference-called-function?");
EXT(YsyntaxYsexpr_syntax_definition_value,"syntax","sexpr-syntax-definition-value");
EXT(YsyntaxYsexpr_make_setter,"syntax","sexpr-make-setter");
EXT(YsyntaxYDsexpr_define_function_tag,"syntax","$sexpr-define-function-tag");
EXT(YastYbinding_type,"ast","binding-type");
EXT(YsyntaxYDsexpr_if_tag,"syntax","$sexpr-if-tag");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(YastYLpredefined_bindingG,"ast","<predefined-binding>");
EXT(YmacrosYmap,"macros","map");
EXT(YruntimeYassocq,"runtime","assocq");
EXT(YastYbinding_type_setter,"ast","binding-type-setter");
EXT(YsyntaxYsexpr_iterate_Gloc,"syntax","sexpr-iterate->loc");
EXT(YastYalternative_condition,"ast","alternative-condition");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(YruntimeYdo2,"runtime","do2");
EXT(YsyntaxYsexpr_forward_primitiveQ,"syntax","sexpr-forward-primitive?");
EXT(Ynot,"boot","not");
EXT(Yfun_value,"boot","fun-value");
EXT(YastYLstatic_global_environmentG,"ast","<static-global-environment>");
EXT(YruntimeYelt,"runtime","elt");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(YruntimeYdo,"runtime","do");
EXT(YastYLlocal_bindingG,"ast","<local-binding>");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YLstrG,"boot","<str>");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YastYsignature_names,"ast","signature-names");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YastYbinding_value_setter,"ast","binding-value-setter");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YruntimeYpop,"runtime","pop");
EXT(YastYconstant_value,"ast","constant-value");
EXT(Ytail_setter,"boot","tail-setter");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(YruntimeYfab,"runtime","fab");
EXT(YastYLast_primitiveG,"ast","<ast-primitive>");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(YsyntaxYDsexpr_define_tag,"syntax","$sexpr-define-tag");
EXT(YLvecG,"boot","<vec>");
DEF(YtopYc_filename,"top","c-filename");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YastYbinding_dynamic_extentQ,"ast","binding-dynamic-extent?");
EXT(YsyntaxYsexpr_text_of_quotation,"syntax","sexpr-text-of-quotation");
EXT(YastYLmacro_bindingG,"ast","<macro-binding>");
EXT(YruntimeYcurry,"runtime","curry");
EXT(YsyntaxYsexpr_unquote_splicingQ,"syntax","sexpr-unquote-splicing?");
EXT(YsyntaxYDsexpr_let_tag,"syntax","$sexpr-let-tag");
EXT(YastYload_module,"ast","load-module");
EXT(YastYLlocal_assignmentG,"ast","<local-assignment>");
EXT(YreadYDchar_long_names,"read","$char-long-names");
EXT(YruntimeYfile_mtime,"runtime","file-mtime");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YsyntaxYsexpr_loc_bound_bodies,"syntax","sexpr-loc-bound-bodies");
EXT(YastYLast_signatureG,"ast","<ast-signature>");
EXT(YastYdo_module_loader_modules,"ast","do-module-loader-modules");
EXT(YastYunwind_protect_protected_thunk,"ast","unwind-protect-protected-thunk");
EXT(YsyntaxYDsexpr_locals_tag,"syntax","$sexpr-locals-tag");
EXT(YLlocG,"boot","<loc>");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(YsyntaxYsexpr_syntax_if_else,"syntax","sexpr-syntax-if-else");
EXT(YastYLsequentialG,"ast","<sequential>");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(Yerror,"boot","error");
EXT(YastYfunction_bindings,"ast","function-bindings");
EXT(YsyntaxYsexpr_slot_init,"syntax","sexpr-slot-init");
EXT(YruntimeYassq,"runtime","assq");
EXT(YastYLglobal_referenceG,"ast","<global-reference>");
EXT(YruntimeYsub,"runtime","sub");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(YastYcompile_time_program,"ast","compile-time-program");
EXT(YastYsignature_value,"ast","signature-value");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YruntimeYdel_dups,"runtime","del-dups");
DEF(YtopYload,"top","load");
EXT(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
EXT(YsyntaxYsexpr_slot_object,"syntax","sexpr-slot-object");
EXT(YPcall_next_method,"boot","%call-next-method");
EXT(YastYfunction_value,"ast","function-value");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YsyntaxYDsexpr_isa_tag,"syntax","$sexpr-isa-tag");
EXT(YastYLmoduleG,"ast","<module>");
EXT(YsyntaxYDsexpr_slot_tag,"syntax","$sexpr-slot-tag");
DEF(YtopYadd_src_path,"top","add-src-path");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YsyntaxYsexpr_variableQ,"syntax","sexpr-variable?");
EXT(YLsymG,"boot","<sym>");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YastYbinding_locative,"ast","binding-locative");
EXT(YsyntaxYsexpr_assignment_value,"syntax","sexpr-assignment-value");
EXT(YsyntaxYsexpr_make_application,"syntax","sexpr-make-application");
EXT(YsyntaxYDsexpr_bind_exit_tag,"syntax","$sexpr-bind-exit-tag");
EXT(YastYast_evaluate,"ast","ast-evaluate");
EXT(YastYLunwind_protectG,"ast","<unwind-protect>");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YastYdo_static_global_bindings,"ast","do-static-global-bindings");
DEF(YtopYprompt_for_command_expression,"top","prompt-for-command-expression");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YsyntaxYDsexpr_syntax_if_tag,"syntax","$sexpr-syntax-if-tag");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YastYbinding_mutableQ,"ast","binding-mutable?");
DEF(YtopYTc_extensionT,"top","*c-extension*");
EXT(YwriteYenv_object_name,"write","env-object-name");
EXT(Ysym_name,"boot","sym-name");
EXT(YsyntaxYsexpr_variable_name,"syntax","sexpr-variable-name");
EXT(YastYmodule_syntax_environment,"ast","module-syntax-environment");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(YruntimeYmemQ,"runtime","mem?");
EXT(YLslotG,"boot","<slot>");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YruntimeYas,"runtime","as");
EXT(YastYassignment_reference,"ast","assignment-reference");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(YsyntaxYsexpr_operands,"syntax","sexpr-operands");
DEF(YtopYtop,"top","top");
EXT(YruntimeYLE,"runtime","<=");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YastYglobal_box_value_setter,"ast","global-box-value-setter");
EXT(YsyntaxYsexpr_if_test,"syntax","sexpr-if-test");
EXT(YastYalternative_consequent,"ast","alternative-consequent");
EXT(YsyntaxYsexpr_loc_bound_signatures,"syntax","sexpr-loc-bound-signatures");
EXT(YsyntaxYsexpr_block_name,"syntax","sexpr-block-name");
EXT(YastYLpassive_programG,"ast","<passive-program>");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YruntimeYout,"runtime","out");
EXT(YruntimeYnewline,"runtime","newline");
EXT(YsyntaxYsexpr_make_macro_function,"syntax","sexpr-make-macro-function");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(YsyntaxYsexpr_make_anonymous_method,"syntax","sexpr-make-anonymous-method");
EXT(YastYapplication_arguments,"ast","application-arguments");
EXT(YastYLreferenceG,"ast","<reference>");
EXT(YastYlocals_body_setter,"ast","locals-body-setter");
DEF(YtopYTpath_separatorT,"top","*path-separator*");
EXT(YsyntaxYsexpr_syntax_if_value,"syntax","sexpr-syntax-if-value");
EXT(YastYmonitor_main_thunk,"ast","monitor-main-thunk");
EXT(YruntimeYpush,"runtime","push");
EXT(YsyntaxYeval,"syntax","eval");
EXT(YastYLast_macro_definitionG,"ast","<ast-macro-definition>");
EXT(YsyntaxYsexpr_variable_type,"syntax","sexpr-variable-type");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YastYLmonitorG,"ast","<monitor>");
DEF(YtopYadd_build_path,"top","add-build-path");
EXT(YastYDproto_runtime_module_name,"ast","$proto-runtime-module-name");
EXT(YastYLmagic_bindingG,"ast","<magic-binding>");
DEF(YtopYexe_filename,"top","exe-filename");
EXT(YsyntaxYDsexpr_monitor_tag,"syntax","$sexpr-monitor-tag");
EXT(YastYLreal_referenceG,"ast","<real-reference>");
EXT(YmacrosYlst,"macros","lst");
EXT(YastYfix_let_body,"ast","fix-let-body");
EXT(YruntimeYvec,"runtime","vec");
EXT(Yslot_value,"boot","slot-value");
DEF(YtopYstr_eval_in,"top","str-eval-in");
EXT(YruntimeYread_char,"runtime","read-char");
EXT(YsyntaxYsexpr_function_definition_variable,"syntax","sexpr-function-definition-variable");
DEF(YtopYread_file,"top","read-file");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YastYglobal_box_value,"ast","global-box-value");
EXT(YruntimeYfill,"runtime","fill");
EXT(YruntimeY1st,"runtime","1st");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YPsnul,"boot","%snul");
EXT(YastYLdefinitionG,"ast","<definition>");
EXT(YsyntaxYDsexpr_quasiquote_tag,"syntax","$sexpr-quasiquote-tag");
EXT(YastYLboundQG,"ast","<bound?>");
EXT(YsyntaxYsexpr_slot_variable,"syntax","sexpr-slot-variable");
EXT(YwriteYwrite_to_string,"write","write-to-string");
EXT(YmacrosYEE,"macros","==");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(YLanyG,"boot","<any>");
EXT(YLfunG,"boot","<fun>");
EXT(YastYfunction_body_setter,"ast","function-body-setter");
DEF(YtopYstr_parse_in,"top","str-parse-in");
DEF(YtopYLkeyboard_interruptG,"top","<keyboard-interrupt>");
EXT(YastYLmodule_bindingG,"ast","<module-binding>");
EXT(YastYfix_let_types,"ast","fix-let-types");
EXT(YsyntaxYDsexpr_set_tag,"syntax","$sexpr-set-tag");
EXT(YsyntaxYsexpr_let_Gcombination,"syntax","sexpr-let->combination");
EXT(YastYfix_let_types_setter,"ast","fix-let-types-setter");
EXT(YruntimeYassoc,"runtime","assoc");
EXT(YastYLmodule_loaderG,"ast","<module-loader>");
EXT(YastYlocals_functions,"ast","locals-functions");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(YastYbind_exit_main_fun,"ast","bind-exit-main-fun");
EXT(YastYruntime_environment,"ast","runtime-environment");
EXT(YastYLruntime_bindingG,"ast","<runtime-binding>");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
EXT(YruntimeYeof_object,"runtime","eof-object");
EXT(YastYLalternativeG,"ast","<alternative>");
EXT(YruntimeYformat,"runtime","format");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YwriteYwrite,"write","write");
EXT(YastYreference_frame_offset,"ast","reference-frame-offset");
DEF(YtopYTobj_extensionT,"top","*obj-extension*");
EXT(YsyntaxYsexpr_sequence_Gbegin,"syntax","sexpr-sequence->begin");
EXT(YruntimeYE,"runtime","=");
EXT(YPvnul,"boot","%vnul");
DEF(YtopYstr_parse,"top","str-parse");
EXT(YastYbinding_global_box,"ast","binding-global-box");
EXT(YastYbinding_global_box_setter,"ast","binding-global-box-setter");
DEF(YtopYos_name,"top","os-name");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(YruntimeYassqn,"runtime","assqn");
EXT(YastYLglobal_assignmentG,"ast","<global-assignment>");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YastYLfix_letG,"ast","<fix-let>");
EXT(YreadYread,"read","read");
EXT(YastYmodule_target_environment,"ast","module-target-environment");
EXT(YastYreference_called_functionQ_setter,"ast","reference-called-function?-setter");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YsyntaxYDsexpr_macro_expand_tag,"syntax","$sexpr-macro-expand-tag");
EXT(YPisa,"boot","%isa");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YmacrosYcat,"macros","cat");
DEF(YtopYeval_in,"top","eval-in");
EXT(YsyntaxYsexpr_if_else,"syntax","sexpr-if-else");
DEF(YtopYtop_in,"top","top-in");
DEF(YtopYobj_filename,"top","obj-filename");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(YastYLprogramG,"ast","<program>");
EXT(YastYboundQ_reference,"ast","bound?-reference");
EXT(YsyntaxYDsexpr_quote_tag,"syntax","$sexpr-quote-tag");
EXT(YsyntaxYsexpr_assignment_variable,"syntax","sexpr-assignment-variable");
EXT(YPsymbols,"boot","%symbols");
EXT(Ysig_names,"boot","sig-names");
DEF(YtopYload_in,"top","load-in");
EXT(YsyntaxYsexpr_isa_parents,"syntax","sexpr-isa-parents");
EXT(YastYLpredefined_applicationG,"ast","<predefined-application>");
EXT(YsyntaxYsexpr_monitor_handler,"syntax","sexpr-monitor-handler");
EXT(YastYbinding_name,"ast","binding-name");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YastYreference_binding,"ast","reference-binding");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YastYsequentialize,"ast","sequentialize");
EXT(YastYLconstantG,"ast","<constant>");
EXT(YastYfix_let_bindings_setter,"ast","fix-let-bindings-setter");
DEF(YtopYTproto_extensionT,"top","*proto-extension*");
EXT(YruntimeYL,"runtime","<");
EXT(YruntimeYlen,"runtime","len");
EXT(YsyntaxYsexpr_operator,"syntax","sexpr-operator");
DEF(YtopYdo_stack_frames,"top","do-stack-frames");
EXT(YastYapplication_knownQ_setter,"ast","application-known?-setter");
EXT(YastYfunction_name,"ast","function-name");
DEF(YtopYparse,"top","parse");
EXT(YsyntaxYsexpr_syntax_definition_variable,"syntax","sexpr-syntax-definition-variable");
DEF(YtopYparse_in,"top","parse-in");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
DEF(YtopYload_from,"top","load-from");
EXT(YisaQ,"boot","isa?");
EXT(YastYLbind_exitG,"ast","<bind-exit>");
EXT(YmacrosYpair,"macros","pair");
EXT(YruntimeYfrom,"runtime","from");
EXT(YwriteYwriteln,"write","writeln");
EXT(YastYfab_p2c_module,"ast","fab-p2c-module");
EXT(YastYalternative_alternant,"ast","alternative-alternant");
EXT(YruntimeYNEE,"runtime","~==");
DEF(YtopYos_binding_value,"top","os-binding-value");
EXT(YLgenG,"boot","<gen>");
EXT(Ynul,"boot","nul");
DEF(YtopYTexe_extensionT,"top","*exe-extension*");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YastYapplication_binding,"ast","application-binding");
EXT(YruntimeYtype_or,"runtime","type-or");
DEF(YtopYTproto_rootT,"top","*proto-root*");
DEF(YtopYstr_eval,"top","str-eval");
EXT(YsyntaxYsexpr_loc_bound_names,"syntax","sexpr-loc-bound-names");
EXT(YsyntaxYsexpr_function_definition_value,"syntax","sexpr-function-definition-value");
EXT(YastYapplication_tailQ,"ast","application-tail?");
EXT(YruntimeYempty,"runtime","empty");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YsyntaxYsexpr_if_then,"syntax","sexpr-if-then");
EXT(Yfab_sym,"boot","fab-sym");
EXT(YastYLbindingG,"ast","<binding>");
EXT(YPdefine_method,"boot","%define-method");
EXT(YsyntaxYsexpr_unquoteQ,"syntax","sexpr-unquote?");
EXT(YsyntaxYsexpr_block_body,"syntax","sexpr-block-body");
EXT(YastYLast_primitive_definitionG,"ast","<ast-primitive-definition>");
EXT(YPslot,"boot","%slot");
EXT(YsyntaxYDsexpr_begin_tag,"syntax","$sexpr-begin-tag");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YruntimeYA,"runtime","+");
EXT(YwriteYdisplay,"write","display");
EXT(YsyntaxYsexpr_make_getter,"syntax","sexpr-make-getter");
EXT(YastYLlocal_referenceG,"ast","<local-reference>");
EXT(YsyntaxYsexpr_unwind_protect_protected_form,"syntax","sexpr-unwind-protect-protected-form");
EXT(YastYLast_functionG,"ast","<ast-function>");
EXT(YLcolG,"boot","<col>");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YLlogG,"boot","<log>");
EXT(YLtupG,"boot","<tup>");
EXT(YastYbinding_dynamic_extentQ_setter,"ast","binding-dynamic-extent?-setter");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(YruntimeYG,"runtime",">");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YLnumG,"boot","<num>");
EXT(YsyntaxYsexpr_isa_slot_inits,"syntax","sexpr-isa-slot-inits");
EXT(YLflatG,"boot","<flat>");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(Ytype_error,"boot","type-error");
EXT(YsyntaxYDsexpr_define_generic_tag,"syntax","$sexpr-define-generic-tag");
EXT(YastYenvironment_uses_modules,"ast","environment-uses-modules");
EXT(YPPmacro,"boot","%%macro");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YsyntaxYsexpr_signature_value,"syntax","sexpr-signature-value");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YastYLregular_applicationG,"ast","<regular-application>");
EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(YastYfix_let_body_setter,"ast","fix-let-body-setter");
EXT(YastYLruntime_assignmentG,"ast","<runtime-assignment>");
EXT(YsyntaxYsexpr_function_signature,"syntax","sexpr-function-signature");
EXT(YastYlocals_functions_setter,"ast","locals-functions-setter");
EXT(YsyntaxYsexpr_syntax_if_then,"syntax","sexpr-syntax-if-then");
EXT(YastYapplication_function,"ast","application-function");
EXT(YsyntaxYDsexpr_iterate_tag,"syntax","$sexpr-iterate-tag");
EXT(YastYset_module_environments,"ast","set-module-environments");
EXT(YastYmonitor_handler,"ast","monitor-handler");
EXT(YLseqG,"boot","<seq>");
EXT(YastYLcompile_timeG,"ast","<compile-time>");
EXT(YLsigG,"boot","<sig>");
EXT(YruntimeYalways,"runtime","always");
EXT(YsyntaxYsexpr_definition_variable,"syntax","sexpr-definition-variable");
EXT(YastYfix_let_arguments,"ast","fix-let-arguments");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YastYfix_let_bindings,"ast","fix-let-bindings");
EXT(YsyntaxYsexpr_bind_pattern_variables,"syntax","sexpr-bind-pattern-variables");
EXT(YastYfunction_signature,"ast","function-signature");
EXT(Yfun_names,"boot","fun-names");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YsyntaxYDsexpr_unwind_protect_tag,"syntax","$sexpr-unwind-protect-tag");
EXT(YastYLargumentsG,"ast","<arguments>");
EXT(YLfloG,"boot","<flo>");
EXT(YLbagG,"boot","<bag>");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(YsyntaxYsexpr_make_begin,"syntax","sexpr-make-begin");
EXT(YastYLast_genericG,"ast","<ast-generic>");
EXT(YsyntaxYsexpr_method_body,"syntax","sexpr-method-body");
EXT(YastYmodule_name,"ast","module-name");
EXT(Yobject_parents,"boot","object-parents");
EXT(YastYapplication_knownQ,"ast","application-known?");
EXT(YruntimeYGE,"runtime",">=");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YsyntaxYsexpr_unwind_protect_cleanup_forms,"syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YLoptsG,"boot","<opts>");
EXT(YruntimeYmap2,"runtime","map2");
EXT(YastYLglobal_bindingG,"ast","<global-binding>");
EXT(YastYLruntime_referenceG,"ast","<runtime-reference>");
EXT(YastYprogram_register_setter,"ast","program-register-setter");
EXT(YastYLlocalsG,"ast","<locals>");
EXT(YsyntaxYsexpr_syntax_if_pattern,"syntax","sexpr-syntax-if-pattern");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(YsyntaxYsexpr_expand_backquote,"syntax","sexpr-expand-backquote");
EXT(YastYremove_modules_by_nameX,"ast","remove-modules-by-name!");
EXT(YastYreport_undefined_global_bindings,"ast","report-undefined-global-bindings");
DEF(YtopYbase_path,"top","base-path");
EXT(YsyntaxYsexpr_loc_raw_body,"syntax","sexpr-loc-raw-body");
EXT(YastYsignature_naryQ,"ast","signature-nary?");
DEF(YtopYos_binding_value_setter,"top","os-binding-value-setter");
EXT(YruntimeYpos,"runtime","pos");
EXT(YruntimeYneg,"runtime","neg");
EXT(YsyntaxYsexpr_function_body,"syntax","sexpr-function-body");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(Ysig_value,"boot","sig-value");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(YastYLglobal_boxG,"ast","<global-box>");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YruntimeYin,"runtime","in");
EXT(YastYobjectify,"ast","objectify");
EXT(YLlstG,"boot","<lst>");
EXT(YruntimeYnow_elt,"runtime","now-elt");
EXT(YastYfunction_naryQ,"ast","function-nary?");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
EXT(YastYLprogramsG,"ast","<programs>");
EXT(YastYfix_let_arguments_setter,"ast","fix-let-arguments-setter");
EXT(YLmetG,"boot","<met>");
EXT(YruntimeYsig,"runtime","sig");
EXT(YastYast_define_binding,"ast","ast-define-binding");
EXT(YsyntaxYsexpr_method_signature,"syntax","sexpr-method-signature");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YastYlocals_body,"ast","locals-body");
EXT(YastYbinding_module_name,"ast","binding-module-name");
EXT(YastYbinding_native_toQ,"ast","binding-native-to?");
EXT(YastYDproto_boot_module_name,"ast","$proto-boot-module-name");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(YsyntaxYsexpr_isa_init_values,"syntax","sexpr-isa-init-values");
EXT(YastYprobe_module,"ast","probe-module");
EXT(YsyntaxYDsexpr_define_syntax_tag,"syntax","$sexpr-define-syntax-tag");
EXT(YastYreference_frame_number,"ast","reference-frame-number");
EXT(YastYprogram_register,"ast","program-register");
EXT(YruntimeYlen_setter,"runtime","len-setter");
EXT(YastYLraw_constantG,"ast","<raw-constant>");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YastYinit_ast,"ast","init-ast");
EXT(YruntimeYlast,"runtime","last");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(Yhead,"boot","head");
EXT(YastYbinding_value,"ast","binding-value");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YastYLapplicationG,"ast","<application>");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YastYassignment_binding,"ast","assignment-binding");
EXT(YastYlocals_bindings,"ast","locals-bindings");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
EXT(YreadYread_from_string,"read","read-from-string");
EXT(YastYsignature_specs,"ast","signature-specs");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(YastYLast_methodG,"ast","<ast-method>");
EXT(YastYunwind_protect_cleanup_thunk,"ast","unwind-protect-cleanup-thunk");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YruntimeYrev,"runtime","rev");
EXT(YsyntaxYsexpr_definition_value,"syntax","sexpr-definition-value");
EXT(YLchrG,"boot","<chr>");
EXT(YastYLcomputed_programG,"ast","<computed-program>");
DEF(YtopYproto_filename,"top","proto-filename");
EXT(YastYinit_environment_for_eval,"ast","init-environment-for-eval");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YruntimeY_,"runtime","-");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
EXT(Yobject_slots,"boot","object-slots");
EXT(Yapply,"boot","apply");
EXT(YsyntaxYDsexpr_define_method_tag,"syntax","$sexpr-define-method-tag");
EXT(Yfun_name,"boot","fun-name");
EXT(YsyntaxYsexpr_isa_init_slots,"syntax","sexpr-isa-init-slots");
EXT(YastYmodule_loader_module_type,"ast","module-loader-module-type");
EXT(YLintG,"boot","<int>");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YmacrosYtup,"macros","tup");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YsyntaxYsexpr_make_setter_name,"syntax","sexpr-make-setter-name");
EXT(Ytail,"boot","tail");
EXT(YsyntaxYsexpr_monitor_body,"syntax","sexpr-monitor-body");
EXT(YastYlocals_bindings_setter,"ast","locals-bindings-setter");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(YastYassignment_form,"ast","assignment-form");
EXT(YsyntaxYDsexpr_method_tag,"syntax","$sexpr-method-tag");
EXT(Yhead_setter,"boot","head-setter");
EXT(YastYfunction_body,"ast","function-body");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_24);
DEFLIT(lit_23);
DEFLIT(lit_22);
DEFLIT(lit_21);
DEFLIT(lit_20);
DEFLIT(lit_19);
DEFLIT(lit_18);
DEFLIT(lit_17);
DEFLIT(lit_16);
DEFLIT(lit_15);
DEFLIT(lit_14);
DEFLIT(lit_13);
DEFLIT(lit_12);
DEFLIT(lit_11);
DEFLIT(lit_10);
DEFLIT(lit_9);
DEFLIT(lit_8);
DEFLIT(lit_7);
DEFLIT(lit_6);
DEFLIT(lit_5);
DEFLIT(lit_4);
DEFLIT(lit_3);
DEFLIT(lit_2);
DEFLIT(lit_1);
DEFLIT(lit_0);

/* FUNCTIONS: */

LOCFOR(fun_os_name_0);
LOCFOR(fun_os_binding_value_1);
LOCFOR(fun_os_binding_value_setter_2);
LOCFOR(fun_loop_3);
LOCFOR(fun_base_path_4);
LOCFOR(fun_add_src_path_5);
LOCFOR(fun_add_build_path_6);
LOCFOR(fun_parse_in_7);
LOCFOR(fun_parse_8);
LOCFOR(fun_str_parse_in_9);
LOCFOR(fun_str_parse_10);
LOCFOR(fun_eval_in_11);
LOCFOR(fun_eval_12);
LOCFOR(fun_str_eval_in_13);
LOCFOR(fun_str_eval_14);
LOCFOR(fun_loop_15);
LOCFOR(fun_16);
LOCFOR(fun_read_file_17);
LOCFOR(fun_load_in_18);
LOCFOR(fun_load_19);
FUNFOR(YtopYproto_filename);
FUNFOR(YtopYc_filename);
FUNFOR(YtopYobj_filename);
FUNFOR(YtopYexe_filename);
LOCFOR(fun_load_from_24);
LOCFOR(fun_prompt_for_command_expression_25);
LOCFOR(fun_do_stack_frames_26);
LOCFOR(fun_27);
LOCFOR(fun_backtrace_28);
FUNFOR(Ykeyboard_interrupt);
LOCFOR(fun_30);
LOCFOR(fun_31);
LOCFOR(fun_32);
LOCFOR(fun_loop_33);
LOCFOR(fun_34);
LOCFOR(fun_top_in_35);
LOCFOR(fun_36);
LOCFOR(fun_loop_37);
LOCFOR(fun_38);
LOCFOR(fun_top_39);
extern P YtopY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_os_name_0) {
  P T1,T0;
loop:
  T1 = (P)YPos_name();
  T0 = (P)YPsb(T1);
  RET(T0);
}

FUNCODEDEF(fun_os_binding_value_1) {
  ARG(s_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = (P)YPsu(s_);
  T1 = (P)YPos_binding_value(T2);
  T0 = (P)YPsb(T1);
  RET(T0);
}

FUNCODEDEF(fun_os_binding_value_setter_2) {
  ARG(s_, 0);
  ARG(v_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = (P)YPsu(v_);
  T0 = (P)YPsu(s_);
  (P)YPos_binding_value_setter(T1,T0);
  RET(v_);
}

FUNCODEDEF(fun_loop_3) {
  ARG(i_, 0);
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T9 = CALL2(CHKREF(YruntimeYL),i_,YPint((P)0));
  if (T9 != YPfalse) {
    T0 = lit_5;
  } else {
    T8 = CALL2(CHKREF(YruntimeYelt),FREEREF(1),i_);
    T7 = CALL2(CHKREF(YruntimeYelt),CHKREF(YtopYTpath_separatorT),YPint((P)0));
    T6 = CALL2(CHKREF(YruntimeYE),T8,T7);
    if (T6 != YPfalse) {
      T5 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
      T4 = CALL3(CHKREF(YruntimeYsub),FREEREF(1),YPint((P)0),T5);
      T1 = T4;
    } else {
      T3 = CALL2(CHKREF(YruntimeY_),i_,YPint((P)1));
      a1 = T3;
      i_ = a1;
      goto loop;
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_base_path_4) {
  ARG(filename_, 0);
  P loopF1548;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = FUNSHELL(1,fun_loop_3,2);
  loopF1548 = T4;
  FUNINIT(loopF1548, 2,loopF1548,filename_);
  T3 = CALL1(CHKREF(YruntimeYlen),filename_);
  T2 = CALL2(CHKREF(YruntimeY_),T3,YPint((P)1));
  T1 = KCALL1(loopF1548,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_add_src_path_5) {
  ARG(relpath_, 0);
  P T0;
  P a1;
loop:
  T0 = CALLN(CHKREF(YmacrosYcat),5,CHKREF(YtopYTproto_rootT),CHKREF(YtopYTpath_separatorT),lit_9,CHKREF(YtopYTpath_separatorT),relpath_);
  RET(T0);
}

FUNCODEDEF(fun_add_build_path_6) {
  ARG(relpath_, 0);
  ARG(builddir_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALLN(CHKREF(YmacrosYcat),7,CHKREF(YtopYTproto_rootT),CHKREF(YtopYTpath_separatorT),lit_10,CHKREF(YtopYTpath_separatorT),builddir_,CHKREF(YtopYTpath_separatorT),relpath_);
  RET(T0);
}

FUNCODEDEF(fun_parse_in_7) {
  ARG(ct_env_, 0);
  ARG(s_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(YreadYread_from_string),s_);
  T0 = CALL3(CHKREF(YastYobjectify),T1,ct_env_,YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_parse_8) {
  ARG(s_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL0(CHKREF(YastYruntime_environment));
  T0 = CALL2(CHKREF(YtopYparse_in),s_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_str_parse_in_9) {
  ARG(ct_env_, 0);
  ARG(s_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YtopYparse_in),s_,ct_env_);
  T0 = CALL3(CHKREF(YruntimeYformat),CHKREF(YruntimeYout),lit_11,T1);
  QRET(T0);
}

FUNCODEDEF(fun_str_parse_10) {
  ARG(s_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL0(CHKREF(YastYruntime_environment));
  T0 = CALL2(CHKREF(YtopYstr_parse_in),s_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_eval_in_11) {
  ARG(ct_env_, 0);
  ARG(x_, 1);
  P eF1550;
  P oF1549;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = CALL3(CHKREF(YastYobjectify),x_,ct_env_,YPfalse);
  oF1549 = T3;
  T2 = CALL1(CHKREF(YastYast_evaluate),oF1549);
  eF1550 = T2;
  T1 = eF1550;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_eval_12) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL0(CHKREF(YastYruntime_environment));
  T0 = CALL2(CHKREF(YtopYeval_in),x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_str_eval_in_13) {
  ARG(ct_env_, 0);
  ARG(x_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = CALL1(CHKREF(YreadYread_from_string),x_);
  T1 = CALL2(CHKREF(YtopYeval_in),T2,ct_env_);
  T0 = CALL1(CHKREF(YwriteYwrite_to_string),T1);
  QRET(T0);
}

FUNCODEDEF(fun_str_eval_14) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL0(CHKREF(YastYruntime_environment));
  T0 = CALL2(CHKREF(YtopYstr_eval_in),x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_loop_15) {
  ARG(forms_, 0);
  P xF1551;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = CALL1(CHKREF(YreadYread),FREEREF(0));
  xF1551 = T7;
  T6 = CALL1(CHKREF(YruntimeYeof_objectQ),xF1551);
  if (T6 != YPfalse) {
    T5 = CALL1(CHKREF(YruntimeYrevX),forms_);
    T4 = CALL1(CHKREF(YsyntaxYsexpr_sequence_Gbegin),T5);
    T1 = T4;
  } else {
    T3 = CALL2(CHKREF(YmacrosYpair),xF1551,forms_);
    a1 = T3;
    forms_ = a1;
    goto loop;
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_16) {
  ARG(port_, 0);
  P loopF1552;
  P T2,T1,T0;
  P a1;
loop:
  T2 = FUNSHELL(1,fun_loop_15,2);
  loopF1552 = T2;
  FUNINIT(loopF1552, 2,port_,loopF1552);
  T1 = KCALL1(loopF1552,Ynil);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_read_file_17) {
  ARG(filename_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = fun_16;
  T0 = CALL2(CHKREF(YruntimeYcall_with_input_file),filename_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_load_in_18) {
  ARG(ct_env_, 0);
  ARG(filename_, 1);
  P oF1554;
  P xF1553;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL1(CHKREF(YtopYread_file),filename_);
  xF1553 = T4;
  T3 = CALL3(CHKREF(YastYobjectify),xF1553,ct_env_,YPfalse);
  oF1554 = T3;
  T2 = CALL1(CHKREF(YastYast_evaluate),oF1554);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_load_19) {
  ARG(filename_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL0(CHKREF(YastYruntime_environment));
  T0 = CALL2(CHKREF(YtopYload_in),filename_,T1);
  QRET(T0);
}

FUNCODEDEF(YtopYproto_filename) {
  ARG(name_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YmacrosYcat),name_,CHKREF(YtopYTproto_extensionT));
  QRET(T0);
}

FUNCODEDEF(YtopYc_filename) {
  ARG(name_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YmacrosYcat),name_,CHKREF(YtopYTc_extensionT));
  QRET(T0);
}

FUNCODEDEF(YtopYobj_filename) {
  ARG(name_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YmacrosYcat),name_,CHKREF(YtopYTobj_extensionT));
  QRET(T0);
}

FUNCODEDEF(YtopYexe_filename) {
  ARG(name_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YmacrosYcat),name_,CHKREF(YtopYTexe_extensionT));
  QRET(T0);
}

FUNCODEDEF(fun_load_from_24) {
  ARG(name_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YtopYproto_filename),name_);
  T0 = CALL1(CHKREF(YtopYload),T1);
  QRET(T0);
}

FUNCODEDEF(fun_prompt_for_command_expression_25) {
  ARG(prompt_, 0);
  ARG(level_, 1);
  P T0;
  P a1,a2;
loop:
  CALLN(CHKREF(YruntimeYformat),4,CHKREF(YruntimeYout),lit_16,level_,prompt_);
  CALL1(CHKREF(YruntimeYforce_output),CHKREF(YruntimeYout));
  T0 = CALL1(CHKREF(YreadYread),CHKREF(YruntimeYin));
  QRET(T0);
}

FUNCODEDEF(fun_do_stack_frames_26) {
  ARG(fun_, 0);
  P T0;
  P a1;
loop:
  T0 = (P)YPdo_stack_frames(fun_);
  QRET(T0);
}

FUNCODEDEF(fun_27) {
  ARG(args_, 0);
  ARG(f_, 1);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T6 = CALL2(CHKREF(YisaQ),f_,CHKREF(YLgenG));
  T5 = CALL1(CHKREF(Ynot),T6);
  if (T5 != YPfalse) {
    T1 = BOXVAL(FREEREF(0));
    CALLN(CHKREF(YruntimeYformat),5,CHKREF(YruntimeYout),lit_17,T1,f_,args_);
    T4 = BOXVAL(FREEREF(0));
    T3 = CALL2(CHKREF(YruntimeYA),T4,YPint((P)1));
    T2 = BOXVAL(FREEREF(0)) = T3;
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_backtrace_28) {
  P numF1555;
  P T3,T2,T1,T0;
loop:
  numF1555 = YPint((P)0);
  numF1555 = BOXFAB(numF1555);
  T3 = FUNFAB(fun_27,1,numF1555);
  T2 = CALL1(CHKREF(YtopYdo_stack_frames),T3);
  T0 = T2;
  QRET(T0);
}

FUNCODEDEF(Ykeyboard_interrupt) {
  P T0;
loop:
  T0 = CALL1(CHKREF(YruntimeYsig),CHKREF(YtopYLkeyboard_interruptG));
  QRET(T0);
}

FUNCODEDEF(fun_30) {
  P tmpF1559;
  P resultF1558;
  P astF1557;
  P formF1556;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
loop:
  CALL1(CHKREF(YruntimeYnewline),CHKREF(YruntimeYout));
  T19 = CALL2(CHKREF(YtopYprompt_for_command_expression),FREEREF(0),lit_22);
  formF1556 = T19;
  T18 = CALL2(CHKREF(YruntimeYE),formF1556,lit_21);
  tmpF1559 = T18;
  if (tmpF1559 != YPfalse) {
    T15 = tmpF1559;
  } else {
    T17 = CALL0(CHKREF(YruntimeYeof_object));
    T16 = CALL2(CHKREF(YruntimeYE),formF1556,T17);
    T15 = T16;
  }
  T14 = T15;
  if (T14 != YPfalse) {
    T13 = CALL1(FREEREF(4),YPfalse);
    T1 = T13;
  } else {
    T12 = CALL2(CHKREF(YruntimeYE),formF1556,lit_20);
    if (T12 != YPfalse) {
      T11 = CALL1(FREEREF(3),YPfalse);
      T2 = T11;
    } else {
      T10 = CALL2(CHKREF(YruntimeYE),formF1556,lit_19);
      if (T10 != YPfalse) {
        T9 = CALL1(FREEREF(2),YPfalse);
        T3 = T9;
      } else {
        T8 = CALL3(CHKREF(YastYobjectify),formF1556,FREEREF(1),YPfalse);
        astF1557 = T8;
        T7 = CALL1(CHKREF(YastYast_evaluate),astF1557);
        resultF1558 = T7;
        CALL3(CHKREF(YruntimeYformat),CHKREF(YruntimeYout),lit_18,FREEREF(0));
        T6 = CALL2(CHKREF(YwriteYwrite),CHKREF(YruntimeYout),resultF1558);
        T5 = T6;
        T4 = T5;
        T3 = T4;
      }
      T2 = T3;
    }
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_31) {
  ARG(r_, 0);
  ARG(c_, 1);
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T7 = CALL2(CHKREF(YisaQ),c_,CHKREF(YtopYLkeyboard_interruptG));
  if (T7 != YPfalse) {
    T6 = CALL2(CHKREF(YruntimeYformat),CHKREF(YruntimeYout),lit_24);
  } else {
    CALL2(CHKREF(YruntimeYformat),CHKREF(YruntimeYout),lit_23);
    T5 = CALL2(CHKREF(YisaQ),c_,CHKREF(YruntimeYLsimple_conditionG));
    if (T5 != YPfalse) {
      T4 = CALL1(CHKREF(YruntimeYcondition_message),c_);
      T3 = CALL3(CHKREF(YruntimeYcurry),CHKREF(YruntimeYformat),CHKREF(YruntimeYout),T4);
      T2 = CALL1(CHKREF(YruntimeYcondition_arguments),c_);
      T1 = CALL2(CHKREF(Yapply),T3,T2);
      T0 = T1;
    } else {
      T0 = YPfalse;
    }
  }
  T8 = CALL2(CHKREF(YruntimeYA),FREEREF(4),YPint((P)1));
  CALLN(CHKREF(YtopYtop_in),4,T8,FREEREF(3),FREEREF(2),FREEREF(1));
  T9 = CALL1(FREEREF(0),YPfalse);
  QRET(T9);
}

FUNCODEDEF(fun_32) {
  ARG(continue_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = FUNFAB(fun_31,5,continue_,FREEREF(3),FREEREF(0),FREEREF(2),FREEREF(4));
  T1 = FUNFAB(fun_30,5,FREEREF(4),FREEREF(3),FREEREF(2),FREEREF(1),FREEREF(0));
  T0 = YruntimeYPwith_monitor(T2,T1);
  QRET(T0);
}

FUNCODEDEF(fun_loop_33) {
  P T1,T0;
loop:
  T0 = FUNFAB(fun_32,5,FREEREF(5),FREEREF(4),FREEREF(3),FREEREF(2),FREEREF(1));
  with_exit(T0);
  goto loop;
  QRET(T1);
}

FUNCODEDEF(fun_34) {
  ARG(blow_, 0);
  P loopF1560;
  P T2,T1,T0;
  P a1;
loop:
  T2 = FUNSHELL(1,fun_loop_33,6);
  loopF1560 = T2;
  FUNINIT(loopF1560, 6,loopF1560,FREEREF(3),FREEREF(2),FREEREF(1),blow_,FREEREF(0));
  T1 = KCALL0(loopF1560);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_top_in_35) {
  ARG(ct_env_, 0);
  ARG(quit_, 1);
  ARG(top_, 2);
  ARG(level_, 3);
  P T1,T0;
  P a1,a2,a3,a4;
loop:
  T1 = FUNFAB(fun_34,4,quit_,top_,ct_env_,level_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_36) {
  ARG(top_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL0(CHKREF(YastYruntime_environment));
  T0 = CALLN(CHKREF(YtopYtop_in),4,YPint((P)0),top_,FREEREF(0),T1);
  QRET(T0);
}

FUNCODEDEF(fun_loop_37) {
  P T1,T0;
loop:
  T0 = FUNFAB(fun_36,1,FREEREF(1));
  with_exit(T0);
  goto loop;
  QRET(T1);
}

FUNCODEDEF(fun_38) {
  ARG(quit_, 0);
  P loopF1561;
  P T2,T1,T0;
  P a1;
loop:
  T2 = FUNSHELL(1,fun_loop_37,2);
  loopF1561 = T2;
  FUNINIT(loopF1561, 2,loopF1561,quit_);
  T1 = KCALL0(loopF1561);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_top_39) {
  P T1,T0;
loop:
  T1 = fun_38;
  T0 = with_exit(T1);
  QRET(T0);
}

P YtopY___main_0___() {
  P env_rootF1562;
  P T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138;
  P T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122;
  P T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106;
  P T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90;
  P T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74;
  P T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58;
  P T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T0 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLstrG));
  fun_os_name_0 = YPmet(FUNCODEREF(fun_os_name_0),YPPsym((P)"os-name"),T0,ENVNUL);
  T4 = BOUNDP(YtopYos_name);
  if (T4 != YPfalse) {
    T3 = CHKREF(YtopYos_name);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_os_name_0;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  YtopYos_name = T1;
  regsym(&YtopYos_name,"top","os-name");
  T5 = YPsig(YPpair(YPPsym((P)"s"),Ynil),YPpair(CHKREF(YLstrG),Ynil),YPfalse,YPint((P)1),CHKREF(YLstrG));
  fun_os_binding_value_1 = YPmet(FUNCODEREF(fun_os_binding_value_1),YPPsym((P)"os-binding-value"),T5,ENVNUL);
  T9 = BOUNDP(YtopYos_binding_value);
  if (T9 != YPfalse) {
    T8 = CHKREF(YtopYos_binding_value);
  } else {
    T8 = YPfalse;
  }
  T7 = fun_os_binding_value_1;
  T6 = CALL2(CHKREF(YPdefine_method),T8,T7);
  YtopYos_binding_value = T6;
  regsym(&YtopYos_binding_value,"top","os-binding-value");
  T10 = YPsig(YPpair(YPPsym((P)"v"),YPpair(YPPsym((P)"s"),Ynil)),YPpair(CHKREF(YLstrG),YPpair(CHKREF(YLstrG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLstrG));
  fun_os_binding_value_setter_2 = YPmet(FUNCODEREF(fun_os_binding_value_setter_2),YPPsym((P)"os-binding-value-setter"),T10,ENVNUL);
  T14 = BOUNDP(YtopYos_binding_value_setter);
  if (T14 != YPfalse) {
    T13 = CHKREF(YtopYos_binding_value_setter);
  } else {
    T13 = YPfalse;
  }
  T12 = fun_os_binding_value_setter_2;
  T11 = CALL2(CHKREF(YPdefine_method),T13,T12);
  YtopYos_binding_value_setter = T11;
  regsym(&YtopYos_binding_value_setter,"top","os-binding-value-setter");
  lit_0 = YPsb((P)"/");
  lit_1 = YPsb((P)"\\");
  lit_2 = YPsb((P)"win32");
  lit_3 = YPsb((P)"/");
  lit_4 = YPsb((P)"linux");
  T21 = CALL0(CHKREF(YtopYos_name));
  T20 = CALL2(CHKREF(YruntimeYE),T21,lit_4);
  if (T20 != YPfalse) {
    T15 = lit_3;
  } else {
    T19 = CALL0(CHKREF(YtopYos_name));
    T18 = CALL2(CHKREF(YruntimeYE),T19,lit_2);
    if (T18 != YPfalse) {
      T16 = lit_1;
    } else {
      if (YPtrue != YPfalse) {
        T17 = lit_0;
      } else {
        T17 = YPfalse;
      }
      T16 = T17;
    }
    T15 = T16;
  }
  YtopYTpath_separatorT = T15;
  regsym(&YtopYTpath_separatorT,"top","*path-separator*");
  lit_5 = YPsb((P)"");
  T23 = YPsig(YPpair(YPPsym((P)"i"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_3 = YPmet(FUNCODEREF(fun_loop_3),YPPsym((P)"loop"),T23,ENVNUL);
  T22 = YPsig(YPpair(YPPsym((P)"filename"),Ynil),YPpair(CHKREF(YLstrG),Ynil),YPfalse,YPint((P)1),CHKREF(YLstrG));
  fun_base_path_4 = YPmet(FUNCODEREF(fun_base_path_4),YPPsym((P)"base-path"),T22,ENVNUL);
  T27 = BOUNDP(YtopYbase_path);
  if (T27 != YPfalse) {
    T26 = CHKREF(YtopYbase_path);
  } else {
    T26 = YPfalse;
  }
  T25 = fun_base_path_4;
  T24 = CALL2(CHKREF(YPdefine_method),T26,T25);
  YtopYbase_path = T24;
  regsym(&YtopYbase_path,"top","base-path");
  lit_6 = YPsb((P)"..");
  lit_7 = YPsb((P)"..");
  lit_8 = YPsb((P)"PROTO_ROOT");
  T34 = CALL1(CHKREF(YtopYos_binding_value),lit_8);
  env_rootF1562 = T34;
  T33 = CALL1(CHKREF(YmacrosYemptyQ),env_rootF1562);
  if (T33 != YPfalse) {
    T32 = CALL0(CHKREF(YruntimeYapp_filename));
    T31 = CALL1(CHKREF(YtopYbase_path),T32);
    T30 = CALLN(CHKREF(YmacrosYcat),4,T31,lit_7,CHKREF(YtopYTpath_separatorT),lit_6);
    T29 = T30;
  } else {
    T29 = env_rootF1562;
  }
  T28 = T29;
  YtopYTproto_rootT = T28;
  regsym(&YtopYTproto_rootT,"top","*proto-root*");
  lit_9 = YPsb((P)"SRC");
  T35 = YPsig(YPpair(YPPsym((P)"relpath"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLstrG));
  fun_add_src_path_5 = YPmet(FUNCODEREF(fun_add_src_path_5),YPPsym((P)"add-src-path"),T35,ENVNUL);
  T39 = BOUNDP(YtopYadd_src_path);
  if (T39 != YPfalse) {
    T38 = CHKREF(YtopYadd_src_path);
  } else {
    T38 = YPfalse;
  }
  T37 = fun_add_src_path_5;
  T36 = CALL2(CHKREF(YPdefine_method),T38,T37);
  YtopYadd_src_path = T36;
  regsym(&YtopYadd_src_path,"top","add-src-path");
  lit_10 = YPsb((P)"C");
  T40 = YPsig(YPpair(YPPsym((P)"builddir"),YPpair(YPPsym((P)"relpath"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLstrG));
  fun_add_build_path_6 = YPmet(FUNCODEREF(fun_add_build_path_6),YPPsym((P)"add-build-path"),T40,ENVNUL);
  T44 = BOUNDP(YtopYadd_build_path);
  if (T44 != YPfalse) {
    T43 = CHKREF(YtopYadd_build_path);
  } else {
    T43 = YPfalse;
  }
  T42 = fun_add_build_path_6;
  T41 = CALL2(CHKREF(YPdefine_method),T43,T42);
  YtopYadd_build_path = T41;
  regsym(&YtopYadd_build_path,"top","add-build-path");
  T45 = YPsig(YPpair(YPPsym((P)"s"),YPpair(YPPsym((P)"ct-env"),Ynil)),YPpair(CHKREF(YLstrG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_parse_in_7 = YPmet(FUNCODEREF(fun_parse_in_7),YPPsym((P)"parse-in"),T45,ENVNUL);
  T49 = BOUNDP(YtopYparse_in);
  if (T49 != YPfalse) {
    T48 = CHKREF(YtopYparse_in);
  } else {
    T48 = YPfalse;
  }
  T47 = fun_parse_in_7;
  T46 = CALL2(CHKREF(YPdefine_method),T48,T47);
  YtopYparse_in = T46;
  regsym(&YtopYparse_in,"top","parse-in");
  T50 = YPsig(YPpair(YPPsym((P)"s"),Ynil),YPpair(CHKREF(YLstrG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_parse_8 = YPmet(FUNCODEREF(fun_parse_8),YPPsym((P)"parse"),T50,ENVNUL);
  T54 = BOUNDP(YtopYparse);
  if (T54 != YPfalse) {
    T53 = CHKREF(YtopYparse);
  } else {
    T53 = YPfalse;
  }
  T52 = fun_parse_8;
  T51 = CALL2(CHKREF(YPdefine_method),T53,T52);
  YtopYparse = T51;
  regsym(&YtopYparse,"top","parse");
  lit_11 = YPsb((P)"%=\n");
  T55 = YPsig(YPpair(YPPsym((P)"s"),YPpair(YPPsym((P)"ct-env"),Ynil)),YPpair(CHKREF(YLstrG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_str_parse_in_9 = YPmet(FUNCODEREF(fun_str_parse_in_9),YPPsym((P)"str-parse-in"),T55,ENVNUL);
  T59 = BOUNDP(YtopYstr_parse_in);
  if (T59 != YPfalse) {
    T58 = CHKREF(YtopYstr_parse_in);
  } else {
    T58 = YPfalse;
  }
  T57 = fun_str_parse_in_9;
  T56 = CALL2(CHKREF(YPdefine_method),T58,T57);
  YtopYstr_parse_in = T56;
  regsym(&YtopYstr_parse_in,"top","str-parse-in");
  T60 = YPsig(YPpair(YPPsym((P)"s"),Ynil),YPpair(CHKREF(YLstrG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_str_parse_10 = YPmet(FUNCODEREF(fun_str_parse_10),YPPsym((P)"str-parse"),T60,ENVNUL);
  T64 = BOUNDP(YtopYstr_parse);
  if (T64 != YPfalse) {
    T63 = CHKREF(YtopYstr_parse);
  } else {
    T63 = YPfalse;
  }
  T62 = fun_str_parse_10;
  T61 = CALL2(CHKREF(YPdefine_method),T63,T62);
  YtopYstr_parse = T61;
  regsym(&YtopYstr_parse,"top","str-parse");
  T65 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"ct-env"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_eval_in_11 = YPmet(FUNCODEREF(fun_eval_in_11),YPPsym((P)"eval-in"),T65,ENVNUL);
  T69 = BOUNDP(YtopYeval_in);
  if (T69 != YPfalse) {
    T68 = CHKREF(YtopYeval_in);
  } else {
    T68 = YPfalse;
  }
  T67 = fun_eval_in_11;
  T66 = CALL2(CHKREF(YPdefine_method),T68,T67);
  YtopYeval_in = T66;
  regsym(&YtopYeval_in,"top","eval-in");
  T70 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_eval_12 = YPmet(FUNCODEREF(fun_eval_12),YPPsym((P)"eval"),T70,ENVNUL);
  T74 = BOUNDP(YsyntaxYeval);
  if (T74 != YPfalse) {
    T73 = CHKREF(YsyntaxYeval);
  } else {
    T73 = YPfalse;
  }
  T72 = fun_eval_12;
  T71 = CALL2(CHKREF(YPdefine_method),T73,T72);
  YsyntaxYeval = T71;
  regsym(&YsyntaxYeval,"syntax","eval");
  T75 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"ct-env"),Ynil)),YPpair(CHKREF(YLstrG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_str_eval_in_13 = YPmet(FUNCODEREF(fun_str_eval_in_13),YPPsym((P)"str-eval-in"),T75,ENVNUL);
  T79 = BOUNDP(YtopYstr_eval_in);
  if (T79 != YPfalse) {
    T78 = CHKREF(YtopYstr_eval_in);
  } else {
    T78 = YPfalse;
  }
  T77 = fun_str_eval_in_13;
  T76 = CALL2(CHKREF(YPdefine_method),T78,T77);
  YtopYstr_eval_in = T76;
  regsym(&YtopYstr_eval_in,"top","str-eval-in");
  T80 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLstrG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_str_eval_14 = YPmet(FUNCODEREF(fun_str_eval_14),YPPsym((P)"str-eval"),T80,ENVNUL);
  T84 = BOUNDP(YtopYstr_eval);
  if (T84 != YPfalse) {
    T83 = CHKREF(YtopYstr_eval);
  } else {
    T83 = YPfalse;
  }
  T82 = fun_str_eval_14;
  T81 = CALL2(CHKREF(YPdefine_method),T83,T82);
  YtopYstr_eval = T81;
  regsym(&YtopYstr_eval,"top","str-eval");
  T87 = YPsig(YPpair(YPPsym((P)"forms"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_15 = YPmet(FUNCODEREF(fun_loop_15),YPPsym((P)"loop"),T87,ENVNUL);
  T86 = YPsig(YPpair(YPPsym((P)"port"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T86,ENVNUL);
  T85 = YPsig(YPpair(YPPsym((P)"filename"),Ynil),YPpair(CHKREF(YLstrG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_read_file_17 = YPmet(FUNCODEREF(fun_read_file_17),YPPsym((P)"read-file"),T85,ENVNUL);
  T91 = BOUNDP(YtopYread_file);
  if (T91 != YPfalse) {
    T90 = CHKREF(YtopYread_file);
  } else {
    T90 = YPfalse;
  }
  T89 = fun_read_file_17;
  T88 = CALL2(CHKREF(YPdefine_method),T90,T89);
  YtopYread_file = T88;
  regsym(&YtopYread_file,"top","read-file");
  T92 = YPsig(YPpair(YPPsym((P)"filename"),YPpair(YPPsym((P)"ct-env"),Ynil)),YPpair(CHKREF(YLstrG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_load_in_18 = YPmet(FUNCODEREF(fun_load_in_18),YPPsym((P)"load-in"),T92,ENVNUL);
  T96 = BOUNDP(YtopYload_in);
  if (T96 != YPfalse) {
    T95 = CHKREF(YtopYload_in);
  } else {
    T95 = YPfalse;
  }
  T94 = fun_load_in_18;
  T93 = CALL2(CHKREF(YPdefine_method),T95,T94);
  YtopYload_in = T93;
  regsym(&YtopYload_in,"top","load-in");
  T97 = YPsig(YPpair(YPPsym((P)"filename"),Ynil),YPpair(CHKREF(YLstrG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_load_19 = YPmet(FUNCODEREF(fun_load_19),YPPsym((P)"load"),T97,ENVNUL);
  T101 = BOUNDP(YtopYload);
  if (T101 != YPfalse) {
    T100 = CHKREF(YtopYload);
  } else {
    T100 = YPfalse;
  }
  T99 = fun_load_19;
  T98 = CALL2(CHKREF(YPdefine_method),T100,T99);
  YtopYload = T98;
  regsym(&YtopYload,"top","load");
  lit_12 = YPsb((P)".proto");
  YtopYTproto_extensionT = lit_12;
  regsym(&YtopYTproto_extensionT,"top","*proto-extension*");
  lit_13 = YPsb((P)".c");
  YtopYTc_extensionT = lit_13;
  regsym(&YtopYTc_extensionT,"top","*c-extension*");
  lit_14 = YPsb((P)".o");
  YtopYTobj_extensionT = lit_14;
  regsym(&YtopYTobj_extensionT,"top","*obj-extension*");
  lit_15 = YPsb((P)"");
  YtopYTexe_extensionT = lit_15;
  regsym(&YtopYTexe_extensionT,"top","*exe-extension*");
  T102 = YPsig(YPpair(YPPsym((P)"name"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YtopYproto_filename = YPmet(FUNCODEREF(YtopYproto_filename),YPPsym((P)"proto-filename"),T102,ENVNUL);
  T103 = YtopYproto_filename;
  YtopYproto_filename = T103;
  regsym(&YtopYproto_filename,"top","proto-filename");
  T104 = YPsig(YPpair(YPPsym((P)"name"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YtopYc_filename = YPmet(FUNCODEREF(YtopYc_filename),YPPsym((P)"c-filename"),T104,ENVNUL);
  T105 = YtopYc_filename;
  YtopYc_filename = T105;
  regsym(&YtopYc_filename,"top","c-filename");
  T106 = YPsig(YPpair(YPPsym((P)"name"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YtopYobj_filename = YPmet(FUNCODEREF(YtopYobj_filename),YPPsym((P)"obj-filename"),T106,ENVNUL);
  T107 = YtopYobj_filename;
  YtopYobj_filename = T107;
  regsym(&YtopYobj_filename,"top","obj-filename");
  T108 = YPsig(YPpair(YPPsym((P)"name"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YtopYexe_filename = YPmet(FUNCODEREF(YtopYexe_filename),YPPsym((P)"exe-filename"),T108,ENVNUL);
  T109 = YtopYexe_filename;
  YtopYexe_filename = T109;
  regsym(&YtopYexe_filename,"top","exe-filename");
  T110 = YPsig(YPpair(YPPsym((P)"name"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_load_from_24 = YPmet(FUNCODEREF(fun_load_from_24),YPPsym((P)"load-from"),T110,ENVNUL);
  T114 = BOUNDP(YtopYload_from);
  if (T114 != YPfalse) {
    T113 = CHKREF(YtopYload_from);
  } else {
    T113 = YPfalse;
  }
  T112 = fun_load_from_24;
  T111 = CALL2(CHKREF(YPdefine_method),T113,T112);
  YtopYload_from = T111;
  regsym(&YtopYload_from,"top","load-from");
  lit_16 = YPsb((P)"%=%s");
  T115 = YPsig(YPpair(YPPsym((P)"level"),YPpair(YPPsym((P)"prompt"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_prompt_for_command_expression_25 = YPmet(FUNCODEREF(fun_prompt_for_command_expression_25),YPPsym((P)"prompt-for-command-expression"),T115,ENVNUL);
  T119 = BOUNDP(YtopYprompt_for_command_expression);
  if (T119 != YPfalse) {
    T118 = CHKREF(YtopYprompt_for_command_expression);
  } else {
    T118 = YPfalse;
  }
  T117 = fun_prompt_for_command_expression_25;
  T116 = CALL2(CHKREF(YPdefine_method),T118,T117);
  YtopYprompt_for_command_expression = T116;
  regsym(&YtopYprompt_for_command_expression,"top","prompt-for-command-expression");
  T120 = YPsig(YPpair(YPPsym((P)"fun"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_do_stack_frames_26 = YPmet(FUNCODEREF(fun_do_stack_frames_26),YPPsym((P)"do-stack-frames"),T120,ENVNUL);
  T124 = BOUNDP(YtopYdo_stack_frames);
  if (T124 != YPfalse) {
    T123 = CHKREF(YtopYdo_stack_frames);
  } else {
    T123 = YPfalse;
  }
  T122 = fun_do_stack_frames_26;
  T121 = CALL2(CHKREF(YPdefine_method),T123,T122);
  YtopYdo_stack_frames = T121;
  regsym(&YtopYdo_stack_frames,"top","do-stack-frames");
  lit_17 = YPsb((P)"[%=] %= %=\n");
  T126 = YPsig(YPpair(YPPsym((P)"f"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLanyG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T126,ENVNUL);
  T125 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_backtrace_28 = YPmet(FUNCODEREF(fun_backtrace_28),YPPsym((P)"backtrace"),T125,ENVNUL);
  T130 = BOUNDP(YtopYbacktrace);
  if (T130 != YPfalse) {
    T129 = CHKREF(YtopYbacktrace);
  } else {
    T129 = YPfalse;
  }
  T128 = fun_backtrace_28;
  T127 = CALL2(CHKREF(YPdefine_method),T129,T128);
  YtopYbacktrace = T127;
  regsym(&YtopYbacktrace,"top","backtrace");
  T132 = (P)YPpair(CHKREF(YruntimeYLconditionG),Ynil);
  T131 = CALL3(CHKREF(YPisa),T132,Ynil,Ynil);
  YtopYLkeyboard_interruptG = T131;
  regsym(&YtopYLkeyboard_interruptG,"top","<keyboard-interrupt>");
  T133 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  Ykeyboard_interrupt = YPmet(FUNCODEREF(Ykeyboard_interrupt),YPPsym((P)"keyboard-interrupt"),T133,ENVNUL);
  T134 = Ykeyboard_interrupt;
  Ykeyboard_interrupt = T134;
  regsym(&Ykeyboard_interrupt,"boot","keyboard-interrupt");
  lit_18 = YPsb((P)"%==> ");
  lit_19 = YPpair(YPPsym((P)"top"), Ynil);
  lit_20 = YPpair(YPPsym((P)"up"), Ynil);
  lit_21 = YPpair(YPPsym((P)"quit"), Ynil);
  lit_22 = YPsb((P)"<= ");
  lit_23 = YPsb((P)"ERROR: ");
  lit_24 = YPsb((P)"BREAK");
  T140 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T140,ENVNUL);
  T139 = YPsig(YPpair(YPPsym((P)"c"),YPpair(YPPsym((P)"r"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T139,ENVNUL);
  T138 = YPsig(YPpair(YPPsym((P)"continue"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T138,ENVNUL);
  T137 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_loop_33 = YPmet(FUNCODEREF(fun_loop_33),YPPsym((P)"loop"),T137,ENVNUL);
  T136 = YPsig(YPpair(YPPsym((P)"blow"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T136,ENVNUL);
  T135 = YPsig(YPpair(YPPsym((P)"level"),YPpair(YPPsym((P)"top"),YPpair(YPPsym((P)"quit"),YPpair(YPPsym((P)"ct-env"),Ynil)))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_top_in_35 = YPmet(FUNCODEREF(fun_top_in_35),YPPsym((P)"top-in"),T135,ENVNUL);
  T144 = BOUNDP(YtopYtop_in);
  if (T144 != YPfalse) {
    T143 = CHKREF(YtopYtop_in);
  } else {
    T143 = YPfalse;
  }
  T142 = fun_top_in_35;
  T141 = CALL2(CHKREF(YPdefine_method),T143,T142);
  YtopYtop_in = T141;
  regsym(&YtopYtop_in,"top","top-in");
  T148 = YPsig(YPpair(YPPsym((P)"top"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T148,ENVNUL);
  T147 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_loop_37 = YPmet(FUNCODEREF(fun_loop_37),YPPsym((P)"loop"),T147,ENVNUL);
  T146 = YPsig(YPpair(YPPsym((P)"quit"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T146,ENVNUL);
  T145 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_top_39 = YPmet(FUNCODEREF(fun_top_39),YPPsym((P)"top"),T145,ENVNUL);
  T152 = BOUNDP(YtopYtop);
  if (T152 != YPfalse) {
    T151 = CHKREF(YtopYtop);
  } else {
    T151 = YPfalse;
  }
  T150 = fun_top_39;
  T149 = CALL2(CHKREF(YPdefine_method),T151,T150);
  YtopYtop = T149;
  regsym(&YtopYtop,"top","top");
  T153 = YPfalse;
  return T153;
}

/* MODULES USED: */

extern void load_module_boot (void);
extern void load_module_macros (void);
extern void load_module_runtime (void);
extern void load_module_read (void);
extern void load_module_write (void);
extern void load_module_syntax (void);
extern void load_module_ast (void);
extern void load_module_ast_eval (void);

/* EXPRESSION: */

extern void load_module_top (void);

void load_module_top (void) {
  static int need_init = 1;
  if (!need_init) return;

  load_module_boot();
  load_module_macros();
  load_module_runtime();
  load_module_read();
  load_module_write();
  load_module_syntax();
  load_module_ast();
  load_module_ast_eval();

  (P)YtopY___main_0___();

  need_init = 0;
}

/* END OF GENERATED CODE. */
