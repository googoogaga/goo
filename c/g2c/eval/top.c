/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/top");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/top */

EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(Yclone,"goo/boot","clone");
EXT(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
DEF(YevalStopYstr_parse_in,"eval/top","str-parse-in");
EXT(Yunexec,"goo/boot","unexec");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
EXT(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
EXT(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
EXT(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
EXT(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
EXT(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooSmathY_,"goo/math","-");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YevalSastYfunction_ref_count,"eval/ast","function-ref-count");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YevalSast_linearizeYprogram_bindings,"eval/ast-linearize","program-bindings");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(Yinternal_error,"goo/boot","internal-error");
DEF(YevalStopYauto_run,"eval/top","auto-run");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
DEF(YevalStopYstr_eval_in,"eval/top","str-eval-in");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YevalSastYLfunctionsG,"eval/ast","<functions>");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YevalSast_linearizeYanalyze_calls,"eval/ast-linearize","analyze-calls");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
DEF(YevalStopYbt,"eval/top","bt");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
DEF(YevalStopYload_file,"eval/top","load-file");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
EXT(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YLcolG,"goo/boot","<col>");
EXT(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
EXT(YevalSast_linearizeYunconstrained_typeQ,"eval/ast-linearize","unconstrained-type?");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
EXT(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
EXT(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YevalSastYmodule_uses_c_includes,"eval/ast","module-uses-c-includes");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
DEF(YevalStopYDDD,"eval/top","$$$");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
DEF(YevalStopYPPtopPPtop_in,"eval/top","%%top%%top-in");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
EXT(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
DEF(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
EXT(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YLintG,"goo/boot","<int>");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
DEF(YevalStopYparse,"eval/top","parse");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
EXT(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
EXT(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(Yhead,"goo/boot","head");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YevalSastYloop_body,"eval/ast","loop-body");
EXT(YgooSconditionsYdescribe_handler,"goo/conditions","describe-handler");
EXT(YevalSastYloop_continue,"eval/ast","loop-continue");
EXT(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
DEF(YevalStopYstr_parse,"eval/top","str-parse");
EXT(YLproductG,"goo/boot","<product>");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YevalSastYloop_bindings_setter,"eval/ast","loop-bindings-setter");
EXT(YevalSastYloop_bindings,"eval/ast","loop-bindings");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YevalSast_linearizeYast_contains_funQ,"eval/ast-linearize","ast-contains-fun?");
DEF(YevalStopYesctst,"eval/top","esctst");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
DEF(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
EXT(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YevalSastYfunction_loop,"eval/ast","function-loop");
DEF(YevalStopYPPbottomPPg2c_run,"eval/top","%%bottom%%g2c-run");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YevalSsyntaxYsexpr_function_definition_adjectives,"eval/syntax","sexpr-function-definition-adjectives");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
EXT(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yas_error,"goo/boot","as-error");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
DYNDEF(YevalStopYrun,"eval/top","run");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
DEF(YevalStopYframe,"eval/top","frame");
EXT(YgooSmathYT,"goo/math","*");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YtT,"goo/boot","t*");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
DEF(YevalStopYdo_restart,"eval/top","do-restart");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
EXT(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
EXT(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
EXT(YevalSastYloop_continue_setter,"eval/ast","loop-continue-setter");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yerror,"goo/boot","error");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooSmagYmax,"goo/mag","max");
DEF(YevalStopYDg2c_evalQ,"eval/top","$g2c-eval?");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YevalSastYloop_body_setter,"eval/ast","loop-body-setter");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
DEF(YevalStopYprompt_for_command_expression,"eval/top","prompt-for-command-expression");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
DEF(YevalStopYeval_in,"eval/top","eval-in");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YOlst,"goo/boot","@lst");
EXT(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
EXT(YevalSastYboundQ_default,"eval/ast","bound?-default");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooStypesYas,"goo/types","as");
DEF(YevalStopYread_file,"eval/top","read-file");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmathYN,"goo/math","~");
EXT(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
DEF(YevalStopYtop,"eval/top","top");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
EXT(YPdefine_method,"goo/boot","%define-method");
DEF(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YevalSastYLloopG,"eval/ast","<loop>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YPPmacro,"goo/boot","%%macro");
DYNEXT(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmacrosYEE,"goo/macros","==");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");
EXT(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Ylst,"goo/boot","lst");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
DEF(YevalStopYDD,"eval/top","$$");
EXT(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YevalSastYfunction_loop_setter,"eval/ast","function-loop-setter");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
DEF(YevalStopYstr_eval,"eval/top","str-eval");
DEF(YevalStopYmsg_src_loc,"eval/top","msg-src-loc");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
DEF(YevalStopYD,"eval/top","$");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YevalSastYload_in,"eval/ast","load-in");
DEF(YevalStopYload,"eval/top","load");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
DEF(YevalStopYsave_image,"eval/top","save-image");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
DEF(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YevalSastYfunction_ref_count_setter,"eval/ast","function-ref-count-setter");
EXT(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSruntimeYalways,"goo/runtime","always");
DEF(YevalStopYframe_var,"eval/top","frame-var");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YevalSastYmodule_uses_c_libraries,"eval/ast","module-uses-c-libraries");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YevalSastYapplication_loop,"eval/ast","application-loop");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YevalSastYbind_exit_lightQ,"eval/ast","bind-exit-light?");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLstrG,"goo/boot","<str>");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSconditionsYread,"goo/conditions","read");
DEF(YevalStopYcompiled_fileQ,"eval/top","compiled-file?");
EXT(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
DEF(YevalStopYprint_result_expression,"eval/top","print-result-expression");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
DEF(YevalStopYPPbottomPPast_run,"eval/top","%%bottom%%ast-run");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
EXT(YevalSastYLloop_applicationG,"eval/ast","<loop-application>");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYceilS,"goo/math","ceil/");
DEF(YevalStopYparse_in,"eval/top","parse-in");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
EXT(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
EXT(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooSmathYB,"goo/math","&");
EXT(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
EXT(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_96);
DEFLIT(lit_159);
DEFLIT(lit_42);
DEFLIT(lit_99);
DEFLIT(lit_187);
DEFLIT(lit_52);
DEFLIT(lit_88);
DEFLIT(lit_16);
DEFLIT(lit_155);
DEFLIT(lit_146);
DEFLIT(lit_178);
DEFLIT(lit_7);
DEFLIT(lit_116);
DEFLIT(lit_125);
DEFLIT(lit_137);
DEFLIT(lit_158);
DEFLIT(lit_157);
DEFLIT(lit_151);
DEFLIT(lit_104);
DEFLIT(lit_198);
DEFLIT(lit_24);
DEFLIT(lit_32);
DEFLIT(lit_29);
DEFLIT(lit_120);
DEFLIT(lit_161);
DEFLIT(lit_153);
DEFLIT(lit_163);
DEFLIT(lit_107);
DEFLIT(lit_148);
DEFLIT(lit_41);
DEFLIT(lit_64);
DEFLIT(lit_164);
DEFLIT(lit_91);
DEFLIT(lit_25);
DEFLIT(lit_113);
DEFLIT(lit_94);
DEFLIT(lit_49);
DEFLIT(lit_165);
DEFLIT(lit_150);
DEFLIT(lit_180);
DEFLIT(lit_72);
DEFLIT(lit_172);
DEFLIT(lit_145);
DEFLIT(lit_101);
DEFLIT(lit_51);
DEFLIT(lit_60);
DEFLIT(lit_15);
DEFLIT(lit_13);
DEFLIT(lit_177);
DEFLIT(lit_174);
DEFLIT(lit_147);
DEFLIT(lit_28);
DEFLIT(lit_117);
DEFLIT(lit_86);
DEFLIT(lit_123);
DEFLIT(lit_186);
DEFLIT(lit_8);
DEFLIT(lit_100);
DEFLIT(lit_81);
DEFLIT(lit_160);
DEFLIT(lit_93);
DEFLIT(lit_105);
DEFLIT(lit_176);
DEFLIT(lit_89);
DEFLIT(lit_109);
DEFLIT(lit_152);
DEFLIT(lit_56);
DEFLIT(lit_26);
DEFLIT(lit_2);
DEFLIT(lit_68);
DEFLIT(lit_71);
DEFLIT(lit_119);
DEFLIT(lit_59);
DEFLIT(lit_170);
DEFLIT(lit_183);
DEFLIT(lit_188);
DEFLIT(lit_74);
DEFLIT(lit_126);
DEFLIT(lit_87);
DEFLIT(lit_141);
DEFLIT(lit_182);
DEFLIT(lit_191);
DEFLIT(lit_11);
DEFLIT(lit_84);
DEFLIT(lit_35);
DEFLIT(lit_115);
DEFLIT(lit_142);
DEFLIT(lit_45);
DEFLIT(lit_121);
DEFLIT(lit_82);
DEFLIT(lit_144);
DEFLIT(lit_76);
DEFLIT(lit_57);
DEFLIT(lit_48);
DEFLIT(lit_83);
DEFLIT(lit_189);
DEFLIT(lit_185);
DEFLIT(lit_112);
DEFLIT(lit_38);
DEFLIT(lit_166);
DEFLIT(lit_128);
DEFLIT(lit_197);
DEFLIT(lit_140);
DEFLIT(lit_118);
DEFLIT(lit_23);
DEFLIT(lit_143);
DEFLIT(lit_131);
DEFLIT(lit_0);
DEFLIT(lit_173);
DEFLIT(lit_33);
DEFLIT(lit_108);
DEFLIT(lit_167);
DEFLIT(lit_80);
DEFLIT(lit_134);
DEFLIT(lit_44);
DEFLIT(lit_4);
DEFLIT(lit_111);
DEFLIT(lit_67);
DEFLIT(lit_37);
DEFLIT(lit_34);
DEFLIT(lit_70);
DEFLIT(lit_194);
DEFLIT(lit_19);
DEFLIT(lit_95);
DEFLIT(lit_192);
DEFLIT(lit_40);
DEFLIT(lit_27);
DEFLIT(lit_90);
DEFLIT(lit_21);
DEFLIT(lit_17);
DEFLIT(lit_106);
DEFLIT(lit_130);
DEFLIT(lit_39);
DEFLIT(lit_181);
DEFLIT(lit_132);
DEFLIT(lit_127);
DEFLIT(lit_30);
DEFLIT(lit_73);
DEFLIT(lit_62);
DEFLIT(lit_133);
DEFLIT(lit_149);
DEFLIT(lit_47);
DEFLIT(lit_31);
DEFLIT(lit_139);
DEFLIT(lit_103);
DEFLIT(lit_169);
DEFLIT(lit_85);
DEFLIT(lit_171);
DEFLIT(lit_53);
DEFLIT(lit_135);
DEFLIT(lit_136);
DEFLIT(lit_9);
DEFLIT(lit_193);
DEFLIT(lit_5);
DEFLIT(lit_199);
DEFLIT(lit_138);
DEFLIT(lit_43);
DEFLIT(lit_55);
DEFLIT(lit_184);
DEFLIT(lit_12);
DEFLIT(lit_14);
DEFLIT(lit_69);
DEFLIT(lit_78);
DEFLIT(lit_50);
DEFLIT(lit_61);
DEFLIT(lit_179);
DEFLIT(lit_114);
DEFLIT(lit_46);
DEFLIT(lit_75);
DEFLIT(lit_110);
DEFLIT(lit_54);
DEFLIT(lit_162);
DEFLIT(lit_58);
DEFLIT(lit_20);
DEFLIT(lit_102);
DEFLIT(lit_65);
DEFLIT(lit_77);
DEFLIT(lit_6);
DEFLIT(lit_195);
DEFLIT(lit_122);
DEFLIT(lit_92);
DEFLIT(lit_1);
DEFLIT(lit_3);
DEFLIT(lit_66);
DEFLIT(lit_196);
DEFLIT(lit_175);
DEFLIT(lit_36);
DEFLIT(lit_63);
DEFLIT(lit_168);
DEFLIT(lit_154);
DEFLIT(lit_10);
DEFLIT(lit_124);
DEFLIT(lit_79);
DEFLIT(lit_97);
DEFLIT(lit_156);
DEFLIT(lit_129);
DEFLIT(lit_22);
DEFLIT(lit_18);
DEFLIT(lit_190);
DEFLIT(lit_98);

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
LOCFOR(fun_17);
LOCFOR(fun_18);
LOCFOR(fun_read_file_19);
LOCFOR(fun_load_in_20);
LOCFOR(fun_load_file_21);
LOCFOR(fun_load_22);
LOCFOR(fun_prompt_for_command_expression_23);
LOCFOR(fun_print_result_expression_24);
LOCFOR(fun_do_stack_frames_25);
LOCFOR(fun_x_1500_26);
LOCFOR(fun_27);
LOCFOR(fun_28);
LOCFOR(fun_x_1504_29);
LOCFOR(fun_30);
LOCFOR(fun_31);
LOCFOR(fun_msg_src_loc_32);
LOCFOR(fun_33);
LOCFOR(fun_34);
LOCFOR(fun_backtrace_35);
LOCFOR(fun_36);
LOCFOR(fun_37);
LOCFOR(fun_frame_38);
LOCFOR(fun_39);
LOCFOR(fun_40);
LOCFOR(fun_41);
LOCFOR(fun_frame_var_42);
LOCFOR(fun_43);
LOCFOR(fun_44);
LOCFOR(fun_bt_45);
FUNFOR(YevalStopYdo_restart);
LOCFOR(fun_47);
LOCFOR(fun_48);
LOCFOR(fun_49);
LOCFOR(fun_50);
LOCFOR(fun_x_1548_51);
LOCFOR(fun_52);
LOCFOR(fun_x_1545_53);
LOCFOR(fun_54);
LOCFOR(fun_x_1542_55);
LOCFOR(fun_56);
LOCFOR(fun_x_1539_57);
LOCFOR(fun_58);
LOCFOR(fun_x_1536_59);
LOCFOR(fun_60);
LOCFOR(fun_x_1533_61);
LOCFOR(fun_62);
LOCFOR(fun_x_1530_63);
LOCFOR(fun_64);
LOCFOR(fun_x_1527_65);
LOCFOR(fun_66);
LOCFOR(fun_x_1524_67);
LOCFOR(fun_68);
LOCFOR(fun_x_1521_69);
LOCFOR(fun_70);
LOCFOR(fun_x_1518_71);
LOCFOR(fun_72);
LOCFOR(fun_x_1515_73);
LOCFOR(fun_74);
LOCFOR(fun_x_1512_75);
LOCFOR(fun_76);
LOCFOR(fun_x_1509_77);
LOCFOR(fun_78);
LOCFOR(fun_79);
LOCFOR(fun_80);
LOCFOR(fun_81);
LOCFOR(fun_82);
LOCFOR(fun_PPtopPPtop_in_83);
LOCFOR(fun_84);
LOCFOR(fun_85);
LOCFOR(fun_86);
LOCFOR(fun_87);
LOCFOR(fun_88);
LOCFOR(fun_top_89);
LOCFOR(fun_90);
FUNFOR(YevalStopYsave_image);
extern P YevalStopY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_0) {
  P T0;
LINK_STACK();
  T0 = CALL1(1,FREEREF(0),LITREF(lit_3));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_1) {
LINK_STACK();
  CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_4));
UNLINK_STACK();
  QRET(LITREF(lit_5));
}

