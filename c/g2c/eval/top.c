/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/top */

EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSmathYS,"goo/math","/");
EXT(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSmathYceilS,"goo/math","ceil/");
DEF(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
DEF(YevalStopYbt,"eval/top","bt");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YPsnul,"goo/boot","%snul");
EXT(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
EXT(YgooSmathYE,"goo/math","=");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
EXT(YLclassG,"goo/boot","<class>");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
DEF(YevalStopYauto_run,"eval/top","auto-run");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(Ytail,"goo/boot","tail");
DEF(YevalStopYprint_result_expression,"eval/top","print-result-expression");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
EXT(YLtypeG,"goo/boot","<type>");
DEF(YevalStopYdo_restart,"eval/top","do-restart");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooStypesYall2Q,"goo/types","all2?");
DEF(YevalStopYload_file,"eval/top","load-file");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YgooStypesY2nd,"goo/types","2nd");
DEF(YevalStopYstr_eval,"eval/top","str-eval");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
DEF(YevalStopYstr_parse_in,"eval/top","str-parse-in");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YPprop,"goo/boot","%prop");
EXT(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
EXT(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(Ynot,"goo/boot","not");
EXT(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
DEF(YevalStopYframe,"eval/top","frame");
EXT(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YLmetG,"goo/boot","<met>");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
DEF(YevalStopYPPbottomPPg2c_run,"eval/top","%%bottom%%g2c-run");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
DEF(YevalStopYsave_image,"eval/top","save-image");
EXT(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Yerror,"goo/boot","error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
EXT(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
EXT(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
DYNDEF(YevalStopYrun,"eval/top","run");
EXT(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ynul,"goo/boot","nul");
EXT(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YgooSsystemYtime,"goo/system","time");
DEF(YevalStopYesctst,"eval/top","esctst");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YevalSast_linearizeYupdate_walkX,"eval/ast-linearize","update-walk!");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
DEF(YevalStopYstr_eval_in,"eval/top","str-eval-in");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yhead,"goo/boot","head");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
EXT(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
DEF(YevalStopYparse,"eval/top","parse");
EXT(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
DYNEXT(YgooSruntimeYTcurrent_handlersT,"goo/runtime","*current-handlers*");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
EXT(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YtT,"goo/boot","t*");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
EXT(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
DEF(YevalStopYPPbottomPPast_run,"eval/top","%%bottom%%ast-run");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
EXT(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(Ylst,"goo/boot","lst");
EXT(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
DEF(YevalStopYframe_var,"eval/top","frame-var");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooSmathYtanh,"goo/math","tanh");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
DEF(YevalStopYprompt_for_command_expression,"eval/top","prompt-for-command-expression");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YLintG,"goo/boot","<int>");
DEF(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
DEF(YevalStopYread_file,"eval/top","read-file");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmathYB,"goo/math","&");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YLproductG,"goo/boot","<product>");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
DEF(YevalStopYeval_in,"eval/top","eval-in");
EXT(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
DEF(YevalStopYtop,"eval/top","top");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
EXT(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
DEF(YevalStopYparse_in,"eval/top","parse-in");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmathYtrunc,"goo/math","trunc");
DEF(YevalStopYDg2c_evalQ,"eval/top","$g2c-eval?");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YLlogG,"goo/boot","<log>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YevalSast_linearizeYanalyze_ast,"eval/ast-linearize","analyze-ast");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(Yprop_owner,"goo/boot","prop-owner");
DEF(YevalStopYLkeyboard_interruptG,"eval/top","<keyboard-interrupt>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
DEF(YevalStopYload,"eval/top","load");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
EXT(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
DEF(YevalStopYcompiled_fileQ,"eval/top","compiled-file?");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
DEF(YevalStopYPPtopPPtop_in,"eval/top","%%top%%top-in");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YOlst,"goo/boot","@lst");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
DEF(YevalStopYstr_parse,"eval/top","str-parse");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(Ynew,"goo/boot","new");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YevalSast_linearizeYast_contains_funQ,"eval/ast-linearize","ast-contains-fun?");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
DEF(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YgooSmathYC,"goo/math","^");
EXT(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(Yprop_type,"goo/boot","prop-type");
DEF(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YisaQ,"goo/boot","isa?");
EXT(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
EXT(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(Ynil,"goo/boot","nil");
EXT(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalSast_linearizeYunconstrained_typeQ,"eval/ast-linearize","unconstrained-type?");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_85);
DEFLIT(lit_79);
DEFLIT(lit_120);
DEFLIT(lit_3);
DEFLIT(lit_123);
DEFLIT(lit_61);
DEFLIT(lit_66);
DEFLIT(lit_69);
DEFLIT(lit_98);
DEFLIT(lit_59);
DEFLIT(lit_18);
DEFLIT(lit_127);
DEFLIT(lit_63);
DEFLIT(lit_146);
DEFLIT(lit_130);
DEFLIT(lit_40);
DEFLIT(lit_94);
DEFLIT(lit_51);
DEFLIT(lit_56);
DEFLIT(lit_70);
DEFLIT(lit_49);
DEFLIT(lit_43);
DEFLIT(lit_119);
DEFLIT(lit_110);
DEFLIT(lit_72);
DEFLIT(lit_36);
DEFLIT(lit_25);
DEFLIT(lit_132);
DEFLIT(lit_21);
DEFLIT(lit_81);
DEFLIT(lit_32);
DEFLIT(lit_47);
DEFLIT(lit_114);
DEFLIT(lit_139);
DEFLIT(lit_145);
DEFLIT(lit_74);
DEFLIT(lit_147);
DEFLIT(lit_28);
DEFLIT(lit_22);
DEFLIT(lit_87);
DEFLIT(lit_101);
DEFLIT(lit_143);
DEFLIT(lit_19);
DEFLIT(lit_82);
DEFLIT(lit_103);
DEFLIT(lit_118);
DEFLIT(lit_122);
DEFLIT(lit_126);
DEFLIT(lit_16);
DEFLIT(lit_57);
DEFLIT(lit_41);
DEFLIT(lit_54);
DEFLIT(lit_68);
DEFLIT(lit_1);
DEFLIT(lit_11);
DEFLIT(lit_46);
DEFLIT(lit_10);
DEFLIT(lit_128);
DEFLIT(lit_8);
DEFLIT(lit_106);
DEFLIT(lit_105);
DEFLIT(lit_7);
DEFLIT(lit_129);
DEFLIT(lit_75);
DEFLIT(lit_45);
DEFLIT(lit_35);
DEFLIT(lit_77);
DEFLIT(lit_112);
DEFLIT(lit_111);
DEFLIT(lit_76);
DEFLIT(lit_144);
DEFLIT(lit_140);
DEFLIT(lit_62);
DEFLIT(lit_116);
DEFLIT(lit_135);
DEFLIT(lit_0);
DEFLIT(lit_58);
DEFLIT(lit_30);
DEFLIT(lit_5);
DEFLIT(lit_20);
DEFLIT(lit_89);
DEFLIT(lit_4);
DEFLIT(lit_97);
DEFLIT(lit_88);
DEFLIT(lit_38);
DEFLIT(lit_78);
DEFLIT(lit_108);
DEFLIT(lit_34);
DEFLIT(lit_93);
DEFLIT(lit_65);
DEFLIT(lit_138);
DEFLIT(lit_142);
DEFLIT(lit_95);
DEFLIT(lit_23);
DEFLIT(lit_113);
DEFLIT(lit_9);
DEFLIT(lit_31);
DEFLIT(lit_115);
DEFLIT(lit_48);
DEFLIT(lit_27);
DEFLIT(lit_71);
DEFLIT(lit_12);
DEFLIT(lit_55);
DEFLIT(lit_134);
DEFLIT(lit_141);
DEFLIT(lit_136);
DEFLIT(lit_15);
DEFLIT(lit_133);
DEFLIT(lit_44);
DEFLIT(lit_100);
DEFLIT(lit_29);
DEFLIT(lit_91);
DEFLIT(lit_52);
DEFLIT(lit_124);
DEFLIT(lit_2);
DEFLIT(lit_37);
DEFLIT(lit_96);
DEFLIT(lit_104);
DEFLIT(lit_39);
DEFLIT(lit_90);
DEFLIT(lit_80);
DEFLIT(lit_17);
DEFLIT(lit_102);
DEFLIT(lit_42);
DEFLIT(lit_67);
DEFLIT(lit_33);
DEFLIT(lit_131);
DEFLIT(lit_73);
DEFLIT(lit_60);
DEFLIT(lit_24);
DEFLIT(lit_84);
DEFLIT(lit_86);
DEFLIT(lit_6);
DEFLIT(lit_83);
DEFLIT(lit_125);
DEFLIT(lit_117);
DEFLIT(lit_64);
DEFLIT(lit_26);
DEFLIT(lit_14);
DEFLIT(lit_137);
DEFLIT(lit_53);
DEFLIT(lit_109);
DEFLIT(lit_50);
DEFLIT(lit_107);
DEFLIT(lit_99);
DEFLIT(lit_13);
DEFLIT(lit_92);
DEFLIT(lit_121);

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
LOCFOR(fun_x_1473_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_x_1477_30);
LOCFOR(fun_31);
LOCFOR(fun_32);
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
FUNFOR(Ykeyboard_interrupt);
FUNFOR(YevalStopYdo_restart);
LOCFOR(fun_48);
LOCFOR(fun_49);
LOCFOR(fun_50);
LOCFOR(fun_51);
LOCFOR(fun_x_1519_52);
LOCFOR(fun_53);
LOCFOR(fun_x_1516_54);
LOCFOR(fun_55);
LOCFOR(fun_x_1513_56);
LOCFOR(fun_57);
LOCFOR(fun_x_1510_58);
LOCFOR(fun_59);
LOCFOR(fun_x_1507_60);
LOCFOR(fun_61);
LOCFOR(fun_x_1504_62);
LOCFOR(fun_63);
LOCFOR(fun_x_1501_64);
LOCFOR(fun_65);
LOCFOR(fun_x_1498_66);
LOCFOR(fun_67);
LOCFOR(fun_x_1495_68);
LOCFOR(fun_69);
LOCFOR(fun_x_1492_70);
LOCFOR(fun_71);
LOCFOR(fun_x_1489_72);
LOCFOR(fun_73);
LOCFOR(fun_x_1486_74);
LOCFOR(fun_75);
LOCFOR(fun_x_1483_76);
LOCFOR(fun_77);
LOCFOR(fun_x_1480_78);
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
  P T0,T1;
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
  T0 = CALL3(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_14),T1);
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
  P astF2065;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(form_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),form_,ct_env_,YPfalse);
  astF2065 = T1;
  T2 = CALL2(1,DYNREF(YevalStopYrun),astF2065,ct_env_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_in_12) {
  P x_,ct_env_;
  P eF2067;
  P oF2066;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),x_,ct_env_,YPfalse);
  oF2066 = T1;
  T3 = CALL1(1,VARREF(YevalSastYast_evaluate),oF2066);
  eF2067 = T3;
  T2 = eF2067;
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
  T0 = CALL2(1,VARREF(YgooScolsSseqYsuffixQ),name_,LITREF(lit_30));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_17) {
  P forms_;
  P xF2068;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(forms_, 0);
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL1(1,VARREF(YgooSruntimeYread),T2);
  xF2068 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),xF2068);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooSmacrosYrevX),forms_);
    T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_sequence_Gbegin),T6);
    T3 = T5;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYpair),xF2068,forms_);
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
  P loopF2069;
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_in_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T2 = FUNSHELL(1,fun_loop_17,2);
  loopF2069 = T2;
  FUNINIT(loopF2069, 2,FREEREF(0),loopF2069);
  T3 = CALL1(0,loopF2069,Ynil);
  T1 = T3;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_19) {
  P tmpF2070;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2070 = T1;
  if (tmpF2070 != YPfalse) {
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
  P portF2071;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  portF2071 = YPfalse;
  portF2071 = BOXFAB(portF2071);
  T3 = FUNFAB(fun_18,2,portF2071,filename_);
  T4 = FUNFAB(fun_19,1,portF2071);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_in_21) {
  P filename_,ct_env_;
  P oF2073;
  P xF2072;
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
    xF2072 = T4;
    T6 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),xF2072,ct_env_,YPfalse);
    oF2073 = T6;
    T7 = CALL2(1,DYNREF(YevalStopYrun),oF2073,ct_env_);
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
  P realfileF2074;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_in_path),name_,VARREF(YgooSsystemYTmodule_search_pathT));
  realfileF2074 = T1;
  T2 = CALL1(1,VARREF(Ynot),realfileF2074);
  if (T2 != YPfalse) {
    T3 = CALL2(1,VARREF(Yerror),LITREF(lit_38),name_);
  } else {
  }
  T4 = CALL2(1,VARREF(YevalStopYload_file),realfileF2074,modname_);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_prompt_for_command_expression_24) {
  P env_,level_,prompt_;
  P argsF2078;
  P arg_strF2077;
  P tmpF2076;
  P formF2075;
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
  CALL5(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_43),T0,level_,prompt_);
  CALL1(1,VARREF(YgooSioSportYforce_out),VARREF(YgooSioSportYout));
  T3 = CALL1(1,VARREF(YgooSruntimeYread),VARREF(YgooSioSportYin));
  formF2075 = T3;
  T6 = CALL2(1,VARREF(YisaQ),formF2075,VARREF(YLlstG));
  tmpF2076 = T6;
  if (tmpF2076 != YPfalse) {
    T9 = CALL1(1,VARREF(Yhead),formF2075);
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),T9,LITREF(lit_44));
    T7 = T8;
  } else {
    T7 = YPfalse;
  }
  T5 = T7;
  if (T5 != YPfalse) {
    T11 = CALL1(1,VARREF(YgooSioSportYgets),VARREF(YgooSioSportYin));
    arg_strF2077 = T11;
    T14 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_45),arg_strF2077,LITREF(lit_46));
    T13 = CALL1(1,VARREF(YgooSioSreadYread_from_string),T14);
    argsF2078 = T13;
    T17 = CALL1(1,VARREF(YgooStypesY2nd),formF2075);
    T16 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_47),T17);
    T15 = CALL2(1,VARREF(YgooSmacrosYpair),T16,argsF2078);
    T12 = T15;
    T10 = T12;
    T4 = T10;
  } else {
    T4 = formF2075;
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
  CALL5(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_51),T0,level_,label_);
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

