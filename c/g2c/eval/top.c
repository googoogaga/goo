/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/top */

EXT(Ynot,"goo/boot","not");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YevalSsyntaxYsexpr_function_definition_adjectives,"eval/syntax","sexpr-function-definition-adjectives");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
DEF(YevalStopYframe,"eval/top","frame");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yhead,"goo/boot","head");
EXT(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
DEF(YevalStopYD,"eval/top","$");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
DEF(YevalStopYauto_run,"eval/top","auto-run");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
EXT(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
EXT(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
DEF(YevalStopYdo_restart,"eval/top","do-restart");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YLcolG,"goo/boot","<col>");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooStypesYas,"goo/types","as");
EXT(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YgooSmathYC,"goo/math","^");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
EXT(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
EXT(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
DEF(YevalStopYPPbottomPPg2c_run,"eval/top","%%bottom%%g2c-run");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
DYNEXT(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
DEF(YevalStopYDDD,"eval/top","$$$");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
DEF(YevalStopYstr_eval_in,"eval/top","str-eval-in");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
DEF(YevalStopYprint_result_expression,"eval/top","print-result-expression");
DEF(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
DEF(YevalStopYPPtopPPtop_in,"eval/top","%%top%%top-in");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
EXT(Yclone,"goo/boot","clone");
EXT(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
DEF(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YLintG,"goo/boot","<int>");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
DEF(YevalStopYread_file,"eval/top","read-file");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(Ytup,"goo/boot","tup");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
DEF(YevalStopYstr_parse_in,"eval/top","str-parse-in");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YtT,"goo/boot","t*");
EXT(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSioSportYput,"goo/io/port","put");
DEF(YevalStopYbt,"eval/top","bt");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(YLunionG,"goo/boot","<union>");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
DEF(YevalStopYload_file,"eval/top","load-file");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(Yas_error,"goo/boot","as-error");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YLanyG,"goo/boot","<any>");
DEF(YevalStopYDg2c_evalQ,"eval/top","$g2c-eval?");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YevalSastYmodule_uses_c_libraries,"eval/ast","module-uses-c-libraries");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
DEF(YevalStopYcompiled_fileQ,"eval/top","compiled-file?");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(Ynil,"goo/boot","nil");
EXT(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathY_,"goo/math","-");
EXT(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
DYNDEF(YevalStopYrun,"eval/top","run");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
EXT(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
DEF(YevalStopYeval_in,"eval/top","eval-in");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
DEF(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
DEF(YevalStopYsave_image,"eval/top","save-image");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
EXT(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(YgooSconditionsYdescribe_handler,"goo/conditions","describe-handler");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YevalSast_linearizeYast_contains_funQ,"eval/ast-linearize","ast-contains-fun?");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
DEF(YevalStopYPPbottomPPast_run,"eval/top","%%bottom%%ast-run");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYdiv,"goo/math","div");
DEF(YevalStopYload,"eval/top","load");
EXT(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YevalSast_linearizeYunconstrained_typeQ,"eval/ast-linearize","unconstrained-type?");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooSmathYN,"goo/math","~");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
DEF(YevalStopYparse,"eval/top","parse");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
EXT(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
EXT(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
DEF(YevalStopYprompt_for_command_expression,"eval/top","prompt-for-command-expression");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
EXT(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
EXT(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
EXT(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
DEF(YevalStopYesctst,"eval/top","esctst");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Ytail,"goo/boot","tail");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YevalSastYmodule_uses_c_includes,"eval/ast","module-uses-c-includes");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
DEF(YevalStopYstr_eval,"eval/top","str-eval");
EXT(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
DEF(YevalStopYDD,"eval/top","$$");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YLstrG,"goo/boot","<str>");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
DEF(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYA,"goo/math","+");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
DEF(YevalStopYtop,"eval/top","top");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooSmathYE,"goo/math","=");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
EXT(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(Ynew,"goo/boot","new");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmathYB,"goo/math","&");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
EXT(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YevalSast_linearizeYanalyze_ast,"eval/ast-linearize","analyze-ast");
EXT(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YevalSast_linearizeYprogram_bindings,"eval/ast-linearize","program-bindings");
EXT(YgooSmathYround,"goo/math","round");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
DEF(YevalStopYframe_var,"eval/top","frame-var");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
DEF(YevalStopYparse_in,"eval/top","parse-in");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YisaQ,"goo/boot","isa?");
EXT(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
EXT(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
DEF(YevalStopYstr_parse,"eval/top","str-parse");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yunexec,"goo/boot","unexec");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_123);
DEFLIT(lit_109);
DEFLIT(lit_43);
DEFLIT(lit_168);
DEFLIT(lit_23);
DEFLIT(lit_17);
DEFLIT(lit_194);
DEFLIT(lit_1);
DEFLIT(lit_195);
DEFLIT(lit_175);
DEFLIT(lit_6);
DEFLIT(lit_146);
DEFLIT(lit_72);
DEFLIT(lit_171);
DEFLIT(lit_15);
DEFLIT(lit_93);
DEFLIT(lit_176);
DEFLIT(lit_74);
DEFLIT(lit_70);
DEFLIT(lit_151);
DEFLIT(lit_129);
DEFLIT(lit_57);
DEFLIT(lit_42);
DEFLIT(lit_28);
DEFLIT(lit_69);
DEFLIT(lit_35);
DEFLIT(lit_52);
DEFLIT(lit_115);
DEFLIT(lit_49);
DEFLIT(lit_154);
DEFLIT(lit_65);
DEFLIT(lit_86);
DEFLIT(lit_191);
DEFLIT(lit_159);
DEFLIT(lit_182);
DEFLIT(lit_114);
DEFLIT(lit_161);
DEFLIT(lit_79);
DEFLIT(lit_19);
DEFLIT(lit_134);
DEFLIT(lit_10);
DEFLIT(lit_45);
DEFLIT(lit_25);
DEFLIT(lit_167);
DEFLIT(lit_20);
DEFLIT(lit_61);
DEFLIT(lit_98);
DEFLIT(lit_64);
DEFLIT(lit_128);
DEFLIT(lit_95);
DEFLIT(lit_190);
DEFLIT(lit_141);
DEFLIT(lit_7);
DEFLIT(lit_108);
DEFLIT(lit_75);
DEFLIT(lit_178);
DEFLIT(lit_148);
DEFLIT(lit_59);
DEFLIT(lit_3);
DEFLIT(lit_166);
DEFLIT(lit_103);
DEFLIT(lit_47);
DEFLIT(lit_34);
DEFLIT(lit_46);
DEFLIT(lit_173);
DEFLIT(lit_66);
DEFLIT(lit_11);
DEFLIT(lit_164);
DEFLIT(lit_144);
DEFLIT(lit_117);
DEFLIT(lit_44);
DEFLIT(lit_189);
DEFLIT(lit_185);
DEFLIT(lit_94);
DEFLIT(lit_198);
DEFLIT(lit_163);
DEFLIT(lit_27);
DEFLIT(lit_156);
DEFLIT(lit_145);
DEFLIT(lit_13);
DEFLIT(lit_119);
DEFLIT(lit_116);
DEFLIT(lit_100);
DEFLIT(lit_150);
DEFLIT(lit_132);
DEFLIT(lit_180);
DEFLIT(lit_32);
DEFLIT(lit_169);
DEFLIT(lit_48);
DEFLIT(lit_37);
DEFLIT(lit_131);
DEFLIT(lit_160);
DEFLIT(lit_99);
DEFLIT(lit_77);
DEFLIT(lit_105);
DEFLIT(lit_12);
DEFLIT(lit_67);
DEFLIT(lit_62);
DEFLIT(lit_88);
DEFLIT(lit_152);
DEFLIT(lit_21);
DEFLIT(lit_121);
DEFLIT(lit_22);
DEFLIT(lit_5);
DEFLIT(lit_120);
DEFLIT(lit_40);
DEFLIT(lit_39);
DEFLIT(lit_155);
DEFLIT(lit_41);
DEFLIT(lit_140);
DEFLIT(lit_118);
DEFLIT(lit_179);
DEFLIT(lit_127);
DEFLIT(lit_186);
DEFLIT(lit_73);
DEFLIT(lit_78);
DEFLIT(lit_16);
DEFLIT(lit_83);
DEFLIT(lit_85);
DEFLIT(lit_196);
DEFLIT(lit_184);
DEFLIT(lit_107);
DEFLIT(lit_177);
DEFLIT(lit_56);
DEFLIT(lit_92);
DEFLIT(lit_162);
DEFLIT(lit_8);
DEFLIT(lit_110);
DEFLIT(lit_71);
DEFLIT(lit_68);
DEFLIT(lit_130);
DEFLIT(lit_188);
DEFLIT(lit_101);
DEFLIT(lit_51);
DEFLIT(lit_2);
DEFLIT(lit_50);
DEFLIT(lit_58);
DEFLIT(lit_97);
DEFLIT(lit_138);
DEFLIT(lit_142);
DEFLIT(lit_82);
DEFLIT(lit_153);
DEFLIT(lit_157);
DEFLIT(lit_136);
DEFLIT(lit_137);
DEFLIT(lit_89);
DEFLIT(lit_181);
DEFLIT(lit_102);
DEFLIT(lit_9);
DEFLIT(lit_170);
DEFLIT(lit_122);
DEFLIT(lit_147);
DEFLIT(lit_158);
DEFLIT(lit_149);
DEFLIT(lit_31);
DEFLIT(lit_174);
DEFLIT(lit_124);
DEFLIT(lit_76);
DEFLIT(lit_91);
DEFLIT(lit_60);
DEFLIT(lit_38);
DEFLIT(lit_135);
DEFLIT(lit_133);
DEFLIT(lit_111);
DEFLIT(lit_14);
DEFLIT(lit_63);
DEFLIT(lit_125);
DEFLIT(lit_112);
DEFLIT(lit_24);
DEFLIT(lit_54);
DEFLIT(lit_172);
DEFLIT(lit_96);
DEFLIT(lit_55);
DEFLIT(lit_30);
DEFLIT(lit_0);
DEFLIT(lit_33);
DEFLIT(lit_165);
DEFLIT(lit_90);
DEFLIT(lit_126);
DEFLIT(lit_26);
DEFLIT(lit_87);
DEFLIT(lit_106);
DEFLIT(lit_187);
DEFLIT(lit_183);
DEFLIT(lit_104);
DEFLIT(lit_36);
DEFLIT(lit_139);
DEFLIT(lit_84);
DEFLIT(lit_80);
DEFLIT(lit_18);
DEFLIT(lit_53);
DEFLIT(lit_81);
DEFLIT(lit_193);
DEFLIT(lit_29);
DEFLIT(lit_113);
DEFLIT(lit_197);
DEFLIT(lit_4);
DEFLIT(lit_143);
DEFLIT(lit_192);

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
LOCFOR(fun_x_1532_51);
LOCFOR(fun_52);
LOCFOR(fun_x_1529_53);
LOCFOR(fun_54);
LOCFOR(fun_x_1526_55);
LOCFOR(fun_56);
LOCFOR(fun_x_1523_57);
LOCFOR(fun_58);
LOCFOR(fun_x_1520_59);
LOCFOR(fun_60);
LOCFOR(fun_x_1517_61);
LOCFOR(fun_62);
LOCFOR(fun_x_1514_63);
LOCFOR(fun_64);
LOCFOR(fun_x_1511_65);
LOCFOR(fun_66);
LOCFOR(fun_x_1508_67);
LOCFOR(fun_68);
LOCFOR(fun_x_1505_69);
LOCFOR(fun_70);
LOCFOR(fun_x_1502_71);
LOCFOR(fun_72);
LOCFOR(fun_x_1499_73);
LOCFOR(fun_74);
LOCFOR(fun_x_1496_75);
LOCFOR(fun_76);
LOCFOR(fun_x_1493_77);
LOCFOR(fun_78);
LOCFOR(fun_79);
LOCFOR(fun_80);
LOCFOR(fun_81);
LOCFOR(fun_loop_82);
LOCFOR(fun_83);
LOCFOR(fun_PPtopPPtop_in_84);
LOCFOR(fun_85);
LOCFOR(fun_86);
LOCFOR(fun_87);
LOCFOR(fun_loop_88);
LOCFOR(fun_89);
LOCFOR(fun_90);
LOCFOR(fun_top_91);
LOCFOR(fun_92);
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
  P astF2889;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(form_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),form_,ct_env_,YPfalse);
  astF2889 = T1;
  T2 = CALL2(1,DYNREF(YevalStopYrun),astF2889,ct_env_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_in_12) {
  P x_,ct_env_;
  P eF2891;
  P oF2890;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),x_,ct_env_,YPfalse);
  oF2890 = T1;
  T3 = CALL1(1,VARREF(YevalSastYast_evaluate),oF2890);
  eF2891 = T3;
  T2 = eF2891;
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
  T0 = CALL2(1,VARREF(YgooScolsSseqYsuffixQ),name_,LITREF(lit_41));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_17) {
  P forms_;
  P xF2892;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(forms_, 0);
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL1(1,VARREF(YgooSconditionsYread),T2);
  xF2892 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),xF2892);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooSmacrosYrevX),forms_);
    T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_sequence_Gbegin),T6);
    T3 = T5;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYpair),xF2892,forms_);
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
  P loopF2893;
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_in_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T2 = FUNSHELL(1,fun_loop_17,2);
  loopF2893 = T2;
  FUNINIT(loopF2893, 2,FREEREF(0),loopF2893);
  T3 = CALL1(0,loopF2893,Ynil);
  T1 = T3;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_19) {
  P tmpF2894;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2894 = T1;
  if (tmpF2894 != YPfalse) {
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
  P portF2895;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  portF2895 = YPfalse;
  portF2895 = BOXFAB(portF2895);
  T3 = FUNFAB(fun_18,2,portF2895,filename_);
  T4 = FUNFAB(fun_19,1,portF2895);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_in_21) {
  P filename_,ct_env_;
  P oF2897;
  P xF2896;
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
    xF2896 = T4;
    T6 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),xF2896,ct_env_,YPfalse);
    oF2897 = T6;
    T7 = CALL2(1,DYNREF(YevalStopYrun),oF2897,ct_env_);
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
  P realfileF2898;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_in_path),name_,VARREF(YgooSsystemYTmodule_search_pathT));
  realfileF2898 = T1;
  T2 = CALL1(1,VARREF(Ynot),realfileF2898);
  if (T2 != YPfalse) {
    T3 = CALL1(1,VARREF(Yfile_opening_error),name_);
  } else {
  }
  T4 = CALL2(1,VARREF(YevalStopYload_file),realfileF2898,modname_);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_prompt_for_command_expression_24) {
  P env_,level_,prompt_;
  P argsF2902;
  P arg_strF2901;
  P tmpF2900;
  P formF2899;
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
  CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_54),T0,level_,prompt_);
  CALL1(1,VARREF(YgooSioSportYforce_out),VARREF(YgooSioSportYout));
  T3 = CALL1(1,VARREF(YgooSconditionsYread),VARREF(YgooSioSportYin));
  formF2899 = T3;
  T6 = CALL2(1,VARREF(YisaQ),formF2899,VARREF(YLlstG));
  tmpF2900 = T6;
  if (tmpF2900 != YPfalse) {
    T9 = CALL1(1,VARREF(Yhead),formF2899);
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),T9,LITREF(lit_55));
    T7 = T8;
  } else {
    T7 = YPfalse;
  }
  T5 = T7;
  if (T5 != YPfalse) {
    T11 = CALL1(1,VARREF(YgooSioSportYgets),VARREF(YgooSioSportYin));
    arg_strF2901 = T11;
    T14 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_56),arg_strF2901,LITREF(lit_57));
    T13 = CALL1(1,VARREF(YgooSioSreadYread_from_string),T14);
    argsF2902 = T13;
    T17 = CALL1(1,VARREF(YgooSmacrosY2nd),formF2899);
    T16 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_58),T17);
    T15 = CALL2(1,VARREF(YgooSmacrosYpair),T16,argsF2902);
    T12 = T15;
    T10 = T12;
    T4 = T10;
  } else {
    T4 = formF2899;
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
  CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_61),T0,level_,label_);
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
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_68),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_28) {
  P return_;
  P x_1483F2915;
  P x_1483F2914;
  P x_1483F2913;
  P x_1483F2912;
  P x_1483F2911;
  P x_1483F2910;
  P x_1483F2909;
  P bodyF2908;
  P argsF2907;
  P fF2906;
  P numF2905;
  P x_1483F2904;
  P x_1484F2903;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1484_27,2);
  x_1484F2903 = T1;
  FUNINIT(x_1484F2903, 2,FREEREF(0),return_);
  x_1483F2904 = FREEREF(0);
  numF2905 = YPfalse;
  numF2905 = BOXFAB(numF2905);
  fF2906 = YPfalse;
  fF2906 = BOXFAB(fF2906);
  argsF2907 = YPfalse;
  argsF2907 = BOXFAB(argsF2907);
  bodyF2908 = YPfalse;
  bodyF2908 = BOXFAB(bodyF2908);
  T11 = CALL2(1,VARREF(YisaQ),x_1483F2904,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1483F2904,LITREF(lit_68),x_1484F2903);
    x_1483F2909 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1483F2909,x_1484F2903);
    x_1483F2910 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1483F2910,x_1484F2903);
    BOXVAL(numF2905) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1483F2910);
    x_1483F2911 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1483F2911,x_1484F2903);
    BOXVAL(fF2906) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1483F2911);
    x_1483F2912 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1483F2912,x_1484F2903);
    BOXVAL(argsF2907) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1483F2912);
    x_1483F2913 = T24;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1483F2913,x_1484F2903);
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T26 = CALL1(1,VARREF(Ytail),x_1483F2909);
    x_1483F2914 = T26;
    BOXVAL(bodyF2908) = x_1483F2914;
    x_1483F2915 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1483F2915,x_1484F2903);
    T27 = T28;
    T14 = T27;
    T12 = T14;
  } else {
    T29 = CALL2(1,x_1484F2903,LITREF(lit_69),x_1483F2904);
  }
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_70));
  T37 = BOXVAL(numF2905);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T38 = CALL1(1,VARREF(Ylst),YPint((P)0));
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T38,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T33 = CALL2(1,VARREF(YgooSmacrosYcat),T34,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_71));
  T48 = BOXVAL(fF2906);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_72));
  T46 = CALL3(1,VARREF(YgooSmacrosYcat),T47,T49,Ynil);
  T45 = CALL1(1,VARREF(Ylst),T46);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T54 = BOXVAL(argsF2907);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_72));
  T56 = CALL3(1,VARREF(YgooSmacrosYcat),T57,T58,Ynil);
  T55 = CALL1(1,VARREF(Ylst),T56);
  T51 = CALL4(1,VARREF(YgooSmacrosYcat),T52,T53,T55,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T59 = BOXVAL(bodyF2908);
  T62 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T64 = BOXVAL(numF2905);
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
  P x_1487F2928;
  P x_1487F2927;
  P x_1487F2926;
  P x_1487F2925;
  P x_1487F2924;
  P x_1487F2923;
  P x_1487F2922;
  P bodyF2921;
  P argsF2920;
  P fF2919;
  P numF2918;
  P x_1487F2917;
  P x_1488F2916;
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
  T1 = FUNSHELL(0,fun_x_1488_30,2);
  x_1488F2916 = T1;
  FUNINIT(x_1488F2916, 2,FREEREF(0),return_);
  x_1487F2917 = FREEREF(0);
  numF2918 = YPfalse;
  numF2918 = BOXFAB(numF2918);
  fF2919 = YPfalse;
  fF2919 = BOXFAB(fF2919);
  argsF2920 = YPfalse;
  argsF2920 = BOXFAB(argsF2920);
  bodyF2921 = YPfalse;
  bodyF2921 = BOXFAB(bodyF2921);
  T11 = CALL2(1,VARREF(YisaQ),x_1487F2917,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1487F2917,LITREF(lit_80),x_1488F2916);
    x_1487F2922 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1487F2922,x_1488F2916);
    x_1487F2923 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1487F2923,x_1488F2916);
    BOXVAL(numF2918) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1487F2923);
    x_1487F2924 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1487F2924,x_1488F2916);
    BOXVAL(fF2919) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1487F2924);
    x_1487F2925 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1487F2925,x_1488F2916);
    BOXVAL(argsF2920) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1487F2925);
    x_1487F2926 = T24;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1487F2926,x_1488F2916);
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T26 = CALL1(1,VARREF(Ytail),x_1487F2922);
    x_1487F2927 = T26;
    BOXVAL(bodyF2921) = x_1487F2927;
    x_1487F2928 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1487F2928,x_1488F2916);
    T27 = T28;
    T14 = T27;
    T12 = T14;
  } else {
    T29 = CALL2(1,x_1488F2916,LITREF(lit_69),x_1487F2917);
  }
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_81));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_82));
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_83));
  T37 = CALL1(1,VARREF(Ylst),YPfalse);
  T34 = CALL4(1,VARREF(YgooSmacrosYcat),T35,T36,T37,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T42 = CALL1(1,VARREF(Ylst),YPint((P)0));
  T39 = CALL4(1,VARREF(YgooSmacrosYcat),T40,T41,T42,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_85));
  T50 = BOXVAL(fF2919);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T52 = BOXVAL(argsF2920);
  T51 = CALL1(1,VARREF(Ylst),T52);
  T47 = CALL4(1,VARREF(YgooSmacrosYcat),T48,T49,T51,Ynil);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T55 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T59 = CALL1(1,VARREF(Ylst),LITREF(lit_87));
  T62 = CALL1(1,VARREF(Ylst),LITREF(lit_88));
  T64 = BOXVAL(fF2919);
  T63 = CALL1(1,VARREF(Ylst),T64);
  T61 = CALL3(1,VARREF(YgooSmacrosYcat),T62,T63,Ynil);
  T60 = CALL1(1,VARREF(Ylst),T61);
  T67 = CALL1(1,VARREF(Ylst),LITREF(lit_89));
  T68 = CALL1(1,VARREF(Ylst),LITREF(lit_90));
  T71 = CALL1(1,VARREF(Ylst),LITREF(lit_88));
  T73 = BOXVAL(fF2919);
  T72 = CALL1(1,VARREF(Ylst),T73);
  T70 = CALL3(1,VARREF(YgooSmacrosYcat),T71,T72,Ynil);
  T69 = CALL1(1,VARREF(Ylst),T70);
  T66 = CALL4(1,VARREF(YgooSmacrosYcat),T67,T68,T69,Ynil);
  T65 = CALL1(1,VARREF(Ylst),T66);
  T74 = CALL1(1,VARREF(Ylst),LITREF(lit_91));
  T58 = CALL5(1,VARREF(YgooSmacrosYcat),T59,T60,T65,T74,Ynil);
  T57 = CALL1(1,VARREF(Ylst),T58);
  T54 = CALL4(1,VARREF(YgooSmacrosYcat),T55,T56,T57,Ynil);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T77 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T79 = BOXVAL(numF2918);
  T78 = CALL1(1,VARREF(Ylst),T79);
  T82 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
  T83 = CALL1(1,VARREF(Ylst),LITREF(lit_85));
  T84 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T81 = CALL4(1,VARREF(YgooSmacrosYcat),T82,T83,T84,Ynil);
  T80 = CALL1(1,VARREF(Ylst),T81);
  T76 = CALL4(1,VARREF(YgooSmacrosYcat),T77,T78,T80,Ynil);
  T75 = CALL1(1,VARREF(Ylst),T76);
  T87 = CALL1(1,VARREF(Ylst),LITREF(lit_93));
  T88 = CALL1(1,VARREF(Ylst),LITREF(lit_83));
  T91 = CALL1(1,VARREF(Ylst),LITREF(lit_93));
  T94 = CALL1(1,VARREF(Ylst),LITREF(lit_94));
  T95 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T96 = CALL1(1,VARREF(Ylst),LITREF(lit_95));
  T93 = CALL4(1,VARREF(YgooSmacrosYcat),T94,T95,T96,Ynil);
  T92 = CALL1(1,VARREF(Ylst),T93);
  T99 = CALL1(1,VARREF(Ylst),LITREF(lit_82));
  T100 = CALL1(1,VARREF(Ylst),YPfalse);
  T98 = CALL3(1,VARREF(YgooSmacrosYcat),T99,T100,Ynil);
  T97 = CALL1(1,VARREF(Ylst),T98);
  T90 = CALL4(1,VARREF(YgooSmacrosYcat),T91,T92,T97,Ynil);
  T89 = CALL1(1,VARREF(Ylst),T90);
  T101 = BOXVAL(bodyF2921);
  T86 = CALL5(1,VARREF(YgooSmacrosYcat),T87,T88,T89,T101,Ynil);
  T85 = CALL1(1,VARREF(Ylst),T86);
  T104 = CALL1(1,VARREF(Ylst),LITREF(lit_93));
  T107 = CALL1(1,VARREF(Ylst),LITREF(lit_94));
  T108 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T109 = CALL1(1,VARREF(Ylst),LITREF(lit_96));
  T106 = CALL4(1,VARREF(YgooSmacrosYcat),T107,T108,T109,Ynil);
  T105 = CALL1(1,VARREF(Ylst),T106);
  T112 = CALL1(1,VARREF(Ylst),LITREF(lit_97));
  T113 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T114 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T111 = CALL4(1,VARREF(YgooSmacrosYcat),T112,T113,T114,Ynil);
  T110 = CALL1(1,VARREF(Ylst),T111);
  T117 = CALL1(1,VARREF(Ylst),LITREF(lit_97));
  T118 = CALL1(1,VARREF(Ylst),LITREF(lit_83));
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
  P numF2931;
  P UnameF2930;
  P argsF2929;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2929 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_91);
  }
  UnameF2930 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF2931 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2930,LITREF(lit_95));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T14 = CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_102),numF2931,f_,argsF2929);
  } else {
  }
  T15 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2930,LITREF(lit_96));
  if (T15 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF2931;
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
  P UnumF2934;
  P Utop_numF2933;
  P Useen_topF2932;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF2932 = YPfalse;
  Useen_topF2932 = BOXFAB(Useen_topF2932);
  Utop_numF2933 = YPint((P)0);
  Utop_numF2933 = BOXFAB(Utop_numF2933);
  UnumF2934 = YPint((P)0);
  UnumF2934 = BOXFAB(UnumF2934);
  T7 = FUNFAB(fun_33,4,UnumF2934,Utop_numF2933,Useen_topF2932,break_);
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
  P numF2937;
  P UnameF2936;
  P argsF2935;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2935 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_91);
  }
  UnameF2936 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF2937 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2936,LITREF(lit_95));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T15 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(4),numF2937);
    if (T15 != YPfalse) {
      T16 = CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_107),numF2937,f_,argsF2935);
      T14 = T16;
    } else {
      T14 = YPfalse;
    }
  } else {
  }
  T17 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2936,LITREF(lit_96));
  if (T17 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF2937;
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
  P UnumF2940;
  P Utop_numF2939;
  P Useen_topF2938;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF2938 = YPfalse;
  Useen_topF2938 = BOXFAB(Useen_topF2938);
  Utop_numF2939 = YPint((P)0);
  Utop_numF2939 = BOXFAB(Utop_numF2939);
  UnumF2940 = YPint((P)0);
  UnumF2940 = BOXFAB(UnumF2940);
  T7 = FUNFAB(fun_36,5,UnumF2940,Utop_numF2939,Useen_topF2938,break_,FREEREF(0));
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
  P numF2943;
  P UnameF2942;
  P argsF2941;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2941 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_91);
  }
  UnameF2942 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF2943 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2942,LITREF(lit_95));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T15 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(4),numF2943);
    if (T15 != YPfalse) {
      T19 = CALL1(1,VARREF(Yfun_names),f_);
      T18 = CALL2(1,VARREF(YgooScolsSseqYpos),T19,FREEREF(5));
      T17 = CALL2(1,VARREF(YgooSmacrosYelt),argsF2941,T18);
      T16 = CALL1(1,FREEREF(6),T17);
      T14 = T16;
    } else {
      T14 = YPfalse;
    }
  } else {
  }
  T20 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2942,LITREF(lit_96));
  if (T20 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF2943;
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
  P UnumF2946;
  P Utop_numF2945;
  P Useen_topF2944;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF2944 = YPfalse;
  Useen_topF2944 = BOXFAB(Useen_topF2944);
  Utop_numF2945 = YPint((P)0);
  Utop_numF2945 = BOXFAB(Utop_numF2945);
  UnumF2946 = YPint((P)0);
  UnumF2946 = BOXFAB(UnumF2946);
  T7 = FUNFAB(fun_39,7,UnumF2946,Utop_numF2945,Useen_topF2944,break_,FREEREF(0),FREEREF(1),FREEREF(2));
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
  P numF2949;
  P UnameF2948;
  P argsF2947;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2947 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_91);
  }
  UnameF2948 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF2949 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2948,LITREF(lit_95));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T14 = CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_116),numF2949,f_);
  } else {
  }
  T15 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2948,LITREF(lit_96));
  if (T15 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF2949;
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
  P UnumF2952;
  P Utop_numF2951;
  P Useen_topF2950;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF2950 = YPfalse;
  Useen_topF2950 = BOXFAB(Useen_topF2950);
  Utop_numF2951 = YPint((P)0);
  Utop_numF2951 = BOXFAB(Utop_numF2951);
  UnumF2952 = YPint((P)0);
  UnumF2952 = BOXFAB(UnumF2952);
  T7 = FUNFAB(fun_43,4,UnumF2952,Utop_numF2951,Useen_topF2950,break_);
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

FUNCODEDEF(YevalStopYdo_restart) {
  P restarts_,n_;
  P tmpF2953;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(restarts_, 0);
  ARG(n_, 1);
loop:
  T0 = CALL1(1,VARREF(Ynot),restarts_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_119));
  } else {
  }
  T4 = CALL2(1,VARREF(YgooSmagYG),n_,YPint((P)0));
  tmpF2953 = T4;
  if (tmpF2953 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooStypesYlen),restarts_);
    T6 = CALL2(1,VARREF(YgooSmagYLE),n_,T7);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T8 = CALL2(1,VARREF(Yerror),LITREF(lit_120),n_);
  } else {
  }
  T11 = CALL2(1,VARREF(YgooSmathY_),n_,YPint((P)1));
  T10 = CALL2(1,VARREF(YgooSmacrosYelt),restarts_,T11);
  T9 = CALL3(1,VARREF(YgooSconditionsYinvoke_handler_interactively),T10,VARREF(YgooSioSportYin),VARREF(YgooSioSportYout));
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_47) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_48) {
  P c_,r_;
  P x_1490F2955;
  P x_1489F2954;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
loop:
  x_1489F2954 = c_;
  x_1490F2955 = VARREF(YisaQ);
  T2 = CALL2(1,x_1490F2955,x_1489F2954,VARREF(YgooSconditionsYLkeyboard_interruptG));
  if (T2 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_126));
    T1 = T3;
  } else {
    T5 = CALL1(1,VARREF(YgooSconditionsYdescribe_condition),c_);
    T4 = CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_127),T5);
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

