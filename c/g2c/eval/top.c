/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: compiler/top */

EXT(YcompilerSastYLprogramG,"compiler/ast","<program>");
EXT(YcompilerSastYapplication_knownQ,"compiler/ast","application-known?");
EXT(YcompilerSastYLargumentsG,"compiler/ast","<arguments>");
DEF(YcompilerStopYtop,"compiler/top","top");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YcompilerSastYLpredefined_applicationG,"compiler/ast","<predefined-application>");
EXT(Ymay_isaQ,"runtime/boot","may-isa?");
EXT(YcompilerSastYglobal_box_value,"compiler/ast","global-box-value");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YcompilerSastYunwind_protect_protected_thunk,"compiler/ast","unwind-protect-protected-thunk");
EXT(YgooScollectionsStableYtab_growth_threshold,"goo/collections/table","tab-growth-threshold");
EXT(YcompilerSastYfix_let_types_setter,"compiler/ast","fix-let-types-setter");
DEF(YcompilerStopYstr_eval_in,"compiler/top","str-eval-in");
EXT(YcompilerSsyntaxYDsexpr_iterate_tag,"compiler/syntax","$sexpr-iterate-tag");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YcompilerSastYreport_undefined_global_bindings,"compiler/ast","report-undefined-global-bindings");
EXT(YgooScollectionsStableYtab_growth_factor,"goo/collections/table","tab-growth-factor");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YDmin_int,"runtime/boot","$min-int");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Ygen_add_met,"runtime/boot","gen-add-met");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yprop_setter,"runtime/boot","prop-setter");
EXT(YcompilerSsyntaxYDsexpr_define_function_tag,"compiler/syntax","$sexpr-define-function-tag");
EXT(Yfun_val,"runtime/boot","fun-val");
EXT(YgooScollectionsScollectionYlow_elt,"goo/collections/collection","low-elt");
DEF(YcompilerStopYg2c_run,"compiler/top","g2c-run");
EXT(YgooScollectionsScollectionYmap_keyed,"goo/collections/collection","map-keyed");
EXT(YgooScollectionsSsequenceYsub,"goo/collections/sequence","sub");
EXT(YgooScollectionsStableYLstr_tabG,"goo/collections/table","<str-tab>");
DEF(YcompilerStopYeval_in,"compiler/top","eval-in");
EXT(YcompilerSsyntaxYsexpr_forward_primitiveQ,"compiler/syntax","sexpr-forward-primitive?");
EXT(YcompilerSastYfunction_binding,"compiler/ast","function-binding");
EXT(YruntimeSruntimeYbuild_condition_for_handler_interactively,"runtime/runtime","build-condition-for-handler-interactively");
EXT(YgooScollectionsScollectionYitems,"goo/collections/collection","items");
EXT(YcompilerSsyntaxYsexpr_unquoteQ,"compiler/syntax","sexpr-unquote?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YcompilerSsyntaxYDsexpr_begin_tag,"compiler/syntax","$sexpr-begin-tag");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YcompilerSastYreference_binding,"compiler/ast","reference-binding");
EXT(YcompilerSastYload_in,"compiler/ast","load-in");
DEF(YcompilerStopYauto_run,"compiler/top","auto-run");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YcompilerSastYsignature_value_setter,"compiler/ast","signature-value-setter");
EXT(Yclass_ancestors,"runtime/boot","class-ancestors");
EXT(YcompilerSastYconstant_index_setter,"compiler/ast","constant-index-setter");
EXT(YcompilerSast_linearizeYast_contains_funQ,"compiler/ast-linearize","ast-contains-fun?");
EXT(YcompilerSastYLast_signatureG,"compiler/ast","<ast-signature>");
EXT(YcompilerSastYfix_let_types,"compiler/ast","fix-let-types");
EXT(YcompilerSast_linearizeYform_quotations,"compiler/ast-linearize","form-quotations");
EXT(YcompilerSastYcompile_time_program,"compiler/ast","compile-time-program");
EXT(YcompilerSsyntaxYsexpr_syntax_definition_value,"compiler/syntax","sexpr-syntax-definition-value");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooScollectionsSlistYLlistG,"goo/collections/list","<list>");
DEF(YcompilerStopYstr_parse_in,"compiler/top","str-parse-in");
EXT(YgooSioSportYclose,"goo/io/port","close");
DEF(YcompilerStopYesctst,"compiler/top","esctst");
EXT(YruntimeSruntimeYcondition_arguments,"runtime/runtime","condition-arguments");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YcompilerSastYsignature_naryQ_setter,"compiler/ast","signature-nary?-setter");
DEF(YcompilerStopYparse_in,"compiler/top","parse-in");
EXT(YruntimeSruntimeYLserious_conditionG,"runtime/runtime","<serious-condition>");
EXT(YcompilerSsyntaxYsexpr_let_Gcombination,"compiler/syntax","sexpr-let->combination");
EXT(YcompilerSastYbinding_mutableQ,"compiler/ast","binding-mutable?");
EXT(YPsnul,"runtime/boot","%snul");
EXT(YcompilerSastYbinding_type,"compiler/ast","binding-type");
EXT(YcompilerSastYunchecked_runtime_environment,"compiler/ast","unchecked-runtime-environment");
EXT(YgooScollectionsSsequenceYcat2,"goo/collections/sequence","cat2");
EXT(YcompilerSsyntaxYsexpr_isa_parent,"compiler/syntax","sexpr-isa-parent");
EXT(YgooScollectionsSrangeYfrom,"goo/collections/range","from");
EXT(YgooScollectionsStableYtab_growth_threshold_setter,"goo/collections/table","tab-growth-threshold-setter");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScollectionsStableYtab_growth_factor_setter,"goo/collections/table","tab-growth-factor-setter");
EXT(YLfloG,"runtime/boot","<flo>");
EXT(YLsymG,"runtime/boot","<sym>");
EXT(YcompilerSastYLast_primitive_definitionG,"compiler/ast","<ast-primitive-definition>");
EXT(Ymet_appQ,"runtime/boot","met-app?");
EXT(YcompilerSsyntaxYDsexpr_method_tag,"compiler/syntax","$sexpr-method-tag");
EXT(YruntimeSruntimeYformat_to_string,"runtime/runtime","format-to-string");
EXT(Ynew,"runtime/boot","new");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YcompilerSastYlocals_bindings,"compiler/ast","locals-bindings");
EXT(Yobject_parents,"runtime/boot","object-parents");
EXT(YcompilerSast_linearizeYLclosure_creationG,"compiler/ast-linearize","<closure-creation>");
EXT(YgooScollectionsScollectionYfold,"goo/collections/collection","fold");
EXT(YgooScollectionsStableYtab_gc_state,"goo/collections/table","tab-gc-state");
EXT(YcompilerSastYfix_let_body_setter,"compiler/ast","fix-let-body-setter");
EXT(YcompilerSastYassignment_form_setter,"compiler/ast","assignment-form-setter");
EXT(YcompilerSastYobjectify_quotation,"compiler/ast","objectify-quotation");
EXT(YOisaQ,"runtime/boot","@isa?");
EXT(Yfun_mets,"runtime/boot","fun-mets");
EXT(YcompilerSastYapplication_arguments,"compiler/ast","application-arguments");
DEF(YcompilerStopYframe_var,"compiler/top","frame-var");
EXT(YcompilerSastYinstall_initial_bindings,"compiler/ast","install-initial-bindings");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YcompilerSastYfix_let_bindings_setter,"compiler/ast","fix-let-bindings-setter");
EXT(Ygen_src_setter,"runtime/boot","gen-src-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YruntimeSruntimeYLsimple_errorG,"runtime/runtime","<simple-error>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YcompilerSastYLfree_environmentG,"compiler/ast","<free-environment>");
EXT(YcompilerSastYmodule_exports,"compiler/ast","module-exports");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooScollectionsStableYid_hash,"goo/collections/table","id-hash");
EXT(Yadd_prop,"runtime/boot","add-prop");
EXT(YcompilerSastYfunction_index_setter,"compiler/ast","function-index-setter");
EXT(YcompilerSastYLlocalsG,"compiler/ast","<locals>");
EXT(YgooScollectionsSzipYunzip,"goo/collections/zip","unzip");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YcompilerSast_linearizeYLtop_level_formG,"compiler/ast-linearize","<top-level-form>");
EXT(YruntimeSruntimeYread,"runtime/runtime","read");
EXT(YcompilerSsyntaxYDsexpr_define_generic_tag,"compiler/syntax","$sexpr-define-generic-tag");
EXT(YcompilerSsyntaxYsexpr_def_value,"compiler/syntax","sexpr-def-value");
EXT(YcompilerSastYbinding_value_setter,"compiler/ast","binding-value-setter");
EXT(YgooScollectionsScollectionYdo_keyed,"goo/collections/collection","do-keyed");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScollectionsSsequenceYpick,"goo/collections/sequence","pick");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLpropG,"runtime/boot","<prop>");
EXT(YcompilerSastYLconstantG,"compiler/ast","<constant>");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YcompilerSastYfunction_index,"compiler/ast","function-index");
EXT(YcompilerSastYapplication_knownQ_setter,"compiler/ast","application-known?-setter");
EXT(YcompilerSastYLmonitorG,"compiler/ast","<monitor>");
EXT(YgooScollectionsScollectionYelts,"goo/collections/collection","elts");
EXT(YcompilerSsyntaxYsexpr_definition_variable,"compiler/syntax","sexpr-definition-variable");
EXT(YgooSmathYS,"goo/math","/");
EXT(YcompilerSastYfunction_body_setter,"compiler/ast","function-body-setter");
EXT(YcompilerSastYLraw_constantG,"compiler/ast","<raw-constant>");
EXT(YLgenG,"runtime/boot","<gen>");
EXT(YcompilerSsyntaxYsexpr_prop_owner,"compiler/syntax","sexpr-prop-owner");
EXT(YcompilerSastYfunction_signature_setter,"compiler/ast","function-signature-setter");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YcompilerSastYassignment_reference,"compiler/ast","assignment-reference");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ygen_src,"runtime/boot","gen-src");
EXT(YcompilerSsyntaxYDsexpr_define_method_tag,"compiler/syntax","$sexpr-define-method-tag");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YcompilerSsyntaxYsexpr_define_classQ,"compiler/syntax","sexpr-define-class?");
EXT(YcompilerSast_linearizeYprogram_form,"compiler/ast-linearize","program-form");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(Yobject_props,"runtime/boot","object-props");
EXT(YisaQ,"runtime/boot","isa?");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YcompilerSsyntaxYDsexpr_bind_exit_tag,"compiler/syntax","$sexpr-bind-exit-tag");
EXT(YcompilerSastYLast_genericG,"compiler/ast","<ast-generic>");
EXT(YcompilerSastYconstant_index,"compiler/ast","constant-index");
EXT(YcompilerSsyntaxYsexpr_prop_init,"compiler/syntax","sexpr-prop-init");
EXT(YPsymbols,"runtime/boot","%symbols");
EXT(YcompilerSastYfind_environment_module,"compiler/ast","find-environment-module");
EXT(YgooScollectionsSlistYpop,"goo/collections/list","pop");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScollectionsStableYtab_hash,"goo/collections/table","tab-hash");
EXT(YcompilerSsyntaxYsexpr_text_of_quotation,"compiler/syntax","sexpr-text-of-quotation");
EXT(YcompilerSastYfunction_body,"compiler/ast","function-body");
EXT(YcompilerSastYreference_called_functionQ_setter,"compiler/ast","reference-called-function?-setter");
EXT(YgooScollectionsScollectionYmemQ,"goo/collections/collection","mem?");
EXT(YruntimeSruntimeYdescribe_handler,"runtime/runtime","describe-handler");
EXT(YcompilerSastYLruntime_assignmentG,"compiler/ast","<runtime-assignment>");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YcompilerSsyntaxYDsexpr_def_tag,"compiler/syntax","$sexpr-def-tag");
EXT(YruntimeSruntimeYrcurry,"runtime/runtime","rcurry");
EXT(YcompilerSastYLregular_applicationG,"compiler/ast","<regular-application>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScollectionsSstringYnum_to_str_base,"goo/collections/string","num-to-str-base");
EXT(YcompilerSsyntaxYsexpr_make_macro_function,"compiler/syntax","sexpr-make-macro-function");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YcompilerSastYfab_g2c_module,"compiler/ast","fab-g2c-module");
EXT(Ysig_naryQ,"runtime/boot","sig-nary?");
EXT(YPwith_monitor,"runtime/boot","%with-monitor");
EXT(YLintG,"runtime/boot","<int>");
EXT(YgooScollectionsSrangeYLrangeG,"goo/collections/range","<range>");
EXT(YLstrG,"runtime/boot","<str>");
EXT(YcompilerSastYLprogramsG,"compiler/ast","<programs>");
EXT(YgooScollectionsScollectionYallQ,"goo/collections/collection","all?");
EXT(Yfun_arity,"runtime/boot","fun-arity");
EXT(YgooScollectionsScollectionYrange_error,"goo/collections/collection","range-error");
EXT(YcompilerSsyntaxYeval,"compiler/syntax","eval");
EXT(YcompilerSastYsignature_bindings_setter,"compiler/ast","signature-bindings-setter");
EXT(YPprop,"runtime/boot","%prop");
EXT(YruntimeSruntimeYchoose_handler,"runtime/runtime","choose-handler");
EXT(YruntimeSruntimeYLerrorG,"runtime/runtime","<error>");
EXT(YruntimeSruntimeYspread,"runtime/runtime","spread");
EXT(YcompilerSastYLbind_exitG,"compiler/ast","<bind-exit>");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooScollectionsSlistYassq,"goo/collections/list","assq");
EXT(YcompilerSastYfix_let_bindings,"compiler/ast","fix-let-bindings");
EXT(YgooScollectionsScollectionYelt_or,"goo/collections/collection","elt-or");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScollectionsScollectionYelt_setter,"goo/collections/collection","elt-setter");
EXT(YPisa,"runtime/boot","%isa");
EXT(YgooScollectionsScollectionYaddX,"goo/collections/collection","add!");
EXT(YgooScollectionsScollectionYdel,"goo/collections/collection","del");
EXT(YgooScollectionsScollectionYfind_or,"goo/collections/collection","find-or");
EXT(YcompilerSastYbinding_dottedQ_setter,"compiler/ast","binding-dotted?-setter");
EXT(YcompilerSastYreference_frame_number,"compiler/ast","reference-frame-number");
EXT(YgooScollectionsScollectionYLenumG,"goo/collections/collection","<enum>");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YcompilerSastYremove_modules_by_nameX,"compiler/ast","remove-modules-by-name!");
EXT(YcompilerSastYfind_binding,"compiler/ast","find-binding");
EXT(YgooScollectionsSbufferYbuf,"goo/collections/buffer","buf");
EXT(YgooScollectionsScollectionYadd,"goo/collections/collection","add");
EXT(Ytup,"runtime/boot","tup");
EXT(YgooScollectionsScollectionYany2Q,"goo/collections/collection","any2?");
EXT(YTmacros_okQT,"runtime/boot","*macros-ok?*");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YruntimeSruntimeYidentity,"runtime/runtime","identity");
EXT(Yhandler_info_message,"runtime/boot","handler-info-message");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YcompilerSsyntaxYsexpr_isa_init_values,"compiler/syntax","sexpr-isa-init-values");
EXT(YcompilerSsyntaxYsexpr_syntax_if_then,"compiler/syntax","sexpr-syntax-if-then");
EXT(YcompilerSastYLast_primitiveG,"compiler/ast","<ast-primitive>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScollectionsSsequenceYcatX,"goo/collections/sequence","cat!");
EXT(YLreplace_generic_restartG,"runtime/boot","<replace-generic-restart>");
EXT(Ysig_unification_vars,"runtime/boot","sig-unification-vars");
EXT(YcompilerSsyntaxYsexpr_syntax_definition_variable,"compiler/syntax","sexpr-syntax-definition-variable");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YcompilerSastYmonitor_test,"compiler/ast","monitor-test");
EXT(Yhead_setter,"runtime/boot","head-setter");
EXT(Ytype_class,"runtime/boot","type-class");
EXT(Yunexec,"runtime/boot","unexec");
EXT(Yfun_sig_setter,"runtime/boot","fun-sig-setter");
EXT(Yincongruent_method_error,"runtime/boot","incongruent-method-error");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YLunionG,"runtime/boot","<union>");
EXT(YcompilerSast_linearizeYanalyze_calls,"compiler/ast-linearize","analyze-calls");
EXT(YgooScollectionsStableYtab_shrink_threshold,"goo/collections/table","tab-shrink-threshold");
EXT(YgooSmathYatan2,"goo/math","atan2");
DEF(YcompilerStopYtop_in,"compiler/top","top-in");
EXT(YLtupG,"runtime/boot","<tup>");
EXT(YgooScollectionsScollectionYnow_setter,"goo/collections/collection","now-setter");
EXT(YcompilerSast_linearizeYcollect_temporariesX,"compiler/ast-linearize","collect-temporaries!");
EXT(YcompilerSastYobjectify_with_subtransaction,"compiler/ast","objectify-with-subtransaction");
EXT(YcompilerSastYfunction_registers_setter,"compiler/ast","function-registers-setter");
EXT(YgooScollectionsSsequenceYinsX,"goo/collections/sequence","ins!");
EXT(YcompilerSsyntaxYsexpr_loc_bound_bodies,"compiler/syntax","sexpr-loc-bound-bodies");
EXT(YcompilerSast_linearizeYLbox_readG,"compiler/ast-linearize","<box-read>");
EXT(YcompilerSast_linearizeYclosure_creation_index,"compiler/ast-linearize","closure-creation-index");
EXT(YgooScollectionsScollectionYnxt,"goo/collections/collection","nxt");
EXT(YcompilerSastYmodule_syntax_environment,"compiler/ast","module-syntax-environment");
EXT(YcompilerSastYapplication_binding,"compiler/ast","application-binding");
EXT(YcompilerSastYsignature_value,"compiler/ast","signature-value");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YcompilerSastYDgoo_runtime_module_name,"compiler/ast","$goo-runtime-module-name");
EXT(YcompilerSsyntaxYDsexpr_quote_tag,"compiler/syntax","$sexpr-quote-tag");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YruntimeSruntimeYformat,"runtime/runtime","format");
EXT(YcompilerSast_linearizeYprogram_quotations,"compiler/ast-linearize","program-quotations");
EXT(YgooScollectionsSstringYTprint_baseT,"goo/collections/string","*print-base*");
EXT(YcompilerSastYenvironment_bindings,"compiler/ast","environment-bindings");
EXT(YcompilerSast_linearizeYanalyze_dynamic_extent,"compiler/ast-linearize","analyze-dynamic-extent");
EXT(Yhead,"runtime/boot","head");
EXT(YcompilerSsyntaxYsexpr_prop_init_var,"compiler/syntax","sexpr-prop-init-var");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YcompilerSastYfunction_bindings,"compiler/ast","function-bindings");
EXT(YcompilerSsyntaxYsexpr_loc_bound_signatures,"compiler/syntax","sexpr-loc-bound-signatures");
EXT(YcompilerSastYbind_exit_main_fun,"compiler/ast","bind-exit-main-fun");
EXT(YcompilerSastYLapplicationG,"compiler/ast","<application>");
EXT(Ykeyboard_interrupt,"runtime/boot","keyboard-interrupt");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YLnumG,"runtime/boot","<num>");
EXT(YLvecG,"runtime/boot","<vec>");
EXT(YgooScollectionsStableYLsetG,"goo/collections/table","<set>");
EXT(YcompilerSsyntaxYDsexpr_if_tag,"compiler/syntax","$sexpr-if-tag");
EXT(YgooSmagnitudeYmax,"goo/magnitude","max");
EXT(Yprop_getter,"runtime/boot","prop-getter");
EXT(YcompilerSastYLlocal_bindingG,"compiler/ast","<local-binding>");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YcompilerSsyntaxYDsexpr_macro_expand_tag,"compiler/syntax","$sexpr-macro-expand-tag");
EXT(YcompilerSastYbinding_index,"compiler/ast","binding-index");
EXT(YcompilerSsyntaxYsexpr_operands,"compiler/syntax","sexpr-operands");
EXT(YruntimeSruntimeYfab_handler,"runtime/runtime","fab-handler");
EXT(YTboot_macro_namesT,"runtime/boot","*boot-macro-names*");
EXT(YcompilerSsyntaxYsexpr_prop_type,"compiler/syntax","sexpr-prop-type");
EXT(YcompilerSastYLlocal_assignmentG,"compiler/ast","<local-assignment>");
EXT(YcompilerSastYmonitor_info,"compiler/ast","monitor-info");
EXT(YgooScollectionsScollectionYinto,"goo/collections/collection","into");
EXT(YcompilerSsyntaxYsexpr_loc_bound_names,"compiler/syntax","sexpr-loc-bound-names");
EXT(YcompilerSastYenv_object_name,"compiler/ast","env-object-name");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScollectionsScollectionYempty,"goo/collections/collection","empty");
EXT(YcompilerSastYLalternativeG,"compiler/ast","<alternative>");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YcompilerSastYbinding_kind,"compiler/ast","binding-kind");
EXT(YruntimeSruntimeYapp_args,"runtime/runtime","app-args");
EXT(YcompilerSsyntaxYDsexpr_quasiquote_tag,"compiler/syntax","$sexpr-quasiquote-tag");
EXT(YcompilerSsyntaxYsexpr_make_anonymous_method,"compiler/syntax","sexpr-make-anonymous-method");
EXT(YcompilerSast_linearizeYform_definitions,"compiler/ast-linearize","form-definitions");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooScollectionsScollectionYnow_key,"goo/collections/collection","now-key");
EXT(Yclass_direct_props,"runtime/boot","class-direct-props");
EXT(YgooScollectionsSzipYLzipG,"goo/collections/zip","<zip>");
EXT(YcompilerSsyntaxYsexpr_if_test,"compiler/syntax","sexpr-if-test");
EXT(YgooStypesYLproductG,"goo/types","<product>");
DEF(YcompilerStopYsave_image,"compiler/top","save-image");
EXT(YgooSioSwriteYdisplay,"goo/io/write","display");
EXT(YcompilerSastYLast_macro_definitionG,"compiler/ast","<ast-macro-definition>");
EXT(YcompilerSastYLsequentialG,"compiler/ast","<sequential>");
EXT(YcompilerSsyntaxYsexpr_method_signature,"compiler/syntax","sexpr-method-signature");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YcompilerSsyntaxYsexpr_function_signature,"compiler/syntax","sexpr-function-signature");
EXT(YcompilerSastYfree_environment,"compiler/ast","free-environment");
EXT(YLmetG,"runtime/boot","<met>");
EXT(YruntimeSruntimeYLconditionG,"runtime/runtime","<condition>");
EXT(YcompilerSastYLmoduleG,"compiler/ast","<module>");
EXT(YgooScollectionsScollectionYzap,"goo/collections/collection","zap");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YcompilerSsyntaxYsexpr_isa_prop_inits,"compiler/syntax","sexpr-isa-prop-inits");
EXT(YcompilerSsyntaxYDsexpr_prop_tag,"compiler/syntax","$sexpr-prop-tag");
EXT(YgooScollectionsSbufferYpush_lastX,"goo/collections/buffer","push-last!");
EXT(YgooScollectionsSbufferYlen_setter,"goo/collections/buffer","len-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YcompilerSast_linearizeYLfree_referenceG,"compiler/ast-linearize","<free-reference>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YcompilerSast_linearizeYregister_allocateX,"compiler/ast-linearize","register-allocate!");
EXT(YgooSmagnitudeYmin,"goo/magnitude","min");
EXT(YcompilerSsyntaxYDsexpr_locals_tag,"compiler/syntax","$sexpr-locals-tag");
EXT(Yprop_init,"runtime/boot","prop-init");
EXT(YcompilerSsyntaxYsexpr_fab_setter_name,"compiler/syntax","sexpr-fab-setter-name");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(Yfun_naryQ,"runtime/boot","fun-nary?");
EXT(YcompilerSastYdo_named_static_global_bindings,"compiler/ast","do-named-static-global-bindings");
EXT(YruntimeSruntimeYinvoke_handler_interactively,"runtime/runtime","invoke-handler-interactively");
EXT(YcompilerSsyntaxYsexpr_assignment_variable,"compiler/syntax","sexpr-assignment-variable");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScollectionsSsequenceYlast,"goo/collections/sequence","last");
EXT(YLsubclassG,"runtime/boot","<subclass>");
EXT(YgooScollectionsScollectionYnow,"goo/collections/collection","now");
EXT(YcompilerSsyntaxYsexpr_function_definition_variable,"compiler/syntax","sexpr-function-definition-variable");
EXT(YcompilerSastYLstatic_global_environmentG,"compiler/ast","<static-global-environment>");
EXT(YcompilerSast_linearizeYliftX,"compiler/ast-linearize","lift!");
DEF(YcompilerStopYLkeyboard_interruptG,"compiler/top","<keyboard-interrupt>");
EXT(YcompilerSsyntaxYDsexpr_syntax_if_tag,"compiler/syntax","$sexpr-syntax-if-tag");
EXT(YcompilerSastYfunction_free_setter,"compiler/ast","function-free-setter");
DEF(YcompilerStopYread_file,"compiler/top","read-file");
EXT(YcompilerSastYprogram_register_setter,"compiler/ast","program-register-setter");
EXT(Yclass_descendents,"runtime/boot","class-descendents");
EXT(YruntimeSruntimeYLrestartG,"runtime/runtime","<restart>");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooScollectionsStableYtab_shrink_threshold_setter,"goo/collections/table","tab-shrink-threshold-setter");
EXT(YcompilerSast_linearizeYLbox_creationG,"compiler/ast-linearize","<box-creation>");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Ygen_refs_setter,"runtime/boot","gen-refs-setter");
EXT(YgooScollectionsSlistYpush,"goo/collections/list","push");
EXT(YcompilerSastYfunction_registers,"compiler/ast","function-registers");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScollectionsSstringYascii_limit,"goo/collections/string","ascii-limit");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YcompilerSast_linearizeYreference_offset,"compiler/ast-linearize","reference-offset");
EXT(YcompilerSastYbinding_type_setter,"compiler/ast","binding-type-setter");
EXT(Yprop_value_setter,"runtime/boot","prop-value-setter");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScollectionsScollectionYfinQ,"goo/collections/collection","fin?");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YLchrG,"runtime/boot","<chr>");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YLflatG,"runtime/boot","<flat>");
EXT(YcompilerSsyntaxYDsexpr_define_class_tag,"compiler/syntax","$sexpr-define-class-tag");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(Yhandler_info_arguments,"runtime/boot","handler-info-arguments");
EXT(YcompilerSsyntaxYDsexpr_define_syntax_tag,"compiler/syntax","$sexpr-define-syntax-tag");
EXT(Ytype_error,"runtime/boot","type-error");
EXT(YgooSmathYT,"goo/math","*");
EXT(YcompilerSastYmodule_name,"compiler/ast","module-name");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YsubtypeQ,"runtime/boot","subtype?");
EXT(Ygen_refs,"runtime/boot","gen-refs");
EXT(YcompilerSastYinit_environment_for_eval,"compiler/ast","init-environment-for-eval");
EXT(Ynot,"runtime/boot","not");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YcompilerSastYsignature_bindings,"compiler/ast","signature-bindings");
EXT(YcompilerSastYsignature_naryQ,"compiler/ast","signature-nary?");
EXT(YcompilerSsyntaxYDsexpr_set_tag,"compiler/syntax","$sexpr-set-tag");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YruntimeSruntimeYLsimple_conditionG,"runtime/runtime","<simple-condition>");
EXT(YcompilerSsyntaxYDsexpr_unwind_protect_tag,"compiler/syntax","$sexpr-unwind-protect-tag");
EXT(YruntimeSruntimeYapp_filename,"runtime/runtime","app-filename");
EXT(YcompilerSastYmonitor_main_thunk,"compiler/ast","monitor-main-thunk");
EXT(YgooScollectionsSsequenceY3rd,"goo/collections/sequence","3rd");
EXT(YgooScollectionsSsequenceYpos,"goo/collections/sequence","pos");
EXT(YcompilerSsyntaxYsexpr_loc_raw_body,"compiler/syntax","sexpr-loc-raw-body");
EXT(YcompilerSastYfunction_source_setter,"compiler/ast","function-source-setter");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScollectionsScollectionYfill,"goo/collections/collection","fill");
EXT(YgooScollectionsSlistYassqn,"goo/collections/list","assqn");
EXT(Yfab_sym,"runtime/boot","fab-sym");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ylst,"runtime/boot","lst");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmagnitudeYGE,"goo/magnitude",">=");
EXT(YruntimeSruntimeYbuild_condition_interactively,"runtime/runtime","build-condition-interactively");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Ysig_specs,"runtime/boot","sig-specs");
EXT(YOlst,"runtime/boot","@lst");
EXT(YcompilerSastYLboundQG,"compiler/ast","<bound?>");
EXT(YcompilerSast_linearizeYcollect_registersX,"compiler/ast-linearize","collect-registers!");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YcompilerSastYbinding_native_toQ,"compiler/ast","binding-native-to?");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScollectionsSassocYassocs_test_setter,"goo/collections/assoc","assocs-test-setter");
EXT(YgooScollectionsSstringYascii_whitespaces,"goo/collections/string","ascii-whitespaces");
EXT(YcompilerSastYsequentialize,"compiler/ast","sequentialize");
EXT(YcompilerSastYassignment_form,"compiler/ast","assignment-form");
EXT(YcompilerSast_linearizeYupdate_walkX,"compiler/ast-linearize","update-walk!");
EXT(YcompilerSastYLimmediate_constantG,"compiler/ast","<immediate-constant>");
EXT(Ynul,"runtime/boot","nul");
EXT(Yerror,"runtime/boot","error");
EXT(YLsingletonG,"runtime/boot","<singleton>");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YcompilerSastYfunction_value,"compiler/ast","function-value");
EXT(YcompilerSastYast_define_binding,"compiler/ast","ast-define-binding");
DEF(YcompilerStopYframe,"compiler/top","frame");
EXT(YcompilerSastYbinding_inferred_type_setter,"compiler/ast","binding-inferred-type-setter");
EXT(YcompilerSastYset_module_environments,"compiler/ast","set-module-environments");
EXT(YcompilerSast_linearizeYextract_thingsX,"compiler/ast-linearize","extract-things!");
EXT(YgooScollectionsSrangeYrange,"goo/collections/range","range");
EXT(YruntimeSruntimeYsig,"runtime/runtime","sig");
EXT(YruntimeSruntimeYcompose,"runtime/runtime","compose");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLfunG,"runtime/boot","<fun>");
EXT(YgooScollectionsSsequenceYins,"goo/collections/sequence","ins");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YcompilerSsyntaxYsexpr_function_body,"compiler/syntax","sexpr-function-body");
EXT(YcompilerSsyntaxYsexpr_variableQ,"compiler/syntax","sexpr-variable?");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YcompilerSsyntaxYsexpr_iterate_Gloc,"compiler/syntax","sexpr-iterate->loc");
EXT(YcompilerSastYlocals_bindings_setter,"compiler/ast","locals-bindings-setter");
EXT(YcompilerSastYfunction_source,"compiler/ast","function-source");
EXT(YcompilerSsyntaxYsexpr_assignment_value,"compiler/syntax","sexpr-assignment-value");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YcompilerSastYLcompile_timeG,"compiler/ast","<compile-time>");
EXT(YTboot_macro_expandersT,"runtime/boot","*boot-macro-expanders*");
EXT(YgooScollectionsSstepYLstepG,"goo/collections/step","<step>");
EXT(Yprop_boundQ,"runtime/boot","prop-bound?");
EXT(YcompilerSast_linearizeYflatten_seqs,"compiler/ast-linearize","flatten-seqs");
DEF(YcompilerStopYg2c_eval,"compiler/top","g2c-eval");
EXT(YgooScollectionsSstepYfirst_then,"goo/collections/step","first-then");
EXT(YcompilerSsyntaxYsexpr_syntax_if_value,"compiler/syntax","sexpr-syntax-if-value");
DEF(YcompilerStopYauto_eval,"compiler/top","auto-eval");
DEF(YcompilerStopYdo_stack_frames,"compiler/top","do-stack-frames");
DEF(YcompilerStopYstr_eval,"compiler/top","str-eval");
EXT(Yfile_opening_error,"runtime/boot","file-opening-error");
EXT(YgooScollectionsSsequenceYdo_key_vals,"goo/collections/sequence","do-key-vals");
EXT(YcompilerSastYsignature_arity_setter,"compiler/ast","signature-arity-setter");
EXT(YPPmacro,"runtime/boot","%%macro");
EXT(YcompilerSastYboundQ_reference,"compiler/ast","bound?-reference");
EXT(Ysig_val,"runtime/boot","sig-val");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YcompilerSast_linearizeYclosurize_mainX,"compiler/ast-linearize","closurize-main!");
EXT(YLlstG,"runtime/boot","<lst>");
EXT(YcompilerSsyntaxYsexpr_fab_getter,"compiler/syntax","sexpr-fab-getter");
EXT(Yfab_class,"runtime/boot","fab-class");
EXT(YLlogG,"runtime/boot","<log>");
EXT(YgooSmathYC,"goo/math","^");
DEF(YcompilerStopYbacktrace,"compiler/top","backtrace");
EXT(YLsimple_handler_infoG,"runtime/boot","<simple-handler-info>");
EXT(YcompilerSastYsignature_names,"compiler/ast","signature-names");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YcompilerSastYlocals_body_setter,"compiler/ast","locals-body-setter");
EXT(Yfun_specs,"runtime/boot","fun-specs");
EXT(Ytype_object,"runtime/boot","type-object");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Yfun_name_setter,"runtime/boot","fun-name-setter");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YcompilerSastYbinding_index_setter,"compiler/ast","binding-index-setter");
EXT(YcompilerSastYLpassive_programG,"compiler/ast","<passive-program>");
EXT(YgooScollectionsSsequenceYrev,"goo/collections/sequence","rev");
EXT(YcompilerSastYconstant_value,"compiler/ast","constant-value");
EXT(YgooScollectionsSsequenceY1st,"goo/collections/sequence","1st");
EXT(YgooScollectionsScollectionYenum,"goo/collections/collection","enum");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YcompilerSsyntaxYsexpr_if_else,"compiler/syntax","sexpr-if-else");
EXT(YcompilerSastYbinding_dynamic_extentQ,"compiler/ast","binding-dynamic-extent?");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YcompilerSastYlocals_body,"compiler/ast","locals-body");
EXT(YgooSmagnitudeYLE,"goo/magnitude","<=");
EXT(YcompilerSastYbinding_dynamic_extentQ_setter,"compiler/ast","binding-dynamic-extent?-setter");
EXT(Yunknown_function_error,"runtime/boot","unknown-function-error");
EXT(YgooScollectionsStableYtab_test,"goo/collections/table","tab-test");
EXT(YgooScollectionsScollectionYelt_default,"goo/collections/collection","elt-default");
EXT(YcompilerSsyntaxYsexpr_variable_type,"compiler/syntax","sexpr-variable-type");
EXT(YcompilerSastYfunction_data_refs_setter,"compiler/ast","function-data-refs-setter");
EXT(YPvnul,"runtime/boot","%vnul");
EXT(Ysym_name,"runtime/boot","sym-name");
EXT(YruntimeSruntimeYLhandler_infoG,"runtime/runtime","<handler-info>");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooScollectionsScollectionYfind,"goo/collections/collection","find");
EXT(YruntimeSruntimeYlist_handlers,"runtime/runtime","list-handlers");
EXT(YcompilerSastYapplication_function,"compiler/ast","application-function");
DEF(YcompilerStopYprint_result_expression,"compiler/top","print-result-expression");
EXT(YruntimeSruntimeYhandler_matchesQ,"runtime/runtime","handler-matches?");
EXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YPdefine_method,"runtime/boot","%define-method");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YcompilerSsyntaxYsexpr_definition_value,"compiler/syntax","sexpr-definition-value");
EXT(Yfun_name,"runtime/boot","fun-name");
EXT(YcompilerSsyntaxYsexpr_signature_value,"compiler/syntax","sexpr-signature-value");
EXT(YcompilerSastYLmodule_bindingG,"compiler/ast","<module-binding>");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YcompilerSsyntaxYsexpr_method_body,"compiler/syntax","sexpr-method-body");
EXT(YgooScollectionsSstringYstr_to_num,"goo/collections/string","str-to-num");
EXT(YcompilerSastYalternative_consequent,"compiler/ast","alternative-consequent");
DEF(YcompilerStopYparse,"compiler/top","parse");
EXT(YcompilerSastYast_evaluate,"compiler/ast","ast-evaluate");
EXT(Yobject_class,"runtime/boot","object-class");
EXT(Yprop_owner,"runtime/boot","prop-owner");
EXT(YcompilerSastYLglobal_referenceG,"compiler/ast","<global-reference>");
EXT(YgooScollectionsSrangeYrange_by,"goo/collections/range","range-by");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YcompilerSsyntaxYsexpr_make_application,"compiler/syntax","sexpr-make-application");
EXT(YcompilerSsyntaxYsexpr_operator,"compiler/syntax","sexpr-operator");
EXT(YcompilerSsyntaxYsexpr_unwind_protect_cleanup_forms,"compiler/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YcompilerSastYLruntime_referenceG,"compiler/ast","<runtime-reference>");
EXT(YcompilerSast_linearizeYgather_temporariesX,"compiler/ast-linearize","gather-temporaries!");
DEF(YcompilerStopYload,"compiler/top","load");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YcompilerSastYfunction_data_refs,"compiler/ast","function-data-refs");
EXT(YgooScollectionsScollectionYLtabG,"goo/collections/collection","<tab>");
EXT(YcompilerSastYbinding_global_box,"compiler/ast","binding-global-box");
EXT(YcompilerSsyntaxYsexpr_signature_parameters,"compiler/syntax","sexpr-signature-parameters");
EXT(YcompilerSastYsignature_specs,"compiler/ast","signature-specs");
EXT(YcompilerSast_linearizeYinsert_boxX,"compiler/ast-linearize","insert-box!");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Yprop_value,"runtime/boot","prop-value");
EXT(YgooScollectionsSlistYlist,"goo/collections/list","list");
EXT(YcompilerSsyntaxYsexpr_expand_backquote,"compiler/syntax","sexpr-expand-backquote");
EXT(Yclass_parents,"runtime/boot","class-parents");
EXT(YgooScollectionsStableYDpermanent_hash_state,"goo/collections/table","$permanent-hash-state");
DEF(YcompilerStopYrun,"compiler/top","run");
EXT(YcompilerSastYprogram_register,"compiler/ast","program-register");
EXT(YgooSmagnitudeYG,"goo/magnitude",">");
EXT(YruntimeSruntimeYDdefault_handler_info,"runtime/runtime","$default-handler-info");
EXT(YcompilerSsyntaxYsexpr_if_then,"compiler/syntax","sexpr-if-then");
EXT(YcompilerSastYenvironment_uses_modules,"compiler/ast","environment-uses-modules");
EXT(YgooScollectionsSsequenceYvals_to_str,"goo/collections/sequence","vals-to-str");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YcompilerSastYmodule_name_to_relpath,"compiler/ast","module-name-to-relpath");
EXT(YgooScollectionsSmapYfab_map,"goo/collections/map","fab-map");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScollectionsScycleYcycle,"goo/collections/cycle","cycle");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScollectionsScollectionYkey_test,"goo/collections/collection","key-test");
EXT(YruntimeSruntimeYdefault_handler,"runtime/runtime","default-handler");
EXT(YgooScollectionsSsequenceYrange_checkQ,"goo/collections/sequence","range-check?");
EXT(YcompilerSastYLfix_letG,"compiler/ast","<fix-let>");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YcompilerSastYenvironment_module,"compiler/ast","environment-module");
EXT(YcompilerSastYfunction_self_recursiveQ_setter,"compiler/ast","function-self-recursive?-setter");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YLseqG,"runtime/boot","<seq>");
EXT(Yprop_type,"runtime/boot","prop-type");
EXT(YLanyG,"runtime/boot","<any>");
EXT(YcompilerSsyntaxYsexpr_prop_name,"compiler/syntax","sexpr-prop-name");
EXT(YcompilerSastYload_module,"compiler/ast","load-module");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YruntimeSruntimeYTgensym_counterT,"runtime/runtime","*gensym-counter*");
EXT(YcompilerSastYfunction_self_recursiveQ,"compiler/ast","function-self-recursive?");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YcompilerSsyntaxYsexpr_block_body,"compiler/syntax","sexpr-block-body");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YcompilerSastYfix_let_arguments_setter,"compiler/ast","fix-let-arguments-setter");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YTrestarts_okQT,"runtime/boot","*restarts-ok?*");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YruntimeSruntimeYloc_val_setter,"runtime/runtime","loc-val-setter");
EXT(YcompilerSastYobjectify_signature,"compiler/ast","objectify-signature");
EXT(YcompilerSastYLcomputed_programG,"compiler/ast","<computed-program>");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(Yclass_props,"runtime/boot","class-props");
EXT(YcompilerSastYalternative_condition,"compiler/ast","alternative-condition");
EXT(YDmax_int,"runtime/boot","$max-int");
EXT(YcompilerSastYdo_module_loader_modules,"compiler/ast","do-module-loader-modules");
EXT(YcompilerSast_linearizeYbox_reference,"compiler/ast-linearize","box-reference");
EXT(YgooSmagnitudeYL,"goo/magnitude","<");
EXT(YcompilerSsyntaxYsexpr_make_begin,"compiler/syntax","sexpr-make-begin");
EXT(YgooScollectionsScollectionYdo3,"goo/collections/collection","do3");
EXT(YcompilerSastYbinding_locative,"compiler/ast","binding-locative");
EXT(YcompilerSastYprogram_type_setter,"compiler/ast","program-type-setter");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YPprop_unbound_error,"runtime/boot","%prop-unbound-error");
EXT(YcompilerSastYunwind_protect_cleanup_thunk,"compiler/ast","unwind-protect-cleanup-thunk");
EXT(YgooScollectionsSassocYLassocsG,"goo/collections/assoc","<assocs>");
EXT(YruntimeSruntimeYdefault_handler_description,"runtime/runtime","default-handler-description");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(Yvec,"runtime/boot","vec");
EXT(YruntimeSruntimeYdescribe_condition,"runtime/runtime","describe-condition");
EXT(YTboot_macro_module_namesT,"runtime/boot","*boot-macro-module-names*");
EXT(YcompilerSastYLreal_referenceG,"compiler/ast","<real-reference>");
EXT(YcompilerSsyntaxYsexpr_def_variable,"compiler/syntax","sexpr-def-variable");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YcompilerSsyntaxYDsexpr_define_tag,"compiler/syntax","$sexpr-define-tag");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScollectionsSsequenceYdel_dups,"goo/collections/sequence","del-dups");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YLsigG,"runtime/boot","<sig>");
EXT(YgooScollectionsSbufferYLbufG,"goo/collections/buffer","<buf>");
EXT(YcompilerSsyntaxYsexpr_syntax_if_else,"compiler/syntax","sexpr-syntax-if-else");
EXT(YcompilerSsyntaxYDsexpr_isa_tag,"compiler/syntax","$sexpr-isa-tag");
EXT(YcompilerSastYbinding_inferred_type,"compiler/ast","binding-inferred-type");
EXT(YcompilerSsyntaxYsexpr_block_name,"compiler/syntax","sexpr-block-name");
EXT(YcompilerSastYas_lst,"compiler/ast","as-lst");
EXT(YgooScollectionsScollectionYas_copy,"goo/collections/collection","as-copy");
EXT(YgooScollectionsScollectionYkey_type,"goo/collections/collection","key-type");
EXT(Yfun_names,"runtime/boot","fun-names");
EXT(YcompilerSastYdo_static_global_bindings,"compiler/ast","do-static-global-bindings");
EXT(Yfind_setter,"runtime/boot","find-setter");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YcompilerSsyntaxYsexpr_unwind_protect_protected_form,"compiler/syntax","sexpr-unwind-protect-protected-form");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YcompilerSsyntaxYsexpr_defQ,"compiler/syntax","sexpr-def?");
EXT(YcompilerSsyntaxYsexpr_fab_setter,"compiler/syntax","sexpr-fab-setter");
EXT(YcompilerSsyntaxYsexpr_isa_init_props,"compiler/syntax","sexpr-isa-init-props");
EXT(YcompilerSsyntaxYsexpr_unquote_splicingQ,"compiler/syntax","sexpr-unquote-splicing?");
EXT(YgooScollectionsSsequenceYsub_setter,"goo/collections/sequence","sub-setter");
EXT(YcompilerSastYbinding_name,"compiler/ast","binding-name");
EXT(YcompilerSsyntaxYDsexpr_let_tag,"compiler/syntax","$sexpr-let-tag");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YcompilerSastYDgoo_boot_module_name,"compiler/ast","$goo-boot-module-name");
EXT(YcompilerSastYfix_let_body,"compiler/ast","fix-let-body");
EXT(YruntimeSruntimeYLhandlerG,"runtime/runtime","<handler>");
EXT(YcompilerSastYfix_let_arguments,"compiler/ast","fix-let-arguments");
EXT(YgooSmathYE,"goo/math","=");
EXT(YOall2Q,"runtime/boot","@all2?");
EXT(YruntimeSruntimeYcondition_message,"runtime/runtime","condition-message");
EXT(YcompilerSastYbinding_value,"compiler/ast","binding-value");
EXT(YgooScollectionsSsequenceYrange_check,"goo/collections/sequence","range-check");
EXT(YcompilerSastYLmodule_loaderG,"compiler/ast","<module-loader>");
EXT(YgooScollectionsScollectionYlow_elt_setter,"goo/collections/collection","low-elt-setter");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YcompilerSastYlocals_functions_setter,"compiler/ast","locals-functions-setter");
EXT(YcompilerSastYLlocal_referenceG,"compiler/ast","<local-reference>");
DEF(YcompilerStopYdo_restart,"compiler/top","do-restart");
EXT(Ynil,"runtime/boot","nil");
EXT(YcompilerSastYLast_functionG,"compiler/ast","<ast-function>");
EXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YcompilerSastYLglobal_boxG,"compiler/ast","<global-box>");
EXT(YcompilerSast_linearizeYclosure_creation_free,"compiler/ast-linearize","closure-creation-free");
EXT(YLcolG,"runtime/boot","<col>");
EXT(YcompilerSastYfunction_temporaries_setter,"compiler/ast","function-temporaries-setter");
EXT(Ysig_names,"runtime/boot","sig-names");
EXT(YLclassG,"runtime/boot","<class>");
EXT(YcompilerSastYfunction_signature,"compiler/ast","function-signature");
EXT(YgooScollectionsScollectionYmap2,"goo/collections/collection","map2");
EXT(YcompilerSastYlocals_functions,"compiler/ast","locals-functions");
EXT(YcompilerSastYglobal_box_value_setter,"compiler/ast","global-box-value-setter");
EXT(YgooScollectionsScycleYLcycleG,"goo/collections/cycle","<cycle>");
EXT(YcompilerSast_linearizeYform_program,"compiler/ast-linearize","form-program");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(Yfab_gen,"runtime/boot","fab-gen");
DEF(YcompilerStopYbt,"compiler/top","bt");
EXT(YcompilerSastYalternative_alternant,"compiler/ast","alternative-alternant");
EXT(YcompilerSsyntaxYsexpr_monitor_expand,"compiler/syntax","sexpr-monitor-expand");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YcompilerSastYprobe_module,"compiler/ast","probe-module");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YcompilerSastYsignature_specs_setter,"compiler/ast","signature-specs-setter");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YcompilerSastYmodule_target_environment,"compiler/ast","module-target-environment");
EXT(YcompilerSast_linearizeYLbox_writeG,"compiler/ast-linearize","<box-write>");
EXT(YcompilerSastYbinding_info,"compiler/ast","binding-info");
EXT(YgooScollectionsStableYcase_insensitive_string_hash,"goo/collections/table","case-insensitive-string-hash");
EXT(YcompilerSastYLbindingG,"compiler/ast","<binding>");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YcompilerSastYbinding_global_box_setter,"compiler/ast","binding-global-box-setter");
EXT(YcompilerSastYLreferenceG,"compiler/ast","<reference>");
EXT(YcompilerSsyntaxYsexpr_syntax_if_pattern,"compiler/syntax","sexpr-syntax-if-pattern");
EXT(YcompilerSastYsignature_names_setter,"compiler/ast","signature-names-setter");
EXT(YruntimeSruntimeYalways,"runtime/runtime","always");
EXT(YruntimeSruntimeYhandler_function,"runtime/runtime","handler-function");
EXT(YcompilerSastYLglobal_assignmentG,"compiler/ast","<global-assignment>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScollectionsSbufferYlenSfill_setter,"goo/collections/buffer","len/fill-setter");
EXT(YcompilerSast_linearizeYTregister_passiveQT,"compiler/ast-linearize","*register-passive?*");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YcompilerSastYmodule_loader_module_type,"compiler/ast","module-loader-module-type");
EXT(YcompilerSastYLdefinitionG,"compiler/ast","<definition>");
EXT(YcompilerSastYmonitor_handler,"compiler/ast","monitor-handler");
EXT(YgooScollectionsSsequenceYdel_vals,"goo/collections/sequence","del-vals");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YcompilerSastYLunwind_protectG,"compiler/ast","<unwind-protect>");
EXT(YcompilerSsyntaxYDsexpr_monitor_tag,"compiler/syntax","$sexpr-monitor-tag");
EXT(YcompilerSsyntaxYsexpr_function_definition_value,"compiler/syntax","sexpr-function-definition-value");
EXT(YcompilerSsyntaxYsexpr_define_class_parents,"compiler/syntax","sexpr-define-class-parents");
EXT(YcompilerSastYbinding_info_setter,"compiler/ast","binding-info-setter");
EXT(Ytail_setter,"runtime/boot","tail-setter");
EXT(YcompilerSast_linearizeYreference_selfQ,"compiler/ast-linearize","reference-self?");
EXT(YgooSmathYA,"goo/math","+");
EXT(YcompilerSastYfunction_naryQ,"compiler/ast","function-nary?");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Ysig_arity,"runtime/boot","sig-arity");
EXT(YgooScollectionsScollectionYkeys,"goo/collections/collection","keys");
EXT(YgooScollectionsScollectionYfoldA,"goo/collections/collection","fold+");
EXT(YcompilerSastYsignature_arity,"compiler/ast","signature-arity");
EXT(YcompilerSastYfunction_temporaries,"compiler/ast","function-temporaries");
EXT(YruntimeSruntimeYcurry,"runtime/runtime","curry");
EXT(YcompilerSastYfunction_debug_name,"compiler/ast","function-debug-name");
EXT(YgooScollectionsStableYcase_insensitive_string_equal,"goo/collections/table","case-insensitive-string-equal");
EXT(YgooScollectionsScollectionYdo2,"goo/collections/collection","do2");
EXT(YLmagG,"runtime/boot","<mag>");
EXT(YcompilerSsyntaxYsexpr_prop_initQ,"compiler/syntax","sexpr-prop-init?");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YgooScollectionsSstringYstr,"goo/collections/string","str");
EXT(YcompilerSastYruntime_environment,"compiler/ast","runtime-environment");
EXT(YcompilerSastYprogram_type,"compiler/ast","program-type");
EXT(YcompilerSast_linearizeYprogram_definitions,"compiler/ast-linearize","program-definitions");
EXT(YcompilerSastYfunction_debug_name_setter,"compiler/ast","function-debug-name-setter");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YcompilerSast_linearizeYbox_form,"compiler/ast-linearize","box-form");
DEF(YcompilerStopYstr_parse,"compiler/top","str-parse");
EXT(YLoptsG,"runtime/boot","<opts>");
EXT(Yfind_getter,"runtime/boot","find-getter");
EXT(YcompilerSast_linearizeYLrenamed_local_bindingG,"compiler/ast-linearize","<renamed-local-binding>");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScollectionsScollectionYdup,"goo/collections/collection","dup");
DEF(YcompilerStopYast_run,"compiler/top","ast-run");
EXT(Ytail,"runtime/boot","tail");
EXT(YgooScollectionsScollectionYelt_type,"goo/collections/collection","elt-type");
EXT(YcompilerSsyntaxYsexpr_sequence_Gbegin,"compiler/syntax","sexpr-sequence->begin");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YcompilerSastYfunction_free,"compiler/ast","function-free");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(Ywrong_number_arguments_error,"runtime/boot","wrong-number-arguments-error");
EXT(YcompilerSastYLfab_listG,"compiler/ast","<fab-list>");
EXT(YgooScollectionsSsequenceYbelow,"goo/collections/sequence","below");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YLtypeG,"runtime/boot","<type>");
EXT(Yord_app_mets,"runtime/boot","ord-app-mets");
EXT(YcompilerSsyntaxYsexpr_bind_pattern_variables,"compiler/syntax","sexpr-bind-pattern-variables");
EXT(YcompilerSastYinit_ast,"compiler/ast","init-ast");
EXT(YcompilerSastYassignment_binding,"compiler/ast","assignment-binding");
EXT(YruntimeSruntimeYloc_val,"runtime/runtime","loc-val");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
DEF(YcompilerStopYload_from,"compiler/top","load-from");
EXT(YLlocG,"runtime/boot","<loc>");
EXT(YgooScollectionsSzipYzip,"goo/collections/zip","zip");
DEF(YcompilerStopYprompt_for_command_expression,"compiler/top","prompt-for-command-expression");
EXT(YcompilerSastYbinding_module_name,"compiler/ast","binding-module-name");
EXT(YcompilerSastYapplication_tailQ,"compiler/ast","application-tail?");
EXT(YgooScollectionsSbufferYpop_lastX,"goo/collections/buffer","pop-last!");
EXT(YcompilerSastYbinding_dottedQ,"compiler/ast","binding-dotted?");
EXT(YgooScollectionsScollectionYfab,"goo/collections/collection","fab");
EXT(Ytype_elts,"runtime/boot","type-elts");
EXT(YcompilerSastYmodule_binding,"compiler/ast","module-binding");
EXT(YTreport_prop_unbound_errorsQT,"runtime/boot","*report-prop-unbound-errors?*");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YcompilerSastYLast_methodG,"compiler/ast","<ast-method>");
EXT(YgooScollectionsSassocYassocs_test,"goo/collections/assoc","assocs-test");
EXT(YgooScollectionsSsequenceYfinds,"goo/collections/sequence","finds");
EXT(YcompilerSastYreference_frame_offset,"compiler/ast","reference-frame-offset");
EXT(YgooSmathYround,"goo/math","round");
EXT(YcompilerSastYreference_called_functionQ,"compiler/ast","reference-called-function?");
EXT(YcompilerSastYLmodule_binding_referenceG,"compiler/ast","<module-binding-reference>");
EXT(YcompilerSsyntaxYsexpr_variable_name,"compiler/syntax","sexpr-variable-name");
EXT(YcompilerSastYmonitor_type,"compiler/ast","monitor-type");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScollectionsSmapYLmapG,"goo/collections/map","<map>");
EXT(YgooScollectionsSsequenceYreject,"goo/collections/sequence","reject");
EXT(YcompilerSastYLassignmentG,"compiler/ast","<assignment>");
EXT(YcompilerSast_linearizeYunconstrained_typeQ,"compiler/ast-linearize","unconstrained-type?");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(Yclass_name,"runtime/boot","class-name");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_93);
DEFLIT(lit_105);
DEFLIT(lit_40);
DEFLIT(lit_7);
DEFLIT(lit_53);
DEFLIT(lit_2);
DEFLIT(lit_75);
DEFLIT(lit_97);
DEFLIT(lit_72);
DEFLIT(lit_12);
DEFLIT(lit_41);
DEFLIT(lit_42);
DEFLIT(lit_98);
DEFLIT(lit_92);
DEFLIT(lit_29);
DEFLIT(lit_88);
DEFLIT(lit_102);
DEFLIT(lit_110);
DEFLIT(lit_47);
DEFLIT(lit_101);
DEFLIT(lit_89);
DEFLIT(lit_8);
DEFLIT(lit_6);
DEFLIT(lit_16);
DEFLIT(lit_69);
DEFLIT(lit_17);
DEFLIT(lit_74);
DEFLIT(lit_24);
DEFLIT(lit_64);
DEFLIT(lit_49);
DEFLIT(lit_4);
DEFLIT(lit_91);
DEFLIT(lit_80);
DEFLIT(lit_76);
DEFLIT(lit_32);
DEFLIT(lit_28);
DEFLIT(lit_43);
DEFLIT(lit_34);
DEFLIT(lit_44);
DEFLIT(lit_60);
DEFLIT(lit_5);
DEFLIT(lit_51);
DEFLIT(lit_25);
DEFLIT(lit_85);
DEFLIT(lit_103);
DEFLIT(lit_71);
DEFLIT(lit_10);
DEFLIT(lit_21);
DEFLIT(lit_57);
DEFLIT(lit_36);
DEFLIT(lit_50);
DEFLIT(lit_83);
DEFLIT(lit_56);
DEFLIT(lit_23);
DEFLIT(lit_86);
DEFLIT(lit_31);
DEFLIT(lit_87);
DEFLIT(lit_11);
DEFLIT(lit_20);
DEFLIT(lit_1);
DEFLIT(lit_14);
DEFLIT(lit_33);
DEFLIT(lit_59);
DEFLIT(lit_37);
DEFLIT(lit_26);
DEFLIT(lit_99);
DEFLIT(lit_13);
DEFLIT(lit_35);
DEFLIT(lit_78);
DEFLIT(lit_30);
DEFLIT(lit_19);
DEFLIT(lit_3);
DEFLIT(lit_66);
DEFLIT(lit_9);
DEFLIT(lit_39);
DEFLIT(lit_84);
DEFLIT(lit_45);
DEFLIT(lit_58);
DEFLIT(lit_55);
DEFLIT(lit_62);
DEFLIT(lit_111);
DEFLIT(lit_106);
DEFLIT(lit_38);
DEFLIT(lit_52);
DEFLIT(lit_100);
DEFLIT(lit_104);
DEFLIT(lit_48);
DEFLIT(lit_15);
DEFLIT(lit_61);
DEFLIT(lit_54);
DEFLIT(lit_90);
DEFLIT(lit_96);
DEFLIT(lit_63);
DEFLIT(lit_94);
DEFLIT(lit_82);
DEFLIT(lit_0);
DEFLIT(lit_73);
DEFLIT(lit_70);
DEFLIT(lit_108);
DEFLIT(lit_81);
DEFLIT(lit_46);
DEFLIT(lit_109);
DEFLIT(lit_79);
DEFLIT(lit_95);
DEFLIT(lit_65);
DEFLIT(lit_77);
DEFLIT(lit_22);
DEFLIT(lit_18);
DEFLIT(lit_107);
DEFLIT(lit_27);
DEFLIT(lit_67);
DEFLIT(lit_68);

