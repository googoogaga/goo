/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: x8r/top */

EXT(YLlstG,"goo/boot","<lst>");
EXT(Yx8rSsyntaxYsexpr_expand_backquote,"x8r/syntax","sexpr-expand-backquote");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(Yx8rSastYobjectify_with_subtransaction,"x8r/ast","objectify-with-subtransaction");
EXT(Yx8rSastYconstant_index,"x8r/ast","constant-index");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Yx8rSast_linearizeYTregister_passiveQT,"x8r/ast-linearize","*register-passive?*");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yx8rSastYalternative_alternant,"x8r/ast","alternative-alternant");
EXT(Yx8rSsyntaxYsexpr_operands,"x8r/syntax","sexpr-operands");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Yx8rSastYapplication_function,"x8r/ast","application-function");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yx8rSsyntaxYsexpr_definition_value,"x8r/syntax","sexpr-definition-value");
EXT(Yx8rSastYfunction_body,"x8r/ast","function-body");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Yx8rSsyntaxYsexpr_syntax_if_else,"x8r/syntax","sexpr-syntax-if-else");
EXT(Yx8rSastYLruntime_referenceG,"x8r/ast","<runtime-reference>");
EXT(Yx8rSsyntaxYsexpr_assignment_value,"x8r/syntax","sexpr-assignment-value");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
DEF(Yx8rStopYesctst,"x8r/top","esctst");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(Yx8rSsyntaxYsexpr_signature_value,"x8r/syntax","sexpr-signature-value");
EXT(Yx8rSsyntaxYsexpr_syntax_definition_variable,"x8r/syntax","sexpr-syntax-definition-variable");
EXT(Yx8rSastYfunction_index_setter,"x8r/ast","function-index-setter");
EXT(Yx8rSsyntaxYsexpr_sequence_Gbegin,"x8r/syntax","sexpr-sequence->begin");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSruntimeYformat_to_string,"goo/runtime","format-to-string");
EXT(Yx8rSastYfix_let_types,"x8r/ast","fix-let-types");
EXT(Yx8rSast_linearizeYliftX,"x8r/ast-linearize","lift!");
EXT(Yx8rSastYdo_module_loader_modules,"x8r/ast","do-module-loader-modules");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(Yx8rSastYLprogramG,"x8r/ast","<program>");
EXT(Yx8rSastYcompile_time_program,"x8r/ast","compile-time-program");
EXT(Yx8rSast_linearizeYgather_temporariesX,"x8r/ast-linearize","gather-temporaries!");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(Yx8rSastYmodule_name_to_relpath,"x8r/ast","module-name-to-relpath");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooSmathYlog,"goo/math","log");
EXT(Yx8rSastYbinding_index_setter,"x8r/ast","binding-index-setter");
EXT(Yx8rSastYbinding_dottedQ_setter,"x8r/ast","binding-dotted?-setter");
EXT(Yx8rSsyntaxYsexpr_forward_primitiveQ,"x8r/syntax","sexpr-forward-primitive?");
EXT(Yx8rSsyntaxYDsexpr_locals_tag,"x8r/syntax","$sexpr-locals-tag");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(Yx8rSsyntaxYsexpr_block_name,"x8r/syntax","sexpr-block-name");
EXT(YgooScolsSmapYfab_map,"goo/cols/map","fab-map");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(Yx8rSsyntaxYDsexpr_let_tag,"x8r/syntax","$sexpr-let-tag");
EXT(Yx8rSastYfunction_data_refs_setter,"x8r/ast","function-data-refs-setter");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(Yobject_class,"goo/boot","object-class");
EXT(Yx8rSsyntaxYsexpr_prop_owner,"x8r/syntax","sexpr-prop-owner");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(Yx8rSsyntaxYsexpr_iterate_Gloc,"x8r/syntax","sexpr-iterate->loc");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(Yx8rSsyntaxYDsexpr_define_method_tag,"x8r/syntax","$sexpr-define-method-tag");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(Yx8rSastYremove_modules_by_nameX,"x8r/ast","remove-modules-by-name!");
EXT(Yx8rSastYsignature_value_setter,"x8r/ast","signature-value-setter");
EXT(Yx8rSsyntaxYsexpr_loc_bound_names,"x8r/syntax","sexpr-loc-bound-names");
EXT(Yx8rSastYapplication_knownQ_setter,"x8r/ast","application-known?-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yx8rSastYfunction_data_refs,"x8r/ast","function-data-refs");
EXT(Yx8rSast_linearizeYprogram_definitions,"x8r/ast-linearize","program-definitions");
DEF(Yx8rStopYauto_run,"x8r/top","auto-run");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yx8rSast_linearizeYunconstrained_typeQ,"x8r/ast-linearize","unconstrained-type?");
EXT(Yx8rSastYfunction_free,"x8r/ast","function-free");
EXT(Yx8rSastYLpassive_programG,"x8r/ast","<passive-program>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Yx8rSastYsignature_arity,"x8r/ast","signature-arity");
EXT(Yx8rSastYsignature_bindings,"x8r/ast","signature-bindings");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
DEF(Yx8rStopYeval_in,"x8r/top","eval-in");
EXT(Yx8rSsyntaxYsexpr_operator,"x8r/syntax","sexpr-operator");
EXT(Yx8rSastYsignature_names_setter,"x8r/ast","signature-names-setter");
EXT(Yx8rSsyntaxYsexpr_prop_name,"x8r/syntax","sexpr-prop-name");
EXT(YgooScolsScolYany2Q,"goo/cols/col","any2?");
EXT(Yx8rSast_linearizeYcollect_registersX,"x8r/ast-linearize","collect-registers!");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Yx8rSastYast_define_binding,"x8r/ast","ast-define-binding");
EXT(Yx8rSsyntaxYDsexpr_define_generic_tag,"x8r/syntax","$sexpr-define-generic-tag");
EXT(Yx8rSast_linearizeYLbox_creationG,"x8r/ast-linearize","<box-creation>");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsScolYmap2,"goo/cols/col","map2");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(Yx8rSsyntaxYsexpr_syntax_if_then,"x8r/syntax","sexpr-syntax-if-then");
EXT(Yx8rSastYfix_let_arguments_setter,"x8r/ast","fix-let-arguments-setter");
EXT(Yx8rSastYmonitor_handler,"x8r/ast","monitor-handler");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yx8rSastYmonitor_test,"x8r/ast","monitor-test");
EXT(YgooScolsScolYas_copy,"goo/cols/col","as-copy");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSmathYN,"goo/math","~");
EXT(Yx8rSsyntaxYsexpr_isa_init_props,"x8r/syntax","sexpr-isa-init-props");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(Yx8rSastYenvironment_module,"x8r/ast","environment-module");
EXT(Yx8rSastYfunction_binding,"x8r/ast","function-binding");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yx8rSast_linearizeYbox_form,"x8r/ast-linearize","box-form");
EXT(Yx8rSastYreference_called_functionQ,"x8r/ast","reference-called-function?");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmagYGE,"goo/mag",">=");
DEF(Yx8rStopYframe_var,"x8r/top","frame-var");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yx8rSsyntaxYsexpr_make_application,"x8r/syntax","sexpr-make-application");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Yx8rSsyntaxYDsexpr_define_function_tag,"x8r/syntax","$sexpr-define-function-tag");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
DEF(Yx8rStopYbt,"x8r/top","bt");
DEF(Yx8rStopYdo_restart,"x8r/top","do-restart");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(Yx8rSastYLmoduleG,"x8r/ast","<module>");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(Yx8rSastYmodule_syntax_environment,"x8r/ast","module-syntax-environment");
EXT(Yx8rSastYfunction_temporaries,"x8r/ast","function-temporaries");
EXT(Yx8rSsyntaxYDsexpr_prop_tag,"x8r/syntax","$sexpr-prop-tag");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooSioSwriteYdisplay,"goo/io/write","display");
EXT(Yx8rSast_linearizeYLrenamed_local_bindingG,"x8r/ast-linearize","<renamed-local-binding>");
EXT(Ynul,"goo/boot","nul");
EXT(Yx8rSastYinstall_initial_bindings,"x8r/ast","install-initial-bindings");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(Yx8rSsyntaxYsexpr_loc_bound_bodies,"x8r/syntax","sexpr-loc-bound-bodies");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(YgooSioSwriteYpe_format,"goo/io/write","pe-format");
EXT(Yx8rSsyntaxYsexpr_function_signature,"x8r/syntax","sexpr-function-signature");
EXT(Yx8rSastYobjectify_signature,"x8r/ast","objectify-signature");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Yx8rSastYbinding_info,"x8r/ast","binding-info");
EXT(Yx8rSsyntaxYsexpr_syntax_if_pattern,"x8r/syntax","sexpr-syntax-if-pattern");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yx8rSastYmodule_name,"x8r/ast","module-name");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(Yx8rSast_linearizeYform_program,"x8r/ast-linearize","form-program");
EXT(Yx8rSsyntaxYeval,"x8r/syntax","eval");
EXT(Yx8rSast_linearizeYbox_reference,"x8r/ast-linearize","box-reference");
EXT(YgooScolsStabYtab_test,"goo/cols/tab","tab-test");
EXT(Yx8rSastYbinding_locative,"x8r/ast","binding-locative");
DEF(Yx8rStopYtop,"x8r/top","top");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yx8rSastYfunction_registers_setter,"x8r/ast","function-registers-setter");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(Yx8rSastYLlocal_referenceG,"x8r/ast","<local-reference>");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yx8rSastYfix_let_body_setter,"x8r/ast","fix-let-body-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yx8rSastYfunction_source,"x8r/ast","function-source");
EXT(Yx8rSastYLlocal_assignmentG,"x8r/ast","<local-assignment>");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
DEF(Yx8rStopYrun,"x8r/top","run");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(Yx8rSsyntaxYsexpr_if_test,"x8r/syntax","sexpr-if-test");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yx8rSastYLmodule_binding_referenceG,"x8r/ast","<module-binding-reference>");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yx8rSastYfunction_debug_name,"x8r/ast","function-debug-name");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
DEF(Yx8rStopYLkeyboard_interruptG,"x8r/top","<keyboard-interrupt>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YLintG,"goo/boot","<int>");
EXT(Yx8rSast_linearizeYast_contains_funQ,"x8r/ast-linearize","ast-contains-fun?");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(Yx8rSastYLast_functionG,"x8r/ast","<ast-function>");
EXT(Yx8rSastYinit_ast,"x8r/ast","init-ast");
EXT(Yx8rSastYbinding_dottedQ,"x8r/ast","binding-dotted?");
EXT(Yx8rSastYbinding_index,"x8r/ast","binding-index");
EXT(YgooSruntimeYspread,"goo/runtime","spread");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yx8rSastYunwind_protect_protected_thunk,"x8r/ast","unwind-protect-protected-thunk");
EXT(Yx8rSastYmodule_exports,"x8r/ast","module-exports");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(Yx8rSastYfree_environment,"x8r/ast","free-environment");
EXT(Yx8rSastYsignature_value,"x8r/ast","signature-value");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(Yx8rSastYfab_g2c_module,"x8r/ast","fab-g2c-module");
EXT(Yx8rSsyntaxYsexpr_prop_init,"x8r/syntax","sexpr-prop-init");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(Yx8rSastYprobe_module,"x8r/ast","probe-module");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yx8rSast_linearizeYflatten_seqs,"x8r/ast-linearize","flatten-seqs");
EXT(Yx8rSsyntaxYsexpr_def_value,"x8r/syntax","sexpr-def-value");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yx8rSastYfix_let_bindings,"x8r/ast","fix-let-bindings");
EXT(Yx8rSastYlocals_body,"x8r/ast","locals-body");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(Yx8rSastYdo_named_static_global_bindings,"x8r/ast","do-named-static-global-bindings");
EXT(Yx8rSsyntaxYsexpr_defQ,"x8r/syntax","sexpr-def?");
EXT(Yx8rSastYassignment_binding,"x8r/ast","assignment-binding");
DEF(Yx8rStopYtop_in,"x8r/top","top-in");
DEF(Yx8rStopYparse,"x8r/top","parse");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(Yx8rSastYruntime_environment,"x8r/ast","runtime-environment");
EXT(Yx8rSastYLast_macro_definitionG,"x8r/ast","<ast-macro-definition>");
EXT(Yx8rSsyntaxYDsexpr_isa_tag,"x8r/syntax","$sexpr-isa-tag");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(Yx8rSast_linearizeYprogram_quotations,"x8r/ast-linearize","program-quotations");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(Yx8rSastYfunction_temporaries_setter,"x8r/ast","function-temporaries-setter");
EXT(Yhead,"goo/boot","head");
EXT(Yx8rSsyntaxYsexpr_loc_raw_body,"x8r/syntax","sexpr-loc-raw-body");
EXT(Yx8rSsyntaxYsexpr_method_signature,"x8r/syntax","sexpr-method-signature");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yx8rSsyntaxYsexpr_bind_pattern_variables,"x8r/syntax","sexpr-bind-pattern-variables");
DEF(Yx8rStopYdo_stack_frames,"x8r/top","do-stack-frames");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yx8rSastYLbindingG,"x8r/ast","<binding>");
EXT(Yx8rSsyntaxYsexpr_function_definition_value,"x8r/syntax","sexpr-function-definition-value");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(Yx8rSast_linearizeYclosure_creation_index,"x8r/ast-linearize","closure-creation-index");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(Yx8rSsyntaxYsexpr_unquote_splicingQ,"x8r/syntax","sexpr-unquote-splicing?");
EXT(Yx8rSastYapplication_tailQ,"x8r/ast","application-tail?");
EXT(Yx8rSastYLglobal_referenceG,"x8r/ast","<global-reference>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Yx8rSastYload_in,"x8r/ast","load-in");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Yx8rSastYfix_let_arguments,"x8r/ast","fix-let-arguments");
EXT(Yx8rSastYLast_genericG,"x8r/ast","<ast-generic>");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yx8rSastYbinding_type_setter,"x8r/ast","binding-type-setter");
EXT(Yx8rSastYfunction_bindings,"x8r/ast","function-bindings");
DEF(Yx8rStopYg2c_run,"x8r/top","g2c-run");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(Yx8rSastYLglobal_boxG,"x8r/ast","<global-box>");
EXT(Yx8rSastYfix_let_bindings_setter,"x8r/ast","fix-let-bindings-setter");
EXT(Yx8rSast_linearizeYinsert_boxX,"x8r/ast-linearize","insert-box!");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yx8rSastYbinding_native_toQ,"x8r/ast","binding-native-to?");
EXT(Yx8rSastYbinding_type,"x8r/ast","binding-type");
EXT(Yx8rSastYmonitor_type,"x8r/ast","monitor-type");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(Yx8rSastYas_lst,"x8r/ast","as-lst");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(Yx8rSastYconstant_value,"x8r/ast","constant-value");
EXT(Yx8rSsyntaxYsexpr_function_definition_variable,"x8r/syntax","sexpr-function-definition-variable");
EXT(Yx8rSastYbinding_inferred_type_setter,"x8r/ast","binding-inferred-type-setter");
EXT(Yx8rSastYLast_primitive_definitionG,"x8r/ast","<ast-primitive-definition>");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Yx8rSsyntaxYsexpr_definition_variable,"x8r/syntax","sexpr-definition-variable");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Yx8rSsyntaxYDsexpr_quote_tag,"x8r/syntax","$sexpr-quote-tag");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(Yx8rSastYalternative_condition,"x8r/ast","alternative-condition");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Yx8rSast_linearizeYclosurize_mainX,"x8r/ast-linearize","closurize-main!");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(Yx8rSastYmodule_binding,"x8r/ast","module-binding");
EXT(Yx8rSastYLast_methodG,"x8r/ast","<ast-method>");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yx8rSsyntaxYsexpr_if_else,"x8r/syntax","sexpr-if-else");
EXT(Yx8rSastYlocals_body_setter,"x8r/ast","locals-body-setter");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(Yx8rSastYLbind_exitG,"x8r/ast","<bind-exit>");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yx8rSastYreport_undefined_global_bindings,"x8r/ast","report-undefined-global-bindings");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(Yx8rSastYbind_exit_main_fun,"x8r/ast","bind-exit-main-fun");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Yx8rSastYfunction_signature_setter,"x8r/ast","function-signature-setter");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(Yx8rSastYreference_frame_number,"x8r/ast","reference-frame-number");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(Yx8rSastYprogram_type,"x8r/ast","program-type");
EXT(Yx8rSast_linearizeYregister_allocateX,"x8r/ast-linearize","register-allocate!");
EXT(Yx8rSastYbinding_global_box_setter,"x8r/ast","binding-global-box-setter");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Yx8rSastYLfab_listG,"x8r/ast","<fab-list>");
EXT(Yx8rSastYfunction_source_setter,"x8r/ast","function-source-setter");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Yx8rSastYLmodule_bindingG,"x8r/ast","<module-binding>");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yx8rSastYast_evaluate,"x8r/ast","ast-evaluate");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsSlstYpop,"goo/cols/lst","pop");
EXT(Yx8rSastYLstatic_global_environmentG,"x8r/ast","<static-global-environment>");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScolsSstrYstring_join,"goo/cols/str","string-join");
EXT(Yx8rSsyntaxYDsexpr_set_tag,"x8r/syntax","$sexpr-set-tag");
EXT(Yx8rSastYapplication_binding,"x8r/ast","application-binding");
EXT(Ynew,"goo/boot","new");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(Yx8rSsyntaxYsexpr_define_class_parents,"x8r/syntax","sexpr-define-class-parents");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsScolYlow_into,"goo/cols/col","low-into");
EXT(Yx8rSsyntaxYsexpr_make_begin,"x8r/syntax","sexpr-make-begin");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(Yx8rSastYfunction_index,"x8r/ast","function-index");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yx8rSsyntaxYsexpr_unwind_protect_protected_form,"x8r/syntax","sexpr-unwind-protect-protected-form");
EXT(Yx8rSsyntaxYsexpr_fab_getter,"x8r/syntax","sexpr-fab-getter");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(Yx8rSastYLraw_constantG,"x8r/ast","<raw-constant>");
EXT(Yx8rSastYLcompile_timeG,"x8r/ast","<compile-time>");
DEF(Yx8rStopYstr_parse,"x8r/top","str-parse");
EXT(Yx8rSsyntaxYsexpr_monitor_expand,"x8r/syntax","sexpr-monitor-expand");
EXT(Yx8rSastYLreal_referenceG,"x8r/ast","<real-reference>");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(Yobject_parents,"goo/boot","object-parents");
DEF(Yx8rStopYstr_eval_in,"x8r/top","str-eval-in");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yx8rSastYload_module,"x8r/ast","load-module");
EXT(Yx8rSastYsignature_naryQ_setter,"x8r/ast","signature-nary?-setter");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YgooScolsSlstYpush,"goo/cols/lst","push");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yx8rSastYmonitor_info,"x8r/ast","monitor-info");
EXT(Yx8rSsyntaxYsexpr_prop_type,"x8r/syntax","sexpr-prop-type");
EXT(Yx8rSsyntaxYDsexpr_macro_expand_tag,"x8r/syntax","$sexpr-macro-expand-tag");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(Yx8rSastYbinding_value_setter,"x8r/ast","binding-value-setter");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yx8rSsyntaxYsexpr_isa_prop_inits,"x8r/syntax","sexpr-isa-prop-inits");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(Yx8rSsyntaxYsexpr_prop_initQ,"x8r/syntax","sexpr-prop-init?");
EXT(Yx8rSsyntaxYsexpr_method_body,"x8r/syntax","sexpr-method-body");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Yx8rSastYbinding_mutableQ,"x8r/ast","binding-mutable?");
EXT(Yx8rSastYinit_environment_for_eval,"x8r/ast","init-environment-for-eval");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsStabYtab_gc_state,"goo/cols/tab","tab-gc-state");
EXT(Yx8rSastYglobal_box_value_setter,"x8r/ast","global-box-value-setter");
EXT(YgooScolsSassocYassocs_test,"goo/cols/assoc","assocs-test");
EXT(Yx8rSsyntaxYsexpr_unwind_protect_cleanup_forms,"x8r/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YgooScolsSstrYstring_split,"goo/cols/str","string-split");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Yx8rSastYobjectify_quotation,"x8r/ast","objectify-quotation");
DEF(Yx8rStopYframe,"x8r/top","frame");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(Yx8rSastYlocals_bindings_setter,"x8r/ast","locals-bindings-setter");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(Yx8rSast_linearizeYreference_offset,"x8r/ast-linearize","reference-offset");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Yx8rSsyntaxYsexpr_block_body,"x8r/syntax","sexpr-block-body");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(Yx8rSsyntaxYsexpr_let_Gcombination,"x8r/syntax","sexpr-let->combination");
EXT(Yx8rSastYunchecked_runtime_environment,"x8r/ast","unchecked-runtime-environment");
EXT(YgooScolsSassocYassocs_test_setter,"goo/cols/assoc","assocs-test-setter");
EXT(Yx8rSsyntaxYDsexpr_syntax_if_tag,"x8r/syntax","$sexpr-syntax-if-tag");
EXT(Yx8rSastYLreferenceG,"x8r/ast","<reference>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yx8rSsyntaxYsexpr_fab_setter_name,"x8r/syntax","sexpr-fab-setter-name");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooScolsSstrYstring_repeat,"goo/cols/str","string-repeat");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YPprop,"goo/boot","%prop");
EXT(Yx8rSastYset_module_environments,"x8r/ast","set-module-environments");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(Yx8rSsyntaxYDsexpr_if_tag,"x8r/syntax","$sexpr-if-tag");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yx8rSastYfunction_debug_name_setter,"x8r/ast","function-debug-name-setter");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yx8rSastYfunction_registers,"x8r/ast","function-registers");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YisaQ,"goo/boot","isa?");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yx8rSast_linearizeYLfree_referenceG,"x8r/ast-linearize","<free-reference>");
EXT(Yx8rSsyntaxYsexpr_isa_init_values,"x8r/syntax","sexpr-isa-init-values");
EXT(Yx8rSastYbinding_name,"x8r/ast","binding-name");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(Yx8rSastYLmonitorG,"x8r/ast","<monitor>");
EXT(YPisa,"goo/boot","%isa");
EXT(Yx8rSsyntaxYsexpr_variable_name,"x8r/syntax","sexpr-variable-name");
EXT(Yx8rSast_linearizeYform_definitions,"x8r/ast-linearize","form-definitions");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(Yx8rSastYLfix_letG,"x8r/ast","<fix-let>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYdo3,"goo/cols/col","do3");
EXT(Yx8rSastYunwind_protect_cleanup_thunk,"x8r/ast","unwind-protect-cleanup-thunk");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yx8rSastYLglobal_assignmentG,"x8r/ast","<global-assignment>");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yx8rSsyntaxYsexpr_variableQ,"x8r/syntax","sexpr-variable?");
EXT(Yx8rSsyntaxYsexpr_make_anonymous_method,"x8r/syntax","sexpr-make-anonymous-method");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yx8rSastYmodule_loader_module_type,"x8r/ast","module-loader-module-type");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(Yx8rSastYconstant_index_setter,"x8r/ast","constant-index-setter");
EXT(Yx8rSast_linearizeYclosure_creation_free,"x8r/ast-linearize","closure-creation-free");
EXT(Yx8rSsyntaxYsexpr_make_macro_function,"x8r/syntax","sexpr-make-macro-function");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Yx8rSastYsignature_specs_setter,"x8r/ast","signature-specs-setter");
EXT(Yx8rSsyntaxYsexpr_prop_init_var,"x8r/syntax","sexpr-prop-init-var");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(Yx8rSast_linearizeYLclosure_creationG,"x8r/ast-linearize","<closure-creation>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(Yx8rSsyntaxYsexpr_syntax_if_value,"x8r/syntax","sexpr-syntax-if-value");
EXT(Yx8rSastYLapplicationG,"x8r/ast","<application>");
EXT(YgooSmathYE,"goo/math","=");
EXT(Yx8rSastYfunction_value,"x8r/ast","function-value");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYNEE,"goo/math","~==");
DEF(Yx8rStopYauto_eval,"x8r/top","auto-eval");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(Yunexec,"goo/boot","unexec");
EXT(Yx8rSast_linearizeYLtop_level_formG,"x8r/ast-linearize","<top-level-form>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yx8rSsyntaxYsexpr_syntax_definition_value,"x8r/syntax","sexpr-syntax-definition-value");
EXT(Yx8rSsyntaxYDsexpr_begin_tag,"x8r/syntax","$sexpr-begin-tag");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(Yx8rSastYglobal_box_value,"x8r/ast","global-box-value");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(Yx8rSastYLunwind_protectG,"x8r/ast","<unwind-protect>");
EXT(Yx8rSastYreference_called_functionQ_setter,"x8r/ast","reference-called-function?-setter");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yx8rSastYfix_let_body,"x8r/ast","fix-let-body");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YgooScolsScolYlow_fillX,"goo/cols/col","low-fill!");
EXT(YgooScolsSassocYLassocsG,"goo/cols/assoc","<assocs>");
EXT(YgooScolsScolYlow_elt_setter,"goo/cols/col","low-elt-setter");
EXT(Yx8rSsyntaxYsexpr_unquoteQ,"x8r/syntax","sexpr-unquote?");
EXT(Yx8rSastYsequentialize,"x8r/ast","sequentialize");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(Yx8rSastYLlocal_bindingG,"x8r/ast","<local-binding>");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yx8rSastYbinding_kind,"x8r/ast","binding-kind");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yx8rSastYfix_let_types_setter,"x8r/ast","fix-let-types-setter");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSmathYT,"goo/math","*");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yx8rSastYsignature_naryQ,"x8r/ast","signature-nary?");
DEF(Yx8rStopYload_from,"x8r/top","load-from");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yx8rSastYLprogramsG,"x8r/ast","<programs>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yx8rSsyntaxYsexpr_text_of_quotation,"x8r/syntax","sexpr-text-of-quotation");
EXT(Yx8rSastYbinding_value,"x8r/ast","binding-value");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Yx8rSastYassignment_reference,"x8r/ast","assignment-reference");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsStabYDpermanent_hash_state,"goo/cols/tab","$permanent-hash-state");
EXT(YgooStypesYtL,"goo/types","t<");
DEF(Yx8rStopYg2c_eval,"x8r/top","g2c-eval");
EXT(Yx8rSsyntaxYsexpr_if_then,"x8r/syntax","sexpr-if-then");
EXT(Yx8rSsyntaxYDsexpr_define_class_tag,"x8r/syntax","$sexpr-define-class-tag");
EXT(Yx8rSastYfunction_signature,"x8r/ast","function-signature");
EXT(Yx8rSastYLpredefined_applicationG,"x8r/ast","<predefined-application>");
EXT(Yx8rSastYfunction_free_setter,"x8r/ast","function-free-setter");
EXT(Yx8rSastYLimmediate_constantG,"x8r/ast","<immediate-constant>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Yx8rSastYLconstantG,"x8r/ast","<constant>");
EXT(Yx8rSastYLboundQG,"x8r/ast","<bound?>");
EXT(Yx8rSastYfunction_self_recursiveQ_setter,"x8r/ast","function-self-recursive?-setter");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YLmetG,"goo/boot","<met>");
DEF(Yx8rStopYast_run,"x8r/top","ast-run");
EXT(Yx8rSastYLsequentialG,"x8r/ast","<sequential>");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(Yx8rSastYLargumentsG,"x8r/ast","<arguments>");
EXT(Yx8rSastYsignature_bindings_setter,"x8r/ast","signature-bindings-setter");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(Yx8rSsyntaxYDsexpr_method_tag,"x8r/syntax","$sexpr-method-tag");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Yx8rSastYlocals_functions_setter,"x8r/ast","locals-functions-setter");
EXT(YgooScolsScolYdo2,"goo/cols/col","do2");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(Yx8rSastYassignment_form_setter,"x8r/ast","assignment-form-setter");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(Yx8rSsyntaxYDsexpr_quasiquote_tag,"x8r/syntax","$sexpr-quasiquote-tag");
EXT(Yx8rSsyntaxYsexpr_def_variable,"x8r/syntax","sexpr-def-variable");
EXT(Yx8rSastYLlocalsG,"x8r/ast","<locals>");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yx8rSastYlocals_bindings,"x8r/ast","locals-bindings");
EXT(Yx8rSastYbinding_global_box,"x8r/ast","binding-global-box");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
DEF(Yx8rStopYsave_image,"x8r/top","save-image");
EXT(Yx8rSastYreference_frame_offset,"x8r/ast","reference-frame-offset");
DEF(Yx8rStopYparse_in,"x8r/top","parse-in");
EXT(Yx8rSast_linearizeYform_quotations,"x8r/ast-linearize","form-quotations");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yx8rSastYLdefinitionG,"x8r/ast","<definition>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yx8rSsyntaxYDsexpr_unwind_protect_tag,"x8r/syntax","$sexpr-unwind-protect-tag");
EXT(Yx8rSast_linearizeYanalyze_dynamic_extent,"x8r/ast-linearize","analyze-dynamic-extent");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooScolsSvecYpop_lastX,"goo/cols/vec","pop-last!");
EXT(Yx8rSastYapplication_knownQ,"x8r/ast","application-known?");
EXT(YgooSmathYpow,"goo/math","pow");
DEF(Yx8rStopYread_file,"x8r/top","read-file");
EXT(Yx8rSastYfunction_self_recursiveQ,"x8r/ast","function-self-recursive?");
EXT(Yx8rSastYbinding_dynamic_extentQ_setter,"x8r/ast","binding-dynamic-extent?-setter");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yx8rSastYLassignmentG,"x8r/ast","<assignment>");
DEF(Yx8rStopYbacktrace,"x8r/top","backtrace");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Yx8rSastYprogram_type_setter,"x8r/ast","program-type-setter");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yx8rSast_linearizeYLbox_readG,"x8r/ast-linearize","<box-read>");
EXT(Yx8rSast_linearizeYprogram_form,"x8r/ast-linearize","program-form");
EXT(Yx8rSsyntaxYsexpr_loc_bound_signatures,"x8r/syntax","sexpr-loc-bound-signatures");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Yx8rSastYfunction_naryQ,"x8r/ast","function-nary?");
EXT(Yx8rSastYdo_static_global_bindings,"x8r/ast","do-static-global-bindings");
EXT(YgooScolsSvecYpush_lastX,"goo/cols/vec","push-last!");
DEF(Yx8rStopYload,"x8r/top","load");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Yx8rSastYapplication_arguments,"x8r/ast","application-arguments");
EXT(Yx8rSastYfind_environment_module,"x8r/ast","find-environment-module");
EXT(Yx8rSastYfunction_body_setter,"x8r/ast","function-body-setter");
EXT(Yx8rSastYsignature_names,"x8r/ast","signature-names");
EXT(Yx8rSastYenv_object_name,"x8r/ast","env-object-name");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yx8rSastYsignature_specs,"x8r/ast","signature-specs");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(Yx8rSastYLmodule_loaderG,"x8r/ast","<module-loader>");
EXT(Yx8rSastYDgoo_boot_module_name,"x8r/ast","$goo-boot-module-name");
DEF(Yx8rStopYstr_eval,"x8r/top","str-eval");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yx8rSastYboundQ_reference,"x8r/ast","bound?-reference");
EXT(Yx8rSsyntaxYDsexpr_monitor_tag,"x8r/syntax","$sexpr-monitor-tag");
EXT(Yx8rSastYLalternativeG,"x8r/ast","<alternative>");
DEF(Yx8rStopYprompt_for_command_expression,"x8r/top","prompt-for-command-expression");
EXT(Yx8rSastYbinding_inferred_type,"x8r/ast","binding-inferred-type");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Yx8rSastYenvironment_uses_modules,"x8r/ast","environment-uses-modules");
EXT(Yx8rSastYassignment_form,"x8r/ast","assignment-form");
EXT(Yx8rSastYalternative_consequent,"x8r/ast","alternative-consequent");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Ylst,"goo/boot","lst");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yx8rSastYLfree_environmentG,"x8r/ast","<free-environment>");
EXT(Yx8rSastYfind_binding,"x8r/ast","find-binding");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(Yx8rSsyntaxYsexpr_assignment_variable,"x8r/syntax","sexpr-assignment-variable");
EXT(Yx8rSastYbinding_dynamic_extentQ,"x8r/ast","binding-dynamic-extent?");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSruntimeYformat,"goo/runtime","format");
EXT(Yx8rSast_linearizeYanalyze_calls,"x8r/ast-linearize","analyze-calls");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(Yx8rSastYsignature_arity_setter,"x8r/ast","signature-arity-setter");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Yx8rSastYprogram_register_setter,"x8r/ast","program-register-setter");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(Yx8rSsyntaxYsexpr_isa_parent,"x8r/syntax","sexpr-isa-parent");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yx8rSsyntaxYsexpr_function_body,"x8r/syntax","sexpr-function-body");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Yx8rSastYprogram_register,"x8r/ast","program-register");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Yx8rSsyntaxYDsexpr_bind_exit_tag,"x8r/syntax","$sexpr-bind-exit-tag");
EXT(Yx8rSsyntaxYsexpr_fab_setter,"x8r/syntax","sexpr-fab-setter");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(Yx8rSastYbinding_info_setter,"x8r/ast","binding-info-setter");
EXT(Ytail,"goo/boot","tail");
EXT(Yx8rSastYLruntime_assignmentG,"x8r/ast","<runtime-assignment>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Yx8rSastYenvironment_bindings,"x8r/ast","environment-bindings");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Yx8rSastYLast_primitiveG,"x8r/ast","<ast-primitive>");
EXT(Yx8rSsyntaxYDsexpr_define_syntax_tag,"x8r/syntax","$sexpr-define-syntax-tag");
EXT(Yx8rSastYreference_binding,"x8r/ast","reference-binding");
EXT(Yx8rSast_linearizeYLbox_writeG,"x8r/ast-linearize","<box-write>");
EXT(Yx8rSast_linearizeYreference_selfQ,"x8r/ast-linearize","reference-self?");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YOlst,"goo/boot","@lst");
EXT(Yx8rSastYLcomputed_programG,"x8r/ast","<computed-program>");
EXT(Yx8rSastYmonitor_main_thunk,"x8r/ast","monitor-main-thunk");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Yx8rSastYLast_signatureG,"x8r/ast","<ast-signature>");
EXT(Yx8rSsyntaxYDsexpr_def_tag,"x8r/syntax","$sexpr-def-tag");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(Yx8rSsyntaxYDsexpr_iterate_tag,"x8r/syntax","$sexpr-iterate-tag");
EXT(Yx8rSsyntaxYDsexpr_define_tag,"x8r/syntax","$sexpr-define-tag");
EXT(Yx8rSsyntaxYsexpr_variable_type,"x8r/syntax","sexpr-variable-type");
EXT(Yx8rSastYbinding_module_name,"x8r/ast","binding-module-name");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(Yx8rSast_linearizeYcollect_temporariesX,"x8r/ast-linearize","collect-temporaries!");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yx8rSastYLregular_applicationG,"x8r/ast","<regular-application>");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(Yx8rSsyntaxYsexpr_define_classQ,"x8r/syntax","sexpr-define-class?");
EXT(Yx8rSastYlocals_functions,"x8r/ast","locals-functions");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(Yx8rSast_linearizeYupdate_walkX,"x8r/ast-linearize","update-walk!");
EXT(Yx8rSast_linearizeYextract_thingsX,"x8r/ast-linearize","extract-things!");
EXT(Yx8rSsyntaxYsexpr_signature_parameters,"x8r/syntax","sexpr-signature-parameters");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmacrosYelt,"goo/macros","elt");
DEF(Yx8rStopYstr_parse_in,"x8r/top","str-parse-in");
EXT(Yx8rSastYmodule_target_environment,"x8r/ast","module-target-environment");
DEF(Yx8rStopYprint_result_expression,"x8r/top","print-result-expression");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_26);
DEFLIT(lit_56);
DEFLIT(lit_69);
DEFLIT(lit_36);
DEFLIT(lit_12);
DEFLIT(lit_96);
DEFLIT(lit_73);
DEFLIT(lit_72);
DEFLIT(lit_63);
DEFLIT(lit_34);
DEFLIT(lit_105);
DEFLIT(lit_24);
DEFLIT(lit_38);
DEFLIT(lit_89);
DEFLIT(lit_57);
DEFLIT(lit_29);
DEFLIT(lit_66);
DEFLIT(lit_61);
DEFLIT(lit_74);
DEFLIT(lit_10);
DEFLIT(lit_85);
DEFLIT(lit_47);
DEFLIT(lit_3);
DEFLIT(lit_100);
DEFLIT(lit_14);
DEFLIT(lit_21);
DEFLIT(lit_50);
DEFLIT(lit_32);
DEFLIT(lit_16);
DEFLIT(lit_71);
DEFLIT(lit_60);
DEFLIT(lit_55);
DEFLIT(lit_92);
DEFLIT(lit_45);
DEFLIT(lit_90);
DEFLIT(lit_64);
DEFLIT(lit_93);
DEFLIT(lit_25);
DEFLIT(lit_68);
DEFLIT(lit_48);
DEFLIT(lit_59);
DEFLIT(lit_13);
DEFLIT(lit_8);
DEFLIT(lit_22);
DEFLIT(lit_109);
DEFLIT(lit_0);
DEFLIT(lit_2);
DEFLIT(lit_51);
DEFLIT(lit_5);
DEFLIT(lit_78);
DEFLIT(lit_65);
DEFLIT(lit_62);
DEFLIT(lit_111);
DEFLIT(lit_79);
DEFLIT(lit_43);
DEFLIT(lit_98);
DEFLIT(lit_52);
DEFLIT(lit_106);
DEFLIT(lit_9);
DEFLIT(lit_70);
DEFLIT(lit_94);
DEFLIT(lit_53);
DEFLIT(lit_108);
DEFLIT(lit_18);
DEFLIT(lit_17);
DEFLIT(lit_19);
DEFLIT(lit_41);
DEFLIT(lit_101);
DEFLIT(lit_82);
DEFLIT(lit_87);
DEFLIT(lit_77);
DEFLIT(lit_102);
DEFLIT(lit_95);
DEFLIT(lit_49);
DEFLIT(lit_1);
DEFLIT(lit_23);
DEFLIT(lit_88);
DEFLIT(lit_28);
DEFLIT(lit_86);
DEFLIT(lit_7);
DEFLIT(lit_46);
DEFLIT(lit_84);
DEFLIT(lit_6);
DEFLIT(lit_15);
DEFLIT(lit_44);
DEFLIT(lit_40);
DEFLIT(lit_30);
DEFLIT(lit_42);
DEFLIT(lit_83);
DEFLIT(lit_33);
DEFLIT(lit_80);
DEFLIT(lit_58);
DEFLIT(lit_81);
DEFLIT(lit_39);
DEFLIT(lit_37);
DEFLIT(lit_54);
DEFLIT(lit_99);
DEFLIT(lit_76);
DEFLIT(lit_31);
DEFLIT(lit_75);
DEFLIT(lit_103);
DEFLIT(lit_11);
DEFLIT(lit_4);
DEFLIT(lit_107);
DEFLIT(lit_20);
DEFLIT(lit_91);
DEFLIT(lit_67);
DEFLIT(lit_110);
DEFLIT(lit_35);
DEFLIT(lit_97);
DEFLIT(lit_27);
DEFLIT(lit_104);