FUNCODEDEF(fun_49) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_50) {
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

FUNCODEDEF(fun_x_1532_51) {
  P msg_,args_;
  P x_1536F2960;
  P x_1535F2959;
  P x_1534F2958;
  P x_1533F2957;
  P resF2956;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL2(1,VARREF(YevalStopYauto_eval),FREEREF(0),T3);
  resF2956 = T2;
  resF2956 = BOXFAB(resF2956);
  T5 = BOXVAL(FREEREF(1));
  T6 = BOXVAL(resF2956);
  CALL4(1,VARREF(YevalStopYprint_result_expression),T5,FREEREF(2),LITREF(lit_174),T6);
  x_1533F2957 = VARREF(YevalStopYDDD);
  x_1534F2958 = VARREF(YevalStopYDD);
  x_1535F2959 = VARREF(YevalStopYD);
  T11 = BOXVAL(resF2956);
  x_1536F2960 = T11;
  VARSET(YevalStopYDDD,x_1534F2958);
  VARSET(YevalStopYDD,x_1535F2959);
  VARSET(YevalStopYD,x_1536F2960);
  T12 = BOXVAL(resF2956) = x_1533F2957;
  T10 = T12;
  T9 = T10;
  T8 = T9;
  T7 = T8;
  T1 = T7;
  T0 = CALL1(1,FREEREF(3),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_52) {
  P return_;
  P x_1531F2967;
  P x_1531F2966;
  P x_1531F2965;
  P nameF2964;
  P nF2963;
  P x_1531F2962;
  P x_1532F2961;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1532_51,4);
  x_1532F2961 = T1;
  FUNINIT(x_1532F2961, 4,FREEREF(0),FREEREF(1),FREEREF(2),return_);
  x_1531F2962 = FREEREF(3);
  nF2963 = YPfalse;
  nF2963 = BOXFAB(nF2963);
  nameF2964 = YPfalse;
  nameF2964 = BOXFAB(nameF2964);
  T7 = CALL2(1,VARREF(YisaQ),x_1531F2962,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1531F2962,LITREF(lit_175),x_1532F2961);
    x_1531F2965 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1531F2965,x_1532F2961);
    BOXVAL(nF2963) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1531F2965);
    x_1531F2966 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1531F2966,x_1532F2961);
    BOXVAL(nameF2964) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1531F2966);
    x_1531F2967 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1531F2967,x_1532F2961);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1532F2961,LITREF(lit_69),x_1531F2962);
  }
  T19 = BOXVAL(FREEREF(1));
  T21 = BOXVAL(nF2963);
  T22 = BOXVAL(nameF2964);
  T20 = CALL2(1,VARREF(YevalStopYframe_var),T21,T22);
  T18 = CALL4(1,VARREF(YevalStopYprint_result_expression),T19,FREEREF(2),LITREF(lit_176),T20);
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1529_53) {
  P msg_,args_;
  P x_1530F2968;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1530F2968 = FREEREF(0);
  T3 = FUNFAB(fun_52,4,FREEREF(1),FREEREF(2),FREEREF(3),x_1530F2968);
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_54) {
  P return_;
  P x_1528F2973;
  P x_1528F2972;
  P nF2971;
  P x_1528F2970;
  P x_1529F2969;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1529_53,5);
  x_1529F2969 = T1;
  FUNINIT(x_1529F2969, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1528F2970 = FREEREF(0);
  nF2971 = YPfalse;
  nF2971 = BOXFAB(nF2971);
  T5 = CALL2(1,VARREF(YisaQ),x_1528F2970,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1528F2970,LITREF(lit_177),x_1529F2969);
    x_1528F2972 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1528F2972,x_1529F2969);
    BOXVAL(nF2971) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1528F2972);
    x_1528F2973 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1528F2973,x_1529F2969);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1529F2969,LITREF(lit_69),x_1528F2970);
  }
  T14 = BOXVAL(nF2971);
  T13 = CALL1(1,VARREF(YevalStopYframe),T14);
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1526_55) {
  P msg_,args_;
  P x_1527F2974;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1527F2974 = FREEREF(0);
  T3 = FUNFAB(fun_54,4,x_1527F2974,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_56) {
  P return_;
  P x_1525F2977;
  P x_1525F2976;
  P x_1526F2975;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1526_55,5);
  x_1526F2975 = T1;
  FUNINIT(x_1526F2975, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1525F2976 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1525F2976,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1525F2976,LITREF(lit_178),x_1526F2975);
    x_1525F2977 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1525F2977,x_1526F2975);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1526F2975,LITREF(lit_69),x_1525F2976);
  }
  T8 = CALL0(1,VARREF(YevalStopYbacktrace));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1523_57) {
  P msg_,args_;
  P x_1524F2978;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1524F2978 = FREEREF(0);
  T3 = FUNFAB(fun_56,4,x_1524F2978,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_58) {
  P return_;
  P x_1522F2981;
  P x_1522F2980;
  P x_1523F2979;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1523_57,5);
  x_1523F2979 = T1;
  FUNINIT(x_1523F2979, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1522F2980 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1522F2980,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1522F2980,LITREF(lit_179),x_1523F2979);
    x_1522F2981 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1522F2981,x_1523F2979);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1523F2979,LITREF(lit_69),x_1522F2980);
  }
  T8 = CALL0(1,VARREF(YevalStopYbt));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1520_59) {
  P msg_,args_;
  P x_1521F2982;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1521F2982 = FREEREF(0);
  T3 = FUNFAB(fun_58,4,x_1521F2982,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_60) {
  P return_;
  P x_1519F2985;
  P x_1519F2984;
  P x_1520F2983;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1520_59,5);
  x_1520F2983 = T1;
  FUNINIT(x_1520F2983, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1519F2984 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1519F2984,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1519F2984,LITREF(lit_180),x_1520F2983);
    x_1519F2985 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1519F2985,x_1520F2983);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1520F2983,LITREF(lit_69),x_1519F2984);
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

