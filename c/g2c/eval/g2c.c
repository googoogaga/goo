/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/g2c");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/g2c */

EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
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
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
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
EXT(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
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
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YevalSastYfunction_ref_count,"eval/ast","function-ref-count");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
DEF(YevalSg2cYmangle_quotation_name,"eval/g2c","mangle-quotation-name");
DEF(YevalSg2cYgenerate_functions,"eval/g2c","generate-functions");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YevalSast_linearizeYprogram_bindings,"eval/ast-linearize","program-bindings");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
DEF(YevalSg2cYg2c_build_app,"eval/g2c","g2c-build-app");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
DEF(YevalSg2cYDescape_marker,"eval/g2c","$escape-marker");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSioSwriteYwrite_type,"goo/io/write","write-type");
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
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YevalSastYLfunctionsG,"eval/ast","<functions>");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
DEF(YevalSg2cYgenerate_main,"eval/g2c","generate-main");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
DEF(YevalSg2cYg2c_def_app,"eval/g2c","g2c-def-app");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YevalSast_linearizeYanalyze_calls,"eval/ast-linearize","analyze-calls");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
DEF(YevalSg2cYmodule_loader_app_modname,"eval/g2c","module-loader-app-modname");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
DEF(YevalSg2cYmangle_local_name,"eval/g2c","mangle-local-name");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YevalStopYframe,"eval/top","frame");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YevalStopYbt,"eval/top","bt");
DYNDEF(YevalSg2cYTtmp_file_counterT,"eval/g2c","*tmp-file-counter*");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YevalStopYload_file,"eval/top","load-file");
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
DEF(YevalSg2cYgen_fab_list,"eval/g2c","gen-fab-list");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
DEF(YevalSg2cYg2c_exp,"eval/g2c","g2c-exp");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
DEF(YevalSg2cYmodule_src_file,"eval/g2c","module-src-file");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YLcolG,"goo/boot","<col>");
EXT(YevalSast_linearizeYunconstrained_typeQ,"eval/ast-linearize","unconstrained-type?");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
DEF(YevalSg2cYDc_escapes,"eval/g2c","$c-escapes");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
DEF(YevalSg2cYgen_result,"eval/g2c","gen-result");
DEF(YevalSg2cYgenerate_makefile,"eval/g2c","generate-makefile");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(YevalSg2cYmodule_mtime,"eval/g2c","module-mtime");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
DEF(YevalSg2cYg2c_clean,"eval/g2c","g2c-clean");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YevalSastYmodule_uses_c_includes,"eval/ast","module-uses-c-includes");
DEF(YevalSg2cYfalse_name,"eval/g2c","false-name");
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
DEF(YevalSg2cYgenerate_global_binding,"eval/g2c","generate-global-binding");
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
DEF(YevalSg2cYgenerate_closure_structure,"eval/g2c","generate-closure-structure");
DEF(YevalSg2cYDlocal_suffix,"eval/g2c","$local-suffix");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
DYNDEF(YevalSg2cYTdynamic_linkingQT,"eval/g2c","*dynamic-linking?*");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YevalStopYDDD,"eval/top","$$$");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
DEF(YevalSg2cYDnumber_characters,"eval/g2c","$number-characters");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
DEF(YevalSg2cYDhygiene_char,"eval/g2c","$hygiene-char");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
DEF(YevalSg2cYLg2c_module_loaderG,"eval/g2c","<g2c-module-loader>");
EXT(YgooStypesYtQ,"goo/types","t?");
DEF(YevalSg2cYTtrace_registersQT,"eval/g2c","*trace-registers?*");
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
EXT(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
DEF(YevalSg2cYDlocal_marker,"eval/g2c","$local-marker");
DEF(YevalSg2cYbinding_Gc,"eval/g2c","binding->c");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
DEF(YevalSg2cYgenerate_quotation,"eval/g2c","generate-quotation");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YDmax_int,"goo/boot","$max-int");
DEF(YevalSg2cYDmethod_mangled_marker_string,"eval/g2c","$method-mangled-marker-string");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
DEF(YevalSg2cYfuninit_to_c,"eval/g2c","funinit-to-c");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
DEF(YevalSg2cYfunshell_to_c,"eval/g2c","funshell-to-c");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
DEF(YevalSg2cYpp,"eval/g2c","pp");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
DEF(YevalSg2cYmangle_binding,"eval/g2c","mangle-binding");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
DEF(YevalSg2cYmangle_module_into,"eval/g2c","mangle-module-into");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
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
DEF(YevalSg2cYmangler_reset,"eval/g2c","mangler-reset");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YgooSsystemYos_val,"goo/system","os-val");
DEF(YevalSg2cYmangle_boot_name,"eval/g2c","mangle-boot-name");
EXT(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(Yhead,"goo/boot","head");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
DEF(YevalSg2cYdispatcherQ,"eval/g2c","dispatcher?");
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
EXT(YLproductG,"goo/boot","<product>");
EXT(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
DEF(YevalSg2cYg2c_top,"eval/g2c","g2c-top");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(YgooStypesYall2Q,"goo/types","all2?");
DEF(YevalSg2cYgenerate_registers,"eval/g2c","generate-registers");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yfind_getter,"goo/boot","find-getter");
DEF(YevalSg2cYbbQ,"eval/g2c","bb?");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YevalSast_linearizeYast_contains_funQ,"eval/ast-linearize","ast-contains-fun?");
DEF(YevalSg2cYgenerate_module_init,"eval/g2c","generate-module-init");
EXT(YevalStopYesctst,"eval/top","esctst");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
DEF(YevalSg2cYgenerate_function_forward,"eval/g2c","generate-function-forward");
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
DEF(YevalSg2cYto_c,"eval/g2c","to-c");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(YgooSmathYK,"goo/math","|");
DEF(YevalSg2cYDmethod_mangled_marker,"eval/g2c","$method-mangled-marker");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
DEF(YevalSg2cYgenerate_quotations,"eval/g2c","generate-quotations");
EXT(Yclass_children,"goo/boot","class-children");
DEF(YevalSg2cYgenerate_function_forwards,"eval/g2c","generate-function-forwards");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSsystemYos_name,"goo/system","os-name");
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
EXT(Yobject_class,"goo/boot","object-class");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
DEF(YevalSg2cYTregisters_per_lineT,"eval/g2c","*registers-per-line*");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(Yunion_elts,"goo/boot","union-elts");
DYNDEF(YevalSg2cYTloop_arg_counterT,"eval/g2c","*loop-arg-counter*");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
DEF(YevalSg2cYDnumber_call_templates,"eval/g2c","$number-call-templates");
EXT(YLmagG,"goo/boot","<mag>");
DEF(YevalSg2cYbuf_cat2X,"eval/g2c","buf-cat2!");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
DEF(YevalSg2cYTmangle_bufferT,"eval/g2c","*mangle-buffer*");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
DEF(YevalSg2cYDmax_character_code,"eval/g2c","$max-character-code");
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
DEF(YevalSg2cYg2c_goo,"eval/g2c","g2c-goo");
EXT(Ycpl_error,"goo/boot","cpl-error");
DEF(YevalSg2cYDmangles_data,"eval/g2c","$mangles-data");
DEF(YevalSg2cYmangle_raw_name,"eval/g2c","mangle-raw-name");
EXT(YgooStypesYtA,"goo/types","t+");
DEF(YevalSg2cYDiep_marker,"eval/g2c","$iep-marker");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
DEF(YevalSg2cYDhygiene_marker,"eval/g2c","$hygiene-marker");
DEF(YevalSg2cYgenerate_quotation_forwards,"eval/g2c","generate-quotation-forwards");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yas_error,"goo/boot","as-error");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YLlogG,"goo/boot","<log>");
DEF(YevalSg2cYDname_mangler_table,"eval/g2c","$name-mangler-table");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(Ysig_specs,"goo/boot","sig-specs");
DEF(YevalSg2cYgenerate_global_environment,"eval/g2c","generate-global-environment");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
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
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(Yprop_init,"goo/boot","prop-init");
DEF(YevalSg2cYmangle_local_marked_name,"eval/g2c","mangle-local-marked-name");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
DEF(YevalSg2cYDmodule_separator,"eval/g2c","$module-separator");
DEF(YevalSg2cYgenerate_function_bodies,"eval/g2c","generate-function-bodies");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
EXT(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
DEF(YevalSg2cYDescape_separator,"eval/g2c","$escape-separator");
EXT(YevalSastYloop_continue_setter,"eval/ast","loop-continue-setter");
DEF(YevalSg2cYDnow_mod_var_name,"eval/g2c","$now-mod-var-name");
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
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YevalSastYloop_body_setter,"eval/ast","loop-body-setter");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
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
EXT(YgooSmathYNE,"goo/math","~=");
EXT(Ynarity_error,"goo/boot","narity-error");
DEF(YevalSg2cYmodule_mtime_setter,"eval/g2c","module-mtime-setter");
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
EXT(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
DEF(YevalSg2cYmodule_init_decl,"eval/g2c","module-init-decl");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
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
DEF(YevalSg2cYmodule_info_name,"eval/g2c","module-info-name");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YevalSastYboundQ_default,"eval/ast","bound?-default");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooStypesYas,"goo/types","as");
EXT(YevalStopYread_file,"eval/top","read-file");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
DEF(YevalSg2cYchar_buffer_as_string,"eval/g2c","char-buffer-as-string");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
DEF(YevalSg2cYmangle_string_literal,"eval/g2c","mangle-string-literal");
DEF(YevalSg2cYmangle_integer,"eval/g2c","mangle-integer");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
DEF(YevalSg2cYout_list_builder,"eval/g2c","out-list-builder");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YisaQ,"goo/boot","isa?");
DEF(YevalSg2cYTg2c_appT,"eval/g2c","*g2c-app*");
EXT(YgooSmathYN,"goo/math","~");
EXT(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
DEF(YevalSg2cYgenerate_c_module,"eval/g2c","generate-c-module");
DEF(YevalSg2cYgenerate_c_application,"eval/g2c","generate-c-application");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
DEF(YevalSg2cYgenerate_header,"eval/g2c","generate-header");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
DEF(YevalSg2cYreference_Gc,"eval/g2c","reference->c");
EXT(YevalStopYtop,"eval/top","top");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
DEF(YevalSg2cYgen_ref,"eval/g2c","gen-ref");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
DEF(YevalSg2cYg2c_ast,"eval/g2c","g2c-ast");
DEF(YevalSg2cYcompute_ast,"eval/g2c","compute-ast");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YevalSastYLloopG,"eval/ast","<loop>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
DEF(YevalSg2cYmodule_src_file_setter,"eval/g2c","module-src-file-setter");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
DEF(YevalSg2cYmodule_loader_appname,"eval/g2c","module-loader-appname");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
DEF(YevalSg2cYLg2c_moduleG,"eval/g2c","<g2c-module>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
DEF(YevalSg2cYpurge_outdated_modules,"eval/g2c","purge-outdated-modules");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
DEF(YevalSg2cYdeclare_imported_module_infos,"eval/g2c","declare-imported-module-infos");
DEF(YevalSg2cYgenerate_function_body_reference,"eval/g2c","generate-function-body-reference");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmacrosYEE,"goo/macros","==");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
DEF(YevalSg2cYgenerate_trailer,"eval/g2c","generate-trailer");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(YevalSastYloop_bindings,"eval/ast","loop-bindings");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Ylst,"goo/boot","lst");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
DEF(YevalSg2cYDmodule_marker,"eval/g2c","$module-marker");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YevalStopYDD,"eval/top","$$");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YevalSastYfunction_loop_setter,"eval/ast","function-loop-setter");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
DEF(YevalSg2cYmodule_init_name,"eval/g2c","module-init-name");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YevalStopYD,"eval/top","$");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YevalStopYload,"eval/top","load");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YevalStopYsave_image,"eval/top","save-image");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
DEF(YevalSg2cYgen_depth,"eval/g2c","gen-depth");
EXT(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YevalSastYfunction_ref_count_setter,"eval/ast","function-ref-count-setter");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
DEF(YevalSg2cYgenerate_function_code,"eval/g2c","generate-function-code");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
DEF(YevalSg2cYcompute_program,"eval/g2c","compute-program");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
DEF(YevalSg2cYgenerate_module_info,"eval/g2c","generate-module-info");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YevalStopYframe_var,"eval/top","frame-var");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSastYloop_continue,"eval/ast","loop-continue");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YevalSastYmodule_uses_c_libraries,"eval/ast","module-uses-c-libraries");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
DEF(YevalSg2cYgenerate_function_binding,"eval/g2c","generate-function-binding");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YevalSastYapplication_loop,"eval/ast","application-loop");
DEF(YevalSg2cYgenerate_local_temporaries,"eval/g2c","generate-local-temporaries");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
DEF(YevalSg2cYmodule_loader_app_modname_setter,"eval/g2c","module-loader-app-modname-setter");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
DEF(YevalSg2cYmodule_up_to_dateQ,"eval/g2c","module-up-to-date?");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
DEF(YevalSg2cYgenerate_return,"eval/g2c","generate-return");
DEF(YevalSg2cYprimitive_inlinableQ,"eval/g2c","primitive-inlinable?");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
DEF(YevalSg2cYmangle_global_name,"eval/g2c","mangle-global-name");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
DEF(YevalSg2cYg2c_test,"eval/g2c","g2c-test");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
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
DEF(YevalSg2cYfloat_to_c_string,"eval/g2c","float-to-c-string");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
DEF(YevalSg2cYmangle_name_into,"eval/g2c","mangle-name-into");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YevalSastYLloop_applicationG,"eval/ast","<loop-application>");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YevalStopYparse_in,"eval/top","parse-in");
DEF(YevalSg2cYcompile_load,"eval/g2c","compile-load");
EXT(YLflatG,"goo/boot","<flat>");
DEF(YevalSg2cYmodule_loader_appname_setter,"eval/g2c","module-loader-appname-setter");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
DEF(YevalSg2cYgenerate_function_specs,"eval/g2c","generate-function-specs");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSmathYE,"goo/math","=");
DEF(YevalSg2cYDiep_suffix,"eval/g2c","$iep-suffix");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
DYNDEF(YevalSg2cYTdefinitionsT,"eval/g2c","*definitions*");
DEF(YevalSg2cYDmin_character_code,"eval/g2c","$min-character-code");
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

DEFLIT(lit_572);
DEFLIT(lit_643);
DEFLIT(lit_626);
DEFLIT(lit_540);
DEFLIT(lit_587);
DEFLIT(lit_619);
DEFLIT(lit_95);
DEFLIT(lit_384);
DEFLIT(lit_22);
DEFLIT(lit_163);
DEFLIT(lit_122);
DEFLIT(lit_642);
DEFLIT(lit_364);
DEFLIT(lit_419);
DEFLIT(lit_188);
DEFLIT(lit_264);
DEFLIT(lit_241);
DEFLIT(lit_581);
DEFLIT(lit_231);
DEFLIT(lit_503);
DEFLIT(lit_203);
DEFLIT(lit_40);
DEFLIT(lit_393);
DEFLIT(lit_467);
DEFLIT(lit_93);
DEFLIT(lit_248);
DEFLIT(lit_192);
DEFLIT(lit_371);
DEFLIT(lit_506);
DEFLIT(lit_523);
DEFLIT(lit_243);
DEFLIT(lit_178);
DEFLIT(lit_549);
DEFLIT(lit_473);
DEFLIT(lit_303);
DEFLIT(lit_320);
DEFLIT(lit_363);
DEFLIT(lit_59);
DEFLIT(lit_389);
DEFLIT(lit_222);
DEFLIT(lit_407);
DEFLIT(lit_359);
DEFLIT(lit_603);
DEFLIT(lit_132);
DEFLIT(lit_383);
DEFLIT(lit_212);
DEFLIT(lit_357);
DEFLIT(lit_387);
DEFLIT(lit_571);
DEFLIT(lit_482);
DEFLIT(lit_292);
DEFLIT(lit_475);
DEFLIT(lit_370);
DEFLIT(lit_373);
DEFLIT(lit_24);
DEFLIT(lit_9);
DEFLIT(lit_227);
DEFLIT(lit_115);
DEFLIT(lit_455);
DEFLIT(lit_123);
DEFLIT(lit_114);
DEFLIT(lit_158);
DEFLIT(lit_18);
DEFLIT(lit_538);
DEFLIT(lit_472);
DEFLIT(lit_449);
DEFLIT(lit_313);
DEFLIT(lit_337);
DEFLIT(lit_266);
DEFLIT(lit_74);
DEFLIT(lit_61);
DEFLIT(lit_312);
DEFLIT(lit_424);
DEFLIT(lit_175);
DEFLIT(lit_281);
DEFLIT(lit_157);
DEFLIT(lit_21);
DEFLIT(lit_152);
DEFLIT(lit_434);
DEFLIT(lit_307);
DEFLIT(lit_5);
DEFLIT(lit_247);
DEFLIT(lit_491);
DEFLIT(lit_650);
DEFLIT(lit_126);
DEFLIT(lit_210);
DEFLIT(lit_358);
DEFLIT(lit_628);
DEFLIT(lit_245);
DEFLIT(lit_311);
DEFLIT(lit_191);
DEFLIT(lit_199);
DEFLIT(lit_171);
DEFLIT(lit_172);
DEFLIT(lit_35);
DEFLIT(lit_185);
DEFLIT(lit_644);
DEFLIT(lit_306);
DEFLIT(lit_332);
DEFLIT(lit_198);
DEFLIT(lit_548);
DEFLIT(lit_601);
DEFLIT(lit_585);
DEFLIT(lit_489);
DEFLIT(lit_117);
DEFLIT(lit_638);
DEFLIT(lit_657);
DEFLIT(lit_92);
DEFLIT(lit_426);
DEFLIT(lit_200);
DEFLIT(lit_242);
DEFLIT(lit_531);
DEFLIT(lit_319);
DEFLIT(lit_565);
DEFLIT(lit_304);
DEFLIT(lit_551);
DEFLIT(lit_379);
DEFLIT(lit_471);
DEFLIT(lit_513);
DEFLIT(lit_146);
DEFLIT(lit_10);
DEFLIT(lit_255);
DEFLIT(lit_490);
DEFLIT(lit_305);
DEFLIT(lit_112);
DEFLIT(lit_69);
DEFLIT(lit_403);
DEFLIT(lit_254);
DEFLIT(lit_86);
DEFLIT(lit_430);
DEFLIT(lit_58);
DEFLIT(lit_624);
DEFLIT(lit_230);
DEFLIT(lit_451);
DEFLIT(lit_154);
DEFLIT(lit_14);
DEFLIT(lit_463);
DEFLIT(lit_381);
DEFLIT(lit_57);
DEFLIT(lit_547);
DEFLIT(lit_4);
DEFLIT(lit_290);
DEFLIT(lit_519);
DEFLIT(lit_64);
DEFLIT(lit_470);
DEFLIT(lit_518);
DEFLIT(lit_180);
DEFLIT(lit_177);
DEFLIT(lit_591);
DEFLIT(lit_557);
DEFLIT(lit_52);
DEFLIT(lit_574);
DEFLIT(lit_124);
DEFLIT(lit_149);
DEFLIT(lit_87);
DEFLIT(lit_159);
DEFLIT(lit_386);
DEFLIT(lit_284);
DEFLIT(lit_224);
DEFLIT(lit_142);
DEFLIT(lit_553);
DEFLIT(lit_656);
DEFLIT(lit_520);
DEFLIT(lit_309);
DEFLIT(lit_250);
DEFLIT(lit_504);
DEFLIT(lit_444);
DEFLIT(lit_402);
DEFLIT(lit_120);
DEFLIT(lit_508);
DEFLIT(lit_134);
DEFLIT(lit_302);
DEFLIT(lit_129);
DEFLIT(lit_552);
DEFLIT(lit_190);
DEFLIT(lit_232);
DEFLIT(lit_466);
DEFLIT(lit_229);
DEFLIT(lit_0);
DEFLIT(lit_401);
DEFLIT(lit_462);
DEFLIT(lit_576);
DEFLIT(lit_330);
DEFLIT(lit_608);
DEFLIT(lit_55);
DEFLIT(lit_382);
DEFLIT(lit_394);
DEFLIT(lit_621);
DEFLIT(lit_71);
DEFLIT(lit_356);
DEFLIT(lit_116);
DEFLIT(lit_460);
DEFLIT(lit_479);
DEFLIT(lit_335);
DEFLIT(lit_75);
DEFLIT(lit_300);
DEFLIT(lit_125);
DEFLIT(lit_298);
DEFLIT(lit_421);
DEFLIT(lit_131);
DEFLIT(lit_376);
DEFLIT(lit_220);
DEFLIT(lit_80);
DEFLIT(lit_488);
DEFLIT(lit_215);
DEFLIT(lit_631);
DEFLIT(lit_278);
DEFLIT(lit_457);
DEFLIT(lit_604);
DEFLIT(lit_119);
DEFLIT(lit_483);
DEFLIT(lit_147);
DEFLIT(lit_25);
DEFLIT(lit_297);
DEFLIT(lit_420);
DEFLIT(lit_28);
DEFLIT(lit_265);
DEFLIT(lit_246);
DEFLIT(lit_425);
DEFLIT(lit_70);
DEFLIT(lit_113);
DEFLIT(lit_221);
DEFLIT(lit_563);
DEFLIT(lit_183);
DEFLIT(lit_223);
DEFLIT(lit_458);
DEFLIT(lit_170);
DEFLIT(lit_399);
DEFLIT(lit_377);
DEFLIT(lit_579);
DEFLIT(lit_289);
DEFLIT(lit_329);
DEFLIT(lit_15);
DEFLIT(lit_640);
DEFLIT(lit_37);
DEFLIT(lit_515);
DEFLIT(lit_655);
DEFLIT(lit_299);
DEFLIT(lit_476);
DEFLIT(lit_537);
DEFLIT(lit_293);
DEFLIT(lit_189);
DEFLIT(lit_96);
DEFLIT(lit_128);
DEFLIT(lit_443);
DEFLIT(lit_151);
DEFLIT(lit_272);
DEFLIT(lit_429);
DEFLIT(lit_288);
DEFLIT(lit_325);
DEFLIT(lit_618);
DEFLIT(lit_197);
DEFLIT(lit_369);
DEFLIT(lit_564);
DEFLIT(lit_238);
DEFLIT(lit_647);
DEFLIT(lit_567);
DEFLIT(lit_392);
DEFLIT(lit_73);
DEFLIT(lit_127);
DEFLIT(lit_445);
DEFLIT(lit_56);
DEFLIT(lit_464);
DEFLIT(lit_652);
DEFLIT(lit_135);
DEFLIT(lit_323);
DEFLIT(lit_380);
DEFLIT(lit_342);
DEFLIT(lit_400);
DEFLIT(lit_32);
DEFLIT(lit_79);
DEFLIT(lit_155);
DEFLIT(lit_90);
DEFLIT(lit_139);
DEFLIT(lit_440);
DEFLIT(lit_350);
DEFLIT(lit_218);
DEFLIT(lit_355);
DEFLIT(lit_334);
DEFLIT(lit_6);
DEFLIT(lit_81);
DEFLIT(lit_536);
DEFLIT(lit_610);
DEFLIT(lit_511);
DEFLIT(lit_345);
DEFLIT(lit_436);
DEFLIT(lit_34);
DEFLIT(lit_206);
DEFLIT(lit_558);
DEFLIT(lit_391);
DEFLIT(lit_333);
DEFLIT(lit_156);
DEFLIT(lit_118);
DEFLIT(lit_186);
DEFLIT(lit_474);
DEFLIT(lit_600);
DEFLIT(lit_481);
DEFLIT(lit_136);
DEFLIT(lit_294);
DEFLIT(lit_651);
DEFLIT(lit_286);
DEFLIT(lit_438);
DEFLIT(lit_541);
DEFLIT(lit_253);
DEFLIT(lit_176);
DEFLIT(lit_469);
DEFLIT(lit_368);
DEFLIT(lit_100);
DEFLIT(lit_219);
DEFLIT(lit_639);
DEFLIT(lit_605);
DEFLIT(lit_20);
DEFLIT(lit_439);
DEFLIT(lit_17);
DEFLIT(lit_327);
DEFLIT(lit_216);
DEFLIT(lit_494);
DEFLIT(lit_516);
DEFLIT(lit_528);
DEFLIT(lit_268);
DEFLIT(lit_99);
DEFLIT(lit_94);
DEFLIT(lit_68);
DEFLIT(lit_148);
DEFLIT(lit_375);
DEFLIT(lit_310);
DEFLIT(lit_465);
DEFLIT(lit_47);
DEFLIT(lit_590);
DEFLIT(lit_456);
DEFLIT(lit_607);
DEFLIT(lit_654);
DEFLIT(lit_539);
DEFLIT(lit_88);
DEFLIT(lit_214);
DEFLIT(lit_101);
DEFLIT(lit_598);
DEFLIT(lit_91);
DEFLIT(lit_207);
DEFLIT(lit_500);
DEFLIT(lit_138);
DEFLIT(lit_620);
DEFLIT(lit_409);
DEFLIT(lit_259);
DEFLIT(lit_609);
DEFLIT(lit_641);
DEFLIT(lit_244);
DEFLIT(lit_257);
DEFLIT(lit_649);
DEFLIT(lit_144);
DEFLIT(lit_546);
DEFLIT(lit_602);
DEFLIT(lit_162);
DEFLIT(lit_560);
DEFLIT(lit_72);
DEFLIT(lit_43);
DEFLIT(lit_331);
DEFLIT(lit_555);
DEFLIT(lit_450);
DEFLIT(lit_353);
DEFLIT(lit_239);
DEFLIT(lit_196);
DEFLIT(lit_261);
DEFLIT(lit_228);
DEFLIT(lit_622);
DEFLIT(lit_287);
DEFLIT(lit_26);
DEFLIT(lit_1);
DEFLIT(lit_33);
DEFLIT(lit_599);
DEFLIT(lit_422);
DEFLIT(lit_544);
DEFLIT(lit_583);
DEFLIT(lit_45);
DEFLIT(lit_410);
DEFLIT(lit_510);
DEFLIT(lit_525);
DEFLIT(lit_83);
DEFLIT(lit_452);
DEFLIT(lit_160);
DEFLIT(lit_89);
DEFLIT(lit_67);
DEFLIT(lit_324);
DEFLIT(lit_568);
DEFLIT(lit_411);
DEFLIT(lit_291);
DEFLIT(lit_301);
DEFLIT(lit_8);
DEFLIT(lit_328);
DEFLIT(lit_442);
DEFLIT(lit_582);
DEFLIT(lit_405);
DEFLIT(lit_633);
DEFLIT(lit_51);
DEFLIT(lit_143);
DEFLIT(lit_169);
DEFLIT(lit_108);
DEFLIT(lit_545);
DEFLIT(lit_280);
DEFLIT(lit_561);
DEFLIT(lit_150);
DEFLIT(lit_285);
DEFLIT(lit_374);
DEFLIT(lit_635);
DEFLIT(lit_44);
DEFLIT(lit_485);
DEFLIT(lit_431);
DEFLIT(lit_569);
DEFLIT(lit_346);
DEFLIT(lit_646);
DEFLIT(lit_352);
DEFLIT(lit_495);
DEFLIT(lit_209);
DEFLIT(lit_550);
DEFLIT(lit_77);
DEFLIT(lit_435);
DEFLIT(lit_517);
DEFLIT(lit_251);
DEFLIT(lit_30);
DEFLIT(lit_412);
DEFLIT(lit_530);
DEFLIT(lit_634);
DEFLIT(lit_612);
DEFLIT(lit_484);
DEFLIT(lit_630);
DEFLIT(lit_133);
DEFLIT(lit_477);
DEFLIT(lit_260);
DEFLIT(lit_521);
DEFLIT(lit_249);
DEFLIT(lit_276);
DEFLIT(lit_184);
DEFLIT(lit_611);
DEFLIT(lit_499);
DEFLIT(lit_11);
DEFLIT(lit_614);
DEFLIT(lit_78);
DEFLIT(lit_645);
DEFLIT(lit_187);
DEFLIT(lit_627);
DEFLIT(lit_398);
DEFLIT(lit_432);
DEFLIT(lit_23);
DEFLIT(lit_613);
DEFLIT(lit_362);
DEFLIT(lit_195);
DEFLIT(lit_378);
DEFLIT(lit_29);
DEFLIT(lit_273);
DEFLIT(lit_336);
DEFLIT(lit_211);
DEFLIT(lit_173);
DEFLIT(lit_235);
DEFLIT(lit_340);
DEFLIT(lit_315);
DEFLIT(lit_339);
DEFLIT(lit_82);
DEFLIT(lit_562);
DEFLIT(lit_527);
DEFLIT(lit_388);
DEFLIT(lit_492);
DEFLIT(lit_594);
DEFLIT(lit_252);
DEFLIT(lit_283);
DEFLIT(lit_584);
DEFLIT(lit_66);
DEFLIT(lit_534);
DEFLIT(lit_349);
DEFLIT(lit_36);
DEFLIT(lit_42);
DEFLIT(lit_46);
DEFLIT(lit_459);
DEFLIT(lit_179);
DEFLIT(lit_588);
DEFLIT(lit_13);
DEFLIT(lit_240);
DEFLIT(lit_105);
DEFLIT(lit_617);
DEFLIT(lit_344);
DEFLIT(lit_385);
DEFLIT(lit_606);
DEFLIT(lit_145);
DEFLIT(lit_615);
DEFLIT(lit_648);
DEFLIT(lit_428);
DEFLIT(lit_554);
DEFLIT(lit_446);
DEFLIT(lit_104);
DEFLIT(lit_514);
DEFLIT(lit_414);
DEFLIT(lit_535);
DEFLIT(lit_542);
DEFLIT(lit_566);
DEFLIT(lit_85);
DEFLIT(lit_202);
DEFLIT(lit_295);
DEFLIT(lit_637);
DEFLIT(lit_141);
DEFLIT(lit_501);
DEFLIT(lit_437);
DEFLIT(lit_322);
DEFLIT(lit_343);
DEFLIT(lit_577);
DEFLIT(lit_586);
DEFLIT(lit_596);
DEFLIT(lit_372);
DEFLIT(lit_433);
DEFLIT(lit_636);
DEFLIT(lit_348);
DEFLIT(lit_592);
DEFLIT(lit_262);
DEFLIT(lit_270);
DEFLIT(lit_390);
DEFLIT(lit_533);
DEFLIT(lit_447);
DEFLIT(lit_76);
DEFLIT(lit_54);
DEFLIT(lit_616);
DEFLIT(lit_204);
DEFLIT(lit_496);
DEFLIT(lit_236);
DEFLIT(lit_341);
DEFLIT(lit_65);
DEFLIT(lit_233);
DEFLIT(lit_423);
DEFLIT(lit_556);
DEFLIT(lit_408);
DEFLIT(lit_453);
DEFLIT(lit_480);
DEFLIT(lit_258);
DEFLIT(lit_296);
DEFLIT(lit_417);
DEFLIT(lit_623);
DEFLIT(lit_321);
DEFLIT(lit_63);
DEFLIT(lit_559);
DEFLIT(lit_509);
DEFLIT(lit_573);
DEFLIT(lit_282);
DEFLIT(lit_213);
DEFLIT(lit_347);
DEFLIT(lit_107);
DEFLIT(lit_454);
DEFLIT(lit_41);
DEFLIT(lit_318);
DEFLIT(lit_53);
DEFLIT(lit_225);
DEFLIT(lit_396);
DEFLIT(lit_205);
DEFLIT(lit_168);
DEFLIT(lit_406);
DEFLIT(lit_487);
DEFLIT(lit_237);
DEFLIT(lit_493);
DEFLIT(lit_317);
DEFLIT(lit_448);
DEFLIT(lit_111);
DEFLIT(lit_7);
DEFLIT(lit_575);
DEFLIT(lit_274);
DEFLIT(lit_275);
DEFLIT(lit_27);
DEFLIT(lit_597);
DEFLIT(lit_595);
DEFLIT(lit_418);
DEFLIT(lit_512);
DEFLIT(lit_194);
DEFLIT(lit_524);
DEFLIT(lit_532);
DEFLIT(lit_217);
DEFLIT(lit_39);
DEFLIT(lit_625);
DEFLIT(lit_267);
DEFLIT(lit_522);
DEFLIT(lit_16);
DEFLIT(lit_110);
DEFLIT(lit_19);
DEFLIT(lit_106);
DEFLIT(lit_201);
DEFLIT(lit_526);
DEFLIT(lit_234);
DEFLIT(lit_167);
DEFLIT(lit_653);
DEFLIT(lit_543);
DEFLIT(lit_529);
DEFLIT(lit_279);
DEFLIT(lit_50);
DEFLIT(lit_269);
DEFLIT(lit_308);
DEFLIT(lit_413);
DEFLIT(lit_109);
DEFLIT(lit_580);
DEFLIT(lit_130);
DEFLIT(lit_314);
DEFLIT(lit_140);
DEFLIT(lit_578);
DEFLIT(lit_181);
DEFLIT(lit_497);
DEFLIT(lit_166);
DEFLIT(lit_502);
DEFLIT(lit_593);
DEFLIT(lit_98);
DEFLIT(lit_226);
DEFLIT(lit_271);
DEFLIT(lit_208);
DEFLIT(lit_256);
DEFLIT(lit_182);
DEFLIT(lit_161);
DEFLIT(lit_367);
DEFLIT(lit_97);
DEFLIT(lit_277);
DEFLIT(lit_12);
DEFLIT(lit_486);
DEFLIT(lit_48);
DEFLIT(lit_416);
DEFLIT(lit_3);
DEFLIT(lit_263);
DEFLIT(lit_570);
DEFLIT(lit_165);
DEFLIT(lit_629);
DEFLIT(lit_38);
DEFLIT(lit_60);
DEFLIT(lit_2);
DEFLIT(lit_193);
DEFLIT(lit_478);
DEFLIT(lit_31);
DEFLIT(lit_366);
DEFLIT(lit_397);
DEFLIT(lit_461);
DEFLIT(lit_121);
DEFLIT(lit_589);
DEFLIT(lit_395);
DEFLIT(lit_49);
DEFLIT(lit_360);
DEFLIT(lit_351);
DEFLIT(lit_153);
DEFLIT(lit_507);
DEFLIT(lit_361);
DEFLIT(lit_632);
DEFLIT(lit_498);
DEFLIT(lit_365);
DEFLIT(lit_103);
DEFLIT(lit_84);
DEFLIT(lit_354);
DEFLIT(lit_316);
DEFLIT(lit_338);
DEFLIT(lit_427);
DEFLIT(lit_326);
DEFLIT(lit_415);
DEFLIT(lit_164);
DEFLIT(lit_404);
DEFLIT(lit_137);
DEFLIT(lit_102);
DEFLIT(lit_441);
DEFLIT(lit_174);
DEFLIT(lit_62);
DEFLIT(lit_468);
DEFLIT(lit_505);

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
LOCFOR(fun_x_1560_41);
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
FUNFOR(YevalSg2cYchar_buffer_as_string);
LOCFOR(fun_mangle_string_literal_62);
LOCFOR(fun_mangle_string_literal_63);
LOCFOR(fun_process_integer_64);
LOCFOR(fun_mangle_integer_65);
FUNFOR(YevalSg2cYmangler_reset);
FUNFOR(YevalSg2cYmangle_name_into);
LOCFOR(fun_mangle_raw_name_68);
LOCFOR(fun_mangle_raw_name_69);
LOCFOR(fun_mangle_local_name_70);
LOCFOR(fun_mangle_local_name_71);
FUNFOR(YevalSg2cYbuf_cat2X);
LOCFOR(fun_mangle_module_into_73);
LOCFOR(fun_mangle_global_name_74);
LOCFOR(fun_mangle_global_name_75);
FUNFOR(YevalSg2cYmangle_boot_name);
FUNFOR(YevalSg2cYmangle_quotation_name);
LOCFOR(fun_mangle_binding_78);
FUNFOR(YevalSg2cYmangle_local_marked_name);
LOCFOR(fun_mangle_binding_80);
LOCFOR(fun_mangle_binding_81);
LOCFOR(fun_x_1604_82);
LOCFOR(fun_83);
LOCFOR(fun_84);
LOCFOR(fun_x_1608_85);
LOCFOR(fun_86);
LOCFOR(fun_87);
LOCFOR(fun_x_1612_88);
LOCFOR(fun_89);
LOCFOR(fun_90);
LOCFOR(fun_gen_result_91);
LOCFOR(fun_gen_depth_92);
LOCFOR(fun_x_1619_93);
LOCFOR(fun_94);
LOCFOR(fun_95);
LOCFOR(fun_x_1623_96);
LOCFOR(fun_97);
LOCFOR(fun_98);
LOCFOR(fun_x_1627_99);
LOCFOR(fun_100);
LOCFOR(fun_101);
LOCFOR(fun_generate_quotation_forwards_102);
LOCFOR(fun_generate_quotations_103);
LOCFOR(fun_false_name_104);
LOCFOR(fun_generate_quotation_105);
LOCFOR(fun_generate_quotation_106);
LOCFOR(fun_107);
LOCFOR(fun_generate_quotation_108);
LOCFOR(fun_generate_quotation_109);
LOCFOR(fun_generate_quotation_110);
LOCFOR(fun_111);
LOCFOR(fun_float_to_c_string_112);
LOCFOR(fun_generate_quotation_113);
LOCFOR(fun_generate_quotation_114);
LOCFOR(fun_generate_quotation_115);
LOCFOR(fun_generate_quotation_116);
LOCFOR(fun_generate_quotation_117);
FUNFOR(YevalSg2cYbinding_Gc);
LOCFOR(fun_reference_Gc_119);
LOCFOR(fun_reference_Gc_120);
LOCFOR(fun_to_c_121);
LOCFOR(fun_to_c_122);
LOCFOR(fun_gen_ref_123);
LOCFOR(fun_gen_ref_124);
LOCFOR(fun_gen_ref_125);
LOCFOR(fun_gen_ref_126);
LOCFOR(fun_gen_ref_127);
LOCFOR(fun_gen_ref_128);
LOCFOR(fun_gen_ref_129);
LOCFOR(fun_gen_ref_130);
LOCFOR(fun_gen_ref_131);
LOCFOR(fun_to_c_132);
LOCFOR(fun_to_c_133);
LOCFOR(fun_to_c_134);
LOCFOR(fun_to_c_135);
LOCFOR(fun_to_c_136);
LOCFOR(fun_bbQ_137);
LOCFOR(fun_bbQ_138);
LOCFOR(fun_bbQ_139);
LOCFOR(fun_to_c_140);
LOCFOR(fun_141);
LOCFOR(fun_to_c_142);
LOCFOR(fun_143);
LOCFOR(fun_144);
LOCFOR(fun_to_c_145);
LOCFOR(fun_to_c_146);
LOCFOR(fun_to_c_147);
LOCFOR(fun_148);
LOCFOR(fun_149);
LOCFOR(fun_to_c_150);
LOCFOR(fun_to_c_151);
LOCFOR(fun_to_c_152);
LOCFOR(fun_to_c_153);
LOCFOR(fun_to_c_154);
LOCFOR(fun_to_c_155);
LOCFOR(fun_156);
LOCFOR(fun_157);
LOCFOR(fun_to_c_158);
LOCFOR(fun_159);
LOCFOR(fun_to_c_160);
LOCFOR(fun_funshell_to_c_161);
LOCFOR(fun_162);
LOCFOR(fun_funinit_to_c_163);
LOCFOR(fun_to_c_164);
LOCFOR(fun_out_list_builder_165);
LOCFOR(fun_166);
LOCFOR(fun_gen_fab_list_167);
LOCFOR(fun_generate_function_specs_168);
LOCFOR(fun_169);
LOCFOR(fun_to_c_170);
LOCFOR(fun_to_c_171);
LOCFOR(fun_generate_function_forwards_172);
LOCFOR(fun_173);
LOCFOR(fun_174);
LOCFOR(fun_generate_function_forward_175);
LOCFOR(fun_generate_function_binding_176);
LOCFOR(fun_generate_function_forward_177);
LOCFOR(fun_178);
LOCFOR(fun_generate_function_bodies_179);
LOCFOR(fun_180);
LOCFOR(fun_generate_functions_181);
LOCFOR(fun_generate_closure_structure_182);
LOCFOR(fun_generate_function_body_reference_183);
LOCFOR(fun_generate_return_184);
LOCFOR(fun_generate_return_185);
LOCFOR(fun_primitive_inlinableQ_186);
LOCFOR(fun_187);
LOCFOR(fun_188);
LOCFOR(fun_generate_function_code_189);
LOCFOR(fun_dispatcherQ_190);
LOCFOR(fun_191);
LOCFOR(fun_192);
LOCFOR(fun_193);
LOCFOR(fun_generate_function_code_194);
LOCFOR(fun_generate_local_temporaries_195);
LOCFOR(fun_generate_registers_196);
LOCFOR(fun_module_info_name_197);
LOCFOR(fun_maybe_declare_198);
LOCFOR(fun_199);
FUNFOR(YevalSg2cYdeclare_imported_module_infos);
LOCFOR(fun_201);
LOCFOR(fun_202);
FUNFOR(YevalSg2cYgenerate_module_info);
LOCFOR(fun_module_init_name_204);
LOCFOR(fun_module_init_decl_205);
LOCFOR(fun_generate_module_init_206);
LOCFOR(fun_generate_main_207);
extern P YevalSg2cY___main_0___ ();
extern P YevalSg2cY___main_1___ ();
extern P YevalSg2cY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_module_loader_appname_0) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSg2cYmodule_loader_appname));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_appname_setter_1) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSg2cYmodule_loader_appname));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_app_modname_2) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSg2cYmodule_loader_app_modname));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_app_modname_setter_3) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSg2cYmodule_loader_app_modname));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_src_file_4) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSg2cYmodule_src_file));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_src_file_setter_5) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSg2cYmodule_src_file));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_mtime_6) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSg2cYmodule_mtime));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_mtime_setter_7) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSg2cYmodule_mtime));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_module_type_8) {
  P loader_;
LINK_STACK();
  ARG(loader_, 0);
UNLINK_STACK();
  RET(VARREF(YevalSg2cYLg2c_moduleG));
}

