/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/top");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/top */

EXT(Ytype_object,"goo/boot","type-object");
EXT(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
DEF(YevalStopYPPtopPPtop_in,"eval/top","%%top%%top-in");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
EXT(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(Ylst,"goo/boot","lst");
EXT(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YevalSastYmodule_uses_c_includes,"eval/ast","module-uses-c-includes");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YPsnul,"goo/boot","%snul");
EXT(Ynot,"goo/boot","not");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
DYNEXT(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
DEF(YevalStopYload,"eval/top","load");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
DEF(YevalStopYread_file,"eval/top","read-file");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
EXT(YgooSmathYdiv,"goo/math","div");
DEF(YevalStopYtop,"eval/top","top");
EXT(YgooSmathYC,"goo/math","^");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
EXT(YOlst,"goo/boot","@lst");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
DEF(YevalStopYPPbottomPPast_run,"eval/top","%%bottom%%ast-run");
EXT(YLanyG,"goo/boot","<any>");
EXT(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
EXT(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSmathYround,"goo/math","round");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(Yhead,"goo/boot","head");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSconditionsYdescribe_handler,"goo/conditions","describe-handler");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
DEF(YevalStopYDD,"eval/top","$$");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
EXT(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
EXT(YevalSast_linearizeYprogram_bindings,"eval/ast-linearize","program-bindings");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YsubtypeQ,"goo/boot","subtype?");
DEF(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
DEF(YevalStopYprint_result_expression,"eval/top","print-result-expression");
DEF(YevalStopYeval_in,"eval/top","eval-in");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
DEF(YevalStopYframe,"eval/top","frame");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
DEF(YevalStopYcompiled_fileQ,"eval/top","compiled-file?");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YevalSastYboundQ_default,"eval/ast","bound?-default");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
EXT(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
EXT(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YLclassG,"goo/boot","<class>");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YgooSmathYK,"goo/math","|");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
DEF(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
EXT(YPprop,"goo/boot","%prop");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YevalSastYmodule_uses_c_libraries,"eval/ast","module-uses-c-libraries");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
EXT(Ynarity_error,"goo/boot","narity-error");
DEF(YevalStopYDDD,"eval/top","$$$");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
DEF(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YLstrG,"goo/boot","<str>");
EXT(YevalSast_linearizeYanalyze_ast,"eval/ast-linearize","analyze-ast");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
DEF(YevalStopYdo_restart,"eval/top","do-restart");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Yunexec,"goo/boot","unexec");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooSmathYrem,"goo/math","rem");
DEF(YevalStopYstr_parse,"eval/top","str-parse");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YLmetG,"goo/boot","<met>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YevalSast_linearizeYunconstrained_typeQ,"eval/ast-linearize","unconstrained-type?");
EXT(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
EXT(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
DEF(YevalStopYparse_in,"eval/top","parse-in");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSmacrosYdo,"goo/macros","do");
DEF(YevalStopYstr_eval,"eval/top","str-eval");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
EXT(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
DEF(YevalStopYDg2c_evalQ,"eval/top","$g2c-eval?");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmathYN,"goo/math","~");
EXT(Yclass_props,"goo/boot","class-props");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YevalSast_linearizeYast_contains_funQ,"eval/ast-linearize","ast-contains-fun?");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Ynew,"goo/boot","new");
EXT(YLunionG,"goo/boot","<union>");
EXT(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
DEF(YevalStopYload_file,"eval/top","load-file");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(Ytype_class,"goo/boot","type-class");
DEF(YevalStopYauto_run,"eval/top","auto-run");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
DEF(YevalStopYmsg_src_loc,"eval/top","msg-src-loc");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(Ytup,"goo/boot","tup");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
EXT(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Ynil,"goo/boot","nil");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
DEF(YevalStopYPPbottomPPg2c_run,"eval/top","%%bottom%%g2c-run");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
DEF(YevalStopYD,"eval/top","$");
EXT(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
EXT(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YevalSsyntaxYsexpr_function_definition_adjectives,"eval/syntax","sexpr-function-definition-adjectives");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
DEF(YevalStopYesctst,"eval/top","esctst");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
EXT(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
EXT(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YisaQ,"goo/boot","isa?");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YgooSmacrosYEE,"goo/macros","==");
DEF(YevalStopYframe_var,"eval/top","frame-var");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
EXT(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
EXT(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(Yclone,"goo/boot","clone");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
EXT(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
EXT(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
EXT(YgooSmathYE,"goo/math","=");
DEF(YevalStopYprompt_for_command_expression,"eval/top","prompt-for-command-expression");
EXT(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
EXT(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
DEF(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
DYNDEF(YevalStopYrun,"eval/top","run");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
DEF(YevalStopYstr_parse_in,"eval/top","str-parse-in");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
DEF(YevalStopYbt,"eval/top","bt");
EXT(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSmathYB,"goo/math","&");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
EXT(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(Yarity_error,"goo/boot","arity-error");
DEF(YevalStopYparse,"eval/top","parse");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
DEF(YevalStopYstr_eval_in,"eval/top","str-eval-in");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YLintG,"goo/boot","<int>");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
DEF(YevalStopYsave_image,"eval/top","save-image");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
EXT(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YLnumG,"goo/boot","<num>");
EXT(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
EXT(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
EXT(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YLproductG,"goo/boot","<product>");
EXT(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_95);
DEFLIT(lit_199);
DEFLIT(lit_166);
DEFLIT(lit_78);
DEFLIT(lit_108);
DEFLIT(lit_76);
DEFLIT(lit_32);
DEFLIT(lit_197);
DEFLIT(lit_133);
DEFLIT(lit_64);
DEFLIT(lit_110);
DEFLIT(lit_180);
DEFLIT(lit_175);
DEFLIT(lit_62);
DEFLIT(lit_8);
DEFLIT(lit_100);
DEFLIT(lit_122);
DEFLIT(lit_57);
DEFLIT(lit_149);
DEFLIT(lit_150);
DEFLIT(lit_137);
DEFLIT(lit_113);
DEFLIT(lit_190);
DEFLIT(lit_134);
DEFLIT(lit_104);
DEFLIT(lit_171);
DEFLIT(lit_17);
DEFLIT(lit_56);
DEFLIT(lit_187);
DEFLIT(lit_184);
DEFLIT(lit_15);
DEFLIT(lit_89);
DEFLIT(lit_55);
DEFLIT(lit_112);
DEFLIT(lit_37);
DEFLIT(lit_29);
DEFLIT(lit_167);
DEFLIT(lit_27);
DEFLIT(lit_174);
DEFLIT(lit_105);
DEFLIT(lit_68);
DEFLIT(lit_83);
DEFLIT(lit_5);
DEFLIT(lit_11);
DEFLIT(lit_73);
DEFLIT(lit_182);
DEFLIT(lit_35);
DEFLIT(lit_157);
DEFLIT(lit_103);
DEFLIT(lit_115);
DEFLIT(lit_140);
DEFLIT(lit_22);
DEFLIT(lit_52);
DEFLIT(lit_24);
DEFLIT(lit_132);
DEFLIT(lit_144);
DEFLIT(lit_127);
DEFLIT(lit_102);
DEFLIT(lit_93);
DEFLIT(lit_201);
DEFLIT(lit_19);
DEFLIT(lit_13);
DEFLIT(lit_189);
DEFLIT(lit_109);
DEFLIT(lit_129);
DEFLIT(lit_117);
DEFLIT(lit_18);
DEFLIT(lit_63);
DEFLIT(lit_80);
DEFLIT(lit_191);
DEFLIT(lit_139);
DEFLIT(lit_101);
DEFLIT(lit_79);
DEFLIT(lit_123);
DEFLIT(lit_31);
DEFLIT(lit_94);
DEFLIT(lit_10);
DEFLIT(lit_72);
DEFLIT(lit_86);
DEFLIT(lit_61);
DEFLIT(lit_58);
DEFLIT(lit_186);
DEFLIT(lit_53);
DEFLIT(lit_163);
DEFLIT(lit_126);
DEFLIT(lit_172);
DEFLIT(lit_142);
DEFLIT(lit_82);
DEFLIT(lit_173);
DEFLIT(lit_41);
DEFLIT(lit_185);
DEFLIT(lit_91);
DEFLIT(lit_162);
DEFLIT(lit_124);
DEFLIT(lit_2);
DEFLIT(lit_165);
DEFLIT(lit_42);
DEFLIT(lit_9);
DEFLIT(lit_49);
DEFLIT(lit_155);
DEFLIT(lit_128);
DEFLIT(lit_177);
DEFLIT(lit_97);
DEFLIT(lit_75);
DEFLIT(lit_158);
DEFLIT(lit_3);
DEFLIT(lit_193);
DEFLIT(lit_152);
DEFLIT(lit_136);
DEFLIT(lit_196);
DEFLIT(lit_0);
DEFLIT(lit_125);
DEFLIT(lit_92);
DEFLIT(lit_33);
DEFLIT(lit_192);
DEFLIT(lit_147);
DEFLIT(lit_51);
DEFLIT(lit_34);
DEFLIT(lit_106);
DEFLIT(lit_88);
DEFLIT(lit_90);
DEFLIT(lit_44);
DEFLIT(lit_135);
DEFLIT(lit_43);
DEFLIT(lit_21);
DEFLIT(lit_54);
DEFLIT(lit_69);
DEFLIT(lit_12);
DEFLIT(lit_194);
DEFLIT(lit_118);
DEFLIT(lit_85);
DEFLIT(lit_156);
DEFLIT(lit_160);
DEFLIT(lit_168);
DEFLIT(lit_164);
DEFLIT(lit_114);
DEFLIT(lit_183);
DEFLIT(lit_50);
DEFLIT(lit_81);
DEFLIT(lit_119);
DEFLIT(lit_143);
DEFLIT(lit_130);
DEFLIT(lit_77);
DEFLIT(lit_151);
DEFLIT(lit_66);
DEFLIT(lit_1);
DEFLIT(lit_48);
DEFLIT(lit_116);
DEFLIT(lit_6);
DEFLIT(lit_26);
DEFLIT(lit_60);
DEFLIT(lit_107);
DEFLIT(lit_181);
DEFLIT(lit_28);
DEFLIT(lit_198);
DEFLIT(lit_141);
DEFLIT(lit_148);
DEFLIT(lit_145);
DEFLIT(lit_170);
DEFLIT(lit_121);
DEFLIT(lit_40);
DEFLIT(lit_25);
DEFLIT(lit_46);
DEFLIT(lit_176);
DEFLIT(lit_39);
DEFLIT(lit_154);
DEFLIT(lit_96);
DEFLIT(lit_179);
DEFLIT(lit_7);
DEFLIT(lit_38);
DEFLIT(lit_67);
DEFLIT(lit_138);
DEFLIT(lit_71);
DEFLIT(lit_195);
DEFLIT(lit_4);
DEFLIT(lit_20);
DEFLIT(lit_98);
DEFLIT(lit_87);
DEFLIT(lit_36);
DEFLIT(lit_23);
DEFLIT(lit_30);
DEFLIT(lit_169);
DEFLIT(lit_111);
DEFLIT(lit_70);
DEFLIT(lit_65);
DEFLIT(lit_131);
DEFLIT(lit_161);
DEFLIT(lit_14);
DEFLIT(lit_159);
DEFLIT(lit_146);
DEFLIT(lit_59);
DEFLIT(lit_178);
DEFLIT(lit_99);
DEFLIT(lit_188);
DEFLIT(lit_200);
DEFLIT(lit_153);
DEFLIT(lit_45);
DEFLIT(lit_120);
DEFLIT(lit_16);
DEFLIT(lit_84);
DEFLIT(lit_47);
DEFLIT(lit_74);

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
LOCFOR(fun_x_1482_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_x_1486_30);
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
LOCFOR(fun_x_1530_52);
LOCFOR(fun_53);
LOCFOR(fun_x_1527_54);
LOCFOR(fun_55);
LOCFOR(fun_x_1524_56);
LOCFOR(fun_57);
LOCFOR(fun_x_1521_58);
LOCFOR(fun_59);
LOCFOR(fun_x_1518_60);
LOCFOR(fun_61);
LOCFOR(fun_x_1515_62);
LOCFOR(fun_63);
LOCFOR(fun_x_1512_64);
LOCFOR(fun_65);
LOCFOR(fun_x_1509_66);
LOCFOR(fun_67);
LOCFOR(fun_x_1506_68);
LOCFOR(fun_69);
LOCFOR(fun_x_1503_70);
LOCFOR(fun_71);
LOCFOR(fun_x_1500_72);
LOCFOR(fun_73);
LOCFOR(fun_x_1497_74);
LOCFOR(fun_75);
LOCFOR(fun_x_1494_76);
LOCFOR(fun_77);
LOCFOR(fun_x_1491_78);
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
  P astF3054;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(form_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),form_,ct_env_,YPfalse);
  astF3054 = T1;
  T2 = CALL2(1,DYNREF(YevalStopYrun),astF3054,ct_env_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_in_12) {
  P x_,ct_env_;
  P eF3056;
  P oF3055;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),x_,ct_env_,YPfalse);
  oF3055 = T1;
  T3 = CALL1(1,VARREF(YevalSastYast_evaluate),oF3055);
  eF3056 = T3;
  T2 = eF3056;
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
  P xF3057;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(forms_, 0);
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL1(1,VARREF(YgooSconditionsYread),T2);
  xF3057 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),xF3057);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooSmacrosYrevX),forms_);
    T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_sequence_Gbegin),T6);
    T3 = T5;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYpair),xF3057,forms_);
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
  P loopF3058;
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_in_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T2 = FUNSHELL(1,fun_loop_17,2);
  loopF3058 = T2;
  FUNINIT(loopF3058, 2,FREEREF(0),loopF3058);
  T3 = CALL1(0,loopF3058,Ynil);
  T1 = T3;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_19) {
  P tmpF3059;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF3059 = T1;
  if (tmpF3059 != YPfalse) {
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
  P portF3060;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  portF3060 = YPfalse;
  portF3060 = BOXFAB(portF3060);
  T3 = FUNFAB(fun_18,2,portF3060,filename_);
  T4 = FUNFAB(fun_19,1,portF3060);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_in_21) {
  P filename_,ct_env_;
  P oF3062;
  P xF3061;
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
    xF3061 = T4;
    T6 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),xF3061,ct_env_,YPfalse);
    oF3062 = T6;
    T7 = CALL2(1,DYNREF(YevalStopYrun),oF3062,ct_env_);
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
  P realfileF3063;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_in_path),name_,VARREF(YgooSsystemYTmodule_search_pathT));
  realfileF3063 = T1;
  T2 = CALL1(1,VARREF(Ynot),realfileF3063);
  if (T2 != YPfalse) {
    T3 = CALL1(1,VARREF(Yfile_opening_error),name_);
  } else {
  }
  T4 = CALL2(1,VARREF(YevalStopYload_file),realfileF3063,modname_);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_prompt_for_command_expression_24) {
  P env_,level_,prompt_;
  P argsF3067;
  P arg_strF3066;
  P tmpF3065;
  P formF3064;
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
  formF3064 = T3;
  T6 = CALL2(1,VARREF(YisaQ),formF3064,VARREF(YLlstG));
  tmpF3065 = T6;
  if (tmpF3065 != YPfalse) {
    T9 = CALL1(1,VARREF(Yhead),formF3064);
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),T9,LITREF(lit_54));
    T7 = T8;
  } else {
    T7 = YPfalse;
  }
  T5 = T7;
  if (T5 != YPfalse) {
    T11 = CALL1(1,VARREF(YgooSioSportYgets),VARREF(YgooSioSportYin));
    arg_strF3066 = T11;
    T14 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_55),arg_strF3066,LITREF(lit_56));
    T13 = CALL1(1,VARREF(YgooSioSreadYread_from_string),T14);
    argsF3067 = T13;
    T17 = CALL1(1,VARREF(YgooSmacrosY2nd),formF3064);
    T16 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_57),T17);
    T15 = CALL2(1,VARREF(YgooSmacrosYpair),T16,argsF3067);
    T12 = T15;
    T10 = T12;
    T4 = T10;
  } else {
    T4 = formF3064;
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

FUNCODEDEF(fun_x_1482_27) {
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
  P x_1481F3084;
  P x_1481F3083;
  P x_1481F3082;
  P x_1481F3081;
  P x_1481F3080;
  P x_1481F3079;
  P x_1481F3078;
  P x_1481F3077;
  P x_1481F3076;
  P x_1481F3075;
  P x_1481F3074;
  P bodyF3073;
  P argsF3072;
  P fF3071;
  P numF3070;
  P x_1481F3069;
  P x_1482F3068;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1482_27,2);
  x_1482F3068 = T1;
  FUNINIT(x_1482F3068, 2,FREEREF(0),return_);
  x_1481F3069 = FREEREF(0);
  numF3070 = YPfalse;
  numF3070 = BOXFAB(numF3070);
  fF3071 = YPfalse;
  fF3071 = BOXFAB(fF3071);
  argsF3072 = YPfalse;
  argsF3072 = BOXFAB(argsF3072);
  bodyF3073 = YPfalse;
  bodyF3073 = BOXFAB(bodyF3073);
  T11 = CALL2(1,VARREF(YisaQ),x_1481F3069,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1481F3069,LITREF(lit_67),x_1482F3068);
    x_1481F3074 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1481F3074,x_1482F3068);
    x_1481F3075 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1481F3075,x_1482F3068);
    BOXVAL(numF3070) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1481F3075);
    x_1481F3076 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1481F3076,x_1482F3068);
    BOXVAL(fF3071) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1481F3076);
    x_1481F3077 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1481F3077,x_1482F3068);
    BOXVAL(argsF3072) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1481F3077);
    x_1481F3078 = T24;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1481F3078,x_1482F3068);
    x_1481F3079 = T26;
    T27 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1481F3079,x_1482F3068);
    T28 = CALL1(1,VARREF(Ytail),x_1481F3078);
    x_1481F3080 = T28;
    T29 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1481F3080,x_1482F3068);
    T25 = T29;
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T30 = CALL1(1,VARREF(Ytail),x_1481F3074);
    x_1481F3081 = T30;
    BOXVAL(bodyF3073) = x_1481F3081;
    x_1481F3082 = Ynil;
    T33 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1481F3082,x_1482F3068);
    x_1481F3083 = T33;
    T34 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1481F3083,x_1482F3068);
    T35 = CALL1(1,VARREF(Ytail),x_1481F3082);
    x_1481F3084 = T35;
    T36 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1481F3084,x_1482F3068);
    T32 = T36;
    T31 = T32;
    T14 = T31;
    T12 = T14;
  } else {
    T37 = CALL2(1,x_1482F3068,LITREF(lit_68),x_1481F3069);
  }
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_69));
  T45 = BOXVAL(numF3070);
  T44 = CALL1(1,VARREF(Ylst),T45);
  T46 = CALL1(1,VARREF(Ylst),YPint((P)0));
  T43 = CALL3(1,VARREF(YgooSmacrosYcat),T44,T46,LITREF(lit_70));
  T42 = CALL1(1,VARREF(Ylst),T43);
  T41 = CALL2(1,VARREF(YgooSmacrosYcat),T42,LITREF(lit_70));
  T40 = CALL1(1,VARREF(Ylst),T41);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_71));
  T56 = BOXVAL(fF3071);
  T55 = CALL1(1,VARREF(Ylst),T56);
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_72));
  T54 = CALL3(1,VARREF(YgooSmacrosYcat),T55,T57,LITREF(lit_70));
  T53 = CALL1(1,VARREF(Ylst),T54);
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T62 = BOXVAL(argsF3072);
  T61 = CALL1(1,VARREF(Ylst),T62);
  T65 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T66 = CALL1(1,VARREF(Ylst),LITREF(lit_72));
  T64 = CALL3(1,VARREF(YgooSmacrosYcat),T65,T66,LITREF(lit_70));
  T63 = CALL1(1,VARREF(Ylst),T64);
  T59 = CALL4(1,VARREF(YgooSmacrosYcat),T60,T61,T63,LITREF(lit_70));
  T58 = CALL1(1,VARREF(Ylst),T59);
  T67 = BOXVAL(bodyF3073);
  T70 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T72 = BOXVAL(numF3070);
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

