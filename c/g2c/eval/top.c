/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/top */

EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YLclassG,"goo/boot","<class>");
DEF(YevalStopYframe,"eval/top","frame");
EXT(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathY_,"goo/math","-");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
DEF(YevalStopYprompt_for_command_expression,"eval/top","prompt-for-command-expression");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(Yfun_mets,"goo/boot","fun-mets");
DEF(YevalStopYesctst,"eval/top","esctst");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YLintG,"goo/boot","<int>");
DEF(YevalStopYeval_in,"eval/top","eval-in");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
DEF(YevalStopYdo_restart,"eval/top","do-restart");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
DEF(YevalStopYstr_parse,"eval/top","str-parse");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YevalSast_linearizeYunconstrained_typeQ,"eval/ast-linearize","unconstrained-type?");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Ynot,"goo/boot","not");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
EXT(YevalSast_linearizeYcollect_registersX,"eval/ast-linearize","collect-registers!");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YgooSmathYlog,"goo/math","log");
DEF(YevalStopYstr_parse_in,"eval/top","str-parse-in");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooScolsSseqYends_with,"goo/cols/seq","ends-with");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSioSwriteYdisplay,"goo/io/write","display");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
EXT(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooSmathYE,"goo/math","=");
EXT(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
EXT(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YLnumG,"goo/boot","<num>");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooSruntimeYspread,"goo/runtime","spread");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooSmathYatan2,"goo/math","atan2");
DEF(YevalStopYrun,"eval/top","run");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
DEF(YevalStopYtop,"eval/top","top");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
EXT(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
DEF(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
DEF(YevalStopYparse,"eval/top","parse");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YgooScolsScolYany2Q,"goo/cols/col","any2?");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
DEF(YevalStopYcompiled_fileQ,"eval/top","compiled-file?");
EXT(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
DEF(YevalStopYframe_var,"eval/top","frame-var");
EXT(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
EXT(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
EXT(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
EXT(YPprop,"goo/boot","%prop");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
DEF(YevalStopYparse_in,"eval/top","parse-in");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YPisa,"goo/boot","%isa");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(Ytup,"goo/boot","tup");
EXT(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(Ynil,"goo/boot","nil");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYceil,"goo/math","ceil");
DEF(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
EXT(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
DEF(YevalStopYstr_eval,"eval/top","str-eval");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YgooStypesYLproductG,"goo/types","<product>");
DEF(YevalStopYLkeyboard_interruptG,"eval/top","<keyboard-interrupt>");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
EXT(YevalSast_linearizeYupdate_walkX,"eval/ast-linearize","update-walk!");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YLunionG,"goo/boot","<union>");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
DEF(YevalStopYstr_eval_in,"eval/top","str-eval-in");
EXT(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsScolYdo3,"goo/cols/col","do3");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
DEF(YevalStopYsave_image,"eval/top","save-image");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooScolsScolYas_copy,"goo/cols/col","as-copy");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(Ysig_val,"goo/boot","sig-val");
DEF(YevalStopYread_file,"eval/top","read-file");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSmagYGE,"goo/mag",">=");
DEF(YevalStopYauto_run,"eval/top","auto-run");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
EXT(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
EXT(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
DEF(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YLlogG,"goo/boot","<log>");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
EXT(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
EXT(Yprop_owner,"goo/boot","prop-owner");
DEF(YevalStopYPPbottomPPg2c_run,"eval/top","%%bottom%%g2c-run");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSmathYA,"goo/math","+");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(Yerror,"goo/boot","error");
EXT(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YOlst,"goo/boot","@lst");
EXT(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
EXT(YgooScolsSstrYstring_join,"goo/cols/str","string-join");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
EXT(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YLanyG,"goo/boot","<any>");
EXT(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
EXT(Ynew,"goo/boot","new");
EXT(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(Ylst,"goo/boot","lst");
EXT(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YevalSast_linearizeYast_contains_funQ,"eval/ast-linearize","ast-contains-fun?");
EXT(YevalSast_linearizeYanalyze_dynamic_extent,"eval/ast-linearize","analyze-dynamic-extent");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YevalSast_linearizeYanalyze_calls,"eval/ast-linearize","analyze-calls");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsSseqYbegins_with,"goo/cols/seq","begins-with");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
DEF(YevalStopYprint_result_expression,"eval/top","print-result-expression");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
DEF(YevalStopYPPtopPPtop_in,"eval/top","%%top%%top-in");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
EXT(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(YgooScolsSstrYstring_split,"goo/cols/str","string-split");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
DEF(YevalStopYload,"eval/top","load");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(Ytail,"goo/boot","tail");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Yunexec,"goo/boot","unexec");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YgooScolsScolYmap2,"goo/cols/col","map2");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooScolsScolYdo2,"goo/cols/col","do2");
DEF(YevalStopYPPbottomPPast_run,"eval/top","%%bottom%%ast-run");
EXT(YgooSmathYS,"goo/math","/");
DEF(YevalStopYbacktrace,"eval/top","backtrace");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
EXT(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YevalSast_linearizeYcollect_temporariesX,"eval/ast-linearize","collect-temporaries!");
EXT(YgooScolsSmapYfab_map,"goo/cols/map","fab-map");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(Ytype_elts,"goo/boot","type-elts");
DEF(YevalStopYbacktrace_short,"eval/top","backtrace-short");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YgooSmathYK,"goo/math","|");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(Ynul,"goo/boot","nul");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YgooScolsSstrYstring_repeat,"goo/cols/str","string-repeat");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
DEF(YevalStopYbt,"eval/top","bt");
EXT(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
EXT(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
DEF(YevalStopYload_file,"eval/top","load-file");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
EXT(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
EXT(Yfind_getter,"goo/boot","find-getter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_19);
DEFLIT(lit_23);
DEFLIT(lit_62);
DEFLIT(lit_69);
DEFLIT(lit_49);
DEFLIT(lit_35);
DEFLIT(lit_32);
DEFLIT(lit_59);
DEFLIT(lit_61);
DEFLIT(lit_16);
DEFLIT(lit_51);
DEFLIT(lit_24);
DEFLIT(lit_6);
DEFLIT(lit_87);
DEFLIT(lit_91);
DEFLIT(lit_92);
DEFLIT(lit_63);
DEFLIT(lit_117);
DEFLIT(lit_116);
DEFLIT(lit_48);
DEFLIT(lit_100);
DEFLIT(lit_27);
DEFLIT(lit_76);
DEFLIT(lit_83);
DEFLIT(lit_104);
DEFLIT(lit_20);
DEFLIT(lit_98);
DEFLIT(lit_85);
DEFLIT(lit_75);
DEFLIT(lit_114);
DEFLIT(lit_108);
DEFLIT(lit_58);
DEFLIT(lit_71);
DEFLIT(lit_13);
DEFLIT(lit_101);
DEFLIT(lit_40);
DEFLIT(lit_25);
DEFLIT(lit_118);
DEFLIT(lit_109);
DEFLIT(lit_82);
DEFLIT(lit_46);
DEFLIT(lit_3);
DEFLIT(lit_44);
DEFLIT(lit_10);
DEFLIT(lit_22);
DEFLIT(lit_54);
DEFLIT(lit_99);
DEFLIT(lit_60);
DEFLIT(lit_11);
DEFLIT(lit_30);
DEFLIT(lit_41);
DEFLIT(lit_73);
DEFLIT(lit_72);
DEFLIT(lit_70);
DEFLIT(lit_43);
DEFLIT(lit_8);
DEFLIT(lit_95);
DEFLIT(lit_111);
DEFLIT(lit_102);
DEFLIT(lit_26);
DEFLIT(lit_17);
DEFLIT(lit_90);
DEFLIT(lit_79);
DEFLIT(lit_7);
DEFLIT(lit_110);
DEFLIT(lit_96);
DEFLIT(lit_81);
DEFLIT(lit_119);
DEFLIT(lit_57);
DEFLIT(lit_113);
DEFLIT(lit_103);
DEFLIT(lit_65);
DEFLIT(lit_4);
DEFLIT(lit_80);
DEFLIT(lit_89);
DEFLIT(lit_66);
DEFLIT(lit_86);
DEFLIT(lit_88);
DEFLIT(lit_77);
DEFLIT(lit_36);
DEFLIT(lit_42);
DEFLIT(lit_94);
DEFLIT(lit_34);
DEFLIT(lit_28);
DEFLIT(lit_33);
DEFLIT(lit_56);
DEFLIT(lit_106);
DEFLIT(lit_9);
DEFLIT(lit_45);
DEFLIT(lit_1);
DEFLIT(lit_107);
DEFLIT(lit_5);
DEFLIT(lit_112);
DEFLIT(lit_18);
DEFLIT(lit_105);
DEFLIT(lit_115);
DEFLIT(lit_21);
DEFLIT(lit_97);
DEFLIT(lit_84);
DEFLIT(lit_47);
DEFLIT(lit_31);
DEFLIT(lit_39);
DEFLIT(lit_12);
DEFLIT(lit_55);
DEFLIT(lit_29);
DEFLIT(lit_15);
DEFLIT(lit_78);
DEFLIT(lit_74);
DEFLIT(lit_53);
DEFLIT(lit_37);
DEFLIT(lit_68);
DEFLIT(lit_14);
DEFLIT(lit_50);
DEFLIT(lit_64);
DEFLIT(lit_52);
DEFLIT(lit_0);
DEFLIT(lit_38);
DEFLIT(lit_67);
DEFLIT(lit_2);
DEFLIT(lit_93);

/* FUNCTIONS: */

LOCFOR(fun_0);
LOCFOR(fun_1);
LOCFOR(fun_2);
FUNFOR(YevalStopYesctst);
LOCFOR(fun_parse_in_4);
LOCFOR(fun_parse_5);
LOCFOR(fun_str_parse_in_6);
LOCFOR(fun_str_parse_7);
FUNFOR(YevalStopYPPbottomPPast_run);
FUNFOR(YevalStopYPPbottomPPg2c_run);
FUNFOR(YevalStopYauto_run);
FUNFOR(YevalStopYauto_eval);
LOCFOR(fun_eval_in_12);
LOCFOR(fun_eval_13);
LOCFOR(fun_str_eval_in_14);
LOCFOR(fun_str_eval_15);
FUNFOR(YevalStopYcompiled_fileQ);
LOCFOR(fun_loop_17);
LOCFOR(fun_18);
LOCFOR(fun_19);
LOCFOR(fun_read_file_20);
LOCFOR(fun_load_in_21);
LOCFOR(fun_load_file_22);
LOCFOR(fun_load_23);
LOCFOR(fun_prompt_for_command_expression_24);
LOCFOR(fun_print_result_expression_25);
LOCFOR(fun_do_stack_frames_26);
LOCFOR(fun_x_1464_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_30);
LOCFOR(fun_backtrace_31);
LOCFOR(fun_32);
LOCFOR(fun_frame_33);
LOCFOR(fun_34);
LOCFOR(fun_35);
LOCFOR(fun_frame_var_36);
LOCFOR(fun_37);
LOCFOR(fun_bt_38);
LOCFOR(fun_39);
LOCFOR(fun_40);
LOCFOR(fun_backtrace_short_41);
FUNFOR(Ykeyboard_interrupt);
FUNFOR(YevalStopYdo_restart);
LOCFOR(fun_44);
LOCFOR(fun_45);
LOCFOR(fun_46);
LOCFOR(fun_47);
LOCFOR(fun_x_1503_48);
LOCFOR(fun_49);
LOCFOR(fun_x_1500_50);
LOCFOR(fun_51);
LOCFOR(fun_x_1497_52);
LOCFOR(fun_53);
LOCFOR(fun_x_1494_54);
LOCFOR(fun_55);
LOCFOR(fun_x_1491_56);
LOCFOR(fun_57);
LOCFOR(fun_x_1488_58);
LOCFOR(fun_59);
LOCFOR(fun_x_1485_60);
LOCFOR(fun_61);
LOCFOR(fun_x_1482_62);
LOCFOR(fun_63);
LOCFOR(fun_x_1479_64);
LOCFOR(fun_65);
LOCFOR(fun_x_1476_66);
LOCFOR(fun_67);
LOCFOR(fun_x_1473_68);
LOCFOR(fun_69);
LOCFOR(fun_x_1470_70);
LOCFOR(fun_71);
LOCFOR(fun_x_1467_72);
LOCFOR(fun_73);
LOCFOR(fun_74);
LOCFOR(fun_75);
LOCFOR(fun_76);
LOCFOR(fun_loop_77);
LOCFOR(fun_78);
LOCFOR(fun_PPtopPPtop_in_79);
LOCFOR(fun_80);
LOCFOR(fun_81);
LOCFOR(fun_82);
LOCFOR(fun_loop_83);
LOCFOR(fun_84);
LOCFOR(fun_85);
LOCFOR(fun_top_86);
LOCFOR(fun_87);
FUNFOR(YevalStopYsave_image);
extern P YevalStopY___main_0___ ();

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
  CALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_2));
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
  CALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_4));
UNLINK_STACK();
  QRET(LITREF(lit_5));
}