/* FUNCTIONS: */

LOCFOR(fun_0);
LOCFOR(fun_1);
LOCFOR(fun_2);
FUNFOR(YcompilerStopYesctst);
LOCFOR(fun_parse_in_4);
LOCFOR(fun_parse_5);
LOCFOR(fun_str_parse_in_6);
LOCFOR(fun_str_parse_7);
FUNFOR(YcompilerStopYast_run);
FUNFOR(YcompilerStopYg2c_run);
FUNFOR(YcompilerStopYauto_run);
FUNFOR(YcompilerStopYauto_eval);
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
LOCFOR(fun_x_1436_26);
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
FUNFOR(YcompilerStopYdo_restart);
LOCFOR(fun_40);
LOCFOR(fun_41);
LOCFOR(fun_42);
LOCFOR(fun_43);
LOCFOR(fun_x_1475_44);
LOCFOR(fun_45);
LOCFOR(fun_x_1472_46);
LOCFOR(fun_47);
LOCFOR(fun_x_1469_48);
LOCFOR(fun_49);
LOCFOR(fun_x_1466_50);
LOCFOR(fun_51);
LOCFOR(fun_x_1463_52);
LOCFOR(fun_53);
LOCFOR(fun_x_1460_54);
LOCFOR(fun_55);
LOCFOR(fun_x_1457_56);
LOCFOR(fun_57);
LOCFOR(fun_x_1454_58);
LOCFOR(fun_59);
LOCFOR(fun_x_1451_60);
LOCFOR(fun_61);
LOCFOR(fun_x_1448_62);
LOCFOR(fun_63);
LOCFOR(fun_x_1445_64);
LOCFOR(fun_65);
LOCFOR(fun_x_1442_66);
LOCFOR(fun_67);
LOCFOR(fun_x_1439_68);
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
FUNFOR(YcompilerStopYsave_image);
extern P YcompilerStopY___main_0___ ();

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
  CALL2(1,VARREF(YruntimeSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_2));
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
  CALL2(1,VARREF(YruntimeSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_4));
