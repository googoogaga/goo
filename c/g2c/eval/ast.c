/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/ast");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/ast */

EXT(Yclass_children,"goo/boot","class-children");
DEF(YevalSastYobjectify_symbol,"eval/ast","objectify-symbol");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
DEF(YevalSastYftype,"eval/ast","ftype");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooSmathYdiv,"goo/math","div");
DEF(YevalSastYfunction_adjectives_setter,"eval/ast","function-adjectives-setter");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YevalSmoduleYroll_back_transaction,"eval/module","roll-back-transaction");
DEF(YevalSastYfunction_binding_setter,"eval/ast","function-binding-setter");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
DEF(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
DEF(YevalSastYobjectify_bind_exit,"eval/ast","objectify-bind-exit");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
DEF(YevalSastYobjectify_primitive_definition,"eval/ast","objectify-primitive-definition");
EXT(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
DEF(YevalSastYapplication_binding,"eval/ast","application-binding");
DEF(YevalSastYcompute_local_reference_offsets,"eval/ast","compute-local-reference-offsets");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YLbignumG,"goo/boot","<bignum>");
DEF(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
DEF(YevalSastYobjectify_free_global_reference,"eval/ast","objectify-free-global-reference");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
DEF(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
DEF(YevalSastYspecial_iterate,"eval/ast","special-iterate");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YevalSmoduleYmodule_data_processedQ,"eval/module","module-data-processed?");
DEF(YevalSastYalternative_alternant_setter,"eval/ast","alternative-alternant-setter");
EXT(YevalSmoduleYbinding_type,"eval/module","binding-type");
DEF(YevalSastYobjectify_generic_definition,"eval/ast","objectify-generic-definition");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
DEF(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
DEF(YevalSastYobjectify_function_source,"eval/ast","objectify-function-source");
DEF(YevalSastYobjectify_alternative,"eval/ast","objectify-alternative");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
DEF(YevalSastYbinding_closed_overQ,"eval/ast","binding-closed-over?");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
DEF(YevalSastYDsexpr_optionals_tag,"eval/ast","$sexpr-optionals-tag");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YOtup,"goo/boot","@tup");
EXT(YevalSmoduleYruntime_module_loader,"eval/module","runtime-module-loader");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YevalSmoduleYenvironment_next,"eval/module","environment-next");
EXT(YevalSmoduleYbinding_prop,"eval/module","binding-prop");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YevalSdependencyYfind_dependency,"eval/dependency","find-dependency");
EXT(YevalSmoduleYframe_bindings,"eval/module","frame-bindings");
DEF(YevalSastYLfunctionsG,"eval/ast","<functions>");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
DEF(YevalSastYobjectify_variable_definition,"eval/ast","objectify-variable-definition");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YPPmacro,"goo/boot","%%macro");
DEF(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
DEF(YevalSastYspecial_Praw,"eval/ast","special-%raw");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YevalSmoduleYbinding_locative,"eval/module","binding-locative");
DEF(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooSsystemYos_name,"goo/system","os-name");
DEF(YevalSastYLlow_letG,"eval/ast","<low-let>");
DEF(YevalSastYTmagic_bindingsT,"eval/ast","*magic-bindings*");
EXT(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
DEF(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
DEF(YevalSastYassignment_binding_setter,"eval/ast","assignment-binding-setter");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
DEF(YevalSastYpairize,"eval/ast","pairize");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YevalSmoduleYprobe_module,"eval/module","probe-module");
DEF(YevalSastYobjectify,"eval/ast","objectify");
DEF(YevalSastYobjectify_function_definition,"eval/ast","objectify-function-definition");
DEF(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
DEF(YevalSastYspecial_export,"eval/ast","special-export");
DEF(YevalSastYLvariable_definitionG,"eval/ast","<variable-definition>");
DEF(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YLintG,"goo/boot","<int>");
EXT(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
DEF(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
DEF(YevalSastYobjectify_dynamic_definition,"eval/ast","objectify-dynamic-definition");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
DEF(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
DEF(YevalSastYinit_g2c_regular_environment,"eval/ast","init-g2c-regular-environment");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(Ynot,"goo/boot","not");
EXT(YevalSmoduleYenvironment_uses_modules,"eval/module","environment-uses-modules");
DEF(YevalSastYboundQ_reference_setter,"eval/ast","bound?-reference-setter");
DEF(YevalSastYprocess_nary_closed_application,"eval/ast","process-nary-closed-application");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YevalSmoduleYmodule_name_to_relpath,"eval/module","module-name-to-relpath");
DEF(YevalSastYbind_exit_lightQ_setter,"eval/ast","bind-exit-light?-setter");
EXT(YgooSmacrosYmap,"goo/macros","map");
DEF(YevalSastYobjectify_compile_time,"eval/ast","objectify-compile-time");
EXT(YgooSmathYatan2,"goo/math","atan2");
DEF(YevalSastYspecial_unwind_protect,"eval/ast","special-unwind-protect");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(YevalSmoduleYLstatic_local_environmentG,"eval/module","<static-local-environment>");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
DEF(YevalSastYobjectify_application,"eval/ast","objectify-application");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YLnumG,"goo/boot","<num>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YevalSmoduleYbinding_type_setter,"eval/module","binding-type-setter");
DEF(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
DEF(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(Yprop_type,"goo/boot","prop-type");
DEF(YevalSastYfunction_inlineableQ,"eval/ast","function-inlineable?");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
EXT(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
DEF(YevalSastYunwind_protect_protected_thunk_setter,"eval/ast","unwind-protect-protected-thunk-setter");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
EXT(YgooStypesYtE,"goo/types","t=");
DEF(YevalSastYincf_ref_count,"eval/ast","incf-ref-count");
DEF(YevalSastYregister_magic_binding,"eval/ast","register-magic-binding");
EXT(YevalSmoduleYimport_and_mangle_globalX,"eval/module","import-and-mangle-global!");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YOrev,"goo/boot","@rev");
DEF(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
DEF(YevalSastYast_copy,"eval/ast","ast-copy");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
DEF(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYneg,"goo/math","neg");
DEF(YevalSastYobjectify_useSexport_module,"eval/ast","objectify-use/export-module");
DEF(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YevalSmoduleYinsert_globalsX,"eval/module","insert-globals!");
EXT(YevalSdependencyYdetach_dependent,"eval/dependency","detach-dependent");
DEF(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
DEF(YevalSastYmonitor_test_setter,"eval/ast","monitor-test-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
EXT(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YLunionG,"goo/boot","<union>");
DEF(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
DEF(YevalSastYobjectify_boundQ,"eval/ast","objectify-bound?");
DEF(YevalSastYmonitor_type_setter,"eval/ast","monitor-type-setter");
DEF(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
DEF(YevalSastYsignature_specs,"eval/ast","signature-specs");
DEF(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
DEF(YevalSastYfunction_signature,"eval/ast","function-signature");
DEF(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YevalSmoduleYmodule_mangled_name,"eval/module","module-mangled-name");
EXT(YgooSfunYfun_inlineableQ_setter,"goo/fun","fun-inlineable?-setter");
EXT(YevalSmoduleYbinding_mangled_name,"eval/module","binding-mangled-name");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
DEF(YevalSastYbinding_value,"eval/ast","binding-value");
DEF(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
DEF(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
DEF(YevalSastYast_contains_funQ,"eval/ast","ast-contains-fun?");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
EXT(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
DEF(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
DEF(YevalSastYbind_exit_lightQ,"eval/ast","bind-exit-light?");
DEF(YevalSastYboundQ_default,"eval/ast","bound?-default");
DEF(YevalSastYspecial_define_dynamic,"eval/ast","special-define-dynamic");
EXT(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
DEF(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YOOEE,"goo/boot","@@==");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooSchrYfabs,"goo/chr","fabs");
DEF(YevalSastYlocals_functions,"eval/ast","locals-functions");
DEF(YevalSastYreference_binding_setter,"eval/ast","reference-binding-setter");
DEF(YevalSastYspecial_use_mangle_module,"eval/ast","special-use-mangle-module");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
DEF(YevalSastYspecial_compile_time,"eval/ast","special-compile-time");
DEF(YevalSastYspecial_use_include,"eval/ast","special-use-include");
DEF(YevalSastYlocals_body,"eval/ast","locals-body");
DEF(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YgooSmathYroundS,"goo/math","round/");
DEF(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
DEF(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
DEF(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
DEF(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
DEF(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
DEF(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YevalSmoduleYtransaction_register_dependent,"eval/module","transaction-register-dependent");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YevalSmoduleYbinding_inferred_type,"eval/module","binding-inferred-type");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Ytail,"goo/boot","tail");
EXT(YevalSmoduleYLbindingG,"eval/module","<binding>");
EXT(YevalSmoduleYdo_module_loader_modules,"eval/module","do-module-loader-modules");
DEF(YevalSastYLpredefined_referenceG,"eval/ast","<predefined-reference>");
EXT(YLmagG,"goo/boot","<mag>");
DEF(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
DEF(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
DEF(YevalSastYDsexpr_compile_time_tag,"eval/ast","$sexpr-compile-time-tag");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YevalSmoduleYdo_static_global_bindings,"eval/module","do-static-global-bindings");
EXT(YOtall2Q,"goo/boot","@tall2?");
DEF(YevalSastYspecial_define_primitive,"eval/ast","special-define-primitive");
DEF(YevalSastYDsexpr_use_mangle_module_tag,"eval/ast","$sexpr-use-mangle-module-tag");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSfunYfun_inlineableQ,"goo/fun","fun-inlineable?");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
DEF(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YOnew,"goo/boot","@new");
EXT(YevalSmoduleYmodule_uses_c_includes,"eval/module","module-uses-c-includes");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
DEF(YevalSastYmagic_bindings,"eval/ast","magic-bindings");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
DEF(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
DEF(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
DEF(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
DEF(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
EXT(YevalSdependencyYdependency_and,"eval/dependency","dependency-and");
DEF(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YOanyQ,"goo/boot","@any?");
DEF(YevalSastYmodule_binding,"eval/ast","module-binding");
DEF(YevalSastYast_walkX,"eval/ast","ast-walk!");
DEF(YevalSastYobjectify_foreign_reference,"eval/ast","objectify-foreign-reference");
EXT(YgooSmathYLL,"goo/math","<<");
DEF(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
DEF(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
DEF(YevalSastYLconstantG,"eval/ast","<constant>");
DEF(YevalSastYDsexpr_compile_time_also_tag,"eval/ast","$sexpr-compile-time-also-tag");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
DEF(YevalSastYloop_body_setter,"eval/ast","loop-body-setter");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
DEF(YevalSastYLfix_letG,"eval/ast","<fix-let>");
DEF(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
DEF(YevalSastYspecial_locals,"eval/ast","special-locals");
EXT(YLboxG,"goo/boot","<box>");
EXT(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
DEF(YevalSastYspecial_define_function,"eval/ast","special-define-function");
DEF(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
DEF(YevalSastYfunction_ref_count_setter,"eval/ast","function-ref-count-setter");
DEF(YevalSastYapplication_next_methods_setter,"eval/ast","application-next-methods-setter");
EXT(Yprop_setter,"goo/boot","prop-setter");
DEF(YevalSastYreference_binding,"eval/ast","reference-binding");
DEF(YevalSastYspecial_define_constant,"eval/ast","special-define-constant");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYasin,"goo/math","asin");
DEF(YevalSastYassignment_reference_setter,"eval/ast","assignment-reference-setter");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
DEF(YevalSastYobjectify_locals,"eval/ast","objectify-locals");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
DEF(YevalSastYapplication_binding_setter,"eval/ast","application-binding-setter");
EXT(YevalSmoduleYunchecked_runtime_environment,"eval/module","unchecked-runtime-environment");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
DEF(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
DEF(YevalSastYsyntax_environment_excluded_bindings,"eval/ast","syntax-environment-excluded-bindings");
DEF(YevalSastYLast_errorG,"eval/ast","<ast-error>");
DEF(YevalSastYapplication_knownQ,"eval/ast","application-known?");
DEF(YevalSastYLmethod_applicationG,"eval/ast","<method-application>");
DEF(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
DEF(YevalSastYbind_exit_main_fun_setter,"eval/ast","bind-exit-main-fun-setter");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
DEF(YevalSastYreference_frame_offset_setter,"eval/ast","reference-frame-offset-setter");
EXT(YgooSmagYL,"goo/mag","<");
DEF(YevalSastYfunction_arity,"eval/ast","function-arity");
DEF(YevalSastYobjectify_unwind_protect,"eval/ast","objectify-unwind-protect");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
EXT(YLlogG,"goo/boot","<log>");
DEF(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooSmacrosYelt,"goo/macros","elt");
DEF(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
DEF(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
DEF(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YevalSmoduleYenvironment_bindings,"eval/module","environment-bindings");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YevalSmoduleYruntime_environment,"eval/module","runtime-environment");
EXT(YgooSmathYceilS,"goo/math","ceil/");
DEF(YevalSastYr_extendT,"eval/ast","r-extend*");
DEF(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(Ytype_object,"goo/boot","type-object");
DEF(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
DEF(YevalSastYDsexpr_Praw_tag,"eval/ast","$sexpr-%raw-tag");
DEF(YevalSastYspecial_boundQ,"eval/ast","special-bound?");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
DEF(YevalSastYspecial_begin,"eval/ast","special-begin");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YevalSmoduleYinstall_initial_bindings,"eval/module","install-initial-bindings");
DEF(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
DEF(YevalSastYobjectify_function,"eval/ast","objectify-function");
EXT(YevalSmoduleYmodule_uses_c_files,"eval/module","module-uses-c-files");
DEF(YevalSastYmaybe_log_dependency,"eval/ast","maybe-log-dependency");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
DEF(YevalSastYapplication_arguments_setter,"eval/ast","application-arguments-setter");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
DEF(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
DEF(YevalSastYLloop_applicationG,"eval/ast","<loop-application>");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
EXT(YOfold,"goo/boot","@fold");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(YevalSmoduleYreport_undefined_global_bindings,"eval/module","report-undefined-global-bindings");
EXT(YLoptsG,"goo/boot","<opts>");
DEF(YevalSastYloop_continue,"eval/ast","loop-continue");
DEF(YevalSastYLast_generic_definitionG,"eval/ast","<ast-generic-definition>");
EXT(YgooSlogYE,"goo/log","=");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
DEF(YevalSastYobjectify_use_include,"eval/ast","objectify-use-include");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSmathYDpi,"goo/math","$pi");
DEF(YevalSastYDsexpr_useSexport_module_tag,"eval/ast","$sexpr-use/export-module-tag");
DEF(YevalSastYas_lst,"eval/ast","as-lst");
DEF(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(YevalSmoduleYdo_named_static_global_bindings,"eval/module","do-named-static-global-bindings");
EXT(YgooSmathYtanh,"goo/math","tanh");
DEF(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YgooSioSportYput,"goo/io/port","put");
DEF(YevalSastYDfree_environment_nul,"eval/ast","$free-environment-nul");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
EXT(Ysyntax_error,"goo/boot","syntax-error");
DEF(YevalSastYconstant_value_setter,"eval/ast","constant-value-setter");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YevalSmoduleYLmodule_bindingG,"eval/module","<module-binding>");
EXT(Ynew,"goo/boot","new");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
DEF(YevalSastYreference_frame_number_setter,"eval/ast","reference-frame-number-setter");
DEF(YevalSastYspecial_use_library,"eval/ast","special-use-library");
DEF(YevalSastYLast_methodG,"eval/ast","<ast-method>");
DEF(YevalSastYspecial_define,"eval/ast","special-define");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
DEF(YevalSastYLfab_listG,"eval/ast","<fab-list>");
DEF(YevalSastYobjectify_use_module,"eval/ast","objectify-use-module");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
DEF(YevalSastYexpand_bind_list,"eval/ast","expand-bind-list");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YevalSmoduleYmodule_referenced_bindings,"eval/module","module-referenced-bindings");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
DEF(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
DEF(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
DEF(YevalSastYsequential,"eval/ast","sequential");
EXT(YevalSsyntaxYDsexpr_define_constant_tag,"eval/syntax","$sexpr-define-constant-tag");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
DEF(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
DEF(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
EXT(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YevalSmoduleYfab_static_global_environment,"eval/module","fab-static-global-environment");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
DEF(YevalSastYapplication_function_setter,"eval/ast","application-function-setter");
DEF(YevalSastYloop_body,"eval/ast","loop-body");
DEF(YevalSastYDfunctions_nul,"eval/ast","$functions-nul");
DEF(YevalSastYDsexpr_use_include_tag,"eval/ast","$sexpr-use-include-tag");
DEF(YevalSastYalternative_consequent_setter,"eval/ast","alternative-consequent-setter");
DEF(YevalSastYobjectify_raw,"eval/ast","objectify-raw");
EXT(YgooSanyYto_str,"goo/any","to-str");
DEF(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(Ysig_arity,"goo/boot","sig-arity");
DEF(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
EXT(YgooSmathYcosh,"goo/math","cosh");
DEF(YevalSastYmonitor_test,"eval/ast","monitor-test");
DEF(YevalSastYLloopG,"eval/ast","<loop>");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
DEF(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
DEF(YevalSastYloop_bindings,"eval/ast","loop-bindings");
EXT(YevalSmoduleYmodule_mangled_name_setter,"eval/module","module-mangled-name-setter");
DEF(YevalSastYexpand_bind_listT,"eval/ast","expand-bind-list*");
DEF(YevalSastYspecial_use_module,"eval/ast","special-use-module");
EXT(YevalSmoduleYbinding_freeQ_setter,"eval/module","binding-free?-setter");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
DEF(YevalSastYspecial_monitor,"eval/ast","special-monitor");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YPtrue,"goo/boot","%true");
DEF(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
DEF(YevalSastYapplication_tailQ_setter,"eval/ast","application-tail?-setter");
DEF(YevalSastYDsexpr_boundQ_tag,"eval/ast","$sexpr-bound?-tag");
EXT(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
DEF(YevalSastYalternative_condition_setter,"eval/ast","alternative-condition-setter");
EXT(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
EXT(YevalSmoduleYenv_object_name,"eval/module","env-object-name");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
DEF(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(YevalSdependencyYdependency_or,"eval/dependency","dependency-or");
EXT(YevalSmoduleYregister_referenced_binding,"eval/module","register-referenced-binding");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
DEF(YevalSastYLsimple_ast_errorG,"eval/ast","<simple-ast-error>");
DEF(YevalSastYDfab_list_nul,"eval/ast","$fab-list-nul");
EXT(YevalSmoduleYbinding_native_toQ,"eval/module","binding-native-to?");
DEF(YevalSastYspecial_def,"eval/ast","special-def");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YevalSmoduleYimport_globalX,"eval/module","import-global!");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
DEF(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YevalSmoduleYreload_modules,"eval/module","reload-modules");
DEF(YevalSastYobjectify_sequential,"eval/ast","objectify-sequential");
EXT(YevalSmoduleYfab_subset_environment,"eval/module","fab-subset-environment");
EXT(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
EXT(YgooSmathYpow,"goo/math","pow");
DEF(YevalSastYmonitor_handler_setter,"eval/ast","monitor-handler-setter");
DEF(YevalSastYspecial_define_static_syntax,"eval/ast","special-define-static-syntax");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
DEF(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
DEF(YevalSastYDsexpr_use_module_tag,"eval/ast","$sexpr-use-module-tag");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
DEF(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YLclassG,"goo/boot","<class>");
DEF(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YevalSdependencyYdependency_includes_allQ,"eval/dependency","dependency-includes-all?");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
DEF(YevalSastYapplication_loop_setter,"eval/ast","application-loop-setter");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YevalSmoduleYfind_static_global_environment,"eval/module","find-static-global-environment");
DEF(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSmathYsinh,"goo/math","sinh");
DEF(YevalSastYDsexpr_use_library_tag,"eval/ast","$sexpr-use-library-tag");
EXT(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
DEF(YevalSastYmonitor_info_setter,"eval/ast","monitor-info-setter");
DEF(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
DEF(YevalSastYforeign_nameQ,"eval/ast","foreign-name?");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YevalSmoduleYLbinding_nameG,"eval/module","<binding-name>");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooSmathYfloorS,"goo/math","floor/");
DEF(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
DEF(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooSmacrosYcat,"goo/macros","cat");
DEF(YevalSastYspecial_compile_time_also,"eval/ast","special-compile-time-also");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YevalSmoduleYmodule_uses_c_libraries,"eval/module","module-uses-c-libraries");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
DEF(YevalSastYspecial_set,"eval/ast","special-set");
DEF(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
DEF(YevalSastYfunction_loop,"eval/ast","function-loop");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
DEF(YevalSastYfunction_ref_count,"eval/ast","function-ref-count");
EXT(YevalSmoduleYmodule_runtime_data_setter,"eval/module","module-runtime-data-setter");
DEF(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
EXT(YevalSmoduleYbinding_global_box_setter,"eval/module","binding-global-box-setter");
EXT(Yhead_setter,"goo/boot","head-setter");
DEF(YevalSastYinit_g2c_boot_environment,"eval/ast","init-g2c-boot-environment");
DEF(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YevalSmoduleYbinding_name,"eval/module","binding-name");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
DEF(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YevalSmoduleYmodule_mangled_string_name_setter,"eval/module","module-mangled-string-name-setter");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
DYNDEF(YevalSastYTrecord_sourceQT,"eval/ast","*record-source?*");
DEF(YevalSastYloop_bindings_setter,"eval/ast","loop-bindings-setter");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
DEF(YevalSastYobjectify_use_mangle_module,"eval/ast","objectify-use-mangle-module");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
DEF(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YPsymbols,"goo/boot","%symbols");
DEF(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
DEF(YevalSastYinit_runtime,"eval/ast","init-runtime");
DEF(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YevalSmoduleYmodule_loader_stack,"eval/module","module-loader-stack");
DEF(YevalSastYmonitor_main_thunk_setter,"eval/ast","monitor-main-thunk-setter");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOelt,"goo/boot","@elt");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(YevalSmoduleYcall_with_subtransaction,"eval/module","call-with-subtransaction");
DEF(YevalSastYDsexpr_define_dynamic_tag,"eval/ast","$sexpr-define-dynamic-tag");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YevalSmoduleYbinding_module_name,"eval/module","binding-module-name");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YevalSmoduleYwalk_bindings,"eval/module","walk-bindings");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooSmacrosYlast,"goo/macros","last");
DEF(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(Yhead,"goo/boot","head");
DEF(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
DEF(YevalSastYfunction_loop_setter,"eval/ast","function-loop-setter");
DEF(YevalSastYobjectify_list,"eval/ast","objectify-list");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
DEF(YevalSastYprogram_type,"eval/ast","program-type");
DEF(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YPrnul,"goo/boot","%rnul");
DEF(YevalSastYupdate_binding_kind,"eval/ast","update-binding-kind");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YevalSdependencyYDoptimizaton_dependencies,"eval/dependency","$optimizaton-dependencies");
EXT(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
DEF(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YevalSmoduleYinsert_globalX,"eval/module","insert-global!");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YevalSmoduleYfind_syntax_environment,"eval/module","find-syntax-environment");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
DEF(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
DEF(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YevalSmoduleYenvironment_allows_foreign_namesQ,"eval/module","environment-allows-foreign-names?");
DEF(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YevalSdependencyYlog_dependency,"eval/dependency","log-dependency");
DEF(YevalSastYobjectify_definition,"eval/ast","objectify-definition");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
DEF(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YevalSmoduleYLstatic_environmentG,"eval/module","<static-environment>");
EXT(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
EXT(YevalSmoduleYfind_binding,"eval/module","find-binding");
EXT(YevalSmoduleYLstatic_global_environmentG,"eval/module","<static-global-environment>");
DEF(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
DEF(YevalSastYspecial_quasiquote,"eval/ast","special-quasiquote");
DEF(YevalSastYexpand_syntax_if,"eval/ast","expand-syntax-if");
EXT(YevalSmoduleYnamespace_error,"eval/module","namespace-error");
EXT(YgooSmathYcos,"goo/math","cos");
DEF(YevalSastYdefault_type,"eval/ast","default-type");
DEF(YevalSastYobjectify_assignment,"eval/ast","objectify-assignment");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YevalSmoduleYmodule_target_environment,"eval/module","module-target-environment");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
DEF(YevalSastYapplication_next_methods,"eval/ast","application-next-methods");
EXT(YevalSmoduleYbinding_info_setter,"eval/module","binding-info-setter");
EXT(YevalSmoduleYbinding_info,"eval/module","binding-info");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
EXT(YgooSmagYGE,"goo/mag",">=");
DYNDEF(YevalSastYTcurrent_dependentT,"eval/ast","*current-dependent*");
DEF(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
DEF(YevalSastYobjectify_function_using,"eval/ast","objectify-function-using");
EXT(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
EXT(YevalSdependencyYDnul_dependency,"eval/dependency","$nul-dependency");
EXT(YevalSdependencyYLdependableG,"eval/dependency","<dependable>");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
EXT(YevalSmoduleYbinding_kind,"eval/module","binding-kind");
DEF(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(Yerror,"goo/boot","error");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
DEF(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
DEF(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
EXT(YevalSmoduleYbinding_freeQ,"eval/module","binding-free?");
EXT(YevalSmoduleYregister_moduleX,"eval/module","register-module!");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YLflatG,"goo/boot","<flat>");
DEF(YevalSastYprogram_line_setter,"eval/ast","program-line-setter");
DEF(YevalSastYunwind_protect_cleanup_thunk_setter,"eval/ast","unwind-protect-cleanup-thunk-setter");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YevalSmoduleYglobal_box_value_setter,"eval/module","global-box-value-setter");
EXT(YevalSmoduleYbinding_inferred_type_setter,"eval/module","binding-inferred-type-setter");
EXT(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
EXT(YevalSmoduleYLglobal_boxG,"eval/module","<global-box>");
EXT(YevalSmoduleYglobal_box_value,"eval/module","global-box-value");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
DEF(YevalSastYfunction_display_name,"eval/ast","function-display-name");
EXT(YgooSfunctionalYalways,"goo/functional","always");
DEF(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
DEF(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(Yclass_gens,"goo/boot","class-gens");
DEF(YevalSastYfunction_specs,"eval/ast","function-specs");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
EXT(YevalSmoduleYload_in,"eval/module","load-in");
EXT(YgooSsystemYso_load,"goo/system","so-load");
DEF(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
DEF(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YevalSmoduleYLnamespace_errorG,"eval/module","<namespace-error>");
EXT(YevalSmoduleYset_module_environments,"eval/module","set-module-environments");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
DEF(YevalSastYDsexpr_define_primitive_tag,"eval/ast","$sexpr-define-primitive-tag");
EXT(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
DEF(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
DEF(YevalSastYDsexpr_optionals_type_name,"eval/ast","$sexpr-optionals-type-name");
DEF(YevalSastYspecial_macro_expand,"eval/ast","special-macro-expand");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YevalSdependencyYdependency_includes_anyQ,"eval/dependency","dependency-includes-any?");
EXT(YevalSdependencyYDall_dependency_types,"eval/dependency","$all-dependency-types");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YevalSdependencyYLdependentG,"eval/dependency","<dependent>");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YevalSdependencyYDexpansion_parse_dependency,"eval/dependency","$expansion-parse-dependency");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YevalSmoduleYbinding_handler_setter,"eval/module","binding-handler-setter");
DEF(YevalSastYspecial_define_generic,"eval/ast","special-define-generic");
EXT(YevalSdependencyYinvalidate_dependent,"eval/dependency","invalidate-dependent");
DEF(YevalSastYfunction_names,"eval/ast","function-names");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
DEF(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
DEF(YevalSastYfunction_value,"eval/ast","function-value");
DEF(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
DEF(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooScolsSlstYlstT,"goo/cols/lst","lst*");
DEF(YevalSastYbinding_closed_overQ_setter,"eval/ast","binding-closed-over?-setter");
EXT(YevalSdependencyYDparse_dependencies,"eval/dependency","$parse-dependencies");
DEF(YevalSastYspecial_syntax_if,"eval/ast","special-syntax-if");
EXT(YevalSmoduleYmodule_transaction,"eval/module","module-transaction");
DEF(YevalSastYobjectify_syntax_definition,"eval/ast","objectify-syntax-definition");
EXT(YevalSmoduleYmodule_exports,"eval/module","module-exports");
DEF(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
DEF(YevalSastYexpand_bind_element,"eval/ast","expand-bind-element");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YevalSdependencyYDname_parse_dependency,"eval/dependency","$name-parse-dependency");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
DEF(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
DEF(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
EXT(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
DEF(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
DEF(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
EXT(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YevalSdependencyYdependency_nulQ,"eval/dependency","dependency-nul?");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSmathYN,"goo/math","~");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YevalSdependencyYDvalue_optimization_dependency,"eval/dependency","$value-optimization-dependency");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
DEF(YevalSastYspecial_method,"eval/ast","special-method");
EXT(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
EXT(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
DEF(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YevalSmoduleYDgoo_boot_module_name,"eval/module","$goo-boot-module-name");
EXT(YevalSmoduleYmodule_syntax_environment,"eval/module","module-syntax-environment");
DEF(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
DEF(YevalSastYDsexpr_define_static_syntax_tag,"eval/ast","$sexpr-define-static-syntax-tag");
EXT(YPfalse,"goo/boot","%false");
EXT(YevalSsyntaxYsexpr_function_definition_adjectives,"eval/syntax","sexpr-function-definition-adjectives");
DEF(YevalSastYDsexpr_export_tag,"eval/ast","$sexpr-export-tag");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DYNEXT(YevalSmoduleYTdynamic_compilationQT,"eval/module","*dynamic-compilation?*");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
EXT(YgooSclassYPprop,"goo/class","%prop");
DEF(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YOdo,"goo/boot","@do");
DEF(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YevalSmoduleYruntime_module,"eval/module","runtime-module");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
DEF(YevalSastYarguments,"eval/ast","arguments");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
DEF(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YevalSmoduleYmodule_mangled_string_name,"eval/module","module-mangled-string-name");
DEF(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YevalSmoduleYzap_referenced_bindingsX,"eval/module","zap-referenced-bindings!");
DEF(YevalSastYexpand_pattern,"eval/ast","expand-pattern");
DEF(YevalSastYobjectify_method_definition,"eval/ast","objectify-method-definition");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YevalSmoduleYmodule_data_processedQ_setter,"eval/module","module-data-processed?-setter");
EXT(YevalSmoduleYLmoduleG,"eval/module","<module>");
DEF(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(YevalSmoduleYenvironment_module,"eval/module","environment-module");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
DEF(YevalSastYcompile_time_program_setter,"eval/ast","compile-time-program-setter");
DEF(YevalSastYapplication_loop,"eval/ast","application-loop");
EXT(YevalSmoduleYbinding_kind_setter,"eval/module","binding-kind-setter");
DEF(YevalSastYreload_macros,"eval/ast","reload-macros");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
DEF(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
DEF(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
EXT(YevalSmoduleYbinding_prop_setter,"eval/module","binding-prop-setter");
DEF(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
DEF(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YevalSmoduleYload_module,"eval/module","load-module");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(YevalSmoduleYbinding_locative_setter,"eval/module","binding-locative-setter");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalSmoduleYtransaction_register_implemented_binding,"eval/module","transaction-register-implemented-binding");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
EXT(YevalSmoduleYbinding_module,"eval/module","binding-module");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
DEF(YevalSastYspecial_define_method,"eval/ast","special-define-method");
EXT(YevalSmoduleYbinding_handler,"eval/module","binding-handler");
DEF(YevalSastYspecial_useSexport_module,"eval/ast","special-use/export-module");
EXT(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
DEF(YevalSastYobjectify_binding,"eval/ast","objectify-binding");
EXT(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
DEF(YevalSastYspecial_let,"eval/ast","special-let");
DEF(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
EXT(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
EXT(YevalSmoduleYLstatic_nul_environmentG,"eval/module","<static-nul-environment>");
DEF(YevalSastYobjectify_define_property,"eval/ast","objectify-define-property");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YgooSmathYB,"goo/math","&");
EXT(YevalSmoduleYmodule_runtime_data,"eval/module","module-runtime-data");
DEF(YevalSastYspecial_define_syntax,"eval/ast","special-define-syntax");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
DEF(YevalSastYconvert2arguments,"eval/ast","convert2arguments");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YevalSmoduleYensure_module_data,"eval/module","ensure-module-data");
EXT(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
EXT(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
DEF(YevalSastYDarguments_nul,"eval/ast","$arguments-nul");
EXT(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
DYNEXT(YevalSmoduleYTcurrent_subtransactionT,"eval/module","*current-subtransaction*");
DEF(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YOlit,"goo/boot","@lit");
EXT(Yas_error,"goo/boot","as-error");
EXT(YevalSmoduleYfind_environment_module,"eval/module","find-environment-module");
DEF(YevalSastYDsequential_nul,"eval/ast","$sequential-nul");
EXT(YevalSmoduleYremove_modules_by_nameX,"eval/module","remove-modules-by-name!");
DEF(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
DEF(YevalSastYapplication_function,"eval/ast","application-function");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
DEF(YevalSastYspecial_bind_exit,"eval/ast","special-bind-exit");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSmathY_,"goo/math","-");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YOallQ,"goo/boot","@all?");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
DEF(YevalSastYspecial_if,"eval/ast","special-if");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YOpick,"goo/boot","@pick");
EXT(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
EXT(YtT,"goo/boot","t*");
DEF(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
DEF(YevalSastYfab_syntax_environment,"eval/ast","fab-syntax-environment");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YevalSmoduleYLmodule_loaderG,"eval/module","<module-loader>");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSfunctionalYcurry,"goo/functional","curry");
DEF(YevalSastYast_macro_expand,"eval/ast","ast-macro-expand");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
EXT(YevalSmoduleYbinding_global_box,"eval/module","binding-global-box");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
DEF(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YLfixnumG,"goo/boot","<fixnum>");
DEF(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YLproductG,"goo/boot","<product>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yinternal_error,"goo/boot","internal-error");
DEF(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
DEF(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YevalSmoduleYmodule_loader_module_type,"eval/module","module-loader-module-type");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YevalSdependencyYinvalidate_dependents,"eval/dependency","invalidate-dependents");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
DEF(YevalSastYinstall_magic_bindings,"eval/ast","install-magic-bindings");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ysym_name,"goo/boot","sym-name");
DEF(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
DEF(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YevalSdependencyYLdependency_typeG,"eval/dependency","<dependency-type>");
DEF(YevalSastYboundQ_default_setter,"eval/ast","bound?-default-setter");
DEF(YevalSastYLprogramG,"eval/ast","<program>");
DEF(YevalSastYbinding_reference_class,"eval/ast","binding-reference-class");
EXT(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(YgooSsystemYos_val,"goo/system","os-val");
DEF(YevalSastYtransform_defs,"eval/ast","transform-defs");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YevalSmoduleYmodule_name,"eval/module","module-name");
EXT(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
EXT(YevalSmoduleYbinding_mangled_name_setter,"eval/module","binding-mangled-name-setter");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(Ytup,"goo/boot","tup");
DEF(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
DEF(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YOrevX,"goo/boot","@rev!");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YevalSsyntaxYDsexpr_propX_tag,"eval/syntax","$sexpr-prop!-tag");
DEF(YevalSastYbinding_mutableQ_setter,"eval/ast","binding-mutable?-setter");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YevalSmoduleYexport_bindingX,"eval/module","export-binding!");
DEF(YevalSastYTmacro_tracingQT,"eval/ast","*macro-tracing?*");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(Yprop_init,"goo/boot","prop-init");
DEF(YevalSastYLast_function_definitionG,"eval/ast","<ast-function-definition>");
DEF(YevalSastYobjectify_assignment_using,"eval/ast","objectify-assignment-using");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
DEF(YevalSastYobjectify_use_library,"eval/ast","objectify-use-library");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
DEF(YevalSastYloop_continue_setter,"eval/ast","loop-continue-setter");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
DEF(YevalSastYspecial_prop,"eval/ast","special-prop");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YevalSmoduleYenvironment_module_loader,"eval/module","environment-module-loader");
EXT(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
DEF(YevalSastYPPPmacro,"eval/ast","%%%macro");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
DEF(YevalSastYspecial_define_class,"eval/ast","special-define-class");
EXT(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
DEF(YevalSastYLast_method_definitionG,"eval/ast","<ast-method-definition>");
DEF(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
DEF(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
DEF(YevalSastYfunction_free,"eval/ast","function-free");
DEF(YevalSastYspecial_quote,"eval/ast","special-quote");
EXT(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
DEF(YevalSastYfab_list,"eval/ast","fab-list");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
DEF(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
DEF(YevalSastYobjectify_monitor,"eval/ast","objectify-monitor");
DEF(YevalSastYinstall_interpreter_hacks,"eval/ast","install-interpreter-hacks");
DEF(YevalSastYmacro_expander,"eval/ast","macro-expander");
DEF(YevalSastYobjectify_export,"eval/ast","objectify-export");
EXT(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
DEF(YevalSastYsignature_value,"eval/ast","signature-value");
DEF(YevalSastYfunction_body,"eval/ast","function-body");
DEF(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
DEF(YevalSastYfunctions,"eval/ast","functions");
DEF(YevalSastYspecial_propX,"eval/ast","special-prop!");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
DEF(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YOmap,"goo/boot","@map");
EXT(YgooSmacrosYpair,"goo/macros","pair");
DEF(YevalSastYfunction_kind,"eval/ast","function-kind");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_379);
DEFLIT(lit_569);
DEFLIT(lit_740);
DEFLIT(lit_27);
DEFLIT(lit_98);
DEFLIT(lit_438);
DEFLIT(lit_593);
DEFLIT(lit_456);
DEFLIT(lit_88);
DEFLIT(lit_751);
DEFLIT(lit_503);
DEFLIT(lit_405);
DEFLIT(lit_507);
DEFLIT(lit_242);
DEFLIT(lit_685);
DEFLIT(lit_548);
DEFLIT(lit_680);
DEFLIT(lit_501);
DEFLIT(lit_525);
DEFLIT(lit_321);
DEFLIT(lit_687);
DEFLIT(lit_725);
DEFLIT(lit_484);
DEFLIT(lit_365);
DEFLIT(lit_319);
DEFLIT(lit_459);
DEFLIT(lit_509);
DEFLIT(lit_204);
DEFLIT(lit_143);
DEFLIT(lit_413);
DEFLIT(lit_787);
DEFLIT(lit_705);
DEFLIT(lit_111);
DEFLIT(lit_533);
DEFLIT(lit_302);
DEFLIT(lit_778);
DEFLIT(lit_167);
DEFLIT(lit_805);
DEFLIT(lit_712);
DEFLIT(lit_246);
DEFLIT(lit_259);
DEFLIT(lit_25);
DEFLIT(lit_371);
DEFLIT(lit_769);
DEFLIT(lit_151);
DEFLIT(lit_403);
DEFLIT(lit_493);
DEFLIT(lit_618);
DEFLIT(lit_237);
DEFLIT(lit_480);
DEFLIT(lit_312);
DEFLIT(lit_256);
DEFLIT(lit_641);
DEFLIT(lit_372);
DEFLIT(lit_768);
DEFLIT(lit_175);
DEFLIT(lit_164);
DEFLIT(lit_338);
DEFLIT(lit_226);
DEFLIT(lit_290);
DEFLIT(lit_633);
DEFLIT(lit_614);
DEFLIT(lit_223);
DEFLIT(lit_304);
DEFLIT(lit_2);
DEFLIT(lit_629);
DEFLIT(lit_585);
DEFLIT(lit_659);
DEFLIT(lit_203);
DEFLIT(lit_677);
DEFLIT(lit_642);
DEFLIT(lit_767);
DEFLIT(lit_12);
DEFLIT(lit_281);
DEFLIT(lit_205);
DEFLIT(lit_683);
DEFLIT(lit_233);
DEFLIT(lit_400);
DEFLIT(lit_630);
DEFLIT(lit_179);
DEFLIT(lit_284);
DEFLIT(lit_513);
DEFLIT(lit_696);
DEFLIT(lit_808);
DEFLIT(lit_675);
DEFLIT(lit_219);
DEFLIT(lit_811);
DEFLIT(lit_562);
DEFLIT(lit_476);
DEFLIT(lit_47);
DEFLIT(lit_639);
DEFLIT(lit_628);
DEFLIT(lit_45);
DEFLIT(lit_336);
DEFLIT(lit_477);
DEFLIT(lit_546);
DEFLIT(lit_532);
DEFLIT(lit_351);
DEFLIT(lit_579);
DEFLIT(lit_291);
DEFLIT(lit_162);
DEFLIT(lit_462);
DEFLIT(lit_673);
DEFLIT(lit_537);
DEFLIT(lit_89);
DEFLIT(lit_155);
DEFLIT(lit_328);
DEFLIT(lit_124);
DEFLIT(lit_528);
DEFLIT(lit_361);
DEFLIT(lit_457);
DEFLIT(lit_228);
DEFLIT(lit_42);
DEFLIT(lit_113);
DEFLIT(lit_158);
DEFLIT(lit_110);
DEFLIT(lit_322);
DEFLIT(lit_81);
DEFLIT(lit_806);
DEFLIT(lit_275);
DEFLIT(lit_649);
DEFLIT(lit_561);
DEFLIT(lit_299);
DEFLIT(lit_156);
DEFLIT(lit_471);
DEFLIT(lit_692);
DEFLIT(lit_186);
DEFLIT(lit_254);
DEFLIT(lit_374);
DEFLIT(lit_554);
DEFLIT(lit_601);
DEFLIT(lit_481);
DEFLIT(lit_560);
DEFLIT(lit_82);
DEFLIT(lit_65);
DEFLIT(lit_397);
DEFLIT(lit_461);
DEFLIT(lit_797);
DEFLIT(lit_604);
DEFLIT(lit_118);
DEFLIT(lit_141);
DEFLIT(lit_764);
DEFLIT(lit_488);
DEFLIT(lit_558);
DEFLIT(lit_38);
DEFLIT(lit_71);
DEFLIT(lit_672);
DEFLIT(lit_721);
DEFLIT(lit_210);
DEFLIT(lit_409);
DEFLIT(lit_419);
DEFLIT(lit_173);
DEFLIT(lit_697);
DEFLIT(lit_621);
DEFLIT(lit_518);
DEFLIT(lit_578);
DEFLIT(lit_364);
DEFLIT(lit_80);
DEFLIT(lit_32);
DEFLIT(lit_559);
DEFLIT(lit_586);
DEFLIT(lit_577);
DEFLIT(lit_523);
DEFLIT(lit_526);
DEFLIT(lit_408);
DEFLIT(lit_360);
DEFLIT(lit_352);
DEFLIT(lit_380);
DEFLIT(lit_428);
DEFLIT(lit_249);
DEFLIT(lit_187);
DEFLIT(lit_335);
DEFLIT(lit_691);
DEFLIT(lit_92);
DEFLIT(lit_87);
DEFLIT(lit_325);
DEFLIT(lit_726);
DEFLIT(lit_440);
DEFLIT(lit_454);
DEFLIT(lit_427);
DEFLIT(lit_83);
DEFLIT(lit_102);
DEFLIT(lit_176);
DEFLIT(lit_74);
DEFLIT(lit_31);
DEFLIT(lit_138);
DEFLIT(lit_266);
DEFLIT(lit_215);
DEFLIT(lit_789);
DEFLIT(lit_345);
DEFLIT(lit_603);
DEFLIT(lit_285);
DEFLIT(lit_170);
DEFLIT(lit_17);
DEFLIT(lit_667);
DEFLIT(lit_52);
DEFLIT(lit_739);
DEFLIT(lit_545);
DEFLIT(lit_570);
DEFLIT(lit_627);
DEFLIT(lit_238);
DEFLIT(lit_443);
DEFLIT(lit_718);
DEFLIT(lit_258);
DEFLIT(lit_422);
DEFLIT(lit_415);
DEFLIT(lit_813);
DEFLIT(lit_500);
DEFLIT(lit_814);
DEFLIT(lit_600);
DEFLIT(lit_56);
DEFLIT(lit_785);
DEFLIT(lit_425);
DEFLIT(lit_776);
DEFLIT(lit_191);
DEFLIT(lit_434);
DEFLIT(lit_453);
DEFLIT(lit_85);
DEFLIT(lit_344);
DEFLIT(lit_329);
DEFLIT(lit_720);
DEFLIT(lit_531);
DEFLIT(lit_58);
DEFLIT(lit_62);
DEFLIT(lit_357);
DEFLIT(lit_625);
DEFLIT(lit_783);
DEFLIT(lit_715);
DEFLIT(lit_572);
DEFLIT(lit_93);
DEFLIT(lit_117);
DEFLIT(lit_588);
DEFLIT(lit_573);
DEFLIT(lit_647);
DEFLIT(lit_318);
DEFLIT(lit_709);
DEFLIT(lit_468);
DEFLIT(lit_447);
DEFLIT(lit_694);
DEFLIT(lit_731);
DEFLIT(lit_597);
DEFLIT(lit_116);
DEFLIT(lit_437);
DEFLIT(lit_216);
DEFLIT(lit_297);
DEFLIT(lit_106);
DEFLIT(lit_126);
DEFLIT(lit_655);
DEFLIT(lit_669);
DEFLIT(lit_202);
DEFLIT(lit_711);
DEFLIT(lit_30);
DEFLIT(lit_181);
DEFLIT(lit_393);
DEFLIT(lit_127);
DEFLIT(lit_271);
DEFLIT(lit_35);
DEFLIT(lit_317);
DEFLIT(lit_55);
DEFLIT(lit_522);
DEFLIT(lit_665);
DEFLIT(lit_315);
DEFLIT(lit_26);
DEFLIT(lit_262);
DEFLIT(lit_433);
DEFLIT(lit_670);
DEFLIT(lit_387);
DEFLIT(lit_796);
DEFLIT(lit_386);
DEFLIT(lit_168);
DEFLIT(lit_676);
DEFLIT(lit_469);
DEFLIT(lit_777);
DEFLIT(lit_626);
DEFLIT(lit_369);
DEFLIT(lit_28);
DEFLIT(lit_184);
DEFLIT(lit_485);
DEFLIT(lit_690);
DEFLIT(lit_341);
DEFLIT(lit_765);
DEFLIT(lit_78);
DEFLIT(lit_135);
DEFLIT(lit_738);
DEFLIT(lit_758);
DEFLIT(lit_565);
DEFLIT(lit_268);
DEFLIT(lit_115);
DEFLIT(lit_201);
DEFLIT(lit_414);
DEFLIT(lit_552);
DEFLIT(lit_248);
DEFLIT(lit_512);
DEFLIT(lit_70);
DEFLIT(lit_79);
DEFLIT(lit_748);
DEFLIT(lit_189);
DEFLIT(lit_510);
DEFLIT(lit_492);
DEFLIT(lit_644);
DEFLIT(lit_36);
DEFLIT(lit_596);
DEFLIT(lit_809);
DEFLIT(lit_519);
DEFLIT(lit_535);
DEFLIT(lit_308);
DEFLIT(lit_727);
DEFLIT(lit_784);
DEFLIT(lit_666);
DEFLIT(lit_49);
DEFLIT(lit_775);
DEFLIT(lit_704);
DEFLIT(lit_253);
DEFLIT(lit_802);
DEFLIT(lit_119);
DEFLIT(lit_508);
DEFLIT(lit_367);
DEFLIT(lit_792);
DEFLIT(lit_279);
DEFLIT(lit_68);
DEFLIT(lit_551);
DEFLIT(lit_700);
DEFLIT(lit_530);
DEFLIT(lit_220);
DEFLIT(lit_327);
DEFLIT(lit_491);
DEFLIT(lit_689);
DEFLIT(lit_7);
DEFLIT(lit_536);
DEFLIT(lit_261);
DEFLIT(lit_161);
DEFLIT(lit_355);
DEFLIT(lit_615);
DEFLIT(lit_584);
DEFLIT(lit_334);
DEFLIT(lit_724);
DEFLIT(lit_566);
DEFLIT(lit_288);
DEFLIT(lit_407);
DEFLIT(lit_654);
DEFLIT(lit_544);
DEFLIT(lit_420);
DEFLIT(lit_495);
DEFLIT(lit_741);
DEFLIT(lit_638);
DEFLIT(lit_622);
DEFLIT(lit_730);
DEFLIT(lit_605);
DEFLIT(lit_465);
DEFLIT(lit_171);
DEFLIT(lit_496);
DEFLIT(lit_263);
DEFLIT(lit_478);
DEFLIT(lit_195);
DEFLIT(lit_681);
DEFLIT(lit_197);
DEFLIT(lit_287);
DEFLIT(lit_757);
DEFLIT(lit_455);
DEFLIT(lit_33);
DEFLIT(lit_634);
DEFLIT(lit_637);
DEFLIT(lit_6);
DEFLIT(lit_293);
DEFLIT(lit_575);
DEFLIT(lit_424);
DEFLIT(lit_650);
DEFLIT(lit_245);
DEFLIT(lit_460);
DEFLIT(lit_504);
DEFLIT(lit_728);
DEFLIT(lit_196);
DEFLIT(lit_688);
DEFLIT(lit_663);
DEFLIT(lit_72);
DEFLIT(lit_436);
DEFLIT(lit_747);
DEFLIT(lit_48);
DEFLIT(lit_353);
DEFLIT(lit_693);
DEFLIT(lit_623);
DEFLIT(lit_306);
DEFLIT(lit_613);
DEFLIT(lit_122);
DEFLIT(lit_737);
DEFLIT(lit_794);
DEFLIT(lit_107);
DEFLIT(lit_213);
DEFLIT(lit_482);
DEFLIT(lit_105);
DEFLIT(lit_652);
DEFLIT(lit_14);
DEFLIT(lit_606);
DEFLIT(lit_411);
DEFLIT(lit_719);
DEFLIT(lit_121);
DEFLIT(lit_84);
DEFLIT(lit_609);
DEFLIT(lit_810);
DEFLIT(lit_616);
DEFLIT(lit_4);
DEFLIT(lit_57);
DEFLIT(lit_412);
DEFLIT(lit_547);
DEFLIT(lit_418);
DEFLIT(lit_786);
DEFLIT(lit_520);
DEFLIT(lit_587);
DEFLIT(lit_109);
DEFLIT(lit_264);
DEFLIT(lit_337);
DEFLIT(lit_539);
DEFLIT(lit_10);
DEFLIT(lit_774);
DEFLIT(lit_463);
DEFLIT(lit_381);
DEFLIT(lit_771);
DEFLIT(lit_324);
DEFLIT(lit_3);
DEFLIT(lit_441);
DEFLIT(lit_702);
DEFLIT(lit_416);
DEFLIT(lit_490);
DEFLIT(lit_1);
DEFLIT(lit_377);
DEFLIT(lit_466);
DEFLIT(lit_39);
DEFLIT(lit_567);
DEFLIT(lit_744);
DEFLIT(lit_382);
DEFLIT(lit_214);
DEFLIT(lit_701);
DEFLIT(lit_309);
DEFLIT(lit_563);
DEFLIT(lit_470);
DEFLIT(lit_50);
DEFLIT(lit_671);
DEFLIT(lit_273);
DEFLIT(lit_406);
DEFLIT(lit_147);
DEFLIT(lit_185);
DEFLIT(lit_656);
DEFLIT(lit_475);
DEFLIT(lit_595);
DEFLIT(lit_580);
DEFLIT(lit_247);
DEFLIT(lit_375);
DEFLIT(lit_391);
DEFLIT(lit_77);
DEFLIT(lit_772);
DEFLIT(lit_396);
DEFLIT(lit_131);
DEFLIT(lit_458);
DEFLIT(lit_576);
DEFLIT(lit_323);
DEFLIT(lit_139);
DEFLIT(lit_172);
DEFLIT(lit_305);
DEFLIT(lit_756);
DEFLIT(lit_136);
DEFLIT(lit_474);
DEFLIT(lit_445);
DEFLIT(lit_134);
DEFLIT(lit_746);
DEFLIT(lit_157);
DEFLIT(lit_166);
DEFLIT(lit_383);
DEFLIT(lit_295);
DEFLIT(lit_255);
DEFLIT(lit_90);
DEFLIT(lit_241);
DEFLIT(lit_339);
DEFLIT(lit_489);
DEFLIT(lit_366);
DEFLIT(lit_200);
DEFLIT(lit_123);
DEFLIT(lit_668);
DEFLIT(lit_608);
DEFLIT(lit_159);
DEFLIT(lit_695);
DEFLIT(lit_555);
DEFLIT(lit_762);
DEFLIT(lit_177);
DEFLIT(lit_165);
DEFLIT(lit_267);
DEFLIT(lit_543);
DEFLIT(lit_41);
DEFLIT(lit_782);
DEFLIT(lit_557);
DEFLIT(lit_347);
DEFLIT(lit_657);
DEFLIT(lit_773);
DEFLIT(lit_804);
DEFLIT(lit_452);
DEFLIT(lit_100);
DEFLIT(lit_101);
DEFLIT(lit_22);
DEFLIT(lit_449);
DEFLIT(lit_282);
DEFLIT(lit_94);
DEFLIT(lit_376);
DEFLIT(lit_150);
DEFLIT(lit_788);
DEFLIT(lit_706);
DEFLIT(lit_682);
DEFLIT(lit_524);
DEFLIT(lit_243);
DEFLIT(lit_96);
DEFLIT(lit_602);
DEFLIT(lit_193);
DEFLIT(lit_399);
DEFLIT(lit_250);
DEFLIT(lit_132);
DEFLIT(lit_446);
DEFLIT(lit_11);
DEFLIT(lit_591);
DEFLIT(lit_125);
DEFLIT(lit_342);
DEFLIT(lit_152);
DEFLIT(lit_9);
DEFLIT(lit_224);
DEFLIT(lit_59);
DEFLIT(lit_331);
DEFLIT(lit_54);
DEFLIT(lit_222);
DEFLIT(lit_538);
DEFLIT(lit_816);
DEFLIT(lit_97);
DEFLIT(lit_313);
DEFLIT(lit_610);
DEFLIT(lit_311);
DEFLIT(lit_104);
DEFLIT(lit_431);
DEFLIT(lit_550);
DEFLIT(lit_494);
DEFLIT(lit_244);
DEFLIT(lit_16);
DEFLIT(lit_499);
DEFLIT(lit_599);
DEFLIT(lit_300);
DEFLIT(lit_358);
DEFLIT(lit_296);
DEFLIT(lit_662);
DEFLIT(lit_780);
DEFLIT(lit_69);
DEFLIT(lit_64);
DEFLIT(lit_378);
DEFLIT(lit_506);
DEFLIT(lit_799);
DEFLIT(lit_231);
DEFLIT(lit_194);
DEFLIT(lit_505);
DEFLIT(lit_448);
DEFLIT(lit_240);
DEFLIT(lit_234);
DEFLIT(lit_435);
DEFLIT(lit_714);
DEFLIT(lit_232);
DEFLIT(lit_755);
DEFLIT(lit_732);
DEFLIT(lit_192);
DEFLIT(lit_392);
DEFLIT(lit_153);
DEFLIT(lit_174);
DEFLIT(lit_594);
DEFLIT(lit_286);
DEFLIT(lit_211);
DEFLIT(lit_283);
DEFLIT(lit_534);
DEFLIT(lit_793);
DEFLIT(lit_723);
DEFLIT(lit_658);
DEFLIT(lit_582);
DEFLIT(lit_46);
DEFLIT(lit_708);
DEFLIT(lit_568);
DEFLIT(lit_298);
DEFLIT(lit_529);
DEFLIT(lit_473);
DEFLIT(lit_817);
DEFLIT(lit_43);
DEFLIT(lit_800);
DEFLIT(lit_795);
DEFLIT(lit_716);
DEFLIT(lit_8);
DEFLIT(lit_212);
DEFLIT(lit_385);
DEFLIT(lit_257);
DEFLIT(lit_332);
DEFLIT(lit_624);
DEFLIT(lit_402);
DEFLIT(lit_678);
DEFLIT(lit_86);
DEFLIT(lit_44);
DEFLIT(lit_707);
DEFLIT(lit_766);
DEFLIT(lit_745);
DEFLIT(lit_752);
DEFLIT(lit_763);
DEFLIT(lit_735);
DEFLIT(lit_450);
DEFLIT(lit_549);
DEFLIT(lit_15);
DEFLIT(lit_612);
DEFLIT(lit_208);
DEFLIT(lit_664);
DEFLIT(lit_129);
DEFLIT(lit_270);
DEFLIT(lit_394);
DEFLIT(lit_619);
DEFLIT(lit_395);
DEFLIT(lit_21);
DEFLIT(lit_743);
DEFLIT(lit_276);
DEFLIT(lit_362);
DEFLIT(lit_95);
DEFLIT(lit_807);
DEFLIT(lit_20);
DEFLIT(lit_280);
DEFLIT(lit_430);
DEFLIT(lit_278);
DEFLIT(lit_617);
DEFLIT(lit_66);
DEFLIT(lit_73);
DEFLIT(lit_349);
DEFLIT(lit_636);
DEFLIT(lit_103);
DEFLIT(lit_517);
DEFLIT(lit_564);
DEFLIT(lit_388);
DEFLIT(lit_145);
DEFLIT(lit_182);
DEFLIT(lit_29);
DEFLIT(lit_206);
DEFLIT(lit_348);
DEFLIT(lit_61);
DEFLIT(lit_37);
DEFLIT(lit_227);
DEFLIT(lit_598);
DEFLIT(lit_40);
DEFLIT(lit_144);
DEFLIT(lit_314);
DEFLIT(lit_754);
DEFLIT(lit_542);
DEFLIT(lit_307);
DEFLIT(lit_661);
DEFLIT(lit_235);
DEFLIT(lit_607);
DEFLIT(lit_350);
DEFLIT(lit_229);
DEFLIT(lit_343);
DEFLIT(lit_154);
DEFLIT(lit_541);
DEFLIT(lit_483);
DEFLIT(lit_5);
DEFLIT(lit_149);
DEFLIT(lit_686);
DEFLIT(lit_417);
DEFLIT(lit_320);
DEFLIT(lit_330);
DEFLIT(lit_310);
DEFLIT(lit_611);
DEFLIT(lit_269);
DEFLIT(lit_760);
DEFLIT(lit_23);
DEFLIT(lit_632);
DEFLIT(lit_651);
DEFLIT(lit_514);
DEFLIT(lit_801);
DEFLIT(lit_292);
DEFLIT(lit_511);
DEFLIT(lit_128);
DEFLIT(lit_169);
DEFLIT(lit_230);
DEFLIT(lit_294);
DEFLIT(lit_209);
DEFLIT(lit_790);
DEFLIT(lit_401);
DEFLIT(lit_398);
DEFLIT(lit_146);
DEFLIT(lit_277);
DEFLIT(lit_363);
DEFLIT(lit_67);
DEFLIT(lit_190);
DEFLIT(lit_265);
DEFLIT(lit_289);
DEFLIT(lit_713);
DEFLIT(lit_592);
DEFLIT(lit_225);
DEFLIT(lit_553);
DEFLIT(lit_770);
DEFLIT(lit_137);
DEFLIT(lit_410);
DEFLIT(lit_359);
DEFLIT(lit_589);
DEFLIT(lit_368);
DEFLIT(lit_163);
DEFLIT(lit_18);
DEFLIT(lit_635);
DEFLIT(lit_148);
DEFLIT(lit_272);
DEFLIT(lit_133);
DEFLIT(lit_236);
DEFLIT(lit_815);
DEFLIT(lit_301);
DEFLIT(lit_221);
DEFLIT(lit_479);
DEFLIT(lit_729);
DEFLIT(lit_421);
DEFLIT(lit_660);
DEFLIT(lit_646);
DEFLIT(lit_521);
DEFLIT(lit_753);
DEFLIT(lit_13);
DEFLIT(lit_373);
DEFLIT(lit_722);
DEFLIT(lit_99);
DEFLIT(lit_423);
DEFLIT(lit_439);
DEFLIT(lit_239);
DEFLIT(lit_467);
DEFLIT(lit_24);
DEFLIT(lit_736);
DEFLIT(lit_734);
DEFLIT(lit_260);
DEFLIT(lit_645);
DEFLIT(lit_252);
DEFLIT(lit_699);
DEFLIT(lit_112);
DEFLIT(lit_91);
DEFLIT(lit_497);
DEFLIT(lit_354);
DEFLIT(lit_502);
DEFLIT(lit_498);
DEFLIT(lit_581);
DEFLIT(lit_316);
DEFLIT(lit_404);
DEFLIT(lit_556);
DEFLIT(lit_160);
DEFLIT(lit_60);
DEFLIT(lit_142);
DEFLIT(lit_370);
DEFLIT(lit_274);
DEFLIT(lit_199);
DEFLIT(lit_130);
DEFLIT(lit_540);
DEFLIT(lit_76);
DEFLIT(lit_717);
DEFLIT(lit_207);
DEFLIT(lit_333);
DEFLIT(lit_742);
DEFLIT(lit_527);
DEFLIT(lit_674);
DEFLIT(lit_444);
DEFLIT(lit_590);
DEFLIT(lit_791);
DEFLIT(lit_120);
DEFLIT(lit_759);
DEFLIT(lit_640);
DEFLIT(lit_487);
DEFLIT(lit_779);
DEFLIT(lit_384);
DEFLIT(lit_648);
DEFLIT(lit_340);
DEFLIT(lit_516);
DEFLIT(lit_486);
DEFLIT(lit_251);
DEFLIT(lit_326);
DEFLIT(lit_140);
DEFLIT(lit_108);
DEFLIT(lit_812);
DEFLIT(lit_583);
DEFLIT(lit_356);
DEFLIT(lit_390);
DEFLIT(lit_620);
DEFLIT(lit_684);
DEFLIT(lit_803);
DEFLIT(lit_303);
DEFLIT(lit_218);
DEFLIT(lit_472);
DEFLIT(lit_429);
DEFLIT(lit_75);
DEFLIT(lit_0);
DEFLIT(lit_389);
DEFLIT(lit_432);
DEFLIT(lit_698);
DEFLIT(lit_51);
DEFLIT(lit_653);
DEFLIT(lit_703);
DEFLIT(lit_346);
DEFLIT(lit_761);
DEFLIT(lit_749);
DEFLIT(lit_183);
DEFLIT(lit_34);
DEFLIT(lit_464);
DEFLIT(lit_180);
DEFLIT(lit_217);
DEFLIT(lit_798);
DEFLIT(lit_178);
DEFLIT(lit_53);
DEFLIT(lit_571);
DEFLIT(lit_733);
DEFLIT(lit_679);
DEFLIT(lit_515);
DEFLIT(lit_631);
DEFLIT(lit_750);
DEFLIT(lit_574);
DEFLIT(lit_442);
DEFLIT(lit_19);
DEFLIT(lit_198);
DEFLIT(lit_451);
DEFLIT(lit_710);
DEFLIT(lit_643);
DEFLIT(lit_188);
DEFLIT(lit_63);
DEFLIT(lit_426);
DEFLIT(lit_781);
DEFLIT(lit_114);

/* FUNCTIONS: */

LOCFOR(fun_x_1492_0);
LOCFOR(fun_1);
LOCFOR(fun_2);
LOCFOR(fun_ast_error_3);
LOCFOR(fun_program_type_4);
LOCFOR(fun_program_type_setter_5);
LOCFOR(fun_6);
LOCFOR(fun_program_line_7);
LOCFOR(fun_program_line_setter_8);
LOCFOR(fun_9);
LOCFOR(fun_program_register_10);
LOCFOR(fun_program_register_setter_11);
LOCFOR(fun_12);
LOCFOR(fun_binding_value_13);
LOCFOR(fun_binding_value_setter_14);
LOCFOR(fun_15);
LOCFOR(fun_binding_mutableQ_16);
LOCFOR(fun_binding_mutableQ_setter_17);
LOCFOR(fun_18);
LOCFOR(fun_binding_dynamic_extentQ_19);
LOCFOR(fun_binding_dynamic_extentQ_setter_20);
LOCFOR(fun_21);
LOCFOR(fun_binding_dottedQ_22);
LOCFOR(fun_binding_dottedQ_setter_23);
LOCFOR(fun_24);
LOCFOR(fun_binding_closed_overQ_25);
LOCFOR(fun_binding_closed_overQ_setter_26);
LOCFOR(fun_27);
LOCFOR(fun_binding_index_28);
LOCFOR(fun_binding_index_setter_29);
LOCFOR(fun_30);
LOCFOR(fun_compile_time_program_31);
LOCFOR(fun_compile_time_program_setter_32);
LOCFOR(fun_reference_binding_33);
LOCFOR(fun_reference_binding_setter_34);
LOCFOR(fun_reference_called_functionQ_35);
LOCFOR(fun_reference_called_functionQ_setter_36);
LOCFOR(fun_37);
LOCFOR(fun_reference_frame_number_38);
LOCFOR(fun_reference_frame_number_setter_39);
LOCFOR(fun_reference_frame_offset_40);
LOCFOR(fun_reference_frame_offset_setter_41);
LOCFOR(fun_boundQ_reference_42);
LOCFOR(fun_boundQ_reference_setter_43);
LOCFOR(fun_boundQ_default_44);
LOCFOR(fun_boundQ_default_setter_45);
LOCFOR(fun_assignment_form_46);
LOCFOR(fun_assignment_form_setter_47);
LOCFOR(fun_assignment_reference_48);
LOCFOR(fun_assignment_reference_setter_49);
LOCFOR(fun_assignment_binding_50);
LOCFOR(fun_assignment_binding_setter_51);
LOCFOR(fun_signature_bindings_52);
LOCFOR(fun_signature_bindings_setter_53);
LOCFOR(fun_54);
LOCFOR(fun_signature_names_55);
LOCFOR(fun_signature_names_setter_56);
LOCFOR(fun_57);
LOCFOR(fun_signature_specs_58);
LOCFOR(fun_signature_specs_setter_59);
LOCFOR(fun_60);
LOCFOR(fun_signature_naryQ_61);
LOCFOR(fun_signature_naryQ_setter_62);
LOCFOR(fun_63);
LOCFOR(fun_signature_arity_64);
LOCFOR(fun_signature_arity_setter_65);
LOCFOR(fun_66);
LOCFOR(fun_signature_value_67);
LOCFOR(fun_signature_value_setter_68);
LOCFOR(fun_69);
LOCFOR(fun_req_sig_specs_70);
LOCFOR(fun_function_binding_71);
LOCFOR(fun_function_binding_setter_72);
LOCFOR(fun_73);
LOCFOR(fun_function_debug_name_74);
LOCFOR(fun_function_debug_name_setter_75);
LOCFOR(fun_76);
LOCFOR(fun_function_signature_77);
LOCFOR(fun_function_signature_setter_78);
FUNFOR(YevalSastYfunction_bindings);
FUNFOR(YevalSastYfunction_names);
FUNFOR(YevalSastYfunction_specs);
FUNFOR(YevalSastYfunction_naryQ);
FUNFOR(YevalSastYfunction_arity);
FUNFOR(YevalSastYfunction_value);
LOCFOR(fun_function_kind_85);
FUNFOR(YevalSastYfunction_display_name);
LOCFOR(fun_invalidate_dependent_87);
LOCFOR(fun_as_lst_88);
LOCFOR(fun_x_1498_89);
LOCFOR(fun_90);
LOCFOR(fun_91);
LOCFOR(fun_function_body_92);
LOCFOR(fun_function_body_setter_93);
LOCFOR(fun_94);
LOCFOR(fun_function_index_95);
LOCFOR(fun_function_index_setter_96);
LOCFOR(fun_97);
LOCFOR(fun_function_temporaries_98);
LOCFOR(fun_function_temporaries_setter_99);
LOCFOR(fun_100);
LOCFOR(fun_function_registers_101);
LOCFOR(fun_function_registers_setter_102);
LOCFOR(fun_103);
LOCFOR(fun_function_loop_104);
LOCFOR(fun_function_loop_setter_105);
LOCFOR(fun_106);
LOCFOR(fun_function_source_107);
LOCFOR(fun_function_source_setter_108);
LOCFOR(fun_109);
LOCFOR(fun_function_frame_len_110);
LOCFOR(fun_function_frame_len_setter_111);
LOCFOR(fun_112);
LOCFOR(fun_function_adjectives_113);
LOCFOR(fun_function_adjectives_setter_114);
LOCFOR(fun_115);
FUNFOR(YevalSastYfree_environment);
LOCFOR(fun_nul_117);
LOCFOR(fun_function_ref_count_118);
LOCFOR(fun_function_ref_count_setter_119);
LOCFOR(fun_120);
LOCFOR(fun_function_free_121);
LOCFOR(fun_function_free_setter_122);
LOCFOR(fun_123);
LOCFOR(fun_incf_ref_count_124);
LOCFOR(fun_incf_ref_count_125);
LOCFOR(fun_function_kind_126);
LOCFOR(fun_function_kind_127);
LOCFOR(fun_function_kind_128);
LOCFOR(fun_alternative_condition_129);
LOCFOR(fun_alternative_condition_setter_130);
LOCFOR(fun_alternative_consequent_131);
LOCFOR(fun_alternative_consequent_setter_132);
LOCFOR(fun_alternative_alternant_133);
LOCFOR(fun_alternative_alternant_setter_134);
LOCFOR(fun_loop_bindings_135);
LOCFOR(fun_loop_bindings_setter_136);
LOCFOR(fun_loop_body_137);
LOCFOR(fun_loop_body_setter_138);
LOCFOR(fun_loop_continue_139);
LOCFOR(fun_loop_continue_setter_140);
LOCFOR(fun_141);
FUNFOR(YevalSastYsequential);
LOCFOR(fun_nul_143);
LOCFOR(fun_constant_value_144);
LOCFOR(fun_constant_value_setter_145);
LOCFOR(fun_constant_index_146);
LOCFOR(fun_constant_index_setter_147);
LOCFOR(fun_application_arguments_148);
LOCFOR(fun_application_arguments_setter_149);
LOCFOR(fun_application_tailQ_150);
LOCFOR(fun_application_tailQ_setter_151);
LOCFOR(fun_152);
LOCFOR(fun_application_loop_153);
LOCFOR(fun_application_loop_setter_154);
LOCFOR(fun_application_tailQ_155);
LOCFOR(fun_application_function_156);
LOCFOR(fun_application_function_setter_157);
LOCFOR(fun_application_knownQ_158);
LOCFOR(fun_application_knownQ_setter_159);
LOCFOR(fun_160);
LOCFOR(fun_application_next_methods_161);
LOCFOR(fun_application_next_methods_setter_162);
LOCFOR(fun_application_knownQ_163);
LOCFOR(fun_application_binding_164);
LOCFOR(fun_application_binding_setter_165);
LOCFOR(fun_fix_let_bindings_166);
LOCFOR(fun_fix_let_bindings_setter_167);
LOCFOR(fun_fix_let_types_168);
LOCFOR(fun_fix_let_types_setter_169);
LOCFOR(fun_fix_let_arguments_170);
LOCFOR(fun_fix_let_arguments_setter_171);
LOCFOR(fun_fix_let_body_172);
LOCFOR(fun_fix_let_body_setter_173);
FUNFOR(YevalSastYfab_list);
LOCFOR(fun_nul_175);
FUNFOR(YevalSastYarguments);
LOCFOR(fun_nul_177);
LOCFOR(fun_locals_bindings_178);
LOCFOR(fun_locals_bindings_setter_179);
LOCFOR(fun_locals_functions_180);
LOCFOR(fun_locals_functions_setter_181);
LOCFOR(fun_locals_body_182);
LOCFOR(fun_locals_body_setter_183);
LOCFOR(fun_bind_exit_main_fun_184);
LOCFOR(fun_bind_exit_main_fun_setter_185);
LOCFOR(fun_bind_exit_lightQ_186);
LOCFOR(fun_bind_exit_lightQ_setter_187);
LOCFOR(fun_188);
LOCFOR(fun_unwind_protect_protected_thunk_189);
LOCFOR(fun_unwind_protect_protected_thunk_setter_190);
LOCFOR(fun_unwind_protect_cleanup_thunk_191);
LOCFOR(fun_unwind_protect_cleanup_thunk_setter_192);
LOCFOR(fun_monitor_type_193);
LOCFOR(fun_monitor_type_setter_194);
LOCFOR(fun_monitor_info_195);
LOCFOR(fun_monitor_info_setter_196);
LOCFOR(fun_monitor_test_197);
LOCFOR(fun_monitor_test_setter_198);
LOCFOR(fun_monitor_handler_199);
LOCFOR(fun_monitor_handler_setter_200);
LOCFOR(fun_monitor_main_thunk_201);
LOCFOR(fun_monitor_main_thunk_setter_202);
LOCFOR(fun_ast_walkX_203);
LOCFOR(fun_ast_walk_204);
LOCFOR(fun_ast_walk_205);
LOCFOR(fun_ast_copy_206);
LOCFOR(fun_ast_copy_207);
LOCFOR(fun_objectify_208);
LOCFOR(fun_objectify_list_209);
LOCFOR(fun_objectify_list_210);
FUNFOR(YevalSastYmaybe_log_dependency);
FUNFOR(YevalSastYmacro_expander);
LOCFOR(fun_objectify_list_213);
LOCFOR(fun_objectify_214);
LOCFOR(fun_objectify_215);
LOCFOR(fun_objectify_216);
LOCFOR(fun_objectify_217);
LOCFOR(fun_objectify_218);
LOCFOR(fun_objectify_quotation_219);
LOCFOR(fun_objectify_quotation_220);
LOCFOR(fun_objectify_quotation_221);
LOCFOR(fun_objectify_raw_222);
LOCFOR(fun_objectify_boundQ_223);
LOCFOR(fun_objectify_compile_time_224);
LOCFOR(fun_objectify_alternative_225);
LOCFOR(fun_sequentialize_226);
LOCFOR(fun_transform_defs_227);
LOCFOR(fun_objectify_sequential_228);
LOCFOR(fun_229);
LOCFOR(fun_objectify_application_230);
LOCFOR(fun_231);
LOCFOR(fun_objectify_application_232);
LOCFOR(fun_233);
LOCFOR(fun_objectify_application_234);
LOCFOR(fun_process_closed_application_235);
LOCFOR(fun_pack_args_236);
LOCFOR(fun_process_nary_closed_application_237);
LOCFOR(fun_convert2arguments_238);
LOCFOR(fun_objectify_assignment_239);
LOCFOR(fun_objectify_assignment_240);
LOCFOR(fun_objectify_assignment_using_241);
LOCFOR(fun_objectify_assignment_using_242);
LOCFOR(fun_objectify_assignment_using_243);
LOCFOR(fun_objectify_assignment_using_244);
LOCFOR(fun_objectify_assignment_using_245);
FUNFOR(YevalSastYupdate_binding_kind);
LOCFOR(fun_ast_define_binding_247);
LOCFOR(fun_objectify_definition_248);
LOCFOR(fun_objectify_variable_definition_249);
LOCFOR(fun_objectify_dynamic_definition_250);
LOCFOR(fun_expand_251);
FUNFOR(YevalSastYPPPmacro);
FUNFOR(YPPmacro);
LOCFOR(fun_objectify_syntax_definition_254);
LOCFOR(fun_objectify_function_definition_255);
FUNFOR(YevalSastYmodule_binding);
LOCFOR(fun_function_inlineableQ_257);
LOCFOR(fun_objectify_primitive_definition_258);
LOCFOR(fun_objectify_generic_definition_259);
LOCFOR(fun_objectify_method_definition_260);
LOCFOR(fun_261);
LOCFOR(fun_262);
LOCFOR(fun_263);
LOCFOR(fun_264);
LOCFOR(fun_objectify_function_source_265);
LOCFOR(fun_266);
LOCFOR(fun_267);
LOCFOR(fun_objectify_function_using_268);
LOCFOR(fun_objectify_function_269);
LOCFOR(fun_objectify_signature_270);
LOCFOR(fun_compute_local_reference_offsets_271);
LOCFOR(fun_objectify_binding_272);
LOCFOR(fun_binding_reference_class_273);
LOCFOR(fun_objectify_binding_274);
LOCFOR(fun_objectify_binding_275);
LOCFOR(fun_default_type_276);
LOCFOR(fun_objectify_free_global_reference_277);
FUNFOR(YevalSastYforeign_nameQ);
LOCFOR(fun_objectify_foreign_reference_279);
LOCFOR(fun_objectify_symbol_280);
LOCFOR(fun_ftype_281);
FUNFOR(YevalSastYfunctions);
LOCFOR(fun_nul_283);
LOCFOR(fun_284);
LOCFOR(fun_285);
LOCFOR(fun_286);
LOCFOR(fun_objectify_locals_287);
LOCFOR(fun_objectify_bind_exit_288);
LOCFOR(fun_objectify_unwind_protect_289);
LOCFOR(fun_objectify_monitor_290);
LOCFOR(fun_291);
LOCFOR(fun_292);
LOCFOR(fun_293);
LOCFOR(fun_294);
LOCFOR(fun_295);
LOCFOR(fun_objectify_export_296);
LOCFOR(fun_297);
LOCFOR(fun_objectify_useSexport_module_298);
LOCFOR(fun_299);
LOCFOR(fun_objectify_use_include_300);
LOCFOR(fun_301);
LOCFOR(fun_objectify_use_library_302);
LOCFOR(fun_303);
LOCFOR(fun_use_mod_304);
LOCFOR(fun_use_c_mod_305);
LOCFOR(fun_objectify_use_module_306);
LOCFOR(fun_307);
LOCFOR(fun_objectify_use_mangle_module_308);
LOCFOR(fun_expand_bind_list_309);
LOCFOR(fun_expand_bind_list_310);
LOCFOR(fun_expand_bind_list_311);
LOCFOR(fun_expand_bind_listT_312);
LOCFOR(fun_expand_bind_listT_313);
LOCFOR(fun_expand_bind_element_314);
LOCFOR(fun_expand_bind_element_315);
LOCFOR(fun_expand_pattern_316);
LOCFOR(fun_317);
LOCFOR(fun_expand_syntax_if_318);
LOCFOR(fun_r_extendT_319);
LOCFOR(fun_find_binding_320);
LOCFOR(fun_find_binding_321);
LOCFOR(fun_register_magic_binding_322);
LOCFOR(fun_magic_bindings_323);
LOCFOR(fun_x_1518_324);
LOCFOR(fun_325);
LOCFOR(fun_326);
LOCFOR(fun_327);
LOCFOR(fun_328);
LOCFOR(fun_329);
LOCFOR(fun_330);
LOCFOR(fun_331);
LOCFOR(fun_332);
LOCFOR(fun_333);
LOCFOR(fun_334);
LOCFOR(fun_335);
LOCFOR(fun_336);
LOCFOR(fun_337);
LOCFOR(fun_338);
LOCFOR(fun_339);
LOCFOR(fun_340);
LOCFOR(fun_341);
LOCFOR(fun_342);
LOCFOR(fun_343);
LOCFOR(fun_344);
LOCFOR(fun_345);
LOCFOR(fun_346);
LOCFOR(fun_347);
LOCFOR(fun_348);
LOCFOR(fun_pairize_349);
LOCFOR(fun_350);
LOCFOR(fun_objectify_define_property_351);
LOCFOR(fun_352);
LOCFOR(fun_353);
LOCFOR(fun_354);
LOCFOR(fun_355);
LOCFOR(fun_356);
LOCFOR(fun_357);
LOCFOR(fun_ast_macro_expand_358);
LOCFOR(fun_359);
LOCFOR(fun_360);
LOCFOR(fun_361);
LOCFOR(fun_362);
LOCFOR(fun_363);
LOCFOR(fun_364);
LOCFOR(fun_365);
LOCFOR(fun_366);
LOCFOR(fun_367);
LOCFOR(fun_install_initial_bindings_368);
LOCFOR(fun_369);
FUNFOR(YevalSastYobjectify_with_subtransaction);
LOCFOR(fun_371);
FUNFOR(YevalSastYinstall_magic_bindings);
FUNFOR(YevalSastYreload_macros);
FUNFOR(YevalSastYinstall_interpreter_hacks);
FUNFOR(YevalSastYinit_runtime);
FUNFOR(YevalSastYfab_syntax_environment);
FUNFOR(YevalSastYfab_g2c_module);
FUNFOR(YevalSastYinit_g2c_boot_environment);
FUNFOR(YevalSastYinit_g2c_regular_environment);
FUNFOR(YevalSastYinit_ast);
LOCFOR(fun_ast_contains_funQ_381);
LOCFOR(fun_walk_382);
LOCFOR(fun_383);
LOCFOR(fun_ast_contains_funQ_384);
extern P YevalSastY___main_0___ ();
extern P YevalSastY___main_1___ ();
extern P YevalSastY___main_2___ ();
extern P YevalSastY___main_3___ ();
extern P YevalSastY___main_4___ ();
extern P YevalSastY___main_5___ ();
extern P YevalSastY___main_6___ ();
extern P YevalSastY___main_7___ ();
extern P YevalSastY___main_8___ ();
extern P YevalSastY___main_9___ ();
extern P YevalSastY___main_10___ ();

/* FUNCTION CODES: */

LOCCODEDEF(fun_x_1492_0) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_4),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_1) {
  P return_;
  P saved_dependentF4045;
  P x_1491F4044;
  P x_1491F4043;
  P x_1491F4042;
  P bodyF4041;
  P dependentF4040;
  P x_1491F4039;
  P x_1492F4038;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35;
LINK_STACK();
  ARG(return_, 0);
  T35 = FUNSHELL(0,fun_x_1492_0,2);
  x_1492F4038 = T35;
  FUNINIT(x_1492F4038, 2,FREEREF(0),return_);
  x_1491F4039 = FREEREF(0);
  dependentF4040 = YPfalse;
  bodyF4041 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1491F4039,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1491F4039,LITREF(lit_4),x_1492F4038);
    x_1491F4042 = T6;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1491F4042,x_1492F4038);
    dependentF4040 = T4;
    T5 = CALL1(1,VARREF(Ytail),x_1491F4042);
    x_1491F4043 = T5;
    bodyF4041 = x_1491F4043;
    x_1491F4044 = Ynil;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1491F4044,x_1492F4038);
  } else {
    T7 = CALL2(1,x_1492F4038,LITREF(lit_5),x_1491F4039);
  }
  T34 = CALL0(1,VARREF(YgooSmacrosYgensym));
  saved_dependentF4045 = T34;
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T14 = CALL1(1,VARREF(Ylst),saved_dependentF4045);
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T15,LITREF(lit_8));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T11 = CALL2(1,VARREF(YgooSmacrosYcat),T12,LITREF(lit_8));
  T10 = CALL1(1,VARREF(Ylst),T11);
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T21 = dependentF4040;
  T20 = CALL1(1,VARREF(Ylst),T21);
  T17 = CALL4(1,VARREF(YgooSmacrosYcat),T18,T19,T20,LITREF(lit_8));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T28 = bodyF4041;
  T26 = CALL3(1,VARREF(YgooSmacrosYcat),T27,T28,LITREF(lit_8));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T33 = CALL1(1,VARREF(Ylst),saved_dependentF4045);
  T30 = CALL4(1,VARREF(YgooSmacrosYcat),T31,T32,T33,LITREF(lit_8));
  T29 = CALL1(1,VARREF(Ylst),T30);
  T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T29,LITREF(lit_8));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T8 = CALL5(1,VARREF(YgooSmacrosYcat),T9,T10,T16,T22,LITREF(lit_8));
UNLINK_STACK();
  QRET(T8);
}

LOCCODEDEF(fun_2) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_1,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_error_3) {
  P message_,arguments_;
  P T0,T1;
LINK_STACK();
  ARG(message_, 0);
  NARGS(arguments_, 1);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLsimple_ast_errorG),VARREF(YgooSconditionsYcondition_message),message_,VARREF(YgooSconditionsYcondition_arguments),arguments_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_program_type_4) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYprogram_type));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_program_type_setter_5) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYprogram_type));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_6) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(VARREF(YgooStypesYDbot));
}

LOCCODEDEF(fun_program_line_7) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYprogram_line));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_program_line_setter_8) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYprogram_line));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_9) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_program_register_10) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYprogram_register));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_program_register_setter_11) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYprogram_register));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_12) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_binding_value_13) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbinding_value));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_binding_value_setter_14) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_value));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_15) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_binding_mutableQ_16) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbinding_mutableQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_binding_mutableQ_setter_17) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_mutableQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_18) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_binding_dynamic_extentQ_19) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbinding_dynamic_extentQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_binding_dynamic_extentQ_setter_20) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_dynamic_extentQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_21) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_binding_dottedQ_22) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbinding_dottedQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_binding_dottedQ_setter_23) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_dottedQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_24) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_binding_closed_overQ_25) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbinding_closed_overQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_binding_closed_overQ_setter_26) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_closed_overQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_27) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_binding_index_28) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbinding_index));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_binding_index_setter_29) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_index));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_30) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_compile_time_program_31) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYcompile_time_program));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_compile_time_program_setter_32) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYcompile_time_program));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_reference_binding_33) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYreference_binding));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_reference_binding_setter_34) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYreference_binding));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_reference_called_functionQ_35) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYreference_called_functionQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_reference_called_functionQ_setter_36) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYreference_called_functionQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_37) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_reference_frame_number_38) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYreference_frame_number));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_reference_frame_number_setter_39) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYreference_frame_number));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_reference_frame_offset_40) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYreference_frame_offset));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_reference_frame_offset_setter_41) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYreference_frame_offset));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_boundQ_reference_42) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYboundQ_reference));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_boundQ_reference_setter_43) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYboundQ_reference));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_boundQ_default_44) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYboundQ_default));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_boundQ_default_setter_45) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYboundQ_default));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_assignment_form_46) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYassignment_form));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_assignment_form_setter_47) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYassignment_form));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_assignment_reference_48) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYassignment_reference));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_assignment_reference_setter_49) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYassignment_reference));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_assignment_binding_50) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYassignment_binding));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_assignment_binding_setter_51) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYassignment_binding));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_signature_bindings_52) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYsignature_bindings));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_signature_bindings_setter_53) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYsignature_bindings));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_54) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

LOCCODEDEF(fun_signature_names_55) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYsignature_names));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_signature_names_setter_56) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYsignature_names));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_57) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

LOCCODEDEF(fun_signature_specs_58) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYsignature_specs));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_signature_specs_setter_59) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYsignature_specs));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_60) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

LOCCODEDEF(fun_signature_naryQ_61) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYsignature_naryQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_signature_naryQ_setter_62) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYsignature_naryQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_63) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_signature_arity_64) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYsignature_arity));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_signature_arity_setter_65) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYsignature_arity));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_66) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_signature_value_67) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYsignature_value));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_signature_value_setter_68) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYsignature_value));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_69) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_req_sig_specs_70) {
  P sig_;
  P typesF4046;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(sig_, 0);
  T6 = CALL1(1,VARREF(YevalSastYsignature_specs),sig_);
  typesF4046 = T6;
  T2 = CALL1(1,VARREF(YevalSastYsignature_naryQ),sig_);
  T1 = CALL1(1,VARREF(YevalSastYconstant_value),T2);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooStypesYlen),typesF4046);
    T4 = CALL2(1,VARREF(YgooSmathY_),T5,YPint((P)1));
    T3 = CALL3(1,VARREF(YgooScolsSseqYsub),typesF4046,YPint((P)0),T4);
    T0 = T3;
  } else {
    T0 = typesF4046;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_binding_71) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_binding));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_binding_setter_72) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_binding));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_73) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_function_debug_name_74) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_debug_name));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_debug_name_setter_75) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_debug_name));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_76) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_function_signature_77) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_signature));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_signature_setter_78) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_signature));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYfunction_bindings) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSastYfunction_signature),x_);
  T0 = CALL1(1,VARREF(YevalSastYsignature_bindings),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYfunction_names) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSastYfunction_signature),x_);
  T0 = CALL1(1,VARREF(YevalSastYsignature_names),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYfunction_specs) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSastYfunction_signature),x_);
  T0 = CALL1(1,VARREF(YevalSastYsignature_specs),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYfunction_naryQ) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = CALL1(1,VARREF(YevalSastYfunction_signature),x_);
  T1 = CALL1(1,VARREF(YevalSastYsignature_naryQ),T2);
  T0 = CALL1(1,VARREF(YevalSastYconstant_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYfunction_arity) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = CALL1(1,VARREF(YevalSastYfunction_signature),x_);
  T1 = CALL1(1,VARREF(YevalSastYsignature_arity),T2);
  T0 = CALL1(1,VARREF(YevalSastYconstant_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYfunction_value) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSastYfunction_signature),x_);
  T0 = CALL1(1,VARREF(YevalSastYsignature_value),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_kind_85) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_194));
}

FUNCODEDEF(YevalSastYfunction_display_name) {
  P f_;
  P x_1494F4049;
  P x_1493F4048;
  P bF4047;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(f_, 0);
  T8 = CALL1(1,VARREF(YevalSastYfunction_binding),f_);
  bF4047 = T8;
  x_1493F4048 = bF4047;
  x_1494F4049 = VARREF(YisaQ);
  T1 = CALL2(1,x_1494F4049,x_1493F4048,VARREF(YLsymG));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),bF4047);
    T0 = T2;
  } else {
    T4 = CALL2(1,x_1494F4049,x_1493F4048,VARREF(YevalSmoduleYLmodule_bindingG));
    if (T4 != YPfalse) {
      T6 = CALL1(1,VARREF(YevalSmoduleYbinding_module_name),bF4047);
      T7 = CALL1(1,VARREF(YevalSmoduleYbinding_name),bF4047);
      T5 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_197),T6,T7);
      T3 = T5;
    } else {
      T3 = LITREF(lit_198);
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_invalidate_dependent_87) {
  P dependent_,dependable_,dtype_;
  P nameF4050;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(dependent_, 0);
  ARG(dependable_, 1);
  ARG(dtype_, 2);
  CALL1(1,VARREF(YevalSdependencyYdetach_dependent),dependent_);
  T8 = CALL1(1,VARREF(YevalSastYfunction_display_name),dependent_);
  nameF4050 = T8;
  T1 = CALL2(1,VARREF(YevalSdependencyYdependency_includes_anyQ),dtype_,VARREF(YevalSdependencyYDparse_dependencies));
  if (T1 != YPfalse) {
    T2 = CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_201),nameF4050);
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YevalSdependencyYdependency_includes_anyQ),dtype_,VARREF(YevalSdependencyYDoptimizaton_dependencies));
    if (T4 != YPfalse) {
      T5 = CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_202),nameF4050);
      T3 = T5;
    } else {
      if (YPtrue != YPfalse) {
        T7 = CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_203),nameF4050);
        T6 = T7;
      } else {
        T6 = YPfalse;
      }
      T3 = T6;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_as_lst_88) {
  P e_;
  P eF4052;
  P resF4051;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(e_, 0);
  resF4051 = Ynil;
  eF4052 = e_;
  LOOP_177: {
    P a177_0,a177_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),eF4052);
    if (T1 != YPfalse) {
      T2 = CALL1(1,VARREF(YgooSmacrosYrevX),resF4051);
      T0 = T2;
    } else {
      T5 = CALL1(1,VARREF(Yhead),eF4052);
      T4 = CALL2(1,VARREF(YgooSmacrosYpair),T5,resF4051);
      T6 = CALL1(1,VARREF(Ytail),eF4052);
      a177_0 = T4;
      a177_1 = T6;
      resF4051 = a177_0;
      eF4052 = a177_1;
      goto LOOP_177;
      T0 = T3;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_x_1498_89) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_211),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_90) {
  P return_;
  P x_1497F4057;
  P x_1497F4056;
  P nameF4055;
  P x_1497F4054;
  P x_1498F4053;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(return_, 0);
  T14 = FUNSHELL(0,fun_x_1498_89,2);
  x_1498F4053 = T14;
  FUNINIT(x_1498F4053, 2,FREEREF(0),return_);
  x_1497F4054 = FREEREF(0);
  nameF4055 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1497F4054,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1497F4054,LITREF(lit_211),x_1498F4053);
    x_1497F4056 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1497F4056,x_1498F4053);
    nameF4055 = T3;
    T4 = CALL1(1,VARREF(Ytail),x_1497F4056);
    x_1497F4057 = T4;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1497F4057,x_1498F4053);
  } else {
    T6 = CALL2(1,x_1498F4053,LITREF(lit_5),x_1497F4054);
  }
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_212));
  T10 = nameF4055;
  T9 = CALL1(1,VARREF(Ylst),T10);
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_204));
  T12 = CALL2(1,VARREF(YgooSmacrosYcat),T13,LITREF(lit_8));
  T11 = CALL1(1,VARREF(Ylst),T12);
  T7 = CALL4(1,VARREF(YgooSmacrosYcat),T8,T9,T11,LITREF(lit_8));
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_91) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_90,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_body_92) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_body));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_body_setter_93) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_body));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_94) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_function_index_95) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_index));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_index_setter_96) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_index));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_97) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

LOCCODEDEF(fun_function_temporaries_98) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_temporaries));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_temporaries_setter_99) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_temporaries));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_100) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

LOCCODEDEF(fun_function_registers_101) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_registers));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_registers_setter_102) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_registers));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_103) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_loop_104) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_loop));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_loop_setter_105) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_loop));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_106) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_function_source_107) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_source));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_source_setter_108) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_source));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_109) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_function_frame_len_110) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_frame_len));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_frame_len_setter_111) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_frame_len));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_112) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_function_adjectives_113) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_adjectives));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_adjectives_setter_114) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_adjectives));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_115) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(YevalSastYfree_environment) {
  P h_,t_;
  P T0;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLfree_environmentG),VARREF(Yhead),h_,VARREF(Ytail),t_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_nul_117) {
  P e_;
LINK_STACK();
  ARG(e_, 0);
UNLINK_STACK();
  RET(VARREF(YevalSastYDfree_environment_nul));
}

LOCCODEDEF(fun_function_ref_count_118) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_ref_count));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_ref_count_setter_119) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_ref_count));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_120) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

LOCCODEDEF(fun_function_free_121) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfunction_free));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_free_setter_122) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfunction_free));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_123) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL1(1,VARREF(YgooScolsScolYnul),VARREF(YevalSastYLfree_environmentG));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_incf_ref_count_124) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(x_);
}

LOCCODEDEF(fun_incf_ref_count_125) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = CALL1(1,VARREF(YevalSastYfunction_ref_count),x_);
  T1 = CALL2(1,VARREF(YgooSmathYA),T2,YPint((P)1));
  T0 = CALL2(1,VARREF(YevalSastYfunction_ref_count_setter),T1,x_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_function_kind_126) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_274));
}

LOCCODEDEF(fun_function_kind_127) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_277));
}

LOCCODEDEF(fun_function_kind_128) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_280));
}

LOCCODEDEF(fun_alternative_condition_129) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYalternative_condition));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_alternative_condition_setter_130) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYalternative_condition));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_alternative_consequent_131) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYalternative_consequent));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_alternative_consequent_setter_132) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYalternative_consequent));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_alternative_alternant_133) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYalternative_alternant));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_alternative_alternant_setter_134) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYalternative_alternant));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_loop_bindings_135) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYloop_bindings));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_loop_bindings_setter_136) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYloop_bindings));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_loop_body_137) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYloop_body));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_loop_body_setter_138) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYloop_body));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_loop_continue_139) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYloop_continue));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_loop_continue_setter_140) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYloop_continue));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_141) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(YevalSastYsequential) {
  P h_,t_;
  P T0;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLsequentialG),VARREF(Yhead),h_,VARREF(Ytail),t_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_nul_143) {
  P e_;
LINK_STACK();
  ARG(e_, 0);
UNLINK_STACK();
  RET(VARREF(YevalSastYDsequential_nul));
}

LOCCODEDEF(fun_constant_value_144) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYconstant_value));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_constant_value_setter_145) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYconstant_value));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_constant_index_146) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYconstant_index));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_constant_index_setter_147) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYconstant_index));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_application_arguments_148) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYapplication_arguments));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_application_arguments_setter_149) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_arguments));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_application_tailQ_150) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYapplication_tailQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_application_tailQ_setter_151) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_tailQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_152) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_application_loop_153) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYapplication_loop));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_application_loop_setter_154) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_loop));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_application_tailQ_155) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(YPtrue);
}

LOCCODEDEF(fun_application_function_156) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYapplication_function));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_application_function_setter_157) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_function));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_application_knownQ_158) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYapplication_knownQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_application_knownQ_setter_159) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_knownQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_160) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_application_next_methods_161) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYapplication_next_methods));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_application_next_methods_setter_162) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_next_methods));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_application_knownQ_163) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(YPtrue);
}

LOCCODEDEF(fun_application_binding_164) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYapplication_binding));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_application_binding_setter_165) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYapplication_binding));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_fix_let_bindings_166) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfix_let_bindings));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_fix_let_bindings_setter_167) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfix_let_bindings));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_fix_let_types_168) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfix_let_types));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_fix_let_types_setter_169) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfix_let_types));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_fix_let_arguments_170) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfix_let_arguments));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_fix_let_arguments_setter_171) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfix_let_arguments));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_fix_let_body_172) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYfix_let_body));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_fix_let_body_setter_173) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYfix_let_body));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYfab_list) {
  P h_,t_;
  P T0;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG),VARREF(Yhead),h_,VARREF(Ytail),t_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_nul_175) {
  P e_;
LINK_STACK();
  ARG(e_, 0);
UNLINK_STACK();
  RET(VARREF(YevalSastYDfab_list_nul));
}

FUNCODEDEF(YevalSastYarguments) {
  P h_,t_;
  P T0;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLargumentsG),VARREF(Yhead),h_,VARREF(Ytail),t_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_nul_177) {
  P e_;
LINK_STACK();
  ARG(e_, 0);
UNLINK_STACK();
  RET(VARREF(YevalSastYDarguments_nul));
}

LOCCODEDEF(fun_locals_bindings_178) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYlocals_bindings));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_locals_bindings_setter_179) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYlocals_bindings));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_locals_functions_180) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYlocals_functions));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_locals_functions_setter_181) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYlocals_functions));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_locals_body_182) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYlocals_body));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_locals_body_setter_183) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYlocals_body));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_bind_exit_main_fun_184) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbind_exit_main_fun));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_bind_exit_main_fun_setter_185) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbind_exit_main_fun));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_bind_exit_lightQ_186) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbind_exit_lightQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_bind_exit_lightQ_setter_187) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbind_exit_lightQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_188) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_unwind_protect_protected_thunk_189) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYunwind_protect_protected_thunk));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_unwind_protect_protected_thunk_setter_190) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYunwind_protect_protected_thunk));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_unwind_protect_cleanup_thunk_191) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYunwind_protect_cleanup_thunk));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_unwind_protect_cleanup_thunk_setter_192) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYunwind_protect_cleanup_thunk));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_monitor_type_193) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYmonitor_type));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_monitor_type_setter_194) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmonitor_type));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_monitor_info_195) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYmonitor_info));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_monitor_info_setter_196) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmonitor_info));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_monitor_test_197) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYmonitor_test));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_monitor_test_setter_198) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmonitor_test));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_monitor_handler_199) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYmonitor_handler));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_monitor_handler_setter_200) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmonitor_handler));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_monitor_main_thunk_201) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYmonitor_main_thunk));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_monitor_main_thunk_setter_202) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYmonitor_main_thunk));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_walkX_203) {
  P g_,o_,args_;
  P xF4063;
  P tmpF4062;
  P setterF4061;
  P getterF4060;
  P propF4059;
  P x_1499F4058;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
  T20 = CALL1(1,VARREF(Yprops_of),o_);
  T19 = CALL1(1,VARREF(YgooScolsScolYenum),T20);
  x_1499F4058 = T19;
  LOOP_178: {
    P a178_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1499F4058);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T18 = CALL1(1,VARREF(YgooScolsScolYnow),x_1499F4058);
      propF4059 = T18;
      T17 = CALL1(1,VARREF(Yprop_getter),propF4059);
      getterF4060 = T17;
      T16 = CALL1(1,VARREF(Yprop_setter),propF4059);
      setterF4061 = T16;
      T6 = CALL2(1,VARREF(YgooSmacrosYEE),getterF4060,VARREF(YevalSastYbinding_value));
      tmpF4062 = T6;
      if (tmpF4062 != YPfalse) {
        T4 = tmpF4062;
      } else {
        T5 = CALL2(1,VARREF(YgooSmacrosYEE),getterF4060,VARREF(YevalSastYapplication_loop));
        T4 = T5;
      }
      T3 = CALL1(1,VARREF(Ynot),T4);
      if (T3 != YPfalse) {
        T8 = CALL2(1,VARREF(YgooSclassYprop_boundQ),o_,getterF4060);
        if (T8 != YPfalse) {
          T13 = CALL1(0,getterF4060,o_);
          xF4063 = T13;
          T10 = CALL2(1,VARREF(YisaQ),xF4063,VARREF(YevalSastYLprogramG));
          if (T10 != YPfalse) {
            T12 = CALL4(1,VARREF(YgooSmacrosYnapp),g_,YPfalse,xF4063,args_);
            T11 = CALL2(1,setterF4061,T12,o_);
            T9 = T11;
          } else {
            T9 = YPfalse;
          }
          T7 = T9;
        } else {
          T7 = YPfalse;
        }
      } else {
      }
      T15 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1499F4058);
      a178_0 = T15;
      x_1499F4058 = a178_0;
      goto LOOP_178;
      T0 = T14;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(o_);
}

LOCCODEDEF(fun_ast_walk_204) {
  P g_,o_,args_;
  P xF4068;
  P tmpF4067;
  P getterF4066;
  P propF4065;
  P x_1501F4064;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
  T18 = CALL1(1,VARREF(Yprops_of),o_);
  T17 = CALL1(1,VARREF(YgooScolsScolYenum),T18);
  x_1501F4064 = T17;
  LOOP_179: {
    P a179_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1501F4064);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T16 = CALL1(1,VARREF(YgooScolsScolYnow),x_1501F4064);
      propF4065 = T16;
      T15 = CALL1(1,VARREF(Yprop_getter),propF4065);
      getterF4066 = T15;
      T6 = CALL2(1,VARREF(YgooSmacrosYEE),getterF4066,VARREF(YevalSastYbinding_value));
      tmpF4067 = T6;
      if (tmpF4067 != YPfalse) {
        T4 = tmpF4067;
      } else {
        T5 = CALL2(1,VARREF(YgooSmacrosYEE),getterF4066,VARREF(YevalSastYapplication_loop));
        T4 = T5;
      }
      T3 = CALL1(1,VARREF(Ynot),T4);
      if (T3 != YPfalse) {
        T8 = CALL2(1,VARREF(YgooSclassYprop_boundQ),o_,getterF4066);
        if (T8 != YPfalse) {
          T12 = CALL1(0,getterF4066,o_);
          xF4068 = T12;
          T10 = CALL2(1,VARREF(YisaQ),xF4068,VARREF(YevalSastYLprogramG));
          if (T10 != YPfalse) {
            T11 = CALL4(1,VARREF(YgooSmacrosYnapp),g_,YPfalse,xF4068,args_);
            T9 = T11;
          } else {
            T9 = YPfalse;
          }
          T7 = T9;
        } else {
          T7 = YPfalse;
        }
      } else {
      }
      T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1501F4064);
      a179_0 = T14;
      x_1501F4064 = a179_0;
      goto LOOP_179;
      T0 = T13;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(o_);
}

LOCCODEDEF(fun_ast_walk_205) {
  P g_,o_,args_;
  P eF4070;
  P xF4069;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
  xF4069 = o_;
  LOOP_180: {
    P a180_0;
    T2 = CALL1(1,VARREF(YgooSmacrosYnulQ),xF4069);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T7 = CALL1(1,VARREF(Yhead),xF4069);
      eF4070 = T7;
      T3 = CALL2(1,VARREF(YisaQ),eF4070,VARREF(YevalSastYLprogramG));
      if (T3 != YPfalse) {
        T4 = CALL4(1,VARREF(YgooSmacrosYnapp),g_,YPfalse,eF4070,args_);
      } else {
      }
      T6 = CALL1(1,VARREF(Ytail),xF4069);
      a180_0 = T6;
      xF4069 = a180_0;
      goto LOOP_180;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_copy_206) {
  P x_;
  P copyF4071;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooSclassYclone),x_);
  copyF4071 = T1;
  CALL2(1,VARREF(YevalSastYprogram_register_setter),YPfalse,copyF4071);
  T0 = CALL2(1,VARREF(YevalSastYast_walkX),VARREF(YevalSastYast_copy),copyF4071);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_copy_207) {
  P x_;
  P next_metsF4072;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),x_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    T6 = (P)YPfun_reg();
    T7 = (P)YPnext_methods();
    T5 = CALL3(1,VARREF(YgooSmacrosYOchecked_next_methods),T6,T7,x_);
    next_metsF4072 = T5;
    T3 = CALL1(1,VARREF(Yhead),next_metsF4072);
    T4 = CALL1(1,VARREF(Ytail),next_metsF4072);
    T2 = CALL4(1,VARREF(YgooSmacrosYnapp),T3,T4,x_,Ynil);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_208) {
  P e_,r_,tailQ_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL2(1,VARREF(YisaQ),e_,VARREF(YevalSastYLprogramG));
  if (T1 != YPfalse) {
    T0 = e_;
  } else {
    T4 = CALL1(1,VARREF(Yhead),e_);
    T3 = CALL3(1,VARREF(YevalSastYobjectify),T4,r_,YPfalse);
    T2 = CALL4(1,VARREF(YevalSastYobjectify_list),T3,e_,r_,tailQ_);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_list_209) {
  P f_,e_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(f_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T1 = CALL1(1,VARREF(Ytail),e_);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_application),f_,T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_list_210) {
  P f_,e_,r_,tailQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(f_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T2 = CALL1(1,VARREF(YevalSastYreference_binding),f_);
  T1 = CALL1(1,VARREF(YevalSmoduleYbinding_handler),T2);
  T0 = CALL3(1,T1,e_,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYmaybe_log_dependency) {
  P dependable_,dtype_;
  P T0,T1;
LINK_STACK();
  ARG(dependable_, 0);
  ARG(dtype_, 1);
  if (DYNREF(YevalSastYTcurrent_dependentT) != YPfalse) {
    CALL3(1,VARREF(YevalSdependencyYlog_dependency),dependable_,DYNREF(YevalSastYTcurrent_dependentT),dtype_);
    T1 = CALL1(1,VARREF(YevalSmoduleYtransaction_register_dependent),DYNREF(YevalSastYTcurrent_dependentT));
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYmacro_expander) {
  P macro_binding_;
  P T0;
LINK_STACK();
  ARG(macro_binding_, 0);
  CALL2(1,VARREF(YevalSastYmaybe_log_dependency),macro_binding_,VARREF(YevalSdependencyYDexpansion_parse_dependency));
  T0 = CALL1(1,VARREF(YevalSmoduleYbinding_handler),macro_binding_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_list_213) {
  P f_,e_,r_,tailQ_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(f_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T3 = CALL1(1,VARREF(YevalSastYreference_binding),f_);
  T2 = CALL1(1,VARREF(YevalSastYmacro_expander),T3);
  T1 = CALL3(1,T2,e_,r_,tailQ_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_214) {
  P e_,r_,tailQ_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T0 = CALL2(1,VARREF(YevalSastYobjectify_symbol),e_,r_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_215) {
  P e_,r_,tailQ_;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
UNLINK_STACK();
  QRET(e_);
}

LOCCODEDEF(fun_objectify_216) {
  P e_,r_,tailQ_;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
UNLINK_STACK();
  QRET(e_);
}

LOCCODEDEF(fun_objectify_217) {
  P e_,r_,tailQ_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),e_,r_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_218) {
  P e_,r_,tailQ_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),e_,r_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_quotation_219) {
  P value_,r_;
  P T0;
LINK_STACK();
  ARG(value_, 0);
  ARG(r_, 1);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),value_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_quotation_220) {
  P value_,r_;
  P T0;
LINK_STACK();
  ARG(value_, 0);
  ARG(r_, 1);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLimmediate_constantG),VARREF(YevalSastYconstant_value),value_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_quotation_221) {
  P value_,r_;
  P T0;
LINK_STACK();
  ARG(value_, 0);
  ARG(r_, 1);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLimmediate_constantG),VARREF(YevalSastYconstant_value),value_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_raw_222) {
  P value_,r_;
  P T0;
LINK_STACK();
  ARG(value_, 0);
  ARG(r_, 1);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLraw_constantG),VARREF(YevalSastYconstant_value),value_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_boundQ_223) {
  P e_,default_,r_,tailQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(e_, 0);
  ARG(default_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T1 = CALL2(1,VARREF(YevalSastYobjectify_symbol),e_,r_);
  T2 = CALL3(1,VARREF(YevalSastYobjectify),default_,r_,YPfalse);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLboundQG),VARREF(YevalSastYboundQ_reference),T1,VARREF(YevalSastYboundQ_default),T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_compile_time_224) {
  P program_,r_,tailQ_,rtQ_;
  P astF4076;
  P target_envF4075;
  P syntax_envF4074;
  P modF4073;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(program_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  ARG(rtQ_, 3);
  T8 = CALL1(1,VARREF(YevalSmoduleYfind_environment_module),r_);
  modF4073 = T8;
  T7 = CALL1(1,VARREF(YevalSmoduleYmodule_syntax_environment),modF4073);
  syntax_envF4074 = T7;
  T6 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),modF4073);
  target_envF4075 = T6;
  T5 = CALL3(1,VARREF(YevalSastYobjectify),program_,syntax_envF4074,tailQ_);
  astF4076 = T5;
  CALL1(1,VARREF(YevalSastYast_evaluate),astF4076);
  if (rtQ_ != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSlogYNEE),syntax_envF4074,target_envF4075);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T3 = CALL3(1,VARREF(YevalSastYobjectify),program_,r_,tailQ_);
    T0 = T3;
  } else {
    T4 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
    T0 = T4;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_alternative_225) {
  P t_,c_,a_,r_,tailQ_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(t_, 0);
  ARG(c_, 1);
  ARG(a_, 2);
  ARG(r_, 3);
  ARG(tailQ_, 4);
  T1 = CALL3(1,VARREF(YevalSastYobjectify),t_,r_,YPfalse);
  T2 = CALL3(1,VARREF(YevalSastYobjectify),c_,r_,tailQ_);
  T3 = CALL3(1,VARREF(YevalSastYobjectify),a_,r_,tailQ_);
  T0 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_condition),T1,VARREF(YevalSastYalternative_consequent),T2,VARREF(YevalSastYalternative_alternant),T3);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sequentialize_226) {
  P eT_;
  P eTF4078;
  P rF4077;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(eT_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),eT_);
  if (T1 != YPfalse) {
    T2 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Ytail),eT_);
    T4 = CALL1(1,VARREF(YgooSmacrosYnulQ),T5);
    if (T4 != YPfalse) {
      T6 = CALL1(1,VARREF(Yhead),eT_);
      T3 = T6;
    } else {
      T14 = CALL1(1,VARREF(YgooScolsScolYnul),VARREF(YevalSastYLsequentialG));
      rF4077 = T14;
      eTF4078 = eT_;
      LOOP_181: {
        P a181_0,a181_1;
        T8 = CALL1(1,VARREF(YgooSmacrosYnulQ),eTF4078);
        if (T8 != YPfalse) {
          T9 = CALL1(1,VARREF(YgooSmacrosYrevX),rF4077);
          T7 = T9;
        } else {
          T12 = CALL1(1,VARREF(Yhead),eTF4078);
          T11 = CALL2(1,VARREF(YevalSastYsequential),T12,rF4077);
          T13 = CALL1(1,VARREF(Ytail),eTF4078);
          a181_0 = T11;
          a181_1 = T13;
          rF4077 = a181_0;
          eTF4078 = a181_1;
          goto LOOP_181;
          T7 = T10;
        }
      }
      T3 = T7;
    }
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_transform_defs_227) {
  P eT_;
  P eF4079;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(eT_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),eT_);
  if (T1 != YPfalse) {
    T0 = Ynil;
  } else {
    T22 = CALL1(1,VARREF(Yhead),eT_);
    eF4079 = T22;
    T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_defQ),eF4079);
    if (T3 != YPfalse) {
      T7 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
      T13 = CALL1(1,VARREF(YevalSsyntaxYsexpr_def_variable),eF4079);
      T12 = CALL1(1,VARREF(Ylst),T13);
      T15 = CALL1(1,VARREF(YevalSsyntaxYsexpr_def_value),eF4079);
      T14 = CALL1(1,VARREF(Ylst),T15);
      T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,LITREF(lit_8));
      T10 = CALL1(1,VARREF(Ylst),T11);
      T9 = CALL2(1,VARREF(YgooSmacrosYcat),T10,LITREF(lit_8));
      T8 = CALL1(1,VARREF(Ylst),T9);
      T17 = CALL1(1,VARREF(Ytail),eT_);
      T16 = CALL1(1,VARREF(YevalSastYtransform_defs),T17);
      T6 = CALL4(1,VARREF(YgooSmacrosYcat),T7,T8,T16,LITREF(lit_8));
      T5 = CALL1(1,VARREF(Ylst),T6);
      T4 = CALL2(1,VARREF(YgooSmacrosYcat),T5,LITREF(lit_8));
      T2 = T4;
    } else {
      T19 = CALL1(1,VARREF(Ylst),eF4079);
      T21 = CALL1(1,VARREF(Ytail),eT_);
      T20 = CALL1(1,VARREF(YevalSastYtransform_defs),T21);
      T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,LITREF(lit_8));
      T2 = T18;
    }
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_sequential_228) {
  P eT_,r_,tailQ_;
  P astsF4084;
  P headF4083;
  P tailQF4082;
  P eTF4081;
  P resF4080;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(eT_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  resF4080 = Ynil;
  T12 = CALL1(1,VARREF(YevalSastYtransform_defs),eT_);
  eTF4081 = T12;
  LOOP_182: {
    P a182_0,a182_1;
    T2 = CALL1(1,VARREF(YgooSmacrosYnulQ),eTF4081);
    if (T2 != YPfalse) {
      T3 = CALL1(1,VARREF(YgooSmacrosYrevX),resF4080);
      T1 = T3;
    } else {
      T11 = CALL1(1,VARREF(Ytail),eTF4081);
      T10 = CALL1(1,VARREF(YgooSmacrosYnulQ),T11);
      if (T10 != YPfalse) {
        T9 = tailQ_;
      } else {
        T9 = YPfalse;
      }
      tailQF4082 = T9;
      T8 = CALL1(1,VARREF(Yhead),eTF4081);
      T7 = CALL3(1,VARREF(YevalSastYobjectify),T8,r_,tailQF4082);
      headF4083 = T7;
      T5 = CALL2(1,VARREF(YgooSmacrosYpair),headF4083,resF4080);
      T6 = CALL1(1,VARREF(Ytail),eTF4081);
      a182_0 = T5;
      a182_1 = T6;
      resF4080 = a182_0;
      eTF4081 = a182_1;
      goto LOOP_182;
      T1 = T4;
    }
  }
  astsF4084 = T1;
  T0 = CALL1(1,VARREF(YevalSastYsequentialize),astsF4084);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_229) {
  P e_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),e_,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_application_230) {
  P ff_,eT_,r_,tailQ_;
  P eeTF4085;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T3 = FUNFAB(fun_229,1,r_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),T3,eT_);
  T1 = CALL1(1,VARREF(YevalSastYconvert2arguments),T2);
  eeTF4085 = T1;
  T0 = CALL4(1,VARREF(YevalSastYprocess_closed_application),ff_,eeTF4085,r_,tailQ_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_231) {
  P e_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),e_,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_application_232) {
  P ff_,eT_,r_,tailQ_;
  P primF4088;
  P fvfF4087;
  P eeTF4086;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T8 = FUNFAB(fun_231,1,r_);
  T7 = CALL2(1,VARREF(YgooSmacrosYmap),T8,eT_);
  T6 = CALL1(1,VARREF(YevalSastYconvert2arguments),T7);
  eeTF4086 = T6;
  T5 = CALL1(1,VARREF(YevalSastYreference_binding),ff_);
  fvfF4087 = T5;
  T4 = CALL1(1,VARREF(YevalSmoduleYbinding_prop),fvfF4087);
  primF4088 = T4;
  if (primF4088 != YPfalse) {
    T2 = CALL1(1,VARREF(YevalSastYast_copy),primF4088);
    T1 = CALL4(1,VARREF(YevalSastYprocess_closed_application),T2,eeTF4086,r_,tailQ_);
    T0 = T1;
  } else {
    T3 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSastYapplication_binding),fvfF4087,VARREF(YevalSastYapplication_arguments),eeTF4086,VARREF(YevalSastYapplication_tailQ),tailQ_);
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_233) {
  P e_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),e_,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_application_234) {
  P ff_,eT_,r_,tailQ_;
  P eeTF4089;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(ff_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T5 = FUNFAB(fun_233,1,r_);
  T4 = CALL2(1,VARREF(YgooSmacrosYmap),T5,eT_);
  T3 = CALL1(1,VARREF(YevalSastYconvert2arguments),T4);
  eeTF4089 = T3;
  T0 = CALL2(1,VARREF(YisaQ),ff_,VARREF(YevalSastYLlocal_referenceG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YevalSastYreference_called_functionQ_setter),YPtrue,ff_);
  } else {
  }
  T2 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLregular_applicationG),VARREF(YevalSastYapplication_function),ff_,VARREF(YevalSastYapplication_arguments),eeTF4089,VARREF(YevalSastYapplication_tailQ),tailQ_);
UNLINK_STACK();
  RET(T2);
}

LOCCODEDEF(fun_process_closed_application_235) {
  P f_,eT_,r_,tailQ_;
  P bF4091;
  P vTF4090;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(f_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T16 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
  vTF4090 = T16;
  T15 = CALL1(1,VARREF(YevalSastYfunction_body),f_);
  bF4091 = T15;
  T1 = CALL1(1,VARREF(YevalSastYfunction_naryQ),f_);
  if (T1 != YPfalse) {
    T2 = CALL4(1,VARREF(YevalSastYprocess_nary_closed_application),f_,eT_,r_,tailQ_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YgooStypesYlen),eT_);
    T7 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
    T6 = CALL1(1,VARREF(YgooStypesYlen),T7);
    T4 = CALL2(1,VARREF(YgooSlogYE),T5,T6);
    if (T4 != YPfalse) {
      T10 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_primitiveG));
      if (T10 != YPfalse) {
        T9 = VARREF(YevalSastYLlow_letG);
      } else {
        T9 = VARREF(YevalSastYLfix_letG);
      }
      T11 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
      T12 = CALL1(1,VARREF(YevalSastYfunction_specs),f_);
      T13 = CALL1(1,VARREF(YevalSastYfunction_body),f_);
      T8 = CALLN(1,VARREF(Ynew),9,T9,VARREF(YevalSastYfix_let_bindings),T11,VARREF(YevalSastYfix_let_types),T12,VARREF(YevalSastYfix_let_arguments),eT_,VARREF(YevalSastYfix_let_body),T13);
      T3 = T8;
    } else {
      T14 = CALL3(1,VARREF(YevalSdependencyYast_error),LITREF(lit_489),f_,eT_);
      T3 = T14;
    }
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_pack_args_236) {
  P eT_,vT_,tT_;
  P dotted_typeF4093;
  P varF4092;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(eT_, 0);
  ARG(vT_, 1);
  ARG(tT_, 2);
  T17 = CALL1(1,VARREF(Yhead),vT_);
  varF4092 = T17;
  T1 = CALL1(1,VARREF(YevalSastYbinding_dottedQ),varF4092);
  if (T1 != YPfalse) {
    T7 = CALL3(1,VARREF(YevalSastYobjectify),LITREF(lit_494),FREEREF(0),YPfalse);
    dotted_typeF4093 = T7;
    CALL2(1,VARREF(YevalSastYbinding_dottedQ_setter),YPfalse,varF4092);
    CALL2(1,VARREF(YevalSmoduleYbinding_type_setter),dotted_typeF4093,varF4092);
    CALL2(1,VARREF(Yhead_setter),dotted_typeF4093,tT_);
    T5 = CALL1(1,VARREF(Ylst),LITREF(lit_495));
    T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,eT_,LITREF(lit_8));
    T3 = CALL3(1,VARREF(YevalSastYobjectify),T4,FREEREF(0),YPfalse);
    T6 = CALL1(1,VARREF(YgooScolsScolYnul),VARREF(YevalSastYLargumentsG));
    T2 = CALL2(1,VARREF(YevalSastYarguments),T3,T6);
    T0 = T2;
  } else {
    T9 = CALL1(1,VARREF(YgooSmacrosYnulQ),eT_);
    if (T9 != YPfalse) {
      T10 = CALL3(1,VARREF(YevalSdependencyYast_error),LITREF(lit_496),FREEREF(1),eT_);
      T8 = T10;
    } else {
      T12 = CALL1(1,VARREF(Yhead),eT_);
      T14 = CALL1(1,VARREF(Ytail),eT_);
      T15 = CALL1(1,VARREF(Ytail),vT_);
      T16 = CALL1(1,VARREF(Ytail),tT_);
      T13 = CALL3(0,FREEREF(2),T14,T15,T16);
      T11 = CALL2(1,VARREF(YevalSastYarguments),T12,T13);
      T8 = T11;
    }
    T0 = T8;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_process_nary_closed_application_237) {
  P f_,eT_,r_,tailQ_;
  P oF4096;
  P vTF4095;
  P pack_argsF4094;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(f_, 0);
  ARG(eT_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T6 = FUNSHELL(1,fun_pack_args_236,3);
  pack_argsF4094 = T6;
  FUNINIT(pack_argsF4094, 3,r_,f_,pack_argsF4094);
  T5 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
  vTF4095 = T5;
  T1 = CALL1(1,VARREF(YevalSastYfunction_specs),f_);
  T3 = CALL1(1,VARREF(YevalSastYfunction_specs),f_);
  T2 = CALL3(1,pack_argsF4094,eT_,vTF4095,T3);
  T4 = CALL1(1,VARREF(YevalSastYfunction_body),f_);
  T0 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_bindings),vTF4095,VARREF(YevalSastYfix_let_types),T1,VARREF(YevalSastYfix_let_arguments),T2,VARREF(YevalSastYfix_let_body),T4);
  oF4096 = T0;
UNLINK_STACK();
  RET(oF4096);
}

LOCCODEDEF(fun_convert2arguments_238) {
  P eT_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(eT_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),eT_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooScolsScolYnul),VARREF(YevalSastYLargumentsG));
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),eT_);
    T6 = CALL1(1,VARREF(Ytail),eT_);
    T5 = CALL1(1,VARREF(YevalSastYconvert2arguments),T6);
    T3 = CALL2(1,VARREF(YevalSastYarguments),T4,T5);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_assignment_239) {
  P binding_,e_,r_,tailQ_;
  P opF4097;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(binding_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_operator),binding_);
  opF4097 = T9;
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variableQ),opF4097);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_fab_setter_name),opF4097);
    T4 = CALL3(1,VARREF(YevalSastYobjectify),T5,r_,YPfalse);
    T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_operands),binding_);
    T6 = CALL2(1,VARREF(YgooSmacrosYpair),e_,T7);
    T3 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_application),T4,T6);
    T2 = CALL3(1,VARREF(YevalSastYobjectify),T3,r_,tailQ_);
    T0 = T2;
  } else {
    T8 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_501),e_);
    T0 = T8;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_assignment_240) {
  P binding_,e_,r_,tailQ_;
  P valF4099;
  P refF4098;
  P T0,T1,T2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T2 = CALL3(1,VARREF(YevalSastYobjectify),binding_,r_,YPfalse);
  refF4098 = T2;
  T1 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  valF4099 = T1;
  T0 = CALL2(1,VARREF(YevalSastYobjectify_assignment_using),refF4098,valF4099);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_assignment_using_241) {
  P ref_,val_;
  P T0,T1;
LINK_STACK();
  ARG(ref_, 0);
  ARG(val_, 1);
  T0 = CALL1(1,VARREF(YevalSastYreference_binding),ref_);
  CALL2(1,VARREF(YevalSastYbinding_mutableQ_setter),YPtrue,T0);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLlocal_assignmentG),VARREF(YevalSastYassignment_reference),ref_,VARREF(YevalSastYassignment_form),val_);
UNLINK_STACK();
  RET(T1);
}

LOCCODEDEF(fun_objectify_assignment_using_242) {
  P ref_,val_;
  P T0,T1;
LINK_STACK();
  ARG(ref_, 0);
  ARG(val_, 1);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),ref_);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLglobal_assignmentG),VARREF(YevalSastYassignment_binding),T1,VARREF(YevalSastYassignment_form),val_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_assignment_using_243) {
  P ref_,val_;
  P T0,T1;
LINK_STACK();
  ARG(ref_, 0);
  ARG(val_, 1);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),ref_);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLdynamic_assignmentG),VARREF(YevalSastYassignment_binding),T1,VARREF(YevalSastYassignment_form),val_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_assignment_using_244) {
  P ref_,val_;
  P T0,T1;
LINK_STACK();
  ARG(ref_, 0);
  ARG(val_, 1);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),ref_);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLruntime_assignmentG),VARREF(YevalSastYassignment_binding),T1,VARREF(YevalSastYassignment_form),val_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_assignment_using_245) {
  P ref_,val_;
  P T0,T1;
LINK_STACK();
  ARG(ref_, 0);
  ARG(val_, 1);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),ref_);
  T0 = CALL2(1,VARREF(YevalSmoduleYnamespace_error),LITREF(lit_509),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYupdate_binding_kind) {
  P binding_,new_kind_;
  P tmpF4100;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(binding_, 0);
  ARG(new_kind_, 1);
  T4 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),binding_);
  T3 = CALL2(1,VARREF(YgooSlogYNEE),T4,LITREF(lit_512));
  tmpF4100 = T3;
  if (tmpF4100 != YPfalse) {
    T1 = tmpF4100;
  } else {
    T2 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_513));
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T5 = CALL2(1,VARREF(YevalSmoduleYbinding_kind_setter),new_kind_,binding_);
    T0 = T5;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_512));
    if (T7 != YPfalse) {
      T6 = YPtrue;
    } else {
      T9 = CALL2(1,VARREF(YgooSmacrosYEE),new_kind_,LITREF(lit_514));
      if (T9 != YPfalse) {
        T8 = YPtrue;
      } else {
        if (YPtrue != YPfalse) {
          T12 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
          T11 = CALL3(1,VARREF(YevalSmoduleYnamespace_error),LITREF(lit_515),T12,new_kind_);
          T10 = T11;
        } else {
          T10 = YPfalse;
        }
        T8 = T10;
      }
      T6 = T8;
    }
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_define_binding_247) {
  P r_,name_,defining_methodQ_,kind_;
  P bindingF4108;
  P bindingF4107;
  P modF4106;
  P foreignQF4105;
  P tmpF4104;
  P modF4103;
  P grF4102;
  P existing_bindingF4101;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(r_, 0);
  ARG(name_, 1);
  ARG(defining_methodQ_, 2);
  ARG(kind_, 3);
  T15 = CALL2(1,VARREF(YevalSmoduleYfind_binding),name_,r_);
  existing_bindingF4101 = T15;
  T14 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  grF4102 = T14;
  T13 = CALL1(1,VARREF(YevalSmoduleYenvironment_module),grF4102);
  modF4103 = T13;
  if (existing_bindingF4101 != YPfalse) {
    T10 = CALL2(1,VARREF(YevalSmoduleYbinding_native_toQ),existing_bindingF4101,modF4103);
    tmpF4104 = T10;
    if (tmpF4104 != YPfalse) {
      T9 = tmpF4104;
    } else {
      T9 = defining_methodQ_;
    }
    T8 = CALL1(1,VARREF(Ynot),T9);
    foreignQF4105 = T8;
    T1 = CALL1(1,VARREF(YevalSmoduleYbinding_freeQ),existing_bindingF4101);
    if (T1 != YPfalse) {
      CALL2(1,VARREF(YevalSmoduleYbinding_freeQ_setter),YPfalse,existing_bindingF4101);
      if (foreignQF4105 != YPfalse) {
        T3 = CALL1(1,VARREF(YevalSmoduleYtransaction_register_implemented_binding),existing_bindingF4101);
        T2 = T3;
      } else {
        T2 = YPfalse;
      }
    } else {
      if (foreignQF4105 != YPfalse) {
        T6 = CALL1(1,VARREF(YevalSmoduleYmodule_name),modF4103);
        T7 = CALL1(1,VARREF(YevalSmoduleYbinding_module_name),existing_bindingF4101);
        T5 = CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_518),T6,name_,T7);
        T4 = T5;
      } else {
        T4 = YPfalse;
      }
    }
    CALL2(1,VARREF(YevalSdependencyYinvalidate_dependents),existing_bindingF4101,VARREF(YevalSdependencyYDall_dependency_types));
    CALL2(1,VARREF(YevalSastYupdate_binding_kind),existing_bindingF4101,kind_);
    T0 = existing_bindingF4101;
  } else {
    T12 = CALL1(1,VARREF(YevalSmoduleYfind_environment_module),r_);
    modF4106 = T12;
    T11 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),kind_,VARREF(YevalSmoduleYbinding_name),name_,VARREF(YevalSmoduleYbinding_freeQ),YPfalse,VARREF(YevalSmoduleYbinding_module),modF4106);
    bindingF4107 = T11;
    CALL2(1,VARREF(YevalSmoduleYinsert_globalX),bindingF4107,grF4102);
    T0 = bindingF4107;
  }
  bindingF4108 = T0;
  CALL2(1,VARREF(YevalSmoduleYregister_referenced_binding),modF4103,bindingF4108);
UNLINK_STACK();
  QRET(bindingF4108);
}

LOCCODEDEF(fun_objectify_definition_248) {
  P type_,kind_,var_,e_,r_;
  P defnF4111;
  P bindingF4110;
  P nameF4109;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(type_, 0);
  ARG(kind_, 1);
  ARG(var_, 2);
  ARG(e_, 3);
  ARG(r_, 4);
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variable_name),var_);
  nameF4109 = T3;
  T2 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,nameF4109,YPfalse,kind_);
  bindingF4110 = T2;
  T1 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  T0 = CALL5(1,VARREF(Ynew),type_,VARREF(YevalSastYassignment_binding),bindingF4110,VARREF(YevalSastYassignment_form),T1);
  defnF4111 = T0;
UNLINK_STACK();
  QRET(defnF4111);
}

LOCCODEDEF(fun_objectify_variable_definition_249) {
  P var_,e_,r_;
  P T0;
LINK_STACK();
  ARG(var_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  T0 = CALL5(1,VARREF(YevalSastYobjectify_definition),VARREF(YevalSastYLvariable_definitionG),LITREF(lit_514),var_,e_,r_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_dynamic_definition_250) {
  P var_,e_,r_;
  P T0;
LINK_STACK();
  ARG(var_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  T0 = CALL5(1,VARREF(YevalSastYobjectify_definition),VARREF(YevalSastYLdynamic_definitionG),LITREF(lit_525),var_,e_,r_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_expand_251) {
  P x_,r_,tailQ_;
  P expF4112;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  if (VARREF(YevalSastYTmacro_tracingQT) != YPfalse) {
    CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_530));
    CALL2(1,VARREF(YgooSioSwriteYwrite),VARREF(YgooSioSportYout),x_);
    T0 = CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_531));
  } else {
  }
  T3 = CALL1(1,FREEREF(0),x_);
  T2 = CALL2(1,VARREF(YgooScolsSlstYline_list_of),x_,T3);
  expF4112 = T2;
  if (VARREF(YevalSastYTmacro_tracingQT) != YPfalse) {
    CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_532));
    CALL2(1,VARREF(YgooSioSwriteYwrite),VARREF(YgooSioSportYout),expF4112);
    T1 = CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_533));
  } else {
  }
UNLINK_STACK();
  QRET(expF4112);
}

FUNCODEDEF(YevalSastYPPPmacro) {
  P binding_,expander_;
  P T0;
LINK_STACK();
  ARG(binding_, 0);
  ARG(expander_, 1);
  T0 = FUNFAB(fun_expand_251,1,expander_);
  CALL2(1,VARREF(YevalSmoduleYbinding_handler_setter),T0,binding_);
UNLINK_STACK();
  RET(binding_);
}

FUNCODEDEF(YPPmacro) {
  P modname_,name_,expander_,env_or_false_;
  P bindingF4115;
  P envF4114;
  P tmpF4113;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(modname_, 0);
  ARG(name_, 1);
  ARG(expander_, 2);
  ARG(env_or_false_, 3);
  tmpF4113 = env_or_false_;
  if (tmpF4113 != YPfalse) {
    T2 = tmpF4113;
  } else {
    T3 = CALL1(1,VARREF(YevalSmoduleYunchecked_runtime_environment),modname_);
    T2 = T3;
  }
  envF4114 = T2;
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),envF4114,name_,YPfalse,LITREF(lit_536));
  bindingF4115 = T1;
  T0 = CALL2(1,VARREF(YevalSastYPPPmacro),bindingF4115,expander_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_syntax_definition_254) {
  P name_,e_,r_,rtQ_;
  P bindingF4121;
  P modnameF4120;
  P expanderF4119;
  P ast_expanderF4118;
  P syntax_envF4117;
  P sep_expanderF4116;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(name_, 0);
  ARG(e_, 1);
  ARG(r_, 2);
  ARG(rtQ_, 3);
  T14 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_macro_function),name_,e_);
  sep_expanderF4116 = T14;
  T13 = CALL1(1,VARREF(YevalSmoduleYfind_syntax_environment),r_);
  syntax_envF4117 = T13;
  T12 = CALL3(1,VARREF(YevalSastYobjectify),sep_expanderF4116,syntax_envF4117,YPfalse);
  ast_expanderF4118 = T12;
  T11 = CALL1(1,VARREF(YevalSastYast_evaluate),ast_expanderF4118);
  expanderF4119 = T11;
  T10 = CALL1(1,VARREF(YevalSmoduleYfind_environment_module),r_);
  T9 = CALL1(1,VARREF(YevalSmoduleYmodule_name),T10);
  modnameF4120 = T9;
  T8 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  T7 = CALL4(1,VARREF(YPPmacro),modnameF4120,name_,expanderF4119,T8);
  bindingF4121 = T7;
  T1 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  T0 = CALL2(1,VARREF(YgooSlogYNEE),syntax_envF4117,T1);
  if (T0 != YPfalse) {
    T2 = CALL2(1,VARREF(YevalSmoduleYinsert_globalX),bindingF4121,syntax_envF4117);
  } else {
  }
  if (rtQ_ != YPfalse) {
    T5 = CALL3(1,VARREF(YevalSastYobjectify),sep_expanderF4116,r_,YPfalse);
    T4 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_macro_definitionG),VARREF(YevalSastYassignment_binding),bindingF4121,VARREF(YevalSastYassignment_form),T5);
    T3 = T4;
  } else {
    T6 = CALL2(1,VARREF(YevalSastYobjectify_quotation),YPfalse,r_);
    T3 = T6;
  }
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_objectify_function_definition_255) {
  P name_,mods_,e_,r_;
  P defnF4124;
  P fF4123;
  P bindingF4122;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(name_, 0);
  ARG(mods_, 1);
  ARG(e_, 2);
  ARG(r_, 3);
  T3 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_514));
  bindingF4122 = T3;
  T2 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  fF4123 = T2;
  CALL2(1,VARREF(YevalSastYfunction_binding_setter),bindingF4122,fF4123);
  CALL2(1,VARREF(YevalSastYfunction_adjectives_setter),mods_,fF4123);
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T0,fF4123);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_function_definitionG),VARREF(YevalSastYassignment_binding),bindingF4122,VARREF(YevalSastYassignment_form),fF4123);
  defnF4124 = T1;
UNLINK_STACK();
  RET(defnF4124);
}

FUNCODEDEF(YevalSastYmodule_binding) {
  P kind_;
  P T0;
LINK_STACK();
  ARG(kind_, 0);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),kind_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_function_inlineableQ_257) {
  P e_;
  P tmpF4125;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(e_, 0);
  T4 = CALL1(1,VARREF(YevalSastYfunction_adjectives),e_);
  T3 = CALL2(1,VARREF(YgooScolsScolYmemQ),T4,LITREF(lit_545));
  tmpF4125 = T3;
  if (tmpF4125 != YPfalse) {
    T0 = tmpF4125;
  } else {
    T2 = CALL1(1,VARREF(YevalSastYfunction_adjectives),e_);
    T1 = CALL2(1,VARREF(YgooScolsScolYmemQ),T2,LITREF(lit_546));
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_primitive_definition_258) {
  P name_,mods_,sig_,body_,r_;
  P defnF4131;
  P formF4130;
  P bodyF4129;
  P new_rF4128;
  P signatureF4127;
  P bindingF4126;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(name_, 0);
  ARG(mods_, 1);
  ARG(sig_, 2);
  ARG(body_, 3);
  ARG(r_, 4);
  T9 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_549));
  bindingF4126 = T9;
  T8 = CALL2(1,VARREF(YevalSastYobjectify_signature),sig_,r_);
  signatureF4127 = T8;
  T7 = CALL1(1,VARREF(YevalSastYsignature_bindings),signatureF4127);
  T6 = CALL2(1,VARREF(YevalSastYr_extendT),r_,T7);
  new_rF4128 = T6;
  T5 = CALL3(1,VARREF(YevalSastYobjectify_sequential),body_,new_rF4128,YPtrue);
  bodyF4129 = T5;
  T4 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  T3 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLast_primitiveG),VARREF(YevalSastYfunction_binding),bindingF4126,VARREF(YevalSastYfunction_adjectives),mods_,VARREF(YevalSastYfunction_debug_name),T4,VARREF(YevalSastYfunction_signature),signatureF4127,VARREF(YevalSastYfunction_body),bodyF4129);
  formF4130 = T3;
  T0 = CALL2(1,VARREF(YgooScolsScolYmemQ),mods_,LITREF(lit_545));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YevalSmoduleYbinding_prop_setter),formF4130,bindingF4126);
  } else {
  }
  T2 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_primitive_definitionG),VARREF(YevalSastYassignment_binding),bindingF4126,VARREF(YevalSastYassignment_form),formF4130);
  defnF4131 = T2;
UNLINK_STACK();
  RET(defnF4131);
}

LOCCODEDEF(fun_objectify_generic_definition_259) {
  P name_,sig_,r_;
  P defnF4135;
  P formF4134;
  P signatureF4133;
  P bindingF4132;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(name_, 0);
  ARG(sig_, 1);
  ARG(r_, 2);
  T4 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPfalse,LITREF(lit_514));
  bindingF4132 = T4;
  T3 = CALL2(1,VARREF(YevalSastYobjectify_signature),sig_,r_);
  signatureF4133 = T3;
  T2 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  T1 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLast_genericG),VARREF(YevalSastYfunction_binding),bindingF4132,VARREF(YevalSastYfunction_debug_name),T2,VARREF(YevalSastYfunction_signature),signatureF4133);
  formF4134 = T1;
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_generic_definitionG),VARREF(YevalSastYassignment_binding),bindingF4132,VARREF(YevalSastYassignment_form),formF4134);
  defnF4135 = T0;
UNLINK_STACK();
  RET(defnF4135);
}

LOCCODEDEF(fun_objectify_method_definition_260) {
  P name_,mods_,e_,r_;
  P defnF4141;
  P formF4140;
  P callF4139;
  P metF4138;
  P genF4137;
  P bindingF4136;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(name_, 0);
  ARG(mods_, 1);
  ARG(e_, 2);
  ARG(r_, 3);
  T9 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,name_,YPtrue,LITREF(lit_514));
  bindingF4136 = T9;
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_554));
  T7 = CALL1(1,VARREF(Ylst),name_);
  T8 = CALL1(1,VARREF(Ylst),YPfalse);
  T5 = CALL4(1,VARREF(YgooSmacrosYcat),T6,T7,T8,LITREF(lit_8));
  genF4137 = T5;
  T4 = CALL3(1,VARREF(YevalSastYobjectify),e_,r_,YPfalse);
  metF4138 = T4;
  T3 = CALL3(1,VARREF(Ylst),LITREF(lit_555),genF4137,metF4138);
  callF4139 = T3;
  T2 = CALL3(1,VARREF(YevalSastYobjectify),callF4139,r_,YPfalse);
  formF4140 = T2;
  T1 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLast_method_definitionG),VARREF(YevalSastYassignment_binding),bindingF4136,VARREF(YevalSastYassignment_form),formF4140);
  defnF4141 = T1;
  CALL2(1,VARREF(YevalSastYfunction_binding_setter),name_,metF4138);
  CALL2(1,VARREF(YevalSastYfunction_adjectives_setter),mods_,metF4138);
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),name_,r_);
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T0,metF4138);
UNLINK_STACK();
  RET(defnF4141);
}

LOCCODEDEF(fun_261) {
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  DYNSET(YgooSioSwriteYTmax_print_lengthT,VARREF(YDmax_int));
  if (DYNREF(YevalSastYTrecord_sourceQT) != YPfalse) {
    T4 = CALL1(1,VARREF(Ylst),LITREF(lit_560));
    T5 = CALL1(1,VARREF(Ylst),FREEREF(0));
    T3 = CALL4(1,VARREF(YgooSmacrosYcat),T4,T5,FREEREF(1),LITREF(lit_8));
    T2 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_559),T3);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),T1,FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_262) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YgooSioSwriteYTmax_print_lengthT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_263) {
  P x_1504F4142;
  P T0,T1,T2;
LINK_STACK();
  DYNSET(YgooSioSwriteYTmax_print_depthT,VARREF(YDmax_int));
  x_1504F4142 = DYNREF(YgooSioSwriteYTmax_print_lengthT);
  T1 = FUNFAB(fun_261,3,FREEREF(0),FREEREF(1),FREEREF(2));
  T2 = FUNFAB(fun_262,1,x_1504F4142);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_264) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YgooSioSwriteYTmax_print_depthT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_function_source_265) {
  P sig_,body_,r_;
  P x_1503F4143;
  P T0,T1,T2;
LINK_STACK();
  ARG(sig_, 0);
  ARG(body_, 1);
  ARG(r_, 2);
  x_1503F4143 = DYNREF(YgooSioSwriteYTmax_print_depthT);
  T1 = FUNFAB(fun_263,3,sig_,body_,r_);
  T2 = FUNFAB(fun_264,1,x_1503F4143);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_266) {
  P astF4146;
  P new_rF4145;
  P signatureF4144;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  T5 = CALL2(1,VARREF(YevalSastYobjectify_signature),FREEREF(0),FREEREF(1));
  signatureF4144 = T5;
  T4 = CALL1(1,VARREF(YevalSastYsignature_bindings),signatureF4144);
  T3 = CALL2(1,VARREF(YevalSastYr_extendT),FREEREF(1),T4);
  new_rF4145 = T3;
  T2 = CALL3(1,VARREF(YevalSastYobjectify_sequential),FREEREF(2),new_rF4145,YPtrue);
  astF4146 = T2;
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),YPfalse,FREEREF(1));
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T0,FREEREF(3));
  CALL2(1,VARREF(YevalSastYfunction_signature_setter),signatureF4144,FREEREF(3));
  CALL2(1,VARREF(YevalSastYfunction_body_setter),astF4146,FREEREF(3));
  T1 = CALL3(1,VARREF(YevalSastYobjectify_function_source),FREEREF(0),FREEREF(2),FREEREF(1));
  CALL2(1,VARREF(YevalSastYfunction_source_setter),T1,FREEREF(3));
UNLINK_STACK();
  QRET(FREEREF(3));
}

LOCCODEDEF(fun_267) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YevalSastYTcurrent_dependentT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_function_using_268) {
  P met_,sig_,body_,r_,tailQ_;
  P x_1505F4147;
  P T0,T1,T2;
LINK_STACK();
  ARG(met_, 0);
  ARG(sig_, 1);
  ARG(body_, 2);
  ARG(r_, 3);
  ARG(tailQ_, 4);
  x_1505F4147 = DYNREF(YevalSastYTcurrent_dependentT);
  DYNSET(YevalSastYTcurrent_dependentT,met_);
  T1 = FUNFAB(fun_266,4,sig_,r_,body_,met_);
  T2 = FUNFAB(fun_267,1,x_1505F4147);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_function_269) {
  P sig_,body_,line_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(sig_, 0);
  ARG(body_, 1);
  ARG(line_, 2);
  ARG(r_, 3);
  ARG(tailQ_, 4);
  T1 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLast_methodG),VARREF(YevalSastYprogram_line),line_);
  T0 = CALL5(1,VARREF(YevalSastYobjectify_function_using),T1,sig_,body_,r_,tailQ_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_signature_270) {
  P sig_,r_;
  P bindingF4164;
  P typeF4163;
  P stypeF4162;
  P dottedQF4161;
  P stypeF4160;
  P snameF4159;
  P paramF4158;
  P arityF4157;
  P valueF4156;
  P tmpF4155;
  P sexpr_valueF4154;
  P typesF4153;
  P namesF4152;
  P bindingsF4151;
  P naryQF4150;
  P paramsF4149;
  P sexpr_paramsF4148;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
LINK_STACK();
  ARG(sig_, 0);
  ARG(r_, 1);
  T30 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_parameters),sig_);
  sexpr_paramsF4148 = T30;
  paramsF4149 = sexpr_paramsF4148;
  naryQF4150 = YPfalse;
  bindingsF4151 = Ynil;
  T28 = CALL1(1,VARREF(YgooScolsScolYnul),VARREF(YevalSastYLfab_listG));
  namesF4152 = T28;
  T29 = CALL1(1,VARREF(YgooScolsScolYnul),VARREF(YevalSastYLfab_listG));
  typesF4153 = T29;
  LOOP_183: {
    P a183_0,a183_1,a183_2,a183_3,a183_4;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),paramsF4149);
    if (T1 != YPfalse) {
      T15 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_value),sig_);
      sexpr_valueF4154 = T15;
      tmpF4155 = sexpr_valueF4154;
      if (tmpF4155 != YPfalse) {
        T13 = tmpF4155;
      } else {
        T14 = CALL1(1,VARREF(YevalSastYdefault_type),r_);
        T13 = T14;
      }
      T12 = CALL3(1,VARREF(YevalSastYobjectify),T13,r_,YPfalse);
      valueF4156 = T12;
      T10 = CALL1(1,VARREF(YgooStypesYlen),namesF4152);
      if (naryQF4150 != YPfalse) {
        T11 = YPint((P)1);
      } else {
        T11 = YPint((P)0);
      }
      T9 = CALL2(1,VARREF(YgooSmathY_),T10,T11);
      arityF4157 = T9;
      T3 = CALL1(1,VARREF(YgooSmacrosYrevX),bindingsF4151);
      T5 = CALL1(1,VARREF(YgooSmacrosYrevX),namesF4152);
      T4 = CALL2(1,VARREF(YevalSastYobjectify_quotation),T5,r_);
      T6 = CALL1(1,VARREF(YgooSmacrosYrevX),typesF4153);
      T7 = CALL3(1,VARREF(YevalSastYobjectify),naryQF4150,r_,YPfalse);
      T8 = CALL3(1,VARREF(YevalSastYobjectify),arityF4157,r_,YPfalse);
      T2 = CALLN(1,VARREF(Ynew),13,VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_bindings),T3,VARREF(YevalSastYsignature_names),T4,VARREF(YevalSastYsignature_specs),T6,VARREF(YevalSastYsignature_naryQ),T7,VARREF(YevalSastYsignature_arity),T8,VARREF(YevalSastYsignature_value),valueF4156);
      T0 = T2;
    } else {
      T27 = CALL1(1,VARREF(Yhead),paramsF4149);
      paramF4158 = T27;
      T26 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variable_name),paramF4158);
      snameF4159 = T26;
      T25 = CALL1(1,VARREF(YevalSsyntaxYsexpr_variable_type),paramF4158);
      stypeF4160 = T25;
      T24 = CALL2(1,VARREF(YgooSmacrosYEE),stypeF4160,VARREF(YevalSastYDsexpr_optionals_tag));
      dottedQF4161 = T24;
      if (dottedQF4161 != YPfalse) {
        T23 = VARREF(YevalSastYDsexpr_optionals_type_name);
      } else {
        T23 = stypeF4160;
      }
      stypeF4162 = T23;
      T22 = CALL3(1,VARREF(YevalSastYobjectify),stypeF4162,r_,YPfalse);
      typeF4163 = T22;
      T21 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSmoduleYbinding_name),snameF4159,VARREF(YevalSmoduleYbinding_type),typeF4163,VARREF(YevalSastYbinding_dottedQ),dottedQF4161);
      bindingF4164 = T21;
      T17 = CALL1(1,VARREF(Ytail),paramsF4149);
      T18 = CALL2(1,VARREF(YgooSmacrosYpair),bindingF4164,bindingsF4151);
      T19 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG),VARREF(Yhead),snameF4159,VARREF(Ytail),namesF4152);
      T20 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG),VARREF(Yhead),typeF4163,VARREF(Ytail),typesF4153);
      a183_0 = T17;
      a183_1 = dottedQF4161;
      a183_2 = T18;
      a183_3 = T19;
      a183_4 = T20;
      paramsF4149 = a183_0;
      naryQF4150 = a183_1;
      bindingsF4151 = a183_2;
      namesF4152 = a183_3;
      typesF4153 = a183_4;
      goto LOOP_183;
      T0 = T16;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_compute_local_reference_offsets_271) {
  P binding_,r_;
  P bindingsF4168;
  P jF4167;
  P rF4166;
  P iF4165;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(binding_, 0);
  ARG(r_, 1);
  iF4165 = YPint((P)0);
  rF4166 = r_;
  LOOP_184: {
    P a184_0,a184_1;
    T1 = CALL2(1,VARREF(YisaQ),rF4166,VARREF(YevalSmoduleYLstatic_local_environmentG));
    if (T1 != YPfalse) {
      jF4167 = YPint((P)0);
      T14 = CALL1(1,VARREF(YevalSmoduleYenvironment_bindings),rF4166);
      bindingsF4168 = T14;
      LOOP_185: {
        P a185_0,a185_1;
        T3 = CALL1(1,VARREF(YgooSmacrosYnulQ),bindingsF4168);
        if (T3 != YPfalse) {
          T5 = CALL2(1,VARREF(YgooSmathYA),iF4165,YPint((P)1));
          T6 = CALL1(1,VARREF(YevalSmoduleYenvironment_next),rF4166);
          a184_0 = T5;
          a184_1 = T6;
          iF4165 = a184_0;
          rF4166 = a184_1;
          goto LOOP_184;
          T2 = T4;
        } else {
          T9 = CALL1(1,VARREF(Yhead),bindingsF4168);
          T8 = CALL2(1,VARREF(YgooSmacrosYEE),T9,binding_);
          if (T8 != YPfalse) {
            T10 = CALL2(1,VARREF(Ytup),iF4165,jF4167);
            T7 = T10;
          } else {
            T12 = CALL2(1,VARREF(YgooSmathYA),jF4167,YPint((P)1));
            T13 = CALL1(1,VARREF(Ytail),bindingsF4168);
            a185_0 = T12;
            a185_1 = T13;
            jF4167 = a185_0;
            bindingsF4168 = a185_1;
            goto LOOP_185;
            T7 = T11;
          }
          T2 = T7;
        }
      }
      T0 = T2;
    } else {
      T16 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
      T15 = CALL3(1,VARREF(YevalSmoduleYnamespace_error),LITREF(lit_571),T16,rF4166);
      T0 = T15;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_binding_272) {
  P n_,b_,r_;
  P jF4171;
  P iF4170;
  P tup34F4169;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(n_, 0);
  ARG(b_, 1);
  ARG(r_, 2);
  T4 = CALL2(1,VARREF(YevalSastYcompute_local_reference_offsets),b_,r_);
  tup34F4169 = T4;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup34F4169,YPint((P)0));
  iF4170 = T3;
  T2 = CALL2(1,VARREF(YgooSmacrosYelt),tup34F4169,YPint((P)1));
  jF4171 = T2;
  T0 = CALL1(1,VARREF(YevalSastYbinding_value),b_);
  CALL1(1,VARREF(YevalSastYincf_ref_count),T0);
  T1 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_binding),b_,VARREF(YevalSastYreference_frame_number),iF4170,VARREF(YevalSastYreference_frame_offset),jF4171);
UNLINK_STACK();
  RET(T1);
}

LOCCODEDEF(fun_binding_reference_class_273) {
  P b_;
  P x_1507F4173;
  P x_1506F4172;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(b_, 0);
  T14 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),b_);
  x_1506F4172 = T14;
  x_1507F4173 = VARREF(YgooSmacrosYEE);
  T1 = CALL2(1,x_1507F4173,x_1506F4172,LITREF(lit_514));
  if (T1 != YPfalse) {
    T0 = VARREF(YevalSastYLglobal_referenceG);
  } else {
    T3 = CALL2(1,x_1507F4173,x_1506F4172,LITREF(lit_549));
    if (T3 != YPfalse) {
      T2 = VARREF(YevalSastYLpredefined_referenceG);
    } else {
      T5 = CALL2(1,x_1507F4173,x_1506F4172,LITREF(lit_512));
      if (T5 != YPfalse) {
        T4 = VARREF(YevalSastYLruntime_referenceG);
      } else {
        T7 = CALL2(1,x_1507F4173,x_1506F4172,LITREF(lit_525));
        if (T7 != YPfalse) {
          T6 = VARREF(YevalSastYLdynamic_referenceG);
        } else {
          T9 = CALL2(1,x_1507F4173,x_1506F4172,LITREF(lit_536));
          if (T9 != YPfalse) {
            T8 = VARREF(YevalSastYLmacro_referenceG);
          } else {
            T11 = CALL2(1,x_1507F4173,x_1506F4172,LITREF(lit_513));
            if (T11 != YPfalse) {
              T10 = VARREF(YevalSastYLmagic_referenceG);
            } else {
              T13 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),b_);
              T12 = CALL2(1,VARREF(YevalSdependencyYast_error),LITREF(lit_576),T13);
              T10 = T12;
            }
            T8 = T10;
          }
          T6 = T8;
        }
        T4 = T6;
      }
      T2 = T4;
    }
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_binding_274) {
  P n_,b_,r_;
  P LrefGF4174;
  P T0,T1;
LINK_STACK();
  ARG(n_, 0);
  ARG(b_, 1);
  ARG(r_, 2);
  CALL2(1,VARREF(YevalSmoduleYregister_referenced_binding),r_,b_);
  T1 = CALL1(1,VARREF(YevalSastYbinding_reference_class),b_);
  LrefGF4174 = T1;
  T0 = CALL3(1,VARREF(Ynew),LrefGF4174,VARREF(YevalSastYreference_binding),b_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_binding_275) {
  P n_,b_,r_;
  P T0;
LINK_STACK();
  ARG(n_, 0);
  ARG(b_, 1);
  ARG(r_, 2);
  T0 = CALL2(1,VARREF(YevalSastYobjectify_free_global_reference),n_,r_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_default_type_276) {
  P r_;
  P T0;
LINK_STACK();
  ARG(r_, 0);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),LITREF(lit_581),r_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_free_global_reference_277) {
  P name_,r_;
  P bF4176;
  P grF4175;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  T8 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  grF4175 = T8;
  T2 = CALL1(1,VARREF(YevalSmoduleYenvironment_allows_foreign_namesQ),grF4175);
  if (T2 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYforeign_nameQ),name_);
    T1 = T3;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YevalSastYobjectify_foreign_reference),name_,r_);
    T0 = T4;
  } else {
    T7 = CALL1(1,VARREF(YevalSmoduleYfind_environment_module),r_);
    T6 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_freeQ),YPtrue,VARREF(YevalSmoduleYbinding_kind),LITREF(lit_514),VARREF(YevalSmoduleYbinding_name),name_,VARREF(YevalSmoduleYbinding_module),T7);
    bF4176 = T6;
    CALL2(1,VARREF(YevalSmoduleYinsert_globalX),bF4176,grF4175);
    CALL2(1,VARREF(YevalSmoduleYregister_referenced_binding),grF4175,bF4176);
    T5 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYreference_binding),bF4176);
    T0 = T5;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYforeign_nameQ) {
  P name_;
  P T0,T1,T2;
LINK_STACK();
  ARG(name_, 0);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T1 = CALL2(1,VARREF(YgooScolsSseqYpos),T2,YPchr((P)58));
  T0 = CALL2(1,VARREF(YgooSlogYNEE),T1,YPfalse);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_foreign_reference_279) {
  P name_,r_;
  P bindingF4184;
  P modF4183;
  P loaderF4182;
  P grF4181;
  P varnameF4180;
  P modnameF4179;
  P breakF4178;
  P namestrF4177;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  T22 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  namestrF4177 = T22;
  T21 = CALL2(1,VARREF(YgooScolsSseqYpos),namestrF4177,YPchr((P)58));
  breakF4178 = T21;
  T20 = CALL3(1,VARREF(YgooScolsSseqYsub),namestrF4177,YPint((P)0),breakF4178);
  modnameF4179 = T20;
  T18 = CALL2(1,VARREF(YgooSmathYA),YPint((P)1),breakF4178);
  T19 = CALL1(1,VARREF(YgooStypesYlen),namestrF4177);
  T17 = CALL3(1,VARREF(YgooScolsSseqYsub),namestrF4177,T18,T19);
  varnameF4180 = T17;
  T3 = CALL1(1,VARREF(YgooStypesYlen),modnameF4179);
  T2 = CALL2(1,VARREF(YgooSmagYG),T3,YPint((P)0));
  if (T2 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooStypesYlen),varnameF4180);
    T4 = CALL2(1,VARREF(YgooSmagYG),T5,YPint((P)0));
    T1 = T4;
  } else {
    T1 = YPfalse;
  }
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T6 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_588),name_);
  } else {
  }
  T16 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  grF4181 = T16;
  T15 = CALL1(1,VARREF(YevalSmoduleYenvironment_module_loader),grF4181);
  loaderF4182 = T15;
  T14 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),modnameF4179);
  T13 = CALL2(1,VARREF(YevalSmoduleYprobe_module),loaderF4182,T14);
  modF4183 = T13;
  T11 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),varnameF4180);
  T12 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),modF4183);
  T10 = CALL2(1,VARREF(YevalSmoduleYfind_binding),T11,T12);
  bindingF4184 = T10;
  CALL2(1,VARREF(YevalSmoduleYinsert_globalX),bindingF4184,grF4181);
  T7 = CALL1(1,VARREF(Ynot),bindingF4184);
  if (T7 != YPfalse) {
    T8 = CALL3(1,VARREF(YevalSmoduleYnamespace_error),LITREF(lit_589),varnameF4180,modnameF4179);
  } else {
  }
  T9 = CALL3(1,VARREF(YevalSastYobjectify_binding),name_,bindingF4184,r_);
UNLINK_STACK();
  RET(T9);
}

LOCCODEDEF(fun_objectify_symbol_280) {
  P name_,r_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  T1 = CALL2(1,VARREF(YevalSmoduleYfind_binding),name_,r_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_binding),name_,T1,r_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ftype_281) {
  P r_;
  P T0;
LINK_STACK();
  ARG(r_, 0);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),LITREF(lit_594),r_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYfunctions) {
  P h_,t_;
  P T0;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLfunctionsG),VARREF(Yhead),h_,VARREF(Ytail),t_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_nul_283) {
  P e_;
LINK_STACK();
  ARG(e_, 0);
UNLINK_STACK();
  RET(VARREF(YevalSastYDfunctions_nul));
}

LOCCODEDEF(fun_284) {
  P n_;
  P T0,T1;
LINK_STACK();
  ARG(n_, 0);
  T1 = CALL1(1,VARREF(YevalSastYftype),FREEREF(0));
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSmoduleYbinding_name),n_,VARREF(YevalSmoduleYbinding_type),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_285) {
  P sig_,body_;
  P lineF4186;
  P tmpF4185;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(sig_, 0);
  ARG(body_, 1);
  T3 = CALL1(1,VARREF(YgooScolsSlstYline_of),sig_);
  tmpF4185 = T3;
  if (tmpF4185 != YPfalse) {
    T1 = tmpF4185;
  } else {
    T2 = CALL1(1,VARREF(YgooScolsSlstYline_of),body_);
    T1 = T2;
  }
  lineF4186 = T1;
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLast_methodG),VARREF(YevalSastYprogram_line),lineF4186);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_286) {
  P f_,b_;
  P T0,T1,T2;
LINK_STACK();
  ARG(f_, 0);
  ARG(b_, 1);
  CALL2(1,VARREF(YevalSastYfunction_binding_setter),b_,f_);
  T2 = CALL1(1,VARREF(YevalSmoduleYbinding_name),b_);
  T1 = CALL2(1,VARREF(YevalSastYobjectify_quotation),T2,FREEREF(0));
  T0 = CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T1,f_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_locals_287) {
  P names_,sigs_,bodies_,body_,r_,tailQ_;
  P sigF4200;
  P bodyF4199;
  P metF4198;
  P varF4197;
  P tmpF4196;
  P tmpF4195;
  P tmpF4194;
  P x_1508F4193;
  P x_1509F4192;
  P x_1510F4191;
  P x_1511F4190;
  P metsF4189;
  P new_rF4188;
  P varsF4187;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
LINK_STACK();
  ARG(names_, 0);
  ARG(sigs_, 1);
  ARG(bodies_, 2);
  ARG(body_, 3);
  ARG(r_, 4);
  ARG(tailQ_, 5);
  T30 = FUNFAB(fun_284,1,r_);
  T29 = CALL2(1,VARREF(YgooSmacrosYmap),T30,names_);
  varsF4187 = T29;
  T28 = CALL2(1,VARREF(YevalSastYr_extendT),r_,varsF4187);
  new_rF4188 = T28;
  T27 = fun_285;
  T26 = CALL3(1,VARREF(YgooSmacrosYmap2),T27,sigs_,bodies_);
  metsF4189 = T26;
  T18 = CALL1(1,VARREF(YgooScolsScolYenum),varsF4187);
  x_1511F4190 = T18;
  T19 = CALL1(1,VARREF(YgooScolsScolYenum),metsF4189);
  x_1510F4191 = T19;
  T20 = CALL1(1,VARREF(YgooScolsScolYenum),bodies_);
  x_1509F4192 = T20;
  T21 = CALL1(1,VARREF(YgooScolsScolYenum),sigs_);
  x_1508F4193 = T21;
  LOOP_186: {
    P a186_0,a186_1,a186_2,a186_3;
    T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1511F4190);
    tmpF4194 = T8;
    if (tmpF4194 != YPfalse) {
      T2 = tmpF4194;
    } else {
      T7 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1510F4191);
      tmpF4195 = T7;
      if (tmpF4195 != YPfalse) {
        T3 = tmpF4195;
      } else {
        T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1509F4192);
        tmpF4196 = T6;
        if (tmpF4196 != YPfalse) {
          T4 = tmpF4196;
        } else {
          T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1508F4193);
          T4 = T5;
        }
        T3 = T4;
      }
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T17 = CALL1(1,VARREF(YgooScolsScolYnow),x_1511F4190);
      varF4197 = T17;
      T16 = CALL1(1,VARREF(YgooScolsScolYnow),x_1510F4191);
      metF4198 = T16;
      T15 = CALL1(1,VARREF(YgooScolsScolYnow),x_1509F4192);
      bodyF4199 = T15;
      T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1508F4193);
      sigF4200 = T14;
      CALL2(1,VARREF(YevalSastYbinding_value_setter),metF4198,varF4197);
      CALL5(1,VARREF(YevalSastYobjectify_function_using),metF4198,sigF4200,bodyF4199,new_rF4188,YPfalse);
      T10 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1511F4190);
      T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1510F4191);
      T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1509F4192);
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1508F4193);
      a186_0 = T10;
      a186_1 = T11;
      a186_2 = T12;
      a186_3 = T13;
      x_1511F4190 = a186_0;
      x_1510F4191 = a186_1;
      x_1509F4192 = a186_2;
      x_1508F4193 = a186_3;
      goto LOOP_186;
      T0 = T9;
    } else {
      T0 = YPfalse;
    }
  }
  T22 = FUNFAB(fun_286,1,r_);
  CALL3(1,VARREF(YgooScolsSseqYdo2),T22,metsF4189,varsF4187);
  T24 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSchrYfabs),YPfalse,VARREF(YevalSastYLfunctionsG),metsF4189);
  T25 = CALL3(1,VARREF(YevalSastYobjectify_sequential),body_,new_rF4188,YPtrue);
  T23 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_bindings),varsF4187,VARREF(YevalSastYlocals_functions),T24,VARREF(YevalSastYlocals_body),T25);
UNLINK_STACK();
  RET(T23);
}

LOCCODEDEF(fun_objectify_bind_exit_288) {
  P name_,body_,line_,r_,tailQ_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(name_, 0);
  ARG(body_, 1);
  ARG(line_, 2);
  ARG(r_, 3);
  ARG(tailQ_, 4);
  T3 = CALL2(1,VARREF(YgooScolsSlstYline_list),line_,name_);
  T2 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),T3,body_);
  T1 = CALL3(1,VARREF(YevalSastYobjectify),T2,r_,YPfalse);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLbind_exitG),VARREF(YevalSastYbind_exit_main_fun),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_unwind_protect_289) {
  P protected_form_,cleanup_forms_,line_,r_,tailQ_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(protected_form_, 0);
  ARG(cleanup_forms_, 1);
  ARG(line_, 2);
  ARG(r_, 3);
  ARG(tailQ_, 4);
  T3 = CALL2(1,VARREF(YgooScolsSlstYline_list),line_,protected_form_);
  T2 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),Ynil,T3);
  T1 = CALL3(1,VARREF(YevalSastYobjectify),T2,r_,YPfalse);
  T5 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),Ynil,cleanup_forms_);
  T4 = CALL3(1,VARREF(YevalSastYobjectify),T5,r_,YPfalse);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLunwind_protectG),VARREF(YevalSastYunwind_protect_protected_thunk),T1,VARREF(YevalSastYunwind_protect_cleanup_thunk),T4);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_objectify_monitor_290) {
  P type_,info_,test_,handler_,body_,r_,tailQ_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(type_, 0);
  ARG(info_, 1);
  ARG(test_, 2);
  ARG(handler_, 3);
  ARG(body_, 4);
  ARG(r_, 5);
  ARG(tailQ_, 6);
  T1 = CALL3(1,VARREF(YevalSastYobjectify),type_,r_,YPfalse);
  T2 = CALL3(1,VARREF(YevalSastYobjectify),info_,r_,YPfalse);
  T3 = CALL3(1,VARREF(YevalSastYobjectify),test_,r_,YPfalse);
  T4 = CALL3(1,VARREF(YevalSastYobjectify),handler_,r_,YPfalse);
  T5 = CALL3(1,VARREF(YevalSastYobjectify),body_,r_,YPfalse);
  T0 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_type),T1,VARREF(YevalSastYmonitor_info),T2,VARREF(YevalSastYmonitor_test),T3,VARREF(YevalSastYmonitor_handler),T4,VARREF(YevalSastYmonitor_main_thunk),T5);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_291) {
LINK_STACK();
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_292) {
  P c_,r_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_293) {
  P T0;
LINK_STACK();
  T0 = CALL2(1,VARREF(YevalSmoduleYnamespace_error),LITREF(lit_617),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_294) {
  P exit_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(exit_, 0);
  T2 = CALL1(1,VARREF(Ylst),FREEREF(0));
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSfunYLsimple_handler_infoG),VARREF(YgooSfunYhandler_info_message),LITREF(lit_615),VARREF(YgooSfunYhandler_info_arguments),T2);
  T3 = fun_291;
  T4 = FUNFAB(fun_292,1,exit_);
  T5 = FUNFAB(fun_293,1,FREEREF(0));
  T0 = XCALLN(1,YPwith_monitor,5,VARREF(YgooSconditionsYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_295) {
  P name_;
  P bindingF4201;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(name_, 0);
  T5 = CALL2(1,VARREF(YevalSmoduleYfind_binding),name_,FREEREF(0));
  bindingF4201 = T5;
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),bindingF4201,YPfalse);
  if (T1 != YPfalse) {
    T3 = FUNFAB(fun_294,1,name_);
    T2 = with_exit(T3);
    T0 = T2;
  } else {
    T4 = CALL3(1,VARREF(YevalSmoduleYexport_bindingX),FREEREF(1),name_,bindingF4201);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_export_296) {
  P names_,r_,tailQ_;
  P moduleF4203;
  P envF4202;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(names_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T7 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  envF4202 = T7;
  T6 = CALL1(1,VARREF(YevalSmoduleYfind_environment_module),r_);
  moduleF4203 = T6;
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),moduleF4203);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),envF4202,T2);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSmoduleYnamespace_error),LITREF(lit_612));
  } else {
  }
  T4 = FUNFAB(fun_295,2,envF4202,moduleF4203);
  CALL2(1,VARREF(YgooSmacrosYdo),T4,names_);
  T5 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
UNLINK_STACK();
  RET(T5);
}

LOCCODEDEF(fun_297) {
  P b_;
  P T0,T1;
LINK_STACK();
  ARG(b_, 0);
  CALL2(1,VARREF(YevalSmoduleYimport_globalX),b_,FREEREF(0));
  T1 = CALL1(1,VARREF(YevalSmoduleYbinding_name),b_);
  T0 = CALL3(1,VARREF(YevalSmoduleYexport_bindingX),FREEREF(1),T1,b_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_useSexport_module_298) {
  P name_,r_,tailQ_;
  P used_moduleF4207;
  P loaderF4206;
  P moduleF4205;
  P envF4204;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T7 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  envF4204 = T7;
  T6 = CALL1(1,VARREF(YevalSmoduleYfind_environment_module),r_);
  moduleF4205 = T6;
  T5 = CALL1(1,VARREF(YevalSmoduleYenvironment_module_loader),envF4204);
  loaderF4206 = T5;
  T4 = CALL2(1,VARREF(YevalSmoduleYprobe_module),loaderF4206,name_);
  used_moduleF4207 = T4;
  T0 = CALL1(1,VARREF(YevalSmoduleYenvironment_uses_modules),envF4204);
  CALL2(1,VARREF(YgooScolsSseqxYpushX),T0,used_moduleF4207);
  T1 = FUNFAB(fun_297,2,envF4204,moduleF4205);
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_exports),used_moduleF4207);
  CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
  T3 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
UNLINK_STACK();
  RET(T3);
}

LOCCODEDEF(fun_299) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSlogYE),x_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_use_include_300) {
  P name_,r_,tailQ_;
  P modF4209;
  P envF4208;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T8 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  envF4208 = T8;
  T7 = CALL1(1,VARREF(YevalSmoduleYenvironment_module),envF4208);
  modF4209 = T7;
  T2 = FUNFAB(fun_299,1,name_);
  T3 = CALL1(1,VARREF(YevalSmoduleYmodule_uses_c_includes),modF4209);
  T1 = CALL2(1,VARREF(YgooStypesYanyQ),T2,T3);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSmoduleYmodule_uses_c_includes),modF4209);
    T4 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T5,name_);
  } else {
  }
  T6 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
UNLINK_STACK();
  RET(T6);
}

LOCCODEDEF(fun_301) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSlogYE),x_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_use_library_302) {
  P name_,r_,tailQ_;
  P modF4211;
  P envF4210;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T8 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  envF4210 = T8;
  T7 = CALL1(1,VARREF(YevalSmoduleYenvironment_module),envF4210);
  modF4211 = T7;
  T2 = FUNFAB(fun_301,1,name_);
  T3 = CALL1(1,VARREF(YevalSmoduleYmodule_uses_c_libraries),modF4211);
  T1 = CALL2(1,VARREF(YgooStypesYanyQ),T2,T3);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSmoduleYmodule_uses_c_libraries),modF4211);
    T4 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T5,name_);
  } else {
  }
  T6 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
UNLINK_STACK();
  RET(T6);
}

LOCCODEDEF(fun_303) {
  P b_;
  P T0;
LINK_STACK();
  ARG(b_, 0);
  T0 = CALL2(1,VARREF(YevalSmoduleYimport_globalX),b_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_use_mod_304) {
  P name_;
  P used_moduleF4213;
  P loaderF4212;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(name_, 0);
  T4 = CALL1(1,VARREF(YevalSmoduleYenvironment_module_loader),FREEREF(0));
  loaderF4212 = T4;
  T3 = CALL2(1,VARREF(YevalSmoduleYprobe_module),loaderF4212,name_);
  used_moduleF4213 = T3;
  T0 = CALL1(1,VARREF(YevalSmoduleYenvironment_uses_modules),FREEREF(0));
  CALL2(1,VARREF(YgooScolsSseqxYpushX),T0,used_moduleF4213);
  T1 = FUNFAB(fun_303,1,FREEREF(0));
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_exports),used_moduleF4213);
  CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(used_moduleF4213);
}

LOCCODEDEF(fun_use_c_mod_305) {
  P mod_,name_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  T3 = CALL1(1,VARREF(YevalSmoduleYmodule_uses_c_files),mod_);
  T2 = CALL2(1,VARREF(YgooScolsScolYmemQ),T3,name_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSmoduleYmodule_uses_c_files),mod_);
    T4 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T5,name_);
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_use_module_306) {
  P name_,r_,tailQ_;
  P swig_modF4222;
  P swig_mod_nameF4221;
  P tmpF4220;
  P x_1514F4219;
  P x_1513F4218;
  P use_c_modF4217;
  P use_modF4216;
  P modF4215;
  P envF4214;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T21 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  envF4214 = T21;
  T20 = CALL1(1,VARREF(YevalSmoduleYenvironment_module),envF4214);
  modF4215 = T20;
  T17 = FUNSHELL(1,fun_use_mod_304,1);
  use_modF4216 = T17;
  T18 = fun_use_c_mod_305;
  use_c_modF4217 = T18;
  FUNINIT(use_modF4216, 1,envF4214);
  T16 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  x_1513F4218 = T16;
  x_1514F4219 = VARREF(YgooScolsSseqYsuffixQ);
  T3 = CALL2(1,x_1514F4219,x_1513F4218,LITREF(lit_634));
  tmpF4220 = T3;
  if (tmpF4220 != YPfalse) {
    T1 = tmpF4220;
  } else {
    T2 = CALL2(1,x_1514F4219,x_1513F4218,LITREF(lit_635));
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
    T4 = CALL2(1,use_c_modF4217,modF4215,T5);
    T0 = T4;
  } else {
    T7 = CALL2(1,x_1514F4219,x_1513F4218,LITREF(lit_636));
    if (T7 != YPfalse) {
      T14 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
      T13 = CALL2(1,VARREF(YgooScolsSseqYsplit),T14,YPchr((P)46));
      T12 = CALL1(1,VARREF(YgooSmacrosY1st),T13);
      T11 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T12);
      swig_mod_nameF4221 = T11;
      T10 = CALL1(1,use_modF4216,swig_mod_nameF4221);
      swig_modF4222 = T10;
      T9 = CALL2(1,VARREF(YgooSmacrosYcat_sym),name_,LITREF(lit_637));
      T8 = CALL2(1,use_c_modF4217,swig_modF4222,T9);
      T6 = T8;
    } else {
      T15 = CALL1(1,use_modF4216,name_);
      T6 = T15;
    }
    T0 = T6;
  }
  T19 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
UNLINK_STACK();
  RET(T19);
}

LOCCODEDEF(fun_307) {
  P b_;
  P T0;
LINK_STACK();
  ARG(b_, 0);
  T0 = CALL3(1,VARREF(YevalSmoduleYimport_and_mangle_globalX),b_,FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_use_mangle_module_308) {
  P name_,mangler_,r_,tailQ_;
  P str_manglerF4227;
  P used_moduleF4226;
  P loaderF4225;
  P moduleF4224;
  P envF4223;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(name_, 0);
  ARG(mangler_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T8 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  envF4223 = T8;
  T7 = CALL1(1,VARREF(YevalSmoduleYfind_environment_module),r_);
  moduleF4224 = T7;
  T6 = CALL1(1,VARREF(YevalSmoduleYenvironment_module_loader),envF4223);
  loaderF4225 = T6;
  T5 = CALL2(1,VARREF(YevalSmoduleYprobe_module),loaderF4225,name_);
  used_moduleF4226 = T5;
  T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),mangler_);
  str_manglerF4227 = T4;
  T0 = CALL1(1,VARREF(YevalSmoduleYenvironment_uses_modules),envF4223);
  CALL2(1,VARREF(YgooScolsSseqxYpushX),T0,used_moduleF4226);
  T1 = FUNFAB(fun_307,2,str_manglerF4227,envF4223);
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_exports),used_moduleF4226);
  CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
  T3 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
UNLINK_STACK();
  RET(T3);
}

LOCCODEDEF(fun_expand_bind_list_309) {
  P pat_,var_,fail_;
  P T0;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T0 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_643),pat_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_expand_bind_list_310) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_645));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T3 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,LITREF(lit_8));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_expand_bind_list_311) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquoteQ),pat_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_647),pat_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquote_splicingQ),pat_);
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_648),pat_);
      T3 = T5;
    } else {
      if (YPtrue != YPfalse) {
        T7 = CALL3(1,VARREF(YevalSastYexpand_bind_listT),pat_,var_,fail_);
        T6 = T7;
      } else {
        T6 = YPfalse;
      }
      T3 = T6;
    }
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_expand_bind_listT_312) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_645));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T3 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,LITREF(lit_8));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_expand_bind_listT_313) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T6 = CALL1(1,VARREF(Ylst),var_);
  T9 = CALL1(1,VARREF(Yhead),pat_);
  T8 = CALL3(1,VARREF(YevalSastYexpand_bind_element),T9,var_,fail_);
  T7 = CALL1(1,VARREF(Ylst),T8);
  T5 = CALL3(1,VARREF(YgooSmacrosYcat),T6,T7,LITREF(lit_8));
  T4 = CALL1(1,VARREF(Ylst),T5);
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),T4,LITREF(lit_8));
  T2 = CALL1(1,VARREF(Ylst),T3);
  T12 = CALL1(1,VARREF(Ytail),pat_);
  T11 = CALL3(1,VARREF(YevalSastYexpand_bind_listT),T12,var_,fail_);
  T10 = CALL1(1,VARREF(Ylst),T11);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T10,LITREF(lit_8));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_expand_bind_element_314) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_654));
  T2 = CALL1(1,VARREF(Ylst),var_);
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_655));
  T6 = CALL1(1,VARREF(Ylst),pat_);
  T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,T6,Ynil);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T7 = CALL1(1,VARREF(Ylst),fail_);
  T0 = CALL5(1,VARREF(YgooSmacrosYcat),T1,T2,T3,T7,LITREF(lit_8));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_expand_bind_element_315) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquoteQ),pat_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
    T6 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
    T8 = CALL1(1,VARREF(YgooSmacrosY2nd),pat_);
    T7 = CALL1(1,VARREF(Ylst),T8);
    T11 = CALL1(1,VARREF(Ylst),LITREF(lit_657));
    T12 = CALL1(1,VARREF(Ylst),var_);
    T13 = CALL1(1,VARREF(Ylst),fail_);
    T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,LITREF(lit_8));
    T9 = CALL1(1,VARREF(Ylst),T10);
    T5 = CALL4(1,VARREF(YgooSmacrosYcat),T6,T7,T9,LITREF(lit_8));
    T4 = CALL1(1,VARREF(Ylst),T5);
    T16 = CALL1(1,VARREF(Ylst),LITREF(lit_658));
    T17 = CALL1(1,VARREF(Ylst),var_);
    T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_8));
    T14 = CALL1(1,VARREF(Ylst),T15);
    T2 = CALL4(1,VARREF(YgooSmacrosYcat),T3,T4,T14,LITREF(lit_8));
    T0 = T2;
  } else {
    T19 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquote_splicingQ),pat_);
    if (T19 != YPfalse) {
      T21 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
      T24 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
      T26 = CALL1(1,VARREF(YgooSmacrosY2nd),pat_);
      T25 = CALL1(1,VARREF(Ylst),T26);
      T27 = CALL1(1,VARREF(Ylst),var_);
      T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T27,LITREF(lit_8));
      T22 = CALL1(1,VARREF(Ylst),T23);
      T30 = CALL1(1,VARREF(Ylst),LITREF(lit_655));
      T31 = CALL1(1,VARREF(Ylst),Ynil);
      T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,Ynil);
      T28 = CALL1(1,VARREF(Ylst),T29);
      T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T28,LITREF(lit_8));
      T18 = T20;
    } else {
      if (YPtrue != YPfalse) {
        T34 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
        T37 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
        T42 = CALL1(1,VARREF(Ylst),var_);
        T45 = CALL1(1,VARREF(Ylst),LITREF(lit_659));
        T46 = CALL1(1,VARREF(Ylst),var_);
        T47 = CALL1(1,VARREF(Ylst),fail_);
        T44 = CALL4(1,VARREF(YgooSmacrosYcat),T45,T46,T47,LITREF(lit_8));
        T43 = CALL1(1,VARREF(Ylst),T44);
        T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,LITREF(lit_8));
        T40 = CALL1(1,VARREF(Ylst),T41);
        T39 = CALL2(1,VARREF(YgooSmacrosYcat),T40,LITREF(lit_8));
        T38 = CALL1(1,VARREF(Ylst),T39);
        T49 = CALL3(1,VARREF(YevalSastYexpand_bind_list),pat_,var_,fail_);
        T48 = CALL1(1,VARREF(Ylst),T49);
        T36 = CALL4(1,VARREF(YgooSmacrosYcat),T37,T38,T48,LITREF(lit_8));
        T35 = CALL1(1,VARREF(Ylst),T36);
        T52 = CALL1(1,VARREF(Ylst),LITREF(lit_658));
        T53 = CALL1(1,VARREF(Ylst),var_);
        T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T53,LITREF(lit_8));
        T50 = CALL1(1,VARREF(Ylst),T51);
        T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T35,T50,LITREF(lit_8));
        T32 = T33;
      } else {
        T32 = YPfalse;
      }
      T18 = T32;
    }
    T0 = T18;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_expand_pattern_316) {
  P pat_,var_,fail_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(pat_, 0);
  ARG(var_, 1);
  ARG(fail_, 2);
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_662));
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_663));
  T5 = CALL1(1,VARREF(Ylst),var_);
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_664));
  T3 = CALL4(1,VARREF(YgooSmacrosYcat),T4,T5,T6,LITREF(lit_8));
  T2 = CALL1(1,VARREF(Ylst),T3);
  T8 = CALL3(1,VARREF(YevalSastYexpand_bind_list),pat_,var_,fail_);
  T7 = CALL1(1,VARREF(Ylst),T8);
  T11 = CALL1(1,VARREF(Ylst),fail_);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_665));
  T13 = CALL1(1,VARREF(Ylst),var_);
  T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,LITREF(lit_8));
  T9 = CALL1(1,VARREF(Ylst),T10);
  T0 = CALL5(1,VARREF(YgooSmacrosYcat),T1,T2,T7,T9,LITREF(lit_8));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_317) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(Ylst),x_);
  T2 = CALL1(1,VARREF(Ylst),YPfalse);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),T1,T2,LITREF(lit_8));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_expand_syntax_if_318) {
  P x_;
  P epatF4235;
  P failF4234;
  P varF4233;
  P elseF4232;
  P thenF4231;
  P valueF4230;
  P varsF4229;
  P patF4228;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49;
LINK_STACK();
  ARG(x_, 0);
  T49 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_pattern),x_);
  patF4228 = T49;
  T48 = CALL1(1,VARREF(YevalSsyntaxYsexpr_bind_pattern_variables),patF4228);
  varsF4229 = T48;
  T47 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_value),x_);
  valueF4230 = T47;
  T46 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_then),x_);
  thenF4231 = T46;
  T45 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_if_else),x_);
  elseF4232 = T45;
  T44 = CALL0(1,VARREF(YgooSmacrosYgensym));
  varF4233 = T44;
  T43 = CALL0(1,VARREF(YgooSmacrosYgensym));
  failF4234 = T43;
  T42 = CALL3(1,VARREF(YevalSastYexpand_pattern),patF4228,varF4233,failF4234);
  epatF4235 = T42;
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_668));
  T2 = CALL1(1,VARREF(Ylst),LITREF(lit_669));
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_670));
  T10 = CALL1(1,VARREF(Ylst),failF4234);
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_671));
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_672));
  T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T16,LITREF(lit_8));
  T13 = CALL1(1,VARREF(Ylst),T14);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_673));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_565));
  T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,LITREF(lit_8));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T12 = CALL3(1,VARREF(YgooSmacrosYcat),T13,T17,LITREF(lit_8));
  T11 = CALL1(1,VARREF(Ylst),T12);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_669));
  T24 = CALL1(1,VARREF(Ylst),elseF4232);
  T22 = CALL3(1,VARREF(YgooSmacrosYcat),T23,T24,LITREF(lit_8));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T9 = CALL4(1,VARREF(YgooSmacrosYcat),T10,T11,T21,LITREF(lit_8));
  T8 = CALL1(1,VARREF(Ylst),T9);
  T7 = CALL2(1,VARREF(YgooSmacrosYcat),T8,LITREF(lit_8));
  T6 = CALL1(1,VARREF(Ylst),T7);
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T32 = CALL1(1,VARREF(Ylst),varF4233);
  T33 = CALL1(1,VARREF(Ylst),valueF4230);
  T31 = CALL3(1,VARREF(YgooSmacrosYcat),T32,T33,LITREF(lit_8));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T29 = CALL2(1,VARREF(YgooSmacrosYcat),T30,LITREF(lit_8));
  T28 = CALL1(1,VARREF(Ylst),T29);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T39 = fun_317;
  T38 = CALL2(1,VARREF(YgooSmacrosYmap),T39,varsF4229);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T40 = CALL1(1,VARREF(Ylst),epatF4235);
  T41 = CALL1(1,VARREF(Ylst),thenF4231);
  T35 = CALL5(1,VARREF(YgooSmacrosYcat),T36,T37,T40,T41,LITREF(lit_8));
  T34 = CALL1(1,VARREF(Ylst),T35);
  T26 = CALL4(1,VARREF(YgooSmacrosYcat),T27,T28,T34,LITREF(lit_8));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T4 = CALL4(1,VARREF(YgooSmacrosYcat),T5,T6,T25,LITREF(lit_8));
  T3 = CALL1(1,VARREF(Ylst),T4);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,LITREF(lit_8));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_r_extendT_319) {
  P r_,bindings_;
  P T0;
LINK_STACK();
  ARG(r_, 0);
  ARG(bindings_, 1);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSmoduleYLstatic_local_environmentG),VARREF(YevalSmoduleYenvironment_next),r_,VARREF(YevalSmoduleYenvironment_bindings),bindings_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_find_binding_320) {
  P name_,r_;
  P bindingsF4236;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  T11 = CALL1(1,VARREF(YevalSmoduleYenvironment_bindings),r_);
  bindingsF4236 = T11;
  LOOP_187: {
    P a187_0;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),bindingsF4236);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YevalSmoduleYenvironment_next),r_);
      T2 = CALL2(1,VARREF(YevalSmoduleYfind_binding),name_,T3);
      T0 = T2;
    } else {
      T7 = CALL1(1,VARREF(Yhead),bindingsF4236);
      T6 = CALL1(1,VARREF(YevalSmoduleYbinding_name),T7);
      T5 = CALL2(1,VARREF(YgooSmacrosYEE),name_,T6);
      if (T5 != YPfalse) {
        T8 = CALL1(1,VARREF(Yhead),bindingsF4236);
        T4 = T8;
      } else {
        T10 = CALL1(1,VARREF(Ytail),bindingsF4236);
        a187_0 = T10;
        bindingsF4236 = a187_0;
        goto LOOP_187;
        T4 = T9;
      }
      T0 = T4;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_find_binding_321) {
  P name_,r_;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_register_magic_binding_322) {
  P name_,value_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  ARG(value_, 1);
  T1 = CALL2(1,VARREF(YgooScolsScolYadd),VARREF(YevalSastYTmagic_bindingsT),value_);
  T0 = VARSET(YevalSastYTmagic_bindingsT,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_magic_bindings_323) {
LINK_STACK();
UNLINK_STACK();
  QRET(VARREF(YevalSastYTmagic_bindingsT));
}

LOCCODEDEF(fun_x_1518_324) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_687),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_325) {
  P return_;
  P sexpr_nameF4251;
  P special_nameF4250;
  P x_1517F4249;
  P x_1517F4248;
  P x_1517F4247;
  P x_1517F4246;
  P x_1517F4245;
  P x_1517F4244;
  P x_1517F4243;
  P x_1517F4242;
  P bodyF4241;
  P paramsF4240;
  P nameF4239;
  P x_1517F4238;
  P x_1518F4237;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57;
LINK_STACK();
  ARG(return_, 0);
  T57 = FUNSHELL(0,fun_x_1518_324,2);
  x_1518F4237 = T57;
  FUNINIT(x_1518F4237, 2,FREEREF(0),return_);
  x_1517F4238 = FREEREF(0);
  nameF4239 = YPfalse;
  paramsF4240 = YPfalse;
  bodyF4241 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1517F4238,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1517F4238,LITREF(lit_687),x_1518F4237);
    x_1517F4242 = T13;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1517F4242,x_1518F4237);
    nameF4239 = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1517F4242);
    x_1517F4243 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1517F4243,x_1518F4237);
    x_1517F4244 = T9;
    paramsF4240 = x_1517F4244;
    x_1517F4245 = Ynil;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1517F4245,x_1518F4237);
    x_1517F4246 = T7;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1517F4246,x_1518F4237);
    T8 = CALL1(1,VARREF(Ytail),x_1517F4245);
    x_1517F4247 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1517F4247,x_1518F4237);
    T10 = CALL1(1,VARREF(Ytail),x_1517F4243);
    x_1517F4248 = T10;
    bodyF4241 = x_1517F4248;
    x_1517F4249 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1517F4249,x_1518F4237);
  } else {
    T14 = CALL2(1,x_1518F4237,LITREF(lit_5),x_1517F4238);
  }
  T56 = nameF4239;
  T55 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_688),T56);
  special_nameF4250 = T55;
  T54 = nameF4239;
  T53 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_689),T54,LITREF(lit_690));
  sexpr_nameF4251 = T53;
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_691));
  T20 = CALL1(1,VARREF(Ylst),special_nameF4250);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_692));
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_693));
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_694));
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_655));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_513));
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),T28,T29,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_695));
  T31 = CALL1(1,VARREF(Ylst),sexpr_nameF4251);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_696));
  T33 = CALL1(1,VARREF(Ylst),YPfalse);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_697));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_560));
  T40 = paramsF4240;
  T39 = CALL2(1,VARREF(YgooSmacrosYcat),T40,LITREF(lit_8));
  T38 = CALL1(1,VARREF(Ylst),T39);
  T41 = bodyF4241;
  T36 = CALL4(1,VARREF(YgooSmacrosYcat),T37,T38,T41,LITREF(lit_8));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_698));
  T43 = CALL1(1,VARREF(Ylst),YPfalse);
  T22 = CALLN(1,VARREF(YgooSmacrosYcat),13,T23,T24,T25,T26,T30,T31,T32,T33,T34,T35,T42,T43,LITREF(lit_8));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T18 = CALL4(1,VARREF(YgooSmacrosYcat),T19,T20,T21,LITREF(lit_8));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_680));
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_655));
  T51 = nameF4239;
  T50 = CALL1(1,VARREF(Ylst),T51);
  T48 = CALL3(1,VARREF(YgooSmacrosYcat),T49,T50,Ynil);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T52 = CALL1(1,VARREF(Ylst),special_nameF4250);
  T45 = CALL4(1,VARREF(YgooSmacrosYcat),T46,T47,T52,LITREF(lit_8));
  T44 = CALL1(1,VARREF(Ylst),T45);
  T15 = CALL4(1,VARREF(YgooSmacrosYcat),T16,T17,T44,LITREF(lit_8));
UNLINK_STACK();
  QRET(T15);
}

LOCCODEDEF(fun_326) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_325,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_327) {
  P x_,r_,tailQ_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_if_test),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_if_then),x_);
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_if_else),x_);
  T0 = CALL5(1,VARREF(YevalSastYobjectify_alternative),T1,T2,T3,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_328) {
  P x_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(Ytail),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_sequential),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_329) {
  P x_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
  T0 = CALL2(1,VARREF(YevalSastYobjectify_raw),T1,r_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_330) {
  P x_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_text_of_quotation),x_);
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),T1,r_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_331) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_assignment_variable),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_assignment_value),x_);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_assignment),T1,T2,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_332) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_definition_variable),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_definition_value),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_variable_definition),T1,T2,r_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_333) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_definition_variable),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_definition_value),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_variable_definition),T1,T2,r_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_334) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_definition_variable),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_definition_value),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_dynamic_definition),T1,T2,r_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_335) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_definition_variable),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_definition_value),x_);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_syntax_definition),T1,T2,r_,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_336) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_definition_variable),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_syntax_definition_value),x_);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_syntax_definition),T1,T2,r_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_337) {
  P x_,r_,tailQ_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_variable),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_adjectives),x_);
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_value),x_);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_method_definition),T1,T2,T3,r_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_338) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_variable),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_signature),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_generic_definition),T1,T2,r_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_339) {
  P x_,r_,tailQ_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_variable),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_adjectives),x_);
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_value),x_);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_function_definition),T1,T2,T3,r_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_340) {
  P x_,r_,tailQ_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_method_signature),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_method_body),x_);
  T3 = CALL1(1,VARREF(YgooScolsSlstYline_of),x_);
  T0 = CALL5(1,VARREF(YevalSastYobjectify_function),T1,T2,T3,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_341) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
  T2 = CALL1(1,VARREF(YgooScolsSseqY3rd),x_);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_boundQ),T1,T2,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_342) {
  P x_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_let_Gcombination),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_343) {
  P x_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_def_value),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_344) {
  P x_,r_,tailQ_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_loc_bound_names),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_loc_bound_signatures),x_);
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_loc_bound_bodies),x_);
  T4 = CALL1(1,VARREF(YevalSsyntaxYsexpr_loc_raw_body),x_);
  T0 = CALLN(1,VARREF(YevalSastYobjectify_locals),6,T1,T2,T3,T4,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_345) {
  P x_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_iterate_Gloc),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_346) {
  P x_,r_,tailQ_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_block_name),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_block_body),x_);
  T3 = CALL1(1,VARREF(YgooScolsSlstYline_of),x_);
  T0 = CALL5(1,VARREF(YevalSastYobjectify_bind_exit),T1,T2,T3,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_347) {
  P x_,r_,tailQ_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unwind_protect_protected_form),x_);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms),x_);
  T3 = CALL1(1,VARREF(YgooScolsSlstYline_of),x_);
  T0 = CALL5(1,VARREF(YevalSastYobjectify_unwind_protect),T1,T2,T3,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_348) {
  P x_,r_,tailQ_;
  P bodyF4257;
  P handlerF4256;
  P testF4255;
  P infoF4254;
  P typeF4253;
  P tup35F4252;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T6 = CALL1(1,VARREF(YevalSsyntaxYsexpr_monitor_expand),x_);
  tup35F4252 = T6;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup35F4252,YPint((P)0));
  typeF4253 = T5;
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),tup35F4252,YPint((P)1));
  infoF4254 = T4;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup35F4252,YPint((P)2));
  testF4255 = T3;
  T2 = CALL2(1,VARREF(YgooSmacrosYelt),tup35F4252,YPint((P)3));
  handlerF4256 = T2;
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),tup35F4252,YPint((P)4));
  bodyF4257 = T1;
  T0 = CALLN(1,VARREF(YevalSastYobjectify_monitor),7,typeF4253,infoF4254,testF4255,handlerF4256,bodyF4257,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_pairize_349) {
  P args_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(args_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),args_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ylst),LITREF(lit_655),Ynil);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),args_);
    T6 = CALL1(1,VARREF(Ytail),args_);
    T5 = CALL1(1,VARREF(YevalSastYpairize),T6);
    T3 = CALL3(1,VARREF(Ylst),LITREF(lit_742),T4,T5);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_350) {
  P x_,r_,tailQ_;
  P nameF4258;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T10 = CALL1(1,VARREF(YevalSsyntaxYsexpr_definition_variable),x_);
  nameF4258 = T10;
  T2 = CALL1(1,VARREF(Ylst),LITREF(lit_744));
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_655));
  T6 = CALL1(1,VARREF(Ylst),nameF4258);
  T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,T6,Ynil);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_define_class_parents),x_);
  T8 = CALL1(1,VARREF(YevalSastYpairize),T9);
  T7 = CALL1(1,VARREF(Ylst),T8);
  T1 = CALL4(1,VARREF(YgooSmacrosYcat),T2,T3,T7,LITREF(lit_8));
  T0 = CALL5(1,VARREF(YevalSastYobjectify_definition),VARREF(YevalSastYLvariable_definitionG),LITREF(lit_514),nameF4258,T1,r_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_objectify_define_property_351) {
  P x_,setterQ_,r_,tailQ_;
  P setter_nameF4264;
  P lineF4263;
  P typeF4262;
  P ownerF4261;
  P varF4260;
  P nameF4259;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(x_, 0);
  ARG(setterQ_, 1);
  ARG(r_, 2);
  ARG(tailQ_, 3);
  T24 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_name),x_);
  nameF4259 = T24;
  T23 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_init_var),x_);
  varF4260 = T23;
  T22 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_owner),x_);
  ownerF4261 = T22;
  T21 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_type),x_);
  typeF4262 = T21;
  T20 = CALL1(1,VARREF(YgooScolsSlstYline_of),x_);
  lineF4263 = T20;
  if (setterQ_ != YPfalse) {
    T19 = CALL1(1,VARREF(YevalSsyntaxYsexpr_fab_setter_name),nameF4259);
    T18 = T19;
  } else {
    T18 = YPfalse;
  }
  setter_nameF4264 = T18;
  T3 = CALL3(1,VARREF(YevalSsyntaxYsexpr_fab_getter),nameF4259,ownerF4261,lineF4263);
  if (setterQ_ != YPfalse) {
    T5 = CALL4(1,VARREF(YevalSsyntaxYsexpr_fab_setter),nameF4259,ownerF4261,typeF4262,lineF4263);
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_initQ),x_);
  if (T9 != YPfalse) {
    T14 = CALL1(1,VARREF(Ylst),varF4260);
    T15 = CALL1(1,VARREF(Ylst),LITREF(lit_581));
    T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T15,LITREF(lit_8));
    T12 = CALL1(1,VARREF(Ylst),T13);
    T11 = CALL2(1,VARREF(YgooSmacrosYcat),T12,LITREF(lit_8));
    T17 = CALL1(1,VARREF(YevalSsyntaxYsexpr_prop_init),x_);
    T16 = CALL2(1,VARREF(YgooScolsSlstYline_list),lineF4263,T17);
    T10 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),T11,T16);
    T8 = T10;
  } else {
    T8 = LITREF(lit_749);
  }
  T7 = CALL5(1,VARREF(Ylst),ownerF4261,nameF4259,setter_nameF4264,typeF4262,T8);
  T6 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_application),LITREF(lit_748),T7);
  T2 = CALL3(1,VARREF(Ylst),T3,T4,T6);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_make_begin),T2);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_352) {
  P x_,r_,tailQ_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_define_property),x_,YPtrue,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_353) {
  P x_,r_,tailQ_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_define_property),x_,YPfalse,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_354) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T2 = CALL1(1,VARREF(Ytail),x_);
  T1 = CALL1(1,VARREF(Yhead),T2);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_compile_time),T1,r_,tailQ_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_355) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T2 = CALL1(1,VARREF(Ytail),x_);
  T1 = CALL1(1,VARREF(Yhead),T2);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_compile_time),T1,r_,tailQ_,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_356) {
  P x_,r_,tailQ_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_forward_primitiveQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_variable),x_);
    CALL4(1,VARREF(YevalSastYast_define_binding),r_,T2,YPfalse,LITREF(lit_549));
    T3 = CALL3(1,VARREF(YevalSastYobjectify),YPfalse,r_,tailQ_);
    T0 = T3;
  } else {
    T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_variable),x_);
    T6 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_definition_adjectives),x_);
    T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_signature),x_);
    T8 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_body),x_);
    T4 = CALL5(1,VARREF(YevalSastYobjectify_primitive_definition),T5,T6,T7,T8,r_);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_357) {
  P x_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_expand_backquote),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_macro_expand_358) {
  P x_,r_,tailQ_;
  P resF4267;
  P macF4266;
  P astF4265;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T6 = CALL1(1,VARREF(Yhead),x_);
  T5 = CALL3(1,VARREF(YevalSastYobjectify),T6,r_,tailQ_);
  astF4265 = T5;
  T1 = CALL2(1,VARREF(YisaQ),astF4265,VARREF(YevalSastYLmacro_referenceG));
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YevalSastYreference_binding),astF4265);
    macF4266 = T4;
    T3 = CALL1(1,VARREF(YevalSmoduleYbinding_handler),macF4266);
    T2 = CALL3(1,T3,x_,r_,tailQ_);
    resF4267 = T2;
    T0 = resF4267;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_359) {
  P x_,r_,tailQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T2 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
  T1 = CALL3(1,VARREF(YevalSastYast_macro_expand),T2,r_,tailQ_);
  T0 = CALL2(1,VARREF(YevalSastYobjectify_quotation),T1,r_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_360) {
  P x_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YevalSastYexpand_syntax_if),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_361) {
  P x_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(Ytail),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_export),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_362) {
  P x_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_use_module),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_363) {
  P x_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_use_mangle_module),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_364) {
  P x_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_use_include),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_365) {
  P x_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_use_library),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_366) {
  P x_,r_,tailQ_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  ARG(tailQ_, 2);
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_useSexport_module),T1,r_,tailQ_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_367) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL2(1,VARREF(YevalSmoduleYfind_binding),name_,FREEREF(0));
  T0 = CALL2(1,VARREF(YevalSmoduleYinsert_globalX),T1,FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_install_initial_bindings_368) {
  P env_,loader_;
  P bootenvF4269;
  P bootmodF4268;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(env_, 0);
  ARG(loader_, 1);
  T3 = CALL2(1,VARREF(YevalSmoduleYprobe_module),loader_,VARREF(YevalSmoduleYDgoo_boot_module_name));
  bootmodF4268 = T3;
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),bootmodF4268);
  bootenvF4269 = T2;
  T1 = FUNFAB(fun_367,2,bootenvF4269,env_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,LITREF(lit_791));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_369) {
  P T0;
LINK_STACK();
  T0 = CALL3(1,VARREF(YevalSastYobjectify),FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYobjectify_with_subtransaction) {
  P e_,r_,dynamic_compilationQ_,tailQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(e_, 0);
  ARG(r_, 1);
  ARG(dynamic_compilationQ_, 2);
  ARG(tailQ_, 3);
  T1 = CALL1(1,VARREF(YevalSmoduleYenvironment_module),r_);
  T2 = FUNFAB(fun_369,3,e_,r_,tailQ_);
  T0 = CALL2(1,VARREF(YevalSmoduleYcall_with_subtransaction),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_371) {
  P binding_;
  P cloneF4270;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(binding_, 0);
  T3 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
  T2 = CALL4(1,VARREF(YevalSastYast_define_binding),FREEREF(0),T3,YPfalse,LITREF(lit_513));
  cloneF4270 = T2;
  T1 = CALL1(1,VARREF(YevalSmoduleYbinding_handler),binding_);
  T0 = CALL2(1,VARREF(YevalSmoduleYbinding_handler_setter),T1,cloneF4270);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYinstall_magic_bindings) {
  P env_;
  P T0,T1,T2;
LINK_STACK();
  ARG(env_, 0);
  T1 = FUNFAB(fun_371,1,env_);
  T2 = CALL0(1,VARREF(YevalSastYmagic_bindings));
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYreload_macros) {
  P T0,T1;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSfunctionalYrcurry),VARREF(YPPmacro),YPfalse);
  CALL4(1,VARREF(YgooScolsSseqYdo3),T0,VARREF(YTboot_macro_module_namesT),VARREF(YTboot_macro_namesT),VARREF(YTboot_macro_expandersT));
  T1 = VARSET(YTmacros_okQT,YPtrue);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(YevalSastYinstall_interpreter_hacks) {
  P env_;
  P T0;
LINK_STACK();
  ARG(env_, 0);
  T0 = CALL1(1,VARREF(YevalSastYinit_environment_for_eval),env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYinit_runtime) {
  P bootenvF4272;
  P bootmodF4271;
  P T0,T1,T2;
LINK_STACK();
  CALL0(1,VARREF(YevalSmoduleYreload_modules));
  T2 = CALL0(1,VARREF(YevalSmoduleYruntime_module_loader));
  T1 = CALL2(1,VARREF(YevalSmoduleYprobe_module),T2,VARREF(YevalSmoduleYDgoo_boot_module_name));
  bootmodF4271 = T1;
  T0 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),bootmodF4271);
  bootenvF4272 = T0;
  CALL1(1,VARREF(YevalSastYinstall_magic_bindings),bootenvF4272);
  CALL0(1,VARREF(YevalSastYreload_macros));
  CALL1(1,VARREF(YevalSastYinstall_interpreter_hacks),bootenvF4272);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(YevalSastYfab_syntax_environment) {
  P module_;
  P T0,T1;
LINK_STACK();
  ARG(module_, 0);
  T1 = CALL1(1,VARREF(YevalSmoduleYruntime_module),LITREF(lit_804));
  T0 = CALL3(1,VARREF(YevalSmoduleYfab_subset_environment),module_,T1,VARREF(YevalSastYsyntax_environment_excluded_bindings));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSastYfab_g2c_module) {
  P loader_,name_;
  P target_envF4276;
  P syntax_envF4275;
  P moduleF4274;
  P typeF4273;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
  T6 = CALL1(1,VARREF(YevalSmoduleYmodule_loader_module_type),loader_);
  typeF4273 = T6;
  T5 = CALL3(1,VARREF(Ynew),typeF4273,VARREF(YevalSmoduleYmodule_name),name_);
  moduleF4274 = T5;
  T4 = CALL1(1,VARREF(YevalSastYfab_syntax_environment),moduleF4274);
  syntax_envF4275 = T4;
  T3 = CALL3(1,VARREF(YevalSmoduleYfab_static_global_environment),moduleF4274,loader_,YPfalse);
  target_envF4276 = T3;
  CALL3(1,VARREF(YevalSmoduleYset_module_environments),moduleF4274,syntax_envF4275,target_envF4276);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),name_,VARREF(YevalSmoduleYDgoo_boot_module_name));
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(YevalSastYinit_g2c_boot_environment),target_envF4276);
  } else {
    T2 = CALL2(1,VARREF(YevalSastYinit_g2c_regular_environment),target_envF4276,loader_);
  }
UNLINK_STACK();
  RET(moduleF4274);
}

FUNCODEDEF(YevalSastYinit_g2c_boot_environment) {
  P env_;
  P T0,T1;
LINK_STACK();
  ARG(env_, 0);
  T1 = CALL0(1,VARREF(YevalSastYmagic_bindings));
  T0 = CALL2(1,VARREF(YevalSmoduleYinsert_globalsX),T1,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYinit_g2c_regular_environment) {
  P env_,loader_;
  P T0;
LINK_STACK();
  ARG(env_, 0);
  ARG(loader_, 1);
  T0 = CALL2(1,VARREF(YevalSmoduleYinstall_initial_bindings),env_,loader_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYinit_ast) {
  P T0;
LINK_STACK();
  T0 = CALL0(1,VARREF(YevalSastYinit_runtime));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_contains_funQ_381) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(YPtrue);
}

LOCCODEDEF(fun_walk_382) {
  P y_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(y_, 0);
  T1 = CALL2(1,VARREF(YisaQ),y_,VARREF(YevalSastYLast_methodG));
  if (T1 != YPfalse) {
    T2 = CALL1(0,FREEREF(0),YPtrue);
    T0 = T2;
  } else {
    T3 = CALL2(1,VARREF(YevalSastYast_walk),FREEREF(1),y_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_383) {
  P return_;
  P walkF4277;
  P T0,T1;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_walk_382,2);
  walkF4277 = T1;
  FUNINIT(walkF4277, 2,return_,walkF4277);
  T0 = CALL2(1,VARREF(YevalSastYast_walk),walkF4277,FREEREF(0));
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_ast_contains_funQ_384) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = FUNFAB(fun_383,1,x_);
  T0 = with_exit(T1);
UNLINK_STACK();
  RET(T0);
}

P YevalSastY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121;
DEFCREGS();
  DYNDEFSET(YevalSastYTcurrent_dependentT,YPfalse);
  lit_0 = YPPlist(1,YPPsym((P)"exp"));
  lit_1 = YPPlist(1,YPPsym((P)"return"));
  lit_2 = YPPsym((P)"x-1492");
  lit_3 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_4 = YPPsym((P)"with-dependent");
  lit_5 = YPsb((P)"Match Pattern Failure");
  lit_6 = YPPsym((P)"let");
  lit_7 = YPPsym((P)"*current-dependent*");
  lit_8 = Ynil;
  lit_9 = YPPsym((P)"set");
  lit_10 = YPPsym((P)"fin");
  lit_11 = YPPsym((P)"seq");
  T2 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1492_0 = YPfab_met(FUNCODEREF(fun_x_1492_0),T2,LITREF(lit_2),LITREF(lit_3),YPfalse,YPfalse);
  T1 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1 = YPfab_met(FUNCODEREF(fun_1),T1,YPfalse,LITREF(lit_1),YPfalse,YPfalse);
  T0 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPfab_met(FUNCODEREF(fun_2),T0,YPfalse,LITREF(lit_0),YPfalse,YPfalse);
  T3 = fun_2;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"with-dependent"),T3);
  lit_12 = YPPsym((P)"<ast-error>");
  T5 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLcompiler_errorG),Ynil);
  T4 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_12),T5);
  VARSET(YevalSastYLast_errorG,T4);
  lit_13 = YPPsym((P)"<simple-ast-error>");
  T8 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T7 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLast_errorG),T8);
  T6 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_13),T7);
  VARSET(YevalSastYLsimple_ast_errorG,T6);
  lit_14 = YPPsym((P)"ast-error");
  lit_15 = YPPlist(2,YPPsym((P)"message"),YPPsym((P)"arguments"));
  T9 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_error_3 = YPfab_met(FUNCODEREF(fun_ast_error_3),T9,LITREF(lit_14),LITREF(lit_15),sloc(36),YPfalse);
  T11 = VARREF_OR(YevalSdependencyYast_error,YPfalse);
  T12 = fun_ast_error_3;
  T10 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T11,T12);
  VARSET(YevalSdependencyYast_error,T10);
  lit_16 = YPPsym((P)"<program>");
  T14 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLanyG),Ynil);
  T13 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_16),T14);
  VARSET(YevalSastYLprogramG,T13);
  lit_17 = YPPsym((P)"program-type");
  lit_18 = YPPlist(1,YPPsym((P)"_x"));
  T15 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_type_4 = YPfab_met(FUNCODEREF(fun_program_type_4),T15,LITREF(lit_17),LITREF(lit_18),sloc(43),YPfalse);
  T17 = VARREF_OR(YevalSastYprogram_type,YPfalse);
  T18 = fun_program_type_4;
  T16 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T17,T18);
  VARSET(YevalSastYprogram_type,T16);
  lit_19 = YPPsym((P)"program-type-setter");
  lit_20 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T19 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_type_setter_5 = YPfab_met(FUNCODEREF(fun_program_type_setter_5),T19,LITREF(lit_19),LITREF(lit_20),sloc(43),YPfalse);
  T21 = VARREF_OR(YevalSastYprogram_type_setter,YPfalse);
  T22 = fun_program_type_setter_5;
  T20 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T21,T22);
  VARSET(YevalSastYprogram_type_setter,T20);
  lit_21 = YPPlist(1,YPPsym((P)"_x"));
  T23 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_6 = YPfab_met(FUNCODEREF(fun_6),T23,YPfalse,LITREF(lit_21),sloc(43),YPfalse);
  T24 = fun_6;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLprogramG),VARREF(YevalSastYprogram_type),VARREF(YevalSastYprogram_type_setter),VARREF(YLanyG),T24);
  lit_22 = YPPsym((P)"program-line");
  lit_23 = YPPlist(1,YPPsym((P)"_x"));
  T25 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_line_7 = YPfab_met(FUNCODEREF(fun_program_line_7),T25,LITREF(lit_22),LITREF(lit_23),sloc(44),YPfalse);
  T27 = VARREF_OR(YevalSastYprogram_line,YPfalse);
  T28 = fun_program_line_7;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YevalSastYprogram_line,T26);
  lit_24 = YPPsym((P)"program-line-setter");
  lit_25 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T30 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T29 = YPfab_sig(YPPlist(2,T30,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_line_setter_8 = YPfab_met(FUNCODEREF(fun_program_line_setter_8),T29,LITREF(lit_24),LITREF(lit_25),sloc(44),YPfalse);
  T32 = VARREF_OR(YevalSastYprogram_line_setter,YPfalse);
  T33 = fun_program_line_setter_8;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSastYprogram_line_setter,T31);
  lit_26 = YPPlist(1,YPPsym((P)"_x"));
  T34 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPfab_met(FUNCODEREF(fun_9),T34,YPfalse,LITREF(lit_26),sloc(44),YPfalse);
  T35 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T36 = fun_9;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLprogramG),VARREF(YevalSastYprogram_line),VARREF(YevalSastYprogram_line_setter),T35,T36);
  lit_27 = YPPsym((P)"program-register");
  lit_28 = YPPlist(1,YPPsym((P)"_x"));
  T37 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_register_10 = YPfab_met(FUNCODEREF(fun_program_register_10),T37,LITREF(lit_27),LITREF(lit_28),sloc(45),YPfalse);
  T39 = VARREF_OR(YevalSastYprogram_register,YPfalse);
  T40 = fun_program_register_10;
  T38 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T39,T40);
  VARSET(YevalSastYprogram_register,T38);
  lit_29 = YPPsym((P)"program-register-setter");
  lit_30 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T41 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_register_setter_11 = YPfab_met(FUNCODEREF(fun_program_register_setter_11),T41,LITREF(lit_29),LITREF(lit_30),sloc(45),YPfalse);
  T43 = VARREF_OR(YevalSastYprogram_register_setter,YPfalse);
  T44 = fun_program_register_setter_11;
  T42 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T43,T44);
  VARSET(YevalSastYprogram_register_setter,T42);
  lit_31 = YPPlist(1,YPPsym((P)"_x"));
  T45 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_12 = YPfab_met(FUNCODEREF(fun_12),T45,YPfalse,LITREF(lit_31),sloc(45),YPfalse);
  T46 = fun_12;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLprogramG),VARREF(YevalSastYprogram_register),VARREF(YevalSastYprogram_register_setter),VARREF(YLanyG),T46);
  lit_32 = YPPsym((P)"<computed-program>");
  T48 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLprogramG),Ynil);
  T47 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_32),T48);
  VARSET(YevalSastYLcomputed_programG,T47);
  lit_33 = YPPsym((P)"<passive-program>");
  T50 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLprogramG),Ynil);
  T49 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_33),T50);
  VARSET(YevalSastYLpassive_programG,T49);
  lit_34 = YPPsym((P)"<local-binding>");
  T52 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSmoduleYLbindingG),Ynil);
  T51 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_34),T52);
  VARSET(YevalSastYLlocal_bindingG,T51);
  lit_35 = YPPsym((P)"binding-value");
  lit_36 = YPPlist(1,YPPsym((P)"_x"));
  T53 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_value_13 = YPfab_met(FUNCODEREF(fun_binding_value_13),T53,LITREF(lit_35),LITREF(lit_36),sloc(53),YPfalse);
  T55 = VARREF_OR(YevalSastYbinding_value,YPfalse);
  T56 = fun_binding_value_13;
  T54 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T55,T56);
  VARSET(YevalSastYbinding_value,T54);
  lit_37 = YPPsym((P)"binding-value-setter");
  lit_38 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T57 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_value_setter_14 = YPfab_met(FUNCODEREF(fun_binding_value_setter_14),T57,LITREF(lit_37),LITREF(lit_38),sloc(53),YPfalse);
  T59 = VARREF_OR(YevalSastYbinding_value_setter,YPfalse);
  T60 = fun_binding_value_setter_14;
  T58 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T59,T60);
  VARSET(YevalSastYbinding_value_setter,T58);
  lit_39 = YPPlist(1,YPPsym((P)"_x"));
  T61 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_15 = YPfab_met(FUNCODEREF(fun_15),T61,YPfalse,LITREF(lit_39),sloc(53),YPfalse);
  T62 = fun_15;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_value),VARREF(YevalSastYbinding_value_setter),VARREF(YLanyG),T62);
  lit_40 = YPPsym((P)"binding-mutable?");
  lit_41 = YPPlist(1,YPPsym((P)"_x"));
  T63 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_mutableQ_16 = YPfab_met(FUNCODEREF(fun_binding_mutableQ_16),T63,LITREF(lit_40),LITREF(lit_41),sloc(54),YPfalse);
  T65 = VARREF_OR(YevalSastYbinding_mutableQ,YPfalse);
  T66 = fun_binding_mutableQ_16;
  T64 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T65,T66);
  VARSET(YevalSastYbinding_mutableQ,T64);
  lit_42 = YPPsym((P)"binding-mutable?-setter");
  lit_43 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T67 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_mutableQ_setter_17 = YPfab_met(FUNCODEREF(fun_binding_mutableQ_setter_17),T67,LITREF(lit_42),LITREF(lit_43),sloc(54),YPfalse);
  T69 = VARREF_OR(YevalSastYbinding_mutableQ_setter,YPfalse);
  T70 = fun_binding_mutableQ_setter_17;
  T68 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T69,T70);
  VARSET(YevalSastYbinding_mutableQ_setter,T68);
  lit_44 = YPPlist(1,YPPsym((P)"_x"));
  T71 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_18 = YPfab_met(FUNCODEREF(fun_18),T71,YPfalse,LITREF(lit_44),sloc(54),YPfalse);
  T72 = fun_18;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_mutableQ),VARREF(YevalSastYbinding_mutableQ_setter),VARREF(YLanyG),T72);
  lit_45 = YPPsym((P)"binding-dynamic-extent?");
  lit_46 = YPPlist(1,YPPsym((P)"_x"));
  T73 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_dynamic_extentQ_19 = YPfab_met(FUNCODEREF(fun_binding_dynamic_extentQ_19),T73,LITREF(lit_45),LITREF(lit_46),sloc(55),YPfalse);
  T75 = VARREF_OR(YevalSastYbinding_dynamic_extentQ,YPfalse);
  T76 = fun_binding_dynamic_extentQ_19;
  T74 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T75,T76);
  VARSET(YevalSastYbinding_dynamic_extentQ,T74);
  lit_47 = YPPsym((P)"binding-dynamic-extent?-setter");
  lit_48 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T77 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_dynamic_extentQ_setter_20 = YPfab_met(FUNCODEREF(fun_binding_dynamic_extentQ_setter_20),T77,LITREF(lit_47),LITREF(lit_48),sloc(55),YPfalse);
  T79 = VARREF_OR(YevalSastYbinding_dynamic_extentQ_setter,YPfalse);
  T80 = fun_binding_dynamic_extentQ_setter_20;
  T78 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T79,T80);
  VARSET(YevalSastYbinding_dynamic_extentQ_setter,T78);
  lit_49 = YPPlist(1,YPPsym((P)"_x"));
  T81 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_21 = YPfab_met(FUNCODEREF(fun_21),T81,YPfalse,LITREF(lit_49),sloc(55),YPfalse);
  T82 = fun_21;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_dynamic_extentQ),VARREF(YevalSastYbinding_dynamic_extentQ_setter),VARREF(YLanyG),T82);
  lit_50 = YPPsym((P)"binding-dotted?");
  lit_51 = YPPlist(1,YPPsym((P)"_x"));
  T83 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_dottedQ_22 = YPfab_met(FUNCODEREF(fun_binding_dottedQ_22),T83,LITREF(lit_50),LITREF(lit_51),sloc(56),YPfalse);
  T85 = VARREF_OR(YevalSastYbinding_dottedQ,YPfalse);
  T86 = fun_binding_dottedQ_22;
  T84 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T85,T86);
  VARSET(YevalSastYbinding_dottedQ,T84);
  lit_52 = YPPsym((P)"binding-dotted?-setter");
  lit_53 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T87 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_dottedQ_setter_23 = YPfab_met(FUNCODEREF(fun_binding_dottedQ_setter_23),T87,LITREF(lit_52),LITREF(lit_53),sloc(56),YPfalse);
  T89 = VARREF_OR(YevalSastYbinding_dottedQ_setter,YPfalse);
  T90 = fun_binding_dottedQ_setter_23;
  T88 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T89,T90);
  VARSET(YevalSastYbinding_dottedQ_setter,T88);
  lit_54 = YPPlist(1,YPPsym((P)"_x"));
  T91 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPfab_met(FUNCODEREF(fun_24),T91,YPfalse,LITREF(lit_54),sloc(56),YPfalse);
  T92 = fun_24;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_dottedQ),VARREF(YevalSastYbinding_dottedQ_setter),VARREF(YLanyG),T92);
  lit_55 = YPPsym((P)"binding-closed-over?");
  lit_56 = YPPlist(1,YPPsym((P)"_x"));
  T93 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_closed_overQ_25 = YPfab_met(FUNCODEREF(fun_binding_closed_overQ_25),T93,LITREF(lit_55),LITREF(lit_56),sloc(57),YPfalse);
  T95 = VARREF_OR(YevalSastYbinding_closed_overQ,YPfalse);
  T96 = fun_binding_closed_overQ_25;
  T94 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T95,T96);
  VARSET(YevalSastYbinding_closed_overQ,T94);
  lit_57 = YPPsym((P)"binding-closed-over?-setter");
  lit_58 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T97 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_closed_overQ_setter_26 = YPfab_met(FUNCODEREF(fun_binding_closed_overQ_setter_26),T97,LITREF(lit_57),LITREF(lit_58),sloc(57),YPfalse);
  T99 = VARREF_OR(YevalSastYbinding_closed_overQ_setter,YPfalse);
  T100 = fun_binding_closed_overQ_setter_26;
  T98 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T99,T100);
  VARSET(YevalSastYbinding_closed_overQ_setter,T98);
  lit_59 = YPPlist(1,YPPsym((P)"_x"));
  T101 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPfab_met(FUNCODEREF(fun_27),T101,YPfalse,LITREF(lit_59),sloc(57),YPfalse);
  T102 = fun_27;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_closed_overQ),VARREF(YevalSastYbinding_closed_overQ_setter),VARREF(YLanyG),T102);
  lit_60 = YPPsym((P)"binding-index");
  lit_61 = YPPlist(1,YPPsym((P)"_x"));
  T103 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_index_28 = YPfab_met(FUNCODEREF(fun_binding_index_28),T103,LITREF(lit_60),LITREF(lit_61),sloc(58),YPfalse);
  T105 = VARREF_OR(YevalSastYbinding_index,YPfalse);
  T106 = fun_binding_index_28;
  T104 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T105,T106);
  VARSET(YevalSastYbinding_index,T104);
  lit_62 = YPPsym((P)"binding-index-setter");
  lit_63 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T107 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_index_setter_29 = YPfab_met(FUNCODEREF(fun_binding_index_setter_29),T107,LITREF(lit_62),LITREF(lit_63),sloc(58),YPfalse);
  T109 = VARREF_OR(YevalSastYbinding_index_setter,YPfalse);
  T110 = fun_binding_index_setter_29;
  T108 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T109,T110);
  VARSET(YevalSastYbinding_index_setter,T108);
  lit_64 = YPPlist(1,YPPsym((P)"_x"));
  T111 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_30 = YPfab_met(FUNCODEREF(fun_30),T111,YPfalse,LITREF(lit_64),sloc(58),YPfalse);
  T112 = fun_30;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSastYbinding_index),VARREF(YevalSastYbinding_index_setter),VARREF(YLanyG),T112);
  lit_65 = YPPsym((P)"<compile-time>");
  T114 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T113 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_65),T114);
  VARSET(YevalSastYLcompile_timeG,T113);
  lit_66 = YPPsym((P)"compile-time-program");
  lit_67 = YPPlist(1,YPPsym((P)"_x"));
  T117 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLcompile_timeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T116 = fun_compile_time_program_31 = YPfab_met(FUNCODEREF(fun_compile_time_program_31),T117,LITREF(lit_66),LITREF(lit_67),sloc(65),YPfalse);
  T120 = VARREF_OR(YevalSastYcompile_time_program,YPfalse);
  T121 = fun_compile_time_program_31;
  T119 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T120,T121);
  T118 = VARSET(YevalSastYcompile_time_program,T119);
  T115 = T118;
  return T115;
}

P YevalSastY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121;
DEFCREGS();
  lit_68 = YPPsym((P)"compile-time-program-setter");
  lit_69 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T0 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLcompile_timeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compile_time_program_setter_32 = YPfab_met(FUNCODEREF(fun_compile_time_program_setter_32),T0,LITREF(lit_68),LITREF(lit_69),sloc(65),YPfalse);
  T2 = VARREF_OR(YevalSastYcompile_time_program_setter,YPfalse);
  T3 = fun_compile_time_program_setter_32;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSastYcompile_time_program_setter,T1);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLcompile_timeG),VARREF(YevalSastYcompile_time_program),VARREF(YevalSastYcompile_time_program_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_70 = YPPsym((P)"<reference>");
  T5 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLpassive_programG),Ynil);
  T4 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_70),T5);
  VARSET(YevalSastYLreferenceG,T4);
  lit_71 = YPPsym((P)"<real-reference>");
  T7 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLreferenceG),Ynil);
  T6 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_71),T7);
  VARSET(YevalSastYLreal_referenceG,T6);
  lit_72 = YPPsym((P)"reference-binding");
  lit_73 = YPPlist(1,YPPsym((P)"_x"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLreal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_binding_33 = YPfab_met(FUNCODEREF(fun_reference_binding_33),T8,LITREF(lit_72),LITREF(lit_73),sloc(76),YPfalse);
  T10 = VARREF_OR(YevalSastYreference_binding,YPfalse);
  T11 = fun_reference_binding_33;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YevalSastYreference_binding,T9);
  lit_74 = YPPsym((P)"reference-binding-setter");
  lit_75 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T12 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLreal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_binding_setter_34 = YPfab_met(FUNCODEREF(fun_reference_binding_setter_34),T12,LITREF(lit_74),LITREF(lit_75),sloc(76),YPfalse);
  T14 = VARREF_OR(YevalSastYreference_binding_setter,YPfalse);
  T15 = fun_reference_binding_setter_34;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YevalSastYreference_binding_setter,T13);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLreal_referenceG),VARREF(YevalSastYreference_binding),VARREF(YevalSastYreference_binding_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_76 = YPPsym((P)"<local-reference>");
  T17 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLreal_referenceG),Ynil);
  T16 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_76),T17);
  VARSET(YevalSastYLlocal_referenceG,T16);
  lit_77 = YPPsym((P)"reference-called-function?");
  lit_78 = YPPlist(1,YPPsym((P)"_x"));
  T18 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_called_functionQ_35 = YPfab_met(FUNCODEREF(fun_reference_called_functionQ_35),T18,LITREF(lit_77),LITREF(lit_78),sloc(79),YPfalse);
  T20 = VARREF_OR(YevalSastYreference_called_functionQ,YPfalse);
  T21 = fun_reference_called_functionQ_35;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YevalSastYreference_called_functionQ,T19);
  lit_79 = YPPsym((P)"reference-called-function?-setter");
  lit_80 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T22 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_called_functionQ_setter_36 = YPfab_met(FUNCODEREF(fun_reference_called_functionQ_setter_36),T22,LITREF(lit_79),LITREF(lit_80),sloc(79),YPfalse);
  T24 = VARREF_OR(YevalSastYreference_called_functionQ_setter,YPfalse);
  T25 = fun_reference_called_functionQ_setter_36;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YevalSastYreference_called_functionQ_setter,T23);
  lit_81 = YPPlist(1,YPPsym((P)"_x"));
  T26 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_37 = YPfab_met(FUNCODEREF(fun_37),T26,YPfalse,LITREF(lit_81),sloc(79),YPfalse);
  T27 = fun_37;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_called_functionQ),VARREF(YevalSastYreference_called_functionQ_setter),VARREF(YLanyG),T27);
  lit_82 = YPPsym((P)"reference-frame-number");
  lit_83 = YPPlist(1,YPPsym((P)"_x"));
  T28 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_frame_number_38 = YPfab_met(FUNCODEREF(fun_reference_frame_number_38),T28,LITREF(lit_82),LITREF(lit_83),sloc(80),YPfalse);
  T30 = VARREF_OR(YevalSastYreference_frame_number,YPfalse);
  T31 = fun_reference_frame_number_38;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YevalSastYreference_frame_number,T29);
  lit_84 = YPPsym((P)"reference-frame-number-setter");
  lit_85 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T32 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_frame_number_setter_39 = YPfab_met(FUNCODEREF(fun_reference_frame_number_setter_39),T32,LITREF(lit_84),LITREF(lit_85),sloc(80),YPfalse);
  T34 = VARREF_OR(YevalSastYreference_frame_number_setter,YPfalse);
  T35 = fun_reference_frame_number_setter_39;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YevalSastYreference_frame_number_setter,T33);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_frame_number),VARREF(YevalSastYreference_frame_number_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_86 = YPPsym((P)"reference-frame-offset");
  lit_87 = YPPlist(1,YPPsym((P)"_x"));
  T36 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_frame_offset_40 = YPfab_met(FUNCODEREF(fun_reference_frame_offset_40),T36,LITREF(lit_86),LITREF(lit_87),sloc(81),YPfalse);
  T38 = VARREF_OR(YevalSastYreference_frame_offset,YPfalse);
  T39 = fun_reference_frame_offset_40;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YevalSastYreference_frame_offset,T37);
  lit_88 = YPPsym((P)"reference-frame-offset-setter");
  lit_89 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T40 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_frame_offset_setter_41 = YPfab_met(FUNCODEREF(fun_reference_frame_offset_setter_41),T40,LITREF(lit_88),LITREF(lit_89),sloc(81),YPfalse);
  T42 = VARREF_OR(YevalSastYreference_frame_offset_setter,YPfalse);
  T43 = fun_reference_frame_offset_setter_41;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YevalSastYreference_frame_offset_setter,T41);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_frame_offset),VARREF(YevalSastYreference_frame_offset_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_90 = YPPsym((P)"<module-binding-reference>");
  T45 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLreal_referenceG),Ynil);
  T44 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_90),T45);
  VARSET(YevalSastYLmodule_binding_referenceG,T44);
  lit_91 = YPPsym((P)"<global-reference>");
  T47 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T46 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_91),T47);
  VARSET(YevalSastYLglobal_referenceG,T46);
  lit_92 = YPPsym((P)"<runtime-reference>");
  T49 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T48 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_92),T49);
  VARSET(YevalSastYLruntime_referenceG,T48);
  lit_93 = YPPsym((P)"<dynamic-reference>");
  T51 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T50 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_93),T51);
  VARSET(YevalSastYLdynamic_referenceG,T50);
  lit_94 = YPPsym((P)"<predefined-reference>");
  T53 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLreal_referenceG),Ynil);
  T52 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_94),T53);
  VARSET(YevalSastYLpredefined_referenceG,T52);
  lit_95 = YPPsym((P)"<static-module-binding-reference>");
  T55 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLmodule_binding_referenceG),Ynil);
  T54 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_95),T55);
  VARSET(YevalSastYLstatic_module_binding_referenceG,T54);
  lit_96 = YPPsym((P)"<macro-reference>");
  T57 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLstatic_module_binding_referenceG),Ynil);
  T56 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_96),T57);
  VARSET(YevalSastYLmacro_referenceG,T56);
  lit_97 = YPPsym((P)"<magic-reference>");
  T59 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLstatic_module_binding_referenceG),Ynil);
  T58 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_97),T59);
  VARSET(YevalSastYLmagic_referenceG,T58);
  lit_98 = YPPsym((P)"<bound?>");
  T61 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T60 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_98),T61);
  VARSET(YevalSastYLboundQG,T60);
  lit_99 = YPPsym((P)"bound?-reference");
  lit_100 = YPPlist(1,YPPsym((P)"_x"));
  T62 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLboundQG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_boundQ_reference_42 = YPfab_met(FUNCODEREF(fun_boundQ_reference_42),T62,LITREF(lit_99),LITREF(lit_100),sloc(102),YPfalse);
  T64 = VARREF_OR(YevalSastYboundQ_reference,YPfalse);
  T65 = fun_boundQ_reference_42;
  T63 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T64,T65);
  VARSET(YevalSastYboundQ_reference,T63);
  lit_101 = YPPsym((P)"bound?-reference-setter");
  lit_102 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T66 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLboundQG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_boundQ_reference_setter_43 = YPfab_met(FUNCODEREF(fun_boundQ_reference_setter_43),T66,LITREF(lit_101),LITREF(lit_102),sloc(102),YPfalse);
  T68 = VARREF_OR(YevalSastYboundQ_reference_setter,YPfalse);
  T69 = fun_boundQ_reference_setter_43;
  T67 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T68,T69);
  VARSET(YevalSastYboundQ_reference_setter,T67);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLboundQG),VARREF(YevalSastYboundQ_reference),VARREF(YevalSastYboundQ_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_103 = YPPsym((P)"bound?-default");
  lit_104 = YPPlist(1,YPPsym((P)"_x"));
  T70 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLboundQG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_boundQ_default_44 = YPfab_met(FUNCODEREF(fun_boundQ_default_44),T70,LITREF(lit_103),LITREF(lit_104),sloc(103),YPfalse);
  T72 = VARREF_OR(YevalSastYboundQ_default,YPfalse);
  T73 = fun_boundQ_default_44;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YevalSastYboundQ_default,T71);
  lit_105 = YPPsym((P)"bound?-default-setter");
  lit_106 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T74 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLboundQG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_boundQ_default_setter_45 = YPfab_met(FUNCODEREF(fun_boundQ_default_setter_45),T74,LITREF(lit_105),LITREF(lit_106),sloc(103),YPfalse);
  T76 = VARREF_OR(YevalSastYboundQ_default_setter,YPfalse);
  T77 = fun_boundQ_default_setter_45;
  T75 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T76,T77);
  VARSET(YevalSastYboundQ_default_setter,T75);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLboundQG),VARREF(YevalSastYboundQ_default),VARREF(YevalSastYboundQ_default_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_107 = YPPsym((P)"<assignment>");
  T79 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T78 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_107),T79);
  VARSET(YevalSastYLassignmentG,T78);
  lit_108 = YPPsym((P)"assignment-form");
  lit_109 = YPPlist(1,YPPsym((P)"_x"));
  T80 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLassignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assignment_form_46 = YPfab_met(FUNCODEREF(fun_assignment_form_46),T80,LITREF(lit_108),LITREF(lit_109),sloc(106),YPfalse);
  T82 = VARREF_OR(YevalSastYassignment_form,YPfalse);
  T83 = fun_assignment_form_46;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YevalSastYassignment_form,T81);
  lit_110 = YPPsym((P)"assignment-form-setter");
  lit_111 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T84 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLassignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_form_setter_47 = YPfab_met(FUNCODEREF(fun_assignment_form_setter_47),T84,LITREF(lit_110),LITREF(lit_111),sloc(106),YPfalse);
  T86 = VARREF_OR(YevalSastYassignment_form_setter,YPfalse);
  T87 = fun_assignment_form_setter_47;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YevalSastYassignment_form_setter,T85);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLassignmentG),VARREF(YevalSastYassignment_form),VARREF(YevalSastYassignment_form_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_112 = YPPsym((P)"<local-assignment>");
  T89 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLassignmentG),Ynil);
  T88 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_112),T89);
  VARSET(YevalSastYLlocal_assignmentG,T88);
  lit_113 = YPPsym((P)"assignment-reference");
  lit_114 = YPPlist(1,YPPsym((P)"_x"));
  T90 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assignment_reference_48 = YPfab_met(FUNCODEREF(fun_assignment_reference_48),T90,LITREF(lit_113),LITREF(lit_114),sloc(109),YPfalse);
  T92 = VARREF_OR(YevalSastYassignment_reference,YPfalse);
  T93 = fun_assignment_reference_48;
  T91 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T92,T93);
  VARSET(YevalSastYassignment_reference,T91);
  lit_115 = YPPsym((P)"assignment-reference-setter");
  lit_116 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T94 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocal_assignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_reference_setter_49 = YPfab_met(FUNCODEREF(fun_assignment_reference_setter_49),T94,LITREF(lit_115),LITREF(lit_116),sloc(109),YPfalse);
  T96 = VARREF_OR(YevalSastYassignment_reference_setter,YPfalse);
  T97 = fun_assignment_reference_setter_49;
  T95 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T96,T97);
  VARSET(YevalSastYassignment_reference_setter,T95);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocal_assignmentG),VARREF(YevalSastYassignment_reference),VARREF(YevalSastYassignment_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_117 = YPPsym((P)"<global-assignment>");
  T99 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLassignmentG),Ynil);
  T98 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_117),T99);
  VARSET(YevalSastYLglobal_assignmentG,T98);
  lit_118 = YPPsym((P)"assignment-binding");
  lit_119 = YPPlist(1,YPPsym((P)"_x"));
  T100 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLglobal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assignment_binding_50 = YPfab_met(FUNCODEREF(fun_assignment_binding_50),T100,LITREF(lit_118),LITREF(lit_119),sloc(112),YPfalse);
  T102 = VARREF_OR(YevalSastYassignment_binding,YPfalse);
  T103 = fun_assignment_binding_50;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YevalSastYassignment_binding,T101);
  lit_120 = YPPsym((P)"assignment-binding-setter");
  lit_121 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T104 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLglobal_assignmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assignment_binding_setter_51 = YPfab_met(FUNCODEREF(fun_assignment_binding_setter_51),T104,LITREF(lit_120),LITREF(lit_121),sloc(112),YPfalse);
  T106 = VARREF_OR(YevalSastYassignment_binding_setter,YPfalse);
  T107 = fun_assignment_binding_setter_51;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YevalSastYassignment_binding_setter,T105);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLglobal_assignmentG),VARREF(YevalSastYassignment_binding),VARREF(YevalSastYassignment_binding_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_122 = YPPsym((P)"<runtime-assignment>");
  T109 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLglobal_assignmentG),Ynil);
  T108 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_122),T109);
  VARSET(YevalSastYLruntime_assignmentG,T108);
  lit_123 = YPPsym((P)"<dynamic-assignment>");
  T111 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLglobal_assignmentG),Ynil);
  T110 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_123),T111);
  VARSET(YevalSastYLdynamic_assignmentG,T110);
  lit_124 = YPPsym((P)"<definition>");
  T113 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLglobal_assignmentG),Ynil);
  T112 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_124),T113);
  VARSET(YevalSastYLdefinitionG,T112);
  lit_125 = YPPsym((P)"<variable-definition>");
  T115 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLdefinitionG),Ynil);
  T114 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_125),T115);
  VARSET(YevalSastYLvariable_definitionG,T114);
  lit_126 = YPPsym((P)"<dynamic-definition>");
  T117 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLvariable_definitionG),Ynil);
  T116 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_126),T117);
  VARSET(YevalSastYLdynamic_definitionG,T116);
  lit_127 = YPPsym((P)"<ast-generic-definition>");
  T121 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLdefinitionG),Ynil);
  T120 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_127),T121);
  T119 = VARSET(YevalSastYLast_generic_definitionG,T120);
  T118 = T119;
  return T118;
}

P YevalSastY___main_2___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151;
DEFCREGS();
  lit_128 = YPPsym((P)"<ast-function-definition>");
  T1 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLdefinitionG),Ynil);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_128),T1);
  VARSET(YevalSastYLast_function_definitionG,T0);
  lit_129 = YPPsym((P)"<ast-method-definition>");
  T3 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLdefinitionG),Ynil);
  T2 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_129),T3);
  VARSET(YevalSastYLast_method_definitionG,T2);
  lit_130 = YPPsym((P)"<ast-primitive-definition>");
  T5 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLdefinitionG),Ynil);
  T4 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_130),T5);
  VARSET(YevalSastYLast_primitive_definitionG,T4);
  lit_131 = YPPsym((P)"<ast-macro-definition>");
  T7 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLdefinitionG),Ynil);
  T6 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_131),T7);
  VARSET(YevalSastYLast_macro_definitionG,T6);
  lit_132 = YPPsym((P)"<ast-signature>");
  T9 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T8 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_132),T9);
  VARSET(YevalSastYLast_signatureG,T8);
  lit_133 = YPPsym((P)"signature-bindings");
  lit_134 = YPPlist(1,YPPsym((P)"_x"));
  T10 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_bindings_52 = YPfab_met(FUNCODEREF(fun_signature_bindings_52),T10,LITREF(lit_133),LITREF(lit_134),sloc(137),YPfalse);
  T12 = VARREF_OR(YevalSastYsignature_bindings,YPfalse);
  T13 = fun_signature_bindings_52;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YevalSastYsignature_bindings,T11);
  lit_135 = YPPsym((P)"signature-bindings-setter");
  lit_136 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T14 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_bindings_setter_53 = YPfab_met(FUNCODEREF(fun_signature_bindings_setter_53),T14,LITREF(lit_135),LITREF(lit_136),sloc(137),YPfalse);
  T16 = VARREF_OR(YevalSastYsignature_bindings_setter,YPfalse);
  T17 = fun_signature_bindings_setter_53;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YevalSastYsignature_bindings_setter,T15);
  lit_137 = YPPlist(1,YPPsym((P)"_x"));
  T18 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_54 = YPfab_met(FUNCODEREF(fun_54),T18,YPfalse,LITREF(lit_137),sloc(137),YPfalse);
  T19 = fun_54;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_bindings),VARREF(YevalSastYsignature_bindings_setter),VARREF(YLanyG),T19);
  lit_138 = YPPsym((P)"signature-names");
  lit_139 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_names_55 = YPfab_met(FUNCODEREF(fun_signature_names_55),T20,LITREF(lit_138),LITREF(lit_139),sloc(138),YPfalse);
  T22 = VARREF_OR(YevalSastYsignature_names,YPfalse);
  T23 = fun_signature_names_55;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSastYsignature_names,T21);
  lit_140 = YPPsym((P)"signature-names-setter");
  lit_141 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T24 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_names_setter_56 = YPfab_met(FUNCODEREF(fun_signature_names_setter_56),T24,LITREF(lit_140),LITREF(lit_141),sloc(138),YPfalse);
  T26 = VARREF_OR(YevalSastYsignature_names_setter,YPfalse);
  T27 = fun_signature_names_setter_56;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalSastYsignature_names_setter,T25);
  lit_142 = YPPlist(1,YPPsym((P)"_x"));
  T28 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_57 = YPfab_met(FUNCODEREF(fun_57),T28,YPfalse,LITREF(lit_142),sloc(138),YPfalse);
  T29 = fun_57;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_names),VARREF(YevalSastYsignature_names_setter),VARREF(YLanyG),T29);
  lit_143 = YPPsym((P)"signature-specs");
  lit_144 = YPPlist(1,YPPsym((P)"_x"));
  T30 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_specs_58 = YPfab_met(FUNCODEREF(fun_signature_specs_58),T30,LITREF(lit_143),LITREF(lit_144),sloc(139),YPfalse);
  T32 = VARREF_OR(YevalSastYsignature_specs,YPfalse);
  T33 = fun_signature_specs_58;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSastYsignature_specs,T31);
  lit_145 = YPPsym((P)"signature-specs-setter");
  lit_146 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T34 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_specs_setter_59 = YPfab_met(FUNCODEREF(fun_signature_specs_setter_59),T34,LITREF(lit_145),LITREF(lit_146),sloc(139),YPfalse);
  T36 = VARREF_OR(YevalSastYsignature_specs_setter,YPfalse);
  T37 = fun_signature_specs_setter_59;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YevalSastYsignature_specs_setter,T35);
  lit_147 = YPPlist(1,YPPsym((P)"_x"));
  T38 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_60 = YPfab_met(FUNCODEREF(fun_60),T38,YPfalse,LITREF(lit_147),sloc(139),YPfalse);
  T39 = fun_60;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_specs),VARREF(YevalSastYsignature_specs_setter),VARREF(YLanyG),T39);
  lit_148 = YPPsym((P)"signature-nary?");
  lit_149 = YPPlist(1,YPPsym((P)"_x"));
  T40 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_naryQ_61 = YPfab_met(FUNCODEREF(fun_signature_naryQ_61),T40,LITREF(lit_148),LITREF(lit_149),sloc(140),YPfalse);
  T42 = VARREF_OR(YevalSastYsignature_naryQ,YPfalse);
  T43 = fun_signature_naryQ_61;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YevalSastYsignature_naryQ,T41);
  lit_150 = YPPsym((P)"signature-nary?-setter");
  lit_151 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T44 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_naryQ_setter_62 = YPfab_met(FUNCODEREF(fun_signature_naryQ_setter_62),T44,LITREF(lit_150),LITREF(lit_151),sloc(140),YPfalse);
  T46 = VARREF_OR(YevalSastYsignature_naryQ_setter,YPfalse);
  T47 = fun_signature_naryQ_setter_62;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YevalSastYsignature_naryQ_setter,T45);
  lit_152 = YPPlist(1,YPPsym((P)"_x"));
  T48 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPfab_met(FUNCODEREF(fun_63),T48,YPfalse,LITREF(lit_152),sloc(140),YPfalse);
  T49 = fun_63;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_naryQ),VARREF(YevalSastYsignature_naryQ_setter),VARREF(YLanyG),T49);
  lit_153 = YPPsym((P)"signature-arity");
  lit_154 = YPPlist(1,YPPsym((P)"_x"));
  T50 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_arity_64 = YPfab_met(FUNCODEREF(fun_signature_arity_64),T50,LITREF(lit_153),LITREF(lit_154),sloc(141),YPfalse);
  T52 = VARREF_OR(YevalSastYsignature_arity,YPfalse);
  T53 = fun_signature_arity_64;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YevalSastYsignature_arity,T51);
  lit_155 = YPPsym((P)"signature-arity-setter");
  lit_156 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T54 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_arity_setter_65 = YPfab_met(FUNCODEREF(fun_signature_arity_setter_65),T54,LITREF(lit_155),LITREF(lit_156),sloc(141),YPfalse);
  T56 = VARREF_OR(YevalSastYsignature_arity_setter,YPfalse);
  T57 = fun_signature_arity_setter_65;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YevalSastYsignature_arity_setter,T55);
  lit_157 = YPPlist(1,YPPsym((P)"_x"));
  T58 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_66 = YPfab_met(FUNCODEREF(fun_66),T58,YPfalse,LITREF(lit_157),sloc(141),YPfalse);
  T59 = fun_66;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_arity),VARREF(YevalSastYsignature_arity_setter),VARREF(YLanyG),T59);
  lit_158 = YPPsym((P)"signature-value");
  lit_159 = YPPlist(1,YPPsym((P)"_x"));
  T60 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_signature_value_67 = YPfab_met(FUNCODEREF(fun_signature_value_67),T60,LITREF(lit_158),LITREF(lit_159),sloc(142),YPfalse);
  T62 = VARREF_OR(YevalSastYsignature_value,YPfalse);
  T63 = fun_signature_value_67;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YevalSastYsignature_value,T61);
  lit_160 = YPPsym((P)"signature-value-setter");
  lit_161 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T64 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_signature_value_setter_68 = YPfab_met(FUNCODEREF(fun_signature_value_setter_68),T64,LITREF(lit_160),LITREF(lit_161),sloc(142),YPfalse);
  T66 = VARREF_OR(YevalSastYsignature_value_setter,YPfalse);
  T67 = fun_signature_value_setter_68;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YevalSastYsignature_value_setter,T65);
  lit_162 = YPPlist(1,YPPsym((P)"_x"));
  T68 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPfab_met(FUNCODEREF(fun_69),T68,YPfalse,LITREF(lit_162),sloc(142),YPfalse);
  T69 = fun_69;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_signatureG),VARREF(YevalSastYsignature_value),VARREF(YevalSastYsignature_value_setter),VARREF(YLanyG),T69);
  lit_163 = YPPsym((P)"req-sig-specs");
  lit_164 = YPPlist(1,YPPsym((P)"sig"));
  T70 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_signatureG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_req_sig_specs_70 = YPfab_met(FUNCODEREF(fun_req_sig_specs_70),T70,LITREF(lit_163),LITREF(lit_164),sloc(145),YPfalse);
  T72 = VARREF_OR(YevalSastYreq_sig_specs,YPfalse);
  T73 = fun_req_sig_specs_70;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YevalSastYreq_sig_specs,T71);
  lit_165 = YPPsym((P)"<ast-function>");
  T76 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSdependencyYLdependentG),Ynil);
  T75 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),T76);
  T74 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_165),T75);
  VARSET(YevalSastYLast_functionG,T74);
  lit_166 = YPPsym((P)"function-binding");
  lit_167 = YPPlist(1,YPPsym((P)"_x"));
  T77 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_binding_71 = YPfab_met(FUNCODEREF(fun_function_binding_71),T77,LITREF(lit_166),LITREF(lit_167),sloc(152),YPfalse);
  T79 = VARREF_OR(YevalSastYfunction_binding,YPfalse);
  T80 = fun_function_binding_71;
  T78 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T79,T80);
  VARSET(YevalSastYfunction_binding,T78);
  lit_168 = YPPsym((P)"function-binding-setter");
  lit_169 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T81 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_binding_setter_72 = YPfab_met(FUNCODEREF(fun_function_binding_setter_72),T81,LITREF(lit_168),LITREF(lit_169),sloc(152),YPfalse);
  T83 = VARREF_OR(YevalSastYfunction_binding_setter,YPfalse);
  T84 = fun_function_binding_setter_72;
  T82 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T83,T84);
  VARSET(YevalSastYfunction_binding_setter,T82);
  lit_170 = YPPlist(1,YPPsym((P)"_x"));
  T85 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPfab_met(FUNCODEREF(fun_73),T85,YPfalse,LITREF(lit_170),sloc(152),YPfalse);
  T86 = fun_73;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_functionG),VARREF(YevalSastYfunction_binding),VARREF(YevalSastYfunction_binding_setter),VARREF(YLanyG),T86);
  lit_171 = YPPsym((P)"function-debug-name");
  lit_172 = YPPlist(1,YPPsym((P)"_x"));
  T87 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_debug_name_74 = YPfab_met(FUNCODEREF(fun_function_debug_name_74),T87,LITREF(lit_171),LITREF(lit_172),sloc(153),YPfalse);
  T89 = VARREF_OR(YevalSastYfunction_debug_name,YPfalse);
  T90 = fun_function_debug_name_74;
  T88 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T89,T90);
  VARSET(YevalSastYfunction_debug_name,T88);
  lit_173 = YPPsym((P)"function-debug-name-setter");
  lit_174 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T91 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_debug_name_setter_75 = YPfab_met(FUNCODEREF(fun_function_debug_name_setter_75),T91,LITREF(lit_173),LITREF(lit_174),sloc(153),YPfalse);
  T93 = VARREF_OR(YevalSastYfunction_debug_name_setter,YPfalse);
  T94 = fun_function_debug_name_setter_75;
  T92 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T93,T94);
  VARSET(YevalSastYfunction_debug_name_setter,T92);
  lit_175 = YPPlist(1,YPPsym((P)"_x"));
  T95 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_76 = YPfab_met(FUNCODEREF(fun_76),T95,YPfalse,LITREF(lit_175),sloc(153),YPfalse);
  T96 = fun_76;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_functionG),VARREF(YevalSastYfunction_debug_name),VARREF(YevalSastYfunction_debug_name_setter),VARREF(YLanyG),T96);
  lit_176 = YPPsym((P)"function-signature");
  lit_177 = YPPlist(1,YPPsym((P)"_x"));
  T97 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_signature_77 = YPfab_met(FUNCODEREF(fun_function_signature_77),T97,LITREF(lit_176),LITREF(lit_177),sloc(155),YPfalse);
  T99 = VARREF_OR(YevalSastYfunction_signature,YPfalse);
  T100 = fun_function_signature_77;
  T98 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T99,T100);
  VARSET(YevalSastYfunction_signature,T98);
  lit_178 = YPPsym((P)"function-signature-setter");
  lit_179 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T101 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_signature_setter_78 = YPfab_met(FUNCODEREF(fun_function_signature_setter_78),T101,LITREF(lit_178),LITREF(lit_179),sloc(155),YPfalse);
  T103 = VARREF_OR(YevalSastYfunction_signature_setter,YPfalse);
  T104 = fun_function_signature_setter_78;
  T102 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T103,T104);
  VARSET(YevalSastYfunction_signature_setter,T102);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_functionG),VARREF(YevalSastYfunction_signature),VARREF(YevalSastYfunction_signature_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_180 = YPPsym((P)"function-bindings");
  lit_181 = YPPlist(1,YPPsym((P)"x"));
  T105 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_bindings = YPfab_met(FUNCODEREF(YevalSastYfunction_bindings),T105,LITREF(lit_180),LITREF(lit_181),sloc(157),YPfalse);
  T106 = YevalSastYfunction_bindings;
  VARSET(YevalSastYfunction_bindings,T106);
  lit_182 = YPPsym((P)"function-names");
  lit_183 = YPPlist(1,YPPsym((P)"x"));
  T107 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_names = YPfab_met(FUNCODEREF(YevalSastYfunction_names),T107,LITREF(lit_182),LITREF(lit_183),sloc(159),YPfalse);
  T108 = YevalSastYfunction_names;
  VARSET(YevalSastYfunction_names,T108);
  lit_184 = YPPsym((P)"function-specs");
  lit_185 = YPPlist(1,YPPsym((P)"x"));
  T109 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_specs = YPfab_met(FUNCODEREF(YevalSastYfunction_specs),T109,LITREF(lit_184),LITREF(lit_185),sloc(161),YPfalse);
  T110 = YevalSastYfunction_specs;
  VARSET(YevalSastYfunction_specs,T110);
  lit_186 = YPPsym((P)"function-nary?");
  lit_187 = YPPlist(1,YPPsym((P)"x"));
  T111 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_naryQ = YPfab_met(FUNCODEREF(YevalSastYfunction_naryQ),T111,LITREF(lit_186),LITREF(lit_187),sloc(163),YPfalse);
  T112 = YevalSastYfunction_naryQ;
  VARSET(YevalSastYfunction_naryQ,T112);
  lit_188 = YPPsym((P)"function-arity");
  lit_189 = YPPlist(1,YPPsym((P)"x"));
  T113 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_arity = YPfab_met(FUNCODEREF(YevalSastYfunction_arity),T113,LITREF(lit_188),LITREF(lit_189),sloc(165),YPfalse);
  T114 = YevalSastYfunction_arity;
  VARSET(YevalSastYfunction_arity,T114);
  lit_190 = YPPsym((P)"function-value");
  lit_191 = YPPlist(1,YPPsym((P)"x"));
  T115 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_value = YPfab_met(FUNCODEREF(YevalSastYfunction_value),T115,LITREF(lit_190),LITREF(lit_191),sloc(167),YPfalse);
  T116 = YevalSastYfunction_value;
  VARSET(YevalSastYfunction_value,T116);
  lit_192 = YPPsym((P)"function-kind");
  lit_193 = YPPlist(1,YPPsym((P)"x"));
  lit_194 = YPsb((P)"FUN");
  T117 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_85 = YPfab_met(FUNCODEREF(fun_function_kind_85),T117,LITREF(lit_192),LITREF(lit_193),sloc(170),YPfalse);
  T119 = VARREF_OR(YevalSastYfunction_kind,YPfalse);
  T120 = fun_function_kind_85;
  T118 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T119,T120);
  VARSET(YevalSastYfunction_kind,T118);
  lit_195 = YPPsym((P)"function-display-name");
  lit_196 = YPPlist(1,YPPsym((P)"f"));
  lit_197 = YPsb((P)"%s:%s");
  lit_198 = YPsb((P)"anonymous function");
  T121 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYfunction_display_name = YPfab_met(FUNCODEREF(YevalSastYfunction_display_name),T121,LITREF(lit_195),LITREF(lit_196),sloc(172),YPfalse);
  T122 = YevalSastYfunction_display_name;
  VARSET(YevalSastYfunction_display_name,T122);
  lit_199 = YPPsym((P)"invalidate-dependent");
  lit_200 = YPPlist(3,YPPsym((P)"dependent"),YPPsym((P)"dependable"),YPPsym((P)"dtype"));
  lit_201 = YPsb((P)"warning: %s needs to be reparsed\n");
  lit_202 = YPsb((P)"warning: %s needs to be re-optimized\n");
  lit_203 = YPsb((P)"warning: unknown dependency of %s clobbered\n");
  T123 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLast_functionG),VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_invalidate_dependent_87 = YPfab_met(FUNCODEREF(fun_invalidate_dependent_87),T123,LITREF(lit_199),LITREF(lit_200),sloc(182),YPfalse);
  T125 = VARREF_OR(YevalSdependencyYinvalidate_dependent,YPfalse);
  T126 = fun_invalidate_dependent_87;
  T124 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T125,T126);
  VARSET(YevalSdependencyYinvalidate_dependent,T124);
  lit_204 = YPPsym((P)"<programs>");
  T128 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLpassive_programG),Ynil);
  T127 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_204),T128);
  VARSET(YevalSastYLprogramsG,T127);
  lit_205 = YPPsym((P)"as-lst");
  lit_206 = YPPlist(1,YPPsym((P)"e"));
  T129 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLprogramsG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_as_lst_88 = YPfab_met(FUNCODEREF(fun_as_lst_88),T129,LITREF(lit_205),LITREF(lit_206),sloc(198),YPfalse);
  T131 = VARREF_OR(YevalSastYas_lst,YPfalse);
  T132 = fun_as_lst_88;
  T130 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T131,T132);
  VARSET(YevalSastYas_lst,T130);
  lit_207 = YPPlist(1,YPPsym((P)"exp"));
  lit_208 = YPPlist(1,YPPsym((P)"return"));
  lit_209 = YPPsym((P)"x-1498");
  lit_210 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_211 = YPPsym((P)"def-programs");
  lit_212 = YPPsym((P)"def-list");
  T135 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1498_89 = YPfab_met(FUNCODEREF(fun_x_1498_89),T135,LITREF(lit_209),LITREF(lit_210),YPfalse,YPfalse);
  T134 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_90 = YPfab_met(FUNCODEREF(fun_90),T134,YPfalse,LITREF(lit_208),YPfalse,YPfalse);
  T133 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPfab_met(FUNCODEREF(fun_91),T133,YPfalse,LITREF(lit_207),YPfalse,YPfalse);
  T136 = fun_91;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"def-programs"),T136);
  lit_213 = YPPsym((P)"<ast-embodied-function>");
  T138 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLast_functionG),Ynil);
  T137 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_213),T138);
  VARSET(YevalSastYLast_embodied_functionG,T137);
  lit_214 = YPPsym((P)"function-body");
  lit_215 = YPPlist(1,YPPsym((P)"_x"));
  T139 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_body_92 = YPfab_met(FUNCODEREF(fun_function_body_92),T139,LITREF(lit_214),LITREF(lit_215),sloc(205),YPfalse);
  T141 = VARREF_OR(YevalSastYfunction_body,YPfalse);
  T142 = fun_function_body_92;
  T140 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T141,T142);
  VARSET(YevalSastYfunction_body,T140);
  lit_216 = YPPsym((P)"function-body-setter");
  lit_217 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T143 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_body_setter_93 = YPfab_met(FUNCODEREF(fun_function_body_setter_93),T143,LITREF(lit_216),LITREF(lit_217),sloc(205),YPfalse);
  T145 = VARREF_OR(YevalSastYfunction_body_setter,YPfalse);
  T146 = fun_function_body_setter_93;
  T144 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T145,T146);
  VARSET(YevalSastYfunction_body_setter,T144);
  lit_218 = YPPlist(1,YPPsym((P)"_x"));
  T149 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T148 = fun_94 = YPfab_met(FUNCODEREF(fun_94),T149,YPfalse,LITREF(lit_218),sloc(205),YPfalse);
  T151 = fun_94;
  T150 = XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_body),VARREF(YevalSastYfunction_body_setter),VARREF(YLanyG),T151);
  T147 = T150;
  return T147;
}

P YevalSastY___main_3___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154,T155,T156;
DEFCREGS();
  lit_219 = YPPsym((P)"function-index");
  lit_220 = YPPlist(1,YPPsym((P)"_x"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_index_95 = YPfab_met(FUNCODEREF(fun_function_index_95),T0,LITREF(lit_219),LITREF(lit_220),sloc(206),YPfalse);
  T2 = VARREF_OR(YevalSastYfunction_index,YPfalse);
  T3 = fun_function_index_95;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSastYfunction_index,T1);
  lit_221 = YPPsym((P)"function-index-setter");
  lit_222 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T4 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_index_setter_96 = YPfab_met(FUNCODEREF(fun_function_index_setter_96),T4,LITREF(lit_221),LITREF(lit_222),sloc(206),YPfalse);
  T6 = VARREF_OR(YevalSastYfunction_index_setter,YPfalse);
  T7 = fun_function_index_setter_96;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSastYfunction_index_setter,T5);
  lit_223 = YPPlist(1,YPPsym((P)"_x"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPfab_met(FUNCODEREF(fun_97),T8,YPfalse,LITREF(lit_223),sloc(206),YPfalse);
  T9 = fun_97;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_index),VARREF(YevalSastYfunction_index_setter),VARREF(YLanyG),T9);
  lit_224 = YPPsym((P)"function-temporaries");
  lit_225 = YPPlist(1,YPPsym((P)"_x"));
  T10 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_temporaries_98 = YPfab_met(FUNCODEREF(fun_function_temporaries_98),T10,LITREF(lit_224),LITREF(lit_225),sloc(207),YPfalse);
  T12 = VARREF_OR(YevalSastYfunction_temporaries,YPfalse);
  T13 = fun_function_temporaries_98;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YevalSastYfunction_temporaries,T11);
  lit_226 = YPPsym((P)"function-temporaries-setter");
  lit_227 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T14 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_temporaries_setter_99 = YPfab_met(FUNCODEREF(fun_function_temporaries_setter_99),T14,LITREF(lit_226),LITREF(lit_227),sloc(207),YPfalse);
  T16 = VARREF_OR(YevalSastYfunction_temporaries_setter,YPfalse);
  T17 = fun_function_temporaries_setter_99;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YevalSastYfunction_temporaries_setter,T15);
  lit_228 = YPPlist(1,YPPsym((P)"_x"));
  T18 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_100 = YPfab_met(FUNCODEREF(fun_100),T18,YPfalse,LITREF(lit_228),sloc(207),YPfalse);
  T19 = fun_100;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_temporaries),VARREF(YevalSastYfunction_temporaries_setter),VARREF(YLanyG),T19);
  lit_229 = YPPsym((P)"function-registers");
  lit_230 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_registers_101 = YPfab_met(FUNCODEREF(fun_function_registers_101),T20,LITREF(lit_229),LITREF(lit_230),sloc(208),YPfalse);
  T22 = VARREF_OR(YevalSastYfunction_registers,YPfalse);
  T23 = fun_function_registers_101;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSastYfunction_registers,T21);
  lit_231 = YPPsym((P)"function-registers-setter");
  lit_232 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T24 = YPfab_sig(YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_registers_setter_102 = YPfab_met(FUNCODEREF(fun_function_registers_setter_102),T24,LITREF(lit_231),LITREF(lit_232),sloc(208),YPfalse);
  T26 = VARREF_OR(YevalSastYfunction_registers_setter,YPfalse);
  T27 = fun_function_registers_setter_102;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalSastYfunction_registers_setter,T25);
  lit_233 = YPPlist(1,YPPsym((P)"_x"));
  T28 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_103 = YPfab_met(FUNCODEREF(fun_103),T28,YPfalse,LITREF(lit_233),sloc(208),YPfalse);
  T29 = fun_103;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_registers),VARREF(YevalSastYfunction_registers_setter),VARREF(YgooScolsSvecYLvecG),T29);
  lit_234 = YPPsym((P)"function-loop");
  lit_235 = YPPlist(1,YPPsym((P)"_x"));
  T30 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_loop_104 = YPfab_met(FUNCODEREF(fun_function_loop_104),T30,LITREF(lit_234),LITREF(lit_235),sloc(209),YPfalse);
  T32 = VARREF_OR(YevalSastYfunction_loop,YPfalse);
  T33 = fun_function_loop_104;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSastYfunction_loop,T31);
  lit_236 = YPPsym((P)"function-loop-setter");
  lit_237 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T34 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_loop_setter_105 = YPfab_met(FUNCODEREF(fun_function_loop_setter_105),T34,LITREF(lit_236),LITREF(lit_237),sloc(209),YPfalse);
  T36 = VARREF_OR(YevalSastYfunction_loop_setter,YPfalse);
  T37 = fun_function_loop_setter_105;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YevalSastYfunction_loop_setter,T35);
  lit_238 = YPPlist(1,YPPsym((P)"_x"));
  T38 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_106 = YPfab_met(FUNCODEREF(fun_106),T38,YPfalse,LITREF(lit_238),sloc(209),YPfalse);
  T39 = fun_106;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_loop),VARREF(YevalSastYfunction_loop_setter),VARREF(YLanyG),T39);
  lit_239 = YPPsym((P)"function-source");
  lit_240 = YPPlist(1,YPPsym((P)"_x"));
  T40 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_source_107 = YPfab_met(FUNCODEREF(fun_function_source_107),T40,LITREF(lit_239),LITREF(lit_240),sloc(210),YPfalse);
  T42 = VARREF_OR(YevalSastYfunction_source,YPfalse);
  T43 = fun_function_source_107;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YevalSastYfunction_source,T41);
  lit_241 = YPPsym((P)"function-source-setter");
  lit_242 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T44 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_source_setter_108 = YPfab_met(FUNCODEREF(fun_function_source_setter_108),T44,LITREF(lit_241),LITREF(lit_242),sloc(210),YPfalse);
  T46 = VARREF_OR(YevalSastYfunction_source_setter,YPfalse);
  T47 = fun_function_source_setter_108;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YevalSastYfunction_source_setter,T45);
  lit_243 = YPPlist(1,YPPsym((P)"_x"));
  T48 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_109 = YPfab_met(FUNCODEREF(fun_109),T48,YPfalse,LITREF(lit_243),sloc(210),YPfalse);
  T49 = fun_109;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_source),VARREF(YevalSastYfunction_source_setter),VARREF(YLanyG),T49);
  lit_244 = YPPsym((P)"function-frame-len");
  lit_245 = YPPlist(1,YPPsym((P)"_x"));
  T50 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_frame_len_110 = YPfab_met(FUNCODEREF(fun_function_frame_len_110),T50,LITREF(lit_244),LITREF(lit_245),sloc(211),YPfalse);
  T52 = VARREF_OR(YevalSastYfunction_frame_len,YPfalse);
  T53 = fun_function_frame_len_110;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YevalSastYfunction_frame_len,T51);
  lit_246 = YPPsym((P)"function-frame-len-setter");
  lit_247 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T54 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_frame_len_setter_111 = YPfab_met(FUNCODEREF(fun_function_frame_len_setter_111),T54,LITREF(lit_246),LITREF(lit_247),sloc(211),YPfalse);
  T56 = VARREF_OR(YevalSastYfunction_frame_len_setter,YPfalse);
  T57 = fun_function_frame_len_setter_111;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YevalSastYfunction_frame_len_setter,T55);
  lit_248 = YPPlist(1,YPPsym((P)"_x"));
  T58 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_112 = YPfab_met(FUNCODEREF(fun_112),T58,YPfalse,LITREF(lit_248),sloc(211),YPfalse);
  T59 = fun_112;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_frame_len),VARREF(YevalSastYfunction_frame_len_setter),VARREF(YLanyG),T59);
  lit_249 = YPPsym((P)"function-adjectives");
  lit_250 = YPPlist(1,YPPsym((P)"_x"));
  T60 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_adjectives_113 = YPfab_met(FUNCODEREF(fun_function_adjectives_113),T60,LITREF(lit_249),LITREF(lit_250),sloc(212),YPfalse);
  T62 = VARREF_OR(YevalSastYfunction_adjectives,YPfalse);
  T63 = fun_function_adjectives_113;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YevalSastYfunction_adjectives,T61);
  lit_251 = YPPsym((P)"function-adjectives-setter");
  lit_252 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T64 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_adjectives_setter_114 = YPfab_met(FUNCODEREF(fun_function_adjectives_setter_114),T64,LITREF(lit_251),LITREF(lit_252),sloc(212),YPfalse);
  T66 = VARREF_OR(YevalSastYfunction_adjectives_setter,YPfalse);
  T67 = fun_function_adjectives_setter_114;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YevalSastYfunction_adjectives_setter,T65);
  lit_253 = YPPlist(1,YPPsym((P)"_x"));
  T68 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_115 = YPfab_met(FUNCODEREF(fun_115),T68,YPfalse,LITREF(lit_253),sloc(212),YPfalse);
  T69 = fun_115;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_embodied_functionG),VARREF(YevalSastYfunction_adjectives),VARREF(YevalSastYfunction_adjectives_setter),VARREF(YLlstG),T69);
  lit_254 = YPPsym((P)"<free-environment>");
  T72 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLprogramsG),Ynil);
  T71 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLlstG),T72);
  T70 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_254),T71);
  VARSET(YevalSastYLfree_environmentG,T70);
  T73 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLfree_environmentG));
  VARSET(YevalSastYDfree_environment_nul,T73);
  lit_255 = YPPsym((P)"free-environment");
  lit_256 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T74 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYfree_environment = YPfab_met(FUNCODEREF(YevalSastYfree_environment),T74,LITREF(lit_255),LITREF(lit_256),sloc(214),YPfalse);
  T75 = YevalSastYfree_environment;
  VARSET(YevalSastYfree_environment,T75);
  lit_257 = YPPsym((P)"nul");
  lit_258 = YPPlist(1,YPPsym((P)"e"));
  T77 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLfree_environmentG));
  T76 = YPfab_sig(YPPlist(1,T77),YPfalse,YPint((P)1),VARREF(YevalSastYLfree_environmentG),Ynil);
  fun_nul_117 = YPfab_met(FUNCODEREF(fun_nul_117),T76,LITREF(lit_257),LITREF(lit_258),sloc(214),YPfalse);
  T79 = VARREF_OR(YgooScolsScolYnul,YPfalse);
  T80 = fun_nul_117;
  T78 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T79,T80);
  VARSET(YgooScolsScolYnul,T78);
  lit_259 = YPPsym((P)"<ast-method>");
  T82 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLast_embodied_functionG),Ynil);
  T81 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_259),T82);
  VARSET(YevalSastYLast_methodG,T81);
  lit_260 = YPPsym((P)"function-ref-count");
  lit_261 = YPPlist(1,YPPsym((P)"_x"));
  T83 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_ref_count_118 = YPfab_met(FUNCODEREF(fun_function_ref_count_118),T83,LITREF(lit_260),LITREF(lit_261),sloc(217),YPfalse);
  T85 = VARREF_OR(YevalSastYfunction_ref_count,YPfalse);
  T86 = fun_function_ref_count_118;
  T84 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T85,T86);
  VARSET(YevalSastYfunction_ref_count,T84);
  lit_262 = YPPsym((P)"function-ref-count-setter");
  lit_263 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T87 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_ref_count_setter_119 = YPfab_met(FUNCODEREF(fun_function_ref_count_setter_119),T87,LITREF(lit_262),LITREF(lit_263),sloc(217),YPfalse);
  T89 = VARREF_OR(YevalSastYfunction_ref_count_setter,YPfalse);
  T90 = fun_function_ref_count_setter_119;
  T88 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T89,T90);
  VARSET(YevalSastYfunction_ref_count_setter,T88);
  lit_264 = YPPlist(1,YPPsym((P)"_x"));
  T91 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_120 = YPfab_met(FUNCODEREF(fun_120),T91,YPfalse,LITREF(lit_264),sloc(217),YPfalse);
  T92 = fun_120;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_methodG),VARREF(YevalSastYfunction_ref_count),VARREF(YevalSastYfunction_ref_count_setter),VARREF(YLintG),T92);
  lit_265 = YPPsym((P)"function-free");
  lit_266 = YPPlist(1,YPPsym((P)"_x"));
  T93 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_free_121 = YPfab_met(FUNCODEREF(fun_function_free_121),T93,LITREF(lit_265),LITREF(lit_266),sloc(218),YPfalse);
  T95 = VARREF_OR(YevalSastYfunction_free,YPfalse);
  T96 = fun_function_free_121;
  T94 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T95,T96);
  VARSET(YevalSastYfunction_free,T94);
  lit_267 = YPPsym((P)"function-free-setter");
  lit_268 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T97 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLfree_environmentG),VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_function_free_setter_122 = YPfab_met(FUNCODEREF(fun_function_free_setter_122),T97,LITREF(lit_267),LITREF(lit_268),sloc(218),YPfalse);
  T99 = VARREF_OR(YevalSastYfunction_free_setter,YPfalse);
  T100 = fun_function_free_setter_122;
  T98 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T99,T100);
  VARSET(YevalSastYfunction_free_setter,T98);
  lit_269 = YPPlist(1,YPPsym((P)"_x"));
  T101 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_123 = YPfab_met(FUNCODEREF(fun_123),T101,YPfalse,LITREF(lit_269),sloc(218),YPfalse);
  T102 = fun_123;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLast_methodG),VARREF(YevalSastYfunction_free),VARREF(YevalSastYfunction_free_setter),VARREF(YevalSastYLfree_environmentG),T102);
  lit_270 = YPPsym((P)"incf-ref-count");
  lit_271 = YPPlist(1,YPPsym((P)"x"));
  T103 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_incf_ref_count_124 = YPfab_met(FUNCODEREF(fun_incf_ref_count_124),T103,LITREF(lit_270),LITREF(lit_271),sloc(221),YPfalse);
  T105 = VARREF_OR(YevalSastYincf_ref_count,YPfalse);
  T106 = fun_incf_ref_count_124;
  T104 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T105,T106);
  VARSET(YevalSastYincf_ref_count,T104);
  lit_272 = YPPlist(1,YPPsym((P)"x"));
  T107 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_incf_ref_count_125 = YPfab_met(FUNCODEREF(fun_incf_ref_count_125),T107,LITREF(lit_270),LITREF(lit_272),sloc(222),YPfalse);
  T109 = VARREF_OR(YevalSastYincf_ref_count,YPfalse);
  T110 = fun_incf_ref_count_125;
  T108 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T109,T110);
  VARSET(YevalSastYincf_ref_count,T108);
  lit_273 = YPPlist(1,YPPsym((P)"x"));
  lit_274 = YPsb((P)"MET");
  T111 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_126 = YPfab_met(FUNCODEREF(fun_function_kind_126),T111,LITREF(lit_192),LITREF(lit_273),sloc(224),YPfalse);
  T113 = VARREF_OR(YevalSastYfunction_kind,YPfalse);
  T114 = fun_function_kind_126;
  T112 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T113,T114);
  VARSET(YevalSastYfunction_kind,T112);
  lit_275 = YPPsym((P)"<ast-primitive>");
  T116 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLast_embodied_functionG),Ynil);
  T115 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_275),T116);
  VARSET(YevalSastYLast_primitiveG,T115);
  lit_276 = YPPlist(1,YPPsym((P)"x"));
  lit_277 = YPsb((P)"PRM");
  T117 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_127 = YPfab_met(FUNCODEREF(fun_function_kind_127),T117,LITREF(lit_192),LITREF(lit_276),sloc(228),YPfalse);
  T119 = VARREF_OR(YevalSastYfunction_kind,YPfalse);
  T120 = fun_function_kind_127;
  T118 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T119,T120);
  VARSET(YevalSastYfunction_kind,T118);
  lit_278 = YPPsym((P)"<ast-generic>");
  T122 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLast_functionG),Ynil);
  T121 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_278),T122);
  VARSET(YevalSastYLast_genericG,T121);
  lit_279 = YPPlist(1,YPPsym((P)"x"));
  lit_280 = YPsb((P)"GEN");
  T123 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_genericG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_kind_128 = YPfab_met(FUNCODEREF(fun_function_kind_128),T123,LITREF(lit_192),LITREF(lit_279),sloc(232),YPfalse);
  T125 = VARREF_OR(YevalSastYfunction_kind,YPfalse);
  T126 = fun_function_kind_128;
  T124 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T125,T126);
  VARSET(YevalSastYfunction_kind,T124);
  lit_281 = YPPsym((P)"<alternative>");
  T128 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T127 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_281),T128);
  VARSET(YevalSastYLalternativeG,T127);
  lit_282 = YPPsym((P)"alternative-condition");
  lit_283 = YPPlist(1,YPPsym((P)"_x"));
  T129 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_condition_129 = YPfab_met(FUNCODEREF(fun_alternative_condition_129),T129,LITREF(lit_282),LITREF(lit_283),sloc(235),YPfalse);
  T131 = VARREF_OR(YevalSastYalternative_condition,YPfalse);
  T132 = fun_alternative_condition_129;
  T130 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T131,T132);
  VARSET(YevalSastYalternative_condition,T130);
  lit_284 = YPPsym((P)"alternative-condition-setter");
  lit_285 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T133 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_condition_setter_130 = YPfab_met(FUNCODEREF(fun_alternative_condition_setter_130),T133,LITREF(lit_284),LITREF(lit_285),sloc(235),YPfalse);
  T135 = VARREF_OR(YevalSastYalternative_condition_setter,YPfalse);
  T136 = fun_alternative_condition_setter_130;
  T134 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T135,T136);
  VARSET(YevalSastYalternative_condition_setter,T134);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_condition),VARREF(YevalSastYalternative_condition_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_286 = YPPsym((P)"alternative-consequent");
  lit_287 = YPPlist(1,YPPsym((P)"_x"));
  T137 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_consequent_131 = YPfab_met(FUNCODEREF(fun_alternative_consequent_131),T137,LITREF(lit_286),LITREF(lit_287),sloc(236),YPfalse);
  T139 = VARREF_OR(YevalSastYalternative_consequent,YPfalse);
  T140 = fun_alternative_consequent_131;
  T138 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T139,T140);
  VARSET(YevalSastYalternative_consequent,T138);
  lit_288 = YPPsym((P)"alternative-consequent-setter");
  lit_289 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T141 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_consequent_setter_132 = YPfab_met(FUNCODEREF(fun_alternative_consequent_setter_132),T141,LITREF(lit_288),LITREF(lit_289),sloc(236),YPfalse);
  T143 = VARREF_OR(YevalSastYalternative_consequent_setter,YPfalse);
  T144 = fun_alternative_consequent_setter_132;
  T142 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T143,T144);
  VARSET(YevalSastYalternative_consequent_setter,T142);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_consequent),VARREF(YevalSastYalternative_consequent_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_290 = YPPsym((P)"alternative-alternant");
  lit_291 = YPPlist(1,YPPsym((P)"_x"));
  T145 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_alternative_alternant_133 = YPfab_met(FUNCODEREF(fun_alternative_alternant_133),T145,LITREF(lit_290),LITREF(lit_291),sloc(237),YPfalse);
  T147 = VARREF_OR(YevalSastYalternative_alternant,YPfalse);
  T148 = fun_alternative_alternant_133;
  T146 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T147,T148);
  VARSET(YevalSastYalternative_alternant,T146);
  lit_292 = YPPsym((P)"alternative-alternant-setter");
  lit_293 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T149 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLalternativeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_alternative_alternant_setter_134 = YPfab_met(FUNCODEREF(fun_alternative_alternant_setter_134),T149,LITREF(lit_292),LITREF(lit_293),sloc(237),YPfalse);
  T151 = VARREF_OR(YevalSastYalternative_alternant_setter,YPfalse);
  T152 = fun_alternative_alternant_setter_134;
  T150 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T151,T152);
  VARSET(YevalSastYalternative_alternant_setter,T150);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLalternativeG),VARREF(YevalSastYalternative_alternant),VARREF(YevalSastYalternative_alternant_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_294 = YPPsym((P)"<loop>");
  T156 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T155 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_294),T156);
  T154 = VARSET(YevalSastYLloopG,T155);
  T153 = T154;
  return T153;
}

P YevalSastY___main_4___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138;
DEFCREGS();
  lit_295 = YPPsym((P)"loop-bindings");
  lit_296 = YPPlist(1,YPPsym((P)"_x"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLloopG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_bindings_135 = YPfab_met(FUNCODEREF(fun_loop_bindings_135),T0,LITREF(lit_295),LITREF(lit_296),sloc(240),YPfalse);
  T2 = VARREF_OR(YevalSastYloop_bindings,YPfalse);
  T3 = fun_loop_bindings_135;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSastYloop_bindings,T1);
  lit_297 = YPPsym((P)"loop-bindings-setter");
  lit_298 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T4 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLloopG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_bindings_setter_136 = YPfab_met(FUNCODEREF(fun_loop_bindings_setter_136),T4,LITREF(lit_297),LITREF(lit_298),sloc(240),YPfalse);
  T6 = VARREF_OR(YevalSastYloop_bindings_setter,YPfalse);
  T7 = fun_loop_bindings_setter_136;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSastYloop_bindings_setter,T5);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLloopG),VARREF(YevalSastYloop_bindings),VARREF(YevalSastYloop_bindings_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_299 = YPPsym((P)"loop-body");
  lit_300 = YPPlist(1,YPPsym((P)"_x"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLloopG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_body_137 = YPfab_met(FUNCODEREF(fun_loop_body_137),T8,LITREF(lit_299),LITREF(lit_300),sloc(241),YPfalse);
  T10 = VARREF_OR(YevalSastYloop_body,YPfalse);
  T11 = fun_loop_body_137;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YevalSastYloop_body,T9);
  lit_301 = YPPsym((P)"loop-body-setter");
  lit_302 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T12 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLloopG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_body_setter_138 = YPfab_met(FUNCODEREF(fun_loop_body_setter_138),T12,LITREF(lit_301),LITREF(lit_302),sloc(241),YPfalse);
  T14 = VARREF_OR(YevalSastYloop_body_setter,YPfalse);
  T15 = fun_loop_body_setter_138;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YevalSastYloop_body_setter,T13);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLloopG),VARREF(YevalSastYloop_body),VARREF(YevalSastYloop_body_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_303 = YPPsym((P)"loop-continue");
  lit_304 = YPPlist(1,YPPsym((P)"_x"));
  T16 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLloopG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_continue_139 = YPfab_met(FUNCODEREF(fun_loop_continue_139),T16,LITREF(lit_303),LITREF(lit_304),sloc(242),YPfalse);
  T18 = VARREF_OR(YevalSastYloop_continue,YPfalse);
  T19 = fun_loop_continue_139;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalSastYloop_continue,T17);
  lit_305 = YPPsym((P)"loop-continue-setter");
  lit_306 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T20 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLloopG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_continue_setter_140 = YPfab_met(FUNCODEREF(fun_loop_continue_setter_140),T20,LITREF(lit_305),LITREF(lit_306),sloc(242),YPfalse);
  T22 = VARREF_OR(YevalSastYloop_continue_setter,YPfalse);
  T23 = fun_loop_continue_setter_140;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSastYloop_continue_setter,T21);
  lit_307 = YPPlist(1,YPPsym((P)"_x"));
  T24 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_141 = YPfab_met(FUNCODEREF(fun_141),T24,YPfalse,LITREF(lit_307),sloc(242),YPfalse);
  T25 = fun_141;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLloopG),VARREF(YevalSastYloop_continue),VARREF(YevalSastYloop_continue_setter),VARREF(YLanyG),T25);
  lit_308 = YPPsym((P)"<sequential>");
  T28 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLprogramsG),Ynil);
  T27 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLlstG),T28);
  T26 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_308),T27);
  VARSET(YevalSastYLsequentialG,T26);
  T29 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLsequentialG));
  VARSET(YevalSastYDsequential_nul,T29);
  lit_309 = YPPsym((P)"sequential");
  lit_310 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T30 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYsequential = YPfab_met(FUNCODEREF(YevalSastYsequential),T30,LITREF(lit_309),LITREF(lit_310),sloc(244),YPfalse);
  T31 = YevalSastYsequential;
  VARSET(YevalSastYsequential,T31);
  lit_311 = YPPlist(1,YPPsym((P)"e"));
  T33 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLsequentialG));
  T32 = YPfab_sig(YPPlist(1,T33),YPfalse,YPint((P)1),VARREF(YevalSastYLsequentialG),Ynil);
  fun_nul_143 = YPfab_met(FUNCODEREF(fun_nul_143),T32,LITREF(lit_257),LITREF(lit_311),sloc(244),YPfalse);
  T35 = VARREF_OR(YgooScolsScolYnul,YPfalse);
  T36 = fun_nul_143;
  T34 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T35,T36);
  VARSET(YgooScolsScolYnul,T34);
  lit_312 = YPPsym((P)"<constant>");
  T38 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLpassive_programG),Ynil);
  T37 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_312),T38);
  VARSET(YevalSastYLconstantG,T37);
  lit_313 = YPPsym((P)"constant-value");
  lit_314 = YPPlist(1,YPPsym((P)"_x"));
  T39 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_constant_value_144 = YPfab_met(FUNCODEREF(fun_constant_value_144),T39,LITREF(lit_313),LITREF(lit_314),sloc(247),YPfalse);
  T41 = VARREF_OR(YevalSastYconstant_value,YPfalse);
  T42 = fun_constant_value_144;
  T40 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T41,T42);
  VARSET(YevalSastYconstant_value,T40);
  lit_315 = YPPsym((P)"constant-value-setter");
  lit_316 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T43 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_constant_value_setter_145 = YPfab_met(FUNCODEREF(fun_constant_value_setter_145),T43,LITREF(lit_315),LITREF(lit_316),sloc(247),YPfalse);
  T45 = VARREF_OR(YevalSastYconstant_value_setter,YPfalse);
  T46 = fun_constant_value_setter_145;
  T44 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T45,T46);
  VARSET(YevalSastYconstant_value_setter,T44);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),VARREF(YevalSastYconstant_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_317 = YPPsym((P)"constant-index");
  lit_318 = YPPlist(1,YPPsym((P)"_x"));
  T47 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_constant_index_146 = YPfab_met(FUNCODEREF(fun_constant_index_146),T47,LITREF(lit_317),LITREF(lit_318),sloc(248),YPfalse);
  T49 = VARREF_OR(YevalSastYconstant_index,YPfalse);
  T50 = fun_constant_index_146;
  T48 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T49,T50);
  VARSET(YevalSastYconstant_index,T48);
  lit_319 = YPPsym((P)"constant-index-setter");
  lit_320 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T51 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_constant_index_setter_147 = YPfab_met(FUNCODEREF(fun_constant_index_setter_147),T51,LITREF(lit_319),LITREF(lit_320),sloc(248),YPfalse);
  T53 = VARREF_OR(YevalSastYconstant_index_setter,YPfalse);
  T54 = fun_constant_index_setter_147;
  T52 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T53,T54);
  VARSET(YevalSastYconstant_index_setter,T52);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_index),VARREF(YevalSastYconstant_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_321 = YPPsym((P)"<raw-constant>");
  T56 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLconstantG),Ynil);
  T55 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_321),T56);
  VARSET(YevalSastYLraw_constantG,T55);
  lit_322 = YPPsym((P)"<immediate-constant>");
  T58 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLconstantG),Ynil);
  T57 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_322),T58);
  VARSET(YevalSastYLimmediate_constantG,T57);
  lit_323 = YPPsym((P)"<application>");
  T60 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T59 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_323),T60);
  VARSET(YevalSastYLapplicationG,T59);
  lit_324 = YPPsym((P)"application-arguments");
  lit_325 = YPPlist(1,YPPsym((P)"_x"));
  T61 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_arguments_148 = YPfab_met(FUNCODEREF(fun_application_arguments_148),T61,LITREF(lit_324),LITREF(lit_325),sloc(255),YPfalse);
  T63 = VARREF_OR(YevalSastYapplication_arguments,YPfalse);
  T64 = fun_application_arguments_148;
  T62 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T63,T64);
  VARSET(YevalSastYapplication_arguments,T62);
  lit_326 = YPPsym((P)"application-arguments-setter");
  lit_327 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T65 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_arguments_setter_149 = YPfab_met(FUNCODEREF(fun_application_arguments_setter_149),T65,LITREF(lit_326),LITREF(lit_327),sloc(255),YPfalse);
  T67 = VARREF_OR(YevalSastYapplication_arguments_setter,YPfalse);
  T68 = fun_application_arguments_setter_149;
  T66 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T67,T68);
  VARSET(YevalSastYapplication_arguments_setter,T66);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLapplicationG),VARREF(YevalSastYapplication_arguments),VARREF(YevalSastYapplication_arguments_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_328 = YPPsym((P)"application-tail?");
  lit_329 = YPPlist(1,YPPsym((P)"_x"));
  T69 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_tailQ_150 = YPfab_met(FUNCODEREF(fun_application_tailQ_150),T69,LITREF(lit_328),LITREF(lit_329),sloc(256),YPfalse);
  T71 = VARREF_OR(YevalSastYapplication_tailQ,YPfalse);
  T72 = fun_application_tailQ_150;
  T70 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T71,T72);
  VARSET(YevalSastYapplication_tailQ,T70);
  lit_330 = YPPsym((P)"application-tail?-setter");
  lit_331 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T73 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLapplicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_tailQ_setter_151 = YPfab_met(FUNCODEREF(fun_application_tailQ_setter_151),T73,LITREF(lit_330),LITREF(lit_331),sloc(256),YPfalse);
  T75 = VARREF_OR(YevalSastYapplication_tailQ_setter,YPfalse);
  T76 = fun_application_tailQ_setter_151;
  T74 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T75,T76);
  VARSET(YevalSastYapplication_tailQ_setter,T74);
  lit_332 = YPPlist(1,YPPsym((P)"_x"));
  T77 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_152 = YPfab_met(FUNCODEREF(fun_152),T77,YPfalse,LITREF(lit_332),sloc(256),YPfalse);
  T78 = fun_152;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLapplicationG),VARREF(YevalSastYapplication_tailQ),VARREF(YevalSastYapplication_tailQ_setter),VARREF(YLanyG),T78);
  lit_333 = YPPsym((P)"<loop-application>");
  T80 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLapplicationG),Ynil);
  T79 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_333),T80);
  VARSET(YevalSastYLloop_applicationG,T79);
  lit_334 = YPPsym((P)"application-loop");
  lit_335 = YPPlist(1,YPPsym((P)"_x"));
  T81 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLloop_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_loop_153 = YPfab_met(FUNCODEREF(fun_application_loop_153),T81,LITREF(lit_334),LITREF(lit_335),sloc(259),YPfalse);
  T83 = VARREF_OR(YevalSastYapplication_loop,YPfalse);
  T84 = fun_application_loop_153;
  T82 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T83,T84);
  VARSET(YevalSastYapplication_loop,T82);
  lit_336 = YPPsym((P)"application-loop-setter");
  lit_337 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T85 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLloopG),VARREF(YevalSastYLloop_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_loop_setter_154 = YPfab_met(FUNCODEREF(fun_application_loop_setter_154),T85,LITREF(lit_336),LITREF(lit_337),sloc(259),YPfalse);
  T87 = VARREF_OR(YevalSastYapplication_loop_setter,YPfalse);
  T88 = fun_application_loop_setter_154;
  T86 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T87,T88);
  VARSET(YevalSastYapplication_loop_setter,T86);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLloop_applicationG),VARREF(YevalSastYapplication_loop),VARREF(YevalSastYapplication_loop_setter),VARREF(YevalSastYLloopG),VARREF(YPprop_unbound_error));
  lit_338 = YPPlist(1,YPPsym((P)"x"));
  T89 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLloop_applicationG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_application_tailQ_155 = YPfab_met(FUNCODEREF(fun_application_tailQ_155),T89,LITREF(lit_328),LITREF(lit_338),sloc(261),YPfalse);
  T91 = VARREF_OR(YevalSastYapplication_tailQ,YPfalse);
  T92 = fun_application_tailQ_155;
  T90 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T91,T92);
  VARSET(YevalSastYapplication_tailQ,T90);
  lit_339 = YPPsym((P)"<regular-application>");
  T94 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLapplicationG),Ynil);
  T93 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_339),T94);
  VARSET(YevalSastYLregular_applicationG,T93);
  lit_340 = YPPsym((P)"application-function");
  lit_341 = YPPlist(1,YPPsym((P)"_x"));
  T95 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_function_156 = YPfab_met(FUNCODEREF(fun_application_function_156),T95,LITREF(lit_340),LITREF(lit_341),sloc(264),YPfalse);
  T97 = VARREF_OR(YevalSastYapplication_function,YPfalse);
  T98 = fun_application_function_156;
  T96 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T97,T98);
  VARSET(YevalSastYapplication_function,T96);
  lit_342 = YPPsym((P)"application-function-setter");
  lit_343 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T99 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_function_setter_157 = YPfab_met(FUNCODEREF(fun_application_function_setter_157),T99,LITREF(lit_342),LITREF(lit_343),sloc(264),YPfalse);
  T101 = VARREF_OR(YevalSastYapplication_function_setter,YPfalse);
  T102 = fun_application_function_setter_157;
  T100 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T101,T102);
  VARSET(YevalSastYapplication_function_setter,T100);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLregular_applicationG),VARREF(YevalSastYapplication_function),VARREF(YevalSastYapplication_function_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_344 = YPPsym((P)"application-known?");
  lit_345 = YPPlist(1,YPPsym((P)"_x"));
  T103 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_knownQ_158 = YPfab_met(FUNCODEREF(fun_application_knownQ_158),T103,LITREF(lit_344),LITREF(lit_345),sloc(265),YPfalse);
  T105 = VARREF_OR(YevalSastYapplication_knownQ,YPfalse);
  T106 = fun_application_knownQ_158;
  T104 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T105,T106);
  VARSET(YevalSastYapplication_knownQ,T104);
  lit_346 = YPPsym((P)"application-known?-setter");
  lit_347 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T107 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_knownQ_setter_159 = YPfab_met(FUNCODEREF(fun_application_knownQ_setter_159),T107,LITREF(lit_346),LITREF(lit_347),sloc(265),YPfalse);
  T109 = VARREF_OR(YevalSastYapplication_knownQ_setter,YPfalse);
  T110 = fun_application_knownQ_setter_159;
  T108 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T109,T110);
  VARSET(YevalSastYapplication_knownQ_setter,T108);
  lit_348 = YPPlist(1,YPPsym((P)"_x"));
  T111 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_160 = YPfab_met(FUNCODEREF(fun_160),T111,YPfalse,LITREF(lit_348),sloc(265),YPfalse);
  T112 = fun_160;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLregular_applicationG),VARREF(YevalSastYapplication_knownQ),VARREF(YevalSastYapplication_knownQ_setter),VARREF(YLanyG),T112);
  lit_349 = YPPsym((P)"<method-application>");
  T114 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLregular_applicationG),Ynil);
  T113 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_349),T114);
  VARSET(YevalSastYLmethod_applicationG,T113);
  lit_350 = YPPsym((P)"application-next-methods");
  lit_351 = YPPlist(1,YPPsym((P)"_x"));
  T115 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLmethod_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_next_methods_161 = YPfab_met(FUNCODEREF(fun_application_next_methods_161),T115,LITREF(lit_350),LITREF(lit_351),sloc(268),YPfalse);
  T117 = VARREF_OR(YevalSastYapplication_next_methods,YPfalse);
  T118 = fun_application_next_methods_161;
  T116 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T117,T118);
  VARSET(YevalSastYapplication_next_methods,T116);
  lit_352 = YPPsym((P)"application-next-methods-setter");
  lit_353 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T119 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmethod_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_next_methods_setter_162 = YPfab_met(FUNCODEREF(fun_application_next_methods_setter_162),T119,LITREF(lit_352),LITREF(lit_353),sloc(268),YPfalse);
  T121 = VARREF_OR(YevalSastYapplication_next_methods_setter,YPfalse);
  T122 = fun_application_next_methods_setter_162;
  T120 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T121,T122);
  VARSET(YevalSastYapplication_next_methods_setter,T120);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmethod_applicationG),VARREF(YevalSastYapplication_next_methods),VARREF(YevalSastYapplication_next_methods_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_354 = YPPlist(1,YPPsym((P)"x"));
  T123 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLmethod_applicationG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_application_knownQ_163 = YPfab_met(FUNCODEREF(fun_application_knownQ_163),T123,LITREF(lit_344),LITREF(lit_354),sloc(270),YPfalse);
  T125 = VARREF_OR(YevalSastYapplication_knownQ,YPfalse);
  T126 = fun_application_knownQ_163;
  T124 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T125,T126);
  VARSET(YevalSastYapplication_knownQ,T124);
  lit_355 = YPPsym((P)"<predefined-application>");
  T128 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLapplicationG),Ynil);
  T127 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_355),T128);
  VARSET(YevalSastYLpredefined_applicationG,T127);
  lit_356 = YPPsym((P)"application-binding");
  lit_357 = YPPlist(1,YPPsym((P)"_x"));
  T129 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLpredefined_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_application_binding_164 = YPfab_met(FUNCODEREF(fun_application_binding_164),T129,LITREF(lit_356),LITREF(lit_357),sloc(273),YPfalse);
  T131 = VARREF_OR(YevalSastYapplication_binding,YPfalse);
  T132 = fun_application_binding_164;
  T130 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T131,T132);
  VARSET(YevalSastYapplication_binding,T130);
  lit_358 = YPPsym((P)"application-binding-setter");
  lit_359 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T133 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLpredefined_applicationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_application_binding_setter_165 = YPfab_met(FUNCODEREF(fun_application_binding_setter_165),T133,LITREF(lit_358),LITREF(lit_359),sloc(273),YPfalse);
  T135 = VARREF_OR(YevalSastYapplication_binding_setter,YPfalse);
  T136 = fun_application_binding_setter_165;
  T134 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T135,T136);
  VARSET(YevalSastYapplication_binding_setter,T134);
  T138 = XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSastYapplication_binding),VARREF(YevalSastYapplication_binding_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  T137 = T138;
  return T137;
}

P YevalSastY___main_5___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133;
DEFCREGS();
  lit_360 = YPPsym((P)"<fix-let>");
  T1 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_360),T1);
  VARSET(YevalSastYLfix_letG,T0);
  lit_361 = YPPsym((P)"fix-let-bindings");
  lit_362 = YPPlist(1,YPPsym((P)"_x"));
  T2 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_bindings_166 = YPfab_met(FUNCODEREF(fun_fix_let_bindings_166),T2,LITREF(lit_361),LITREF(lit_362),sloc(276),YPfalse);
  T4 = VARREF_OR(YevalSastYfix_let_bindings,YPfalse);
  T5 = fun_fix_let_bindings_166;
  T3 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T4,T5);
  VARSET(YevalSastYfix_let_bindings,T3);
  lit_363 = YPPsym((P)"fix-let-bindings-setter");
  lit_364 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T6 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_bindings_setter_167 = YPfab_met(FUNCODEREF(fun_fix_let_bindings_setter_167),T6,LITREF(lit_363),LITREF(lit_364),sloc(276),YPfalse);
  T8 = VARREF_OR(YevalSastYfix_let_bindings_setter,YPfalse);
  T9 = fun_fix_let_bindings_setter_167;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YevalSastYfix_let_bindings_setter,T7);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_bindings),VARREF(YevalSastYfix_let_bindings_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_365 = YPPsym((P)"fix-let-types");
  lit_366 = YPPlist(1,YPPsym((P)"_x"));
  T10 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_types_168 = YPfab_met(FUNCODEREF(fun_fix_let_types_168),T10,LITREF(lit_365),LITREF(lit_366),sloc(277),YPfalse);
  T12 = VARREF_OR(YevalSastYfix_let_types,YPfalse);
  T13 = fun_fix_let_types_168;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YevalSastYfix_let_types,T11);
  lit_367 = YPPsym((P)"fix-let-types-setter");
  lit_368 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T14 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_types_setter_169 = YPfab_met(FUNCODEREF(fun_fix_let_types_setter_169),T14,LITREF(lit_367),LITREF(lit_368),sloc(277),YPfalse);
  T16 = VARREF_OR(YevalSastYfix_let_types_setter,YPfalse);
  T17 = fun_fix_let_types_setter_169;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YevalSastYfix_let_types_setter,T15);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_types),VARREF(YevalSastYfix_let_types_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_369 = YPPsym((P)"fix-let-arguments");
  lit_370 = YPPlist(1,YPPsym((P)"_x"));
  T18 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_arguments_170 = YPfab_met(FUNCODEREF(fun_fix_let_arguments_170),T18,LITREF(lit_369),LITREF(lit_370),sloc(278),YPfalse);
  T20 = VARREF_OR(YevalSastYfix_let_arguments,YPfalse);
  T21 = fun_fix_let_arguments_170;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YevalSastYfix_let_arguments,T19);
  lit_371 = YPPsym((P)"fix-let-arguments-setter");
  lit_372 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T22 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_arguments_setter_171 = YPfab_met(FUNCODEREF(fun_fix_let_arguments_setter_171),T22,LITREF(lit_371),LITREF(lit_372),sloc(278),YPfalse);
  T24 = VARREF_OR(YevalSastYfix_let_arguments_setter,YPfalse);
  T25 = fun_fix_let_arguments_setter_171;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YevalSastYfix_let_arguments_setter,T23);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_arguments),VARREF(YevalSastYfix_let_arguments_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_373 = YPPsym((P)"fix-let-body");
  lit_374 = YPPlist(1,YPPsym((P)"_x"));
  T26 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fix_let_body_172 = YPfab_met(FUNCODEREF(fun_fix_let_body_172),T26,LITREF(lit_373),LITREF(lit_374),sloc(279),YPfalse);
  T28 = VARREF_OR(YevalSastYfix_let_body,YPfalse);
  T29 = fun_fix_let_body_172;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YevalSastYfix_let_body,T27);
  lit_375 = YPPsym((P)"fix-let-body-setter");
  lit_376 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T30 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fix_let_body_setter_173 = YPfab_met(FUNCODEREF(fun_fix_let_body_setter_173),T30,LITREF(lit_375),LITREF(lit_376),sloc(279),YPfalse);
  T32 = VARREF_OR(YevalSastYfix_let_body_setter,YPfalse);
  T33 = fun_fix_let_body_setter_173;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSastYfix_let_body_setter,T31);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLfix_letG),VARREF(YevalSastYfix_let_body),VARREF(YevalSastYfix_let_body_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_377 = YPPsym((P)"<low-let>");
  T35 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLfix_letG),Ynil);
  T34 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_377),T35);
  VARSET(YevalSastYLlow_letG,T34);
  lit_378 = YPPsym((P)"<fab-list>");
  T38 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLprogramsG),Ynil);
  T37 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLlstG),T38);
  T36 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_378),T37);
  VARSET(YevalSastYLfab_listG,T36);
  T39 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLfab_listG));
  VARSET(YevalSastYDfab_list_nul,T39);
  lit_379 = YPPsym((P)"fab-list");
  lit_380 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T40 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYfab_list = YPfab_met(FUNCODEREF(YevalSastYfab_list),T40,LITREF(lit_379),LITREF(lit_380),sloc(282),YPfalse);
  T41 = YevalSastYfab_list;
  VARSET(YevalSastYfab_list,T41);
  lit_381 = YPPlist(1,YPPsym((P)"e"));
  T43 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLfab_listG));
  T42 = YPfab_sig(YPPlist(1,T43),YPfalse,YPint((P)1),VARREF(YevalSastYLfab_listG),Ynil);
  fun_nul_175 = YPfab_met(FUNCODEREF(fun_nul_175),T42,LITREF(lit_257),LITREF(lit_381),sloc(282),YPfalse);
  T45 = VARREF_OR(YgooScolsScolYnul,YPfalse);
  T46 = fun_nul_175;
  T44 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T45,T46);
  VARSET(YgooScolsScolYnul,T44);
  lit_382 = YPPsym((P)"<arguments>");
  T49 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLprogramsG),Ynil);
  T48 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLlstG),T49);
  T47 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_382),T48);
  VARSET(YevalSastYLargumentsG,T47);
  T50 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLargumentsG));
  VARSET(YevalSastYDarguments_nul,T50);
  lit_383 = YPPsym((P)"arguments");
  lit_384 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T51 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYarguments = YPfab_met(FUNCODEREF(YevalSastYarguments),T51,LITREF(lit_383),LITREF(lit_384),sloc(284),YPfalse);
  T52 = YevalSastYarguments;
  VARSET(YevalSastYarguments,T52);
  lit_385 = YPPlist(1,YPPsym((P)"e"));
  T54 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLargumentsG));
  T53 = YPfab_sig(YPPlist(1,T54),YPfalse,YPint((P)1),VARREF(YevalSastYLargumentsG),Ynil);
  fun_nul_177 = YPfab_met(FUNCODEREF(fun_nul_177),T53,LITREF(lit_257),LITREF(lit_385),sloc(284),YPfalse);
  T56 = VARREF_OR(YgooScolsScolYnul,YPfalse);
  T57 = fun_nul_177;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YgooScolsScolYnul,T55);
  lit_386 = YPPsym((P)"<locals>");
  T59 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T58 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_386),T59);
  VARSET(YevalSastYLlocalsG,T58);
  lit_387 = YPPsym((P)"locals-bindings");
  lit_388 = YPPlist(1,YPPsym((P)"_x"));
  T60 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_bindings_178 = YPfab_met(FUNCODEREF(fun_locals_bindings_178),T60,LITREF(lit_387),LITREF(lit_388),sloc(287),YPfalse);
  T62 = VARREF_OR(YevalSastYlocals_bindings,YPfalse);
  T63 = fun_locals_bindings_178;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YevalSastYlocals_bindings,T61);
  lit_389 = YPPsym((P)"locals-bindings-setter");
  lit_390 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T64 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_bindings_setter_179 = YPfab_met(FUNCODEREF(fun_locals_bindings_setter_179),T64,LITREF(lit_389),LITREF(lit_390),sloc(287),YPfalse);
  T66 = VARREF_OR(YevalSastYlocals_bindings_setter,YPfalse);
  T67 = fun_locals_bindings_setter_179;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YevalSastYlocals_bindings_setter,T65);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_bindings),VARREF(YevalSastYlocals_bindings_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_391 = YPPsym((P)"locals-functions");
  lit_392 = YPPlist(1,YPPsym((P)"_x"));
  T68 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_functions_180 = YPfab_met(FUNCODEREF(fun_locals_functions_180),T68,LITREF(lit_391),LITREF(lit_392),sloc(288),YPfalse);
  T70 = VARREF_OR(YevalSastYlocals_functions,YPfalse);
  T71 = fun_locals_functions_180;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YevalSastYlocals_functions,T69);
  lit_393 = YPPsym((P)"locals-functions-setter");
  lit_394 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T72 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_functions_setter_181 = YPfab_met(FUNCODEREF(fun_locals_functions_setter_181),T72,LITREF(lit_393),LITREF(lit_394),sloc(288),YPfalse);
  T74 = VARREF_OR(YevalSastYlocals_functions_setter,YPfalse);
  T75 = fun_locals_functions_setter_181;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YevalSastYlocals_functions_setter,T73);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_functions),VARREF(YevalSastYlocals_functions_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_395 = YPPsym((P)"locals-body");
  lit_396 = YPPlist(1,YPPsym((P)"_x"));
  T76 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_locals_body_182 = YPfab_met(FUNCODEREF(fun_locals_body_182),T76,LITREF(lit_395),LITREF(lit_396),sloc(289),YPfalse);
  T78 = VARREF_OR(YevalSastYlocals_body,YPfalse);
  T79 = fun_locals_body_182;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YevalSastYlocals_body,T77);
  lit_397 = YPPsym((P)"locals-body-setter");
  lit_398 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T80 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_locals_body_setter_183 = YPfab_met(FUNCODEREF(fun_locals_body_setter_183),T80,LITREF(lit_397),LITREF(lit_398),sloc(289),YPfalse);
  T82 = VARREF_OR(YevalSastYlocals_body_setter,YPfalse);
  T83 = fun_locals_body_setter_183;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YevalSastYlocals_body_setter,T81);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLlocalsG),VARREF(YevalSastYlocals_body),VARREF(YevalSastYlocals_body_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_399 = YPPsym((P)"<bind-exit>");
  T85 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T84 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_399),T85);
  VARSET(YevalSastYLbind_exitG,T84);
  lit_400 = YPPsym((P)"bind-exit-main-fun");
  lit_401 = YPPlist(1,YPPsym((P)"_x"));
  T86 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLbind_exitG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bind_exit_main_fun_184 = YPfab_met(FUNCODEREF(fun_bind_exit_main_fun_184),T86,LITREF(lit_400),LITREF(lit_401),sloc(292),YPfalse);
  T88 = VARREF_OR(YevalSastYbind_exit_main_fun,YPfalse);
  T89 = fun_bind_exit_main_fun_184;
  T87 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T88,T89);
  VARSET(YevalSastYbind_exit_main_fun,T87);
  lit_402 = YPPsym((P)"bind-exit-main-fun-setter");
  lit_403 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T90 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLbind_exitG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_bind_exit_main_fun_setter_185 = YPfab_met(FUNCODEREF(fun_bind_exit_main_fun_setter_185),T90,LITREF(lit_402),LITREF(lit_403),sloc(292),YPfalse);
  T92 = VARREF_OR(YevalSastYbind_exit_main_fun_setter,YPfalse);
  T93 = fun_bind_exit_main_fun_setter_185;
  T91 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T92,T93);
  VARSET(YevalSastYbind_exit_main_fun_setter,T91);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLbind_exitG),VARREF(YevalSastYbind_exit_main_fun),VARREF(YevalSastYbind_exit_main_fun_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_404 = YPPsym((P)"bind-exit-light?");
  lit_405 = YPPlist(1,YPPsym((P)"_x"));
  T94 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLbind_exitG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bind_exit_lightQ_186 = YPfab_met(FUNCODEREF(fun_bind_exit_lightQ_186),T94,LITREF(lit_404),LITREF(lit_405),sloc(293),YPfalse);
  T96 = VARREF_OR(YevalSastYbind_exit_lightQ,YPfalse);
  T97 = fun_bind_exit_lightQ_186;
  T95 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T96,T97);
  VARSET(YevalSastYbind_exit_lightQ,T95);
  lit_406 = YPPsym((P)"bind-exit-light?-setter");
  lit_407 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T98 = YPfab_sig(YPPlist(2,VARREF(YLlogG),VARREF(YevalSastYLbind_exitG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_bind_exit_lightQ_setter_187 = YPfab_met(FUNCODEREF(fun_bind_exit_lightQ_setter_187),T98,LITREF(lit_406),LITREF(lit_407),sloc(293),YPfalse);
  T100 = VARREF_OR(YevalSastYbind_exit_lightQ_setter,YPfalse);
  T101 = fun_bind_exit_lightQ_setter_187;
  T99 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T100,T101);
  VARSET(YevalSastYbind_exit_lightQ_setter,T99);
  lit_408 = YPPlist(1,YPPsym((P)"_x"));
  T102 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_188 = YPfab_met(FUNCODEREF(fun_188),T102,YPfalse,LITREF(lit_408),sloc(293),YPfalse);
  T103 = fun_188;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLbind_exitG),VARREF(YevalSastYbind_exit_lightQ),VARREF(YevalSastYbind_exit_lightQ_setter),VARREF(YLlogG),T103);
  lit_409 = YPPsym((P)"<unwind-protect>");
  T105 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T104 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_409),T105);
  VARSET(YevalSastYLunwind_protectG,T104);
  lit_410 = YPPsym((P)"unwind-protect-protected-thunk");
  lit_411 = YPPlist(1,YPPsym((P)"_x"));
  T106 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unwind_protect_protected_thunk_189 = YPfab_met(FUNCODEREF(fun_unwind_protect_protected_thunk_189),T106,LITREF(lit_410),LITREF(lit_411),sloc(296),YPfalse);
  T108 = VARREF_OR(YevalSastYunwind_protect_protected_thunk,YPfalse);
  T109 = fun_unwind_protect_protected_thunk_189;
  T107 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T108,T109);
  VARSET(YevalSastYunwind_protect_protected_thunk,T107);
  lit_412 = YPPsym((P)"unwind-protect-protected-thunk-setter");
  lit_413 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T110 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_unwind_protect_protected_thunk_setter_190 = YPfab_met(FUNCODEREF(fun_unwind_protect_protected_thunk_setter_190),T110,LITREF(lit_412),LITREF(lit_413),sloc(296),YPfalse);
  T112 = VARREF_OR(YevalSastYunwind_protect_protected_thunk_setter,YPfalse);
  T113 = fun_unwind_protect_protected_thunk_setter_190;
  T111 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T112,T113);
  VARSET(YevalSastYunwind_protect_protected_thunk_setter,T111);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLunwind_protectG),VARREF(YevalSastYunwind_protect_protected_thunk),VARREF(YevalSastYunwind_protect_protected_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_414 = YPPsym((P)"unwind-protect-cleanup-thunk");
  lit_415 = YPPlist(1,YPPsym((P)"_x"));
  T114 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unwind_protect_cleanup_thunk_191 = YPfab_met(FUNCODEREF(fun_unwind_protect_cleanup_thunk_191),T114,LITREF(lit_414),LITREF(lit_415),sloc(297),YPfalse);
  T116 = VARREF_OR(YevalSastYunwind_protect_cleanup_thunk,YPfalse);
  T117 = fun_unwind_protect_cleanup_thunk_191;
  T115 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T116,T117);
  VARSET(YevalSastYunwind_protect_cleanup_thunk,T115);
  lit_416 = YPPsym((P)"unwind-protect-cleanup-thunk-setter");
  lit_417 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T118 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLunwind_protectG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_unwind_protect_cleanup_thunk_setter_192 = YPfab_met(FUNCODEREF(fun_unwind_protect_cleanup_thunk_setter_192),T118,LITREF(lit_416),LITREF(lit_417),sloc(297),YPfalse);
  T120 = VARREF_OR(YevalSastYunwind_protect_cleanup_thunk_setter,YPfalse);
  T121 = fun_unwind_protect_cleanup_thunk_setter_192;
  T119 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T120,T121);
  VARSET(YevalSastYunwind_protect_cleanup_thunk_setter,T119);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLunwind_protectG),VARREF(YevalSastYunwind_protect_cleanup_thunk),VARREF(YevalSastYunwind_protect_cleanup_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_418 = YPPsym((P)"<monitor>");
  T123 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T122 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_418),T123);
  VARSET(YevalSastYLmonitorG,T122);
  lit_419 = YPPsym((P)"monitor-type");
  lit_420 = YPPlist(1,YPPsym((P)"_x"));
  T124 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_type_193 = YPfab_met(FUNCODEREF(fun_monitor_type_193),T124,LITREF(lit_419),LITREF(lit_420),sloc(300),YPfalse);
  T126 = VARREF_OR(YevalSastYmonitor_type,YPfalse);
  T127 = fun_monitor_type_193;
  T125 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T126,T127);
  VARSET(YevalSastYmonitor_type,T125);
  lit_421 = YPPsym((P)"monitor-type-setter");
  lit_422 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T128 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_type_setter_194 = YPfab_met(FUNCODEREF(fun_monitor_type_setter_194),T128,LITREF(lit_421),LITREF(lit_422),sloc(300),YPfalse);
  T130 = VARREF_OR(YevalSastYmonitor_type_setter,YPfalse);
  T131 = fun_monitor_type_setter_194;
  T129 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T130,T131);
  VARSET(YevalSastYmonitor_type_setter,T129);
  T133 = XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_type),VARREF(YevalSastYmonitor_type_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  T132 = T133;
  return T132;
}

P YevalSastY___main_6___() {
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
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187;
DEFCREGS();
  lit_423 = YPPsym((P)"monitor-info");
  lit_424 = YPPlist(1,YPPsym((P)"_x"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_info_195 = YPfab_met(FUNCODEREF(fun_monitor_info_195),T0,LITREF(lit_423),LITREF(lit_424),sloc(301),YPfalse);
  T2 = VARREF_OR(YevalSastYmonitor_info,YPfalse);
  T3 = fun_monitor_info_195;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSastYmonitor_info,T1);
  lit_425 = YPPsym((P)"monitor-info-setter");
  lit_426 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T4 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_info_setter_196 = YPfab_met(FUNCODEREF(fun_monitor_info_setter_196),T4,LITREF(lit_425),LITREF(lit_426),sloc(301),YPfalse);
  T6 = VARREF_OR(YevalSastYmonitor_info_setter,YPfalse);
  T7 = fun_monitor_info_setter_196;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSastYmonitor_info_setter,T5);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_info),VARREF(YevalSastYmonitor_info_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_427 = YPPsym((P)"monitor-test");
  lit_428 = YPPlist(1,YPPsym((P)"_x"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_test_197 = YPfab_met(FUNCODEREF(fun_monitor_test_197),T8,LITREF(lit_427),LITREF(lit_428),sloc(302),YPfalse);
  T10 = VARREF_OR(YevalSastYmonitor_test,YPfalse);
  T11 = fun_monitor_test_197;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YevalSastYmonitor_test,T9);
  lit_429 = YPPsym((P)"monitor-test-setter");
  lit_430 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T12 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_test_setter_198 = YPfab_met(FUNCODEREF(fun_monitor_test_setter_198),T12,LITREF(lit_429),LITREF(lit_430),sloc(302),YPfalse);
  T14 = VARREF_OR(YevalSastYmonitor_test_setter,YPfalse);
  T15 = fun_monitor_test_setter_198;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YevalSastYmonitor_test_setter,T13);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_test),VARREF(YevalSastYmonitor_test_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_431 = YPPsym((P)"monitor-handler");
  lit_432 = YPPlist(1,YPPsym((P)"_x"));
  T16 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_handler_199 = YPfab_met(FUNCODEREF(fun_monitor_handler_199),T16,LITREF(lit_431),LITREF(lit_432),sloc(303),YPfalse);
  T18 = VARREF_OR(YevalSastYmonitor_handler,YPfalse);
  T19 = fun_monitor_handler_199;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalSastYmonitor_handler,T17);
  lit_433 = YPPsym((P)"monitor-handler-setter");
  lit_434 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T20 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_handler_setter_200 = YPfab_met(FUNCODEREF(fun_monitor_handler_setter_200),T20,LITREF(lit_433),LITREF(lit_434),sloc(303),YPfalse);
  T22 = VARREF_OR(YevalSastYmonitor_handler_setter,YPfalse);
  T23 = fun_monitor_handler_setter_200;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSastYmonitor_handler_setter,T21);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_handler),VARREF(YevalSastYmonitor_handler_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_435 = YPPsym((P)"monitor-main-thunk");
  lit_436 = YPPlist(1,YPPsym((P)"_x"));
  T24 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_monitor_main_thunk_201 = YPfab_met(FUNCODEREF(fun_monitor_main_thunk_201),T24,LITREF(lit_435),LITREF(lit_436),sloc(304),YPfalse);
  T26 = VARREF_OR(YevalSastYmonitor_main_thunk,YPfalse);
  T27 = fun_monitor_main_thunk_201;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalSastYmonitor_main_thunk,T25);
  lit_437 = YPPsym((P)"monitor-main-thunk-setter");
  lit_438 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T28 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmonitorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_monitor_main_thunk_setter_202 = YPfab_met(FUNCODEREF(fun_monitor_main_thunk_setter_202),T28,LITREF(lit_437),LITREF(lit_438),sloc(304),YPfalse);
  T30 = VARREF_OR(YevalSastYmonitor_main_thunk_setter,YPfalse);
  T31 = fun_monitor_main_thunk_setter_202;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YevalSastYmonitor_main_thunk_setter,T29);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSastYLmonitorG),VARREF(YevalSastYmonitor_main_thunk),VARREF(YevalSastYmonitor_main_thunk_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_439 = YPPsym((P)"ast-walk!");
  lit_440 = YPPlist(3,YPPsym((P)"g"),YPPsym((P)"o"),YPPsym((P)"args"));
  T32 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_walkX_203 = YPfab_met(FUNCODEREF(fun_ast_walkX_203),T32,LITREF(lit_439),LITREF(lit_440),sloc(308),YPfalse);
  T34 = VARREF_OR(YevalSastYast_walkX,YPfalse);
  T35 = fun_ast_walkX_203;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YevalSastYast_walkX,T33);
  lit_441 = YPPsym((P)"ast-walk");
  lit_442 = YPPlist(3,YPPsym((P)"g"),YPPsym((P)"o"),YPPsym((P)"args"));
  T36 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_walk_204 = YPfab_met(FUNCODEREF(fun_ast_walk_204),T36,LITREF(lit_441),LITREF(lit_442),sloc(323),YPfalse);
  T38 = VARREF_OR(YevalSastYast_walk,YPfalse);
  T39 = fun_ast_walk_204;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YevalSastYast_walk,T37);
  lit_443 = YPPlist(3,YPPsym((P)"g"),YPPsym((P)"o"),YPPsym((P)"args"));
  T40 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLprogramsG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_walk_205 = YPfab_met(FUNCODEREF(fun_ast_walk_205),T40,LITREF(lit_441),LITREF(lit_443),sloc(334),YPfalse);
  T42 = VARREF_OR(YevalSastYast_walk,YPfalse);
  T43 = fun_ast_walk_205;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YevalSastYast_walk,T41);
  lit_444 = YPPsym((P)"ast-copy");
  lit_445 = YPPlist(1,YPPsym((P)"x"));
  T44 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_copy_206 = YPfab_met(FUNCODEREF(fun_ast_copy_206),T44,LITREF(lit_444),LITREF(lit_445),sloc(353),YPfalse);
  T46 = VARREF_OR(YevalSastYast_copy,YPfalse);
  T47 = fun_ast_copy_206;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YevalSastYast_copy,T45);
  lit_446 = YPPlist(1,YPPsym((P)"x"));
  T48 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLprogramsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_copy_207 = YPfab_met(FUNCODEREF(fun_ast_copy_207),T48,LITREF(lit_444),LITREF(lit_446),sloc(358),YPfalse);
  T50 = VARREF_OR(YevalSastYast_copy,YPfalse);
  T51 = fun_ast_copy_207;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YevalSastYast_copy,T49);
  lit_447 = YPPsym((P)"objectify");
  lit_448 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T52 = YPfab_sig(YPPlist(3,VARREF(YLlstG),VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_208 = YPfab_met(FUNCODEREF(fun_objectify_208),T52,LITREF(lit_447),LITREF(lit_448),sloc(365),YPfalse);
  T54 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T55 = fun_objectify_208;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YevalSastYobjectify,T53);
  lit_449 = YPPsym((P)"objectify-list");
  lit_450 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T56 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLprogramG),VARREF(YLlstG),VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_209 = YPfab_met(FUNCODEREF(fun_objectify_list_209),T56,LITREF(lit_449),LITREF(lit_450),sloc(370),YPfalse);
  T58 = VARREF_OR(YevalSastYobjectify_list,YPfalse);
  T59 = fun_objectify_list_209;
  T57 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T58,T59);
  VARSET(YevalSastYobjectify_list,T57);
  lit_451 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T60 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLmagic_referenceG),VARREF(YLlstG),VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_210 = YPfab_met(FUNCODEREF(fun_objectify_list_210),T60,LITREF(lit_449),LITREF(lit_451),sloc(374),YPfalse);
  T62 = VARREF_OR(YevalSastYobjectify_list,YPfalse);
  T63 = fun_objectify_list_210;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YevalSastYobjectify_list,T61);
  lit_452 = YPPsym((P)"maybe-log-dependency");
  lit_453 = YPPlist(2,YPPsym((P)"dependable"),YPPsym((P)"dtype"));
  T64 = YPfab_sig(YPPlist(2,VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYmaybe_log_dependency = YPfab_met(FUNCODEREF(YevalSastYmaybe_log_dependency),T64,LITREF(lit_452),LITREF(lit_453),sloc(378),YPfalse);
  T65 = YevalSastYmaybe_log_dependency;
  VARSET(YevalSastYmaybe_log_dependency,T65);
  lit_454 = YPPsym((P)"macro-expander");
  lit_455 = YPPlist(1,YPPsym((P)"macro-binding"));
  T66 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  YevalSastYmacro_expander = YPfab_met(FUNCODEREF(YevalSastYmacro_expander),T66,LITREF(lit_454),LITREF(lit_455),sloc(383),YPfalse);
  T67 = YevalSastYmacro_expander;
  VARSET(YevalSastYmacro_expander,T67);
  lit_456 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T68 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLmacro_referenceG),VARREF(YLlstG),VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_list_213 = YPfab_met(FUNCODEREF(fun_objectify_list_213),T68,LITREF(lit_449),LITREF(lit_456),sloc(387),YPfalse);
  T70 = VARREF_OR(YevalSastYobjectify_list,YPfalse);
  T71 = fun_objectify_list_213;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YevalSastYobjectify_list,T69);
  lit_457 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T72 = YPfab_sig(YPPlist(3,VARREF(YLsymG),VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_214 = YPfab_met(FUNCODEREF(fun_objectify_214),T72,LITREF(lit_447),LITREF(lit_457),sloc(391),YPfalse);
  T74 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T75 = fun_objectify_214;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YevalSastYobjectify,T73);
  lit_458 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T76 = YPfab_sig(YPPlist(3,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_215 = YPfab_met(FUNCODEREF(fun_objectify_215),T76,LITREF(lit_447),LITREF(lit_458),sloc(394),YPfalse);
  T78 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T79 = fun_objectify_215;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YevalSastYobjectify,T77);
  lit_459 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T80 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_216 = YPfab_met(FUNCODEREF(fun_objectify_216),T80,LITREF(lit_447),LITREF(lit_459),sloc(397),YPfalse);
  T82 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T83 = fun_objectify_216;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YevalSastYobjectify,T81);
  lit_460 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T85 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T84 = YPfab_sig(YPPlist(3,T85,VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_217 = YPfab_met(FUNCODEREF(fun_objectify_217),T84,LITREF(lit_447),LITREF(lit_460),sloc(400),YPfalse);
  T87 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T88 = fun_objectify_217;
  T86 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T87,T88);
  VARSET(YevalSastYobjectify,T86);
  lit_461 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T89 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_218 = YPfab_met(FUNCODEREF(fun_objectify_218),T89,LITREF(lit_447),LITREF(lit_461),sloc(403),YPfalse);
  T91 = VARREF_OR(YevalSastYobjectify,YPfalse);
  T92 = fun_objectify_218;
  T90 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T91,T92);
  VARSET(YevalSastYobjectify,T90);
  lit_462 = YPPsym((P)"objectify-quotation");
  lit_463 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"r"));
  T93 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLconstantG),Ynil);
  fun_objectify_quotation_219 = YPfab_met(FUNCODEREF(fun_objectify_quotation_219),T93,LITREF(lit_462),LITREF(lit_463),sloc(406),YPfalse);
  T95 = VARREF_OR(YevalSastYobjectify_quotation,YPfalse);
  T96 = fun_objectify_quotation_219;
  T94 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T95,T96);
  VARSET(YevalSastYobjectify_quotation,T94);
  lit_464 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"r"));
  T97 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLimmediate_constantG),Ynil);
  fun_objectify_quotation_220 = YPfab_met(FUNCODEREF(fun_objectify_quotation_220),T97,LITREF(lit_462),LITREF(lit_464),sloc(409),YPfalse);
  T99 = VARREF_OR(YevalSastYobjectify_quotation,YPfalse);
  T100 = fun_objectify_quotation_220;
  T98 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T99,T100);
  VARSET(YevalSastYobjectify_quotation,T98);
  lit_465 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"r"));
  T101 = YPfab_sig(YPPlist(2,VARREF(YLchrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLimmediate_constantG),Ynil);
  fun_objectify_quotation_221 = YPfab_met(FUNCODEREF(fun_objectify_quotation_221),T101,LITREF(lit_462),LITREF(lit_465),sloc(412),YPfalse);
  T103 = VARREF_OR(YevalSastYobjectify_quotation,YPfalse);
  T104 = fun_objectify_quotation_221;
  T102 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T103,T104);
  VARSET(YevalSastYobjectify_quotation,T102);
  lit_466 = YPPsym((P)"objectify-raw");
  lit_467 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"r"));
  T105 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLraw_constantG),Ynil);
  fun_objectify_raw_222 = YPfab_met(FUNCODEREF(fun_objectify_raw_222),T105,LITREF(lit_466),LITREF(lit_467),sloc(415),YPfalse);
  T107 = VARREF_OR(YevalSastYobjectify_raw,YPfalse);
  T108 = fun_objectify_raw_222;
  T106 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T107,T108);
  VARSET(YevalSastYobjectify_raw,T106);
  lit_468 = YPPsym((P)"objectify-bound?");
  lit_469 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"default"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T109 = YPfab_sig(YPPlist(4,VARREF(YLsymG),VARREF(YLanyG),VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_boundQ_223 = YPfab_met(FUNCODEREF(fun_objectify_boundQ_223),T109,LITREF(lit_468),LITREF(lit_469),sloc(418),YPfalse);
  T111 = VARREF_OR(YevalSastYobjectify_boundQ,YPfalse);
  T112 = fun_objectify_boundQ_223;
  T110 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T111,T112);
  VARSET(YevalSastYobjectify_boundQ,T110);
  lit_470 = YPPsym((P)"objectify-compile-time");
  lit_471 = YPPlist(4,YPPsym((P)"program"),YPPsym((P)"r"),YPPsym((P)"tail?"),YPPsym((P)"rt?"));
  T113 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_compile_time_224 = YPfab_met(FUNCODEREF(fun_objectify_compile_time_224),T113,LITREF(lit_470),LITREF(lit_471),sloc(426),YPfalse);
  T115 = VARREF_OR(YevalSastYobjectify_compile_time,YPfalse);
  T116 = fun_objectify_compile_time_224;
  T114 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T115,T116);
  VARSET(YevalSastYobjectify_compile_time,T114);
  lit_472 = YPPsym((P)"objectify-alternative");
  lit_473 = YPPlist(5,YPPsym((P)"t"),YPPsym((P)"c"),YPPsym((P)"a"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T117 = YPfab_sig(YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLalternativeG),Ynil);
  fun_objectify_alternative_225 = YPfab_met(FUNCODEREF(fun_objectify_alternative_225),T117,LITREF(lit_472),LITREF(lit_473),sloc(442),YPfalse);
  T119 = VARREF_OR(YevalSastYobjectify_alternative,YPfalse);
  T120 = fun_objectify_alternative_225;
  T118 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T119,T120);
  VARSET(YevalSastYobjectify_alternative,T118);
  lit_474 = YPPsym((P)"sequentialize");
  lit_475 = YPPlist(1,YPPsym((P)"e*"));
  T121 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YevalSastYLprogramG),Ynil);
  fun_sequentialize_226 = YPfab_met(FUNCODEREF(fun_sequentialize_226),T121,LITREF(lit_474),LITREF(lit_475),sloc(448),YPfalse);
  T123 = VARREF_OR(YevalSastYsequentialize,YPfalse);
  T124 = fun_sequentialize_226;
  T122 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T123,T124);
  VARSET(YevalSastYsequentialize,T122);
  lit_476 = YPPsym((P)"transform-defs");
  lit_477 = YPPlist(1,YPPsym((P)"e*"));
  T125 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_transform_defs_227 = YPfab_met(FUNCODEREF(fun_transform_defs_227),T125,LITREF(lit_476),LITREF(lit_477),sloc(458),YPfalse);
  T127 = VARREF_OR(YevalSastYtransform_defs,YPfalse);
  T128 = fun_transform_defs_227;
  T126 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T127,T128);
  VARSET(YevalSastYtransform_defs,T126);
  lit_478 = YPPsym((P)"objectify-sequential");
  lit_479 = YPPlist(3,YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T129 = YPfab_sig(YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_sequential_228 = YPfab_met(FUNCODEREF(fun_objectify_sequential_228),T129,LITREF(lit_478),LITREF(lit_479),sloc(467),YPfalse);
  T131 = VARREF_OR(YevalSastYobjectify_sequential,YPfalse);
  T132 = fun_objectify_sequential_228;
  T130 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T131,T132);
  VARSET(YevalSastYobjectify_sequential,T130);
  lit_480 = YPPsym((P)"objectify-application");
  lit_481 = YPPlist(4,YPPsym((P)"ff"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_482 = YPPlist(1,YPPsym((P)"e"));
  T134 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_229 = YPfab_met(FUNCODEREF(fun_229),T134,YPfalse,LITREF(lit_482),sloc(478),YPfalse);
  T133 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_application_230 = YPfab_met(FUNCODEREF(fun_objectify_application_230),T133,LITREF(lit_480),LITREF(lit_481),sloc(477),YPfalse);
  T136 = VARREF_OR(YevalSastYobjectify_application,YPfalse);
  T137 = fun_objectify_application_230;
  T135 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T136,T137);
  VARSET(YevalSastYobjectify_application,T135);
  lit_483 = YPPlist(4,YPPsym((P)"ff"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_484 = YPPlist(1,YPPsym((P)"e"));
  T139 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_231 = YPfab_met(FUNCODEREF(fun_231),T139,YPfalse,LITREF(lit_484),sloc(484),YPfalse);
  T138 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLpredefined_referenceG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_application_232 = YPfab_met(FUNCODEREF(fun_objectify_application_232),T138,LITREF(lit_480),LITREF(lit_483),sloc(483),YPfalse);
  T141 = VARREF_OR(YevalSastYobjectify_application,YPfalse);
  T142 = fun_objectify_application_232;
  T140 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T141,T142);
  VARSET(YevalSastYobjectify_application,T140);
  lit_485 = YPPlist(4,YPPsym((P)"ff"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_486 = YPPlist(1,YPPsym((P)"e"));
  T144 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_233 = YPfab_met(FUNCODEREF(fun_233),T144,YPfalse,LITREF(lit_486),sloc(495),YPfalse);
  T143 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_application_234 = YPfab_met(FUNCODEREF(fun_objectify_application_234),T143,LITREF(lit_480),LITREF(lit_485),sloc(494),YPfalse);
  T146 = VARREF_OR(YevalSastYobjectify_application,YPfalse);
  T147 = fun_objectify_application_234;
  T145 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T146,T147);
  VARSET(YevalSastYobjectify_application,T145);
  lit_487 = YPPsym((P)"process-closed-application");
  lit_488 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_489 = YPsb((P)"incorrect regular arity");
  T148 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLast_embodied_functionG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLfix_letG),Ynil);
  fun_process_closed_application_235 = YPfab_met(FUNCODEREF(fun_process_closed_application_235),T148,LITREF(lit_487),LITREF(lit_488),sloc(504),YPfalse);
  T150 = VARREF_OR(YevalSastYprocess_closed_application,YPfalse);
  T151 = fun_process_closed_application_235;
  T149 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T150,T151);
  VARSET(YevalSastYprocess_closed_application,T149);
  lit_490 = YPPsym((P)"process-nary-closed-application");
  lit_491 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"e*"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_492 = YPPsym((P)"pack-args");
  lit_493 = YPPlist(3,YPPsym((P)"e*"),YPPsym((P)"v*"),YPPsym((P)"t*"));
  lit_494 = YPPsym((P)"<tup>");
  lit_495 = YPPsym((P)"tup");
  lit_496 = YPsb((P)"incorrect dotted arity");
  T153 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_pack_args_236 = YPfab_met(FUNCODEREF(fun_pack_args_236),T153,LITREF(lit_492),LITREF(lit_493),sloc(519),YPfalse);
  T152 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLfix_letG),Ynil);
  fun_process_nary_closed_application_237 = YPfab_met(FUNCODEREF(fun_process_nary_closed_application_237),T152,LITREF(lit_490),LITREF(lit_491),sloc(518),YPfalse);
  T155 = VARREF_OR(YevalSastYprocess_nary_closed_application,YPfalse);
  T156 = fun_process_nary_closed_application_237;
  T154 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T155,T156);
  VARSET(YevalSastYprocess_nary_closed_application,T154);
  lit_497 = YPPsym((P)"convert2arguments");
  lit_498 = YPPlist(1,YPPsym((P)"e*"));
  T157 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_convert2arguments_238 = YPfab_met(FUNCODEREF(fun_convert2arguments_238),T157,LITREF(lit_497),LITREF(lit_498),sloc(540),YPfalse);
  T159 = VARREF_OR(YevalSastYconvert2arguments,YPfalse);
  T160 = fun_convert2arguments_238;
  T158 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T159,T160);
  VARSET(YevalSastYconvert2arguments,T158);
  lit_499 = YPPsym((P)"objectify-assignment");
  lit_500 = YPPlist(4,YPPsym((P)"binding"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_501 = YPsb((P)"Unsupported Set!: %=");
  T161 = YPfab_sig(YPPlist(4,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_assignment_239 = YPfab_met(FUNCODEREF(fun_objectify_assignment_239),T161,LITREF(lit_499),LITREF(lit_500),sloc(549),YPfalse);
  T163 = VARREF_OR(YevalSastYobjectify_assignment,YPfalse);
  T164 = fun_objectify_assignment_239;
  T162 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T163,T164);
  VARSET(YevalSastYobjectify_assignment,T162);
  lit_502 = YPPlist(4,YPPsym((P)"binding"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T165 = YPfab_sig(YPPlist(4,VARREF(YLsymG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLassignmentG),Ynil);
  fun_objectify_assignment_240 = YPfab_met(FUNCODEREF(fun_objectify_assignment_240),T165,LITREF(lit_499),LITREF(lit_502),sloc(559),YPfalse);
  T167 = VARREF_OR(YevalSastYobjectify_assignment,YPfalse);
  T168 = fun_objectify_assignment_240;
  T166 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T167,T168);
  VARSET(YevalSastYobjectify_assignment,T166);
  lit_503 = YPPsym((P)"objectify-assignment-using");
  lit_504 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  T169 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLlocal_assignmentG),Ynil);
  fun_objectify_assignment_using_241 = YPfab_met(FUNCODEREF(fun_objectify_assignment_using_241),T169,LITREF(lit_503),LITREF(lit_504),sloc(564),YPfalse);
  T171 = VARREF_OR(YevalSastYobjectify_assignment_using,YPfalse);
  T172 = fun_objectify_assignment_using_241;
  T170 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T171,T172);
  VARSET(YevalSastYobjectify_assignment_using,T170);
  lit_505 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  T173 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLglobal_assignmentG),Ynil);
  fun_objectify_assignment_using_242 = YPfab_met(FUNCODEREF(fun_objectify_assignment_using_242),T173,LITREF(lit_503),LITREF(lit_505),sloc(571),YPfalse);
  T175 = VARREF_OR(YevalSastYobjectify_assignment_using,YPfalse);
  T176 = fun_objectify_assignment_using_242;
  T174 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T175,T176);
  VARSET(YevalSastYobjectify_assignment_using,T174);
  lit_506 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  T177 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLdynamic_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLglobal_assignmentG),Ynil);
  fun_objectify_assignment_using_243 = YPfab_met(FUNCODEREF(fun_objectify_assignment_using_243),T177,LITREF(lit_503),LITREF(lit_506),sloc(577),YPfalse);
  T179 = VARREF_OR(YevalSastYobjectify_assignment_using,YPfalse);
  T180 = fun_objectify_assignment_using_243;
  T178 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T179,T180);
  VARSET(YevalSastYobjectify_assignment_using,T178);
  lit_507 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  T183 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLruntime_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YevalSastYLruntime_assignmentG),Ynil);
  T182 = fun_objectify_assignment_using_244 = YPfab_met(FUNCODEREF(fun_objectify_assignment_using_244),T183,LITREF(lit_503),LITREF(lit_507),sloc(583),YPfalse);
  T186 = VARREF_OR(YevalSastYobjectify_assignment_using,YPfalse);
  T187 = fun_objectify_assignment_using_244;
  T185 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T186,T187);
  T184 = VARSET(YevalSastYobjectify_assignment_using,T185);
  T181 = T184;
  return T181;
}

P YevalSastY___main_7___() {
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
  P T192,T193,T194,T195;
DEFCREGS();
  lit_508 = YPPlist(2,YPPsym((P)"ref"),YPPsym((P)"val"));
  lit_509 = YPsb((P)"Unable to assign to static module binding %=");
  T0 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLstatic_module_binding_referenceG),VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_objectify_assignment_using_245 = YPfab_met(FUNCODEREF(fun_objectify_assignment_using_245),T0,LITREF(lit_503),LITREF(lit_508),sloc(589),YPfalse);
  T2 = VARREF_OR(YevalSastYobjectify_assignment_using,YPfalse);
  T3 = fun_objectify_assignment_using_245;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSastYobjectify_assignment_using,T1);
  lit_510 = YPPsym((P)"update-binding-kind");
  lit_511 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"new-kind"));
  lit_512 = YPPsym((P)"runtime");
  lit_513 = YPPsym((P)"magic");
  lit_514 = YPPsym((P)"global");
  lit_515 = YPsb((P)"Cannot set type of runtime binding %s to %s.\n");
  T4 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYupdate_binding_kind = YPfab_met(FUNCODEREF(YevalSastYupdate_binding_kind),T4,LITREF(lit_510),LITREF(lit_511),sloc(602),YPfalse);
  T5 = YevalSastYupdate_binding_kind;
  VARSET(YevalSastYupdate_binding_kind,T5);
  lit_516 = YPPsym((P)"ast-define-binding");
  lit_517 = YPPlist(4,YPPsym((P)"r"),YPPsym((P)"name"),YPPsym((P)"defining-method?"),YPPsym((P)"kind"));
  lit_518 = YPsb((P)"%s: warning: '%s' clobbers binding from %s.\n");
  T6 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_ast_define_binding_247 = YPfab_met(FUNCODEREF(fun_ast_define_binding_247),T6,LITREF(lit_516),LITREF(lit_517),sloc(611),YPfalse);
  T8 = VARREF_OR(YevalSastYast_define_binding,YPfalse);
  T9 = fun_ast_define_binding_247;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YevalSastYast_define_binding,T7);
  VARSET(YevalSastYTmacro_tracingQT,YPfalse);
  lit_519 = YPPsym((P)"objectify-definition");
  lit_520 = YPPlist(5,YPPsym((P)"type"),YPPsym((P)"kind"),YPPsym((P)"var"),YPPsym((P)"e"),YPPsym((P)"r"));
  T10 = YPfab_sig(YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_objectify_definition_248 = YPfab_met(FUNCODEREF(fun_objectify_definition_248),T10,LITREF(lit_519),LITREF(lit_520),sloc(654),YPfalse);
  T12 = VARREF_OR(YevalSastYobjectify_definition,YPfalse);
  T13 = fun_objectify_definition_248;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YevalSastYobjectify_definition,T11);
  lit_521 = YPPsym((P)"objectify-variable-definition");
  lit_522 = YPPlist(3,YPPsym((P)"var"),YPPsym((P)"e"),YPPsym((P)"r"));
  T14 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_variable_definition_249 = YPfab_met(FUNCODEREF(fun_objectify_variable_definition_249),T14,LITREF(lit_521),LITREF(lit_522),sloc(665),YPfalse);
  T16 = VARREF_OR(YevalSastYobjectify_variable_definition,YPfalse);
  T17 = fun_objectify_variable_definition_249;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YevalSastYobjectify_variable_definition,T15);
  lit_523 = YPPsym((P)"objectify-dynamic-definition");
  lit_524 = YPPlist(3,YPPsym((P)"var"),YPPsym((P)"e"),YPPsym((P)"r"));
  lit_525 = YPPsym((P)"dynamic");
  T18 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_dynamic_definition_250 = YPfab_met(FUNCODEREF(fun_objectify_dynamic_definition_250),T18,LITREF(lit_523),LITREF(lit_524),sloc(668),YPfalse);
  T20 = VARREF_OR(YevalSastYobjectify_dynamic_definition,YPfalse);
  T21 = fun_objectify_dynamic_definition_250;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YevalSastYobjectify_dynamic_definition,T19);
  lit_526 = YPPsym((P)"%%%macro");
  lit_527 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"expander"));
  lit_528 = YPPsym((P)"expand");
  lit_529 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_530 = YPsb((P)"MACRO ");
  lit_531 = YPsb((P)"\n");
  lit_532 = YPsb((P)"  => ");
  lit_533 = YPsb((P)"\n");
  T23 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_251 = YPfab_met(FUNCODEREF(fun_expand_251),T23,LITREF(lit_528),LITREF(lit_529),sloc(673),YPfalse);
  T22 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSmoduleYLmodule_bindingG),Ynil);
  YevalSastYPPPmacro = YPfab_met(FUNCODEREF(YevalSastYPPPmacro),T22,LITREF(lit_526),LITREF(lit_527),sloc(671),YPfalse);
  T24 = YevalSastYPPPmacro;
  VARSET(YevalSastYPPPmacro,T24);
  lit_534 = YPPsym((P)"%%macro");
  lit_535 = YPPlist(4,YPPsym((P)"modname"),YPPsym((P)"name"),YPPsym((P)"expander"),YPPsym((P)"env-or-false"));
  lit_536 = YPPsym((P)"macro");
  T25 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  YPPmacro = YPfab_met(FUNCODEREF(YPPmacro),T25,LITREF(lit_534),LITREF(lit_535),sloc(684),YPfalse);
  T26 = YPPmacro;
  VARSET(YPPmacro,T26);
  lit_537 = YPPsym((P)"objectify-syntax-definition");
  lit_538 = YPPlist(4,YPPsym((P)"name"),YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"rt?"));
  T27 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_syntax_definition_254 = YPfab_met(FUNCODEREF(fun_objectify_syntax_definition_254),T27,LITREF(lit_537),LITREF(lit_538),sloc(698),YPfalse);
  T29 = VARREF_OR(YevalSastYobjectify_syntax_definition,YPfalse);
  T30 = fun_objectify_syntax_definition_254;
  T28 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T29,T30);
  VARSET(YevalSastYobjectify_syntax_definition,T28);
  lit_539 = YPPsym((P)"objectify-function-definition");
  lit_540 = YPPlist(4,YPPsym((P)"name"),YPPsym((P)"mods"),YPPsym((P)"e"),YPPsym((P)"r"));
  T31 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLast_function_definitionG),Ynil);
  fun_objectify_function_definition_255 = YPfab_met(FUNCODEREF(fun_objectify_function_definition_255),T31,LITREF(lit_539),LITREF(lit_540),sloc(728),YPfalse);
  T33 = VARREF_OR(YevalSastYobjectify_function_definition,YPfalse);
  T34 = fun_objectify_function_definition_255;
  T32 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T33,T34);
  VARSET(YevalSastYobjectify_function_definition,T32);
  lit_541 = YPPsym((P)"module-binding");
  lit_542 = YPPlist(1,YPPsym((P)"kind"));
  T35 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YevalSmoduleYLmodule_bindingG),Ynil);
  YevalSastYmodule_binding = YPfab_met(FUNCODEREF(YevalSastYmodule_binding),T35,LITREF(lit_541),LITREF(lit_542),sloc(738),YPfalse);
  T36 = YevalSastYmodule_binding;
  VARSET(YevalSastYmodule_binding,T36);
  lit_543 = YPPsym((P)"function-inlineable?");
  lit_544 = YPPlist(1,YPPsym((P)"e"));
  lit_545 = YPPsym((P)"inline");
  lit_546 = YPPsym((P)"inline-c");
  T37 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_function_inlineableQ_257 = YPfab_met(FUNCODEREF(fun_function_inlineableQ_257),T37,LITREF(lit_543),LITREF(lit_544),sloc(741),YPfalse);
  T39 = VARREF_OR(YevalSastYfunction_inlineableQ,YPfalse);
  T40 = fun_function_inlineableQ_257;
  T38 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T39,T40);
  VARSET(YevalSastYfunction_inlineableQ,T38);
  lit_547 = YPPsym((P)"objectify-primitive-definition");
  lit_548 = YPPlist(5,YPPsym((P)"name"),YPPsym((P)"mods"),YPPsym((P)"sig"),YPPsym((P)"body"),YPPsym((P)"r"));
  lit_549 = YPPsym((P)"predefined");
  T41 = YPfab_sig(YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLast_primitive_definitionG),Ynil);
  fun_objectify_primitive_definition_258 = YPfab_met(FUNCODEREF(fun_objectify_primitive_definition_258),T41,LITREF(lit_547),LITREF(lit_548),sloc(745),YPfalse);
  T43 = VARREF_OR(YevalSastYobjectify_primitive_definition,YPfalse);
  T44 = fun_objectify_primitive_definition_258;
  T42 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T43,T44);
  VARSET(YevalSastYobjectify_primitive_definition,T42);
  lit_550 = YPPsym((P)"objectify-generic-definition");
  lit_551 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"sig"),YPPsym((P)"r"));
  T45 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLast_generic_definitionG),Ynil);
  fun_objectify_generic_definition_259 = YPfab_met(FUNCODEREF(fun_objectify_generic_definition_259),T45,LITREF(lit_550),LITREF(lit_551),sloc(764),YPfalse);
  T47 = VARREF_OR(YevalSastYobjectify_generic_definition,YPfalse);
  T48 = fun_objectify_generic_definition_259;
  T46 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T47,T48);
  VARSET(YevalSastYobjectify_generic_definition,T46);
  lit_552 = YPPsym((P)"objectify-method-definition");
  lit_553 = YPPlist(4,YPPsym((P)"name"),YPPsym((P)"mods"),YPPsym((P)"e"),YPPsym((P)"r"));
  lit_554 = YPPsym((P)"bound?");
  lit_555 = YPPsym((P)"%define-method");
  T49 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLast_method_definitionG),Ynil);
  fun_objectify_method_definition_260 = YPfab_met(FUNCODEREF(fun_objectify_method_definition_260),T49,LITREF(lit_552),LITREF(lit_553),sloc(776),YPfalse);
  T51 = VARREF_OR(YevalSastYobjectify_method_definition,YPfalse);
  T52 = fun_objectify_method_definition_260;
  T50 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T51,T52);
  VARSET(YevalSastYobjectify_method_definition,T50);
  DYNDEFSET(YevalSastYTrecord_sourceQT,YPfalse);
  lit_556 = YPPsym((P)"objectify-function-source");
  lit_557 = YPPlist(3,YPPsym((P)"sig"),YPPsym((P)"body"),YPPsym((P)"r"));
  lit_558 = Ynil;
  lit_559 = YPsb((P)"%s");
  lit_560 = YPPsym((P)"fun");
  T57 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_261 = YPfab_met(FUNCODEREF(fun_261),T57,YPfalse,LITREF(lit_558),sloc(801),YPfalse);
  T56 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_262 = YPfab_met(FUNCODEREF(fun_262),T56,YPfalse,LITREF(lit_558),sloc(801),YPfalse);
  T55 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_263 = YPfab_met(FUNCODEREF(fun_263),T55,YPfalse,LITREF(lit_558),sloc(801),YPfalse);
  T54 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_264 = YPfab_met(FUNCODEREF(fun_264),T54,YPfalse,LITREF(lit_558),sloc(801),YPfalse);
  T53 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLconstantG),Ynil);
  fun_objectify_function_source_265 = YPfab_met(FUNCODEREF(fun_objectify_function_source_265),T53,LITREF(lit_556),LITREF(lit_557),sloc(800),YPfalse);
  T59 = VARREF_OR(YevalSastYobjectify_function_source,YPfalse);
  T60 = fun_objectify_function_source_265;
  T58 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T59,T60);
  VARSET(YevalSastYobjectify_function_source,T58);
  lit_561 = YPPsym((P)"objectify-function-using");
  lit_562 = YPPlist(5,YPPsym((P)"met"),YPPsym((P)"sig"),YPPsym((P)"body"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T63 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_266 = YPfab_met(FUNCODEREF(fun_266),T63,YPfalse,LITREF(lit_558),sloc(808),YPfalse);
  T62 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_267 = YPfab_met(FUNCODEREF(fun_267),T62,YPfalse,LITREF(lit_558),sloc(808),YPfalse);
  T61 = YPfab_sig(YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLast_methodG),Ynil);
  fun_objectify_function_using_268 = YPfab_met(FUNCODEREF(fun_objectify_function_using_268),T61,LITREF(lit_561),LITREF(lit_562),sloc(806),YPfalse);
  T65 = VARREF_OR(YevalSastYobjectify_function_using,YPfalse);
  T66 = fun_objectify_function_using_268;
  T64 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T65,T66);
  VARSET(YevalSastYobjectify_function_using,T64);
  lit_563 = YPPsym((P)"objectify-function");
  lit_564 = YPPlist(5,YPPsym((P)"sig"),YPPsym((P)"body"),YPPsym((P)"line"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T67 = YPfab_sig(YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLast_methodG),Ynil);
  fun_objectify_function_269 = YPfab_met(FUNCODEREF(fun_objectify_function_269),T67,LITREF(lit_563),LITREF(lit_564),sloc(818),YPfalse);
  T69 = VARREF_OR(YevalSastYobjectify_function,YPfalse);
  T70 = fun_objectify_function_269;
  T68 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T69,T70);
  VARSET(YevalSastYobjectify_function,T68);
  lit_565 = YPPsym((P)"...");
  VARSET(YevalSastYDsexpr_optionals_tag,LITREF(lit_565));
  lit_566 = YPPsym((P)"<opts>");
  VARSET(YevalSastYDsexpr_optionals_type_name,LITREF(lit_566));
  lit_567 = YPPsym((P)"objectify-signature");
  lit_568 = YPPlist(2,YPPsym((P)"sig"),YPPsym((P)"r"));
  T71 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLast_signatureG),Ynil);
  fun_objectify_signature_270 = YPfab_met(FUNCODEREF(fun_objectify_signature_270),T71,LITREF(lit_567),LITREF(lit_568),sloc(825),YPfalse);
  T73 = VARREF_OR(YevalSastYobjectify_signature,YPfalse);
  T74 = fun_objectify_signature_270;
  T72 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T73,T74);
  VARSET(YevalSastYobjectify_signature,T72);
  lit_569 = YPPsym((P)"compute-local-reference-offsets");
  lit_570 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"r"));
  lit_571 = YPsb((P)"didn't find local binding %= in %=");
  T76 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLintG));
  T75 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSmoduleYLstatic_local_environmentG)),YPfalse,YPint((P)2),T76,Ynil);
  fun_compute_local_reference_offsets_271 = YPfab_met(FUNCODEREF(fun_compute_local_reference_offsets_271),T75,LITREF(lit_569),LITREF(lit_570),sloc(856),YPfalse);
  T78 = VARREF_OR(YevalSastYcompute_local_reference_offsets,YPfalse);
  T79 = fun_compute_local_reference_offsets_271;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YevalSastYcompute_local_reference_offsets,T77);
  lit_572 = YPPsym((P)"objectify-binding");
  lit_573 = YPPlist(3,YPPsym((P)"n"),YPPsym((P)"b"),YPPsym((P)"r"));
  T80 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YevalSastYLlocal_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLlocal_referenceG),Ynil);
  fun_objectify_binding_272 = YPfab_met(FUNCODEREF(fun_objectify_binding_272),T80,LITREF(lit_572),LITREF(lit_573),sloc(870),YPfalse);
  T82 = VARREF_OR(YevalSastYobjectify_binding,YPfalse);
  T83 = fun_objectify_binding_272;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YevalSastYobjectify_binding,T81);
  lit_574 = YPPsym((P)"binding-reference-class");
  lit_575 = YPPlist(1,YPPsym((P)"b"));
  lit_576 = YPsb((P)"Unknown binding-kind %=");
  T84 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_binding_reference_class_273 = YPfab_met(FUNCODEREF(fun_binding_reference_class_273),T84,LITREF(lit_574),LITREF(lit_575),sloc(882),YPfalse);
  T86 = VARREF_OR(YevalSastYbinding_reference_class,YPfalse);
  T87 = fun_binding_reference_class_273;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YevalSastYbinding_reference_class,T85);
  lit_577 = YPPlist(3,YPPsym((P)"n"),YPPsym((P)"b"),YPPsym((P)"r"));
  T88 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_objectify_binding_274 = YPfab_met(FUNCODEREF(fun_objectify_binding_274),T88,LITREF(lit_572),LITREF(lit_577),sloc(893),YPfalse);
  T90 = VARREF_OR(YevalSastYobjectify_binding,YPfalse);
  T91 = fun_objectify_binding_274;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YevalSastYobjectify_binding,T89);
  lit_578 = YPPlist(3,YPPsym((P)"n"),YPPsym((P)"b"),YPPsym((P)"r"));
  T92 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLreferenceG),Ynil);
  fun_objectify_binding_275 = YPfab_met(FUNCODEREF(fun_objectify_binding_275),T92,LITREF(lit_572),LITREF(lit_578),sloc(903),YPfalse);
  T94 = VARREF_OR(YevalSastYobjectify_binding,YPfalse);
  T95 = fun_objectify_binding_275;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YevalSastYobjectify_binding,T93);
  lit_579 = YPPsym((P)"default-type");
  lit_580 = YPPlist(1,YPPsym((P)"r"));
  lit_581 = YPPsym((P)"<any>");
  T96 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_default_type_276 = YPfab_met(FUNCODEREF(fun_default_type_276),T96,LITREF(lit_579),LITREF(lit_580),sloc(908),YPfalse);
  T98 = VARREF_OR(YevalSastYdefault_type,YPfalse);
  T99 = fun_default_type_276;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YevalSastYdefault_type,T97);
  lit_582 = YPPsym((P)"objectify-free-global-reference");
  lit_583 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T100 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLreferenceG),Ynil);
  fun_objectify_free_global_reference_277 = YPfab_met(FUNCODEREF(fun_objectify_free_global_reference_277),T100,LITREF(lit_582),LITREF(lit_583),sloc(913),YPfalse);
  T102 = VARREF_OR(YevalSastYobjectify_free_global_reference,YPfalse);
  T103 = fun_objectify_free_global_reference_277;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YevalSastYobjectify_free_global_reference,T101);
  lit_584 = YPPsym((P)"foreign-name?");
  lit_585 = YPPlist(1,YPPsym((P)"name"));
  T104 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSastYforeign_nameQ = YPfab_met(FUNCODEREF(YevalSastYforeign_nameQ),T104,LITREF(lit_584),LITREF(lit_585),sloc(928),YPfalse);
  T105 = YevalSastYforeign_nameQ;
  VARSET(YevalSastYforeign_nameQ,T105);
  lit_586 = YPPsym((P)"objectify-foreign-reference");
  lit_587 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  lit_588 = YPsb((P)"Malformed foreign name %s.\n");
  lit_589 = YPsb((P)"No binding %s in %s.\n");
  T106 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSastYLreferenceG),Ynil);
  fun_objectify_foreign_reference_279 = YPfab_met(FUNCODEREF(fun_objectify_foreign_reference_279),T106,LITREF(lit_586),LITREF(lit_587),sloc(932),YPfalse);
  T108 = VARREF_OR(YevalSastYobjectify_foreign_reference,YPfalse);
  T109 = fun_objectify_foreign_reference_279;
  T107 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T108,T109);
  VARSET(YevalSastYobjectify_foreign_reference,T107);
  lit_590 = YPPsym((P)"objectify-symbol");
  lit_591 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T110 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_objectify_symbol_280 = YPfab_met(FUNCODEREF(fun_objectify_symbol_280),T110,LITREF(lit_590),LITREF(lit_591),sloc(950),YPfalse);
  T112 = VARREF_OR(YevalSastYobjectify_symbol,YPfalse);
  T113 = fun_objectify_symbol_280;
  T111 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T112,T113);
  VARSET(YevalSastYobjectify_symbol,T111);
  lit_592 = YPPsym((P)"ftype");
  lit_593 = YPPlist(1,YPPsym((P)"r"));
  lit_594 = YPPsym((P)"<fun>");
  T114 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ftype_281 = YPfab_met(FUNCODEREF(fun_ftype_281),T114,LITREF(lit_592),LITREF(lit_593),sloc(953),YPfalse);
  T116 = VARREF_OR(YevalSastYftype,YPfalse);
  T117 = fun_ftype_281;
  T115 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T116,T117);
  VARSET(YevalSastYftype,T115);
  lit_595 = YPPsym((P)"<functions>");
  T120 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLprogramsG),Ynil);
  T119 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLlstG),T120);
  T118 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_595),T119);
  VARSET(YevalSastYLfunctionsG,T118);
  T121 = XCALL1(1,VARREF(Ynew),VARREF(YevalSastYLfunctionsG));
  VARSET(YevalSastYDfunctions_nul,T121);
  lit_596 = YPPsym((P)"functions");
  lit_597 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T122 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYfunctions = YPfab_met(FUNCODEREF(YevalSastYfunctions),T122,LITREF(lit_596),LITREF(lit_597),sloc(956),YPfalse);
  T123 = YevalSastYfunctions;
  VARSET(YevalSastYfunctions,T123);
  lit_598 = YPPlist(1,YPPsym((P)"e"));
  T125 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YevalSastYLfunctionsG));
  T124 = YPfab_sig(YPPlist(1,T125),YPfalse,YPint((P)1),VARREF(YevalSastYLfunctionsG),Ynil);
  fun_nul_283 = YPfab_met(FUNCODEREF(fun_nul_283),T124,LITREF(lit_257),LITREF(lit_598),sloc(956),YPfalse);
  T127 = VARREF_OR(YgooScolsScolYnul,YPfalse);
  T128 = fun_nul_283;
  T126 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T127,T128);
  VARSET(YgooScolsScolYnul,T126);
  lit_599 = YPPsym((P)"objectify-locals");
  lit_600 = YPPlist(6,YPPsym((P)"names"),YPPsym((P)"sigs"),YPPsym((P)"bodies"),YPPsym((P)"body"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_601 = YPPlist(1,YPPsym((P)"n"));
  lit_602 = YPPlist(2,YPPsym((P)"sig"),YPPsym((P)"body"));
  lit_603 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"b"));
  T132 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_284 = YPfab_met(FUNCODEREF(fun_284),T132,YPfalse,LITREF(lit_601),sloc(959),YPfalse);
  T131 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_285 = YPfab_met(FUNCODEREF(fun_285),T131,YPfalse,LITREF(lit_602),sloc(963),YPfalse);
  T130 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_286 = YPfab_met(FUNCODEREF(fun_286),T130,YPfalse,LITREF(lit_603),sloc(971),YPfalse);
  T129 = YPfab_sig(YPPlist(6,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)6),VARREF(YevalSastYLlocalsG),Ynil);
  fun_objectify_locals_287 = YPfab_met(FUNCODEREF(fun_objectify_locals_287),T129,LITREF(lit_599),LITREF(lit_600),sloc(958),YPfalse);
  T134 = VARREF_OR(YevalSastYobjectify_locals,YPfalse);
  T135 = fun_objectify_locals_287;
  T133 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T134,T135);
  VARSET(YevalSastYobjectify_locals,T133);
  lit_604 = YPPsym((P)"objectify-bind-exit");
  lit_605 = YPPlist(5,YPPsym((P)"name"),YPPsym((P)"body"),YPPsym((P)"line"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T136 = YPfab_sig(YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLbind_exitG),Ynil);
  fun_objectify_bind_exit_288 = YPfab_met(FUNCODEREF(fun_objectify_bind_exit_288),T136,LITREF(lit_604),LITREF(lit_605),sloc(981),YPfalse);
  T138 = VARREF_OR(YevalSastYobjectify_bind_exit,YPfalse);
  T139 = fun_objectify_bind_exit_288;
  T137 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T138,T139);
  VARSET(YevalSastYobjectify_bind_exit,T137);
  lit_606 = YPPsym((P)"objectify-unwind-protect");
  lit_607 = YPPlist(5,YPPsym((P)"protected-form"),YPPsym((P)"cleanup-forms"),YPPsym((P)"line"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T140 = YPfab_sig(YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YevalSastYLunwind_protectG),Ynil);
  fun_objectify_unwind_protect_289 = YPfab_met(FUNCODEREF(fun_objectify_unwind_protect_289),T140,LITREF(lit_606),LITREF(lit_607),sloc(987),YPfalse);
  T142 = VARREF_OR(YevalSastYobjectify_unwind_protect,YPfalse);
  T143 = fun_objectify_unwind_protect_289;
  T141 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T142,T143);
  VARSET(YevalSastYobjectify_unwind_protect,T141);
  lit_608 = YPPsym((P)"objectify-monitor");
  lit_609 = YPPlist(7,YPPsym((P)"type"),YPPsym((P)"info"),YPPsym((P)"test"),YPPsym((P)"handler"),YPPsym((P)"body"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T144 = YPfab_sig(YPPlist(7,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)7),VARREF(YevalSastYLmonitorG),Ynil);
  fun_objectify_monitor_290 = YPfab_met(FUNCODEREF(fun_objectify_monitor_290),T144,LITREF(lit_608),LITREF(lit_609),sloc(999),YPfalse);
  T146 = VARREF_OR(YevalSastYobjectify_monitor,YPfalse);
  T147 = fun_objectify_monitor_290;
  T145 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T146,T147);
  VARSET(YevalSastYobjectify_monitor,T145);
  lit_610 = YPPsym((P)"objectify-export");
  lit_611 = YPPlist(3,YPPsym((P)"names"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_612 = YPsb((P)"Can only export bindings from target environment.\n");
  lit_613 = YPPlist(1,YPPsym((P)"name"));
  lit_614 = YPPlist(1,YPPsym((P)"exit"));
  lit_615 = YPsb((P)"Continue without exporting %s");
  lit_616 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  lit_617 = YPsb((P)"Can't export undefined binding %s.\n");
  T153 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_291 = YPfab_met(FUNCODEREF(fun_291),T153,YPfalse,LITREF(lit_558),YPfalse,YPfalse);
  T152 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_292 = YPfab_met(FUNCODEREF(fun_292),T152,YPfalse,LITREF(lit_616),sloc(1020),YPfalse);
  T151 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_293 = YPfab_met(FUNCODEREF(fun_293),T151,YPfalse,LITREF(lit_558),sloc(1021),YPfalse);
  T150 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_294 = YPfab_met(FUNCODEREF(fun_294),T150,YPfalse,LITREF(lit_614),sloc(1017),YPfalse);
  T149 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_295 = YPfab_met(FUNCODEREF(fun_295),T149,YPfalse,LITREF(lit_613),sloc(1014),YPfalse);
  T148 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_export_296 = YPfab_met(FUNCODEREF(fun_objectify_export_296),T148,LITREF(lit_610),LITREF(lit_611),sloc(1007),YPfalse);
  T155 = VARREF_OR(YevalSastYobjectify_export,YPfalse);
  T156 = fun_objectify_export_296;
  T154 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T155,T156);
  VARSET(YevalSastYobjectify_export,T154);
  lit_618 = YPPsym((P)"objectify-use/export-module");
  lit_619 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_620 = YPPlist(1,YPPsym((P)"b"));
  T158 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_297 = YPfab_met(FUNCODEREF(fun_297),T158,YPfalse,LITREF(lit_620),sloc(1032),YPfalse);
  T157 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_useSexport_module_298 = YPfab_met(FUNCODEREF(fun_objectify_useSexport_module_298),T157,LITREF(lit_618),LITREF(lit_619),sloc(1026),YPfalse);
  T160 = VARREF_OR(YevalSastYobjectify_useSexport_module,YPfalse);
  T161 = fun_objectify_useSexport_module_298;
  T159 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T160,T161);
  VARSET(YevalSastYobjectify_useSexport_module,T159);
  lit_621 = YPPsym((P)"objectify-use-include");
  lit_622 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_623 = YPPlist(1,YPPsym((P)"x"));
  T163 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_299 = YPfab_met(FUNCODEREF(fun_299),T163,YPfalse,LITREF(lit_623),sloc(1041),YPfalse);
  T162 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_include_300 = YPfab_met(FUNCODEREF(fun_objectify_use_include_300),T162,LITREF(lit_621),LITREF(lit_622),sloc(1038),YPfalse);
  T165 = VARREF_OR(YevalSastYobjectify_use_include,YPfalse);
  T166 = fun_objectify_use_include_300;
  T164 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T165,T166);
  VARSET(YevalSastYobjectify_use_include,T164);
  lit_624 = YPPsym((P)"objectify-use-library");
  lit_625 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_626 = YPPlist(1,YPPsym((P)"x"));
  T168 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_301 = YPfab_met(FUNCODEREF(fun_301),T168,YPfalse,LITREF(lit_626),sloc(1048),YPfalse);
  T167 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_library_302 = YPfab_met(FUNCODEREF(fun_objectify_use_library_302),T167,LITREF(lit_624),LITREF(lit_625),sloc(1045),YPfalse);
  T170 = VARREF_OR(YevalSastYobjectify_use_library,YPfalse);
  T171 = fun_objectify_use_library_302;
  T169 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T170,T171);
  VARSET(YevalSastYobjectify_use_library,T169);
  lit_627 = YPPsym((P)"objectify-use-module");
  lit_628 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_629 = YPPsym((P)"use-mod");
  lit_630 = YPPlist(1,YPPsym((P)"name"));
  lit_631 = YPPlist(1,YPPsym((P)"b"));
  lit_632 = YPPsym((P)"use-c-mod");
  lit_633 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"name"));
  lit_634 = YPsb((P)".c");
  lit_635 = YPsb((P)".h");
  lit_636 = YPsb((P)".swig");
  lit_637 = YPsb((P)".c");
  T175 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_303 = YPfab_met(FUNCODEREF(fun_303),T175,YPfalse,LITREF(lit_631),sloc(1059),YPfalse);
  T174 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_use_mod_304 = YPfab_met(FUNCODEREF(fun_use_mod_304),T174,LITREF(lit_629),LITREF(lit_630),sloc(1055),YPfalse);
  T173 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_use_c_mod_305 = YPfab_met(FUNCODEREF(fun_use_c_mod_305),T173,LITREF(lit_632),LITREF(lit_633),sloc(1062),YPfalse);
  T172 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_module_306 = YPfab_met(FUNCODEREF(fun_objectify_use_module_306),T172,LITREF(lit_627),LITREF(lit_628),sloc(1052),YPfalse);
  T177 = VARREF_OR(YevalSastYobjectify_use_module,YPfalse);
  T178 = fun_objectify_use_module_306;
  T176 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T177,T178);
  VARSET(YevalSastYobjectify_use_module,T176);
  lit_638 = YPPsym((P)"objectify-use-mangle-module");
  lit_639 = YPPlist(4,YPPsym((P)"name"),YPPsym((P)"mangler"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_640 = YPPlist(1,YPPsym((P)"b"));
  T180 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_307 = YPfab_met(FUNCODEREF(fun_307),T180,YPfalse,LITREF(lit_640),sloc(1084),YPfalse);
  T179 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YevalSastYLprogramG),Ynil);
  fun_objectify_use_mangle_module_308 = YPfab_met(FUNCODEREF(fun_objectify_use_mangle_module_308),T179,LITREF(lit_638),LITREF(lit_639),sloc(1076),YPfalse);
  T182 = VARREF_OR(YevalSastYobjectify_use_mangle_module,YPfalse);
  T183 = fun_objectify_use_mangle_module_308;
  T181 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T182,T183);
  VARSET(YevalSastYobjectify_use_mangle_module,T181);
  lit_641 = YPPsym((P)"expand-bind-list");
  lit_642 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_643 = YPsb((P)"Expected Pattern List %=\n");
  T184 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_list_309 = YPfab_met(FUNCODEREF(fun_expand_bind_list_309),T184,LITREF(lit_641),LITREF(lit_642),sloc(1090),YPfalse);
  T186 = VARREF_OR(YevalSastYexpand_bind_list,YPfalse);
  T187 = fun_expand_bind_list_309;
  T185 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T186,T187);
  VARSET(YevalSastYexpand_bind_list,T185);
  lit_644 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_645 = YPPsym((P)"match-nul-list");
  T191 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T190 = YPfab_sig(YPPlist(3,T191,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  T189 = fun_expand_bind_list_310 = YPfab_met(FUNCODEREF(fun_expand_bind_list_310),T190,LITREF(lit_641),LITREF(lit_644),sloc(1093),YPfalse);
  T194 = VARREF_OR(YevalSastYexpand_bind_list,YPfalse);
  T195 = fun_expand_bind_list_310;
  T193 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T194,T195);
  T192 = VARSET(YevalSastYexpand_bind_list,T193);
  T188 = T192;
  return T188;
}

P YevalSastY___main_8___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103;
DEFCREGS();
  lit_646 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_647 = YPsb((P)"Unquote Unexpected Here %=\n");
  lit_648 = YPsb((P)"Unquote Splicing Unexpected Here %=\n");
  T0 = YPfab_sig(YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_expand_bind_list_311 = YPfab_met(FUNCODEREF(fun_expand_bind_list_311),T0,LITREF(lit_641),LITREF(lit_646),sloc(1096),YPfalse);
  T2 = VARREF_OR(YevalSastYexpand_bind_list,YPfalse);
  T3 = fun_expand_bind_list_311;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSastYexpand_bind_list,T1);
  lit_649 = YPPsym((P)"expand-bind-list*");
  lit_650 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  T5 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T4 = YPfab_sig(YPPlist(3,T5,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_listT_312 = YPfab_met(FUNCODEREF(fun_expand_bind_listT_312),T4,LITREF(lit_649),LITREF(lit_650),sloc(1105),YPfalse);
  T7 = VARREF_OR(YevalSastYexpand_bind_listT,YPfalse);
  T8 = fun_expand_bind_listT_312;
  T6 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T7,T8);
  VARSET(YevalSastYexpand_bind_listT,T6);
  lit_651 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  T9 = YPfab_sig(YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_listT_313 = YPfab_met(FUNCODEREF(fun_expand_bind_listT_313),T9,LITREF(lit_649),LITREF(lit_651),sloc(1108),YPfalse);
  T11 = VARREF_OR(YevalSastYexpand_bind_listT,YPfalse);
  T12 = fun_expand_bind_listT_313;
  T10 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T11,T12);
  VARSET(YevalSastYexpand_bind_listT,T10);
  lit_652 = YPPsym((P)"expand-bind-element");
  lit_653 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_654 = YPPsym((P)"match-atom");
  lit_655 = YPPsym((P)"quote");
  T13 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_element_314 = YPfab_met(FUNCODEREF(fun_expand_bind_element_314),T13,LITREF(lit_652),LITREF(lit_653),sloc(1112),YPfalse);
  T15 = VARREF_OR(YevalSastYexpand_bind_element,YPfalse);
  T16 = fun_expand_bind_element_314;
  T14 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T15,T16);
  VARSET(YevalSastYexpand_bind_element,T14);
  lit_656 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_657 = YPPsym((P)"match-unquote");
  lit_658 = YPPsym((P)"tail");
  lit_659 = YPPsym((P)"match-sublist");
  T17 = YPfab_sig(YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_bind_element_315 = YPfab_met(FUNCODEREF(fun_expand_bind_element_315),T17,LITREF(lit_652),LITREF(lit_656),sloc(1115),YPfalse);
  T19 = VARREF_OR(YevalSastYexpand_bind_element,YPfalse);
  T20 = fun_expand_bind_element_315;
  T18 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T19,T20);
  VARSET(YevalSastYexpand_bind_element,T18);
  lit_660 = YPPsym((P)"expand-pattern");
  lit_661 = YPPlist(3,YPPsym((P)"pat"),YPPsym((P)"var"),YPPsym((P)"fail"));
  lit_662 = YPPsym((P)"if");
  lit_663 = YPPsym((P)"isa?");
  lit_664 = YPPsym((P)"<lst>");
  lit_665 = YPsb((P)"Match Pattern Failure");
  T21 = YPfab_sig(YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_expand_pattern_316 = YPfab_met(FUNCODEREF(fun_expand_pattern_316),T21,LITREF(lit_660),LITREF(lit_661),sloc(1126),YPfalse);
  T23 = VARREF_OR(YevalSastYexpand_pattern,YPfalse);
  T24 = fun_expand_pattern_316;
  T22 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T23,T24);
  VARSET(YevalSastYexpand_pattern,T22);
  lit_666 = YPPsym((P)"expand-syntax-if");
  lit_667 = YPPlist(1,YPPsym((P)"x"));
  lit_668 = YPPsym((P)"esc");
  lit_669 = YPPsym((P)"return");
  lit_670 = YPPsym((P)"loc");
  lit_671 = YPPsym((P)"msg");
  lit_672 = YPPsym((P)"<str>");
  lit_673 = YPPsym((P)"args");
  lit_674 = YPPlist(1,YPPsym((P)"x"));
  T26 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_317 = YPfab_met(FUNCODEREF(fun_317),T26,YPfalse,LITREF(lit_674),YPfalse,YPfalse);
  T25 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_expand_syntax_if_318 = YPfab_met(FUNCODEREF(fun_expand_syntax_if_318),T25,LITREF(lit_666),LITREF(lit_667),sloc(1131),YPfalse);
  T28 = VARREF_OR(YevalSastYexpand_syntax_if,YPfalse);
  T29 = fun_expand_syntax_if_318;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YevalSastYexpand_syntax_if,T27);
  lit_675 = YPPsym((P)"r-extend*");
  lit_676 = YPPlist(2,YPPsym((P)"r"),YPPsym((P)"bindings"));
  T30 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YevalSmoduleYLstatic_environmentG),Ynil);
  fun_r_extendT_319 = YPfab_met(FUNCODEREF(fun_r_extendT_319),T30,LITREF(lit_675),LITREF(lit_676),sloc(1155),YPfalse);
  T32 = VARREF_OR(YevalSastYr_extendT,YPfalse);
  T33 = fun_r_extendT_319;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSastYr_extendT,T31);
  lit_677 = YPPsym((P)"find-binding");
  lit_678 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T34 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLstatic_local_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_320 = YPfab_met(FUNCODEREF(fun_find_binding_320),T34,LITREF(lit_677),LITREF(lit_678),sloc(1159),YPfalse);
  T36 = VARREF_OR(YevalSmoduleYfind_binding,YPfalse);
  T37 = fun_find_binding_320;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YevalSmoduleYfind_binding,T35);
  lit_679 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T38 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLstatic_nul_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_321 = YPfab_met(FUNCODEREF(fun_find_binding_321),T38,LITREF(lit_677),LITREF(lit_679),sloc(1169),YPfalse);
  T40 = VARREF_OR(YevalSmoduleYfind_binding,YPfalse);
  T41 = fun_find_binding_321;
  T39 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T40,T41);
  VARSET(YevalSmoduleYfind_binding,T39);
  VARSET(YevalSastYTmagic_bindingsT,Ynil);
  lit_680 = YPPsym((P)"register-magic-binding");
  lit_681 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"value"));
  T42 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_register_magic_binding_322 = YPfab_met(FUNCODEREF(fun_register_magic_binding_322),T42,LITREF(lit_680),LITREF(lit_681),sloc(1176),YPfalse);
  T44 = VARREF_OR(YevalSastYregister_magic_binding,YPfalse);
  T45 = fun_register_magic_binding_322;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YevalSastYregister_magic_binding,T43);
  lit_682 = YPPsym((P)"magic-bindings");
  T46 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_magic_bindings_323 = YPfab_met(FUNCODEREF(fun_magic_bindings_323),T46,LITREF(lit_682),LITREF(lit_558),sloc(1179),YPfalse);
  T48 = VARREF_OR(YevalSastYmagic_bindings,YPfalse);
  T49 = fun_magic_bindings_323;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YevalSastYmagic_bindings,T47);
  lit_683 = YPPlist(1,YPPsym((P)"exp"));
  lit_684 = YPPlist(1,YPPsym((P)"return"));
  lit_685 = YPPsym((P)"x-1518");
  lit_686 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_687 = YPPsym((P)"define-magic-binding");
  lit_688 = YPsb((P)"special-");
  lit_689 = YPsb((P)"$sexpr-");
  lit_690 = YPsb((P)"-tag");
  lit_691 = YPPsym((P)"dv");
  lit_692 = YPPsym((P)"new");
  lit_693 = YPPsym((P)"<module-binding>");
  lit_694 = YPPsym((P)"binding-kind");
  lit_695 = YPPsym((P)"binding-name");
  lit_696 = YPPsym((P)"binding-module");
  lit_697 = YPPsym((P)"binding-handler");
  lit_698 = YPPsym((P)"binding-free?");
  T52 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1518_324 = YPfab_met(FUNCODEREF(fun_x_1518_324),T52,LITREF(lit_685),LITREF(lit_686),YPfalse,YPfalse);
  T51 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_325 = YPfab_met(FUNCODEREF(fun_325),T51,YPfalse,LITREF(lit_684),YPfalse,YPfalse);
  T50 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_326 = YPfab_met(FUNCODEREF(fun_326),T50,YPfalse,LITREF(lit_683),YPfalse,YPfalse);
  T53 = fun_326;
  YPmacro(YPPsym((P)"eval/ast"),YPPsym((P)"define-magic-binding"),T53);
  lit_699 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T54 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_327 = YPfab_met(FUNCODEREF(fun_327),T54,YPfalse,LITREF(lit_699),sloc(1194),YPfalse);
  T56 = fun_327;
  T55 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_if_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T56,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_if,T55);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_662),VARREF(YevalSastYspecial_if));
  lit_700 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T57 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_328 = YPfab_met(FUNCODEREF(fun_328),T57,YPfalse,LITREF(lit_700),sloc(1198),YPfalse);
  T59 = fun_328;
  T58 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_begin_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T59,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_begin,T58);
  lit_701 = YPPsym((P)"begin");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_701),VARREF(YevalSastYspecial_begin));
  lit_702 = YPPsym((P)"%raw");
  VARSET(YevalSastYDsexpr_Praw_tag,LITREF(lit_702));
  lit_703 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T60 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_329 = YPfab_met(FUNCODEREF(fun_329),T60,YPfalse,LITREF(lit_703),sloc(1203),YPfalse);
  T62 = fun_329;
  T61 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_Praw_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T62,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_Praw,T61);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_702),VARREF(YevalSastYspecial_Praw));
  lit_704 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T63 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_330 = YPfab_met(FUNCODEREF(fun_330),T63,YPfalse,LITREF(lit_704),sloc(1206),YPfalse);
  T65 = fun_330;
  T64 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_quote_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T65,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_quote,T64);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_655),VARREF(YevalSastYspecial_quote));
  lit_705 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T66 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_331 = YPfab_met(FUNCODEREF(fun_331),T66,YPfalse,LITREF(lit_705),sloc(1209),YPfalse);
  T68 = fun_331;
  T67 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_set_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T68,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_set,T67);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_9),VARREF(YevalSastYspecial_set));
  lit_706 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T69 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_332 = YPfab_met(FUNCODEREF(fun_332),T69,YPfalse,LITREF(lit_706),sloc(1213),YPfalse);
  T71 = fun_332;
  T70 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T71,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define,T70);
  lit_707 = YPPsym((P)"define");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_707),VARREF(YevalSastYspecial_define));
  lit_708 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T72 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_333 = YPfab_met(FUNCODEREF(fun_333),T72,YPfalse,LITREF(lit_708),sloc(1217),YPfalse);
  T74 = fun_333;
  T73 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_constant_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T74,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_constant,T73);
  lit_709 = YPPsym((P)"define-constant");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_709),VARREF(YevalSastYspecial_define_constant));
  lit_710 = YPPsym((P)"ddv");
  VARSET(YevalSastYDsexpr_define_dynamic_tag,LITREF(lit_710));
  lit_711 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T75 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_334 = YPfab_met(FUNCODEREF(fun_334),T75,YPfalse,LITREF(lit_711),sloc(1223),YPfalse);
  T77 = fun_334;
  T76 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_define_dynamic_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T77,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_dynamic,T76);
  lit_712 = YPPsym((P)"define-dynamic");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_712),VARREF(YevalSastYspecial_define_dynamic));
  lit_713 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T78 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_335 = YPfab_met(FUNCODEREF(fun_335),T78,YPfalse,LITREF(lit_713),sloc(1227),YPfalse);
  T80 = fun_335;
  T79 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_syntax_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T80,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_syntax,T79);
  lit_714 = YPPsym((P)"define-syntax");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_714),VARREF(YevalSastYspecial_define_syntax));
  lit_715 = YPPsym((P)"dss");
  VARSET(YevalSastYDsexpr_define_static_syntax_tag,LITREF(lit_715));
  lit_716 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T81 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_336 = YPfab_met(FUNCODEREF(fun_336),T81,YPfalse,LITREF(lit_716),sloc(1233),YPfalse);
  T83 = fun_336;
  T82 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_define_static_syntax_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T83,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_static_syntax,T82);
  lit_717 = YPPsym((P)"define-static-syntax");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_717),VARREF(YevalSastYspecial_define_static_syntax));
  lit_718 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T84 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_337 = YPfab_met(FUNCODEREF(fun_337),T84,YPfalse,LITREF(lit_718),sloc(1237),YPfalse);
  T86 = fun_337;
  T85 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_method_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T86,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_method,T85);
  lit_719 = YPPsym((P)"define-method");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_719),VARREF(YevalSastYspecial_define_method));
  lit_720 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T87 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_338 = YPfab_met(FUNCODEREF(fun_338),T87,YPfalse,LITREF(lit_720),sloc(1243),YPfalse);
  T89 = fun_338;
  T88 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_generic_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T89,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_generic,T88);
  lit_721 = YPPsym((P)"define-generic");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_721),VARREF(YevalSastYspecial_define_generic));
  lit_722 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T90 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_339 = YPfab_met(FUNCODEREF(fun_339),T90,YPfalse,LITREF(lit_722),sloc(1247),YPfalse);
  T92 = fun_339;
  T91 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_function_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T92,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_function,T91);
  lit_723 = YPPsym((P)"define-function");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_723),VARREF(YevalSastYspecial_define_function));
  lit_724 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T93 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_340 = YPfab_met(FUNCODEREF(fun_340),T93,YPfalse,LITREF(lit_724),sloc(1253),YPfalse);
  T95 = fun_340;
  T94 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_method_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T95,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_method,T94);
  lit_725 = YPPsym((P)"method");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_725),VARREF(YevalSastYspecial_method));
  VARSET(YevalSastYDsexpr_boundQ_tag,LITREF(lit_554));
  lit_726 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T96 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_341 = YPfab_met(FUNCODEREF(fun_341),T96,YPfalse,LITREF(lit_726),sloc(1259),YPfalse);
  T98 = fun_341;
  T97 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_boundQ_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T98,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_boundQ,T97);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_554),VARREF(YevalSastYspecial_boundQ));
  lit_727 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T99 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_342 = YPfab_met(FUNCODEREF(fun_342),T99,YPfalse,LITREF(lit_727),sloc(1262),YPfalse);
  T101 = fun_342;
  T100 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_let_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T101,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_let,T100);
  T103 = XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_6),VARREF(YevalSastYspecial_let));
  T102 = T103;
  return T102;
}

P YevalSastY___main_9___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74;
DEFCREGS();
  lit_728 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T0 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_343 = YPfab_met(FUNCODEREF(fun_343),T0,YPfalse,LITREF(lit_728),sloc(1268),YPfalse);
  T2 = fun_343;
  T1 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_def_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T2,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_def,T1);
  lit_729 = YPPsym((P)"def");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_729),VARREF(YevalSastYspecial_def));
  lit_730 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T3 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_344 = YPfab_met(FUNCODEREF(fun_344),T3,YPfalse,LITREF(lit_730),sloc(1271),YPfalse);
  T5 = fun_344;
  T4 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_locals_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T5,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_locals,T4);
  lit_731 = YPPsym((P)"locals");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_731),VARREF(YevalSastYspecial_locals));
  lit_732 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T6 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_345 = YPfab_met(FUNCODEREF(fun_345),T6,YPfalse,LITREF(lit_732),sloc(1276),YPfalse);
  T8 = fun_345;
  T7 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_iterate_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T8,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_iterate,T7);
  lit_733 = YPPsym((P)"iterate");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_733),VARREF(YevalSastYspecial_iterate));
  lit_734 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T9 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_346 = YPfab_met(FUNCODEREF(fun_346),T9,YPfalse,LITREF(lit_734),sloc(1279),YPfalse);
  T11 = fun_346;
  T10 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_bind_exit_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T11,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_bind_exit,T10);
  lit_735 = YPPsym((P)"bind-exit");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_735),VARREF(YevalSastYspecial_bind_exit));
  lit_736 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T12 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_347 = YPfab_met(FUNCODEREF(fun_347),T12,YPfalse,LITREF(lit_736),sloc(1283),YPfalse);
  T14 = fun_347;
  T13 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_unwind_protect_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T14,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_unwind_protect,T13);
  lit_737 = YPPsym((P)"unwind-protect");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_737),VARREF(YevalSastYspecial_unwind_protect));
  lit_738 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T15 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_348 = YPfab_met(FUNCODEREF(fun_348),T15,YPfalse,LITREF(lit_738),sloc(1289),YPfalse);
  T17 = fun_348;
  T16 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_monitor_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T17,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_monitor,T16);
  lit_739 = YPPsym((P)"monitor");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_739),VARREF(YevalSastYspecial_monitor));
  lit_740 = YPPsym((P)"pairize");
  lit_741 = YPPlist(1,YPPsym((P)"args"));
  lit_742 = YPPsym((P)"fab-pair");
  T18 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pairize_349 = YPfab_met(FUNCODEREF(fun_pairize_349),T18,LITREF(lit_740),LITREF(lit_741),sloc(1293),YPfalse);
  T20 = VARREF_OR(YevalSastYpairize,YPfalse);
  T21 = fun_pairize_349;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YevalSastYpairize,T19);
  lit_743 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_744 = YPPsym((P)"fab-class");
  T22 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_350 = YPfab_met(FUNCODEREF(fun_350),T22,YPfalse,LITREF(lit_743),sloc(1298),YPfalse);
  T24 = fun_350;
  T23 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_define_class_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T24,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_class,T23);
  lit_745 = YPPsym((P)"define-class");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_745),VARREF(YevalSastYspecial_define_class));
  lit_746 = YPPsym((P)"objectify-define-property");
  lit_747 = YPPlist(4,YPPsym((P)"x"),YPPsym((P)"setter?"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  lit_748 = YPPsym((P)"%prop");
  lit_749 = YPPsym((P)"%prop-unbound-error");
  T25 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_objectify_define_property_351 = YPfab_met(FUNCODEREF(fun_objectify_define_property_351),T25,LITREF(lit_746),LITREF(lit_747),sloc(1303),YPfalse);
  T27 = VARREF_OR(YevalSastYobjectify_define_property,YPfalse);
  T28 = fun_objectify_define_property_351;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YevalSastYobjectify_define_property,T26);
  lit_750 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T29 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_352 = YPfab_met(FUNCODEREF(fun_352),T29,YPfalse,LITREF(lit_750),sloc(1324),YPfalse);
  T31 = fun_352;
  T30 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_propX_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T31,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_propX,T30);
  lit_751 = YPPsym((P)"prop!");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_751),VARREF(YevalSastYspecial_propX));
  lit_752 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T32 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_353 = YPfab_met(FUNCODEREF(fun_353),T32,YPfalse,LITREF(lit_752),sloc(1327),YPfalse);
  T34 = fun_353;
  T33 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_prop_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T34,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_prop,T33);
  lit_753 = YPPsym((P)"prop");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_753),VARREF(YevalSastYspecial_prop));
  lit_754 = YPPsym((P)"ct");
  VARSET(YevalSastYDsexpr_compile_time_tag,LITREF(lit_754));
  lit_755 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T35 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_354 = YPfab_met(FUNCODEREF(fun_354),T35,YPfalse,LITREF(lit_755),sloc(1332),YPfalse);
  T37 = fun_354;
  T36 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_compile_time_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T37,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_compile_time,T36);
  lit_756 = YPPsym((P)"compile-time");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_756),VARREF(YevalSastYspecial_compile_time));
  lit_757 = YPPsym((P)"ct-also");
  VARSET(YevalSastYDsexpr_compile_time_also_tag,LITREF(lit_757));
  lit_758 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T38 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_355 = YPfab_met(FUNCODEREF(fun_355),T38,YPfalse,LITREF(lit_758),sloc(1337),YPfalse);
  T40 = fun_355;
  T39 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_compile_time_also_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T40,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_compile_time_also,T39);
  lit_759 = YPPsym((P)"compile-time-also");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_759),VARREF(YevalSastYspecial_compile_time_also));
  lit_760 = YPPsym((P)"dl");
  VARSET(YevalSastYDsexpr_define_primitive_tag,LITREF(lit_760));
  lit_761 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T41 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_356 = YPfab_met(FUNCODEREF(fun_356),T41,YPfalse,LITREF(lit_761),sloc(1342),YPfalse);
  T43 = fun_356;
  T42 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_define_primitive_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T43,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_define_primitive,T42);
  lit_762 = YPPsym((P)"define-primitive");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_762),VARREF(YevalSastYspecial_define_primitive));
  lit_763 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T44 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_357 = YPfab_met(FUNCODEREF(fun_357),T44,YPfalse,LITREF(lit_763),sloc(1352),YPfalse);
  T46 = fun_357;
  T45 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_quasiquote_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T46,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_quasiquote,T45);
  lit_764 = YPPsym((P)"quasiquote");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_764),VARREF(YevalSastYspecial_quasiquote));
  lit_765 = YPPsym((P)"ast-macro-expand");
  lit_766 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T47 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_macro_expand_358 = YPfab_met(FUNCODEREF(fun_ast_macro_expand_358),T47,LITREF(lit_765),LITREF(lit_766),sloc(1355),YPfalse);
  T49 = VARREF_OR(YevalSastYast_macro_expand,YPfalse);
  T50 = fun_ast_macro_expand_358;
  T48 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T49,T50);
  VARSET(YevalSastYast_macro_expand,T48);
  lit_767 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T51 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_359 = YPfab_met(FUNCODEREF(fun_359),T51,YPfalse,LITREF(lit_767),sloc(1364),YPfalse);
  T53 = fun_359;
  T52 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_macro_expand_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T53,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_macro_expand,T52);
  lit_768 = YPPsym((P)"macro-expand");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_768),VARREF(YevalSastYspecial_macro_expand));
  lit_769 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T54 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_360 = YPfab_met(FUNCODEREF(fun_360),T54,YPfalse,LITREF(lit_769),sloc(1368),YPfalse);
  T56 = fun_360;
  T55 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSsyntaxYDsexpr_syntax_if_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T56,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_syntax_if,T55);
  lit_770 = YPPsym((P)"syntax-if");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_770),VARREF(YevalSastYspecial_syntax_if));
  lit_771 = YPPsym((P)"export");
  VARSET(YevalSastYDsexpr_export_tag,LITREF(lit_771));
  lit_772 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T57 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_361 = YPfab_met(FUNCODEREF(fun_361),T57,YPfalse,LITREF(lit_772),sloc(1378),YPfalse);
  T59 = fun_361;
  T58 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_export_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T59,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_export,T58);
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_771),VARREF(YevalSastYspecial_export));
  lit_773 = YPPsym((P)"use");
  VARSET(YevalSastYDsexpr_use_module_tag,LITREF(lit_773));
  lit_774 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T60 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_362 = YPfab_met(FUNCODEREF(fun_362),T60,YPfalse,LITREF(lit_774),sloc(1383),YPfalse);
  T62 = fun_362;
  T61 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_use_module_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T62,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_module,T61);
  lit_775 = YPPsym((P)"use-module");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_775),VARREF(YevalSastYspecial_use_module));
  lit_776 = YPPsym((P)"use/mangle");
  VARSET(YevalSastYDsexpr_use_mangle_module_tag,LITREF(lit_776));
  lit_777 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T63 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_363 = YPfab_met(FUNCODEREF(fun_363),T63,YPfalse,LITREF(lit_777),sloc(1388),YPfalse);
  T65 = fun_363;
  T64 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_use_mangle_module_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T65,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_mangle_module,T64);
  lit_778 = YPPsym((P)"use-mangle-module");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_778),VARREF(YevalSastYspecial_use_mangle_module));
  lit_779 = YPPsym((P)"use/include");
  VARSET(YevalSastYDsexpr_use_include_tag,LITREF(lit_779));
  lit_780 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T66 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_364 = YPfab_met(FUNCODEREF(fun_364),T66,YPfalse,LITREF(lit_780),sloc(1393),YPfalse);
  T68 = fun_364;
  T67 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_use_include_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T68,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_use_include,T67);
  lit_781 = YPPsym((P)"use-include");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_781),VARREF(YevalSastYspecial_use_include));
  lit_782 = YPPsym((P)"use/library");
  VARSET(YevalSastYDsexpr_use_library_tag,LITREF(lit_782));
  lit_783 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T71 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T70 = fun_365 = YPfab_met(FUNCODEREF(fun_365),T71,YPfalse,LITREF(lit_783),sloc(1398),YPfalse);
  T74 = fun_365;
  T73 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_use_library_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T74,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  T72 = VARSET(YevalSastYspecial_use_library,T73);
  T69 = T72;
  return T69;
}

P YevalSastY___main_10___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40;
DEFCREGS();
  lit_784 = YPPsym((P)"use-library");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_784),VARREF(YevalSastYspecial_use_library));
  lit_785 = YPPsym((P)"use/export");
  VARSET(YevalSastYDsexpr_useSexport_module_tag,LITREF(lit_785));
  lit_786 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"r"),YPPsym((P)"tail?"));
  T0 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_366 = YPfab_met(FUNCODEREF(fun_366),T0,YPfalse,LITREF(lit_786),sloc(1403),YPfalse);
  T2 = fun_366;
  T1 = XCALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_513),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSastYDsexpr_useSexport_module_tag),VARREF(YevalSmoduleYbinding_module),YPfalse,VARREF(YevalSmoduleYbinding_handler),T2,VARREF(YevalSmoduleYbinding_freeQ),YPfalse);
  VARSET(YevalSastYspecial_useSexport_module,T1);
  lit_787 = YPPsym((P)"use/export-module");
  XCALL2(1,VARREF(YevalSastYregister_magic_binding),LITREF(lit_787),VARREF(YevalSastYspecial_useSexport_module));
  lit_788 = YPPsym((P)"install-initial-bindings");
  lit_789 = YPPlist(2,YPPsym((P)"env"),YPPsym((P)"loader"));
  lit_790 = YPPlist(1,YPPsym((P)"name"));
  lit_791 = YPPlist(2,YPPsym((P)"seq"),YPPsym((P)"use"));
  T4 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_367 = YPfab_met(FUNCODEREF(fun_367),T4,YPfalse,LITREF(lit_790),sloc(1438),YPfalse);
  T3 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLstatic_global_environmentG),VARREF(YevalSmoduleYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_install_initial_bindings_368 = YPfab_met(FUNCODEREF(fun_install_initial_bindings_368),T3,LITREF(lit_788),LITREF(lit_789),sloc(1434),YPfalse);
  T6 = VARREF_OR(YevalSmoduleYinstall_initial_bindings,YPfalse);
  T7 = fun_install_initial_bindings_368;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSmoduleYinstall_initial_bindings,T5);
  lit_792 = YPPsym((P)"objectify-with-subtransaction");
  lit_793 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"r"),YPPsym((P)"dynamic-compilation?"),YPPsym((P)"tail?"));
  T9 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_369 = YPfab_met(FUNCODEREF(fun_369),T9,YPfalse,LITREF(lit_558),sloc(1454),YPfalse);
  T8 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  YevalSastYobjectify_with_subtransaction = YPfab_met(FUNCODEREF(YevalSastYobjectify_with_subtransaction),T8,LITREF(lit_792),LITREF(lit_793),sloc(1452),YPfalse);
  T10 = YevalSastYobjectify_with_subtransaction;
  VARSET(YevalSastYobjectify_with_subtransaction,T10);
  lit_794 = YPPsym((P)"install-magic-bindings");
  lit_795 = YPPlist(1,YPPsym((P)"env"));
  lit_796 = YPPlist(1,YPPsym((P)"binding"));
  T12 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_371 = YPfab_met(FUNCODEREF(fun_371),T12,YPfalse,LITREF(lit_796),sloc(1465),YPfalse);
  T11 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinstall_magic_bindings = YPfab_met(FUNCODEREF(YevalSastYinstall_magic_bindings),T11,LITREF(lit_794),LITREF(lit_795),sloc(1463),YPfalse);
  T13 = YevalSastYinstall_magic_bindings;
  VARSET(YevalSastYinstall_magic_bindings,T13);
  lit_797 = YPPsym((P)"reload-macros");
  T14 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYreload_macros = YPfab_met(FUNCODEREF(YevalSastYreload_macros),T14,LITREF(lit_797),LITREF(lit_558),sloc(1471),YPfalse);
  T15 = YevalSastYreload_macros;
  VARSET(YevalSastYreload_macros,T15);
  lit_798 = YPPsym((P)"install-interpreter-hacks");
  lit_799 = YPPlist(1,YPPsym((P)"env"));
  T16 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinstall_interpreter_hacks = YPfab_met(FUNCODEREF(YevalSastYinstall_interpreter_hacks),T16,LITREF(lit_798),LITREF(lit_799),sloc(1478),YPfalse);
  T17 = YevalSastYinstall_interpreter_hacks;
  VARSET(YevalSastYinstall_interpreter_hacks,T17);
  lit_800 = YPPsym((P)"init-runtime");
  T18 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYinit_runtime = YPfab_met(FUNCODEREF(YevalSastYinit_runtime),T18,LITREF(lit_800),LITREF(lit_558),sloc(1481),YPfalse);
  T19 = YevalSastYinit_runtime;
  VARSET(YevalSastYinit_runtime,T19);
  lit_801 = YPPlist(5,YPPsym((P)"ct"),YPPsym((P)"ct-also"),YPPsym((P)"ds"),YPPsym((P)"use"),YPPsym((P)"export"));
  VARSET(YevalSastYsyntax_environment_excluded_bindings,LITREF(lit_801));
  lit_802 = YPPsym((P)"fab-syntax-environment");
  lit_803 = YPPlist(1,YPPsym((P)"module"));
  lit_804 = YPPsym((P)"goo");
  T20 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YevalSmoduleYLstatic_global_environmentG),Ynil);
  YevalSastYfab_syntax_environment = YPfab_met(FUNCODEREF(YevalSastYfab_syntax_environment),T20,LITREF(lit_802),LITREF(lit_803),sloc(1505),YPfalse);
  T21 = YevalSastYfab_syntax_environment;
  VARSET(YevalSastYfab_syntax_environment,T21);
  lit_805 = YPPsym((P)"fab-g2c-module");
  lit_806 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  T22 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSmoduleYLmoduleG),Ynil);
  YevalSastYfab_g2c_module = YPfab_met(FUNCODEREF(YevalSastYfab_g2c_module),T22,LITREF(lit_805),LITREF(lit_806),sloc(1510),YPfalse);
  T23 = YevalSastYfab_g2c_module;
  VARSET(YevalSastYfab_g2c_module,T23);
  lit_807 = YPPsym((P)"init-g2c-boot-environment");
  lit_808 = YPPlist(1,YPPsym((P)"env"));
  T24 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinit_g2c_boot_environment = YPfab_met(FUNCODEREF(YevalSastYinit_g2c_boot_environment),T24,LITREF(lit_807),LITREF(lit_808),sloc(1523),YPfalse);
  T25 = YevalSastYinit_g2c_boot_environment;
  VARSET(YevalSastYinit_g2c_boot_environment,T25);
  lit_809 = YPPsym((P)"init-g2c-regular-environment");
  lit_810 = YPPlist(2,YPPsym((P)"env"),YPPsym((P)"loader"));
  T26 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLstatic_global_environmentG),VARREF(YevalSmoduleYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSastYinit_g2c_regular_environment = YPfab_met(FUNCODEREF(YevalSastYinit_g2c_regular_environment),T26,LITREF(lit_809),LITREF(lit_810),sloc(1529),YPfalse);
  T27 = YevalSastYinit_g2c_regular_environment;
  VARSET(YevalSastYinit_g2c_regular_environment,T27);
  lit_811 = YPPsym((P)"init-ast");
  T28 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSastYinit_ast = YPfab_met(FUNCODEREF(YevalSastYinit_ast),T28,LITREF(lit_811),LITREF(lit_558),sloc(1538),YPfalse);
  T29 = YevalSastYinit_ast;
  VARSET(YevalSastYinit_ast,T29);
  lit_812 = YPPsym((P)"ast-contains-fun?");
  lit_813 = YPPlist(1,YPPsym((P)"x"));
  T30 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_ast_contains_funQ_381 = YPfab_met(FUNCODEREF(fun_ast_contains_funQ_381),T30,LITREF(lit_812),LITREF(lit_813),sloc(1544),YPfalse);
  T32 = VARREF_OR(YevalSastYast_contains_funQ,YPfalse);
  T33 = fun_ast_contains_funQ_381;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSastYast_contains_funQ,T31);
  lit_814 = YPPlist(1,YPPsym((P)"x"));
  lit_815 = YPPlist(1,YPPsym((P)"return"));
  lit_816 = YPPsym((P)"walk");
  lit_817 = YPPlist(1,YPPsym((P)"y"));
  T36 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_walk_382 = YPfab_met(FUNCODEREF(fun_walk_382),T36,LITREF(lit_816),LITREF(lit_817),sloc(1549),YPfalse);
  T35 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_383 = YPfab_met(FUNCODEREF(fun_383),T35,YPfalse,LITREF(lit_815),sloc(1548),YPfalse);
  T34 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_ast_contains_funQ_384 = YPfab_met(FUNCODEREF(fun_ast_contains_funQ_384),T34,LITREF(lit_812),LITREF(lit_814),sloc(1547),YPfalse);
  T38 = VARREF_OR(YevalSastYast_contains_funQ,YPfalse);
  T39 = fun_ast_contains_funQ_384;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YevalSastYast_contains_funQ,T37);
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  T40 = YPfalse;
  return T40;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_evalSmodule;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSfunctional;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSloc;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSlate_macros;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooSsystem},
  {&module_info_gooScolsSlst},
  {&module_info_gooSioSread},
  {&module_info_evalSsyntax},
  {&module_info_evalSdependency},
  {&module_info_evalSmodule},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"class-children", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"*obj-extension*", &module_info_gooSsystem, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"sexpr-def-value", &module_info_evalSsyntax, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"*path-separator*", &module_info_gooSsystem, NULL},
  {"sexpr-variable-name", &module_info_evalSsyntax, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"roll-back-transaction", &module_info_evalSmodule, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"set-standard-read-macro!", &module_info_gooSioSread, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"sexpr-syntax-definition-variable", &module_info_evalSsyntax, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"<bignum>", &module_info_gooSboot, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"sexpr-monitor-expand", &module_info_evalSsyntax, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"module-data-processed?", &module_info_evalSmodule, NULL},
  {"binding-type", &module_info_evalSmodule, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"runtime-module-loader", &module_info_evalSmodule, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"environment-next", &module_info_evalSmodule, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"binding-prop", &module_info_evalSmodule, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"find-dependency", &module_info_evalSdependency, NULL},
  {"frame-bindings", &module_info_evalSmodule, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"sexpr-prop-init?", &module_info_evalSsyntax, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"binding-locative", &module_info_evalSmodule, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"os-name", &module_info_gooSsystem, NULL},
  {"$sexpr-define-tag", &module_info_evalSsyntax, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"probe-module", &module_info_evalSmodule, NULL},
  {"with-subtransaction", &module_info_evalSmodule, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"sexpr-isa-init-props", &module_info_evalSsyntax, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"parent-directory", &module_info_gooSsystem, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"*goo-root*", &module_info_gooSsystem, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"obj-filename", &module_info_gooSsystem, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"environment-uses-modules", &module_info_evalSmodule, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"module-name-to-relpath", &module_info_evalSmodule, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"<static-local-environment>", &module_info_evalSmodule, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"binding-type-setter", &module_info_evalSmodule, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"sexpr-isa-init-values", &module_info_evalSsyntax, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
  {"read-delimited-list", &module_info_gooSioSread, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"sexpr-sequence->begin", &module_info_evalSsyntax, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"import-and-mangle-global!", &module_info_evalSmodule, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"find-goo-file-at", &module_info_gooSsystem, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"insert-globals!", &module_info_evalSmodule, NULL},
  {"detach-dependent", &module_info_evalSdependency, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"$sexpr-if-tag", &module_info_evalSsyntax, NULL},
  {"$sexpr-quasiquote-tag", &module_info_evalSsyntax, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"*exe-extension*", &module_info_gooSsystem, NULL},
  {"sexpr-syntax-if-pattern", &module_info_evalSsyntax, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"module-mangled-name", &module_info_evalSmodule, NULL},
  {"fun-inlineable?-setter", &module_info_gooSfun, NULL},
  {"binding-mangled-name", &module_info_evalSmodule, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"$sexpr-define-class-tag", &module_info_evalSsyntax, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"$sexpr-prop-tag", &module_info_evalSsyntax, NULL},
  {"sexpr-loc-bound-names", &module_info_evalSsyntax, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"sexpr-function-signature", &module_info_evalSsyntax, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"$sexpr-def-tag", &module_info_evalSsyntax, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"add-build-path", &module_info_gooSsystem, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"components-to-pathname", &module_info_gooSsystem, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"create-directory", &module_info_gooSsystem, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"sexpr-make-application", &module_info_evalSsyntax, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"sexpr-operands", &module_info_evalSsyntax, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"transaction-register-dependent", &module_info_evalSmodule, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"binding-inferred-type", &module_info_evalSmodule, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"<binding>", &module_info_evalSmodule, NULL},
  {"do-module-loader-modules", &module_info_evalSmodule, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"do-static-global-bindings", &module_info_evalSmodule, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"sexpr-def-variable", &module_info_evalSsyntax, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"sexpr-assignment-value", &module_info_evalSsyntax, NULL},
  {"c-filename", &module_info_gooSsystem, NULL},
  {"sexpr-expand-backquote", &module_info_evalSsyntax, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"fun-inlineable?", &module_info_gooSfun, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"module-uses-c-includes", &module_info_evalSmodule, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"components-parent-directory", &module_info_gooSsystem, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"sexpr-block-body", &module_info_evalSsyntax, NULL},
  {"dependency-and", &module_info_evalSdependency, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"$sexpr-let-tag", &module_info_evalSsyntax, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"sexpr-isa-parent", &module_info_evalSsyntax, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"time", &module_info_gooSsystem, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"unchecked-runtime-environment", &module_info_evalSmodule, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%compile", &module_info_gooSsystem, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"%load", &module_info_gooSsystem, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"$sexpr-isa-tag", &module_info_evalSsyntax, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"environment-bindings", &module_info_evalSmodule, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"runtime-environment", &module_info_evalSmodule, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"install-initial-bindings", &module_info_evalSmodule, NULL},
  {"module-uses-c-files", &module_info_evalSmodule, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"process-id", &module_info_gooSsystem, NULL},
  {"$sexpr-set-tag", &module_info_evalSsyntax, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"report-undefined-global-bindings", &module_info_evalSmodule, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"do-named-static-global-bindings", &module_info_evalSmodule, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"$sexpr-locals-tag", &module_info_evalSsyntax, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"<module-binding>", &module_info_evalSmodule, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"file-type", &module_info_gooSsystem, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"$char-long-names", &module_info_gooSioSread, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"module-referenced-bindings", &module_info_evalSmodule, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"add-tmp-path", &module_info_gooSsystem, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"$sexpr-define-constant-tag", &module_info_evalSsyntax, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"sexpr-make-method", &module_info_evalSsyntax, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"sexpr-prop-name", &module_info_evalSsyntax, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"gooc-filename", &module_info_gooSsystem, NULL},
  {"fab-static-global-environment", &module_info_evalSmodule, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"sexpr-syntax-if-value", &module_info_evalSsyntax, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"module-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"binding-free?-setter", &module_info_evalSmodule, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"components-basename", &module_info_gooSsystem, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"sexpr-def?", &module_info_evalSsyntax, NULL},
  {"sexpr-operator", &module_info_evalSsyntax, NULL},
  {"env-object-name", &module_info_evalSmodule, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"sexpr-function-definition-value", &module_info_evalSsyntax, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"dependency-or", &module_info_evalSdependency, NULL},
  {"register-referenced-binding", &module_info_evalSmodule, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"binding-native-to?", &module_info_evalSmodule, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"import-global!", &module_info_evalSmodule, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"sexpr-if-else", &module_info_evalSsyntax, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"reload-modules", &module_info_evalSmodule, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"fab-subset-environment", &module_info_evalSmodule, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"$sexpr-begin-tag", &module_info_evalSsyntax, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"dependency-includes-all?", &module_info_evalSdependency, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"find-static-global-environment", &module_info_evalSmodule, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"sexpr-unquote-splicing?", &module_info_evalSsyntax, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"<binding-name>", &module_info_evalSmodule, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"module-uses-c-libraries", &module_info_evalSmodule, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"sexpr-forward-primitive?", &module_info_evalSsyntax, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"module-runtime-data-setter", &module_info_evalSmodule, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"<pathname-error>", &module_info_gooSsystem, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"sexpr-block-name", &module_info_evalSsyntax, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"binding-global-box-setter", &module_info_evalSmodule, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"binding-name", &module_info_evalSmodule, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSmodule, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"file-exists?", &module_info_gooSsystem, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"module-loader-stack", &module_info_evalSmodule, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"sexpr-prop-init-var", &module_info_evalSsyntax, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"call-with-subtransaction", &module_info_evalSmodule, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"binding-module-name", &module_info_evalSmodule, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"walk-bindings", &module_info_evalSmodule, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"probe-directory", &module_info_gooSsystem, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"$optimizaton-dependencies", &module_info_evalSdependency, NULL},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_evalSsyntax, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"add-goo-personal-root-path", &module_info_gooSsystem, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"insert-global!", &module_info_evalSmodule, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"find-syntax-environment", &module_info_evalSmodule, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"environment-allows-foreign-names?", &module_info_evalSmodule, NULL},
  {"log-dependency", &module_info_evalSdependency, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"<static-environment>", &module_info_evalSmodule, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"sexpr-signature-value", &module_info_evalSsyntax, NULL},
  {"find-binding", &module_info_evalSmodule, NULL},
  {"<static-global-environment>", &module_info_evalSmodule, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"sexpr-definition-value", &module_info_evalSsyntax, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"namespace-error", &module_info_evalSmodule, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"module-target-environment", &module_info_evalSmodule, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"binding-info-setter", &module_info_evalSmodule, NULL},
  {"binding-info", &module_info_evalSmodule, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"sexpr-isa-prop-inits", &module_info_evalSsyntax, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"sexpr-function-body", &module_info_evalSsyntax, NULL},
  {"$nul-dependency", &module_info_evalSdependency, NULL},
  {"<dependable>", &module_info_evalSdependency, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"$sexpr-define-generic-tag", &module_info_evalSsyntax, NULL},
  {"binding-kind", &module_info_evalSmodule, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"$sexpr-bind-exit-tag", &module_info_evalSsyntax, NULL},
  {"binding-free?", &module_info_evalSmodule, NULL},
  {"register-module!", &module_info_evalSmodule, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"global-box-value-setter", &module_info_evalSmodule, NULL},
  {"binding-inferred-type-setter", &module_info_evalSmodule, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"$sexpr-define-method-tag", &module_info_evalSsyntax, NULL},
  {"<global-box>", &module_info_evalSmodule, NULL},
  {"global-box-value", &module_info_evalSmodule, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"sexpr-function-definition-variable", &module_info_evalSsyntax, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"get-standard-read-macro", &module_info_gooSioSread, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"sexpr-syntax-if-else", &module_info_evalSsyntax, NULL},
  {"load-in", &module_info_evalSmodule, NULL},
  {"so-load", &module_info_gooSsystem, NULL},
  {"os-val-setter", &module_info_gooSsystem, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"sexpr-unquote?", &module_info_evalSsyntax, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"find-goo-file-in-path", &module_info_gooSsystem, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"<namespace-error>", &module_info_evalSmodule, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"set-module-environments", &module_info_evalSmodule, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"sexpr-define-class-parents", &module_info_evalSsyntax, NULL},
  {"sexpr-make-macro-function", &module_info_evalSsyntax, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"*goo-personal-root*", &module_info_gooSsystem, NULL},
  {"dependency-includes-any?", &module_info_evalSdependency, NULL},
  {"$all-dependency-types", &module_info_evalSdependency, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"<dependent>", &module_info_evalSdependency, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"$expansion-parse-dependency", &module_info_evalSdependency, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"binding-handler-setter", &module_info_evalSmodule, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"invalidate-dependent", &module_info_evalSdependency, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"eval", &module_info_evalSsyntax, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"lst*", &module_info_gooScolsSlst, NULL},
  {"$parse-dependencies", &module_info_evalSdependency, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"module-transaction", &module_info_evalSmodule, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"module-exports", &module_info_evalSmodule, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"sexpr-if-then", &module_info_evalSsyntax, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"$name-parse-dependency", &module_info_evalSdependency, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"sexpr-fab-setter", &module_info_evalSsyntax, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"$sexpr-method-tag", &module_info_evalSsyntax, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"$sexpr-quote-tag", &module_info_evalSsyntax, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"goo-filename", &module_info_gooSsystem, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"$sexpr-monitor-tag", &module_info_evalSsyntax, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"sexpr-prop-type", &module_info_evalSsyntax, NULL},
  {"sexpr-fab-getter", &module_info_evalSsyntax, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"dependency-nul?", &module_info_evalSdependency, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"$value-optimization-dependency", &module_info_evalSdependency, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"$sexpr-define-function-tag", &module_info_evalSsyntax, NULL},
  {"sexpr-loc-raw-body", &module_info_evalSsyntax, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"hierarchical-components", &module_info_gooSsystem, NULL},
  {"sexpr-iterate->loc", &module_info_evalSsyntax, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"$goo-boot-module-name", &module_info_evalSmodule, NULL},
  {"module-syntax-environment", &module_info_evalSmodule, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"*c-extension*", &module_info_gooSsystem, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"sexpr-function-definition-adjectives", &module_info_evalSsyntax, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"*dynamic-compilation?*", &module_info_evalSmodule, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"sexpr-syntax-definition-value", &module_info_evalSsyntax, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"add-goo-root-path", &module_info_gooSsystem, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"runtime-module", &module_info_evalSmodule, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"module-mangled-string-name", &module_info_evalSmodule, NULL},
  {"zap-referenced-bindings!", &module_info_evalSmodule, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"module-data-processed?-setter", &module_info_evalSmodule, NULL},
  {"<module>", &module_info_evalSmodule, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"file-mtime", &module_info_gooSsystem, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"environment-module", &module_info_evalSmodule, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"binding-kind-setter", &module_info_evalSmodule, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"$sexpr-macro-expand-tag", &module_info_evalSsyntax, NULL},
  {"binding-prop-setter", &module_info_evalSmodule, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"$sexpr-iterate-tag", &module_info_evalSsyntax, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"sexpr-prop-init", &module_info_evalSsyntax, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"sexpr-prop-owner", &module_info_evalSsyntax, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"packing-as", &module_info_gooSpacker, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"$sexpr-define-syntax-tag", &module_info_evalSsyntax, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"load-module", &module_info_evalSmodule, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"binding-locative-setter", &module_info_evalSmodule, NULL},
  {"*goo-build-root*", &module_info_gooSsystem, NULL},
  {"sexpr-method-signature", &module_info_evalSsyntax, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"transaction-register-implemented-binding", &module_info_evalSmodule, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"sexpr-method-body", &module_info_evalSsyntax, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"binding-module", &module_info_evalSmodule, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"binding-handler", &module_info_evalSmodule, NULL},
  {"$sexpr-unwind-protect-tag", &module_info_evalSsyntax, NULL},
  {"$sexpr-syntax-if-tag", &module_info_evalSsyntax, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"sexpr-unwind-protect-protected-form", &module_info_evalSsyntax, NULL},
  {"sexpr-variable-type", &module_info_evalSsyntax, NULL},
  {"sexpr-loc-bound-signatures", &module_info_evalSsyntax, NULL},
  {"<static-nul-environment>", &module_info_evalSmodule, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"module-runtime-data", &module_info_evalSmodule, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"ensure-module-data", &module_info_evalSmodule, NULL},
  {"sexpr-variable?", &module_info_evalSsyntax, NULL},
  {"sexpr-text-of-quotation", &module_info_evalSsyntax, NULL},
  {"sexpr-assignment-variable", &module_info_evalSsyntax, NULL},
  {"*current-subtransaction*", &module_info_evalSmodule, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"find-environment-module", &module_info_evalSmodule, NULL},
  {"remove-modules-by-name!", &module_info_evalSmodule, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"components-last", &module_info_gooSsystem, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"sexpr-define-class?", &module_info_evalSsyntax, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"file-copy", &module_info_gooSsystem, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"<module-loader>", &module_info_evalSmodule, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"sexpr-make-begin", &module_info_evalSsyntax, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"binding-global-box", &module_info_evalSmodule, NULL},
  {"add-src-path", &module_info_gooSsystem, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"module-loader-module-type", &module_info_evalSmodule, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"invalidate-dependents", &module_info_evalSdependency, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"label-components", &module_info_gooSsystem, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"<dependency-type>", &module_info_evalSdependency, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"sexpr-syntax-if-then", &module_info_evalSsyntax, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"os-val", &module_info_gooSsystem, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"module-name", &module_info_evalSmodule, NULL},
  {"sexpr-let->combination", &module_info_evalSsyntax, NULL},
  {"binding-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"<directory-error>", &module_info_gooSsystem, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"*goo-extension*", &module_info_gooSsystem, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"exe-filename", &module_info_gooSsystem, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"$sexpr-prop!-tag", &module_info_evalSsyntax, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"export-binding!", &module_info_evalSmodule, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"sexpr-make-anonymous-method", &module_info_evalSsyntax, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"environment-module-loader", &module_info_evalSmodule, NULL},
  {"sexpr-if-test", &module_info_evalSsyntax, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"sexpr-loc-bound-bodies", &module_info_evalSsyntax, NULL},
  {"sexpr-fab-setter-name", &module_info_evalSsyntax, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"sexpr-definition-variable", &module_info_evalSsyntax, NULL},
  {"pathname-to-components", &module_info_gooSsystem, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"*module-search-path*", &module_info_gooSsystem, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"sexpr-bind-pattern-variables", &module_info_evalSsyntax, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"objectify-symbol", CVAR, &YevalSastYobjectify_symbol},
  {"ftype", CVAR, &YevalSastYftype},
  {"function-adjectives-setter", CVAR, &YevalSastYfunction_adjectives_setter},
  {"function-binding-setter", CVAR, &YevalSastYfunction_binding_setter},
  {"signature-bindings", CVAR, &YevalSastYsignature_bindings},
  {"objectify-bind-exit", CVAR, &YevalSastYobjectify_bind_exit},
  {"objectify-primitive-definition", CVAR, &YevalSastYobjectify_primitive_definition},
  {"application-binding", CVAR, &YevalSastYapplication_binding},
  {"compute-local-reference-offsets", CVAR, &YevalSastYcompute_local_reference_offsets},
  {"assignment-binding", CVAR, &YevalSastYassignment_binding},
  {"objectify-free-global-reference", CVAR, &YevalSastYobjectify_free_global_reference},
  {"objectify-quotation", CVAR, &YevalSastYobjectify_quotation},
  {"special-iterate", CVAR, &YevalSastYspecial_iterate},
  {"alternative-alternant-setter", CVAR, &YevalSastYalternative_alternant_setter},
  {"objectify-generic-definition", CVAR, &YevalSastYobjectify_generic_definition},
  {"reference-frame-offset", CVAR, &YevalSastYreference_frame_offset},
  {"objectify-function-source", CVAR, &YevalSastYobjectify_function_source},
  {"objectify-alternative", CVAR, &YevalSastYobjectify_alternative},
  {"binding-closed-over?", CVAR, &YevalSastYbinding_closed_overQ},
  {"$sexpr-optionals-tag", CVAR, &YevalSastYDsexpr_optionals_tag},
  {"<functions>", CVAR, &YevalSastYLfunctionsG},
  {"objectify-variable-definition", CVAR, &YevalSastYobjectify_variable_definition},
  {"<runtime-assignment>", CVAR, &YevalSastYLruntime_assignmentG},
  {"special-%raw", CVAR, &YevalSastYspecial_Praw},
  {"locals-bindings-setter", CVAR, &YevalSastYlocals_bindings_setter},
  {"<low-let>", CVAR, &YevalSastYLlow_letG},
  {"*magic-bindings*", CVAR, &YevalSastYTmagic_bindingsT},
  {"<predefined-application>", CVAR, &YevalSastYLpredefined_applicationG},
  {"assignment-binding-setter", CVAR, &YevalSastYassignment_binding_setter},
  {"pairize", CVAR, &YevalSastYpairize},
  {"objectify", CVAR, &YevalSastYobjectify},
  {"objectify-function-definition", CVAR, &YevalSastYobjectify_function_definition},
  {"signature-nary?", CVAR, &YevalSastYsignature_naryQ},
  {"special-export", CVAR, &YevalSastYspecial_export},
  {"<variable-definition>", CVAR, &YevalSastYLvariable_definitionG},
  {"<raw-constant>", CVAR, &YevalSastYLraw_constantG},
  {"<ast-signature>", CVAR, &YevalSastYLast_signatureG},
  {"objectify-dynamic-definition", CVAR, &YevalSastYobjectify_dynamic_definition},
  {"<local-assignment>", CVAR, &YevalSastYLlocal_assignmentG},
  {"init-g2c-regular-environment", CVAR, &YevalSastYinit_g2c_regular_environment},
  {"---main-6---", PVAR, NULL},
  {"bound?-reference-setter", CVAR, &YevalSastYboundQ_reference_setter},
  {"process-nary-closed-application", CVAR, &YevalSastYprocess_nary_closed_application},
  {"bind-exit-light?-setter", CVAR, &YevalSastYbind_exit_lightQ_setter},
  {"objectify-compile-time", CVAR, &YevalSastYobjectify_compile_time},
  {"special-unwind-protect", CVAR, &YevalSastYspecial_unwind_protect},
  {"objectify-application", CVAR, &YevalSastYobjectify_application},
  {"signature-value-setter", CVAR, &YevalSastYsignature_value_setter},
  {"monitor-main-thunk", CVAR, &YevalSastYmonitor_main_thunk},
  {"function-inlineable?", CVAR, &YevalSastYfunction_inlineableQ},
  {"unwind-protect-protected-thunk-setter", CVAR, &YevalSastYunwind_protect_protected_thunk_setter},
  {"---main-7---", PVAR, NULL},
  {"incf-ref-count", CVAR, &YevalSastYincf_ref_count},
  {"register-magic-binding", CVAR, &YevalSastYregister_magic_binding},
  {"<passive-program>", CVAR, &YevalSastYLpassive_programG},
  {"ast-copy", CVAR, &YevalSastYast_copy},
  {"free-environment", CVAR, &YevalSastYfree_environment},
  {"objectify-use/export-module", CVAR, &YevalSastYobjectify_useSexport_module},
  {"ast-define-binding", CVAR, &YevalSastYast_define_binding},
  {"function-temporaries-setter", CVAR, &YevalSastYfunction_temporaries_setter},
  {"monitor-test-setter", CVAR, &YevalSastYmonitor_test_setter},
  {"monitor-type", CVAR, &YevalSastYmonitor_type},
  {"objectify-bound?", CVAR, &YevalSastYobjectify_boundQ},
  {"monitor-type-setter", CVAR, &YevalSastYmonitor_type_setter},
  {"compile-time-program", CVAR, &YevalSastYcompile_time_program},
  {"signature-specs", CVAR, &YevalSastYsignature_specs},
  {"<global-reference>", CVAR, &YevalSastYLglobal_referenceG},
  {"function-signature", CVAR, &YevalSastYfunction_signature},
  {"locals-functions-setter", CVAR, &YevalSastYlocals_functions_setter},
  {"binding-value", CVAR, &YevalSastYbinding_value},
  {"<unwind-protect>", CVAR, &YevalSastYLunwind_protectG},
  {"unwind-protect-protected-thunk", CVAR, &YevalSastYunwind_protect_protected_thunk},
  {"ast-contains-fun?", CVAR, &YevalSastYast_contains_funQ},
  {"<bind-exit>", CVAR, &YevalSastYLbind_exitG},
  {"bind-exit-light?", CVAR, &YevalSastYbind_exit_lightQ},
  {"bound?-default", CVAR, &YevalSastYboundQ_default},
  {"special-define-dynamic", CVAR, &YevalSastYspecial_define_dynamic},
  {"<global-assignment>", CVAR, &YevalSastYLglobal_assignmentG},
  {"locals-functions", CVAR, &YevalSastYlocals_functions},
  {"reference-binding-setter", CVAR, &YevalSastYreference_binding_setter},
  {"special-use-mangle-module", CVAR, &YevalSastYspecial_use_mangle_module},
  {"special-compile-time", CVAR, &YevalSastYspecial_compile_time},
  {"special-use-include", CVAR, &YevalSastYspecial_use_include},
  {"locals-body", CVAR, &YevalSastYlocals_body},
  {"locals-body-setter", CVAR, &YevalSastYlocals_body_setter},
  {"fix-let-bindings", CVAR, &YevalSastYfix_let_bindings},
  {"<bound?>", CVAR, &YevalSastYLboundQG},
  {"locals-bindings", CVAR, &YevalSastYlocals_bindings},
  {"function-temporaries", CVAR, &YevalSastYfunction_temporaries},
  {"function-body-setter", CVAR, &YevalSastYfunction_body_setter},
  {"fix-let-types", CVAR, &YevalSastYfix_let_types},
  {"<predefined-reference>", CVAR, &YevalSastYLpredefined_referenceG},
  {"binding-dynamic-extent?-setter", CVAR, &YevalSastYbinding_dynamic_extentQ_setter},
  {"function-debug-name-setter", CVAR, &YevalSastYfunction_debug_name_setter},
  {"$sexpr-compile-time-tag", CVAR, &YevalSastYDsexpr_compile_time_tag},
  {"special-define-primitive", CVAR, &YevalSastYspecial_define_primitive},
  {"$sexpr-use-mangle-module-tag", CVAR, &YevalSastYDsexpr_use_mangle_module_tag},
  {"<regular-application>", CVAR, &YevalSastYLregular_applicationG},
  {"magic-bindings", CVAR, &YevalSastYmagic_bindings},
  {"fix-let-arguments", CVAR, &YevalSastYfix_let_arguments},
  {"fix-let-arguments-setter", CVAR, &YevalSastYfix_let_arguments_setter},
  {"signature-specs-setter", CVAR, &YevalSastYsignature_specs_setter},
  {"fix-let-body", CVAR, &YevalSastYfix_let_body},
  {"fix-let-body-setter", CVAR, &YevalSastYfix_let_body_setter},
  {"module-binding", CVAR, &YevalSastYmodule_binding},
  {"ast-walk!", CVAR, &YevalSastYast_walkX},
  {"objectify-foreign-reference", CVAR, &YevalSastYobjectify_foreign_reference},
  {"assignment-form-setter", CVAR, &YevalSastYassignment_form_setter},
  {"binding-dynamic-extent?", CVAR, &YevalSastYbinding_dynamic_extentQ},
  {"<constant>", CVAR, &YevalSastYLconstantG},
  {"$sexpr-compile-time-also-tag", CVAR, &YevalSastYDsexpr_compile_time_also_tag},
  {"loop-body-setter", CVAR, &YevalSastYloop_body_setter},
  {"<fix-let>", CVAR, &YevalSastYLfix_letG},
  {"<ast-primitive-definition>", CVAR, &YevalSastYLast_primitive_definitionG},
  {"special-locals", CVAR, &YevalSastYspecial_locals},
  {"special-define-function", CVAR, &YevalSastYspecial_define_function},
  {"fix-let-bindings-setter", CVAR, &YevalSastYfix_let_bindings_setter},
  {"function-ref-count-setter", CVAR, &YevalSastYfunction_ref_count_setter},
  {"application-next-methods-setter", CVAR, &YevalSastYapplication_next_methods_setter},
  {"reference-binding", CVAR, &YevalSastYreference_binding},
  {"special-define-constant", CVAR, &YevalSastYspecial_define_constant},
  {"assignment-reference-setter", CVAR, &YevalSastYassignment_reference_setter},
  {"objectify-locals", CVAR, &YevalSastYobjectify_locals},
  {"application-binding-setter", CVAR, &YevalSastYapplication_binding_setter},
  {"req-sig-specs", CVAR, &YevalSastYreq_sig_specs},
  {"syntax-environment-excluded-bindings", CVAR, &YevalSastYsyntax_environment_excluded_bindings},
  {"<ast-error>", CVAR, &YevalSastYLast_errorG},
  {"application-known?", CVAR, &YevalSastYapplication_knownQ},
  {"<method-application>", CVAR, &YevalSastYLmethod_applicationG},
  {"function-frame-len-setter", CVAR, &YevalSastYfunction_frame_len_setter},
  {"bind-exit-main-fun-setter", CVAR, &YevalSastYbind_exit_main_fun_setter},
  {"reference-frame-offset-setter", CVAR, &YevalSastYreference_frame_offset_setter},
  {"function-arity", CVAR, &YevalSastYfunction_arity},
  {"objectify-unwind-protect", CVAR, &YevalSastYobjectify_unwind_protect},
  {"signature-bindings-setter", CVAR, &YevalSastYsignature_bindings_setter},
  {"binding-index-setter", CVAR, &YevalSastYbinding_index_setter},
  {"program-type-setter", CVAR, &YevalSastYprogram_type_setter},
  {"binding-value-setter", CVAR, &YevalSastYbinding_value_setter},
  {"r-extend*", CVAR, &YevalSastYr_extendT},
  {"<application>", CVAR, &YevalSastYLapplicationG},
  {"<static-module-binding-reference>", CVAR, &YevalSastYLstatic_module_binding_referenceG},
  {"$sexpr-%raw-tag", CVAR, &YevalSastYDsexpr_Praw_tag},
  {"special-bound?", CVAR, &YevalSastYspecial_boundQ},
  {"special-begin", CVAR, &YevalSastYspecial_begin},
  {"<local-binding>", CVAR, &YevalSastYLlocal_bindingG},
  {"objectify-function", CVAR, &YevalSastYobjectify_function},
  {"maybe-log-dependency", CVAR, &YevalSastYmaybe_log_dependency},
  {"application-arguments-setter", CVAR, &YevalSastYapplication_arguments_setter},
  {"bound?-reference", CVAR, &YevalSastYboundQ_reference},
  {"<loop-application>", CVAR, &YevalSastYLloop_applicationG},
  {"loop-continue", CVAR, &YevalSastYloop_continue},
  {"<ast-generic-definition>", CVAR, &YevalSastYLast_generic_definitionG},
  {"---main-5---", PVAR, NULL},
  {"objectify-use-include", CVAR, &YevalSastYobjectify_use_include},
  {"$sexpr-use/export-module-tag", CVAR, &YevalSastYDsexpr_useSexport_module_tag},
  {"as-lst", CVAR, &YevalSastYas_lst},
  {"init-ast", CVAR, &YevalSastYinit_ast},
  {"fab-g2c-module", CVAR, &YevalSastYfab_g2c_module},
  {"$free-environment-nul", CVAR, &YevalSastYDfree_environment_nul},
  {"constant-value-setter", CVAR, &YevalSastYconstant_value_setter},
  {"reference-frame-number-setter", CVAR, &YevalSastYreference_frame_number_setter},
  {"special-use-library", CVAR, &YevalSastYspecial_use_library},
  {"<ast-method>", CVAR, &YevalSastYLast_methodG},
  {"special-define", CVAR, &YevalSastYspecial_define},
  {"<fab-list>", CVAR, &YevalSastYLfab_listG},
  {"objectify-use-module", CVAR, &YevalSastYobjectify_use_module},
  {"expand-bind-list", CVAR, &YevalSastYexpand_bind_list},
  {"objectify-signature", CVAR, &YevalSastYobjectify_signature},
  {"sequentialize", CVAR, &YevalSastYsequentialize},
  {"sequential", CVAR, &YevalSastYsequential},
  {"alternative-alternant", CVAR, &YevalSastYalternative_alternant},
  {"constant-index", CVAR, &YevalSastYconstant_index},
  {"application-function-setter", CVAR, &YevalSastYapplication_function_setter},
  {"loop-body", CVAR, &YevalSastYloop_body},
  {"$functions-nul", CVAR, &YevalSastYDfunctions_nul},
  {"$sexpr-use-include-tag", CVAR, &YevalSastYDsexpr_use_include_tag},
  {"alternative-consequent-setter", CVAR, &YevalSastYalternative_consequent_setter},
  {"objectify-raw", CVAR, &YevalSastYobjectify_raw},
  {"function-adjectives", CVAR, &YevalSastYfunction_adjectives},
  {"<sequential>", CVAR, &YevalSastYLsequentialG},
  {"monitor-test", CVAR, &YevalSastYmonitor_test},
  {"<loop>", CVAR, &YevalSastYLloopG},
  {"function-signature-setter", CVAR, &YevalSastYfunction_signature_setter},
  {"loop-bindings", CVAR, &YevalSastYloop_bindings},
  {"expand-bind-list*", CVAR, &YevalSastYexpand_bind_listT},
  {"special-use-module", CVAR, &YevalSastYspecial_use_module},
  {"special-monitor", CVAR, &YevalSastYspecial_monitor},
  {"<alternative>", CVAR, &YevalSastYLalternativeG},
  {"application-tail?-setter", CVAR, &YevalSastYapplication_tailQ_setter},
  {"$sexpr-bound?-tag", CVAR, &YevalSastYDsexpr_boundQ_tag},
  {"alternative-condition-setter", CVAR, &YevalSastYalternative_condition_setter},
  {"alternative-consequent", CVAR, &YevalSastYalternative_consequent},
  {"<simple-ast-error>", CVAR, &YevalSastYLsimple_ast_errorG},
  {"$fab-list-nul", CVAR, &YevalSastYDfab_list_nul},
  {"special-def", CVAR, &YevalSastYspecial_def},
  {"program-line", CVAR, &YevalSastYprogram_line},
  {"---main-10---", PVAR, NULL},
  {"objectify-sequential", CVAR, &YevalSastYobjectify_sequential},
  {"monitor-handler-setter", CVAR, &YevalSastYmonitor_handler_setter},
  {"special-define-static-syntax", CVAR, &YevalSastYspecial_define_static_syntax},
  {"<ast-function>", CVAR, &YevalSastYLast_functionG},
  {"$sexpr-use-module-tag", CVAR, &YevalSastYDsexpr_use_module_tag},
  {"<local-reference>", CVAR, &YevalSastYLlocal_referenceG},
  {"<computed-program>", CVAR, &YevalSastYLcomputed_programG},
  {"application-loop-setter", CVAR, &YevalSastYapplication_loop_setter},
  {"<arguments>", CVAR, &YevalSastYLargumentsG},
  {"$sexpr-use-library-tag", CVAR, &YevalSastYDsexpr_use_library_tag},
  {"monitor-info-setter", CVAR, &YevalSastYmonitor_info_setter},
  {"<immediate-constant>", CVAR, &YevalSastYLimmediate_constantG},
  {"foreign-name?", CVAR, &YevalSastYforeign_nameQ},
  {"function-index-setter", CVAR, &YevalSastYfunction_index_setter},
  {"ast-evaluate", CVAR, &YevalSastYast_evaluate},
  {"special-compile-time-also", CVAR, &YevalSastYspecial_compile_time_also},
  {"special-set", CVAR, &YevalSastYspecial_set},
  {"program-register-setter", CVAR, &YevalSastYprogram_register_setter},
  {"function-loop", CVAR, &YevalSastYfunction_loop},
  {"function-ref-count", CVAR, &YevalSastYfunction_ref_count},
  {"reference-called-function?", CVAR, &YevalSastYreference_called_functionQ},
  {"init-g2c-boot-environment", CVAR, &YevalSastYinit_g2c_boot_environment},
  {"<ast-primitive>", CVAR, &YevalSastYLast_primitiveG},
  {"signature-names", CVAR, &YevalSastYsignature_names},
  {"*record-source?*", DVAR, &YevalSastYTrecord_sourceQT},
  {"loop-bindings-setter", CVAR, &YevalSastYloop_bindings_setter},
  {"objectify-use-mangle-module", CVAR, &YevalSastYobjectify_use_mangle_module},
  {"init-environment-for-eval", CVAR, &YevalSastYinit_environment_for_eval},
  {"<free-environment>", CVAR, &YevalSastYLfree_environmentG},
  {"init-runtime", CVAR, &YevalSastYinit_runtime},
  {"function-frame-len", CVAR, &YevalSastYfunction_frame_len},
  {"---main-9---", PVAR, NULL},
  {"monitor-main-thunk-setter", CVAR, &YevalSastYmonitor_main_thunk_setter},
  {"$sexpr-define-dynamic-tag", CVAR, &YevalSastYDsexpr_define_dynamic_tag},
  {"---main-1---", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"<dynamic-assignment>", CVAR, &YevalSastYLdynamic_assignmentG},
  {"<magic-reference>", CVAR, &YevalSastYLmagic_referenceG},
  {"function-loop-setter", CVAR, &YevalSastYfunction_loop_setter},
  {"objectify-list", CVAR, &YevalSastYobjectify_list},
  {"program-type", CVAR, &YevalSastYprogram_type},
  {"function-source-setter", CVAR, &YevalSastYfunction_source_setter},
  {"update-binding-kind", CVAR, &YevalSastYupdate_binding_kind},
  {"binding-dotted?-setter", CVAR, &YevalSastYbinding_dottedQ_setter},
  {"function-registers-setter", CVAR, &YevalSastYfunction_registers_setter},
  {"<locals>", CVAR, &YevalSastYLlocalsG},
  {"application-tail?", CVAR, &YevalSastYapplication_tailQ},
  {"objectify-definition", CVAR, &YevalSastYobjectify_definition},
  {"<monitor>", CVAR, &YevalSastYLmonitorG},
  {"<macro-reference>", CVAR, &YevalSastYLmacro_referenceG},
  {"special-quasiquote", CVAR, &YevalSastYspecial_quasiquote},
  {"expand-syntax-if", CVAR, &YevalSastYexpand_syntax_if},
  {"default-type", CVAR, &YevalSastYdefault_type},
  {"objectify-assignment", CVAR, &YevalSastYobjectify_assignment},
  {"application-next-methods", CVAR, &YevalSastYapplication_next_methods},
  {"*current-dependent*", DVAR, &YevalSastYTcurrent_dependentT},
  {"---main-8---", PVAR, NULL},
  {"<ast-macro-definition>", CVAR, &YevalSastYLast_macro_definitionG},
  {"objectify-function-using", CVAR, &YevalSastYobjectify_function_using},
  {"<definition>", CVAR, &YevalSastYLdefinitionG},
  {"bind-exit-main-fun", CVAR, &YevalSastYbind_exit_main_fun},
  {"assignment-reference", CVAR, &YevalSastYassignment_reference},
  {"program-line-setter", CVAR, &YevalSastYprogram_line_setter},
  {"unwind-protect-cleanup-thunk-setter", CVAR, &YevalSastYunwind_protect_cleanup_thunk_setter},
  {"function-display-name", CVAR, &YevalSastYfunction_display_name},
  {"<real-reference>", CVAR, &YevalSastYLreal_referenceG},
  {"signature-arity-setter", CVAR, &YevalSastYsignature_arity_setter},
  {"function-specs", CVAR, &YevalSastYfunction_specs},
  {"alternative-condition", CVAR, &YevalSastYalternative_condition},
  {"signature-arity", CVAR, &YevalSastYsignature_arity},
  {"$sexpr-define-primitive-tag", CVAR, &YevalSastYDsexpr_define_primitive_tag},
  {"function-registers", CVAR, &YevalSastYfunction_registers},
  {"$sexpr-optionals-type-name", CVAR, &YevalSastYDsexpr_optionals_type_name},
  {"special-macro-expand", CVAR, &YevalSastYspecial_macro_expand},
  {"special-define-generic", CVAR, &YevalSastYspecial_define_generic},
  {"function-names", CVAR, &YevalSastYfunction_names},
  {"function-nary?", CVAR, &YevalSastYfunction_naryQ},
  {"function-value", CVAR, &YevalSastYfunction_value},
  {"reference-frame-number", CVAR, &YevalSastYreference_frame_number},
  {"<programs>", CVAR, &YevalSastYLprogramsG},
  {"def-programs", PVAR, NULL},
  {"binding-closed-over?-setter", CVAR, &YevalSastYbinding_closed_overQ_setter},
  {"special-syntax-if", CVAR, &YevalSastYspecial_syntax_if},
  {"objectify-syntax-definition", CVAR, &YevalSastYobjectify_syntax_definition},
  {"<ast-generic>", CVAR, &YevalSastYLast_genericG},
  {"expand-bind-element", CVAR, &YevalSastYexpand_bind_element},
  {"function-debug-name", CVAR, &YevalSastYfunction_debug_name},
  {"function-free-setter", CVAR, &YevalSastYfunction_free_setter},
  {"<reference>", CVAR, &YevalSastYLreferenceG},
  {"<ast-embodied-function>", CVAR, &YevalSastYLast_embodied_functionG},
  {"with-dependent", PVAR, NULL},
  {"---main-4---", PVAR, NULL},
  {"special-method", CVAR, &YevalSastYspecial_method},
  {"function-index", CVAR, &YevalSastYfunction_index},
  {"program-register", CVAR, &YevalSastYprogram_register},
  {"$sexpr-define-static-syntax-tag", CVAR, &YevalSastYDsexpr_define_static_syntax_tag},
  {"$sexpr-export-tag", CVAR, &YevalSastYDsexpr_export_tag},
  {"constant-value", CVAR, &YevalSastYconstant_value},
  {"signature-names-setter", CVAR, &YevalSastYsignature_names_setter},
  {"arguments", CVAR, &YevalSastYarguments},
  {"<compile-time>", CVAR, &YevalSastYLcompile_timeG},
  {"<runtime-reference>", CVAR, &YevalSastYLruntime_referenceG},
  {"expand-pattern", CVAR, &YevalSastYexpand_pattern},
  {"objectify-method-definition", CVAR, &YevalSastYobjectify_method_definition},
  {"assignment-form", CVAR, &YevalSastYassignment_form},
  {"compile-time-program-setter", CVAR, &YevalSastYcompile_time_program_setter},
  {"application-loop", CVAR, &YevalSastYapplication_loop},
  {"reload-macros", CVAR, &YevalSastYreload_macros},
  {"monitor-handler", CVAR, &YevalSastYmonitor_handler},
  {"application-arguments", CVAR, &YevalSastYapplication_arguments},
  {"function-binding", CVAR, &YevalSastYfunction_binding},
  {"---main-2---", PVAR, NULL},
  {"binding-mutable?", CVAR, &YevalSastYbinding_mutableQ},
  {"special-define-method", CVAR, &YevalSastYspecial_define_method},
  {"special-use/export-module", CVAR, &YevalSastYspecial_useSexport_module},
  {"objectify-binding", CVAR, &YevalSastYobjectify_binding},
  {"<module-binding-reference>", CVAR, &YevalSastYLmodule_binding_referenceG},
  {"special-let", CVAR, &YevalSastYspecial_let},
  {"signature-nary?-setter", CVAR, &YevalSastYsignature_naryQ_setter},
  {"objectify-define-property", CVAR, &YevalSastYobjectify_define_property},
  {"special-define-syntax", CVAR, &YevalSastYspecial_define_syntax},
  {"convert2arguments", CVAR, &YevalSastYconvert2arguments},
  {"$arguments-nul", CVAR, &YevalSastYDarguments_nul},
  {"unwind-protect-cleanup-thunk", CVAR, &YevalSastYunwind_protect_cleanup_thunk},
  {"define-magic-binding", PVAR, NULL},
  {"$sequential-nul", CVAR, &YevalSastYDsequential_nul},
  {"fix-let-types-setter", CVAR, &YevalSastYfix_let_types_setter},
  {"application-function", CVAR, &YevalSastYapplication_function},
  {"special-bind-exit", CVAR, &YevalSastYspecial_bind_exit},
  {"special-if", CVAR, &YevalSastYspecial_if},
  {"---main-3---", PVAR, NULL},
  {"constant-index-setter", CVAR, &YevalSastYconstant_index_setter},
  {"fab-syntax-environment", CVAR, &YevalSastYfab_syntax_environment},
  {"ast-macro-expand", CVAR, &YevalSastYast_macro_expand},
  {"<assignment>", CVAR, &YevalSastYLassignmentG},
  {"monitor-info", CVAR, &YevalSastYmonitor_info},
  {"binding-dotted?", CVAR, &YevalSastYbinding_dottedQ},
  {"application-known?-setter", CVAR, &YevalSastYapplication_knownQ_setter},
  {"install-magic-bindings", CVAR, &YevalSastYinstall_magic_bindings},
  {"process-closed-application", CVAR, &YevalSastYprocess_closed_application},
  {"ast-walk", CVAR, &YevalSastYast_walk},
  {"bound?-default-setter", CVAR, &YevalSastYboundQ_default_setter},
  {"<program>", CVAR, &YevalSastYLprogramG},
  {"binding-reference-class", CVAR, &YevalSastYbinding_reference_class},
  {"transform-defs", CVAR, &YevalSastYtransform_defs},
  {"reference-called-function?-setter", CVAR, &YevalSastYreference_called_functionQ_setter},
  {"objectify-with-subtransaction", CVAR, &YevalSastYobjectify_with_subtransaction},
  {"binding-mutable?-setter", CVAR, &YevalSastYbinding_mutableQ_setter},
  {"*macro-tracing?*", CVAR, &YevalSastYTmacro_tracingQT},
  {"<ast-function-definition>", CVAR, &YevalSastYLast_function_definitionG},
  {"objectify-assignment-using", CVAR, &YevalSastYobjectify_assignment_using},
  {"objectify-use-library", CVAR, &YevalSastYobjectify_use_library},
  {"loop-continue-setter", CVAR, &YevalSastYloop_continue_setter},
  {"special-prop", CVAR, &YevalSastYspecial_prop},
  {"%%%macro", CVAR, &YevalSastYPPPmacro},
  {"special-define-class", CVAR, &YevalSastYspecial_define_class},
  {"<ast-method-definition>", CVAR, &YevalSastYLast_method_definitionG},
  {"binding-index", CVAR, &YevalSastYbinding_index},
  {"<dynamic-reference>", CVAR, &YevalSastYLdynamic_referenceG},
  {"function-free", CVAR, &YevalSastYfunction_free},
  {"special-quote", CVAR, &YevalSastYspecial_quote},
  {"fab-list", CVAR, &YevalSastYfab_list},
  {"function-bindings", CVAR, &YevalSastYfunction_bindings},
  {"objectify-monitor", CVAR, &YevalSastYobjectify_monitor},
  {"install-interpreter-hacks", CVAR, &YevalSastYinstall_interpreter_hacks},
  {"macro-expander", CVAR, &YevalSastYmacro_expander},
  {"objectify-export", CVAR, &YevalSastYobjectify_export},
  {"signature-value", CVAR, &YevalSastYsignature_value},
  {"function-body", CVAR, &YevalSastYfunction_body},
  {"<dynamic-definition>", CVAR, &YevalSastYLdynamic_definitionG},
  {"functions", CVAR, &YevalSastYfunctions},
  {"special-prop!", CVAR, &YevalSastYspecial_propX},
  {"function-source", CVAR, &YevalSastYfunction_source},
  {"function-kind", CVAR, &YevalSastYfunction_kind},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"environment-allows-foreign-names?", NULL},
  {"<program>", NULL},
  {"<arguments>", NULL},
  {"roll-back-transaction", NULL},
  {"function-signature-setter", NULL},
  {"function-temporaries-setter", NULL},
  {"application-binding", NULL},
  {"signature-specs-setter", NULL},
  {"assignment-binding", NULL},
  {"unwind-protect-cleanup-thunk", NULL},
  {"objectify-quotation", NULL},
  {"module-data-processed?", NULL},
  {"binding-type", NULL},
  {"reference-frame-offset", NULL},
  {"binding-closed-over?", NULL},
  {"<ast-function>", NULL},
  {"binding-kind", NULL},
  {"environment-next", NULL},
  {"binding-prop", NULL},
  {"fix-let-bindings-setter", NULL},
  {"frame-bindings", NULL},
  {"<functions>", NULL},
  {"<runtime-assignment>", NULL},
  {"binding-locative", NULL},
  {"locals-bindings-setter", NULL},
  {"<low-let>", NULL},
  {"<predefined-application>", NULL},
  {"with-subtransaction", NULL},
  {"signature-nary?", NULL},
  {"fab-subset-environment", NULL},
  {"<raw-constant>", NULL},
  {"module-uses-c-libraries", NULL},
  {"environment-uses-modules", NULL},
  {"assignment-form", NULL},
  {"binding-info-setter", NULL},
  {"bound?-reference", NULL},
  {"<loop>", NULL},
  {"locals-body", NULL},
  {"find-syntax-environment", NULL},
  {"<static-local-environment>", NULL},
  {"fix-let-body-setter", NULL},
  {"monitor-main-thunk", NULL},
  {"function-inlineable?", NULL},
  {"<real-reference>", NULL},
  {"remove-modules-by-name!", NULL},
  {"<passive-program>", NULL},
  {"function-value", NULL},
  {"ast-define-binding", NULL},
  {"monitor-handler", NULL},
  {"compile-time-program", NULL},
  {"insert-global!", NULL},
  {"<compile-time>", NULL},
  {"binding-mangled-name", NULL},
  {"binding-value", NULL},
  {"bind-exit-main-fun", NULL},
  {"bind-exit-light?", NULL},
  {"bound?-default", NULL},
  {"<global-assignment>", NULL},
  {"<alternative>", NULL},
  {"binding-closed-over?-setter", NULL},
  {"ast-contains-fun?", NULL},
  {"<bound?>", NULL},
  {"function-body", NULL},
  {"signature-names-setter", NULL},
  {"free-environment", NULL},
  {"function-temporaries", NULL},
  {"fix-let-types", NULL},
  {"binding-inferred-type", NULL},
  {"monitor-type", NULL},
  {"<binding>", NULL},
  {"do-module-loader-modules", NULL},
  {"binding-dynamic-extent?-setter", NULL},
  {"function-debug-name-setter", NULL},
  {"function-signature", NULL},
  {"<regular-application>", NULL},
  {"module-uses-c-includes", NULL},
  {"fix-let-arguments-setter", NULL},
  {"<module-binding>", NULL},
  {"ast-walk!", NULL},
  {"<bind-exit>", NULL},
  {"assignment-form-setter", NULL},
  {"binding-dynamic-extent?", NULL},
  {"%%macro", NULL},
  {"loop-body-setter", NULL},
  {"<ast-primitive-definition>", NULL},
  {"function-ref-count-setter", NULL},
  {"ast-evaluate", NULL},
  {"unchecked-runtime-environment", NULL},
  {"signature-specs", NULL},
  {"req-sig-specs", NULL},
  {"application-known?", NULL},
  {"function-frame-len-setter", NULL},
  {"function-arity", NULL},
  {"signature-bindings-setter", NULL},
  {"binding-index-setter", NULL},
  {"program-type-setter", NULL},
  {"environment-bindings", NULL},
  {"<global-box>", NULL},
  {"<static-module-binding-reference>", NULL},
  {"<global-reference>", NULL},
  {"install-initial-bindings", NULL},
  {"module-uses-c-files", NULL},
  {"<loop-application>", NULL},
  {"report-undefined-global-bindings", NULL},
  {"loop-continue", NULL},
  {"binding-info", NULL},
  {"program-register-setter", NULL},
  {"init-ast", NULL},
  {"do-named-static-global-bindings", NULL},
  {"fab-g2c-module", NULL},
  {"fix-let-bindings", NULL},
  {"<ast-method>", NULL},
  {"<fab-list>", NULL},
  {"as-lst", NULL},
  {"module-referenced-bindings", NULL},
  {"signature-value-setter", NULL},
  {"objectify-signature", NULL},
  {"sequentialize", NULL},
  {"alternative-alternant", NULL},
  {"constant-index", NULL},
  {"fab-static-global-environment", NULL},
  {"function-adjectives", NULL},
  {"<sequential>", NULL},
  {"monitor-test", NULL},
  {"binding-free?-setter", NULL},
  {"<unwind-protect>", NULL},
  {"function-registers-setter", NULL},
  {"locals-bindings", NULL},
  {"env-object-name", NULL},
  {"fix-let-body", NULL},
  {"<local-assignment>", NULL},
  {"<ast-generic>", NULL},
  {"register-referenced-binding", NULL},
  {"program-register", NULL},
  {"import-global!", NULL},
  {"<fix-let>", NULL},
  {"reference-binding", NULL},
  {"<static-environment>", NULL},
  {"<local-reference>", NULL},
  {"function-nary?", NULL},
  {"find-static-global-environment", NULL},
  {"<immediate-constant>", NULL},
  {"<static-global-environment>", NULL},
  {"<binding-name>", NULL},
  {"function-index-setter", NULL},
  {"function-loop", NULL},
  {"locals-body-setter", NULL},
  {"reference-called-function?", NULL},
  {"binding-global-box-setter", NULL},
  {"<ast-primitive>", NULL},
  {"signature-names", NULL},
  {"module-mangled-string-name-setter", NULL},
  {"objectify-with-subtransaction", NULL},
  {"loop-bindings-setter", NULL},
  {"binding-native-to?", NULL},
  {"reload-modules", NULL},
  {"module-name", NULL},
  {"unwind-protect-protected-thunk", NULL},
  {"walk-bindings", NULL},
  {"application-function", NULL},
  {"<dynamic-assignment>", NULL},
  {"<magic-reference>", NULL},
  {"function-loop-setter", NULL},
  {"signature-bindings", NULL},
  {"program-type", NULL},
  {"binding-dotted?-setter", NULL},
  {"$goo-boot-module-name", NULL},
  {"function-frame-len", NULL},
  {"loop-body", NULL},
  {"application-tail?", NULL},
  {"<monitor>", NULL},
  {"find-binding", NULL},
  {"<macro-reference>", NULL},
  {"module-runtime-data-setter", NULL},
  {"runtime-environment", NULL},
  {"module-target-environment", NULL},
  {"application-next-methods", NULL},
  {"<ast-macro-definition>", NULL},
  {"<definition>", NULL},
  {"<ast-signature>", NULL},
  {"<runtime-reference>", NULL},
  {"probe-module", NULL},
  {"assignment-reference", NULL},
  {"binding-free?", NULL},
  {"register-module!", NULL},
  {"global-box-value-setter", NULL},
  {"<namespace-error>", NULL},
  {"<method-application>", NULL},
  {"signature-arity-setter", NULL},
  {"module-loader-stack", NULL},
  {"transaction-register-dependent", NULL},
  {"function-specs", NULL},
  {"load-in", NULL},
  {"module-mangled-name-setter", NULL},
  {"alternative-condition", NULL},
  {"function-source-setter", NULL},
  {"set-module-environments", NULL},
  {"function-registers", NULL},
  {"binding-module-name", NULL},
  {"do-static-global-bindings", NULL},
  {"call-with-subtransaction", NULL},
  {"binding-handler-setter", NULL},
  {"alternative-consequent", NULL},
  {"reference-frame-number", NULL},
  {"<programs>", NULL},
  {"$bot", NULL},
  {"module-transaction", NULL},
  {"module-exports", NULL},
  {"function-binding", NULL},
  {"function-debug-name", NULL},
  {"function-free-setter", NULL},
  {"locals-functions-setter", NULL},
  {"<reference>", NULL},
  {"namespace-error", NULL},
  {"<bot>", NULL},
  {"<ast-embodied-function>", NULL},
  {"def-list", NULL},
  {"<free-environment>", NULL},
  {"function-index", NULL},
  {"signature-value", NULL},
  {"module-syntax-environment", NULL},
  {"binding-value-setter", NULL},
  {"*dynamic-compilation?*", NULL},
  {"constant-value", NULL},
  {"<constant>", NULL},
  {"export-binding!", NULL},
  {"runtime-module", NULL},
  {"signature-arity", NULL},
  {"module-mangled-string-name", NULL},
  {"zap-referenced-bindings!", NULL},
  {"module-data-processed?-setter", NULL},
  {"<module>", NULL},
  {"binding-type-setter", NULL},
  {"environment-module", NULL},
  {"application-loop", NULL},
  {"binding-kind-setter", NULL},
  {"<local-binding>", NULL},
  {"application-arguments", NULL},
  {"binding-prop-setter", NULL},
  {"binding-mutable?", NULL},
  {"ast-error", NULL},
  {"loop-bindings", NULL},
  {"binding-locative-setter", NULL},
  {"binding-name", NULL},
  {"transaction-register-implemented-binding", NULL},
  {"binding-module", NULL},
  {"binding-handler", NULL},
  {"<module-binding-reference>", NULL},
  {"signature-nary?-setter", NULL},
  {"<static-nul-environment>", NULL},
  {"function-names", NULL},
  {"module-runtime-data", NULL},
  {"ensure-module-data", NULL},
  {"*current-subtransaction*", NULL},
  {"find-environment-module", NULL},
  {"fix-let-types-setter", NULL},
  {"<application>", NULL},
  {"<locals>", NULL},
  {"function-ref-count", NULL},
  {"init-environment-for-eval", NULL},
  {"<module-loader>", NULL},
  {"import-and-mangle-global!", NULL},
  {"binding-global-box", NULL},
  {"<assignment>", NULL},
  {"program-line", NULL},
  {"module-name-to-relpath", NULL},
  {"monitor-info", NULL},
  {"binding-dotted?", NULL},
  {"application-known?-setter", NULL},
  {"module-loader-module-type", NULL},
  {"runtime-module-loader", NULL},
  {"global-box-value", NULL},
  {"<computed-program>", NULL},
  {"process-closed-application", NULL},
  {"ast-walk", NULL},
  {"module-mangled-name", NULL},
  {"binding-mangled-name-setter", NULL},
  {"reference-called-function?-setter", NULL},
  {"def-programs", NULL},
  {"insert-globals!", NULL},
  {"load-module", NULL},
  {"fix-let-arguments", NULL},
  {"loop-continue-setter", NULL},
  {"environment-module-loader", NULL},
  {"%%%macro", NULL},
  {"binding-index", NULL},
  {"<dynamic-reference>", NULL},
  {"function-free", NULL},
  {"locals-functions", NULL},
  {"function-bindings", NULL},
  {"function-body-setter", NULL},
  {"<dynamic-definition>", NULL},
  {"binding-inferred-type-setter", NULL},
  {"function-source", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_evalSast;
MODULE_INFO module_info_evalSast = {
  "eval/ast",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooSboot (void);
extern void load_module_gooSfun (void);
extern void load_module_gooSclass (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSsystem (void);
extern void load_module_gooScolsSlst (void);
extern void load_module_gooSioSread (void);
extern void load_module_evalSsyntax (void);
extern void load_module_evalSdependency (void);
extern void load_module_evalSmodule (void);

/* EXPRESSION: */

extern void load_module_evalSast (void);

void load_module_evalSast (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSboot();
  load_module_gooSfun();
  load_module_gooSclass();
  load_module_gooSmacros();
  load_module_gooStypes();
  load_module_gooSsystem();
  load_module_gooScolsSlst();
  load_module_gooSioSread();
  load_module_evalSsyntax();
  load_module_evalSdependency();
  load_module_evalSmodule();

  (P)YevalSastY___main_0___();
  (P)YevalSastY___main_1___();
  (P)YevalSastY___main_2___();
  (P)YevalSastY___main_3___();
  (P)YevalSastY___main_4___();
  (P)YevalSastY___main_5___();
  (P)YevalSastY___main_6___();
  (P)YevalSastY___main_7___();
  (P)YevalSastY___main_8___();
  (P)YevalSastY___main_9___();
  (P)YevalSastY___main_10___();

}

/* END OF GENERATED CODE. */