FUNCODEDEF(fun_9) {
  P T0,T1,T2;
LINK_STACK();
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
  T0 = DYNSET(YevalSg2cYTdefinitionsT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_11) {
  P x_1553F3352;
  P T0,T1,T2,T3;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  x_1553F3352 = DYNREF(YevalSg2cYTdefinitionsT);
  T2 = FUNFAB(fun_9,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T3 = FUNFAB(fun_10,1,x_1553F3352);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_12) {
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

FUNCODEDEF(fun_13) {
  P name_;
  P tmpF3356;
  P src_fileF3355;
  P build_fileF3354;
  P fileF3353;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(name_, 0);
  T10 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  fileF3353 = T10;
  T9 = CALL2(1,VARREF(YgooSsystemYadd_build_path),FREEREF(0),fileF3353);
  build_fileF3354 = T9;
  T8 = CALL1(1,VARREF(YgooSsystemYadd_src_path),fileF3353);
  src_fileF3355 = T8;
  T6 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),build_fileF3354);
  T5 = CALL1(1,VARREF(Ynot),T6);
  tmpF3356 = T5;
  if (tmpF3356 != YPfalse) {
    T1 = tmpF3356;
  } else {
    T3 = CALL1(1,VARREF(YgooSsystemYfile_mtime),src_fileF3355);
    T4 = CALL1(1,VARREF(YgooSsystemYfile_mtime),build_fileF3354);
    T2 = CALL2(1,VARREF(YgooSmagYGE),T3,T4);
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSsystemYfile_copy),src_fileF3355,build_fileF3354);
    T0 = T7;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_module_14) {
  P loader_,name_;
  P out_portF3366;
  P prgF3365;
  P astF3364;
  P out_fileF3363;
  P appnameF3362;
  P src_fileF3361;
  P fileF3360;
  P envF3359;
  P keepmodQF3358;
  P modF3357;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
  T20 = CALL2(1,VARREF(YevalSastYfab_g2c_module),loader_,name_);
  modF3357 = T20;
  keepmodQF3358 = YPfalse;
  T19 = CALL1(1,VARREF(YevalSastYmodule_target_environment),modF3357);
  envF3359 = T19;
  T18 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  fileF3360 = T18;
  T17 = CALL1(1,VARREF(YgooSsystemYgoo_filename),fileF3360);
  T16 = CALL1(1,VARREF(YgooSsystemYadd_src_path),T17);
  src_fileF3361 = T16;
  T15 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF3362 = T15;
  T14 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF3360);
  T13 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF3362,T14);
  out_fileF3363 = T13;
  CALL2(1,VARREF(YevalSg2cYmodule_src_file_setter),src_fileF3361,modF3357);
  T0 = CALL1(1,VARREF(YgooSsystemYfile_mtime),src_fileF3361);
  CALL2(1,VARREF(YevalSg2cYmodule_mtime_setter),T0,modF3357);
  T1 = (P)YPsu(LITREF(lit_22));
  (P)YevalSg2cYPprint_cpu_usage(T1);
  T12 = CALL2(1,VARREF(YevalSg2cYcompute_ast),src_fileF3361,envF3359);
  astF3364 = T12;
  T11 = CALL2(1,VARREF(YevalSg2cYcompute_program),astF3364,envF3359);
  prgF3365 = T11;
  T2 = (P)YPsu(LITREF(lit_23));
  (P)YevalSg2cYPprint_cpu_usage(T2);
  T3 = CALL1(1,VARREF(YgooSsystemYparent_directory),out_fileF3363);
  CALL1(1,VARREF(YgooSsystemYprobe_directory),T3);
  out_portF3366 = YPfalse;
  out_portF3366 = BOXFAB(out_portF3366);
  T6 = FUNFAB(fun_11,5,out_portF3366,out_fileF3363,prgF3365,astF3364,modF3357);
  T7 = FUNFAB(fun_12,1,out_portF3366);
  T5 = with_cleanup(T6,T7);
  T8 = FUNFAB(fun_13,1,appnameF3362);
  T9 = CALL1(1,VARREF(YevalSastYmodule_uses_c_files),modF3357);
  CALL2(1,VARREF(YgooSmacrosYdo),T8,T9);
  T10 = (P)YPsu(LITREF(lit_26));
  (P)YevalSg2cYPprint_cpu_usage(T10);
UNLINK_STACK();
  RET(modF3357);
}

FUNCODEDEF(YevalSg2cYmodule_up_to_dateQ) {
  P mod_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(mod_, 0);
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
LINK_STACK();
  ARG(mod_, 0);
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
  P x_1554F3367;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  x_1554F3367 = VARREF(YgooSioSportYout);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1554F3367,name_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_1554F3367,LITREF(lit_33));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYpurge_outdated_modules) {
  P loader_;
  P changedF3368;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(loader_, 0);
  changedF3368 = Ynil;
  changedF3368 = BOXFAB(changedF3368);
  T1 = FUNFAB(fun_16,1,changedF3368);
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T1,loader_);
  T2 = fun_17;
  T3 = BOXVAL(changedF3368);
  CALL2(1,VARREF(YgooSmacrosYdo),T2,T3);
  T5 = BOXVAL(changedF3368);
  T4 = CALL2(1,VARREF(YevalSastYremove_modules_by_nameX),loader_,T5);
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(YevalSg2cYg2c_def_app) {
  P appname_,modname_;
  P T0;
LINK_STACK();
  ARG(appname_, 0);
  ARG(modname_, 1);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YevalSg2cYmodule_loader_appname),appname_,VARREF(YevalSg2cYmodule_loader_app_modname),modname_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSg2cYg2c_build_app) {
  P loader_;
  P modF3369;
  P T0,T1;
LINK_STACK();
  ARG(loader_, 0);
  CALL1(1,VARREF(YevalSg2cYpurge_outdated_modules),loader_);
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_loader_app_modname),loader_);
  T0 = CALL2(1,VARREF(YevalSastYprobe_module),loader_,T1);
  modF3369 = T0;
  CALL2(1,VARREF(YgooSioSportYputs),VARREF(YgooSioSportYout),LITREF(lit_38));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),VARREF(YevalSastYreport_undefined_global_bindings),loader_);
  CALL2(1,VARREF(YevalSg2cYgenerate_c_application),loader_,modF3369);
  CALL1(1,VARREF(YevalSg2cYgenerate_makefile),loader_);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(YevalSg2cYg2c_test) {
  P x_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
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
  T0 = DYNSET(YevalSg2cYTdefinitionsT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_24) {
  P x_1556F3370;
  P T0,T1,T2;
LINK_STACK();
  DYNSET(YevalSg2cYTdynamic_linkingQT,YPtrue);
  x_1556F3370 = DYNREF(YevalSg2cYTdefinitionsT);
  T1 = FUNFAB(fun_22,4,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = FUNFAB(fun_23,1,x_1556F3370);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_25) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YevalSg2cYTdynamic_linkingQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_26) {
  P x_1555F3371;
  P T0,T1,T2,T3;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  x_1555F3371 = DYNREF(YevalSg2cYTdynamic_linkingQT);
  T2 = FUNFAB(fun_24,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T3 = FUNFAB(fun_25,1,x_1555F3371);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_27) {
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

FUNCODEDEF(fun_g2c_ast_28) {
  P ast_,env_;
  P out_portF3377;
  P prgF3376;
  P out_fileF3375;
  P fileF3374;
  P nameF3373;
  P modF3372;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
  T11 = CALL1(1,VARREF(YevalSastYenvironment_module),env_);
  modF3372 = T11;
  T8 = CALL0(1,VARREF(YgooSsystemYprocess_id));
  T10 = CALL2(1,VARREF(YgooSmathYA),DYNREF(YevalSg2cYTtmp_file_counterT),YPint((P)1));
  T9 = DYNSET(YevalSg2cYTtmp_file_counterT,T10);
  T7 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_45),T8,T9);
  nameF3373 = T7;
  T6 = CALL1(1,VARREF(YgooSsystemYadd_tmp_path),nameF3373);
  fileF3374 = T6;
  T5 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF3374);
  out_fileF3375 = T5;
  T4 = CALL2(1,VARREF(YevalSg2cYcompute_program),ast_,env_);
  prgF3376 = T4;
  out_portF3377 = YPfalse;
  out_portF3377 = BOXFAB(out_portF3377);
  T2 = FUNFAB(fun_26,5,out_portF3377,out_fileF3375,prgF3376,ast_,modF3372);
  T3 = FUNFAB(fun_27,1,out_portF3377);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(fileF3374);
}

FUNCODEDEF(fun_g2c_exp_29) {
  P exp_,env_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  ARG(env_, 1);
  T1 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),exp_,env_,YPfalse);
  T0 = CALL2(1,VARREF(YevalSg2cYg2c_ast),T1,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_compile_load_30) {
  P name_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(name_, 0);
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
  P nameF3378;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  ARG(env_, 1);
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_exp),exp_,env_);
  nameF3378 = T1;
  T0 = CALL1(1,VARREF(YevalSg2cYcompile_load),nameF3378);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_eval_32) {
  P ast_,env_;
  P nameF3379;
  P T0,T1;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_ast),ast_,env_);
  nameF3379 = T1;
  T0 = CALL1(1,VARREF(YevalSg2cYcompile_load),nameF3379);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_top_33) {
  P T0;
LINK_STACK();
  T0 = CALL1(1,VARREF(YevalSg2cYg2c_build_app),VARREF(YevalSg2cYTg2c_appT));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_clean_34) {
  P T0;
LINK_STACK();
  T0 = CALL2(1,VARREF(YevalSg2cYg2c_def_app),LITREF(lit_58),LITREF(lit_42));
  VARSET(YevalSg2cYTg2c_appT,T0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_compute_ast_35) {
  P filename_,ct_env_;
  P astF3381;
  P sexprF3380;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(filename_, 0);
  ARG(ct_env_, 1);
  T3 = CALL1(1,VARREF(YevalStopYread_file),filename_);
  sexprF3380 = T3;
  T0 = (P)YPsu(LITREF(lit_61));
  (P)YevalSg2cYPprint_cpu_usage(T0);
  T2 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),sexprF3380,ct_env_,YPfalse);
  astF3381 = T2;
  T1 = (P)YPsu(LITREF(lit_62));
  (P)YevalSg2cYPprint_cpu_usage(T1);
UNLINK_STACK();
  QRET(astF3381);
}

FUNCODEDEF(fun_compute_program_36) {
  P e_,env_;
  P fltF3386;
  P prgF3385;
  P lftF3384;
  P boxF3383;
  P anaF3382;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T11 = CALL2(1,VARREF(YevalSast_linearizeYanalyze_calls),e_,env_);
  anaF3382 = T11;
  T0 = (P)YPsu(LITREF(lit_65));
  (P)YevalSg2cYPprint_cpu_usage(T0);
  T10 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),anaF3382);
  boxF3383 = T10;
  T1 = (P)YPsu(LITREF(lit_66));
  (P)YevalSg2cYPprint_cpu_usage(T1);
  T9 = CALL1(1,VARREF(YevalSast_linearizeYliftX),boxF3383);
  lftF3384 = T9;
  T2 = (P)YPsu(LITREF(lit_67));
  (P)YevalSg2cYPprint_cpu_usage(T2);
  T8 = CALL1(1,VARREF(YevalSast_linearizeYextract_thingsX),lftF3384);
  prgF3385 = T8;
  T3 = (P)YPsu(LITREF(lit_68));
  (P)YevalSg2cYPprint_cpu_usage(T3);
  T7 = CALL3(1,VARREF(YevalSast_linearizeYclosurize_mainX),prgF3385,env_,YPint((P)64));
  fltF3386 = T7;
  T4 = (P)YPsu(LITREF(lit_69));
  (P)YevalSg2cYPprint_cpu_usage(T4);
  CALL1(1,VARREF(YevalSast_linearizeYgather_temporariesX),fltF3386);
  T5 = (P)YPsu(LITREF(lit_70));
  (P)YevalSg2cYPprint_cpu_usage(T5);
  CALL2(1,VARREF(YevalSast_linearizeYregister_allocateX),fltF3386,YPfalse);
  T6 = (P)YPsu(LITREF(lit_71));
  (P)YevalSg2cYPprint_cpu_usage(T6);
UNLINK_STACK();
  QRET(prgF3385);
}

FUNCODEDEF(fun_generate_c_module_37) {
  P out_,e_,prg_,mod_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(out_, 0);
  ARG(e_, 1);
  ARG(prg_, 2);
  ARG(mod_, 3);
  T0 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  CALL2(1,VARREF(YevalSg2cYgenerate_header),out_,T0);
  CALL2(1,VARREF(YevalSg2cYgenerate_global_environment),out_,mod_);
  T1 = CALL1(1,VARREF(YevalSast_linearizeYprogram_quotations),prg_);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation_forwards),out_,T1);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),prg_);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_forwards),out_,T2);
  T3 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),prg_);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_bodies),out_,T3);
  T4 = CALL1(1,VARREF(Ynot),DYNREF(YevalSg2cYTdynamic_linkingQT));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YevalSg2cYgenerate_module_info),out_,mod_);
  } else {
  }
  T6 = CALL1(1,VARREF(YevalSast_linearizeYprogram_form),prg_);
  CALL3(1,VARREF(YevalSg2cYgenerate_module_init),out_,mod_,T6);
  CALL1(1,VARREF(YevalSg2cYgenerate_trailer),out_);
UNLINK_STACK();
  QRET(prg_);
}

FUNCODEDEF(fun_38) {
  P T0,T1,T2,T3,T4;
LINK_STACK();
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

FUNCODEDEF(fun_generate_c_application_40) {
  P loader_,mod_;
  P out_portF3390;
  P out_nameF3389;
  P init_nameF3388;
  P appnameF3387;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(loader_, 0);
  ARG(mod_, 1);
  T7 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF3387 = T7;
  T6 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF3387,LITREF(lit_76));
  init_nameF3388 = T6;
  T5 = CALL1(1,VARREF(YgooSsystemYc_filename),init_nameF3388);
  T4 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF3387,T5);
  out_nameF3389 = T4;
  out_portF3390 = YPfalse;
  out_portF3390 = BOXFAB(out_portF3390);
  T2 = FUNFAB(fun_38,4,out_portF3390,out_nameF3389,appnameF3387,mod_);
  T3 = FUNFAB(fun_39,1,out_portF3390);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_x_1560_41) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_81),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_42) {
  P return_;
  P x_1559F3405;
  P x_1559F3404;
  P x_1559F3403;
  P x_1559F3402;
  P x_1559F3401;
  P x_1559F3400;
  P x_1559F3399;
  P x_1559F3398;
  P x_1559F3397;
  P x_1559F3396;
  P bodyF3395;
  P loaderF3394;
  P modF3393;
  P x_1559F3392;
  P x_1560F3391;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
LINK_STACK();
  ARG(return_, 0);
  T32 = FUNSHELL(0,fun_x_1560_41,2);
  x_1560F3391 = T32;
  FUNINIT(x_1560F3391, 2,FREEREF(0),return_);
  x_1559F3392 = FREEREF(0);
  modF3393 = YPfalse;
  modF3393 = BOXFAB(modF3393);
  loaderF3394 = YPfalse;
  loaderF3394 = BOXFAB(loaderF3394);
  bodyF3395 = YPfalse;
  bodyF3395 = BOXFAB(bodyF3395);
  T3 = CALL2(1,VARREF(YisaQ),x_1559F3392,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T18 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1559F3392,LITREF(lit_81),x_1560F3391);
    x_1559F3396 = T18;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1559F3396,x_1560F3391);
    x_1559F3397 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1559F3397,x_1560F3391);
    BOXVAL(modF3393) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1559F3397);
    x_1559F3398 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1559F3398,x_1560F3391);
    BOXVAL(loaderF3394) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1559F3398);
    x_1559F3399 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1559F3399,x_1560F3391);
    x_1559F3400 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1559F3400,x_1560F3391);
    T11 = CALL1(1,VARREF(Ytail),x_1559F3399);
    x_1559F3401 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1559F3401,x_1560F3391);
    T17 = CALL1(1,VARREF(Ytail),x_1559F3396);
    x_1559F3402 = T17;
    BOXVAL(bodyF3395) = x_1559F3402;
    x_1559F3403 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1559F3403,x_1560F3391);
    x_1559F3404 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1559F3404,x_1560F3391);
    T7 = CALL1(1,VARREF(Ytail),x_1559F3403);
    x_1559F3405 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1559F3405,x_1560F3391);
  } else {
    T19 = CALL2(1,x_1560F3391,LITREF(lit_82),x_1559F3392);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_83));
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T28 = BOXVAL(modF3393);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T26 = CALL2(1,VARREF(YgooSmacrosYcat),T27,LITREF(lit_85));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T29 = BOXVAL(bodyF3395);
  T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T29,LITREF(lit_85));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T31 = BOXVAL(loaderF3394);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T30,LITREF(lit_85));
UNLINK_STACK();
  QRET(T20);
}

FUNCODEDEF(fun_43) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_42,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_44) {
  P i_;
  P x_1564F3406;
  P T0,T1;
LINK_STACK();
  ARG(i_, 0);
  T1 = BOXVAL(FREEREF(0));
  x_1564F3406 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_1564F3406,LITREF(lit_97));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1564F3406,i_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_1564F3406,LITREF(lit_98));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_45) {
  P mod_;
  P T0,T1,T2;
LINK_STACK();
  ARG(mod_, 0);
  T1 = FUNFAB(fun_44,1,FREEREF(0));
  T2 = CALL1(1,VARREF(YevalSastYmodule_uses_c_includes),mod_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_put_obj_46) {
  P name_;
  P x_1567F3407;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(name_, 0);
  T3 = BOXVAL(FREEREF(0));
  x_1567F3407 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),x_1567F3407,LITREF(lit_104));
  T1 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  T0 = CALL1(1,VARREF(YgooSsystemYobj_filename),T1);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1567F3407,T0);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1567F3407,LITREF(lit_105));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_47) {
  P name_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(name_, 0);
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
LINK_STACK();
  ARG(n_, 0);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),n_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  P mod_;
  P put_objF3408;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(mod_, 0);
  T6 = FUNSHELL(1,fun_put_obj_46,1);
  put_objF3408 = T6;
  FUNINIT(put_objF3408, 1,FREEREF(0));
  T0 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  CALL1(0,put_objF3408,T0);
  T2 = FUNFAB(fun_47,1,put_objF3408);
  T4 = fun_48;
  T5 = CALL1(1,VARREF(YevalSastYmodule_uses_c_files),mod_);
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),T4,T5);
  T1 = CALL2(1,VARREF(YgooSmacrosYdo),T2,T3);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_50) {
  P l_;
  P x_1571F3409;
  P T0,T1;
LINK_STACK();
  ARG(l_, 0);
  T1 = BOXVAL(FREEREF(0));
  x_1571F3409 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_1571F3409,LITREF(lit_116));
  T0 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1571F3409,l_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_51) {
  P mod_;
  P T0,T1,T2;
LINK_STACK();
  ARG(mod_, 0);
  T1 = FUNFAB(fun_50,1,FREEREF(0));
  T2 = CALL1(1,VARREF(YevalSastYmodule_uses_c_libraries),mod_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_52) {
  P x_1572F3418;
  P x_1570F3417;
  P x_1569F3416;
  P x_1568F3415;
  P x_1566F3414;
  P x_1565F3413;
  P x_1563F3412;
  P x_1562F3411;
  P x_1561F3410;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T2 = BOXVAL(FREEREF(0));
  x_1561F3410 = T2;
  CALL2(1,VARREF(YgooSioSportYputs),x_1561F3410,LITREF(lit_90));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1561F3410,FREEREF(2));
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1561F3410,LITREF(lit_91));
  T4 = BOXVAL(FREEREF(0));
  x_1562F3411 = T4;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1562F3411,VARREF(YgooSsystemYTc_extensionT));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1562F3411,VARREF(YgooSsystemYTobj_extensionT));
  CALL2(1,VARREF(YgooSioSportYputs),x_1562F3411,LITREF(lit_92));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1562F3411,FREEREF(2));
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1562F3411,LITREF(lit_93));
  T6 = BOXVAL(FREEREF(0));
  x_1563F3412 = T6;
  T5 = CALL2(1,VARREF(YgooSioSportYputs),x_1563F3412,LITREF(lit_94));
  T7 = FUNFAB(fun_45,1,FREEREF(0));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T7,FREEREF(3));
  T9 = BOXVAL(FREEREF(0));
  x_1565F3413 = T9;
  T8 = CALL2(1,VARREF(YgooSioSportYputs),x_1565F3413,LITREF(lit_99));
  T11 = BOXVAL(FREEREF(0));
  x_1566F3414 = T11;
  T10 = CALL2(1,VARREF(YgooSioSportYputs),x_1566F3414,LITREF(lit_100));
  T12 = FUNFAB(fun_49,1,FREEREF(0));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T12,FREEREF(3));
  T15 = BOXVAL(FREEREF(0));
  x_1568F3415 = T15;
  CALL2(1,VARREF(YgooSioSportYputs),x_1568F3415,LITREF(lit_109));
  T13 = CALL1(1,VARREF(YgooSsystemYobj_filename),FREEREF(4));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1568F3415,T13);
  T14 = CALL2(1,VARREF(YgooSioSportYputs),x_1568F3415,LITREF(lit_110));
  T17 = BOXVAL(FREEREF(0));
  x_1569F3416 = T17;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1569F3416,FREEREF(5));
  T16 = CALL2(1,VARREF(YgooSioSportYputs),x_1569F3416,LITREF(lit_111));
  T19 = BOXVAL(FREEREF(0));
  x_1570F3417 = T19;
  CALL2(1,VARREF(YgooSioSportYputs),x_1570F3417,LITREF(lit_112));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1570F3417,FREEREF(5));
  T18 = CALL2(1,VARREF(YgooSioSportYputs),x_1570F3417,LITREF(lit_113));
  T20 = FUNFAB(fun_51,1,FREEREF(0));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T20,FREEREF(3));
  T22 = BOXVAL(FREEREF(0));
  x_1572F3418 = T22;
  CALL2(1,VARREF(YgooSioSportYputs),x_1572F3418,LITREF(lit_117));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1572F3418,FREEREF(5));
  T21 = CALL2(1,VARREF(YgooSioSportYputs),x_1572F3418,LITREF(lit_118));
UNLINK_STACK();
  QRET(T21);
}

FUNCODEDEF(fun_53) {
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

FUNCODEDEF(fun_generate_makefile_54) {
  P loader_;
  P outF3424;
  P out_nameF3423;
  P sepF3422;
  P exe_nameF3421;
  P init_nameF3420;
  P appnameF3419;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(loader_, 0);
  T7 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF3419 = T7;
  T6 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF3419,LITREF(lit_88));
  init_nameF3420 = T6;
  T5 = CALL1(1,VARREF(YgooSsystemYexe_filename),appnameF3419);
  exe_nameF3421 = T5;
  sepF3422 = VARREF(YgooSsystemYTpath_separatorT);
  T4 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF3419,LITREF(lit_89));
  out_nameF3423 = T4;
  outF3424 = YPfalse;
  outF3424 = BOXFAB(outF3424);
  T2 = FUNFAB(fun_52,6,outF3424,out_nameF3423,sepF3422,loader_,init_nameF3420,exe_nameF3421);
  T3 = FUNFAB(fun_53,1,outF3424);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_pp_55) {
  P e_,out_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite),out_,e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_header_56) {
  P out_,modname_;
  P x_1581F3434;
  P x_1580F3433;
  P x_1579F3432;
  P x_1578F3431;
  P x_1577F3430;
  P x_1576F3429;
  P x_1575F3428;
  P x_1574F3427;
  P x_1573F3426;
  P modvarF3425;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(out_, 0);
  ARG(modname_, 1);
  modvarF3425 = VARREF(YevalSg2cYDnow_mod_var_name);
  x_1573F3426 = out_;
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_1573F3426,LITREF(lit_124));
  x_1574F3427 = out_;
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1574F3427,LITREF(lit_125));
  if (DYNREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    x_1575F3428 = out_;
    T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1575F3428,LITREF(lit_126));
  } else {
  }
  x_1576F3429 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1576F3429,LITREF(lit_127));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1576F3429,modvarF3425);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1576F3429,LITREF(lit_128));
  x_1577F3430 = out_;
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1577F3430,LITREF(lit_129));
  x_1578F3431 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1578F3431,LITREF(lit_130));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1578F3431,modvarF3425);
  CALL2(1,VARREF(YgooSioSportYputs),x_1578F3431,LITREF(lit_131));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1578F3431,modvarF3425);
  T5 = CALL2(1,VARREF(YgooSioSportYputs),x_1578F3431,LITREF(lit_132));
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,modname_);
  x_1579F3432 = out_;
  T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1579F3432,LITREF(lit_133));
  x_1580F3433 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1580F3433,LITREF(lit_134));
  T7 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_135));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1580F3433,T7);
  CALL2(1,VARREF(YgooSioSportYputs),x_1580F3433,LITREF(lit_136));
  T8 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_137));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1580F3433,T8);
  CALL2(1,VARREF(YgooSioSportYputs),x_1580F3433,LITREF(lit_138));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1580F3433,modvarF3425);
  T9 = CALL2(1,VARREF(YgooSioSportYputs),x_1580F3433,LITREF(lit_139));
  x_1581F3434 = out_;
  T10 = CALL2(1,VARREF(YgooSioSportYputs),x_1581F3434,LITREF(lit_140));
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_generate_trailer_57) {
  P out_;
  P x_1582F3435;
  P T0;
LINK_STACK();
  ARG(out_, 0);
  x_1582F3435 = out_;
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_1582F3435,LITREF(lit_143));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_58) {
  P binding_;
  P T0,T1,T2;
LINK_STACK();
  ARG(binding_, 0);
  T2 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(1));
  T1 = CALL1(1,VARREF(Ynot),T2);
  T0 = CALL3(1,VARREF(YevalSg2cYgenerate_global_binding),FREEREF(0),T1,binding_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_global_environment_59) {
  P out_,mod_;
  P x_1583F3436;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  x_1583F3436 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1583F3436,LITREF(lit_146));
  T0 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1583F3436,T0);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1583F3436,LITREF(lit_147));
  T3 = FUNFAB(fun_58,2,out_,mod_);
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T2 = CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T3,T4);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_generate_global_binding_60) {
  P out_,importedQ_,gb_;
  P x_1586F3443;
  P x_1585F3442;
  P x_1584F3441;
  P nameF3440;
  P tmpF3439;
  P tmpF3438;
  P kindF3437;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(out_, 0);
  ARG(importedQ_, 1);
  ARG(gb_, 2);
  T17 = CALL1(1,VARREF(YevalSastYbinding_kind),gb_);
  kindF3437 = T17;
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),kindF3437,LITREF(lit_151));
  tmpF3438 = T5;
  if (tmpF3438 != YPfalse) {
    T1 = tmpF3438;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),kindF3437,LITREF(lit_152));
    tmpF3439 = T4;
    if (tmpF3439 != YPfalse) {
      T2 = tmpF3439;
    } else {
      T3 = CALL2(1,VARREF(YgooSmacrosYEE),kindF3437,LITREF(lit_153));
      T2 = T3;
    }
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T16 = CALL1(1,VARREF(YevalSastYbinding_name),gb_);
    nameF3440 = T16;
    x_1584F3441 = kindF3437;
    x_1585F3442 = VARREF(YgooSmacrosYEE);
    T7 = CALL2(1,x_1585F3442,x_1584F3441,LITREF(lit_152));
    if (T7 != YPfalse) {
      T6 = LITREF(lit_154);
    } else {
      T9 = CALL2(1,x_1585F3442,x_1584F3441,LITREF(lit_153));
      if (T9 != YPfalse) {
        T8 = LITREF(lit_155);
      } else {
        T8 = LITREF(lit_156);
      }
      T6 = T8;
    }
    CALL2(1,VARREF(YgooSioSportYputs),out_,T6);
    x_1586F3443 = out_;
    if (importedQ_ != YPfalse) {
      T10 = LITREF(lit_157);
    } else {
      T10 = LITREF(lit_158);
    }
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1586F3443,T10);
    CALL2(1,VARREF(YgooSioSportYputs),x_1586F3443,LITREF(lit_159));
    T11 = CALL1(1,VARREF(YevalSg2cYmangle_binding),gb_);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1586F3443,T11);
    CALL2(1,VARREF(YgooSioSportYputs),x_1586F3443,LITREF(lit_160));
    T13 = CALL1(1,VARREF(YevalSastYbinding_module_name),gb_);
    T12 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T13);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1586F3443,T12);
    CALL2(1,VARREF(YgooSioSportYputs),x_1586F3443,LITREF(lit_161));
    T14 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),nameF3440);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1586F3443,T14);
    T15 = CALL2(1,VARREF(YgooSioSportYputs),x_1586F3443,LITREF(lit_162));
    T0 = T15;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYchar_buffer_as_string) {
  P buffer_;
  P iF3446;
  P stringF3445;
  P buffer_sizeF3444;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(buffer_, 0);
  T6 = CALL1(1,VARREF(YgooStypesYlen),buffer_);
  check_type(T6,VARREF(YLintG));
  buffer_sizeF3444 = T6;
  T5 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YLstrG),buffer_sizeF3444);
  check_type(T5,VARREF(YLstrG));
  stringF3445 = T5;
  iF3446 = YPint((P)0);
  for (;;) {
    P a199_0;
  loop199:
    T1 = CALL2(1,VARREF(YgooSmagYL),iF3446,buffer_sizeF3444);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooScolsScolYlow_elt),buffer_,iF3446);
      CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),T2,stringF3445,iF3446);
      T4 = CALL2(1,VARREF(YgooSmathYA),iF3446,YPint((P)1));
      a199_0 = T4;
      iF3446 = a199_0;
      goto loop199;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
    break;
  }
UNLINK_STACK();
  RET(stringF3445);
}

FUNCODEDEF(fun_mangle_string_literal_62) {
  P str_;
  P encF3450;
  P cF3449;
  P iF3448;
  P lenF3447;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(str_, 0);
  CALL2(1,VARREF(YgooScolsScolxYlen_setter),YPint((P)0),VARREF(YevalSg2cYTmangle_bufferT));
  T11 = CALL1(1,VARREF(YgooStypesYlen),str_);
  lenF3447 = T11;
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),YPchr((P)34));
  iF3448 = YPint((P)0);
  for (;;) {
    P a200_0;
  loop200:
    T1 = CALL2(1,VARREF(YgooSmathYE),iF3448,lenF3447);
    if (T1 != YPfalse) {
      CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),YPchr((P)34));
      T2 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
      T0 = T2;
    } else {
      T10 = CALL2(1,VARREF(YgooSmacrosYelt),str_,iF3448);
      cF3449 = T10;
      T9 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),cF3449);
      T8 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDc_escapes),T9);
      encF3450 = T8;
      T3 = CALL2(1,VARREF(YgooSmathYE),encF3450,YPfalse);
      if (T3 != YPfalse) {
        T4 = CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),cF3449);
      } else {
        T5 = CALL2(1,VARREF(YgooScolsSseqxYcatX),VARREF(YevalSg2cYTmangle_bufferT),encF3450);
      }
      T7 = CALL2(1,VARREF(YgooSmathYA),iF3448,YPint((P)1));
      a200_0 = T7;
      iF3448 = a200_0;
      goto loop200;
      T0 = T6;
    }
    break;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_string_literal_63) {
  P sym_;
  P T0,T1;
LINK_STACK();
  ARG(sym_, 0);
  T1 = CALL1(1,VARREF(Ysym_name),sym_);
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_process_integer_64) {
  P number_,index_;
  P resultF3456;
  P resultF3455;
  P digitF3454;
  P remainderF3453;
  P quotientF3452;
  P tup34F3451;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(number_, 0);
  ARG(index_, 1);
  T10 = CALL2(1,VARREF(YgooSmathYtruncS),number_,YPint((P)10));
  tup34F3451 = T10;
  T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup34F3451,YPint((P)0));
  check_type(T9,VARREF(YLintG));
  quotientF3452 = T9;
  T8 = CALL2(1,VARREF(YgooSmacrosYelt),tup34F3451,YPint((P)1));
  check_type(T8,VARREF(YLintG));
  remainderF3453 = T8;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDnumber_characters),remainderF3453);
  check_type(T7,VARREF(YLchrG));
  digitF3454 = T7;
  T1 = CALL2(1,VARREF(YgooSmathYE),quotientF3452,YPint((P)0));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),index_);
    check_type(T2,VARREF(YgooScolsSvecYLvecG));
    resultF3455 = T2;
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),digitF3454,resultF3455,YPint((P)0));
    T0 = resultF3455;
  } else {
    T6 = CALL2(1,VARREF(YgooSmathYA),index_,YPint((P)1));
    T5 = CALL2(1,FREEREF(0),quotientF3452,T6);
    check_type(T5,VARREF(YgooScolsSvecYLvecG));
    resultF3456 = T5;
    T4 = CALL1(1,VARREF(YgooStypesYlen),resultF3456);
    T3 = CALL2(1,VARREF(YgooSmathY_),T4,index_);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),digitF3454,resultF3456,T3);
    T0 = resultF3456;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_integer_65) {
  P number_;
  P process_integerF3457;
  P T0,T1,T2;
LINK_STACK();
  ARG(number_, 0);
  T2 = FUNSHELL(1,fun_process_integer_64,1);
  process_integerF3457 = T2;
  FUNINIT(process_integerF3457, 1,process_integerF3457);
  T1 = CALL2(1,process_integerF3457,number_,YPint((P)1));
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSg2cYmangler_reset) {
  P buffer_;
  P T0;
LINK_STACK();
  ARG(buffer_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolxYlen_setter),YPint((P)0),buffer_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYmangle_name_into) {
  P buf_,name_;
  P cF3459;
  P x_1595F3458;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(buf_, 0);
  ARG(name_, 1);
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),name_);
  x_1595F3458 = T9;
  for (;;) {
    P a201_0;
  loop201:
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1595F3458);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_1595F3458);
      cF3459 = T8;
      T5 = CALL1(1,VARREF(YgooSmathYto_lower),cF3459);
      T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T5);
      T3 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDname_mangler_table),T4);
      CALL2(1,VARREF(YgooScolsScolxYaddX),buf_,T3);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1595F3458);
      a201_0 = T7;
      x_1595F3458 = a201_0;
      goto loop201;
      T0 = T6;
    } else {
      T0 = YPfalse;
    }
    break;
  }
UNLINK_STACK();
  QRET(buf_);
}

FUNCODEDEF(fun_mangle_raw_name_68) {
  P name_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  T0 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_raw_name_69) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_local_name_70) {
  P name_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDlocal_marker));
  T0 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_local_name_71) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_local_name),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSg2cYbuf_cat2X) {
  P buf_,name_;
  P iF3461;
  P lenF3460;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(buf_, 0);
  ARG(name_, 1);
  T5 = CALL1(1,VARREF(YgooStypesYlen),name_);
  lenF3460 = T5;
  iF3461 = YPint((P)0);
  for (;;) {
    P a202_0;
  loop202:
    T1 = CALL2(1,VARREF(YgooSmagYL),iF3461,lenF3460);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooScolsScolYlow_elt),name_,iF3461);
      CALL2(1,VARREF(YgooScolsScolxYaddX),buf_,T2);
      T4 = CALL2(1,VARREF(YgooSmathYA),iF3461,YPint((P)1));
      a202_0 = T4;
      iF3461 = a202_0;
      goto loop202;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
    break;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_module_into_73) {
  P buf_,mod_;
  P nameF3465;
  P tmpF3464;
  P UF3463;
  P x_1597F3462;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(buf_, 0);
  ARG(mod_, 1);
  x_1597F3462 = mod_;
  T9 = CALL1(1,VARREF(YevalSastYmodule_mangled_name),x_1597F3462);
  UF3463 = T9;
  T8 = CALL1(1,VARREF(YevalSastYmodule_mangled_name),x_1597F3462);
  tmpF3464 = T8;
  if (tmpF3464 != YPfalse) {
    T1 = tmpF3464;
  } else {
    T5 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
    T7 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T7);
    T4 = CALL2(1,VARREF(YevalSg2cYmangle_name_into),T5,T6);
    T3 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),T4);
    T2 = CALL2(1,VARREF(YevalSastYmodule_mangled_name_setter),T3,x_1597F3462);
    T1 = T2;
  }
  nameF3465 = T1;
  T0 = CALL2(1,VARREF(YevalSg2cYbuf_cat2X),buf_,nameF3465);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_global_name_74) {
  P mod_,name_;
  P tmpF3466;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),mod_,VARREF(YevalSastYDgoo_boot_module_name));
  tmpF3466 = T4;
  if (tmpF3466 != YPfalse) {
    T1 = tmpF3466;
  } else {
    T3 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T2 = CALL2(1,VARREF(YgooSmacrosYEE),T3,VARREF(YevalSastYDgoo_boot_module_name));
    T1 = T2;
  }
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDmodule_marker));
    T5 = CALL2(1,VARREF(YevalSg2cYmangle_module_into),VARREF(YevalSg2cYTmangle_bufferT),mod_);
  } else {
  }
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDmodule_marker));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  T6 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  RET(T6);
}

