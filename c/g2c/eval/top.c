/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/top");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/top */

EXT(YDmax_int,"goo/boot","$max-int");
EXT(YLintG,"goo/boot","<int>");
EXT(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
DEF(YevalStopYbt,"eval/top","bt");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
DEF(YevalStopYstr_parse_in,"eval/top","str-parse-in");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
DEF(YevalStopYDD,"eval/top","$$");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
EXT(YgooSmathYasin,"goo/math","asin");
DEF(YevalStopYframe_var,"eval/top","frame-var");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
DEF(YevalStopYstr_eval_in,"eval/top","str-eval-in");
EXT(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
DEF(YevalStopYload,"eval/top","load");
DEF(YevalStopYprompt_for_command_expression,"eval/top","prompt-for-command-expression");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
DEF(YevalStopYPPbottomPPg2c_run,"eval/top","%%bottom%%g2c-run");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Ynot,"goo/boot","not");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
DEF(YevalStopYparse_in,"eval/top","parse-in");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
EXT(YLlogG,"goo/boot","<log>");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YgooSmathYC,"goo/math","^");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YLanyG,"goo/boot","<any>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
DEF(YevalStopYload_file,"eval/top","load-file");
EXT(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
EXT(Yhead,"goo/boot","head");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
EXT(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yobject_props,"goo/boot","object-props");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YgooSmacrosYlast,"goo/macros","last");
DEF(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YevalSast_linearizeYanalyze_ast,"eval/ast-linearize","analyze-ast");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YevalSast_linearizeYprogram_bindings,"eval/ast-linearize","program-bindings");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
DEF(YevalStopYstr_eval,"eval/top","str-eval");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YevalSastYmodule_uses_c_includes,"eval/ast","module-uses-c-includes");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
DEF(YevalStopYesctst,"eval/top","esctst");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooSconditionsYdescribe_handler,"goo/conditions","describe-handler");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(Yunion_elts,"goo/boot","union-elts");
DEF(YevalStopYbacktrace,"eval/top","backtrace");
DEF(YevalStopYPPbottomPPast_run,"eval/top","%%bottom%%ast-run");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YevalSast_linearizeYunconstrained_typeQ,"eval/ast-linearize","unconstrained-type?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yerror,"goo/boot","error");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
EXT(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
DEF(YevalStopYeval_in,"eval/top","eval-in");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
DEF(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YevalSast_linearizeYast_contains_funQ,"eval/ast-linearize","ast-contains-fun?");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
DYNEXT(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
EXT(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
DEF(YevalStopYDDD,"eval/top","$$$");
DYNDEF(YevalStopYrun,"eval/top","run");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
DEF(YevalStopYD,"eval/top","$");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
DEF(YevalStopYmsg_src_loc,"eval/top","msg-src-loc");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(Ylst,"goo/boot","lst");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YLmetG,"goo/boot","<met>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YtT,"goo/boot","t*");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
EXT(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
DEF(YevalStopYPPtopPPtop_in,"eval/top","%%top%%top-in");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YgooSmathYfloorS,"goo/math","floor/");
DEF(YevalStopYtop,"eval/top","top");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(Ynul,"goo/boot","nul");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
DEF(YevalStopYparse,"eval/top","parse");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
DEF(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
EXT(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
EXT(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
EXT(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
DEF(YevalStopYstr_parse,"eval/top","str-parse");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Ytup,"goo/boot","tup");
EXT(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Ynew,"goo/boot","new");
DEF(YevalStopYcompiled_fileQ,"eval/top","compiled-file?");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
DEF(YevalStopYframe,"eval/top","frame");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YLseqIG,"goo/boot","<seq.>");
DEF(YevalStopYDg2c_evalQ,"eval/top","$g2c-eval?");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
DEF(YevalStopYsave_image,"eval/top","save-image");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooStypesYas,"goo/types","as");
EXT(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
DEF(YevalStopYprint_result_expression,"eval/top","print-result-expression");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
EXT(YevalSsyntaxYsexpr_function_definition_adjectives,"eval/syntax","sexpr-function-definition-adjectives");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
EXT(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
EXT(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(Yclone,"goo/boot","clone");
EXT(YgooSmathY_,"goo/math","-");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YevalSastYmodule_uses_c_libraries,"eval/ast","module-uses-c-libraries");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yunexec,"goo/boot","unexec");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(YOanyQ,"goo/boot","@any?");
DEF(YevalStopYauto_run,"eval/top","auto-run");
EXT(YgooSmathYE,"goo/math","=");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
EXT(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
DEF(YevalStopYread_file,"eval/top","read-file");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Ytail,"goo/boot","tail");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLfloG,"goo/boot","<flo>");
DEF(YevalStopYdo_restart,"eval/top","do-restart");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmathYB,"goo/math","&");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YLpropG,"goo/boot","<prop>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_13);
DEFLIT(lit_85);
DEFLIT(lit_88);
DEFLIT(lit_198);
DEFLIT(lit_90);
DEFLIT(lit_68);
DEFLIT(lit_151);
DEFLIT(lit_33);
DEFLIT(lit_117);
DEFLIT(lit_79);
DEFLIT(lit_8);
DEFLIT(lit_62);
DEFLIT(lit_61);
DEFLIT(lit_109);
DEFLIT(lit_159);
DEFLIT(lit_49);
DEFLIT(lit_97);
DEFLIT(lit_40);
DEFLIT(lit_142);
DEFLIT(lit_118);
DEFLIT(lit_166);
DEFLIT(lit_1);
DEFLIT(lit_122);
DEFLIT(lit_176);
DEFLIT(lit_195);
DEFLIT(lit_70);
DEFLIT(lit_73);
DEFLIT(lit_165);
DEFLIT(lit_58);
DEFLIT(lit_138);
DEFLIT(lit_12);
DEFLIT(lit_175);
DEFLIT(lit_177);
DEFLIT(lit_96);
DEFLIT(lit_74);
DEFLIT(lit_72);
DEFLIT(lit_54);
DEFLIT(lit_20);
DEFLIT(lit_133);
DEFLIT(lit_174);
DEFLIT(lit_179);
DEFLIT(lit_21);
DEFLIT(lit_168);
DEFLIT(lit_10);
DEFLIT(lit_4);
DEFLIT(lit_84);
DEFLIT(lit_39);
DEFLIT(lit_71);
DEFLIT(lit_121);
DEFLIT(lit_100);
DEFLIT(lit_157);
DEFLIT(lit_35);
DEFLIT(lit_46);
DEFLIT(lit_53);
DEFLIT(lit_184);
DEFLIT(lit_104);
DEFLIT(lit_25);
DEFLIT(lit_103);
DEFLIT(lit_115);
DEFLIT(lit_119);
DEFLIT(lit_99);
DEFLIT(lit_36);
DEFLIT(lit_78);
DEFLIT(lit_59);
DEFLIT(lit_158);
DEFLIT(lit_125);
DEFLIT(lit_95);
DEFLIT(lit_112);
DEFLIT(lit_6);
DEFLIT(lit_181);
DEFLIT(lit_146);
DEFLIT(lit_18);
DEFLIT(lit_26);
DEFLIT(lit_15);
DEFLIT(lit_51);
DEFLIT(lit_37);
DEFLIT(lit_152);
DEFLIT(lit_41);
DEFLIT(lit_77);
DEFLIT(lit_149);
DEFLIT(lit_57);
DEFLIT(lit_143);
DEFLIT(lit_123);
DEFLIT(lit_148);
DEFLIT(lit_98);
DEFLIT(lit_199);
DEFLIT(lit_201);
DEFLIT(lit_134);
DEFLIT(lit_92);
DEFLIT(lit_93);
DEFLIT(lit_171);
DEFLIT(lit_126);
DEFLIT(lit_128);
DEFLIT(lit_22);
DEFLIT(lit_192);
DEFLIT(lit_80);
DEFLIT(lit_56);
DEFLIT(lit_113);
DEFLIT(lit_42);
DEFLIT(lit_139);
DEFLIT(lit_189);
DEFLIT(lit_185);
DEFLIT(lit_38);
DEFLIT(lit_83);
DEFLIT(lit_63);
DEFLIT(lit_55);
DEFLIT(lit_178);
DEFLIT(lit_170);
DEFLIT(lit_69);
DEFLIT(lit_127);
DEFLIT(lit_101);
DEFLIT(lit_191);
DEFLIT(lit_167);
DEFLIT(lit_65);
DEFLIT(lit_108);
DEFLIT(lit_187);
DEFLIT(lit_190);
DEFLIT(lit_156);
DEFLIT(lit_45);
DEFLIT(lit_16);
DEFLIT(lit_183);
DEFLIT(lit_136);
DEFLIT(lit_106);
DEFLIT(lit_110);
DEFLIT(lit_130);
DEFLIT(lit_5);
DEFLIT(lit_180);
DEFLIT(lit_172);
DEFLIT(lit_155);
DEFLIT(lit_11);
DEFLIT(lit_31);
DEFLIT(lit_196);
DEFLIT(lit_124);
DEFLIT(lit_48);
DEFLIT(lit_89);
DEFLIT(lit_154);
DEFLIT(lit_3);
DEFLIT(lit_111);
DEFLIT(lit_114);
DEFLIT(lit_197);
DEFLIT(lit_66);
DEFLIT(lit_120);
DEFLIT(lit_52);
DEFLIT(lit_193);
DEFLIT(lit_29);
DEFLIT(lit_137);
DEFLIT(lit_76);
DEFLIT(lit_144);
DEFLIT(lit_17);
DEFLIT(lit_32);
DEFLIT(lit_164);
DEFLIT(lit_91);
DEFLIT(lit_105);
DEFLIT(lit_67);
DEFLIT(lit_82);
DEFLIT(lit_43);
DEFLIT(lit_23);
DEFLIT(lit_129);
DEFLIT(lit_173);
DEFLIT(lit_145);
DEFLIT(lit_135);
DEFLIT(lit_194);
DEFLIT(lit_86);
DEFLIT(lit_140);
DEFLIT(lit_44);
DEFLIT(lit_107);
DEFLIT(lit_9);
DEFLIT(lit_162);
DEFLIT(lit_27);
DEFLIT(lit_34);
DEFLIT(lit_64);
DEFLIT(lit_87);
DEFLIT(lit_14);
DEFLIT(lit_2);
DEFLIT(lit_188);
DEFLIT(lit_186);
DEFLIT(lit_200);
DEFLIT(lit_141);
DEFLIT(lit_161);
DEFLIT(lit_153);
DEFLIT(lit_30);
DEFLIT(lit_94);
DEFLIT(lit_19);
DEFLIT(lit_50);
DEFLIT(lit_7);
DEFLIT(lit_160);
DEFLIT(lit_24);
DEFLIT(lit_47);
DEFLIT(lit_102);
DEFLIT(lit_182);
DEFLIT(lit_150);
DEFLIT(lit_60);
DEFLIT(lit_163);
DEFLIT(lit_132);
DEFLIT(lit_75);
DEFLIT(lit_169);
DEFLIT(lit_81);
DEFLIT(lit_131);
DEFLIT(lit_28);
DEFLIT(lit_116);
DEFLIT(lit_0);
DEFLIT(lit_147);

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
LOCFOR(fun_x_1484_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_x_1488_30);
LOCFOR(fun_31);
LOCFOR(fun_32);
LOCFOR(fun_msg_src_loc_33);
LOCFOR(fun_34);
LOCFOR(fun_35);
LOCFOR(fun_backtrace_36);
LOCFOR(fun_37);
LOCFOR(fun_38);
LOCFOR(fun_frame_39);
LOCFOR(fun_40);
LOCFOR(fun_41);
LOCFOR(fun_42);
LOCFOR(fun_frame_var_43);
LOCFOR(fun_44);
LOCFOR(fun_45);
LOCFOR(fun_bt_46);
FUNFOR(YevalStopYdo_restart);
LOCFOR(fun_48);
LOCFOR(fun_49);
LOCFOR(fun_50);
LOCFOR(fun_51);
LOCFOR(fun_x_1532_52);
LOCFOR(fun_53);
LOCFOR(fun_x_1529_54);
LOCFOR(fun_55);
LOCFOR(fun_x_1526_56);
LOCFOR(fun_57);
LOCFOR(fun_x_1523_58);
LOCFOR(fun_59);
LOCFOR(fun_x_1520_60);
LOCFOR(fun_61);
LOCFOR(fun_x_1517_62);
LOCFOR(fun_63);
LOCFOR(fun_x_1514_64);
LOCFOR(fun_65);
LOCFOR(fun_x_1511_66);
LOCFOR(fun_67);
LOCFOR(fun_x_1508_68);
LOCFOR(fun_69);
LOCFOR(fun_x_1505_70);
LOCFOR(fun_71);
LOCFOR(fun_x_1502_72);
LOCFOR(fun_73);
LOCFOR(fun_x_1499_74);
LOCFOR(fun_75);
LOCFOR(fun_x_1496_76);
LOCFOR(fun_77);
LOCFOR(fun_x_1493_78);
LOCFOR(fun_79);
LOCFOR(fun_80);
LOCFOR(fun_81);
LOCFOR(fun_82);
LOCFOR(fun_loop_83);
LOCFOR(fun_84);
LOCFOR(fun_PPtopPPtop_in_85);
LOCFOR(fun_86);
LOCFOR(fun_87);
LOCFOR(fun_88);
LOCFOR(fun_loop_89);
LOCFOR(fun_90);
LOCFOR(fun_91);
LOCFOR(fun_top_92);
LOCFOR(fun_93);
FUNFOR(YevalStopYsave_image);
extern P YevalStopY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_0) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,FREEREF(0),LITREF(lit_3));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_1) {
LINK_STACK();
loop:
  CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_4));
UNLINK_STACK();
  QRET(LITREF(lit_5));
}

FUNCODEDEF(fun_2) {
  P exit_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exit_, 0);
loop:
  T0 = FUNFAB(fun_0,1,exit_);
  T1 = fun_1;
  with_cleanup(T0,T1);
  CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_6));
UNLINK_STACK();
  QRET(LITREF(lit_7));
}