FUNCODEDEF(fun_2) {
  P exit_;
  P T0,T1;
LINK_STACK();
  ARG(exit_, 0);
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
  T1 = fun_2;
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_parse_in_4) {
  P s_,ct_env_;
  P T0,T1;
LINK_STACK();
  ARG(s_, 0);
  ARG(ct_env_, 1);
  T1 = CALL1(1,VARREF(YgooSioSreadYread_from_string),s_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),T1,ct_env_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_parse_5) {
  P s_,modname_;
  P T0,T1;
LINK_STACK();
  ARG(s_, 0);
  ARG(modname_, 1);
  T1 = CALL1(1,VARREF(YevalSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YevalStopYparse_in),s_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_parse_in_6) {
  P s_,ct_env_;
  P T0,T1;
LINK_STACK();
  ARG(s_, 0);
  ARG(ct_env_, 1);
  T1 = CALL2(1,VARREF(YevalStopYparse_in),s_,ct_env_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_16),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_parse_7) {
  P s_,modname_;
  P T0,T1;
LINK_STACK();
  ARG(s_, 0);
  ARG(modname_, 1);
  T1 = CALL1(1,VARREF(YevalSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YevalStopYstr_parse_in),s_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStopYPPbottomPPast_run) {
  P ast_,ct_env_;
  P T0;
LINK_STACK();
  ARG(ast_, 0);
  ARG(ct_env_, 1);
  T0 = CALL1(1,VARREF(YevalSastYast_evaluate),ast_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStopYPPbottomPPg2c_run) {
  P ast_,ct_env_;
  P T0;
LINK_STACK();
  ARG(ast_, 0);
  ARG(ct_env_, 1);
  T0 = CALL2(1,VARREF(YevalStopYg2c_eval),ast_,ct_env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStopYauto_run) {
  P ast_,ct_env_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(ast_, 0);
  ARG(ct_env_, 1);
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
  P astF3175;
  P T0,T1;
LINK_STACK();
  ARG(form_, 0);
  ARG(ct_env_, 1);
  T1 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),form_,ct_env_,YPfalse);
  astF3175 = T1;
  T0 = CALL2(1,DYNREF(YevalStopYrun),astF3175,ct_env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_in_12) {
  P x_,ct_env_;
  P eF3177;
  P oF3176;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(ct_env_, 1);
  T1 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),x_,ct_env_,YPfalse);
  oF3176 = T1;
  T0 = CALL1(1,VARREF(YevalSastYast_evaluate),oF3176);
  eF3177 = T0;
UNLINK_STACK();
  QRET(eF3177);
}

FUNCODEDEF(fun_eval_13) {
  P x_,modname_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(modname_, 1);
  T1 = CALL1(1,VARREF(YevalSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YevalStopYeval_in),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_eval_in_14) {
  P x_,ct_env_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(ct_env_, 1);
  T2 = CALL1(1,VARREF(YgooSioSreadYread_from_string),x_);
  T1 = CALL2(1,VARREF(YevalStopYeval_in),T2,ct_env_);
  T0 = CALL1(1,VARREF(YgooSioSwriteYwrite_to_string),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_eval_15) {
  P x_,modname_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(modname_, 1);
  T1 = CALL1(1,VARREF(YevalSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YevalStopYstr_eval_in),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStopYcompiled_fileQ) {
  P name_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  T0 = CALL2(1,VARREF(YgooScolsSseqYsuffixQ),name_,LITREF(lit_40));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_17) {
  P xF3179;
  P formsF3178;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_in_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  formsF3178 = Ynil;
  for (;;) {
    P a196_0;
  loop196:
    T8 = BOXVAL(FREEREF(0));
    T7 = CALL1(1,VARREF(YgooSconditionsYread),T8);
    xF3179 = T7;
    T2 = CALL1(1,VARREF(YgooSmathYeof_objectQ),xF3179);
    if (T2 != YPfalse) {
      T4 = CALL1(1,VARREF(YgooSmacrosYrevX),formsF3178);
      T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_sequence_Gbegin),T4);
      T1 = T3;
    } else {
      T6 = CALL2(1,VARREF(YgooSmacrosYpair),xF3179,formsF3178);
      a196_0 = T6;
      formsF3178 = a196_0;
      goto loop196;
      T1 = T5;
    }
    break;
  }
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_18) {
  P T0,T1,T2,T3;
LINK_STACK();
  T1 = BOXVAL(FREEREF(0));
  if (T1 != YPfalse) {
    T3 = BOXVAL(FREEREF(0));
    T2 = CALL1(1,VARREF(YgooSioSportYclose),T3);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_read_file_19) {
  P filename_;
  P portF3180;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(filename_, 0);
  portF3180 = YPfalse;
  portF3180 = BOXFAB(portF3180);
  T2 = FUNFAB(fun_17,2,portF3180,filename_);
  T3 = FUNFAB(fun_18,1,portF3180);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_load_in_20) {
  P filename_,ct_env_;
  P oF3182;
  P xF3181;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(filename_, 0);
  ARG(ct_env_, 1);
  T1 = CALL1(1,VARREF(YevalStopYcompiled_fileQ),filename_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSsystemYso_load),filename_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YevalStopYread_file),filename_);
    xF3181 = T5;
    T4 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),xF3181,ct_env_,YPfalse);
    oF3182 = T4;
    T3 = CALL2(1,DYNREF(YevalStopYrun),oF3182,ct_env_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_file_21) {
  P filename_,modname_;
  P T0,T1;
LINK_STACK();
  ARG(filename_, 0);
  ARG(modname_, 1);
  T1 = CALL1(1,VARREF(YevalSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YevalSastYload_in),filename_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_22) {
  P name_,modname_;
  P realfileF3183;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(name_, 0);
  ARG(modname_, 1);
  T3 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_in_path),name_,VARREF(YgooSsystemYTmodule_search_pathT));
  realfileF3183 = T3;
  T0 = CALL1(1,VARREF(Ynot),realfileF3183);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yfile_opening_error),name_);
  } else {
  }
  T2 = CALL2(1,VARREF(YevalStopYload_file),realfileF3183,modname_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_prompt_for_command_expression_23) {
  P env_,level_,prompt_;
  P argsF3186;
  P arg_strF3185;
  P formF3184;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(env_, 0);
  ARG(level_, 1);
  ARG(prompt_, 2);
  T1 = CALL1(1,VARREF(YevalSastYfind_environment_module),env_);
  T0 = CALL1(1,VARREF(YevalSastYmodule_name),T1);
  CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_51),T0,level_,prompt_);
  CALL1(1,VARREF(YgooSioSportYforce_out),VARREF(YgooSioSportYout));
  T13 = CALL1(1,VARREF(YgooSconditionsYread),VARREF(YgooSioSportYin));
  formF3184 = T13;
  T4 = CALL2(1,VARREF(YisaQ),formF3184,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yhead),formF3184);
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),T6,LITREF(lit_52));
    T3 = T5;
  } else {
    T3 = YPfalse;
  }
  if (T3 != YPfalse) {
    T12 = CALL1(1,VARREF(YgooSioSportYgets),VARREF(YgooSioSportYin));
    arg_strF3185 = T12;
    T11 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_53),arg_strF3185,LITREF(lit_54));
    T10 = CALL1(1,VARREF(YgooSioSreadYread_from_string),T11);
    argsF3186 = T10;
    T9 = CALL1(1,VARREF(YgooSmacrosY2nd),formF3184);
    T8 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_55),T9);
    T7 = CALL2(1,VARREF(YgooSmacrosYpair),T8,argsF3186);
    T2 = T7;
  } else {
    T2 = formF3184;
  }
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_print_result_expression_24) {
  P env_,level_,label_,result_;
  P T0,T1,T2;
LINK_STACK();
  ARG(env_, 0);
  ARG(level_, 1);
  ARG(label_, 2);
  ARG(result_, 3);
  T1 = CALL1(1,VARREF(YevalSastYfind_environment_module),env_);
  T0 = CALL1(1,VARREF(YevalSastYmodule_name),T1);
  CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_58),T0,level_,label_);
  T2 = CALL2(1,VARREF(YgooSioSwriteYwrite),VARREF(YgooSioSportYout),result_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_do_stack_frames_25) {
  P fun_;
  P T0;
LINK_STACK();
  ARG(fun_, 0);
  T0 = (P)YPdo_stack_frames(fun_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1500_26) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_65),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_27) {
  P return_;
  P x_1499F3203;
  P x_1499F3202;
  P x_1499F3201;
  P x_1499F3200;
  P x_1499F3199;
  P x_1499F3198;
  P x_1499F3197;
  P x_1499F3196;
  P x_1499F3195;
  P x_1499F3194;
  P x_1499F3193;
  P bodyF3192;
  P argsF3191;
  P fF3190;
  P numF3189;
  P x_1499F3188;
  P x_1500F3187;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58;
LINK_STACK();
  ARG(return_, 0);
  T58 = FUNSHELL(0,fun_x_1500_26,2);
  x_1500F3187 = T58;
  FUNINIT(x_1500F3187, 2,FREEREF(0),return_);
  x_1499F3188 = FREEREF(0);
  numF3189 = YPfalse;
  numF3189 = BOXFAB(numF3189);
  fF3190 = YPfalse;
  fF3190 = BOXFAB(fF3190);
  argsF3191 = YPfalse;
  argsF3191 = BOXFAB(argsF3191);
  bodyF3192 = YPfalse;
  bodyF3192 = BOXFAB(bodyF3192);
  T4 = CALL2(1,VARREF(YisaQ),x_1499F3188,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T21 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1499F3188,LITREF(lit_65),x_1500F3187);
    x_1499F3193 = T21;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1499F3193,x_1500F3187);
    x_1499F3194 = T19;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1499F3194,x_1500F3187);
    BOXVAL(numF3189) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1499F3194);
    x_1499F3195 = T18;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1499F3195,x_1500F3187);
    BOXVAL(fF3190) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1499F3195);
    x_1499F3196 = T16;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1499F3196,x_1500F3187);
    BOXVAL(argsF3191) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1499F3196);
    x_1499F3197 = T14;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1499F3197,x_1500F3187);
    x_1499F3198 = T11;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1499F3198,x_1500F3187);
    T12 = CALL1(1,VARREF(Ytail),x_1499F3197);
    x_1499F3199 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1499F3199,x_1500F3187);
    T20 = CALL1(1,VARREF(Ytail),x_1499F3193);
    x_1499F3200 = T20;
    BOXVAL(bodyF3192) = x_1499F3200;
    x_1499F3201 = Ynil;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1499F3201,x_1500F3187);
    x_1499F3202 = T7;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1499F3202,x_1500F3187);
    T8 = CALL1(1,VARREF(Ytail),x_1499F3201);
    x_1499F3203 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1499F3203,x_1500F3187);
  } else {
    T22 = CALL2(1,x_1500F3187,LITREF(lit_66),x_1499F3188);
  }
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_67));
  T30 = BOXVAL(numF3189);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T31 = CALL1(1,VARREF(Ylst),YPint((P)0));
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T31,LITREF(lit_68));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T26 = CALL2(1,VARREF(YgooSmacrosYcat),T27,LITREF(lit_68));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_69));
  T41 = BOXVAL(fF3190);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_70));
  T39 = CALL3(1,VARREF(YgooSmacrosYcat),T40,T42,LITREF(lit_68));
  T38 = CALL1(1,VARREF(Ylst),T39);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_71));
  T47 = BOXVAL(argsF3191);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_72));
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_70));
  T49 = CALL3(1,VARREF(YgooSmacrosYcat),T50,T51,LITREF(lit_68));
  T48 = CALL1(1,VARREF(Ylst),T49);
  T44 = CALL4(1,VARREF(YgooSmacrosYcat),T45,T46,T48,LITREF(lit_68));
  T43 = CALL1(1,VARREF(Ylst),T44);
  T52 = BOXVAL(bodyF3192);
  T55 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T57 = BOXVAL(numF3189);
  T56 = CALL1(1,VARREF(Ylst),T57);
  T54 = CALL3(1,VARREF(YgooSmacrosYcat),T55,T56,LITREF(lit_68));
  T53 = CALL1(1,VARREF(Ylst),T54);
  T36 = CALLN(1,VARREF(YgooSmacrosYcat),6,T37,T38,T43,T52,T53,LITREF(lit_68));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T35,LITREF(lit_68));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T32,LITREF(lit_68));
UNLINK_STACK();
  QRET(T23);
}

FUNCODEDEF(fun_28) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_27,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1504_29) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_78),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_30) {
  P return_;
  P x_1503F3220;
  P x_1503F3219;
  P x_1503F3218;
  P x_1503F3217;
  P x_1503F3216;
  P x_1503F3215;
  P x_1503F3214;
  P x_1503F3213;
  P x_1503F3212;
  P x_1503F3211;
  P x_1503F3210;
  P bodyF3209;
  P argsF3208;
  P fF3207;
  P numF3206;
  P x_1503F3205;
  P x_1504F3204;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113;
LINK_STACK();
  ARG(return_, 0);
  T113 = FUNSHELL(0,fun_x_1504_29,2);
  x_1504F3204 = T113;
  FUNINIT(x_1504F3204, 2,FREEREF(0),return_);
  x_1503F3205 = FREEREF(0);
  numF3206 = YPfalse;
  numF3206 = BOXFAB(numF3206);
  fF3207 = YPfalse;
  fF3207 = BOXFAB(fF3207);
  argsF3208 = YPfalse;
  argsF3208 = BOXFAB(argsF3208);
  bodyF3209 = YPfalse;
  bodyF3209 = BOXFAB(bodyF3209);
  T4 = CALL2(1,VARREF(YisaQ),x_1503F3205,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T21 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1503F3205,LITREF(lit_78),x_1504F3204);
    x_1503F3210 = T21;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1503F3210,x_1504F3204);
    x_1503F3211 = T19;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1503F3211,x_1504F3204);
    BOXVAL(numF3206) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1503F3211);
    x_1503F3212 = T18;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1503F3212,x_1504F3204);
    BOXVAL(fF3207) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1503F3212);
    x_1503F3213 = T16;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1503F3213,x_1504F3204);
    BOXVAL(argsF3208) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1503F3213);
    x_1503F3214 = T14;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1503F3214,x_1504F3204);
    x_1503F3215 = T11;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1503F3215,x_1504F3204);
    T12 = CALL1(1,VARREF(Ytail),x_1503F3214);
    x_1503F3216 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1503F3216,x_1504F3204);
    T20 = CALL1(1,VARREF(Ytail),x_1503F3210);
    x_1503F3217 = T20;
    BOXVAL(bodyF3209) = x_1503F3217;
    x_1503F3218 = Ynil;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1503F3218,x_1504F3204);
    x_1503F3219 = T7;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1503F3219,x_1504F3204);
    T8 = CALL1(1,VARREF(Ytail),x_1503F3218);
    x_1503F3220 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1503F3220,x_1504F3204);
  } else {
    T22 = CALL2(1,x_1504F3204,LITREF(lit_66),x_1503F3205);
  }
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_79));
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_80));
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_71));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_81));
  T30 = CALL1(1,VARREF(Ylst),YPfalse);
  T27 = CALL4(1,VARREF(YgooSmacrosYcat),T28,T29,T30,LITREF(lit_68));
  T26 = CALL1(1,VARREF(Ylst),T27);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_71));
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_82));
  T35 = CALL1(1,VARREF(Ylst),YPint((P)0));
  T32 = CALL4(1,VARREF(YgooSmacrosYcat),T33,T34,T35,LITREF(lit_68));
  T31 = CALL1(1,VARREF(Ylst),T32);
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_65));
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_83));
  T43 = BOXVAL(fF3207);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T45 = BOXVAL(argsF3208);
  T44 = CALL1(1,VARREF(Ylst),T45);
  T40 = CALL4(1,VARREF(YgooSmacrosYcat),T41,T42,T44,LITREF(lit_68));
  T39 = CALL1(1,VARREF(Ylst),T40);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_71));
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_85));
  T55 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T57 = BOXVAL(fF3207);
  T56 = CALL1(1,VARREF(Ylst),T57);
  T54 = CALL3(1,VARREF(YgooSmacrosYcat),T55,T56,LITREF(lit_68));
  T53 = CALL1(1,VARREF(Ylst),T54);
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_87));
  T61 = CALL1(1,VARREF(Ylst),LITREF(lit_88));
  T64 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T66 = BOXVAL(fF3207);
  T65 = CALL1(1,VARREF(Ylst),T66);
  T63 = CALL3(1,VARREF(YgooSmacrosYcat),T64,T65,LITREF(lit_68));
  T62 = CALL1(1,VARREF(Ylst),T63);
  T59 = CALL4(1,VARREF(YgooSmacrosYcat),T60,T61,T62,LITREF(lit_68));
  T58 = CALL1(1,VARREF(Ylst),T59);
  T67 = CALL1(1,VARREF(Ylst),LITREF(lit_89));
  T51 = CALL5(1,VARREF(YgooSmacrosYcat),T52,T53,T58,T67,LITREF(lit_68));
  T50 = CALL1(1,VARREF(Ylst),T51);
  T47 = CALL4(1,VARREF(YgooSmacrosYcat),T48,T49,T50,LITREF(lit_68));
  T46 = CALL1(1,VARREF(Ylst),T47);
  T70 = CALL1(1,VARREF(Ylst),LITREF(lit_71));
  T72 = BOXVAL(numF3206);
  T71 = CALL1(1,VARREF(Ylst),T72);
  T75 = CALL1(1,VARREF(Ylst),LITREF(lit_90));
  T76 = CALL1(1,VARREF(Ylst),LITREF(lit_83));
  T77 = CALL1(1,VARREF(Ylst),LITREF(lit_82));
  T74 = CALL4(1,VARREF(YgooSmacrosYcat),T75,T76,T77,LITREF(lit_68));
  T73 = CALL1(1,VARREF(Ylst),T74);
  T69 = CALL4(1,VARREF(YgooSmacrosYcat),T70,T71,T73,LITREF(lit_68));
  T68 = CALL1(1,VARREF(Ylst),T69);
  T80 = CALL1(1,VARREF(Ylst),LITREF(lit_91));
  T81 = CALL1(1,VARREF(Ylst),LITREF(lit_81));
  T84 = CALL1(1,VARREF(Ylst),LITREF(lit_91));
  T87 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
  T88 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T89 = CALL1(1,VARREF(Ylst),LITREF(lit_93));
  T86 = CALL4(1,VARREF(YgooSmacrosYcat),T87,T88,T89,LITREF(lit_68));
  T85 = CALL1(1,VARREF(Ylst),T86);
  T92 = CALL1(1,VARREF(Ylst),LITREF(lit_80));
  T93 = CALL1(1,VARREF(Ylst),YPfalse);
  T91 = CALL3(1,VARREF(YgooSmacrosYcat),T92,T93,LITREF(lit_68));
  T90 = CALL1(1,VARREF(Ylst),T91);
  T83 = CALL4(1,VARREF(YgooSmacrosYcat),T84,T85,T90,LITREF(lit_68));
  T82 = CALL1(1,VARREF(Ylst),T83);
  T94 = BOXVAL(bodyF3209);
  T79 = CALL5(1,VARREF(YgooSmacrosYcat),T80,T81,T82,T94,LITREF(lit_68));
  T78 = CALL1(1,VARREF(Ylst),T79);
  T97 = CALL1(1,VARREF(Ylst),LITREF(lit_91));
  T100 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
  T101 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T102 = CALL1(1,VARREF(Ylst),LITREF(lit_94));
  T99 = CALL4(1,VARREF(YgooSmacrosYcat),T100,T101,T102,LITREF(lit_68));
  T98 = CALL1(1,VARREF(Ylst),T99);
  T105 = CALL1(1,VARREF(Ylst),LITREF(lit_95));
  T106 = CALL1(1,VARREF(Ylst),LITREF(lit_82));
  T107 = CALL1(1,VARREF(Ylst),LITREF(lit_96));
  T104 = CALL4(1,VARREF(YgooSmacrosYcat),T105,T106,T107,LITREF(lit_68));
  T103 = CALL1(1,VARREF(Ylst),T104);
  T110 = CALL1(1,VARREF(Ylst),LITREF(lit_95));
  T111 = CALL1(1,VARREF(Ylst),LITREF(lit_81));
  T112 = CALL1(1,VARREF(Ylst),YPtrue);
  T109 = CALL4(1,VARREF(YgooSmacrosYcat),T110,T111,T112,LITREF(lit_68));
  T108 = CALL1(1,VARREF(Ylst),T109);
  T96 = CALL5(1,VARREF(YgooSmacrosYcat),T97,T98,T103,T108,LITREF(lit_68));
  T95 = CALL1(1,VARREF(Ylst),T96);
  T37 = CALLN(1,VARREF(YgooSmacrosYcat),7,T38,T39,T46,T68,T78,T95,LITREF(lit_68));
  T36 = CALL1(1,VARREF(Ylst),T37);
  T23 = CALLN(1,VARREF(YgooSmacrosYcat),6,T24,T25,T26,T31,T36,LITREF(lit_68));