FUNCODEDEF(fun_mangle_global_name_75) {
  P mod_,name_;
  P T0,T1;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T0 = CALL2(1,VARREF(YevalSg2cYmangle_global_name),mod_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSg2cYmangle_boot_name) {
  P name_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  T0 = CALL2(1,VARREF(YevalSg2cYmangle_global_name),VARREF(YevalSastYDgoo_boot_module_name),name_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYmangle_quotation_name) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YevalSg2cYbuf_cat2X),VARREF(YevalSg2cYTmangle_bufferT),LITREF(lit_224));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_integer),name_);
  CALL2(1,VARREF(YevalSg2cYbuf_cat2X),VARREF(YevalSg2cYTmangle_bufferT),T0);
  T1 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_mangle_binding_78) {
  P binding_;
  P tmpF3469;
  P UF3468;
  P x_1598F3467;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(binding_, 0);
  x_1598F3467 = binding_;
  T11 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),x_1598F3467);
  UF3468 = T11;
  T10 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),x_1598F3467);
  tmpF3469 = T10;
  if (tmpF3469 != YPfalse) {
    T0 = tmpF3469;
  } else {
    T4 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_227));
    if (T3 != YPfalse) {
      T6 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
      T5 = CALL1(1,VARREF(YevalSg2cYmangle_quotation_name),T6);
      T2 = T5;
    } else {
      T8 = CALL1(1,VARREF(YevalSastYbinding_module),binding_);
      T9 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
      T7 = CALL2(1,VARREF(YevalSg2cYmangle_global_name),T8,T9);
      T2 = T7;
    }
    T1 = CALL2(1,VARREF(YevalSastYbinding_mangled_name_setter),T2,x_1598F3467);
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYmangle_local_marked_name) {
  P name_,marker_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  ARG(marker_, 1);
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDhygiene_char));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_integer),marker_);
  CALL2(1,VARREF(YevalSg2cYbuf_cat2X),VARREF(YevalSg2cYTmangle_bufferT),T0);
  T1 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_mangle_binding_80) {
  P binding_;
  P tmpF3472;
  P UF3471;
  P x_1599F3470;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(binding_, 0);
  x_1599F3470 = binding_;
  T5 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),x_1599F3470);
  UF3471 = T5;
  T4 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),x_1599F3470);
  tmpF3472 = T4;
  if (tmpF3472 != YPfalse) {
    T0 = tmpF3472;
  } else {
    T3 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T2 = CALL1(1,VARREF(YevalSg2cYmangle_local_name),T3);
    T1 = CALL2(1,VARREF(YevalSastYbinding_mangled_name_setter),T2,x_1599F3470);
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_binding_81) {
  P binding_;
  P tmpF3475;
  P UF3474;
  P x_1600F3473;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(binding_, 0);
  x_1600F3473 = binding_;
  T7 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),x_1600F3473);
  UF3474 = T7;
  T6 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),x_1600F3473);
  tmpF3475 = T6;
  if (tmpF3475 != YPfalse) {
    T0 = tmpF3475;
  } else {
    T4 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T4);
    T5 = CALL1(1,VARREF(YevalSastYbinding_index),binding_);
    T2 = CALL2(1,VARREF(YevalSg2cYmangle_local_marked_name),T3,T5);
    T1 = CALL2(1,VARREF(YevalSastYbinding_mangled_name_setter),T2,x_1600F3473);
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1604_82) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_236),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_83) {
  P return_;
  P out_varF3491;
  P x_1603F3490;
  P x_1603F3489;
  P x_1603F3488;
  P x_1603F3487;
  P x_1603F3486;
  P x_1603F3485;
  P x_1603F3484;
  P x_1603F3483;
  P x_1603F3482;
  P x_1603F3481;
  P bodyF3480;
  P clausesF3479;
  P out_valF3478;
  P x_1603F3477;
  P x_1604F3476;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58;
LINK_STACK();
  ARG(return_, 0);
  T58 = FUNSHELL(0,fun_x_1604_82,2);
  x_1604F3476 = T58;
  FUNINIT(x_1604F3476, 2,FREEREF(0),return_);
  x_1603F3477 = FREEREF(0);
  out_valF3478 = YPfalse;
  out_valF3478 = BOXFAB(out_valF3478);
  clausesF3479 = YPfalse;
  clausesF3479 = BOXFAB(clausesF3479);
  bodyF3480 = YPfalse;
  bodyF3480 = BOXFAB(bodyF3480);
  T3 = CALL2(1,VARREF(YisaQ),x_1603F3477,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T16 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1603F3477,LITREF(lit_236),x_1604F3476);
    x_1603F3481 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1603F3481,x_1604F3476);
    BOXVAL(out_valF3478) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1603F3481);
    x_1603F3482 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1603F3482,x_1604F3476);
    x_1603F3483 = T12;
    BOXVAL(clausesF3479) = x_1603F3483;
    x_1603F3484 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1603F3484,x_1604F3476);
    x_1603F3485 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1603F3485,x_1604F3476);
    T11 = CALL1(1,VARREF(Ytail),x_1603F3484);
    x_1603F3486 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1603F3486,x_1604F3476);
    T13 = CALL1(1,VARREF(Ytail),x_1603F3482);
    x_1603F3487 = T13;
    BOXVAL(bodyF3480) = x_1603F3487;
    x_1603F3488 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1603F3488,x_1604F3476);
    x_1603F3489 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1603F3489,x_1604F3476);
    T7 = CALL1(1,VARREF(Ytail),x_1603F3488);
    x_1603F3490 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1603F3490,x_1604F3476);
  } else {
    T17 = CALL2(1,x_1604F3476,LITREF(lit_82),x_1603F3477);
  }
  T57 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF3491 = T57;
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_237));
  T24 = CALL1(1,VARREF(Ylst),out_varF3491);
  T26 = BOXVAL(out_valF3478);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T23 = CALL3(1,VARREF(YgooSmacrosYcat),T24,T25,LITREF(lit_85));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T21 = CALL2(1,VARREF(YgooSmacrosYcat),T22,LITREF(lit_85));
  T20 = CALL1(1,VARREF(Ylst),T21);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_238));
  T32 = BOXVAL(clausesF3479);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_239));
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_240));
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_241));
  T42 = CALL1(1,VARREF(Ylst),YPtrue);
  T40 = CALL3(1,VARREF(YgooSmacrosYcat),T41,T42,LITREF(lit_85));
  T39 = CALL1(1,VARREF(Ylst),T40);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_241));
  T46 = CALL1(1,VARREF(Ylst),YPfalse);
  T44 = CALL3(1,VARREF(YgooSmacrosYcat),T45,T46,LITREF(lit_85));
  T43 = CALL1(1,VARREF(Ylst),T44);
  T37 = CALL4(1,VARREF(YgooSmacrosYcat),T38,T39,T43,LITREF(lit_85));
  T36 = CALL1(1,VARREF(Ylst),T37);
  T34 = CALL3(1,VARREF(YgooSmacrosYcat),T35,T36,LITREF(lit_85));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T31 = CALL3(1,VARREF(YgooSmacrosYcat),T32,T33,LITREF(lit_85));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_242));
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_239));
  T53 = CALL1(1,VARREF(Ylst),LITREF(lit_243));
  T54 = CALL1(1,VARREF(Ylst),out_varF3491);
  T55 = CALL1(1,VARREF(Ylst),YPchr((P)44));
  T52 = CALL4(1,VARREF(YgooSmacrosYcat),T53,T54,T55,LITREF(lit_85));
  T51 = CALL1(1,VARREF(Ylst),T52);
  T48 = CALL4(1,VARREF(YgooSmacrosYcat),T49,T50,T51,LITREF(lit_85));
  T47 = CALL1(1,VARREF(Ylst),T48);
  T56 = BOXVAL(bodyF3480);
  T28 = CALL5(1,VARREF(YgooSmacrosYcat),T29,T30,T47,T56,LITREF(lit_85));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T18 = CALL4(1,VARREF(YgooSmacrosYcat),T19,T20,T27,LITREF(lit_85));
UNLINK_STACK();
  QRET(T18);
}

FUNCODEDEF(fun_84) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_83,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1608_85) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_248),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_86) {
  P return_;
  P out_varF3505;
  P x_1607F3504;
  P x_1607F3503;
  P x_1607F3502;
  P x_1607F3501;
  P x_1607F3500;
  P x_1607F3499;
  P x_1607F3498;
  P x_1607F3497;
  P x_1607F3496;
  P bodyF3495;
  P out_valF3494;
  P x_1607F3493;
  P x_1608F3492;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
LINK_STACK();
  ARG(return_, 0);
  T38 = FUNSHELL(0,fun_x_1608_85,2);
  x_1608F3492 = T38;
  FUNINIT(x_1608F3492, 2,FREEREF(0),return_);
  x_1607F3493 = FREEREF(0);
  out_valF3494 = YPfalse;
  out_valF3494 = BOXFAB(out_valF3494);
  bodyF3495 = YPfalse;
  bodyF3495 = BOXFAB(bodyF3495);
  T2 = CALL2(1,VARREF(YisaQ),x_1607F3493,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T15 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1607F3493,LITREF(lit_248),x_1608F3492);
    x_1607F3496 = T15;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1607F3496,x_1608F3492);
    x_1607F3497 = T13;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1607F3497,x_1608F3492);
    BOXVAL(out_valF3494) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1607F3497);
    x_1607F3498 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1607F3498,x_1608F3492);
    x_1607F3499 = T9;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1607F3499,x_1608F3492);
    T10 = CALL1(1,VARREF(Ytail),x_1607F3498);
    x_1607F3500 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1607F3500,x_1608F3492);
    T14 = CALL1(1,VARREF(Ytail),x_1607F3496);
    x_1607F3501 = T14;
    BOXVAL(bodyF3495) = x_1607F3501;
    x_1607F3502 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1607F3502,x_1608F3492);
    x_1607F3503 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1607F3503,x_1608F3492);
    T6 = CALL1(1,VARREF(Ytail),x_1607F3502);
    x_1607F3504 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1607F3504,x_1608F3492);
  } else {
    T16 = CALL2(1,x_1608F3492,LITREF(lit_82),x_1607F3493);
  }
  T37 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF3505 = T37;
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_237));
  T23 = CALL1(1,VARREF(Ylst),out_varF3505);
  T25 = BOXVAL(out_valF3494);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T22 = CALL3(1,VARREF(YgooSmacrosYcat),T23,T24,LITREF(lit_85));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T20 = CALL2(1,VARREF(YgooSmacrosYcat),T21,LITREF(lit_85));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_243));
  T29 = CALL1(1,VARREF(Ylst),out_varF3505);
  T30 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T27 = CALL4(1,VARREF(YgooSmacrosYcat),T28,T29,T30,LITREF(lit_85));
  T26 = CALL1(1,VARREF(Ylst),T27);
  T31 = BOXVAL(bodyF3495);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_243));
  T35 = CALL1(1,VARREF(Ylst),out_varF3505);
  T36 = CALL1(1,VARREF(Ylst),YPchr((P)41));
  T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T35,T36,LITREF(lit_85));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T17 = CALLN(1,VARREF(YgooSmacrosYcat),6,T18,T19,T26,T31,T32,LITREF(lit_85));
UNLINK_STACK();
  QRET(T17);
}

FUNCODEDEF(fun_87) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_86,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1612_88) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_253),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_89) {
  P return_;
  P tmpF3523;
  P firstQF3522;
  P bodyF3521;
  P formsF3520;
  P out_varF3519;
  P x_1611F3518;
  P x_1611F3517;
  P x_1611F3516;
  P x_1611F3515;
  P x_1611F3514;
  P x_1611F3513;
  P x_1611F3512;
  P x_1611F3511;
  P x_1611F3510;
  P bodyF3509;
  P out_valF3508;
  P x_1611F3507;
  P x_1612F3506;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51;
LINK_STACK();
  ARG(return_, 0);
  T51 = FUNSHELL(0,fun_x_1612_88,2);
  x_1612F3506 = T51;
  FUNINIT(x_1612F3506, 2,FREEREF(0),return_);
  x_1611F3507 = FREEREF(0);
  out_valF3508 = YPfalse;
  out_valF3508 = BOXFAB(out_valF3508);
  bodyF3509 = YPfalse;
  bodyF3509 = BOXFAB(bodyF3509);
  T2 = CALL2(1,VARREF(YisaQ),x_1611F3507,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T15 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1611F3507,LITREF(lit_253),x_1612F3506);
    x_1611F3510 = T15;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1611F3510,x_1612F3506);
    x_1611F3511 = T13;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1611F3511,x_1612F3506);
    BOXVAL(out_valF3508) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1611F3511);
    x_1611F3512 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1611F3512,x_1612F3506);
    x_1611F3513 = T9;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1611F3513,x_1612F3506);
    T10 = CALL1(1,VARREF(Ytail),x_1611F3512);
    x_1611F3514 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1611F3514,x_1612F3506);
    T14 = CALL1(1,VARREF(Ytail),x_1611F3510);
    x_1611F3515 = T14;
    BOXVAL(bodyF3509) = x_1611F3515;
    x_1611F3516 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1611F3516,x_1612F3506);
    x_1611F3517 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1611F3517,x_1612F3506);
    T6 = CALL1(1,VARREF(Ytail),x_1611F3516);
    x_1611F3518 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1611F3518,x_1612F3506);
  } else {
    T16 = CALL2(1,x_1612F3506,LITREF(lit_82),x_1611F3507);
  }
  T50 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF3519 = T50;
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_237));
  T23 = CALL1(1,VARREF(Ylst),out_varF3519);
  T25 = BOXVAL(out_valF3508);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T22 = CALL3(1,VARREF(YgooSmacrosYcat),T23,T24,LITREF(lit_85));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T20 = CALL2(1,VARREF(YgooSmacrosYcat),T21,LITREF(lit_85));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_243));
  T29 = CALL1(1,VARREF(Ylst),out_varF3519);
  T30 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T27 = CALL4(1,VARREF(YgooSmacrosYcat),T28,T29,T30,LITREF(lit_85));
  T26 = CALL1(1,VARREF(Ylst),T27);
  formsF3520 = Ynil;
  T44 = BOXVAL(bodyF3509);
  bodyF3521 = T44;
  firstQF3522 = YPtrue;
  for (;;) {
    P a203_0,a203_1,a203_2;
  loop203:
    T32 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bodyF3521);
    if (T32 != YPfalse) {
      T33 = CALL1(1,VARREF(YgooSmacrosYrevX),formsF3520);
      T31 = T33;
    } else {
      T36 = CALL1(1,VARREF(Yhead),bodyF3521);
      tmpF3523 = firstQF3522;
      if (tmpF3523 != YPfalse) {
        T38 = tmpF3523;
      } else {
        T40 = CALL1(1,VARREF(Ylst),LITREF(lit_243));
        T41 = CALL1(1,VARREF(Ylst),out_varF3519);
        T42 = CALL1(1,VARREF(Ylst),YPchr((P)44));
        T39 = CALL4(1,VARREF(YgooSmacrosYcat),T40,T41,T42,LITREF(lit_85));
        T38 = T39;
      }
      T37 = CALL2(1,VARREF(YgooSmacrosYpair),T38,formsF3520);
      T35 = CALL2(1,VARREF(YgooSmacrosYpair),T36,T37);
      T43 = CALL1(1,VARREF(Ytail),bodyF3521);
      a203_0 = T35;
      a203_1 = T43;
      a203_2 = YPfalse;
      formsF3520 = a203_0;
      bodyF3521 = a203_1;
      firstQF3522 = a203_2;
      goto loop203;
      T31 = T34;
    }
    break;
  }
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_243));
  T48 = CALL1(1,VARREF(Ylst),out_varF3519);
  T49 = CALL1(1,VARREF(Ylst),YPchr((P)41));
  T46 = CALL4(1,VARREF(YgooSmacrosYcat),T47,T48,T49,LITREF(lit_85));
  T45 = CALL1(1,VARREF(Ylst),T46);
  T17 = CALLN(1,VARREF(YgooSmacrosYcat),6,T18,T19,T26,T31,T45,LITREF(lit_85));
UNLINK_STACK();
  QRET(T17);
}

FUNCODEDEF(fun_90) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_89,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_result_91) {
  P e_,d_,out_;
  P x_1613F3525;
  P regF3524;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(e_, 0);
  ARG(d_, 1);
  ARG(out_, 2);
  T4 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  regF3524 = T4;
  if (regF3524 != YPfalse) {
    x_1613F3525 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1613F3525,LITREF(lit_256));
    T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),regF3524);
    CALL2(1,VARREF(YgooSioSportYputs),x_1613F3525,T2);
    T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1613F3525,LITREF(lit_257));
    if (T3 != YPfalse) {
      T1 = YPtrue;
    } else {
      T1 = YPfalse;
    }
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_gen_depth_92) {
  P d_,out_;
  P iF3527;
  P x_1614F3526;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(d_, 0);
  ARG(out_, 1);
  T7 = CALL1(1,VARREF(YgooScolsSseqYbelow),d_);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  x_1614F3526 = T6;
  for (;;) {
    P a204_0;
  loop204:
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1614F3526);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),x_1614F3526);
      iF3527 = T5;
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_260));
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1614F3526);
      a204_0 = T4;
      x_1614F3526 = a204_0;
      goto loop204;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
    break;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1619_93) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_265),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_94) {
  P return_;
  P x_1618F3542;
  P x_1618F3541;
  P x_1618F3540;
  P x_1618F3539;
  P x_1618F3538;
  P x_1618F3537;
  P x_1618F3536;
  P x_1618F3535;
  P x_1618F3534;
  P x_1618F3533;
  P bodyF3532;
  P outF3531;
  P dF3530;
  P x_1618F3529;
  P x_1619F3528;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36;
LINK_STACK();
  ARG(return_, 0);
  T36 = FUNSHELL(0,fun_x_1619_93,2);
  x_1619F3528 = T36;
  FUNINIT(x_1619F3528, 2,FREEREF(0),return_);
  x_1618F3529 = FREEREF(0);
  dF3530 = YPfalse;
  dF3530 = BOXFAB(dF3530);
  outF3531 = YPfalse;
  outF3531 = BOXFAB(outF3531);
  bodyF3532 = YPfalse;
  bodyF3532 = BOXFAB(bodyF3532);
  T3 = CALL2(1,VARREF(YisaQ),x_1618F3529,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T18 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1618F3529,LITREF(lit_265),x_1619F3528);
    x_1618F3533 = T18;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1618F3533,x_1619F3528);
    x_1618F3534 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1618F3534,x_1619F3528);
    BOXVAL(dF3530) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1618F3534);
    x_1618F3535 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1618F3535,x_1619F3528);
    BOXVAL(outF3531) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1618F3535);
    x_1618F3536 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1618F3536,x_1619F3528);
    x_1618F3537 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1618F3537,x_1619F3528);
    T11 = CALL1(1,VARREF(Ytail),x_1618F3536);
    x_1618F3538 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1618F3538,x_1619F3528);
    T17 = CALL1(1,VARREF(Ytail),x_1618F3533);
    x_1618F3539 = T17;
    BOXVAL(bodyF3532) = x_1618F3539;
    x_1618F3540 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1618F3540,x_1619F3528);
    x_1618F3541 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1618F3541,x_1619F3528);
    T7 = CALL1(1,VARREF(Ytail),x_1618F3540);
    x_1618F3542 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1618F3542,x_1619F3528);
  } else {
    T19 = CALL2(1,x_1619F3528,LITREF(lit_82),x_1618F3529);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_266));
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_258));
  T26 = BOXVAL(dF3530);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T28 = BOXVAL(outF3531);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T27,LITREF(lit_85));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T29 = BOXVAL(bodyF3532);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_267));
  T34 = BOXVAL(outF3531);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_268));
  T31 = CALL4(1,VARREF(YgooSmacrosYcat),T32,T33,T35,LITREF(lit_85));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T20 = CALL5(1,VARREF(YgooSmacrosYcat),T21,T22,T29,T30,LITREF(lit_85));
UNLINK_STACK();
  QRET(T20);
}

FUNCODEDEF(fun_95) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_94,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1623_96) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_273),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_97) {
  P return_;
  P x_1622F3559;
  P x_1622F3558;
  P x_1622F3557;
  P x_1622F3556;
  P x_1622F3555;
  P x_1622F3554;
  P x_1622F3553;
  P x_1622F3552;
  P x_1622F3551;
  P x_1622F3550;
  P x_1622F3549;
  P bodyF3548;
  P outF3547;
  P dF3546;
  P eF3545;
  P x_1622F3544;
  P x_1623F3543;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
LINK_STACK();
  ARG(return_, 0);
  T41 = FUNSHELL(0,fun_x_1623_96,2);
  x_1623F3543 = T41;
  FUNINIT(x_1623F3543, 2,FREEREF(0),return_);
  x_1622F3544 = FREEREF(0);
  eF3545 = YPfalse;
  eF3545 = BOXFAB(eF3545);
  dF3546 = YPfalse;
  dF3546 = BOXFAB(dF3546);
  outF3547 = YPfalse;
  outF3547 = BOXFAB(outF3547);
  bodyF3548 = YPfalse;
  bodyF3548 = BOXFAB(bodyF3548);
  T4 = CALL2(1,VARREF(YisaQ),x_1622F3544,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T21 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1622F3544,LITREF(lit_273),x_1623F3543);
    x_1622F3549 = T21;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1622F3549,x_1623F3543);
    x_1622F3550 = T19;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1622F3550,x_1623F3543);
    BOXVAL(eF3545) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1622F3550);
    x_1622F3551 = T18;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1622F3551,x_1623F3543);
    BOXVAL(dF3546) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1622F3551);
    x_1622F3552 = T16;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1622F3552,x_1623F3543);
    BOXVAL(outF3547) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1622F3552);
    x_1622F3553 = T14;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1622F3553,x_1623F3543);
    x_1622F3554 = T11;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1622F3554,x_1623F3543);
    T12 = CALL1(1,VARREF(Ytail),x_1622F3553);
    x_1622F3555 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1622F3555,x_1623F3543);
    T20 = CALL1(1,VARREF(Ytail),x_1622F3549);
    x_1622F3556 = T20;
    BOXVAL(bodyF3548) = x_1622F3556;
    x_1622F3557 = Ynil;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1622F3557,x_1623F3543);
    x_1622F3558 = T7;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1622F3558,x_1623F3543);
    T8 = CALL1(1,VARREF(Ytail),x_1622F3557);
    x_1622F3559 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1622F3559,x_1623F3543);
  } else {
    T22 = CALL2(1,x_1623F3543,LITREF(lit_82),x_1622F3544);
  }
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_265));
  T28 = BOXVAL(dF3546);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T30 = BOXVAL(outF3547);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T26 = CALL3(1,VARREF(YgooSmacrosYcat),T27,T29,LITREF(lit_85));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_254));
  T35 = BOXVAL(eF3545);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T37 = BOXVAL(dF3546);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T39 = BOXVAL(outF3547);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T32 = CALL5(1,VARREF(YgooSmacrosYcat),T33,T34,T36,T38,LITREF(lit_85));
  T31 = CALL1(1,VARREF(Ylst),T32);
  T40 = BOXVAL(bodyF3548);
  T23 = CALL5(1,VARREF(YgooSmacrosYcat),T24,T25,T31,T40,LITREF(lit_85));
UNLINK_STACK();
  QRET(T23);
}

FUNCODEDEF(fun_98) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_97,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1627_99) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_278),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_100) {
  P return_;
  P x_1626F3576;
  P x_1626F3575;
  P x_1626F3574;
  P x_1626F3573;
  P x_1626F3572;
  P x_1626F3571;
  P x_1626F3570;
  P x_1626F3569;
  P x_1626F3568;
  P x_1626F3567;
  P x_1626F3566;
  P bodyF3565;
  P outF3564;
  P dF3563;
  P eF3562;
  P x_1626F3561;
  P x_1627F3560;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
LINK_STACK();
  ARG(return_, 0);
  T42 = FUNSHELL(0,fun_x_1627_99,2);
  x_1627F3560 = T42;
  FUNINIT(x_1627F3560, 2,FREEREF(0),return_);
  x_1626F3561 = FREEREF(0);
  eF3562 = YPfalse;
  eF3562 = BOXFAB(eF3562);
  dF3563 = YPfalse;
  dF3563 = BOXFAB(dF3563);
  outF3564 = YPfalse;
  outF3564 = BOXFAB(outF3564);
  bodyF3565 = YPfalse;
  bodyF3565 = BOXFAB(bodyF3565);
  T4 = CALL2(1,VARREF(YisaQ),x_1626F3561,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T21 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1626F3561,LITREF(lit_278),x_1627F3560);
    x_1626F3566 = T21;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1626F3566,x_1627F3560);
    x_1626F3567 = T19;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1626F3567,x_1627F3560);
    BOXVAL(eF3562) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1626F3567);
    x_1626F3568 = T18;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1626F3568,x_1627F3560);
    BOXVAL(dF3563) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1626F3568);
    x_1626F3569 = T16;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1626F3569,x_1627F3560);
    BOXVAL(outF3564) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1626F3569);
    x_1626F3570 = T14;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1626F3570,x_1627F3560);
    x_1626F3571 = T11;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1626F3571,x_1627F3560);
    T12 = CALL1(1,VARREF(Ytail),x_1626F3570);
    x_1626F3572 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1626F3572,x_1627F3560);
    T20 = CALL1(1,VARREF(Ytail),x_1626F3566);
    x_1626F3573 = T20;
    BOXVAL(bodyF3565) = x_1626F3573;
    x_1626F3574 = Ynil;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1626F3574,x_1627F3560);
    x_1626F3575 = T7;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1626F3575,x_1627F3560);
    T8 = CALL1(1,VARREF(Ytail),x_1626F3574);
    x_1626F3576 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1626F3576,x_1627F3560);
  } else {
    T22 = CALL2(1,x_1627F3560,LITREF(lit_82),x_1626F3561);
  }
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_279));
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_280));
  T29 = BOXVAL(eF3562);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T26 = CALL3(1,VARREF(YgooSmacrosYcat),T27,T28,LITREF(lit_85));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_273));
  T36 = BOXVAL(eF3562);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T38 = BOXVAL(dF3563);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T40 = BOXVAL(outF3564);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T34 = CALL4(1,VARREF(YgooSmacrosYcat),T35,T37,T39,LITREF(lit_85));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T41 = BOXVAL(bodyF3565);
  T31 = CALL4(1,VARREF(YgooSmacrosYcat),T32,T33,T41,LITREF(lit_85));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T30,LITREF(lit_85));
UNLINK_STACK();
  QRET(T23);
}

FUNCODEDEF(fun_101) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_100,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_forwards_102) {
  P out_,qbT_;
  P x_1630F3579;
  P qbF3578;
  P x_1628F3577;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(out_, 0);
  ARG(qbT_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_283));
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),qbT_);
  x_1628F3577 = T8;
  for (;;) {
    P a205_0;
  loop205:
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1628F3577);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1628F3577);
      qbF3578 = T7;
      x_1630F3579 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1630F3579,LITREF(lit_284));
      T3 = CALL1(1,VARREF(YevalSastYbinding_name),qbF3578);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1630F3579,T3);
      T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1630F3579,LITREF(lit_285));
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1628F3577);
      a205_0 = T6;
      x_1628F3577 = a205_0;
      goto loop205;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
    break;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotations_103) {
  P out_,qbT_;
  P x_1633F3582;
  P qbF3581;
  P x_1631F3580;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(out_, 0);
  ARG(qbT_, 1);
  T10 = CALL1(1,VARREF(YgooScolsSseqYrev),qbT_);
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),T10);
  x_1631F3580 = T9;
  for (;;) {
    P a206_0;
  loop206:
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1631F3580);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_1631F3580);
      qbF3581 = T8;
      CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),out_);
      x_1633F3582 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1633F3582,LITREF(lit_288));
      T3 = CALL1(1,VARREF(YevalSastYbinding_name),qbF3581);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1633F3582,T3);
      T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1633F3582,LITREF(lit_289));
      T5 = CALL1(1,VARREF(YevalSastYbinding_info),qbF3581);
      CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,T5);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1631F3580);
      a206_0 = T7;
      x_1631F3580 = a206_0;
      goto loop206;
      T0 = T6;
    } else {
      T0 = YPfalse;
    }
    break;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_false_name_104) {
  P T0;
LINK_STACK();
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_291));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_105) {
  P out_,qb_;
  P T0,T1,T2;
LINK_STACK();
  ARG(out_, 0);
  ARG(qb_, 1);
  if (qb_ != YPfalse) {
    T2 = LITREF(lit_294);
  } else {
    T2 = LITREF(lit_295);
  }
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),T2);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_106) {
  P out_,qb_;
  P T0,T1;
LINK_STACK();
  ARG(out_, 0);
  ARG(qb_, 1);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_297));
  T0 = CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_107) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YevalSg2cYgenerate_quotation),FREEREF(0),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_108) {
  P out_,qb_;
  P T0,T1;
LINK_STACK();
  ARG(out_, 0);
  ARG(qb_, 1);
  T1 = FUNFAB(fun_107,1,out_);
  T0 = CALL3(1,VARREF(YevalSg2cYout_list_builder),T1,out_,qb_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_109) {
  P out_,x_;
  P x_1634F3583;
  P T0,T1,T2;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_1634F3583 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_301));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1634F3583,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1634F3583,LITREF(lit_302));
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),x_);
  CALL2(1,VARREF(YgooSioSportYputs),x_1634F3583,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1634F3583,LITREF(lit_303));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_generate_quotation_110) {
  P out_,x_;
  P x_1635F3584;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_1635F3584 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_305));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1635F3584,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1635F3584,LITREF(lit_306));
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),x_);
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),T2);
  CALL2(1,VARREF(YgooSioSportYputs),x_1635F3584,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1635F3584,LITREF(lit_307));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_111) {
  P done_;
  P x_1637F3587;
  P x_1636F3586;
  P iF3585;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(done_, 0);
  T16 = CALL1(1,VARREF(YgooStypesYlen),FREEREF(0));
  T15 = CALL2(1,VARREF(YgooSmathY_),T16,YPint((P)1));
  iF3585 = T15;
  for (;;) {
    P a207_0;
  loop207:
    T2 = CALL1(1,VARREF(YgooSmathYneg),YPint((P)1));
    T1 = CALL2(1,VARREF(YgooSmagYG),iF3585,T2);
    if (T1 != YPfalse) {
      T14 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(0),iF3585);
      x_1636F3586 = T14;
      x_1637F3587 = VARREF(YgooSmacrosYEE);
      T4 = CALL2(1,x_1637F3587,x_1636F3586,YPchr((P)115));
      if (T4 != YPfalse) {
        CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),iF3585);
        T5 = CALL1(0,done_,YPfalse);
        T3 = T5;
      } else {
        T7 = CALL2(1,x_1637F3587,x_1636F3586,YPchr((P)100));
        if (T7 != YPfalse) {
          CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),iF3585);
          T8 = CALL1(0,done_,YPfalse);
          T6 = T8;
        } else {
          T10 = CALL2(1,x_1637F3587,x_1636F3586,YPchr((P)120));
          if (T10 != YPfalse) {
            CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),iF3585);
            T11 = CALL1(0,done_,YPfalse);
            T9 = T11;
          } else {
            T13 = CALL2(1,VARREF(YgooSmathY_),iF3585,YPint((P)1));
            a207_0 = T13;
            iF3585 = a207_0;
            goto loop207;
            T9 = T12;
          }
          T6 = T9;
        }
        T3 = T6;
      }
      T0 = T3;
    } else {
      T0 = FREEREF(0);
    }
    break;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_float_to_c_string_112) {
  P o_;
  P sF3588;
  P T0,T1,T2;
LINK_STACK();
  ARG(o_, 0);
  T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),o_);
  sF3588 = T2;
  T1 = FUNFAB(fun_111,1,sF3588);
  T0 = with_exit(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_generate_quotation_113) {
  P out_,x_;
  P x_1638F3589;
  P T0,T1,T2;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_1638F3589 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_312));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1638F3589,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1638F3589,LITREF(lit_313));
  T1 = CALL1(1,VARREF(YevalSg2cYfloat_to_c_string),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1638F3589,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1638F3589,LITREF(lit_314));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_generate_quotation_114) {
  P out_,x_;
  P x_1639F3590;
  P T0,T1,T2;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_1639F3590 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_316));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1639F3590,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1639F3590,LITREF(lit_317));
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1639F3590,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1639F3590,LITREF(lit_318));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_generate_quotation_115) {
  P out_,x_;
  P eF3593;
  P x_1641F3592;
  P x_1640F3591;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_1640F3591 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1640F3591,LITREF(lit_320));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_321));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1640F3591,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1640F3591,LITREF(lit_322));
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1640F3591,T2);
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  x_1641F3592 = T9;
  for (;;) {
    P a208_0;
  loop208:
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1641F3592);
    T4 = CALL1(1,VARREF(Ynot),T5);
    if (T4 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_1641F3592);
      eF3593 = T8;
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_323));
      CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,eF3593);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1641F3592);
      a208_0 = T7;
      x_1641F3592 = a208_0;
      goto loop208;
      T3 = T6;
    } else {
      T3 = YPfalse;
    }
    break;
  }
  T10 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_324));
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_generate_quotation_116) {
  P out_,x_;
  P eF3596;
  P x_1644F3595;
  P x_1643F3594;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_1643F3594 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1643F3594,LITREF(lit_326));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_327));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1643F3594,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1643F3594,LITREF(lit_328));
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1643F3594,T2);
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  x_1644F3595 = T9;
  for (;;) {
    P a209_0;
  loop209:
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1644F3595);
    T4 = CALL1(1,VARREF(Ynot),T5);
    if (T4 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_1644F3595);
      eF3596 = T8;
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_329));
      CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,eF3596);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1644F3595);
      a209_0 = T7;
      x_1644F3595 = a209_0;
      goto loop209;
      T3 = T6;
    } else {
      T3 = YPfalse;
    }
    break;
  }
  T10 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_330));
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_generate_quotation_117) {
  P out_,x_;
  P x_1646F3597;
  P T0,T1,T2;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_1646F3597 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_332));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1646F3597,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1646F3597,LITREF(lit_333));
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1646F3597,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1646F3597,LITREF(lit_334));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(YevalSg2cYbinding_Gc) {
  P binding_,out_;
  P T0,T1;
LINK_STACK();
  ARG(binding_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_Gc_119) {
  P v_,out_;
  P T0;
LINK_STACK();
  ARG(v_, 0);
  ARG(out_, 1);
  T0 = CALL2(1,VARREF(YevalSg2cYbinding_Gc),v_,out_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_Gc_120) {
  P v_,out_;
  P x_1649F3600;
  P x_1648F3599;
  P x_1647F3598;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(v_, 0);
  ARG(out_, 1);
  T6 = CALL1(1,VARREF(YevalSastYbinding_kind),v_);
  x_1647F3598 = T6;
  x_1648F3599 = VARREF(YgooSmacrosYEE);
  T1 = CALL2(1,x_1648F3599,x_1647F3598,LITREF(lit_227));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_341);
  } else {
    T3 = CALL2(1,x_1648F3599,x_1647F3598,LITREF(lit_152));
    if (T3 != YPfalse) {
      T2 = LITREF(lit_342);
    } else {
      T5 = CALL2(1,x_1648F3599,x_1647F3598,LITREF(lit_153));
      if (T5 != YPfalse) {
        T4 = LITREF(lit_343);
      } else {
        T4 = LITREF(lit_344);
      }
      T2 = T4;
    }
    T0 = T2;
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,T0);
  x_1649F3600 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1649F3600,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),v_,out_);
  T7 = CALL2(1,VARREF(YgooSioSportYput),x_1649F3600,YPchr((P)41));
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_to_c_121) {
  P e_,f_,d_,out_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSast_linearizeYform_quotations),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotations),out_,T0);
  T1 = CALL1(1,VARREF(YevalSast_linearizeYform_definitions),e_);
  CALL4(1,VARREF(YevalSg2cYgenerate_functions),T1,f_,d_,out_);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYform_program),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T2,f_,d_,out_);
  T4 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T4 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
    T5 = CALL1(1,VARREF(YevalSast_linearizeYform_program),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T5,out_);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
    T3 = T6;
  } else {
    T3 = YPfalse;
  }
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_to_c_122) {
  P e_,f_,d_,out_;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_gen_ref_123) {
  P e_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYreference_Gc),T1,out_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_124) {
  P e_,out_;
  P x_1651F3602;
  P x_1650F3601;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_352));
  x_1650F3601 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1650F3601,YPchr((P)40));
  x_1651F3602 = out_;
  T2 = CALL1(1,VARREF(YevalSast_linearizeYreference_offset),e_);
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),T2);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_1651F3602,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYput),x_1650F3601,YPchr((P)41));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_gen_ref_125) {
  P e_,out_;
  P x_1652F3604;
  P regF3603;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T4 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  regF3603 = T4;
  if (regF3603 != YPfalse) {
    x_1652F3604 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1652F3604,LITREF(lit_354));
    T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),regF3603);
    T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1652F3604,T2);
    T0 = T1;
  } else {
    T3 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_355));
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_126) {
  P e_,out_;
  P x_1653F3605;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  x_1653F3605 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1653F3605,LITREF(lit_357));
  T1 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
  T0 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1653F3605,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_127) {
  P e_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_128) {
  P e_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYlast),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_ref),T1,out_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_129) {
  P e_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YevalSastYlocals_body),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_ref),T1,out_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_130) {
  P e_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_ref),T1,out_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_131) {
  P e_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YevalSastYloop_body),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_ref),T1,out_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_132) {
  P e_,f_,d_,out_;
  P x_1655F3607;
  P x_1654F3606;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  T8 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T7 = CALL1(1,VARREF(YevalSastYbinding_kind),T8);
  x_1654F3606 = T7;
  x_1655F3607 = VARREF(YgooSmacrosYEE);
  T2 = CALL2(1,x_1655F3607,x_1654F3606,LITREF(lit_152));
  if (T2 != YPfalse) {
    T1 = LITREF(lit_364);
  } else {
    T4 = CALL2(1,x_1655F3607,x_1654F3606,LITREF(lit_153));
    if (T4 != YPfalse) {
      T6 = CALL2(1,VARREF(YisaQ),e_,VARREF(YevalSastYLdynamic_definitionG));
      if (T6 != YPfalse) {
        T5 = LITREF(lit_365);
      } else {
        T5 = LITREF(lit_366);
      }
      T3 = T5;
    } else {
      T3 = LITREF(lit_367);
    }
    T1 = T3;
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
  T9 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),T9,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_368));
  T10 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T10,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_369));
  T11 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
UNLINK_STACK();
  QRET(T11);
}