UNLINK_STACK();
  QRET(LITREF(lit_5));
}

FUNCODEDEF(YcompilerStopYesctst) {
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
  T0 = CALL3(1,VARREF(YcompilerSastYobjectify_with_subtransaction),T1,ct_env_,YPfalse);
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
  T1 = CALL1(1,VARREF(YcompilerSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YcompilerStopYparse_in),s_,T1);
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
  T1 = CALL2(1,VARREF(YcompilerStopYparse_in),s_,ct_env_);
  T0 = CALL3(1,VARREF(YruntimeSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_14),T1);
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
  T1 = CALL1(1,VARREF(YcompilerSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YcompilerStopYstr_parse_in),s_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YcompilerStopYast_run) {
  P ast_,ct_env_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(ct_env_, 1);
loop:
  T0 = CALL1(1,VARREF(YcompilerSastYast_evaluate),ast_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YcompilerStopYg2c_run) {
  P ast_,ct_env_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(ct_env_, 1);
loop:
  T0 = CALL2(1,VARREF(YcompilerStopYg2c_eval),ast_,ct_env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YcompilerStopYauto_run) {
  P ast_,ct_env_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL1(1,VARREF(YcompilerSast_linearizeYast_contains_funQ),ast_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YcompilerStopYg2c_run),ast_,ct_env_);
    T0 = T2;
  } else {
    T3 = CALL2(1,VARREF(YcompilerStopYast_run),ast_,ct_env_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YcompilerStopYauto_eval) {
  P form_,ct_env_;
  P astF1936;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(form_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL3(1,VARREF(YcompilerSastYobjectify_with_subtransaction),form_,ct_env_,YPfalse);
  astF1936 = T1;
  T2 = CALL2(1,VARREF(YcompilerStopYauto_run),astF1936,ct_env_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_in_12) {
  P x_,ct_env_;
  P eF1938;
  P oF1937;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL3(1,VARREF(YcompilerSastYobjectify_with_subtransaction),x_,ct_env_,YPfalse);
  oF1937 = T1;
  T3 = CALL1(1,VARREF(YcompilerSastYast_evaluate),oF1937);
  eF1938 = T3;
  T2 = eF1938;
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
  T1 = CALL1(1,VARREF(YcompilerSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YcompilerStopYeval_in),x_,T1);
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
  T1 = CALL2(1,VARREF(YcompilerStopYeval_in),T2,ct_env_);
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
  T1 = CALL1(1,VARREF(YcompilerSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YcompilerStopYstr_eval_in),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_16) {
  P forms_;
  P xF1939;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(forms_, 0);
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL1(1,VARREF(YruntimeSruntimeYread),T2);
  xF1939 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),xF1939);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooSmacrosYrevX),forms_);
    T5 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_sequence_Gbegin),T6);
    T3 = T5;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYpair),xF1939,forms_);
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
  P loopF1940;
  P T3,T2,T1,T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_in_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T2 = FUNSHELL(1,fun_loop_16,2);
  loopF1940 = T2;
  FUNINIT(loopF1940, 2,FREEREF(0),loopF1940);
  T3 = CALL1(0,loopF1940,Ynil);
  T1 = T3;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_18) {
  P tmpF1941;
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF1941 = T1;
  if (tmpF1941 != YPfalse) {
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
  P portF1942;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  portF1942 = YPfalse;
  portF1942 = BOXFAB(portF1942);
  T3 = FUNFAB(fun_17,2,portF1942,filename_);
  T4 = FUNFAB(fun_18,1,portF1942);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_in_20) {
  P filename_,ct_env_;
  P oF1944;
  P xF1943;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(filename_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL1(1,VARREF(YcompilerStopYread_file),filename_);
  xF1943 = T1;
  T3 = CALL3(1,VARREF(YcompilerSastYobjectify_with_subtransaction),xF1943,ct_env_,YPfalse);
  oF1944 = T3;
  T4 = CALL2(1,VARREF(YcompilerStopYrun),oF1944,ct_env_);
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
  T1 = CALL1(1,VARREF(YcompilerSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YcompilerSastYload_in),filename_,T1);
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
  T0 = CALL2(1,VARREF(YcompilerStopYload),T1,modname_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_prompt_for_command_expression_23) {
  P env_,level_,prompt_;
  P argsF1948;
  P arg_strF1947;
  P tmpF1946;
  P formF1945;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(env_, 0);
  ARG(level_, 1);
  ARG(prompt_, 2);
loop:
  T1 = CALL1(1,VARREF(YcompilerSastYfind_environment_module),env_);
  T0 = CALL1(1,VARREF(YcompilerSastYmodule_name),T1);
  CALLN(1,VARREF(YruntimeSruntimeYformat),5,VARREF(YgooSioSportYout),LITREF(lit_39),T0,level_,prompt_);
  CALL1(1,VARREF(YgooSioSportYforce_out),VARREF(YgooSioSportYout));
  T3 = CALL1(1,VARREF(YruntimeSruntimeYread),VARREF(YgooSioSportYin));
  formF1945 = T3;
  T6 = CALL2(1,VARREF(YisaQ),formF1945,VARREF(YLlstG));
  tmpF1946 = T6;
  if (tmpF1946 != YPfalse) {
    T9 = CALL1(1,VARREF(Yhead),formF1945);
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),T9,LITREF(lit_40));
    T7 = T8;
  } else {
    T7 = YPfalse;
  }
  T5 = T7;
  if (T5 != YPfalse) {
    T11 = CALL1(1,VARREF(YgooSioSportYgets),VARREF(YgooSioSportYin));
    arg_strF1947 = T11;
    T14 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_41),arg_strF1947,LITREF(lit_42));
    T13 = CALL1(1,VARREF(YgooSioSreadYread_from_string),T14);
    argsF1948 = T13;
    T16 = CALL1(1,VARREF(YgooStypesY2nd),formF1945);
    T15 = CALL2(1,VARREF(YgooSmacrosYpair),T16,argsF1948);
    T12 = T15;
    T10 = T12;
    T4 = T10;
  } else {
    T4 = formF1945;
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
  T1 = CALL1(1,VARREF(YcompilerSastYfind_environment_module),env_);
  T0 = CALL1(1,VARREF(YcompilerSastYmodule_name),T1);
  CALLN(1,VARREF(YruntimeSruntimeYformat),5,VARREF(YgooSioSportYout),LITREF(lit_46),T0,level_,label_);
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

FUNCODEDEF(fun_x_1436_26) {
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
  P x_1435F1961;
  P x_1435F1960;
  P x_1435F1959;
  P x_1435F1958;
  P x_1435F1957;
  P x_1435F1956;
  P x_1435F1955;
  P bodyF1954;
  P argsF1953;
  P fF1952;
  P numF1951;
  P x_1435F1950;
  P x_1436F1949;
  P T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49;
  P T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33;
  P T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1436_26,1);
  x_1436F1949 = T1;
  FUNINIT(x_1436F1949, 1,return_);
  x_1435F1950 = FREEREF(0);
  numF1951 = YPfalse;
  numF1951 = BOXFAB(numF1951);
  fF1952 = YPfalse;
  fF1952 = BOXFAB(fF1952);
  argsF1953 = YPfalse;
  argsF1953 = BOXFAB(argsF1953);
  bodyF1954 = YPfalse;
  bodyF1954 = BOXFAB(bodyF1954);
  T11 = CALL2(1,VARREF(YisaQ),x_1435F1950,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1435F1950,LITREF(lit_53),x_1436F1949);
    x_1435F1955 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1435F1955,x_1436F1949);
    x_1435F1956 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1435F1956,x_1436F1949);
    BOXVAL(numF1951) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1435F1956);
    x_1435F1957 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1435F1957,x_1436F1949);
    BOXVAL(fF1952) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1435F1957);
    x_1435F1958 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1435F1958,x_1436F1949);
    BOXVAL(argsF1953) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1435F1958);
    x_1435F1959 = T24;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1435F1959,x_1436F1949);
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T26 = CALL1(1,VARREF(Ytail),x_1435F1955);
    x_1435F1960 = T26;
    BOXVAL(bodyF1954) = x_1435F1960;
    x_1435F1961 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1435F1961,x_1436F1949);
    T27 = T28;
    T14 = T27;
    T12 = T14;
  } else {
    T29 = CALL2(1,x_1436F1949,LITREF(lit_54),x_1435F1950);
  }
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T37 = BOXVAL(numF1951);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T38 = CALL1(1,VARREF(Ylst),YPint((P)0));
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T38,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T33 = CALL2(1,VARREF(YgooSmacrosYcat),T34,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_47));
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_48));
  T48 = BOXVAL(fF1952);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T46 = CALL3(1,VARREF(YgooSmacrosYcat),T47,T49,Ynil);
  T45 = CALL1(1,VARREF(Ylst),T46);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
  T54 = BOXVAL(argsF1953);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_58));
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T56 = CALL3(1,VARREF(YgooSmacrosYcat),T57,T58,Ynil);
  T55 = CALL1(1,VARREF(Ylst),T56);
  T51 = CALLN(1,VARREF(YgooSmacrosYcat),4,T52,T53,T55,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T59 = BOXVAL(bodyF1954);
  T62 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T64 = BOXVAL(numF1951);
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
  P argsF1962;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsSsequenceYrev),Uargs_);
  argsF1962 = T1;
  T2 = BOXVAL(FREEREF(0));
  CALLN(1,VARREF(YruntimeSruntimeYformat),5,VARREF(YgooSioSportYout),LITREF(lit_62),T2,f_,argsF1962);
  T5 = BOXVAL(FREEREF(0));
  T4 = CALL2(1,VARREF(YgooSmathYA),T5,YPint((P)1));
  T3 = BOXVAL(FREEREF(0)) = T4;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_backtrace_30) {
  P numF1963;
  P T3,T2,T1,T0;
LINK_STACK();
loop:
  numF1963 = YPint((P)0);
  numF1963 = BOXFAB(numF1963);
  T3 = FUNFAB(fun_29,1,numF1963);
  T2 = CALL1(1,VARREF(YcompilerStopYdo_stack_frames),T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_31) {
  P f_,Uargs_;
  P argsF1964;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsSsequenceYrev),Uargs_);
  argsF1964 = T1;
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(0),T3);
  if (T2 != YPfalse) {
    T5 = BOXVAL(FREEREF(1));
    T4 = CALLN(1,VARREF(YruntimeSruntimeYformat),5,VARREF(YgooSioSportYout),LITREF(lit_65),T5,f_,argsF1964);
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
  P numF1965;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(n_, 0);
loop:
  numF1965 = YPint((P)0);
  numF1965 = BOXFAB(numF1965);
  T3 = FUNFAB(fun_31,2,n_,numF1965);
  T2 = CALL1(1,VARREF(YcompilerStopYdo_stack_frames),T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_33) {
  P f_,Uargs_;
  P argsF1966;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsSsequenceYrev),Uargs_);
  argsF1966 = T1;
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(0),T3);
  if (T2 != YPfalse) {
    T7 = CALL1(1,VARREF(Yfun_names),f_);
    T6 = CALL2(1,VARREF(YgooScollectionsSsequenceYpos),T7,FREEREF(3));
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),argsF1966,T6);
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
  P numF1967;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(ret_, 0);