FUNCODEDEF(YevalStopYesctst) {
  P T0,T1;
LINK_STACK();
loop:
  T1 = fun_2;
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_parse_in_4) {
  P s_,ct_env_;
  P T0,T1;
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
  P T0,T1;
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
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalStopYparse_in),s_,ct_env_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_16),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_parse_7) {
  P s_,modname_;
  P T0,T1;
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
  P T0,T1,T2,T3;
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
  P astF3075;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(form_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),form_,ct_env_,YPfalse);
  astF3075 = T1;
  T2 = CALL2(1,DYNREF(YevalStopYrun),astF3075,ct_env_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_in_12) {
  P x_,ct_env_;
  P eF3077;
  P oF3076;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),x_,ct_env_,YPfalse);
  oF3076 = T1;
  T3 = CALL1(1,VARREF(YevalSastYast_evaluate),oF3076);
  eF3077 = T3;
  T2 = eF3077;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_13) {
  P x_,modname_;
  P T0,T1;
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
  P T0,T1,T2;
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
  P T0,T1;
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
  T0 = CALL2(1,VARREF(YgooScolsSseqYsuffixQ),name_,LITREF(lit_40));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_17) {
  P forms_;
  P xF3078;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(forms_, 0);
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL1(1,VARREF(YgooSconditionsYread),T2);
  xF3078 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),xF3078);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooSmacrosYrevX),forms_);
    T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_sequence_Gbegin),T6);
    T3 = T5;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYpair),xF3078,forms_);
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
  P loopF3079;
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_in_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T2 = FUNSHELL(1,fun_loop_17,2);
  loopF3079 = T2;
  FUNINIT(loopF3079, 2,FREEREF(0),loopF3079);
  T3 = CALL1(0,loopF3079,Ynil);
  T1 = T3;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_19) {
  P tmpF3080;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF3080 = T1;
  if (tmpF3080 != YPfalse) {
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
  P portF3081;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  portF3081 = YPfalse;
  portF3081 = BOXFAB(portF3081);
  T3 = FUNFAB(fun_18,2,portF3081,filename_);
  T4 = FUNFAB(fun_19,1,portF3081);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_in_21) {
  P filename_,ct_env_;
  P oF3083;
  P xF3082;
  P T0,T1,T2,T3,T4,T5,T6,T7;
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
    xF3082 = T4;
    T6 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),xF3082,ct_env_,YPfalse);
    oF3083 = T6;
    T7 = CALL2(1,DYNREF(YevalStopYrun),oF3083,ct_env_);
    T5 = T7;
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_file_22) {
  P filename_,modname_;
  P T0,T1;
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
  P realfileF3084;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_in_path),name_,VARREF(YgooSsystemYTmodule_search_pathT));
  realfileF3084 = T1;
  T2 = CALL1(1,VARREF(Ynot),realfileF3084);
  if (T2 != YPfalse) {
    T3 = CALL1(1,VARREF(Yfile_opening_error),name_);
  } else {
  }
  T4 = CALL2(1,VARREF(YevalStopYload_file),realfileF3084,modname_);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_prompt_for_command_expression_24) {
  P env_,level_,prompt_;
  P argsF3088;
  P arg_strF3087;
  P tmpF3086;
  P formF3085;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1,a2,a3;
LINK_STACK();
  ARG(env_, 0);
  ARG(level_, 1);
  ARG(prompt_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_environment_module),env_);
  T0 = CALL1(1,VARREF(YevalSastYmodule_name),T1);
  CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_53),T0,level_,prompt_);
  CALL1(1,VARREF(YgooSioSportYforce_out),VARREF(YgooSioSportYout));
  T3 = CALL1(1,VARREF(YgooSconditionsYread),VARREF(YgooSioSportYin));
  formF3085 = T3;
  T6 = CALL2(1,VARREF(YisaQ),formF3085,VARREF(YLlstG));
  tmpF3086 = T6;
  if (tmpF3086 != YPfalse) {
    T9 = CALL1(1,VARREF(Yhead),formF3085);
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),T9,LITREF(lit_54));
    T7 = T8;
  } else {
    T7 = YPfalse;
  }
  T5 = T7;
  if (T5 != YPfalse) {
    T11 = CALL1(1,VARREF(YgooSioSportYgets),VARREF(YgooSioSportYin));
    arg_strF3087 = T11;
    T14 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_55),arg_strF3087,LITREF(lit_56));
    T13 = CALL1(1,VARREF(YgooSioSreadYread_from_string),T14);
    argsF3088 = T13;
    T17 = CALL1(1,VARREF(YgooSmacrosY2nd),formF3085);
    T16 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_57),T17);
    T15 = CALL2(1,VARREF(YgooSmacrosYpair),T16,argsF3088);
    T12 = T15;
    T10 = T12;
    T4 = T10;
  } else {
    T4 = formF3085;
  }
  T2 = T4;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_print_result_expression_25) {
  P env_,level_,label_,result_;
  P T0,T1,T2;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(env_, 0);
  ARG(level_, 1);
  ARG(label_, 2);
  ARG(result_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_environment_module),env_);
  T0 = CALL1(1,VARREF(YevalSastYmodule_name),T1);
  CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_60),T0,level_,label_);
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

