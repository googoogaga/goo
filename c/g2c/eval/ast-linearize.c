/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/ast-linearize");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/ast-linearize */

EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
DEF(YevalSast_linearizeYallocate_register,"eval/ast-linearize","allocate-register");
DEF(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
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
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
DEF(YevalSast_linearizeYassoc_key_setter,"eval/ast-linearize","assoc-key-setter");
DEF(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSmathY_,"goo/math","-");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
DEF(YevalSast_linearizeYassoc,"eval/ast-linearize","assoc");
DEF(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YevalSastYfunction_ref_count,"eval/ast","function-ref-count");
DEF(YevalSast_linearizeYcollect_temporariesX,"eval/ast-linearize","collect-temporaries!");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
DEF(YevalSast_linearizeYadjoin_temporary_variablesX,"eval/ast-linearize","adjoin-temporary-variables!");
DEF(YevalSast_linearizeYprogram_bindings,"eval/ast-linearize","program-bindings");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
DEF(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
DEF(YevalSast_linearizeYLassocG,"eval/ast-linearize","<assoc>");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
DEF(YevalSast_linearizeYassoc_key,"eval/ast-linearize","assoc-key");
DEF(YevalSast_linearizeYassoc_value,"eval/ast-linearize","assoc-value");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
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
DEF(YevalSast_linearizeYform_definitions_setter,"eval/ast-linearize","form-definitions-setter");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YevalSastYboundQ_default,"eval/ast","bound?-default");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
DEF(YevalSast_linearizeYbox_reference_setter,"eval/ast-linearize","box-reference-setter");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
DEF(YevalSast_linearizeYprogram_bindings_setter,"eval/ast-linearize","program-bindings-setter");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
DEF(YevalSast_linearizeYanalyze_calls,"eval/ast-linearize","analyze-calls");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
DEF(YevalSast_linearizeYreopt_topX,"eval/ast-linearize","reopt-top!");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
DEF(YevalSast_linearizeYcollect_registersX,"eval/ast-linearize","collect-registers!");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
DEF(YevalSast_linearizeYprogram_definitions_setter,"eval/ast-linearize","program-definitions-setter");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YevalSastYLloop_applicationG,"eval/ast","<loop-application>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
DEF(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
DEF(YevalSast_linearizeYnew_renamed_binding,"eval/ast-linearize","new-renamed-binding");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
DEF(YevalSast_linearizeYprepend_renamings,"eval/ast-linearize","prepend-renamings");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
DEF(YevalSast_linearizeYreference_selfQ_setter,"eval/ast-linearize","reference-self?-setter");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YLcolG,"goo/boot","<col>");
DEF(YevalSast_linearizeYunconstrained_typeQ,"eval/ast-linearize","unconstrained-type?");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
DEF(YevalSast_linearizeYclosure_creation_free_setter,"eval/ast-linearize","closure-creation-free-setter");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
DEF(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
DEF(YevalSast_linearizeYreference_offset_setter,"eval/ast-linearize","reference-offset-setter");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YevalSastYmodule_uses_c_includes,"eval/ast","module-uses-c-includes");
DEF(YevalSast_linearizeYdo_do_call_analysisX,"eval/ast-linearize","do-do-call-analysis!");
DEF(YevalSast_linearizeYast_contains_funQ,"eval/ast-linearize","ast-contains-fun?");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
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
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
DEF(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yfun_src,"goo/boot","fun-src");
DEF(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
DEF(YevalSast_linearizeYbox_form_setter,"eval/ast-linearize","box-form-setter");
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
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YevalSastYmodule_uses_c_libraries,"eval/ast","module-uses-c-libraries");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
DEF(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yhead,"goo/boot","head");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSmacrosYdo,"goo/macros","do");
DEF(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YevalSastYloop_body,"eval/ast","loop-body");
DEF(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
DEF(YevalSast_linearizeYform_quotations_setter,"eval/ast-linearize","form-quotations-setter");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YPrnul,"goo/boot","%rnul");
DEF(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YevalSastYloop_bindings_setter,"eval/ast","loop-bindings-setter");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
DEF(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
DEF(YevalSast_linearizeYassoc_value_setter,"eval/ast-linearize","assoc-value-setter");
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
DEF(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
DEF(YevalSast_linearizeYboxify_mutable_bindings,"eval/ast-linearize","boxify-mutable-bindings");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
DEF(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(YgooSmathYK,"goo/math","|");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Ynul,"goo/boot","nul");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
DEF(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YLchrG,"goo/boot","<chr>");
DEF(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YevalSastYfunction_loop,"eval/ast","function-loop");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
DEF(YevalSast_linearizeYsplit_program,"eval/ast-linearize","split-program");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
DEF(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yas_error,"goo/boot","as-error");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
DEF(YevalSast_linearizeYform_program_setter,"eval/ast-linearize","form-program-setter");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
DEF(YevalSast_linearizeYLflattened_programG,"eval/ast-linearize","<flattened-program>");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYT,"goo/math","*");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YtT,"goo/boot","t*");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
DEF(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
DEF(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
EXT(YevalSastYloop_continue_setter,"eval/ast","loop-continue-setter");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YevalSastYloop_body_setter,"eval/ast","loop-body-setter");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
DEF(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(Ynarity_error,"goo/boot","narity-error");
DEF(YevalSast_linearizeYextractX,"eval/ast-linearize","extract!");
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
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
DEF(YevalSast_linearizeYadjoin_free_bindingX,"eval/ast-linearize","adjoin-free-binding!");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
DEF(YevalSast_linearizeYas_top_level_forms,"eval/ast-linearize","as-top-level-forms");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
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
DEF(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
DYNDEF(YevalSast_linearizeYTrenaming_bindings_counterT,"eval/ast-linearize","*renaming-bindings-counter*");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmathYN,"goo/math","~");
DEF(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
DEF(YevalSast_linearizeYassocq,"eval/ast-linearize","assocq");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
DEF(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YevalSastYLloopG,"eval/ast","<loop>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmacrosYEE,"goo/macros","==");
DEF(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(YevalSastYloop_bindings,"eval/ast","loop-bindings");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(Ylst,"goo/boot","lst");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YevalSastYfunction_loop_setter,"eval/ast","function-loop-setter");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
DEF(YevalSast_linearizeYclosure_creation_index_setter,"eval/ast-linearize","closure-creation-index-setter");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YevalSastYfunction_ref_count_setter,"eval/ast","function-ref-count-setter");
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
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YgooSioSportYout,"goo/io/port","out");
DEF(YevalSast_linearizeYdo_call_analysisX,"eval/ast-linearize","do-call-analysis!");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YevalSastYapplication_loop,"eval/ast","application-loop");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YevalSastYbind_exit_lightQ,"eval/ast","bind-exit-light?");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YOisaQ,"goo/boot","@isa?");
DEF(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
DEF(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
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
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
DEF(YevalSast_linearizeYensure_loop,"eval/ast-linearize","ensure-loop");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYceilS,"goo/math","ceil/");
DEF(YevalSast_linearizeYlift_proceduresX,"eval/ast-linearize","lift-procedures!");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yfun_mets,"goo/boot","fun-mets");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(YevalSast_linearizeYprogram_form_setter,"eval/ast-linearize","program-form-setter");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
DEF(YevalSast_linearizeYprogram_quotations_setter,"eval/ast-linearize","program-quotations-setter");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(Yclass_of,"goo/boot","class-of");
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
DEF(YevalSast_linearizeYadjoin_definitionX,"eval/ast-linearize","adjoin-definition!");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLlstG,"goo/boot","<lst>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_145);
DEFLIT(lit_99);
DEFLIT(lit_71);
DEFLIT(lit_115);
DEFLIT(lit_36);
DEFLIT(lit_56);
DEFLIT(lit_140);
DEFLIT(lit_28);
DEFLIT(lit_93);
DEFLIT(lit_163);
DEFLIT(lit_170);
DEFLIT(lit_77);
DEFLIT(lit_186);
DEFLIT(lit_187);
DEFLIT(lit_66);
DEFLIT(lit_118);
DEFLIT(lit_147);
DEFLIT(lit_188);
DEFLIT(lit_45);
DEFLIT(lit_124);
DEFLIT(lit_87);
DEFLIT(lit_95);
DEFLIT(lit_46);
DEFLIT(lit_47);
DEFLIT(lit_184);
DEFLIT(lit_85);
DEFLIT(lit_111);
DEFLIT(lit_41);
DEFLIT(lit_165);
DEFLIT(lit_129);
DEFLIT(lit_4);
DEFLIT(lit_171);
DEFLIT(lit_78);
DEFLIT(lit_76);
DEFLIT(lit_179);
DEFLIT(lit_98);
DEFLIT(lit_134);
DEFLIT(lit_96);
DEFLIT(lit_193);
DEFLIT(lit_54);
DEFLIT(lit_57);
DEFLIT(lit_55);
DEFLIT(lit_21);
DEFLIT(lit_2);
DEFLIT(lit_133);
DEFLIT(lit_162);
DEFLIT(lit_156);
DEFLIT(lit_109);
DEFLIT(lit_107);
DEFLIT(lit_17);
DEFLIT(lit_110);
DEFLIT(lit_35);
DEFLIT(lit_30);
DEFLIT(lit_58);
DEFLIT(lit_125);
DEFLIT(lit_60);
DEFLIT(lit_114);
DEFLIT(lit_34);
DEFLIT(lit_159);
DEFLIT(lit_80);
DEFLIT(lit_161);
DEFLIT(lit_131);
DEFLIT(lit_15);
DEFLIT(lit_53);
DEFLIT(lit_168);
DEFLIT(lit_180);
DEFLIT(lit_26);
DEFLIT(lit_32);
DEFLIT(lit_61);
DEFLIT(lit_27);
DEFLIT(lit_44);
DEFLIT(lit_152);
DEFLIT(lit_106);
DEFLIT(lit_178);
DEFLIT(lit_59);
DEFLIT(lit_176);
DEFLIT(lit_13);
DEFLIT(lit_1);
DEFLIT(lit_94);
DEFLIT(lit_113);
DEFLIT(lit_20);
DEFLIT(lit_82);
DEFLIT(lit_173);
DEFLIT(lit_24);
DEFLIT(lit_169);
DEFLIT(lit_126);
DEFLIT(lit_40);
DEFLIT(lit_141);
DEFLIT(lit_166);
DEFLIT(lit_73);
DEFLIT(lit_5);
DEFLIT(lit_138);
DEFLIT(lit_102);
DEFLIT(lit_100);
DEFLIT(lit_97);
DEFLIT(lit_18);
DEFLIT(lit_19);
DEFLIT(lit_185);
DEFLIT(lit_122);
DEFLIT(lit_14);
DEFLIT(lit_105);
DEFLIT(lit_23);
DEFLIT(lit_135);
DEFLIT(lit_67);
DEFLIT(lit_0);
DEFLIT(lit_11);
DEFLIT(lit_29);
DEFLIT(lit_83);
DEFLIT(lit_119);
DEFLIT(lit_81);
DEFLIT(lit_120);
DEFLIT(lit_39);
DEFLIT(lit_74);
DEFLIT(lit_189);
DEFLIT(lit_136);
DEFLIT(lit_6);
DEFLIT(lit_33);
DEFLIT(lit_7);
DEFLIT(lit_130);
DEFLIT(lit_75);
DEFLIT(lit_104);
DEFLIT(lit_90);
DEFLIT(lit_123);
DEFLIT(lit_175);
DEFLIT(lit_12);
DEFLIT(lit_167);
DEFLIT(lit_86);
DEFLIT(lit_38);
DEFLIT(lit_22);
DEFLIT(lit_155);
DEFLIT(lit_48);
DEFLIT(lit_164);
DEFLIT(lit_172);
DEFLIT(lit_89);
DEFLIT(lit_9);
DEFLIT(lit_191);
DEFLIT(lit_112);
DEFLIT(lit_116);
DEFLIT(lit_132);
DEFLIT(lit_42);
DEFLIT(lit_64);
DEFLIT(lit_142);
DEFLIT(lit_72);
DEFLIT(lit_91);
DEFLIT(lit_128);
DEFLIT(lit_65);
DEFLIT(lit_143);
DEFLIT(lit_149);
DEFLIT(lit_84);
DEFLIT(lit_139);
DEFLIT(lit_148);
DEFLIT(lit_182);
DEFLIT(lit_157);
DEFLIT(lit_150);
DEFLIT(lit_158);
DEFLIT(lit_79);
DEFLIT(lit_183);
DEFLIT(lit_3);
DEFLIT(lit_137);
DEFLIT(lit_31);
DEFLIT(lit_69);
DEFLIT(lit_108);
DEFLIT(lit_88);
DEFLIT(lit_16);
DEFLIT(lit_8);
DEFLIT(lit_103);
DEFLIT(lit_43);
DEFLIT(lit_101);
DEFLIT(lit_50);
DEFLIT(lit_10);
DEFLIT(lit_154);
DEFLIT(lit_92);
DEFLIT(lit_63);
DEFLIT(lit_62);
DEFLIT(lit_192);
DEFLIT(lit_37);
DEFLIT(lit_127);
DEFLIT(lit_190);
DEFLIT(lit_174);
DEFLIT(lit_194);
DEFLIT(lit_117);
DEFLIT(lit_181);
DEFLIT(lit_51);
DEFLIT(lit_177);
DEFLIT(lit_153);
DEFLIT(lit_121);
DEFLIT(lit_151);
DEFLIT(lit_70);
DEFLIT(lit_49);
DEFLIT(lit_52);
DEFLIT(lit_160);
DEFLIT(lit_68);
DEFLIT(lit_25);
DEFLIT(lit_146);
DEFLIT(lit_144);

/* FUNCTIONS: */

