/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/ast-eval");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/ast-eval */

EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yunexec,"goo/boot","unexec");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YevalSastYbind_exit_lightQ,"eval/ast","bind-exit-light?");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
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
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmathY_,"goo/math","-");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YevalSastYfunction_ref_count,"eval/ast","function-ref-count");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(Yinternal_error,"goo/boot","internal-error");
DEF(YevalSast_evalYenv_values,"eval/ast-eval","env-values");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YevalSastYLfunctionsG,"eval/ast","<functions>");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YevalSastYLloop_applicationG,"eval/ast","<loop-application>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
DEF(YevalSast_evalYenv_runtime_value,"eval/ast-eval","env-runtime-value");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmathYround,"goo/math","round");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
DEF(YevalSast_evalYenv_global_binding_value_setter,"eval/ast-eval","env-global-binding-value-setter");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
DEF(YevalSast_evalYenv_local_reference_value_setter,"eval/ast-eval","env-local-reference-value-setter");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmathYC,"goo/math","^");
DEF(YevalSast_evalYenv_function,"eval/ast-eval","env-function");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YevalSastYmodule_uses_c_includes,"eval/ast","module-uses-c-includes");
DEF(YevalSast_evalYenv_frameX,"eval/ast-eval","env-frame!");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
DEF(YevalSast_evalYast_eval,"eval/ast-eval","ast-eval");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
DEF(YevalSast_evalYenv_local_reference_value,"eval/ast-eval","env-local-reference-value");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YgooSmathYevenQ,"goo/math","even?");
DEF(YevalSast_evalYenv_names_setter,"eval/ast-eval","env-names-setter");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(Ysyntax_error,"goo/boot","syntax-error");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
DEF(YevalSast_evalYenv_dynamic_value,"eval/ast-eval","env-dynamic-value");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(Yhead,"goo/boot","head");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
DEF(YevalSast_evalYenv_binding_value_setter,"eval/ast-eval","env-binding-value-setter");
DEF(YevalSast_evalYLloc_envG,"eval/ast-eval","<loc-env>");
EXT(YgooSmacrosYdo,"goo/macros","do");
DEF(YevalSast_evalYexport_goo_method,"eval/ast-eval","export-goo-method");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YevalSastYloop_body,"eval/ast","loop-body");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
DEF(YevalSast_evalYenv_define_bindingX,"eval/ast-eval","env-define-binding!");
DEF(YevalSast_evalYenv_local_value,"eval/ast-eval","env-local-value");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Ynot,"goo/boot","not");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YLunionG,"goo/boot","<union>");
DEF(YevalSast_evalYast_eval_specs,"eval/ast-eval","ast-eval-specs");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YLchrG,"goo/boot","<chr>");
DEF(YevalSast_evalYenv_parent,"eval/ast-eval","env-parent");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YevalSastYloop_bindings_setter,"eval/ast","loop-bindings-setter");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooStypesYtA,"goo/types","t+");
DEF(YevalSast_evalYenv_values_setter,"eval/ast-eval","env-values-setter");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yas_error,"goo/boot","as-error");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYT,"goo/math","*");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YtT,"goo/boot","t*");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
DEF(YevalSast_evalYDnul_loc_env,"eval/ast-eval","$nul-loc-env");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
DEF(YevalSast_evalYas_fun_name,"eval/ast-eval","as-fun-name");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YevalSastYloop_continue_setter,"eval/ast","loop-continue-setter");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yerror,"goo/boot","error");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YevalSastYloop_body_setter,"eval/ast","loop-body-setter");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
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
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
DEF(YevalSast_evalYenv_global_binding_boundQ,"eval/ast-eval","env-global-binding-bound?");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YOlst,"goo/boot","@lst");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YevalSastYboundQ_default,"eval/ast","bound?-default");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
DEF(YevalSast_evalYenv_names,"eval/ast-eval","env-names");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YevalSastYLloopG,"eval/ast","<loop>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
DEF(YevalSast_evalYenv_function_setter,"eval/ast-eval","env-function-setter");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooSmacrosYEE,"goo/macros","==");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(YevalSastYloop_bindings,"eval/ast","loop-bindings");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Ylst,"goo/boot","lst");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
DEF(YevalSast_evalYenv_global_binding_value,"eval/ast-eval","env-global-binding-value");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
DEF(YevalSast_evalYarrange_arguments,"eval/ast-eval","arrange-arguments");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YevalSastYfunction_loop_setter,"eval/ast","function-loop-setter");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
DEF(YevalSast_evalYenv_runtime_value_setter,"eval/ast-eval","env-runtime-value-setter");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YevalSastYfunction_ref_count_setter,"eval/ast","function-ref-count-setter");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSastYloop_continue,"eval/ast","loop-continue");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
DEF(YevalSast_evalYenv_dynamic_value_setter,"eval/ast-eval","env-dynamic-value-setter");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
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
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(Yfun_val,"goo/boot","fun-val");
DEF(YevalSast_evalYenv_global_binding_value_or,"eval/ast-eval","env-global-binding-value-or");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(Ynew,"goo/boot","new");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YLstrG,"goo/boot","<str>");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
DEF(YevalSast_evalYast_eval_boundQ,"eval/ast-eval","ast-eval-bound?");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YevalSastYfunction_loop,"eval/ast","function-loop");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooSmagYL,"goo/mag","<");
DEF(YevalSast_evalYenv_local_value_setter,"eval/ast-eval","env-local-value-setter");
DEF(YevalSast_evalYenv_binding_value,"eval/ast-eval","env-binding-value");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
DEF(YevalSast_evalYenv_parent_setter,"eval/ast-eval","env-parent-setter");
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
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLlstG,"goo/boot","<lst>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_46);
DEFLIT(lit_49);
DEFLIT(lit_96);
DEFLIT(lit_4);
DEFLIT(lit_42);
DEFLIT(lit_25);
DEFLIT(lit_88);
DEFLIT(lit_36);
DEFLIT(lit_90);
DEFLIT(lit_122);
DEFLIT(lit_43);
DEFLIT(lit_52);
DEFLIT(lit_10);
DEFLIT(lit_40);
DEFLIT(lit_68);
DEFLIT(lit_47);
DEFLIT(lit_8);
DEFLIT(lit_34);
DEFLIT(lit_60);
DEFLIT(lit_115);
DEFLIT(lit_84);
DEFLIT(lit_138);
DEFLIT(lit_80);
DEFLIT(lit_135);
DEFLIT(lit_67);
DEFLIT(lit_116);
DEFLIT(lit_55);
DEFLIT(lit_89);
DEFLIT(lit_21);
DEFLIT(lit_134);
DEFLIT(lit_95);
DEFLIT(lit_13);
DEFLIT(lit_44);
DEFLIT(lit_16);
DEFLIT(lit_63);
DEFLIT(lit_104);
DEFLIT(lit_128);
DEFLIT(lit_35);
DEFLIT(lit_62);
DEFLIT(lit_98);
DEFLIT(lit_37);
DEFLIT(lit_121);
DEFLIT(lit_109);
DEFLIT(lit_124);
DEFLIT(lit_23);
DEFLIT(lit_41);
DEFLIT(lit_107);
DEFLIT(lit_118);
DEFLIT(lit_2);
DEFLIT(lit_87);
DEFLIT(lit_123);
DEFLIT(lit_30);
DEFLIT(lit_65);
DEFLIT(lit_76);
DEFLIT(lit_127);
DEFLIT(lit_82);
DEFLIT(lit_31);
DEFLIT(lit_54);
DEFLIT(lit_19);
DEFLIT(lit_106);
DEFLIT(lit_70);
DEFLIT(lit_39);
DEFLIT(lit_3);
DEFLIT(lit_14);
DEFLIT(lit_26);
DEFLIT(lit_15);
DEFLIT(lit_132);
DEFLIT(lit_92);
DEFLIT(lit_51);
DEFLIT(lit_140);
DEFLIT(lit_91);
DEFLIT(lit_50);
DEFLIT(lit_5);
DEFLIT(lit_53);
DEFLIT(lit_131);
DEFLIT(lit_17);
DEFLIT(lit_93);
DEFLIT(lit_72);
DEFLIT(lit_61);
DEFLIT(lit_20);
DEFLIT(lit_119);
DEFLIT(lit_110);
DEFLIT(lit_85);
DEFLIT(lit_139);
DEFLIT(lit_129);
DEFLIT(lit_38);
DEFLIT(lit_28);
DEFLIT(lit_75);
DEFLIT(lit_117);
DEFLIT(lit_108);
DEFLIT(lit_120);
DEFLIT(lit_112);
DEFLIT(lit_86);
DEFLIT(lit_0);
DEFLIT(lit_126);
DEFLIT(lit_77);
DEFLIT(lit_94);
DEFLIT(lit_136);
DEFLIT(lit_114);
DEFLIT(lit_22);
DEFLIT(lit_137);
DEFLIT(lit_102);
DEFLIT(lit_27);
DEFLIT(lit_6);
DEFLIT(lit_29);
DEFLIT(lit_66);
DEFLIT(lit_113);
DEFLIT(lit_133);
DEFLIT(lit_125);
DEFLIT(lit_105);
DEFLIT(lit_12);
DEFLIT(lit_59);
DEFLIT(lit_56);
DEFLIT(lit_9);
DEFLIT(lit_71);
DEFLIT(lit_24);
DEFLIT(lit_81);
DEFLIT(lit_45);
DEFLIT(lit_97);
DEFLIT(lit_58);
DEFLIT(lit_74);
DEFLIT(lit_103);
DEFLIT(lit_99);
DEFLIT(lit_57);
DEFLIT(lit_7);
DEFLIT(lit_33);
DEFLIT(lit_18);
DEFLIT(lit_32);
DEFLIT(lit_83);
DEFLIT(lit_11);
DEFLIT(lit_111);
DEFLIT(lit_1);
DEFLIT(lit_101);
DEFLIT(lit_130);
DEFLIT(lit_79);
DEFLIT(lit_64);
DEFLIT(lit_73);
DEFLIT(lit_48);
DEFLIT(lit_78);
DEFLIT(lit_69);
DEFLIT(lit_100);

/* FUNCTIONS: */

LOCFOR(fun_env_global_binding_value_0);
LOCFOR(fun_env_global_binding_value_setter_1);
LOCFOR(fun_env_global_binding_boundQ_2);
LOCFOR(fun_env_runtime_value_3);
LOCFOR(fun_env_runtime_value_setter_4);
LOCFOR(fun_env_dynamic_value_5);
LOCFOR(fun_env_dynamic_value_setter_6);
LOCFOR(fun_env_parent_7);
LOCFOR(fun_env_parent_setter_8);
LOCFOR(fun_9);
LOCFOR(fun_env_function_10);
LOCFOR(fun_env_function_setter_11);
LOCFOR(fun_12);
LOCFOR(fun_env_names_13);
LOCFOR(fun_env_names_setter_14);
LOCFOR(fun_15);
LOCFOR(fun_env_values_16);
LOCFOR(fun_env_values_setter_17);
LOCFOR(fun_env_frameX_18);
LOCFOR(fun_env_local_value_19);
LOCFOR(fun_env_local_value_setter_20);
LOCFOR(fun_env_binding_value_21);
LOCFOR(fun_env_binding_value_setter_22);
LOCFOR(fun_ast_evaluate_23);
LOCFOR(fun_ast_eval_24);
LOCFOR(fun_ast_eval_25);
LOCFOR(fun_ast_eval_26);
LOCFOR(fun_ast_eval_specs_27);
FUNFOR(YevalSast_evalYarrange_arguments);
LOCFOR(fun_x_1485_29);
LOCFOR(fun_30);
LOCFOR(fun_31);
LOCFOR(fun_as_fun_name_32);
LOCFOR(fun_as_fun_name_33);
LOCFOR(fun_as_fun_name_34);
LOCFOR(fun_as_fun_name_35);
LOCFOR(fun_as_fun_name_36);
LOCFOR(fun_as_fun_name_37);
LOCFOR(fun_38);
LOCFOR(fun_export_goo_method_39);
LOCFOR(fun_40);
LOCFOR(fun_ast_eval_41);
LOCFOR(fun_ast_eval_42);
LOCFOR(fun_env_local_reference_value_43);
LOCFOR(fun_env_local_reference_value_setter_44);
LOCFOR(fun_ast_eval_45);
LOCFOR(fun_ast_eval_46);
LOCFOR(fun_ast_eval_47);
LOCFOR(fun_ast_eval_48);
LOCFOR(fun_ast_eval_49);
LOCFOR(fun_ast_eval_50);
LOCFOR(fun_env_global_binding_value_or_51);
LOCFOR(fun_ast_eval_boundQ_52);
LOCFOR(fun_ast_eval_boundQ_53);
LOCFOR(fun_ast_eval_54);
LOCFOR(fun_ast_eval_55);
LOCFOR(fun_ast_eval_56);
LOCFOR(fun_ast_eval_57);
LOCFOR(fun_ast_eval_58);
LOCFOR(fun_env_define_bindingX_59);
LOCFOR(fun_ast_eval_60);
LOCFOR(fun_ast_eval_61);
LOCFOR(fun_62);
LOCFOR(fun_63);
LOCFOR(fun_ast_eval_64);
LOCFOR(fun_ast_eval_65);
LOCFOR(fun_ast_eval_66);
LOCFOR(fun_ast_eval_67);
LOCFOR(fun_ast_eval_68);
LOCFOR(fun_ast_eval_69);
LOCFOR(fun_ast_eval_70);
LOCFOR(fun_71);
LOCFOR(fun_ast_eval_72);
LOCFOR(fun_73);
LOCFOR(fun_74);
LOCFOR(fun_ast_eval_75);
LOCFOR(fun_76);
LOCFOR(fun_77);
LOCFOR(fun_ast_eval_78);
LOCFOR(fun_ast_eval_79);
FUNFOR(YevalSastYinit_environment_for_eval);
extern P YevalSast_evalYPdefine_binding (P,P);
extern P YevalSast_evalYPlookup_binding (P,P);
extern P YevalSast_evalYPensure_binding (P,P);
extern P YevalSast_evalYPdlvar_binding (P);
extern P YevalSast_evalYPbinding_bound_ofQ (P);
extern P YevalSast_evalYPbinding_boundQ (P);
extern P YevalSast_evalYPbinding_value_of (P);
extern P YevalSast_evalYPbinding_value (P);
extern P YevalSast_evalYPbinding_value_of_setter (P,P);
extern P YevalSast_evalYPbinding_value_setter (P,P);
extern P YevalSast_evalYPbinding_value_or_of (P,P);
extern P YevalSast_evalYPbinding_value_or (P,P);
extern P YevalSast_evalY___main_0___ ();
extern P YevalSast_evalY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_env_global_binding_value_0) {
  P b_;
  P boxF3085;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(b_, 0);
  T5 = CALL1(1,VARREF(YevalSastYbinding_global_box),b_);
  boxF3085 = T5;
  if (boxF3085 != YPfalse) {
    T1 = CALL1(1,VARREF(YevalSastYglobal_box_value),boxF3085);
    T0 = T1;
  } else {
    T4 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
    T3 = CALL3(1,VARREF(Ynew),VARREF(YgooSconditionsYLunbound_variable_errorG),VARREF(YgooSconditionsYunbound_variable_error_variable),T4);
    T2 = CALL1(1,VARREF(YgooSconditionsYsig),T3);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_global_binding_value_setter_1) {
  P value_,b_;
  P boxF3086;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(value_, 0);
  ARG(b_, 1);
  T8 = CALL1(1,VARREF(YevalSastYbinding_global_box),b_);
  boxF3086 = T8;
  boxF3086 = BOXFAB(boxF3086);
  T2 = BOXVAL(boxF3086);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(Ynew),VARREF(YevalSastYLglobal_boxG));
    T4 = CALL2(1,VARREF(YevalSastYbinding_global_box_setter),T5,b_);
    T3 = BOXVAL(boxF3086) = T4;
  } else {
  }
  T7 = BOXVAL(boxF3086);
  T6 = CALL2(1,VARREF(YevalSastYglobal_box_value_setter),value_,T7);
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_env_global_binding_boundQ_2) {
  P b_;
  P boxF3087;
  P T0,T1;
LINK_STACK();
  ARG(b_, 0);
  T1 = CALL1(1,VARREF(YevalSastYbinding_global_box),b_);
  boxF3087 = T1;
  if (boxF3087 != YPfalse) {
    T0 = YPtrue;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_env_runtime_value_3) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSruntimeYloc_val),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_runtime_value_setter_4) {
  P v_,x_;
  P T0;
LINK_STACK();
  ARG(v_, 0);
  ARG(x_, 1);
  T0 = CALL2(1,VARREF(YgooSruntimeYloc_val_setter),v_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_dynamic_value_5) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooSruntimeYloc_val),x_);
  T0 = (P)YPdyn_var_val(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_dynamic_value_setter_6) {
  P v_,x_;
  P T0;
LINK_STACK();
  ARG(v_, 0);
  ARG(x_, 1);
  T0 = CALL1(1,VARREF(YgooSruntimeYloc_val),x_);
  (P)YPdyn_var_val_setter(v_,T0);
UNLINK_STACK();
  QRET(v_);
}