loop:
  numF1967 = YPint((P)0);
  numF1967 = BOXFAB(numF1967);
  T2 = FUNFAB(fun_33,4,FREEREF(0),numF1967,ret_,FREEREF(1));
  T1 = CALL1(1,VARREF(YcompilerStopYdo_stack_frames),T2);
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
  P argsF1968;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsSsequenceYrev),Uargs_);
  argsF1968 = T1;
  T2 = BOXVAL(FREEREF(0));
  CALLN(1,VARREF(YruntimeSruntimeYformat),4,VARREF(YgooSioSportYout),LITREF(lit_69),T2,f_);
  T5 = BOXVAL(FREEREF(0));
  T4 = CALL2(1,VARREF(YgooSmathYA),T5,YPint((P)1));
  T3 = BOXVAL(FREEREF(0)) = T4;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bt_37) {
  P numF1969;
  P T3,T2,T1,T0;
LINK_STACK();
loop:
  numF1969 = YPint((P)0);
  numF1969 = BOXFAB(numF1969);
  T3 = FUNFAB(fun_36,1,numF1969);
  T2 = CALL1(1,VARREF(YcompilerStopYdo_stack_frames),T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ykeyboard_interrupt) {
  P T1,T0;
LINK_STACK();
loop:
  T1 = CALL1(1,VARREF(Ynew),VARREF(YcompilerStopYLkeyboard_interruptG));
  T0 = CALL1(1,VARREF(YruntimeSruntimeYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YcompilerStopYdo_restart) {
  P restarts_,n_;
  P tmpF1970;
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
  T4 = CALL2(1,VARREF(YgooSmagnitudeYG),n_,YPint((P)0));
  tmpF1970 = T4;
  if (tmpF1970 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooStypesYlen),restarts_);
    T6 = CALL2(1,VARREF(YgooSmagnitudeYLE),n_,T7);
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
  T9 = CALL3(1,VARREF(YruntimeSruntimeYinvoke_handler_interactively),T10,VARREF(YgooSioSportYin),VARREF(YgooSioSportYout));
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
  T0 = CALL2(1,VARREF(YisaQ),c_,VARREF(YcompilerStopYLkeyboard_interruptG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YruntimeSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_84));
  } else {
    T3 = CALL1(1,VARREF(YruntimeSruntimeYdescribe_condition),c_);
    T2 = CALL3(1,VARREF(YruntimeSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_85),T3);
  }
  T4 = CALL2(1,VARREF(YgooSmathYA),FREEREF(0),YPint((P)1));
  T5 = BOXVAL(FREEREF(3));
  CALLN(1,VARREF(YcompilerStopYtop_in),5,T4,FREEREF(1),FREEREF(2),YPtrue,T5);
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

FUNCODEDEF(fun_x_1475_44) {
  P msg_,args_;
  P resF1971;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T3 = BOXVAL(FREEREF(2));
  T2 = CALL2(1,VARREF(YcompilerStopYauto_eval),FREEREF(1),T3);
  resF1971 = T2;
  T5 = BOXVAL(FREEREF(2));
  T4 = CALLN(1,VARREF(YcompilerStopYprint_result_expression),4,T5,FREEREF(3),LITREF(lit_102),resF1971);
  T1 = T4;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_45) {
  P return_;
  P x_1474F1978;
  P x_1474F1977;
  P x_1474F1976;
  P nameF1975;
  P nF1974;
  P x_1474F1973;
  P x_1475F1972;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1475_44,4);
  x_1475F1972 = T1;
  FUNINIT(x_1475F1972, 4,return_,FREEREF(0),FREEREF(1),FREEREF(2));
  x_1474F1973 = FREEREF(3);
  nF1974 = YPfalse;
  nF1974 = BOXFAB(nF1974);
  nameF1975 = YPfalse;
  nameF1975 = BOXFAB(nameF1975);
  T7 = CALL2(1,VARREF(YisaQ),x_1474F1973,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1474F1973,LITREF(lit_66),x_1475F1972);
    x_1474F1976 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1474F1976,x_1475F1972);
    BOXVAL(nF1974) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1474F1976);
    x_1474F1977 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1474F1977,x_1475F1972);
    BOXVAL(nameF1975) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1474F1977);
    x_1474F1978 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1474F1978,x_1475F1972);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1475F1972,LITREF(lit_54),x_1474F1973);
  }
  T19 = BOXVAL(nF1974);
  T20 = BOXVAL(nameF1975);
  T18 = CALL2(1,VARREF(YcompilerStopYframe_var),T19,T20);
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1472_46) {
  P msg_,args_;
  P x_1473F1979;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1473F1979 = FREEREF(1);
  T3 = FUNFAB(fun_45,4,FREEREF(2),FREEREF(3),FREEREF(4),x_1473F1979);
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_47) {
  P return_;
  P x_1471F1984;
  P x_1471F1983;
  P nF1982;
  P x_1471F1981;
  P x_1472F1980;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1472_46,5);
  x_1472F1980 = T1;
  FUNINIT(x_1472F1980, 5,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  x_1471F1981 = FREEREF(0);
  nF1982 = YPfalse;
  nF1982 = BOXFAB(nF1982);
  T5 = CALL2(1,VARREF(YisaQ),x_1471F1981,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1471F1981,LITREF(lit_63),x_1472F1980);
    x_1471F1983 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1471F1983,x_1472F1980);
    BOXVAL(nF1982) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1471F1983);
    x_1471F1984 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1471F1984,x_1472F1980);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1472F1980,LITREF(lit_54),x_1471F1981);
  }
  T14 = BOXVAL(nF1982);
  T13 = CALL1(1,VARREF(YcompilerStopYframe),T14);
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1469_48) {
  P msg_,args_;
  P x_1470F1985;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1470F1985 = FREEREF(1);
  T3 = FUNFAB(fun_47,4,x_1470F1985,FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  P return_;
  P x_1468F1988;
  P x_1468F1987;
  P x_1469F1986;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1469_48,5);
  x_1469F1986 = T1;
  FUNINIT(x_1469F1986, 5,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  x_1468F1987 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1468F1987,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1468F1987,LITREF(lit_60),x_1469F1986);
    x_1468F1988 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1468F1988,x_1469F1986);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1469F1986,LITREF(lit_54),x_1468F1987);
  }
  T8 = CALL0(1,VARREF(YcompilerStopYbacktrace));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1466_50) {
  P msg_,args_;
  P x_1467F1989;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1467F1989 = FREEREF(1);
  T3 = FUNFAB(fun_49,4,x_1467F1989,FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_51) {
  P return_;
  P x_1465F1992;
  P x_1465F1991;
  P x_1466F1990;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1466_50,5);
  x_1466F1990 = T1;
  FUNINIT(x_1466F1990, 5,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  x_1465F1991 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1465F1991,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1465F1991,LITREF(lit_68),x_1466F1990);
    x_1465F1992 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1465F1992,x_1466F1990);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1466F1990,LITREF(lit_54),x_1465F1991);
  }
  T8 = CALL0(1,VARREF(YcompilerStopYbt));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1463_52) {
  P msg_,args_;
  P x_1464F1993;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1464F1993 = FREEREF(1);
  T3 = FUNFAB(fun_51,4,x_1464F1993,FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_53) {
  P return_;
  P x_1462F1996;
  P x_1462F1995;
  P x_1463F1994;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1463_52,5);
  x_1463F1994 = T1;
  FUNINIT(x_1463F1994, 5,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  x_1462F1995 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1462F1995,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1462F1995,LITREF(lit_20),x_1463F1994);
    x_1462F1996 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1462F1996,x_1463F1994);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1463F1994,LITREF(lit_54),x_1462F1995);
  }
  T8 = VARSET(YcompilerStopYrun,VARREF(YcompilerStopYauto_run));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1460_54) {
  P msg_,args_;
  P x_1461F1997;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1461F1997 = FREEREF(1);
  T3 = FUNFAB(fun_53,4,x_1461F1997,FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  P return_;
  P x_1459F2000;
  P x_1459F1999;
  P x_1460F1998;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1460_54,5);
  x_1460F1998 = T1;
  FUNINIT(x_1460F1998, 5,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  x_1459F1999 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1459F1999,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1459F1999,LITREF(lit_103),x_1460F1998);
    x_1459F2000 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1459F2000,x_1460F1998);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1460F1998,LITREF(lit_54),x_1459F1999);
  }
  T8 = VARSET(YcompilerStopYrun,VARREF(YcompilerStopYast_run));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1457_56) {
  P msg_,args_;
  P x_1458F2001;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1458F2001 = FREEREF(1);
  T3 = FUNFAB(fun_55,4,x_1458F2001,FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_57) {
  P return_;
  P x_1456F2004;
  P x_1456F2003;
  P x_1457F2002;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1457_56,5);
  x_1457F2002 = T1;
  FUNINIT(x_1457F2002, 5,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  x_1456F2003 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1456F2003,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1456F2003,LITREF(lit_6),x_1457F2002);
    x_1456F2004 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1456F2004,x_1457F2002);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1457F2002,LITREF(lit_54),x_1456F2003);
  }
  T8 = VARSET(YcompilerStopYrun,VARREF(YcompilerStopYg2c_run));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1454_58) {
  P msg_,args_;
  P x_1455F2005;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1455F2005 = FREEREF(1);
  T3 = FUNFAB(fun_57,4,x_1455F2005,FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_59) {
  P return_;
  P new_envF2011;
  P x_1453F2010;
  P x_1453F2009;
  P mF2008;
  P x_1453F2007;
  P x_1454F2006;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1454_58,5);
  x_1454F2006 = T1;
  FUNINIT(x_1454F2006, 5,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  x_1453F2007 = FREEREF(0);
  mF2008 = YPfalse;
  mF2008 = BOXFAB(mF2008);
  T5 = CALL2(1,VARREF(YisaQ),x_1453F2007,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1453F2007,LITREF(lit_104),x_1454F2006);
    x_1453F2009 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1453F2009,x_1454F2006);
    BOXVAL(mF2008) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1453F2009);
    x_1453F2010 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1453F2010,x_1454F2006);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1454F2006,LITREF(lit_54),x_1453F2007);
  }
  T15 = BOXVAL(mF2008);
  T14 = CALL1(1,VARREF(YcompilerSastYruntime_environment),T15);
  new_envF2011 = T14;
  T16 = BOXVAL(FREEREF(2)) = new_envF2011;
  T13 = T16;
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1451_60) {
  P msg_,args_;
  P x_1452F2012;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1452F2012 = FREEREF(1);
  T3 = FUNFAB(fun_59,4,x_1452F2012,FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_61) {
  P return_;
  P x_1450F2017;
  P x_1450F2016;
  P nF2015;
  P x_1450F2014;
  P x_1451F2013;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1451_60,5);
  x_1451F2013 = T1;
  FUNINIT(x_1451F2013, 5,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  x_1450F2014 = FREEREF(0);
  nF2015 = YPfalse;
  nF2015 = BOXFAB(nF2015);
  T5 = CALL2(1,VARREF(YisaQ),x_1450F2014,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1450F2014,LITREF(lit_105),x_1451F2013);
    x_1450F2016 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1450F2016,x_1451F2013);
    BOXVAL(nF2015) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1450F2016);
    x_1450F2017 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1450F2017,x_1451F2013);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1451F2013,LITREF(lit_54),x_1450F2014);
  }
  T14 = BOXVAL(FREEREF(4));
  T15 = BOXVAL(nF2015);
  T13 = CALL2(1,VARREF(YcompilerStopYdo_restart),T14,T15);
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1448_62) {
  P msg_,args_;
  P x_1449F2018;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1449F2018 = FREEREF(1);
  T3 = FUNFAB(fun_61,5,x_1449F2018,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_63) {
  P return_;
  P x_1447F2021;
  P x_1447F2020;
  P x_1448F2019;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1448_62,6);
  x_1448F2019 = T1;
  FUNINIT(x_1448F2019, 6,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  x_1447F2020 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1447F2020,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1447F2020,LITREF(lit_73),x_1448F2019);
    x_1447F2021 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1447F2021,x_1448F2019);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1448F2019,LITREF(lit_54),x_1447F2020);
  }
  T8 = CALL2(1,VARREF(YruntimeSruntimeYlist_handlers),VARREF(YruntimeSruntimeYLrestartG),VARREF(YgooSioSportYout));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1445_64) {
  P msg_,args_;
  P x_1446F2022;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1446F2022 = FREEREF(1);
  T3 = FUNFAB(fun_63,5,x_1446F2022,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_65) {
  P return_;
  P x_1444F2025;
  P x_1444F2024;
  P x_1445F2023;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1445_64,6);
  x_1445F2023 = T1;
  FUNINIT(x_1445F2023, 6,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  x_1444F2024 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1444F2024,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1444F2024,LITREF(lit_106),x_1445F2023);
    x_1444F2025 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1444F2025,x_1445F2023);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1445F2023,LITREF(lit_54),x_1444F2024);
  }
  T8 = CALL2(1,VARREF(YruntimeSruntimeYlist_handlers),VARREF(YruntimeSruntimeYLconditionG),VARREF(YgooSioSportYout));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1442_66) {
  P msg_,args_;
  P x_1443F2026;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1443F2026 = FREEREF(1);
  T3 = FUNFAB(fun_65,5,x_1443F2026,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_67) {
  P return_;
  P x_1441F2029;
  P x_1441F2028;
  P x_1442F2027;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1442_66,6);
  x_1442F2027 = T1;
  FUNINIT(x_1442F2027, 6,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  x_1441F2028 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1441F2028,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1441F2028,LITREF(lit_107),x_1442F2027);
    x_1441F2029 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1441F2029,x_1442F2027);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1442F2027,LITREF(lit_54),x_1441F2028);
  }
  T8 = CALL1(1,FREEREF(5),YPfalse);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1439_68) {
  P msg_,args_;
  P x_1440F2030;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1440F2030 = FREEREF(1);
  T3 = FUNFAB(fun_67,6,x_1440F2030,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  P return_;
  P x_1438F2033;
  P x_1438F2032;
  P x_1439F2031;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1439_68,7);
  x_1439F2031 = T1;
  FUNINIT(x_1439F2031, 7,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5));
  x_1438F2032 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1438F2032,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1438F2032,LITREF(lit_78),x_1439F2031);
    x_1438F2033 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1438F2033,x_1439F2031);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1439F2031,LITREF(lit_54),x_1438F2032);
  }
  T8 = CALL1(1,FREEREF(6),YPfalse);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_70) {
  P x_1437F2035;
  P formF2034;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
  T0 = BOXVAL(FREEREF(0));
  if (T0 != YPfalse) {
    CALL2(1,VARREF(YruntimeSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_87));
    T1 = CALL2(1,VARREF(YruntimeSruntimeYlist_handlers),VARREF(YruntimeSruntimeYLrestartG),VARREF(YgooSioSportYout));
    BOXVAL(FREEREF(1)) = T1;
    T2 = BOXVAL(FREEREF(0)) = YPfalse;
  } else {
  }
  T5 = BOXVAL(FREEREF(2));
  T4 = CALL3(1,VARREF(YcompilerStopYprompt_for_command_expression),T5,FREEREF(3),LITREF(lit_88));
  formF2034 = T4;
  T8 = CALL0(1,VARREF(YgooSmathYeof_object));
  T7 = CALL2(1,VARREF(YgooSmathYE),formF2034,T8);
  if (T7 != YPfalse) {
    T9 = CALL1(1,FREEREF(4),YPfalse);
    T6 = T9;
  } else {
    x_1437F2035 = formF2034;
    T12 = FUNFAB(fun_69,7,x_1437F2035,formF2034,FREEREF(2),FREEREF(3),FREEREF(1),FREEREF(5),FREEREF(4));
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
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YruntimeSruntimeYLrestartG),T1,T3,T4,T5);
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
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YruntimeSruntimeYLconditionG),VARREF(YruntimeSruntimeYDdefault_handler_info),T1,T2,T3);
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
  P loopF2036;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_73,8);
  loopF2036 = T1;
  FUNINIT(loopF2036, 8,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),blow_,loopF2036);
  T2 = CALL0(0,loopF2036);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_top_in_75) {
  P level_,top_,quit_,show_restartsQ_,ct_env_;
  P restartsF2037;
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
  restartsF2037 = YPfalse;
  restartsF2037 = BOXFAB(restartsF2037);
  T5 = FUNFAB(fun_74,6,level_,top_,quit_,ct_env_,show_restartsQ_,restartsF2037);
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
  T1 = CALL1(1,VARREF(YcompilerSastYruntime_environment),FREEREF(1));
  T0 = CALLN(1,VARREF(YcompilerStopYtop_in),5,YPint((P)0),top_,FREEREF(0),YPfalse,T1);
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
  P loopF2038;
  P T2,T1,T0;
LINK_STACK();
loop:
  T1 = FUNSHELL(1,fun_loop_79,3);
  loopF2038 = T1;
  FUNINIT(loopF2038, 3,FREEREF(0),FREEREF(1),loopF2038);
  T2 = CALL0(0,loopF2038);
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
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YruntimeSruntimeYLrestartG),T1,T3,T4,T5);
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
  T0 = CALL1(1,VARREF(YcompilerStopYtop),LITREF(lit_111));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YcompilerStopYsave_image) {
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

P YcompilerStopY___main_0___() {
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
  YcompilerStopYesctst = YPmet(FUNCODEREF(YcompilerStopYesctst),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T4 = YcompilerStopYesctst;
  VARSET(YcompilerStopYesctst,T4);
  lit_6 = YPPsym((P)"g2c-eval");
  lit_7 = YPPsym((P)"exp");
  lit_8 = YPPsym((P)"ct-env");
  T6 = YPsig(YPPlist(2,LITREF(lit_7),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T5 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_6),T6,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YcompilerStopYg2c_eval,T5);
  lit_9 = YPPsym((P)"parse-in");
  lit_10 = YPPsym((P)"s");
  T7 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_8)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_in_4 = YPmet(FUNCODEREF(fun_parse_in_4),LITREF(lit_9),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YcompilerStopYparse_in);
  if (T10 != YPfalse) {
    T9 = VARREF(YcompilerStopYparse_in);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_parse_in_4;
  T8 = CALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YcompilerStopYparse_in,T8);
  lit_11 = YPPsym((P)"parse");
  lit_12 = YPPsym((P)"modname");
  T12 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_12)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_5 = YPmet(FUNCODEREF(fun_parse_5),LITREF(lit_11),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YcompilerStopYparse);
  if (T15 != YPfalse) {
    T14 = VARREF(YcompilerStopYparse);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_parse_5;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YcompilerStopYparse,T13);
  lit_13 = YPPsym((P)"str-parse-in");
  lit_14 = YPsb((P)"%=\n");
  T17 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_8)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_parse_in_6 = YPmet(FUNCODEREF(fun_str_parse_in_6),LITREF(lit_13),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YcompilerStopYstr_parse_in);
  if (T20 != YPfalse) {
    T19 = VARREF(YcompilerStopYstr_parse_in);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_str_parse_in_6;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YcompilerStopYstr_parse_in,T18);
  lit_15 = YPPsym((P)"str-parse");
  T22 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_12)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_parse_7 = YPmet(FUNCODEREF(fun_str_parse_7),LITREF(lit_15),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YcompilerStopYstr_parse);
  if (T25 != YPfalse) {
    T24 = VARREF(YcompilerStopYstr_parse);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_str_parse_7;
  T23 = CALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YcompilerStopYstr_parse,T23);
  lit_16 = YPPsym((P)"ast-run");
  lit_17 = YPPsym((P)"ast");
  T27 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YcompilerStopYast_run = YPmet(FUNCODEREF(YcompilerStopYast_run),LITREF(lit_16),T27,ENVNUL,PNUL,YPfalse);
  T28 = YcompilerStopYast_run;
  VARSET(YcompilerStopYast_run,T28);
  lit_18 = YPPsym((P)"g2c-run");
  T29 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YcompilerStopYg2c_run = YPmet(FUNCODEREF(YcompilerStopYg2c_run),LITREF(lit_18),T29,ENVNUL,PNUL,YPfalse);
  T30 = YcompilerStopYg2c_run;
  VARSET(YcompilerStopYg2c_run,T30);
  lit_19 = YPPsym((P)"auto-run");
  T31 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YcompilerStopYauto_run = YPmet(FUNCODEREF(YcompilerStopYauto_run),LITREF(lit_19),T31,ENVNUL,PNUL,YPfalse);
  T32 = YcompilerStopYauto_run;
  VARSET(YcompilerStopYauto_run,T32);
  lit_20 = YPPsym((P)"auto-eval");
  lit_21 = YPPsym((P)"form");
  T33 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YcompilerStopYauto_eval = YPmet(FUNCODEREF(YcompilerStopYauto_eval),LITREF(lit_20),T33,ENVNUL,PNUL,YPfalse);
  T34 = YcompilerStopYauto_eval;
  VARSET(YcompilerStopYauto_eval,T34);
  VARSET(YcompilerStopYrun,VARREF(YcompilerStopYauto_run));
  lit_22 = YPPsym((P)"eval-in");
  lit_23 = YPPsym((P)"x");
  T35 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_in_12 = YPmet(FUNCODEREF(fun_eval_in_12),LITREF(lit_22),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YcompilerStopYeval_in);
  if (T38 != YPfalse) {
    T37 = VARREF(YcompilerStopYeval_in);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_eval_in_12;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YcompilerStopYeval_in,T36);
  lit_24 = YPPsym((P)"eval");
  T40 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_12)),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_13 = YPmet(FUNCODEREF(fun_eval_13),LITREF(lit_24),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YcompilerSsyntaxYeval);
  if (T43 != YPfalse) {
    T42 = VARREF(YcompilerSsyntaxYeval);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_eval_13;
  T41 = CALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YcompilerSsyntaxYeval,T41);
  lit_25 = YPPsym((P)"str-eval-in");
  T45 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_8)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_in_14 = YPmet(FUNCODEREF(fun_str_eval_in_14),LITREF(lit_25),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YcompilerStopYstr_eval_in);
  if (T48 != YPfalse) {
    T47 = VARREF(YcompilerStopYstr_eval_in);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_str_eval_in_14;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YcompilerStopYstr_eval_in,T46);
  lit_26 = YPPsym((P)"str-eval");
  T50 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_12)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_15 = YPmet(FUNCODEREF(fun_str_eval_15),LITREF(lit_26),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YcompilerStopYstr_eval);
  if (T53 != YPfalse) {
    T52 = VARREF(YcompilerStopYstr_eval);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_str_eval_15;
  T51 = CALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YcompilerStopYstr_eval,T51);
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
  T61 = BOUNDP(YcompilerStopYread_file);
  if (T61 != YPfalse) {
    T60 = VARREF(YcompilerStopYread_file);
  } else {
    T60 = YPfalse;
  }
  T62 = fun_read_file_19;
  T59 = CALL2(1,VARREF(YPdefine_method),T60,T62);
  VARSET(YcompilerStopYread_file,T59);
  lit_31 = YPPsym((P)"load-in");
  T63 = YPsig(YPPlist(2,LITREF(lit_28),LITREF(lit_8)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_in_20 = YPmet(FUNCODEREF(fun_load_in_20),LITREF(lit_31),T63,ENVNUL,PNUL,YPfalse);
  T66 = BOUNDP(YcompilerSastYload_in);
  if (T66 != YPfalse) {
    T65 = VARREF(YcompilerSastYload_in);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_load_in_20;
  T64 = CALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YcompilerSastYload_in,T64);
  lit_32 = YPPsym((P)"load");
  T68 = YPsig(YPPlist(2,LITREF(lit_28),LITREF(lit_12)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_21 = YPmet(FUNCODEREF(fun_load_21),LITREF(lit_32),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(YcompilerStopYload);
  if (T71 != YPfalse) {
    T70 = VARREF(YcompilerStopYload);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_load_21;
  T69 = CALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YcompilerStopYload,T69);
  lit_33 = YPPsym((P)"load-from");
  lit_34 = YPPsym((P)"name");
  T73 = YPsig(YPPlist(2,LITREF(lit_34),LITREF(lit_12)),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_from_22 = YPmet(FUNCODEREF(fun_load_from_22),LITREF(lit_33),T73,ENVNUL,PNUL,YPfalse);
  T76 = BOUNDP(YcompilerStopYload_from);
  if (T76 != YPfalse) {
    T75 = VARREF(YcompilerStopYload_from);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_load_from_22;
  T74 = CALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(YcompilerStopYload_from,T74);
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
  T81 = BOUNDP(YcompilerStopYprompt_for_command_expression);
  if (T81 != YPfalse) {
    T80 = VARREF(YcompilerStopYprompt_for_command_expression);
  } else {
    T80 = YPfalse;
  }
  T82 = fun_prompt_for_command_expression_23;
  T79 = CALL2(1,VARREF(YPdefine_method),T80,T82);
  VARSET(YcompilerStopYprompt_for_command_expression,T79);
  lit_43 = YPPsym((P)"print-result-expression");
  lit_44 = YPPsym((P)"label");
  lit_45 = YPPsym((P)"result");
  lit_46 = YPsb((P)"%s %=%s");
  T83 = YPsig(YPPlist(4,LITREF(lit_36),LITREF(lit_37),LITREF(lit_44),LITREF(lit_45)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_print_result_expression_24 = YPmet(FUNCODEREF(fun_print_result_expression_24),LITREF(lit_43),T83,ENVNUL,PNUL,YPfalse);
  T86 = BOUNDP(YcompilerStopYprint_result_expression);
  if (T86 != YPfalse) {
    T85 = VARREF(YcompilerStopYprint_result_expression);
  } else {
    T85 = YPfalse;
  }
  T87 = fun_print_result_expression_24;
  T84 = CALL2(1,VARREF(YPdefine_method),T85,T87);
  VARSET(YcompilerStopYprint_result_expression,T84);
  lit_47 = YPPsym((P)"do-stack-frames");
  lit_48 = YPPsym((P)"fun");
  T88 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_stack_frames_25 = YPmet(FUNCODEREF(fun_do_stack_frames_25),LITREF(lit_47),T88,ENVNUL,PNUL,YPfalse);
  T91 = BOUNDP(YcompilerStopYdo_stack_frames);
  if (T91 != YPfalse) {
    T90 = VARREF(YcompilerStopYdo_stack_frames);
  } else {
    T90 = YPfalse;
  }
  T92 = fun_do_stack_frames_25;
  T89 = CALL2(1,VARREF(YPdefine_method),T90,T92);
  VARSET(YcompilerStopYdo_stack_frames,T89);
  lit_49 = YPPsym((P)"return");
  lit_50 = YPPsym((P)"x-1436");
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
  fun_x_1436_26 = YPmet(FUNCODEREF(fun_x_1436_26),LITREF(lit_50),T95,ENVNUL,PNUL,YPfalse);
  T94 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T94,ENVNUL,PNUL,YPfalse);
  T93 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T93,ENVNUL,PNUL,YPfalse);
  T96 = fun_28;
  YPmacro(YPPsym((P)"compiler/top"),YPPsym((P)"for-frames"),T96);
  lit_60 = YPPsym((P)"backtrace");
  lit_61 = YPPsym((P)"f");
  lit_62 = YPsb((P)"[%=] %= %=\n");
  T98 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_56)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T98,ENVNUL,PNUL,YPfalse);
  T97 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_backtrace_30 = YPmet(FUNCODEREF(fun_backtrace_30),LITREF(lit_60),T97,ENVNUL,PNUL,YPfalse);
  T101 = BOUNDP(YcompilerStopYbacktrace);
  if (T101 != YPfalse) {
    T100 = VARREF(YcompilerStopYbacktrace);
  } else {
    T100 = YPfalse;
  }
  T102 = fun_backtrace_30;
  T99 = CALL2(1,VARREF(YPdefine_method),T100,T102);
  VARSET(YcompilerStopYbacktrace,T99);
  lit_63 = YPPsym((P)"frame");
  lit_64 = YPPsym((P)"n");
  lit_65 = YPsb((P)"[%=] %= %=\n");
  T104 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_56)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T104,ENVNUL,PNUL,YPfalse);
  T103 = YPsig(YPPlist(1,LITREF(lit_64)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_frame_32 = YPmet(FUNCODEREF(fun_frame_32),LITREF(lit_63),T103,ENVNUL,PNUL,YPfalse);
  T107 = BOUNDP(YcompilerStopYframe);
  if (T107 != YPfalse) {
    T106 = VARREF(YcompilerStopYframe);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_frame_32;
  T105 = CALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(YcompilerStopYframe,T105);
  lit_66 = YPPsym((P)"frame-var");
  lit_67 = YPPsym((P)"ret");
  T111 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_56)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T111,ENVNUL,PNUL,YPfalse);
  T110 = YPsig(YPPlist(1,LITREF(lit_67)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T110,ENVNUL,PNUL,YPfalse);
  T109 = YPsig(YPPlist(2,LITREF(lit_64),LITREF(lit_34)),YPPlist(2,VARREF(YLintG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_frame_var_35 = YPmet(FUNCODEREF(fun_frame_var_35),LITREF(lit_66),T109,ENVNUL,PNUL,YPfalse);
  T114 = BOUNDP(YcompilerStopYframe_var);
  if (T114 != YPfalse) {
    T113 = VARREF(YcompilerStopYframe_var);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_frame_var_35;
  T112 = CALL2(1,VARREF(YPdefine_method),T113,T115);
  VARSET(YcompilerStopYframe_var,T112);
  lit_68 = YPPsym((P)"bt");
  lit_69 = YPsb((P)"[%=] %=\n");
  T117 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_56)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T117,ENVNUL,PNUL,YPfalse);
  T116 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_bt_37 = YPmet(FUNCODEREF(fun_bt_37),LITREF(lit_68),T116,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(YcompilerStopYbt);
  if (T120 != YPfalse) {
    T119 = VARREF(YcompilerStopYbt);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_bt_37;
  T118 = CALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YcompilerStopYbt,T118);
  lit_70 = YPPsym((P)"<keyboard-interrupt>");
  T123 = (P)YPpair(VARREF(YruntimeSruntimeYLconditionG),Ynil);
  T122 = CALL2(1,VARREF(Yfab_class),LITREF(lit_70),T123);
  VARSET(YcompilerStopYLkeyboard_interruptG,T122);
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
  YcompilerStopYdo_restart = YPmet(FUNCODEREF(YcompilerStopYdo_restart),LITREF(lit_72),T126,ENVNUL,PNUL,YPfalse);
  T127 = YcompilerStopYdo_restart;
  VARSET(YcompilerStopYdo_restart,T127);
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
  lit_89 = YPPsym((P)"x-1439");
  lit_90 = YPPsym((P)"x-1442");
  lit_91 = YPPsym((P)"x-1445");
  lit_92 = YPPsym((P)"x-1448");
  lit_93 = YPPsym((P)"x-1451");
  lit_94 = YPPsym((P)"x-1454");
  lit_95 = YPPsym((P)"x-1457");
  lit_96 = YPPsym((P)"x-1460");
  lit_97 = YPPsym((P)"x-1463");
  lit_98 = YPPsym((P)"x-1466");
  lit_99 = YPPsym((P)"x-1469");
  lit_100 = YPPsym((P)"x-1472");
  lit_101 = YPPsym((P)"x-1475");
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
  fun_x_1475_44 = YPmet(FUNCODEREF(fun_x_1475_44),LITREF(lit_101),T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1472_46 = YPmet(FUNCODEREF(fun_x_1472_46),LITREF(lit_100),T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T156,ENVNUL,PNUL,YPfalse);
  T155 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1469_48 = YPmet(FUNCODEREF(fun_x_1469_48),LITREF(lit_99),T155,ENVNUL,PNUL,YPfalse);
  T154 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T154,ENVNUL,PNUL,YPfalse);
  T153 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1466_50 = YPmet(FUNCODEREF(fun_x_1466_50),LITREF(lit_98),T153,ENVNUL,PNUL,YPfalse);
  T152 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1463_52 = YPmet(FUNCODEREF(fun_x_1463_52),LITREF(lit_97),T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T150,ENVNUL,PNUL,YPfalse);
  T149 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1460_54 = YPmet(FUNCODEREF(fun_x_1460_54),LITREF(lit_96),T149,ENVNUL,PNUL,YPfalse);
  T148 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T148,ENVNUL,PNUL,YPfalse);
  T147 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1457_56 = YPmet(FUNCODEREF(fun_x_1457_56),LITREF(lit_95),T147,ENVNUL,PNUL,YPfalse);
  T146 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_57 = YPmet(FUNCODEREF(fun_57),YPfalse,T146,ENVNUL,PNUL,YPfalse);
  T145 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1454_58 = YPmet(FUNCODEREF(fun_x_1454_58),LITREF(lit_94),T145,ENVNUL,PNUL,YPfalse);
  T144 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T144,ENVNUL,PNUL,YPfalse);
  T143 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1451_60 = YPmet(FUNCODEREF(fun_x_1451_60),LITREF(lit_93),T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1448_62 = YPmet(FUNCODEREF(fun_x_1448_62),LITREF(lit_92),T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPmet(FUNCODEREF(fun_63),YPfalse,T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1445_64 = YPmet(FUNCODEREF(fun_x_1445_64),LITREF(lit_91),T139,ENVNUL,PNUL,YPfalse);
  T138 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T138,ENVNUL,PNUL,YPfalse);
  T137 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1442_66 = YPmet(FUNCODEREF(fun_x_1442_66),LITREF(lit_90),T137,ENVNUL,PNUL,YPfalse);
  T136 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_67 = YPmet(FUNCODEREF(fun_67),YPfalse,T136,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1439_68 = YPmet(FUNCODEREF(fun_x_1439_68),LITREF(lit_89),T135,ENVNUL,PNUL,YPfalse);
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
  T166 = BOUNDP(YcompilerStopYtop_in);
  if (T166 != YPfalse) {
    T165 = VARREF(YcompilerStopYtop_in);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_top_in_75;
  T164 = CALL2(1,VARREF(YPdefine_method),T165,T167);
  VARSET(YcompilerStopYtop_in,T164);
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
  T177 = BOUNDP(YcompilerStopYtop);
  if (T177 != YPfalse) {
    T176 = VARREF(YcompilerStopYtop);
  } else {
    T176 = YPfalse;
  }
  T178 = fun_top_82;
  T175 = CALL2(1,VARREF(YPdefine_method),T176,T178);
  VARSET(YcompilerStopYtop,T175);
  lit_109 = YPPsym((P)"save-image");
  lit_110 = YPPsym((P)"image-name");
  lit_111 = YPPsym((P)"goo/user");
  T180 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_83 = YPmet(FUNCODEREF(fun_83),YPfalse,T180,ENVNUL,PNUL,YPfalse);
  T179 = YPsig(YPPlist(1,LITREF(lit_110)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YcompilerStopYsave_image = YPmet(FUNCODEREF(YcompilerStopYsave_image),LITREF(lit_109),T179,ENVNUL,PNUL,YPfalse);
  T181 = YcompilerStopYsave_image;
  VARSET(YcompilerStopYsave_image,T181);
  T182 = YPfalse;
  return T182;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_runtimeSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_runtimeSruntime;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_compilerSsyntax;
extern MODULE_INFO module_info_compilerSast;
extern MODULE_INFO module_info_compilerSast_linearize;
extern MODULE_INFO module_info_compilerSast_eval;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScollections;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScollectionsStable;
extern MODULE_INFO module_info_gooScollectionsScollection;
extern MODULE_INFO module_info_gooScollectionsSsequence;
extern MODULE_INFO module_info_gooScollectionsSlist;
extern MODULE_INFO module_info_gooScollectionsSrange;
extern MODULE_INFO module_info_gooScollectionsSzip;
extern MODULE_INFO module_info_gooScollectionsSstring;
extern MODULE_INFO module_info_gooScollectionsSbuffer;
extern MODULE_INFO module_info_gooSmagnitude;
extern MODULE_INFO module_info_gooScollectionsSassoc;
extern MODULE_INFO module_info_gooScollectionsSstep;
extern MODULE_INFO module_info_gooScollectionsSmap;
extern MODULE_INFO module_info_gooScollectionsScycle;

static USE_INFO use_infos[] = {
  {&module_info_runtimeSboot},
  {&module_info_gooSmacros},
  {&module_info_runtimeSruntime},
  {&module_info_gooSioSread},
  {&module_info_gooSioSwrite},
  {&module_info_compilerSsyntax},
  {&module_info_compilerSast},
  {&module_info_compilerSast_linearize},
  {&module_info_compilerSast_eval},
  {&module_info_gooSsystem},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScollections},
  {&module_info_gooSioSport},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"<program>", &module_info_compilerSast, "<program>"},
  {"loc", &module_info_runtimeSboot, "loc"},
  {"application-known?", &module_info_compilerSast, "application-known?"},
  {"<arguments>", &module_info_compilerSast, "<arguments>"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"<predefined-application>", &module_info_compilerSast, "<predefined-application>"},
  {"may-isa?", &module_info_runtimeSboot, "may-isa?"},
  {"%open-out-file", &module_info_runtimeSboot, "%open-out-file"},
  {"global-box-value", &module_info_compilerSast, "global-box-value"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"unwind-protect-protected-thunk", &module_info_compilerSast, "unwind-protect-protected-thunk"},
  {"tab-growth-threshold", &module_info_gooScollectionsStable, "tab-growth-threshold"},
  {"fix-let-types-setter", &module_info_compilerSast, "fix-let-types-setter"},
  {"$sexpr-iterate-tag", &module_info_compilerSsyntax, "$sexpr-iterate-tag"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"floor", &module_info_gooSmath, "floor"},
  {"report-undefined-global-bindings", &module_info_compilerSast, "report-undefined-global-bindings"},
  {"tab-growth-factor", &module_info_gooScollectionsStable, "tab-growth-factor"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"$min-int", &module_info_runtimeSboot, "$min-int"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"gen-add-met", &module_info_runtimeSboot, "gen-add-met"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"%vec", &module_info_runtimeSboot, "%vec"},
  {"%raw-call", &module_info_runtimeSboot, "%raw-call"},
  {"prop-setter", &module_info_runtimeSboot, "prop-setter"},
  {"$sexpr-define-function-tag", &module_info_compilerSsyntax, "$sexpr-define-function-tag"},
  {"fun-val", &module_info_runtimeSboot, "fun-val"},
  {"low-elt", &module_info_gooScollectionsScollection, "low-elt"},
  {"map-keyed", &module_info_gooScollectionsScollection, "map-keyed"},
  {"def", &module_info_runtimeSboot, "def"},
  {"sub", &module_info_gooScollectionsSsequence, "sub"},
  {"<str-tab>", &module_info_gooScollectionsStable, "<str-tab>"},
  {"sexpr-forward-primitive?", &module_info_compilerSsyntax, "sexpr-forward-primitive?"},
  {"function-binding", &module_info_compilerSast, "function-binding"},
  {"build-condition-for-handler-interactively", &module_info_runtimeSruntime, "build-condition-for-handler-interactively"},
  {"items", &module_info_gooScollectionsScollection, "items"},
  {"sexpr-unquote?", &module_info_compilerSsyntax, "sexpr-unquote?"},
  {"len", &module_info_gooStypes, "len"},
  {"%fasin", &module_info_runtimeSboot, "%fasin"},
  {"$sexpr-begin-tag", &module_info_compilerSsyntax, "$sexpr-begin-tag"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"%cb", &module_info_runtimeSboot, "%cb"},
  {"reference-binding", &module_info_compilerSast, "reference-binding"},
  {"%met-code", &module_info_runtimeSboot, "%met-code"},
  {"load-in", &module_info_compilerSast, "load-in"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"t<", &module_info_gooStypes, "t<"},
  {"isa", &module_info_runtimeSboot, "isa"},
  {"signature-value-setter", &module_info_compilerSast, "signature-value-setter"},
  {"class-ancestors", &module_info_runtimeSboot, "class-ancestors"},
  {"constant-index-setter", &module_info_compilerSast, "constant-index-setter"},
  {"ast-contains-fun?", &module_info_compilerSast_linearize, "ast-contains-fun?"},
  {"<ast-signature>", &module_info_compilerSast, "<ast-signature>"},
  {"fix-let-types", &module_info_compilerSast, "fix-let-types"},
  {"form-quotations", &module_info_compilerSast_linearize, "form-quotations"},
  {"compile-time-program", &module_info_compilerSast, "compile-time-program"},
  {"sexpr-syntax-definition-value", &module_info_compilerSsyntax, "sexpr-syntax-definition-value"},
  {"open", &module_info_gooSioSport, "open"},
  {"<list>", &module_info_gooScollectionsSlist, "<list>"},
  {"close", &module_info_gooSioSport, "close"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"condition-arguments", &module_info_runtimeSruntime, "condition-arguments"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"signature-nary?-setter", &module_info_compilerSast, "signature-nary?-setter"},
  {"<serious-condition>", &module_info_runtimeSruntime, "<serious-condition>"},
  {"sexpr-let->combination", &module_info_compilerSsyntax, "sexpr-let->combination"},
  {"binding-mutable?", &module_info_compilerSast, "binding-mutable?"},
  {"%snul", &module_info_runtimeSboot, "%snul"},
  {"binding-type", &module_info_compilerSast, "binding-type"},
  {"unchecked-runtime-environment", &module_info_compilerSast, "unchecked-runtime-environment"},
  {"cat2", &module_info_gooScollectionsSsequence, "cat2"},
  {"sexpr-isa-parent", &module_info_compilerSsyntax, "sexpr-isa-parent"},
  {"from", &module_info_gooScollectionsSrange, "from"},
  {"tab-growth-threshold-setter", &module_info_gooScollectionsStable, "tab-growth-threshold-setter"},
  {"%velt-setter", &module_info_runtimeSboot, "%velt-setter"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"tab-growth-factor-setter", &module_info_gooScollectionsStable, "tab-growth-factor-setter"},
  {"<flo>", &module_info_runtimeSboot, "<flo>"},
  {"<sym>", &module_info_runtimeSboot, "<sym>"},
  {"for", &module_info_gooSmacros, "for"},
  {"%gen-src", &module_info_runtimeSboot, "%gen-src"},
  {"<ast-primitive-definition>", &module_info_compilerSast, "<ast-primitive-definition>"},
  {"met-app?", &module_info_runtimeSboot, "met-app?"},
  {"$sexpr-method-tag", &module_info_compilerSsyntax, "$sexpr-method-tag"},
  {"format-to-string", &module_info_runtimeSruntime, "format-to-string"},
  {"new", &module_info_runtimeSboot, "new"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"locals-bindings", &module_info_compilerSast, "locals-bindings"},
  {"object-parents", &module_info_runtimeSboot, "object-parents"},
  {"<closure-creation>", &module_info_compilerSast_linearize, "<closure-creation>"},
  {"fold", &module_info_gooScollectionsScollection, "fold"},
  {"tab-gc-state", &module_info_gooScollectionsStable, "tab-gc-state"},
  {"fix-let-body-setter", &module_info_compilerSast, "fix-let-body-setter"},
  {"assignment-form-setter", &module_info_compilerSast, "assignment-form-setter"},
  {"objectify-quotation", &module_info_compilerSast, "objectify-quotation"},
  {"@isa?", &module_info_runtimeSboot, "@isa?"},
  {"fun-mets", &module_info_runtimeSboot, "fun-mets"},
  {"application-arguments", &module_info_compilerSast, "application-arguments"},
  {"%gen-code", &module_info_runtimeSboot, "%gen-code"},
  {"install-initial-bindings", &module_info_compilerSast, "install-initial-bindings"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"%pair", &module_info_runtimeSboot, "%pair"},
  {"fix-let-bindings-setter", &module_info_compilerSast, "fix-let-bindings-setter"},
  {"gen-src-setter", &module_info_runtimeSboot, "gen-src-setter"},
  {"==", &module_info_gooSmacros, "=="},
  {"<simple-error>", &module_info_runtimeSruntime, "<simple-error>"},
  {"do", &module_info_gooSmacros, "do"},
  {"<free-environment>", &module_info_compilerSast, "<free-environment>"},
  {"module-exports", &module_info_compilerSast, "module-exports"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"id-hash", &module_info_gooScollectionsStable, "id-hash"},
  {"add-prop", &module_info_runtimeSboot, "add-prop"},
  {"function-index-setter", &module_info_compilerSast, "function-index-setter"},
  {"<locals>", &module_info_compilerSast, "<locals>"},
  {"unzip", &module_info_gooScollectionsSzip, "unzip"},
  {"get", &module_info_gooSioSport, "get"},
  {"%i^", &module_info_runtimeSboot, "%i^"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"<top-level-form>", &module_info_compilerSast_linearize, "<top-level-form>"},
  {"read", &module_info_runtimeSruntime, "read"},
  {"$sexpr-define-generic-tag", &module_info_compilerSsyntax, "$sexpr-define-generic-tag"},
  {"sexpr-def-value", &module_info_compilerSsyntax, "sexpr-def-value"},
  {"binding-value-setter", &module_info_compilerSast, "binding-value-setter"},
  {"do-keyed", &module_info_gooScollectionsScollection, "do-keyed"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"%c<", &module_info_runtimeSboot, "%c<"},
  {"t=", &module_info_gooStypes, "t="},
  {"put", &module_info_gooSioSport, "put"},
  {"-", &module_info_gooSmath, "-"},
  {"pick", &module_info_gooScollectionsSsequence, "pick"},
  {"%su", &module_info_runtimeSboot, "%su"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"<prop>", &module_info_runtimeSboot, "<prop>"},
  {"<constant>", &module_info_compilerSast, "<constant>"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"%binding-name", &module_info_runtimeSboot, "%binding-name"},
  {"function-index", &module_info_compilerSast, "function-index"},
  {"%file-type", &module_info_runtimeSboot, "%file-type"},
  {"application-known?-setter", &module_info_compilerSast, "application-known?-setter"},
  {"<monitor>", &module_info_compilerSast, "<monitor>"},
  {"elts", &module_info_gooScollectionsScollection, "elts"},
  {"%current-out-port", &module_info_runtimeSboot, "%current-out-port"},
  {"sexpr-definition-variable", &module_info_compilerSsyntax, "sexpr-definition-variable"},
  {"/", &module_info_gooSmath, "/"},
  {"function-body-setter", &module_info_compilerSast, "function-body-setter"},
  {"<raw-constant>", &module_info_compilerSast, "<raw-constant>"},
  {"<gen>", &module_info_runtimeSboot, "<gen>"},
  {"sexpr-prop-owner", &module_info_compilerSsyntax, "sexpr-prop-owner"},
  {"function-signature-setter", &module_info_compilerSast, "function-signature-setter"},
  {"%f=", &module_info_runtimeSboot, "%f="},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"assignment-reference", &module_info_compilerSast, "assignment-reference"},
  {"$e", &module_info_gooSmath, "$e"},
  {"gen-src", &module_info_runtimeSboot, "gen-src"},
  {"$sexpr-define-method-tag", &module_info_compilerSsyntax, "$sexpr-define-method-tag"},
  {"%iv", &module_info_runtimeSboot, "%iv"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"sexpr-define-class?", &module_info_compilerSsyntax, "sexpr-define-class?"},
  {"program-form", &module_info_compilerSast_linearize, "program-form"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"object-props", &module_info_runtimeSboot, "object-props"},
  {"isa?", &module_info_runtimeSboot, "isa?"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"$sexpr-bind-exit-tag", &module_info_compilerSsyntax, "$sexpr-bind-exit-tag"},
  {"<ast-generic>", &module_info_compilerSast, "<ast-generic>"},
  {"constant-index", &module_info_compilerSast, "constant-index"},
  {"sexpr-prop-init", &module_info_compilerSsyntax, "sexpr-prop-init"},
  {"%symbols", &module_info_runtimeSboot, "%symbols"},
  {"find-environment-module", &module_info_compilerSast, "find-environment-module"},
  {"pop", &module_info_gooScollectionsSlist, "pop"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"case", &module_info_gooSmacros, "case"},
  {"tab-hash", &module_info_gooScollectionsStable, "tab-hash"},
  {"macro-expand", &module_info_runtimeSboot, "macro-expand"},
  {"sexpr-text-of-quotation", &module_info_compilerSsyntax, "sexpr-text-of-quotation"},
  {"function-body", &module_info_compilerSast, "function-body"},
  {"reference-called-function?-setter", &module_info_compilerSast, "reference-called-function?-setter"},
  {"mem?", &module_info_gooScollectionsScollection, "mem?"},
  {"%fun-reg", &module_info_runtimeSboot, "%fun-reg"},
  {"describe-handler", &module_info_runtimeSruntime, "describe-handler"},
  {"dv", &module_info_runtimeSboot, "dv"},
  {"<runtime-assignment>", &module_info_compilerSast, "<runtime-assignment>"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"$sexpr-def-tag", &module_info_compilerSsyntax, "$sexpr-def-tag"},
  {"%slen", &module_info_runtimeSboot, "%slen"},
  {"rcurry", &module_info_runtimeSruntime, "rcurry"},
  {"<regular-application>", &module_info_compilerSast, "<regular-application>"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"num-to-str-base", &module_info_gooScollectionsSstring, "num-to-str-base"},
  {"sexpr-make-macro-function", &module_info_compilerSsyntax, "sexpr-make-macro-function"},
  {"set", &module_info_runtimeSboot, "set"},
  {"abs", &module_info_gooSmath, "abs"},
  {"fab-g2c-module", &module_info_compilerSast, "fab-g2c-module"},
  {"sig-nary?", &module_info_runtimeSboot, "sig-nary?"},
  {"%with-monitor", &module_info_runtimeSboot, "%with-monitor"},
  {"%sp-reg-setter", &module_info_runtimeSboot, "%sp-reg-setter"},
  {"<int>", &module_info_runtimeSboot, "<int>"},
  {"<range>", &module_info_gooScollectionsSrange, "<range>"},
  {"<str>", &module_info_runtimeSboot, "<str>"},
  {"<programs>", &module_info_compilerSast, "<programs>"},
  {"all?", &module_info_gooScollectionsScollection, "all?"},
  {"fun-arity", &module_info_runtimeSboot, "fun-arity"},
  {"fun", &module_info_runtimeSboot, "fun"},
  {"range-error", &module_info_gooScollectionsScollection, "range-error"},
  {"eval", &module_info_compilerSsyntax, "eval"},
  {"signature-bindings-setter", &module_info_compilerSast, "signature-bindings-setter"},
  {"%iu", &module_info_runtimeSboot, "%iu"},
  {"%prop", &module_info_runtimeSboot, "%prop"},
  {"choose-handler", &module_info_runtimeSruntime, "choose-handler"},
  {"<error>", &module_info_runtimeSruntime, "<error>"},
  {"spread", &module_info_runtimeSruntime, "spread"},
  {"<bind-exit>", &module_info_compilerSast, "<bind-exit>"},
  {"%sb", &module_info_runtimeSboot, "%sb"},
  {"as", &module_info_gooStypes, "as"},
  {"bound?", &module_info_runtimeSboot, "bound?"},
  {"tan", &module_info_gooSmath, "tan"},
  {"%str", &module_info_runtimeSboot, "%str"},
  {"assq", &module_info_gooScollectionsSlist, "assq"},
  {"fix-let-bindings", &module_info_compilerSast, "fix-let-bindings"},
  {"elt-or", &module_info_gooScollectionsScollection, "elt-or"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"elt-setter", &module_info_gooScollectionsScollection, "elt-setter"},
  {"%isa", &module_info_runtimeSboot, "%isa"},
  {"add!", &module_info_gooScollectionsScollection, "add!"},
  {"del", &module_info_gooScollectionsScollection, "del"},
  {"find-or", &module_info_gooScollectionsScollection, "find-or"},
  {"binding-dotted?-setter", &module_info_compilerSast, "binding-dotted?-setter"},
  {"reference-frame-number", &module_info_compilerSast, "reference-frame-number"},
  {"<enum>", &module_info_gooScollectionsScollection, "<enum>"},
  {"recurring-write", &module_info_gooSioSwrite, "recurring-write"},
  {"remove-modules-by-name!", &module_info_compilerSast, "remove-modules-by-name!"},
  {"find-binding", &module_info_compilerSast, "find-binding"},
  {"buf", &module_info_gooScollectionsSbuffer, "buf"},
  {"add", &module_info_gooScollectionsScollection, "add"},
  {"tup", &module_info_runtimeSboot, "tup"},
  {"any2?", &module_info_gooScollectionsScollection, "any2?"},
  {"*macros-ok?*", &module_info_runtimeSboot, "*macros-ok?*"},
  {"%invoke-debugger", &module_info_runtimeSboot, "%invoke-debugger"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"%puts", &module_info_runtimeSboot, "%puts"},
  {"identity", &module_info_runtimeSruntime, "identity"},
  {"handler-info-message", &module_info_runtimeSboot, "handler-info-message"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"sexpr-isa-init-values", &module_info_compilerSsyntax, "sexpr-isa-init-values"},
  {"sexpr-syntax-if-then", &module_info_compilerSsyntax, "sexpr-syntax-if-then"},
  {"<ast-primitive>", &module_info_compilerSast, "<ast-primitive>"},
  {"dp", &module_info_runtimeSboot, "dp"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"%f*", &module_info_runtimeSboot, "%f*"},
  {"cat!", &module_info_gooScollectionsSsequence, "cat!"},
  {"<replace-generic-restart>", &module_info_runtimeSboot, "<replace-generic-restart>"},
  {"sig-unification-vars", &module_info_runtimeSboot, "sig-unification-vars"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"sexpr-syntax-definition-variable", &module_info_compilerSsyntax, "sexpr-syntax-definition-variable"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"monitor-test", &module_info_compilerSast, "monitor-test"},
  {"ds", &module_info_runtimeSboot, "ds"},
  {"head-setter", &module_info_runtimeSboot, "head-setter"},
  {"type-class", &module_info_runtimeSboot, "type-class"},
  {"unexec", &module_info_runtimeSboot, "unexec"},
  {"fun-sig-setter", &module_info_runtimeSboot, "fun-sig-setter"},
  {"use", &module_info_runtimeSboot, "use"},
  {"%vlen", &module_info_runtimeSboot, "%vlen"},
  {"incongruent-method-error", &module_info_runtimeSboot, "incongruent-method-error"},
  {"@<", &module_info_runtimeSboot, "@<"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"<union>", &module_info_runtimeSboot, "<union>"},
  {"analyze-calls", &module_info_compilerSast_linearize, "analyze-calls"},
  {"tab-shrink-threshold", &module_info_gooScollectionsStable, "tab-shrink-threshold"},
  {"%i<<", &module_info_runtimeSboot, "%i<<"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"<tup>", &module_info_runtimeSboot, "<tup>"},
  {"now-setter", &module_info_gooScollectionsScollection, "now-setter"},
  {"%close-out-port", &module_info_runtimeSboot, "%close-out-port"},
  {"collect-temporaries!", &module_info_compilerSast_linearize, "collect-temporaries!"},
  {"objectify-with-subtransaction", &module_info_compilerSast, "objectify-with-subtransaction"},
  {"function-registers-setter", &module_info_compilerSast, "function-registers-setter"},
  {"ins!", &module_info_gooScollectionsSsequence, "ins!"},
  {"sexpr-loc-bound-bodies", &module_info_compilerSsyntax, "sexpr-loc-bound-bodies"},
  {"<box-read>", &module_info_compilerSast_linearize, "<box-read>"},
  {"closure-creation-index", &module_info_compilerSast_linearize, "closure-creation-index"},
  {"nxt", &module_info_gooScollectionsScollection, "nxt"},
  {"module-syntax-environment", &module_info_compilerSast, "module-syntax-environment"},
  {"application-binding", &module_info_compilerSast, "application-binding"},
  {"signature-value", &module_info_compilerSast, "signature-value"},
  {"%binding-value-setter", &module_info_compilerSast_eval, "%binding-value-setter"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"~=", &module_info_gooSmath, "~="},
  {"%i*", &module_info_runtimeSboot, "%i*"},
  {"$goo-runtime-module-name", &module_info_compilerSast, "$goo-runtime-module-name"},
  {"$sexpr-quote-tag", &module_info_compilerSsyntax, "$sexpr-quote-tag"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"format", &module_info_runtimeSruntime, "format"},
  {"program-quotations", &module_info_compilerSast_linearize, "program-quotations"},
  {"*print-base*", &module_info_gooScollectionsSstring, "*print-base*"},
  {"ct-also", &module_info_runtimeSboot, "ct-also"},
  {"%f/", &module_info_runtimeSboot, "%f/"},
  {"environment-bindings", &module_info_compilerSast, "environment-bindings"},
  {"analyze-dynamic-extent", &module_info_compilerSast_linearize, "analyze-dynamic-extent"},
  {"head", &module_info_runtimeSboot, "head"},
  {"sexpr-prop-init-var", &module_info_compilerSsyntax, "sexpr-prop-init-var"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"%fatan", &module_info_runtimeSboot, "%fatan"},
  {"function-bindings", &module_info_compilerSast, "function-bindings"},
  {"sexpr-loc-bound-signatures", &module_info_compilerSsyntax, "sexpr-loc-bound-signatures"},
  {"bind-exit-main-fun", &module_info_compilerSast, "bind-exit-main-fun"},
  {"<application>", &module_info_compilerSast, "<application>"},
  {"keyboard-interrupt", &module_info_runtimeSboot, "keyboard-interrupt"},
  {"%eq?", &module_info_runtimeSboot, "%eq?"},
  {"when", &module_info_gooSmacros, "when"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"<num>", &module_info_runtimeSboot, "<num>"},
  {"%app-args", &module_info_runtimeSboot, "%app-args"},
  {"<vec>", &module_info_runtimeSboot, "<vec>"},
  {"<set>", &module_info_gooScollectionsStable, "<set>"},
  {"$sexpr-if-tag", &module_info_compilerSsyntax, "$sexpr-if-tag"},
  {"max", &module_info_gooSmagnitude, "max"},
  {"prop-getter", &module_info_runtimeSboot, "prop-getter"},
  {"<local-binding>", &module_info_compilerSast, "<local-binding>"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"$sexpr-macro-expand-tag", &module_info_compilerSsyntax, "$sexpr-macro-expand-tag"},
  {"binding-index", &module_info_compilerSast, "binding-index"},
  {"%ftanh", &module_info_runtimeSboot, "%ftanh"},
  {"sexpr-operands", &module_info_compilerSsyntax, "sexpr-operands"},
  {"fab-handler", &module_info_runtimeSruntime, "fab-handler"},
  {"*boot-macro-names*", &module_info_runtimeSboot, "*boot-macro-names*"},
  {"sexpr-prop-type", &module_info_compilerSsyntax, "sexpr-prop-type"},
  {"<local-assignment>", &module_info_compilerSast, "<local-assignment>"},
  {"%sp-reg", &module_info_runtimeSboot, "%sp-reg"},
  {"monitor-info", &module_info_compilerSast, "monitor-info"},
  {"into", &module_info_gooScollectionsScollection, "into"},
  {"sexpr-loc-bound-names", &module_info_compilerSsyntax, "sexpr-loc-bound-names"},
  {"env-object-name", &module_info_compilerSast, "env-object-name"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"empty", &module_info_gooScollectionsScollection, "empty"},
  {"<alternative>", &module_info_compilerSast, "<alternative>"},
  {"<<", &module_info_gooSmath, "<<"},
  {"binding-kind", &module_info_compilerSast, "binding-kind"},
  {"app-args", &module_info_runtimeSruntime, "app-args"},
  {"$sexpr-quasiquote-tag", &module_info_compilerSsyntax, "$sexpr-quasiquote-tag"},
  {"%selt-setter", &module_info_runtimeSboot, "%selt-setter"},
  {"sexpr-make-anonymous-method", &module_info_compilerSsyntax, "sexpr-make-anonymous-method"},
  {"form-definitions", &module_info_compilerSast_linearize, "form-definitions"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"def-list", &module_info_compilerSast, "def-list"},
  {"now-key", &module_info_gooScollectionsScollection, "now-key"},
  {"class-direct-props", &module_info_runtimeSboot, "class-direct-props"},
  {"<zip>", &module_info_gooScollectionsSzip, "<zip>"},
  {"%untag", &module_info_runtimeSboot, "%untag"},
  {"sexpr-if-test", &module_info_compilerSsyntax, "sexpr-if-test"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"display", &module_info_gooSioSwrite, "display"},
  {"mif", &module_info_runtimeSboot, "mif"},
  {"<ast-macro-definition>", &module_info_compilerSast, "<ast-macro-definition>"},
  {"<sequential>", &module_info_compilerSast, "<sequential>"},
  {"export", &module_info_runtimeSboot, "export"},
  {"sexpr-method-signature", &module_info_compilerSsyntax, "sexpr-method-signature"},
  {"acos", &module_info_gooSmath, "acos"},
  {"sexpr-function-signature", &module_info_compilerSsyntax, "sexpr-function-signature"},
  {"free-environment", &module_info_compilerSast, "free-environment"},
  {"<met>", &module_info_runtimeSboot, "<met>"},
  {"<condition>", &module_info_runtimeSruntime, "<condition>"},
  {"<module>", &module_info_compilerSast, "<module>"},
  {"zap", &module_info_gooScollectionsScollection, "zap"},
  {"logn", &module_info_gooSmath, "logn"},
  {"%fsinh", &module_info_runtimeSboot, "%fsinh"},
  {"sexpr-isa-prop-inits", &module_info_compilerSsyntax, "sexpr-isa-prop-inits"},
  {"$sexpr-prop-tag", &module_info_compilerSsyntax, "$sexpr-prop-tag"},
  {"push-last!", &module_info_gooScollectionsSbuffer, "push-last!"},
  {"len-setter", &module_info_gooScollectionsSbuffer, "len-setter"},
  {"%build-runtime-modules", &module_info_runtimeSboot, "%build-runtime-modules"},
  {"t+", &module_info_gooStypes, "t+"},
  {"<free-reference>", &module_info_compilerSast_linearize, "<free-reference>"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"register-allocate!", &module_info_compilerSast_linearize, "register-allocate!"},
  {"min", &module_info_gooSmagnitude, "min"},
  {"$sexpr-locals-tag", &module_info_compilerSsyntax, "$sexpr-locals-tag"},
  {"prop-init", &module_info_runtimeSboot, "prop-init"},
  {"sexpr-fab-setter-name", &module_info_compilerSsyntax, "sexpr-fab-setter-name"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {"%os-val-setter", &module_info_runtimeSboot, "%os-val-setter"},
  {"fun-nary?", &module_info_runtimeSboot, "fun-nary?"},
  {"%os-name", &module_info_runtimeSboot, "%os-name"},
  {"%fsin", &module_info_runtimeSboot, "%fsin"},
  {"do-named-static-global-bindings", &module_info_compilerSast, "do-named-static-global-bindings"},
  {"%lu", &module_info_runtimeSboot, "%lu"},
  {"@==", &module_info_runtimeSboot, "@=="},
  {"app", &module_info_gooSmacros, "app"},
  {"invoke-handler-interactively", &module_info_runtimeSruntime, "invoke-handler-interactively"},
  {"sexpr-assignment-variable", &module_info_compilerSsyntax, "sexpr-assignment-variable"},
  {"out", &module_info_gooSioSport, "out"},
  {"%fu", &module_info_runtimeSboot, "%fu"},
  {"last", &module_info_gooScollectionsSsequence, "last"},
  {"<subclass>", &module_info_runtimeSboot, "<subclass>"},
  {"now", &module_info_gooScollectionsScollection, "now"},
  {"sexpr-function-definition-variable", &module_info_compilerSsyntax, "sexpr-function-definition-variable"},
  {"<static-global-environment>", &module_info_compilerSast, "<static-global-environment>"},
  {"lift!", &module_info_compilerSast_linearize, "lift!"},
  {"$sexpr-syntax-if-tag", &module_info_compilerSsyntax, "$sexpr-syntax-if-tag"},
  {"%i!", &module_info_runtimeSboot, "%i!"},
  {"function-free-setter", &module_info_compilerSast, "function-free-setter"},
  {"program-register-setter", &module_info_compilerSast, "program-register-setter"},
  {"while", &module_info_gooSmacros, "while"},
  {"class-descendents", &module_info_runtimeSboot, "class-descendents"},
  {"<restart>", &module_info_runtimeSruntime, "<restart>"},
  {"t*", &module_info_gooStypes, "t*"},
  {"%put", &module_info_runtimeSboot, "%put"},
  {"tab-shrink-threshold-setter", &module_info_gooScollectionsStable, "tab-shrink-threshold-setter"},
  {"<box-creation>", &module_info_compilerSast_linearize, "<box-creation>"},
  {"%i-", &module_info_runtimeSboot, "%i-"},
  {"even?", &module_info_gooSmath, "even?"},
  {"gen-refs-setter", &module_info_runtimeSboot, "gen-refs-setter"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"push", &module_info_gooScollectionsSlist, "push"},
  {"function-registers", &module_info_compilerSast, "function-registers"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"ascii-limit", &module_info_gooScollectionsSstring, "ascii-limit"},
  {"fin", &module_info_runtimeSboot, "fin"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"dc", &module_info_runtimeSboot, "dc"},
  {"%bb", &module_info_runtimeSboot, "%bb"},
  {"%i<", &module_info_runtimeSboot, "%i<"},
  {"reference-offset", &module_info_compilerSast_linearize, "reference-offset"},
  {"%flog", &module_info_runtimeSboot, "%flog"},
  {"binding-type-setter", &module_info_compilerSast, "binding-type-setter"},
  {"prop-value-setter", &module_info_runtimeSboot, "prop-value-setter"},
  {"1-", &module_info_gooSmath, "1-"},
  {"fin?", &module_info_gooScollectionsScollection, "fin?"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"<chr>", &module_info_runtimeSboot, "<chr>"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"<flat>", &module_info_runtimeSboot, "<flat>"},
  {"quasiquote", &module_info_runtimeSboot, "quasiquote"},
  {"%app-filename", &module_info_runtimeSboot, "%app-filename"},
  {"$sexpr-define-class-tag", &module_info_compilerSsyntax, "$sexpr-define-class-tag"},
  {"cos", &module_info_gooSmath, "cos"},
  {"handler-info-arguments", &module_info_runtimeSboot, "handler-info-arguments"},
  {"%current-in-port", &module_info_runtimeSboot, "%current-in-port"},
  {"$sexpr-define-syntax-tag", &module_info_compilerSsyntax, "$sexpr-define-syntax-tag"},
  {"type-error", &module_info_runtimeSboot, "type-error"},
  {"*", &module_info_gooSmath, "*"},
  {"%fb", &module_info_runtimeSboot, "%fb"},
  {"module-name", &module_info_compilerSast, "module-name"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"subtype?", &module_info_runtimeSboot, "subtype?"},
  {"gen-refs", &module_info_runtimeSboot, "gen-refs"},
  {"init-environment-for-eval", &module_info_compilerSast, "init-environment-for-eval"},
  {"not", &module_info_runtimeSboot, "not"},
  {"sin", &module_info_gooSmath, "sin"},
  {"signature-bindings", &module_info_compilerSast, "signature-bindings"},
  {"%process-module", &module_info_runtimeSboot, "%process-module"},
  {"%f-", &module_info_runtimeSboot, "%f-"},
  {"signature-nary?", &module_info_compilerSast, "signature-nary?"},
  {"$sexpr-set-tag", &module_info_compilerSsyntax, "$sexpr-set-tag"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"<simple-condition>", &module_info_runtimeSruntime, "<simple-condition>"},
  {"$sexpr-unwind-protect-tag", &module_info_compilerSsyntax, "$sexpr-unwind-protect-tag"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"app-filename", &module_info_runtimeSruntime, "app-filename"},
  {"%peek", &module_info_runtimeSboot, "%peek"},
  {"monitor-main-thunk", &module_info_compilerSast, "monitor-main-thunk"},
  {"3rd", &module_info_gooScollectionsSsequence, "3rd"},
  {"pos", &module_info_gooScollectionsSsequence, "pos"},
  {"sexpr-loc-raw-body", &module_info_compilerSsyntax, "sexpr-loc-raw-body"},
  {"function-source-setter", &module_info_compilerSast, "function-source-setter"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"fill", &module_info_gooScollectionsScollection, "fill"},
  {"assqn", &module_info_gooScollectionsSlist, "assqn"},
  {"fab-sym", &module_info_runtimeSboot, "fab-sym"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"~", &module_info_gooSmath, "~"},
  {"lst", &module_info_runtimeSboot, "lst"},
  {"%gen-refs", &module_info_runtimeSboot, "%gen-refs"},
  {"%%sym", &module_info_runtimeSboot, "%%sym"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {">=", &module_info_gooSmagnitude, ">="},
  {"build-condition-interactively", &module_info_runtimeSruntime, "build-condition-interactively"},
  {"mod", &module_info_gooSmath, "mod"},
  {"sig-specs", &module_info_runtimeSboot, "sig-specs"},
  {"@lst", &module_info_runtimeSboot, "@lst"},
  {"<bound?>", &module_info_compilerSast, "<bound?>"},
  {"collect-registers!", &module_info_compilerSast_linearize, "collect-registers!"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"binding-native-to?", &module_info_compilerSast, "binding-native-to?"},
  {"~==", &module_info_gooSmath, "~=="},
  {"map", &module_info_gooSmacros, "map"},
  {"assocs-test-setter", &module_info_gooScollectionsSassoc, "assocs-test-setter"},
  {"ascii-whitespaces", &module_info_gooScollectionsSstring, "ascii-whitespaces"},
  {"sequentialize", &module_info_compilerSast, "sequentialize"},
  {"assignment-form", &module_info_compilerSast, "assignment-form"},
  {"update-walk!", &module_info_compilerSast_linearize, "update-walk!"},
  {"<immediate-constant>", &module_info_compilerSast, "<immediate-constant>"},
  {"%loc-val-setter", &module_info_runtimeSboot, "%loc-val-setter"},
  {"nul", &module_info_runtimeSboot, "nul"},
  {"error", &module_info_runtimeSboot, "error"},
  {"<singleton>", &module_info_runtimeSboot, "<singleton>"},
  {">>", &module_info_gooSmath, ">>"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"function-value", &module_info_compilerSast, "function-value"},
  {"ast-define-binding", &module_info_compilerSast, "ast-define-binding"},
  {"binding-inferred-type-setter", &module_info_compilerSast, "binding-inferred-type-setter"},
  {"set-module-environments", &module_info_compilerSast, "set-module-environments"},
  {"extract-things!", &module_info_compilerSast_linearize, "extract-things!"},
  {"range", &module_info_gooScollectionsSrange, "range"},
  {"%open-in-file", &module_info_runtimeSboot, "%open-in-file"},
  {"sig", &module_info_runtimeSruntime, "sig"},
  {"compose", &module_info_runtimeSruntime, "compose"},
  {"round/", &module_info_gooSmath, "round/"},
  {"<fun>", &module_info_runtimeSboot, "<fun>"},
  {"ins", &module_info_gooScollectionsSsequence, "ins"},
  {"neg", &module_info_gooSmath, "neg"},
  {"sexpr-function-body", &module_info_compilerSsyntax, "sexpr-function-body"},
  {"sexpr-variable?", &module_info_compilerSsyntax, "sexpr-variable?"},
  {"1+", &module_info_gooSmath, "1+"},
  {"%flo-bits", &module_info_runtimeSboot, "%flo-bits"},
  {"sexpr-iterate->loc", &module_info_compilerSsyntax, "sexpr-iterate->loc"},
  {"locals-bindings-setter", &module_info_compilerSast, "locals-bindings-setter"},
  {"%fi2f", &module_info_runtimeSboot, "%fi2f"},
  {"function-source", &module_info_compilerSast, "function-source"},
  {"match", &module_info_gooSmacros, "match"},
  {"sexpr-assignment-value", &module_info_compilerSsyntax, "sexpr-assignment-value"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"<compile-time>", &module_info_compilerSast, "<compile-time>"},
  {"*boot-macro-expanders*", &module_info_runtimeSboot, "*boot-macro-expanders*"},
  {"<step>", &module_info_gooScollectionsSstep, "<step>"},
  {"%fpow", &module_info_runtimeSboot, "%fpow"},
  {"prop-bound?", &module_info_runtimeSboot, "prop-bound?"},
  {"flatten-seqs", &module_info_compilerSast_linearize, "flatten-seqs"},
  {"first-then", &module_info_gooScollectionsSstep, "first-then"},
  {"sexpr-syntax-if-value", &module_info_compilerSsyntax, "sexpr-syntax-if-value"},
  {"%cu", &module_info_runtimeSboot, "%cu"},
  {"dg", &module_info_runtimeSboot, "dg"},
  {"file-opening-error", &module_info_runtimeSboot, "file-opening-error"},
  {"do-key-vals", &module_info_gooScollectionsSsequence, "do-key-vals"},
  {"signature-arity-setter", &module_info_compilerSast, "signature-arity-setter"},
  {"%%macro", &module_info_runtimeSboot, "%%macro"},
  {"bound?-reference", &module_info_compilerSast, "bound?-reference"},
  {"sig-val", &module_info_runtimeSboot, "sig-val"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"closurize-main!", &module_info_compilerSast_linearize, "closurize-main!"},
  {"<lst>", &module_info_runtimeSboot, "<lst>"},
  {"sexpr-fab-getter", &module_info_compilerSsyntax, "sexpr-fab-getter"},
  {"fab-class", &module_info_runtimeSboot, "fab-class"},
  {"<log>", &module_info_runtimeSboot, "<log>"},
  {"^", &module_info_gooSmath, "^"},
  {"@oelt", &module_info_runtimeSboot, "@oelt"},
  {"<simple-handler-info>", &module_info_runtimeSboot, "<simple-handler-info>"},
  {"signature-names", &module_info_compilerSast, "signature-names"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"locals-body-setter", &module_info_compilerSast, "locals-body-setter"},
  {"fun-specs", &module_info_runtimeSboot, "fun-specs"},
  {"type-object", &module_info_runtimeSboot, "type-object"},
  {"atan", &module_info_gooSmath, "atan"},
  {"try", &module_info_runtimeSboot, "try"},
  {"fun-name-setter", &module_info_runtimeSboot, "fun-name-setter"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"binding-index-setter", &module_info_compilerSast, "binding-index-setter"},
  {"<passive-program>", &module_info_compilerSast, "<passive-program>"},
  {"rev", &module_info_gooScollectionsSsequence, "rev"},
  {"def-programs", &module_info_compilerSast, "def-programs"},
  {"constant-value", &module_info_compilerSast, "constant-value"},
  {"%ftan", &module_info_runtimeSboot, "%ftan"},
  {"1st", &module_info_gooScollectionsSsequence, "1st"},
  {"quote", &module_info_runtimeSboot, "quote"},
  {"enum", &module_info_gooScollectionsScollection, "enum"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%file-exists?", &module_info_runtimeSboot, "%file-exists?"},
  {"sexpr-if-else", &module_info_compilerSsyntax, "sexpr-if-else"},
  {"binding-dynamic-extent?", &module_info_compilerSast, "binding-dynamic-extent?"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"locals-body", &module_info_compilerSast, "locals-body"},
  {"<=", &module_info_gooSmagnitude, "<="},
  {"binding-dynamic-extent?-setter", &module_info_compilerSast, "binding-dynamic-extent?-setter"},
  {"unknown-function-error", &module_info_runtimeSboot, "unknown-function-error"},
  {"tab-test", &module_info_gooScollectionsStable, "tab-test"},
  {"%velt", &module_info_runtimeSboot, "%velt"},
  {"elt-default", &module_info_gooScollectionsScollection, "elt-default"},
  {"sexpr-variable-type", &module_info_compilerSsyntax, "sexpr-variable-type"},
  {"function-data-refs-setter", &module_info_compilerSast, "function-data-refs-setter"},
  {"%vnul", &module_info_runtimeSboot, "%vnul"},
  {"sym-name", &module_info_runtimeSboot, "sym-name"},
  {"<handler-info>", &module_info_runtimeSruntime, "<handler-info>"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"%i>>", &module_info_runtimeSboot, "%i>>"},
  {"find", &module_info_gooScollectionsScollection, "find"},
  {"list-handlers", &module_info_runtimeSruntime, "list-handlers"},
  {"application-function", &module_info_compilerSast, "application-function"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"handler-matches?", &module_info_runtimeSruntime, "handler-matches?"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"%i+", &module_info_runtimeSboot, "%i+"},
  {"%define-method", &module_info_runtimeSboot, "%define-method"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"sexpr-definition-value", &module_info_compilerSsyntax, "sexpr-definition-value"},
  {"fun-name", &module_info_runtimeSboot, "fun-name"},
  {"sexpr-signature-value", &module_info_compilerSsyntax, "sexpr-signature-value"},
  {"<module-binding>", &module_info_compilerSast, "<module-binding>"},
  {"dm", &module_info_runtimeSboot, "dm"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"sexpr-method-body", &module_info_compilerSsyntax, "sexpr-method-body"},
  {"str-to-num", &module_info_gooScollectionsSstring, "str-to-num"},
  {"alternative-consequent", &module_info_compilerSast, "alternative-consequent"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"ast-evaluate", &module_info_compilerSast, "ast-evaluate"},
  {"object-class", &module_info_runtimeSboot, "object-class"},
  {"prop-owner", &module_info_runtimeSboot, "prop-owner"},
  {"<global-reference>", &module_info_compilerSast, "<global-reference>"},
  {"range-by", &module_info_gooScollectionsSrange, "range-by"},
  {"%fcos", &module_info_runtimeSboot, "%fcos"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"sexpr-make-application", &module_info_compilerSsyntax, "sexpr-make-application"},
  {"%gen-code-setter", &module_info_runtimeSboot, "%gen-code-setter"},
  {"sexpr-operator", &module_info_compilerSsyntax, "sexpr-operator"},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_compilerSsyntax, "sexpr-unwind-protect-cleanup-forms"},
  {"<runtime-reference>", &module_info_compilerSast, "<runtime-reference>"},
  {"gather-temporaries!", &module_info_compilerSast_linearize, "gather-temporaries!"},
  {"%binding-value", &module_info_compilerSast_eval, "%binding-value"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"function-data-refs", &module_info_compilerSast, "function-data-refs"},
  {"<tab>", &module_info_gooScollectionsScollection, "<tab>"},
  {"binding-global-box", &module_info_compilerSast, "binding-global-box"},
  {"sexpr-signature-parameters", &module_info_compilerSsyntax, "sexpr-signature-parameters"},
  {"signature-specs", &module_info_compilerSast, "signature-specs"},
  {"insert-box!", &module_info_compilerSast_linearize, "insert-box!"},
  {"rem", &module_info_gooSmath, "rem"},
  {"prop-value", &module_info_runtimeSboot, "prop-value"},
  {"list", &module_info_gooScollectionsSlist, "list"},
  {"sexpr-expand-backquote", &module_info_compilerSsyntax, "sexpr-expand-backquote"},
  {"class-parents", &module_info_runtimeSboot, "class-parents"},
  {"$permanent-hash-state", &module_info_gooScollectionsStable, "$permanent-hash-state"},
  {"program-register", &module_info_compilerSast, "program-register"},
  {">", &module_info_gooSmagnitude, ">"},
  {"@olen", &module_info_runtimeSboot, "@olen"},
  {"$default-handler-info", &module_info_runtimeSruntime, "$default-handler-info"},
  {"sexpr-if-then", &module_info_compilerSsyntax, "sexpr-if-then"},
  {"environment-uses-modules", &module_info_compilerSast, "environment-uses-modules"},
  {"vals-to-str", &module_info_gooScollectionsSsequence, "vals-to-str"},
  {"&", &module_info_gooSmath, "&"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"%fatan2", &module_info_runtimeSboot, "%fatan2"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"module-name-to-relpath", &module_info_compilerSast, "module-name-to-relpath"},
  {"fab-map", &module_info_gooScollectionsSmap, "fab-map"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"cycle", &module_info_gooScollectionsScycle, "cycle"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"|", &module_info_gooSmath, "|"},
  {"df", &module_info_runtimeSboot, "df"},
  {"key-test", &module_info_gooScollectionsScollection, "key-test"},
  {"default-handler", &module_info_runtimeSruntime, "default-handler"},
  {"range-check?", &module_info_gooScollectionsSsequence, "range-check?"},
  {"<fix-let>", &module_info_compilerSast, "<fix-let>"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"environment-module", &module_info_compilerSast, "environment-module"},
  {"function-self-recursive?-setter", &module_info_compilerSast, "function-self-recursive?-setter"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<seq>", &module_info_runtimeSboot, "<seq>"},
  {"%fcosh", &module_info_runtimeSboot, "%fcosh"},
  {"prop-type", &module_info_runtimeSboot, "prop-type"},
  {"<any>", &module_info_runtimeSboot, "<any>"},
  {"%do-stack-frames", &module_info_runtimeSboot, "%do-stack-frames"},
  {"sexpr-prop-name", &module_info_compilerSsyntax, "sexpr-prop-name"},
  {"load-module", &module_info_compilerSast, "load-module"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"in", &module_info_gooSioSport, "in"},
  {"%i=", &module_info_runtimeSboot, "%i="},
  {"log", &module_info_gooSmath, "log"},
  {"*gensym-counter*", &module_info_runtimeSruntime, "*gensym-counter*"},
  {"function-self-recursive?", &module_info_compilerSast, "function-self-recursive?"},
  {"%loc-off-setter", &module_info_runtimeSboot, "%loc-off-setter"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"%raw", &module_info_runtimeSboot, "%raw"},
  {"sexpr-block-body", &module_info_compilerSsyntax, "sexpr-block-body"},
  {"rep", &module_info_runtimeSboot, "rep"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fix-let-arguments-setter", &module_info_compilerSast, "fix-let-arguments-setter"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"*restarts-ok?*", &module_info_runtimeSboot, "*restarts-ok?*"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"loc-val-setter", &module_info_runtimeSruntime, "loc-val-setter"},
  {"objectify-signature", &module_info_compilerSast, "objectify-signature"},
  {"@len", &module_info_runtimeSboot, "@len"},
  {"<computed-program>", &module_info_compilerSast, "<computed-program>"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"class-props", &module_info_runtimeSboot, "class-props"},
  {"@+", &module_info_runtimeSboot, "@+"},
  {"alternative-condition", &module_info_compilerSast, "alternative-condition"},
  {"$max-int", &module_info_runtimeSboot, "$max-int"},
  {"do-module-loader-modules", &module_info_compilerSast, "do-module-loader-modules"},
  {"box-reference", &module_info_compilerSast_linearize, "box-reference"},
  {"<", &module_info_gooSmagnitude, "<"},
  {"%allocate-stack", &module_info_runtimeSboot, "%allocate-stack"},
  {"sexpr-make-begin", &module_info_compilerSsyntax, "sexpr-make-begin"},
  {"do3", &module_info_gooScollectionsScollection, "do3"},
  {"binding-locative", &module_info_compilerSast, "binding-locative"},
  {"program-type-setter", &module_info_compilerSast, "program-type-setter"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"%prop-unbound-error", &module_info_runtimeSboot, "%prop-unbound-error"},
  {"unwind-protect-cleanup-thunk", &module_info_compilerSast, "unwind-protect-cleanup-thunk"},
  {"<assocs>", &module_info_gooScollectionsSassoc, "<assocs>"},
  {"%unlink-stack", &module_info_runtimeSboot, "%unlink-stack"},
  {"default-handler-description", &module_info_runtimeSruntime, "default-handler-description"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"vec", &module_info_runtimeSboot, "vec"},
  {"%i&", &module_info_runtimeSboot, "%i&"},
  {"dss", &module_info_runtimeSboot, "dss"},
  {"describe-condition", &module_info_runtimeSruntime, "describe-condition"},
  {"*boot-macro-module-names*", &module_info_runtimeSboot, "*boot-macro-module-names*"},
  {"<real-reference>", &module_info_compilerSast, "<real-reference>"},
  {"sexpr-def-variable", &module_info_compilerSsyntax, "sexpr-def-variable"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"$sexpr-define-tag", &module_info_compilerSsyntax, "$sexpr-define-tag"},
  {"t?", &module_info_gooStypes, "t?"},
  {"%i>>>", &module_info_runtimeSboot, "%i>>>"},
  {"%facos", &module_info_runtimeSboot, "%facos"},
  {"del-dups", &module_info_gooScollectionsSsequence, "del-dups"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"<sig>", &module_info_runtimeSboot, "<sig>"},
  {"<buf>", &module_info_gooScollectionsSbuffer, "<buf>"},
  {"sexpr-syntax-if-else", &module_info_compilerSsyntax, "sexpr-syntax-if-else"},
  {"$sexpr-isa-tag", &module_info_compilerSsyntax, "$sexpr-isa-tag"},
  {"binding-inferred-type", &module_info_compilerSast, "binding-inferred-type"},
  {"sexpr-block-name", &module_info_compilerSsyntax, "sexpr-block-name"},
  {"as-lst", &module_info_compilerSast, "as-lst"},
  {"as-copy", &module_info_gooScollectionsScollection, "as-copy"},
  {"key-type", &module_info_gooScollectionsScollection, "key-type"},
  {"fun-names", &module_info_runtimeSboot, "fun-names"},
  {"%create-directory", &module_info_runtimeSboot, "%create-directory"},
  {"do-static-global-bindings", &module_info_compilerSast, "do-static-global-bindings"},
  {"find-setter", &module_info_runtimeSboot, "find-setter"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"if", &module_info_runtimeSboot, "if"},
  {"sexpr-unwind-protect-protected-form", &module_info_compilerSsyntax, "sexpr-unwind-protect-protected-form"},
  {"dl", &module_info_runtimeSboot, "dl"},
  {"%f+", &module_info_runtimeSboot, "%f+"},
  {"ct", &module_info_runtimeSboot, "ct"},
  {"%binding-bound?", &module_info_compilerSast_eval, "%binding-bound?"},
  {"asin", &module_info_gooSmath, "asin"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"%ib", &module_info_runtimeSboot, "%ib"},
  {"sexpr-def?", &module_info_compilerSsyntax, "sexpr-def?"},
  {"sexpr-fab-setter", &module_info_compilerSsyntax, "sexpr-fab-setter"},
  {"sexpr-isa-init-props", &module_info_compilerSsyntax, "sexpr-isa-init-props"},
  {"sexpr-unquote-splicing?", &module_info_compilerSsyntax, "sexpr-unquote-splicing?"},
  {"use/export", &module_info_runtimeSboot, "use/export"},
  {"sub-setter", &module_info_gooScollectionsSsequence, "sub-setter"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"binding-name", &module_info_compilerSast, "binding-name"},
  {"$sexpr-let-tag", &module_info_compilerSsyntax, "$sexpr-let-tag"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"$goo-boot-module-name", &module_info_compilerSast, "$goo-boot-module-name"},
  {"fix-let-body", &module_info_compilerSast, "fix-let-body"},
  {"%selt", &module_info_runtimeSboot, "%selt"},
  {"<handler>", &module_info_runtimeSruntime, "<handler>"},
  {"fix-let-arguments", &module_info_compilerSast, "fix-let-arguments"},
  {"=", &module_info_gooSmath, "="},
  {"@all2?", &module_info_runtimeSboot, "@all2?"},
  {"condition-message", &module_info_runtimeSruntime, "condition-message"},
  {"binding-value", &module_info_compilerSast, "binding-value"},
  {"range-check", &module_info_gooScollectionsSsequence, "range-check"},
  {"<module-loader>", &module_info_compilerSast, "<module-loader>"},
  {"low-elt-setter", &module_info_gooScollectionsScollection, "low-elt-setter"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"or", &module_info_gooSmacros, "or"},
  {"locals-functions-setter", &module_info_compilerSast, "locals-functions-setter"},
  {"<local-reference>", &module_info_compilerSast, "<local-reference>"},
  {"%f<", &module_info_runtimeSboot, "%f<"},
  {"until", &module_info_gooSmacros, "until"},
  {"%i?", &module_info_runtimeSboot, "%i?"},
  {"nil", &module_info_runtimeSboot, "nil"},
  {"<ast-function>", &module_info_compilerSast, "<ast-function>"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"<global-box>", &module_info_compilerSast, "<global-box>"},
  {"closure-creation-free", &module_info_compilerSast_linearize, "closure-creation-free"},
  {"<col>", &module_info_runtimeSboot, "<col>"},
  {"function-temporaries-setter", &module_info_compilerSast, "function-temporaries-setter"},
  {"sig-names", &module_info_runtimeSboot, "sig-names"},
  {"<class>", &module_info_runtimeSboot, "<class>"},
  {"function-signature", &module_info_compilerSast, "function-signature"},
  {"map2", &module_info_gooScollectionsScollection, "map2"},
  {"locals-functions", &module_info_compilerSast, "locals-functions"},
  {"global-box-value-setter", &module_info_compilerSast, "global-box-value-setter"},
  {"<cycle>", &module_info_gooScollectionsScycle, "<cycle>"},
  {"form-program", &module_info_compilerSast_linearize, "form-program"},
  {"%ft", &module_info_runtimeSboot, "%ft"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"fab-gen", &module_info_runtimeSboot, "fab-gen"},
  {"%c=", &module_info_runtimeSboot, "%c="},
  {"alternative-alternant", &module_info_compilerSast, "alternative-alternant"},
  {"sexpr-monitor-expand", &module_info_compilerSsyntax, "sexpr-monitor-expand"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%next-methods", &module_info_runtimeSboot, "%next-methods"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"probe-module", &module_info_compilerSast, "probe-module"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"signature-specs-setter", &module_info_compilerSast, "signature-specs-setter"},
  {"$char-long-names", &module_info_gooSioSread, "$char-long-names"},
  {"module-target-environment", &module_info_compilerSast, "module-target-environment"},
  {"<box-write>", &module_info_compilerSast_linearize, "<box-write>"},
  {"binding-info", &module_info_compilerSast, "binding-info"},
  {"case-insensitive-string-hash", &module_info_gooScollectionsStable, "case-insensitive-string-hash"},
  {"<binding>", &module_info_compilerSast, "<binding>"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"%get", &module_info_runtimeSboot, "%get"},
  {"binding-global-box-setter", &module_info_compilerSast, "binding-global-box-setter"},
  {"<reference>", &module_info_compilerSast, "<reference>"},
  {"%eof-object", &module_info_runtimeSboot, "%eof-object"},
  {"sexpr-syntax-if-pattern", &module_info_compilerSsyntax, "sexpr-syntax-if-pattern"},
  {"signature-names-setter", &module_info_compilerSast, "signature-names-setter"},
  {"always", &module_info_runtimeSruntime, "always"},
  {"handler-function", &module_info_runtimeSruntime, "handler-function"},
  {"<global-assignment>", &module_info_compilerSast, "<global-assignment>"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"len/fill-setter", &module_info_gooScollectionsSbuffer, "len/fill-setter"},
  {"*register-passive?*", &module_info_compilerSast_linearize, "*register-passive?*"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"module-loader-module-type", &module_info_compilerSast, "module-loader-module-type"},
  {"<definition>", &module_info_compilerSast, "<definition>"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"monitor-handler", &module_info_compilerSast, "monitor-handler"},
  {"%lb", &module_info_runtimeSboot, "%lb"},
  {"del-vals", &module_info_gooScollectionsSsequence, "del-vals"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"<unwind-protect>", &module_info_compilerSast, "<unwind-protect>"},
  {"$sexpr-monitor-tag", &module_info_compilerSsyntax, "$sexpr-monitor-tag"},
  {"%i<<<", &module_info_runtimeSboot, "%i<<<"},
  {"sexpr-function-definition-value", &module_info_compilerSsyntax, "sexpr-function-definition-value"},
  {"sexpr-define-class-parents", &module_info_compilerSsyntax, "sexpr-define-class-parents"},
  {"binding-info-setter", &module_info_compilerSast, "binding-info-setter"},
  {"tail-setter", &module_info_runtimeSboot, "tail-setter"},
  {"reference-self?", &module_info_compilerSast_linearize, "reference-self?"},
  {"+", &module_info_gooSmath, "+"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"function-nary?", &module_info_compilerSast, "function-nary?"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"sig-arity", &module_info_runtimeSboot, "sig-arity"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"keys", &module_info_gooScollectionsScollection, "keys"},
  {"fold+", &module_info_gooScollectionsScollection, "fold+"},
  {"seq", &module_info_runtimeSboot, "seq"},
  {"signature-arity", &module_info_compilerSast, "signature-arity"},
  {"function-temporaries", &module_info_compilerSast, "function-temporaries"},
  {"curry", &module_info_runtimeSruntime, "curry"},
  {"function-debug-name", &module_info_compilerSast, "function-debug-name"},
  {"case-insensitive-string-equal", &module_info_gooScollectionsStable, "case-insensitive-string-equal"},
  {"%loc-val", &module_info_runtimeSboot, "%loc-val"},
  {"do2", &module_info_gooScollectionsScollection, "do2"},
  {"<mag>", &module_info_runtimeSboot, "<mag>"},
  {"sexpr-prop-init?", &module_info_compilerSsyntax, "sexpr-prop-init?"},
  {"and", &module_info_gooSmacros, "and"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"str", &module_info_gooScollectionsSstring, "str"},
  {"runtime-environment", &module_info_compilerSast, "runtime-environment"},
  {"program-type", &module_info_compilerSast, "program-type"},
  {"program-definitions", &module_info_compilerSast_linearize, "program-definitions"},
  {"%im", &module_info_runtimeSboot, "%im"},
  {"esc", &module_info_runtimeSboot, "esc"},
  {"function-debug-name-setter", &module_info_compilerSast, "function-debug-name-setter"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"%check-call-types", &module_info_runtimeSboot, "%check-call-types"},
  {"box-form", &module_info_compilerSast_linearize, "box-form"},
  {"<opts>", &module_info_runtimeSboot, "<opts>"},
  {"find-getter", &module_info_runtimeSboot, "find-getter"},
  {"<renamed-local-binding>", &module_info_compilerSast_linearize, "<renamed-local-binding>"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"dup", &module_info_gooScollectionsScollection, "dup"},
  {"tail", &module_info_runtimeSboot, "tail"},
  {"elt-type", &module_info_gooScollectionsScollection, "elt-type"},
  {"sexpr-sequence->begin", &module_info_compilerSsyntax, "sexpr-sequence->begin"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"%file-mtime", &module_info_runtimeSboot, "%file-mtime"},
  {"%loc-off", &module_info_runtimeSboot, "%loc-off"},
  {"function-free", &module_info_compilerSast, "function-free"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"wrong-number-arguments-error", &module_info_runtimeSboot, "wrong-number-arguments-error"},
  {"<fab-list>", &module_info_compilerSast, "<fab-list>"},
  {"below", &module_info_gooScollectionsSsequence, "below"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"<type>", &module_info_runtimeSboot, "<type>"},
  {"let", &module_info_runtimeSboot, "let"},
  {"ord-app-mets", &module_info_runtimeSboot, "ord-app-mets"},
  {"sexpr-bind-pattern-variables", &module_info_compilerSsyntax, "sexpr-bind-pattern-variables"},
  {"init-ast", &module_info_compilerSast, "init-ast"},
  {"assignment-binding", &module_info_compilerSast, "assignment-binding"},
  {"loc-val", &module_info_runtimeSruntime, "loc-val"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%force-out", &module_info_runtimeSboot, "%force-out"},
  {"<loc>", &module_info_runtimeSboot, "<loc>"},
  {"%ready?", &module_info_runtimeSboot, "%ready?"},
  {"zip", &module_info_gooScollectionsSzip, "zip"},
  {"%close-in-port", &module_info_runtimeSboot, "%close-in-port"},
  {"binding-module-name", &module_info_compilerSast, "binding-module-name"},
  {"application-tail?", &module_info_compilerSast, "application-tail?"},
  {"pop-last!", &module_info_gooScollectionsSbuffer, "pop-last!"},
  {"%it/", &module_info_runtimeSboot, "%it/"},
  {"binding-dotted?", &module_info_compilerSast, "binding-dotted?"},
  {"fab", &module_info_gooScollectionsScollection, "fab"},
  {"type-elts", &module_info_runtimeSboot, "type-elts"},
  {"module-binding", &module_info_compilerSast, "module-binding"},
  {"*report-prop-unbound-errors?*", &module_info_runtimeSboot, "*report-prop-unbound-errors?*"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"<ast-method>", &module_info_compilerSast, "<ast-method>"},
  {"assocs-test", &module_info_gooScollectionsSassoc, "assocs-test"},
  {"finds", &module_info_gooScollectionsSsequence, "finds"},
  {"reference-frame-offset", &module_info_compilerSast, "reference-frame-offset"},
  {"round", &module_info_gooSmath, "round"},
  {"reference-called-function?", &module_info_compilerSast, "reference-called-function?"},
  {"%os-val", &module_info_runtimeSboot, "%os-val"},
  {"<module-binding-reference>", &module_info_compilerSast, "<module-binding-reference>"},
  {"sexpr-variable-name", &module_info_compilerSsyntax, "sexpr-variable-name"},
  {"monitor-type", &module_info_compilerSast, "monitor-type"},
  {"pow", &module_info_gooSmath, "pow"},
  {"<map>", &module_info_gooScollectionsSmap, "<map>"},
  {"reject", &module_info_gooScollectionsSsequence, "reject"},
  {"%fsqrt", &module_info_runtimeSboot, "%fsqrt"},
  {"<assignment>", &module_info_compilerSast, "<assignment>"},
  {"unconstrained-type?", &module_info_compilerSast_linearize, "unconstrained-type?"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"class-name", &module_info_runtimeSboot, "class-name"},
  {"unless", &module_info_gooSmacros, "unless"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"top", &YcompilerStopYtop},
  {"str-eval-in", &YcompilerStopYstr_eval_in},
  {"g2c-run", &YcompilerStopYg2c_run},
  {"eval-in", &YcompilerStopYeval_in},
  {"auto-run", &YcompilerStopYauto_run},
  {"str-parse-in", &YcompilerStopYstr_parse_in},
  {"esctst", &YcompilerStopYesctst},
  {"parse-in", &YcompilerStopYparse_in},
  {"for-frames", NULL},
  {"frame-var", &YcompilerStopYframe_var},
  {"top-in", &YcompilerStopYtop_in},
  {"save-image", &YcompilerStopYsave_image},
  {"<keyboard-interrupt>", &YcompilerStopYLkeyboard_interruptG},
  {"read-file", &YcompilerStopYread_file},
  {"frame", &YcompilerStopYframe},
  {"g2c-eval", &YcompilerStopYg2c_eval},
  {"auto-eval", &YcompilerStopYauto_eval},
  {"do-stack-frames", &YcompilerStopYdo_stack_frames},
  {"str-eval", &YcompilerStopYstr_eval},
  {"backtrace", &YcompilerStopYbacktrace},
  {"print-result-expression", &YcompilerStopYprint_result_expression},
  {"parse", &YcompilerStopYparse},
  {"load", &YcompilerStopYload},
  {"run", &YcompilerStopYrun},
  {"do-restart", &YcompilerStopYdo_restart},
  {"bt", &YcompilerStopYbt},
  {"str-parse", &YcompilerStopYstr_parse},
  {"ast-run", &YcompilerStopYast_run},
  {"load-from", &YcompilerStopYload_from},
  {"prompt-for-command-expression", &YcompilerStopYprompt_for_command_expression},
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"top", "top"},
  {"esctst", "esctst"},
  {"frame-var", "frame-var"},
  {"eval", "eval"},
  {"save-image", "save-image"},
  {"read-file", "read-file"},
  {"parse-in", "parse-in"},
  {"frame", "frame"},
  {"g2c-eval", "g2c-eval"},
  {"auto-eval", "auto-eval"},
  {"backtrace", "backtrace"},
  {"load", "load"},
  {"bt", "bt"},
  {"do-stack-frames", "do-stack-frames"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_compilerStop;
MODULE_INFO module_info_compilerStop = {
  "compiler/top",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_runtimeSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_runtimeSruntime (void);
extern void load_module_gooSioSread (void);
extern void load_module_gooSioSwrite (void);
extern void load_module_compilerSsyntax (void);
extern void load_module_compilerSast (void);
extern void load_module_compilerSast_linearize (void);
extern void load_module_compilerSast_eval (void);
extern void load_module_gooSsystem (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooScollections (void);
extern void load_module_gooSioSport (void);

/* EXPRESSION: */

extern void load_module_compilerStop (void);

void load_module_compilerStop (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_runtimeSboot();
  load_module_gooSmacros();
  load_module_runtimeSruntime();
  load_module_gooSioSread();
  load_module_gooSioSwrite();
  load_module_compilerSsyntax();
  load_module_compilerSast();
  load_module_compilerSast_linearize();
  load_module_compilerSast_eval();
  load_module_gooSsystem();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScollections();
  load_module_gooSioSport();

  (P)YcompilerStopY___main_0___();

}

/* END OF GENERATED CODE. */