FUNCODEDEF(fun_x_1484_27) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_67),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_28) {
  P return_;
  P x_1483F3105;
  P x_1483F3104;
  P x_1483F3103;
  P x_1483F3102;
  P x_1483F3101;
  P x_1483F3100;
  P x_1483F3099;
  P x_1483F3098;
  P x_1483F3097;
  P x_1483F3096;
  P x_1483F3095;
  P bodyF3094;
  P argsF3093;
  P fF3092;
  P numF3091;
  P x_1483F3090;
  P x_1484F3089;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1484_27,2);
  x_1484F3089 = T1;
  FUNINIT(x_1484F3089, 2,FREEREF(0),return_);
  x_1483F3090 = FREEREF(0);
  numF3091 = YPfalse;
  numF3091 = BOXFAB(numF3091);
  fF3092 = YPfalse;
  fF3092 = BOXFAB(fF3092);
  argsF3093 = YPfalse;
  argsF3093 = BOXFAB(argsF3093);
  bodyF3094 = YPfalse;
  bodyF3094 = BOXFAB(bodyF3094);
  T11 = CALL2(1,VARREF(YisaQ),x_1483F3090,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1483F3090,LITREF(lit_67),x_1484F3089);
    x_1483F3095 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1483F3095,x_1484F3089);
    x_1483F3096 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1483F3096,x_1484F3089);
    BOXVAL(numF3091) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1483F3096);
    x_1483F3097 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1483F3097,x_1484F3089);
    BOXVAL(fF3092) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1483F3097);
    x_1483F3098 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1483F3098,x_1484F3089);
    BOXVAL(argsF3093) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1483F3098);
    x_1483F3099 = T24;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1483F3099,x_1484F3089);
    x_1483F3100 = T26;
    T27 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1483F3100,x_1484F3089);
    T28 = CALL1(1,VARREF(Ytail),x_1483F3099);
    x_1483F3101 = T28;
    T29 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1483F3101,x_1484F3089);
    T25 = T29;
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T30 = CALL1(1,VARREF(Ytail),x_1483F3095);
    x_1483F3102 = T30;
    BOXVAL(bodyF3094) = x_1483F3102;
    x_1483F3103 = Ynil;
    T33 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1483F3103,x_1484F3089);
    x_1483F3104 = T33;
    T34 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1483F3104,x_1484F3089);
    T35 = CALL1(1,VARREF(Ytail),x_1483F3103);
    x_1483F3105 = T35;
    T36 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1483F3105,x_1484F3089);
    T32 = T36;
    T31 = T32;
    T14 = T31;
    T12 = T14;
  } else {
    T37 = CALL2(1,x_1484F3089,LITREF(lit_68),x_1483F3090);
  }
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_69));
  T45 = BOXVAL(numF3091);
  T44 = CALL1(1,VARREF(Ylst),T45);
  T46 = CALL1(1,VARREF(Ylst),YPint((P)0));
  T43 = CALL3(1,VARREF(YgooSmacrosYcat),T44,T46,LITREF(lit_70));
  T42 = CALL1(1,VARREF(Ylst),T43);
  T41 = CALL2(1,VARREF(YgooSmacrosYcat),T42,LITREF(lit_70));
  T40 = CALL1(1,VARREF(Ylst),T41);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_71));
  T56 = BOXVAL(fF3092);
  T55 = CALL1(1,VARREF(Ylst),T56);
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_72));
  T54 = CALL3(1,VARREF(YgooSmacrosYcat),T55,T57,LITREF(lit_70));
  T53 = CALL1(1,VARREF(Ylst),T54);
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T62 = BOXVAL(argsF3093);
  T61 = CALL1(1,VARREF(Ylst),T62);
  T65 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T66 = CALL1(1,VARREF(Ylst),LITREF(lit_72));
  T64 = CALL3(1,VARREF(YgooSmacrosYcat),T65,T66,LITREF(lit_70));
  T63 = CALL1(1,VARREF(Ylst),T64);
  T59 = CALL4(1,VARREF(YgooSmacrosYcat),T60,T61,T63,LITREF(lit_70));
  T58 = CALL1(1,VARREF(Ylst),T59);
  T67 = BOXVAL(bodyF3094);
  T70 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T72 = BOXVAL(numF3091);
  T71 = CALL1(1,VARREF(Ylst),T72);
  T69 = CALL3(1,VARREF(YgooSmacrosYcat),T70,T71,LITREF(lit_70));
  T68 = CALL1(1,VARREF(Ylst),T69);
  T51 = CALLN(1,VARREF(YgooSmacrosYcat),6,T52,T53,T58,T67,T68,LITREF(lit_70));
  T50 = CALL1(1,VARREF(Ylst),T51);
  T48 = CALL3(1,VARREF(YgooSmacrosYcat),T49,T50,LITREF(lit_70));
  T47 = CALL1(1,VARREF(Ylst),T48);
  T38 = CALL4(1,VARREF(YgooSmacrosYcat),T39,T40,T47,LITREF(lit_70));
  T9 = T38;
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
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_28,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1488_30) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_80),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_31) {
  P return_;
  P x_1487F3122;
  P x_1487F3121;
  P x_1487F3120;
  P x_1487F3119;
  P x_1487F3118;
  P x_1487F3117;
  P x_1487F3116;
  P x_1487F3115;
  P x_1487F3114;
  P x_1487F3113;
  P x_1487F3112;
  P bodyF3111;
  P argsF3110;
  P fF3109;
  P numF3108;
  P x_1487F3107;
  P x_1488F3106;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1488_30,2);
  x_1488F3106 = T1;
  FUNINIT(x_1488F3106, 2,FREEREF(0),return_);
  x_1487F3107 = FREEREF(0);
  numF3108 = YPfalse;
  numF3108 = BOXFAB(numF3108);
  fF3109 = YPfalse;
  fF3109 = BOXFAB(fF3109);
  argsF3110 = YPfalse;
  argsF3110 = BOXFAB(argsF3110);
  bodyF3111 = YPfalse;
  bodyF3111 = BOXFAB(bodyF3111);
  T11 = CALL2(1,VARREF(YisaQ),x_1487F3107,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1487F3107,LITREF(lit_80),x_1488F3106);
    x_1487F3112 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1487F3112,x_1488F3106);
    x_1487F3113 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1487F3113,x_1488F3106);
    BOXVAL(numF3108) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1487F3113);
    x_1487F3114 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1487F3114,x_1488F3106);
    BOXVAL(fF3109) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1487F3114);
    x_1487F3115 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1487F3115,x_1488F3106);
    BOXVAL(argsF3110) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1487F3115);
    x_1487F3116 = T24;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1487F3116,x_1488F3106);
    x_1487F3117 = T26;
    T27 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1487F3117,x_1488F3106);
    T28 = CALL1(1,VARREF(Ytail),x_1487F3116);
    x_1487F3118 = T28;
    T29 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1487F3118,x_1488F3106);
    T25 = T29;
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T30 = CALL1(1,VARREF(Ytail),x_1487F3112);
    x_1487F3119 = T30;
    BOXVAL(bodyF3111) = x_1487F3119;
    x_1487F3120 = Ynil;
    T33 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1487F3120,x_1488F3106);
    x_1487F3121 = T33;
    T34 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1487F3121,x_1488F3106);
    T35 = CALL1(1,VARREF(Ytail),x_1487F3120);
    x_1487F3122 = T35;
    T36 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1487F3122,x_1488F3106);
    T32 = T36;
    T31 = T32;
    T14 = T31;
    T12 = T14;
  } else {
    T37 = CALL2(1,x_1488F3106,LITREF(lit_68),x_1487F3107);
  }
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_81));
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_82));
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_83));
  T45 = CALL1(1,VARREF(Ylst),YPfalse);
  T42 = CALL4(1,VARREF(YgooSmacrosYcat),T43,T44,T45,LITREF(lit_70));
  T41 = CALL1(1,VARREF(Ylst),T42);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T50 = CALL1(1,VARREF(Ylst),YPint((P)0));
  T47 = CALL4(1,VARREF(YgooSmacrosYcat),T48,T49,T50,LITREF(lit_70));
  T46 = CALL1(1,VARREF(Ylst),T47);
  T53 = CALL1(1,VARREF(Ylst),LITREF(lit_67));
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_85));
  T58 = BOXVAL(fF3109);
  T57 = CALL1(1,VARREF(Ylst),T58);
  T60 = BOXVAL(argsF3110);
  T59 = CALL1(1,VARREF(Ylst),T60);
  T55 = CALL4(1,VARREF(YgooSmacrosYcat),T56,T57,T59,LITREF(lit_70));
  T54 = CALL1(1,VARREF(Ylst),T55);
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T64 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T67 = CALL1(1,VARREF(Ylst),LITREF(lit_87));
  T70 = CALL1(1,VARREF(Ylst),LITREF(lit_88));
  T72 = BOXVAL(fF3109);
  T71 = CALL1(1,VARREF(Ylst),T72);
  T69 = CALL3(1,VARREF(YgooSmacrosYcat),T70,T71,LITREF(lit_70));
  T68 = CALL1(1,VARREF(Ylst),T69);
  T75 = CALL1(1,VARREF(Ylst),LITREF(lit_89));
  T76 = CALL1(1,VARREF(Ylst),LITREF(lit_90));
  T79 = CALL1(1,VARREF(Ylst),LITREF(lit_88));
  T81 = BOXVAL(fF3109);
  T80 = CALL1(1,VARREF(Ylst),T81);
  T78 = CALL3(1,VARREF(YgooSmacrosYcat),T79,T80,LITREF(lit_70));
  T77 = CALL1(1,VARREF(Ylst),T78);
  T74 = CALL4(1,VARREF(YgooSmacrosYcat),T75,T76,T77,LITREF(lit_70));
  T73 = CALL1(1,VARREF(Ylst),T74);
  T82 = CALL1(1,VARREF(Ylst),LITREF(lit_91));
  T66 = CALL5(1,VARREF(YgooSmacrosYcat),T67,T68,T73,T82,LITREF(lit_70));
  T65 = CALL1(1,VARREF(Ylst),T66);
  T62 = CALL4(1,VARREF(YgooSmacrosYcat),T63,T64,T65,LITREF(lit_70));
  T61 = CALL1(1,VARREF(Ylst),T62);
  T85 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T87 = BOXVAL(numF3108);
  T86 = CALL1(1,VARREF(Ylst),T87);
  T90 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
  T91 = CALL1(1,VARREF(Ylst),LITREF(lit_85));
  T92 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T89 = CALL4(1,VARREF(YgooSmacrosYcat),T90,T91,T92,LITREF(lit_70));
  T88 = CALL1(1,VARREF(Ylst),T89);
  T84 = CALL4(1,VARREF(YgooSmacrosYcat),T85,T86,T88,LITREF(lit_70));
  T83 = CALL1(1,VARREF(Ylst),T84);
  T95 = CALL1(1,VARREF(Ylst),LITREF(lit_93));
  T96 = CALL1(1,VARREF(Ylst),LITREF(lit_83));
  T99 = CALL1(1,VARREF(Ylst),LITREF(lit_93));
  T102 = CALL1(1,VARREF(Ylst),LITREF(lit_94));
  T103 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T104 = CALL1(1,VARREF(Ylst),LITREF(lit_95));
  T101 = CALL4(1,VARREF(YgooSmacrosYcat),T102,T103,T104,LITREF(lit_70));
  T100 = CALL1(1,VARREF(Ylst),T101);
  T107 = CALL1(1,VARREF(Ylst),LITREF(lit_82));
  T108 = CALL1(1,VARREF(Ylst),YPfalse);
  T106 = CALL3(1,VARREF(YgooSmacrosYcat),T107,T108,LITREF(lit_70));
  T105 = CALL1(1,VARREF(Ylst),T106);
  T98 = CALL4(1,VARREF(YgooSmacrosYcat),T99,T100,T105,LITREF(lit_70));
  T97 = CALL1(1,VARREF(Ylst),T98);
  T109 = BOXVAL(bodyF3111);
  T94 = CALL5(1,VARREF(YgooSmacrosYcat),T95,T96,T97,T109,LITREF(lit_70));
  T93 = CALL1(1,VARREF(Ylst),T94);
  T112 = CALL1(1,VARREF(Ylst),LITREF(lit_93));
  T115 = CALL1(1,VARREF(Ylst),LITREF(lit_94));
  T116 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T117 = CALL1(1,VARREF(Ylst),LITREF(lit_96));
  T114 = CALL4(1,VARREF(YgooSmacrosYcat),T115,T116,T117,LITREF(lit_70));
  T113 = CALL1(1,VARREF(Ylst),T114);
  T120 = CALL1(1,VARREF(Ylst),LITREF(lit_97));
  T121 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T122 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T119 = CALL4(1,VARREF(YgooSmacrosYcat),T120,T121,T122,LITREF(lit_70));
  T118 = CALL1(1,VARREF(Ylst),T119);
  T125 = CALL1(1,VARREF(Ylst),LITREF(lit_97));
  T126 = CALL1(1,VARREF(Ylst),LITREF(lit_83));
  T127 = CALL1(1,VARREF(Ylst),YPtrue);
  T124 = CALL4(1,VARREF(YgooSmacrosYcat),T125,T126,T127,LITREF(lit_70));
  T123 = CALL1(1,VARREF(Ylst),T124);
  T111 = CALL5(1,VARREF(YgooSmacrosYcat),T112,T113,T118,T123,LITREF(lit_70));
  T110 = CALL1(1,VARREF(Ylst),T111);
  T52 = CALLN(1,VARREF(YgooSmacrosYcat),7,T53,T54,T61,T83,T93,T110,LITREF(lit_70));
  T51 = CALL1(1,VARREF(Ylst),T52);
  T38 = CALLN(1,VARREF(YgooSmacrosYcat),6,T39,T40,T41,T46,T51,LITREF(lit_70));
  T9 = T38;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_32) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_31,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_msg_src_loc_33) {
  P f_;
  P slF3123;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(f_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),f_,VARREF(YLmetG));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Yfun_src),f_);
    slF3123 = T3;
    T5 = CALL2(1,VARREF(YisaQ),slF3123,VARREF(YLsrc_locG));
    if (T5 != YPfalse) {
      T7 = CALL1(1,VARREF(Ysrc_loc_file),slF3123);
      T8 = CALL1(1,VARREF(Ysrc_loc_line),slF3123);
      T6 = CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_101),T7,T8);
      T4 = T6;
    } else {
      T4 = YPfalse;
    }
    T2 = T4;
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_34) {
  P f_,Uargs_;
  P numF3126;
  P UnameF3125;
  P argsF3124;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF3124 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_91);
  }
  UnameF3125 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF3126 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF3125,LITREF(lit_95));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_105),numF3126,f_,argsF3124);
    CALL1(1,VARREF(YevalStopYmsg_src_loc),f_);
    T14 = CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
  } else {
  }
  T15 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF3125,LITREF(lit_96));
  if (T15 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF3126;
    T16 = BOXVAL(FREEREF(2)) = YPtrue;
  } else {
  }
  T19 = BOXVAL(FREEREF(0));
  T18 = CALL2(1,VARREF(YgooSmathYA),T19,YPint((P)1));
  T17 = BOXVAL(FREEREF(0)) = T18;
  T7 = T17;
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_35) {
  P break_;
  P UnumF3129;
  P Utop_numF3128;
  P Useen_topF3127;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF3127 = YPfalse;
  Useen_topF3127 = BOXFAB(Useen_topF3127);
  Utop_numF3128 = YPint((P)0);
  Utop_numF3128 = BOXFAB(Utop_numF3128);
  UnumF3129 = YPint((P)0);
  UnumF3129 = BOXFAB(UnumF3129);
  T7 = FUNFAB(fun_34,4,UnumF3129,Utop_numF3128,Useen_topF3127,break_);
  T6 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T7);
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_backtrace_36) {
  P T0,T1;
LINK_STACK();
loop:
  T1 = fun_35;
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_37) {
  P f_,Uargs_;
  P numF3132;
  P UnameF3131;
  P argsF3130;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF3130 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_91);
  }
  UnameF3131 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF3132 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF3131,LITREF(lit_95));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T15 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(4),numF3132);
    if (T15 != YPfalse) {
      CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_110),numF3132,f_,argsF3130);
      CALL1(1,VARREF(YevalStopYmsg_src_loc),f_);
      T16 = CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
      T14 = T16;
    } else {
      T14 = YPfalse;
    }
  } else {
  }
  T17 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF3131,LITREF(lit_96));
  if (T17 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF3132;
    T18 = BOXVAL(FREEREF(2)) = YPtrue;
  } else {
  }
  T21 = BOXVAL(FREEREF(0));
  T20 = CALL2(1,VARREF(YgooSmathYA),T21,YPint((P)1));
  T19 = BOXVAL(FREEREF(0)) = T20;
  T7 = T19;
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_38) {
  P break_;
  P UnumF3135;
  P Utop_numF3134;
  P Useen_topF3133;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF3133 = YPfalse;
  Useen_topF3133 = BOXFAB(Useen_topF3133);
  Utop_numF3134 = YPint((P)0);
  Utop_numF3134 = BOXFAB(Utop_numF3134);
  UnumF3135 = YPint((P)0);
  UnumF3135 = BOXFAB(UnumF3135);
  T7 = FUNFAB(fun_37,5,UnumF3135,Utop_numF3134,Useen_topF3133,break_,FREEREF(0));
  T6 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T7);
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_frame_39) {
  P n_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(n_, 0);
loop:
  T1 = FUNFAB(fun_38,1,n_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_40) {
  P f_,Uargs_;
  P numF3138;
  P UnameF3137;
  P argsF3136;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF3136 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_91);
  }
  UnameF3137 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF3138 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF3137,LITREF(lit_95));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T15 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(4),numF3138);
    if (T15 != YPfalse) {
      T19 = CALL1(1,VARREF(Yfun_names),f_);
      T18 = CALL2(1,VARREF(YgooScolsSseqYpos),T19,FREEREF(5));
      T17 = CALL2(1,VARREF(YgooSmacrosYelt),argsF3136,T18);
      T16 = CALL1(1,FREEREF(6),T17);
      T14 = T16;
    } else {
      T14 = YPfalse;
    }
  } else {
  }
  T20 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF3137,LITREF(lit_96));
  if (T20 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF3138;
    T21 = BOXVAL(FREEREF(2)) = YPtrue;
  } else {
  }
  T24 = BOXVAL(FREEREF(0));
  T23 = CALL2(1,VARREF(YgooSmathYA),T24,YPint((P)1));
  T22 = BOXVAL(FREEREF(0)) = T23;
  T7 = T22;
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_41) {
  P break_;
  P UnumF3141;
  P Utop_numF3140;
  P Useen_topF3139;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF3139 = YPfalse;
  Useen_topF3139 = BOXFAB(Useen_topF3139);
  Utop_numF3140 = YPint((P)0);
  Utop_numF3140 = BOXFAB(Utop_numF3140);
  UnumF3141 = YPint((P)0);
  UnumF3141 = BOXFAB(UnumF3141);
  T7 = FUNFAB(fun_40,7,UnumF3141,Utop_numF3140,Useen_topF3139,break_,FREEREF(0),FREEREF(1),FREEREF(2));
  T6 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T7);
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_42) {
  P ret_;
  P T0;
  P a1;
LINK_STACK();
  ARG(ret_, 0);
loop:
  T0 = FUNFAB(fun_41,3,FREEREF(0),FREEREF(1),ret_);
  with_exit(T0);
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_frame_var_43) {
  P n_,name_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(n_, 0);
  ARG(name_, 1);
loop:
  T1 = FUNFAB(fun_42,2,n_,name_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_44) {
  P f_,Uargs_;
  P numF3144;
  P UnameF3143;
  P argsF3142;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF3142 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_91);
  }
  UnameF3143 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF3144 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF3143,LITREF(lit_95));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_119),numF3144,f_);
    CALL1(1,VARREF(YevalStopYmsg_src_loc),f_);
    T14 = CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
  } else {
  }
  T15 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF3143,LITREF(lit_96));
  if (T15 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF3144;
    T16 = BOXVAL(FREEREF(2)) = YPtrue;
  } else {
  }
  T19 = BOXVAL(FREEREF(0));
  T18 = CALL2(1,VARREF(YgooSmathYA),T19,YPint((P)1));
  T17 = BOXVAL(FREEREF(0)) = T18;
  T7 = T17;
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_45) {
  P break_;
  P UnumF3147;
  P Utop_numF3146;
  P Useen_topF3145;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF3145 = YPfalse;
  Useen_topF3145 = BOXFAB(Useen_topF3145);
  Utop_numF3146 = YPint((P)0);
  Utop_numF3146 = BOXFAB(Utop_numF3146);
  UnumF3147 = YPint((P)0);
  UnumF3147 = BOXFAB(UnumF3147);
  T7 = FUNFAB(fun_44,4,UnumF3147,Utop_numF3146,Useen_topF3145,break_);
  T6 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T7);
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bt_46) {
  P T0,T1;
LINK_STACK();
loop:
  T1 = fun_45;
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStopYdo_restart) {
  P restarts_,n_;
  P tmpF3148;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(restarts_, 0);
  ARG(n_, 1);
loop:
  T0 = CALL1(1,VARREF(Ynot),restarts_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_122));
  } else {
  }
  T4 = CALL2(1,VARREF(YgooSmagYG),n_,YPint((P)0));
  tmpF3148 = T4;
  if (tmpF3148 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooStypesYlen),restarts_);
    T6 = CALL2(1,VARREF(YgooSmagYLE),n_,T7);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T8 = CALL2(1,VARREF(Yerror),LITREF(lit_123),n_);
  } else {
  }
  T11 = CALL2(1,VARREF(YgooSmathY_),n_,YPint((P)1));
  T10 = CALL2(1,VARREF(YgooSmacrosYelt),restarts_,T11);
  T9 = CALL3(1,VARREF(YgooSconditionsYinvoke_handler_interactively),T10,VARREF(YgooSioSportYin),VARREF(YgooSioSportYout));
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_48) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_49) {
  P c_,r_;
  P x_1490F3150;
  P x_1489F3149;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
loop:
  x_1489F3149 = c_;
  x_1490F3150 = VARREF(YisaQ);
  T2 = CALL2(1,x_1490F3150,x_1489F3149,VARREF(YgooSconditionsYLkeyboard_interruptG));
  if (T2 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_129));
    T1 = T3;
  } else {
    T5 = CALL1(1,VARREF(YgooSconditionsYdescribe_condition),c_);
    T4 = CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_130),T5);
    T1 = T4;
  }
  T0 = T1;
  T6 = CALL2(1,VARREF(YgooSmathYA),FREEREF(0),YPint((P)1));
  T7 = BOXVAL(FREEREF(3));
  CALL5(1,VARREF(YevalStopYPPtopPPtop_in),T6,FREEREF(1),FREEREF(2),YPtrue,T7);
  T8 = CALL1(1,FREEREF(4),YPfalse);
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_50) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_51) {
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

FUNCODEDEF(fun_x_1532_52) {
  P msg_,args_;
  P x_1536F3155;
  P x_1535F3154;
  P x_1534F3153;
  P x_1533F3152;
  P resF3151;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL2(1,VARREF(YevalStopYauto_eval),FREEREF(0),T3);
  resF3151 = T2;
  resF3151 = BOXFAB(resF3151);
  T5 = BOXVAL(FREEREF(1));
  T6 = BOXVAL(resF3151);
  CALL4(1,VARREF(YevalStopYprint_result_expression),T5,FREEREF(2),LITREF(lit_177),T6);
  x_1533F3152 = VARREF(YevalStopYDDD);
  x_1534F3153 = VARREF(YevalStopYDD);
  x_1535F3154 = VARREF(YevalStopYD);
  T11 = BOXVAL(resF3151);
  x_1536F3155 = T11;
  VARSET(YevalStopYDDD,x_1534F3153);
  VARSET(YevalStopYDD,x_1535F3154);
  VARSET(YevalStopYD,x_1536F3155);
  T12 = BOXVAL(resF3151) = x_1533F3152;
  T10 = T12;
  T9 = T10;
  T8 = T9;
  T7 = T8;
  T1 = T7;
  T0 = CALL1(1,FREEREF(3),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_53) {
  P return_;
  P x_1531F3164;
  P x_1531F3163;
  P x_1531F3162;
  P x_1531F3161;
  P x_1531F3160;
  P nameF3159;
  P nF3158;
  P x_1531F3157;
  P x_1532F3156;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1532_52,4);
  x_1532F3156 = T1;
  FUNINIT(x_1532F3156, 4,FREEREF(0),FREEREF(1),FREEREF(2),return_);
  x_1531F3157 = FREEREF(3);
  nF3158 = YPfalse;
  nF3158 = BOXFAB(nF3158);
  nameF3159 = YPfalse;
  nameF3159 = BOXFAB(nameF3159);
  T7 = CALL2(1,VARREF(YisaQ),x_1531F3157,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1531F3157,LITREF(lit_178),x_1532F3156);
    x_1531F3160 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1531F3160,x_1532F3156);
    BOXVAL(nF3158) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1531F3160);
    x_1531F3161 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1531F3161,x_1532F3156);
    BOXVAL(nameF3159) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1531F3161);
    x_1531F3162 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1531F3162,x_1532F3156);
    x_1531F3163 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1531F3163,x_1532F3156);
    T19 = CALL1(1,VARREF(Ytail),x_1531F3162);
    x_1531F3164 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1531F3164,x_1532F3156);
    T16 = T20;
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T21 = CALL2(1,x_1532F3156,LITREF(lit_68),x_1531F3157);
  }
  T23 = BOXVAL(FREEREF(1));
  T25 = BOXVAL(nF3158);
  T26 = BOXVAL(nameF3159);
  T24 = CALL2(1,VARREF(YevalStopYframe_var),T25,T26);
  T22 = CALL4(1,VARREF(YevalStopYprint_result_expression),T23,FREEREF(2),LITREF(lit_179),T24);
  T5 = T22;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1529_54) {
  P msg_,args_;
  P x_1530F3165;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1530F3165 = FREEREF(0);
  T3 = FUNFAB(fun_53,4,FREEREF(1),FREEREF(2),FREEREF(3),x_1530F3165);
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  P return_;
  P x_1528F3172;
  P x_1528F3171;
  P x_1528F3170;
  P x_1528F3169;
  P nF3168;
  P x_1528F3167;
  P x_1529F3166;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1529_54,5);
  x_1529F3166 = T1;
  FUNINIT(x_1529F3166, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1528F3167 = FREEREF(0);
  nF3168 = YPfalse;
  nF3168 = BOXFAB(nF3168);
  T5 = CALL2(1,VARREF(YisaQ),x_1528F3167,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1528F3167,LITREF(lit_180),x_1529F3166);
    x_1528F3169 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1528F3169,x_1529F3166);
    BOXVAL(nF3168) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1528F3169);
    x_1528F3170 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1528F3170,x_1529F3166);
    x_1528F3171 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1528F3171,x_1529F3166);
    T14 = CALL1(1,VARREF(Ytail),x_1528F3170);
    x_1528F3172 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1528F3172,x_1529F3166);
    T11 = T15;
    T8 = T11;
    T6 = T8;
  } else {
    T16 = CALL2(1,x_1529F3166,LITREF(lit_68),x_1528F3167);
  }
  T18 = BOXVAL(nF3168);
  T17 = CALL1(1,VARREF(YevalStopYframe),T18);
  T3 = T17;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1526_56) {
  P msg_,args_;
  P x_1527F3173;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1527F3173 = FREEREF(0);
  T3 = FUNFAB(fun_55,4,x_1527F3173,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_57) {
  P return_;
  P x_1525F3178;
  P x_1525F3177;
  P x_1525F3176;
  P x_1525F3175;
  P x_1526F3174;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1526_56,5);
  x_1526F3174 = T1;
  FUNINIT(x_1526F3174, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1525F3175 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1525F3175,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1525F3175,LITREF(lit_181),x_1526F3174);
    x_1525F3176 = T5;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1525F3176,x_1526F3174);
    x_1525F3177 = T7;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1525F3177,x_1526F3174);
    T9 = CALL1(1,VARREF(Ytail),x_1525F3176);
    x_1525F3178 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1525F3178,x_1526F3174);
    T6 = T10;
    T4 = T6;
  } else {
    T11 = CALL2(1,x_1526F3174,LITREF(lit_68),x_1525F3175);
  }
  T12 = CALL0(1,VARREF(YevalStopYbacktrace));
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1523_58) {
  P msg_,args_;
  P x_1524F3179;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1524F3179 = FREEREF(0);
  T3 = FUNFAB(fun_57,4,x_1524F3179,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_59) {
  P return_;
  P x_1522F3184;
  P x_1522F3183;
  P x_1522F3182;
  P x_1522F3181;
  P x_1523F3180;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1523_58,5);
  x_1523F3180 = T1;
  FUNINIT(x_1523F3180, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1522F3181 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1522F3181,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1522F3181,LITREF(lit_182),x_1523F3180);
    x_1522F3182 = T5;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1522F3182,x_1523F3180);
    x_1522F3183 = T7;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1522F3183,x_1523F3180);
    T9 = CALL1(1,VARREF(Ytail),x_1522F3182);
    x_1522F3184 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1522F3184,x_1523F3180);
    T6 = T10;
    T4 = T6;
  } else {
    T11 = CALL2(1,x_1523F3180,LITREF(lit_68),x_1522F3181);
  }
  T12 = CALL0(1,VARREF(YevalStopYbt));
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1520_60) {
  P msg_,args_;
  P x_1521F3185;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1521F3185 = FREEREF(0);
  T3 = FUNFAB(fun_59,4,x_1521F3185,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_61) {
  P return_;
  P x_1519F3190;
  P x_1519F3189;
  P x_1519F3188;
  P x_1519F3187;
  P x_1520F3186;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1520_60,5);
  x_1520F3186 = T1;
  FUNINIT(x_1520F3186, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1519F3187 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1519F3187,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1519F3187,LITREF(lit_183),x_1520F3186);
    x_1519F3188 = T5;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1519F3188,x_1520F3186);
    x_1519F3189 = T7;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1519F3189,x_1520F3186);
    T9 = CALL1(1,VARREF(Ytail),x_1519F3188);
    x_1519F3190 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1519F3190,x_1520F3186);
    T6 = T10;
    T4 = T6;
  } else {
    T11 = CALL2(1,x_1520F3186,LITREF(lit_68),x_1519F3187);
  }
  if (VARREF(YevalStopYDg2c_evalQ) != YPfalse) {
    T13 = DYNSET(YevalStopYrun,VARREF(YevalStopYauto_run));
    T12 = T13;
  } else {
    T12 = YPfalse;
  }
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1517_62) {
  P msg_,args_;
  P x_1518F3191;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1518F3191 = FREEREF(0);
  T3 = FUNFAB(fun_61,4,x_1518F3191,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_63) {
  P return_;
  P x_1516F3196;
  P x_1516F3195;
  P x_1516F3194;
  P x_1516F3193;
  P x_1517F3192;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1517_62,5);
  x_1517F3192 = T1;
  FUNINIT(x_1517F3192, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1516F3193 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1516F3193,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1516F3193,LITREF(lit_184),x_1517F3192);
    x_1516F3194 = T5;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1516F3194,x_1517F3192);
    x_1516F3195 = T7;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1516F3195,x_1517F3192);
    T9 = CALL1(1,VARREF(Ytail),x_1516F3194);
    x_1516F3196 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1516F3196,x_1517F3192);
    T6 = T10;
    T4 = T6;
  } else {
    T11 = CALL2(1,x_1517F3192,LITREF(lit_68),x_1516F3193);
  }
  T12 = DYNSET(YevalStopYrun,VARREF(YevalStopYPPbottomPPast_run));
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1514_64) {
  P msg_,args_;
  P x_1515F3197;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1515F3197 = FREEREF(0);
  T3 = FUNFAB(fun_63,4,x_1515F3197,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_65) {
  P return_;
  P x_1513F3202;
  P x_1513F3201;
  P x_1513F3200;
  P x_1513F3199;
  P x_1514F3198;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1514_64,5);
  x_1514F3198 = T1;
  FUNINIT(x_1514F3198, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1513F3199 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1513F3199,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1513F3199,LITREF(lit_185),x_1514F3198);
    x_1513F3200 = T5;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1513F3200,x_1514F3198);
    x_1513F3201 = T7;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1513F3201,x_1514F3198);
    T9 = CALL1(1,VARREF(Ytail),x_1513F3200);
    x_1513F3202 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1513F3202,x_1514F3198);
    T6 = T10;
    T4 = T6;
  } else {
    T11 = CALL2(1,x_1514F3198,LITREF(lit_68),x_1513F3199);
  }
  if (VARREF(YevalStopYDg2c_evalQ) != YPfalse) {
    T13 = DYNSET(YevalStopYrun,VARREF(YevalStopYPPbottomPPg2c_run));
    T12 = T13;
  } else {
    T12 = YPfalse;
  }
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1511_66) {
  P msg_,args_;
  P x_1512F3203;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1512F3203 = FREEREF(0);
  T3 = FUNFAB(fun_65,4,x_1512F3203,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_67) {
  P return_;
  P new_envF3211;
  P x_1510F3210;
  P x_1510F3209;
  P x_1510F3208;
  P x_1510F3207;
  P mF3206;
  P x_1510F3205;
  P x_1511F3204;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1511_66,5);
  x_1511F3204 = T1;
  FUNINIT(x_1511F3204, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1510F3205 = FREEREF(0);
  mF3206 = YPfalse;
  mF3206 = BOXFAB(mF3206);
  T5 = CALL2(1,VARREF(YisaQ),x_1510F3205,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1510F3205,LITREF(lit_186),x_1511F3204);
    x_1510F3207 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1510F3207,x_1511F3204);
    BOXVAL(mF3206) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1510F3207);
    x_1510F3208 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1510F3208,x_1511F3204);
    x_1510F3209 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1510F3209,x_1511F3204);
    T14 = CALL1(1,VARREF(Ytail),x_1510F3208);
    x_1510F3210 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1510F3210,x_1511F3204);
    T11 = T15;
    T8 = T11;
    T6 = T8;
  } else {
    T16 = CALL2(1,x_1511F3204,LITREF(lit_68),x_1510F3205);
  }
  T19 = BOXVAL(mF3206);
  T18 = CALL1(1,VARREF(YevalSastYruntime_environment),T19);
  new_envF3211 = T18;
  T20 = BOXVAL(FREEREF(2)) = new_envF3211;
  T17 = T20;
  T3 = T17;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1508_68) {
  P msg_,args_;
  P x_1509F3212;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1509F3212 = FREEREF(0);
  T3 = FUNFAB(fun_67,4,x_1509F3212,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  P return_;
  P x_1507F3219;
  P x_1507F3218;
  P x_1507F3217;
  P x_1507F3216;
  P nF3215;
  P x_1507F3214;
  P x_1508F3213;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1508_68,5);
  x_1508F3213 = T1;
  FUNINIT(x_1508F3213, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1507F3214 = FREEREF(0);
  nF3215 = YPfalse;
  nF3215 = BOXFAB(nF3215);
  T5 = CALL2(1,VARREF(YisaQ),x_1507F3214,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1507F3214,LITREF(lit_187),x_1508F3213);
    x_1507F3216 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1507F3216,x_1508F3213);
    BOXVAL(nF3215) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1507F3216);
    x_1507F3217 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1507F3217,x_1508F3213);
    x_1507F3218 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1507F3218,x_1508F3213);
    T14 = CALL1(1,VARREF(Ytail),x_1507F3217);
    x_1507F3219 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1507F3219,x_1508F3213);
    T11 = T15;
    T8 = T11;
    T6 = T8;
  } else {
    T16 = CALL2(1,x_1508F3213,LITREF(lit_68),x_1507F3214);
  }
  T18 = BOXVAL(FREEREF(4));
  T19 = BOXVAL(nF3215);
  T17 = CALL2(1,VARREF(YevalStopYdo_restart),T18,T19);
  T3 = T17;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1505_70) {
  P msg_,args_;
  P x_1506F3220;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1506F3220 = FREEREF(0);
  T3 = FUNFAB(fun_69,5,x_1506F3220,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_71) {
  P return_;
  P x_1504F3225;
  P x_1504F3224;
  P x_1504F3223;
  P x_1504F3222;
  P x_1505F3221;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1505_70,6);
  x_1505F3221 = T1;
  FUNINIT(x_1505F3221, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1504F3222 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1504F3222,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1504F3222,LITREF(lit_188),x_1505F3221);
    x_1504F3223 = T5;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1504F3223,x_1505F3221);
    x_1504F3224 = T7;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1504F3224,x_1505F3221);
    T9 = CALL1(1,VARREF(Ytail),x_1504F3223);
    x_1504F3225 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1504F3225,x_1505F3221);
    T6 = T10;
    T4 = T6;
  } else {
    T11 = CALL2(1,x_1505F3221,LITREF(lit_68),x_1504F3222);
  }
  T12 = CALL2(1,VARREF(YgooSconditionsYlist_handlers),VARREF(YgooSconditionsYLrestartG),VARREF(YgooSioSportYout));
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1502_72) {
  P msg_,args_;
  P x_1503F3226;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1503F3226 = FREEREF(0);
  T3 = FUNFAB(fun_71,5,x_1503F3226,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_73) {
  P return_;
  P x_1501F3231;
  P x_1501F3230;
  P x_1501F3229;
  P x_1501F3228;
  P x_1502F3227;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1502_72,6);
  x_1502F3227 = T1;
  FUNINIT(x_1502F3227, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1501F3228 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1501F3228,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1501F3228,LITREF(lit_189),x_1502F3227);
    x_1501F3229 = T5;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1501F3229,x_1502F3227);
    x_1501F3230 = T7;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1501F3230,x_1502F3227);
    T9 = CALL1(1,VARREF(Ytail),x_1501F3229);
    x_1501F3231 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1501F3231,x_1502F3227);
    T6 = T10;
    T4 = T6;
  } else {
    T11 = CALL2(1,x_1502F3227,LITREF(lit_68),x_1501F3228);
  }
  T12 = CALL2(1,VARREF(YgooSconditionsYlist_handlers),VARREF(YgooSconditionsYLconditionG),VARREF(YgooSioSportYout));
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1499_74) {
  P msg_,args_;
  P x_1500F3232;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1500F3232 = FREEREF(0);
  T3 = FUNFAB(fun_73,5,x_1500F3232,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_75) {
  P return_;
  P x_1498F3237;
  P x_1498F3236;
  P x_1498F3235;
  P x_1498F3234;
  P x_1499F3233;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1499_74,6);
  x_1499F3233 = T1;
  FUNINIT(x_1499F3233, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1498F3234 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1498F3234,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1498F3234,LITREF(lit_190),x_1499F3233);
    x_1498F3235 = T5;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1498F3235,x_1499F3233);
    x_1498F3236 = T7;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1498F3236,x_1499F3233);
    T9 = CALL1(1,VARREF(Ytail),x_1498F3235);
    x_1498F3237 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1498F3237,x_1499F3233);
    T6 = T10;
    T4 = T6;
  } else {
    T11 = CALL2(1,x_1499F3233,LITREF(lit_68),x_1498F3234);
  }
  T12 = CALL1(1,FREEREF(5),YPfalse);
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1496_76) {
  P msg_,args_;
  P x_1497F3238;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1497F3238 = FREEREF(0);
  T3 = FUNFAB(fun_75,6,x_1497F3238,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(6),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_77) {
  P return_;
  P x_1495F3243;
  P x_1495F3242;
  P x_1495F3241;
  P x_1495F3240;
  P x_1496F3239;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1496_76,7);
  x_1496F3239 = T1;
  FUNINIT(x_1496F3239, 7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),return_);
  x_1495F3240 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1495F3240,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1495F3240,LITREF(lit_191),x_1496F3239);
    x_1495F3241 = T5;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1495F3241,x_1496F3239);
    x_1495F3242 = T7;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1495F3242,x_1496F3239);
    T9 = CALL1(1,VARREF(Ytail),x_1495F3241);
    x_1495F3243 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1495F3243,x_1496F3239);
    T6 = T10;
    T4 = T6;
  } else {
    T11 = CALL2(1,x_1496F3239,LITREF(lit_68),x_1495F3240);
  }
  T12 = CALL1(1,FREEREF(6),YPfalse);
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1493_78) {
  P msg_,args_;
  P x_1494F3244;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1494F3244 = FREEREF(0);
  T3 = FUNFAB(fun_77,7,x_1494F3244,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(7),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_79) {
  P return_;
  P x_1492F3249;
  P x_1492F3248;
  P x_1492F3247;
  P x_1492F3246;
  P x_1493F3245;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1493_78,8);
  x_1493F3245 = T1;
  FUNINIT(x_1493F3245, 8,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6),return_);
  x_1492F3246 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1492F3246,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1492F3246,LITREF(lit_192),x_1493F3245);
    x_1492F3247 = T5;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1492F3247,x_1493F3245);
    x_1492F3248 = T7;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1492F3248,x_1493F3245);
    T9 = CALL1(1,VARREF(Ytail),x_1492F3247);
    x_1492F3249 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1492F3249,x_1493F3245);
    T6 = T10;
    T4 = T6;
  } else {
    T11 = CALL2(1,x_1493F3245,LITREF(lit_68),x_1492F3246);
  }
  T12 = CALL1(1,FREEREF(7),YPfalse);
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_80) {
  P x_1491F3251;
  P formF3250;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
loop:
  CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
  T0 = BOXVAL(FREEREF(0));
  if (T0 != YPfalse) {
    CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_133));
    T1 = CALL2(1,VARREF(YgooSconditionsYlist_handlers),VARREF(YgooSconditionsYLrestartG),VARREF(YgooSioSportYout));
    BOXVAL(FREEREF(1)) = T1;
    T2 = BOXVAL(FREEREF(0)) = YPfalse;
  } else {
  }
  T5 = BOXVAL(FREEREF(2));
  T4 = CALL3(1,VARREF(YevalStopYprompt_for_command_expression),T5,FREEREF(3),LITREF(lit_134));
  formF3250 = T4;
  T7 = CALL1(1,VARREF(YgooSmathYeof_objectQ),formF3250);
  if (T7 != YPfalse) {
    T8 = CALL1(1,FREEREF(4),YPfalse);
    T6 = T8;
  } else {
    x_1491F3251 = formF3250;
    T11 = FUNFAB(fun_79,8,x_1491F3251,formF3250,FREEREF(2),FREEREF(3),FREEREF(1),FREEREF(5),FREEREF(6),FREEREF(4));
    T10 = with_exit(T11);
    T9 = T10;
    T6 = T9;
  }
  T3 = T6;
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_81) {
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(Ylst),FREEREF(0));
  T1 = CALL5(1,VARREF(Ynew),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_131),VARREF(Yhandler_info_arguments),T2);
  T3 = fun_50;
  T4 = FUNFAB(fun_51,1,FREEREF(1));
  T5 = FUNFAB(fun_80,7,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(0),FREEREF(5),FREEREF(6),FREEREF(7));
  T0 = XCALLN(1,YPwith_monitor,5,VARREF(YgooSconditionsYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_82) {
  P continue_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(continue_, 0);
loop:
  T1 = fun_48;
  T2 = FUNFAB(fun_49,5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),continue_);
  T3 = FUNFAB(fun_81,8,FREEREF(0),continue_,FREEREF(4),FREEREF(5),FREEREF(3),FREEREF(2),FREEREF(1),FREEREF(6));
  T0 = XCALLN(1,YPwith_monitor,5,VARREF(YgooSconditionsYLconditionG),VARREF(YgooSconditionsYDdefault_handler_info),T1,T2,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_83) {
  P T0,T1;
LINK_STACK();
loop:
  T0 = FUNFAB(fun_82,7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6));
  with_exit(T0);
  goto loop;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_84) {
  P blow_;
  P loopF3252;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_83,8);
  loopF3252 = T1;
  FUNINIT(loopF3252, 8,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),blow_,loopF3252);
  T2 = CALL0(0,loopF3252);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_PPtopPPtop_in_85) {
  P level_,top_,quit_,show_restartsQ_,ct_env_;
  P restartsF3253;
  P T0,T1,T2,T3,T4,T5;
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
  restartsF3253 = YPfalse;
  restartsF3253 = BOXFAB(restartsF3253);
  T5 = FUNFAB(fun_84,6,level_,top_,quit_,ct_env_,show_restartsQ_,restartsF3253);
  T4 = with_exit(T5);
  T2 = T4;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_86) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_87) {
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

FUNCODEDEF(fun_88) {
  P top_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(top_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYruntime_environment),FREEREF(1));
  T0 = CALL5(1,VARREF(YevalStopYPPtopPPtop_in),YPint((P)0),top_,FREEREF(0),YPfalse,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_89) {
  P T0,T1;
LINK_STACK();
loop:
  T0 = FUNFAB(fun_88,2,FREEREF(0),FREEREF(1));
  with_exit(T0);
  goto loop;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_90) {
  P loopF3254;
  P T0,T1,T2;
LINK_STACK();
loop:
  T1 = FUNSHELL(1,fun_loop_89,3);
  loopF3254 = T1;
  FUNINIT(loopF3254, 3,FREEREF(0),FREEREF(1),loopF3254);
  T2 = CALL0(0,loopF3254);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_91) {
  P quit_;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(quit_, 0);
loop:
  T2 = CALL0(1,VARREF(Ylst));
  T1 = CALL5(1,VARREF(Ynew),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_196),VARREF(Yhandler_info_arguments),T2);
  T3 = fun_86;
  T4 = FUNFAB(fun_87,1,quit_);
  T5 = FUNFAB(fun_90,2,quit_,FREEREF(0));
  T0 = XCALLN(1,YPwith_monitor,5,VARREF(YgooSconditionsYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_top_92) {
  P modname_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = FUNFAB(fun_91,1,modname_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_93) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YevalStopYtop),LITREF(lit_201));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStopYsave_image) {
  P image_name_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(image_name_, 0);
loop:
  T1 = fun_93;
  T0 = CALL2(1,VARREF(Yunexec),image_name_,T1);
UNLINK_STACK();
  QRET(T0);
}