FUNCODEDEF(fun_env_parent_7) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_evalYenv_parent));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_parent_setter_8) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_evalYenv_parent));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_9) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_env_function_10) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_evalYenv_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_function_setter_11) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_evalYenv_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_12) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_env_names_13) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_evalYenv_names));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_names_setter_14) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_evalYenv_names));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_15) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_env_values_16) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_evalYenv_values));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_values_setter_17) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_evalYenv_values));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_frameX_18) {
  P env_,function_,names_,args_;
  P valuesF3088;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(env_, 0);
  ARG(function_, 1);
  ARG(names_, 2);
  ARG(args_, 3);
  T3 = CALL1(1,VARREF(YgooStypesYlen),args_);
  T2 = CALL2(1,VARREF(YgooScolsSrepYrep_fab),T3,VARREF(Ynul));
  T1 = CALL2(1,VARREF(YgooScolsSrepYrep_intoX),T2,args_);
  valuesF3088 = T1;
  T0 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_parent),env_,VARREF(YevalSast_evalYenv_function),function_,VARREF(YevalSast_evalYenv_values),valuesF3088,VARREF(YevalSast_evalYenv_names),names_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_env_local_value_19) {
  P env_,i_,j_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(env_, 0);
  ARG(i_, 1);
  ARG(j_, 2);
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSast_evalYenv_values),env_);
    T2 = CALL2(1,VARREF(YgooScolsSrepYrep_elt),T3,j_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YevalSast_evalYenv_parent),env_);
    T6 = CALL2(1,VARREF(YgooSmathY_),i_,YPint((P)1));
    T4 = CALL3(1,VARREF(YevalSast_evalYenv_local_value),T5,T6,j_);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_local_value_setter_20) {
  P v_,env_,i_,j_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(v_, 0);
  ARG(env_, 1);
  ARG(i_, 2);
  ARG(j_, 3);
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSast_evalYenv_values),env_);
    T2 = CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),v_,T3,j_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YevalSast_evalYenv_parent),env_);
    T6 = CALL2(1,VARREF(YgooSmathY_),i_,YPint((P)1));
    T4 = CALL4(1,VARREF(YevalSast_evalYenv_local_value_setter),v_,T5,T6,j_);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_binding_value_21) {
  P env_,name_;
  P iF3090;
  P namesF3089;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(env_, 0);
  ARG(name_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),env_,VARREF(YevalSast_evalYDnul_loc_env));
  if (T1 != YPfalse) {
    T0 = VARREF(Ynul);
  } else {
    T14 = CALL1(1,VARREF(YevalSast_evalYenv_names),env_);
    namesF3089 = T14;
    iF3090 = YPint((P)0);
    for (;;) {
      P a189_0,a189_1;
    loop189:
      T3 = CALL1(1,VARREF(YgooSmacrosYemptyQ),namesF3089);
      if (T3 != YPfalse) {
        T5 = CALL1(1,VARREF(YevalSast_evalYenv_parent),env_);
        T4 = CALL2(1,VARREF(YevalSast_evalYenv_binding_value),T5,name_);
        T2 = T4;
      } else {
        T8 = CALL1(1,VARREF(Yhead),namesF3089);
        T7 = CALL2(1,VARREF(YgooSmacrosYEE),name_,T8);
        if (T7 != YPfalse) {
          T10 = CALL1(1,VARREF(YevalSast_evalYenv_values),env_);
          T9 = CALL2(1,VARREF(YgooScolsSrepYrep_elt),T10,iF3090);
          T6 = T9;
        } else {
          T12 = CALL1(1,VARREF(Ytail),namesF3089);
          T13 = CALL2(1,VARREF(YgooSmathYA),iF3090,YPint((P)1));
          a189_0 = T12;
          a189_1 = T13;
          namesF3089 = a189_0;
          iF3090 = a189_1;
          goto loop189;
          T6 = T11;
        }
        T2 = T6;
      }
      break;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_binding_value_setter_22) {
  P v_,env_,name_;
  P iF3092;
  P namesF3091;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(v_, 0);
  ARG(env_, 1);
  ARG(name_, 2);
  T12 = CALL1(1,VARREF(YevalSast_evalYenv_names),env_);
  namesF3091 = T12;
  iF3092 = YPint((P)0);
  for (;;) {
    P a190_0,a190_1;
  loop190:
    T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),namesF3091);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YevalSast_evalYenv_parent),env_);
      T2 = CALL3(1,VARREF(YevalSast_evalYenv_binding_value_setter),v_,T3,name_);
      T0 = T2;
    } else {
      T6 = CALL1(1,VARREF(Yhead),namesF3091);
      T5 = CALL2(1,VARREF(YgooSmacrosYEE),name_,T6);
      if (T5 != YPfalse) {
        T8 = CALL1(1,VARREF(YevalSast_evalYenv_values),env_);
        T7 = CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),v_,T8,iF3092);
        T4 = T7;
      } else {
        T10 = CALL1(1,VARREF(Ytail),namesF3091);
        T11 = CALL2(1,VARREF(YgooSmathYA),iF3092,YPint((P)1));
        a190_0 = T10;
        a190_1 = T11;
        namesF3091 = a190_0;
        iF3092 = a190_1;
        goto loop190;
        T4 = T9;
      }
      T0 = T4;
    }
    break;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_evaluate_23) {
  P e_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  T0 = CALL2(1,VARREF(YevalSast_evalYast_eval),e_,VARREF(YevalSast_evalYDnul_loc_env));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_24) {
  P e_,env_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T0 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_25) {
  P e_,env_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T0 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_26) {
  P e_,ee_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(ee_, 1);
  T1 = CALL1(1,VARREF(YevalSastYcompile_time_program),e_);
  T0 = CALL1(1,VARREF(YevalSastYast_evaluate),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_specs_27) {
  P specs_,naryQ_,env_;
  P typeF3098;
  P specF3097;
  P iF3096;
  P specsF3095;
  P resF3094;
  P nreqF3093;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(specs_, 0);
  ARG(naryQ_, 1);
  ARG(env_, 2);
  if (naryQ_ != YPfalse) {
    T12 = CALL1(1,VARREF(YgooStypesYlen),specs_);
    T11 = CALL2(1,VARREF(YgooSmathY_),T12,YPint((P)1));
    T10 = T11;
  } else {
    T13 = CALL1(1,VARREF(YgooStypesYlen),specs_);
    T10 = T13;
  }
  nreqF3093 = T10;
  resF3094 = Ynil;
  specsF3095 = specs_;
  iF3096 = YPint((P)0);
  for (;;) {
    P a191_0,a191_1,a191_2;
  loop191:
    T1 = CALL2(1,VARREF(YgooSmathYE),iF3096,nreqF3093);
    if (T1 != YPfalse) {
      T2 = CALL1(1,VARREF(YgooSmacrosYrevX),resF3094);
      T0 = T2;
    } else {
      T9 = CALL1(1,VARREF(Yhead),specsF3095);
      specF3097 = T9;
      if (specF3097 != YPfalse) {
        T8 = CALL2(1,VARREF(YevalSast_evalYast_eval),specF3097,env_);
        T7 = T8;
      } else {
        T7 = VARREF(YLanyG);
      }
      typeF3098 = T7;
      T4 = CALL2(1,VARREF(YgooSmacrosYpair),typeF3098,resF3094);
      T5 = CALL1(1,VARREF(Ytail),specsF3095);
      T6 = CALL2(1,VARREF(YgooSmathYA),iF3096,YPint((P)1));
      a191_0 = T4;
      a191_1 = T5;
      a191_2 = T6;
      resF3094 = a191_0;
      specsF3095 = a191_1;
      iF3096 = a191_2;
      goto loop191;
      T0 = T3;
    }
    break;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSast_evalYarrange_arguments) {
  P f_,naryQ_,arity_,args_;
  P countF3099;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(f_, 0);
  ARG(naryQ_, 1);
  ARG(arity_, 2);
  ARG(args_, 3);
  T11 = CALL1(1,VARREF(YgooStypesYlen),args_);
  countF3099 = T11;
  if (naryQ_ != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSmagYL),countF3099,arity_);
    if (T2 != YPfalse) {
      T3 = CALL2(1,VARREF(Ynarity_error),f_,args_);
      T1 = T3;
    } else {
      T5 = CALL3(1,VARREF(YgooScolsSseqYsub),args_,YPint((P)0),arity_);
      T7 = CALL3(1,VARREF(YgooScolsSseqYsub),args_,arity_,countF3099);
      T6 = CALL1(1,VARREF(Ylst),T7);
      T4 = CALL2(1,VARREF(YgooScolsSseqYcat2),T5,T6);
      T1 = T4;
    }
    T0 = T1;
  } else {
    T9 = CALL2(1,VARREF(YgooSmathYNEE),countF3099,arity_);
    if (T9 != YPfalse) {
      T10 = CALL2(1,VARREF(Yarity_error),f_,args_);
      T8 = T10;
    } else {
      T8 = args_;
    }
    T0 = T8;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1485_29) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_59),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_30) {
  P return_;
  P x_1484F3116;
  P x_1484F3115;
  P x_1484F3114;
  P x_1484F3113;
  P x_1484F3112;
  P x_1484F3111;
  P x_1484F3110;
  P x_1484F3109;
  P x_1484F3108;
  P bodyF3107;
  P namesF3106;
  P arityF3105;
  P naryQF3104;
  P fF3103;
  P envF3102;
  P x_1484F3101;
  P x_1485F3100;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91;
LINK_STACK();
  ARG(return_, 0);
  T91 = FUNSHELL(0,fun_x_1485_29,2);
  x_1485F3100 = T91;
  FUNINIT(x_1485F3100, 2,FREEREF(0),return_);
  x_1484F3101 = FREEREF(0);
  envF3102 = YPfalse;
  envF3102 = BOXFAB(envF3102);
  fF3103 = YPfalse;
  fF3103 = BOXFAB(fF3103);
  naryQF3104 = YPfalse;
  naryQF3104 = BOXFAB(naryQF3104);
  arityF3105 = YPfalse;
  arityF3105 = BOXFAB(arityF3105);
  namesF3106 = YPfalse;
  namesF3106 = BOXFAB(namesF3106);
  bodyF3107 = YPfalse;
  bodyF3107 = BOXFAB(bodyF3107);
  T6 = CALL2(1,VARREF(YisaQ),x_1484F3101,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T23 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1484F3101,LITREF(lit_59),x_1485F3100);
    x_1484F3108 = T23;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1484F3108,x_1485F3100);
    BOXVAL(envF3102) = T21;
    T22 = CALL1(1,VARREF(Ytail),x_1484F3108);
    x_1484F3109 = T22;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1484F3109,x_1485F3100);
    BOXVAL(fF3103) = T19;
    T20 = CALL1(1,VARREF(Ytail),x_1484F3109);
    x_1484F3110 = T20;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1484F3110,x_1485F3100);
    BOXVAL(naryQF3104) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1484F3110);
    x_1484F3111 = T18;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1484F3111,x_1485F3100);
    BOXVAL(arityF3105) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1484F3111);
    x_1484F3112 = T16;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1484F3112,x_1485F3100);
    BOXVAL(namesF3106) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1484F3112);
    x_1484F3113 = T14;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1484F3113,x_1485F3100);
    BOXVAL(bodyF3107) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1484F3113);
    x_1484F3114 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1484F3114,x_1485F3100);
    x_1484F3115 = T9;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1484F3115,x_1485F3100);
    T10 = CALL1(1,VARREF(Ytail),x_1484F3114);
    x_1484F3116 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1484F3116,x_1485F3100);
  } else {
    T24 = CALL2(1,x_1485F3100,LITREF(lit_60),x_1484F3101);
  }
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,LITREF(lit_64));
  T29 = CALL1(1,VARREF(Ylst),T30);
  T28 = CALL2(1,VARREF(YgooSmacrosYcat),T29,LITREF(lit_64));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_65));
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_66));
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_53));
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_67));
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_69));
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_70));
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_71));
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T44 = CALL4(1,VARREF(YgooSmacrosYcat),T45,T46,T47,LITREF(lit_64));
  T43 = CALL1(1,VARREF(Ylst),T44);
  T38 = CALLN(1,VARREF(YgooSmacrosYcat),6,T39,T40,T41,T42,T43,LITREF(lit_64));
  T37 = CALL1(1,VARREF(Ylst),T38);
  T34 = CALL4(1,VARREF(YgooSmacrosYcat),T35,T36,T37,LITREF(lit_64));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_65));
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_72));
  T54 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T53 = CALL2(1,VARREF(YgooSmacrosYcat),T54,LITREF(lit_64));
  T52 = CALL1(1,VARREF(Ylst),T53);
  T49 = CALL4(1,VARREF(YgooSmacrosYcat),T50,T51,T52,LITREF(lit_64));
  T48 = CALL1(1,VARREF(Ylst),T49);
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_65));
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T61 = CALL1(1,VARREF(Ylst),LITREF(lit_34));
  T63 = BOXVAL(envF3102);
  T62 = CALL1(1,VARREF(Ylst),T63);
  T65 = BOXVAL(fF3103);
  T64 = CALL1(1,VARREF(Ylst),T65);
  T68 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T70 = BOXVAL(namesF3106);
  T69 = CALL1(1,VARREF(Ylst),T70);
  T73 = CALL1(1,VARREF(Ylst),LITREF(lit_76));
  T76 = CALL1(1,VARREF(Ylst),LITREF(lit_77));
  T77 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T75 = CALL3(1,VARREF(YgooSmacrosYcat),T76,T77,Ynil);
  T74 = CALL1(1,VARREF(Ylst),T75);
  T72 = CALL3(1,VARREF(YgooSmacrosYcat),T73,T74,LITREF(lit_64));
  T71 = CALL1(1,VARREF(Ylst),T72);
  T67 = CALL4(1,VARREF(YgooSmacrosYcat),T68,T69,T71,LITREF(lit_64));
  T66 = CALL1(1,VARREF(Ylst),T67);
  T80 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T81 = CALL1(1,VARREF(Ylst),LITREF(lit_66));
  T84 = CALL1(1,VARREF(Ylst),LITREF(lit_76));
  T85 = CALL1(1,VARREF(Ylst),LITREF(lit_72));
  T83 = CALL3(1,VARREF(YgooSmacrosYcat),T84,T85,LITREF(lit_64));
  T82 = CALL1(1,VARREF(Ylst),T83);
  T79 = CALL4(1,VARREF(YgooSmacrosYcat),T80,T81,T82,LITREF(lit_64));
  T78 = CALL1(1,VARREF(Ylst),T79);
  T60 = CALLN(1,VARREF(YgooSmacrosYcat),6,T61,T62,T64,T66,T78,LITREF(lit_64));
  T59 = CALL1(1,VARREF(Ylst),T60);
  T56 = CALL4(1,VARREF(YgooSmacrosYcat),T57,T58,T59,LITREF(lit_64));
  T55 = CALL1(1,VARREF(Ylst),T56);
  T89 = BOXVAL(bodyF3107);
  T88 = CALL1(1,VARREF(Ylst),T89);
  T90 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T87 = CALL3(1,VARREF(YgooSmacrosYcat),T88,T90,LITREF(lit_64));
  T86 = CALL1(1,VARREF(Ylst),T87);
  T25 = CALLN(1,VARREF(YgooSmacrosYcat),7,T26,T27,T33,T48,T55,T86,LITREF(lit_64));