FUNCODEDEF(fun_to_c_133) {
  P e_,f_,d_,out_;
  P x_1656F3608;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYboundQ_default),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  T2 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T2 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
    T4 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
    T3 = CALL2(1,VARREF(YisaQ),T4,VARREF(YevalSastYLruntime_referenceG));
    if (T3 != YPfalse) {
      T5 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_371));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_372));
    x_1656F3608 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1656F3608,YPchr((P)40));
    T7 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
    T6 = CALL1(1,VARREF(YevalSastYreference_binding),T7);
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),T6,out_);
    CALL2(1,VARREF(YgooSioSportYput),x_1656F3608,YPchr((P)44));
    T8 = CALL1(1,VARREF(YevalSastYboundQ_default),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T8,out_);
    T9 = CALL2(1,VARREF(YgooSioSportYput),x_1656F3608,YPchr((P)41));
    T10 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
    T1 = T10;
  } else {
    T1 = YPfalse;
  }
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_to_c_134) {
  P e_,f_,d_,out_;
  P x_1657F3609;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  T2 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T2 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_374));
    x_1657F3609 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1657F3609,YPchr((P)40));
    T3 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T3,out_);
    T4 = CALL2(1,VARREF(YgooSioSportYput),x_1657F3609,YPchr((P)41));
    T5 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
    T1 = T5;
  } else {
    T1 = YPfalse;
  }
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_to_c_135) {
  P e_,f_,d_,out_;
  P x_1658F3610;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSast_linearizeYbox_form),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_376));
  x_1658F3610 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1658F3610,YPchr((P)40));
  T1 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T1,out_);
  T2 = CALL2(1,VARREF(YgooSioSportYput),x_1658F3610,YPchr((P)41));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_377));
  T3 = CALL1(1,VARREF(YevalSast_linearizeYbox_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,out_);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(fun_to_c_136) {
  P e_,f_,d_,out_;
  P x_1659F3612;
  P bindingF3611;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  T4 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  T3 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),T4);
  T2 = CALL1(1,VARREF(YevalSastYreference_binding),T3);
  bindingF3611 = T2;
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3611,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_379));
  x_1659F3612 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1659F3612,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3611,out_);
  T0 = CALL2(1,VARREF(YgooSioSportYput),x_1659F3612,YPchr((P)41));
  T1 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_bbQ_137) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_bbQ_138) {
  P x_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  T3 = CALL1(1,VARREF(YevalSastYapplication_binding),x_);
  T2 = CALL1(1,VARREF(YevalSastYbinding_name),T3);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,LITREF(lit_383));
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSastYapplication_arguments),x_);
    T4 = CALL1(1,VARREF(YgooSmacrosY1st),T5);
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bbQ_139) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSastYfix_let_body),x_);
  T0 = CALL1(1,VARREF(YevalSg2cYbbQ),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_140) {
  P e_,f_,d_,out_;
  P x_1660F3616;
  P tstF3615;
  P tmpF3614;
  P bb_tstF3613;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T22 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
  T21 = CALL1(1,VARREF(YevalSg2cYbbQ),T22);
  bb_tstF3613 = T21;
  tmpF3614 = bb_tstF3613;
  if (tmpF3614 != YPfalse) {
    T19 = tmpF3614;
  } else {
    T20 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
    T19 = T20;
  }
  tstF3615 = T19;
  T0 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_386));
  CALL2(1,VARREF(YevalSg2cYgen_ref),tstF3615,out_);
  if (bb_tstF3613 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_387));
  } else {
    x_1660F3616 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1660F3616,LITREF(lit_388));
    T2 = CALL0(1,VARREF(YevalSg2cYfalse_name));
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1660F3616,T2);
    T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1660F3616,LITREF(lit_389));
  }
  T4 = CALL1(1,VARREF(YevalSastYalternative_consequent),e_);
  T5 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
  CALL4(1,VARREF(YevalSg2cYto_c),T4,f_,T5,out_);
  T6 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T6 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL2(1,VARREF(YevalSg2cYgen_depth),T7,out_);
    T8 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,T8,out_);
    T9 = CALL1(1,VARREF(YevalSastYalternative_consequent),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T9,out_);
    T10 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
  } else {
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_390));
  T11 = CALL1(1,VARREF(YevalSastYalternative_alternant),e_);
  T12 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
  CALL4(1,VARREF(YevalSg2cYto_c),T11,f_,T12,out_);
  T13 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T13 != YPfalse) {
    T14 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL2(1,VARREF(YevalSg2cYgen_depth),T14,out_);
    T15 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,T15,out_);
    T16 = CALL1(1,VARREF(YevalSastYalternative_alternant),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T16,out_);
    T17 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
  } else {
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  T18 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_391));
UNLINK_STACK();
  QRET(T18);
}

FUNCODEDEF(fun_141) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL4(1,VARREF(YevalSg2cYto_c),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_142) {
  P e_,f_,d_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T1 = FUNFAB(fun_141,3,f_,d_,out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_143) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_144) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_to_c_145) {
  P e_,f_,d_,out_;
  P x_1670F3632;
  P x_1669F3631;
  P x_1668F3630;
  P x_1667F3629;
  P bF3628;
  P iF3627;
  P firstQF3626;
  P tmpF3625;
  P tmpF3624;
  P x_1663F3623;
  P x_1664F3622;
  P x_1665F3621;
  P x_1662F3620;
  P bindingsF3619;
  P x_1661F3618;
  P nF3617;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T41 = CALL2(1,VARREF(YgooSmathYA),DYNREF(YevalSg2cYTloop_arg_counterT),YPint((P)1));
  T40 = DYNSET(YevalSg2cYTloop_arg_counterT,T41);
  T39 = CALL2(1,VARREF(YevalSastYloop_continue_setter),T40,e_);
  nF3617 = T39;
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  x_1661F3618 = out_;
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_1661F3618,LITREF(lit_395));
  T38 = CALL1(1,VARREF(YevalSastYloop_bindings),e_);
  bindingsF3619 = T38;
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindingsF3619);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL2(1,VARREF(YevalSg2cYgen_depth),T3,out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_396));
    x_1662F3620 = out_;
    T25 = fun_143;
    T26 = fun_144;
    T24 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T25,T26);
    T23 = CALL1(1,VARREF(YgooScolsScolYenum),T24);
    x_1665F3621 = T23;
    T28 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
    T27 = CALL1(1,VARREF(YgooScolsScolYenum),T28);
    x_1664F3622 = T27;
    T29 = CALL1(1,VARREF(YgooScolsScolYenum),bindingsF3619);
    x_1663F3623 = T29;
    for (;;) {
      P a210_0,a210_1,a210_2;
    loop210:
      T10 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1665F3621);
      tmpF3624 = T10;
      if (tmpF3624 != YPfalse) {
        T6 = tmpF3624;
      } else {
        T9 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1664F3622);
        tmpF3625 = T9;
        if (tmpF3625 != YPfalse) {
          T7 = tmpF3625;
        } else {
          T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1663F3623);
          T7 = T8;
        }
        T6 = T7;
      }
      T5 = CALL1(1,VARREF(Ynot),T6);
      if (T5 != YPfalse) {
        T22 = CALL1(1,VARREF(YgooScolsScolYnow),x_1665F3621);
        firstQF3626 = T22;
        T21 = CALL1(1,VARREF(YgooScolsScolYnow),x_1664F3622);
        iF3627 = T21;
        T20 = CALL1(1,VARREF(YgooScolsScolYnow),x_1663F3623);
        bF3628 = T20;
        T11 = CALL1(1,VARREF(Ynot),firstQF3626);
        if (T11 != YPfalse) {
          T12 = CALL2(1,VARREF(YgooSioSportYput),x_1662F3620,YPchr((P)44));
        } else {
        }
        x_1667F3629 = out_;
        CALL2(1,VARREF(YgooSioSportYputs),x_1667F3629,LITREF(lit_399));
        T13 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF3617);
        CALL2(1,VARREF(YgooSioSportYputs),x_1667F3629,T13);
        CALL2(1,VARREF(YgooSioSportYputs),x_1667F3629,LITREF(lit_400));
        T15 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF3627);
        T14 = CALL2(1,VARREF(YgooSioSportYputs),x_1667F3629,T15);
        T17 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1665F3621);
        T18 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1664F3622);
        T19 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1663F3623);
        a210_0 = T17;
        a210_1 = T18;
        a210_2 = T19;
        x_1665F3621 = a210_0;
        x_1664F3622 = a210_1;
        x_1663F3623 = a210_2;
        goto loop210;
        T4 = T16;
      } else {
        T4 = YPfalse;
      }
      break;
    }
    T30 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
  } else {
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  x_1668F3630 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1668F3630,LITREF(lit_401));
  T31 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF3617);
  CALL2(1,VARREF(YgooSioSportYputs),x_1668F3630,T31);
  T32 = CALL2(1,VARREF(YgooSioSportYputs),x_1668F3630,LITREF(lit_402));
  T33 = CALL1(1,VARREF(YevalSastYloop_body),e_);
  T34 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
  CALL4(1,VARREF(YevalSg2cYto_c),T33,f_,T34,out_);
  T35 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
  CALL2(1,VARREF(YevalSg2cYgen_depth),T35,out_);
  x_1669F3631 = out_;
  T36 = CALL2(1,VARREF(YgooSioSportYputs),x_1669F3631,LITREF(lit_403));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  x_1670F3632 = out_;
  T37 = CALL2(1,VARREF(YgooSioSportYputs),x_1670F3632,LITREF(lit_404));
UNLINK_STACK();
  QRET(T37);
}

FUNCODEDEF(fun_to_c_146) {
  P e_,f_,d_,out_;
  P x_1681F3649;
  P x_1680F3648;
  P bindingF3647;
  P iF3646;
  P tmpF3645;
  P x_1677F3644;
  P x_1678F3643;
  P x_1676F3642;
  P argF3641;
  P iF3640;
  P tmpF3639;
  P x_1673F3638;
  P x_1674F3637;
  P argF3636;
  P x_1671F3635;
  P nF3634;
  P loopF3633;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T46 = CALL1(1,VARREF(YevalSastYapplication_loop),e_);
  loopF3633 = T46;
  T45 = CALL1(1,VARREF(YevalSastYloop_continue),loopF3633);
  nF3634 = T45;
  T7 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  x_1671F3635 = T6;
  for (;;) {
    P a211_0;
  loop211:
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1671F3635);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),x_1671F3635);
      argF3636 = T5;
      CALL4(1,VARREF(YevalSg2cYto_c),argF3636,f_,d_,out_);
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1671F3635);
      a211_0 = T4;
      x_1671F3635 = a211_0;
      goto loop211;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
    break;
  }
  T22 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T21 = CALL1(1,VARREF(YgooScolsScolYenum),T22);
  x_1674F3637 = T21;
  T24 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T23 = CALL1(1,VARREF(YgooScolsScolYenum),T24);
  x_1673F3638 = T23;
  for (;;) {
    P a212_0,a212_1;
  loop212:
    T12 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1674F3637);
    tmpF3639 = T12;
    if (tmpF3639 != YPfalse) {
      T10 = tmpF3639;
    } else {
      T11 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1673F3638);
      T10 = T11;
    }
    T9 = CALL1(1,VARREF(Ynot),T10);
    if (T9 != YPfalse) {
      T20 = CALL1(1,VARREF(YgooScolsScolYnow),x_1674F3637);
      iF3640 = T20;
      T19 = CALL1(1,VARREF(YgooScolsScolYnow),x_1673F3638);
      argF3641 = T19;
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      x_1676F3642 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1676F3642,LITREF(lit_406));
      T13 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF3634);
      CALL2(1,VARREF(YgooSioSportYputs),x_1676F3642,T13);
      CALL2(1,VARREF(YgooSioSportYputs),x_1676F3642,LITREF(lit_407));
      T14 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF3640);
      CALL2(1,VARREF(YgooSioSportYputs),x_1676F3642,T14);
      T15 = CALL2(1,VARREF(YgooSioSportYputs),x_1676F3642,LITREF(lit_408));
      CALL2(1,VARREF(YevalSg2cYgen_ref),argF3641,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
      T17 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1674F3637);
      T18 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1673F3638);
      a212_0 = T17;
      a212_1 = T18;
      x_1674F3637 = a212_0;
      x_1673F3638 = a212_1;
      goto loop212;
      T8 = T16;
    } else {
      T8 = YPfalse;
    }
    break;
  }
  T39 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T38 = CALL1(1,VARREF(YgooScolsScolYenum),T39);
  x_1678F3643 = T38;
  T41 = CALL1(1,VARREF(YevalSastYloop_bindings),loopF3633);
  T40 = CALL1(1,VARREF(YgooScolsScolYenum),T41);
  x_1677F3644 = T40;
  for (;;) {
    P a213_0,a213_1;
  loop213:
    T29 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1678F3643);
    tmpF3645 = T29;
    if (tmpF3645 != YPfalse) {
      T27 = tmpF3645;
    } else {
      T28 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1677F3644);
      T27 = T28;
    }
    T26 = CALL1(1,VARREF(Ynot),T27);
    if (T26 != YPfalse) {
      T37 = CALL1(1,VARREF(YgooScolsScolYnow),x_1678F3643);
      iF3646 = T37;
      T36 = CALL1(1,VARREF(YgooScolsScolYnow),x_1677F3644);
      bindingF3647 = T36;
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3647,out_);
      x_1680F3648 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1680F3648,LITREF(lit_409));
      T30 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF3634);
      CALL2(1,VARREF(YgooSioSportYputs),x_1680F3648,T30);
      CALL2(1,VARREF(YgooSioSportYputs),x_1680F3648,LITREF(lit_410));
      T32 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF3646);
      T31 = CALL2(1,VARREF(YgooSioSportYputs),x_1680F3648,T32);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
      T34 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1678F3643);
      T35 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1677F3644);
      a213_0 = T34;
      a213_1 = T35;
      x_1678F3643 = a213_0;
      x_1677F3644 = a213_1;
      goto loop213;
      T25 = T33;
    } else {
      T25 = YPfalse;
    }
    break;
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  x_1681F3649 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1681F3649,LITREF(lit_411));
  T43 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF3634);
  T42 = CALL2(1,VARREF(YgooSioSportYputs),x_1681F3649,T43);
  T44 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
UNLINK_STACK();
  QRET(T44);
}

FUNCODEDEF(fun_to_c_147) {
  P e_,f_,d_,out_;
  P argF3659;
  P x_1687F3658;
  P x_1686F3657;
  P x_1685F3656;
  P tmpF3655;
  P x_1684F3654;
  P argF3653;
  P x_1682F3652;
  P nF3651;
  P functionF3650;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T33 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  functionF3650 = T33;
  T32 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T31 = CALL1(1,VARREF(YgooStypesYlen),T32);
  nF3651 = T31;
  T0 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  T8 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T7 = CALL1(1,VARREF(YgooScolsScolYenum),T8);
  x_1682F3652 = T7;
  for (;;) {
    P a214_0;
  loop214:
    T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1682F3652);
    T2 = CALL1(1,VARREF(Ynot),T3);
    if (T2 != YPfalse) {
      T6 = CALL1(1,VARREF(YgooScolsScolYnow),x_1682F3652);
      argF3653 = T6;
      CALL4(1,VARREF(YevalSg2cYto_c),argF3653,f_,d_,out_);
      T5 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1682F3652);
      a214_0 = T5;
      x_1682F3652 = a214_0;
      goto loop214;
      T1 = T4;
    } else {
      T1 = YPfalse;
    }
    break;
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  x_1684F3654 = out_;
  T12 = CALL1(1,VARREF(Ynot),f_);
  tmpF3655 = T12;
  if (tmpF3655 != YPfalse) {
    T10 = tmpF3655;
  } else {
    T11 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_primitiveG));
    T10 = T11;
  }
  if (T10 != YPfalse) {
    T9 = LITREF(lit_413);
  } else {
    T9 = LITREF(lit_156);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1684F3654,T9);
  CALL2(1,VARREF(YgooSioSportYputs),x_1684F3654,LITREF(lit_414));
  T15 = CALL2(1,VARREF(YgooSmagYG),nF3651,VARREF(YevalSg2cYDnumber_call_templates));
  if (T15 != YPfalse) {
    T14 = LITREF(lit_415);
  } else {
    T14 = nF3651;
  }
  T13 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1684F3654,T14);
  x_1685F3656 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1685F3656,YPchr((P)40));
  T17 = CALL1(1,VARREF(YevalSastYapplication_knownQ),e_);
  if (T17 != YPfalse) {
    T16 = LITREF(lit_416);
  } else {
    T16 = LITREF(lit_417);
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,T16);
  T18 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T18,out_);
  T19 = CALL2(1,VARREF(YgooSmagYG),nF3651,VARREF(YevalSg2cYDnumber_call_templates));
  if (T19 != YPfalse) {
    x_1686F3657 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1686F3657,LITREF(lit_418));
    T20 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1686F3657,nF3651);
  } else {
  }
  T28 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T27 = CALL1(1,VARREF(YgooScolsScolYenum),T28);
  x_1687F3658 = T27;
  for (;;) {
    P a215_0;
  loop215:
    T23 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1687F3658);
    T22 = CALL1(1,VARREF(Ynot),T23);
    if (T22 != YPfalse) {
      T26 = CALL1(1,VARREF(YgooScolsScolYnow),x_1687F3658);
      argF3659 = T26;
      CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
      CALL2(1,VARREF(YevalSg2cYgen_ref),argF3659,out_);
      T25 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1687F3658);
      a215_0 = T25;
      x_1687F3658 = a215_0;
      goto loop215;
      T21 = T24;
    } else {
      T21 = YPfalse;
    }
    break;
  }
  T29 = CALL2(1,VARREF(YgooSioSportYput),x_1685F3656,YPchr((P)41));
  T30 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
UNLINK_STACK();
  QRET(T30);
}

FUNCODEDEF(fun_148) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_149) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_to_c_150) {
  P e_,f_,d_,out_;
  P xF3665;
  P firstQF3664;
  P tmpF3663;
  P x_1690F3662;
  P x_1691F3661;
  P x_1689F3660;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  x_1689F3660 = out_;
  T14 = fun_148;
  T15 = fun_149;
  T13 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T14,T15);
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  x_1691F3661 = T12;
  T16 = CALL1(1,VARREF(YgooScolsScolYenum),e_);
  x_1690F3662 = T16;
  for (;;) {
    P a216_0,a216_1;
  loop216:
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1691F3661);
    tmpF3663 = T4;
    if (tmpF3663 != YPfalse) {
      T2 = tmpF3663;
    } else {
      T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1690F3662);
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T11 = CALL1(1,VARREF(YgooScolsScolYnow),x_1691F3661);
      firstQF3664 = T11;
      T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_1690F3662);
      xF3665 = T10;
      T5 = CALL1(1,VARREF(Ynot),firstQF3664);
      if (T5 != YPfalse) {
        T6 = CALL2(1,VARREF(YgooSioSportYput),x_1689F3660,YPchr((P)44));
      } else {
      }
      CALL2(1,VARREF(YevalSg2cYgen_ref),xF3665,out_);
      T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1691F3661);
      T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1690F3662);
      a216_0 = T8;
      a216_1 = T9;
      x_1691F3661 = a216_0;
      x_1690F3662 = a216_1;
      goto loop216;
      T0 = T7;
    } else {
      T0 = YPfalse;
    }
    break;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_151) {
  P e_,f_,d_,out_;
  P x_1697F3676;
  P tmpF3675;
  P bindingF3674;
  P typeF3673;
  P initF3672;
  P tmpF3671;
  P tmpF3670;
  P x_1693F3669;
  P x_1694F3668;
  P x_1695F3667;
  P low_letQF3666;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T27 = CALL2(1,VARREF(YisaQ),e_,VARREF(YevalSastYLlow_letG));
  low_letQF3666 = T27;
  T20 = CALL1(1,VARREF(YevalSastYfix_let_arguments),e_);
  T19 = CALL1(1,VARREF(YgooScolsScolYenum),T20);
  x_1695F3667 = T19;
  T22 = CALL1(1,VARREF(YevalSastYfix_let_types),e_);
  T21 = CALL1(1,VARREF(YgooScolsScolYenum),T22);
  x_1694F3668 = T21;
  T24 = CALL1(1,VARREF(YevalSastYfix_let_bindings),e_);
  T23 = CALL1(1,VARREF(YgooScolsScolYenum),T24);
  x_1693F3669 = T23;
  for (;;) {
    P a217_0,a217_1,a217_2;
  loop217:
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1695F3667);
    tmpF3670 = T6;
    if (tmpF3670 != YPfalse) {
      T2 = tmpF3670;
    } else {
      T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1694F3668);
      tmpF3671 = T5;
      if (tmpF3671 != YPfalse) {
        T3 = tmpF3671;
      } else {
        T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1693F3669);
        T3 = T4;
      }
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T18 = CALL1(1,VARREF(YgooScolsScolYnow),x_1695F3667);
      initF3672 = T18;
      T17 = CALL1(1,VARREF(YgooScolsScolYnow),x_1694F3668);
      typeF3673 = T17;
      T16 = CALL1(1,VARREF(YgooScolsScolYnow),x_1693F3669);
      bindingF3674 = T16;
      CALL4(1,VARREF(YevalSg2cYto_c),initF3672,f_,d_,out_);
      T9 = CALL1(1,VARREF(YevalSast_linearizeYunconstrained_typeQ),typeF3673);
      tmpF3675 = T9;
      if (tmpF3675 != YPfalse) {
        T8 = tmpF3675;
      } else {
        T8 = low_letQF3666;
      }
      T7 = CALL1(1,VARREF(Ynot),T8);
      if (T7 != YPfalse) {
        CALL4(1,VARREF(YevalSg2cYto_c),typeF3673,f_,d_,out_);
        CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
        CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_423));
        x_1697F3676 = out_;
        CALL2(1,VARREF(YgooSioSportYput),x_1697F3676,YPchr((P)40));
        CALL2(1,VARREF(YevalSg2cYgen_ref),initF3672,out_);
        CALL2(1,VARREF(YgooSioSportYput),x_1697F3676,YPchr((P)44));
        CALL2(1,VARREF(YevalSg2cYgen_ref),typeF3673,out_);
        T10 = CALL2(1,VARREF(YgooSioSportYput),x_1697F3676,YPchr((P)41));
        T11 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
      } else {
      }
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3674,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_424));
      CALL2(1,VARREF(YevalSg2cYgen_ref),initF3672,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1695F3667);
      T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1694F3668);
      T15 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1693F3669);
      a217_0 = T13;
      a217_1 = T14;
      a217_2 = T15;
      x_1695F3667 = a217_0;
      x_1694F3668 = a217_1;
      x_1693F3669 = a217_2;
      goto loop217;
      T0 = T12;
    } else {
      T0 = YPfalse;
    }
    break;
  }
  T26 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
  T25 = CALL4(1,VARREF(YevalSg2cYto_c),T26,f_,d_,out_);
UNLINK_STACK();
  QRET(T25);
}

FUNCODEDEF(fun_to_c_152) {
  P e_,f_,d_,out_;
  P bindingF3681;
  P initF3680;
  P tmpF3679;
  P x_1698F3678;
  P x_1699F3677;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T11 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  T10 = CALL1(1,VARREF(YgooScolsScolYenum),T11);
  x_1699F3677 = T10;
  T13 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  x_1698F3678 = T12;
  for (;;) {
    P a218_0,a218_1;
  loop218:
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1699F3677);
    tmpF3679 = T4;
    if (tmpF3679 != YPfalse) {
      T2 = tmpF3679;
    } else {
      T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1698F3678);
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1699F3677);
      initF3680 = T9;
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_1698F3678);
      bindingF3681 = T8;
      CALL5(1,VARREF(YevalSg2cYfunshell_to_c),bindingF3681,initF3680,YPfalse,d_,out_);
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3681,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_426));
      CALL2(1,VARREF(YevalSg2cYgen_ref),initF3680,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1699F3677);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1698F3678);
      a218_0 = T6;
      a218_1 = T7;
      x_1699F3677 = a218_0;
      x_1698F3678 = a218_1;
      goto loop218;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
    break;
  }
  T14 = CALL4(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSg2cYfuninit_to_c),f_,d_,out_);
  T15 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  T16 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  CALL3(1,VARREF(YgooScolsSseqYdo2),T14,T15,T16);
  T18 = CALL1(1,VARREF(YevalSastYlocals_body),e_);
  T17 = CALL4(1,VARREF(YevalSg2cYto_c),T18,f_,d_,out_);
UNLINK_STACK();
  QRET(T17);
}

FUNCODEDEF(fun_to_c_153) {
  P e_,f_,d_,out_;
  P x_1701F3682;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYbind_exit_main_fun),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_428));
  x_1701F3682 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1701F3682,YPchr((P)40));
  T1 = CALL1(1,VARREF(YevalSastYbind_exit_main_fun),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T1,out_);
  T2 = CALL2(1,VARREF(YgooSioSportYput),x_1701F3682,YPchr((P)41));
  T3 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_to_c_154) {
  P e_,f_,d_,out_;
  P x_1702F3683;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYunwind_protect_protected_thunk),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  T1 = CALL1(1,VARREF(YevalSastYunwind_protect_cleanup_thunk),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T1,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_430));
  x_1702F3683 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1702F3683,YPchr((P)40));
  T2 = CALL1(1,VARREF(YevalSastYunwind_protect_protected_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T2,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1702F3683,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYunwind_protect_cleanup_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1702F3683,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_to_c_155) {
  P e_,f_,d_,out_;
  P x_1703F3684;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYmonitor_type),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  T1 = CALL1(1,VARREF(YevalSastYmonitor_info),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T1,f_,d_,out_);
  T2 = CALL1(1,VARREF(YevalSastYmonitor_test),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T2,f_,d_,out_);
  T3 = CALL1(1,VARREF(YevalSastYmonitor_handler),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T3,f_,d_,out_);
  T4 = CALL1(1,VARREF(YevalSastYmonitor_main_thunk),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T4,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_432));
  x_1703F3684 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1703F3684,YPchr((P)40));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_433));
  CALL2(1,VARREF(YgooSioSportYput),x_1703F3684,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_434));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T5);
  CALL2(1,VARREF(YgooSioSportYput),x_1703F3684,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_435));
  CALL2(1,VARREF(YgooSioSportYput),x_1703F3684,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYmonitor_type),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1703F3684,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSastYmonitor_info),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T7,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1703F3684,YPchr((P)44));
  T8 = CALL1(1,VARREF(YevalSastYmonitor_test),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T8,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1703F3684,YPchr((P)44));
  T9 = CALL1(1,VARREF(YevalSastYmonitor_handler),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T9,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1703F3684,YPchr((P)44));
  T10 = CALL1(1,VARREF(YevalSastYmonitor_main_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T10,out_);
  T11 = CALL2(1,VARREF(YgooSioSportYput),x_1703F3684,YPchr((P)41));
  T12 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
UNLINK_STACK();
  QRET(T12);
}

FUNCODEDEF(fun_156) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_157) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_to_c_158) {
  P e_,f_,d_,out_;
  P argF3695;
  P firstQF3694;
  P tmpF3693;
  P x_1709F3692;
  P x_1710F3691;
  P x_1708F3690;
  P x_1707F3689;
  P x_1706F3688;
  P argF3687;
  P x_1704F3686;
  P bindingF3685;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T31 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
  bindingF3685 = T31;
  T7 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  x_1704F3686 = T6;
  for (;;) {
    P a219_0;
  loop219:
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1704F3686);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),x_1704F3686);
      argF3687 = T5;
      CALL4(1,VARREF(YevalSg2cYto_c),argF3687,f_,d_,out_);
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1704F3686);
      a219_0 = T4;
      x_1704F3686 = a219_0;
      goto loop219;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
    break;
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  x_1706F3688 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1706F3688,LITREF(lit_437));
  T10 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
  T9 = CALL1(1,VARREF(YevalSg2cYmangle_binding),T10);
  T8 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1706F3688,T9);
  x_1707F3689 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1707F3689,YPchr((P)40));
  x_1708F3690 = out_;
  T25 = fun_156;
  T26 = fun_157;
  T24 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T25,T26);
  T23 = CALL1(1,VARREF(YgooScolsScolYenum),T24);
  x_1710F3691 = T23;
  T28 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T27 = CALL1(1,VARREF(YgooScolsScolYenum),T28);
  x_1709F3692 = T27;
  for (;;) {
    P a220_0,a220_1;
  loop220:
    T15 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1710F3691);
    tmpF3693 = T15;
    if (tmpF3693 != YPfalse) {
      T13 = tmpF3693;
    } else {
      T14 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1709F3692);
      T13 = T14;
    }
    T12 = CALL1(1,VARREF(Ynot),T13);
    if (T12 != YPfalse) {
      T22 = CALL1(1,VARREF(YgooScolsScolYnow),x_1710F3691);
      firstQF3694 = T22;
      T21 = CALL1(1,VARREF(YgooScolsScolYnow),x_1709F3692);
      argF3695 = T21;
      T16 = CALL1(1,VARREF(Ynot),firstQF3694);
      if (T16 != YPfalse) {
        T17 = CALL2(1,VARREF(YgooSioSportYput),x_1708F3690,YPchr((P)44));
      } else {
      }
      CALL2(1,VARREF(YevalSg2cYgen_ref),argF3695,out_);
      T19 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1710F3691);
      T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1709F3692);
      a220_0 = T19;
      a220_1 = T20;
      x_1710F3691 = a220_0;
      x_1709F3692 = a220_1;
      goto loop220;
      T11 = T18;
    } else {
      T11 = YPfalse;
    }
    break;
  }
  T29 = CALL2(1,VARREF(YgooSioSportYput),x_1707F3689,YPchr((P)41));
  T30 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
UNLINK_STACK();
  QRET(T30);
}

FUNCODEDEF(fun_159) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL4(1,VARREF(YevalSg2cYto_c),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_160) {
  P e_,f_,d_,out_;
  P xF3701;
  P x_1714F3700;
  P x_1713F3699;
  P x_1712F3698;
  P fF3697;
  P nF3696;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T22 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
  T21 = CALL1(1,VARREF(YgooStypesYlen),T22);
  nF3696 = T21;
  T20 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_index),e_);
  T19 = CALL2(1,VARREF(YgooSmacrosYelt),DYNREF(YevalSg2cYTdefinitionsT),T20);
  fF3697 = T19;
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),nF3696,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
    if (T3 != YPfalse) {
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
      CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,fF3697);
      T4 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
      T2 = T4;
    } else {
      T2 = YPfalse;
    }
    T0 = T2;
  } else {
    T5 = FUNFAB(fun_159,3,fF3697,d_,out_);
    T6 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T5,T6);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_442));
    x_1712F3698 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1712F3698,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,fF3697);
    x_1713F3699 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1713F3699,LITREF(lit_443));
    T8 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF3696);
    T7 = CALL2(1,VARREF(YgooSioSportYputs),x_1713F3699,T8);
    T16 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    T15 = CALL1(1,VARREF(YgooScolsScolYenum),T16);
    x_1714F3700 = T15;
    for (;;) {
      P a221_0;
    loop221:
      T11 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1714F3700);
      T10 = CALL1(1,VARREF(Ynot),T11);
      if (T10 != YPfalse) {
        T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1714F3700);
        xF3701 = T14;
        CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
        CALL2(1,VARREF(YevalSg2cYgen_ref),xF3701,out_);
        T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1714F3700);
        a221_0 = T13;
        x_1714F3700 = a221_0;
        goto loop221;
        T9 = T12;
      } else {
        T9 = YPfalse;
      }
      break;
    }
    T17 = CALL2(1,VARREF(YgooSioSportYput),x_1712F3698,YPchr((P)41));
    T18 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
    T0 = T18;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_funshell_to_c_161) {
  P b_,e_,f_,d_,out_;
  P x_1718F3706;
  P x_1717F3705;
  P x_1716F3704;
  P fF3703;
  P nF3702;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(b_, 0);
  ARG(e_, 1);
  ARG(f_, 2);
  ARG(d_, 3);
  ARG(out_, 4);
  T13 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
  T12 = CALL1(1,VARREF(YgooStypesYlen),T13);
  nF3702 = T12;
  T11 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_index),e_);
  T10 = CALL2(1,VARREF(YgooSmacrosYelt),DYNREF(YevalSg2cYTdefinitionsT),T11);
  fF3703 = T10;
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),nF3702,YPint((P)0));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,fF3703);
  } else {
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_446));
    x_1716F3704 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1716F3704,YPchr((P)40));
    x_1717F3705 = out_;
    T5 = CALL1(1,VARREF(YevalSastYbinding_dynamic_extentQ),b_);
    if (T5 != YPfalse) {
      T4 = YPint((P)1);
    } else {
      T4 = YPint((P)0);
    }
    T3 = CALL1(1,VARREF(YgooSmathYnum_to_str),T4);
    T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1717F3705,T3);
    CALL2(1,VARREF(YgooSioSportYput),x_1716F3704,YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,fF3703);
    CALL2(1,VARREF(YgooSioSportYput),x_1716F3704,YPchr((P)44));
    x_1718F3706 = out_;
    T7 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF3702);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1718F3706,T7);
    T8 = CALL2(1,VARREF(YgooSioSportYput),x_1716F3704,YPchr((P)41));
  }
  T9 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_162) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL4(1,VARREF(YevalSg2cYto_c),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_funinit_to_c_163) {
  P b_,e_,f_,d_,out_;
  P xF3711;
  P x_1721F3710;
  P x_1720F3709;
  P x_1719F3708;
  P nF3707;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(b_, 0);
  ARG(e_, 1);
  ARG(f_, 2);
  ARG(d_, 3);
  ARG(out_, 4);
  T17 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
  T16 = CALL1(1,VARREF(YgooStypesYlen),T17);
  nF3707 = T16;
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),nF3707,YPint((P)0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = FUNFAB(fun_162,3,f_,d_,out_);
    T4 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T3,T4);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_450));
    x_1719F3708 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1719F3708,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),b_,out_);
    x_1720F3709 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1720F3709,LITREF(lit_451));
    T5 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1720F3709,nF3707);
    T13 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
    x_1721F3710 = T12;
    for (;;) {
      P a222_0;
    loop222:
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1721F3710);
      T7 = CALL1(1,VARREF(Ynot),T8);
      if (T7 != YPfalse) {
        T11 = CALL1(1,VARREF(YgooScolsScolYnow),x_1721F3710);
        xF3711 = T11;
        CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
        CALL2(1,VARREF(YevalSg2cYgen_ref),xF3711,out_);
        T10 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1721F3710);
        a222_0 = T10;
        x_1721F3710 = a222_0;
        goto loop222;
        T6 = T9;
      } else {
        T6 = YPfalse;
      }
      break;
    }
    T14 = CALL2(1,VARREF(YgooSioSportYput),x_1719F3708,YPchr((P)41));
    T15 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
    T0 = T15;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_164) {
  P e_,f_,d_,out_;
  P x_1723F3712;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,YPfalse,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_453));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
  x_1723F3712 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1723F3712,YPchr((P)40));
  T3 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T2 = CALL1(1,VARREF(YevalSastYbinding_module_name),T3);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,T2);
  CALL2(1,VARREF(YgooSioSportYput),x_1723F3712,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(YevalSastYbinding_name),T5);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_1723F3712,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,out_);
  T7 = CALL2(1,VARREF(YgooSioSportYput),x_1723F3712,YPchr((P)41));
  T8 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_out_list_builder_165) {
  P f_,out_,elts_;
  P eF3716;
  P x_1726F3715;
  P x_1725F3714;
  P x_1724F3713;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(f_, 0);
  ARG(out_, 1);
  ARG(elts_, 2);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),elts_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_456));
    T2 = CALL2(1,VARREF(YgooSioSportYputs),out_,T3);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_457));
    CALL2(1,VARREF(YgooSioSportYputs),out_,T4);
    x_1724F3713 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1724F3713,YPchr((P)40));
    x_1725F3714 = out_;
    T7 = CALL1(1,VARREF(YgooStypesYlen),elts_);
    T6 = CALL1(1,VARREF(YgooSmathYnum_to_str),T7);
    T5 = CALL2(1,VARREF(YgooSioSportYputs),x_1725F3714,T6);
    T14 = CALL1(1,VARREF(YgooScolsScolYenum),elts_);
    x_1726F3715 = T14;
    for (;;) {
      P a223_0;
    loop223:
      T10 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1726F3715);
      T9 = CALL1(1,VARREF(Ynot),T10);
      if (T9 != YPfalse) {
        T13 = CALL1(1,VARREF(YgooScolsScolYnow),x_1726F3715);
        eF3716 = T13;
        CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
        CALL1(0,f_,eF3716);
        T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1726F3715);
        a223_0 = T12;
        x_1726F3715 = a223_0;
        goto loop223;
        T8 = T11;
      } else {
        T8 = YPfalse;
      }
      break;
    }
    T15 = CALL2(1,VARREF(YgooSioSportYput),x_1724F3713,YPchr((P)41));
    T0 = T15;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_166) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_ref),x_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_fab_list_167) {
  P out_,refs_;
  P T0,T1;
LINK_STACK();
  ARG(out_, 0);
  ARG(refs_, 1);
  T1 = FUNFAB(fun_166,1,out_);
  T0 = CALL3(1,VARREF(YevalSg2cYout_list_builder),T1,out_,refs_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_specs_168) {
  P out_,sig_;
  P T0,T1;
LINK_STACK();
  ARG(out_, 0);
  ARG(sig_, 1);
  T1 = CALL1(1,VARREF(YevalSastYreq_sig_specs),sig_);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_fab_list),out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_169) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL4(1,VARREF(YevalSg2cYto_c),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_170) {
  P e_,f_,d_,out_;
  P x_1728F3717;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = FUNFAB(fun_169,3,f_,d_,out_);
  T1 = CALL1(1,VARREF(YevalSastYsignature_specs),e_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL1(1,VARREF(YevalSastYsignature_value),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T2,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  T3 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_465));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T3);
  x_1728F3717 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1728F3717,YPchr((P)40));
  T4 = CALL1(1,VARREF(YevalSastYsignature_names),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T4,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1728F3717,YPchr((P)44));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_specs),out_,e_);
  CALL2(1,VARREF(YgooSioSportYput),x_1728F3717,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYsignature_naryQ),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T5,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1728F3717,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYsignature_arity),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1728F3717,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSastYsignature_value),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T7,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1728F3717,YPchr((P)44));
  T8 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_466));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T8);
  T9 = CALL2(1,VARREF(YgooSioSportYput),x_1728F3717,YPchr((P)41));
  T10 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_to_c_171) {
  P e_,f_,d_,out_;
  P x_1729F3718;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYfunction_signature),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_468));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
  x_1729F3718 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1729F3718,YPchr((P)40));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_469));
  CALL2(1,VARREF(YgooSioSportYput),x_1729F3718,YPchr((P)44));
  T2 = CALL1(1,VARREF(YevalSastYfunction_debug_name),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T2,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1729F3718,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYfunction_signature),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1729F3718,YPchr((P)44));
  T4 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_470));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_1729F3718,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_471));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T5);
  CALL2(1,VARREF(YgooSioSportYput),x_1729F3718,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_472));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T6);
  CALL2(1,VARREF(YgooSioSportYput),x_1729F3718,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_473));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T7);
  T8 = CALL2(1,VARREF(YgooSioSportYput),x_1729F3718,YPchr((P)41));
  T9 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_generate_function_forwards_172) {
  P out_,definitions_;
  P defF3720;
  P x_1730F3719;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(out_, 0);
  ARG(definitions_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_476));
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),definitions_);
  x_1730F3719 = T6;
  for (;;) {
    P a224_0;
  loop224:
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1730F3719);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),x_1730F3719);
      defF3720 = T5;
      CALL2(1,VARREF(YevalSg2cYgenerate_function_forward),out_,defF3720);
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1730F3719);
      a224_0 = T4;
      x_1730F3719 = a224_0;
      goto loop224;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
    break;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_173) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_174) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_generate_function_forward_175) {
  P out_,defn_;
  P iF3727;
  P firstQF3726;
  P tmpF3725;
  P x_1734F3724;
  P x_1735F3723;
  P x_1733F3722;
  P x_1732F3721;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(out_, 0);
  ARG(defn_, 1);
  x_1732F3721 = out_;
  if (DYNREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    T0 = LITREF(lit_479);
  } else {
    T0 = LITREF(lit_480);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1732F3721,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1732F3721,LITREF(lit_481));
  T2 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_binding),T2);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1732F3721,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1732F3721,LITREF(lit_482));
  x_1733F3722 = out_;
  T18 = fun_173;
  T19 = fun_174;
  T17 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T18,T19);
  T16 = CALL1(1,VARREF(YgooScolsScolYenum),T17);
  x_1735F3723 = T16;
  T23 = CALL1(1,VARREF(YevalSastYfunction_bindings),defn_);
  T22 = CALL1(1,VARREF(YgooStypesYlen),T23);
  T21 = CALL1(1,VARREF(YgooScolsSseqYbelow),T22);
  T20 = CALL1(1,VARREF(YgooScolsScolYenum),T21);
  x_1734F3724 = T20;
  for (;;) {
    P a225_0,a225_1;
  loop225:
    T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1735F3723);
    tmpF3725 = T8;
    if (tmpF3725 != YPfalse) {
      T6 = tmpF3725;
    } else {
      T7 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1734F3724);
      T6 = T7;
    }
    T5 = CALL1(1,VARREF(Ynot),T6);
    if (T5 != YPfalse) {
      T15 = CALL1(1,VARREF(YgooScolsScolYnow),x_1735F3723);
      firstQF3726 = T15;
      T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1734F3724);
      iF3727 = T14;
      T9 = CALL1(1,VARREF(Ynot),firstQF3726);
      if (T9 != YPfalse) {
        T10 = CALL2(1,VARREF(YgooSioSportYput),x_1733F3722,YPchr((P)44));
      } else {
      }
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_485));
      T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1735F3723);
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1734F3724);
      a225_0 = T12;
      a225_1 = T13;
      x_1735F3723 = a225_0;
      x_1734F3724 = a225_1;
      goto loop225;
      T4 = T11;
    } else {
      T4 = YPfalse;
    }
    break;
  }
  T24 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_486));