FUNCODEDEF(fun_x_1473_27) {
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
  P x_1472F2091;
  P x_1472F2090;
  P x_1472F2089;
  P x_1472F2088;
  P x_1472F2087;
  P x_1472F2086;
  P x_1472F2085;
  P bodyF2084;
  P argsF2083;
  P fF2082;
  P numF2081;
  P x_1472F2080;
  P x_1473F2079;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1473_27,1);
  x_1473F2079 = T1;
  FUNINIT(x_1473F2079, 1,return_);
  x_1472F2080 = FREEREF(0);
  numF2081 = YPfalse;
  numF2081 = BOXFAB(numF2081);
  fF2082 = YPfalse;
  fF2082 = BOXFAB(fF2082);
  argsF2083 = YPfalse;
  argsF2083 = BOXFAB(argsF2083);
  bodyF2084 = YPfalse;
  bodyF2084 = BOXFAB(bodyF2084);
  T11 = CALL2(1,VARREF(YisaQ),x_1472F2080,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1472F2080,LITREF(lit_58),x_1473F2079);
    x_1472F2085 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1472F2085,x_1473F2079);
    x_1472F2086 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1472F2086,x_1473F2079);
    BOXVAL(numF2081) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1472F2086);
    x_1472F2087 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1472F2087,x_1473F2079);
    BOXVAL(fF2082) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1472F2087);
    x_1472F2088 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1472F2088,x_1473F2079);
    BOXVAL(argsF2083) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1472F2088);
    x_1472F2089 = T24;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1472F2089,x_1473F2079);
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T26 = CALL1(1,VARREF(Ytail),x_1472F2085);
    x_1472F2090 = T26;
    BOXVAL(bodyF2084) = x_1472F2090;
    x_1472F2091 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1472F2091,x_1473F2079);
    T27 = T28;
    T14 = T27;
    T12 = T14;
  } else {
    T29 = CALL2(1,x_1473F2079,LITREF(lit_59),x_1472F2080);
  }
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T37 = BOXVAL(numF2081);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T38 = CALL1(1,VARREF(Ylst),YPint((P)0));
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T38,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T33 = CALL2(1,VARREF(YgooSmacrosYcat),T34,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_52));
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_53));
  T48 = BOXVAL(fF2082);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T46 = CALL3(1,VARREF(YgooSmacrosYcat),T47,T49,Ynil);
  T45 = CALL1(1,VARREF(Ylst),T46);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T54 = BOXVAL(argsF2083);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T56 = CALL3(1,VARREF(YgooSmacrosYcat),T57,T58,Ynil);
  T55 = CALL1(1,VARREF(Ylst),T56);
  T51 = CALL4(1,VARREF(YgooSmacrosYcat),T52,T53,T55,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T59 = BOXVAL(bodyF2084);
  T62 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T64 = BOXVAL(numF2081);
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

FUNCODEDEF(fun_x_1477_30) {
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

FUNCODEDEF(fun_31) {
  P return_;
  P x_1476F2104;
  P x_1476F2103;
  P x_1476F2102;
  P x_1476F2101;
  P x_1476F2100;
  P x_1476F2099;
  P x_1476F2098;
  P bodyF2097;
  P argsF2096;
  P fF2095;
  P numF2094;
  P x_1476F2093;
  P x_1477F2092;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1477_30,1);
  x_1477F2092 = T1;
  FUNINIT(x_1477F2092, 1,return_);
  x_1476F2093 = FREEREF(0);
  numF2094 = YPfalse;
  numF2094 = BOXFAB(numF2094);
  fF2095 = YPfalse;
  fF2095 = BOXFAB(fF2095);
  argsF2096 = YPfalse;
  argsF2096 = BOXFAB(argsF2096);
  bodyF2097 = YPfalse;
  bodyF2097 = BOXFAB(bodyF2097);
  T11 = CALL2(1,VARREF(YisaQ),x_1476F2093,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1476F2093,LITREF(lit_66),x_1477F2092);
    x_1476F2098 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1476F2098,x_1477F2092);
    x_1476F2099 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1476F2099,x_1477F2092);
    BOXVAL(numF2094) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1476F2099);
    x_1476F2100 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1476F2100,x_1477F2092);
    BOXVAL(fF2095) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1476F2100);
    x_1476F2101 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1476F2101,x_1477F2092);
    BOXVAL(argsF2096) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1476F2101);
    x_1476F2102 = T24;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1476F2102,x_1477F2092);
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T26 = CALL1(1,VARREF(Ytail),x_1476F2098);
    x_1476F2103 = T26;
    BOXVAL(bodyF2097) = x_1476F2103;
    x_1476F2104 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1476F2104,x_1477F2092);
    T27 = T28;
    T14 = T27;
    T12 = T14;
  } else {
    T29 = CALL2(1,x_1477F2092,LITREF(lit_59),x_1476F2093);
  }
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_67));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_69));
  T37 = CALL1(1,VARREF(Ylst),YPfalse);
  T34 = CALL4(1,VARREF(YgooSmacrosYcat),T35,T36,T37,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_70));
  T42 = CALL1(1,VARREF(Ylst),YPint((P)0));
  T39 = CALL4(1,VARREF(YgooSmacrosYcat),T40,T41,T42,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_58));
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_71));
  T50 = BOXVAL(fF2095);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T52 = BOXVAL(argsF2096);
  T51 = CALL1(1,VARREF(Ylst),T52);
  T47 = CALL4(1,VARREF(YgooSmacrosYcat),T48,T49,T51,Ynil);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T55 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_72));
  T59 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T62 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T64 = BOXVAL(fF2095);
  T63 = CALL1(1,VARREF(Ylst),T64);
  T61 = CALL3(1,VARREF(YgooSmacrosYcat),T62,T63,Ynil);
  T60 = CALL1(1,VARREF(Ylst),T61);
  T67 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T68 = CALL1(1,VARREF(Ylst),LITREF(lit_76));
  T71 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T73 = BOXVAL(fF2095);
  T72 = CALL1(1,VARREF(Ylst),T73);
  T70 = CALL3(1,VARREF(YgooSmacrosYcat),T71,T72,Ynil);
  T69 = CALL1(1,VARREF(Ylst),T70);
  T66 = CALL4(1,VARREF(YgooSmacrosYcat),T67,T68,T69,Ynil);
  T65 = CALL1(1,VARREF(Ylst),T66);
  T74 = CALL1(1,VARREF(Ylst),LITREF(lit_77));
  T58 = CALL5(1,VARREF(YgooSmacrosYcat),T59,T60,T65,T74,Ynil);
  T57 = CALL1(1,VARREF(Ylst),T58);
  T54 = CALL4(1,VARREF(YgooSmacrosYcat),T55,T56,T57,Ynil);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T77 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T79 = BOXVAL(numF2094);
  T78 = CALL1(1,VARREF(Ylst),T79);
  T82 = CALL1(1,VARREF(Ylst),LITREF(lit_78));
  T83 = CALL1(1,VARREF(Ylst),LITREF(lit_71));
  T84 = CALL1(1,VARREF(Ylst),LITREF(lit_70));
  T81 = CALL4(1,VARREF(YgooSmacrosYcat),T82,T83,T84,Ynil);
  T80 = CALL1(1,VARREF(Ylst),T81);
  T76 = CALL4(1,VARREF(YgooSmacrosYcat),T77,T78,T80,Ynil);
  T75 = CALL1(1,VARREF(Ylst),T76);
  T87 = CALL1(1,VARREF(Ylst),LITREF(lit_79));
  T88 = CALL1(1,VARREF(Ylst),LITREF(lit_69));
  T91 = CALL1(1,VARREF(Ylst),LITREF(lit_79));
  T94 = CALL1(1,VARREF(Ylst),LITREF(lit_80));
  T95 = CALL1(1,VARREF(Ylst),LITREF(lit_72));
  T96 = CALL1(1,VARREF(Ylst),LITREF(lit_81));
  T93 = CALL4(1,VARREF(YgooSmacrosYcat),T94,T95,T96,Ynil);
  T92 = CALL1(1,VARREF(Ylst),T93);
  T99 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
  T100 = CALL1(1,VARREF(Ylst),YPfalse);
  T98 = CALL3(1,VARREF(YgooSmacrosYcat),T99,T100,Ynil);
  T97 = CALL1(1,VARREF(Ylst),T98);
  T90 = CALL4(1,VARREF(YgooSmacrosYcat),T91,T92,T97,Ynil);
  T89 = CALL1(1,VARREF(Ylst),T90);
  T101 = BOXVAL(bodyF2097);
  T86 = CALL5(1,VARREF(YgooSmacrosYcat),T87,T88,T89,T101,Ynil);
  T85 = CALL1(1,VARREF(Ylst),T86);
  T104 = CALL1(1,VARREF(Ylst),LITREF(lit_79));
  T107 = CALL1(1,VARREF(Ylst),LITREF(lit_80));
  T108 = CALL1(1,VARREF(Ylst),LITREF(lit_72));
  T109 = CALL1(1,VARREF(Ylst),LITREF(lit_82));
  T106 = CALL4(1,VARREF(YgooSmacrosYcat),T107,T108,T109,Ynil);
  T105 = CALL1(1,VARREF(Ylst),T106);
  T112 = CALL1(1,VARREF(Ylst),LITREF(lit_83));
  T113 = CALL1(1,VARREF(Ylst),LITREF(lit_70));
  T114 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T111 = CALL4(1,VARREF(YgooSmacrosYcat),T112,T113,T114,Ynil);
  T110 = CALL1(1,VARREF(Ylst),T111);
  T117 = CALL1(1,VARREF(Ylst),LITREF(lit_83));
  T118 = CALL1(1,VARREF(Ylst),LITREF(lit_69));
  T119 = CALL1(1,VARREF(Ylst),YPtrue);
  T116 = CALL4(1,VARREF(YgooSmacrosYcat),T117,T118,T119,Ynil);
  T115 = CALL1(1,VARREF(Ylst),T116);
  T103 = CALL5(1,VARREF(YgooSmacrosYcat),T104,T105,T110,T115,Ynil);
  T102 = CALL1(1,VARREF(Ylst),T103);
  T44 = CALLN(1,VARREF(YgooSmacrosYcat),7,T45,T46,T53,T75,T85,T102,Ynil);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T30 = CALLN(1,VARREF(YgooSmacrosYcat),6,T31,T32,T33,T38,T43,Ynil);
  T9 = T30;
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