P YevalStopY___main_0___() {
  P tmpF3257;
  P tmpF3256;
  P modeF3255;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154,T155,T156,T157,T158,T159;
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173,T174,T175;
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188,T189,T190,T191;
  P T192,T193,T194,T195,T196,T197,T198,T199,T200,T201,T202,T203,T204,T205;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"esctst");
  lit_1 = Ynil;
  lit_2 = YPPlist(1,YPPsym((P)"exit"));
  lit_3 = YPPsym((P)"exit");
  lit_4 = YPsb((P)"CLEANUP\n");
  lit_5 = YPPsym((P)"cleanup");
  lit_6 = YPsb((P)"DO\n");
  lit_7 = YPPsym((P)"done");
  T3 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_0 = YPmet(FUNCODEREF(fun_0),YPfalse,T3,ENVNUL,PNUL,sloc(14));
  T2 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_1 = YPmet(FUNCODEREF(fun_1),YPfalse,T2,ENVNUL,PNUL,sloc(15));
  T1 = YPsig(LITREF(lit_2),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T1,ENVNUL,PNUL,sloc(13));
  T0 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalStopYesctst = YPmet(FUNCODEREF(YevalStopYesctst),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(12));
  T4 = YevalStopYesctst;
  VARSET(YevalStopYesctst,T4);
  lit_8 = YPPsym((P)"g2c-eval");
  lit_9 = YPPlist(2,YPPsym((P)"exp"),YPPsym((P)"ct-env"));
  T6 = YPsig(LITREF(lit_9),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T5 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_8),T6,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalStopYg2c_eval,T5);
  lit_10 = YPPsym((P)"parse-in");
  lit_11 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"ct-env"));
  T7 = YPsig(LITREF(lit_11),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_in_4 = YPmet(FUNCODEREF(fun_parse_in_4),LITREF(lit_10),T7,ENVNUL,PNUL,sloc(22));
  T10 = BOUNDP(YevalStopYparse_in);
  if (T10 != YPfalse) {
    T9 = VARREF(YevalStopYparse_in);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_parse_in_4;
  T8 = XCALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YevalStopYparse_in,T8);
  lit_12 = YPPsym((P)"parse");
  lit_13 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"modname"));
  T12 = YPsig(LITREF(lit_13),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_5 = YPmet(FUNCODEREF(fun_parse_5),LITREF(lit_12),T12,ENVNUL,PNUL,sloc(25));
  T15 = BOUNDP(YevalStopYparse);
  if (T15 != YPfalse) {
    T14 = VARREF(YevalStopYparse);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_parse_5;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YevalStopYparse,T13);
  lit_14 = YPPsym((P)"str-parse-in");
  lit_15 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"ct-env"));
  lit_16 = YPsb((P)"%=\n");
  T17 = YPsig(LITREF(lit_15),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_parse_in_6 = YPmet(FUNCODEREF(fun_str_parse_in_6),LITREF(lit_14),T17,ENVNUL,PNUL,sloc(28));
  T20 = BOUNDP(YevalStopYstr_parse_in);
  if (T20 != YPfalse) {
    T19 = VARREF(YevalStopYstr_parse_in);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_str_parse_in_6;
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YevalStopYstr_parse_in,T18);
  lit_17 = YPPsym((P)"str-parse");
  lit_18 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"modname"));
  T22 = YPsig(LITREF(lit_18),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_parse_7 = YPmet(FUNCODEREF(fun_str_parse_7),LITREF(lit_17),T22,ENVNUL,PNUL,sloc(31));
  T25 = BOUNDP(YevalStopYstr_parse);
  if (T25 != YPfalse) {
    T24 = VARREF(YevalStopYstr_parse);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_str_parse_7;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YevalStopYstr_parse,T23);
  lit_19 = YPPsym((P)"%%bottom%%ast-run");
  lit_20 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"ct-env"));
  T27 = YPsig(LITREF(lit_20),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYPPbottomPPast_run = YPmet(FUNCODEREF(YevalStopYPPbottomPPast_run),LITREF(lit_19),T27,ENVNUL,PNUL,sloc(34));
  T28 = YevalStopYPPbottomPPast_run;
  VARSET(YevalStopYPPbottomPPast_run,T28);
  lit_21 = YPPsym((P)"%%bottom%%g2c-run");
  lit_22 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"ct-env"));
  T29 = YPsig(LITREF(lit_22),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYPPbottomPPg2c_run = YPmet(FUNCODEREF(YevalStopYPPbottomPPg2c_run),LITREF(lit_21),T29,ENVNUL,PNUL,sloc(37));
  T30 = YevalStopYPPbottomPPg2c_run;
  VARSET(YevalStopYPPbottomPPg2c_run,T30);
  lit_23 = YPPsym((P)"auto-run");
  lit_24 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"ct-env"));
  T31 = YPsig(LITREF(lit_24),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYauto_run = YPmet(FUNCODEREF(YevalStopYauto_run),LITREF(lit_23),T31,ENVNUL,PNUL,sloc(40));
  T32 = YevalStopYauto_run;
  VARSET(YevalStopYauto_run,T32);
  lit_25 = YPPsym((P)"auto-eval");
  lit_26 = YPPlist(2,YPPsym((P)"form"),YPPsym((P)"ct-env"));
  T33 = YPsig(LITREF(lit_26),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYauto_eval = YPmet(FUNCODEREF(YevalStopYauto_eval),LITREF(lit_25),T33,ENVNUL,PNUL,sloc(45));
  T34 = YevalStopYauto_eval;
  VARSET(YevalStopYauto_eval,T34);
  lit_27 = YPsb((P)"GOO_EVAL_MODE");
  lit_28 = YPsb((P)"ast");
  lit_29 = YPsb((P)"g2c");
  T36 = XCALL1(1,VARREF(YgooSsystemYos_val),LITREF(lit_27));
  modeF3255 = T36;
  T39 = XCALL2(1,VARREF(YgooScolsStabYcase_insensitive_string_equal),modeF3255,LITREF(lit_28));
  T38 = XCALL1(1,VARREF(Ynot),T39);
  tmpF3256 = T38;
  if (tmpF3256 != YPfalse) {
    T42 = XCALL2(1,VARREF(YgooScolsStabYcase_insensitive_string_equal),modeF3255,LITREF(lit_29));
    tmpF3257 = T42;
    if (tmpF3257 != YPfalse) {
      T43 = tmpF3257;
    } else {
      T43 = YPtrue;
    }
    T41 = T43;
    T40 = T41;
  } else {
    T40 = YPfalse;
  }
  T37 = T40;
  T35 = T37;
  VARSET(YevalStopYDg2c_evalQ,T35);
  if (VARREF(YevalStopYDg2c_evalQ) != YPfalse) {
    T44 = VARREF(YevalStopYauto_run);
  } else {
    T44 = VARREF(YevalStopYPPbottomPPast_run);
  }
  DYNDEFSET(YevalStopYrun,T44);
  lit_30 = YPPsym((P)"eval-in");
  lit_31 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"ct-env"));
  T45 = YPsig(LITREF(lit_31),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_in_12 = YPmet(FUNCODEREF(fun_eval_in_12),LITREF(lit_30),T45,ENVNUL,PNUL,sloc(57));
  T48 = BOUNDP(YevalStopYeval_in);
  if (T48 != YPfalse) {
    T47 = VARREF(YevalStopYeval_in);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_eval_in_12;
  T46 = XCALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YevalStopYeval_in,T46);
  lit_32 = YPPsym((P)"eval");
  lit_33 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"modname"));
  T50 = YPsig(LITREF(lit_33),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_13 = YPmet(FUNCODEREF(fun_eval_13),LITREF(lit_32),T50,ENVNUL,PNUL,sloc(62));
  T53 = BOUNDP(YevalSsyntaxYeval);
  if (T53 != YPfalse) {
    T52 = VARREF(YevalSsyntaxYeval);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_eval_13;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YevalSsyntaxYeval,T51);
  lit_34 = YPPsym((P)"str-eval-in");
  lit_35 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"ct-env"));
  T55 = YPsig(LITREF(lit_35),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_in_14 = YPmet(FUNCODEREF(fun_str_eval_in_14),LITREF(lit_34),T55,ENVNUL,PNUL,sloc(65));
  T58 = BOUNDP(YevalStopYstr_eval_in);
  if (T58 != YPfalse) {
    T57 = VARREF(YevalStopYstr_eval_in);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_str_eval_in_14;
  T56 = XCALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YevalStopYstr_eval_in,T56);
  lit_36 = YPPsym((P)"str-eval");
  lit_37 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"modname"));
  T60 = YPsig(LITREF(lit_37),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_15 = YPmet(FUNCODEREF(fun_str_eval_15),LITREF(lit_36),T60,ENVNUL,PNUL,sloc(68));
  T63 = BOUNDP(YevalStopYstr_eval);
  if (T63 != YPfalse) {
    T62 = VARREF(YevalStopYstr_eval);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_str_eval_15;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YevalStopYstr_eval,T61);
  lit_38 = YPPsym((P)"compiled-file?");
  lit_39 = YPPlist(1,YPPsym((P)"name"));
  lit_40 = YPsb((P)".gooc");
  T65 = YPsig(LITREF(lit_39),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalStopYcompiled_fileQ = YPmet(FUNCODEREF(YevalStopYcompiled_fileQ),LITREF(lit_38),T65,ENVNUL,PNUL,sloc(71));
  T66 = YevalStopYcompiled_fileQ;
  VARSET(YevalStopYcompiled_fileQ,T66);
  lit_41 = YPPsym((P)"read-file");
  lit_42 = YPPlist(1,YPPsym((P)"filename"));
  lit_43 = YPPsym((P)"loop");
  lit_44 = YPPlist(1,YPPsym((P)"forms"));
  T70 = YPsig(LITREF(lit_44),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_17 = YPmet(FUNCODEREF(fun_loop_17),LITREF(lit_43),T70,ENVNUL,PNUL,sloc(76));
  T69 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T69,ENVNUL,PNUL,sloc(75));
  T68 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T68,ENVNUL,PNUL,sloc(75));
  T67 = YPsig(LITREF(lit_42),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_file_20 = YPmet(FUNCODEREF(fun_read_file_20),LITREF(lit_41),T67,ENVNUL,PNUL,sloc(74));
  T73 = BOUNDP(YevalStopYread_file);
  if (T73 != YPfalse) {
    T72 = VARREF(YevalStopYread_file);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_read_file_20;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YevalStopYread_file,T71);
  lit_45 = YPPsym((P)"load-in");
  lit_46 = YPPlist(2,YPPsym((P)"filename"),YPPsym((P)"ct-env"));
  T75 = YPsig(LITREF(lit_46),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_in_21 = YPmet(FUNCODEREF(fun_load_in_21),LITREF(lit_45),T75,ENVNUL,PNUL,sloc(82));
  T78 = BOUNDP(YevalSastYload_in);
  if (T78 != YPfalse) {
    T77 = VARREF(YevalSastYload_in);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_load_in_21;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YevalSastYload_in,T76);
  lit_47 = YPPsym((P)"load-file");
  lit_48 = YPPlist(2,YPPsym((P)"filename"),YPPsym((P)"modname"));
  T80 = YPsig(LITREF(lit_48),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_file_22 = YPmet(FUNCODEREF(fun_load_file_22),LITREF(lit_47),T80,ENVNUL,PNUL,sloc(92));
  T83 = BOUNDP(YevalStopYload_file);
  if (T83 != YPfalse) {
    T82 = VARREF(YevalStopYload_file);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_load_file_22;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YevalStopYload_file,T81);
  lit_49 = YPPsym((P)"load");
  lit_50 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"modname"));
  T85 = YPsig(LITREF(lit_50),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_23 = YPmet(FUNCODEREF(fun_load_23),LITREF(lit_49),T85,ENVNUL,PNUL,sloc(95));
  T88 = BOUNDP(YevalStopYload);
  if (T88 != YPfalse) {
    T87 = VARREF(YevalStopYload);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_load_23;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YevalStopYload,T86);
  lit_51 = YPPsym((P)"prompt-for-command-expression");
  lit_52 = YPPlist(3,YPPsym((P)"env"),YPPsym((P)"level"),YPPsym((P)"prompt"));
  lit_53 = YPsb((P)"%s %=%s");
  lit_54 = YPPsym((P)"unquote");
  lit_55 = YPsb((P)"(");
  lit_56 = YPsb((P)")");
  lit_57 = YPsb((P)"cmd_");
  T90 = YPsig(LITREF(lit_52),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_prompt_for_command_expression_24 = YPmet(FUNCODEREF(fun_prompt_for_command_expression_24),LITREF(lit_51),T90,ENVNUL,PNUL,sloc(102));
  T93 = BOUNDP(YevalStopYprompt_for_command_expression);
  if (T93 != YPfalse) {
    T92 = VARREF(YevalStopYprompt_for_command_expression);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_prompt_for_command_expression_24;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YevalStopYprompt_for_command_expression,T91);
  lit_58 = YPPsym((P)"print-result-expression");
  lit_59 = YPPlist(4,YPPsym((P)"env"),YPPsym((P)"level"),YPPsym((P)"label"),YPPsym((P)"result"));
  lit_60 = YPsb((P)"%s %=%s");
  T95 = YPsig(LITREF(lit_59),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_print_result_expression_25 = YPmet(FUNCODEREF(fun_print_result_expression_25),LITREF(lit_58),T95,ENVNUL,PNUL,sloc(112));
  T98 = BOUNDP(YevalStopYprint_result_expression);
  if (T98 != YPfalse) {
    T97 = VARREF(YevalStopYprint_result_expression);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_print_result_expression_25;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YevalStopYprint_result_expression,T96);
  lit_61 = YPPsym((P)"do-stack-frames");
  lit_62 = YPPlist(1,YPPsym((P)"fun"));
  T100 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_stack_frames_26 = YPmet(FUNCODEREF(fun_do_stack_frames_26),LITREF(lit_61),T100,ENVNUL,PNUL,sloc(116));
  T103 = BOUNDP(YevalStopYdo_stack_frames);
  if (T103 != YPfalse) {
    T102 = VARREF(YevalStopYdo_stack_frames);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_do_stack_frames_26;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YevalStopYdo_stack_frames,T101);
  lit_63 = YPPlist(1,YPPsym((P)"exp"));
  lit_64 = YPPlist(1,YPPsym((P)"return"));
  lit_65 = YPPsym((P)"x-1484");
  lit_66 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_67 = YPPsym((P)"for-frames");
  lit_68 = YPsb((P)"Match Pattern Failure");
  lit_69 = YPPsym((P)"let");
  lit_70 = Ynil;
  lit_71 = YPPsym((P)"fun");
  lit_72 = YPPsym((P)"_args");
  lit_73 = YPPsym((P)"def");
  lit_74 = YPPsym((P)"rev");
  lit_75 = YPPsym((P)"incf");
  T107 = YPsig(LITREF(lit_66),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1484_27 = YPmet(FUNCODEREF(fun_x_1484_27),LITREF(lit_65),T107,ENVNUL,PNUL,YPfalse);
  T106 = YPsig(LITREF(lit_64),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T106,ENVNUL,PNUL,YPfalse);
  T105 = YPsig(LITREF(lit_63),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T105,ENVNUL,PNUL,YPfalse);
  T108 = fun_29;
  YPmacro(YPPsym((P)"eval/top"),YPPsym((P)"for-frames"),T108);
  lit_76 = YPPlist(1,YPPsym((P)"exp"));
  lit_77 = YPPlist(1,YPPsym((P)"return"));
  lit_78 = YPPsym((P)"x-1488");
  lit_79 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_80 = YPPsym((P)"for-user-frames");
  lit_81 = YPPsym((P)"esc");
  lit_82 = YPPsym((P)"break");
  lit_83 = YPPsym((P)"_seen-top");
  lit_84 = YPPsym((P)"_top-num");
  lit_85 = YPPsym((P)"_num");
  lit_86 = YPPsym((P)"_name");
  lit_87 = YPPsym((P)"if");
  lit_88 = YPPsym((P)"fun-name");
  lit_89 = YPPsym((P)"as");
  lit_90 = YPPsym((P)"<str>");
  lit_91 = YPsb((P)"");
  lit_92 = YPPsym((P)"-");
  lit_93 = YPPsym((P)"when");
  lit_94 = YPPsym((P)"prefix?");
  lit_95 = YPsb((P)"%%bottom%%");
  lit_96 = YPsb((P)"%%top%%");
  lit_97 = YPPsym((P)"set");
  lit_98 = YPPsym((P)"num");
  T111 = YPsig(LITREF(lit_79),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1488_30 = YPmet(FUNCODEREF(fun_x_1488_30),LITREF(lit_78),T111,ENVNUL,PNUL,YPfalse);
  T110 = YPsig(LITREF(lit_77),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T110,ENVNUL,PNUL,YPfalse);
  T109 = YPsig(LITREF(lit_76),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T109,ENVNUL,PNUL,YPfalse);
  T112 = fun_32;
  YPmacro(YPPsym((P)"eval/top"),YPPsym((P)"for-user-frames"),T112);
  lit_99 = YPPsym((P)"msg-src-loc");
  lit_100 = YPPlist(1,YPPsym((P)"f"));
  lit_101 = YPsb((P)" %s:%d");
  T113 = YPsig(LITREF(lit_100),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_msg_src_loc_33 = YPmet(FUNCODEREF(fun_msg_src_loc_33),LITREF(lit_99),T113,ENVNUL,PNUL,sloc(139));
  T116 = BOUNDP(YevalStopYmsg_src_loc);
  if (T116 != YPfalse) {
    T115 = VARREF(YevalStopYmsg_src_loc);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_msg_src_loc_33;
  T114 = XCALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(YevalStopYmsg_src_loc,T114);
  lit_102 = YPPsym((P)"backtrace");
  lit_103 = YPPlist(1,YPPsym((P)"break"));
  lit_104 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"_args"));
  lit_105 = YPsb((P)"[%=] %= %=");
  T120 = YPsig(LITREF(lit_104),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T120,ENVNUL,PNUL,sloc(146));
  T119 = YPsig(LITREF(lit_103),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T119,ENVNUL,PNUL,sloc(146));
  T118 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_backtrace_36 = YPmet(FUNCODEREF(fun_backtrace_36),LITREF(lit_102),T118,ENVNUL,PNUL,sloc(145));
  T123 = BOUNDP(YevalStopYbacktrace);
  if (T123 != YPfalse) {
    T122 = VARREF(YevalStopYbacktrace);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_backtrace_36;
  T121 = XCALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YevalStopYbacktrace,T121);
  lit_106 = YPPsym((P)"frame");
  lit_107 = YPPlist(1,YPPsym((P)"n"));
  lit_108 = YPPlist(1,YPPsym((P)"break"));
  lit_109 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"_args"));
  lit_110 = YPsb((P)"[%=] %= %=");
  T127 = YPsig(LITREF(lit_109),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T127,ENVNUL,PNUL,sloc(150));
  T126 = YPsig(LITREF(lit_108),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T126,ENVNUL,PNUL,sloc(150));
  T125 = YPsig(LITREF(lit_107),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_frame_39 = YPmet(FUNCODEREF(fun_frame_39),LITREF(lit_106),T125,ENVNUL,PNUL,sloc(149));
  T130 = BOUNDP(YevalStopYframe);
  if (T130 != YPfalse) {
    T129 = VARREF(YevalStopYframe);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_frame_39;
  T128 = XCALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(YevalStopYframe,T128);
  lit_111 = YPPsym((P)"frame-var");
  lit_112 = YPPlist(2,YPPsym((P)"n"),YPPsym((P)"name"));
  lit_113 = YPPlist(1,YPPsym((P)"ret"));
  lit_114 = YPPlist(1,YPPsym((P)"break"));
  lit_115 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"_args"));
  T135 = YPsig(LITREF(lit_115),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T135,ENVNUL,PNUL,sloc(156));
  T134 = YPsig(LITREF(lit_114),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T134,ENVNUL,PNUL,sloc(156));
  T133 = YPsig(LITREF(lit_113),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T133,ENVNUL,PNUL,sloc(155));
  T132 = YPsig(LITREF(lit_112),YPPlist(2,VARREF(YLintG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_frame_var_43 = YPmet(FUNCODEREF(fun_frame_var_43),LITREF(lit_111),T132,ENVNUL,PNUL,sloc(154));
  T138 = BOUNDP(YevalStopYframe_var);
  if (T138 != YPfalse) {
    T137 = VARREF(YevalStopYframe_var);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_frame_var_43;
  T136 = XCALL2(1,VARREF(YPdefine_method),T137,T139);
  VARSET(YevalStopYframe_var,T136);
  lit_116 = YPPsym((P)"bt");
  lit_117 = YPPlist(1,YPPsym((P)"break"));
  lit_118 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"_args"));
  lit_119 = YPsb((P)"[%=] %=");
  T142 = YPsig(LITREF(lit_118),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T142,ENVNUL,PNUL,sloc(163));
  T141 = YPsig(LITREF(lit_117),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T141,ENVNUL,PNUL,sloc(163));
  T140 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_bt_46 = YPmet(FUNCODEREF(fun_bt_46),LITREF(lit_116),T140,ENVNUL,PNUL,sloc(162));
  T145 = BOUNDP(YevalStopYbt);
  if (T145 != YPfalse) {
    T144 = VARREF(YevalStopYbt);
  } else {
    T144 = YPfalse;
  }
  T146 = fun_bt_46;
  T143 = XCALL2(1,VARREF(YPdefine_method),T144,T146);
  VARSET(YevalStopYbt,T143);
  lit_120 = YPPsym((P)"do-restart");
  lit_121 = YPPlist(2,YPPsym((P)"restarts"),YPPsym((P)"n"));
  lit_122 = YPsb((P)"No restarts available.\n");
  lit_123 = YPsb((P)"No restart #%d.\n");
  T147 = YPsig(LITREF(lit_121),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYdo_restart = YPmet(FUNCODEREF(YevalStopYdo_restart),LITREF(lit_120),T147,ENVNUL,PNUL,sloc(166));
  T148 = YevalStopYdo_restart;
  VARSET(YevalStopYdo_restart,T148);
  VARSET(YevalStopYD,YPfalse);
  VARSET(YevalStopYDD,YPfalse);
  VARSET(YevalStopYDDD,YPfalse);
  lit_124 = YPPsym((P)"%%top%%top-in");
  lit_125 = YPPlist(5,YPPsym((P)"level"),YPPsym((P)"top"),YPPsym((P)"quit"),YPPsym((P)"show-restarts?"),YPPsym((P)"ct-env"));
  lit_126 = YPPlist(1,YPPsym((P)"blow"));
  lit_127 = YPPlist(1,YPPsym((P)"continue"));
  lit_128 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  lit_129 = YPsb((P)"BREAK");
  lit_130 = YPsb((P)"ERROR: %s");
  lit_131 = YPsb((P)"Return to interpreter level %d");
  lit_132 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  lit_133 = YPsb((P)"Type \",restart N\" to restart execution:\n");
  lit_134 = YPsb((P)"<= ");
  lit_135 = YPPlist(1,YPPsym((P)"return"));
  lit_136 = YPPsym((P)"x-1493");
  lit_137 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_138 = YPPlist(1,YPPsym((P)"return"));
  lit_139 = YPPsym((P)"x-1496");
  lit_140 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_141 = YPPlist(1,YPPsym((P)"return"));
  lit_142 = YPPsym((P)"x-1499");
  lit_143 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_144 = YPPlist(1,YPPsym((P)"return"));
  lit_145 = YPPsym((P)"x-1502");
  lit_146 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_147 = YPPlist(1,YPPsym((P)"return"));
  lit_148 = YPPsym((P)"x-1505");
  lit_149 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_150 = YPPlist(1,YPPsym((P)"return"));
  lit_151 = YPPsym((P)"x-1508");
  lit_152 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_153 = YPPlist(1,YPPsym((P)"return"));
  lit_154 = YPPsym((P)"x-1511");
  lit_155 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_156 = YPPlist(1,YPPsym((P)"return"));
  lit_157 = YPPsym((P)"x-1514");
  lit_158 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_159 = YPPlist(1,YPPsym((P)"return"));
  lit_160 = YPPsym((P)"x-1517");
  lit_161 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_162 = YPPlist(1,YPPsym((P)"return"));
  lit_163 = YPPsym((P)"x-1520");
  lit_164 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_165 = YPPlist(1,YPPsym((P)"return"));
  lit_166 = YPPsym((P)"x-1523");
  lit_167 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_168 = YPPlist(1,YPPsym((P)"return"));
  lit_169 = YPPsym((P)"x-1526");
  lit_170 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_171 = YPPlist(1,YPPsym((P)"return"));
  lit_172 = YPPsym((P)"x-1529");
  lit_173 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_174 = YPPlist(1,YPPsym((P)"return"));
  lit_175 = YPPsym((P)"x-1532");
  lit_176 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_177 = YPsb((P)"=> ");
  lit_178 = YPPsym((P)"cmd_frame-var");
  lit_179 = YPsb((P)"=> ");
  lit_180 = YPPsym((P)"cmd_frame");
  lit_181 = YPPsym((P)"cmd_backtrace");
  lit_182 = YPPsym((P)"cmd_bt");
  lit_183 = YPPsym((P)"cmd_auto-eval");
  lit_184 = YPPsym((P)"cmd_ast-eval");
  lit_185 = YPPsym((P)"cmd_g2c-eval");
  lit_186 = YPPsym((P)"cmd_in");
  lit_187 = YPPsym((P)"cmd_restart");
  lit_188 = YPPsym((P)"cmd_restarts");
  lit_189 = YPPsym((P)"cmd_handlers");
  lit_190 = YPPsym((P)"cmd_top");
  lit_191 = YPPsym((P)"cmd_up");
  lit_192 = YPPsym((P)"cmd_quit");
  T186 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T186,ENVNUL,PNUL,YPfalse);
  T185 = YPsig(LITREF(lit_128),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T185,ENVNUL,PNUL,sloc(185));
  T184 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T184,ENVNUL,PNUL,YPfalse);
  T183 = YPsig(LITREF(lit_132),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T183,ENVNUL,PNUL,sloc(196));
  T182 = YPsig(LITREF(lit_176),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1532_52 = YPmet(FUNCODEREF(fun_x_1532_52),LITREF(lit_175),T182,ENVNUL,PNUL,YPfalse);
  T181 = YPsig(LITREF(lit_174),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T181,ENVNUL,PNUL,YPfalse);
  T180 = YPsig(LITREF(lit_173),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1529_54 = YPmet(FUNCODEREF(fun_x_1529_54),LITREF(lit_172),T180,ENVNUL,PNUL,YPfalse);
  T179 = YPsig(LITREF(lit_171),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T179,ENVNUL,PNUL,YPfalse);
  T178 = YPsig(LITREF(lit_170),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1526_56 = YPmet(FUNCODEREF(fun_x_1526_56),LITREF(lit_169),T178,ENVNUL,PNUL,YPfalse);
  T177 = YPsig(LITREF(lit_168),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_57 = YPmet(FUNCODEREF(fun_57),YPfalse,T177,ENVNUL,PNUL,YPfalse);
  T176 = YPsig(LITREF(lit_167),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1523_58 = YPmet(FUNCODEREF(fun_x_1523_58),LITREF(lit_166),T176,ENVNUL,PNUL,YPfalse);
  T175 = YPsig(LITREF(lit_165),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T175,ENVNUL,PNUL,YPfalse);
  T174 = YPsig(LITREF(lit_164),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1520_60 = YPmet(FUNCODEREF(fun_x_1520_60),LITREF(lit_163),T174,ENVNUL,PNUL,YPfalse);
  T173 = YPsig(LITREF(lit_162),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(LITREF(lit_161),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1517_62 = YPmet(FUNCODEREF(fun_x_1517_62),LITREF(lit_160),T172,ENVNUL,PNUL,YPfalse);
  T171 = YPsig(LITREF(lit_159),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPmet(FUNCODEREF(fun_63),YPfalse,T171,ENVNUL,PNUL,YPfalse);
  T170 = YPsig(LITREF(lit_158),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1514_64 = YPmet(FUNCODEREF(fun_x_1514_64),LITREF(lit_157),T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(LITREF(lit_156),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(LITREF(lit_155),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1511_66 = YPmet(FUNCODEREF(fun_x_1511_66),LITREF(lit_154),T168,ENVNUL,PNUL,YPfalse);
  T167 = YPsig(LITREF(lit_153),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_67 = YPmet(FUNCODEREF(fun_67),YPfalse,T167,ENVNUL,PNUL,YPfalse);
  T166 = YPsig(LITREF(lit_152),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1508_68 = YPmet(FUNCODEREF(fun_x_1508_68),LITREF(lit_151),T166,ENVNUL,PNUL,YPfalse);
  T165 = YPsig(LITREF(lit_150),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(LITREF(lit_149),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1505_70 = YPmet(FUNCODEREF(fun_x_1505_70),LITREF(lit_148),T164,ENVNUL,PNUL,YPfalse);
  T163 = YPsig(LITREF(lit_147),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(LITREF(lit_146),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1502_72 = YPmet(FUNCODEREF(fun_x_1502_72),LITREF(lit_145),T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(LITREF(lit_144),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(LITREF(lit_143),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1499_74 = YPmet(FUNCODEREF(fun_x_1499_74),LITREF(lit_142),T160,ENVNUL,PNUL,YPfalse);
  T159 = YPsig(LITREF(lit_141),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(LITREF(lit_140),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1496_76 = YPmet(FUNCODEREF(fun_x_1496_76),LITREF(lit_139),T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(LITREF(lit_138),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_77 = YPmet(FUNCODEREF(fun_77),YPfalse,T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(LITREF(lit_137),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1493_78 = YPmet(FUNCODEREF(fun_x_1493_78),LITREF(lit_136),T156,ENVNUL,PNUL,YPfalse);
  T155 = YPsig(LITREF(lit_135),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T155,ENVNUL,PNUL,YPfalse);
  T154 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T154,ENVNUL,PNUL,sloc(197));
  T153 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T153,ENVNUL,PNUL,sloc(240));
  T152 = YPsig(LITREF(lit_127),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T152,ENVNUL,PNUL,sloc(183));
  T151 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_83 = YPmet(FUNCODEREF(fun_loop_83),LITREF(lit_43),T151,ENVNUL,PNUL,sloc(182));
  T150 = YPsig(LITREF(lit_126),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_84 = YPmet(FUNCODEREF(fun_84),YPfalse,T150,ENVNUL,PNUL,sloc(181));
  T149 = YPsig(LITREF(lit_125),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_PPtopPPtop_in_85 = YPmet(FUNCODEREF(fun_PPtopPPtop_in_85),LITREF(lit_124),T149,ENVNUL,PNUL,sloc(179));
  T189 = BOUNDP(YevalStopYPPtopPPtop_in);
  if (T189 != YPfalse) {
    T188 = VARREF(YevalStopYPPtopPPtop_in);
  } else {
    T188 = YPfalse;
  }
  T190 = fun_PPtopPPtop_in_85;
  T187 = XCALL2(1,VARREF(YPdefine_method),T188,T190);
  VARSET(YevalStopYPPtopPPtop_in,T187);
  lit_193 = YPPsym((P)"top");
  lit_194 = YPPlist(1,YPPsym((P)"modname"));
  lit_195 = YPPlist(1,YPPsym((P)"quit"));
  lit_196 = YPsb((P)"Exit the top-level interpreter");
  lit_197 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  lit_198 = YPPlist(1,YPPsym((P)"top"));
  T197 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_86 = YPmet(FUNCODEREF(fun_86),YPfalse,T197,ENVNUL,PNUL,YPfalse);
  T196 = YPsig(LITREF(lit_197),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T196,ENVNUL,PNUL,sloc(247));
  T195 = YPsig(LITREF(lit_198),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T195,ENVNUL,PNUL,sloc(249));
  T194 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_89 = YPmet(FUNCODEREF(fun_loop_89),LITREF(lit_43),T194,ENVNUL,PNUL,sloc(248));
  T193 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_90 = YPmet(FUNCODEREF(fun_90),YPfalse,T193,ENVNUL,PNUL,sloc(251));
  T192 = YPsig(LITREF(lit_195),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T192,ENVNUL,PNUL,sloc(244));
  T191 = YPsig(LITREF(lit_194),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_top_92 = YPmet(FUNCODEREF(fun_top_92),LITREF(lit_193),T191,ENVNUL,PNUL,sloc(243));
  T200 = BOUNDP(YevalStopYtop);
  if (T200 != YPfalse) {
    T199 = VARREF(YevalStopYtop);
  } else {
    T199 = YPfalse;
  }
  T201 = fun_top_92;
  T198 = XCALL2(1,VARREF(YPdefine_method),T199,T201);
  VARSET(YevalStopYtop,T198);
  lit_199 = YPPsym((P)"save-image");
  lit_200 = YPPlist(1,YPPsym((P)"image-name"));
  lit_201 = YPPsym((P)"goo/user");
  T203 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_93 = YPmet(FUNCODEREF(fun_93),YPfalse,T203,ENVNUL,PNUL,sloc(254));
  T202 = YPsig(LITREF(lit_200),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalStopYsave_image = YPmet(FUNCODEREF(YevalStopYsave_image),LITREF(lit_199),T202,ENVNUL,PNUL,sloc(253));
  T204 = YevalStopYsave_image;
  VARSET(YevalStopYsave_image,T204);
  T205 = YPfalse;
  return T205;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_evalSast_linearize;
extern MODULE_INFO module_info_evalSast_eval;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooSioSread;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_gooSsystem},
  {&module_info_gooSconditions},
  {&module_info_evalSsyntax},
  {&module_info_evalSast},
  {&module_info_evalSast_linearize},
  {&module_info_evalSast_eval},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"$max-int", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"sexpr-monitor-expand", &module_info_evalSsyntax, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"function-source-setter", &module_info_evalSast, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"obj-filename", &module_info_gooSsystem, NULL},
  {"binding-inferred-type-setter", &module_info_evalSast, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"binding-mangled-name-setter", &module_info_evalSast, NULL},
  {"<bind-exit>", &module_info_evalSast, NULL},
  {"*goo-build-root*", &module_info_gooSsystem, NULL},
  {"fab-g2c-module", &module_info_evalSast, NULL},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"binding-value-setter", &module_info_evalSast, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"closure-creation-free", &module_info_evalSast_linearize, NULL},
  {"do-static-global-bindings", &module_info_evalSast, NULL},
  {"reference-called-function?-setter", &module_info_evalSast, NULL},
  {"application-arguments", &module_info_evalSast, NULL},
  {"<arguments>", &module_info_evalSast, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"<regular-application>", &module_info_evalSast, NULL},
  {"signature-bindings-setter", &module_info_evalSast, NULL},
  {"function-temporaries", &module_info_evalSast, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"parent-directory", &module_info_gooSsystem, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"application-binding", &module_info_evalSast, NULL},
  {"sexpr-method-signature", &module_info_evalSsyntax, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"fix-let-bindings-setter", &module_info_evalSast, NULL},
  {"fix-let-bindings", &module_info_evalSast, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"$sexpr-method-tag", &module_info_evalSsyntax, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"reference-frame-number", &module_info_evalSast, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"find-goo-file-at", &module_info_gooSsystem, NULL},
  {"$sexpr-define-method-tag", &module_info_evalSsyntax, NULL},
  {"fix-let-body-setter", &module_info_evalSast, NULL},
  {"set-module-environments", &module_info_evalSast, NULL},
  {"<global-assignment>", &module_info_evalSast, NULL},
  {"<magic-reference>", &module_info_evalSast, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"$sexpr-define-class-tag", &module_info_evalSsyntax, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"assignment-form-setter", &module_info_evalSast, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"module-name-to-relpath", &module_info_evalSast, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"binding-global-box", &module_info_evalSast, NULL},
  {"objectify-with-subtransaction", &module_info_evalSast, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"sexpr-define-class-parents", &module_info_evalSsyntax, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"<free-reference>", &module_info_evalSast_linearize, NULL},
  {"app-args", &module_info_gooSruntime, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSruntime, NULL},
  {"<locals>", &module_info_evalSast, NULL},
  {"<passive-program>", &module_info_evalSast, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"application-tail?", &module_info_evalSast, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"function-body-setter", &module_info_evalSast, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"<local-binding>", &module_info_evalSast, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"closure-creation-index", &module_info_evalSast_linearize, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"function-debug-name-setter", &module_info_evalSast, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"<application>", &module_info_evalSast, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"sexpr-sequence->begin", &module_info_evalSsyntax, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"$sexpr-def-tag", &module_info_evalSsyntax, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"function-self-recursive?-setter", &module_info_evalSast, NULL},
  {"global-box-value", &module_info_evalSast, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"sexpr-function-signature", &module_info_evalSsyntax, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"constant-index", &module_info_evalSast, NULL},
  {"app-filename", &module_info_gooSruntime, NULL},
  {"add-build-path", &module_info_gooSsystem, NULL},
  {"components-to-pathname", &module_info_gooSsystem, NULL},
  {"alternative-consequent", &module_info_evalSast, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"binding-type", &module_info_evalSast, NULL},
  {"sexpr-fab-getter", &module_info_evalSsyntax, NULL},
  {"<ast-primitive>", &module_info_evalSast, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"<sequential>", &module_info_evalSast, NULL},
  {"sexpr-prop-init-var", &module_info_evalSsyntax, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"build-condition-for-handler-interactively", &module_info_gooSconditions, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"<closure-creation>", &module_info_evalSast_linearize, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"*exe-extension*", &module_info_gooSsystem, NULL},
  {"locals-bindings", &module_info_evalSast, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"binding-dotted?", &module_info_evalSast, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"$sexpr-macro-expand-tag", &module_info_evalSsyntax, NULL},
  {"monitor-main-thunk", &module_info_evalSast, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"$sexpr-monitor-tag", &module_info_evalSsyntax, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"c-filename", &module_info_gooSsystem, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"program-form", &module_info_evalSast_linearize, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"program-type-setter", &module_info_evalSast, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"invoke-handler-interactively", &module_info_gooSconditions, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"module-syntax-environment", &module_info_evalSast, NULL},
  {"function-signature", &module_info_evalSast, NULL},
  {"<module>", &module_info_evalSast, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"create-directory", &module_info_gooSsystem, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"sexpr-method-body", &module_info_evalSsyntax, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<bound?>", &module_info_evalSast, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"*goo-root*", &module_info_gooSsystem, NULL},
  {"sexpr-syntax-if-pattern", &module_info_evalSsyntax, NULL},
  {"locals-body", &module_info_evalSast, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"sexpr-make-application", &module_info_evalSsyntax, NULL},
  {"function-temporaries-setter", &module_info_evalSast, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"$sexpr-define-syntax-tag", &module_info_evalSsyntax, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"function-free-setter", &module_info_evalSast, NULL},
  {"process-id", &module_info_gooSsystem, NULL},
  {"free-environment", &module_info_evalSast, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"sequentialize", &module_info_evalSast, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"locals-functions", &module_info_evalSast, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"components-parent-directory", &module_info_gooSsystem, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"<unwind-protect>", &module_info_evalSast, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"def-programs", &module_info_evalSast, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"$sexpr-unwind-protect-tag", &module_info_evalSsyntax, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"*path-separator*", &module_info_gooSsystem, NULL},
  {"$sexpr-isa-tag", &module_info_evalSsyntax, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"form-program", &module_info_evalSast_linearize, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"function-data-refs", &module_info_evalSast, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"<dynamic-assignment>", &module_info_evalSast, NULL},
  {"form-quotations", &module_info_evalSast_linearize, NULL},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, NULL},
  {"signature-value", &module_info_evalSast, NULL},
  {"*goo-extension*", &module_info_gooSsystem, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"signature-arity-setter", &module_info_evalSast, NULL},
  {"*goo-personal-root*", &module_info_gooSsystem, NULL},
  {"binding-dynamic-extent?", &module_info_evalSast, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"sexpr-def-variable", &module_info_evalSsyntax, NULL},
  {"unwind-protect-protected-thunk", &module_info_evalSast, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"sexpr-block-body", &module_info_evalSsyntax, NULL},
  {"module-loader-module-type", &module_info_evalSast, NULL},
  {"load-module", &module_info_evalSast, NULL},
  {"fix-let-body", &module_info_evalSast, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"bound?-reference", &module_info_evalSast, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"sexpr-loc-bound-signatures", &module_info_evalSsyntax, NULL},
  {"loc-val-setter", &module_info_gooSruntime, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"sexpr-isa-parent", &module_info_evalSsyntax, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"<fix-let>", &module_info_evalSast, NULL},
  {"sexpr-assignment-variable", &module_info_evalSsyntax, NULL},
  {"<box-creation>", &module_info_evalSast_linearize, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"function-index-setter", &module_info_evalSast, NULL},
  {"$sexpr-syntax-if-tag", &module_info_evalSsyntax, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"sexpr-operands", &module_info_evalSsyntax, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"binding-mangled-name", &module_info_evalSast, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"as-lst", &module_info_evalSast, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"sexpr-define-class?", &module_info_evalSsyntax, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"binding-value", &module_info_evalSast, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"register-allocate!", &module_info_evalSast_linearize, NULL},
  {"reference-called-function?", &module_info_evalSast, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"analyze-ast", &module_info_evalSast_linearize, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"<ast-function>", &module_info_evalSast, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"<ast-primitive-definition>", &module_info_evalSast, NULL},
  {"<runtime-reference>", &module_info_evalSast, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"function-debug-name", &module_info_evalSast, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"binding-mutable?", &module_info_evalSast, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"<assignment>", &module_info_evalSast, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"program-bindings", &module_info_evalSast_linearize, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"*module-search-path*", &module_info_gooSsystem, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"<monitor>", &module_info_evalSast, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"<immediate-constant>", &module_info_evalSast, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSast, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"signature-nary?", &module_info_evalSast, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"sexpr-let->combination", &module_info_evalSsyntax, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"sexpr-variable-type", &module_info_evalSsyntax, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"assignment-form", &module_info_evalSast, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"gooc-filename", &module_info_gooSsystem, NULL},
  {"binding-global-box-setter", &module_info_evalSast, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"loc-val", &module_info_gooSruntime, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"monitor-type", &module_info_evalSast, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"constant-index-setter", &module_info_evalSast, NULL},
  {"do-named-static-global-bindings", &module_info_evalSast, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"file-type", &module_info_gooSsystem, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"<predefined-application>", &module_info_evalSast, NULL},
  {"<box-write>", &module_info_evalSast_linearize, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"<fab-list>", &module_info_evalSast, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"insert-box!", &module_info_evalSast_linearize, NULL},
  {"remove-modules-by-name!", &module_info_evalSast, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"function-body", &module_info_evalSast, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"<module-binding-reference>", &module_info_evalSast, NULL},
  {"monitor-test", &module_info_evalSast, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"application-known?-setter", &module_info_evalSast, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"module-uses-c-includes", &module_info_evalSast, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"module-binding", &module_info_evalSast, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"runtime-environment", &module_info_evalSast, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"eval", &module_info_evalSsyntax, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"<global-box>", &module_info_evalSast, NULL},
  {"default-handler-description", &module_info_gooSconditions, NULL},
  {"monitor-info", &module_info_evalSast, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"%binding-value", &module_info_evalSast_eval, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"components-basename", &module_info_gooSsystem, NULL},
  {"sexpr-make-method", &module_info_evalSsyntax, NULL},
  {"function-self-recursive?", &module_info_evalSast, NULL},
  {"box-form", &module_info_evalSast_linearize, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"*obj-extension*", &module_info_gooSsystem, NULL},
  {"describe-handler", &module_info_gooSconditions, NULL},
  {"<definition>", &module_info_evalSast, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"assignment-reference", &module_info_evalSast, NULL},
  {"sexpr-prop-init", &module_info_evalSsyntax, NULL},
  {"report-undefined-global-bindings", &module_info_evalSast, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"sexpr-prop-owner", &module_info_evalSsyntax, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"<runtime-assignment>", &module_info_evalSast, NULL},
  {"list-handlers", &module_info_gooSconditions, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"$sexpr-quote-tag", &module_info_evalSsyntax, NULL},
  {"find-environment-module", &module_info_evalSast, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"sexpr-expand-backquote", &module_info_evalSsyntax, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"binding-info", &module_info_evalSast, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"fix-let-arguments-setter", &module_info_evalSast, NULL},
  {"sexpr-if-else", &module_info_evalSsyntax, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"unconstrained-type?", &module_info_evalSast_linearize, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"sexpr-function-definition-value", &module_info_evalSsyntax, NULL},
  {"program-type", &module_info_evalSast, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"sexpr-def?", &module_info_evalSsyntax, NULL},
  {"signature-nary?-setter", &module_info_evalSast, NULL},
  {"reference-offset", &module_info_evalSast_linearize, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"sexpr-syntax-if-value", &module_info_evalSsyntax, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"compose", &module_info_gooSruntime, NULL},
  {"module-exports", &module_info_evalSast, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"environment-bindings", &module_info_evalSast, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"sexpr-def-value", &module_info_evalSsyntax, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"function-free", &module_info_evalSast, NULL},
  {"$sexpr-bind-exit-tag", &module_info_evalSsyntax, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"<ast-generic>", &module_info_evalSast, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"unchecked-runtime-environment", &module_info_evalSast, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"<pathname-error>", &module_info_gooSsystem, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"$sexpr-quasiquote-tag", &module_info_evalSsyntax, NULL},
  {"<local-assignment>", &module_info_evalSast, NULL},
  {"function-value", &module_info_evalSast, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"sexpr-definition-value", &module_info_evalSsyntax, NULL},
  {"$sexpr-if-tag", &module_info_evalSsyntax, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"probe-directory", &module_info_gooSsystem, NULL},
  {"<dynamic-definition>", &module_info_evalSast, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"$sexpr-define-tag", &module_info_evalSsyntax, NULL},
  {"<global-reference>", &module_info_evalSast, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"signature-arity", &module_info_evalSast, NULL},
  {"ast-contains-fun?", &module_info_evalSast_linearize, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"file-exists?", &module_info_gooSsystem, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"$sexpr-set-tag", &module_info_evalSsyntax, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"$sexpr-prop-tag", &module_info_evalSsyntax, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"<constant>", &module_info_evalSast, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"add-goo-personal-root-path", &module_info_gooSsystem, NULL},
  {"%binding-bound-of?", &module_info_evalSast_eval, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"closurize-main!", &module_info_evalSast_linearize, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"function-binding", &module_info_evalSast, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"load-in", &module_info_evalSast, NULL},
  {"sexpr-isa-init-values", &module_info_evalSsyntax, NULL},
  {"os-val-setter", &module_info_gooSsystem, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"binding-index-setter", &module_info_evalSast, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"<ast-macro-definition>", &module_info_evalSast, NULL},
  {"sexpr-fab-setter-name", &module_info_evalSsyntax, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"program-quotations", &module_info_evalSast_linearize, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"constant-value", &module_info_evalSast, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"*current-handlers*", &module_info_gooSconditions, NULL},
  {"sexpr-signature-value", &module_info_evalSsyntax, NULL},
  {"objectify-signature", &module_info_evalSast, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"identity", &module_info_gooSruntime, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_evalSsyntax, NULL},
  {"signature-specs-setter", &module_info_evalSast, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"<static-module-binding-reference>", &module_info_evalSast, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"binding-info-setter", &module_info_evalSast, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"ast-evaluate", &module_info_evalSast, NULL},
  {"<box-read>", &module_info_evalSast_linearize, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"ast-define-binding", &module_info_evalSast, NULL},
  {"<module-binding>", &module_info_evalSast, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"binding-kind", &module_info_evalSast, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"$sexpr-define-generic-tag", &module_info_evalSsyntax, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"box-reference", &module_info_evalSast_linearize, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"time", &module_info_gooSsystem, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%binding-value-of-setter", &module_info_evalSast_eval, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"binding-inferred-type", &module_info_evalSast, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"signature-names-setter", &module_info_evalSast, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"program-register-setter", &module_info_evalSast, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"<raw-constant>", &module_info_evalSast, NULL},
  {"do-module-loader-modules", &module_info_evalSast, NULL},
  {"<binding>", &module_info_evalSast, NULL},
  {"sexpr-isa-init-props", &module_info_evalSsyntax, NULL},
  {"application-known?", &module_info_evalSast, NULL},
  {"sexpr-function-body", &module_info_evalSsyntax, NULL},
  {"sexpr-loc-bound-names", &module_info_evalSsyntax, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"flatten-seqs", &module_info_evalSast_linearize, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"so-load", &module_info_gooSsystem, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"$goo-boot-module-name", &module_info_evalSast, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"function-registers-setter", &module_info_evalSast, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"find-goo-file-in-path", &module_info_gooSsystem, NULL},
  {"function-nary?", &module_info_evalSast, NULL},
  {"always", &module_info_gooSruntime, NULL},
  {"<dynamic-reference>", &module_info_evalSast, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"function-adjectives", &module_info_evalSast, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"<program>", &module_info_evalSast, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"<alternative>", &module_info_evalSast, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"goo-filename", &module_info_gooSsystem, NULL},
  {"env-object-name", &module_info_evalSast, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"sexpr-prop-init?", &module_info_evalSsyntax, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"*c-extension*", &module_info_gooSsystem, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"sexpr-prop-name", &module_info_evalSsyntax, NULL},
  {"init-environment-for-eval", &module_info_evalSast, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"sexpr-variable?", &module_info_evalSsyntax, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"<programs>", &module_info_evalSast, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"$sexpr-let-tag", &module_info_evalSsyntax, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"sexpr-unwind-protect-protected-form", &module_info_evalSsyntax, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"sexpr-if-then", &module_info_evalSsyntax, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"alternative-condition", &module_info_evalSast, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"sexpr-syntax-if-then", &module_info_evalSsyntax, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"<top-level-form>", &module_info_evalSast_linearize, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"sexpr-syntax-if-else", &module_info_evalSsyntax, NULL},
  {"probe-module", &module_info_evalSast, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"hierarchical-components", &module_info_gooSsystem, NULL},
  {"<module-loader>", &module_info_evalSast, NULL},
  {"program-register", &module_info_evalSast, NULL},
  {"sexpr-make-macro-function", &module_info_evalSsyntax, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"sexpr-loc-raw-body", &module_info_evalSsyntax, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"sexpr-unquote-splicing?", &module_info_evalSsyntax, NULL},
  {"form-definitions", &module_info_evalSast_linearize, NULL},
  {"add-goo-root-path", &module_info_gooSsystem, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"sexpr-isa-prop-inits", &module_info_evalSsyntax, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"reference-binding", &module_info_evalSast, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"<local-reference>", &module_info_evalSast, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"objectify-quotation", &module_info_evalSast, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"fix-let-types-setter", &module_info_evalSast, NULL},
  {"sexpr-make-begin", &module_info_evalSsyntax, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"sexpr-operator", &module_info_evalSsyntax, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"binding-locative-setter", &module_info_evalSast, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"$sexpr-locals-tag", &module_info_evalSsyntax, NULL},
  {"module-mangled-name-setter", &module_info_evalSast, NULL},
  {"alternative-alternant", &module_info_evalSast, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"file-mtime", &module_info_gooSsystem, NULL},
  {"global-box-value-setter", &module_info_evalSast, NULL},
  {"extract-things!", &module_info_evalSast_linearize, NULL},
  {"<compile-time>", &module_info_evalSast, NULL},
  {"binding-locative", &module_info_evalSast, NULL},
  {"reference-frame-offset", &module_info_evalSast, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"module-name", &module_info_evalSast, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"sexpr-block-name", &module_info_evalSsyntax, NULL},
  {"function-source", &module_info_evalSast, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"sexpr-make-anonymous-method", &module_info_evalSsyntax, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"<low-let>", &module_info_evalSast, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"os-val", &module_info_gooSsystem, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"sexpr-forward-primitive?", &module_info_evalSsyntax, NULL},
  {"sexpr-function-definition-adjectives", &module_info_evalSsyntax, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"gather-temporaries!", &module_info_evalSast_linearize, NULL},
  {"sexpr-text-of-quotation", &module_info_evalSsyntax, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"find-binding", &module_info_evalSast, NULL},
  {"sexpr-variable-name", &module_info_evalSsyntax, NULL},
  {"lift!", &module_info_evalSast_linearize, NULL},
  {"sexpr-iterate->loc", &module_info_evalSsyntax, NULL},
  {"module-uses-c-files", &module_info_evalSast, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"components-last", &module_info_gooSsystem, NULL},
  {"compile-time-program", &module_info_evalSast, NULL},
  {"binding-module-name", &module_info_evalSast, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {">", &module_info_gooSmag, NULL},
  {"init-ast", &module_info_evalSast, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"file-copy", &module_info_gooSsystem, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"*register-passive?*", &module_info_evalSast_linearize, NULL},
  {"$sexpr-iterate-tag", &module_info_evalSsyntax, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"program-line", &module_info_evalSast, NULL},
  {"<ast-signature>", &module_info_evalSast, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"sexpr-syntax-definition-value", &module_info_evalSsyntax, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"assignment-binding", &module_info_evalSast, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"label-components", &module_info_gooSsystem, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"function-frame-len-setter", &module_info_evalSast, NULL},
  {"sexpr-definition-variable", &module_info_evalSsyntax, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"%binding-value-of", &module_info_evalSast_eval, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"<ast-method>", &module_info_evalSast, NULL},
  {"add-src-path", &module_info_gooSsystem, NULL},
  {"curry", &module_info_gooSruntime, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"add-tmp-path", &module_info_gooSsystem, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"function-frame-len", &module_info_evalSast, NULL},
  {"signature-names", &module_info_evalSast, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"signature-bindings", &module_info_evalSast, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"exe-filename", &module_info_gooSsystem, NULL},
  {"<reference>", &module_info_evalSast, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"signature-specs", &module_info_evalSast, NULL},
  {"sexpr-fab-setter", &module_info_evalSsyntax, NULL},
  {"binding-module", &module_info_evalSast, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"module-target-environment", &module_info_evalSast, NULL},
  {"<computed-program>", &module_info_evalSast, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"module-uses-c-libraries", &module_info_evalSast, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"function-registers", &module_info_evalSast, NULL},
  {"build-condition-interactively", &module_info_gooSconditions, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"%binding-value-setter", &module_info_evalSast_eval, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"<directory-error>", &module_info_gooSsystem, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"<real-reference>", &module_info_evalSast, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"sexpr-unquote?", &module_info_evalSsyntax, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"choose-handler", &module_info_gooSconditions, NULL},
  {"binding-type-setter", &module_info_evalSast, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"pathname-to-components", &module_info_gooSsystem, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"sexpr-prop-type", &module_info_evalSsyntax, NULL},
  {"sexpr-assignment-value", &module_info_evalSsyntax, NULL},
  {"<macro-reference>", &module_info_evalSast, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"function-index", &module_info_evalSast, NULL},
  {"locals-bindings-setter", &module_info_evalSast, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"sexpr-if-test", &module_info_evalSsyntax, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"$sexpr-begin-tag", &module_info_evalSsyntax, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"os-name", &module_info_gooSsystem, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"function-data-refs-setter", &module_info_evalSast, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"function-signature-setter", &module_info_evalSast, NULL},
  {"install-initial-bindings", &module_info_evalSast, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"binding-name", &module_info_evalSast, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"locals-body-setter", &module_info_evalSast, NULL},
  {"$sexpr-define-function-tag", &module_info_evalSsyntax, NULL},
  {"function-bindings", &module_info_evalSast, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"%compile", &module_info_gooSsystem, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"program-definitions", &module_info_evalSast_linearize, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"environment-uses-modules", &module_info_evalSast, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"sexpr-loc-bound-bodies", &module_info_evalSsyntax, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"locals-functions-setter", &module_info_evalSast, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"fix-let-arguments", &module_info_evalSast, NULL},
  {"%binding-bound?", &module_info_evalSast_eval, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"<static-global-environment>", &module_info_evalSast, NULL},
  {"module-mangled-string-name", &module_info_evalSast, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"environment-module", &module_info_evalSast, NULL},
  {"<free-environment>", &module_info_evalSast, NULL},
  {"monitor-handler", &module_info_evalSast, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"ast-walk", &module_info_evalSast, NULL},
  {"ast-walk!", &module_info_evalSast, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"fix-let-types", &module_info_evalSast, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"<renamed-local-binding>", &module_info_evalSast_linearize, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"reference-self?", &module_info_evalSast_linearize, NULL},
  {"binding-native-to?", &module_info_evalSast, NULL},
  {"signature-value-setter", &module_info_evalSast, NULL},
  {"sexpr-function-definition-variable", &module_info_evalSsyntax, NULL},
  {"binding-index", &module_info_evalSast, NULL},
  {"module-mangled-name", &module_info_evalSast, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"sexpr-syntax-definition-variable", &module_info_evalSsyntax, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"sexpr-bind-pattern-variables", &module_info_evalSsyntax, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"%load", &module_info_gooSsystem, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"bind-exit-main-fun", &module_info_evalSast, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"bt", CVAR, &YevalStopYbt},
  {"str-parse-in", CVAR, &YevalStopYstr_parse_in},
  {"$$", CVAR, &YevalStopYDD},
  {"for-frames", PVAR, NULL},
  {"frame-var", CVAR, &YevalStopYframe_var},
  {"str-eval-in", CVAR, &YevalStopYstr_eval_in},
  {"load", CVAR, &YevalStopYload},
  {"prompt-for-command-expression", CVAR, &YevalStopYprompt_for_command_expression},
  {"%%bottom%%g2c-run", CVAR, &YevalStopYPPbottomPPg2c_run},
  {"parse-in", CVAR, &YevalStopYparse_in},
  {"load-file", CVAR, &YevalStopYload_file},
  {"do-stack-frames", CVAR, &YevalStopYdo_stack_frames},
  {"str-eval", CVAR, &YevalStopYstr_eval},
  {"for-user-frames", PVAR, NULL},
  {"esctst", CVAR, &YevalStopYesctst},
  {"backtrace", CVAR, &YevalStopYbacktrace},
  {"%%bottom%%ast-run", CVAR, &YevalStopYPPbottomPPast_run},
  {"eval-in", CVAR, &YevalStopYeval_in},
  {"g2c-eval", CVAR, &YevalStopYg2c_eval},
  {"$$$", CVAR, &YevalStopYDDD},
  {"run", DVAR, &YevalStopYrun},
  {"$", CVAR, &YevalStopYD},
  {"msg-src-loc", CVAR, &YevalStopYmsg_src_loc},
  {"%%top%%top-in", CVAR, &YevalStopYPPtopPPtop_in},
  {"top", CVAR, &YevalStopYtop},
  {"parse", CVAR, &YevalStopYparse},
  {"auto-eval", CVAR, &YevalStopYauto_eval},
  {"str-parse", CVAR, &YevalStopYstr_parse},
  {"compiled-file?", CVAR, &YevalStopYcompiled_fileQ},
  {"frame", CVAR, &YevalStopYframe},
  {"$g2c-eval?", CVAR, &YevalStopYDg2c_evalQ},
  {"save-image", CVAR, &YevalStopYsave_image},
  {"print-result-expression", CVAR, &YevalStopYprint_result_expression},
  {"---main-0---", PVAR, NULL},
  {"auto-run", CVAR, &YevalStopYauto_run},
  {"read-file", CVAR, &YevalStopYread_file},
  {"do-restart", CVAR, &YevalStopYdo_restart},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"$$", NULL},
  {"parse-in", NULL},
  {"bt", NULL},
  {"load-file", NULL},
  {"top", NULL},
  {"do-stack-frames", NULL},
  {"eval", NULL},
  {"esctst", NULL},
  {"backtrace", NULL},
  {"g2c-eval", NULL},
  {"auto-eval", NULL},
  {"frame", NULL},
  {"save-image", NULL},
  {"$", NULL},
  {"frame-var", NULL},
  {"load", NULL},
  {"$$$", NULL},
  {"read-file", NULL},
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

extern void load_module_goo (void);
extern void load_module_gooSboot (void);
extern void load_module_gooSsystem (void);
extern void load_module_gooSconditions (void);
extern void load_module_evalSsyntax (void);
extern void load_module_evalSast (void);
extern void load_module_evalSast_linearize (void);
extern void load_module_evalSast_eval (void);

/* EXPRESSION: */

extern void load_module_evalStop (void);

void load_module_evalStop (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSboot();
  load_module_gooSsystem();
  load_module_gooSconditions();
  load_module_evalSsyntax();
  load_module_evalSast();
  load_module_evalSast_linearize();
  load_module_evalSast_eval();

  (P)YevalStopY___main_0___();

}

/* END OF GENERATED CODE. */