FUNCODEDEF(fun_x_1517_61) {
  P msg_,args_;
  P x_1518F2986;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1518F2986 = FREEREF(0);
  T3 = FUNFAB(fun_60,4,x_1518F2986,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_62) {
  P return_;
  P x_1516F2989;
  P x_1516F2988;
  P x_1517F2987;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1517_61,5);
  x_1517F2987 = T1;
  FUNINIT(x_1517F2987, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1516F2988 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1516F2988,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1516F2988,LITREF(lit_181),x_1517F2987);
    x_1516F2989 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1516F2989,x_1517F2987);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1517F2987,LITREF(lit_69),x_1516F2988);
  }
  T8 = DYNSET(YevalStopYrun,VARREF(YevalStopYPPbottomPPast_run));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1514_63) {
  P msg_,args_;
  P x_1515F2990;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1515F2990 = FREEREF(0);
  T3 = FUNFAB(fun_62,4,x_1515F2990,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_64) {
  P return_;
  P x_1513F2993;
  P x_1513F2992;
  P x_1514F2991;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1514_63,5);
  x_1514F2991 = T1;
  FUNINIT(x_1514F2991, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1513F2992 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1513F2992,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1513F2992,LITREF(lit_182),x_1514F2991);
    x_1513F2993 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1513F2993,x_1514F2991);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1514F2991,LITREF(lit_69),x_1513F2992);
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

FUNCODEDEF(fun_x_1511_65) {
  P msg_,args_;
  P x_1512F2994;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1512F2994 = FREEREF(0);
  T3 = FUNFAB(fun_64,4,x_1512F2994,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_66) {
  P return_;
  P new_envF3000;
  P x_1510F2999;
  P x_1510F2998;
  P mF2997;
  P x_1510F2996;
  P x_1511F2995;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1511_65,5);
  x_1511F2995 = T1;
  FUNINIT(x_1511F2995, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1510F2996 = FREEREF(0);
  mF2997 = YPfalse;
  mF2997 = BOXFAB(mF2997);
  T5 = CALL2(1,VARREF(YisaQ),x_1510F2996,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1510F2996,LITREF(lit_183),x_1511F2995);
    x_1510F2998 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1510F2998,x_1511F2995);
    BOXVAL(mF2997) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1510F2998);
    x_1510F2999 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1510F2999,x_1511F2995);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1511F2995,LITREF(lit_69),x_1510F2996);
  }
  T15 = BOXVAL(mF2997);
  T14 = CALL1(1,VARREF(YevalSastYruntime_environment),T15);
  new_envF3000 = T14;
  T16 = BOXVAL(FREEREF(2)) = new_envF3000;
  T13 = T16;
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1508_67) {
  P msg_,args_;
  P x_1509F3001;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1509F3001 = FREEREF(0);
  T3 = FUNFAB(fun_66,4,x_1509F3001,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_68) {
  P return_;
  P x_1507F3006;
  P x_1507F3005;
  P nF3004;
  P x_1507F3003;
  P x_1508F3002;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1508_67,5);
  x_1508F3002 = T1;
  FUNINIT(x_1508F3002, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1507F3003 = FREEREF(0);
  nF3004 = YPfalse;
  nF3004 = BOXFAB(nF3004);
  T5 = CALL2(1,VARREF(YisaQ),x_1507F3003,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1507F3003,LITREF(lit_184),x_1508F3002);
    x_1507F3005 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1507F3005,x_1508F3002);
    BOXVAL(nF3004) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1507F3005);
    x_1507F3006 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1507F3006,x_1508F3002);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1508F3002,LITREF(lit_69),x_1507F3003);
  }
  T14 = BOXVAL(FREEREF(4));
  T15 = BOXVAL(nF3004);
  T13 = CALL2(1,VARREF(YevalStopYdo_restart),T14,T15);
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1505_69) {
  P msg_,args_;
  P x_1506F3007;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1506F3007 = FREEREF(0);
  T3 = FUNFAB(fun_68,5,x_1506F3007,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_70) {
  P return_;
  P x_1504F3010;
  P x_1504F3009;
  P x_1505F3008;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1505_69,6);
  x_1505F3008 = T1;
  FUNINIT(x_1505F3008, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1504F3009 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1504F3009,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1504F3009,LITREF(lit_185),x_1505F3008);
    x_1504F3010 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1504F3010,x_1505F3008);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1505F3008,LITREF(lit_69),x_1504F3009);
  }
  T8 = CALL2(1,VARREF(YgooSconditionsYlist_handlers),VARREF(YgooSconditionsYLrestartG),VARREF(YgooSioSportYout));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1502_71) {
  P msg_,args_;
  P x_1503F3011;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1503F3011 = FREEREF(0);
  T3 = FUNFAB(fun_70,5,x_1503F3011,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_72) {
  P return_;
  P x_1501F3014;
  P x_1501F3013;
  P x_1502F3012;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1502_71,6);
  x_1502F3012 = T1;
  FUNINIT(x_1502F3012, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1501F3013 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1501F3013,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1501F3013,LITREF(lit_186),x_1502F3012);
    x_1501F3014 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1501F3014,x_1502F3012);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1502F3012,LITREF(lit_69),x_1501F3013);
  }
  T8 = CALL2(1,VARREF(YgooSconditionsYlist_handlers),VARREF(YgooSconditionsYLconditionG),VARREF(YgooSioSportYout));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1499_73) {
  P msg_,args_;
  P x_1500F3015;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1500F3015 = FREEREF(0);
  T3 = FUNFAB(fun_72,5,x_1500F3015,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_74) {
  P return_;
  P x_1498F3018;
  P x_1498F3017;
  P x_1499F3016;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1499_73,6);
  x_1499F3016 = T1;
  FUNINIT(x_1499F3016, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1498F3017 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1498F3017,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1498F3017,LITREF(lit_187),x_1499F3016);
    x_1498F3018 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1498F3018,x_1499F3016);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1499F3016,LITREF(lit_69),x_1498F3017);
  }
  T8 = CALL1(1,FREEREF(5),YPfalse);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1496_75) {
  P msg_,args_;
  P x_1497F3019;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1497F3019 = FREEREF(0);
  T3 = FUNFAB(fun_74,6,x_1497F3019,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(6),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_76) {
  P return_;
  P x_1495F3022;
  P x_1495F3021;
  P x_1496F3020;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1496_75,7);
  x_1496F3020 = T1;
  FUNINIT(x_1496F3020, 7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),return_);
  x_1495F3021 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1495F3021,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1495F3021,LITREF(lit_188),x_1496F3020);
    x_1495F3022 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1495F3022,x_1496F3020);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1496F3020,LITREF(lit_69),x_1495F3021);
  }
  T8 = CALL1(1,FREEREF(6),YPfalse);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1493_77) {
  P msg_,args_;
  P x_1494F3023;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1494F3023 = FREEREF(0);
  T3 = FUNFAB(fun_76,7,x_1494F3023,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(7),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_78) {
  P return_;
  P x_1492F3026;
  P x_1492F3025;
  P x_1493F3024;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1493_77,8);
  x_1493F3024 = T1;
  FUNINIT(x_1493F3024, 8,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6),return_);
  x_1492F3025 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1492F3025,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1492F3025,LITREF(lit_189),x_1493F3024);
    x_1492F3026 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1492F3026,x_1493F3024);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1493F3024,LITREF(lit_69),x_1492F3025);
  }
  T8 = CALL1(1,FREEREF(7),YPfalse);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_79) {
  P x_1491F3028;
  P formF3027;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
loop:
  CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
  T0 = BOXVAL(FREEREF(0));
  if (T0 != YPfalse) {
    CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_130));
    T1 = CALL2(1,VARREF(YgooSconditionsYlist_handlers),VARREF(YgooSconditionsYLrestartG),VARREF(YgooSioSportYout));
    BOXVAL(FREEREF(1)) = T1;
    T2 = BOXVAL(FREEREF(0)) = YPfalse;
  } else {
  }
  T5 = BOXVAL(FREEREF(2));
  T4 = CALL3(1,VARREF(YevalStopYprompt_for_command_expression),T5,FREEREF(3),LITREF(lit_131));
  formF3027 = T4;
  T7 = CALL1(1,VARREF(YgooSmathYeof_objectQ),formF3027);
  if (T7 != YPfalse) {
    T8 = CALL1(1,FREEREF(4),YPfalse);
    T6 = T8;
  } else {
    x_1491F3028 = formF3027;
    T11 = FUNFAB(fun_78,8,x_1491F3028,formF3027,FREEREF(2),FREEREF(3),FREEREF(1),FREEREF(5),FREEREF(6),FREEREF(4));
    T10 = with_exit(T11);
    T9 = T10;
    T6 = T9;
  }
  T3 = T6;
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_80) {
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(Ylst),FREEREF(0));
  T1 = CALL5(1,VARREF(Ynew),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_128),VARREF(Yhandler_info_arguments),T2);
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
  P a1;
LINK_STACK();
  ARG(continue_, 0);