UNLINK_STACK();
  QRET(T23);
}

FUNCODEDEF(fun_31) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_30,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_msg_src_loc_32) {
  P f_;
  P slF3221;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(f_, 0);
  T1 = CALL2(1,VARREF(YisaQ),f_,VARREF(YLmetG));
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(Yfun_src),f_);
    slF3221 = T7;
    T3 = CALL2(1,VARREF(YisaQ),slF3221,VARREF(YLsrc_locG));
    if (T3 != YPfalse) {
      T5 = CALL1(1,VARREF(Ysrc_loc_file),slF3221);
      T6 = CALL1(1,VARREF(Ysrc_loc_line),slF3221);
      T4 = CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_99),T5,T6);
      T2 = T4;
    } else {
      T2 = YPfalse;
    }
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_33) {
  P f_,Uargs_;
  P numF3224;
  P UnameF3223;
  P argsF3222;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
  T16 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF3222 = T16;
  T13 = CALL1(1,VARREF(Yfun_name),f_);
  if (T13 != YPfalse) {
    T15 = CALL1(1,VARREF(Yfun_name),f_);
    T14 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T15);
    T12 = T14;
  } else {
    T12 = LITREF(lit_89);
  }
  UnameF3223 = T12;
  T10 = BOXVAL(FREEREF(0));
  T11 = BOXVAL(FREEREF(1));
  T9 = CALL2(1,VARREF(YgooSmathY_),T10,T11);
  numF3224 = T9;
  T0 = BOXVAL(FREEREF(2));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF3223,LITREF(lit_93));
    if (T1 != YPfalse) {
      T2 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_103),numF3224,f_,argsF3222);
    CALL1(1,VARREF(YevalStopYmsg_src_loc),f_);
    T3 = CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
  } else {
  }
  T4 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF3223,LITREF(lit_94));
  if (T4 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF3224;
    T5 = BOXVAL(FREEREF(2)) = YPtrue;
  } else {
  }
  T8 = BOXVAL(FREEREF(0));
  T7 = CALL2(1,VARREF(YgooSmathYA),T8,YPint((P)1));
  T6 = BOXVAL(FREEREF(0)) = T7;
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_34) {
  P break_;
  P UnumF3227;
  P Utop_numF3226;
  P Useen_topF3225;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(break_, 0);
  Useen_topF3225 = YPfalse;
  Useen_topF3225 = BOXFAB(Useen_topF3225);
  Utop_numF3226 = YPint((P)0);
  Utop_numF3226 = BOXFAB(Utop_numF3226);
  UnumF3227 = YPint((P)0);
  UnumF3227 = BOXFAB(UnumF3227);
  T4 = FUNFAB(fun_33,4,UnumF3227,Utop_numF3226,Useen_topF3225,break_);
  T3 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T4);
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_backtrace_35) {
  P T0,T1;
LINK_STACK();
  T1 = fun_34;
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_36) {
  P f_,Uargs_;
  P numF3230;
  P UnameF3229;
  P argsF3228;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
  T18 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF3228 = T18;
  T15 = CALL1(1,VARREF(Yfun_name),f_);
  if (T15 != YPfalse) {
    T17 = CALL1(1,VARREF(Yfun_name),f_);
    T16 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T17);
    T14 = T16;
  } else {
    T14 = LITREF(lit_89);
  }
  UnameF3229 = T14;
  T12 = BOXVAL(FREEREF(0));
  T13 = BOXVAL(FREEREF(1));
  T11 = CALL2(1,VARREF(YgooSmathY_),T12,T13);
  numF3230 = T11;
  T0 = BOXVAL(FREEREF(2));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF3229,LITREF(lit_93));
    if (T1 != YPfalse) {
      T2 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(4),numF3230);
    if (T4 != YPfalse) {
      CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_108),numF3230,f_,argsF3228);
      CALL1(1,VARREF(YevalStopYmsg_src_loc),f_);
      T5 = CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
      T3 = T5;
    } else {
      T3 = YPfalse;
    }
  } else {
  }
  T6 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF3229,LITREF(lit_94));
  if (T6 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF3230;
    T7 = BOXVAL(FREEREF(2)) = YPtrue;
  } else {
  }
  T10 = BOXVAL(FREEREF(0));
  T9 = CALL2(1,VARREF(YgooSmathYA),T10,YPint((P)1));
  T8 = BOXVAL(FREEREF(0)) = T9;
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_37) {
  P break_;
  P UnumF3233;
  P Utop_numF3232;
  P Useen_topF3231;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(break_, 0);
  Useen_topF3231 = YPfalse;
  Useen_topF3231 = BOXFAB(Useen_topF3231);
  Utop_numF3232 = YPint((P)0);
  Utop_numF3232 = BOXFAB(Utop_numF3232);
  UnumF3233 = YPint((P)0);
  UnumF3233 = BOXFAB(UnumF3233);
  T4 = FUNFAB(fun_36,5,UnumF3233,Utop_numF3232,Useen_topF3231,break_,FREEREF(0));
  T3 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T4);
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_frame_38) {
  P n_;
  P T0,T1;
LINK_STACK();
  ARG(n_, 0);
  T1 = FUNFAB(fun_37,1,n_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_39) {
  P f_,Uargs_;
  P numF3236;
  P UnameF3235;
  P argsF3234;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
  T21 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF3234 = T21;
  T18 = CALL1(1,VARREF(Yfun_name),f_);
  if (T18 != YPfalse) {
    T20 = CALL1(1,VARREF(Yfun_name),f_);
    T19 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T20);
    T17 = T19;
  } else {
    T17 = LITREF(lit_89);
  }
  UnameF3235 = T17;
  T15 = BOXVAL(FREEREF(0));
  T16 = BOXVAL(FREEREF(1));
  T14 = CALL2(1,VARREF(YgooSmathY_),T15,T16);
  numF3236 = T14;
  T0 = BOXVAL(FREEREF(2));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF3235,LITREF(lit_93));
    if (T1 != YPfalse) {
      T2 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(4),numF3236);
    if (T4 != YPfalse) {
      T8 = CALL1(1,VARREF(Yfun_names),f_);
      T7 = CALL2(1,VARREF(YgooScolsSseqYpos),T8,FREEREF(5));
      T6 = CALL2(1,VARREF(YgooSmacrosYelt),argsF3234,T7);
      T5 = CALL1(1,FREEREF(6),T6);
      T3 = T5;
    } else {
      T3 = YPfalse;
    }
  } else {
  }
  T9 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF3235,LITREF(lit_94));
  if (T9 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF3236;
    T10 = BOXVAL(FREEREF(2)) = YPtrue;
  } else {
  }
  T13 = BOXVAL(FREEREF(0));
  T12 = CALL2(1,VARREF(YgooSmathYA),T13,YPint((P)1));
  T11 = BOXVAL(FREEREF(0)) = T12;
UNLINK_STACK();
  QRET(T11);
}

FUNCODEDEF(fun_40) {
  P break_;
  P UnumF3239;
  P Utop_numF3238;
  P Useen_topF3237;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(break_, 0);
  Useen_topF3237 = YPfalse;
  Useen_topF3237 = BOXFAB(Useen_topF3237);
  Utop_numF3238 = YPint((P)0);
  Utop_numF3238 = BOXFAB(Utop_numF3238);
  UnumF3239 = YPint((P)0);
  UnumF3239 = BOXFAB(UnumF3239);
  T4 = FUNFAB(fun_39,7,UnumF3239,Utop_numF3238,Useen_topF3237,break_,FREEREF(0),FREEREF(1),FREEREF(2));
  T3 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T4);
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_41) {
  P ret_;
  P T0;
LINK_STACK();
  ARG(ret_, 0);
  T0 = FUNFAB(fun_40,3,FREEREF(0),FREEREF(1),ret_);
  with_exit(T0);
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_frame_var_42) {
  P n_,name_;
  P T0,T1;
LINK_STACK();
  ARG(n_, 0);
  ARG(name_, 1);
  T1 = FUNFAB(fun_41,2,n_,name_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_43) {
  P f_,Uargs_;
  P numF3242;
  P UnameF3241;
  P argsF3240;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
  T16 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF3240 = T16;
  T13 = CALL1(1,VARREF(Yfun_name),f_);
  if (T13 != YPfalse) {
    T15 = CALL1(1,VARREF(Yfun_name),f_);
    T14 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T15);
    T12 = T14;
  } else {
    T12 = LITREF(lit_89);
  }
  UnameF3241 = T12;
  T10 = BOXVAL(FREEREF(0));
  T11 = BOXVAL(FREEREF(1));
  T9 = CALL2(1,VARREF(YgooSmathY_),T10,T11);
  numF3242 = T9;
  T0 = BOXVAL(FREEREF(2));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF3241,LITREF(lit_93));
    if (T1 != YPfalse) {
      T2 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_117),numF3242,f_);
    CALL1(1,VARREF(YevalStopYmsg_src_loc),f_);
    T3 = CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
  } else {
  }
  T4 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF3241,LITREF(lit_94));
  if (T4 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF3242;
    T5 = BOXVAL(FREEREF(2)) = YPtrue;
  } else {
  }
  T8 = BOXVAL(FREEREF(0));
  T7 = CALL2(1,VARREF(YgooSmathYA),T8,YPint((P)1));
  T6 = BOXVAL(FREEREF(0)) = T7;
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_44) {
  P break_;
  P UnumF3245;
  P Utop_numF3244;
  P Useen_topF3243;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(break_, 0);
  Useen_topF3243 = YPfalse;
  Useen_topF3243 = BOXFAB(Useen_topF3243);
  Utop_numF3244 = YPint((P)0);
  Utop_numF3244 = BOXFAB(Utop_numF3244);
  UnumF3245 = YPint((P)0);
  UnumF3245 = BOXFAB(UnumF3245);
  T4 = FUNFAB(fun_43,4,UnumF3245,Utop_numF3244,Useen_topF3243,break_);
  T3 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T4);
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_bt_45) {
  P T0,T1;
LINK_STACK();
  T1 = fun_44;
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStopYdo_restart) {
  P restarts_,n_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(restarts_, 0);
  ARG(n_, 1);
  T0 = CALL1(1,VARREF(Ynot),restarts_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_120));
  } else {
  }
  T4 = CALL2(1,VARREF(YgooSmagYG),n_,YPint((P)0));
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooStypesYlen),restarts_);
    T5 = CALL2(1,VARREF(YgooSmagYLE),n_,T6);
    T3 = T5;
  } else {
    T3 = YPfalse;
  }
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T7 = CALL2(1,VARREF(Yerror),LITREF(lit_121),n_);
  } else {
  }
  T10 = CALL2(1,VARREF(YgooSmathY_),n_,YPint((P)1));
  T9 = CALL2(1,VARREF(YgooSmacrosYelt),restarts_,T10);
  T8 = CALL3(1,VARREF(YgooSconditionsYinvoke_handler_interactively),T9,VARREF(YgooSioSportYin),VARREF(YgooSioSportYout));
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_47) {
LINK_STACK();
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_48) {
  P c_,r_;
  P x_1506F3247;
  P x_1505F3246;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
  x_1505F3246 = c_;
  x_1506F3247 = VARREF(YisaQ);
  T1 = CALL2(0,x_1506F3247,x_1505F3246,VARREF(YgooSconditionsYLkeyboard_interruptG));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_127));
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YgooSconditionsYdescribe_condition),c_);
    T3 = CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_128),T4);
    T0 = T3;
  }
  T5 = CALL2(1,VARREF(YgooSmathYA),FREEREF(0),YPint((P)1));
  T6 = BOXVAL(FREEREF(3));
  CALL5(1,VARREF(YevalStopYPPtopPPtop_in),T5,FREEREF(1),FREEREF(2),YPtrue,T6);
  T7 = CALL1(1,FREEREF(4),YPfalse);
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_49) {
LINK_STACK();
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_50) {
  P c_,r_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1548_51) {
  P msg_,args_;
  P x_1552F3252;
  P x_1551F3251;
  P x_1550F3250;
  P x_1549F3249;
  P resF3248;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T7 = BOXVAL(FREEREF(1));
  T6 = CALL2(1,VARREF(YevalStopYauto_eval),FREEREF(0),T7);
  resF3248 = T6;
  resF3248 = BOXFAB(resF3248);
  T2 = BOXVAL(FREEREF(1));
  T3 = BOXVAL(resF3248);
  CALL4(1,VARREF(YevalStopYprint_result_expression),T2,FREEREF(2),LITREF(lit_175),T3);
  x_1549F3249 = VARREF(YevalStopYDDD);
  x_1550F3250 = VARREF(YevalStopYDD);
  x_1551F3251 = VARREF(YevalStopYD);
  T5 = BOXVAL(resF3248);
  x_1552F3252 = T5;
  VARSET(YevalStopYDDD,x_1550F3250);
  VARSET(YevalStopYDD,x_1551F3251);
  VARSET(YevalStopYD,x_1552F3252);
  T4 = BOXVAL(resF3248) = x_1549F3249;
  T0 = CALL1(1,FREEREF(3),T4);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_52) {
  P return_;
  P x_1547F3261;
  P x_1547F3260;
  P x_1547F3259;
  P x_1547F3258;
  P x_1547F3257;
  P nameF3256;
  P nF3255;
  P x_1547F3254;
  P x_1548F3253;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(return_, 0);
  T18 = FUNSHELL(0,fun_x_1548_51,4);
  x_1548F3253 = T18;
  FUNINIT(x_1548F3253, 4,FREEREF(0),FREEREF(1),FREEREF(2),return_);
  x_1547F3254 = FREEREF(3);
  nF3255 = YPfalse;
  nF3255 = BOXFAB(nF3255);
  nameF3256 = YPfalse;
  nameF3256 = BOXFAB(nameF3256);
  T2 = CALL2(1,VARREF(YisaQ),x_1547F3254,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1547F3254,LITREF(lit_176),x_1548F3253);
    x_1547F3257 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1547F3257,x_1548F3253);
    BOXVAL(nF3255) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1547F3257);
    x_1547F3258 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1547F3258,x_1548F3253);
    BOXVAL(nameF3256) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1547F3258);
    x_1547F3259 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1547F3259,x_1548F3253);
    x_1547F3260 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1547F3260,x_1548F3253);
    T6 = CALL1(1,VARREF(Ytail),x_1547F3259);
    x_1547F3261 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1547F3261,x_1548F3253);
  } else {
    T12 = CALL2(1,x_1548F3253,LITREF(lit_66),x_1547F3254);
  }
  T14 = BOXVAL(FREEREF(1));
  T16 = BOXVAL(nF3255);
  T17 = BOXVAL(nameF3256);
  T15 = CALL2(1,VARREF(YevalStopYframe_var),T16,T17);
  T13 = CALL4(1,VARREF(YevalStopYprint_result_expression),T14,FREEREF(2),LITREF(lit_177),T15);