UNLINK_STACK();
  QRET(T25);
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

FUNCODEDEF(fun_as_fun_name_32) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(Yfun_name),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_33) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSastYfunction_debug_name),x_);
  T0 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_34) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YevalSastYbinding_name),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_35) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSastYconstant_value),x_);
  T0 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_36) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_as_fun_name_37) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_38) {
  P arg_vector_;
  P frameF3119;
  P nmsF3118;
  P argsF3117;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  NARGS(arg_vector_, 0);
  T8 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),arg_vector_);
  T7 = CALL4(1,VARREF(YevalSast_evalYarrange_arguments),FREEREF(0),FREEREF(1),FREEREF(2),T8);
  argsF3117 = T7;
  T6 = (P)YPnext_methods();
  nmsF3118 = T6;
  T3 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T2 = CALL2(1,VARREF(YgooScolsSseqYcat2),FREEREF(4),T3);
  T5 = CALL1(1,VARREF(Ylst),nmsF3118);
  T4 = CALL2(1,VARREF(YgooScolsSseqYcat2),argsF3117,T5);
  T1 = CALL4(1,VARREF(YevalSast_evalYenv_frameX),FREEREF(3),FREEREF(0),T2,T4);
  frameF3119 = T1;
  T0 = CALL1(1,FREEREF(5),frameF3119);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_export_goo_method_39) {
  P f_,names_,specs_,naryQ_,value_,body_,env_;
  P efunF3121;
  P arityF3120;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(f_, 0);
  ARG(names_, 1);
  ARG(specs_, 2);
  ARG(naryQ_, 3);
  ARG(value_, 4);
  ARG(body_, 5);
  ARG(env_, 6);
  if (naryQ_ != YPfalse) {
    T8 = CALL1(1,VARREF(YgooStypesYlen),specs_);
    T7 = CALL2(1,VARREF(YgooSmathY_),T8,YPint((P)1));
    T6 = T7;
  } else {
    T9 = CALL1(1,VARREF(YgooStypesYlen),specs_);
    T6 = T9;
  }
  arityF3120 = T6;
  T5 = FUNFAB(fun_38,6,f_,naryQ_,arityF3120,env_,names_,body_);
  efunF3121 = T5;
  T0 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),f_);
  CALL2(1,VARREF(Yfun_name_setter),T0,efunF3121);
  T2 = CALL3(1,VARREF(YevalSast_evalYast_eval_specs),specs_,naryQ_,env_);
  if (value_ != YPfalse) {
    T4 = CALL2(1,VARREF(YevalSast_evalYast_eval),value_,env_);
    T3 = T4;
  } else {
    T3 = VARREF(YLanyG);
  }
  T1 = CALLN(1,VARREF(Ynew),13,VARREF(YLsigG),VARREF(Ysig_names),names_,VARREF(Ysig_specs),T2,VARREF(Ysig_naryQ),naryQ_,VARREF(Ysig_arity),arityF3120,VARREF(Ysig_val),T3,VARREF(Ysig_unification_vars),Ynil);
  CALL2(1,VARREF(Yfun_sig_setter),T1,efunF3121);
UNLINK_STACK();
  QRET(efunF3121);
}

FUNCODEDEF(fun_40) {
  P env_;
  P T0,T1;
LINK_STACK();
  ARG(env_, 0);
  T1 = CALL1(1,VARREF(YevalSastYfunction_body),FREEREF(0));
  T0 = CALL2(1,VARREF(YevalSast_evalYast_eval),T1,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_41) {
  P e_,env_;
  P evalF3123;
  P paramsF3122;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T6 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  paramsF3122 = T6;
  T5 = FUNFAB(fun_40,1,e_);
  evalF3123 = T5;
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),paramsF3122);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_type),paramsF3122);
  T3 = CALL1(1,VARREF(YevalSastYfunction_naryQ),e_);
  T4 = CALL1(1,VARREF(YevalSastYfunction_value),e_);
  T0 = CALLN(1,VARREF(YevalSast_evalYexport_goo_method),7,e_,T1,T2,T3,T4,evalF3123,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_42) {
  P e_,env_;
  P specsF3127;
  P namesF3126;
  P naryQF3125;
  P paramsF3124;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T6 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  paramsF3124 = T6;
  T5 = CALL1(1,VARREF(YevalSastYfunction_naryQ),e_);
  naryQF3125 = T5;
  T4 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),paramsF3124);
  namesF3126 = T4;
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_type),paramsF3124);
  T2 = CALL3(1,VARREF(YevalSast_evalYast_eval_specs),T3,naryQF3125,env_);
  specsF3127 = T2;
  T1 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),e_);
  T0 = CALLN(1,VARREF(Yfab_gen),6,T1,namesF3126,specsF3127,naryQF3125,VARREF(YLanyG),Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_local_reference_value_43) {
  P env_,ref_;
  P T0,T1,T2;
LINK_STACK();
  ARG(env_, 0);
  ARG(ref_, 1);
  T1 = CALL1(1,VARREF(YevalSastYreference_frame_number),ref_);
  T2 = CALL1(1,VARREF(YevalSastYreference_frame_offset),ref_);
  T0 = CALL3(1,VARREF(YevalSast_evalYenv_local_value),env_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_local_reference_value_setter_44) {
  P val_,env_,ref_;
  P T0,T1,T2;
LINK_STACK();
  ARG(val_, 0);
  ARG(env_, 1);
  ARG(ref_, 2);
  T1 = CALL1(1,VARREF(YevalSastYreference_frame_number),ref_);
  T2 = CALL1(1,VARREF(YevalSastYreference_frame_offset),ref_);
  T0 = CALL4(1,VARREF(YevalSast_evalYenv_local_value_setter),val_,env_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_45) {
  P e_,env_;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_ast_eval_46) {
  P e_,env_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T0 = CALL2(1,VARREF(YevalSast_evalYenv_local_reference_value),env_,e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_47) {
  P e_,env_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),e_);
  T0 = CALL1(1,VARREF(YevalSast_evalYenv_global_binding_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_48) {
  P e_,env_;
  P T0,T1,T2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T2 = CALL1(1,VARREF(YevalSastYreference_binding),e_);
  T1 = CALL1(1,VARREF(YevalSastYbinding_locative),T2);
  T0 = CALL1(1,VARREF(YevalSast_evalYenv_dynamic_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_49) {
  P e_,env_;
  P T0,T1,T2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T2 = CALL1(1,VARREF(YevalSastYreference_binding),e_);
  T1 = CALL1(1,VARREF(YevalSastYbinding_locative),T2);
  T0 = CALL1(1,VARREF(YevalSast_evalYenv_runtime_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_50) {
  P e_,env_;
  P T0,T1,T2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T2 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),T2);
  T0 = CALL3(1,VARREF(YevalSast_evalYast_eval_boundQ),e_,T1,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_global_binding_value_or_51) {
  P b_,default_,env_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(b_, 0);
  ARG(default_, 1);
  ARG(env_, 2);
  T1 = CALL1(1,VARREF(YevalSast_evalYenv_global_binding_boundQ),b_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YevalSast_evalYenv_global_binding_value),b_);
    T0 = T2;
  } else {
    T3 = CALL2(1,VARREF(YevalSast_evalYast_eval),default_,env_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_boundQ_52) {
  P e_,binding_,env_;
  P x_1487F3129;
  P x_1486F3128;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(e_, 0);
  ARG(binding_, 1);
  ARG(env_, 2);
  T6 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
  x_1486F3128 = T6;
  x_1487F3129 = VARREF(YgooSmacrosYEE);
  T1 = CALL2(1,x_1487F3129,x_1486F3128,LITREF(lit_105));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYboundQ_default),e_);
    T2 = CALL3(1,VARREF(YevalSast_evalYenv_global_binding_value_or),binding_,T3,env_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
    T4 = CALL2(1,VARREF(YevalSast_evalYast_eval),T5,env_);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_boundQ_53) {
  P e_,binding_,env_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(binding_, 1);
  ARG(env_, 2);
  T1 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
  T0 = CALL2(1,VARREF(YevalSast_evalYast_eval),T1,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_54) {
  P e_,env_;
  P valueF3130;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T3 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T2 = CALL2(1,VARREF(YevalSast_evalYast_eval),T3,env_);
  valueF3130 = T2;
  T1 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T0 = CALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),valueF3130,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_55) {
  P e_,env_;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_ast_eval_56) {
  P e_,env_;
  P valueF3131;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T4 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T3 = CALL2(1,VARREF(YevalSast_evalYast_eval),T4,env_);
  valueF3131 = T3;
  T2 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T1 = CALL1(1,VARREF(YevalSastYbinding_locative),T2);
  T0 = CALL2(1,VARREF(YevalSast_evalYenv_runtime_value_setter),valueF3131,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_57) {
  P e_,env_;
  P valueF3132;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T4 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T3 = CALL2(1,VARREF(YevalSast_evalYast_eval),T4,env_);
  valueF3132 = T3;
  T2 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T1 = CALL1(1,VARREF(YevalSastYbinding_locative),T2);
  T0 = CALL2(1,VARREF(YevalSast_evalYenv_dynamic_value_setter),valueF3132,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_58) {
  P e_,env_;
  P valueF3133;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T3 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T2 = CALL2(1,VARREF(YevalSast_evalYast_eval),T3,env_);
  valueF3133 = T2;
  T1 = CALL1(1,VARREF(YevalSastYassignment_reference),e_);
  T0 = CALL3(1,VARREF(YevalSast_evalYenv_local_reference_value_setter),valueF3133,env_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_define_bindingX_59) {
  P b_,v_;
  P xF3136;
  P x_1489F3135;
  P x_1488F3134;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(b_, 0);
  ARG(v_, 1);
  T15 = CALL1(1,VARREF(YevalSastYbinding_kind),b_);
  x_1488F3134 = T15;
  x_1489F3135 = VARREF(YgooSmacrosYEE);
  T1 = CALL2(1,x_1489F3135,x_1488F3134,LITREF(lit_114));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYbinding_locative),b_);
    T2 = CALL2(1,VARREF(YevalSast_evalYenv_runtime_value_setter),v_,T3);
    T0 = T2;
  } else {
    T5 = CALL2(1,x_1489F3135,x_1488F3134,LITREF(lit_105));
    if (T5 != YPfalse) {
      T6 = CALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),v_,b_);
      T4 = T6;
    } else {
      T8 = CALL2(1,x_1489F3135,x_1488F3134,LITREF(lit_115));
      if (T8 != YPfalse) {
        T10 = (P)YPfab_dyn_var();
        xF3136 = T10;
        T9 = (P)YPtag_into(xF3136,(P)3);
        CALL2(1,VARREF(YevalSastYbinding_locative_setter),T9,b_);
        T12 = CALL1(1,VARREF(YevalSastYbinding_locative),b_);
        T11 = CALL2(1,VARREF(YevalSast_evalYenv_dynamic_value_setter),v_,T12);
        T7 = T11;
      } else {
        T14 = CALL1(1,VARREF(YevalSastYbinding_kind),b_);
        T13 = CALL2(1,VARREF(Yinternal_error),LITREF(lit_116),T14);
        T7 = T13;
      }
      T4 = T7;
    }
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_60) {
  P e_,env_;
  P valueF3137;
  P T0,T1,T2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T2 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  valueF3137 = T1;
  T0 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  CALL2(1,VARREF(YevalSast_evalYenv_define_bindingX),T0,valueF3137);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_ast_eval_61) {
  P e_,env_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T2 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YevalSastYalternative_consequent),e_);
    T3 = CALL2(1,VARREF(YevalSast_evalYast_eval),T4,env_);
    T0 = T3;
  } else {
    T6 = CALL1(1,VARREF(YevalSastYalternative_alternant),e_);
    T5 = CALL2(1,VARREF(YevalSast_evalYast_eval),T6,env_);
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_62) {
  P continue_;
  P T0,T1,T2;
LINK_STACK();
  ARG(continue_, 0);
  CALL2(1,VARREF(YevalSastYloop_continue_setter),continue_,FREEREF(0));
  T2 = CALL1(1,VARREF(YevalSastYloop_body),FREEREF(0));
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,FREEREF(1));
  T0 = CALL1(0,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_63) {
  P return_;
  P T0,T1;
LINK_STACK();
  ARG(return_, 0);
  for (;;) {
  loop192:
    T0 = FUNFAB(fun_62,3,FREEREF(0),FREEREF(1),return_);
    with_exit(T0);
    goto loop192;
    break;
  }
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_ast_eval_64) {
  P e_,env_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T1 = FUNFAB(fun_63,2,e_,env_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_65) {
  P e_,env_;
  P valF3140;
  P nxtF3139;
  P eF3138;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  eF3138 = e_;
  for (;;) {
    P a193_0;
  loop193:
    T5 = CALL1(1,VARREF(Ytail),eF3138);
    nxtF3139 = T5;
    T4 = CALL1(1,VARREF(Yhead),eF3138);
    T3 = CALL2(1,VARREF(YevalSast_evalYast_eval),T4,env_);
    valF3140 = T3;
    T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),nxtF3139);
    if (T1 != YPfalse) {
      T0 = valF3140;
    } else {
      a193_0 = nxtF3139;
      eF3138 = a193_0;
      goto loop193;
      T0 = T2;
    }
    break;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_66) {
  P e_,env_;
  P argsF3142;
  P resF3141;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  resF3141 = Ynil;
  argsF3142 = e_;
  for (;;) {
    P a194_0,a194_1;
  loop194:
    T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),argsF3142);
    if (T1 != YPfalse) {
      T2 = CALL1(1,VARREF(YgooSmacrosYrevX),resF3141);
      T0 = T2;
    } else {
      T6 = CALL1(1,VARREF(Yhead),argsF3142);
      T5 = CALL2(1,VARREF(YevalSast_evalYast_eval),T6,env_);
      T4 = CALL2(1,VARREF(YgooSmacrosYpair),T5,resF3141);
      T7 = CALL1(1,VARREF(Ytail),argsF3142);
      a194_0 = T4;
      a194_1 = T7;
      resF3141 = a194_0;
      argsF3142 = a194_1;
      goto loop194;
      T0 = T3;
    }
    break;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_67) {
  P e_,env_;
  P argsF3144;
  P fF3143;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T4 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  T3 = CALL2(1,VARREF(YevalSast_evalYast_eval),T4,env_);
  fF3143 = T3;
  T2 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  argsF3144 = T1;
  T0 = CALL3(1,VARREF(YgooSmacrosYnapp),fF3143,YPfalse,argsF3144);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_68) {
  P e_,env_;
  P bindingF3151;
  P argF3150;
  P tmpF3149;
  P x_1490F3148;
  P x_1491F3147;
  P argsF3146;
  P loopF3145;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T18 = CALL1(1,VARREF(YevalSastYapplication_loop),e_);
  loopF3145 = T18;
  T17 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T16 = CALL2(1,VARREF(YevalSast_evalYast_eval),T17,env_);
  argsF3146 = T16;
  T11 = CALL1(1,VARREF(YgooScolsScolYenum),argsF3146);
  x_1491F3147 = T11;
  T13 = CALL1(1,VARREF(YevalSastYloop_bindings),loopF3145);
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  x_1490F3148 = T12;
  for (;;) {
    P a195_0,a195_1;
  loop195:
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1491F3147);
    tmpF3149 = T4;
    if (tmpF3149 != YPfalse) {
      T2 = tmpF3149;
    } else {
      T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1490F3148);
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_1491F3147);
      argF3150 = T10;
      T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1490F3148);
      bindingF3151 = T9;
      T5 = CALL1(1,VARREF(YevalSastYbinding_name),bindingF3151);
      CALL3(1,VARREF(YevalSast_evalYenv_binding_value_setter),argF3150,env_,T5);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1491F3147);
      T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1490F3148);
      a195_0 = T7;
      a195_1 = T8;
      x_1491F3147 = a195_0;
      x_1490F3148 = a195_1;
      goto loop195;
      T0 = T6;
    } else {
      T0 = YPfalse;
    }
    break;
  }
  T15 = CALL1(1,VARREF(YevalSastYloop_continue),loopF3145);
  T14 = CALL1(1,T15,YPfalse);