UNLINK_STACK();
  QRET(T24);
}

FUNCODEDEF(fun_generate_function_binding_176) {
  P out_,defn_;
  P x_1738F3731;
  P nameF3730;
  P x_1737F3729;
  P nameF3728;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(out_, 0);
  ARG(defn_, 1);
  T17 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  nameF3728 = T17;
  T2 = CALL2(1,VARREF(YisaQ),nameF3728,VARREF(YevalSastYLmodule_bindingG));
  if (T2 != YPfalse) {
    T4 = CALL1(1,VARREF(YevalSastYbinding_kind),nameF3728);
    T3 = CALL2(1,VARREF(YgooScolsScolYmemQ),LITREF(lit_489),T4);
    T1 = T3;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSg2cYmangle_binding),nameF3728);
    T5 = CALL2(1,VARREF(YgooSioSportYputs),out_,T6);
    T0 = T5;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),nameF3728,YPfalse);
    if (T8 != YPfalse) {
      x_1737F3729 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1737F3729,LITREF(lit_490));
      T10 = CALL1(1,VARREF(YevalSastYfunction_index),defn_);
      T9 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1737F3729,T10);
      T7 = T9;
    } else {
      T15 = CALL2(1,VARREF(YisaQ),nameF3728,VARREF(YevalSastYLlocal_bindingG));
      if (T15 != YPfalse) {
        T16 = CALL1(1,VARREF(YevalSastYbinding_name),nameF3728);
        T14 = T16;
      } else {
        T14 = nameF3728;
      }
      nameF3730 = T14;
      x_1738F3731 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1738F3731,LITREF(lit_491));
      T11 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),nameF3730);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1738F3731,T11);
      CALL2(1,VARREF(YgooSioSportYputs),x_1738F3731,LITREF(lit_492));
      T13 = CALL1(1,VARREF(YevalSastYfunction_index),defn_);
      T12 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1738F3731,T13);
      T7 = T12;
    }
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_forward_177) {
  P out_,defn_;
  P boundQF3732;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(out_, 0);
  ARG(defn_, 1);
  T3 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  T2 = CALL2(1,VARREF(YisaQ),T3,VARREF(YevalSastYLmodule_bindingG));
  boundQF3732 = T2;
  if (boundQF3732 != YPfalse) {
    T0 = LITREF(lit_494);
  } else {
    T0 = LITREF(lit_495);
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,T0);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,defn_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_496));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_178) {
  P def_;
  P T0;
LINK_STACK();
  ARG(def_, 0);
  T0 = CALL2(1,VARREF(YevalSg2cYgenerate_function_code),FREEREF(0),def_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_bodies_179) {
  P out_,definitions_;
  P T0,T1;
LINK_STACK();
  ARG(out_, 0);
  ARG(definitions_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_499));
  T1 = FUNFAB(fun_178,1,out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,definitions_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_180) {
  P def_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(def_, 0);
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

FUNCODEDEF(fun_generate_functions_181) {
  P definitions_,f_,d_,out_;
  P T0,T1,T2;
LINK_STACK();
  ARG(definitions_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T1 = FUNFAB(fun_180,3,f_,d_,out_);
  T2 = CALL1(1,VARREF(YgooScolsSseqYrev),definitions_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_closure_structure_182) {
  P definition_,f_,d_,out_;
  P x_1741F3735;
  P x_1740F3734;
  P x_1739F3733;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(definition_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYfunction_signature),definition_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),definition_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,definition_);
  x_1739F3733 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1739F3733,LITREF(lit_506));
  T2 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_507));
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1739F3733,T2);
  x_1740F3734 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1740F3734,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_body_reference),out_,definition_);
  CALL2(1,VARREF(YgooSioSportYput),x_1740F3734,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYfunction_debug_name),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1740F3734,YPchr((P)44));
  T4 = CALL1(1,VARREF(YevalSastYfunction_signature),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T4,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1740F3734,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_508));
  CALL2(1,VARREF(YgooSioSportYput),x_1740F3734,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_509));
  CALL2(1,VARREF(YgooSioSportYput),x_1740F3734,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYprogram_line),definition_);
  if (T5 != YPfalse) {
    x_1741F3735 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1741F3735,LITREF(lit_510));
    T7 = CALL1(1,VARREF(YevalSastYprogram_line),definition_);
    T6 = CALL1(1,VARREF(YgooSmathYnum_to_str),T7);
    CALL2(1,VARREF(YgooSioSportYputs),x_1741F3735,T6);
    T8 = CALL2(1,VARREF(YgooSioSportYputs),x_1741F3735,LITREF(lit_511));
  } else {
    T10 = CALL1(1,VARREF(YevalSastYfunction_source),definition_);
    T9 = CALL2(1,VARREF(YevalSg2cYgen_ref),T10,out_);
  }
  T11 = CALL2(1,VARREF(YgooSioSportYput),x_1740F3734,YPchr((P)41));
  T12 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
UNLINK_STACK();
  QRET(T12);
}

FUNCODEDEF(fun_generate_function_body_reference_183) {
  P out_,definition_;
  P T0;
LINK_STACK();
  ARG(out_, 0);
  ARG(definition_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_514));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,definition_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_515));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_return_184) {
  P defn_,d_,out_;
  P T0,T1;
LINK_STACK();
  ARG(defn_, 0);
  ARG(d_, 1);
  ARG(out_, 2);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_518));
  T0 = CALL1(1,VARREF(YevalSastYfunction_body),defn_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T0,out_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_generate_return_185) {
  P defn_,d_,out_;
  P x_1742F3736;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(defn_, 0);
  ARG(d_, 1);
  ARG(out_, 2);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  T1 = CALL1(1,VARREF(YevalSastYfunction_value),defn_);
  T0 = CALL1(1,VARREF(YevalSast_linearizeYunconstrained_typeQ),T1);
  if (T0 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)81));
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_520));
  x_1742F3736 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1742F3736,YPchr((P)40));
  T3 = CALL1(1,VARREF(YevalSastYfunction_body),defn_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1742F3736,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_primitive_inlinableQ_186) {
  P e_;
  P tmpF3737;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(e_, 0);
  T4 = CALL1(1,VARREF(YevalSastYfunction_adjectives),e_);
  T3 = CALL2(1,VARREF(YgooScolsScolYmemQ),T4,LITREF(lit_523));
  tmpF3737 = T3;
  if (tmpF3737 != YPfalse) {
    T0 = tmpF3737;
  } else {
    T2 = CALL1(1,VARREF(YevalSastYfunction_adjectives),e_);
    T1 = CALL2(1,VARREF(YgooScolsScolYmemQ),T2,LITREF(lit_524));
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_187) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_188) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_generate_function_code_189) {
  P out_,e_;
  P bindingF3745;
  P firstQF3744;
  P tmpF3743;
  P x_1746F3742;
  P x_1747F3741;
  P x_1745F3740;
  P x_1744F3739;
  P x_1743F3738;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
LINK_STACK();
  ARG(out_, 0);
  ARG(e_, 1);
  x_1743F3738 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1743F3738,LITREF(lit_527));
  if (DYNREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    T0 = LITREF(lit_528);
  } else {
    T0 = LITREF(lit_156);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1743F3738,T0);
  T2 = CALL1(1,VARREF(YevalSg2cYprimitive_inlinableQ),e_);
  if (T2 != YPfalse) {
    T1 = LITREF(lit_529);
  } else {
    T1 = LITREF(lit_156);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1743F3738,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1743F3738,LITREF(lit_530));
  T4 = CALL1(1,VARREF(YevalSastYfunction_binding),e_);
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),T4,out_);
  x_1744F3739 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1744F3739,YPchr((P)40));
  x_1745F3740 = out_;
  T19 = fun_187;
  T20 = fun_188;
  T18 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T19,T20);
  T17 = CALL1(1,VARREF(YgooScolsScolYenum),T18);
  x_1747F3741 = T17;
  T22 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  T21 = CALL1(1,VARREF(YgooScolsScolYenum),T22);
  x_1746F3742 = T21;
  for (;;) {
    P a226_0,a226_1;
  loop226:
    T9 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1747F3741);
    tmpF3743 = T9;
    if (tmpF3743 != YPfalse) {
      T7 = tmpF3743;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1746F3742);
      T7 = T8;
    }
    T6 = CALL1(1,VARREF(Ynot),T7);
    if (T6 != YPfalse) {
      T16 = CALL1(1,VARREF(YgooScolsScolYnow),x_1747F3741);
      firstQF3744 = T16;
      T15 = CALL1(1,VARREF(YgooScolsScolYnow),x_1746F3742);
      bindingF3745 = T15;
      T10 = CALL1(1,VARREF(Ynot),firstQF3744);
      if (T10 != YPfalse) {
        T11 = CALL2(1,VARREF(YgooSioSportYput),x_1745F3740,YPchr((P)44));
      } else {
      }
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_533));
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3745,out_);
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1747F3741);
      T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1746F3742);
      a226_0 = T13;
      a226_1 = T14;
      x_1747F3741 = a226_0;
      x_1746F3742 = a226_1;
      goto loop226;
      T5 = T12;
    } else {
      T5 = YPfalse;
    }
    break;
  }
  T23 = CALL2(1,VARREF(YgooSioSportYput),x_1744F3739,YPchr((P)41));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_534));
  T24 = CALL1(1,VARREF(YevalSastYfunction_temporaries),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_local_temporaries),T24,out_);
  T25 = CALL1(1,VARREF(YevalSastYfunction_registers),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_registers),T25,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_535));
  T26 = CALL1(1,VARREF(YevalSastYfunction_body),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T26,e_,YPint((P)1),out_);
  CALL3(1,VARREF(YevalSg2cYgenerate_return),e_,YPint((P)1),out_);
  T27 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_536));
UNLINK_STACK();
  QRET(T27);
}

FUNCODEDEF(fun_dispatcherQ_190) {
  P definition_;
  P tmpF3748;
  P nameF3747;
  P bindingF3746;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(definition_, 0);
  T11 = CALL1(1,VARREF(YevalSastYfunction_binding),definition_);
  bindingF3746 = T11;
  T1 = CALL2(1,VARREF(YisaQ),bindingF3746,VARREF(YevalSastYLmodule_bindingG));
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YevalSastYbinding_name),bindingF3746);
    T9 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T10);
    nameF3747 = T9;
    T8 = CALL2(1,VARREF(YgooSmathYE),nameF3747,LITREF(lit_539));
    tmpF3748 = T8;
    if (tmpF3748 != YPfalse) {
      T2 = tmpF3748;
    } else {
      T4 = CALL2(1,VARREF(YgooScolsSseqYfinds),nameF3747,LITREF(lit_540));
      T6 = CALL1(1,VARREF(YgooStypesYlen),nameF3747);
      T7 = CALL1(1,VARREF(YgooStypesYlen),LITREF(lit_541));
      T5 = CALL2(1,VARREF(YgooSmathY_),T6,T7);
      T3 = CALL2(1,VARREF(YgooSmathYE),T4,T5);
      T2 = T3;
    }
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_191) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_192) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_193) {
  P b_;
  P x_1753F3749;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(b_, 0);
  T1 = CALL2(1,VARREF(YisaQ),b_,VARREF(YevalSastYLbindingG));
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(0));
    T2 = CALL1(1,VARREF(YevalSastYbinding_dottedQ),b_);
    if (T2 != YPfalse) {
      T3 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_550));
    } else {
      T4 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_551));
    }
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),b_,FREEREF(0));
    x_1753F3749 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1753F3749,LITREF(lit_552));
    T6 = BOXVAL(FREEREF(1));
    T5 = CALL1(1,VARREF(YgooSmathYnum_to_str),T6);
    CALL2(1,VARREF(YgooSioSportYputs),x_1753F3749,T5);
    T7 = CALL2(1,VARREF(YgooSioSportYputs),x_1753F3749,LITREF(lit_553));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_268));
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

FUNCODEDEF(fun_generate_function_code_194) {
  P out_,definition_;
  P bF3757;
  P firstQF3756;
  P tmpF3755;
  P x_1750F3754;
  P x_1751F3753;
  P x_1749F3752;
  P bindingsF3751;
  P offsetF3750;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
LINK_STACK();
  ARG(out_, 0);
  ARG(definition_, 1);
  offsetF3750 = YPint((P)0);
  offsetF3750 = BOXFAB(offsetF3750);
  T30 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
  bindingsF3751 = T30;
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_543));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,definition_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_544));
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindingsF3751);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_545));
    x_1749F3752 = out_;
    T17 = fun_191;
    T18 = fun_192;
    T16 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T17,T18);
    T15 = CALL1(1,VARREF(YgooScolsScolYenum),T16);
    x_1751F3753 = T15;
    T20 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
    T19 = CALL1(1,VARREF(YgooScolsScolYenum),T20);
    x_1750F3754 = T19;
    for (;;) {
      P a227_0,a227_1;
    loop227:
      T7 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1751F3753);
      tmpF3755 = T7;
      if (tmpF3755 != YPfalse) {
        T5 = tmpF3755;
      } else {
        T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1750F3754);
        T5 = T6;
      }
      T4 = CALL1(1,VARREF(Ynot),T5);
      if (T4 != YPfalse) {
        T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1751F3753);
        firstQF3756 = T14;
        T13 = CALL1(1,VARREF(YgooScolsScolYnow),x_1750F3754);
        bF3757 = T13;
        T8 = CALL1(1,VARREF(Ynot),firstQF3756);
        if (T8 != YPfalse) {
          T9 = CALL2(1,VARREF(YgooSioSportYput),x_1749F3752,YPchr((P)44));
        } else {
        }
        CALL2(1,VARREF(YevalSg2cYbinding_Gc),bF3757,out_);
        T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1751F3753);
        T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1750F3754);
        a227_0 = T11;
        a227_1 = T12;
        x_1751F3753 = a227_0;
        x_1750F3754 = a227_1;
        goto loop227;
        T3 = T10;
      } else {
        T3 = YPfalse;
      }
      break;
    }
    T21 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
  } else {
  }
  T22 = CALL1(1,VARREF(YevalSastYfunction_temporaries),definition_);
  CALL2(1,VARREF(YevalSg2cYgenerate_local_temporaries),T22,out_);
  T23 = CALL1(1,VARREF(YevalSastYfunction_registers),definition_);
  CALL2(1,VARREF(YevalSg2cYgenerate_registers),T23,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_548));
  T24 = FUNFAB(fun_193,2,out_,offsetF3750);
  CALL2(1,VARREF(YgooSmacrosYdo),T24,bindingsF3751);
  T25 = CALL1(1,VARREF(YevalSastYfunction_body),definition_);
  CALL4(1,VARREF(YevalSg2cYto_c),T25,definition_,YPint((P)1),out_);
  T27 = CALL1(1,VARREF(YevalSg2cYdispatcherQ),definition_);
  T26 = CALL1(1,VARREF(Ynot),T27);
  if (T26 != YPfalse) {
    T28 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_554));
  } else {
  }
  CALL3(1,VARREF(YevalSg2cYgenerate_return),definition_,YPint((P)1),out_);
  T29 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_555));
UNLINK_STACK();
  QRET(T29);
}

FUNCODEDEF(fun_generate_local_temporaries_195) {
  P temps_,out_;
  P tempF3759;
  P x_1754F3758;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(temps_, 0);
  ARG(out_, 1);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),temps_);
  x_1754F3758 = T6;
  for (;;) {
    P a228_0;
  loop228:
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1754F3758);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),x_1754F3758);
      tempF3759 = T5;
      CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_558));
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),tempF3759,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1754F3758);
      a228_0 = T4;
      x_1754F3758 = a228_0;
      goto loop228;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
    break;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_registers_196) {
  P regs_,out_;
  P tmpF3764;
  P iF3763;
  P jF3762;
  P jF3761;
  P nregsF3760;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(regs_, 0);
  ARG(out_, 1);
  T14 = CALL1(1,VARREF(YgooStypesYlen),regs_);
  nregsF3760 = T14;
  jF3761 = YPint((P)0);
  for (;;) {
    P a229_0;
  loop229:
    T1 = CALL2(1,VARREF(YgooSmagYL),jF3761,nregsF3760);
    if (T1 != YPfalse) {
      CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_561));
      jF3762 = jF3761;
      iF3763 = YPint((P)0);
      for (;;) {
        P a230_0,a230_1;
      loop230:
        T5 = CALL2(1,VARREF(YgooSmathYE),iF3763,VARREF(YevalSg2cYTregisters_per_lineT));
        tmpF3764 = T5;
        if (tmpF3764 != YPfalse) {
          T3 = tmpF3764;
        } else {
          T4 = CALL2(1,VARREF(YgooSmathYE),jF3762,nregsF3760);
          T3 = T4;
        }
        if (T3 != YPfalse) {
          CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_562));
          a229_0 = jF3762;
          jF3761 = a229_0;
          goto loop229;
          T2 = T6;
        } else {
          T8 = CALL2(1,VARREF(YgooSmathYE),iF3763,YPint((P)0));
          T7 = CALL1(1,VARREF(Ynot),T8);
          if (T7 != YPfalse) {
            T9 = CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
          } else {
          }
          T10 = CALL2(1,VARREF(YgooSmacrosYelt),regs_,jF3762);
          CALL2(1,VARREF(YevalSg2cYgen_ref),T10,out_);
          T12 = CALL2(1,VARREF(YgooSmathYA),jF3762,YPint((P)1));
          T13 = CALL2(1,VARREF(YgooSmathYA),iF3763,YPint((P)1));
          a230_0 = T12;
          a230_1 = T13;
          jF3762 = a230_0;
          iF3763 = a230_1;
          goto loop230;
          T2 = T11;
        }
        break;
      }
      T0 = T2;
    } else {
      T0 = YPfalse;
    }
    break;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_info_name_197) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),name_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_565),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_maybe_declare_198) {
  P modname_;
  P x_1756F3765;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(modname_, 0);
  T2 = CALL3(1,VARREF(YgooScolsScolYelt_or),FREEREF(0),modname_,YPfalse);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,FREEREF(0),modname_);
    x_1756F3765 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1756F3765,LITREF(lit_570));
    T3 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),modname_);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1756F3765,T3);
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1756F3765,LITREF(lit_571));
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_199) {
  P binding_;
  P home_modF3766;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(binding_, 0);
  T4 = CALL1(1,VARREF(YevalSastYbinding_module_name),binding_);
  home_modF3766 = T4;
  T2 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL1(0,FREEREF(1),home_modF3766);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYdeclare_imported_module_infos) {
  P out_,mod_;
  P maybe_declareF3769;
  P envF3768;
  P seenF3767;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  T7 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)50));
  seenF3767 = T7;
  T6 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  envF3768 = T6;
  T5 = FUNSHELL(0,fun_maybe_declare_198,2);
  maybe_declareF3769 = T5;
  FUNINIT(maybe_declareF3769, 2,seenF3767,out_);
  T1 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF3768);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYmodule_name),T1);
  CALL2(1,VARREF(YgooSmacrosYdo),maybe_declareF3769,T0);
  T3 = FUNFAB(fun_199,2,mod_,maybe_declareF3769);
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T2 = CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T3,T4);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_201) {
  P local_name_,binding_;
  P x_1760F3770;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(local_name_, 0);
  ARG(binding_, 1);
  T2 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    x_1760F3770 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1760F3770,LITREF(lit_582));
    T4 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T3 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T4);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1760F3770,T3);
    CALL2(1,VARREF(YgooSioSportYputs),x_1760F3770,LITREF(lit_583));
    T6 = CALL1(1,VARREF(YevalSastYbinding_module_name),binding_);
    T5 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),T6);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1760F3770,T5);
    CALL2(1,VARREF(YgooSioSportYputs),x_1760F3770,LITREF(lit_584));
    T9 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),T9,local_name_);
    if (T8 != YPfalse) {
      T7 = LITREF(lit_585);
    } else {
      T10 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),local_name_);
      T7 = T10;
    }
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1760F3770,T7);
    T11 = CALL2(1,VARREF(YgooSioSportYputs),x_1760F3770,LITREF(lit_586));
    T0 = T11;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_202) {
  P binding_;
  P x_1765F3775;
  P x_1764F3774;
  P x_1763F3773;
  P x_1762F3772;
  P x_1761F3771;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(binding_, 0);
  T1 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
  if (T1 != YPfalse) {
    x_1761F3771 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1761F3771,LITREF(lit_590));
    T3 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T2 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T3);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1761F3771,T2);
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1761F3771,LITREF(lit_591));
    T14 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
    x_1762F3772 = T14;
    x_1763F3773 = VARREF(YgooSmacrosYEE);
    T6 = CALL2(1,x_1763F3773,x_1762F3772,LITREF(lit_151));
    if (T6 != YPfalse) {
      x_1764F3774 = FREEREF(1);
      CALL2(1,VARREF(YgooSioSportYputs),x_1764F3774,LITREF(lit_592));
      T7 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1764F3774,T7);
      T8 = CALL2(1,VARREF(YgooSioSportYputs),x_1764F3774,LITREF(lit_593));
      T5 = T8;
    } else {
      T10 = CALL2(1,x_1763F3773,x_1762F3772,LITREF(lit_153));
      if (T10 != YPfalse) {
        x_1765F3775 = FREEREF(1);
        CALL2(1,VARREF(YgooSioSportYputs),x_1765F3775,LITREF(lit_594));
        T11 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
        CALL2(1,VARREF(YgooSioSwriteYemit),x_1765F3775,T11);
        T12 = CALL2(1,VARREF(YgooSioSportYputs),x_1765F3775,LITREF(lit_595));
        T9 = T12;
      } else {
        T13 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_596));
        T9 = T13;
      }
      T5 = T9;
    }
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYgenerate_module_info) {
  P out_,mod_;
  P x_1771F3791;
  P x_1770F3790;
  P x_1769F3789;
  P x_1768F3788;
  P bindingF3787;
  P exported_asF3786;
  P tup35F3785;
  P x_1766F3784;
  P x_1759F3783;
  P nF3782;
  P x_1757F3781;
  P uses_namesF3780;
  P usesF3779;
  P envF3778;
  P info_nameF3777;
  P nameF3776;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  T41 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  nameF3776 = T41;
  T40 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nameF3776);
  info_nameF3777 = T40;
  T39 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  envF3778 = T39;
  T38 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF3778);
  usesF3779 = T38;
  T37 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYmodule_name),usesF3779);
  uses_namesF3780 = T37;
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_575));
  CALL2(1,VARREF(YevalSg2cYdeclare_imported_module_infos),out_,mod_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_576));
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF3780);
  x_1757F3781 = T8;
  for (;;) {
    P a231_0;
  loop231:
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1757F3781);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1757F3781);
      nF3782 = T7;
      x_1759F3783 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1759F3783,LITREF(lit_577));
      T3 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nF3782);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1759F3783,T3);
      T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1759F3783,LITREF(lit_578));
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1757F3781);
      a231_0 = T6;
      x_1757F3781 = a231_0;
      goto loop231;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
    break;
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_579));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_580));
  T9 = FUNFAB(fun_201,2,mod_,out_);
  T10 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  CALL2(1,VARREF(YevalSastYdo_named_static_global_bindings),T9,T10);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_587));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_588));
  T11 = FUNFAB(fun_202,2,mod_,out_);
  T12 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T11,T12);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_597));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_598));
  T31 = CALL1(1,VARREF(YevalSastYmodule_exports),mod_);
  T30 = CALL1(1,VARREF(YgooScolsScolYenum),T31);
  x_1766F3784 = T30;
  for (;;) {
    P a232_0;
  loop232:
    T15 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1766F3784);
    T14 = CALL1(1,VARREF(Ynot),T15);
    if (T14 != YPfalse) {
      T28 = CALL1(1,VARREF(YgooScolsScolYnow_key),x_1766F3784);
      T29 = CALL1(1,VARREF(YgooScolsScolYnow),x_1766F3784);
      T27 = CALL2(1,VARREF(Ytup),T28,T29);
      tup35F3785 = T27;
      T26 = CALL2(1,VARREF(YgooSmacrosYelt),tup35F3785,YPint((P)0));
      exported_asF3786 = T26;
      T25 = CALL2(1,VARREF(YgooSmacrosYelt),tup35F3785,YPint((P)1));
      bindingF3787 = T25;
      x_1768F3788 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1768F3788,LITREF(lit_599));
      T17 = CALL1(1,VARREF(YevalSastYbinding_name),bindingF3787);
      T16 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T17);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1768F3788,T16);
      CALL2(1,VARREF(YgooSioSportYputs),x_1768F3788,LITREF(lit_600));
      T20 = CALL1(1,VARREF(YevalSastYbinding_name),bindingF3787);
      T19 = CALL2(1,VARREF(YgooSmacrosYEE),T20,exported_asF3786);
      if (T19 != YPfalse) {
        T18 = LITREF(lit_601);
      } else {
        T21 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),exported_asF3786);
        T18 = T21;
      }
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1768F3788,T18);
      T22 = CALL2(1,VARREF(YgooSioSportYputs),x_1768F3788,LITREF(lit_602));
      T24 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1766F3784);
      a232_0 = T24;
      x_1766F3784 = a232_0;
      goto loop232;
      T13 = T23;
    } else {
      T13 = YPfalse;
    }
    break;
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_603));
  x_1769F3789 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1769F3789,LITREF(lit_604));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1769F3789,info_nameF3777);
  T32 = CALL2(1,VARREF(YgooSioSportYputs),x_1769F3789,LITREF(lit_605));
  x_1770F3790 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1770F3790,LITREF(lit_606));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1770F3790,info_nameF3777);
  T33 = CALL2(1,VARREF(YgooSioSportYputs),x_1770F3790,LITREF(lit_607));
  x_1771F3791 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1771F3791,LITREF(lit_608));
  T34 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),nameF3776);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1771F3791,T34);
  T35 = CALL2(1,VARREF(YgooSioSportYputs),x_1771F3791,LITREF(lit_609));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_610));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_611));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_612));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_613));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_614));
  T36 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_615));
UNLINK_STACK();
  QRET(T36);
}

FUNCODEDEF(fun_module_init_name_204) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),name_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_618),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_init_decl_205) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),name_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_621),T1,LITREF(lit_622));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_module_init_206) {
  P out_,mod_,form_;
  P x_1779F3804;
  P nF3803;
  P x_1777F3802;
  P x_1776F3801;
  P x_1775F3800;
  P x_1774F3799;
  P nF3798;
  P x_1772F3797;
  P uses_namesF3796;
  P usesF3795;
  P envF3794;
  P init_declF3793;
  P nameF3792;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  ARG(form_, 2);
  if (DYNREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    T28 = LITREF(lit_625);
  } else {
    T29 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T28 = T29;
  }
  nameF3792 = T28;
  T27 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nameF3792);
  init_declF3793 = T27;
  T26 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  envF3794 = T26;
  T25 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF3794);
  usesF3795 = T25;
  T24 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYmodule_name),usesF3795);
  uses_namesF3796 = T24;
  T0 = CALL1(1,VARREF(Ynot),DYNREF(YevalSg2cYTdynamic_linkingQT));
  if (T0 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_626));
    T9 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF3796);
    x_1772F3797 = T9;
    for (;;) {
      P a233_0;
    loop233:
      T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1772F3797);
      T2 = CALL1(1,VARREF(Ynot),T3);
      if (T2 != YPfalse) {
        T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_1772F3797);
        nF3798 = T8;
        x_1774F3799 = out_;
        CALL2(1,VARREF(YgooSioSportYputs),x_1774F3799,LITREF(lit_627));
        T4 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nF3798);
        CALL2(1,VARREF(YgooSioSwriteYemit),x_1774F3799,T4);
        T5 = CALL2(1,VARREF(YgooSioSportYputs),x_1774F3799,LITREF(lit_628));
        T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1772F3797);
        a233_0 = T7;
        x_1772F3797 = a233_0;
        goto loop233;
        T1 = T6;
      } else {
        T1 = YPfalse;
      }
      break;
    }
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_629));
  x_1775F3800 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1775F3800,LITREF(lit_630));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1775F3800,init_declF3793);
  T10 = CALL2(1,VARREF(YgooSioSportYputs),x_1775F3800,LITREF(lit_631));
  x_1776F3801 = out_;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1776F3801,init_declF3793);
  T11 = CALL2(1,VARREF(YgooSioSportYputs),x_1776F3801,LITREF(lit_632));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_633));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_634));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_635));
  T12 = CALL1(1,VARREF(Ynot),DYNREF(YevalSg2cYTdynamic_linkingQT));
  if (T12 != YPfalse) {
    T21 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF3796);
    x_1777F3802 = T21;
    for (;;) {
      P a234_0;
    loop234:
      T15 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1777F3802);
      T14 = CALL1(1,VARREF(Ynot),T15);
      if (T14 != YPfalse) {
        T20 = CALL1(1,VARREF(YgooScolsScolYnow),x_1777F3802);
        nF3803 = T20;
        x_1779F3804 = out_;
        CALL2(1,VARREF(YgooSioSportYputs),x_1779F3804,LITREF(lit_636));
        T16 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),nF3803);
        CALL2(1,VARREF(YgooSioSwriteYemit),x_1779F3804,T16);
        T17 = CALL2(1,VARREF(YgooSioSportYputs),x_1779F3804,LITREF(lit_637));
        T19 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1777F3802);
        a234_0 = T19;
        x_1777F3802 = a234_0;
        goto loop234;
        T13 = T18;
      } else {
        T13 = YPfalse;
      }
      break;
    }
    T22 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_638));
  } else {
  }
  CALL4(1,VARREF(YevalSg2cYto_c),form_,YPfalse,YPint((P)1),out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_639));
  T23 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_640));
UNLINK_STACK();
  QRET(T23);
}

FUNCODEDEF(fun_generate_main_207) {
  P out_,mod_;
  P x_1784F3811;
  P x_1783F3810;
  P x_1782F3809;
  P x_1781F3808;
  P x_1780F3807;
  P info_nameF3806;
  P nameF3805;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  T10 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  nameF3805 = T10;
  T9 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nameF3805);
  info_nameF3806 = T9;
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_643));
  x_1780F3807 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1780F3807,LITREF(lit_644));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1780F3807,info_nameF3806);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_1780F3807,LITREF(lit_645));
  x_1781F3808 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1781F3808,LITREF(lit_646));
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nameF3805);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1781F3808,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1781F3808,LITREF(lit_647));
  x_1782F3809 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1782F3809,LITREF(lit_648));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1782F3809,info_nameF3806);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1782F3809,LITREF(lit_649));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_650));
  x_1783F3810 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1783F3810,LITREF(lit_651));
  T4 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_652));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1783F3810,T4);
  T5 = CALL2(1,VARREF(YgooSioSportYputs),x_1783F3810,LITREF(lit_653));
  x_1784F3811 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1784F3811,LITREF(lit_654));
  T6 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),nameF3805);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1784F3811,T6);
  T7 = CALL2(1,VARREF(YgooSioSportYputs),x_1784F3811,LITREF(lit_655));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_656));
  T8 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_657));