UNLINK_STACK();
  QRET(T13);
}

FUNCODEDEF(fun_x_1545_53) {
  P msg_,args_;
  P x_1546F3262;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1546F3262 = FREEREF(0);
  T2 = FUNFAB(fun_52,4,FREEREF(1),FREEREF(2),FREEREF(3),x_1546F3262);
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_54) {
  P return_;
  P x_1544F3269;
  P x_1544F3268;
  P x_1544F3267;
  P x_1544F3266;
  P nF3265;
  P x_1544F3264;
  P x_1545F3263;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(return_, 0);
  T12 = FUNSHELL(0,fun_x_1545_53,5);
  x_1545F3263 = T12;
  FUNINIT(x_1545F3263, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1544F3264 = FREEREF(0);
  nF3265 = YPfalse;
  nF3265 = BOXFAB(nF3265);
  T1 = CALL2(1,VARREF(YisaQ),x_1544F3264,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1544F3264,LITREF(lit_178),x_1545F3263);
    x_1544F3266 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1544F3266,x_1545F3263);
    BOXVAL(nF3265) = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1544F3266);
    x_1544F3267 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1544F3267,x_1545F3263);
    x_1544F3268 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1544F3268,x_1545F3263);
    T5 = CALL1(1,VARREF(Ytail),x_1544F3267);
    x_1544F3269 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1544F3269,x_1545F3263);
  } else {
    T9 = CALL2(1,x_1545F3263,LITREF(lit_66),x_1544F3264);
  }
  T11 = BOXVAL(nF3265);
  T10 = CALL1(1,VARREF(YevalStopYframe),T11);
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_x_1542_55) {
  P msg_,args_;
  P x_1543F3270;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1543F3270 = FREEREF(0);
  T2 = FUNFAB(fun_54,4,x_1543F3270,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_56) {
  P return_;
  P x_1541F3275;
  P x_1541F3274;
  P x_1541F3273;
  P x_1541F3272;
  P x_1542F3271;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1542_55,5);
  x_1542F3271 = T8;
  FUNINIT(x_1542F3271, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1541F3272 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1541F3272,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1541F3272,LITREF(lit_179),x_1542F3271);
    x_1541F3273 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1541F3273,x_1542F3271);
    x_1541F3274 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1541F3274,x_1542F3271);
    T4 = CALL1(1,VARREF(Ytail),x_1541F3273);
    x_1541F3275 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1541F3275,x_1542F3271);
  } else {
    T6 = CALL2(1,x_1542F3271,LITREF(lit_66),x_1541F3272);
  }
  T7 = CALL0(1,VARREF(YevalStopYbacktrace));
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_x_1539_57) {
  P msg_,args_;
  P x_1540F3276;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1540F3276 = FREEREF(0);
  T2 = FUNFAB(fun_56,4,x_1540F3276,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_58) {
  P return_;
  P x_1538F3281;
  P x_1538F3280;
  P x_1538F3279;
  P x_1538F3278;
  P x_1539F3277;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1539_57,5);
  x_1539F3277 = T8;
  FUNINIT(x_1539F3277, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1538F3278 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1538F3278,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1538F3278,LITREF(lit_180),x_1539F3277);
    x_1538F3279 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1538F3279,x_1539F3277);
    x_1538F3280 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1538F3280,x_1539F3277);
    T4 = CALL1(1,VARREF(Ytail),x_1538F3279);
    x_1538F3281 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1538F3281,x_1539F3277);
  } else {
    T6 = CALL2(1,x_1539F3277,LITREF(lit_66),x_1538F3278);
  }
  T7 = CALL0(1,VARREF(YevalStopYbt));
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_x_1536_59) {
  P msg_,args_;
  P x_1537F3282;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1537F3282 = FREEREF(0);
  T2 = FUNFAB(fun_58,4,x_1537F3282,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_60) {
  P return_;
  P x_1535F3287;
  P x_1535F3286;
  P x_1535F3285;
  P x_1535F3284;
  P x_1536F3283;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(return_, 0);
  T9 = FUNSHELL(0,fun_x_1536_59,5);
  x_1536F3283 = T9;
  FUNINIT(x_1536F3283, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1535F3284 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1535F3284,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1535F3284,LITREF(lit_181),x_1536F3283);
    x_1535F3285 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1535F3285,x_1536F3283);
    x_1535F3286 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1535F3286,x_1536F3283);
    T4 = CALL1(1,VARREF(Ytail),x_1535F3285);
    x_1535F3287 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1535F3287,x_1536F3283);
  } else {
    T6 = CALL2(1,x_1536F3283,LITREF(lit_66),x_1535F3284);
  }
  if (VARREF(YevalStopYDg2c_evalQ) != YPfalse) {
    T8 = DYNSET(YevalStopYrun,VARREF(YevalStopYauto_run));
    T7 = T8;
  } else {
    T7 = YPfalse;
  }
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_x_1533_61) {
  P msg_,args_;
  P x_1534F3288;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1534F3288 = FREEREF(0);
  T2 = FUNFAB(fun_60,4,x_1534F3288,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_62) {
  P return_;
  P x_1532F3293;
  P x_1532F3292;
  P x_1532F3291;
  P x_1532F3290;
  P x_1533F3289;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1533_61,5);
  x_1533F3289 = T8;
  FUNINIT(x_1533F3289, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1532F3290 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1532F3290,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1532F3290,LITREF(lit_182),x_1533F3289);
    x_1532F3291 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1532F3291,x_1533F3289);
    x_1532F3292 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1532F3292,x_1533F3289);
    T4 = CALL1(1,VARREF(Ytail),x_1532F3291);
    x_1532F3293 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1532F3293,x_1533F3289);
  } else {
    T6 = CALL2(1,x_1533F3289,LITREF(lit_66),x_1532F3290);
  }
  T7 = DYNSET(YevalStopYrun,VARREF(YevalStopYPPbottomPPast_run));
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_x_1530_63) {
  P msg_,args_;
  P x_1531F3294;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1531F3294 = FREEREF(0);
  T2 = FUNFAB(fun_62,4,x_1531F3294,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_64) {
  P return_;
  P x_1529F3299;
  P x_1529F3298;
  P x_1529F3297;
  P x_1529F3296;
  P x_1530F3295;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(return_, 0);
  T9 = FUNSHELL(0,fun_x_1530_63,5);
  x_1530F3295 = T9;
  FUNINIT(x_1530F3295, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1529F3296 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1529F3296,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1529F3296,LITREF(lit_183),x_1530F3295);
    x_1529F3297 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1529F3297,x_1530F3295);
    x_1529F3298 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1529F3298,x_1530F3295);
    T4 = CALL1(1,VARREF(Ytail),x_1529F3297);
    x_1529F3299 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1529F3299,x_1530F3295);
  } else {
    T6 = CALL2(1,x_1530F3295,LITREF(lit_66),x_1529F3296);
  }
  if (VARREF(YevalStopYDg2c_evalQ) != YPfalse) {
    T8 = DYNSET(YevalStopYrun,VARREF(YevalStopYPPbottomPPg2c_run));
    T7 = T8;
  } else {
    T7 = YPfalse;
  }
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_x_1527_65) {
  P msg_,args_;
  P x_1528F3300;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1528F3300 = FREEREF(0);
  T2 = FUNFAB(fun_64,4,x_1528F3300,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_66) {
  P return_;
  P new_envF3308;
  P x_1526F3307;
  P x_1526F3306;
  P x_1526F3305;
  P x_1526F3304;
  P mF3303;
  P x_1526F3302;
  P x_1527F3301;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_1527_65,5);
  x_1527F3301 = T13;
  FUNINIT(x_1527F3301, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1526F3302 = FREEREF(0);
  mF3303 = YPfalse;
  mF3303 = BOXFAB(mF3303);
  T1 = CALL2(1,VARREF(YisaQ),x_1526F3302,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1526F3302,LITREF(lit_184),x_1527F3301);
    x_1526F3304 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1526F3304,x_1527F3301);
    BOXVAL(mF3303) = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1526F3304);
    x_1526F3305 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1526F3305,x_1527F3301);
    x_1526F3306 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1526F3306,x_1527F3301);
    T5 = CALL1(1,VARREF(Ytail),x_1526F3305);
    x_1526F3307 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1526F3307,x_1527F3301);
  } else {
    T9 = CALL2(1,x_1527F3301,LITREF(lit_66),x_1526F3302);
  }
  T12 = BOXVAL(mF3303);
  T11 = CALL1(1,VARREF(YevalSastYruntime_environment),T12);
  new_envF3308 = T11;
  T10 = BOXVAL(FREEREF(2)) = new_envF3308;
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_x_1524_67) {
  P msg_,args_;
  P x_1525F3309;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1525F3309 = FREEREF(0);
  T2 = FUNFAB(fun_66,4,x_1525F3309,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_68) {
  P return_;
  P x_1523F3316;
  P x_1523F3315;
  P x_1523F3314;
  P x_1523F3313;
  P nF3312;
  P x_1523F3311;
  P x_1524F3310;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_1524_67,5);
  x_1524F3310 = T13;
  FUNINIT(x_1524F3310, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1523F3311 = FREEREF(0);
  nF3312 = YPfalse;
  nF3312 = BOXFAB(nF3312);
  T1 = CALL2(1,VARREF(YisaQ),x_1523F3311,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1523F3311,LITREF(lit_185),x_1524F3310);
    x_1523F3313 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1523F3313,x_1524F3310);
    BOXVAL(nF3312) = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1523F3313);
    x_1523F3314 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1523F3314,x_1524F3310);
    x_1523F3315 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1523F3315,x_1524F3310);
    T5 = CALL1(1,VARREF(Ytail),x_1523F3314);
    x_1523F3316 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1523F3316,x_1524F3310);
  } else {
    T9 = CALL2(1,x_1524F3310,LITREF(lit_66),x_1523F3311);
  }
  T11 = BOXVAL(FREEREF(4));
  T12 = BOXVAL(nF3312);
  T10 = CALL2(1,VARREF(YevalStopYdo_restart),T11,T12);
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_x_1521_69) {
  P msg_,args_;
  P x_1522F3317;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1522F3317 = FREEREF(0);
  T2 = FUNFAB(fun_68,5,x_1522F3317,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_70) {
  P return_;
  P x_1520F3322;
  P x_1520F3321;
  P x_1520F3320;
  P x_1520F3319;
  P x_1521F3318;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1521_69,6);
  x_1521F3318 = T8;
  FUNINIT(x_1521F3318, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1520F3319 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1520F3319,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1520F3319,LITREF(lit_186),x_1521F3318);
    x_1520F3320 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1520F3320,x_1521F3318);
    x_1520F3321 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1520F3321,x_1521F3318);
    T4 = CALL1(1,VARREF(Ytail),x_1520F3320);
    x_1520F3322 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1520F3322,x_1521F3318);
  } else {
    T6 = CALL2(1,x_1521F3318,LITREF(lit_66),x_1520F3319);
  }
  T7 = CALL2(1,VARREF(YgooSconditionsYlist_handlers),VARREF(YgooSconditionsYLrestartG),VARREF(YgooSioSportYout));
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_x_1518_71) {
  P msg_,args_;
  P x_1519F3323;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1519F3323 = FREEREF(0);
  T2 = FUNFAB(fun_70,5,x_1519F3323,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_72) {
  P return_;
  P x_1517F3328;
  P x_1517F3327;
  P x_1517F3326;
  P x_1517F3325;
  P x_1518F3324;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1518_71,6);
  x_1518F3324 = T8;
  FUNINIT(x_1518F3324, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1517F3325 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1517F3325,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1517F3325,LITREF(lit_187),x_1518F3324);
    x_1517F3326 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1517F3326,x_1518F3324);
    x_1517F3327 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1517F3327,x_1518F3324);
    T4 = CALL1(1,VARREF(Ytail),x_1517F3326);
    x_1517F3328 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1517F3328,x_1518F3324);
  } else {
    T6 = CALL2(1,x_1518F3324,LITREF(lit_66),x_1517F3325);
  }
  T7 = CALL2(1,VARREF(YgooSconditionsYlist_handlers),VARREF(YgooSconditionsYLconditionG),VARREF(YgooSioSportYout));
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_x_1515_73) {
  P msg_,args_;
  P x_1516F3329;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1516F3329 = FREEREF(0);
  T2 = FUNFAB(fun_72,5,x_1516F3329,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_74) {
  P return_;
  P x_1514F3334;
  P x_1514F3333;
  P x_1514F3332;
  P x_1514F3331;
  P x_1515F3330;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1515_73,6);
  x_1515F3330 = T8;
  FUNINIT(x_1515F3330, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1514F3331 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1514F3331,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1514F3331,LITREF(lit_188),x_1515F3330);
    x_1514F3332 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1514F3332,x_1515F3330);
    x_1514F3333 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1514F3333,x_1515F3330);
    T4 = CALL1(1,VARREF(Ytail),x_1514F3332);
    x_1514F3334 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1514F3334,x_1515F3330);
  } else {
    T6 = CALL2(1,x_1515F3330,LITREF(lit_66),x_1514F3331);
  }
  T7 = CALL1(0,FREEREF(5),YPfalse);
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_x_1512_75) {
  P msg_,args_;
  P x_1513F3335;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1513F3335 = FREEREF(0);
  T2 = FUNFAB(fun_74,6,x_1513F3335,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(6),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_76) {
  P return_;
  P x_1511F3340;
  P x_1511F3339;
  P x_1511F3338;
  P x_1511F3337;
  P x_1512F3336;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1512_75,7);
  x_1512F3336 = T8;
  FUNINIT(x_1512F3336, 7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),return_);
  x_1511F3337 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1511F3337,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1511F3337,LITREF(lit_189),x_1512F3336);
    x_1511F3338 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1511F3338,x_1512F3336);
    x_1511F3339 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1511F3339,x_1512F3336);
    T4 = CALL1(1,VARREF(Ytail),x_1511F3338);
    x_1511F3340 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1511F3340,x_1512F3336);
  } else {
    T6 = CALL2(1,x_1512F3336,LITREF(lit_66),x_1511F3337);
  }
  T7 = CALL1(0,FREEREF(6),YPfalse);
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_x_1509_77) {
  P msg_,args_;
  P x_1510F3341;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1510F3341 = FREEREF(0);
  T2 = FUNFAB(fun_76,7,x_1510F3341,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(7),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_78) {
  P return_;
  P x_1508F3346;
  P x_1508F3345;
  P x_1508F3344;
  P x_1508F3343;
  P x_1509F3342;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1509_77,8);
  x_1509F3342 = T8;
  FUNINIT(x_1509F3342, 8,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6),return_);
  x_1508F3343 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1508F3343,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1508F3343,LITREF(lit_190),x_1509F3342);
    x_1508F3344 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1508F3344,x_1509F3342);
    x_1508F3345 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1508F3345,x_1509F3342);
    T4 = CALL1(1,VARREF(Ytail),x_1508F3344);
    x_1508F3346 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1508F3346,x_1509F3342);
  } else {
    T6 = CALL2(1,x_1509F3342,LITREF(lit_66),x_1508F3343);
  }
  T7 = CALL1(0,FREEREF(7),YPfalse);
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_79) {
  P x_1507F3348;
  P formF3347;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
  T0 = BOXVAL(FREEREF(0));
  if (T0 != YPfalse) {
    CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_131));
    T1 = CALL2(1,VARREF(YgooSconditionsYlist_handlers),VARREF(YgooSconditionsYLrestartG),VARREF(YgooSioSportYout));
    BOXVAL(FREEREF(1)) = T1;
    T2 = BOXVAL(FREEREF(0)) = YPfalse;
  } else {
  }
  T9 = BOXVAL(FREEREF(2));
  T8 = CALL3(1,VARREF(YevalStopYprompt_for_command_expression),T9,FREEREF(3),LITREF(lit_132));
  formF3347 = T8;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),formF3347);
  if (T4 != YPfalse) {
    T5 = CALL1(1,FREEREF(4),YPfalse);
    T3 = T5;
  } else {
    x_1507F3348 = formF3347;
    T7 = FUNFAB(fun_78,8,x_1507F3348,formF3347,FREEREF(2),FREEREF(3),FREEREF(1),FREEREF(5),FREEREF(6),FREEREF(4));
    T6 = with_exit(T7);
    T3 = T6;
  }
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_80) {
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  T2 = CALL1(1,VARREF(Ylst),FREEREF(0));
  T1 = CALL5(1,VARREF(Ynew),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_129),VARREF(Yhandler_info_arguments),T2);
  T3 = fun_49;
  T4 = FUNFAB(fun_50,1,FREEREF(1));
  T5 = FUNFAB(fun_79,7,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(0),FREEREF(5),FREEREF(6),FREEREF(7));
  T0 = XCALLN(1,YPwith_monitor,5,VARREF(YgooSconditionsYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_81) {
  P continue_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(continue_, 0);
  T1 = fun_47;
  T2 = FUNFAB(fun_48,5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),continue_);
  T3 = FUNFAB(fun_80,8,FREEREF(0),continue_,FREEREF(4),FREEREF(5),FREEREF(3),FREEREF(2),FREEREF(1),FREEREF(6));
  T0 = XCALLN(1,YPwith_monitor,5,VARREF(YgooSconditionsYLconditionG),VARREF(YgooSconditionsYDdefault_handler_info),T1,T2,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_82) {
  P blow_;
  P T0,T1;
LINK_STACK();
  ARG(blow_, 0);
  for (;;) {
  loop197:
    T0 = FUNFAB(fun_81,7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),blow_);
    with_exit(T0);
    goto loop197;
    break;
  }
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_PPtopPPtop_in_83) {
  P level_,top_,quit_,show_restartsQ_,ct_env_;
  P restartsF3349;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(level_, 0);
  ARG(top_, 1);
  ARG(quit_, 2);
  ARG(show_restartsQ_, 3);
  ARG(ct_env_, 4);
  show_restartsQ_ = BOXFAB(show_restartsQ_);
  ct_env_ = BOXFAB(ct_env_);
  restartsF3349 = YPfalse;
  restartsF3349 = BOXFAB(restartsF3349);
  T4 = FUNFAB(fun_82,6,level_,top_,quit_,ct_env_,show_restartsQ_,restartsF3349);
  T3 = with_exit(T4);
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_84) {
LINK_STACK();
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_85) {
  P c_,r_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_86) {
  P top_;
  P T0,T1;
LINK_STACK();
  ARG(top_, 0);
  T1 = CALL1(1,VARREF(YevalSastYruntime_environment),FREEREF(1));
  T0 = CALL5(1,VARREF(YevalStopYPPtopPPtop_in),YPint((P)0),top_,FREEREF(0),YPfalse,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_87) {
  P T0,T1;
LINK_STACK();
  for (;;) {
  loop198:
    T0 = FUNFAB(fun_86,2,FREEREF(0),FREEREF(1));
    with_exit(T0);
    goto loop198;
    break;
  }
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_88) {
  P quit_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(quit_, 0);
  T2 = CALL0(1,VARREF(Ylst));
  T1 = CALL5(1,VARREF(Ynew),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_194),VARREF(Yhandler_info_arguments),T2);
  T3 = fun_84;
  T4 = FUNFAB(fun_85,1,quit_);
  T5 = FUNFAB(fun_87,2,quit_,FREEREF(0));
  T0 = XCALLN(1,YPwith_monitor,5,VARREF(YgooSconditionsYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_top_89) {
  P modname_;
  P T0,T1;
LINK_STACK();
  ARG(modname_, 0);
  T1 = FUNFAB(fun_88,1,modname_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_90) {
  P T0;
LINK_STACK();
  T0 = CALL1(1,VARREF(YevalStopYtop),LITREF(lit_199));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStopYsave_image) {
  P image_name_;
  P T0,T1;
LINK_STACK();
  ARG(image_name_, 0);
  T1 = fun_90;
  T0 = CALL2(1,VARREF(Yunexec),image_name_,T1);
UNLINK_STACK();
  QRET(T0);
}

P YevalStopY___main_0___() {
  P tmpF3351;
  P modeF3350;
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
  P T176,T177;
DEFCREGS();
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
  T9 = VARREF_OR(YevalStopYparse_in,YPfalse);
  T10 = fun_parse_in_4;
  T8 = XCALL2(1,VARREF(YPdefine_method),T9,T10);
  VARSET(YevalStopYparse_in,T8);
  lit_12 = YPPsym((P)"parse");
  lit_13 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"modname"));
  T11 = YPsig(LITREF(lit_13),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_5 = YPmet(FUNCODEREF(fun_parse_5),LITREF(lit_12),T11,ENVNUL,PNUL,sloc(25));
  T13 = VARREF_OR(YevalStopYparse,YPfalse);
  T14 = fun_parse_5;
  T12 = XCALL2(1,VARREF(YPdefine_method),T13,T14);
  VARSET(YevalStopYparse,T12);
  lit_14 = YPPsym((P)"str-parse-in");
  lit_15 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"ct-env"));
  lit_16 = YPsb((P)"%=\n");
  T15 = YPsig(LITREF(lit_15),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_parse_in_6 = YPmet(FUNCODEREF(fun_str_parse_in_6),LITREF(lit_14),T15,ENVNUL,PNUL,sloc(28));
  T17 = VARREF_OR(YevalStopYstr_parse_in,YPfalse);
  T18 = fun_str_parse_in_6;
  T16 = XCALL2(1,VARREF(YPdefine_method),T17,T18);
  VARSET(YevalStopYstr_parse_in,T16);
  lit_17 = YPPsym((P)"str-parse");
  lit_18 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"modname"));
  T19 = YPsig(LITREF(lit_18),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_parse_7 = YPmet(FUNCODEREF(fun_str_parse_7),LITREF(lit_17),T19,ENVNUL,PNUL,sloc(31));
  T21 = VARREF_OR(YevalStopYstr_parse,YPfalse);
  T22 = fun_str_parse_7;
  T20 = XCALL2(1,VARREF(YPdefine_method),T21,T22);
  VARSET(YevalStopYstr_parse,T20);
  lit_19 = YPPsym((P)"%%bottom%%ast-run");
  lit_20 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"ct-env"));
  T23 = YPsig(LITREF(lit_20),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYPPbottomPPast_run = YPmet(FUNCODEREF(YevalStopYPPbottomPPast_run),LITREF(lit_19),T23,ENVNUL,PNUL,sloc(34));
  T24 = YevalStopYPPbottomPPast_run;
  VARSET(YevalStopYPPbottomPPast_run,T24);
  lit_21 = YPPsym((P)"%%bottom%%g2c-run");
  lit_22 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"ct-env"));
  T25 = YPsig(LITREF(lit_22),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYPPbottomPPg2c_run = YPmet(FUNCODEREF(YevalStopYPPbottomPPg2c_run),LITREF(lit_21),T25,ENVNUL,PNUL,sloc(37));
  T26 = YevalStopYPPbottomPPg2c_run;
  VARSET(YevalStopYPPbottomPPg2c_run,T26);
  lit_23 = YPPsym((P)"auto-run");
  lit_24 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"ct-env"));
  T27 = YPsig(LITREF(lit_24),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYauto_run = YPmet(FUNCODEREF(YevalStopYauto_run),LITREF(lit_23),T27,ENVNUL,PNUL,sloc(40));
  T28 = YevalStopYauto_run;
  VARSET(YevalStopYauto_run,T28);
  lit_25 = YPPsym((P)"auto-eval");
  lit_26 = YPPlist(2,YPPsym((P)"form"),YPPsym((P)"ct-env"));
  T29 = YPsig(LITREF(lit_26),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYauto_eval = YPmet(FUNCODEREF(YevalStopYauto_eval),LITREF(lit_25),T29,ENVNUL,PNUL,sloc(45));
  T30 = YevalStopYauto_eval;
  VARSET(YevalStopYauto_eval,T30);
  lit_27 = YPsb((P)"GOO_EVAL_MODE");
  lit_28 = YPsb((P)"ast");
  lit_29 = YPsb((P)"g2c");
  T36 = XCALL1(1,VARREF(YgooSsystemYos_val),LITREF(lit_27));
  modeF3350 = T36;
  T33 = XCALL2(1,VARREF(YgooScolsStabYcase_insensitive_string_equal),modeF3350,LITREF(lit_28));
  T32 = XCALL1(1,VARREF(Ynot),T33);
  if (T32 != YPfalse) {
    T35 = XCALL2(1,VARREF(YgooScolsStabYcase_insensitive_string_equal),modeF3350,LITREF(lit_29));
    tmpF3351 = T35;
    if (tmpF3351 != YPfalse) {
      T34 = tmpF3351;
    } else {
      T34 = YPtrue;
    }
    T31 = T34;
  } else {
    T31 = YPfalse;
  }
  VARSET(YevalStopYDg2c_evalQ,T31);
  if (VARREF(YevalStopYDg2c_evalQ) != YPfalse) {
    T37 = VARREF(YevalStopYauto_run);
  } else {
    T37 = VARREF(YevalStopYPPbottomPPast_run);
  }
  DYNDEFSET(YevalStopYrun,T37);
  lit_30 = YPPsym((P)"eval-in");
  lit_31 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"ct-env"));
  T38 = YPsig(LITREF(lit_31),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_in_12 = YPmet(FUNCODEREF(fun_eval_in_12),LITREF(lit_30),T38,ENVNUL,PNUL,sloc(57));
  T40 = VARREF_OR(YevalStopYeval_in,YPfalse);
  T41 = fun_eval_in_12;
  T39 = XCALL2(1,VARREF(YPdefine_method),T40,T41);
  VARSET(YevalStopYeval_in,T39);
  lit_32 = YPPsym((P)"eval");
  lit_33 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"modname"));
  T42 = YPsig(LITREF(lit_33),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_13 = YPmet(FUNCODEREF(fun_eval_13),LITREF(lit_32),T42,ENVNUL,PNUL,sloc(62));
  T44 = VARREF_OR(YevalSsyntaxYeval,YPfalse);
  T45 = fun_eval_13;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T45);
  VARSET(YevalSsyntaxYeval,T43);
  lit_34 = YPPsym((P)"str-eval-in");
  lit_35 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"ct-env"));
  T46 = YPsig(LITREF(lit_35),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_in_14 = YPmet(FUNCODEREF(fun_str_eval_in_14),LITREF(lit_34),T46,ENVNUL,PNUL,sloc(65));
  T48 = VARREF_OR(YevalStopYstr_eval_in,YPfalse);
  T49 = fun_str_eval_in_14;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T49);
  VARSET(YevalStopYstr_eval_in,T47);
  lit_36 = YPPsym((P)"str-eval");
  lit_37 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"modname"));
  T50 = YPsig(LITREF(lit_37),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_15 = YPmet(FUNCODEREF(fun_str_eval_15),LITREF(lit_36),T50,ENVNUL,PNUL,sloc(68));
  T52 = VARREF_OR(YevalStopYstr_eval,YPfalse);
  T53 = fun_str_eval_15;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T53);
  VARSET(YevalStopYstr_eval,T51);
  lit_38 = YPPsym((P)"compiled-file?");
  lit_39 = YPPlist(1,YPPsym((P)"name"));
  lit_40 = YPsb((P)".gooc");
  T54 = YPsig(LITREF(lit_39),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalStopYcompiled_fileQ = YPmet(FUNCODEREF(YevalStopYcompiled_fileQ),LITREF(lit_38),T54,ENVNUL,PNUL,sloc(71));
  T55 = YevalStopYcompiled_fileQ;
  VARSET(YevalStopYcompiled_fileQ,T55);
  lit_41 = YPPsym((P)"read-file");
  lit_42 = YPPlist(1,YPPsym((P)"filename"));
  T58 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T58,ENVNUL,PNUL,sloc(75));
  T57 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T57,ENVNUL,PNUL,sloc(75));
  T56 = YPsig(LITREF(lit_42),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_file_19 = YPmet(FUNCODEREF(fun_read_file_19),LITREF(lit_41),T56,ENVNUL,PNUL,sloc(74));
  T60 = VARREF_OR(YevalStopYread_file,YPfalse);
  T61 = fun_read_file_19;
  T59 = XCALL2(1,VARREF(YPdefine_method),T60,T61);
  VARSET(YevalStopYread_file,T59);
  lit_43 = YPPsym((P)"load-in");
  lit_44 = YPPlist(2,YPPsym((P)"filename"),YPPsym((P)"ct-env"));
  T62 = YPsig(LITREF(lit_44),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_in_20 = YPmet(FUNCODEREF(fun_load_in_20),LITREF(lit_43),T62,ENVNUL,PNUL,sloc(82));
  T64 = VARREF_OR(YevalSastYload_in,YPfalse);
  T65 = fun_load_in_20;
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T65);
  VARSET(YevalSastYload_in,T63);
  lit_45 = YPPsym((P)"load-file");
  lit_46 = YPPlist(2,YPPsym((P)"filename"),YPPsym((P)"modname"));
  T66 = YPsig(LITREF(lit_46),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_file_21 = YPmet(FUNCODEREF(fun_load_file_21),LITREF(lit_45),T66,ENVNUL,PNUL,sloc(92));
  T68 = VARREF_OR(YevalStopYload_file,YPfalse);
  T69 = fun_load_file_21;
  T67 = XCALL2(1,VARREF(YPdefine_method),T68,T69);
  VARSET(YevalStopYload_file,T67);
  lit_47 = YPPsym((P)"load");
  lit_48 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"modname"));
  T70 = YPsig(LITREF(lit_48),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_22 = YPmet(FUNCODEREF(fun_load_22),LITREF(lit_47),T70,ENVNUL,PNUL,sloc(95));
  T72 = VARREF_OR(YevalStopYload,YPfalse);
  T73 = fun_load_22;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T73);
  VARSET(YevalStopYload,T71);
  lit_49 = YPPsym((P)"prompt-for-command-expression");
  lit_50 = YPPlist(3,YPPsym((P)"env"),YPPsym((P)"level"),YPPsym((P)"prompt"));
  lit_51 = YPsb((P)"%s %=%s");
  lit_52 = YPPsym((P)"unquote");
  lit_53 = YPsb((P)"(");
  lit_54 = YPsb((P)")");
  lit_55 = YPsb((P)"cmd_");
  T74 = YPsig(LITREF(lit_50),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_prompt_for_command_expression_23 = YPmet(FUNCODEREF(fun_prompt_for_command_expression_23),LITREF(lit_49),T74,ENVNUL,PNUL,sloc(102));
  T76 = VARREF_OR(YevalStopYprompt_for_command_expression,YPfalse);
  T77 = fun_prompt_for_command_expression_23;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T77);
  VARSET(YevalStopYprompt_for_command_expression,T75);
  lit_56 = YPPsym((P)"print-result-expression");
  lit_57 = YPPlist(4,YPPsym((P)"env"),YPPsym((P)"level"),YPPsym((P)"label"),YPPsym((P)"result"));
  lit_58 = YPsb((P)"%s %=%s");
  T78 = YPsig(LITREF(lit_57),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_print_result_expression_24 = YPmet(FUNCODEREF(fun_print_result_expression_24),LITREF(lit_56),T78,ENVNUL,PNUL,sloc(112));
  T80 = VARREF_OR(YevalStopYprint_result_expression,YPfalse);
  T81 = fun_print_result_expression_24;
  T79 = XCALL2(1,VARREF(YPdefine_method),T80,T81);
  VARSET(YevalStopYprint_result_expression,T79);
  lit_59 = YPPsym((P)"do-stack-frames");
  lit_60 = YPPlist(1,YPPsym((P)"fun"));
  T82 = YPsig(LITREF(lit_60),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_stack_frames_25 = YPmet(FUNCODEREF(fun_do_stack_frames_25),LITREF(lit_59),T82,ENVNUL,PNUL,sloc(116));
  T84 = VARREF_OR(YevalStopYdo_stack_frames,YPfalse);
  T85 = fun_do_stack_frames_25;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T85);
  VARSET(YevalStopYdo_stack_frames,T83);
  lit_61 = YPPlist(1,YPPsym((P)"exp"));
  lit_62 = YPPlist(1,YPPsym((P)"return"));
  lit_63 = YPPsym((P)"x-1500");
  lit_64 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_65 = YPPsym((P)"for-frames");
  lit_66 = YPsb((P)"Match Pattern Failure");
  lit_67 = YPPsym((P)"let");
  lit_68 = Ynil;
  lit_69 = YPPsym((P)"fun");
  lit_70 = YPPsym((P)"_args");
  lit_71 = YPPsym((P)"def");
  lit_72 = YPPsym((P)"rev");
  lit_73 = YPPsym((P)"incf");
  T88 = YPsig(LITREF(lit_64),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1500_26 = YPmet(FUNCODEREF(fun_x_1500_26),LITREF(lit_63),T88,ENVNUL,PNUL,YPfalse);
  T87 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T87,ENVNUL,PNUL,YPfalse);
  T86 = YPsig(LITREF(lit_61),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T86,ENVNUL,PNUL,YPfalse);
  T89 = fun_28;
  YPmacro(YPPsym((P)"eval/top"),YPPsym((P)"for-frames"),T89);
  lit_74 = YPPlist(1,YPPsym((P)"exp"));
  lit_75 = YPPlist(1,YPPsym((P)"return"));
  lit_76 = YPPsym((P)"x-1504");
  lit_77 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_78 = YPPsym((P)"for-user-frames");
  lit_79 = YPPsym((P)"esc");
  lit_80 = YPPsym((P)"break");
  lit_81 = YPPsym((P)"_seen-top");
  lit_82 = YPPsym((P)"_top-num");
  lit_83 = YPPsym((P)"_num");
  lit_84 = YPPsym((P)"_name");
  lit_85 = YPPsym((P)"if");
  lit_86 = YPPsym((P)"fun-name");
  lit_87 = YPPsym((P)"as");
  lit_88 = YPPsym((P)"<str>");
  lit_89 = YPsb((P)"");
  lit_90 = YPPsym((P)"-");
  lit_91 = YPPsym((P)"when");
  lit_92 = YPPsym((P)"prefix?");
  lit_93 = YPsb((P)"%%bottom%%");
  lit_94 = YPsb((P)"%%top%%");
  lit_95 = YPPsym((P)"set");
  lit_96 = YPPsym((P)"num");
  T92 = YPsig(LITREF(lit_77),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1504_29 = YPmet(FUNCODEREF(fun_x_1504_29),LITREF(lit_76),T92,ENVNUL,PNUL,YPfalse);
  T91 = YPsig(LITREF(lit_75),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(LITREF(lit_74),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T90,ENVNUL,PNUL,YPfalse);
  T93 = fun_31;
  YPmacro(YPPsym((P)"eval/top"),YPPsym((P)"for-user-frames"),T93);
  lit_97 = YPPsym((P)"msg-src-loc");
  lit_98 = YPPlist(1,YPPsym((P)"f"));
  lit_99 = YPsb((P)" %s:%d");
  T94 = YPsig(LITREF(lit_98),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_msg_src_loc_32 = YPmet(FUNCODEREF(fun_msg_src_loc_32),LITREF(lit_97),T94,ENVNUL,PNUL,sloc(139));
  T96 = VARREF_OR(YevalStopYmsg_src_loc,YPfalse);
  T97 = fun_msg_src_loc_32;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T97);
  VARSET(YevalStopYmsg_src_loc,T95);
  lit_100 = YPPsym((P)"backtrace");
  lit_101 = YPPlist(1,YPPsym((P)"break"));
  lit_102 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"_args"));
  lit_103 = YPsb((P)"[%=] %= %=");
  T100 = YPsig(LITREF(lit_102),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T100,ENVNUL,PNUL,sloc(146));
  T99 = YPsig(LITREF(lit_101),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T99,ENVNUL,PNUL,sloc(146));
  T98 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_backtrace_35 = YPmet(FUNCODEREF(fun_backtrace_35),LITREF(lit_100),T98,ENVNUL,PNUL,sloc(145));
  T102 = VARREF_OR(YevalStopYbacktrace,YPfalse);
  T103 = fun_backtrace_35;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T103);
  VARSET(YevalStopYbacktrace,T101);
  lit_104 = YPPsym((P)"frame");
  lit_105 = YPPlist(1,YPPsym((P)"n"));
  lit_106 = YPPlist(1,YPPsym((P)"break"));
  lit_107 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"_args"));
  lit_108 = YPsb((P)"[%=] %= %=");
  T106 = YPsig(LITREF(lit_107),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T106,ENVNUL,PNUL,sloc(150));
  T105 = YPsig(LITREF(lit_106),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T105,ENVNUL,PNUL,sloc(150));
  T104 = YPsig(LITREF(lit_105),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_frame_38 = YPmet(FUNCODEREF(fun_frame_38),LITREF(lit_104),T104,ENVNUL,PNUL,sloc(149));
  T108 = VARREF_OR(YevalStopYframe,YPfalse);
  T109 = fun_frame_38;
  T107 = XCALL2(1,VARREF(YPdefine_method),T108,T109);
  VARSET(YevalStopYframe,T107);
  lit_109 = YPPsym((P)"frame-var");
  lit_110 = YPPlist(2,YPPsym((P)"n"),YPPsym((P)"name"));
  lit_111 = YPPlist(1,YPPsym((P)"ret"));
  lit_112 = YPPlist(1,YPPsym((P)"break"));
  lit_113 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"_args"));
  T113 = YPsig(LITREF(lit_113),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T113,ENVNUL,PNUL,sloc(156));
  T112 = YPsig(LITREF(lit_112),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T112,ENVNUL,PNUL,sloc(156));
  T111 = YPsig(LITREF(lit_111),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T111,ENVNUL,PNUL,sloc(155));
  T110 = YPsig(LITREF(lit_110),YPPlist(2,VARREF(YLintG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_frame_var_42 = YPmet(FUNCODEREF(fun_frame_var_42),LITREF(lit_109),T110,ENVNUL,PNUL,sloc(154));
  T115 = VARREF_OR(YevalStopYframe_var,YPfalse);
  T116 = fun_frame_var_42;
  T114 = XCALL2(1,VARREF(YPdefine_method),T115,T116);
  VARSET(YevalStopYframe_var,T114);
  lit_114 = YPPsym((P)"bt");
  lit_115 = YPPlist(1,YPPsym((P)"break"));
  lit_116 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"_args"));
  lit_117 = YPsb((P)"[%=] %=");
  T119 = YPsig(LITREF(lit_116),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T119,ENVNUL,PNUL,sloc(163));
  T118 = YPsig(LITREF(lit_115),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T118,ENVNUL,PNUL,sloc(163));
  T117 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_bt_45 = YPmet(FUNCODEREF(fun_bt_45),LITREF(lit_114),T117,ENVNUL,PNUL,sloc(162));
  T121 = VARREF_OR(YevalStopYbt,YPfalse);
  T122 = fun_bt_45;
  T120 = XCALL2(1,VARREF(YPdefine_method),T121,T122);
  VARSET(YevalStopYbt,T120);
  lit_118 = YPPsym((P)"do-restart");
  lit_119 = YPPlist(2,YPPsym((P)"restarts"),YPPsym((P)"n"));
  lit_120 = YPsb((P)"No restarts available.\n");
  lit_121 = YPsb((P)"No restart #%d.\n");
  T123 = YPsig(LITREF(lit_119),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYdo_restart = YPmet(FUNCODEREF(YevalStopYdo_restart),LITREF(lit_118),T123,ENVNUL,PNUL,sloc(166));
  T124 = YevalStopYdo_restart;
  VARSET(YevalStopYdo_restart,T124);
  VARSET(YevalStopYD,YPfalse);
  VARSET(YevalStopYDD,YPfalse);
  VARSET(YevalStopYDDD,YPfalse);
  lit_122 = YPPsym((P)"%%top%%top-in");
  lit_123 = YPPlist(5,YPPsym((P)"level"),YPPsym((P)"top"),YPPsym((P)"quit"),YPPsym((P)"show-restarts?"),YPPsym((P)"ct-env"));
  lit_124 = YPPlist(1,YPPsym((P)"blow"));
  lit_125 = YPPlist(1,YPPsym((P)"continue"));
  lit_126 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  lit_127 = YPsb((P)"BREAK");
  lit_128 = YPsb((P)"ERROR: %s");
  lit_129 = YPsb((P)"Return to interpreter level %d");
  lit_130 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  lit_131 = YPsb((P)"Type \",restart N\" to restart execution:\n");
  lit_132 = YPsb((P)"<= ");
  lit_133 = YPPlist(1,YPPsym((P)"return"));
  lit_134 = YPPsym((P)"x-1509");
  lit_135 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_136 = YPPlist(1,YPPsym((P)"return"));
  lit_137 = YPPsym((P)"x-1512");
  lit_138 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_139 = YPPlist(1,YPPsym((P)"return"));
  lit_140 = YPPsym((P)"x-1515");
  lit_141 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_142 = YPPlist(1,YPPsym((P)"return"));
  lit_143 = YPPsym((P)"x-1518");
  lit_144 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_145 = YPPlist(1,YPPsym((P)"return"));
  lit_146 = YPPsym((P)"x-1521");
  lit_147 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_148 = YPPlist(1,YPPsym((P)"return"));
  lit_149 = YPPsym((P)"x-1524");
  lit_150 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_151 = YPPlist(1,YPPsym((P)"return"));
  lit_152 = YPPsym((P)"x-1527");
  lit_153 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_154 = YPPlist(1,YPPsym((P)"return"));
  lit_155 = YPPsym((P)"x-1530");
  lit_156 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_157 = YPPlist(1,YPPsym((P)"return"));
  lit_158 = YPPsym((P)"x-1533");
  lit_159 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_160 = YPPlist(1,YPPsym((P)"return"));
  lit_161 = YPPsym((P)"x-1536");
  lit_162 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_163 = YPPlist(1,YPPsym((P)"return"));
  lit_164 = YPPsym((P)"x-1539");
  lit_165 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_166 = YPPlist(1,YPPsym((P)"return"));
  lit_167 = YPPsym((P)"x-1542");
  lit_168 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_169 = YPPlist(1,YPPsym((P)"return"));
  lit_170 = YPPsym((P)"x-1545");
  lit_171 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_172 = YPPlist(1,YPPsym((P)"return"));
  lit_173 = YPPsym((P)"x-1548");
  lit_174 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_175 = YPsb((P)"=> ");
  lit_176 = YPPsym((P)"cmd_frame-var");
  lit_177 = YPsb((P)"=> ");
  lit_178 = YPPsym((P)"cmd_frame");
  lit_179 = YPPsym((P)"cmd_backtrace");
  lit_180 = YPPsym((P)"cmd_bt");
  lit_181 = YPPsym((P)"cmd_auto-eval");
  lit_182 = YPPsym((P)"cmd_ast-eval");
  lit_183 = YPPsym((P)"cmd_g2c-eval");
  lit_184 = YPPsym((P)"cmd_in");
  lit_185 = YPPsym((P)"cmd_restart");
  lit_186 = YPPsym((P)"cmd_restarts");
  lit_187 = YPPsym((P)"cmd_handlers");
  lit_188 = YPPsym((P)"cmd_top");
  lit_189 = YPPsym((P)"cmd_up");
  lit_190 = YPPsym((P)"cmd_quit");
  T161 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(LITREF(lit_126),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T160,ENVNUL,PNUL,sloc(185));
  T159 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(LITREF(lit_130),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T158,ENVNUL,PNUL,sloc(196));
  T157 = YPsig(LITREF(lit_174),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1548_51 = YPmet(FUNCODEREF(fun_x_1548_51),LITREF(lit_173),T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(LITREF(lit_172),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T156,ENVNUL,PNUL,YPfalse);
  T155 = YPsig(LITREF(lit_171),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1545_53 = YPmet(FUNCODEREF(fun_x_1545_53),LITREF(lit_170),T155,ENVNUL,PNUL,YPfalse);
  T154 = YPsig(LITREF(lit_169),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_54 = YPmet(FUNCODEREF(fun_54),YPfalse,T154,ENVNUL,PNUL,YPfalse);
  T153 = YPsig(LITREF(lit_168),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1542_55 = YPmet(FUNCODEREF(fun_x_1542_55),LITREF(lit_167),T153,ENVNUL,PNUL,YPfalse);
  T152 = YPsig(LITREF(lit_166),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_56 = YPmet(FUNCODEREF(fun_56),YPfalse,T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(LITREF(lit_165),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1539_57 = YPmet(FUNCODEREF(fun_x_1539_57),LITREF(lit_164),T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(LITREF(lit_163),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_58 = YPmet(FUNCODEREF(fun_58),YPfalse,T150,ENVNUL,PNUL,YPfalse);
  T149 = YPsig(LITREF(lit_162),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1536_59 = YPmet(FUNCODEREF(fun_x_1536_59),LITREF(lit_161),T149,ENVNUL,PNUL,YPfalse);
  T148 = YPsig(LITREF(lit_160),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_60 = YPmet(FUNCODEREF(fun_60),YPfalse,T148,ENVNUL,PNUL,YPfalse);
  T147 = YPsig(LITREF(lit_159),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1533_61 = YPmet(FUNCODEREF(fun_x_1533_61),LITREF(lit_158),T147,ENVNUL,PNUL,YPfalse);
  T146 = YPsig(LITREF(lit_157),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_62 = YPmet(FUNCODEREF(fun_62),YPfalse,T146,ENVNUL,PNUL,YPfalse);
  T145 = YPsig(LITREF(lit_156),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1530_63 = YPmet(FUNCODEREF(fun_x_1530_63),LITREF(lit_155),T145,ENVNUL,PNUL,YPfalse);
  T144 = YPsig(LITREF(lit_154),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_64 = YPmet(FUNCODEREF(fun_64),YPfalse,T144,ENVNUL,PNUL,YPfalse);
  T143 = YPsig(LITREF(lit_153),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1527_65 = YPmet(FUNCODEREF(fun_x_1527_65),LITREF(lit_152),T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(LITREF(lit_151),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_66 = YPmet(FUNCODEREF(fun_66),YPfalse,T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(LITREF(lit_150),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1524_67 = YPmet(FUNCODEREF(fun_x_1524_67),LITREF(lit_149),T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(LITREF(lit_148),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_68 = YPmet(FUNCODEREF(fun_68),YPfalse,T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(LITREF(lit_147),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1521_69 = YPmet(FUNCODEREF(fun_x_1521_69),LITREF(lit_146),T139,ENVNUL,PNUL,YPfalse);
  T138 = YPsig(LITREF(lit_145),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T138,ENVNUL,PNUL,YPfalse);
  T137 = YPsig(LITREF(lit_144),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1518_71 = YPmet(FUNCODEREF(fun_x_1518_71),LITREF(lit_143),T137,ENVNUL,PNUL,YPfalse);
  T136 = YPsig(LITREF(lit_142),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T136,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(LITREF(lit_141),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1515_73 = YPmet(FUNCODEREF(fun_x_1515_73),LITREF(lit_140),T135,ENVNUL,PNUL,YPfalse);
  T134 = YPsig(LITREF(lit_139),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_74 = YPmet(FUNCODEREF(fun_74),YPfalse,T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(LITREF(lit_138),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1512_75 = YPmet(FUNCODEREF(fun_x_1512_75),LITREF(lit_137),T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(LITREF(lit_136),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T132,ENVNUL,PNUL,YPfalse);
  T131 = YPsig(LITREF(lit_135),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1509_77 = YPmet(FUNCODEREF(fun_x_1509_77),LITREF(lit_134),T131,ENVNUL,PNUL,YPfalse);
  T130 = YPsig(LITREF(lit_133),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_78 = YPmet(FUNCODEREF(fun_78),YPfalse,T130,ENVNUL,PNUL,YPfalse);
  T129 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T129,ENVNUL,PNUL,sloc(197));
  T128 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T128,ENVNUL,PNUL,sloc(240));
  T127 = YPsig(LITREF(lit_125),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T127,ENVNUL,PNUL,sloc(183));
  T126 = YPsig(LITREF(lit_124),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T126,ENVNUL,PNUL,sloc(181));
  T125 = YPsig(LITREF(lit_123),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_PPtopPPtop_in_83 = YPmet(FUNCODEREF(fun_PPtopPPtop_in_83),LITREF(lit_122),T125,ENVNUL,PNUL,sloc(179));
  T163 = VARREF_OR(YevalStopYPPtopPPtop_in,YPfalse);
  T164 = fun_PPtopPPtop_in_83;
  T162 = XCALL2(1,VARREF(YPdefine_method),T163,T164);
  VARSET(YevalStopYPPtopPPtop_in,T162);
  lit_191 = YPPsym((P)"top");
  lit_192 = YPPlist(1,YPPsym((P)"modname"));
  lit_193 = YPPlist(1,YPPsym((P)"quit"));
  lit_194 = YPsb((P)"Exit the top-level interpreter");
  lit_195 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  lit_196 = YPPlist(1,YPPsym((P)"top"));
  T170 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_84 = YPmet(FUNCODEREF(fun_84),YPfalse,T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(LITREF(lit_195),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T169,ENVNUL,PNUL,sloc(247));
  T168 = YPsig(LITREF(lit_196),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_86 = YPmet(FUNCODEREF(fun_86),YPfalse,T168,ENVNUL,PNUL,sloc(249));
  T167 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T167,ENVNUL,PNUL,sloc(251));
  T166 = YPsig(LITREF(lit_193),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T166,ENVNUL,PNUL,sloc(244));
  T165 = YPsig(LITREF(lit_192),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_top_89 = YPmet(FUNCODEREF(fun_top_89),LITREF(lit_191),T165,ENVNUL,PNUL,sloc(243));
  T172 = VARREF_OR(YevalStopYtop,YPfalse);
  T173 = fun_top_89;
  T171 = XCALL2(1,VARREF(YPdefine_method),T172,T173);
  VARSET(YevalStopYtop,T171);
  lit_197 = YPPsym((P)"save-image");
  lit_198 = YPPlist(1,YPPsym((P)"image-name"));
  lit_199 = YPPsym((P)"goo/user");
  T175 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_90 = YPmet(FUNCODEREF(fun_90),YPfalse,T175,ENVNUL,PNUL,sloc(254));
  T174 = YPsig(LITREF(lit_198),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalStopYsave_image = YPmet(FUNCODEREF(YevalStopYsave_image),LITREF(lit_197),T174,ENVNUL,PNUL,sloc(253));
  T176 = YevalStopYsave_image;
  VARSET(YevalStopYsave_image,T176);
  T177 = YPfalse;
  return T177;
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
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSmag;

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
  {"%vpc", &module_info_gooSboot, NULL},
  {"components-basename", &module_info_gooSsystem, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"sexpr-operands", &module_info_evalSsyntax, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"binding-info-setter", &module_info_evalSast, NULL},
  {"module-uses-c-files", &module_info_evalSast, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"$goo-boot-module-name", &module_info_evalSast, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"sexpr-prop-init", &module_info_evalSsyntax, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"$sexpr-set-tag", &module_info_evalSsyntax, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"sexpr-prop-owner", &module_info_evalSsyntax, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"sexpr-unwind-protect-protected-form", &module_info_evalSsyntax, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"sexpr-block-body", &module_info_evalSsyntax, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"$sexpr-define-class-tag", &module_info_evalSsyntax, NULL},
  {"function-source-setter", &module_info_evalSast, NULL},
  {"sexpr-expand-backquote", &module_info_evalSsyntax, NULL},
  {"sexpr-function-definition-value", &module_info_evalSsyntax, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"sexpr-method-signature", &module_info_evalSsyntax, NULL},
  {"%binding-value-of", &module_info_evalSast_eval, NULL},
  {"extract-things!", &module_info_evalSast_linearize, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"<bound?>", &module_info_evalSast, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"program-type-setter", &module_info_evalSast, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"application-known?", &module_info_evalSast, NULL},
  {"curry", &module_info_gooSruntime, NULL},
  {"function-value", &module_info_evalSast, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"<dynamic-assignment>", &module_info_evalSast, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"sexpr-definition-value", &module_info_evalSsyntax, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"<box-creation>", &module_info_evalSast_linearize, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"function-temporaries", &module_info_evalSast, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"gather-temporaries!", &module_info_evalSast_linearize, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"find-goo-file-in-path", &module_info_gooSsystem, NULL},
  {"function-ref-count", &module_info_evalSast, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"program-bindings", &module_info_evalSast_linearize, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"fix-let-body-setter", &module_info_evalSast, NULL},
  {"module-mangled-name-setter", &module_info_evalSast, NULL},
  {"reference-self?", &module_info_evalSast_linearize, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"<pathname-error>", &module_info_gooSsystem, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"hierarchical-components", &module_info_gooSsystem, NULL},
  {"module-target-environment", &module_info_evalSast, NULL},
  {"signature-value", &module_info_evalSast, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"signature-arity-setter", &module_info_evalSast, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"add-goo-root-path", &module_info_gooSsystem, NULL},
  {"<assignment>", &module_info_evalSast, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"file-exists?", &module_info_gooSsystem, NULL},
  {"c-filename", &module_info_gooSsystem, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"binding-inferred-type", &module_info_evalSast, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"*exe-extension*", &module_info_gooSsystem, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"<static-global-environment>", &module_info_evalSast, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"<ast-primitive-definition>", &module_info_evalSast, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"<closure-creation>", &module_info_evalSast_linearize, NULL},
  {"binding-mangled-name", &module_info_evalSast, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"<application>", &module_info_evalSast, NULL},
  {"$sexpr-define-syntax-tag", &module_info_evalSsyntax, NULL},
  {"module-loader-module-type", &module_info_evalSast, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"function-binding", &module_info_evalSast, NULL},
  {"do-module-loader-modules", &module_info_evalSast, NULL},
  {"<module-binding>", &module_info_evalSast, NULL},
  {"<functions>", &module_info_evalSast, NULL},
  {"reference-called-function?", &module_info_evalSast, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"os-val-setter", &module_info_gooSsystem, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"process-closed-application", &module_info_evalSast, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"binding-dynamic-extent?", &module_info_evalSast, NULL},
  {"<runtime-reference>", &module_info_evalSast, NULL},
  {"analyze-calls", &module_info_evalSast_linearize, NULL},
  {"binding-value", &module_info_evalSast, NULL},
  {"form-program", &module_info_evalSast_linearize, NULL},
  {"assignment-form", &module_info_evalSast, NULL},
  {"box-reference", &module_info_evalSast_linearize, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"binding-mutable?", &module_info_evalSast, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"locals-body-setter", &module_info_evalSast, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"%binding-value-of-setter", &module_info_evalSast_eval, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"probe-directory", &module_info_gooSsystem, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"<free-reference>", &module_info_evalSast_linearize, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"binding-native-to?", &module_info_evalSast, NULL},
  {"fix-let-arguments-setter", &module_info_evalSast, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"*c-extension*", &module_info_gooSsystem, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"%binding-value", &module_info_evalSast_eval, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"environment-module", &module_info_evalSast, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"monitor-test", &module_info_evalSast, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"add-goo-personal-root-path", &module_info_gooSsystem, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"components-last", &module_info_gooSsystem, NULL},
  {"application-arguments", &module_info_evalSast, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"ast-walk", &module_info_evalSast, NULL},
  {"fix-let-types-setter", &module_info_evalSast, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"<low-let>", &module_info_evalSast, NULL},
  {"%binding-bound?", &module_info_evalSast_eval, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"$sexpr-isa-tag", &module_info_evalSsyntax, NULL},
  {"<binding>", &module_info_evalSast, NULL},
  {"<bind-exit>", &module_info_evalSast, NULL},
  {"<module-binding-reference>", &module_info_evalSast, NULL},
  {"sexpr-assignment-variable", &module_info_evalSsyntax, NULL},
  {"init-environment-for-eval", &module_info_evalSast, NULL},
  {"sexpr-make-method", &module_info_evalSsyntax, NULL},
  {"$sexpr-if-tag", &module_info_evalSsyntax, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"sexpr-fab-setter-name", &module_info_evalSsyntax, NULL},
  {"unconstrained-type?", &module_info_evalSast_linearize, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"function-nary?", &module_info_evalSast, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"$sexpr-let-tag", &module_info_evalSsyntax, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"$sexpr-quasiquote-tag", &module_info_evalSsyntax, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"<local-assignment>", &module_info_evalSast, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"program-form", &module_info_evalSast_linearize, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"invoke-handler-interactively", &module_info_gooSconditions, NULL},
  {"sexpr-if-else", &module_info_evalSsyntax, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"sexpr-def?", &module_info_evalSsyntax, NULL},
  {"monitor-handler", &module_info_evalSast, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"<programs>", &module_info_evalSast, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"module-uses-c-includes", &module_info_evalSast, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"binding-global-box-setter", &module_info_evalSast, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"so-load", &module_info_gooSsystem, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"function-frame-len-setter", &module_info_evalSast, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"<global-box>", &module_info_evalSast, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"objectify-quotation", &module_info_evalSast, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"sexpr-variable-type", &module_info_evalSsyntax, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"sexpr-syntax-if-value", &module_info_evalSsyntax, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"as-lst", &module_info_evalSast, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"%binding-value-or", &module_info_evalSast_eval, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<arguments>", &module_info_evalSast, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"<ast-primitive>", &module_info_evalSast, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"sexpr-operator", &module_info_evalSsyntax, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"runtime-environment", &module_info_evalSast, NULL},
  {"binding-info", &module_info_evalSast, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"sexpr-prop-init?", &module_info_evalSsyntax, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"binding-locative", &module_info_evalSast, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"<fab-list>", &module_info_evalSast, NULL},
  {"sexpr-prop-name", &module_info_evalSsyntax, NULL},
  {"$sexpr-define-method-tag", &module_info_evalSsyntax, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"sexpr-block-name", &module_info_evalSsyntax, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"function-source", &module_info_evalSast, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"goo-filename", &module_info_gooSsystem, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"lift!", &module_info_evalSast_linearize, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSruntime, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"rcurry", &module_info_gooSruntime, NULL},
  {"do-named-static-global-bindings", &module_info_evalSast, NULL},
  {"init-ast", &module_info_evalSast, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"$sexpr-prop-tag", &module_info_evalSsyntax, NULL},
  {"<dynamic-definition>", &module_info_evalSast, NULL},
  {"$sexpr-define-function-tag", &module_info_evalSsyntax, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"fix-let-bindings", &module_info_evalSast, NULL},
  {"fix-let-bindings-setter", &module_info_evalSast, NULL},
  {"sexpr-forward-primitive?", &module_info_evalSsyntax, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"function-index-setter", &module_info_evalSast, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"signature-arity", &module_info_evalSast, NULL},
  {"binding-global-box", &module_info_evalSast, NULL},
  {"<fix-let>", &module_info_evalSast, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"default-handler-description", &module_info_gooSconditions, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"fix-let-body", &module_info_evalSast, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"sexpr-loc-raw-body", &module_info_evalSsyntax, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"sexpr-unquote-splicing?", &module_info_evalSsyntax, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"module-binding", &module_info_evalSast, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"app-filename", &module_info_gooSruntime, NULL},
  {"<module>", &module_info_evalSast, NULL},
  {"probe-module", &module_info_evalSast, NULL},
  {"module-mangled-name", &module_info_evalSast, NULL},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_evalSsyntax, NULL},
  {"application-tail?", &module_info_evalSast, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"report-undefined-global-bindings", &module_info_evalSast, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"eval", &module_info_evalSsyntax, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"file-mtime", &module_info_gooSsystem, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"constant-index-setter", &module_info_evalSast, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"<raw-constant>", &module_info_evalSast, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"os-val", &module_info_gooSsystem, NULL},
  {"$sexpr-unwind-protect-tag", &module_info_evalSsyntax, NULL},
  {"sexpr-signature-value", &module_info_evalSsyntax, NULL},
  {"program-definitions", &module_info_evalSast_linearize, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"*goo-root*", &module_info_gooSsystem, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"<box-write>", &module_info_evalSast_linearize, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"<ast-macro-definition>", &module_info_evalSast, NULL},
  {"signature-specs-setter", &module_info_evalSast, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"objectify-signature", &module_info_evalSast, NULL},
  {"constant-index", &module_info_evalSast, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"loop-body", &module_info_evalSast, NULL},
  {"describe-handler", &module_info_gooSconditions, NULL},
  {"loop-continue", &module_info_evalSast, NULL},
  {"insert-box!", &module_info_evalSast_linearize, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"<sequential>", &module_info_evalSast, NULL},
  {"<static-module-binding-reference>", &module_info_evalSast, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"<top-level-form>", &module_info_evalSast_linearize, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"*goo-personal-root*", &module_info_gooSsystem, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"locals-bindings-setter", &module_info_evalSast, NULL},
  {"closurize-main!", &module_info_evalSast_linearize, NULL},
  {"$sexpr-define-tag", &module_info_evalSsyntax, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"signature-bindings-setter", &module_info_evalSast, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"fix-let-arguments", &module_info_evalSast, NULL},
  {"sexpr-isa-init-props", &module_info_evalSsyntax, NULL},
  {"<immediate-constant>", &module_info_evalSast, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"loop-bindings-setter", &module_info_evalSast, NULL},
  {"loop-bindings", &module_info_evalSast, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"module-syntax-environment", &module_info_evalSast, NULL},
  {"closure-creation-index", &module_info_evalSast_linearize, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"<alternative>", &module_info_evalSast, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"fix-let-types", &module_info_evalSast, NULL},
  {"module-name", &module_info_evalSast, NULL},
  {"ast-contains-fun?", &module_info_evalSast_linearize, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"module-mangled-string-name", &module_info_evalSast, NULL},
  {"choose-handler", &module_info_gooSconditions, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"monitor-main-thunk", &module_info_evalSast, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"<box-read>", &module_info_evalSast_linearize, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"$sexpr-quote-tag", &module_info_evalSsyntax, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"loc-val-setter", &module_info_gooSruntime, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"sexpr-iterate->loc", &module_info_evalSsyntax, NULL},
  {"objectify-with-subtransaction", &module_info_evalSast, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"<dynamic-reference>", &module_info_evalSast, NULL},
  {"closure-creation-free", &module_info_evalSast_linearize, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"free-environment", &module_info_evalSast, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"function-frame-len", &module_info_evalSast, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"$sexpr-def-tag", &module_info_evalSsyntax, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"os-name", &module_info_gooSsystem, NULL},
  {"list-handlers", &module_info_gooSconditions, NULL},
  {"sexpr-if-then", &module_info_evalSsyntax, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"application-binding", &module_info_evalSast, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"*obj-extension*", &module_info_gooSsystem, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"form-definitions", &module_info_evalSast_linearize, NULL},
  {"label-components", &module_info_gooSsystem, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"load-module", &module_info_evalSast, NULL},
  {"function-loop", &module_info_evalSast, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"function-bindings", &module_info_evalSast, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"install-initial-bindings", &module_info_evalSast, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"<ast-method>", &module_info_evalSast, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"sexpr-syntax-if-else", &module_info_evalSsyntax, NULL},
  {"<regular-application>", &module_info_evalSast, NULL},
  {"function-registers", &module_info_evalSast, NULL},
  {"exe-filename", &module_info_gooSsystem, NULL},
  {"signature-nary?", &module_info_evalSast, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"function-registers-setter", &module_info_evalSast, NULL},
  {"<directory-error>", &module_info_gooSsystem, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"sexpr-make-macro-function", &module_info_evalSsyntax, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"<ast-function>", &module_info_evalSast, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"sexpr-unquote?", &module_info_evalSsyntax, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"sexpr-function-definition-adjectives", &module_info_evalSsyntax, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"sexpr-syntax-definition-value", &module_info_evalSsyntax, NULL},
  {"sexpr-prop-type", &module_info_evalSsyntax, NULL},
  {"loc-val", &module_info_gooSruntime, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"function-debug-name-setter", &module_info_evalSast, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"function-data-refs-setter", &module_info_evalSast, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"function-signature-setter", &module_info_evalSast, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"find-binding", &module_info_evalSast, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"pathname-to-components", &module_info_gooSsystem, NULL},
  {"sexpr-variable?", &module_info_evalSsyntax, NULL},
  {"<ast-generic>", &module_info_evalSast, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"<local-reference>", &module_info_evalSast, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"signature-names-setter", &module_info_evalSast, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"function-index", &module_info_evalSast, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"signature-nary?-setter", &module_info_evalSast, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"program-quotations", &module_info_evalSast_linearize, NULL},
  {"box-form", &module_info_evalSast_linearize, NULL},
  {"%compile", &module_info_gooSsystem, NULL},
  {"sexpr-variable-name", &module_info_evalSsyntax, NULL},
  {"loop-continue-setter", &module_info_evalSast, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"binding-index-setter", &module_info_evalSast, NULL},
  {"reference-frame-offset", &module_info_evalSast, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"%binding-bound-of?", &module_info_evalSast_eval, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"reference-binding", &module_info_evalSast, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"*path-separator*", &module_info_gooSsystem, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"loop-body-setter", &module_info_evalSast, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSast, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"<constant>", &module_info_evalSast, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"<free-environment>", &module_info_evalSast, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"<compile-time>", &module_info_evalSast, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"program-type", &module_info_evalSast, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"<definition>", &module_info_evalSast, NULL},
  {"program-register", &module_info_evalSast, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"set-module-environments", &module_info_evalSast, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"<ast-signature>", &module_info_evalSast, NULL},
  {"file-copy", &module_info_gooSsystem, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"add-src-path", &module_info_gooSsystem, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"reference-offset", &module_info_evalSast_linearize, NULL},
  {"<ast-embodied-function>", &module_info_evalSast, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"signature-specs", &module_info_evalSast, NULL},
  {"program-line", &module_info_evalSast, NULL},
  {"constant-value", &module_info_evalSast, NULL},
  {"<locals>", &module_info_evalSast, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"environment-uses-modules", &module_info_evalSast, NULL},
  {"compose", &module_info_gooSruntime, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"sexpr-text-of-quotation", &module_info_evalSsyntax, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"binding-index", &module_info_evalSast, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"compile-time-program", &module_info_evalSast, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"<runtime-assignment>", &module_info_evalSast, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"assignment-form-setter", &module_info_evalSast, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"signature-bindings", &module_info_evalSast, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"ast-walk!", &module_info_evalSast, NULL},
  {"<global-assignment>", &module_info_evalSast, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"obj-filename", &module_info_gooSsystem, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"assignment-binding", &module_info_evalSast, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"module-name-to-relpath", &module_info_evalSast, NULL},
  {"<global-reference>", &module_info_evalSast, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"parent-directory", &module_info_gooSsystem, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"form-quotations", &module_info_evalSast_linearize, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"function-free-setter", &module_info_evalSast, NULL},
  {"sexpr-function-body", &module_info_evalSsyntax, NULL},
  {"<computed-program>", &module_info_evalSast, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"$sexpr-define-generic-tag", &module_info_evalSsyntax, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"bound?-reference", &module_info_evalSast, NULL},
  {"sexpr-make-begin", &module_info_evalSsyntax, NULL},
  {"bound?-default", &module_info_evalSast, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"*goo-extension*", &module_info_gooSsystem, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"signature-names", &module_info_evalSast, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"module-exports", &module_info_evalSast, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"time", &module_info_gooSsystem, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"register-allocate!", &module_info_evalSast_linearize, NULL},
  {"%binding-value-or-of", &module_info_evalSast_eval, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"*module-search-path*", &module_info_gooSsystem, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"<program>", &module_info_evalSast, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"sexpr-define-class-parents", &module_info_evalSsyntax, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"<real-reference>", &module_info_evalSast, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"sexpr-make-anonymous-method", &module_info_evalSsyntax, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"sexpr-if-test", &module_info_evalSsyntax, NULL},
  {"find-goo-file-at", &module_info_gooSsystem, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"binding-type-setter", &module_info_evalSast, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"function-signature", &module_info_evalSast, NULL},
  {"flatten-seqs", &module_info_evalSast_linearize, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"sexpr-definition-variable", &module_info_evalSsyntax, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"locals-bindings", &module_info_evalSast, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"$sexpr-bind-exit-tag", &module_info_evalSsyntax, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"<loop>", &module_info_evalSast, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"binding-module", &module_info_evalSast, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"*current-handlers*", &module_info_gooSconditions, NULL},
  {"sequentialize", &module_info_evalSast, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"identity", &module_info_gooSruntime, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"sexpr-syntax-if-then", &module_info_evalSsyntax, NULL},
  {"<predefined-application>", &module_info_evalSast, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"function-body-setter", &module_info_evalSast, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"binding-locative-setter", &module_info_evalSast, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"alternative-condition", &module_info_evalSast, NULL},
  {"%binding-value-setter", &module_info_evalSast_eval, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"<macro-reference>", &module_info_evalSast, NULL},
  {"req-sig-specs", &module_info_evalSast, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"fab-g2c-module", &module_info_evalSast, NULL},
  {"sexpr-function-definition-variable", &module_info_evalSsyntax, NULL},
  {"sexpr-fab-getter", &module_info_evalSsyntax, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"sexpr-syntax-definition-variable", &module_info_evalSsyntax, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"create-directory", &module_info_gooSsystem, NULL},
  {"*register-passive?*", &module_info_evalSast_linearize, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"process-id", &module_info_gooSsystem, NULL},
  {"sexpr-def-value", &module_info_evalSsyntax, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"function-loop-setter", &module_info_evalSast, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"add-build-path", &module_info_gooSsystem, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"function-data-refs", &module_info_evalSast, NULL},
  {"application-known?-setter", &module_info_evalSast, NULL},
  {"sexpr-monitor-expand", &module_info_evalSsyntax, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"components-to-pathname", &module_info_gooSsystem, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"binding-module-name", &module_info_evalSast, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"unwind-protect-protected-thunk", &module_info_evalSast, NULL},
  {"load-in", &module_info_evalSast, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"*goo-build-root*", &module_info_gooSsystem, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"function-temporaries-setter", &module_info_evalSast, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"$sexpr-iterate-tag", &module_info_evalSsyntax, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"monitor-info", &module_info_evalSast, NULL},
  {"sexpr-bind-pattern-variables", &module_info_evalSsyntax, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"function-ref-count-setter", &module_info_evalSast, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"$sexpr-macro-expand-tag", &module_info_evalSsyntax, NULL},
  {"<module-loader>", &module_info_evalSast, NULL},
  {"global-box-value", &module_info_evalSast, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"alternative-alternant", &module_info_evalSast, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"always", &module_info_gooSruntime, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"sexpr-assignment-value", &module_info_evalSsyntax, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"signature-value-setter", &module_info_evalSast, NULL},
  {"function-adjectives", &module_info_evalSast, NULL},
  {"def-programs", &module_info_evalSast, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"do-static-global-bindings", &module_info_evalSast, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"global-box-value-setter", &module_info_evalSast, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"components-parent-directory", &module_info_gooSsystem, NULL},
  {"alternative-consequent", &module_info_evalSast, NULL},
  {"module-uses-c-libraries", &module_info_evalSast, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"monitor-type", &module_info_evalSast, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"application-loop", &module_info_evalSast, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"binding-mangled-name-setter", &module_info_evalSast, NULL},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, NULL},
  {"$sexpr-locals-tag", &module_info_evalSsyntax, NULL},
  {"binding-type", &module_info_evalSast, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"<monitor>", &module_info_evalSast, NULL},
  {"$sexpr-monitor-tag", &module_info_evalSsyntax, NULL},
  {"find-environment-module", &module_info_evalSast, NULL},
  {"$sexpr-syntax-if-tag", &module_info_evalSsyntax, NULL},
  {"ast-define-binding", &module_info_evalSast, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"reference-called-function?-setter", &module_info_evalSast, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"<reference>", &module_info_evalSast, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"$sexpr-begin-tag", &module_info_evalSsyntax, NULL},
  {"bind-exit-main-fun", &module_info_evalSast, NULL},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, NULL},
  {"bind-exit-light?", &module_info_evalSast, NULL},
  {"binding-inferred-type-setter", &module_info_evalSast, NULL},
  {"build-condition-for-handler-interactively", &module_info_gooSconditions, NULL},
  {"binding-value-setter", &module_info_evalSast, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"<unwind-protect>", &module_info_evalSast, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"<renamed-local-binding>", &module_info_evalSast_linearize, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"program-register-setter", &module_info_evalSast, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"<magic-reference>", &module_info_evalSast, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"locals-body", &module_info_evalSast, NULL},
  {"binding-kind", &module_info_evalSast, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"locals-functions-setter", &module_info_evalSast, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"sexpr-define-class?", &module_info_evalSsyntax, NULL},
  {"<passive-program>", &module_info_evalSast, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"sexpr-isa-parent", &module_info_evalSsyntax, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"environment-bindings", &module_info_evalSast, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"reference-frame-number", &module_info_evalSast, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"$sexpr-method-tag", &module_info_evalSsyntax, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {">", &module_info_gooSmag, NULL},
  {"function-free", &module_info_evalSast, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"sexpr-sequence->begin", &module_info_evalSsyntax, NULL},
  {"<loop-application>", &module_info_evalSast, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"unchecked-runtime-environment", &module_info_evalSast, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"sexpr-fab-setter", &module_info_evalSsyntax, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"file-type", &module_info_gooSsystem, NULL},
  {"build-condition-interactively", &module_info_gooSconditions, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"binding-name", &module_info_evalSast, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"function-debug-name", &module_info_evalSast, NULL},
  {"<local-binding>", &module_info_evalSast, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"sexpr-isa-init-values", &module_info_evalSsyntax, NULL},
  {"sexpr-isa-prop-inits", &module_info_evalSsyntax, NULL},
  {"sexpr-prop-init-var", &module_info_evalSsyntax, NULL},
  {"ast-evaluate", &module_info_evalSast, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"sexpr-function-signature", &module_info_evalSsyntax, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"sexpr-loc-bound-names", &module_info_evalSsyntax, NULL},
  {"locals-functions", &module_info_evalSast, NULL},
  {"sexpr-loc-bound-bodies", &module_info_evalSsyntax, NULL},
  {"sexpr-loc-bound-signatures", &module_info_evalSsyntax, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"sexpr-method-body", &module_info_evalSsyntax, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"sexpr-let->combination", &module_info_evalSsyntax, NULL},
  {"gooc-filename", &module_info_gooSsystem, NULL},
  {"assignment-reference", &module_info_evalSast, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"add-tmp-path", &module_info_gooSsystem, NULL},
  {"remove-modules-by-name!", &module_info_evalSast, NULL},
  {"sexpr-def-variable", &module_info_evalSsyntax, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"env-object-name", &module_info_evalSast, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"%load", &module_info_gooSsystem, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"sexpr-syntax-if-pattern", &module_info_evalSsyntax, NULL},
  {"function-body", &module_info_evalSast, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"binding-dotted?", &module_info_evalSast, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"sexpr-make-application", &module_info_evalSsyntax, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"str-parse-in", CVAR, &YevalStopYstr_parse_in},
  {"auto-run", CVAR, &YevalStopYauto_run},
  {"str-eval-in", CVAR, &YevalStopYstr_eval_in},
  {"for-user-frames", PVAR, NULL},
  {"bt", CVAR, &YevalStopYbt},
  {"load-file", CVAR, &YevalStopYload_file},
  {"$$$", CVAR, &YevalStopYDDD},
  {"%%top%%top-in", CVAR, &YevalStopYPPtopPPtop_in},
  {"do-stack-frames", CVAR, &YevalStopYdo_stack_frames},
  {"parse", CVAR, &YevalStopYparse},
  {"str-parse", CVAR, &YevalStopYstr_parse},
  {"esctst", CVAR, &YevalStopYesctst},
  {"g2c-eval", CVAR, &YevalStopYg2c_eval},
  {"%%bottom%%g2c-run", CVAR, &YevalStopYPPbottomPPg2c_run},
  {"run", DVAR, &YevalStopYrun},
  {"frame", CVAR, &YevalStopYframe},
  {"do-restart", CVAR, &YevalStopYdo_restart},
  {"$g2c-eval?", CVAR, &YevalStopYDg2c_evalQ},
  {"prompt-for-command-expression", CVAR, &YevalStopYprompt_for_command_expression},
  {"eval-in", CVAR, &YevalStopYeval_in},
  {"read-file", CVAR, &YevalStopYread_file},
  {"top", CVAR, &YevalStopYtop},
  {"backtrace", CVAR, &YevalStopYbacktrace},
  {"$$", CVAR, &YevalStopYDD},
  {"str-eval", CVAR, &YevalStopYstr_eval},
  {"msg-src-loc", CVAR, &YevalStopYmsg_src_loc},
  {"$", CVAR, &YevalStopYD},
  {"load", CVAR, &YevalStopYload},
  {"for-frames", PVAR, NULL},
  {"save-image", CVAR, &YevalStopYsave_image},
  {"auto-eval", CVAR, &YevalStopYauto_eval},
  {"frame-var", CVAR, &YevalStopYframe_var},
  {"compiled-file?", CVAR, &YevalStopYcompiled_fileQ},
  {"print-result-expression", CVAR, &YevalStopYprint_result_expression},
  {"%%bottom%%ast-run", CVAR, &YevalStopYPPbottomPPast_run},
  {"parse-in", CVAR, &YevalStopYparse_in},
  {"---main-0---", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"bt", NULL},
  {"load-file", NULL},
  {"g2c-eval", NULL},
  {"$$$", NULL},
  {"esctst", NULL},
  {"do-stack-frames", NULL},
  {"eval", NULL},
  {"backtrace", NULL},
  {"frame", NULL},
  {"$$", NULL},
  {"$", NULL},
  {"save-image", NULL},
  {"auto-eval", NULL},
  {"frame-var", NULL},
  {"load", NULL},
  {"top", NULL},
  {"parse-in", NULL},
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