FUNCODEDEF(YevalStopYesctst) {
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
  T0 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),T1,ct_env_,YPfalse);
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
  T1 = CALL1(1,VARREF(YevalSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YevalStopYparse_in),s_,T1);
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
  T1 = CALL2(1,VARREF(YevalStopYparse_in),s_,ct_env_);
  T0 = CALL3(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_14),T1);
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
  T1 = CALL1(1,VARREF(YevalSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YevalStopYstr_parse_in),s_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStopYPPbottomPPast_run) {
  P ast_,ct_env_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(ct_env_, 1);
loop:
  T0 = CALL1(1,VARREF(YevalSastYast_evaluate),ast_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStopYPPbottomPPg2c_run) {
  P ast_,ct_env_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(ct_env_, 1);
loop:
  T0 = CALL2(1,VARREF(YevalStopYg2c_eval),ast_,ct_env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStopYauto_run) {
  P ast_,ct_env_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSast_linearizeYast_contains_funQ),ast_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YevalStopYPPbottomPPg2c_run),ast_,ct_env_);
    T0 = T2;
  } else {
    T3 = CALL2(1,VARREF(YevalStopYPPbottomPPast_run),ast_,ct_env_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStopYauto_eval) {
  P form_,ct_env_;
  P astF1988;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(form_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),form_,ct_env_,YPfalse);
  astF1988 = T1;
  T2 = CALL2(1,VARREF(YevalStopYrun),astF1988,ct_env_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_in_12) {
  P x_,ct_env_;
  P eF1990;
  P oF1989;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),x_,ct_env_,YPfalse);
  oF1989 = T1;
  T3 = CALL1(1,VARREF(YevalSastYast_evaluate),oF1989);
  eF1990 = T3;
  T2 = eF1990;
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
  T1 = CALL1(1,VARREF(YevalSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YevalStopYeval_in),x_,T1);
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
  T1 = CALL2(1,VARREF(YevalStopYeval_in),T2,ct_env_);
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
  T1 = CALL1(1,VARREF(YevalSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YevalStopYstr_eval_in),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStopYcompiled_fileQ) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsSseqYends_with),name_,LITREF(lit_29));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_17) {
  P forms_;
  P xF1991;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(forms_, 0);
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL1(1,VARREF(YgooSruntimeYread),T2);
  xF1991 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),xF1991);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooSmacrosYrevX),forms_);
    T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_sequence_Gbegin),T6);
    T3 = T5;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYpair),xF1991,forms_);
    a1 = T8;
    forms_ = a1;
    goto loop;
    T3 = T7;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_18) {
  P loopF1992;
  P T3,T2,T1,T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_in_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T2 = FUNSHELL(1,fun_loop_17,2);
  loopF1992 = T2;
  FUNINIT(loopF1992, 2,FREEREF(0),loopF1992);
  T3 = CALL1(0,loopF1992,Ynil);
  T1 = T3;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_19) {
  P tmpF1993;
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF1993 = T1;
  if (tmpF1993 != YPfalse) {
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

FUNCODEDEF(fun_read_file_20) {
  P filename_;
  P portF1994;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  portF1994 = YPfalse;
  portF1994 = BOXFAB(portF1994);
  T3 = FUNFAB(fun_18,2,portF1994,filename_);
  T4 = FUNFAB(fun_19,1,portF1994);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_in_21) {
  P filename_,ct_env_;
  P oF1996;
  P xF1995;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(filename_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalStopYcompiled_fileQ),filename_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSsystemYso_load),filename_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YevalStopYread_file),filename_);
    xF1995 = T4;
    T6 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),xF1995,ct_env_,YPfalse);
    oF1996 = T6;
    T7 = CALL2(1,VARREF(YevalStopYrun),oF1996,ct_env_);
    T5 = T7;
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_file_22) {
  P filename_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(filename_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YevalSastYload_in),filename_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_23) {
  P name_,modname_;
  P realfileF1997;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_in_path),name_,VARREF(YgooSsystemYTmodule_search_pathT));
  realfileF1997 = T1;
  T2 = CALL1(1,VARREF(Ynot),realfileF1997);
  if (T2 != YPfalse) {
    T3 = CALL2(1,VARREF(Yerror),LITREF(lit_37),name_);
  } else {
  }
  T4 = CALL2(1,VARREF(YevalStopYload_file),realfileF1997,modname_);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_prompt_for_command_expression_24) {
  P env_,level_,prompt_;
  P argsF2001;
  P arg_strF2000;
  P tmpF1999;
  P formF1998;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(env_, 0);
  ARG(level_, 1);
  ARG(prompt_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_environment_module),env_);
  T0 = CALL1(1,VARREF(YevalSastYmodule_name),T1);
  CALLN(1,VARREF(YgooSruntimeYmsg),5,VARREF(YgooSioSportYout),LITREF(lit_42),T0,level_,prompt_);
  CALL1(1,VARREF(YgooSioSportYforce_out),VARREF(YgooSioSportYout));
  T3 = CALL1(1,VARREF(YgooSruntimeYread),VARREF(YgooSioSportYin));
  formF1998 = T3;
  T6 = CALL2(1,VARREF(YisaQ),formF1998,VARREF(YLlstG));
  tmpF1999 = T6;
  if (tmpF1999 != YPfalse) {
    T9 = CALL1(1,VARREF(Yhead),formF1998);
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),T9,LITREF(lit_43));
    T7 = T8;
  } else {
    T7 = YPfalse;
  }
  T5 = T7;
  if (T5 != YPfalse) {
    T11 = CALL1(1,VARREF(YgooSioSportYgets),VARREF(YgooSioSportYin));
    arg_strF2000 = T11;
    T14 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_44),arg_strF2000,LITREF(lit_45));
    T13 = CALL1(1,VARREF(YgooSioSreadYread_from_string),T14);
    argsF2001 = T13;
    T16 = CALL1(1,VARREF(YgooStypesY2nd),formF1998);
    T15 = CALL2(1,VARREF(YgooSmacrosYpair),T16,argsF2001);
    T12 = T15;
    T10 = T12;
    T4 = T10;
  } else {
    T4 = formF1998;
  }
  T2 = T4;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_print_result_expression_25) {
  P env_,level_,label_,result_;
  P T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(env_, 0);
  ARG(level_, 1);
  ARG(label_, 2);
  ARG(result_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_environment_module),env_);
  T0 = CALL1(1,VARREF(YevalSastYmodule_name),T1);
  CALLN(1,VARREF(YgooSruntimeYmsg),5,VARREF(YgooSioSportYout),LITREF(lit_49),T0,level_,label_);
  T2 = CALL2(1,VARREF(YgooSioSwriteYwrite),VARREF(YgooSioSportYout),result_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_do_stack_frames_26) {
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

FUNCODEDEF(fun_x_1464_27) {
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
  P x_1463F2014;
  P x_1463F2013;
  P x_1463F2012;
  P x_1463F2011;
  P x_1463F2010;
  P x_1463F2009;
  P x_1463F2008;
  P bodyF2007;
  P argsF2006;
  P fF2005;
  P numF2004;
  P x_1463F2003;
  P x_1464F2002;
  P T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49;
  P T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33;
  P T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1464_27,1);
  x_1464F2002 = T1;
  FUNINIT(x_1464F2002, 1,return_);
  x_1463F2003 = FREEREF(0);
  numF2004 = YPfalse;
  numF2004 = BOXFAB(numF2004);
  fF2005 = YPfalse;
  fF2005 = BOXFAB(fF2005);
  argsF2006 = YPfalse;
  argsF2006 = BOXFAB(argsF2006);
  bodyF2007 = YPfalse;
  bodyF2007 = BOXFAB(bodyF2007);
  T11 = CALL2(1,VARREF(YisaQ),x_1463F2003,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1463F2003,LITREF(lit_56),x_1464F2002);
    x_1463F2008 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1463F2008,x_1464F2002);
    x_1463F2009 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1463F2009,x_1464F2002);
    BOXVAL(numF2004) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1463F2009);
    x_1463F2010 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1463F2010,x_1464F2002);
    BOXVAL(fF2005) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1463F2010);
    x_1463F2011 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1463F2011,x_1464F2002);
    BOXVAL(argsF2006) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1463F2011);
    x_1463F2012 = T24;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1463F2012,x_1464F2002);
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T26 = CALL1(1,VARREF(Ytail),x_1463F2008);
    x_1463F2013 = T26;
    BOXVAL(bodyF2007) = x_1463F2013;
    x_1463F2014 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1463F2014,x_1464F2002);
    T27 = T28;
    T14 = T27;
    T12 = T14;
  } else {
    T29 = CALL2(1,x_1464F2002,LITREF(lit_57),x_1463F2003);
  }
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_58));
  T37 = BOXVAL(numF2004);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T38 = CALL1(1,VARREF(Ylst),YPint((P)0));
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T38,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T33 = CALL2(1,VARREF(YgooSmacrosYcat),T34,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_50));
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_51));
  T48 = BOXVAL(fF2005);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T46 = CALL3(1,VARREF(YgooSmacrosYcat),T47,T49,Ynil);
  T45 = CALL1(1,VARREF(Ylst),T46);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T54 = BOXVAL(argsF2006);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T56 = CALL3(1,VARREF(YgooSmacrosYcat),T57,T58,Ynil);
  T55 = CALL1(1,VARREF(Ylst),T56);
  T51 = CALL4(1,VARREF(YgooSmacrosYcat),T52,T53,T55,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T59 = BOXVAL(bodyF2007);
  T62 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T64 = BOXVAL(numF2004);
  T63 = CALL1(1,VARREF(Ylst),T64);
  T61 = CALL3(1,VARREF(YgooSmacrosYcat),T62,T63,Ynil);
  T60 = CALL1(1,VARREF(Ylst),T61);
  T43 = CALLN(1,VARREF(YgooSmacrosYcat),6,T44,T45,T50,T59,T60,Ynil);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T40 = CALL3(1,VARREF(YgooSmacrosYcat),T41,T42,Ynil);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T30 = CALL4(1,VARREF(YgooSmacrosYcat),T31,T32,T39,Ynil);
  T9 = T30;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_29) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_28,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_30) {
  P f_,Uargs_;
  P argsF2015;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2015 = T1;
  T2 = BOXVAL(FREEREF(0));
  CALLN(1,VARREF(YgooSruntimeYmsg),5,VARREF(YgooSioSportYout),LITREF(lit_65),T2,f_,argsF2015);
  T5 = BOXVAL(FREEREF(0));
  T4 = CALL2(1,VARREF(YgooSmathYA),T5,YPint((P)1));
  T3 = BOXVAL(FREEREF(0)) = T4;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_backtrace_31) {
  P numF2016;
  P T3,T2,T1,T0;
LINK_STACK();
loop:
  numF2016 = YPint((P)0);
  numF2016 = BOXFAB(numF2016);
  T3 = FUNFAB(fun_30,1,numF2016);
  T2 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_32) {
  P f_,Uargs_;
  P argsF2017;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2017 = T1;
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(0),T3);
  if (T2 != YPfalse) {
    T5 = BOXVAL(FREEREF(1));
    T4 = CALLN(1,VARREF(YgooSruntimeYmsg),5,VARREF(YgooSioSportYout),LITREF(lit_68),T5,f_,argsF2017);
  } else {
  }
  T8 = BOXVAL(FREEREF(1));
  T7 = CALL2(1,VARREF(YgooSmathYA),T8,YPint((P)1));
  T6 = BOXVAL(FREEREF(1)) = T7;
  T0 = T6;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_frame_33) {
  P n_;
  P numF2018;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(n_, 0);
loop:
  numF2018 = YPint((P)0);
  numF2018 = BOXFAB(numF2018);
  T3 = FUNFAB(fun_32,2,n_,numF2018);
  T2 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_34) {
  P f_,Uargs_;
  P argsF2019;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2019 = T1;
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(0),T3);
  if (T2 != YPfalse) {
    T7 = CALL1(1,VARREF(Yfun_names),f_);
    T6 = CALL2(1,VARREF(YgooScolsSseqYpos),T7,FREEREF(2));
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),argsF2019,T6);
    T4 = CALL1(1,FREEREF(3),T5);
  } else {
  }
  T10 = BOXVAL(FREEREF(1));
  T9 = CALL2(1,VARREF(YgooSmathYA),T10,YPint((P)1));
  T8 = BOXVAL(FREEREF(1)) = T9;
  T0 = T8;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_35) {
  P ret_;
  P numF2020;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(ret_, 0);
loop:
  numF2020 = YPint((P)0);
  numF2020 = BOXFAB(numF2020);
  T2 = FUNFAB(fun_34,4,FREEREF(0),numF2020,FREEREF(1),ret_);
  T1 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T2);
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_frame_var_36) {
  P n_,name_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(n_, 0);
  ARG(name_, 1);
loop:
  T1 = FUNFAB(fun_35,2,n_,name_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_37) {
  P f_,Uargs_;
  P argsF2021;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2021 = T1;
  T2 = BOXVAL(FREEREF(0));
  CALL4(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_72),T2,f_);
  T5 = BOXVAL(FREEREF(0));
  T4 = CALL2(1,VARREF(YgooSmathYA),T5,YPint((P)1));
  T3 = BOXVAL(FREEREF(0)) = T4;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bt_38) {
  P numF2022;
  P T3,T2,T1,T0;
LINK_STACK();
loop:
  numF2022 = YPint((P)0);
  numF2022 = BOXFAB(numF2022);
  T3 = FUNFAB(fun_37,1,numF2022);
  T2 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_39) {
  P f_,Uargs_;
  P tmpF2025;
  P tmpF2024;
  P argsF2023;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2023 = T1;
  T2 = BOXVAL(FREEREF(0));
  if (T2 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooSmathYE),T6,YPfalse);
    T4 = CALL1(1,VARREF(Ynot),T5);
    tmpF2024 = T4;
    if (tmpF2024 != YPfalse) {
      T11 = CALL1(1,VARREF(Yfun_name),f_);
      T10 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T11);
      T9 = CALL3(1,VARREF(YgooScolsSseqYsub),T10,YPint((P)0),YPint((P)10));
      T8 = CALL2(1,VARREF(YgooSmathYE),T9,LITREF(lit_75));
      T7 = T8;
    } else {
      T7 = YPfalse;
    }
    T3 = T7;
    if (T3 != YPfalse) {
      T12 = CALL1(1,FREEREF(1),YPfalse);
    } else {
    }
    T14 = BOXVAL(FREEREF(2));
    T13 = CALLN(1,VARREF(YgooSruntimeYmsg),5,VARREF(YgooSioSportYout),LITREF(lit_76),T14,f_,argsF2023);
  } else {
  }
  T17 = CALL1(1,VARREF(Yfun_name),f_);
  T16 = CALL2(1,VARREF(YgooSmathYNE),T17,YPfalse);
  tmpF2025 = T16;
  if (tmpF2025 != YPfalse) {
    T22 = CALL1(1,VARREF(Yfun_name),f_);
    T21 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T22);
    T20 = CALL3(1,VARREF(YgooScolsSseqYsub),T21,YPint((P)0),YPint((P)7));
    T19 = CALL2(1,VARREF(YgooSmathYE),T20,LITREF(lit_77));
    T18 = T19;
  } else {
    T18 = YPfalse;
  }
  T15 = T18;
  if (T15 != YPfalse) {
    T23 = BOXVAL(FREEREF(0)) = YPtrue;
  } else {
  }
  T26 = BOXVAL(FREEREF(2));
  T25 = CALL2(1,VARREF(YgooSmathYA),T26,YPint((P)1));
  T24 = BOXVAL(FREEREF(2)) = T25;
  T0 = T24;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_40) {
  P break_;
  P numF2027;
  P seen_topF2026;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  seen_topF2026 = YPfalse;
  seen_topF2026 = BOXFAB(seen_topF2026);
  numF2027 = YPint((P)0);
  numF2027 = BOXFAB(numF2027);
  T5 = FUNFAB(fun_39,3,seen_topF2026,break_,numF2027);
  T4 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T5);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_backtrace_short_41) {
  P T1,T0;
LINK_STACK();
loop:
  T1 = fun_40;
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ykeyboard_interrupt) {
  P T1,T0;
LINK_STACK();
loop:
  T1 = CALL1(1,VARREF(Ynew),VARREF(YevalStopYLkeyboard_interruptG));
  T0 = CALL1(1,VARREF(YgooSruntimeYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStopYdo_restart) {
  P restarts_,n_;
  P tmpF2028;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(restarts_, 0);
  ARG(n_, 1);
loop:
  T0 = CALL1(1,VARREF(Ynot),restarts_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_82));
  } else {
  }
  T4 = CALL2(1,VARREF(YgooSmagYG),n_,YPint((P)0));
  tmpF2028 = T4;
  if (tmpF2028 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooStypesYlen),restarts_);
    T6 = CALL2(1,VARREF(YgooSmagYLE),n_,T7);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T8 = CALL1(1,VARREF(Yerror),LITREF(lit_83));
  } else {
  }
  T11 = CALL2(1,VARREF(YgooSmathY_),n_,YPint((P)1));
  T10 = CALL2(1,VARREF(YgooSmacrosYelt),restarts_,T11);
  T9 = CALL3(1,VARREF(YgooSruntimeYinvoke_handler_interactively),T10,VARREF(YgooSioSportYin),VARREF(YgooSioSportYout));
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_44) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_45) {
  P c_,r_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
loop:
  T0 = CALL2(1,VARREF(YisaQ),c_,VARREF(YevalStopYLkeyboard_interruptG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_92));
  } else {
    T3 = CALL1(1,VARREF(YgooSruntimeYdescribe_condition),c_);
    T2 = CALL3(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_93),T3);
  }
  T4 = CALL2(1,VARREF(YgooSmathYA),FREEREF(0),YPint((P)1));
  T5 = BOXVAL(FREEREF(3));
  CALLN(1,VARREF(YevalStopYPPtopPPtop_in),5,T4,FREEREF(1),FREEREF(2),YPtrue,T5);
  T6 = CALL1(1,FREEREF(4),YPfalse);
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_46) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_47) {
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

FUNCODEDEF(fun_x_1503_48) {
  P msg_,args_;
  P resF2029;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL2(1,VARREF(YevalStopYauto_eval),FREEREF(0),T3);
  resF2029 = T2;
  T5 = BOXVAL(FREEREF(1));
  T4 = CALL4(1,VARREF(YevalStopYprint_result_expression),T5,FREEREF(2),LITREF(lit_110),resF2029);
  T1 = T4;
  T0 = CALL1(1,FREEREF(3),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  P return_;
  P x_1502F2036;
  P x_1502F2035;
  P x_1502F2034;
  P nameF2033;
  P nF2032;
  P x_1502F2031;
  P x_1503F2030;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1503_48,4);
  x_1503F2030 = T1;
  FUNINIT(x_1503F2030, 4,FREEREF(0),FREEREF(1),FREEREF(2),return_);
  x_1502F2031 = FREEREF(3);
  nF2032 = YPfalse;
  nF2032 = BOXFAB(nF2032);
  nameF2033 = YPfalse;
  nameF2033 = BOXFAB(nameF2033);
  T7 = CALL2(1,VARREF(YisaQ),x_1502F2031,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1502F2031,LITREF(lit_69),x_1503F2030);
    x_1502F2034 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1502F2034,x_1503F2030);
    BOXVAL(nF2032) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1502F2034);
    x_1502F2035 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1502F2035,x_1503F2030);
    BOXVAL(nameF2033) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1502F2035);
    x_1502F2036 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1502F2036,x_1503F2030);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1503F2030,LITREF(lit_57),x_1502F2031);
  }
  T19 = BOXVAL(nF2032);
  T20 = BOXVAL(nameF2033);
  T18 = CALL2(1,VARREF(YevalStopYframe_var),T19,T20);
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1500_50) {
  P msg_,args_;
  P x_1501F2037;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1501F2037 = FREEREF(0);
  T3 = FUNFAB(fun_49,4,FREEREF(1),FREEREF(2),FREEREF(3),x_1501F2037);
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_51) {
  P return_;
  P x_1499F2042;
  P x_1499F2041;
  P nF2040;
  P x_1499F2039;
  P x_1500F2038;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1500_50,5);
  x_1500F2038 = T1;
  FUNINIT(x_1500F2038, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1499F2039 = FREEREF(0);
  nF2040 = YPfalse;
  nF2040 = BOXFAB(nF2040);
  T5 = CALL2(1,VARREF(YisaQ),x_1499F2039,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1499F2039,LITREF(lit_66),x_1500F2038);
    x_1499F2041 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1499F2041,x_1500F2038);
    BOXVAL(nF2040) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1499F2041);
    x_1499F2042 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1499F2042,x_1500F2038);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1500F2038,LITREF(lit_57),x_1499F2039);
  }
  T14 = BOXVAL(nF2040);
  T13 = CALL1(1,VARREF(YevalStopYframe),T14);
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1497_52) {
  P msg_,args_;
  P x_1498F2043;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1498F2043 = FREEREF(0);
  T3 = FUNFAB(fun_51,4,x_1498F2043,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_53) {
  P return_;
  P x_1496F2046;
  P x_1496F2045;
  P x_1497F2044;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1497_52,5);
  x_1497F2044 = T1;
  FUNINIT(x_1497F2044, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1496F2045 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1496F2045,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1496F2045,LITREF(lit_63),x_1497F2044);
    x_1496F2046 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1496F2046,x_1497F2044);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1497F2044,LITREF(lit_57),x_1496F2045);
  }
  T8 = CALL0(1,VARREF(YevalStopYbacktrace));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1494_54) {
  P msg_,args_;
  P x_1495F2047;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1495F2047 = FREEREF(0);
  T3 = FUNFAB(fun_53,4,x_1495F2047,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  P return_;
  P x_1493F2050;
  P x_1493F2049;
  P x_1494F2048;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1494_54,5);
  x_1494F2048 = T1;
  FUNINIT(x_1494F2048, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1493F2049 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1493F2049,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1493F2049,LITREF(lit_71),x_1494F2048);
    x_1493F2050 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1493F2050,x_1494F2048);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1494F2048,LITREF(lit_57),x_1493F2049);
  }
  T8 = CALL0(1,VARREF(YevalStopYbt));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1491_56) {
  P msg_,args_;
  P x_1492F2051;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1492F2051 = FREEREF(0);
  T3 = FUNFAB(fun_55,4,x_1492F2051,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_57) {
  P return_;
  P x_1490F2054;
  P x_1490F2053;
  P x_1491F2052;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1491_56,5);
  x_1491F2052 = T1;
  FUNINIT(x_1491F2052, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1490F2053 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1490F2053,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1490F2053,LITREF(lit_20),x_1491F2052);
    x_1490F2054 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1490F2054,x_1491F2052);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1491F2052,LITREF(lit_57),x_1490F2053);
  }
  T8 = VARSET(YevalStopYrun,VARREF(YevalStopYauto_run));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1488_58) {
  P msg_,args_;
  P x_1489F2055;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1489F2055 = FREEREF(0);
  T3 = FUNFAB(fun_57,4,x_1489F2055,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_59) {
  P return_;
  P x_1487F2058;
  P x_1487F2057;
  P x_1488F2056;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1488_58,5);
  x_1488F2056 = T1;
  FUNINIT(x_1488F2056, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1487F2057 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1487F2057,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1487F2057,LITREF(lit_111),x_1488F2056);
    x_1487F2058 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1487F2058,x_1488F2056);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1488F2056,LITREF(lit_57),x_1487F2057);
  }
  T8 = VARSET(YevalStopYrun,VARREF(YevalStopYPPbottomPPast_run));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1485_60) {
  P msg_,args_;
  P x_1486F2059;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1486F2059 = FREEREF(0);
  T3 = FUNFAB(fun_59,4,x_1486F2059,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_61) {
  P return_;
  P x_1484F2062;
  P x_1484F2061;
  P x_1485F2060;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1485_60,5);
  x_1485F2060 = T1;
  FUNINIT(x_1485F2060, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1484F2061 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1484F2061,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1484F2061,LITREF(lit_6),x_1485F2060);
    x_1484F2062 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1484F2062,x_1485F2060);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1485F2060,LITREF(lit_57),x_1484F2061);
  }
  T8 = VARSET(YevalStopYrun,VARREF(YevalStopYPPbottomPPg2c_run));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1482_62) {
  P msg_,args_;
  P x_1483F2063;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1483F2063 = FREEREF(0);
  T3 = FUNFAB(fun_61,4,x_1483F2063,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_63) {
  P return_;
  P new_envF2069;
  P x_1481F2068;
  P x_1481F2067;
  P mF2066;
  P x_1481F2065;
  P x_1482F2064;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1482_62,5);
  x_1482F2064 = T1;
  FUNINIT(x_1482F2064, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1481F2065 = FREEREF(0);
  mF2066 = YPfalse;
  mF2066 = BOXFAB(mF2066);
  T5 = CALL2(1,VARREF(YisaQ),x_1481F2065,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1481F2065,LITREF(lit_112),x_1482F2064);
    x_1481F2067 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1481F2067,x_1482F2064);
    BOXVAL(mF2066) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1481F2067);
    x_1481F2068 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1481F2068,x_1482F2064);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1482F2064,LITREF(lit_57),x_1481F2065);
  }
  T15 = BOXVAL(mF2066);
  T14 = CALL1(1,VARREF(YevalSastYruntime_environment),T15);
  new_envF2069 = T14;
  T16 = BOXVAL(FREEREF(2)) = new_envF2069;
  T13 = T16;
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1479_64) {
  P msg_,args_;
  P x_1480F2070;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1480F2070 = FREEREF(0);
  T3 = FUNFAB(fun_63,4,x_1480F2070,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_65) {
  P return_;
  P x_1478F2075;
  P x_1478F2074;
  P nF2073;
  P x_1478F2072;
  P x_1479F2071;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1479_64,5);
  x_1479F2071 = T1;
  FUNINIT(x_1479F2071, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1478F2072 = FREEREF(0);
  nF2073 = YPfalse;
  nF2073 = BOXFAB(nF2073);
  T5 = CALL2(1,VARREF(YisaQ),x_1478F2072,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1478F2072,LITREF(lit_113),x_1479F2071);
    x_1478F2074 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1478F2074,x_1479F2071);
    BOXVAL(nF2073) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1478F2074);
    x_1478F2075 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1478F2075,x_1479F2071);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1479F2071,LITREF(lit_57),x_1478F2072);
  }
  T14 = BOXVAL(FREEREF(4));
  T15 = BOXVAL(nF2073);
  T13 = CALL2(1,VARREF(YevalStopYdo_restart),T14,T15);
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1476_66) {
  P msg_,args_;
  P x_1477F2076;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1477F2076 = FREEREF(0);
  T3 = FUNFAB(fun_65,5,x_1477F2076,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_67) {
  P return_;
  P x_1475F2079;
  P x_1475F2078;
  P x_1476F2077;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1476_66,6);
  x_1476F2077 = T1;
  FUNINIT(x_1476F2077, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1475F2078 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1475F2078,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1475F2078,LITREF(lit_81),x_1476F2077);
    x_1475F2079 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1475F2079,x_1476F2077);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1476F2077,LITREF(lit_57),x_1475F2078);
  }
  T8 = CALL2(1,VARREF(YgooSruntimeYlist_handlers),VARREF(YgooSruntimeYLrestartG),VARREF(YgooSioSportYout));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1473_68) {
  P msg_,args_;
  P x_1474F2080;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1474F2080 = FREEREF(0);
  T3 = FUNFAB(fun_67,5,x_1474F2080,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  P return_;
  P x_1472F2083;
  P x_1472F2082;
  P x_1473F2081;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1473_68,6);
  x_1473F2081 = T1;
  FUNINIT(x_1473F2081, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1472F2082 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1472F2082,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1472F2082,LITREF(lit_114),x_1473F2081);
    x_1472F2083 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1472F2083,x_1473F2081);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1473F2081,LITREF(lit_57),x_1472F2082);
  }
  T8 = CALL2(1,VARREF(YgooSruntimeYlist_handlers),VARREF(YgooSruntimeYLconditionG),VARREF(YgooSioSportYout));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1470_70) {
  P msg_,args_;
  P x_1471F2084;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1471F2084 = FREEREF(0);
  T3 = FUNFAB(fun_69,5,x_1471F2084,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_71) {
  P return_;
  P x_1469F2087;
  P x_1469F2086;
  P x_1470F2085;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1470_70,6);
  x_1470F2085 = T1;
  FUNINIT(x_1470F2085, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1469F2086 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1469F2086,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1469F2086,LITREF(lit_115),x_1470F2085);
    x_1469F2087 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1469F2087,x_1470F2085);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1470F2085,LITREF(lit_57),x_1469F2086);
  }
  T8 = CALL1(1,FREEREF(5),YPfalse);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1467_72) {
  P msg_,args_;
  P x_1468F2088;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1468F2088 = FREEREF(0);
  T3 = FUNFAB(fun_71,6,x_1468F2088,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(6),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_73) {
  P return_;
  P x_1466F2091;
  P x_1466F2090;
  P x_1467F2089;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1467_72,7);
  x_1467F2089 = T1;
  FUNINIT(x_1467F2089, 7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),return_);
  x_1466F2090 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1466F2090,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1466F2090,LITREF(lit_86),x_1467F2089);
    x_1466F2091 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1466F2091,x_1467F2089);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1467F2089,LITREF(lit_57),x_1466F2090);
  }
  T8 = CALL1(1,FREEREF(6),YPfalse);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_74) {
  P x_1465F2093;
  P formF2092;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
  T0 = BOXVAL(FREEREF(0));
  if (T0 != YPfalse) {
    CALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_95));
    T1 = CALL2(1,VARREF(YgooSruntimeYlist_handlers),VARREF(YgooSruntimeYLrestartG),VARREF(YgooSioSportYout));
    BOXVAL(FREEREF(1)) = T1;
    T2 = BOXVAL(FREEREF(0)) = YPfalse;
  } else {
  }
  T5 = BOXVAL(FREEREF(2));
  T4 = CALL3(1,VARREF(YevalStopYprompt_for_command_expression),T5,FREEREF(3),LITREF(lit_96));
  formF2092 = T4;
  T8 = CALL0(1,VARREF(YgooSmathYeof_object));
  T7 = CALL2(1,VARREF(YgooSmathYE),formF2092,T8);
  if (T7 != YPfalse) {
    T9 = CALL1(1,FREEREF(4),YPfalse);
    T6 = T9;
  } else {
    x_1465F2093 = formF2092;
    T12 = FUNFAB(fun_73,7,x_1465F2093,formF2092,FREEREF(2),FREEREF(3),FREEREF(1),FREEREF(5),FREEREF(4));
    T11 = with_exit(T12);
    T10 = T11;
    T6 = T10;
  }
  T3 = T6;
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_75) {
  P T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(Ylst),FREEREF(0));
  T1 = CALLN(1,VARREF(Ynew),5,VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_94),VARREF(Yhandler_info_arguments),T2);
  T3 = fun_46;
  T4 = FUNFAB(fun_47,1,FREEREF(1));
  T5 = FUNFAB(fun_74,6,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(0),FREEREF(5),FREEREF(6));
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YgooSruntimeYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_76) {
  P continue_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(continue_, 0);
loop:
  T1 = fun_44;
  T2 = FUNFAB(fun_45,5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),continue_);
  T3 = FUNFAB(fun_75,7,FREEREF(0),continue_,FREEREF(4),FREEREF(5),FREEREF(3),FREEREF(2),FREEREF(6));
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YgooSruntimeYLconditionG),VARREF(YgooSruntimeYDdefault_handler_info),T1,T2,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_77) {
  P T1,T0;
LINK_STACK();
loop:
  T0 = FUNFAB(fun_76,7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6));
  with_exit(T0);
  goto loop;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_78) {
  P blow_;
  P loopF2094;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_77,8);
  loopF2094 = T1;
  FUNINIT(loopF2094, 8,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),blow_,loopF2094);
  T2 = CALL0(0,loopF2094);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_PPtopPPtop_in_79) {
  P level_,top_,quit_,show_restartsQ_,ct_env_;
  P restartsF2095;
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
  restartsF2095 = YPfalse;
  restartsF2095 = BOXFAB(restartsF2095);
  T5 = FUNFAB(fun_78,6,level_,top_,quit_,ct_env_,show_restartsQ_,restartsF2095);
  T4 = with_exit(T5);
  T2 = T4;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_80) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_81) {
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

FUNCODEDEF(fun_82) {
  P top_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(top_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYruntime_environment),FREEREF(1));
  T0 = CALLN(1,VARREF(YevalStopYPPtopPPtop_in),5,YPint((P)0),top_,FREEREF(0),YPfalse,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_83) {
  P T1,T0;
LINK_STACK();
loop:
  T0 = FUNFAB(fun_82,2,FREEREF(0),FREEREF(1));
  with_exit(T0);
  goto loop;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_84) {
  P loopF2096;
  P T2,T1,T0;
LINK_STACK();
loop:
  T1 = FUNSHELL(1,fun_loop_83,3);
  loopF2096 = T1;
  FUNINIT(loopF2096, 3,FREEREF(0),FREEREF(1),loopF2096);
  T2 = CALL0(0,loopF2096);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_85) {
  P quit_;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(quit_, 0);
loop:
  T2 = CALL0(1,VARREF(Ylst));
  T1 = CALLN(1,VARREF(Ynew),5,VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_116),VARREF(Yhandler_info_arguments),T2);
  T3 = fun_80;
  T4 = FUNFAB(fun_81,1,quit_);
  T5 = FUNFAB(fun_84,2,quit_,FREEREF(0));
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YgooSruntimeYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_top_86) {
  P modname_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = FUNFAB(fun_85,1,modname_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_87) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YevalStopYtop),LITREF(lit_119));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStopYsave_image) {
  P image_name_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(image_name_, 0);
loop:
  T1 = fun_87;
  T0 = CALL2(1,VARREF(Yunexec),image_name_,T1);
UNLINK_STACK();
  QRET(T0);
}