/* FUNCTIONS: */

LOCFOR(fun_0);
LOCFOR(fun_1);
LOCFOR(fun_2);
FUNFOR(Yx8rStopYesctst);
LOCFOR(fun_parse_in_4);
LOCFOR(fun_parse_5);
LOCFOR(fun_str_parse_in_6);
LOCFOR(fun_str_parse_7);
FUNFOR(Yx8rStopYast_run);
FUNFOR(Yx8rStopYg2c_run);
FUNFOR(Yx8rStopYauto_run);
FUNFOR(Yx8rStopYauto_eval);
LOCFOR(fun_eval_in_12);
LOCFOR(fun_eval_13);
LOCFOR(fun_str_eval_in_14);
LOCFOR(fun_str_eval_15);
LOCFOR(fun_loop_16);
LOCFOR(fun_17);
LOCFOR(fun_18);
LOCFOR(fun_read_file_19);
LOCFOR(fun_load_in_20);
LOCFOR(fun_load_21);
LOCFOR(fun_load_from_22);
LOCFOR(fun_prompt_for_command_expression_23);
LOCFOR(fun_print_result_expression_24);
LOCFOR(fun_do_stack_frames_25);
LOCFOR(fun_x_1474_26);
LOCFOR(fun_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_backtrace_30);
LOCFOR(fun_31);
LOCFOR(fun_frame_32);
LOCFOR(fun_33);
LOCFOR(fun_34);
LOCFOR(fun_frame_var_35);
LOCFOR(fun_36);
LOCFOR(fun_bt_37);
FUNFOR(Ykeyboard_interrupt);
FUNFOR(Yx8rStopYdo_restart);
LOCFOR(fun_40);
LOCFOR(fun_41);
LOCFOR(fun_42);
LOCFOR(fun_43);
LOCFOR(fun_x_1513_44);
LOCFOR(fun_45);
LOCFOR(fun_x_1510_46);
LOCFOR(fun_47);
LOCFOR(fun_x_1507_48);
LOCFOR(fun_49);
LOCFOR(fun_x_1504_50);
LOCFOR(fun_51);
LOCFOR(fun_x_1501_52);
LOCFOR(fun_53);
LOCFOR(fun_x_1498_54);
LOCFOR(fun_55);
LOCFOR(fun_x_1495_56);
LOCFOR(fun_57);
LOCFOR(fun_x_1492_58);
LOCFOR(fun_59);
LOCFOR(fun_x_1489_60);
LOCFOR(fun_61);
LOCFOR(fun_x_1486_62);
LOCFOR(fun_63);
LOCFOR(fun_x_1483_64);
LOCFOR(fun_65);
LOCFOR(fun_x_1480_66);
LOCFOR(fun_67);
LOCFOR(fun_x_1477_68);
LOCFOR(fun_69);
LOCFOR(fun_70);
LOCFOR(fun_71);
LOCFOR(fun_72);
LOCFOR(fun_loop_73);
LOCFOR(fun_74);
LOCFOR(fun_top_in_75);
LOCFOR(fun_76);
LOCFOR(fun_77);
LOCFOR(fun_78);
LOCFOR(fun_loop_79);
LOCFOR(fun_80);
LOCFOR(fun_81);
LOCFOR(fun_top_82);
LOCFOR(fun_83);
FUNFOR(Yx8rStopYsave_image);
extern P Yx8rStopY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_0) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,FREEREF(0),LITREF(lit_1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_1) {
LINK_STACK();
loop:
  CALL2(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_2));
