/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: ast-linearize */

DEF(Yast_linearizeYLflat_functionG,"ast-linearize","<flat-function>");
EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YastYbinding_global_box,"ast","binding-global-box");
EXT(YruntimeYelt,"runtime","elt");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(YastYLsequentialG,"ast","<sequential>");
EXT(YastYLunwind_protectG,"ast","<unwind-protect>");
EXT(YLnumG,"boot","<num>");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
EXT(YastYLfab_listG,"ast","<fab-list>");
DEF(Yast_linearizeYform_program_setter,"ast-linearize","form-program-setter");
EXT(YastYbinding_dynamic_extentQ,"ast","binding-dynamic-extent?");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YruntimeYfrom,"runtime","from");
DEF(Yast_linearizeYgather_temporariesX,"ast-linearize","gather-temporaries!");
EXT(YastYbinding_type_setter,"ast","binding-type-setter");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
EXT(YastYfix_let_bindings,"ast","fix-let-bindings");
EXT(YLslotG,"boot","<slot>");
DEF(Yast_linearizeYLbox_readG,"ast-linearize","<box-read>");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
EXT(YastYLmodule_bindingG,"ast","<module-binding>");
EXT(YastYassignment_binding,"ast","assignment-binding");
EXT(YastYfunction_naryQ,"ast","function-nary?");
EXT(Ynul,"boot","nul");
DEF(Yast_linearizeYprogram_quotations,"ast-linearize","program-quotations");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YastYLraw_constantG,"ast","<raw-constant>");
EXT(YruntimeYkeys,"runtime","keys");
DEF(Yast_linearizeYclosure_creation_index_setter,"ast-linearize","closure-creation-index-setter");
DEF(Yast_linearizeYfunction_temporaries_setter,"ast-linearize","function-temporaries-setter");
EXT(YastYset_module_environments,"ast","set-module-environments");
EXT(YastYmonitor_info,"ast","monitor-info");
EXT(YruntimeYevenQ,"runtime","even?");
EXT(YruntimeYstr,"runtime","str");
EXT(YastYsignature_bindings_setter,"ast","signature-bindings-setter");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YastYfix_let_arguments,"ast","fix-let-arguments");
DEF(Yast_linearizeYprogram_form_setter,"ast-linearize","program-form-setter");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YastYbinding_locative,"ast","binding-locative");
DEF(Yast_linearizeYclosure_creation_free,"ast-linearize","closure-creation-free");
EXT(YLchrG,"boot","<chr>");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
EXT(YruntimeYlen,"runtime","len");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YLoptsG,"boot","<opts>");
EXT(YastYdo_module_loader_modules,"ast","do-module-loader-modules");
EXT(YastYDproto_boot_module_name,"ast","$proto-boot-module-name");
EXT(YPsnul,"boot","%snul");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
EXT(YLunionG,"boot","<union>");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(YastYalternative_alternant,"ast","alternative-alternant");
DEF(Yast_linearizeYboxify_mutable_bindings,"ast-linearize","boxify-mutable-bindings");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
EXT(YastYLast_primitiveG,"ast","<ast-primitive>");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YastYfree_implemented_foreign_bindings,"ast","free-implemented-foreign-bindings");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
EXT(YastYsignature_names_setter,"ast","signature-names-setter");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(YruntimeYin,"runtime","in");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(YastYfix_let_bindings_setter,"ast","fix-let-bindings-setter");
EXT(YLlogG,"boot","<log>");
EXT(YmacrosYtup,"macros","tup");
EXT(YastYbinding_info,"ast","binding-info");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
DEF(Yast_linearizeYliftX,"ast-linearize","lift!");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
EXT(YastYapplication_binding,"ast","application-binding");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YruntimeYlist,"runtime","list");
EXT(Ytail,"boot","tail");
DEF(Yast_linearizeYlift_proceduresX,"ast-linearize","lift-procedures!");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(YastYLprogramG,"ast","<program>");
EXT(YastYLast_methodG,"ast","<ast-method>");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YruntimeYLrangeG,"runtime","<range>");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YastYbinding_kind,"ast","binding-kind");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YastYLast_genericG,"ast","<ast-generic>");
EXT(YastYfunction_bindings,"ast","function-bindings");
EXT(YruntimeYfill,"runtime","fill");
EXT(YruntimeYclose_output_port,"runtime","close-output-port");
EXT(YastYLast_macro_definitionG,"ast","<ast-macro-definition>");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(YmacrosYEE,"macros","==");
EXT(YruntimeY1st,"runtime","1st");
EXT(YastYmodule_name,"ast","module-name");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
DEF(Yast_linearizeYreference_selfQ,"ast-linearize","reference-self?");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(YLanyG,"boot","<any>");
EXT(YruntimeYpop,"runtime","pop");
EXT(YruntimeYvec,"runtime","vec");
DEF(Yast_linearizeYreference_offset,"ast-linearize","reference-offset");
DEF(Yast_linearizeYfunction_temporaries,"ast-linearize","function-temporaries");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YPdefine_method,"boot","%define-method");
EXT(Ytail_setter,"boot","tail-setter");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
DEF(Yast_linearizeYprogram_form,"ast-linearize","program-form");
EXT(YastYfunction_debug_name,"ast","function-debug-name");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(YLsingletonG,"boot","<singleton>");
DEF(Yast_linearizeYinsert_boxX,"ast-linearize","insert-box!");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
EXT(YastYload_module,"ast","load-module");
DEF(Yast_linearizeYprogram_quotations_setter,"ast-linearize","program-quotations-setter");
EXT(YruntimeYLlistG,"runtime","<list>");
DEF(Yast_linearizeYextractX,"ast-linearize","extract!");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YruntimeYassocq,"runtime","assocq");
EXT(YastYLlocal_bindingG,"ast","<local-binding>");
DEF(Yast_linearizeYcollect_temporariesX,"ast-linearize","collect-temporaries!");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YastYfunction_signature_setter,"ast","function-signature-setter");
EXT(YruntimeYalter,"runtime","alter");
EXT(YastYLconstantG,"ast","<constant>");
DEF(Yast_linearizeYLrenamed_local_bindingG,"ast-linearize","<renamed-local-binding>");
EXT(YruntimeYpick,"runtime","pick");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YisaQ,"boot","isa?");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YruntimeYfrom_by,"runtime","from-by");
DEF(Yast_linearizeYsexp_Gobject,"ast-linearize","sexp->object");
EXT(YastYreference_binding,"ast","reference-binding");
EXT(YastYLstatic_global_environmentG,"ast","<static-global-environment>");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(Ytype_object,"boot","type-object");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(YastYinit_environment_for_eval,"ast","init-environment-for-eval");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YastYobjectify,"ast","objectify");
DEF(Yast_linearizeYLbox_writeG,"ast-linearize","<box-write>");
EXT(YruntimeY2nd,"runtime","2nd");
DEF(Yast_linearizeYLprimitive_definitionG,"ast-linearize","<primitive-definition>");
EXT(YastYmodule_exports,"ast","module-exports");
EXT(YruntimeYS,"runtime","/");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YruntimeYLstepG,"runtime","<step>");
EXT(YastYprogram_register,"ast","program-register");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YastYLcompile_timeG,"ast","<compile-time>");
EXT(YastYLfix_letG,"ast","<fix-let>");
EXT(Yslot_init,"boot","slot-init");
EXT(YruntimeYtruncate,"runtime","truncate");
EXT(YastYLapplicationG,"ast","<application>");
DEF(Yast_linearizeYform_definitions,"ast-linearize","form-definitions");
EXT(Yobject_parents,"boot","object-parents");
EXT(YruntimeYpos,"runtime","pos");
DEF(Yast_linearizeYallocate_register,"ast-linearize","allocate-register");
EXT(YastYruntime_environment,"ast","runtime-environment");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YastYsequentialize,"ast","sequentialize");
EXT(Ynot,"boot","not");
EXT(YastYbinding_type,"ast","binding-type");
EXT(YruntimeYmin,"runtime","min");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YruntimeYdel_dups,"runtime","del-dups");
EXT(Yfun_names,"boot","fun-names");
EXT(Ysig_value,"boot","sig-value");
EXT(YastYLreal_referenceG,"ast","<real-reference>");
EXT(Ysym_name,"boot","sym-name");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(YastYLargumentsG,"ast","<arguments>");
EXT(YruntimeYdo3,"runtime","do3");
EXT(YastYLmoduleG,"ast","<module>");
EXT(YruntimeYoddQ,"runtime","odd?");
EXT(YastYlocals_functions,"ast","locals-functions");
DEF(Yast_linearizeYbox_reference_setter,"ast-linearize","box-reference-setter");
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
EXT(YruntimeYassq,"runtime","assq");
EXT(YruntimeYlen_setter,"runtime","len-setter");
EXT(YruntimeYid_hash,"runtime","id-hash");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
EXT(YastYsignature_specs,"ast","signature-specs");
EXT(YPPmacro,"boot","%%macro");
EXT(YruntimeYassoc,"runtime","assoc");
DEF(Yast_linearizeYfunction_free,"ast-linearize","function-free");
EXT(YruntimeYneg,"runtime","neg");
EXT(YastYalternative_consequent,"ast","alternative-consequent");
EXT(Yobject_slots,"boot","object-slots");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(YastYinit_ast,"ast","init-ast");
EXT(YastYapplication_arguments,"ast","application-arguments");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(YruntimeYwrite_string,"runtime","write-string");
DEF(Yast_linearizeYLtop_level_formG,"ast-linearize","<top-level-form>");
EXT(YastYfind_environment_module,"ast","find-environment-module");
EXT(YastYload_in,"ast","load-in");
EXT(YLclassG,"boot","<class>");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YastYmonitor_type,"ast","monitor-type");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YastYfix_let_types_setter,"ast","fix-let-types-setter");
EXT(YastYfix_let_arguments_setter,"ast","fix-let-arguments-setter");
EXT(Ytype_error,"boot","type-error");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(Yerror,"boot","error");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(Yfind_setter,"boot","find-setter");
EXT(YastYLregular_applicationG,"ast","<regular-application>");
DEF(Yast_linearizeYTrenaming_bindings_counterT,"ast-linearize","*renaming-bindings-counter*");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YLtypeG,"boot","<type>");
EXT(YastYreference_frame_offset,"ast","reference-frame-offset");
EXT(YruntimeYlsh,"runtime","lsh");
EXT(YastYfunction_body_setter,"ast","function-body-setter");
EXT(Ysig_names,"boot","sig-names");
EXT(YastYalternative_condition,"ast","alternative-condition");
EXT(Yslot_owner,"boot","slot-owner");
DEF(Yast_linearizeYfunction_self_recursiveQ,"ast-linearize","function-self-recursive?");
EXT(YastYLruntime_assignmentG,"ast","<runtime-assignment>");
EXT(YmacrosYpair,"macros","pair");
EXT(YruntimeYto_digit,"runtime","to-digit");
EXT(YastYlocals_bindings_setter,"ast","locals-bindings-setter");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
DEF(Yast_linearizeYLfree_environmentG,"ast-linearize","<free-environment>");
EXT(YPvnul,"boot","%vnul");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YruntimeY_,"runtime","-");
EXT(YastYfix_let_body,"ast","fix-let-body");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YastYbinding_module_name,"ast","binding-module-name");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YruntimeYnegQ,"runtime","neg?");
EXT(YastYsignature_naryQ,"ast","signature-nary?");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YastYLdefinitionG,"ast","<definition>");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YastYLmodule_loaderG,"ast","<module-loader>");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YruntimeYdel,"runtime","del");
EXT(YastYboundQ_reference,"ast","bound?-reference");
EXT(Yfapply,"boot","fapply");
EXT(YastYLbind_exitG,"ast","<bind-exit>");
EXT(Yadd_slot,"boot","add-slot");
EXT(Yhead,"boot","head");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YLsymG,"boot","<sym>");
EXT(YruntimeYread,"runtime","read");
EXT(YastYLglobal_assignmentG,"ast","<global-assignment>");
EXT(YastYapplication_knownQ_setter,"ast","application-known?-setter");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YruntimeYnow_key,"runtime","now-key");
DEF(Yast_linearizeYclosure_creation_bindings_setter,"ast-linearize","closure-creation-bindings-setter");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(YastYapplication_knownQ,"ast","application-known?");
EXT(YruntimeYLincongruent_method_errorG,"runtime","<incongruent-method-error>");
EXT(YruntimeYround,"runtime","round");
EXT(YastYcompile_time_program,"ast","compile-time-program");
EXT(YastYreport_undefined_global_bindings,"ast","report-undefined-global-bindings");
DEF(Yast_linearizeYanalyze_dynamic_extent,"ast-linearize","analyze-dynamic-extent");
EXT(YruntimeYfloorS,"runtime","floor/");
EXT(YastYLlocal_assignmentG,"ast","<local-assignment>");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YastYLglobal_boxG,"ast","<global-box>");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(YastYprogram_register_setter,"ast","program-register-setter");
DEF(Yast_linearizeYclosure_creation_index,"ast-linearize","closure-creation-index");
DEF(Yast_linearizeYdo_call_upgradesX,"ast-linearize","do-call-upgrades!");
DEF(Yast_linearizeYfunction_index_setter,"ast-linearize","function-index-setter");
EXT(YruntimeYdo2,"runtime","do2");
DEF(Yast_linearizeYdo_do_dynamic_extentX,"ast-linearize","do-do-dynamic-extent!");
EXT(YastYreference_frame_number,"ast","reference-frame-number");
DEF(Yast_linearizeYLfree_referenceG,"ast-linearize","<free-reference>");
EXT(YastYLalternativeG,"ast","<alternative>");
EXT(YruntimeYsub,"runtime","sub");
EXT(YruntimeYnow_elt,"runtime","now-elt");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YastYfunction_binding,"ast","function-binding");
EXT(YastYLpredefined_applicationG,"ast","<predefined-application>");
EXT(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
EXT(YastYbind_exit_main_fun,"ast","bind-exit-main-fun");
EXT(YastYsignature_value_setter,"ast","signature-value-setter");
EXT(Yfab_sym,"boot","fab-sym");
EXT(Yhead_setter,"boot","head-setter");
EXT(YastYLboundQG,"ast","<bound?>");
EXT(YruntimeYroundS,"runtime","round/");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(YruntimeYaddress_of,"runtime","address-of");
EXT(YastYbinding_global_box_setter,"ast","binding-global-box-setter");
EXT(Yfind_getter,"boot","find-getter");
EXT(YruntimeYash,"runtime","ash");
DEF(Yast_linearizeYregister_allocateX,"ast-linearize","register-allocate!");
EXT(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
EXT(YLstrG,"boot","<str>");
EXT(YruntimeYflo_bits,"runtime","flo-bits");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(YastYmonitor_test,"ast","monitor-test");
EXT(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
EXT(Yobject_class,"boot","object-class");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
DEF(Yast_linearizeYbinding_index_setter,"ast-linearize","binding-index-setter");
EXT(YruntimeYfrom_above,"runtime","from-above");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YLgenG,"boot","<gen>");
EXT(YastYsignature_names,"ast","signature-names");
DEF(Yast_linearizeYfunction_registers,"ast-linearize","function-registers");
EXT(Ynil,"boot","nil");
EXT(YPcall_next_method,"boot","%call-next-method");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
EXT(YruntimeYnewline,"runtime","newline");
EXT(YruntimeYabs,"runtime","abs");
EXT(YruntimeYformat,"runtime","format");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YruntimeYassqn,"runtime","assqn");
DEF(Yast_linearizeYfree_environment,"ast-linearize","free-environment");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
DEF(Yast_linearizeYfunction_self_recursiveQ_setter,"ast-linearize","function-self-recursive?-setter");
EXT(Yslot_type,"boot","slot-type");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
DEF(Yast_linearizeYunconstrained_typeQ,"ast-linearize","unconstrained-type?");
DEF(Yast_linearizeYextract_thingsX,"ast-linearize","extract-things!");
EXT(YastYassignment_reference,"ast","assignment-reference");
EXT(YruntimeYT,"runtime","*");
DEF(Yast_linearizeYadjoin_free_bindingX,"ast-linearize","adjoin-free-binding!");
EXT(YruntimeYPwith_monitor,"runtime","%with-monitor");
EXT(YruntimeYA,"runtime","+");
DEF(Yast_linearizeYdo_do_call_referencesX,"ast-linearize","do-do-call-references!");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YruntimeYcurry,"runtime","curry");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(YastYobjectify_quotation,"ast","objectify-quotation");
EXT(YLvecG,"boot","<vec>");
EXT(YruntimeYread_char,"runtime","read-char");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(Ysig_arity,"boot","sig-arity");
DEF(Yast_linearizeYclosurize_mainX,"ast-linearize","closurize-main!");
EXT(YastYdo_static_global_bindings,"ast","do-static-global-bindings");
EXT(YruntimeYmax,"runtime","max");
EXT(YruntimeYeof_object,"runtime","eof-object");
EXT(YastYLmonitorG,"ast","<monitor>");
DEF(Yast_linearizeYLbox_creationG,"ast-linearize","<box-creation>");
EXT(YruntimeYfloor,"runtime","floor");
EXT(YastYast_define_binding,"ast","ast-define-binding");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
EXT(YastYenvironment_uses_modules,"ast","environment-uses-modules");
EXT(Yclass_slots,"boot","class-slots");
EXT(YruntimeYmodulo,"runtime","modulo");
EXT(YruntimeYdefault,"runtime","default");
DEF(Yast_linearizeYfunction_index,"ast-linearize","function-index");
EXT(YLflatG,"boot","<flat>");
DEF(Yast_linearizeYas_top_level_forms,"ast-linearize","as-top-level-forms");
EXT(YastYglobal_box_value_setter,"ast","global-box-value-setter");
EXT(YastYunwind_protect_cleanup_thunk,"ast","unwind-protect-cleanup-thunk");
DEF(Yast_linearizeYbox_form,"ast-linearize","box-form");
EXT(YruntimeYfind_key,"runtime","find-key");
EXT(YruntimeYreduceA,"runtime","reduce+");
EXT(YLmetG,"boot","<met>");
EXT(YmacrosYmap,"macros","map");
DEF(Yast_linearizeYreference_offset_setter,"ast-linearize","reference-offset-setter");
EXT(YastYapplication_function,"ast","application-function");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YruntimeYempty,"runtime","empty");
EXT(YastYdo_named_static_global_bindings,"ast","do-named-static-global-bindings");
EXT(YastYbinding_value_setter,"ast","binding-value-setter");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(YastYLlocal_referenceG,"ast","<local-reference>");
EXT(Ylst,"boot","lst");
EXT(YastYreference_called_functionQ_setter,"ast","reference-called-function?-setter");
EXT(YastYmonitor_handler,"ast","monitor-handler");
EXT(YLtupG,"boot","<tup>");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YastYmodule_binding,"ast","module-binding");
EXT(YastYremove_modules_by_nameX,"ast","remove-modules-by-name!");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(Yfab_class,"boot","fab-class");
EXT(YruntimeYlogior,"runtime","logior");
EXT(Yfun_value,"boot","fun-value");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(YPsymbols,"boot","%symbols");
EXT(YruntimeYTprint_baseT,"runtime","*print-base*");
EXT(Ytype_elts,"boot","type-elts");
EXT(YruntimeYLE,"runtime","<=");
EXT(YastYfunction_value,"ast","function-value");
DEF(Yast_linearizeYprogram_definitions_setter,"ast-linearize","program-definitions-setter");
EXT(YruntimeYE,"runtime","=");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
EXT(YastYbinding_name,"ast","binding-name");
EXT(YruntimeYmap2,"runtime","map2");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
DEF(Yast_linearizeYbox_reference,"ast-linearize","box-reference");
EXT(YastYLbindingG,"ast","<binding>");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
EXT(YLlstG,"boot","<lst>");
EXT(YastYLpassive_programG,"ast","<passive-program>");
EXT(YastYLreferenceG,"ast","<reference>");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YPisa,"boot","%isa");
DEF(Yast_linearizeYupdate_walkX,"ast-linearize","update-walk!");
EXT(YastYlocals_body,"ast","locals-body");
EXT(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
EXT(YruntimeYfalse_or,"runtime","false-or");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YastYfab_p2c_module,"ast","fab-p2c-module");
EXT(YruntimeYL,"runtime","<");
EXT(YLfunG,"boot","<fun>");
DEF(Yast_linearizeYnew_renamed_binding,"ast-linearize","new-renamed-binding");
EXT(Yfun_name,"boot","fun-name");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(Yclass_name,"boot","class-name");
EXT(YruntimeYlogxor,"runtime","logxor");
EXT(YruntimeYalways,"runtime","always");
EXT(YastYunwind_protect_protected_thunk,"ast","unwind-protect-protected-thunk");
DEF(Yast_linearizeYanalyze_calls,"ast-linearize","analyze-calls");
EXT(YastYlocals_bindings,"ast","locals-bindings");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
EXT(YLseqG,"boot","<seq>");
EXT(YruntimeYpush,"runtime","push");
DEF(Yast_linearizeYform_definitions_setter,"ast-linearize","form-definitions-setter");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
EXT(YruntimeYbuf,"runtime","buf");
EXT(YruntimeYreduce,"runtime","reduce");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(YruntimeYNE,"runtime","~=");
EXT(YastYLglobal_referenceG,"ast","<global-reference>");
EXT(YastYmodule_loader_module_type,"ast","module-loader-module-type");
EXT(Yfun_name_setter,"boot","fun-name-setter");
DEF(Yast_linearizeYanalyze_call_references,"ast-linearize","analyze-call-references");
EXT(YmacrosYcat,"macros","cat");
EXT(YastYprobe_module,"ast","probe-module");
EXT(YruntimeYG,"runtime",">");
DEF(Yast_linearizeYLclosure_creationG,"ast-linearize","<closure-creation>");
DEF(Yast_linearizeYadjoin_temporary_variablesX,"ast-linearize","adjoin-temporary-variables!");
EXT(YruntimeYlast,"runtime","last");
EXT(YruntimeYlogand,"runtime","logand");
EXT(YastYbinding_dynamic_extentQ_setter,"ast","binding-dynamic-extent?-setter");
DEF(Yast_linearizeYclosure_creation_free_setter,"ast-linearize","closure-creation-free-setter");
EXT(YastYLruntime_referenceG,"ast","<runtime-reference>");
EXT(YastYfix_let_body_setter,"ast","fix-let-body-setter");
EXT(YastYbinding_info_setter,"ast","binding-info-setter");
EXT(YruntimeYtL,"runtime","t<");
EXT(YastYmodule_name_to_relpath,"ast","module-name-to-relpath");
EXT(YLcolG,"boot","<col>");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
EXT(YastYinstall_initial_bindings,"ast","install-initial-bindings");
EXT(YastYbinding_mutableQ,"ast","binding-mutable?");
EXT(Yapply,"boot","apply");
EXT(YruntimeYdo,"runtime","do");
EXT(YastYast_evaluate,"ast","ast-evaluate");
EXT(YastYmodule_target_environment,"ast","module-target-environment");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(YruntimeYfab,"runtime","fab");
EXT(YastYreference_called_functionQ,"ast","reference-called-function?");
EXT(YruntimeYceiling,"runtime","ceiling");
EXT(YastYDproto_runtime_module_name,"ast","$proto-runtime-module-name");
DEF(Yast_linearizeYform_quotations,"ast-linearize","form-quotations");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YruntimeYlognot,"runtime","lognot");
EXT(YruntimeYas,"runtime","as");
EXT(YruntimeYsig,"runtime","sig");
DEF(Yast_linearizeYflatten_seqs,"ast-linearize","flatten-seqs");
EXT(YruntimeYout,"runtime","out");
EXT(YastYsignature_bindings,"ast","signature-bindings");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(YastYassignment_form,"ast","assignment-form");
EXT(Yslot_setter,"boot","slot-setter");
EXT(Ymet_appQ,"boot","met-app?");
DEF(Yast_linearizeYprogram_definitions,"ast-linearize","program-definitions");
DEF(Yast_linearizeYLflattened_programG,"ast-linearize","<flattened-program>");
EXT(YruntimeYtE,"runtime","t=");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YruntimeYrev,"runtime","rev");
EXT(YastYconstant_value,"ast","constant-value");
EXT(YastYlocals_functions_setter,"ast","locals-functions-setter");
DEF(Yast_linearizeYLfunction_definitionG,"ast-linearize","<function-definition>");
EXT(YmacrosYmake_sym,"macros","make-sym");
DEF(Yast_linearizeYform_quotations_setter,"ast-linearize","form-quotations-setter");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YLlocG,"boot","<loc>");
EXT(YLsigG,"boot","<sig>");
DEF(Yast_linearizeYfunction_free_setter,"ast-linearize","function-free-setter");
EXT(YastYbinding_value,"ast","binding-value");
EXT(YastYsignature_value,"ast","signature-value");
EXT(Ysig_naryQ,"boot","sig-nary?");
DEF(Yast_linearizeYdo_dynamic_extentX,"ast-linearize","do-dynamic-extent!");
DEF(Yast_linearizeYdo_call_referencesX,"ast-linearize","do-call-references!");
DEF(Yast_linearizeYbinding_index,"ast-linearize","binding-index");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
EXT(YruntimeYLfile_input_portG,"runtime","<file-input-port>");
EXT(YastYfunction_debug_name_setter,"ast","function-debug-name-setter");
EXT(YastYLprogramsG,"ast","<programs>");
EXT(Yfun_mets,"boot","fun-mets");
DEF(Yast_linearizeYDfree_environment_empty,"ast-linearize","$free-environment-empty");
EXT(Yclass_parents,"boot","class-parents");
DEF(Yast_linearizeYbox_form_setter,"ast-linearize","box-form-setter");
EXT(YastYfunction_body,"ast","function-body");
EXT(YPslot,"boot","%slot");
EXT(YastYLcomputed_programG,"ast","<computed-program>");
EXT(YastYlocals_body_setter,"ast","locals-body-setter");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");
EXT(YLfloG,"boot","<flo>");
EXT(YastYfix_let_types,"ast","fix-let-types");
EXT(YruntimeYtA,"runtime","t+");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(YruntimeYcopy_state,"runtime","copy-state");
EXT(YruntimeYmemQ,"runtime","mem?");
EXT(YastYsignature_specs_setter,"ast","signature-specs-setter");
DEF(Yast_linearizeYsplit_program,"ast-linearize","split-program");
DEF(Yast_linearizeYdo_do_call_upgradesX,"ast-linearize","do-do-call-upgrades!");
DEF(Yast_linearizeYfunction_registers_setter,"ast-linearize","function-registers-setter");
EXT(YruntimeYzeroQ,"runtime","zero?");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YastYsignature_naryQ_setter,"ast","signature-nary?-setter");
DEF(Yast_linearizeYclosure_creation_bindings,"ast-linearize","closure-creation-bindings");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YastYenv_object_name,"ast","env-object-name");
EXT(YastYLast_functionG,"ast","<ast-function>");
EXT(Yslot_value,"boot","slot-value");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(YastYLlocalsG,"ast","<locals>");
EXT(YastYfunction_signature,"ast","function-signature");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YastYmonitor_main_thunk,"ast","monitor-main-thunk");
EXT(YastYapplication_tailQ,"ast","application-tail?");
DEF(Yast_linearizeYreference_selfQ_setter,"ast-linearize","reference-self?-setter");
EXT(Ytype_class,"boot","type-class");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
DEF(Yast_linearizeYcollect_registersX,"ast-linearize","collect-registers!");
EXT(YastYmodule_syntax_environment,"ast","module-syntax-environment");
EXT(YastYLast_signatureG,"ast","<ast-signature>");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(YastYbinding_native_toQ,"ast","binding-native-to?");
DEF(Yast_linearizeYadjoin_definitionX,"ast-linearize","adjoin-definition!");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YruntimeYGE,"runtime",">=");
EXT(YLintG,"boot","<int>");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YastYglobal_box_value,"ast","global-box-value");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YastYLast_primitive_definitionG,"ast","<ast-primitive-definition>");
EXT(YruntimeYaddX,"runtime","add!");
DEF(Yast_linearizeYform_program,"ast-linearize","form-program");
EXT(YruntimeYmake_handler,"runtime","make-handler");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_113);
DEFLIT(lit_77);
DEFLIT(lit_35);
DEFLIT(lit_30);
DEFLIT(lit_45);
DEFLIT(lit_2);
DEFLIT(lit_123);
DEFLIT(lit_25);
DEFLIT(lit_65);
DEFLIT(lit_16);
DEFLIT(lit_36);
DEFLIT(lit_128);
DEFLIT(lit_104);
DEFLIT(lit_90);
DEFLIT(lit_26);
DEFLIT(lit_117);
DEFLIT(lit_119);
DEFLIT(lit_124);
DEFLIT(lit_73);
DEFLIT(lit_115);
DEFLIT(lit_50);
DEFLIT(lit_81);
DEFLIT(lit_86);
DEFLIT(lit_17);
DEFLIT(lit_5);
DEFLIT(lit_31);
DEFLIT(lit_89);
DEFLIT(lit_29);
DEFLIT(lit_131);
DEFLIT(lit_132);
DEFLIT(lit_6);
DEFLIT(lit_18);
DEFLIT(lit_126);
DEFLIT(lit_118);
DEFLIT(lit_76);
DEFLIT(lit_82);
DEFLIT(lit_98);
DEFLIT(lit_59);
DEFLIT(lit_42);
DEFLIT(lit_43);
DEFLIT(lit_101);
DEFLIT(lit_133);
DEFLIT(lit_37);
DEFLIT(lit_71);
DEFLIT(lit_9);
DEFLIT(lit_109);
DEFLIT(lit_67);
DEFLIT(lit_79);
DEFLIT(lit_84);
DEFLIT(lit_1);
DEFLIT(lit_88);
DEFLIT(lit_85);
DEFLIT(lit_112);
DEFLIT(lit_91);
DEFLIT(lit_70);
DEFLIT(lit_41);
DEFLIT(lit_66);
DEFLIT(lit_110);
DEFLIT(lit_57);
DEFLIT(lit_87);
DEFLIT(lit_32);
DEFLIT(lit_51);
DEFLIT(lit_122);
DEFLIT(lit_62);
DEFLIT(lit_121);
DEFLIT(lit_120);
DEFLIT(lit_114);
DEFLIT(lit_22);
DEFLIT(lit_44);
DEFLIT(lit_61);
DEFLIT(lit_58);
DEFLIT(lit_46);
DEFLIT(lit_53);
DEFLIT(lit_116);
DEFLIT(lit_3);
DEFLIT(lit_99);
DEFLIT(lit_23);
DEFLIT(lit_52);
DEFLIT(lit_111);
DEFLIT(lit_40);
DEFLIT(lit_33);
DEFLIT(lit_74);
DEFLIT(lit_7);
DEFLIT(lit_97);
DEFLIT(lit_83);
DEFLIT(lit_13);
DEFLIT(lit_11);
DEFLIT(lit_4);
DEFLIT(lit_100);
DEFLIT(lit_8);
DEFLIT(lit_68);
DEFLIT(lit_108);
DEFLIT(lit_34);
DEFLIT(lit_63);
DEFLIT(lit_106);
DEFLIT(lit_72);
DEFLIT(lit_12);
DEFLIT(lit_54);
DEFLIT(lit_130);
DEFLIT(lit_14);
DEFLIT(lit_20);
DEFLIT(lit_24);
DEFLIT(lit_96);
DEFLIT(lit_94);
DEFLIT(lit_107);
DEFLIT(lit_75);
DEFLIT(lit_64);
DEFLIT(lit_27);
DEFLIT(lit_28);
DEFLIT(lit_49);
DEFLIT(lit_56);
DEFLIT(lit_19);
DEFLIT(lit_80);
DEFLIT(lit_105);
DEFLIT(lit_0);
DEFLIT(lit_60);
DEFLIT(lit_47);
DEFLIT(lit_55);
DEFLIT(lit_129);
DEFLIT(lit_78);
DEFLIT(lit_127);
DEFLIT(lit_95);
DEFLIT(lit_21);
DEFLIT(lit_125);
DEFLIT(lit_48);
DEFLIT(lit_102);
DEFLIT(lit_103);
DEFLIT(lit_38);
DEFLIT(lit_69);
DEFLIT(lit_10);
DEFLIT(lit_39);
DEFLIT(lit_93);
DEFLIT(lit_15);
DEFLIT(lit_92);