loop:
  T1 = fun_47;
  T2 = FUNFAB(fun_48,5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),continue_);
  T3 = FUNFAB(fun_80,8,FREEREF(0),continue_,FREEREF(4),FREEREF(5),FREEREF(3),FREEREF(2),FREEREF(1),FREEREF(6));
  T0 = XCALLN(1,YPwith_monitor,5,VARREF(YgooSconditionsYLconditionG),VARREF(YgooSconditionsYDdefault_handler_info),T1,T2,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_82) {
  P T0,T1;
LINK_STACK();
loop:
  T0 = FUNFAB(fun_81,7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6));
  with_exit(T0);
  goto loop;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_83) {
  P blow_;
  P loopF3029;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_82,8);
  loopF3029 = T1;
  FUNINIT(loopF3029, 8,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),blow_,loopF3029);
  T2 = CALL0(0,loopF3029);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_PPtopPPtop_in_84) {
  P level_,top_,quit_,show_restartsQ_,ct_env_;
  P restartsF3030;
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
  restartsF3030 = YPfalse;
  restartsF3030 = BOXFAB(restartsF3030);
  T5 = FUNFAB(fun_83,6,level_,top_,quit_,ct_env_,show_restartsQ_,restartsF3030);
  T4 = with_exit(T5);
  T2 = T4;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_85) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_86) {
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

FUNCODEDEF(fun_87) {
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

FUNCODEDEF(fun_loop_88) {
  P T0,T1;
LINK_STACK();
loop:
  T0 = FUNFAB(fun_87,2,FREEREF(0),FREEREF(1));
  with_exit(T0);
  goto loop;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_89) {
  P loopF3031;
  P T0,T1,T2;
LINK_STACK();
loop:
  T1 = FUNSHELL(1,fun_loop_88,3);
  loopF3031 = T1;
  FUNINIT(loopF3031, 3,FREEREF(0),FREEREF(1),loopF3031);
  T2 = CALL0(0,loopF3031);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_90) {
  P quit_;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(quit_, 0);
loop:
  T2 = CALL0(1,VARREF(Ylst));
  T1 = CALL5(1,VARREF(Ynew),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_193),VARREF(Yhandler_info_arguments),T2);
  T3 = fun_85;
  T4 = FUNFAB(fun_86,1,quit_);
  T5 = FUNFAB(fun_89,2,quit_,FREEREF(0));
  T0 = XCALLN(1,YPwith_monitor,5,VARREF(YgooSconditionsYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_top_91) {
  P modname_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = FUNFAB(fun_90,1,modname_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_92) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YevalStopYtop),LITREF(lit_198));
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
  T1 = fun_92;
  T0 = CALL2(1,VARREF(Yunexec),image_name_,T1);
UNLINK_STACK();
  QRET(T0);
}

P YevalStopY___main_0___() {
  P tmpF3034;
  P tmpF3033;
  P modeF3032;
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
  P T192,T193,T194,T195,T196,T197,T198,T199,T200,T201,T202;
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
  fun_0 = YPmet(FUNCODEREF(fun_0),YPfalse,T3,ENVNUL,PNUL,YPfalse);
  T2 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_1 = YPmet(FUNCODEREF(fun_1),YPfalse,T2,ENVNUL,PNUL,YPfalse);
  T1 = YPsig(LITREF(lit_2),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalStopYesctst = YPmet(FUNCODEREF(YevalStopYesctst),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
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
  fun_parse_in_4 = YPmet(FUNCODEREF(fun_parse_in_4),LITREF(lit_10),T7,ENVNUL,PNUL,YPfalse);
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
  fun_parse_5 = YPmet(FUNCODEREF(fun_parse_5),LITREF(lit_12),T12,ENVNUL,PNUL,YPfalse);
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
  fun_str_parse_in_6 = YPmet(FUNCODEREF(fun_str_parse_in_6),LITREF(lit_14),T17,ENVNUL,PNUL,YPfalse);
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
  fun_str_parse_7 = YPmet(FUNCODEREF(fun_str_parse_7),LITREF(lit_17),T22,ENVNUL,PNUL,YPfalse);
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
  YevalStopYPPbottomPPast_run = YPmet(FUNCODEREF(YevalStopYPPbottomPPast_run),LITREF(lit_19),T27,ENVNUL,PNUL,YPfalse);
  T28 = YevalStopYPPbottomPPast_run;
  VARSET(YevalStopYPPbottomPPast_run,T28);
  lit_21 = YPPsym((P)"%%bottom%%g2c-run");
  lit_22 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"ct-env"));
  T29 = YPsig(LITREF(lit_22),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYPPbottomPPg2c_run = YPmet(FUNCODEREF(YevalStopYPPbottomPPg2c_run),LITREF(lit_21),T29,ENVNUL,PNUL,YPfalse);
  T30 = YevalStopYPPbottomPPg2c_run;
  VARSET(YevalStopYPPbottomPPg2c_run,T30);
  lit_23 = YPPsym((P)"auto-run");
  lit_24 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"ct-env"));
  T31 = YPsig(LITREF(lit_24),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYauto_run = YPmet(FUNCODEREF(YevalStopYauto_run),LITREF(lit_23),T31,ENVNUL,PNUL,YPfalse);
  T32 = YevalStopYauto_run;
  VARSET(YevalStopYauto_run,T32);
  lit_25 = YPPsym((P)"auto-eval");
  lit_26 = YPPlist(2,YPPsym((P)"form"),YPPsym((P)"ct-env"));
  T33 = YPsig(LITREF(lit_26),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYauto_eval = YPmet(FUNCODEREF(YevalStopYauto_eval),LITREF(lit_25),T33,ENVNUL,PNUL,YPfalse);
  T34 = YevalStopYauto_eval;
  VARSET(YevalStopYauto_eval,T34);
  lit_27 = YPsb((P)"GOO_EVAL_MODE");
  lit_28 = YPsb((P)"ast");
  lit_29 = YPsb((P)"g2c");
  lit_30 = YPsb((P)"linux");
  T36 = XCALL1(1,VARREF(YgooSsystemYos_val),LITREF(lit_27));
  modeF3032 = T36;
  T39 = XCALL2(1,VARREF(YgooScolsStabYcase_insensitive_string_equal),modeF3032,LITREF(lit_28));
  T38 = XCALL1(1,VARREF(Ynot),T39);
  tmpF3033 = T38;
  if (tmpF3033 != YPfalse) {
    T42 = XCALL2(1,VARREF(YgooScolsStabYcase_insensitive_string_equal),modeF3032,LITREF(lit_29));
    tmpF3034 = T42;
    if (tmpF3034 != YPfalse) {
      T43 = tmpF3034;
    } else {
      T45 = XCALL0(1,VARREF(YgooSsystemYos_name));
      T44 = XCALL2(1,VARREF(YgooSmathYE),T45,LITREF(lit_30));
      T43 = T44;
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
    T46 = VARREF(YevalStopYauto_run);
  } else {
    T46 = VARREF(YevalStopYPPbottomPPast_run);
  }
  DYNDEFSET(YevalStopYrun,T46);
  lit_31 = YPPsym((P)"eval-in");
  lit_32 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"ct-env"));
  T47 = YPsig(LITREF(lit_32),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_in_12 = YPmet(FUNCODEREF(fun_eval_in_12),LITREF(lit_31),T47,ENVNUL,PNUL,YPfalse);
  T50 = BOUNDP(YevalStopYeval_in);
  if (T50 != YPfalse) {
    T49 = VARREF(YevalStopYeval_in);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_eval_in_12;
  T48 = XCALL2(1,VARREF(YPdefine_method),T49,T51);
  VARSET(YevalStopYeval_in,T48);
  lit_33 = YPPsym((P)"eval");
  lit_34 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"modname"));
  T52 = YPsig(LITREF(lit_34),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_13 = YPmet(FUNCODEREF(fun_eval_13),LITREF(lit_33),T52,ENVNUL,PNUL,YPfalse);
  T55 = BOUNDP(YevalSsyntaxYeval);
  if (T55 != YPfalse) {
    T54 = VARREF(YevalSsyntaxYeval);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_eval_13;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T56);
  VARSET(YevalSsyntaxYeval,T53);
  lit_35 = YPPsym((P)"str-eval-in");
  lit_36 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"ct-env"));
  T57 = YPsig(LITREF(lit_36),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_in_14 = YPmet(FUNCODEREF(fun_str_eval_in_14),LITREF(lit_35),T57,ENVNUL,PNUL,YPfalse);
  T60 = BOUNDP(YevalStopYstr_eval_in);
  if (T60 != YPfalse) {
    T59 = VARREF(YevalStopYstr_eval_in);
  } else {
    T59 = YPfalse;
  }
  T61 = fun_str_eval_in_14;
  T58 = XCALL2(1,VARREF(YPdefine_method),T59,T61);
  VARSET(YevalStopYstr_eval_in,T58);
  lit_37 = YPPsym((P)"str-eval");
  lit_38 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"modname"));
  T62 = YPsig(LITREF(lit_38),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_15 = YPmet(FUNCODEREF(fun_str_eval_15),LITREF(lit_37),T62,ENVNUL,PNUL,YPfalse);
  T65 = BOUNDP(YevalStopYstr_eval);
  if (T65 != YPfalse) {
    T64 = VARREF(YevalStopYstr_eval);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_str_eval_15;
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T66);
  VARSET(YevalStopYstr_eval,T63);
  lit_39 = YPPsym((P)"compiled-file?");
  lit_40 = YPPlist(1,YPPsym((P)"name"));
  lit_41 = YPsb((P)".gooc");
  T67 = YPsig(LITREF(lit_40),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalStopYcompiled_fileQ = YPmet(FUNCODEREF(YevalStopYcompiled_fileQ),LITREF(lit_39),T67,ENVNUL,PNUL,YPfalse);
  T68 = YevalStopYcompiled_fileQ;
  VARSET(YevalStopYcompiled_fileQ,T68);
  lit_42 = YPPsym((P)"read-file");
  lit_43 = YPPlist(1,YPPsym((P)"filename"));
  lit_44 = YPPsym((P)"loop");
  lit_45 = YPPlist(1,YPPsym((P)"forms"));
  T72 = YPsig(LITREF(lit_45),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_17 = YPmet(FUNCODEREF(fun_loop_17),LITREF(lit_44),T72,ENVNUL,PNUL,YPfalse);
  T71 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T71,ENVNUL,PNUL,YPfalse);
  T70 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T70,ENVNUL,PNUL,YPfalse);
  T69 = YPsig(LITREF(lit_43),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_file_20 = YPmet(FUNCODEREF(fun_read_file_20),LITREF(lit_42),T69,ENVNUL,PNUL,YPfalse);
  T75 = BOUNDP(YevalStopYread_file);
  if (T75 != YPfalse) {
    T74 = VARREF(YevalStopYread_file);
  } else {
    T74 = YPfalse;
  }
  T76 = fun_read_file_20;
  T73 = XCALL2(1,VARREF(YPdefine_method),T74,T76);
  VARSET(YevalStopYread_file,T73);
  lit_46 = YPPsym((P)"load-in");
  lit_47 = YPPlist(2,YPPsym((P)"filename"),YPPsym((P)"ct-env"));
  T77 = YPsig(LITREF(lit_47),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_in_21 = YPmet(FUNCODEREF(fun_load_in_21),LITREF(lit_46),T77,ENVNUL,PNUL,YPfalse);
  T80 = BOUNDP(YevalSastYload_in);
  if (T80 != YPfalse) {
    T79 = VARREF(YevalSastYload_in);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_load_in_21;
  T78 = XCALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(YevalSastYload_in,T78);
  lit_48 = YPPsym((P)"load-file");
  lit_49 = YPPlist(2,YPPsym((P)"filename"),YPPsym((P)"modname"));
  T82 = YPsig(LITREF(lit_49),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_file_22 = YPmet(FUNCODEREF(fun_load_file_22),LITREF(lit_48),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(YevalStopYload_file);
  if (T85 != YPfalse) {
    T84 = VARREF(YevalStopYload_file);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_load_file_22;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YevalStopYload_file,T83);
  lit_50 = YPPsym((P)"load");
  lit_51 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"modname"));
  T87 = YPsig(LITREF(lit_51),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_23 = YPmet(FUNCODEREF(fun_load_23),LITREF(lit_50),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YevalStopYload);
  if (T90 != YPfalse) {
    T89 = VARREF(YevalStopYload);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_load_23;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YevalStopYload,T88);
  lit_52 = YPPsym((P)"prompt-for-command-expression");
  lit_53 = YPPlist(3,YPPsym((P)"env"),YPPsym((P)"level"),YPPsym((P)"prompt"));
  lit_54 = YPsb((P)"%s %=%s");
  lit_55 = YPPsym((P)"unquote");
  lit_56 = YPsb((P)"(");
  lit_57 = YPsb((P)")");
  lit_58 = YPsb((P)"cmd_");
  T92 = YPsig(LITREF(lit_53),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_prompt_for_command_expression_24 = YPmet(FUNCODEREF(fun_prompt_for_command_expression_24),LITREF(lit_52),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(YevalStopYprompt_for_command_expression);
  if (T95 != YPfalse) {
    T94 = VARREF(YevalStopYprompt_for_command_expression);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_prompt_for_command_expression_24;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YevalStopYprompt_for_command_expression,T93);
  lit_59 = YPPsym((P)"print-result-expression");
  lit_60 = YPPlist(4,YPPsym((P)"env"),YPPsym((P)"level"),YPPsym((P)"label"),YPPsym((P)"result"));
  lit_61 = YPsb((P)"%s %=%s");
  T97 = YPsig(LITREF(lit_60),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_print_result_expression_25 = YPmet(FUNCODEREF(fun_print_result_expression_25),LITREF(lit_59),T97,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(YevalStopYprint_result_expression);
  if (T100 != YPfalse) {
    T99 = VARREF(YevalStopYprint_result_expression);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_print_result_expression_25;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YevalStopYprint_result_expression,T98);
  lit_62 = YPPsym((P)"do-stack-frames");
  lit_63 = YPPlist(1,YPPsym((P)"fun"));
  T102 = YPsig(LITREF(lit_63),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_stack_frames_26 = YPmet(FUNCODEREF(fun_do_stack_frames_26),LITREF(lit_62),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(YevalStopYdo_stack_frames);
  if (T105 != YPfalse) {
    T104 = VARREF(YevalStopYdo_stack_frames);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_do_stack_frames_26;
  T103 = XCALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(YevalStopYdo_stack_frames,T103);
  lit_64 = YPPlist(1,YPPsym((P)"exp"));
  lit_65 = YPPlist(1,YPPsym((P)"return"));
  lit_66 = YPPsym((P)"x-1484");
  lit_67 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_68 = YPPsym((P)"for-frames");
  lit_69 = YPsb((P)"Match Pattern Failure");
  lit_70 = YPPsym((P)"let");
  lit_71 = YPPsym((P)"fun");
  lit_72 = YPPsym((P)"_args");
  lit_73 = YPPsym((P)"def");
  lit_74 = YPPsym((P)"rev");
  lit_75 = YPPsym((P)"incf");
  T109 = YPsig(LITREF(lit_67),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1484_27 = YPmet(FUNCODEREF(fun_x_1484_27),LITREF(lit_66),T109,ENVNUL,PNUL,YPfalse);
  T108 = YPsig(LITREF(lit_65),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T108,ENVNUL,PNUL,YPfalse);
  T107 = YPsig(LITREF(lit_64),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T107,ENVNUL,PNUL,YPfalse);
  T110 = fun_29;
  YPmacro(YPPsym((P)"eval/top"),YPPsym((P)"for-frames"),T110);
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
  T113 = YPsig(LITREF(lit_79),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1488_30 = YPmet(FUNCODEREF(fun_x_1488_30),LITREF(lit_78),T113,ENVNUL,PNUL,YPfalse);
  T112 = YPsig(LITREF(lit_77),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T112,ENVNUL,PNUL,YPfalse);
  T111 = YPsig(LITREF(lit_76),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T111,ENVNUL,PNUL,YPfalse);
  T114 = fun_32;
  YPmacro(YPPsym((P)"eval/top"),YPPsym((P)"for-user-frames"),T114);
  lit_99 = YPPsym((P)"backtrace");
  lit_100 = YPPlist(1,YPPsym((P)"break"));
  lit_101 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"_args"));
  lit_102 = YPsb((P)"[%=] %= %=\n");
  T117 = YPsig(LITREF(lit_101),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T117,ENVNUL,PNUL,YPfalse);
  T116 = YPsig(LITREF(lit_100),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T116,ENVNUL,PNUL,YPfalse);
  T115 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_backtrace_35 = YPmet(FUNCODEREF(fun_backtrace_35),LITREF(lit_99),T115,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(YevalStopYbacktrace);
  if (T120 != YPfalse) {
    T119 = VARREF(YevalStopYbacktrace);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_backtrace_35;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YevalStopYbacktrace,T118);
  lit_103 = YPPsym((P)"frame");
  lit_104 = YPPlist(1,YPPsym((P)"n"));
  lit_105 = YPPlist(1,YPPsym((P)"break"));
  lit_106 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"_args"));
  lit_107 = YPsb((P)"[%=] %= %=\n");
  T124 = YPsig(LITREF(lit_106),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T124,ENVNUL,PNUL,YPfalse);
  T123 = YPsig(LITREF(lit_105),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T123,ENVNUL,PNUL,YPfalse);
  T122 = YPsig(LITREF(lit_104),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_frame_38 = YPmet(FUNCODEREF(fun_frame_38),LITREF(lit_103),T122,ENVNUL,PNUL,YPfalse);
  T127 = BOUNDP(YevalStopYframe);
  if (T127 != YPfalse) {
    T126 = VARREF(YevalStopYframe);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_frame_38;
  T125 = XCALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(YevalStopYframe,T125);
  lit_108 = YPPsym((P)"frame-var");
  lit_109 = YPPlist(2,YPPsym((P)"n"),YPPsym((P)"name"));
  lit_110 = YPPlist(1,YPPsym((P)"ret"));
  lit_111 = YPPlist(1,YPPsym((P)"break"));
  lit_112 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"_args"));
  T132 = YPsig(LITREF(lit_112),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T132,ENVNUL,PNUL,YPfalse);
  T131 = YPsig(LITREF(lit_111),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T131,ENVNUL,PNUL,YPfalse);
  T130 = YPsig(LITREF(lit_110),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T130,ENVNUL,PNUL,YPfalse);
  T129 = YPsig(LITREF(lit_109),YPPlist(2,VARREF(YLintG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_frame_var_42 = YPmet(FUNCODEREF(fun_frame_var_42),LITREF(lit_108),T129,ENVNUL,PNUL,YPfalse);
  T135 = BOUNDP(YevalStopYframe_var);
  if (T135 != YPfalse) {
    T134 = VARREF(YevalStopYframe_var);
  } else {
    T134 = YPfalse;
  }
  T136 = fun_frame_var_42;
  T133 = XCALL2(1,VARREF(YPdefine_method),T134,T136);
  VARSET(YevalStopYframe_var,T133);
  lit_113 = YPPsym((P)"bt");
  lit_114 = YPPlist(1,YPPsym((P)"break"));
  lit_115 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"_args"));
  lit_116 = YPsb((P)"[%=] %=\n");
  T139 = YPsig(LITREF(lit_115),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T139,ENVNUL,PNUL,YPfalse);
  T138 = YPsig(LITREF(lit_114),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T138,ENVNUL,PNUL,YPfalse);
  T137 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_bt_45 = YPmet(FUNCODEREF(fun_bt_45),LITREF(lit_113),T137,ENVNUL,PNUL,YPfalse);
  T142 = BOUNDP(YevalStopYbt);
  if (T142 != YPfalse) {
    T141 = VARREF(YevalStopYbt);
  } else {
    T141 = YPfalse;
  }
  T143 = fun_bt_45;
  T140 = XCALL2(1,VARREF(YPdefine_method),T141,T143);
  VARSET(YevalStopYbt,T140);
  lit_117 = YPPsym((P)"do-restart");
  lit_118 = YPPlist(2,YPPsym((P)"restarts"),YPPsym((P)"n"));
  lit_119 = YPsb((P)"No restarts available.\n");
  lit_120 = YPsb((P)"No restart #%d.\n");
  T144 = YPsig(LITREF(lit_118),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYdo_restart = YPmet(FUNCODEREF(YevalStopYdo_restart),LITREF(lit_117),T144,ENVNUL,PNUL,YPfalse);
  T145 = YevalStopYdo_restart;
  VARSET(YevalStopYdo_restart,T145);
  VARSET(YevalStopYD,YPfalse);
  VARSET(YevalStopYDD,YPfalse);
  VARSET(YevalStopYDDD,YPfalse);
  lit_121 = YPPsym((P)"%%top%%top-in");
  lit_122 = YPPlist(5,YPPsym((P)"level"),YPPsym((P)"top"),YPPsym((P)"quit"),YPPsym((P)"show-restarts?"),YPPsym((P)"ct-env"));
  lit_123 = YPPlist(1,YPPsym((P)"blow"));
  lit_124 = YPPlist(1,YPPsym((P)"continue"));
  lit_125 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  lit_126 = YPsb((P)"BREAK");
  lit_127 = YPsb((P)"ERROR: %s");
  lit_128 = YPsb((P)"Return to interpreter level %d");
  lit_129 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  lit_130 = YPsb((P)"Type \",restart N\" to restart execution:\n");
  lit_131 = YPsb((P)"<= ");
  lit_132 = YPPlist(1,YPPsym((P)"return"));
  lit_133 = YPPsym((P)"x-1493");
  lit_134 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_135 = YPPlist(1,YPPsym((P)"return"));
  lit_136 = YPPsym((P)"x-1496");
  lit_137 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_138 = YPPlist(1,YPPsym((P)"return"));
  lit_139 = YPPsym((P)"x-1499");
  lit_140 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_141 = YPPlist(1,YPPsym((P)"return"));
  lit_142 = YPPsym((P)"x-1502");
  lit_143 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_144 = YPPlist(1,YPPsym((P)"return"));
  lit_145 = YPPsym((P)"x-1505");
  lit_146 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_147 = YPPlist(1,YPPsym((P)"return"));
  lit_148 = YPPsym((P)"x-1508");
  lit_149 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_150 = YPPlist(1,YPPsym((P)"return"));
  lit_151 = YPPsym((P)"x-1511");
  lit_152 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_153 = YPPlist(1,YPPsym((P)"return"));
  lit_154 = YPPsym((P)"x-1514");
  lit_155 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_156 = YPPlist(1,YPPsym((P)"return"));
  lit_157 = YPPsym((P)"x-1517");
  lit_158 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_159 = YPPlist(1,YPPsym((P)"return"));
  lit_160 = YPPsym((P)"x-1520");
  lit_161 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_162 = YPPlist(1,YPPsym((P)"return"));
  lit_163 = YPPsym((P)"x-1523");
  lit_164 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_165 = YPPlist(1,YPPsym((P)"return"));
  lit_166 = YPPsym((P)"x-1526");
  lit_167 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_168 = YPPlist(1,YPPsym((P)"return"));
  lit_169 = YPPsym((P)"x-1529");
  lit_170 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_171 = YPPlist(1,YPPsym((P)"return"));
  lit_172 = YPPsym((P)"x-1532");
  lit_173 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_174 = YPsb((P)"=> ");
  lit_175 = YPPsym((P)"cmd_frame-var");
  lit_176 = YPsb((P)"=> ");
  lit_177 = YPPsym((P)"cmd_frame");
  lit_178 = YPPsym((P)"cmd_backtrace");
  lit_179 = YPPsym((P)"cmd_bt");
  lit_180 = YPPsym((P)"cmd_auto-eval");
  lit_181 = YPPsym((P)"cmd_ast-eval");
  lit_182 = YPPsym((P)"cmd_g2c-eval");
  lit_183 = YPPsym((P)"cmd_in");
  lit_184 = YPPsym((P)"cmd_restart");
  lit_185 = YPPsym((P)"cmd_restarts");
  lit_186 = YPPsym((P)"cmd_handlers");
  lit_187 = YPPsym((P)"cmd_top");
  lit_188 = YPPsym((P)"cmd_up");
  lit_189 = YPPsym((P)"cmd_quit");
  T183 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T183,ENVNUL,PNUL,YPfalse);
  T182 = YPsig(LITREF(lit_125),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T182,ENVNUL,PNUL,YPfalse);
  T181 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T181,ENVNUL,PNUL,YPfalse);
  T180 = YPsig(LITREF(lit_129),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T180,ENVNUL,PNUL,YPfalse);
  T179 = YPsig(LITREF(lit_173),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1532_51 = YPmet(FUNCODEREF(fun_x_1532_51),LITREF(lit_172),T179,ENVNUL,PNUL,YPfalse);
  T178 = YPsig(LITREF(lit_171),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T178,ENVNUL,PNUL,YPfalse);
  T177 = YPsig(LITREF(lit_170),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1529_53 = YPmet(FUNCODEREF(fun_x_1529_53),LITREF(lit_169),T177,ENVNUL,PNUL,YPfalse);
  T176 = YPsig(LITREF(lit_168),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_54 = YPmet(FUNCODEREF(fun_54),YPfalse,T176,ENVNUL,PNUL,YPfalse);
  T175 = YPsig(LITREF(lit_167),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1526_55 = YPmet(FUNCODEREF(fun_x_1526_55),LITREF(lit_166),T175,ENVNUL,PNUL,YPfalse);
  T174 = YPsig(LITREF(lit_165),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_56 = YPmet(FUNCODEREF(fun_56),YPfalse,T174,ENVNUL,PNUL,YPfalse);
  T173 = YPsig(LITREF(lit_164),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1523_57 = YPmet(FUNCODEREF(fun_x_1523_57),LITREF(lit_163),T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(LITREF(lit_162),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_58 = YPmet(FUNCODEREF(fun_58),YPfalse,T172,ENVNUL,PNUL,YPfalse);
  T171 = YPsig(LITREF(lit_161),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1520_59 = YPmet(FUNCODEREF(fun_x_1520_59),LITREF(lit_160),T171,ENVNUL,PNUL,YPfalse);
  T170 = YPsig(LITREF(lit_159),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_60 = YPmet(FUNCODEREF(fun_60),YPfalse,T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(LITREF(lit_158),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1517_61 = YPmet(FUNCODEREF(fun_x_1517_61),LITREF(lit_157),T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(LITREF(lit_156),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_62 = YPmet(FUNCODEREF(fun_62),YPfalse,T168,ENVNUL,PNUL,YPfalse);
  T167 = YPsig(LITREF(lit_155),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1514_63 = YPmet(FUNCODEREF(fun_x_1514_63),LITREF(lit_154),T167,ENVNUL,PNUL,YPfalse);
  T166 = YPsig(LITREF(lit_153),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_64 = YPmet(FUNCODEREF(fun_64),YPfalse,T166,ENVNUL,PNUL,YPfalse);
  T165 = YPsig(LITREF(lit_152),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1511_65 = YPmet(FUNCODEREF(fun_x_1511_65),LITREF(lit_151),T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(LITREF(lit_150),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_66 = YPmet(FUNCODEREF(fun_66),YPfalse,T164,ENVNUL,PNUL,YPfalse);
  T163 = YPsig(LITREF(lit_149),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1508_67 = YPmet(FUNCODEREF(fun_x_1508_67),LITREF(lit_148),T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(LITREF(lit_147),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_68 = YPmet(FUNCODEREF(fun_68),YPfalse,T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(LITREF(lit_146),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1505_69 = YPmet(FUNCODEREF(fun_x_1505_69),LITREF(lit_145),T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(LITREF(lit_144),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T160,ENVNUL,PNUL,YPfalse);
  T159 = YPsig(LITREF(lit_143),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1502_71 = YPmet(FUNCODEREF(fun_x_1502_71),LITREF(lit_142),T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(LITREF(lit_141),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(LITREF(lit_140),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1499_73 = YPmet(FUNCODEREF(fun_x_1499_73),LITREF(lit_139),T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(LITREF(lit_138),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_74 = YPmet(FUNCODEREF(fun_74),YPfalse,T156,ENVNUL,PNUL,YPfalse);
  T155 = YPsig(LITREF(lit_137),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1496_75 = YPmet(FUNCODEREF(fun_x_1496_75),LITREF(lit_136),T155,ENVNUL,PNUL,YPfalse);
  T154 = YPsig(LITREF(lit_135),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T154,ENVNUL,PNUL,YPfalse);
  T153 = YPsig(LITREF(lit_134),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1493_77 = YPmet(FUNCODEREF(fun_x_1493_77),LITREF(lit_133),T153,ENVNUL,PNUL,YPfalse);
  T152 = YPsig(LITREF(lit_132),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_78 = YPmet(FUNCODEREF(fun_78),YPfalse,T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T150,ENVNUL,PNUL,YPfalse);
  T149 = YPsig(LITREF(lit_124),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T149,ENVNUL,PNUL,YPfalse);
  T148 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_82 = YPmet(FUNCODEREF(fun_loop_82),LITREF(lit_44),T148,ENVNUL,PNUL,YPfalse);
  T147 = YPsig(LITREF(lit_123),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_83 = YPmet(FUNCODEREF(fun_83),YPfalse,T147,ENVNUL,PNUL,YPfalse);
  T146 = YPsig(LITREF(lit_122),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_PPtopPPtop_in_84 = YPmet(FUNCODEREF(fun_PPtopPPtop_in_84),LITREF(lit_121),T146,ENVNUL,PNUL,YPfalse);
  T186 = BOUNDP(YevalStopYPPtopPPtop_in);
  if (T186 != YPfalse) {
    T185 = VARREF(YevalStopYPPtopPPtop_in);
  } else {
    T185 = YPfalse;
  }
  T187 = fun_PPtopPPtop_in_84;
  T184 = XCALL2(1,VARREF(YPdefine_method),T185,T187);
  VARSET(YevalStopYPPtopPPtop_in,T184);
  lit_190 = YPPsym((P)"top");
  lit_191 = YPPlist(1,YPPsym((P)"modname"));
  lit_192 = YPPlist(1,YPPsym((P)"quit"));
  lit_193 = YPsb((P)"Exit the top-level interpreter");
  lit_194 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  lit_195 = YPPlist(1,YPPsym((P)"top"));
  T194 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T194,ENVNUL,PNUL,YPfalse);
  T193 = YPsig(LITREF(lit_194),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_86 = YPmet(FUNCODEREF(fun_86),YPfalse,T193,ENVNUL,PNUL,YPfalse);
  T192 = YPsig(LITREF(lit_195),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T192,ENVNUL,PNUL,YPfalse);
  T191 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_88 = YPmet(FUNCODEREF(fun_loop_88),LITREF(lit_44),T191,ENVNUL,PNUL,YPfalse);
  T190 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_89 = YPmet(FUNCODEREF(fun_89),YPfalse,T190,ENVNUL,PNUL,YPfalse);
  T189 = YPsig(LITREF(lit_192),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_90 = YPmet(FUNCODEREF(fun_90),YPfalse,T189,ENVNUL,PNUL,YPfalse);
  T188 = YPsig(LITREF(lit_191),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_top_91 = YPmet(FUNCODEREF(fun_top_91),LITREF(lit_190),T188,ENVNUL,PNUL,YPfalse);
  T197 = BOUNDP(YevalStopYtop);
  if (T197 != YPfalse) {
    T196 = VARREF(YevalStopYtop);
  } else {
    T196 = YPfalse;
  }
  T198 = fun_top_91;
  T195 = XCALL2(1,VARREF(YPdefine_method),T196,T198);
  VARSET(YevalStopYtop,T195);
  lit_196 = YPPsym((P)"save-image");
  lit_197 = YPPlist(1,YPPsym((P)"image-name"));
  lit_198 = YPPsym((P)"goo/user");
  T200 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_92 = YPmet(FUNCODEREF(fun_92),YPfalse,T200,ENVNUL,PNUL,YPfalse);
  T199 = YPsig(LITREF(lit_197),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalStopYsave_image = YPmet(FUNCODEREF(YevalStopYsave_image),LITREF(lit_196),T199,ENVNUL,PNUL,YPfalse);
  T201 = YevalStopYsave_image;
  VARSET(YevalStopYsave_image,T201);
  T202 = YPfalse;
  return T202;
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
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooScolsSstep;

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
  {"not", &module_info_gooSboot, "not"},
  {"assert-error", &module_info_gooSboot, "assert-error"},
  {"sexpr-function-definition-adjectives", &module_info_evalSsyntax, "sexpr-function-definition-adjectives"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"*module-search-path*", &module_info_gooSsystem, "*module-search-path*"},
  {"remove-modules-by-name!", &module_info_evalSast, "remove-modules-by-name!"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"<binding>", &module_info_evalSast, "<binding>"},
  {"<alternative>", &module_info_evalSast, "<alternative>"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"function-index-setter", &module_info_evalSast, "function-index-setter"},
  {"closurize-main!", &module_info_evalSast_linearize, "closurize-main!"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"sexpr-make-method", &module_info_evalSsyntax, "sexpr-make-method"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"constant-index-setter", &module_info_evalSast, "constant-index-setter"},
  {"module-loader-module-type", &module_info_evalSast, "module-loader-module-type"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"range-error", &module_info_gooSboot, "range-error"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"locals-functions", &module_info_evalSast, "locals-functions"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"module-mangled-name-setter", &module_info_evalSast, "module-mangled-name-setter"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"<low-let>", &module_info_evalSast, "<low-let>"},
  {"function-signature-setter", &module_info_evalSast, "function-signature-setter"},
  {"reference-binding", &module_info_evalSast, "reference-binding"},
  {"closure-creation-index", &module_info_evalSast_linearize, "closure-creation-index"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"type-error-type", &module_info_gooSconditions, "type-error-type"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"%binding-value", &module_info_evalSast_eval, "%binding-value"},
  {"%vm-fun-env-fab", &module_info_gooSboot, "%vm-fun-env-fab"},
  {"fun-refs-setter", &module_info_gooSboot, "fun-refs-setter"},
  {"head", &module_info_gooSboot, "head"},
  {"$sexpr-define-tag", &module_info_evalSsyntax, "$sexpr-define-tag"},
  {"argument-type-error", &module_info_gooSboot, "argument-type-error"},
  {"<box-write>", &module_info_evalSast_linearize, "<box-write>"},
  {"<dynamic-assignment>", &module_info_evalSast, "<dynamic-assignment>"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"signature-nary?", &module_info_evalSast, "signature-nary?"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"sexpr-function-body", &module_info_evalSsyntax, "sexpr-function-body"},
  {"$sexpr-iterate-tag", &module_info_evalSsyntax, "$sexpr-iterate-tag"},
  {"%vm-fun-env-elt", &module_info_gooSboot, "%vm-fun-env-elt"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"$sexpr-define-class-tag", &module_info_evalSsyntax, "$sexpr-define-class-tag"},
  {"function-free-setter", &module_info_evalSast, "function-free-setter"},
  {"binding-inferred-type", &module_info_evalSast, "binding-inferred-type"},
  {"<top-level-form>", &module_info_evalSast_linearize, "<top-level-form>"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"program-type-setter", &module_info_evalSast, "program-type-setter"},
  {"<program>", &module_info_evalSast, "<program>"},
  {"binding-index-setter", &module_info_evalSast, "binding-index-setter"},
  {"program-register-setter", &module_info_evalSast, "program-register-setter"},
  {"sexpr-variable-name", &module_info_evalSsyntax, "sexpr-variable-name"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"$sexpr-define-generic-tag", &module_info_evalSsyntax, "$sexpr-define-generic-tag"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"fun-refs", &module_info_gooSboot, "fun-refs"},
  {"<real-reference>", &module_info_evalSast, "<real-reference>"},
  {"loc", &module_info_gooSboot, "loc"},
  {"$sexpr-define-function-tag", &module_info_evalSsyntax, "$sexpr-define-function-tag"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"$sexpr-let-tag", &module_info_evalSsyntax, "$sexpr-let-tag"},
  {"property-unbound-error", &module_info_gooSboot, "property-unbound-error"},
  {"%su", &module_info_gooSboot, "%su"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"monitor-info", &module_info_evalSast, "monitor-info"},
  {"as-lst", &module_info_evalSast, "as-lst"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"*register-passive?*", &module_info_evalSast_linearize, "*register-passive?*"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"function-debug-name-setter", &module_info_evalSast, "function-debug-name-setter"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"<static-module-binding-reference>", &module_info_evalSast, "<static-module-binding-reference>"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"<unbound-error>", &module_info_gooSconditions, "<unbound-error>"},
  {"<ast-primitive>", &module_info_evalSast, "<ast-primitive>"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"<property-error>", &module_info_gooSconditions, "<property-error>"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"function-index", &module_info_evalSast, "function-index"},
  {"add", &module_info_gooScolsScol, "add"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"sexpr-fab-setter", &module_info_evalSsyntax, "sexpr-fab-setter"},
  {"binding-locative-setter", &module_info_evalSast, "binding-locative-setter"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%str", &module_info_gooSboot, "%str"},
  {"function-frame-len", &module_info_evalSast, "function-frame-len"},
  {"function-self-recursive?-setter", &module_info_evalSast, "function-self-recursive?-setter"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"sexpr-prop-init?", &module_info_evalSsyntax, "sexpr-prop-init?"},
  {"objectify-with-subtransaction", &module_info_evalSast, "objectify-with-subtransaction"},
  {"ast-walk!", &module_info_evalSast, "ast-walk!"},
  {"sexpr-make-macro-function", &module_info_evalSsyntax, "sexpr-make-macro-function"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"rem", &module_info_gooSmath, "rem"},
  {"as", &module_info_gooStypes, "as"},
  {"sexpr-operator", &module_info_evalSsyntax, "sexpr-operator"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"env-object-name", &module_info_evalSast, "env-object-name"},
  {"<programs>", &module_info_evalSast, "<programs>"},
  {"^", &module_info_gooSmath, "^"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"<simple-condition>", &module_info_gooSconditions, "<simple-condition>"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"<module-binding>", &module_info_evalSast, "<module-binding>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"alternative-condition", &module_info_evalSast, "alternative-condition"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"col", &module_info_gooScolsScol, "col"},
  {"signature-specs", &module_info_evalSast, "signature-specs"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"reference-offset", &module_info_evalSast_linearize, "reference-offset"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"sexpr-definition-value", &module_info_evalSsyntax, "sexpr-definition-value"},
  {"locals-body", &module_info_evalSast, "locals-body"},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_evalSsyntax, "sexpr-unwind-protect-cleanup-forms"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"property-type-error", &module_info_gooSboot, "property-type-error"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"function-bindings", &module_info_evalSast, "function-bindings"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"sexpr-define-class?", &module_info_evalSsyntax, "sexpr-define-class?"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"fix-let-types", &module_info_evalSast, "fix-let-types"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"describe-condition", &module_info_gooSconditions, "describe-condition"},
  {"binding-info-setter", &module_info_evalSast, "binding-info-setter"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"sexpr-unquote?", &module_info_evalSsyntax, "sexpr-unquote?"},
  {"sexpr-if-else", &module_info_evalSsyntax, "sexpr-if-else"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"form-quotations", &module_info_evalSast_linearize, "form-quotations"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"binding-value-setter", &module_info_evalSast, "binding-value-setter"},
  {"%compile", &module_info_gooSsystem, "%compile"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"even?", &module_info_gooSmath, "even?"},
  {"ds", &module_info_gooSboot, "ds"},
  {"sexpr-def-value", &module_info_evalSsyntax, "sexpr-def-value"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"%vm-box-fab", &module_info_gooSboot, "%vm-box-fab"},
  {"sexpr-prop-owner", &module_info_evalSsyntax, "sexpr-prop-owner"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"*current-handlers*", &module_info_gooSconditions, "*current-handlers*"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"sexpr-text-of-quotation", &module_info_evalSsyntax, "sexpr-text-of-quotation"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"function-free", &module_info_evalSast, "function-free"},
  {"%binding-value-setter", &module_info_evalSast_eval, "%binding-value-setter"},
  {"sig", &module_info_gooSconditions, "sig"},
  {"mod", &module_info_gooSmath, "mod"},
  {"$sexpr-if-tag", &module_info_evalSsyntax, "$sexpr-if-tag"},
  {"no-next-methods-error", &module_info_gooSboot, "no-next-methods-error"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"unbound-variable-error-variable", &module_info_gooSconditions, "unbound-variable-error-variable"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"$sexpr-isa-tag", &module_info_evalSsyntax, "$sexpr-isa-tag"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"handler-function", &module_info_gooSconditions, "handler-function"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"len", &module_info_gooStypes, "len"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"atan", &module_info_gooSmath, "atan"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"property-error-owner", &module_info_gooSconditions, "property-error-owner"},
  {"in", &module_info_gooSioSport, "in"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"assignment-binding", &module_info_evalSast, "assignment-binding"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"*", &module_info_gooSmath, "*"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"op", &module_info_gooSmacros, "op"},
  {"<global-box>", &module_info_evalSast, "<global-box>"},
  {"assignment-form-setter", &module_info_evalSast, "assignment-form-setter"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"load-in", &module_info_evalSast, "load-in"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"monitor-test", &module_info_evalSast, "monitor-test"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"<local-binding>", &module_info_evalSast, "<local-binding>"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"function-temporaries", &module_info_evalSast, "function-temporaries"},
  {"$sexpr-set-tag", &module_info_evalSsyntax, "$sexpr-set-tag"},
  {"floor", &module_info_gooSmath, "floor"},
  {"<magic-reference>", &module_info_evalSast, "<magic-reference>"},
  {"$sexpr-begin-tag", &module_info_evalSsyntax, "$sexpr-begin-tag"},
  {"clone", &module_info_gooSboot, "clone"},
  {"sexpr-if-test", &module_info_evalSsyntax, "sexpr-if-test"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"<simple-error>", &module_info_gooSconditions, "<simple-error>"},
  {"<unbound-variable-error>", &module_info_gooSconditions, "<unbound-variable-error>"},
  {"<compiler-error>", &module_info_gooSconditions, "<compiler-error>"},
  {"bound?-reference", &module_info_evalSast, "bound?-reference"},
  {"function-body", &module_info_evalSast, "function-body"},
  {"%binding-bound?", &module_info_evalSast_eval, "%binding-bound?"},
  {"monitor-handler", &module_info_evalSast, "monitor-handler"},
  {"sexpr-method-signature", &module_info_evalSsyntax, "sexpr-method-signature"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"<no-next-methods-error>", &module_info_gooSconditions, "<no-next-methods-error>"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"%get", &module_info_gooSboot, "%get"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, "binding-dynamic-extent?-setter"},
  {"sexpr-block-body", &module_info_evalSsyntax, "sexpr-block-body"},
  {"eval", &module_info_evalSsyntax, "eval"},
  {"ambiguous-method-error", &module_info_gooSboot, "ambiguous-method-error"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"function-signature", &module_info_evalSast, "function-signature"},
  {"<<", &module_info_gooSmath, "<<"},
  {"sexpr-operands", &module_info_evalSsyntax, "sexpr-operands"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"fin", &module_info_gooSboot, "fin"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"def", &module_info_gooSboot, "def"},
  {"program-quotations", &module_info_evalSast_linearize, "program-quotations"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"module-mangled-name", &module_info_evalSast, "module-mangled-name"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"<global-reference>", &module_info_evalSast, "<global-reference>"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"module-uses-c-files", &module_info_evalSast, "module-uses-c-files"},
  {"$sexpr-unwind-protect-tag", &module_info_evalSsyntax, "$sexpr-unwind-protect-tag"},
  {"<local-reference>", &module_info_evalSast, "<local-reference>"},
  {"into", &module_info_gooScolsScol, "into"},
  {"<definition>", &module_info_evalSast, "<definition>"},
  {"reference-called-function?", &module_info_evalSast, "reference-called-function?"},
  {"function-registers-setter", &module_info_evalSast, "function-registers-setter"},
  {"module-mangled-string-name", &module_info_evalSast, "module-mangled-string-name"},
  {"@==", &module_info_gooSboot, "@=="},
  {"map", &module_info_gooSmacros, "map"},
  {"<call-error>", &module_info_gooSconditions, "<call-error>"},
  {"alternative-consequent", &module_info_evalSast, "alternative-consequent"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"fab-handler", &module_info_gooSconditions, "fab-handler"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"<box-creation>", &module_info_evalSast_linearize, "<box-creation>"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"function-body-setter", &module_info_evalSast, "function-body-setter"},
  {"export", &module_info_gooSboot, "export"},
  {"compile-time-program", &module_info_evalSast, "compile-time-program"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"binding-index", &module_info_evalSast, "binding-index"},
  {"ast-evaluate", &module_info_evalSast, "ast-evaluate"},
  {"<module-binding-reference>", &module_info_evalSast, "<module-binding-reference>"},
  {"tup", &module_info_gooSboot, "tup"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"*goo-build-root*", &module_info_gooSsystem, "*goo-build-root*"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"sexpr-unwind-protect-protected-form", &module_info_evalSsyntax, "sexpr-unwind-protect-protected-form"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"sub*-setter", &module_info_gooScolsSseqx, "sub*-setter"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"@not", &module_info_gooSboot, "@not"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"sexpr-fab-getter", &module_info_evalSsyntax, "sexpr-fab-getter"},
  {"binding-locative", &module_info_evalSast, "binding-locative"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"or", &module_info_gooSmacros, "or"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"<ast-macro-definition>", &module_info_evalSast, "<ast-macro-definition>"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"function-binding", &module_info_evalSast, "function-binding"},
  {"program-type", &module_info_evalSast, "program-type"},
  {"<narity-error>", &module_info_gooSconditions, "<narity-error>"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"put", &module_info_gooSioSport, "put"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"<renamed-local-binding>", &module_info_evalSast_linearize, "<renamed-local-binding>"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"set-module-environments", &module_info_evalSast, "set-module-environments"},
  {"and", &module_info_gooSmacros, "and"},
  {"sexpr-prop-type", &module_info_evalSsyntax, "sexpr-prop-type"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"<syntax-error>", &module_info_gooSconditions, "<syntax-error>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"sexpr-assignment-variable", &module_info_evalSsyntax, "sexpr-assignment-variable"},
  {"<assignment>", &module_info_evalSast, "<assignment>"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"~==", &module_info_gooSmath, "~=="},
  {"close", &module_info_gooSioSport, "close"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"unchecked-runtime-environment", &module_info_evalSast, "unchecked-runtime-environment"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"t?", &module_info_gooStypes, "t?"},
  {"<ast-primitive-definition>", &module_info_evalSast, "<ast-primitive-definition>"},
  {"gather-temporaries!", &module_info_evalSast_linearize, "gather-temporaries!"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"1-", &module_info_gooSmath, "1-"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"<module>", &module_info_evalSast, "<module>"},
  {"msg-to-str", &module_info_gooSconditions, "msg-to-str"},
  {"set", &module_info_gooSboot, "set"},
  {"sexpr-isa-parent", &module_info_evalSsyntax, "sexpr-isa-parent"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"alternative-alternant", &module_info_evalSast, "alternative-alternant"},
  {"function-nary?", &module_info_evalSast, "function-nary?"},
  {"if", &module_info_gooSboot, "if"},
  {"internal-error", &module_info_gooSboot, "internal-error"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"stack-overflow-error", &module_info_gooSboot, "stack-overflow-error"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"<free-environment>", &module_info_evalSast, "<free-environment>"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<assert-error>", &module_info_gooSconditions, "<assert-error>"},
  {"sexpr-loc-bound-bodies", &module_info_evalSsyntax, "sexpr-loc-bound-bodies"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"<bound?>", &module_info_evalSast, "<bound?>"},
  {"default-handler", &module_info_gooSconditions, "default-handler"},
  {"binding-info", &module_info_evalSast, "binding-info"},
  {"call-error-function", &module_info_gooSconditions, "call-error-function"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"|", &module_info_gooSmath, "|"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"<pathname-error>", &module_info_gooSsystem, "<pathname-error>"},
  {"<keyboard-interrupt>", &module_info_gooSconditions, "<keyboard-interrupt>"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"syntax-error", &module_info_gooSboot, "syntax-error"},
  {"binding-value", &module_info_evalSast, "binding-value"},
  {"as-error", &module_info_gooSboot, "as-error"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"cpl-error", &module_info_gooSboot, "cpl-error"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"<sequential>", &module_info_evalSast, "<sequential>"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"sexpr-def-variable", &module_info_evalSsyntax, "sexpr-def-variable"},
  {"<ambiguous-method-error>", &module_info_gooSconditions, "<ambiguous-method-error>"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"<macro-error>", &module_info_gooSconditions, "<macro-error>"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"sexpr-isa-init-values", &module_info_evalSsyntax, "sexpr-isa-init-values"},
  {"module-target-environment", &module_info_evalSast, "module-target-environment"},
  {"%load", &module_info_gooSsystem, "%load"},
  {"do-named-static-global-bindings", &module_info_evalSast, "do-named-static-global-bindings"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"module-uses-c-libraries", &module_info_evalSast, "module-uses-c-libraries"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"binding-dotted?", &module_info_evalSast, "binding-dotted?"},
  {"now", &module_info_gooScolsScol, "now"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"t<", &module_info_gooStypes, "t<"},
  {"ct", &module_info_gooSboot, "ct"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"mif", &module_info_gooSboot, "mif"},
  {"sexpr-loc-bound-signatures", &module_info_evalSsyntax, "sexpr-loc-bound-signatures"},
  {"==", &module_info_gooSmacros, "=="},
  {"<unwind-protect>", &module_info_evalSast, "<unwind-protect>"},
  {"add-goo-personal-root-path", &module_info_gooSsystem, "add-goo-personal-root-path"},
  {"program-definitions", &module_info_evalSast_linearize, "program-definitions"},
  {"property-not-found-error", &module_info_gooSboot, "property-not-found-error"},
  {"sexpr-syntax-if-value", &module_info_evalSsyntax, "sexpr-syntax-if-value"},
  {"report-undefined-global-bindings", &module_info_evalSast, "report-undefined-global-bindings"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"sequentialize", &module_info_evalSast, "sequentialize"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"<io-error>", &module_info_gooSconditions, "<io-error>"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"sexpr-prop-name", &module_info_evalSsyntax, "sexpr-prop-name"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"macro-error-arguments", &module_info_gooSconditions, "macro-error-arguments"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"-", &module_info_gooSmath, "-"},
  {"sexpr-def?", &module_info_evalSsyntax, "sexpr-def?"},
  {"<runtime-assignment>", &module_info_evalSast, "<runtime-assignment>"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"sexpr-bind-pattern-variables", &module_info_evalSsyntax, "sexpr-bind-pattern-variables"},
  {"form-definitions", &module_info_evalSast_linearize, "form-definitions"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"case", &module_info_gooSmacros, "case"},
  {"sexpr-function-signature", &module_info_evalSsyntax, "sexpr-function-signature"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"<runtime-reference>", &module_info_evalSast, "<runtime-reference>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"$sexpr-define-method-tag", &module_info_evalSsyntax, "$sexpr-define-method-tag"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"list-handlers", &module_info_gooSconditions, "list-handlers"},
  {"let", &module_info_gooSboot, "let"},
  {"property-error-generic", &module_info_gooSconditions, "property-error-generic"},
  {"out", &module_info_gooSioSport, "out"},
  {"any?", &module_info_gooStypes, "any?"},
  {"always", &module_info_gooSruntime, "always"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<fix-let>", &module_info_evalSast, "<fix-let>"},
  {"form-program", &module_info_evalSast_linearize, "form-program"},
  {"sexpr-syntax-if-else", &module_info_evalSsyntax, "sexpr-syntax-if-else"},
  {"<directory-error>", &module_info_gooSsystem, "<directory-error>"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"abs", &module_info_gooSmath, "abs"},
  {"monitor-main-thunk", &module_info_evalSast, "monitor-main-thunk"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"t=", &module_info_gooStypes, "t="},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"binding-dynamic-extent?", &module_info_evalSast, "binding-dynamic-extent?"},
  {"items", &module_info_gooScolsScol, "items"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"max", &module_info_gooSmag, "max"},
  {"<constant>", &module_info_evalSast, "<constant>"},
  {"application-known?-setter", &module_info_evalSast, "application-known?-setter"},
  {"round/", &module_info_gooSmath, "round/"},
  {"file-opening-error-filename", &module_info_gooSconditions, "file-opening-error-filename"},
  {"~=", &module_info_gooSmath, "~="},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"program-form", &module_info_evalSast_linearize, "program-form"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"logn", &module_info_gooSmath, "logn"},
  {"<range-error>", &module_info_gooSconditions, "<range-error>"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"find", &module_info_gooScolsScol, "find"},
  {"assignment-form", &module_info_evalSast, "assignment-form"},
  {"file-copy", &module_info_gooSsystem, "file-copy"},
  {"function-source-setter", &module_info_evalSast, "function-source-setter"},
  {"sexpr-let->combination", &module_info_evalSsyntax, "sexpr-let->combination"},
  {"arity-error", &module_info_gooSboot, "arity-error"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"acos", &module_info_gooSmath, "acos"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"function-registers", &module_info_evalSast, "function-registers"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"assignment-reference", &module_info_evalSast, "assignment-reference"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"*goo-personal-root*", &module_info_gooSsystem, "*goo-personal-root*"},
  {"sexpr-syntax-definition-variable", &module_info_evalSsyntax, "sexpr-syntax-definition-variable"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"<free-reference>", &module_info_evalSast_linearize, "<free-reference>"},
  {"match", &module_info_gooSmacros, "match"},
  {"sexpr-function-definition-variable", &module_info_evalSsyntax, "sexpr-function-definition-variable"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"sexpr-make-begin", &module_info_evalSsyntax, "sexpr-make-begin"},
  {"fix-let-types-setter", &module_info_evalSast, "fix-let-types-setter"},
  {"ast-error", &module_info_evalSdependency, "ast-error"},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, "%vm-fun-env-elt-setter"},
  {"msg", &module_info_gooSconditions, "msg"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"t+", &module_info_gooStypes, "t+"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"reference-self?", &module_info_evalSast_linearize, "reference-self?"},
  {"describe-handler", &module_info_gooSconditions, "describe-handler"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"open", &module_info_gooSioSport, "open"},
  {"when", &module_info_gooSmacros, "when"},
  {"<global-assignment>", &module_info_evalSast, "<global-assignment>"},
  {"<file-opening-error>", &module_info_gooSconditions, "<file-opening-error>"},
  {"condition-message", &module_info_gooSconditions, "condition-message"},
  {"reference-called-function?-setter", &module_info_evalSast, "reference-called-function?-setter"},
  {"<macro-reference>", &module_info_evalSast, "<macro-reference>"},
  {"<as-error>", &module_info_gooSconditions, "<as-error>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"reference-frame-offset", &module_info_evalSast, "reference-frame-offset"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"arithmetic-error", &module_info_gooSboot, "arithmetic-error"},
  {"global-box-value-setter", &module_info_evalSast, "global-box-value-setter"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"sexpr-isa-prop-inits", &module_info_evalSsyntax, "sexpr-isa-prop-inits"},
  {"find-goo-file-at", &module_info_gooSsystem, "find-goo-file-at"},
  {"$sexpr-macro-expand-tag", &module_info_evalSsyntax, "$sexpr-macro-expand-tag"},
  {"<fab-list>", &module_info_evalSast, "<fab-list>"},
  {"$sexpr-method-tag", &module_info_evalSsyntax, "$sexpr-method-tag"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"sexpr-assignment-value", &module_info_evalSsyntax, "sexpr-assignment-value"},
  {"<handler-info>", &module_info_gooSconditions, "<handler-info>"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"module-name", &module_info_evalSast, "module-name"},
  {"<property-not-found-error>", &module_info_gooSconditions, "<property-not-found-error>"},
  {"unwind-protect-protected-thunk", &module_info_evalSast, "unwind-protect-protected-thunk"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"ast-contains-fun?", &module_info_evalSast_linearize, "ast-contains-fun?"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"binding-name", &module_info_evalSast, "binding-name"},
  {"until", &module_info_gooSmacros, "until"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"div", &module_info_gooSmath, "div"},
  {"rep", &module_info_gooSboot, "rep"},
  {"build-condition-interactively", &module_info_gooSconditions, "build-condition-interactively"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"unconstrained-type?", &module_info_evalSast_linearize, "unconstrained-type?"},
  {"fix-let-bindings", &module_info_evalSast, "fix-let-bindings"},
  {"min", &module_info_gooSmag, "min"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"%vm-with-cleanup", &module_info_gooSboot, "%vm-with-cleanup"},
  {"insert-box!", &module_info_evalSast_linearize, "insert-box!"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"find-binding", &module_info_evalSast, "find-binding"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"application-known?", &module_info_evalSast, "application-known?"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"signature-bindings-setter", &module_info_evalSast, "signature-bindings-setter"},
  {"application-arguments", &module_info_evalSast, "application-arguments"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"pow", &module_info_gooSmath, "pow"},
  {"constant-value", &module_info_evalSast, "constant-value"},
  {"<arguments>", &module_info_evalSast, "<arguments>"},
  {"install-initial-bindings", &module_info_evalSast, "install-initial-bindings"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"<return-type-error>", &module_info_gooSconditions, "<return-type-error>"},
  {"extract-things!", &module_info_evalSast_linearize, "extract-things!"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"binding-native-to?", &module_info_evalSast, "binding-native-to?"},
  {"~", &module_info_gooSmath, "~"},
  {"<ast-method>", &module_info_evalSast, "<ast-method>"},
  {"@len", &module_info_gooSboot, "@len"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"sexpr-monitor-expand", &module_info_evalSsyntax, "sexpr-monitor-expand"},
  {"range-error-collection", &module_info_gooSconditions, "range-error-collection"},
  {"sin", &module_info_gooSmath, "sin"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"signature-value-setter", &module_info_evalSast, "signature-value-setter"},
  {"<dynamic-definition>", &module_info_evalSast, "<dynamic-definition>"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"fix-let-arguments-setter", &module_info_evalSast, "fix-let-arguments-setter"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"<serious-condition>", &module_info_gooSconditions, "<serious-condition>"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"use", &module_info_gooSboot, "use"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"application-function", &module_info_evalSast, "application-function"},
  {"$sexpr-prop-tag", &module_info_evalSsyntax, "$sexpr-prop-tag"},
  {"sexpr-iterate->loc", &module_info_evalSsyntax, "sexpr-iterate->loc"},
  {"closure-creation-free", &module_info_evalSast_linearize, "closure-creation-free"},
  {"$sexpr-locals-tag", &module_info_evalSsyntax, "$sexpr-locals-tag"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"binding-type-setter", &module_info_evalSast, "binding-type-setter"},
  {"fun-sig", &module_info_gooSboot, "fun-sig"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"macro-error-name", &module_info_gooSconditions, "macro-error-name"},
  {"flatten-seqs", &module_info_evalSast_linearize, "flatten-seqs"},
  {"<box-read>", &module_info_evalSast_linearize, "<box-read>"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"build-condition-for-handler-interactively", &module_info_gooSconditions, "build-condition-for-handler-interactively"},
  {"box-reference", &module_info_evalSast_linearize, "box-reference"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"@+", &module_info_gooSboot, "@+"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"<type-error>", &module_info_gooSconditions, "<type-error>"},
  {"read", &module_info_gooSconditions, "read"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"$sexpr-monitor-tag", &module_info_evalSsyntax, "$sexpr-monitor-tag"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"ast-walk", &module_info_evalSast, "ast-walk"},
  {"probe-module", &module_info_evalSast, "probe-module"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"neg", &module_info_gooSmath, "neg"},
  {"app", &module_info_gooSmacros, "app"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"<property-unbound-error>", &module_info_gooSconditions, "<property-unbound-error>"},
  {"sexpr-forward-primitive?", &module_info_evalSsyntax, "sexpr-forward-primitive?"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"runtime-environment", &module_info_evalSast, "runtime-environment"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"<local-assignment>", &module_info_evalSast, "<local-assignment>"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"sexpr-isa-init-props", &module_info_evalSsyntax, "sexpr-isa-init-props"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"call-error-arguments", &module_info_gooSconditions, "call-error-arguments"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {"def-list", &module_info_evalSast, "def-list"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"no-applicable-methods-error", &module_info_gooSboot, "no-applicable-methods-error"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {">=", &module_info_gooSmag, ">="},
  {"program-register", &module_info_evalSast, "program-register"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"<ast-function>", &module_info_evalSast, "<ast-function>"},
  {"sexpr-unquote-splicing?", &module_info_evalSsyntax, "sexpr-unquote-splicing?"},
  {"binding-dotted?-setter", &module_info_evalSast, "binding-dotted?-setter"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"function-temporaries-setter", &module_info_evalSast, "function-temporaries-setter"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"<ast-generic>", &module_info_evalSast, "<ast-generic>"},
  {"$e", &module_info_gooSmath, "$e"},
  {"sexpr-signature-value", &module_info_evalSsyntax, "sexpr-signature-value"},
  {"<predefined-application>", &module_info_evalSast, "<predefined-application>"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"<immediate-constant>", &module_info_evalSast, "<immediate-constant>"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"@opts-as-lst", &module_info_gooSboot, "@opts-as-lst"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"load-module", &module_info_evalSast, "load-module"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"%met", &module_info_gooSboot, "%met"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"binding-module-name", &module_info_evalSast, "binding-module-name"},
  {"dl", &module_info_gooSboot, "dl"},
  {"<compile-time>", &module_info_evalSast, "<compile-time>"},
  {"<passive-program>", &module_info_evalSast, "<passive-program>"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"lift!", &module_info_evalSast_linearize, "lift!"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"dss", &module_info_gooSboot, "dss"},
  {"sexpr-syntax-if-then", &module_info_evalSsyntax, "sexpr-syntax-if-then"},
  {"function-data-refs-setter", &module_info_evalSast, "function-data-refs-setter"},
  {"binding-mangled-name-setter", &module_info_evalSast, "binding-mangled-name-setter"},
  {"signature-names-setter", &module_info_evalSast, "signature-names-setter"},
  {"reference-frame-number", &module_info_evalSast, "reference-frame-number"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"module-exports", &module_info_evalSast, "module-exports"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"sexpr-definition-variable", &module_info_evalSsyntax, "sexpr-definition-variable"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"function-value", &module_info_evalSast, "function-value"},
  {"<ast-signature>", &module_info_evalSast, "<ast-signature>"},
  {"1+", &module_info_gooSmath, "1+"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"tail", &module_info_gooSboot, "tail"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"module-uses-c-includes", &module_info_evalSast, "module-uses-c-includes"},
  {"%dispatch", &module_info_gooSboot, "%dispatch"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"do-static-global-bindings", &module_info_evalSast, "do-static-global-bindings"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"sexpr-sequence->begin", &module_info_evalSsyntax, "sexpr-sequence->begin"},
  {"environment-bindings", &module_info_evalSast, "environment-bindings"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"module-name-to-relpath", &module_info_evalSast, "module-name-to-relpath"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"binding-mangled-name", &module_info_evalSast, "binding-mangled-name"},
  {"signature-arity-setter", &module_info_evalSast, "signature-arity-setter"},
  {"function-source", &module_info_evalSast, "function-source"},
  {"<argument-type-error>", &module_info_gooSconditions, "<argument-type-error>"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"%time", &module_info_gooSboot, "%time"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"do-module-loader-modules", &module_info_evalSast, "do-module-loader-modules"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"$sexpr-quote-tag", &module_info_evalSsyntax, "$sexpr-quote-tag"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"type-error-value", &module_info_gooSconditions, "type-error-value"},
  {"constant-index", &module_info_evalSast, "constant-index"},
  {"%vm-box-val", &module_info_gooSboot, "%vm-box-val"},
  {"<locals>", &module_info_evalSast, "<locals>"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"objectify-signature", &module_info_evalSast, "objectify-signature"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"find-goo-file-in-path", &module_info_gooSsystem, "find-goo-file-in-path"},
  {"$sexpr-define-syntax-tag", &module_info_evalSsyntax, "$sexpr-define-syntax-tag"},
  {"monitor-type", &module_info_evalSast, "monitor-type"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"condition-arguments", &module_info_gooSconditions, "condition-arguments"},
  {"nul", &module_info_gooSboot, "nul"},
  {"seq", &module_info_gooSboot, "seq"},
  {"do", &module_info_gooSmacros, "do"},
  {"$sexpr-syntax-if-tag", &module_info_evalSsyntax, "$sexpr-syntax-if-tag"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"for", &module_info_gooSmacros, "for"},
  {"binding-module", &module_info_evalSast, "binding-module"},
  {"<internal-error>", &module_info_gooSconditions, "<internal-error>"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"<=", &module_info_gooSmag, "<="},
  {"sexpr-block-name", &module_info_evalSsyntax, "sexpr-block-name"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"application-tail?", &module_info_evalSast, "application-tail?"},
  {"<stack-overflow>", &module_info_gooSconditions, "<stack-overflow>"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"module-binding", &module_info_evalSast, "module-binding"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"locals-functions-setter", &module_info_evalSast, "locals-functions-setter"},
  {"handler-matches?", &module_info_gooSconditions, "handler-matches?"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"ast-define-binding", &module_info_evalSast, "ast-define-binding"},
  {">", &module_info_gooSmag, ">"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"global-box-value", &module_info_evalSast, "global-box-value"},
  {"function-adjectives", &module_info_evalSast, "function-adjectives"},
  {"%binding-value-of", &module_info_evalSast_eval, "%binding-value-of"},
  {"sexpr-loc-bound-names", &module_info_evalSsyntax, "sexpr-loc-bound-names"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"<arity-error>", &module_info_gooSconditions, "<arity-error>"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"range-error-key", &module_info_gooSconditions, "range-error-key"},
  {"sexpr-variable?", &module_info_evalSsyntax, "sexpr-variable?"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"sexpr-if-then", &module_info_evalSsyntax, "sexpr-if-then"},
  {"function-self-recursive?", &module_info_evalSast, "function-self-recursive?"},
  {"free-environment", &module_info_evalSast, "free-environment"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"dp", &module_info_gooSboot, "dp"},
  {"error", &module_info_gooSboot, "error"},
  {">>", &module_info_gooSmath, ">>"},
  {"+", &module_info_gooSmath, "+"},
  {"signature-nary?-setter", &module_info_evalSast, "signature-nary?-setter"},
  {"asin", &module_info_gooSmath, "asin"},
  {"<condition>", &module_info_gooSconditions, "<condition>"},
  {"signature-specs-setter", &module_info_evalSast, "signature-specs-setter"},
  {"register-allocate!", &module_info_evalSast_linearize, "register-allocate!"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%binding-value-of-setter", &module_info_evalSast_eval, "%binding-value-of-setter"},
  {"<restart>", &module_info_gooSconditions, "<restart>"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"objectify-quotation", &module_info_evalSast, "objectify-quotation"},
  {"<arithmetic-error>", &module_info_gooSconditions, "<arithmetic-error>"},
  {"<", &module_info_gooSmag, "<"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"environment-uses-modules", &module_info_evalSast, "environment-uses-modules"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"binding-inferred-type-setter", &module_info_evalSast, "binding-inferred-type-setter"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"%binding-bound-of?", &module_info_evalSast_eval, "%binding-bound-of?"},
  {"dm", &module_info_gooSboot, "dm"},
  {"%im", &module_info_gooSboot, "%im"},
  {"find-environment-module", &module_info_evalSast, "find-environment-module"},
  {"while", &module_info_gooSmacros, "while"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"signature-bindings", &module_info_evalSast, "signature-bindings"},
  {"%met-env-setter", &module_info_gooSboot, "%met-env-setter"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"so-load", &module_info_gooSsystem, "so-load"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"<regular-application>", &module_info_evalSast, "<regular-application>"},
  {"sexpr-fab-setter-name", &module_info_evalSsyntax, "sexpr-fab-setter-name"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"module-mangled-string-name-setter", &module_info_evalSast, "module-mangled-string-name-setter"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"df", &module_info_gooSboot, "df"},
  {"$default-handler-info", &module_info_gooSconditions, "$default-handler-info"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"environment-module", &module_info_evalSast, "environment-module"},
  {"sexpr-function-definition-value", &module_info_evalSsyntax, "sexpr-function-definition-value"},
  {"add-goo-root-path", &module_info_gooSsystem, "add-goo-root-path"},
  {"def-programs", &module_info_evalSast, "def-programs"},
  {"<unknown-function-error>", &module_info_gooSconditions, "<unknown-function-error>"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"del", &module_info_gooScolsScol, "del"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, "<no-applicable-methods-error>"},
  {"=", &module_info_gooSmath, "="},
  {"signature-value", &module_info_evalSast, "signature-value"},
  {"get", &module_info_gooSioSport, "get"},
  {"fix-let-arguments", &module_info_evalSast, "fix-let-arguments"},
  {"$sexpr-bind-exit-tag", &module_info_evalSsyntax, "$sexpr-bind-exit-tag"},
  {"sexpr-make-anonymous-method", &module_info_evalSsyntax, "sexpr-make-anonymous-method"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"new", &module_info_gooSboot, "new"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"locals-bindings", &module_info_evalSast, "locals-bindings"},
  {"return-type-error", &module_info_gooSboot, "return-type-error"},
  {"last", &module_info_gooSmacros, "last"},
  {"sexpr-loc-raw-body", &module_info_evalSsyntax, "sexpr-loc-raw-body"},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, "unwind-protect-cleanup-thunk"},
  {"binding-type", &module_info_evalSast, "binding-type"},
  {"dg", &module_info_gooSboot, "dg"},
  {"<monitor>", &module_info_evalSast, "<monitor>"},
  {"function-frame-len-setter", &module_info_evalSast, "function-frame-len-setter"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"init-ast", &module_info_evalSast, "init-ast"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"&", &module_info_gooSmath, "&"},
  {"<module-loader>", &module_info_evalSast, "<module-loader>"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"@<", &module_info_gooSboot, "@<"},
  {"invoke-handler-interactively", &module_info_gooSconditions, "invoke-handler-interactively"},
  {"sexpr-prop-init", &module_info_evalSsyntax, "sexpr-prop-init"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"fix-let-body", &module_info_evalSast, "fix-let-body"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"<bind-exit>", &module_info_evalSast, "<bind-exit>"},
  {"<property-type-error>", &module_info_gooSconditions, "<property-type-error>"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"bind-exit-main-fun", &module_info_evalSast, "bind-exit-main-fun"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"%vm-box-val-setter", &module_info_gooSboot, "%vm-box-val-setter"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"try", &module_info_gooSboot, "try"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"init-environment-for-eval", &module_info_evalSast, "init-environment-for-eval"},
  {"analyze-ast", &module_info_evalSast_linearize, "analyze-ast"},
  {"sexpr-variable-type", &module_info_evalSsyntax, "sexpr-variable-type"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"dc", &module_info_gooSboot, "dc"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"locals-bindings-setter", &module_info_evalSast, "locals-bindings-setter"},
  {"sexpr-expand-backquote", &module_info_evalSsyntax, "sexpr-expand-backquote"},
  {"locals-body-setter", &module_info_evalSast, "locals-body-setter"},
  {"binding-kind", &module_info_evalSast, "binding-kind"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"sexpr-make-application", &module_info_evalSsyntax, "sexpr-make-application"},
  {"sub*", &module_info_gooScolsSseq, "sub*"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"<closure-creation>", &module_info_evalSast_linearize, "<closure-creation>"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"default-handler-description", &module_info_gooSconditions, "default-handler-description"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"program-bindings", &module_info_evalSast_linearize, "program-bindings"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"round", &module_info_gooSmath, "round"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"log", &module_info_gooSmath, "log"},
  {"sexpr-prop-init-var", &module_info_evalSsyntax, "sexpr-prop-init-var"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"<computed-program>", &module_info_evalSast, "<computed-program>"},
  {"$sexpr-quasiquote-tag", &module_info_evalSsyntax, "$sexpr-quasiquote-tag"},
  {"<dynamic-reference>", &module_info_evalSast, "<dynamic-reference>"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"<error>", &module_info_gooSconditions, "<error>"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"fix-let-body-setter", &module_info_evalSast, "fix-let-body-setter"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"binding-global-box", &module_info_evalSast, "binding-global-box"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"application-binding", &module_info_evalSast, "application-binding"},
  {"box-form", &module_info_evalSast_linearize, "box-form"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"fix-let-bindings-setter", &module_info_evalSast, "fix-let-bindings-setter"},
  {"function-debug-name", &module_info_evalSast, "function-debug-name"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%vm-with-exit", &module_info_gooSboot, "%vm-with-exit"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"fab-g2c-module", &module_info_evalSast, "fab-g2c-module"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"sexpr-syntax-if-pattern", &module_info_evalSsyntax, "sexpr-syntax-if-pattern"},
  {"sexpr-method-body", &module_info_evalSsyntax, "sexpr-method-body"},
  {"function-data-refs", &module_info_evalSast, "function-data-refs"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"signature-names", &module_info_evalSast, "signature-names"},
  {"binding-global-box-setter", &module_info_evalSast, "binding-global-box-setter"},
  {"fun", &module_info_gooSboot, "fun"},
  {"gooc-filename", &module_info_gooSsystem, "gooc-filename"},
  {"<static-global-environment>", &module_info_evalSast, "<static-global-environment>"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"sexpr-syntax-definition-value", &module_info_evalSsyntax, "sexpr-syntax-definition-value"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"binding-mutable?", &module_info_evalSast, "binding-mutable?"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"sexpr-define-class-parents", &module_info_evalSsyntax, "sexpr-define-class-parents"},
  {"$goo-boot-module-name", &module_info_evalSast, "$goo-boot-module-name"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"module-syntax-environment", &module_info_evalSast, "module-syntax-environment"},
  {"esc", &module_info_gooSboot, "esc"},
  {"<reference>", &module_info_evalSast, "<reference>"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"<raw-constant>", &module_info_evalSast, "<raw-constant>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"/", &module_info_gooSmath, "/"},
  {"<application>", &module_info_evalSast, "<application>"},
  {"narity-error", &module_info_gooSboot, "narity-error"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"signature-arity", &module_info_evalSast, "signature-arity"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"time", &module_info_gooSsystem, "time"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"$sexpr-def-tag", &module_info_evalSsyntax, "$sexpr-def-tag"},
  {"<handler>", &module_info_gooSconditions, "<handler>"},
  {"choose-handler", &module_info_gooSconditions, "choose-handler"},
  {"tan", &module_info_gooSmath, "tan"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", PVAR, NULL},
  {"frame", CVAR, &YevalStopYframe},
  {"$", CVAR, &YevalStopYD},
  {"auto-run", CVAR, &YevalStopYauto_run},
  {"do-restart", CVAR, &YevalStopYdo_restart},
  {"%%bottom%%g2c-run", CVAR, &YevalStopYPPbottomPPg2c_run},
  {"$$$", CVAR, &YevalStopYDDD},
  {"str-eval-in", CVAR, &YevalStopYstr_eval_in},
  {"print-result-expression", CVAR, &YevalStopYprint_result_expression},
  {"do-stack-frames", CVAR, &YevalStopYdo_stack_frames},
  {"for-frames", PVAR, NULL},
  {"%%top%%top-in", CVAR, &YevalStopYPPtopPPtop_in},
  {"g2c-eval", CVAR, &YevalStopYg2c_eval},
  {"read-file", CVAR, &YevalStopYread_file},
  {"str-parse-in", CVAR, &YevalStopYstr_parse_in},
  {"bt", CVAR, &YevalStopYbt},
  {"load-file", CVAR, &YevalStopYload_file},
  {"$g2c-eval?", CVAR, &YevalStopYDg2c_evalQ},
  {"compiled-file?", CVAR, &YevalStopYcompiled_fileQ},
  {"run", DVAR, &YevalStopYrun},
  {"eval-in", CVAR, &YevalStopYeval_in},
  {"backtrace", CVAR, &YevalStopYbacktrace},
  {"save-image", CVAR, &YevalStopYsave_image},
  {"%%bottom%%ast-run", CVAR, &YevalStopYPPbottomPPast_run},
  {"load", CVAR, &YevalStopYload},
  {"for-user-frames", PVAR, NULL},
  {"parse", CVAR, &YevalStopYparse},
  {"prompt-for-command-expression", CVAR, &YevalStopYprompt_for_command_expression},
  {"esctst", CVAR, &YevalStopYesctst},
  {"str-eval", CVAR, &YevalStopYstr_eval},
  {"$$", CVAR, &YevalStopYDD},
  {"auto-eval", CVAR, &YevalStopYauto_eval},
  {"top", CVAR, &YevalStopYtop},
  {"frame-var", CVAR, &YevalStopYframe_var},
  {"parse-in", CVAR, &YevalStopYparse_in},
  {"str-parse", CVAR, &YevalStopYstr_parse},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"load", "load"},
  {"frame", "frame"},
  {"$", "$"},
  {"read-file", "read-file"},
  {"g2c-eval", "g2c-eval"},
  {"$$", "$$"},
  {"bt", "bt"},
  {"eval", "eval"},
  {"load-file", "load-file"},
  {"backtrace", "backtrace"},
  {"save-image", "save-image"},
  {"top", "top"},
  {"do-stack-frames", "do-stack-frames"},
  {"$$$", "$$$"},
  {"auto-eval", "auto-eval"},
  {"esctst", "esctst"},
  {"frame-var", "frame-var"},
  {"parse-in", "parse-in"},
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
