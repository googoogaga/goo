/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/g2c");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/g2c */

EXT(YDmax_int,"goo/boot","$max-int");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
DEF(YevalSg2cYgenerate_quotation,"eval/g2c","generate-quotation");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
DEF(YevalSg2cYDlocal_marker,"eval/g2c","$local-marker");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
DEF(YevalSg2cYgenerate_function_body_reference,"eval/g2c","generate-function-body-reference");
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
EXT(YevalStopYbt,"eval/top","bt");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YevalStopYDD,"eval/top","$$");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
DEF(YevalSg2cYDmin_character_code,"eval/g2c","$min-character-code");
DEF(YevalSg2cYgenerate_module_init,"eval/g2c","generate-module-init");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YevalStopYframe_var,"eval/top","frame-var");
DEF(YevalSg2cYmangle_integer,"eval/g2c","mangle-integer");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YevalStopYload,"eval/top","load");
DEF(YevalSg2cYprimitive_inlinableQ,"eval/g2c","primitive-inlinable?");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
DEF(YevalSg2cYDnow_mod_var_name,"eval/g2c","$now-mod-var-name");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
DEF(YevalSg2cYfuninit_to_c,"eval/g2c","funinit-to-c");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
DEF(YevalSg2cYgenerate_global_environment,"eval/g2c","generate-global-environment");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
DEF(YevalSg2cYmodule_mtime,"eval/g2c","module-mtime");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
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
DEF(YevalSg2cYgenerate_header,"eval/g2c","generate-header");
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
DEF(YevalSg2cYmangle_raw_name,"eval/g2c","mangle-raw-name");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YevalStopYparse_in,"eval/top","parse-in");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
DEF(YevalSg2cYmodule_up_to_dateQ,"eval/g2c","module-up-to-date?");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
DEF(YevalSg2cYgenerate_functions,"eval/g2c","generate-functions");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooSioSwriteYwrite_type,"goo/io/write","write-type");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
DEF(YevalSg2cYDiep_marker,"eval/g2c","$iep-marker");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
DEF(YevalSg2cYg2c_clean,"eval/g2c","g2c-clean");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Yhead_setter,"goo/boot","head-setter");
DEF(YevalSg2cYmangle_global_name,"eval/g2c","mangle-global-name");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
DEF(YevalSg2cYDmangles_data,"eval/g2c","$mangles-data");
DEF(YevalSg2cYDescape_separator,"eval/g2c","$escape-separator");
EXT(YgooSmathYC,"goo/math","^");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YLanyG,"goo/boot","<any>");
EXT(Ysig_specs,"goo/boot","sig-specs");
DEF(YevalSg2cYmodule_loader_app_modname_setter,"eval/g2c","module-loader-app-modname-setter");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YevalStopYload_file,"eval/top","load-file");
EXT(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
DEF(YevalSg2cYDhygiene_char,"eval/g2c","$hygiene-char");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
DEF(YevalSg2cYTregisters_per_lineT,"eval/g2c","*registers-per-line*");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(Yhead,"goo/boot","head");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yobject_props,"goo/boot","object-props");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
DEF(YevalSg2cYgenerate_module_info,"eval/g2c","generate-module-info");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
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
DEF(YevalSg2cYgenerate_local_temporaries,"eval/g2c","generate-local-temporaries");
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
DEF(YevalSg2cYmodule_src_file_setter,"eval/g2c","module-src-file-setter");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
DEF(YevalSg2cYgenerate_return,"eval/g2c","generate-return");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
DEF(YevalSg2cYg2c_ast,"eval/g2c","g2c-ast");
DEF(YevalSg2cYgenerate_function_specs,"eval/g2c","generate-function-specs");
DEF(YevalSg2cYgenerate_function_forwards,"eval/g2c","generate-function-forwards");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
DEF(YevalSg2cYgenerate_function_forward,"eval/g2c","generate-function-forward");
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
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
DEF(YevalSg2cYfunshell_to_c,"eval/g2c","funshell-to-c");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
DEF(YevalSg2cYmodule_loader_appname,"eval/g2c","module-loader-appname");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
DEF(YevalSg2cYfalse_name,"eval/g2c","false-name");
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
DEF(YevalSg2cYcompile_load,"eval/g2c","compile-load");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YevalStopYesctst,"eval/top","esctst");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
DEF(YevalSg2cYg2c_def_app,"eval/g2c","g2c-def-app");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
DEF(YevalSg2cYmangle_binding,"eval/g2c","mangle-binding");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
DEF(YevalSg2cYreference_Gc,"eval/g2c","reference->c");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
DEF(YevalSg2cYgen_ref,"eval/g2c","gen-ref");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
DEF(YevalSg2cYmodule_init_decl,"eval/g2c","module-init-decl");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YevalSastYmodule_uses_c_libraries,"eval/ast","module-uses-c-libraries");
DEF(YevalSg2cYgenerate_global_binding,"eval/g2c","generate-global-binding");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YevalSast_linearizeYunconstrained_typeQ,"eval/ast-linearize","unconstrained-type?");
EXT(YgooSmathYatan,"goo/math","atan");
DEF(YevalSg2cYgenerate_function_code,"eval/g2c","generate-function-code");
EXT(Ysyntax_error,"goo/boot","syntax-error");
DEF(YevalSg2cYDescape_marker,"eval/g2c","$escape-marker");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YLclassG,"goo/boot","<class>");
DEF(YevalSg2cYmangle_local_marked_name,"eval/g2c","mangle-local-marked-name");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
DEF(YevalSg2cYgen_result,"eval/g2c","gen-result");
EXT(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooStypesYlen,"goo/types","len");
DEF(YevalSg2cYgenerate_c_module,"eval/g2c","generate-c-module");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
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
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
DYNDEF(YevalSg2cYTtmp_file_counterT,"eval/g2c","*tmp-file-counter*");
EXT(Yprop_init,"goo/boot","prop-init");
DEF(YevalSg2cYbuf_cat2X,"eval/g2c","buf-cat2!");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
DEF(YevalSg2cYdispatcherQ,"eval/g2c","dispatcher?");
EXT(YgooSmathYK,"goo/math","|");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
DEF(YevalSg2cYbinding_Gc,"eval/g2c","binding->c");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
DEF(YevalSg2cYgenerate_trailer,"eval/g2c","generate-trailer");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YevalSast_linearizeYast_contains_funQ,"eval/ast-linearize","ast-contains-fun?");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
DEF(YevalSg2cYDmethod_mangled_marker_string,"eval/g2c","$method-mangled-marker-string");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yfab_gen,"goo/boot","fab-gen");
DEF(YevalSg2cYDlocal_suffix,"eval/g2c","$local-suffix");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
DEF(YevalSg2cYgenerate_makefile,"eval/g2c","generate-makefile");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YevalSastYload_in,"eval/ast","load-in");
DEF(YevalSg2cYpp,"eval/g2c","pp");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
DEF(YevalSg2cYDmax_character_code,"eval/g2c","$max-character-code");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
DEF(YevalSg2cYmangle_module_into,"eval/g2c","mangle-module-into");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
DEF(YevalSg2cYgenerate_function_binding,"eval/g2c","generate-function-binding");
DYNDEF(YevalSg2cYTdefinitionsT,"eval/g2c","*definitions*");
DEF(YevalSg2cYTmangle_bufferT,"eval/g2c","*mangle-buffer*");
EXT(Yfab_class,"goo/boot","fab-class");
DEF(YevalSg2cYTg2c_appT,"eval/g2c","*g2c-app*");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YevalStopYDDD,"eval/top","$$$");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YevalStopYD,"eval/top","$");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
DEF(YevalSg2cYmangle_quotation_name,"eval/g2c","mangle-quotation-name");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
EXT(YgooSsystemYtime,"goo/system","time");
DEF(YevalSg2cYDnumber_call_templates,"eval/g2c","$number-call-templates");
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
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
DEF(YevalSg2cYDhygiene_marker,"eval/g2c","$hygiene-marker");
EXT(YtT,"goo/boot","t*");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YevalStopYtop,"eval/top","top");
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
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(Ynul,"goo/boot","nul");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
DEF(YevalSg2cYdeclare_imported_module_infos,"eval/g2c","declare-imported-module-infos");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
DYNDEF(YevalSg2cYTdynamic_linkingQT,"eval/g2c","*dynamic-linking?*");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
DEF(YevalSg2cYcompute_program,"eval/g2c","compute-program");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YLfunG,"goo/boot","<fun>");
DEF(YevalSg2cYDnumber_characters,"eval/g2c","$number-characters");
EXT(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
DEF(YevalSg2cYmodule_mtime_setter,"eval/g2c","module-mtime-setter");
DEF(YevalSg2cYmodule_src_file,"eval/g2c","module-src-file");
EXT(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
DEF(YevalSg2cYgenerate_function_bodies,"eval/g2c","generate-function-bodies");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Ytup,"goo/boot","tup");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YevalStopYframe,"eval/top","frame");
DEF(YevalSg2cYmodule_init_name,"eval/g2c","module-init-name");
DEF(YevalSg2cYout_list_builder,"eval/g2c","out-list-builder");
EXT(Ytype_class,"goo/boot","type-class");
DEF(YevalSg2cYmodule_info_name,"eval/g2c","module-info-name");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
DEF(YevalSg2cYgenerate_quotation_forwards,"eval/g2c","generate-quotation-forwards");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSmathYacos,"goo/math","acos");
DEF(YevalSg2cYgenerate_self_recursive_call,"eval/g2c","generate-self-recursive-call");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YevalStopYsave_image,"eval/top","save-image");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
DEF(YevalSg2cYmangle_local_name,"eval/g2c","mangle-local-name");
EXT(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
DEF(YevalSg2cYgen_depth,"eval/g2c","gen-depth");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
DEF(YevalSg2cYDmethod_mangled_marker,"eval/g2c","$method-mangled-marker");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
DEF(YevalSg2cYto_c,"eval/g2c","to-c");
EXT(YgooStypesYas,"goo/types","as");
DEF(YevalSg2cYmangle_name_into,"eval/g2c","mangle-name-into");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(Yprop_owner,"goo/boot","prop-owner");
DEF(YevalSg2cYchar_buffer_as_string,"eval/g2c","char-buffer-as-string");
EXT(YgooSmathYnegQ,"goo/math","neg?");
DEF(YevalSg2cYmangle_boot_name,"eval/g2c","mangle-boot-name");
DEF(YevalSg2cYgenerate_closure_structure,"eval/g2c","generate-closure-structure");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
DEF(YevalSg2cYDiep_suffix,"eval/g2c","$iep-suffix");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YevalSg2cYgenerate_shadow_args,"eval/g2c","generate-shadow-args");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
DEF(YevalSg2cYgenerate_registers,"eval/g2c","generate-registers");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(Ysig_arity,"goo/boot","sig-arity");
DEF(YevalSg2cYDmodule_separator,"eval/g2c","$module-separator");
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
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
DEF(YevalSg2cYfloat_to_c_string,"eval/g2c","float-to-c-string");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
DEF(YevalSg2cYmangle_string_literal,"eval/g2c","mangle-string-literal");
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
DEF(YevalSg2cYTtrace_registersQT,"eval/g2c","*trace-registers?*");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
DEF(YevalSg2cYDname_mangler_table,"eval/g2c","$name-mangler-table");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yunexec,"goo/boot","unexec");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YOanyQ,"goo/boot","@any?");
DEF(YevalSg2cYg2c_goo,"eval/g2c","g2c-goo");
EXT(YgooSmathYE,"goo/math","=");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YPPmacro,"goo/boot","%%macro");
DEF(YevalSg2cYgenerate_quotations,"eval/g2c","generate-quotations");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
DEF(YevalSg2cYg2c_exp,"eval/g2c","g2c-exp");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
DEF(YevalSg2cYcompute_ast,"eval/g2c","compute-ast");
DEF(YevalSg2cYg2c_top,"eval/g2c","g2c-top");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YevalStopYread_file,"eval/top","read-file");
EXT(YDmin_int,"goo/boot","$min-int");
DEF(YevalSg2cYgenerate_c_application,"eval/g2c","generate-c-application");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
DEF(YevalSg2cYg2c_build_app,"eval/g2c","g2c-build-app");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
DEF(YevalSg2cYgenerate_main,"eval/g2c","generate-main");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
DEF(YevalSg2cYg2c_test,"eval/g2c","g2c-test");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSsystemYos_name,"goo/system","os-name");
DEF(YevalSg2cYgen_fab_list,"eval/g2c","gen-fab-list");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Ytail,"goo/boot","tail");
DEF(YevalSg2cYpurge_outdated_modules,"eval/g2c","purge-outdated-modules");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
DEF(YevalSg2cYmodule_loader_app_modname,"eval/g2c","module-loader-app-modname");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
DEF(YevalSg2cYLg2c_moduleG,"eval/g2c","<g2c-module>");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYmod,"goo/math","mod");
DEF(YevalSg2cYDc_escapes,"eval/g2c","$c-escapes");
EXT(YgooSmathYB,"goo/math","&");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
DEF(YevalSg2cYmangler_reset,"eval/g2c","mangler-reset");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
DEF(YevalSg2cYLg2c_module_loaderG,"eval/g2c","<g2c-module-loader>");
EXT(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YPdefine_method,"goo/boot","%define-method");
DEF(YevalSg2cYDmodule_marker,"eval/g2c","$module-marker");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSioSportYin,"goo/io/port","in");
DEF(YevalSg2cYmodule_loader_appname_setter,"eval/g2c","module-loader-appname-setter");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YLpropG,"goo/boot","<prop>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_526);
DEFLIT(lit_440);
DEFLIT(lit_125);
DEFLIT(lit_461);
DEFLIT(lit_229);
DEFLIT(lit_162);
DEFLIT(lit_573);
DEFLIT(lit_637);
DEFLIT(lit_377);
DEFLIT(lit_396);
DEFLIT(lit_266);
DEFLIT(lit_429);
DEFLIT(lit_473);
DEFLIT(lit_604);
DEFLIT(lit_215);
DEFLIT(lit_401);
DEFLIT(lit_299);
DEFLIT(lit_433);
DEFLIT(lit_79);
DEFLIT(lit_436);
DEFLIT(lit_124);
DEFLIT(lit_400);
DEFLIT(lit_474);
DEFLIT(lit_51);
DEFLIT(lit_726);
DEFLIT(lit_306);
DEFLIT(lit_161);
DEFLIT(lit_512);
DEFLIT(lit_230);
DEFLIT(lit_268);
DEFLIT(lit_113);
DEFLIT(lit_688);
DEFLIT(lit_640);
DEFLIT(lit_235);
DEFLIT(lit_202);
DEFLIT(lit_279);
DEFLIT(lit_301);
DEFLIT(lit_434);
DEFLIT(lit_88);
DEFLIT(lit_178);
DEFLIT(lit_160);
DEFLIT(lit_680);
DEFLIT(lit_287);
DEFLIT(lit_59);
DEFLIT(lit_549);
DEFLIT(lit_278);
DEFLIT(lit_560);
DEFLIT(lit_0);
DEFLIT(lit_159);
DEFLIT(lit_594);
DEFLIT(lit_533);
DEFLIT(lit_644);
DEFLIT(lit_489);
DEFLIT(lit_482);
DEFLIT(lit_435);
DEFLIT(lit_595);
DEFLIT(lit_352);
DEFLIT(lit_111);
DEFLIT(lit_144);
DEFLIT(lit_66);
DEFLIT(lit_516);
DEFLIT(lit_531);
DEFLIT(lit_14);
DEFLIT(lit_267);
DEFLIT(lit_611);
DEFLIT(lit_354);
DEFLIT(lit_126);
DEFLIT(lit_233);
DEFLIT(lit_463);
DEFLIT(lit_188);
DEFLIT(lit_388);
DEFLIT(lit_122);
DEFLIT(lit_407);
DEFLIT(lit_156);
DEFLIT(lit_146);
DEFLIT(lit_276);
DEFLIT(lit_82);
DEFLIT(lit_50);
DEFLIT(lit_175);
DEFLIT(lit_180);
DEFLIT(lit_582);
DEFLIT(lit_222);
DEFLIT(lit_390);
DEFLIT(lit_153);
DEFLIT(lit_432);
DEFLIT(lit_38);
DEFLIT(lit_90);
DEFLIT(lit_656);
DEFLIT(lit_550);
DEFLIT(lit_219);
DEFLIT(lit_117);
DEFLIT(lit_589);
DEFLIT(lit_27);
DEFLIT(lit_519);
DEFLIT(lit_208);
DEFLIT(lit_685);
DEFLIT(lit_210);
DEFLIT(lit_450);
DEFLIT(lit_639);
DEFLIT(lit_106);
DEFLIT(lit_171);
DEFLIT(lit_172);
DEFLIT(lit_338);
DEFLIT(lit_224);
DEFLIT(lit_468);
DEFLIT(lit_607);
DEFLIT(lit_543);
DEFLIT(lit_659);
DEFLIT(lit_335);
DEFLIT(lit_200);
DEFLIT(lit_505);
DEFLIT(lit_466);
DEFLIT(lit_514);
DEFLIT(lit_706);
DEFLIT(lit_683);
DEFLIT(lit_456);
DEFLIT(lit_44);
DEFLIT(lit_415);
DEFLIT(lit_480);
DEFLIT(lit_65);
DEFLIT(lit_622);
DEFLIT(lit_334);
DEFLIT(lit_417);
DEFLIT(lit_408);
DEFLIT(lit_101);
DEFLIT(lit_652);
DEFLIT(lit_290);
DEFLIT(lit_657);
DEFLIT(lit_425);
DEFLIT(lit_387);
DEFLIT(lit_695);
DEFLIT(lit_203);
DEFLIT(lit_227);
DEFLIT(lit_677);
DEFLIT(lit_116);
DEFLIT(lit_452);
DEFLIT(lit_707);
DEFLIT(lit_458);
DEFLIT(lit_414);
DEFLIT(lit_496);
DEFLIT(lit_361);
DEFLIT(lit_500);
DEFLIT(lit_228);
DEFLIT(lit_534);
DEFLIT(lit_57);
DEFLIT(lit_207);
DEFLIT(lit_15);
DEFLIT(lit_263);
DEFLIT(lit_663);
DEFLIT(lit_209);
DEFLIT(lit_399);
DEFLIT(lit_559);
DEFLIT(lit_238);
DEFLIT(lit_147);
DEFLIT(lit_599);
DEFLIT(lit_55);
DEFLIT(lit_24);
DEFLIT(lit_254);
DEFLIT(lit_494);
DEFLIT(lit_522);
DEFLIT(lit_703);
DEFLIT(lit_350);
DEFLIT(lit_64);
DEFLIT(lit_7);
DEFLIT(lit_332);
DEFLIT(lit_427);
DEFLIT(lit_331);
DEFLIT(lit_177);
DEFLIT(lit_676);
DEFLIT(lit_6);
DEFLIT(lit_333);
DEFLIT(lit_358);
DEFLIT(lit_674);
DEFLIT(lit_256);
DEFLIT(lit_20);
DEFLIT(lit_447);
DEFLIT(lit_664);
DEFLIT(lit_491);
DEFLIT(lit_498);
DEFLIT(lit_385);
DEFLIT(lit_441);
DEFLIT(lit_545);
DEFLIT(lit_326);
DEFLIT(lit_140);
DEFLIT(lit_25);
DEFLIT(lit_300);
DEFLIT(lit_150);
DEFLIT(lit_370);
DEFLIT(lit_174);
DEFLIT(lit_145);
DEFLIT(lit_271);
DEFLIT(lit_542);
DEFLIT(lit_548);
DEFLIT(lit_457);
DEFLIT(lit_686);
DEFLIT(lit_689);
DEFLIT(lit_383);
DEFLIT(lit_675);
DEFLIT(lit_587);
DEFLIT(lit_645);
DEFLIT(lit_581);
DEFLIT(lit_671);
DEFLIT(lit_411);
DEFLIT(lit_291);
DEFLIT(lit_610);
DEFLIT(lit_568);
DEFLIT(lit_143);
DEFLIT(lit_393);
DEFLIT(lit_511);
DEFLIT(lit_372);
DEFLIT(lit_617);
DEFLIT(lit_330);
DEFLIT(lit_12);
DEFLIT(lit_412);
DEFLIT(lit_17);
DEFLIT(lit_428);
DEFLIT(lit_467);
DEFLIT(lit_684);
DEFLIT(lit_530);
DEFLIT(lit_722);
DEFLIT(lit_96);
DEFLIT(lit_62);
DEFLIT(lit_317);
DEFLIT(lit_307);
DEFLIT(lit_566);
DEFLIT(lit_653);
DEFLIT(lit_43);
DEFLIT(lit_103);
DEFLIT(lit_345);
DEFLIT(lit_515);
DEFLIT(lit_273);
DEFLIT(lit_510);
DEFLIT(lit_529);
DEFLIT(lit_462);
DEFLIT(lit_316);
DEFLIT(lit_696);
DEFLIT(lit_8);
DEFLIT(lit_110);
DEFLIT(lit_199);
DEFLIT(lit_340);
DEFLIT(lit_694);
DEFLIT(lit_453);
DEFLIT(lit_76);
DEFLIT(lit_251);
DEFLIT(lit_580);
DEFLIT(lit_403);
DEFLIT(lit_718);
DEFLIT(lit_481);
DEFLIT(lit_668);
DEFLIT(lit_485);
DEFLIT(lit_634);
DEFLIT(lit_1);
DEFLIT(lit_360);
DEFLIT(lit_620);
DEFLIT(lit_168);
DEFLIT(lit_170);
DEFLIT(lit_569);
DEFLIT(lit_318);
DEFLIT(lit_509);
DEFLIT(lit_513);
DEFLIT(lit_337);
DEFLIT(lit_725);
DEFLIT(lit_621);
DEFLIT(lit_165);
DEFLIT(lit_465);
DEFLIT(lit_48);
DEFLIT(lit_426);
DEFLIT(lit_431);
DEFLIT(lit_442);
DEFLIT(lit_247);
DEFLIT(lit_297);
DEFLIT(lit_724);
DEFLIT(lit_665);
DEFLIT(lit_690);
DEFLIT(lit_557);
DEFLIT(lit_541);
DEFLIT(lit_257);
DEFLIT(lit_606);
DEFLIT(lit_34);
DEFLIT(lit_669);
DEFLIT(lit_583);
DEFLIT(lit_508);
DEFLIT(lit_673);
DEFLIT(lit_483);
DEFLIT(lit_704);
DEFLIT(lit_590);
DEFLIT(lit_198);
DEFLIT(lit_348);
DEFLIT(lit_593);
DEFLIT(lit_58);
DEFLIT(lit_344);
DEFLIT(lit_67);
DEFLIT(lit_246);
DEFLIT(lit_701);
DEFLIT(lit_32);
DEFLIT(lit_61);
DEFLIT(lit_221);
DEFLIT(lit_85);
DEFLIT(lit_655);
DEFLIT(lit_353);
DEFLIT(lit_681);
DEFLIT(lit_605);
DEFLIT(lit_341);
DEFLIT(lit_149);
DEFLIT(lit_479);
DEFLIT(lit_320);
DEFLIT(lit_231);
DEFLIT(lit_18);
DEFLIT(lit_575);
DEFLIT(lit_196);
DEFLIT(lit_109);
DEFLIT(lit_87);
DEFLIT(lit_249);
DEFLIT(lit_615);
DEFLIT(lit_424);
DEFLIT(lit_648);
DEFLIT(lit_258);
DEFLIT(lit_597);
DEFLIT(lit_355);
DEFLIT(lit_139);
DEFLIT(lit_123);
DEFLIT(lit_705);
DEFLIT(lit_77);
DEFLIT(lit_570);
DEFLIT(lit_658);
DEFLIT(lit_647);
DEFLIT(lit_614);
DEFLIT(lit_476);
DEFLIT(lit_502);
DEFLIT(lit_649);
DEFLIT(lit_136);
DEFLIT(lit_423);
DEFLIT(lit_274);
DEFLIT(lit_564);
DEFLIT(lit_107);
DEFLIT(lit_470);
DEFLIT(lit_646);
DEFLIT(lit_446);
DEFLIT(lit_506);
DEFLIT(lit_166);
DEFLIT(lit_275);
DEFLIT(lit_176);
DEFLIT(lit_368);
DEFLIT(lit_308);
DEFLIT(lit_42);
DEFLIT(lit_678);
DEFLIT(lit_315);
DEFLIT(lit_596);
DEFLIT(lit_367);
DEFLIT(lit_572);
DEFLIT(lit_45);
DEFLIT(lit_311);
DEFLIT(lit_591);
DEFLIT(lit_218);
DEFLIT(lit_75);
DEFLIT(lit_376);
DEFLIT(lit_142);
DEFLIT(lit_406);
DEFLIT(lit_52);
DEFLIT(lit_464);
DEFLIT(lit_115);
DEFLIT(lit_366);
DEFLIT(lit_138);
DEFLIT(lit_576);
DEFLIT(lit_719);
DEFLIT(lit_369);
DEFLIT(lit_371);
DEFLIT(lit_56);
DEFLIT(lit_416);
DEFLIT(lit_375);
DEFLIT(lit_373);
DEFLIT(lit_264);
DEFLIT(lit_679);
DEFLIT(lit_727);
DEFLIT(lit_329);
DEFLIT(lit_633);
DEFLIT(lit_392);
DEFLIT(lit_598);
DEFLIT(lit_631);
DEFLIT(lit_588);
DEFLIT(lit_195);
DEFLIT(lit_105);
DEFLIT(lit_134);
DEFLIT(lit_255);
DEFLIT(lit_602);
DEFLIT(lit_422);
DEFLIT(lit_642);
DEFLIT(lit_517);
DEFLIT(lit_49);
DEFLIT(lit_623);
DEFLIT(lit_119);
DEFLIT(lit_600);
DEFLIT(lit_499);
DEFLIT(lit_137);
DEFLIT(lit_654);
DEFLIT(lit_619);
DEFLIT(lit_584);
DEFLIT(lit_578);
DEFLIT(lit_211);
DEFLIT(lit_236);
DEFLIT(lit_131);
DEFLIT(lit_183);
DEFLIT(lit_133);
DEFLIT(lit_380);
DEFLIT(lit_527);
DEFLIT(lit_364);
DEFLIT(lit_99);
DEFLIT(lit_716);
DEFLIT(lit_201);
DEFLIT(lit_539);
DEFLIT(lit_22);
DEFLIT(lit_563);
DEFLIT(lit_292);
DEFLIT(lit_717);
DEFLIT(lit_455);
DEFLIT(lit_629);
DEFLIT(lit_128);
DEFLIT(lit_571);
DEFLIT(lit_151);
DEFLIT(lit_243);
DEFLIT(lit_495);
DEFLIT(lit_520);
DEFLIT(lit_460);
DEFLIT(lit_74);
DEFLIT(lit_624);
DEFLIT(lit_555);
DEFLIT(lit_217);
DEFLIT(lit_626);
DEFLIT(lit_102);
DEFLIT(lit_339);
DEFLIT(lit_186);
DEFLIT(lit_720);
DEFLIT(lit_281);
DEFLIT(lit_469);
DEFLIT(lit_667);
DEFLIT(lit_127);
DEFLIT(lit_603);
DEFLIT(lit_120);
DEFLIT(lit_261);
DEFLIT(lit_698);
DEFLIT(lit_524);
DEFLIT(lit_39);
DEFLIT(lit_712);
DEFLIT(lit_327);
DEFLIT(lit_554);
DEFLIT(lit_304);
DEFLIT(lit_612);
DEFLIT(lit_295);
DEFLIT(lit_83);
DEFLIT(lit_638);
DEFLIT(lit_282);
DEFLIT(lit_518);
DEFLIT(lit_194);
DEFLIT(lit_272);
DEFLIT(lit_118);
DEFLIT(lit_169);
DEFLIT(lit_277);
DEFLIT(lit_650);
DEFLIT(lit_672);
DEFLIT(lit_185);
DEFLIT(lit_132);
DEFLIT(lit_721);
DEFLIT(lit_472);
DEFLIT(lit_478);
DEFLIT(lit_285);
DEFLIT(lit_449);
DEFLIT(lit_389);
DEFLIT(lit_711);
DEFLIT(lit_100);
DEFLIT(lit_305);
DEFLIT(lit_562);
DEFLIT(lit_130);
DEFLIT(lit_240);
DEFLIT(lit_53);
DEFLIT(lit_561);
DEFLIT(lit_26);
DEFLIT(lit_252);
DEFLIT(lit_359);
DEFLIT(lit_324);
DEFLIT(lit_47);
DEFLIT(lit_636);
DEFLIT(lit_661);
DEFLIT(lit_94);
DEFLIT(lit_471);
DEFLIT(lit_713);
DEFLIT(lit_521);
DEFLIT(lit_444);
DEFLIT(lit_244);
DEFLIT(lit_23);
DEFLIT(lit_184);
DEFLIT(lit_459);
DEFLIT(lit_544);
DEFLIT(lit_723);
DEFLIT(lit_567);
DEFLIT(lit_430);
DEFLIT(lit_5);
DEFLIT(lit_91);
DEFLIT(lit_284);
DEFLIT(lit_189);
DEFLIT(lit_697);
DEFLIT(lit_30);
DEFLIT(lit_507);
DEFLIT(lit_691);
DEFLIT(lit_552);
DEFLIT(lit_71);
DEFLIT(lit_325);
DEFLIT(lit_504);
DEFLIT(lit_173);
DEFLIT(lit_635);
DEFLIT(lit_16);
DEFLIT(lit_10);
DEFLIT(lit_193);
DEFLIT(lit_421);
DEFLIT(lit_33);
DEFLIT(lit_60);
DEFLIT(lit_405);
DEFLIT(lit_314);
DEFLIT(lit_95);
DEFLIT(lit_662);
DEFLIT(lit_250);
DEFLIT(lit_357);
DEFLIT(lit_451);
DEFLIT(lit_682);
DEFLIT(lit_490);
DEFLIT(lit_260);
DEFLIT(lit_179);
DEFLIT(lit_413);
DEFLIT(lit_141);
DEFLIT(lit_660);
DEFLIT(lit_419);
DEFLIT(lit_248);
DEFLIT(lit_242);
DEFLIT(lit_556);
DEFLIT(lit_551);
DEFLIT(lit_98);
DEFLIT(lit_365);
DEFLIT(lit_670);
DEFLIT(lit_349);
DEFLIT(lit_535);
DEFLIT(lit_70);
DEFLIT(lit_443);
DEFLIT(lit_484);
DEFLIT(lit_565);
DEFLIT(lit_223);
DEFLIT(lit_280);
DEFLIT(lit_328);
DEFLIT(lit_204);
DEFLIT(lit_97);
DEFLIT(lit_391);
DEFLIT(lit_404);
DEFLIT(lit_420);
DEFLIT(lit_592);
DEFLIT(lit_309);
DEFLIT(lit_382);
DEFLIT(lit_692);
DEFLIT(lit_342);
DEFLIT(lit_378);
DEFLIT(lit_216);
DEFLIT(lit_714);
DEFLIT(lit_651);
DEFLIT(lit_187);
DEFLIT(lit_547);
DEFLIT(lit_241);
DEFLIT(lit_546);
DEFLIT(lit_323);
DEFLIT(lit_538);
DEFLIT(lit_715);
DEFLIT(lit_220);
DEFLIT(lit_164);
DEFLIT(lit_225);
DEFLIT(lit_213);
DEFLIT(lit_613);
DEFLIT(lit_89);
DEFLIT(lit_445);
DEFLIT(lit_237);
DEFLIT(lit_69);
DEFLIT(lit_322);
DEFLIT(lit_586);
DEFLIT(lit_579);
DEFLIT(lit_454);
DEFLIT(lit_475);
DEFLIT(lit_121);
DEFLIT(lit_41);
DEFLIT(lit_2);
DEFLIT(lit_293);
DEFLIT(lit_351);
DEFLIT(lit_212);
DEFLIT(lit_283);
DEFLIT(lit_493);
DEFLIT(lit_321);
DEFLIT(lit_190);
DEFLIT(lit_192);
DEFLIT(lit_245);
DEFLIT(lit_363);
DEFLIT(lit_253);
DEFLIT(lit_497);
DEFLIT(lit_397);
DEFLIT(lit_487);
DEFLIT(lit_666);
DEFLIT(lit_11);
DEFLIT(lit_28);
DEFLIT(lit_40);
DEFLIT(lit_632);
DEFLIT(lit_336);
DEFLIT(lit_700);
DEFLIT(lit_152);
DEFLIT(lit_135);
DEFLIT(lit_72);
DEFLIT(lit_84);
DEFLIT(lit_232);
DEFLIT(lit_197);
DEFLIT(lit_536);
DEFLIT(lit_286);
DEFLIT(lit_693);
DEFLIT(lit_234);
DEFLIT(lit_532);
DEFLIT(lit_226);
DEFLIT(lit_486);
DEFLIT(lit_313);
DEFLIT(lit_239);
DEFLIT(lit_702);
DEFLIT(lit_19);
DEFLIT(lit_310);
DEFLIT(lit_501);
DEFLIT(lit_625);
DEFLIT(lit_577);
DEFLIT(lit_362);
DEFLIT(lit_540);
DEFLIT(lit_262);
DEFLIT(lit_608);
DEFLIT(lit_206);
DEFLIT(lit_347);
DEFLIT(lit_289);
DEFLIT(lit_288);
DEFLIT(lit_409);
DEFLIT(lit_269);
DEFLIT(lit_270);
DEFLIT(lit_525);
DEFLIT(lit_157);
DEFLIT(lit_558);
DEFLIT(lit_81);
DEFLIT(lit_312);
DEFLIT(lit_346);
DEFLIT(lit_259);
DEFLIT(lit_4);
DEFLIT(lit_86);
DEFLIT(lit_46);
DEFLIT(lit_618);
DEFLIT(lit_148);
DEFLIT(lit_410);
DEFLIT(lit_158);
DEFLIT(lit_114);
DEFLIT(lit_627);
DEFLIT(lit_63);
DEFLIT(lit_643);
DEFLIT(lit_181);
DEFLIT(lit_31);
DEFLIT(lit_80);
DEFLIT(lit_537);
DEFLIT(lit_36);
DEFLIT(lit_13);
DEFLIT(lit_68);
DEFLIT(lit_386);
DEFLIT(lit_104);
DEFLIT(lit_699);
DEFLIT(lit_78);
DEFLIT(lit_108);
DEFLIT(lit_191);
DEFLIT(lit_93);
DEFLIT(lit_528);
DEFLIT(lit_574);
DEFLIT(lit_73);
DEFLIT(lit_29);
DEFLIT(lit_182);
DEFLIT(lit_477);
DEFLIT(lit_319);
DEFLIT(lit_356);
DEFLIT(lit_492);
DEFLIT(lit_503);
DEFLIT(lit_167);
DEFLIT(lit_35);
DEFLIT(lit_609);
DEFLIT(lit_92);
DEFLIT(lit_708);
DEFLIT(lit_438);
DEFLIT(lit_418);
DEFLIT(lit_630);
DEFLIT(lit_298);
DEFLIT(lit_343);
DEFLIT(lit_553);
DEFLIT(lit_398);
DEFLIT(lit_709);
DEFLIT(lit_303);
DEFLIT(lit_379);
DEFLIT(lit_9);
DEFLIT(lit_448);
DEFLIT(lit_37);
DEFLIT(lit_710);
DEFLIT(lit_394);
DEFLIT(lit_395);
DEFLIT(lit_628);
DEFLIT(lit_129);
DEFLIT(lit_374);
DEFLIT(lit_155);
DEFLIT(lit_214);
DEFLIT(lit_439);
DEFLIT(lit_616);
DEFLIT(lit_294);
DEFLIT(lit_265);
DEFLIT(lit_523);
DEFLIT(lit_21);
DEFLIT(lit_641);
DEFLIT(lit_488);
DEFLIT(lit_302);
DEFLIT(lit_585);
DEFLIT(lit_205);
DEFLIT(lit_154);
DEFLIT(lit_437);
DEFLIT(lit_381);
DEFLIT(lit_601);
DEFLIT(lit_402);
DEFLIT(lit_163);
DEFLIT(lit_384);
DEFLIT(lit_112);
DEFLIT(lit_54);
DEFLIT(lit_687);
DEFLIT(lit_3);
DEFLIT(lit_296);

/* FUNCTIONS: */

LOCFOR(fun_module_loader_appname_0);
LOCFOR(fun_module_loader_appname_setter_1);
LOCFOR(fun_module_loader_app_modname_2);
LOCFOR(fun_module_loader_app_modname_setter_3);
LOCFOR(fun_module_src_file_4);
LOCFOR(fun_module_src_file_setter_5);
LOCFOR(fun_module_mtime_6);
LOCFOR(fun_module_mtime_setter_7);
LOCFOR(fun_module_loader_module_type_8);
LOCFOR(fun_9);
LOCFOR(fun_10);
LOCFOR(fun_11);
LOCFOR(fun_12);
LOCFOR(fun_13);
LOCFOR(fun_load_module_14);
FUNFOR(YevalSg2cYmodule_up_to_dateQ);
LOCFOR(fun_16);
LOCFOR(fun_17);
FUNFOR(YevalSg2cYpurge_outdated_modules);
FUNFOR(YevalSg2cYg2c_def_app);
FUNFOR(YevalSg2cYg2c_build_app);
FUNFOR(YevalSg2cYg2c_test);
LOCFOR(fun_22);
LOCFOR(fun_23);
LOCFOR(fun_24);
LOCFOR(fun_25);
LOCFOR(fun_26);
LOCFOR(fun_27);
LOCFOR(fun_g2c_ast_28);
LOCFOR(fun_g2c_exp_29);
LOCFOR(fun_compile_load_30);
LOCFOR(fun_g2c_eval_31);
LOCFOR(fun_g2c_eval_32);
LOCFOR(fun_g2c_top_33);
LOCFOR(fun_g2c_clean_34);
LOCFOR(fun_compute_ast_35);
LOCFOR(fun_compute_program_36);
LOCFOR(fun_generate_c_module_37);
LOCFOR(fun_38);
LOCFOR(fun_39);
LOCFOR(fun_generate_c_application_40);
LOCFOR(fun_x_1544_41);
LOCFOR(fun_42);
LOCFOR(fun_43);
LOCFOR(fun_44);
LOCFOR(fun_45);
LOCFOR(fun_put_obj_46);
LOCFOR(fun_47);
LOCFOR(fun_48);
LOCFOR(fun_49);
LOCFOR(fun_50);
LOCFOR(fun_51);
LOCFOR(fun_52);
LOCFOR(fun_53);
LOCFOR(fun_generate_makefile_54);
LOCFOR(fun_pp_55);
LOCFOR(fun_generate_header_56);
LOCFOR(fun_generate_trailer_57);
LOCFOR(fun_58);
LOCFOR(fun_generate_global_environment_59);
LOCFOR(fun_generate_global_binding_60);
LOCFOR(fun_loop_61);
FUNFOR(YevalSg2cYchar_buffer_as_string);
LOCFOR(fun_loop_63);
LOCFOR(fun_mangle_string_literal_64);
LOCFOR(fun_mangle_string_literal_65);
LOCFOR(fun_process_integer_66);
LOCFOR(fun_mangle_integer_67);
LOCFOR(fun_x_1572_68);
LOCFOR(fun_x_1574_69);
LOCFOR(fun_x_1576_70);
LOCFOR(fun_x_1578_71);
FUNFOR(YevalSg2cYmangler_reset);
LOCFOR(fun_x_1580_73);
FUNFOR(YevalSg2cYmangle_name_into);
LOCFOR(fun_mangle_raw_name_75);
LOCFOR(fun_mangle_raw_name_76);
LOCFOR(fun_mangle_local_name_77);
LOCFOR(fun_mangle_local_name_78);
LOCFOR(fun_x_1584_79);
LOCFOR(fun_80);
LOCFOR(fun_81);
LOCFOR(fun_loop_82);
FUNFOR(YevalSg2cYbuf_cat2X);
LOCFOR(fun_mangle_module_into_84);
LOCFOR(fun_mangle_global_name_85);
LOCFOR(fun_mangle_global_name_86);
FUNFOR(YevalSg2cYmangle_boot_name);
FUNFOR(YevalSg2cYmangle_quotation_name);
LOCFOR(fun_mangle_binding_89);
FUNFOR(YevalSg2cYmangle_local_marked_name);
LOCFOR(fun_mangle_binding_91);
LOCFOR(fun_mangle_binding_92);
LOCFOR(fun_x_1588_93);
LOCFOR(fun_94);
LOCFOR(fun_95);
LOCFOR(fun_x_1592_96);
LOCFOR(fun_97);
LOCFOR(fun_98);
LOCFOR(fun_x_1596_99);
LOCFOR(fun_loop_100);
LOCFOR(fun_101);
LOCFOR(fun_102);
LOCFOR(fun_gen_result_103);
LOCFOR(fun_x_1599_104);
LOCFOR(fun_gen_depth_105);
LOCFOR(fun_x_1603_106);
LOCFOR(fun_107);
LOCFOR(fun_108);
LOCFOR(fun_x_1607_109);
LOCFOR(fun_110);
LOCFOR(fun_111);
LOCFOR(fun_x_1611_112);
LOCFOR(fun_113);
LOCFOR(fun_114);
LOCFOR(fun_x_1613_115);
LOCFOR(fun_generate_quotation_forwards_116);
LOCFOR(fun_x_1616_117);
LOCFOR(fun_generate_quotations_118);
LOCFOR(fun_false_name_119);
LOCFOR(fun_generate_quotation_120);
LOCFOR(fun_generate_quotation_121);
LOCFOR(fun_122);
LOCFOR(fun_generate_quotation_123);
LOCFOR(fun_generate_quotation_124);
LOCFOR(fun_generate_quotation_125);
LOCFOR(fun_loop_126);
LOCFOR(fun_127);
LOCFOR(fun_float_to_c_string_128);
LOCFOR(fun_generate_quotation_129);
LOCFOR(fun_generate_quotation_130);
LOCFOR(fun_x_1626_131);
LOCFOR(fun_generate_quotation_132);
LOCFOR(fun_x_1629_133);
LOCFOR(fun_generate_quotation_134);
LOCFOR(fun_generate_quotation_135);
FUNFOR(YevalSg2cYbinding_Gc);
LOCFOR(fun_reference_Gc_137);
LOCFOR(fun_reference_Gc_138);
LOCFOR(fun_to_c_139);
LOCFOR(fun_to_c_140);
LOCFOR(fun_gen_ref_141);
LOCFOR(fun_gen_ref_142);
LOCFOR(fun_gen_ref_143);
LOCFOR(fun_gen_ref_144);
LOCFOR(fun_gen_ref_145);
LOCFOR(fun_gen_ref_146);
LOCFOR(fun_to_c_147);
LOCFOR(fun_to_c_148);
LOCFOR(fun_to_c_149);
LOCFOR(fun_to_c_150);
LOCFOR(fun_to_c_151);
LOCFOR(fun_to_c_152);
LOCFOR(fun_153);
LOCFOR(fun_to_c_154);
LOCFOR(fun_x_1646_155);
LOCFOR(fun_x_1649_156);
LOCFOR(fun_x_1653_157);
LOCFOR(fun_generate_self_recursive_call_158);
LOCFOR(fun_x_1656_159);
LOCFOR(fun_x_1661_160);
LOCFOR(fun_to_c_161);
LOCFOR(fun_x_1665_162);
LOCFOR(fun_163);
LOCFOR(fun_164);
LOCFOR(fun_to_c_165);
LOCFOR(fun_x_1669_166);
LOCFOR(fun_to_c_167);
LOCFOR(fun_x_1673_168);
LOCFOR(fun_to_c_169);
LOCFOR(fun_to_c_170);
LOCFOR(fun_to_c_171);
LOCFOR(fun_to_c_172);
LOCFOR(fun_x_1678_173);
LOCFOR(fun_x_1684_174);
LOCFOR(fun_175);
LOCFOR(fun_176);
LOCFOR(fun_to_c_177);
LOCFOR(fun_178);
LOCFOR(fun_x_1688_179);
LOCFOR(fun_to_c_180);
LOCFOR(fun_funshell_to_c_181);
LOCFOR(fun_182);
LOCFOR(fun_x_1695_183);
LOCFOR(fun_funinit_to_c_184);
LOCFOR(fun_to_c_185);
LOCFOR(fun_x_1700_186);
LOCFOR(fun_out_list_builder_187);
LOCFOR(fun_188);
LOCFOR(fun_gen_fab_list_189);
LOCFOR(fun_generate_function_specs_190);
LOCFOR(fun_191);
LOCFOR(fun_to_c_192);
LOCFOR(fun_to_c_193);
LOCFOR(fun_x_1704_194);
LOCFOR(fun_generate_function_forwards_195);
LOCFOR(fun_x_1709_196);
LOCFOR(fun_197);
LOCFOR(fun_198);
LOCFOR(fun_generate_function_forward_199);
LOCFOR(fun_generate_function_binding_200);
LOCFOR(fun_generate_function_forward_201);
LOCFOR(fun_202);
LOCFOR(fun_generate_function_bodies_203);
LOCFOR(fun_204);
LOCFOR(fun_generate_functions_205);
LOCFOR(fun_generate_closure_structure_206);
LOCFOR(fun_generate_function_body_reference_207);
LOCFOR(fun_x_1719_208);
LOCFOR(fun_209);
LOCFOR(fun_210);
LOCFOR(fun_generate_shadow_args_211);
LOCFOR(fun_generate_return_212);
LOCFOR(fun_generate_return_213);
LOCFOR(fun_primitive_inlinableQ_214);
LOCFOR(fun_x_1727_215);
LOCFOR(fun_216);
LOCFOR(fun_217);
LOCFOR(fun_generate_function_code_218);
LOCFOR(fun_dispatcherQ_219);
LOCFOR(fun_x_1731_220);
LOCFOR(fun_221);
LOCFOR(fun_222);
LOCFOR(fun_223);
LOCFOR(fun_generate_function_code_224);
LOCFOR(fun_x_1734_225);
LOCFOR(fun_generate_local_temporaries_226);
LOCFOR(fun_next_reg_227);
LOCFOR(fun_next_line_228);
LOCFOR(fun_generate_registers_229);
LOCFOR(fun_module_info_name_230);
LOCFOR(fun_maybe_declare_231);
LOCFOR(fun_232);
FUNFOR(YevalSg2cYdeclare_imported_module_infos);
LOCFOR(fun_x_1737_234);
LOCFOR(fun_235);
LOCFOR(fun_236);
LOCFOR(fun_x_1746_237);
FUNFOR(YevalSg2cYgenerate_module_info);
LOCFOR(fun_module_init_name_239);
LOCFOR(fun_module_init_decl_240);
LOCFOR(fun_x_1752_241);
LOCFOR(fun_x_1757_242);
LOCFOR(fun_generate_module_init_243);
LOCFOR(fun_generate_main_244);
extern P YevalSg2cY___main_0___ ();
extern P YevalSg2cY___main_1___ ();
extern P YevalSg2cY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_module_loader_appname_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSg2cYmodule_loader_appname));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_appname_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSg2cYmodule_loader_appname));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_app_modname_2) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSg2cYmodule_loader_app_modname));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_app_modname_setter_3) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSg2cYmodule_loader_app_modname));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_src_file_4) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSg2cYmodule_src_file));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_src_file_setter_5) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSg2cYmodule_src_file));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_mtime_6) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSg2cYmodule_mtime));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_mtime_setter_7) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSg2cYmodule_mtime));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_module_type_8) {
  P loader_;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YevalSg2cYLg2c_moduleG));
}

FUNCODEDEF(fun_9) {
  P T0,T1,T2;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),FREEREF(0));
  DYNSET(YevalSg2cYTdefinitionsT,T0);
  T2 = BOXVAL(FREEREF(1));
  T1 = CALL4(1,VARREF(YevalSg2cYgenerate_c_module),T2,FREEREF(2),FREEREF(0),FREEREF(3));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_10) {
  P T0;
LINK_STACK();
loop:
  T0 = DYNSET(YevalSg2cYTdefinitionsT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_11) {
  P x_1537F3258;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  x_1537F3258 = DYNREF(YevalSg2cYTdefinitionsT);
  T3 = FUNFAB(fun_9,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T4 = FUNFAB(fun_10,1,x_1537F3258);
  T2 = with_cleanup(T3,T4);
  T1 = T2;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_12) {
  P tmpF3259;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF3259 = T1;
  if (tmpF3259 != YPfalse) {
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

FUNCODEDEF(fun_13) {
  P name_;
  P tmpF3263;
  P src_fileF3262;
  P build_fileF3261;
  P fileF3260;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  fileF3260 = T1;
  T3 = CALL2(1,VARREF(YgooSsystemYadd_build_path),FREEREF(0),fileF3260);
  build_fileF3261 = T3;
  T5 = CALL1(1,VARREF(YgooSsystemYadd_src_path),fileF3260);
  src_fileF3262 = T5;
  T9 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),build_fileF3261);
  T8 = CALL1(1,VARREF(Ynot),T9);
  tmpF3263 = T8;
  if (tmpF3263 != YPfalse) {
    T10 = tmpF3263;
  } else {
    T12 = CALL1(1,VARREF(YgooSsystemYfile_mtime),src_fileF3262);
    T13 = CALL1(1,VARREF(YgooSsystemYfile_mtime),build_fileF3261);
    T11 = CALL2(1,VARREF(YgooSmagYGE),T12,T13);
    T10 = T11;
  }
  T7 = T10;
  if (T7 != YPfalse) {
    T14 = CALL2(1,VARREF(YgooSsystemYfile_copy),src_fileF3262,build_fileF3261);
    T6 = T14;
  } else {
    T6 = YPfalse;
  }
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_module_14) {
  P loader_,name_;
  P out_portF3273;
  P prgF3272;
  P astF3271;
  P out_fileF3270;
  P appnameF3269;
  P src_fileF3268;
  P fileF3267;
  P envF3266;
  P keepmodQF3265;
  P modF3264;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSastYfab_g2c_module),loader_,name_);
  modF3264 = T1;
  keepmodQF3265 = YPfalse;
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),modF3264);
  envF3266 = T4;
  T6 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  fileF3267 = T6;
  T9 = CALL1(1,VARREF(YgooSsystemYgoo_filename),fileF3267);
  T8 = CALL1(1,VARREF(YgooSsystemYadd_src_path),T9);
  src_fileF3268 = T8;
  T11 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF3269 = T11;
  T14 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF3267);
  T13 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF3269,T14);
  out_fileF3270 = T13;
  CALL2(1,VARREF(YevalSg2cYmodule_src_file_setter),src_fileF3268,modF3264);
  T15 = CALL1(1,VARREF(YgooSsystemYfile_mtime),src_fileF3268);
  CALL2(1,VARREF(YevalSg2cYmodule_mtime_setter),T15,modF3264);
  T16 = (P)YPsu(LITREF(lit_22));
  (P)YevalSg2cYPprint_cpu_usage(T16);
  T18 = CALL2(1,VARREF(YevalSg2cYcompute_ast),src_fileF3268,envF3266);
  astF3271 = T18;
  T20 = CALL2(1,VARREF(YevalSg2cYcompute_program),astF3271,envF3266);
  prgF3272 = T20;
  T21 = (P)YPsu(LITREF(lit_23));
  (P)YevalSg2cYPprint_cpu_usage(T21);
  T22 = CALL1(1,VARREF(YgooSsystemYparent_directory),out_fileF3270);
  CALL1(1,VARREF(YgooSsystemYprobe_directory),T22);
  out_portF3273 = YPfalse;
  out_portF3273 = BOXFAB(out_portF3273);
  T25 = FUNFAB(fun_11,5,out_portF3273,out_fileF3270,prgF3272,astF3271,modF3264);
  T26 = FUNFAB(fun_12,1,out_portF3273);
  T24 = with_cleanup(T25,T26);
  T27 = FUNFAB(fun_13,1,appnameF3269);
  T28 = CALL1(1,VARREF(YevalSastYmodule_uses_c_files),modF3264);
  CALL2(1,VARREF(YgooSmacrosYdo),T27,T28);
  T29 = (P)YPsu(LITREF(lit_26));
  (P)YevalSg2cYPprint_cpu_usage(T29);
  T19 = modF3264;
  T17 = T19;
  T12 = T17;
  T10 = T12;
  T7 = T10;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSg2cYmodule_up_to_dateQ) {
  P mod_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_mtime),mod_);
  T3 = CALL1(1,VARREF(YevalSg2cYmodule_src_file),mod_);
  T2 = CALL1(1,VARREF(YgooSsystemYfile_mtime),T3);
  T0 = CALL2(1,VARREF(YgooSmagYGE),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_16) {
  P mod_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSg2cYmodule_up_to_dateQ),mod_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = BOXVAL(FREEREF(0));
    T6 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T4 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T5,T6);
    T3 = BOXVAL(FREEREF(0)) = T4;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_17) {
  P name_;
  P x_1538F3274;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  x_1538F3274 = VARREF(YgooSioSportYout);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1538F3274,name_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1538F3274,LITREF(lit_33));
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYpurge_outdated_modules) {
  P loader_;
  P changedF3275;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
  changedF3275 = Ynil;
  changedF3275 = BOXFAB(changedF3275);
  T2 = FUNFAB(fun_16,1,changedF3275);
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T2,loader_);
  T3 = fun_17;
  T4 = BOXVAL(changedF3275);
  CALL2(1,VARREF(YgooSmacrosYdo),T3,T4);
  T6 = BOXVAL(changedF3275);
  T5 = CALL2(1,VARREF(YevalSastYremove_modules_by_nameX),loader_,T6);
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYg2c_def_app) {
  P appname_,modname_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(appname_, 0);
  ARG(modname_, 1);
loop:
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YevalSg2cYmodule_loader_appname),appname_,VARREF(YevalSg2cYmodule_loader_app_modname),modname_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSg2cYg2c_build_app) {
  P loader_;
  P modF3276;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
  CALL1(1,VARREF(YevalSg2cYpurge_outdated_modules),loader_);
  T2 = CALL1(1,VARREF(YevalSg2cYmodule_loader_app_modname),loader_);
  T1 = CALL2(1,VARREF(YevalSastYprobe_module),loader_,T2);
  modF3276 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),VARREF(YgooSioSportYout),LITREF(lit_38));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),VARREF(YevalSastYreport_undefined_global_bindings),loader_);
  CALL2(1,VARREF(YevalSg2cYgenerate_c_application),loader_,modF3276);
  CALL1(1,VARREF(YevalSg2cYgenerate_makefile),loader_);
  T0 = YPfalse;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYg2c_test) {
  P x_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T3 = CALL1(1,VARREF(YgooSmathYto_str),x_);
  T2 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_41),T3);
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_def_app),T2,LITREF(lit_42));
  T0 = VARSET(YevalSg2cYTg2c_appT,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_22) {
  P T0,T1,T2;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),FREEREF(0));
  DYNSET(YevalSg2cYTdefinitionsT,T0);
  T2 = BOXVAL(FREEREF(1));
  T1 = CALL4(1,VARREF(YevalSg2cYgenerate_c_module),T2,FREEREF(2),FREEREF(0),FREEREF(3));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_23) {
  P T0;
LINK_STACK();
loop:
  T0 = DYNSET(YevalSg2cYTdefinitionsT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_24) {
  P x_1540F3277;
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  DYNSET(YevalSg2cYTdynamic_linkingQT,YPtrue);
  x_1540F3277 = DYNREF(YevalSg2cYTdefinitionsT);
  T2 = FUNFAB(fun_22,4,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  T3 = FUNFAB(fun_23,1,x_1540F3277);
  T1 = with_cleanup(T2,T3);
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_25) {
  P T0;
LINK_STACK();
loop:
  T0 = DYNSET(YevalSg2cYTdynamic_linkingQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_26) {
  P x_1539F3278;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  x_1539F3278 = DYNREF(YevalSg2cYTdynamic_linkingQT);
  T3 = FUNFAB(fun_24,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T4 = FUNFAB(fun_25,1,x_1539F3278);
  T2 = with_cleanup(T3,T4);
  T1 = T2;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_27) {
  P tmpF3279;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF3279 = T1;
  if (tmpF3279 != YPfalse) {
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

FUNCODEDEF(fun_g2c_ast_28) {
  P ast_,env_;
  P out_portF3285;
  P prgF3284;
  P out_fileF3283;
  P fileF3282;
  P nameF3281;
  P modF3280;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYenvironment_module),env_);
  modF3280 = T1;
  T4 = CALL0(1,VARREF(YgooSsystemYprocess_id));
  T6 = CALL2(1,VARREF(YgooSmathYA),DYNREF(YevalSg2cYTtmp_file_counterT),YPint((P)1));
  T5 = DYNSET(YevalSg2cYTtmp_file_counterT,T6);
  T3 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_45),T4,T5);
  nameF3281 = T3;
  T8 = CALL1(1,VARREF(YgooSsystemYadd_tmp_path),nameF3281);
  fileF3282 = T8;
  T10 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF3282);
  out_fileF3283 = T10;
  T12 = CALL2(1,VARREF(YevalSg2cYcompute_program),ast_,env_);
  prgF3284 = T12;
  out_portF3285 = YPfalse;
  out_portF3285 = BOXFAB(out_portF3285);
  T15 = FUNFAB(fun_26,5,out_portF3285,out_fileF3283,prgF3284,ast_,modF3280);
  T16 = FUNFAB(fun_27,1,out_portF3285);
  T14 = with_cleanup(T15,T16);
  T11 = fileF3282;
  T9 = T11;
  T7 = T9;
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_exp_29) {
  P exp_,env_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(exp_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),exp_,env_,YPfalse);
  T0 = CALL2(1,VARREF(YevalSg2cYg2c_ast),T1,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_compile_load_30) {
  P name_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),name_,VARREF(YgooSsystemYTc_extensionT));
  T0 = (P)YPsu(T1);
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),name_,LITREF(lit_50));
  T2 = (P)YPsu(T3);
  (P)YgooSsystemYPcompile(T0,T2);
  T6 = CALL2(1,VARREF(YgooSmacrosYcat),name_,LITREF(lit_51));
  T5 = (P)YPsu(T6);
  T4 = (P)YgooSsystemYPload(T5);
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(fun_g2c_eval_31) {
  P exp_,env_;
  P nameF3286;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(exp_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_exp),exp_,env_);
  nameF3286 = T1;
  T2 = CALL1(1,VARREF(YevalSg2cYcompile_load),nameF3286);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_eval_32) {
  P ast_,env_;
  P nameF3287;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_ast),ast_,env_);
  nameF3287 = T1;
  T2 = CALL1(1,VARREF(YevalSg2cYcompile_load),nameF3287);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_top_33) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YevalSg2cYg2c_build_app),VARREF(YevalSg2cYTg2c_appT));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_clean_34) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YevalSg2cYg2c_def_app),LITREF(lit_58),LITREF(lit_42));
  VARSET(YevalSg2cYTg2c_appT,T0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_compute_ast_35) {
  P filename_,ct_env_;
  P astF3289;
  P sexprF3288;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(filename_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalStopYread_file),filename_);
  sexprF3288 = T1;
  T2 = (P)YPsu(LITREF(lit_61));
  (P)YevalSg2cYPprint_cpu_usage(T2);
  T4 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),sexprF3288,ct_env_,YPfalse);
  astF3289 = T4;
  T5 = (P)YPsu(LITREF(lit_62));
  (P)YevalSg2cYPprint_cpu_usage(T5);
  T3 = astF3289;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_compute_program_36) {
  P e_,env_;
  P fltF3294;
  P prgF3293;
  P lftF3292;
  P anaF3291;
  P boxF3290;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),e_);
  boxF3290 = T1;
  T2 = (P)YPsu(LITREF(lit_65));
  (P)YevalSg2cYPprint_cpu_usage(T2);
  T4 = CALL1(1,VARREF(YevalSast_linearizeYanalyze_ast),boxF3290);
  anaF3291 = T4;
  T5 = (P)YPsu(LITREF(lit_66));
  (P)YevalSg2cYPprint_cpu_usage(T5);
  T7 = CALL1(1,VARREF(YevalSast_linearizeYliftX),anaF3291);
  lftF3292 = T7;
  T8 = (P)YPsu(LITREF(lit_67));
  (P)YevalSg2cYPprint_cpu_usage(T8);
  T10 = CALL1(1,VARREF(YevalSast_linearizeYextract_thingsX),lftF3292);
  prgF3293 = T10;
  T11 = (P)YPsu(LITREF(lit_68));
  (P)YevalSg2cYPprint_cpu_usage(T11);
  T13 = CALL3(1,VARREF(YevalSast_linearizeYclosurize_mainX),prgF3293,env_,YPint((P)64));
  fltF3294 = T13;
  T14 = (P)YPsu(LITREF(lit_69));
  (P)YevalSg2cYPprint_cpu_usage(T14);
  CALL1(1,VARREF(YevalSast_linearizeYgather_temporariesX),fltF3294);
  T15 = (P)YPsu(LITREF(lit_70));
  (P)YevalSg2cYPprint_cpu_usage(T15);
  CALL2(1,VARREF(YevalSast_linearizeYregister_allocateX),fltF3294,YPfalse);
  T16 = (P)YPsu(LITREF(lit_71));
  (P)YevalSg2cYPprint_cpu_usage(T16);
  T12 = prgF3293;
  T9 = T12;
  T6 = T9;
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_c_module_37) {
  P code_out_,e_,prg_,mod_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(e_, 1);
  ARG(prg_, 2);
  ARG(mod_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  CALL2(1,VARREF(YevalSg2cYgenerate_header),code_out_,T0);
  CALL2(1,VARREF(YevalSg2cYgenerate_global_environment),code_out_,mod_);
  T1 = CALL1(1,VARREF(YevalSast_linearizeYprogram_quotations),prg_);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation_forwards),code_out_,T1);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),prg_);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_forwards),code_out_,T2);
  T3 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),prg_);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_bodies),code_out_,T3);
  T4 = CALL1(1,VARREF(Ynot),DYNREF(YevalSg2cYTdynamic_linkingQT));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YevalSg2cYgenerate_module_info),code_out_,mod_);
  } else {
  }
  T6 = CALL1(1,VARREF(YevalSast_linearizeYprogram_form),prg_);
  CALL3(1,VARREF(YevalSg2cYgenerate_module_init),code_out_,mod_,T6);
  CALL1(1,VARREF(YevalSg2cYgenerate_trailer),code_out_);
UNLINK_STACK();
  QRET(prg_);
}

FUNCODEDEF(fun_38) {
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T1 = BOXVAL(FREEREF(0));
  CALL2(1,VARREF(YevalSg2cYgenerate_header),T1,FREEREF(2));
  T2 = BOXVAL(FREEREF(0));
  CALL2(1,VARREF(YevalSg2cYgenerate_main),T2,FREEREF(3));
  T4 = BOXVAL(FREEREF(0));
  T3 = CALL1(1,VARREF(YevalSg2cYgenerate_trailer),T4);
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_39) {
  P tmpF3295;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF3295 = T1;
  if (tmpF3295 != YPfalse) {
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

FUNCODEDEF(fun_generate_c_application_40) {
  P loader_,mod_;
  P out_portF3299;
  P out_nameF3298;
  P init_nameF3297;
  P appnameF3296;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF3296 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF3296,LITREF(lit_76));
  init_nameF3297 = T3;
  T6 = CALL1(1,VARREF(YgooSsystemYc_filename),init_nameF3297);
  T5 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF3296,T6);
  out_nameF3298 = T5;
  out_portF3299 = YPfalse;
  out_portF3299 = BOXFAB(out_portF3299);
  T9 = FUNFAB(fun_38,4,out_portF3299,out_nameF3298,appnameF3296,mod_);
  T10 = FUNFAB(fun_39,1,out_portF3299);
  T8 = with_cleanup(T9,T10);
  T4 = YPfalse;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1544_41) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_81),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_42) {
  P return_;
  P x_1543F3314;
  P x_1543F3313;
  P x_1543F3312;
  P x_1543F3311;
  P x_1543F3310;
  P x_1543F3309;
  P x_1543F3308;
  P x_1543F3307;
  P x_1543F3306;
  P x_1543F3305;
  P bodyF3304;
  P loaderF3303;
  P modF3302;
  P x_1543F3301;
  P x_1544F3300;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1544_41,2);
  x_1544F3300 = T1;
  FUNINIT(x_1544F3300, 2,FREEREF(0),return_);
  x_1543F3301 = FREEREF(0);
  modF3302 = YPfalse;
  modF3302 = BOXFAB(modF3302);
  loaderF3303 = YPfalse;
  loaderF3303 = BOXFAB(loaderF3303);
  bodyF3304 = YPfalse;
  bodyF3304 = BOXFAB(bodyF3304);
  T9 = CALL2(1,VARREF(YisaQ),x_1543F3301,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1543F3301,LITREF(lit_81),x_1544F3300);
    x_1543F3305 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1543F3305,x_1544F3300);
    x_1543F3306 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1543F3306,x_1544F3300);
    BOXVAL(modF3302) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1543F3306);
    x_1543F3307 = T16;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1543F3307,x_1544F3300);
    BOXVAL(loaderF3303) = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1543F3307);
    x_1543F3308 = T19;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1543F3308,x_1544F3300);
    x_1543F3309 = T21;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1543F3309,x_1544F3300);
    T23 = CALL1(1,VARREF(Ytail),x_1543F3308);
    x_1543F3310 = T23;
    T24 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1543F3310,x_1544F3300);
    T20 = T24;
    T17 = T20;
    T14 = T17;
    T25 = CALL1(1,VARREF(Ytail),x_1543F3305);
    x_1543F3311 = T25;
    BOXVAL(bodyF3304) = x_1543F3311;
    x_1543F3312 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1543F3312,x_1544F3300);
    x_1543F3313 = T28;
    T29 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1543F3313,x_1544F3300);
    T30 = CALL1(1,VARREF(Ytail),x_1543F3312);
    x_1543F3314 = T30;
    T31 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1543F3314,x_1544F3300);
    T27 = T31;
    T26 = T27;
    T12 = T26;
    T10 = T12;
  } else {
    T32 = CALL2(1,x_1544F3300,LITREF(lit_82),x_1543F3301);
  }
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_83));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T41 = BOXVAL(modF3302);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T39 = CALL2(1,VARREF(YgooSmacrosYcat),T40,LITREF(lit_85));
  T38 = CALL1(1,VARREF(Ylst),T39);
  T42 = BOXVAL(bodyF3304);
  T36 = CALL4(1,VARREF(YgooSmacrosYcat),T37,T38,T42,LITREF(lit_85));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T44 = BOXVAL(loaderF3303);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T35,T43,LITREF(lit_85));
  T7 = T33;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_43) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_42,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_44) {
  P i_;
  P x_1548F3315;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = BOXVAL(FREEREF(0));
  x_1548F3315 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_1548F3315,LITREF(lit_97));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1548F3315,i_);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1548F3315,LITREF(lit_98));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_45) {
  P mod_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T1 = FUNFAB(fun_44,1,FREEREF(0));
  T2 = CALL1(1,VARREF(YevalSastYmodule_uses_c_includes),mod_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_put_obj_46) {
  P name_;
  P x_1551F3316;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = BOXVAL(FREEREF(0));
  x_1551F3316 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_1551F3316,LITREF(lit_104));
  T3 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  T2 = CALL1(1,VARREF(YgooSsystemYobj_filename),T3);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1551F3316,T2);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1551F3316,LITREF(lit_105));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_47) {
  P name_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooScolsSseqYsuffixQ),name_,LITREF(lit_107));
  if (T1 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooStypesYlen),name_);
    T5 = CALL2(1,VARREF(YgooSmathY_),T6,YPint((P)2));
    T4 = CALL3(1,VARREF(YgooScolsSseqYsub),name_,YPint((P)0),T5);
    T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T4);
    T2 = CALL1(0,FREEREF(0),T3);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_48) {
  P n_;
  P T0;
  P a1;
LINK_STACK();
  ARG(n_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),n_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  P mod_;
  P put_objF3317;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T1 = FUNSHELL(1,fun_put_obj_46,1);
  put_objF3317 = T1;
  FUNINIT(put_objF3317, 1,FREEREF(0));
  T2 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  CALL1(0,put_objF3317,T2);
  T4 = FUNFAB(fun_47,1,put_objF3317);
  T6 = fun_48;
  T7 = CALL1(1,VARREF(YevalSastYmodule_uses_c_files),mod_);
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),T6,T7);
  T3 = CALL2(1,VARREF(YgooSmacrosYdo),T4,T5);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_50) {
  P l_;
  P x_1555F3318;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(l_, 0);
loop:
  T1 = BOXVAL(FREEREF(0));
  x_1555F3318 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_1555F3318,LITREF(lit_116));
  T2 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1555F3318,l_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_51) {
  P mod_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T1 = FUNFAB(fun_50,1,FREEREF(0));
  T2 = CALL1(1,VARREF(YevalSastYmodule_uses_c_libraries),mod_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_52) {
  P x_1556F3327;
  P x_1554F3326;
  P x_1553F3325;
  P x_1552F3324;
  P x_1550F3323;
  P x_1549F3322;
  P x_1547F3321;
  P x_1546F3320;
  P x_1545F3319;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T1 = BOXVAL(FREEREF(0));
  x_1545F3319 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_1545F3319,LITREF(lit_90));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1545F3319,FREEREF(2));
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1545F3319,LITREF(lit_91));
  T3 = BOXVAL(FREEREF(0));
  x_1546F3320 = T3;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1546F3320,VARREF(YgooSsystemYTc_extensionT));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1546F3320,VARREF(YgooSsystemYTobj_extensionT));
  CALL2(1,VARREF(YgooSioSportYputs),x_1546F3320,LITREF(lit_92));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1546F3320,FREEREF(2));
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1546F3320,LITREF(lit_93));
  T5 = BOXVAL(FREEREF(0));
  x_1547F3321 = T5;
  T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1547F3321,LITREF(lit_94));
  T7 = FUNFAB(fun_45,1,FREEREF(0));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T7,FREEREF(3));
  T8 = BOXVAL(FREEREF(0));
  x_1549F3322 = T8;
  T9 = CALL2(1,VARREF(YgooSioSportYputs),x_1549F3322,LITREF(lit_99));
  T10 = BOXVAL(FREEREF(0));
  x_1550F3323 = T10;
  T11 = CALL2(1,VARREF(YgooSioSportYputs),x_1550F3323,LITREF(lit_100));
  T12 = FUNFAB(fun_49,1,FREEREF(0));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T12,FREEREF(3));
  T13 = BOXVAL(FREEREF(0));
  x_1552F3324 = T13;
  CALL2(1,VARREF(YgooSioSportYputs),x_1552F3324,LITREF(lit_109));
  T14 = CALL1(1,VARREF(YgooSsystemYobj_filename),FREEREF(4));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1552F3324,T14);
  T15 = CALL2(1,VARREF(YgooSioSportYputs),x_1552F3324,LITREF(lit_110));
  T16 = BOXVAL(FREEREF(0));
  x_1553F3325 = T16;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1553F3325,FREEREF(5));
  T17 = CALL2(1,VARREF(YgooSioSportYputs),x_1553F3325,LITREF(lit_111));
  T18 = BOXVAL(FREEREF(0));
  x_1554F3326 = T18;
  CALL2(1,VARREF(YgooSioSportYputs),x_1554F3326,LITREF(lit_112));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1554F3326,FREEREF(5));
  T19 = CALL2(1,VARREF(YgooSioSportYputs),x_1554F3326,LITREF(lit_113));
  T20 = FUNFAB(fun_51,1,FREEREF(0));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T20,FREEREF(3));
  T22 = BOXVAL(FREEREF(0));
  x_1556F3327 = T22;
  CALL2(1,VARREF(YgooSioSportYputs),x_1556F3327,LITREF(lit_117));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1556F3327,FREEREF(5));
  T23 = CALL2(1,VARREF(YgooSioSportYputs),x_1556F3327,LITREF(lit_118));
  T21 = T23;
UNLINK_STACK();
  QRET(T21);
}

FUNCODEDEF(fun_53) {
  P tmpF3328;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF3328 = T1;
  if (tmpF3328 != YPfalse) {
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

FUNCODEDEF(fun_generate_makefile_54) {
  P loader_;
  P code_outF3334;
  P out_nameF3333;
  P sepF3332;
  P exe_nameF3331;
  P init_nameF3330;
  P appnameF3329;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF3329 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF3329,LITREF(lit_88));
  init_nameF3330 = T3;
  T5 = CALL1(1,VARREF(YgooSsystemYexe_filename),appnameF3329);
  exe_nameF3331 = T5;
  sepF3332 = VARREF(YgooSsystemYTpath_separatorT);
  T8 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF3329,LITREF(lit_89));
  out_nameF3333 = T8;
  code_outF3334 = YPfalse;
  code_outF3334 = BOXFAB(code_outF3334);
  T12 = FUNFAB(fun_52,6,code_outF3334,out_nameF3333,sepF3332,loader_,init_nameF3330,exe_nameF3331);
  T13 = FUNFAB(fun_53,1,code_outF3334);
  T11 = with_cleanup(T12,T13);
  T9 = T11;
  T7 = T9;
  T6 = T7;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pp_55) {
  P e_,code_out_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite),code_out_,e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_header_56) {
  P code_out_,modname_;
  P x_1565F3344;
  P x_1564F3343;
  P x_1563F3342;
  P x_1562F3341;
  P x_1561F3340;
  P x_1560F3339;
  P x_1559F3338;
  P x_1558F3337;
  P x_1557F3336;
  P modvarF3335;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(modname_, 1);
loop:
  modvarF3335 = VARREF(YevalSg2cYDnow_mod_var_name);
  x_1557F3336 = code_out_;
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1557F3336,LITREF(lit_124));
  x_1558F3337 = code_out_;
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1558F3337,LITREF(lit_125));
  if (DYNREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    x_1559F3338 = code_out_;
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1559F3338,LITREF(lit_126));
    T3 = T4;
  } else {
  }
  x_1560F3339 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1560F3339,LITREF(lit_127));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1560F3339,modvarF3335);
  T5 = CALL2(1,VARREF(YgooSioSportYputs),x_1560F3339,LITREF(lit_128));
  x_1561F3340 = code_out_;
  T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1561F3340,LITREF(lit_129));
  x_1562F3341 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1562F3341,LITREF(lit_130));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1562F3341,modvarF3335);
  CALL2(1,VARREF(YgooSioSportYputs),x_1562F3341,LITREF(lit_131));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1562F3341,modvarF3335);
  T7 = CALL2(1,VARREF(YgooSioSportYputs),x_1562F3341,LITREF(lit_132));
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),code_out_,modname_);
  x_1563F3342 = code_out_;
  T8 = CALL2(1,VARREF(YgooSioSportYputs),x_1563F3342,LITREF(lit_133));
  x_1564F3343 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1564F3343,LITREF(lit_134));
  T9 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_135));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1564F3343,T9);
  CALL2(1,VARREF(YgooSioSportYputs),x_1564F3343,LITREF(lit_136));
  T10 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_137));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1564F3343,T10);
  CALL2(1,VARREF(YgooSioSportYputs),x_1564F3343,LITREF(lit_138));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1564F3343,modvarF3335);
  T11 = CALL2(1,VARREF(YgooSioSportYputs),x_1564F3343,LITREF(lit_139));
  x_1565F3344 = code_out_;
  T13 = CALL2(1,VARREF(YgooSioSportYputs),x_1565F3344,LITREF(lit_140));
  T12 = T13;
  T0 = T12;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_trailer_57) {
  P code_out_;
  P x_1566F3345;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(code_out_, 0);
loop:
  x_1566F3345 = code_out_;
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1566F3345,LITREF(lit_143));
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_58) {
  P binding_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T2 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(1));
  T1 = CALL1(1,VARREF(Ynot),T2);
  T0 = CALL3(1,VARREF(YevalSg2cYgenerate_global_binding),FREEREF(0),T1,binding_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_global_environment_59) {
  P code_out_,mod_;
  P x_1567F3346;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  x_1567F3346 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1567F3346,LITREF(lit_146));
  T0 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1567F3346,T0);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1567F3346,LITREF(lit_147));
  T3 = FUNFAB(fun_58,2,code_out_,mod_);
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T2 = CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T3,T4);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_generate_global_binding_60) {
  P code_out_,importedQ_,gb_;
  P x_1570F3353;
  P x_1569F3352;
  P x_1568F3351;
  P nameF3350;
  P tmpF3349;
  P tmpF3348;
  P kindF3347;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1,a2,a3;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(importedQ_, 1);
  ARG(gb_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),gb_);
  kindF3347 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),kindF3347,LITREF(lit_151));
  tmpF3348 = T4;
  if (tmpF3348 != YPfalse) {
    T5 = tmpF3348;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),kindF3347,LITREF(lit_152));
    tmpF3349 = T7;
    if (tmpF3349 != YPfalse) {
      T8 = tmpF3349;
    } else {
      T9 = CALL2(1,VARREF(YgooSmacrosYEE),kindF3347,LITREF(lit_153));
      T8 = T9;
    }
    T6 = T8;
    T5 = T6;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T11 = CALL1(1,VARREF(YevalSastYbinding_name),gb_);
    nameF3350 = T11;
    x_1568F3351 = kindF3347;
    x_1569F3352 = VARREF(YgooSmacrosYEE);
    T15 = CALL2(1,x_1569F3352,x_1568F3351,LITREF(lit_152));
    if (T15 != YPfalse) {
      T14 = LITREF(lit_154);
    } else {
      T17 = CALL2(1,x_1569F3352,x_1568F3351,LITREF(lit_153));
      if (T17 != YPfalse) {
        T16 = LITREF(lit_155);
      } else {
        T16 = LITREF(lit_156);
      }
      T14 = T16;
    }
    T13 = T14;
    T12 = T13;
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,T12);
    x_1570F3353 = code_out_;
    if (importedQ_ != YPfalse) {
      T19 = LITREF(lit_157);
    } else {
      T19 = LITREF(lit_158);
    }
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1570F3353,T19);
    CALL2(1,VARREF(YgooSioSportYputs),x_1570F3353,LITREF(lit_159));
    T20 = CALL1(1,VARREF(YevalSg2cYmangle_binding),gb_);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1570F3353,T20);
    CALL2(1,VARREF(YgooSioSportYputs),x_1570F3353,LITREF(lit_160));
    T22 = CALL1(1,VARREF(YevalSastYbinding_module_name),gb_);
    T21 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T22);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1570F3353,T21);
    CALL2(1,VARREF(YgooSioSportYputs),x_1570F3353,LITREF(lit_161));
    T23 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),nameF3350);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1570F3353,T23);
    T24 = CALL2(1,VARREF(YgooSioSportYputs),x_1570F3353,LITREF(lit_162));
    T18 = T24;
    T10 = T18;
    T2 = T10;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_61) {
  P i_;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooScolsScolYlow_elt),FREEREF(1),i_);
    CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),T2,FREEREF(2),i_);
    T4 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T4;
    i_ = a1;
    goto loop;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYchar_buffer_as_string) {
  P buffer_;
  P loopF3356;
  P stringF3355;
  P buffer_sizeF3354;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(buffer_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),buffer_);
  check_type(T1,VARREF(YLintG));
  buffer_sizeF3354 = T1;
  T3 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YLstrG),buffer_sizeF3354);
  check_type(T3,VARREF(YLstrG));
  stringF3355 = T3;
  T4 = FUNSHELL(1,fun_loop_61,4);
  loopF3356 = T4;
  FUNINIT(loopF3356, 4,buffer_sizeF3354,buffer_,stringF3355,loopF3356);
  T5 = CALL1(0,loopF3356,YPint((P)0));
  T2 = stringF3355;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_63) {
  P i_;
  P encF3358;
  P cF3357;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),YPchr((P)34));
    T2 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(1),i_);
    cF3357 = T4;
    T7 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),cF3357);
    T6 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDc_escapes),T7);
    encF3358 = T6;
    T8 = CALL2(1,VARREF(YgooSmathYE),encF3358,YPfalse);
    if (T8 != YPfalse) {
      T9 = CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),cF3357);
    } else {
      T10 = CALL2(1,VARREF(YgooScolsSseqxYcatX),VARREF(YevalSg2cYTmangle_bufferT),encF3358);
    }
    T12 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T12;
    i_ = a1;
    goto loop;
    T5 = T11;
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_string_literal_64) {
  P str_;
  P loopF3360;
  P lenF3359;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(str_, 0);
loop:
  CALL2(1,VARREF(YgooScolsScolxYlen_setter),YPint((P)0),VARREF(YevalSg2cYTmangle_bufferT));
  T1 = CALL1(1,VARREF(YgooStypesYlen),str_);
  lenF3359 = T1;
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),YPchr((P)34));
  T3 = FUNSHELL(1,fun_loop_63,3);
  loopF3360 = T3;
  FUNINIT(loopF3360, 3,lenF3359,str_,loopF3360);
  T4 = CALL1(0,loopF3360,YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_string_literal_65) {
  P sym_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(sym_, 0);
loop:
  T1 = CALL1(1,VARREF(Ysym_name),sym_);
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_process_integer_66) {
  P number_,index_;
  P resultF3366;
  P resultF3365;
  P digitF3364;
  P remainderF3363;
  P quotientF3362;
  P tup32F3361;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2;
LINK_STACK();
  ARG(number_, 0);
  ARG(index_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYtruncS),number_,YPint((P)10));
  tup32F3361 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup32F3361,YPint((P)0));
  check_type(T3,VARREF(YLintG));
  quotientF3362 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup32F3361,YPint((P)1));
  check_type(T5,VARREF(YLintG));
  remainderF3363 = T5;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDnumber_characters),remainderF3363);
  check_type(T7,VARREF(YLchrG));
  digitF3364 = T7;
  T9 = CALL2(1,VARREF(YgooSmathYE),quotientF3362,YPint((P)0));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),index_);
    check_type(T11,VARREF(YgooScolsSvecYLvecG));
    resultF3365 = T11;
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),digitF3364,resultF3365,YPint((P)0));
    T10 = resultF3365;
    T8 = T10;
  } else {
    T14 = CALL2(1,VARREF(YgooSmathYA),index_,YPint((P)1));
    T13 = CALL2(1,FREEREF(0),quotientF3362,T14);
    check_type(T13,VARREF(YgooScolsSvecYLvecG));
    resultF3366 = T13;
    T16 = CALL1(1,VARREF(YgooStypesYlen),resultF3366);
    T15 = CALL2(1,VARREF(YgooSmathY_),T16,index_);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),digitF3364,resultF3366,T15);
    T12 = resultF3366;
    T8 = T12;
  }
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_integer_67) {
  P number_;
  P process_integerF3367;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(number_, 0);
loop:
  T2 = FUNSHELL(1,fun_process_integer_66,1);
  process_integerF3367 = T2;
  FUNINIT(process_integerF3367, 1,process_integerF3367);
  T3 = CALL2(1,process_integerF3367,number_,YPint((P)1));
  T1 = T3;
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1572_68) {
  P x_1571_;
  P iF3368;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_1571_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1571_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1571_);
    iF3368 = T4;
    T6 = CALL1(1,VARREF(YevalSg2cYmangle_integer),iF3368);
    T5 = CALL3(1,VARREF(YgooSmacrosYcat),VARREF(YevalSg2cYDescape_separator),T6,VARREF(YevalSg2cYDescape_separator));
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,FREEREF(0),iF3368);
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1571_);
    a1 = T8;
    x_1571_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1574_69) {
  P x_1573_;
  P mangleF3369;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_1573_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1573_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1573_);
    mangleF3369 = T4;
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),mangleF3369,YPint((P)1));
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),mangleF3369,YPint((P)0));
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T7);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,FREEREF(0),T6);
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1573_);
    a1 = T9;
    x_1573_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1576_70) {
  P x_1575_;
  P iF3370;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(x_1575_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1575_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1575_);
    iF3370 = T4;
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF3370);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,FREEREF(0),iF3370);
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1575_);
    a1 = T7;
    x_1575_ = a1;
    goto loop;
    T3 = T6;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1578_71) {
  P x_1577_;
  P iF3371;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(x_1577_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1577_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1577_);
    iF3371 = T4;
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF3371);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,FREEREF(0),iF3371);
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1577_);
    a1 = T7;
    x_1577_ = a1;
    goto loop;
    T3 = T6;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYmangler_reset) {
  P buffer_;
  P T0;
  P a1;
LINK_STACK();
  ARG(buffer_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolxYlen_setter),YPint((P)0),buffer_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1580_73) {
  P x_1579_;
  P cF3372;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_1579_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1579_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1579_);
    cF3372 = T4;
    T7 = CALL1(1,VARREF(YgooSmathYto_lower),cF3372);
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T7);
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDname_mangler_table),T6);
    CALL2(1,VARREF(YgooScolsScolxYaddX),FREEREF(0),T5);
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1579_);
    a1 = T9;
    x_1579_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYmangle_name_into) {
  P buf_,name_;
  P x_1580F3373;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(buf_, 0);
  ARG(name_, 1);
loop:
  T0 = FUNSHELL(1,fun_x_1580_73,2);
  x_1580F3373 = T0;
  FUNINIT(x_1580F3373, 2,buf_,x_1580F3373);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),name_);
  T1 = CALL1(0,x_1580F3373,T2);
UNLINK_STACK();
  QRET(buf_);
}

FUNCODEDEF(fun_mangle_raw_name_75) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  T0 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_raw_name_76) {
  P name_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_local_name_77) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDlocal_marker));
  T0 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_local_name_78) {
  P name_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_local_name),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1584_79) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_230),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_80) {
  P return_;
  P x_1583F3382;
  P x_1583F3381;
  P x_1583F3380;
  P x_1583F3379;
  P x_1583F3378;
  P valueF3377;
  P placeF3376;
  P x_1583F3375;
  P x_1584F3374;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1584_79,2);
  x_1584F3374 = T1;
  FUNINIT(x_1584F3374, 2,FREEREF(0),return_);
  x_1583F3375 = FREEREF(0);
  placeF3376 = YPfalse;
  placeF3376 = BOXFAB(placeF3376);
  valueF3377 = YPfalse;
  valueF3377 = BOXFAB(valueF3377);
  T7 = CALL2(1,VARREF(YisaQ),x_1583F3375,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1583F3375,LITREF(lit_230),x_1584F3374);
    x_1583F3378 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1583F3378,x_1584F3374);
    BOXVAL(placeF3376) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1583F3378);
    x_1583F3379 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1583F3379,x_1584F3374);
    BOXVAL(valueF3377) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1583F3379);
    x_1583F3380 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1583F3380,x_1584F3374);
    x_1583F3381 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1583F3381,x_1584F3374);
    T19 = CALL1(1,VARREF(Ytail),x_1583F3380);
    x_1583F3382 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1583F3382,x_1584F3374);
    T16 = T20;
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T21 = CALL2(1,x_1584F3374,LITREF(lit_82),x_1583F3375);
  }
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_231));
  T25 = BOXVAL(placeF3376);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_232));
  T30 = BOXVAL(placeF3376);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T32 = BOXVAL(valueF3377);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T27 = CALL4(1,VARREF(YgooSmacrosYcat),T28,T29,T31,LITREF(lit_85));
  T26 = CALL1(1,VARREF(Ylst),T27);
  T22 = CALL4(1,VARREF(YgooSmacrosYcat),T23,T24,T26,LITREF(lit_85));
  T5 = T22;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_81) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_80,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_82) {
  P i_;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooScolsScolYlow_elt),FREEREF(2),i_);
    CALL2(1,VARREF(YgooScolsScolxYaddX),FREEREF(1),T2);
    T4 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T4;
    i_ = a1;
    goto loop;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYbuf_cat2X) {
  P buf_,name_;
  P loopF3384;
  P lenF3383;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(buf_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),name_);
  lenF3383 = T1;
  T3 = FUNSHELL(1,fun_loop_82,4);
  loopF3384 = T3;
  FUNINIT(loopF3384, 4,lenF3383,buf_,name_,loopF3384);
  T4 = CALL1(0,loopF3384,YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_module_into_84) {
  P buf_,mod_;
  P nameF3386;
  P tmpF3385;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(buf_, 0);
  ARG(mod_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYmodule_mangled_name),mod_);
  tmpF3385 = T2;
  if (tmpF3385 != YPfalse) {
    T3 = tmpF3385;
  } else {
    T7 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
    T9 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T8 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T9);
    T6 = CALL2(1,VARREF(YevalSg2cYmangle_name_into),T7,T8);
    T5 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),T6);
    T4 = CALL2(1,VARREF(YevalSastYmodule_mangled_name_setter),T5,mod_);
    T3 = T4;
  }
  T1 = T3;
  nameF3386 = T1;
  T10 = CALL2(1,VARREF(YevalSg2cYbuf_cat2X),buf_,nameF3386);
  T0 = T10;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_global_name_85) {
  P mod_,name_;
  P tmpF3387;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
loop:
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),mod_,VARREF(YevalSastYDgoo_boot_module_name));
  tmpF3387 = T2;
  if (tmpF3387 != YPfalse) {
    T3 = tmpF3387;
  } else {
    T5 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,VARREF(YevalSastYDgoo_boot_module_name));
    T3 = T4;
  }
  T1 = T3;
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDmodule_marker));
    T6 = CALL2(1,VARREF(YevalSg2cYmangle_module_into),VARREF(YevalSg2cYTmangle_bufferT),mod_);
  } else {
  }
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDmodule_marker));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  T7 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  RET(T7);
}

FUNCODEDEF(fun_mangle_global_name_86) {
  P mod_,name_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T0 = CALL2(1,VARREF(YevalSg2cYmangle_global_name),mod_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSg2cYmangle_boot_name) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSg2cYmangle_global_name),VARREF(YevalSastYDgoo_boot_module_name),name_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYmangle_quotation_name) {
  P name_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YevalSg2cYbuf_cat2X),VARREF(YevalSg2cYTmangle_bufferT),LITREF(lit_245));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_integer),name_);
  CALL2(1,VARREF(YevalSg2cYbuf_cat2X),VARREF(YevalSg2cYTmangle_bufferT),T0);
  T1 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_mangle_binding_89) {
  P binding_;
  P tmpF3388;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),binding_);
  tmpF3388 = T1;
  if (tmpF3388 != YPfalse) {
    T2 = tmpF3388;
  } else {
    T6 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),T6,LITREF(lit_248));
    if (T5 != YPfalse) {
      T8 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
      T7 = CALL1(1,VARREF(YevalSg2cYmangle_quotation_name),T8);
      T4 = T7;
    } else {
      T10 = CALL1(1,VARREF(YevalSastYbinding_module),binding_);
      T11 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
      T9 = CALL2(1,VARREF(YevalSg2cYmangle_global_name),T10,T11);
      T4 = T9;
    }
    T3 = CALL2(1,VARREF(YevalSastYbinding_mangled_name_setter),T4,binding_);
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYmangle_local_marked_name) {
  P name_,marker_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(marker_, 1);
loop:
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDhygiene_char));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_integer),marker_);
  CALL2(1,VARREF(YevalSg2cYbuf_cat2X),VARREF(YevalSg2cYTmangle_bufferT),T0);
  T1 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_mangle_binding_91) {
  P binding_;
  P tmpF3389;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),binding_);
  tmpF3389 = T1;
  if (tmpF3389 != YPfalse) {
    T2 = tmpF3389;
  } else {
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T4 = CALL1(1,VARREF(YevalSg2cYmangle_local_name),T5);
    T3 = CALL2(1,VARREF(YevalSastYbinding_mangled_name_setter),T4,binding_);
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_binding_92) {
  P binding_;
  P tmpF3390;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),binding_);
  tmpF3390 = T1;
  if (tmpF3390 != YPfalse) {
    T2 = tmpF3390;
  } else {
    T6 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T7 = CALL1(1,VARREF(YevalSastYbinding_index),binding_);
    T4 = CALL2(1,VARREF(YevalSg2cYmangle_local_marked_name),T5,T7);
    T3 = CALL2(1,VARREF(YevalSastYbinding_mangled_name_setter),T4,binding_);
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1588_93) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_257),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_94) {
  P return_;
  P out_varF3406;
  P x_1587F3405;
  P x_1587F3404;
  P x_1587F3403;
  P x_1587F3402;
  P x_1587F3401;
  P x_1587F3400;
  P x_1587F3399;
  P x_1587F3398;
  P x_1587F3397;
  P x_1587F3396;
  P bodyF3395;
  P clausesF3394;
  P out_valF3393;
  P x_1587F3392;
  P x_1588F3391;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1588_93,2);
  x_1588F3391 = T1;
  FUNINIT(x_1588F3391, 2,FREEREF(0),return_);
  x_1587F3392 = FREEREF(0);
  out_valF3393 = YPfalse;
  out_valF3393 = BOXFAB(out_valF3393);
  clausesF3394 = YPfalse;
  clausesF3394 = BOXFAB(clausesF3394);
  bodyF3395 = YPfalse;
  bodyF3395 = BOXFAB(bodyF3395);
  T9 = CALL2(1,VARREF(YisaQ),x_1587F3392,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1587F3392,LITREF(lit_257),x_1588F3391);
    x_1587F3396 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1587F3396,x_1588F3391);
    BOXVAL(out_valF3393) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1587F3396);
    x_1587F3397 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1587F3397,x_1588F3391);
    x_1587F3398 = T16;
    BOXVAL(clausesF3394) = x_1587F3398;
    x_1587F3399 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1587F3399,x_1588F3391);
    x_1587F3400 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1587F3400,x_1588F3391);
    T21 = CALL1(1,VARREF(Ytail),x_1587F3399);
    x_1587F3401 = T21;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1587F3401,x_1588F3391);
    T18 = T22;
    T17 = T18;
    T23 = CALL1(1,VARREF(Ytail),x_1587F3397);
    x_1587F3402 = T23;
    BOXVAL(bodyF3395) = x_1587F3402;
    x_1587F3403 = Ynil;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1587F3403,x_1588F3391);
    x_1587F3404 = T26;
    T27 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1587F3404,x_1588F3391);
    T28 = CALL1(1,VARREF(Ytail),x_1587F3403);
    x_1587F3405 = T28;
    T29 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1587F3405,x_1588F3391);
    T25 = T29;
    T24 = T25;
    T15 = T24;
    T12 = T15;
    T10 = T12;
  } else {
    T30 = CALL2(1,x_1588F3391,LITREF(lit_82),x_1587F3392);
  }
  T32 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF3406 = T32;
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_258));
  T39 = CALL1(1,VARREF(Ylst),out_varF3406);
  T41 = BOXVAL(out_valF3393);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T38 = CALL3(1,VARREF(YgooSmacrosYcat),T39,T40,LITREF(lit_85));
  T37 = CALL1(1,VARREF(Ylst),T38);
  T36 = CALL2(1,VARREF(YgooSmacrosYcat),T37,LITREF(lit_85));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_259));
  T47 = BOXVAL(clausesF3394);
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_260));
  T53 = CALL1(1,VARREF(Ylst),LITREF(lit_261));
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_262));
  T57 = CALL1(1,VARREF(Ylst),YPtrue);
  T55 = CALL3(1,VARREF(YgooSmacrosYcat),T56,T57,LITREF(lit_85));
  T54 = CALL1(1,VARREF(Ylst),T55);
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_262));
  T61 = CALL1(1,VARREF(Ylst),YPfalse);
  T59 = CALL3(1,VARREF(YgooSmacrosYcat),T60,T61,LITREF(lit_85));
  T58 = CALL1(1,VARREF(Ylst),T59);
  T52 = CALL4(1,VARREF(YgooSmacrosYcat),T53,T54,T58,LITREF(lit_85));
  T51 = CALL1(1,VARREF(Ylst),T52);
  T49 = CALL3(1,VARREF(YgooSmacrosYcat),T50,T51,LITREF(lit_85));
  T48 = CALL1(1,VARREF(Ylst),T49);
  T46 = CALL3(1,VARREF(YgooSmacrosYcat),T47,T48,LITREF(lit_85));
  T45 = CALL1(1,VARREF(Ylst),T46);
  T64 = CALL1(1,VARREF(Ylst),LITREF(lit_263));
  T65 = CALL1(1,VARREF(Ylst),LITREF(lit_260));
  T68 = CALL1(1,VARREF(Ylst),LITREF(lit_264));
  T69 = CALL1(1,VARREF(Ylst),out_varF3406);
  T70 = CALL1(1,VARREF(Ylst),YPchr((P)44));
  T67 = CALL4(1,VARREF(YgooSmacrosYcat),T68,T69,T70,LITREF(lit_85));
  T66 = CALL1(1,VARREF(Ylst),T67);
  T63 = CALL4(1,VARREF(YgooSmacrosYcat),T64,T65,T66,LITREF(lit_85));
  T62 = CALL1(1,VARREF(Ylst),T63);
  T71 = BOXVAL(bodyF3395);
  T43 = CALL5(1,VARREF(YgooSmacrosYcat),T44,T45,T62,T71,LITREF(lit_85));
  T42 = CALL1(1,VARREF(Ylst),T43);
  T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T35,T42,LITREF(lit_85));
  T31 = T33;
  T7 = T31;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_95) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_94,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1592_96) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_269),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_97) {
  P return_;
  P out_varF3420;
  P x_1591F3419;
  P x_1591F3418;
  P x_1591F3417;
  P x_1591F3416;
  P x_1591F3415;
  P x_1591F3414;
  P x_1591F3413;
  P x_1591F3412;
  P x_1591F3411;
  P bodyF3410;
  P out_valF3409;
  P x_1591F3408;
  P x_1592F3407;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1592_96,2);
  x_1592F3407 = T1;
  FUNINIT(x_1592F3407, 2,FREEREF(0),return_);
  x_1591F3408 = FREEREF(0);
  out_valF3409 = YPfalse;
  out_valF3409 = BOXFAB(out_valF3409);
  bodyF3410 = YPfalse;
  bodyF3410 = BOXFAB(bodyF3410);
  T7 = CALL2(1,VARREF(YisaQ),x_1591F3408,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1591F3408,LITREF(lit_269),x_1592F3407);
    x_1591F3411 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1591F3411,x_1592F3407);
    x_1591F3412 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1591F3412,x_1592F3407);
    BOXVAL(out_valF3409) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1591F3412);
    x_1591F3413 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1591F3413,x_1592F3407);
    x_1591F3414 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1591F3414,x_1592F3407);
    T18 = CALL1(1,VARREF(Ytail),x_1591F3413);
    x_1591F3415 = T18;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1591F3415,x_1592F3407);
    T15 = T19;
    T12 = T15;
    T20 = CALL1(1,VARREF(Ytail),x_1591F3411);
    x_1591F3416 = T20;
    BOXVAL(bodyF3410) = x_1591F3416;
    x_1591F3417 = Ynil;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1591F3417,x_1592F3407);
    x_1591F3418 = T23;
    T24 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1591F3418,x_1592F3407);
    T25 = CALL1(1,VARREF(Ytail),x_1591F3417);
    x_1591F3419 = T25;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1591F3419,x_1592F3407);
    T22 = T26;
    T21 = T22;
    T10 = T21;
    T8 = T10;
  } else {
    T27 = CALL2(1,x_1592F3407,LITREF(lit_82),x_1591F3408);
  }
  T29 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF3420 = T29;
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_258));
  T36 = CALL1(1,VARREF(Ylst),out_varF3420);
  T38 = BOXVAL(out_valF3409);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,LITREF(lit_85));
  T34 = CALL1(1,VARREF(Ylst),T35);
  T33 = CALL2(1,VARREF(YgooSmacrosYcat),T34,LITREF(lit_85));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_264));
  T42 = CALL1(1,VARREF(Ylst),out_varF3420);
  T43 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T40 = CALL4(1,VARREF(YgooSmacrosYcat),T41,T42,T43,LITREF(lit_85));
  T39 = CALL1(1,VARREF(Ylst),T40);
  T44 = BOXVAL(bodyF3410);
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_264));
  T48 = CALL1(1,VARREF(Ylst),out_varF3420);
  T49 = CALL1(1,VARREF(Ylst),YPchr((P)41));
  T46 = CALL4(1,VARREF(YgooSmacrosYcat),T47,T48,T49,LITREF(lit_85));
  T45 = CALL1(1,VARREF(Ylst),T46);
  T30 = CALLN(1,VARREF(YgooSmacrosYcat),6,T31,T32,T39,T44,T45,LITREF(lit_85));
  T28 = T30;
  T5 = T28;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_98) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_97,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1596_99) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_274),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_100) {
  P forms_,body_,firstQ_;
  P tmpF3421;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3;
LINK_STACK();
  ARG(forms_, 0);
  ARG(body_, 1);
  ARG(firstQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),body_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),forms_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yhead),body_);
    tmpF3421 = firstQ_;
    if (tmpF3421 != YPfalse) {
      T8 = tmpF3421;
    } else {
      T10 = CALL1(1,VARREF(Ylst),LITREF(lit_264));
      T11 = CALL1(1,VARREF(Ylst),FREEREF(0));
      T12 = CALL1(1,VARREF(Ylst),YPchr((P)44));
      T9 = CALL4(1,VARREF(YgooSmacrosYcat),T10,T11,T12,LITREF(lit_85));
      T8 = T9;
    }
    T7 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYpair),T7,forms_);
    T4 = CALL2(1,VARREF(YgooSmacrosYpair),T5,T6);
    T13 = CALL1(1,VARREF(Ytail),body_);
    a1 = T4;
    a2 = T13;
    a3 = YPfalse;
    forms_ = a1;
    body_ = a2;
    firstQ_ = a3;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_101) {
  P return_;
  P loopF3436;
  P out_varF3435;
  P x_1595F3434;
  P x_1595F3433;
  P x_1595F3432;
  P x_1595F3431;
  P x_1595F3430;
  P x_1595F3429;
  P x_1595F3428;
  P x_1595F3427;
  P x_1595F3426;
  P bodyF3425;
  P out_valF3424;
  P x_1595F3423;
  P x_1596F3422;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1596_99,2);
  x_1596F3422 = T1;
  FUNINIT(x_1596F3422, 2,FREEREF(0),return_);
  x_1595F3423 = FREEREF(0);
  out_valF3424 = YPfalse;
  out_valF3424 = BOXFAB(out_valF3424);
  bodyF3425 = YPfalse;
  bodyF3425 = BOXFAB(bodyF3425);
  T7 = CALL2(1,VARREF(YisaQ),x_1595F3423,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1595F3423,LITREF(lit_274),x_1596F3422);
    x_1595F3426 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1595F3426,x_1596F3422);
    x_1595F3427 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1595F3427,x_1596F3422);
    BOXVAL(out_valF3424) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1595F3427);
    x_1595F3428 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1595F3428,x_1596F3422);
    x_1595F3429 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1595F3429,x_1596F3422);
    T18 = CALL1(1,VARREF(Ytail),x_1595F3428);
    x_1595F3430 = T18;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1595F3430,x_1596F3422);
    T15 = T19;
    T12 = T15;
    T20 = CALL1(1,VARREF(Ytail),x_1595F3426);
    x_1595F3431 = T20;
    BOXVAL(bodyF3425) = x_1595F3431;
    x_1595F3432 = Ynil;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1595F3432,x_1596F3422);
    x_1595F3433 = T23;
    T24 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1595F3433,x_1596F3422);
    T25 = CALL1(1,VARREF(Ytail),x_1595F3432);
    x_1595F3434 = T25;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1595F3434,x_1596F3422);
    T22 = T26;
    T21 = T22;
    T10 = T21;
    T8 = T10;
  } else {
    T27 = CALL2(1,x_1596F3422,LITREF(lit_82),x_1595F3423);
  }
  T29 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF3435 = T29;
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_258));
  T36 = CALL1(1,VARREF(Ylst),out_varF3435);
  T38 = BOXVAL(out_valF3424);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,LITREF(lit_85));
  T34 = CALL1(1,VARREF(Ylst),T35);
  T33 = CALL2(1,VARREF(YgooSmacrosYcat),T34,LITREF(lit_85));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_264));
  T42 = CALL1(1,VARREF(Ylst),out_varF3435);
  T43 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T40 = CALL4(1,VARREF(YgooSmacrosYcat),T41,T42,T43,LITREF(lit_85));
  T39 = CALL1(1,VARREF(Ylst),T40);
  T45 = FUNSHELL(1,fun_loop_100,2);
  loopF3436 = T45;
  FUNINIT(loopF3436, 2,out_varF3435,loopF3436);
  T47 = BOXVAL(bodyF3425);
  T46 = CALL3(0,loopF3436,Ynil,T47,YPtrue);
  T44 = T46;
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_264));
  T51 = CALL1(1,VARREF(Ylst),out_varF3435);
  T52 = CALL1(1,VARREF(Ylst),YPchr((P)41));
  T49 = CALL4(1,VARREF(YgooSmacrosYcat),T50,T51,T52,LITREF(lit_85));
  T48 = CALL1(1,VARREF(Ylst),T49);
  T30 = CALLN(1,VARREF(YgooSmacrosYcat),6,T31,T32,T39,T44,T48,LITREF(lit_85));
  T28 = T30;
  T5 = T28;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_102) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_101,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_result_103) {
  P e_,d_,code_out_;
  P tmpF3440;
  P x_1597F3439;
  P tmpF3438;
  P regF3437;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(d_, 1);
  ARG(code_out_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  regF3437 = T1;
  tmpF3438 = regF3437;
  if (tmpF3438 != YPfalse) {
    x_1597F3439 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1597F3439,LITREF(lit_278));
    T6 = CALL1(1,VARREF(YgooSmathYnum_to_str),regF3437);
    CALL2(1,VARREF(YgooSioSportYputs),x_1597F3439,T6);
    T7 = CALL2(1,VARREF(YgooSioSportYputs),x_1597F3439,LITREF(lit_279));
    T5 = T7;
    tmpF3440 = T5;
    if (tmpF3440 != YPfalse) {
      T8 = YPtrue;
    } else {
      T8 = YPfalse;
    }
    T4 = T8;
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1599_104) {
  P x_1598_;
  P iF3441;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1598_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1598_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1598_);
    iF3441 = T4;
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_284));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1598_);
    a1 = T6;
    x_1598_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_depth_105) {
  P d_,code_out_;
  P x_1599F3442;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(d_, 0);
  ARG(code_out_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_1599_104,2);
  x_1599F3442 = T1;
  FUNINIT(x_1599F3442, 2,code_out_,x_1599F3442);
  T4 = CALL1(1,VARREF(YgooScolsSseqYbelow),d_);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T2 = CALL1(0,x_1599F3442,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1603_106) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_289),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_107) {
  P return_;
  P x_1602F3457;
  P x_1602F3456;
  P x_1602F3455;
  P x_1602F3454;
  P x_1602F3453;
  P x_1602F3452;
  P x_1602F3451;
  P x_1602F3450;
  P x_1602F3449;
  P x_1602F3448;
  P bodyF3447;
  P code_outF3446;
  P dF3445;
  P x_1602F3444;
  P x_1603F3443;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1603_106,2);
  x_1603F3443 = T1;
  FUNINIT(x_1603F3443, 2,FREEREF(0),return_);
  x_1602F3444 = FREEREF(0);
  dF3445 = YPfalse;
  dF3445 = BOXFAB(dF3445);
  code_outF3446 = YPfalse;
  code_outF3446 = BOXFAB(code_outF3446);
  bodyF3447 = YPfalse;
  bodyF3447 = BOXFAB(bodyF3447);
  T9 = CALL2(1,VARREF(YisaQ),x_1602F3444,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1602F3444,LITREF(lit_289),x_1603F3443);
    x_1602F3448 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1602F3448,x_1603F3443);
    x_1602F3449 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1602F3449,x_1603F3443);
    BOXVAL(dF3445) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1602F3449);
    x_1602F3450 = T16;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1602F3450,x_1603F3443);
    BOXVAL(code_outF3446) = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1602F3450);
    x_1602F3451 = T19;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1602F3451,x_1603F3443);
    x_1602F3452 = T21;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1602F3452,x_1603F3443);
    T23 = CALL1(1,VARREF(Ytail),x_1602F3451);
    x_1602F3453 = T23;
    T24 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1602F3453,x_1603F3443);
    T20 = T24;
    T17 = T20;
    T14 = T17;
    T25 = CALL1(1,VARREF(Ytail),x_1602F3448);
    x_1602F3454 = T25;
    BOXVAL(bodyF3447) = x_1602F3454;
    x_1602F3455 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1602F3455,x_1603F3443);
    x_1602F3456 = T28;
    T29 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1602F3456,x_1603F3443);
    T30 = CALL1(1,VARREF(Ytail),x_1602F3455);
    x_1602F3457 = T30;
    T31 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1602F3457,x_1603F3443);
    T27 = T31;
    T26 = T27;
    T12 = T26;
    T10 = T12;
  } else {
    T32 = CALL2(1,x_1603F3443,LITREF(lit_82),x_1602F3444);
  }
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_290));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_280));
  T39 = BOXVAL(dF3445);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T41 = BOXVAL(code_outF3446);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T36 = CALL4(1,VARREF(YgooSmacrosYcat),T37,T38,T40,LITREF(lit_85));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T42 = BOXVAL(bodyF3447);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_291));
  T47 = BOXVAL(code_outF3446);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_292));
  T44 = CALL4(1,VARREF(YgooSmacrosYcat),T45,T46,T48,LITREF(lit_85));
  T43 = CALL1(1,VARREF(Ylst),T44);
  T33 = CALL5(1,VARREF(YgooSmacrosYcat),T34,T35,T42,T43,LITREF(lit_85));
  T7 = T33;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_108) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_107,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1607_109) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_297),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_110) {
  P return_;
  P x_1606F3474;
  P x_1606F3473;
  P x_1606F3472;
  P x_1606F3471;
  P x_1606F3470;
  P x_1606F3469;
  P x_1606F3468;
  P x_1606F3467;
  P x_1606F3466;
  P x_1606F3465;
  P x_1606F3464;
  P bodyF3463;
  P code_outF3462;
  P dF3461;
  P eF3460;
  P x_1606F3459;
  P x_1607F3458;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1607_109,2);
  x_1607F3458 = T1;
  FUNINIT(x_1607F3458, 2,FREEREF(0),return_);
  x_1606F3459 = FREEREF(0);
  eF3460 = YPfalse;
  eF3460 = BOXFAB(eF3460);
  dF3461 = YPfalse;
  dF3461 = BOXFAB(dF3461);
  code_outF3462 = YPfalse;
  code_outF3462 = BOXFAB(code_outF3462);
  bodyF3463 = YPfalse;
  bodyF3463 = BOXFAB(bodyF3463);
  T11 = CALL2(1,VARREF(YisaQ),x_1606F3459,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1606F3459,LITREF(lit_297),x_1607F3458);
    x_1606F3464 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1606F3464,x_1607F3458);
    x_1606F3465 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1606F3465,x_1607F3458);
    BOXVAL(eF3460) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1606F3465);
    x_1606F3466 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1606F3466,x_1607F3458);
    BOXVAL(dF3461) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1606F3466);
    x_1606F3467 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1606F3467,x_1607F3458);
    BOXVAL(code_outF3462) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1606F3467);
    x_1606F3468 = T24;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1606F3468,x_1607F3458);
    x_1606F3469 = T26;
    T27 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1606F3469,x_1607F3458);
    T28 = CALL1(1,VARREF(Ytail),x_1606F3468);
    x_1606F3470 = T28;
    T29 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1606F3470,x_1607F3458);
    T25 = T29;
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T30 = CALL1(1,VARREF(Ytail),x_1606F3464);
    x_1606F3471 = T30;
    BOXVAL(bodyF3463) = x_1606F3471;
    x_1606F3472 = Ynil;
    T33 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1606F3472,x_1607F3458);
    x_1606F3473 = T33;
    T34 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1606F3473,x_1607F3458);
    T35 = CALL1(1,VARREF(Ytail),x_1606F3472);
    x_1606F3474 = T35;
    T36 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1606F3474,x_1607F3458);
    T32 = T36;
    T31 = T32;
    T14 = T31;
    T12 = T14;
  } else {
    T37 = CALL2(1,x_1607F3458,LITREF(lit_82),x_1606F3459);
  }
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_289));
  T43 = BOXVAL(dF3461);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T45 = BOXVAL(code_outF3462);
  T44 = CALL1(1,VARREF(Ylst),T45);
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T44,LITREF(lit_85));
  T40 = CALL1(1,VARREF(Ylst),T41);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_276));
  T50 = BOXVAL(eF3460);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T52 = BOXVAL(dF3461);
  T51 = CALL1(1,VARREF(Ylst),T52);
  T54 = BOXVAL(code_outF3462);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T47 = CALL5(1,VARREF(YgooSmacrosYcat),T48,T49,T51,T53,LITREF(lit_85));
  T46 = CALL1(1,VARREF(Ylst),T47);
  T55 = BOXVAL(bodyF3463);
  T38 = CALL5(1,VARREF(YgooSmacrosYcat),T39,T40,T46,T55,LITREF(lit_85));
  T9 = T38;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_111) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_110,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1611_112) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_302),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_113) {
  P return_;
  P x_1610F3491;
  P x_1610F3490;
  P x_1610F3489;
  P x_1610F3488;
  P x_1610F3487;
  P x_1610F3486;
  P x_1610F3485;
  P x_1610F3484;
  P x_1610F3483;
  P x_1610F3482;
  P x_1610F3481;
  P bodyF3480;
  P code_outF3479;
  P dF3478;
  P eF3477;
  P x_1610F3476;
  P x_1611F3475;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1611_112,2);
  x_1611F3475 = T1;
  FUNINIT(x_1611F3475, 2,FREEREF(0),return_);
  x_1610F3476 = FREEREF(0);
  eF3477 = YPfalse;
  eF3477 = BOXFAB(eF3477);
  dF3478 = YPfalse;
  dF3478 = BOXFAB(dF3478);
  code_outF3479 = YPfalse;
  code_outF3479 = BOXFAB(code_outF3479);
  bodyF3480 = YPfalse;
  bodyF3480 = BOXFAB(bodyF3480);
  T11 = CALL2(1,VARREF(YisaQ),x_1610F3476,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1610F3476,LITREF(lit_302),x_1611F3475);
    x_1610F3481 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1610F3481,x_1611F3475);
    x_1610F3482 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1610F3482,x_1611F3475);
    BOXVAL(eF3477) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1610F3482);
    x_1610F3483 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1610F3483,x_1611F3475);
    BOXVAL(dF3478) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1610F3483);
    x_1610F3484 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1610F3484,x_1611F3475);
    BOXVAL(code_outF3479) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1610F3484);
    x_1610F3485 = T24;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1610F3485,x_1611F3475);
    x_1610F3486 = T26;
    T27 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1610F3486,x_1611F3475);
    T28 = CALL1(1,VARREF(Ytail),x_1610F3485);
    x_1610F3487 = T28;
    T29 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1610F3487,x_1611F3475);
    T25 = T29;
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T30 = CALL1(1,VARREF(Ytail),x_1610F3481);
    x_1610F3488 = T30;
    BOXVAL(bodyF3480) = x_1610F3488;
    x_1610F3489 = Ynil;
    T33 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1610F3489,x_1611F3475);
    x_1610F3490 = T33;
    T34 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1610F3490,x_1611F3475);
    T35 = CALL1(1,VARREF(Ytail),x_1610F3489);
    x_1610F3491 = T35;
    T36 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1610F3491,x_1611F3475);
    T32 = T36;
    T31 = T32;
    T14 = T31;
    T12 = T14;
  } else {
    T37 = CALL2(1,x_1611F3475,LITREF(lit_82),x_1610F3476);
  }
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_303));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_304));
  T44 = BOXVAL(eF3477);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,LITREF(lit_85));
  T40 = CALL1(1,VARREF(Ylst),T41);
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_297));
  T51 = BOXVAL(eF3477);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T53 = BOXVAL(dF3478);
  T52 = CALL1(1,VARREF(Ylst),T53);
  T55 = BOXVAL(code_outF3479);
  T54 = CALL1(1,VARREF(Ylst),T55);
  T49 = CALL4(1,VARREF(YgooSmacrosYcat),T50,T52,T54,LITREF(lit_85));
  T48 = CALL1(1,VARREF(Ylst),T49);
  T56 = BOXVAL(bodyF3480);
  T46 = CALL4(1,VARREF(YgooSmacrosYcat),T47,T48,T56,LITREF(lit_85));
  T45 = CALL1(1,VARREF(Ylst),T46);
  T38 = CALL4(1,VARREF(YgooSmacrosYcat),T39,T40,T45,LITREF(lit_85));
  T9 = T38;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_114) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_113,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1613_115) {
  P x_1612_;
  P x_1614F3493;
  P qbF3492;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_1612_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1612_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1612_);
    qbF3492 = T4;
    x_1614F3493 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1614F3493,LITREF(lit_310));
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),qbF3492);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1614F3493,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1614F3493,LITREF(lit_311));
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1612_);
    a1 = T8;
    x_1612_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_forwards_116) {
  P code_out_,qbT_;
  P x_1613F3494;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qbT_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_307));
  T1 = FUNSHELL(1,fun_x_1613_115,2);
  x_1613F3494 = T1;
  FUNINIT(x_1613F3494, 2,code_out_,x_1613F3494);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),qbT_);
  T2 = CALL1(0,x_1613F3494,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1616_117) {
  P x_1615_;
  P x_1617F3496;
  P qbF3495;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_1615_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1615_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1615_);
    qbF3495 = T4;
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(0));
    x_1617F3496 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1617F3496,LITREF(lit_316));
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),qbF3495);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1617F3496,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1617F3496,LITREF(lit_317));
    T7 = CALL1(1,VARREF(YevalSastYbinding_info),qbF3495);
    CALL2(1,VARREF(YevalSg2cYgenerate_quotation),FREEREF(0),T7);
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_292));
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1615_);
    a1 = T9;
    x_1615_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotations_118) {
  P code_out_,qbT_;
  P x_1616F3497;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qbT_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_1616_117,2);
  x_1616F3497 = T1;
  FUNINIT(x_1616F3497, 2,code_out_,x_1616F3497);
  T4 = CALL1(1,VARREF(YgooScolsSseqYrev),qbT_);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T2 = CALL1(0,x_1616F3497,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_false_name_119) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_319));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_120) {
  P code_out_,qb_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qb_, 1);
loop:
  if (qb_ != YPfalse) {
    T2 = LITREF(lit_322);
  } else {
    T2 = LITREF(lit_323);
  }
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),T2);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_121) {
  P code_out_,qb_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qb_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_325));
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_122) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSg2cYgenerate_quotation),FREEREF(0),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_123) {
  P code_out_,qb_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qb_, 1);
loop:
  T1 = FUNFAB(fun_122,1,code_out_);
  T0 = CALL3(1,VARREF(YevalSg2cYout_list_builder),T1,code_out_,qb_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_124) {
  P code_out_,x_;
  P x_1618F3498;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1618F3498 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_329));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1618F3498,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1618F3498,LITREF(lit_330));
  T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),x_);
  CALL2(1,VARREF(YgooSioSportYputs),x_1618F3498,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1618F3498,LITREF(lit_331));
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_125) {
  P code_out_,x_;
  P x_1619F3499;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1619F3499 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_333));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1619F3499,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1619F3499,LITREF(lit_334));
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),x_);
  T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),T3);
  CALL2(1,VARREF(YgooSioSportYputs),x_1619F3499,T2);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1619F3499,LITREF(lit_335));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_126) {
  P i_;
  P x_1621F3501;
  P x_1620F3500;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooSmathYneg),YPint((P)1));
  T1 = CALL2(1,VARREF(YgooSmagYG),i_,T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(0),i_);
    x_1620F3500 = T4;
    x_1621F3501 = VARREF(YgooSmacrosYEE);
    T7 = CALL2(1,x_1621F3501,x_1620F3500,YPchr((P)115));
    if (T7 != YPfalse) {
      CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),i_);
      T8 = CALL1(1,FREEREF(1),YPfalse);
      T6 = T8;
    } else {
      T10 = CALL2(1,x_1621F3501,x_1620F3500,YPchr((P)100));
      if (T10 != YPfalse) {
        CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),i_);
        T11 = CALL1(1,FREEREF(1),YPfalse);
        T9 = T11;
      } else {
        T13 = CALL2(1,x_1621F3501,x_1620F3500,YPchr((P)120));
        if (T13 != YPfalse) {
          CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),i_);
          T14 = CALL1(1,FREEREF(1),YPfalse);
          T12 = T14;
        } else {
          T16 = CALL2(1,VARREF(YgooSmathY_),i_,YPint((P)1));
          a1 = T16;
          i_ = a1;
          goto loop;
          T12 = T15;
        }
        T9 = T12;
      }
      T6 = T9;
    }
    T5 = T6;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = FREEREF(0);
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_127) {
  P done_;
  P loopF3502;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(done_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_126,3);
  loopF3502 = T1;
  FUNINIT(loopF3502, 3,FREEREF(0),done_,loopF3502);
  T4 = CALL1(1,VARREF(YgooStypesYlen),FREEREF(0));
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)1));
  T2 = CALL1(0,loopF3502,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_float_to_c_string_128) {
  P o_;
  P sF3503;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),o_);
  sF3503 = T1;
  T3 = FUNFAB(fun_127,1,sF3503);
  T2 = with_exit(T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_generate_quotation_129) {
  P code_out_,x_;
  P x_1622F3504;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1622F3504 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_341));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1622F3504,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1622F3504,LITREF(lit_342));
  T2 = CALL1(1,VARREF(YevalSg2cYfloat_to_c_string),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1622F3504,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1622F3504,LITREF(lit_343));
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_130) {
  P code_out_,x_;
  P x_1623F3505;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1623F3505 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_345));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1623F3505,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1623F3505,LITREF(lit_346));
  T2 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1623F3505,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1623F3505,LITREF(lit_347));
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1626_131) {
  P x_1625_;
  P eF3506;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1625_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1625_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1625_);
    eF3506 = T4;
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_354));
    CALL2(1,VARREF(YevalSg2cYgenerate_quotation),FREEREF(0),eF3506);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1625_);
    a1 = T6;
    x_1625_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_132) {
  P code_out_,x_;
  P x_1626F3508;
  P x_1624F3507;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1624F3507 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1624F3507,LITREF(lit_349));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_350));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1624F3507,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1624F3507,LITREF(lit_351));
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1624F3507,T2);
  T3 = FUNSHELL(1,fun_x_1626_131,2);
  x_1626F3508 = T3;
  FUNINIT(x_1626F3508, 2,code_out_,x_1626F3508);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T4 = CALL1(0,x_1626F3508,T5);
  T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_355));
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_x_1629_133) {
  P x_1628_;
  P eF3509;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1628_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1628_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1628_);
    eF3509 = T4;
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_362));
    CALL2(1,VARREF(YevalSg2cYgenerate_quotation),FREEREF(0),eF3509);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1628_);
    a1 = T6;
    x_1628_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_134) {
  P code_out_,x_;
  P x_1629F3511;
  P x_1627F3510;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1627F3510 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1627F3510,LITREF(lit_357));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_358));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1627F3510,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1627F3510,LITREF(lit_359));
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1627F3510,T2);
  T3 = FUNSHELL(1,fun_x_1629_133,2);
  x_1629F3511 = T3;
  FUNINIT(x_1629F3511, 2,code_out_,x_1629F3511);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T4 = CALL1(0,x_1629F3511,T5);
  T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_363));
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_generate_quotation_135) {
  P code_out_,x_;
  P x_1630F3512;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1630F3512 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_365));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1630F3512,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1630F3512,LITREF(lit_366));
  T2 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1630F3512,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1630F3512,LITREF(lit_367));
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYbinding_Gc) {
  P binding_,code_out_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_Gc_137) {
  P v_,code_out_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(v_, 0);
  ARG(code_out_, 1);
loop:
  T0 = CALL2(1,VARREF(YevalSg2cYbinding_Gc),v_,code_out_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_Gc_138) {
  P v_,code_out_;
  P x_1633F3515;
  P x_1632F3514;
  P x_1631F3513;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(v_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),v_);
  x_1631F3513 = T1;
  x_1632F3514 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_1632F3514,x_1631F3513,LITREF(lit_248));
  if (T4 != YPfalse) {
    T3 = LITREF(lit_374);
  } else {
    T6 = CALL2(1,x_1632F3514,x_1631F3513,LITREF(lit_152));
    if (T6 != YPfalse) {
      T5 = LITREF(lit_375);
    } else {
      T8 = CALL2(1,x_1632F3514,x_1631F3513,LITREF(lit_153));
      if (T8 != YPfalse) {
        T7 = LITREF(lit_376);
      } else {
        T7 = LITREF(lit_377);
      }
      T5 = T7;
    }
    T3 = T5;
  }
  T2 = T3;
  T0 = T2;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T0);
  x_1633F3515 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1633F3515,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),v_,code_out_);
  T10 = CALL2(1,VARREF(YgooSioSportYput),x_1633F3515,YPchr((P)41));
  T9 = T10;
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_to_c_139) {
  P e_,f_,d_,code_out_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSast_linearizeYform_quotations),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotations),code_out_,T0);
  T1 = CALL1(1,VARREF(YevalSast_linearizeYform_definitions),e_);
  CALL4(1,VARREF(YevalSg2cYgenerate_functions),T1,f_,d_,code_out_);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYform_program),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T2,f_,d_,code_out_);
  T4 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T4 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    T5 = CALL1(1,VARREF(YevalSast_linearizeYform_program),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T5,code_out_);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_292));
    T3 = T6;
  } else {
    T3 = YPfalse;
  }
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_to_c_140) {
  P e_,f_,d_,code_out_;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_gen_ref_141) {
  P e_,code_out_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYreference_Gc),T1,code_out_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_142) {
  P e_,code_out_;
  P x_1635F3517;
  P x_1634F3516;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_385));
  x_1634F3516 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1634F3516,YPchr((P)40));
  x_1635F3517 = code_out_;
  T3 = CALL1(1,VARREF(YevalSast_linearizeYreference_offset),e_);
  T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),T3);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1635F3517,T2);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1634F3516,YPchr((P)41));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_143) {
  P e_,code_out_;
  P x_1636F3519;
  P regF3518;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  regF3518 = T1;
  if (regF3518 != YPfalse) {
    x_1636F3519 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1636F3519,LITREF(lit_387));
    T5 = CALL1(1,VARREF(YgooSmathYnum_to_str),regF3518);
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1636F3519,T5);
    T3 = T4;
    T2 = T3;
  } else {
    T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_388));
    T2 = T6;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_144) {
  P e_,code_out_;
  P x_1637F3520;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  x_1637F3520 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1637F3520,LITREF(lit_390));
  T2 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1637F3520,T2);
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_145) {
  P e_,code_out_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYgenerate_quotation),code_out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_146) {
  P e_,code_out_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYlast),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_ref),T1,code_out_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_147) {
  P e_,f_,d_,code_out_;
  P x_1639F3522;
  P x_1638F3521;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  T3 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T2 = CALL1(1,VARREF(YevalSastYbinding_kind),T3);
  x_1638F3521 = T2;
  x_1639F3522 = VARREF(YgooSmacrosYEE);
  T6 = CALL2(1,x_1639F3522,x_1638F3521,LITREF(lit_152));
  if (T6 != YPfalse) {
    T5 = LITREF(lit_394);
  } else {
    T8 = CALL2(1,x_1639F3522,x_1638F3521,LITREF(lit_153));
    if (T8 != YPfalse) {
      T10 = CALL2(1,VARREF(YisaQ),e_,VARREF(YevalSastYLdynamic_definitionG));
      if (T10 != YPfalse) {
        T9 = LITREF(lit_395);
      } else {
        T9 = LITREF(lit_396);
      }
      T7 = T9;
    } else {
      T7 = LITREF(lit_397);
    }
    T5 = T7;
  }
  T4 = T5;
  T1 = T4;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
  T11 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),T11,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_398));
  T12 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T12,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_399));
  T13 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_292));
UNLINK_STACK();
  QRET(T13);
}

FUNCODEDEF(fun_to_c_148) {
  P e_,f_,d_,code_out_;
  P x_1640F3523;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    T3 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
    T2 = CALL2(1,VARREF(YisaQ),T3,VARREF(YevalSastYLruntime_referenceG));
    if (T2 != YPfalse) {
      T4 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_401));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_402));
    x_1640F3523 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1640F3523,YPchr((P)40));
    T6 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
    T5 = CALL1(1,VARREF(YevalSastYreference_binding),T6);
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),T5,code_out_);
    T7 = CALL2(1,VARREF(YgooSioSportYput),x_1640F3523,YPchr((P)41));
    T8 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_292));
    T0 = T8;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_149) {
  P e_,f_,d_,code_out_;
  P x_1641F3524;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,code_out_);
  T2 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T2 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_404));
    x_1641F3524 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1641F3524,YPchr((P)40));
    T3 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
    T4 = CALL2(1,VARREF(YgooSioSportYput),x_1641F3524,YPchr((P)41));
    T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_292));
    T1 = T5;
  } else {
    T1 = YPfalse;
  }
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_to_c_150) {
  P e_,f_,d_,code_out_;
  P x_1642F3525;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSast_linearizeYbox_form),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_406));
  x_1642F3525 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1642F3525,YPchr((P)40));
  T1 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T1,code_out_);
  T2 = CALL2(1,VARREF(YgooSioSportYput),x_1642F3525,YPchr((P)41));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_407));
  T3 = CALL1(1,VARREF(YevalSast_linearizeYbox_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_292));
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(fun_to_c_151) {
  P e_,f_,d_,code_out_;
  P x_1643F3527;
  P bindingF3526;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  T3 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),T3);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),T2);
  bindingF3526 = T1;
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3526,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_409));
  x_1643F3527 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1643F3527,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3526,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1643F3527,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_292));
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_152) {
  P e_,f_,d_,code_out_;
  P x_1644F3528;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_411));
  T1 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T1,code_out_);
  x_1644F3528 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1644F3528,LITREF(lit_412));
  T2 = CALL0(1,VARREF(YevalSg2cYfalse_name));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1644F3528,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1644F3528,LITREF(lit_413));
  T4 = CALL1(1,VARREF(YevalSastYalternative_consequent),e_);
  T5 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
  CALL4(1,VARREF(YevalSg2cYto_c),T4,f_,T5,code_out_);
  T6 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T6 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL2(1,VARREF(YevalSg2cYgen_depth),T7,code_out_);
    T8 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,T8,code_out_);
    T9 = CALL1(1,VARREF(YevalSastYalternative_consequent),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T9,code_out_);
    T10 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_292));
  } else {
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_414));
  T11 = CALL1(1,VARREF(YevalSastYalternative_alternant),e_);
  T12 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
  CALL4(1,VARREF(YevalSg2cYto_c),T11,f_,T12,code_out_);
  T13 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T13 != YPfalse) {
    T14 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL2(1,VARREF(YevalSg2cYgen_depth),T14,code_out_);
    T15 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,T15,code_out_);
    T16 = CALL1(1,VARREF(YevalSastYalternative_alternant),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T16,code_out_);
    T17 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_292));
  } else {
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  T18 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_415));
UNLINK_STACK();
  QRET(T18);
}

FUNCODEDEF(fun_153) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL4(1,VARREF(YevalSg2cYto_c),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_154) {
  P e_,f_,d_,code_out_;
  P T0,T1;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = FUNFAB(fun_153,3,f_,d_,code_out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1646_155) {
  P x_1645_;
  P argF3529;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1645_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1645_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1645_);
    argF3529 = T4;
    CALL4(1,VARREF(YevalSg2cYto_c),argF3529,FREEREF(0),FREEREF(1),FREEREF(2));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1645_);
    a1 = T6;
    x_1645_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1649_156) {
  P x_1648_,x_1647_;
  P x_1650F3533;
  P argF3532;
  P iF3531;
  P tmpF3530;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1648_, 0);
  ARG(x_1647_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1648_);
  tmpF3530 = T3;
  if (tmpF3530 != YPfalse) {
    T4 = tmpF3530;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1647_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1648_);
    iF3531 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1647_);
    argF3532 = T9;
    CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(0),FREEREF(1));
    x_1650F3533 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1650F3533,LITREF(lit_424));
    T10 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF3531);
    CALL2(1,VARREF(YgooSioSportYputs),x_1650F3533,T10);
    T11 = CALL2(1,VARREF(YgooSioSportYputs),x_1650F3533,LITREF(lit_425));
    CALL2(1,VARREF(YevalSg2cYgen_ref),argF3532,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_292));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1648_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1647_);
    a1 = T13;
    a2 = T14;
    x_1648_ = a1;
    x_1647_ = a2;
    goto loop;
    T8 = T12;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1653_157) {
  P x_1652_,x_1651_;
  P x_1654F3537;
  P bindingF3536;
  P iF3535;
  P tmpF3534;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1652_, 0);
  ARG(x_1651_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1652_);
  tmpF3534 = T3;
  if (tmpF3534 != YPfalse) {
    T4 = tmpF3534;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1651_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1652_);
    iF3535 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1651_);
    bindingF3536 = T9;
    CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3536,FREEREF(1));
    x_1654F3537 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1654F3537,LITREF(lit_428));
    T11 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF3535);
    T10 = CALL2(1,VARREF(YgooSioSportYputs),x_1654F3537,T11);
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_292));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1652_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1651_);
    a1 = T13;
    a2 = T14;
    x_1652_ = a1;
    x_1651_ = a2;
    goto loop;
    T8 = T12;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_self_recursive_call_158) {
  P e_,f_,d_,code_out_;
  P x_1653F3540;
  P x_1649F3539;
  P x_1646F3538;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNSHELL(1,fun_x_1646_155,4);
  x_1646F3538 = T0;
  FUNINIT(x_1646F3538, 4,f_,d_,code_out_,x_1646F3538);
  T3 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T1 = CALL1(0,x_1646F3538,T2);
  T4 = FUNSHELL(1,fun_x_1649_156,3);
  x_1649F3539 = T4;
  FUNINIT(x_1649F3539, 3,d_,code_out_,x_1649F3539);
  T7 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)1));
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  T9 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),T9);
  T5 = CALL2(0,x_1649F3539,T6,T8);
  T10 = FUNSHELL(1,fun_x_1653_157,3);
  x_1653F3540 = T10;
  FUNINIT(x_1653F3540, 3,d_,code_out_,x_1653F3540);
  T13 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)1));
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  T15 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
  T14 = CALL1(1,VARREF(YgooScolsScolYenum),T15);
  T11 = CALL2(0,x_1653F3540,T12,T14);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_429));
  T16 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_292));
UNLINK_STACK();
  QRET(T16);
}

FUNCODEDEF(fun_x_1656_159) {
  P x_1655_;
  P argF3541;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1655_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1655_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1655_);
    argF3541 = T4;
    CALL4(1,VARREF(YevalSg2cYto_c),argF3541,FREEREF(0),FREEREF(1),FREEREF(2));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1655_);
    a1 = T6;
    x_1655_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1661_160) {
  P x_1660_;
  P argF3542;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1660_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1660_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1660_);
    argF3542 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgen_ref),argF3542,FREEREF(0));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1660_);
    a1 = T6;
    x_1660_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_161) {
  P e_,f_,d_,code_out_;
  P x_1661F3554;
  P x_1659F3553;
  P x_1658F3552;
  P tmpF3551;
  P x_1657F3550;
  P x_1656F3549;
  P nF3548;
  P tmpF3547;
  P tmpF3546;
  P tmpF3545;
  P tmpF3544;
  P functionF3543;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  functionF3543 = T1;
  T4 = CALL1(1,VARREF(YevalSastYapplication_tailQ),e_);
  tmpF3544 = T4;
  if (tmpF3544 != YPfalse) {
    T7 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_methodG));
    tmpF3545 = T7;
    if (tmpF3545 != YPfalse) {
      T11 = CALL1(1,VARREF(YevalSastYfunction_naryQ),f_);
      T10 = CALL1(1,VARREF(Ynot),T11);
      tmpF3546 = T10;
      if (tmpF3546 != YPfalse) {
        T14 = CALL2(1,VARREF(YisaQ),functionF3543,VARREF(YevalSast_linearizeYLfree_referenceG));
        tmpF3547 = T14;
        if (tmpF3547 != YPfalse) {
          T16 = CALL1(1,VARREF(YevalSast_linearizeYreference_selfQ),functionF3543);
          T15 = T16;
        } else {
          T15 = YPfalse;
        }
        T13 = T15;
        T12 = T13;
      } else {
        T12 = YPfalse;
      }
      T9 = T12;
      T8 = T9;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T17 = CALL4(1,VARREF(YevalSg2cYgenerate_self_recursive_call),e_,f_,d_,code_out_);
    T2 = T17;
  } else {
    T20 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T19 = CALL1(1,VARREF(YgooStypesYlen),T20);
    nF3548 = T19;
    T21 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
    CALL4(1,VARREF(YevalSg2cYto_c),T21,f_,d_,code_out_);
    T22 = FUNSHELL(1,fun_x_1656_159,4);
    x_1656F3549 = T22;
    FUNINIT(x_1656F3549, 4,f_,d_,code_out_,x_1656F3549);
    T25 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T24 = CALL1(1,VARREF(YgooScolsScolYenum),T25);
    T23 = CALL1(0,x_1656F3549,T24);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    x_1657F3550 = code_out_;
    T28 = CALL1(1,VARREF(Ynot),f_);
    tmpF3551 = T28;
    if (tmpF3551 != YPfalse) {
      T29 = tmpF3551;
    } else {
      T30 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_primitiveG));
      T29 = T30;
    }
    T27 = T29;
    if (T27 != YPfalse) {
      T26 = LITREF(lit_433);
    } else {
      T26 = LITREF(lit_156);
    }
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1657F3550,T26);
    CALL2(1,VARREF(YgooSioSportYputs),x_1657F3550,LITREF(lit_434));
    T33 = CALL2(1,VARREF(YgooSmagYG),nF3548,VARREF(YevalSg2cYDnumber_call_templates));
    if (T33 != YPfalse) {
      T32 = LITREF(lit_435);
    } else {
      T32 = nF3548;
    }
    T31 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1657F3550,T32);
    x_1658F3552 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1658F3552,YPchr((P)40));
    T35 = CALL1(1,VARREF(YevalSastYapplication_knownQ),e_);
    if (T35 != YPfalse) {
      T34 = LITREF(lit_436);
    } else {
      T34 = LITREF(lit_437);
    }
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,T34);
    T36 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T36,code_out_);
    T37 = CALL2(1,VARREF(YgooSmagYG),nF3548,VARREF(YevalSg2cYDnumber_call_templates));
    if (T37 != YPfalse) {
      x_1659F3553 = code_out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1659F3553,LITREF(lit_438));
      T39 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1659F3553,nF3548);
      T38 = T39;
    } else {
    }
    T40 = FUNSHELL(1,fun_x_1661_160,2);
    x_1661F3554 = T40;
    FUNINIT(x_1661F3554, 2,code_out_,x_1661F3554);
    T43 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T42 = CALL1(1,VARREF(YgooScolsScolYenum),T43);
    T41 = CALL1(0,x_1661F3554,T42);
    T44 = CALL2(1,VARREF(YgooSioSportYput),x_1658F3552,YPchr((P)41));
    T45 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_292));
    T18 = T45;
    T2 = T18;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1665_162) {
  P x_1664_,x_1663_;
  P xF3557;
  P firstQF3556;
  P tmpF3555;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1664_, 0);
  ARG(x_1663_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1664_);
  tmpF3555 = T3;
  if (tmpF3555 != YPfalse) {
    T4 = tmpF3555;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1663_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1664_);
    firstQF3556 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1663_);
    xF3557 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF3556);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYgen_ref),xF3557,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1664_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1663_);
    a1 = T13;
    a2 = T14;
    x_1664_ = a1;
    x_1663_ = a2;
    goto loop;
    T8 = T12;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_163) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_164) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_to_c_165) {
  P e_,f_,d_,code_out_;
  P x_1665F3559;
  P x_1662F3558;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  x_1662F3558 = code_out_;
  T2 = FUNSHELL(1,fun_x_1665_162,3);
  x_1665F3559 = T2;
  FUNINIT(x_1665F3559, 3,x_1662F3558,code_out_,x_1665F3559);
  T6 = fun_163;
  T7 = fun_164;
  T5 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T6,T7);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),T5);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),e_);
  T3 = CALL2(0,x_1665F3559,T4,T8);
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1669_166) {
  P x_1668_,x_1667_,x_1666_;
  P x_1670F3566;
  P tmpF3565;
  P bindingF3564;
  P typeF3563;
  P initF3562;
  P tmpF3561;
  P tmpF3560;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_1668_, 0);
  ARG(x_1667_, 1);
  ARG(x_1666_, 2);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1668_);
  tmpF3560 = T3;
  if (tmpF3560 != YPfalse) {
    T4 = tmpF3560;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1667_);
    tmpF3561 = T6;
    if (tmpF3561 != YPfalse) {
      T7 = tmpF3561;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1666_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_1668_);
    initF3562 = T10;
    T12 = CALL1(1,VARREF(YgooScolsScolYnow),x_1667_);
    typeF3563 = T12;
    T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1666_);
    bindingF3564 = T14;
    CALL4(1,VARREF(YevalSg2cYto_c),initF3562,FREEREF(0),FREEREF(1),FREEREF(2));
    T17 = CALL1(1,VARREF(YevalSast_linearizeYunconstrained_typeQ),typeF3563);
    tmpF3565 = T17;
    if (tmpF3565 != YPfalse) {
      T18 = tmpF3565;
    } else {
      T18 = FREEREF(3);
    }
    T16 = T18;
    T15 = CALL1(1,VARREF(Ynot),T16);
    if (T15 != YPfalse) {
      CALL4(1,VARREF(YevalSg2cYto_c),typeF3563,FREEREF(0),FREEREF(1),FREEREF(2));
      CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(1),FREEREF(2));
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(2),LITREF(lit_449));
      x_1670F3566 = FREEREF(2);
      CALL2(1,VARREF(YgooSioSportYput),x_1670F3566,YPchr((P)40));
      CALL2(1,VARREF(YevalSg2cYgen_ref),initF3562,FREEREF(2));
      CALL2(1,VARREF(YgooSioSportYput),x_1670F3566,YPchr((P)44));
      CALL2(1,VARREF(YevalSg2cYgen_ref),typeF3563,FREEREF(2));
      T19 = CALL2(1,VARREF(YgooSioSportYput),x_1670F3566,YPchr((P)41));
      T20 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(2),LITREF(lit_292));
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(1),FREEREF(2));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3564,FREEREF(2));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(2),LITREF(lit_450));
    CALL2(1,VARREF(YevalSg2cYgen_ref),initF3562,FREEREF(2));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(2),LITREF(lit_292));
    T22 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1668_);
    T23 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1667_);
    T24 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1666_);
    a1 = T22;
    a2 = T23;
    a3 = T24;
    x_1668_ = a1;
    x_1667_ = a2;
    x_1666_ = a3;
    goto loop;
    T13 = T21;
    T11 = T13;
    T9 = T11;
    T0 = T9;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_167) {
  P e_,f_,d_,code_out_;
  P x_1669F3568;
  P low_letQF3567;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = CALL2(1,VARREF(YisaQ),e_,VARREF(YevalSastYLlow_letG));
  low_letQF3567 = T1;
  T2 = FUNSHELL(1,fun_x_1669_166,5);
  x_1669F3568 = T2;
  FUNINIT(x_1669F3568, 5,f_,d_,code_out_,low_letQF3567,x_1669F3568);
  T5 = CALL1(1,VARREF(YevalSastYfix_let_arguments),e_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),T5);
  T7 = CALL1(1,VARREF(YevalSastYfix_let_types),e_);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  T9 = CALL1(1,VARREF(YevalSastYfix_let_bindings),e_);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),T9);
  T3 = CALL3(0,x_1669F3568,T4,T6,T8);
  T10 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T10,f_,d_,code_out_);
  T12 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T12 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    T13 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T13,code_out_);
    T14 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_292));
    T11 = T14;
  } else {
    T11 = YPfalse;
  }
  T0 = T11;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1673_168) {
  P x_1672_,x_1671_;
  P bindingF3571;
  P initF3570;
  P tmpF3569;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(x_1672_, 0);
  ARG(x_1671_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1672_);
  tmpF3569 = T3;
  if (tmpF3569 != YPfalse) {
    T4 = tmpF3569;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1671_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1672_);
    initF3570 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1671_);
    bindingF3571 = T9;
    CALL5(1,VARREF(YevalSg2cYfunshell_to_c),bindingF3571,initF3570,YPfalse,FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3571,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_454));
    CALL2(1,VARREF(YevalSg2cYgen_ref),initF3570,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_292));
    T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1672_);
    T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1671_);
    a1 = T11;
    a2 = T12;
    x_1672_ = a1;
    x_1671_ = a2;
    goto loop;
    T8 = T10;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_169) {
  P e_,f_,d_,code_out_;
  P x_1673F3572;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNSHELL(1,fun_x_1673_168,3);
  x_1673F3572 = T0;
  FUNINIT(x_1673F3572, 3,d_,code_out_,x_1673F3572);
  T3 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T5 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),T5);
  T1 = CALL2(0,x_1673F3572,T2,T4);
  T6 = CALL4(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSg2cYfuninit_to_c),f_,d_,code_out_);
  T7 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  T8 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  CALL3(1,VARREF(YgooScolsSseqYdo2),T6,T7,T8);
  T9 = CALL1(1,VARREF(YevalSastYlocals_body),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T9,f_,d_,code_out_);
  T11 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T11 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    T12 = CALL1(1,VARREF(YevalSastYlocals_body),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T12,code_out_);
    T13 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_292));
    T10 = T13;
  } else {
    T10 = YPfalse;
  }
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_to_c_170) {
  P e_,f_,d_,code_out_;
  P x_1674F3573;
  P T0,T1,T2,T3;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSastYbind_exit_main_fun),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_456));
  x_1674F3573 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1674F3573,YPchr((P)40));
  T1 = CALL1(1,VARREF(YevalSastYbind_exit_main_fun),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T1,code_out_);
  T2 = CALL2(1,VARREF(YgooSioSportYput),x_1674F3573,YPchr((P)41));
  T3 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_292));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_to_c_171) {
  P e_,f_,d_,code_out_;
  P x_1675F3574;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSastYunwind_protect_protected_thunk),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,code_out_);
  T1 = CALL1(1,VARREF(YevalSastYunwind_protect_cleanup_thunk),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T1,f_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_458));
  x_1675F3574 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1675F3574,YPchr((P)40));
  T2 = CALL1(1,VARREF(YevalSastYunwind_protect_protected_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T2,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1675F3574,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYunwind_protect_cleanup_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1675F3574,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_292));
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_to_c_172) {
  P e_,f_,d_,code_out_;
  P x_1676F3575;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSastYmonitor_type),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,code_out_);
  T1 = CALL1(1,VARREF(YevalSastYmonitor_info),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T1,f_,d_,code_out_);
  T2 = CALL1(1,VARREF(YevalSastYmonitor_test),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T2,f_,d_,code_out_);
  T3 = CALL1(1,VARREF(YevalSastYmonitor_handler),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T3,f_,d_,code_out_);
  T4 = CALL1(1,VARREF(YevalSastYmonitor_main_thunk),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T4,f_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_460));
  x_1676F3575 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1676F3575,YPchr((P)40));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_461));
  CALL2(1,VARREF(YgooSioSportYput),x_1676F3575,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_462));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T5);
  CALL2(1,VARREF(YgooSioSportYput),x_1676F3575,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_463));
  CALL2(1,VARREF(YgooSioSportYput),x_1676F3575,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYmonitor_type),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1676F3575,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSastYmonitor_info),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T7,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1676F3575,YPchr((P)44));
  T8 = CALL1(1,VARREF(YevalSastYmonitor_test),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T8,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1676F3575,YPchr((P)44));
  T9 = CALL1(1,VARREF(YevalSastYmonitor_handler),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T9,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1676F3575,YPchr((P)44));
  T10 = CALL1(1,VARREF(YevalSastYmonitor_main_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T10,code_out_);
  T11 = CALL2(1,VARREF(YgooSioSportYput),x_1676F3575,YPchr((P)41));
  T12 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_292));
UNLINK_STACK();
  QRET(T12);
}

FUNCODEDEF(fun_x_1678_173) {
  P x_1677_;
  P argF3576;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1677_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1677_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1677_);
    argF3576 = T4;
    CALL4(1,VARREF(YevalSg2cYto_c),argF3576,FREEREF(0),FREEREF(1),FREEREF(2));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1677_);
    a1 = T6;
    x_1677_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1684_174) {
  P x_1683_,x_1682_;
  P argF3579;
  P firstQF3578;
  P tmpF3577;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1683_, 0);
  ARG(x_1682_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1683_);
  tmpF3577 = T3;
  if (tmpF3577 != YPfalse) {
    T4 = tmpF3577;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1682_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1683_);
    firstQF3578 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1682_);
    argF3579 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF3578);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYgen_ref),argF3579,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1683_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1682_);
    a1 = T13;
    a2 = T14;
    x_1683_ = a1;
    x_1682_ = a2;
    goto loop;
    T8 = T12;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_175) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_176) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_to_c_177) {
  P e_,f_,d_,code_out_;
  P x_1684F3587;
  P x_1681F3586;
  P x_1680F3585;
  P x_1679F3584;
  P x_1678F3583;
  P tmpF3582;
  P tmpF3581;
  P bindingF3580;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
  bindingF3580 = T1;
  T4 = CALL1(1,VARREF(YevalSastYapplication_tailQ),e_);
  tmpF3581 = T4;
  if (tmpF3581 != YPfalse) {
    T7 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_primitiveG));
    tmpF3582 = T7;
    if (tmpF3582 != YPfalse) {
      T10 = CALL1(1,VARREF(YevalSastYfunction_binding),f_);
      T9 = CALL2(1,VARREF(YgooSmacrosYEE),bindingF3580,T10);
      T8 = T9;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T11 = CALL4(1,VARREF(YevalSg2cYgenerate_self_recursive_call),e_,f_,d_,code_out_);
    T2 = T11;
  } else {
    T12 = FUNSHELL(1,fun_x_1678_173,4);
    x_1678F3583 = T12;
    FUNINIT(x_1678F3583, 4,f_,d_,code_out_,x_1678F3583);
    T15 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T14 = CALL1(1,VARREF(YgooScolsScolYenum),T15);
    T13 = CALL1(0,x_1678F3583,T14);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    x_1679F3584 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1679F3584,LITREF(lit_467));
    T18 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
    T17 = CALL1(1,VARREF(YevalSg2cYmangle_binding),T18);
    T16 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1679F3584,T17);
    x_1680F3585 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1680F3585,YPchr((P)40));
    x_1681F3586 = code_out_;
    T20 = FUNSHELL(1,fun_x_1684_174,3);
    x_1684F3587 = T20;
    FUNINIT(x_1684F3587, 3,x_1681F3586,code_out_,x_1684F3587);
    T24 = fun_175;
    T25 = fun_176;
    T23 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T24,T25);
    T22 = CALL1(1,VARREF(YgooScolsScolYenum),T23);
    T27 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T26 = CALL1(1,VARREF(YgooScolsScolYenum),T27);
    T21 = CALL2(0,x_1684F3587,T22,T26);
    T19 = T21;
    T28 = CALL2(1,VARREF(YgooSioSportYput),x_1680F3585,YPchr((P)41));
    T29 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_292));
    T2 = T29;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_178) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL4(1,VARREF(YevalSg2cYto_c),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1688_179) {
  P x_1687_;
  P xF3588;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1687_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1687_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1687_);
    xF3588 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgen_ref),xF3588,FREEREF(0));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1687_);
    a1 = T6;
    x_1687_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_180) {
  P e_,f_,d_,code_out_;
  P x_1688F3593;
  P x_1686F3592;
  P x_1685F3591;
  P fF3590;
  P nF3589;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T2 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
  T1 = CALL1(1,VARREF(YgooStypesYlen),T2);
  nF3589 = T1;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_index),e_);
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),DYNREF(YevalSg2cYTdefinitionsT),T5);
  fF3590 = T4;
  T7 = CALL2(1,VARREF(YgooSmacrosYEE),nF3589,YPint((P)0));
  if (T7 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
    if (T9 != YPfalse) {
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
      CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
      CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,fF3590);
      T10 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_292));
      T8 = T10;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
  } else {
    T11 = FUNFAB(fun_178,3,fF3590,d_,code_out_);
    T12 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T11,T12);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_474));
    x_1685F3591 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1685F3591,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,fF3590);
    x_1686F3592 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1686F3592,LITREF(lit_475));
    T14 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF3589);
    T13 = CALL2(1,VARREF(YgooSioSportYputs),x_1686F3592,T14);
    T15 = FUNSHELL(1,fun_x_1688_179,2);
    x_1688F3593 = T15;
    FUNINIT(x_1688F3593, 2,code_out_,x_1688F3593);
    T18 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    T17 = CALL1(1,VARREF(YgooScolsScolYenum),T18);
    T16 = CALL1(0,x_1688F3593,T17);
    T19 = CALL2(1,VARREF(YgooSioSportYput),x_1685F3591,YPchr((P)41));
    T20 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_292));
    T6 = T20;
  }
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_funshell_to_c_181) {
  P b_,e_,f_,d_,code_out_;
  P x_1691F3598;
  P x_1690F3597;
  P x_1689F3596;
  P fF3595;
  P nF3594;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(b_, 0);
  ARG(e_, 1);
  ARG(f_, 2);
  ARG(d_, 3);
  ARG(code_out_, 4);
loop:
  T2 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
  T1 = CALL1(1,VARREF(YgooStypesYlen),T2);
  nF3594 = T1;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_index),e_);
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),DYNREF(YevalSg2cYTdefinitionsT),T5);
  fF3595 = T4;
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  T6 = CALL2(1,VARREF(YgooSmacrosYEE),nF3594,YPint((P)0));
  if (T6 != YPfalse) {
    T7 = CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,fF3595);
  } else {
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_480));
    x_1689F3596 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1689F3596,YPchr((P)40));
    x_1690F3597 = code_out_;
    T12 = CALL1(1,VARREF(YevalSastYbinding_dynamic_extentQ),b_);
    if (T12 != YPfalse) {
      T11 = YPint((P)1);
    } else {
      T11 = YPint((P)0);
    }
    T10 = CALL1(1,VARREF(YgooSmathYnum_to_str),T11);
    T9 = CALL2(1,VARREF(YgooSioSportYputs),x_1690F3597,T10);
    CALL2(1,VARREF(YgooSioSportYput),x_1689F3596,YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,fF3595);
    CALL2(1,VARREF(YgooSioSportYput),x_1689F3596,YPchr((P)44));
    x_1691F3598 = code_out_;
    T14 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF3594);
    T13 = CALL2(1,VARREF(YgooSioSportYputs),x_1691F3598,T14);
    T15 = CALL2(1,VARREF(YgooSioSportYput),x_1689F3596,YPchr((P)41));
    T8 = T15;
  }
  T16 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_292));
  T3 = T16;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_182) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL4(1,VARREF(YevalSg2cYto_c),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1695_183) {
  P x_1694_;
  P xF3599;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1694_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1694_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1694_);
    xF3599 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgen_ref),xF3599,FREEREF(0));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1694_);
    a1 = T6;
    x_1694_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_funinit_to_c_184) {
  P b_,e_,f_,d_,code_out_;
  P x_1695F3603;
  P x_1693F3602;
  P x_1692F3601;
  P nF3600;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(b_, 0);
  ARG(e_, 1);
  ARG(f_, 2);
  ARG(d_, 3);
  ARG(code_out_, 4);
loop:
  T2 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
  T1 = CALL1(1,VARREF(YgooStypesYlen),T2);
  nF3600 = T1;
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),nF3600,YPint((P)0));
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = FUNFAB(fun_182,3,f_,d_,code_out_);
    T7 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T6,T7);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_484));
    x_1692F3601 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1692F3601,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),b_,code_out_);
    x_1693F3602 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1693F3602,LITREF(lit_485));
    T8 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1693F3602,nF3600);
    T9 = FUNSHELL(1,fun_x_1695_183,2);
    x_1695F3603 = T9;
    FUNINIT(x_1695F3603, 2,code_out_,x_1695F3603);
    T12 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    T11 = CALL1(1,VARREF(YgooScolsScolYenum),T12);
    T10 = CALL1(0,x_1695F3603,T11);
    T13 = CALL2(1,VARREF(YgooSioSportYput),x_1692F3601,YPchr((P)41));
    T14 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_292));
    T3 = T14;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_185) {
  P e_,f_,d_,code_out_;
  P x_1696F3604;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,YPfalse,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_489));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
  x_1696F3604 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1696F3604,YPchr((P)40));
  T3 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T2 = CALL1(1,VARREF(YevalSastYbinding_module_name),T3);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),code_out_,T2);
  CALL2(1,VARREF(YgooSioSportYput),x_1696F3604,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(YevalSastYbinding_name),T5);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),code_out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_1696F3604,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,code_out_);
  T7 = CALL2(1,VARREF(YgooSioSportYput),x_1696F3604,YPchr((P)41));
  T8 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_292));
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_x_1700_186) {
  P x_1699_;
  P eF3605;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1699_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1699_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1699_);
    eF3605 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL1(1,FREEREF(1),eF3605);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1699_);
    a1 = T6;
    x_1699_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_out_list_builder_187) {
  P f_,code_out_,elts_;
  P x_1700F3608;
  P x_1698F3607;
  P x_1697F3606;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2,a3;
LINK_STACK();
  ARG(f_, 0);
  ARG(code_out_, 1);
  ARG(elts_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),elts_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_492));
    T2 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T3);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_493));
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,T4);
    x_1697F3606 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1697F3606,YPchr((P)40));
    x_1698F3607 = code_out_;
    T8 = CALL1(1,VARREF(YgooStypesYlen),elts_);
    T7 = CALL1(1,VARREF(YgooSmathYnum_to_str),T8);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1698F3607,T7);
    T9 = FUNSHELL(1,fun_x_1700_186,3);
    x_1700F3608 = T9;
    FUNINIT(x_1700F3608, 3,code_out_,f_,x_1700F3608);
    T11 = CALL1(1,VARREF(YgooScolsScolYenum),elts_);
    T10 = CALL1(0,x_1700F3608,T11);
    T12 = CALL2(1,VARREF(YgooSioSportYput),x_1697F3606,YPchr((P)41));
    T5 = T12;
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_188) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSg2cYgen_ref),x_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_fab_list_189) {
  P code_out_,refs_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(refs_, 1);
loop:
  T1 = FUNFAB(fun_188,1,code_out_);
  T0 = CALL3(1,VARREF(YevalSg2cYout_list_builder),T1,code_out_,refs_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_specs_190) {
  P code_out_,sig_;
  P specsF3610;
  P typesF3609;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(sig_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYsignature_specs),sig_);
  typesF3609 = T1;
  T5 = CALL1(1,VARREF(YevalSastYsignature_naryQ),sig_);
  T4 = CALL1(1,VARREF(YevalSastYconstant_value),T5);
  if (T4 != YPfalse) {
    T8 = CALL1(1,VARREF(YgooStypesYlen),typesF3609);
    T7 = CALL2(1,VARREF(YgooSmathY_),T8,YPint((P)1));
    T6 = CALL3(1,VARREF(YgooScolsSseqYsub),typesF3609,YPint((P)0),T7);
    T3 = T6;
  } else {
    T3 = typesF3609;
  }
  specsF3610 = T3;
  T9 = CALL2(1,VARREF(YevalSg2cYgen_fab_list),code_out_,specsF3610);
  T2 = T9;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_191) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL4(1,VARREF(YevalSg2cYto_c),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_192) {
  P e_,f_,d_,code_out_;
  P x_1701F3611;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNFAB(fun_191,3,f_,d_,code_out_);
  T1 = CALL1(1,VARREF(YevalSastYsignature_specs),e_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL1(1,VARREF(YevalSastYsignature_value),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T2,f_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  T3 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_503));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T3);
  x_1701F3611 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1701F3611,YPchr((P)40));
  T4 = CALL1(1,VARREF(YevalSastYsignature_names),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T4,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1701F3611,YPchr((P)44));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_specs),code_out_,e_);
  CALL2(1,VARREF(YgooSioSportYput),x_1701F3611,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYsignature_naryQ),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T5,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1701F3611,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYsignature_arity),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1701F3611,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSastYsignature_value),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T7,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1701F3611,YPchr((P)44));
  T8 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_504));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T8);
  T9 = CALL2(1,VARREF(YgooSioSportYput),x_1701F3611,YPchr((P)41));
  T10 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_292));
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_to_c_193) {
  P e_,f_,d_,code_out_;
  P x_1702F3612;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSastYfunction_signature),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_506));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
  x_1702F3612 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1702F3612,YPchr((P)40));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_507));
  CALL2(1,VARREF(YgooSioSportYput),x_1702F3612,YPchr((P)44));
  T2 = CALL1(1,VARREF(YevalSastYfunction_debug_name),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T2,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1702F3612,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYfunction_signature),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1702F3612,YPchr((P)44));
  T4 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_508));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_1702F3612,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_509));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T5);
  CALL2(1,VARREF(YgooSioSportYput),x_1702F3612,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_510));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T6);
  CALL2(1,VARREF(YgooSioSportYput),x_1702F3612,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_511));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T7);
  T8 = CALL2(1,VARREF(YgooSioSportYput),x_1702F3612,YPchr((P)41));
  T9 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_292));
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_x_1704_194) {
  P x_1703_;
  P defF3613;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1703_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1703_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1703_);
    defF3613 = T4;
    CALL2(1,VARREF(YevalSg2cYgenerate_function_forward),FREEREF(0),defF3613);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1703_);
    a1 = T6;
    x_1703_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_forwards_195) {
  P code_out_,definitions_;
  P x_1704F3614;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definitions_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_514));
  T1 = FUNSHELL(1,fun_x_1704_194,2);
  x_1704F3614 = T1;
  FUNINIT(x_1704F3614, 2,code_out_,x_1704F3614);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),definitions_);
  T2 = CALL1(0,x_1704F3614,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1709_196) {
  P x_1708_,x_1707_;
  P iF3617;
  P firstQF3616;
  P tmpF3615;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1708_, 0);
  ARG(x_1707_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1708_);
  tmpF3615 = T3;
  if (tmpF3615 != YPfalse) {
    T4 = tmpF3615;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1707_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1708_);
    firstQF3616 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1707_);
    iF3617 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF3616);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_525));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1708_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1707_);
    a1 = T13;
    a2 = T14;
    x_1708_ = a1;
    x_1707_ = a2;
    goto loop;
    T8 = T12;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_197) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_198) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_generate_function_forward_199) {
  P code_out_,defn_;
  P x_1709F3620;
  P x_1706F3619;
  P x_1705F3618;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(defn_, 1);
loop:
  x_1705F3618 = code_out_;
  if (DYNREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    T0 = LITREF(lit_519);
  } else {
    T0 = LITREF(lit_520);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1705F3618,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1705F3618,LITREF(lit_521));
  T2 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_binding),T2);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1705F3618,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1705F3618,LITREF(lit_522));
  x_1706F3619 = code_out_;
  T5 = FUNSHELL(1,fun_x_1709_196,3);
  x_1709F3620 = T5;
  FUNINIT(x_1709F3620, 3,x_1706F3619,code_out_,x_1709F3620);
  T9 = fun_197;
  T10 = fun_198;
  T8 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T9,T10);
  T7 = CALL1(1,VARREF(YgooScolsScolYenum),T8);
  T14 = CALL1(1,VARREF(YevalSastYfunction_bindings),defn_);
  T13 = CALL1(1,VARREF(YgooStypesYlen),T14);
  T12 = CALL1(1,VARREF(YgooScolsSseqYbelow),T13);
  T11 = CALL1(1,VARREF(YgooScolsScolYenum),T12);
  T6 = CALL2(0,x_1709F3620,T7,T11);
  T4 = T6;
  T15 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_528));
UNLINK_STACK();
  QRET(T15);
}

FUNCODEDEF(fun_generate_function_binding_200) {
  P code_out_,defn_;
  P x_1711F3625;
  P nameF3624;
  P x_1710F3623;
  P tmpF3622;
  P nameF3621;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(defn_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  nameF3621 = T1;
  T4 = CALL2(1,VARREF(YisaQ),nameF3621,VARREF(YevalSastYLmodule_bindingG));
  tmpF3622 = T4;
  if (tmpF3622 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSastYbinding_kind),nameF3621);
    T6 = CALL2(1,VARREF(YgooScolsScolYmemQ),LITREF(lit_531),T7);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSg2cYmangle_binding),nameF3621);
    T8 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T9);
    T2 = T8;
  } else {
    T11 = CALL2(1,VARREF(YgooSmacrosYEE),nameF3621,YPfalse);
    if (T11 != YPfalse) {
      x_1710F3623 = code_out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1710F3623,LITREF(lit_532));
      T14 = CALL1(1,VARREF(YevalSastYfunction_index),defn_);
      T13 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1710F3623,T14);
      T12 = T13;
      T10 = T12;
    } else {
      T17 = CALL2(1,VARREF(YisaQ),nameF3621,VARREF(YevalSastYLlocal_bindingG));
      if (T17 != YPfalse) {
        T18 = CALL1(1,VARREF(YevalSastYbinding_name),nameF3621);
        T16 = T18;
      } else {
        T16 = nameF3621;
      }
      nameF3624 = T16;
      x_1711F3625 = code_out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1711F3625,LITREF(lit_533));
      T20 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),nameF3624);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1711F3625,T20);
      CALL2(1,VARREF(YgooSioSportYputs),x_1711F3625,LITREF(lit_534));
      T22 = CALL1(1,VARREF(YevalSastYfunction_index),defn_);
      T21 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1711F3625,T22);
      T19 = T21;
      T15 = T19;
      T10 = T15;
    }
    T2 = T10;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_forward_201) {
  P code_out_,defn_;
  P boundQF3626;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(defn_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  T1 = CALL2(1,VARREF(YisaQ),T2,VARREF(YevalSastYLmodule_bindingG));
  boundQF3626 = T1;
  if (boundQF3626 != YPfalse) {
    T3 = LITREF(lit_536);
  } else {
    T3 = LITREF(lit_537);
  }
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T3);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,defn_);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_538));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_202) {
  P def_;
  P T0;
  P a1;
LINK_STACK();
  ARG(def_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSg2cYgenerate_function_code),FREEREF(0),def_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_bodies_203) {
  P code_out_,definitions_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definitions_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_541));
  T1 = FUNFAB(fun_202,1,code_out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,definitions_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_204) {
  P def_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(def_, 0);
loop:
  T2 = CALL2(1,VARREF(YisaQ),def_,VARREF(YevalSastYLast_primitiveG));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL4(1,VARREF(YevalSg2cYgenerate_closure_structure),def_,FREEREF(0),FREEREF(1),FREEREF(2));
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_functions_205) {
  P definitions_,f_,d_,code_out_;
  P T0,T1,T2;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(definitions_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = FUNFAB(fun_204,3,f_,d_,code_out_);
  T2 = CALL1(1,VARREF(YgooScolsSseqYrev),definitions_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_closure_structure_206) {
  P definition_,f_,d_,code_out_;
  P x_1714F3629;
  P x_1713F3628;
  P x_1712F3627;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(definition_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSastYfunction_signature),definition_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),definition_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,definition_);
  x_1712F3627 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1712F3627,LITREF(lit_548));
  T2 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_549));
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1712F3627,T2);
  x_1713F3628 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1713F3628,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_body_reference),code_out_,definition_);
  CALL2(1,VARREF(YgooSioSportYput),x_1713F3628,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYfunction_debug_name),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1713F3628,YPchr((P)44));
  T4 = CALL1(1,VARREF(YevalSastYfunction_signature),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T4,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1713F3628,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_550));
  CALL2(1,VARREF(YgooSioSportYput),x_1713F3628,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_551));
  CALL2(1,VARREF(YgooSioSportYput),x_1713F3628,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYprogram_line),definition_);
  if (T5 != YPfalse) {
    x_1714F3629 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1714F3629,LITREF(lit_552));
    T8 = CALL1(1,VARREF(YevalSastYprogram_line),definition_);
    T7 = CALL1(1,VARREF(YgooSmathYnum_to_str),T8);
    CALL2(1,VARREF(YgooSioSportYputs),x_1714F3629,T7);
    T9 = CALL2(1,VARREF(YgooSioSportYputs),x_1714F3629,LITREF(lit_553));
    T6 = T9;
  } else {
    T11 = CALL1(1,VARREF(YevalSastYfunction_source),definition_);
    T10 = CALL2(1,VARREF(YevalSg2cYgen_ref),T11,code_out_);
  }
  T12 = CALL2(1,VARREF(YgooSioSportYput),x_1713F3628,YPchr((P)41));
  T13 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_292));
UNLINK_STACK();
  QRET(T13);
}

FUNCODEDEF(fun_generate_function_body_reference_207) {
  P code_out_,definition_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definition_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_556));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,definition_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_557));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1719_208) {
  P x_1718_,x_1717_,x_1716_;
  P x_1720F3635;
  P bF3634;
  P iF3633;
  P firstQF3632;
  P tmpF3631;
  P tmpF3630;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_1718_, 0);
  ARG(x_1717_, 1);
  ARG(x_1716_, 2);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1718_);
  tmpF3630 = T3;
  if (tmpF3630 != YPfalse) {
    T4 = tmpF3630;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1717_);
    tmpF3631 = T6;
    if (tmpF3631 != YPfalse) {
      T7 = tmpF3631;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1716_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_1718_);
    firstQF3632 = T10;
    T12 = CALL1(1,VARREF(YgooScolsScolYnow),x_1717_);
    iF3633 = T12;
    T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1716_);
    bF3634 = T14;
    T15 = CALL1(1,VARREF(Ynot),firstQF3632);
    if (T15 != YPfalse) {
      T16 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    x_1720F3635 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1720F3635,LITREF(lit_563));
    T18 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF3633);
    T17 = CALL2(1,VARREF(YgooSioSportYputs),x_1720F3635,T18);
    T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1718_);
    T21 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1717_);
    T22 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1716_);
    a1 = T20;
    a2 = T21;
    a3 = T22;
    x_1718_ = a1;
    x_1717_ = a2;
    x_1716_ = a3;
    goto loop;
    T13 = T19;
    T11 = T13;
    T9 = T11;
    T0 = T9;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_209) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_210) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_generate_shadow_args_211) {
  P bindings_,code_out_;
  P x_1719F3637;
  P x_1715F3636;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(bindings_, 0);
  ARG(code_out_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindings_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_560));
    x_1715F3636 = code_out_;
    T4 = FUNSHELL(1,fun_x_1719_208,3);
    x_1719F3637 = T4;
    FUNINIT(x_1719F3637, 3,x_1715F3636,code_out_,x_1719F3637);
    T8 = fun_209;
    T9 = fun_210;
    T7 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T8,T9);
    T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
    T11 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)1));
    T10 = CALL1(1,VARREF(YgooScolsScolYenum),T11);
    T12 = CALL1(1,VARREF(YgooScolsScolYenum),bindings_);
    T5 = CALL3(0,x_1719F3637,T6,T10,T12);
    T3 = T5;
    T13 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_292));
    T0 = T13;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_return_212) {
  P defn_,d_,code_out_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(defn_, 0);
  ARG(d_, 1);
  ARG(code_out_, 2);
loop:
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_568));
  T0 = CALL1(1,VARREF(YevalSastYfunction_body),defn_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T0,code_out_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_292));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_generate_return_213) {
  P defn_,d_,code_out_;
  P x_1721F3638;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3;
LINK_STACK();
  ARG(defn_, 0);
  ARG(d_, 1);
  ARG(code_out_, 2);
loop:
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  T1 = CALL1(1,VARREF(YevalSastYfunction_value),defn_);
  T0 = CALL1(1,VARREF(YevalSast_linearizeYunconstrained_typeQ),T1);
  if (T0 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYput),code_out_,YPchr((P)81));
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_570));
  x_1721F3638 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1721F3638,YPchr((P)40));
  T3 = CALL1(1,VARREF(YevalSastYfunction_body),defn_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1721F3638,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_292));
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_primitive_inlinableQ_214) {
  P e_;
  P tmpF3639;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYfunction_adjectives),e_);
  T1 = CALL2(1,VARREF(YgooScolsScolYmemQ),T2,LITREF(lit_573));
  tmpF3639 = T1;
  if (tmpF3639 != YPfalse) {
    T3 = tmpF3639;
  } else {
    T5 = CALL1(1,VARREF(YevalSastYfunction_adjectives),e_);
    T4 = CALL2(1,VARREF(YgooScolsScolYmemQ),T5,LITREF(lit_574));
    T3 = T4;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1727_215) {
  P x_1726_,x_1725_;
  P bindingF3642;
  P firstQF3641;
  P tmpF3640;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1726_, 0);
  ARG(x_1725_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1726_);
  tmpF3640 = T3;
  if (tmpF3640 != YPfalse) {
    T4 = tmpF3640;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1725_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1726_);
    firstQF3641 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1725_);
    bindingF3642 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF3641);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_583));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3642,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1726_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1725_);
    a1 = T13;
    a2 = T14;
    x_1726_ = a1;
    x_1725_ = a2;
    goto loop;
    T8 = T12;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_216) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_217) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_generate_function_code_218) {
  P code_out_,e_;
  P x_1727F3646;
  P x_1724F3645;
  P x_1723F3644;
  P x_1722F3643;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(e_, 1);
loop:
  x_1722F3643 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1722F3643,LITREF(lit_577));
  if (DYNREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    T0 = LITREF(lit_578);
  } else {
    T0 = LITREF(lit_156);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1722F3643,T0);
  T2 = CALL1(1,VARREF(YevalSg2cYprimitive_inlinableQ),e_);
  if (T2 != YPfalse) {
    T1 = LITREF(lit_579);
  } else {
    T1 = LITREF(lit_156);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1722F3643,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1722F3643,LITREF(lit_580));
  T4 = CALL1(1,VARREF(YevalSastYfunction_binding),e_);
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),T4,code_out_);
  x_1723F3644 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1723F3644,YPchr((P)40));
  x_1724F3645 = code_out_;
  T6 = FUNSHELL(1,fun_x_1727_215,3);
  x_1727F3646 = T6;
  FUNINIT(x_1727F3646, 3,x_1724F3645,code_out_,x_1727F3646);
  T10 = fun_216;
  T11 = fun_217;
  T9 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T10,T11);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),T9);
  T13 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  T7 = CALL2(0,x_1727F3646,T8,T12);
  T5 = T7;
  T14 = CALL2(1,VARREF(YgooSioSportYput),x_1723F3644,YPchr((P)41));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_586));
  T15 = CALL1(1,VARREF(YevalSastYfunction_temporaries),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_local_temporaries),T15,code_out_);
  T16 = CALL1(1,VARREF(YevalSastYfunction_registers),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_registers),T16,code_out_);
  T17 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_shadow_args),T17,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_587));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_588));
  T18 = CALL1(1,VARREF(YevalSastYfunction_body),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T18,e_,YPint((P)1),code_out_);
  CALL3(1,VARREF(YevalSg2cYgenerate_return),e_,YPint((P)1),code_out_);
  T19 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_589));
UNLINK_STACK();
  QRET(T19);
}

FUNCODEDEF(fun_dispatcherQ_219) {
  P definition_;
  P tmpF3650;
  P nameF3649;
  P tmpF3648;
  P bindingF3647;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(definition_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_binding),definition_);
  bindingF3647 = T1;
  T3 = CALL2(1,VARREF(YisaQ),bindingF3647,VARREF(YevalSastYLmodule_bindingG));
  tmpF3648 = T3;
  if (tmpF3648 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSastYbinding_name),bindingF3647);
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T7);
    nameF3649 = T6;
    T9 = CALL2(1,VARREF(YgooSmathYE),nameF3649,LITREF(lit_592));
    tmpF3650 = T9;
    if (tmpF3650 != YPfalse) {
      T10 = tmpF3650;
    } else {
      T12 = CALL2(1,VARREF(YgooScolsSseqYfinds),nameF3649,LITREF(lit_593));
      T14 = CALL1(1,VARREF(YgooStypesYlen),nameF3649);
      T15 = CALL1(1,VARREF(YgooStypesYlen),LITREF(lit_594));
      T13 = CALL2(1,VARREF(YgooSmathY_),T14,T15);
      T11 = CALL2(1,VARREF(YgooSmathYE),T12,T13);
      T10 = T11;
    }
    T8 = T10;
    T5 = T8;
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1731_220) {
  P x_1730_,x_1729_;
  P bF3653;
  P firstQF3652;
  P tmpF3651;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1730_, 0);
  ARG(x_1729_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1730_);
  tmpF3651 = T3;
  if (tmpF3651 != YPfalse) {
    T4 = tmpF3651;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1729_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1730_);
    firstQF3652 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1729_);
    bF3653 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF3652);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bF3653,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1730_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1729_);
    a1 = T13;
    a2 = T14;
    x_1730_ = a1;
    x_1729_ = a2;
    goto loop;
    T8 = T12;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_221) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_222) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_223) {
  P b_;
  P x_1732F3654;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),b_,VARREF(YevalSastYLbindingG));
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(0));
    T2 = CALL1(1,VARREF(YevalSastYbinding_dottedQ),b_);
    if (T2 != YPfalse) {
      T3 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_605));
    } else {
      T4 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_606));
    }
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),b_,FREEREF(0));
    x_1732F3654 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1732F3654,LITREF(lit_607));
    T6 = BOXVAL(FREEREF(1));
    T5 = CALL1(1,VARREF(YgooSmathYnum_to_str),T6);
    CALL2(1,VARREF(YgooSioSportYputs),x_1732F3654,T5);
    T7 = CALL2(1,VARREF(YgooSioSportYputs),x_1732F3654,LITREF(lit_608));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_292));
    T10 = BOXVAL(FREEREF(1));
    T9 = CALL2(1,VARREF(YgooSmathYA),T10,YPint((P)1));
    T8 = BOXVAL(FREEREF(1)) = T9;
    T0 = T8;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_code_224) {
  P code_out_,definition_;
  P x_1731F3658;
  P x_1728F3657;
  P bindingsF3656;
  P offsetF3655;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definition_, 1);
loop:
  offsetF3655 = YPint((P)0);
  offsetF3655 = BOXFAB(offsetF3655);
  T3 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
  bindingsF3656 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_596));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,definition_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_597));
  T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindingsF3656);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_598));
    x_1728F3657 = code_out_;
    T7 = FUNSHELL(1,fun_x_1731_220,3);
    x_1731F3658 = T7;
    FUNINIT(x_1731F3658, 3,x_1728F3657,code_out_,x_1731F3658);
    T11 = fun_221;
    T12 = fun_222;
    T10 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T11,T12);
    T9 = CALL1(1,VARREF(YgooScolsScolYenum),T10);
    T14 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
    T13 = CALL1(1,VARREF(YgooScolsScolYenum),T14);
    T8 = CALL2(0,x_1731F3658,T9,T13);
    T6 = T8;
    T15 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_292));
  } else {
  }
  T16 = CALL1(1,VARREF(YevalSastYfunction_temporaries),definition_);
  CALL2(1,VARREF(YevalSg2cYgenerate_local_temporaries),T16,code_out_);
  T17 = CALL1(1,VARREF(YevalSastYfunction_registers),definition_);
  CALL2(1,VARREF(YevalSg2cYgenerate_registers),T17,code_out_);
  T18 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
  CALL2(1,VARREF(YevalSg2cYgenerate_shadow_args),T18,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_603));
  T19 = FUNFAB(fun_223,2,code_out_,offsetF3655);
  CALL2(1,VARREF(YgooSmacrosYdo),T19,bindingsF3656);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_609));
  T20 = CALL1(1,VARREF(YevalSastYfunction_body),definition_);
  CALL4(1,VARREF(YevalSg2cYto_c),T20,definition_,YPint((P)1),code_out_);
  T22 = CALL1(1,VARREF(YevalSg2cYdispatcherQ),definition_);
  T21 = CALL1(1,VARREF(Ynot),T22);
  if (T21 != YPfalse) {
    T23 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_610));
  } else {
  }
  CALL3(1,VARREF(YevalSg2cYgenerate_return),definition_,YPint((P)1),code_out_);
  T24 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_611));
  T2 = T24;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1734_225) {
  P x_1733_;
  P tempF3659;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1733_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1733_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1733_);
    tempF3659 = T4;
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(0));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_616));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),tempF3659,FREEREF(0));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_292));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1733_);
    a1 = T6;
    x_1733_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_local_temporaries_226) {
  P temps_,code_out_;
  P x_1734F3660;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(temps_, 0);
  ARG(code_out_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_1734_225,2);
  x_1734F3660 = T1;
  FUNINIT(x_1734F3660, 2,code_out_,x_1734F3660);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),temps_);
  T2 = CALL1(0,x_1734F3660,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_next_reg_227) {
  P j_,i_;
  P tmpF3661;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(j_, 0);
  ARG(i_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooSmathYE),i_,VARREF(YevalSg2cYTregisters_per_lineT));
  tmpF3661 = T2;
  if (tmpF3661 != YPfalse) {
    T3 = tmpF3661;
  } else {
    T4 = CALL2(1,VARREF(YgooSmathYE),j_,FREEREF(0));
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_624));
    T5 = CALL1(0,FREEREF(2),j_);
    T0 = T5;
  } else {
    T7 = CALL2(1,VARREF(YgooSmathYE),i_,YPint((P)0));
    T6 = CALL1(1,VARREF(Ynot),T7);
    if (T6 != YPfalse) {
      T8 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)44));
    } else {
    }
    T9 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(3),j_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T9,FREEREF(1));
    T11 = CALL2(1,VARREF(YgooSmathYA),j_,YPint((P)1));
    T12 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T11;
    a2 = T12;
    j_ = a1;
    i_ = a2;
    goto loop;
    T0 = T10;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_next_line_228) {
  P j_;
  P next_regF3662;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(j_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),j_,FREEREF(0));
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_621));
    T3 = FUNSHELL(1,fun_next_reg_227,5);
    next_regF3662 = T3;
    FUNINIT(next_regF3662, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),next_regF3662);
    T4 = CALL2(0,next_regF3662,j_,YPint((P)0));
    T2 = T4;
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_registers_229) {
  P regs_,code_out_;
  P next_lineF3664;
  P nregsF3663;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(regs_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),regs_);
  nregsF3663 = T1;
  T3 = FUNSHELL(1,fun_next_line_228,4);
  next_lineF3664 = T3;
  FUNINIT(next_lineF3664, 4,nregsF3663,code_out_,next_lineF3664,regs_);
  T4 = CALL1(0,next_lineF3664,YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_info_name_230) {
  P name_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),name_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_627),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_maybe_declare_231) {
  P modname_;
  P x_1735F3665;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T2 = CALL3(1,VARREF(YgooScolsScolYelt_or),FREEREF(0),modname_,YPfalse);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,FREEREF(0),modname_);
    x_1735F3665 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1735F3665,LITREF(lit_632));
    T4 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),modname_);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1735F3665,T4);
    T5 = CALL2(1,VARREF(YgooSioSportYputs),x_1735F3665,LITREF(lit_633));
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_232) {
  P binding_;
  P home_modF3666;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_module_name),binding_);
  home_modF3666 = T1;
  T4 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T5 = CALL1(0,FREEREF(1),home_modF3666);
    T2 = T5;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYdeclare_imported_module_infos) {
  P code_out_,mod_;
  P maybe_declareF3669;
  P envF3668;
  P seenF3667;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)50));
  seenF3667 = T1;
  T3 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  envF3668 = T3;
  T5 = FUNSHELL(0,fun_maybe_declare_231,2);
  maybe_declareF3669 = T5;
  FUNINIT(maybe_declareF3669, 2,seenF3667,code_out_);
  T7 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF3668);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYmodule_name),T7);
  CALL2(1,VARREF(YgooSmacrosYdo),maybe_declareF3669,T6);
  T9 = FUNFAB(fun_232,2,mod_,maybe_declareF3669);
  T10 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T8 = CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T9,T10);
  T4 = T8;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1737_234) {
  P x_1736_;
  P x_1738F3671;
  P nF3670;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_1736_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1736_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1736_);
    nF3670 = T4;
    x_1738F3671 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1738F3671,LITREF(lit_641));
    T5 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nF3670);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1738F3671,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1738F3671,LITREF(lit_642));
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1736_);
    a1 = T8;
    x_1736_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_235) {
  P local_name_,binding_;
  P x_1739F3672;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(local_name_, 0);
  ARG(binding_, 1);
loop:
  T2 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    x_1739F3672 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1739F3672,LITREF(lit_646));
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T4 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T5);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1739F3672,T4);
    CALL2(1,VARREF(YgooSioSportYputs),x_1739F3672,LITREF(lit_647));
    T7 = CALL1(1,VARREF(YevalSastYbinding_module_name),binding_);
    T6 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),T7);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1739F3672,T6);
    CALL2(1,VARREF(YgooSioSportYputs),x_1739F3672,LITREF(lit_648));
    T10 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T9 = CALL2(1,VARREF(YgooSmacrosYEE),T10,local_name_);
    if (T9 != YPfalse) {
      T8 = LITREF(lit_649);
    } else {
      T11 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),local_name_);
      T8 = T11;
    }
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1739F3672,T8);
    T12 = CALL2(1,VARREF(YgooSioSportYputs),x_1739F3672,LITREF(lit_650));
    T3 = T12;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_236) {
  P binding_;
  P x_1744F3677;
  P x_1743F3676;
  P x_1742F3675;
  P x_1741F3674;
  P x_1740F3673;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
  if (T1 != YPfalse) {
    x_1740F3673 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1740F3673,LITREF(lit_654));
    T3 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T2 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T3);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1740F3673,T2);
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1740F3673,LITREF(lit_655));
    T6 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
    x_1741F3674 = T6;
    x_1742F3675 = VARREF(YgooSmacrosYEE);
    T9 = CALL2(1,x_1742F3675,x_1741F3674,LITREF(lit_151));
    if (T9 != YPfalse) {
      x_1743F3676 = FREEREF(1);
      CALL2(1,VARREF(YgooSioSportYputs),x_1743F3676,LITREF(lit_656));
      T11 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1743F3676,T11);
      T12 = CALL2(1,VARREF(YgooSioSportYputs),x_1743F3676,LITREF(lit_657));
      T10 = T12;
      T8 = T10;
    } else {
      T14 = CALL2(1,x_1742F3675,x_1741F3674,LITREF(lit_153));
      if (T14 != YPfalse) {
        x_1744F3677 = FREEREF(1);
        CALL2(1,VARREF(YgooSioSportYputs),x_1744F3677,LITREF(lit_658));
        T16 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
        CALL2(1,VARREF(YgooSioSwriteYemit),x_1744F3677,T16);
        T17 = CALL2(1,VARREF(YgooSioSportYputs),x_1744F3677,LITREF(lit_659));
        T15 = T17;
        T13 = T15;
      } else {
        T18 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_660));
        T13 = T18;
      }
      T8 = T13;
    }
    T7 = T8;
    T5 = T7;
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1746_237) {
  P x_1745_;
  P x_1747F3681;
  P bindingF3680;
  P exported_asF3679;
  P tup33F3678;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1;
LINK_STACK();
  ARG(x_1745_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1745_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooScolsScolYnow_key),x_1745_);
    T6 = CALL1(1,VARREF(YgooScolsScolYnow),x_1745_);
    T4 = CALL2(1,VARREF(Ytup),T5,T6);
    tup33F3678 = T4;
    T8 = CALL2(1,VARREF(YgooSmacrosYelt),tup33F3678,YPint((P)0));
    exported_asF3679 = T8;
    T10 = CALL2(1,VARREF(YgooSmacrosYelt),tup33F3678,YPint((P)1));
    bindingF3680 = T10;
    x_1747F3681 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1747F3681,LITREF(lit_665));
    T12 = CALL1(1,VARREF(YevalSastYbinding_name),bindingF3680);
    T11 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T12);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1747F3681,T11);
    CALL2(1,VARREF(YgooSioSportYputs),x_1747F3681,LITREF(lit_666));
    T15 = CALL1(1,VARREF(YevalSastYbinding_name),bindingF3680);
    T14 = CALL2(1,VARREF(YgooSmacrosYEE),T15,exported_asF3679);
    if (T14 != YPfalse) {
      T13 = LITREF(lit_667);
    } else {
      T16 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),exported_asF3679);
      T13 = T16;
    }
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1747F3681,T13);
    T17 = CALL2(1,VARREF(YgooSioSportYputs),x_1747F3681,LITREF(lit_668));
    T19 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1745_);
    a1 = T19;
    x_1745_ = a1;
    goto loop;
    T9 = T18;
    T7 = T9;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYgenerate_module_info) {
  P code_out_,mod_;
  P x_1750F3691;
  P x_1749F3690;
  P x_1748F3689;
  P x_1746F3688;
  P x_1737F3687;
  P uses_namesF3686;
  P usesF3685;
  P envF3684;
  P info_nameF3683;
  P nameF3682;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  nameF3682 = T1;
  T3 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nameF3682);
  info_nameF3683 = T3;
  T5 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  envF3684 = T5;
  T7 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF3684);
  usesF3685 = T7;
  T9 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYmodule_name),usesF3685);
  uses_namesF3686 = T9;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_637));
  CALL2(1,VARREF(YevalSg2cYdeclare_imported_module_infos),code_out_,mod_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_638));
  T10 = FUNSHELL(1,fun_x_1737_234,2);
  x_1737F3687 = T10;
  FUNINIT(x_1737F3687, 2,code_out_,x_1737F3687);
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF3686);
  T11 = CALL1(0,x_1737F3687,T12);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_643));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_644));
  T13 = FUNFAB(fun_235,2,mod_,code_out_);
  T14 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  CALL2(1,VARREF(YevalSastYdo_named_static_global_bindings),T13,T14);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_651));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_652));
  T15 = FUNFAB(fun_236,2,mod_,code_out_);
  T16 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T15,T16);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_661));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_662));
  T17 = FUNSHELL(1,fun_x_1746_237,2);
  x_1746F3688 = T17;
  FUNINIT(x_1746F3688, 2,code_out_,x_1746F3688);
  T20 = CALL1(1,VARREF(YevalSastYmodule_exports),mod_);
  T19 = CALL1(1,VARREF(YgooScolsScolYenum),T20);
  T18 = CALL1(0,x_1746F3688,T19);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_669));
  x_1748F3689 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1748F3689,LITREF(lit_670));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1748F3689,info_nameF3683);
  T21 = CALL2(1,VARREF(YgooSioSportYputs),x_1748F3689,LITREF(lit_671));
  x_1749F3690 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1749F3690,LITREF(lit_672));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1749F3690,info_nameF3683);
  T22 = CALL2(1,VARREF(YgooSioSportYputs),x_1749F3690,LITREF(lit_673));
  x_1750F3691 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1750F3691,LITREF(lit_674));
  T23 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),nameF3682);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1750F3691,T23);
  T24 = CALL2(1,VARREF(YgooSioSportYputs),x_1750F3691,LITREF(lit_675));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_676));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_677));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_678));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_679));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_680));
  T25 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_681));
  T8 = T25;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_init_name_239) {
  P name_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),name_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_684),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_init_decl_240) {
  P name_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),name_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_687),T1,LITREF(lit_688));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1752_241) {
  P x_1751_;
  P x_1753F3693;
  P nF3692;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_1751_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1751_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1751_);
    nF3692 = T4;
    x_1753F3693 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1753F3693,LITREF(lit_695));
    T5 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nF3692);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1753F3693,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1753F3693,LITREF(lit_696));
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1751_);
    a1 = T8;
    x_1751_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1757_242) {
  P x_1756_;
  P x_1758F3695;
  P nF3694;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_1756_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1756_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1756_);
    nF3694 = T4;
    x_1758F3695 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1758F3695,LITREF(lit_706));
    T5 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),nF3694);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1758F3695,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1758F3695,LITREF(lit_707));
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1756_);
    a1 = T8;
    x_1756_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_module_init_243) {
  P code_out_,mod_,form_;
  P x_1757F3704;
  P x_1755F3703;
  P x_1754F3702;
  P x_1752F3701;
  P uses_namesF3700;
  P usesF3699;
  P envF3698;
  P init_declF3697;
  P nameF3696;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1,a2,a3;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
  ARG(form_, 2);
loop:
  if (DYNREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    T1 = LITREF(lit_691);
  } else {
    T2 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T1 = T2;
  }
  nameF3696 = T1;
  T4 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nameF3696);
  init_declF3697 = T4;
  T6 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  envF3698 = T6;
  T8 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF3698);
  usesF3699 = T8;
  T10 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYmodule_name),usesF3699);
  uses_namesF3700 = T10;
  T11 = CALL1(1,VARREF(Ynot),DYNREF(YevalSg2cYTdynamic_linkingQT));
  if (T11 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_692));
    T13 = FUNSHELL(1,fun_x_1752_241,2);
    x_1752F3701 = T13;
    FUNINIT(x_1752F3701, 2,code_out_,x_1752F3701);
    T15 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF3700);
    T14 = CALL1(0,x_1752F3701,T15);
    T12 = T14;
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_697));
  x_1754F3702 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1754F3702,LITREF(lit_698));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1754F3702,init_declF3697);
  T16 = CALL2(1,VARREF(YgooSioSportYputs),x_1754F3702,LITREF(lit_699));
  x_1755F3703 = code_out_;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1755F3703,init_declF3697);
  T17 = CALL2(1,VARREF(YgooSioSportYputs),x_1755F3703,LITREF(lit_700));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_701));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_702));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_703));
  T18 = CALL1(1,VARREF(Ynot),DYNREF(YevalSg2cYTdynamic_linkingQT));
  if (T18 != YPfalse) {
    T19 = FUNSHELL(1,fun_x_1757_242,2);
    x_1757F3704 = T19;
    FUNINIT(x_1757F3704, 2,code_out_,x_1757F3704);
    T21 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF3700);
    T20 = CALL1(0,x_1757F3704,T21);
    T22 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_708));
  } else {
  }
  CALL4(1,VARREF(YevalSg2cYto_c),form_,YPfalse,YPint((P)1),code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_709));
  T23 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_710));
  T9 = T23;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_main_244) {
  P code_out_,mod_;
  P x_1763F3711;
  P x_1762F3710;
  P x_1761F3709;
  P x_1760F3708;
  P x_1759F3707;
  P info_nameF3706;
  P nameF3705;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  nameF3705 = T1;
  T3 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nameF3705);
  info_nameF3706 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_713));
  x_1759F3707 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1759F3707,LITREF(lit_714));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1759F3707,info_nameF3706);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1759F3707,LITREF(lit_715));
  x_1760F3708 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1760F3708,LITREF(lit_716));
  T5 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nameF3705);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1760F3708,T5);
  T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1760F3708,LITREF(lit_717));
  x_1761F3709 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1761F3709,LITREF(lit_718));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1761F3709,info_nameF3706);
  T7 = CALL2(1,VARREF(YgooSioSportYputs),x_1761F3709,LITREF(lit_719));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_720));
  x_1762F3710 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1762F3710,LITREF(lit_721));
  T8 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_722));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1762F3710,T8);
  T9 = CALL2(1,VARREF(YgooSioSportYputs),x_1762F3710,LITREF(lit_723));
  x_1763F3711 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1763F3711,LITREF(lit_724));
  T10 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),nameF3705);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1763F3711,T10);
  T11 = CALL2(1,VARREF(YgooSioSportYputs),x_1763F3711,LITREF(lit_725));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_726));
  T12 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_727));
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YevalSg2cY___main_0___() {
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
  DYNDEFSET(YevalSg2cYTdefinitionsT,YPfalse);
  DYNDEFSET(YevalSg2cYTdynamic_linkingQT,YPfalse);
  lit_0 = YPPsym((P)"<g2c-module-loader>");
  T1 = (P)YPpair(VARREF(YevalSastYLmodule_loaderG),Ynil);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YevalSg2cYLg2c_module_loaderG,T0);
  lit_1 = YPPsym((P)"module-loader-appname");
  lit_2 = YPPlist(1,YPPsym((P)"_x"));
  T2 = YPsig(LITREF(lit_2),YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_appname_0 = YPmet(FUNCODEREF(fun_module_loader_appname_0),LITREF(lit_1),T2,ENVNUL,PNUL,sloc(28));
  T5 = BOUNDP(YevalSg2cYmodule_loader_appname);
  if (T5 != YPfalse) {
    T4 = VARREF(YevalSg2cYmodule_loader_appname);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_module_loader_appname_0;
  T3 = XCALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(YevalSg2cYmodule_loader_appname,T3);
  lit_3 = YPPsym((P)"module-loader-appname-setter");
  lit_4 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T7 = YPsig(LITREF(lit_4),YPPlist(2,VARREF(YLstrG),VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_appname_setter_1 = YPmet(FUNCODEREF(fun_module_loader_appname_setter_1),LITREF(lit_3),T7,ENVNUL,PNUL,sloc(28));
  T10 = BOUNDP(YevalSg2cYmodule_loader_appname_setter);
  if (T10 != YPfalse) {
    T9 = VARREF(YevalSg2cYmodule_loader_appname_setter);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_module_loader_appname_setter_1;
  T8 = XCALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YevalSg2cYmodule_loader_appname_setter,T8);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YevalSg2cYmodule_loader_appname),VARREF(YevalSg2cYmodule_loader_appname_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_5 = YPPsym((P)"module-loader-app-modname");
  lit_6 = YPPlist(1,YPPsym((P)"_x"));
  T12 = YPsig(LITREF(lit_6),YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_app_modname_2 = YPmet(FUNCODEREF(fun_module_loader_app_modname_2),LITREF(lit_5),T12,ENVNUL,PNUL,sloc(29));
  T15 = BOUNDP(YevalSg2cYmodule_loader_app_modname);
  if (T15 != YPfalse) {
    T14 = VARREF(YevalSg2cYmodule_loader_app_modname);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_module_loader_app_modname_2;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YevalSg2cYmodule_loader_app_modname,T13);
  lit_7 = YPPsym((P)"module-loader-app-modname-setter");
  lit_8 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T17 = YPsig(LITREF(lit_8),YPPlist(2,VARREF(YLsymG),VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_app_modname_setter_3 = YPmet(FUNCODEREF(fun_module_loader_app_modname_setter_3),LITREF(lit_7),T17,ENVNUL,PNUL,sloc(29));
  T20 = BOUNDP(YevalSg2cYmodule_loader_app_modname_setter);
  if (T20 != YPfalse) {
    T19 = VARREF(YevalSg2cYmodule_loader_app_modname_setter);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_module_loader_app_modname_setter_3;
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YevalSg2cYmodule_loader_app_modname_setter,T18);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YevalSg2cYmodule_loader_app_modname),VARREF(YevalSg2cYmodule_loader_app_modname_setter),VARREF(YLsymG),VARREF(YPprop_unbound_error));
  lit_9 = YPPsym((P)"<g2c-module>");
  T23 = (P)YPpair(VARREF(YevalSastYLmoduleG),Ynil);
  T22 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_9),T23);
  VARSET(YevalSg2cYLg2c_moduleG,T22);
  lit_10 = YPPsym((P)"module-src-file");
  lit_11 = YPPlist(1,YPPsym((P)"_x"));
  T24 = YPsig(LITREF(lit_11),YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_src_file_4 = YPmet(FUNCODEREF(fun_module_src_file_4),LITREF(lit_10),T24,ENVNUL,PNUL,sloc(32));
  T27 = BOUNDP(YevalSg2cYmodule_src_file);
  if (T27 != YPfalse) {
    T26 = VARREF(YevalSg2cYmodule_src_file);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_module_src_file_4;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(YevalSg2cYmodule_src_file,T25);
  lit_12 = YPPsym((P)"module-src-file-setter");
  lit_13 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T29 = YPsig(LITREF(lit_13),YPPlist(2,VARREF(YLstrG),VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_src_file_setter_5 = YPmet(FUNCODEREF(fun_module_src_file_setter_5),LITREF(lit_12),T29,ENVNUL,PNUL,sloc(32));
  T32 = BOUNDP(YevalSg2cYmodule_src_file_setter);
  if (T32 != YPfalse) {
    T31 = VARREF(YevalSg2cYmodule_src_file_setter);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_module_src_file_setter_5;
  T30 = XCALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(YevalSg2cYmodule_src_file_setter,T30);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSg2cYLg2c_moduleG),VARREF(YevalSg2cYmodule_src_file),VARREF(YevalSg2cYmodule_src_file_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_14 = YPPsym((P)"module-mtime");
  lit_15 = YPPlist(1,YPPsym((P)"_x"));
  T34 = YPsig(LITREF(lit_15),YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_mtime_6 = YPmet(FUNCODEREF(fun_module_mtime_6),LITREF(lit_14),T34,ENVNUL,PNUL,sloc(33));
  T37 = BOUNDP(YevalSg2cYmodule_mtime);
  if (T37 != YPfalse) {
    T36 = VARREF(YevalSg2cYmodule_mtime);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_module_mtime_6;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(YevalSg2cYmodule_mtime,T35);
  lit_16 = YPPsym((P)"module-mtime-setter");
  lit_17 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T39 = YPsig(LITREF(lit_17),YPPlist(2,VARREF(YLfloG),VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_mtime_setter_7 = YPmet(FUNCODEREF(fun_module_mtime_setter_7),LITREF(lit_16),T39,ENVNUL,PNUL,sloc(33));
  T42 = BOUNDP(YevalSg2cYmodule_mtime_setter);
  if (T42 != YPfalse) {
    T41 = VARREF(YevalSg2cYmodule_mtime_setter);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_module_mtime_setter_7;
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YevalSg2cYmodule_mtime_setter,T40);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSg2cYLg2c_moduleG),VARREF(YevalSg2cYmodule_mtime),VARREF(YevalSg2cYmodule_mtime_setter),VARREF(YLfloG),VARREF(YPprop_unbound_error));
  lit_18 = YPPsym((P)"module-loader-module-type");
  lit_19 = YPPlist(1,YPPsym((P)"loader"));
  T44 = YPsig(LITREF(lit_19),YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_module_loader_module_type_8 = YPmet(FUNCODEREF(fun_module_loader_module_type_8),LITREF(lit_18),T44,ENVNUL,PNUL,sloc(35));
  T47 = BOUNDP(YevalSastYmodule_loader_module_type);
  if (T47 != YPfalse) {
    T46 = VARREF(YevalSastYmodule_loader_module_type);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_module_loader_module_type_8;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YevalSastYmodule_loader_module_type,T45);
  lit_20 = YPPsym((P)"load-module");
  lit_21 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  lit_22 = YPsb((P)"START");
  lit_23 = YPsb((P)"OPTIMIZE");
  lit_24 = Ynil;
  lit_25 = YPPlist(1,YPPsym((P)"name"));
  lit_26 = YPsb((P)"EMIT");
  T54 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T54,ENVNUL,PNUL,sloc(59));
  T53 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T53,ENVNUL,PNUL,sloc(59));
  T52 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T52,ENVNUL,PNUL,sloc(58));
  T51 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T51,ENVNUL,PNUL,sloc(58));
  T50 = YPsig(LITREF(lit_25),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T50,ENVNUL,PNUL,sloc(61));
  T49 = YPsig(LITREF(lit_21),YPPlist(2,VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  fun_load_module_14 = YPmet(FUNCODEREF(fun_load_module_14),LITREF(lit_20),T49,ENVNUL,PNUL,sloc(40));
  T57 = BOUNDP(YevalSastYload_module);
  if (T57 != YPfalse) {
    T56 = VARREF(YevalSastYload_module);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_load_module_14;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YevalSastYload_module,T55);
  lit_27 = YPPsym((P)"module-up-to-date?");
  lit_28 = YPPlist(1,YPPsym((P)"mod"));
  T59 = YPsig(LITREF(lit_28),YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSg2cYmodule_up_to_dateQ = YPmet(FUNCODEREF(YevalSg2cYmodule_up_to_dateQ),LITREF(lit_27),T59,ENVNUL,PNUL,sloc(75));
  T60 = YevalSg2cYmodule_up_to_dateQ;
  VARSET(YevalSg2cYmodule_up_to_dateQ,T60);
  lit_29 = YPPsym((P)"purge-outdated-modules");
  lit_30 = YPPlist(1,YPPsym((P)"loader"));
  lit_31 = YPPlist(1,YPPsym((P)"mod"));
  lit_32 = YPPlist(1,YPPsym((P)"name"));
  lit_33 = YPsb((P)" has changed.\n");
  T63 = YPsig(LITREF(lit_31),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T63,ENVNUL,PNUL,sloc(83));
  T62 = YPsig(LITREF(lit_32),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T62,ENVNUL,PNUL,sloc(89));
  T61 = YPsig(LITREF(lit_30),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYpurge_outdated_modules = YPmet(FUNCODEREF(YevalSg2cYpurge_outdated_modules),LITREF(lit_29),T61,ENVNUL,PNUL,sloc(78));
  T64 = YevalSg2cYpurge_outdated_modules;
  VARSET(YevalSg2cYpurge_outdated_modules,T64);
  lit_34 = YPPsym((P)"g2c-def-app");
  lit_35 = YPPlist(2,YPPsym((P)"appname"),YPPsym((P)"modname"));
  T65 = YPsig(LITREF(lit_35),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSg2cYLg2c_module_loaderG),Ynil);
  YevalSg2cYg2c_def_app = YPmet(FUNCODEREF(YevalSg2cYg2c_def_app),LITREF(lit_34),T65,ENVNUL,PNUL,sloc(102));
  T66 = YevalSg2cYg2c_def_app;
  VARSET(YevalSg2cYg2c_def_app,T66);
  lit_36 = YPPsym((P)"g2c-build-app");
  lit_37 = YPPlist(1,YPPsym((P)"loader"));
  lit_38 = YPsb((P)"Searching for undefined global bindings.\n");
  T67 = YPsig(LITREF(lit_37),YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYg2c_build_app = YPmet(FUNCODEREF(YevalSg2cYg2c_build_app),LITREF(lit_36),T67,ENVNUL,PNUL,sloc(108));
  T68 = YevalSg2cYg2c_build_app;
  VARSET(YevalSg2cYg2c_build_app,T68);
  lit_39 = YPPsym((P)"g2c-test");
  lit_40 = YPPlist(1,YPPsym((P)"x"));
  lit_41 = YPsb((P)"g2c-");
  lit_42 = YPPsym((P)"eval/main");
  T69 = YPsig(LITREF(lit_40),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYg2c_test = YPmet(FUNCODEREF(YevalSg2cYg2c_test),LITREF(lit_39),T69,ENVNUL,PNUL,sloc(117));
  T70 = YevalSg2cYg2c_test;
  VARSET(YevalSg2cYg2c_test,T70);
  DYNDEFSET(YevalSg2cYTtmp_file_counterT,YPint((P)-1));
  lit_43 = YPPsym((P)"g2c-ast");
  lit_44 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"env"));
  lit_45 = YPsb((P)"exp-%d-%d");
  T77 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T77,ENVNUL,PNUL,sloc(129));
  T76 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T76,ENVNUL,PNUL,sloc(129));
  T75 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T75,ENVNUL,PNUL,sloc(129));
  T74 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_25 = YPmet(FUNCODEREF(fun_25),YPfalse,T74,ENVNUL,PNUL,sloc(129));
  T73 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T73,ENVNUL,PNUL,sloc(128));
  T72 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T72,ENVNUL,PNUL,sloc(128));
  T71 = YPsig(LITREF(lit_44),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_ast_28 = YPmet(FUNCODEREF(fun_g2c_ast_28),LITREF(lit_43),T71,ENVNUL,PNUL,sloc(122));
  T80 = BOUNDP(YevalSg2cYg2c_ast);
  if (T80 != YPfalse) {
    T79 = VARREF(YevalSg2cYg2c_ast);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_g2c_ast_28;
  T78 = XCALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(YevalSg2cYg2c_ast,T78);
  lit_46 = YPPsym((P)"g2c-exp");
  lit_47 = YPPlist(2,YPPsym((P)"exp"),YPPsym((P)"env"));
  T82 = YPsig(LITREF(lit_47),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_exp_29 = YPmet(FUNCODEREF(fun_g2c_exp_29),LITREF(lit_46),T82,ENVNUL,PNUL,sloc(134));
  T85 = BOUNDP(YevalSg2cYg2c_exp);
  if (T85 != YPfalse) {
    T84 = VARREF(YevalSg2cYg2c_exp);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_g2c_exp_29;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YevalSg2cYg2c_exp,T83);
  lit_48 = YPPsym((P)"compile-load");
  lit_49 = YPPlist(1,YPPsym((P)"name"));
  lit_50 = YPsb((P)".so");
  lit_51 = YPsb((P)".so");
  T87 = YPsig(LITREF(lit_49),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_compile_load_30 = YPmet(FUNCODEREF(fun_compile_load_30),LITREF(lit_48),T87,ENVNUL,PNUL,sloc(137));
  T90 = BOUNDP(YevalSg2cYcompile_load);
  if (T90 != YPfalse) {
    T89 = VARREF(YevalSg2cYcompile_load);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_compile_load_30;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YevalSg2cYcompile_load,T88);
  lit_52 = YPPsym((P)"g2c-eval");
  lit_53 = YPPlist(2,YPPsym((P)"exp"),YPPsym((P)"env"));
  T92 = YPsig(LITREF(lit_53),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_eval_31 = YPmet(FUNCODEREF(fun_g2c_eval_31),LITREF(lit_52),T92,ENVNUL,PNUL,sloc(141));
  T95 = BOUNDP(YevalStopYg2c_eval);
  if (T95 != YPfalse) {
    T94 = VARREF(YevalStopYg2c_eval);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_g2c_eval_31;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YevalStopYg2c_eval,T93);
  lit_54 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"env"));
  T97 = YPsig(LITREF(lit_54),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_eval_32 = YPmet(FUNCODEREF(fun_g2c_eval_32),LITREF(lit_52),T97,ENVNUL,PNUL,sloc(145));
  T100 = BOUNDP(YevalStopYg2c_eval);
  if (T100 != YPfalse) {
    T99 = VARREF(YevalStopYg2c_eval);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_g2c_eval_32;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YevalStopYg2c_eval,T98);
  lit_55 = YPsb((P)"g2c");
  T102 = XCALL2(1,VARREF(YevalSg2cYg2c_def_app),LITREF(lit_55),LITREF(lit_42));
  VARSET(YevalSg2cYTg2c_appT,T102);
  lit_56 = YPPsym((P)"g2c-top");
  T103 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_g2c_top_33 = YPmet(FUNCODEREF(fun_g2c_top_33),LITREF(lit_56),T103,ENVNUL,PNUL,sloc(151));
  T106 = BOUNDP(YevalSg2cYg2c_top);
  if (T106 != YPfalse) {
    T105 = VARREF(YevalSg2cYg2c_top);
  } else {
    T105 = YPfalse;
  }
  T107 = fun_g2c_top_33;
  T104 = XCALL2(1,VARREF(YPdefine_method),T105,T107);
  VARSET(YevalSg2cYg2c_top,T104);
  VARSET(YevalSg2cYg2c_goo,VARREF(YevalSg2cYg2c_top));
  lit_57 = YPPsym((P)"g2c-clean");
  lit_58 = YPsb((P)"g2c");
  T108 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_g2c_clean_34 = YPmet(FUNCODEREF(fun_g2c_clean_34),LITREF(lit_57),T108,ENVNUL,PNUL,sloc(153));
  T111 = BOUNDP(YevalSg2cYg2c_clean);
  if (T111 != YPfalse) {
    T110 = VARREF(YevalSg2cYg2c_clean);
  } else {
    T110 = YPfalse;
  }
  T112 = fun_g2c_clean_34;
  T109 = XCALL2(1,VARREF(YPdefine_method),T110,T112);
  VARSET(YevalSg2cYg2c_clean,T109);
  lit_59 = YPPsym((P)"compute-ast");
  lit_60 = YPPlist(2,YPPsym((P)"filename"),YPPsym((P)"ct-env"));
  lit_61 = YPsb((P)"READ");
  lit_62 = YPsb((P)"AST");
  T113 = YPsig(LITREF(lit_60),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compute_ast_35 = YPmet(FUNCODEREF(fun_compute_ast_35),LITREF(lit_59),T113,ENVNUL,PNUL,sloc(159));
  T116 = BOUNDP(YevalSg2cYcompute_ast);
  if (T116 != YPfalse) {
    T115 = VARREF(YevalSg2cYcompute_ast);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_compute_ast_35;
  T114 = XCALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(YevalSg2cYcompute_ast,T114);
  lit_63 = YPPsym((P)"compute-program");
  lit_64 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_65 = YPsb((P)"BOX");
  lit_66 = YPsb((P)"ANA");
  lit_67 = YPsb((P)"LFT");
  lit_68 = YPsb((P)"EXT");
  lit_69 = YPsb((P)"CLO");
  lit_70 = YPsb((P)"TMP");
  lit_71 = YPsb((P)"REG");
  T118 = YPsig(LITREF(lit_64),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compute_program_36 = YPmet(FUNCODEREF(fun_compute_program_36),LITREF(lit_63),T118,ENVNUL,PNUL,sloc(168));
  T121 = BOUNDP(YevalSg2cYcompute_program);
  if (T121 != YPfalse) {
    T120 = VARREF(YevalSg2cYcompute_program);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_compute_program_36;
  T119 = XCALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(YevalSg2cYcompute_program,T119);
  lit_72 = YPPsym((P)"generate-c-module");
  lit_73 = YPPlist(4,YPPsym((P)"code-out"),YPPsym((P)"e"),YPPsym((P)"prg"),YPPsym((P)"mod"));
  T123 = YPsig(LITREF(lit_73),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_c_module_37 = YPmet(FUNCODEREF(fun_generate_c_module_37),LITREF(lit_72),T123,ENVNUL,PNUL,sloc(194));
  T126 = BOUNDP(YevalSg2cYgenerate_c_module);
  if (T126 != YPfalse) {
    T125 = VARREF(YevalSg2cYgenerate_c_module);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_generate_c_module_37;
  T124 = XCALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(YevalSg2cYgenerate_c_module,T124);
  lit_74 = YPPsym((P)"generate-c-application");
  lit_75 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"mod"));
  lit_76 = YPsb((P)"-init");
  T130 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T130,ENVNUL,PNUL,sloc(210));
  T129 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T129,ENVNUL,PNUL,sloc(210));
  T128 = YPsig(LITREF(lit_75),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_c_application_40 = YPmet(FUNCODEREF(fun_generate_c_application_40),LITREF(lit_74),T128,ENVNUL,PNUL,sloc(206));
  T133 = BOUNDP(YevalSg2cYgenerate_c_application);
  if (T133 != YPfalse) {
    T132 = VARREF(YevalSg2cYgenerate_c_application);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_generate_c_application_40;
  T131 = XCALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(YevalSg2cYgenerate_c_application,T131);
  lit_77 = YPPlist(1,YPPsym((P)"exp"));
  lit_78 = YPPlist(1,YPPsym((P)"return"));
  lit_79 = YPPsym((P)"x-1544");
  lit_80 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_81 = YPPsym((P)"for-mods");
  lit_82 = YPsb((P)"Match Pattern Failure");
  lit_83 = YPPsym((P)"do-module-loader-modules");
  lit_84 = YPPsym((P)"fun");
  lit_85 = Ynil;
  T137 = YPsig(LITREF(lit_80),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1544_41 = YPmet(FUNCODEREF(fun_x_1544_41),LITREF(lit_79),T137,ENVNUL,PNUL,YPfalse);
  T136 = YPsig(LITREF(lit_78),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T136,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(LITREF(lit_77),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T135,ENVNUL,PNUL,YPfalse);
  T138 = fun_43;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"for-mods"),T138);
  lit_86 = YPPsym((P)"generate-makefile");
  lit_87 = YPPlist(1,YPPsym((P)"loader"));
  lit_88 = YPsb((P)"-init");
  lit_89 = YPsb((P)"Makefile");
  lit_90 = YPsb((P)"C_OBJS_DD = $(patsubst %,..");
  lit_91 = YPsb((P)"%,$(C_OBJS))\n");
  lit_92 = YPsb((P)": ..");
  lit_93 = YPsb((P)"grt.h\n");
  lit_94 = YPsb((P)"\t$(CC) -I.. ");
  lit_95 = YPPlist(1,YPPsym((P)"mod"));
  lit_96 = YPPlist(1,YPPsym((P)"i"));
  lit_97 = YPsb((P)"-I");
  lit_98 = YPsb((P)" ");
  lit_99 = YPsb((P)"$(CFLAGS) -DDEFAULT_GOO_ROOT=\\\"$(GOO_ROOT)\\\" -c -o $@ $<\n\n");
  lit_100 = YPsb((P)"OBJS = \\\n");
  lit_101 = YPPlist(1,YPPsym((P)"mod"));
  lit_102 = YPPsym((P)"put-obj");
  lit_103 = YPPlist(1,YPPsym((P)"name"));
  lit_104 = YPsb((P)"\t");
  lit_105 = YPsb((P)" \\\n");
  lit_106 = YPPlist(1,YPPsym((P)"name"));
  lit_107 = YPsb((P)".c");
  lit_108 = YPPlist(1,YPPsym((P)"n"));
  lit_109 = YPsb((P)"\t");
  lit_110 = YPsb((P)"\n\n");
  lit_111 = YPsb((P)": $(C_OBJS_DD) $(OBJS)\n");
  lit_112 = YPsb((P)"\t$(CC) $(LDFLAGS) -o ");
  lit_113 = YPsb((P)" $(C_OBJS_DD) $(OBJS) $(LIBS)");
  lit_114 = YPPlist(1,YPPsym((P)"mod"));
  lit_115 = YPPlist(1,YPPsym((P)"l"));
  lit_116 = YPsb((P)" -l");
  lit_117 = YPsb((P)"\n\nclean:\n\trm -f ");
  lit_118 = YPsb((P)" $(OBJS)\n");
  T149 = YPsig(LITREF(lit_96),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T149,ENVNUL,PNUL,sloc(230));
  T148 = YPsig(LITREF(lit_95),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T148,ENVNUL,PNUL,sloc(229));
  T147 = YPsig(LITREF(lit_103),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_put_obj_46 = YPmet(FUNCODEREF(fun_put_obj_46),LITREF(lit_102),T147,ENVNUL,PNUL,sloc(234));
  T146 = YPsig(LITREF(lit_106),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T146,ENVNUL,PNUL,sloc(238));
  T145 = YPsig(LITREF(lit_108),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T145,ENVNUL,PNUL,sloc(239));
  T144 = YPsig(LITREF(lit_101),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T144,ENVNUL,PNUL,sloc(233));
  T143 = YPsig(LITREF(lit_115),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T143,ENVNUL,PNUL,sloc(245));
  T142 = YPsig(LITREF(lit_114),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T142,ENVNUL,PNUL,sloc(244));
  T141 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T141,ENVNUL,PNUL,sloc(225));
  T140 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T140,ENVNUL,PNUL,sloc(225));
  T139 = YPsig(LITREF(lit_87),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_generate_makefile_54 = YPmet(FUNCODEREF(fun_generate_makefile_54),LITREF(lit_86),T139,ENVNUL,PNUL,sloc(219));
  T152 = BOUNDP(YevalSg2cYgenerate_makefile);
  if (T152 != YPfalse) {
    T151 = VARREF(YevalSg2cYgenerate_makefile);
  } else {
    T151 = YPfalse;
  }
  T153 = fun_generate_makefile_54;
  T150 = XCALL2(1,VARREF(YPdefine_method),T151,T153);
  VARSET(YevalSg2cYgenerate_makefile,T150);
  lit_119 = YPPsym((P)"pp");
  lit_120 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"code-out"));
  T154 = YPsig(LITREF(lit_120),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_pp_55 = YPmet(FUNCODEREF(fun_pp_55),LITREF(lit_119),T154,ENVNUL,PNUL,sloc(254));
  T157 = BOUNDP(YevalSg2cYpp);
  if (T157 != YPfalse) {
    T156 = VARREF(YevalSg2cYpp);
  } else {
    T156 = YPfalse;
  }
  T158 = fun_pp_55;
  T155 = XCALL2(1,VARREF(YPdefine_method),T156,T158);
  VARSET(YevalSg2cYpp,T155);
  lit_121 = YPsb((P)"_mod");
  VARSET(YevalSg2cYDnow_mod_var_name,LITREF(lit_121));
  lit_122 = YPPsym((P)"generate-header");
  lit_123 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"modname"));
  lit_124 = YPsb((P)"/* GOO 2 C $REVISION: 0.120 $ \n");
  lit_125 = YPsb((P)"  */\n\n#include \"grt.h\"\n");
  lit_126 = YPsb((P)"#include \"dlgrt.h\"\n");
  lit_127 = YPsb((P)"\nstatic PSTR ");
  lit_128 = YPsb((P)" = PNUL;\n");
  lit_129 = YPsb((P)"\nstatic P sloc (int line) {\n");
  lit_130 = YPsb((P)"  if (");
  lit_131 = YPsb((P)" == PNUL) ");
  lit_132 = YPsb((P)" = ");
  lit_133 = YPsb((P)";\n");
  lit_134 = YPsb((P)"  return ");
  lit_135 = YPsb((P)"%src-loc");
  lit_136 = YPsb((P)"(");
  lit_137 = YPsb((P)"%ib");
  lit_138 = YPsb((P)"((P)line), ");
  lit_139 = YPsb((P)");\n");
  lit_140 = YPsb((P)"}\n");
  T159 = YPsig(LITREF(lit_123),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_header_56 = YPmet(FUNCODEREF(fun_generate_header_56),LITREF(lit_122),T159,ENVNUL,PNUL,sloc(260));
  T162 = BOUNDP(YevalSg2cYgenerate_header);
  if (T162 != YPfalse) {
    T161 = VARREF(YevalSg2cYgenerate_header);
  } else {
    T161 = YPfalse;
  }
  T163 = fun_generate_header_56;
  T160 = XCALL2(1,VARREF(YPdefine_method),T161,T163);
  VARSET(YevalSg2cYgenerate_header,T160);
  lit_141 = YPPsym((P)"generate-trailer");
  lit_142 = YPPlist(1,YPPsym((P)"code-out"));
  lit_143 = YPsb((P)"\n/* END OF GENERATED CODE. */\n");
  T164 = YPsig(LITREF(lit_142),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_generate_trailer_57 = YPmet(FUNCODEREF(fun_generate_trailer_57),LITREF(lit_141),T164,ENVNUL,PNUL,sloc(275));
  T167 = BOUNDP(YevalSg2cYgenerate_trailer);
  if (T167 != YPfalse) {
    T166 = VARREF(YevalSg2cYgenerate_trailer);
  } else {
    T166 = YPfalse;
  }
  T168 = fun_generate_trailer_57;
  T165 = XCALL2(1,VARREF(YPdefine_method),T166,T168);
  VARSET(YevalSg2cYgenerate_trailer,T165);
  lit_144 = YPPsym((P)"generate-global-environment");
  lit_145 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"mod"));
  lit_146 = YPsb((P)"\n/* MODULE ENVIRONMENT: ");
  lit_147 = YPsb((P)" */\n\n");
  lit_148 = YPPlist(1,YPPsym((P)"binding"));
  T170 = YPsig(LITREF(lit_148),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_58 = YPmet(FUNCODEREF(fun_58),YPfalse,T170,ENVNUL,PNUL,sloc(288));
  T169 = YPsig(LITREF(lit_145),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_global_environment_59 = YPmet(FUNCODEREF(fun_generate_global_environment_59),LITREF(lit_144),T169,ENVNUL,PNUL,sloc(285));
  T173 = BOUNDP(YevalSg2cYgenerate_global_environment);
  if (T173 != YPfalse) {
    T172 = VARREF(YevalSg2cYgenerate_global_environment);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_generate_global_environment_59;
  T171 = XCALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(YevalSg2cYgenerate_global_environment,T171);
  lit_149 = YPPsym((P)"generate-global-binding");
  lit_150 = YPPlist(3,YPPsym((P)"code-out"),YPPsym((P)"imported?"),YPPsym((P)"gb"));
  lit_151 = YPPsym((P)"global");
  lit_152 = YPPsym((P)"runtime");
  lit_153 = YPPsym((P)"dynamic");
  lit_154 = YPsb((P)"RTV");
  lit_155 = YPsb((P)"DYN");
  lit_156 = YPsb((P)"");
  lit_157 = YPsb((P)"EXT");
  lit_158 = YPsb((P)"DEF");
  lit_159 = YPsb((P)"(");
  lit_160 = YPsb((P)",");
  lit_161 = YPsb((P)",");
  lit_162 = YPsb((P)");\n");
  T175 = YPsig(LITREF(lit_150),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_global_binding_60 = YPmet(FUNCODEREF(fun_generate_global_binding_60),LITREF(lit_149),T175,ENVNUL,PNUL,sloc(293));
  T178 = BOUNDP(YevalSg2cYgenerate_global_binding);
  if (T178 != YPfalse) {
    T177 = VARREF(YevalSg2cYgenerate_global_binding);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_generate_global_binding_60;
  T176 = XCALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(YevalSg2cYgenerate_global_binding,T176);
  lit_163 = YPsb((P)"Y");
  VARSET(YevalSg2cYDmodule_separator,LITREF(lit_163));
  lit_164 = YPsb((P)"_");
  VARSET(YevalSg2cYDlocal_suffix,LITREF(lit_164));
  lit_165 = YPsb((P)"F");
  VARSET(YevalSg2cYDhygiene_marker,LITREF(lit_165));
  lit_166 = YPsb((P)"Z");
  VARSET(YevalSg2cYDescape_separator,LITREF(lit_166));
  lit_167 = YPsb((P)"I");
  VARSET(YevalSg2cYDiep_suffix,LITREF(lit_167));
  lit_168 = YPsb((P)"M");
  VARSET(YevalSg2cYDmethod_mangled_marker_string,LITREF(lit_168));
  T180 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDmodule_separator),YPint((P)0));
  VARSET(YevalSg2cYDmodule_marker,T180);
  T183 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDlocal_suffix),YPint((P)0));
  T182 = VARSET(YevalSg2cYDlocal_marker,T183);
  T181 = T182;
  return T181;
}

P YevalSg2cY___main_1___() {
  P x_1578F3717;
  P x_1576F3716;
  P x_1574F3715;
  P x_1572F3714;
  P tableF3713;
  P vecF3712;
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
  P T192,T193,T194,T195,T196,T197,T198,T199,T200,T201,T202,T203,T204,T205,T206,T207;
  P T208,T209,T210,T211,T212,T213,T214,T215,T216,T217,T218,T219,T220,T221,T222,T223;
  P T224,T225,T226,T227,T228,T229,T230,T231,T232,T233,T234,T235,T236,T237,T238,T239;
  P T240,T241,T242,T243,T244,T245,T246,T247,T248,T249,T250,T251,T252,T253,T254,T255;
  P T256,T257,T258,T259,T260,T261,T262,T263,T264,T265,T266,T267,T268,T269,T270,T271;
  P T272,T273,T274,T275,T276,T277,T278,T279,T280,T281,T282,T283,T284,T285,T286,T287;
DEFCREGS();
loop:
  T0 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDhygiene_marker),YPint((P)0));
  VARSET(YevalSg2cYDhygiene_char,T0);
  T1 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDescape_separator),YPint((P)0));
  VARSET(YevalSg2cYDescape_marker,T1);
  T2 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDiep_suffix),YPint((P)0));
  VARSET(YevalSg2cYDiep_marker,T2);
  T3 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDmethod_mangled_marker_string),YPint((P)0));
  VARSET(YevalSg2cYDmethod_mangled_marker,T3);
  VARSET(YevalSg2cYDmin_character_code,YPint((P)0));
  VARSET(YevalSg2cYDmax_character_code,YPint((P)255));
  T4 = XCALL1(1,VARREF(Ynew),VARREF(YgooScolsSvecYLvecG));
  VARSET(YevalSg2cYTmangle_bufferT,T4);
  lit_169 = XCALLN(1, Ytup, 2, YPchr((P)45), YPchr((P)95));
  lit_170 = XCALLN(1, Ytup, 2, YPchr((P)33), YPchr((P)88));
  lit_171 = XCALLN(1, Ytup, 2, YPchr((P)36), YPchr((P)68));
  lit_172 = XCALLN(1, Ytup, 2, YPchr((P)37), YPchr((P)80));
  lit_173 = XCALLN(1, Ytup, 2, YPchr((P)42), YPchr((P)84));
  lit_174 = XCALLN(1, Ytup, 2, YPchr((P)47), YPchr((P)83));
  lit_175 = XCALLN(1, Ytup, 2, YPchr((P)60), YPchr((P)76));
  lit_176 = XCALLN(1, Ytup, 2, YPchr((P)62), YPchr((P)71));
  lit_177 = XCALLN(1, Ytup, 2, YPchr((P)63), YPchr((P)81));
  lit_178 = XCALLN(1, Ytup, 2, YPchr((P)43), YPchr((P)65));
  lit_179 = XCALLN(1, Ytup, 2, YPchr((P)38), YPchr((P)66));
  lit_180 = XCALLN(1, Ytup, 2, YPchr((P)94), YPchr((P)67));
  lit_181 = XCALLN(1, Ytup, 2, YPchr((P)95), YPchr((P)85));
  lit_182 = XCALLN(1, Ytup, 2, YPchr((P)64), YPchr((P)79));
  lit_183 = XCALLN(1, Ytup, 2, YPchr((P)61), YPchr((P)69));
  lit_184 = XCALLN(1, Ytup, 2, YPchr((P)126), YPchr((P)78));
  lit_185 = XCALLN(1, Ytup, 2, YPchr((P)124), YPchr((P)75));
  lit_186 = XCALLN(1, Ytup, 2, YPchr((P)46), YPchr((P)73));
  T5 = XCALLN(1,VARREF(Ytup),18,LITREF(lit_169),LITREF(lit_170),LITREF(lit_171),LITREF(lit_172),LITREF(lit_173),LITREF(lit_174),LITREF(lit_175),LITREF(lit_176),LITREF(lit_177),LITREF(lit_178),LITREF(lit_179),LITREF(lit_180),LITREF(lit_181),LITREF(lit_182),LITREF(lit_183),LITREF(lit_184),LITREF(lit_185),LITREF(lit_186));
  VARSET(YevalSg2cYDmangles_data,T5);
  lit_187 = YPPsym((P)"char-buffer-as-string");
  lit_188 = YPPlist(1,YPPsym((P)"buffer"));
  lit_189 = YPPsym((P)"loop");
  lit_190 = YPPlist(1,YPPsym((P)"i"));
  T7 = YPsig(LITREF(lit_190),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_61 = YPmet(FUNCODEREF(fun_loop_61),LITREF(lit_189),T7,ENVNUL,PNUL,sloc(340));
  T6 = YPsig(LITREF(lit_188),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YevalSg2cYchar_buffer_as_string = YPmet(FUNCODEREF(YevalSg2cYchar_buffer_as_string),LITREF(lit_187),T6,ENVNUL,PNUL,sloc(336));
  T8 = YevalSg2cYchar_buffer_as_string;
  VARSET(YevalSg2cYchar_buffer_as_string,T8);
  lit_191 = YPsb((P)"\\t");
  lit_192 = YPsb((P)"\\f");
  lit_193 = YPsb((P)"\\r");
  lit_194 = YPsb((P)"\\n");
  lit_195 = YPsb((P)"\\\"");
  lit_196 = YPsb((P)"\\\\");
  T11 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T10 = XCALL2(1,VARREF(YgooScolsScolYfill),T11,YPfalse);
  vecF3712 = T10;
  T12 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)9));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_191),vecF3712,T12);
  T13 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)12));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_192),vecF3712,T13);
  T14 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)13));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_193),vecF3712,T14);
  T15 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)10));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_194),vecF3712,T15);
  T16 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)34));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_195),vecF3712,T16);
  T17 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)92));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_196),vecF3712,T17);
  T18 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),vecF3712);
  T9 = T18;
  VARSET(YevalSg2cYDc_escapes,T9);
  lit_197 = YPPsym((P)"mangle-string-literal");
  lit_198 = YPPlist(1,YPPsym((P)"str"));
  lit_199 = YPPlist(1,YPPsym((P)"i"));
  T20 = YPsig(LITREF(lit_199),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_63 = YPmet(FUNCODEREF(fun_loop_63),LITREF(lit_189),T20,ENVNUL,PNUL,sloc(361));
  T19 = YPsig(LITREF(lit_198),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_64 = YPmet(FUNCODEREF(fun_mangle_string_literal_64),LITREF(lit_197),T19,ENVNUL,PNUL,sloc(357));
  T23 = BOUNDP(YevalSg2cYmangle_string_literal);
  if (T23 != YPfalse) {
    T22 = VARREF(YevalSg2cYmangle_string_literal);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_mangle_string_literal_64;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YevalSg2cYmangle_string_literal,T21);
  lit_200 = YPPlist(1,YPPsym((P)"sym"));
  T25 = YPsig(LITREF(lit_200),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_65 = YPmet(FUNCODEREF(fun_mangle_string_literal_65),LITREF(lit_197),T25,ENVNUL,PNUL,sloc(372));
  T28 = BOUNDP(YevalSg2cYmangle_string_literal);
  if (T28 != YPfalse) {
    T27 = VARREF(YevalSg2cYmangle_string_literal);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_mangle_string_literal_65;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YevalSg2cYmangle_string_literal,T26);
  lit_201 = YPsb((P)"0123456789");
  VARSET(YevalSg2cYDnumber_characters,LITREF(lit_201));
  lit_202 = YPPsym((P)"mangle-integer");
  lit_203 = YPPlist(1,YPPsym((P)"number"));
  lit_204 = YPPsym((P)"process-integer");
  lit_205 = YPPlist(2,YPPsym((P)"number"),YPPsym((P)"index"));
  T31 = YPsig(LITREF(lit_205),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_process_integer_66 = YPmet(FUNCODEREF(fun_process_integer_66),LITREF(lit_204),T31,ENVNUL,PNUL,sloc(379));
  T30 = YPsig(LITREF(lit_203),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_integer_67 = YPmet(FUNCODEREF(fun_mangle_integer_67),LITREF(lit_202),T30,ENVNUL,PNUL,sloc(377));
  T34 = BOUNDP(YevalSg2cYmangle_integer);
  if (T34 != YPfalse) {
    T33 = VARREF(YevalSg2cYmangle_integer);
  } else {
    T33 = YPfalse;
  }
  T35 = fun_mangle_integer_67;
  T32 = XCALL2(1,VARREF(YPdefine_method),T33,T35);
  VARSET(YevalSg2cYmangle_integer,T32);
  lit_206 = YPPsym((P)"x-1572");
  lit_207 = YPPlist(1,YPPsym((P)"x-1571"));
  lit_208 = YPPsym((P)"x-1574");
  lit_209 = YPPlist(1,YPPsym((P)"x-1573"));
  lit_210 = YPPsym((P)"x-1576");
  lit_211 = YPPlist(1,YPPsym((P)"x-1575"));
  lit_212 = YPPsym((P)"x-1578");
  lit_213 = YPPlist(1,YPPsym((P)"x-1577"));
  T39 = YPsig(LITREF(lit_207),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1572_68 = YPmet(FUNCODEREF(fun_x_1572_68),LITREF(lit_206),T39,ENVNUL,PNUL,sloc(393));
  T38 = YPsig(LITREF(lit_209),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1574_69 = YPmet(FUNCODEREF(fun_x_1574_69),LITREF(lit_208),T38,ENVNUL,PNUL,sloc(397));
  T37 = YPsig(LITREF(lit_211),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1576_70 = YPmet(FUNCODEREF(fun_x_1576_70),LITREF(lit_210),T37,ENVNUL,PNUL,sloc(400));
  T36 = YPsig(LITREF(lit_213),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1578_71 = YPmet(FUNCODEREF(fun_x_1578_71),LITREF(lit_212),T36,ENVNUL,PNUL,sloc(402));
  T42 = XCALL2(1,VARREF(YgooSmathYA),VARREF(YevalSg2cYDmax_character_code),YPint((P)1));
  T41 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),T42);
  tableF3713 = T41;
  T43 = FUNSHELL(1,fun_x_1572_68,2);
  x_1572F3714 = T43;
  FUNINIT(x_1572F3714, 2,tableF3713,x_1572F3714);
  T46 = XCALL3(1,VARREF(YgooScolsSrangeYrange),VARREF(YevalSg2cYDmin_character_code),VARREF(YgooSmagYLE),VARREF(YevalSg2cYDmax_character_code));
  T45 = XCALL1(1,VARREF(YgooScolsScolYenum),T46);
  T44 = XCALL1(0,x_1572F3714,T45);
  T47 = FUNSHELL(1,fun_x_1574_69,2);
  x_1574F3715 = T47;
  FUNINIT(x_1574F3715, 2,tableF3713,x_1574F3715);
  T49 = XCALL1(1,VARREF(YgooScolsScolYenum),VARREF(YevalSg2cYDmangles_data));
  T48 = XCALL1(0,x_1574F3715,T49);
  T50 = FUNSHELL(1,fun_x_1576_70,2);
  x_1576F3716 = T50;
  FUNINIT(x_1576F3716, 2,tableF3713,x_1576F3716);
  T54 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)97));
  T55 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)122));
  T53 = XCALL3(1,VARREF(YgooScolsSrangeYrange),T54,VARREF(YgooSmagYLE),T55);
  T52 = XCALL1(1,VARREF(YgooScolsScolYenum),T53);
  T51 = XCALL1(0,x_1576F3716,T52);
  T56 = FUNSHELL(1,fun_x_1578_71,2);
  x_1578F3717 = T56;
  FUNINIT(x_1578F3717, 2,tableF3713,x_1578F3717);
  T60 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)48));
  T61 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)57));
  T59 = XCALL3(1,VARREF(YgooScolsSrangeYrange),T60,VARREF(YgooSmagYLE),T61);
  T58 = XCALL1(1,VARREF(YgooScolsScolYenum),T59);
  T57 = XCALL1(0,x_1578F3717,T58);
  T40 = tableF3713;
  VARSET(YevalSg2cYDname_mangler_table,T40);
  lit_214 = YPPsym((P)"mangler-reset");
  lit_215 = YPPlist(1,YPPsym((P)"buffer"));
  T62 = YPsig(LITREF(lit_215),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangler_reset = YPmet(FUNCODEREF(YevalSg2cYmangler_reset),LITREF(lit_214),T62,ENVNUL,PNUL,sloc(408));
  T63 = YevalSg2cYmangler_reset;
  VARSET(YevalSg2cYmangler_reset,T63);
  lit_216 = YPPsym((P)"mangle-name-into");
  lit_217 = YPPlist(2,YPPsym((P)"buf"),YPPsym((P)"name"));
  lit_218 = YPPsym((P)"x-1580");
  lit_219 = YPPlist(1,YPPsym((P)"x-1579"));
  T65 = YPsig(LITREF(lit_219),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1580_73 = YPmet(FUNCODEREF(fun_x_1580_73),LITREF(lit_218),T65,ENVNUL,PNUL,sloc(412));
  T64 = YPsig(LITREF(lit_217),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_name_into = YPmet(FUNCODEREF(YevalSg2cYmangle_name_into),LITREF(lit_216),T64,ENVNUL,PNUL,sloc(411));
  T66 = YevalSg2cYmangle_name_into;
  VARSET(YevalSg2cYmangle_name_into,T66);
  lit_220 = YPPsym((P)"mangle-raw-name");
  lit_221 = YPPlist(1,YPPsym((P)"name"));
  T67 = YPsig(LITREF(lit_221),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_75 = YPmet(FUNCODEREF(fun_mangle_raw_name_75),LITREF(lit_220),T67,ENVNUL,PNUL,sloc(416));
  T70 = BOUNDP(YevalSg2cYmangle_raw_name);
  if (T70 != YPfalse) {
    T69 = VARREF(YevalSg2cYmangle_raw_name);
  } else {
    T69 = YPfalse;
  }
  T71 = fun_mangle_raw_name_75;
  T68 = XCALL2(1,VARREF(YPdefine_method),T69,T71);
  VARSET(YevalSg2cYmangle_raw_name,T68);
  lit_222 = YPPlist(1,YPPsym((P)"name"));
  T72 = YPsig(LITREF(lit_222),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_76 = YPmet(FUNCODEREF(fun_mangle_raw_name_76),LITREF(lit_220),T72,ENVNUL,PNUL,sloc(421));
  T75 = BOUNDP(YevalSg2cYmangle_raw_name);
  if (T75 != YPfalse) {
    T74 = VARREF(YevalSg2cYmangle_raw_name);
  } else {
    T74 = YPfalse;
  }
  T76 = fun_mangle_raw_name_76;
  T73 = XCALL2(1,VARREF(YPdefine_method),T74,T76);
  VARSET(YevalSg2cYmangle_raw_name,T73);
  lit_223 = YPPsym((P)"mangle-local-name");
  lit_224 = YPPlist(1,YPPsym((P)"name"));
  T77 = YPsig(LITREF(lit_224),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_77 = YPmet(FUNCODEREF(fun_mangle_local_name_77),LITREF(lit_223),T77,ENVNUL,PNUL,sloc(424));
  T80 = BOUNDP(YevalSg2cYmangle_local_name);
  if (T80 != YPfalse) {
    T79 = VARREF(YevalSg2cYmangle_local_name);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_mangle_local_name_77;
  T78 = XCALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(YevalSg2cYmangle_local_name,T78);
  lit_225 = YPPlist(1,YPPsym((P)"name"));
  T82 = YPsig(LITREF(lit_225),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_78 = YPmet(FUNCODEREF(fun_mangle_local_name_78),LITREF(lit_223),T82,ENVNUL,PNUL,sloc(430));
  T85 = BOUNDP(YevalSg2cYmangle_local_name);
  if (T85 != YPfalse) {
    T84 = VARREF(YevalSg2cYmangle_local_name);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_mangle_local_name_78;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YevalSg2cYmangle_local_name,T83);
  lit_226 = YPPlist(1,YPPsym((P)"exp"));
  lit_227 = YPPlist(1,YPPsym((P)"return"));
  lit_228 = YPPsym((P)"x-1584");
  lit_229 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_230 = YPPsym((P)"or/set");
  lit_231 = YPPsym((P)"or");
  lit_232 = YPPsym((P)"set");
  T89 = YPsig(LITREF(lit_229),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1584_79 = YPmet(FUNCODEREF(fun_x_1584_79),LITREF(lit_228),T89,ENVNUL,PNUL,YPfalse);
  T88 = YPsig(LITREF(lit_227),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T88,ENVNUL,PNUL,YPfalse);
  T87 = YPsig(LITREF(lit_226),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T87,ENVNUL,PNUL,YPfalse);
  T90 = fun_81;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"or/set"),T90);
  lit_233 = YPPsym((P)"buf-cat2!");
  lit_234 = YPPlist(2,YPPsym((P)"buf"),YPPsym((P)"name"));
  lit_235 = YPPlist(1,YPPsym((P)"i"));
  T92 = YPsig(LITREF(lit_235),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_82 = YPmet(FUNCODEREF(fun_loop_82),LITREF(lit_189),T92,ENVNUL,PNUL,sloc(441));
  T91 = YPsig(LITREF(lit_234),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYbuf_cat2X = YPmet(FUNCODEREF(YevalSg2cYbuf_cat2X),LITREF(lit_233),T91,ENVNUL,PNUL,sloc(439));
  T93 = YevalSg2cYbuf_cat2X;
  VARSET(YevalSg2cYbuf_cat2X,T93);
  lit_236 = YPPsym((P)"mangle-module-into");
  lit_237 = YPPlist(2,YPPsym((P)"buf"),YPPsym((P)"mod"));
  T94 = YPsig(LITREF(lit_237),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_mangle_module_into_84 = YPmet(FUNCODEREF(fun_mangle_module_into_84),LITREF(lit_236),T94,ENVNUL,PNUL,sloc(446));
  T97 = BOUNDP(YevalSg2cYmangle_module_into);
  if (T97 != YPfalse) {
    T96 = VARREF(YevalSg2cYmangle_module_into);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_mangle_module_into_84;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YevalSg2cYmangle_module_into,T95);
  lit_238 = YPPsym((P)"mangle-global-name");
  lit_239 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"name"));
  T99 = YPsig(LITREF(lit_239),YPPlist(2,VARREF(YLanyG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_85 = YPmet(FUNCODEREF(fun_mangle_global_name_85),LITREF(lit_238),T99,ENVNUL,PNUL,sloc(453));
  T102 = BOUNDP(YevalSg2cYmangle_global_name);
  if (T102 != YPfalse) {
    T101 = VARREF(YevalSg2cYmangle_global_name);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_mangle_global_name_85;
  T100 = XCALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(YevalSg2cYmangle_global_name,T100);
  lit_240 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"name"));
  T104 = YPsig(LITREF(lit_240),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_86 = YPmet(FUNCODEREF(fun_mangle_global_name_86),LITREF(lit_238),T104,ENVNUL,PNUL,sloc(464));
  T107 = BOUNDP(YevalSg2cYmangle_global_name);
  if (T107 != YPfalse) {
    T106 = VARREF(YevalSg2cYmangle_global_name);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_mangle_global_name_86;
  T105 = XCALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(YevalSg2cYmangle_global_name,T105);
  lit_241 = YPPsym((P)"mangle-boot-name");
  lit_242 = YPPlist(1,YPPsym((P)"name"));
  T109 = YPsig(LITREF(lit_242),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_boot_name = YPmet(FUNCODEREF(YevalSg2cYmangle_boot_name),LITREF(lit_241),T109,ENVNUL,PNUL,sloc(469));
  T110 = YevalSg2cYmangle_boot_name;
  VARSET(YevalSg2cYmangle_boot_name,T110);
  lit_243 = YPPsym((P)"mangle-quotation-name");
  lit_244 = YPPlist(1,YPPsym((P)"name"));
  lit_245 = YPsb((P)"lit_");
  T111 = YPsig(LITREF(lit_244),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_quotation_name = YPmet(FUNCODEREF(YevalSg2cYmangle_quotation_name),LITREF(lit_243),T111,ENVNUL,PNUL,sloc(472));
  T112 = YevalSg2cYmangle_quotation_name;
  VARSET(YevalSg2cYmangle_quotation_name,T112);
  lit_246 = YPPsym((P)"mangle-binding");
  lit_247 = YPPlist(1,YPPsym((P)"binding"));
  lit_248 = YPPsym((P)"quotation");
  T113 = YPsig(LITREF(lit_247),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_89 = YPmet(FUNCODEREF(fun_mangle_binding_89),LITREF(lit_246),T113,ENVNUL,PNUL,sloc(478));
  T116 = BOUNDP(YevalSg2cYmangle_binding);
  if (T116 != YPfalse) {
    T115 = VARREF(YevalSg2cYmangle_binding);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_mangle_binding_89;
  T114 = XCALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(YevalSg2cYmangle_binding,T114);
  lit_249 = YPPsym((P)"mangle-local-marked-name");
  lit_250 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"marker"));
  T118 = YPsig(LITREF(lit_250),YPPlist(2,VARREF(YLstrG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_local_marked_name = YPmet(FUNCODEREF(YevalSg2cYmangle_local_marked_name),LITREF(lit_249),T118,ENVNUL,PNUL,sloc(484));
  T119 = YevalSg2cYmangle_local_marked_name;
  VARSET(YevalSg2cYmangle_local_marked_name,T119);
  lit_251 = YPPlist(1,YPPsym((P)"binding"));
  T120 = YPsig(LITREF(lit_251),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_91 = YPmet(FUNCODEREF(fun_mangle_binding_91),LITREF(lit_246),T120,ENVNUL,PNUL,sloc(491));
  T123 = BOUNDP(YevalSg2cYmangle_binding);
  if (T123 != YPfalse) {
    T122 = VARREF(YevalSg2cYmangle_binding);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_mangle_binding_91;
  T121 = XCALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YevalSg2cYmangle_binding,T121);
  lit_252 = YPPlist(1,YPPsym((P)"binding"));
  T125 = YPsig(LITREF(lit_252),YPPlist(1,VARREF(YevalSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_92 = YPmet(FUNCODEREF(fun_mangle_binding_92),LITREF(lit_246),T125,ENVNUL,PNUL,sloc(495));
  T128 = BOUNDP(YevalSg2cYmangle_binding);
  if (T128 != YPfalse) {
    T127 = VARREF(YevalSg2cYmangle_binding);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_mangle_binding_92;
  T126 = XCALL2(1,VARREF(YPdefine_method),T127,T129);
  VARSET(YevalSg2cYmangle_binding,T126);
  lit_253 = YPPlist(1,YPPsym((P)"exp"));
  lit_254 = YPPlist(1,YPPsym((P)"return"));
  lit_255 = YPPsym((P)"x-1588");
  lit_256 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_257 = YPPsym((P)"for-commas");
  lit_258 = YPPsym((P)"let");
  lit_259 = YPPsym((P)"for");
  lit_260 = YPPsym((P)"first?");
  lit_261 = YPPsym((P)"first-then");
  lit_262 = YPPsym((P)"op");
  lit_263 = YPPsym((P)"unless");
  lit_264 = YPPsym((P)"put");
  T132 = YPsig(LITREF(lit_256),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1588_93 = YPmet(FUNCODEREF(fun_x_1588_93),LITREF(lit_255),T132,ENVNUL,PNUL,YPfalse);
  T131 = YPsig(LITREF(lit_254),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_94 = YPmet(FUNCODEREF(fun_94),YPfalse,T131,ENVNUL,PNUL,YPfalse);
  T130 = YPsig(LITREF(lit_253),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_95 = YPmet(FUNCODEREF(fun_95),YPfalse,T130,ENVNUL,PNUL,YPfalse);
  T133 = fun_95;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"for-commas"),T133);
  lit_265 = YPPlist(1,YPPsym((P)"exp"));
  lit_266 = YPPlist(1,YPPsym((P)"return"));
  lit_267 = YPPsym((P)"x-1592");
  lit_268 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_269 = YPPsym((P)"between-parentheses");
  T136 = YPsig(LITREF(lit_268),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1592_96 = YPmet(FUNCODEREF(fun_x_1592_96),LITREF(lit_267),T136,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(LITREF(lit_266),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPmet(FUNCODEREF(fun_97),YPfalse,T135,ENVNUL,PNUL,YPfalse);
  T134 = YPsig(LITREF(lit_265),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_98 = YPmet(FUNCODEREF(fun_98),YPfalse,T134,ENVNUL,PNUL,YPfalse);
  T137 = fun_98;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"between-parentheses"),T137);
  lit_270 = YPPlist(1,YPPsym((P)"exp"));
  lit_271 = YPPlist(1,YPPsym((P)"return"));
  lit_272 = YPPsym((P)"x-1596");
  lit_273 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_274 = YPPsym((P)"between-parentheses-comma-separated");
  lit_275 = YPPlist(3,YPPsym((P)"forms"),YPPsym((P)"body"),YPPsym((P)"first?"));
  T141 = YPsig(LITREF(lit_273),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1596_99 = YPmet(FUNCODEREF(fun_x_1596_99),LITREF(lit_272),T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(LITREF(lit_275),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_100 = YPmet(FUNCODEREF(fun_loop_100),LITREF(lit_189),T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(LITREF(lit_271),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_101 = YPmet(FUNCODEREF(fun_101),YPfalse,T139,ENVNUL,PNUL,YPfalse);
  T138 = YPsig(LITREF(lit_270),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_102 = YPmet(FUNCODEREF(fun_102),YPfalse,T138,ENVNUL,PNUL,YPfalse);
  T142 = fun_102;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"between-parentheses-comma-separated"),T142);
  lit_276 = YPPsym((P)"gen-result");
  lit_277 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_278 = YPsb((P)"T");
  lit_279 = YPsb((P)" = ");
  T143 = YPsig(LITREF(lit_277),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_gen_result_103 = YPmet(FUNCODEREF(fun_gen_result_103),LITREF(lit_276),T143,ENVNUL,PNUL,sloc(527));
  T146 = BOUNDP(YevalSg2cYgen_result);
  if (T146 != YPfalse) {
    T145 = VARREF(YevalSg2cYgen_result);
  } else {
    T145 = YPfalse;
  }
  T147 = fun_gen_result_103;
  T144 = XCALL2(1,VARREF(YPdefine_method),T145,T147);
  VARSET(YevalSg2cYgen_result,T144);
  lit_280 = YPPsym((P)"gen-depth");
  lit_281 = YPPlist(2,YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_282 = YPPsym((P)"x-1599");
  lit_283 = YPPlist(1,YPPsym((P)"x-1598"));
  lit_284 = YPsb((P)"  ");
  T149 = YPsig(LITREF(lit_283),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1599_104 = YPmet(FUNCODEREF(fun_x_1599_104),LITREF(lit_282),T149,ENVNUL,PNUL,sloc(532));
  T148 = YPsig(LITREF(lit_281),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_depth_105 = YPmet(FUNCODEREF(fun_gen_depth_105),LITREF(lit_280),T148,ENVNUL,PNUL,sloc(531));
  T152 = BOUNDP(YevalSg2cYgen_depth);
  if (T152 != YPfalse) {
    T151 = VARREF(YevalSg2cYgen_depth);
  } else {
    T151 = YPfalse;
  }
  T153 = fun_gen_depth_105;
  T150 = XCALL2(1,VARREF(YPdefine_method),T151,T153);
  VARSET(YevalSg2cYgen_depth,T150);
  lit_285 = YPPlist(1,YPPsym((P)"exp"));
  lit_286 = YPPlist(1,YPPsym((P)"return"));
  lit_287 = YPPsym((P)"x-1603");
  lit_288 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_289 = YPPsym((P)"with-statement");
  lit_290 = YPPsym((P)"seq");
  lit_291 = YPPsym((P)"puts");
  lit_292 = YPsb((P)";\n");
  T156 = YPsig(LITREF(lit_288),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1603_106 = YPmet(FUNCODEREF(fun_x_1603_106),LITREF(lit_287),T156,ENVNUL,PNUL,YPfalse);
  T155 = YPsig(LITREF(lit_286),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_107 = YPmet(FUNCODEREF(fun_107),YPfalse,T155,ENVNUL,PNUL,YPfalse);
  T154 = YPsig(LITREF(lit_285),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_108 = YPmet(FUNCODEREF(fun_108),YPfalse,T154,ENVNUL,PNUL,YPfalse);
  T157 = fun_108;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-statement"),T157);
  lit_293 = YPPlist(1,YPPsym((P)"exp"));
  lit_294 = YPPlist(1,YPPsym((P)"return"));
  lit_295 = YPPsym((P)"x-1607");
  lit_296 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_297 = YPPsym((P)"with-expression");
  T160 = YPsig(LITREF(lit_296),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1607_109 = YPmet(FUNCODEREF(fun_x_1607_109),LITREF(lit_295),T160,ENVNUL,PNUL,YPfalse);
  T159 = YPsig(LITREF(lit_294),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_110 = YPmet(FUNCODEREF(fun_110),YPfalse,T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(LITREF(lit_293),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_111 = YPmet(FUNCODEREF(fun_111),YPfalse,T158,ENVNUL,PNUL,YPfalse);
  T161 = fun_111;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-expression"),T161);
  lit_298 = YPPlist(1,YPPsym((P)"exp"));
  lit_299 = YPPlist(1,YPPsym((P)"return"));
  lit_300 = YPPsym((P)"x-1611");
  lit_301 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_302 = YPPsym((P)"with-used-expression");
  lit_303 = YPPsym((P)"when");
  lit_304 = YPPsym((P)"program-register");
  T164 = YPsig(LITREF(lit_301),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1611_112 = YPmet(FUNCODEREF(fun_x_1611_112),LITREF(lit_300),T164,ENVNUL,PNUL,YPfalse);
  T163 = YPsig(LITREF(lit_299),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_113 = YPmet(FUNCODEREF(fun_113),YPfalse,T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(LITREF(lit_298),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_114 = YPmet(FUNCODEREF(fun_114),YPfalse,T162,ENVNUL,PNUL,YPfalse);
  T165 = fun_114;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-used-expression"),T165);
  lit_305 = YPPsym((P)"generate-quotation-forwards");
  lit_306 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"qb*"));
  lit_307 = YPsb((P)"\n/* FORWARD QUOTATIONS: */\n\n");
  lit_308 = YPPsym((P)"x-1613");
  lit_309 = YPPlist(1,YPPsym((P)"x-1612"));
  lit_310 = YPsb((P)"DEFLIT(lit_");
  lit_311 = YPsb((P)");\n");
  T167 = YPsig(LITREF(lit_309),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1613_115 = YPmet(FUNCODEREF(fun_x_1613_115),LITREF(lit_308),T167,ENVNUL,PNUL,sloc(553));
  T166 = YPsig(LITREF(lit_306),YPPlist(2,VARREF(YLanyG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_forwards_116 = YPmet(FUNCODEREF(fun_generate_quotation_forwards_116),LITREF(lit_305),T166,ENVNUL,PNUL,sloc(551));
  T170 = BOUNDP(YevalSg2cYgenerate_quotation_forwards);
  if (T170 != YPfalse) {
    T169 = VARREF(YevalSg2cYgenerate_quotation_forwards);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_generate_quotation_forwards_116;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YevalSg2cYgenerate_quotation_forwards,T168);
  lit_312 = YPPsym((P)"generate-quotations");
  lit_313 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"qb*"));
  lit_314 = YPPsym((P)"x-1616");
  lit_315 = YPPlist(1,YPPsym((P)"x-1615"));
  lit_316 = YPsb((P)"lit_");
  lit_317 = YPsb((P)" = ");
  T173 = YPsig(LITREF(lit_315),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1616_117 = YPmet(FUNCODEREF(fun_x_1616_117),LITREF(lit_314),T173,ENVNUL,PNUL,sloc(557));
  T172 = YPsig(LITREF(lit_313),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotations_118 = YPmet(FUNCODEREF(fun_generate_quotations_118),LITREF(lit_312),T172,ENVNUL,PNUL,sloc(556));
  T176 = BOUNDP(YevalSg2cYgenerate_quotations);
  if (T176 != YPfalse) {
    T175 = VARREF(YevalSg2cYgenerate_quotations);
  } else {
    T175 = YPfalse;
  }
  T177 = fun_generate_quotations_118;
  T174 = XCALL2(1,VARREF(YPdefine_method),T175,T177);
  VARSET(YevalSg2cYgenerate_quotations,T174);
  lit_318 = YPPsym((P)"false-name");
  lit_319 = YPsb((P)"%false");
  T178 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_false_name_119 = YPmet(FUNCODEREF(fun_false_name_119),LITREF(lit_318),T178,ENVNUL,PNUL,sloc(562));
  T181 = BOUNDP(YevalSg2cYfalse_name);
  if (T181 != YPfalse) {
    T180 = VARREF(YevalSg2cYfalse_name);
  } else {
    T180 = YPfalse;
  }
  T182 = fun_false_name_119;
  T179 = XCALL2(1,VARREF(YPdefine_method),T180,T182);
  VARSET(YevalSg2cYfalse_name,T179);
  lit_320 = YPPsym((P)"generate-quotation");
  lit_321 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"qb"));
  lit_322 = YPsb((P)"%true");
  lit_323 = YPsb((P)"%false");
  T183 = YPsig(LITREF(lit_321),YPPlist(2,VARREF(YLanyG),VARREF(YLlogG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_120 = YPmet(FUNCODEREF(fun_generate_quotation_120),LITREF(lit_320),T183,ENVNUL,PNUL,sloc(565));
  T186 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T186 != YPfalse) {
    T185 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T185 = YPfalse;
  }
  T187 = fun_generate_quotation_120;
  T184 = XCALL2(1,VARREF(YPdefine_method),T185,T187);
  VARSET(YevalSg2cYgenerate_quotation,T184);
  lit_324 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"qb"));
  lit_325 = YPsb((P)"nil");
  T189 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T188 = YPsig(LITREF(lit_324),YPPlist(2,VARREF(YLanyG),T189),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_121 = YPmet(FUNCODEREF(fun_generate_quotation_121),LITREF(lit_320),T188,ENVNUL,PNUL,sloc(568));
  T192 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T192 != YPfalse) {
    T191 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T191 = YPfalse;
  }
  T193 = fun_generate_quotation_121;
  T190 = XCALL2(1,VARREF(YPdefine_method),T191,T193);
  VARSET(YevalSg2cYgenerate_quotation,T190);
  lit_326 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"qb"));
  lit_327 = YPPlist(1,YPPsym((P)"x"));
  T195 = YPsig(LITREF(lit_327),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_122 = YPmet(FUNCODEREF(fun_122),YPfalse,T195,ENVNUL,PNUL,sloc(572));
  T194 = YPsig(LITREF(lit_326),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_123 = YPmet(FUNCODEREF(fun_generate_quotation_123),LITREF(lit_320),T194,ENVNUL,PNUL,sloc(571));
  T198 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T198 != YPfalse) {
    T197 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T197 = YPfalse;
  }
  T199 = fun_generate_quotation_123;
  T196 = XCALL2(1,VARREF(YPdefine_method),T197,T199);
  VARSET(YevalSg2cYgenerate_quotation,T196);
  lit_328 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"x"));
  lit_329 = YPsb((P)"%int");
  lit_330 = YPsb((P)"((P)");
  lit_331 = YPsb((P)")");
  T200 = YPsig(LITREF(lit_328),YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_124 = YPmet(FUNCODEREF(fun_generate_quotation_124),LITREF(lit_320),T200,ENVNUL,PNUL,sloc(574));
  T203 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T203 != YPfalse) {
    T202 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T202 = YPfalse;
  }
  T204 = fun_generate_quotation_124;
  T201 = XCALL2(1,VARREF(YPdefine_method),T202,T204);
  VARSET(YevalSg2cYgenerate_quotation,T201);
  lit_332 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"x"));
  lit_333 = YPsb((P)"%chr");
  lit_334 = YPsb((P)"((P)");
  lit_335 = YPsb((P)")");
  T205 = YPsig(LITREF(lit_332),YPPlist(2,VARREF(YLanyG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_125 = YPmet(FUNCODEREF(fun_generate_quotation_125),LITREF(lit_320),T205,ENVNUL,PNUL,sloc(577));
  T208 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T208 != YPfalse) {
    T207 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T207 = YPfalse;
  }
  T209 = fun_generate_quotation_125;
  T206 = XCALL2(1,VARREF(YPdefine_method),T207,T209);
  VARSET(YevalSg2cYgenerate_quotation,T206);
  lit_336 = YPPsym((P)"float-to-c-string");
  lit_337 = YPPlist(1,YPPsym((P)"o"));
  lit_338 = YPPlist(1,YPPsym((P)"done"));
  lit_339 = YPPlist(1,YPPsym((P)"i"));
  T212 = YPsig(LITREF(lit_339),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_126 = YPmet(FUNCODEREF(fun_loop_126),LITREF(lit_189),T212,ENVNUL,PNUL,sloc(584));
  T211 = YPsig(LITREF(lit_338),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_127 = YPmet(FUNCODEREF(fun_127),YPfalse,T211,ENVNUL,PNUL,sloc(583));
  T210 = YPsig(LITREF(lit_337),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_float_to_c_string_128 = YPmet(FUNCODEREF(fun_float_to_c_string_128),LITREF(lit_336),T210,ENVNUL,PNUL,sloc(580));
  T215 = BOUNDP(YevalSg2cYfloat_to_c_string);
  if (T215 != YPfalse) {
    T214 = VARREF(YevalSg2cYfloat_to_c_string);
  } else {
    T214 = YPfalse;
  }
  T216 = fun_float_to_c_string_128;
  T213 = XCALL2(1,VARREF(YPdefine_method),T214,T216);
  VARSET(YevalSg2cYfloat_to_c_string,T213);
  lit_340 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"x"));
  lit_341 = YPsb((P)"%flo");
  lit_342 = YPsb((P)"(FLOINT(");
  lit_343 = YPsb((P)"))");
  T217 = YPsig(LITREF(lit_340),YPPlist(2,VARREF(YLanyG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_129 = YPmet(FUNCODEREF(fun_generate_quotation_129),LITREF(lit_320),T217,ENVNUL,PNUL,sloc(595));
  T220 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T220 != YPfalse) {
    T219 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T219 = YPfalse;
  }
  T221 = fun_generate_quotation_129;
  T218 = XCALL2(1,VARREF(YPdefine_method),T219,T221);
  VARSET(YevalSg2cYgenerate_quotation,T218);
  lit_344 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"x"));
  lit_345 = YPsb((P)"%sb");
  lit_346 = YPsb((P)"((P)");
  lit_347 = YPsb((P)")");
  T222 = YPsig(LITREF(lit_344),YPPlist(2,VARREF(YLanyG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_130 = YPmet(FUNCODEREF(fun_generate_quotation_130),LITREF(lit_320),T222,ENVNUL,PNUL,sloc(599));
  T225 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T225 != YPfalse) {
    T224 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T224 = YPfalse;
  }
  T226 = fun_generate_quotation_130;
  T223 = XCALL2(1,VARREF(YPdefine_method),T224,T226);
  VARSET(YevalSg2cYgenerate_quotation,T223);
  lit_348 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"x"));
  lit_349 = YPsb((P)"XCALLN(1, ");
  lit_350 = YPsb((P)"vec");
  lit_351 = YPsb((P)", ");
  lit_352 = YPPsym((P)"x-1626");
  lit_353 = YPPlist(1,YPPsym((P)"x-1625"));
  lit_354 = YPsb((P)", ");
  lit_355 = YPsb((P)")");
  T228 = YPsig(LITREF(lit_353),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1626_131 = YPmet(FUNCODEREF(fun_x_1626_131),LITREF(lit_352),T228,ENVNUL,PNUL,sloc(606));
  T227 = YPsig(LITREF(lit_348),YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_132 = YPmet(FUNCODEREF(fun_generate_quotation_132),LITREF(lit_320),T227,ENVNUL,PNUL,sloc(603));
  T231 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T231 != YPfalse) {
    T230 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T230 = YPfalse;
  }
  T232 = fun_generate_quotation_132;
  T229 = XCALL2(1,VARREF(YPdefine_method),T230,T232);
  VARSET(YevalSg2cYgenerate_quotation,T229);
  lit_356 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"x"));
  lit_357 = YPsb((P)"XCALLN(1, ");
  lit_358 = YPsb((P)"tup");
  lit_359 = YPsb((P)", ");
  lit_360 = YPPsym((P)"x-1629");
  lit_361 = YPPlist(1,YPPsym((P)"x-1628"));
  lit_362 = YPsb((P)", ");
  lit_363 = YPsb((P)")");
  T234 = YPsig(LITREF(lit_361),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1629_133 = YPmet(FUNCODEREF(fun_x_1629_133),LITREF(lit_360),T234,ENVNUL,PNUL,sloc(614));
  T233 = YPsig(LITREF(lit_356),YPPlist(2,VARREF(YLanyG),VARREF(YLtupG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_134 = YPmet(FUNCODEREF(fun_generate_quotation_134),LITREF(lit_320),T233,ENVNUL,PNUL,sloc(611));
  T237 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T237 != YPfalse) {
    T236 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T236 = YPfalse;
  }
  T238 = fun_generate_quotation_134;
  T235 = XCALL2(1,VARREF(YPdefine_method),T236,T238);
  VARSET(YevalSg2cYgenerate_quotation,T235);
  lit_364 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"x"));
  lit_365 = YPsb((P)"%%sym");
  lit_366 = YPsb((P)"((P)");
  lit_367 = YPsb((P)")");
  T239 = YPsig(LITREF(lit_364),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_135 = YPmet(FUNCODEREF(fun_generate_quotation_135),LITREF(lit_320),T239,ENVNUL,PNUL,sloc(619));
  T242 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T242 != YPfalse) {
    T241 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T241 = YPfalse;
  }
  T243 = fun_generate_quotation_135;
  T240 = XCALL2(1,VARREF(YPdefine_method),T241,T243);
  VARSET(YevalSg2cYgenerate_quotation,T240);
  lit_368 = YPPsym((P)"binding->c");
  lit_369 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"code-out"));
  T244 = YPsig(LITREF(lit_369),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYbinding_Gc = YPmet(FUNCODEREF(YevalSg2cYbinding_Gc),LITREF(lit_368),T244,ENVNUL,PNUL,sloc(628));
  T245 = YevalSg2cYbinding_Gc;
  VARSET(YevalSg2cYbinding_Gc,T245);
  lit_370 = YPPsym((P)"reference->c");
  lit_371 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"code-out"));
  T247 = YPsig(LITREF(lit_371),YPPlist(2,VARREF(YevalSastYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T246 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_370),T247,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSg2cYreference_Gc,T246);
  lit_372 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"code-out"));
  T248 = YPsig(LITREF(lit_372),YPPlist(2,VARREF(YevalSastYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_Gc_137 = YPmet(FUNCODEREF(fun_reference_Gc_137),LITREF(lit_370),T248,ENVNUL,PNUL,sloc(650));
  T251 = BOUNDP(YevalSg2cYreference_Gc);
  if (T251 != YPfalse) {
    T250 = VARREF(YevalSg2cYreference_Gc);
  } else {
    T250 = YPfalse;
  }
  T252 = fun_reference_Gc_137;
  T249 = XCALL2(1,VARREF(YPdefine_method),T250,T252);
  VARSET(YevalSg2cYreference_Gc,T249);
  lit_373 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"code-out"));
  lit_374 = YPsb((P)"LITREF");
  lit_375 = YPsb((P)"RTVREF");
  lit_376 = YPsb((P)"DYNREF");
  lit_377 = YPsb((P)"VARREF");
  T253 = YPsig(LITREF(lit_373),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_Gc_138 = YPmet(FUNCODEREF(fun_reference_Gc_138),LITREF(lit_370),T253,ENVNUL,PNUL,sloc(653));
  T256 = BOUNDP(YevalSg2cYreference_Gc);
  if (T256 != YPfalse) {
    T255 = VARREF(YevalSg2cYreference_Gc);
  } else {
    T255 = YPfalse;
  }
  T257 = fun_reference_Gc_138;
  T254 = XCALL2(1,VARREF(YPdefine_method),T255,T257);
  VARSET(YevalSg2cYreference_Gc,T254);
  lit_378 = YPPsym((P)"to-c");
  lit_379 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  T259 = YPsig(LITREF(lit_379),YPPlist(4,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T258 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_378),T259,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSg2cYto_c,T258);
  lit_380 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  T260 = YPsig(LITREF(lit_380),YPPlist(4,VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_139 = YPmet(FUNCODEREF(fun_to_c_139),LITREF(lit_378),T260,ENVNUL,PNUL,sloc(665));
  T263 = BOUNDP(YevalSg2cYto_c);
  if (T263 != YPfalse) {
    T262 = VARREF(YevalSg2cYto_c);
  } else {
    T262 = YPfalse;
  }
  T264 = fun_to_c_139;
  T261 = XCALL2(1,VARREF(YPdefine_method),T262,T264);
  VARSET(YevalSg2cYto_c,T261);
  lit_381 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  T265 = YPsig(LITREF(lit_381),YPPlist(4,VARREF(YevalSastYLpassive_programG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_140 = YPmet(FUNCODEREF(fun_to_c_140),LITREF(lit_378),T265,ENVNUL,PNUL,sloc(671));
  T268 = BOUNDP(YevalSg2cYto_c);
  if (T268 != YPfalse) {
    T267 = VARREF(YevalSg2cYto_c);
  } else {
    T267 = YPfalse;
  }
  T269 = fun_to_c_140;
  T266 = XCALL2(1,VARREF(YPdefine_method),T267,T269);
  VARSET(YevalSg2cYto_c,T266);
  lit_382 = YPPsym((P)"gen-ref");
  lit_383 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"code-out"));
  T270 = YPsig(LITREF(lit_383),YPPlist(2,VARREF(YevalSastYLreferenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_141 = YPmet(FUNCODEREF(fun_gen_ref_141),LITREF(lit_382),T270,ENVNUL,PNUL,sloc(673));
  T273 = BOUNDP(YevalSg2cYgen_ref);
  if (T273 != YPfalse) {
    T272 = VARREF(YevalSg2cYgen_ref);
  } else {
    T272 = YPfalse;
  }
  T274 = fun_gen_ref_141;
  T271 = XCALL2(1,VARREF(YPdefine_method),T272,T274);
  VARSET(YevalSg2cYgen_ref,T271);
  lit_384 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"code-out"));
  lit_385 = YPsb((P)"FREEREF");
  T275 = YPsig(LITREF(lit_384),YPPlist(2,VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_142 = YPmet(FUNCODEREF(fun_gen_ref_142),LITREF(lit_382),T275,ENVNUL,PNUL,sloc(676));
  T278 = BOUNDP(YevalSg2cYgen_ref);
  if (T278 != YPfalse) {
    T277 = VARREF(YevalSg2cYgen_ref);
  } else {
    T277 = YPfalse;
  }
  T279 = fun_gen_ref_142;
  T276 = XCALL2(1,VARREF(YPdefine_method),T277,T279);
  VARSET(YevalSg2cYgen_ref,T276);
  lit_386 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"code-out"));
  lit_387 = YPsb((P)"T");
  lit_388 = YPsb((P)"T_1");
  T282 = YPsig(LITREF(lit_386),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T281 = fun_gen_ref_143 = YPmet(FUNCODEREF(fun_gen_ref_143),LITREF(lit_382),T282,ENVNUL,PNUL,sloc(681));
  T286 = BOUNDP(YevalSg2cYgen_ref);
  if (T286 != YPfalse) {
    T285 = VARREF(YevalSg2cYgen_ref);
  } else {
    T285 = YPfalse;
  }
  T287 = fun_gen_ref_143;
  T284 = XCALL2(1,VARREF(YPdefine_method),T285,T287);
  T283 = VARSET(YevalSg2cYgen_ref,T284);
  T280 = T283;
  return T280;
}

P YevalSg2cY___main_2___() {
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
  P T192,T193,T194,T195,T196,T197,T198,T199,T200,T201,T202,T203,T204,T205,T206,T207;
  P T208,T209,T210,T211,T212,T213,T214,T215,T216,T217,T218,T219,T220,T221,T222,T223;
  P T224,T225,T226,T227,T228,T229,T230,T231,T232,T233,T234,T235,T236,T237,T238,T239;
  P T240,T241,T242,T243,T244,T245,T246,T247,T248,T249,T250,T251,T252,T253,T254,T255;
  P T256,T257,T258,T259,T260,T261,T262,T263,T264,T265,T266,T267,T268,T269,T270,T271;
  P T272,T273,T274,T275,T276,T277,T278,T279,T280,T281,T282,T283,T284,T285,T286,T287;
  P T288,T289,T290,T291,T292,T293,T294,T295,T296,T297,T298,T299,T300,T301,T302,T303;
DEFCREGS();
loop:
  lit_389 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"code-out"));
  lit_390 = YPsb((P)"(P)");
  T0 = YPsig(LITREF(lit_389),YPPlist(2,VARREF(YevalSastYLraw_constantG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_144 = YPmet(FUNCODEREF(fun_gen_ref_144),LITREF(lit_382),T0,ENVNUL,PNUL,sloc(685));
  T3 = BOUNDP(YevalSg2cYgen_ref);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSg2cYgen_ref);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_gen_ref_144;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSg2cYgen_ref,T1);
  lit_391 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"code-out"));
  T5 = YPsig(LITREF(lit_391),YPPlist(2,VARREF(YevalSastYLconstantG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_145 = YPmet(FUNCODEREF(fun_gen_ref_145),LITREF(lit_382),T5,ENVNUL,PNUL,sloc(688));
  T8 = BOUNDP(YevalSg2cYgen_ref);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSg2cYgen_ref);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_gen_ref_145;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSg2cYgen_ref,T6);
  lit_392 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"code-out"));
  T10 = YPsig(LITREF(lit_392),YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_146 = YPmet(FUNCODEREF(fun_gen_ref_146),LITREF(lit_382),T10,ENVNUL,PNUL,sloc(691));
  T13 = BOUNDP(YevalSg2cYgen_ref);
  if (T13 != YPfalse) {
    T12 = VARREF(YevalSg2cYgen_ref);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_gen_ref_146;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YevalSg2cYgen_ref,T11);
  lit_393 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_394 = YPsb((P)"RTVSET(");
  lit_395 = YPsb((P)"DYNDEFSET(");
  lit_396 = YPsb((P)"DYNSET(");
  lit_397 = YPsb((P)"VARSET(");
  lit_398 = YPsb((P)",");
  lit_399 = YPsb((P)")");
  T15 = YPsig(LITREF(lit_393),YPPlist(4,VARREF(YevalSastYLglobal_assignmentG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_147 = YPmet(FUNCODEREF(fun_to_c_147),LITREF(lit_378),T15,ENVNUL,PNUL,sloc(694));
  T18 = BOUNDP(YevalSg2cYto_c);
  if (T18 != YPfalse) {
    T17 = VARREF(YevalSg2cYto_c);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_to_c_147;
  T16 = XCALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YevalSg2cYto_c,T16);
  lit_400 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_401 = YPsb((P)"RTV");
  lit_402 = YPsb((P)"BOUNDP");
  T20 = YPsig(LITREF(lit_400),YPPlist(4,VARREF(YevalSastYLboundQG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_148 = YPmet(FUNCODEREF(fun_to_c_148),LITREF(lit_378),T20,ENVNUL,PNUL,sloc(708));
  T23 = BOUNDP(YevalSg2cYto_c);
  if (T23 != YPfalse) {
    T22 = VARREF(YevalSg2cYto_c);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_to_c_148;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YevalSg2cYto_c,T21);
  lit_403 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_404 = YPsb((P)"BOXVAL");
  T25 = YPsig(LITREF(lit_403),YPPlist(4,VARREF(YevalSast_linearizeYLbox_readG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_149 = YPmet(FUNCODEREF(fun_to_c_149),LITREF(lit_378),T25,ENVNUL,PNUL,sloc(717));
  T28 = BOUNDP(YevalSg2cYto_c);
  if (T28 != YPfalse) {
    T27 = VARREF(YevalSg2cYto_c);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_to_c_149;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YevalSg2cYto_c,T26);
  lit_405 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_406 = YPsb((P)"BOXVAL");
  lit_407 = YPsb((P)" = ");
  T30 = YPsig(LITREF(lit_405),YPPlist(4,VARREF(YevalSast_linearizeYLbox_writeG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_150 = YPmet(FUNCODEREF(fun_to_c_150),LITREF(lit_378),T30,ENVNUL,PNUL,sloc(724));
  T33 = BOUNDP(YevalSg2cYto_c);
  if (T33 != YPfalse) {
    T32 = VARREF(YevalSg2cYto_c);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_to_c_150;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YevalSg2cYto_c,T31);
  lit_408 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_409 = YPsb((P)" = BOXFAB");
  T35 = YPsig(LITREF(lit_408),YPPlist(4,VARREF(YevalSast_linearizeYLbox_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_151 = YPmet(FUNCODEREF(fun_to_c_151),LITREF(lit_378),T35,ENVNUL,PNUL,sloc(732));
  T38 = BOUNDP(YevalSg2cYto_c);
  if (T38 != YPfalse) {
    T37 = VARREF(YevalSg2cYto_c);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_to_c_151;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YevalSg2cYto_c,T36);
  lit_410 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_411 = YPsb((P)"if (");
  lit_412 = YPsb((P)" != ");
  lit_413 = YPsb((P)") {\n");
  lit_414 = YPsb((P)"} else {\n");
  lit_415 = YPsb((P)"}\n");
  T40 = YPsig(LITREF(lit_410),YPPlist(4,VARREF(YevalSastYLalternativeG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_152 = YPmet(FUNCODEREF(fun_to_c_152),LITREF(lit_378),T40,ENVNUL,PNUL,sloc(739));
  T43 = BOUNDP(YevalSg2cYto_c);
  if (T43 != YPfalse) {
    T42 = VARREF(YevalSg2cYto_c);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_to_c_152;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YevalSg2cYto_c,T41);
  lit_416 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_417 = YPPlist(1,YPPsym((P)"x"));
  T46 = YPsig(LITREF(lit_417),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_153 = YPmet(FUNCODEREF(fun_153),YPfalse,T46,ENVNUL,PNUL,sloc(754));
  T45 = YPsig(LITREF(lit_416),YPPlist(4,VARREF(YevalSastYLsequentialG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_154 = YPmet(FUNCODEREF(fun_to_c_154),LITREF(lit_378),T45,ENVNUL,PNUL,sloc(753));
  T49 = BOUNDP(YevalSg2cYto_c);
  if (T49 != YPfalse) {
    T48 = VARREF(YevalSg2cYto_c);
  } else {
    T48 = YPfalse;
  }
  T50 = fun_to_c_154;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T50);
  VARSET(YevalSg2cYto_c,T47);
  lit_418 = YPPsym((P)"generate-self-recursive-call");
  lit_419 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_420 = YPPsym((P)"x-1646");
  lit_421 = YPPlist(1,YPPsym((P)"x-1645"));
  lit_422 = YPPsym((P)"x-1649");
  lit_423 = YPPlist(2,YPPsym((P)"x-1648"),YPPsym((P)"x-1647"));
  lit_424 = YPsb((P)"a");
  lit_425 = YPsb((P)" = ");
  lit_426 = YPPsym((P)"x-1653");
  lit_427 = YPPlist(2,YPPsym((P)"x-1652"),YPPsym((P)"x-1651"));
  lit_428 = YPsb((P)" = a");
  lit_429 = YPsb((P)"goto loop");
  T54 = YPsig(LITREF(lit_421),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1646_155 = YPmet(FUNCODEREF(fun_x_1646_155),LITREF(lit_420),T54,ENVNUL,PNUL,sloc(757));
  T53 = YPsig(LITREF(lit_423),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1649_156 = YPmet(FUNCODEREF(fun_x_1649_156),LITREF(lit_422),T53,ENVNUL,PNUL,sloc(759));
  T52 = YPsig(LITREF(lit_427),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1653_157 = YPmet(FUNCODEREF(fun_x_1653_157),LITREF(lit_426),T52,ENVNUL,PNUL,sloc(763));
  T51 = YPsig(LITREF(lit_419),YPPlist(4,VARREF(YevalSastYLapplicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_self_recursive_call_158 = YPmet(FUNCODEREF(fun_generate_self_recursive_call_158),LITREF(lit_418),T51,ENVNUL,PNUL,sloc(756));
  T57 = BOUNDP(YevalSg2cYgenerate_self_recursive_call);
  if (T57 != YPfalse) {
    T56 = VARREF(YevalSg2cYgenerate_self_recursive_call);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_generate_self_recursive_call_158;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YevalSg2cYgenerate_self_recursive_call,T55);
  VARSET(YevalSg2cYDnumber_call_templates,YPint((P)5));
  lit_430 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_431 = YPPsym((P)"x-1656");
  lit_432 = YPPlist(1,YPPsym((P)"x-1655"));
  lit_433 = YPsb((P)"X");
  lit_434 = YPsb((P)"CALL");
  lit_435 = YPsb((P)"N");
  lit_436 = YPsb((P)"0,");
  lit_437 = YPsb((P)"1,");
  lit_438 = YPsb((P)",");
  lit_439 = YPPsym((P)"x-1661");
  lit_440 = YPPlist(1,YPPsym((P)"x-1660"));
  T61 = YPsig(LITREF(lit_432),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1656_159 = YPmet(FUNCODEREF(fun_x_1656_159),LITREF(lit_431),T61,ENVNUL,PNUL,sloc(782));
  T60 = YPsig(LITREF(lit_440),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1661_160 = YPmet(FUNCODEREF(fun_x_1661_160),LITREF(lit_439),T60,ENVNUL,PNUL,sloc(792));
  T59 = YPsig(LITREF(lit_430),YPPlist(4,VARREF(YevalSastYLregular_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_161 = YPmet(FUNCODEREF(fun_to_c_161),LITREF(lit_378),T59,ENVNUL,PNUL,sloc(772));
  T64 = BOUNDP(YevalSg2cYto_c);
  if (T64 != YPfalse) {
    T63 = VARREF(YevalSg2cYto_c);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_to_c_161;
  T62 = XCALL2(1,VARREF(YPdefine_method),T63,T65);
  VARSET(YevalSg2cYto_c,T62);
  lit_441 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_442 = YPPsym((P)"x-1665");
  lit_443 = YPPlist(2,YPPsym((P)"x-1664"),YPPsym((P)"x-1663"));
  lit_444 = YPPlist(1,YPPsym((P)"x"));
  lit_445 = YPPlist(1,YPPsym((P)"x"));
  T69 = YPsig(LITREF(lit_443),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1665_162 = YPmet(FUNCODEREF(fun_x_1665_162),LITREF(lit_442),T69,ENVNUL,PNUL,sloc(796));
  T68 = YPsig(LITREF(lit_444),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_163 = YPmet(FUNCODEREF(fun_163),YPfalse,T68,ENVNUL,PNUL,sloc(796));
  T67 = YPsig(LITREF(lit_445),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_164 = YPmet(FUNCODEREF(fun_164),YPfalse,T67,ENVNUL,PNUL,sloc(796));
  T66 = YPsig(LITREF(lit_441),YPPlist(4,VARREF(YevalSastYLargumentsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_165 = YPmet(FUNCODEREF(fun_to_c_165),LITREF(lit_378),T66,ENVNUL,PNUL,sloc(795));
  T72 = BOUNDP(YevalSg2cYto_c);
  if (T72 != YPfalse) {
    T71 = VARREF(YevalSg2cYto_c);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_to_c_165;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YevalSg2cYto_c,T70);
  lit_446 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_447 = YPPsym((P)"x-1669");
  lit_448 = YPPlist(3,YPPsym((P)"x-1668"),YPPsym((P)"x-1667"),YPPsym((P)"x-1666"));
  lit_449 = YPsb((P)"check_type");
  lit_450 = YPsb((P)" = ");
  T75 = YPsig(LITREF(lit_448),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_x_1669_166 = YPmet(FUNCODEREF(fun_x_1669_166),LITREF(lit_447),T75,ENVNUL,PNUL,sloc(801));
  T74 = YPsig(LITREF(lit_446),YPPlist(4,VARREF(YevalSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_167 = YPmet(FUNCODEREF(fun_to_c_167),LITREF(lit_378),T74,ENVNUL,PNUL,sloc(799));
  T78 = BOUNDP(YevalSg2cYto_c);
  if (T78 != YPfalse) {
    T77 = VARREF(YevalSg2cYto_c);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_to_c_167;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YevalSg2cYto_c,T76);
  lit_451 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_452 = YPPsym((P)"x-1673");
  lit_453 = YPPlist(2,YPPsym((P)"x-1672"),YPPsym((P)"x-1671"));
  lit_454 = YPsb((P)" = ");
  T81 = YPsig(LITREF(lit_453),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1673_168 = YPmet(FUNCODEREF(fun_x_1673_168),LITREF(lit_452),T81,ENVNUL,PNUL,sloc(818));
  T80 = YPsig(LITREF(lit_451),YPPlist(4,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_169 = YPmet(FUNCODEREF(fun_to_c_169),LITREF(lit_378),T80,ENVNUL,PNUL,sloc(817));
  T84 = BOUNDP(YevalSg2cYto_c);
  if (T84 != YPfalse) {
    T83 = VARREF(YevalSg2cYto_c);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_to_c_169;
  T82 = XCALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(YevalSg2cYto_c,T82);
  lit_455 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_456 = YPsb((P)"with_exit");
  T86 = YPsig(LITREF(lit_455),YPPlist(4,VARREF(YevalSastYLbind_exitG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_170 = YPmet(FUNCODEREF(fun_to_c_170),LITREF(lit_378),T86,ENVNUL,PNUL,sloc(828));
  T89 = BOUNDP(YevalSg2cYto_c);
  if (T89 != YPfalse) {
    T88 = VARREF(YevalSg2cYto_c);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_to_c_170;
  T87 = XCALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(YevalSg2cYto_c,T87);
  lit_457 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_458 = YPsb((P)"with_cleanup");
  T91 = YPsig(LITREF(lit_457),YPPlist(4,VARREF(YevalSastYLunwind_protectG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_171 = YPmet(FUNCODEREF(fun_to_c_171),LITREF(lit_378),T91,ENVNUL,PNUL,sloc(834));
  T94 = BOUNDP(YevalSg2cYto_c);
  if (T94 != YPfalse) {
    T93 = VARREF(YevalSg2cYto_c);
  } else {
    T93 = YPfalse;
  }
  T95 = fun_to_c_171;
  T92 = XCALL2(1,VARREF(YPdefine_method),T93,T95);
  VARSET(YevalSg2cYto_c,T92);
  lit_459 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_460 = YPsb((P)"XCALLN");
  lit_461 = YPsb((P)"1");
  lit_462 = YPsb((P)"%with-monitor");
  lit_463 = YPsb((P)"5");
  T96 = YPsig(LITREF(lit_459),YPPlist(4,VARREF(YevalSastYLmonitorG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_172 = YPmet(FUNCODEREF(fun_to_c_172),LITREF(lit_378),T96,ENVNUL,PNUL,sloc(843));
  T99 = BOUNDP(YevalSg2cYto_c);
  if (T99 != YPfalse) {
    T98 = VARREF(YevalSg2cYto_c);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_to_c_172;
  T97 = XCALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(YevalSg2cYto_c,T97);
  lit_464 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_465 = YPPsym((P)"x-1678");
  lit_466 = YPPlist(1,YPPsym((P)"x-1677"));
  lit_467 = YPsb((P)"(P)");
  lit_468 = YPPsym((P)"x-1684");
  lit_469 = YPPlist(2,YPPsym((P)"x-1683"),YPPsym((P)"x-1682"));
  lit_470 = YPPlist(1,YPPsym((P)"x"));
  lit_471 = YPPlist(1,YPPsym((P)"x"));
  T105 = YPsig(LITREF(lit_466),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1678_173 = YPmet(FUNCODEREF(fun_x_1678_173),LITREF(lit_465),T105,ENVNUL,PNUL,sloc(868));
  T104 = YPsig(LITREF(lit_469),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1684_174 = YPmet(FUNCODEREF(fun_x_1684_174),LITREF(lit_468),T104,ENVNUL,PNUL,sloc(873));
  T103 = YPsig(LITREF(lit_470),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_175 = YPmet(FUNCODEREF(fun_175),YPfalse,T103,ENVNUL,PNUL,sloc(873));
  T102 = YPsig(LITREF(lit_471),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_176 = YPmet(FUNCODEREF(fun_176),YPfalse,T102,ENVNUL,PNUL,sloc(873));
  T101 = YPsig(LITREF(lit_464),YPPlist(4,VARREF(YevalSastYLpredefined_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_177 = YPmet(FUNCODEREF(fun_to_c_177),LITREF(lit_378),T101,ENVNUL,PNUL,sloc(861));
  T108 = BOUNDP(YevalSg2cYto_c);
  if (T108 != YPfalse) {
    T107 = VARREF(YevalSg2cYto_c);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_to_c_177;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YevalSg2cYto_c,T106);
  lit_472 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_473 = YPPlist(1,YPPsym((P)"x"));
  lit_474 = YPsb((P)"FUNFAB");
  lit_475 = YPsb((P)",");
  lit_476 = YPPsym((P)"x-1688");
  lit_477 = YPPlist(1,YPPsym((P)"x-1687"));
  T112 = YPsig(LITREF(lit_473),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_178 = YPmet(FUNCODEREF(fun_178),YPfalse,T112,ENVNUL,PNUL,sloc(882));
  T111 = YPsig(LITREF(lit_477),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1688_179 = YPmet(FUNCODEREF(fun_x_1688_179),LITREF(lit_476),T111,ENVNUL,PNUL,sloc(888));
  T110 = YPsig(LITREF(lit_472),YPPlist(4,VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_180 = YPmet(FUNCODEREF(fun_to_c_180),LITREF(lit_378),T110,ENVNUL,PNUL,sloc(876));
  T115 = BOUNDP(YevalSg2cYto_c);
  if (T115 != YPfalse) {
    T114 = VARREF(YevalSg2cYto_c);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_to_c_180;
  T113 = XCALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(YevalSg2cYto_c,T113);
  lit_478 = YPPsym((P)"funshell-to-c");
  lit_479 = YPPlist(5,YPPsym((P)"b"),YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_480 = YPsb((P)"FUNSHELL");
  T117 = YPsig(LITREF(lit_479),YPPlist(5,VARREF(YevalSastYLbindingG),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funshell_to_c_181 = YPmet(FUNCODEREF(fun_funshell_to_c_181),LITREF(lit_478),T117,ENVNUL,PNUL,sloc(891));
  T120 = BOUNDP(YevalSg2cYfunshell_to_c);
  if (T120 != YPfalse) {
    T119 = VARREF(YevalSg2cYfunshell_to_c);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_funshell_to_c_181;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YevalSg2cYfunshell_to_c,T118);
  lit_481 = YPPsym((P)"funinit-to-c");
  lit_482 = YPPlist(5,YPPsym((P)"b"),YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_483 = YPPlist(1,YPPsym((P)"x"));
  lit_484 = YPsb((P)"FUNINIT");
  lit_485 = YPsb((P)", ");
  lit_486 = YPPsym((P)"x-1695");
  lit_487 = YPPlist(1,YPPsym((P)"x-1694"));
  T124 = YPsig(LITREF(lit_483),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_182 = YPmet(FUNCODEREF(fun_182),YPfalse,T124,ENVNUL,PNUL,sloc(907));
  T123 = YPsig(LITREF(lit_487),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1695_183 = YPmet(FUNCODEREF(fun_x_1695_183),LITREF(lit_486),T123,ENVNUL,PNUL,sloc(913));
  T122 = YPsig(LITREF(lit_482),YPPlist(5,VARREF(YevalSastYLbindingG),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funinit_to_c_184 = YPmet(FUNCODEREF(fun_funinit_to_c_184),LITREF(lit_481),T122,ENVNUL,PNUL,sloc(904));
  T127 = BOUNDP(YevalSg2cYfuninit_to_c);
  if (T127 != YPfalse) {
    T126 = VARREF(YevalSg2cYfuninit_to_c);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_funinit_to_c_184;
  T125 = XCALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(YevalSg2cYfuninit_to_c,T125);
  lit_488 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_489 = YPsb((P)"%macro");
  T129 = YPsig(LITREF(lit_488),YPPlist(4,VARREF(YevalSastYLast_macro_definitionG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_185 = YPmet(FUNCODEREF(fun_to_c_185),LITREF(lit_378),T129,ENVNUL,PNUL,sloc(916));
  T132 = BOUNDP(YevalSg2cYto_c);
  if (T132 != YPfalse) {
    T131 = VARREF(YevalSg2cYto_c);
  } else {
    T131 = YPfalse;
  }
  T133 = fun_to_c_185;
  T130 = XCALL2(1,VARREF(YPdefine_method),T131,T133);
  VARSET(YevalSg2cYto_c,T130);
  lit_490 = YPPsym((P)"out-list-builder");
  lit_491 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"code-out"),YPPsym((P)"elts"));
  lit_492 = YPsb((P)"nil");
  lit_493 = YPsb((P)"%%list");
  lit_494 = YPPsym((P)"x-1700");
  lit_495 = YPPlist(1,YPPsym((P)"x-1699"));
  T135 = YPsig(LITREF(lit_495),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1700_186 = YPmet(FUNCODEREF(fun_x_1700_186),LITREF(lit_494),T135,ENVNUL,PNUL,sloc(932));
  T134 = YPsig(LITREF(lit_491),YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_out_list_builder_187 = YPmet(FUNCODEREF(fun_out_list_builder_187),LITREF(lit_490),T134,ENVNUL,PNUL,sloc(925));
  T138 = BOUNDP(YevalSg2cYout_list_builder);
  if (T138 != YPfalse) {
    T137 = VARREF(YevalSg2cYout_list_builder);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_out_list_builder_187;
  T136 = XCALL2(1,VARREF(YPdefine_method),T137,T139);
  VARSET(YevalSg2cYout_list_builder,T136);
  lit_496 = YPPsym((P)"gen-fab-list");
  lit_497 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"refs"));
  lit_498 = YPPlist(1,YPPsym((P)"x"));
  T141 = YPsig(LITREF(lit_498),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_188 = YPmet(FUNCODEREF(fun_188),YPfalse,T141,ENVNUL,PNUL,sloc(938));
  T140 = YPsig(LITREF(lit_497),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfab_listG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_fab_list_189 = YPmet(FUNCODEREF(fun_gen_fab_list_189),LITREF(lit_496),T140,ENVNUL,PNUL,sloc(937));
  T144 = BOUNDP(YevalSg2cYgen_fab_list);
  if (T144 != YPfalse) {
    T143 = VARREF(YevalSg2cYgen_fab_list);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_gen_fab_list_189;
  T142 = XCALL2(1,VARREF(YPdefine_method),T143,T145);
  VARSET(YevalSg2cYgen_fab_list,T142);
  lit_499 = YPPsym((P)"generate-function-specs");
  lit_500 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"sig"));
  T146 = YPsig(LITREF(lit_500),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_specs_190 = YPmet(FUNCODEREF(fun_generate_function_specs_190),LITREF(lit_499),T146,ENVNUL,PNUL,sloc(940));
  T149 = BOUNDP(YevalSg2cYgenerate_function_specs);
  if (T149 != YPfalse) {
    T148 = VARREF(YevalSg2cYgenerate_function_specs);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_generate_function_specs_190;
  T147 = XCALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(YevalSg2cYgenerate_function_specs,T147);
  lit_501 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_502 = YPPlist(1,YPPsym((P)"x"));
  lit_503 = YPsb((P)"%sig");
  lit_504 = YPsb((P)"nil");
  T152 = YPsig(LITREF(lit_502),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_191 = YPmet(FUNCODEREF(fun_191),YPfalse,T152,ENVNUL,PNUL,sloc(949));
  T151 = YPsig(LITREF(lit_501),YPPlist(4,VARREF(YevalSastYLast_signatureG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_192 = YPmet(FUNCODEREF(fun_to_c_192),LITREF(lit_378),T151,ENVNUL,PNUL,sloc(948));
  T155 = BOUNDP(YevalSg2cYto_c);
  if (T155 != YPfalse) {
    T154 = VARREF(YevalSg2cYto_c);
  } else {
    T154 = YPfalse;
  }
  T156 = fun_to_c_192;
  T153 = XCALL2(1,VARREF(YPdefine_method),T154,T156);
  VARSET(YevalSg2cYto_c,T153);
  lit_505 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_506 = YPsb((P)"%gen");
  lit_507 = YPsb((P)"(P)YPgen_code((P)YPdispatch)");
  lit_508 = YPsb((P)"nil");
  lit_509 = YPsb((P)"%false");
  lit_510 = YPsb((P)"%false");
  lit_511 = YPsb((P)"%false");
  T157 = YPsig(LITREF(lit_505),YPPlist(4,VARREF(YevalSastYLast_genericG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_193 = YPmet(FUNCODEREF(fun_to_c_193),LITREF(lit_378),T157,ENVNUL,PNUL,sloc(961));
  T160 = BOUNDP(YevalSg2cYto_c);
  if (T160 != YPfalse) {
    T159 = VARREF(YevalSg2cYto_c);
  } else {
    T159 = YPfalse;
  }
  T161 = fun_to_c_193;
  T158 = XCALL2(1,VARREF(YPdefine_method),T159,T161);
  VARSET(YevalSg2cYto_c,T158);
  lit_512 = YPPsym((P)"generate-function-forwards");
  lit_513 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"definitions"));
  lit_514 = YPsb((P)"\n/* FUNCTIONS: */\n\n");
  lit_515 = YPPsym((P)"x-1704");
  lit_516 = YPPlist(1,YPPsym((P)"x-1703"));
  T163 = YPsig(LITREF(lit_516),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1704_194 = YPmet(FUNCODEREF(fun_x_1704_194),LITREF(lit_515),T163,ENVNUL,PNUL,sloc(979));
  T162 = YPsig(LITREF(lit_513),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forwards_195 = YPmet(FUNCODEREF(fun_generate_function_forwards_195),LITREF(lit_512),T162,ENVNUL,PNUL,sloc(977));
  T166 = BOUNDP(YevalSg2cYgenerate_function_forwards);
  if (T166 != YPfalse) {
    T165 = VARREF(YevalSg2cYgenerate_function_forwards);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_generate_function_forwards_195;
  T164 = XCALL2(1,VARREF(YPdefine_method),T165,T167);
  VARSET(YevalSg2cYgenerate_function_forwards,T164);
  lit_517 = YPPsym((P)"generate-function-forward");
  lit_518 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"defn"));
  lit_519 = YPsb((P)"static");
  lit_520 = YPsb((P)"extern");
  lit_521 = YPsb((P)" P ");
  lit_522 = YPsb((P)" (");
  lit_523 = YPPsym((P)"x-1709");
  lit_524 = YPPlist(2,YPPsym((P)"x-1708"),YPPsym((P)"x-1707"));
  lit_525 = YPsb((P)"P");
  lit_526 = YPPlist(1,YPPsym((P)"x"));
  lit_527 = YPPlist(1,YPPsym((P)"x"));
  lit_528 = YPsb((P)");\n");
  T171 = YPsig(LITREF(lit_524),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1709_196 = YPmet(FUNCODEREF(fun_x_1709_196),LITREF(lit_523),T171,ENVNUL,PNUL,sloc(986));
  T170 = YPsig(LITREF(lit_526),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_197 = YPmet(FUNCODEREF(fun_197),YPfalse,T170,ENVNUL,PNUL,sloc(986));
  T169 = YPsig(LITREF(lit_527),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_198 = YPmet(FUNCODEREF(fun_198),YPfalse,T169,ENVNUL,PNUL,sloc(986));
  T168 = YPsig(LITREF(lit_518),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_199 = YPmet(FUNCODEREF(fun_generate_function_forward_199),LITREF(lit_517),T168,ENVNUL,PNUL,sloc(982));
  T174 = BOUNDP(YevalSg2cYgenerate_function_forward);
  if (T174 != YPfalse) {
    T173 = VARREF(YevalSg2cYgenerate_function_forward);
  } else {
    T173 = YPfalse;
  }
  T175 = fun_generate_function_forward_199;
  T172 = XCALL2(1,VARREF(YPdefine_method),T173,T175);
  VARSET(YevalSg2cYgenerate_function_forward,T172);
  lit_529 = YPPsym((P)"generate-function-binding");
  lit_530 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"defn"));
  lit_531 = YPPlist(2,YPPsym((P)"global"),YPPsym((P)"runtime"));
  lit_532 = YPsb((P)"fun_");
  lit_533 = YPsb((P)"fun_");
  lit_534 = YPsb((P)"_");
  T176 = YPsig(LITREF(lit_530),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_binding_200 = YPmet(FUNCODEREF(fun_generate_function_binding_200),LITREF(lit_529),T176,ENVNUL,PNUL,sloc(990));
  T179 = BOUNDP(YevalSg2cYgenerate_function_binding);
  if (T179 != YPfalse) {
    T178 = VARREF(YevalSg2cYgenerate_function_binding);
  } else {
    T178 = YPfalse;
  }
  T180 = fun_generate_function_binding_200;
  T177 = XCALL2(1,VARREF(YPdefine_method),T178,T180);
  VARSET(YevalSg2cYgenerate_function_binding,T177);
  lit_535 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"defn"));
  lit_536 = YPsb((P)"FUNFOR(");
  lit_537 = YPsb((P)"LOCFOR(");
  lit_538 = YPsb((P)");\n");
  T181 = YPsig(LITREF(lit_535),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_201 = YPmet(FUNCODEREF(fun_generate_function_forward_201),LITREF(lit_517),T181,ENVNUL,PNUL,sloc(1003));
  T184 = BOUNDP(YevalSg2cYgenerate_function_forward);
  if (T184 != YPfalse) {
    T183 = VARREF(YevalSg2cYgenerate_function_forward);
  } else {
    T183 = YPfalse;
  }
  T185 = fun_generate_function_forward_201;
  T182 = XCALL2(1,VARREF(YPdefine_method),T183,T185);
  VARSET(YevalSg2cYgenerate_function_forward,T182);
  lit_539 = YPPsym((P)"generate-function-bodies");
  lit_540 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"definitions"));
  lit_541 = YPsb((P)"\n/* FUNCTION CODES: */\n");
  lit_542 = YPPlist(1,YPPsym((P)"def"));
  T187 = YPsig(LITREF(lit_542),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_202 = YPmet(FUNCODEREF(fun_202),YPfalse,T187,ENVNUL,PNUL,sloc(1011));
  T186 = YPsig(LITREF(lit_540),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_bodies_203 = YPmet(FUNCODEREF(fun_generate_function_bodies_203),LITREF(lit_539),T186,ENVNUL,PNUL,sloc(1009));
  T190 = BOUNDP(YevalSg2cYgenerate_function_bodies);
  if (T190 != YPfalse) {
    T189 = VARREF(YevalSg2cYgenerate_function_bodies);
  } else {
    T189 = YPfalse;
  }
  T191 = fun_generate_function_bodies_203;
  T188 = XCALL2(1,VARREF(YPdefine_method),T189,T191);
  VARSET(YevalSg2cYgenerate_function_bodies,T188);
  lit_543 = YPPsym((P)"generate-functions");
  lit_544 = YPPlist(4,YPPsym((P)"definitions"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_545 = YPPlist(1,YPPsym((P)"def"));
  T193 = YPsig(LITREF(lit_545),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_204 = YPmet(FUNCODEREF(fun_204),YPfalse,T193,ENVNUL,PNUL,sloc(1016));
  T192 = YPsig(LITREF(lit_544),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_functions_205 = YPmet(FUNCODEREF(fun_generate_functions_205),LITREF(lit_543),T192,ENVNUL,PNUL,sloc(1015));
  T196 = BOUNDP(YevalSg2cYgenerate_functions);
  if (T196 != YPfalse) {
    T195 = VARREF(YevalSg2cYgenerate_functions);
  } else {
    T195 = YPfalse;
  }
  T197 = fun_generate_functions_205;
  T194 = XCALL2(1,VARREF(YPdefine_method),T195,T197);
  VARSET(YevalSg2cYgenerate_functions,T194);
  lit_546 = YPPsym((P)"generate-closure-structure");
  lit_547 = YPPlist(4,YPPsym((P)"definition"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_548 = YPsb((P)" = ");
  lit_549 = YPsb((P)"%met");
  lit_550 = YPsb((P)"ENVNUL");
  lit_551 = YPsb((P)"PNUL");
  lit_552 = YPsb((P)"sloc(");
  lit_553 = YPsb((P)")");
  T198 = YPsig(LITREF(lit_547),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_closure_structure_206 = YPmet(FUNCODEREF(fun_generate_closure_structure_206),LITREF(lit_546),T198,ENVNUL,PNUL,sloc(1021));
  T201 = BOUNDP(YevalSg2cYgenerate_closure_structure);
  if (T201 != YPfalse) {
    T200 = VARREF(YevalSg2cYgenerate_closure_structure);
  } else {
    T200 = YPfalse;
  }
  T202 = fun_generate_closure_structure_206;
  T199 = XCALL2(1,VARREF(YPdefine_method),T200,T202);
  VARSET(YevalSg2cYgenerate_closure_structure,T199);
  lit_554 = YPPsym((P)"generate-function-body-reference");
  lit_555 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"definition"));
  lit_556 = YPsb((P)"FUNCODEREF(");
  lit_557 = YPsb((P)")");
  T203 = YPsig(LITREF(lit_555),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_body_reference_207 = YPmet(FUNCODEREF(fun_generate_function_body_reference_207),LITREF(lit_554),T203,ENVNUL,PNUL,sloc(1037));
  T206 = BOUNDP(YevalSg2cYgenerate_function_body_reference);
  if (T206 != YPfalse) {
    T205 = VARREF(YevalSg2cYgenerate_function_body_reference);
  } else {
    T205 = YPfalse;
  }
  T207 = fun_generate_function_body_reference_207;
  T204 = XCALL2(1,VARREF(YPdefine_method),T205,T207);
  VARSET(YevalSg2cYgenerate_function_body_reference,T204);
  lit_558 = YPPsym((P)"generate-shadow-args");
  lit_559 = YPPlist(2,YPPsym((P)"bindings"),YPPsym((P)"code-out"));
  lit_560 = YPsb((P)"P ");
  lit_561 = YPPsym((P)"x-1719");
  lit_562 = YPPlist(3,YPPsym((P)"x-1718"),YPPsym((P)"x-1717"),YPPsym((P)"x-1716"));
  lit_563 = YPsb((P)"a");
  lit_564 = YPPlist(1,YPPsym((P)"x"));
  lit_565 = YPPlist(1,YPPsym((P)"x"));
  T211 = YPsig(LITREF(lit_562),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_x_1719_208 = YPmet(FUNCODEREF(fun_x_1719_208),LITREF(lit_561),T211,ENVNUL,PNUL,sloc(1050));
  T210 = YPsig(LITREF(lit_564),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_209 = YPmet(FUNCODEREF(fun_209),YPfalse,T210,ENVNUL,PNUL,sloc(1050));
  T209 = YPsig(LITREF(lit_565),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_210 = YPmet(FUNCODEREF(fun_210),YPfalse,T209,ENVNUL,PNUL,sloc(1050));
  T208 = YPsig(LITREF(lit_559),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_shadow_args_211 = YPmet(FUNCODEREF(fun_generate_shadow_args_211),LITREF(lit_558),T208,ENVNUL,PNUL,sloc(1046));
  T214 = BOUNDP(YevalSg2cYgenerate_shadow_args);
  if (T214 != YPfalse) {
    T213 = VARREF(YevalSg2cYgenerate_shadow_args);
  } else {
    T213 = YPfalse;
  }
  T215 = fun_generate_shadow_args_211;
  T212 = XCALL2(1,VARREF(YPdefine_method),T213,T215);
  VARSET(YevalSg2cYgenerate_shadow_args,T212);
  lit_566 = YPPsym((P)"generate-return");
  lit_567 = YPPlist(3,YPPsym((P)"defn"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_568 = YPsb((P)"return ");
  T216 = YPsig(LITREF(lit_567),YPPlist(3,VARREF(YevalSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_return_212 = YPmet(FUNCODEREF(fun_generate_return_212),LITREF(lit_566),T216,ENVNUL,PNUL,sloc(1053));
  T219 = BOUNDP(YevalSg2cYgenerate_return);
  if (T219 != YPfalse) {
    T218 = VARREF(YevalSg2cYgenerate_return);
  } else {
    T218 = YPfalse;
  }
  T220 = fun_generate_return_212;
  T217 = XCALL2(1,VARREF(YPdefine_method),T218,T220);
  VARSET(YevalSg2cYgenerate_return,T217);
  lit_569 = YPPlist(3,YPPsym((P)"defn"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_570 = YPsb((P)"RET");
  T221 = YPsig(LITREF(lit_569),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_return_213 = YPmet(FUNCODEREF(fun_generate_return_213),LITREF(lit_566),T221,ENVNUL,PNUL,sloc(1057));
  T224 = BOUNDP(YevalSg2cYgenerate_return);
  if (T224 != YPfalse) {
    T223 = VARREF(YevalSg2cYgenerate_return);
  } else {
    T223 = YPfalse;
  }
  T225 = fun_generate_return_213;
  T222 = XCALL2(1,VARREF(YPdefine_method),T223,T225);
  VARSET(YevalSg2cYgenerate_return,T222);
  lit_571 = YPPsym((P)"primitive-inlinable?");
  lit_572 = YPPlist(1,YPPsym((P)"e"));
  lit_573 = YPPsym((P)"inline");
  lit_574 = YPPsym((P)"inline-c");
  T226 = YPsig(LITREF(lit_572),YPPlist(1,VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_primitive_inlinableQ_214 = YPmet(FUNCODEREF(fun_primitive_inlinableQ_214),LITREF(lit_571),T226,ENVNUL,PNUL,sloc(1064));
  T229 = BOUNDP(YevalSg2cYprimitive_inlinableQ);
  if (T229 != YPfalse) {
    T228 = VARREF(YevalSg2cYprimitive_inlinableQ);
  } else {
    T228 = YPfalse;
  }
  T230 = fun_primitive_inlinableQ_214;
  T227 = XCALL2(1,VARREF(YPdefine_method),T228,T230);
  VARSET(YevalSg2cYprimitive_inlinableQ,T227);
  lit_575 = YPPsym((P)"generate-function-code");
  lit_576 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"e"));
  lit_577 = YPsb((P)"\n");
  lit_578 = YPsb((P)"static ");
  lit_579 = YPsb((P)"INLINE ");
  lit_580 = YPsb((P)"P ");
  lit_581 = YPPsym((P)"x-1727");
  lit_582 = YPPlist(2,YPPsym((P)"x-1726"),YPPsym((P)"x-1725"));
  lit_583 = YPsb((P)"P ");
  lit_584 = YPPlist(1,YPPsym((P)"x"));
  lit_585 = YPPlist(1,YPPsym((P)"x"));
  lit_586 = YPsb((P)" {\n");
  lit_587 = YPsb((P)"DEFCREGS();\n");
  lit_588 = YPsb((P)"loop:\n");
  lit_589 = YPsb((P)"}\n");
  T234 = YPsig(LITREF(lit_582),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1727_215 = YPmet(FUNCODEREF(fun_x_1727_215),LITREF(lit_581),T234,ENVNUL,PNUL,sloc(1074));
  T233 = YPsig(LITREF(lit_584),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_216 = YPmet(FUNCODEREF(fun_216),YPfalse,T233,ENVNUL,PNUL,sloc(1074));
  T232 = YPsig(LITREF(lit_585),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_217 = YPmet(FUNCODEREF(fun_217),YPfalse,T232,ENVNUL,PNUL,sloc(1074));
  T231 = YPsig(LITREF(lit_576),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_218 = YPmet(FUNCODEREF(fun_generate_function_code_218),LITREF(lit_575),T231,ENVNUL,PNUL,sloc(1068));
  T237 = BOUNDP(YevalSg2cYgenerate_function_code);
  if (T237 != YPfalse) {
    T236 = VARREF(YevalSg2cYgenerate_function_code);
  } else {
    T236 = YPfalse;
  }
  T238 = fun_generate_function_code_218;
  T235 = XCALL2(1,VARREF(YPdefine_method),T236,T238);
  VARSET(YevalSg2cYgenerate_function_code,T235);
  lit_590 = YPPsym((P)"dispatcher?");
  lit_591 = YPPlist(1,YPPsym((P)"definition"));
  lit_592 = YPsb((P)"%dispatch");
  lit_593 = YPsb((P)"-dispatch");
  lit_594 = YPsb((P)"-dispatch");
  T239 = YPsig(LITREF(lit_591),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_dispatcherQ_219 = YPmet(FUNCODEREF(fun_dispatcherQ_219),LITREF(lit_590),T239,ENVNUL,PNUL,sloc(1086));
  T242 = BOUNDP(YevalSg2cYdispatcherQ);
  if (T242 != YPfalse) {
    T241 = VARREF(YevalSg2cYdispatcherQ);
  } else {
    T241 = YPfalse;
  }
  T243 = fun_dispatcherQ_219;
  T240 = XCALL2(1,VARREF(YPdefine_method),T241,T243);
  VARSET(YevalSg2cYdispatcherQ,T240);
  lit_595 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"definition"));
  lit_596 = YPsb((P)"\nFUNCODEDEF(");
  lit_597 = YPsb((P)") {\n");
  lit_598 = YPsb((P)"P ");
  lit_599 = YPPsym((P)"x-1731");
  lit_600 = YPPlist(2,YPPsym((P)"x-1730"),YPPsym((P)"x-1729"));
  lit_601 = YPPlist(1,YPPsym((P)"x"));
  lit_602 = YPPlist(1,YPPsym((P)"x"));
  lit_603 = YPsb((P)"LINK_STACK();\n");
  lit_604 = YPPlist(1,YPPsym((P)"b"));
  lit_605 = YPsb((P)"NARGS(");
  lit_606 = YPsb((P)"ARG(");
  lit_607 = YPsb((P)", ");
  lit_608 = YPsb((P)")");
  lit_609 = YPsb((P)"loop:\n");
  lit_610 = YPsb((P)"UNLINK_STACK();\n");
  lit_611 = YPsb((P)"}\n");
  T248 = YPsig(LITREF(lit_600),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1731_220 = YPmet(FUNCODEREF(fun_x_1731_220),LITREF(lit_599),T248,ENVNUL,PNUL,sloc(1103));
  T247 = YPsig(LITREF(lit_601),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_221 = YPmet(FUNCODEREF(fun_221),YPfalse,T247,ENVNUL,PNUL,sloc(1103));
  T246 = YPsig(LITREF(lit_602),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_222 = YPmet(FUNCODEREF(fun_222),YPfalse,T246,ENVNUL,PNUL,sloc(1103));
  T245 = YPsig(LITREF(lit_604),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_223 = YPmet(FUNCODEREF(fun_223),YPfalse,T245,ENVNUL,PNUL,sloc(1110));
  T244 = YPsig(LITREF(lit_595),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_224 = YPmet(FUNCODEREF(fun_generate_function_code_224),LITREF(lit_575),T244,ENVNUL,PNUL,sloc(1094));
  T251 = BOUNDP(YevalSg2cYgenerate_function_code);
  if (T251 != YPfalse) {
    T250 = VARREF(YevalSg2cYgenerate_function_code);
  } else {
    T250 = YPfalse;
  }
  T252 = fun_generate_function_code_224;
  T249 = XCALL2(1,VARREF(YPdefine_method),T250,T252);
  VARSET(YevalSg2cYgenerate_function_code,T249);
  lit_612 = YPPsym((P)"generate-local-temporaries");
  lit_613 = YPPlist(2,YPPsym((P)"temps"),YPPsym((P)"code-out"));
  lit_614 = YPPsym((P)"x-1734");
  lit_615 = YPPlist(1,YPPsym((P)"x-1733"));
  lit_616 = YPsb((P)"P ");
  T254 = YPsig(LITREF(lit_615),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1734_225 = YPmet(FUNCODEREF(fun_x_1734_225),LITREF(lit_614),T254,ENVNUL,PNUL,sloc(1132));
  T253 = YPsig(LITREF(lit_613),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_local_temporaries_226 = YPmet(FUNCODEREF(fun_generate_local_temporaries_226),LITREF(lit_612),T253,ENVNUL,PNUL,sloc(1131));
  T257 = BOUNDP(YevalSg2cYgenerate_local_temporaries);
  if (T257 != YPfalse) {
    T256 = VARREF(YevalSg2cYgenerate_local_temporaries);
  } else {
    T256 = YPfalse;
  }
  T258 = fun_generate_local_temporaries_226;
  T255 = XCALL2(1,VARREF(YPdefine_method),T256,T258);
  VARSET(YevalSg2cYgenerate_local_temporaries,T255);
  VARSET(YevalSg2cYTtrace_registersQT,YPfalse);
  VARSET(YevalSg2cYTregisters_per_lineT,YPint((P)16));
  lit_617 = YPPsym((P)"generate-registers");
  lit_618 = YPPlist(2,YPPsym((P)"regs"),YPPsym((P)"code-out"));
  lit_619 = YPPsym((P)"next-line");
  lit_620 = YPPlist(1,YPPsym((P)"j"));
  lit_621 = YPsb((P)"P ");
  lit_622 = YPPsym((P)"next-reg");
  lit_623 = YPPlist(2,YPPsym((P)"j"),YPPsym((P)"i"));
  lit_624 = YPsb((P)";\n");
  T261 = YPsig(LITREF(lit_623),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_next_reg_227 = YPmet(FUNCODEREF(fun_next_reg_227),LITREF(lit_622),T261,ENVNUL,PNUL,sloc(1145));
  T260 = YPsig(LITREF(lit_620),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_next_line_228 = YPmet(FUNCODEREF(fun_next_line_228),LITREF(lit_619),T260,ENVNUL,PNUL,sloc(1142));
  T259 = YPsig(LITREF(lit_618),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_registers_229 = YPmet(FUNCODEREF(fun_generate_registers_229),LITREF(lit_617),T259,ENVNUL,PNUL,sloc(1140));
  T264 = BOUNDP(YevalSg2cYgenerate_registers);
  if (T264 != YPfalse) {
    T263 = VARREF(YevalSg2cYgenerate_registers);
  } else {
    T263 = YPfalse;
  }
  T265 = fun_generate_registers_229;
  T262 = XCALL2(1,VARREF(YPdefine_method),T263,T265);
  VARSET(YevalSg2cYgenerate_registers,T262);
  lit_625 = YPPsym((P)"module-info-name");
  lit_626 = YPPlist(1,YPPsym((P)"name"));
  lit_627 = YPsb((P)"module_info_");
  T266 = YPsig(LITREF(lit_626),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_info_name_230 = YPmet(FUNCODEREF(fun_module_info_name_230),LITREF(lit_625),T266,ENVNUL,PNUL,sloc(1152));
  T269 = BOUNDP(YevalSg2cYmodule_info_name);
  if (T269 != YPfalse) {
    T268 = VARREF(YevalSg2cYmodule_info_name);
  } else {
    T268 = YPfalse;
  }
  T270 = fun_module_info_name_230;
  T267 = XCALL2(1,VARREF(YPdefine_method),T268,T270);
  VARSET(YevalSg2cYmodule_info_name,T267);
  lit_628 = YPPsym((P)"declare-imported-module-infos");
  lit_629 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"mod"));
  lit_630 = YPPsym((P)"maybe-declare");
  lit_631 = YPPlist(1,YPPsym((P)"modname"));
  lit_632 = YPsb((P)"extern MODULE_INFO ");
  lit_633 = YPsb((P)";\n");
  lit_634 = YPPlist(1,YPPsym((P)"binding"));
  T273 = YPsig(LITREF(lit_631),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_maybe_declare_231 = YPmet(FUNCODEREF(fun_maybe_declare_231),LITREF(lit_630),T273,ENVNUL,PNUL,sloc(1161));
  T272 = YPsig(LITREF(lit_634),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_232 = YPmet(FUNCODEREF(fun_232),YPfalse,T272,ENVNUL,PNUL,sloc(1168));
  T271 = YPsig(LITREF(lit_629),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYdeclare_imported_module_infos = YPmet(FUNCODEREF(YevalSg2cYdeclare_imported_module_infos),LITREF(lit_628),T271,ENVNUL,PNUL,sloc(1158));
  T274 = YevalSg2cYdeclare_imported_module_infos;
  VARSET(YevalSg2cYdeclare_imported_module_infos,T274);
  lit_635 = YPPsym((P)"generate-module-info");
  lit_636 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"mod"));
  lit_637 = YPsb((P)"\n/* MODULE ENVIRONMENT INFORMATION */\n\n");
  lit_638 = YPsb((P)"\nstatic USE_INFO use_infos[] = {\n");
  lit_639 = YPPsym((P)"x-1737");
  lit_640 = YPPlist(1,YPPsym((P)"x-1736"));
  lit_641 = YPsb((P)"  {&");
  lit_642 = YPsb((P)"},\n");
  lit_643 = YPsb((P)"  {NULL}\n};\n");
  lit_644 = YPsb((P)"\nstatic IMPORT_INFO import_infos[] = {\n");
  lit_645 = YPPlist(2,YPPsym((P)"local-name"),YPPsym((P)"binding"));
  lit_646 = YPsb((P)"  {");
  lit_647 = YPsb((P)", &");
  lit_648 = YPsb((P)", ");
  lit_649 = YPsb((P)"NULL");
  lit_650 = YPsb((P)"},\n");
  lit_651 = YPsb((P)"  {NULL,NULL,NULL}\n};\n");
  lit_652 = YPsb((P)"\nstatic BINDING_INFO binding_infos[] = {\n");
  lit_653 = YPPlist(1,YPPsym((P)"binding"));
  lit_654 = YPsb((P)"  {");
  lit_655 = YPsb((P)", ");
  lit_656 = YPsb((P)"CVAR, &");
  lit_657 = YPsb((P)"},\n");
  lit_658 = YPsb((P)"DVAR, &");
  lit_659 = YPsb((P)"},\n");
  lit_660 = YPsb((P)"PVAR, NULL},\n");
  lit_661 = YPsb((P)"  {NULL, NVAR, NULL}\n};\n");
  lit_662 = YPsb((P)"\nstatic EXPORT_INFO export_infos[] = {\n");
  lit_663 = YPPsym((P)"x-1746");
  lit_664 = YPPlist(1,YPPsym((P)"x-1745"));
  lit_665 = YPsb((P)"  {");
  lit_666 = YPsb((P)", ");
  lit_667 = YPsb((P)"NULL");
  lit_668 = YPsb((P)"},\n");
  lit_669 = YPsb((P)"  {NULL, NULL}\n};\n");
  lit_670 = YPsb((P)"\nextern MODULE_INFO ");
  lit_671 = YPsb((P)";\n");
  lit_672 = YPsb((P)"MODULE_INFO ");
  lit_673 = YPsb((P)" = {\n");
  lit_674 = YPsb((P)"  ");
  lit_675 = YPsb((P)",\n");
  lit_676 = YPsb((P)"  NULL,\n");
  lit_677 = YPsb((P)"  use_infos,\n");
  lit_678 = YPsb((P)"  import_infos,\n");
  lit_679 = YPsb((P)"  binding_infos,\n");
  lit_680 = YPsb((P)"  export_infos,\n");
  lit_681 = YPsb((P)"};\n");
  T279 = YPsig(LITREF(lit_640),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1737_234 = YPmet(FUNCODEREF(fun_x_1737_234),LITREF(lit_639),T279,ENVNUL,PNUL,sloc(1188));
  T278 = YPsig(LITREF(lit_645),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_235 = YPmet(FUNCODEREF(fun_235),YPfalse,T278,ENVNUL,PNUL,sloc(1195));
  T277 = YPsig(LITREF(lit_653),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_236 = YPmet(FUNCODEREF(fun_236),YPfalse,T277,ENVNUL,PNUL,sloc(1209));
  T276 = YPsig(LITREF(lit_664),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1746_237 = YPmet(FUNCODEREF(fun_x_1746_237),LITREF(lit_663),T276,ENVNUL,PNUL,sloc(1222));
  T275 = YPsig(LITREF(lit_636),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYgenerate_module_info = YPmet(FUNCODEREF(YevalSg2cYgenerate_module_info),LITREF(lit_635),T275,ENVNUL,PNUL,sloc(1177));
  T280 = YevalSg2cYgenerate_module_info;
  VARSET(YevalSg2cYgenerate_module_info,T280);
  lit_682 = YPPsym((P)"module-init-name");
  lit_683 = YPPlist(1,YPPsym((P)"name"));
  lit_684 = YPsb((P)"load_module_");
  T281 = YPsig(LITREF(lit_683),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_name_239 = YPmet(FUNCODEREF(fun_module_init_name_239),LITREF(lit_682),T281,ENVNUL,PNUL,sloc(1240));
  T284 = BOUNDP(YevalSg2cYmodule_init_name);
  if (T284 != YPfalse) {
    T283 = VARREF(YevalSg2cYmodule_init_name);
  } else {
    T283 = YPfalse;
  }
  T285 = fun_module_init_name_239;
  T282 = XCALL2(1,VARREF(YPdefine_method),T283,T285);
  VARSET(YevalSg2cYmodule_init_name,T282);
  lit_685 = YPPsym((P)"module-init-decl");
  lit_686 = YPPlist(1,YPPsym((P)"name"));
  lit_687 = YPsb((P)"void ");
  lit_688 = YPsb((P)" (void)");
  T286 = YPsig(LITREF(lit_686),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_decl_240 = YPmet(FUNCODEREF(fun_module_init_decl_240),LITREF(lit_685),T286,ENVNUL,PNUL,sloc(1243));
  T289 = BOUNDP(YevalSg2cYmodule_init_decl);
  if (T289 != YPfalse) {
    T288 = VARREF(YevalSg2cYmodule_init_decl);
  } else {
    T288 = YPfalse;
  }
  T290 = fun_module_init_decl_240;
  T287 = XCALL2(1,VARREF(YPdefine_method),T288,T290);
  VARSET(YevalSg2cYmodule_init_decl,T287);
  lit_689 = YPPsym((P)"generate-module-init");
  lit_690 = YPPlist(3,YPPsym((P)"code-out"),YPPsym((P)"mod"),YPPsym((P)"form"));
  lit_691 = YPsb((P)"dl");
  lit_692 = YPsb((P)"\n/* MODULES USED: */\n\n");
  lit_693 = YPPsym((P)"x-1752");
  lit_694 = YPPlist(1,YPPsym((P)"x-1751"));
  lit_695 = YPsb((P)"extern ");
  lit_696 = YPsb((P)";\n");
  lit_697 = YPsb((P)"\n/* EXPRESSION: */\n\n");
  lit_698 = YPsb((P)"extern ");
  lit_699 = YPsb((P)";\n\n");
  lit_700 = YPsb((P)" {\n");
  lit_701 = YPsb((P)"  static int need_init = 1;\n");
  lit_702 = YPsb((P)"  if (!need_init) return;\n\n");
  lit_703 = YPsb((P)"  need_init = 0;\n");
  lit_704 = YPPsym((P)"x-1757");
  lit_705 = YPPlist(1,YPPsym((P)"x-1756"));
  lit_706 = YPsb((P)"  ");
  lit_707 = YPsb((P)"();\n");
  lit_708 = YPsb((P)"\n");
  lit_709 = YPsb((P)"\n");
  lit_710 = YPsb((P)"}\n");
  T293 = YPsig(LITREF(lit_694),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1752_241 = YPmet(FUNCODEREF(fun_x_1752_241),LITREF(lit_693),T293,ENVNUL,PNUL,sloc(1254));
  T292 = YPsig(LITREF(lit_705),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1757_242 = YPmet(FUNCODEREF(fun_x_1757_242),LITREF(lit_704),T292,ENVNUL,PNUL,sloc(1263));
  T291 = YPsig(LITREF(lit_690),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_module_init_243 = YPmet(FUNCODEREF(fun_generate_module_init_243),LITREF(lit_689),T291,ENVNUL,PNUL,sloc(1246));
  T296 = BOUNDP(YevalSg2cYgenerate_module_init);
  if (T296 != YPfalse) {
    T295 = VARREF(YevalSg2cYgenerate_module_init);
  } else {
    T295 = YPfalse;
  }
  T297 = fun_generate_module_init_243;
  T294 = XCALL2(1,VARREF(YPdefine_method),T295,T297);
  VARSET(YevalSg2cYgenerate_module_init,T294);
  lit_711 = YPPsym((P)"generate-main");
  lit_712 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"mod"));
  lit_713 = YPsb((P)"\n/* APPLICATION: */\n\n");
  lit_714 = YPsb((P)"extern MODULE_INFO ");
  lit_715 = YPsb((P)";\n");
  lit_716 = YPsb((P)"extern ");
  lit_717 = YPsb((P)";\n\n");
  lit_718 = YPsb((P)"MODULE_INFO *goo_toplevel_module_info = &");
  lit_719 = YPsb((P)";\n\n");
  lit_720 = YPsb((P)"int main(int argc, char* argv[]) {\n");
  lit_721 = YPsb((P)"  ");
  lit_722 = YPsb((P)"%init-world");
  lit_723 = YPsb((P)"(argc, argv);\n");
  lit_724 = YPsb((P)"  ");
  lit_725 = YPsb((P)"();\n");
  lit_726 = YPsb((P)"  return 0;\n");
  lit_727 = YPsb((P)"}\n");
  T298 = YPsig(LITREF(lit_712),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_main_244 = YPmet(FUNCODEREF(fun_generate_main_244),LITREF(lit_711),T298,ENVNUL,PNUL,sloc(1272));
  T301 = BOUNDP(YevalSg2cYgenerate_main);
  if (T301 != YPfalse) {
    T300 = VARREF(YevalSg2cYgenerate_main);
  } else {
    T300 = YPfalse;
  }
  T302 = fun_generate_main_244;
  T299 = XCALL2(1,VARREF(YPdefine_method),T300,T302);
  VARSET(YevalSg2cYgenerate_main,T299);
  T303 = YPfalse;
  return T303;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_evalStop;
extern MODULE_INFO module_info_evalSast_linearize;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooSioSread;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSsystem},
  {&module_info_gooSioSwrite},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsSstr},
  {&module_info_evalSast},
  {&module_info_evalStop},
  {&module_info_evalSast_linearize},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"$max-int", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"function-source-setter", &module_info_evalSast, NULL},
  {"*register-passive?*", &module_info_evalSast_linearize, NULL},
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
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"closure-creation-free", &module_info_evalSast_linearize, NULL},
  {"do-static-global-bindings", &module_info_evalSast, NULL},
  {"reference-called-function?-setter", &module_info_evalSast, NULL},
  {"application-arguments", &module_info_evalSast, NULL},
  {"bt", &module_info_evalStop, NULL},
  {"<arguments>", &module_info_evalSast, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"<regular-application>", &module_info_evalSast, NULL},
  {"function-temporaries", &module_info_evalSast, NULL},
  {"$$", &module_info_evalStop, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"parent-directory", &module_info_gooSsystem, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"application-binding", &module_info_evalSast, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"frame-var", &module_info_evalStop, NULL},
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
  {"gen-refs", &module_info_gooSboot, NULL},
  {"reference-frame-number", &module_info_evalSast, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"find-goo-file-at", &module_info_gooSsystem, NULL},
  {"fix-let-body-setter", &module_info_evalSast, NULL},
  {"fix-let-body", &module_info_evalSast, NULL},
  {"load", &module_info_evalStop, NULL},
  {"set-module-environments", &module_info_evalSast, NULL},
  {"<global-assignment>", &module_info_evalSast, NULL},
  {"<magic-reference>", &module_info_evalSast, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
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
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
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
  {"parse-in", &module_info_evalStop, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"function-self-recursive?-setter", &module_info_evalSast, NULL},
  {"global-box-value", &module_info_evalSast, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"constant-index", &module_info_evalSast, NULL},
  {"app-filename", &module_info_gooSruntime, NULL},
  {"add-build-path", &module_info_gooSsystem, NULL},
  {"components-to-pathname", &module_info_gooSsystem, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"binding-type", &module_info_evalSast, NULL},
  {"<ast-primitive>", &module_info_evalSast, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
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
  {"write-type", &module_info_gooSioSwrite, NULL},
  {"monitor-main-thunk", &module_info_evalSast, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"c-filename", &module_info_gooSsystem, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"program-form", &module_info_evalSast_linearize, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"program-type-setter", &module_info_evalSast, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"module-syntax-environment", &module_info_evalSast, NULL},
  {"function-signature", &module_info_evalSast, NULL},
  {"<module>", &module_info_evalSast, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"create-directory", &module_info_gooSsystem, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<bound?>", &module_info_evalSast, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"*goo-root*", &module_info_gooSsystem, NULL},
  {"locals-body", &module_info_evalSast, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"function-temporaries-setter", &module_info_evalSast, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
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
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"*path-separator*", &module_info_gooSsystem, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"load-file", &module_info_evalStop, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"form-program", &module_info_evalSast_linearize, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"function-data-refs", &module_info_evalSast, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"<dynamic-assignment>", &module_info_evalSast, NULL},
  {"form-quotations", &module_info_evalSast_linearize, NULL},
  {"signature-value", &module_info_evalSast, NULL},
  {"*goo-extension*", &module_info_gooSsystem, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"signature-arity-setter", &module_info_evalSast, NULL},
  {"*goo-personal-root*", &module_info_gooSsystem, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"binding-dynamic-extent?", &module_info_evalSast, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"unwind-protect-protected-thunk", &module_info_evalSast, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"module-loader-module-type", &module_info_evalSast, NULL},
  {"load-module", &module_info_evalSast, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"bound?-reference", &module_info_evalSast, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"loc-val-setter", &module_info_gooSruntime, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"<fix-let>", &module_info_evalSast, NULL},
  {"<box-creation>", &module_info_evalSast_linearize, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"msg*", &module_info_gooSioSwrite, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"environment-uses-modules", &module_info_evalSast, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"binding-mangled-name", &module_info_evalSast, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"do-stack-frames", &module_info_evalStop, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"as-lst", &module_info_evalSast, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
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
  {"nxt", &module_info_gooScolsScol, NULL},
  {"signature-nary?", &module_info_evalSast, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"monitor-handler", &module_info_evalSast, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
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
  {"unchecked-runtime-environment", &module_info_evalSast, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"esctst", &module_info_evalStop, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"<global-box>", &module_info_evalSast, NULL},
  {"monitor-info", &module_info_evalSast, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"components-basename", &module_info_gooSsystem, NULL},
  {"function-self-recursive?", &module_info_evalSast, NULL},
  {"box-form", &module_info_evalSast_linearize, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"*obj-extension*", &module_info_gooSsystem, NULL},
  {"<definition>", &module_info_evalSast, NULL},
  {"objectify-with-subtransaction", &module_info_evalSast, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"backtrace", &module_info_evalStop, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"assignment-reference", &module_info_evalSast, NULL},
  {"report-undefined-global-bindings", &module_info_evalSast, NULL},
  {"binding-native-to?", &module_info_evalSast, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"find-environment-module", &module_info_evalSast, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"binding-info", &module_info_evalSast, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"module-uses-c-libraries", &module_info_evalSast, NULL},
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
  {"program-type", &module_info_evalSast, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"signature-nary?-setter", &module_info_evalSast, NULL},
  {"reference-offset", &module_info_evalSast_linearize, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
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
  {"program-register-setter", &module_info_evalSast, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"function-free", &module_info_evalSast, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"<ast-generic>", &module_info_evalSast, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"<pathname-error>", &module_info_gooSsystem, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"<local-assignment>", &module_info_evalSast, NULL},
  {"function-value", &module_info_evalSast, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"probe-directory", &module_info_gooSsystem, NULL},
  {"<dynamic-definition>", &module_info_evalSast, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"signature-arity", &module_info_evalSast, NULL},
  {"g2c-eval", &module_info_evalStop, NULL},
  {"ast-contains-fun?", &module_info_evalSast_linearize, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"file-exists?", &module_info_gooSsystem, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
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
  {"enum", &module_info_gooScolsScol, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"<constant>", &module_info_evalSast, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"add-goo-personal-root-path", &module_info_gooSsystem, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"closurize-main!", &module_info_evalSast_linearize, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"function-binding", &module_info_evalSast, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"load-in", &module_info_evalSast, NULL},
  {"os-val-setter", &module_info_gooSsystem, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"<ast-macro-definition>", &module_info_evalSast, NULL},
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
  {"objectify-signature", &module_info_evalSast, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"identity", &module_info_gooSruntime, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"signature-specs-setter", &module_info_evalSast, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"<static-module-binding-reference>", &module_info_evalSast, NULL},
  {"$$$", &module_info_evalStop, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"binding-info-setter", &module_info_evalSast, NULL},
  {"$", &module_info_evalStop, NULL},
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
  {"signature-bindings-setter", &module_info_evalSast, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"<raw-constant>", &module_info_evalSast, NULL},
  {"do-module-loader-modules", &module_info_evalSast, NULL},
  {"<binding>", &module_info_evalSast, NULL},
  {"application-known?", &module_info_evalSast, NULL},
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
  {"top", &module_info_evalStop, NULL},
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
  {"<sequential>", &module_info_evalSast, NULL},
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
  {"ascii-whitespaces", &module_info_gooScolsSstr, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"*c-extension*", &module_info_gooSsystem, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"init-environment-for-eval", &module_info_evalSast, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"<programs>", &module_info_evalSast, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSast, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"function-index-setter", &module_info_evalSast, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"alternative-condition", &module_info_evalSast, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"auto-eval", &module_info_evalStop, NULL},
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
  {"probe-module", &module_info_evalSast, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"hierarchical-components", &module_info_gooSsystem, NULL},
  {"<module-loader>", &module_info_evalSast, NULL},
  {"program-register", &module_info_evalSast, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"form-definitions", &module_info_evalSast_linearize, NULL},
  {"add-goo-root-path", &module_info_gooSsystem, NULL},
  {"recurring-write", &module_info_gooSioSwrite, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"fix-let-arguments-setter", &module_info_evalSast, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"reference-binding", &module_info_evalSast, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"frame", &module_info_evalStop, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"<local-reference>", &module_info_evalSast, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"objectify-quotation", &module_info_evalSast, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"fix-let-types-setter", &module_info_evalSast, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"<runtime-assignment>", &module_info_evalSast, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"binding-locative-setter", &module_info_evalSast, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"binding-index-setter", &module_info_evalSast, NULL},
  {"module-mangled-name-setter", &module_info_evalSast, NULL},
  {"alternative-alternant", &module_info_evalSast, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"save-image", &module_info_evalStop, NULL},
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
  {"alternative-consequent", &module_info_evalSast, NULL},
  {"function-source", &module_info_evalSast, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"as", &module_info_gooStypes, NULL},
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
  {"signature-specs", &module_info_evalSast, NULL},
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
  {"dl", &module_info_gooSboot, NULL},
  {"find-binding", &module_info_evalSast, NULL},
  {"lift!", &module_info_evalSast_linearize, NULL},
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
  {"eval", &module_info_evalSsyntax, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"program-line", &module_info_evalSast, NULL},
  {"<ast-signature>", &module_info_evalSast, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"assignment-binding", &module_info_evalSast, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"label-components", &module_info_gooSsystem, NULL},
  {"char->ascii", &module_info_gooSmath, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"function-frame-len-setter", &module_info_evalSast, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
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
  {"ascii-limit", &module_info_gooScolsSstr, NULL},
  {"<reference>", &module_info_evalSast, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"binding-module", &module_info_evalSast, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"module-target-environment", &module_info_evalSast, NULL},
  {"<computed-program>", &module_info_evalSast, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"function-registers", &module_info_evalSast, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"<directory-error>", &module_info_gooSsystem, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"<real-reference>", &module_info_evalSast, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"binding-type-setter", &module_info_evalSast, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"pathname-to-components", &module_info_gooSsystem, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"<macro-reference>", &module_info_evalSast, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"read-file", &module_info_evalStop, NULL},
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
  {"<global-reference>", &module_info_evalSast, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
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
  {"function-bindings", &module_info_evalSast, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"%compile", &module_info_gooSsystem, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"program-definitions", &module_info_evalSast_linearize, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"locals-functions-setter", &module_info_evalSast, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"fix-let-arguments", &module_info_evalSast, NULL},
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
  {"signature-value-setter", &module_info_evalSast, NULL},
  {"binding-index", &module_info_evalSast, NULL},
  {"module-mangled-name", &module_info_evalSast, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
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
  {"generate-quotation", CVAR, &YevalSg2cYgenerate_quotation},
  {"---main-2---", PVAR, NULL},
  {"$local-marker", CVAR, &YevalSg2cYDlocal_marker},
  {"generate-function-body-reference", CVAR, &YevalSg2cYgenerate_function_body_reference},
  {"or/set", PVAR, NULL},
  {"$min-character-code", CVAR, &YevalSg2cYDmin_character_code},
  {"generate-module-init", CVAR, &YevalSg2cYgenerate_module_init},
  {"mangle-integer", CVAR, &YevalSg2cYmangle_integer},
  {"primitive-inlinable?", CVAR, &YevalSg2cYprimitive_inlinableQ},
  {"$now-mod-var-name", CVAR, &YevalSg2cYDnow_mod_var_name},
  {"funinit-to-c", CVAR, &YevalSg2cYfuninit_to_c},
  {"generate-global-environment", CVAR, &YevalSg2cYgenerate_global_environment},
  {"module-mtime", CVAR, &YevalSg2cYmodule_mtime},
  {"generate-header", CVAR, &YevalSg2cYgenerate_header},
  {"mangle-raw-name", CVAR, &YevalSg2cYmangle_raw_name},
  {"module-up-to-date?", CVAR, &YevalSg2cYmodule_up_to_dateQ},
  {"generate-functions", CVAR, &YevalSg2cYgenerate_functions},
  {"$iep-marker", CVAR, &YevalSg2cYDiep_marker},
  {"g2c-clean", CVAR, &YevalSg2cYg2c_clean},
  {"mangle-global-name", CVAR, &YevalSg2cYmangle_global_name},
  {"$mangles-data", CVAR, &YevalSg2cYDmangles_data},
  {"$escape-separator", CVAR, &YevalSg2cYDescape_separator},
  {"module-loader-app-modname-setter", CVAR, &YevalSg2cYmodule_loader_app_modname_setter},
  {"$hygiene-char", CVAR, &YevalSg2cYDhygiene_char},
  {"*registers-per-line*", CVAR, &YevalSg2cYTregisters_per_lineT},
  {"generate-module-info", CVAR, &YevalSg2cYgenerate_module_info},
  {"generate-local-temporaries", CVAR, &YevalSg2cYgenerate_local_temporaries},
  {"module-src-file-setter", CVAR, &YevalSg2cYmodule_src_file_setter},
  {"generate-return", CVAR, &YevalSg2cYgenerate_return},
  {"g2c-ast", CVAR, &YevalSg2cYg2c_ast},
  {"generate-function-specs", CVAR, &YevalSg2cYgenerate_function_specs},
  {"generate-function-forwards", CVAR, &YevalSg2cYgenerate_function_forwards},
  {"generate-function-forward", CVAR, &YevalSg2cYgenerate_function_forward},
  {"funshell-to-c", CVAR, &YevalSg2cYfunshell_to_c},
  {"module-loader-appname", CVAR, &YevalSg2cYmodule_loader_appname},
  {"false-name", CVAR, &YevalSg2cYfalse_name},
  {"compile-load", CVAR, &YevalSg2cYcompile_load},
  {"g2c-def-app", CVAR, &YevalSg2cYg2c_def_app},
  {"mangle-binding", CVAR, &YevalSg2cYmangle_binding},
  {"reference->c", CVAR, &YevalSg2cYreference_Gc},
  {"gen-ref", CVAR, &YevalSg2cYgen_ref},
  {"between-parentheses-comma-separated", PVAR, NULL},
  {"module-init-decl", CVAR, &YevalSg2cYmodule_init_decl},
  {"generate-global-binding", CVAR, &YevalSg2cYgenerate_global_binding},
  {"generate-function-code", CVAR, &YevalSg2cYgenerate_function_code},
  {"$escape-marker", CVAR, &YevalSg2cYDescape_marker},
  {"mangle-local-marked-name", CVAR, &YevalSg2cYmangle_local_marked_name},
  {"gen-result", CVAR, &YevalSg2cYgen_result},
  {"generate-c-module", CVAR, &YevalSg2cYgenerate_c_module},
  {"*tmp-file-counter*", DVAR, &YevalSg2cYTtmp_file_counterT},
  {"buf-cat2!", CVAR, &YevalSg2cYbuf_cat2X},
  {"with-expression", PVAR, NULL},
  {"dispatcher?", CVAR, &YevalSg2cYdispatcherQ},
  {"binding->c", CVAR, &YevalSg2cYbinding_Gc},
  {"generate-trailer", CVAR, &YevalSg2cYgenerate_trailer},
  {"for-commas", PVAR, NULL},
  {"---main-1---", PVAR, NULL},
  {"$method-mangled-marker-string", CVAR, &YevalSg2cYDmethod_mangled_marker_string},
  {"$local-suffix", CVAR, &YevalSg2cYDlocal_suffix},
  {"generate-makefile", CVAR, &YevalSg2cYgenerate_makefile},
  {"pp", CVAR, &YevalSg2cYpp},
  {"$max-character-code", CVAR, &YevalSg2cYDmax_character_code},
  {"mangle-module-into", CVAR, &YevalSg2cYmangle_module_into},
  {"generate-function-binding", CVAR, &YevalSg2cYgenerate_function_binding},
  {"*definitions*", DVAR, &YevalSg2cYTdefinitionsT},
  {"*mangle-buffer*", CVAR, &YevalSg2cYTmangle_bufferT},
  {"*g2c-app*", CVAR, &YevalSg2cYTg2c_appT},
  {"mangle-quotation-name", CVAR, &YevalSg2cYmangle_quotation_name},
  {"$number-call-templates", CVAR, &YevalSg2cYDnumber_call_templates},
  {"$hygiene-marker", CVAR, &YevalSg2cYDhygiene_marker},
  {"declare-imported-module-infos", CVAR, &YevalSg2cYdeclare_imported_module_infos},
  {"*dynamic-linking?*", DVAR, &YevalSg2cYTdynamic_linkingQT},
  {"compute-program", CVAR, &YevalSg2cYcompute_program},
  {"$number-characters", CVAR, &YevalSg2cYDnumber_characters},
  {"module-mtime-setter", CVAR, &YevalSg2cYmodule_mtime_setter},
  {"module-src-file", CVAR, &YevalSg2cYmodule_src_file},
  {"generate-function-bodies", CVAR, &YevalSg2cYgenerate_function_bodies},
  {"module-init-name", CVAR, &YevalSg2cYmodule_init_name},
  {"out-list-builder", CVAR, &YevalSg2cYout_list_builder},
  {"module-info-name", CVAR, &YevalSg2cYmodule_info_name},
  {"generate-quotation-forwards", CVAR, &YevalSg2cYgenerate_quotation_forwards},
  {"generate-self-recursive-call", CVAR, &YevalSg2cYgenerate_self_recursive_call},
  {"mangle-local-name", CVAR, &YevalSg2cYmangle_local_name},
  {"gen-depth", CVAR, &YevalSg2cYgen_depth},
  {"$method-mangled-marker", CVAR, &YevalSg2cYDmethod_mangled_marker},
  {"to-c", CVAR, &YevalSg2cYto_c},
  {"mangle-name-into", CVAR, &YevalSg2cYmangle_name_into},
  {"char-buffer-as-string", CVAR, &YevalSg2cYchar_buffer_as_string},
  {"mangle-boot-name", CVAR, &YevalSg2cYmangle_boot_name},
  {"generate-closure-structure", CVAR, &YevalSg2cYgenerate_closure_structure},
  {"$iep-suffix", CVAR, &YevalSg2cYDiep_suffix},
  {"generate-shadow-args", CVAR, &YevalSg2cYgenerate_shadow_args},
  {"generate-registers", CVAR, &YevalSg2cYgenerate_registers},
  {"$module-separator", CVAR, &YevalSg2cYDmodule_separator},
  {"float-to-c-string", CVAR, &YevalSg2cYfloat_to_c_string},
  {"mangle-string-literal", CVAR, &YevalSg2cYmangle_string_literal},
  {"*trace-registers?*", CVAR, &YevalSg2cYTtrace_registersQT},
  {"$name-mangler-table", CVAR, &YevalSg2cYDname_mangler_table},
  {"with-statement", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"%print-cpu-usage", PVAR, NULL},
  {"g2c-goo", CVAR, &YevalSg2cYg2c_goo},
  {"between-parentheses", PVAR, NULL},
  {"generate-quotations", CVAR, &YevalSg2cYgenerate_quotations},
  {"g2c-exp", CVAR, &YevalSg2cYg2c_exp},
  {"compute-ast", CVAR, &YevalSg2cYcompute_ast},
  {"g2c-top", CVAR, &YevalSg2cYg2c_top},
  {"generate-c-application", CVAR, &YevalSg2cYgenerate_c_application},
  {"for-mods", PVAR, NULL},
  {"g2c-build-app", CVAR, &YevalSg2cYg2c_build_app},
  {"generate-main", CVAR, &YevalSg2cYgenerate_main},
  {"g2c-test", CVAR, &YevalSg2cYg2c_test},
  {"gen-fab-list", CVAR, &YevalSg2cYgen_fab_list},
  {"purge-outdated-modules", CVAR, &YevalSg2cYpurge_outdated_modules},
  {"module-loader-app-modname", CVAR, &YevalSg2cYmodule_loader_app_modname},
  {"<g2c-module>", CVAR, &YevalSg2cYLg2c_moduleG},
  {"$c-escapes", CVAR, &YevalSg2cYDc_escapes},
  {"mangler-reset", CVAR, &YevalSg2cYmangler_reset},
  {"<g2c-module-loader>", CVAR, &YevalSg2cYLg2c_module_loaderG},
  {"with-used-expression", PVAR, NULL},
  {"$module-marker", CVAR, &YevalSg2cYDmodule_marker},
  {"module-loader-appname-setter", CVAR, &YevalSg2cYmodule_loader_appname_setter},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"g2c-clean", NULL},
  {"g2c-ast", NULL},
  {"g2c-def-app", NULL},
  {"g2c-eval", NULL},
  {"g2c-top", NULL},
  {"g2c-test", NULL},
  {"g2c-goo", NULL},
  {"g2c-exp", NULL},
  {"g2c-build-app", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_evalSg2c;
MODULE_INFO module_info_evalSg2c = {
  "eval/g2c",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSsystem (void);
extern void load_module_gooSioSwrite (void);
extern void load_module_gooScolsScol (void);
extern void load_module_gooScolsSstr (void);
extern void load_module_evalSast (void);
extern void load_module_evalStop (void);
extern void load_module_evalSast_linearize (void);

/* EXPRESSION: */

extern void load_module_evalSg2c (void);

void load_module_evalSg2c (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSsystem();
  load_module_gooSioSwrite();
  load_module_gooScolsScol();
  load_module_gooScolsSstr();
  load_module_evalSast();
  load_module_evalStop();
  load_module_evalSast_linearize();

  (P)YevalSg2cY___main_0___();
  (P)YevalSg2cY___main_1___();
  (P)YevalSg2cY___main_2___();

}

/* END OF GENERATED CODE. */