/* FUNCTIONS: */

LOCFOR(fun_x_1287_0);
LOCFOR(fun_update_walkX_1);
LOCFOR(fun_box_reference_2);
LOCFOR(fun_box_reference_setter_3);
LOCFOR(fun_4);
LOCFOR(fun_box_reference_5);
LOCFOR(fun_box_reference_setter_6);
LOCFOR(fun_7);
LOCFOR(fun_box_form_8);
LOCFOR(fun_box_form_setter_9);
LOCFOR(fun_10);
LOCFOR(fun_box_reference_11);
LOCFOR(fun_box_reference_setter_12);
LOCFOR(fun_13);
LOCFOR(fun_insert_boxX_14);
LOCFOR(fun_insert_boxX_15);
LOCFOR(fun_insert_boxX_16);
LOCFOR(fun_insert_boxX_17);
LOCFOR(fun_insert_boxX_18);
LOCFOR(fun_insert_boxX_19);
LOCFOR(fun_loop_20);
LOCFOR(fun_boxify_mutable_bindings_21);
LOCFOR(fun_sexp_Gobject_22);
LOCFOR(fun_do_do_call_referencesX_23);
LOCFOR(fun_do_call_referencesX_24);
LOCFOR(fun_do_call_referencesX_25);
LOCFOR(fun_analyze_call_references_26);
LOCFOR(fun_do_do_dynamic_extentX_27);
LOCFOR(fun_do_dynamic_extentX_28);
LOCFOR(fun_do_dynamic_extentX_29);
LOCFOR(fun_analyze_dynamic_extent_30);
LOCFOR(fun_do_do_call_upgradesX_31);
LOCFOR(fun_do_call_upgradesX_32);
LOCFOR(fun_unconstrained_typeQ_33);
LOCFOR(fun_do_call_upgradesX_34);
LOCFOR(fun_analyze_calls_35);
LOCFOR(fun_as_36);
LOCFOR(fun_as_37);
LOCFOR(fun_as_38);
FUNFOR(Yast_linearizeYfree_environment);
LOCFOR(fun_empty_40);
LOCFOR(fun_function_free_41);
LOCFOR(fun_function_free_setter_42);
LOCFOR(fun_43);
LOCFOR(fun_reference_offset_44);
LOCFOR(fun_reference_offset_setter_45);
LOCFOR(fun_46);
LOCFOR(fun_reference_selfQ_47);
LOCFOR(fun_reference_selfQ_setter_48);
LOCFOR(fun_49);
LOCFOR(fun_liftX_50);
LOCFOR(fun_lift_proceduresX_51);
LOCFOR(fun_lift_proceduresX_52);
LOCFOR(fun_add_53);
LOCFOR(fun_check_54);
LOCFOR(fun_adjoin_free_bindingX_55);
LOCFOR(fun_lift_proceduresX_56);
LOCFOR(fun_lift_proceduresX_57);
LOCFOR(fun_lift_proceduresX_58);
LOCFOR(fun_lift_proceduresX_59);
LOCFOR(fun_lift_proceduresX_60);
LOCFOR(fun_program_form_61);
LOCFOR(fun_program_form_setter_62);
LOCFOR(fun_63);
LOCFOR(fun_program_quotations_64);
LOCFOR(fun_program_quotations_setter_65);
LOCFOR(fun_66);
LOCFOR(fun_program_definitions_67);
LOCFOR(fun_program_definitions_setter_68);
LOCFOR(fun_69);
LOCFOR(fun_form_program_70);
LOCFOR(fun_form_program_setter_71);
LOCFOR(fun_72);
LOCFOR(fun_form_quotations_73);
LOCFOR(fun_form_quotations_setter_74);
LOCFOR(fun_75);
LOCFOR(fun_form_definitions_76);
LOCFOR(fun_form_definitions_setter_77);
LOCFOR(fun_78);
LOCFOR(fun_function_index_79);
LOCFOR(fun_function_index_setter_80);
LOCFOR(fun_81);
LOCFOR(fun_function_temporaries_82);
LOCFOR(fun_function_temporaries_setter_83);
LOCFOR(fun_84);
LOCFOR(fun_function_registers_85);
LOCFOR(fun_function_registers_setter_86);
LOCFOR(fun_87);
LOCFOR(fun_function_self_recursiveQ_88);
LOCFOR(fun_function_self_recursiveQ_setter_89);
LOCFOR(fun_90);
LOCFOR(fun_function_temporaries_91);
LOCFOR(fun_function_temporaries_setter_92);
LOCFOR(fun_93);
LOCFOR(fun_function_registers_94);
LOCFOR(fun_function_registers_setter_95);
LOCFOR(fun_96);
LOCFOR(fun_function_self_recursiveQ_97);
LOCFOR(fun_function_self_recursiveQ_setter_98);
LOCFOR(fun_99);
LOCFOR(fun_closure_creation_index_100);
LOCFOR(fun_closure_creation_index_setter_101);
LOCFOR(fun_102);
LOCFOR(fun_closure_creation_bindings_103);
LOCFOR(fun_closure_creation_bindings_setter_104);
LOCFOR(fun_105);
LOCFOR(fun_closure_creation_free_106);
LOCFOR(fun_closure_creation_free_setter_107);
LOCFOR(fun_108);
LOCFOR(fun_flatten_seqs_109);
LOCFOR(fun_inner_110);
LOCFOR(fun_loop_111);
LOCFOR(fun_flatten_seqs_112);
LOCFOR(fun_113);
LOCFOR(fun_as_top_level_forms_114);
LOCFOR(fun_115);
LOCFOR(fun_extract_thingsX_116);
LOCFOR(fun_extractX_117);
LOCFOR(fun_extractX_118);
LOCFOR(fun_extractX_119);
LOCFOR(fun_120);
LOCFOR(fun_extractX_121);
LOCFOR(fun_extractX_122);
LOCFOR(fun_adjoin_definitionX_123);
LOCFOR(fun_split_program_124);
LOCFOR(fun_inner_125);
LOCFOR(fun_loop_126);
LOCFOR(fun_split_program_127);
LOCFOR(fun_loop_128);
LOCFOR(fun_closurize_mainX_129);
LOCFOR(fun_130);
LOCFOR(fun_gather_temporariesX_131);
LOCFOR(fun_collect_temporariesX_132);
LOCFOR(fun_collect_temporariesX_133);
LOCFOR(fun_collect_temporariesX_134);
LOCFOR(fun_collect_temporariesX_135);
LOCFOR(fun_adjoin_136);
LOCFOR(fun_adjoin_temporary_variablesX_137);
LOCFOR(fun_binding_index_138);
LOCFOR(fun_binding_index_setter_139);
LOCFOR(fun_140);
LOCFOR(fun_new_renamed_binding_141);
LOCFOR(fun_142);
LOCFOR(fun_register_allocateX_143);
LOCFOR(fun_allocate_register_144);
LOCFOR(fun_collect_registersX_145);
LOCFOR(fun_loop_146);
LOCFOR(fun_collect_registersX_147);
LOCFOR(fun_collect_registersX_148);
LOCFOR(fun_149);
LOCFOR(fun_collect_registersX_150);
LOCFOR(fun_collect_registersX_151);
LOCFOR(fun_collect_registersX_152);
extern P Yast_linearizeY___main_0___ ();
extern P Yast_linearizeY___main_1___ ();
extern P Yast_linearizeY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_x_1287_0) {
  ARG(x_1285_, 0);
  P xF1587;
  P setterF1586;
  P getterF1585;
  P slotF1584;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1;
loop:
  T19 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),x_1285_);
  T18 = CALL1(CHKREF(Ynot),T19);
  if (T18 != YPfalse) {
    T17 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),x_1285_);
    slotF1584 = T17;
    T14 = CALL1(CHKREF(Yslot_getter),slotF1584);
    getterF1585 = T14;
    T13 = CALL1(CHKREF(Yslot_setter),slotF1584);
    setterF1586 = T13;
    T12 = CALL2(CHKREF(YmacrosYEE),getterF1585,CHKREF(YastYbinding_value));
    T11 = CALL1(CHKREF(Ynot),T12);
    if (T11 != YPfalse) {
      T10 = CALL1(getterF1585,FREEREF(2));
      xF1587 = T10;
      T9 = CALL2(CHKREF(YisaQ),xF1587,CHKREF(YastYLprogramG));
      if (T9 != YPfalse) {
        T8 = CALL2(CHKREF(YmacrosYpair),xF1587,FREEREF(3));
        T7 = CALL2(CHKREF(Yapply),FREEREF(4),T8);
        T6 = CALL2(setterF1586,T7,FREEREF(2));
        T5 = T6;
      } else {
        T5 = YPfalse;
      }
      T4 = T5;
      T3 = T4;
    } else {
      T3 = YPfalse;
    }
    T2 = T3;
    T16 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),x_1285_);
    a1 = T16;
    x_1285_ = a1;
    goto loop;
    T1 = T15;
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_update_walkX_1) {
  ARG(args_, 0);
  ARG(o_, 1);
  ARG(g_, 2);
  P x_1287F1589;
  P x_1286F1588;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T4 = CALL1(CHKREF(Yobject_slots),o_);
  x_1286F1588 = T4;
  T3 = FUNSHELL(1,fun_x_1287_0,5);
  x_1287F1589 = T3;
  FUNINIT(x_1287F1589, 5,x_1286F1588,x_1287F1589,o_,args_,g_);
  T2 = CALL1(CHKREF(YruntimeYini_state),x_1286F1588);
  T1 = KCALL1(x_1287F1589,T2);
  T0 = T1;
  QRET(o_);
}

FUNCODEDEF(fun_box_reference_2) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYbox_reference));
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_setter_3) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYbox_reference));
  QRET(T0);
}

FUNCODEDEF(fun_4) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_box_reference_5) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYbox_reference));
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_setter_6) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYbox_reference));
  QRET(T0);
}

FUNCODEDEF(fun_7) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_box_form_8) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYbox_form));
  QRET(T0);
}

FUNCODEDEF(fun_box_form_setter_9) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYbox_form));
  QRET(T0);
}

FUNCODEDEF(fun_10) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_box_reference_11) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYbox_reference));
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_setter_12) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYbox_reference));
  QRET(T0);
}

FUNCODEDEF(fun_13) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_insert_boxX_14) {
  ARG(o_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yast_linearizeYupdate_walkX),CHKREF(Yast_linearizeYinsert_boxX),o_);
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_15) {
  ARG(o_, 0);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = CALL1(CHKREF(YastYreference_binding),o_);
  T5 = CALL1(CHKREF(YastYbinding_mutableQ),T6);
  if (T5 != YPfalse) {
    T4 = (P)YPpair(CHKREF(Yast_linearizeYLbox_readG),Ynil);
    T3 = (P)YPpair(CHKREF(Yast_linearizeYbox_reference),Ynil);
    T2 = (P)YPpair(o_,Ynil);
    T1 = CALL3(CHKREF(YPisa),T4,T3,T2);
    T0 = T1;
  } else {
    T0 = o_;
  }
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_16) {
  ARG(o_, 0);
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = (P)YPpair(CHKREF(Yast_linearizeYLbox_writeG),Ynil);
  T7 = (P)YPpair(CHKREF(Yast_linearizeYbox_form),Ynil);
  T6 = (P)YPpair(CHKREF(Yast_linearizeYbox_reference),T7);
  T5 = CALL1(CHKREF(YastYassignment_reference),o_);
  T4 = CALL1(CHKREF(YastYassignment_form),o_);
  T3 = CALL1(CHKREF(Yast_linearizeYinsert_boxX),T4);
  T2 = (P)YPpair(T3,Ynil);
  T1 = (P)YPpair(T5,T2);
  T0 = CALL3(CHKREF(YPisa),T8,T6,T1);
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_17) {
  ARG(o_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = CALL1(CHKREF(YastYfunction_body),o_);
  T2 = CALL1(CHKREF(YastYfunction_bindings),o_);
  T1 = CALL2(CHKREF(Yast_linearizeYboxify_mutable_bindings),T3,T2);
  T0 = CALL1(CHKREF(Yast_linearizeYinsert_boxX),T1);
  CALL2(CHKREF(YastYfunction_body_setter),T0,o_);
  QRET(o_);
}

FUNCODEDEF(fun_insert_boxX_18) {
  ARG(o_, 0);
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YastYfix_let_arguments),o_);
  T0 = CALL1(CHKREF(Yast_linearizeYinsert_boxX),T1);
  CALL2(CHKREF(YastYfix_let_arguments_setter),T0,o_);
  T5 = CALL1(CHKREF(YastYfix_let_body),o_);
  T4 = CALL1(CHKREF(YastYfix_let_bindings),o_);
  T3 = CALL2(CHKREF(Yast_linearizeYboxify_mutable_bindings),T5,T4);
  T2 = CALL1(CHKREF(Yast_linearizeYinsert_boxX),T3);
  CALL2(CHKREF(YastYfix_let_body_setter),T2,o_);
  QRET(o_);
}

FUNCODEDEF(fun_insert_boxX_19) {
  ARG(o_, 0);
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YastYlocals_functions),o_);
  T0 = CALL2(CHKREF(YmacrosYmap),CHKREF(Yast_linearizeYinsert_boxX),T1);
  CALL2(CHKREF(YastYlocals_functions_setter),T0,o_);
  T5 = CALL1(CHKREF(YastYlocals_body),o_);
  T4 = CALL1(CHKREF(YastYlocals_bindings),o_);
  T3 = CALL2(CHKREF(Yast_linearizeYboxify_mutable_bindings),T5,T4);
  T2 = CALL1(CHKREF(Yast_linearizeYinsert_boxX),T3);
  CALL2(CHKREF(YastYlocals_body_setter),T2,o_);
  QRET(o_);
}

FUNCODEDEF(fun_loop_20) {
  ARG(bindings_, 0);
  ARG(res_, 1);
  P creatorF1591;
  P bindingF1590;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T21 = CALL1(CHKREF(YmacrosYemptyQ),bindings_);
  if (T21 != YPfalse) {
    T20 = CALL2(CHKREF(YmacrosYpair),FREEREF(1),res_);
    T19 = CALL1(CHKREF(YruntimeYrevX),T20);
    T0 = T19;
  } else {
    T18 = CALL1(CHKREF(Yhead),bindings_);
    bindingF1590 = T18;
    T17 = CALL1(CHKREF(YastYbinding_mutableQ),bindingF1590);
    if (T17 != YPfalse) {
      T16 = (P)YPpair(CHKREF(Yast_linearizeYLbox_creationG),Ynil);
      T15 = (P)YPpair(CHKREF(Yast_linearizeYbox_reference),Ynil);
      T14 = (P)YPpair(CHKREF(YastYLlocal_referenceG),Ynil);
      T13 = (P)YPpair(CHKREF(YastYreference_binding),Ynil);
      T12 = (P)YPpair(bindingF1590,Ynil);
      T11 = CALL3(CHKREF(YPisa),T14,T13,T12);
      T10 = (P)YPpair(T11,Ynil);
      T9 = CALL3(CHKREF(YPisa),T16,T15,T10);
      creatorF1591 = T9;
      T8 = CALL2(CHKREF(YmacrosYpair),creatorF1591,res_);
      T7 = CALL1(CHKREF(Ytail),bindings_);
      a1 = T8;
      a2 = T7;
      res_ = a1;
      bindings_ = a2;
      goto loop;
      T5 = T6;
      T2 = T5;
    } else {
      T4 = CALL1(CHKREF(Ytail),bindings_);
      a1 = res_;
      a2 = T4;
      res_ = a1;
      bindings_ = a2;
      goto loop;
      T2 = T3;
    }
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_boxify_mutable_bindings_21) {
  ARG(bindings_, 0);
  ARG(form_, 1);
  P loopF1592;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = FUNSHELL(1,fun_loop_20,2);
  loopF1592 = T3;
  FUNINIT(loopF1592, 2,loopF1592,form_);
  T2 = KCALL2(loopF1592,Ynil,bindings_);
  T1 = T2;
  T0 = CALL1(CHKREF(YastYsequentialize),T1);
  QRET(T0);
}

FUNCODEDEF(fun_sexp_Gobject_22) {
  ARG(r_, 0);
  ARG(exp_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL3(CHKREF(YastYobjectify),exp_,r_,YPfalse);
  T0 = CALL1(CHKREF(Yast_linearizeYinsert_boxX),T1);
  QRET(T0);
}

FUNCODEDEF(fun_do_do_call_referencesX_23) {
  ARG(o_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yast_linearizeYupdate_walkX),CHKREF(Yast_linearizeYdo_call_referencesX),o_);
  QRET(T0);
}

FUNCODEDEF(fun_do_call_referencesX_24) {
  ARG(o_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Yast_linearizeYdo_do_call_referencesX),o_);
  QRET(T0);
}

FUNCODEDEF(fun_do_call_referencesX_25) {
  ARG(o_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  CALL1(CHKREF(Yast_linearizeYdo_do_call_referencesX),o_);
  T3 = CALL1(CHKREF(YastYapplication_function),o_);
  T2 = CALL2(CHKREF(YisaQ),T3,CHKREF(YastYLlocal_referenceG));
  if (T2 != YPfalse) {
    T1 = CALL1(CHKREF(YastYapplication_function),o_);
    T0 = CALL2(CHKREF(YastYreference_called_functionQ_setter),YPtrue,T1);
  } else {
  }
  QRET(o_);
}

FUNCODEDEF(fun_analyze_call_references_26) {
  ARG(o_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Yast_linearizeYdo_call_referencesX),o_);
  QRET(T0);
}

FUNCODEDEF(fun_do_do_dynamic_extentX_27) {
  ARG(o_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yast_linearizeYupdate_walkX),CHKREF(Yast_linearizeYdo_dynamic_extentX),o_);
  QRET(T0);
}

FUNCODEDEF(fun_do_dynamic_extentX_28) {
  ARG(o_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Yast_linearizeYdo_do_dynamic_extentX),o_);
  QRET(T0);
}

FUNCODEDEF(fun_do_dynamic_extentX_29) {
  ARG(o_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  CALL1(CHKREF(Yast_linearizeYdo_do_dynamic_extentX),o_);
  T3 = CALL1(CHKREF(YastYreference_called_functionQ),o_);
  T2 = CALL1(CHKREF(Ynot),T3);
  if (T2 != YPfalse) {
    T1 = CALL1(CHKREF(YastYreference_binding),o_);
    T0 = CALL2(CHKREF(YastYbinding_dynamic_extentQ_setter),YPfalse,T1);
  } else {
  }
  QRET(o_);
}

FUNCODEDEF(fun_analyze_dynamic_extent_30) {
  ARG(o_, 0);
  P T0;
  P a1;
loop:
  CALL1(CHKREF(Yast_linearizeYanalyze_call_references),o_);
  T0 = CALL1(CHKREF(Yast_linearizeYdo_dynamic_extentX),o_);
  QRET(T0);
}

FUNCODEDEF(fun_do_do_call_upgradesX_31) {
  ARG(o_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yast_linearizeYupdate_walkX),CHKREF(Yast_linearizeYdo_call_upgradesX),o_);
  QRET(T0);
}

FUNCODEDEF(fun_do_call_upgradesX_32) {
  ARG(o_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Yast_linearizeYdo_do_call_upgradesX),o_);
  QRET(T0);
}

FUNCODEDEF(fun_unconstrained_typeQ_33) {
  ARG(o_, 0);
  P tmpF1593;
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T5 = CALL2(CHKREF(YisaQ),o_,CHKREF(YastYLglobal_referenceG));
  tmpF1593 = T5;
  if (tmpF1593 != YPfalse) {
    T4 = CALL1(CHKREF(YastYreference_binding),o_);
    T3 = CALL1(CHKREF(YastYbinding_name),T4);
    T2 = CALL2(CHKREF(YmacrosYEE),T3,CHKREF(lit_34));
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_do_call_upgradesX_34) {
  ARG(o_, 0);
  P tmpF1598;
  P tmpF1597;
  P tmpF1596;
  P tmpF1595;
  P metF1594;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  CALL1(CHKREF(Yast_linearizeYdo_do_call_upgradesX),o_);
  T28 = CALL1(CHKREF(YastYapplication_function),o_);
  T27 = CALL2(CHKREF(YisaQ),T28,CHKREF(YastYLlocal_referenceG));
  if (T27 != YPfalse) {
    T26 = CALL1(CHKREF(YastYapplication_function),o_);
    T25 = CALL1(CHKREF(YastYreference_binding),T26);
    T24 = CALL1(CHKREF(YastYbinding_value),T25);
    metF1594 = T24;
    T23 = CALL2(CHKREF(YisaQ),metF1594,CHKREF(YastYLast_functionG));
    tmpF1595 = T23;
    if (tmpF1595 != YPfalse) {
      T22 = CALL2(CHKREF(YruntimeYcompose),CHKREF(Yast_linearizeYunconstrained_typeQ),CHKREF(YastYbinding_type));
      T21 = CALL1(CHKREF(YastYfunction_bindings),metF1594);
      T20 = CALL2(CHKREF(YruntimeYallQ),T22,T21);
      tmpF1596 = T20;
      if (tmpF1596 != YPfalse) {
        T19 = CALL1(CHKREF(YastYfunction_value),metF1594);
        T18 = CALL1(CHKREF(Yast_linearizeYunconstrained_typeQ),T19);
        tmpF1597 = T18;
        if (tmpF1597 != YPfalse) {
          T17 = CALL1(CHKREF(YastYfunction_naryQ),metF1594);
          T16 = CALL1(CHKREF(Ynot),T17);
          tmpF1598 = T16;
          if (tmpF1598 != YPfalse) {
            T15 = CALL1(CHKREF(YastYapplication_arguments),o_);
            T14 = CALL1(CHKREF(YruntimeYlen),T15);
            T13 = CALL1(CHKREF(YastYfunction_bindings),metF1594);
            T12 = CALL1(CHKREF(YruntimeYlen),T13);
            T11 = CALL2(CHKREF(YruntimeYE),T14,T12);
            T10 = T11;
          } else {
            T10 = YPfalse;
          }
          T9 = T10;
          T8 = T9;
        } else {
          T8 = YPfalse;
        }
        T7 = T8;
        T6 = T7;
      } else {
        T6 = YPfalse;
      }
      T5 = T6;
      T4 = T5;
    } else {
      T4 = YPfalse;
    }
    T3 = T4;
    if (T3 != YPfalse) {
      T2 = CALL2(CHKREF(YastYapplication_knownQ_setter),YPtrue,o_);
      T1 = T2;
    } else {
      T1 = YPfalse;
    }
    T0 = T1;
  } else {
  }
  QRET(o_);
}

FUNCODEDEF(fun_analyze_calls_35) {
  ARG(o_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Yast_linearizeYdo_call_upgradesX),o_);
  QRET(T0);
}

FUNCODEDEF(fun_as_36) {
  ARG(x_, 0);
  ARG(p_, 1);
  P a1,a2;
loop:
  RET(x_);
}

FUNCODEDEF(fun_as_37) {
  ARG(x_, 0);
  ARG(p_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL2(CHKREF(Yapply),CHKREF(Ylst),x_);
  RET(T0);
}

FUNCODEDEF(fun_as_38) {
  ARG(x_, 0);
  ARG(p_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YmacrosYpair),CHKREF(Yast_linearizeYLfree_environmentG),x_);
  T0 = CALL2(CHKREF(Yapply),CHKREF(YruntimeYfabs),T1);
  RET(T0);
}

FUNCODEDEF(Yast_linearizeYfree_environment) {
  ARG(t_, 0);
  ARG(h_, 1);
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = (P)YPpair(CHKREF(Yast_linearizeYLfree_environmentG),Ynil);
  T4 = (P)YPpair(CHKREF(Ytail),Ynil);
  T3 = (P)YPpair(CHKREF(Yhead),T4);
  T2 = (P)YPpair(t_,Ynil);
  T1 = (P)YPpair(h_,T2);
  T0 = CALL3(CHKREF(YPisa),T5,T3,T1);
  QRET(T0);
}

FUNCODEDEF(fun_empty_40) {
  ARG(e_, 0);
  P a1;
loop:
  RET(CHKREF(Yast_linearizeYDfree_environment_empty));
}

FUNCODEDEF(fun_function_free_41) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYfunction_free));
  QRET(T0);
}

FUNCODEDEF(fun_function_free_setter_42) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYfunction_free));
  QRET(T0);
}

FUNCODEDEF(fun_43) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeYempty),CHKREF(Yast_linearizeYLfree_environmentG));
  QRET(T0);
}

FUNCODEDEF(fun_reference_offset_44) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYreference_offset));
  QRET(T0);
}

FUNCODEDEF(fun_reference_offset_setter_45) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYreference_offset));
  QRET(T0);
}

FUNCODEDEF(fun_46) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_reference_selfQ_47) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYreference_selfQ));
  QRET(T0);
}