FUNCODEDEF(fun_33) {
  P f_,Uargs_;
  P numF2107;
  P UnameF2106;
  P argsF2105;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2105 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_77);
  }
  UnameF2106 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF2107 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2106,LITREF(lit_81));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T14 = CALL5(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_87),numF2107,f_,argsF2105);
  } else {
  }
  T15 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2106,LITREF(lit_82));
  if (T15 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF2107;
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

FUNCODEDEF(fun_34) {
  P break_;
  P UnumF2110;
  P Utop_numF2109;
  P Useen_topF2108;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF2108 = YPfalse;
  Useen_topF2108 = BOXFAB(Useen_topF2108);
  Utop_numF2109 = YPint((P)0);
  Utop_numF2109 = BOXFAB(Utop_numF2109);
  UnumF2110 = YPint((P)0);
  UnumF2110 = BOXFAB(UnumF2110);
  T7 = FUNFAB(fun_33,4,UnumF2110,Utop_numF2109,Useen_topF2108,break_);
  T6 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T7);
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_backtrace_35) {
  P T0,T1;
LINK_STACK();
loop:
  T1 = fun_34;
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_36) {
  P f_,Uargs_;
  P numF2113;
  P UnameF2112;
  P argsF2111;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2111 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_77);
  }
  UnameF2112 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF2113 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2112,LITREF(lit_81));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T15 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(4),numF2113);
    if (T15 != YPfalse) {
      T16 = CALL5(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_90),numF2113,f_,argsF2111);
      T14 = T16;
    } else {
      T14 = YPfalse;
    }
  } else {
  }
  T17 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2112,LITREF(lit_82));
  if (T17 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF2113;
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

FUNCODEDEF(fun_37) {
  P break_;
  P UnumF2116;
  P Utop_numF2115;
  P Useen_topF2114;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF2114 = YPfalse;
  Useen_topF2114 = BOXFAB(Useen_topF2114);
  Utop_numF2115 = YPint((P)0);
  Utop_numF2115 = BOXFAB(Utop_numF2115);
  UnumF2116 = YPint((P)0);
  UnumF2116 = BOXFAB(UnumF2116);
  T7 = FUNFAB(fun_36,5,UnumF2116,Utop_numF2115,Useen_topF2114,break_,FREEREF(0));
  T6 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T7);
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_frame_38) {
  P n_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(n_, 0);
loop:
  T1 = FUNFAB(fun_37,1,n_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_39) {
  P f_,Uargs_;
  P numF2119;
  P UnameF2118;
  P argsF2117;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2117 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_77);
  }
  UnameF2118 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF2119 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2118,LITREF(lit_81));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T15 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(4),numF2119);
    if (T15 != YPfalse) {
      T19 = CALL1(1,VARREF(Yfun_names),f_);
      T18 = CALL2(1,VARREF(YgooScolsSseqYpos),T19,FREEREF(5));
      T17 = CALL2(1,VARREF(YgooSmacrosYelt),argsF2117,T18);
      T16 = CALL1(1,FREEREF(6),T17);
      T14 = T16;
    } else {
      T14 = YPfalse;
    }
  } else {
  }
  T20 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2118,LITREF(lit_82));
  if (T20 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF2119;
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

FUNCODEDEF(fun_40) {
  P break_;
  P UnumF2122;
  P Utop_numF2121;
  P Useen_topF2120;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF2120 = YPfalse;
  Useen_topF2120 = BOXFAB(Useen_topF2120);
  Utop_numF2121 = YPint((P)0);
  Utop_numF2121 = BOXFAB(Utop_numF2121);
  UnumF2122 = YPint((P)0);
  UnumF2122 = BOXFAB(UnumF2122);
  T7 = FUNFAB(fun_39,7,UnumF2122,Utop_numF2121,Useen_topF2120,break_,FREEREF(0),FREEREF(1),FREEREF(2));
  T6 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T7);
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_41) {
  P ret_;
  P T0;
  P a1;
LINK_STACK();
  ARG(ret_, 0);
loop:
  T0 = FUNFAB(fun_40,3,FREEREF(0),FREEREF(1),ret_);
  with_exit(T0);
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_frame_var_42) {
  P n_,name_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(n_, 0);
  ARG(name_, 1);
loop:
  T1 = FUNFAB(fun_41,2,n_,name_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_43) {
  P f_,Uargs_;
  P numF2125;
  P UnameF2124;
  P argsF2123;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2123 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_77);
  }
  UnameF2124 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF2125 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2124,LITREF(lit_81));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T14 = CALL4(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_94),numF2125,f_);
  } else {
  }
  T15 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2124,LITREF(lit_82));
  if (T15 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF2125;
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

FUNCODEDEF(fun_44) {
  P break_;
  P UnumF2128;
  P Utop_numF2127;
  P Useen_topF2126;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF2126 = YPfalse;
  Useen_topF2126 = BOXFAB(Useen_topF2126);
  Utop_numF2127 = YPint((P)0);
  Utop_numF2127 = BOXFAB(Utop_numF2127);
  UnumF2128 = YPint((P)0);
  UnumF2128 = BOXFAB(UnumF2128);
  T7 = FUNFAB(fun_43,4,UnumF2128,Utop_numF2127,Useen_topF2126,break_);
  T6 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T7);
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bt_45) {
  P T0,T1;
LINK_STACK();
loop:
  T1 = fun_44;
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ykeyboard_interrupt) {
  P T0,T1;
LINK_STACK();
loop:
  T1 = CALL1(1,VARREF(Ynew),VARREF(YevalStopYLkeyboard_interruptG));
  T0 = CALL1(1,VARREF(YgooSruntimeYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStopYdo_restart) {
  P restarts_,n_;
  P tmpF2129;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(restarts_, 0);
  ARG(n_, 1);
loop:
  T0 = CALL1(1,VARREF(Ynot),restarts_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_99));
  } else {
  }
  T4 = CALL2(1,VARREF(YgooSmagYG),n_,YPint((P)0));
  tmpF2129 = T4;
  if (tmpF2129 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooStypesYlen),restarts_);
    T6 = CALL2(1,VARREF(YgooSmagYLE),n_,T7);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T8 = CALL2(1,VARREF(Yerror),LITREF(lit_100),n_);
  } else {
  }
  T11 = CALL2(1,VARREF(YgooSmathY_),n_,YPint((P)1));
  T10 = CALL2(1,VARREF(YgooSmacrosYelt),restarts_,T11);
  T9 = CALL3(1,VARREF(YgooSruntimeYinvoke_handler_interactively),T10,VARREF(YgooSioSportYin),VARREF(YgooSioSportYout));
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
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
loop:
  T0 = CALL2(1,VARREF(YisaQ),c_,VARREF(YevalStopYLkeyboard_interruptG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_109));
  } else {
    T3 = CALL1(1,VARREF(YgooSruntimeYdescribe_condition),c_);
    T2 = CALL3(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_110),T3);
  }
  T4 = CALL2(1,VARREF(YgooSmathYA),FREEREF(0),YPint((P)1));
  T5 = BOXVAL(FREEREF(3));
  CALL5(1,VARREF(YevalStopYPPtopPPtop_in),T4,FREEREF(1),FREEREF(2),YPtrue,T5);
  T6 = CALL1(1,FREEREF(4),YPfalse);
UNLINK_STACK();
  QRET(T6);
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

FUNCODEDEF(fun_x_1519_52) {
  P msg_,args_;
  P resF2130;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL2(1,VARREF(YevalStopYauto_eval),FREEREF(0),T3);
  resF2130 = T2;
  T5 = BOXVAL(FREEREF(1));
  T4 = CALL4(1,VARREF(YevalStopYprint_result_expression),T5,FREEREF(2),LITREF(lit_128),resF2130);
  T1 = T4;
  T0 = CALL1(1,FREEREF(3),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_53) {
  P return_;
  P x_1518F2137;
  P x_1518F2136;
  P x_1518F2135;
  P nameF2134;
  P nF2133;
  P x_1518F2132;
  P x_1519F2131;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1519_52,4);
  x_1519F2131 = T1;
  FUNINIT(x_1519F2131, 4,FREEREF(0),FREEREF(1),FREEREF(2),return_);
  x_1518F2132 = FREEREF(3);
  nF2133 = YPfalse;
  nF2133 = BOXFAB(nF2133);
  nameF2134 = YPfalse;
  nameF2134 = BOXFAB(nameF2134);
  T7 = CALL2(1,VARREF(YisaQ),x_1518F2132,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1518F2132,LITREF(lit_129),x_1519F2131);
    x_1518F2135 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1518F2135,x_1519F2131);
    BOXVAL(nF2133) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1518F2135);
    x_1518F2136 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1518F2136,x_1519F2131);
    BOXVAL(nameF2134) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1518F2136);
    x_1518F2137 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1518F2137,x_1519F2131);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1519F2131,LITREF(lit_59),x_1518F2132);
  }
  T19 = BOXVAL(FREEREF(1));
  T21 = BOXVAL(nF2133);
  T22 = BOXVAL(nameF2134);
  T20 = CALL2(1,VARREF(YevalStopYframe_var),T21,T22);
  T18 = CALL4(1,VARREF(YevalStopYprint_result_expression),T19,FREEREF(2),LITREF(lit_130),T20);
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1516_54) {
  P msg_,args_;
  P x_1517F2138;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1517F2138 = FREEREF(0);
  T3 = FUNFAB(fun_53,4,FREEREF(1),FREEREF(2),FREEREF(3),x_1517F2138);
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  P return_;
  P x_1515F2143;
  P x_1515F2142;
  P nF2141;
  P x_1515F2140;
  P x_1516F2139;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1516_54,5);
  x_1516F2139 = T1;
  FUNINIT(x_1516F2139, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1515F2140 = FREEREF(0);
  nF2141 = YPfalse;
  nF2141 = BOXFAB(nF2141);
  T5 = CALL2(1,VARREF(YisaQ),x_1515F2140,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1515F2140,LITREF(lit_131),x_1516F2139);
    x_1515F2142 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1515F2142,x_1516F2139);
    BOXVAL(nF2141) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1515F2142);
    x_1515F2143 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1515F2143,x_1516F2139);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1516F2139,LITREF(lit_59),x_1515F2140);
  }
  T14 = BOXVAL(nF2141);
  T13 = CALL1(1,VARREF(YevalStopYframe),T14);
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1513_56) {
  P msg_,args_;
  P x_1514F2144;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1514F2144 = FREEREF(0);
  T3 = FUNFAB(fun_55,4,x_1514F2144,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_57) {
  P return_;
  P x_1512F2147;
  P x_1512F2146;
  P x_1513F2145;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1513_56,5);
  x_1513F2145 = T1;
  FUNINIT(x_1513F2145, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1512F2146 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1512F2146,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1512F2146,LITREF(lit_132),x_1513F2145);
    x_1512F2147 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1512F2147,x_1513F2145);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1513F2145,LITREF(lit_59),x_1512F2146);
  }
  T8 = CALL0(1,VARREF(YevalStopYbacktrace));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1510_58) {
  P msg_,args_;
  P x_1511F2148;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1511F2148 = FREEREF(0);
  T3 = FUNFAB(fun_57,4,x_1511F2148,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_59) {
  P return_;
  P x_1509F2151;
  P x_1509F2150;
  P x_1510F2149;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1510_58,5);
  x_1510F2149 = T1;
  FUNINIT(x_1510F2149, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1509F2150 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1509F2150,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1509F2150,LITREF(lit_133),x_1510F2149);
    x_1509F2151 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1509F2151,x_1510F2149);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1510F2149,LITREF(lit_59),x_1509F2150);
  }
  T8 = CALL0(1,VARREF(YevalStopYbt));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1507_60) {
  P msg_,args_;
  P x_1508F2152;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1508F2152 = FREEREF(0);
  T3 = FUNFAB(fun_59,4,x_1508F2152,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_61) {
  P return_;
  P x_1506F2155;
  P x_1506F2154;
  P x_1507F2153;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1507_60,5);
  x_1507F2153 = T1;
  FUNINIT(x_1507F2153, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1506F2154 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1506F2154,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1506F2154,LITREF(lit_134),x_1507F2153);
    x_1506F2155 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1506F2155,x_1507F2153);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1507F2153,LITREF(lit_59),x_1506F2154);
  }
  if (VARREF(YevalStopYDg2c_evalQ) != YPfalse) {
    T9 = DYNSET(YevalStopYrun,VARREF(YevalStopYauto_run));
    T8 = T9;
  } else {
    T8 = YPfalse;
  }
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1504_62) {
  P msg_,args_;
  P x_1505F2156;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1505F2156 = FREEREF(0);
  T3 = FUNFAB(fun_61,4,x_1505F2156,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_63) {
  P return_;
  P x_1503F2159;
  P x_1503F2158;
  P x_1504F2157;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1504_62,5);
  x_1504F2157 = T1;
  FUNINIT(x_1504F2157, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1503F2158 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1503F2158,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1503F2158,LITREF(lit_135),x_1504F2157);
    x_1503F2159 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1503F2159,x_1504F2157);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1504F2157,LITREF(lit_59),x_1503F2158);
  }
  T8 = DYNSET(YevalStopYrun,VARREF(YevalStopYPPbottomPPast_run));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1501_64) {
  P msg_,args_;
  P x_1502F2160;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1502F2160 = FREEREF(0);
  T3 = FUNFAB(fun_63,4,x_1502F2160,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_65) {
  P return_;
  P x_1500F2163;
  P x_1500F2162;
  P x_1501F2161;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1501_64,5);
  x_1501F2161 = T1;
  FUNINIT(x_1501F2161, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1500F2162 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1500F2162,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1500F2162,LITREF(lit_136),x_1501F2161);
    x_1500F2163 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1500F2163,x_1501F2161);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1501F2161,LITREF(lit_59),x_1500F2162);
  }
  if (VARREF(YevalStopYDg2c_evalQ) != YPfalse) {
    T9 = DYNSET(YevalStopYrun,VARREF(YevalStopYPPbottomPPg2c_run));
    T8 = T9;
  } else {
    T8 = YPfalse;
  }
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1498_66) {
  P msg_,args_;
  P x_1499F2164;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1499F2164 = FREEREF(0);
  T3 = FUNFAB(fun_65,4,x_1499F2164,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_67) {
  P return_;
  P new_envF2170;
  P x_1497F2169;
  P x_1497F2168;
  P mF2167;
  P x_1497F2166;
  P x_1498F2165;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1498_66,5);
  x_1498F2165 = T1;
  FUNINIT(x_1498F2165, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1497F2166 = FREEREF(0);
  mF2167 = YPfalse;
  mF2167 = BOXFAB(mF2167);
  T5 = CALL2(1,VARREF(YisaQ),x_1497F2166,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1497F2166,LITREF(lit_137),x_1498F2165);
    x_1497F2168 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1497F2168,x_1498F2165);
    BOXVAL(mF2167) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1497F2168);
    x_1497F2169 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1497F2169,x_1498F2165);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1498F2165,LITREF(lit_59),x_1497F2166);
  }
  T15 = BOXVAL(mF2167);
  T14 = CALL1(1,VARREF(YevalSastYruntime_environment),T15);
  new_envF2170 = T14;
  T16 = BOXVAL(FREEREF(2)) = new_envF2170;
  T13 = T16;
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1495_68) {
  P msg_,args_;
  P x_1496F2171;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1496F2171 = FREEREF(0);
  T3 = FUNFAB(fun_67,4,x_1496F2171,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  P return_;
  P x_1494F2176;
  P x_1494F2175;
  P nF2174;
  P x_1494F2173;
  P x_1495F2172;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1495_68,5);
  x_1495F2172 = T1;
  FUNINIT(x_1495F2172, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1494F2173 = FREEREF(0);
  nF2174 = YPfalse;
  nF2174 = BOXFAB(nF2174);
  T5 = CALL2(1,VARREF(YisaQ),x_1494F2173,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1494F2173,LITREF(lit_138),x_1495F2172);
    x_1494F2175 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1494F2175,x_1495F2172);
    BOXVAL(nF2174) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1494F2175);
    x_1494F2176 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1494F2176,x_1495F2172);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1495F2172,LITREF(lit_59),x_1494F2173);
  }
  T14 = BOXVAL(FREEREF(4));
  T15 = BOXVAL(nF2174);
  T13 = CALL2(1,VARREF(YevalStopYdo_restart),T14,T15);
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1492_70) {
  P msg_,args_;
  P x_1493F2177;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1493F2177 = FREEREF(0);
  T3 = FUNFAB(fun_69,5,x_1493F2177,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_71) {
  P return_;
  P x_1491F2180;
  P x_1491F2179;
  P x_1492F2178;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1492_70,6);
  x_1492F2178 = T1;
  FUNINIT(x_1492F2178, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1491F2179 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1491F2179,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1491F2179,LITREF(lit_139),x_1492F2178);
    x_1491F2180 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1491F2180,x_1492F2178);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1492F2178,LITREF(lit_59),x_1491F2179);
  }
  T8 = CALL2(1,VARREF(YgooSruntimeYlist_handlers),VARREF(YgooSruntimeYLrestartG),VARREF(YgooSioSportYout));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1489_72) {
  P msg_,args_;
  P x_1490F2181;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1490F2181 = FREEREF(0);
  T3 = FUNFAB(fun_71,5,x_1490F2181,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_73) {
  P return_;
  P x_1488F2184;
  P x_1488F2183;
  P x_1489F2182;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1489_72,6);
  x_1489F2182 = T1;
  FUNINIT(x_1489F2182, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1488F2183 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1488F2183,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1488F2183,LITREF(lit_140),x_1489F2182);
    x_1488F2184 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1488F2184,x_1489F2182);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1489F2182,LITREF(lit_59),x_1488F2183);
  }
  T8 = CALL2(1,VARREF(YgooSruntimeYlist_handlers),VARREF(YgooSruntimeYLconditionG),VARREF(YgooSioSportYout));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1486_74) {
  P msg_,args_;
  P x_1487F2185;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1487F2185 = FREEREF(0);
  T3 = FUNFAB(fun_73,5,x_1487F2185,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_75) {
  P return_;
  P x_1485F2188;
  P x_1485F2187;
  P x_1486F2186;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1486_74,6);
  x_1486F2186 = T1;
  FUNINIT(x_1486F2186, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1485F2187 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1485F2187,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1485F2187,LITREF(lit_141),x_1486F2186);
    x_1485F2188 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1485F2188,x_1486F2186);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1486F2186,LITREF(lit_59),x_1485F2187);
  }
  T8 = CALL1(1,FREEREF(5),YPfalse);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1483_76) {
  P msg_,args_;
  P x_1484F2189;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1484F2189 = FREEREF(0);
  T3 = FUNFAB(fun_75,6,x_1484F2189,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(6),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_77) {
  P return_;
  P x_1482F2192;
  P x_1482F2191;
  P x_1483F2190;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1483_76,7);
  x_1483F2190 = T1;
  FUNINIT(x_1483F2190, 7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),return_);
  x_1482F2191 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1482F2191,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1482F2191,LITREF(lit_142),x_1483F2190);
    x_1482F2192 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1482F2192,x_1483F2190);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1483F2190,LITREF(lit_59),x_1482F2191);
  }
  T8 = CALL1(1,FREEREF(6),YPfalse);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1480_78) {
  P msg_,args_;
  P x_1481F2193;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1481F2193 = FREEREF(0);
  T3 = FUNFAB(fun_77,7,x_1481F2193,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(7),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_79) {
  P return_;
  P x_1479F2196;
  P x_1479F2195;
  P x_1480F2194;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1480_78,8);
  x_1480F2194 = T1;
  FUNINIT(x_1480F2194, 8,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6),return_);
  x_1479F2195 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1479F2195,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1479F2195,LITREF(lit_143),x_1480F2194);
    x_1479F2196 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1479F2196,x_1480F2194);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1480F2194,LITREF(lit_59),x_1479F2195);
  }
  T8 = CALL1(1,FREEREF(7),YPfalse);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_80) {
  P x_1478F2198;
  P formF2197;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
loop:
  CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
  T0 = BOXVAL(FREEREF(0));
  if (T0 != YPfalse) {
    CALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_112));
    T1 = CALL2(1,VARREF(YgooSruntimeYlist_handlers),VARREF(YgooSruntimeYLrestartG),VARREF(YgooSioSportYout));
    BOXVAL(FREEREF(1)) = T1;
    T2 = BOXVAL(FREEREF(0)) = YPfalse;
  } else {
  }
  T5 = BOXVAL(FREEREF(2));
  T4 = CALL3(1,VARREF(YevalStopYprompt_for_command_expression),T5,FREEREF(3),LITREF(lit_113));
  formF2197 = T4;
  T8 = CALL0(1,VARREF(YgooSmathYeof_object));
  T7 = CALL2(1,VARREF(YgooSmathYE),formF2197,T8);
  if (T7 != YPfalse) {
    T9 = CALL1(1,FREEREF(4),YPfalse);
    T6 = T9;
  } else {
    x_1478F2198 = formF2197;
    T12 = FUNFAB(fun_79,8,x_1478F2198,formF2197,FREEREF(2),FREEREF(3),FREEREF(1),FREEREF(5),FREEREF(6),FREEREF(4));
    T11 = with_exit(T12);
    T10 = T11;
    T6 = T10;
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
  T1 = CALL5(1,VARREF(Ynew),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_111),VARREF(Yhandler_info_arguments),T2);
  T3 = fun_50;
  T4 = FUNFAB(fun_51,1,FREEREF(1));
  T5 = FUNFAB(fun_80,7,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(0),FREEREF(5),FREEREF(6),FREEREF(7));
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YgooSruntimeYLrestartG),T1,T3,T4,T5);
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
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YgooSruntimeYLconditionG),VARREF(YgooSruntimeYDdefault_handler_info),T1,T2,T3);
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
  P loopF2199;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_83,8);
  loopF2199 = T1;
  FUNINIT(loopF2199, 8,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),blow_,loopF2199);
  T2 = CALL0(0,loopF2199);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_PPtopPPtop_in_85) {
  P level_,top_,quit_,show_restartsQ_,ct_env_;
  P restartsF2200;
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
  restartsF2200 = YPfalse;
  restartsF2200 = BOXFAB(restartsF2200);
  T5 = FUNFAB(fun_84,6,level_,top_,quit_,ct_env_,show_restartsQ_,restartsF2200);
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
  P loopF2201;
  P T0,T1,T2;
LINK_STACK();
loop:
  T1 = FUNSHELL(1,fun_loop_89,3);
  loopF2201 = T1;
  FUNINIT(loopF2201, 3,FREEREF(0),FREEREF(1),loopF2201);
  T2 = CALL0(0,loopF2201);
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
  T1 = CALL5(1,VARREF(Ynew),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_144),VARREF(Yhandler_info_arguments),T2);
  T3 = fun_86;
  T4 = FUNFAB(fun_87,1,quit_);
  T5 = FUNFAB(fun_90,2,quit_,FREEREF(0));
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YgooSruntimeYLrestartG),T1,T3,T4,T5);
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
  T0 = CALL1(1,VARREF(YevalStopYtop),LITREF(lit_147));
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
  P T192,T193,T194,T195,T196,T197;