UNLINK_STACK();
  QRET(T8);
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
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154,T155,T156;
DEFCREGS();
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
  T4 = VARREF_OR(YevalSg2cYmodule_loader_appname,YPfalse);
  T5 = fun_module_loader_appname_0;
  T3 = XCALL2(1,VARREF(YPdefine_method),T4,T5);
  VARSET(YevalSg2cYmodule_loader_appname,T3);
  lit_3 = YPPsym((P)"module-loader-appname-setter");
  lit_4 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T6 = YPsig(LITREF(lit_4),YPPlist(2,VARREF(YLstrG),VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_appname_setter_1 = YPmet(FUNCODEREF(fun_module_loader_appname_setter_1),LITREF(lit_3),T6,ENVNUL,PNUL,sloc(28));
  T8 = VARREF_OR(YevalSg2cYmodule_loader_appname_setter,YPfalse);
  T9 = fun_module_loader_appname_setter_1;
  T7 = XCALL2(1,VARREF(YPdefine_method),T8,T9);
  VARSET(YevalSg2cYmodule_loader_appname_setter,T7);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YevalSg2cYmodule_loader_appname),VARREF(YevalSg2cYmodule_loader_appname_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_5 = YPPsym((P)"module-loader-app-modname");
  lit_6 = YPPlist(1,YPPsym((P)"_x"));
  T10 = YPsig(LITREF(lit_6),YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_app_modname_2 = YPmet(FUNCODEREF(fun_module_loader_app_modname_2),LITREF(lit_5),T10,ENVNUL,PNUL,sloc(29));
  T12 = VARREF_OR(YevalSg2cYmodule_loader_app_modname,YPfalse);
  T13 = fun_module_loader_app_modname_2;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T13);
  VARSET(YevalSg2cYmodule_loader_app_modname,T11);
  lit_7 = YPPsym((P)"module-loader-app-modname-setter");
  lit_8 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T14 = YPsig(LITREF(lit_8),YPPlist(2,VARREF(YLsymG),VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_app_modname_setter_3 = YPmet(FUNCODEREF(fun_module_loader_app_modname_setter_3),LITREF(lit_7),T14,ENVNUL,PNUL,sloc(29));
  T16 = VARREF_OR(YevalSg2cYmodule_loader_app_modname_setter,YPfalse);
  T17 = fun_module_loader_app_modname_setter_3;
  T15 = XCALL2(1,VARREF(YPdefine_method),T16,T17);
  VARSET(YevalSg2cYmodule_loader_app_modname_setter,T15);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YevalSg2cYmodule_loader_app_modname),VARREF(YevalSg2cYmodule_loader_app_modname_setter),VARREF(YLsymG),VARREF(YPprop_unbound_error));
  lit_9 = YPPsym((P)"<g2c-module>");
  T19 = (P)YPpair(VARREF(YevalSastYLmoduleG),Ynil);
  T18 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_9),T19);
  VARSET(YevalSg2cYLg2c_moduleG,T18);
  lit_10 = YPPsym((P)"module-src-file");
  lit_11 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPsig(LITREF(lit_11),YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_src_file_4 = YPmet(FUNCODEREF(fun_module_src_file_4),LITREF(lit_10),T20,ENVNUL,PNUL,sloc(32));
  T22 = VARREF_OR(YevalSg2cYmodule_src_file,YPfalse);
  T23 = fun_module_src_file_4;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T23);
  VARSET(YevalSg2cYmodule_src_file,T21);
  lit_12 = YPPsym((P)"module-src-file-setter");
  lit_13 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T24 = YPsig(LITREF(lit_13),YPPlist(2,VARREF(YLstrG),VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_src_file_setter_5 = YPmet(FUNCODEREF(fun_module_src_file_setter_5),LITREF(lit_12),T24,ENVNUL,PNUL,sloc(32));
  T26 = VARREF_OR(YevalSg2cYmodule_src_file_setter,YPfalse);
  T27 = fun_module_src_file_setter_5;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T27);
  VARSET(YevalSg2cYmodule_src_file_setter,T25);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSg2cYLg2c_moduleG),VARREF(YevalSg2cYmodule_src_file),VARREF(YevalSg2cYmodule_src_file_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_14 = YPPsym((P)"module-mtime");
  lit_15 = YPPlist(1,YPPsym((P)"_x"));
  T28 = YPsig(LITREF(lit_15),YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_mtime_6 = YPmet(FUNCODEREF(fun_module_mtime_6),LITREF(lit_14),T28,ENVNUL,PNUL,sloc(33));
  T30 = VARREF_OR(YevalSg2cYmodule_mtime,YPfalse);
  T31 = fun_module_mtime_6;
  T29 = XCALL2(1,VARREF(YPdefine_method),T30,T31);
  VARSET(YevalSg2cYmodule_mtime,T29);
  lit_16 = YPPsym((P)"module-mtime-setter");
  lit_17 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T32 = YPsig(LITREF(lit_17),YPPlist(2,VARREF(YLfloG),VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_mtime_setter_7 = YPmet(FUNCODEREF(fun_module_mtime_setter_7),LITREF(lit_16),T32,ENVNUL,PNUL,sloc(33));
  T34 = VARREF_OR(YevalSg2cYmodule_mtime_setter,YPfalse);
  T35 = fun_module_mtime_setter_7;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T35);
  VARSET(YevalSg2cYmodule_mtime_setter,T33);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSg2cYLg2c_moduleG),VARREF(YevalSg2cYmodule_mtime),VARREF(YevalSg2cYmodule_mtime_setter),VARREF(YLfloG),VARREF(YPprop_unbound_error));
  lit_18 = YPPsym((P)"module-loader-module-type");
  lit_19 = YPPlist(1,YPPsym((P)"loader"));
  T36 = YPsig(LITREF(lit_19),YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_module_loader_module_type_8 = YPmet(FUNCODEREF(fun_module_loader_module_type_8),LITREF(lit_18),T36,ENVNUL,PNUL,sloc(35));
  T38 = VARREF_OR(YevalSastYmodule_loader_module_type,YPfalse);
  T39 = fun_module_loader_module_type_8;
  T37 = XCALL2(1,VARREF(YPdefine_method),T38,T39);
  VARSET(YevalSastYmodule_loader_module_type,T37);
  lit_20 = YPPsym((P)"load-module");
  lit_21 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  lit_22 = YPsb((P)"START");
  lit_23 = YPsb((P)"OPTIMIZE");
  lit_24 = Ynil;
  lit_25 = YPPlist(1,YPPsym((P)"name"));
  lit_26 = YPsb((P)"EMIT");
  T45 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T45,ENVNUL,PNUL,sloc(59));
  T44 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T44,ENVNUL,PNUL,sloc(59));
  T43 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T43,ENVNUL,PNUL,sloc(58));
  T42 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T42,ENVNUL,PNUL,sloc(58));
  T41 = YPsig(LITREF(lit_25),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T41,ENVNUL,PNUL,sloc(61));
  T40 = YPsig(LITREF(lit_21),YPPlist(2,VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  fun_load_module_14 = YPmet(FUNCODEREF(fun_load_module_14),LITREF(lit_20),T40,ENVNUL,PNUL,sloc(40));
  T47 = VARREF_OR(YevalSastYload_module,YPfalse);
  T48 = fun_load_module_14;
  T46 = XCALL2(1,VARREF(YPdefine_method),T47,T48);
  VARSET(YevalSastYload_module,T46);
  lit_27 = YPPsym((P)"module-up-to-date?");
  lit_28 = YPPlist(1,YPPsym((P)"mod"));
  T49 = YPsig(LITREF(lit_28),YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSg2cYmodule_up_to_dateQ = YPmet(FUNCODEREF(YevalSg2cYmodule_up_to_dateQ),LITREF(lit_27),T49,ENVNUL,PNUL,sloc(75));
  T50 = YevalSg2cYmodule_up_to_dateQ;
  VARSET(YevalSg2cYmodule_up_to_dateQ,T50);
  lit_29 = YPPsym((P)"purge-outdated-modules");
  lit_30 = YPPlist(1,YPPsym((P)"loader"));
  lit_31 = YPPlist(1,YPPsym((P)"mod"));
  lit_32 = YPPlist(1,YPPsym((P)"name"));
  lit_33 = YPsb((P)" has changed.\n");
  T53 = YPsig(LITREF(lit_31),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T53,ENVNUL,PNUL,sloc(83));
  T52 = YPsig(LITREF(lit_32),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T52,ENVNUL,PNUL,sloc(89));
  T51 = YPsig(LITREF(lit_30),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYpurge_outdated_modules = YPmet(FUNCODEREF(YevalSg2cYpurge_outdated_modules),LITREF(lit_29),T51,ENVNUL,PNUL,sloc(78));
  T54 = YevalSg2cYpurge_outdated_modules;
  VARSET(YevalSg2cYpurge_outdated_modules,T54);
  lit_34 = YPPsym((P)"g2c-def-app");
  lit_35 = YPPlist(2,YPPsym((P)"appname"),YPPsym((P)"modname"));
  T55 = YPsig(LITREF(lit_35),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSg2cYLg2c_module_loaderG),Ynil);
  YevalSg2cYg2c_def_app = YPmet(FUNCODEREF(YevalSg2cYg2c_def_app),LITREF(lit_34),T55,ENVNUL,PNUL,sloc(102));
  T56 = YevalSg2cYg2c_def_app;
  VARSET(YevalSg2cYg2c_def_app,T56);
  lit_36 = YPPsym((P)"g2c-build-app");
  lit_37 = YPPlist(1,YPPsym((P)"loader"));
  lit_38 = YPsb((P)"Searching for undefined global bindings.\n");
  T57 = YPsig(LITREF(lit_37),YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYg2c_build_app = YPmet(FUNCODEREF(YevalSg2cYg2c_build_app),LITREF(lit_36),T57,ENVNUL,PNUL,sloc(108));
  T58 = YevalSg2cYg2c_build_app;
  VARSET(YevalSg2cYg2c_build_app,T58);
  lit_39 = YPPsym((P)"g2c-test");
  lit_40 = YPPlist(1,YPPsym((P)"x"));
  lit_41 = YPsb((P)"g2c-");
  lit_42 = YPPsym((P)"eval/main");
  T59 = YPsig(LITREF(lit_40),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYg2c_test = YPmet(FUNCODEREF(YevalSg2cYg2c_test),LITREF(lit_39),T59,ENVNUL,PNUL,sloc(117));
  T60 = YevalSg2cYg2c_test;
  VARSET(YevalSg2cYg2c_test,T60);
  DYNDEFSET(YevalSg2cYTtmp_file_counterT,YPint((P)-1));
  lit_43 = YPPsym((P)"g2c-ast");
  lit_44 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"env"));
  lit_45 = YPsb((P)"exp-%d-%d");
  T67 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T67,ENVNUL,PNUL,sloc(129));
  T66 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T66,ENVNUL,PNUL,sloc(129));
  T65 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T65,ENVNUL,PNUL,sloc(129));
  T64 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_25 = YPmet(FUNCODEREF(fun_25),YPfalse,T64,ENVNUL,PNUL,sloc(129));
  T63 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T63,ENVNUL,PNUL,sloc(128));
  T62 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T62,ENVNUL,PNUL,sloc(128));
  T61 = YPsig(LITREF(lit_44),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_ast_28 = YPmet(FUNCODEREF(fun_g2c_ast_28),LITREF(lit_43),T61,ENVNUL,PNUL,sloc(122));
  T69 = VARREF_OR(YevalSg2cYg2c_ast,YPfalse);
  T70 = fun_g2c_ast_28;
  T68 = XCALL2(1,VARREF(YPdefine_method),T69,T70);
  VARSET(YevalSg2cYg2c_ast,T68);
  lit_46 = YPPsym((P)"g2c-exp");
  lit_47 = YPPlist(2,YPPsym((P)"exp"),YPPsym((P)"env"));
  T71 = YPsig(LITREF(lit_47),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_exp_29 = YPmet(FUNCODEREF(fun_g2c_exp_29),LITREF(lit_46),T71,ENVNUL,PNUL,sloc(134));
  T73 = VARREF_OR(YevalSg2cYg2c_exp,YPfalse);
  T74 = fun_g2c_exp_29;
  T72 = XCALL2(1,VARREF(YPdefine_method),T73,T74);
  VARSET(YevalSg2cYg2c_exp,T72);
  lit_48 = YPPsym((P)"compile-load");
  lit_49 = YPPlist(1,YPPsym((P)"name"));
  lit_50 = YPsb((P)".so");
  lit_51 = YPsb((P)".so");
  T75 = YPsig(LITREF(lit_49),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_compile_load_30 = YPmet(FUNCODEREF(fun_compile_load_30),LITREF(lit_48),T75,ENVNUL,PNUL,sloc(137));
  T77 = VARREF_OR(YevalSg2cYcompile_load,YPfalse);
  T78 = fun_compile_load_30;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T78);
  VARSET(YevalSg2cYcompile_load,T76);
  lit_52 = YPPsym((P)"g2c-eval");
  lit_53 = YPPlist(2,YPPsym((P)"exp"),YPPsym((P)"env"));
  T79 = YPsig(LITREF(lit_53),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_eval_31 = YPmet(FUNCODEREF(fun_g2c_eval_31),LITREF(lit_52),T79,ENVNUL,PNUL,sloc(141));
  T81 = VARREF_OR(YevalStopYg2c_eval,YPfalse);
  T82 = fun_g2c_eval_31;
  T80 = XCALL2(1,VARREF(YPdefine_method),T81,T82);
  VARSET(YevalStopYg2c_eval,T80);
  lit_54 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"env"));
  T83 = YPsig(LITREF(lit_54),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_eval_32 = YPmet(FUNCODEREF(fun_g2c_eval_32),LITREF(lit_52),T83,ENVNUL,PNUL,sloc(145));
  T85 = VARREF_OR(YevalStopYg2c_eval,YPfalse);
  T86 = fun_g2c_eval_32;
  T84 = XCALL2(1,VARREF(YPdefine_method),T85,T86);
  VARSET(YevalStopYg2c_eval,T84);
  lit_55 = YPsb((P)"g2c");
  T87 = XCALL2(1,VARREF(YevalSg2cYg2c_def_app),LITREF(lit_55),LITREF(lit_42));
  VARSET(YevalSg2cYTg2c_appT,T87);
  lit_56 = YPPsym((P)"g2c-top");
  T88 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_g2c_top_33 = YPmet(FUNCODEREF(fun_g2c_top_33),LITREF(lit_56),T88,ENVNUL,PNUL,sloc(151));
  T90 = VARREF_OR(YevalSg2cYg2c_top,YPfalse);
  T91 = fun_g2c_top_33;
  T89 = XCALL2(1,VARREF(YPdefine_method),T90,T91);
  VARSET(YevalSg2cYg2c_top,T89);
  VARSET(YevalSg2cYg2c_goo,VARREF(YevalSg2cYg2c_top));
  lit_57 = YPPsym((P)"g2c-clean");
  lit_58 = YPsb((P)"g2c");
  T92 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_g2c_clean_34 = YPmet(FUNCODEREF(fun_g2c_clean_34),LITREF(lit_57),T92,ENVNUL,PNUL,sloc(153));
  T94 = VARREF_OR(YevalSg2cYg2c_clean,YPfalse);
  T95 = fun_g2c_clean_34;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T95);
  VARSET(YevalSg2cYg2c_clean,T93);
  lit_59 = YPPsym((P)"compute-ast");
  lit_60 = YPPlist(2,YPPsym((P)"filename"),YPPsym((P)"ct-env"));
  lit_61 = YPsb((P)"READ");
  lit_62 = YPsb((P)"AST");
  T96 = YPsig(LITREF(lit_60),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compute_ast_35 = YPmet(FUNCODEREF(fun_compute_ast_35),LITREF(lit_59),T96,ENVNUL,PNUL,sloc(159));
  T98 = VARREF_OR(YevalSg2cYcompute_ast,YPfalse);
  T99 = fun_compute_ast_35;
  T97 = XCALL2(1,VARREF(YPdefine_method),T98,T99);
  VARSET(YevalSg2cYcompute_ast,T97);
  lit_63 = YPPsym((P)"compute-program");
  lit_64 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_65 = YPsb((P)"ANA");
  lit_66 = YPsb((P)"BOX");
  lit_67 = YPsb((P)"LFT");
  lit_68 = YPsb((P)"EXT");
  lit_69 = YPsb((P)"CLO");
  lit_70 = YPsb((P)"TMP");
  lit_71 = YPsb((P)"REG");
  T100 = YPsig(LITREF(lit_64),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compute_program_36 = YPmet(FUNCODEREF(fun_compute_program_36),LITREF(lit_63),T100,ENVNUL,PNUL,sloc(168));
  T102 = VARREF_OR(YevalSg2cYcompute_program,YPfalse);
  T103 = fun_compute_program_36;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T103);
  VARSET(YevalSg2cYcompute_program,T101);
  lit_72 = YPPsym((P)"generate-c-module");
  lit_73 = YPPlist(4,YPPsym((P)"out"),YPPsym((P)"e"),YPPsym((P)"prg"),YPPsym((P)"mod"));
  T104 = YPsig(LITREF(lit_73),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_c_module_37 = YPmet(FUNCODEREF(fun_generate_c_module_37),LITREF(lit_72),T104,ENVNUL,PNUL,sloc(194));
  T106 = VARREF_OR(YevalSg2cYgenerate_c_module,YPfalse);
  T107 = fun_generate_c_module_37;
  T105 = XCALL2(1,VARREF(YPdefine_method),T106,T107);
  VARSET(YevalSg2cYgenerate_c_module,T105);
  lit_74 = YPPsym((P)"generate-c-application");
  lit_75 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"mod"));
  lit_76 = YPsb((P)"-init");
  T110 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T110,ENVNUL,PNUL,sloc(210));
  T109 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T109,ENVNUL,PNUL,sloc(210));
  T108 = YPsig(LITREF(lit_75),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_c_application_40 = YPmet(FUNCODEREF(fun_generate_c_application_40),LITREF(lit_74),T108,ENVNUL,PNUL,sloc(206));
  T112 = VARREF_OR(YevalSg2cYgenerate_c_application,YPfalse);
  T113 = fun_generate_c_application_40;
  T111 = XCALL2(1,VARREF(YPdefine_method),T112,T113);
  VARSET(YevalSg2cYgenerate_c_application,T111);
  lit_77 = YPPlist(1,YPPsym((P)"exp"));
  lit_78 = YPPlist(1,YPPsym((P)"return"));
  lit_79 = YPPsym((P)"x-1560");
  lit_80 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_81 = YPPsym((P)"for-mods");
  lit_82 = YPsb((P)"Match Pattern Failure");
  lit_83 = YPPsym((P)"do-module-loader-modules");
  lit_84 = YPPsym((P)"fun");
  lit_85 = Ynil;
  T116 = YPsig(LITREF(lit_80),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1560_41 = YPmet(FUNCODEREF(fun_x_1560_41),LITREF(lit_79),T116,ENVNUL,PNUL,YPfalse);
  T115 = YPsig(LITREF(lit_78),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T115,ENVNUL,PNUL,YPfalse);
  T114 = YPsig(LITREF(lit_77),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T114,ENVNUL,PNUL,YPfalse);
  T117 = fun_43;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"for-mods"),T117);
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
  T128 = YPsig(LITREF(lit_96),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T128,ENVNUL,PNUL,sloc(230));
  T127 = YPsig(LITREF(lit_95),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T127,ENVNUL,PNUL,sloc(229));
  T126 = YPsig(LITREF(lit_103),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_put_obj_46 = YPmet(FUNCODEREF(fun_put_obj_46),LITREF(lit_102),T126,ENVNUL,PNUL,sloc(234));
  T125 = YPsig(LITREF(lit_106),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T125,ENVNUL,PNUL,sloc(238));
  T124 = YPsig(LITREF(lit_108),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T124,ENVNUL,PNUL,sloc(239));
  T123 = YPsig(LITREF(lit_101),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T123,ENVNUL,PNUL,sloc(233));
  T122 = YPsig(LITREF(lit_115),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T122,ENVNUL,PNUL,sloc(245));
  T121 = YPsig(LITREF(lit_114),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T121,ENVNUL,PNUL,sloc(244));
  T120 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T120,ENVNUL,PNUL,sloc(225));
  T119 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T119,ENVNUL,PNUL,sloc(225));
  T118 = YPsig(LITREF(lit_87),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_generate_makefile_54 = YPmet(FUNCODEREF(fun_generate_makefile_54),LITREF(lit_86),T118,ENVNUL,PNUL,sloc(219));
  T130 = VARREF_OR(YevalSg2cYgenerate_makefile,YPfalse);
  T131 = fun_generate_makefile_54;
  T129 = XCALL2(1,VARREF(YPdefine_method),T130,T131);
  VARSET(YevalSg2cYgenerate_makefile,T129);
  lit_119 = YPPsym((P)"pp");
  lit_120 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T132 = YPsig(LITREF(lit_120),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_pp_55 = YPmet(FUNCODEREF(fun_pp_55),LITREF(lit_119),T132,ENVNUL,PNUL,sloc(254));
  T134 = VARREF_OR(YevalSg2cYpp,YPfalse);
  T135 = fun_pp_55;
  T133 = XCALL2(1,VARREF(YPdefine_method),T134,T135);
  VARSET(YevalSg2cYpp,T133);
  lit_121 = YPsb((P)"_mod");
  VARSET(YevalSg2cYDnow_mod_var_name,LITREF(lit_121));
  lit_122 = YPPsym((P)"generate-header");
  lit_123 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"modname"));
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
  T136 = YPsig(LITREF(lit_123),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_header_56 = YPmet(FUNCODEREF(fun_generate_header_56),LITREF(lit_122),T136,ENVNUL,PNUL,sloc(260));
  T138 = VARREF_OR(YevalSg2cYgenerate_header,YPfalse);
  T139 = fun_generate_header_56;
  T137 = XCALL2(1,VARREF(YPdefine_method),T138,T139);
  VARSET(YevalSg2cYgenerate_header,T137);
  lit_141 = YPPsym((P)"generate-trailer");
  lit_142 = YPPlist(1,YPPsym((P)"out"));
  lit_143 = YPsb((P)"\n/* END OF GENERATED CODE. */\n");
  T140 = YPsig(LITREF(lit_142),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_generate_trailer_57 = YPmet(FUNCODEREF(fun_generate_trailer_57),LITREF(lit_141),T140,ENVNUL,PNUL,sloc(275));
  T142 = VARREF_OR(YevalSg2cYgenerate_trailer,YPfalse);
  T143 = fun_generate_trailer_57;
  T141 = XCALL2(1,VARREF(YPdefine_method),T142,T143);
  VARSET(YevalSg2cYgenerate_trailer,T141);
  lit_144 = YPPsym((P)"generate-global-environment");
  lit_145 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"mod"));
  lit_146 = YPsb((P)"\n/* MODULE ENVIRONMENT: ");
  lit_147 = YPsb((P)" */\n\n");
  lit_148 = YPPlist(1,YPPsym((P)"binding"));
  T145 = YPsig(LITREF(lit_148),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_58 = YPmet(FUNCODEREF(fun_58),YPfalse,T145,ENVNUL,PNUL,sloc(288));
  T144 = YPsig(LITREF(lit_145),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_global_environment_59 = YPmet(FUNCODEREF(fun_generate_global_environment_59),LITREF(lit_144),T144,ENVNUL,PNUL,sloc(285));
  T147 = VARREF_OR(YevalSg2cYgenerate_global_environment,YPfalse);
  T148 = fun_generate_global_environment_59;
  T146 = XCALL2(1,VARREF(YPdefine_method),T147,T148);
  VARSET(YevalSg2cYgenerate_global_environment,T146);
  lit_149 = YPPsym((P)"generate-global-binding");
  lit_150 = YPPlist(3,YPPsym((P)"out"),YPPsym((P)"imported?"),YPPsym((P)"gb"));
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
  T149 = YPsig(LITREF(lit_150),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_global_binding_60 = YPmet(FUNCODEREF(fun_generate_global_binding_60),LITREF(lit_149),T149,ENVNUL,PNUL,sloc(293));
  T151 = VARREF_OR(YevalSg2cYgenerate_global_binding,YPfalse);
  T152 = fun_generate_global_binding_60;
  T150 = XCALL2(1,VARREF(YPdefine_method),T151,T152);
  VARSET(YevalSg2cYgenerate_global_binding,T150);
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
  T153 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDmodule_separator),YPint((P)0));
  VARSET(YevalSg2cYDmodule_marker,T153);
  T156 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDlocal_suffix),YPint((P)0));
  T155 = VARSET(YevalSg2cYDlocal_marker,T156);
  T154 = T155;
  return T154;
}