P YevalStopY___main_0___() {
  P T191,T190,T189,T188,T187,T186,T185,T184,T183,T182,T181,T180,T179,T178,T177,T176;
  P T175,T174,T173,T172,T171,T170,T169,T168,T167,T166,T165,T164,T163,T162,T161,T160;
  P T159,T158,T157,T156,T155,T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144;
  P T143,T142,T141,T140,T139,T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128;
  P T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112;
  P T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96;
  P T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80;
  P T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64;
  P T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48;
  P T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
  YevalStopYesctst = YPmet(FUNCODEREF(YevalStopYesctst),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T4 = YevalStopYesctst;
  VARSET(YevalStopYesctst,T4);
  lit_6 = YPPsym((P)"g2c-eval");
  lit_7 = YPPsym((P)"exp");
  lit_8 = YPPsym((P)"ct-env");
  T6 = YPsig(YPPlist(2,LITREF(lit_7),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T5 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_6),T6,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalStopYg2c_eval,T5);
  lit_9 = YPPsym((P)"parse-in");
  lit_10 = YPPsym((P)"s");
  T7 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_8)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_in_4 = YPmet(FUNCODEREF(fun_parse_in_4),LITREF(lit_9),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YevalStopYparse_in);
  if (T10 != YPfalse) {
    T9 = VARREF(YevalStopYparse_in);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_parse_in_4;
  T8 = CALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YevalStopYparse_in,T8);
  lit_11 = YPPsym((P)"parse");
  lit_12 = YPPsym((P)"modname");
  T12 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_12)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_5 = YPmet(FUNCODEREF(fun_parse_5),LITREF(lit_11),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YevalStopYparse);
  if (T15 != YPfalse) {
    T14 = VARREF(YevalStopYparse);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_parse_5;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YevalStopYparse,T13);
  lit_13 = YPPsym((P)"str-parse-in");
  lit_14 = YPsb((P)"%=\n");
  T17 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_8)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_parse_in_6 = YPmet(FUNCODEREF(fun_str_parse_in_6),LITREF(lit_13),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YevalStopYstr_parse_in);
  if (T20 != YPfalse) {
    T19 = VARREF(YevalStopYstr_parse_in);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_str_parse_in_6;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YevalStopYstr_parse_in,T18);
  lit_15 = YPPsym((P)"str-parse");
  T22 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_12)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_parse_7 = YPmet(FUNCODEREF(fun_str_parse_7),LITREF(lit_15),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YevalStopYstr_parse);
  if (T25 != YPfalse) {
    T24 = VARREF(YevalStopYstr_parse);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_str_parse_7;
  T23 = CALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YevalStopYstr_parse,T23);
  lit_16 = YPPsym((P)"%%bottom%%ast-run");
  lit_17 = YPPsym((P)"ast");
  T27 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYPPbottomPPast_run = YPmet(FUNCODEREF(YevalStopYPPbottomPPast_run),LITREF(lit_16),T27,ENVNUL,PNUL,YPfalse);
  T28 = YevalStopYPPbottomPPast_run;
  VARSET(YevalStopYPPbottomPPast_run,T28);
  lit_18 = YPPsym((P)"%%bottom%%g2c-run");
  T29 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYPPbottomPPg2c_run = YPmet(FUNCODEREF(YevalStopYPPbottomPPg2c_run),LITREF(lit_18),T29,ENVNUL,PNUL,YPfalse);
  T30 = YevalStopYPPbottomPPg2c_run;
  VARSET(YevalStopYPPbottomPPg2c_run,T30);
  lit_19 = YPPsym((P)"auto-run");
  T31 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYauto_run = YPmet(FUNCODEREF(YevalStopYauto_run),LITREF(lit_19),T31,ENVNUL,PNUL,YPfalse);
  T32 = YevalStopYauto_run;
  VARSET(YevalStopYauto_run,T32);
  lit_20 = YPPsym((P)"auto-eval");
  lit_21 = YPPsym((P)"form");
  T33 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYauto_eval = YPmet(FUNCODEREF(YevalStopYauto_eval),LITREF(lit_20),T33,ENVNUL,PNUL,YPfalse);
  T34 = YevalStopYauto_eval;
  VARSET(YevalStopYauto_eval,T34);
  VARSET(YevalStopYrun,VARREF(YevalStopYauto_run));
  lit_22 = YPPsym((P)"eval-in");
  lit_23 = YPPsym((P)"x");
  T35 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_in_12 = YPmet(FUNCODEREF(fun_eval_in_12),LITREF(lit_22),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YevalStopYeval_in);
  if (T38 != YPfalse) {
    T37 = VARREF(YevalStopYeval_in);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_eval_in_12;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YevalStopYeval_in,T36);
  lit_24 = YPPsym((P)"eval");
  T40 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_12)),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_13 = YPmet(FUNCODEREF(fun_eval_13),LITREF(lit_24),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YevalSsyntaxYeval);
  if (T43 != YPfalse) {
    T42 = VARREF(YevalSsyntaxYeval);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_eval_13;
  T41 = CALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YevalSsyntaxYeval,T41);
  lit_25 = YPPsym((P)"str-eval-in");
  T45 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_8)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_in_14 = YPmet(FUNCODEREF(fun_str_eval_in_14),LITREF(lit_25),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YevalStopYstr_eval_in);
  if (T48 != YPfalse) {
    T47 = VARREF(YevalStopYstr_eval_in);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_str_eval_in_14;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YevalStopYstr_eval_in,T46);
  lit_26 = YPPsym((P)"str-eval");
  T50 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_12)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_15 = YPmet(FUNCODEREF(fun_str_eval_15),LITREF(lit_26),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YevalStopYstr_eval);
  if (T53 != YPfalse) {
    T52 = VARREF(YevalStopYstr_eval);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_str_eval_15;
  T51 = CALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YevalStopYstr_eval,T51);
  lit_27 = YPPsym((P)"compiled-file?");
  lit_28 = YPPsym((P)"name");
  lit_29 = YPsb((P)".gooc");
  T55 = YPsig(YPPlist(1,LITREF(lit_28)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalStopYcompiled_fileQ = YPmet(FUNCODEREF(YevalStopYcompiled_fileQ),LITREF(lit_27),T55,ENVNUL,PNUL,YPfalse);
  T56 = YevalStopYcompiled_fileQ;
  VARSET(YevalStopYcompiled_fileQ,T56);
  lit_30 = YPPsym((P)"read-file");
  lit_31 = YPPsym((P)"filename");
  lit_32 = YPPsym((P)"loop");
  lit_33 = YPPsym((P)"forms");
  T60 = YPsig(YPPlist(1,LITREF(lit_33)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_17 = YPmet(FUNCODEREF(fun_loop_17),LITREF(lit_32),T60,ENVNUL,PNUL,YPfalse);
  T59 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T59,ENVNUL,PNUL,YPfalse);
  T58 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T58,ENVNUL,PNUL,YPfalse);
  T57 = YPsig(YPPlist(1,LITREF(lit_31)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_file_20 = YPmet(FUNCODEREF(fun_read_file_20),LITREF(lit_30),T57,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(YevalStopYread_file);
  if (T63 != YPfalse) {
    T62 = VARREF(YevalStopYread_file);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_read_file_20;
  T61 = CALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YevalStopYread_file,T61);
  lit_34 = YPPsym((P)"load-in");
  T65 = YPsig(YPPlist(2,LITREF(lit_31),LITREF(lit_8)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_in_21 = YPmet(FUNCODEREF(fun_load_in_21),LITREF(lit_34),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YevalSastYload_in);
  if (T68 != YPfalse) {
    T67 = VARREF(YevalSastYload_in);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_load_in_21;
  T66 = CALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YevalSastYload_in,T66);
  lit_35 = YPPsym((P)"load-file");
  T70 = YPsig(YPPlist(2,LITREF(lit_31),LITREF(lit_12)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_file_22 = YPmet(FUNCODEREF(fun_load_file_22),LITREF(lit_35),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(YevalStopYload_file);
  if (T73 != YPfalse) {
    T72 = VARREF(YevalStopYload_file);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_load_file_22;
  T71 = CALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YevalStopYload_file,T71);
  lit_36 = YPPsym((P)"load");
  lit_37 = YPsb((P)"File %s not found");
  T75 = YPsig(YPPlist(2,LITREF(lit_28),LITREF(lit_12)),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_23 = YPmet(FUNCODEREF(fun_load_23),LITREF(lit_36),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YevalStopYload);
  if (T78 != YPfalse) {
    T77 = VARREF(YevalStopYload);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_load_23;
  T76 = CALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YevalStopYload,T76);
  lit_38 = YPPsym((P)"prompt-for-command-expression");
  lit_39 = YPPsym((P)"env");
  lit_40 = YPPsym((P)"level");
  lit_41 = YPPsym((P)"prompt");
  lit_42 = YPsb((P)"%s %=%s");
  lit_43 = YPPsym((P)"unquote");
  lit_44 = YPsb((P)"(");
  lit_45 = YPsb((P)")");
  T80 = YPsig(YPPlist(3,LITREF(lit_39),LITREF(lit_40),LITREF(lit_41)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_prompt_for_command_expression_24 = YPmet(FUNCODEREF(fun_prompt_for_command_expression_24),LITREF(lit_38),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YevalStopYprompt_for_command_expression);
  if (T83 != YPfalse) {
    T82 = VARREF(YevalStopYprompt_for_command_expression);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_prompt_for_command_expression_24;
  T81 = CALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YevalStopYprompt_for_command_expression,T81);
  lit_46 = YPPsym((P)"print-result-expression");
  lit_47 = YPPsym((P)"label");
  lit_48 = YPPsym((P)"result");
  lit_49 = YPsb((P)"%s %=%s");
  T85 = YPsig(YPPlist(4,LITREF(lit_39),LITREF(lit_40),LITREF(lit_47),LITREF(lit_48)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_print_result_expression_25 = YPmet(FUNCODEREF(fun_print_result_expression_25),LITREF(lit_46),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YevalStopYprint_result_expression);
  if (T88 != YPfalse) {
    T87 = VARREF(YevalStopYprint_result_expression);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_print_result_expression_25;
  T86 = CALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YevalStopYprint_result_expression,T86);
  lit_50 = YPPsym((P)"do-stack-frames");
  lit_51 = YPPsym((P)"fun");
  T90 = YPsig(YPPlist(1,LITREF(lit_51)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_stack_frames_26 = YPmet(FUNCODEREF(fun_do_stack_frames_26),LITREF(lit_50),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YevalStopYdo_stack_frames);
  if (T93 != YPfalse) {
    T92 = VARREF(YevalStopYdo_stack_frames);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_do_stack_frames_26;
  T91 = CALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YevalStopYdo_stack_frames,T91);
  lit_52 = YPPsym((P)"return");
  lit_53 = YPPsym((P)"x-1464");
  lit_54 = YPPsym((P)"msg");
  lit_55 = YPPsym((P)"args");
  lit_56 = YPPsym((P)"for-frames");
  lit_57 = YPsb((P)"Match Pattern Failure");
  lit_58 = YPPsym((P)"let");
  lit_59 = YPPsym((P)"_args");
  lit_60 = YPPsym((P)"def");
  lit_61 = YPPsym((P)"rev");
  lit_62 = YPPsym((P)"incf");
  T97 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_55)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1464_27 = YPmet(FUNCODEREF(fun_x_1464_27),LITREF(lit_53),T97,ENVNUL,PNUL,YPfalse);
  T96 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T96,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T95,ENVNUL,PNUL,YPfalse);
  T98 = fun_29;
  YPmacro(YPPsym((P)"eval/top"),YPPsym((P)"for-frames"),T98);
  lit_63 = YPPsym((P)"backtrace");
  lit_64 = YPPsym((P)"f");
  lit_65 = YPsb((P)"[%=] %= %=\n");
  T100 = YPsig(YPPlist(2,LITREF(lit_64),LITREF(lit_59)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T100,ENVNUL,PNUL,YPfalse);
  T99 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_backtrace_31 = YPmet(FUNCODEREF(fun_backtrace_31),LITREF(lit_63),T99,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(YevalStopYbacktrace);
  if (T103 != YPfalse) {
    T102 = VARREF(YevalStopYbacktrace);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_backtrace_31;
  T101 = CALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YevalStopYbacktrace,T101);
  lit_66 = YPPsym((P)"frame");
  lit_67 = YPPsym((P)"n");
  lit_68 = YPsb((P)"[%=] %= %=\n");
  T106 = YPsig(YPPlist(2,LITREF(lit_64),LITREF(lit_59)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T106,ENVNUL,PNUL,YPfalse);
  T105 = YPsig(YPPlist(1,LITREF(lit_67)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_frame_33 = YPmet(FUNCODEREF(fun_frame_33),LITREF(lit_66),T105,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(YevalStopYframe);
  if (T109 != YPfalse) {
    T108 = VARREF(YevalStopYframe);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_frame_33;
  T107 = CALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YevalStopYframe,T107);
  lit_69 = YPPsym((P)"frame-var");
  lit_70 = YPPsym((P)"ret");
  T113 = YPsig(YPPlist(2,LITREF(lit_64),LITREF(lit_59)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T113,ENVNUL,PNUL,YPfalse);
  T112 = YPsig(YPPlist(1,LITREF(lit_70)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T112,ENVNUL,PNUL,YPfalse);
  T111 = YPsig(YPPlist(2,LITREF(lit_67),LITREF(lit_28)),YPPlist(2,VARREF(YLintG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_frame_var_36 = YPmet(FUNCODEREF(fun_frame_var_36),LITREF(lit_69),T111,ENVNUL,PNUL,YPfalse);
  T116 = BOUNDP(YevalStopYframe_var);
  if (T116 != YPfalse) {
    T115 = VARREF(YevalStopYframe_var);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_frame_var_36;
  T114 = CALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(YevalStopYframe_var,T114);
  lit_71 = YPPsym((P)"bt");
  lit_72 = YPsb((P)"[%=] %=\n");
  T119 = YPsig(YPPlist(2,LITREF(lit_64),LITREF(lit_59)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T119,ENVNUL,PNUL,YPfalse);
  T118 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_bt_38 = YPmet(FUNCODEREF(fun_bt_38),LITREF(lit_71),T118,ENVNUL,PNUL,YPfalse);
  T122 = BOUNDP(YevalStopYbt);
  if (T122 != YPfalse) {
    T121 = VARREF(YevalStopYbt);
  } else {
    T121 = YPfalse;
  }
  T123 = fun_bt_38;
  T120 = CALL2(1,VARREF(YPdefine_method),T121,T123);
  VARSET(YevalStopYbt,T120);
  lit_73 = YPPsym((P)"backtrace-short");
  lit_74 = YPPsym((P)"break");
  lit_75 = YPsb((P)"%%bottom%%");
  lit_76 = YPsb((P)"[%=] %= %=\n");
  lit_77 = YPsb((P)"%%top%%");
  T126 = YPsig(YPPlist(2,LITREF(lit_64),LITREF(lit_59)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T126,ENVNUL,PNUL,YPfalse);
  T125 = YPsig(YPPlist(1,LITREF(lit_74)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T125,ENVNUL,PNUL,YPfalse);
  T124 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_backtrace_short_41 = YPmet(FUNCODEREF(fun_backtrace_short_41),LITREF(lit_73),T124,ENVNUL,PNUL,YPfalse);
  T129 = BOUNDP(YevalStopYbacktrace_short);
  if (T129 != YPfalse) {
    T128 = VARREF(YevalStopYbacktrace_short);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_backtrace_short_41;
  T127 = CALL2(1,VARREF(YPdefine_method),T128,T130);
  VARSET(YevalStopYbacktrace_short,T127);
  lit_78 = YPPsym((P)"<keyboard-interrupt>");
  T132 = (P)YPpair(VARREF(YgooSruntimeYLconditionG),Ynil);
  T131 = CALL2(1,VARREF(Yfab_class),LITREF(lit_78),T132);
  VARSET(YevalStopYLkeyboard_interruptG,T131);
  lit_79 = YPPsym((P)"keyboard-interrupt");
  T133 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Ykeyboard_interrupt = YPmet(FUNCODEREF(Ykeyboard_interrupt),LITREF(lit_79),T133,ENVNUL,PNUL,YPfalse);
  T134 = Ykeyboard_interrupt;
  VARSET(Ykeyboard_interrupt,T134);
  lit_80 = YPPsym((P)"do-restart");
  lit_81 = YPPsym((P)"restarts");
  lit_82 = YPsb((P)"No restarts available.\n");
  lit_83 = YPsb((P)"No restart #%d.\n");
  T135 = YPsig(YPPlist(2,LITREF(lit_81),LITREF(lit_67)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYdo_restart = YPmet(FUNCODEREF(YevalStopYdo_restart),LITREF(lit_80),T135,ENVNUL,PNUL,YPfalse);
  T136 = YevalStopYdo_restart;
  VARSET(YevalStopYdo_restart,T136);
  lit_84 = YPPsym((P)"%%top%%top-in");
  lit_85 = YPPsym((P)"top");
  lit_86 = YPPsym((P)"quit");
  lit_87 = YPPsym((P)"show-restarts?");
  lit_88 = YPPsym((P)"blow");
  lit_89 = YPPsym((P)"continue");
  lit_90 = YPPsym((P)"c");
  lit_91 = YPPsym((P)"r");
  lit_92 = YPsb((P)"BREAK");
  lit_93 = YPsb((P)"ERROR: %s");
  lit_94 = YPsb((P)"Return to interpreter level %d");
  lit_95 = YPsb((P)"Type (restart N) to restart execution:\n");
  lit_96 = YPsb((P)"<= ");
  lit_97 = YPPsym((P)"x-1467");
  lit_98 = YPPsym((P)"x-1470");
  lit_99 = YPPsym((P)"x-1473");
  lit_100 = YPPsym((P)"x-1476");
  lit_101 = YPPsym((P)"x-1479");
  lit_102 = YPPsym((P)"x-1482");
  lit_103 = YPPsym((P)"x-1485");
  lit_104 = YPPsym((P)"x-1488");
  lit_105 = YPPsym((P)"x-1491");
  lit_106 = YPPsym((P)"x-1494");
  lit_107 = YPPsym((P)"x-1497");
  lit_108 = YPPsym((P)"x-1500");
  lit_109 = YPPsym((P)"x-1503");
  lit_110 = YPsb((P)"=> ");
  lit_111 = YPPsym((P)"ast-eval");
  lit_112 = YPPsym((P)"in");
  lit_113 = YPPsym((P)"restart");
  lit_114 = YPPsym((P)"handlers");
  lit_115 = YPPsym((P)"up");
  T172 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T172,ENVNUL,PNUL,YPfalse);
  T171 = YPsig(YPPlist(2,LITREF(lit_90),LITREF(lit_91)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T171,ENVNUL,PNUL,YPfalse);
  T170 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_46 = YPmet(FUNCODEREF(fun_46),YPfalse,T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(YPPlist(2,LITREF(lit_90),LITREF(lit_91)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_55)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1503_48 = YPmet(FUNCODEREF(fun_x_1503_48),LITREF(lit_109),T168,ENVNUL,PNUL,YPfalse);
  T167 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T167,ENVNUL,PNUL,YPfalse);
  T166 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_55)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1500_50 = YPmet(FUNCODEREF(fun_x_1500_50),LITREF(lit_108),T166,ENVNUL,PNUL,YPfalse);
  T165 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_55)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1497_52 = YPmet(FUNCODEREF(fun_x_1497_52),LITREF(lit_107),T164,ENVNUL,PNUL,YPfalse);
  T163 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_55)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1494_54 = YPmet(FUNCODEREF(fun_x_1494_54),LITREF(lit_106),T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_55)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1491_56 = YPmet(FUNCODEREF(fun_x_1491_56),LITREF(lit_105),T160,ENVNUL,PNUL,YPfalse);
  T159 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_57 = YPmet(FUNCODEREF(fun_57),YPfalse,T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_55)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1488_58 = YPmet(FUNCODEREF(fun_x_1488_58),LITREF(lit_104),T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_55)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1485_60 = YPmet(FUNCODEREF(fun_x_1485_60),LITREF(lit_103),T156,ENVNUL,PNUL,YPfalse);
  T155 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T155,ENVNUL,PNUL,YPfalse);
  T154 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_55)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1482_62 = YPmet(FUNCODEREF(fun_x_1482_62),LITREF(lit_102),T154,ENVNUL,PNUL,YPfalse);
  T153 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPmet(FUNCODEREF(fun_63),YPfalse,T153,ENVNUL,PNUL,YPfalse);
  T152 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_55)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1479_64 = YPmet(FUNCODEREF(fun_x_1479_64),LITREF(lit_101),T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_55)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1476_66 = YPmet(FUNCODEREF(fun_x_1476_66),LITREF(lit_100),T150,ENVNUL,PNUL,YPfalse);
  T149 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_67 = YPmet(FUNCODEREF(fun_67),YPfalse,T149,ENVNUL,PNUL,YPfalse);
  T148 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_55)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1473_68 = YPmet(FUNCODEREF(fun_x_1473_68),LITREF(lit_99),T148,ENVNUL,PNUL,YPfalse);
  T147 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T147,ENVNUL,PNUL,YPfalse);
  T146 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_55)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1470_70 = YPmet(FUNCODEREF(fun_x_1470_70),LITREF(lit_98),T146,ENVNUL,PNUL,YPfalse);
  T145 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T145,ENVNUL,PNUL,YPfalse);
  T144 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_55)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1467_72 = YPmet(FUNCODEREF(fun_x_1467_72),LITREF(lit_97),T144,ENVNUL,PNUL,YPfalse);
  T143 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_74 = YPmet(FUNCODEREF(fun_74),YPfalse,T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(YPPlist(1,LITREF(lit_89)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_77 = YPmet(FUNCODEREF(fun_loop_77),LITREF(lit_32),T139,ENVNUL,PNUL,YPfalse);
  T138 = YPsig(YPPlist(1,LITREF(lit_88)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_78 = YPmet(FUNCODEREF(fun_78),YPfalse,T138,ENVNUL,PNUL,YPfalse);
  T137 = YPsig(YPPlist(5,LITREF(lit_40),LITREF(lit_85),LITREF(lit_86),LITREF(lit_87),LITREF(lit_8)),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_PPtopPPtop_in_79 = YPmet(FUNCODEREF(fun_PPtopPPtop_in_79),LITREF(lit_84),T137,ENVNUL,PNUL,YPfalse);
  T175 = BOUNDP(YevalStopYPPtopPPtop_in);
  if (T175 != YPfalse) {
    T174 = VARREF(YevalStopYPPtopPPtop_in);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_PPtopPPtop_in_79;
  T173 = CALL2(1,VARREF(YPdefine_method),T174,T176);
  VARSET(YevalStopYPPtopPPtop_in,T173);
  lit_116 = YPsb((P)"Exit the top-level interpreter");
  T183 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T183,ENVNUL,PNUL,YPfalse);
  T182 = YPsig(YPPlist(2,LITREF(lit_90),LITREF(lit_91)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T182,ENVNUL,PNUL,YPfalse);
  T181 = YPsig(YPPlist(1,LITREF(lit_85)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T181,ENVNUL,PNUL,YPfalse);
  T180 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_83 = YPmet(FUNCODEREF(fun_loop_83),LITREF(lit_32),T180,ENVNUL,PNUL,YPfalse);
  T179 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_84 = YPmet(FUNCODEREF(fun_84),YPfalse,T179,ENVNUL,PNUL,YPfalse);
  T178 = YPsig(YPPlist(1,LITREF(lit_86)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T178,ENVNUL,PNUL,YPfalse);
  T177 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_top_86 = YPmet(FUNCODEREF(fun_top_86),LITREF(lit_85),T177,ENVNUL,PNUL,YPfalse);
  T186 = BOUNDP(YevalStopYtop);
  if (T186 != YPfalse) {
    T185 = VARREF(YevalStopYtop);
  } else {
    T185 = YPfalse;
  }
  T187 = fun_top_86;
  T184 = CALL2(1,VARREF(YPdefine_method),T185,T187);
  VARSET(YevalStopYtop,T184);
  lit_117 = YPPsym((P)"save-image");
  lit_118 = YPPsym((P)"image-name");
  lit_119 = YPPsym((P)"goo/user");
  T189 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T189,ENVNUL,PNUL,YPfalse);
  T188 = YPsig(YPPlist(1,LITREF(lit_118)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalStopYsave_image = YPmet(FUNCODEREF(YevalStopYsave_image),LITREF(lit_117),T188,ENVNUL,PNUL,YPfalse);
  T190 = YevalStopYsave_image;
  VARSET(YevalStopYsave_image,T190);
  T191 = YPfalse;
  return T191;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_evalSast_linearize;
extern MODULE_INFO module_info_evalSast_eval;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSmap;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSruntime},
  {&module_info_gooSioSread},
  {&module_info_gooSioSwrite},
  {&module_info_evalSsyntax},
  {&module_info_evalSast},
  {&module_info_evalSast_linearize},
  {&module_info_evalSast_eval},
  {&module_info_gooSsystem},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScols},
  {&module_info_gooSioSport},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"~=", &module_info_gooSmath, "~="},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"sexpr-assignment-variable", &module_info_evalSsyntax, "sexpr-assignment-variable"},
  {"binding-global-box-setter", &module_info_evalSast, "binding-global-box-setter"},
  {">", &module_info_gooSmag, ">"},
  {"df", &module_info_gooSboot, "df"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"-", &module_info_gooSmath, "-"},
  {"binding-module-name", &module_info_evalSast, "binding-module-name"},
  {"sexpr-operands", &module_info_evalSsyntax, "sexpr-operands"},
  {"signature-value-setter", &module_info_evalSast, "signature-value-setter"},
  {"reference-frame-number", &module_info_evalSast, "reference-frame-number"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"locals-body-setter", &module_info_evalSast, "locals-body-setter"},
  {"signature-bindings", &module_info_evalSast, "signature-bindings"},
  {"<global-reference>", &module_info_evalSast, "<global-reference>"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"<bound?>", &module_info_evalSast, "<bound?>"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"monitor-info", &module_info_evalSast, "monitor-info"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"eval", &module_info_evalSsyntax, "eval"},
  {"for", &module_info_gooSmacros, "for"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"binding-value-setter", &module_info_evalSast, "binding-value-setter"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"use", &module_info_gooSboot, "use"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"*module-search-path*", &module_info_gooSsystem, "*module-search-path*"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"unconstrained-type?", &module_info_evalSast_linearize, "unconstrained-type?"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"sexpr-loc-bound-bodies", &module_info_evalSsyntax, "sexpr-loc-bound-bodies"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"$sexpr-unwind-protect-tag", &module_info_evalSsyntax, "$sexpr-unwind-protect-tag"},
  {"load-in", &module_info_evalSast, "load-in"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"<", &module_info_gooSmag, "<"},
  {"not", &module_info_gooSboot, "not"},
  {"function-data-refs", &module_info_evalSast, "function-data-refs"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"pow", &module_info_gooSmath, "pow"},
  {"any?", &module_info_gooStypes, "any?"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"sexpr-isa-prop-inits", &module_info_evalSsyntax, "sexpr-isa-prop-inits"},
  {"collect-registers!", &module_info_evalSast_linearize, "collect-registers!"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"objectify-signature", &module_info_evalSast, "objectify-signature"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"signature-names-setter", &module_info_evalSast, "signature-names-setter"},
  {"log", &module_info_gooSmath, "log"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"dg", &module_info_gooSboot, "dg"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"when", &module_info_gooSmacros, "when"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"signature-bindings-setter", &module_info_evalSast, "signature-bindings-setter"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"lift!", &module_info_evalSast_linearize, "lift!"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"ends-with", &module_info_gooScolsSseq, "ends-with"},
  {"op", &module_info_gooSmacros, "op"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"sexpr-loc-bound-signatures", &module_info_evalSsyntax, "sexpr-loc-bound-signatures"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"$e", &module_info_gooSmath, "$e"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"<local-binding>", &module_info_evalSast, "<local-binding>"},
  {"$sexpr-let-tag", &module_info_evalSsyntax, "$sexpr-let-tag"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"sexpr-fab-getter", &module_info_evalSsyntax, "sexpr-fab-getter"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"<ast-generic>", &module_info_evalSast, "<ast-generic>"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"display", &module_info_gooSioSwrite, "display"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"sexpr-method-signature", &module_info_evalSsyntax, "sexpr-method-signature"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"sexpr-fab-setter", &module_info_evalSsyntax, "sexpr-fab-setter"},
  {"<module>", &module_info_evalSast, "<module>"},
  {"set", &module_info_gooSboot, "set"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"<application>", &module_info_evalSast, "<application>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"<renamed-local-binding>", &module_info_evalSast_linearize, "<renamed-local-binding>"},
  {"<free-reference>", &module_info_evalSast_linearize, "<free-reference>"},
  {"sexpr-if-test", &module_info_evalSsyntax, "sexpr-if-test"},
  {"t+", &module_info_gooStypes, "t+"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"=", &module_info_gooSmath, "="},
  {"export", &module_info_gooSboot, "export"},
  {"sexpr-fab-setter-name", &module_info_evalSsyntax, "sexpr-fab-setter-name"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"<sequential>", &module_info_evalSast, "<sequential>"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"*register-passive?*", &module_info_evalSast_linearize, "*register-passive?*"},
  {"sexpr-function-body", &module_info_evalSsyntax, "sexpr-function-body"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"sexpr-prop-owner", &module_info_evalSsyntax, "sexpr-prop-owner"},
  {"reference-self?", &module_info_evalSast_linearize, "reference-self?"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"1+", &module_info_gooSmath, "1+"},
  {"dc", &module_info_gooSboot, "dc"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"sexpr-definition-variable", &module_info_evalSsyntax, "sexpr-definition-variable"},
  {"mod", &module_info_gooSmath, "mod"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"sin", &module_info_gooSmath, "sin"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"binding-native-to?", &module_info_evalSast, "binding-native-to?"},
  {"read", &module_info_gooSruntime, "read"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"runtime-environment", &module_info_evalSast, "runtime-environment"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"sexpr-method-body", &module_info_evalSsyntax, "sexpr-method-body"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"spread", &module_info_gooSruntime, "spread"},
  {"dss", &module_info_gooSboot, "dss"},
  {"%load", &module_info_gooSsystem, "%load"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"register-allocate!", &module_info_evalSast_linearize, "register-allocate!"},
  {"t=", &module_info_gooStypes, "t="},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"<module-binding-reference>", &module_info_evalSast, "<module-binding-reference>"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"<fab-list>", &module_info_evalSast, "<fab-list>"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"$sexpr-method-tag", &module_info_evalSsyntax, "$sexpr-method-tag"},
  {"~==", &module_info_gooSmath, "~=="},
  {"init-environment-for-eval", &module_info_evalSast, "init-environment-for-eval"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"function-debug-name", &module_info_evalSast, "function-debug-name"},
  {"1-", &module_info_gooSmath, "1-"},
  {"map", &module_info_gooSmacros, "map"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"sexpr-function-definition-variable", &module_info_evalSsyntax, "sexpr-function-definition-variable"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"program-register-setter", &module_info_evalSast, "program-register-setter"},
  {"<box-read>", &module_info_evalSast_linearize, "<box-read>"},
  {"$sexpr-isa-tag", &module_info_evalSsyntax, "$sexpr-isa-tag"},
  {"assignment-form", &module_info_evalSast, "assignment-form"},
  {"signature-arity-setter", &module_info_evalSast, "signature-arity-setter"},
  {"<bind-exit>", &module_info_evalSast, "<bind-exit>"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"global-box-value", &module_info_evalSast, "global-box-value"},
  {"<runtime-assignment>", &module_info_evalSast, "<runtime-assignment>"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"compile-time-program", &module_info_evalSast, "compile-time-program"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"let", &module_info_gooSboot, "let"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"<raw-constant>", &module_info_evalSast, "<raw-constant>"},
  {"binding-dotted?", &module_info_evalSast, "binding-dotted?"},
  {"del", &module_info_gooScolsScol, "del"},
  {"port2str", &module_info_gooSioSport, "port2str"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"cos", &module_info_gooSmath, "cos"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"<computed-program>", &module_info_evalSast, "<computed-program>"},
  {"<real-reference>", &module_info_evalSast, "<real-reference>"},
  {"any2?", &module_info_gooScolsScol, "any2?"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"module-syntax-environment", &module_info_evalSast, "module-syntax-environment"},
  {"head", &module_info_gooSboot, "head"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"function-self-recursive?-setter", &module_info_evalSast, "function-self-recursive?-setter"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"function-temporaries-setter", &module_info_evalSast, "function-temporaries-setter"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"sexpr-syntax-if-pattern", &module_info_evalSsyntax, "sexpr-syntax-if-pattern"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"binding-index", &module_info_evalSast, "binding-index"},
  {"<program>", &module_info_evalSast, "<program>"},
  {"assignment-form-setter", &module_info_evalSast, "assignment-form-setter"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"fin", &module_info_gooSboot, "fin"},
  {"do-named-static-global-bindings", &module_info_evalSast, "do-named-static-global-bindings"},
  {"program-type-setter", &module_info_evalSast, "program-type-setter"},
  {"sexpr-prop-init", &module_info_evalSsyntax, "sexpr-prop-init"},
  {"<arguments>", &module_info_evalSast, "<arguments>"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"binding-locative", &module_info_evalSast, "binding-locative"},
  {"<ast-primitive>", &module_info_evalSast, "<ast-primitive>"},
  {"sexpr-make-anonymous-method", &module_info_evalSsyntax, "sexpr-make-anonymous-method"},
  {"$sexpr-if-tag", &module_info_evalSsyntax, "$sexpr-if-tag"},
  {"insert-box!", &module_info_evalSast_linearize, "insert-box!"},
  {"*", &module_info_gooSmath, "*"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"%get", &module_info_gooSboot, "%get"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"$sexpr-iterate-tag", &module_info_evalSsyntax, "$sexpr-iterate-tag"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"box-reference", &module_info_evalSast_linearize, "box-reference"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"<module-loader>", &module_info_evalSast, "<module-loader>"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"$sexpr-define-class-tag", &module_info_evalSsyntax, "$sexpr-define-class-tag"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"environment-module", &module_info_evalSast, "environment-module"},
  {"%su", &module_info_gooSboot, "%su"},
  {"do", &module_info_gooSmacros, "do"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"fab-g2c-module", &module_info_evalSast, "fab-g2c-module"},
  {"sexpr-prop-name", &module_info_evalSsyntax, "sexpr-prop-name"},
  {"install-initial-bindings", &module_info_evalSast, "install-initial-bindings"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"mif", &module_info_gooSboot, "mif"},
  {"$sexpr-define-method-tag", &module_info_evalSsyntax, "$sexpr-define-method-tag"},
  {"locals-bindings-setter", &module_info_evalSast, "locals-bindings-setter"},
  {"tan", &module_info_gooSmath, "tan"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"while", &module_info_gooSmacros, "while"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, "binding-dynamic-extent?-setter"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"sexpr-syntax-definition-variable", &module_info_evalSsyntax, "sexpr-syntax-definition-variable"},
  {"monitor-type", &module_info_evalSast, "monitor-type"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"get", &module_info_gooSioSport, "get"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"rem", &module_info_gooSmath, "rem"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"sexpr-def?", &module_info_evalSsyntax, "sexpr-def?"},
  {"now", &module_info_gooScolsScol, "now"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"always", &module_info_gooSruntime, "always"},
  {"tup", &module_info_gooSboot, "tup"},
  {"$sexpr-syntax-if-tag", &module_info_evalSsyntax, "$sexpr-syntax-if-tag"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"round", &module_info_gooSmath, "round"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"nil", &module_info_gooSboot, "nil"},
  {"reference-called-function?", &module_info_evalSast, "reference-called-function?"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"<predefined-application>", &module_info_evalSast, "<predefined-application>"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"$sexpr-define-tag", &module_info_evalSsyntax, "$sexpr-define-tag"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"locals-functions-setter", &module_info_evalSast, "locals-functions-setter"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"flatten-seqs", &module_info_evalSast_linearize, "flatten-seqs"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"sexpr-expand-backquote", &module_info_evalSsyntax, "sexpr-expand-backquote"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"floor", &module_info_gooSmath, "floor"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"application-known?-setter", &module_info_evalSast, "application-known?-setter"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"sexpr-define-class?", &module_info_evalSsyntax, "sexpr-define-class?"},
  {"sexpr-block-name", &module_info_evalSsyntax, "sexpr-block-name"},
  {"free-environment", &module_info_evalSast, "free-environment"},
  {"%str", &module_info_gooSboot, "%str"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"program-definitions", &module_info_evalSast_linearize, "program-definitions"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"environment-bindings", &module_info_evalSast, "environment-bindings"},
  {"<ast-method>", &module_info_evalSast, "<ast-method>"},
  {"function-temporaries", &module_info_evalSast, "function-temporaries"},
  {"max", &module_info_gooSmag, "max"},
  {"min", &module_info_gooSmag, "min"},
  {"%binding-bound?", &module_info_evalSast_eval, "%binding-bound?"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"@+", &module_info_gooSboot, "@+"},
  {"application-tail?", &module_info_evalSast, "application-tail?"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"locals-bindings", &module_info_evalSast, "locals-bindings"},
  {"%binding-value", &module_info_evalSast_eval, "%binding-value"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"bound?-reference", &module_info_evalSast, "bound?-reference"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"form-program", &module_info_evalSast_linearize, "form-program"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"locals-body", &module_info_evalSast, "locals-body"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"module-exports", &module_info_evalSast, "module-exports"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"fix-let-arguments", &module_info_evalSast, "fix-let-arguments"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"sexpr-unquote-splicing?", &module_info_evalSsyntax, "sexpr-unquote-splicing?"},
  {"reference-called-function?-setter", &module_info_evalSast, "reference-called-function?-setter"},
  {"%binding-value-setter", &module_info_evalSast_eval, "%binding-value-setter"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"<closure-creation>", &module_info_evalSast_linearize, "<closure-creation>"},
  {"add", &module_info_gooScolsScol, "add"},
  {"$sexpr-set-tag", &module_info_evalSsyntax, "$sexpr-set-tag"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"dl", &module_info_gooSboot, "dl"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"reference-frame-offset", &module_info_evalSast, "reference-frame-offset"},
  {"$sexpr-bind-exit-tag", &module_info_evalSsyntax, "$sexpr-bind-exit-tag"},
  {"constant-index-setter", &module_info_evalSast, "constant-index-setter"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"fix-let-body-setter", &module_info_evalSast, "fix-let-body-setter"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"function-index", &module_info_evalSast, "function-index"},
  {"dm", &module_info_gooSboot, "dm"},
  {"function-registers", &module_info_evalSast, "function-registers"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"<passive-program>", &module_info_evalSast, "<passive-program>"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"len", &module_info_gooStypes, "len"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"sexpr-operator", &module_info_evalSsyntax, "sexpr-operator"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"update-walk!", &module_info_evalSast_linearize, "update-walk!"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"<module-binding>", &module_info_evalSast, "<module-binding>"},
  {"*goo-build-root*", &module_info_gooSsystem, "*goo-build-root*"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"open", &module_info_gooSioSport, "open"},
  {"application-binding", &module_info_evalSast, "application-binding"},
  {"into", &module_info_gooScolsScol, "into"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"<free-environment>", &module_info_evalSast, "<free-environment>"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"binding-kind", &module_info_evalSast, "binding-kind"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"sexpr-make-method", &module_info_evalSsyntax, "sexpr-make-method"},
  {"ds", &module_info_gooSboot, "ds"},
  {"sexpr-loc-bound-names", &module_info_evalSsyntax, "sexpr-loc-bound-names"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"sexpr-def-value", &module_info_evalSsyntax, "sexpr-def-value"},
  {"monitor-test", &module_info_evalSast, "monitor-test"},
  {"module-name-to-relpath", &module_info_evalSast, "module-name-to-relpath"},
  {"<constant>", &module_info_evalSast, "<constant>"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"sexpr-make-application", &module_info_evalSsyntax, "sexpr-make-application"},
  {"function-free", &module_info_evalSast, "function-free"},
  {"%compile", &module_info_gooSsystem, "%compile"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"function-index-setter", &module_info_evalSast, "function-index-setter"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"def", &module_info_gooSboot, "def"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"do3", &module_info_gooScolsScol, "do3"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"sexpr-definition-value", &module_info_evalSsyntax, "sexpr-definition-value"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"as-copy", &module_info_gooScolsScol, "as-copy"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"alternative-alternant", &module_info_evalSast, "alternative-alternant"},
  {"asin", &module_info_gooSmath, "asin"},
  {"fix-let-arguments-setter", &module_info_evalSast, "fix-let-arguments-setter"},
  {"round/", &module_info_gooSmath, "round/"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"module-loader-module-type", &module_info_evalSast, "module-loader-module-type"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"do-static-global-bindings", &module_info_evalSast, "do-static-global-bindings"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"esc", &module_info_gooSboot, "esc"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {">=", &module_info_gooSmag, ">="},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"function-data-refs-setter", &module_info_evalSast, "function-data-refs-setter"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"match", &module_info_gooSmacros, "match"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"module-binding", &module_info_evalSast, "module-binding"},
  {"module-target-environment", &module_info_evalSast, "module-target-environment"},
  {"<global-assignment>", &module_info_evalSast, "<global-assignment>"},
  {"$goo-boot-module-name", &module_info_evalSast, "$goo-boot-module-name"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"locals-functions", &module_info_evalSast, "locals-functions"},
  {"in", &module_info_gooSioSport, "in"},
  {"constant-index", &module_info_evalSast, "constant-index"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"binding-info", &module_info_evalSast, "binding-info"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"sexpr-define-class-parents", &module_info_evalSsyntax, "sexpr-define-class-parents"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"sexpr-isa-init-values", &module_info_evalSsyntax, "sexpr-isa-init-values"},
  {"sexpr-def-variable", &module_info_evalSsyntax, "sexpr-def-variable"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"objectify-with-subtransaction", &module_info_evalSast, "objectify-with-subtransaction"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"@<", &module_info_gooSboot, "@<"},
  {"sexpr-make-begin", &module_info_evalSsyntax, "sexpr-make-begin"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"function-value", &module_info_evalSast, "function-value"},
  {"as", &module_info_gooStypes, "as"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"<definition>", &module_info_evalSast, "<definition>"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"<fix-let>", &module_info_evalSast, "<fix-let>"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"binding-dynamic-extent?", &module_info_evalSast, "binding-dynamic-extent?"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<monitor>", &module_info_evalSast, "<monitor>"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"app", &module_info_gooSmacros, "app"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"or", &module_info_gooSmacros, "or"},
  {"items", &module_info_gooScolsScol, "items"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"msg*", &module_info_gooSioSwrite, "msg*"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"sexpr-signature-value", &module_info_evalSsyntax, "sexpr-signature-value"},
  {"isa", &module_info_gooSboot, "isa"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"sexpr-block-body", &module_info_evalSsyntax, "sexpr-block-body"},
  {"and", &module_info_gooSmacros, "and"},
  {"sexpr-prop-init?", &module_info_evalSsyntax, "sexpr-prop-init?"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"monitor-handler", &module_info_evalSast, "monitor-handler"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"ct", &module_info_gooSboot, "ct"},
  {"binding-type-setter", &module_info_evalSast, "binding-type-setter"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"+", &module_info_gooSmath, "+"},
  {"find-binding", &module_info_evalSast, "find-binding"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"error", &module_info_gooSboot, "error"},
  {"sexpr-sequence->begin", &module_info_evalSsyntax, "sexpr-sequence->begin"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"global-box-value-setter", &module_info_evalSast, "global-box-value-setter"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"sexpr-syntax-if-value", &module_info_evalSsyntax, "sexpr-syntax-if-value"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"<locals>", &module_info_evalSast, "<locals>"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"$sexpr-define-generic-tag", &module_info_evalSsyntax, "$sexpr-define-generic-tag"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"find", &module_info_gooScolsScol, "find"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"load-module", &module_info_evalSast, "load-module"},
  {"def-programs", &module_info_evalSast, "def-programs"},
  {"binding-dotted?-setter", &module_info_evalSast, "binding-dotted?-setter"},
  {"binding-type", &module_info_evalSast, "binding-type"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"<immediate-constant>", &module_info_evalSast, "<immediate-constant>"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"sexpr-assignment-value", &module_info_evalSsyntax, "sexpr-assignment-value"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"bind-exit-main-fun", &module_info_evalSast, "bind-exit-main-fun"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"constant-value", &module_info_evalSast, "constant-value"},
  {"sexpr-text-of-quotation", &module_info_evalSsyntax, "sexpr-text-of-quotation"},
  {"string-join", &module_info_gooScolsSstr, "string-join"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"signature-nary?-setter", &module_info_evalSast, "signature-nary?-setter"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"form-quotations", &module_info_evalSast_linearize, "form-quotations"},
  {"init-ast", &module_info_evalSast, "init-ast"},
  {"<programs>", &module_info_evalSast, "<programs>"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"binding-inferred-type-setter", &module_info_evalSast, "binding-inferred-type-setter"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"abs", &module_info_gooSmath, "abs"},
  {"loc", &module_info_gooSboot, "loc"},
  {"<=", &module_info_gooSmag, "<="},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"sexpr-prop-type", &module_info_evalSsyntax, "sexpr-prop-type"},
  {"sexpr-isa-parent", &module_info_evalSsyntax, "sexpr-isa-parent"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"t*", &module_info_gooStypes, "t*"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"<<", &module_info_gooSmath, "<<"},
  {"<regular-application>", &module_info_evalSast, "<regular-application>"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"binding-inferred-type", &module_info_evalSast, "binding-inferred-type"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"closure-creation-free", &module_info_evalSast_linearize, "closure-creation-free"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"fix-let-types", &module_info_evalSast, "fix-let-types"},
  {"until", &module_info_gooSmacros, "until"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"sexpr-iterate->loc", &module_info_evalSsyntax, "sexpr-iterate->loc"},
  {"function-binding", &module_info_evalSast, "function-binding"},
  {"rep", &module_info_gooSboot, "rep"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"gooc-filename", &module_info_gooSsystem, "gooc-filename"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"$sexpr-prop-tag", &module_info_evalSsyntax, "$sexpr-prop-tag"},
  {"seq", &module_info_gooSboot, "seq"},
  {"new", &module_info_gooSboot, "new"},
  {"closurize-main!", &module_info_evalSast_linearize, "closurize-main!"},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, "unwind-protect-cleanup-thunk"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"==", &module_info_gooSmacros, "=="},
  {"program-quotations", &module_info_evalSast_linearize, "program-quotations"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"sexpr-monitor-expand", &module_info_evalSsyntax, "sexpr-monitor-expand"},
  {"program-type", &module_info_evalSast, "program-type"},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_evalSsyntax, "sexpr-unwind-protect-cleanup-forms"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"even?", &module_info_gooSmath, "even?"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"~", &module_info_gooSmath, "~"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"signature-nary?", &module_info_evalSast, "signature-nary?"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"function-nary?", &module_info_evalSast, "function-nary?"},
  {"fix-let-body", &module_info_evalSast, "fix-let-body"},
  {"<binding>", &module_info_evalSast, "<binding>"},
  {"fix-let-bindings", &module_info_evalSast, "fix-let-bindings"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"gather-temporaries!", &module_info_evalSast_linearize, "gather-temporaries!"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"$sexpr-define-function-tag", &module_info_evalSsyntax, "$sexpr-define-function-tag"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"remove-modules-by-name!", &module_info_evalSast, "remove-modules-by-name!"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"%im", &module_info_gooSboot, "%im"},
  {"<alternative>", &module_info_evalSast, "<alternative>"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"reference-offset", &module_info_evalSast_linearize, "reference-offset"},
  {"lst", &module_info_gooSboot, "lst"},
  {"$sexpr-quote-tag", &module_info_evalSsyntax, "$sexpr-quote-tag"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"unwind-protect-protected-thunk", &module_info_evalSast, "unwind-protect-protected-thunk"},
  {"signature-value", &module_info_evalSast, "signature-value"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"def-list", &module_info_evalSast, "def-list"},
  {"<local-reference>", &module_info_evalSast, "<local-reference>"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"add-goo-root-path", &module_info_gooSsystem, "add-goo-root-path"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"sexpr-make-macro-function", &module_info_evalSsyntax, "sexpr-make-macro-function"},
  {"acos", &module_info_gooSmath, "acos"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"fix-let-bindings-setter", &module_info_evalSast, "fix-let-bindings-setter"},
  {"ast-contains-fun?", &module_info_evalSast_linearize, "ast-contains-fun?"},
  {"analyze-dynamic-extent", &module_info_evalSast_linearize, "analyze-dynamic-extent"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"neg", &module_info_gooSmath, "neg"},
  {"logn", &module_info_gooSmath, "logn"},
  {"%put", &module_info_gooSboot, "%put"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"analyze-calls", &module_info_evalSast_linearize, "analyze-calls"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"begins-with", &module_info_gooScolsSseq, "begins-with"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"sexpr-variable-type", &module_info_evalSsyntax, "sexpr-variable-type"},
  {"function-registers-setter", &module_info_evalSast, "function-registers-setter"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"case", &module_info_gooSmacros, "case"},
  {"sexpr-syntax-definition-value", &module_info_evalSsyntax, "sexpr-syntax-definition-value"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"function-source-setter", &module_info_evalSast, "function-source-setter"},
  {"sexpr-syntax-if-else", &module_info_evalSsyntax, "sexpr-syntax-if-else"},
  {"program-register", &module_info_evalSast, "program-register"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"find-goo-file-in-path", &module_info_gooSsystem, "find-goo-file-in-path"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"environment-uses-modules", &module_info_evalSast, "environment-uses-modules"},
  {"so-load", &module_info_gooSsystem, "so-load"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"sexpr-function-signature", &module_info_evalSsyntax, "sexpr-function-signature"},
  {"$sexpr-def-tag", &module_info_evalSsyntax, "$sexpr-def-tag"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"unchecked-runtime-environment", &module_info_evalSast, "unchecked-runtime-environment"},
  {"&", &module_info_gooSmath, "&"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"signature-arity", &module_info_evalSast, "signature-arity"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"put", &module_info_gooSioSport, "put"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"sexpr-isa-init-props", &module_info_evalSsyntax, "sexpr-isa-init-props"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"fun", &module_info_gooSboot, "fun"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"<static-global-environment>", &module_info_evalSast, "<static-global-environment>"},
  {"<global-box>", &module_info_evalSast, "<global-box>"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"assignment-reference", &module_info_evalSast, "assignment-reference"},
  {"close", &module_info_gooSioSport, "close"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"$sexpr-quasiquote-tag", &module_info_evalSsyntax, "$sexpr-quasiquote-tag"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"monitor-main-thunk", &module_info_evalSast, "monitor-main-thunk"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"function-free-setter", &module_info_evalSast, "function-free-setter"},
  {"fix-let-types-setter", &module_info_evalSast, "fix-let-types-setter"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"$sexpr-locals-tag", &module_info_evalSsyntax, "$sexpr-locals-tag"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"closure-creation-index", &module_info_evalSast_linearize, "closure-creation-index"},
  {"string-split", &module_info_gooScolsSstr, "string-split"},
  {"<unwind-protect>", &module_info_evalSast, "<unwind-protect>"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"function-self-recursive?", &module_info_evalSast, "function-self-recursive?"},
  {"function-body-setter", &module_info_evalSast, "function-body-setter"},
  {"sexpr-bind-pattern-variables", &module_info_evalSsyntax, "sexpr-bind-pattern-variables"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"binding-info-setter", &module_info_evalSast, "binding-info-setter"},
  {"$char-long-names", &module_info_gooSioSread, "$char-long-names"},
  {"sequentialize", &module_info_evalSast, "sequentialize"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"binding-mutable?", &module_info_evalSast, "binding-mutable?"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"set-module-environments", &module_info_evalSast, "set-module-environments"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"<ast-primitive-definition>", &module_info_evalSast, "<ast-primitive-definition>"},
  {"binding-global-box", &module_info_evalSast, "binding-global-box"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"sexpr-if-then", &module_info_evalSsyntax, "sexpr-if-then"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"<assignment>", &module_info_evalSast, "<assignment>"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"function-signature-setter", &module_info_evalSast, "function-signature-setter"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"binding-name", &module_info_evalSast, "binding-name"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"alternative-consequent", &module_info_evalSast, "alternative-consequent"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {">>", &module_info_gooSmath, ">>"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"env-object-name", &module_info_evalSast, "env-object-name"},
  {"map2", &module_info_gooScolsScol, "map2"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"do2", &module_info_gooScolsScol, "do2"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"/", &module_info_gooSmath, "/"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"$sexpr-monitor-tag", &module_info_evalSsyntax, "$sexpr-monitor-tag"},
  {"objectify-quotation", &module_info_evalSast, "objectify-quotation"},
  {"sexpr-if-else", &module_info_evalSsyntax, "sexpr-if-else"},
  {"sexpr-unwind-protect-protected-form", &module_info_evalSsyntax, "sexpr-unwind-protect-protected-form"},
  {"^", &module_info_gooSmath, "^"},
  {"pe-msg", &module_info_gooSioSwrite, "pe-msg"},
  {"collect-temporaries!", &module_info_evalSast_linearize, "collect-temporaries!"},
  {"fab-map", &module_info_gooScolsSmap, "fab-map"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"atan", &module_info_gooSmath, "atan"},
  {"do-module-loader-modules", &module_info_evalSast, "do-module-loader-modules"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"function-body", &module_info_evalSast, "function-body"},
  {"function-source", &module_info_evalSast, "function-source"},
  {"@len", &module_info_gooSboot, "@len"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"<top-level-form>", &module_info_evalSast_linearize, "<top-level-form>"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"sexpr-prop-init-var", &module_info_evalSsyntax, "sexpr-prop-init-var"},
  {"binding-value", &module_info_evalSast, "binding-value"},
  {"<reference>", &module_info_evalSast, "<reference>"},
  {"<local-assignment>", &module_info_evalSast, "<local-assignment>"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"$sexpr-define-syntax-tag", &module_info_evalSsyntax, "$sexpr-define-syntax-tag"},
  {"report-undefined-global-bindings", &module_info_evalSast, "report-undefined-global-bindings"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"signature-specs", &module_info_evalSast, "signature-specs"},
  {"application-known?", &module_info_evalSast, "application-known?"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"form-definitions", &module_info_evalSast_linearize, "form-definitions"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"sexpr-variable?", &module_info_evalSsyntax, "sexpr-variable?"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"recurring-write", &module_info_gooSioSwrite, "recurring-write"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"$sexpr-macro-expand-tag", &module_info_evalSsyntax, "$sexpr-macro-expand-tag"},
  {"try", &module_info_gooSboot, "try"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"function-debug-name-setter", &module_info_evalSast, "function-debug-name-setter"},
  {"|", &module_info_gooSmath, "|"},
  {"function-signature", &module_info_evalSast, "function-signature"},
  {"module-name", &module_info_evalSast, "module-name"},
  {"<runtime-reference>", &module_info_evalSast, "<runtime-reference>"},
  {"reference-binding", &module_info_evalSast, "reference-binding"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"<ast-signature>", &module_info_evalSast, "<ast-signature>"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"sexpr-let->combination", &module_info_evalSsyntax, "sexpr-let->combination"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"ast-evaluate", &module_info_evalSast, "ast-evaluate"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {"<compile-time>", &module_info_evalSast, "<compile-time>"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"nul", &module_info_gooSboot, "nul"},
  {"dp", &module_info_gooSboot, "dp"},
  {"assignment-binding", &module_info_evalSast, "assignment-binding"},
  {"string-repeat", &module_info_gooScolsSstr, "string-repeat"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"sexpr-function-definition-value", &module_info_evalSsyntax, "sexpr-function-definition-value"},
  {"box-form", &module_info_evalSast_linearize, "box-form"},
  {"binding-index-setter", &module_info_evalSast, "binding-index-setter"},
  {"program-form", &module_info_evalSast_linearize, "program-form"},
  {"extract-things!", &module_info_evalSast_linearize, "extract-things!"},
  {"application-function", &module_info_evalSast, "application-function"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"<ast-function>", &module_info_evalSast, "<ast-function>"},
  {"alternative-condition", &module_info_evalSast, "alternative-condition"},
  {"<box-creation>", &module_info_evalSast_linearize, "<box-creation>"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"t<", &module_info_gooStypes, "t<"},
  {"as-lst", &module_info_evalSast, "as-lst"},
  {"signature-specs-setter", &module_info_evalSast, "signature-specs-setter"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"function-bindings", &module_info_evalSast, "function-bindings"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"sexpr-variable-name", &module_info_evalSsyntax, "sexpr-variable-name"},
  {"ast-define-binding", &module_info_evalSast, "ast-define-binding"},
  {"if", &module_info_gooSboot, "if"},
  {"find-environment-module", &module_info_evalSast, "find-environment-module"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"probe-module", &module_info_evalSast, "probe-module"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"sexpr-unquote?", &module_info_evalSsyntax, "sexpr-unquote?"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"<ast-macro-definition>", &module_info_evalSast, "<ast-macro-definition>"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"<box-write>", &module_info_evalSast_linearize, "<box-write>"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"application-arguments", &module_info_evalSast, "application-arguments"},
  {"signature-names", &module_info_evalSast, "signature-names"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"sexpr-forward-primitive?", &module_info_evalSsyntax, "sexpr-forward-primitive?"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"$sexpr-begin-tag", &module_info_evalSsyntax, "$sexpr-begin-tag"},
  {"out", &module_info_gooSioSport, "out"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"t?", &module_info_gooStypes, "t?"},
  {"sexpr-loc-raw-body", &module_info_evalSsyntax, "sexpr-loc-raw-body"},
  {"sexpr-syntax-if-then", &module_info_evalSsyntax, "sexpr-syntax-if-then"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"frame", &YevalStopYframe},
  {"prompt-for-command-expression", &YevalStopYprompt_for_command_expression},
  {"esctst", &YevalStopYesctst},
  {"eval-in", &YevalStopYeval_in},
  {"do-restart", &YevalStopYdo_restart},
  {"str-parse", &YevalStopYstr_parse},
  {"str-parse-in", &YevalStopYstr_parse_in},
  {"run", &YevalStopYrun},
  {"top", &YevalStopYtop},
  {"auto-eval", &YevalStopYauto_eval},
  {"parse", &YevalStopYparse},
  {"compiled-file?", &YevalStopYcompiled_fileQ},
  {"frame-var", &YevalStopYframe_var},
  {"parse-in", &YevalStopYparse_in},
  {"g2c-eval", &YevalStopYg2c_eval},
  {"str-eval", &YevalStopYstr_eval},
  {"<keyboard-interrupt>", &YevalStopYLkeyboard_interruptG},
  {"str-eval-in", &YevalStopYstr_eval_in},
  {"for-frames", NULL},
  {"save-image", &YevalStopYsave_image},
  {"read-file", &YevalStopYread_file},
  {"auto-run", &YevalStopYauto_run},
  {"do-stack-frames", &YevalStopYdo_stack_frames},
  {"%%bottom%%g2c-run", &YevalStopYPPbottomPPg2c_run},
  {"---main-0---", NULL},
  {"print-result-expression", &YevalStopYprint_result_expression},
  {"%%top%%top-in", &YevalStopYPPtopPPtop_in},
  {"load", &YevalStopYload},
  {"%%bottom%%ast-run", &YevalStopYPPbottomPPast_run},
  {"backtrace", &YevalStopYbacktrace},
  {"backtrace-short", &YevalStopYbacktrace_short},
  {"bt", &YevalStopYbt},
  {"load-file", &YevalStopYload_file},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"frame", "frame"},
  {"esctst", "esctst"},
  {"eval", "eval"},
  {"read-file", "read-file"},
  {"auto-eval", "auto-eval"},
  {"frame-var", "frame-var"},
  {"parse-in", "parse-in"},
  {"save-image", "save-image"},
  {"do-stack-frames", "do-stack-frames"},
  {"g2c-eval", "g2c-eval"},
  {"top", "top"},
  {"load", "load"},
  {"backtrace", "backtrace"},
  {"bt", "bt"},
  {"load-file", "load-file"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_evalStop;
MODULE_INFO module_info_evalStop = {
  "eval/top",
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
extern void load_module_evalSsyntax (void);
extern void load_module_evalSast (void);
extern void load_module_evalSast_linearize (void);
extern void load_module_evalSast_eval (void);
extern void load_module_gooSsystem (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooScols (void);
extern void load_module_gooSioSport (void);

/* EXPRESSION: */

extern void load_module_evalStop (void);

void load_module_evalStop (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSruntime();
  load_module_gooSioSread();
  load_module_gooSioSwrite();
  load_module_evalSsyntax();
  load_module_evalSast();
  load_module_evalSast_linearize();
  load_module_evalSast_eval();
  load_module_gooSsystem();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScols();
  load_module_gooSioSport();

  (P)YevalStopY___main_0___();

}

/* END OF GENERATED CODE. */