DEFCREGS();
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
  T8 = XCALL2(1,VARREF(YPdefine_method),T9,T11);
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
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T16);
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
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T21);
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
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T26);
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
  lit_22 = YPsb((P)"linux");
  T36 = XCALL0(1,VARREF(YgooSsystemYos_name));
  T35 = XCALL2(1,VARREF(YgooSmathYE),T36,LITREF(lit_22));
  VARSET(YevalStopYDg2c_evalQ,T35);
  if (VARREF(YevalStopYDg2c_evalQ) != YPfalse) {
    T37 = VARREF(YevalStopYauto_run);
  } else {
    T37 = VARREF(YevalStopYPPbottomPPast_run);
  }
  DYNDEFSET(YevalStopYrun,T37);
  lit_23 = YPPsym((P)"eval-in");
  lit_24 = YPPsym((P)"x");
  T38 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_in_12 = YPmet(FUNCODEREF(fun_eval_in_12),LITREF(lit_23),T38,ENVNUL,PNUL,YPfalse);
  T41 = BOUNDP(YevalStopYeval_in);
  if (T41 != YPfalse) {
    T40 = VARREF(YevalStopYeval_in);
  } else {
    T40 = YPfalse;
  }
  T42 = fun_eval_in_12;
  T39 = XCALL2(1,VARREF(YPdefine_method),T40,T42);
  VARSET(YevalStopYeval_in,T39);
  lit_25 = YPPsym((P)"eval");
  T43 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_12)),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_13 = YPmet(FUNCODEREF(fun_eval_13),LITREF(lit_25),T43,ENVNUL,PNUL,YPfalse);
  T46 = BOUNDP(YevalSsyntaxYeval);
  if (T46 != YPfalse) {
    T45 = VARREF(YevalSsyntaxYeval);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_eval_13;
  T44 = XCALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YevalSsyntaxYeval,T44);
  lit_26 = YPPsym((P)"str-eval-in");
  T48 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_8)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_in_14 = YPmet(FUNCODEREF(fun_str_eval_in_14),LITREF(lit_26),T48,ENVNUL,PNUL,YPfalse);
  T51 = BOUNDP(YevalStopYstr_eval_in);
  if (T51 != YPfalse) {
    T50 = VARREF(YevalStopYstr_eval_in);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_str_eval_in_14;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(YevalStopYstr_eval_in,T49);
  lit_27 = YPPsym((P)"str-eval");
  T53 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_12)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_15 = YPmet(FUNCODEREF(fun_str_eval_15),LITREF(lit_27),T53,ENVNUL,PNUL,YPfalse);
  T56 = BOUNDP(YevalStopYstr_eval);
  if (T56 != YPfalse) {
    T55 = VARREF(YevalStopYstr_eval);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_str_eval_15;
  T54 = XCALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(YevalStopYstr_eval,T54);
  lit_28 = YPPsym((P)"compiled-file?");
  lit_29 = YPPsym((P)"name");
  lit_30 = YPsb((P)".gooc");
  T58 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalStopYcompiled_fileQ = YPmet(FUNCODEREF(YevalStopYcompiled_fileQ),LITREF(lit_28),T58,ENVNUL,PNUL,YPfalse);
  T59 = YevalStopYcompiled_fileQ;
  VARSET(YevalStopYcompiled_fileQ,T59);
  lit_31 = YPPsym((P)"read-file");
  lit_32 = YPPsym((P)"filename");
  lit_33 = YPPsym((P)"loop");
  lit_34 = YPPsym((P)"forms");
  T63 = YPsig(YPPlist(1,LITREF(lit_34)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_17 = YPmet(FUNCODEREF(fun_loop_17),LITREF(lit_33),T63,ENVNUL,PNUL,YPfalse);
  T62 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T62,ENVNUL,PNUL,YPfalse);
  T61 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T61,ENVNUL,PNUL,YPfalse);
  T60 = YPsig(YPPlist(1,LITREF(lit_32)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_file_20 = YPmet(FUNCODEREF(fun_read_file_20),LITREF(lit_31),T60,ENVNUL,PNUL,YPfalse);
  T66 = BOUNDP(YevalStopYread_file);
  if (T66 != YPfalse) {
    T65 = VARREF(YevalStopYread_file);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_read_file_20;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YevalStopYread_file,T64);
  lit_35 = YPPsym((P)"load-in");
  T68 = YPsig(YPPlist(2,LITREF(lit_32),LITREF(lit_8)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_in_21 = YPmet(FUNCODEREF(fun_load_in_21),LITREF(lit_35),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(YevalSastYload_in);
  if (T71 != YPfalse) {
    T70 = VARREF(YevalSastYload_in);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_load_in_21;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YevalSastYload_in,T69);
  lit_36 = YPPsym((P)"load-file");
  T73 = YPsig(YPPlist(2,LITREF(lit_32),LITREF(lit_12)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_file_22 = YPmet(FUNCODEREF(fun_load_file_22),LITREF(lit_36),T73,ENVNUL,PNUL,YPfalse);
  T76 = BOUNDP(YevalStopYload_file);
  if (T76 != YPfalse) {
    T75 = VARREF(YevalStopYload_file);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_load_file_22;
  T74 = XCALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(YevalStopYload_file,T74);
  lit_37 = YPPsym((P)"load");
  lit_38 = YPsb((P)"File %s not found");
  T78 = YPsig(YPPlist(2,LITREF(lit_29),LITREF(lit_12)),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_23 = YPmet(FUNCODEREF(fun_load_23),LITREF(lit_37),T78,ENVNUL,PNUL,YPfalse);
  T81 = BOUNDP(YevalStopYload);
  if (T81 != YPfalse) {
    T80 = VARREF(YevalStopYload);
  } else {
    T80 = YPfalse;
  }
  T82 = fun_load_23;
  T79 = XCALL2(1,VARREF(YPdefine_method),T80,T82);
  VARSET(YevalStopYload,T79);
  lit_39 = YPPsym((P)"prompt-for-command-expression");
  lit_40 = YPPsym((P)"env");
  lit_41 = YPPsym((P)"level");
  lit_42 = YPPsym((P)"prompt");
  lit_43 = YPsb((P)"%s %=%s");
  lit_44 = YPPsym((P)"unquote");
  lit_45 = YPsb((P)"(");
  lit_46 = YPsb((P)")");
  lit_47 = YPsb((P)"cmd_");
  T83 = YPsig(YPPlist(3,LITREF(lit_40),LITREF(lit_41),LITREF(lit_42)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_prompt_for_command_expression_24 = YPmet(FUNCODEREF(fun_prompt_for_command_expression_24),LITREF(lit_39),T83,ENVNUL,PNUL,YPfalse);
  T86 = BOUNDP(YevalStopYprompt_for_command_expression);
  if (T86 != YPfalse) {
    T85 = VARREF(YevalStopYprompt_for_command_expression);
  } else {
    T85 = YPfalse;
  }
  T87 = fun_prompt_for_command_expression_24;
  T84 = XCALL2(1,VARREF(YPdefine_method),T85,T87);
  VARSET(YevalStopYprompt_for_command_expression,T84);
  lit_48 = YPPsym((P)"print-result-expression");
  lit_49 = YPPsym((P)"label");
  lit_50 = YPPsym((P)"result");
  lit_51 = YPsb((P)"%s %=%s");
  T88 = YPsig(YPPlist(4,LITREF(lit_40),LITREF(lit_41),LITREF(lit_49),LITREF(lit_50)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_print_result_expression_25 = YPmet(FUNCODEREF(fun_print_result_expression_25),LITREF(lit_48),T88,ENVNUL,PNUL,YPfalse);
  T91 = BOUNDP(YevalStopYprint_result_expression);
  if (T91 != YPfalse) {
    T90 = VARREF(YevalStopYprint_result_expression);
  } else {
    T90 = YPfalse;
  }
  T92 = fun_print_result_expression_25;
  T89 = XCALL2(1,VARREF(YPdefine_method),T90,T92);
  VARSET(YevalStopYprint_result_expression,T89);
  lit_52 = YPPsym((P)"do-stack-frames");
  lit_53 = YPPsym((P)"fun");
  T93 = YPsig(YPPlist(1,LITREF(lit_53)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_stack_frames_26 = YPmet(FUNCODEREF(fun_do_stack_frames_26),LITREF(lit_52),T93,ENVNUL,PNUL,YPfalse);
  T96 = BOUNDP(YevalStopYdo_stack_frames);
  if (T96 != YPfalse) {
    T95 = VARREF(YevalStopYdo_stack_frames);
  } else {
    T95 = YPfalse;
  }
  T97 = fun_do_stack_frames_26;
  T94 = XCALL2(1,VARREF(YPdefine_method),T95,T97);
  VARSET(YevalStopYdo_stack_frames,T94);
  lit_54 = YPPsym((P)"return");
  lit_55 = YPPsym((P)"x-1473");
  lit_56 = YPPsym((P)"msg");
  lit_57 = YPPsym((P)"args");
  lit_58 = YPPsym((P)"for-frames");
  lit_59 = YPsb((P)"Match Pattern Failure");
  lit_60 = YPPsym((P)"let");
  lit_61 = YPPsym((P)"_args");
  lit_62 = YPPsym((P)"def");
  lit_63 = YPPsym((P)"rev");
  lit_64 = YPPsym((P)"incf");
  T100 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1473_27 = YPmet(FUNCODEREF(fun_x_1473_27),LITREF(lit_55),T100,ENVNUL,PNUL,YPfalse);
  T99 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T99,ENVNUL,PNUL,YPfalse);
  T98 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T98,ENVNUL,PNUL,YPfalse);
  T101 = fun_29;
  YPmacro(YPPsym((P)"eval/top"),YPPsym((P)"for-frames"),T101);
  lit_65 = YPPsym((P)"x-1477");
  lit_66 = YPPsym((P)"for-user-frames");
  lit_67 = YPPsym((P)"esc");
  lit_68 = YPPsym((P)"break");
  lit_69 = YPPsym((P)"_seen-top");
  lit_70 = YPPsym((P)"_top-num");
  lit_71 = YPPsym((P)"_num");
  lit_72 = YPPsym((P)"_name");
  lit_73 = YPPsym((P)"if");
  lit_74 = YPPsym((P)"fun-name");
  lit_75 = YPPsym((P)"as");
  lit_76 = YPPsym((P)"<str>");
  lit_77 = YPsb((P)"");
  lit_78 = YPPsym((P)"-");
  lit_79 = YPPsym((P)"when");
  lit_80 = YPPsym((P)"prefix?");
  lit_81 = YPsb((P)"%%bottom%%");
  lit_82 = YPsb((P)"%%top%%");
  lit_83 = YPPsym((P)"set");
  lit_84 = YPPsym((P)"num");
  T104 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1477_30 = YPmet(FUNCODEREF(fun_x_1477_30),LITREF(lit_65),T104,ENVNUL,PNUL,YPfalse);
  T103 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T103,ENVNUL,PNUL,YPfalse);
  T102 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T102,ENVNUL,PNUL,YPfalse);
  T105 = fun_32;
  YPmacro(YPPsym((P)"eval/top"),YPPsym((P)"for-user-frames"),T105);
  lit_85 = YPPsym((P)"backtrace");
  lit_86 = YPPsym((P)"f");
  lit_87 = YPsb((P)"[%=] %= %=\n");
  T108 = YPsig(YPPlist(2,LITREF(lit_86),LITREF(lit_61)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T108,ENVNUL,PNUL,YPfalse);
  T107 = YPsig(YPPlist(1,LITREF(lit_68)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T107,ENVNUL,PNUL,YPfalse);
  T106 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_backtrace_35 = YPmet(FUNCODEREF(fun_backtrace_35),LITREF(lit_85),T106,ENVNUL,PNUL,YPfalse);
  T111 = BOUNDP(YevalStopYbacktrace);
  if (T111 != YPfalse) {
    T110 = VARREF(YevalStopYbacktrace);
  } else {
    T110 = YPfalse;
  }
  T112 = fun_backtrace_35;
  T109 = XCALL2(1,VARREF(YPdefine_method),T110,T112);
  VARSET(YevalStopYbacktrace,T109);
  lit_88 = YPPsym((P)"frame");
  lit_89 = YPPsym((P)"n");
  lit_90 = YPsb((P)"[%=] %= %=\n");
  T115 = YPsig(YPPlist(2,LITREF(lit_86),LITREF(lit_61)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T115,ENVNUL,PNUL,YPfalse);
  T114 = YPsig(YPPlist(1,LITREF(lit_68)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T114,ENVNUL,PNUL,YPfalse);
  T113 = YPsig(YPPlist(1,LITREF(lit_89)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_frame_38 = YPmet(FUNCODEREF(fun_frame_38),LITREF(lit_88),T113,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YevalStopYframe);
  if (T118 != YPfalse) {
    T117 = VARREF(YevalStopYframe);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_frame_38;
  T116 = XCALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YevalStopYframe,T116);
  lit_91 = YPPsym((P)"frame-var");
  lit_92 = YPPsym((P)"ret");
  T123 = YPsig(YPPlist(2,LITREF(lit_86),LITREF(lit_61)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T123,ENVNUL,PNUL,YPfalse);
  T122 = YPsig(YPPlist(1,LITREF(lit_68)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T122,ENVNUL,PNUL,YPfalse);
  T121 = YPsig(YPPlist(1,LITREF(lit_92)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T121,ENVNUL,PNUL,YPfalse);
  T120 = YPsig(YPPlist(2,LITREF(lit_89),LITREF(lit_29)),YPPlist(2,VARREF(YLintG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_frame_var_42 = YPmet(FUNCODEREF(fun_frame_var_42),LITREF(lit_91),T120,ENVNUL,PNUL,YPfalse);
  T126 = BOUNDP(YevalStopYframe_var);
  if (T126 != YPfalse) {
    T125 = VARREF(YevalStopYframe_var);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_frame_var_42;
  T124 = XCALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(YevalStopYframe_var,T124);
  lit_93 = YPPsym((P)"bt");
  lit_94 = YPsb((P)"[%=] %=\n");
  T130 = YPsig(YPPlist(2,LITREF(lit_86),LITREF(lit_61)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T130,ENVNUL,PNUL,YPfalse);
  T129 = YPsig(YPPlist(1,LITREF(lit_68)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T129,ENVNUL,PNUL,YPfalse);
  T128 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_bt_45 = YPmet(FUNCODEREF(fun_bt_45),LITREF(lit_93),T128,ENVNUL,PNUL,YPfalse);
  T133 = BOUNDP(YevalStopYbt);
  if (T133 != YPfalse) {
    T132 = VARREF(YevalStopYbt);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_bt_45;
  T131 = XCALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(YevalStopYbt,T131);
  lit_95 = YPPsym((P)"<keyboard-interrupt>");
  T136 = (P)YPpair(VARREF(YgooSruntimeYLconditionG),Ynil);
  T135 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_95),T136);
  VARSET(YevalStopYLkeyboard_interruptG,T135);
  lit_96 = YPPsym((P)"keyboard-interrupt");
  T137 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Ykeyboard_interrupt = YPmet(FUNCODEREF(Ykeyboard_interrupt),LITREF(lit_96),T137,ENVNUL,PNUL,YPfalse);
  T138 = Ykeyboard_interrupt;
  VARSET(Ykeyboard_interrupt,T138);
  lit_97 = YPPsym((P)"do-restart");
  lit_98 = YPPsym((P)"restarts");
  lit_99 = YPsb((P)"No restarts available.\n");
  lit_100 = YPsb((P)"No restart #%d.\n");
  T139 = YPsig(YPPlist(2,LITREF(lit_98),LITREF(lit_89)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYdo_restart = YPmet(FUNCODEREF(YevalStopYdo_restart),LITREF(lit_97),T139,ENVNUL,PNUL,YPfalse);
  T140 = YevalStopYdo_restart;
  VARSET(YevalStopYdo_restart,T140);
  lit_101 = YPPsym((P)"%%top%%top-in");
  lit_102 = YPPsym((P)"top");
  lit_103 = YPPsym((P)"quit");
  lit_104 = YPPsym((P)"show-restarts?");
  lit_105 = YPPsym((P)"blow");
  lit_106 = YPPsym((P)"continue");
  lit_107 = YPPsym((P)"c");
  lit_108 = YPPsym((P)"r");
  lit_109 = YPsb((P)"BREAK");
  lit_110 = YPsb((P)"ERROR: %s");
  lit_111 = YPsb((P)"Return to interpreter level %d");
  lit_112 = YPsb((P)"Type \",restart N\" to restart execution:\n");
  lit_113 = YPsb((P)"<= ");
  lit_114 = YPPsym((P)"x-1480");
  lit_115 = YPPsym((P)"x-1483");
  lit_116 = YPPsym((P)"x-1486");
  lit_117 = YPPsym((P)"x-1489");
  lit_118 = YPPsym((P)"x-1492");
  lit_119 = YPPsym((P)"x-1495");
  lit_120 = YPPsym((P)"x-1498");
  lit_121 = YPPsym((P)"x-1501");
  lit_122 = YPPsym((P)"x-1504");
  lit_123 = YPPsym((P)"x-1507");
  lit_124 = YPPsym((P)"x-1510");
  lit_125 = YPPsym((P)"x-1513");
  lit_126 = YPPsym((P)"x-1516");
  lit_127 = YPPsym((P)"x-1519");
  lit_128 = YPsb((P)"=> ");
  lit_129 = YPPsym((P)"cmd_frame-var");
  lit_130 = YPsb((P)"=> ");
  lit_131 = YPPsym((P)"cmd_frame");
  lit_132 = YPPsym((P)"cmd_backtrace");
  lit_133 = YPPsym((P)"cmd_bt");
  lit_134 = YPPsym((P)"cmd_auto-eval");
  lit_135 = YPPsym((P)"cmd_ast-eval");
  lit_136 = YPPsym((P)"cmd_g2c-eval");
  lit_137 = YPPsym((P)"cmd_in");
  lit_138 = YPPsym((P)"cmd_restart");
  lit_139 = YPPsym((P)"cmd_restarts");
  lit_140 = YPPsym((P)"cmd_handlers");
  lit_141 = YPPsym((P)"cmd_top");
  lit_142 = YPPsym((P)"cmd_up");
  lit_143 = YPPsym((P)"cmd_quit");
  T178 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T178,ENVNUL,PNUL,YPfalse);
  T177 = YPsig(YPPlist(2,LITREF(lit_107),LITREF(lit_108)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T177,ENVNUL,PNUL,YPfalse);
  T176 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T176,ENVNUL,PNUL,YPfalse);
  T175 = YPsig(YPPlist(2,LITREF(lit_107),LITREF(lit_108)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T175,ENVNUL,PNUL,YPfalse);
  T174 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1519_52 = YPmet(FUNCODEREF(fun_x_1519_52),LITREF(lit_127),T174,ENVNUL,PNUL,YPfalse);
  T173 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1516_54 = YPmet(FUNCODEREF(fun_x_1516_54),LITREF(lit_126),T172,ENVNUL,PNUL,YPfalse);
  T171 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T171,ENVNUL,PNUL,YPfalse);
  T170 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1513_56 = YPmet(FUNCODEREF(fun_x_1513_56),LITREF(lit_125),T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_57 = YPmet(FUNCODEREF(fun_57),YPfalse,T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1510_58 = YPmet(FUNCODEREF(fun_x_1510_58),LITREF(lit_124),T168,ENVNUL,PNUL,YPfalse);
  T167 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T167,ENVNUL,PNUL,YPfalse);
  T166 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1507_60 = YPmet(FUNCODEREF(fun_x_1507_60),LITREF(lit_123),T166,ENVNUL,PNUL,YPfalse);
  T165 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1504_62 = YPmet(FUNCODEREF(fun_x_1504_62),LITREF(lit_122),T164,ENVNUL,PNUL,YPfalse);
  T163 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPmet(FUNCODEREF(fun_63),YPfalse,T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1501_64 = YPmet(FUNCODEREF(fun_x_1501_64),LITREF(lit_121),T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1498_66 = YPmet(FUNCODEREF(fun_x_1498_66),LITREF(lit_120),T160,ENVNUL,PNUL,YPfalse);
  T159 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_67 = YPmet(FUNCODEREF(fun_67),YPfalse,T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1495_68 = YPmet(FUNCODEREF(fun_x_1495_68),LITREF(lit_119),T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1492_70 = YPmet(FUNCODEREF(fun_x_1492_70),LITREF(lit_118),T156,ENVNUL,PNUL,YPfalse);
  T155 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T155,ENVNUL,PNUL,YPfalse);
  T154 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1489_72 = YPmet(FUNCODEREF(fun_x_1489_72),LITREF(lit_117),T154,ENVNUL,PNUL,YPfalse);
  T153 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T153,ENVNUL,PNUL,YPfalse);
  T152 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1486_74 = YPmet(FUNCODEREF(fun_x_1486_74),LITREF(lit_116),T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1483_76 = YPmet(FUNCODEREF(fun_x_1483_76),LITREF(lit_115),T150,ENVNUL,PNUL,YPfalse);
  T149 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_77 = YPmet(FUNCODEREF(fun_77),YPfalse,T149,ENVNUL,PNUL,YPfalse);
  T148 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1480_78 = YPmet(FUNCODEREF(fun_x_1480_78),LITREF(lit_114),T148,ENVNUL,PNUL,YPfalse);
  T147 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T147,ENVNUL,PNUL,YPfalse);
  T146 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T146,ENVNUL,PNUL,YPfalse);
  T145 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T145,ENVNUL,PNUL,YPfalse);
  T144 = YPsig(YPPlist(1,LITREF(lit_106)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T144,ENVNUL,PNUL,YPfalse);
  T143 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_83 = YPmet(FUNCODEREF(fun_loop_83),LITREF(lit_33),T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(YPPlist(1,LITREF(lit_105)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_84 = YPmet(FUNCODEREF(fun_84),YPfalse,T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(YPPlist(5,LITREF(lit_41),LITREF(lit_102),LITREF(lit_103),LITREF(lit_104),LITREF(lit_8)),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_PPtopPPtop_in_85 = YPmet(FUNCODEREF(fun_PPtopPPtop_in_85),LITREF(lit_101),T141,ENVNUL,PNUL,YPfalse);
  T181 = BOUNDP(YevalStopYPPtopPPtop_in);
  if (T181 != YPfalse) {
    T180 = VARREF(YevalStopYPPtopPPtop_in);
  } else {
    T180 = YPfalse;
  }
  T182 = fun_PPtopPPtop_in_85;
  T179 = XCALL2(1,VARREF(YPdefine_method),T180,T182);
  VARSET(YevalStopYPPtopPPtop_in,T179);
  lit_144 = YPsb((P)"Exit the top-level interpreter");
  T189 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_86 = YPmet(FUNCODEREF(fun_86),YPfalse,T189,ENVNUL,PNUL,YPfalse);
  T188 = YPsig(YPPlist(2,LITREF(lit_107),LITREF(lit_108)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T188,ENVNUL,PNUL,YPfalse);
  T187 = YPsig(YPPlist(1,LITREF(lit_102)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T187,ENVNUL,PNUL,YPfalse);
  T186 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_89 = YPmet(FUNCODEREF(fun_loop_89),LITREF(lit_33),T186,ENVNUL,PNUL,YPfalse);
  T185 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_90 = YPmet(FUNCODEREF(fun_90),YPfalse,T185,ENVNUL,PNUL,YPfalse);
  T184 = YPsig(YPPlist(1,LITREF(lit_103)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T184,ENVNUL,PNUL,YPfalse);
  T183 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_top_92 = YPmet(FUNCODEREF(fun_top_92),LITREF(lit_102),T183,ENVNUL,PNUL,YPfalse);
  T192 = BOUNDP(YevalStopYtop);
  if (T192 != YPfalse) {
    T191 = VARREF(YevalStopYtop);
  } else {
    T191 = YPfalse;
  }
  T193 = fun_top_92;
  T190 = XCALL2(1,VARREF(YPdefine_method),T191,T193);
  VARSET(YevalStopYtop,T190);
  lit_145 = YPPsym((P)"save-image");
  lit_146 = YPPsym((P)"image-name");
  lit_147 = YPPsym((P)"goo/user");
  T195 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_93 = YPmet(FUNCODEREF(fun_93),YPfalse,T195,ENVNUL,PNUL,YPfalse);
  T194 = YPsig(YPPlist(1,LITREF(lit_146)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalStopYsave_image = YPmet(FUNCODEREF(YevalStopYsave_image),LITREF(lit_145),T194,ENVNUL,PNUL,YPfalse);
  T196 = YevalStopYsave_image;
  VARSET(YevalStopYsave_image,T196);
  T197 = YPfalse;
  return T197;
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
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSrange;

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
  {"binding-dynamic-extent?", &module_info_evalSast, "binding-dynamic-extent?"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"open", &module_info_gooSioSport, "open"},
  {"binding-mangled-name-setter", &module_info_evalSast, "binding-mangled-name-setter"},
  {"binding-mutable?", &module_info_evalSast, "binding-mutable?"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"install-initial-bindings", &module_info_evalSast, "install-initial-bindings"},
  {"signature-specs", &module_info_evalSast, "signature-specs"},
  {"sexpr-variable?", &module_info_evalSsyntax, "sexpr-variable?"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"signature-names", &module_info_evalSast, "signature-names"},
  {"sexpr-syntax-if-pattern", &module_info_evalSsyntax, "sexpr-syntax-if-pattern"},
  {"sin", &module_info_gooSmath, "sin"},
  {"sexpr-make-anonymous-method", &module_info_evalSsyntax, "sexpr-make-anonymous-method"},
  {"function-binding", &module_info_evalSast, "function-binding"},
  {"module-uses-c-files", &module_info_evalSast, "module-uses-c-files"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {">=", &module_info_gooSmag, ">="},
  {"last", &module_info_gooScolsSseq, "last"},
  {"gooc-filename", &module_info_gooSsystem, "gooc-filename"},
  {"/", &module_info_gooSmath, "/"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"closure-creation-index", &module_info_evalSast_linearize, "closure-creation-index"},
  {"function-data-refs", &module_info_evalSast, "function-data-refs"},
  {"~=", &module_info_gooSmath, "~="},
  {"<ast-primitive>", &module_info_evalSast, "<ast-primitive>"},
  {"<box-creation>", &module_info_evalSast_linearize, "<box-creation>"},
  {"constant-index", &module_info_evalSast, "constant-index"},
  {"module-mangled-name", &module_info_evalSast, "module-mangled-name"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"$sexpr-unwind-protect-tag", &module_info_evalSsyntax, "$sexpr-unwind-protect-tag"},
  {"global-box-value", &module_info_evalSast, "global-box-value"},
  {"%su", &module_info_gooSboot, "%su"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"read", &module_info_gooSruntime, "read"},
  {"sexpr-fab-setter-name", &module_info_evalSsyntax, "sexpr-fab-setter-name"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"acos", &module_info_gooSmath, "acos"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"<fab-list>", &module_info_evalSast, "<fab-list>"},
  {"@len", &module_info_gooSboot, "@len"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"binding-inferred-type-setter", &module_info_evalSast, "binding-inferred-type-setter"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"form-definitions", &module_info_evalSast_linearize, "form-definitions"},
  {"<", &module_info_gooSmag, "<"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"form-quotations", &module_info_evalSast_linearize, "form-quotations"},
  {"program-definitions", &module_info_evalSast_linearize, "program-definitions"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"program-quotations", &module_info_evalSast_linearize, "program-quotations"},
  {"@<", &module_info_gooSboot, "@<"},
  {"<free-environment>", &module_info_evalSast, "<free-environment>"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"locals-bindings-setter", &module_info_evalSast, "locals-bindings-setter"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"$sexpr-define-syntax-tag", &module_info_evalSsyntax, "$sexpr-define-syntax-tag"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"$sexpr-quote-tag", &module_info_evalSsyntax, "$sexpr-quote-tag"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"<assignment>", &module_info_evalSast, "<assignment>"},
  {"application-binding", &module_info_evalSast, "application-binding"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"sexpr-method-signature", &module_info_evalSsyntax, "sexpr-method-signature"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"sexpr-unwind-protect-protected-form", &module_info_evalSsyntax, "sexpr-unwind-protect-protected-form"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"do-module-loader-modules", &module_info_evalSast, "do-module-loader-modules"},
  {"sexpr-if-test", &module_info_evalSsyntax, "sexpr-if-test"},
  {"=", &module_info_gooSmath, "="},
  {"<arguments>", &module_info_evalSast, "<arguments>"},
  {"even?", &module_info_gooSmath, "even?"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"add", &module_info_gooScolsScol, "add"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"<macro-reference>", &module_info_evalSast, "<macro-reference>"},
  {"when", &module_info_gooSmacros, "when"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"sexpr-text-of-quotation", &module_info_evalSsyntax, "sexpr-text-of-quotation"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"environment-module", &module_info_evalSast, "environment-module"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"function-debug-name-setter", &module_info_evalSast, "function-debug-name-setter"},
  {"function-debug-name", &module_info_evalSast, "function-debug-name"},
  {"rep", &module_info_gooSboot, "rep"},
  {"sexpr-function-signature", &module_info_evalSsyntax, "sexpr-function-signature"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"fix-let-body", &module_info_evalSast, "fix-let-body"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"assignment-form", &module_info_evalSast, "assignment-form"},
  {"<module-binding-reference>", &module_info_evalSast, "<module-binding-reference>"},
  {"register-allocate!", &module_info_evalSast_linearize, "register-allocate!"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"find-goo-file-at", &module_info_gooSsystem, "find-goo-file-at"},
  {"fix-let-types", &module_info_evalSast, "fix-let-types"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"<ast-function>", &module_info_evalSast, "<ast-function>"},
  {"<=", &module_info_gooSmag, "<="},
  {"<ast-signature>", &module_info_evalSast, "<ast-signature>"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"add-goo-personal-root-path", &module_info_gooSsystem, "add-goo-personal-root-path"},
  {"<raw-constant>", &module_info_evalSast, "<raw-constant>"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"<ast-method>", &module_info_evalSast, "<ast-method>"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"tail", &module_info_gooSboot, "tail"},
  {"binding-type", &module_info_evalSast, "binding-type"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"<module-loader>", &module_info_evalSast, "<module-loader>"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"sexpr-def?", &module_info_evalSsyntax, "sexpr-def?"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"fix-let-arguments", &module_info_evalSast, "fix-let-arguments"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"<module>", &module_info_evalSast, "<module>"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"until", &module_info_gooSmacros, "until"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"module-name-to-relpath", &module_info_evalSast, "module-name-to-relpath"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"binding-kind", &module_info_evalSast, "binding-kind"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"function-temporaries", &module_info_evalSast, "function-temporaries"},
  {"<definition>", &module_info_evalSast, "<definition>"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"def-list", &module_info_evalSast, "def-list"},
  {"closure-creation-free", &module_info_evalSast_linearize, "closure-creation-free"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"locals-functions-setter", &module_info_evalSast, "locals-functions-setter"},
  {"$sexpr-locals-tag", &module_info_evalSsyntax, "$sexpr-locals-tag"},
  {"|", &module_info_gooSmath, "|"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"flatten-seqs", &module_info_evalSast_linearize, "flatten-seqs"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"$e", &module_info_gooSmath, "$e"},
  {"items", &module_info_gooScolsScol, "items"},
  {"<local-assignment>", &module_info_evalSast, "<local-assignment>"},
  {"function-temporaries-setter", &module_info_evalSast, "function-temporaries-setter"},
  {"function-self-recursive?-setter", &module_info_evalSast, "function-self-recursive?-setter"},
  {"locals-body-setter", &module_info_evalSast, "locals-body-setter"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"sexpr-loc-bound-signatures", &module_info_evalSsyntax, "sexpr-loc-bound-signatures"},
  {"%compile", &module_info_gooSsystem, "%compile"},
  {"get-standard-read-macro", &module_info_gooSioSread, "get-standard-read-macro"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"function-value", &module_info_evalSast, "function-value"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"<computed-program>", &module_info_evalSast, "<computed-program>"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"not", &module_info_gooSboot, "not"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"sexpr-isa-prop-inits", &module_info_evalSsyntax, "sexpr-isa-prop-inits"},
  {"<dynamic-assignment>", &module_info_evalSast, "<dynamic-assignment>"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"%binding-value-setter", &module_info_evalSast_eval, "%binding-value-setter"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"reference-frame-number", &module_info_evalSast, "reference-frame-number"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"sexpr-prop-type", &module_info_evalSsyntax, "sexpr-prop-type"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"$goo-boot-module-name", &module_info_evalSast, "$goo-boot-module-name"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"binding-global-box-setter", &module_info_evalSast, "binding-global-box-setter"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"sexpr-let->combination", &module_info_evalSsyntax, "sexpr-let->combination"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"<binding>", &module_info_evalSast, "<binding>"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"def", &module_info_gooSboot, "def"},
  {"t?", &module_info_gooStypes, "t?"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"probe-module", &module_info_evalSast, "probe-module"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"sexpr-syntax-if-value", &module_info_evalSsyntax, "sexpr-syntax-if-value"},
  {"<locals>", &module_info_evalSast, "<locals>"},
  {"sexpr-method-body", &module_info_evalSsyntax, "sexpr-method-body"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"<ast-generic>", &module_info_evalSast, "<ast-generic>"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"sexpr-syntax-definition-value", &module_info_evalSsyntax, "sexpr-syntax-definition-value"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"*", &module_info_gooSmath, "*"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, "binding-dynamic-extent?-setter"},
  {"<runtime-reference>", &module_info_evalSast, "<runtime-reference>"},
  {"objectify-quotation", &module_info_evalSast, "objectify-quotation"},
  {"div", &module_info_gooSmath, "div"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"binding-info-setter", &module_info_evalSast, "binding-info-setter"},
  {"binding-info", &module_info_evalSast, "binding-info"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"application-known?-setter", &module_info_evalSast, "application-known?-setter"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"binding-inferred-type", &module_info_evalSast, "binding-inferred-type"},
  {"sequentialize", &module_info_evalSast, "sequentialize"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"for", &module_info_gooSmacros, "for"},
  {"floor", &module_info_gooSmath, "floor"},
  {"sexpr-definition-variable", &module_info_evalSsyntax, "sexpr-definition-variable"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"sexpr-assignment-value", &module_info_evalSsyntax, "sexpr-assignment-value"},
  {"binding-mangled-name", &module_info_evalSast, "binding-mangled-name"},
  {"locals-bindings", &module_info_evalSast, "locals-bindings"},
  {"add-goo-root-path", &module_info_gooSsystem, "add-goo-root-path"},
  {"log", &module_info_gooSmath, "log"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"$sexpr-define-class-tag", &module_info_evalSsyntax, "$sexpr-define-class-tag"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"sexpr-fab-setter", &module_info_evalSsyntax, "sexpr-fab-setter"},
  {"seq", &module_info_gooSboot, "seq"},
  {"t<", &module_info_gooStypes, "t<"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"min", &module_info_gooSmag, "min"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"<program>", &module_info_evalSast, "<program>"},
  {"get", &module_info_gooSioSport, "get"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"error", &module_info_gooSboot, "error"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"program-form", &module_info_evalSast_linearize, "program-form"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"sexpr-monitor-expand", &module_info_evalSsyntax, "sexpr-monitor-expand"},
  {"asin", &module_info_gooSmath, "asin"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"module-mangled-string-name-setter", &module_info_evalSast, "module-mangled-string-name-setter"},
  {"dp", &module_info_gooSboot, "dp"},
  {"$sexpr-isa-tag", &module_info_evalSsyntax, "$sexpr-isa-tag"},
  {"function-index-setter", &module_info_evalSast, "function-index-setter"},
  {"program-type-setter", &module_info_evalSast, "program-type-setter"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"reference-offset", &module_info_evalSast_linearize, "reference-offset"},
  {"objectify-with-subtransaction", &module_info_evalSast, "objectify-with-subtransaction"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"report-undefined-global-bindings", &module_info_evalSast, "report-undefined-global-bindings"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"sexpr-unquote-splicing?", &module_info_evalSsyntax, "sexpr-unquote-splicing?"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"$sexpr-iterate-tag", &module_info_evalSsyntax, "$sexpr-iterate-tag"},
  {"sexpr-define-class-parents", &module_info_evalSsyntax, "sexpr-define-class-parents"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"closurize-main!", &module_info_evalSast_linearize, "closurize-main!"},
  {"quote", &module_info_gooSboot, "quote"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"sexpr-make-begin", &module_info_evalSsyntax, "sexpr-make-begin"},
  {"<ast-primitive-definition>", &module_info_evalSast, "<ast-primitive-definition>"},
  {"<predefined-application>", &module_info_evalSast, "<predefined-application>"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"nul", &module_info_gooSboot, "nul"},
  {"sexpr-forward-primitive?", &module_info_evalSsyntax, "sexpr-forward-primitive?"},
  {"df", &module_info_gooSboot, "df"},
  {"function-nary?", &module_info_evalSast, "function-nary?"},
  {"eval", &module_info_evalSsyntax, "eval"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"reference-called-function?-setter", &module_info_evalSast, "reference-called-function?-setter"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"$char-long-names", &module_info_gooSioSread, "$char-long-names"},
  {"reference-frame-offset", &module_info_evalSast, "reference-frame-offset"},
  {"file-copy", &module_info_gooSsystem, "file-copy"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"col", &module_info_gooScolsScol, "col"},
  {"remove-modules-by-name!", &module_info_evalSast, "remove-modules-by-name!"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"t=", &module_info_gooStypes, "t="},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"<module-binding>", &module_info_evalSast, "<module-binding>"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"module-target-environment", &module_info_evalSast, "module-target-environment"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"dg", &module_info_gooSboot, "dg"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"dm", &module_info_gooSboot, "dm"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"while", &module_info_gooSmacros, "while"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"binding-module-name", &module_info_evalSast, "binding-module-name"},
  {"time", &module_info_gooSsystem, "time"},
  {"ds", &module_info_gooSboot, "ds"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"locals-functions", &module_info_evalSast, "locals-functions"},
  {"insert-box!", &module_info_evalSast_linearize, "insert-box!"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"if", &module_info_gooSboot, "if"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"sexpr-expand-backquote", &module_info_evalSsyntax, "sexpr-expand-backquote"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"update-walk!", &module_info_evalSast_linearize, "update-walk!"},
  {"1-", &module_info_gooSmath, "1-"},
  {"t+", &module_info_gooStypes, "t+"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"fab-g2c-module", &module_info_evalSast, "fab-g2c-module"},
  {"dc", &module_info_gooSboot, "dc"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"and", &module_info_gooSmacros, "and"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"load-in", &module_info_evalSast, "load-in"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"~", &module_info_gooSmath, "~"},
  {"in", &module_info_gooSioSport, "in"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"<global-box>", &module_info_evalSast, "<global-box>"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"locals-body", &module_info_evalSast, "locals-body"},
  {"function-registers-setter", &module_info_evalSast, "function-registers-setter"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"free-environment", &module_info_evalSast, "free-environment"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"head", &module_info_gooSboot, "head"},
  {"find-goo-file-in-path", &module_info_gooSsystem, "find-goo-file-in-path"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"<box-read>", &module_info_evalSast_linearize, "<box-read>"},
  {"bind-exit-main-fun", &module_info_evalSast, "bind-exit-main-fun"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"tan", &module_info_gooSmath, "tan"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"sexpr-isa-parent", &module_info_evalSsyntax, "sexpr-isa-parent"},
  {"extract-things!", &module_info_evalSast_linearize, "extract-things!"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"gather-temporaries!", &module_info_evalSast_linearize, "gather-temporaries!"},
  {"round", &module_info_gooSmath, "round"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"<programs>", &module_info_evalSast, "<programs>"},
  {"pow", &module_info_gooSmath, "pow"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"sexpr-prop-init-var", &module_info_evalSsyntax, "sexpr-prop-init-var"},
  {"mod", &module_info_gooSmath, "mod"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"ct", &module_info_gooSboot, "ct"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"$sexpr-macro-expand-tag", &module_info_evalSsyntax, "$sexpr-macro-expand-tag"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"$sexpr-syntax-if-tag", &module_info_evalSsyntax, "$sexpr-syntax-if-tag"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"sexpr-signature-value", &module_info_evalSsyntax, "sexpr-signature-value"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"sexpr-block-body", &module_info_evalSsyntax, "sexpr-block-body"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"box-reference", &module_info_evalSast_linearize, "box-reference"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"<closure-creation>", &module_info_evalSast_linearize, "<closure-creation>"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"<dynamic-definition>", &module_info_evalSast, "<dynamic-definition>"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"module-syntax-environment", &module_info_evalSast, "module-syntax-environment"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"form-program", &module_info_evalSast_linearize, "form-program"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"%time", &module_info_gooSboot, "%time"},
  {"$sexpr-if-tag", &module_info_evalSsyntax, "$sexpr-if-tag"},
  {"module-binding", &module_info_evalSast, "module-binding"},
  {"let", &module_info_gooSboot, "let"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"pe-msg", &module_info_gooSioSwrite, "pe-msg"},
  {"*current-handlers*", &module_info_gooSruntime, "*current-handlers*"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"into", &module_info_gooScolsScol, "into"},
  {"binding-native-to?", &module_info_evalSast, "binding-native-to?"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"sexpr-unquote?", &module_info_evalSsyntax, "sexpr-unquote?"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"application-known?", &module_info_evalSast, "application-known?"},
  {"sexpr-define-class?", &module_info_evalSsyntax, "sexpr-define-class?"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"<alternative>", &module_info_evalSast, "<alternative>"},
  {"sexpr-make-method", &module_info_evalSsyntax, "sexpr-make-method"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"so-load", &module_info_gooSsystem, "so-load"},
  {"function-source-setter", &module_info_evalSast, "function-source-setter"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"sexpr-fab-getter", &module_info_evalSsyntax, "sexpr-fab-getter"},
  {"zipped", &module_info_gooSruntime, "zipped"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"lift!", &module_info_evalSast_linearize, "lift!"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"sexpr-block-name", &module_info_evalSsyntax, "sexpr-block-name"},
  {"any?", &module_info_gooStypes, "any?"},
  {"*register-passive?*", &module_info_evalSast_linearize, "*register-passive?*"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"init-environment-for-eval", &module_info_evalSast, "init-environment-for-eval"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"sexpr-syntax-if-else", &module_info_evalSsyntax, "sexpr-syntax-if-else"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"ast-evaluate", &module_info_evalSast, "ast-evaluate"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"t*", &module_info_gooSboot, "t*"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"sexpr-loc-bound-names", &module_info_evalSsyntax, "sexpr-loc-bound-names"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"set-standard-read-macro!", &module_info_gooSioSread, "set-standard-read-macro!"},
  {"sexpr-function-definition-value", &module_info_evalSsyntax, "sexpr-function-definition-value"},
  {"logn", &module_info_gooSmath, "logn"},
  {"function-signature-setter", &module_info_evalSast, "function-signature-setter"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"sexpr-assignment-variable", &module_info_evalSsyntax, "sexpr-assignment-variable"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"sexpr-variable-name", &module_info_evalSsyntax, "sexpr-variable-name"},
  {"alternative-condition", &module_info_evalSast, "alternative-condition"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"$sexpr-method-tag", &module_info_evalSsyntax, "$sexpr-method-tag"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"function-index", &module_info_evalSast, "function-index"},
  {"set", &module_info_gooSboot, "set"},
  {"sexpr-syntax-definition-variable", &module_info_evalSsyntax, "sexpr-syntax-definition-variable"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"program-type", &module_info_evalSast, "program-type"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"as-lst", &module_info_evalSast, "as-lst"},
  {"ast-define-binding", &module_info_evalSast, "ast-define-binding"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"unchecked-runtime-environment", &module_info_evalSast, "unchecked-runtime-environment"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"sexpr-function-body", &module_info_evalSsyntax, "sexpr-function-body"},
  {"sexpr-sequence->begin", &module_info_evalSsyntax, "sexpr-sequence->begin"},
  {"<unwind-protect>", &module_info_evalSast, "<unwind-protect>"},
  {"environment-bindings", &module_info_evalSast, "environment-bindings"},
  {"lst", &module_info_gooSboot, "lst"},
  {"sexpr-function-definition-variable", &module_info_evalSsyntax, "sexpr-function-definition-variable"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"function-free-setter", &module_info_evalSast, "function-free-setter"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"abs", &module_info_gooSmath, "abs"},
  {"reference-called-function?", &module_info_evalSast, "reference-called-function?"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"signature-arity-setter", &module_info_evalSast, "signature-arity-setter"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"try", &module_info_gooSboot, "try"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"binding-index-setter", &module_info_evalSast, "binding-index-setter"},
  {"sexpr-if-else", &module_info_evalSsyntax, "sexpr-if-else"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"<ast-macro-definition>", &module_info_evalSast, "<ast-macro-definition>"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"binding-global-box", &module_info_evalSast, "binding-global-box"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"<box-write>", &module_info_evalSast_linearize, "<box-write>"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"<free-reference>", &module_info_evalSast_linearize, "<free-reference>"},
  {"do-named-static-global-bindings", &module_info_evalSast, "do-named-static-global-bindings"},
  {">", &module_info_gooSmag, ">"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"%load", &module_info_gooSsystem, "%load"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"~==", &module_info_gooSmath, "~=="},
  {"renew", &module_info_gooSmacros, "renew"},
  {"application-function", &module_info_evalSast, "application-function"},
  {"set-module-environments", &module_info_evalSast, "set-module-environments"},
  {"unwind-protect-protected-thunk", &module_info_evalSast, "unwind-protect-protected-thunk"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"$sexpr-define-tag", &module_info_evalSsyntax, "$sexpr-define-tag"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"$sexpr-bind-exit-tag", &module_info_evalSsyntax, "$sexpr-bind-exit-tag"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"sexpr-make-macro-function", &module_info_evalSsyntax, "sexpr-make-macro-function"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"always", &module_info_gooSruntime, "always"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"function-bindings", &module_info_evalSast, "function-bindings"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"module-name", &module_info_evalSast, "module-name"},
  {"<magic-reference>", &module_info_evalSast, "<magic-reference>"},
  {"signature-value", &module_info_evalSast, "signature-value"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"<sequential>", &module_info_evalSast, "<sequential>"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"module-mangled-string-name", &module_info_evalSast, "module-mangled-string-name"},
  {"as", &module_info_gooStypes, "as"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"<compile-time>", &module_info_evalSast, "<compile-time>"},
  {"alternative-consequent", &module_info_evalSast, "alternative-consequent"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"dss", &module_info_gooSboot, "dss"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"$sexpr-define-generic-tag", &module_info_evalSsyntax, "$sexpr-define-generic-tag"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"find-binding", &module_info_evalSast, "find-binding"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"function-registers", &module_info_evalSast, "function-registers"},
  {"function-self-recursive?", &module_info_evalSast, "function-self-recursive?"},
  {"$sexpr-set-tag", &module_info_evalSsyntax, "$sexpr-set-tag"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"<runtime-assignment>", &module_info_evalSast, "<runtime-assignment>"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"alternative-alternant", &module_info_evalSast, "alternative-alternant"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"$sexpr-prop-tag", &module_info_evalSsyntax, "$sexpr-prop-tag"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"put", &module_info_gooSioSport, "put"},
  {"+", &module_info_gooSmath, "+"},
  {"-", &module_info_gooSmath, "-"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"use", &module_info_gooSboot, "use"},
  {"function-body-setter", &module_info_evalSast, "function-body-setter"},
  {"compile-time-program", &module_info_evalSast, "compile-time-program"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"rem", &module_info_gooSmath, "rem"},
  {"sexpr-prop-owner", &module_info_evalSsyntax, "sexpr-prop-owner"},
  {"module-exports", &module_info_evalSast, "module-exports"},
  {"binding-dotted?-setter", &module_info_evalSast, "binding-dotted?-setter"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"$sexpr-define-method-tag", &module_info_evalSsyntax, "$sexpr-define-method-tag"},
  {"program-register-setter", &module_info_evalSast, "program-register-setter"},
  {"sexpr-loc-raw-body", &module_info_evalSsyntax, "sexpr-loc-raw-body"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"&", &module_info_gooSmath, "&"},
  {"<application>", &module_info_evalSast, "<application>"},
  {"binding-value-setter", &module_info_evalSast, "binding-value-setter"},
  {"*goo-build-root*", &module_info_gooSsystem, "*goo-build-root*"},
  {"signature-bindings-setter", &module_info_evalSast, "signature-bindings-setter"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"%get", &module_info_gooSboot, "%get"},
  {"map", &module_info_gooSmacros, "map"},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, "unwind-protect-cleanup-thunk"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"@==", &module_info_gooSboot, "@=="},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"sexpr-def-value", &module_info_evalSsyntax, "sexpr-def-value"},
  {"assignment-binding", &module_info_evalSast, "assignment-binding"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"<dynamic-reference>", &module_info_evalSast, "<dynamic-reference>"},
  {"signature-nary?-setter", &module_info_evalSast, "signature-nary?-setter"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"cos", &module_info_gooSmath, "cos"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"<constant>", &module_info_evalSast, "<constant>"},
  {"<renamed-local-binding>", &module_info_evalSast_linearize, "<renamed-local-binding>"},
  {"find", &module_info_gooScolsScol, "find"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"op", &module_info_gooSmacros, "op"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"<monitor>", &module_info_evalSast, "<monitor>"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"$sexpr-monitor-tag", &module_info_evalSsyntax, "$sexpr-monitor-tag"},
  {"sexpr-isa-init-values", &module_info_evalSsyntax, "sexpr-isa-init-values"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"objectify-signature", &module_info_evalSast, "objectify-signature"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"atan", &module_info_gooSmath, "atan"},
  {"sexpr-variable-type", &module_info_evalSsyntax, "sexpr-variable-type"},
  {"function-source", &module_info_evalSast, "function-source"},
  {"sexpr-prop-init", &module_info_evalSsyntax, "sexpr-prop-init"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"module-loader-module-type", &module_info_evalSast, "module-loader-module-type"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"*goo-personal-root*", &module_info_gooSsystem, "*goo-personal-root*"},
  {">>", &module_info_gooSmath, ">>"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"signature-specs-setter", &module_info_evalSast, "signature-specs-setter"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"signature-names-setter", &module_info_evalSast, "signature-names-setter"},
  {"monitor-handler", &module_info_evalSast, "monitor-handler"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"1+", &module_info_gooSmath, "1+"},
  {"sexpr-syntax-if-then", &module_info_evalSsyntax, "sexpr-syntax-if-then"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"round/", &module_info_gooSmath, "round/"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"fix-let-bindings-setter", &module_info_evalSast, "fix-let-bindings-setter"},
  {"close", &module_info_gooSioSport, "close"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"<reference>", &module_info_evalSast, "<reference>"},
  {"def-programs", &module_info_evalSast, "def-programs"},
  {"application-arguments", &module_info_evalSast, "application-arguments"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"analyze-ast", &module_info_evalSast_linearize, "analyze-ast"},
  {"function-signature", &module_info_evalSast, "function-signature"},
  {"function-data-refs-setter", &module_info_evalSast, "function-data-refs-setter"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"module-mangled-name-setter", &module_info_evalSast, "module-mangled-name-setter"},
  {"constant-index-setter", &module_info_evalSast, "constant-index-setter"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"<global-reference>", &module_info_evalSast, "<global-reference>"},
  {"global-box-value-setter", &module_info_evalSast, "global-box-value-setter"},
  {"%put", &module_info_gooSboot, "%put"},
  {"<static-global-environment>", &module_info_evalSast, "<static-global-environment>"},
  {"monitor-main-thunk", &module_info_evalSast, "monitor-main-thunk"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"sexpr-operands", &module_info_evalSsyntax, "sexpr-operands"},
  {"environment-uses-modules", &module_info_evalSast, "environment-uses-modules"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"signature-value-setter", &module_info_evalSast, "signature-value-setter"},
  {"<local-binding>", &module_info_evalSast, "<local-binding>"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"do-static-global-bindings", &module_info_evalSast, "do-static-global-bindings"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"function-free", &module_info_evalSast, "function-free"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"fin", &module_info_gooSboot, "fin"},
  {"loc", &module_info_gooSboot, "loc"},
  {"max", &module_info_gooSmag, "max"},
  {"dl", &module_info_gooSboot, "dl"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"$sexpr-let-tag", &module_info_evalSsyntax, "$sexpr-let-tag"},
  {"reference-binding", &module_info_evalSast, "reference-binding"},
  {"signature-arity", &module_info_evalSast, "signature-arity"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"$sexpr-define-function-tag", &module_info_evalSsyntax, "$sexpr-define-function-tag"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_evalSsyntax, "sexpr-unwind-protect-cleanup-forms"},
  {"tup", &module_info_gooSboot, "tup"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"constant-value", &module_info_evalSast, "constant-value"},
  {"binding-index", &module_info_evalSast, "binding-index"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"sexpr-if-then", &module_info_evalSsyntax, "sexpr-if-then"},
  {"app", &module_info_gooSmacros, "app"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"monitor-type", &module_info_evalSast, "monitor-type"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"export", &module_info_gooSboot, "export"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"runtime-environment", &module_info_evalSast, "runtime-environment"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"binding-name", &module_info_evalSast, "binding-name"},
  {"<bind-exit>", &module_info_evalSast, "<bind-exit>"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"sexpr-make-application", &module_info_evalSsyntax, "sexpr-make-application"},
  {"assignment-form-setter", &module_info_evalSast, "assignment-form-setter"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"fix-let-types-setter", &module_info_evalSast, "fix-let-types-setter"},
  {"out", &module_info_gooSioSport, "out"},
  {"<regular-application>", &module_info_evalSast, "<regular-application>"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"application-tail?", &module_info_evalSast, "application-tail?"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"mif", &module_info_gooSboot, "mif"},
  {"<static-module-binding-reference>", &module_info_evalSast, "<static-module-binding-reference>"},
  {"len", &module_info_gooStypes, "len"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"or", &module_info_gooSmacros, "or"},
  {"binding-type-setter", &module_info_evalSast, "binding-type-setter"},
  {"new", &module_info_gooSboot, "new"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"sexpr-bind-pattern-variables", &module_info_evalSsyntax, "sexpr-bind-pattern-variables"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"msg*", &module_info_gooSioSwrite, "msg*"},
  {"load-module", &module_info_evalSast, "load-module"},
  {"fix-let-bindings", &module_info_evalSast, "fix-let-bindings"},
  {"fix-let-arguments-setter", &module_info_evalSast, "fix-let-arguments-setter"},
  {"<bound?>", &module_info_evalSast, "<bound?>"},
  {"find-environment-module", &module_info_evalSast, "find-environment-module"},
  {"monitor-info", &module_info_evalSast, "monitor-info"},
  {"reference-self?", &module_info_evalSast_linearize, "reference-self?"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%im", &module_info_gooSboot, "%im"},
  {"fix-let-body-setter", &module_info_evalSast, "fix-let-body-setter"},
  {"port2str", &module_info_gooSioSport, "port2str"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"$sexpr-quasiquote-tag", &module_info_evalSsyntax, "$sexpr-quasiquote-tag"},
  {"<immediate-constant>", &module_info_evalSast, "<immediate-constant>"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"<real-reference>", &module_info_evalSast, "<real-reference>"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"function-body", &module_info_evalSast, "function-body"},
  {"recurring-write", &module_info_gooSioSwrite, "recurring-write"},
  {"<local-reference>", &module_info_evalSast, "<local-reference>"},
  {"$sexpr-def-tag", &module_info_evalSsyntax, "$sexpr-def-tag"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"ast-contains-fun?", &module_info_evalSast_linearize, "ast-contains-fun?"},
  {"init-ast", &module_info_evalSast, "init-ast"},
  {"monitor-test", &module_info_evalSast, "monitor-test"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"sexpr-prop-name", &module_info_evalSsyntax, "sexpr-prop-name"},
  {"binding-dotted?", &module_info_evalSast, "binding-dotted?"},
  {"%binding-value", &module_info_evalSast_eval, "%binding-value"},
  {"program-register", &module_info_evalSast, "program-register"},
  {"sexpr-loc-bound-bodies", &module_info_evalSsyntax, "sexpr-loc-bound-bodies"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"sexpr-operator", &module_info_evalSsyntax, "sexpr-operator"},
  {"binding-locative", &module_info_evalSast, "binding-locative"},
  {"binding-locative-setter", &module_info_evalSast, "binding-locative-setter"},
  {"^", &module_info_gooSmath, "^"},
  {"sexpr-definition-value", &module_info_evalSsyntax, "sexpr-definition-value"},
  {"@+", &module_info_gooSboot, "@+"},
  {"binding-value", &module_info_evalSast, "binding-value"},
  {"%str", &module_info_gooSboot, "%str"},
  {"<passive-program>", &module_info_evalSast, "<passive-program>"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"sexpr-iterate->loc", &module_info_evalSsyntax, "sexpr-iterate->loc"},
  {"<global-assignment>", &module_info_evalSast, "<global-assignment>"},
  {"signature-bindings", &module_info_evalSast, "signature-bindings"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"<fix-let>", &module_info_evalSast, "<fix-let>"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"$sexpr-begin-tag", &module_info_evalSsyntax, "$sexpr-begin-tag"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"sexpr-def-variable", &module_info_evalSsyntax, "sexpr-def-variable"},
  {"==", &module_info_gooSmacros, "=="},
  {"signature-nary?", &module_info_evalSast, "signature-nary?"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%binding-bound?", &module_info_evalSast_eval, "%binding-bound?"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"bound?-reference", &module_info_evalSast, "bound?-reference"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"match", &module_info_gooSmacros, "match"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"sexpr-isa-init-props", &module_info_evalSsyntax, "sexpr-isa-init-props"},
  {"<top-level-form>", &module_info_evalSast_linearize, "<top-level-form>"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"fun", &module_info_gooSboot, "fun"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"now", &module_info_gooScolsScol, "now"},
  {"*module-search-path*", &module_info_gooSsystem, "*module-search-path*"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"read-delimited-list", &module_info_gooSioSread, "read-delimited-list"},
  {"env-object-name", &module_info_evalSast, "env-object-name"},
  {"nil", &module_info_gooSboot, "nil"},
  {"sexpr-prop-init?", &module_info_evalSsyntax, "sexpr-prop-init?"},
  {"binding-module", &module_info_evalSast, "binding-module"},
  {"case", &module_info_gooSmacros, "case"},
  {"do", &module_info_gooSmacros, "do"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"unconstrained-type?", &module_info_evalSast_linearize, "unconstrained-type?"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"esc", &module_info_gooSboot, "esc"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"assignment-reference", &module_info_evalSast, "assignment-reference"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"box-form", &module_info_evalSast_linearize, "box-form"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"backtrace", CVAR, &YevalStopYbacktrace},
  {"bt", CVAR, &YevalStopYbt},
  {"auto-run", CVAR, &YevalStopYauto_run},
  {"print-result-expression", CVAR, &YevalStopYprint_result_expression},
  {"do-restart", CVAR, &YevalStopYdo_restart},
  {"load-file", CVAR, &YevalStopYload_file},
  {"str-eval", CVAR, &YevalStopYstr_eval},
  {"str-parse-in", CVAR, &YevalStopYstr_parse_in},
  {"frame", CVAR, &YevalStopYframe},
  {"%%bottom%%g2c-run", CVAR, &YevalStopYPPbottomPPg2c_run},
  {"save-image", CVAR, &YevalStopYsave_image},
  {"run", DVAR, &YevalStopYrun},
  {"esctst", CVAR, &YevalStopYesctst},
  {"for-frames", PVAR, NULL},
  {"str-eval-in", CVAR, &YevalStopYstr_eval_in},
  {"parse", CVAR, &YevalStopYparse},
  {"%%bottom%%ast-run", CVAR, &YevalStopYPPbottomPPast_run},
  {"frame-var", CVAR, &YevalStopYframe_var},
  {"prompt-for-command-expression", CVAR, &YevalStopYprompt_for_command_expression},
  {"g2c-eval", CVAR, &YevalStopYg2c_eval},
  {"read-file", CVAR, &YevalStopYread_file},
  {"eval-in", CVAR, &YevalStopYeval_in},
  {"top", CVAR, &YevalStopYtop},
  {"parse-in", CVAR, &YevalStopYparse_in},
  {"$g2c-eval?", CVAR, &YevalStopYDg2c_evalQ},
  {"for-user-frames", PVAR, NULL},
  {"<keyboard-interrupt>", CVAR, &YevalStopYLkeyboard_interruptG},
  {"load", CVAR, &YevalStopYload},
  {"compiled-file?", CVAR, &YevalStopYcompiled_fileQ},
  {"%%top%%top-in", CVAR, &YevalStopYPPtopPPtop_in},
  {"str-parse", CVAR, &YevalStopYstr_parse},
  {"auto-eval", CVAR, &YevalStopYauto_eval},
  {"do-stack-frames", CVAR, &YevalStopYdo_stack_frames},
  {"---main-0---", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"backtrace", "backtrace"},
  {"g2c-eval", "g2c-eval"},
  {"bt", "bt"},
  {"load-file", "load-file"},
  {"frame", "frame"},
  {"eval", "eval"},
  {"esctst", "esctst"},
  {"save-image", "save-image"},
  {"frame-var", "frame-var"},
  {"read-file", "read-file"},
  {"do-stack-frames", "do-stack-frames"},
  {"top", "top"},
  {"parse-in", "parse-in"},
  {"load", "load"},
  {"auto-eval", "auto-eval"},
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