FUNCODEDEF(fun_x_1486_30) {
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
  P x_1485F3101;
  P x_1485F3100;
  P x_1485F3099;
  P x_1485F3098;
  P x_1485F3097;
  P x_1485F3096;
  P x_1485F3095;
  P x_1485F3094;
  P x_1485F3093;
  P x_1485F3092;
  P x_1485F3091;
  P bodyF3090;
  P argsF3089;
  P fF3088;
  P numF3087;
  P x_1485F3086;
  P x_1486F3085;
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
  T1 = FUNSHELL(0,fun_x_1486_30,2);
  x_1486F3085 = T1;
  FUNINIT(x_1486F3085, 2,FREEREF(0),return_);
  x_1485F3086 = FREEREF(0);
  numF3087 = YPfalse;
  numF3087 = BOXFAB(numF3087);
  fF3088 = YPfalse;
  fF3088 = BOXFAB(fF3088);
  argsF3089 = YPfalse;
  argsF3089 = BOXFAB(argsF3089);
  bodyF3090 = YPfalse;
  bodyF3090 = BOXFAB(bodyF3090);
  T11 = CALL2(1,VARREF(YisaQ),x_1485F3086,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1485F3086,LITREF(lit_80),x_1486F3085);
    x_1485F3091 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1485F3091,x_1486F3085);
    x_1485F3092 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1485F3092,x_1486F3085);
    BOXVAL(numF3087) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1485F3092);
    x_1485F3093 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1485F3093,x_1486F3085);
    BOXVAL(fF3088) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1485F3093);
    x_1485F3094 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1485F3094,x_1486F3085);
    BOXVAL(argsF3089) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1485F3094);
    x_1485F3095 = T24;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1485F3095,x_1486F3085);
    x_1485F3096 = T26;
    T27 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1485F3096,x_1486F3085);
    T28 = CALL1(1,VARREF(Ytail),x_1485F3095);
    x_1485F3097 = T28;
    T29 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1485F3097,x_1486F3085);
    T25 = T29;
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T30 = CALL1(1,VARREF(Ytail),x_1485F3091);
    x_1485F3098 = T30;
    BOXVAL(bodyF3090) = x_1485F3098;
    x_1485F3099 = Ynil;
    T33 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1485F3099,x_1486F3085);
    x_1485F3100 = T33;
    T34 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1485F3100,x_1486F3085);
    T35 = CALL1(1,VARREF(Ytail),x_1485F3099);
    x_1485F3101 = T35;
    T36 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1485F3101,x_1486F3085);
    T32 = T36;
    T31 = T32;
    T14 = T31;
    T12 = T14;
  } else {
    T37 = CALL2(1,x_1486F3085,LITREF(lit_68),x_1485F3086);
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
  T58 = BOXVAL(fF3088);
  T57 = CALL1(1,VARREF(Ylst),T58);
  T60 = BOXVAL(argsF3089);
  T59 = CALL1(1,VARREF(Ylst),T60);
  T55 = CALL4(1,VARREF(YgooSmacrosYcat),T56,T57,T59,LITREF(lit_70));
  T54 = CALL1(1,VARREF(Ylst),T55);
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T64 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T67 = CALL1(1,VARREF(Ylst),LITREF(lit_87));
  T70 = CALL1(1,VARREF(Ylst),LITREF(lit_88));
  T72 = BOXVAL(fF3088);
  T71 = CALL1(1,VARREF(Ylst),T72);
  T69 = CALL3(1,VARREF(YgooSmacrosYcat),T70,T71,LITREF(lit_70));
  T68 = CALL1(1,VARREF(Ylst),T69);
  T75 = CALL1(1,VARREF(Ylst),LITREF(lit_89));
  T76 = CALL1(1,VARREF(Ylst),LITREF(lit_90));
  T79 = CALL1(1,VARREF(Ylst),LITREF(lit_88));
  T81 = BOXVAL(fF3088);
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
  T87 = BOXVAL(numF3087);
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
  T109 = BOXVAL(bodyF3090);
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
  P slF3102;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(f_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),f_,VARREF(YLmetG));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Yfun_src),f_);
    slF3102 = T3;
    T5 = CALL2(1,VARREF(YisaQ),slF3102,VARREF(YLsrc_locG));
    if (T5 != YPfalse) {
      T7 = CALL1(1,VARREF(Ysrc_loc_file),slF3102);
      T8 = CALL1(1,VARREF(Ysrc_loc_line),slF3102);
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
  P numF3105;
  P UnameF3104;
  P argsF3103;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF3103 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_91);
  }
  UnameF3104 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF3105 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF3104,LITREF(lit_95));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_105),numF3105,f_,argsF3103);
    CALL1(1,VARREF(YevalStopYmsg_src_loc),f_);
    T14 = CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
  } else {
  }
  T15 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF3104,LITREF(lit_96));
  if (T15 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF3105;
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
  P UnumF3108;
  P Utop_numF3107;
  P Useen_topF3106;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF3106 = YPfalse;
  Useen_topF3106 = BOXFAB(Useen_topF3106);
  Utop_numF3107 = YPint((P)0);
  Utop_numF3107 = BOXFAB(Utop_numF3107);
  UnumF3108 = YPint((P)0);
  UnumF3108 = BOXFAB(UnumF3108);
  T7 = FUNFAB(fun_34,4,UnumF3108,Utop_numF3107,Useen_topF3106,break_);
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
  P numF3111;
  P UnameF3110;
  P argsF3109;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF3109 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_91);
  }
  UnameF3110 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF3111 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF3110,LITREF(lit_95));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T15 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(4),numF3111);
    if (T15 != YPfalse) {
      CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_110),numF3111,f_,argsF3109);
      CALL1(1,VARREF(YevalStopYmsg_src_loc),f_);
      T16 = CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
      T14 = T16;
    } else {
      T14 = YPfalse;
    }
  } else {
  }
  T17 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF3110,LITREF(lit_96));
  if (T17 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF3111;
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
  P UnumF3114;
  P Utop_numF3113;
  P Useen_topF3112;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF3112 = YPfalse;
  Useen_topF3112 = BOXFAB(Useen_topF3112);
  Utop_numF3113 = YPint((P)0);
  Utop_numF3113 = BOXFAB(Utop_numF3113);
  UnumF3114 = YPint((P)0);
  UnumF3114 = BOXFAB(UnumF3114);
  T7 = FUNFAB(fun_37,5,UnumF3114,Utop_numF3113,Useen_topF3112,break_,FREEREF(0));
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
  P numF3117;
  P UnameF3116;
  P argsF3115;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF3115 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_91);
  }
  UnameF3116 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF3117 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF3116,LITREF(lit_95));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T15 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(4),numF3117);
    if (T15 != YPfalse) {
      T19 = CALL1(1,VARREF(Yfun_names),f_);
      T18 = CALL2(1,VARREF(YgooScolsSseqYpos),T19,FREEREF(5));
      T17 = CALL2(1,VARREF(YgooSmacrosYelt),argsF3115,T18);
      T16 = CALL1(1,FREEREF(6),T17);
      T14 = T16;
    } else {
      T14 = YPfalse;
    }
  } else {
  }
  T20 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF3116,LITREF(lit_96));
  if (T20 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF3117;
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
  P UnumF3120;
  P Utop_numF3119;
  P Useen_topF3118;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF3118 = YPfalse;
  Useen_topF3118 = BOXFAB(Useen_topF3118);
  Utop_numF3119 = YPint((P)0);
  Utop_numF3119 = BOXFAB(Utop_numF3119);
  UnumF3120 = YPint((P)0);
  UnumF3120 = BOXFAB(UnumF3120);
  T7 = FUNFAB(fun_40,7,UnumF3120,Utop_numF3119,Useen_topF3118,break_,FREEREF(0),FREEREF(1),FREEREF(2));
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
  P numF3123;
  P UnameF3122;
  P argsF3121;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF3121 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_91);
  }
  UnameF3122 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF3123 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF3122,LITREF(lit_95));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_119),numF3123,f_);
    CALL1(1,VARREF(YevalStopYmsg_src_loc),f_);
    T14 = CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
  } else {
  }
  T15 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF3122,LITREF(lit_96));
  if (T15 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF3123;
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
  P UnumF3126;
  P Utop_numF3125;
  P Useen_topF3124;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF3124 = YPfalse;
  Useen_topF3124 = BOXFAB(Useen_topF3124);
  Utop_numF3125 = YPint((P)0);
  Utop_numF3125 = BOXFAB(Utop_numF3125);
  UnumF3126 = YPint((P)0);
  UnumF3126 = BOXFAB(UnumF3126);
  T7 = FUNFAB(fun_44,4,UnumF3126,Utop_numF3125,Useen_topF3124,break_);
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
  P tmpF3127;
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
  tmpF3127 = T4;
  if (tmpF3127 != YPfalse) {
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
  P x_1488F3129;
  P x_1487F3128;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
loop:
  x_1487F3128 = c_;
  x_1488F3129 = VARREF(YisaQ);
  T2 = CALL2(1,x_1488F3129,x_1487F3128,VARREF(YgooSconditionsYLkeyboard_interruptG));
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

FUNCODEDEF(fun_x_1530_52) {
  P msg_,args_;
  P x_1534F3134;
  P x_1533F3133;
  P x_1532F3132;
  P x_1531F3131;
  P resF3130;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL2(1,VARREF(YevalStopYauto_eval),FREEREF(0),T3);
  resF3130 = T2;
  resF3130 = BOXFAB(resF3130);
  T5 = BOXVAL(FREEREF(1));
  T6 = BOXVAL(resF3130);
  CALL4(1,VARREF(YevalStopYprint_result_expression),T5,FREEREF(2),LITREF(lit_177),T6);
  x_1531F3131 = VARREF(YevalStopYDDD);
  x_1532F3132 = VARREF(YevalStopYDD);
  x_1533F3133 = VARREF(YevalStopYD);
  T11 = BOXVAL(resF3130);
  x_1534F3134 = T11;
  VARSET(YevalStopYDDD,x_1532F3132);
  VARSET(YevalStopYDD,x_1533F3133);
  VARSET(YevalStopYD,x_1534F3134);
  T12 = BOXVAL(resF3130) = x_1531F3131;
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
  P x_1529F3143;
  P x_1529F3142;
  P x_1529F3141;
  P x_1529F3140;
  P x_1529F3139;
  P nameF3138;
  P nF3137;
  P x_1529F3136;
  P x_1530F3135;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1530_52,4);
  x_1530F3135 = T1;
  FUNINIT(x_1530F3135, 4,FREEREF(0),FREEREF(1),FREEREF(2),return_);
  x_1529F3136 = FREEREF(3);
  nF3137 = YPfalse;
  nF3137 = BOXFAB(nF3137);
  nameF3138 = YPfalse;
  nameF3138 = BOXFAB(nameF3138);
  T7 = CALL2(1,VARREF(YisaQ),x_1529F3136,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1529F3136,LITREF(lit_178),x_1530F3135);
    x_1529F3139 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1529F3139,x_1530F3135);
    BOXVAL(nF3137) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1529F3139);
    x_1529F3140 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1529F3140,x_1530F3135);
    BOXVAL(nameF3138) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1529F3140);
    x_1529F3141 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1529F3141,x_1530F3135);
    x_1529F3142 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1529F3142,x_1530F3135);
    T19 = CALL1(1,VARREF(Ytail),x_1529F3141);
    x_1529F3143 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1529F3143,x_1530F3135);
    T16 = T20;
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T21 = CALL2(1,x_1530F3135,LITREF(lit_68),x_1529F3136);
  }
  T23 = BOXVAL(FREEREF(1));
  T25 = BOXVAL(nF3137);
  T26 = BOXVAL(nameF3138);
  T24 = CALL2(1,VARREF(YevalStopYframe_var),T25,T26);
  T22 = CALL4(1,VARREF(YevalStopYprint_result_expression),T23,FREEREF(2),LITREF(lit_179),T24);
  T5 = T22;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1527_54) {
  P msg_,args_;
  P x_1528F3144;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1528F3144 = FREEREF(0);
  T3 = FUNFAB(fun_53,4,FREEREF(1),FREEREF(2),FREEREF(3),x_1528F3144);
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  P return_;
  P x_1526F3151;
  P x_1526F3150;
  P x_1526F3149;
  P x_1526F3148;
  P nF3147;
  P x_1526F3146;
  P x_1527F3145;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1527_54,5);
  x_1527F3145 = T1;
  FUNINIT(x_1527F3145, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1526F3146 = FREEREF(0);
  nF3147 = YPfalse;
  nF3147 = BOXFAB(nF3147);
  T5 = CALL2(1,VARREF(YisaQ),x_1526F3146,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1526F3146,LITREF(lit_180),x_1527F3145);
    x_1526F3148 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1526F3148,x_1527F3145);
    BOXVAL(nF3147) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1526F3148);
    x_1526F3149 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1526F3149,x_1527F3145);
    x_1526F3150 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1526F3150,x_1527F3145);
    T14 = CALL1(1,VARREF(Ytail),x_1526F3149);
    x_1526F3151 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1526F3151,x_1527F3145);
    T11 = T15;
    T8 = T11;
    T6 = T8;
  } else {
    T16 = CALL2(1,x_1527F3145,LITREF(lit_68),x_1526F3146);
  }
  T18 = BOXVAL(nF3147);
  T17 = CALL1(1,VARREF(YevalStopYframe),T18);
  T3 = T17;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1524_56) {
  P msg_,args_;
  P x_1525F3152;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1525F3152 = FREEREF(0);
  T3 = FUNFAB(fun_55,4,x_1525F3152,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_57) {
  P return_;
  P x_1523F3157;
  P x_1523F3156;
  P x_1523F3155;
  P x_1523F3154;
  P x_1524F3153;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1524_56,5);
  x_1524F3153 = T1;
  FUNINIT(x_1524F3153, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1523F3154 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1523F3154,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1523F3154,LITREF(lit_181),x_1524F3153);
    x_1523F3155 = T5;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1523F3155,x_1524F3153);
    x_1523F3156 = T7;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1523F3156,x_1524F3153);
    T9 = CALL1(1,VARREF(Ytail),x_1523F3155);
    x_1523F3157 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1523F3157,x_1524F3153);
    T6 = T10;
    T4 = T6;
  } else {
    T11 = CALL2(1,x_1524F3153,LITREF(lit_68),x_1523F3154);
  }
  T12 = CALL0(1,VARREF(YevalStopYbacktrace));
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1521_58) {
  P msg_,args_;
  P x_1522F3158;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1522F3158 = FREEREF(0);
  T3 = FUNFAB(fun_57,4,x_1522F3158,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_59) {
  P return_;
  P x_1520F3163;
  P x_1520F3162;
  P x_1520F3161;
  P x_1520F3160;
  P x_1521F3159;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1521_58,5);
  x_1521F3159 = T1;
  FUNINIT(x_1521F3159, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1520F3160 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1520F3160,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1520F3160,LITREF(lit_182),x_1521F3159);
    x_1520F3161 = T5;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1520F3161,x_1521F3159);
    x_1520F3162 = T7;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1520F3162,x_1521F3159);
    T9 = CALL1(1,VARREF(Ytail),x_1520F3161);
    x_1520F3163 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1520F3163,x_1521F3159);
    T6 = T10;
    T4 = T6;
  } else {
    T11 = CALL2(1,x_1521F3159,LITREF(lit_68),x_1520F3160);
  }
  T12 = CALL0(1,VARREF(YevalStopYbt));
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1518_60) {
  P msg_,args_;
  P x_1519F3164;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1519F3164 = FREEREF(0);
  T3 = FUNFAB(fun_59,4,x_1519F3164,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_61) {
  P return_;
  P x_1517F3169;
  P x_1517F3168;
  P x_1517F3167;
  P x_1517F3166;
  P x_1518F3165;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1518_60,5);
  x_1518F3165 = T1;
  FUNINIT(x_1518F3165, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1517F3166 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1517F3166,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1517F3166,LITREF(lit_183),x_1518F3165);
    x_1517F3167 = T5;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1517F3167,x_1518F3165);
    x_1517F3168 = T7;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1517F3168,x_1518F3165);
    T9 = CALL1(1,VARREF(Ytail),x_1517F3167);
    x_1517F3169 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1517F3169,x_1518F3165);
    T6 = T10;
    T4 = T6;
  } else {
    T11 = CALL2(1,x_1518F3165,LITREF(lit_68),x_1517F3166);
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

FUNCODEDEF(fun_x_1515_62) {
  P msg_,args_;
  P x_1516F3170;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1516F3170 = FREEREF(0);
  T3 = FUNFAB(fun_61,4,x_1516F3170,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_63) {
  P return_;
  P x_1514F3175;
  P x_1514F3174;
  P x_1514F3173;
  P x_1514F3172;
  P x_1515F3171;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1515_62,5);
  x_1515F3171 = T1;
  FUNINIT(x_1515F3171, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1514F3172 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1514F3172,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1514F3172,LITREF(lit_184),x_1515F3171);
    x_1514F3173 = T5;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1514F3173,x_1515F3171);
    x_1514F3174 = T7;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1514F3174,x_1515F3171);
    T9 = CALL1(1,VARREF(Ytail),x_1514F3173);
    x_1514F3175 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1514F3175,x_1515F3171);
    T6 = T10;
    T4 = T6;
  } else {
    T11 = CALL2(1,x_1515F3171,LITREF(lit_68),x_1514F3172);
  }
  T12 = DYNSET(YevalStopYrun,VARREF(YevalStopYPPbottomPPast_run));
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1512_64) {
  P msg_,args_;
  P x_1513F3176;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1513F3176 = FREEREF(0);
  T3 = FUNFAB(fun_63,4,x_1513F3176,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_65) {
  P return_;
  P x_1511F3181;
  P x_1511F3180;
  P x_1511F3179;
  P x_1511F3178;
  P x_1512F3177;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1512_64,5);
  x_1512F3177 = T1;
  FUNINIT(x_1512F3177, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1511F3178 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1511F3178,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1511F3178,LITREF(lit_185),x_1512F3177);
    x_1511F3179 = T5;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1511F3179,x_1512F3177);
    x_1511F3180 = T7;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1511F3180,x_1512F3177);
    T9 = CALL1(1,VARREF(Ytail),x_1511F3179);
    x_1511F3181 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1511F3181,x_1512F3177);
    T6 = T10;
    T4 = T6;
  } else {
    T11 = CALL2(1,x_1512F3177,LITREF(lit_68),x_1511F3178);
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

FUNCODEDEF(fun_x_1509_66) {
  P msg_,args_;
  P x_1510F3182;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1510F3182 = FREEREF(0);
  T3 = FUNFAB(fun_65,4,x_1510F3182,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_67) {
  P return_;
  P new_envF3190;
  P x_1508F3189;
  P x_1508F3188;
  P x_1508F3187;
  P x_1508F3186;
  P mF3185;
  P x_1508F3184;
  P x_1509F3183;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1509_66,5);
  x_1509F3183 = T1;
  FUNINIT(x_1509F3183, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1508F3184 = FREEREF(0);
  mF3185 = YPfalse;
  mF3185 = BOXFAB(mF3185);
  T5 = CALL2(1,VARREF(YisaQ),x_1508F3184,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1508F3184,LITREF(lit_186),x_1509F3183);
    x_1508F3186 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1508F3186,x_1509F3183);
    BOXVAL(mF3185) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1508F3186);
    x_1508F3187 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1508F3187,x_1509F3183);
    x_1508F3188 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1508F3188,x_1509F3183);
    T14 = CALL1(1,VARREF(Ytail),x_1508F3187);
    x_1508F3189 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1508F3189,x_1509F3183);
    T11 = T15;
    T8 = T11;
    T6 = T8;
  } else {
    T16 = CALL2(1,x_1509F3183,LITREF(lit_68),x_1508F3184);
  }
  T19 = BOXVAL(mF3185);
  T18 = CALL1(1,VARREF(YevalSastYruntime_environment),T19);
  new_envF3190 = T18;
  T20 = BOXVAL(FREEREF(2)) = new_envF3190;
  T17 = T20;
  T3 = T17;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1506_68) {
  P msg_,args_;
  P x_1507F3191;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1507F3191 = FREEREF(0);
  T3 = FUNFAB(fun_67,4,x_1507F3191,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  P return_;
  P x_1505F3198;
  P x_1505F3197;
  P x_1505F3196;
  P x_1505F3195;
  P nF3194;
  P x_1505F3193;
  P x_1506F3192;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1506_68,5);
  x_1506F3192 = T1;
  FUNINIT(x_1506F3192, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1505F3193 = FREEREF(0);
  nF3194 = YPfalse;
  nF3194 = BOXFAB(nF3194);
  T5 = CALL2(1,VARREF(YisaQ),x_1505F3193,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1505F3193,LITREF(lit_187),x_1506F3192);
    x_1505F3195 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1505F3195,x_1506F3192);
    BOXVAL(nF3194) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1505F3195);
    x_1505F3196 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1505F3196,x_1506F3192);
    x_1505F3197 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1505F3197,x_1506F3192);
    T14 = CALL1(1,VARREF(Ytail),x_1505F3196);
    x_1505F3198 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1505F3198,x_1506F3192);
    T11 = T15;
    T8 = T11;
    T6 = T8;
  } else {
    T16 = CALL2(1,x_1506F3192,LITREF(lit_68),x_1505F3193);
  }
  T18 = BOXVAL(FREEREF(4));
  T19 = BOXVAL(nF3194);
  T17 = CALL2(1,VARREF(YevalStopYdo_restart),T18,T19);
  T3 = T17;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1503_70) {
  P msg_,args_;
  P x_1504F3199;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1504F3199 = FREEREF(0);
  T3 = FUNFAB(fun_69,5,x_1504F3199,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_71) {
  P return_;
  P x_1502F3204;
  P x_1502F3203;
  P x_1502F3202;
  P x_1502F3201;
  P x_1503F3200;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1503_70,6);
  x_1503F3200 = T1;
  FUNINIT(x_1503F3200, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1502F3201 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1502F3201,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1502F3201,LITREF(lit_188),x_1503F3200);
    x_1502F3202 = T5;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1502F3202,x_1503F3200);
    x_1502F3203 = T7;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1502F3203,x_1503F3200);
    T9 = CALL1(1,VARREF(Ytail),x_1502F3202);
    x_1502F3204 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1502F3204,x_1503F3200);
    T6 = T10;
    T4 = T6;
  } else {
    T11 = CALL2(1,x_1503F3200,LITREF(lit_68),x_1502F3201);
  }
  T12 = CALL2(1,VARREF(YgooSconditionsYlist_handlers),VARREF(YgooSconditionsYLrestartG),VARREF(YgooSioSportYout));
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1500_72) {
  P msg_,args_;
  P x_1501F3205;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1501F3205 = FREEREF(0);
  T3 = FUNFAB(fun_71,5,x_1501F3205,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_73) {
  P return_;
  P x_1499F3210;
  P x_1499F3209;
  P x_1499F3208;
  P x_1499F3207;
  P x_1500F3206;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1500_72,6);
  x_1500F3206 = T1;
  FUNINIT(x_1500F3206, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1499F3207 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1499F3207,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1499F3207,LITREF(lit_189),x_1500F3206);
    x_1499F3208 = T5;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1499F3208,x_1500F3206);
    x_1499F3209 = T7;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1499F3209,x_1500F3206);
    T9 = CALL1(1,VARREF(Ytail),x_1499F3208);
    x_1499F3210 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1499F3210,x_1500F3206);
    T6 = T10;
    T4 = T6;
  } else {
    T11 = CALL2(1,x_1500F3206,LITREF(lit_68),x_1499F3207);
  }
  T12 = CALL2(1,VARREF(YgooSconditionsYlist_handlers),VARREF(YgooSconditionsYLconditionG),VARREF(YgooSioSportYout));
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1497_74) {
  P msg_,args_;
  P x_1498F3211;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1498F3211 = FREEREF(0);
  T3 = FUNFAB(fun_73,5,x_1498F3211,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_75) {
  P return_;
  P x_1496F3216;
  P x_1496F3215;
  P x_1496F3214;
  P x_1496F3213;
  P x_1497F3212;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1497_74,6);
  x_1497F3212 = T1;
  FUNINIT(x_1497F3212, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1496F3213 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1496F3213,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1496F3213,LITREF(lit_190),x_1497F3212);
    x_1496F3214 = T5;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1496F3214,x_1497F3212);
    x_1496F3215 = T7;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1496F3215,x_1497F3212);
    T9 = CALL1(1,VARREF(Ytail),x_1496F3214);
    x_1496F3216 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1496F3216,x_1497F3212);
    T6 = T10;
    T4 = T6;
  } else {
    T11 = CALL2(1,x_1497F3212,LITREF(lit_68),x_1496F3213);
  }
  T12 = CALL1(1,FREEREF(5),YPfalse);
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1494_76) {
  P msg_,args_;
  P x_1495F3217;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1495F3217 = FREEREF(0);
  T3 = FUNFAB(fun_75,6,x_1495F3217,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(6),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_77) {
  P return_;
  P x_1493F3222;
  P x_1493F3221;
  P x_1493F3220;
  P x_1493F3219;
  P x_1494F3218;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1494_76,7);
  x_1494F3218 = T1;
  FUNINIT(x_1494F3218, 7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),return_);
  x_1493F3219 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1493F3219,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1493F3219,LITREF(lit_191),x_1494F3218);
    x_1493F3220 = T5;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1493F3220,x_1494F3218);
    x_1493F3221 = T7;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1493F3221,x_1494F3218);
    T9 = CALL1(1,VARREF(Ytail),x_1493F3220);
    x_1493F3222 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1493F3222,x_1494F3218);
    T6 = T10;
    T4 = T6;
  } else {
    T11 = CALL2(1,x_1494F3218,LITREF(lit_68),x_1493F3219);
  }
  T12 = CALL1(1,FREEREF(6),YPfalse);
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1491_78) {
  P msg_,args_;
  P x_1492F3223;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1492F3223 = FREEREF(0);
  T3 = FUNFAB(fun_77,7,x_1492F3223,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(7),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_79) {
  P return_;
  P x_1490F3228;
  P x_1490F3227;
  P x_1490F3226;
  P x_1490F3225;
  P x_1491F3224;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1491_78,8);
  x_1491F3224 = T1;
  FUNINIT(x_1491F3224, 8,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6),return_);
  x_1490F3225 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1490F3225,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1490F3225,LITREF(lit_192),x_1491F3224);
    x_1490F3226 = T5;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1490F3226,x_1491F3224);
    x_1490F3227 = T7;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1490F3227,x_1491F3224);
    T9 = CALL1(1,VARREF(Ytail),x_1490F3226);
    x_1490F3228 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1490F3228,x_1491F3224);
    T6 = T10;
    T4 = T6;
  } else {
    T11 = CALL2(1,x_1491F3224,LITREF(lit_68),x_1490F3225);
  }
  T12 = CALL1(1,FREEREF(7),YPfalse);
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_80) {
  P x_1489F3230;
  P formF3229;
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
  formF3229 = T4;
  T7 = CALL1(1,VARREF(YgooSmathYeof_objectQ),formF3229);
  if (T7 != YPfalse) {
    T8 = CALL1(1,FREEREF(4),YPfalse);
    T6 = T8;
  } else {
    x_1489F3230 = formF3229;
    T11 = FUNFAB(fun_79,8,x_1489F3230,formF3229,FREEREF(2),FREEREF(3),FREEREF(1),FREEREF(5),FREEREF(6),FREEREF(4));
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
  P loopF3231;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_83,8);
  loopF3231 = T1;
  FUNINIT(loopF3231, 8,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),blow_,loopF3231);
  T2 = CALL0(0,loopF3231);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_PPtopPPtop_in_85) {
  P level_,top_,quit_,show_restartsQ_,ct_env_;
  P restartsF3232;
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
  restartsF3232 = YPfalse;
  restartsF3232 = BOXFAB(restartsF3232);
  T5 = FUNFAB(fun_84,6,level_,top_,quit_,ct_env_,show_restartsQ_,restartsF3232);
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
  P loopF3233;
  P T0,T1,T2;
LINK_STACK();
loop:
  T1 = FUNSHELL(1,fun_loop_89,3);
  loopF3233 = T1;
  FUNINIT(loopF3233, 3,FREEREF(0),FREEREF(1),loopF3233);
  T2 = CALL0(0,loopF3233);
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
  P tmpF3236;
  P tmpF3235;
  P modeF3234;
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
  P T176,T177,T178,T179,T180,T181,T182,T183;
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
  T32 = XCALL1(1,VARREF(YgooSsystemYos_val),LITREF(lit_27));
  modeF3234 = T32;
  T35 = XCALL2(1,VARREF(YgooScolsStabYcase_insensitive_string_equal),modeF3234,LITREF(lit_28));
  T34 = XCALL1(1,VARREF(Ynot),T35);
  tmpF3235 = T34;
  if (tmpF3235 != YPfalse) {
    T38 = XCALL2(1,VARREF(YgooScolsStabYcase_insensitive_string_equal),modeF3234,LITREF(lit_29));
    tmpF3236 = T38;
    if (tmpF3236 != YPfalse) {
      T39 = tmpF3236;
    } else {
      T39 = YPtrue;
    }
    T37 = T39;
    T36 = T37;
  } else {
    T36 = YPfalse;
  }
  T33 = T36;
  T31 = T33;
  VARSET(YevalStopYDg2c_evalQ,T31);
  if (VARREF(YevalStopYDg2c_evalQ) != YPfalse) {
    T40 = VARREF(YevalStopYauto_run);
  } else {
    T40 = VARREF(YevalStopYPPbottomPPast_run);
  }
  DYNDEFSET(YevalStopYrun,T40);
  lit_30 = YPPsym((P)"eval-in");
  lit_31 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"ct-env"));
  T41 = YPsig(LITREF(lit_31),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_in_12 = YPmet(FUNCODEREF(fun_eval_in_12),LITREF(lit_30),T41,ENVNUL,PNUL,sloc(57));
  T43 = VARREF_OR(YevalStopYeval_in,YPfalse);
  T44 = fun_eval_in_12;
  T42 = XCALL2(1,VARREF(YPdefine_method),T43,T44);
  VARSET(YevalStopYeval_in,T42);
  lit_32 = YPPsym((P)"eval");
  lit_33 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"modname"));
  T45 = YPsig(LITREF(lit_33),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_13 = YPmet(FUNCODEREF(fun_eval_13),LITREF(lit_32),T45,ENVNUL,PNUL,sloc(62));
  T47 = VARREF_OR(YevalSsyntaxYeval,YPfalse);
  T48 = fun_eval_13;
  T46 = XCALL2(1,VARREF(YPdefine_method),T47,T48);
  VARSET(YevalSsyntaxYeval,T46);
  lit_34 = YPPsym((P)"str-eval-in");
  lit_35 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"ct-env"));
  T49 = YPsig(LITREF(lit_35),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_in_14 = YPmet(FUNCODEREF(fun_str_eval_in_14),LITREF(lit_34),T49,ENVNUL,PNUL,sloc(65));
  T51 = VARREF_OR(YevalStopYstr_eval_in,YPfalse);
  T52 = fun_str_eval_in_14;
  T50 = XCALL2(1,VARREF(YPdefine_method),T51,T52);
  VARSET(YevalStopYstr_eval_in,T50);
  lit_36 = YPPsym((P)"str-eval");
  lit_37 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"modname"));
  T53 = YPsig(LITREF(lit_37),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_15 = YPmet(FUNCODEREF(fun_str_eval_15),LITREF(lit_36),T53,ENVNUL,PNUL,sloc(68));
  T55 = VARREF_OR(YevalStopYstr_eval,YPfalse);
  T56 = fun_str_eval_15;
  T54 = XCALL2(1,VARREF(YPdefine_method),T55,T56);
  VARSET(YevalStopYstr_eval,T54);
  lit_38 = YPPsym((P)"compiled-file?");
  lit_39 = YPPlist(1,YPPsym((P)"name"));
  lit_40 = YPsb((P)".gooc");
  T57 = YPsig(LITREF(lit_39),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalStopYcompiled_fileQ = YPmet(FUNCODEREF(YevalStopYcompiled_fileQ),LITREF(lit_38),T57,ENVNUL,PNUL,sloc(71));
  T58 = YevalStopYcompiled_fileQ;
  VARSET(YevalStopYcompiled_fileQ,T58);
  lit_41 = YPPsym((P)"read-file");
  lit_42 = YPPlist(1,YPPsym((P)"filename"));
  lit_43 = YPPsym((P)"loop");
  lit_44 = YPPlist(1,YPPsym((P)"forms"));
  T62 = YPsig(LITREF(lit_44),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_17 = YPmet(FUNCODEREF(fun_loop_17),LITREF(lit_43),T62,ENVNUL,PNUL,sloc(76));
  T61 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T61,ENVNUL,PNUL,sloc(75));
  T60 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T60,ENVNUL,PNUL,sloc(75));
  T59 = YPsig(LITREF(lit_42),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_file_20 = YPmet(FUNCODEREF(fun_read_file_20),LITREF(lit_41),T59,ENVNUL,PNUL,sloc(74));
  T64 = VARREF_OR(YevalStopYread_file,YPfalse);
  T65 = fun_read_file_20;
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T65);
  VARSET(YevalStopYread_file,T63);
  lit_45 = YPPsym((P)"load-in");
  lit_46 = YPPlist(2,YPPsym((P)"filename"),YPPsym((P)"ct-env"));
  T66 = YPsig(LITREF(lit_46),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_in_21 = YPmet(FUNCODEREF(fun_load_in_21),LITREF(lit_45),T66,ENVNUL,PNUL,sloc(82));
  T68 = VARREF_OR(YevalSastYload_in,YPfalse);
  T69 = fun_load_in_21;
  T67 = XCALL2(1,VARREF(YPdefine_method),T68,T69);
  VARSET(YevalSastYload_in,T67);
  lit_47 = YPPsym((P)"load-file");
  lit_48 = YPPlist(2,YPPsym((P)"filename"),YPPsym((P)"modname"));
  T70 = YPsig(LITREF(lit_48),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_file_22 = YPmet(FUNCODEREF(fun_load_file_22),LITREF(lit_47),T70,ENVNUL,PNUL,sloc(92));
  T72 = VARREF_OR(YevalStopYload_file,YPfalse);
  T73 = fun_load_file_22;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T73);
  VARSET(YevalStopYload_file,T71);
  lit_49 = YPPsym((P)"load");
  lit_50 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"modname"));
  T74 = YPsig(LITREF(lit_50),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_23 = YPmet(FUNCODEREF(fun_load_23),LITREF(lit_49),T74,ENVNUL,PNUL,sloc(95));
  T76 = VARREF_OR(YevalStopYload,YPfalse);
  T77 = fun_load_23;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T77);
  VARSET(YevalStopYload,T75);
  lit_51 = YPPsym((P)"prompt-for-command-expression");
  lit_52 = YPPlist(3,YPPsym((P)"env"),YPPsym((P)"level"),YPPsym((P)"prompt"));
  lit_53 = YPsb((P)"%s %=%s");
  lit_54 = YPPsym((P)"unquote");
  lit_55 = YPsb((P)"(");
  lit_56 = YPsb((P)")");
  lit_57 = YPsb((P)"cmd_");
  T78 = YPsig(LITREF(lit_52),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_prompt_for_command_expression_24 = YPmet(FUNCODEREF(fun_prompt_for_command_expression_24),LITREF(lit_51),T78,ENVNUL,PNUL,sloc(102));
  T80 = VARREF_OR(YevalStopYprompt_for_command_expression,YPfalse);
  T81 = fun_prompt_for_command_expression_24;
  T79 = XCALL2(1,VARREF(YPdefine_method),T80,T81);
  VARSET(YevalStopYprompt_for_command_expression,T79);
  lit_58 = YPPsym((P)"print-result-expression");
  lit_59 = YPPlist(4,YPPsym((P)"env"),YPPsym((P)"level"),YPPsym((P)"label"),YPPsym((P)"result"));
  lit_60 = YPsb((P)"%s %=%s");
  T82 = YPsig(LITREF(lit_59),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_print_result_expression_25 = YPmet(FUNCODEREF(fun_print_result_expression_25),LITREF(lit_58),T82,ENVNUL,PNUL,sloc(112));
  T84 = VARREF_OR(YevalStopYprint_result_expression,YPfalse);
  T85 = fun_print_result_expression_25;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T85);
  VARSET(YevalStopYprint_result_expression,T83);
  lit_61 = YPPsym((P)"do-stack-frames");
  lit_62 = YPPlist(1,YPPsym((P)"fun"));
  T86 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_stack_frames_26 = YPmet(FUNCODEREF(fun_do_stack_frames_26),LITREF(lit_61),T86,ENVNUL,PNUL,sloc(116));
  T88 = VARREF_OR(YevalStopYdo_stack_frames,YPfalse);
  T89 = fun_do_stack_frames_26;
  T87 = XCALL2(1,VARREF(YPdefine_method),T88,T89);
  VARSET(YevalStopYdo_stack_frames,T87);
  lit_63 = YPPlist(1,YPPsym((P)"exp"));
  lit_64 = YPPlist(1,YPPsym((P)"return"));
  lit_65 = YPPsym((P)"x-1482");
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
  T92 = YPsig(LITREF(lit_66),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1482_27 = YPmet(FUNCODEREF(fun_x_1482_27),LITREF(lit_65),T92,ENVNUL,PNUL,YPfalse);
  T91 = YPsig(LITREF(lit_64),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(LITREF(lit_63),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T90,ENVNUL,PNUL,YPfalse);
  T93 = fun_29;
  YPmacro(YPPsym((P)"eval/top"),YPPsym((P)"for-frames"),T93);
  lit_76 = YPPlist(1,YPPsym((P)"exp"));
  lit_77 = YPPlist(1,YPPsym((P)"return"));
  lit_78 = YPPsym((P)"x-1486");
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
  T96 = YPsig(LITREF(lit_79),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1486_30 = YPmet(FUNCODEREF(fun_x_1486_30),LITREF(lit_78),T96,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(LITREF(lit_77),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T95,ENVNUL,PNUL,YPfalse);
  T94 = YPsig(LITREF(lit_76),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T94,ENVNUL,PNUL,YPfalse);
  T97 = fun_32;
  YPmacro(YPPsym((P)"eval/top"),YPPsym((P)"for-user-frames"),T97);
  lit_99 = YPPsym((P)"msg-src-loc");
  lit_100 = YPPlist(1,YPPsym((P)"f"));
  lit_101 = YPsb((P)" %s:%d");
  T98 = YPsig(LITREF(lit_100),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_msg_src_loc_33 = YPmet(FUNCODEREF(fun_msg_src_loc_33),LITREF(lit_99),T98,ENVNUL,PNUL,sloc(139));
  T100 = VARREF_OR(YevalStopYmsg_src_loc,YPfalse);
  T101 = fun_msg_src_loc_33;
  T99 = XCALL2(1,VARREF(YPdefine_method),T100,T101);
  VARSET(YevalStopYmsg_src_loc,T99);
  lit_102 = YPPsym((P)"backtrace");
  lit_103 = YPPlist(1,YPPsym((P)"break"));
  lit_104 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"_args"));
  lit_105 = YPsb((P)"[%=] %= %=");
  T104 = YPsig(LITREF(lit_104),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T104,ENVNUL,PNUL,sloc(146));
  T103 = YPsig(LITREF(lit_103),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T103,ENVNUL,PNUL,sloc(146));
  T102 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_backtrace_36 = YPmet(FUNCODEREF(fun_backtrace_36),LITREF(lit_102),T102,ENVNUL,PNUL,sloc(145));
  T106 = VARREF_OR(YevalStopYbacktrace,YPfalse);
  T107 = fun_backtrace_36;
  T105 = XCALL2(1,VARREF(YPdefine_method),T106,T107);
  VARSET(YevalStopYbacktrace,T105);
  lit_106 = YPPsym((P)"frame");
  lit_107 = YPPlist(1,YPPsym((P)"n"));
  lit_108 = YPPlist(1,YPPsym((P)"break"));
  lit_109 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"_args"));
  lit_110 = YPsb((P)"[%=] %= %=");
  T110 = YPsig(LITREF(lit_109),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T110,ENVNUL,PNUL,sloc(150));
  T109 = YPsig(LITREF(lit_108),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T109,ENVNUL,PNUL,sloc(150));
  T108 = YPsig(LITREF(lit_107),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_frame_39 = YPmet(FUNCODEREF(fun_frame_39),LITREF(lit_106),T108,ENVNUL,PNUL,sloc(149));
  T112 = VARREF_OR(YevalStopYframe,YPfalse);
  T113 = fun_frame_39;
  T111 = XCALL2(1,VARREF(YPdefine_method),T112,T113);
  VARSET(YevalStopYframe,T111);
  lit_111 = YPPsym((P)"frame-var");
  lit_112 = YPPlist(2,YPPsym((P)"n"),YPPsym((P)"name"));
  lit_113 = YPPlist(1,YPPsym((P)"ret"));
  lit_114 = YPPlist(1,YPPsym((P)"break"));
  lit_115 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"_args"));
  T117 = YPsig(LITREF(lit_115),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T117,ENVNUL,PNUL,sloc(156));
  T116 = YPsig(LITREF(lit_114),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T116,ENVNUL,PNUL,sloc(156));
  T115 = YPsig(LITREF(lit_113),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T115,ENVNUL,PNUL,sloc(155));
  T114 = YPsig(LITREF(lit_112),YPPlist(2,VARREF(YLintG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_frame_var_43 = YPmet(FUNCODEREF(fun_frame_var_43),LITREF(lit_111),T114,ENVNUL,PNUL,sloc(154));
  T119 = VARREF_OR(YevalStopYframe_var,YPfalse);
  T120 = fun_frame_var_43;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T120);
  VARSET(YevalStopYframe_var,T118);
  lit_116 = YPPsym((P)"bt");
  lit_117 = YPPlist(1,YPPsym((P)"break"));
  lit_118 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"_args"));
  lit_119 = YPsb((P)"[%=] %=");
  T123 = YPsig(LITREF(lit_118),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T123,ENVNUL,PNUL,sloc(163));
  T122 = YPsig(LITREF(lit_117),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T122,ENVNUL,PNUL,sloc(163));
  T121 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_bt_46 = YPmet(FUNCODEREF(fun_bt_46),LITREF(lit_116),T121,ENVNUL,PNUL,sloc(162));
  T125 = VARREF_OR(YevalStopYbt,YPfalse);
  T126 = fun_bt_46;
  T124 = XCALL2(1,VARREF(YPdefine_method),T125,T126);
  VARSET(YevalStopYbt,T124);
  lit_120 = YPPsym((P)"do-restart");
  lit_121 = YPPlist(2,YPPsym((P)"restarts"),YPPsym((P)"n"));
  lit_122 = YPsb((P)"No restarts available.\n");
  lit_123 = YPsb((P)"No restart #%d.\n");
  T127 = YPsig(LITREF(lit_121),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYdo_restart = YPmet(FUNCODEREF(YevalStopYdo_restart),LITREF(lit_120),T127,ENVNUL,PNUL,sloc(166));
  T128 = YevalStopYdo_restart;
  VARSET(YevalStopYdo_restart,T128);
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
  lit_136 = YPPsym((P)"x-1491");
  lit_137 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_138 = YPPlist(1,YPPsym((P)"return"));
  lit_139 = YPPsym((P)"x-1494");
  lit_140 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_141 = YPPlist(1,YPPsym((P)"return"));
  lit_142 = YPPsym((P)"x-1497");
  lit_143 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_144 = YPPlist(1,YPPsym((P)"return"));
  lit_145 = YPPsym((P)"x-1500");
  lit_146 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_147 = YPPlist(1,YPPsym((P)"return"));
  lit_148 = YPPsym((P)"x-1503");
  lit_149 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_150 = YPPlist(1,YPPsym((P)"return"));
  lit_151 = YPPsym((P)"x-1506");
  lit_152 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_153 = YPPlist(1,YPPsym((P)"return"));
  lit_154 = YPPsym((P)"x-1509");
  lit_155 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_156 = YPPlist(1,YPPsym((P)"return"));
  lit_157 = YPPsym((P)"x-1512");
  lit_158 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_159 = YPPlist(1,YPPsym((P)"return"));
  lit_160 = YPPsym((P)"x-1515");
  lit_161 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_162 = YPPlist(1,YPPsym((P)"return"));
  lit_163 = YPPsym((P)"x-1518");
  lit_164 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_165 = YPPlist(1,YPPsym((P)"return"));
  lit_166 = YPPsym((P)"x-1521");
  lit_167 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_168 = YPPlist(1,YPPsym((P)"return"));
  lit_169 = YPPsym((P)"x-1524");
  lit_170 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_171 = YPPlist(1,YPPsym((P)"return"));
  lit_172 = YPPsym((P)"x-1527");
  lit_173 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_174 = YPPlist(1,YPPsym((P)"return"));
  lit_175 = YPPsym((P)"x-1530");
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
  T166 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T166,ENVNUL,PNUL,YPfalse);
  T165 = YPsig(LITREF(lit_128),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T165,ENVNUL,PNUL,sloc(185));
  T164 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T164,ENVNUL,PNUL,YPfalse);
  T163 = YPsig(LITREF(lit_132),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T163,ENVNUL,PNUL,sloc(196));
  T162 = YPsig(LITREF(lit_176),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1530_52 = YPmet(FUNCODEREF(fun_x_1530_52),LITREF(lit_175),T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(LITREF(lit_174),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(LITREF(lit_173),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1527_54 = YPmet(FUNCODEREF(fun_x_1527_54),LITREF(lit_172),T160,ENVNUL,PNUL,YPfalse);
  T159 = YPsig(LITREF(lit_171),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(LITREF(lit_170),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1524_56 = YPmet(FUNCODEREF(fun_x_1524_56),LITREF(lit_169),T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(LITREF(lit_168),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_57 = YPmet(FUNCODEREF(fun_57),YPfalse,T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(LITREF(lit_167),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1521_58 = YPmet(FUNCODEREF(fun_x_1521_58),LITREF(lit_166),T156,ENVNUL,PNUL,YPfalse);
  T155 = YPsig(LITREF(lit_165),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T155,ENVNUL,PNUL,YPfalse);
  T154 = YPsig(LITREF(lit_164),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1518_60 = YPmet(FUNCODEREF(fun_x_1518_60),LITREF(lit_163),T154,ENVNUL,PNUL,YPfalse);
  T153 = YPsig(LITREF(lit_162),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T153,ENVNUL,PNUL,YPfalse);
  T152 = YPsig(LITREF(lit_161),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1515_62 = YPmet(FUNCODEREF(fun_x_1515_62),LITREF(lit_160),T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(LITREF(lit_159),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPmet(FUNCODEREF(fun_63),YPfalse,T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(LITREF(lit_158),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1512_64 = YPmet(FUNCODEREF(fun_x_1512_64),LITREF(lit_157),T150,ENVNUL,PNUL,YPfalse);
  T149 = YPsig(LITREF(lit_156),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T149,ENVNUL,PNUL,YPfalse);
  T148 = YPsig(LITREF(lit_155),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1509_66 = YPmet(FUNCODEREF(fun_x_1509_66),LITREF(lit_154),T148,ENVNUL,PNUL,YPfalse);
  T147 = YPsig(LITREF(lit_153),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_67 = YPmet(FUNCODEREF(fun_67),YPfalse,T147,ENVNUL,PNUL,YPfalse);
  T146 = YPsig(LITREF(lit_152),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1506_68 = YPmet(FUNCODEREF(fun_x_1506_68),LITREF(lit_151),T146,ENVNUL,PNUL,YPfalse);
  T145 = YPsig(LITREF(lit_150),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T145,ENVNUL,PNUL,YPfalse);
  T144 = YPsig(LITREF(lit_149),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1503_70 = YPmet(FUNCODEREF(fun_x_1503_70),LITREF(lit_148),T144,ENVNUL,PNUL,YPfalse);
  T143 = YPsig(LITREF(lit_147),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(LITREF(lit_146),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1500_72 = YPmet(FUNCODEREF(fun_x_1500_72),LITREF(lit_145),T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(LITREF(lit_144),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(LITREF(lit_143),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1497_74 = YPmet(FUNCODEREF(fun_x_1497_74),LITREF(lit_142),T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(LITREF(lit_141),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T139,ENVNUL,PNUL,YPfalse);
  T138 = YPsig(LITREF(lit_140),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1494_76 = YPmet(FUNCODEREF(fun_x_1494_76),LITREF(lit_139),T138,ENVNUL,PNUL,YPfalse);
  T137 = YPsig(LITREF(lit_138),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_77 = YPmet(FUNCODEREF(fun_77),YPfalse,T137,ENVNUL,PNUL,YPfalse);
  T136 = YPsig(LITREF(lit_137),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1491_78 = YPmet(FUNCODEREF(fun_x_1491_78),LITREF(lit_136),T136,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(LITREF(lit_135),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T135,ENVNUL,PNUL,YPfalse);
  T134 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T134,ENVNUL,PNUL,sloc(197));
  T133 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T133,ENVNUL,PNUL,sloc(240));
  T132 = YPsig(LITREF(lit_127),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T132,ENVNUL,PNUL,sloc(183));
  T131 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_83 = YPmet(FUNCODEREF(fun_loop_83),LITREF(lit_43),T131,ENVNUL,PNUL,sloc(182));
  T130 = YPsig(LITREF(lit_126),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_84 = YPmet(FUNCODEREF(fun_84),YPfalse,T130,ENVNUL,PNUL,sloc(181));
  T129 = YPsig(LITREF(lit_125),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_PPtopPPtop_in_85 = YPmet(FUNCODEREF(fun_PPtopPPtop_in_85),LITREF(lit_124),T129,ENVNUL,PNUL,sloc(179));
  T168 = VARREF_OR(YevalStopYPPtopPPtop_in,YPfalse);
  T169 = fun_PPtopPPtop_in_85;
  T167 = XCALL2(1,VARREF(YPdefine_method),T168,T169);
  VARSET(YevalStopYPPtopPPtop_in,T167);
  lit_193 = YPPsym((P)"top");
  lit_194 = YPPlist(1,YPPsym((P)"modname"));
  lit_195 = YPPlist(1,YPPsym((P)"quit"));
  lit_196 = YPsb((P)"Exit the top-level interpreter");
  lit_197 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  lit_198 = YPPlist(1,YPPsym((P)"top"));
  T176 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_86 = YPmet(FUNCODEREF(fun_86),YPfalse,T176,ENVNUL,PNUL,YPfalse);
  T175 = YPsig(LITREF(lit_197),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T175,ENVNUL,PNUL,sloc(247));
  T174 = YPsig(LITREF(lit_198),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T174,ENVNUL,PNUL,sloc(249));
  T173 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_89 = YPmet(FUNCODEREF(fun_loop_89),LITREF(lit_43),T173,ENVNUL,PNUL,sloc(248));
  T172 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_90 = YPmet(FUNCODEREF(fun_90),YPfalse,T172,ENVNUL,PNUL,sloc(251));
  T171 = YPsig(LITREF(lit_195),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T171,ENVNUL,PNUL,sloc(244));
  T170 = YPsig(LITREF(lit_194),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_top_92 = YPmet(FUNCODEREF(fun_top_92),LITREF(lit_193),T170,ENVNUL,PNUL,sloc(243));
  T178 = VARREF_OR(YevalStopYtop,YPfalse);
  T179 = fun_top_92;
  T177 = XCALL2(1,VARREF(YPdefine_method),T178,T179);
  VARSET(YevalStopYtop,T177);
  lit_199 = YPPsym((P)"save-image");
  lit_200 = YPPlist(1,YPPsym((P)"image-name"));
  lit_201 = YPPsym((P)"goo/user");
  T181 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_93 = YPmet(FUNCODEREF(fun_93),YPfalse,T181,ENVNUL,PNUL,sloc(254));
  T180 = YPsig(LITREF(lit_200),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalStopYsave_image = YPmet(FUNCODEREF(YevalStopYsave_image),LITREF(lit_199),T180,ENVNUL,PNUL,sloc(253));
  T182 = YevalStopYsave_image;
  VARSET(YevalStopYsave_image,T182);
  T183 = YPfalse;
  return T183;
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
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooSlate_macros;

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
  {"type-object", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"sexpr-def-value", &module_info_evalSsyntax, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"monitor-main-thunk", &module_info_evalSast, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"gather-temporaries!", &module_info_evalSast_linearize, NULL},
  {"sexpr-bind-pattern-variables", &module_info_evalSsyntax, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"environment-uses-modules", &module_info_evalSast, NULL},
  {"binding-index", &module_info_evalSast, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"module-name-to-relpath", &module_info_evalSast, NULL},
  {"add-src-path", &module_info_gooSsystem, NULL},
  {"sexpr-isa-prop-inits", &module_info_evalSsyntax, NULL},
  {"sexpr-monitor-expand", &module_info_evalSsyntax, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"<module-loader>", &module_info_evalSast, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"$sexpr-quasiquote-tag", &module_info_evalSsyntax, NULL},
  {"obj-filename", &module_info_gooSsystem, NULL},
  {"signature-value-setter", &module_info_evalSast, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"app-filename", &module_info_gooSruntime, NULL},
  {"binding-inferred-type-setter", &module_info_evalSast, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"locals-body-setter", &module_info_evalSast, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"bind-exit-main-fun", &module_info_evalSast, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"module-binding", &module_info_evalSast, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"binding-value-setter", &module_info_evalSast, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"register-allocate!", &module_info_evalSast_linearize, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"<monitor>", &module_info_evalSast, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"parent-directory", &module_info_gooSsystem, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"locals-functions-setter", &module_info_evalSast, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"$sexpr-define-function-tag", &module_info_evalSsyntax, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"monitor-handler", &module_info_evalSast, NULL},
  {"module-uses-c-includes", &module_info_evalSast, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"$sexpr-define-syntax-tag", &module_info_evalSsyntax, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"assignment-form-setter", &module_info_evalSast, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"fix-let-body", &module_info_evalSast, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"so-load", &module_info_gooSsystem, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"*current-handlers*", &module_info_gooSconditions, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"reference-frame-number", &module_info_evalSast, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"find-goo-file-at", &module_info_gooSsystem, NULL},
  {"<predefined-application>", &module_info_evalSast, NULL},
  {"%binding-value-or", &module_info_evalSast_eval, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"monitor-type", &module_info_evalSast, NULL},
  {"<magic-reference>", &module_info_evalSast, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"<box-creation>", &module_info_evalSast_linearize, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"*path-separator*", &module_info_gooSsystem, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"<fab-list>", &module_info_evalSast, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"fix-let-arguments", &module_info_evalSast, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"function-body", &module_info_evalSast, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"<passive-program>", &module_info_evalSast, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"constant-index-setter", &module_info_evalSast, NULL},
  {"monitor-info", &module_info_evalSast, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"<local-binding>", &module_info_evalSast, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"$sexpr-define-generic-tag", &module_info_evalSsyntax, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"application-known?", &module_info_evalSast, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"application-known?-setter", &module_info_evalSast, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"$sexpr-method-tag", &module_info_evalSsyntax, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"monitor-test", &module_info_evalSast, NULL},
  {"%binding-value-or-of", &module_info_evalSast_eval, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"loc-val-setter", &module_info_gooSruntime, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"function-debug-name", &module_info_evalSast, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"sexpr-sequence->begin", &module_info_evalSsyntax, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"do-named-static-global-bindings", &module_info_evalSast, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"fab-g2c-module", &module_info_evalSast, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"sexpr-function-signature", &module_info_evalSsyntax, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"add-build-path", &module_info_gooSsystem, NULL},
  {"components-to-pathname", &module_info_gooSsystem, NULL},
  {"assignment-reference", &module_info_evalSast, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"sexpr-fab-getter", &module_info_evalSsyntax, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"function-source-setter", &module_info_evalSast, NULL},
  {"ast-evaluate", &module_info_evalSast, NULL},
  {"sexpr-prop-init-var", &module_info_evalSsyntax, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"$sexpr-if-tag", &module_info_evalSsyntax, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"form-quotations", &module_info_evalSast_linearize, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"<constant>", &module_info_evalSast, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"time", &module_info_gooSsystem, NULL},
  {"constant-value", &module_info_evalSast, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"*module-search-path*", &module_info_gooSsystem, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"binding-info-setter", &module_info_evalSast, NULL},
  {"alternative-consequent", &module_info_evalSast, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"$sexpr-let-tag", &module_info_evalSsyntax, NULL},
  {"list-handlers", &module_info_gooSconditions, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"choose-handler", &module_info_gooSconditions, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"c-filename", &module_info_gooSsystem, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"function-temporaries", &module_info_evalSast, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"program-type-setter", &module_info_evalSast, NULL},
  {"binding-dotted?", &module_info_evalSast, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"function-free", &module_info_evalSast, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"create-directory", &module_info_gooSsystem, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"<bound?>", &module_info_evalSast, NULL},
  {"sexpr-syntax-if-pattern", &module_info_evalSsyntax, NULL},
  {"<ast-generic>", &module_info_evalSast, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"sexpr-make-application", &module_info_evalSsyntax, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"describe-handler", &module_info_gooSconditions, NULL},
  {"ast-walk", &module_info_evalSast, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"process-id", &module_info_gooSsystem, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"loc-val", &module_info_gooSruntime, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"<ast-method>", &module_info_evalSast, NULL},
  {"locals-body", &module_info_evalSast, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"components-parent-directory", &module_info_gooSsystem, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"binding-native-to?", &module_info_evalSast, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"signature-arity-setter", &module_info_evalSast, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"free-environment", &module_info_evalSast, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"function-source", &module_info_evalSast, NULL},
  {"%compile", &module_info_gooSsystem, NULL},
  {"form-definitions", &module_info_evalSast_linearize, NULL},
  {"extract-things!", &module_info_evalSast_linearize, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"function-frame-len-setter", &module_info_evalSast, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, NULL},
  {"program-definitions", &module_info_evalSast_linearize, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"binding-dynamic-extent?", &module_info_evalSast, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"sexpr-def-variable", &module_info_evalSsyntax, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"*goo-extension*", &module_info_gooSsystem, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"sexpr-block-body", &module_info_evalSsyntax, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"<immediate-constant>", &module_info_evalSast, NULL},
  {"bound?-reference", &module_info_evalSast, NULL},
  {"function-data-refs-setter", &module_info_evalSast, NULL},
  {"sexpr-loc-bound-signatures", &module_info_evalSsyntax, NULL},
  {"program-bindings", &module_info_evalSast_linearize, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"function-self-recursive?", &module_info_evalSast, NULL},
  {"remove-modules-by-name!", &module_info_evalSast, NULL},
  {"function-index-setter", &module_info_evalSast, NULL},
  {"function-binding", &module_info_evalSast, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"build-condition-for-handler-interactively", &module_info_gooSconditions, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"do-module-loader-modules", &module_info_evalSast, NULL},
  {"signature-value", &module_info_evalSast, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"as-lst", &module_info_evalSast, NULL},
  {"<ast-primitive-definition>", &module_info_evalSast, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"def-programs", &module_info_evalSast, NULL},
  {"$sexpr-define-method-tag", &module_info_evalSsyntax, NULL},
  {"binding-mangled-name", &module_info_evalSast, NULL},
  {"<assignment>", &module_info_evalSast, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"sexpr-define-class?", &module_info_evalSsyntax, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"binding-value", &module_info_evalSast, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"<module-binding>", &module_info_evalSast, NULL},
  {"binding-global-box-setter", &module_info_evalSast, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"reference-called-function?", &module_info_evalSast, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"<free-reference>", &module_info_evalSast_linearize, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"<runtime-reference>", &module_info_evalSast, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"binding-mutable?", &module_info_evalSast, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"bound?-default", &module_info_evalSast, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"build-condition-interactively", &module_info_gooSconditions, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"box-form", &module_info_evalSast_linearize, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"assignment-form", &module_info_evalSast, NULL},
  {"req-sig-specs", &module_info_evalSast, NULL},
  {"<ast-function>", &module_info_evalSast, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"ast-define-binding", &module_info_evalSast, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"sexpr-let->combination", &module_info_evalSsyntax, NULL},
  {"default-handler-description", &module_info_gooSconditions, NULL},
  {"compose", &module_info_gooSruntime, NULL},
  {"sexpr-variable-type", &module_info_evalSsyntax, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"<box-read>", &module_info_evalSast_linearize, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"$sexpr-define-tag", &module_info_evalSsyntax, NULL},
  {"signature-specs-setter", &module_info_evalSast, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"binding-type-setter", &module_info_evalSast, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"add-tmp-path", &module_info_gooSsystem, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"<binding>", &module_info_evalSast, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"file-type", &module_info_gooSsystem, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"<raw-constant>", &module_info_evalSast, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"flatten-seqs", &module_info_evalSast_linearize, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"constant-index", &module_info_evalSast, NULL},
  {"<closure-creation>", &module_info_evalSast_linearize, NULL},
  {"find-environment-module", &module_info_evalSast, NULL},
  {"<module-binding-reference>", &module_info_evalSast, NULL},
  {"function-nary?", &module_info_evalSast, NULL},
  {"binding-locative-setter", &module_info_evalSast, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"sequentialize", &module_info_evalSast, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"<static-global-environment>", &module_info_evalSast, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"%binding-value-of-setter", &module_info_evalSast_eval, NULL},
  {"report-undefined-global-bindings", &module_info_evalSast, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"<alternative>", &module_info_evalSast, NULL},
  {"probe-module", &module_info_evalSast, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"env-object-name", &module_info_evalSast, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"<global-box>", &module_info_evalSast, NULL},
  {"reference-offset", &module_info_evalSast_linearize, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"reference-self?", &module_info_evalSast_linearize, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"function-registers-setter", &module_info_evalSast, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"unchecked-runtime-environment", &module_info_evalSast, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"module-loader-module-type", &module_info_evalSast, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"<local-assignment>", &module_info_evalSast, NULL},
  {"components-basename", &module_info_gooSsystem, NULL},
  {"function-value", &module_info_evalSast, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"sexpr-make-method", &module_info_evalSsyntax, NULL},
  {"do-static-global-bindings", &module_info_evalSast, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"<sequential>", &module_info_evalSast, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"fix-let-body-setter", &module_info_evalSast, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"$sexpr-macro-expand-tag", &module_info_evalSsyntax, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"sexpr-prop-owner", &module_info_evalSsyntax, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"$sexpr-monitor-tag", &module_info_evalSsyntax, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"sexpr-expand-backquote", &module_info_evalSsyntax, NULL},
  {"<dynamic-assignment>", &module_info_evalSast, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"$sexpr-def-tag", &module_info_evalSsyntax, NULL},
  {"signature-nary?-setter", &module_info_evalSast, NULL},
  {"sexpr-if-else", &module_info_evalSsyntax, NULL},
  {"fix-let-bindings-setter", &module_info_evalSast, NULL},
  {"module-uses-c-libraries", &module_info_evalSast, NULL},
  {"<global-assignment>", &module_info_evalSast, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"assignment-binding", &module_info_evalSast, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"closurize-main!", &module_info_evalSast_linearize, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"<programs>", &module_info_evalSast, NULL},
  {"sexpr-function-definition-value", &module_info_evalSsyntax, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"program-type", &module_info_evalSast, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"identity", &module_info_gooSruntime, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"sexpr-def?", &module_info_evalSsyntax, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"form-program", &module_info_evalSast_linearize, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"sexpr-syntax-if-value", &module_info_evalSsyntax, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"fix-let-arguments-setter", &module_info_evalSast, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"sexpr-operator", &module_info_evalSsyntax, NULL},
  {"alternative-condition", &module_info_evalSast, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"*exe-extension*", &module_info_gooSsystem, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"fix-let-types-setter", &module_info_evalSast, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"<pathname-error>", &module_info_gooSsystem, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"<dynamic-definition>", &module_info_evalSast, NULL},
  {"alternative-alternant", &module_info_evalSast, NULL},
  {"function-adjectives", &module_info_evalSast, NULL},
  {"signature-arity", &module_info_evalSast, NULL},
  {"<macro-reference>", &module_info_evalSast, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"analyze-ast", &module_info_evalSast_linearize, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"sexpr-definition-value", &module_info_evalSsyntax, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"module-syntax-environment", &module_info_evalSast, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"module-uses-c-files", &module_info_evalSast, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"probe-directory", &module_info_gooSsystem, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"*c-extension*", &module_info_gooSsystem, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"binding-global-box", &module_info_evalSast, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"objectify-quotation", &module_info_evalSast, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"file-exists?", &module_info_gooSsystem, NULL},
  {"module-target-environment", &module_info_evalSast, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"<low-let>", &module_info_evalSast, NULL},
  {"always", &module_info_gooSruntime, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"ast-walk!", &module_info_evalSast, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"$sexpr-bind-exit-tag", &module_info_evalSsyntax, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"reference-called-function?-setter", &module_info_evalSast, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"<ast-macro-definition>", &module_info_evalSast, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"*goo-personal-root*", &module_info_gooSsystem, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"add-goo-personal-root-path", &module_info_gooSsystem, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"sexpr-isa-init-values", &module_info_evalSsyntax, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"sexpr-fab-setter-name", &module_info_evalSsyntax, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"init-ast", &module_info_evalSast, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"unconstrained-type?", &module_info_evalSast_linearize, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"sexpr-signature-value", &module_info_evalSsyntax, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"program-form", &module_info_evalSast_linearize, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_evalSsyntax, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"<static-module-binding-reference>", &module_info_evalSast, NULL},
  {"binding-module-name", &module_info_evalSast, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"$sexpr-begin-tag", &module_info_evalSsyntax, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"signature-names-setter", &module_info_evalSast, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"signature-bindings-setter", &module_info_evalSast, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"binding-info", &module_info_evalSast, NULL},
  {"%binding-bound-of?", &module_info_evalSast_eval, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"function-frame-len", &module_info_evalSast, NULL},
  {"%binding-bound?", &module_info_evalSast_eval, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"binding-kind", &module_info_evalSast, NULL},
  {"$sexpr-syntax-if-tag", &module_info_evalSsyntax, NULL},
  {"%binding-value", &module_info_evalSast_eval, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"module-mangled-name-setter", &module_info_evalSast, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"binding-mangled-name-setter", &module_info_evalSast, NULL},
  {"sexpr-function-body", &module_info_evalSsyntax, NULL},
  {"sexpr-loc-bound-names", &module_info_evalSsyntax, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"binding-type", &module_info_evalSast, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"binding-inferred-type", &module_info_evalSast, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"$sexpr-define-class-tag", &module_info_evalSsyntax, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"find-goo-file-in-path", &module_info_gooSsystem, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"<dynamic-reference>", &module_info_evalSast, NULL},
  {"<top-level-form>", &module_info_evalSast_linearize, NULL},
  {"function-registers", &module_info_evalSast, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"module-name", &module_info_evalSast, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"<fix-let>", &module_info_evalSast, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"ast-contains-fun?", &module_info_evalSast_linearize, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"goo-filename", &module_info_gooSsystem, NULL},
  {"locals-bindings-setter", &module_info_evalSast, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"*goo-build-root*", &module_info_gooSsystem, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"sexpr-variable-name", &module_info_evalSsyntax, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"sexpr-prop-name", &module_info_evalSsyntax, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"$sexpr-quote-tag", &module_info_evalSsyntax, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"*goo-root*", &module_info_gooSsystem, NULL},
  {"function-signature-setter", &module_info_evalSast, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"<module>", &module_info_evalSast, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"signature-nary?", &module_info_evalSast, NULL},
  {"sexpr-if-then", &module_info_evalSsyntax, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"fix-let-bindings", &module_info_evalSast, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"$sexpr-prop-tag", &module_info_evalSsyntax, NULL},
  {"function-bindings", &module_info_evalSast, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"objectify-with-subtransaction", &module_info_evalSast, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"function-index", &module_info_evalSast, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"$sexpr-set-tag", &module_info_evalSsyntax, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"sexpr-syntax-if-else", &module_info_evalSsyntax, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"$goo-boot-module-name", &module_info_evalSast, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"environment-module", &module_info_evalSast, NULL},
  {"<box-write>", &module_info_evalSast_linearize, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"*obj-extension*", &module_info_gooSsystem, NULL},
  {"<definition>", &module_info_evalSast, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"hierarchical-components", &module_info_gooSsystem, NULL},
  {"eval", &module_info_evalSsyntax, NULL},
  {"program-register", &module_info_evalSast, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"sexpr-make-macro-function", &module_info_evalSsyntax, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"%load", &module_info_gooSsystem, NULL},
  {"module-mangled-string-name", &module_info_evalSast, NULL},
  {"sexpr-loc-raw-body", &module_info_evalSsyntax, NULL},
  {"set-module-environments", &module_info_evalSast, NULL},
  {"sexpr-unquote-splicing?", &module_info_evalSsyntax, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"add-goo-root-path", &module_info_gooSsystem, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"fix-let-types", &module_info_evalSast, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"closure-creation-free", &module_info_evalSast_linearize, NULL},
  {"sexpr-define-class-parents", &module_info_evalSsyntax, NULL},
  {"reference-binding", &module_info_evalSast, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"sexpr-prop-init", &module_info_evalSsyntax, NULL},
  {"sexpr-prop-init?", &module_info_evalSsyntax, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"curry", &module_info_gooSruntime, NULL},
  {"<local-reference>", &module_info_evalSast, NULL},
  {"<free-environment>", &module_info_evalSast, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"sexpr-isa-parent", &module_info_evalSsyntax, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"install-initial-bindings", &module_info_evalSast, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"<runtime-assignment>", &module_info_evalSast, NULL},
  {"global-box-value-setter", &module_info_evalSast, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"sexpr-function-definition-adjectives", &module_info_evalSsyntax, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"sexpr-syntax-definition-value", &module_info_evalSsyntax, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"$sexpr-locals-tag", &module_info_evalSsyntax, NULL},
  {"sexpr-text-of-quotation", &module_info_evalSsyntax, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"sexpr-operands", &module_info_evalSsyntax, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"binding-index-setter", &module_info_evalSast, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"reference-frame-offset", &module_info_evalSast, NULL},
  {">", &module_info_gooSmag, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"application-binding", &module_info_evalSast, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"<compile-time>", &module_info_evalSast, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"<regular-application>", &module_info_evalSast, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"load-in", &module_info_evalSast, NULL},
  {"sexpr-block-name", &module_info_evalSsyntax, NULL},
  {"<renamed-local-binding>", &module_info_evalSast_linearize, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"sexpr-isa-init-props", &module_info_evalSsyntax, NULL},
  {"find-binding", &module_info_evalSast, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"os-val", &module_info_gooSsystem, NULL},
  {"sexpr-method-signature", &module_info_evalSsyntax, NULL},
  {"sexpr-method-body", &module_info_evalSsyntax, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"application-arguments", &module_info_evalSast, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"environment-bindings", &module_info_evalSast, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"signature-specs", &module_info_evalSast, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"program-register-setter", &module_info_evalSast, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"<ast-signature>", &module_info_evalSast, NULL},
  {"sexpr-syntax-definition-variable", &module_info_evalSsyntax, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"sexpr-forward-primitive?", &module_info_evalSsyntax, NULL},
  {"sexpr-definition-variable", &module_info_evalSsyntax, NULL},
  {"sexpr-iterate->loc", &module_info_evalSsyntax, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"sexpr-unwind-protect-protected-form", &module_info_evalSsyntax, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"compile-time-program", &module_info_evalSast, NULL},
  {"sexpr-variable?", &module_info_evalSsyntax, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"sexpr-assignment-variable", &module_info_evalSsyntax, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"$sexpr-unwind-protect-tag", &module_info_evalSsyntax, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"signature-names", &module_info_evalSast, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"signature-bindings", &module_info_evalSast, NULL},
  {"program-line", &module_info_evalSast, NULL},
  {"components-last", &module_info_gooSsystem, NULL},
  {"label-components", &module_info_gooSsystem, NULL},
  {"application-tail?", &module_info_evalSast, NULL},
  {"function-body-setter", &module_info_evalSast, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"lift!", &module_info_evalSast_linearize, NULL},
  {"file-copy", &module_info_gooSsystem, NULL},
  {"file-mtime", &module_info_gooSsystem, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"<program>", &module_info_evalSast, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"objectify-signature", &module_info_evalSast, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"binding-module", &module_info_evalSast, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"closure-creation-index", &module_info_evalSast_linearize, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"exe-filename", &module_info_gooSsystem, NULL},
  {"<reference>", &module_info_evalSast, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"%binding-value-setter", &module_info_evalSast_eval, NULL},
  {"sexpr-fab-setter", &module_info_evalSsyntax, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"<locals>", &module_info_evalSast, NULL},
  {"gooc-filename", &module_info_gooSsystem, NULL},
  {"<application>", &module_info_evalSast, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"function-self-recursive?-setter", &module_info_evalSast, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"<bind-exit>", &module_info_evalSast, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"<computed-program>", &module_info_evalSast, NULL},
  {"module-mangled-name", &module_info_evalSast, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"function-debug-name-setter", &module_info_evalSast, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"<directory-error>", &module_info_gooSsystem, NULL},
  {"sexpr-make-begin", &module_info_evalSsyntax, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"<real-reference>", &module_info_evalSast, NULL},
  {"os-val-setter", &module_info_gooSsystem, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"sexpr-unquote?", &module_info_evalSsyntax, NULL},
  {"module-exports", &module_info_evalSast, NULL},
  {"locals-bindings", &module_info_evalSast, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"pathname-to-components", &module_info_gooSsystem, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"sexpr-prop-type", &module_info_evalSsyntax, NULL},
  {"sexpr-assignment-value", &module_info_evalSsyntax, NULL},
  {"binding-locative", &module_info_evalSast, NULL},
  {"<ast-primitive>", &module_info_evalSast, NULL},
  {"init-environment-for-eval", &module_info_evalSast, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"function-data-refs", &module_info_evalSast, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"$sexpr-iterate-tag", &module_info_evalSsyntax, NULL},
  {"function-signature", &module_info_evalSast, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"sexpr-if-test", &module_info_evalSsyntax, NULL},
  {"<global-reference>", &module_info_evalSast, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"<arguments>", &module_info_evalSast, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"os-name", &module_info_gooSsystem, NULL},
  {"function-temporaries-setter", &module_info_evalSast, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
  {"box-reference", &module_info_evalSast_linearize, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"function-free-setter", &module_info_evalSast, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"binding-name", &module_info_evalSast, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"sexpr-make-anonymous-method", &module_info_evalSsyntax, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"sexpr-syntax-if-then", &module_info_evalSsyntax, NULL},
  {"locals-functions", &module_info_evalSast, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"<unwind-protect>", &module_info_evalSast, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"sexpr-loc-bound-bodies", &module_info_evalSsyntax, NULL},
  {"*register-passive?*", &module_info_evalSast_linearize, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"runtime-environment", &module_info_evalSast, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"load-module", &module_info_evalSast, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSast, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSruntime, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"invoke-handler-interactively", &module_info_gooSconditions, NULL},
  {"rcurry", &module_info_gooSruntime, NULL},
  {"unwind-protect-protected-thunk", &module_info_evalSast, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"%binding-value-of", &module_info_evalSast_eval, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"program-quotations", &module_info_evalSast_linearize, NULL},
  {"$sexpr-isa-tag", &module_info_evalSsyntax, NULL},
  {"insert-box!", &module_info_evalSast_linearize, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"global-box-value", &module_info_evalSast, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"sexpr-function-definition-variable", &module_info_evalSsyntax, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"%%top%%top-in", CVAR, &YevalStopYPPtopPPtop_in},
  {"for-user-frames", PVAR, NULL},
  {"load", CVAR, &YevalStopYload},
  {"read-file", CVAR, &YevalStopYread_file},
  {"top", CVAR, &YevalStopYtop},
  {"%%bottom%%ast-run", CVAR, &YevalStopYPPbottomPPast_run},
  {"$$", CVAR, &YevalStopYDD},
  {"g2c-eval", CVAR, &YevalStopYg2c_eval},
  {"print-result-expression", CVAR, &YevalStopYprint_result_expression},
  {"eval-in", CVAR, &YevalStopYeval_in},
  {"frame", CVAR, &YevalStopYframe},
  {"compiled-file?", CVAR, &YevalStopYcompiled_fileQ},
  {"backtrace", CVAR, &YevalStopYbacktrace},
  {"$$$", CVAR, &YevalStopYDDD},
  {"for-frames", PVAR, NULL},
  {"auto-eval", CVAR, &YevalStopYauto_eval},
  {"do-restart", CVAR, &YevalStopYdo_restart},
  {"str-parse", CVAR, &YevalStopYstr_parse},
  {"parse-in", CVAR, &YevalStopYparse_in},
  {"---main-0---", PVAR, NULL},
  {"str-eval", CVAR, &YevalStopYstr_eval},
  {"$g2c-eval?", CVAR, &YevalStopYDg2c_evalQ},
  {"load-file", CVAR, &YevalStopYload_file},
  {"auto-run", CVAR, &YevalStopYauto_run},
  {"msg-src-loc", CVAR, &YevalStopYmsg_src_loc},
  {"%%bottom%%g2c-run", CVAR, &YevalStopYPPbottomPPg2c_run},
  {"$", CVAR, &YevalStopYD},
  {"esctst", CVAR, &YevalStopYesctst},
  {"frame-var", CVAR, &YevalStopYframe_var},
  {"prompt-for-command-expression", CVAR, &YevalStopYprompt_for_command_expression},
  {"do-stack-frames", CVAR, &YevalStopYdo_stack_frames},
  {"run", DVAR, &YevalStopYrun},
  {"str-parse-in", CVAR, &YevalStopYstr_parse_in},
  {"bt", CVAR, &YevalStopYbt},
  {"parse", CVAR, &YevalStopYparse},
  {"str-eval-in", CVAR, &YevalStopYstr_eval_in},
  {"save-image", CVAR, &YevalStopYsave_image},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"load", NULL},
  {"read-file", NULL},
  {"$$", NULL},
  {"frame-var", NULL},
  {"backtrace", NULL},
  {"$$$", NULL},
  {"load-file", NULL},
  {"auto-eval", NULL},
  {"save-image", NULL},
  {"frame", NULL},
  {"parse-in", NULL},
  {"eval", NULL},
  {"$", NULL},
  {"esctst", NULL},
  {"do-stack-frames", NULL},
  {"g2c-eval", NULL},
  {"bt", NULL},
  {"top", NULL},
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