FUNCODEDEF(fun_reference_selfQ_setter_48) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYreference_selfQ));
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_liftX_50) {
  ARG(o_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL3(CHKREF(Yast_linearizeYlift_proceduresX),o_,YPfalse,Ynil);
  QRET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_51) {
  ARG(bindings_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P T0;
  P a1,a2,a3;
loop:
  T0 = CALLN(CHKREF(Yast_linearizeYupdate_walkX),4,CHKREF(Yast_linearizeYlift_proceduresX),o_,flat_fun_,bindings_);
  QRET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_52) {
  ARG(bindings_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P offsetF1600;
  P bF1599;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2,a3;
loop:
  T16 = CALL1(CHKREF(YastYreference_binding),o_);
  bF1599 = T16;
  T15 = CALL2(CHKREF(YruntimeYmemQ),bindings_,bF1599);
  if (T15 != YPfalse) {
    T1 = o_;
  } else {
    T14 = CALL2(CHKREF(Yast_linearizeYadjoin_free_bindingX),flat_fun_,o_);
    offsetF1600 = T14;
    T13 = (P)YPpair(CHKREF(Yast_linearizeYLfree_referenceG),Ynil);
    T12 = (P)YPpair(CHKREF(Yast_linearizeYreference_selfQ),Ynil);
    T11 = (P)YPpair(CHKREF(Yast_linearizeYreference_offset),T12);
    T10 = (P)YPpair(CHKREF(YastYreference_binding),T11);
    T9 = CALL1(CHKREF(YastYreference_binding),o_);
    T8 = CALL1(CHKREF(YastYfunction_binding),flat_fun_);
    T7 = CALL2(CHKREF(YmacrosYEE),T9,T8);
    T6 = (P)YPpair(T7,Ynil);
    T5 = (P)YPpair(offsetF1600,T6);
    T4 = (P)YPpair(bF1599,T5);
    T3 = CALL3(CHKREF(YPisa),T13,T10,T4);
    T2 = T3;
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_add_53) {
  ARG(freeT_, 0);
  P tailF1601;
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T5 = CALL1(CHKREF(Ytail),freeT_);
  tailF1601 = T5;
  T4 = CALL1(CHKREF(YmacrosYemptyQ),tailF1601);
  if (T4 != YPfalse) {
    T3 = CALL2(CHKREF(Ytail_setter),FREEREF(1),freeT_);
    T1 = T3;
  } else {
    a1 = tailF1601;
    freeT_ = a1;
    goto loop;
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_check_54) {
  ARG(freeT_, 0);
  ARG(i_, 1);
  P addF1603;
  P new_envF1602;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T19 = CALL1(CHKREF(YmacrosYemptyQ),freeT_);
  if (T19 != YPfalse) {
    T18 = CALL1(CHKREF(YruntimeYempty),CHKREF(Yast_linearizeYLfree_environmentG));
    T17 = CALL2(CHKREF(Yast_linearizeYfree_environment),FREEREF(1),T18);
    new_envF1602 = T17;
    T16 = CALL1(CHKREF(Yast_linearizeYfunction_free),FREEREF(2));
    T15 = CALL1(CHKREF(YmacrosYemptyQ),T16);
    if (T15 != YPfalse) {
      T14 = CALL2(CHKREF(Yast_linearizeYfunction_free_setter),new_envF1602,FREEREF(2));
    } else {
      T13 = FUNSHELL(1,fun_add_53,2);
      addF1603 = T13;
      FUNINIT(addF1603, 2,addF1603,new_envF1602);
      T12 = CALL1(CHKREF(Yast_linearizeYfunction_free),FREEREF(2));
      T11 = KCALL1(addF1603,T12);
      T10 = T11;
    }
    T9 = i_;
    T0 = T9;
  } else {
    T8 = CALL1(CHKREF(YastYreference_binding),FREEREF(1));
    T7 = CALL1(CHKREF(Yhead),freeT_);
    T6 = CALL1(CHKREF(YastYreference_binding),T7);
    T5 = CALL2(CHKREF(YmacrosYEE),T8,T6);
    if (T5 != YPfalse) {
      T1 = i_;
    } else {
      T4 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
      T3 = CALL1(CHKREF(Ytail),freeT_);
      a1 = T4;
      a2 = T3;
      i_ = a1;
      freeT_ = a2;
      goto loop;
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_free_bindingX_55) {
  ARG(ref_, 0);
  ARG(flat_fun_, 1);
  P checkF1604;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = FUNSHELL(1,fun_check_54,3);
  checkF1604 = T3;
  FUNINIT(checkF1604, 3,checkF1604,ref_,flat_fun_);
  T2 = CALL1(CHKREF(Yast_linearizeYfunction_free),flat_fun_);
  T1 = CALL2(checkF1604,YPint((P)0),T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_56) {
  ARG(bindings_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P new_bindingsF1605;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T1 = CALL1(CHKREF(YastYfix_let_arguments),o_);
  T0 = CALL3(CHKREF(Yast_linearizeYlift_proceduresX),T1,flat_fun_,bindings_);
  CALL2(CHKREF(YastYfix_let_arguments_setter),T0,o_);
  T6 = CALL1(CHKREF(YastYfix_let_bindings),o_);
  T5 = CALL2(CHKREF(YmacrosYcat),T6,bindings_);
  new_bindingsF1605 = T5;
  T4 = CALL1(CHKREF(YastYfix_let_body),o_);
  T3 = CALL3(CHKREF(Yast_linearizeYlift_proceduresX),T4,flat_fun_,new_bindingsF1605);
  CALL2(CHKREF(YastYfix_let_body_setter),T3,o_);
  T2 = o_;
  QRET(T2);
}

FUNCODEDEF(fun_lift_proceduresX_57) {
  ARG(bindings_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P new_bindingsF1606;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T7 = CALL1(CHKREF(YastYlocals_bindings),o_);
  T6 = CALL2(CHKREF(YmacrosYcat),T7,bindings_);
  new_bindingsF1606 = T6;
  T3 = CALL3(CHKREF(YruntimeYrcurry),CHKREF(Yast_linearizeYlift_proceduresX),flat_fun_,new_bindingsF1606);
  T2 = CALL1(CHKREF(YastYlocals_functions),o_);
  T1 = CALL2(CHKREF(YmacrosYmap),T3,T2);
  CALL2(CHKREF(YastYlocals_functions_setter),T1,o_);
  T5 = CALL1(CHKREF(YastYlocals_body),o_);
  T4 = CALL3(CHKREF(Yast_linearizeYlift_proceduresX),T5,flat_fun_,new_bindingsF1606);
  CALL2(CHKREF(YastYlocals_body_setter),T4,o_);
  T0 = o_;
  QRET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_58) {
  ARG(bindings_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T2 = CALL1(CHKREF(YastYfunction_body),o_);
  T1 = CALL1(CHKREF(YastYfunction_bindings),o_);
  T0 = CALL3(CHKREF(Yast_linearizeYlift_proceduresX),T2,YPfalse,T1);
  CALL2(CHKREF(YastYfunction_body_setter),T0,o_);
  QRET(o_);
}

FUNCODEDEF(fun_lift_proceduresX_59) {
  ARG(bindings_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P a1,a2,a3;
loop:
  QRET(o_);
}

FUNCODEDEF(fun_lift_proceduresX_60) {
  ARG(bindings_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P freeTF1610;
  P new_funF1609;
  P bodyF1608;
  P local_bindingsF1607;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T24 = CALL1(CHKREF(YastYfunction_bindings),o_);
  local_bindingsF1607 = T24;
  T23 = CALL1(CHKREF(YastYfunction_body),o_);
  bodyF1608 = T23;
  T22 = (P)YPpair(CHKREF(Yast_linearizeYLflat_functionG),Ynil);
  T21 = (P)YPpair(CHKREF(Yast_linearizeYfunction_free),Ynil);
  T20 = (P)YPpair(CHKREF(YastYfunction_body),T21);
  T19 = (P)YPpair(CHKREF(YastYfunction_signature),T20);
  T18 = (P)YPpair(CHKREF(YastYfunction_debug_name),T19);
  T17 = (P)YPpair(CHKREF(YastYfunction_binding),T18);
  T16 = CALL1(CHKREF(YastYfunction_binding),o_);
  T15 = CALL1(CHKREF(YastYfunction_debug_name),o_);
  T14 = CALL1(CHKREF(YastYfunction_signature),o_);
  T13 = CALL1(CHKREF(YruntimeYempty),CHKREF(Yast_linearizeYLfree_environmentG));
  T12 = (P)YPpair(T13,Ynil);
  T11 = (P)YPpair(bodyF1608,T12);
  T10 = (P)YPpair(T14,T11);
  T9 = (P)YPpair(T15,T10);
  T8 = (P)YPpair(T16,T9);
  T7 = CALL3(CHKREF(YPisa),T22,T17,T8);
  new_funF1609 = T7;
  T3 = CALL3(CHKREF(Yast_linearizeYlift_proceduresX),bodyF1608,new_funF1609,local_bindingsF1607);
  CALL2(CHKREF(YastYfunction_body_setter),T3,new_funF1609);
  T6 = CALL1(CHKREF(Yast_linearizeYfunction_free),new_funF1609);
  freeTF1610 = T6;
  T5 = CALL3(CHKREF(Yast_linearizeYlift_proceduresX),freeTF1610,flat_fun_,bindings_);
  T4 = CALL2(CHKREF(Yast_linearizeYfunction_free_setter),T5,new_funF1609);
  T2 = new_funF1609;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_program_form_61) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYprogram_form));
  QRET(T0);
}

FUNCODEDEF(fun_program_form_setter_62) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYprogram_form));
  QRET(T0);
}

FUNCODEDEF(fun_63) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_program_quotations_64) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYprogram_quotations));
  QRET(T0);
}

FUNCODEDEF(fun_program_quotations_setter_65) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYprogram_quotations));
  QRET(T0);
}

FUNCODEDEF(fun_66) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYfab),CHKREF(YruntimeYLtabG),YPint((P)40));
  QRET(T0);
}

FUNCODEDEF(fun_program_definitions_67) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYprogram_definitions));
  QRET(T0);
}

FUNCODEDEF(fun_program_definitions_setter_68) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYprogram_definitions));
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(Ynil);
}

FUNCODEDEF(fun_form_program_70) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYform_program));
  QRET(T0);
}

FUNCODEDEF(fun_form_program_setter_71) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYform_program));
  QRET(T0);
}

FUNCODEDEF(fun_72) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_form_quotations_73) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYform_quotations));
  QRET(T0);
}

FUNCODEDEF(fun_form_quotations_setter_74) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYform_quotations));
  QRET(T0);
}

FUNCODEDEF(fun_75) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(Ynil);
}

FUNCODEDEF(fun_form_definitions_76) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYform_definitions));
  QRET(T0);
}

FUNCODEDEF(fun_form_definitions_setter_77) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYform_definitions));
  QRET(T0);
}

FUNCODEDEF(fun_78) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(Ynil);
}

FUNCODEDEF(fun_function_index_79) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYfunction_index));
  QRET(T0);
}

FUNCODEDEF(fun_function_index_setter_80) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYfunction_index));
  QRET(T0);
}

FUNCODEDEF(fun_81) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_function_temporaries_82) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYfunction_temporaries));
  QRET(T0);
}

FUNCODEDEF(fun_function_temporaries_setter_83) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYfunction_temporaries));
  QRET(T0);
}

FUNCODEDEF(fun_84) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(Ynil);
}

FUNCODEDEF(fun_function_registers_85) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYfunction_registers));
  QRET(T0);
}

FUNCODEDEF(fun_function_registers_setter_86) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYfunction_registers));
  QRET(T0);
}

FUNCODEDEF(fun_87) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(Ynil);
}

FUNCODEDEF(fun_function_self_recursiveQ_88) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYfunction_self_recursiveQ));
  QRET(T0);
}

FUNCODEDEF(fun_function_self_recursiveQ_setter_89) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYfunction_self_recursiveQ));
  QRET(T0);
}

FUNCODEDEF(fun_90) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_function_temporaries_91) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYfunction_temporaries));
  QRET(T0);
}

FUNCODEDEF(fun_function_temporaries_setter_92) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYfunction_temporaries));
  QRET(T0);
}

FUNCODEDEF(fun_93) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(Ynil);
}

FUNCODEDEF(fun_function_registers_94) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYfunction_registers));
  QRET(T0);
}

FUNCODEDEF(fun_function_registers_setter_95) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYfunction_registers));
  QRET(T0);
}

FUNCODEDEF(fun_96) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(Ynil);
}

FUNCODEDEF(fun_function_self_recursiveQ_97) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYfunction_self_recursiveQ));
  QRET(T0);
}

FUNCODEDEF(fun_function_self_recursiveQ_setter_98) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYfunction_self_recursiveQ));
  QRET(T0);
}

FUNCODEDEF(fun_99) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_closure_creation_index_100) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYclosure_creation_index));
  QRET(T0);
}

FUNCODEDEF(fun_closure_creation_index_setter_101) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYclosure_creation_index));
  QRET(T0);
}

FUNCODEDEF(fun_102) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_closure_creation_bindings_103) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYclosure_creation_bindings));
  QRET(T0);
}

FUNCODEDEF(fun_closure_creation_bindings_setter_104) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYclosure_creation_bindings));
  QRET(T0);
}

FUNCODEDEF(fun_105) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_closure_creation_free_106) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYclosure_creation_free));
  QRET(T0);
}

FUNCODEDEF(fun_closure_creation_free_setter_107) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYclosure_creation_free));
  QRET(T0);
}

FUNCODEDEF(fun_108) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_flatten_seqs_109) {
  ARG(o_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Ylst),o_);
  QRET(T0);
}