P YevalSg2cY___main_1___() {
  P iF3821;
  P x_1593F3820;
  P iF3819;
  P x_1591F3818;
  P mangleF3817;
  P x_1589F3816;
  P iF3815;
  P x_1587F3814;
  P tableF3813;
  P vecF3812;
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
  P T256,T257;
DEFCREGS();
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
  T6 = YPsig(LITREF(lit_188),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YevalSg2cYchar_buffer_as_string = YPmet(FUNCODEREF(YevalSg2cYchar_buffer_as_string),LITREF(lit_187),T6,ENVNUL,PNUL,sloc(336));
  T7 = YevalSg2cYchar_buffer_as_string;
  VARSET(YevalSg2cYchar_buffer_as_string,T7);
  lit_189 = YPsb((P)"\\t");
  lit_190 = YPsb((P)"\\f");
  lit_191 = YPsb((P)"\\r");
  lit_192 = YPsb((P)"\\n");
  lit_193 = YPsb((P)"\\\"");
  lit_194 = YPsb((P)"\\\\");
  T16 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T15 = XCALL2(1,VARREF(YgooScolsScolYfill),T16,YPfalse);
  vecF3812 = T15;
  T8 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)9));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_189),vecF3812,T8);
  T9 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)12));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_190),vecF3812,T9);
  T10 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)13));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_191),vecF3812,T10);
  T11 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)10));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_192),vecF3812,T11);
  T12 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)34));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_193),vecF3812,T12);
  T13 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)92));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_194),vecF3812,T13);
  T14 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),vecF3812);
  VARSET(YevalSg2cYDc_escapes,T14);
  lit_195 = YPPsym((P)"mangle-string-literal");
  lit_196 = YPPlist(1,YPPsym((P)"str"));
  T17 = YPsig(LITREF(lit_196),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_62 = YPmet(FUNCODEREF(fun_mangle_string_literal_62),LITREF(lit_195),T17,ENVNUL,PNUL,sloc(357));
  T19 = VARREF_OR(YevalSg2cYmangle_string_literal,YPfalse);
  T20 = fun_mangle_string_literal_62;
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T20);
  VARSET(YevalSg2cYmangle_string_literal,T18);
  lit_197 = YPPlist(1,YPPsym((P)"sym"));
  T21 = YPsig(LITREF(lit_197),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_63 = YPmet(FUNCODEREF(fun_mangle_string_literal_63),LITREF(lit_195),T21,ENVNUL,PNUL,sloc(372));
  T23 = VARREF_OR(YevalSg2cYmangle_string_literal,YPfalse);
  T24 = fun_mangle_string_literal_63;
  T22 = XCALL2(1,VARREF(YPdefine_method),T23,T24);
  VARSET(YevalSg2cYmangle_string_literal,T22);
  lit_198 = YPsb((P)"0123456789");
  VARSET(YevalSg2cYDnumber_characters,LITREF(lit_198));
  lit_199 = YPPsym((P)"mangle-integer");
  lit_200 = YPPlist(1,YPPsym((P)"number"));
  lit_201 = YPPsym((P)"process-integer");
  lit_202 = YPPlist(2,YPPsym((P)"number"),YPPsym((P)"index"));
  T26 = YPsig(LITREF(lit_202),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_process_integer_64 = YPmet(FUNCODEREF(fun_process_integer_64),LITREF(lit_201),T26,ENVNUL,PNUL,sloc(379));
  T25 = YPsig(LITREF(lit_200),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_integer_65 = YPmet(FUNCODEREF(fun_mangle_integer_65),LITREF(lit_199),T25,ENVNUL,PNUL,sloc(377));
  T28 = VARREF_OR(YevalSg2cYmangle_integer,YPfalse);
  T29 = fun_mangle_integer_65;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T29);
  VARSET(YevalSg2cYmangle_integer,T27);
  T73 = XCALL2(1,VARREF(YgooSmathYA),VARREF(YevalSg2cYDmax_character_code),YPint((P)1));
  T72 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),T73);
  tableF3813 = T72;
  T39 = XCALL3(1,VARREF(YgooScolsSrangeYrange),VARREF(YevalSg2cYDmin_character_code),VARREF(YgooSmagYLE),VARREF(YevalSg2cYDmax_character_code));
  T38 = XCALL1(1,VARREF(YgooScolsScolYenum),T39);
  x_1587F3814 = T38;
  for (;;) {
    P a235_0;
  loop235:
    T32 = XCALL1(1,VARREF(YgooScolsScolYfinQ),x_1587F3814);
    T31 = XCALL1(1,VARREF(Ynot),T32);
    if (T31 != YPfalse) {
      T37 = XCALL1(1,VARREF(YgooScolsScolYnow),x_1587F3814);
      iF3815 = T37;
      T34 = XCALL1(1,VARREF(YevalSg2cYmangle_integer),iF3815);
      T33 = XCALL3(1,VARREF(YgooSmacrosYcat),VARREF(YevalSg2cYDescape_separator),T34,VARREF(YevalSg2cYDescape_separator));
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),T33,tableF3813,iF3815);
      T36 = XCALL1(1,VARREF(YgooScolsScolYnxt),x_1587F3814);
      a235_0 = T36;
      x_1587F3814 = a235_0;
      goto loop235;
      T30 = T35;
    } else {
      T30 = YPfalse;
    }
    break;
  }
  T49 = XCALL1(1,VARREF(YgooScolsScolYenum),VARREF(YevalSg2cYDmangles_data));
  x_1589F3816 = T49;
  for (;;) {
    P a236_0;
  loop236:
    T42 = XCALL1(1,VARREF(YgooScolsScolYfinQ),x_1589F3816);
    T41 = XCALL1(1,VARREF(Ynot),T42);
    if (T41 != YPfalse) {
      T48 = XCALL1(1,VARREF(YgooScolsScolYnow),x_1589F3816);
      mangleF3817 = T48;
      T43 = XCALL2(1,VARREF(YgooSmacrosYelt),mangleF3817,YPint((P)1));
      T45 = XCALL2(1,VARREF(YgooSmacrosYelt),mangleF3817,YPint((P)0));
      T44 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T45);
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),T43,tableF3813,T44);
      T47 = XCALL1(1,VARREF(YgooScolsScolYnxt),x_1589F3816);
      a236_0 = T47;
      x_1589F3816 = a236_0;
      goto loop236;
      T40 = T46;
    } else {
      T40 = YPfalse;
    }
    break;
  }
  T59 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)97));
  T60 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)122));
  T58 = XCALL3(1,VARREF(YgooScolsSrangeYrange),T59,VARREF(YgooSmagYLE),T60);
  T57 = XCALL1(1,VARREF(YgooScolsScolYenum),T58);
  x_1591F3818 = T57;
  for (;;) {
    P a237_0;
  loop237:
    T52 = XCALL1(1,VARREF(YgooScolsScolYfinQ),x_1591F3818);
    T51 = XCALL1(1,VARREF(Ynot),T52);
    if (T51 != YPfalse) {
      T56 = XCALL1(1,VARREF(YgooScolsScolYnow),x_1591F3818);
      iF3819 = T56;
      T53 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF3819);
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),T53,tableF3813,iF3819);
      T55 = XCALL1(1,VARREF(YgooScolsScolYnxt),x_1591F3818);
      a237_0 = T55;
      x_1591F3818 = a237_0;
      goto loop237;
      T50 = T54;
    } else {
      T50 = YPfalse;
    }
    break;
  }
  T70 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)48));
  T71 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)57));
  T69 = XCALL3(1,VARREF(YgooScolsSrangeYrange),T70,VARREF(YgooSmagYLE),T71);
  T68 = XCALL1(1,VARREF(YgooScolsScolYenum),T69);
  x_1593F3820 = T68;
  for (;;) {
    P a238_0;
  loop238:
    T63 = XCALL1(1,VARREF(YgooScolsScolYfinQ),x_1593F3820);
    T62 = XCALL1(1,VARREF(Ynot),T63);
    if (T62 != YPfalse) {
      T67 = XCALL1(1,VARREF(YgooScolsScolYnow),x_1593F3820);
      iF3821 = T67;
      T64 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF3821);
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),T64,tableF3813,iF3821);
      T66 = XCALL1(1,VARREF(YgooScolsScolYnxt),x_1593F3820);
      a238_0 = T66;
      x_1593F3820 = a238_0;
      goto loop238;
      T61 = T65;
    } else {
      T61 = YPfalse;
    }
    break;
  }
  VARSET(YevalSg2cYDname_mangler_table,tableF3813);
  lit_203 = YPPsym((P)"mangler-reset");
  lit_204 = YPPlist(1,YPPsym((P)"buffer"));
  T74 = YPsig(LITREF(lit_204),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangler_reset = YPmet(FUNCODEREF(YevalSg2cYmangler_reset),LITREF(lit_203),T74,ENVNUL,PNUL,sloc(408));
  T75 = YevalSg2cYmangler_reset;
  VARSET(YevalSg2cYmangler_reset,T75);
  lit_205 = YPPsym((P)"mangle-name-into");
  lit_206 = YPPlist(2,YPPsym((P)"buf"),YPPsym((P)"name"));
  T76 = YPsig(LITREF(lit_206),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_name_into = YPmet(FUNCODEREF(YevalSg2cYmangle_name_into),LITREF(lit_205),T76,ENVNUL,PNUL,sloc(411));
  T77 = YevalSg2cYmangle_name_into;
  VARSET(YevalSg2cYmangle_name_into,T77);
  lit_207 = YPPsym((P)"mangle-raw-name");
  lit_208 = YPPlist(1,YPPsym((P)"name"));
  T78 = YPsig(LITREF(lit_208),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_68 = YPmet(FUNCODEREF(fun_mangle_raw_name_68),LITREF(lit_207),T78,ENVNUL,PNUL,sloc(416));
  T80 = VARREF_OR(YevalSg2cYmangle_raw_name,YPfalse);
  T81 = fun_mangle_raw_name_68;
  T79 = XCALL2(1,VARREF(YPdefine_method),T80,T81);
  VARSET(YevalSg2cYmangle_raw_name,T79);
  lit_209 = YPPlist(1,YPPsym((P)"name"));
  T82 = YPsig(LITREF(lit_209),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_69 = YPmet(FUNCODEREF(fun_mangle_raw_name_69),LITREF(lit_207),T82,ENVNUL,PNUL,sloc(421));
  T84 = VARREF_OR(YevalSg2cYmangle_raw_name,YPfalse);
  T85 = fun_mangle_raw_name_69;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T85);
  VARSET(YevalSg2cYmangle_raw_name,T83);
  lit_210 = YPPsym((P)"mangle-local-name");
  lit_211 = YPPlist(1,YPPsym((P)"name"));
  T86 = YPsig(LITREF(lit_211),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_70 = YPmet(FUNCODEREF(fun_mangle_local_name_70),LITREF(lit_210),T86,ENVNUL,PNUL,sloc(424));
  T88 = VARREF_OR(YevalSg2cYmangle_local_name,YPfalse);
  T89 = fun_mangle_local_name_70;
  T87 = XCALL2(1,VARREF(YPdefine_method),T88,T89);
  VARSET(YevalSg2cYmangle_local_name,T87);
  lit_212 = YPPlist(1,YPPsym((P)"name"));
  T90 = YPsig(LITREF(lit_212),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_71 = YPmet(FUNCODEREF(fun_mangle_local_name_71),LITREF(lit_210),T90,ENVNUL,PNUL,sloc(430));
  T92 = VARREF_OR(YevalSg2cYmangle_local_name,YPfalse);
  T93 = fun_mangle_local_name_71;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T93);
  VARSET(YevalSg2cYmangle_local_name,T91);
  lit_213 = YPPsym((P)"buf-cat2!");
  lit_214 = YPPlist(2,YPPsym((P)"buf"),YPPsym((P)"name"));
  T94 = YPsig(LITREF(lit_214),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYbuf_cat2X = YPmet(FUNCODEREF(YevalSg2cYbuf_cat2X),LITREF(lit_213),T94,ENVNUL,PNUL,sloc(434));
  T95 = YevalSg2cYbuf_cat2X;
  VARSET(YevalSg2cYbuf_cat2X,T95);
  lit_215 = YPPsym((P)"mangle-module-into");
  lit_216 = YPPlist(2,YPPsym((P)"buf"),YPPsym((P)"mod"));
  T96 = YPsig(LITREF(lit_216),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_mangle_module_into_73 = YPmet(FUNCODEREF(fun_mangle_module_into_73),LITREF(lit_215),T96,ENVNUL,PNUL,sloc(441));
  T98 = VARREF_OR(YevalSg2cYmangle_module_into,YPfalse);
  T99 = fun_mangle_module_into_73;
  T97 = XCALL2(1,VARREF(YPdefine_method),T98,T99);
  VARSET(YevalSg2cYmangle_module_into,T97);
  lit_217 = YPPsym((P)"mangle-global-name");
  lit_218 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"name"));
  T100 = YPsig(LITREF(lit_218),YPPlist(2,VARREF(YLanyG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_74 = YPmet(FUNCODEREF(fun_mangle_global_name_74),LITREF(lit_217),T100,ENVNUL,PNUL,sloc(448));
  T102 = VARREF_OR(YevalSg2cYmangle_global_name,YPfalse);
  T103 = fun_mangle_global_name_74;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T103);
  VARSET(YevalSg2cYmangle_global_name,T101);
  lit_219 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"name"));
  T104 = YPsig(LITREF(lit_219),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_75 = YPmet(FUNCODEREF(fun_mangle_global_name_75),LITREF(lit_217),T104,ENVNUL,PNUL,sloc(459));
  T106 = VARREF_OR(YevalSg2cYmangle_global_name,YPfalse);
  T107 = fun_mangle_global_name_75;
  T105 = XCALL2(1,VARREF(YPdefine_method),T106,T107);
  VARSET(YevalSg2cYmangle_global_name,T105);
  lit_220 = YPPsym((P)"mangle-boot-name");
  lit_221 = YPPlist(1,YPPsym((P)"name"));
  T108 = YPsig(LITREF(lit_221),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_boot_name = YPmet(FUNCODEREF(YevalSg2cYmangle_boot_name),LITREF(lit_220),T108,ENVNUL,PNUL,sloc(464));
  T109 = YevalSg2cYmangle_boot_name;
  VARSET(YevalSg2cYmangle_boot_name,T109);
  lit_222 = YPPsym((P)"mangle-quotation-name");
  lit_223 = YPPlist(1,YPPsym((P)"name"));
  lit_224 = YPsb((P)"lit_");
  T110 = YPsig(LITREF(lit_223),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_quotation_name = YPmet(FUNCODEREF(YevalSg2cYmangle_quotation_name),LITREF(lit_222),T110,ENVNUL,PNUL,sloc(467));
  T111 = YevalSg2cYmangle_quotation_name;
  VARSET(YevalSg2cYmangle_quotation_name,T111);
  lit_225 = YPPsym((P)"mangle-binding");
  lit_226 = YPPlist(1,YPPsym((P)"binding"));
  lit_227 = YPPsym((P)"quotation");
  T112 = YPsig(LITREF(lit_226),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_78 = YPmet(FUNCODEREF(fun_mangle_binding_78),LITREF(lit_225),T112,ENVNUL,PNUL,sloc(473));
  T114 = VARREF_OR(YevalSg2cYmangle_binding,YPfalse);
  T115 = fun_mangle_binding_78;
  T113 = XCALL2(1,VARREF(YPdefine_method),T114,T115);
  VARSET(YevalSg2cYmangle_binding,T113);
  lit_228 = YPPsym((P)"mangle-local-marked-name");
  lit_229 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"marker"));
  T116 = YPsig(LITREF(lit_229),YPPlist(2,VARREF(YLstrG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_local_marked_name = YPmet(FUNCODEREF(YevalSg2cYmangle_local_marked_name),LITREF(lit_228),T116,ENVNUL,PNUL,sloc(480));
  T117 = YevalSg2cYmangle_local_marked_name;
  VARSET(YevalSg2cYmangle_local_marked_name,T117);
  lit_230 = YPPlist(1,YPPsym((P)"binding"));
  T118 = YPsig(LITREF(lit_230),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_80 = YPmet(FUNCODEREF(fun_mangle_binding_80),LITREF(lit_225),T118,ENVNUL,PNUL,sloc(487));
  T120 = VARREF_OR(YevalSg2cYmangle_binding,YPfalse);
  T121 = fun_mangle_binding_80;
  T119 = XCALL2(1,VARREF(YPdefine_method),T120,T121);
  VARSET(YevalSg2cYmangle_binding,T119);
  lit_231 = YPPlist(1,YPPsym((P)"binding"));
  T122 = YPsig(LITREF(lit_231),YPPlist(1,VARREF(YevalSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_81 = YPmet(FUNCODEREF(fun_mangle_binding_81),LITREF(lit_225),T122,ENVNUL,PNUL,sloc(491));
  T124 = VARREF_OR(YevalSg2cYmangle_binding,YPfalse);
  T125 = fun_mangle_binding_81;
  T123 = XCALL2(1,VARREF(YPdefine_method),T124,T125);
  VARSET(YevalSg2cYmangle_binding,T123);
  lit_232 = YPPlist(1,YPPsym((P)"exp"));
  lit_233 = YPPlist(1,YPPsym((P)"return"));
  lit_234 = YPPsym((P)"x-1604");
  lit_235 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_236 = YPPsym((P)"for-commas");
  lit_237 = YPPsym((P)"let");
  lit_238 = YPPsym((P)"for");
  lit_239 = YPPsym((P)"first?");
  lit_240 = YPPsym((P)"first-then");
  lit_241 = YPPsym((P)"op");
  lit_242 = YPPsym((P)"unless");
  lit_243 = YPPsym((P)"put");
  T128 = YPsig(LITREF(lit_235),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1604_82 = YPmet(FUNCODEREF(fun_x_1604_82),LITREF(lit_234),T128,ENVNUL,PNUL,YPfalse);
  T127 = YPsig(LITREF(lit_233),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_83 = YPmet(FUNCODEREF(fun_83),YPfalse,T127,ENVNUL,PNUL,YPfalse);
  T126 = YPsig(LITREF(lit_232),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_84 = YPmet(FUNCODEREF(fun_84),YPfalse,T126,ENVNUL,PNUL,YPfalse);
  T129 = fun_84;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"for-commas"),T129);
  lit_244 = YPPlist(1,YPPsym((P)"exp"));
  lit_245 = YPPlist(1,YPPsym((P)"return"));
  lit_246 = YPPsym((P)"x-1608");
  lit_247 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_248 = YPPsym((P)"between-parentheses");
  T132 = YPsig(LITREF(lit_247),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1608_85 = YPmet(FUNCODEREF(fun_x_1608_85),LITREF(lit_246),T132,ENVNUL,PNUL,YPfalse);
  T131 = YPsig(LITREF(lit_245),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_86 = YPmet(FUNCODEREF(fun_86),YPfalse,T131,ENVNUL,PNUL,YPfalse);
  T130 = YPsig(LITREF(lit_244),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T130,ENVNUL,PNUL,YPfalse);
  T133 = fun_87;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"between-parentheses"),T133);
  lit_249 = YPPlist(1,YPPsym((P)"exp"));
  lit_250 = YPPlist(1,YPPsym((P)"return"));
  lit_251 = YPPsym((P)"x-1612");
  lit_252 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_253 = YPPsym((P)"between-parentheses-comma-separated");
  T136 = YPsig(LITREF(lit_252),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1612_88 = YPmet(FUNCODEREF(fun_x_1612_88),LITREF(lit_251),T136,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(LITREF(lit_250),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_89 = YPmet(FUNCODEREF(fun_89),YPfalse,T135,ENVNUL,PNUL,YPfalse);
  T134 = YPsig(LITREF(lit_249),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_90 = YPmet(FUNCODEREF(fun_90),YPfalse,T134,ENVNUL,PNUL,YPfalse);
  T137 = fun_90;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"between-parentheses-comma-separated"),T137);
  lit_254 = YPPsym((P)"gen-result");
  lit_255 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_256 = YPsb((P)"T");
  lit_257 = YPsb((P)" = ");
  T138 = YPsig(LITREF(lit_255),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_gen_result_91 = YPmet(FUNCODEREF(fun_gen_result_91),LITREF(lit_254),T138,ENVNUL,PNUL,sloc(523));
  T140 = VARREF_OR(YevalSg2cYgen_result,YPfalse);
  T141 = fun_gen_result_91;
  T139 = XCALL2(1,VARREF(YPdefine_method),T140,T141);
  VARSET(YevalSg2cYgen_result,T139);
  lit_258 = YPPsym((P)"gen-depth");
  lit_259 = YPPlist(2,YPPsym((P)"d"),YPPsym((P)"out"));
  lit_260 = YPsb((P)"  ");
  T142 = YPsig(LITREF(lit_259),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_depth_92 = YPmet(FUNCODEREF(fun_gen_depth_92),LITREF(lit_258),T142,ENVNUL,PNUL,sloc(527));
  T144 = VARREF_OR(YevalSg2cYgen_depth,YPfalse);
  T145 = fun_gen_depth_92;
  T143 = XCALL2(1,VARREF(YPdefine_method),T144,T145);
  VARSET(YevalSg2cYgen_depth,T143);
  lit_261 = YPPlist(1,YPPsym((P)"exp"));
  lit_262 = YPPlist(1,YPPsym((P)"return"));
  lit_263 = YPPsym((P)"x-1619");
  lit_264 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_265 = YPPsym((P)"with-statement");
  lit_266 = YPPsym((P)"seq");
  lit_267 = YPPsym((P)"puts");
  lit_268 = YPsb((P)";\n");
  T148 = YPsig(LITREF(lit_264),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1619_93 = YPmet(FUNCODEREF(fun_x_1619_93),LITREF(lit_263),T148,ENVNUL,PNUL,YPfalse);
  T147 = YPsig(LITREF(lit_262),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_94 = YPmet(FUNCODEREF(fun_94),YPfalse,T147,ENVNUL,PNUL,YPfalse);
  T146 = YPsig(LITREF(lit_261),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_95 = YPmet(FUNCODEREF(fun_95),YPfalse,T146,ENVNUL,PNUL,YPfalse);
  T149 = fun_95;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-statement"),T149);
  lit_269 = YPPlist(1,YPPsym((P)"exp"));
  lit_270 = YPPlist(1,YPPsym((P)"return"));
  lit_271 = YPPsym((P)"x-1623");
  lit_272 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_273 = YPPsym((P)"with-expression");
  T152 = YPsig(LITREF(lit_272),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1623_96 = YPmet(FUNCODEREF(fun_x_1623_96),LITREF(lit_271),T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(LITREF(lit_270),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPmet(FUNCODEREF(fun_97),YPfalse,T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(LITREF(lit_269),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_98 = YPmet(FUNCODEREF(fun_98),YPfalse,T150,ENVNUL,PNUL,YPfalse);
  T153 = fun_98;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-expression"),T153);
  lit_274 = YPPlist(1,YPPsym((P)"exp"));
  lit_275 = YPPlist(1,YPPsym((P)"return"));
  lit_276 = YPPsym((P)"x-1627");
  lit_277 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_278 = YPPsym((P)"with-used-expression");
  lit_279 = YPPsym((P)"when");
  lit_280 = YPPsym((P)"program-register");
  T156 = YPsig(LITREF(lit_277),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1627_99 = YPmet(FUNCODEREF(fun_x_1627_99),LITREF(lit_276),T156,ENVNUL,PNUL,YPfalse);
  T155 = YPsig(LITREF(lit_275),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_100 = YPmet(FUNCODEREF(fun_100),YPfalse,T155,ENVNUL,PNUL,YPfalse);
  T154 = YPsig(LITREF(lit_274),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_101 = YPmet(FUNCODEREF(fun_101),YPfalse,T154,ENVNUL,PNUL,YPfalse);
  T157 = fun_101;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-used-expression"),T157);
  lit_281 = YPPsym((P)"generate-quotation-forwards");
  lit_282 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb*"));
  lit_283 = YPsb((P)"\n/* FORWARD QUOTATIONS: */\n\n");
  lit_284 = YPsb((P)"DEFLIT(lit_");
  lit_285 = YPsb((P)");\n");
  T158 = YPsig(LITREF(lit_282),YPPlist(2,VARREF(YLanyG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_forwards_102 = YPmet(FUNCODEREF(fun_generate_quotation_forwards_102),LITREF(lit_281),T158,ENVNUL,PNUL,sloc(547));
  T160 = VARREF_OR(YevalSg2cYgenerate_quotation_forwards,YPfalse);
  T161 = fun_generate_quotation_forwards_102;
  T159 = XCALL2(1,VARREF(YPdefine_method),T160,T161);
  VARSET(YevalSg2cYgenerate_quotation_forwards,T159);
  lit_286 = YPPsym((P)"generate-quotations");
  lit_287 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb*"));
  lit_288 = YPsb((P)"lit_");
  lit_289 = YPsb((P)" = ");
  T162 = YPsig(LITREF(lit_287),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotations_103 = YPmet(FUNCODEREF(fun_generate_quotations_103),LITREF(lit_286),T162,ENVNUL,PNUL,sloc(552));
  T164 = VARREF_OR(YevalSg2cYgenerate_quotations,YPfalse);
  T165 = fun_generate_quotations_103;
  T163 = XCALL2(1,VARREF(YPdefine_method),T164,T165);
  VARSET(YevalSg2cYgenerate_quotations,T163);
  lit_290 = YPPsym((P)"false-name");
  lit_291 = YPsb((P)"%false");
  T166 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_false_name_104 = YPmet(FUNCODEREF(fun_false_name_104),LITREF(lit_290),T166,ENVNUL,PNUL,sloc(558));
  T168 = VARREF_OR(YevalSg2cYfalse_name,YPfalse);
  T169 = fun_false_name_104;
  T167 = XCALL2(1,VARREF(YPdefine_method),T168,T169);
  VARSET(YevalSg2cYfalse_name,T167);
  lit_292 = YPPsym((P)"generate-quotation");
  lit_293 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb"));
  lit_294 = YPsb((P)"%true");
  lit_295 = YPsb((P)"%false");
  T170 = YPsig(LITREF(lit_293),YPPlist(2,VARREF(YLanyG),VARREF(YLlogG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_105 = YPmet(FUNCODEREF(fun_generate_quotation_105),LITREF(lit_292),T170,ENVNUL,PNUL,sloc(561));
  T172 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T173 = fun_generate_quotation_105;
  T171 = XCALL2(1,VARREF(YPdefine_method),T172,T173);
  VARSET(YevalSg2cYgenerate_quotation,T171);
  lit_296 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb"));
  lit_297 = YPsb((P)"nil");
  T175 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T174 = YPsig(LITREF(lit_296),YPPlist(2,VARREF(YLanyG),T175),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_106 = YPmet(FUNCODEREF(fun_generate_quotation_106),LITREF(lit_292),T174,ENVNUL,PNUL,sloc(564));
  T177 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T178 = fun_generate_quotation_106;
  T176 = XCALL2(1,VARREF(YPdefine_method),T177,T178);
  VARSET(YevalSg2cYgenerate_quotation,T176);
  lit_298 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb"));
  lit_299 = YPPlist(1,YPPsym((P)"x"));
  T180 = YPsig(LITREF(lit_299),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_107 = YPmet(FUNCODEREF(fun_107),YPfalse,T180,ENVNUL,PNUL,sloc(568));
  T179 = YPsig(LITREF(lit_298),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_108 = YPmet(FUNCODEREF(fun_generate_quotation_108),LITREF(lit_292),T179,ENVNUL,PNUL,sloc(567));
  T182 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T183 = fun_generate_quotation_108;
  T181 = XCALL2(1,VARREF(YPdefine_method),T182,T183);
  VARSET(YevalSg2cYgenerate_quotation,T181);
  lit_300 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_301 = YPsb((P)"%int");
  lit_302 = YPsb((P)"((P)");
  lit_303 = YPsb((P)")");
  T184 = YPsig(LITREF(lit_300),YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_109 = YPmet(FUNCODEREF(fun_generate_quotation_109),LITREF(lit_292),T184,ENVNUL,PNUL,sloc(570));
  T186 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T187 = fun_generate_quotation_109;
  T185 = XCALL2(1,VARREF(YPdefine_method),T186,T187);
  VARSET(YevalSg2cYgenerate_quotation,T185);
  lit_304 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_305 = YPsb((P)"%chr");
  lit_306 = YPsb((P)"((P)");
  lit_307 = YPsb((P)")");
  T188 = YPsig(LITREF(lit_304),YPPlist(2,VARREF(YLanyG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_110 = YPmet(FUNCODEREF(fun_generate_quotation_110),LITREF(lit_292),T188,ENVNUL,PNUL,sloc(573));
  T190 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T191 = fun_generate_quotation_110;
  T189 = XCALL2(1,VARREF(YPdefine_method),T190,T191);
  VARSET(YevalSg2cYgenerate_quotation,T189);
  lit_308 = YPPsym((P)"float-to-c-string");
  lit_309 = YPPlist(1,YPPsym((P)"o"));
  lit_310 = YPPlist(1,YPPsym((P)"done"));
  T193 = YPsig(LITREF(lit_310),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_111 = YPmet(FUNCODEREF(fun_111),YPfalse,T193,ENVNUL,PNUL,sloc(579));
  T192 = YPsig(LITREF(lit_309),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_float_to_c_string_112 = YPmet(FUNCODEREF(fun_float_to_c_string_112),LITREF(lit_308),T192,ENVNUL,PNUL,sloc(576));
  T195 = VARREF_OR(YevalSg2cYfloat_to_c_string,YPfalse);
  T196 = fun_float_to_c_string_112;
  T194 = XCALL2(1,VARREF(YPdefine_method),T195,T196);
  VARSET(YevalSg2cYfloat_to_c_string,T194);
  lit_311 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_312 = YPsb((P)"%flo");
  lit_313 = YPsb((P)"(FLOINT(");
  lit_314 = YPsb((P)"))");
  T197 = YPsig(LITREF(lit_311),YPPlist(2,VARREF(YLanyG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_113 = YPmet(FUNCODEREF(fun_generate_quotation_113),LITREF(lit_292),T197,ENVNUL,PNUL,sloc(591));
  T199 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T200 = fun_generate_quotation_113;
  T198 = XCALL2(1,VARREF(YPdefine_method),T199,T200);
  VARSET(YevalSg2cYgenerate_quotation,T198);
  lit_315 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_316 = YPsb((P)"%sb");
  lit_317 = YPsb((P)"((P)");
  lit_318 = YPsb((P)")");
  T201 = YPsig(LITREF(lit_315),YPPlist(2,VARREF(YLanyG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_114 = YPmet(FUNCODEREF(fun_generate_quotation_114),LITREF(lit_292),T201,ENVNUL,PNUL,sloc(595));
  T203 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T204 = fun_generate_quotation_114;
  T202 = XCALL2(1,VARREF(YPdefine_method),T203,T204);
  VARSET(YevalSg2cYgenerate_quotation,T202);
  lit_319 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_320 = YPsb((P)"XCALLN(1, ");
  lit_321 = YPsb((P)"vec");
  lit_322 = YPsb((P)", ");
  lit_323 = YPsb((P)", ");
  lit_324 = YPsb((P)")");
  T205 = YPsig(LITREF(lit_319),YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_115 = YPmet(FUNCODEREF(fun_generate_quotation_115),LITREF(lit_292),T205,ENVNUL,PNUL,sloc(599));
  T207 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T208 = fun_generate_quotation_115;
  T206 = XCALL2(1,VARREF(YPdefine_method),T207,T208);
  VARSET(YevalSg2cYgenerate_quotation,T206);
  lit_325 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_326 = YPsb((P)"XCALLN(1, ");
  lit_327 = YPsb((P)"tup");
  lit_328 = YPsb((P)", ");
  lit_329 = YPsb((P)", ");
  lit_330 = YPsb((P)")");
  T209 = YPsig(LITREF(lit_325),YPPlist(2,VARREF(YLanyG),VARREF(YLtupG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_116 = YPmet(FUNCODEREF(fun_generate_quotation_116),LITREF(lit_292),T209,ENVNUL,PNUL,sloc(607));
  T211 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T212 = fun_generate_quotation_116;
  T210 = XCALL2(1,VARREF(YPdefine_method),T211,T212);
  VARSET(YevalSg2cYgenerate_quotation,T210);
  lit_331 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_332 = YPsb((P)"%%sym");
  lit_333 = YPsb((P)"((P)");
  lit_334 = YPsb((P)")");
  T213 = YPsig(LITREF(lit_331),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_117 = YPmet(FUNCODEREF(fun_generate_quotation_117),LITREF(lit_292),T213,ENVNUL,PNUL,sloc(615));
  T215 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T216 = fun_generate_quotation_117;
  T214 = XCALL2(1,VARREF(YPdefine_method),T215,T216);
  VARSET(YevalSg2cYgenerate_quotation,T214);
  lit_335 = YPPsym((P)"binding->c");
  lit_336 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"out"));
  T217 = YPsig(LITREF(lit_336),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYbinding_Gc = YPmet(FUNCODEREF(YevalSg2cYbinding_Gc),LITREF(lit_335),T217,ENVNUL,PNUL,sloc(624));
  T218 = YevalSg2cYbinding_Gc;
  VARSET(YevalSg2cYbinding_Gc,T218);
  lit_337 = YPPsym((P)"reference->c");
  lit_338 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"out"));
  T220 = YPsig(LITREF(lit_338),YPPlist(2,VARREF(YevalSastYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T219 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_337),T220,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSg2cYreference_Gc,T219);
  lit_339 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"out"));
  T221 = YPsig(LITREF(lit_339),YPPlist(2,VARREF(YevalSastYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_Gc_119 = YPmet(FUNCODEREF(fun_reference_Gc_119),LITREF(lit_337),T221,ENVNUL,PNUL,sloc(646));
  T223 = VARREF_OR(YevalSg2cYreference_Gc,YPfalse);
  T224 = fun_reference_Gc_119;
  T222 = XCALL2(1,VARREF(YPdefine_method),T223,T224);
  VARSET(YevalSg2cYreference_Gc,T222);
  lit_340 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"out"));
  lit_341 = YPsb((P)"LITREF");
  lit_342 = YPsb((P)"RTVREF");
  lit_343 = YPsb((P)"DYNREF");
  lit_344 = YPsb((P)"VARREF");
  T225 = YPsig(LITREF(lit_340),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_Gc_120 = YPmet(FUNCODEREF(fun_reference_Gc_120),LITREF(lit_337),T225,ENVNUL,PNUL,sloc(649));
  T227 = VARREF_OR(YevalSg2cYreference_Gc,YPfalse);
  T228 = fun_reference_Gc_120;
  T226 = XCALL2(1,VARREF(YPdefine_method),T227,T228);
  VARSET(YevalSg2cYreference_Gc,T226);
  lit_345 = YPPsym((P)"to-c");
  lit_346 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  T230 = YPsig(LITREF(lit_346),YPPlist(4,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T229 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_345),T230,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSg2cYto_c,T229);
  lit_347 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  T231 = YPsig(LITREF(lit_347),YPPlist(4,VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_121 = YPmet(FUNCODEREF(fun_to_c_121),LITREF(lit_345),T231,ENVNUL,PNUL,sloc(661));
  T233 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T234 = fun_to_c_121;
  T232 = XCALL2(1,VARREF(YPdefine_method),T233,T234);
  VARSET(YevalSg2cYto_c,T232);
  lit_348 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  T235 = YPsig(LITREF(lit_348),YPPlist(4,VARREF(YevalSastYLpassive_programG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_122 = YPmet(FUNCODEREF(fun_to_c_122),LITREF(lit_345),T235,ENVNUL,PNUL,sloc(667));
  T237 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T238 = fun_to_c_122;
  T236 = XCALL2(1,VARREF(YPdefine_method),T237,T238);
  VARSET(YevalSg2cYto_c,T236);
  lit_349 = YPPsym((P)"gen-ref");
  lit_350 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T239 = YPsig(LITREF(lit_350),YPPlist(2,VARREF(YevalSastYLreferenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_123 = YPmet(FUNCODEREF(fun_gen_ref_123),LITREF(lit_349),T239,ENVNUL,PNUL,sloc(669));
  T241 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T242 = fun_gen_ref_123;
  T240 = XCALL2(1,VARREF(YPdefine_method),T241,T242);
  VARSET(YevalSg2cYgen_ref,T240);
  lit_351 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  lit_352 = YPsb((P)"FREEREF");
  T243 = YPsig(LITREF(lit_351),YPPlist(2,VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_124 = YPmet(FUNCODEREF(fun_gen_ref_124),LITREF(lit_349),T243,ENVNUL,PNUL,sloc(672));
  T245 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T246 = fun_gen_ref_124;
  T244 = XCALL2(1,VARREF(YPdefine_method),T245,T246);
  VARSET(YevalSg2cYgen_ref,T244);
  lit_353 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  lit_354 = YPsb((P)"T");
  lit_355 = YPsb((P)"T_1");
  T247 = YPsig(LITREF(lit_353),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_125 = YPmet(FUNCODEREF(fun_gen_ref_125),LITREF(lit_349),T247,ENVNUL,PNUL,sloc(677));
  T249 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T250 = fun_gen_ref_125;
  T248 = XCALL2(1,VARREF(YPdefine_method),T249,T250);
  VARSET(YevalSg2cYgen_ref,T248);
  lit_356 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  lit_357 = YPsb((P)"(P)");
  T253 = YPsig(LITREF(lit_356),YPPlist(2,VARREF(YevalSastYLraw_constantG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T252 = fun_gen_ref_126 = YPmet(FUNCODEREF(fun_gen_ref_126),LITREF(lit_349),T253,ENVNUL,PNUL,sloc(681));
  T256 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T257 = fun_gen_ref_126;
  T255 = XCALL2(1,VARREF(YPdefine_method),T256,T257);
  T254 = VARSET(YevalSg2cYgen_ref,T255);
  T251 = T254;
  return T251;
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
  P T240,T241,T242,T243,T244,T245,T246,T247,T248;
DEFCREGS();
  lit_358 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T0 = YPsig(LITREF(lit_358),YPPlist(2,VARREF(YevalSastYLconstantG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_127 = YPmet(FUNCODEREF(fun_gen_ref_127),LITREF(lit_349),T0,ENVNUL,PNUL,sloc(684));
  T2 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T3 = fun_gen_ref_127;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T3);
  VARSET(YevalSg2cYgen_ref,T1);
  lit_359 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T4 = YPsig(LITREF(lit_359),YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_128 = YPmet(FUNCODEREF(fun_gen_ref_128),LITREF(lit_349),T4,ENVNUL,PNUL,sloc(687));
  T6 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T7 = fun_gen_ref_128;
  T5 = XCALL2(1,VARREF(YPdefine_method),T6,T7);
  VARSET(YevalSg2cYgen_ref,T5);
  lit_360 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T8 = YPsig(LITREF(lit_360),YPPlist(2,VARREF(YevalSastYLlocalsG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_129 = YPmet(FUNCODEREF(fun_gen_ref_129),LITREF(lit_349),T8,ENVNUL,PNUL,sloc(690));
  T10 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T11 = fun_gen_ref_129;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T11);
  VARSET(YevalSg2cYgen_ref,T9);
  lit_361 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T12 = YPsig(LITREF(lit_361),YPPlist(2,VARREF(YevalSastYLfix_letG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_130 = YPmet(FUNCODEREF(fun_gen_ref_130),LITREF(lit_349),T12,ENVNUL,PNUL,sloc(693));
  T14 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T15 = fun_gen_ref_130;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T15);
  VARSET(YevalSg2cYgen_ref,T13);
  lit_362 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T16 = YPsig(LITREF(lit_362),YPPlist(2,VARREF(YevalSastYLloopG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_131 = YPmet(FUNCODEREF(fun_gen_ref_131),LITREF(lit_349),T16,ENVNUL,PNUL,sloc(696));
  T18 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T19 = fun_gen_ref_131;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T19);
  VARSET(YevalSg2cYgen_ref,T17);
  lit_363 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_364 = YPsb((P)"RTVSET(");
  lit_365 = YPsb((P)"DYNDEFSET(");
  lit_366 = YPsb((P)"DYNSET(");
  lit_367 = YPsb((P)"VARSET(");
  lit_368 = YPsb((P)",");
  lit_369 = YPsb((P)")");
  T20 = YPsig(LITREF(lit_363),YPPlist(4,VARREF(YevalSastYLglobal_assignmentG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_132 = YPmet(FUNCODEREF(fun_to_c_132),LITREF(lit_345),T20,ENVNUL,PNUL,sloc(699));
  T22 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T23 = fun_to_c_132;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T23);
  VARSET(YevalSg2cYto_c,T21);
  lit_370 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_371 = YPsb((P)"RTV");
  lit_372 = YPsb((P)"VARREF_OR");
  T24 = YPsig(LITREF(lit_370),YPPlist(4,VARREF(YevalSastYLboundQG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_133 = YPmet(FUNCODEREF(fun_to_c_133),LITREF(lit_345),T24,ENVNUL,PNUL,sloc(713));
  T26 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T27 = fun_to_c_133;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T27);
  VARSET(YevalSg2cYto_c,T25);
  lit_373 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_374 = YPsb((P)"BOXVAL");
  T28 = YPsig(LITREF(lit_373),YPPlist(4,VARREF(YevalSast_linearizeYLbox_readG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_134 = YPmet(FUNCODEREF(fun_to_c_134),LITREF(lit_345),T28,ENVNUL,PNUL,sloc(724));
  T30 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T31 = fun_to_c_134;
  T29 = XCALL2(1,VARREF(YPdefine_method),T30,T31);
  VARSET(YevalSg2cYto_c,T29);
  lit_375 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_376 = YPsb((P)"BOXVAL");
  lit_377 = YPsb((P)" = ");
  T32 = YPsig(LITREF(lit_375),YPPlist(4,VARREF(YevalSast_linearizeYLbox_writeG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_135 = YPmet(FUNCODEREF(fun_to_c_135),LITREF(lit_345),T32,ENVNUL,PNUL,sloc(731));
  T34 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T35 = fun_to_c_135;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T35);
  VARSET(YevalSg2cYto_c,T33);
  lit_378 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_379 = YPsb((P)" = BOXFAB");
  T36 = YPsig(LITREF(lit_378),YPPlist(4,VARREF(YevalSast_linearizeYLbox_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_136 = YPmet(FUNCODEREF(fun_to_c_136),LITREF(lit_345),T36,ENVNUL,PNUL,sloc(739));
  T38 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T39 = fun_to_c_136;
  T37 = XCALL2(1,VARREF(YPdefine_method),T38,T39);
  VARSET(YevalSg2cYto_c,T37);
  lit_380 = YPPsym((P)"bb?");
  lit_381 = YPPlist(1,YPPsym((P)"x"));
  T40 = YPsig(LITREF(lit_381),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bbQ_137 = YPmet(FUNCODEREF(fun_bbQ_137),LITREF(lit_380),T40,ENVNUL,PNUL,sloc(746));
  T42 = VARREF_OR(YevalSg2cYbbQ,YPfalse);
  T43 = fun_bbQ_137;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T43);
  VARSET(YevalSg2cYbbQ,T41);
  lit_382 = YPPlist(1,YPPsym((P)"x"));
  lit_383 = YPPsym((P)"%bb");
  T44 = YPsig(LITREF(lit_382),YPPlist(1,VARREF(YevalSastYLpredefined_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bbQ_138 = YPmet(FUNCODEREF(fun_bbQ_138),LITREF(lit_380),T44,ENVNUL,PNUL,sloc(748));
  T46 = VARREF_OR(YevalSg2cYbbQ,YPfalse);
  T47 = fun_bbQ_138;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T47);
  VARSET(YevalSg2cYbbQ,T45);
  lit_384 = YPPlist(1,YPPsym((P)"x"));
  T48 = YPsig(LITREF(lit_384),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bbQ_139 = YPmet(FUNCODEREF(fun_bbQ_139),LITREF(lit_380),T48,ENVNUL,PNUL,sloc(752));
  T50 = VARREF_OR(YevalSg2cYbbQ,YPfalse);
  T51 = fun_bbQ_139;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T51);
  VARSET(YevalSg2cYbbQ,T49);
  lit_385 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_386 = YPsb((P)"if (");
  lit_387 = YPsb((P)") {\n");
  lit_388 = YPsb((P)" != ");
  lit_389 = YPsb((P)") {\n");
  lit_390 = YPsb((P)"} else {\n");
  lit_391 = YPsb((P)"}\n");
  T52 = YPsig(LITREF(lit_385),YPPlist(4,VARREF(YevalSastYLalternativeG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_140 = YPmet(FUNCODEREF(fun_to_c_140),LITREF(lit_345),T52,ENVNUL,PNUL,sloc(755));
  T54 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T55 = fun_to_c_140;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T55);
  VARSET(YevalSg2cYto_c,T53);
  lit_392 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_393 = YPPlist(1,YPPsym((P)"x"));
  T57 = YPsig(LITREF(lit_393),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_141 = YPmet(FUNCODEREF(fun_141),YPfalse,T57,ENVNUL,PNUL,sloc(774));
  T56 = YPsig(LITREF(lit_392),YPPlist(4,VARREF(YevalSastYLsequentialG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_142 = YPmet(FUNCODEREF(fun_to_c_142),LITREF(lit_345),T56,ENVNUL,PNUL,sloc(773));
  T59 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T60 = fun_to_c_142;
  T58 = XCALL2(1,VARREF(YPdefine_method),T59,T60);
  VARSET(YevalSg2cYto_c,T58);
  DYNDEFSET(YevalSg2cYTloop_arg_counterT,YPint((P)-1));
  lit_394 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_395 = YPsb((P)"for (;;) {\n");
  lit_396 = YPsb((P)"P ");
  lit_397 = YPPlist(1,YPPsym((P)"x"));
  lit_398 = YPPlist(1,YPPsym((P)"x"));
  lit_399 = YPsb((P)"a");
  lit_400 = YPsb((P)"_");
  lit_401 = YPsb((P)"loop");
  lit_402 = YPsb((P)":\n");
  lit_403 = YPsb((P)"break");
  lit_404 = YPsb((P)"}\n");
  T63 = YPsig(LITREF(lit_397),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_143 = YPmet(FUNCODEREF(fun_143),YPfalse,T63,ENVNUL,PNUL,sloc(785));
  T62 = YPsig(LITREF(lit_398),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_144 = YPmet(FUNCODEREF(fun_144),YPfalse,T62,ENVNUL,PNUL,sloc(785));
  T61 = YPsig(LITREF(lit_394),YPPlist(4,VARREF(YevalSastYLloopG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_145 = YPmet(FUNCODEREF(fun_to_c_145),LITREF(lit_345),T61,ENVNUL,PNUL,sloc(778));
  T65 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T66 = fun_to_c_145;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T66);
  VARSET(YevalSg2cYto_c,T64);
  lit_405 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_406 = YPsb((P)"a");
  lit_407 = YPsb((P)"_");
  lit_408 = YPsb((P)" = ");
  lit_409 = YPsb((P)" = a");
  lit_410 = YPsb((P)"_");
  lit_411 = YPsb((P)"goto loop");
  T67 = YPsig(LITREF(lit_405),YPPlist(4,VARREF(YevalSastYLloop_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_146 = YPmet(FUNCODEREF(fun_to_c_146),LITREF(lit_345),T67,ENVNUL,PNUL,sloc(794));
  T69 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T70 = fun_to_c_146;
  T68 = XCALL2(1,VARREF(YPdefine_method),T69,T70);
  VARSET(YevalSg2cYto_c,T68);
  VARSET(YevalSg2cYDnumber_call_templates,YPint((P)5));
  lit_412 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_413 = YPsb((P)"X");
  lit_414 = YPsb((P)"CALL");
  lit_415 = YPsb((P)"N");
  lit_416 = YPsb((P)"0,");
  lit_417 = YPsb((P)"1,");
  lit_418 = YPsb((P)",");
  T71 = YPsig(LITREF(lit_412),YPPlist(4,VARREF(YevalSastYLregular_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_147 = YPmet(FUNCODEREF(fun_to_c_147),LITREF(lit_345),T71,ENVNUL,PNUL,sloc(812));
  T73 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T74 = fun_to_c_147;
  T72 = XCALL2(1,VARREF(YPdefine_method),T73,T74);
  VARSET(YevalSg2cYto_c,T72);
  lit_419 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_420 = YPPlist(1,YPPsym((P)"x"));
  lit_421 = YPPlist(1,YPPsym((P)"x"));
  T77 = YPsig(LITREF(lit_420),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_148 = YPmet(FUNCODEREF(fun_148),YPfalse,T77,ENVNUL,PNUL,sloc(830));
  T76 = YPsig(LITREF(lit_421),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_149 = YPmet(FUNCODEREF(fun_149),YPfalse,T76,ENVNUL,PNUL,sloc(830));
  T75 = YPsig(LITREF(lit_419),YPPlist(4,VARREF(YevalSastYLargumentsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_150 = YPmet(FUNCODEREF(fun_to_c_150),LITREF(lit_345),T75,ENVNUL,PNUL,sloc(829));
  T79 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T80 = fun_to_c_150;
  T78 = XCALL2(1,VARREF(YPdefine_method),T79,T80);
  VARSET(YevalSg2cYto_c,T78);
  lit_422 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_423 = YPsb((P)"check_type");
  lit_424 = YPsb((P)" = ");
  T81 = YPsig(LITREF(lit_422),YPPlist(4,VARREF(YevalSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_151 = YPmet(FUNCODEREF(fun_to_c_151),LITREF(lit_345),T81,ENVNUL,PNUL,sloc(833));
  T83 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T84 = fun_to_c_151;
  T82 = XCALL2(1,VARREF(YPdefine_method),T83,T84);
  VARSET(YevalSg2cYto_c,T82);
  lit_425 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_426 = YPsb((P)" = ");
  T85 = YPsig(LITREF(lit_425),YPPlist(4,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_152 = YPmet(FUNCODEREF(fun_to_c_152),LITREF(lit_345),T85,ENVNUL,PNUL,sloc(850));
  T87 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T88 = fun_to_c_152;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T88);
  VARSET(YevalSg2cYto_c,T86);
  lit_427 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_428 = YPsb((P)"with_exit");
  T89 = YPsig(LITREF(lit_427),YPPlist(4,VARREF(YevalSastYLbind_exitG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_153 = YPmet(FUNCODEREF(fun_to_c_153),LITREF(lit_345),T89,ENVNUL,PNUL,sloc(860));
  T91 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T92 = fun_to_c_153;
  T90 = XCALL2(1,VARREF(YPdefine_method),T91,T92);
  VARSET(YevalSg2cYto_c,T90);
  lit_429 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_430 = YPsb((P)"with_cleanup");
  T93 = YPsig(LITREF(lit_429),YPPlist(4,VARREF(YevalSastYLunwind_protectG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_154 = YPmet(FUNCODEREF(fun_to_c_154),LITREF(lit_345),T93,ENVNUL,PNUL,sloc(866));
  T95 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T96 = fun_to_c_154;
  T94 = XCALL2(1,VARREF(YPdefine_method),T95,T96);
  VARSET(YevalSg2cYto_c,T94);
  lit_431 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_432 = YPsb((P)"XCALLN");
  lit_433 = YPsb((P)"1");
  lit_434 = YPsb((P)"%with-monitor");
  lit_435 = YPsb((P)"5");
  T97 = YPsig(LITREF(lit_431),YPPlist(4,VARREF(YevalSastYLmonitorG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_155 = YPmet(FUNCODEREF(fun_to_c_155),LITREF(lit_345),T97,ENVNUL,PNUL,sloc(875));
  T99 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T100 = fun_to_c_155;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T100);
  VARSET(YevalSg2cYto_c,T98);
  lit_436 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_437 = YPsb((P)"(P)");
  lit_438 = YPPlist(1,YPPsym((P)"x"));
  lit_439 = YPPlist(1,YPPsym((P)"x"));
  T103 = YPsig(LITREF(lit_438),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_156 = YPmet(FUNCODEREF(fun_156),YPfalse,T103,ENVNUL,PNUL,sloc(900));
  T102 = YPsig(LITREF(lit_439),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_157 = YPmet(FUNCODEREF(fun_157),YPfalse,T102,ENVNUL,PNUL,sloc(900));
  T101 = YPsig(LITREF(lit_436),YPPlist(4,VARREF(YevalSastYLpredefined_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_158 = YPmet(FUNCODEREF(fun_to_c_158),LITREF(lit_345),T101,ENVNUL,PNUL,sloc(893));
  T105 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T106 = fun_to_c_158;
  T104 = XCALL2(1,VARREF(YPdefine_method),T105,T106);
  VARSET(YevalSg2cYto_c,T104);
  lit_440 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_441 = YPPlist(1,YPPsym((P)"x"));
  lit_442 = YPsb((P)"FUNFAB");
  lit_443 = YPsb((P)",");
  T108 = YPsig(LITREF(lit_441),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_159 = YPmet(FUNCODEREF(fun_159),YPfalse,T108,ENVNUL,PNUL,sloc(909));
  T107 = YPsig(LITREF(lit_440),YPPlist(4,VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_160 = YPmet(FUNCODEREF(fun_to_c_160),LITREF(lit_345),T107,ENVNUL,PNUL,sloc(903));
  T110 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T111 = fun_to_c_160;
  T109 = XCALL2(1,VARREF(YPdefine_method),T110,T111);
  VARSET(YevalSg2cYto_c,T109);
  lit_444 = YPPsym((P)"funshell-to-c");
  lit_445 = YPPlist(5,YPPsym((P)"b"),YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_446 = YPsb((P)"FUNSHELL");
  T112 = YPsig(LITREF(lit_445),YPPlist(5,VARREF(YevalSastYLbindingG),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funshell_to_c_161 = YPmet(FUNCODEREF(fun_funshell_to_c_161),LITREF(lit_444),T112,ENVNUL,PNUL,sloc(918));
  T114 = VARREF_OR(YevalSg2cYfunshell_to_c,YPfalse);
  T115 = fun_funshell_to_c_161;
  T113 = XCALL2(1,VARREF(YPdefine_method),T114,T115);
  VARSET(YevalSg2cYfunshell_to_c,T113);
  lit_447 = YPPsym((P)"funinit-to-c");
  lit_448 = YPPlist(5,YPPsym((P)"b"),YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_449 = YPPlist(1,YPPsym((P)"x"));
  lit_450 = YPsb((P)"FUNINIT");
  lit_451 = YPsb((P)", ");
  T117 = YPsig(LITREF(lit_449),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_162 = YPmet(FUNCODEREF(fun_162),YPfalse,T117,ENVNUL,PNUL,sloc(934));
  T116 = YPsig(LITREF(lit_448),YPPlist(5,VARREF(YevalSastYLbindingG),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funinit_to_c_163 = YPmet(FUNCODEREF(fun_funinit_to_c_163),LITREF(lit_447),T116,ENVNUL,PNUL,sloc(931));
  T119 = VARREF_OR(YevalSg2cYfuninit_to_c,YPfalse);
  T120 = fun_funinit_to_c_163;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T120);
  VARSET(YevalSg2cYfuninit_to_c,T118);
  lit_452 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_453 = YPsb((P)"%macro");
  T121 = YPsig(LITREF(lit_452),YPPlist(4,VARREF(YevalSastYLast_macro_definitionG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_164 = YPmet(FUNCODEREF(fun_to_c_164),LITREF(lit_345),T121,ENVNUL,PNUL,sloc(943));
  T123 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T124 = fun_to_c_164;
  T122 = XCALL2(1,VARREF(YPdefine_method),T123,T124);
  VARSET(YevalSg2cYto_c,T122);
  lit_454 = YPPsym((P)"out-list-builder");
  lit_455 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"out"),YPPsym((P)"elts"));
  lit_456 = YPsb((P)"nil");
  lit_457 = YPsb((P)"%%list");
  T125 = YPsig(LITREF(lit_455),YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_out_list_builder_165 = YPmet(FUNCODEREF(fun_out_list_builder_165),LITREF(lit_454),T125,ENVNUL,PNUL,sloc(952));
  T127 = VARREF_OR(YevalSg2cYout_list_builder,YPfalse);
  T128 = fun_out_list_builder_165;
  T126 = XCALL2(1,VARREF(YPdefine_method),T127,T128);
  VARSET(YevalSg2cYout_list_builder,T126);
  lit_458 = YPPsym((P)"gen-fab-list");
  lit_459 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"refs"));
  lit_460 = YPPlist(1,YPPsym((P)"x"));
  T130 = YPsig(LITREF(lit_460),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_166 = YPmet(FUNCODEREF(fun_166),YPfalse,T130,ENVNUL,PNUL,sloc(965));
  T129 = YPsig(LITREF(lit_459),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfab_listG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_fab_list_167 = YPmet(FUNCODEREF(fun_gen_fab_list_167),LITREF(lit_458),T129,ENVNUL,PNUL,sloc(964));
  T132 = VARREF_OR(YevalSg2cYgen_fab_list,YPfalse);
  T133 = fun_gen_fab_list_167;
  T131 = XCALL2(1,VARREF(YPdefine_method),T132,T133);
  VARSET(YevalSg2cYgen_fab_list,T131);
  lit_461 = YPPsym((P)"generate-function-specs");
  lit_462 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"sig"));
  T134 = YPsig(LITREF(lit_462),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_specs_168 = YPmet(FUNCODEREF(fun_generate_function_specs_168),LITREF(lit_461),T134,ENVNUL,PNUL,sloc(967));
  T136 = VARREF_OR(YevalSg2cYgenerate_function_specs,YPfalse);
  T137 = fun_generate_function_specs_168;
  T135 = XCALL2(1,VARREF(YPdefine_method),T136,T137);
  VARSET(YevalSg2cYgenerate_function_specs,T135);
  lit_463 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_464 = YPPlist(1,YPPsym((P)"x"));
  lit_465 = YPsb((P)"%sig");
  lit_466 = YPsb((P)"nil");
  T139 = YPsig(LITREF(lit_464),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_169 = YPmet(FUNCODEREF(fun_169),YPfalse,T139,ENVNUL,PNUL,sloc(971));
  T138 = YPsig(LITREF(lit_463),YPPlist(4,VARREF(YevalSastYLast_signatureG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_170 = YPmet(FUNCODEREF(fun_to_c_170),LITREF(lit_345),T138,ENVNUL,PNUL,sloc(970));
  T141 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T142 = fun_to_c_170;
  T140 = XCALL2(1,VARREF(YPdefine_method),T141,T142);
  VARSET(YevalSg2cYto_c,T140);
  lit_467 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_468 = YPsb((P)"%gen");
  lit_469 = YPsb((P)"(P)YPgen_code((P)YPdispatch)");
  lit_470 = YPsb((P)"nil");
  lit_471 = YPsb((P)"%false");
  lit_472 = YPsb((P)"%false");
  lit_473 = YPsb((P)"%false");
  T143 = YPsig(LITREF(lit_467),YPPlist(4,VARREF(YevalSastYLast_genericG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_171 = YPmet(FUNCODEREF(fun_to_c_171),LITREF(lit_345),T143,ENVNUL,PNUL,sloc(983));
  T145 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T146 = fun_to_c_171;
  T144 = XCALL2(1,VARREF(YPdefine_method),T145,T146);
  VARSET(YevalSg2cYto_c,T144);
  lit_474 = YPPsym((P)"generate-function-forwards");
  lit_475 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"definitions"));
  lit_476 = YPsb((P)"\n/* FUNCTIONS: */\n\n");
  T147 = YPsig(LITREF(lit_475),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forwards_172 = YPmet(FUNCODEREF(fun_generate_function_forwards_172),LITREF(lit_474),T147,ENVNUL,PNUL,sloc(999));
  T149 = VARREF_OR(YevalSg2cYgenerate_function_forwards,YPfalse);
  T150 = fun_generate_function_forwards_172;
  T148 = XCALL2(1,VARREF(YPdefine_method),T149,T150);
  VARSET(YevalSg2cYgenerate_function_forwards,T148);
  lit_477 = YPPsym((P)"generate-function-forward");
  lit_478 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"defn"));
  lit_479 = YPsb((P)"static");
  lit_480 = YPsb((P)"extern");
  lit_481 = YPsb((P)" P ");
  lit_482 = YPsb((P)" (");
  lit_483 = YPPlist(1,YPPsym((P)"x"));
  lit_484 = YPPlist(1,YPPsym((P)"x"));
  lit_485 = YPsb((P)"P");
  lit_486 = YPsb((P)");\n");
  T153 = YPsig(LITREF(lit_483),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_173 = YPmet(FUNCODEREF(fun_173),YPfalse,T153,ENVNUL,PNUL,sloc(1008));
  T152 = YPsig(LITREF(lit_484),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_174 = YPmet(FUNCODEREF(fun_174),YPfalse,T152,ENVNUL,PNUL,sloc(1008));
  T151 = YPsig(LITREF(lit_478),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_175 = YPmet(FUNCODEREF(fun_generate_function_forward_175),LITREF(lit_477),T151,ENVNUL,PNUL,sloc(1004));
  T155 = VARREF_OR(YevalSg2cYgenerate_function_forward,YPfalse);
  T156 = fun_generate_function_forward_175;
  T154 = XCALL2(1,VARREF(YPdefine_method),T155,T156);
  VARSET(YevalSg2cYgenerate_function_forward,T154);
  lit_487 = YPPsym((P)"generate-function-binding");
  lit_488 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"defn"));
  lit_489 = YPPlist(2,YPPsym((P)"global"),YPPsym((P)"runtime"));
  lit_490 = YPsb((P)"fun_");
  lit_491 = YPsb((P)"fun_");
  lit_492 = YPsb((P)"_");
  T157 = YPsig(LITREF(lit_488),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_binding_176 = YPmet(FUNCODEREF(fun_generate_function_binding_176),LITREF(lit_487),T157,ENVNUL,PNUL,sloc(1012));
  T159 = VARREF_OR(YevalSg2cYgenerate_function_binding,YPfalse);
  T160 = fun_generate_function_binding_176;
  T158 = XCALL2(1,VARREF(YPdefine_method),T159,T160);
  VARSET(YevalSg2cYgenerate_function_binding,T158);
  lit_493 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"defn"));
  lit_494 = YPsb((P)"FUNFOR(");
  lit_495 = YPsb((P)"LOCFOR(");
  lit_496 = YPsb((P)");\n");
  T161 = YPsig(LITREF(lit_493),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_177 = YPmet(FUNCODEREF(fun_generate_function_forward_177),LITREF(lit_477),T161,ENVNUL,PNUL,sloc(1025));
  T163 = VARREF_OR(YevalSg2cYgenerate_function_forward,YPfalse);
  T164 = fun_generate_function_forward_177;
  T162 = XCALL2(1,VARREF(YPdefine_method),T163,T164);
  VARSET(YevalSg2cYgenerate_function_forward,T162);
  lit_497 = YPPsym((P)"generate-function-bodies");
  lit_498 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"definitions"));
  lit_499 = YPsb((P)"\n/* FUNCTION CODES: */\n");
  lit_500 = YPPlist(1,YPPsym((P)"def"));
  T166 = YPsig(LITREF(lit_500),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_178 = YPmet(FUNCODEREF(fun_178),YPfalse,T166,ENVNUL,PNUL,sloc(1033));
  T165 = YPsig(LITREF(lit_498),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_bodies_179 = YPmet(FUNCODEREF(fun_generate_function_bodies_179),LITREF(lit_497),T165,ENVNUL,PNUL,sloc(1031));
  T168 = VARREF_OR(YevalSg2cYgenerate_function_bodies,YPfalse);
  T169 = fun_generate_function_bodies_179;
  T167 = XCALL2(1,VARREF(YPdefine_method),T168,T169);
  VARSET(YevalSg2cYgenerate_function_bodies,T167);
  lit_501 = YPPsym((P)"generate-functions");
  lit_502 = YPPlist(4,YPPsym((P)"definitions"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_503 = YPPlist(1,YPPsym((P)"def"));
  T171 = YPsig(LITREF(lit_503),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_180 = YPmet(FUNCODEREF(fun_180),YPfalse,T171,ENVNUL,PNUL,sloc(1038));
  T170 = YPsig(LITREF(lit_502),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_functions_181 = YPmet(FUNCODEREF(fun_generate_functions_181),LITREF(lit_501),T170,ENVNUL,PNUL,sloc(1037));
  T173 = VARREF_OR(YevalSg2cYgenerate_functions,YPfalse);
  T174 = fun_generate_functions_181;
  T172 = XCALL2(1,VARREF(YPdefine_method),T173,T174);
  VARSET(YevalSg2cYgenerate_functions,T172);
  lit_504 = YPPsym((P)"generate-closure-structure");
  lit_505 = YPPlist(4,YPPsym((P)"definition"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_506 = YPsb((P)" = ");
  lit_507 = YPsb((P)"%met");
  lit_508 = YPsb((P)"ENVNUL");
  lit_509 = YPsb((P)"PNUL");
  lit_510 = YPsb((P)"sloc(");
  lit_511 = YPsb((P)")");
  T175 = YPsig(LITREF(lit_505),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_closure_structure_182 = YPmet(FUNCODEREF(fun_generate_closure_structure_182),LITREF(lit_504),T175,ENVNUL,PNUL,sloc(1043));
  T177 = VARREF_OR(YevalSg2cYgenerate_closure_structure,YPfalse);
  T178 = fun_generate_closure_structure_182;
  T176 = XCALL2(1,VARREF(YPdefine_method),T177,T178);
  VARSET(YevalSg2cYgenerate_closure_structure,T176);
  lit_512 = YPPsym((P)"generate-function-body-reference");
  lit_513 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"definition"));
  lit_514 = YPsb((P)"FUNCODEREF(");
  lit_515 = YPsb((P)")");
  T179 = YPsig(LITREF(lit_513),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_body_reference_183 = YPmet(FUNCODEREF(fun_generate_function_body_reference_183),LITREF(lit_512),T179,ENVNUL,PNUL,sloc(1059));
  T181 = VARREF_OR(YevalSg2cYgenerate_function_body_reference,YPfalse);
  T182 = fun_generate_function_body_reference_183;
  T180 = XCALL2(1,VARREF(YPdefine_method),T181,T182);
  VARSET(YevalSg2cYgenerate_function_body_reference,T180);
  lit_516 = YPPsym((P)"generate-return");
  lit_517 = YPPlist(3,YPPsym((P)"defn"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_518 = YPsb((P)"return ");
  T183 = YPsig(LITREF(lit_517),YPPlist(3,VARREF(YevalSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_return_184 = YPmet(FUNCODEREF(fun_generate_return_184),LITREF(lit_516),T183,ENVNUL,PNUL,sloc(1068));
  T185 = VARREF_OR(YevalSg2cYgenerate_return,YPfalse);
  T186 = fun_generate_return_184;
  T184 = XCALL2(1,VARREF(YPdefine_method),T185,T186);
  VARSET(YevalSg2cYgenerate_return,T184);
  lit_519 = YPPlist(3,YPPsym((P)"defn"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_520 = YPsb((P)"RET");
  T187 = YPsig(LITREF(lit_519),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_return_185 = YPmet(FUNCODEREF(fun_generate_return_185),LITREF(lit_516),T187,ENVNUL,PNUL,sloc(1072));
  T189 = VARREF_OR(YevalSg2cYgenerate_return,YPfalse);
  T190 = fun_generate_return_185;
  T188 = XCALL2(1,VARREF(YPdefine_method),T189,T190);
  VARSET(YevalSg2cYgenerate_return,T188);
  lit_521 = YPPsym((P)"primitive-inlinable?");
  lit_522 = YPPlist(1,YPPsym((P)"e"));
  lit_523 = YPPsym((P)"inline");
  lit_524 = YPPsym((P)"inline-c");
  T191 = YPsig(LITREF(lit_522),YPPlist(1,VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_primitive_inlinableQ_186 = YPmet(FUNCODEREF(fun_primitive_inlinableQ_186),LITREF(lit_521),T191,ENVNUL,PNUL,sloc(1079));
  T193 = VARREF_OR(YevalSg2cYprimitive_inlinableQ,YPfalse);
  T194 = fun_primitive_inlinableQ_186;
  T192 = XCALL2(1,VARREF(YPdefine_method),T193,T194);
  VARSET(YevalSg2cYprimitive_inlinableQ,T192);
  lit_525 = YPPsym((P)"generate-function-code");
  lit_526 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"e"));
  lit_527 = YPsb((P)"\n");
  lit_528 = YPsb((P)"static ");
  lit_529 = YPsb((P)"INLINE ");
  lit_530 = YPsb((P)"P ");
  lit_531 = YPPlist(1,YPPsym((P)"x"));
  lit_532 = YPPlist(1,YPPsym((P)"x"));
  lit_533 = YPsb((P)"P ");
  lit_534 = YPsb((P)" {\n");
  lit_535 = YPsb((P)"DEFCREGS();\n");
  lit_536 = YPsb((P)"}\n");
  T197 = YPsig(LITREF(lit_531),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_187 = YPmet(FUNCODEREF(fun_187),YPfalse,T197,ENVNUL,PNUL,sloc(1089));
  T196 = YPsig(LITREF(lit_532),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_188 = YPmet(FUNCODEREF(fun_188),YPfalse,T196,ENVNUL,PNUL,sloc(1089));
  T195 = YPsig(LITREF(lit_526),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_189 = YPmet(FUNCODEREF(fun_generate_function_code_189),LITREF(lit_525),T195,ENVNUL,PNUL,sloc(1083));
  T199 = VARREF_OR(YevalSg2cYgenerate_function_code,YPfalse);
  T200 = fun_generate_function_code_189;
  T198 = XCALL2(1,VARREF(YPdefine_method),T199,T200);
  VARSET(YevalSg2cYgenerate_function_code,T198);
  lit_537 = YPPsym((P)"dispatcher?");
  lit_538 = YPPlist(1,YPPsym((P)"definition"));
  lit_539 = YPsb((P)"%dispatch");
  lit_540 = YPsb((P)"-dispatch");
  lit_541 = YPsb((P)"-dispatch");
  T201 = YPsig(LITREF(lit_538),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_dispatcherQ_190 = YPmet(FUNCODEREF(fun_dispatcherQ_190),LITREF(lit_537),T201,ENVNUL,PNUL,sloc(1099));
  T203 = VARREF_OR(YevalSg2cYdispatcherQ,YPfalse);
  T204 = fun_dispatcherQ_190;
  T202 = XCALL2(1,VARREF(YPdefine_method),T203,T204);
  VARSET(YevalSg2cYdispatcherQ,T202);
  lit_542 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"definition"));
  lit_543 = YPsb((P)"\nFUNCODEDEF(");
  lit_544 = YPsb((P)") {\n");
  lit_545 = YPsb((P)"P ");
  lit_546 = YPPlist(1,YPPsym((P)"x"));
  lit_547 = YPPlist(1,YPPsym((P)"x"));
  lit_548 = YPsb((P)"LINK_STACK();\n");
  lit_549 = YPPlist(1,YPPsym((P)"b"));
  lit_550 = YPsb((P)"NARGS(");
  lit_551 = YPsb((P)"ARG(");
  lit_552 = YPsb((P)", ");
  lit_553 = YPsb((P)")");
  lit_554 = YPsb((P)"UNLINK_STACK();\n");
  lit_555 = YPsb((P)"}\n");
  T208 = YPsig(LITREF(lit_546),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_191 = YPmet(FUNCODEREF(fun_191),YPfalse,T208,ENVNUL,PNUL,sloc(1116));
  T207 = YPsig(LITREF(lit_547),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_192 = YPmet(FUNCODEREF(fun_192),YPfalse,T207,ENVNUL,PNUL,sloc(1116));
  T206 = YPsig(LITREF(lit_549),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_193 = YPmet(FUNCODEREF(fun_193),YPfalse,T206,ENVNUL,PNUL,sloc(1122));
  T205 = YPsig(LITREF(lit_542),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_194 = YPmet(FUNCODEREF(fun_generate_function_code_194),LITREF(lit_525),T205,ENVNUL,PNUL,sloc(1107));
  T210 = VARREF_OR(YevalSg2cYgenerate_function_code,YPfalse);
  T211 = fun_generate_function_code_194;
  T209 = XCALL2(1,VARREF(YPdefine_method),T210,T211);
  VARSET(YevalSg2cYgenerate_function_code,T209);
  lit_556 = YPPsym((P)"generate-local-temporaries");
  lit_557 = YPPlist(2,YPPsym((P)"temps"),YPPsym((P)"out"));
  lit_558 = YPsb((P)"P ");
  T212 = YPsig(LITREF(lit_557),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_local_temporaries_195 = YPmet(FUNCODEREF(fun_generate_local_temporaries_195),LITREF(lit_556),T212,ENVNUL,PNUL,sloc(1142));
  T214 = VARREF_OR(YevalSg2cYgenerate_local_temporaries,YPfalse);
  T215 = fun_generate_local_temporaries_195;
  T213 = XCALL2(1,VARREF(YPdefine_method),T214,T215);
  VARSET(YevalSg2cYgenerate_local_temporaries,T213);
  VARSET(YevalSg2cYTtrace_registersQT,YPfalse);
  VARSET(YevalSg2cYTregisters_per_lineT,YPint((P)16));
  lit_559 = YPPsym((P)"generate-registers");
  lit_560 = YPPlist(2,YPPsym((P)"regs"),YPPsym((P)"out"));
  lit_561 = YPsb((P)"P ");
  lit_562 = YPsb((P)";\n");
  T216 = YPsig(LITREF(lit_560),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_registers_196 = YPmet(FUNCODEREF(fun_generate_registers_196),LITREF(lit_559),T216,ENVNUL,PNUL,sloc(1151));
  T218 = VARREF_OR(YevalSg2cYgenerate_registers,YPfalse);
  T219 = fun_generate_registers_196;
  T217 = XCALL2(1,VARREF(YPdefine_method),T218,T219);
  VARSET(YevalSg2cYgenerate_registers,T217);
  lit_563 = YPPsym((P)"module-info-name");
  lit_564 = YPPlist(1,YPPsym((P)"name"));
  lit_565 = YPsb((P)"module_info_");
  T220 = YPsig(LITREF(lit_564),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_info_name_197 = YPmet(FUNCODEREF(fun_module_info_name_197),LITREF(lit_563),T220,ENVNUL,PNUL,sloc(1163));
  T222 = VARREF_OR(YevalSg2cYmodule_info_name,YPfalse);
  T223 = fun_module_info_name_197;
  T221 = XCALL2(1,VARREF(YPdefine_method),T222,T223);
  VARSET(YevalSg2cYmodule_info_name,T221);
  lit_566 = YPPsym((P)"declare-imported-module-infos");
  lit_567 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"mod"));
  lit_568 = YPPsym((P)"maybe-declare");
  lit_569 = YPPlist(1,YPPsym((P)"modname"));
  lit_570 = YPsb((P)"extern MODULE_INFO ");
  lit_571 = YPsb((P)";\n");
  lit_572 = YPPlist(1,YPPsym((P)"binding"));
  T226 = YPsig(LITREF(lit_569),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_maybe_declare_198 = YPmet(FUNCODEREF(fun_maybe_declare_198),LITREF(lit_568),T226,ENVNUL,PNUL,sloc(1172));
  T225 = YPsig(LITREF(lit_572),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_199 = YPmet(FUNCODEREF(fun_199),YPfalse,T225,ENVNUL,PNUL,sloc(1179));
  T224 = YPsig(LITREF(lit_567),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYdeclare_imported_module_infos = YPmet(FUNCODEREF(YevalSg2cYdeclare_imported_module_infos),LITREF(lit_566),T224,ENVNUL,PNUL,sloc(1169));
  T227 = YevalSg2cYdeclare_imported_module_infos;
  VARSET(YevalSg2cYdeclare_imported_module_infos,T227);
  lit_573 = YPPsym((P)"generate-module-info");
  lit_574 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"mod"));
  lit_575 = YPsb((P)"\n/* MODULE ENVIRONMENT INFORMATION */\n\n");
  lit_576 = YPsb((P)"\nstatic USE_INFO use_infos[] = {\n");
  lit_577 = YPsb((P)"  {&");
  lit_578 = YPsb((P)"},\n");
  lit_579 = YPsb((P)"  {NULL}\n};\n");
  lit_580 = YPsb((P)"\nstatic IMPORT_INFO import_infos[] = {\n");
  lit_581 = YPPlist(2,YPPsym((P)"local-name"),YPPsym((P)"binding"));
  lit_582 = YPsb((P)"  {");
  lit_583 = YPsb((P)", &");
  lit_584 = YPsb((P)", ");
  lit_585 = YPsb((P)"NULL");
  lit_586 = YPsb((P)"},\n");
  lit_587 = YPsb((P)"  {NULL,NULL,NULL}\n};\n");
  lit_588 = YPsb((P)"\nstatic BINDING_INFO binding_infos[] = {\n");
  lit_589 = YPPlist(1,YPPsym((P)"binding"));
  lit_590 = YPsb((P)"  {");
  lit_591 = YPsb((P)", ");
  lit_592 = YPsb((P)"CVAR, &");
  lit_593 = YPsb((P)"},\n");
  lit_594 = YPsb((P)"DVAR, &");
  lit_595 = YPsb((P)"},\n");
  lit_596 = YPsb((P)"PVAR, NULL},\n");
  lit_597 = YPsb((P)"  {NULL, NVAR, NULL}\n};\n");
  lit_598 = YPsb((P)"\nstatic EXPORT_INFO export_infos[] = {\n");
  lit_599 = YPsb((P)"  {");
  lit_600 = YPsb((P)", ");
  lit_601 = YPsb((P)"NULL");
  lit_602 = YPsb((P)"},\n");
  lit_603 = YPsb((P)"  {NULL, NULL}\n};\n");
  lit_604 = YPsb((P)"\nextern MODULE_INFO ");
  lit_605 = YPsb((P)";\n");
  lit_606 = YPsb((P)"MODULE_INFO ");
  lit_607 = YPsb((P)" = {\n");
  lit_608 = YPsb((P)"  ");
  lit_609 = YPsb((P)",\n");
  lit_610 = YPsb((P)"  NULL,\n");
  lit_611 = YPsb((P)"  use_infos,\n");
  lit_612 = YPsb((P)"  import_infos,\n");
  lit_613 = YPsb((P)"  binding_infos,\n");
  lit_614 = YPsb((P)"  export_infos,\n");
  lit_615 = YPsb((P)"};\n");
  T230 = YPsig(LITREF(lit_581),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_201 = YPmet(FUNCODEREF(fun_201),YPfalse,T230,ENVNUL,PNUL,sloc(1206));
  T229 = YPsig(LITREF(lit_589),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_202 = YPmet(FUNCODEREF(fun_202),YPfalse,T229,ENVNUL,PNUL,sloc(1220));
  T228 = YPsig(LITREF(lit_574),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYgenerate_module_info = YPmet(FUNCODEREF(YevalSg2cYgenerate_module_info),LITREF(lit_573),T228,ENVNUL,PNUL,sloc(1188));
  T231 = YevalSg2cYgenerate_module_info;
  VARSET(YevalSg2cYgenerate_module_info,T231);
  lit_616 = YPPsym((P)"module-init-name");
  lit_617 = YPPlist(1,YPPsym((P)"name"));
  lit_618 = YPsb((P)"load_module_");
  T232 = YPsig(LITREF(lit_617),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_name_204 = YPmet(FUNCODEREF(fun_module_init_name_204),LITREF(lit_616),T232,ENVNUL,PNUL,sloc(1251));
  T234 = VARREF_OR(YevalSg2cYmodule_init_name,YPfalse);
  T235 = fun_module_init_name_204;
  T233 = XCALL2(1,VARREF(YPdefine_method),T234,T235);
  VARSET(YevalSg2cYmodule_init_name,T233);
  lit_619 = YPPsym((P)"module-init-decl");
  lit_620 = YPPlist(1,YPPsym((P)"name"));
  lit_621 = YPsb((P)"void ");
  lit_622 = YPsb((P)" (void)");
  T236 = YPsig(LITREF(lit_620),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_decl_205 = YPmet(FUNCODEREF(fun_module_init_decl_205),LITREF(lit_619),T236,ENVNUL,PNUL,sloc(1254));
  T238 = VARREF_OR(YevalSg2cYmodule_init_decl,YPfalse);
  T239 = fun_module_init_decl_205;
  T237 = XCALL2(1,VARREF(YPdefine_method),T238,T239);
  VARSET(YevalSg2cYmodule_init_decl,T237);
  lit_623 = YPPsym((P)"generate-module-init");
  lit_624 = YPPlist(3,YPPsym((P)"out"),YPPsym((P)"mod"),YPPsym((P)"form"));
  lit_625 = YPsb((P)"dl");
  lit_626 = YPsb((P)"\n/* MODULES USED: */\n\n");
  lit_627 = YPsb((P)"extern ");
  lit_628 = YPsb((P)";\n");
  lit_629 = YPsb((P)"\n/* EXPRESSION: */\n\n");
  lit_630 = YPsb((P)"extern ");
  lit_631 = YPsb((P)";\n\n");
  lit_632 = YPsb((P)" {\n");
  lit_633 = YPsb((P)"  static int need_init = 1;\n");
  lit_634 = YPsb((P)"  if (!need_init) return;\n\n");
  lit_635 = YPsb((P)"  need_init = 0;\n");
  lit_636 = YPsb((P)"  ");
  lit_637 = YPsb((P)"();\n");
  lit_638 = YPsb((P)"\n");
  lit_639 = YPsb((P)"\n");
  lit_640 = YPsb((P)"}\n");
  T240 = YPsig(LITREF(lit_624),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_module_init_206 = YPmet(FUNCODEREF(fun_generate_module_init_206),LITREF(lit_623),T240,ENVNUL,PNUL,sloc(1257));
  T242 = VARREF_OR(YevalSg2cYgenerate_module_init,YPfalse);
  T243 = fun_generate_module_init_206;
  T241 = XCALL2(1,VARREF(YPdefine_method),T242,T243);
  VARSET(YevalSg2cYgenerate_module_init,T241);
  lit_641 = YPPsym((P)"generate-main");
  lit_642 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"mod"));
  lit_643 = YPsb((P)"\n/* APPLICATION: */\n\n");
  lit_644 = YPsb((P)"extern MODULE_INFO ");
  lit_645 = YPsb((P)";\n");
  lit_646 = YPsb((P)"extern ");
  lit_647 = YPsb((P)";\n\n");
  lit_648 = YPsb((P)"MODULE_INFO *goo_toplevel_module_info = &");
  lit_649 = YPsb((P)";\n\n");
  lit_650 = YPsb((P)"int main(int argc, char* argv[]) {\n");
  lit_651 = YPsb((P)"  ");
  lit_652 = YPsb((P)"%init-world");
  lit_653 = YPsb((P)"(argc, argv);\n");
  lit_654 = YPsb((P)"  ");
  lit_655 = YPsb((P)"();\n");
  lit_656 = YPsb((P)"  return 0;\n");
  lit_657 = YPsb((P)"}\n");
  T244 = YPsig(LITREF(lit_642),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_main_207 = YPmet(FUNCODEREF(fun_generate_main_207),LITREF(lit_641),T244,ENVNUL,PNUL,sloc(1283));
  T246 = VARREF_OR(YevalSg2cYgenerate_main,YPfalse);
  T247 = fun_generate_main_207;
  T245 = XCALL2(1,VARREF(YPdefine_method),T246,T247);
  VARSET(YevalSg2cYgenerate_main,T245);
  T248 = YPfalse;
  return T248;
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
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSmag;

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
  {"%vpc", &module_info_gooSboot, NULL},
  {"components-basename", &module_info_gooSsystem, NULL},
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
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"bind-exit-light?", &module_info_evalSast, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"fab-g2c-module", &module_info_evalSast, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"objectify-with-subtransaction", &module_info_evalSast, NULL},
  {"function-source-setter", &module_info_evalSast, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
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
  {"%vnm", &module_info_gooSboot, NULL},
  {"<box-creation>", &module_info_evalSast_linearize, NULL},
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
  {"fab-fill!", &module_info_gooScolsScol, NULL},
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
  {"write-type", &module_info_gooSioSwrite, NULL},
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
  {"char->ascii", &module_info_gooSmath, NULL},
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
  {"binding-name", &module_info_evalSast, NULL},
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
  {"frame", &module_info_evalStop, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"bt", &module_info_evalStop, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"fix-let-arguments-setter", &module_info_evalSast, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"*c-extension*", &module_info_gooSsystem, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"environment-module", &module_info_evalSast, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"load-file", &module_info_evalStop, NULL},
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
  {"round", &module_info_gooSmath, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"<binding>", &module_info_evalSast, NULL},
  {"<bind-exit>", &module_info_evalSast, NULL},
  {"<module-binding-reference>", &module_info_evalSast, NULL},
  {"init-environment-for-eval", &module_info_evalSast, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"unconstrained-type?", &module_info_evalSast_linearize, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"function-nary?", &module_info_evalSast, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
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
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"%f/", &module_info_gooSboot, NULL},
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
  {"$$$", &module_info_evalStop, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"binding-locative", &module_info_evalSast, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"<fab-list>", &module_info_evalSast, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"t?", &module_info_gooStypes, NULL},
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
  {"box-reference", &module_info_evalSast_linearize, NULL},
  {"<dynamic-definition>", &module_info_evalSast, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"fix-let-bindings-setter", &module_info_evalSast, NULL},
  {"<free-reference>", &module_info_evalSast_linearize, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"function-index-setter", &module_info_evalSast, NULL},
  {"do-stack-frames", &module_info_evalStop, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"signature-arity", &module_info_evalSast, NULL},
  {"binding-global-box", &module_info_evalSast, NULL},
  {"<fix-let>", &module_info_evalSast, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
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
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"binding-locative-setter", &module_info_evalSast, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"module-binding", &module_info_evalSast, NULL},
  {"eval", &module_info_evalSsyntax, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"app-filename", &module_info_gooSruntime, NULL},
  {"<module>", &module_info_evalSast, NULL},
  {"probe-module", &module_info_evalSast, NULL},
  {"module-mangled-name", &module_info_evalSast, NULL},
  {"application-tail?", &module_info_evalSast, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"report-undefined-global-bindings", &module_info_evalSast, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"fix-let-bindings", &module_info_evalSast, NULL},
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
  {"closurize-main!", &module_info_evalSast_linearize, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"signature-bindings-setter", &module_info_evalSast, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"fix-let-arguments", &module_info_evalSast, NULL},
  {"<immediate-constant>", &module_info_evalSast, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
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
  {"@not", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"fix-let-types", &module_info_evalSast, NULL},
  {"module-name", &module_info_evalSast, NULL},
  {"ast-contains-fun?", &module_info_evalSast_linearize, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"esctst", &module_info_evalStop, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
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
  {"<<", &module_info_gooSmath, NULL},
  {"<box-read>", &module_info_evalSast_linearize, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"loc-val-setter", &module_info_gooSruntime, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
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
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"os-name", &module_info_gooSsystem, NULL},
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
  {"recurring-write", &module_info_gooSioSwrite, NULL},
  {"install-initial-bindings", &module_info_evalSast, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"<ast-method>", &module_info_evalSast, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"<regular-application>", &module_info_evalSast, NULL},
  {"function-registers", &module_info_evalSast, NULL},
  {"exe-filename", &module_info_gooSsystem, NULL},
  {"signature-nary?", &module_info_evalSast, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"function-data-refs", &module_info_evalSast, NULL},
  {"<directory-error>", &module_info_gooSsystem, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
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
  {"<ast-generic>", &module_info_evalSast, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"signature-value-setter", &module_info_evalSast, NULL},
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
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
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
  {"%open-in-file", &module_info_gooSboot, NULL},
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
  {"map2", &module_info_gooSmacros, NULL},
  {"parent-directory", &module_info_gooSsystem, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"form-quotations", &module_info_evalSast_linearize, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"function-free-setter", &module_info_evalSast, NULL},
  {"<computed-program>", &module_info_evalSast, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"bound?-reference", &module_info_evalSast, NULL},
  {"bound?-default", &module_info_evalSast, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"read-file", &module_info_evalStop, NULL},
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
  {"trunc", &module_info_gooSmath, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"*module-search-path*", &module_info_gooSsystem, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"<program>", &module_info_evalSast, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"top", &module_info_evalStop, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"<real-reference>", &module_info_evalSast, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"backtrace", &module_info_evalStop, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"<global-reference>", &module_info_evalSast, NULL},
  {"find-goo-file-at", &module_info_gooSsystem, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"binding-type-setter", &module_info_evalSast, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"function-signature", &module_info_evalSast, NULL},
  {"flatten-seqs", &module_info_evalSast_linearize, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"<alternative>", &module_info_evalSast, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"locals-bindings", &module_info_evalSast, NULL},
  {"reference-offset", &module_info_evalSast_linearize, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"binding-index", &module_info_evalSast, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"<loop>", &module_info_evalSast, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"binding-module", &module_info_evalSast, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"sequentialize", &module_info_evalSast, NULL},
  {"ast-evaluate", &module_info_evalSast, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"identity", &module_info_gooSruntime, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"<predefined-application>", &module_info_evalSast, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"function-body-setter", &module_info_evalSast, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"alternative-condition", &module_info_evalSast, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"<macro-reference>", &module_info_evalSast, NULL},
  {"req-sig-specs", &module_info_evalSast, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"loop-bindings", &module_info_evalSast, NULL},
  {"load-in", &module_info_evalSast, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"<reference>", &module_info_evalSast, NULL},
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
  {"$$", &module_info_evalStop, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"function-loop-setter", &module_info_evalSast, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"add-build-path", &module_info_gooSsystem, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"msg*", &module_info_gooSioSwrite, NULL},
  {"application-known?-setter", &module_info_evalSast, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"components-to-pathname", &module_info_gooSsystem, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"binding-module-name", &module_info_evalSast, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"$", &module_info_evalStop, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"unwind-protect-protected-thunk", &module_info_evalSast, NULL},
  {"load", &module_info_evalStop, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"*goo-build-root*", &module_info_gooSsystem, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"function-temporaries-setter", &module_info_evalSast, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"monitor-info", &module_info_evalSast, NULL},
  {"save-image", &module_info_evalStop, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"auto-eval", &module_info_evalStop, NULL},
  {"function-ref-count-setter", &module_info_evalSast, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
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
  {"frame-var", &module_info_evalStop, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"loop-continue", &module_info_evalSast, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
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
  {"binding-type", &module_info_evalSast, NULL},
  {"g2c-eval", &module_info_evalStop, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"<monitor>", &module_info_evalSast, NULL},
  {"find-environment-module", &module_info_evalSast, NULL},
  {"ast-define-binding", &module_info_evalSast, NULL},
  {"binding-inferred-type-setter", &module_info_evalSast, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"reference-called-function?-setter", &module_info_evalSast, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"bind-exit-main-fun", &module_info_evalSast, NULL},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, NULL},
  {"ascii-limit", &module_info_gooScolsSstr, NULL},
  {"binding-value-setter", &module_info_evalSast, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
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
  {"<passive-program>", &module_info_evalSast, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
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
  {"locals-bindings-setter", &module_info_evalSast, NULL},
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
  {"<loop-application>", &module_info_evalSast, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"unchecked-runtime-environment", &module_info_evalSast, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"binding-native-to?", &module_info_evalSast, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"file-type", &module_info_gooSsystem, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"parse-in", &module_info_evalStop, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"function-debug-name", &module_info_evalSast, NULL},
  {"<local-binding>", &module_info_evalSast, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"module-mangled-string-name", &module_info_evalSast, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"locals-functions", &module_info_evalSast, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"gooc-filename", &module_info_gooSsystem, NULL},
  {"assignment-reference", &module_info_evalSast, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"ascii-whitespaces", &module_info_gooScolsSstr, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"add-tmp-path", &module_info_gooSsystem, NULL},
  {"remove-modules-by-name!", &module_info_evalSast, NULL},
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
  {"between-parentheses", PVAR, NULL},
  {"mangle-quotation-name", CVAR, &YevalSg2cYmangle_quotation_name},
  {"generate-functions", CVAR, &YevalSg2cYgenerate_functions},
  {"g2c-build-app", CVAR, &YevalSg2cYg2c_build_app},
  {"$escape-marker", CVAR, &YevalSg2cYDescape_marker},
  {"generate-main", CVAR, &YevalSg2cYgenerate_main},
  {"g2c-def-app", CVAR, &YevalSg2cYg2c_def_app},
  {"module-loader-app-modname", CVAR, &YevalSg2cYmodule_loader_app_modname},
  {"mangle-local-name", CVAR, &YevalSg2cYmangle_local_name},
  {"*tmp-file-counter*", DVAR, &YevalSg2cYTtmp_file_counterT},
  {"gen-fab-list", CVAR, &YevalSg2cYgen_fab_list},
  {"between-parentheses-comma-separated", PVAR, NULL},
  {"g2c-exp", CVAR, &YevalSg2cYg2c_exp},
  {"module-src-file", CVAR, &YevalSg2cYmodule_src_file},
  {"$c-escapes", CVAR, &YevalSg2cYDc_escapes},
  {"gen-result", CVAR, &YevalSg2cYgen_result},
  {"generate-makefile", CVAR, &YevalSg2cYgenerate_makefile},
  {"module-mtime", CVAR, &YevalSg2cYmodule_mtime},
  {"g2c-clean", CVAR, &YevalSg2cYg2c_clean},
  {"false-name", CVAR, &YevalSg2cYfalse_name},
  {"generate-global-binding", CVAR, &YevalSg2cYgenerate_global_binding},
  {"generate-closure-structure", CVAR, &YevalSg2cYgenerate_closure_structure},
  {"$local-suffix", CVAR, &YevalSg2cYDlocal_suffix},
  {"*dynamic-linking?*", DVAR, &YevalSg2cYTdynamic_linkingQT},
  {"$number-characters", CVAR, &YevalSg2cYDnumber_characters},
  {"---main-2---", PVAR, NULL},
  {"$hygiene-char", CVAR, &YevalSg2cYDhygiene_char},
  {"<g2c-module-loader>", CVAR, &YevalSg2cYLg2c_module_loaderG},
  {"*trace-registers?*", CVAR, &YevalSg2cYTtrace_registersQT},
  {"$local-marker", CVAR, &YevalSg2cYDlocal_marker},
  {"binding->c", CVAR, &YevalSg2cYbinding_Gc},
  {"generate-quotation", CVAR, &YevalSg2cYgenerate_quotation},
  {"$method-mangled-marker-string", CVAR, &YevalSg2cYDmethod_mangled_marker_string},
  {"funinit-to-c", CVAR, &YevalSg2cYfuninit_to_c},
  {"funshell-to-c", CVAR, &YevalSg2cYfunshell_to_c},
  {"with-statement", PVAR, NULL},
  {"pp", CVAR, &YevalSg2cYpp},
  {"mangle-binding", CVAR, &YevalSg2cYmangle_binding},
  {"with-used-expression", PVAR, NULL},
  {"mangle-module-into", CVAR, &YevalSg2cYmangle_module_into},
  {"mangler-reset", CVAR, &YevalSg2cYmangler_reset},
  {"mangle-boot-name", CVAR, &YevalSg2cYmangle_boot_name},
  {"dispatcher?", CVAR, &YevalSg2cYdispatcherQ},
  {"%print-cpu-usage", PVAR, NULL},
  {"g2c-top", CVAR, &YevalSg2cYg2c_top},
  {"generate-registers", CVAR, &YevalSg2cYgenerate_registers},
  {"bb?", CVAR, &YevalSg2cYbbQ},
  {"generate-module-init", CVAR, &YevalSg2cYgenerate_module_init},
  {"generate-function-forward", CVAR, &YevalSg2cYgenerate_function_forward},
  {"for-mods", PVAR, NULL},
  {"to-c", CVAR, &YevalSg2cYto_c},
  {"$method-mangled-marker", CVAR, &YevalSg2cYDmethod_mangled_marker},
  {"generate-quotations", CVAR, &YevalSg2cYgenerate_quotations},
  {"generate-function-forwards", CVAR, &YevalSg2cYgenerate_function_forwards},
  {"*registers-per-line*", CVAR, &YevalSg2cYTregisters_per_lineT},
  {"*loop-arg-counter*", DVAR, &YevalSg2cYTloop_arg_counterT},
  {"$number-call-templates", CVAR, &YevalSg2cYDnumber_call_templates},
  {"buf-cat2!", CVAR, &YevalSg2cYbuf_cat2X},
  {"*mangle-buffer*", CVAR, &YevalSg2cYTmangle_bufferT},
  {"$max-character-code", CVAR, &YevalSg2cYDmax_character_code},
  {"g2c-goo", CVAR, &YevalSg2cYg2c_goo},
  {"$mangles-data", CVAR, &YevalSg2cYDmangles_data},
  {"mangle-raw-name", CVAR, &YevalSg2cYmangle_raw_name},
  {"$iep-marker", CVAR, &YevalSg2cYDiep_marker},
  {"$hygiene-marker", CVAR, &YevalSg2cYDhygiene_marker},
  {"generate-quotation-forwards", CVAR, &YevalSg2cYgenerate_quotation_forwards},
  {"$name-mangler-table", CVAR, &YevalSg2cYDname_mangler_table},
  {"generate-global-environment", CVAR, &YevalSg2cYgenerate_global_environment},
  {"mangle-local-marked-name", CVAR, &YevalSg2cYmangle_local_marked_name},
  {"$module-separator", CVAR, &YevalSg2cYDmodule_separator},
  {"generate-function-bodies", CVAR, &YevalSg2cYgenerate_function_bodies},
  {"$escape-separator", CVAR, &YevalSg2cYDescape_separator},
  {"$now-mod-var-name", CVAR, &YevalSg2cYDnow_mod_var_name},
  {"module-mtime-setter", CVAR, &YevalSg2cYmodule_mtime_setter},
  {"module-init-decl", CVAR, &YevalSg2cYmodule_init_decl},
  {"---main-1---", PVAR, NULL},
  {"module-info-name", CVAR, &YevalSg2cYmodule_info_name},
  {"char-buffer-as-string", CVAR, &YevalSg2cYchar_buffer_as_string},
  {"mangle-string-literal", CVAR, &YevalSg2cYmangle_string_literal},
  {"mangle-integer", CVAR, &YevalSg2cYmangle_integer},
  {"with-expression", PVAR, NULL},
  {"out-list-builder", CVAR, &YevalSg2cYout_list_builder},
  {"*g2c-app*", CVAR, &YevalSg2cYTg2c_appT},
  {"generate-c-module", CVAR, &YevalSg2cYgenerate_c_module},
  {"generate-c-application", CVAR, &YevalSg2cYgenerate_c_application},
  {"generate-header", CVAR, &YevalSg2cYgenerate_header},
  {"reference->c", CVAR, &YevalSg2cYreference_Gc},
  {"gen-ref", CVAR, &YevalSg2cYgen_ref},
  {"g2c-ast", CVAR, &YevalSg2cYg2c_ast},
  {"compute-ast", CVAR, &YevalSg2cYcompute_ast},
  {"module-src-file-setter", CVAR, &YevalSg2cYmodule_src_file_setter},
  {"module-loader-appname", CVAR, &YevalSg2cYmodule_loader_appname},
  {"<g2c-module>", CVAR, &YevalSg2cYLg2c_moduleG},
  {"purge-outdated-modules", CVAR, &YevalSg2cYpurge_outdated_modules},
  {"declare-imported-module-infos", CVAR, &YevalSg2cYdeclare_imported_module_infos},
  {"generate-function-body-reference", CVAR, &YevalSg2cYgenerate_function_body_reference},
  {"generate-trailer", CVAR, &YevalSg2cYgenerate_trailer},
  {"$module-marker", CVAR, &YevalSg2cYDmodule_marker},
  {"module-init-name", CVAR, &YevalSg2cYmodule_init_name},
  {"for-commas", PVAR, NULL},
  {"gen-depth", CVAR, &YevalSg2cYgen_depth},
  {"generate-function-code", CVAR, &YevalSg2cYgenerate_function_code},
  {"compute-program", CVAR, &YevalSg2cYcompute_program},
  {"generate-module-info", CVAR, &YevalSg2cYgenerate_module_info},
  {"generate-function-binding", CVAR, &YevalSg2cYgenerate_function_binding},
  {"generate-local-temporaries", CVAR, &YevalSg2cYgenerate_local_temporaries},
  {"module-loader-app-modname-setter", CVAR, &YevalSg2cYmodule_loader_app_modname_setter},
  {"module-up-to-date?", CVAR, &YevalSg2cYmodule_up_to_dateQ},
  {"generate-return", CVAR, &YevalSg2cYgenerate_return},
  {"primitive-inlinable?", CVAR, &YevalSg2cYprimitive_inlinableQ},
  {"mangle-global-name", CVAR, &YevalSg2cYmangle_global_name},
  {"g2c-test", CVAR, &YevalSg2cYg2c_test},
  {"float-to-c-string", CVAR, &YevalSg2cYfloat_to_c_string},
  {"mangle-name-into", CVAR, &YevalSg2cYmangle_name_into},
  {"compile-load", CVAR, &YevalSg2cYcompile_load},
  {"module-loader-appname-setter", CVAR, &YevalSg2cYmodule_loader_appname_setter},
  {"generate-function-specs", CVAR, &YevalSg2cYgenerate_function_specs},
  {"$iep-suffix", CVAR, &YevalSg2cYDiep_suffix},
  {"*definitions*", DVAR, &YevalSg2cYTdefinitionsT},
  {"$min-character-code", CVAR, &YevalSg2cYDmin_character_code},
  {"---main-0---", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"g2c-build-app", NULL},
  {"g2c-exp", NULL},
  {"g2c-clean", NULL},
  {"g2c-eval", NULL},
  {"g2c-top", NULL},
  {"g2c-def-app", NULL},
  {"g2c-ast", NULL},
  {"g2c-goo", NULL},
  {"g2c-test", NULL},
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