UNLINK_STACK();
  QRET(LITREF(lit_3));
}

FUNCODEDEF(fun_2) {
  P exit_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exit_, 0);
loop:
  T0 = FUNFAB(fun_0,1,exit_);
  T1 = fun_1;
  with_cleanup(T0,T1);
  CALL2(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_4));
UNLINK_STACK();
  QRET(LITREF(lit_5));
}

FUNCODEDEF(Yx8rStopYesctst) {
  P T1,T0;
LINK_STACK();
loop:
  T1 = fun_2;
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_parse_in_4) {
  P s_,ct_env_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSreadYread_from_string),s_);
  T0 = CALL3(1,VARREF(Yx8rSastYobjectify_with_subtransaction),T1,ct_env_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_parse_5) {
  P s_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(Yx8rStopYparse_in),s_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_parse_in_6) {
  P s_,ct_env_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL2(1,VARREF(Yx8rStopYparse_in),s_,ct_env_);
  T0 = CALL3(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_14),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_parse_7) {
  P s_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(Yx8rStopYstr_parse_in),s_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rStopYast_run) {
  P ast_,ct_env_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(ct_env_, 1);
loop:
  T0 = CALL1(1,VARREF(Yx8rSastYast_evaluate),ast_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rStopYg2c_run) {
  P ast_,ct_env_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(ct_env_, 1);
loop:
  T0 = CALL2(1,VARREF(Yx8rStopYg2c_eval),ast_,ct_env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rStopYauto_run) {
  P ast_,ct_env_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSast_linearizeYast_contains_funQ),ast_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Yx8rStopYg2c_run),ast_,ct_env_);
    T0 = T2;
  } else {
    T3 = CALL2(1,VARREF(Yx8rStopYast_run),ast_,ct_env_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rStopYauto_eval) {
  P form_,ct_env_;
  P astF2008;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(form_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL3(1,VARREF(Yx8rSastYobjectify_with_subtransaction),form_,ct_env_,YPfalse);
  astF2008 = T1;
  T2 = CALL2(1,VARREF(Yx8rStopYauto_run),astF2008,ct_env_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_in_12) {
  P x_,ct_env_;
  P eF2010;
  P oF2009;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL3(1,VARREF(Yx8rSastYobjectify_with_subtransaction),x_,ct_env_,YPfalse);
  oF2009 = T1;
  T3 = CALL1(1,VARREF(Yx8rSastYast_evaluate),oF2009);
  eF2010 = T3;
  T2 = eF2010;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_13) {
  P x_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(Yx8rStopYeval_in),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_eval_in_14) {
  P x_,ct_env_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(ct_env_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSioSreadYread_from_string),x_);
  T1 = CALL2(1,VARREF(Yx8rStopYeval_in),T2,ct_env_);
  T0 = CALL1(1,VARREF(YgooSioSwriteYwrite_to_string),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_eval_15) {
  P x_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(Yx8rStopYstr_eval_in),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_16) {
  P forms_;
  P xF2011;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(forms_, 0);
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL1(1,VARREF(YgooSruntimeYread),T2);
  xF2011 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),xF2011);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooSmacrosYrevX),forms_);
    T5 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_sequence_Gbegin),T6);
    T3 = T5;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYpair),xF2011,forms_);
    a1 = T8;
    forms_ = a1;
    goto loop;
    T3 = T7;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_17) {
  P loopF2012;
  P T3,T2,T1,T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_in_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T2 = FUNSHELL(1,fun_loop_16,2);
  loopF2012 = T2;
  FUNINIT(loopF2012, 2,FREEREF(0),loopF2012);
  T3 = CALL1(0,loopF2012,Ynil);
  T1 = T3;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_18) {
  P tmpF2013;
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2013 = T1;
  if (tmpF2013 != YPfalse) {
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

FUNCODEDEF(fun_read_file_19) {
  P filename_;
  P portF2014;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  portF2014 = YPfalse;
  portF2014 = BOXFAB(portF2014);
  T3 = FUNFAB(fun_17,2,portF2014,filename_);
  T4 = FUNFAB(fun_18,1,portF2014);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_in_20) {
  P filename_,ct_env_;
  P oF2016;
  P xF2015;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(filename_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rStopYread_file),filename_);
  xF2015 = T1;
  T3 = CALL3(1,VARREF(Yx8rSastYobjectify_with_subtransaction),xF2015,ct_env_,YPfalse);
  oF2016 = T3;
  T4 = CALL2(1,VARREF(Yx8rStopYrun),oF2016,ct_env_);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_21) {
  P filename_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(filename_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(Yx8rSastYload_in),filename_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_from_22) {
  P name_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYgoo_filename),name_);
  T0 = CALL2(1,VARREF(Yx8rStopYload),T1,modname_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_prompt_for_command_expression_23) {
  P env_,level_,prompt_;
  P argsF2020;
  P arg_strF2019;
  P tmpF2018;
  P formF2017;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(env_, 0);
  ARG(level_, 1);
  ARG(prompt_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfind_environment_module),env_);
  T0 = CALL1(1,VARREF(Yx8rSastYmodule_name),T1);
  CALLN(1,VARREF(YgooSruntimeYformat),5,VARREF(YgooSioSportYout),LITREF(lit_39),T0,level_,prompt_);
  CALL1(1,VARREF(YgooSioSportYforce_out),VARREF(YgooSioSportYout));
  T3 = CALL1(1,VARREF(YgooSruntimeYread),VARREF(YgooSioSportYin));
  formF2017 = T3;
  T6 = CALL2(1,VARREF(YisaQ),formF2017,VARREF(YLlstG));
  tmpF2018 = T6;
  if (tmpF2018 != YPfalse) {
    T9 = CALL1(1,VARREF(Yhead),formF2017);
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),T9,LITREF(lit_40));
    T7 = T8;
  } else {
    T7 = YPfalse;
  }
  T5 = T7;
  if (T5 != YPfalse) {
    T11 = CALL1(1,VARREF(YgooSioSportYgets),VARREF(YgooSioSportYin));
    arg_strF2019 = T11;
    T14 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_41),arg_strF2019,LITREF(lit_42));
    T13 = CALL1(1,VARREF(YgooSioSreadYread_from_string),T14);
    argsF2020 = T13;
    T16 = CALL1(1,VARREF(YgooStypesY2nd),formF2017);
    T15 = CALL2(1,VARREF(YgooSmacrosYpair),T16,argsF2020);
    T12 = T15;
    T10 = T12;
    T4 = T10;
  } else {
    T4 = formF2017;
  }
  T2 = T4;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_print_result_expression_24) {
  P env_,level_,label_,result_;
  P T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(env_, 0);
  ARG(level_, 1);
  ARG(label_, 2);
  ARG(result_, 3);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfind_environment_module),env_);
  T0 = CALL1(1,VARREF(Yx8rSastYmodule_name),T1);
  CALLN(1,VARREF(YgooSruntimeYformat),5,VARREF(YgooSioSportYout),LITREF(lit_46),T0,level_,label_);
  T2 = CALL2(1,VARREF(YgooSioSwriteYwrite),VARREF(YgooSioSportYout),result_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_do_stack_frames_25) {
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

FUNCODEDEF(fun_x_1474_26) {
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

FUNCODEDEF(fun_27) {
  P return_;
  P x_1473F2033;
  P x_1473F2032;
  P x_1473F2031;
  P x_1473F2030;
  P x_1473F2029;
  P x_1473F2028;
  P x_1473F2027;
  P bodyF2026;
  P argsF2025;
  P fF2024;
  P numF2023;
  P x_1473F2022;
  P x_1474F2021;
  P T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49;
  P T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33;
  P T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1474_26,1);
  x_1474F2021 = T1;
  FUNINIT(x_1474F2021, 1,return_);
  x_1473F2022 = FREEREF(0);
  numF2023 = YPfalse;
  numF2023 = BOXFAB(numF2023);
  fF2024 = YPfalse;
  fF2024 = BOXFAB(fF2024);
  argsF2025 = YPfalse;
  argsF2025 = BOXFAB(argsF2025);
  bodyF2026 = YPfalse;
  bodyF2026 = BOXFAB(bodyF2026);
  T11 = CALL2(1,VARREF(YisaQ),x_1473F2022,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1473F2022,LITREF(lit_53),x_1474F2021);
    x_1473F2027 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1473F2027,x_1474F2021);
    x_1473F2028 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1473F2028,x_1474F2021);
    BOXVAL(numF2023) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1473F2028);
    x_1473F2029 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1473F2029,x_1474F2021);
    BOXVAL(fF2024) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1473F2029);
    x_1473F2030 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1473F2030,x_1474F2021);
    BOXVAL(argsF2025) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1473F2030);
    x_1473F2031 = T24;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1473F2031,x_1474F2021);
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T26 = CALL1(1,VARREF(Ytail),x_1473F2027);
    x_1473F2032 = T26;
    BOXVAL(bodyF2026) = x_1473F2032;
    x_1473F2033 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1473F2033,x_1474F2021);
    T27 = T28;
    T14 = T27;
    T12 = T14;
  } else {
    T29 = CALL2(1,x_1474F2021,LITREF(lit_54),x_1473F2022);
  }
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T37 = BOXVAL(numF2023);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T38 = CALL1(1,VARREF(Ylst),YPint((P)0));
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T38,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T33 = CALL2(1,VARREF(YgooSmacrosYcat),T34,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_47));
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_48));
  T48 = BOXVAL(fF2024);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T46 = CALL3(1,VARREF(YgooSmacrosYcat),T47,T49,Ynil);
  T45 = CALL1(1,VARREF(Ylst),T46);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
  T54 = BOXVAL(argsF2025);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_58));
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T56 = CALL3(1,VARREF(YgooSmacrosYcat),T57,T58,Ynil);
  T55 = CALL1(1,VARREF(Ylst),T56);
  T51 = CALLN(1,VARREF(YgooSmacrosYcat),4,T52,T53,T55,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T59 = BOXVAL(bodyF2026);
  T62 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T64 = BOXVAL(numF2023);
  T63 = CALL1(1,VARREF(Ylst),T64);
  T61 = CALL3(1,VARREF(YgooSmacrosYcat),T62,T63,Ynil);
  T60 = CALL1(1,VARREF(Ylst),T61);
  T43 = CALLN(1,VARREF(YgooSmacrosYcat),6,T44,T45,T50,T59,T60,Ynil);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T40 = CALL3(1,VARREF(YgooSmacrosYcat),T41,T42,Ynil);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T30 = CALLN(1,VARREF(YgooSmacrosYcat),4,T31,T32,T39,Ynil);
  T9 = T30;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_28) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_27,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_29) {
  P f_,Uargs_;
  P argsF2034;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2034 = T1;
  T2 = BOXVAL(FREEREF(0));
  CALLN(1,VARREF(YgooSruntimeYformat),5,VARREF(YgooSioSportYout),LITREF(lit_62),T2,f_,argsF2034);
  T5 = BOXVAL(FREEREF(0));
  T4 = CALL2(1,VARREF(YgooSmathYA),T5,YPint((P)1));
  T3 = BOXVAL(FREEREF(0)) = T4;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_backtrace_30) {
  P numF2035;
  P T3,T2,T1,T0;
LINK_STACK();
loop:
  numF2035 = YPint((P)0);
  numF2035 = BOXFAB(numF2035);
  T3 = FUNFAB(fun_29,1,numF2035);
  T2 = CALL1(1,VARREF(Yx8rStopYdo_stack_frames),T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_31) {
  P f_,Uargs_;
  P argsF2036;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2036 = T1;
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(0),T3);
  if (T2 != YPfalse) {
    T5 = BOXVAL(FREEREF(1));
    T4 = CALLN(1,VARREF(YgooSruntimeYformat),5,VARREF(YgooSioSportYout),LITREF(lit_65),T5,f_,argsF2036);
  } else {
  }
  T8 = BOXVAL(FREEREF(1));
  T7 = CALL2(1,VARREF(YgooSmathYA),T8,YPint((P)1));
  T6 = BOXVAL(FREEREF(1)) = T7;
  T0 = T6;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_frame_32) {
  P n_;
  P numF2037;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(n_, 0);
loop:
  numF2037 = YPint((P)0);
  numF2037 = BOXFAB(numF2037);
  T3 = FUNFAB(fun_31,2,n_,numF2037);
  T2 = CALL1(1,VARREF(Yx8rStopYdo_stack_frames),T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_33) {
  P f_,Uargs_;
  P argsF2038;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2038 = T1;
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(0),T3);
  if (T2 != YPfalse) {
    T7 = CALL1(1,VARREF(Yfun_names),f_);
    T6 = CALL2(1,VARREF(YgooScolsSseqYpos),T7,FREEREF(3));
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),argsF2038,T6);
    T4 = CALL1(1,FREEREF(2),T5);
  } else {
  }
  T10 = BOXVAL(FREEREF(1));
  T9 = CALL2(1,VARREF(YgooSmathYA),T10,YPint((P)1));
  T8 = BOXVAL(FREEREF(1)) = T9;
  T0 = T8;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_34) {
  P ret_;
  P numF2039;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(ret_, 0);
loop:
  numF2039 = YPint((P)0);
  numF2039 = BOXFAB(numF2039);
  T2 = FUNFAB(fun_33,4,FREEREF(0),numF2039,ret_,FREEREF(1));
  T1 = CALL1(1,VARREF(Yx8rStopYdo_stack_frames),T2);
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_frame_var_35) {
  P n_,name_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(n_, 0);
  ARG(name_, 1);
loop:
  T1 = FUNFAB(fun_34,2,n_,name_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_36) {
  P f_,Uargs_;
  P argsF2040;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2040 = T1;
  T2 = BOXVAL(FREEREF(0));
  CALLN(1,VARREF(YgooSruntimeYformat),4,VARREF(YgooSioSportYout),LITREF(lit_69),T2,f_);
  T5 = BOXVAL(FREEREF(0));
  T4 = CALL2(1,VARREF(YgooSmathYA),T5,YPint((P)1));
  T3 = BOXVAL(FREEREF(0)) = T4;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bt_37) {
  P numF2041;
  P T3,T2,T1,T0;
LINK_STACK();
loop:
  numF2041 = YPint((P)0);
  numF2041 = BOXFAB(numF2041);
  T3 = FUNFAB(fun_36,1,numF2041);
  T2 = CALL1(1,VARREF(Yx8rStopYdo_stack_frames),T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ykeyboard_interrupt) {
  P T1,T0;
LINK_STACK();
loop:
  T1 = CALL1(1,VARREF(Ynew),VARREF(Yx8rStopYLkeyboard_interruptG));
  T0 = CALL1(1,VARREF(YgooSruntimeYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rStopYdo_restart) {
  P restarts_,n_;
  P tmpF2042;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(restarts_, 0);
  ARG(n_, 1);
loop:
  T0 = CALL1(1,VARREF(Ynot),restarts_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_74));
  } else {
  }
  T4 = CALL2(1,VARREF(YgooSmagYG),n_,YPint((P)0));
  tmpF2042 = T4;
  if (tmpF2042 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooStypesYlen),restarts_);
    T6 = CALL2(1,VARREF(YgooSmagYLE),n_,T7);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T8 = CALL1(1,VARREF(Yerror),LITREF(lit_75));
  } else {
  }
  T11 = CALL2(1,VARREF(YgooSmathY_),n_,YPint((P)1));
  T10 = CALL2(1,VARREF(YgooSmacrosYelt),restarts_,T11);
  T9 = CALL3(1,VARREF(YgooSruntimeYinvoke_handler_interactively),T10,VARREF(YgooSioSportYin),VARREF(YgooSioSportYout));
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_40) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_41) {
  P c_,r_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
loop:
  T0 = CALL2(1,VARREF(YisaQ),c_,VARREF(Yx8rStopYLkeyboard_interruptG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_84));
  } else {
    T3 = CALL1(1,VARREF(YgooSruntimeYdescribe_condition),c_);
    T2 = CALL3(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_85),T3);
  }
  T4 = CALL2(1,VARREF(YgooSmathYA),FREEREF(0),YPint((P)1));
  T5 = BOXVAL(FREEREF(3));
  CALLN(1,VARREF(Yx8rStopYtop_in),5,T4,FREEREF(1),FREEREF(2),YPtrue,T5);
  T6 = CALL1(1,FREEREF(4),YPfalse);
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_42) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_43) {
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

FUNCODEDEF(fun_x_1513_44) {
  P msg_,args_;
  P resF2043;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T3 = BOXVAL(FREEREF(2));
  T2 = CALL2(1,VARREF(Yx8rStopYauto_eval),FREEREF(1),T3);
  resF2043 = T2;
  T5 = BOXVAL(FREEREF(2));
  T4 = CALLN(1,VARREF(Yx8rStopYprint_result_expression),4,T5,FREEREF(3),LITREF(lit_102),resF2043);
  T1 = T4;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_45) {
  P return_;
  P x_1512F2050;
  P x_1512F2049;
  P x_1512F2048;
  P nameF2047;
  P nF2046;
  P x_1512F2045;
  P x_1513F2044;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1513_44,4);
  x_1513F2044 = T1;
  FUNINIT(x_1513F2044, 4,return_,FREEREF(0),FREEREF(1),FREEREF(2));
  x_1512F2045 = FREEREF(3);
  nF2046 = YPfalse;
  nF2046 = BOXFAB(nF2046);
  nameF2047 = YPfalse;
  nameF2047 = BOXFAB(nameF2047);
  T7 = CALL2(1,VARREF(YisaQ),x_1512F2045,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1512F2045,LITREF(lit_66),x_1513F2044);
    x_1512F2048 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1512F2048,x_1513F2044);
    BOXVAL(nF2046) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1512F2048);
    x_1512F2049 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1512F2049,x_1513F2044);
    BOXVAL(nameF2047) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1512F2049);
    x_1512F2050 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1512F2050,x_1513F2044);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1513F2044,LITREF(lit_54),x_1512F2045);
  }
  T19 = BOXVAL(nF2046);
  T20 = BOXVAL(nameF2047);
  T18 = CALL2(1,VARREF(Yx8rStopYframe_var),T19,T20);
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1510_46) {
  P msg_,args_;
  P x_1511F2051;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1511F2051 = FREEREF(1);
  T3 = FUNFAB(fun_45,4,FREEREF(2),FREEREF(3),FREEREF(4),x_1511F2051);
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_47) {
  P return_;
  P x_1509F2056;
  P x_1509F2055;
  P nF2054;
  P x_1509F2053;
  P x_1510F2052;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1510_46,5);
  x_1510F2052 = T1;
  FUNINIT(x_1510F2052, 5,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  x_1509F2053 = FREEREF(0);
  nF2054 = YPfalse;
  nF2054 = BOXFAB(nF2054);
  T5 = CALL2(1,VARREF(YisaQ),x_1509F2053,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1509F2053,LITREF(lit_63),x_1510F2052);
    x_1509F2055 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1509F2055,x_1510F2052);
    BOXVAL(nF2054) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1509F2055);
    x_1509F2056 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1509F2056,x_1510F2052);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1510F2052,LITREF(lit_54),x_1509F2053);
  }
  T14 = BOXVAL(nF2054);
  T13 = CALL1(1,VARREF(Yx8rStopYframe),T14);
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1507_48) {
  P msg_,args_;
  P x_1508F2057;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1508F2057 = FREEREF(1);
  T3 = FUNFAB(fun_47,4,x_1508F2057,FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  P return_;
  P x_1506F2060;
  P x_1506F2059;
  P x_1507F2058;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1507_48,5);
  x_1507F2058 = T1;
  FUNINIT(x_1507F2058, 5,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  x_1506F2059 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1506F2059,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1506F2059,LITREF(lit_60),x_1507F2058);
    x_1506F2060 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1506F2060,x_1507F2058);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1507F2058,LITREF(lit_54),x_1506F2059);
  }
  T8 = CALL0(1,VARREF(Yx8rStopYbacktrace));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1504_50) {
  P msg_,args_;
  P x_1505F2061;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1505F2061 = FREEREF(1);
  T3 = FUNFAB(fun_49,4,x_1505F2061,FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_51) {
  P return_;
  P x_1503F2064;
  P x_1503F2063;
  P x_1504F2062;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1504_50,5);
  x_1504F2062 = T1;
  FUNINIT(x_1504F2062, 5,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  x_1503F2063 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1503F2063,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1503F2063,LITREF(lit_68),x_1504F2062);
    x_1503F2064 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1503F2064,x_1504F2062);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1504F2062,LITREF(lit_54),x_1503F2063);
  }
  T8 = CALL0(1,VARREF(Yx8rStopYbt));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1501_52) {
  P msg_,args_;
  P x_1502F2065;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1502F2065 = FREEREF(1);
  T3 = FUNFAB(fun_51,4,x_1502F2065,FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_53) {
  P return_;
  P x_1500F2068;
  P x_1500F2067;
  P x_1501F2066;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1501_52,5);
  x_1501F2066 = T1;
  FUNINIT(x_1501F2066, 5,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  x_1500F2067 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1500F2067,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1500F2067,LITREF(lit_20),x_1501F2066);
    x_1500F2068 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1500F2068,x_1501F2066);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1501F2066,LITREF(lit_54),x_1500F2067);
  }
  T8 = VARSET(Yx8rStopYrun,VARREF(Yx8rStopYauto_run));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1498_54) {
  P msg_,args_;
  P x_1499F2069;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1499F2069 = FREEREF(1);
  T3 = FUNFAB(fun_53,4,x_1499F2069,FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  P return_;
  P x_1497F2072;
  P x_1497F2071;
  P x_1498F2070;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1498_54,5);
  x_1498F2070 = T1;
  FUNINIT(x_1498F2070, 5,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  x_1497F2071 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1497F2071,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1497F2071,LITREF(lit_103),x_1498F2070);
    x_1497F2072 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1497F2072,x_1498F2070);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1498F2070,LITREF(lit_54),x_1497F2071);
  }
  T8 = VARSET(Yx8rStopYrun,VARREF(Yx8rStopYast_run));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1495_56) {
  P msg_,args_;
  P x_1496F2073;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1496F2073 = FREEREF(1);
  T3 = FUNFAB(fun_55,4,x_1496F2073,FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_57) {
  P return_;
  P x_1494F2076;
  P x_1494F2075;
  P x_1495F2074;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1495_56,5);
  x_1495F2074 = T1;
  FUNINIT(x_1495F2074, 5,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  x_1494F2075 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1494F2075,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1494F2075,LITREF(lit_6),x_1495F2074);
    x_1494F2076 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1494F2076,x_1495F2074);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1495F2074,LITREF(lit_54),x_1494F2075);
  }
  T8 = VARSET(Yx8rStopYrun,VARREF(Yx8rStopYg2c_run));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1492_58) {
  P msg_,args_;
  P x_1493F2077;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1493F2077 = FREEREF(1);
  T3 = FUNFAB(fun_57,4,x_1493F2077,FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_59) {
  P return_;
  P new_envF2083;
  P x_1491F2082;
  P x_1491F2081;
  P mF2080;
  P x_1491F2079;
  P x_1492F2078;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1492_58,5);
  x_1492F2078 = T1;
  FUNINIT(x_1492F2078, 5,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  x_1491F2079 = FREEREF(0);
  mF2080 = YPfalse;
  mF2080 = BOXFAB(mF2080);
  T5 = CALL2(1,VARREF(YisaQ),x_1491F2079,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1491F2079,LITREF(lit_104),x_1492F2078);
    x_1491F2081 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1491F2081,x_1492F2078);
    BOXVAL(mF2080) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1491F2081);
    x_1491F2082 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1491F2082,x_1492F2078);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1492F2078,LITREF(lit_54),x_1491F2079);
  }
  T15 = BOXVAL(mF2080);
  T14 = CALL1(1,VARREF(Yx8rSastYruntime_environment),T15);
  new_envF2083 = T14;
  T16 = BOXVAL(FREEREF(2)) = new_envF2083;
  T13 = T16;
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1489_60) {
  P msg_,args_;
  P x_1490F2084;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1490F2084 = FREEREF(1);
  T3 = FUNFAB(fun_59,4,x_1490F2084,FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_61) {
  P return_;
  P x_1488F2089;
  P x_1488F2088;
  P nF2087;
  P x_1488F2086;
  P x_1489F2085;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1489_60,5);
  x_1489F2085 = T1;
  FUNINIT(x_1489F2085, 5,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  x_1488F2086 = FREEREF(0);
  nF2087 = YPfalse;
  nF2087 = BOXFAB(nF2087);
  T5 = CALL2(1,VARREF(YisaQ),x_1488F2086,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1488F2086,LITREF(lit_105),x_1489F2085);
    x_1488F2088 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1488F2088,x_1489F2085);
    BOXVAL(nF2087) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1488F2088);
    x_1488F2089 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1488F2089,x_1489F2085);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1489F2085,LITREF(lit_54),x_1488F2086);
  }
  T14 = BOXVAL(FREEREF(4));
  T15 = BOXVAL(nF2087);
  T13 = CALL2(1,VARREF(Yx8rStopYdo_restart),T14,T15);
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1486_62) {
  P msg_,args_;
  P x_1487F2090;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1487F2090 = FREEREF(1);
  T3 = FUNFAB(fun_61,5,x_1487F2090,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_63) {
  P return_;
  P x_1485F2093;
  P x_1485F2092;
  P x_1486F2091;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1486_62,6);
  x_1486F2091 = T1;
  FUNINIT(x_1486F2091, 6,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  x_1485F2092 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1485F2092,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1485F2092,LITREF(lit_73),x_1486F2091);
    x_1485F2093 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1485F2093,x_1486F2091);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1486F2091,LITREF(lit_54),x_1485F2092);
  }
  T8 = CALL2(1,VARREF(YgooSruntimeYlist_handlers),VARREF(YgooSruntimeYLrestartG),VARREF(YgooSioSportYout));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1483_64) {
  P msg_,args_;
  P x_1484F2094;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1484F2094 = FREEREF(1);
  T3 = FUNFAB(fun_63,5,x_1484F2094,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_65) {
  P return_;
  P x_1482F2097;
  P x_1482F2096;
  P x_1483F2095;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1483_64,6);
  x_1483F2095 = T1;
  FUNINIT(x_1483F2095, 6,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  x_1482F2096 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1482F2096,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1482F2096,LITREF(lit_106),x_1483F2095);
    x_1482F2097 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1482F2097,x_1483F2095);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1483F2095,LITREF(lit_54),x_1482F2096);
  }
  T8 = CALL2(1,VARREF(YgooSruntimeYlist_handlers),VARREF(YgooSruntimeYLconditionG),VARREF(YgooSioSportYout));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1480_66) {
  P msg_,args_;
  P x_1481F2098;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1481F2098 = FREEREF(1);
  T3 = FUNFAB(fun_65,5,x_1481F2098,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_67) {
  P return_;
  P x_1479F2101;
  P x_1479F2100;
  P x_1480F2099;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1480_66,6);
  x_1480F2099 = T1;
  FUNINIT(x_1480F2099, 6,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  x_1479F2100 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1479F2100,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1479F2100,LITREF(lit_107),x_1480F2099);
    x_1479F2101 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1479F2101,x_1480F2099);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1480F2099,LITREF(lit_54),x_1479F2100);
  }
  T8 = CALL1(1,FREEREF(5),YPfalse);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1477_68) {
  P msg_,args_;
  P x_1478F2102;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1478F2102 = FREEREF(1);
  T3 = FUNFAB(fun_67,6,x_1478F2102,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  P return_;
  P x_1476F2105;
  P x_1476F2104;
  P x_1477F2103;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1477_68,7);
  x_1477F2103 = T1;
  FUNINIT(x_1477F2103, 7,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5));
  x_1476F2104 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1476F2104,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1476F2104,LITREF(lit_78),x_1477F2103);
    x_1476F2105 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1476F2105,x_1477F2103);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1477F2103,LITREF(lit_54),x_1476F2104);
  }
  T8 = CALL1(1,FREEREF(6),YPfalse);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_70) {
  P x_1475F2107;
  P formF2106;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
  T0 = BOXVAL(FREEREF(0));
  if (T0 != YPfalse) {
    CALL2(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_87));
    T1 = CALL2(1,VARREF(YgooSruntimeYlist_handlers),VARREF(YgooSruntimeYLrestartG),VARREF(YgooSioSportYout));
    BOXVAL(FREEREF(1)) = T1;
    T2 = BOXVAL(FREEREF(0)) = YPfalse;
  } else {
  }
  T5 = BOXVAL(FREEREF(2));
  T4 = CALL3(1,VARREF(Yx8rStopYprompt_for_command_expression),T5,FREEREF(3),LITREF(lit_88));
  formF2106 = T4;
  T8 = CALL0(1,VARREF(YgooSmathYeof_object));
  T7 = CALL2(1,VARREF(YgooSmathYE),formF2106,T8);
  if (T7 != YPfalse) {
    T9 = CALL1(1,FREEREF(4),YPfalse);
    T6 = T9;
  } else {
    x_1475F2107 = formF2106;
    T12 = FUNFAB(fun_69,7,x_1475F2107,formF2106,FREEREF(2),FREEREF(3),FREEREF(1),FREEREF(5),FREEREF(4));
    T11 = with_exit(T12);
    T10 = T11;
    T6 = T10;
  }
  T3 = T6;
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_71) {
  P T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(Ylst),FREEREF(0));
  T1 = CALLN(1,VARREF(Ynew),5,VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_86),VARREF(Yhandler_info_arguments),T2);
  T3 = fun_42;
  T4 = FUNFAB(fun_43,1,FREEREF(1));
  T5 = FUNFAB(fun_70,6,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(0),FREEREF(5),FREEREF(6));
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YgooSruntimeYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_72) {
  P continue_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(continue_, 0);
loop:
  T1 = fun_40;
  T2 = FUNFAB(fun_41,5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),continue_);
  T3 = FUNFAB(fun_71,7,FREEREF(0),continue_,FREEREF(4),FREEREF(5),FREEREF(3),FREEREF(2),FREEREF(6));
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YgooSruntimeYLconditionG),VARREF(YgooSruntimeYDdefault_handler_info),T1,T2,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_73) {
  P T1,T0;
LINK_STACK();
loop:
  T0 = FUNFAB(fun_72,7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6));
  with_exit(T0);
  goto loop;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_74) {
  P blow_;
  P loopF2108;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_73,8);
  loopF2108 = T1;
  FUNINIT(loopF2108, 8,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),blow_,loopF2108);
  T2 = CALL0(0,loopF2108);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_top_in_75) {
  P level_,top_,quit_,show_restartsQ_,ct_env_;
  P restartsF2109;
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
  restartsF2109 = YPfalse;
  restartsF2109 = BOXFAB(restartsF2109);
  T5 = FUNFAB(fun_74,6,level_,top_,quit_,ct_env_,show_restartsQ_,restartsF2109);
  T4 = with_exit(T5);
  T2 = T4;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_76) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_77) {
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

FUNCODEDEF(fun_78) {
  P top_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(top_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYruntime_environment),FREEREF(1));
  T0 = CALLN(1,VARREF(Yx8rStopYtop_in),5,YPint((P)0),top_,FREEREF(0),YPfalse,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_79) {
  P T1,T0;
LINK_STACK();
loop:
  T0 = FUNFAB(fun_78,2,FREEREF(0),FREEREF(1));
  with_exit(T0);
  goto loop;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_80) {
  P loopF2110;
  P T2,T1,T0;
LINK_STACK();
loop:
  T1 = FUNSHELL(1,fun_loop_79,3);
  loopF2110 = T1;
  FUNINIT(loopF2110, 3,FREEREF(0),FREEREF(1),loopF2110);
  T2 = CALL0(0,loopF2110);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_81) {
  P quit_;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(quit_, 0);
loop:
  T2 = CALL0(1,VARREF(Ylst));
  T1 = CALLN(1,VARREF(Ynew),5,VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_108),VARREF(Yhandler_info_arguments),T2);
  T3 = fun_76;
  T4 = FUNFAB(fun_77,1,quit_);
  T5 = FUNFAB(fun_80,2,quit_,FREEREF(0));
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YgooSruntimeYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_top_82) {
  P modname_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = FUNFAB(fun_81,1,modname_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_83) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(Yx8rStopYtop),LITREF(lit_111));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rStopYsave_image) {
  P image_name_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(image_name_, 0);
loop:
  T1 = fun_83;
  T0 = CALL2(1,VARREF(Yunexec),image_name_,T1);
UNLINK_STACK();
  QRET(T0);
}