UNLINK_STACK();
  QRET(T14);
}

FUNCODEDEF(fun_ast_eval_69) {
  P e_,env_;
  P argsF3155;
  P fF3154;
  P nmsF3153;
  P bF3152;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T10 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
  bF3152 = T10;
  T2 = CALL1(1,VARREF(YevalSastYbinding_name),bF3152);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,LITREF(lit_73));
  if (T1 != YPfalse) {
    T5 = CALL2(1,VARREF(YevalSast_evalYenv_binding_value),env_,LITREF(lit_73));
    nmsF3153 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),nmsF3153,VARREF(Ynul));
    if (T4 != YPfalse) {
      T3 = YPfalse;
    } else {
      T3 = nmsF3153;
    }
    T0 = T3;
  } else {
    T9 = CALL1(1,VARREF(YevalSastYbinding_info),bF3152);
    fF3154 = T9;
    T8 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T7 = CALL2(1,VARREF(YevalSast_evalYast_eval),T8,env_);
    argsF3155 = T7;
    T6 = CALL3(1,VARREF(YgooSmacrosYnapp),fF3154,YPfalse,argsF3155);
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_70) {
  P e_,env_;
  P nenvF3157;
  P argsF3156;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T6 = CALL1(1,VARREF(YevalSastYfix_let_arguments),e_);
  T5 = CALL2(1,VARREF(YevalSast_evalYast_eval),T6,env_);
  argsF3156 = T5;
  T4 = CALL1(1,VARREF(YevalSastYfix_let_bindings),e_);
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),T4);
  T2 = CALL4(1,VARREF(YevalSast_evalYenv_frameX),env_,YPfalse,T3,argsF3156);
  nenvF3157 = T2;
  T1 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
  T0 = CALL2(1,VARREF(YevalSast_evalYast_eval),T1,nenvF3157);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_71) {
  P name_,value_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  ARG(value_, 1);
  T0 = CALL3(1,VARREF(YevalSast_evalYenv_binding_value_setter),value_,FREEREF(0),name_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_72) {
  P e_,env_;
  P new_envF3159;
  P bindingsF3158;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T11 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  bindingsF3158 = T11;
  T8 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),bindingsF3158);
  T10 = CALL1(1,VARREF(YgooSruntimeYalways),VARREF(Ynul));
  T9 = CALL2(1,VARREF(YgooSmacrosYmap),T10,bindingsF3158);
  T7 = CALL4(1,VARREF(YevalSast_evalYenv_frameX),env_,YPfalse,T8,T9);
  new_envF3159 = T7;
  T0 = FUNFAB(fun_71,1,new_envF3159);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),bindingsF3158);
  T3 = CALL2(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSast_evalYast_eval),new_envF3159);
  T4 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),T3,T4);
  CALL3(1,VARREF(YgooScolsSseqYdo2),T0,T1,T2);
  T6 = CALL1(1,VARREF(YevalSastYlocals_body),e_);
  T5 = CALL2(1,VARREF(YevalSast_evalYast_eval),T6,new_envF3159);
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_73) {
  P env_;
  P T0,T1;
LINK_STACK();
  ARG(env_, 0);
  T1 = CALL2(1,VARREF(YevalSast_evalYenv_binding_value),env_,LITREF(lit_133));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_74) {
  P return_;
  P exitF3161;
  P rprocF3160;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(return_, 0);
  T6 = FUNFAB(fun_73,1,return_);
  rprocF3160 = T6;
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_133));
  T5 = CALL1(1,VARREF(Ylst),YPfalse);
  T3 = CALLN(1,VARREF(YevalSast_evalYexport_goo_method),7,rprocF3160,T4,T5,YPfalse,YPfalse,rprocF3160,FREEREF(0));
  exitF3161 = T3;
  T2 = CALL1(1,VARREF(YevalSastYbind_exit_main_fun),FREEREF(1));
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,FREEREF(0));
  T0 = CALL1(1,T1,exitF3161);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_75) {
  P e_,env_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T1 = FUNFAB(fun_74,2,env_,e_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_76) {
  P T0,T1,T2;
LINK_STACK();
  T2 = CALL1(1,VARREF(YevalSastYunwind_protect_protected_thunk),FREEREF(0));
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,FREEREF(1));
  T0 = CALL0(1,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_77) {
  P T0,T1,T2;
LINK_STACK();
  T2 = CALL1(1,VARREF(YevalSastYunwind_protect_cleanup_thunk),FREEREF(0));
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,FREEREF(1));
  T0 = CALL0(1,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_78) {
  P e_,env_;
  P T0,T1,T2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T1 = FUNFAB(fun_76,2,e_,env_);
  T2 = FUNFAB(fun_77,2,e_,env_);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_79) {
  P e_,env_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T2 = CALL1(1,VARREF(YevalSastYmonitor_type),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  T4 = CALL1(1,VARREF(YevalSastYmonitor_info),e_);
  T3 = CALL2(1,VARREF(YevalSast_evalYast_eval),T4,env_);
  T6 = CALL1(1,VARREF(YevalSastYmonitor_test),e_);
  T5 = CALL2(1,VARREF(YevalSast_evalYast_eval),T6,env_);
  T8 = CALL1(1,VARREF(YevalSastYmonitor_handler),e_);
  T7 = CALL2(1,VARREF(YevalSast_evalYast_eval),T8,env_);
  T10 = CALL1(1,VARREF(YevalSastYmonitor_main_thunk),e_);
  T9 = CALL2(1,VARREF(YevalSast_evalYast_eval),T10,env_);
  T0 = CALL5(1,VARREF(YPwith_monitor),T1,T3,T5,T7,T9);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYinit_environment_for_eval) {
  P env_;
  P bF3162;
  P T0,T1;
LINK_STACK();
  ARG(env_, 0);
  CALL4(1,VARREF(YevalSastYast_define_binding),env_,LITREF(lit_73),YPfalse,LITREF(lit_139));
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),env_,LITREF(lit_140),YPfalse,LITREF(lit_105));
  bF3162 = T1;
  T0 = CALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),VARREF(YgooSmacrosYpair),bF3162);
UNLINK_STACK();
  QRET(T0);
}

P YevalSast_evalYPdefine_binding(P raw_mod_,P raw_nam_) {
  P eF3163;
  P T0,T1,T2,T3;
DEFCREGS();
  T3 = (P)YPPsym(raw_mod_);
  T2 = XCALL1(1,VARREF(YevalSastYunchecked_runtime_environment),T3);
  eF3163 = T2;
  T1 = (P)YPPsym(raw_nam_);
  T0 = XCALL4(1,VARREF(YevalSastYast_define_binding),eF3163,T1,YPfalse,LITREF(lit_105));
  return T0;
}

P YevalSast_evalYPlookup_binding(P raw_mod_,P raw_nam_) {
  P eF3164;
  P T0,T1,T2,T3;
DEFCREGS();
  T3 = (P)YPPsym(raw_mod_);
  T2 = XCALL1(1,VARREF(YevalSastYunchecked_runtime_environment),T3);
  eF3164 = T2;
  T1 = (P)YPPsym(raw_nam_);
  T0 = XCALL2(1,VARREF(YevalSastYfind_binding),T1,eF3164);
  return T0;
}

P YevalSast_evalYPensure_binding(P raw_mod_,P raw_nam_) {
  P tmpF3165;
  P T0,T1,T2;
DEFCREGS();
  T2 = (P)YevalSast_evalYPlookup_binding(raw_mod_,raw_nam_);
  tmpF3165 = T2;
  if (tmpF3165 != YPfalse) {
    T0 = tmpF3165;
  } else {
    T1 = (P)YevalSast_evalYPdefine_binding(raw_mod_,raw_nam_);
    T0 = T1;
  }
  return T0;
}

P YevalSast_evalYPdlvar_binding(P dlvar_) {
  P yF3170;
  P xF3169;
  P xF3168;
  P xF3167;
  P bF3166;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
DEFCREGS();
  T8 = (P)YevalSast_evalYPdlvar(dlvar_);
  bF3166 = T8;
  xF3169 = bF3166;
  xF3167 = YPint((P)0);
  xF3168 = xF3167;
  T3 = (P)YPiGG(xF3168,(P)2);
  yF3170 = T3;
  T2 = (P)YPeqQ(xF3169,yF3170);
  T1 = (P)YPbb(T2);
  if (T2) {
    T6 = (P)YevalSast_evalYPdlvar_mod(dlvar_);
    T7 = (P)YevalSast_evalYPdlvar_nam(dlvar_);
    T5 = (P)YevalSast_evalYPensure_binding(T6,T7);
    T4 = (P)YevalSast_evalYPdlvar_setter(T5,dlvar_);
    T0 = T4;
  } else {
    T0 = bF3166;
  }
  return T0;
}

INLINE P YevalSast_evalYPbinding_bound_ofQ(P b_) {
  P T0,T1;
DEFCREGS();
  if (b_ != YPfalse) {
    T1 = XCALL1(1,VARREF(YevalSastYbinding_info),b_);
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  return T0;
}

P YevalSast_evalYPbinding_boundQ(P dlvar_) {
  P T0,T1,T2,T3;
DEFCREGS();
  T2 = (P)YevalSast_evalYPdlvar_mod(dlvar_);
  T3 = (P)YevalSast_evalYPdlvar_nam(dlvar_);
  T1 = (P)YevalSast_evalYPlookup_binding(T2,T3);
  T0 = (P)YevalSast_evalYPbinding_bound_ofQ(T1);
  return T0;
}

INLINE P YevalSast_evalYPbinding_value_of(P binding_) {
  P x_1494F3172;
  P x_1493F3171;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
DEFCREGS();
  T9 = XCALL1(1,VARREF(YevalSastYbinding_kind),binding_);
  x_1493F3171 = T9;
  x_1494F3172 = VARREF(YgooSmacrosYEE);
  T1 = XCALL2(1,x_1494F3172,x_1493F3171,LITREF(lit_114));
  if (T1 != YPfalse) {
    T3 = XCALL1(1,VARREF(YevalSastYbinding_locative),binding_);
    T2 = XCALL1(1,VARREF(YevalSast_evalYenv_runtime_value),T3);
    T0 = T2;
  } else {
    T5 = XCALL2(1,x_1494F3172,x_1493F3171,LITREF(lit_115));
    if (T5 != YPfalse) {
      T7 = XCALL1(1,VARREF(YevalSastYbinding_locative),binding_);
      T6 = XCALL1(1,VARREF(YevalSast_evalYenv_dynamic_value),T7);
      T4 = T6;
    } else {
      T8 = XCALL1(1,VARREF(YevalSast_evalYenv_global_binding_value),binding_);
      T4 = T8;
    }
    T0 = T4;
  }
  return T0;
}

P YevalSast_evalYPbinding_value(P dlvar_) {
  P T0,T1;
DEFCREGS();
  T1 = (P)YevalSast_evalYPdlvar_binding(dlvar_);
  T0 = (P)YevalSast_evalYPbinding_value_of(T1);
  return T0;
}

INLINE P YevalSast_evalYPbinding_value_of_setter(P val_,P binding_) {
  P x_1496F3174;
  P x_1495F3173;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
DEFCREGS();
  T9 = XCALL1(1,VARREF(YevalSastYbinding_kind),binding_);
  x_1495F3173 = T9;
  x_1496F3174 = VARREF(YgooSmacrosYEE);
  T1 = XCALL2(0,x_1496F3174,x_1495F3173,LITREF(lit_114));
  if (T1 != YPfalse) {
    T3 = XCALL1(1,VARREF(YevalSastYbinding_locative),binding_);
    T2 = XCALL2(1,VARREF(YevalSast_evalYenv_runtime_value_setter),val_,T3);
    T0 = T2;
  } else {
    T5 = XCALL2(0,x_1496F3174,x_1495F3173,LITREF(lit_115));
    if (T5 != YPfalse) {
      T7 = XCALL1(1,VARREF(YevalSastYbinding_locative),binding_);
      T6 = XCALL2(1,VARREF(YevalSast_evalYenv_dynamic_value_setter),val_,T7);
      T4 = T6;
    } else {
      T8 = XCALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),val_,binding_);
      T4 = T8;
    }
    T0 = T4;
  }
  return T0;
}