LOCFOR(fun_box_reference_0);
LOCFOR(fun_box_reference_setter_1);
LOCFOR(fun_box_reference_2);
LOCFOR(fun_box_reference_setter_3);
LOCFOR(fun_box_form_4);
LOCFOR(fun_box_form_setter_5);
LOCFOR(fun_box_reference_6);
LOCFOR(fun_box_reference_setter_7);
LOCFOR(fun_insert_boxX_8);
LOCFOR(fun_insert_boxX_9);
LOCFOR(fun_insert_boxX_10);
LOCFOR(fun_insert_boxX_11);
LOCFOR(fun_insert_boxX_12);
LOCFOR(fun_insert_boxX_13);
LOCFOR(fun_insert_boxX_14);
LOCFOR(fun_boxify_mutable_bindings_15);
LOCFOR(fun_unconstrained_typeQ_16);
LOCFOR(fun_unconstrained_typeQ_17);
LOCFOR(fun_unconstrained_typeQ_18);
LOCFOR(fun_do_do_call_analysisX_19);
LOCFOR(fun_do_call_analysisX_20);
FUNFOR(YevalSast_linearizeYreopt_topX);
LOCFOR(fun_do_call_analysisX_22);
LOCFOR(fun_do_call_analysisX_23);
LOCFOR(fun_ensure_loop_24);
LOCFOR(fun_do_call_analysisX_25);
LOCFOR(fun_26);
LOCFOR(fun_do_call_analysisX_27);
LOCFOR(fun_do_call_analysisX_28);
LOCFOR(fun_29);
LOCFOR(fun_30);
LOCFOR(fun_analyze_calls_31);
LOCFOR(fun_reference_offset_32);
LOCFOR(fun_reference_offset_setter_33);
LOCFOR(fun_reference_selfQ_34);
LOCFOR(fun_reference_selfQ_setter_35);
LOCFOR(fun_liftX_36);
LOCFOR(fun_lift_proceduresX_37);
LOCFOR(fun_lift_proceduresX_38);
LOCFOR(fun_adjoin_free_bindingX_39);
LOCFOR(fun_lift_proceduresX_40);
LOCFOR(fun_lift_proceduresX_41);
LOCFOR(fun_lift_proceduresX_42);
LOCFOR(fun_lift_proceduresX_43);
LOCFOR(fun_lift_proceduresX_44);
LOCFOR(fun_program_form_45);
LOCFOR(fun_program_form_setter_46);
LOCFOR(fun_program_quotations_47);
LOCFOR(fun_program_quotations_setter_48);
LOCFOR(fun_49);
LOCFOR(fun_program_bindings_50);
LOCFOR(fun_program_bindings_setter_51);
LOCFOR(fun_52);
LOCFOR(fun_program_definitions_53);
LOCFOR(fun_program_definitions_setter_54);
LOCFOR(fun_55);
LOCFOR(fun_form_program_56);
LOCFOR(fun_form_program_setter_57);
LOCFOR(fun_form_quotations_58);
LOCFOR(fun_form_quotations_setter_59);
LOCFOR(fun_60);
LOCFOR(fun_form_definitions_61);
LOCFOR(fun_form_definitions_setter_62);
LOCFOR(fun_63);
LOCFOR(fun_closure_creation_index_64);
LOCFOR(fun_closure_creation_index_setter_65);
LOCFOR(fun_closure_creation_free_66);
LOCFOR(fun_closure_creation_free_setter_67);
LOCFOR(fun_flatten_seqs_68);
LOCFOR(fun_flatten_seqs_69);
LOCFOR(fun_70);
LOCFOR(fun_as_top_level_forms_71);
LOCFOR(fun_72);
LOCFOR(fun_extract_thingsX_73);
LOCFOR(fun_extractX_74);
LOCFOR(fun_extractX_75);
LOCFOR(fun_extractX_76);
LOCFOR(fun_77);
LOCFOR(fun_extractX_78);
LOCFOR(fun_extractX_79);
LOCFOR(fun_adjoin_definitionX_80);
LOCFOR(fun_split_program_81);
LOCFOR(fun_split_program_82);
LOCFOR(fun_closurize_mainX_83);
LOCFOR(fun_assoc_key_84);
LOCFOR(fun_assoc_key_setter_85);
LOCFOR(fun_assoc_value_86);
LOCFOR(fun_assoc_value_setter_87);
FUNFOR(YevalSast_linearizeYassoc);
LOCFOR(fun_assocq_89);
LOCFOR(fun_90);
LOCFOR(fun_gather_temporariesX_91);
LOCFOR(fun_collect_temporariesX_92);
LOCFOR(fun_collect_temporariesX_93);
FUNFOR(YevalSast_linearizeYprepend_renamings);
LOCFOR(fun_collect_temporariesX_95);
LOCFOR(fun_96);
LOCFOR(fun_collect_temporariesX_97);
LOCFOR(fun_collect_temporariesX_98);
LOCFOR(fun_adjoin_temporary_variablesX_99);
LOCFOR(fun_binding_index_100);
LOCFOR(fun_binding_index_setter_101);
LOCFOR(fun_new_renamed_binding_102);
LOCFOR(fun_103);
LOCFOR(fun_104);
LOCFOR(fun_105);
LOCFOR(fun_register_allocateX_106);
FUNFOR(YevalSast_linearizeYallocate_register);
LOCFOR(fun_collect_registersX_108);
LOCFOR(fun_collect_registersX_109);
LOCFOR(fun_collect_registersX_110);
LOCFOR(fun_111);
LOCFOR(fun_collect_registersX_112);
LOCFOR(fun_collect_registersX_113);
LOCFOR(fun_collect_registersX_114);
LOCFOR(fun_ast_contains_funQ_115);
LOCFOR(fun_walk_116);
LOCFOR(fun_117);
LOCFOR(fun_ast_contains_funQ_118);
extern P YevalSast_linearizeY___main_0___ ();
extern P YevalSast_linearizeY___main_1___ ();
extern P YevalSast_linearizeY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_box_reference_0) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_setter_1) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_2) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_setter_3) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_form_4) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYbox_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_form_setter_5) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYbox_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_6) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_setter_7) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_8) {
  P o_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  T0 = CALL2(1,VARREF(YevalSastYast_walkX),VARREF(YevalSast_linearizeYinsert_boxX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_9) {
  P o_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(o_, 0);
  T2 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
  T1 = CALL1(1,VARREF(YevalSastYbinding_mutableQ),T2);
  if (T1 != YPfalse) {
    T3 = CALL3(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLbox_readG),VARREF(YevalSast_linearizeYbox_reference),o_);
    T0 = T3;
  } else {
    T0 = o_;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_10) {
  P o_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(o_, 0);
  CALL2(1,VARREF(YevalSastYast_walkX),VARREF(YevalSast_linearizeYinsert_boxX),o_);
  T1 = CALL1(1,VARREF(YevalSastYapplication_function),o_);
  T0 = CALL2(1,VARREF(YisaQ),T1,VARREF(YevalSastYLlocal_referenceG));
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYapplication_function),o_);
    T2 = CALL2(1,VARREF(YevalSastYreference_called_functionQ_setter),YPtrue,T3);
  } else {
  }
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_insert_boxX_11) {
  P o_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(o_, 0);
  T1 = CALL1(1,VARREF(YevalSastYassignment_reference),o_);
  T3 = CALL1(1,VARREF(YevalSastYassignment_form),o_);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),T3);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLbox_writeG),VARREF(YevalSast_linearizeYbox_reference),T1,VARREF(YevalSast_linearizeYbox_form),T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_12) {
  P o_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(o_, 0);
  T2 = CALL1(1,VARREF(YevalSastYfunction_body),o_);
  T3 = CALL1(1,VARREF(YevalSastYfunction_bindings),o_);
  T1 = CALL2(1,VARREF(YevalSast_linearizeYboxify_mutable_bindings),T2,T3);
  T0 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),T1);
  CALL2(1,VARREF(YevalSastYfunction_body_setter),T0,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_insert_boxX_13) {
  P o_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(o_, 0);
  T1 = CALL1(1,VARREF(YevalSastYfix_let_arguments),o_);
  T0 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),T1);
  CALL2(1,VARREF(YevalSastYfix_let_arguments_setter),T0,o_);
  T4 = CALL1(1,VARREF(YevalSastYfix_let_body),o_);
  T5 = CALL1(1,VARREF(YevalSastYfix_let_bindings),o_);
  T3 = CALL2(1,VARREF(YevalSast_linearizeYboxify_mutable_bindings),T4,T5);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),T3);
  CALL2(1,VARREF(YevalSastYfix_let_body_setter),T2,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_insert_boxX_14) {
  P o_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(o_, 0);
  T1 = CALL1(1,VARREF(YevalSastYlocals_functions),o_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSast_linearizeYinsert_boxX),T1);
  CALL2(1,VARREF(YevalSastYlocals_functions_setter),T0,o_);
  T4 = CALL1(1,VARREF(YevalSastYlocals_body),o_);
  T5 = CALL1(1,VARREF(YevalSastYlocals_bindings),o_);
  T3 = CALL2(1,VARREF(YevalSast_linearizeYboxify_mutable_bindings),T4,T5);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),T3);
  CALL2(1,VARREF(YevalSastYlocals_body_setter),T2,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_boxify_mutable_bindings_15) {
  P form_,bindings_;
  P creatorF3077;
  P bindingF3076;
  P bindingsF3075;
  P resF3074;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(form_, 0);
  ARG(bindings_, 1);
  resF3074 = Ynil;
  bindingsF3075 = bindings_;
  for (;;) {
    P a178_0,a178_1;
  loop178:
    T4 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindingsF3075);
    if (T4 != YPfalse) {
      T6 = CALL2(1,VARREF(YgooSmacrosYpair),form_,resF3074);
      T5 = CALL1(1,VARREF(YgooSmacrosYrevX),T6);
      T3 = T5;
    } else {
      T8 = CALL1(1,VARREF(Yhead),bindingsF3075);
      bindingF3076 = T8;
      T10 = CALL1(1,VARREF(YevalSastYbinding_mutableQ),bindingF3076);
      if (T10 != YPfalse) {
        T13 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_binding),bindingF3076);
        T12 = CALL3(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLbox_creationG),VARREF(YevalSast_linearizeYbox_reference),T13);
        creatorF3077 = T12;
        T15 = CALL2(1,VARREF(YgooSmacrosYpair),creatorF3077,resF3074);
        T16 = CALL1(1,VARREF(Ytail),bindingsF3075);
        a178_0 = T15;
        a178_1 = T16;
        resF3074 = a178_0;
        bindingsF3075 = a178_1;
        goto loop178;
        T11 = T14;
        T9 = T11;
      } else {
        T18 = CALL1(1,VARREF(Ytail),bindingsF3075);
        a178_0 = resF3074;
        a178_1 = T18;
        resF3074 = a178_0;
        bindingsF3075 = a178_1;
        goto loop178;
        T9 = T17;
      }
      T7 = T9;
      T3 = T7;
    }
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = CALL1(1,VARREF(YevalSastYsequentialize),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_unconstrained_typeQ_16) {
  P b_;
LINK_STACK();
  ARG(b_, 0);
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_unconstrained_typeQ_17) {
  P b_;
  P tmpF3078;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(b_, 0);
  T2 = CALL1(1,VARREF(YevalSastYbinding_module_name),b_);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,LITREF(lit_28));
  tmpF3078 = T1;
  if (tmpF3078 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,LITREF(lit_29));
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_unconstrained_typeQ_18) {
  P o_;
  P T0,T1;
LINK_STACK();
  ARG(o_, 0);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
  T0 = CALL1(1,VARREF(YevalSast_linearizeYunconstrained_typeQ),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_do_do_call_analysisX_19) {
  P o_,r_,t_,f_,s_,funs_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(t_, 2);
  ARG(f_, 3);
  ARG(s_, 4);
  ARG(funs_, 5);
  T0 = CALLN(1,VARREF(YevalSastYast_walkX),7,VARREF(YevalSast_linearizeYdo_call_analysisX),o_,r_,t_,f_,s_,funs_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_call_analysisX_20) {
  P o_,r_,t_,f_,s_,funs_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(t_, 2);
  ARG(f_, 3);
  ARG(s_, 4);
  ARG(funs_, 5);
  T0 = CALLN(1,VARREF(YevalSast_linearizeYdo_do_call_analysisX),6,o_,r_,t_,f_,s_,funs_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSast_linearizeYreopt_topX) {
  P s_,t_;
  P tmpF3079;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(s_, 0);
  ARG(t_, 1);
  T3 = CALL1(1,VARREF(Ynot),t_);
  tmpF3079 = T3;
  if (tmpF3079 != YPfalse) {
    T4 = tmpF3079;
  } else {
    T5 = CALL2(1,VARREF(YgooScolsScolYmemQ),s_,t_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooScolsScolxYaddX),s_,t_);
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_call_analysisX_22) {
  P o_,r_,t_,f_,s_,funs_;
  P x_1472F3082;
  P tmpF3081;
  P funQF3080;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(t_, 2);
  ARG(f_, 3);
  ARG(s_, 4);
  ARG(funs_, 5);
  T1 = CALL1(1,VARREF(YevalSastYreference_called_functionQ),o_);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
    T2 = CALL2(1,VARREF(YevalSastYbinding_dynamic_extentQ_setter),YPfalse,T3);
  } else {
  }
  T6 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
  T5 = CALL1(1,VARREF(YevalSastYbinding_value),T6);
  funQF3080 = T5;
  tmpF3081 = funQF3080;
  if (tmpF3081 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooScolsScolYmemQ),funs_,funQF3080);
    T9 = T10;
  } else {
    T9 = YPfalse;
  }
  T8 = T9;
  if (T8 != YPfalse) {
    T13 = CALL1(1,VARREF(YevalSastYfunction_ref_count),funQF3080);
    T12 = CALL2(1,VARREF(YgooSmathYE),T13,YPint((P)1));
    if (T12 != YPfalse) {
      CALL2(1,VARREF(YevalSast_linearizeYreopt_topX),s_,t_);
      x_1472F3082 = funQF3080;
      T16 = CALL1(1,VARREF(YevalSastYfunction_ref_count),x_1472F3082);
      T15 = CALL2(1,VARREF(YgooSmathY_),T16,YPint((P)1));
      T14 = CALL2(1,VARREF(YevalSastYfunction_ref_count_setter),T15,x_1472F3082);
      T11 = funQF3080;
    } else {
      T11 = o_;
    }
    T7 = T11;
  } else {
    T7 = o_;
  }
  T4 = T7;
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(fun_do_call_analysisX_23) {
  P o_,r_,t_,f_,s_,funs_;
  P T0,T1;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(t_, 2);
  ARG(f_, 3);
  ARG(s_, 4);
  ARG(funs_, 5);
  T0 = CALL1(1,VARREF(YevalSastYfunction_signature),o_);
  CALLN(1,VARREF(YevalSast_linearizeYdo_call_analysisX),6,T0,r_,t_,f_,s_,funs_);
  T1 = CALL1(1,VARREF(YevalSastYfunction_body),o_);
  CALLN(1,VARREF(YevalSast_linearizeYdo_call_analysisX),6,T1,r_,t_,o_,s_,funs_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_ensure_loop_24) {
  P f_;
  P loopF3086;
  P tmpF3085;
  P UF3084;
  P x_1473F3083;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(f_, 0);
  x_1473F3083 = f_;
  T3 = CALL1(1,VARREF(YevalSastYfunction_loop),x_1473F3083);
  UF3084 = T3;
  T5 = CALL1(1,VARREF(YevalSastYfunction_loop),x_1473F3083);
  tmpF3085 = T5;
  if (tmpF3085 != YPfalse) {
    T6 = tmpF3085;
  } else {
    T9 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
    T10 = CALL1(1,VARREF(YevalSastYfunction_body),f_);
    T8 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLloopG),VARREF(YevalSastYloop_bindings),T9,VARREF(YevalSastYloop_body),T10);
    T7 = CALL2(1,VARREF(YevalSastYfunction_loop_setter),T8,x_1473F3083);
    T6 = T7;
  }
  T4 = T6;
  T2 = T4;
  T1 = T2;
  loopF3086 = T1;
  CALL2(1,VARREF(YevalSastYfunction_body_setter),loopF3086,f_);
  T0 = loopF3086;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_do_call_analysisX_25) {
  P o_,r_,t_,f_,s_,funs_;
  P loopF3090;
  P tmpF3089;
  P tmpF3088;
  P varF3087;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(t_, 2);
  ARG(f_, 3);
  ARG(s_, 4);
  ARG(funs_, 5);
  CALLN(1,VARREF(YevalSast_linearizeYdo_do_call_analysisX),6,o_,r_,t_,f_,s_,funs_);
  T1 = CALL1(1,VARREF(YevalSastYapplication_binding),o_);
  varF3087 = T1;
  T4 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_primitiveG));
  tmpF3088 = T4;
  if (tmpF3088 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSastYapplication_tailQ),o_);
    tmpF3089 = T7;
    if (tmpF3089 != YPfalse) {
      T10 = CALL1(1,VARREF(YevalSastYfunction_binding),f_);
      T9 = CALL2(1,VARREF(YgooSmacrosYEE),varF3087,T10);
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
    T12 = CALL1(1,VARREF(YevalSast_linearizeYensure_loop),f_);
    loopF3090 = T12;
    T14 = CALL1(1,VARREF(YevalSastYapplication_arguments),o_);
    T13 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLloop_applicationG),VARREF(YevalSastYapplication_loop),loopF3090,VARREF(YevalSastYapplication_arguments),T14);
    T11 = T13;
    T2 = T11;
  } else {
    T2 = o_;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_26) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSastYbinding_type),x_);
  T0 = CALL1(1,VARREF(YevalSast_linearizeYunconstrained_typeQ),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_call_analysisX_27) {
  P o_,r_,t_,f_,s_,funs_;
  P tmpF3102;
  P tmpF3101;
  P tmpF3100;
  P tmpF3099;
  P x_1476F3098;
  P loopF3097;
  P tmpF3096;
  P tmpF3095;
  P calleeF3094;
  P x_1475F3093;
  P x_1474F3092;
  P refF3091;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(t_, 2);
  ARG(f_, 3);
  ARG(s_, 4);
  ARG(funs_, 5);
  CALLN(1,VARREF(YevalSast_linearizeYdo_do_call_analysisX),6,o_,r_,t_,f_,s_,funs_);
  T1 = CALL1(1,VARREF(YevalSastYapplication_function),o_);
  refF3091 = T1;
  x_1474F3092 = refF3091;
  x_1475F3093 = VARREF(YisaQ);
  T5 = CALL2(1,x_1475F3093,x_1474F3092,VARREF(YevalSastYLlocal_referenceG));
  if (T5 != YPfalse) {
    T8 = CALL1(1,VARREF(YevalSastYreference_binding),refF3091);
    T7 = CALL1(1,VARREF(YevalSastYbinding_value),T8);
    calleeF3094 = T7;
    T11 = CALL2(1,VARREF(YgooSmacrosYEE),calleeF3094,f_);
    tmpF3095 = T11;
    if (tmpF3095 != YPfalse) {
      T14 = CALL1(1,VARREF(YevalSastYapplication_tailQ),o_);
      tmpF3096 = T14;
      if (tmpF3096 != YPfalse) {
        T17 = CALL1(1,VARREF(YevalSastYfunction_naryQ),f_);
        T16 = CALL1(1,VARREF(Ynot),T17);
        T15 = T16;
      } else {
        T15 = YPfalse;
      }
      T13 = T15;
      T12 = T13;
    } else {
      T12 = YPfalse;
    }
    T10 = T12;
    if (T10 != YPfalse) {
      T19 = CALL1(1,VARREF(YevalSast_linearizeYensure_loop),f_);
      loopF3097 = T19;
      x_1476F3098 = f_;
      T22 = CALL1(1,VARREF(YevalSastYfunction_ref_count),x_1476F3098);
      T21 = CALL2(1,VARREF(YgooSmathY_),T22,YPint((P)1));
      T20 = CALL2(1,VARREF(YevalSastYfunction_ref_count_setter),T21,x_1476F3098);
      CALL2(1,VARREF(YevalSast_linearizeYreopt_topX),s_,t_);
      T24 = CALL1(1,VARREF(YevalSastYapplication_arguments),o_);
      T23 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLloop_applicationG),VARREF(YevalSastYapplication_loop),loopF3097,VARREF(YevalSastYapplication_arguments),T24);
      T18 = T23;
      T9 = T18;
    } else {
      T27 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_functionG));
      tmpF3099 = T27;
      if (tmpF3099 != YPfalse) {
        T31 = fun_26;
        T32 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
        T30 = CALL2(1,VARREF(YgooScolsScolYallQ),T31,T32);
        tmpF3100 = T30;
        if (tmpF3100 != YPfalse) {
          T36 = CALL1(1,VARREF(YevalSastYfunction_value),f_);
          T35 = CALL1(1,VARREF(YevalSast_linearizeYunconstrained_typeQ),T36);
          tmpF3101 = T35;
          if (tmpF3101 != YPfalse) {
            T40 = CALL1(1,VARREF(YevalSastYfunction_naryQ),f_);
            T39 = CALL1(1,VARREF(Ynot),T40);
            tmpF3102 = T39;
            if (tmpF3102 != YPfalse) {
              T44 = CALL1(1,VARREF(YevalSastYapplication_arguments),o_);
              T43 = CALL1(1,VARREF(YgooStypesYlen),T44);
              T46 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
              T45 = CALL1(1,VARREF(YgooStypesYlen),T46);
              T42 = CALL2(1,VARREF(YgooSmathYE),T43,T45);
              T41 = T42;
            } else {
              T41 = YPfalse;
            }
            T38 = T41;
            T37 = T38;
          } else {
            T37 = YPfalse;
          }
          T34 = T37;
          T33 = T34;
        } else {
          T33 = YPfalse;
        }
        T29 = T33;
        T28 = T29;
      } else {
        T28 = YPfalse;
      }
      T26 = T28;
      if (T26 != YPfalse) {
        CALL2(1,VARREF(YevalSastYapplication_knownQ_setter),YPtrue,o_);
        T25 = o_;
      } else {
        T25 = o_;
      }
      T9 = T25;
    }
    T6 = T9;
    T4 = T6;
  } else {
    T48 = CALL2(1,x_1475F3093,x_1474F3092,VARREF(YevalSastYLast_embodied_functionG));
    if (T48 != YPfalse) {
      CALL2(1,VARREF(YevalSast_linearizeYreopt_topX),s_,t_);
      T50 = CALL1(1,VARREF(YevalSastYapplication_arguments),o_);
      T51 = CALL1(1,VARREF(YevalSastYapplication_tailQ),o_);
      T49 = CALL4(1,VARREF(YevalSastYprocess_closed_application),refF3091,T50,r_,T51);
      T47 = T49;
    } else {
      T47 = o_;
    }
    T4 = T47;
  }
  T3 = T4;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_call_analysisX_28) {
  P o_,r_,t_,f_,s_,funs_;
  P resF3105;
  P new_funsF3104;
  P singleQF3103;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(t_, 2);
  ARG(f_, 3);
  ARG(s_, 4);
  ARG(funs_, 5);
  T3 = CALL1(1,VARREF(YevalSastYlocals_functions),o_);
  T2 = CALL1(1,VARREF(YgooStypesYlen),T3);
  T1 = CALL2(1,VARREF(YgooSmathYE),T2,YPint((P)1));
  singleQF3103 = T1;
  if (singleQF3103 != YPfalse) {
    T8 = CALL1(1,VARREF(YevalSastYlocals_functions),o_);
    T7 = CALL1(1,VARREF(YgooSmacrosY1st),T8);
    T6 = CALL2(1,VARREF(YgooSmacrosYpair),T7,funs_);
    T5 = T6;
  } else {
    T5 = funs_;
  }
  new_funsF3104 = T5;
  T10 = CALLN(1,VARREF(YevalSast_linearizeYdo_do_call_analysisX),6,o_,r_,t_,f_,s_,new_funsF3104);
  resF3105 = T10;
  if (singleQF3103 != YPfalse) {
    T15 = CALL1(1,VARREF(YgooSmacrosY1st),new_funsF3104);
    T14 = CALL1(1,VARREF(YevalSastYfunction_ref_count),T15);
    T13 = CALL2(1,VARREF(YgooSmathYE),T14,YPint((P)0));
    if (T13 != YPfalse) {
      CALL2(1,VARREF(YevalSast_linearizeYreopt_topX),s_,t_);
      CALL2(1,VARREF(YevalSastYlocals_functions_setter),Ynil,o_);
      CALL2(1,VARREF(YevalSastYlocals_bindings_setter),Ynil,o_);
      T16 = CALL1(1,VARREF(YevalSastYlocals_body),o_);
      T12 = T16;
    } else {
      T12 = resF3105;
    }
    T11 = T12;
  } else {
    T11 = resF3105;
  }
  T9 = T11;
  T4 = T9;
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_29) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALLN(1,VARREF(YevalSast_linearizeYdo_call_analysisX),6,x_,FREEREF(0),x_,YPfalse,FREEREF(1),Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_30) {
  P e_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  T0 = CALL2(1,VARREF(YevalSast_linearizeYanalyze_calls),e_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_analyze_calls_31) {
  P o_,r_;
  P resF3107;
  P sF3106;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
  sF3106 = T1;
  T4 = CALL2(1,VARREF(YisaQ),o_,VARREF(YevalSastYLsequentialG));
  if (T4 != YPfalse) {
    T6 = FUNFAB(fun_29,2,r_,sF3106);
    T5 = CALL2(1,VARREF(YgooSmacrosYmap),T6,o_);
    T3 = T5;
  } else {
    T7 = CALLN(1,VARREF(YevalSast_linearizeYdo_call_analysisX),6,o_,r_,YPfalse,YPfalse,sF3106,Ynil);
    T3 = T7;
  }
  resF3107 = T3;
  T9 = CALL1(1,VARREF(YgooSmacrosYemptyQ),sF3106);
  if (T9 != YPfalse) {
    T8 = resF3107;
  } else {
    T10 = FUNFAB(fun_30,1,r_);
    CALL2(1,VARREF(YgooSmacrosYdo),T10,sF3106);
    T8 = resF3107;
  }
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_offset_32) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYreference_offset));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_offset_setter_33) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYreference_offset));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_selfQ_34) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYreference_selfQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_selfQ_setter_35) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYreference_selfQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_liftX_36) {
  P o_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),o_,YPfalse,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_37) {
  P o_,flat_fun_,bindings_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
  T0 = CALL4(1,VARREF(YevalSastYast_walkX),VARREF(YevalSast_linearizeYlift_proceduresX),o_,flat_fun_,bindings_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_38) {
  P o_,flat_fun_,bindings_;
  P offsetF3109;
  P bF3108;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
  bF3108 = T1;
  T3 = CALL2(1,VARREF(YgooScolsScolYmemQ),bindings_,bF3108);
  if (T3 != YPfalse) {
    T2 = o_;
  } else {
    T5 = CALL2(1,VARREF(YevalSast_linearizeYadjoin_free_bindingX),flat_fun_,o_);
    offsetF3109 = T5;
    T8 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
    T9 = CALL1(1,VARREF(YevalSastYfunction_binding),flat_fun_);
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),T8,T9);
    T6 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YevalSastYreference_binding),bF3108,VARREF(YevalSast_linearizeYreference_offset),offsetF3109,VARREF(YevalSast_linearizeYreference_selfQ),T7);
    T4 = T6;
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_free_bindingX_39) {
  P flat_fun_,ref_;
  P tailF3114;
  P freeTF3113;
  P new_envF3112;
  P freeTF3111;
  P iF3110;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
LINK_STACK();
  ARG(flat_fun_, 0);
  ARG(ref_, 1);
  check_type(YPint((P)0),VARREF(YLintG));
  iF3110 = YPint((P)0);
  T2 = CALL1(1,VARREF(YevalSastYfunction_free),flat_fun_);
  freeTF3111 = T2;
  for (;;) {
    P a179_0,a179_1;
  loop179:
    T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),freeTF3111);
    if (T5 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLfree_environmentG));
      T7 = CALL2(1,VARREF(YevalSastYfree_environment),ref_,T8);
      new_envF3112 = T7;
      T10 = CALL1(1,VARREF(YevalSastYfunction_free),flat_fun_);
      T9 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T10);
      if (T9 != YPfalse) {
        T11 = CALL2(1,VARREF(YevalSastYfunction_free_setter),new_envF3112,flat_fun_);
      } else {
        T13 = CALL1(1,VARREF(YevalSastYfunction_free),flat_fun_);
        freeTF3113 = T13;
        for (;;) {
          P a180_0;
        loop180:
          T16 = CALL1(1,VARREF(Ytail),freeTF3113);
          tailF3114 = T16;
          T18 = CALL1(1,VARREF(YgooSmacrosYemptyQ),tailF3114);
          if (T18 != YPfalse) {
            T19 = CALL2(1,VARREF(Ytail_setter),new_envF3112,freeTF3113);
            T17 = T19;
          } else {
            a180_0 = tailF3114;
            freeTF3113 = a180_0;
            goto loop180;
            T17 = T20;
          }
          T15 = T17;
          break;
        }
        T14 = T15;
        T12 = T14;
      }
      T6 = iF3110;
      T4 = T6;
    } else {
      T23 = CALL1(1,VARREF(YevalSastYreference_binding),ref_);
      T25 = CALL1(1,VARREF(Yhead),freeTF3111);
      T24 = CALL1(1,VARREF(YevalSastYreference_binding),T25);
      T22 = CALL2(1,VARREF(YgooSmacrosYEE),T23,T24);
      if (T22 != YPfalse) {
        T21 = iF3110;
      } else {
        T27 = CALL2(1,VARREF(YgooSmathYA),iF3110,YPint((P)1));
        T28 = CALL1(1,VARREF(Ytail),freeTF3111);
        a179_0 = T27;
        a179_1 = T28;
        iF3110 = a179_0;
        freeTF3111 = a179_1;
        goto loop179;
        T21 = T26;
      }
      T4 = T21;
    }
    break;
  }
  T3 = T4;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_40) {
  P o_,flat_fun_,bindings_;
  P new_bindingsF3115;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
  T1 = CALL1(1,VARREF(YevalSastYfix_let_arguments),o_);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T1,flat_fun_,bindings_);
  CALL2(1,VARREF(YevalSastYfix_let_arguments_setter),T0,o_);
  T4 = CALL1(1,VARREF(YevalSastYfix_let_bindings),o_);
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),T4,bindings_);
  new_bindingsF3115 = T3;
  T6 = CALL1(1,VARREF(YevalSastYfix_let_body),o_);
  T5 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T6,flat_fun_,new_bindingsF3115);
  CALL2(1,VARREF(YevalSastYfix_let_body_setter),T5,o_);
  T2 = o_;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_lift_proceduresX_41) {
  P o_,flat_fun_,bindings_;
  P new_bindingsF3116;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
  T2 = CALL1(1,VARREF(YevalSastYlocals_bindings),o_);
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),T2,bindings_);
  new_bindingsF3116 = T1;
  T4 = CALL3(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSast_linearizeYlift_proceduresX),flat_fun_,new_bindingsF3116);
  T5 = CALL1(1,VARREF(YevalSastYlocals_functions),o_);
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),T4,T5);
  CALL2(1,VARREF(YevalSastYlocals_functions_setter),T3,o_);
  T7 = CALL1(1,VARREF(YevalSastYlocals_body),o_);
  T6 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T7,flat_fun_,new_bindingsF3116);
  CALL2(1,VARREF(YevalSastYlocals_body_setter),T6,o_);
  T0 = o_;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_42) {
  P o_,flat_fun_,bindings_;
  P T0,T1,T2;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
  T1 = CALL1(1,VARREF(YevalSastYfunction_body),o_);
  T2 = CALL1(1,VARREF(YevalSastYfunction_bindings),o_);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T1,YPfalse,T2);
  CALL2(1,VARREF(YevalSastYfunction_body_setter),T0,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_lift_proceduresX_43) {
  P o_,flat_fun_,bindings_;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_lift_proceduresX_44) {
  P o_,flat_fun_,bindings_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
  T1 = CALL1(1,VARREF(YevalSastYfunction_body),o_);
  T2 = CALL1(1,VARREF(YevalSastYfunction_bindings),o_);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T1,o_,T2);
  CALL2(1,VARREF(YevalSastYfunction_body_setter),T0,o_);
  T4 = CALL1(1,VARREF(YevalSastYfunction_free),o_);
  T3 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T4,flat_fun_,bindings_);
  CALL2(1,VARREF(YevalSastYfunction_free_setter),T3,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_program_form_45) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYprogram_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_form_setter_46) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYprogram_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_quotations_47) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYprogram_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_quotations_setter_48) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYprogram_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)40));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_bindings_50) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYprogram_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_bindings_setter_51) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYprogram_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_52) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)40));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_definitions_53) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYprogram_definitions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_definitions_setter_54) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYprogram_definitions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_form_program_56) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYform_program));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_program_setter_57) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYform_program));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_quotations_58) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYform_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_quotations_setter_59) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYform_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_60) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_form_definitions_61) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYform_definitions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_definitions_setter_62) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYform_definitions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_63) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_closure_creation_index_64) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYclosure_creation_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closure_creation_index_setter_65) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYclosure_creation_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closure_creation_free_66) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYclosure_creation_free));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closure_creation_free_setter_67) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYclosure_creation_free));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_flatten_seqs_68) {
  P o_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  T0 = CALL1(1,VARREF(Ylst),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_flatten_seqs_69) {
  P o_;
  P rF3120;
  P ssF3119;
  P rF3118;
  P sF3117;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(o_, 0);
  sF3117 = o_;
  rF3118 = Ynil;
  for (;;) {
    P a181_0,a181_1;
  loop181:
    T4 = CALL1(1,VARREF(YgooSmacrosYemptyQ),sF3117);
    if (T4 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooSmacrosYrevX),rF3118);
      T3 = T5;
    } else {
      T8 = CALL1(1,VARREF(Yhead),sF3117);
      T7 = CALL1(1,VARREF(YevalSast_linearizeYflatten_seqs),T8);
      ssF3119 = T7;
      rF3120 = rF3118;
      for (;;) {
        P a182_0,a182_1;
      loop182:
        T11 = CALL1(1,VARREF(YgooSmacrosYemptyQ),ssF3119);
        if (T11 != YPfalse) {
          T13 = CALL1(1,VARREF(Ytail),sF3117);
          a181_0 = T13;
          a181_1 = rF3120;
          sF3117 = a181_0;
          rF3118 = a181_1;
          goto loop181;
          T10 = T12;
        } else {
          T15 = CALL1(1,VARREF(Ytail),ssF3119);
          T17 = CALL1(1,VARREF(Yhead),ssF3119);
          T16 = CALL2(1,VARREF(YgooSmacrosYpair),T17,rF3120);
          a182_0 = T15;
          a182_1 = T16;
          ssF3119 = a182_0;
          rF3120 = a182_1;
          goto loop182;
          T10 = T14;
        }
        break;
      }
      T9 = T10;
      T6 = T9;
      T3 = T6;
    }
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_70) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYform_program),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_top_level_forms_71) {
  P programs_;
  P T0,T1;
LINK_STACK();
  ARG(programs_, 0);
  T1 = fun_70;
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,programs_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_72) {
  P form_;
  P T0;
LINK_STACK();
  ARG(form_, 0);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYextractX),form_,form_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extract_thingsX_73) {
  P o_;
  P resultF3122;
  P formsF3121;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(o_, 0);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYflatten_seqs),o_);
  T1 = CALL1(1,VARREF(YevalSast_linearizeYas_top_level_forms),T2);
  formsF3121 = T1;
  T4 = CALL1(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLflattened_programG));
  resultF3122 = T4;
  T7 = FUNFAB(fun_72,1,resultF3122);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),T7,formsF3121);
  T5 = CALL1(1,VARREF(YevalSastYsequentialize),T6);
  CALL2(1,VARREF(YevalSast_linearizeYprogram_form_setter),T5,resultF3122);
  T3 = resultF3122;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_74) {
  P o_,form_,result_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
  T0 = CALL4(1,VARREF(YevalSastYast_walkX),VARREF(YevalSast_linearizeYextractX),o_,form_,result_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_75) {
  P o_,form_,result_;
  P x_1477F3132;
  P qbF3131;
  P probeF3130;
  P indexF3129;
  P qbTF3128;
  P tmpF3127;
  P tmpF3126;
  P tmpF3125;
  P tmpF3124;
  P valueF3123;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
  T1 = CALL1(1,VARREF(YevalSastYconstant_value),o_);
  valueF3123 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),valueF3123,YPfalse);
  tmpF3124 = T4;
  if (tmpF3124 != YPfalse) {
    T5 = tmpF3124;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),valueF3123,YPtrue);
    tmpF3125 = T7;
    if (tmpF3125 != YPfalse) {
      T8 = tmpF3125;
    } else {
      T10 = CALL2(1,VARREF(YgooSmacrosYEE),valueF3123,Ynil);
      tmpF3126 = T10;
      if (tmpF3126 != YPfalse) {
        T11 = tmpF3126;
      } else {
        T13 = CALL2(1,VARREF(YisaQ),valueF3123,VARREF(YLintG));
        tmpF3127 = T13;
        if (tmpF3127 != YPfalse) {
          T14 = tmpF3127;
        } else {
          T15 = CALL2(1,VARREF(YisaQ),valueF3123,VARREF(YLchrG));
          T14 = T15;
        }
        T12 = T14;
        T11 = T12;
      }
      T9 = T11;
      T8 = T9;
    }
    T6 = T8;
    T5 = T6;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T2 = o_;
  } else {
    T17 = CALL1(1,VARREF(YevalSast_linearizeYprogram_quotations),result_);
    qbTF3128 = T17;
    T19 = CALL1(1,VARREF(YgooStypesYlen),qbTF3128);
    indexF3129 = T19;
    T21 = CALL3(1,VARREF(YgooScolsScolYelt_or),qbTF3128,valueF3123,YPfalse);
    probeF3130 = T21;
    if (probeF3130 != YPfalse) {
      T23 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYreference_binding),probeF3130);
      T22 = T23;
    } else {
      T25 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_126),VARREF(YevalSastYbinding_name),indexF3129,VARREF(YevalSastYbinding_info),valueF3123);
      qbF3131 = T25;
      CALL3(1,VARREF(YgooScolsScolxYelt_setter),qbF3131,qbTF3128,valueF3123);
      x_1477F3132 = form_;
      T28 = CALL1(1,VARREF(YevalSast_linearizeYform_quotations),x_1477F3132);
      T27 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T28,qbF3131);
      T26 = CALL2(1,VARREF(YevalSast_linearizeYform_quotations_setter),T27,x_1477F3132);
      T29 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYreference_binding),qbF3131);
      T24 = T29;
      T22 = T24;
    }
    T20 = T22;
    T18 = T20;
    T16 = T18;
    T2 = T16;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_76) {
  P o_,form_,result_;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_77) {
  P binding_;
  P T0,T1,T2;
LINK_STACK();
  ARG(binding_, 0);
  T2 = CALL1(1,VARREF(YevalSastYbinding_type),binding_);
  T1 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T2,FREEREF(0),FREEREF(1));
  T0 = CALL2(1,VARREF(YevalSastYbinding_type_setter),T1,binding_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_78) {
  P o_,form_,result_;
  P indexF3135;
  P free_bindingsF3134;
  P freeF3133;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
  T1 = CALL1(1,VARREF(YevalSastYfunction_debug_name),o_);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T1,form_,result_);
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T0,o_);
  T3 = CALL1(1,VARREF(YevalSastYfunction_signature),o_);
  T2 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T3,form_,result_);
  CALL2(1,VARREF(YevalSastYfunction_signature_setter),T2,o_);
  T5 = CALL1(1,VARREF(YevalSastYfunction_body),o_);
  T4 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T5,form_,result_);
  CALL2(1,VARREF(YevalSastYfunction_body_setter),T4,o_);
  T6 = FUNFAB(fun_77,2,form_,result_);
  T7 = CALL1(1,VARREF(YevalSastYfunction_bindings),o_);
  CALL2(1,VARREF(YgooSmacrosYdo),T6,T7);
  T9 = CALL1(1,VARREF(YevalSastYfunction_free),o_);
  freeF3133 = T9;
  T11 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYreference_binding),freeF3133);
  free_bindingsF3134 = T11;
  T13 = CALL3(1,VARREF(YevalSast_linearizeYadjoin_definitionX),form_,result_,o_);
  indexF3135 = T13;
  CALL2(1,VARREF(YevalSastYfunction_index_setter),indexF3135,o_);
  CALL2(1,VARREF(YevalSastYfunction_free_setter),free_bindingsF3134,o_);
  T14 = CALL5(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YevalSast_linearizeYclosure_creation_index),indexF3135,VARREF(YevalSast_linearizeYclosure_creation_free),freeF3133);
  T12 = T14;
  T10 = T12;
  T8 = T10;
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_extractX_79) {
  P o_,form_,result_;
  P x_1478F3137;
  P primF3136;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
  T1 = CALL1(1,VARREF(YevalSastYassignment_form),o_);
  primF3136 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfunction_body),primF3136);
  T2 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T3,form_,result_);
  CALL2(1,VARREF(YevalSastYfunction_body_setter),T2,primF3136);
  x_1478F3137 = result_;
  T6 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),x_1478F3137);
  T5 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T6,primF3136);
  T4 = CALL2(1,VARREF(YevalSast_linearizeYprogram_definitions_setter),T5,x_1478F3137);
  T8 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
  T7 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T8,form_,result_);
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_definitionX_80) {
  P form_,result_,x_;
  P x_1480F3140;
  P x_1479F3139;
  P new_indexF3138;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(form_, 0);
  ARG(result_, 1);
  ARG(x_, 2);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),result_);
  T1 = CALL1(1,VARREF(YgooStypesYlen),T2);
  new_indexF3138 = T1;
  x_1479F3139 = result_;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),x_1479F3139);
  T4 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T5,x_);
  T3 = CALL2(1,VARREF(YevalSast_linearizeYprogram_definitions_setter),T4,x_1479F3139);
  x_1480F3140 = form_;
  T8 = CALL1(1,VARREF(YevalSast_linearizeYform_definitions),x_1480F3140);
  T7 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T8,x_);
  T6 = CALL2(1,VARREF(YevalSast_linearizeYform_definitions_setter),T7,x_1480F3140);
  T0 = new_indexF3138;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_split_program_81) {
  P o_,max_count_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  ARG(max_count_, 1);
  T0 = CALL1(1,VARREF(Ylst),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_split_program_82) {
  P o_,max_count_;
  P countF3145;
  P esF3144;
  P resF3143;
  P sF3142;
  P formsF3141;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
LINK_STACK();
  ARG(o_, 0);
  ARG(max_count_, 1);
  formsF3141 = Ynil;
  sF3142 = o_;
  for (;;) {
    P a183_0,a183_1;
  loop183:
    resF3143 = Ynil;
    esF3144 = sF3142;
    countF3145 = YPint((P)0);
    for (;;) {
      P a184_0,a184_1,a184_2;
    loop184:
      T7 = CALL1(1,VARREF(YgooSmacrosYemptyQ),esF3144);
      if (T7 != YPfalse) {
        T11 = CALL1(1,VARREF(YgooSmacrosYrevX),resF3143);
        T10 = CALL1(1,VARREF(YevalSastYsequentialize),T11);
        T9 = CALL2(1,VARREF(YgooSmacrosYpair),T10,formsF3141);
        T8 = CALL1(1,VARREF(YgooSmacrosYrevX),T9);
        T6 = T8;
      } else {
        T13 = CALL2(1,VARREF(YgooSmathYE),countF3145,max_count_);
        if (T13 != YPfalse) {
          T17 = CALL1(1,VARREF(YgooSmacrosYrevX),resF3143);
          T16 = CALL1(1,VARREF(YevalSastYsequentialize),T17);
          T15 = CALL2(1,VARREF(YgooSmacrosYpair),T16,formsF3141);
          a183_0 = T15;
          a183_1 = esF3144;
          formsF3141 = a183_0;
          sF3142 = a183_1;
          goto loop183;
          T12 = T14;
        } else {
          if (YPtrue != YPfalse) {
            T21 = CALL1(1,VARREF(Yhead),esF3144);
            T20 = CALL2(1,VARREF(YgooSmacrosYpair),T21,resF3143);
            T22 = CALL1(1,VARREF(Ytail),esF3144);
            T23 = CALL2(1,VARREF(YgooSmathYA),countF3145,YPint((P)1));
            a184_0 = T20;
            a184_1 = T22;
            a184_2 = T23;
            resF3143 = a184_0;
            esF3144 = a184_1;
            countF3145 = a184_2;
            goto loop184;
            T18 = T19;
          } else {
            T18 = YPfalse;
          }
          T12 = T18;
        }
        T6 = T12;
      }
      break;
    }
    T5 = T6;
    T4 = T5;
    T3 = T4;
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closurize_mainX_83) {
  P o_,r_,max_count_;
  P callF3155;
  P defnF3154;
  P bindingF3153;
  P nameF3152;
  P formsF3151;
  P iF3150;
  P defnsF3149;
  P callsF3148;
  P base_indexF3147;
  P formsF3146;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(max_count_, 2);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_form),o_);
  T1 = CALL2(1,VARREF(YevalSast_linearizeYsplit_program),T2,max_count_);
  formsF3146 = T1;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),o_);
  T4 = CALL1(1,VARREF(YgooStypesYlen),T5);
  base_indexF3147 = T4;
  callsF3148 = Ynil;
  T7 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),o_);
  defnsF3149 = T7;
  iF3150 = YPint((P)0);
  formsF3151 = formsF3146;
  for (;;) {
    P a185_0,a185_1,a185_2,a185_3;
  loop185:
    T10 = CALL1(1,VARREF(YgooSmacrosYemptyQ),formsF3151);
    if (T10 != YPfalse) {
      T11 = CALL1(1,VARREF(YgooSmacrosYrevX),defnsF3149);
      CALL2(1,VARREF(YevalSast_linearizeYprogram_definitions_setter),T11,o_);
      T14 = CALL1(1,VARREF(YgooSmacrosYrevX),callsF3148);
      T13 = CALL1(1,VARREF(YevalSastYsequentialize),T14);
      T15 = CALL1(1,VARREF(YgooSmacrosYrevX),defnsF3149);
      T12 = CALL5(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYform_program),T13,VARREF(YevalSast_linearizeYform_definitions),T15);
      CALL2(1,VARREF(YevalSast_linearizeYprogram_form_setter),T12,o_);
      T9 = o_;
    } else {
      T17 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_138),iF3150,LITREF(lit_139));
      nameF3152 = T17;
      T19 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,nameF3152,YPfalse,LITREF(lit_140));
      bindingF3153 = T19;
      T22 = CALL2(1,VARREF(YevalSastYobjectify_quotation),nameF3152,YPint((P)4));
      T23 = CALL2(1,VARREF(YevalSastYobjectify_signature),Ynil,r_);
      T24 = CALL1(1,VARREF(Yhead),formsF3151);
      T21 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLast_primitiveG),VARREF(YevalSastYfunction_binding),bindingF3153,VARREF(YevalSastYfunction_debug_name),T22,VARREF(YevalSastYfunction_signature),T23,VARREF(YevalSastYfunction_body),T24);
      defnF3154 = T21;
      T27 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLargumentsG));
      T26 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSastYapplication_binding),bindingF3153,VARREF(YevalSastYapplication_arguments),T27,VARREF(YevalSastYapplication_tailQ),YPfalse);
      callF3155 = T26;
      T29 = CALL2(1,VARREF(YgooSmacrosYpair),callF3155,callsF3148);
      T30 = CALL2(1,VARREF(YgooSmacrosYpair),defnF3154,defnsF3149);
      T31 = CALL2(1,VARREF(YgooSmathYA),iF3150,YPint((P)1));
      T32 = CALL1(1,VARREF(Ytail),formsF3151);
      a185_0 = T29;
      a185_1 = T30;
      a185_2 = T31;
      a185_3 = T32;
      callsF3148 = a185_0;
      defnsF3149 = a185_1;
      iF3150 = a185_2;
      formsF3151 = a185_3;
      goto loop185;
      T25 = T28;
      T20 = T25;
      T18 = T20;
      T16 = T18;
      T9 = T16;
    }
    break;
  }
  T8 = T9;
  T6 = T8;
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_assoc_key_84) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYassoc_key));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assoc_key_setter_85) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYassoc_key));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assoc_value_86) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYassoc_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assoc_value_setter_87) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYassoc_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSast_linearizeYassoc) {
  P x_,y_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLassocG),VARREF(YevalSast_linearizeYassoc_key),x_,VARREF(YevalSast_linearizeYassoc_value),y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_assocq_89) {
  P x_,l_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  ARG(l_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),l_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T5 = CALL1(1,VARREF(Yhead),l_);
    T4 = CALL1(1,VARREF(YevalSast_linearizeYassoc_key),T5);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),x_,T4);
    if (T3 != YPfalse) {
      T6 = CALL1(1,VARREF(Yhead),l_);
      T2 = T6;
    } else {
      T8 = CALL1(1,VARREF(Ytail),l_);
      T7 = CALL2(1,VARREF(YevalSast_linearizeYassocq),x_,T8);
      T2 = T7;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_90) {
  P def_;
  P T0;
LINK_STACK();
  ARG(def_, 0);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYcollect_temporariesX),def_,def_,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gather_temporariesX_91) {
  P o_;
  P T0,T1,T2;
LINK_STACK();
  ARG(o_, 0);
  T1 = fun_90;
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),o_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
  CALL2(1,VARREF(YevalSast_linearizeYprogram_definitions_setter),T0,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_collect_temporariesX_92) {
  P o_,flat_fun_,r_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
  T0 = CALL4(1,VARREF(YevalSastYast_walkX),VARREF(YevalSast_linearizeYcollect_temporariesX),o_,flat_fun_,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_temporariesX_93) {
  P o_,flat_fun_,r_;
  P bF3157;
  P bindingF3156;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
  bindingF3156 = T1;
  T3 = CALL2(1,VARREF(YevalSast_linearizeYassocq),bindingF3156,r_);
  bF3157 = T3;
  if (bF3157 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSast_linearizeYassoc_value),bF3157);
    T5 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_binding),T6);
    T4 = T5;
  } else {
    T4 = o_;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSast_linearizeYprepend_renamings) {
  P x_,y_,r_;
  P yF3160;
  P xF3159;
  P zF3158;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  ARG(r_, 2);
  zF3158 = r_;
  xF3159 = x_;
  yF3160 = y_;
  for (;;) {
    P a186_0,a186_1,a186_2;
  loop186:
    T4 = CALL1(1,VARREF(YgooSmacrosYemptyQ),xF3159);
    if (T4 != YPfalse) {
      T3 = zF3158;
    } else {
      T8 = CALL1(1,VARREF(Yhead),xF3159);
      T9 = CALL1(1,VARREF(Yhead),yF3160);
      T7 = CALL2(1,VARREF(YevalSast_linearizeYassoc),T8,T9);
      T6 = CALL2(1,VARREF(YgooSmacrosYpair),T7,zF3158);
      T10 = CALL1(1,VARREF(Ytail),xF3159);
      T11 = CALL1(1,VARREF(Ytail),yF3160);
      a186_0 = T6;
      a186_1 = T10;
      a186_2 = T11;
      zF3158 = a186_0;
      xF3159 = a186_1;
      yF3160 = a186_2;
      goto loop186;
      T3 = T5;
    }
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_temporariesX_95) {
  P o_,flat_fun_,r_;
  P new_rF3162;
  P new_bindingsF3161;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
  T1 = CALL1(1,VARREF(YevalSastYfix_let_arguments),o_);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYcollect_temporariesX),T1,flat_fun_,r_);
  CALL2(1,VARREF(YevalSastYfix_let_arguments_setter),T0,o_);
  T4 = CALL1(1,VARREF(YevalSastYfix_let_bindings),o_);
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSast_linearizeYnew_renamed_binding),T4);
  new_bindingsF3161 = T3;
  T7 = CALL1(1,VARREF(YevalSastYfix_let_bindings),o_);
  T6 = CALL3(1,VARREF(YevalSast_linearizeYprepend_renamings),T7,new_bindingsF3161,r_);
  new_rF3162 = T6;
  CALL2(1,VARREF(YevalSast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF3161);
  CALL2(1,VARREF(YevalSastYfix_let_bindings_setter),new_bindingsF3161,o_);
  T9 = CALL1(1,VARREF(YevalSastYfix_let_body),o_);
  T8 = CALL3(1,VARREF(YevalSast_linearizeYcollect_temporariesX),T9,flat_fun_,new_rF3162);
  CALL2(1,VARREF(YevalSastYfix_let_body_setter),T8,o_);
  T5 = o_;
  T2 = T5;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_96) {
  P b_;
  P nbF3163;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(b_, 0);
  T1 = CALL2(1,VARREF(YevalSast_linearizeYassocq),b_,FREEREF(0));
  nbF3163 = T1;
  if (nbF3163 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSast_linearizeYassoc_value),nbF3163);
    T2 = T3;
  } else {
    T2 = b_;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_temporariesX_97) {
  P o_,flat_fun_,r_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
  T1 = FUNFAB(fun_96,1,r_);
  T2 = CALL1(1,VARREF(YevalSastYloop_bindings),o_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
  CALL2(1,VARREF(YevalSastYloop_bindings_setter),T0,o_);
  T4 = CALL1(1,VARREF(YevalSastYloop_body),o_);
  T3 = CALL3(1,VARREF(YevalSast_linearizeYcollect_temporariesX),T4,flat_fun_,r_);
  CALL2(1,VARREF(YevalSastYloop_body_setter),T3,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_collect_temporariesX_98) {
  P o_,flat_fun_,r_;
  P new_rF3165;
  P new_bindingsF3164;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
  T2 = CALL1(1,VARREF(YevalSastYlocals_bindings),o_);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSast_linearizeYnew_renamed_binding),T2);
  new_bindingsF3164 = T1;
  T5 = CALL1(1,VARREF(YevalSastYlocals_bindings),o_);
  T4 = CALL3(1,VARREF(YevalSast_linearizeYprepend_renamings),T5,new_bindingsF3164,r_);
  new_rF3165 = T4;
  T7 = CALL3(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSast_linearizeYcollect_temporariesX),flat_fun_,new_rF3165);
  T8 = CALL1(1,VARREF(YevalSastYlocals_functions),o_);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),T7,T8);
  CALL2(1,VARREF(YevalSastYlocals_functions_setter),T6,o_);
  CALL2(1,VARREF(YevalSast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF3164);
  CALL2(1,VARREF(YevalSastYlocals_bindings_setter),new_bindingsF3164,o_);
  T10 = CALL1(1,VARREF(YevalSastYlocals_body),o_);
  T9 = CALL3(1,VARREF(YevalSast_linearizeYcollect_temporariesX),T10,flat_fun_,new_rF3165);
  CALL2(1,VARREF(YevalSastYlocals_body_setter),T9,o_);
  T3 = o_;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_temporary_variablesX_99) {
  P flat_fun_,new_bindings_;
  P bindingsF3167;
  P tempsF3166;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(flat_fun_, 0);
  ARG(new_bindings_, 1);
  T2 = CALL1(1,VARREF(YevalSastYfunction_temporaries),flat_fun_);
  tempsF3166 = T2;
  bindingsF3167 = new_bindings_;
  for (;;) {
    P a187_0,a187_1;
  loop187:
    T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindingsF3167);
    if (T5 != YPfalse) {
      T6 = CALL2(1,VARREF(YevalSastYfunction_temporaries_setter),tempsF3166,flat_fun_);
      T4 = T6;
    } else {
      T9 = CALL1(1,VARREF(Yhead),bindingsF3167);
      T8 = CALL2(1,VARREF(YgooScolsScolYmemQ),tempsF3166,T9);
      if (T8 != YPfalse) {
        T11 = CALL1(1,VARREF(Ytail),bindingsF3167);
        a187_0 = tempsF3166;
        a187_1 = T11;
        tempsF3166 = a187_0;
        bindingsF3167 = a187_1;
        goto loop187;
        T7 = T10;
      } else {
        T14 = CALL1(1,VARREF(Yhead),bindingsF3167);
        T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,tempsF3166);
        T15 = CALL1(1,VARREF(Ytail),bindingsF3167);
        a187_0 = T13;
        a187_1 = T15;
        tempsF3166 = a187_0;
        bindingsF3167 = a187_1;
        goto loop187;
        T7 = T12;
      }
      T4 = T7;
    }
    break;
  }
  T3 = T4;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_index_100) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbinding_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_index_setter_101) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_new_renamed_binding_102) {
  P binding_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(binding_, 0);
  T0 = CALL2(1,VARREF(YgooSmathYA),DYNREF(YevalSast_linearizeYTrenaming_bindings_counterT),YPint((P)1));
  DYNSET(YevalSast_linearizeYTrenaming_bindings_counterT,T0);
  T2 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
  T3 = CALL1(1,VARREF(YevalSastYbinding_type),binding_);
  T4 = CALL1(1,VARREF(YevalSastYbinding_dynamic_extentQ),binding_);
  T1 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSast_linearizeYLrenamed_local_bindingG),VARREF(YevalSastYbinding_name),T2,VARREF(YevalSastYbinding_type),T3,VARREF(YevalSastYbinding_dynamic_extentQ),T4,VARREF(YevalSastYbinding_index),DYNREF(YevalSast_linearizeYTrenaming_bindings_counterT));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_103) {
  P def_;
  P T0;
LINK_STACK();
  ARG(def_, 0);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),def_,YPfalse,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_104) {
  P T0,T1,T2;
LINK_STACK();
  VARSET(YevalSast_linearizeYTregister_passiveQT,FREEREF(0));
  T1 = fun_103;
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),FREEREF(1));
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_105) {
  P T0;
LINK_STACK();
  T0 = VARSET(YevalSast_linearizeYTregister_passiveQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_register_allocateX_106) {
  P o_,register_passiveQ_;
  P x_1481F3168;
  P T0,T1,T2;
LINK_STACK();
  ARG(o_, 0);
  ARG(register_passiveQ_, 1);
  x_1481F3168 = VARREF(YevalSast_linearizeYTregister_passiveQT);
  T1 = FUNFAB(fun_104,2,register_passiveQ_,o_);
  T2 = FUNFAB(fun_105,1,x_1481F3168);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(YevalSast_linearizeYallocate_register) {
  P o_,flat_fun_,valQ_;
  P tmpF3170;
  P tmpF3169;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
  tmpF3169 = valQ_;
  if (tmpF3169 != YPfalse) {
    tmpF3170 = flat_fun_;
    if (tmpF3170 != YPfalse) {
      T6 = CALL1(1,VARREF(YevalSastYprogram_register),o_);
      T5 = CALL1(1,VARREF(Ynot),T6);
      T4 = T5;
    } else {
      T4 = YPfalse;
    }
    T3 = T4;
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  if (T1 != YPfalse) {
    T8 = CALL1(1,VARREF(YevalSastYfunction_registers),flat_fun_);
    T7 = CALL1(1,VARREF(YgooStypesYlen),T8);
    CALL2(1,VARREF(YevalSastYprogram_register_setter),T7,o_);
    T10 = CALL1(1,VARREF(YevalSastYfunction_registers),flat_fun_);
    T9 = CALL2(1,VARREF(YgooScolsScolxYaddX),T10,o_);
    T0 = T9;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_108) {
  P o_,flat_fun_,valQ_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
  CALL3(1,VARREF(YevalSast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T0 = CALL4(1,VARREF(YevalSastYast_walkX),VARREF(YevalSast_linearizeYcollect_registersX),o_,flat_fun_,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_109) {
  P o_,flat_fun_,valQ_;
  P tmpF3173;
  P next_xF3172;
  P xF3171;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
  xF3171 = o_;
  for (;;) {
    P a188_0;
  loop188:
    T4 = CALL1(1,VARREF(YgooSmacrosYemptyQ),xF3171);
    if (T4 != YPfalse) {
      T3 = o_;
    } else {
      T6 = CALL1(1,VARREF(Ytail),xF3171);
      next_xF3172 = T6;
      T7 = CALL1(1,VARREF(Yhead),xF3171);
      tmpF3173 = valQ_;
      if (tmpF3173 != YPfalse) {
        T10 = CALL1(1,VARREF(YgooSmacrosYemptyQ),next_xF3172);
        T9 = T10;
      } else {
        T9 = YPfalse;
      }
      T8 = T9;
      CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T7,flat_fun_,T8);
      a188_0 = next_xF3172;
      xF3171 = a188_0;
      goto loop188;
      T5 = T11;
      T3 = T5;
    }
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_110) {
  P o_,flat_fun_,valQ_;
  P T0,T1;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
  if (VARREF(YevalSast_linearizeYTregister_passiveQT) != YPfalse) {
    T0 = CALL3(1,VARREF(YevalSast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  } else {
  }
  T1 = CALL4(1,VARREF(YevalSastYast_walkX),VARREF(YevalSast_linearizeYcollect_registersX),o_,flat_fun_,YPtrue);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_111) {
  P def_;
  P T0;
LINK_STACK();
  ARG(def_, 0);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),def_,FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_112) {
  P o_,flat_fun_,valQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
  CALL3(1,VARREF(YevalSast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T0 = FUNFAB(fun_111,2,flat_fun_,valQ_);
  T1 = CALL1(1,VARREF(YevalSast_linearizeYform_definitions),o_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYform_program),o_);
  CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T2,flat_fun_,valQ_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_collect_registersX_113) {
  P o_,flat_fun_,valQ_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
  CALL3(1,VARREF(YevalSast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T0 = CALL1(1,VARREF(YevalSastYfunction_signature),o_);
  CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T0,flat_fun_,YPtrue);
  T1 = CALL3(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSast_linearizeYcollect_registersX),flat_fun_,YPtrue);
  T2 = CALL1(1,VARREF(YevalSastYfunction_data_refs),o_);
  CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
  T3 = CALL1(1,VARREF(YevalSastYfunction_debug_name),o_);
  CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T3,o_,YPtrue);
  T4 = CALL1(1,VARREF(YevalSastYfunction_body),o_);
  CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T4,o_,YPtrue);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_collect_registersX_114) {
  P o_,flat_fun_,valQ_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
  T0 = CALL1(1,VARREF(YevalSastYfunction_body),o_);
  CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T0,o_,YPtrue);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_ast_contains_funQ_115) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(YPtrue);
}

FUNCODEDEF(fun_walk_116) {
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

FUNCODEDEF(fun_117) {
  P return_;
  P walkF3174;
  P T0,T1;
LINK_STACK();
  ARG(return_, 0);
  T0 = FUNSHELL(0,fun_walk_116,2);
  walkF3174 = T0;
  FUNINIT(walkF3174, 2,return_,walkF3174);
  T1 = CALL2(1,VARREF(YevalSastYast_walk),walkF3174,FREEREF(0));
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_ast_contains_funQ_118) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = FUNFAB(fun_117,1,x_);
  T0 = with_exit(T1);
UNLINK_STACK();
  RET(T0);
}

P YevalSast_linearizeY___main_0___() {
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
  P T208,T209,T210,T211;
DEFCREGS();
  lit_0 = YPPsym((P)"<box-read>");
  T1 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YevalSast_linearizeYLbox_readG,T0);
  lit_1 = YPPsym((P)"box-reference");
  lit_2 = YPPlist(1,YPPsym((P)"_x"));
  T2 = YPsig(LITREF(lit_2),YPPlist(1,VARREF(YevalSast_linearizeYLbox_readG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_0 = YPmet(FUNCODEREF(fun_box_reference_0),LITREF(lit_1),T2,ENVNUL,PNUL,sloc(11));
  T4 = VARREF_OR(YevalSast_linearizeYbox_reference,YPfalse);
  T5 = fun_box_reference_0;
  T3 = XCALL2(1,VARREF(YPdefine_method),T4,T5);
  VARSET(YevalSast_linearizeYbox_reference,T3);
  lit_3 = YPPsym((P)"box-reference-setter");
  lit_4 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T6 = YPsig(LITREF(lit_4),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLbox_readG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_1 = YPmet(FUNCODEREF(fun_box_reference_setter_1),LITREF(lit_3),T6,ENVNUL,PNUL,sloc(11));
  T8 = VARREF_OR(YevalSast_linearizeYbox_reference_setter,YPfalse);
  T9 = fun_box_reference_setter_1;
  T7 = XCALL2(1,VARREF(YPdefine_method),T8,T9);
  VARSET(YevalSast_linearizeYbox_reference_setter,T7);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLbox_readG),VARREF(YevalSast_linearizeYbox_reference),VARREF(YevalSast_linearizeYbox_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_5 = YPPsym((P)"<box-write>");
  T11 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T10 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_5),T11);
  VARSET(YevalSast_linearizeYLbox_writeG,T10);
  lit_6 = YPPlist(1,YPPsym((P)"_x"));
  T12 = YPsig(LITREF(lit_6),YPPlist(1,VARREF(YevalSast_linearizeYLbox_writeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_2 = YPmet(FUNCODEREF(fun_box_reference_2),LITREF(lit_1),T12,ENVNUL,PNUL,sloc(14));
  T14 = VARREF_OR(YevalSast_linearizeYbox_reference,YPfalse);
  T15 = fun_box_reference_2;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T15);
  VARSET(YevalSast_linearizeYbox_reference,T13);
  lit_7 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T16 = YPsig(LITREF(lit_7),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLbox_writeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_3 = YPmet(FUNCODEREF(fun_box_reference_setter_3),LITREF(lit_3),T16,ENVNUL,PNUL,sloc(14));
  T18 = VARREF_OR(YevalSast_linearizeYbox_reference_setter,YPfalse);
  T19 = fun_box_reference_setter_3;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T19);
  VARSET(YevalSast_linearizeYbox_reference_setter,T17);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLbox_writeG),VARREF(YevalSast_linearizeYbox_reference),VARREF(YevalSast_linearizeYbox_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_8 = YPPsym((P)"box-form");
  lit_9 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPsig(LITREF(lit_9),YPPlist(1,VARREF(YevalSast_linearizeYLbox_writeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_form_4 = YPmet(FUNCODEREF(fun_box_form_4),LITREF(lit_8),T20,ENVNUL,PNUL,sloc(15));
  T22 = VARREF_OR(YevalSast_linearizeYbox_form,YPfalse);
  T23 = fun_box_form_4;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T23);
  VARSET(YevalSast_linearizeYbox_form,T21);
  lit_10 = YPPsym((P)"box-form-setter");
  lit_11 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T24 = YPsig(LITREF(lit_11),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLbox_writeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_form_setter_5 = YPmet(FUNCODEREF(fun_box_form_setter_5),LITREF(lit_10),T24,ENVNUL,PNUL,sloc(15));
  T26 = VARREF_OR(YevalSast_linearizeYbox_form_setter,YPfalse);
  T27 = fun_box_form_setter_5;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T27);
  VARSET(YevalSast_linearizeYbox_form_setter,T25);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLbox_writeG),VARREF(YevalSast_linearizeYbox_form),VARREF(YevalSast_linearizeYbox_form_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_12 = YPPsym((P)"<box-creation>");
  T29 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T28 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_12),T29);
  VARSET(YevalSast_linearizeYLbox_creationG,T28);
  lit_13 = YPPlist(1,YPPsym((P)"_x"));
  T30 = YPsig(LITREF(lit_13),YPPlist(1,VARREF(YevalSast_linearizeYLbox_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_6 = YPmet(FUNCODEREF(fun_box_reference_6),LITREF(lit_1),T30,ENVNUL,PNUL,sloc(18));
  T32 = VARREF_OR(YevalSast_linearizeYbox_reference,YPfalse);
  T33 = fun_box_reference_6;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T33);
  VARSET(YevalSast_linearizeYbox_reference,T31);
  lit_14 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T34 = YPsig(LITREF(lit_14),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLbox_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_7 = YPmet(FUNCODEREF(fun_box_reference_setter_7),LITREF(lit_3),T34,ENVNUL,PNUL,sloc(18));
  T36 = VARREF_OR(YevalSast_linearizeYbox_reference_setter,YPfalse);
  T37 = fun_box_reference_setter_7;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T37);
  VARSET(YevalSast_linearizeYbox_reference_setter,T35);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLbox_creationG),VARREF(YevalSast_linearizeYbox_reference),VARREF(YevalSast_linearizeYbox_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_15 = YPPsym((P)"insert-box!");
  lit_16 = YPPlist(1,YPPsym((P)"o"));
  T38 = YPsig(LITREF(lit_16),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_8 = YPmet(FUNCODEREF(fun_insert_boxX_8),LITREF(lit_15),T38,ENVNUL,PNUL,sloc(20));
  T40 = VARREF_OR(YevalSast_linearizeYinsert_boxX,YPfalse);
  T41 = fun_insert_boxX_8;
  T39 = XCALL2(1,VARREF(YPdefine_method),T40,T41);
  VARSET(YevalSast_linearizeYinsert_boxX,T39);
  lit_17 = YPPlist(1,YPPsym((P)"o"));
  T42 = YPsig(LITREF(lit_17),YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_9 = YPmet(FUNCODEREF(fun_insert_boxX_9),LITREF(lit_15),T42,ENVNUL,PNUL,sloc(23));
  T44 = VARREF_OR(YevalSast_linearizeYinsert_boxX,YPfalse);
  T45 = fun_insert_boxX_9;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T45);
  VARSET(YevalSast_linearizeYinsert_boxX,T43);
  lit_18 = YPPlist(1,YPPsym((P)"o"));
  T46 = YPsig(LITREF(lit_18),YPPlist(1,VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_10 = YPmet(FUNCODEREF(fun_insert_boxX_10),LITREF(lit_15),T46,ENVNUL,PNUL,sloc(29));
  T48 = VARREF_OR(YevalSast_linearizeYinsert_boxX,YPfalse);
  T49 = fun_insert_boxX_10;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T49);
  VARSET(YevalSast_linearizeYinsert_boxX,T47);
  lit_19 = YPPlist(1,YPPsym((P)"o"));
  T50 = YPsig(LITREF(lit_19),YPPlist(1,VARREF(YevalSastYLlocal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_11 = YPmet(FUNCODEREF(fun_insert_boxX_11),LITREF(lit_15),T50,ENVNUL,PNUL,sloc(35));
  T52 = VARREF_OR(YevalSast_linearizeYinsert_boxX,YPfalse);
  T53 = fun_insert_boxX_11;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T53);
  VARSET(YevalSast_linearizeYinsert_boxX,T51);
  lit_20 = YPPlist(1,YPPsym((P)"o"));
  T54 = YPsig(LITREF(lit_20),YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_12 = YPmet(FUNCODEREF(fun_insert_boxX_12),LITREF(lit_15),T54,ENVNUL,PNUL,sloc(40));
  T56 = VARREF_OR(YevalSast_linearizeYinsert_boxX,YPfalse);
  T57 = fun_insert_boxX_12;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T57);
  VARSET(YevalSast_linearizeYinsert_boxX,T55);
  lit_21 = YPPlist(1,YPPsym((P)"o"));
  T58 = YPsig(LITREF(lit_21),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_13 = YPmet(FUNCODEREF(fun_insert_boxX_13),LITREF(lit_15),T58,ENVNUL,PNUL,sloc(46));
  T60 = VARREF_OR(YevalSast_linearizeYinsert_boxX,YPfalse);
  T61 = fun_insert_boxX_13;
  T59 = XCALL2(1,VARREF(YPdefine_method),T60,T61);
  VARSET(YevalSast_linearizeYinsert_boxX,T59);
  lit_22 = YPPlist(1,YPPsym((P)"o"));
  T62 = YPsig(LITREF(lit_22),YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_14 = YPmet(FUNCODEREF(fun_insert_boxX_14),LITREF(lit_15),T62,ENVNUL,PNUL,sloc(54));
  T64 = VARREF_OR(YevalSast_linearizeYinsert_boxX,YPfalse);
  T65 = fun_insert_boxX_14;
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T65);
  VARSET(YevalSast_linearizeYinsert_boxX,T63);
  lit_23 = YPPsym((P)"boxify-mutable-bindings");
  lit_24 = YPPlist(2,YPPsym((P)"form"),YPPsym((P)"bindings"));
  T66 = YPsig(LITREF(lit_24),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_boxify_mutable_bindings_15 = YPmet(FUNCODEREF(fun_boxify_mutable_bindings_15),LITREF(lit_23),T66,ENVNUL,PNUL,sloc(62));
  T68 = VARREF_OR(YevalSast_linearizeYboxify_mutable_bindings,YPfalse);
  T69 = fun_boxify_mutable_bindings_15;
  T67 = XCALL2(1,VARREF(YPdefine_method),T68,T69);
  VARSET(YevalSast_linearizeYboxify_mutable_bindings,T67);
  lit_25 = YPPsym((P)"unconstrained-type?");
  lit_26 = YPPlist(1,YPPsym((P)"b"));
  T70 = YPsig(LITREF(lit_26),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_16 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_16),LITREF(lit_25),T70,ENVNUL,PNUL,sloc(79));
  T72 = VARREF_OR(YevalSast_linearizeYunconstrained_typeQ,YPfalse);
  T73 = fun_unconstrained_typeQ_16;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T73);
  VARSET(YevalSast_linearizeYunconstrained_typeQ,T71);
  lit_27 = YPPlist(1,YPPsym((P)"b"));
  lit_28 = YPPsym((P)"goo/boot");
  lit_29 = YPPsym((P)"<any>");
  T74 = YPsig(LITREF(lit_27),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_17 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_17),LITREF(lit_25),T74,ENVNUL,PNUL,sloc(82));
  T76 = VARREF_OR(YevalSast_linearizeYunconstrained_typeQ,YPfalse);
  T77 = fun_unconstrained_typeQ_17;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T77);
  VARSET(YevalSast_linearizeYunconstrained_typeQ,T75);
  lit_30 = YPPlist(1,YPPsym((P)"o"));
  T78 = YPsig(LITREF(lit_30),YPPlist(1,VARREF(YevalSastYLmodule_binding_referenceG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_18 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_18),LITREF(lit_25),T78,ENVNUL,PNUL,sloc(85));
  T80 = VARREF_OR(YevalSast_linearizeYunconstrained_typeQ,YPfalse);
  T81 = fun_unconstrained_typeQ_18;
  T79 = XCALL2(1,VARREF(YPdefine_method),T80,T81);
  VARSET(YevalSast_linearizeYunconstrained_typeQ,T79);
  lit_31 = YPPsym((P)"do-do-call-analysis!");
  lit_32 = YPPlist(6,YPPsym((P)"o"),YPPsym((P)"r"),YPPsym((P)"t"),YPPsym((P)"f"),YPPsym((P)"s"),YPPsym((P)"funs"));
  T82 = YPsig(LITREF(lit_32),YPPlist(6,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  fun_do_do_call_analysisX_19 = YPmet(FUNCODEREF(fun_do_do_call_analysisX_19),LITREF(lit_31),T82,ENVNUL,PNUL,sloc(88));
  T84 = VARREF_OR(YevalSast_linearizeYdo_do_call_analysisX,YPfalse);
  T85 = fun_do_do_call_analysisX_19;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T85);
  VARSET(YevalSast_linearizeYdo_do_call_analysisX,T83);
  lit_33 = YPPsym((P)"do-call-analysis!");
  lit_34 = YPPlist(6,YPPsym((P)"o"),YPPsym((P)"r"),YPPsym((P)"t"),YPPsym((P)"f"),YPPsym((P)"s"),YPPsym((P)"funs"));
  T86 = YPsig(LITREF(lit_34),YPPlist(6,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  fun_do_call_analysisX_20 = YPmet(FUNCODEREF(fun_do_call_analysisX_20),LITREF(lit_33),T86,ENVNUL,PNUL,sloc(91));
  T88 = VARREF_OR(YevalSast_linearizeYdo_call_analysisX,YPfalse);
  T89 = fun_do_call_analysisX_20;
  T87 = XCALL2(1,VARREF(YPdefine_method),T88,T89);
  VARSET(YevalSast_linearizeYdo_call_analysisX,T87);
  lit_35 = YPPsym((P)"reopt-top!");
  lit_36 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"t"));
  T90 = YPsig(LITREF(lit_36),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSast_linearizeYreopt_topX = YPmet(FUNCODEREF(YevalSast_linearizeYreopt_topX),LITREF(lit_35),T90,ENVNUL,PNUL,sloc(94));
  T91 = YevalSast_linearizeYreopt_topX;
  VARSET(YevalSast_linearizeYreopt_topX,T91);
  lit_37 = YPPlist(6,YPPsym((P)"o"),YPPsym((P)"r"),YPPsym((P)"t"),YPPsym((P)"f"),YPPsym((P)"s"),YPPsym((P)"funs"));
  T92 = YPsig(LITREF(lit_37),YPPlist(6,VARREF(YevalSastYLlocal_referenceG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  fun_do_call_analysisX_22 = YPmet(FUNCODEREF(fun_do_call_analysisX_22),LITREF(lit_33),T92,ENVNUL,PNUL,sloc(97));
  T94 = VARREF_OR(YevalSast_linearizeYdo_call_analysisX,YPfalse);
  T95 = fun_do_call_analysisX_22;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T95);
  VARSET(YevalSast_linearizeYdo_call_analysisX,T93);
  lit_38 = YPPlist(6,YPPsym((P)"o"),YPPsym((P)"r"),YPPsym((P)"t"),YPPsym((P)"f"),YPPsym((P)"s"),YPPsym((P)"funs"));
  T96 = YPsig(LITREF(lit_38),YPPlist(6,VARREF(YevalSastYLast_embodied_functionG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  fun_do_call_analysisX_23 = YPmet(FUNCODEREF(fun_do_call_analysisX_23),LITREF(lit_33),T96,ENVNUL,PNUL,sloc(109));
  T98 = VARREF_OR(YevalSast_linearizeYdo_call_analysisX,YPfalse);
  T99 = fun_do_call_analysisX_23;
  T97 = XCALL2(1,VARREF(YPdefine_method),T98,T99);
  VARSET(YevalSast_linearizeYdo_call_analysisX,T97);
  lit_39 = YPPsym((P)"ensure-loop");
  lit_40 = YPPlist(1,YPPsym((P)"f"));
  T100 = YPsig(LITREF(lit_40),YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YevalSastYLloopG),Ynil);
  fun_ensure_loop_24 = YPmet(FUNCODEREF(fun_ensure_loop_24),LITREF(lit_39),T100,ENVNUL,PNUL,sloc(114));
  T102 = VARREF_OR(YevalSast_linearizeYensure_loop,YPfalse);
  T103 = fun_ensure_loop_24;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T103);
  VARSET(YevalSast_linearizeYensure_loop,T101);
  lit_41 = YPPlist(6,YPPsym((P)"o"),YPPsym((P)"r"),YPPsym((P)"t"),YPPsym((P)"f"),YPPsym((P)"s"),YPPsym((P)"funs"));
  T104 = YPsig(LITREF(lit_41),YPPlist(6,VARREF(YevalSastYLpredefined_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  fun_do_call_analysisX_25 = YPmet(FUNCODEREF(fun_do_call_analysisX_25),LITREF(lit_33),T104,ENVNUL,PNUL,sloc(122));
  T106 = VARREF_OR(YevalSast_linearizeYdo_call_analysisX,YPfalse);
  T107 = fun_do_call_analysisX_25;
  T105 = XCALL2(1,VARREF(YPdefine_method),T106,T107);
  VARSET(YevalSast_linearizeYdo_call_analysisX,T105);
  lit_42 = YPPlist(6,YPPsym((P)"o"),YPPsym((P)"r"),YPPsym((P)"t"),YPPsym((P)"f"),YPPsym((P)"s"),YPPsym((P)"funs"));
  lit_43 = YPPlist(1,YPPsym((P)"x"));
  T109 = YPsig(LITREF(lit_43),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T109,ENVNUL,PNUL,sloc(148));
  T108 = YPsig(LITREF(lit_42),YPPlist(6,VARREF(YevalSastYLregular_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  fun_do_call_analysisX_27 = YPmet(FUNCODEREF(fun_do_call_analysisX_27),LITREF(lit_33),T108,ENVNUL,PNUL,sloc(134));
  T111 = VARREF_OR(YevalSast_linearizeYdo_call_analysisX,YPfalse);
  T112 = fun_do_call_analysisX_27;
  T110 = XCALL2(1,VARREF(YPdefine_method),T111,T112);
  VARSET(YevalSast_linearizeYdo_call_analysisX,T110);
  lit_44 = YPPlist(6,YPPsym((P)"o"),YPPsym((P)"r"),YPPsym((P)"t"),YPPsym((P)"f"),YPPsym((P)"s"),YPPsym((P)"funs"));
  T113 = YPsig(LITREF(lit_44),YPPlist(6,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  fun_do_call_analysisX_28 = YPmet(FUNCODEREF(fun_do_call_analysisX_28),LITREF(lit_33),T113,ENVNUL,PNUL,sloc(162));
  T115 = VARREF_OR(YevalSast_linearizeYdo_call_analysisX,YPfalse);
  T116 = fun_do_call_analysisX_28;
  T114 = XCALL2(1,VARREF(YPdefine_method),T115,T116);
  VARSET(YevalSast_linearizeYdo_call_analysisX,T114);
  lit_45 = YPPsym((P)"analyze-calls");
  lit_46 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"r"));
  lit_47 = YPPlist(1,YPPsym((P)"x"));
  lit_48 = YPPlist(1,YPPsym((P)"e"));
  T119 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T119,ENVNUL,PNUL,sloc(179));
  T118 = YPsig(LITREF(lit_48),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T118,ENVNUL,PNUL,sloc(183));
  T117 = YPsig(LITREF(lit_46),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_analyze_calls_31 = YPmet(FUNCODEREF(fun_analyze_calls_31),LITREF(lit_45),T117,ENVNUL,PNUL,sloc(175));
  T121 = VARREF_OR(YevalSast_linearizeYanalyze_calls,YPfalse);
  T122 = fun_analyze_calls_31;
  T120 = XCALL2(1,VARREF(YPdefine_method),T121,T122);
  VARSET(YevalSast_linearizeYanalyze_calls,T120);
  lit_49 = YPPsym((P)"<free-reference>");
  T124 = (P)YPpair(VARREF(YevalSastYLreal_referenceG),Ynil);
  T123 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_49),T124);
  VARSET(YevalSast_linearizeYLfree_referenceG,T123);
  lit_50 = YPPsym((P)"reference-offset");
  lit_51 = YPPlist(1,YPPsym((P)"_x"));
  T125 = YPsig(LITREF(lit_51),YPPlist(1,VARREF(YevalSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_offset_32 = YPmet(FUNCODEREF(fun_reference_offset_32),LITREF(lit_50),T125,ENVNUL,PNUL,sloc(188));
  T127 = VARREF_OR(YevalSast_linearizeYreference_offset,YPfalse);
  T128 = fun_reference_offset_32;
  T126 = XCALL2(1,VARREF(YPdefine_method),T127,T128);
  VARSET(YevalSast_linearizeYreference_offset,T126);
  lit_52 = YPPsym((P)"reference-offset-setter");
  lit_53 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T130 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T129 = YPsig(LITREF(lit_53),YPPlist(2,T130,VARREF(YevalSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_offset_setter_33 = YPmet(FUNCODEREF(fun_reference_offset_setter_33),LITREF(lit_52),T129,ENVNUL,PNUL,sloc(188));
  T132 = VARREF_OR(YevalSast_linearizeYreference_offset_setter,YPfalse);
  T133 = fun_reference_offset_setter_33;
  T131 = XCALL2(1,VARREF(YPdefine_method),T132,T133);
  VARSET(YevalSast_linearizeYreference_offset_setter,T131);
  T134 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YevalSast_linearizeYreference_offset),VARREF(YevalSast_linearizeYreference_offset_setter),T134,VARREF(YPprop_unbound_error));
  lit_54 = YPPsym((P)"reference-self?");
  lit_55 = YPPlist(1,YPPsym((P)"_x"));
  T135 = YPsig(LITREF(lit_55),YPPlist(1,VARREF(YevalSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_selfQ_34 = YPmet(FUNCODEREF(fun_reference_selfQ_34),LITREF(lit_54),T135,ENVNUL,PNUL,sloc(189));
  T137 = VARREF_OR(YevalSast_linearizeYreference_selfQ,YPfalse);
  T138 = fun_reference_selfQ_34;
  T136 = XCALL2(1,VARREF(YPdefine_method),T137,T138);
  VARSET(YevalSast_linearizeYreference_selfQ,T136);
  lit_56 = YPPsym((P)"reference-self?-setter");
  lit_57 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T139 = YPsig(LITREF(lit_57),YPPlist(2,VARREF(YLlogG),VARREF(YevalSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_selfQ_setter_35 = YPmet(FUNCODEREF(fun_reference_selfQ_setter_35),LITREF(lit_56),T139,ENVNUL,PNUL,sloc(189));
  T141 = VARREF_OR(YevalSast_linearizeYreference_selfQ_setter,YPfalse);
  T142 = fun_reference_selfQ_setter_35;
  T140 = XCALL2(1,VARREF(YPdefine_method),T141,T142);
  VARSET(YevalSast_linearizeYreference_selfQ_setter,T140);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YevalSast_linearizeYreference_selfQ),VARREF(YevalSast_linearizeYreference_selfQ_setter),VARREF(YLlogG),VARREF(YPprop_unbound_error));
  lit_58 = YPPsym((P)"lift!");
  lit_59 = YPPlist(1,YPPsym((P)"o"));
  T143 = YPsig(LITREF(lit_59),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_liftX_36 = YPmet(FUNCODEREF(fun_liftX_36),LITREF(lit_58),T143,ENVNUL,PNUL,sloc(191));
  T145 = VARREF_OR(YevalSast_linearizeYliftX,YPfalse);
  T146 = fun_liftX_36;
  T144 = XCALL2(1,VARREF(YPdefine_method),T145,T146);
  VARSET(YevalSast_linearizeYliftX,T144);
  lit_60 = YPPsym((P)"lift-procedures!");
  lit_61 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T147 = YPsig(LITREF(lit_61),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_37 = YPmet(FUNCODEREF(fun_lift_proceduresX_37),LITREF(lit_60),T147,ENVNUL,PNUL,sloc(194));
  T149 = VARREF_OR(YevalSast_linearizeYlift_proceduresX,YPfalse);
  T150 = fun_lift_proceduresX_37;
  T148 = XCALL2(1,VARREF(YPdefine_method),T149,T150);
  VARSET(YevalSast_linearizeYlift_proceduresX,T148);
  lit_62 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T151 = YPsig(LITREF(lit_62),YPPlist(3,VARREF(YevalSastYLlocal_referenceG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_38 = YPmet(FUNCODEREF(fun_lift_proceduresX_38),LITREF(lit_60),T151,ENVNUL,PNUL,sloc(197));
  T153 = VARREF_OR(YevalSast_linearizeYlift_proceduresX,YPfalse);
  T154 = fun_lift_proceduresX_38;
  T152 = XCALL2(1,VARREF(YPdefine_method),T153,T154);
  VARSET(YevalSast_linearizeYlift_proceduresX,T152);
  lit_63 = YPPsym((P)"adjoin-free-binding!");
  lit_64 = YPPlist(2,YPPsym((P)"flat-fun"),YPPsym((P)"ref"));
  T155 = YPsig(LITREF(lit_64),YPPlist(2,VARREF(YevalSastYLast_methodG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_adjoin_free_bindingX_39 = YPmet(FUNCODEREF(fun_adjoin_free_bindingX_39),LITREF(lit_63),T155,ENVNUL,PNUL,sloc(208));
  T157 = VARREF_OR(YevalSast_linearizeYadjoin_free_bindingX,YPfalse);
  T158 = fun_adjoin_free_bindingX_39;
  T156 = XCALL2(1,VARREF(YPdefine_method),T157,T158);
  VARSET(YevalSast_linearizeYadjoin_free_bindingX,T156);
  lit_65 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T159 = YPsig(LITREF(lit_65),YPPlist(3,VARREF(YevalSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_40 = YPmet(FUNCODEREF(fun_lift_proceduresX_40),LITREF(lit_60),T159,ENVNUL,PNUL,sloc(225));
  T161 = VARREF_OR(YevalSast_linearizeYlift_proceduresX,YPfalse);
  T162 = fun_lift_proceduresX_40;
  T160 = XCALL2(1,VARREF(YPdefine_method),T161,T162);
  VARSET(YevalSast_linearizeYlift_proceduresX,T160);
  lit_66 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T163 = YPsig(LITREF(lit_66),YPPlist(3,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_41 = YPmet(FUNCODEREF(fun_lift_proceduresX_41),LITREF(lit_60),T163,ENVNUL,PNUL,sloc(233));
  T165 = VARREF_OR(YevalSast_linearizeYlift_proceduresX,YPfalse);
  T166 = fun_lift_proceduresX_41;
  T164 = XCALL2(1,VARREF(YPdefine_method),T165,T166);
  VARSET(YevalSast_linearizeYlift_proceduresX,T164);
  lit_67 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T167 = YPsig(LITREF(lit_67),YPPlist(3,VARREF(YevalSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_42 = YPmet(FUNCODEREF(fun_lift_proceduresX_42),LITREF(lit_60),T167,ENVNUL,PNUL,sloc(242));
  T169 = VARREF_OR(YevalSast_linearizeYlift_proceduresX,YPfalse);
  T170 = fun_lift_proceduresX_42;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T170);
  VARSET(YevalSast_linearizeYlift_proceduresX,T168);
  lit_68 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T171 = YPsig(LITREF(lit_68),YPPlist(3,VARREF(YevalSastYLast_genericG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_43 = YPmet(FUNCODEREF(fun_lift_proceduresX_43),LITREF(lit_60),T171,ENVNUL,PNUL,sloc(247));
  T173 = VARREF_OR(YevalSast_linearizeYlift_proceduresX,YPfalse);
  T174 = fun_lift_proceduresX_43;
  T172 = XCALL2(1,VARREF(YPdefine_method),T173,T174);
  VARSET(YevalSast_linearizeYlift_proceduresX,T172);
  lit_69 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T175 = YPsig(LITREF(lit_69),YPPlist(3,VARREF(YevalSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_44 = YPmet(FUNCODEREF(fun_lift_proceduresX_44),LITREF(lit_60),T175,ENVNUL,PNUL,sloc(250));
  T177 = VARREF_OR(YevalSast_linearizeYlift_proceduresX,YPfalse);
  T178 = fun_lift_proceduresX_44;
  T176 = XCALL2(1,VARREF(YPdefine_method),T177,T178);
  VARSET(YevalSast_linearizeYlift_proceduresX,T176);
  lit_70 = YPPsym((P)"<flattened-program>");
  T180 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T179 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_70),T180);
  VARSET(YevalSast_linearizeYLflattened_programG,T179);
  lit_71 = YPPsym((P)"program-form");
  lit_72 = YPPlist(1,YPPsym((P)"_x"));
  T181 = YPsig(LITREF(lit_72),YPPlist(1,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_form_45 = YPmet(FUNCODEREF(fun_program_form_45),LITREF(lit_71),T181,ENVNUL,PNUL,sloc(260));
  T183 = VARREF_OR(YevalSast_linearizeYprogram_form,YPfalse);
  T184 = fun_program_form_45;
  T182 = XCALL2(1,VARREF(YPdefine_method),T183,T184);
  VARSET(YevalSast_linearizeYprogram_form,T182);
  lit_73 = YPPsym((P)"program-form-setter");
  lit_74 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T186 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YevalSastYLprogramG));
  T185 = YPsig(LITREF(lit_74),YPPlist(2,T186,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_form_setter_46 = YPmet(FUNCODEREF(fun_program_form_setter_46),LITREF(lit_73),T185,ENVNUL,PNUL,sloc(260));
  T188 = VARREF_OR(YevalSast_linearizeYprogram_form_setter,YPfalse);
  T189 = fun_program_form_setter_46;
  T187 = XCALL2(1,VARREF(YPdefine_method),T188,T189);
  VARSET(YevalSast_linearizeYprogram_form_setter,T187);
  T190 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YevalSastYLprogramG));
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YevalSast_linearizeYprogram_form),VARREF(YevalSast_linearizeYprogram_form_setter),T190,VARREF(YPprop_unbound_error));
  lit_75 = YPPsym((P)"program-quotations");
  lit_76 = YPPlist(1,YPPsym((P)"_x"));
  T191 = YPsig(LITREF(lit_76),YPPlist(1,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_quotations_47 = YPmet(FUNCODEREF(fun_program_quotations_47),LITREF(lit_75),T191,ENVNUL,PNUL,sloc(261));
  T193 = VARREF_OR(YevalSast_linearizeYprogram_quotations,YPfalse);
  T194 = fun_program_quotations_47;
  T192 = XCALL2(1,VARREF(YPdefine_method),T193,T194);
  VARSET(YevalSast_linearizeYprogram_quotations,T192);
  lit_77 = YPPsym((P)"program-quotations-setter");
  lit_78 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T195 = YPsig(LITREF(lit_78),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_quotations_setter_48 = YPmet(FUNCODEREF(fun_program_quotations_setter_48),LITREF(lit_77),T195,ENVNUL,PNUL,sloc(261));
  T197 = VARREF_OR(YevalSast_linearizeYprogram_quotations_setter,YPfalse);
  T198 = fun_program_quotations_setter_48;
  T196 = XCALL2(1,VARREF(YPdefine_method),T197,T198);
  VARSET(YevalSast_linearizeYprogram_quotations_setter,T196);
  lit_79 = YPPlist(1,YPPsym((P)"x"));
  T199 = YPsig(LITREF(lit_79),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T199,ENVNUL,PNUL,sloc(261));
  T200 = fun_49;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YevalSast_linearizeYprogram_quotations),VARREF(YevalSast_linearizeYprogram_quotations_setter),VARREF(YLanyG),T200);
  lit_80 = YPPsym((P)"program-bindings");
  lit_81 = YPPlist(1,YPPsym((P)"_x"));
  T201 = YPsig(LITREF(lit_81),YPPlist(1,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_bindings_50 = YPmet(FUNCODEREF(fun_program_bindings_50),LITREF(lit_80),T201,ENVNUL,PNUL,sloc(262));
  T203 = VARREF_OR(YevalSast_linearizeYprogram_bindings,YPfalse);
  T204 = fun_program_bindings_50;
  T202 = XCALL2(1,VARREF(YPdefine_method),T203,T204);
  VARSET(YevalSast_linearizeYprogram_bindings,T202);
  lit_82 = YPPsym((P)"program-bindings-setter");
  lit_83 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T207 = YPsig(LITREF(lit_83),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T206 = fun_program_bindings_setter_51 = YPmet(FUNCODEREF(fun_program_bindings_setter_51),LITREF(lit_82),T207,ENVNUL,PNUL,sloc(262));
  T210 = VARREF_OR(YevalSast_linearizeYprogram_bindings_setter,YPfalse);
  T211 = fun_program_bindings_setter_51;
  T209 = XCALL2(1,VARREF(YPdefine_method),T210,T211);
  T208 = VARSET(YevalSast_linearizeYprogram_bindings_setter,T209);
  T205 = T208;
  return T205;
}

P YevalSast_linearizeY___main_1___() {
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
  P T208,T209,T210,T211,T212,T213,T214;
DEFCREGS();
  lit_84 = YPPlist(1,YPPsym((P)"x"));
  T0 = YPsig(LITREF(lit_84),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T0,ENVNUL,PNUL,sloc(262));
  T1 = fun_52;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YevalSast_linearizeYprogram_bindings),VARREF(YevalSast_linearizeYprogram_bindings_setter),VARREF(YLanyG),T1);
  lit_85 = YPPsym((P)"program-definitions");
  lit_86 = YPPlist(1,YPPsym((P)"_x"));
  T2 = YPsig(LITREF(lit_86),YPPlist(1,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_definitions_53 = YPmet(FUNCODEREF(fun_program_definitions_53),LITREF(lit_85),T2,ENVNUL,PNUL,sloc(263));
  T4 = VARREF_OR(YevalSast_linearizeYprogram_definitions,YPfalse);
  T5 = fun_program_definitions_53;
  T3 = XCALL2(1,VARREF(YPdefine_method),T4,T5);
  VARSET(YevalSast_linearizeYprogram_definitions,T3);
  lit_87 = YPPsym((P)"program-definitions-setter");
  lit_88 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T6 = YPsig(LITREF(lit_88),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_definitions_setter_54 = YPmet(FUNCODEREF(fun_program_definitions_setter_54),LITREF(lit_87),T6,ENVNUL,PNUL,sloc(263));
  T8 = VARREF_OR(YevalSast_linearizeYprogram_definitions_setter,YPfalse);
  T9 = fun_program_definitions_setter_54;
  T7 = XCALL2(1,VARREF(YPdefine_method),T8,T9);
  VARSET(YevalSast_linearizeYprogram_definitions_setter,T7);
  lit_89 = YPPlist(1,YPPsym((P)"x"));
  T10 = YPsig(LITREF(lit_89),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T10,ENVNUL,PNUL,sloc(263));
  T11 = fun_55;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YevalSast_linearizeYprogram_definitions),VARREF(YevalSast_linearizeYprogram_definitions_setter),VARREF(YLanyG),T11);
  lit_90 = YPPsym((P)"<top-level-form>");
  T13 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T12 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_90),T13);
  VARSET(YevalSast_linearizeYLtop_level_formG,T12);
  lit_91 = YPPsym((P)"form-program");
  lit_92 = YPPlist(1,YPPsym((P)"_x"));
  T14 = YPsig(LITREF(lit_92),YPPlist(1,VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_program_56 = YPmet(FUNCODEREF(fun_form_program_56),LITREF(lit_91),T14,ENVNUL,PNUL,sloc(266));
  T16 = VARREF_OR(YevalSast_linearizeYform_program,YPfalse);
  T17 = fun_form_program_56;
  T15 = XCALL2(1,VARREF(YPdefine_method),T16,T17);
  VARSET(YevalSast_linearizeYform_program,T15);
  lit_93 = YPPsym((P)"form-program-setter");
  lit_94 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T18 = YPsig(LITREF(lit_94),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_program_setter_57 = YPmet(FUNCODEREF(fun_form_program_setter_57),LITREF(lit_93),T18,ENVNUL,PNUL,sloc(266));
  T20 = VARREF_OR(YevalSast_linearizeYform_program_setter,YPfalse);
  T21 = fun_form_program_setter_57;
  T19 = XCALL2(1,VARREF(YPdefine_method),T20,T21);
  VARSET(YevalSast_linearizeYform_program_setter,T19);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYform_program),VARREF(YevalSast_linearizeYform_program_setter),VARREF(YevalSastYLprogramG),VARREF(YPprop_unbound_error));
  lit_95 = YPPsym((P)"form-quotations");
  lit_96 = YPPlist(1,YPPsym((P)"_x"));
  T22 = YPsig(LITREF(lit_96),YPPlist(1,VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_quotations_58 = YPmet(FUNCODEREF(fun_form_quotations_58),LITREF(lit_95),T22,ENVNUL,PNUL,sloc(267));
  T24 = VARREF_OR(YevalSast_linearizeYform_quotations,YPfalse);
  T25 = fun_form_quotations_58;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T25);
  VARSET(YevalSast_linearizeYform_quotations,T23);
  lit_97 = YPPsym((P)"form-quotations-setter");
  lit_98 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T26 = YPsig(LITREF(lit_98),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_quotations_setter_59 = YPmet(FUNCODEREF(fun_form_quotations_setter_59),LITREF(lit_97),T26,ENVNUL,PNUL,sloc(267));
  T28 = VARREF_OR(YevalSast_linearizeYform_quotations_setter,YPfalse);
  T29 = fun_form_quotations_setter_59;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T29);
  VARSET(YevalSast_linearizeYform_quotations_setter,T27);
  lit_99 = YPPlist(1,YPPsym((P)"x"));
  T30 = YPsig(LITREF(lit_99),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_60 = YPmet(FUNCODEREF(fun_60),YPfalse,T30,ENVNUL,PNUL,sloc(267));
  T31 = fun_60;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYform_quotations),VARREF(YevalSast_linearizeYform_quotations_setter),VARREF(YLanyG),T31);
  lit_100 = YPPsym((P)"form-definitions");
  lit_101 = YPPlist(1,YPPsym((P)"_x"));
  T32 = YPsig(LITREF(lit_101),YPPlist(1,VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_definitions_61 = YPmet(FUNCODEREF(fun_form_definitions_61),LITREF(lit_100),T32,ENVNUL,PNUL,sloc(268));
  T34 = VARREF_OR(YevalSast_linearizeYform_definitions,YPfalse);
  T35 = fun_form_definitions_61;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T35);
  VARSET(YevalSast_linearizeYform_definitions,T33);
  lit_102 = YPPsym((P)"form-definitions-setter");
  lit_103 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T36 = YPsig(LITREF(lit_103),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_definitions_setter_62 = YPmet(FUNCODEREF(fun_form_definitions_setter_62),LITREF(lit_102),T36,ENVNUL,PNUL,sloc(268));
  T38 = VARREF_OR(YevalSast_linearizeYform_definitions_setter,YPfalse);
  T39 = fun_form_definitions_setter_62;
  T37 = XCALL2(1,VARREF(YPdefine_method),T38,T39);
  VARSET(YevalSast_linearizeYform_definitions_setter,T37);
  lit_104 = YPPlist(1,YPPsym((P)"x"));
  T40 = YPsig(LITREF(lit_104),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPmet(FUNCODEREF(fun_63),YPfalse,T40,ENVNUL,PNUL,sloc(268));
  T41 = fun_63;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYform_definitions),VARREF(YevalSast_linearizeYform_definitions_setter),VARREF(YLanyG),T41);
  lit_105 = YPPsym((P)"<closure-creation>");
  T43 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T42 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_105),T43);
  VARSET(YevalSast_linearizeYLclosure_creationG,T42);
  lit_106 = YPPsym((P)"closure-creation-index");
  lit_107 = YPPlist(1,YPPsym((P)"_x"));
  T44 = YPsig(LITREF(lit_107),YPPlist(1,VARREF(YevalSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_closure_creation_index_64 = YPmet(FUNCODEREF(fun_closure_creation_index_64),LITREF(lit_106),T44,ENVNUL,PNUL,sloc(271));
  T46 = VARREF_OR(YevalSast_linearizeYclosure_creation_index,YPfalse);
  T47 = fun_closure_creation_index_64;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T47);
  VARSET(YevalSast_linearizeYclosure_creation_index,T45);
  lit_108 = YPPsym((P)"closure-creation-index-setter");
  lit_109 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T48 = YPsig(LITREF(lit_109),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_closure_creation_index_setter_65 = YPmet(FUNCODEREF(fun_closure_creation_index_setter_65),LITREF(lit_108),T48,ENVNUL,PNUL,sloc(271));
  T50 = VARREF_OR(YevalSast_linearizeYclosure_creation_index_setter,YPfalse);
  T51 = fun_closure_creation_index_setter_65;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T51);
  VARSET(YevalSast_linearizeYclosure_creation_index_setter,T49);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YevalSast_linearizeYclosure_creation_index),VARREF(YevalSast_linearizeYclosure_creation_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_110 = YPPsym((P)"closure-creation-free");
  lit_111 = YPPlist(1,YPPsym((P)"_x"));
  T52 = YPsig(LITREF(lit_111),YPPlist(1,VARREF(YevalSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_closure_creation_free_66 = YPmet(FUNCODEREF(fun_closure_creation_free_66),LITREF(lit_110),T52,ENVNUL,PNUL,sloc(272));
  T54 = VARREF_OR(YevalSast_linearizeYclosure_creation_free,YPfalse);
  T55 = fun_closure_creation_free_66;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T55);
  VARSET(YevalSast_linearizeYclosure_creation_free,T53);
  lit_112 = YPPsym((P)"closure-creation-free-setter");
  lit_113 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T56 = YPsig(LITREF(lit_113),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_closure_creation_free_setter_67 = YPmet(FUNCODEREF(fun_closure_creation_free_setter_67),LITREF(lit_112),T56,ENVNUL,PNUL,sloc(272));
  T58 = VARREF_OR(YevalSast_linearizeYclosure_creation_free_setter,YPfalse);
  T59 = fun_closure_creation_free_setter_67;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T59);
  VARSET(YevalSast_linearizeYclosure_creation_free_setter,T57);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YevalSast_linearizeYclosure_creation_free),VARREF(YevalSast_linearizeYclosure_creation_free_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_114 = YPPsym((P)"flatten-seqs");
  lit_115 = YPPlist(1,YPPsym((P)"o"));
  T60 = YPsig(LITREF(lit_115),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_flatten_seqs_68 = YPmet(FUNCODEREF(fun_flatten_seqs_68),LITREF(lit_114),T60,ENVNUL,PNUL,sloc(274));
  T62 = VARREF_OR(YevalSast_linearizeYflatten_seqs,YPfalse);
  T63 = fun_flatten_seqs_68;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T63);
  VARSET(YevalSast_linearizeYflatten_seqs,T61);
  lit_116 = YPPlist(1,YPPsym((P)"o"));
  T64 = YPsig(LITREF(lit_116),YPPlist(1,VARREF(YevalSastYLsequentialG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_flatten_seqs_69 = YPmet(FUNCODEREF(fun_flatten_seqs_69),LITREF(lit_114),T64,ENVNUL,PNUL,sloc(277));
  T66 = VARREF_OR(YevalSast_linearizeYflatten_seqs,YPfalse);
  T67 = fun_flatten_seqs_69;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T67);
  VARSET(YevalSast_linearizeYflatten_seqs,T65);
  lit_117 = YPPsym((P)"as-top-level-forms");
  lit_118 = YPPlist(1,YPPsym((P)"programs"));
  lit_119 = YPPlist(1,YPPsym((P)"x"));
  T69 = YPsig(LITREF(lit_119),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T69,ENVNUL,PNUL,sloc(287));
  T68 = YPsig(LITREF(lit_118),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_top_level_forms_71 = YPmet(FUNCODEREF(fun_as_top_level_forms_71),LITREF(lit_117),T68,ENVNUL,PNUL,sloc(286));
  T71 = VARREF_OR(YevalSast_linearizeYas_top_level_forms,YPfalse);
  T72 = fun_as_top_level_forms_71;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T72);
  VARSET(YevalSast_linearizeYas_top_level_forms,T70);
  lit_120 = YPPsym((P)"extract-things!");
  lit_121 = YPPlist(1,YPPsym((P)"o"));
  lit_122 = YPPlist(1,YPPsym((P)"form"));
  T74 = YPsig(LITREF(lit_122),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T74,ENVNUL,PNUL,sloc(293));
  T73 = YPsig(LITREF(lit_121),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_extract_thingsX_73 = YPmet(FUNCODEREF(fun_extract_thingsX_73),LITREF(lit_120),T73,ENVNUL,PNUL,sloc(289));
  T76 = VARREF_OR(YevalSast_linearizeYextract_thingsX,YPfalse);
  T77 = fun_extract_thingsX_73;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T77);
  VARSET(YevalSast_linearizeYextract_thingsX,T75);
  lit_123 = YPPsym((P)"extract!");
  lit_124 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"form"),YPPsym((P)"result"));
  T78 = YPsig(LITREF(lit_124),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_74 = YPmet(FUNCODEREF(fun_extractX_74),LITREF(lit_123),T78,ENVNUL,PNUL,sloc(296));
  T80 = VARREF_OR(YevalSast_linearizeYextractX,YPfalse);
  T81 = fun_extractX_74;
  T79 = XCALL2(1,VARREF(YPdefine_method),T80,T81);
  VARSET(YevalSast_linearizeYextractX,T79);
  lit_125 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"form"),YPPsym((P)"result"));
  lit_126 = YPPsym((P)"quotation");
  T82 = YPsig(LITREF(lit_125),YPPlist(3,VARREF(YevalSastYLconstantG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_75 = YPmet(FUNCODEREF(fun_extractX_75),LITREF(lit_123),T82,ENVNUL,PNUL,sloc(299));
  T84 = VARREF_OR(YevalSast_linearizeYextractX,YPfalse);
  T85 = fun_extractX_75;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T85);
  VARSET(YevalSast_linearizeYextractX,T83);
  lit_127 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"form"),YPPsym((P)"result"));
  T86 = YPsig(LITREF(lit_127),YPPlist(3,VARREF(YevalSastYLraw_constantG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_76 = YPmet(FUNCODEREF(fun_extractX_76),LITREF(lit_123),T86,ENVNUL,PNUL,sloc(317));
  T88 = VARREF_OR(YevalSast_linearizeYextractX,YPfalse);
  T89 = fun_extractX_76;
  T87 = XCALL2(1,VARREF(YPdefine_method),T88,T89);
  VARSET(YevalSast_linearizeYextractX,T87);
  lit_128 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"form"),YPPsym((P)"result"));
  lit_129 = YPPlist(1,YPPsym((P)"binding"));
  T91 = YPsig(LITREF(lit_129),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_77 = YPmet(FUNCODEREF(fun_77),YPfalse,T91,ENVNUL,PNUL,sloc(326));
  T90 = YPsig(LITREF(lit_128),YPPlist(3,VARREF(YevalSastYLast_methodG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_78 = YPmet(FUNCODEREF(fun_extractX_78),LITREF(lit_123),T90,ENVNUL,PNUL,sloc(320));
  T93 = VARREF_OR(YevalSast_linearizeYextractX,YPfalse);
  T94 = fun_extractX_78;
  T92 = XCALL2(1,VARREF(YPdefine_method),T93,T94);
  VARSET(YevalSast_linearizeYextractX,T92);
  lit_130 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"form"),YPPsym((P)"result"));
  T95 = YPsig(LITREF(lit_130),YPPlist(3,VARREF(YevalSastYLast_primitive_definitionG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_79 = YPmet(FUNCODEREF(fun_extractX_79),LITREF(lit_123),T95,ENVNUL,PNUL,sloc(338));
  T97 = VARREF_OR(YevalSast_linearizeYextractX,YPfalse);
  T98 = fun_extractX_79;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T98);
  VARSET(YevalSast_linearizeYextractX,T96);
  lit_131 = YPPsym((P)"adjoin-definition!");
  lit_132 = YPPlist(3,YPPsym((P)"form"),YPPsym((P)"result"),YPPsym((P)"x"));
  T99 = YPsig(LITREF(lit_132),YPPlist(3,VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_adjoin_definitionX_80 = YPmet(FUNCODEREF(fun_adjoin_definitionX_80),LITREF(lit_131),T99,ENVNUL,PNUL,sloc(346));
  T101 = VARREF_OR(YevalSast_linearizeYadjoin_definitionX,YPfalse);
  T102 = fun_adjoin_definitionX_80;
  T100 = XCALL2(1,VARREF(YPdefine_method),T101,T102);
  VARSET(YevalSast_linearizeYadjoin_definitionX,T100);
  lit_133 = YPPsym((P)"split-program");
  lit_134 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"max-count"));
  T103 = YPsig(LITREF(lit_134),YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_split_program_81 = YPmet(FUNCODEREF(fun_split_program_81),LITREF(lit_133),T103,ENVNUL,PNUL,sloc(354));
  T105 = VARREF_OR(YevalSast_linearizeYsplit_program,YPfalse);
  T106 = fun_split_program_81;
  T104 = XCALL2(1,VARREF(YPdefine_method),T105,T106);
  VARSET(YevalSast_linearizeYsplit_program,T104);
  lit_135 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"max-count"));
  T107 = YPsig(LITREF(lit_135),YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_split_program_82 = YPmet(FUNCODEREF(fun_split_program_82),LITREF(lit_133),T107,ENVNUL,PNUL,sloc(357));
  T109 = VARREF_OR(YevalSast_linearizeYsplit_program,YPfalse);
  T110 = fun_split_program_82;
  T108 = XCALL2(1,VARREF(YPdefine_method),T109,T110);
  VARSET(YevalSast_linearizeYsplit_program,T108);
  lit_136 = YPPsym((P)"closurize-main!");
  lit_137 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"r"),YPPsym((P)"max-count"));
  lit_138 = YPsb((P)"---main-");
  lit_139 = YPsb((P)"---");
  lit_140 = YPPsym((P)"predefined");
  T111 = YPsig(LITREF(lit_137),YPPlist(3,VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSast_linearizeYLflattened_programG),Ynil);
  fun_closurize_mainX_83 = YPmet(FUNCODEREF(fun_closurize_mainX_83),LITREF(lit_136),T111,ENVNUL,PNUL,sloc(367));
  T113 = VARREF_OR(YevalSast_linearizeYclosurize_mainX,YPfalse);
  T114 = fun_closurize_mainX_83;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T114);
  VARSET(YevalSast_linearizeYclosurize_mainX,T112);
  lit_141 = YPPsym((P)"<assoc>");
  T116 = (P)YPpair(VARREF(YLanyG),Ynil);
  T115 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_141),T116);
  VARSET(YevalSast_linearizeYLassocG,T115);
  lit_142 = YPPsym((P)"assoc-key");
  lit_143 = YPPlist(1,YPPsym((P)"_x"));
  T117 = YPsig(LITREF(lit_143),YPPlist(1,VARREF(YevalSast_linearizeYLassocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assoc_key_84 = YPmet(FUNCODEREF(fun_assoc_key_84),LITREF(lit_142),T117,ENVNUL,PNUL,sloc(401));
  T119 = VARREF_OR(YevalSast_linearizeYassoc_key,YPfalse);
  T120 = fun_assoc_key_84;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T120);
  VARSET(YevalSast_linearizeYassoc_key,T118);
  lit_144 = YPPsym((P)"assoc-key-setter");
  lit_145 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T121 = YPsig(LITREF(lit_145),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLassocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assoc_key_setter_85 = YPmet(FUNCODEREF(fun_assoc_key_setter_85),LITREF(lit_144),T121,ENVNUL,PNUL,sloc(401));
  T123 = VARREF_OR(YevalSast_linearizeYassoc_key_setter,YPfalse);
  T124 = fun_assoc_key_setter_85;
  T122 = XCALL2(1,VARREF(YPdefine_method),T123,T124);
  VARSET(YevalSast_linearizeYassoc_key_setter,T122);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLassocG),VARREF(YevalSast_linearizeYassoc_key),VARREF(YevalSast_linearizeYassoc_key_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_146 = YPPsym((P)"assoc-value");
  lit_147 = YPPlist(1,YPPsym((P)"_x"));
  T125 = YPsig(LITREF(lit_147),YPPlist(1,VARREF(YevalSast_linearizeYLassocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assoc_value_86 = YPmet(FUNCODEREF(fun_assoc_value_86),LITREF(lit_146),T125,ENVNUL,PNUL,sloc(402));
  T127 = VARREF_OR(YevalSast_linearizeYassoc_value,YPfalse);
  T128 = fun_assoc_value_86;
  T126 = XCALL2(1,VARREF(YPdefine_method),T127,T128);
  VARSET(YevalSast_linearizeYassoc_value,T126);
  lit_148 = YPPsym((P)"assoc-value-setter");
  lit_149 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T129 = YPsig(LITREF(lit_149),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLassocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assoc_value_setter_87 = YPmet(FUNCODEREF(fun_assoc_value_setter_87),LITREF(lit_148),T129,ENVNUL,PNUL,sloc(402));
  T131 = VARREF_OR(YevalSast_linearizeYassoc_value_setter,YPfalse);
  T132 = fun_assoc_value_setter_87;
  T130 = XCALL2(1,VARREF(YPdefine_method),T131,T132);
  VARSET(YevalSast_linearizeYassoc_value_setter,T130);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLassocG),VARREF(YevalSast_linearizeYassoc_value),VARREF(YevalSast_linearizeYassoc_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_150 = YPPsym((P)"assoc");
  lit_151 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T133 = YPsig(LITREF(lit_151),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSast_linearizeYLassocG),Ynil);
  YevalSast_linearizeYassoc = YPmet(FUNCODEREF(YevalSast_linearizeYassoc),LITREF(lit_150),T133,ENVNUL,PNUL,sloc(403));
  T134 = YevalSast_linearizeYassoc;
  VARSET(YevalSast_linearizeYassoc,T134);
  lit_152 = YPPsym((P)"assocq");
  lit_153 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"l"));
  T135 = YPsig(LITREF(lit_153),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assocq_89 = YPmet(FUNCODEREF(fun_assocq_89),LITREF(lit_152),T135,ENVNUL,PNUL,sloc(406));
  T137 = VARREF_OR(YevalSast_linearizeYassocq,YPfalse);
  T138 = fun_assocq_89;
  T136 = XCALL2(1,VARREF(YPdefine_method),T137,T138);
  VARSET(YevalSast_linearizeYassocq,T136);
  lit_154 = YPPsym((P)"gather-temporaries!");
  lit_155 = YPPlist(1,YPPsym((P)"o"));
  lit_156 = YPPlist(1,YPPsym((P)"def"));
  T140 = YPsig(LITREF(lit_156),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_90 = YPmet(FUNCODEREF(fun_90),YPfalse,T140,ENVNUL,PNUL,sloc(415));
  T139 = YPsig(LITREF(lit_155),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_gather_temporariesX_91 = YPmet(FUNCODEREF(fun_gather_temporariesX_91),LITREF(lit_154),T139,ENVNUL,PNUL,sloc(413));
  T142 = VARREF_OR(YevalSast_linearizeYgather_temporariesX,YPfalse);
  T143 = fun_gather_temporariesX_91;
  T141 = XCALL2(1,VARREF(YPdefine_method),T142,T143);
  VARSET(YevalSast_linearizeYgather_temporariesX,T141);
  lit_157 = YPPsym((P)"collect-temporaries!");
  lit_158 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"r"));
  T144 = YPsig(LITREF(lit_158),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_92 = YPmet(FUNCODEREF(fun_collect_temporariesX_92),LITREF(lit_157),T144,ENVNUL,PNUL,sloc(419));
  T146 = VARREF_OR(YevalSast_linearizeYcollect_temporariesX,YPfalse);
  T147 = fun_collect_temporariesX_92;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T147);
  VARSET(YevalSast_linearizeYcollect_temporariesX,T145);
  lit_159 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"r"));
  T148 = YPsig(LITREF(lit_159),YPPlist(3,VARREF(YevalSastYLlocal_referenceG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_93 = YPmet(FUNCODEREF(fun_collect_temporariesX_93),LITREF(lit_157),T148,ENVNUL,PNUL,sloc(422));
  T150 = VARREF_OR(YevalSast_linearizeYcollect_temporariesX,YPfalse);
  T151 = fun_collect_temporariesX_93;
  T149 = XCALL2(1,VARREF(YPdefine_method),T150,T151);
  VARSET(YevalSast_linearizeYcollect_temporariesX,T149);
  lit_160 = YPPsym((P)"prepend-renamings");
  lit_161 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"y"),YPPsym((P)"r"));
  T152 = YPsig(LITREF(lit_161),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSast_linearizeYprepend_renamings = YPmet(FUNCODEREF(YevalSast_linearizeYprepend_renamings),LITREF(lit_160),T152,ENVNUL,PNUL,sloc(429));
  T153 = YevalSast_linearizeYprepend_renamings;
  VARSET(YevalSast_linearizeYprepend_renamings,T153);
  lit_162 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"r"));
  T154 = YPsig(LITREF(lit_162),YPPlist(3,VARREF(YevalSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_95 = YPmet(FUNCODEREF(fun_collect_temporariesX_95),LITREF(lit_157),T154,ENVNUL,PNUL,sloc(436));
  T156 = VARREF_OR(YevalSast_linearizeYcollect_temporariesX,YPfalse);
  T157 = fun_collect_temporariesX_95;
  T155 = XCALL2(1,VARREF(YPdefine_method),T156,T157);
  VARSET(YevalSast_linearizeYcollect_temporariesX,T155);
  lit_163 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"r"));
  lit_164 = YPPlist(1,YPPsym((P)"b"));
  T159 = YPsig(LITREF(lit_164),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_96 = YPmet(FUNCODEREF(fun_96),YPfalse,T159,ENVNUL,PNUL,sloc(448));
  T158 = YPsig(LITREF(lit_163),YPPlist(3,VARREF(YevalSastYLloopG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_97 = YPmet(FUNCODEREF(fun_collect_temporariesX_97),LITREF(lit_157),T158,ENVNUL,PNUL,sloc(446));
  T161 = VARREF_OR(YevalSast_linearizeYcollect_temporariesX,YPfalse);
  T162 = fun_collect_temporariesX_97;
  T160 = XCALL2(1,VARREF(YPdefine_method),T161,T162);
  VARSET(YevalSast_linearizeYcollect_temporariesX,T160);
  lit_165 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"r"));
  T163 = YPsig(LITREF(lit_165),YPPlist(3,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_98 = YPmet(FUNCODEREF(fun_collect_temporariesX_98),LITREF(lit_157),T163,ENVNUL,PNUL,sloc(455));
  T165 = VARREF_OR(YevalSast_linearizeYcollect_temporariesX,YPfalse);
  T166 = fun_collect_temporariesX_98;
  T164 = XCALL2(1,VARREF(YPdefine_method),T165,T166);
  VARSET(YevalSast_linearizeYcollect_temporariesX,T164);
  lit_166 = YPPsym((P)"adjoin-temporary-variables!");
  lit_167 = YPPlist(2,YPPsym((P)"flat-fun"),YPPsym((P)"new-bindings"));
  T167 = YPsig(LITREF(lit_167),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_adjoin_temporary_variablesX_99 = YPmet(FUNCODEREF(fun_adjoin_temporary_variablesX_99),LITREF(lit_166),T167,ENVNUL,PNUL,sloc(467));
  T169 = VARREF_OR(YevalSast_linearizeYadjoin_temporary_variablesX,YPfalse);
  T170 = fun_adjoin_temporary_variablesX_99;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T170);
  VARSET(YevalSast_linearizeYadjoin_temporary_variablesX,T168);
  lit_168 = YPPsym((P)"<renamed-local-binding>");
  T172 = (P)YPpair(VARREF(YevalSastYLlocal_bindingG),Ynil);
  T171 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_168),T172);
  VARSET(YevalSast_linearizeYLrenamed_local_bindingG,T171);
  lit_169 = YPPsym((P)"binding-index");
  lit_170 = YPPlist(1,YPPsym((P)"_x"));
  T173 = YPsig(LITREF(lit_170),YPPlist(1,VARREF(YevalSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_index_100 = YPmet(FUNCODEREF(fun_binding_index_100),LITREF(lit_169),T173,ENVNUL,PNUL,sloc(477));
  T175 = VARREF_OR(YevalSastYbinding_index,YPfalse);
  T176 = fun_binding_index_100;
  T174 = XCALL2(1,VARREF(YPdefine_method),T175,T176);
  VARSET(YevalSastYbinding_index,T174);
  lit_171 = YPPsym((P)"binding-index-setter");
  lit_172 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T177 = YPsig(LITREF(lit_172),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_index_setter_101 = YPmet(FUNCODEREF(fun_binding_index_setter_101),LITREF(lit_171),T177,ENVNUL,PNUL,sloc(477));
  T179 = VARREF_OR(YevalSastYbinding_index_setter,YPfalse);
  T180 = fun_binding_index_setter_101;
  T178 = XCALL2(1,VARREF(YPdefine_method),T179,T180);
  VARSET(YevalSastYbinding_index_setter,T178);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLrenamed_local_bindingG),VARREF(YevalSastYbinding_index),VARREF(YevalSastYbinding_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  DYNDEFSET(YevalSast_linearizeYTrenaming_bindings_counterT,YPint((P)0));
  lit_173 = YPPsym((P)"new-renamed-binding");
  lit_174 = YPPlist(1,YPPsym((P)"binding"));
  T181 = YPsig(LITREF(lit_174),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_new_renamed_binding_102 = YPmet(FUNCODEREF(fun_new_renamed_binding_102),LITREF(lit_173),T181,ENVNUL,PNUL,sloc(481));
  T183 = VARREF_OR(YevalSast_linearizeYnew_renamed_binding,YPfalse);
  T184 = fun_new_renamed_binding_102;
  T182 = XCALL2(1,VARREF(YPdefine_method),T183,T184);
  VARSET(YevalSast_linearizeYnew_renamed_binding,T182);
  VARSET(YevalSast_linearizeYTregister_passiveQT,YPfalse);
  lit_175 = YPPsym((P)"register-allocate!");
  lit_176 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"register-passive?"));
  lit_177 = Ynil;
  lit_178 = YPPlist(1,YPPsym((P)"def"));
  T188 = YPsig(LITREF(lit_178),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_103 = YPmet(FUNCODEREF(fun_103),YPfalse,T188,ENVNUL,PNUL,sloc(495));
  T187 = YPsig(LITREF(lit_177),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_104 = YPmet(FUNCODEREF(fun_104),YPfalse,T187,ENVNUL,PNUL,sloc(494));
  T186 = YPsig(LITREF(lit_177),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_105 = YPmet(FUNCODEREF(fun_105),YPfalse,T186,ENVNUL,PNUL,sloc(494));
  T185 = YPsig(LITREF(lit_176),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLlogG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_register_allocateX_106 = YPmet(FUNCODEREF(fun_register_allocateX_106),LITREF(lit_175),T185,ENVNUL,PNUL,sloc(493));
  T190 = VARREF_OR(YevalSast_linearizeYregister_allocateX,YPfalse);
  T191 = fun_register_allocateX_106;
  T189 = XCALL2(1,VARREF(YPdefine_method),T190,T191);
  VARSET(YevalSast_linearizeYregister_allocateX,T189);
  lit_179 = YPPsym((P)"allocate-register");
  lit_180 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"val?"));
  T192 = YPsig(LITREF(lit_180),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSast_linearizeYallocate_register = YPmet(FUNCODEREF(YevalSast_linearizeYallocate_register),LITREF(lit_179),T192,ENVNUL,PNUL,sloc(498));
  T193 = YevalSast_linearizeYallocate_register;
  VARSET(YevalSast_linearizeYallocate_register,T193);
  lit_181 = YPPsym((P)"collect-registers!");
  lit_182 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"val?"));
  T194 = YPsig(LITREF(lit_182),YPPlist(3,VARREF(YevalSastYLcomputed_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_108 = YPmet(FUNCODEREF(fun_collect_registersX_108),LITREF(lit_181),T194,ENVNUL,PNUL,sloc(504));
  T196 = VARREF_OR(YevalSast_linearizeYcollect_registersX,YPfalse);
  T197 = fun_collect_registersX_108;
  T195 = XCALL2(1,VARREF(YPdefine_method),T196,T197);
  VARSET(YevalSast_linearizeYcollect_registersX,T195);
  lit_183 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"val?"));
  T198 = YPsig(LITREF(lit_183),YPPlist(3,VARREF(YevalSastYLsequentialG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_109 = YPmet(FUNCODEREF(fun_collect_registersX_109),LITREF(lit_181),T198,ENVNUL,PNUL,sloc(508));
  T200 = VARREF_OR(YevalSast_linearizeYcollect_registersX,YPfalse);
  T201 = fun_collect_registersX_109;
  T199 = XCALL2(1,VARREF(YPdefine_method),T200,T201);
  VARSET(YevalSast_linearizeYcollect_registersX,T199);
  lit_184 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"val?"));
  T202 = YPsig(LITREF(lit_184),YPPlist(3,VARREF(YevalSastYLpassive_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_110 = YPmet(FUNCODEREF(fun_collect_registersX_110),LITREF(lit_181),T202,ENVNUL,PNUL,sloc(516));
  T204 = VARREF_OR(YevalSast_linearizeYcollect_registersX,YPfalse);
  T205 = fun_collect_registersX_110;
  T203 = XCALL2(1,VARREF(YPdefine_method),T204,T205);
  VARSET(YevalSast_linearizeYcollect_registersX,T203);
  lit_185 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"val?"));
  lit_186 = YPPlist(1,YPPsym((P)"def"));
  T210 = YPsig(LITREF(lit_186),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T209 = fun_111 = YPmet(FUNCODEREF(fun_111),YPfalse,T210,ENVNUL,PNUL,sloc(523));
  T208 = YPsig(LITREF(lit_185),YPPlist(3,VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T207 = fun_collect_registersX_112 = YPmet(FUNCODEREF(fun_collect_registersX_112),LITREF(lit_181),T208,ENVNUL,PNUL,sloc(521));
  T213 = VARREF_OR(YevalSast_linearizeYcollect_registersX,YPfalse);
  T214 = fun_collect_registersX_112;
  T212 = XCALL2(1,VARREF(YPdefine_method),T213,T214);
  T211 = VARSET(YevalSast_linearizeYcollect_registersX,T212);
  T206 = T211;
  return T206;
}

P YevalSast_linearizeY___main_2___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
DEFCREGS();
  lit_187 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"val?"));
  T0 = YPsig(LITREF(lit_187),YPPlist(3,VARREF(YevalSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_113 = YPmet(FUNCODEREF(fun_collect_registersX_113),LITREF(lit_181),T0,ENVNUL,PNUL,sloc(527));
  T2 = VARREF_OR(YevalSast_linearizeYcollect_registersX,YPfalse);
  T3 = fun_collect_registersX_113;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T3);
  VARSET(YevalSast_linearizeYcollect_registersX,T1);
  lit_188 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"val?"));
  T4 = YPsig(LITREF(lit_188),YPPlist(3,VARREF(YevalSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_114 = YPmet(FUNCODEREF(fun_collect_registersX_114),LITREF(lit_181),T4,ENVNUL,PNUL,sloc(535));
  T6 = VARREF_OR(YevalSast_linearizeYcollect_registersX,YPfalse);
  T7 = fun_collect_registersX_114;
  T5 = XCALL2(1,VARREF(YPdefine_method),T6,T7);
  VARSET(YevalSast_linearizeYcollect_registersX,T5);
  lit_189 = YPPsym((P)"ast-contains-fun?");
  lit_190 = YPPlist(1,YPPsym((P)"x"));
  T8 = YPsig(LITREF(lit_190),YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_ast_contains_funQ_115 = YPmet(FUNCODEREF(fun_ast_contains_funQ_115),LITREF(lit_189),T8,ENVNUL,PNUL,sloc(541));
  T10 = VARREF_OR(YevalSast_linearizeYast_contains_funQ,YPfalse);
  T11 = fun_ast_contains_funQ_115;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T11);
  VARSET(YevalSast_linearizeYast_contains_funQ,T9);
  lit_191 = YPPlist(1,YPPsym((P)"x"));
  lit_192 = YPPlist(1,YPPsym((P)"return"));
  lit_193 = YPPsym((P)"walk");
  lit_194 = YPPlist(1,YPPsym((P)"y"));
  T14 = YPsig(LITREF(lit_194),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_walk_116 = YPmet(FUNCODEREF(fun_walk_116),LITREF(lit_193),T14,ENVNUL,PNUL,sloc(546));
  T13 = YPsig(LITREF(lit_192),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_117 = YPmet(FUNCODEREF(fun_117),YPfalse,T13,ENVNUL,PNUL,sloc(545));
  T12 = YPsig(LITREF(lit_191),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_ast_contains_funQ_118 = YPmet(FUNCODEREF(fun_ast_contains_funQ_118),LITREF(lit_189),T12,ENVNUL,PNUL,sloc(544));
  T16 = VARREF_OR(YevalSast_linearizeYast_contains_funQ,YPfalse);
  T17 = fun_ast_contains_funQ_118;
  T15 = XCALL2(1,VARREF(YPdefine_method),T16,T17);
  VARSET(YevalSast_linearizeYast_contains_funQ,T15);
  T18 = YPfalse;
  return T18;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSconditions;
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
  {&module_info_evalSast},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"clone", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"binding-info-setter", &module_info_evalSast, NULL},
  {"module-uses-c-files", &module_info_evalSast, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"fab-g2c-module", &module_info_evalSast, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"objectify-with-subtransaction", &module_info_evalSast, NULL},
  {"function-source-setter", &module_info_evalSast, NULL},
  {"<program>", &module_info_evalSast, NULL},
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
  {"var-type", &module_info_gooSmacros, NULL},
  {"<dynamic-assignment>", &module_info_evalSast, NULL},
  {"binding-locative-setter", &module_info_evalSast, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"function-ref-count", &module_info_evalSast, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"fix-let-body-setter", &module_info_evalSast, NULL},
  {"module-mangled-name-setter", &module_info_evalSast, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"set-module-environments", &module_info_evalSast, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"module-target-environment", &module_info_evalSast, NULL},
  {"signature-value", &module_info_evalSast, NULL},
  {"signature-arity-setter", &module_info_evalSast, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"<assignment>", &module_info_evalSast, NULL},
  {"fix-let-bindings-setter", &module_info_evalSast, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"binding-inferred-type", &module_info_evalSast, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"<static-global-environment>", &module_info_evalSast, NULL},
  {"<ast-primitive-definition>", &module_info_evalSast, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"binding-mangled-name", &module_info_evalSast, NULL},
  {"binding-global-box", &module_info_evalSast, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"<application>", &module_info_evalSast, NULL},
  {"module-loader-module-type", &module_info_evalSast, NULL},
  {"function-binding", &module_info_evalSast, NULL},
  {"do-module-loader-modules", &module_info_evalSast, NULL},
  {"<module-binding>", &module_info_evalSast, NULL},
  {"bound?-default", &module_info_evalSast, NULL},
  {"reference-called-function?", &module_info_evalSast, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"process-closed-application", &module_info_evalSast, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"binding-dynamic-extent?", &module_info_evalSast, NULL},
  {"<runtime-reference>", &module_info_evalSast, NULL},
  {"binding-value", &module_info_evalSast, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"assignment-form", &module_info_evalSast, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"binding-mutable?", &module_info_evalSast, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"<loop-application>", &module_info_evalSast, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"fix-let-arguments-setter", &module_info_evalSast, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"environment-module", &module_info_evalSast, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"monitor-test", &module_info_evalSast, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"ast-walk", &module_info_evalSast, NULL},
  {"fix-let-types-setter", &module_info_evalSast, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"<low-let>", &module_info_evalSast, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"<binding>", &module_info_evalSast, NULL},
  {"<bind-exit>", &module_info_evalSast, NULL},
  {"<module-binding-reference>", &module_info_evalSast, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"function-nary?", &module_info_evalSast, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"<local-assignment>", &module_info_evalSast, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"monitor-handler", &module_info_evalSast, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"<programs>", &module_info_evalSast, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"module-uses-c-includes", &module_info_evalSast, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"probe-module", &module_info_evalSast, NULL},
  {"function-frame-len-setter", &module_info_evalSast, NULL},
  {"<global-box>", &module_info_evalSast, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"objectify-quotation", &module_info_evalSast, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
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
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"function-source", &module_info_evalSast, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
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
  {"<dynamic-definition>", &module_info_evalSast, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"function-index-setter", &module_info_evalSast, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"signature-arity", &module_info_evalSast, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"<fix-let>", &module_info_evalSast, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"fix-let-body", &module_info_evalSast, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"module-uses-c-libraries", &module_info_evalSast, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"app-filename", &module_info_gooSruntime, NULL},
  {"<module>", &module_info_evalSast, NULL},
  {"application-arguments", &module_info_evalSast, NULL},
  {"module-mangled-name", &module_info_evalSast, NULL},
  {"application-tail?", &module_info_evalSast, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"report-undefined-global-bindings", &module_info_evalSast, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"fix-let-bindings", &module_info_evalSast, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"constant-index-setter", &module_info_evalSast, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"<ast-macro-definition>", &module_info_evalSast, NULL},
  {"signature-specs-setter", &module_info_evalSast, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"objectify-signature", &module_info_evalSast, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"constant-index", &module_info_evalSast, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"loop-body", &module_info_evalSast, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"<sequential>", &module_info_evalSast, NULL},
  {"<static-module-binding-reference>", &module_info_evalSast, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"signature-bindings-setter", &module_info_evalSast, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"<immediate-constant>", &module_info_evalSast, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"loop-bindings-setter", &module_info_evalSast, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"module-syntax-environment", &module_info_evalSast, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"fix-let-types", &module_info_evalSast, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"monitor-main-thunk", &module_info_evalSast, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"loc-val-setter", &module_info_gooSruntime, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"function-free-setter", &module_info_evalSast, NULL},
  {"ast-evaluate", &module_info_evalSast, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"<dynamic-reference>", &module_info_evalSast, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"function-frame-len", &module_info_evalSast, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"application-binding", &module_info_evalSast, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"function-signature-setter", &module_info_evalSast, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"load-module", &module_info_evalSast, NULL},
  {"function-loop", &module_info_evalSast, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"install-initial-bindings", &module_info_evalSast, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"<ast-method>", &module_info_evalSast, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"program-register-setter", &module_info_evalSast, NULL},
  {"<regular-application>", &module_info_evalSast, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"signature-nary?", &module_info_evalSast, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"function-registers", &module_info_evalSast, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"<ast-function>", &module_info_evalSast, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"function-temporaries", &module_info_evalSast, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"loc-val", &module_info_gooSruntime, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"def-programs", &module_info_evalSast, NULL},
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
  {"%i?", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"function-bindings", &module_info_evalSast, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"find-binding", &module_info_evalSast, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"<ast-generic>", &module_info_evalSast, NULL},
  {"signature-value-setter", &module_info_evalSast, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"<local-reference>", &module_info_evalSast, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"signature-names-setter", &module_info_evalSast, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"function-index", &module_info_evalSast, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"signature-nary?-setter", &module_info_evalSast, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"loop-continue-setter", &module_info_evalSast, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"binding-index-setter", &module_info_evalSast, NULL},
  {"reference-frame-offset", &module_info_evalSast, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"module-name", &module_info_evalSast, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"loop-body-setter", &module_info_evalSast, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSast, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"<constant>", &module_info_evalSast, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
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
  {"dc", &module_info_gooSboot, NULL},
  {"<ast-signature>", &module_info_evalSast, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"<ast-embodied-function>", &module_info_evalSast, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"signature-specs", &module_info_evalSast, NULL},
  {"program-line", &module_info_evalSast, NULL},
  {"constant-value", &module_info_evalSast, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"environment-uses-modules", &module_info_evalSast, NULL},
  {"compose", &module_info_gooSruntime, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"compile-time-program", &module_info_evalSast, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"<runtime-assignment>", &module_info_evalSast, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"signature-bindings", &module_info_evalSast, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"binding-module-name", &module_info_evalSast, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"ast-walk!", &module_info_evalSast, NULL},
  {"<global-assignment>", &module_info_evalSast, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"assignment-binding", &module_info_evalSast, NULL},
  {"module-name-to-relpath", &module_info_evalSast, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"<computed-program>", &module_info_evalSast, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"bound?-reference", &module_info_evalSast, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"<reference>", &module_info_evalSast, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"signature-names", &module_info_evalSast, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"init-environment-for-eval", &module_info_evalSast, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"module-exports", &module_info_evalSast, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"<raw-constant>", &module_info_evalSast, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"<real-reference>", &module_info_evalSast, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"<global-reference>", &module_info_evalSast, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"binding-type-setter", &module_info_evalSast, NULL},
  {"environment-bindings", &module_info_evalSast, NULL},
  {"function-signature", &module_info_evalSast, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"<alternative>", &module_info_evalSast, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"locals-bindings", &module_info_evalSast, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"<loop>", &module_info_evalSast, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"binding-module", &module_info_evalSast, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"sequentialize", &module_info_evalSast, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"identity", &module_info_gooSruntime, NULL},
  {"reference-binding", &module_info_evalSast, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"<predefined-application>", &module_info_evalSast, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"function-body-setter", &module_info_evalSast, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"alternative-condition", &module_info_evalSast, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"<macro-reference>", &module_info_evalSast, NULL},
  {"req-sig-specs", &module_info_evalSast, NULL},
  {"loop-bindings", &module_info_evalSast, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"module-binding", &module_info_evalSast, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"<fab-list>", &module_info_evalSast, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"<unwind-protect>", &module_info_evalSast, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"function-loop-setter", &module_info_evalSast, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"function-data-refs", &module_info_evalSast, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"application-known?-setter", &module_info_evalSast, NULL},
  {"binding-locative", &module_info_evalSast, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"unwind-protect-protected-thunk", &module_info_evalSast, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"function-temporaries-setter", &module_info_evalSast, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"<monitor>", &module_info_evalSast, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"function-ref-count-setter", &module_info_evalSast, NULL},
  {"<module-loader>", &module_info_evalSast, NULL},
  {"global-box-value", &module_info_evalSast, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"alternative-alternant", &module_info_evalSast, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"always", &module_info_gooSruntime, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"loop-continue", &module_info_evalSast, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"binding-index", &module_info_evalSast, NULL},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"function-adjectives", &module_info_evalSast, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"do-static-global-bindings", &module_info_evalSast, NULL},
  {"monitor-info", &module_info_evalSast, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"global-box-value-setter", &module_info_evalSast, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"load-in", &module_info_evalSast, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"alternative-consequent", &module_info_evalSast, NULL},
  {"monitor-type", &module_info_evalSast, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"application-loop", &module_info_evalSast, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"binding-name", &module_info_evalSast, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"binding-mangled-name-setter", &module_info_evalSast, NULL},
  {"binding-type", &module_info_evalSast, NULL},
  {"free-environment", &module_info_evalSast, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"find-environment-module", &module_info_evalSast, NULL},
  {"ast-define-binding", &module_info_evalSast, NULL},
  {"binding-inferred-type-setter", &module_info_evalSast, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"reference-called-function?-setter", &module_info_evalSast, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"bind-exit-main-fun", &module_info_evalSast, NULL},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, NULL},
  {"bind-exit-light?", &module_info_evalSast, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"binding-value-setter", &module_info_evalSast, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"locals-body-setter", &module_info_evalSast, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"<magic-reference>", &module_info_evalSast, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"locals-body", &module_info_evalSast, NULL},
  {"binding-kind", &module_info_evalSast, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"locals-functions-setter", &module_info_evalSast, NULL},
  {"binding-global-box-setter", &module_info_evalSast, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"$goo-boot-module-name", &module_info_evalSast, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"<passive-program>", &module_info_evalSast, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"reference-frame-number", &module_info_evalSast, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"locals-bindings-setter", &module_info_evalSast, NULL},
  {"assignment-form-setter", &module_info_evalSast, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {">", &module_info_gooSmag, NULL},
  {"fix-let-arguments", &module_info_evalSast, NULL},
  {"function-free", &module_info_evalSast, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"unchecked-runtime-environment", &module_info_evalSast, NULL},
  {"<locals>", &module_info_evalSast, NULL},
  {"binding-native-to?", &module_info_evalSast, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"function-debug-name", &module_info_evalSast, NULL},
  {"<local-binding>", &module_info_evalSast, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"module-mangled-string-name", &module_info_evalSast, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"locals-functions", &module_info_evalSast, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"assignment-reference", &module_info_evalSast, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"remove-modules-by-name!", &module_info_evalSast, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"env-object-name", &module_info_evalSast, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"function-body", &module_info_evalSast, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"binding-dotted?", &module_info_evalSast, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"allocate-register", CVAR, &YevalSast_linearizeYallocate_register},
  {"extract-things!", CVAR, &YevalSast_linearizeYextract_thingsX},
  {"assoc-key-setter", CVAR, &YevalSast_linearizeYassoc_key_setter},
  {"<box-creation>", CVAR, &YevalSast_linearizeYLbox_creationG},
  {"assoc", CVAR, &YevalSast_linearizeYassoc},
  {"gather-temporaries!", CVAR, &YevalSast_linearizeYgather_temporariesX},
  {"collect-temporaries!", CVAR, &YevalSast_linearizeYcollect_temporariesX},
  {"adjoin-temporary-variables!", CVAR, &YevalSast_linearizeYadjoin_temporary_variablesX},
  {"program-bindings", CVAR, &YevalSast_linearizeYprogram_bindings},
  {"reference-self?", CVAR, &YevalSast_linearizeYreference_selfQ},
  {"<assoc>", CVAR, &YevalSast_linearizeYLassocG},
  {"assoc-key", CVAR, &YevalSast_linearizeYassoc_key},
  {"assoc-value", CVAR, &YevalSast_linearizeYassoc_value},
  {"form-definitions-setter", CVAR, &YevalSast_linearizeYform_definitions_setter},
  {"box-reference-setter", CVAR, &YevalSast_linearizeYbox_reference_setter},
  {"program-bindings-setter", CVAR, &YevalSast_linearizeYprogram_bindings_setter},
  {"analyze-calls", CVAR, &YevalSast_linearizeYanalyze_calls},
  {"reopt-top!", CVAR, &YevalSast_linearizeYreopt_topX},
  {"collect-registers!", CVAR, &YevalSast_linearizeYcollect_registersX},
  {"program-definitions-setter", CVAR, &YevalSast_linearizeYprogram_definitions_setter},
  {"<free-reference>", CVAR, &YevalSast_linearizeYLfree_referenceG},
  {"new-renamed-binding", CVAR, &YevalSast_linearizeYnew_renamed_binding},
  {"prepend-renamings", CVAR, &YevalSast_linearizeYprepend_renamings},
  {"reference-self?-setter", CVAR, &YevalSast_linearizeYreference_selfQ_setter},
  {"unconstrained-type?", CVAR, &YevalSast_linearizeYunconstrained_typeQ},
  {"closure-creation-free-setter", CVAR, &YevalSast_linearizeYclosure_creation_free_setter},
  {"program-form", CVAR, &YevalSast_linearizeYprogram_form},
  {"reference-offset-setter", CVAR, &YevalSast_linearizeYreference_offset_setter},
  {"do-do-call-analysis!", CVAR, &YevalSast_linearizeYdo_do_call_analysisX},
  {"ast-contains-fun?", CVAR, &YevalSast_linearizeYast_contains_funQ},
  {"flatten-seqs", CVAR, &YevalSast_linearizeYflatten_seqs},
  {"lift!", CVAR, &YevalSast_linearizeYliftX},
  {"box-form-setter", CVAR, &YevalSast_linearizeYbox_form_setter},
  {"---main-0---", PVAR, NULL},
  {"program-definitions", CVAR, &YevalSast_linearizeYprogram_definitions},
  {"<box-write>", CVAR, &YevalSast_linearizeYLbox_writeG},
  {"---main-1---", PVAR, NULL},
  {"insert-box!", CVAR, &YevalSast_linearizeYinsert_boxX},
  {"form-quotations-setter", CVAR, &YevalSast_linearizeYform_quotations_setter},
  {"<top-level-form>", CVAR, &YevalSast_linearizeYLtop_level_formG},
  {"closure-creation-index", CVAR, &YevalSast_linearizeYclosure_creation_index},
  {"assoc-value-setter", CVAR, &YevalSast_linearizeYassoc_value_setter},
  {"<box-read>", CVAR, &YevalSast_linearizeYLbox_readG},
  {"boxify-mutable-bindings", CVAR, &YevalSast_linearizeYboxify_mutable_bindings},
  {"closure-creation-free", CVAR, &YevalSast_linearizeYclosure_creation_free},
  {"box-reference", CVAR, &YevalSast_linearizeYbox_reference},
  {"form-definitions", CVAR, &YevalSast_linearizeYform_definitions},
  {"split-program", CVAR, &YevalSast_linearizeYsplit_program},
  {"<closure-creation>", CVAR, &YevalSast_linearizeYLclosure_creationG},
  {"form-program-setter", CVAR, &YevalSast_linearizeYform_program_setter},
  {"<flattened-program>", CVAR, &YevalSast_linearizeYLflattened_programG},
  {"---main-2---", PVAR, NULL},
  {"program-quotations", CVAR, &YevalSast_linearizeYprogram_quotations},
  {"box-form", CVAR, &YevalSast_linearizeYbox_form},
  {"*register-passive?*", CVAR, &YevalSast_linearizeYTregister_passiveQT},
  {"extract!", CVAR, &YevalSast_linearizeYextractX},
  {"adjoin-free-binding!", CVAR, &YevalSast_linearizeYadjoin_free_bindingX},
  {"as-top-level-forms", CVAR, &YevalSast_linearizeYas_top_level_forms},
  {"form-quotations", CVAR, &YevalSast_linearizeYform_quotations},
  {"*renaming-bindings-counter*", DVAR, &YevalSast_linearizeYTrenaming_bindings_counterT},
  {"register-allocate!", CVAR, &YevalSast_linearizeYregister_allocateX},
  {"assocq", CVAR, &YevalSast_linearizeYassocq},
  {"reference-offset", CVAR, &YevalSast_linearizeYreference_offset},
  {"closurize-main!", CVAR, &YevalSast_linearizeYclosurize_mainX},
  {"closure-creation-index-setter", CVAR, &YevalSast_linearizeYclosure_creation_index_setter},
  {"do-call-analysis!", CVAR, &YevalSast_linearizeYdo_call_analysisX},
  {"<renamed-local-binding>", CVAR, &YevalSast_linearizeYLrenamed_local_bindingG},
  {"form-program", CVAR, &YevalSast_linearizeYform_program},
  {"ensure-loop", CVAR, &YevalSast_linearizeYensure_loop},
  {"lift-procedures!", CVAR, &YevalSast_linearizeYlift_proceduresX},
  {"program-form-setter", CVAR, &YevalSast_linearizeYprogram_form_setter},
  {"program-quotations-setter", CVAR, &YevalSast_linearizeYprogram_quotations_setter},
  {"adjoin-definition!", CVAR, &YevalSast_linearizeYadjoin_definitionX},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"extract-things!", NULL},
  {"<box-creation>", NULL},
  {"program-bindings", NULL},
  {"reference-self?", NULL},
  {"analyze-calls", NULL},
  {"<free-reference>", NULL},
  {"unconstrained-type?", NULL},
  {"program-form", NULL},
  {"ast-contains-fun?", NULL},
  {"flatten-seqs", NULL},
  {"lift!", NULL},
  {"program-definitions", NULL},
  {"<box-write>", NULL},
  {"<closure-creation>", NULL},
  {"insert-box!", NULL},
  {"<top-level-form>", NULL},
  {"closure-creation-index", NULL},
  {"<box-read>", NULL},
  {"closure-creation-free", NULL},
  {"*register-passive?*", NULL},
  {"box-reference", NULL},
  {"form-definitions", NULL},
  {"gather-temporaries!", NULL},
  {"program-quotations", NULL},
  {"box-form", NULL},
  {"reference-offset", NULL},
  {"form-quotations", NULL},
  {"register-allocate!", NULL},
  {"closurize-main!", NULL},
  {"<renamed-local-binding>", NULL},
  {"form-program", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_evalSast_linearize;
MODULE_INFO module_info_evalSast_linearize = {
  "eval/ast-linearize",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooSboot (void);
extern void load_module_evalSast (void);

/* EXPRESSION: */

extern void load_module_evalSast_linearize (void);

void load_module_evalSast_linearize (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSboot();
  load_module_evalSast();

  (P)YevalSast_linearizeY___main_0___();
  (P)YevalSast_linearizeY___main_1___();
  (P)YevalSast_linearizeY___main_2___();

}

/* END OF GENERATED CODE. */