P Yx8rStopY___main_0___() {
  P T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168,T167;
  P T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152,T151;
  P T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135;
  P T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119;
  P T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103;
  P T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87;
  P T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71;
  P T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55;
  P T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"esctst");
  lit_1 = YPPsym((P)"exit");
  lit_2 = YPsb((P)"CLEANUP\n");
  lit_3 = YPPsym((P)"cleanup");
  lit_4 = YPsb((P)"DO\n");
  lit_5 = YPPsym((P)"done");
  T3 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_0 = YPmet(FUNCODEREF(fun_0),YPfalse,T3,ENVNUL,PNUL,YPfalse);
  T2 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_1 = YPmet(FUNCODEREF(fun_1),YPfalse,T2,ENVNUL,PNUL,YPfalse);
  T1 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Yx8rStopYesctst = YPmet(FUNCODEREF(Yx8rStopYesctst),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T4 = Yx8rStopYesctst;
  VARSET(Yx8rStopYesctst,T4);
  lit_6 = YPPsym((P)"g2c-eval");
  lit_7 = YPPsym((P)"exp");
  lit_8 = YPPsym((P)"ct-env");
  T6 = YPsig(YPPlist(2,LITREF(lit_7),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T5 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_6),T6,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yx8rStopYg2c_eval,T5);
  lit_9 = YPPsym((P)"parse-in");
  lit_10 = YPPsym((P)"s");
  T7 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_8)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_in_4 = YPmet(FUNCODEREF(fun_parse_in_4),LITREF(lit_9),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(Yx8rStopYparse_in);
  if (T10 != YPfalse) {
    T9 = VARREF(Yx8rStopYparse_in);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_parse_in_4;
  T8 = CALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(Yx8rStopYparse_in,T8);
  lit_11 = YPPsym((P)"parse");
  lit_12 = YPPsym((P)"modname");
  T12 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_12)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_5 = YPmet(FUNCODEREF(fun_parse_5),LITREF(lit_11),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(Yx8rStopYparse);
  if (T15 != YPfalse) {
    T14 = VARREF(Yx8rStopYparse);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_parse_5;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(Yx8rStopYparse,T13);
  lit_13 = YPPsym((P)"str-parse-in");
  lit_14 = YPsb((P)"%=\n");
  T17 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_8)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_parse_in_6 = YPmet(FUNCODEREF(fun_str_parse_in_6),LITREF(lit_13),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(Yx8rStopYstr_parse_in);
  if (T20 != YPfalse) {
    T19 = VARREF(Yx8rStopYstr_parse_in);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_str_parse_in_6;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(Yx8rStopYstr_parse_in,T18);
  lit_15 = YPPsym((P)"str-parse");
  T22 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_12)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_parse_7 = YPmet(FUNCODEREF(fun_str_parse_7),LITREF(lit_15),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(Yx8rStopYstr_parse);
  if (T25 != YPfalse) {
    T24 = VARREF(Yx8rStopYstr_parse);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_str_parse_7;
  T23 = CALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(Yx8rStopYstr_parse,T23);
  lit_16 = YPPsym((P)"ast-run");
  lit_17 = YPPsym((P)"ast");
  T27 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yx8rStopYast_run = YPmet(FUNCODEREF(Yx8rStopYast_run),LITREF(lit_16),T27,ENVNUL,PNUL,YPfalse);
  T28 = Yx8rStopYast_run;
  VARSET(Yx8rStopYast_run,T28);
  lit_18 = YPPsym((P)"g2c-run");
  T29 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yx8rStopYg2c_run = YPmet(FUNCODEREF(Yx8rStopYg2c_run),LITREF(lit_18),T29,ENVNUL,PNUL,YPfalse);
  T30 = Yx8rStopYg2c_run;
  VARSET(Yx8rStopYg2c_run,T30);
  lit_19 = YPPsym((P)"auto-run");
  T31 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yx8rStopYauto_run = YPmet(FUNCODEREF(Yx8rStopYauto_run),LITREF(lit_19),T31,ENVNUL,PNUL,YPfalse);
  T32 = Yx8rStopYauto_run;
  VARSET(Yx8rStopYauto_run,T32);
  lit_20 = YPPsym((P)"auto-eval");
  lit_21 = YPPsym((P)"form");
  T33 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yx8rStopYauto_eval = YPmet(FUNCODEREF(Yx8rStopYauto_eval),LITREF(lit_20),T33,ENVNUL,PNUL,YPfalse);
  T34 = Yx8rStopYauto_eval;
  VARSET(Yx8rStopYauto_eval,T34);
  VARSET(Yx8rStopYrun,VARREF(Yx8rStopYauto_run));
  lit_22 = YPPsym((P)"eval-in");
  lit_23 = YPPsym((P)"x");
  T35 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_in_12 = YPmet(FUNCODEREF(fun_eval_in_12),LITREF(lit_22),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(Yx8rStopYeval_in);
  if (T38 != YPfalse) {
    T37 = VARREF(Yx8rStopYeval_in);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_eval_in_12;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(Yx8rStopYeval_in,T36);
  lit_24 = YPPsym((P)"eval");
  T40 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_12)),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_13 = YPmet(FUNCODEREF(fun_eval_13),LITREF(lit_24),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(Yx8rSsyntaxYeval);
  if (T43 != YPfalse) {
    T42 = VARREF(Yx8rSsyntaxYeval);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_eval_13;
  T41 = CALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(Yx8rSsyntaxYeval,T41);
  lit_25 = YPPsym((P)"str-eval-in");
  T45 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_8)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_in_14 = YPmet(FUNCODEREF(fun_str_eval_in_14),LITREF(lit_25),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(Yx8rStopYstr_eval_in);
  if (T48 != YPfalse) {
    T47 = VARREF(Yx8rStopYstr_eval_in);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_str_eval_in_14;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(Yx8rStopYstr_eval_in,T46);
  lit_26 = YPPsym((P)"str-eval");
  T50 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_12)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_15 = YPmet(FUNCODEREF(fun_str_eval_15),LITREF(lit_26),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(Yx8rStopYstr_eval);
  if (T53 != YPfalse) {
    T52 = VARREF(Yx8rStopYstr_eval);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_str_eval_15;
  T51 = CALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(Yx8rStopYstr_eval,T51);
  lit_27 = YPPsym((P)"read-file");
  lit_28 = YPPsym((P)"filename");
  lit_29 = YPPsym((P)"loop");
  lit_30 = YPPsym((P)"forms");
  T58 = YPsig(YPPlist(1,LITREF(lit_30)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_16 = YPmet(FUNCODEREF(fun_loop_16),LITREF(lit_29),T58,ENVNUL,PNUL,YPfalse);
  T57 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T57,ENVNUL,PNUL,YPfalse);
  T56 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T56,ENVNUL,PNUL,YPfalse);
  T55 = YPsig(YPPlist(1,LITREF(lit_28)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_file_19 = YPmet(FUNCODEREF(fun_read_file_19),LITREF(lit_27),T55,ENVNUL,PNUL,YPfalse);
  T61 = BOUNDP(Yx8rStopYread_file);
  if (T61 != YPfalse) {
    T60 = VARREF(Yx8rStopYread_file);
  } else {
    T60 = YPfalse;
  }
  T62 = fun_read_file_19;
  T59 = CALL2(1,VARREF(YPdefine_method),T60,T62);
  VARSET(Yx8rStopYread_file,T59);
  lit_31 = YPPsym((P)"load-in");
  T63 = YPsig(YPPlist(2,LITREF(lit_28),LITREF(lit_8)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_in_20 = YPmet(FUNCODEREF(fun_load_in_20),LITREF(lit_31),T63,ENVNUL,PNUL,YPfalse);
  T66 = BOUNDP(Yx8rSastYload_in);
  if (T66 != YPfalse) {
    T65 = VARREF(Yx8rSastYload_in);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_load_in_20;
  T64 = CALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(Yx8rSastYload_in,T64);
  lit_32 = YPPsym((P)"load");
  T68 = YPsig(YPPlist(2,LITREF(lit_28),LITREF(lit_12)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_21 = YPmet(FUNCODEREF(fun_load_21),LITREF(lit_32),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(Yx8rStopYload);
  if (T71 != YPfalse) {
    T70 = VARREF(Yx8rStopYload);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_load_21;
  T69 = CALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(Yx8rStopYload,T69);
  lit_33 = YPPsym((P)"load-from");
  lit_34 = YPPsym((P)"name");
  T73 = YPsig(YPPlist(2,LITREF(lit_34),LITREF(lit_12)),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_from_22 = YPmet(FUNCODEREF(fun_load_from_22),LITREF(lit_33),T73,ENVNUL,PNUL,YPfalse);
  T76 = BOUNDP(Yx8rStopYload_from);
  if (T76 != YPfalse) {
    T75 = VARREF(Yx8rStopYload_from);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_load_from_22;
  T74 = CALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(Yx8rStopYload_from,T74);
  lit_35 = YPPsym((P)"prompt-for-command-expression");
  lit_36 = YPPsym((P)"env");
  lit_37 = YPPsym((P)"level");
  lit_38 = YPPsym((P)"prompt");
  lit_39 = YPsb((P)"%s %=%s");
  lit_40 = YPPsym((P)"unquote");
  lit_41 = YPsb((P)"(");
  lit_42 = YPsb((P)")");
  T78 = YPsig(YPPlist(3,LITREF(lit_36),LITREF(lit_37),LITREF(lit_38)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_prompt_for_command_expression_23 = YPmet(FUNCODEREF(fun_prompt_for_command_expression_23),LITREF(lit_35),T78,ENVNUL,PNUL,YPfalse);
  T81 = BOUNDP(Yx8rStopYprompt_for_command_expression);
  if (T81 != YPfalse) {
    T80 = VARREF(Yx8rStopYprompt_for_command_expression);
  } else {
    T80 = YPfalse;
  }
  T82 = fun_prompt_for_command_expression_23;
  T79 = CALL2(1,VARREF(YPdefine_method),T80,T82);
  VARSET(Yx8rStopYprompt_for_command_expression,T79);
  lit_43 = YPPsym((P)"print-result-expression");
  lit_44 = YPPsym((P)"label");
  lit_45 = YPPsym((P)"result");
  lit_46 = YPsb((P)"%s %=%s");
  T83 = YPsig(YPPlist(4,LITREF(lit_36),LITREF(lit_37),LITREF(lit_44),LITREF(lit_45)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_print_result_expression_24 = YPmet(FUNCODEREF(fun_print_result_expression_24),LITREF(lit_43),T83,ENVNUL,PNUL,YPfalse);
  T86 = BOUNDP(Yx8rStopYprint_result_expression);
  if (T86 != YPfalse) {
    T85 = VARREF(Yx8rStopYprint_result_expression);
  } else {
    T85 = YPfalse;
  }
  T87 = fun_print_result_expression_24;
  T84 = CALL2(1,VARREF(YPdefine_method),T85,T87);
  VARSET(Yx8rStopYprint_result_expression,T84);
  lit_47 = YPPsym((P)"do-stack-frames");
  lit_48 = YPPsym((P)"fun");
  T88 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_stack_frames_25 = YPmet(FUNCODEREF(fun_do_stack_frames_25),LITREF(lit_47),T88,ENVNUL,PNUL,YPfalse);
  T91 = BOUNDP(Yx8rStopYdo_stack_frames);
  if (T91 != YPfalse) {
    T90 = VARREF(Yx8rStopYdo_stack_frames);
  } else {
    T90 = YPfalse;
  }
  T92 = fun_do_stack_frames_25;
  T89 = CALL2(1,VARREF(YPdefine_method),T90,T92);
  VARSET(Yx8rStopYdo_stack_frames,T89);
  lit_49 = YPPsym((P)"return");
  lit_50 = YPPsym((P)"x-1474");
  lit_51 = YPPsym((P)"msg");
  lit_52 = YPPsym((P)"args");
  lit_53 = YPPsym((P)"for-frames");
  lit_54 = YPsb((P)"Match Pattern Failure");
  lit_55 = YPPsym((P)"let");
  lit_56 = YPPsym((P)"_args");
  lit_57 = YPPsym((P)"def");
  lit_58 = YPPsym((P)"rev");
  lit_59 = YPPsym((P)"incf");
  T95 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1474_26 = YPmet(FUNCODEREF(fun_x_1474_26),LITREF(lit_50),T95,ENVNUL,PNUL,YPfalse);
  T94 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T94,ENVNUL,PNUL,YPfalse);
  T93 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T93,ENVNUL,PNUL,YPfalse);
  T96 = fun_28;
  YPmacro(YPPsym((P)"x8r/top"),YPPsym((P)"for-frames"),T96);
  lit_60 = YPPsym((P)"backtrace");
  lit_61 = YPPsym((P)"f");
  lit_62 = YPsb((P)"[%=] %= %=\n");
  T98 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_56)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T98,ENVNUL,PNUL,YPfalse);
  T97 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_backtrace_30 = YPmet(FUNCODEREF(fun_backtrace_30),LITREF(lit_60),T97,ENVNUL,PNUL,YPfalse);
  T101 = BOUNDP(Yx8rStopYbacktrace);
  if (T101 != YPfalse) {
    T100 = VARREF(Yx8rStopYbacktrace);
  } else {
    T100 = YPfalse;
  }
  T102 = fun_backtrace_30;
  T99 = CALL2(1,VARREF(YPdefine_method),T100,T102);
  VARSET(Yx8rStopYbacktrace,T99);
  lit_63 = YPPsym((P)"frame");
  lit_64 = YPPsym((P)"n");
  lit_65 = YPsb((P)"[%=] %= %=\n");
  T104 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_56)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T104,ENVNUL,PNUL,YPfalse);
  T103 = YPsig(YPPlist(1,LITREF(lit_64)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_frame_32 = YPmet(FUNCODEREF(fun_frame_32),LITREF(lit_63),T103,ENVNUL,PNUL,YPfalse);
  T107 = BOUNDP(Yx8rStopYframe);
  if (T107 != YPfalse) {
    T106 = VARREF(Yx8rStopYframe);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_frame_32;
  T105 = CALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(Yx8rStopYframe,T105);
  lit_66 = YPPsym((P)"frame-var");
  lit_67 = YPPsym((P)"ret");
  T111 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_56)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T111,ENVNUL,PNUL,YPfalse);
  T110 = YPsig(YPPlist(1,LITREF(lit_67)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T110,ENVNUL,PNUL,YPfalse);
  T109 = YPsig(YPPlist(2,LITREF(lit_64),LITREF(lit_34)),YPPlist(2,VARREF(YLintG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_frame_var_35 = YPmet(FUNCODEREF(fun_frame_var_35),LITREF(lit_66),T109,ENVNUL,PNUL,YPfalse);
  T114 = BOUNDP(Yx8rStopYframe_var);
  if (T114 != YPfalse) {
    T113 = VARREF(Yx8rStopYframe_var);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_frame_var_35;
  T112 = CALL2(1,VARREF(YPdefine_method),T113,T115);
  VARSET(Yx8rStopYframe_var,T112);
  lit_68 = YPPsym((P)"bt");
  lit_69 = YPsb((P)"[%=] %=\n");
  T117 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_56)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T117,ENVNUL,PNUL,YPfalse);
  T116 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_bt_37 = YPmet(FUNCODEREF(fun_bt_37),LITREF(lit_68),T116,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(Yx8rStopYbt);
  if (T120 != YPfalse) {
    T119 = VARREF(Yx8rStopYbt);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_bt_37;
  T118 = CALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(Yx8rStopYbt,T118);
  lit_70 = YPPsym((P)"<keyboard-interrupt>");
  T123 = (P)YPpair(VARREF(YgooSruntimeYLconditionG),Ynil);
  T122 = CALL2(1,VARREF(Yfab_class),LITREF(lit_70),T123);
  VARSET(Yx8rStopYLkeyboard_interruptG,T122);
  lit_71 = YPPsym((P)"keyboard-interrupt");
  T124 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Ykeyboard_interrupt = YPmet(FUNCODEREF(Ykeyboard_interrupt),LITREF(lit_71),T124,ENVNUL,PNUL,YPfalse);
  T125 = Ykeyboard_interrupt;
  VARSET(Ykeyboard_interrupt,T125);
  lit_72 = YPPsym((P)"do-restart");
  lit_73 = YPPsym((P)"restarts");
  lit_74 = YPsb((P)"No restarts available.\n");
  lit_75 = YPsb((P)"No restart #%d.\n");
  T126 = YPsig(YPPlist(2,LITREF(lit_73),LITREF(lit_64)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yx8rStopYdo_restart = YPmet(FUNCODEREF(Yx8rStopYdo_restart),LITREF(lit_72),T126,ENVNUL,PNUL,YPfalse);
  T127 = Yx8rStopYdo_restart;
  VARSET(Yx8rStopYdo_restart,T127);
  lit_76 = YPPsym((P)"top-in");
  lit_77 = YPPsym((P)"top");
  lit_78 = YPPsym((P)"quit");
  lit_79 = YPPsym((P)"show-restarts?");
  lit_80 = YPPsym((P)"blow");
  lit_81 = YPPsym((P)"continue");
  lit_82 = YPPsym((P)"c");
  lit_83 = YPPsym((P)"r");
  lit_84 = YPsb((P)"BREAK");
  lit_85 = YPsb((P)"ERROR: %s");
  lit_86 = YPsb((P)"Return to interpreter level %d");
  lit_87 = YPsb((P)"Type (restart N) to restart execution:\n");
  lit_88 = YPsb((P)"<= ");
  lit_89 = YPPsym((P)"x-1477");
  lit_90 = YPPsym((P)"x-1480");
  lit_91 = YPPsym((P)"x-1483");
  lit_92 = YPPsym((P)"x-1486");
  lit_93 = YPPsym((P)"x-1489");
  lit_94 = YPPsym((P)"x-1492");
  lit_95 = YPPsym((P)"x-1495");
  lit_96 = YPPsym((P)"x-1498");
  lit_97 = YPPsym((P)"x-1501");
  lit_98 = YPPsym((P)"x-1504");
  lit_99 = YPPsym((P)"x-1507");
  lit_100 = YPPsym((P)"x-1510");
  lit_101 = YPPsym((P)"x-1513");
  lit_102 = YPsb((P)"=> ");
  lit_103 = YPPsym((P)"ast-eval");
  lit_104 = YPPsym((P)"in");
  lit_105 = YPPsym((P)"restart");
  lit_106 = YPPsym((P)"handlers");
  lit_107 = YPPsym((P)"up");
  T163 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(YPPlist(2,LITREF(lit_82),LITREF(lit_83)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(YPPlist(2,LITREF(lit_82),LITREF(lit_83)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T160,ENVNUL,PNUL,YPfalse);
  T159 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1513_44 = YPmet(FUNCODEREF(fun_x_1513_44),LITREF(lit_101),T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1510_46 = YPmet(FUNCODEREF(fun_x_1510_46),LITREF(lit_100),T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T156,ENVNUL,PNUL,YPfalse);
  T155 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1507_48 = YPmet(FUNCODEREF(fun_x_1507_48),LITREF(lit_99),T155,ENVNUL,PNUL,YPfalse);
  T154 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T154,ENVNUL,PNUL,YPfalse);
  T153 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1504_50 = YPmet(FUNCODEREF(fun_x_1504_50),LITREF(lit_98),T153,ENVNUL,PNUL,YPfalse);
  T152 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1501_52 = YPmet(FUNCODEREF(fun_x_1501_52),LITREF(lit_97),T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T150,ENVNUL,PNUL,YPfalse);
  T149 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1498_54 = YPmet(FUNCODEREF(fun_x_1498_54),LITREF(lit_96),T149,ENVNUL,PNUL,YPfalse);
  T148 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T148,ENVNUL,PNUL,YPfalse);
  T147 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1495_56 = YPmet(FUNCODEREF(fun_x_1495_56),LITREF(lit_95),T147,ENVNUL,PNUL,YPfalse);
  T146 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_57 = YPmet(FUNCODEREF(fun_57),YPfalse,T146,ENVNUL,PNUL,YPfalse);
  T145 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1492_58 = YPmet(FUNCODEREF(fun_x_1492_58),LITREF(lit_94),T145,ENVNUL,PNUL,YPfalse);
  T144 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T144,ENVNUL,PNUL,YPfalse);
  T143 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1489_60 = YPmet(FUNCODEREF(fun_x_1489_60),LITREF(lit_93),T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1486_62 = YPmet(FUNCODEREF(fun_x_1486_62),LITREF(lit_92),T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPmet(FUNCODEREF(fun_63),YPfalse,T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1483_64 = YPmet(FUNCODEREF(fun_x_1483_64),LITREF(lit_91),T139,ENVNUL,PNUL,YPfalse);
  T138 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T138,ENVNUL,PNUL,YPfalse);
  T137 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1480_66 = YPmet(FUNCODEREF(fun_x_1480_66),LITREF(lit_90),T137,ENVNUL,PNUL,YPfalse);
  T136 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_67 = YPmet(FUNCODEREF(fun_67),YPfalse,T136,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1477_68 = YPmet(FUNCODEREF(fun_x_1477_68),LITREF(lit_89),T135,ENVNUL,PNUL,YPfalse);
  T134 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T132,ENVNUL,PNUL,YPfalse);
  T131 = YPsig(YPPlist(1,LITREF(lit_81)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T131,ENVNUL,PNUL,YPfalse);
  T130 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_73 = YPmet(FUNCODEREF(fun_loop_73),LITREF(lit_29),T130,ENVNUL,PNUL,YPfalse);
  T129 = YPsig(YPPlist(1,LITREF(lit_80)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_74 = YPmet(FUNCODEREF(fun_74),YPfalse,T129,ENVNUL,PNUL,YPfalse);
  T128 = YPsig(YPPlist(5,LITREF(lit_37),LITREF(lit_77),LITREF(lit_78),LITREF(lit_79),LITREF(lit_8)),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_top_in_75 = YPmet(FUNCODEREF(fun_top_in_75),LITREF(lit_76),T128,ENVNUL,PNUL,YPfalse);
  T166 = BOUNDP(Yx8rStopYtop_in);
  if (T166 != YPfalse) {
    T165 = VARREF(Yx8rStopYtop_in);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_top_in_75;
  T164 = CALL2(1,VARREF(YPdefine_method),T165,T167);
  VARSET(Yx8rStopYtop_in,T164);
  lit_108 = YPsb((P)"Exit the top-level interpreter");
  T174 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T174,ENVNUL,PNUL,YPfalse);
  T173 = YPsig(YPPlist(2,LITREF(lit_82),LITREF(lit_83)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_77 = YPmet(FUNCODEREF(fun_77),YPfalse,T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(YPPlist(1,LITREF(lit_77)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_78 = YPmet(FUNCODEREF(fun_78),YPfalse,T172,ENVNUL,PNUL,YPfalse);
  T171 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_79 = YPmet(FUNCODEREF(fun_loop_79),LITREF(lit_29),T171,ENVNUL,PNUL,YPfalse);
  T170 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(YPPlist(1,LITREF(lit_78)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_top_82 = YPmet(FUNCODEREF(fun_top_82),LITREF(lit_77),T168,ENVNUL,PNUL,YPfalse);
  T177 = BOUNDP(Yx8rStopYtop);
  if (T177 != YPfalse) {
    T176 = VARREF(Yx8rStopYtop);
  } else {
    T176 = YPfalse;
  }
  T178 = fun_top_82;
  T175 = CALL2(1,VARREF(YPdefine_method),T176,T178);
  VARSET(Yx8rStopYtop,T175);
  lit_109 = YPPsym((P)"save-image");
  lit_110 = YPPsym((P)"image-name");
  lit_111 = YPPsym((P)"goo/user");
  T180 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_83 = YPmet(FUNCODEREF(fun_83),YPfalse,T180,ENVNUL,PNUL,YPfalse);
  T179 = YPsig(YPPlist(1,LITREF(lit_110)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yx8rStopYsave_image = YPmet(FUNCODEREF(Yx8rStopYsave_image),LITREF(lit_109),T179,ENVNUL,PNUL,YPfalse);
  T181 = Yx8rStopYsave_image;
  VARSET(Yx8rStopYsave_image,T181);
  T182 = YPfalse;
  return T182;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_x8rSsyntax;
extern MODULE_INFO module_info_x8rSast;
extern MODULE_INFO module_info_x8rSast_linearize;
extern MODULE_INFO module_info_x8rSast_eval;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSassoc;
extern MODULE_INFO module_info_gooScolsSzip;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSruntime},
  {&module_info_gooSioSread},
  {&module_info_gooSioSwrite},
  {&module_info_x8rSsyntax},
  {&module_info_x8rSast},
  {&module_info_x8rSast_linearize},
  {&module_info_x8rSast_eval},
  {&module_info_gooSsystem},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScols},
  {&module_info_gooSioSport},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"quote", &module_info_gooSboot, "quote"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"sexpr-expand-backquote", &module_info_x8rSsyntax, "sexpr-expand-backquote"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"objectify-with-subtransaction", &module_info_x8rSast, "objectify-with-subtransaction"},
  {"constant-index", &module_info_x8rSast, "constant-index"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"*register-passive?*", &module_info_x8rSast_linearize, "*register-passive?*"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"def-list", &module_info_x8rSast, "def-list"},
  {"alternative-alternant", &module_info_x8rSast, "alternative-alternant"},
  {"sexpr-operands", &module_info_x8rSsyntax, "sexpr-operands"},
  {"items", &module_info_gooScolsScol, "items"},
  {"application-function", &module_info_x8rSast, "application-function"},
  {"round", &module_info_gooSmath, "round"},
  {"loc", &module_info_gooSboot, "loc"},
  {"sexpr-definition-value", &module_info_x8rSsyntax, "sexpr-definition-value"},
  {"function-body", &module_info_x8rSast, "function-body"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"sexpr-syntax-if-else", &module_info_x8rSsyntax, "sexpr-syntax-if-else"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"<runtime-reference>", &module_info_x8rSast, "<runtime-reference>"},
  {"sexpr-assignment-value", &module_info_x8rSsyntax, "sexpr-assignment-value"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"len", &module_info_gooStypes, "len"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"sexpr-signature-value", &module_info_x8rSsyntax, "sexpr-signature-value"},
  {"sexpr-syntax-definition-variable", &module_info_x8rSsyntax, "sexpr-syntax-definition-variable"},
  {"function-index-setter", &module_info_x8rSast, "function-index-setter"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"sexpr-sequence->begin", &module_info_x8rSsyntax, "sexpr-sequence->begin"},
  {"min", &module_info_gooSmag, "min"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"find", &module_info_gooScolsScol, "find"},
  {"as", &module_info_gooStypes, "as"},
  {"format-to-string", &module_info_gooSruntime, "format-to-string"},
  {"fix-let-types", &module_info_x8rSast, "fix-let-types"},
  {"lift!", &module_info_x8rSast_linearize, "lift!"},
  {"do-module-loader-modules", &module_info_x8rSast, "do-module-loader-modules"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"<program>", &module_info_x8rSast, "<program>"},
  {"compile-time-program", &module_info_x8rSast, "compile-time-program"},
  {"gather-temporaries!", &module_info_x8rSast_linearize, "gather-temporaries!"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"module-name-to-relpath", &module_info_x8rSast, "module-name-to-relpath"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"log", &module_info_gooSmath, "log"},
  {"binding-index-setter", &module_info_x8rSast, "binding-index-setter"},
  {"binding-dotted?-setter", &module_info_x8rSast, "binding-dotted?-setter"},
  {"sexpr-forward-primitive?", &module_info_x8rSsyntax, "sexpr-forward-primitive?"},
  {"$sexpr-locals-tag", &module_info_x8rSsyntax, "$sexpr-locals-tag"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"sexpr-block-name", &module_info_x8rSsyntax, "sexpr-block-name"},
  {"fab-map", &module_info_gooScolsSmap, "fab-map"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"$sexpr-let-tag", &module_info_x8rSsyntax, "$sexpr-let-tag"},
  {"function-data-refs-setter", &module_info_x8rSast, "function-data-refs-setter"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"sexpr-prop-owner", &module_info_x8rSsyntax, "sexpr-prop-owner"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"sexpr-iterate->loc", &module_info_x8rSsyntax, "sexpr-iterate->loc"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"$sexpr-define-method-tag", &module_info_x8rSsyntax, "$sexpr-define-method-tag"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"%binding-value", &module_info_x8rSast_eval, "%binding-value"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"remove-modules-by-name!", &module_info_x8rSast, "remove-modules-by-name!"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"signature-value-setter", &module_info_x8rSast, "signature-value-setter"},
  {"sexpr-loc-bound-names", &module_info_x8rSsyntax, "sexpr-loc-bound-names"},
  {"application-known?-setter", &module_info_x8rSast, "application-known?-setter"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"function-data-refs", &module_info_x8rSast, "function-data-refs"},
  {"program-definitions", &module_info_x8rSast_linearize, "program-definitions"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"$e", &module_info_gooSmath, "$e"},
  {">", &module_info_gooSmag, ">"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"unconstrained-type?", &module_info_x8rSast_linearize, "unconstrained-type?"},
  {"function-free", &module_info_x8rSast, "function-free"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"<passive-program>", &module_info_x8rSast, "<passive-program>"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"signature-arity", &module_info_x8rSast, "signature-arity"},
  {"signature-bindings", &module_info_x8rSast, "signature-bindings"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"sexpr-operator", &module_info_x8rSsyntax, "sexpr-operator"},
  {"signature-names-setter", &module_info_x8rSast, "signature-names-setter"},
  {"sexpr-prop-name", &module_info_x8rSsyntax, "sexpr-prop-name"},
  {"any2?", &module_info_gooScolsScol, "any2?"},
  {"@+", &module_info_gooSboot, "@+"},
  {"collect-registers!", &module_info_x8rSast_linearize, "collect-registers!"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"ast-define-binding", &module_info_x8rSast, "ast-define-binding"},
  {"$sexpr-define-generic-tag", &module_info_x8rSsyntax, "$sexpr-define-generic-tag"},
  {"<box-creation>", &module_info_x8rSast_linearize, "<box-creation>"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"map2", &module_info_gooScolsScol, "map2"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"sexpr-syntax-if-then", &module_info_x8rSsyntax, "sexpr-syntax-if-then"},
  {"fix-let-arguments-setter", &module_info_x8rSast, "fix-let-arguments-setter"},
  {"monitor-handler", &module_info_x8rSast, "monitor-handler"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"monitor-test", &module_info_x8rSast, "monitor-test"},
  {"as-copy", &module_info_gooScolsScol, "as-copy"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"always", &module_info_gooSruntime, "always"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"~", &module_info_gooSmath, "~"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"sexpr-isa-init-props", &module_info_x8rSsyntax, "sexpr-isa-init-props"},
  {"df", &module_info_gooSboot, "df"},
  {"floor", &module_info_gooSmath, "floor"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"environment-module", &module_info_x8rSast, "environment-module"},
  {"function-binding", &module_info_x8rSast, "function-binding"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"box-form", &module_info_x8rSast_linearize, "box-form"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"for", &module_info_gooSmacros, "for"},
  {"reference-called-function?", &module_info_x8rSast, "reference-called-function?"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {">=", &module_info_gooSmag, ">="},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"<", &module_info_gooSmag, "<"},
  {"neg", &module_info_gooSmath, "neg"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"sexpr-make-application", &module_info_x8rSsyntax, "sexpr-make-application"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"dv", &module_info_gooSboot, "dv"},
  {"$sexpr-define-function-tag", &module_info_x8rSsyntax, "$sexpr-define-function-tag"},
  {"-", &module_info_gooSmath, "-"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"<module>", &module_info_x8rSast, "<module>"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"module-syntax-environment", &module_info_x8rSast, "module-syntax-environment"},
  {"function-temporaries", &module_info_x8rSast, "function-temporaries"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"$sexpr-prop-tag", &module_info_x8rSsyntax, "$sexpr-prop-tag"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"display", &module_info_gooSioSwrite, "display"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"<renamed-local-binding>", &module_info_x8rSast_linearize, "<renamed-local-binding>"},
  {"nul", &module_info_gooSboot, "nul"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"if", &module_info_gooSboot, "if"},
  {"install-initial-bindings", &module_info_x8rSast, "install-initial-bindings"},
  {"recurring-write", &module_info_gooSioSwrite, "recurring-write"},
  {"sexpr-loc-bound-bodies", &module_info_x8rSsyntax, "sexpr-loc-bound-bodies"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"pe-format", &module_info_gooSioSwrite, "pe-format"},
  {"sexpr-function-signature", &module_info_x8rSsyntax, "sexpr-function-signature"},
  {"objectify-signature", &module_info_x8rSast, "objectify-signature"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"abs", &module_info_gooSmath, "abs"},
  {"binding-info", &module_info_x8rSast, "binding-info"},
  {"sexpr-syntax-if-pattern", &module_info_x8rSsyntax, "sexpr-syntax-if-pattern"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"module-name", &module_info_x8rSast, "module-name"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"form-program", &module_info_x8rSast_linearize, "form-program"},
  {"eval", &module_info_x8rSsyntax, "eval"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"box-reference", &module_info_x8rSast_linearize, "box-reference"},
  {"tab-test", &module_info_gooScolsStab, "tab-test"},
  {"binding-locative", &module_info_x8rSast, "binding-locative"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"function-registers-setter", &module_info_x8rSast, "function-registers-setter"},
  {"get", &module_info_gooSioSport, "get"},
  {"dg", &module_info_gooSboot, "dg"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"<local-reference>", &module_info_x8rSast, "<local-reference>"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"fix-let-body-setter", &module_info_x8rSast, "fix-let-body-setter"},
  {"dss", &module_info_gooSboot, "dss"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"function-source", &module_info_x8rSast, "function-source"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"<local-assignment>", &module_info_x8rSast, "<local-assignment>"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"sexpr-if-test", &module_info_x8rSsyntax, "sexpr-if-test"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"<module-binding-reference>", &module_info_x8rSast, "<module-binding-reference>"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"function-debug-name", &module_info_x8rSast, "function-debug-name"},
  {"%put", &module_info_gooSboot, "%put"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"ast-contains-fun?", &module_info_x8rSast_linearize, "ast-contains-fun?"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"<ast-function>", &module_info_x8rSast, "<ast-function>"},
  {"init-ast", &module_info_x8rSast, "init-ast"},
  {"binding-dotted?", &module_info_x8rSast, "binding-dotted?"},
  {"binding-index", &module_info_x8rSast, "binding-index"},
  {"spread", &module_info_gooSruntime, "spread"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"unwind-protect-protected-thunk", &module_info_x8rSast, "unwind-protect-protected-thunk"},
  {"module-exports", &module_info_x8rSast, "module-exports"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"%str", &module_info_gooSboot, "%str"},
  {"free-environment", &module_info_x8rSast, "free-environment"},
  {"signature-value", &module_info_x8rSast, "signature-value"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"port2str", &module_info_gooSioSport, "port2str"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"<<", &module_info_gooSmath, "<<"},
  {"not", &module_info_gooSboot, "not"},
  {"op", &module_info_gooSmacros, "op"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"asin", &module_info_gooSmath, "asin"},
  {"dc", &module_info_gooSboot, "dc"},
  {"fab-g2c-module", &module_info_x8rSast, "fab-g2c-module"},
  {"sexpr-prop-init", &module_info_x8rSsyntax, "sexpr-prop-init"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"probe-module", &module_info_x8rSast, "probe-module"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"flatten-seqs", &module_info_x8rSast_linearize, "flatten-seqs"},
  {"sexpr-def-value", &module_info_x8rSsyntax, "sexpr-def-value"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"fix-let-bindings", &module_info_x8rSast, "fix-let-bindings"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"export", &module_info_gooSboot, "export"},
  {"locals-body", &module_info_x8rSast, "locals-body"},
  {"<=", &module_info_gooSmag, "<="},
  {"%binding-value-setter", &module_info_x8rSast_eval, "%binding-value-setter"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"do-named-static-global-bindings", &module_info_x8rSast, "do-named-static-global-bindings"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"sexpr-def?", &module_info_x8rSsyntax, "sexpr-def?"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"assignment-binding", &module_info_x8rSast, "assignment-binding"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"even?", &module_info_gooSmath, "even?"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"runtime-environment", &module_info_x8rSast, "runtime-environment"},
  {"<ast-macro-definition>", &module_info_x8rSast, "<ast-macro-definition>"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"$sexpr-isa-tag", &module_info_x8rSsyntax, "$sexpr-isa-tag"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"program-quotations", &module_info_x8rSast_linearize, "program-quotations"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"function-temporaries-setter", &module_info_x8rSast, "function-temporaries-setter"},
  {"head", &module_info_gooSboot, "head"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"sexpr-loc-raw-body", &module_info_x8rSsyntax, "sexpr-loc-raw-body"},
  {"sexpr-method-signature", &module_info_x8rSsyntax, "sexpr-method-signature"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"sexpr-bind-pattern-variables", &module_info_x8rSsyntax, "sexpr-bind-pattern-variables"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"<binding>", &module_info_x8rSast, "<binding>"},
  {"sexpr-function-definition-value", &module_info_x8rSsyntax, "sexpr-function-definition-value"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"closure-creation-index", &module_info_x8rSast_linearize, "closure-creation-index"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"sexpr-unquote-splicing?", &module_info_x8rSsyntax, "sexpr-unquote-splicing?"},
  {"application-tail?", &module_info_x8rSast, "application-tail?"},
  {"<global-reference>", &module_info_x8rSast, "<global-reference>"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"let", &module_info_gooSboot, "let"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"load-in", &module_info_x8rSast, "load-in"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"or", &module_info_gooSmacros, "or"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"fix-let-arguments", &module_info_x8rSast, "fix-let-arguments"},
  {"<ast-generic>", &module_info_x8rSast, "<ast-generic>"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"acos", &module_info_gooSmath, "acos"},
  {"%su", &module_info_gooSboot, "%su"},
  {"binding-type-setter", &module_info_x8rSast, "binding-type-setter"},
  {"function-bindings", &module_info_x8rSast, "function-bindings"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"<global-box>", &module_info_x8rSast, "<global-box>"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"fix-let-bindings-setter", &module_info_x8rSast, "fix-let-bindings-setter"},
  {"insert-box!", &module_info_x8rSast_linearize, "insert-box!"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"binding-native-to?", &module_info_x8rSast, "binding-native-to?"},
  {"binding-type", &module_info_x8rSast, "binding-type"},
  {"monitor-type", &module_info_x8rSast, "monitor-type"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"%im", &module_info_gooSboot, "%im"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"as-lst", &module_info_x8rSast, "as-lst"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"t*", &module_info_gooStypes, "t*"},
  {"constant-value", &module_info_x8rSast, "constant-value"},
  {"sexpr-function-definition-variable", &module_info_x8rSsyntax, "sexpr-function-definition-variable"},
  {"binding-inferred-type-setter", &module_info_x8rSast, "binding-inferred-type-setter"},
  {"<ast-primitive-definition>", &module_info_x8rSast, "<ast-primitive-definition>"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"map", &module_info_gooSmacros, "map"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"sexpr-definition-variable", &module_info_x8rSsyntax, "sexpr-definition-variable"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"$sexpr-quote-tag", &module_info_x8rSsyntax, "$sexpr-quote-tag"},
  {"&", &module_info_gooSmath, "&"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"alternative-condition", &module_info_x8rSast, "alternative-condition"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"closurize-main!", &module_info_x8rSast_linearize, "closurize-main!"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"module-binding", &module_info_x8rSast, "module-binding"},
  {"<ast-method>", &module_info_x8rSast, "<ast-method>"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"sexpr-if-else", &module_info_x8rSsyntax, "sexpr-if-else"},
  {"locals-body-setter", &module_info_x8rSast, "locals-body-setter"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"<bind-exit>", &module_info_x8rSast, "<bind-exit>"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"atan", &module_info_gooSmath, "atan"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"report-undefined-global-bindings", &module_info_x8rSast, "report-undefined-global-bindings"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"bind-exit-main-fun", &module_info_x8rSast, "bind-exit-main-fun"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"function-signature-setter", &module_info_x8rSast, "function-signature-setter"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"reference-frame-number", &module_info_x8rSast, "reference-frame-number"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"program-type", &module_info_x8rSast, "program-type"},
  {"register-allocate!", &module_info_x8rSast_linearize, "register-allocate!"},
  {"binding-global-box-setter", &module_info_x8rSast, "binding-global-box-setter"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"<fab-list>", &module_info_x8rSast, "<fab-list>"},
  {"function-source-setter", &module_info_x8rSast, "function-source-setter"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"while", &module_info_gooSmacros, "while"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"<module-binding>", &module_info_x8rSast, "<module-binding>"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"ast-evaluate", &module_info_x8rSast, "ast-evaluate"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"pop", &module_info_gooScolsSlst, "pop"},
  {"<static-global-environment>", &module_info_x8rSast, "<static-global-environment>"},
  {"~=", &module_info_gooSmath, "~="},
  {"t=", &module_info_gooStypes, "t="},
  {"string-join", &module_info_gooScolsSstr, "string-join"},
  {"$sexpr-set-tag", &module_info_x8rSsyntax, "$sexpr-set-tag"},
  {"application-binding", &module_info_x8rSast, "application-binding"},
  {"mif", &module_info_gooSboot, "mif"},
  {"new", &module_info_gooSboot, "new"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"sexpr-define-class-parents", &module_info_x8rSsyntax, "sexpr-define-class-parents"},
  {">>", &module_info_gooSmath, ">>"},
  {"low-into", &module_info_gooScolsScol, "low-into"},
  {"sexpr-make-begin", &module_info_x8rSsyntax, "sexpr-make-begin"},
  {"^", &module_info_gooSmath, "^"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"function-index", &module_info_x8rSast, "function-index"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"msg", &module_info_gooSioSwrite, "msg"},
  {"sexpr-unwind-protect-protected-form", &module_info_x8rSsyntax, "sexpr-unwind-protect-protected-form"},
  {"sexpr-fab-getter", &module_info_x8rSsyntax, "sexpr-fab-getter"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"do", &module_info_gooSmacros, "do"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"<raw-constant>", &module_info_x8rSast, "<raw-constant>"},
  {"<compile-time>", &module_info_x8rSast, "<compile-time>"},
  {"sexpr-monitor-expand", &module_info_x8rSsyntax, "sexpr-monitor-expand"},
  {"<real-reference>", &module_info_x8rSast, "<real-reference>"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"t+", &module_info_gooStypes, "t+"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"load-module", &module_info_x8rSast, "load-module"},
  {"signature-nary?-setter", &module_info_x8rSast, "signature-nary?-setter"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"push", &module_info_gooScolsSlst, "push"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"monitor-info", &module_info_x8rSast, "monitor-info"},
  {"sexpr-prop-type", &module_info_x8rSsyntax, "sexpr-prop-type"},
  {"$sexpr-macro-expand-tag", &module_info_x8rSsyntax, "$sexpr-macro-expand-tag"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"binding-value-setter", &module_info_x8rSast, "binding-value-setter"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"sexpr-isa-prop-inits", &module_info_x8rSsyntax, "sexpr-isa-prop-inits"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"sexpr-prop-init?", &module_info_x8rSsyntax, "sexpr-prop-init?"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"sexpr-method-body", &module_info_x8rSsyntax, "sexpr-method-body"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"binding-mutable?", &module_info_x8rSast, "binding-mutable?"},
  {"init-environment-for-eval", &module_info_x8rSast, "init-environment-for-eval"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"tab-gc-state", &module_info_gooScolsStab, "tab-gc-state"},
  {"global-box-value-setter", &module_info_x8rSast, "global-box-value-setter"},
  {"assocs-test", &module_info_gooScolsSassoc, "assocs-test"},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_x8rSsyntax, "sexpr-unwind-protect-cleanup-forms"},
  {"string-split", &module_info_gooScolsSstr, "string-split"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"objectify-quotation", &module_info_x8rSast, "objectify-quotation"},
  {"del", &module_info_gooScolsScol, "del"},
  {"locals-bindings-setter", &module_info_x8rSast, "locals-bindings-setter"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"%binding-bound?", &module_info_x8rSast_eval, "%binding-bound?"},
  {"/", &module_info_gooSmath, "/"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"reference-offset", &module_info_x8rSast_linearize, "reference-offset"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"|", &module_info_gooSmath, "|"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"tup", &module_info_gooSboot, "tup"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"out", &module_info_gooSioSport, "out"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"sexpr-block-body", &module_info_x8rSsyntax, "sexpr-block-body"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"sexpr-let->combination", &module_info_x8rSsyntax, "sexpr-let->combination"},
  {"unchecked-runtime-environment", &module_info_x8rSast, "unchecked-runtime-environment"},
  {"assocs-test-setter", &module_info_gooScolsSassoc, "assocs-test-setter"},
  {"$sexpr-syntax-if-tag", &module_info_x8rSsyntax, "$sexpr-syntax-if-tag"},
  {"<reference>", &module_info_x8rSast, "<reference>"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"sexpr-fab-setter-name", &module_info_x8rSsyntax, "sexpr-fab-setter-name"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"string-repeat", &module_info_gooScolsSstr, "string-repeat"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"set-module-environments", &module_info_x8rSast, "set-module-environments"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"$sexpr-if-tag", &module_info_x8rSsyntax, "$sexpr-if-tag"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"function-debug-name-setter", &module_info_x8rSast, "function-debug-name-setter"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"now", &module_info_gooScolsScol, "now"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"function-registers", &module_info_x8rSast, "function-registers"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"$char-long-names", &module_info_gooSioSread, "$char-long-names"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"isa", &module_info_gooSboot, "isa"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"def-programs", &module_info_x8rSast, "def-programs"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"<free-reference>", &module_info_x8rSast_linearize, "<free-reference>"},
  {"sexpr-isa-init-values", &module_info_x8rSsyntax, "sexpr-isa-init-values"},
  {"binding-name", &module_info_x8rSast, "binding-name"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"set", &module_info_gooSboot, "set"},
  {"<monitor>", &module_info_x8rSast, "<monitor>"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"sexpr-variable-name", &module_info_x8rSsyntax, "sexpr-variable-name"},
  {"form-definitions", &module_info_x8rSast_linearize, "form-definitions"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"<fix-let>", &module_info_x8rSast, "<fix-let>"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"do3", &module_info_gooScolsScol, "do3"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"fun", &module_info_gooSboot, "fun"},
  {"dm", &module_info_gooSboot, "dm"},
  {"unwind-protect-cleanup-thunk", &module_info_x8rSast, "unwind-protect-cleanup-thunk"},
  {"close", &module_info_gooSioSport, "close"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"<global-assignment>", &module_info_x8rSast, "<global-assignment>"},
  {"into", &module_info_gooScolsScol, "into"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"put", &module_info_gooSioSport, "put"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"esc", &module_info_gooSboot, "esc"},
  {"sexpr-variable?", &module_info_x8rSsyntax, "sexpr-variable?"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"sexpr-make-anonymous-method", &module_info_x8rSsyntax, "sexpr-make-anonymous-method"},
  {"1-", &module_info_gooSmath, "1-"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"module-loader-module-type", &module_info_x8rSast, "module-loader-module-type"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"constant-index-setter", &module_info_x8rSast, "constant-index-setter"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"closure-creation-free", &module_info_x8rSast_linearize, "closure-creation-free"},
  {"sexpr-make-macro-function", &module_info_x8rSsyntax, "sexpr-make-macro-function"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"t?", &module_info_gooStypes, "t?"},
  {"@<", &module_info_gooSboot, "@<"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"when", &module_info_gooSmacros, "when"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"signature-specs-setter", &module_info_x8rSast, "signature-specs-setter"},
  {"sexpr-prop-init-var", &module_info_x8rSsyntax, "sexpr-prop-init-var"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"<closure-creation>", &module_info_x8rSast_linearize, "<closure-creation>"},
  {"round/", &module_info_gooSmath, "round/"},
  {"rem", &module_info_gooSmath, "rem"},
  {"ds", &module_info_gooSboot, "ds"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"sexpr-syntax-if-value", &module_info_x8rSsyntax, "sexpr-syntax-if-value"},
  {"<application>", &module_info_x8rSast, "<application>"},
  {"=", &module_info_gooSmath, "="},
  {"function-value", &module_info_x8rSast, "function-value"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"nil", &module_info_gooSboot, "nil"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"~==", &module_info_gooSmath, "~=="},
  {"%get", &module_info_gooSboot, "%get"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"match", &module_info_gooSmacros, "match"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"<top-level-form>", &module_info_x8rSast_linearize, "<top-level-form>"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"sexpr-syntax-definition-value", &module_info_x8rSsyntax, "sexpr-syntax-definition-value"},
  {"$sexpr-begin-tag", &module_info_x8rSsyntax, "$sexpr-begin-tag"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"global-box-value", &module_info_x8rSast, "global-box-value"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"<unwind-protect>", &module_info_x8rSast, "<unwind-protect>"},
  {"reference-called-function?-setter", &module_info_x8rSast, "reference-called-function?-setter"},
  {"+", &module_info_gooSmath, "+"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"fix-let-body", &module_info_x8rSast, "fix-let-body"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"low-fill!", &module_info_gooScolsScol, "low-fill!"},
  {"<assocs>", &module_info_gooScolsSassoc, "<assocs>"},
  {"low-elt-setter", &module_info_gooScolsScol, "low-elt-setter"},
  {"sexpr-unquote?", &module_info_x8rSsyntax, "sexpr-unquote?"},
  {"sequentialize", &module_info_x8rSast, "sequentialize"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"<local-binding>", &module_info_x8rSast, "<local-binding>"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"binding-kind", &module_info_x8rSast, "binding-kind"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"fix-let-types-setter", &module_info_x8rSast, "fix-let-types-setter"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"in", &module_info_gooSioSport, "in"},
  {"*", &module_info_gooSmath, "*"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"signature-nary?", &module_info_x8rSast, "signature-nary?"},
  {"1+", &module_info_gooSmath, "1+"},
  {"def", &module_info_gooSboot, "def"},
  {"<programs>", &module_info_x8rSast, "<programs>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"sexpr-text-of-quotation", &module_info_x8rSsyntax, "sexpr-text-of-quotation"},
  {"binding-value", &module_info_x8rSast, "binding-value"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"assignment-reference", &module_info_x8rSast, "assignment-reference"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"$permanent-hash-state", &module_info_gooScolsStab, "$permanent-hash-state"},
  {"t<", &module_info_gooStypes, "t<"},
  {"sexpr-if-then", &module_info_x8rSsyntax, "sexpr-if-then"},
  {"$sexpr-define-class-tag", &module_info_x8rSsyntax, "$sexpr-define-class-tag"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"function-signature", &module_info_x8rSast, "function-signature"},
  {"seq", &module_info_gooSboot, "seq"},
  {"<predefined-application>", &module_info_x8rSast, "<predefined-application>"},
  {"function-free-setter", &module_info_x8rSast, "function-free-setter"},
  {"<immediate-constant>", &module_info_x8rSast, "<immediate-constant>"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<constant>", &module_info_x8rSast, "<constant>"},
  {"<bound?>", &module_info_x8rSast, "<bound?>"},
  {"function-self-recursive?-setter", &module_info_x8rSast, "function-self-recursive?-setter"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"<sequential>", &module_info_x8rSast, "<sequential>"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"<arguments>", &module_info_x8rSast, "<arguments>"},
  {"signature-bindings-setter", &module_info_x8rSast, "signature-bindings-setter"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"$sexpr-method-tag", &module_info_x8rSsyntax, "$sexpr-method-tag"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"locals-functions-setter", &module_info_x8rSast, "locals-functions-setter"},
  {"do2", &module_info_gooScolsScol, "do2"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"assignment-form-setter", &module_info_x8rSast, "assignment-form-setter"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"try", &module_info_gooSboot, "try"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"$sexpr-quasiquote-tag", &module_info_x8rSsyntax, "$sexpr-quasiquote-tag"},
  {"sexpr-def-variable", &module_info_x8rSsyntax, "sexpr-def-variable"},
  {"@len", &module_info_gooSboot, "@len"},
  {"<locals>", &module_info_x8rSast, "<locals>"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"sin", &module_info_gooSmath, "sin"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"locals-bindings", &module_info_x8rSast, "locals-bindings"},
  {"binding-global-box", &module_info_x8rSast, "binding-global-box"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"reference-frame-offset", &module_info_x8rSast, "reference-frame-offset"},
  {"form-quotations", &module_info_x8rSast_linearize, "form-quotations"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"<definition>", &module_info_x8rSast, "<definition>"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"$sexpr-unwind-protect-tag", &module_info_x8rSsyntax, "$sexpr-unwind-protect-tag"},
  {"analyze-dynamic-extent", &module_info_x8rSast_linearize, "analyze-dynamic-extent"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"pop-last!", &module_info_gooScolsSvec, "pop-last!"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"application-known?", &module_info_x8rSast, "application-known?"},
  {"pow", &module_info_gooSmath, "pow"},
  {"rep", &module_info_gooSboot, "rep"},
  {"function-self-recursive?", &module_info_x8rSast, "function-self-recursive?"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"binding-dynamic-extent?-setter", &module_info_x8rSast, "binding-dynamic-extent?-setter"},
  {"any?", &module_info_gooStypes, "any?"},
  {"<assignment>", &module_info_x8rSast, "<assignment>"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"until", &module_info_gooSmacros, "until"},
  {"and", &module_info_gooSmacros, "and"},
  {"program-type-setter", &module_info_x8rSast, "program-type-setter"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"<box-read>", &module_info_x8rSast_linearize, "<box-read>"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"program-form", &module_info_x8rSast_linearize, "program-form"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"sexpr-loc-bound-signatures", &module_info_x8rSsyntax, "sexpr-loc-bound-signatures"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"function-nary?", &module_info_x8rSast, "function-nary?"},
  {"do-static-global-bindings", &module_info_x8rSast, "do-static-global-bindings"},
  {"push-last!", &module_info_gooScolsSvec, "push-last!"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"app", &module_info_gooSmacros, "app"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"logn", &module_info_gooSmath, "logn"},
  {"application-arguments", &module_info_x8rSast, "application-arguments"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"find-environment-module", &module_info_x8rSast, "find-environment-module"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"function-body-setter", &module_info_x8rSast, "function-body-setter"},
  {"signature-names", &module_info_x8rSast, "signature-names"},
  {"env-object-name", &module_info_x8rSast, "env-object-name"},
  {"==", &module_info_gooSmacros, "=="},
  {"signature-specs", &module_info_x8rSast, "signature-specs"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"<module-loader>", &module_info_x8rSast, "<module-loader>"},
  {"$goo-boot-module-name", &module_info_x8rSast, "$goo-boot-module-name"},
  {"cos", &module_info_gooSmath, "cos"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"bound?-reference", &module_info_x8rSast, "bound?-reference"},
  {"$sexpr-monitor-tag", &module_info_x8rSsyntax, "$sexpr-monitor-tag"},
  {"<alternative>", &module_info_x8rSast, "<alternative>"},
  {"binding-inferred-type", &module_info_x8rSast, "binding-inferred-type"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"environment-uses-modules", &module_info_x8rSast, "environment-uses-modules"},
  {"assignment-form", &module_info_x8rSast, "assignment-form"},
  {"alternative-consequent", &module_info_x8rSast, "alternative-consequent"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"lst", &module_info_gooSboot, "lst"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"open", &module_info_gooSioSport, "open"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"<free-environment>", &module_info_x8rSast, "<free-environment>"},
  {"find-binding", &module_info_x8rSast, "find-binding"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"sexpr-assignment-variable", &module_info_x8rSsyntax, "sexpr-assignment-variable"},
  {"binding-dynamic-extent?", &module_info_x8rSast, "binding-dynamic-extent?"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"format", &module_info_gooSruntime, "format"},
  {"analyze-calls", &module_info_x8rSast_linearize, "analyze-calls"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"signature-arity-setter", &module_info_x8rSast, "signature-arity-setter"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"program-register-setter", &module_info_x8rSast, "program-register-setter"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"sexpr-isa-parent", &module_info_x8rSsyntax, "sexpr-isa-parent"},
  {"max", &module_info_gooSmag, "max"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"sexpr-function-body", &module_info_x8rSsyntax, "sexpr-function-body"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"program-register", &module_info_x8rSast, "program-register"},
  {"use", &module_info_gooSboot, "use"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"case", &module_info_gooSmacros, "case"},
  {"read", &module_info_gooSruntime, "read"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"$sexpr-bind-exit-tag", &module_info_x8rSsyntax, "$sexpr-bind-exit-tag"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"sexpr-fab-setter", &module_info_x8rSsyntax, "sexpr-fab-setter"},
  {"add", &module_info_gooScolsScol, "add"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"binding-info-setter", &module_info_x8rSast, "binding-info-setter"},
  {"tail", &module_info_gooSboot, "tail"},
  {"<runtime-assignment>", &module_info_x8rSast, "<runtime-assignment>"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"environment-bindings", &module_info_x8rSast, "environment-bindings"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"error", &module_info_gooSboot, "error"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"<ast-primitive>", &module_info_x8rSast, "<ast-primitive>"},
  {"$sexpr-define-syntax-tag", &module_info_x8rSsyntax, "$sexpr-define-syntax-tag"},
  {"reference-binding", &module_info_x8rSast, "reference-binding"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"<box-write>", &module_info_x8rSast_linearize, "<box-write>"},
  {"reference-self?", &module_info_x8rSast_linearize, "reference-self?"},
  {"tan", &module_info_gooSmath, "tan"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"<computed-program>", &module_info_x8rSast, "<computed-program>"},
  {"monitor-main-thunk", &module_info_x8rSast, "monitor-main-thunk"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"<ast-signature>", &module_info_x8rSast, "<ast-signature>"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"$sexpr-def-tag", &module_info_x8rSsyntax, "$sexpr-def-tag"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"$sexpr-iterate-tag", &module_info_x8rSsyntax, "$sexpr-iterate-tag"},
  {"$sexpr-define-tag", &module_info_x8rSsyntax, "$sexpr-define-tag"},
  {"sexpr-variable-type", &module_info_x8rSsyntax, "sexpr-variable-type"},
  {"binding-module-name", &module_info_x8rSast, "binding-module-name"},
  {"ct", &module_info_gooSboot, "ct"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"collect-temporaries!", &module_info_x8rSast_linearize, "collect-temporaries!"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"<regular-application>", &module_info_x8rSast, "<regular-application>"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"sexpr-define-class?", &module_info_x8rSsyntax, "sexpr-define-class?"},
  {"locals-functions", &module_info_x8rSast, "locals-functions"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"update-walk!", &module_info_x8rSast_linearize, "update-walk!"},
  {"extract-things!", &module_info_x8rSast_linearize, "extract-things!"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"sexpr-signature-parameters", &module_info_x8rSsyntax, "sexpr-signature-parameters"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"module-target-environment", &module_info_x8rSast, "module-target-environment"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"esctst", &Yx8rStopYesctst},
  {"auto-run", &Yx8rStopYauto_run},
  {"eval-in", &Yx8rStopYeval_in},
  {"frame-var", &Yx8rStopYframe_var},
  {"bt", &Yx8rStopYbt},
  {"do-restart", &Yx8rStopYdo_restart},
  {"top", &Yx8rStopYtop},
  {"run", &Yx8rStopYrun},
  {"<keyboard-interrupt>", &Yx8rStopYLkeyboard_interruptG},
  {"top-in", &Yx8rStopYtop_in},
  {"parse", &Yx8rStopYparse},
  {"do-stack-frames", &Yx8rStopYdo_stack_frames},
  {"g2c-run", &Yx8rStopYg2c_run},
  {"str-parse", &Yx8rStopYstr_parse},
  {"str-eval-in", &Yx8rStopYstr_eval_in},
  {"for-frames", NULL},
  {"frame", &Yx8rStopYframe},
  {"---main-0---", NULL},
  {"auto-eval", &Yx8rStopYauto_eval},
  {"load-from", &Yx8rStopYload_from},
  {"g2c-eval", &Yx8rStopYg2c_eval},
  {"ast-run", &Yx8rStopYast_run},
  {"save-image", &Yx8rStopYsave_image},
  {"parse-in", &Yx8rStopYparse_in},
  {"read-file", &Yx8rStopYread_file},
  {"backtrace", &Yx8rStopYbacktrace},
  {"load", &Yx8rStopYload},
  {"str-eval", &Yx8rStopYstr_eval},
  {"prompt-for-command-expression", &Yx8rStopYprompt_for_command_expression},
  {"str-parse-in", &Yx8rStopYstr_parse_in},
  {"print-result-expression", &Yx8rStopYprint_result_expression},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"esctst", "esctst"},
  {"frame", "frame"},
  {"bt", "bt"},
  {"eval", "eval"},
  {"top", "top"},
  {"do-stack-frames", "do-stack-frames"},
  {"auto-eval", "auto-eval"},
  {"g2c-eval", "g2c-eval"},
  {"save-image", "save-image"},
  {"parse-in", "parse-in"},
  {"read-file", "read-file"},
  {"frame-var", "frame-var"},
  {"backtrace", "backtrace"},
  {"load", "load"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_x8rStop;
MODULE_INFO module_info_x8rStop = {
  "x8r/top",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSruntime (void);
extern void load_module_gooSioSread (void);
extern void load_module_gooSioSwrite (void);
extern void load_module_x8rSsyntax (void);
extern void load_module_x8rSast (void);
extern void load_module_x8rSast_linearize (void);
extern void load_module_x8rSast_eval (void);
extern void load_module_gooSsystem (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooScols (void);
extern void load_module_gooSioSport (void);

/* EXPRESSION: */

extern void load_module_x8rStop (void);

void load_module_x8rStop (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSruntime();
  load_module_gooSioSread();
  load_module_gooSioSwrite();
  load_module_x8rSsyntax();
  load_module_x8rSast();
  load_module_x8rSast_linearize();
  load_module_x8rSast_eval();
  load_module_gooSsystem();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScols();
  load_module_gooSioSport();

  (P)Yx8rStopY___main_0___();

}

/* END OF GENERATED CODE. */