P YevalSast_evalYPbinding_value_setter(P val_,P dlvar_) {
  P T0,T1;
DEFCREGS();
  T1 = (P)YevalSast_evalYPdlvar_binding(dlvar_);
  T0 = (P)YevalSast_evalYPbinding_value_of_setter(val_,T1);
  return T0;
}

INLINE P YevalSast_evalYPbinding_value_or_of(P b_,P default_) {
  P T0,T1,T2,T3;
DEFCREGS();
  if (b_ != YPfalse) {
    T2 = XCALL1(1,VARREF(YevalSastYbinding_info),b_);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T3 = (P)YevalSast_evalYPbinding_value_of(b_);
    T0 = T3;
  } else {
    T0 = default_;
  }
  return T0;
}

P YevalSast_evalYPbinding_value_or(P dlvar_,P default_) {
  P T0,T1,T2,T3;
DEFCREGS();
  T2 = (P)YevalSast_evalYPdlvar_mod(dlvar_);
  T3 = (P)YevalSast_evalYPdlvar_nam(dlvar_);
  T1 = (P)YevalSast_evalYPlookup_binding(T2,T3);
  T0 = (P)YevalSast_evalYPbinding_value_or_of(T1,default_);
  return T0;
}

P YevalSast_evalY___main_0___() {
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
  P T208,T209,T210,T211,T212,T213,T214,T215,T216,T217;
DEFCREGS();
  lit_0 = YPPsym((P)"env-global-binding-value");
  lit_1 = YPPlist(1,YPPsym((P)"b"));
  T0 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_global_binding_value_0 = YPmet(FUNCODEREF(fun_env_global_binding_value_0),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(17));
  T2 = VARREF_OR(YevalSast_evalYenv_global_binding_value,YPfalse);
  T3 = fun_env_global_binding_value_0;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T3);
  VARSET(YevalSast_evalYenv_global_binding_value,T1);
  lit_2 = YPPsym((P)"env-global-binding-value-setter");
  lit_3 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"b"));
  T4 = YPsig(LITREF(lit_3),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_global_binding_value_setter_1 = YPmet(FUNCODEREF(fun_env_global_binding_value_setter_1),LITREF(lit_2),T4,ENVNUL,PNUL,sloc(24));
  T6 = VARREF_OR(YevalSast_evalYenv_global_binding_value_setter,YPfalse);
  T7 = fun_env_global_binding_value_setter_1;
  T5 = XCALL2(1,VARREF(YPdefine_method),T6,T7);
  VARSET(YevalSast_evalYenv_global_binding_value_setter,T5);
  lit_4 = YPPsym((P)"env-global-binding-bound?");
  lit_5 = YPPlist(1,YPPsym((P)"b"));
  T8 = YPsig(LITREF(lit_5),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_env_global_binding_boundQ_2 = YPmet(FUNCODEREF(fun_env_global_binding_boundQ_2),LITREF(lit_4),T8,ENVNUL,PNUL,sloc(32));
  T10 = VARREF_OR(YevalSast_evalYenv_global_binding_boundQ,YPfalse);
  T11 = fun_env_global_binding_boundQ_2;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T11);
  VARSET(YevalSast_evalYenv_global_binding_boundQ,T9);
  lit_6 = YPPsym((P)"env-runtime-value");
  lit_7 = YPPlist(1,YPPsym((P)"x"));
  T12 = YPsig(LITREF(lit_7),YPPlist(1,VARREF(YLlocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_runtime_value_3 = YPmet(FUNCODEREF(fun_env_runtime_value_3),LITREF(lit_6),T12,ENVNUL,PNUL,sloc(38));
  T14 = VARREF_OR(YevalSast_evalYenv_runtime_value,YPfalse);
  T15 = fun_env_runtime_value_3;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T15);
  VARSET(YevalSast_evalYenv_runtime_value,T13);
  lit_8 = YPPsym((P)"env-runtime-value-setter");
  lit_9 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"x"));
  T16 = YPsig(LITREF(lit_9),YPPlist(2,VARREF(YLanyG),VARREF(YLlocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_runtime_value_setter_4 = YPmet(FUNCODEREF(fun_env_runtime_value_setter_4),LITREF(lit_8),T16,ENVNUL,PNUL,sloc(41));
  T18 = VARREF_OR(YevalSast_evalYenv_runtime_value_setter,YPfalse);
  T19 = fun_env_runtime_value_setter_4;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T19);
  VARSET(YevalSast_evalYenv_runtime_value_setter,T17);
  lit_10 = YPPsym((P)"env-dynamic-value");
  lit_11 = YPPlist(1,YPPsym((P)"x"));
  T20 = YPsig(LITREF(lit_11),YPPlist(1,VARREF(YLlocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_dynamic_value_5 = YPmet(FUNCODEREF(fun_env_dynamic_value_5),LITREF(lit_10),T20,ENVNUL,PNUL,sloc(46));
  T22 = VARREF_OR(YevalSast_evalYenv_dynamic_value,YPfalse);
  T23 = fun_env_dynamic_value_5;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T23);
  VARSET(YevalSast_evalYenv_dynamic_value,T21);
  lit_12 = YPPsym((P)"env-dynamic-value-setter");
  lit_13 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"x"));
  T24 = YPsig(LITREF(lit_13),YPPlist(2,VARREF(YLanyG),VARREF(YLlocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_dynamic_value_setter_6 = YPmet(FUNCODEREF(fun_env_dynamic_value_setter_6),LITREF(lit_12),T24,ENVNUL,PNUL,sloc(49));
  T26 = VARREF_OR(YevalSast_evalYenv_dynamic_value_setter,YPfalse);
  T27 = fun_env_dynamic_value_setter_6;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T27);
  VARSET(YevalSast_evalYenv_dynamic_value_setter,T25);
  lit_14 = YPPsym((P)"<loc-env>");
  T29 = (P)YPpair(VARREF(YLanyG),Ynil);
  T28 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_14),T29);
  VARSET(YevalSast_evalYLloc_envG,T28);
  lit_15 = YPPsym((P)"env-parent");
  lit_16 = YPPlist(1,YPPsym((P)"_x"));
  T30 = YPsig(LITREF(lit_16),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_parent_7 = YPmet(FUNCODEREF(fun_env_parent_7),LITREF(lit_15),T30,ENVNUL,PNUL,sloc(53));
  T32 = VARREF_OR(YevalSast_evalYenv_parent,YPfalse);
  T33 = fun_env_parent_7;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T33);
  VARSET(YevalSast_evalYenv_parent,T31);
  lit_17 = YPPsym((P)"env-parent-setter");
  lit_18 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T34 = YPsig(LITREF(lit_18),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_parent_setter_8 = YPmet(FUNCODEREF(fun_env_parent_setter_8),LITREF(lit_17),T34,ENVNUL,PNUL,sloc(53));
  T36 = VARREF_OR(YevalSast_evalYenv_parent_setter,YPfalse);
  T37 = fun_env_parent_setter_8;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T37);
  VARSET(YevalSast_evalYenv_parent_setter,T35);
  lit_19 = YPPlist(1,YPPsym((P)"_x"));
  T38 = YPsig(LITREF(lit_19),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T38,ENVNUL,PNUL,sloc(53));
  T39 = fun_9;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_parent),VARREF(YevalSast_evalYenv_parent_setter),VARREF(YLanyG),T39);
  lit_20 = YPPsym((P)"env-function");
  lit_21 = YPPlist(1,YPPsym((P)"_x"));
  T40 = YPsig(LITREF(lit_21),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_function_10 = YPmet(FUNCODEREF(fun_env_function_10),LITREF(lit_20),T40,ENVNUL,PNUL,sloc(54));
  T42 = VARREF_OR(YevalSast_evalYenv_function,YPfalse);
  T43 = fun_env_function_10;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T43);
  VARSET(YevalSast_evalYenv_function,T41);
  lit_22 = YPPsym((P)"env-function-setter");
  lit_23 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T44 = YPsig(LITREF(lit_23),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_function_setter_11 = YPmet(FUNCODEREF(fun_env_function_setter_11),LITREF(lit_22),T44,ENVNUL,PNUL,sloc(54));
  T46 = VARREF_OR(YevalSast_evalYenv_function_setter,YPfalse);
  T47 = fun_env_function_setter_11;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T47);
  VARSET(YevalSast_evalYenv_function_setter,T45);
  lit_24 = YPPlist(1,YPPsym((P)"_x"));
  T48 = YPsig(LITREF(lit_24),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T48,ENVNUL,PNUL,sloc(54));
  T49 = fun_12;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_function),VARREF(YevalSast_evalYenv_function_setter),VARREF(YLanyG),T49);
  lit_25 = YPPsym((P)"env-names");
  lit_26 = YPPlist(1,YPPsym((P)"_x"));
  T50 = YPsig(LITREF(lit_26),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_names_13 = YPmet(FUNCODEREF(fun_env_names_13),LITREF(lit_25),T50,ENVNUL,PNUL,sloc(55));
  T52 = VARREF_OR(YevalSast_evalYenv_names,YPfalse);
  T53 = fun_env_names_13;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T53);
  VARSET(YevalSast_evalYenv_names,T51);
  lit_27 = YPPsym((P)"env-names-setter");
  lit_28 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T54 = YPsig(LITREF(lit_28),YPPlist(2,VARREF(YLlstG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_names_setter_14 = YPmet(FUNCODEREF(fun_env_names_setter_14),LITREF(lit_27),T54,ENVNUL,PNUL,sloc(55));
  T56 = VARREF_OR(YevalSast_evalYenv_names_setter,YPfalse);
  T57 = fun_env_names_setter_14;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T57);
  VARSET(YevalSast_evalYenv_names_setter,T55);
  lit_29 = YPPlist(1,YPPsym((P)"_x"));
  T58 = YPsig(LITREF(lit_29),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T58,ENVNUL,PNUL,sloc(55));
  T59 = fun_15;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_names),VARREF(YevalSast_evalYenv_names_setter),VARREF(YLlstG),T59);
  lit_30 = YPPsym((P)"env-values");
  lit_31 = YPPlist(1,YPPsym((P)"_x"));
  T60 = YPsig(LITREF(lit_31),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_values_16 = YPmet(FUNCODEREF(fun_env_values_16),LITREF(lit_30),T60,ENVNUL,PNUL,sloc(56));
  T62 = VARREF_OR(YevalSast_evalYenv_values,YPfalse);
  T63 = fun_env_values_16;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T63);
  VARSET(YevalSast_evalYenv_values,T61);
  lit_32 = YPPsym((P)"env-values-setter");
  lit_33 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T64 = YPsig(LITREF(lit_33),YPPlist(2,VARREF(YLrepG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_values_setter_17 = YPmet(FUNCODEREF(fun_env_values_setter_17),LITREF(lit_32),T64,ENVNUL,PNUL,sloc(56));
  T66 = VARREF_OR(YevalSast_evalYenv_values_setter,YPfalse);
  T67 = fun_env_values_setter_17;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T67);
  VARSET(YevalSast_evalYenv_values_setter,T65);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_values),VARREF(YevalSast_evalYenv_values_setter),VARREF(YLrepG),VARREF(YPprop_unbound_error));
  T68 = XCALL1(1,VARREF(Ynew),VARREF(YevalSast_evalYLloc_envG));
  VARSET(YevalSast_evalYDnul_loc_env,T68);
  lit_34 = YPPsym((P)"env-frame!");
  lit_35 = YPPlist(4,YPPsym((P)"env"),YPPsym((P)"function"),YPPsym((P)"names"),YPPsym((P)"args"));
  T69 = YPsig(LITREF(lit_35),YPPlist(4,VARREF(YevalSast_evalYLloc_envG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)4),VARREF(YevalSast_evalYLloc_envG),Ynil);
  fun_env_frameX_18 = YPmet(FUNCODEREF(fun_env_frameX_18),LITREF(lit_34),T69,ENVNUL,PNUL,sloc(60));
  T71 = VARREF_OR(YevalSast_evalYenv_frameX,YPfalse);
  T72 = fun_env_frameX_18;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T72);
  VARSET(YevalSast_evalYenv_frameX,T70);
  lit_36 = YPPsym((P)"env-local-value");
  lit_37 = YPPlist(3,YPPsym((P)"env"),YPPsym((P)"i"),YPPsym((P)"j"));
  T73 = YPsig(LITREF(lit_37),YPPlist(3,VARREF(YevalSast_evalYLloc_envG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_local_value_19 = YPmet(FUNCODEREF(fun_env_local_value_19),LITREF(lit_36),T73,ENVNUL,PNUL,sloc(68));
  T75 = VARREF_OR(YevalSast_evalYenv_local_value,YPfalse);
  T76 = fun_env_local_value_19;
  T74 = XCALL2(1,VARREF(YPdefine_method),T75,T76);
  VARSET(YevalSast_evalYenv_local_value,T74);
  lit_38 = YPPsym((P)"env-local-value-setter");
  lit_39 = YPPlist(4,YPPsym((P)"v"),YPPsym((P)"env"),YPPsym((P)"i"),YPPsym((P)"j"));
  T77 = YPsig(LITREF(lit_39),YPPlist(4,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_env_local_value_setter_20 = YPmet(FUNCODEREF(fun_env_local_value_setter_20),LITREF(lit_38),T77,ENVNUL,PNUL,sloc(73));
  T79 = VARREF_OR(YevalSast_evalYenv_local_value_setter,YPfalse);
  T80 = fun_env_local_value_setter_20;
  T78 = XCALL2(1,VARREF(YPdefine_method),T79,T80);
  VARSET(YevalSast_evalYenv_local_value_setter,T78);
  lit_40 = YPPsym((P)"env-binding-value");
  lit_41 = YPPlist(2,YPPsym((P)"env"),YPPsym((P)"name"));
  T81 = YPsig(LITREF(lit_41),YPPlist(2,VARREF(YevalSast_evalYLloc_envG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_binding_value_21 = YPmet(FUNCODEREF(fun_env_binding_value_21),LITREF(lit_40),T81,ENVNUL,PNUL,sloc(79));
  T83 = VARREF_OR(YevalSast_evalYenv_binding_value,YPfalse);
  T84 = fun_env_binding_value_21;
  T82 = XCALL2(1,VARREF(YPdefine_method),T83,T84);
  VARSET(YevalSast_evalYenv_binding_value,T82);
  lit_42 = YPPsym((P)"env-binding-value-setter");
  lit_43 = YPPlist(3,YPPsym((P)"v"),YPPsym((P)"env"),YPPsym((P)"name"));
  T85 = YPsig(LITREF(lit_43),YPPlist(3,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG),VARREF(YLsymG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_binding_value_setter_22 = YPmet(FUNCODEREF(fun_env_binding_value_setter_22),LITREF(lit_42),T85,ENVNUL,PNUL,sloc(89));
  T87 = VARREF_OR(YevalSast_evalYenv_binding_value_setter,YPfalse);
  T88 = fun_env_binding_value_setter_22;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T88);
  VARSET(YevalSast_evalYenv_binding_value_setter,T86);
  lit_44 = YPPsym((P)"ast-evaluate");
  lit_45 = YPPlist(1,YPPsym((P)"e"));
  T89 = YPsig(LITREF(lit_45),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_evaluate_23 = YPmet(FUNCODEREF(fun_ast_evaluate_23),LITREF(lit_44),T89,ENVNUL,PNUL,sloc(101));
  T91 = VARREF_OR(YevalSastYast_evaluate,YPfalse);
  T92 = fun_ast_evaluate_23;
  T90 = XCALL2(1,VARREF(YPdefine_method),T91,T92);
  VARSET(YevalSastYast_evaluate,T90);
  lit_46 = YPPsym((P)"ast-eval");
  lit_47 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T94 = YPsig(LITREF(lit_47),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T93 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_46),T94,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSast_evalYast_eval,T93);
  lit_48 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T95 = YPsig(LITREF(lit_48),YPPlist(2,VARREF(YevalSastYLconstantG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_24 = YPmet(FUNCODEREF(fun_ast_eval_24),LITREF(lit_46),T95,ENVNUL,PNUL,sloc(106));
  T97 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T98 = fun_ast_eval_24;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T98);
  VARSET(YevalSast_evalYast_eval,T96);
  lit_49 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T99 = YPsig(LITREF(lit_49),YPPlist(2,VARREF(YevalSastYLraw_constantG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_25 = YPmet(FUNCODEREF(fun_ast_eval_25),LITREF(lit_46),T99,ENVNUL,PNUL,sloc(109));
  T101 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T102 = fun_ast_eval_25;
  T100 = XCALL2(1,VARREF(YPdefine_method),T101,T102);
  VARSET(YevalSast_evalYast_eval,T100);
  lit_50 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"ee"));
  T103 = YPsig(LITREF(lit_50),YPPlist(2,VARREF(YevalSastYLcompile_timeG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_26 = YPmet(FUNCODEREF(fun_ast_eval_26),LITREF(lit_46),T103,ENVNUL,PNUL,sloc(112));
  T105 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T106 = fun_ast_eval_26;
  T104 = XCALL2(1,VARREF(YPdefine_method),T105,T106);
  VARSET(YevalSast_evalYast_eval,T104);
  lit_51 = YPPsym((P)"ast-eval-specs");
  lit_52 = YPPlist(3,YPPsym((P)"specs"),YPPsym((P)"nary?"),YPPsym((P)"env"));
  T107 = YPsig(LITREF(lit_52),YPPlist(3,VARREF(YLlstG),VARREF(YLlogG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_specs_27 = YPmet(FUNCODEREF(fun_ast_eval_specs_27),LITREF(lit_51),T107,ENVNUL,PNUL,sloc(115));
  T109 = VARREF_OR(YevalSast_evalYast_eval_specs,YPfalse);
  T110 = fun_ast_eval_specs_27;
  T108 = XCALL2(1,VARREF(YPdefine_method),T109,T110);
  VARSET(YevalSast_evalYast_eval_specs,T108);
  lit_53 = YPPsym((P)"arrange-arguments");
  lit_54 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"nary?"),YPPsym((P)"arity"),YPPsym((P)"args"));
  T111 = YPsig(LITREF(lit_54),YPPlist(4,VARREF(YLanyG),VARREF(YLlogG),VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)4),VARREF(YLlstG),Ynil);
  YevalSast_evalYarrange_arguments = YPmet(FUNCODEREF(YevalSast_evalYarrange_arguments),LITREF(lit_53),T111,ENVNUL,PNUL,sloc(130));
  T112 = YevalSast_evalYarrange_arguments;
  VARSET(YevalSast_evalYarrange_arguments,T112);
  lit_55 = YPPlist(1,YPPsym((P)"exp"));
  lit_56 = YPPlist(1,YPPsym((P)"return"));
  lit_57 = YPPsym((P)"x-1485");
  lit_58 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_59 = YPPsym((P)"ifun");
  lit_60 = YPsb((P)"Match Pattern Failure");
  lit_61 = YPPsym((P)"fun");
  lit_62 = YPPsym((P)"arg-vector");
  lit_63 = YPPsym((P)"...");
  lit_64 = Ynil;
  lit_65 = YPPsym((P)"def");
  lit_66 = YPPsym((P)"args");
  lit_67 = YPPsym((P)"f");
  lit_68 = YPPsym((P)"nary?");
  lit_69 = YPPsym((P)"arity");
  lit_70 = YPPsym((P)"as");
  lit_71 = YPPsym((P)"<lst>");
  lit_72 = YPPsym((P)"nms");
  lit_73 = YPPsym((P)"%next-methods");
  lit_74 = YPPsym((P)"frame");
  lit_75 = YPPsym((P)"cat2");
  lit_76 = YPPsym((P)"lst");
  lit_77 = YPPsym((P)"quote");
  T115 = YPsig(LITREF(lit_58),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1485_29 = YPmet(FUNCODEREF(fun_x_1485_29),LITREF(lit_57),T115,ENVNUL,PNUL,YPfalse);
  T114 = YPsig(LITREF(lit_56),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T114,ENVNUL,PNUL,YPfalse);
  T113 = YPsig(LITREF(lit_55),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T113,ENVNUL,PNUL,YPfalse);
  T116 = fun_31;
  YPmacro(YPPsym((P)"eval/ast-eval"),YPPsym((P)"ifun"),T116);
  lit_78 = YPPsym((P)"as-fun-name");
  lit_79 = YPPlist(1,YPPsym((P)"x"));
  T117 = YPsig(LITREF(lit_79),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_32 = YPmet(FUNCODEREF(fun_as_fun_name_32),LITREF(lit_78),T117,ENVNUL,PNUL,sloc(150));
  T119 = VARREF_OR(YevalSast_evalYas_fun_name,YPfalse);
  T120 = fun_as_fun_name_32;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T120);
  VARSET(YevalSast_evalYas_fun_name,T118);
  lit_80 = YPPlist(1,YPPsym((P)"x"));
  T121 = YPsig(LITREF(lit_80),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_33 = YPmet(FUNCODEREF(fun_as_fun_name_33),LITREF(lit_78),T121,ENVNUL,PNUL,sloc(152));
  T123 = VARREF_OR(YevalSast_evalYas_fun_name,YPfalse);
  T124 = fun_as_fun_name_33;
  T122 = XCALL2(1,VARREF(YPdefine_method),T123,T124);
  VARSET(YevalSast_evalYas_fun_name,T122);
  lit_81 = YPPlist(1,YPPsym((P)"x"));
  T125 = YPsig(LITREF(lit_81),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_34 = YPmet(FUNCODEREF(fun_as_fun_name_34),LITREF(lit_78),T125,ENVNUL,PNUL,sloc(154));
  T127 = VARREF_OR(YevalSast_evalYas_fun_name,YPfalse);
  T128 = fun_as_fun_name_34;
  T126 = XCALL2(1,VARREF(YPdefine_method),T127,T128);
  VARSET(YevalSast_evalYas_fun_name,T126);
  lit_82 = YPPlist(1,YPPsym((P)"x"));
  T129 = YPsig(LITREF(lit_82),YPPlist(1,VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_35 = YPmet(FUNCODEREF(fun_as_fun_name_35),LITREF(lit_78),T129,ENVNUL,PNUL,sloc(156));
  T131 = VARREF_OR(YevalSast_evalYas_fun_name,YPfalse);
  T132 = fun_as_fun_name_35;
  T130 = XCALL2(1,VARREF(YPdefine_method),T131,T132);
  VARSET(YevalSast_evalYas_fun_name,T130);
  lit_83 = YPPlist(1,YPPsym((P)"x"));
  T133 = YPsig(LITREF(lit_83),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_as_fun_name_36 = YPmet(FUNCODEREF(fun_as_fun_name_36),LITREF(lit_78),T133,ENVNUL,PNUL,sloc(158));
  T135 = VARREF_OR(YevalSast_evalYas_fun_name,YPfalse);
  T136 = fun_as_fun_name_36;
  T134 = XCALL2(1,VARREF(YPdefine_method),T135,T136);
  VARSET(YevalSast_evalYas_fun_name,T134);
  lit_84 = YPPlist(1,YPPsym((P)"x"));
  T137 = YPsig(LITREF(lit_84),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_37 = YPmet(FUNCODEREF(fun_as_fun_name_37),LITREF(lit_78),T137,ENVNUL,PNUL,sloc(160));
  T139 = VARREF_OR(YevalSast_evalYas_fun_name,YPfalse);
  T140 = fun_as_fun_name_37;
  T138 = XCALL2(1,VARREF(YPdefine_method),T139,T140);
  VARSET(YevalSast_evalYas_fun_name,T138);
  lit_85 = YPPsym((P)"export-goo-method");
  lit_86 = YPPlist(7,YPPsym((P)"f"),YPPsym((P)"names"),YPPsym((P)"specs"),YPPsym((P)"nary?"),YPPsym((P)"value"),YPPsym((P)"body"),YPPsym((P)"env"));
  lit_87 = YPPlist(1,YPPsym((P)"arg-vector"));
  T142 = YPsig(LITREF(lit_87),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T142,ENVNUL,PNUL,sloc(165));
  T141 = YPsig(LITREF(lit_86),YPPlist(7,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)7),VARREF(YLanyG),Ynil);
  fun_export_goo_method_39 = YPmet(FUNCODEREF(fun_export_goo_method_39),LITREF(lit_85),T141,ENVNUL,PNUL,sloc(163));
  T144 = VARREF_OR(YevalSast_evalYexport_goo_method,YPfalse);
  T145 = fun_export_goo_method_39;
  T143 = XCALL2(1,VARREF(YPdefine_method),T144,T145);
  VARSET(YevalSast_evalYexport_goo_method,T143);
  lit_88 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_89 = YPPlist(1,YPPsym((P)"env"));
  T147 = YPsig(LITREF(lit_89),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T147,ENVNUL,PNUL,sloc(179));
  T146 = YPsig(LITREF(lit_88),YPPlist(2,VARREF(YevalSastYLast_methodG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_41 = YPmet(FUNCODEREF(fun_ast_eval_41),LITREF(lit_46),T146,ENVNUL,PNUL,sloc(177));
  T149 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T150 = fun_ast_eval_41;
  T148 = XCALL2(1,VARREF(YPdefine_method),T149,T150);
  VARSET(YevalSast_evalYast_eval,T148);
  lit_90 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T151 = YPsig(LITREF(lit_90),YPPlist(2,VARREF(YevalSastYLast_genericG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_42 = YPmet(FUNCODEREF(fun_ast_eval_42),LITREF(lit_46),T151,ENVNUL,PNUL,sloc(189));
  T153 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T154 = fun_ast_eval_42;
  T152 = XCALL2(1,VARREF(YPdefine_method),T153,T154);
  VARSET(YevalSast_evalYast_eval,T152);
  lit_91 = YPPsym((P)"env-local-reference-value");
  lit_92 = YPPlist(2,YPPsym((P)"env"),YPPsym((P)"ref"));
  T155 = YPsig(LITREF(lit_92),YPPlist(2,VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_local_reference_value_43 = YPmet(FUNCODEREF(fun_env_local_reference_value_43),LITREF(lit_91),T155,ENVNUL,PNUL,sloc(196));
  T157 = VARREF_OR(YevalSast_evalYenv_local_reference_value,YPfalse);
  T158 = fun_env_local_reference_value_43;
  T156 = XCALL2(1,VARREF(YPdefine_method),T157,T158);
  VARSET(YevalSast_evalYenv_local_reference_value,T156);
  lit_93 = YPPsym((P)"env-local-reference-value-setter");
  lit_94 = YPPlist(3,YPPsym((P)"val"),YPPsym((P)"env"),YPPsym((P)"ref"));
  T159 = YPsig(LITREF(lit_94),YPPlist(3,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_local_reference_value_setter_44 = YPmet(FUNCODEREF(fun_env_local_reference_value_setter_44),LITREF(lit_93),T159,ENVNUL,PNUL,sloc(200));
  T161 = VARREF_OR(YevalSast_evalYenv_local_reference_value_setter,YPfalse);
  T162 = fun_env_local_reference_value_setter_44;
  T160 = XCALL2(1,VARREF(YPdefine_method),T161,T162);
  VARSET(YevalSast_evalYenv_local_reference_value_setter,T160);
  lit_95 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T163 = YPsig(LITREF(lit_95),YPPlist(2,VARREF(YevalSastYLstatic_module_binding_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_45 = YPmet(FUNCODEREF(fun_ast_eval_45),LITREF(lit_46),T163,ENVNUL,PNUL,sloc(205));
  T165 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T166 = fun_ast_eval_45;
  T164 = XCALL2(1,VARREF(YPdefine_method),T165,T166);
  VARSET(YevalSast_evalYast_eval,T164);
  lit_96 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T167 = YPsig(LITREF(lit_96),YPPlist(2,VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_46 = YPmet(FUNCODEREF(fun_ast_eval_46),LITREF(lit_46),T167,ENVNUL,PNUL,sloc(207));
  T169 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T170 = fun_ast_eval_46;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T170);
  VARSET(YevalSast_evalYast_eval,T168);
  lit_97 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T171 = YPsig(LITREF(lit_97),YPPlist(2,VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_47 = YPmet(FUNCODEREF(fun_ast_eval_47),LITREF(lit_46),T171,ENVNUL,PNUL,sloc(210));
  T173 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T174 = fun_ast_eval_47;
  T172 = XCALL2(1,VARREF(YPdefine_method),T173,T174);
  VARSET(YevalSast_evalYast_eval,T172);
  lit_98 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T175 = YPsig(LITREF(lit_98),YPPlist(2,VARREF(YevalSastYLdynamic_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_48 = YPmet(FUNCODEREF(fun_ast_eval_48),LITREF(lit_46),T175,ENVNUL,PNUL,sloc(213));
  T177 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T178 = fun_ast_eval_48;
  T176 = XCALL2(1,VARREF(YPdefine_method),T177,T178);
  VARSET(YevalSast_evalYast_eval,T176);
  lit_99 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T179 = YPsig(LITREF(lit_99),YPPlist(2,VARREF(YevalSastYLruntime_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_49 = YPmet(FUNCODEREF(fun_ast_eval_49),LITREF(lit_46),T179,ENVNUL,PNUL,sloc(216));
  T181 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T182 = fun_ast_eval_49;
  T180 = XCALL2(1,VARREF(YPdefine_method),T181,T182);
  VARSET(YevalSast_evalYast_eval,T180);
  lit_100 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T183 = YPsig(LITREF(lit_100),YPPlist(2,VARREF(YevalSastYLboundQG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_50 = YPmet(FUNCODEREF(fun_ast_eval_50),LITREF(lit_46),T183,ENVNUL,PNUL,sloc(219));
  T185 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T186 = fun_ast_eval_50;
  T184 = XCALL2(1,VARREF(YPdefine_method),T185,T186);
  VARSET(YevalSast_evalYast_eval,T184);
  lit_101 = YPPsym((P)"env-global-binding-value-or");
  lit_102 = YPPlist(3,YPPsym((P)"b"),YPPsym((P)"default"),YPPsym((P)"env"));
  T187 = YPsig(LITREF(lit_102),YPPlist(3,VARREF(YevalSastYLmodule_bindingG),VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_global_binding_value_or_51 = YPmet(FUNCODEREF(fun_env_global_binding_value_or_51),LITREF(lit_101),T187,ENVNUL,PNUL,sloc(222));
  T189 = VARREF_OR(YevalSast_evalYenv_global_binding_value_or,YPfalse);
  T190 = fun_env_global_binding_value_or_51;
  T188 = XCALL2(1,VARREF(YPdefine_method),T189,T190);
  VARSET(YevalSast_evalYenv_global_binding_value_or,T188);
  lit_103 = YPPsym((P)"ast-eval-bound?");
  lit_104 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"binding"),YPPsym((P)"env"));
  lit_105 = YPPsym((P)"global");
  T191 = YPsig(LITREF(lit_104),YPPlist(3,VARREF(YevalSastYLboundQG),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_boundQ_52 = YPmet(FUNCODEREF(fun_ast_eval_boundQ_52),LITREF(lit_103),T191,ENVNUL,PNUL,sloc(227));
  T193 = VARREF_OR(YevalSast_evalYast_eval_boundQ,YPfalse);
  T194 = fun_ast_eval_boundQ_52;
  T192 = XCALL2(1,VARREF(YPdefine_method),T193,T194);
  VARSET(YevalSast_evalYast_eval_boundQ,T192);
  lit_106 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"binding"),YPPsym((P)"env"));
  T195 = YPsig(LITREF(lit_106),YPPlist(3,VARREF(YevalSastYLboundQG),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_boundQ_53 = YPmet(FUNCODEREF(fun_ast_eval_boundQ_53),LITREF(lit_103),T195,ENVNUL,PNUL,sloc(232));
  T197 = VARREF_OR(YevalSast_evalYast_eval_boundQ,YPfalse);
  T198 = fun_ast_eval_boundQ_53;
  T196 = XCALL2(1,VARREF(YPdefine_method),T197,T198);
  VARSET(YevalSast_evalYast_eval_boundQ,T196);
  lit_107 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T199 = YPsig(LITREF(lit_107),YPPlist(2,VARREF(YevalSastYLglobal_assignmentG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_54 = YPmet(FUNCODEREF(fun_ast_eval_54),LITREF(lit_46),T199,ENVNUL,PNUL,sloc(235));
  T201 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T202 = fun_ast_eval_54;
  T200 = XCALL2(1,VARREF(YPdefine_method),T201,T202);
  VARSET(YevalSast_evalYast_eval,T200);
  lit_108 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T203 = YPsig(LITREF(lit_108),YPPlist(2,VARREF(YevalSastYLast_macro_definitionG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_55 = YPmet(FUNCODEREF(fun_ast_eval_55),LITREF(lit_46),T203,ENVNUL,PNUL,sloc(239));
  T205 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T206 = fun_ast_eval_55;
  T204 = XCALL2(1,VARREF(YPdefine_method),T205,T206);
  VARSET(YevalSast_evalYast_eval,T204);
  lit_109 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T207 = YPsig(LITREF(lit_109),YPPlist(2,VARREF(YevalSastYLruntime_assignmentG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_56 = YPmet(FUNCODEREF(fun_ast_eval_56),LITREF(lit_46),T207,ENVNUL,PNUL,sloc(242));
  T209 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T210 = fun_ast_eval_56;
  T208 = XCALL2(1,VARREF(YPdefine_method),T209,T210);
  VARSET(YevalSast_evalYast_eval,T208);
  lit_110 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T213 = YPsig(LITREF(lit_110),YPPlist(2,VARREF(YevalSastYLdynamic_assignmentG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T212 = fun_ast_eval_57 = YPmet(FUNCODEREF(fun_ast_eval_57),LITREF(lit_46),T213,ENVNUL,PNUL,sloc(246));
  T216 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T217 = fun_ast_eval_57;
  T215 = XCALL2(1,VARREF(YPdefine_method),T216,T217);
  T214 = VARSET(YevalSast_evalYast_eval,T215);
  T211 = T214;
  return T211;
}

P YevalSast_evalY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69;
DEFCREGS();
  lit_111 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T0 = YPsig(LITREF(lit_111),YPPlist(2,VARREF(YevalSastYLlocal_assignmentG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_58 = YPmet(FUNCODEREF(fun_ast_eval_58),LITREF(lit_46),T0,ENVNUL,PNUL,sloc(250));
  T2 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T3 = fun_ast_eval_58;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T3);
  VARSET(YevalSast_evalYast_eval,T1);
  lit_112 = YPPsym((P)"env-define-binding!");
  lit_113 = YPPlist(2,YPPsym((P)"b"),YPPsym((P)"v"));
  lit_114 = YPPsym((P)"runtime");
  lit_115 = YPPsym((P)"dynamic");
  lit_116 = YPsb((P)"Defining invalid binding kind %=");
  T4 = YPsig(LITREF(lit_113),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_define_bindingX_59 = YPmet(FUNCODEREF(fun_env_define_bindingX_59),LITREF(lit_112),T4,ENVNUL,PNUL,sloc(254));
  T6 = VARREF_OR(YevalSast_evalYenv_define_bindingX,YPfalse);
  T7 = fun_env_define_bindingX_59;
  T5 = XCALL2(1,VARREF(YPdefine_method),T6,T7);
  VARSET(YevalSast_evalYenv_define_bindingX,T5);
  lit_117 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T8 = YPsig(LITREF(lit_117),YPPlist(2,VARREF(YevalSastYLdefinitionG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_60 = YPmet(FUNCODEREF(fun_ast_eval_60),LITREF(lit_46),T8,ENVNUL,PNUL,sloc(263));
  T10 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T11 = fun_ast_eval_60;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T11);
  VARSET(YevalSast_evalYast_eval,T9);
  lit_118 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T12 = YPsig(LITREF(lit_118),YPPlist(2,VARREF(YevalSastYLalternativeG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_61 = YPmet(FUNCODEREF(fun_ast_eval_61),LITREF(lit_46),T12,ENVNUL,PNUL,sloc(283));
  T14 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T15 = fun_ast_eval_61;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T15);
  VARSET(YevalSast_evalYast_eval,T13);
  lit_119 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_120 = YPPlist(1,YPPsym((P)"return"));
  lit_121 = YPPlist(1,YPPsym((P)"continue"));
  T18 = YPsig(LITREF(lit_121),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_62 = YPmet(FUNCODEREF(fun_62),YPfalse,T18,ENVNUL,PNUL,sloc(291));
  T17 = YPsig(LITREF(lit_120),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPmet(FUNCODEREF(fun_63),YPfalse,T17,ENVNUL,PNUL,sloc(289));
  T16 = YPsig(LITREF(lit_119),YPPlist(2,VARREF(YevalSastYLloopG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_64 = YPmet(FUNCODEREF(fun_ast_eval_64),LITREF(lit_46),T16,ENVNUL,PNUL,sloc(288));
  T20 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T21 = fun_ast_eval_64;
  T19 = XCALL2(1,VARREF(YPdefine_method),T20,T21);
  VARSET(YevalSast_evalYast_eval,T19);
  lit_122 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T22 = YPsig(LITREF(lit_122),YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_65 = YPmet(FUNCODEREF(fun_ast_eval_65),LITREF(lit_46),T22,ENVNUL,PNUL,sloc(296));
  T24 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T25 = fun_ast_eval_65;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T25);
  VARSET(YevalSast_evalYast_eval,T23);
  lit_123 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T26 = YPsig(LITREF(lit_123),YPPlist(2,VARREF(YevalSastYLargumentsG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_66 = YPmet(FUNCODEREF(fun_ast_eval_66),LITREF(lit_46),T26,ENVNUL,PNUL,sloc(304));
  T28 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T29 = fun_ast_eval_66;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T29);
  VARSET(YevalSast_evalYast_eval,T27);
  lit_124 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T30 = YPsig(LITREF(lit_124),YPPlist(2,VARREF(YevalSastYLregular_applicationG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_67 = YPmet(FUNCODEREF(fun_ast_eval_67),LITREF(lit_46),T30,ENVNUL,PNUL,sloc(310));
  T32 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T33 = fun_ast_eval_67;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T33);
  VARSET(YevalSast_evalYast_eval,T31);
  lit_125 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T34 = YPsig(LITREF(lit_125),YPPlist(2,VARREF(YevalSastYLloop_applicationG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_68 = YPmet(FUNCODEREF(fun_ast_eval_68),LITREF(lit_46),T34,ENVNUL,PNUL,sloc(315));
  T36 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T37 = fun_ast_eval_68;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T37);
  VARSET(YevalSast_evalYast_eval,T35);
  lit_126 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T38 = YPsig(LITREF(lit_126),YPPlist(2,VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_69 = YPmet(FUNCODEREF(fun_ast_eval_69),LITREF(lit_46),T38,ENVNUL,PNUL,sloc(322));
  T40 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T41 = fun_ast_eval_69;
  T39 = XCALL2(1,VARREF(YPdefine_method),T40,T41);
  VARSET(YevalSast_evalYast_eval,T39);
  lit_127 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T42 = YPsig(LITREF(lit_127),YPPlist(2,VARREF(YevalSastYLfix_letG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_70 = YPmet(FUNCODEREF(fun_ast_eval_70),LITREF(lit_46),T42,ENVNUL,PNUL,sloc(331));
  T44 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T45 = fun_ast_eval_70;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T45);
  VARSET(YevalSast_evalYast_eval,T43);
  lit_128 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_129 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"value"));
  T47 = YPsig(LITREF(lit_129),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T47,ENVNUL,PNUL,sloc(341));
  T46 = YPsig(LITREF(lit_128),YPPlist(2,VARREF(YevalSastYLlocalsG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_72 = YPmet(FUNCODEREF(fun_ast_eval_72),LITREF(lit_46),T46,ENVNUL,PNUL,sloc(336));
  T49 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T50 = fun_ast_eval_72;
  T48 = XCALL2(1,VARREF(YPdefine_method),T49,T50);
  VARSET(YevalSast_evalYast_eval,T48);
  lit_130 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_131 = YPPlist(1,YPPsym((P)"return"));
  lit_132 = YPPlist(1,YPPsym((P)"env"));
  lit_133 = YPPsym((P)"x");
  T53 = YPsig(LITREF(lit_132),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T53,ENVNUL,PNUL,sloc(354));
  T52 = YPsig(LITREF(lit_131),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_74 = YPmet(FUNCODEREF(fun_74),YPfalse,T52,ENVNUL,PNUL,sloc(353));
  T51 = YPsig(LITREF(lit_130),YPPlist(2,VARREF(YevalSastYLbind_exitG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_75 = YPmet(FUNCODEREF(fun_ast_eval_75),LITREF(lit_46),T51,ENVNUL,PNUL,sloc(352));
  T55 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T56 = fun_ast_eval_75;
  T54 = XCALL2(1,VARREF(YPdefine_method),T55,T56);
  VARSET(YevalSast_evalYast_eval,T54);
  lit_134 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_135 = Ynil;
  T59 = YPsig(LITREF(lit_135),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T59,ENVNUL,PNUL,sloc(359));
  T58 = YPsig(LITREF(lit_135),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_77 = YPmet(FUNCODEREF(fun_77),YPfalse,T58,ENVNUL,PNUL,sloc(360));
  T57 = YPsig(LITREF(lit_134),YPPlist(2,VARREF(YevalSastYLunwind_protectG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_78 = YPmet(FUNCODEREF(fun_ast_eval_78),LITREF(lit_46),T57,ENVNUL,PNUL,sloc(358));
  T61 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T62 = fun_ast_eval_78;
  T60 = XCALL2(1,VARREF(YPdefine_method),T61,T62);
  VARSET(YevalSast_evalYast_eval,T60);
  lit_136 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T63 = YPsig(LITREF(lit_136),YPPlist(2,VARREF(YevalSastYLmonitorG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_79 = YPmet(FUNCODEREF(fun_ast_eval_79),LITREF(lit_46),T63,ENVNUL,PNUL,sloc(362));
  T65 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T66 = fun_ast_eval_79;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T66);
  VARSET(YevalSast_evalYast_eval,T64);
  lit_137 = YPPsym((P)"init-environment-for-eval");
  lit_138 = YPPlist(1,YPPsym((P)"env"));
  lit_139 = YPPsym((P)"predefined");
  lit_140 = YPPsym((P)"%pair");
  T67 = YPsig(LITREF(lit_138),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinit_environment_for_eval = YPmet(FUNCODEREF(YevalSastYinit_environment_for_eval),LITREF(lit_137),T67,ENVNUL,PNUL,sloc(377));
  T68 = YevalSastYinit_environment_for_eval;
  VARSET(YevalSastYinit_environment_for_eval,T68);
  T69 = YPfalse;
  return T69;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSmag;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSruntime},
  {&module_info_goo},
  {&module_info_gooScolsSrep},
  {&module_info_evalSast},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"%vpc", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"binding-info-setter", &module_info_evalSast, NULL},
  {"module-uses-c-files", &module_info_evalSast, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"$goo-boot-module-name", &module_info_evalSast, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"bind-exit-light?", &module_info_evalSast, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"objectify-with-subtransaction", &module_info_evalSast, NULL},
  {"function-source-setter", &module_info_evalSast, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
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
  {"%vnm", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"function-temporaries", &module_info_evalSast, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"rep-fill!", &module_info_gooScolsSrep, NULL},
  {"function-ref-count", &module_info_evalSast, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"fix-let-body-setter", &module_info_evalSast, NULL},
  {"module-mangled-name-setter", &module_info_evalSast, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"set-module-environments", &module_info_evalSast, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"module-target-environment", &module_info_evalSast, NULL},
  {"signature-value", &module_info_evalSast, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"signature-arity-setter", &module_info_evalSast, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"<assignment>", &module_info_evalSast, NULL},
  {"fix-let-bindings-setter", &module_info_evalSast, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"binding-inferred-type", &module_info_evalSast, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"<static-global-environment>", &module_info_evalSast, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"<ast-primitive-definition>", &module_info_evalSast, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"binding-mangled-name", &module_info_evalSast, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"<application>", &module_info_evalSast, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"module-loader-module-type", &module_info_evalSast, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"function-binding", &module_info_evalSast, NULL},
  {"do-module-loader-modules", &module_info_evalSast, NULL},
  {"<module-binding>", &module_info_evalSast, NULL},
  {"<functions>", &module_info_evalSast, NULL},
  {"reference-called-function?", &module_info_evalSast, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"process-closed-application", &module_info_evalSast, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"binding-dynamic-extent?", &module_info_evalSast, NULL},
  {"<runtime-reference>", &module_info_evalSast, NULL},
  {"binding-value", &module_info_evalSast, NULL},
  {"assignment-form", &module_info_evalSast, NULL},
  {"binding-name", &module_info_evalSast, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"binding-mutable?", &module_info_evalSast, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"locals-body-setter", &module_info_evalSast, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"rep-len", &module_info_gooScolsSrep, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"<loop-application>", &module_info_evalSast, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"fix-let-arguments-setter", &module_info_evalSast, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"environment-module", &module_info_evalSast, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"rep-elt-setter", &module_info_gooScolsSrep, NULL},
  {"monitor-test", &module_info_evalSast, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"application-arguments", &module_info_evalSast, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"ast-walk", &module_info_evalSast, NULL},
  {"fix-let-types-setter", &module_info_evalSast, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"<low-let>", &module_info_evalSast, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"<binding>", &module_info_evalSast, NULL},
  {"<bind-exit>", &module_info_evalSast, NULL},
  {"<module-binding-reference>", &module_info_evalSast, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"init-environment-for-eval", &module_info_evalSast, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"function-nary?", &module_info_evalSast, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"<local-assignment>", &module_info_evalSast, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"rep-nul", &module_info_gooScolsSrep, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
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
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"as-lst", &module_info_evalSast, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<arguments>", &module_info_evalSast, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"<ast-primitive>", &module_info_evalSast, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"function-registers-setter", &module_info_evalSast, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"runtime-environment", &module_info_evalSast, NULL},
  {"binding-info", &module_info_evalSast, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"function-body-setter", &module_info_evalSast, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"binding-locative", &module_info_evalSast, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"<fab-list>", &module_info_evalSast, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"function-source", &module_info_evalSast, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSruntime, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"rcurry", &module_info_gooSruntime, NULL},
  {"do-named-static-global-bindings", &module_info_evalSast, NULL},
  {"init-ast", &module_info_evalSast, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"<dynamic-definition>", &module_info_evalSast, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"function-index-setter", &module_info_evalSast, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"signature-arity", &module_info_evalSast, NULL},
  {"binding-global-box", &module_info_evalSast, NULL},
  {"rep-into!", &module_info_gooScolsSrep, NULL},
  {"<fix-let>", &module_info_evalSast, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"fix-let-body", &module_info_evalSast, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"binding-locative-setter", &module_info_evalSast, NULL},
  {"*gensym-counter*", &module_info_gooSruntime, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"module-binding", &module_info_evalSast, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"app-filename", &module_info_gooSruntime, NULL},
  {"<module>", &module_info_evalSast, NULL},
  {"probe-module", &module_info_evalSast, NULL},
  {"module-mangled-name", &module_info_evalSast, NULL},
  {"application-tail?", &module_info_evalSast, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"binding-native-to?", &module_info_evalSast, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"fix-let-bindings", &module_info_evalSast, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"constant-index-setter", &module_info_evalSast, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"<constant>", &module_info_evalSast, NULL},
  {"<ast-macro-definition>", &module_info_evalSast, NULL},
  {"signature-specs-setter", &module_info_evalSast, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"objectify-signature", &module_info_evalSast, NULL},
  {"constant-index", &module_info_evalSast, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"loop-body", &module_info_evalSast, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"<sequential>", &module_info_evalSast, NULL},
  {"<static-module-binding-reference>", &module_info_evalSast, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"signature-bindings-setter", &module_info_evalSast, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"fix-let-arguments", &module_info_evalSast, NULL},
  {"<immediate-constant>", &module_info_evalSast, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"module-syntax-environment", &module_info_evalSast, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"fix-let-types", &module_info_evalSast, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"monitor-main-thunk", &module_info_evalSast, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"loc-val-setter", &module_info_gooSruntime, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"<dynamic-reference>", &module_info_evalSast, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"function-frame-len", &module_info_evalSast, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"application-binding", &module_info_evalSast, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"function-signature-setter", &module_info_evalSast, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"load-module", &module_info_evalSast, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"function-bindings", &module_info_evalSast, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"install-initial-bindings", &module_info_evalSast, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"<ast-method>", &module_info_evalSast, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"<regular-application>", &module_info_evalSast, NULL},
  {"rep-elt", &module_info_gooScolsSrep, NULL},
  {"signature-nary?", &module_info_evalSast, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"function-registers", &module_info_evalSast, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"<ast-function>", &module_info_evalSast, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"loop-bindings-setter", &module_info_evalSast, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"loc-val", &module_info_gooSruntime, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
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
  {"<log>", &module_info_gooSboot, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"find-binding", &module_info_evalSast, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"<ast-generic>", &module_info_evalSast, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"<local-reference>", &module_info_evalSast, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"fab-g2c-module", &module_info_evalSast, NULL},
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
  {"prop-init", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"loop-continue-setter", &module_info_evalSast, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"binding-index-setter", &module_info_evalSast, NULL},
  {"reference-frame-offset", &module_info_evalSast, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"reference-binding", &module_info_evalSast, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"report-undefined-global-bindings", &module_info_evalSast, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"module-name", &module_info_evalSast, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"loop-body-setter", &module_info_evalSast, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSast, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"<free-environment>", &module_info_evalSast, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"rep-fab", &module_info_gooScolsSrep, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"program-type", &module_info_evalSast, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"<definition>", &module_info_evalSast, NULL},
  {"program-register", &module_info_evalSast, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"<ast-signature>", &module_info_evalSast, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"<ast-embodied-function>", &module_info_evalSast, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"signature-specs", &module_info_evalSast, NULL},
  {"program-line", &module_info_evalSast, NULL},
  {"constant-value", &module_info_evalSast, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"environment-uses-modules", &module_info_evalSast, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"compose", &module_info_gooSruntime, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"compile-time-program", &module_info_evalSast, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"<runtime-assignment>", &module_info_evalSast, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"assignment-form-setter", &module_info_evalSast, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"signature-bindings", &module_info_evalSast, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"ast-walk!", &module_info_evalSast, NULL},
  {"<global-assignment>", &module_info_evalSast, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"assignment-binding", &module_info_evalSast, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"module-name-to-relpath", &module_info_evalSast, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"function-free-setter", &module_info_evalSast, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"<computed-program>", &module_info_evalSast, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"bound?-reference", &module_info_evalSast, NULL},
  {"bound?-default", &module_info_evalSast, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"zipped", &module_info_gooSruntime, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"signature-names", &module_info_evalSast, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"module-exports", &module_info_evalSast, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"<raw-constant>", &module_info_evalSast, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"<program>", &module_info_evalSast, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"<real-reference>", &module_info_evalSast, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"<global-reference>", &module_info_evalSast, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"binding-type-setter", &module_info_evalSast, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"function-signature", &module_info_evalSast, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"<alternative>", &module_info_evalSast, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"locals-bindings", &module_info_evalSast, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"binding-index", &module_info_evalSast, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"<loop>", &module_info_evalSast, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"binding-module", &module_info_evalSast, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"sequentialize", &module_info_evalSast, NULL},
  {"ast-evaluate", &module_info_evalSast, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"identity", &module_info_gooSruntime, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"<predefined-application>", &module_info_evalSast, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"alternative-condition", &module_info_evalSast, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"<macro-reference>", &module_info_evalSast, NULL},
  {"req-sig-specs", &module_info_evalSast, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"loop-bindings", &module_info_evalSast, NULL},
  {"<compile-time>", &module_info_evalSast, NULL},
  {"load-in", &module_info_evalSast, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"<reference>", &module_info_evalSast, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"<unwind-protect>", &module_info_evalSast, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"function-loop-setter", &module_info_evalSast, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"function-data-refs", &module_info_evalSast, NULL},
  {"application-known?-setter", &module_info_evalSast, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"binding-module-name", &module_info_evalSast, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"unwind-protect-protected-thunk", &module_info_evalSast, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"function-temporaries-setter", &module_info_evalSast, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"monitor-info", &module_info_evalSast, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"<monitor>", &module_info_evalSast, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"function-ref-count-setter", &module_info_evalSast, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
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
  {"loop-continue", &module_info_evalSast, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
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
  {"binding-kind", &module_info_evalSast, NULL},
  {"alternative-consequent", &module_info_evalSast, NULL},
  {"module-uses-c-libraries", &module_info_evalSast, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"monitor-type", &module_info_evalSast, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"application-loop", &module_info_evalSast, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"binding-mangled-name-setter", &module_info_evalSast, NULL},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, NULL},
  {"binding-type", &module_info_evalSast, NULL},
  {"free-environment", &module_info_evalSast, NULL},
  {"find-environment-module", &module_info_evalSast, NULL},
  {"ast-define-binding", &module_info_evalSast, NULL},
  {"binding-inferred-type-setter", &module_info_evalSast, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"reference-called-function?-setter", &module_info_evalSast, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"bind-exit-main-fun", &module_info_evalSast, NULL},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, NULL},
  {"binding-value-setter", &module_info_evalSast, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"program-register-setter", &module_info_evalSast, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"<magic-reference>", &module_info_evalSast, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {">", &module_info_gooSmag, NULL},
  {"locals-body", &module_info_evalSast, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"locals-functions-setter", &module_info_evalSast, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"<passive-program>", &module_info_evalSast, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"environment-bindings", &module_info_evalSast, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"reference-frame-number", &module_info_evalSast, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"locals-bindings-setter", &module_info_evalSast, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"function-free", &module_info_evalSast, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"unchecked-runtime-environment", &module_info_evalSast, NULL},
  {"<locals>", &module_info_evalSast, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"function-loop", &module_info_evalSast, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"function-debug-name", &module_info_evalSast, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"<local-binding>", &module_info_evalSast, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"module-mangled-string-name", &module_info_evalSast, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"locals-functions", &module_info_evalSast, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"assignment-reference", &module_info_evalSast, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"remove-modules-by-name!", &module_info_evalSast, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"env-object-name", &module_info_evalSast, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"function-body", &module_info_evalSast, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"binding-dotted?", &module_info_evalSast, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"%binding-value-of", PVAR, NULL},
  {"env-values", CVAR, &YevalSast_evalYenv_values},
  {"%dlvar-nam", PVAR, NULL},
  {"%binding-value-of-setter", PVAR, NULL},
  {"env-runtime-value", CVAR, &YevalSast_evalYenv_runtime_value},
  {"%binding-value", PVAR, NULL},
  {"ifun", PVAR, NULL},
  {"%binding-bound?", PVAR, NULL},
  {"env-global-binding-value-setter", CVAR, &YevalSast_evalYenv_global_binding_value_setter},
  {"env-local-reference-value-setter", CVAR, &YevalSast_evalYenv_local_reference_value_setter},
  {"env-function", CVAR, &YevalSast_evalYenv_function},
  {"env-frame!", CVAR, &YevalSast_evalYenv_frameX},
  {"ast-eval", CVAR, &YevalSast_evalYast_eval},
  {"env-local-reference-value", CVAR, &YevalSast_evalYenv_local_reference_value},
  {"%binding-value-or", PVAR, NULL},
  {"env-names-setter", CVAR, &YevalSast_evalYenv_names_setter},
  {"env-dynamic-value", CVAR, &YevalSast_evalYenv_dynamic_value},
  {"%dlvar-binding", PVAR, NULL},
  {"env-binding-value-setter", CVAR, &YevalSast_evalYenv_binding_value_setter},
  {"<loc-env>", CVAR, &YevalSast_evalYLloc_envG},
  {"export-goo-method", CVAR, &YevalSast_evalYexport_goo_method},
  {"env-define-binding!", CVAR, &YevalSast_evalYenv_define_bindingX},
  {"env-local-value", CVAR, &YevalSast_evalYenv_local_value},
  {"ast-eval-specs", CVAR, &YevalSast_evalYast_eval_specs},
  {"%dlvar-mod", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"env-parent", CVAR, &YevalSast_evalYenv_parent},
  {"env-values-setter", CVAR, &YevalSast_evalYenv_values_setter},
  {"$nul-loc-env", CVAR, &YevalSast_evalYDnul_loc_env},
  {"as-fun-name", CVAR, &YevalSast_evalYas_fun_name},
  {"%binding-bound-of?", PVAR, NULL},
  {"---main-1---", PVAR, NULL},
  {"%define-binding", PVAR, NULL},
  {"env-global-binding-bound?", CVAR, &YevalSast_evalYenv_global_binding_boundQ},
  {"%lookup-binding", PVAR, NULL},
  {"env-names", CVAR, &YevalSast_evalYenv_names},
  {"%ensure-binding", PVAR, NULL},
  {"%binding-value-or-of", PVAR, NULL},
  {"env-function-setter", CVAR, &YevalSast_evalYenv_function_setter},
  {"%binding-value-setter", PVAR, NULL},
  {"env-global-binding-value", CVAR, &YevalSast_evalYenv_global_binding_value},
  {"arrange-arguments", CVAR, &YevalSast_evalYarrange_arguments},
  {"env-runtime-value-setter", CVAR, &YevalSast_evalYenv_runtime_value_setter},
  {"env-dynamic-value-setter", CVAR, &YevalSast_evalYenv_dynamic_value_setter},
  {"%dlvar", PVAR, NULL},
  {"env-global-binding-value-or", CVAR, &YevalSast_evalYenv_global_binding_value_or},
  {"ast-eval-bound?", CVAR, &YevalSast_evalYast_eval_boundQ},
  {"env-local-value-setter", CVAR, &YevalSast_evalYenv_local_value_setter},
  {"env-binding-value", CVAR, &YevalSast_evalYenv_binding_value},
  {"%dlvar-setter", PVAR, NULL},
  {"env-parent-setter", CVAR, &YevalSast_evalYenv_parent_setter},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"%binding-value-of", NULL},
  {"%binding-value-of-setter", NULL},
  {"%binding-value", NULL},
  {"%binding-bound?", NULL},
  {"%binding-value-or", NULL},
  {"init-environment-for-eval", NULL},
  {"%binding-value-or-of", NULL},
  {"ast-evaluate", NULL},
  {"%binding-value-setter", NULL},
  {"%binding-bound-of?", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_evalSast_eval;
MODULE_INFO module_info_evalSast_eval = {
  "eval/ast-eval",
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
extern void load_module_goo (void);
extern void load_module_gooScolsSrep (void);
extern void load_module_evalSast (void);

/* EXPRESSION: */

extern void load_module_evalSast_eval (void);

void load_module_evalSast_eval (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSruntime();
  load_module_goo();
  load_module_gooScolsSrep();
  load_module_evalSast();

  (P)YevalSast_evalY___main_0___();
  (P)YevalSast_evalY___main_1___();

}

/* END OF GENERATED CODE. */