FUNCODEDEF(fun_inner_110) {
  ARG(r_, 0);
  ARG(ss_, 1);
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T7 = CALL1(CHKREF(YmacrosYemptyQ),ss_);
  if (T7 != YPfalse) {
    T6 = CALL1(CHKREF(Ytail),FREEREF(1));
    T5 = KCALL2(FREEREF(2),T6,r_);
    T0 = T5;
  } else {
    T4 = CALL1(CHKREF(Ytail),ss_);
    T3 = CALL1(CHKREF(Yhead),ss_);
    T2 = CALL2(CHKREF(YmacrosYpair),T3,r_);
    a1 = T4;
    a2 = T2;
    ss_ = a1;
    r_ = a2;
    goto loop;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_loop_111) {
  ARG(r_, 0);
  ARG(s_, 1);
  P innerF1611;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T7 = CALL1(CHKREF(YmacrosYemptyQ),s_);
  if (T7 != YPfalse) {
    T6 = CALL1(CHKREF(YruntimeYrevX),r_);
    T0 = T6;
  } else {
    T5 = FUNSHELL(1,fun_inner_110,3);
    innerF1611 = T5;
    FUNINIT(innerF1611, 3,innerF1611,s_,FREEREF(0));
    T4 = CALL1(CHKREF(Yhead),s_);
    T3 = CALL1(CHKREF(Yast_linearizeYflatten_seqs),T4);
    T2 = KCALL2(innerF1611,T3,r_);
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_flatten_seqs_112) {
  ARG(o_, 0);
  P loopF1612;
  P T2,T1,T0;
  P a1;
loop:
  T2 = FUNSHELL(1,fun_loop_111,1);
  loopF1612 = T2;
  FUNINIT(loopF1612, 1,loopF1612);
  T1 = KCALL2(loopF1612,o_,Ynil);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_113) {
  ARG(x_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = (P)YPpair(CHKREF(Yast_linearizeYLtop_level_formG),Ynil);
  T2 = (P)YPpair(CHKREF(Yast_linearizeYform_program),Ynil);
  T1 = (P)YPpair(x_,Ynil);
  T0 = CALL3(CHKREF(YPisa),T3,T2,T1);
  QRET(T0);
}

FUNCODEDEF(fun_as_top_level_forms_114) {
  ARG(programs_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = fun_113;
  T0 = CALL2(CHKREF(YmacrosYmap),T1,programs_);
  QRET(T0);
}

FUNCODEDEF(fun_115) {
  ARG(form_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL3(CHKREF(Yast_linearizeYextractX),form_,form_,FREEREF(0));
  QRET(T0);
}

FUNCODEDEF(fun_extract_thingsX_116) {
  ARG(o_, 0);
  P resultF1614;
  P formsF1613;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = CALL1(CHKREF(Yast_linearizeYflatten_seqs),o_);
  T7 = CALL1(CHKREF(Yast_linearizeYas_top_level_forms),T8);
  formsF1613 = T7;
  T6 = (P)YPpair(CHKREF(Yast_linearizeYLflattened_programG),Ynil);
  T5 = CALL3(CHKREF(YPisa),T6,Ynil,Ynil);
  resultF1614 = T5;
  T4 = FUNFAB(fun_115,1,resultF1614);
  T3 = CALL2(CHKREF(YmacrosYmap),T4,formsF1613);
  T2 = CALL1(CHKREF(YastYsequentialize),T3);
  CALL2(CHKREF(Yast_linearizeYprogram_form_setter),T2,resultF1614);
  T1 = resultF1614;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_extractX_117) {
  ARG(result_, 0);
  ARG(form_, 1);
  ARG(o_, 2);
  P T0;
  P a1,a2,a3;
loop:
  T0 = CALLN(CHKREF(Yast_linearizeYupdate_walkX),4,CHKREF(Yast_linearizeYextractX),o_,form_,result_);
  QRET(T0);
}

FUNCODEDEF(fun_extractX_118) {
  ARG(result_, 0);
  ARG(form_, 1);
  ARG(o_, 2);
  P tmpF1623;
  P tmpF1622;
  P tmpF1621;
  P tmpF1620;
  P qbF1619;
  P probeF1618;
  P indexF1617;
  P qbTF1616;
  P valueF1615;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T42 = CALL1(CHKREF(YastYconstant_value),o_);
  valueF1615 = T42;
  T41 = CALL2(CHKREF(YmacrosYEE),valueF1615,YPfalse);
  tmpF1620 = T41;
  if (tmpF1620 != YPfalse) {
    T30 = tmpF1620;
  } else {
    T40 = CALL2(CHKREF(YmacrosYEE),valueF1615,YPtrue);
    tmpF1621 = T40;
    if (tmpF1621 != YPfalse) {
      T32 = tmpF1621;
    } else {
      T39 = CALL2(CHKREF(YmacrosYEE),valueF1615,Ynil);
      tmpF1622 = T39;
      if (tmpF1622 != YPfalse) {
        T34 = tmpF1622;
      } else {
        T38 = CALL2(CHKREF(YisaQ),valueF1615,CHKREF(YLintG));
        tmpF1623 = T38;
        if (tmpF1623 != YPfalse) {
          T36 = tmpF1623;
        } else {
          T37 = CALL2(CHKREF(YisaQ),valueF1615,CHKREF(YLchrG));
          T36 = T37;
        }
        T35 = T36;
        T34 = T35;
      }
      T33 = T34;
      T32 = T33;
    }
    T31 = T32;
    T30 = T31;
  }
  T29 = T30;
  if (T29 != YPfalse) {
    T1 = o_;
  } else {
    T28 = CALL1(CHKREF(Yast_linearizeYprogram_quotations),result_);
    qbTF1616 = T28;
    T27 = CALL1(CHKREF(YruntimeYlen),qbTF1616);
    indexF1617 = T27;
    T26 = CALL2(CHKREF(YruntimeYelt),qbTF1616,valueF1615);
    probeF1618 = T26;
    T25 = CALL2(CHKREF(YruntimeYNEE),probeF1618,CHKREF(Ynul));
    if (T25 != YPfalse) {
      T24 = (P)YPpair(CHKREF(YastYLglobal_referenceG),Ynil);
      T23 = (P)YPpair(CHKREF(YastYreference_binding),Ynil);
      T22 = (P)YPpair(probeF1618,Ynil);
      T21 = CALL3(CHKREF(YPisa),T24,T23,T22);
      T5 = T21;
    } else {
      T20 = (P)YPpair(CHKREF(YastYLmodule_bindingG),Ynil);
      T19 = (P)YPpair(CHKREF(YastYbinding_info),Ynil);
      T18 = (P)YPpair(CHKREF(YastYbinding_name),T19);
      T17 = (P)YPpair(CHKREF(YastYbinding_kind),T18);
      T16 = (P)YPpair(valueF1615,Ynil);
      T15 = (P)YPpair(indexF1617,T16);
      T14 = (P)YPpair(CHKREF(lit_101),T15);
      T13 = CALL3(CHKREF(YPisa),T20,T17,T14);
      qbF1619 = T13;
      CALL3(CHKREF(YruntimeYelt_setter),qbF1619,qbTF1616,valueF1615);
      T8 = CALL1(CHKREF(Yast_linearizeYform_quotations),form_);
      T7 = CALL2(CHKREF(YmacrosYpair),qbF1619,T8);
      CALL2(CHKREF(Yast_linearizeYform_quotations_setter),T7,form_);
      T12 = (P)YPpair(CHKREF(YastYLglobal_referenceG),Ynil);
      T11 = (P)YPpair(CHKREF(YastYreference_binding),Ynil);
      T10 = (P)YPpair(qbF1619,Ynil);
      T9 = CALL3(CHKREF(YPisa),T12,T11,T10);
      T6 = T9;
      T5 = T6;
    }
    T4 = T5;
    T3 = T4;
    T2 = T3;
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_extractX_119) {
  ARG(result_, 0);
  ARG(form_, 1);
  ARG(o_, 2);
  P a1,a2,a3;
loop:
  QRET(o_);
}

FUNCODEDEF(fun_120) {
  ARG(binding_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL1(CHKREF(YastYbinding_type),binding_);
  T1 = CALL3(CHKREF(Yast_linearizeYextractX),T2,FREEREF(1),FREEREF(0));
  T0 = CALL2(CHKREF(YastYbinding_type_setter),T1,binding_);
  QRET(T0);
}

FUNCODEDEF(fun_extractX_121) {
  ARG(result_, 0);
  ARG(form_, 1);
  ARG(o_, 2);
  P indexF1629;
  P free_bindingsF1628;
  P signatureF1627;
  P bindingF1626;
  P debug_nameF1625;
  P new_bodyF1624;
  P T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T1 = CALL1(CHKREF(YastYfunction_debug_name),o_);
  T0 = CALL3(CHKREF(Yast_linearizeYextractX),T1,form_,result_);
  CALL2(CHKREF(YastYfunction_debug_name_setter),T0,o_);
  T3 = CALL1(CHKREF(YastYfunction_signature),o_);
  T2 = CALL3(CHKREF(Yast_linearizeYextractX),T3,form_,result_);
  CALL2(CHKREF(YastYfunction_signature_setter),T2,o_);
  T29 = CALL1(CHKREF(YastYfunction_body),o_);
  T28 = CALL3(CHKREF(Yast_linearizeYextractX),T29,form_,result_);
  new_bodyF1624 = T28;
  T27 = CALL1(CHKREF(YastYfunction_debug_name),o_);
  debug_nameF1625 = T27;
  T26 = CALL1(CHKREF(YastYfunction_binding),o_);
  bindingF1626 = T26;
  T25 = CALL1(CHKREF(YastYfunction_signature),o_);
  signatureF1627 = T25;
  T9 = FUNFAB(fun_120,2,result_,form_);
  T8 = CALL1(CHKREF(YastYfunction_bindings),o_);
  CALL2(CHKREF(YruntimeYdo),T9,T8);
  T24 = CALL1(CHKREF(Yast_linearizeYfunction_free),o_);
  T23 = CALL2(CHKREF(YmacrosYmap),CHKREF(YastYreference_binding),T24);
  free_bindingsF1628 = T23;
  T22 = CALLN(CHKREF(Yast_linearizeYadjoin_definitionX),7,form_,result_,debug_nameF1625,bindingF1626,signatureF1627,new_bodyF1624,free_bindingsF1628);
  indexF1629 = T22;
  T21 = (P)YPpair(CHKREF(Yast_linearizeYLclosure_creationG),Ynil);
  T20 = (P)YPpair(CHKREF(Yast_linearizeYclosure_creation_free),Ynil);
  T19 = (P)YPpair(CHKREF(Yast_linearizeYclosure_creation_bindings),T20);
  T18 = (P)YPpair(CHKREF(Yast_linearizeYclosure_creation_index),T19);
  T17 = CALL1(CHKREF(YastYfunction_bindings),o_);
  T16 = CALL1(CHKREF(Yast_linearizeYfunction_free),o_);
  T15 = (P)YPpair(T16,Ynil);
  T14 = (P)YPpair(T17,T15);
  T13 = (P)YPpair(indexF1629,T14);
  T12 = CALL3(CHKREF(YPisa),T21,T18,T13);
  T11 = T12;
  T10 = T11;
  T7 = T10;
  T6 = T7;
  T5 = T6;
  T4 = T5;
  QRET(T4);
}

FUNCODEDEF(fun_extractX_122) {
  ARG(result_, 0);
  ARG(form_, 1);
  ARG(o_, 2);
  P definitionF1632;
  P bodyF1631;
  P pF1630;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T25 = CALL1(CHKREF(YastYassignment_form),o_);
  pF1630 = T25;
  T24 = CALL1(CHKREF(YastYfunction_body),pF1630);
  T23 = CALL3(CHKREF(Yast_linearizeYextractX),T24,form_,result_);
  bodyF1631 = T23;
  T22 = (P)YPpair(CHKREF(Yast_linearizeYLprimitive_definitionG),Ynil);
  T21 = (P)YPpair(CHKREF(YastYfunction_body),Ynil);
  T20 = (P)YPpair(CHKREF(YastYfunction_signature),T21);
  T19 = (P)YPpair(CHKREF(YastYfunction_debug_name),T20);
  T18 = (P)YPpair(CHKREF(YastYfunction_binding),T19);
  T17 = CALL1(CHKREF(YastYfunction_binding),pF1630);
  T16 = CALL1(CHKREF(YastYfunction_debug_name),pF1630);
  T15 = CALL1(CHKREF(YastYfunction_signature),pF1630);
  T14 = (P)YPpair(bodyF1631,Ynil);
  T13 = (P)YPpair(T15,T14);
  T12 = (P)YPpair(T16,T13);
  T11 = (P)YPpair(T17,T12);
  T10 = CALL3(CHKREF(YPisa),T22,T18,T11);
  definitionF1632 = T10;
  T4 = CALL1(CHKREF(Yast_linearizeYprogram_definitions),result_);
  T3 = CALL2(CHKREF(YmacrosYpair),definitionF1632,T4);
  CALL2(CHKREF(Yast_linearizeYprogram_definitions_setter),T3,result_);
  T9 = (P)YPpair(CHKREF(YastYLconstantG),Ynil);
  T8 = (P)YPpair(CHKREF(YastYconstant_value),Ynil);
  T7 = (P)YPpair(YPfalse,Ynil);
  T6 = CALL3(CHKREF(YPisa),T9,T8,T7);
  T5 = CALL3(CHKREF(Yast_linearizeYextractX),T6,form_,result_);
  T2 = T5;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_definitionX_123) {
  ARG(free_, 0);
  ARG(body_, 1);
  ARG(signature_, 2);
  ARG(binding_, 3);
  ARG(debug_name_, 4);
  ARG(result_, 5);
  ARG(form_, 6);
  P definitionF1635;
  P new_indexF1634;
  P definitionsF1633;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6,a7;
loop:
  T21 = CALL1(CHKREF(Yast_linearizeYprogram_definitions),result_);
  definitionsF1633 = T21;
  T20 = CALL1(CHKREF(YruntimeYlen),definitionsF1633);
  new_indexF1634 = T20;
  T19 = (P)YPpair(CHKREF(Yast_linearizeYLfunction_definitionG),Ynil);
  T18 = (P)YPpair(CHKREF(Yast_linearizeYfunction_index),Ynil);
  T17 = (P)YPpair(CHKREF(Yast_linearizeYfunction_free),T18);
  T16 = (P)YPpair(CHKREF(YastYfunction_body),T17);
  T15 = (P)YPpair(CHKREF(YastYfunction_signature),T16);
  T14 = (P)YPpair(CHKREF(YastYfunction_debug_name),T15);
  T13 = (P)YPpair(CHKREF(YastYfunction_binding),T14);
  T12 = (P)YPpair(new_indexF1634,Ynil);
  T11 = (P)YPpair(free_,T12);
  T10 = (P)YPpair(body_,T11);
  T9 = (P)YPpair(signature_,T10);
  T8 = (P)YPpair(debug_name_,T9);
  T7 = (P)YPpair(binding_,T8);
  T6 = CALL3(CHKREF(YPisa),T19,T13,T7);
  definitionF1635 = T6;
  T3 = CALL2(CHKREF(YmacrosYpair),definitionF1635,definitionsF1633);
  CALL2(CHKREF(Yast_linearizeYprogram_definitions_setter),T3,result_);
  T5 = CALL1(CHKREF(Yast_linearizeYform_definitions),form_);
  T4 = CALL2(CHKREF(YmacrosYpair),definitionF1635,T5);
  CALL2(CHKREF(Yast_linearizeYform_definitions_setter),T4,form_);
  T2 = new_indexF1634;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_split_program_124) {
  ARG(max_count_, 0);
  ARG(o_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(CHKREF(Ylst),o_);
  QRET(T0);
}

FUNCODEDEF(fun_inner_125) {
  ARG(count_, 0);
  ARG(es_, 1);
  ARG(res_, 2);
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2,a3;
loop:
  T17 = CALL1(CHKREF(YmacrosYemptyQ),es_);
  if (T17 != YPfalse) {
    T16 = CALL1(CHKREF(YruntimeYrevX),res_);
    T15 = CALL1(CHKREF(YastYsequentialize),T16);
    T14 = CALL2(CHKREF(YmacrosYpair),T15,FREEREF(1));
    T13 = CALL1(CHKREF(YruntimeYrevX),T14);
    T0 = T13;
  } else {
    T12 = CALL2(CHKREF(YruntimeYE),count_,FREEREF(3));
    if (T12 != YPfalse) {
      T11 = CALL1(CHKREF(YruntimeYrevX),res_);
      T10 = CALL1(CHKREF(YastYsequentialize),T11);
      T9 = CALL2(CHKREF(YmacrosYpair),T10,FREEREF(1));
      T8 = KCALL2(FREEREF(2),T9,es_);
      T1 = T8;
    } else {
      if (YPtrue != YPfalse) {
        T7 = CALL1(CHKREF(Yhead),es_);
        T6 = CALL2(CHKREF(YmacrosYpair),T7,res_);
        T5 = CALL1(CHKREF(Ytail),es_);
        T4 = CALL2(CHKREF(YruntimeYA),count_,YPint((P)1));
        a1 = T6;
        a2 = T5;
        a3 = T4;
        res_ = a1;
        es_ = a2;
        count_ = a3;
        goto loop;
        T2 = T3;
      } else {
        T2 = YPfalse;
      }
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_loop_126) {
  ARG(s_, 0);
  ARG(forms_, 1);
  P innerF1636;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_inner_125,4);
  innerF1636 = T2;
  FUNINIT(innerF1636, 4,innerF1636,forms_,FREEREF(1),FREEREF(0));
  T1 = KCALL3(innerF1636,Ynil,s_,YPint((P)0));
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_split_program_127) {
  ARG(max_count_, 0);
  ARG(o_, 1);
  P loopF1637;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_loop_126,2);
  loopF1637 = T2;
  FUNINIT(loopF1637, 2,max_count_,loopF1637);
  T1 = KCALL2(loopF1637,Ynil,o_);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_loop_128) {
  ARG(forms_, 0);
  ARG(i_, 1);
  ARG(defns_, 2);
  ARG(calls_, 3);
  P callF1641;
  P defnF1640;
  P bindingF1639;
  P nameF1638;
  P T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30;
  P T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T45 = CALL1(CHKREF(YmacrosYemptyQ),forms_);
  if (T45 != YPfalse) {
    T35 = CALL1(CHKREF(YruntimeYrevX),defns_);
    CALL2(CHKREF(Yast_linearizeYprogram_definitions_setter),T35,FREEREF(2));
    T44 = (P)YPpair(CHKREF(Yast_linearizeYLtop_level_formG),Ynil);
    T43 = (P)YPpair(CHKREF(Yast_linearizeYform_definitions),Ynil);
    T42 = (P)YPpair(CHKREF(Yast_linearizeYform_program),T43);
    T41 = CALL1(CHKREF(YruntimeYrevX),calls_);
    T40 = CALL1(CHKREF(YastYsequentialize),T41);
    T39 = CALL1(CHKREF(YruntimeYrevX),defns_);
    T38 = (P)YPpair(T39,Ynil);
    T37 = (P)YPpair(T40,T38);
    T36 = CALL3(CHKREF(YPisa),T44,T42,T37);
    CALL2(CHKREF(Yast_linearizeYprogram_form_setter),T36,FREEREF(2));
    T0 = FREEREF(2);
  } else {
    T34 = CALL3(CHKREF(YmacrosYmake_sym),CHKREF(lit_118),i_,CHKREF(lit_117));
    nameF1638 = T34;
    T33 = CALLN(CHKREF(YastYast_define_binding),4,FREEREF(0),nameF1638,YPfalse,CHKREF(lit_116));
    bindingF1639 = T33;
    T32 = (P)YPpair(CHKREF(Yast_linearizeYLprimitive_definitionG),Ynil);
    T31 = (P)YPpair(CHKREF(YastYfunction_body),Ynil);
    T30 = (P)YPpair(CHKREF(YastYfunction_signature),T31);
    T29 = (P)YPpair(CHKREF(YastYfunction_debug_name),T30);
    T28 = (P)YPpair(CHKREF(YastYfunction_binding),T29);
    T27 = CALL2(CHKREF(YastYobjectify_quotation),nameF1638,YPint((P)4));
    T26 = (P)YPpair(CHKREF(YastYLast_signatureG),Ynil);
    T25 = CALL3(CHKREF(YPisa),T26,Ynil,Ynil);
    T24 = CALL1(CHKREF(Yhead),forms_);
    T23 = (P)YPpair(T24,Ynil);
    T22 = (P)YPpair(T25,T23);
    T21 = (P)YPpair(T27,T22);
    T20 = (P)YPpair(bindingF1639,T21);
    T19 = CALL3(CHKREF(YPisa),T32,T28,T20);
    defnF1640 = T19;
    T18 = (P)YPpair(CHKREF(YastYLpredefined_applicationG),Ynil);
    T17 = (P)YPpair(CHKREF(YastYapplication_tailQ),Ynil);
    T16 = (P)YPpair(CHKREF(YastYapplication_arguments),T17);
    T15 = (P)YPpair(CHKREF(YastYapplication_binding),T16);
    T14 = CALL1(CHKREF(YruntimeYempty),CHKREF(YastYLargumentsG));
    T13 = (P)YPpair(YPfalse,Ynil);
    T12 = (P)YPpair(T14,T13);
    T11 = (P)YPpair(bindingF1639,T12);
    T10 = CALL3(CHKREF(YPisa),T18,T15,T11);
    callF1641 = T10;
    T9 = CALL2(CHKREF(YmacrosYpair),callF1641,calls_);
    T8 = CALL2(CHKREF(YmacrosYpair),defnF1640,defns_);
    T7 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
    T6 = CALL1(CHKREF(Ytail),forms_);
    a1 = T9;
    a2 = T8;
    a3 = T7;
    a4 = T6;
    calls_ = a1;
    defns_ = a2;
    i_ = a3;
    forms_ = a4;
    goto loop;
    T4 = T5;
    T3 = T4;
    T2 = T3;
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_closurize_mainX_129) {
  ARG(max_count_, 0);
  ARG(r_, 1);
  ARG(o_, 2);
  P loopF1644;
  P base_indexF1643;
  P formsF1642;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T9 = CALL1(CHKREF(Yast_linearizeYprogram_form),o_);
  T8 = CALL2(CHKREF(Yast_linearizeYsplit_program),T9,max_count_);
  formsF1642 = T8;
  T7 = CALL1(CHKREF(Yast_linearizeYprogram_definitions),o_);
  T6 = CALL1(CHKREF(YruntimeYlen),T7);
  base_indexF1643 = T6;
  T5 = FUNSHELL(1,fun_loop_128,3);
  loopF1644 = T5;
  FUNINIT(loopF1644, 3,r_,loopF1644,o_);
  T4 = CALL1(CHKREF(Yast_linearizeYprogram_definitions),o_);
  T3 = KCALLN(loopF1644,4,Ynil,T4,YPint((P)0),formsF1642);
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_130) {
  ARG(def_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL3(CHKREF(Yast_linearizeYcollect_temporariesX),def_,def_,Ynil);
  QRET(T0);
}

FUNCODEDEF(fun_gather_temporariesX_131) {
  ARG(o_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = fun_130;
  T1 = CALL1(CHKREF(Yast_linearizeYprogram_definitions),o_);
  T0 = CALL2(CHKREF(YmacrosYmap),T2,T1);
  CALL2(CHKREF(Yast_linearizeYprogram_definitions_setter),T0,o_);
  QRET(o_);
}

FUNCODEDEF(fun_collect_temporariesX_132) {
  ARG(r_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P T0;
  P a1,a2,a3;
loop:
  T0 = CALLN(CHKREF(Yast_linearizeYupdate_walkX),4,CHKREF(Yast_linearizeYcollect_temporariesX),o_,flat_fun_,r_);
  QRET(T0);
}

FUNCODEDEF(fun_collect_temporariesX_133) {
  ARG(r_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P bF1646;
  P bindingF1645;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T9 = CALL1(CHKREF(YastYreference_binding),o_);
  bindingF1645 = T9;
  T8 = CALL2(CHKREF(YruntimeYassocq),bindingF1645,r_);
  bF1646 = T8;
  if (bF1646 != YPfalse) {
    T7 = (P)YPpair(CHKREF(YastYLlocal_referenceG),Ynil);
    T6 = (P)YPpair(CHKREF(YastYreference_binding),Ynil);
    T5 = CALL1(CHKREF(YruntimeYassoc_value),bF1646);
    T4 = (P)YPpair(T5,Ynil);
    T3 = CALL3(CHKREF(YPisa),T7,T6,T4);
    T2 = T3;
  } else {
    T2 = o_;
  }
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_collect_temporariesX_134) {
  ARG(r_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P new_rF1648;
  P new_bindingsF1647;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T1 = CALL1(CHKREF(YastYfix_let_arguments),o_);
  T0 = CALL3(CHKREF(Yast_linearizeYcollect_temporariesX),T1,flat_fun_,r_);
  CALL2(CHKREF(YastYfix_let_arguments_setter),T0,o_);
  T10 = CALL1(CHKREF(YastYfix_let_bindings),o_);
  T9 = CALL2(CHKREF(YmacrosYmap),CHKREF(Yast_linearizeYnew_renamed_binding),T10);
  new_bindingsF1647 = T9;
  T8 = CALL1(CHKREF(YastYfix_let_bindings),o_);
  T7 = CALL3(CHKREF(YruntimeYmap2),CHKREF(YruntimeYassoc),T8,new_bindingsF1647);
  T6 = CALL2(CHKREF(YmacrosYcat),T7,r_);
  new_rF1648 = T6;
  CALL2(CHKREF(Yast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF1647);
  CALL2(CHKREF(YastYfix_let_bindings_setter),new_bindingsF1647,o_);
  T5 = CALL1(CHKREF(YastYfix_let_body),o_);
  T4 = CALL3(CHKREF(Yast_linearizeYcollect_temporariesX),T5,flat_fun_,new_rF1648);
  CALL2(CHKREF(YastYfix_let_body_setter),T4,o_);
  T3 = o_;
  T2 = T3;
  QRET(T2);
}

FUNCODEDEF(fun_collect_temporariesX_135) {
  ARG(r_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P new_rF1650;
  P new_bindingsF1649;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T11 = CALL1(CHKREF(YastYlocals_bindings),o_);
  T10 = CALL2(CHKREF(YmacrosYmap),CHKREF(Yast_linearizeYnew_renamed_binding),T11);
  new_bindingsF1649 = T10;
  T9 = CALL1(CHKREF(YastYlocals_bindings),o_);
  T8 = CALL3(CHKREF(YruntimeYmap2),CHKREF(YruntimeYassoc),T9,new_bindingsF1649);
  T7 = CALL2(CHKREF(YmacrosYcat),T8,r_);
  new_rF1650 = T7;
  T4 = CALL3(CHKREF(YruntimeYrcurry),CHKREF(Yast_linearizeYcollect_temporariesX),flat_fun_,new_rF1650);
  T3 = CALL1(CHKREF(YastYlocals_functions),o_);
  T2 = CALL2(CHKREF(YmacrosYmap),T4,T3);
  CALL2(CHKREF(YastYlocals_functions_setter),T2,o_);
  CALL2(CHKREF(Yast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF1649);
  CALL2(CHKREF(YastYlocals_bindings_setter),new_bindingsF1649,o_);
  T6 = CALL1(CHKREF(YastYlocals_body),o_);
  T5 = CALL3(CHKREF(Yast_linearizeYcollect_temporariesX),T6,flat_fun_,new_rF1650);
  CALL2(CHKREF(YastYlocals_body_setter),T5,o_);
  T1 = o_;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_136) {
  ARG(bindings_, 0);
  ARG(temps_, 1);
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T11 = CALL1(CHKREF(YmacrosYemptyQ),bindings_);
  if (T11 != YPfalse) {
    T10 = CALL2(CHKREF(Yast_linearizeYfunction_temporaries_setter),temps_,FREEREF(1));
    T0 = T10;
  } else {
    T9 = CALL1(CHKREF(Yhead),bindings_);
    T8 = CALL2(CHKREF(YruntimeYmemQ),temps_,T9);
    if (T8 != YPfalse) {
      T7 = CALL1(CHKREF(Ytail),bindings_);
      a1 = temps_;
      a2 = T7;
      temps_ = a1;
      bindings_ = a2;
      goto loop;
      T1 = T6;
    } else {
      T5 = CALL1(CHKREF(Yhead),bindings_);
      T4 = CALL2(CHKREF(YmacrosYpair),T5,temps_);
      T3 = CALL1(CHKREF(Ytail),bindings_);
      a1 = T4;
      a2 = T3;
      temps_ = a1;
      bindings_ = a2;
      goto loop;
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_temporary_variablesX_137) {
  ARG(new_bindings_, 0);
  ARG(flat_fun_, 1);
  P adjoinF1651;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = FUNSHELL(1,fun_adjoin_136,2);
  adjoinF1651 = T3;
  FUNINIT(adjoinF1651, 2,adjoinF1651,flat_fun_);
  T2 = CALL1(CHKREF(Yast_linearizeYfunction_temporaries),flat_fun_);
  T1 = KCALL2(adjoinF1651,T2,new_bindings_);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_binding_index_138) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yast_linearizeYbinding_index));
  QRET(T0);
}

FUNCODEDEF(fun_binding_index_setter_139) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yast_linearizeYbinding_index));
  QRET(T0);
}

FUNCODEDEF(fun_140) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_new_renamed_binding_141) {
  ARG(binding_, 0);
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYA),CHKREF(Yast_linearizeYTrenaming_bindings_counterT),YPint((P)1));
  Yast_linearizeYTrenaming_bindings_counterT = T0;
  T13 = (P)YPpair(CHKREF(Yast_linearizeYLrenamed_local_bindingG),Ynil);
  T12 = (P)YPpair(CHKREF(Yast_linearizeYbinding_index),Ynil);
  T11 = (P)YPpair(CHKREF(YastYbinding_dynamic_extentQ),T12);
  T10 = (P)YPpair(CHKREF(YastYbinding_type),T11);
  T9 = (P)YPpair(CHKREF(YastYbinding_name),T10);
  T8 = CALL1(CHKREF(YastYbinding_name),binding_);
  T7 = CALL1(CHKREF(YastYbinding_type),binding_);
  T6 = CALL1(CHKREF(YastYbinding_dynamic_extentQ),binding_);
  T5 = (P)YPpair(CHKREF(Yast_linearizeYTrenaming_bindings_counterT),Ynil);
  T4 = (P)YPpair(T6,T5);
  T3 = (P)YPpair(T7,T4);
  T2 = (P)YPpair(T8,T3);
  T1 = CALL3(CHKREF(YPisa),T13,T9,T2);
  QRET(T1);
}

FUNCODEDEF(fun_142) {
  ARG(def_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL3(CHKREF(Yast_linearizeYcollect_registersX),def_,YPfalse,YPtrue);
  QRET(T0);
}

FUNCODEDEF(fun_register_allocateX_143) {
  ARG(o_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = fun_142;
  T0 = CALL1(CHKREF(Yast_linearizeYprogram_definitions),o_);
  CALL2(CHKREF(YruntimeYdo),T1,T0);
  QRET(o_);
}

FUNCODEDEF(fun_allocate_register_144) {
  ARG(valQ_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P tmpF1653;
  P tmpF1652;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  tmpF1652 = valQ_;
  if (tmpF1652 != YPfalse) {
    tmpF1653 = flat_fun_;
    if (tmpF1653 != YPfalse) {
      T11 = CALL1(CHKREF(YastYprogram_register),o_);
      T10 = CALL1(CHKREF(Ynot),T11);
      T9 = T10;
    } else {
      T9 = YPfalse;
    }
    T8 = T9;
    T7 = T8;
  } else {
    T7 = YPfalse;
  }
  T6 = T7;
  if (T6 != YPfalse) {
    T2 = CALL1(CHKREF(Yast_linearizeYfunction_registers),flat_fun_);
    T1 = CALL1(CHKREF(YruntimeYlen),T2);
    CALL2(CHKREF(YastYprogram_register_setter),T1,o_);
    T5 = CALL1(CHKREF(Yast_linearizeYfunction_registers),flat_fun_);
    T4 = CALL2(CHKREF(YmacrosYpair),o_,T5);
    T3 = CALL2(CHKREF(Yast_linearizeYfunction_registers_setter),T4,flat_fun_);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_145) {
  ARG(valQ_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P T0;
  P a1,a2,a3;
loop:
  CALL3(CHKREF(Yast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T0 = CALLN(CHKREF(Yast_linearizeYupdate_walkX),4,CHKREF(Yast_linearizeYcollect_registersX),o_,flat_fun_,YPtrue);
  QRET(T0);
}

FUNCODEDEF(fun_loop_146) {
  ARG(x_, 0);
  P tmpF1655;
  P next_xF1654;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = CALL1(CHKREF(YmacrosYemptyQ),x_);
  if (T8 != YPfalse) {
    T0 = FREEREF(3);
  } else {
    T7 = CALL1(CHKREF(Ytail),x_);
    next_xF1654 = T7;
    T5 = CALL1(CHKREF(Yhead),x_);
    tmpF1655 = FREEREF(1);
    if (tmpF1655 != YPfalse) {
      T4 = CALL1(CHKREF(YmacrosYemptyQ),next_xF1654);
      T3 = T4;
    } else {
      T3 = YPfalse;
    }
    T2 = T3;
    CALL3(CHKREF(Yast_linearizeYcollect_registersX),T5,FREEREF(2),T2);
    a1 = next_xF1654;
    x_ = a1;
    goto loop;
    T1 = T6;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_147) {
  ARG(valQ_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P loopF1656;
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T2 = FUNSHELL(1,fun_loop_146,4);
  loopF1656 = T2;
  FUNINIT(loopF1656, 4,loopF1656,valQ_,flat_fun_,o_);
  T1 = KCALL1(loopF1656,o_);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_148) {
  ARG(valQ_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P T0;
  P a1,a2,a3;
loop:
  T0 = CALLN(CHKREF(Yast_linearizeYupdate_walkX),4,CHKREF(Yast_linearizeYcollect_registersX),o_,flat_fun_,YPtrue);
  QRET(T0);
}

FUNCODEDEF(fun_149) {
  ARG(def_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL3(CHKREF(Yast_linearizeYcollect_registersX),def_,FREEREF(1),FREEREF(0));
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_150) {
  ARG(valQ_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  CALL3(CHKREF(Yast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T1 = FUNFAB(fun_149,2,valQ_,flat_fun_);
  T0 = CALL1(CHKREF(Yast_linearizeYform_definitions),o_);
  CALL2(CHKREF(YruntimeYdo),T1,T0);
  T2 = CALL1(CHKREF(Yast_linearizeYform_program),o_);
  CALL3(CHKREF(Yast_linearizeYcollect_registersX),T2,flat_fun_,valQ_);
  QRET(o_);
}

FUNCODEDEF(fun_collect_registersX_151) {
  ARG(valQ_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P T1,T0;
  P a1,a2,a3;
loop:
  CALL3(CHKREF(Yast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T0 = CALL1(CHKREF(YastYfunction_signature),o_);
  CALL3(CHKREF(Yast_linearizeYcollect_registersX),T0,flat_fun_,YPtrue);
  T1 = CALL1(CHKREF(YastYfunction_body),o_);
  CALL3(CHKREF(Yast_linearizeYcollect_registersX),T1,o_,YPtrue);
  QRET(o_);
}

FUNCODEDEF(fun_collect_registersX_152) {
  ARG(valQ_, 0);
  ARG(flat_fun_, 1);
  ARG(o_, 2);
  P T0;
  P a1,a2,a3;
loop:
  T0 = CALL1(CHKREF(YastYfunction_body),o_);
  CALL3(CHKREF(Yast_linearizeYcollect_registersX),T0,o_,YPtrue);
  QRET(o_);
}

P Yast_linearizeY___main_0___() {
  P T272,T271,T270,T269,T268,T267,T266,T265,T264,T263,T262,T261,T260,T259,T258,T257;
  P T256,T255,T254,T253,T252,T251,T250,T249,T248,T247,T246,T245,T244,T243,T242,T241;
  P T240,T239,T238,T237,T236,T235,T234,T233,T232,T231,T230,T229,T228,T227,T226,T225;
  P T224,T223,T222,T221,T220,T219,T218,T217,T216,T215,T214,T213,T212,T211,T210,T209;
  P T208,T207,T206,T205,T204,T203,T202,T201,T200,T199,T198,T197,T196,T195,T194,T193;
  P T192,T191,T190,T189,T188,T187,T186,T185,T184,T183,T182,T181,T180,T179,T178,T177;
  P T176,T175,T174,T173,T172,T171,T170,T169,T168,T167,T166,T165,T164,T163,T162,T161;
  P T160,T159,T158,T157,T156,T155,T154,T153,T152,T151,T150,T149,T148,T147,T146,T145;
  P T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134,T133,T132,T131,T130,T129;
  P T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113;
  P T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97;
  P T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81;
  P T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65;
  P T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49;
  P T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33;
  P T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
loop:
  lit_0 = YPPsym((P)"update-walk!");
  lit_1 = YPPsym((P)"args");
  lit_2 = YPPsym((P)"o");
  lit_3 = YPPsym((P)"g");
  lit_4 = YPPsym((P)"x-1287");
  lit_5 = YPPsym((P)"x-1285");
  T1 = YPsig(YPPlist(1,CHKREF(lit_5)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_x_1287_0 = YPmet(FUNCODEREF(fun_x_1287_0),CHKREF(lit_4),T1,ENVNUL);
  T0 = YPsig(YPPlist(3,CHKREF(lit_3),CHKREF(lit_2),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPtrue,YPint((P)2),CHKREF(YLanyG));
  fun_update_walkX_1 = YPmet(FUNCODEREF(fun_update_walkX_1),CHKREF(lit_0),T0,ENVNUL);
  T5 = BOUNDP(Yast_linearizeYupdate_walkX);
  if (T5 != YPfalse) {
    T4 = CHKREF(Yast_linearizeYupdate_walkX);
  } else {
    T4 = YPfalse;
  }
  T3 = fun_update_walkX_1;
  T2 = CALL2(CHKREF(YPdefine_method),T4,T3);
  Yast_linearizeYupdate_walkX = T2;
  lit_6 = YPPsym((P)"<box-read>");
  T7 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T6 = CALL2(CHKREF(Yfab_class),CHKREF(lit_6),T7);
  Yast_linearizeYLbox_readG = T6;
  lit_7 = YPPsym((P)"box-reference");
  lit_8 = YPPsym((P)"_x");
  T8 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLbox_readG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_box_reference_2 = YPmet(FUNCODEREF(fun_box_reference_2),CHKREF(lit_7),T8,ENVNUL);
  T12 = BOUNDP(Yast_linearizeYbox_reference);
  if (T12 != YPfalse) {
    T11 = CHKREF(Yast_linearizeYbox_reference);
  } else {
    T11 = YPfalse;
  }
  T10 = fun_box_reference_2;
  T9 = CALL2(CHKREF(YPdefine_method),T11,T10);
  Yast_linearizeYbox_reference = T9;
  lit_9 = YPPsym((P)"box-reference-setter");
  lit_10 = YPPsym((P)"_z");
  T13 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLbox_readG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_box_reference_setter_3 = YPmet(FUNCODEREF(fun_box_reference_setter_3),CHKREF(lit_9),T13,ENVNUL);
  T17 = BOUNDP(Yast_linearizeYbox_reference_setter);
  if (T17 != YPfalse) {
    T16 = CHKREF(Yast_linearizeYbox_reference_setter);
  } else {
    T16 = YPfalse;
  }
  T15 = fun_box_reference_setter_3;
  T14 = CALL2(CHKREF(YPdefine_method),T16,T15);
  Yast_linearizeYbox_reference_setter = T14;
  lit_11 = YPPsym((P)"x");
  T18 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_4 = YPmet(FUNCODEREF(fun_4),YPfalse,T18,ENVNUL);
  T19 = fun_4;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLbox_readG),CHKREF(Yast_linearizeYbox_reference),CHKREF(Yast_linearizeYbox_reference_setter),CHKREF(YLanyG),T19);
  lit_12 = YPPsym((P)"<box-write>");
  T21 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T20 = CALL2(CHKREF(Yfab_class),CHKREF(lit_12),T21);
  Yast_linearizeYLbox_writeG = T20;
  T22 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLbox_writeG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_box_reference_5 = YPmet(FUNCODEREF(fun_box_reference_5),CHKREF(lit_7),T22,ENVNUL);
  T26 = BOUNDP(Yast_linearizeYbox_reference);
  if (T26 != YPfalse) {
    T25 = CHKREF(Yast_linearizeYbox_reference);
  } else {
    T25 = YPfalse;
  }
  T24 = fun_box_reference_5;
  T23 = CALL2(CHKREF(YPdefine_method),T25,T24);
  Yast_linearizeYbox_reference = T23;
  T27 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLbox_writeG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_box_reference_setter_6 = YPmet(FUNCODEREF(fun_box_reference_setter_6),CHKREF(lit_9),T27,ENVNUL);
  T31 = BOUNDP(Yast_linearizeYbox_reference_setter);
  if (T31 != YPfalse) {
    T30 = CHKREF(Yast_linearizeYbox_reference_setter);
  } else {
    T30 = YPfalse;
  }
  T29 = fun_box_reference_setter_6;
  T28 = CALL2(CHKREF(YPdefine_method),T30,T29);
  Yast_linearizeYbox_reference_setter = T28;
  T32 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T32,ENVNUL);
  T33 = fun_7;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLbox_writeG),CHKREF(Yast_linearizeYbox_reference),CHKREF(Yast_linearizeYbox_reference_setter),CHKREF(YLanyG),T33);
  lit_13 = YPPsym((P)"box-form");
  T34 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLbox_writeG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_box_form_8 = YPmet(FUNCODEREF(fun_box_form_8),CHKREF(lit_13),T34,ENVNUL);
  T38 = BOUNDP(Yast_linearizeYbox_form);
  if (T38 != YPfalse) {
    T37 = CHKREF(Yast_linearizeYbox_form);
  } else {
    T37 = YPfalse;
  }
  T36 = fun_box_form_8;
  T35 = CALL2(CHKREF(YPdefine_method),T37,T36);
  Yast_linearizeYbox_form = T35;
  lit_14 = YPPsym((P)"box-form-setter");
  T39 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLbox_writeG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_box_form_setter_9 = YPmet(FUNCODEREF(fun_box_form_setter_9),CHKREF(lit_14),T39,ENVNUL);
  T43 = BOUNDP(Yast_linearizeYbox_form_setter);
  if (T43 != YPfalse) {
    T42 = CHKREF(Yast_linearizeYbox_form_setter);
  } else {
    T42 = YPfalse;
  }
  T41 = fun_box_form_setter_9;
  T40 = CALL2(CHKREF(YPdefine_method),T42,T41);
  Yast_linearizeYbox_form_setter = T40;
  T44 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T44,ENVNUL);
  T45 = fun_10;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLbox_writeG),CHKREF(Yast_linearizeYbox_form),CHKREF(Yast_linearizeYbox_form_setter),CHKREF(YLanyG),T45);
  lit_15 = YPPsym((P)"<box-creation>");
  T47 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T46 = CALL2(CHKREF(Yfab_class),CHKREF(lit_15),T47);
  Yast_linearizeYLbox_creationG = T46;
  T48 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLbox_creationG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_box_reference_11 = YPmet(FUNCODEREF(fun_box_reference_11),CHKREF(lit_7),T48,ENVNUL);
  T52 = BOUNDP(Yast_linearizeYbox_reference);
  if (T52 != YPfalse) {
    T51 = CHKREF(Yast_linearizeYbox_reference);
  } else {
    T51 = YPfalse;
  }
  T50 = fun_box_reference_11;
  T49 = CALL2(CHKREF(YPdefine_method),T51,T50);
  Yast_linearizeYbox_reference = T49;
  T53 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLbox_creationG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_box_reference_setter_12 = YPmet(FUNCODEREF(fun_box_reference_setter_12),CHKREF(lit_9),T53,ENVNUL);
  T57 = BOUNDP(Yast_linearizeYbox_reference_setter);
  if (T57 != YPfalse) {
    T56 = CHKREF(Yast_linearizeYbox_reference_setter);
  } else {
    T56 = YPfalse;
  }
  T55 = fun_box_reference_setter_12;
  T54 = CALL2(CHKREF(YPdefine_method),T56,T55);
  Yast_linearizeYbox_reference_setter = T54;
  T58 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T58,ENVNUL);
  T59 = fun_13;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLbox_creationG),CHKREF(Yast_linearizeYbox_reference),CHKREF(Yast_linearizeYbox_reference_setter),CHKREF(YLanyG),T59);
  lit_16 = YPPsym((P)"insert-box!");
  T60 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_insert_boxX_14 = YPmet(FUNCODEREF(fun_insert_boxX_14),CHKREF(lit_16),T60,ENVNUL);
  T64 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T64 != YPfalse) {
    T63 = CHKREF(Yast_linearizeYinsert_boxX);
  } else {
    T63 = YPfalse;
  }
  T62 = fun_insert_boxX_14;
  T61 = CALL2(CHKREF(YPdefine_method),T63,T62);
  Yast_linearizeYinsert_boxX = T61;
  T65 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLlocal_referenceG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_insert_boxX_15 = YPmet(FUNCODEREF(fun_insert_boxX_15),CHKREF(lit_16),T65,ENVNUL);
  T69 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T69 != YPfalse) {
    T68 = CHKREF(Yast_linearizeYinsert_boxX);
  } else {
    T68 = YPfalse;
  }
  T67 = fun_insert_boxX_15;
  T66 = CALL2(CHKREF(YPdefine_method),T68,T67);
  Yast_linearizeYinsert_boxX = T66;
  T70 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLlocal_assignmentG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_insert_boxX_16 = YPmet(FUNCODEREF(fun_insert_boxX_16),CHKREF(lit_16),T70,ENVNUL);
  T74 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T74 != YPfalse) {
    T73 = CHKREF(Yast_linearizeYinsert_boxX);
  } else {
    T73 = YPfalse;
  }
  T72 = fun_insert_boxX_16;
  T71 = CALL2(CHKREF(YPdefine_method),T73,T72);
  Yast_linearizeYinsert_boxX = T71;
  T75 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLast_methodG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_insert_boxX_17 = YPmet(FUNCODEREF(fun_insert_boxX_17),CHKREF(lit_16),T75,ENVNUL);
  T79 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T79 != YPfalse) {
    T78 = CHKREF(Yast_linearizeYinsert_boxX);
  } else {
    T78 = YPfalse;
  }
  T77 = fun_insert_boxX_17;
  T76 = CALL2(CHKREF(YPdefine_method),T78,T77);
  Yast_linearizeYinsert_boxX = T76;
  T80 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLfix_letG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_insert_boxX_18 = YPmet(FUNCODEREF(fun_insert_boxX_18),CHKREF(lit_16),T80,ENVNUL);
  T84 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T84 != YPfalse) {
    T83 = CHKREF(Yast_linearizeYinsert_boxX);
  } else {
    T83 = YPfalse;
  }
  T82 = fun_insert_boxX_18;
  T81 = CALL2(CHKREF(YPdefine_method),T83,T82);
  Yast_linearizeYinsert_boxX = T81;
  T85 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLlocalsG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_insert_boxX_19 = YPmet(FUNCODEREF(fun_insert_boxX_19),CHKREF(lit_16),T85,ENVNUL);
  T89 = BOUNDP(Yast_linearizeYinsert_boxX);
  if (T89 != YPfalse) {
    T88 = CHKREF(Yast_linearizeYinsert_boxX);
  } else {
    T88 = YPfalse;
  }
  T87 = fun_insert_boxX_19;
  T86 = CALL2(CHKREF(YPdefine_method),T88,T87);
  Yast_linearizeYinsert_boxX = T86;
  lit_17 = YPPsym((P)"boxify-mutable-bindings");
  lit_18 = YPPsym((P)"bindings");
  lit_19 = YPPsym((P)"form");
  lit_20 = YPPsym((P)"loop");
  lit_21 = YPPsym((P)"res");
  T91 = YPsig(YPPlist(2,CHKREF(lit_21),CHKREF(lit_18)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_20 = YPmet(FUNCODEREF(fun_loop_20),CHKREF(lit_20),T91,ENVNUL);
  T90 = YPsig(YPPlist(2,CHKREF(lit_19),CHKREF(lit_18)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_boxify_mutable_bindings_21 = YPmet(FUNCODEREF(fun_boxify_mutable_bindings_21),CHKREF(lit_17),T90,ENVNUL);
  T95 = BOUNDP(Yast_linearizeYboxify_mutable_bindings);
  if (T95 != YPfalse) {
    T94 = CHKREF(Yast_linearizeYboxify_mutable_bindings);
  } else {
    T94 = YPfalse;
  }
  T93 = fun_boxify_mutable_bindings_21;
  T92 = CALL2(CHKREF(YPdefine_method),T94,T93);
  Yast_linearizeYboxify_mutable_bindings = T92;
  lit_22 = YPPsym((P)"sexp->object");
  lit_23 = YPPsym((P)"r");
  lit_24 = YPPsym((P)"exp");
  T96 = YPsig(YPPlist(2,CHKREF(lit_24),CHKREF(lit_23)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_sexp_Gobject_22 = YPmet(FUNCODEREF(fun_sexp_Gobject_22),CHKREF(lit_22),T96,ENVNUL);
  T100 = BOUNDP(Yast_linearizeYsexp_Gobject);
  if (T100 != YPfalse) {
    T99 = CHKREF(Yast_linearizeYsexp_Gobject);
  } else {
    T99 = YPfalse;
  }
  T98 = fun_sexp_Gobject_22;
  T97 = CALL2(CHKREF(YPdefine_method),T99,T98);
  Yast_linearizeYsexp_Gobject = T97;
  lit_25 = YPPsym((P)"do-do-call-references!");
  T101 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_do_do_call_referencesX_23 = YPmet(FUNCODEREF(fun_do_do_call_referencesX_23),CHKREF(lit_25),T101,ENVNUL);
  T105 = BOUNDP(Yast_linearizeYdo_do_call_referencesX);
  if (T105 != YPfalse) {
    T104 = CHKREF(Yast_linearizeYdo_do_call_referencesX);
  } else {
    T104 = YPfalse;
  }
  T103 = fun_do_do_call_referencesX_23;
  T102 = CALL2(CHKREF(YPdefine_method),T104,T103);
  Yast_linearizeYdo_do_call_referencesX = T102;
  lit_26 = YPPsym((P)"do-call-references!");
  T106 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_do_call_referencesX_24 = YPmet(FUNCODEREF(fun_do_call_referencesX_24),CHKREF(lit_26),T106,ENVNUL);
  T110 = BOUNDP(Yast_linearizeYdo_call_referencesX);
  if (T110 != YPfalse) {
    T109 = CHKREF(Yast_linearizeYdo_call_referencesX);
  } else {
    T109 = YPfalse;
  }
  T108 = fun_do_call_referencesX_24;
  T107 = CALL2(CHKREF(YPdefine_method),T109,T108);
  Yast_linearizeYdo_call_referencesX = T107;
  T111 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLregular_applicationG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_do_call_referencesX_25 = YPmet(FUNCODEREF(fun_do_call_referencesX_25),CHKREF(lit_26),T111,ENVNUL);
  T115 = BOUNDP(Yast_linearizeYdo_call_referencesX);
  if (T115 != YPfalse) {
    T114 = CHKREF(Yast_linearizeYdo_call_referencesX);
  } else {
    T114 = YPfalse;
  }
  T113 = fun_do_call_referencesX_25;
  T112 = CALL2(CHKREF(YPdefine_method),T114,T113);
  Yast_linearizeYdo_call_referencesX = T112;
  lit_27 = YPPsym((P)"analyze-call-references");
  T116 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_analyze_call_references_26 = YPmet(FUNCODEREF(fun_analyze_call_references_26),CHKREF(lit_27),T116,ENVNUL);
  T120 = BOUNDP(Yast_linearizeYanalyze_call_references);
  if (T120 != YPfalse) {
    T119 = CHKREF(Yast_linearizeYanalyze_call_references);
  } else {
    T119 = YPfalse;
  }
  T118 = fun_analyze_call_references_26;
  T117 = CALL2(CHKREF(YPdefine_method),T119,T118);
  Yast_linearizeYanalyze_call_references = T117;
  lit_28 = YPPsym((P)"do-do-dynamic-extent!");
  T121 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_do_do_dynamic_extentX_27 = YPmet(FUNCODEREF(fun_do_do_dynamic_extentX_27),CHKREF(lit_28),T121,ENVNUL);
  T125 = BOUNDP(Yast_linearizeYdo_do_dynamic_extentX);
  if (T125 != YPfalse) {
    T124 = CHKREF(Yast_linearizeYdo_do_dynamic_extentX);
  } else {
    T124 = YPfalse;
  }
  T123 = fun_do_do_dynamic_extentX_27;
  T122 = CALL2(CHKREF(YPdefine_method),T124,T123);
  Yast_linearizeYdo_do_dynamic_extentX = T122;
  lit_29 = YPPsym((P)"do-dynamic-extent!");
  T126 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_do_dynamic_extentX_28 = YPmet(FUNCODEREF(fun_do_dynamic_extentX_28),CHKREF(lit_29),T126,ENVNUL);
  T130 = BOUNDP(Yast_linearizeYdo_dynamic_extentX);
  if (T130 != YPfalse) {
    T129 = CHKREF(Yast_linearizeYdo_dynamic_extentX);
  } else {
    T129 = YPfalse;
  }
  T128 = fun_do_dynamic_extentX_28;
  T127 = CALL2(CHKREF(YPdefine_method),T129,T128);
  Yast_linearizeYdo_dynamic_extentX = T127;
  T131 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLlocal_referenceG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_do_dynamic_extentX_29 = YPmet(FUNCODEREF(fun_do_dynamic_extentX_29),CHKREF(lit_29),T131,ENVNUL);
  T135 = BOUNDP(Yast_linearizeYdo_dynamic_extentX);
  if (T135 != YPfalse) {
    T134 = CHKREF(Yast_linearizeYdo_dynamic_extentX);
  } else {
    T134 = YPfalse;
  }
  T133 = fun_do_dynamic_extentX_29;
  T132 = CALL2(CHKREF(YPdefine_method),T134,T133);
  Yast_linearizeYdo_dynamic_extentX = T132;
  lit_30 = YPPsym((P)"analyze-dynamic-extent");
  T136 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_analyze_dynamic_extent_30 = YPmet(FUNCODEREF(fun_analyze_dynamic_extent_30),CHKREF(lit_30),T136,ENVNUL);
  T140 = BOUNDP(Yast_linearizeYanalyze_dynamic_extent);
  if (T140 != YPfalse) {
    T139 = CHKREF(Yast_linearizeYanalyze_dynamic_extent);
  } else {
    T139 = YPfalse;
  }
  T138 = fun_analyze_dynamic_extent_30;
  T137 = CALL2(CHKREF(YPdefine_method),T139,T138);
  Yast_linearizeYanalyze_dynamic_extent = T137;
  lit_31 = YPPsym((P)"do-do-call-upgrades!");
  T141 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_do_do_call_upgradesX_31 = YPmet(FUNCODEREF(fun_do_do_call_upgradesX_31),CHKREF(lit_31),T141,ENVNUL);
  T145 = BOUNDP(Yast_linearizeYdo_do_call_upgradesX);
  if (T145 != YPfalse) {
    T144 = CHKREF(Yast_linearizeYdo_do_call_upgradesX);
  } else {
    T144 = YPfalse;
  }
  T143 = fun_do_do_call_upgradesX_31;
  T142 = CALL2(CHKREF(YPdefine_method),T144,T143);
  Yast_linearizeYdo_do_call_upgradesX = T142;
  lit_32 = YPPsym((P)"do-call-upgrades!");
  T146 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_do_call_upgradesX_32 = YPmet(FUNCODEREF(fun_do_call_upgradesX_32),CHKREF(lit_32),T146,ENVNUL);
  T150 = BOUNDP(Yast_linearizeYdo_call_upgradesX);
  if (T150 != YPfalse) {
    T149 = CHKREF(Yast_linearizeYdo_call_upgradesX);
  } else {
    T149 = YPfalse;
  }
  T148 = fun_do_call_upgradesX_32;
  T147 = CALL2(CHKREF(YPdefine_method),T149,T148);
  Yast_linearizeYdo_call_upgradesX = T147;
  lit_33 = YPPsym((P)"unconstrained-type?");
  lit_34 = YPPsym((P)"<any>");
  T151 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_unconstrained_typeQ_33 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_33),CHKREF(lit_33),T151,ENVNUL);
  T155 = BOUNDP(Yast_linearizeYunconstrained_typeQ);
  if (T155 != YPfalse) {
    T154 = CHKREF(Yast_linearizeYunconstrained_typeQ);
  } else {
    T154 = YPfalse;
  }
  T153 = fun_unconstrained_typeQ_33;
  T152 = CALL2(CHKREF(YPdefine_method),T154,T153);
  Yast_linearizeYunconstrained_typeQ = T152;
  T156 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLregular_applicationG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_do_call_upgradesX_34 = YPmet(FUNCODEREF(fun_do_call_upgradesX_34),CHKREF(lit_32),T156,ENVNUL);
  T160 = BOUNDP(Yast_linearizeYdo_call_upgradesX);
  if (T160 != YPfalse) {
    T159 = CHKREF(Yast_linearizeYdo_call_upgradesX);
  } else {
    T159 = YPfalse;
  }
  T158 = fun_do_call_upgradesX_34;
  T157 = CALL2(CHKREF(YPdefine_method),T159,T158);
  Yast_linearizeYdo_call_upgradesX = T157;
  lit_35 = YPPsym((P)"analyze-calls");
  T161 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_analyze_calls_35 = YPmet(FUNCODEREF(fun_analyze_calls_35),CHKREF(lit_35),T161,ENVNUL);
  T165 = BOUNDP(Yast_linearizeYanalyze_calls);
  if (T165 != YPfalse) {
    T164 = CHKREF(Yast_linearizeYanalyze_calls);
  } else {
    T164 = YPfalse;
  }
  T163 = fun_analyze_calls_35;
  T162 = CALL2(CHKREF(YPdefine_method),T164,T163);
  Yast_linearizeYanalyze_calls = T162;
  lit_36 = YPPsym((P)"<free-environment>");
  T168 = (P)YPpair(CHKREF(YastYLprogramsG),Ynil);
  T167 = (P)YPpair(CHKREF(YLlstG),T168);
  T166 = CALL2(CHKREF(Yfab_class),CHKREF(lit_36),T167);
  Yast_linearizeYLfree_environmentG = T166;
  T174 = (P)YPpair(CHKREF(Yast_linearizeYLfree_environmentG),Ynil);
  T173 = (P)YPpair(CHKREF(Ytail),Ynil);
  T172 = (P)YPpair(CHKREF(Yhead),T173);
  T171 = (P)YPpair(YPfalse,Ynil);
  T170 = (P)YPpair(YPfalse,T171);
  T169 = CALL3(CHKREF(YPisa),T174,T172,T170);
  Yast_linearizeYDfree_environment_empty = T169;
  lit_37 = YPPsym((P)"as");
  lit_38 = YPPsym((P)"p");
  T176 = CALL1(CHKREF(YruntimeYtE),CHKREF(Yast_linearizeYLfree_environmentG));
  T175 = YPsig(YPPlist(2,CHKREF(lit_38),CHKREF(lit_11)),YPPlist(2,T176,CHKREF(Yast_linearizeYLfree_environmentG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_as_36 = YPmet(FUNCODEREF(fun_as_36),CHKREF(lit_37),T175,ENVNUL);
  T180 = BOUNDP(YruntimeYas);
  if (T180 != YPfalse) {
    T179 = CHKREF(YruntimeYas);
  } else {
    T179 = YPfalse;
  }
  T178 = fun_as_36;
  T177 = CALL2(CHKREF(YPdefine_method),T179,T178);
  YruntimeYas = T177;
  T182 = CALL1(CHKREF(YruntimeYtE),CHKREF(YLlstG));
  T181 = YPsig(YPPlist(2,CHKREF(lit_38),CHKREF(lit_11)),YPPlist(2,T182,CHKREF(Yast_linearizeYLfree_environmentG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_as_37 = YPmet(FUNCODEREF(fun_as_37),CHKREF(lit_37),T181,ENVNUL);
  T186 = BOUNDP(YruntimeYas);
  if (T186 != YPfalse) {
    T185 = CHKREF(YruntimeYas);
  } else {
    T185 = YPfalse;
  }
  T184 = fun_as_37;
  T183 = CALL2(CHKREF(YPdefine_method),T185,T184);
  YruntimeYas = T183;
  T188 = CALL1(CHKREF(YruntimeYtE),CHKREF(Yast_linearizeYLfree_environmentG));
  T187 = YPsig(YPPlist(2,CHKREF(lit_38),CHKREF(lit_11)),YPPlist(2,T188,CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_as_38 = YPmet(FUNCODEREF(fun_as_38),CHKREF(lit_37),T187,ENVNUL);
  T192 = BOUNDP(YruntimeYas);
  if (T192 != YPfalse) {
    T191 = CHKREF(YruntimeYas);
  } else {
    T191 = YPfalse;
  }
  T190 = fun_as_38;
  T189 = CALL2(CHKREF(YPdefine_method),T191,T190);
  YruntimeYas = T189;
  lit_39 = YPPsym((P)"free-environment");
  lit_40 = YPPsym((P)"t");
  lit_41 = YPPsym((P)"h");
  T193 = YPsig(YPPlist(2,CHKREF(lit_41),CHKREF(lit_40)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  Yast_linearizeYfree_environment = YPmet(FUNCODEREF(Yast_linearizeYfree_environment),CHKREF(lit_39),T193,ENVNUL);
  T194 = Yast_linearizeYfree_environment;
  Yast_linearizeYfree_environment = T194;
  lit_42 = YPPsym((P)"empty");
  lit_43 = YPPsym((P)"e");
  T196 = CALL1(CHKREF(YruntimeYtE),CHKREF(Yast_linearizeYLfree_environmentG));
  T195 = YPsig(YPPlist(1,CHKREF(lit_43)),YPPlist(1,T196),YPfalse,YPint((P)1),CHKREF(Yast_linearizeYLfree_environmentG));
  fun_empty_40 = YPmet(FUNCODEREF(fun_empty_40),CHKREF(lit_42),T195,ENVNUL);
  T200 = BOUNDP(YruntimeYempty);
  if (T200 != YPfalse) {
    T199 = CHKREF(YruntimeYempty);
  } else {
    T199 = YPfalse;
  }
  T198 = fun_empty_40;
  T197 = CALL2(CHKREF(YPdefine_method),T199,T198);
  YruntimeYempty = T197;
  lit_44 = YPPsym((P)"<flat-function>");
  T202 = (P)YPpair(CHKREF(YastYLast_methodG),Ynil);
  T201 = CALL2(CHKREF(Yfab_class),CHKREF(lit_44),T202);
  Yast_linearizeYLflat_functionG = T201;
  lit_45 = YPPsym((P)"function-free");
  T203 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLflat_functionG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_function_free_41 = YPmet(FUNCODEREF(fun_function_free_41),CHKREF(lit_45),T203,ENVNUL);
  T207 = BOUNDP(Yast_linearizeYfunction_free);
  if (T207 != YPfalse) {
    T206 = CHKREF(Yast_linearizeYfunction_free);
  } else {
    T206 = YPfalse;
  }
  T205 = fun_function_free_41;
  T204 = CALL2(CHKREF(YPdefine_method),T206,T205);
  Yast_linearizeYfunction_free = T204;
  lit_46 = YPPsym((P)"function-free-setter");
  T208 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(Yast_linearizeYLfree_environmentG),CHKREF(Yast_linearizeYLflat_functionG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_function_free_setter_42 = YPmet(FUNCODEREF(fun_function_free_setter_42),CHKREF(lit_46),T208,ENVNUL);
  T212 = BOUNDP(Yast_linearizeYfunction_free_setter);
  if (T212 != YPfalse) {
    T211 = CHKREF(Yast_linearizeYfunction_free_setter);
  } else {
    T211 = YPfalse;
  }
  T210 = fun_function_free_setter_42;
  T209 = CALL2(CHKREF(YPdefine_method),T211,T210);
  Yast_linearizeYfunction_free_setter = T209;
  T213 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T213,ENVNUL);
  T214 = fun_43;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLflat_functionG),CHKREF(Yast_linearizeYfunction_free),CHKREF(Yast_linearizeYfunction_free_setter),CHKREF(Yast_linearizeYLfree_environmentG),T214);
  lit_47 = YPPsym((P)"<free-reference>");
  T216 = (P)YPpair(CHKREF(YastYLreal_referenceG),Ynil);
  T215 = CALL2(CHKREF(Yfab_class),CHKREF(lit_47),T216);
  Yast_linearizeYLfree_referenceG = T215;
  lit_48 = YPPsym((P)"reference-offset");
  T217 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLfree_referenceG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_reference_offset_44 = YPmet(FUNCODEREF(fun_reference_offset_44),CHKREF(lit_48),T217,ENVNUL);
  T221 = BOUNDP(Yast_linearizeYreference_offset);
  if (T221 != YPfalse) {
    T220 = CHKREF(Yast_linearizeYreference_offset);
  } else {
    T220 = YPfalse;
  }
  T219 = fun_reference_offset_44;
  T218 = CALL2(CHKREF(YPdefine_method),T220,T219);
  Yast_linearizeYreference_offset = T218;
  lit_49 = YPPsym((P)"reference-offset-setter");
  T223 = CALL1(CHKREF(YruntimeYfalse_or),CHKREF(YLintG));
  T222 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,T223,CHKREF(Yast_linearizeYLfree_referenceG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_reference_offset_setter_45 = YPmet(FUNCODEREF(fun_reference_offset_setter_45),CHKREF(lit_49),T222,ENVNUL);
  T227 = BOUNDP(Yast_linearizeYreference_offset_setter);
  if (T227 != YPfalse) {
    T226 = CHKREF(Yast_linearizeYreference_offset_setter);
  } else {
    T226 = YPfalse;
  }
  T225 = fun_reference_offset_setter_45;
  T224 = CALL2(CHKREF(YPdefine_method),T226,T225);
  Yast_linearizeYreference_offset_setter = T224;
  T228 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_46 = YPmet(FUNCODEREF(fun_46),YPfalse,T228,ENVNUL);
  T230 = CALL1(CHKREF(YruntimeYfalse_or),CHKREF(YLintG));
  T229 = fun_46;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLfree_referenceG),CHKREF(Yast_linearizeYreference_offset),CHKREF(Yast_linearizeYreference_offset_setter),T230,T229);
  lit_50 = YPPsym((P)"reference-self?");
  T231 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLfree_referenceG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_reference_selfQ_47 = YPmet(FUNCODEREF(fun_reference_selfQ_47),CHKREF(lit_50),T231,ENVNUL);
  T235 = BOUNDP(Yast_linearizeYreference_selfQ);
  if (T235 != YPfalse) {
    T234 = CHKREF(Yast_linearizeYreference_selfQ);
  } else {
    T234 = YPfalse;
  }
  T233 = fun_reference_selfQ_47;
  T232 = CALL2(CHKREF(YPdefine_method),T234,T233);
  Yast_linearizeYreference_selfQ = T232;
  lit_51 = YPPsym((P)"reference-self?-setter");
  T236 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLlogG),CHKREF(Yast_linearizeYLfree_referenceG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_reference_selfQ_setter_48 = YPmet(FUNCODEREF(fun_reference_selfQ_setter_48),CHKREF(lit_51),T236,ENVNUL);
  T240 = BOUNDP(Yast_linearizeYreference_selfQ_setter);
  if (T240 != YPfalse) {
    T239 = CHKREF(Yast_linearizeYreference_selfQ_setter);
  } else {
    T239 = YPfalse;
  }
  T238 = fun_reference_selfQ_setter_48;
  T237 = CALL2(CHKREF(YPdefine_method),T239,T238);
  Yast_linearizeYreference_selfQ_setter = T237;
  T241 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T241,ENVNUL);
  T242 = fun_49;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLfree_referenceG),CHKREF(Yast_linearizeYreference_selfQ),CHKREF(Yast_linearizeYreference_selfQ_setter),CHKREF(YLlogG),T242);
  lit_52 = YPPsym((P)"lift!");
  T243 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_liftX_50 = YPmet(FUNCODEREF(fun_liftX_50),CHKREF(lit_52),T243,ENVNUL);
  T247 = BOUNDP(Yast_linearizeYliftX);
  if (T247 != YPfalse) {
    T246 = CHKREF(Yast_linearizeYliftX);
  } else {
    T246 = YPfalse;
  }
  T245 = fun_liftX_50;
  T244 = CALL2(CHKREF(YPdefine_method),T246,T245);
  Yast_linearizeYliftX = T244;
  lit_53 = YPPsym((P)"lift-procedures!");
  lit_54 = YPPsym((P)"flat-fun");
  T248 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_54),CHKREF(lit_18)),YPPlist(3,CHKREF(YastYLprogramG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_lift_proceduresX_51 = YPmet(FUNCODEREF(fun_lift_proceduresX_51),CHKREF(lit_53),T248,ENVNUL);
  T252 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T252 != YPfalse) {
    T251 = CHKREF(Yast_linearizeYlift_proceduresX);
  } else {
    T251 = YPfalse;
  }
  T250 = fun_lift_proceduresX_51;
  T249 = CALL2(CHKREF(YPdefine_method),T251,T250);
  Yast_linearizeYlift_proceduresX = T249;
  T253 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_54),CHKREF(lit_18)),YPPlist(3,CHKREF(YastYLlocal_referenceG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_lift_proceduresX_52 = YPmet(FUNCODEREF(fun_lift_proceduresX_52),CHKREF(lit_53),T253,ENVNUL);
  T257 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T257 != YPfalse) {
    T256 = CHKREF(Yast_linearizeYlift_proceduresX);
  } else {
    T256 = YPfalse;
  }
  T255 = fun_lift_proceduresX_52;
  T254 = CALL2(CHKREF(YPdefine_method),T256,T255);
  Yast_linearizeYlift_proceduresX = T254;
  lit_55 = YPPsym((P)"adjoin-free-binding!");
  lit_56 = YPPsym((P)"ref");
  lit_57 = YPPsym((P)"check");
  lit_58 = YPPsym((P)"free*");
  lit_59 = YPPsym((P)"i");
  lit_60 = YPPsym((P)"add");
  T260 = YPsig(YPPlist(1,CHKREF(lit_58)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_add_53 = YPmet(FUNCODEREF(fun_add_53),CHKREF(lit_60),T260,ENVNUL);
  T259 = YPsig(YPPlist(2,CHKREF(lit_59),CHKREF(lit_58)),YPPlist(2,CHKREF(YLintG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_check_54 = YPmet(FUNCODEREF(fun_check_54),CHKREF(lit_57),T259,ENVNUL);
  T258 = YPsig(YPPlist(2,CHKREF(lit_54),CHKREF(lit_56)),YPPlist(2,CHKREF(Yast_linearizeYLflat_functionG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLintG));
  fun_adjoin_free_bindingX_55 = YPmet(FUNCODEREF(fun_adjoin_free_bindingX_55),CHKREF(lit_55),T258,ENVNUL);
  T264 = BOUNDP(Yast_linearizeYadjoin_free_bindingX);
  if (T264 != YPfalse) {
    T263 = CHKREF(Yast_linearizeYadjoin_free_bindingX);
  } else {
    T263 = YPfalse;
  }
  T262 = fun_adjoin_free_bindingX_55;
  T261 = CALL2(CHKREF(YPdefine_method),T263,T262);
  Yast_linearizeYadjoin_free_bindingX = T261;
  T267 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_54),CHKREF(lit_18)),YPPlist(3,CHKREF(YastYLfix_letG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  T266 = fun_lift_proceduresX_56 = YPmet(FUNCODEREF(fun_lift_proceduresX_56),CHKREF(lit_53),T267,ENVNUL);
  T272 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T272 != YPfalse) {
    T271 = CHKREF(Yast_linearizeYlift_proceduresX);
  } else {
    T271 = YPfalse;
  }
  T270 = fun_lift_proceduresX_56;
  T269 = CALL2(CHKREF(YPdefine_method),T271,T270);
  T268 = Yast_linearizeYlift_proceduresX = T269;
  T265 = T268;
  return T265;
}

P Yast_linearizeY___main_1___() {
  P T265,T264,T263,T262,T261,T260,T259,T258,T257,T256,T255,T254,T253,T252,T251,T250;
  P T249,T248,T247,T246,T245,T244,T243,T242,T241,T240,T239,T238,T237,T236,T235,T234;
  P T233,T232,T231,T230,T229,T228,T227,T226,T225,T224,T223,T222,T221,T220,T219,T218;
  P T217,T216,T215,T214,T213,T212,T211,T210,T209,T208,T207,T206,T205,T204,T203,T202;
  P T201,T200,T199,T198,T197,T196,T195,T194,T193,T192,T191,T190,T189,T188,T187,T186;
  P T185,T184,T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171,T170;
  P T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154;
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
  T0 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_54),CHKREF(lit_18)),YPPlist(3,CHKREF(YastYLlocalsG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_lift_proceduresX_57 = YPmet(FUNCODEREF(fun_lift_proceduresX_57),CHKREF(lit_53),T0,ENVNUL);
  T4 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T4 != YPfalse) {
    T3 = CHKREF(Yast_linearizeYlift_proceduresX);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_lift_proceduresX_57;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  Yast_linearizeYlift_proceduresX = T1;
  T5 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_54),CHKREF(lit_18)),YPPlist(3,CHKREF(YastYLast_primitiveG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_lift_proceduresX_58 = YPmet(FUNCODEREF(fun_lift_proceduresX_58),CHKREF(lit_53),T5,ENVNUL);
  T9 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T9 != YPfalse) {
    T8 = CHKREF(Yast_linearizeYlift_proceduresX);
  } else {
    T8 = YPfalse;
  }
  T7 = fun_lift_proceduresX_58;
  T6 = CALL2(CHKREF(YPdefine_method),T8,T7);
  Yast_linearizeYlift_proceduresX = T6;
  T10 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_54),CHKREF(lit_18)),YPPlist(3,CHKREF(YastYLast_genericG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_lift_proceduresX_59 = YPmet(FUNCODEREF(fun_lift_proceduresX_59),CHKREF(lit_53),T10,ENVNUL);
  T14 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T14 != YPfalse) {
    T13 = CHKREF(Yast_linearizeYlift_proceduresX);
  } else {
    T13 = YPfalse;
  }
  T12 = fun_lift_proceduresX_59;
  T11 = CALL2(CHKREF(YPdefine_method),T13,T12);
  Yast_linearizeYlift_proceduresX = T11;
  T15 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_54),CHKREF(lit_18)),YPPlist(3,CHKREF(YastYLast_functionG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_lift_proceduresX_60 = YPmet(FUNCODEREF(fun_lift_proceduresX_60),CHKREF(lit_53),T15,ENVNUL);
  T19 = BOUNDP(Yast_linearizeYlift_proceduresX);
  if (T19 != YPfalse) {
    T18 = CHKREF(Yast_linearizeYlift_proceduresX);
  } else {
    T18 = YPfalse;
  }
  T17 = fun_lift_proceduresX_60;
  T16 = CALL2(CHKREF(YPdefine_method),T18,T17);
  Yast_linearizeYlift_proceduresX = T16;
  lit_61 = YPPsym((P)"<flattened-program>");
  T21 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T20 = CALL2(CHKREF(Yfab_class),CHKREF(lit_61),T21);
  Yast_linearizeYLflattened_programG = T20;
  lit_62 = YPPsym((P)"program-form");
  T22 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_program_form_61 = YPmet(FUNCODEREF(fun_program_form_61),CHKREF(lit_62),T22,ENVNUL);
  T26 = BOUNDP(Yast_linearizeYprogram_form);
  if (T26 != YPfalse) {
    T25 = CHKREF(Yast_linearizeYprogram_form);
  } else {
    T25 = YPfalse;
  }
  T24 = fun_program_form_61;
  T23 = CALL2(CHKREF(YPdefine_method),T25,T24);
  Yast_linearizeYprogram_form = T23;
  lit_63 = YPPsym((P)"program-form-setter");
  T28 = CALL1(CHKREF(YruntimeYfalse_or),CHKREF(YastYLprogramG));
  T27 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,T28,CHKREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_program_form_setter_62 = YPmet(FUNCODEREF(fun_program_form_setter_62),CHKREF(lit_63),T27,ENVNUL);
  T32 = BOUNDP(Yast_linearizeYprogram_form_setter);
  if (T32 != YPfalse) {
    T31 = CHKREF(Yast_linearizeYprogram_form_setter);
  } else {
    T31 = YPfalse;
  }
  T30 = fun_program_form_setter_62;
  T29 = CALL2(CHKREF(YPdefine_method),T31,T30);
  Yast_linearizeYprogram_form_setter = T29;
  T33 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_63 = YPmet(FUNCODEREF(fun_63),YPfalse,T33,ENVNUL);
  T35 = CALL1(CHKREF(YruntimeYfalse_or),CHKREF(YastYLprogramG));
  T34 = fun_63;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLflattened_programG),CHKREF(Yast_linearizeYprogram_form),CHKREF(Yast_linearizeYprogram_form_setter),T35,T34);
  lit_64 = YPPsym((P)"program-quotations");
  T36 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_program_quotations_64 = YPmet(FUNCODEREF(fun_program_quotations_64),CHKREF(lit_64),T36,ENVNUL);
  T40 = BOUNDP(Yast_linearizeYprogram_quotations);
  if (T40 != YPfalse) {
    T39 = CHKREF(Yast_linearizeYprogram_quotations);
  } else {
    T39 = YPfalse;
  }
  T38 = fun_program_quotations_64;
  T37 = CALL2(CHKREF(YPdefine_method),T39,T38);
  Yast_linearizeYprogram_quotations = T37;
  lit_65 = YPPsym((P)"program-quotations-setter");
  T41 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_program_quotations_setter_65 = YPmet(FUNCODEREF(fun_program_quotations_setter_65),CHKREF(lit_65),T41,ENVNUL);
  T45 = BOUNDP(Yast_linearizeYprogram_quotations_setter);
  if (T45 != YPfalse) {
    T44 = CHKREF(Yast_linearizeYprogram_quotations_setter);
  } else {
    T44 = YPfalse;
  }
  T43 = fun_program_quotations_setter_65;
  T42 = CALL2(CHKREF(YPdefine_method),T44,T43);
  Yast_linearizeYprogram_quotations_setter = T42;
  T46 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_66 = YPmet(FUNCODEREF(fun_66),YPfalse,T46,ENVNUL);
  T47 = fun_66;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLflattened_programG),CHKREF(Yast_linearizeYprogram_quotations),CHKREF(Yast_linearizeYprogram_quotations_setter),CHKREF(YLanyG),T47);
  lit_66 = YPPsym((P)"program-definitions");
  T48 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_program_definitions_67 = YPmet(FUNCODEREF(fun_program_definitions_67),CHKREF(lit_66),T48,ENVNUL);
  T52 = BOUNDP(Yast_linearizeYprogram_definitions);
  if (T52 != YPfalse) {
    T51 = CHKREF(Yast_linearizeYprogram_definitions);
  } else {
    T51 = YPfalse;
  }
  T50 = fun_program_definitions_67;
  T49 = CALL2(CHKREF(YPdefine_method),T51,T50);
  Yast_linearizeYprogram_definitions = T49;
  lit_67 = YPPsym((P)"program-definitions-setter");
  T53 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_program_definitions_setter_68 = YPmet(FUNCODEREF(fun_program_definitions_setter_68),CHKREF(lit_67),T53,ENVNUL);
  T57 = BOUNDP(Yast_linearizeYprogram_definitions_setter);
  if (T57 != YPfalse) {
    T56 = CHKREF(Yast_linearizeYprogram_definitions_setter);
  } else {
    T56 = YPfalse;
  }
  T55 = fun_program_definitions_setter_68;
  T54 = CALL2(CHKREF(YPdefine_method),T56,T55);
  Yast_linearizeYprogram_definitions_setter = T54;
  T58 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T58,ENVNUL);
  T59 = fun_69;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLflattened_programG),CHKREF(Yast_linearizeYprogram_definitions),CHKREF(Yast_linearizeYprogram_definitions_setter),CHKREF(YLanyG),T59);
  lit_68 = YPPsym((P)"<top-level-form>");
  T61 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T60 = CALL2(CHKREF(Yfab_class),CHKREF(lit_68),T61);
  Yast_linearizeYLtop_level_formG = T60;
  lit_69 = YPPsym((P)"form-program");
  T62 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_form_program_70 = YPmet(FUNCODEREF(fun_form_program_70),CHKREF(lit_69),T62,ENVNUL);
  T66 = BOUNDP(Yast_linearizeYform_program);
  if (T66 != YPfalse) {
    T65 = CHKREF(Yast_linearizeYform_program);
  } else {
    T65 = YPfalse;
  }
  T64 = fun_form_program_70;
  T63 = CALL2(CHKREF(YPdefine_method),T65,T64);
  Yast_linearizeYform_program = T63;
  lit_70 = YPPsym((P)"form-program-setter");
  T67 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YastYLprogramG),CHKREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_form_program_setter_71 = YPmet(FUNCODEREF(fun_form_program_setter_71),CHKREF(lit_70),T67,ENVNUL);
  T71 = BOUNDP(Yast_linearizeYform_program_setter);
  if (T71 != YPfalse) {
    T70 = CHKREF(Yast_linearizeYform_program_setter);
  } else {
    T70 = YPfalse;
  }
  T69 = fun_form_program_setter_71;
  T68 = CALL2(CHKREF(YPdefine_method),T70,T69);
  Yast_linearizeYform_program_setter = T68;
  T72 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T72,ENVNUL);
  T73 = fun_72;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLtop_level_formG),CHKREF(Yast_linearizeYform_program),CHKREF(Yast_linearizeYform_program_setter),CHKREF(YastYLprogramG),T73);
  lit_71 = YPPsym((P)"form-quotations");
  T74 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_form_quotations_73 = YPmet(FUNCODEREF(fun_form_quotations_73),CHKREF(lit_71),T74,ENVNUL);
  T78 = BOUNDP(Yast_linearizeYform_quotations);
  if (T78 != YPfalse) {
    T77 = CHKREF(Yast_linearizeYform_quotations);
  } else {
    T77 = YPfalse;
  }
  T76 = fun_form_quotations_73;
  T75 = CALL2(CHKREF(YPdefine_method),T77,T76);
  Yast_linearizeYform_quotations = T75;
  lit_72 = YPPsym((P)"form-quotations-setter");
  T79 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_form_quotations_setter_74 = YPmet(FUNCODEREF(fun_form_quotations_setter_74),CHKREF(lit_72),T79,ENVNUL);
  T83 = BOUNDP(Yast_linearizeYform_quotations_setter);
  if (T83 != YPfalse) {
    T82 = CHKREF(Yast_linearizeYform_quotations_setter);
  } else {
    T82 = YPfalse;
  }
  T81 = fun_form_quotations_setter_74;
  T80 = CALL2(CHKREF(YPdefine_method),T82,T81);
  Yast_linearizeYform_quotations_setter = T80;
  T84 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T84,ENVNUL);
  T85 = fun_75;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLtop_level_formG),CHKREF(Yast_linearizeYform_quotations),CHKREF(Yast_linearizeYform_quotations_setter),CHKREF(YLanyG),T85);
  lit_73 = YPPsym((P)"form-definitions");
  T86 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_form_definitions_76 = YPmet(FUNCODEREF(fun_form_definitions_76),CHKREF(lit_73),T86,ENVNUL);
  T90 = BOUNDP(Yast_linearizeYform_definitions);
  if (T90 != YPfalse) {
    T89 = CHKREF(Yast_linearizeYform_definitions);
  } else {
    T89 = YPfalse;
  }
  T88 = fun_form_definitions_76;
  T87 = CALL2(CHKREF(YPdefine_method),T89,T88);
  Yast_linearizeYform_definitions = T87;
  lit_74 = YPPsym((P)"form-definitions-setter");
  T91 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_form_definitions_setter_77 = YPmet(FUNCODEREF(fun_form_definitions_setter_77),CHKREF(lit_74),T91,ENVNUL);
  T95 = BOUNDP(Yast_linearizeYform_definitions_setter);
  if (T95 != YPfalse) {
    T94 = CHKREF(Yast_linearizeYform_definitions_setter);
  } else {
    T94 = YPfalse;
  }
  T93 = fun_form_definitions_setter_77;
  T92 = CALL2(CHKREF(YPdefine_method),T94,T93);
  Yast_linearizeYform_definitions_setter = T92;
  T96 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_78 = YPmet(FUNCODEREF(fun_78),YPfalse,T96,ENVNUL);
  T97 = fun_78;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLtop_level_formG),CHKREF(Yast_linearizeYform_definitions),CHKREF(Yast_linearizeYform_definitions_setter),CHKREF(YLanyG),T97);
  lit_75 = YPPsym((P)"<function-definition>");
  T99 = (P)YPpair(CHKREF(Yast_linearizeYLflat_functionG),Ynil);
  T98 = CALL2(CHKREF(Yfab_class),CHKREF(lit_75),T99);
  Yast_linearizeYLfunction_definitionG = T98;
  lit_76 = YPPsym((P)"function-index");
  T100 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLfunction_definitionG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_function_index_79 = YPmet(FUNCODEREF(fun_function_index_79),CHKREF(lit_76),T100,ENVNUL);
  T104 = BOUNDP(Yast_linearizeYfunction_index);
  if (T104 != YPfalse) {
    T103 = CHKREF(Yast_linearizeYfunction_index);
  } else {
    T103 = YPfalse;
  }
  T102 = fun_function_index_79;
  T101 = CALL2(CHKREF(YPdefine_method),T103,T102);
  Yast_linearizeYfunction_index = T101;
  lit_77 = YPPsym((P)"function-index-setter");
  T105 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLfunction_definitionG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_function_index_setter_80 = YPmet(FUNCODEREF(fun_function_index_setter_80),CHKREF(lit_77),T105,ENVNUL);
  T109 = BOUNDP(Yast_linearizeYfunction_index_setter);
  if (T109 != YPfalse) {
    T108 = CHKREF(Yast_linearizeYfunction_index_setter);
  } else {
    T108 = YPfalse;
  }
  T107 = fun_function_index_setter_80;
  T106 = CALL2(CHKREF(YPdefine_method),T108,T107);
  Yast_linearizeYfunction_index_setter = T106;
  T110 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T110,ENVNUL);
  T111 = fun_81;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLfunction_definitionG),CHKREF(Yast_linearizeYfunction_index),CHKREF(Yast_linearizeYfunction_index_setter),CHKREF(YLanyG),T111);
  lit_78 = YPPsym((P)"function-temporaries");
  T112 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLfunction_definitionG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_function_temporaries_82 = YPmet(FUNCODEREF(fun_function_temporaries_82),CHKREF(lit_78),T112,ENVNUL);
  T116 = BOUNDP(Yast_linearizeYfunction_temporaries);
  if (T116 != YPfalse) {
    T115 = CHKREF(Yast_linearizeYfunction_temporaries);
  } else {
    T115 = YPfalse;
  }
  T114 = fun_function_temporaries_82;
  T113 = CALL2(CHKREF(YPdefine_method),T115,T114);
  Yast_linearizeYfunction_temporaries = T113;
  lit_79 = YPPsym((P)"function-temporaries-setter");
  T117 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLfunction_definitionG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_function_temporaries_setter_83 = YPmet(FUNCODEREF(fun_function_temporaries_setter_83),CHKREF(lit_79),T117,ENVNUL);
  T121 = BOUNDP(Yast_linearizeYfunction_temporaries_setter);
  if (T121 != YPfalse) {
    T120 = CHKREF(Yast_linearizeYfunction_temporaries_setter);
  } else {
    T120 = YPfalse;
  }
  T119 = fun_function_temporaries_setter_83;
  T118 = CALL2(CHKREF(YPdefine_method),T120,T119);
  Yast_linearizeYfunction_temporaries_setter = T118;
  T122 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_84 = YPmet(FUNCODEREF(fun_84),YPfalse,T122,ENVNUL);
  T123 = fun_84;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLfunction_definitionG),CHKREF(Yast_linearizeYfunction_temporaries),CHKREF(Yast_linearizeYfunction_temporaries_setter),CHKREF(YLanyG),T123);
  lit_80 = YPPsym((P)"function-registers");
  T124 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLfunction_definitionG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_function_registers_85 = YPmet(FUNCODEREF(fun_function_registers_85),CHKREF(lit_80),T124,ENVNUL);
  T128 = BOUNDP(Yast_linearizeYfunction_registers);
  if (T128 != YPfalse) {
    T127 = CHKREF(Yast_linearizeYfunction_registers);
  } else {
    T127 = YPfalse;
  }
  T126 = fun_function_registers_85;
  T125 = CALL2(CHKREF(YPdefine_method),T127,T126);
  Yast_linearizeYfunction_registers = T125;
  lit_81 = YPPsym((P)"function-registers-setter");
  T129 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLfunction_definitionG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_function_registers_setter_86 = YPmet(FUNCODEREF(fun_function_registers_setter_86),CHKREF(lit_81),T129,ENVNUL);
  T133 = BOUNDP(Yast_linearizeYfunction_registers_setter);
  if (T133 != YPfalse) {
    T132 = CHKREF(Yast_linearizeYfunction_registers_setter);
  } else {
    T132 = YPfalse;
  }
  T131 = fun_function_registers_setter_86;
  T130 = CALL2(CHKREF(YPdefine_method),T132,T131);
  Yast_linearizeYfunction_registers_setter = T130;
  T134 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T134,ENVNUL);
  T135 = fun_87;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLfunction_definitionG),CHKREF(Yast_linearizeYfunction_registers),CHKREF(Yast_linearizeYfunction_registers_setter),CHKREF(YLanyG),T135);
  lit_82 = YPPsym((P)"function-self-recursive?");
  T136 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLfunction_definitionG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_function_self_recursiveQ_88 = YPmet(FUNCODEREF(fun_function_self_recursiveQ_88),CHKREF(lit_82),T136,ENVNUL);
  T140 = BOUNDP(Yast_linearizeYfunction_self_recursiveQ);
  if (T140 != YPfalse) {
    T139 = CHKREF(Yast_linearizeYfunction_self_recursiveQ);
  } else {
    T139 = YPfalse;
  }
  T138 = fun_function_self_recursiveQ_88;
  T137 = CALL2(CHKREF(YPdefine_method),T139,T138);
  Yast_linearizeYfunction_self_recursiveQ = T137;
  lit_83 = YPPsym((P)"function-self-recursive?-setter");
  T141 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLfunction_definitionG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_function_self_recursiveQ_setter_89 = YPmet(FUNCODEREF(fun_function_self_recursiveQ_setter_89),CHKREF(lit_83),T141,ENVNUL);
  T145 = BOUNDP(Yast_linearizeYfunction_self_recursiveQ_setter);
  if (T145 != YPfalse) {
    T144 = CHKREF(Yast_linearizeYfunction_self_recursiveQ_setter);
  } else {
    T144 = YPfalse;
  }
  T143 = fun_function_self_recursiveQ_setter_89;
  T142 = CALL2(CHKREF(YPdefine_method),T144,T143);
  Yast_linearizeYfunction_self_recursiveQ_setter = T142;
  T146 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_90 = YPmet(FUNCODEREF(fun_90),YPfalse,T146,ENVNUL);
  T147 = fun_90;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLfunction_definitionG),CHKREF(Yast_linearizeYfunction_self_recursiveQ),CHKREF(Yast_linearizeYfunction_self_recursiveQ_setter),CHKREF(YLanyG),T147);
  lit_84 = YPPsym((P)"<primitive-definition>");
  T149 = (P)YPpair(CHKREF(YastYLast_primitiveG),Ynil);
  T148 = CALL2(CHKREF(Yfab_class),CHKREF(lit_84),T149);
  Yast_linearizeYLprimitive_definitionG = T148;
  T150 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLprimitive_definitionG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_function_temporaries_91 = YPmet(FUNCODEREF(fun_function_temporaries_91),CHKREF(lit_78),T150,ENVNUL);
  T154 = BOUNDP(Yast_linearizeYfunction_temporaries);
  if (T154 != YPfalse) {
    T153 = CHKREF(Yast_linearizeYfunction_temporaries);
  } else {
    T153 = YPfalse;
  }
  T152 = fun_function_temporaries_91;
  T151 = CALL2(CHKREF(YPdefine_method),T153,T152);
  Yast_linearizeYfunction_temporaries = T151;
  T155 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLprimitive_definitionG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_function_temporaries_setter_92 = YPmet(FUNCODEREF(fun_function_temporaries_setter_92),CHKREF(lit_79),T155,ENVNUL);
  T159 = BOUNDP(Yast_linearizeYfunction_temporaries_setter);
  if (T159 != YPfalse) {
    T158 = CHKREF(Yast_linearizeYfunction_temporaries_setter);
  } else {
    T158 = YPfalse;
  }
  T157 = fun_function_temporaries_setter_92;
  T156 = CALL2(CHKREF(YPdefine_method),T158,T157);
  Yast_linearizeYfunction_temporaries_setter = T156;
  T160 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_93 = YPmet(FUNCODEREF(fun_93),YPfalse,T160,ENVNUL);
  T161 = fun_93;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLprimitive_definitionG),CHKREF(Yast_linearizeYfunction_temporaries),CHKREF(Yast_linearizeYfunction_temporaries_setter),CHKREF(YLanyG),T161);
  T162 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLprimitive_definitionG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_function_registers_94 = YPmet(FUNCODEREF(fun_function_registers_94),CHKREF(lit_80),T162,ENVNUL);
  T166 = BOUNDP(Yast_linearizeYfunction_registers);
  if (T166 != YPfalse) {
    T165 = CHKREF(Yast_linearizeYfunction_registers);
  } else {
    T165 = YPfalse;
  }
  T164 = fun_function_registers_94;
  T163 = CALL2(CHKREF(YPdefine_method),T165,T164);
  Yast_linearizeYfunction_registers = T163;
  T167 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLprimitive_definitionG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_function_registers_setter_95 = YPmet(FUNCODEREF(fun_function_registers_setter_95),CHKREF(lit_81),T167,ENVNUL);
  T171 = BOUNDP(Yast_linearizeYfunction_registers_setter);
  if (T171 != YPfalse) {
    T170 = CHKREF(Yast_linearizeYfunction_registers_setter);
  } else {
    T170 = YPfalse;
  }
  T169 = fun_function_registers_setter_95;
  T168 = CALL2(CHKREF(YPdefine_method),T170,T169);
  Yast_linearizeYfunction_registers_setter = T168;
  T172 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_96 = YPmet(FUNCODEREF(fun_96),YPfalse,T172,ENVNUL);
  T173 = fun_96;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLprimitive_definitionG),CHKREF(Yast_linearizeYfunction_registers),CHKREF(Yast_linearizeYfunction_registers_setter),CHKREF(YLanyG),T173);
  T174 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLprimitive_definitionG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_function_self_recursiveQ_97 = YPmet(FUNCODEREF(fun_function_self_recursiveQ_97),CHKREF(lit_82),T174,ENVNUL);
  T178 = BOUNDP(Yast_linearizeYfunction_self_recursiveQ);
  if (T178 != YPfalse) {
    T177 = CHKREF(Yast_linearizeYfunction_self_recursiveQ);
  } else {
    T177 = YPfalse;
  }
  T176 = fun_function_self_recursiveQ_97;
  T175 = CALL2(CHKREF(YPdefine_method),T177,T176);
  Yast_linearizeYfunction_self_recursiveQ = T175;
  T179 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLprimitive_definitionG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_function_self_recursiveQ_setter_98 = YPmet(FUNCODEREF(fun_function_self_recursiveQ_setter_98),CHKREF(lit_83),T179,ENVNUL);
  T183 = BOUNDP(Yast_linearizeYfunction_self_recursiveQ_setter);
  if (T183 != YPfalse) {
    T182 = CHKREF(Yast_linearizeYfunction_self_recursiveQ_setter);
  } else {
    T182 = YPfalse;
  }
  T181 = fun_function_self_recursiveQ_setter_98;
  T180 = CALL2(CHKREF(YPdefine_method),T182,T181);
  Yast_linearizeYfunction_self_recursiveQ_setter = T180;
  T184 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_99 = YPmet(FUNCODEREF(fun_99),YPfalse,T184,ENVNUL);
  T185 = fun_99;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLprimitive_definitionG),CHKREF(Yast_linearizeYfunction_self_recursiveQ),CHKREF(Yast_linearizeYfunction_self_recursiveQ_setter),CHKREF(YLanyG),T185);
  lit_85 = YPPsym((P)"<closure-creation>");
  T187 = (P)YPpair(CHKREF(YastYLcomputed_programG),Ynil);
  T186 = CALL2(CHKREF(Yfab_class),CHKREF(lit_85),T187);
  Yast_linearizeYLclosure_creationG = T186;
  lit_86 = YPPsym((P)"closure-creation-index");
  T188 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_closure_creation_index_100 = YPmet(FUNCODEREF(fun_closure_creation_index_100),CHKREF(lit_86),T188,ENVNUL);
  T192 = BOUNDP(Yast_linearizeYclosure_creation_index);
  if (T192 != YPfalse) {
    T191 = CHKREF(Yast_linearizeYclosure_creation_index);
  } else {
    T191 = YPfalse;
  }
  T190 = fun_closure_creation_index_100;
  T189 = CALL2(CHKREF(YPdefine_method),T191,T190);
  Yast_linearizeYclosure_creation_index = T189;
  lit_87 = YPPsym((P)"closure-creation-index-setter");
  T193 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_closure_creation_index_setter_101 = YPmet(FUNCODEREF(fun_closure_creation_index_setter_101),CHKREF(lit_87),T193,ENVNUL);
  T197 = BOUNDP(Yast_linearizeYclosure_creation_index_setter);
  if (T197 != YPfalse) {
    T196 = CHKREF(Yast_linearizeYclosure_creation_index_setter);
  } else {
    T196 = YPfalse;
  }
  T195 = fun_closure_creation_index_setter_101;
  T194 = CALL2(CHKREF(YPdefine_method),T196,T195);
  Yast_linearizeYclosure_creation_index_setter = T194;
  T198 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_102 = YPmet(FUNCODEREF(fun_102),YPfalse,T198,ENVNUL);
  T199 = fun_102;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLclosure_creationG),CHKREF(Yast_linearizeYclosure_creation_index),CHKREF(Yast_linearizeYclosure_creation_index_setter),CHKREF(YLanyG),T199);
  lit_88 = YPPsym((P)"closure-creation-bindings");
  T200 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_closure_creation_bindings_103 = YPmet(FUNCODEREF(fun_closure_creation_bindings_103),CHKREF(lit_88),T200,ENVNUL);
  T204 = BOUNDP(Yast_linearizeYclosure_creation_bindings);
  if (T204 != YPfalse) {
    T203 = CHKREF(Yast_linearizeYclosure_creation_bindings);
  } else {
    T203 = YPfalse;
  }
  T202 = fun_closure_creation_bindings_103;
  T201 = CALL2(CHKREF(YPdefine_method),T203,T202);
  Yast_linearizeYclosure_creation_bindings = T201;
  lit_89 = YPPsym((P)"closure-creation-bindings-setter");
  T205 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_closure_creation_bindings_setter_104 = YPmet(FUNCODEREF(fun_closure_creation_bindings_setter_104),CHKREF(lit_89),T205,ENVNUL);
  T209 = BOUNDP(Yast_linearizeYclosure_creation_bindings_setter);
  if (T209 != YPfalse) {
    T208 = CHKREF(Yast_linearizeYclosure_creation_bindings_setter);
  } else {
    T208 = YPfalse;
  }
  T207 = fun_closure_creation_bindings_setter_104;
  T206 = CALL2(CHKREF(YPdefine_method),T208,T207);
  Yast_linearizeYclosure_creation_bindings_setter = T206;
  T210 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_105 = YPmet(FUNCODEREF(fun_105),YPfalse,T210,ENVNUL);
  T211 = fun_105;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLclosure_creationG),CHKREF(Yast_linearizeYclosure_creation_bindings),CHKREF(Yast_linearizeYclosure_creation_bindings_setter),CHKREF(YLanyG),T211);
  lit_90 = YPPsym((P)"closure-creation-free");
  T212 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_closure_creation_free_106 = YPmet(FUNCODEREF(fun_closure_creation_free_106),CHKREF(lit_90),T212,ENVNUL);
  T216 = BOUNDP(Yast_linearizeYclosure_creation_free);
  if (T216 != YPfalse) {
    T215 = CHKREF(Yast_linearizeYclosure_creation_free);
  } else {
    T215 = YPfalse;
  }
  T214 = fun_closure_creation_free_106;
  T213 = CALL2(CHKREF(YPdefine_method),T215,T214);
  Yast_linearizeYclosure_creation_free = T213;
  lit_91 = YPPsym((P)"closure-creation-free-setter");
  T217 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_closure_creation_free_setter_107 = YPmet(FUNCODEREF(fun_closure_creation_free_setter_107),CHKREF(lit_91),T217,ENVNUL);
  T221 = BOUNDP(Yast_linearizeYclosure_creation_free_setter);
  if (T221 != YPfalse) {
    T220 = CHKREF(Yast_linearizeYclosure_creation_free_setter);
  } else {
    T220 = YPfalse;
  }
  T219 = fun_closure_creation_free_setter_107;
  T218 = CALL2(CHKREF(YPdefine_method),T220,T219);
  Yast_linearizeYclosure_creation_free_setter = T218;
  T222 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_108 = YPmet(FUNCODEREF(fun_108),YPfalse,T222,ENVNUL);
  T223 = fun_108;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLclosure_creationG),CHKREF(Yast_linearizeYclosure_creation_free),CHKREF(Yast_linearizeYclosure_creation_free_setter),CHKREF(YLanyG),T223);
  lit_92 = YPPsym((P)"flatten-seqs");
  T224 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_flatten_seqs_109 = YPmet(FUNCODEREF(fun_flatten_seqs_109),CHKREF(lit_92),T224,ENVNUL);
  T228 = BOUNDP(Yast_linearizeYflatten_seqs);
  if (T228 != YPfalse) {
    T227 = CHKREF(Yast_linearizeYflatten_seqs);
  } else {
    T227 = YPfalse;
  }
  T226 = fun_flatten_seqs_109;
  T225 = CALL2(CHKREF(YPdefine_method),T227,T226);
  Yast_linearizeYflatten_seqs = T225;
  lit_93 = YPPsym((P)"s");
  lit_94 = YPPsym((P)"inner");
  lit_95 = YPPsym((P)"ss");
  T231 = YPsig(YPPlist(2,CHKREF(lit_95),CHKREF(lit_23)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_inner_110 = YPmet(FUNCODEREF(fun_inner_110),CHKREF(lit_94),T231,ENVNUL);
  T230 = YPsig(YPPlist(2,CHKREF(lit_93),CHKREF(lit_23)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_111 = YPmet(FUNCODEREF(fun_loop_111),CHKREF(lit_20),T230,ENVNUL);
  T229 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLsequentialG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_flatten_seqs_112 = YPmet(FUNCODEREF(fun_flatten_seqs_112),CHKREF(lit_92),T229,ENVNUL);
  T235 = BOUNDP(Yast_linearizeYflatten_seqs);
  if (T235 != YPfalse) {
    T234 = CHKREF(Yast_linearizeYflatten_seqs);
  } else {
    T234 = YPfalse;
  }
  T233 = fun_flatten_seqs_112;
  T232 = CALL2(CHKREF(YPdefine_method),T234,T233);
  Yast_linearizeYflatten_seqs = T232;
  lit_96 = YPPsym((P)"as-top-level-forms");
  lit_97 = YPPsym((P)"programs");
  T237 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_113 = YPmet(FUNCODEREF(fun_113),YPfalse,T237,ENVNUL);
  T236 = YPsig(YPPlist(1,CHKREF(lit_97)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_as_top_level_forms_114 = YPmet(FUNCODEREF(fun_as_top_level_forms_114),CHKREF(lit_96),T236,ENVNUL);
  T241 = BOUNDP(Yast_linearizeYas_top_level_forms);
  if (T241 != YPfalse) {
    T240 = CHKREF(Yast_linearizeYas_top_level_forms);
  } else {
    T240 = YPfalse;
  }
  T239 = fun_as_top_level_forms_114;
  T238 = CALL2(CHKREF(YPdefine_method),T240,T239);
  Yast_linearizeYas_top_level_forms = T238;
  lit_98 = YPPsym((P)"extract-things!");
  T243 = YPsig(YPPlist(1,CHKREF(lit_19)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_115 = YPmet(FUNCODEREF(fun_115),YPfalse,T243,ENVNUL);
  T242 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_extract_thingsX_116 = YPmet(FUNCODEREF(fun_extract_thingsX_116),CHKREF(lit_98),T242,ENVNUL);
  T247 = BOUNDP(Yast_linearizeYextract_thingsX);
  if (T247 != YPfalse) {
    T246 = CHKREF(Yast_linearizeYextract_thingsX);
  } else {
    T246 = YPfalse;
  }
  T245 = fun_extract_thingsX_116;
  T244 = CALL2(CHKREF(YPdefine_method),T246,T245);
  Yast_linearizeYextract_thingsX = T244;
  lit_99 = YPPsym((P)"extract!");
  lit_100 = YPPsym((P)"result");
  T248 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_19),CHKREF(lit_100)),YPPlist(3,CHKREF(YastYLprogramG),CHKREF(Yast_linearizeYLtop_level_formG),CHKREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_extractX_117 = YPmet(FUNCODEREF(fun_extractX_117),CHKREF(lit_99),T248,ENVNUL);
  T252 = BOUNDP(Yast_linearizeYextractX);
  if (T252 != YPfalse) {
    T251 = CHKREF(Yast_linearizeYextractX);
  } else {
    T251 = YPfalse;
  }
  T250 = fun_extractX_117;
  T249 = CALL2(CHKREF(YPdefine_method),T251,T250);
  Yast_linearizeYextractX = T249;
  lit_101 = YPPsym((P)"quotation");
  T253 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_19),CHKREF(lit_100)),YPPlist(3,CHKREF(YastYLconstantG),CHKREF(Yast_linearizeYLtop_level_formG),CHKREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_extractX_118 = YPmet(FUNCODEREF(fun_extractX_118),CHKREF(lit_99),T253,ENVNUL);
  T257 = BOUNDP(Yast_linearizeYextractX);
  if (T257 != YPfalse) {
    T256 = CHKREF(Yast_linearizeYextractX);
  } else {
    T256 = YPfalse;
  }
  T255 = fun_extractX_118;
  T254 = CALL2(CHKREF(YPdefine_method),T256,T255);
  Yast_linearizeYextractX = T254;
  T260 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_19),CHKREF(lit_100)),YPPlist(3,CHKREF(YastYLraw_constantG),CHKREF(Yast_linearizeYLtop_level_formG),CHKREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  T259 = fun_extractX_119 = YPmet(FUNCODEREF(fun_extractX_119),CHKREF(lit_99),T260,ENVNUL);
  T265 = BOUNDP(Yast_linearizeYextractX);
  if (T265 != YPfalse) {
    T264 = CHKREF(Yast_linearizeYextractX);
  } else {
    T264 = YPfalse;
  }
  T263 = fun_extractX_119;
  T262 = CALL2(CHKREF(YPdefine_method),T264,T263);
  T261 = Yast_linearizeYextractX = T262;
  T258 = T261;
  return T258;
}

P Yast_linearizeY___main_2___() {
  P T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113;
  P T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97;
  P T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81;
  P T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65;
  P T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49;
  P T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33;
  P T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
loop:
  lit_102 = YPPsym((P)"binding");
  T1 = YPsig(YPPlist(1,CHKREF(lit_102)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_120 = YPmet(FUNCODEREF(fun_120),YPfalse,T1,ENVNUL);
  T0 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_19),CHKREF(lit_100)),YPPlist(3,CHKREF(Yast_linearizeYLflat_functionG),CHKREF(Yast_linearizeYLtop_level_formG),CHKREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_extractX_121 = YPmet(FUNCODEREF(fun_extractX_121),CHKREF(lit_99),T0,ENVNUL);
  T5 = BOUNDP(Yast_linearizeYextractX);
  if (T5 != YPfalse) {
    T4 = CHKREF(Yast_linearizeYextractX);
  } else {
    T4 = YPfalse;
  }
  T3 = fun_extractX_121;
  T2 = CALL2(CHKREF(YPdefine_method),T4,T3);
  Yast_linearizeYextractX = T2;
  T6 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_19),CHKREF(lit_100)),YPPlist(3,CHKREF(YastYLast_primitive_definitionG),CHKREF(Yast_linearizeYLtop_level_formG),CHKREF(Yast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_extractX_122 = YPmet(FUNCODEREF(fun_extractX_122),CHKREF(lit_99),T6,ENVNUL);
  T10 = BOUNDP(Yast_linearizeYextractX);
  if (T10 != YPfalse) {
    T9 = CHKREF(Yast_linearizeYextractX);
  } else {
    T9 = YPfalse;
  }
  T8 = fun_extractX_122;
  T7 = CALL2(CHKREF(YPdefine_method),T9,T8);
  Yast_linearizeYextractX = T7;
  lit_103 = YPPsym((P)"adjoin-definition!");
  lit_104 = YPPsym((P)"free");
  lit_105 = YPPsym((P)"body");
  lit_106 = YPPsym((P)"signature");
  lit_107 = YPPsym((P)"debug-name");
  T11 = YPsig(YPPlist(7,CHKREF(lit_19),CHKREF(lit_100),CHKREF(lit_107),CHKREF(lit_102),CHKREF(lit_106),CHKREF(lit_105),CHKREF(lit_104)),YPPlist(7,CHKREF(Yast_linearizeYLtop_level_formG),CHKREF(Yast_linearizeYLflattened_programG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)7),CHKREF(YLanyG));
  fun_adjoin_definitionX_123 = YPmet(FUNCODEREF(fun_adjoin_definitionX_123),CHKREF(lit_103),T11,ENVNUL);
  T15 = BOUNDP(Yast_linearizeYadjoin_definitionX);
  if (T15 != YPfalse) {
    T14 = CHKREF(Yast_linearizeYadjoin_definitionX);
  } else {
    T14 = YPfalse;
  }
  T13 = fun_adjoin_definitionX_123;
  T12 = CALL2(CHKREF(YPdefine_method),T14,T13);
  Yast_linearizeYadjoin_definitionX = T12;
  lit_108 = YPPsym((P)"split-program");
  lit_109 = YPPsym((P)"max-count");
  T16 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_109)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_split_program_124 = YPmet(FUNCODEREF(fun_split_program_124),CHKREF(lit_108),T16,ENVNUL);
  T20 = BOUNDP(Yast_linearizeYsplit_program);
  if (T20 != YPfalse) {
    T19 = CHKREF(Yast_linearizeYsplit_program);
  } else {
    T19 = YPfalse;
  }
  T18 = fun_split_program_124;
  T17 = CALL2(CHKREF(YPdefine_method),T19,T18);
  Yast_linearizeYsplit_program = T17;
  lit_110 = YPPsym((P)"forms");
  lit_111 = YPPsym((P)"count");
  lit_112 = YPPsym((P)"es");
  T23 = YPsig(YPPlist(3,CHKREF(lit_21),CHKREF(lit_112),CHKREF(lit_111)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_inner_125 = YPmet(FUNCODEREF(fun_inner_125),CHKREF(lit_94),T23,ENVNUL);
  T22 = YPsig(YPPlist(2,CHKREF(lit_110),CHKREF(lit_93)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_126 = YPmet(FUNCODEREF(fun_loop_126),CHKREF(lit_20),T22,ENVNUL);
  T21 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_109)),YPPlist(2,CHKREF(YastYLsequentialG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_split_program_127 = YPmet(FUNCODEREF(fun_split_program_127),CHKREF(lit_108),T21,ENVNUL);
  T27 = BOUNDP(Yast_linearizeYsplit_program);
  if (T27 != YPfalse) {
    T26 = CHKREF(Yast_linearizeYsplit_program);
  } else {
    T26 = YPfalse;
  }
  T25 = fun_split_program_127;
  T24 = CALL2(CHKREF(YPdefine_method),T26,T25);
  Yast_linearizeYsplit_program = T24;
  lit_113 = YPPsym((P)"closurize-main!");
  lit_114 = YPPsym((P)"defns");
  lit_115 = YPPsym((P)"calls");
  lit_116 = YPPsym((P)"predefined");
  lit_117 = YPsb((P)"---");
  lit_118 = YPsb((P)"---main-");
  T29 = YPsig(YPPlist(4,CHKREF(lit_115),CHKREF(lit_114),CHKREF(lit_59),CHKREF(lit_110)),YPPlist(4,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_loop_128 = YPmet(FUNCODEREF(fun_loop_128),CHKREF(lit_20),T29,ENVNUL);
  T28 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_23),CHKREF(lit_109)),YPPlist(3,CHKREF(Yast_linearizeYLflattened_programG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(Yast_linearizeYLflattened_programG));
  fun_closurize_mainX_129 = YPmet(FUNCODEREF(fun_closurize_mainX_129),CHKREF(lit_113),T28,ENVNUL);
  T33 = BOUNDP(Yast_linearizeYclosurize_mainX);
  if (T33 != YPfalse) {
    T32 = CHKREF(Yast_linearizeYclosurize_mainX);
  } else {
    T32 = YPfalse;
  }
  T31 = fun_closurize_mainX_129;
  T30 = CALL2(CHKREF(YPdefine_method),T32,T31);
  Yast_linearizeYclosurize_mainX = T30;
  lit_119 = YPPsym((P)"gather-temporaries!");
  lit_120 = YPPsym((P)"def");
  T35 = YPsig(YPPlist(1,CHKREF(lit_120)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_130 = YPmet(FUNCODEREF(fun_130),YPfalse,T35,ENVNUL);
  T34 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_gather_temporariesX_131 = YPmet(FUNCODEREF(fun_gather_temporariesX_131),CHKREF(lit_119),T34,ENVNUL);
  T39 = BOUNDP(Yast_linearizeYgather_temporariesX);
  if (T39 != YPfalse) {
    T38 = CHKREF(Yast_linearizeYgather_temporariesX);
  } else {
    T38 = YPfalse;
  }
  T37 = fun_gather_temporariesX_131;
  T36 = CALL2(CHKREF(YPdefine_method),T38,T37);
  Yast_linearizeYgather_temporariesX = T36;
  lit_121 = YPPsym((P)"collect-temporaries!");
  T40 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_54),CHKREF(lit_23)),YPPlist(3,CHKREF(YastYLprogramG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_collect_temporariesX_132 = YPmet(FUNCODEREF(fun_collect_temporariesX_132),CHKREF(lit_121),T40,ENVNUL);
  T44 = BOUNDP(Yast_linearizeYcollect_temporariesX);
  if (T44 != YPfalse) {
    T43 = CHKREF(Yast_linearizeYcollect_temporariesX);
  } else {
    T43 = YPfalse;
  }
  T42 = fun_collect_temporariesX_132;
  T41 = CALL2(CHKREF(YPdefine_method),T43,T42);
  Yast_linearizeYcollect_temporariesX = T41;
  T45 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_54),CHKREF(lit_23)),YPPlist(3,CHKREF(YastYLlocal_referenceG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_collect_temporariesX_133 = YPmet(FUNCODEREF(fun_collect_temporariesX_133),CHKREF(lit_121),T45,ENVNUL);
  T49 = BOUNDP(Yast_linearizeYcollect_temporariesX);
  if (T49 != YPfalse) {
    T48 = CHKREF(Yast_linearizeYcollect_temporariesX);
  } else {
    T48 = YPfalse;
  }
  T47 = fun_collect_temporariesX_133;
  T46 = CALL2(CHKREF(YPdefine_method),T48,T47);
  Yast_linearizeYcollect_temporariesX = T46;
  T50 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_54),CHKREF(lit_23)),YPPlist(3,CHKREF(YastYLfix_letG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_collect_temporariesX_134 = YPmet(FUNCODEREF(fun_collect_temporariesX_134),CHKREF(lit_121),T50,ENVNUL);
  T54 = BOUNDP(Yast_linearizeYcollect_temporariesX);
  if (T54 != YPfalse) {
    T53 = CHKREF(Yast_linearizeYcollect_temporariesX);
  } else {
    T53 = YPfalse;
  }
  T52 = fun_collect_temporariesX_134;
  T51 = CALL2(CHKREF(YPdefine_method),T53,T52);
  Yast_linearizeYcollect_temporariesX = T51;
  T55 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_54),CHKREF(lit_23)),YPPlist(3,CHKREF(YastYLlocalsG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_collect_temporariesX_135 = YPmet(FUNCODEREF(fun_collect_temporariesX_135),CHKREF(lit_121),T55,ENVNUL);
  T59 = BOUNDP(Yast_linearizeYcollect_temporariesX);
  if (T59 != YPfalse) {
    T58 = CHKREF(Yast_linearizeYcollect_temporariesX);
  } else {
    T58 = YPfalse;
  }
  T57 = fun_collect_temporariesX_135;
  T56 = CALL2(CHKREF(YPdefine_method),T58,T57);
  Yast_linearizeYcollect_temporariesX = T56;
  lit_122 = YPPsym((P)"adjoin-temporary-variables!");
  lit_123 = YPPsym((P)"new-bindings");
  lit_124 = YPPsym((P)"adjoin");
  lit_125 = YPPsym((P)"temps");
  T61 = YPsig(YPPlist(2,CHKREF(lit_125),CHKREF(lit_18)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_adjoin_136 = YPmet(FUNCODEREF(fun_adjoin_136),CHKREF(lit_124),T61,ENVNUL);
  T60 = YPsig(YPPlist(2,CHKREF(lit_54),CHKREF(lit_123)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_adjoin_temporary_variablesX_137 = YPmet(FUNCODEREF(fun_adjoin_temporary_variablesX_137),CHKREF(lit_122),T60,ENVNUL);
  T65 = BOUNDP(Yast_linearizeYadjoin_temporary_variablesX);
  if (T65 != YPfalse) {
    T64 = CHKREF(Yast_linearizeYadjoin_temporary_variablesX);
  } else {
    T64 = YPfalse;
  }
  T63 = fun_adjoin_temporary_variablesX_137;
  T62 = CALL2(CHKREF(YPdefine_method),T64,T63);
  Yast_linearizeYadjoin_temporary_variablesX = T62;
  lit_126 = YPPsym((P)"<renamed-local-binding>");
  T67 = (P)YPpair(CHKREF(YastYLlocal_bindingG),Ynil);
  T66 = CALL2(CHKREF(Yfab_class),CHKREF(lit_126),T67);
  Yast_linearizeYLrenamed_local_bindingG = T66;
  lit_127 = YPPsym((P)"binding-index");
  T68 = YPsig(YPPlist(1,CHKREF(lit_8)),YPPlist(1,CHKREF(Yast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_binding_index_138 = YPmet(FUNCODEREF(fun_binding_index_138),CHKREF(lit_127),T68,ENVNUL);
  T72 = BOUNDP(Yast_linearizeYbinding_index);
  if (T72 != YPfalse) {
    T71 = CHKREF(Yast_linearizeYbinding_index);
  } else {
    T71 = YPfalse;
  }
  T70 = fun_binding_index_138;
  T69 = CALL2(CHKREF(YPdefine_method),T71,T70);
  Yast_linearizeYbinding_index = T69;
  lit_128 = YPPsym((P)"binding-index-setter");
  T73 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_8)),YPPlist(2,CHKREF(YLanyG),CHKREF(Yast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_binding_index_setter_139 = YPmet(FUNCODEREF(fun_binding_index_setter_139),CHKREF(lit_128),T73,ENVNUL);
  T77 = BOUNDP(Yast_linearizeYbinding_index_setter);
  if (T77 != YPfalse) {
    T76 = CHKREF(Yast_linearizeYbinding_index_setter);
  } else {
    T76 = YPfalse;
  }
  T75 = fun_binding_index_setter_139;
  T74 = CALL2(CHKREF(YPdefine_method),T76,T75);
  Yast_linearizeYbinding_index_setter = T74;
  T78 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_140 = YPmet(FUNCODEREF(fun_140),YPfalse,T78,ENVNUL);
  T79 = fun_140;
  CALLN(CHKREF(YPslot),5,CHKREF(Yast_linearizeYLrenamed_local_bindingG),CHKREF(Yast_linearizeYbinding_index),CHKREF(Yast_linearizeYbinding_index_setter),CHKREF(YLanyG),T79);
  Yast_linearizeYTrenaming_bindings_counterT = YPint((P)0);
  lit_129 = YPPsym((P)"new-renamed-binding");
  T80 = YPsig(YPPlist(1,CHKREF(lit_102)),YPPlist(1,CHKREF(YastYLlocal_bindingG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_new_renamed_binding_141 = YPmet(FUNCODEREF(fun_new_renamed_binding_141),CHKREF(lit_129),T80,ENVNUL);
  T84 = BOUNDP(Yast_linearizeYnew_renamed_binding);
  if (T84 != YPfalse) {
    T83 = CHKREF(Yast_linearizeYnew_renamed_binding);
  } else {
    T83 = YPfalse;
  }
  T82 = fun_new_renamed_binding_141;
  T81 = CALL2(CHKREF(YPdefine_method),T83,T82);
  Yast_linearizeYnew_renamed_binding = T81;
  lit_130 = YPPsym((P)"register-allocate!");
  T86 = YPsig(YPPlist(1,CHKREF(lit_120)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_142 = YPmet(FUNCODEREF(fun_142),YPfalse,T86,ENVNUL);
  T85 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YastYLprogramG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_register_allocateX_143 = YPmet(FUNCODEREF(fun_register_allocateX_143),CHKREF(lit_130),T85,ENVNUL);
  T90 = BOUNDP(Yast_linearizeYregister_allocateX);
  if (T90 != YPfalse) {
    T89 = CHKREF(Yast_linearizeYregister_allocateX);
  } else {
    T89 = YPfalse;
  }
  T88 = fun_register_allocateX_143;
  T87 = CALL2(CHKREF(YPdefine_method),T89,T88);
  Yast_linearizeYregister_allocateX = T87;
  lit_131 = YPPsym((P)"allocate-register");
  lit_132 = YPPsym((P)"val?");
  T91 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_54),CHKREF(lit_132)),YPPlist(3,CHKREF(YastYLcomputed_programG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_allocate_register_144 = YPmet(FUNCODEREF(fun_allocate_register_144),CHKREF(lit_131),T91,ENVNUL);
  T95 = BOUNDP(Yast_linearizeYallocate_register);
  if (T95 != YPfalse) {
    T94 = CHKREF(Yast_linearizeYallocate_register);
  } else {
    T94 = YPfalse;
  }
  T93 = fun_allocate_register_144;
  T92 = CALL2(CHKREF(YPdefine_method),T94,T93);
  Yast_linearizeYallocate_register = T92;
  lit_133 = YPPsym((P)"collect-registers!");
  T96 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_54),CHKREF(lit_132)),YPPlist(3,CHKREF(YastYLcomputed_programG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_collect_registersX_145 = YPmet(FUNCODEREF(fun_collect_registersX_145),CHKREF(lit_133),T96,ENVNUL);
  T100 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T100 != YPfalse) {
    T99 = CHKREF(Yast_linearizeYcollect_registersX);
  } else {
    T99 = YPfalse;
  }
  T98 = fun_collect_registersX_145;
  T97 = CALL2(CHKREF(YPdefine_method),T99,T98);
  Yast_linearizeYcollect_registersX = T97;
  T102 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_146 = YPmet(FUNCODEREF(fun_loop_146),CHKREF(lit_20),T102,ENVNUL);
  T101 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_54),CHKREF(lit_132)),YPPlist(3,CHKREF(YastYLsequentialG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_collect_registersX_147 = YPmet(FUNCODEREF(fun_collect_registersX_147),CHKREF(lit_133),T101,ENVNUL);
  T106 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T106 != YPfalse) {
    T105 = CHKREF(Yast_linearizeYcollect_registersX);
  } else {
    T105 = YPfalse;
  }
  T104 = fun_collect_registersX_147;
  T103 = CALL2(CHKREF(YPdefine_method),T105,T104);
  Yast_linearizeYcollect_registersX = T103;
  T107 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_54),CHKREF(lit_132)),YPPlist(3,CHKREF(YastYLpassive_programG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_collect_registersX_148 = YPmet(FUNCODEREF(fun_collect_registersX_148),CHKREF(lit_133),T107,ENVNUL);
  T111 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T111 != YPfalse) {
    T110 = CHKREF(Yast_linearizeYcollect_registersX);
  } else {
    T110 = YPfalse;
  }
  T109 = fun_collect_registersX_148;
  T108 = CALL2(CHKREF(YPdefine_method),T110,T109);
  Yast_linearizeYcollect_registersX = T108;
  T113 = YPsig(YPPlist(1,CHKREF(lit_120)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_149 = YPmet(FUNCODEREF(fun_149),YPfalse,T113,ENVNUL);
  T112 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_54),CHKREF(lit_132)),YPPlist(3,CHKREF(Yast_linearizeYLtop_level_formG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_collect_registersX_150 = YPmet(FUNCODEREF(fun_collect_registersX_150),CHKREF(lit_133),T112,ENVNUL);
  T117 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T117 != YPfalse) {
    T116 = CHKREF(Yast_linearizeYcollect_registersX);
  } else {
    T116 = YPfalse;
  }
  T115 = fun_collect_registersX_150;
  T114 = CALL2(CHKREF(YPdefine_method),T116,T115);
  Yast_linearizeYcollect_registersX = T114;
  T118 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_54),CHKREF(lit_132)),YPPlist(3,CHKREF(Yast_linearizeYLflat_functionG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_collect_registersX_151 = YPmet(FUNCODEREF(fun_collect_registersX_151),CHKREF(lit_133),T118,ENVNUL);
  T122 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T122 != YPfalse) {
    T121 = CHKREF(Yast_linearizeYcollect_registersX);
  } else {
    T121 = YPfalse;
  }
  T120 = fun_collect_registersX_151;
  T119 = CALL2(CHKREF(YPdefine_method),T121,T120);
  Yast_linearizeYcollect_registersX = T119;
  T123 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_54),CHKREF(lit_132)),YPPlist(3,CHKREF(Yast_linearizeYLprimitive_definitionG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_collect_registersX_152 = YPmet(FUNCODEREF(fun_collect_registersX_152),CHKREF(lit_133),T123,ENVNUL);
  T127 = BOUNDP(Yast_linearizeYcollect_registersX);
  if (T127 != YPfalse) {
    T126 = CHKREF(Yast_linearizeYcollect_registersX);
  } else {
    T126 = YPfalse;
  }
  T125 = fun_collect_registersX_152;
  T124 = CALL2(CHKREF(YPdefine_method),T126,T125);
  Yast_linearizeYcollect_registersX = T124;
  T128 = YPfalse;
  return T128;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_runtime;
extern MODULE_INFO module_info_ast;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {&module_info_macros},
  {&module_info_runtime},
  {&module_info_ast},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"add", &module_info_runtime, "add"},
  {"quote", &module_info_boot, "quote"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"binding-global-box", &module_info_ast, "binding-global-box"},
  {"%i?", &module_info_boot, "%i?"},
  {"%fb", &module_info_boot, "%fb"},
  {"elt", &module_info_runtime, "elt"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"<sequential>", &module_info_ast, "<sequential>"},
  {"<unwind-protect>", &module_info_ast, "<unwind-protect>"},
  {"<num>", &module_info_boot, "<num>"},
  {"from-below-by", &module_info_runtime, "from-below-by"},
  {"<fab-list>", &module_info_ast, "<fab-list>"},
  {"fun", &module_info_boot, "fun"},
  {"binding-dynamic-extent?", &module_info_ast, "binding-dynamic-extent?"},
  {"ds", &module_info_boot, "ds"},
  {"elt-setter", &module_info_runtime, "elt-setter"},
  {"identity", &module_info_runtime, "identity"},
  {"from", &module_info_runtime, "from"},
  {"binding-type-setter", &module_info_ast, "binding-type-setter"},
  {"logbit?", &module_info_runtime, "logbit?"},
  {"fix-let-bindings", &module_info_ast, "fix-let-bindings"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"%bb", &module_info_boot, "%bb"},
  {"%f+", &module_info_boot, "%f+"},
  {"char->ascii", &module_info_runtime, "char->ascii"},
  {"<module-binding>", &module_info_ast, "<module-binding>"},
  {"assignment-binding", &module_info_ast, "assignment-binding"},
  {"function-nary?", &module_info_ast, "function-nary?"},
  {"bound?", &module_info_boot, "bound?"},
  {"nul", &module_info_boot, "nul"},
  {"~==", &module_info_runtime, "~=="},
  {"<raw-constant>", &module_info_ast, "<raw-constant>"},
  {"keys", &module_info_runtime, "keys"},
  {"collected", &module_info_macros, "collected"},
  {"%su", &module_info_boot, "%su"},
  {"%i&", &module_info_boot, "%i&"},
  {"set-module-environments", &module_info_ast, "set-module-environments"},
  {"monitor-info", &module_info_ast, "monitor-info"},
  {"even?", &module_info_runtime, "even?"},
  {"str", &module_info_runtime, "str"},
  {"signature-bindings-setter", &module_info_ast, "signature-bindings-setter"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"call-with-string-input-port", &module_info_runtime, "call-with-string-input-port"},
  {"fix-let-arguments", &module_info_ast, "fix-let-arguments"},
  {"%cu", &module_info_boot, "%cu"},
  {"var-type", &module_info_macros, "var-type"},
  {"binding-locative", &module_info_ast, "binding-locative"},
  {"%c<", &module_info_boot, "%c<"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"popf", &module_info_macros, "popf"},
  {"describe-handler", &module_info_runtime, "describe-handler"},
  {"len", &module_info_runtime, "len"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"do-module-loader-modules", &module_info_ast, "do-module-loader-modules"},
  {"$proto-boot-module-name", &module_info_ast, "$proto-boot-module-name"},
  {"%i+", &module_info_boot, "%i+"},
  {"%snul", &module_info_boot, "%snul"},
  {"build-condition-for-handler-interactively", &module_info_runtime, "build-condition-for-handler-interactively"},
  {"next-method", &module_info_macros, "next-method"},
  {"<union>", &module_info_boot, "<union>"},
  {"from-to", &module_info_runtime, "from-to"},
  {"alternative-alternant", &module_info_ast, "alternative-alternant"},
  {"slot", &module_info_boot, "slot"},
  {"format-to-string", &module_info_runtime, "format-to-string"},
  {"<ast-primitive>", &module_info_ast, "<ast-primitive>"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"free-implemented-foreign-bindings", &module_info_ast, "free-implemented-foreign-bindings"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"char-ready?", &module_info_runtime, "char-ready?"},
  {"signature-names-setter", &module_info_ast, "signature-names-setter"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"str-to-num", &module_info_runtime, "str-to-num"},
  {"in", &module_info_runtime, "in"},
  {"to-str", &module_info_runtime, "to-str"},
  {"as-lowercase", &module_info_runtime, "as-lowercase"},
  {"loc", &module_info_boot, "loc"},
  {"fix-let-bindings-setter", &module_info_ast, "fix-let-bindings-setter"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"<log>", &module_info_boot, "<log>"},
  {"tup", &module_info_macros, "tup"},
  {"binding-info", &module_info_ast, "binding-info"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"current-gc-state", &module_info_runtime, "current-gc-state"},
  {"application-binding", &module_info_ast, "application-binding"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"list", &module_info_runtime, "list"},
  {"tail", &module_info_boot, "tail"},
  {"any?", &module_info_runtime, "any?"},
  {"<program>", &module_info_ast, "<program>"},
  {"<ast-method>", &module_info_ast, "<ast-method>"},
  {"all?", &module_info_runtime, "all?"},
  {"<range>", &module_info_runtime, "<range>"},
  {"%im", &module_info_boot, "%im"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"binding-kind", &module_info_ast, "binding-kind"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"<ast-generic>", &module_info_ast, "<ast-generic>"},
  {"%selt", &module_info_boot, "%selt"},
  {"function-bindings", &module_info_ast, "function-bindings"},
  {"%f=", &module_info_boot, "%f="},
  {"fill", &module_info_runtime, "fill"},
  {"close-output-port", &module_info_runtime, "close-output-port"},
  {"%sb", &module_info_boot, "%sb"},
  {"<ast-macro-definition>", &module_info_ast, "<ast-macro-definition>"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"==", &module_info_macros, "=="},
  {"1st", &module_info_runtime, "1st"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"module-name", &module_info_ast, "module-name"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"<string-port>", &module_info_runtime, "<string-port>"},
  {"ascii-whitespaces", &module_info_runtime, "ascii-whitespaces"},
  {"<port>", &module_info_runtime, "<port>"},
  {"<any>", &module_info_boot, "<any>"},
  {"pop", &module_info_runtime, "pop"},
  {"vec", &module_info_runtime, "vec"},
  {"numeric?", &module_info_runtime, "numeric?"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"function-debug-name", &module_info_ast, "function-debug-name"},
  {"<restart>", &module_info_runtime, "<restart>"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"for", &module_info_macros, "for"},
  {"assoc-value", &module_info_runtime, "assoc-value"},
  {"load-module", &module_info_ast, "load-module"},
  {"<list>", &module_info_runtime, "<list>"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"<file-port>", &module_info_runtime, "<file-port>"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"var-name", &module_info_macros, "var-name"},
  {"assocq", &module_info_runtime, "assocq"},
  {"<local-binding>", &module_info_ast, "<local-binding>"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"function-signature-setter", &module_info_ast, "function-signature-setter"},
  {"alter", &module_info_runtime, "alter"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"<constant>", &module_info_ast, "<constant>"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"%pair", &module_info_boot, "%pair"},
  {"df", &module_info_boot, "df"},
  {"pick", &module_info_runtime, "pick"},
  {"<str-tab>", &module_info_runtime, "<str-tab>"},
  {"app-args", &module_info_runtime, "app-args"},
  {"isa?", &module_info_boot, "isa?"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"from-by", &module_info_runtime, "from-by"},
  {"select", &module_info_macros, "select"},
  {"reference-binding", &module_info_ast, "reference-binding"},
  {"<static-global-environment>", &module_info_ast, "<static-global-environment>"},
  {"<input-port>", &module_info_runtime, "<input-port>"},
  {"type-object", &module_info_boot, "type-object"},
  {"del-keys", &module_info_runtime, "del-keys"},
  {"fin", &module_info_boot, "fin"},
  {"init-environment-for-eval", &module_info_ast, "init-environment-for-eval"},
  {"rep", &module_info_boot, "rep"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"objectify", &module_info_ast, "objectify"},
  {"2nd", &module_info_runtime, "2nd"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"module-exports", &module_info_ast, "module-exports"},
  {"%iu", &module_info_boot, "%iu"},
  {"/", &module_info_runtime, "/"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"<step>", &module_info_runtime, "<step>"},
  {"program-register", &module_info_ast, "program-register"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"<compile-time>", &module_info_ast, "<compile-time>"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"<fix-let>", &module_info_ast, "<fix-let>"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"truncate", &module_info_runtime, "truncate"},
  {"<application>", &module_info_ast, "<application>"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"pos", &module_info_runtime, "pos"},
  {"runtime-environment", &module_info_ast, "runtime-environment"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"sequentialize", &module_info_ast, "sequentialize"},
  {"not", &module_info_boot, "not"},
  {"binding-type", &module_info_ast, "binding-type"},
  {"dlet", &module_info_macros, "dlet"},
  {"min", &module_info_runtime, "min"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"del-dups", &module_info_runtime, "del-dups"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"<real-reference>", &module_info_ast, "<real-reference>"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"fabs", &module_info_runtime, "fabs"},
  {"<arguments>", &module_info_ast, "<arguments>"},
  {"do3", &module_info_runtime, "do3"},
  {"<module>", &module_info_ast, "<module>"},
  {"odd?", &module_info_runtime, "odd?"},
  {"locals-functions", &module_info_ast, "locals-functions"},
  {"use", &module_info_boot, "use"},
  {"from-above-by", &module_info_runtime, "from-above-by"},
  {"assq", &module_info_runtime, "assq"},
  {"len-setter", &module_info_runtime, "len-setter"},
  {"dec", &module_info_macros, "dec"},
  {"id-hash", &module_info_runtime, "id-hash"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"collect", &module_info_macros, "collect"},
  {"lab", &module_info_boot, "lab"},
  {"assert", &module_info_macros, "assert"},
  {"table-shrink-threshold", &module_info_runtime, "table-shrink-threshold"},
  {"%i-", &module_info_boot, "%i-"},
  {"signature-specs", &module_info_ast, "signature-specs"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"assoc", &module_info_runtime, "assoc"},
  {"neg", &module_info_runtime, "neg"},
  {"alternative-consequent", &module_info_ast, "alternative-consequent"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"ini-state", &module_info_runtime, "ini-state"},
  {"isa", &module_info_boot, "isa"},
  {"init-ast", &module_info_ast, "init-ast"},
  {"application-arguments", &module_info_ast, "application-arguments"},
  {"as-uppercase", &module_info_runtime, "as-uppercase"},
  {"write-string", &module_info_runtime, "write-string"},
  {"find-environment-module", &module_info_ast, "find-environment-module"},
  {"load-in", &module_info_ast, "load-in"},
  {"<class>", &module_info_boot, "<class>"},
  {"table-growth-threshold", &module_info_runtime, "table-growth-threshold"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"monitor-type", &module_info_ast, "monitor-type"},
  {"open-input-file", &module_info_runtime, "open-input-file"},
  {"set", &module_info_boot, "set"},
  {"eof-object?", &module_info_runtime, "eof-object?"},
  {"from-below", &module_info_runtime, "from-below"},
  {"case-insensitive-string-equal", &module_info_runtime, "case-insensitive-string-equal"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"fix-let-types-setter", &module_info_ast, "fix-let-types-setter"},
  {"fix-let-arguments-setter", &module_info_ast, "fix-let-arguments-setter"},
  {"type-error", &module_info_boot, "type-error"},
  {"push-last!", &module_info_runtime, "push-last!"},
  {"fin-state?", &module_info_runtime, "fin-state?"},
  {"error", &module_info_boot, "error"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"or", &module_info_macros, "or"},
  {"<regular-application>", &module_info_ast, "<regular-application>"},
  {"call-with-input-file", &module_info_runtime, "call-with-input-file"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"<type>", &module_info_boot, "<type>"},
  {"reference-frame-offset", &module_info_ast, "reference-frame-offset"},
  {"%velt", &module_info_boot, "%velt"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"lsh", &module_info_runtime, "lsh"},
  {"function-body-setter", &module_info_ast, "function-body-setter"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"alternative-condition", &module_info_ast, "alternative-condition"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"<runtime-assignment>", &module_info_ast, "<runtime-assignment>"},
  {"pair", &module_info_macros, "pair"},
  {"to-digit", &module_info_runtime, "to-digit"},
  {"locals-bindings-setter", &module_info_ast, "locals-bindings-setter"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"<buf>", &module_info_runtime, "<buf>"},
  {"-", &module_info_runtime, "-"},
  {"fix-let-body", &module_info_ast, "fix-let-body"},
  {"locative-value", &module_info_runtime, "locative-value"},
  {"binding-module-name", &module_info_ast, "binding-module-name"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"neg?", &module_info_runtime, "neg?"},
  {"signature-nary?", &module_info_ast, "signature-nary?"},
  {"call-with-output-file", &module_info_runtime, "call-with-output-file"},
  {"<definition>", &module_info_ast, "<definition>"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"<module-loader>", &module_info_ast, "<module-loader>"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"del", &module_info_runtime, "del"},
  {"bound?-reference", &module_info_ast, "bound?-reference"},
  {"fapply", &module_info_boot, "fapply"},
  {"<bind-exit>", &module_info_ast, "<bind-exit>"},
  {"%fu", &module_info_boot, "%fu"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"head", &module_info_boot, "head"},
  {"call-with-string-output-port", &module_info_runtime, "call-with-string-output-port"},
  {"empty?", &module_info_macros, "empty?"},
  {"gensym", &module_info_macros, "gensym"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"read", &module_info_runtime, "read"},
  {"<global-assignment>", &module_info_ast, "<global-assignment>"},
  {"dv", &module_info_boot, "dv"},
  {"application-known?-setter", &module_info_ast, "application-known?-setter"},
  {"table-growth-factor", &module_info_runtime, "table-growth-factor"},
  {"ceiling/", &module_info_runtime, "ceiling/"},
  {"now-key", &module_info_runtime, "now-key"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"application-known?", &module_info_ast, "application-known?"},
  {"<incongruent-method-error>", &module_info_runtime, "<incongruent-method-error>"},
  {"%raw", &module_info_boot, "%raw"},
  {"%i^", &module_info_boot, "%i^"},
  {"unless", &module_info_macros, "unless"},
  {"round", &module_info_runtime, "round"},
  {"compile-time-program", &module_info_ast, "compile-time-program"},
  {"report-undefined-global-bindings", &module_info_ast, "report-undefined-global-bindings"},
  {"floor/", &module_info_runtime, "floor/"},
  {"<local-assignment>", &module_info_ast, "<local-assignment>"},
  {"compose", &module_info_runtime, "compose"},
  {"<global-box>", &module_info_ast, "<global-box>"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"program-register-setter", &module_info_ast, "program-register-setter"},
  {"do2", &module_info_runtime, "do2"},
  {"reference-frame-number", &module_info_ast, "reference-frame-number"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"<alternative>", &module_info_ast, "<alternative>"},
  {"dc", &module_info_boot, "dc"},
  {"sub", &module_info_runtime, "sub"},
  {"now-elt", &module_info_runtime, "now-elt"},
  {"%c=", &module_info_boot, "%c="},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"function-binding", &module_info_ast, "function-binding"},
  {"dp", &module_info_boot, "dp"},
  {"<predefined-application>", &module_info_ast, "<predefined-application>"},
  {"now-elt-setter", &module_info_runtime, "now-elt-setter"},
  {"bind-exit-main-fun", &module_info_ast, "bind-exit-main-fun"},
  {"signature-value-setter", &module_info_ast, "signature-value-setter"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"<bound?>", &module_info_ast, "<bound?>"},
  {"round/", &module_info_runtime, "round/"},
  {"num-to-str", &module_info_runtime, "num-to-str"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"<tab>", &module_info_runtime, "<tab>"},
  {"address-of", &module_info_runtime, "address-of"},
  {"binding-global-box-setter", &module_info_ast, "binding-global-box-setter"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"ash", &module_info_runtime, "ash"},
  {"case-insensitive-string-hash", &module_info_runtime, "case-insensitive-string-hash"},
  {"if", &module_info_boot, "if"},
  {"<str>", &module_info_boot, "<str>"},
  {"flo-bits", &module_info_runtime, "flo-bits"},
  {"del-key", &module_info_runtime, "del-key"},
  {"monitor-test", &module_info_ast, "monitor-test"},
  {"<file-output-port>", &module_info_runtime, "<file-output-port>"},
  {"object-class", &module_info_boot, "object-class"},
  {"nxt-state", &module_info_runtime, "nxt-state"},
  {"from-above", &module_info_runtime, "from-above"},
  {"%f/", &module_info_boot, "%f/"},
  {"write-char", &module_info_runtime, "write-char"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"signature-names", &module_info_ast, "signature-names"},
  {"nil", &module_info_boot, "nil"},
  {"%call-next-method", &module_info_boot, "%call-next-method"},
  {"table-protocol", &module_info_runtime, "table-protocol"},
  {"newline", &module_info_runtime, "newline"},
  {"abs", &module_info_runtime, "abs"},
  {"format", &module_info_runtime, "format"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"assqn", &module_info_runtime, "assqn"},
  {"dm", &module_info_boot, "dm"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"<string-output-port>", &module_info_runtime, "<string-output-port>"},
  {"assignment-reference", &module_info_ast, "assignment-reference"},
  {"*", &module_info_runtime, "*"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"%with-monitor", &module_info_runtime, "%with-monitor"},
  {"+", &module_info_runtime, "+"},
  {"truncate/", &module_info_runtime, "truncate/"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"and", &module_info_macros, "and"},
  {"curry", &module_info_runtime, "curry"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"objectify-quotation", &module_info_ast, "objectify-quotation"},
  {"seq", &module_info_boot, "seq"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"read-char", &module_info_runtime, "read-char"},
  {"3rd", &module_info_runtime, "3rd"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"%f<", &module_info_boot, "%f<"},
  {"try", &module_info_boot, "try"},
  {"do-static-global-bindings", &module_info_ast, "do-static-global-bindings"},
  {"%vec", &module_info_boot, "%vec"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"max", &module_info_runtime, "max"},
  {"eof-object", &module_info_runtime, "eof-object"},
  {"<monitor>", &module_info_ast, "<monitor>"},
  {"def-list", &module_info_ast, "def-list"},
  {"floor", &module_info_runtime, "floor"},
  {"ast-define-binding", &module_info_ast, "ast-define-binding"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"environment-uses-modules", &module_info_ast, "environment-uses-modules"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"modulo", &module_info_runtime, "modulo"},
  {"default", &module_info_runtime, "default"},
  {"%i=", &module_info_boot, "%i="},
  {"<flat>", &module_info_boot, "<flat>"},
  {"global-box-value-setter", &module_info_ast, "global-box-value-setter"},
  {"%cb", &module_info_boot, "%cb"},
  {"unwind-protect-cleanup-thunk", &module_info_ast, "unwind-protect-cleanup-thunk"},
  {"find-key", &module_info_runtime, "find-key"},
  {"reduce+", &module_info_runtime, "reduce+"},
  {"<met>", &module_info_boot, "<met>"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"map", &module_info_macros, "map"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"application-function", &module_info_ast, "application-function"},
  {"$permanent-hash-state", &module_info_runtime, "$permanent-hash-state"},
  {"nul?", &module_info_runtime, "nul?"},
  {"empty", &module_info_runtime, "empty"},
  {"do-named-static-global-bindings", &module_info_ast, "do-named-static-global-bindings"},
  {"binding-value-setter", &module_info_ast, "binding-value-setter"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"port-index", &module_info_runtime, "port-index"},
  {"<local-reference>", &module_info_ast, "<local-reference>"},
  {"lst", &module_info_boot, "lst"},
  {"reference-called-function?-setter", &module_info_ast, "reference-called-function?-setter"},
  {"monitor-handler", &module_info_ast, "monitor-handler"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"first-then", &module_info_runtime, "first-then"},
  {"module-binding", &module_info_ast, "module-binding"},
  {"remove-modules-by-name!", &module_info_ast, "remove-modules-by-name!"},
  {"remainder", &module_info_runtime, "remainder"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"logior", &module_info_runtime, "logior"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"<assocs>", &module_info_runtime, "<assocs>"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"*print-base*", &module_info_runtime, "*print-base*"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"<=", &module_info_runtime, "<="},
  {"function-value", &module_info_ast, "function-value"},
  {"=", &module_info_runtime, "="},
  {"map-keyed", &module_info_runtime, "map-keyed"},
  {"binding-name", &module_info_ast, "binding-name"},
  {"map2", &module_info_runtime, "map2"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"<binding>", &module_info_ast, "<binding>"},
  {"lowercase?", &module_info_runtime, "lowercase?"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"pushf", &module_info_macros, "pushf"},
  {"<passive-program>", &module_info_ast, "<passive-program>"},
  {"<reference>", &module_info_ast, "<reference>"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"pos?", &module_info_runtime, "pos?"},
  {"%isa", &module_info_boot, "%isa"},
  {"locals-body", &module_info_ast, "locals-body"},
  {"%f-", &module_info_boot, "%f-"},
  {"<string-input-port>", &module_info_runtime, "<string-input-port>"},
  {"false-or", &module_info_runtime, "false-or"},
  {"%ib", &module_info_boot, "%ib"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"fab-p2c-module", &module_info_ast, "fab-p2c-module"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"<", &module_info_runtime, "<"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"%lu", &module_info_boot, "%lu"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"class-name", &module_info_boot, "class-name"},
  {"logxor", &module_info_runtime, "logxor"},
  {"always", &module_info_runtime, "always"},
  {"unwind-protect-protected-thunk", &module_info_ast, "unwind-protect-protected-thunk"},
  {"locals-bindings", &module_info_ast, "locals-bindings"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"<output-port>", &module_info_runtime, "<output-port>"},
  {"sub-setter", &module_info_runtime, "sub-setter"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"push", &module_info_runtime, "push"},
  {"%i*", &module_info_boot, "%i*"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"open-output-file", &module_info_runtime, "open-output-file"},
  {"buf", &module_info_runtime, "buf"},
  {"reduce", &module_info_runtime, "reduce"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"invoke-handler-interactively", &module_info_runtime, "invoke-handler-interactively"},
  {"~=", &module_info_runtime, "~="},
  {"<global-reference>", &module_info_ast, "<global-reference>"},
  {"module-loader-module-type", &module_info_ast, "module-loader-module-type"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"def-programs", &module_info_ast, "def-programs"},
  {"cat", &module_info_macros, "cat"},
  {"probe-module", &module_info_ast, "probe-module"},
  {">", &module_info_runtime, ">"},
  {"last", &module_info_runtime, "last"},
  {"logand", &module_info_runtime, "logand"},
  {"binding-dynamic-extent?-setter", &module_info_ast, "binding-dynamic-extent?-setter"},
  {"<runtime-reference>", &module_info_ast, "<runtime-reference>"},
  {"fix-let-body-setter", &module_info_ast, "fix-let-body-setter"},
  {"binding-info-setter", &module_info_ast, "binding-info-setter"},
  {"t<", &module_info_runtime, "t<"},
  {"module-name-to-relpath", &module_info_ast, "module-name-to-relpath"},
  {"<col>", &module_info_boot, "<col>"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"from-to-by", &module_info_runtime, "from-to-by"},
  {"install-initial-bindings", &module_info_ast, "install-initial-bindings"},
  {"binding-mutable?", &module_info_ast, "binding-mutable?"},
  {"apply", &module_info_boot, "apply"},
  {"do", &module_info_runtime, "do"},
  {"ast-evaluate", &module_info_ast, "ast-evaluate"},
  {"module-target-environment", &module_info_ast, "module-target-environment"},
  {"force-output", &module_info_runtime, "force-output"},
  {"%f*", &module_info_boot, "%f*"},
  {"fab", &module_info_runtime, "fab"},
  {"reference-called-function?", &module_info_ast, "reference-called-function?"},
  {"ceiling", &module_info_runtime, "ceiling"},
  {"$proto-runtime-module-name", &module_info_ast, "$proto-runtime-module-name"},
  {"rev!", &module_info_runtime, "rev!"},
  {"lognot", &module_info_runtime, "lognot"},
  {"as", &module_info_runtime, "as"},
  {"sig", &module_info_runtime, "sig"},
  {"out", &module_info_runtime, "out"},
  {"signature-bindings", &module_info_ast, "signature-bindings"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"assocs-test", &module_info_runtime, "assocs-test"},
  {"ascii-limit", &module_info_runtime, "ascii-limit"},
  {"assignment-form", &module_info_ast, "assignment-form"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"t=", &module_info_runtime, "t="},
  {"subtype?", &module_info_boot, "subtype?"},
  {"case", &module_info_macros, "case"},
  {"rev", &module_info_runtime, "rev"},
  {"constant-value", &module_info_ast, "constant-value"},
  {"locals-functions-setter", &module_info_ast, "locals-functions-setter"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"export", &module_info_boot, "export"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"binding-value", &module_info_ast, "binding-value"},
  {"%it/", &module_info_boot, "%it/"},
  {"signature-value", &module_info_ast, "signature-value"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"mif", &module_info_boot, "mif"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"build-condition-interactively", &module_info_runtime, "build-condition-interactively"},
  {"%i!", &module_info_boot, "%i!"},
  {"<file-input-port>", &module_info_runtime, "<file-input-port>"},
  {"function-debug-name-setter", &module_info_ast, "function-debug-name-setter"},
  {"<programs>", &module_info_ast, "<programs>"},
  {"%iv", &module_info_boot, "%iv"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"function-body", &module_info_ast, "function-body"},
  {"%slot", &module_info_boot, "%slot"},
  {"<computed-program>", &module_info_ast, "<computed-program>"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"locals-body-setter", &module_info_ast, "locals-body-setter"},
  {"collecting", &module_info_macros, "collecting"},
  {"uppercase?", &module_info_runtime, "uppercase?"},
  {"%i<", &module_info_boot, "%i<"},
  {"do-keyed", &module_info_runtime, "do-keyed"},
  {"%slen", &module_info_boot, "%slen"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"fix-let-types", &module_info_ast, "fix-let-types"},
  {"t+", &module_info_runtime, "t+"},
  {"cat2", &module_info_runtime, "cat2"},
  {"copy-state", &module_info_runtime, "copy-state"},
  {"mem?", &module_info_runtime, "mem?"},
  {"signature-specs-setter", &module_info_ast, "signature-specs-setter"},
  {"zero?", &module_info_runtime, "zero?"},
  {"alphabetic?", &module_info_runtime, "alphabetic?"},
  {"signature-nary?-setter", &module_info_ast, "signature-nary?-setter"},
  {"when", &module_info_macros, "when"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"env-object-name", &module_info_ast, "env-object-name"},
  {"<ast-function>", &module_info_ast, "<ast-function>"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"list-handlers", &module_info_runtime, "list-handlers"},
  {"<locals>", &module_info_ast, "<locals>"},
  {"dss", &module_info_boot, "dss"},
  {"function-signature", &module_info_ast, "function-signature"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"cat!", &module_info_runtime, "cat!"},
  {"monitor-main-thunk", &module_info_ast, "monitor-main-thunk"},
  {"application-tail?", &module_info_ast, "application-tail?"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"ct", &module_info_boot, "ct"},
  {"type-class", &module_info_boot, "type-class"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"module-syntax-environment", &module_info_ast, "module-syntax-environment"},
  {"<ast-signature>", &module_info_ast, "<ast-signature>"},
  {"let", &module_info_boot, "let"},
  {"<error>", &module_info_runtime, "<error>"},
  {"binding-native-to?", &module_info_ast, "binding-native-to?"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"close-input-port", &module_info_runtime, "close-input-port"},
  {"peek-char", &module_info_runtime, "peek-char"},
  {">=", &module_info_runtime, ">="},
  {"<int>", &module_info_boot, "<int>"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"port-contents", &module_info_runtime, "port-contents"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"global-box-value", &module_info_ast, "global-box-value"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"%ft", &module_info_boot, "%ft"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"pop-last!", &module_info_runtime, "pop-last!"},
  {"<ast-primitive-definition>", &module_info_ast, "<ast-primitive-definition>"},
  {"dg", &module_info_boot, "dg"},
  {"add!", &module_info_runtime, "add!"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"<map>", &module_info_runtime, "<map>"},
  {"%str", &module_info_boot, "%str"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"inc", &module_info_macros, "inc"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"<flat-function>", &Yast_linearizeYLflat_functionG},
  {"form-program-setter", &Yast_linearizeYform_program_setter},
  {"gather-temporaries!", &Yast_linearizeYgather_temporariesX},
  {"---main-2---", NULL},
  {"<box-read>", &Yast_linearizeYLbox_readG},
  {"program-quotations", &Yast_linearizeYprogram_quotations},
  {"closure-creation-index-setter", &Yast_linearizeYclosure_creation_index_setter},
  {"function-temporaries-setter", &Yast_linearizeYfunction_temporaries_setter},
  {"program-form-setter", &Yast_linearizeYprogram_form_setter},
  {"closure-creation-free", &Yast_linearizeYclosure_creation_free},
  {"boxify-mutable-bindings", &Yast_linearizeYboxify_mutable_bindings},
  {"lift!", &Yast_linearizeYliftX},
  {"lift-procedures!", &Yast_linearizeYlift_proceduresX},
  {"reference-self?", &Yast_linearizeYreference_selfQ},
  {"reference-offset", &Yast_linearizeYreference_offset},
  {"function-temporaries", &Yast_linearizeYfunction_temporaries},
  {"program-form", &Yast_linearizeYprogram_form},
  {"insert-box!", &Yast_linearizeYinsert_boxX},
  {"program-quotations-setter", &Yast_linearizeYprogram_quotations_setter},
  {"extract!", &Yast_linearizeYextractX},
  {"collect-temporaries!", &Yast_linearizeYcollect_temporariesX},
  {"<renamed-local-binding>", &Yast_linearizeYLrenamed_local_bindingG},
  {"sexp->object", &Yast_linearizeYsexp_Gobject},
  {"<box-write>", &Yast_linearizeYLbox_writeG},
  {"<primitive-definition>", &Yast_linearizeYLprimitive_definitionG},
  {"form-definitions", &Yast_linearizeYform_definitions},
  {"allocate-register", &Yast_linearizeYallocate_register},
  {"box-reference-setter", &Yast_linearizeYbox_reference_setter},
  {"function-free", &Yast_linearizeYfunction_free},
  {"<top-level-form>", &Yast_linearizeYLtop_level_formG},
  {"*renaming-bindings-counter*", &Yast_linearizeYTrenaming_bindings_counterT},
  {"function-self-recursive?", &Yast_linearizeYfunction_self_recursiveQ},
  {"<free-environment>", &Yast_linearizeYLfree_environmentG},
  {"closure-creation-bindings-setter", &Yast_linearizeYclosure_creation_bindings_setter},
  {"analyze-dynamic-extent", &Yast_linearizeYanalyze_dynamic_extent},
  {"closure-creation-index", &Yast_linearizeYclosure_creation_index},
  {"do-call-upgrades!", &Yast_linearizeYdo_call_upgradesX},
  {"function-index-setter", &Yast_linearizeYfunction_index_setter},
  {"do-do-dynamic-extent!", &Yast_linearizeYdo_do_dynamic_extentX},
  {"<free-reference>", &Yast_linearizeYLfree_referenceG},
  {"register-allocate!", &Yast_linearizeYregister_allocateX},
  {"binding-index-setter", &Yast_linearizeYbinding_index_setter},
  {"function-registers", &Yast_linearizeYfunction_registers},
  {"free-environment", &Yast_linearizeYfree_environment},
  {"function-self-recursive?-setter", &Yast_linearizeYfunction_self_recursiveQ_setter},
  {"unconstrained-type?", &Yast_linearizeYunconstrained_typeQ},
  {"extract-things!", &Yast_linearizeYextract_thingsX},
  {"---main-0---", NULL},
  {"adjoin-free-binding!", &Yast_linearizeYadjoin_free_bindingX},
  {"do-do-call-references!", &Yast_linearizeYdo_do_call_referencesX},
  {"closurize-main!", &Yast_linearizeYclosurize_mainX},
  {"---main-1---", NULL},
  {"<box-creation>", &Yast_linearizeYLbox_creationG},
  {"function-index", &Yast_linearizeYfunction_index},
  {"as-top-level-forms", &Yast_linearizeYas_top_level_forms},
  {"box-form", &Yast_linearizeYbox_form},
  {"reference-offset-setter", &Yast_linearizeYreference_offset_setter},
  {"program-definitions-setter", &Yast_linearizeYprogram_definitions_setter},
  {"box-reference", &Yast_linearizeYbox_reference},
  {"update-walk!", &Yast_linearizeYupdate_walkX},
  {"new-renamed-binding", &Yast_linearizeYnew_renamed_binding},
  {"analyze-calls", &Yast_linearizeYanalyze_calls},
  {"form-definitions-setter", &Yast_linearizeYform_definitions_setter},
  {"analyze-call-references", &Yast_linearizeYanalyze_call_references},
  {"<closure-creation>", &Yast_linearizeYLclosure_creationG},
  {"adjoin-temporary-variables!", &Yast_linearizeYadjoin_temporary_variablesX},
  {"closure-creation-free-setter", &Yast_linearizeYclosure_creation_free_setter},
  {"form-quotations", &Yast_linearizeYform_quotations},
  {"flatten-seqs", &Yast_linearizeYflatten_seqs},
  {"program-definitions", &Yast_linearizeYprogram_definitions},
  {"<flattened-program>", &Yast_linearizeYLflattened_programG},
  {"<function-definition>", &Yast_linearizeYLfunction_definitionG},
  {"form-quotations-setter", &Yast_linearizeYform_quotations_setter},
  {"function-free-setter", &Yast_linearizeYfunction_free_setter},
  {"do-dynamic-extent!", &Yast_linearizeYdo_dynamic_extentX},
  {"do-call-references!", &Yast_linearizeYdo_call_referencesX},
  {"binding-index", &Yast_linearizeYbinding_index},
  {"$free-environment-empty", &Yast_linearizeYDfree_environment_empty},
  {"box-form-setter", &Yast_linearizeYbox_form_setter},
  {"split-program", &Yast_linearizeYsplit_program},
  {"do-do-call-upgrades!", &Yast_linearizeYdo_do_call_upgradesX},
  {"function-registers-setter", &Yast_linearizeYfunction_registers_setter},
  {"closure-creation-bindings", &Yast_linearizeYclosure_creation_bindings},
  {"reference-self?-setter", &Yast_linearizeYreference_selfQ_setter},
  {"collect-registers!", &Yast_linearizeYcollect_registersX},
  {"adjoin-definition!", &Yast_linearizeYadjoin_definitionX},
  {"form-program", &Yast_linearizeYform_program},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<flat-function>", "<flat-function>"},
  {"gather-temporaries!", "gather-temporaries!"},
  {"<box-read>", "<box-read>"},
  {"program-quotations", "program-quotations"},
  {"reference-self?", "reference-self?"},
  {"function-temporaries", "function-temporaries"},
  {"program-form", "program-form"},
  {"<renamed-local-binding>", "<renamed-local-binding>"},
  {"sexp->object", "sexp->object"},
  {"<box-write>", "<box-write>"},
  {"form-definitions", "form-definitions"},
  {"closure-creation-free", "closure-creation-free"},
  {"<top-level-form>", "<top-level-form>"},
  {"box-form", "box-form"},
  {"function-self-recursive?", "function-self-recursive?"},
  {"closure-creation-index", "closure-creation-index"},
  {"<free-reference>", "<free-reference>"},
  {"<box-creation>", "<box-creation>"},
  {"register-allocate!", "register-allocate!"},
  {"function-registers", "function-registers"},
  {"function-self-recursive?-setter", "function-self-recursive?-setter"},
  {"unconstrained-type?", "unconstrained-type?"},
  {"extract-things!", "extract-things!"},
  {"closurize-main!", "closurize-main!"},
  {"function-index", "function-index"},
  {"analyze-dynamic-extent", "analyze-dynamic-extent"},
  {"box-reference", "box-reference"},
  {"reference-offset", "reference-offset"},
  {"analyze-calls", "analyze-calls"},
  {"lift!", "lift!"},
  {"<closure-creation>", "<closure-creation>"},
  {"form-quotations", "form-quotations"},
  {"<free-environment>", "<free-environment>"},
  {"program-definitions", "program-definitions"},
  {"binding-index", "binding-index"},
  {"<primitive-definition>", "<primitive-definition>"},
  {"form-program", "form-program"},
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

  (P)Yast_linearizeY___main_0___();
  (P)Yast_linearizeY___main_1___();
  (P)Yast_linearizeY___main_2___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
