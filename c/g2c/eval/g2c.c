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
DEF(YevalSg2cYgenerate_header,"eval/g2c","generate-header");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
DEF(YevalSg2cYmodule_loader_appname_setter,"eval/g2c","module-loader-appname-setter");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
DEF(YevalSg2cYmangler_reset,"eval/g2c","mangler-reset");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
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
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSioSportYget,"goo/io/port","get");
DEF(YevalSg2cYDlocal_marker,"eval/g2c","$local-marker");
EXT(YgooSmathY_,"goo/math","-");
DYNDEF(YevalSg2cYTdefinitionsT,"eval/g2c","*definitions*");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
DEF(YevalSg2cYmodule_src_file_setter,"eval/g2c","module-src-file-setter");
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
DEF(YevalSg2cYprimitive_inlinableQ,"eval/g2c","primitive-inlinable?");
EXT(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
DEF(YevalSg2cYmodule_init_decl,"eval/g2c","module-init-decl");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
DEF(YevalSg2cYmangle_local_marked_name,"eval/g2c","mangle-local-marked-name");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YevalStopYbt,"eval/top","bt");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
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
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
DEF(YevalSg2cYTregisters_per_lineT,"eval/g2c","*registers-per-line*");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
DEF(YevalSg2cYDescape_separator,"eval/g2c","$escape-separator");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YevalSastYboundQ_default,"eval/ast","bound?-default");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
DEF(YevalSg2cYDescape_marker,"eval/g2c","$escape-marker");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YevalSast_linearizeYanalyze_calls,"eval/ast-linearize","analyze-calls");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YevalSg2cYgenerate_function_binding,"eval/g2c","generate-function-binding");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
DEF(YevalSg2cYgenerate_function_specs,"eval/g2c","generate-function-specs");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YPtnul,"goo/boot","%tnul");
DEF(YevalSg2cYDnumber_characters,"eval/g2c","$number-characters");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
EXT(YgooSmathYasin,"goo/math","asin");
DEF(YevalSg2cYto_c,"eval/g2c","to-c");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YevalStopYframe_var,"eval/top","frame-var");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
DEF(YevalSg2cYmangle_integer,"eval/g2c","mangle-integer");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
DEF(YevalSg2cYgenerate_global_binding,"eval/g2c","generate-global-binding");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
DEF(YevalSg2cYmodule_src_file,"eval/g2c","module-src-file");
EXT(YgooSioSwriteYwrite_type,"goo/io/write","write-type");
EXT(YLcolG,"goo/boot","<col>");
EXT(YevalSast_linearizeYunconstrained_typeQ,"eval/ast-linearize","unconstrained-type?");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YevalSastYmodule_uses_c_includes,"eval/ast","module-uses-c-includes");
DEF(YevalSg2cYgenerate_quotation_forwards,"eval/g2c","generate-quotation-forwards");
EXT(YevalSast_linearizeYast_contains_funQ,"eval/ast-linearize","ast-contains-fun?");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSsystemYso_load,"goo/system","so-load");
DEF(YevalSg2cYDmax_character_code,"eval/g2c","$max-character-code");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
DEF(YevalSg2cYreference_Gc,"eval/g2c","reference->c");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
DEF(YevalSg2cYg2c_exp,"eval/g2c","g2c-exp");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
DEF(YevalSg2cYgenerate_quotation,"eval/g2c","generate-quotation");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
DEF(YevalSg2cYDname_mangler_table,"eval/g2c","$name-mangler-table");
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
DEF(YevalSg2cYgenerate_function_bodies,"eval/g2c","generate-function-bodies");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
DEF(YevalSg2cYDmethod_mangled_marker_string,"eval/g2c","$method-mangled-marker-string");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
DEF(YevalSg2cYmodule_loader_app_modname,"eval/g2c","module-loader-app-modname");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
DEF(YevalSg2cYfunshell_to_c,"eval/g2c","funshell-to-c");
EXT(YgooStypesYtQ,"goo/types","t?");
DEF(YevalSg2cYfuninit_to_c,"eval/g2c","funinit-to-c");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YgooSmathYevenQ,"goo/math","even?");
DEF(YevalSg2cYout_list_builder,"eval/g2c","out-list-builder");
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
EXT(YevalStopYload_file,"eval/top","load-file");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
DEF(YevalSg2cYLg2c_module_loaderG,"eval/g2c","<g2c-module-loader>");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
DEF(YevalSg2cYDc_escapes,"eval/g2c","$c-escapes");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
DEF(YevalSg2cYDhygiene_char,"eval/g2c","$hygiene-char");
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
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
DEF(YevalSg2cYgenerate_quotations,"eval/g2c","generate-quotations");
EXT(YevalSastYmodule_uses_c_libraries,"eval/ast","module-uses-c-libraries");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
DEF(YevalSg2cYmangle_module_into,"eval/g2c","mangle-module-into");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
DEF(YevalSg2cYmangle_global_name,"eval/g2c","mangle-global-name");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
DEF(YevalSg2cYmangle_binding,"eval/g2c","mangle-binding");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooSmathYfabs,"goo/math","fabs");
DEF(YevalSg2cYgen_result,"eval/g2c","gen-result");
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
DEF(YevalSg2cYDhygiene_marker,"eval/g2c","$hygiene-marker");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
DEF(YevalSg2cYmangle_local_name,"eval/g2c","mangle-local-name");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
DEF(YevalSg2cYmangle_quotation_name,"eval/g2c","mangle-quotation-name");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
DEF(YevalSg2cYg2c_top,"eval/g2c","g2c-top");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yhead,"goo/boot","head");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
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
DEF(YevalSg2cYfalse_name,"eval/g2c","false-name");
EXT(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
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
EXT(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yfind_getter,"goo/boot","find-getter");
DEF(YevalSg2cYg2c_build_app,"eval/g2c","g2c-build-app");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
DEF(YevalSg2cYgenerate_closure_structure,"eval/g2c","generate-closure-structure");
EXT(YevalStopYDDD,"eval/top","$$$");
EXT(Yfun_specs,"goo/boot","fun-specs");
DEF(YevalSg2cYbinding_Gc,"eval/g2c","binding->c");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YevalStopYparse_in,"eval/top","parse-in");
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
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
DEF(YevalSg2cYDnow_mod_var_name,"eval/g2c","$now-mod-var-name");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
DEF(YevalSg2cYg2c_def_app,"eval/g2c","g2c-def-app");
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
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YevalSastYfunction_loop,"eval/ast","function-loop");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
DEF(YevalSg2cYmangle_boot_name,"eval/g2c","mangle-boot-name");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
DEF(YevalSg2cYTtrace_registersQT,"eval/g2c","*trace-registers?*");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YevalStopYread_file,"eval/top","read-file");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
DEF(YevalSg2cYDmangles_data,"eval/g2c","$mangles-data");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YevalStopYDD,"eval/top","$$");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmathYatan,"goo/math","atan");
DEF(YevalSg2cYDnumber_call_templates,"eval/g2c","$number-call-templates");
DEF(YevalSg2cYmodule_up_to_dateQ,"eval/g2c","module-up-to-date?");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(Ycpl_error,"goo/boot","cpl-error");
DEF(YevalSg2cYmangle_raw_name,"eval/g2c","mangle-raw-name");
DEF(YevalSg2cYDiep_marker,"eval/g2c","$iep-marker");
EXT(YgooStypesYtA,"goo/types","t+");
DEF(YevalSg2cYDmethod_mangled_marker,"eval/g2c","$method-mangled-marker");
DYNDEF(YevalSg2cYTloop_arg_counterT,"eval/g2c","*loop-arg-counter*");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yas_error,"goo/boot","as-error");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YLlogG,"goo/boot","<log>");
DEF(YevalSg2cYgenerate_main,"eval/g2c","generate-main");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
DEF(YevalSg2cYTg2c_appT,"eval/g2c","*g2c-app*");
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
DEF(YevalSg2cYgenerate_function_code,"eval/g2c","generate-function-code");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
DEF(YevalSg2cYg2c_ast,"eval/g2c","g2c-ast");
EXT(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
EXT(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
EXT(YevalSastYloop_continue_setter,"eval/ast","loop-continue-setter");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
DEF(YevalSg2cYDiep_suffix,"eval/g2c","$iep-suffix");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
DEF(YevalSg2cYgenerate_global_environment,"eval/g2c","generate-global-environment");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YevalSastYloop_body_setter,"eval/ast","loop-body-setter");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
DEF(YevalSg2cYbuf_cat2X,"eval/g2c","buf-cat2!");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(YgooSmathYNE,"goo/math","~=");
DEF(YevalSg2cYmodule_loader_app_modname_setter,"eval/g2c","module-loader-app-modname-setter");
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
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
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
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
DEF(YevalSg2cYgen_ref,"eval/g2c","gen-ref");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
DEF(YevalSg2cYmangle_string_literal,"eval/g2c","mangle-string-literal");
EXT(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
DEF(YevalSg2cYgen_depth,"eval/g2c","gen-depth");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
DEF(YevalSg2cYpurge_outdated_modules,"eval/g2c","purge-outdated-modules");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooSmagYmin,"goo/mag","min");
DEF(YevalSg2cYgen_fab_list,"eval/g2c","gen-fab-list");
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
DEF(YevalSg2cYgenerate_makefile,"eval/g2c","generate-makefile");
EXT(YevalStopYD,"eval/top","$");
EXT(YgooSmathYtrunc,"goo/math","trunc");
DEF(YevalSg2cYpp,"eval/g2c","pp");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
DEF(YevalSg2cYchar_buffer_as_string,"eval/g2c","char-buffer-as-string");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
DEF(YevalSg2cYDmodule_separator,"eval/g2c","$module-separator");
DEF(YevalSg2cYcompute_ast,"eval/g2c","compute-ast");
DEF(YevalSg2cYg2c_clean,"eval/g2c","g2c-clean");
DEF(YevalSg2cYgenerate_c_module,"eval/g2c","generate-c-module");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YevalSastYLloopG,"eval/ast","<loop>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YPPmacro,"goo/boot","%%macro");
DEF(YevalSg2cYmodule_mtime,"eval/g2c","module-mtime");
DEF(YevalSg2cYgenerate_functions,"eval/g2c","generate-functions");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
DEF(YevalSg2cYgenerate_function_forwards,"eval/g2c","generate-function-forwards");
DEF(YevalSg2cYDmodule_marker,"eval/g2c","$module-marker");
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
EXT(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(YevalSastYloop_bindings,"eval/ast","loop-bindings");
DYNDEF(YevalSg2cYTtmp_file_counterT,"eval/g2c","*tmp-file-counter*");
DEF(YevalSg2cYDmin_character_code,"eval/g2c","$min-character-code");
EXT(YevalStopYframe,"eval/top","frame");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YLclassG,"goo/boot","<class>");
EXT(YevalStopYsave_image,"eval/top","save-image");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
DEF(YevalSg2cYmodule_loader_appname,"eval/g2c","module-loader-appname");
EXT(Ylst,"goo/boot","lst");
DEF(YevalSg2cYgenerate_module_info,"eval/g2c","generate-module-info");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
DEF(YevalSg2cYgenerate_module_init,"eval/g2c","generate-module-init");
DEF(YevalSg2cYgenerate_trailer,"eval/g2c","generate-trailer");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YevalSastYfunction_loop_setter,"eval/ast","function-loop-setter");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YevalStopYtop,"eval/top","top");
DEF(YevalSg2cYTmangle_bufferT,"eval/g2c","*mangle-buffer*");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YevalSastYload_in,"eval/ast","load-in");
DEF(YevalSg2cYg2c_goo,"eval/g2c","g2c-goo");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YevalSastYfunction_ref_count_setter,"eval/ast","function-ref-count-setter");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
DEF(YevalSg2cYcompute_program,"eval/g2c","compute-program");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
DEF(YevalSg2cYgenerate_registers,"eval/g2c","generate-registers");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSastYloop_continue,"eval/ast","loop-continue");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
DEF(YevalSg2cYgenerate_return,"eval/g2c","generate-return");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
DEF(YevalSg2cYg2c_test,"eval/g2c","g2c-test");
DEF(YevalSg2cYmangle_name_into,"eval/g2c","mangle-name-into");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YevalSastYapplication_loop,"eval/ast","application-loop");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YevalStopYesctst,"eval/top","esctst");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
DEF(YevalSg2cYgenerate_local_temporaries,"eval/g2c","generate-local-temporaries");
DEF(YevalSg2cYmodule_info_name,"eval/g2c","module-info-name");
DEF(YevalSg2cYdeclare_imported_module_infos,"eval/g2c","declare-imported-module-infos");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YevalSastYbind_exit_lightQ,"eval/ast","bind-exit-light?");
DEF(YevalSg2cYmodule_init_name,"eval/g2c","module-init-name");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLstrG,"goo/boot","<str>");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
DEF(YevalSg2cYcompile_load,"eval/g2c","compile-load");
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
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
DEF(YevalSg2cYmodule_mtime_setter,"eval/g2c","module-mtime-setter");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yfab_sym,"goo/boot","fab-sym");
DEF(YevalSg2cYdispatcherQ,"eval/g2c","dispatcher?");
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
EXT(YevalSastYLloop_applicationG,"eval/ast","<loop-application>");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YevalStopYload,"eval/top","load");
DEF(YevalSg2cYDlocal_suffix,"eval/g2c","$local-suffix");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
DYNDEF(YevalSg2cYTdynamic_linkingQT,"eval/g2c","*dynamic-linking?*");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYceilS,"goo/math","ceil/");
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
DEF(YevalSg2cYgenerate_function_body_reference,"eval/g2c","generate-function-body-reference");
DEF(YevalSg2cYfloat_to_c_string,"eval/g2c","float-to-c-string");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
DEF(YevalSg2cYgenerate_c_application,"eval/g2c","generate-c-application");
DEF(YevalSg2cYLg2c_moduleG,"eval/g2c","<g2c-module>");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLlstG,"goo/boot","<lst>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_467);
DEFLIT(lit_299);
DEFLIT(lit_132);
DEFLIT(lit_391);
DEFLIT(lit_122);
DEFLIT(lit_536);
DEFLIT(lit_520);
DEFLIT(lit_219);
DEFLIT(lit_472);
DEFLIT(lit_555);
DEFLIT(lit_404);
DEFLIT(lit_3);
DEFLIT(lit_36);
DEFLIT(lit_203);
DEFLIT(lit_234);
DEFLIT(lit_98);
DEFLIT(lit_482);
DEFLIT(lit_241);
DEFLIT(lit_519);
DEFLIT(lit_400);
DEFLIT(lit_538);
DEFLIT(lit_264);
DEFLIT(lit_328);
DEFLIT(lit_635);
DEFLIT(lit_102);
DEFLIT(lit_528);
DEFLIT(lit_59);
DEFLIT(lit_361);
DEFLIT(lit_414);
DEFLIT(lit_210);
DEFLIT(lit_243);
DEFLIT(lit_178);
DEFLIT(lit_634);
DEFLIT(lit_12);
DEFLIT(lit_338);
DEFLIT(lit_55);
DEFLIT(lit_339);
DEFLIT(lit_479);
DEFLIT(lit_249);
DEFLIT(lit_540);
DEFLIT(lit_202);
DEFLIT(lit_426);
DEFLIT(lit_610);
DEFLIT(lit_216);
DEFLIT(lit_101);
DEFLIT(lit_596);
DEFLIT(lit_49);
DEFLIT(lit_23);
DEFLIT(lit_403);
DEFLIT(lit_217);
DEFLIT(lit_476);
DEFLIT(lit_223);
DEFLIT(lit_369);
DEFLIT(lit_24);
DEFLIT(lit_148);
DEFLIT(lit_45);
DEFLIT(lit_421);
DEFLIT(lit_6);
DEFLIT(lit_441);
DEFLIT(lit_409);
DEFLIT(lit_511);
DEFLIT(lit_374);
DEFLIT(lit_1);
DEFLIT(lit_382);
DEFLIT(lit_18);
DEFLIT(lit_35);
DEFLIT(lit_80);
DEFLIT(lit_595);
DEFLIT(lit_266);
DEFLIT(lit_378);
DEFLIT(lit_218);
DEFLIT(lit_175);
DEFLIT(lit_180);
DEFLIT(lit_625);
DEFLIT(lit_496);
DEFLIT(lit_152);
DEFLIT(lit_332);
DEFLIT(lit_560);
DEFLIT(lit_578);
DEFLIT(lit_104);
DEFLIT(lit_602);
DEFLIT(lit_309);
DEFLIT(lit_436);
DEFLIT(lit_478);
DEFLIT(lit_381);
DEFLIT(lit_123);
DEFLIT(lit_490);
DEFLIT(lit_452);
DEFLIT(lit_525);
DEFLIT(lit_593);
DEFLIT(lit_348);
DEFLIT(lit_597);
DEFLIT(lit_557);
DEFLIT(lit_171);
DEFLIT(lit_172);
DEFLIT(lit_493);
DEFLIT(lit_410);
DEFLIT(lit_367);
DEFLIT(lit_380);
DEFLIT(lit_394);
DEFLIT(lit_547);
DEFLIT(lit_535);
DEFLIT(lit_624);
DEFLIT(lit_586);
DEFLIT(lit_19);
DEFLIT(lit_563);
DEFLIT(lit_225);
DEFLIT(lit_371);
DEFLIT(lit_484);
DEFLIT(lit_462);
DEFLIT(lit_585);
DEFLIT(lit_108);
DEFLIT(lit_592);
DEFLIT(lit_248);
DEFLIT(lit_242);
DEFLIT(lit_558);
DEFLIT(lit_114);
DEFLIT(lit_103);
DEFLIT(lit_522);
DEFLIT(lit_149);
DEFLIT(lit_489);
DEFLIT(lit_546);
DEFLIT(lit_93);
DEFLIT(lit_552);
DEFLIT(lit_583);
DEFLIT(lit_57);
DEFLIT(lit_230);
DEFLIT(lit_70);
DEFLIT(lit_37);
DEFLIT(lit_107);
DEFLIT(lit_185);
DEFLIT(lit_138);
DEFLIT(lit_22);
DEFLIT(lit_92);
DEFLIT(lit_645);
DEFLIT(lit_295);
DEFLIT(lit_47);
DEFLIT(lit_499);
DEFLIT(lit_423);
DEFLIT(lit_524);
DEFLIT(lit_69);
DEFLIT(lit_395);
DEFLIT(lit_329);
DEFLIT(lit_86);
DEFLIT(lit_294);
DEFLIT(lit_134);
DEFLIT(lit_445);
DEFLIT(lit_281);
DEFLIT(lit_336);
DEFLIT(lit_115);
DEFLIT(lit_73);
DEFLIT(lit_8);
DEFLIT(lit_233);
DEFLIT(lit_77);
DEFLIT(lit_293);
DEFLIT(lit_494);
DEFLIT(lit_358);
DEFLIT(lit_46);
DEFLIT(lit_292);
DEFLIT(lit_581);
DEFLIT(lit_461);
DEFLIT(lit_53);
DEFLIT(lit_131);
DEFLIT(lit_330);
DEFLIT(lit_265);
DEFLIT(lit_456);
DEFLIT(lit_565);
DEFLIT(lit_463);
DEFLIT(lit_439);
DEFLIT(lit_498);
DEFLIT(lit_399);
DEFLIT(lit_465);
DEFLIT(lit_79);
DEFLIT(lit_28);
DEFLIT(lit_318);
DEFLIT(lit_71);
DEFLIT(lit_174);
DEFLIT(lit_5);
DEFLIT(lit_321);
DEFLIT(lit_343);
DEFLIT(lit_352);
DEFLIT(lit_355);
DEFLIT(lit_297);
DEFLIT(lit_365);
DEFLIT(lit_119);
DEFLIT(lit_317);
DEFLIT(lit_21);
DEFLIT(lit_386);
DEFLIT(lit_137);
DEFLIT(lit_475);
DEFLIT(lit_607);
DEFLIT(lit_214);
DEFLIT(lit_450);
DEFLIT(lit_0);
DEFLIT(lit_453);
DEFLIT(lit_577);
DEFLIT(lit_168);
DEFLIT(lit_192);
DEFLIT(lit_425);
DEFLIT(lit_428);
DEFLIT(lit_351);
DEFLIT(lit_88);
DEFLIT(lit_337);
DEFLIT(lit_548);
DEFLIT(lit_10);
DEFLIT(lit_539);
DEFLIT(lit_30);
DEFLIT(lit_588);
DEFLIT(lit_435);
DEFLIT(lit_118);
DEFLIT(lit_198);
DEFLIT(lit_25);
DEFLIT(lit_460);
DEFLIT(lit_505);
DEFLIT(lit_247);
DEFLIT(lit_129);
DEFLIT(lit_68);
DEFLIT(lit_120);
DEFLIT(lit_259);
DEFLIT(lit_194);
DEFLIT(lit_320);
DEFLIT(lit_415);
DEFLIT(lit_459);
DEFLIT(lit_222);
DEFLIT(lit_94);
DEFLIT(lit_228);
DEFLIT(lit_319);
DEFLIT(lit_239);
DEFLIT(lit_32);
DEFLIT(lit_253);
DEFLIT(lit_573);
DEFLIT(lit_244);
DEFLIT(lit_314);
DEFLIT(lit_254);
DEFLIT(lit_623);
DEFLIT(lit_340);
DEFLIT(lit_183);
DEFLIT(lit_260);
DEFLIT(lit_477);
DEFLIT(lit_100);
DEFLIT(lit_170);
DEFLIT(lit_34);
DEFLIT(lit_207);
DEFLIT(lit_396);
DEFLIT(lit_545);
DEFLIT(lit_518);
DEFLIT(lit_263);
DEFLIT(lit_291);
DEFLIT(lit_56);
DEFLIT(lit_444);
DEFLIT(lit_376);
DEFLIT(lit_554);
DEFLIT(lit_633);
DEFLIT(lit_372);
DEFLIT(lit_533);
DEFLIT(lit_250);
DEFLIT(lit_290);
DEFLIT(lit_151);
DEFLIT(lit_542);
DEFLIT(lit_91);
DEFLIT(lit_331);
DEFLIT(lit_240);
DEFLIT(lit_641);
DEFLIT(lit_448);
DEFLIT(lit_38);
DEFLIT(lit_300);
DEFLIT(lit_500);
DEFLIT(lit_515);
DEFLIT(lit_306);
DEFLIT(lit_275);
DEFLIT(lit_379);
DEFLIT(lit_67);
DEFLIT(lit_397);
DEFLIT(lit_451);
DEFLIT(lit_76);
DEFLIT(lit_33);
DEFLIT(lit_145);
DEFLIT(lit_432);
DEFLIT(lit_4);
DEFLIT(lit_611);
DEFLIT(lit_474);
DEFLIT(lit_176);
DEFLIT(lit_495);
DEFLIT(lit_584);
DEFLIT(lit_193);
DEFLIT(lit_335);
DEFLIT(lit_389);
DEFLIT(lit_65);
DEFLIT(lit_377);
DEFLIT(lit_468);
DEFLIT(lit_215);
DEFLIT(lit_15);
DEFLIT(lit_278);
DEFLIT(lit_128);
DEFLIT(lit_568);
DEFLIT(lit_626);
DEFLIT(lit_612);
DEFLIT(lit_287);
DEFLIT(lit_572);
DEFLIT(lit_359);
DEFLIT(lit_270);
DEFLIT(lit_311);
DEFLIT(lit_159);
DEFLIT(lit_284);
DEFLIT(lit_327);
DEFLIT(lit_156);
DEFLIT(lit_609);
DEFLIT(lit_186);
DEFLIT(lit_470);
DEFLIT(lit_304);
DEFLIT(lit_310);
DEFLIT(lit_442);
DEFLIT(lit_162);
DEFLIT(lit_269);
DEFLIT(lit_408);
DEFLIT(lit_620);
DEFLIT(lit_345);
DEFLIT(lit_502);
DEFLIT(lit_89);
DEFLIT(lit_2);
DEFLIT(lit_161);
DEFLIT(lit_643);
DEFLIT(lit_20);
DEFLIT(lit_407);
DEFLIT(lit_529);
DEFLIT(lit_14);
DEFLIT(lit_501);
DEFLIT(lit_471);
DEFLIT(lit_268);
DEFLIT(lit_353);
DEFLIT(lit_305);
DEFLIT(lit_220);
DEFLIT(lit_110);
DEFLIT(lit_160);
DEFLIT(lit_530);
DEFLIT(lit_66);
DEFLIT(lit_417);
DEFLIT(lit_280);
DEFLIT(lit_591);
DEFLIT(lit_96);
DEFLIT(lit_553);
DEFLIT(lit_150);
DEFLIT(lit_419);
DEFLIT(lit_357);
DEFLIT(lit_312);
DEFLIT(lit_411);
DEFLIT(lit_201);
DEFLIT(lit_621);
DEFLIT(lit_87);
DEFLIT(lit_17);
DEFLIT(lit_326);
DEFLIT(lit_491);
DEFLIT(lit_469);
DEFLIT(lit_127);
DEFLIT(lit_541);
DEFLIT(lit_617);
DEFLIT(lit_64);
DEFLIT(lit_627);
DEFLIT(lit_271);
DEFLIT(lit_383);
DEFLIT(lit_632);
DEFLIT(lit_31);
DEFLIT(lit_116);
DEFLIT(lit_388);
DEFLIT(lit_307);
DEFLIT(lit_78);
DEFLIT(lit_513);
DEFLIT(lit_251);
DEFLIT(lit_628);
DEFLIT(lit_54);
DEFLIT(lit_569);
DEFLIT(lit_60);
DEFLIT(lit_594);
DEFLIT(lit_324);
DEFLIT(lit_614);
DEFLIT(lit_413);
DEFLIT(lit_200);
DEFLIT(lit_197);
DEFLIT(lit_646);
DEFLIT(lit_443);
DEFLIT(lit_43);
DEFLIT(lit_384);
DEFLIT(lit_229);
DEFLIT(lit_298);
DEFLIT(lit_354);
DEFLIT(lit_157);
DEFLIT(lit_72);
DEFLIT(lit_534);
DEFLIT(lit_570);
DEFLIT(lit_601);
DEFLIT(lit_368);
DEFLIT(lit_261);
DEFLIT(lit_83);
DEFLIT(lit_144);
DEFLIT(lit_406);
DEFLIT(lit_387);
DEFLIT(lit_252);
DEFLIT(lit_209);
DEFLIT(lit_322);
DEFLIT(lit_213);
DEFLIT(lit_11);
DEFLIT(lit_503);
DEFLIT(lit_227);
DEFLIT(lit_262);
DEFLIT(lit_642);
DEFLIT(lit_639);
DEFLIT(lit_506);
DEFLIT(lit_532);
DEFLIT(lit_169);
DEFLIT(lit_286);
DEFLIT(lit_571);
DEFLIT(lit_211);
DEFLIT(lit_191);
DEFLIT(lit_385);
DEFLIT(lit_455);
DEFLIT(lit_412);
DEFLIT(lit_323);
DEFLIT(lit_531);
DEFLIT(lit_276);
DEFLIT(lit_302);
DEFLIT(lit_366);
DEFLIT(lit_146);
DEFLIT(lit_167);
DEFLIT(lit_26);
DEFLIT(lit_630);
DEFLIT(lit_349);
DEFLIT(lit_316);
DEFLIT(lit_483);
DEFLIT(lit_398);
DEFLIT(lit_195);
DEFLIT(lit_147);
DEFLIT(lit_346);
DEFLIT(lit_582);
DEFLIT(lit_446);
DEFLIT(lit_561);
DEFLIT(lit_184);
DEFLIT(lit_429);
DEFLIT(lit_636);
DEFLIT(lit_235);
DEFLIT(lit_579);
DEFLIT(lit_166);
DEFLIT(lit_29);
DEFLIT(lit_449);
DEFLIT(lit_143);
DEFLIT(lit_236);
DEFLIT(lit_606);
DEFLIT(lit_199);
DEFLIT(lit_13);
DEFLIT(lit_313);
DEFLIT(lit_587);
DEFLIT(lit_457);
DEFLIT(lit_75);
DEFLIT(lit_604);
DEFLIT(lit_622);
DEFLIT(lit_480);
DEFLIT(lit_464);
DEFLIT(lit_289);
DEFLIT(lit_81);
DEFLIT(lit_212);
DEFLIT(lit_141);
DEFLIT(lit_82);
DEFLIT(lit_187);
DEFLIT(lit_165);
DEFLIT(lit_393);
DEFLIT(lit_647);
DEFLIT(lit_567);
DEFLIT(lit_288);
DEFLIT(lit_42);
DEFLIT(lit_347);
DEFLIT(lit_41);
DEFLIT(lit_179);
DEFLIT(lit_392);
DEFLIT(lit_106);
DEFLIT(lit_350);
DEFLIT(lit_589);
DEFLIT(lit_481);
DEFLIT(lit_121);
DEFLIT(lit_226);
DEFLIT(lit_574);
DEFLIT(lit_164);
DEFLIT(lit_344);
DEFLIT(lit_126);
DEFLIT(lit_598);
DEFLIT(lit_44);
DEFLIT(lit_190);
DEFLIT(lit_85);
DEFLIT(lit_488);
DEFLIT(lit_188);
DEFLIT(lit_575);
DEFLIT(lit_418);
DEFLIT(lit_245);
DEFLIT(lit_629);
DEFLIT(lit_62);
DEFLIT(lit_274);
DEFLIT(lit_125);
DEFLIT(lit_315);
DEFLIT(lit_370);
DEFLIT(lit_564);
DEFLIT(lit_342);
DEFLIT(lit_117);
DEFLIT(lit_109);
DEFLIT(lit_521);
DEFLIT(lit_325);
DEFLIT(lit_401);
DEFLIT(lit_196);
DEFLIT(lit_135);
DEFLIT(lit_454);
DEFLIT(lit_440);
DEFLIT(lit_341);
DEFLIT(lit_640);
DEFLIT(lit_221);
DEFLIT(lit_438);
DEFLIT(lit_537);
DEFLIT(lit_142);
DEFLIT(lit_638);
DEFLIT(lit_373);
DEFLIT(lit_113);
DEFLIT(lit_431);
DEFLIT(lit_140);
DEFLIT(lit_273);
DEFLIT(lit_112);
DEFLIT(lit_402);
DEFLIT(lit_544);
DEFLIT(lit_605);
DEFLIT(lit_590);
DEFLIT(lit_63);
DEFLIT(lit_433);
DEFLIT(lit_40);
DEFLIT(lit_550);
DEFLIT(lit_405);
DEFLIT(lit_562);
DEFLIT(lit_416);
DEFLIT(lit_543);
DEFLIT(lit_301);
DEFLIT(lit_466);
DEFLIT(lit_507);
DEFLIT(lit_206);
DEFLIT(lit_238);
DEFLIT(lit_39);
DEFLIT(lit_205);
DEFLIT(lit_486);
DEFLIT(lit_237);
DEFLIT(lit_105);
DEFLIT(lit_232);
DEFLIT(lit_111);
DEFLIT(lit_549);
DEFLIT(lit_52);
DEFLIT(lit_158);
DEFLIT(lit_512);
DEFLIT(lit_61);
DEFLIT(lit_163);
DEFLIT(lit_458);
DEFLIT(lit_527);
DEFLIT(lit_485);
DEFLIT(lit_556);
DEFLIT(lit_51);
DEFLIT(lit_267);
DEFLIT(lit_282);
DEFLIT(lit_580);
DEFLIT(lit_139);
DEFLIT(lit_334);
DEFLIT(lit_204);
DEFLIT(lit_603);
DEFLIT(lit_523);
DEFLIT(lit_437);
DEFLIT(lit_189);
DEFLIT(lit_7);
DEFLIT(lit_48);
DEFLIT(lit_208);
DEFLIT(lit_90);
DEFLIT(lit_177);
DEFLIT(lit_487);
DEFLIT(lit_136);
DEFLIT(lit_333);
DEFLIT(lit_279);
DEFLIT(lit_285);
DEFLIT(lit_99);
DEFLIT(lit_257);
DEFLIT(lit_613);
DEFLIT(lit_277);
DEFLIT(lit_224);
DEFLIT(lit_510);
DEFLIT(lit_16);
DEFLIT(lit_497);
DEFLIT(lit_360);
DEFLIT(lit_181);
DEFLIT(lit_509);
DEFLIT(lit_615);
DEFLIT(lit_256);
DEFLIT(lit_516);
DEFLIT(lit_95);
DEFLIT(lit_517);
DEFLIT(lit_27);
DEFLIT(lit_124);
DEFLIT(lit_296);
DEFLIT(lit_97);
DEFLIT(lit_514);
DEFLIT(lit_566);
DEFLIT(lit_508);
DEFLIT(lit_618);
DEFLIT(lit_155);
DEFLIT(lit_182);
DEFLIT(lit_447);
DEFLIT(lit_246);
DEFLIT(lit_356);
DEFLIT(lit_600);
DEFLIT(lit_173);
DEFLIT(lit_576);
DEFLIT(lit_50);
DEFLIT(lit_303);
DEFLIT(lit_154);
DEFLIT(lit_133);
DEFLIT(lit_619);
DEFLIT(lit_599);
DEFLIT(lit_492);
DEFLIT(lit_364);
DEFLIT(lit_551);
DEFLIT(lit_434);
DEFLIT(lit_283);
DEFLIT(lit_308);
DEFLIT(lit_130);
DEFLIT(lit_231);
DEFLIT(lit_255);
DEFLIT(lit_420);
DEFLIT(lit_58);
DEFLIT(lit_258);
DEFLIT(lit_422);
DEFLIT(lit_504);
DEFLIT(lit_430);
DEFLIT(lit_424);
DEFLIT(lit_153);
DEFLIT(lit_616);
DEFLIT(lit_637);
DEFLIT(lit_631);
DEFLIT(lit_427);
DEFLIT(lit_363);
DEFLIT(lit_375);
DEFLIT(lit_74);
DEFLIT(lit_84);
DEFLIT(lit_9);
DEFLIT(lit_559);
DEFLIT(lit_526);
DEFLIT(lit_648);
DEFLIT(lit_390);
DEFLIT(lit_644);
DEFLIT(lit_608);
DEFLIT(lit_473);
DEFLIT(lit_362);
DEFLIT(lit_272);

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
LOCFOR(fun_to_c_129);
LOCFOR(fun_to_c_130);
LOCFOR(fun_to_c_131);
LOCFOR(fun_to_c_132);
LOCFOR(fun_to_c_133);
LOCFOR(fun_to_c_134);
LOCFOR(fun_135);
LOCFOR(fun_to_c_136);
LOCFOR(fun_137);
LOCFOR(fun_138);
LOCFOR(fun_to_c_139);
LOCFOR(fun_to_c_140);
LOCFOR(fun_to_c_141);
LOCFOR(fun_142);
LOCFOR(fun_143);
LOCFOR(fun_to_c_144);
LOCFOR(fun_to_c_145);
LOCFOR(fun_to_c_146);
LOCFOR(fun_to_c_147);
LOCFOR(fun_to_c_148);
LOCFOR(fun_to_c_149);
LOCFOR(fun_150);
LOCFOR(fun_151);
LOCFOR(fun_to_c_152);
LOCFOR(fun_153);
LOCFOR(fun_to_c_154);
LOCFOR(fun_funshell_to_c_155);
LOCFOR(fun_156);
LOCFOR(fun_funinit_to_c_157);
LOCFOR(fun_to_c_158);
LOCFOR(fun_out_list_builder_159);
LOCFOR(fun_160);
LOCFOR(fun_gen_fab_list_161);
LOCFOR(fun_generate_function_specs_162);
LOCFOR(fun_163);
LOCFOR(fun_to_c_164);
LOCFOR(fun_to_c_165);
LOCFOR(fun_generate_function_forwards_166);
LOCFOR(fun_167);
LOCFOR(fun_168);
LOCFOR(fun_generate_function_forward_169);
LOCFOR(fun_generate_function_binding_170);
LOCFOR(fun_generate_function_forward_171);
LOCFOR(fun_172);
LOCFOR(fun_generate_function_bodies_173);
LOCFOR(fun_174);
LOCFOR(fun_generate_functions_175);
LOCFOR(fun_generate_closure_structure_176);
LOCFOR(fun_generate_function_body_reference_177);
LOCFOR(fun_generate_return_178);
LOCFOR(fun_generate_return_179);
LOCFOR(fun_primitive_inlinableQ_180);
LOCFOR(fun_181);
LOCFOR(fun_182);
LOCFOR(fun_generate_function_code_183);
LOCFOR(fun_dispatcherQ_184);
LOCFOR(fun_185);
LOCFOR(fun_186);
LOCFOR(fun_187);
LOCFOR(fun_generate_function_code_188);
LOCFOR(fun_generate_local_temporaries_189);
LOCFOR(fun_generate_registers_190);
LOCFOR(fun_module_info_name_191);
LOCFOR(fun_maybe_declare_192);
LOCFOR(fun_193);
FUNFOR(YevalSg2cYdeclare_imported_module_infos);
LOCFOR(fun_195);
LOCFOR(fun_196);
FUNFOR(YevalSg2cYgenerate_module_info);
LOCFOR(fun_module_init_name_198);
LOCFOR(fun_module_init_decl_199);
LOCFOR(fun_generate_module_init_200);
LOCFOR(fun_generate_main_201);
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
  P x_1553F3448;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  x_1553F3448 = DYNREF(YevalSg2cYTdefinitionsT);
  T3 = FUNFAB(fun_9,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T4 = FUNFAB(fun_10,1,x_1553F3448);
  T2 = with_cleanup(T3,T4);
  T1 = T2;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_12) {
  P tmpF3449;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  T1 = BOXVAL(FREEREF(0));
  tmpF3449 = T1;
  if (tmpF3449 != YPfalse) {
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
  P tmpF3453;
  P src_fileF3452;
  P build_fileF3451;
  P fileF3450;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  fileF3450 = T1;
  T3 = CALL2(1,VARREF(YgooSsystemYadd_build_path),FREEREF(0),fileF3450);
  build_fileF3451 = T3;
  T5 = CALL1(1,VARREF(YgooSsystemYadd_src_path),fileF3450);
  src_fileF3452 = T5;
  T9 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),build_fileF3451);
  T8 = CALL1(1,VARREF(Ynot),T9);
  tmpF3453 = T8;
  if (tmpF3453 != YPfalse) {
    T10 = tmpF3453;
  } else {
    T12 = CALL1(1,VARREF(YgooSsystemYfile_mtime),src_fileF3452);
    T13 = CALL1(1,VARREF(YgooSsystemYfile_mtime),build_fileF3451);
    T11 = CALL2(1,VARREF(YgooSmagYGE),T12,T13);
    T10 = T11;
  }
  T7 = T10;
  if (T7 != YPfalse) {
    T14 = CALL2(1,VARREF(YgooSsystemYfile_copy),src_fileF3452,build_fileF3451);
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
  P out_portF3463;
  P prgF3462;
  P astF3461;
  P out_fileF3460;
  P appnameF3459;
  P src_fileF3458;
  P fileF3457;
  P envF3456;
  P keepmodQF3455;
  P modF3454;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
  T1 = CALL2(1,VARREF(YevalSastYfab_g2c_module),loader_,name_);
  modF3454 = T1;
  keepmodQF3455 = YPfalse;
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),modF3454);
  envF3456 = T4;
  T6 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  fileF3457 = T6;
  T9 = CALL1(1,VARREF(YgooSsystemYgoo_filename),fileF3457);
  T8 = CALL1(1,VARREF(YgooSsystemYadd_src_path),T9);
  src_fileF3458 = T8;
  T11 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF3459 = T11;
  T14 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF3457);
  T13 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF3459,T14);
  out_fileF3460 = T13;
  CALL2(1,VARREF(YevalSg2cYmodule_src_file_setter),src_fileF3458,modF3454);
  T15 = CALL1(1,VARREF(YgooSsystemYfile_mtime),src_fileF3458);
  CALL2(1,VARREF(YevalSg2cYmodule_mtime_setter),T15,modF3454);
  T16 = (P)YPsu(LITREF(lit_22));
  (P)YevalSg2cYPprint_cpu_usage(T16);
  T18 = CALL2(1,VARREF(YevalSg2cYcompute_ast),src_fileF3458,envF3456);
  astF3461 = T18;
  T20 = CALL2(1,VARREF(YevalSg2cYcompute_program),astF3461,envF3456);
  prgF3462 = T20;
  T21 = (P)YPsu(LITREF(lit_23));
  (P)YevalSg2cYPprint_cpu_usage(T21);
  T22 = CALL1(1,VARREF(YgooSsystemYparent_directory),out_fileF3460);
  CALL1(1,VARREF(YgooSsystemYprobe_directory),T22);
  out_portF3463 = YPfalse;
  out_portF3463 = BOXFAB(out_portF3463);
  T25 = FUNFAB(fun_11,5,out_portF3463,out_fileF3460,prgF3462,astF3461,modF3454);
  T26 = FUNFAB(fun_12,1,out_portF3463);
  T24 = with_cleanup(T25,T26);
  T27 = FUNFAB(fun_13,1,appnameF3459);
  T28 = CALL1(1,VARREF(YevalSastYmodule_uses_c_files),modF3454);
  CALL2(1,VARREF(YgooSmacrosYdo),T27,T28);
  T29 = (P)YPsu(LITREF(lit_26));
  (P)YevalSg2cYPprint_cpu_usage(T29);
  T19 = modF3454;
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
  P x_1554F3464;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  x_1554F3464 = VARREF(YgooSioSportYout);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1554F3464,name_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1554F3464,LITREF(lit_33));
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYpurge_outdated_modules) {
  P loader_;
  P changedF3465;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(loader_, 0);
  changedF3465 = Ynil;
  changedF3465 = BOXFAB(changedF3465);
  T2 = FUNFAB(fun_16,1,changedF3465);
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T2,loader_);
  T3 = fun_17;
  T4 = BOXVAL(changedF3465);
  CALL2(1,VARREF(YgooSmacrosYdo),T3,T4);
  T6 = BOXVAL(changedF3465);
  T5 = CALL2(1,VARREF(YevalSastYremove_modules_by_nameX),loader_,T6);
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
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
  P modF3466;
  P T0,T1,T2;
LINK_STACK();
  ARG(loader_, 0);
  CALL1(1,VARREF(YevalSg2cYpurge_outdated_modules),loader_);
  T2 = CALL1(1,VARREF(YevalSg2cYmodule_loader_app_modname),loader_);
  T1 = CALL2(1,VARREF(YevalSastYprobe_module),loader_,T2);
  modF3466 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),VARREF(YgooSioSportYout),LITREF(lit_38));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),VARREF(YevalSastYreport_undefined_global_bindings),loader_);
  CALL2(1,VARREF(YevalSg2cYgenerate_c_application),loader_,modF3466);
  CALL1(1,VARREF(YevalSg2cYgenerate_makefile),loader_);
  T0 = YPfalse;
UNLINK_STACK();
  QRET(T0);
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
  P x_1556F3467;
  P T0,T1,T2,T3;
LINK_STACK();
  DYNSET(YevalSg2cYTdynamic_linkingQT,YPtrue);
  x_1556F3467 = DYNREF(YevalSg2cYTdefinitionsT);
  T2 = FUNFAB(fun_22,4,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  T3 = FUNFAB(fun_23,1,x_1556F3467);
  T1 = with_cleanup(T2,T3);
  T0 = T1;
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
  P x_1555F3468;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  x_1555F3468 = DYNREF(YevalSg2cYTdynamic_linkingQT);
  T3 = FUNFAB(fun_24,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T4 = FUNFAB(fun_25,1,x_1555F3468);
  T2 = with_cleanup(T3,T4);
  T1 = T2;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_27) {
  P tmpF3469;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  T1 = BOXVAL(FREEREF(0));
  tmpF3469 = T1;
  if (tmpF3469 != YPfalse) {
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
  P out_portF3475;
  P prgF3474;
  P out_fileF3473;
  P fileF3472;
  P nameF3471;
  P modF3470;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
  T1 = CALL1(1,VARREF(YevalSastYenvironment_module),env_);
  modF3470 = T1;
  T4 = CALL0(1,VARREF(YgooSsystemYprocess_id));
  T6 = CALL2(1,VARREF(YgooSmathYA),DYNREF(YevalSg2cYTtmp_file_counterT),YPint((P)1));
  T5 = DYNSET(YevalSg2cYTtmp_file_counterT,T6);
  T3 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_45),T4,T5);
  nameF3471 = T3;
  T8 = CALL1(1,VARREF(YgooSsystemYadd_tmp_path),nameF3471);
  fileF3472 = T8;
  T10 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF3472);
  out_fileF3473 = T10;
  T12 = CALL2(1,VARREF(YevalSg2cYcompute_program),ast_,env_);
  prgF3474 = T12;
  out_portF3475 = YPfalse;
  out_portF3475 = BOXFAB(out_portF3475);
  T15 = FUNFAB(fun_26,5,out_portF3475,out_fileF3473,prgF3474,ast_,modF3470);
  T16 = FUNFAB(fun_27,1,out_portF3475);
  T14 = with_cleanup(T15,T16);
  T11 = fileF3472;
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
  P nameF3476;
  P T0,T1,T2;
LINK_STACK();
  ARG(exp_, 0);
  ARG(env_, 1);
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_exp),exp_,env_);
  nameF3476 = T1;
  T2 = CALL1(1,VARREF(YevalSg2cYcompile_load),nameF3476);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_eval_32) {
  P ast_,env_;
  P nameF3477;
  P T0,T1,T2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_ast),ast_,env_);
  nameF3477 = T1;
  T2 = CALL1(1,VARREF(YevalSg2cYcompile_load),nameF3477);
  T0 = T2;
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
  P astF3479;
  P sexprF3478;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(filename_, 0);
  ARG(ct_env_, 1);
  T1 = CALL1(1,VARREF(YevalStopYread_file),filename_);
  sexprF3478 = T1;
  T2 = (P)YPsu(LITREF(lit_61));
  (P)YevalSg2cYPprint_cpu_usage(T2);
  T4 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),sexprF3478,ct_env_,YPfalse);
  astF3479 = T4;
  T5 = (P)YPsu(LITREF(lit_62));
  (P)YevalSg2cYPprint_cpu_usage(T5);
  T3 = astF3479;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_compute_program_36) {
  P e_,env_;
  P fltF3484;
  P prgF3483;
  P lftF3482;
  P boxF3481;
  P anaF3480;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T1 = CALL2(1,VARREF(YevalSast_linearizeYanalyze_calls),e_,env_);
  anaF3480 = T1;
  T2 = (P)YPsu(LITREF(lit_65));
  (P)YevalSg2cYPprint_cpu_usage(T2);
  T4 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),anaF3480);
  boxF3481 = T4;
  T5 = (P)YPsu(LITREF(lit_66));
  (P)YevalSg2cYPprint_cpu_usage(T5);
  T7 = CALL1(1,VARREF(YevalSast_linearizeYliftX),boxF3481);
  lftF3482 = T7;
  T8 = (P)YPsu(LITREF(lit_67));
  (P)YevalSg2cYPprint_cpu_usage(T8);
  T10 = CALL1(1,VARREF(YevalSast_linearizeYextract_thingsX),lftF3482);
  prgF3483 = T10;
  T11 = (P)YPsu(LITREF(lit_68));
  (P)YevalSg2cYPprint_cpu_usage(T11);
  T13 = CALL3(1,VARREF(YevalSast_linearizeYclosurize_mainX),prgF3483,env_,YPint((P)64));
  fltF3484 = T13;
  T14 = (P)YPsu(LITREF(lit_69));
  (P)YevalSg2cYPprint_cpu_usage(T14);
  CALL1(1,VARREF(YevalSast_linearizeYgather_temporariesX),fltF3484);
  T15 = (P)YPsu(LITREF(lit_70));
  (P)YevalSg2cYPprint_cpu_usage(T15);
  CALL2(1,VARREF(YevalSast_linearizeYregister_allocateX),fltF3484,YPfalse);
  T16 = (P)YPsu(LITREF(lit_71));
  (P)YevalSg2cYPprint_cpu_usage(T16);
  T12 = prgF3483;
  T9 = T12;
  T6 = T9;
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
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
  P tmpF3485;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  T1 = BOXVAL(FREEREF(0));
  tmpF3485 = T1;
  if (tmpF3485 != YPfalse) {
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
  P out_portF3489;
  P out_nameF3488;
  P init_nameF3487;
  P appnameF3486;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(loader_, 0);
  ARG(mod_, 1);
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF3486 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF3486,LITREF(lit_76));
  init_nameF3487 = T3;
  T6 = CALL1(1,VARREF(YgooSsystemYc_filename),init_nameF3487);
  T5 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF3486,T6);
  out_nameF3488 = T5;
  out_portF3489 = YPfalse;
  out_portF3489 = BOXFAB(out_portF3489);
  T9 = FUNFAB(fun_38,4,out_portF3489,out_nameF3488,appnameF3486,mod_);
  T10 = FUNFAB(fun_39,1,out_portF3489);
  T8 = with_cleanup(T9,T10);
  T4 = YPfalse;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
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
  P x_1559F3504;
  P x_1559F3503;
  P x_1559F3502;
  P x_1559F3501;
  P x_1559F3500;
  P x_1559F3499;
  P x_1559F3498;
  P x_1559F3497;
  P x_1559F3496;
  P x_1559F3495;
  P bodyF3494;
  P loaderF3493;
  P modF3492;
  P x_1559F3491;
  P x_1560F3490;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1560_41,2);
  x_1560F3490 = T1;
  FUNINIT(x_1560F3490, 2,FREEREF(0),return_);
  x_1559F3491 = FREEREF(0);
  modF3492 = YPfalse;
  modF3492 = BOXFAB(modF3492);
  loaderF3493 = YPfalse;
  loaderF3493 = BOXFAB(loaderF3493);
  bodyF3494 = YPfalse;
  bodyF3494 = BOXFAB(bodyF3494);
  T9 = CALL2(1,VARREF(YisaQ),x_1559F3491,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1559F3491,LITREF(lit_81),x_1560F3490);
    x_1559F3495 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1559F3495,x_1560F3490);
    x_1559F3496 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1559F3496,x_1560F3490);
    BOXVAL(modF3492) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1559F3496);
    x_1559F3497 = T16;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1559F3497,x_1560F3490);
    BOXVAL(loaderF3493) = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1559F3497);
    x_1559F3498 = T19;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1559F3498,x_1560F3490);
    x_1559F3499 = T21;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1559F3499,x_1560F3490);
    T23 = CALL1(1,VARREF(Ytail),x_1559F3498);
    x_1559F3500 = T23;
    T24 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1559F3500,x_1560F3490);
    T20 = T24;
    T17 = T20;
    T14 = T17;
    T25 = CALL1(1,VARREF(Ytail),x_1559F3495);
    x_1559F3501 = T25;
    BOXVAL(bodyF3494) = x_1559F3501;
    x_1559F3502 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1559F3502,x_1560F3490);
    x_1559F3503 = T28;
    T29 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1559F3503,x_1560F3490);
    T30 = CALL1(1,VARREF(Ytail),x_1559F3502);
    x_1559F3504 = T30;
    T31 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1559F3504,x_1560F3490);
    T27 = T31;
    T26 = T27;
    T12 = T26;
    T10 = T12;
  } else {
    T32 = CALL2(1,x_1560F3490,LITREF(lit_82),x_1559F3491);
  }
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_83));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T41 = BOXVAL(modF3492);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T39 = CALL2(1,VARREF(YgooSmacrosYcat),T40,LITREF(lit_85));
  T38 = CALL1(1,VARREF(Ylst),T39);
  T42 = BOXVAL(bodyF3494);
  T36 = CALL4(1,VARREF(YgooSmacrosYcat),T37,T38,T42,LITREF(lit_85));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T44 = BOXVAL(loaderF3493);
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
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_42,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_44) {
  P i_;
  P x_1564F3505;
  P T0,T1,T2;
LINK_STACK();
  ARG(i_, 0);
  T1 = BOXVAL(FREEREF(0));
  x_1564F3505 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_1564F3505,LITREF(lit_97));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1564F3505,i_);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1564F3505,LITREF(lit_98));
  T0 = T2;
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
  P x_1567F3506;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(name_, 0);
  T1 = BOXVAL(FREEREF(0));
  x_1567F3506 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_1567F3506,LITREF(lit_104));
  T3 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  T2 = CALL1(1,VARREF(YgooSsystemYobj_filename),T3);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1567F3506,T2);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1567F3506,LITREF(lit_105));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
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
  P put_objF3507;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(mod_, 0);
  T1 = FUNSHELL(1,fun_put_obj_46,1);
  put_objF3507 = T1;
  FUNINIT(put_objF3507, 1,FREEREF(0));
  T2 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  CALL1(0,put_objF3507,T2);
  T4 = FUNFAB(fun_47,1,put_objF3507);
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
  P x_1571F3508;
  P T0,T1,T2;
LINK_STACK();
  ARG(l_, 0);
  T1 = BOXVAL(FREEREF(0));
  x_1571F3508 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_1571F3508,LITREF(lit_116));
  T2 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1571F3508,l_);
  T0 = T2;
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
  P x_1572F3517;
  P x_1570F3516;
  P x_1569F3515;
  P x_1568F3514;
  P x_1566F3513;
  P x_1565F3512;
  P x_1563F3511;
  P x_1562F3510;
  P x_1561F3509;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T1 = BOXVAL(FREEREF(0));
  x_1561F3509 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_1561F3509,LITREF(lit_90));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1561F3509,FREEREF(2));
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1561F3509,LITREF(lit_91));
  T3 = BOXVAL(FREEREF(0));
  x_1562F3510 = T3;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1562F3510,VARREF(YgooSsystemYTc_extensionT));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1562F3510,VARREF(YgooSsystemYTobj_extensionT));
  CALL2(1,VARREF(YgooSioSportYputs),x_1562F3510,LITREF(lit_92));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1562F3510,FREEREF(2));
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1562F3510,LITREF(lit_93));
  T5 = BOXVAL(FREEREF(0));
  x_1563F3511 = T5;
  T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1563F3511,LITREF(lit_94));
  T7 = FUNFAB(fun_45,1,FREEREF(0));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T7,FREEREF(3));
  T8 = BOXVAL(FREEREF(0));
  x_1565F3512 = T8;
  T9 = CALL2(1,VARREF(YgooSioSportYputs),x_1565F3512,LITREF(lit_99));
  T10 = BOXVAL(FREEREF(0));
  x_1566F3513 = T10;
  T11 = CALL2(1,VARREF(YgooSioSportYputs),x_1566F3513,LITREF(lit_100));
  T12 = FUNFAB(fun_49,1,FREEREF(0));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T12,FREEREF(3));
  T13 = BOXVAL(FREEREF(0));
  x_1568F3514 = T13;
  CALL2(1,VARREF(YgooSioSportYputs),x_1568F3514,LITREF(lit_109));
  T14 = CALL1(1,VARREF(YgooSsystemYobj_filename),FREEREF(4));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1568F3514,T14);
  T15 = CALL2(1,VARREF(YgooSioSportYputs),x_1568F3514,LITREF(lit_110));
  T16 = BOXVAL(FREEREF(0));
  x_1569F3515 = T16;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1569F3515,FREEREF(5));
  T17 = CALL2(1,VARREF(YgooSioSportYputs),x_1569F3515,LITREF(lit_111));
  T18 = BOXVAL(FREEREF(0));
  x_1570F3516 = T18;
  CALL2(1,VARREF(YgooSioSportYputs),x_1570F3516,LITREF(lit_112));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1570F3516,FREEREF(5));
  T19 = CALL2(1,VARREF(YgooSioSportYputs),x_1570F3516,LITREF(lit_113));
  T20 = FUNFAB(fun_51,1,FREEREF(0));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T20,FREEREF(3));
  T22 = BOXVAL(FREEREF(0));
  x_1572F3517 = T22;
  CALL2(1,VARREF(YgooSioSportYputs),x_1572F3517,LITREF(lit_117));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1572F3517,FREEREF(5));
  T23 = CALL2(1,VARREF(YgooSioSportYputs),x_1572F3517,LITREF(lit_118));
  T21 = T23;
UNLINK_STACK();
  QRET(T21);
}

FUNCODEDEF(fun_53) {
  P tmpF3518;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  T1 = BOXVAL(FREEREF(0));
  tmpF3518 = T1;
  if (tmpF3518 != YPfalse) {
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
  P outF3524;
  P out_nameF3523;
  P sepF3522;
  P exe_nameF3521;
  P init_nameF3520;
  P appnameF3519;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(loader_, 0);
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF3519 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF3519,LITREF(lit_88));
  init_nameF3520 = T3;
  T5 = CALL1(1,VARREF(YgooSsystemYexe_filename),appnameF3519);
  exe_nameF3521 = T5;
  sepF3522 = VARREF(YgooSsystemYTpath_separatorT);
  T8 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF3519,LITREF(lit_89));
  out_nameF3523 = T8;
  outF3524 = YPfalse;
  outF3524 = BOXFAB(outF3524);
  T12 = FUNFAB(fun_52,6,outF3524,out_nameF3523,sepF3522,loader_,init_nameF3520,exe_nameF3521);
  T13 = FUNFAB(fun_53,1,outF3524);
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
  P x_1581F3534;
  P x_1580F3533;
  P x_1579F3532;
  P x_1578F3531;
  P x_1577F3530;
  P x_1576F3529;
  P x_1575F3528;
  P x_1574F3527;
  P x_1573F3526;
  P modvarF3525;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(out_, 0);
  ARG(modname_, 1);
  modvarF3525 = VARREF(YevalSg2cYDnow_mod_var_name);
  x_1573F3526 = out_;
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1573F3526,LITREF(lit_124));
  x_1574F3527 = out_;
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1574F3527,LITREF(lit_125));
  if (DYNREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    x_1575F3528 = out_;
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1575F3528,LITREF(lit_126));
    T3 = T4;
  } else {
  }
  x_1576F3529 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1576F3529,LITREF(lit_127));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1576F3529,modvarF3525);
  T5 = CALL2(1,VARREF(YgooSioSportYputs),x_1576F3529,LITREF(lit_128));
  x_1577F3530 = out_;
  T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1577F3530,LITREF(lit_129));
  x_1578F3531 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1578F3531,LITREF(lit_130));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1578F3531,modvarF3525);
  CALL2(1,VARREF(YgooSioSportYputs),x_1578F3531,LITREF(lit_131));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1578F3531,modvarF3525);
  T7 = CALL2(1,VARREF(YgooSioSportYputs),x_1578F3531,LITREF(lit_132));
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,modname_);
  x_1579F3532 = out_;
  T8 = CALL2(1,VARREF(YgooSioSportYputs),x_1579F3532,LITREF(lit_133));
  x_1580F3533 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1580F3533,LITREF(lit_134));
  T9 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_135));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1580F3533,T9);
  CALL2(1,VARREF(YgooSioSportYputs),x_1580F3533,LITREF(lit_136));
  T10 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_137));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1580F3533,T10);
  CALL2(1,VARREF(YgooSioSportYputs),x_1580F3533,LITREF(lit_138));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1580F3533,modvarF3525);
  T11 = CALL2(1,VARREF(YgooSioSportYputs),x_1580F3533,LITREF(lit_139));
  x_1581F3534 = out_;
  T13 = CALL2(1,VARREF(YgooSioSportYputs),x_1581F3534,LITREF(lit_140));
  T12 = T13;
  T0 = T12;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_trailer_57) {
  P out_;
  P x_1582F3535;
  P T0,T1;
LINK_STACK();
  ARG(out_, 0);
  x_1582F3535 = out_;
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1582F3535,LITREF(lit_143));
  T0 = T1;
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
  P x_1583F3536;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  x_1583F3536 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1583F3536,LITREF(lit_146));
  T0 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1583F3536,T0);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1583F3536,LITREF(lit_147));
  T3 = FUNFAB(fun_58,2,out_,mod_);
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T2 = CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T3,T4);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_generate_global_binding_60) {
  P out_,importedQ_,gb_;
  P x_1586F3543;
  P x_1585F3542;
  P x_1584F3541;
  P nameF3540;
  P tmpF3539;
  P tmpF3538;
  P kindF3537;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(out_, 0);
  ARG(importedQ_, 1);
  ARG(gb_, 2);
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),gb_);
  kindF3537 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),kindF3537,LITREF(lit_151));
  tmpF3538 = T4;
  if (tmpF3538 != YPfalse) {
    T5 = tmpF3538;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),kindF3537,LITREF(lit_152));
    tmpF3539 = T7;
    if (tmpF3539 != YPfalse) {
      T8 = tmpF3539;
    } else {
      T9 = CALL2(1,VARREF(YgooSmacrosYEE),kindF3537,LITREF(lit_153));
      T8 = T9;
    }
    T6 = T8;
    T5 = T6;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T11 = CALL1(1,VARREF(YevalSastYbinding_name),gb_);
    nameF3540 = T11;
    x_1584F3541 = kindF3537;
    x_1585F3542 = VARREF(YgooSmacrosYEE);
    T15 = CALL2(1,x_1585F3542,x_1584F3541,LITREF(lit_152));
    if (T15 != YPfalse) {
      T14 = LITREF(lit_154);
    } else {
      T17 = CALL2(1,x_1585F3542,x_1584F3541,LITREF(lit_153));
      if (T17 != YPfalse) {
        T16 = LITREF(lit_155);
      } else {
        T16 = LITREF(lit_156);
      }
      T14 = T16;
    }
    T13 = T14;
    T12 = T13;
    CALL2(1,VARREF(YgooSioSportYputs),out_,T12);
    x_1586F3543 = out_;
    if (importedQ_ != YPfalse) {
      T19 = LITREF(lit_157);
    } else {
      T19 = LITREF(lit_158);
    }
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1586F3543,T19);
    CALL2(1,VARREF(YgooSioSportYputs),x_1586F3543,LITREF(lit_159));
    T20 = CALL1(1,VARREF(YevalSg2cYmangle_binding),gb_);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1586F3543,T20);
    CALL2(1,VARREF(YgooSioSportYputs),x_1586F3543,LITREF(lit_160));
    T22 = CALL1(1,VARREF(YevalSastYbinding_module_name),gb_);
    T21 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T22);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1586F3543,T21);
    CALL2(1,VARREF(YgooSioSportYputs),x_1586F3543,LITREF(lit_161));
    T23 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),nameF3540);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1586F3543,T23);
    T24 = CALL2(1,VARREF(YgooSioSportYputs),x_1586F3543,LITREF(lit_162));
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

FUNCODEDEF(YevalSg2cYchar_buffer_as_string) {
  P buffer_;
  P iF3546;
  P stringF3545;
  P buffer_sizeF3544;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(buffer_, 0);
  T1 = CALL1(1,VARREF(YgooStypesYlen),buffer_);
  check_type(T1,VARREF(YLintG));
  buffer_sizeF3544 = T1;
  T3 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YLstrG),buffer_sizeF3544);
  check_type(T3,VARREF(YLstrG));
  stringF3545 = T3;
  iF3546 = YPint((P)0);
  for (;;) {
    P a199_0;
  loop199:
    T6 = CALL2(1,VARREF(YgooSmagYL),iF3546,buffer_sizeF3544);
    if (T6 != YPfalse) {
      T7 = CALL2(1,VARREF(YgooScolsScolYlow_elt),buffer_,iF3546);
      CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),T7,stringF3545,iF3546);
      T9 = CALL2(1,VARREF(YgooSmathYA),iF3546,YPint((P)1));
      a199_0 = T9;
      iF3546 = a199_0;
      goto loop199;
      T5 = T8;
    } else {
      T5 = YPfalse;
    }
    break;
  }
  T4 = T5;
  T2 = stringF3545;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_string_literal_62) {
  P str_;
  P encF3550;
  P cF3549;
  P iF3548;
  P lenF3547;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(str_, 0);
  CALL2(1,VARREF(YgooScolsScolxYlen_setter),YPint((P)0),VARREF(YevalSg2cYTmangle_bufferT));
  T1 = CALL1(1,VARREF(YgooStypesYlen),str_);
  lenF3547 = T1;
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),YPchr((P)34));
  iF3548 = YPint((P)0);
  for (;;) {
    P a200_0;
  loop200:
    T5 = CALL2(1,VARREF(YgooSmathYE),iF3548,lenF3547);
    if (T5 != YPfalse) {
      CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),YPchr((P)34));
      T6 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
      T4 = T6;
    } else {
      T8 = CALL2(1,VARREF(YgooSmacrosYelt),str_,iF3548);
      cF3549 = T8;
      T11 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),cF3549);
      T10 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDc_escapes),T11);
      encF3550 = T10;
      T12 = CALL2(1,VARREF(YgooSmathYE),encF3550,YPfalse);
      if (T12 != YPfalse) {
        T13 = CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),cF3549);
      } else {
        T14 = CALL2(1,VARREF(YgooScolsSseqxYcatX),VARREF(YevalSg2cYTmangle_bufferT),encF3550);
      }
      T16 = CALL2(1,VARREF(YgooSmathYA),iF3548,YPint((P)1));
      a200_0 = T16;
      iF3548 = a200_0;
      goto loop200;
      T9 = T15;
      T7 = T9;
      T4 = T7;
    }
    break;
  }
  T3 = T4;
  T2 = T3;
  T0 = T2;
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
  P resultF3556;
  P resultF3555;
  P digitF3554;
  P remainderF3553;
  P quotientF3552;
  P tup34F3551;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(number_, 0);
  ARG(index_, 1);
  T1 = CALL2(1,VARREF(YgooSmathYtruncS),number_,YPint((P)10));
  tup34F3551 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup34F3551,YPint((P)0));
  check_type(T3,VARREF(YLintG));
  quotientF3552 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup34F3551,YPint((P)1));
  check_type(T5,VARREF(YLintG));
  remainderF3553 = T5;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDnumber_characters),remainderF3553);
  check_type(T7,VARREF(YLchrG));
  digitF3554 = T7;
  T9 = CALL2(1,VARREF(YgooSmathYE),quotientF3552,YPint((P)0));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),index_);
    check_type(T11,VARREF(YgooScolsSvecYLvecG));
    resultF3555 = T11;
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),digitF3554,resultF3555,YPint((P)0));
    T10 = resultF3555;
    T8 = T10;
  } else {
    T14 = CALL2(1,VARREF(YgooSmathYA),index_,YPint((P)1));
    T13 = CALL2(1,FREEREF(0),quotientF3552,T14);
    check_type(T13,VARREF(YgooScolsSvecYLvecG));
    resultF3556 = T13;
    T16 = CALL1(1,VARREF(YgooStypesYlen),resultF3556);
    T15 = CALL2(1,VARREF(YgooSmathY_),T16,index_);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),digitF3554,resultF3556,T15);
    T12 = resultF3556;
    T8 = T12;
  }
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_integer_65) {
  P number_;
  P process_integerF3557;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(number_, 0);
  T2 = FUNSHELL(1,fun_process_integer_64,1);
  process_integerF3557 = T2;
  FUNINIT(process_integerF3557, 1,process_integerF3557);
  T3 = CALL2(1,process_integerF3557,number_,YPint((P)1));
  T1 = T3;
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
  P cF3559;
  P x_1595F3558;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(buf_, 0);
  ARG(name_, 1);
  T0 = CALL1(1,VARREF(YgooScolsScolYenum),name_);
  x_1595F3558 = T0;
  for (;;) {
    P a201_0;
  loop201:
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1595F3558);
    T3 = CALL1(1,VARREF(Ynot),T4);
    if (T3 != YPfalse) {
      T6 = CALL1(1,VARREF(YgooScolsScolYnow),x_1595F3558);
      cF3559 = T6;
      T9 = CALL1(1,VARREF(YgooSmathYto_lower),cF3559);
      T8 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T9);
      T7 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDname_mangler_table),T8);
      CALL2(1,VARREF(YgooScolsScolxYaddX),buf_,T7);
      T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1595F3558);
      a201_0 = T11;
      x_1595F3558 = a201_0;
      goto loop201;
      T5 = T10;
      T2 = T5;
    } else {
      T2 = YPfalse;
    }
    break;
  }
  T1 = T2;
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
  P iF3561;
  P lenF3560;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(buf_, 0);
  ARG(name_, 1);
  T1 = CALL1(1,VARREF(YgooStypesYlen),name_);
  lenF3560 = T1;
  iF3561 = YPint((P)0);
  for (;;) {
    P a202_0;
  loop202:
    T5 = CALL2(1,VARREF(YgooSmagYL),iF3561,lenF3560);
    if (T5 != YPfalse) {
      T6 = CALL2(1,VARREF(YgooScolsScolYlow_elt),name_,iF3561);
      CALL2(1,VARREF(YgooScolsScolxYaddX),buf_,T6);
      T8 = CALL2(1,VARREF(YgooSmathYA),iF3561,YPint((P)1));
      a202_0 = T8;
      iF3561 = a202_0;
      goto loop202;
      T4 = T7;
    } else {
      T4 = YPfalse;
    }
    break;
  }
  T3 = T4;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_module_into_73) {
  P buf_,mod_;
  P nameF3565;
  P tmpF3564;
  P UF3563;
  P x_1597F3562;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(buf_, 0);
  ARG(mod_, 1);
  x_1597F3562 = mod_;
  T3 = CALL1(1,VARREF(YevalSastYmodule_mangled_name),x_1597F3562);
  UF3563 = T3;
  T5 = CALL1(1,VARREF(YevalSastYmodule_mangled_name),x_1597F3562);
  tmpF3564 = T5;
  if (tmpF3564 != YPfalse) {
    T6 = tmpF3564;
  } else {
    T10 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
    T12 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T11 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T12);
    T9 = CALL2(1,VARREF(YevalSg2cYmangle_name_into),T10,T11);
    T8 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),T9);
    T7 = CALL2(1,VARREF(YevalSastYmodule_mangled_name_setter),T8,x_1597F3562);
    T6 = T7;
  }
  T4 = T6;
  T2 = T4;
  T1 = T2;
  nameF3565 = T1;
  T13 = CALL2(1,VARREF(YevalSg2cYbuf_cat2X),buf_,nameF3565);
  T0 = T13;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_global_name_74) {
  P mod_,name_;
  P tmpF3566;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),mod_,VARREF(YevalSastYDgoo_boot_module_name));
  tmpF3566 = T2;
  if (tmpF3566 != YPfalse) {
    T3 = tmpF3566;
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
  P tmpF3569;
  P UF3568;
  P x_1598F3567;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(binding_, 0);
  x_1598F3567 = binding_;
  T2 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),x_1598F3567);
  UF3568 = T2;
  T4 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),x_1598F3567);
  tmpF3569 = T4;
  if (tmpF3569 != YPfalse) {
    T5 = tmpF3569;
  } else {
    T9 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),T9,LITREF(lit_227));
    if (T8 != YPfalse) {
      T11 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
      T10 = CALL1(1,VARREF(YevalSg2cYmangle_quotation_name),T11);
      T7 = T10;
    } else {
      T13 = CALL1(1,VARREF(YevalSastYbinding_module),binding_);
      T14 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
      T12 = CALL2(1,VARREF(YevalSg2cYmangle_global_name),T13,T14);
      T7 = T12;
    }
    T6 = CALL2(1,VARREF(YevalSastYbinding_mangled_name_setter),T7,x_1598F3567);
    T5 = T6;
  }
  T3 = T5;
  T1 = T3;
  T0 = T1;
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
  P tmpF3572;
  P UF3571;
  P x_1599F3570;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(binding_, 0);
  x_1599F3570 = binding_;
  T2 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),x_1599F3570);
  UF3571 = T2;
  T4 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),x_1599F3570);
  tmpF3572 = T4;
  if (tmpF3572 != YPfalse) {
    T5 = tmpF3572;
  } else {
    T8 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T7 = CALL1(1,VARREF(YevalSg2cYmangle_local_name),T8);
    T6 = CALL2(1,VARREF(YevalSastYbinding_mangled_name_setter),T7,x_1599F3570);
    T5 = T6;
  }
  T3 = T5;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_binding_81) {
  P binding_;
  P tmpF3575;
  P UF3574;
  P x_1600F3573;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(binding_, 0);
  x_1600F3573 = binding_;
  T2 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),x_1600F3573);
  UF3574 = T2;
  T4 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),x_1600F3573);
  tmpF3575 = T4;
  if (tmpF3575 != YPfalse) {
    T5 = tmpF3575;
  } else {
    T9 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T8 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T9);
    T10 = CALL1(1,VARREF(YevalSastYbinding_index),binding_);
    T7 = CALL2(1,VARREF(YevalSg2cYmangle_local_marked_name),T8,T10);
    T6 = CALL2(1,VARREF(YevalSastYbinding_mangled_name_setter),T7,x_1600F3573);
    T5 = T6;
  }
  T3 = T5;
  T1 = T3;
  T0 = T1;
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
  P out_varF3591;
  P x_1603F3590;
  P x_1603F3589;
  P x_1603F3588;
  P x_1603F3587;
  P x_1603F3586;
  P x_1603F3585;
  P x_1603F3584;
  P x_1603F3583;
  P x_1603F3582;
  P x_1603F3581;
  P bodyF3580;
  P clausesF3579;
  P out_valF3578;
  P x_1603F3577;
  P x_1604F3576;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1604_82,2);
  x_1604F3576 = T1;
  FUNINIT(x_1604F3576, 2,FREEREF(0),return_);
  x_1603F3577 = FREEREF(0);
  out_valF3578 = YPfalse;
  out_valF3578 = BOXFAB(out_valF3578);
  clausesF3579 = YPfalse;
  clausesF3579 = BOXFAB(clausesF3579);
  bodyF3580 = YPfalse;
  bodyF3580 = BOXFAB(bodyF3580);
  T9 = CALL2(1,VARREF(YisaQ),x_1603F3577,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1603F3577,LITREF(lit_236),x_1604F3576);
    x_1603F3581 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1603F3581,x_1604F3576);
    BOXVAL(out_valF3578) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1603F3581);
    x_1603F3582 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1603F3582,x_1604F3576);
    x_1603F3583 = T16;
    BOXVAL(clausesF3579) = x_1603F3583;
    x_1603F3584 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1603F3584,x_1604F3576);
    x_1603F3585 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1603F3585,x_1604F3576);
    T21 = CALL1(1,VARREF(Ytail),x_1603F3584);
    x_1603F3586 = T21;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1603F3586,x_1604F3576);
    T18 = T22;
    T17 = T18;
    T23 = CALL1(1,VARREF(Ytail),x_1603F3582);
    x_1603F3587 = T23;
    BOXVAL(bodyF3580) = x_1603F3587;
    x_1603F3588 = Ynil;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1603F3588,x_1604F3576);
    x_1603F3589 = T26;
    T27 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1603F3589,x_1604F3576);
    T28 = CALL1(1,VARREF(Ytail),x_1603F3588);
    x_1603F3590 = T28;
    T29 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1603F3590,x_1604F3576);
    T25 = T29;
    T24 = T25;
    T15 = T24;
    T12 = T15;
    T10 = T12;
  } else {
    T30 = CALL2(1,x_1604F3576,LITREF(lit_82),x_1603F3577);
  }
  T32 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF3591 = T32;
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_237));
  T39 = CALL1(1,VARREF(Ylst),out_varF3591);
  T41 = BOXVAL(out_valF3578);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T38 = CALL3(1,VARREF(YgooSmacrosYcat),T39,T40,LITREF(lit_85));
  T37 = CALL1(1,VARREF(Ylst),T38);
  T36 = CALL2(1,VARREF(YgooSmacrosYcat),T37,LITREF(lit_85));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_238));
  T47 = BOXVAL(clausesF3579);
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_239));
  T53 = CALL1(1,VARREF(Ylst),LITREF(lit_240));
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_241));
  T57 = CALL1(1,VARREF(Ylst),YPtrue);
  T55 = CALL3(1,VARREF(YgooSmacrosYcat),T56,T57,LITREF(lit_85));
  T54 = CALL1(1,VARREF(Ylst),T55);
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_241));
  T61 = CALL1(1,VARREF(Ylst),YPfalse);
  T59 = CALL3(1,VARREF(YgooSmacrosYcat),T60,T61,LITREF(lit_85));
  T58 = CALL1(1,VARREF(Ylst),T59);
  T52 = CALL4(1,VARREF(YgooSmacrosYcat),T53,T54,T58,LITREF(lit_85));
  T51 = CALL1(1,VARREF(Ylst),T52);
  T49 = CALL3(1,VARREF(YgooSmacrosYcat),T50,T51,LITREF(lit_85));
  T48 = CALL1(1,VARREF(Ylst),T49);
  T46 = CALL3(1,VARREF(YgooSmacrosYcat),T47,T48,LITREF(lit_85));
  T45 = CALL1(1,VARREF(Ylst),T46);
  T64 = CALL1(1,VARREF(Ylst),LITREF(lit_242));
  T65 = CALL1(1,VARREF(Ylst),LITREF(lit_239));
  T68 = CALL1(1,VARREF(Ylst),LITREF(lit_243));
  T69 = CALL1(1,VARREF(Ylst),out_varF3591);
  T70 = CALL1(1,VARREF(Ylst),YPchr((P)44));
  T67 = CALL4(1,VARREF(YgooSmacrosYcat),T68,T69,T70,LITREF(lit_85));
  T66 = CALL1(1,VARREF(Ylst),T67);
  T63 = CALL4(1,VARREF(YgooSmacrosYcat),T64,T65,T66,LITREF(lit_85));
  T62 = CALL1(1,VARREF(Ylst),T63);
  T71 = BOXVAL(bodyF3580);
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
  P out_varF3605;
  P x_1607F3604;
  P x_1607F3603;
  P x_1607F3602;
  P x_1607F3601;
  P x_1607F3600;
  P x_1607F3599;
  P x_1607F3598;
  P x_1607F3597;
  P x_1607F3596;
  P bodyF3595;
  P out_valF3594;
  P x_1607F3593;
  P x_1608F3592;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1608_85,2);
  x_1608F3592 = T1;
  FUNINIT(x_1608F3592, 2,FREEREF(0),return_);
  x_1607F3593 = FREEREF(0);
  out_valF3594 = YPfalse;
  out_valF3594 = BOXFAB(out_valF3594);
  bodyF3595 = YPfalse;
  bodyF3595 = BOXFAB(bodyF3595);
  T7 = CALL2(1,VARREF(YisaQ),x_1607F3593,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1607F3593,LITREF(lit_248),x_1608F3592);
    x_1607F3596 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1607F3596,x_1608F3592);
    x_1607F3597 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1607F3597,x_1608F3592);
    BOXVAL(out_valF3594) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1607F3597);
    x_1607F3598 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1607F3598,x_1608F3592);
    x_1607F3599 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1607F3599,x_1608F3592);
    T18 = CALL1(1,VARREF(Ytail),x_1607F3598);
    x_1607F3600 = T18;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1607F3600,x_1608F3592);
    T15 = T19;
    T12 = T15;
    T20 = CALL1(1,VARREF(Ytail),x_1607F3596);
    x_1607F3601 = T20;
    BOXVAL(bodyF3595) = x_1607F3601;
    x_1607F3602 = Ynil;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1607F3602,x_1608F3592);
    x_1607F3603 = T23;
    T24 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1607F3603,x_1608F3592);
    T25 = CALL1(1,VARREF(Ytail),x_1607F3602);
    x_1607F3604 = T25;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1607F3604,x_1608F3592);
    T22 = T26;
    T21 = T22;
    T10 = T21;
    T8 = T10;
  } else {
    T27 = CALL2(1,x_1608F3592,LITREF(lit_82),x_1607F3593);
  }
  T29 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF3605 = T29;
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_237));
  T36 = CALL1(1,VARREF(Ylst),out_varF3605);
  T38 = BOXVAL(out_valF3594);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,LITREF(lit_85));
  T34 = CALL1(1,VARREF(Ylst),T35);
  T33 = CALL2(1,VARREF(YgooSmacrosYcat),T34,LITREF(lit_85));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_243));
  T42 = CALL1(1,VARREF(Ylst),out_varF3605);
  T43 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T40 = CALL4(1,VARREF(YgooSmacrosYcat),T41,T42,T43,LITREF(lit_85));
  T39 = CALL1(1,VARREF(Ylst),T40);
  T44 = BOXVAL(bodyF3595);
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_243));
  T48 = CALL1(1,VARREF(Ylst),out_varF3605);
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
  P tmpF3623;
  P firstQF3622;
  P bodyF3621;
  P formsF3620;
  P out_varF3619;
  P x_1611F3618;
  P x_1611F3617;
  P x_1611F3616;
  P x_1611F3615;
  P x_1611F3614;
  P x_1611F3613;
  P x_1611F3612;
  P x_1611F3611;
  P x_1611F3610;
  P bodyF3609;
  P out_valF3608;
  P x_1611F3607;
  P x_1612F3606;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1612_88,2);
  x_1612F3606 = T1;
  FUNINIT(x_1612F3606, 2,FREEREF(0),return_);
  x_1611F3607 = FREEREF(0);
  out_valF3608 = YPfalse;
  out_valF3608 = BOXFAB(out_valF3608);
  bodyF3609 = YPfalse;
  bodyF3609 = BOXFAB(bodyF3609);
  T7 = CALL2(1,VARREF(YisaQ),x_1611F3607,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1611F3607,LITREF(lit_253),x_1612F3606);
    x_1611F3610 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1611F3610,x_1612F3606);
    x_1611F3611 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1611F3611,x_1612F3606);
    BOXVAL(out_valF3608) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1611F3611);
    x_1611F3612 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1611F3612,x_1612F3606);
    x_1611F3613 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1611F3613,x_1612F3606);
    T18 = CALL1(1,VARREF(Ytail),x_1611F3612);
    x_1611F3614 = T18;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1611F3614,x_1612F3606);
    T15 = T19;
    T12 = T15;
    T20 = CALL1(1,VARREF(Ytail),x_1611F3610);
    x_1611F3615 = T20;
    BOXVAL(bodyF3609) = x_1611F3615;
    x_1611F3616 = Ynil;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1611F3616,x_1612F3606);
    x_1611F3617 = T23;
    T24 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1611F3617,x_1612F3606);
    T25 = CALL1(1,VARREF(Ytail),x_1611F3616);
    x_1611F3618 = T25;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1611F3618,x_1612F3606);
    T22 = T26;
    T21 = T22;
    T10 = T21;
    T8 = T10;
  } else {
    T27 = CALL2(1,x_1612F3606,LITREF(lit_82),x_1611F3607);
  }
  T29 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF3619 = T29;
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_237));
  T36 = CALL1(1,VARREF(Ylst),out_varF3619);
  T38 = BOXVAL(out_valF3608);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,LITREF(lit_85));
  T34 = CALL1(1,VARREF(Ylst),T35);
  T33 = CALL2(1,VARREF(YgooSmacrosYcat),T34,LITREF(lit_85));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_243));
  T42 = CALL1(1,VARREF(Ylst),out_varF3619);
  T43 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T40 = CALL4(1,VARREF(YgooSmacrosYcat),T41,T42,T43,LITREF(lit_85));
  T39 = CALL1(1,VARREF(Ylst),T40);
  formsF3620 = Ynil;
  T45 = BOXVAL(bodyF3609);
  bodyF3621 = T45;
  firstQF3622 = YPtrue;
  for (;;) {
    P a203_0,a203_1,a203_2;
  loop203:
    T48 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bodyF3621);
    if (T48 != YPfalse) {
      T49 = CALL1(1,VARREF(YgooSmacrosYrevX),formsF3620);
      T47 = T49;
    } else {
      T52 = CALL1(1,VARREF(Yhead),bodyF3621);
      tmpF3623 = firstQF3622;
      if (tmpF3623 != YPfalse) {
        T55 = tmpF3623;
      } else {
        T57 = CALL1(1,VARREF(Ylst),LITREF(lit_243));
        T58 = CALL1(1,VARREF(Ylst),out_varF3619);
        T59 = CALL1(1,VARREF(Ylst),YPchr((P)44));
        T56 = CALL4(1,VARREF(YgooSmacrosYcat),T57,T58,T59,LITREF(lit_85));
        T55 = T56;
      }
      T54 = T55;
      T53 = CALL2(1,VARREF(YgooSmacrosYpair),T54,formsF3620);
      T51 = CALL2(1,VARREF(YgooSmacrosYpair),T52,T53);
      T60 = CALL1(1,VARREF(Ytail),bodyF3621);
      a203_0 = T51;
      a203_1 = T60;
      a203_2 = YPfalse;
      formsF3620 = a203_0;
      bodyF3621 = a203_1;
      firstQF3622 = a203_2;
      goto loop203;
      T47 = T50;
    }
    break;
  }
  T46 = T47;
  T44 = T46;
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_243));
  T64 = CALL1(1,VARREF(Ylst),out_varF3619);
  T65 = CALL1(1,VARREF(Ylst),YPchr((P)41));
  T62 = CALL4(1,VARREF(YgooSmacrosYcat),T63,T64,T65,LITREF(lit_85));
  T61 = CALL1(1,VARREF(Ylst),T62);
  T30 = CALLN(1,VARREF(YgooSmacrosYcat),6,T31,T32,T39,T44,T61,LITREF(lit_85));
  T28 = T30;
  T5 = T28;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
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
  P tmpF3627;
  P x_1613F3626;
  P tmpF3625;
  P regF3624;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(e_, 0);
  ARG(d_, 1);
  ARG(out_, 2);
  T1 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  regF3624 = T1;
  tmpF3625 = regF3624;
  if (tmpF3625 != YPfalse) {
    x_1613F3626 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1613F3626,LITREF(lit_256));
    T6 = CALL1(1,VARREF(YgooSmathYnum_to_str),regF3624);
    CALL2(1,VARREF(YgooSioSportYputs),x_1613F3626,T6);
    T7 = CALL2(1,VARREF(YgooSioSportYputs),x_1613F3626,LITREF(lit_257));
    T5 = T7;
    tmpF3627 = T5;
    if (tmpF3627 != YPfalse) {
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

FUNCODEDEF(fun_gen_depth_92) {
  P d_,out_;
  P iF3629;
  P x_1614F3628;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(d_, 0);
  ARG(out_, 1);
  T3 = CALL1(1,VARREF(YgooScolsSseqYbelow),d_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  x_1614F3628 = T2;
  for (;;) {
    P a204_0;
  loop204:
    T7 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1614F3628);
    T6 = CALL1(1,VARREF(Ynot),T7);
    if (T6 != YPfalse) {
      T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1614F3628);
      iF3629 = T9;
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_260));
      T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1614F3628);
      a204_0 = T11;
      x_1614F3628 = a204_0;
      goto loop204;
      T8 = T10;
      T5 = T8;
    } else {
      T5 = YPfalse;
    }
    break;
  }
  T4 = T5;
  T1 = T4;
  T0 = T1;
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
  P x_1618F3644;
  P x_1618F3643;
  P x_1618F3642;
  P x_1618F3641;
  P x_1618F3640;
  P x_1618F3639;
  P x_1618F3638;
  P x_1618F3637;
  P x_1618F3636;
  P x_1618F3635;
  P bodyF3634;
  P outF3633;
  P dF3632;
  P x_1618F3631;
  P x_1619F3630;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1619_93,2);
  x_1619F3630 = T1;
  FUNINIT(x_1619F3630, 2,FREEREF(0),return_);
  x_1618F3631 = FREEREF(0);
  dF3632 = YPfalse;
  dF3632 = BOXFAB(dF3632);
  outF3633 = YPfalse;
  outF3633 = BOXFAB(outF3633);
  bodyF3634 = YPfalse;
  bodyF3634 = BOXFAB(bodyF3634);
  T9 = CALL2(1,VARREF(YisaQ),x_1618F3631,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1618F3631,LITREF(lit_265),x_1619F3630);
    x_1618F3635 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1618F3635,x_1619F3630);
    x_1618F3636 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1618F3636,x_1619F3630);
    BOXVAL(dF3632) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1618F3636);
    x_1618F3637 = T16;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1618F3637,x_1619F3630);
    BOXVAL(outF3633) = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1618F3637);
    x_1618F3638 = T19;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1618F3638,x_1619F3630);
    x_1618F3639 = T21;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1618F3639,x_1619F3630);
    T23 = CALL1(1,VARREF(Ytail),x_1618F3638);
    x_1618F3640 = T23;
    T24 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1618F3640,x_1619F3630);
    T20 = T24;
    T17 = T20;
    T14 = T17;
    T25 = CALL1(1,VARREF(Ytail),x_1618F3635);
    x_1618F3641 = T25;
    BOXVAL(bodyF3634) = x_1618F3641;
    x_1618F3642 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1618F3642,x_1619F3630);
    x_1618F3643 = T28;
    T29 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1618F3643,x_1619F3630);
    T30 = CALL1(1,VARREF(Ytail),x_1618F3642);
    x_1618F3644 = T30;
    T31 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1618F3644,x_1619F3630);
    T27 = T31;
    T26 = T27;
    T12 = T26;
    T10 = T12;
  } else {
    T32 = CALL2(1,x_1619F3630,LITREF(lit_82),x_1618F3631);
  }
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_266));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_258));
  T39 = BOXVAL(dF3632);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T41 = BOXVAL(outF3633);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T36 = CALL4(1,VARREF(YgooSmacrosYcat),T37,T38,T40,LITREF(lit_85));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T42 = BOXVAL(bodyF3634);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_267));
  T47 = BOXVAL(outF3633);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_268));
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
  P x_1622F3661;
  P x_1622F3660;
  P x_1622F3659;
  P x_1622F3658;
  P x_1622F3657;
  P x_1622F3656;
  P x_1622F3655;
  P x_1622F3654;
  P x_1622F3653;
  P x_1622F3652;
  P x_1622F3651;
  P bodyF3650;
  P outF3649;
  P dF3648;
  P eF3647;
  P x_1622F3646;
  P x_1623F3645;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1623_96,2);
  x_1623F3645 = T1;
  FUNINIT(x_1623F3645, 2,FREEREF(0),return_);
  x_1622F3646 = FREEREF(0);
  eF3647 = YPfalse;
  eF3647 = BOXFAB(eF3647);
  dF3648 = YPfalse;
  dF3648 = BOXFAB(dF3648);
  outF3649 = YPfalse;
  outF3649 = BOXFAB(outF3649);
  bodyF3650 = YPfalse;
  bodyF3650 = BOXFAB(bodyF3650);
  T11 = CALL2(1,VARREF(YisaQ),x_1622F3646,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1622F3646,LITREF(lit_273),x_1623F3645);
    x_1622F3651 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1622F3651,x_1623F3645);
    x_1622F3652 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1622F3652,x_1623F3645);
    BOXVAL(eF3647) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1622F3652);
    x_1622F3653 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1622F3653,x_1623F3645);
    BOXVAL(dF3648) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1622F3653);
    x_1622F3654 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1622F3654,x_1623F3645);
    BOXVAL(outF3649) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1622F3654);
    x_1622F3655 = T24;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1622F3655,x_1623F3645);
    x_1622F3656 = T26;
    T27 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1622F3656,x_1623F3645);
    T28 = CALL1(1,VARREF(Ytail),x_1622F3655);
    x_1622F3657 = T28;
    T29 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1622F3657,x_1623F3645);
    T25 = T29;
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T30 = CALL1(1,VARREF(Ytail),x_1622F3651);
    x_1622F3658 = T30;
    BOXVAL(bodyF3650) = x_1622F3658;
    x_1622F3659 = Ynil;
    T33 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1622F3659,x_1623F3645);
    x_1622F3660 = T33;
    T34 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1622F3660,x_1623F3645);
    T35 = CALL1(1,VARREF(Ytail),x_1622F3659);
    x_1622F3661 = T35;
    T36 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1622F3661,x_1623F3645);
    T32 = T36;
    T31 = T32;
    T14 = T31;
    T12 = T14;
  } else {
    T37 = CALL2(1,x_1623F3645,LITREF(lit_82),x_1622F3646);
  }
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_265));
  T43 = BOXVAL(dF3648);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T45 = BOXVAL(outF3649);
  T44 = CALL1(1,VARREF(Ylst),T45);
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T44,LITREF(lit_85));
  T40 = CALL1(1,VARREF(Ylst),T41);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_254));
  T50 = BOXVAL(eF3647);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T52 = BOXVAL(dF3648);
  T51 = CALL1(1,VARREF(Ylst),T52);
  T54 = BOXVAL(outF3649);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T47 = CALL5(1,VARREF(YgooSmacrosYcat),T48,T49,T51,T53,LITREF(lit_85));
  T46 = CALL1(1,VARREF(Ylst),T47);
  T55 = BOXVAL(bodyF3650);
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
  P x_1626F3678;
  P x_1626F3677;
  P x_1626F3676;
  P x_1626F3675;
  P x_1626F3674;
  P x_1626F3673;
  P x_1626F3672;
  P x_1626F3671;
  P x_1626F3670;
  P x_1626F3669;
  P x_1626F3668;
  P bodyF3667;
  P outF3666;
  P dF3665;
  P eF3664;
  P x_1626F3663;
  P x_1627F3662;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1627_99,2);
  x_1627F3662 = T1;
  FUNINIT(x_1627F3662, 2,FREEREF(0),return_);
  x_1626F3663 = FREEREF(0);
  eF3664 = YPfalse;
  eF3664 = BOXFAB(eF3664);
  dF3665 = YPfalse;
  dF3665 = BOXFAB(dF3665);
  outF3666 = YPfalse;
  outF3666 = BOXFAB(outF3666);
  bodyF3667 = YPfalse;
  bodyF3667 = BOXFAB(bodyF3667);
  T11 = CALL2(1,VARREF(YisaQ),x_1626F3663,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1626F3663,LITREF(lit_278),x_1627F3662);
    x_1626F3668 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1626F3668,x_1627F3662);
    x_1626F3669 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1626F3669,x_1627F3662);
    BOXVAL(eF3664) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1626F3669);
    x_1626F3670 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1626F3670,x_1627F3662);
    BOXVAL(dF3665) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1626F3670);
    x_1626F3671 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1626F3671,x_1627F3662);
    BOXVAL(outF3666) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1626F3671);
    x_1626F3672 = T24;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1626F3672,x_1627F3662);
    x_1626F3673 = T26;
    T27 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1626F3673,x_1627F3662);
    T28 = CALL1(1,VARREF(Ytail),x_1626F3672);
    x_1626F3674 = T28;
    T29 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1626F3674,x_1627F3662);
    T25 = T29;
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T30 = CALL1(1,VARREF(Ytail),x_1626F3668);
    x_1626F3675 = T30;
    BOXVAL(bodyF3667) = x_1626F3675;
    x_1626F3676 = Ynil;
    T33 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1626F3676,x_1627F3662);
    x_1626F3677 = T33;
    T34 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1626F3677,x_1627F3662);
    T35 = CALL1(1,VARREF(Ytail),x_1626F3676);
    x_1626F3678 = T35;
    T36 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1626F3678,x_1627F3662);
    T32 = T36;
    T31 = T32;
    T14 = T31;
    T12 = T14;
  } else {
    T37 = CALL2(1,x_1627F3662,LITREF(lit_82),x_1626F3663);
  }
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_279));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_280));
  T44 = BOXVAL(eF3664);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,LITREF(lit_85));
  T40 = CALL1(1,VARREF(Ylst),T41);
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_273));
  T51 = BOXVAL(eF3664);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T53 = BOXVAL(dF3665);
  T52 = CALL1(1,VARREF(Ylst),T53);
  T55 = BOXVAL(outF3666);
  T54 = CALL1(1,VARREF(Ylst),T55);
  T49 = CALL4(1,VARREF(YgooSmacrosYcat),T50,T52,T54,LITREF(lit_85));
  T48 = CALL1(1,VARREF(Ylst),T49);
  T56 = BOXVAL(bodyF3667);
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
  P x_1630F3681;
  P qbF3680;
  P x_1628F3679;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(out_, 0);
  ARG(qbT_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_283));
  T1 = CALL1(1,VARREF(YgooScolsScolYenum),qbT_);
  x_1628F3679 = T1;
  for (;;) {
    P a205_0;
  loop205:
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1628F3679);
    T4 = CALL1(1,VARREF(Ynot),T5);
    if (T4 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1628F3679);
      qbF3680 = T7;
      x_1630F3681 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1630F3681,LITREF(lit_284));
      T8 = CALL1(1,VARREF(YevalSastYbinding_name),qbF3680);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1630F3681,T8);
      T9 = CALL2(1,VARREF(YgooSioSportYputs),x_1630F3681,LITREF(lit_285));
      T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1628F3679);
      a205_0 = T11;
      x_1628F3679 = a205_0;
      goto loop205;
      T6 = T10;
      T3 = T6;
    } else {
      T3 = YPfalse;
    }
    break;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotations_103) {
  P out_,qbT_;
  P x_1633F3684;
  P qbF3683;
  P x_1631F3682;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(out_, 0);
  ARG(qbT_, 1);
  T3 = CALL1(1,VARREF(YgooScolsSseqYrev),qbT_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  x_1631F3682 = T2;
  for (;;) {
    P a206_0;
  loop206:
    T7 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1631F3682);
    T6 = CALL1(1,VARREF(Ynot),T7);
    if (T6 != YPfalse) {
      T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1631F3682);
      qbF3683 = T9;
      CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),out_);
      x_1633F3684 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1633F3684,LITREF(lit_288));
      T10 = CALL1(1,VARREF(YevalSastYbinding_name),qbF3683);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1633F3684,T10);
      T11 = CALL2(1,VARREF(YgooSioSportYputs),x_1633F3684,LITREF(lit_289));
      T12 = CALL1(1,VARREF(YevalSastYbinding_info),qbF3683);
      CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,T12);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
      T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1631F3682);
      a206_0 = T14;
      x_1631F3682 = a206_0;
      goto loop206;
      T8 = T13;
      T5 = T8;
    } else {
      T5 = YPfalse;
    }
    break;
  }
  T4 = T5;
  T1 = T4;
  T0 = T1;
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
  P x_1634F3685;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_1634F3685 = out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_301));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1634F3685,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1634F3685,LITREF(lit_302));
  T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),x_);
  CALL2(1,VARREF(YgooSioSportYputs),x_1634F3685,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1634F3685,LITREF(lit_303));
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_110) {
  P out_,x_;
  P x_1635F3686;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_1635F3686 = out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_305));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1635F3686,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1635F3686,LITREF(lit_306));
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),x_);
  T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),T3);
  CALL2(1,VARREF(YgooSioSportYputs),x_1635F3686,T2);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1635F3686,LITREF(lit_307));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_111) {
  P done_;
  P x_1637F3689;
  P x_1636F3688;
  P iF3687;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(done_, 0);
  T3 = CALL1(1,VARREF(YgooStypesYlen),FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmathY_),T3,YPint((P)1));
  iF3687 = T2;
  for (;;) {
    P a207_0;
  loop207:
    T7 = CALL1(1,VARREF(YgooSmathYneg),YPint((P)1));
    T6 = CALL2(1,VARREF(YgooSmagYG),iF3687,T7);
    if (T6 != YPfalse) {
      T9 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(0),iF3687);
      x_1636F3688 = T9;
      x_1637F3689 = VARREF(YgooSmacrosYEE);
      T12 = CALL2(1,x_1637F3689,x_1636F3688,YPchr((P)115));
      if (T12 != YPfalse) {
        CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),iF3687);
        T13 = CALL1(0,done_,YPfalse);
        T11 = T13;
      } else {
        T15 = CALL2(1,x_1637F3689,x_1636F3688,YPchr((P)100));
        if (T15 != YPfalse) {
          CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),iF3687);
          T16 = CALL1(0,done_,YPfalse);
          T14 = T16;
        } else {
          T18 = CALL2(1,x_1637F3689,x_1636F3688,YPchr((P)120));
          if (T18 != YPfalse) {
            CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),iF3687);
            T19 = CALL1(0,done_,YPfalse);
            T17 = T19;
          } else {
            T21 = CALL2(1,VARREF(YgooSmathY_),iF3687,YPint((P)1));
            a207_0 = T21;
            iF3687 = a207_0;
            goto loop207;
            T17 = T20;
          }
          T14 = T17;
        }
        T11 = T14;
      }
      T10 = T11;
      T8 = T10;
      T5 = T8;
    } else {
      T5 = FREEREF(0);
    }
    break;
  }
  T4 = T5;
  T1 = T4;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_float_to_c_string_112) {
  P o_;
  P sF3690;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(o_, 0);
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),o_);
  sF3690 = T1;
  T3 = FUNFAB(fun_111,1,sF3690);
  T2 = with_exit(T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_generate_quotation_113) {
  P out_,x_;
  P x_1638F3691;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_1638F3691 = out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_312));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1638F3691,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1638F3691,LITREF(lit_313));
  T2 = CALL1(1,VARREF(YevalSg2cYfloat_to_c_string),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1638F3691,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1638F3691,LITREF(lit_314));
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_114) {
  P out_,x_;
  P x_1639F3692;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_1639F3692 = out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_316));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1639F3692,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1639F3692,LITREF(lit_317));
  T2 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1639F3692,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1639F3692,LITREF(lit_318));
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_115) {
  P out_,x_;
  P eF3695;
  P x_1641F3694;
  P x_1640F3693;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_1640F3693 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1640F3693,LITREF(lit_320));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_321));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1640F3693,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1640F3693,LITREF(lit_322));
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1640F3693,T2);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  x_1641F3694 = T3;
  for (;;) {
    P a208_0;
  loop208:
    T7 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1641F3694);
    T6 = CALL1(1,VARREF(Ynot),T7);
    if (T6 != YPfalse) {
      T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1641F3694);
      eF3695 = T9;
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_323));
      CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,eF3695);
      T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1641F3694);
      a208_0 = T11;
      x_1641F3694 = a208_0;
      goto loop208;
      T8 = T10;
      T5 = T8;
    } else {
      T5 = YPfalse;
    }
    break;
  }
  T4 = T5;
  T12 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_324));
UNLINK_STACK();
  QRET(T12);
}

FUNCODEDEF(fun_generate_quotation_116) {
  P out_,x_;
  P eF3698;
  P x_1644F3697;
  P x_1643F3696;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_1643F3696 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1643F3696,LITREF(lit_326));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_327));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1643F3696,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1643F3696,LITREF(lit_328));
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1643F3696,T2);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  x_1644F3697 = T3;
  for (;;) {
    P a209_0;
  loop209:
    T7 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1644F3697);
    T6 = CALL1(1,VARREF(Ynot),T7);
    if (T6 != YPfalse) {
      T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1644F3697);
      eF3698 = T9;
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_329));
      CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,eF3698);
      T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1644F3697);
      a209_0 = T11;
      x_1644F3697 = a209_0;
      goto loop209;
      T8 = T10;
      T5 = T8;
    } else {
      T5 = YPfalse;
    }
    break;
  }
  T4 = T5;
  T12 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_330));
UNLINK_STACK();
  QRET(T12);
}

FUNCODEDEF(fun_generate_quotation_117) {
  P out_,x_;
  P x_1646F3699;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_1646F3699 = out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_332));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1646F3699,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1646F3699,LITREF(lit_333));
  T2 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1646F3699,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1646F3699,LITREF(lit_334));
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
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
  P x_1649F3702;
  P x_1648F3701;
  P x_1647F3700;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(v_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),v_);
  x_1647F3700 = T1;
  x_1648F3701 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_1648F3701,x_1647F3700,LITREF(lit_227));
  if (T4 != YPfalse) {
    T3 = LITREF(lit_341);
  } else {
    T6 = CALL2(1,x_1648F3701,x_1647F3700,LITREF(lit_152));
    if (T6 != YPfalse) {
      T5 = LITREF(lit_342);
    } else {
      T8 = CALL2(1,x_1648F3701,x_1647F3700,LITREF(lit_153));
      if (T8 != YPfalse) {
        T7 = LITREF(lit_343);
      } else {
        T7 = LITREF(lit_344);
      }
      T5 = T7;
    }
    T3 = T5;
  }
  T2 = T3;
  T0 = T2;
  CALL2(1,VARREF(YgooSioSportYputs),out_,T0);
  x_1649F3702 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1649F3702,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),v_,out_);
  T10 = CALL2(1,VARREF(YgooSioSportYput),x_1649F3702,YPchr((P)41));
  T9 = T10;
UNLINK_STACK();
  QRET(T9);
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
  P x_1651F3704;
  P x_1650F3703;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_352));
  x_1650F3703 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1650F3703,YPchr((P)40));
  x_1651F3704 = out_;
  T3 = CALL1(1,VARREF(YevalSast_linearizeYreference_offset),e_);
  T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),T3);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1651F3704,T2);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1650F3703,YPchr((P)41));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_125) {
  P e_,out_;
  P x_1652F3706;
  P regF3705;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  regF3705 = T1;
  if (regF3705 != YPfalse) {
    x_1652F3706 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1652F3706,LITREF(lit_354));
    T5 = CALL1(1,VARREF(YgooSmathYnum_to_str),regF3705);
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1652F3706,T5);
    T3 = T4;
    T2 = T3;
  } else {
    T6 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_355));
    T2 = T6;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_126) {
  P e_,out_;
  P x_1653F3707;
  P T0,T1,T2;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  x_1653F3707 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1653F3707,LITREF(lit_357));
  T2 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1653F3707,T2);
  T0 = T1;
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

FUNCODEDEF(fun_to_c_129) {
  P e_,f_,d_,out_;
  P x_1655F3709;
  P x_1654F3708;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  T3 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T2 = CALL1(1,VARREF(YevalSastYbinding_kind),T3);
  x_1654F3708 = T2;
  x_1655F3709 = VARREF(YgooSmacrosYEE);
  T6 = CALL2(1,x_1655F3709,x_1654F3708,LITREF(lit_152));
  if (T6 != YPfalse) {
    T5 = LITREF(lit_361);
  } else {
    T8 = CALL2(1,x_1655F3709,x_1654F3708,LITREF(lit_153));
    if (T8 != YPfalse) {
      T10 = CALL2(1,VARREF(YisaQ),e_,VARREF(YevalSastYLdynamic_definitionG));
      if (T10 != YPfalse) {
        T9 = LITREF(lit_362);
      } else {
        T9 = LITREF(lit_363);
      }
      T7 = T9;
    } else {
      T7 = LITREF(lit_364);
    }
    T5 = T7;
  }
  T4 = T5;
  T1 = T4;
  CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
  T11 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),T11,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_365));
  T12 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T12,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_366));
  T13 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
UNLINK_STACK();
  QRET(T13);
}

FUNCODEDEF(fun_to_c_130) {
  P e_,f_,d_,out_;
  P x_1656F3710;
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
      T5 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_368));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_369));
    x_1656F3710 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1656F3710,YPchr((P)40));
    T7 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
    T6 = CALL1(1,VARREF(YevalSastYreference_binding),T7);
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),T6,out_);
    CALL2(1,VARREF(YgooSioSportYput),x_1656F3710,YPchr((P)44));
    T8 = CALL1(1,VARREF(YevalSastYboundQ_default),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T8,out_);
    T9 = CALL2(1,VARREF(YgooSioSportYput),x_1656F3710,YPchr((P)41));
    T10 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
    T1 = T10;
  } else {
    T1 = YPfalse;
  }
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_to_c_131) {
  P e_,f_,d_,out_;
  P x_1657F3711;
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
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_371));
    x_1657F3711 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1657F3711,YPchr((P)40));
    T3 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T3,out_);
    T4 = CALL2(1,VARREF(YgooSioSportYput),x_1657F3711,YPchr((P)41));
    T5 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
    T1 = T5;
  } else {
    T1 = YPfalse;
  }
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_to_c_132) {
  P e_,f_,d_,out_;
  P x_1658F3712;
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
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_373));
  x_1658F3712 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1658F3712,YPchr((P)40));
  T1 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T1,out_);
  T2 = CALL2(1,VARREF(YgooSioSportYput),x_1658F3712,YPchr((P)41));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_374));
  T3 = CALL1(1,VARREF(YevalSast_linearizeYbox_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,out_);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(fun_to_c_133) {
  P e_,f_,d_,out_;
  P x_1659F3714;
  P bindingF3713;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  T3 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),T3);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),T2);
  bindingF3713 = T1;
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3713,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_376));
  x_1659F3714 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1659F3714,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3713,out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1659F3714,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_134) {
  P e_,f_,d_,out_;
  P x_1660F3715;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_378));
  T1 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T1,out_);
  x_1660F3715 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1660F3715,LITREF(lit_379));
  T2 = CALL0(1,VARREF(YevalSg2cYfalse_name));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1660F3715,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1660F3715,LITREF(lit_380));
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
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_381));
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
  T18 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_382));
UNLINK_STACK();
  QRET(T18);
}

FUNCODEDEF(fun_135) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL4(1,VARREF(YevalSg2cYto_c),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_136) {
  P e_,f_,d_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T1 = FUNFAB(fun_135,3,f_,d_,out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_137) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_138) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_to_c_139) {
  P e_,f_,d_,out_;
  P x_1670F3731;
  P x_1669F3730;
  P x_1668F3729;
  P x_1667F3728;
  P bF3727;
  P iF3726;
  P firstQF3725;
  P tmpF3724;
  P tmpF3723;
  P x_1663F3722;
  P x_1664F3721;
  P x_1665F3720;
  P x_1662F3719;
  P bindingsF3718;
  P x_1661F3717;
  P nF3716;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T3 = CALL2(1,VARREF(YgooSmathYA),DYNREF(YevalSg2cYTloop_arg_counterT),YPint((P)1));
  T2 = DYNSET(YevalSg2cYTloop_arg_counterT,T3);
  T1 = CALL2(1,VARREF(YevalSastYloop_continue_setter),T2,e_);
  nF3716 = T1;
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  x_1661F3717 = out_;
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1661F3717,LITREF(lit_386));
  T6 = CALL1(1,VARREF(YevalSastYloop_bindings),e_);
  bindingsF3718 = T6;
  T8 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindingsF3718);
  T7 = CALL1(1,VARREF(Ynot),T8);
  if (T7 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL2(1,VARREF(YevalSg2cYgen_depth),T9,out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_387));
    x_1662F3719 = out_;
    T13 = fun_137;
    T14 = fun_138;
    T12 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T13,T14);
    T11 = CALL1(1,VARREF(YgooScolsScolYenum),T12);
    x_1665F3720 = T11;
    T16 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
    T15 = CALL1(1,VARREF(YgooScolsScolYenum),T16);
    x_1664F3721 = T15;
    T17 = CALL1(1,VARREF(YgooScolsScolYenum),bindingsF3718);
    x_1663F3722 = T17;
    for (;;) {
      P a210_0,a210_1,a210_2;
    loop210:
      T22 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1665F3720);
      tmpF3723 = T22;
      if (tmpF3723 != YPfalse) {
        T23 = tmpF3723;
      } else {
        T25 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1664F3721);
        tmpF3724 = T25;
        if (tmpF3724 != YPfalse) {
          T26 = tmpF3724;
        } else {
          T27 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1663F3722);
          T26 = T27;
        }
        T24 = T26;
        T23 = T24;
      }
      T21 = T23;
      T20 = CALL1(1,VARREF(Ynot),T21);
      if (T20 != YPfalse) {
        T29 = CALL1(1,VARREF(YgooScolsScolYnow),x_1665F3720);
        firstQF3725 = T29;
        T31 = CALL1(1,VARREF(YgooScolsScolYnow),x_1664F3721);
        iF3726 = T31;
        T33 = CALL1(1,VARREF(YgooScolsScolYnow),x_1663F3722);
        bF3727 = T33;
        T34 = CALL1(1,VARREF(Ynot),firstQF3725);
        if (T34 != YPfalse) {
          T35 = CALL2(1,VARREF(YgooSioSportYput),x_1662F3719,YPchr((P)44));
        } else {
        }
        x_1667F3728 = out_;
        CALL2(1,VARREF(YgooSioSportYputs),x_1667F3728,LITREF(lit_390));
        T36 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF3716);
        CALL2(1,VARREF(YgooSioSportYputs),x_1667F3728,T36);
        CALL2(1,VARREF(YgooSioSportYputs),x_1667F3728,LITREF(lit_391));
        T38 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF3726);
        T37 = CALL2(1,VARREF(YgooSioSportYputs),x_1667F3728,T38);
        T40 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1665F3720);
        T41 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1664F3721);
        T42 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1663F3722);
        a210_0 = T40;
        a210_1 = T41;
        a210_2 = T42;
        x_1665F3720 = a210_0;
        x_1664F3721 = a210_1;
        x_1663F3722 = a210_2;
        goto loop210;
        T32 = T39;
        T30 = T32;
        T28 = T30;
        T19 = T28;
      } else {
        T19 = YPfalse;
      }
      break;
    }
    T18 = T19;
    T10 = T18;
    T43 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
  } else {
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  x_1668F3729 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1668F3729,LITREF(lit_392));
  T44 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF3716);
  CALL2(1,VARREF(YgooSioSportYputs),x_1668F3729,T44);
  T45 = CALL2(1,VARREF(YgooSioSportYputs),x_1668F3729,LITREF(lit_393));
  T46 = CALL1(1,VARREF(YevalSastYloop_body),e_);
  T47 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
  CALL4(1,VARREF(YevalSg2cYto_c),T46,f_,T47,out_);
  T48 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
  CALL2(1,VARREF(YevalSg2cYgen_depth),T48,out_);
  x_1669F3730 = out_;
  T49 = CALL2(1,VARREF(YgooSioSportYputs),x_1669F3730,LITREF(lit_394));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  x_1670F3731 = out_;
  T50 = CALL2(1,VARREF(YgooSioSportYputs),x_1670F3731,LITREF(lit_395));
  T52 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T52 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
    T53 = CALL1(1,VARREF(YevalSastYloop_body),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T53,out_);
    T54 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
    T51 = T54;
  } else {
    T51 = YPfalse;
  }
  T5 = T51;
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_140) {
  P e_,f_,d_,out_;
  P x_1681F3748;
  P x_1680F3747;
  P bindingF3746;
  P iF3745;
  P tmpF3744;
  P x_1677F3743;
  P x_1678F3742;
  P x_1676F3741;
  P argF3740;
  P iF3739;
  P tmpF3738;
  P x_1673F3737;
  P x_1674F3736;
  P argF3735;
  P x_1671F3734;
  P nF3733;
  P loopF3732;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T1 = CALL1(1,VARREF(YevalSastYapplication_loop),e_);
  loopF3732 = T1;
  T3 = CALL1(1,VARREF(YevalSastYloop_continue),loopF3732);
  nF3733 = T3;
  T5 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),T5);
  x_1671F3734 = T4;
  for (;;) {
    P a211_0;
  loop211:
    T9 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1671F3734);
    T8 = CALL1(1,VARREF(Ynot),T9);
    if (T8 != YPfalse) {
      T11 = CALL1(1,VARREF(YgooScolsScolYnow),x_1671F3734);
      argF3735 = T11;
      CALL4(1,VARREF(YevalSg2cYto_c),argF3735,f_,d_,out_);
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1671F3734);
      a211_0 = T13;
      x_1671F3734 = a211_0;
      goto loop211;
      T10 = T12;
      T7 = T10;
    } else {
      T7 = YPfalse;
    }
    break;
  }
  T6 = T7;
  T15 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T14 = CALL1(1,VARREF(YgooScolsScolYenum),T15);
  x_1674F3736 = T14;
  T17 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T16 = CALL1(1,VARREF(YgooScolsScolYenum),T17);
  x_1673F3737 = T16;
  for (;;) {
    P a212_0,a212_1;
  loop212:
    T22 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1674F3736);
    tmpF3738 = T22;
    if (tmpF3738 != YPfalse) {
      T23 = tmpF3738;
    } else {
      T24 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1673F3737);
      T23 = T24;
    }
    T21 = T23;
    T20 = CALL1(1,VARREF(Ynot),T21);
    if (T20 != YPfalse) {
      T26 = CALL1(1,VARREF(YgooScolsScolYnow),x_1674F3736);
      iF3739 = T26;
      T28 = CALL1(1,VARREF(YgooScolsScolYnow),x_1673F3737);
      argF3740 = T28;
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      x_1676F3741 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1676F3741,LITREF(lit_397));
      T29 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF3733);
      CALL2(1,VARREF(YgooSioSportYputs),x_1676F3741,T29);
      CALL2(1,VARREF(YgooSioSportYputs),x_1676F3741,LITREF(lit_398));
      T30 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF3739);
      CALL2(1,VARREF(YgooSioSportYputs),x_1676F3741,T30);
      T31 = CALL2(1,VARREF(YgooSioSportYputs),x_1676F3741,LITREF(lit_399));
      CALL2(1,VARREF(YevalSg2cYgen_ref),argF3740,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
      T33 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1674F3736);
      T34 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1673F3737);
      a212_0 = T33;
      a212_1 = T34;
      x_1674F3736 = a212_0;
      x_1673F3737 = a212_1;
      goto loop212;
      T27 = T32;
      T25 = T27;
      T19 = T25;
    } else {
      T19 = YPfalse;
    }
    break;
  }
  T18 = T19;
  T36 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T35 = CALL1(1,VARREF(YgooScolsScolYenum),T36);
  x_1678F3742 = T35;
  T38 = CALL1(1,VARREF(YevalSastYloop_bindings),loopF3732);
  T37 = CALL1(1,VARREF(YgooScolsScolYenum),T38);
  x_1677F3743 = T37;
  for (;;) {
    P a213_0,a213_1;
  loop213:
    T43 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1678F3742);
    tmpF3744 = T43;
    if (tmpF3744 != YPfalse) {
      T44 = tmpF3744;
    } else {
      T45 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1677F3743);
      T44 = T45;
    }
    T42 = T44;
    T41 = CALL1(1,VARREF(Ynot),T42);
    if (T41 != YPfalse) {
      T47 = CALL1(1,VARREF(YgooScolsScolYnow),x_1678F3742);
      iF3745 = T47;
      T49 = CALL1(1,VARREF(YgooScolsScolYnow),x_1677F3743);
      bindingF3746 = T49;
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3746,out_);
      x_1680F3747 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1680F3747,LITREF(lit_400));
      T50 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF3733);
      CALL2(1,VARREF(YgooSioSportYputs),x_1680F3747,T50);
      CALL2(1,VARREF(YgooSioSportYputs),x_1680F3747,LITREF(lit_401));
      T52 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF3745);
      T51 = CALL2(1,VARREF(YgooSioSportYputs),x_1680F3747,T52);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
      T54 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1678F3742);
      T55 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1677F3743);
      a213_0 = T54;
      a213_1 = T55;
      x_1678F3742 = a213_0;
      x_1677F3743 = a213_1;
      goto loop213;
      T48 = T53;
      T46 = T48;
      T40 = T46;
    } else {
      T40 = YPfalse;
    }
    break;
  }
  T39 = T40;
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  x_1681F3748 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1681F3748,LITREF(lit_402));
  T57 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF3733);
  T56 = CALL2(1,VARREF(YgooSioSportYputs),x_1681F3748,T57);
  T58 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
  T2 = T58;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_141) {
  P e_,f_,d_,out_;
  P argF3758;
  P x_1687F3757;
  P x_1686F3756;
  P x_1685F3755;
  P tmpF3754;
  P x_1684F3753;
  P argF3752;
  P x_1682F3751;
  P nF3750;
  P functionF3749;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T1 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  functionF3749 = T1;
  T4 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T3 = CALL1(1,VARREF(YgooStypesYlen),T4);
  nF3750 = T3;
  T5 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T5,f_,d_,out_);
  T7 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  x_1682F3751 = T6;
  for (;;) {
    P a214_0;
  loop214:
    T11 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1682F3751);
    T10 = CALL1(1,VARREF(Ynot),T11);
    if (T10 != YPfalse) {
      T13 = CALL1(1,VARREF(YgooScolsScolYnow),x_1682F3751);
      argF3752 = T13;
      CALL4(1,VARREF(YevalSg2cYto_c),argF3752,f_,d_,out_);
      T15 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1682F3751);
      a214_0 = T15;
      x_1682F3751 = a214_0;
      goto loop214;
      T12 = T14;
      T9 = T12;
    } else {
      T9 = YPfalse;
    }
    break;
  }
  T8 = T9;
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  x_1684F3753 = out_;
  T18 = CALL1(1,VARREF(Ynot),f_);
  tmpF3754 = T18;
  if (tmpF3754 != YPfalse) {
    T19 = tmpF3754;
  } else {
    T20 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_primitiveG));
    T19 = T20;
  }
  T17 = T19;
  if (T17 != YPfalse) {
    T16 = LITREF(lit_404);
  } else {
    T16 = LITREF(lit_156);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1684F3753,T16);
  CALL2(1,VARREF(YgooSioSportYputs),x_1684F3753,LITREF(lit_405));
  T23 = CALL2(1,VARREF(YgooSmagYG),nF3750,VARREF(YevalSg2cYDnumber_call_templates));
  if (T23 != YPfalse) {
    T22 = LITREF(lit_406);
  } else {
    T22 = nF3750;
  }
  T21 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1684F3753,T22);
  x_1685F3755 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1685F3755,YPchr((P)40));
  T25 = CALL1(1,VARREF(YevalSastYapplication_knownQ),e_);
  if (T25 != YPfalse) {
    T24 = LITREF(lit_407);
  } else {
    T24 = LITREF(lit_408);
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,T24);
  T26 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T26,out_);
  T27 = CALL2(1,VARREF(YgooSmagYG),nF3750,VARREF(YevalSg2cYDnumber_call_templates));
  if (T27 != YPfalse) {
    x_1686F3756 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1686F3756,LITREF(lit_409));
    T29 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1686F3756,nF3750);
    T28 = T29;
  } else {
  }
  T31 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T30 = CALL1(1,VARREF(YgooScolsScolYenum),T31);
  x_1687F3757 = T30;
  for (;;) {
    P a215_0;
  loop215:
    T35 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1687F3757);
    T34 = CALL1(1,VARREF(Ynot),T35);
    if (T34 != YPfalse) {
      T37 = CALL1(1,VARREF(YgooScolsScolYnow),x_1687F3757);
      argF3758 = T37;
      CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
      CALL2(1,VARREF(YevalSg2cYgen_ref),argF3758,out_);
      T39 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1687F3757);
      a215_0 = T39;
      x_1687F3757 = a215_0;
      goto loop215;
      T36 = T38;
      T33 = T36;
    } else {
      T33 = YPfalse;
    }
    break;
  }
  T32 = T33;
  T40 = CALL2(1,VARREF(YgooSioSportYput),x_1685F3755,YPchr((P)41));
  T41 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
  T2 = T41;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_142) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_143) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_to_c_144) {
  P e_,f_,d_,out_;
  P xF3764;
  P firstQF3763;
  P tmpF3762;
  P x_1690F3761;
  P x_1691F3760;
  P x_1689F3759;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  x_1689F3759 = out_;
  T4 = fun_142;
  T5 = fun_143;
  T3 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T4,T5);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  x_1691F3760 = T2;
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),e_);
  x_1690F3761 = T6;
  for (;;) {
    P a216_0,a216_1;
  loop216:
    T11 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1691F3760);
    tmpF3762 = T11;
    if (tmpF3762 != YPfalse) {
      T12 = tmpF3762;
    } else {
      T13 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1690F3761);
      T12 = T13;
    }
    T10 = T12;
    T9 = CALL1(1,VARREF(Ynot),T10);
    if (T9 != YPfalse) {
      T15 = CALL1(1,VARREF(YgooScolsScolYnow),x_1691F3760);
      firstQF3763 = T15;
      T17 = CALL1(1,VARREF(YgooScolsScolYnow),x_1690F3761);
      xF3764 = T17;
      T18 = CALL1(1,VARREF(Ynot),firstQF3763);
      if (T18 != YPfalse) {
        T19 = CALL2(1,VARREF(YgooSioSportYput),x_1689F3759,YPchr((P)44));
      } else {
      }
      CALL2(1,VARREF(YevalSg2cYgen_ref),xF3764,out_);
      T21 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1691F3760);
      T22 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1690F3761);
      a216_0 = T21;
      a216_1 = T22;
      x_1691F3760 = a216_0;
      x_1690F3761 = a216_1;
      goto loop216;
      T16 = T20;
      T14 = T16;
      T8 = T14;
    } else {
      T8 = YPfalse;
    }
    break;
  }
  T7 = T8;
  T1 = T7;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_145) {
  P e_,f_,d_,out_;
  P x_1697F3775;
  P tmpF3774;
  P bindingF3773;
  P typeF3772;
  P initF3771;
  P tmpF3770;
  P tmpF3769;
  P x_1693F3768;
  P x_1694F3767;
  P x_1695F3766;
  P low_letQF3765;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T1 = CALL2(1,VARREF(YisaQ),e_,VARREF(YevalSastYLlow_letG));
  low_letQF3765 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfix_let_arguments),e_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  x_1695F3766 = T2;
  T5 = CALL1(1,VARREF(YevalSastYfix_let_types),e_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),T5);
  x_1694F3767 = T4;
  T7 = CALL1(1,VARREF(YevalSastYfix_let_bindings),e_);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  x_1693F3768 = T6;
  for (;;) {
    P a217_0,a217_1,a217_2;
  loop217:
    T12 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1695F3766);
    tmpF3769 = T12;
    if (tmpF3769 != YPfalse) {
      T13 = tmpF3769;
    } else {
      T15 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1694F3767);
      tmpF3770 = T15;
      if (tmpF3770 != YPfalse) {
        T16 = tmpF3770;
      } else {
        T17 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1693F3768);
        T16 = T17;
      }
      T14 = T16;
      T13 = T14;
    }
    T11 = T13;
    T10 = CALL1(1,VARREF(Ynot),T11);
    if (T10 != YPfalse) {
      T19 = CALL1(1,VARREF(YgooScolsScolYnow),x_1695F3766);
      initF3771 = T19;
      T21 = CALL1(1,VARREF(YgooScolsScolYnow),x_1694F3767);
      typeF3772 = T21;
      T23 = CALL1(1,VARREF(YgooScolsScolYnow),x_1693F3768);
      bindingF3773 = T23;
      CALL4(1,VARREF(YevalSg2cYto_c),initF3771,f_,d_,out_);
      T26 = CALL1(1,VARREF(YevalSast_linearizeYunconstrained_typeQ),typeF3772);
      tmpF3774 = T26;
      if (tmpF3774 != YPfalse) {
        T27 = tmpF3774;
      } else {
        T27 = low_letQF3765;
      }
      T25 = T27;
      T24 = CALL1(1,VARREF(Ynot),T25);
      if (T24 != YPfalse) {
        CALL4(1,VARREF(YevalSg2cYto_c),typeF3772,f_,d_,out_);
        CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
        CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_414));
        x_1697F3775 = out_;
        CALL2(1,VARREF(YgooSioSportYput),x_1697F3775,YPchr((P)40));
        CALL2(1,VARREF(YevalSg2cYgen_ref),initF3771,out_);
        CALL2(1,VARREF(YgooSioSportYput),x_1697F3775,YPchr((P)44));
        CALL2(1,VARREF(YevalSg2cYgen_ref),typeF3772,out_);
        T28 = CALL2(1,VARREF(YgooSioSportYput),x_1697F3775,YPchr((P)41));
        T29 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
      } else {
      }
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3773,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_415));
      CALL2(1,VARREF(YevalSg2cYgen_ref),initF3771,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
      T31 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1695F3766);
      T32 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1694F3767);
      T33 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1693F3768);
      a217_0 = T31;
      a217_1 = T32;
      a217_2 = T33;
      x_1695F3766 = a217_0;
      x_1694F3767 = a217_1;
      x_1693F3768 = a217_2;
      goto loop217;
      T22 = T30;
      T20 = T22;
      T18 = T20;
      T9 = T18;
    } else {
      T9 = YPfalse;
    }
    break;
  }
  T8 = T9;
  T34 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T34,f_,d_,out_);
  T36 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T36 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
    T37 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T37,out_);
    T38 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
    T35 = T38;
  } else {
    T35 = YPfalse;
  }
  T0 = T35;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_146) {
  P e_,f_,d_,out_;
  P bindingF3780;
  P initF3779;
  P tmpF3778;
  P x_1698F3777;
  P x_1699F3776;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T1 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  T0 = CALL1(1,VARREF(YgooScolsScolYenum),T1);
  x_1699F3776 = T0;
  T3 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  x_1698F3777 = T2;
  for (;;) {
    P a218_0,a218_1;
  loop218:
    T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1699F3776);
    tmpF3778 = T8;
    if (tmpF3778 != YPfalse) {
      T9 = tmpF3778;
    } else {
      T10 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1698F3777);
      T9 = T10;
    }
    T7 = T9;
    T6 = CALL1(1,VARREF(Ynot),T7);
    if (T6 != YPfalse) {
      T12 = CALL1(1,VARREF(YgooScolsScolYnow),x_1699F3776);
      initF3779 = T12;
      T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1698F3777);
      bindingF3780 = T14;
      CALL5(1,VARREF(YevalSg2cYfunshell_to_c),bindingF3780,initF3779,YPfalse,d_,out_);
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3780,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_417));
      CALL2(1,VARREF(YevalSg2cYgen_ref),initF3779,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
      T16 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1699F3776);
      T17 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1698F3777);
      a218_0 = T16;
      a218_1 = T17;
      x_1699F3776 = a218_0;
      x_1698F3777 = a218_1;
      goto loop218;
      T13 = T15;
      T11 = T13;
      T5 = T11;
    } else {
      T5 = YPfalse;
    }
    break;
  }
  T4 = T5;
  T18 = CALL4(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSg2cYfuninit_to_c),f_,d_,out_);
  T19 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  T20 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  CALL3(1,VARREF(YgooScolsSseqYdo2),T18,T19,T20);
  T21 = CALL1(1,VARREF(YevalSastYlocals_body),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T21,f_,d_,out_);
  T23 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T23 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
    T24 = CALL1(1,VARREF(YevalSastYlocals_body),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T24,out_);
    T25 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
    T22 = T25;
  } else {
    T22 = YPfalse;
  }
UNLINK_STACK();
  QRET(T22);
}

FUNCODEDEF(fun_to_c_147) {
  P e_,f_,d_,out_;
  P x_1701F3781;
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
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_419));
  x_1701F3781 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1701F3781,YPchr((P)40));
  T1 = CALL1(1,VARREF(YevalSastYbind_exit_main_fun),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T1,out_);
  T2 = CALL2(1,VARREF(YgooSioSportYput),x_1701F3781,YPchr((P)41));
  T3 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_to_c_148) {
  P e_,f_,d_,out_;
  P x_1702F3782;
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
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_421));
  x_1702F3782 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1702F3782,YPchr((P)40));
  T2 = CALL1(1,VARREF(YevalSastYunwind_protect_protected_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T2,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1702F3782,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYunwind_protect_cleanup_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1702F3782,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_to_c_149) {
  P e_,f_,d_,out_;
  P x_1703F3783;
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
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_423));
  x_1703F3783 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1703F3783,YPchr((P)40));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_424));
  CALL2(1,VARREF(YgooSioSportYput),x_1703F3783,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_425));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T5);
  CALL2(1,VARREF(YgooSioSportYput),x_1703F3783,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_426));
  CALL2(1,VARREF(YgooSioSportYput),x_1703F3783,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYmonitor_type),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1703F3783,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSastYmonitor_info),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T7,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1703F3783,YPchr((P)44));
  T8 = CALL1(1,VARREF(YevalSastYmonitor_test),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T8,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1703F3783,YPchr((P)44));
  T9 = CALL1(1,VARREF(YevalSastYmonitor_handler),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T9,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1703F3783,YPchr((P)44));
  T10 = CALL1(1,VARREF(YevalSastYmonitor_main_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T10,out_);
  T11 = CALL2(1,VARREF(YgooSioSportYput),x_1703F3783,YPchr((P)41));
  T12 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
UNLINK_STACK();
  QRET(T12);
}

FUNCODEDEF(fun_150) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_151) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_to_c_152) {
  P e_,f_,d_,out_;
  P argF3794;
  P firstQF3793;
  P tmpF3792;
  P x_1709F3791;
  P x_1710F3790;
  P x_1708F3789;
  P x_1707F3788;
  P x_1706F3787;
  P argF3786;
  P x_1704F3785;
  P bindingF3784;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T1 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
  bindingF3784 = T1;
  T3 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  x_1704F3785 = T2;
  for (;;) {
    P a219_0;
  loop219:
    T7 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1704F3785);
    T6 = CALL1(1,VARREF(Ynot),T7);
    if (T6 != YPfalse) {
      T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1704F3785);
      argF3786 = T9;
      CALL4(1,VARREF(YevalSg2cYto_c),argF3786,f_,d_,out_);
      T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1704F3785);
      a219_0 = T11;
      x_1704F3785 = a219_0;
      goto loop219;
      T8 = T10;
      T5 = T8;
    } else {
      T5 = YPfalse;
    }
    break;
  }
  T4 = T5;
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  x_1706F3787 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1706F3787,LITREF(lit_428));
  T14 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
  T13 = CALL1(1,VARREF(YevalSg2cYmangle_binding),T14);
  T12 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1706F3787,T13);
  x_1707F3788 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1707F3788,YPchr((P)40));
  x_1708F3789 = out_;
  T18 = fun_150;
  T19 = fun_151;
  T17 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T18,T19);
  T16 = CALL1(1,VARREF(YgooScolsScolYenum),T17);
  x_1710F3790 = T16;
  T21 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T20 = CALL1(1,VARREF(YgooScolsScolYenum),T21);
  x_1709F3791 = T20;
  for (;;) {
    P a220_0,a220_1;
  loop220:
    T26 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1710F3790);
    tmpF3792 = T26;
    if (tmpF3792 != YPfalse) {
      T27 = tmpF3792;
    } else {
      T28 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1709F3791);
      T27 = T28;
    }
    T25 = T27;
    T24 = CALL1(1,VARREF(Ynot),T25);
    if (T24 != YPfalse) {
      T30 = CALL1(1,VARREF(YgooScolsScolYnow),x_1710F3790);
      firstQF3793 = T30;
      T32 = CALL1(1,VARREF(YgooScolsScolYnow),x_1709F3791);
      argF3794 = T32;
      T33 = CALL1(1,VARREF(Ynot),firstQF3793);
      if (T33 != YPfalse) {
        T34 = CALL2(1,VARREF(YgooSioSportYput),x_1708F3789,YPchr((P)44));
      } else {
      }
      CALL2(1,VARREF(YevalSg2cYgen_ref),argF3794,out_);
      T36 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1710F3790);
      T37 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1709F3791);
      a220_0 = T36;
      a220_1 = T37;
      x_1710F3790 = a220_0;
      x_1709F3791 = a220_1;
      goto loop220;
      T31 = T35;
      T29 = T31;
      T23 = T29;
    } else {
      T23 = YPfalse;
    }
    break;
  }
  T22 = T23;
  T15 = T22;
  T38 = CALL2(1,VARREF(YgooSioSportYput),x_1707F3788,YPchr((P)41));
  T39 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
  T0 = T39;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_153) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL4(1,VARREF(YevalSg2cYto_c),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_154) {
  P e_,f_,d_,out_;
  P xF3800;
  P x_1714F3799;
  P x_1713F3798;
  P x_1712F3797;
  P fF3796;
  P nF3795;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
  T1 = CALL1(1,VARREF(YgooStypesYlen),T2);
  nF3795 = T1;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_index),e_);
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),DYNREF(YevalSg2cYTdefinitionsT),T5);
  fF3796 = T4;
  T7 = CALL2(1,VARREF(YgooSmacrosYEE),nF3795,YPint((P)0));
  if (T7 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
    if (T9 != YPfalse) {
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
      CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,fF3796);
      T10 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
      T8 = T10;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
  } else {
    T11 = FUNFAB(fun_153,3,fF3796,d_,out_);
    T12 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T11,T12);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_433));
    x_1712F3797 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1712F3797,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,fF3796);
    x_1713F3798 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1713F3798,LITREF(lit_434));
    T14 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF3795);
    T13 = CALL2(1,VARREF(YgooSioSportYputs),x_1713F3798,T14);
    T16 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    T15 = CALL1(1,VARREF(YgooScolsScolYenum),T16);
    x_1714F3799 = T15;
    for (;;) {
      P a221_0;
    loop221:
      T20 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1714F3799);
      T19 = CALL1(1,VARREF(Ynot),T20);
      if (T19 != YPfalse) {
        T22 = CALL1(1,VARREF(YgooScolsScolYnow),x_1714F3799);
        xF3800 = T22;
        CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
        CALL2(1,VARREF(YevalSg2cYgen_ref),xF3800,out_);
        T24 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1714F3799);
        a221_0 = T24;
        x_1714F3799 = a221_0;
        goto loop221;
        T21 = T23;
        T18 = T21;
      } else {
        T18 = YPfalse;
      }
      break;
    }
    T17 = T18;
    T25 = CALL2(1,VARREF(YgooSioSportYput),x_1712F3797,YPchr((P)41));
    T26 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
    T6 = T26;
  }
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_funshell_to_c_155) {
  P b_,e_,f_,d_,out_;
  P x_1718F3805;
  P x_1717F3804;
  P x_1716F3803;
  P fF3802;
  P nF3801;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(b_, 0);
  ARG(e_, 1);
  ARG(f_, 2);
  ARG(d_, 3);
  ARG(out_, 4);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
  T1 = CALL1(1,VARREF(YgooStypesYlen),T2);
  nF3801 = T1;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_index),e_);
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),DYNREF(YevalSg2cYTdefinitionsT),T5);
  fF3802 = T4;
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  T6 = CALL2(1,VARREF(YgooSmacrosYEE),nF3801,YPint((P)0));
  if (T6 != YPfalse) {
    T7 = CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,fF3802);
  } else {
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_437));
    x_1716F3803 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1716F3803,YPchr((P)40));
    x_1717F3804 = out_;
    T12 = CALL1(1,VARREF(YevalSastYbinding_dynamic_extentQ),b_);
    if (T12 != YPfalse) {
      T11 = YPint((P)1);
    } else {
      T11 = YPint((P)0);
    }
    T10 = CALL1(1,VARREF(YgooSmathYnum_to_str),T11);
    T9 = CALL2(1,VARREF(YgooSioSportYputs),x_1717F3804,T10);
    CALL2(1,VARREF(YgooSioSportYput),x_1716F3803,YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,fF3802);
    CALL2(1,VARREF(YgooSioSportYput),x_1716F3803,YPchr((P)44));
    x_1718F3805 = out_;
    T14 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF3801);
    T13 = CALL2(1,VARREF(YgooSioSportYputs),x_1718F3805,T14);
    T15 = CALL2(1,VARREF(YgooSioSportYput),x_1716F3803,YPchr((P)41));
    T8 = T15;
  }
  T16 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
  T3 = T16;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_156) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL4(1,VARREF(YevalSg2cYto_c),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_funinit_to_c_157) {
  P b_,e_,f_,d_,out_;
  P xF3810;
  P x_1721F3809;
  P x_1720F3808;
  P x_1719F3807;
  P nF3806;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(b_, 0);
  ARG(e_, 1);
  ARG(f_, 2);
  ARG(d_, 3);
  ARG(out_, 4);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
  T1 = CALL1(1,VARREF(YgooStypesYlen),T2);
  nF3806 = T1;
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),nF3806,YPint((P)0));
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = FUNFAB(fun_156,3,f_,d_,out_);
    T7 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T6,T7);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_441));
    x_1719F3807 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1719F3807,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),b_,out_);
    x_1720F3808 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1720F3808,LITREF(lit_442));
    T8 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1720F3808,nF3806);
    T10 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    T9 = CALL1(1,VARREF(YgooScolsScolYenum),T10);
    x_1721F3809 = T9;
    for (;;) {
      P a222_0;
    loop222:
      T14 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1721F3809);
      T13 = CALL1(1,VARREF(Ynot),T14);
      if (T13 != YPfalse) {
        T16 = CALL1(1,VARREF(YgooScolsScolYnow),x_1721F3809);
        xF3810 = T16;
        CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
        CALL2(1,VARREF(YevalSg2cYgen_ref),xF3810,out_);
        T18 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1721F3809);
        a222_0 = T18;
        x_1721F3809 = a222_0;
        goto loop222;
        T15 = T17;
        T12 = T15;
      } else {
        T12 = YPfalse;
      }
      break;
    }
    T11 = T12;
    T19 = CALL2(1,VARREF(YgooSioSportYput),x_1719F3807,YPchr((P)41));
    T20 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
    T3 = T20;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_158) {
  P e_,f_,d_,out_;
  P x_1723F3811;
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
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_444));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
  x_1723F3811 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1723F3811,YPchr((P)40));
  T3 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T2 = CALL1(1,VARREF(YevalSastYbinding_module_name),T3);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,T2);
  CALL2(1,VARREF(YgooSioSportYput),x_1723F3811,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(YevalSastYbinding_name),T5);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_1723F3811,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,out_);
  T7 = CALL2(1,VARREF(YgooSioSportYput),x_1723F3811,YPchr((P)41));
  T8 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_out_list_builder_159) {
  P f_,out_,elts_;
  P eF3815;
  P x_1726F3814;
  P x_1725F3813;
  P x_1724F3812;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(f_, 0);
  ARG(out_, 1);
  ARG(elts_, 2);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),elts_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_447));
    T2 = CALL2(1,VARREF(YgooSioSportYputs),out_,T3);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_448));
    CALL2(1,VARREF(YgooSioSportYputs),out_,T4);
    x_1724F3812 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1724F3812,YPchr((P)40));
    x_1725F3813 = out_;
    T8 = CALL1(1,VARREF(YgooStypesYlen),elts_);
    T7 = CALL1(1,VARREF(YgooSmathYnum_to_str),T8);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1725F3813,T7);
    T9 = CALL1(1,VARREF(YgooScolsScolYenum),elts_);
    x_1726F3814 = T9;
    for (;;) {
      P a223_0;
    loop223:
      T13 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1726F3814);
      T12 = CALL1(1,VARREF(Ynot),T13);
      if (T12 != YPfalse) {
        T15 = CALL1(1,VARREF(YgooScolsScolYnow),x_1726F3814);
        eF3815 = T15;
        CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
        CALL1(0,f_,eF3815);
        T17 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1726F3814);
        a223_0 = T17;
        x_1726F3814 = a223_0;
        goto loop223;
        T14 = T16;
        T11 = T14;
      } else {
        T11 = YPfalse;
      }
      break;
    }
    T10 = T11;
    T18 = CALL2(1,VARREF(YgooSioSportYput),x_1724F3812,YPchr((P)41));
    T5 = T18;
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_160) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_ref),x_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_fab_list_161) {
  P out_,refs_;
  P T0,T1;
LINK_STACK();
  ARG(out_, 0);
  ARG(refs_, 1);
  T1 = FUNFAB(fun_160,1,out_);
  T0 = CALL3(1,VARREF(YevalSg2cYout_list_builder),T1,out_,refs_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_specs_162) {
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

FUNCODEDEF(fun_163) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL4(1,VARREF(YevalSg2cYto_c),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_164) {
  P e_,f_,d_,out_;
  P x_1728F3816;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = FUNFAB(fun_163,3,f_,d_,out_);
  T1 = CALL1(1,VARREF(YevalSastYsignature_specs),e_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL1(1,VARREF(YevalSastYsignature_value),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T2,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  T3 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_456));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T3);
  x_1728F3816 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1728F3816,YPchr((P)40));
  T4 = CALL1(1,VARREF(YevalSastYsignature_names),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T4,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1728F3816,YPchr((P)44));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_specs),out_,e_);
  CALL2(1,VARREF(YgooSioSportYput),x_1728F3816,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYsignature_naryQ),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T5,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1728F3816,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYsignature_arity),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1728F3816,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSastYsignature_value),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T7,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1728F3816,YPchr((P)44));
  T8 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_457));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T8);
  T9 = CALL2(1,VARREF(YgooSioSportYput),x_1728F3816,YPchr((P)41));
  T10 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_to_c_165) {
  P e_,f_,d_,out_;
  P x_1729F3817;
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
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_459));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
  x_1729F3817 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1729F3817,YPchr((P)40));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_460));
  CALL2(1,VARREF(YgooSioSportYput),x_1729F3817,YPchr((P)44));
  T2 = CALL1(1,VARREF(YevalSastYfunction_debug_name),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T2,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1729F3817,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYfunction_signature),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1729F3817,YPchr((P)44));
  T4 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_461));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_1729F3817,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_462));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T5);
  CALL2(1,VARREF(YgooSioSportYput),x_1729F3817,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_463));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T6);
  CALL2(1,VARREF(YgooSioSportYput),x_1729F3817,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_464));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T7);
  T8 = CALL2(1,VARREF(YgooSioSportYput),x_1729F3817,YPchr((P)41));
  T9 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_generate_function_forwards_166) {
  P out_,definitions_;
  P defF3819;
  P x_1730F3818;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(out_, 0);
  ARG(definitions_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_467));
  T1 = CALL1(1,VARREF(YgooScolsScolYenum),definitions_);
  x_1730F3818 = T1;
  for (;;) {
    P a224_0;
  loop224:
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1730F3818);
    T4 = CALL1(1,VARREF(Ynot),T5);
    if (T4 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1730F3818);
      defF3819 = T7;
      CALL2(1,VARREF(YevalSg2cYgenerate_function_forward),out_,defF3819);
      T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1730F3818);
      a224_0 = T9;
      x_1730F3818 = a224_0;
      goto loop224;
      T6 = T8;
      T3 = T6;
    } else {
      T3 = YPfalse;
    }
    break;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_167) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_168) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_generate_function_forward_169) {
  P out_,defn_;
  P iF3826;
  P firstQF3825;
  P tmpF3824;
  P x_1734F3823;
  P x_1735F3822;
  P x_1733F3821;
  P x_1732F3820;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
LINK_STACK();
  ARG(out_, 0);
  ARG(defn_, 1);
  x_1732F3820 = out_;
  if (DYNREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    T0 = LITREF(lit_470);
  } else {
    T0 = LITREF(lit_471);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1732F3820,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1732F3820,LITREF(lit_472));
  T2 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_binding),T2);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1732F3820,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1732F3820,LITREF(lit_473));
  x_1733F3821 = out_;
  T7 = fun_167;
  T8 = fun_168;
  T6 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T7,T8);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),T6);
  x_1735F3822 = T5;
  T12 = CALL1(1,VARREF(YevalSastYfunction_bindings),defn_);
  T11 = CALL1(1,VARREF(YgooStypesYlen),T12);
  T10 = CALL1(1,VARREF(YgooScolsSseqYbelow),T11);
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),T10);
  x_1734F3823 = T9;
  for (;;) {
    P a225_0,a225_1;
  loop225:
    T17 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1735F3822);
    tmpF3824 = T17;
    if (tmpF3824 != YPfalse) {
      T18 = tmpF3824;
    } else {
      T19 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1734F3823);
      T18 = T19;
    }
    T16 = T18;
    T15 = CALL1(1,VARREF(Ynot),T16);
    if (T15 != YPfalse) {
      T21 = CALL1(1,VARREF(YgooScolsScolYnow),x_1735F3822);
      firstQF3825 = T21;
      T23 = CALL1(1,VARREF(YgooScolsScolYnow),x_1734F3823);
      iF3826 = T23;
      T24 = CALL1(1,VARREF(Ynot),firstQF3825);
      if (T24 != YPfalse) {
        T25 = CALL2(1,VARREF(YgooSioSportYput),x_1733F3821,YPchr((P)44));
      } else {
      }
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_476));
      T27 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1735F3822);
      T28 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1734F3823);
      a225_0 = T27;
      a225_1 = T28;
      x_1735F3822 = a225_0;
      x_1734F3823 = a225_1;
      goto loop225;
      T22 = T26;
      T20 = T22;
      T14 = T20;
    } else {
      T14 = YPfalse;
    }
    break;
  }
  T13 = T14;
  T4 = T13;
  T29 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_477));
UNLINK_STACK();
  QRET(T29);
}

FUNCODEDEF(fun_generate_function_binding_170) {
  P out_,defn_;
  P x_1738F3831;
  P nameF3830;
  P x_1737F3829;
  P tmpF3828;
  P nameF3827;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(out_, 0);
  ARG(defn_, 1);
  T1 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  nameF3827 = T1;
  T4 = CALL2(1,VARREF(YisaQ),nameF3827,VARREF(YevalSastYLmodule_bindingG));
  tmpF3828 = T4;
  if (tmpF3828 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSastYbinding_kind),nameF3827);
    T6 = CALL2(1,VARREF(YgooScolsScolYmemQ),LITREF(lit_480),T7);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSg2cYmangle_binding),nameF3827);
    T8 = CALL2(1,VARREF(YgooSioSportYputs),out_,T9);
    T2 = T8;
  } else {
    T11 = CALL2(1,VARREF(YgooSmacrosYEE),nameF3827,YPfalse);
    if (T11 != YPfalse) {
      x_1737F3829 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1737F3829,LITREF(lit_481));
      T14 = CALL1(1,VARREF(YevalSastYfunction_index),defn_);
      T13 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1737F3829,T14);
      T12 = T13;
      T10 = T12;
    } else {
      T17 = CALL2(1,VARREF(YisaQ),nameF3827,VARREF(YevalSastYLlocal_bindingG));
      if (T17 != YPfalse) {
        T18 = CALL1(1,VARREF(YevalSastYbinding_name),nameF3827);
        T16 = T18;
      } else {
        T16 = nameF3827;
      }
      nameF3830 = T16;
      x_1738F3831 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1738F3831,LITREF(lit_482));
      T20 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),nameF3830);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1738F3831,T20);
      CALL2(1,VARREF(YgooSioSportYputs),x_1738F3831,LITREF(lit_483));
      T22 = CALL1(1,VARREF(YevalSastYfunction_index),defn_);
      T21 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1738F3831,T22);
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

FUNCODEDEF(fun_generate_function_forward_171) {
  P out_,defn_;
  P boundQF3832;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(out_, 0);
  ARG(defn_, 1);
  T2 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  T1 = CALL2(1,VARREF(YisaQ),T2,VARREF(YevalSastYLmodule_bindingG));
  boundQF3832 = T1;
  if (boundQF3832 != YPfalse) {
    T3 = LITREF(lit_485);
  } else {
    T3 = LITREF(lit_486);
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,T3);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,defn_);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_487));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_172) {
  P def_;
  P T0;
LINK_STACK();
  ARG(def_, 0);
  T0 = CALL2(1,VARREF(YevalSg2cYgenerate_function_code),FREEREF(0),def_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_bodies_173) {
  P out_,definitions_;
  P T0,T1;
LINK_STACK();
  ARG(out_, 0);
  ARG(definitions_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_490));
  T1 = FUNFAB(fun_172,1,out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,definitions_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_174) {
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

FUNCODEDEF(fun_generate_functions_175) {
  P definitions_,f_,d_,out_;
  P T0,T1,T2;
LINK_STACK();
  ARG(definitions_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T1 = FUNFAB(fun_174,3,f_,d_,out_);
  T2 = CALL1(1,VARREF(YgooScolsSseqYrev),definitions_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_closure_structure_176) {
  P definition_,f_,d_,out_;
  P x_1741F3835;
  P x_1740F3834;
  P x_1739F3833;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
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
  x_1739F3833 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1739F3833,LITREF(lit_497));
  T2 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_498));
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1739F3833,T2);
  x_1740F3834 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1740F3834,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_body_reference),out_,definition_);
  CALL2(1,VARREF(YgooSioSportYput),x_1740F3834,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYfunction_debug_name),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1740F3834,YPchr((P)44));
  T4 = CALL1(1,VARREF(YevalSastYfunction_signature),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T4,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1740F3834,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_499));
  CALL2(1,VARREF(YgooSioSportYput),x_1740F3834,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_500));
  CALL2(1,VARREF(YgooSioSportYput),x_1740F3834,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYprogram_line),definition_);
  if (T5 != YPfalse) {
    x_1741F3835 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1741F3835,LITREF(lit_501));
    T8 = CALL1(1,VARREF(YevalSastYprogram_line),definition_);
    T7 = CALL1(1,VARREF(YgooSmathYnum_to_str),T8);
    CALL2(1,VARREF(YgooSioSportYputs),x_1741F3835,T7);
    T9 = CALL2(1,VARREF(YgooSioSportYputs),x_1741F3835,LITREF(lit_502));
    T6 = T9;
  } else {
    T11 = CALL1(1,VARREF(YevalSastYfunction_source),definition_);
    T10 = CALL2(1,VARREF(YevalSg2cYgen_ref),T11,out_);
  }
  T12 = CALL2(1,VARREF(YgooSioSportYput),x_1740F3834,YPchr((P)41));
  T13 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
UNLINK_STACK();
  QRET(T13);
}

FUNCODEDEF(fun_generate_function_body_reference_177) {
  P out_,definition_;
  P T0;
LINK_STACK();
  ARG(out_, 0);
  ARG(definition_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_505));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,definition_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_506));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_return_178) {
  P defn_,d_,out_;
  P T0,T1;
LINK_STACK();
  ARG(defn_, 0);
  ARG(d_, 1);
  ARG(out_, 2);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_509));
  T0 = CALL1(1,VARREF(YevalSastYfunction_body),defn_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T0,out_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_generate_return_179) {
  P defn_,d_,out_;
  P x_1742F3836;
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
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_511));
  x_1742F3836 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1742F3836,YPchr((P)40));
  T3 = CALL1(1,VARREF(YevalSastYfunction_body),defn_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1742F3836,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_primitive_inlinableQ_180) {
  P e_;
  P tmpF3837;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(e_, 0);
  T2 = CALL1(1,VARREF(YevalSastYfunction_adjectives),e_);
  T1 = CALL2(1,VARREF(YgooScolsScolYmemQ),T2,LITREF(lit_514));
  tmpF3837 = T1;
  if (tmpF3837 != YPfalse) {
    T3 = tmpF3837;
  } else {
    T5 = CALL1(1,VARREF(YevalSastYfunction_adjectives),e_);
    T4 = CALL2(1,VARREF(YgooScolsScolYmemQ),T5,LITREF(lit_515));
    T3 = T4;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_181) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_182) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_generate_function_code_183) {
  P out_,e_;
  P bindingF3845;
  P firstQF3844;
  P tmpF3843;
  P x_1746F3842;
  P x_1747F3841;
  P x_1745F3840;
  P x_1744F3839;
  P x_1743F3838;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
LINK_STACK();
  ARG(out_, 0);
  ARG(e_, 1);
  x_1743F3838 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1743F3838,LITREF(lit_518));
  if (DYNREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    T0 = LITREF(lit_519);
  } else {
    T0 = LITREF(lit_156);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1743F3838,T0);
  T2 = CALL1(1,VARREF(YevalSg2cYprimitive_inlinableQ),e_);
  if (T2 != YPfalse) {
    T1 = LITREF(lit_520);
  } else {
    T1 = LITREF(lit_156);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1743F3838,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1743F3838,LITREF(lit_521));
  T4 = CALL1(1,VARREF(YevalSastYfunction_binding),e_);
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),T4,out_);
  x_1744F3839 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1744F3839,YPchr((P)40));
  x_1745F3840 = out_;
  T8 = fun_181;
  T9 = fun_182;
  T7 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T8,T9);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  x_1747F3841 = T6;
  T11 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  T10 = CALL1(1,VARREF(YgooScolsScolYenum),T11);
  x_1746F3842 = T10;
  for (;;) {
    P a226_0,a226_1;
  loop226:
    T16 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1747F3841);
    tmpF3843 = T16;
    if (tmpF3843 != YPfalse) {
      T17 = tmpF3843;
    } else {
      T18 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1746F3842);
      T17 = T18;
    }
    T15 = T17;
    T14 = CALL1(1,VARREF(Ynot),T15);
    if (T14 != YPfalse) {
      T20 = CALL1(1,VARREF(YgooScolsScolYnow),x_1747F3841);
      firstQF3844 = T20;
      T22 = CALL1(1,VARREF(YgooScolsScolYnow),x_1746F3842);
      bindingF3845 = T22;
      T23 = CALL1(1,VARREF(Ynot),firstQF3844);
      if (T23 != YPfalse) {
        T24 = CALL2(1,VARREF(YgooSioSportYput),x_1745F3840,YPchr((P)44));
      } else {
      }
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_524));
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3845,out_);
      T26 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1747F3841);
      T27 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1746F3842);
      a226_0 = T26;
      a226_1 = T27;
      x_1747F3841 = a226_0;
      x_1746F3842 = a226_1;
      goto loop226;
      T21 = T25;
      T19 = T21;
      T13 = T19;
    } else {
      T13 = YPfalse;
    }
    break;
  }
  T12 = T13;
  T5 = T12;
  T28 = CALL2(1,VARREF(YgooSioSportYput),x_1744F3839,YPchr((P)41));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_525));
  T29 = CALL1(1,VARREF(YevalSastYfunction_temporaries),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_local_temporaries),T29,out_);
  T30 = CALL1(1,VARREF(YevalSastYfunction_registers),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_registers),T30,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_526));
  T31 = CALL1(1,VARREF(YevalSastYfunction_body),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T31,e_,YPint((P)1),out_);
  CALL3(1,VARREF(YevalSg2cYgenerate_return),e_,YPint((P)1),out_);
  T32 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_527));
UNLINK_STACK();
  QRET(T32);
}

FUNCODEDEF(fun_dispatcherQ_184) {
  P definition_;
  P tmpF3849;
  P nameF3848;
  P tmpF3847;
  P bindingF3846;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(definition_, 0);
  T1 = CALL1(1,VARREF(YevalSastYfunction_binding),definition_);
  bindingF3846 = T1;
  T3 = CALL2(1,VARREF(YisaQ),bindingF3846,VARREF(YevalSastYLmodule_bindingG));
  tmpF3847 = T3;
  if (tmpF3847 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSastYbinding_name),bindingF3846);
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T7);
    nameF3848 = T6;
    T9 = CALL2(1,VARREF(YgooSmathYE),nameF3848,LITREF(lit_530));
    tmpF3849 = T9;
    if (tmpF3849 != YPfalse) {
      T10 = tmpF3849;
    } else {
      T12 = CALL2(1,VARREF(YgooScolsSseqYfinds),nameF3848,LITREF(lit_531));
      T14 = CALL1(1,VARREF(YgooStypesYlen),nameF3848);
      T15 = CALL1(1,VARREF(YgooStypesYlen),LITREF(lit_532));
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

FUNCODEDEF(fun_185) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_186) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_187) {
  P b_;
  P x_1753F3850;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(b_, 0);
  T1 = CALL2(1,VARREF(YisaQ),b_,VARREF(YevalSastYLbindingG));
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(0));
    T2 = CALL1(1,VARREF(YevalSastYbinding_dottedQ),b_);
    if (T2 != YPfalse) {
      T3 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_541));
    } else {
      T4 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_542));
    }
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),b_,FREEREF(0));
    x_1753F3850 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1753F3850,LITREF(lit_543));
    T6 = BOXVAL(FREEREF(1));
    T5 = CALL1(1,VARREF(YgooSmathYnum_to_str),T6);
    CALL2(1,VARREF(YgooSioSportYputs),x_1753F3850,T5);
    T7 = CALL2(1,VARREF(YgooSioSportYputs),x_1753F3850,LITREF(lit_544));
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

FUNCODEDEF(fun_generate_function_code_188) {
  P out_,definition_;
  P bF3858;
  P firstQF3857;
  P tmpF3856;
  P x_1750F3855;
  P x_1751F3854;
  P x_1749F3853;
  P bindingsF3852;
  P offsetF3851;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
LINK_STACK();
  ARG(out_, 0);
  ARG(definition_, 1);
  offsetF3851 = YPint((P)0);
  offsetF3851 = BOXFAB(offsetF3851);
  T3 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
  bindingsF3852 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_534));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,definition_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_535));
  T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindingsF3852);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_536));
    x_1749F3853 = out_;
    T9 = fun_185;
    T10 = fun_186;
    T8 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T9,T10);
    T7 = CALL1(1,VARREF(YgooScolsScolYenum),T8);
    x_1751F3854 = T7;
    T12 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
    T11 = CALL1(1,VARREF(YgooScolsScolYenum),T12);
    x_1750F3855 = T11;
    for (;;) {
      P a227_0,a227_1;
    loop227:
      T17 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1751F3854);
      tmpF3856 = T17;
      if (tmpF3856 != YPfalse) {
        T18 = tmpF3856;
      } else {
        T19 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1750F3855);
        T18 = T19;
      }
      T16 = T18;
      T15 = CALL1(1,VARREF(Ynot),T16);
      if (T15 != YPfalse) {
        T21 = CALL1(1,VARREF(YgooScolsScolYnow),x_1751F3854);
        firstQF3857 = T21;
        T23 = CALL1(1,VARREF(YgooScolsScolYnow),x_1750F3855);
        bF3858 = T23;
        T24 = CALL1(1,VARREF(Ynot),firstQF3857);
        if (T24 != YPfalse) {
          T25 = CALL2(1,VARREF(YgooSioSportYput),x_1749F3853,YPchr((P)44));
        } else {
        }
        CALL2(1,VARREF(YevalSg2cYbinding_Gc),bF3858,out_);
        T27 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1751F3854);
        T28 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1750F3855);
        a227_0 = T27;
        a227_1 = T28;
        x_1751F3854 = a227_0;
        x_1750F3855 = a227_1;
        goto loop227;
        T22 = T26;
        T20 = T22;
        T14 = T20;
      } else {
        T14 = YPfalse;
      }
      break;
    }
    T13 = T14;
    T6 = T13;
    T29 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
  } else {
  }
  T30 = CALL1(1,VARREF(YevalSastYfunction_temporaries),definition_);
  CALL2(1,VARREF(YevalSg2cYgenerate_local_temporaries),T30,out_);
  T31 = CALL1(1,VARREF(YevalSastYfunction_registers),definition_);
  CALL2(1,VARREF(YevalSg2cYgenerate_registers),T31,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_539));
  T32 = FUNFAB(fun_187,2,out_,offsetF3851);
  CALL2(1,VARREF(YgooSmacrosYdo),T32,bindingsF3852);
  T33 = CALL1(1,VARREF(YevalSastYfunction_body),definition_);
  CALL4(1,VARREF(YevalSg2cYto_c),T33,definition_,YPint((P)1),out_);
  T35 = CALL1(1,VARREF(YevalSg2cYdispatcherQ),definition_);
  T34 = CALL1(1,VARREF(Ynot),T35);
  if (T34 != YPfalse) {
    T36 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_545));
  } else {
  }
  CALL3(1,VARREF(YevalSg2cYgenerate_return),definition_,YPint((P)1),out_);
  T37 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_546));
  T2 = T37;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_local_temporaries_189) {
  P temps_,out_;
  P tempF3860;
  P x_1754F3859;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(temps_, 0);
  ARG(out_, 1);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),temps_);
  x_1754F3859 = T2;
  for (;;) {
    P a228_0;
  loop228:
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1754F3859);
    T5 = CALL1(1,VARREF(Ynot),T6);
    if (T5 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_1754F3859);
      tempF3860 = T8;
      CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_549));
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),tempF3860,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_268));
      T10 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1754F3859);
      a228_0 = T10;
      x_1754F3859 = a228_0;
      goto loop228;
      T7 = T9;
      T4 = T7;
    } else {
      T4 = YPfalse;
    }
    break;
  }
  T3 = T4;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_registers_190) {
  P regs_,out_;
  P tmpF3865;
  P iF3864;
  P jF3863;
  P jF3862;
  P nregsF3861;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(regs_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YgooStypesYlen),regs_);
  nregsF3861 = T1;
  jF3862 = YPint((P)0);
  for (;;) {
    P a229_0;
  loop229:
    T5 = CALL2(1,VARREF(YgooSmagYL),jF3862,nregsF3861);
    if (T5 != YPfalse) {
      CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_552));
      jF3863 = jF3862;
      iF3864 = YPint((P)0);
      for (;;) {
        P a230_0,a230_1;
      loop230:
        T10 = CALL2(1,VARREF(YgooSmathYE),iF3864,VARREF(YevalSg2cYTregisters_per_lineT));
        tmpF3865 = T10;
        if (tmpF3865 != YPfalse) {
          T11 = tmpF3865;
        } else {
          T12 = CALL2(1,VARREF(YgooSmathYE),jF3863,nregsF3861);
          T11 = T12;
        }
        T9 = T11;
        if (T9 != YPfalse) {
          CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_553));
          a229_0 = jF3863;
          jF3862 = a229_0;
          goto loop229;
          T8 = T13;
        } else {
          T15 = CALL2(1,VARREF(YgooSmathYE),iF3864,YPint((P)0));
          T14 = CALL1(1,VARREF(Ynot),T15);
          if (T14 != YPfalse) {
            T16 = CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
          } else {
          }
          T17 = CALL2(1,VARREF(YgooSmacrosYelt),regs_,jF3863);
          CALL2(1,VARREF(YevalSg2cYgen_ref),T17,out_);
          T19 = CALL2(1,VARREF(YgooSmathYA),jF3863,YPint((P)1));
          T20 = CALL2(1,VARREF(YgooSmathYA),iF3864,YPint((P)1));
          a230_0 = T19;
          a230_1 = T20;
          jF3863 = a230_0;
          iF3864 = a230_1;
          goto loop230;
          T8 = T18;
        }
        break;
      }
      T7 = T8;
      T6 = T7;
      T4 = T6;
    } else {
      T4 = YPfalse;
    }
    break;
  }
  T3 = T4;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_info_name_191) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),name_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_556),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_maybe_declare_192) {
  P modname_;
  P x_1756F3866;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(modname_, 0);
  T2 = CALL3(1,VARREF(YgooScolsScolYelt_or),FREEREF(0),modname_,YPfalse);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,FREEREF(0),modname_);
    x_1756F3866 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1756F3866,LITREF(lit_561));
    T4 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),modname_);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1756F3866,T4);
    T5 = CALL2(1,VARREF(YgooSioSportYputs),x_1756F3866,LITREF(lit_562));
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_193) {
  P binding_;
  P home_modF3867;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(binding_, 0);
  T1 = CALL1(1,VARREF(YevalSastYbinding_module_name),binding_);
  home_modF3867 = T1;
  T4 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T5 = CALL1(0,FREEREF(1),home_modF3867);
    T2 = T5;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYdeclare_imported_module_infos) {
  P out_,mod_;
  P maybe_declareF3870;
  P envF3869;
  P seenF3868;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)50));
  seenF3868 = T1;
  T3 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  envF3869 = T3;
  T5 = FUNSHELL(0,fun_maybe_declare_192,2);
  maybe_declareF3870 = T5;
  FUNINIT(maybe_declareF3870, 2,seenF3868,out_);
  T7 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF3869);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYmodule_name),T7);
  CALL2(1,VARREF(YgooSmacrosYdo),maybe_declareF3870,T6);
  T9 = FUNFAB(fun_193,2,mod_,maybe_declareF3870);
  T10 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T8 = CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T9,T10);
  T4 = T8;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_195) {
  P local_name_,binding_;
  P x_1760F3871;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(local_name_, 0);
  ARG(binding_, 1);
  T2 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    x_1760F3871 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1760F3871,LITREF(lit_573));
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T4 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T5);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1760F3871,T4);
    CALL2(1,VARREF(YgooSioSportYputs),x_1760F3871,LITREF(lit_574));
    T7 = CALL1(1,VARREF(YevalSastYbinding_module_name),binding_);
    T6 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),T7);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1760F3871,T6);
    CALL2(1,VARREF(YgooSioSportYputs),x_1760F3871,LITREF(lit_575));
    T10 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T9 = CALL2(1,VARREF(YgooSmacrosYEE),T10,local_name_);
    if (T9 != YPfalse) {
      T8 = LITREF(lit_576);
    } else {
      T11 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),local_name_);
      T8 = T11;
    }
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1760F3871,T8);
    T12 = CALL2(1,VARREF(YgooSioSportYputs),x_1760F3871,LITREF(lit_577));
    T3 = T12;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_196) {
  P binding_;
  P x_1765F3876;
  P x_1764F3875;
  P x_1763F3874;
  P x_1762F3873;
  P x_1761F3872;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(binding_, 0);
  T1 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
  if (T1 != YPfalse) {
    x_1761F3872 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1761F3872,LITREF(lit_581));
    T3 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T2 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T3);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1761F3872,T2);
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1761F3872,LITREF(lit_582));
    T6 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
    x_1762F3873 = T6;
    x_1763F3874 = VARREF(YgooSmacrosYEE);
    T9 = CALL2(1,x_1763F3874,x_1762F3873,LITREF(lit_151));
    if (T9 != YPfalse) {
      x_1764F3875 = FREEREF(1);
      CALL2(1,VARREF(YgooSioSportYputs),x_1764F3875,LITREF(lit_583));
      T11 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1764F3875,T11);
      T12 = CALL2(1,VARREF(YgooSioSportYputs),x_1764F3875,LITREF(lit_584));
      T10 = T12;
      T8 = T10;
    } else {
      T14 = CALL2(1,x_1763F3874,x_1762F3873,LITREF(lit_153));
      if (T14 != YPfalse) {
        x_1765F3876 = FREEREF(1);
        CALL2(1,VARREF(YgooSioSportYputs),x_1765F3876,LITREF(lit_585));
        T16 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
        CALL2(1,VARREF(YgooSioSwriteYemit),x_1765F3876,T16);
        T17 = CALL2(1,VARREF(YgooSioSportYputs),x_1765F3876,LITREF(lit_586));
        T15 = T17;
        T13 = T15;
      } else {
        T18 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_587));
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

FUNCODEDEF(YevalSg2cYgenerate_module_info) {
  P out_,mod_;
  P x_1771F3892;
  P x_1770F3891;
  P x_1769F3890;
  P x_1768F3889;
  P bindingF3888;
  P exported_asF3887;
  P tup35F3886;
  P x_1766F3885;
  P x_1759F3884;
  P nF3883;
  P x_1757F3882;
  P uses_namesF3881;
  P usesF3880;
  P envF3879;
  P info_nameF3878;
  P nameF3877;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  T1 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  nameF3877 = T1;
  T3 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nameF3877);
  info_nameF3878 = T3;
  T5 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  envF3879 = T5;
  T7 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF3879);
  usesF3880 = T7;
  T9 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYmodule_name),usesF3880);
  uses_namesF3881 = T9;
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_566));
  CALL2(1,VARREF(YevalSg2cYdeclare_imported_module_infos),out_,mod_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_567));
  T10 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF3881);
  x_1757F3882 = T10;
  for (;;) {
    P a231_0;
  loop231:
    T14 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1757F3882);
    T13 = CALL1(1,VARREF(Ynot),T14);
    if (T13 != YPfalse) {
      T16 = CALL1(1,VARREF(YgooScolsScolYnow),x_1757F3882);
      nF3883 = T16;
      x_1759F3884 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1759F3884,LITREF(lit_568));
      T17 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nF3883);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1759F3884,T17);
      T18 = CALL2(1,VARREF(YgooSioSportYputs),x_1759F3884,LITREF(lit_569));
      T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1757F3882);
      a231_0 = T20;
      x_1757F3882 = a231_0;
      goto loop231;
      T15 = T19;
      T12 = T15;
    } else {
      T12 = YPfalse;
    }
    break;
  }
  T11 = T12;
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_570));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_571));
  T21 = FUNFAB(fun_195,2,mod_,out_);
  T22 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  CALL2(1,VARREF(YevalSastYdo_named_static_global_bindings),T21,T22);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_578));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_579));
  T23 = FUNFAB(fun_196,2,mod_,out_);
  T24 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T23,T24);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_588));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_589));
  T26 = CALL1(1,VARREF(YevalSastYmodule_exports),mod_);
  T25 = CALL1(1,VARREF(YgooScolsScolYenum),T26);
  x_1766F3885 = T25;
  for (;;) {
    P a232_0;
  loop232:
    T30 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1766F3885);
    T29 = CALL1(1,VARREF(Ynot),T30);
    if (T29 != YPfalse) {
      T33 = CALL1(1,VARREF(YgooScolsScolYnow_key),x_1766F3885);
      T34 = CALL1(1,VARREF(YgooScolsScolYnow),x_1766F3885);
      T32 = CALL2(1,VARREF(Ytup),T33,T34);
      tup35F3886 = T32;
      T36 = CALL2(1,VARREF(YgooSmacrosYelt),tup35F3886,YPint((P)0));
      exported_asF3887 = T36;
      T38 = CALL2(1,VARREF(YgooSmacrosYelt),tup35F3886,YPint((P)1));
      bindingF3888 = T38;
      x_1768F3889 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1768F3889,LITREF(lit_590));
      T40 = CALL1(1,VARREF(YevalSastYbinding_name),bindingF3888);
      T39 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T40);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1768F3889,T39);
      CALL2(1,VARREF(YgooSioSportYputs),x_1768F3889,LITREF(lit_591));
      T43 = CALL1(1,VARREF(YevalSastYbinding_name),bindingF3888);
      T42 = CALL2(1,VARREF(YgooSmacrosYEE),T43,exported_asF3887);
      if (T42 != YPfalse) {
        T41 = LITREF(lit_592);
      } else {
        T44 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),exported_asF3887);
        T41 = T44;
      }
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1768F3889,T41);
      T45 = CALL2(1,VARREF(YgooSioSportYputs),x_1768F3889,LITREF(lit_593));
      T47 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1766F3885);
      a232_0 = T47;
      x_1766F3885 = a232_0;
      goto loop232;
      T37 = T46;
      T35 = T37;
      T31 = T35;
      T28 = T31;
    } else {
      T28 = YPfalse;
    }
    break;
  }
  T27 = T28;
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_594));
  x_1769F3890 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1769F3890,LITREF(lit_595));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1769F3890,info_nameF3878);
  T48 = CALL2(1,VARREF(YgooSioSportYputs),x_1769F3890,LITREF(lit_596));
  x_1770F3891 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1770F3891,LITREF(lit_597));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1770F3891,info_nameF3878);
  T49 = CALL2(1,VARREF(YgooSioSportYputs),x_1770F3891,LITREF(lit_598));
  x_1771F3892 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1771F3892,LITREF(lit_599));
  T50 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),nameF3877);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1771F3892,T50);
  T51 = CALL2(1,VARREF(YgooSioSportYputs),x_1771F3892,LITREF(lit_600));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_601));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_602));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_603));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_604));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_605));
  T52 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_606));
  T8 = T52;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_init_name_198) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),name_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_609),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_init_decl_199) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),name_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_612),T1,LITREF(lit_613));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_module_init_200) {
  P out_,mod_,form_;
  P x_1779F3905;
  P nF3904;
  P x_1777F3903;
  P x_1776F3902;
  P x_1775F3901;
  P x_1774F3900;
  P nF3899;
  P x_1772F3898;
  P uses_namesF3897;
  P usesF3896;
  P envF3895;
  P init_declF3894;
  P nameF3893;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  ARG(form_, 2);
  if (DYNREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    T1 = LITREF(lit_616);
  } else {
    T2 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T1 = T2;
  }
  nameF3893 = T1;
  T4 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nameF3893);
  init_declF3894 = T4;
  T6 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  envF3895 = T6;
  T8 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF3895);
  usesF3896 = T8;
  T10 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYmodule_name),usesF3896);
  uses_namesF3897 = T10;
  T11 = CALL1(1,VARREF(Ynot),DYNREF(YevalSg2cYTdynamic_linkingQT));
  if (T11 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_617));
    T13 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF3897);
    x_1772F3898 = T13;
    for (;;) {
      P a233_0;
    loop233:
      T17 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1772F3898);
      T16 = CALL1(1,VARREF(Ynot),T17);
      if (T16 != YPfalse) {
        T19 = CALL1(1,VARREF(YgooScolsScolYnow),x_1772F3898);
        nF3899 = T19;
        x_1774F3900 = out_;
        CALL2(1,VARREF(YgooSioSportYputs),x_1774F3900,LITREF(lit_618));
        T20 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nF3899);
        CALL2(1,VARREF(YgooSioSwriteYemit),x_1774F3900,T20);
        T21 = CALL2(1,VARREF(YgooSioSportYputs),x_1774F3900,LITREF(lit_619));
        T23 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1772F3898);
        a233_0 = T23;
        x_1772F3898 = a233_0;
        goto loop233;
        T18 = T22;
        T15 = T18;
      } else {
        T15 = YPfalse;
      }
      break;
    }
    T14 = T15;
    T12 = T14;
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_620));
  x_1775F3901 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1775F3901,LITREF(lit_621));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1775F3901,init_declF3894);
  T24 = CALL2(1,VARREF(YgooSioSportYputs),x_1775F3901,LITREF(lit_622));
  x_1776F3902 = out_;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1776F3902,init_declF3894);
  T25 = CALL2(1,VARREF(YgooSioSportYputs),x_1776F3902,LITREF(lit_623));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_624));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_625));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_626));
  T26 = CALL1(1,VARREF(Ynot),DYNREF(YevalSg2cYTdynamic_linkingQT));
  if (T26 != YPfalse) {
    T27 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF3897);
    x_1777F3903 = T27;
    for (;;) {
      P a234_0;
    loop234:
      T31 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1777F3903);
      T30 = CALL1(1,VARREF(Ynot),T31);
      if (T30 != YPfalse) {
        T33 = CALL1(1,VARREF(YgooScolsScolYnow),x_1777F3903);
        nF3904 = T33;
        x_1779F3905 = out_;
        CALL2(1,VARREF(YgooSioSportYputs),x_1779F3905,LITREF(lit_627));
        T34 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),nF3904);
        CALL2(1,VARREF(YgooSioSwriteYemit),x_1779F3905,T34);
        T35 = CALL2(1,VARREF(YgooSioSportYputs),x_1779F3905,LITREF(lit_628));
        T37 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1777F3903);
        a234_0 = T37;
        x_1777F3903 = a234_0;
        goto loop234;
        T32 = T36;
        T29 = T32;
      } else {
        T29 = YPfalse;
      }
      break;
    }
    T28 = T29;
    T38 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_629));
  } else {
  }
  CALL4(1,VARREF(YevalSg2cYto_c),form_,YPfalse,YPint((P)1),out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_630));
  T39 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_631));
  T9 = T39;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_main_201) {
  P out_,mod_;
  P x_1784F3912;
  P x_1783F3911;
  P x_1782F3910;
  P x_1781F3909;
  P x_1780F3908;
  P info_nameF3907;
  P nameF3906;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  T1 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  nameF3906 = T1;
  T3 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nameF3906);
  info_nameF3907 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_634));
  x_1780F3908 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1780F3908,LITREF(lit_635));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1780F3908,info_nameF3907);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1780F3908,LITREF(lit_636));
  x_1781F3909 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1781F3909,LITREF(lit_637));
  T5 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nameF3906);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1781F3909,T5);
  T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1781F3909,LITREF(lit_638));
  x_1782F3910 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1782F3910,LITREF(lit_639));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1782F3910,info_nameF3907);
  T7 = CALL2(1,VARREF(YgooSioSportYputs),x_1782F3910,LITREF(lit_640));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_641));
  x_1783F3911 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1783F3911,LITREF(lit_642));
  T8 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_643));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1783F3911,T8);
  T9 = CALL2(1,VARREF(YgooSioSportYputs),x_1783F3911,LITREF(lit_644));
  x_1784F3912 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1784F3912,LITREF(lit_645));
  T10 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),nameF3906);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1784F3912,T10);
  T11 = CALL2(1,VARREF(YgooSioSportYputs),x_1784F3912,LITREF(lit_646));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_647));
  T12 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_648));
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
  P iF3922;
  P x_1593F3921;
  P iF3920;
  P x_1591F3919;
  P mangleF3918;
  P x_1589F3917;
  P iF3916;
  P x_1587F3915;
  P tableF3914;
  P vecF3913;
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
  P T256,T257,T258,T259,T260,T261,T262,T263,T264,T265,T266,T267;
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
  T10 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T9 = XCALL2(1,VARREF(YgooScolsScolYfill),T10,YPfalse);
  vecF3913 = T9;
  T11 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)9));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_189),vecF3913,T11);
  T12 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)12));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_190),vecF3913,T12);
  T13 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)13));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_191),vecF3913,T13);
  T14 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)10));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_192),vecF3913,T14);
  T15 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)34));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_193),vecF3913,T15);
  T16 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)92));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_194),vecF3913,T16);
  T17 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),vecF3913);
  T8 = T17;
  VARSET(YevalSg2cYDc_escapes,T8);
  lit_195 = YPPsym((P)"mangle-string-literal");
  lit_196 = YPPlist(1,YPPsym((P)"str"));
  T18 = YPsig(LITREF(lit_196),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_62 = YPmet(FUNCODEREF(fun_mangle_string_literal_62),LITREF(lit_195),T18,ENVNUL,PNUL,sloc(357));
  T20 = VARREF_OR(YevalSg2cYmangle_string_literal,YPfalse);
  T21 = fun_mangle_string_literal_62;
  T19 = XCALL2(1,VARREF(YPdefine_method),T20,T21);
  VARSET(YevalSg2cYmangle_string_literal,T19);
  lit_197 = YPPlist(1,YPPsym((P)"sym"));
  T22 = YPsig(LITREF(lit_197),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_63 = YPmet(FUNCODEREF(fun_mangle_string_literal_63),LITREF(lit_195),T22,ENVNUL,PNUL,sloc(372));
  T24 = VARREF_OR(YevalSg2cYmangle_string_literal,YPfalse);
  T25 = fun_mangle_string_literal_63;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T25);
  VARSET(YevalSg2cYmangle_string_literal,T23);
  lit_198 = YPsb((P)"0123456789");
  VARSET(YevalSg2cYDnumber_characters,LITREF(lit_198));
  lit_199 = YPPsym((P)"mangle-integer");
  lit_200 = YPPlist(1,YPPsym((P)"number"));
  lit_201 = YPPsym((P)"process-integer");
  lit_202 = YPPlist(2,YPPsym((P)"number"),YPPsym((P)"index"));
  T27 = YPsig(LITREF(lit_202),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_process_integer_64 = YPmet(FUNCODEREF(fun_process_integer_64),LITREF(lit_201),T27,ENVNUL,PNUL,sloc(379));
  T26 = YPsig(LITREF(lit_200),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_integer_65 = YPmet(FUNCODEREF(fun_mangle_integer_65),LITREF(lit_199),T26,ENVNUL,PNUL,sloc(377));
  T29 = VARREF_OR(YevalSg2cYmangle_integer,YPfalse);
  T30 = fun_mangle_integer_65;
  T28 = XCALL2(1,VARREF(YPdefine_method),T29,T30);
  VARSET(YevalSg2cYmangle_integer,T28);
  T33 = XCALL2(1,VARREF(YgooSmathYA),VARREF(YevalSg2cYDmax_character_code),YPint((P)1));
  T32 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),T33);
  tableF3914 = T32;
  T35 = XCALL3(1,VARREF(YgooScolsSrangeYrange),VARREF(YevalSg2cYDmin_character_code),VARREF(YgooSmagYLE),VARREF(YevalSg2cYDmax_character_code));
  T34 = XCALL1(1,VARREF(YgooScolsScolYenum),T35);
  x_1587F3915 = T34;
  for (;;) {
    P a235_0;
  loop235:
    T39 = XCALL1(1,VARREF(YgooScolsScolYfinQ),x_1587F3915);
    T38 = XCALL1(1,VARREF(Ynot),T39);
    if (T38 != YPfalse) {
      T41 = XCALL1(1,VARREF(YgooScolsScolYnow),x_1587F3915);
      iF3916 = T41;
      T43 = XCALL1(1,VARREF(YevalSg2cYmangle_integer),iF3916);
      T42 = XCALL3(1,VARREF(YgooSmacrosYcat),VARREF(YevalSg2cYDescape_separator),T43,VARREF(YevalSg2cYDescape_separator));
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),T42,tableF3914,iF3916);
      T45 = XCALL1(1,VARREF(YgooScolsScolYnxt),x_1587F3915);
      a235_0 = T45;
      x_1587F3915 = a235_0;
      goto loop235;
      T40 = T44;
      T37 = T40;
    } else {
      T37 = YPfalse;
    }
    break;
  }
  T36 = T37;
  T46 = XCALL1(1,VARREF(YgooScolsScolYenum),VARREF(YevalSg2cYDmangles_data));
  x_1589F3917 = T46;
  for (;;) {
    P a236_0;
  loop236:
    T50 = XCALL1(1,VARREF(YgooScolsScolYfinQ),x_1589F3917);
    T49 = XCALL1(1,VARREF(Ynot),T50);
    if (T49 != YPfalse) {
      T52 = XCALL1(1,VARREF(YgooScolsScolYnow),x_1589F3917);
      mangleF3918 = T52;
      T53 = XCALL2(1,VARREF(YgooSmacrosYelt),mangleF3918,YPint((P)1));
      T55 = XCALL2(1,VARREF(YgooSmacrosYelt),mangleF3918,YPint((P)0));
      T54 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T55);
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),T53,tableF3914,T54);
      T57 = XCALL1(1,VARREF(YgooScolsScolYnxt),x_1589F3917);
      a236_0 = T57;
      x_1589F3917 = a236_0;
      goto loop236;
      T51 = T56;
      T48 = T51;
    } else {
      T48 = YPfalse;
    }
    break;
  }
  T47 = T48;
  T60 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)97));
  T61 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)122));
  T59 = XCALL3(1,VARREF(YgooScolsSrangeYrange),T60,VARREF(YgooSmagYLE),T61);
  T58 = XCALL1(1,VARREF(YgooScolsScolYenum),T59);
  x_1591F3919 = T58;
  for (;;) {
    P a237_0;
  loop237:
    T65 = XCALL1(1,VARREF(YgooScolsScolYfinQ),x_1591F3919);
    T64 = XCALL1(1,VARREF(Ynot),T65);
    if (T64 != YPfalse) {
      T67 = XCALL1(1,VARREF(YgooScolsScolYnow),x_1591F3919);
      iF3920 = T67;
      T68 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF3920);
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),T68,tableF3914,iF3920);
      T70 = XCALL1(1,VARREF(YgooScolsScolYnxt),x_1591F3919);
      a237_0 = T70;
      x_1591F3919 = a237_0;
      goto loop237;
      T66 = T69;
      T63 = T66;
    } else {
      T63 = YPfalse;
    }
    break;
  }
  T62 = T63;
  T73 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)48));
  T74 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)57));
  T72 = XCALL3(1,VARREF(YgooScolsSrangeYrange),T73,VARREF(YgooSmagYLE),T74);
  T71 = XCALL1(1,VARREF(YgooScolsScolYenum),T72);
  x_1593F3921 = T71;
  for (;;) {
    P a238_0;
  loop238:
    T78 = XCALL1(1,VARREF(YgooScolsScolYfinQ),x_1593F3921);
    T77 = XCALL1(1,VARREF(Ynot),T78);
    if (T77 != YPfalse) {
      T80 = XCALL1(1,VARREF(YgooScolsScolYnow),x_1593F3921);
      iF3922 = T80;
      T81 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF3922);
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),T81,tableF3914,iF3922);
      T83 = XCALL1(1,VARREF(YgooScolsScolYnxt),x_1593F3921);
      a238_0 = T83;
      x_1593F3921 = a238_0;
      goto loop238;
      T79 = T82;
      T76 = T79;
    } else {
      T76 = YPfalse;
    }
    break;
  }
  T75 = T76;
  T31 = tableF3914;
  VARSET(YevalSg2cYDname_mangler_table,T31);
  lit_203 = YPPsym((P)"mangler-reset");
  lit_204 = YPPlist(1,YPPsym((P)"buffer"));
  T84 = YPsig(LITREF(lit_204),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangler_reset = YPmet(FUNCODEREF(YevalSg2cYmangler_reset),LITREF(lit_203),T84,ENVNUL,PNUL,sloc(408));
  T85 = YevalSg2cYmangler_reset;
  VARSET(YevalSg2cYmangler_reset,T85);
  lit_205 = YPPsym((P)"mangle-name-into");
  lit_206 = YPPlist(2,YPPsym((P)"buf"),YPPsym((P)"name"));
  T86 = YPsig(LITREF(lit_206),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_name_into = YPmet(FUNCODEREF(YevalSg2cYmangle_name_into),LITREF(lit_205),T86,ENVNUL,PNUL,sloc(411));
  T87 = YevalSg2cYmangle_name_into;
  VARSET(YevalSg2cYmangle_name_into,T87);
  lit_207 = YPPsym((P)"mangle-raw-name");
  lit_208 = YPPlist(1,YPPsym((P)"name"));
  T88 = YPsig(LITREF(lit_208),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_68 = YPmet(FUNCODEREF(fun_mangle_raw_name_68),LITREF(lit_207),T88,ENVNUL,PNUL,sloc(416));
  T90 = VARREF_OR(YevalSg2cYmangle_raw_name,YPfalse);
  T91 = fun_mangle_raw_name_68;
  T89 = XCALL2(1,VARREF(YPdefine_method),T90,T91);
  VARSET(YevalSg2cYmangle_raw_name,T89);
  lit_209 = YPPlist(1,YPPsym((P)"name"));
  T92 = YPsig(LITREF(lit_209),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_69 = YPmet(FUNCODEREF(fun_mangle_raw_name_69),LITREF(lit_207),T92,ENVNUL,PNUL,sloc(421));
  T94 = VARREF_OR(YevalSg2cYmangle_raw_name,YPfalse);
  T95 = fun_mangle_raw_name_69;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T95);
  VARSET(YevalSg2cYmangle_raw_name,T93);
  lit_210 = YPPsym((P)"mangle-local-name");
  lit_211 = YPPlist(1,YPPsym((P)"name"));
  T96 = YPsig(LITREF(lit_211),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_70 = YPmet(FUNCODEREF(fun_mangle_local_name_70),LITREF(lit_210),T96,ENVNUL,PNUL,sloc(424));
  T98 = VARREF_OR(YevalSg2cYmangle_local_name,YPfalse);
  T99 = fun_mangle_local_name_70;
  T97 = XCALL2(1,VARREF(YPdefine_method),T98,T99);
  VARSET(YevalSg2cYmangle_local_name,T97);
  lit_212 = YPPlist(1,YPPsym((P)"name"));
  T100 = YPsig(LITREF(lit_212),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_71 = YPmet(FUNCODEREF(fun_mangle_local_name_71),LITREF(lit_210),T100,ENVNUL,PNUL,sloc(430));
  T102 = VARREF_OR(YevalSg2cYmangle_local_name,YPfalse);
  T103 = fun_mangle_local_name_71;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T103);
  VARSET(YevalSg2cYmangle_local_name,T101);
  lit_213 = YPPsym((P)"buf-cat2!");
  lit_214 = YPPlist(2,YPPsym((P)"buf"),YPPsym((P)"name"));
  T104 = YPsig(LITREF(lit_214),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYbuf_cat2X = YPmet(FUNCODEREF(YevalSg2cYbuf_cat2X),LITREF(lit_213),T104,ENVNUL,PNUL,sloc(434));
  T105 = YevalSg2cYbuf_cat2X;
  VARSET(YevalSg2cYbuf_cat2X,T105);
  lit_215 = YPPsym((P)"mangle-module-into");
  lit_216 = YPPlist(2,YPPsym((P)"buf"),YPPsym((P)"mod"));
  T106 = YPsig(LITREF(lit_216),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_mangle_module_into_73 = YPmet(FUNCODEREF(fun_mangle_module_into_73),LITREF(lit_215),T106,ENVNUL,PNUL,sloc(441));
  T108 = VARREF_OR(YevalSg2cYmangle_module_into,YPfalse);
  T109 = fun_mangle_module_into_73;
  T107 = XCALL2(1,VARREF(YPdefine_method),T108,T109);
  VARSET(YevalSg2cYmangle_module_into,T107);
  lit_217 = YPPsym((P)"mangle-global-name");
  lit_218 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"name"));
  T110 = YPsig(LITREF(lit_218),YPPlist(2,VARREF(YLanyG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_74 = YPmet(FUNCODEREF(fun_mangle_global_name_74),LITREF(lit_217),T110,ENVNUL,PNUL,sloc(448));
  T112 = VARREF_OR(YevalSg2cYmangle_global_name,YPfalse);
  T113 = fun_mangle_global_name_74;
  T111 = XCALL2(1,VARREF(YPdefine_method),T112,T113);
  VARSET(YevalSg2cYmangle_global_name,T111);
  lit_219 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"name"));
  T114 = YPsig(LITREF(lit_219),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_75 = YPmet(FUNCODEREF(fun_mangle_global_name_75),LITREF(lit_217),T114,ENVNUL,PNUL,sloc(459));
  T116 = VARREF_OR(YevalSg2cYmangle_global_name,YPfalse);
  T117 = fun_mangle_global_name_75;
  T115 = XCALL2(1,VARREF(YPdefine_method),T116,T117);
  VARSET(YevalSg2cYmangle_global_name,T115);
  lit_220 = YPPsym((P)"mangle-boot-name");
  lit_221 = YPPlist(1,YPPsym((P)"name"));
  T118 = YPsig(LITREF(lit_221),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_boot_name = YPmet(FUNCODEREF(YevalSg2cYmangle_boot_name),LITREF(lit_220),T118,ENVNUL,PNUL,sloc(464));
  T119 = YevalSg2cYmangle_boot_name;
  VARSET(YevalSg2cYmangle_boot_name,T119);
  lit_222 = YPPsym((P)"mangle-quotation-name");
  lit_223 = YPPlist(1,YPPsym((P)"name"));
  lit_224 = YPsb((P)"lit_");
  T120 = YPsig(LITREF(lit_223),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_quotation_name = YPmet(FUNCODEREF(YevalSg2cYmangle_quotation_name),LITREF(lit_222),T120,ENVNUL,PNUL,sloc(467));
  T121 = YevalSg2cYmangle_quotation_name;
  VARSET(YevalSg2cYmangle_quotation_name,T121);
  lit_225 = YPPsym((P)"mangle-binding");
  lit_226 = YPPlist(1,YPPsym((P)"binding"));
  lit_227 = YPPsym((P)"quotation");
  T122 = YPsig(LITREF(lit_226),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_78 = YPmet(FUNCODEREF(fun_mangle_binding_78),LITREF(lit_225),T122,ENVNUL,PNUL,sloc(473));
  T124 = VARREF_OR(YevalSg2cYmangle_binding,YPfalse);
  T125 = fun_mangle_binding_78;
  T123 = XCALL2(1,VARREF(YPdefine_method),T124,T125);
  VARSET(YevalSg2cYmangle_binding,T123);
  lit_228 = YPPsym((P)"mangle-local-marked-name");
  lit_229 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"marker"));
  T126 = YPsig(LITREF(lit_229),YPPlist(2,VARREF(YLstrG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_local_marked_name = YPmet(FUNCODEREF(YevalSg2cYmangle_local_marked_name),LITREF(lit_228),T126,ENVNUL,PNUL,sloc(480));
  T127 = YevalSg2cYmangle_local_marked_name;
  VARSET(YevalSg2cYmangle_local_marked_name,T127);
  lit_230 = YPPlist(1,YPPsym((P)"binding"));
  T128 = YPsig(LITREF(lit_230),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_80 = YPmet(FUNCODEREF(fun_mangle_binding_80),LITREF(lit_225),T128,ENVNUL,PNUL,sloc(487));
  T130 = VARREF_OR(YevalSg2cYmangle_binding,YPfalse);
  T131 = fun_mangle_binding_80;
  T129 = XCALL2(1,VARREF(YPdefine_method),T130,T131);
  VARSET(YevalSg2cYmangle_binding,T129);
  lit_231 = YPPlist(1,YPPsym((P)"binding"));
  T132 = YPsig(LITREF(lit_231),YPPlist(1,VARREF(YevalSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_81 = YPmet(FUNCODEREF(fun_mangle_binding_81),LITREF(lit_225),T132,ENVNUL,PNUL,sloc(491));
  T134 = VARREF_OR(YevalSg2cYmangle_binding,YPfalse);
  T135 = fun_mangle_binding_81;
  T133 = XCALL2(1,VARREF(YPdefine_method),T134,T135);
  VARSET(YevalSg2cYmangle_binding,T133);
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
  T138 = YPsig(LITREF(lit_235),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1604_82 = YPmet(FUNCODEREF(fun_x_1604_82),LITREF(lit_234),T138,ENVNUL,PNUL,YPfalse);
  T137 = YPsig(LITREF(lit_233),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_83 = YPmet(FUNCODEREF(fun_83),YPfalse,T137,ENVNUL,PNUL,YPfalse);
  T136 = YPsig(LITREF(lit_232),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_84 = YPmet(FUNCODEREF(fun_84),YPfalse,T136,ENVNUL,PNUL,YPfalse);
  T139 = fun_84;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"for-commas"),T139);
  lit_244 = YPPlist(1,YPPsym((P)"exp"));
  lit_245 = YPPlist(1,YPPsym((P)"return"));
  lit_246 = YPPsym((P)"x-1608");
  lit_247 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_248 = YPPsym((P)"between-parentheses");
  T142 = YPsig(LITREF(lit_247),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1608_85 = YPmet(FUNCODEREF(fun_x_1608_85),LITREF(lit_246),T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(LITREF(lit_245),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_86 = YPmet(FUNCODEREF(fun_86),YPfalse,T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(LITREF(lit_244),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T140,ENVNUL,PNUL,YPfalse);
  T143 = fun_87;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"between-parentheses"),T143);
  lit_249 = YPPlist(1,YPPsym((P)"exp"));
  lit_250 = YPPlist(1,YPPsym((P)"return"));
  lit_251 = YPPsym((P)"x-1612");
  lit_252 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_253 = YPPsym((P)"between-parentheses-comma-separated");
  T146 = YPsig(LITREF(lit_252),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1612_88 = YPmet(FUNCODEREF(fun_x_1612_88),LITREF(lit_251),T146,ENVNUL,PNUL,YPfalse);
  T145 = YPsig(LITREF(lit_250),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_89 = YPmet(FUNCODEREF(fun_89),YPfalse,T145,ENVNUL,PNUL,YPfalse);
  T144 = YPsig(LITREF(lit_249),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_90 = YPmet(FUNCODEREF(fun_90),YPfalse,T144,ENVNUL,PNUL,YPfalse);
  T147 = fun_90;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"between-parentheses-comma-separated"),T147);
  lit_254 = YPPsym((P)"gen-result");
  lit_255 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_256 = YPsb((P)"T");
  lit_257 = YPsb((P)" = ");
  T148 = YPsig(LITREF(lit_255),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_gen_result_91 = YPmet(FUNCODEREF(fun_gen_result_91),LITREF(lit_254),T148,ENVNUL,PNUL,sloc(523));
  T150 = VARREF_OR(YevalSg2cYgen_result,YPfalse);
  T151 = fun_gen_result_91;
  T149 = XCALL2(1,VARREF(YPdefine_method),T150,T151);
  VARSET(YevalSg2cYgen_result,T149);
  lit_258 = YPPsym((P)"gen-depth");
  lit_259 = YPPlist(2,YPPsym((P)"d"),YPPsym((P)"out"));
  lit_260 = YPsb((P)"  ");
  T152 = YPsig(LITREF(lit_259),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_depth_92 = YPmet(FUNCODEREF(fun_gen_depth_92),LITREF(lit_258),T152,ENVNUL,PNUL,sloc(527));
  T154 = VARREF_OR(YevalSg2cYgen_depth,YPfalse);
  T155 = fun_gen_depth_92;
  T153 = XCALL2(1,VARREF(YPdefine_method),T154,T155);
  VARSET(YevalSg2cYgen_depth,T153);
  lit_261 = YPPlist(1,YPPsym((P)"exp"));
  lit_262 = YPPlist(1,YPPsym((P)"return"));
  lit_263 = YPPsym((P)"x-1619");
  lit_264 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_265 = YPPsym((P)"with-statement");
  lit_266 = YPPsym((P)"seq");
  lit_267 = YPPsym((P)"puts");
  lit_268 = YPsb((P)";\n");
  T158 = YPsig(LITREF(lit_264),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1619_93 = YPmet(FUNCODEREF(fun_x_1619_93),LITREF(lit_263),T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(LITREF(lit_262),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_94 = YPmet(FUNCODEREF(fun_94),YPfalse,T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(LITREF(lit_261),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_95 = YPmet(FUNCODEREF(fun_95),YPfalse,T156,ENVNUL,PNUL,YPfalse);
  T159 = fun_95;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-statement"),T159);
  lit_269 = YPPlist(1,YPPsym((P)"exp"));
  lit_270 = YPPlist(1,YPPsym((P)"return"));
  lit_271 = YPPsym((P)"x-1623");
  lit_272 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_273 = YPPsym((P)"with-expression");
  T162 = YPsig(LITREF(lit_272),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1623_96 = YPmet(FUNCODEREF(fun_x_1623_96),LITREF(lit_271),T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(LITREF(lit_270),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPmet(FUNCODEREF(fun_97),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(LITREF(lit_269),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_98 = YPmet(FUNCODEREF(fun_98),YPfalse,T160,ENVNUL,PNUL,YPfalse);
  T163 = fun_98;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-expression"),T163);
  lit_274 = YPPlist(1,YPPsym((P)"exp"));
  lit_275 = YPPlist(1,YPPsym((P)"return"));
  lit_276 = YPPsym((P)"x-1627");
  lit_277 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_278 = YPPsym((P)"with-used-expression");
  lit_279 = YPPsym((P)"when");
  lit_280 = YPPsym((P)"program-register");
  T166 = YPsig(LITREF(lit_277),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1627_99 = YPmet(FUNCODEREF(fun_x_1627_99),LITREF(lit_276),T166,ENVNUL,PNUL,YPfalse);
  T165 = YPsig(LITREF(lit_275),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_100 = YPmet(FUNCODEREF(fun_100),YPfalse,T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(LITREF(lit_274),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_101 = YPmet(FUNCODEREF(fun_101),YPfalse,T164,ENVNUL,PNUL,YPfalse);
  T167 = fun_101;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-used-expression"),T167);
  lit_281 = YPPsym((P)"generate-quotation-forwards");
  lit_282 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb*"));
  lit_283 = YPsb((P)"\n/* FORWARD QUOTATIONS: */\n\n");
  lit_284 = YPsb((P)"DEFLIT(lit_");
  lit_285 = YPsb((P)");\n");
  T168 = YPsig(LITREF(lit_282),YPPlist(2,VARREF(YLanyG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_forwards_102 = YPmet(FUNCODEREF(fun_generate_quotation_forwards_102),LITREF(lit_281),T168,ENVNUL,PNUL,sloc(547));
  T170 = VARREF_OR(YevalSg2cYgenerate_quotation_forwards,YPfalse);
  T171 = fun_generate_quotation_forwards_102;
  T169 = XCALL2(1,VARREF(YPdefine_method),T170,T171);
  VARSET(YevalSg2cYgenerate_quotation_forwards,T169);
  lit_286 = YPPsym((P)"generate-quotations");
  lit_287 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb*"));
  lit_288 = YPsb((P)"lit_");
  lit_289 = YPsb((P)" = ");
  T172 = YPsig(LITREF(lit_287),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotations_103 = YPmet(FUNCODEREF(fun_generate_quotations_103),LITREF(lit_286),T172,ENVNUL,PNUL,sloc(552));
  T174 = VARREF_OR(YevalSg2cYgenerate_quotations,YPfalse);
  T175 = fun_generate_quotations_103;
  T173 = XCALL2(1,VARREF(YPdefine_method),T174,T175);
  VARSET(YevalSg2cYgenerate_quotations,T173);
  lit_290 = YPPsym((P)"false-name");
  lit_291 = YPsb((P)"%false");
  T176 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_false_name_104 = YPmet(FUNCODEREF(fun_false_name_104),LITREF(lit_290),T176,ENVNUL,PNUL,sloc(558));
  T178 = VARREF_OR(YevalSg2cYfalse_name,YPfalse);
  T179 = fun_false_name_104;
  T177 = XCALL2(1,VARREF(YPdefine_method),T178,T179);
  VARSET(YevalSg2cYfalse_name,T177);
  lit_292 = YPPsym((P)"generate-quotation");
  lit_293 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb"));
  lit_294 = YPsb((P)"%true");
  lit_295 = YPsb((P)"%false");
  T180 = YPsig(LITREF(lit_293),YPPlist(2,VARREF(YLanyG),VARREF(YLlogG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_105 = YPmet(FUNCODEREF(fun_generate_quotation_105),LITREF(lit_292),T180,ENVNUL,PNUL,sloc(561));
  T182 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T183 = fun_generate_quotation_105;
  T181 = XCALL2(1,VARREF(YPdefine_method),T182,T183);
  VARSET(YevalSg2cYgenerate_quotation,T181);
  lit_296 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb"));
  lit_297 = YPsb((P)"nil");
  T185 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T184 = YPsig(LITREF(lit_296),YPPlist(2,VARREF(YLanyG),T185),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_106 = YPmet(FUNCODEREF(fun_generate_quotation_106),LITREF(lit_292),T184,ENVNUL,PNUL,sloc(564));
  T187 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T188 = fun_generate_quotation_106;
  T186 = XCALL2(1,VARREF(YPdefine_method),T187,T188);
  VARSET(YevalSg2cYgenerate_quotation,T186);
  lit_298 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb"));
  lit_299 = YPPlist(1,YPPsym((P)"x"));
  T190 = YPsig(LITREF(lit_299),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_107 = YPmet(FUNCODEREF(fun_107),YPfalse,T190,ENVNUL,PNUL,sloc(568));
  T189 = YPsig(LITREF(lit_298),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_108 = YPmet(FUNCODEREF(fun_generate_quotation_108),LITREF(lit_292),T189,ENVNUL,PNUL,sloc(567));
  T192 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T193 = fun_generate_quotation_108;
  T191 = XCALL2(1,VARREF(YPdefine_method),T192,T193);
  VARSET(YevalSg2cYgenerate_quotation,T191);
  lit_300 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_301 = YPsb((P)"%int");
  lit_302 = YPsb((P)"((P)");
  lit_303 = YPsb((P)")");
  T194 = YPsig(LITREF(lit_300),YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_109 = YPmet(FUNCODEREF(fun_generate_quotation_109),LITREF(lit_292),T194,ENVNUL,PNUL,sloc(570));
  T196 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T197 = fun_generate_quotation_109;
  T195 = XCALL2(1,VARREF(YPdefine_method),T196,T197);
  VARSET(YevalSg2cYgenerate_quotation,T195);
  lit_304 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_305 = YPsb((P)"%chr");
  lit_306 = YPsb((P)"((P)");
  lit_307 = YPsb((P)")");
  T198 = YPsig(LITREF(lit_304),YPPlist(2,VARREF(YLanyG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_110 = YPmet(FUNCODEREF(fun_generate_quotation_110),LITREF(lit_292),T198,ENVNUL,PNUL,sloc(573));
  T200 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T201 = fun_generate_quotation_110;
  T199 = XCALL2(1,VARREF(YPdefine_method),T200,T201);
  VARSET(YevalSg2cYgenerate_quotation,T199);
  lit_308 = YPPsym((P)"float-to-c-string");
  lit_309 = YPPlist(1,YPPsym((P)"o"));
  lit_310 = YPPlist(1,YPPsym((P)"done"));
  T203 = YPsig(LITREF(lit_310),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_111 = YPmet(FUNCODEREF(fun_111),YPfalse,T203,ENVNUL,PNUL,sloc(579));
  T202 = YPsig(LITREF(lit_309),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_float_to_c_string_112 = YPmet(FUNCODEREF(fun_float_to_c_string_112),LITREF(lit_308),T202,ENVNUL,PNUL,sloc(576));
  T205 = VARREF_OR(YevalSg2cYfloat_to_c_string,YPfalse);
  T206 = fun_float_to_c_string_112;
  T204 = XCALL2(1,VARREF(YPdefine_method),T205,T206);
  VARSET(YevalSg2cYfloat_to_c_string,T204);
  lit_311 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_312 = YPsb((P)"%flo");
  lit_313 = YPsb((P)"(FLOINT(");
  lit_314 = YPsb((P)"))");
  T207 = YPsig(LITREF(lit_311),YPPlist(2,VARREF(YLanyG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_113 = YPmet(FUNCODEREF(fun_generate_quotation_113),LITREF(lit_292),T207,ENVNUL,PNUL,sloc(591));
  T209 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T210 = fun_generate_quotation_113;
  T208 = XCALL2(1,VARREF(YPdefine_method),T209,T210);
  VARSET(YevalSg2cYgenerate_quotation,T208);
  lit_315 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_316 = YPsb((P)"%sb");
  lit_317 = YPsb((P)"((P)");
  lit_318 = YPsb((P)")");
  T211 = YPsig(LITREF(lit_315),YPPlist(2,VARREF(YLanyG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_114 = YPmet(FUNCODEREF(fun_generate_quotation_114),LITREF(lit_292),T211,ENVNUL,PNUL,sloc(595));
  T213 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T214 = fun_generate_quotation_114;
  T212 = XCALL2(1,VARREF(YPdefine_method),T213,T214);
  VARSET(YevalSg2cYgenerate_quotation,T212);
  lit_319 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_320 = YPsb((P)"XCALLN(1, ");
  lit_321 = YPsb((P)"vec");
  lit_322 = YPsb((P)", ");
  lit_323 = YPsb((P)", ");
  lit_324 = YPsb((P)")");
  T215 = YPsig(LITREF(lit_319),YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_115 = YPmet(FUNCODEREF(fun_generate_quotation_115),LITREF(lit_292),T215,ENVNUL,PNUL,sloc(599));
  T217 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T218 = fun_generate_quotation_115;
  T216 = XCALL2(1,VARREF(YPdefine_method),T217,T218);
  VARSET(YevalSg2cYgenerate_quotation,T216);
  lit_325 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_326 = YPsb((P)"XCALLN(1, ");
  lit_327 = YPsb((P)"tup");
  lit_328 = YPsb((P)", ");
  lit_329 = YPsb((P)", ");
  lit_330 = YPsb((P)")");
  T219 = YPsig(LITREF(lit_325),YPPlist(2,VARREF(YLanyG),VARREF(YLtupG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_116 = YPmet(FUNCODEREF(fun_generate_quotation_116),LITREF(lit_292),T219,ENVNUL,PNUL,sloc(607));
  T221 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T222 = fun_generate_quotation_116;
  T220 = XCALL2(1,VARREF(YPdefine_method),T221,T222);
  VARSET(YevalSg2cYgenerate_quotation,T220);
  lit_331 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_332 = YPsb((P)"%%sym");
  lit_333 = YPsb((P)"((P)");
  lit_334 = YPsb((P)")");
  T223 = YPsig(LITREF(lit_331),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_117 = YPmet(FUNCODEREF(fun_generate_quotation_117),LITREF(lit_292),T223,ENVNUL,PNUL,sloc(615));
  T225 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T226 = fun_generate_quotation_117;
  T224 = XCALL2(1,VARREF(YPdefine_method),T225,T226);
  VARSET(YevalSg2cYgenerate_quotation,T224);
  lit_335 = YPPsym((P)"binding->c");
  lit_336 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"out"));
  T227 = YPsig(LITREF(lit_336),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYbinding_Gc = YPmet(FUNCODEREF(YevalSg2cYbinding_Gc),LITREF(lit_335),T227,ENVNUL,PNUL,sloc(624));
  T228 = YevalSg2cYbinding_Gc;
  VARSET(YevalSg2cYbinding_Gc,T228);
  lit_337 = YPPsym((P)"reference->c");
  lit_338 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"out"));
  T230 = YPsig(LITREF(lit_338),YPPlist(2,VARREF(YevalSastYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T229 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_337),T230,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSg2cYreference_Gc,T229);
  lit_339 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"out"));
  T231 = YPsig(LITREF(lit_339),YPPlist(2,VARREF(YevalSastYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_Gc_119 = YPmet(FUNCODEREF(fun_reference_Gc_119),LITREF(lit_337),T231,ENVNUL,PNUL,sloc(646));
  T233 = VARREF_OR(YevalSg2cYreference_Gc,YPfalse);
  T234 = fun_reference_Gc_119;
  T232 = XCALL2(1,VARREF(YPdefine_method),T233,T234);
  VARSET(YevalSg2cYreference_Gc,T232);
  lit_340 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"out"));
  lit_341 = YPsb((P)"LITREF");
  lit_342 = YPsb((P)"RTVREF");
  lit_343 = YPsb((P)"DYNREF");
  lit_344 = YPsb((P)"VARREF");
  T235 = YPsig(LITREF(lit_340),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_Gc_120 = YPmet(FUNCODEREF(fun_reference_Gc_120),LITREF(lit_337),T235,ENVNUL,PNUL,sloc(649));
  T237 = VARREF_OR(YevalSg2cYreference_Gc,YPfalse);
  T238 = fun_reference_Gc_120;
  T236 = XCALL2(1,VARREF(YPdefine_method),T237,T238);
  VARSET(YevalSg2cYreference_Gc,T236);
  lit_345 = YPPsym((P)"to-c");
  lit_346 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  T240 = YPsig(LITREF(lit_346),YPPlist(4,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T239 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_345),T240,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSg2cYto_c,T239);
  lit_347 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  T241 = YPsig(LITREF(lit_347),YPPlist(4,VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_121 = YPmet(FUNCODEREF(fun_to_c_121),LITREF(lit_345),T241,ENVNUL,PNUL,sloc(661));
  T243 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T244 = fun_to_c_121;
  T242 = XCALL2(1,VARREF(YPdefine_method),T243,T244);
  VARSET(YevalSg2cYto_c,T242);
  lit_348 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  T245 = YPsig(LITREF(lit_348),YPPlist(4,VARREF(YevalSastYLpassive_programG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_122 = YPmet(FUNCODEREF(fun_to_c_122),LITREF(lit_345),T245,ENVNUL,PNUL,sloc(667));
  T247 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T248 = fun_to_c_122;
  T246 = XCALL2(1,VARREF(YPdefine_method),T247,T248);
  VARSET(YevalSg2cYto_c,T246);
  lit_349 = YPPsym((P)"gen-ref");
  lit_350 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T249 = YPsig(LITREF(lit_350),YPPlist(2,VARREF(YevalSastYLreferenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_123 = YPmet(FUNCODEREF(fun_gen_ref_123),LITREF(lit_349),T249,ENVNUL,PNUL,sloc(669));
  T251 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T252 = fun_gen_ref_123;
  T250 = XCALL2(1,VARREF(YPdefine_method),T251,T252);
  VARSET(YevalSg2cYgen_ref,T250);
  lit_351 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  lit_352 = YPsb((P)"FREEREF");
  T253 = YPsig(LITREF(lit_351),YPPlist(2,VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_124 = YPmet(FUNCODEREF(fun_gen_ref_124),LITREF(lit_349),T253,ENVNUL,PNUL,sloc(672));
  T255 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T256 = fun_gen_ref_124;
  T254 = XCALL2(1,VARREF(YPdefine_method),T255,T256);
  VARSET(YevalSg2cYgen_ref,T254);
  lit_353 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  lit_354 = YPsb((P)"T");
  lit_355 = YPsb((P)"T_1");
  T257 = YPsig(LITREF(lit_353),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_125 = YPmet(FUNCODEREF(fun_gen_ref_125),LITREF(lit_349),T257,ENVNUL,PNUL,sloc(677));
  T259 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T260 = fun_gen_ref_125;
  T258 = XCALL2(1,VARREF(YPdefine_method),T259,T260);
  VARSET(YevalSg2cYgen_ref,T258);
  lit_356 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  lit_357 = YPsb((P)"(P)");
  T263 = YPsig(LITREF(lit_356),YPPlist(2,VARREF(YevalSastYLraw_constantG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T262 = fun_gen_ref_126 = YPmet(FUNCODEREF(fun_gen_ref_126),LITREF(lit_349),T263,ENVNUL,PNUL,sloc(681));
  T266 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T267 = fun_gen_ref_126;
  T265 = XCALL2(1,VARREF(YPdefine_method),T266,T267);
  T264 = VARSET(YevalSg2cYgen_ref,T265);
  T261 = T264;
  return T261;
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
  P T224;
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
  lit_360 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_361 = YPsb((P)"RTVSET(");
  lit_362 = YPsb((P)"DYNDEFSET(");
  lit_363 = YPsb((P)"DYNSET(");
  lit_364 = YPsb((P)"VARSET(");
  lit_365 = YPsb((P)",");
  lit_366 = YPsb((P)")");
  T8 = YPsig(LITREF(lit_360),YPPlist(4,VARREF(YevalSastYLglobal_assignmentG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_129 = YPmet(FUNCODEREF(fun_to_c_129),LITREF(lit_345),T8,ENVNUL,PNUL,sloc(690));
  T10 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T11 = fun_to_c_129;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T11);
  VARSET(YevalSg2cYto_c,T9);
  lit_367 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_368 = YPsb((P)"RTV");
  lit_369 = YPsb((P)"VARREF_OR");
  T12 = YPsig(LITREF(lit_367),YPPlist(4,VARREF(YevalSastYLboundQG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_130 = YPmet(FUNCODEREF(fun_to_c_130),LITREF(lit_345),T12,ENVNUL,PNUL,sloc(704));
  T14 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T15 = fun_to_c_130;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T15);
  VARSET(YevalSg2cYto_c,T13);
  lit_370 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_371 = YPsb((P)"BOXVAL");
  T16 = YPsig(LITREF(lit_370),YPPlist(4,VARREF(YevalSast_linearizeYLbox_readG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_131 = YPmet(FUNCODEREF(fun_to_c_131),LITREF(lit_345),T16,ENVNUL,PNUL,sloc(715));
  T18 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T19 = fun_to_c_131;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T19);
  VARSET(YevalSg2cYto_c,T17);
  lit_372 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_373 = YPsb((P)"BOXVAL");
  lit_374 = YPsb((P)" = ");
  T20 = YPsig(LITREF(lit_372),YPPlist(4,VARREF(YevalSast_linearizeYLbox_writeG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_132 = YPmet(FUNCODEREF(fun_to_c_132),LITREF(lit_345),T20,ENVNUL,PNUL,sloc(722));
  T22 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T23 = fun_to_c_132;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T23);
  VARSET(YevalSg2cYto_c,T21);
  lit_375 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_376 = YPsb((P)" = BOXFAB");
  T24 = YPsig(LITREF(lit_375),YPPlist(4,VARREF(YevalSast_linearizeYLbox_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_133 = YPmet(FUNCODEREF(fun_to_c_133),LITREF(lit_345),T24,ENVNUL,PNUL,sloc(730));
  T26 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T27 = fun_to_c_133;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T27);
  VARSET(YevalSg2cYto_c,T25);
  lit_377 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_378 = YPsb((P)"if (");
  lit_379 = YPsb((P)" != ");
  lit_380 = YPsb((P)") {\n");
  lit_381 = YPsb((P)"} else {\n");
  lit_382 = YPsb((P)"}\n");
  T28 = YPsig(LITREF(lit_377),YPPlist(4,VARREF(YevalSastYLalternativeG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_134 = YPmet(FUNCODEREF(fun_to_c_134),LITREF(lit_345),T28,ENVNUL,PNUL,sloc(737));
  T30 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T31 = fun_to_c_134;
  T29 = XCALL2(1,VARREF(YPdefine_method),T30,T31);
  VARSET(YevalSg2cYto_c,T29);
  lit_383 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_384 = YPPlist(1,YPPsym((P)"x"));
  T33 = YPsig(LITREF(lit_384),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_135 = YPmet(FUNCODEREF(fun_135),YPfalse,T33,ENVNUL,PNUL,sloc(752));
  T32 = YPsig(LITREF(lit_383),YPPlist(4,VARREF(YevalSastYLsequentialG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_136 = YPmet(FUNCODEREF(fun_to_c_136),LITREF(lit_345),T32,ENVNUL,PNUL,sloc(751));
  T35 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T36 = fun_to_c_136;
  T34 = XCALL2(1,VARREF(YPdefine_method),T35,T36);
  VARSET(YevalSg2cYto_c,T34);
  DYNDEFSET(YevalSg2cYTloop_arg_counterT,YPint((P)-1));
  lit_385 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_386 = YPsb((P)"for (;;) {\n");
  lit_387 = YPsb((P)"P ");
  lit_388 = YPPlist(1,YPPsym((P)"x"));
  lit_389 = YPPlist(1,YPPsym((P)"x"));
  lit_390 = YPsb((P)"a");
  lit_391 = YPsb((P)"_");
  lit_392 = YPsb((P)"loop");
  lit_393 = YPsb((P)":\n");
  lit_394 = YPsb((P)"break");
  lit_395 = YPsb((P)"}\n");
  T39 = YPsig(LITREF(lit_388),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_137 = YPmet(FUNCODEREF(fun_137),YPfalse,T39,ENVNUL,PNUL,sloc(763));
  T38 = YPsig(LITREF(lit_389),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_138 = YPmet(FUNCODEREF(fun_138),YPfalse,T38,ENVNUL,PNUL,sloc(763));
  T37 = YPsig(LITREF(lit_385),YPPlist(4,VARREF(YevalSastYLloopG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_139 = YPmet(FUNCODEREF(fun_to_c_139),LITREF(lit_345),T37,ENVNUL,PNUL,sloc(756));
  T41 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T42 = fun_to_c_139;
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T42);
  VARSET(YevalSg2cYto_c,T40);
  lit_396 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_397 = YPsb((P)"a");
  lit_398 = YPsb((P)"_");
  lit_399 = YPsb((P)" = ");
  lit_400 = YPsb((P)" = a");
  lit_401 = YPsb((P)"_");
  lit_402 = YPsb((P)"goto loop");
  T43 = YPsig(LITREF(lit_396),YPPlist(4,VARREF(YevalSastYLloop_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_140 = YPmet(FUNCODEREF(fun_to_c_140),LITREF(lit_345),T43,ENVNUL,PNUL,sloc(774));
  T45 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T46 = fun_to_c_140;
  T44 = XCALL2(1,VARREF(YPdefine_method),T45,T46);
  VARSET(YevalSg2cYto_c,T44);
  VARSET(YevalSg2cYDnumber_call_templates,YPint((P)5));
  lit_403 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_404 = YPsb((P)"X");
  lit_405 = YPsb((P)"CALL");
  lit_406 = YPsb((P)"N");
  lit_407 = YPsb((P)"0,");
  lit_408 = YPsb((P)"1,");
  lit_409 = YPsb((P)",");
  T47 = YPsig(LITREF(lit_403),YPPlist(4,VARREF(YevalSastYLregular_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_141 = YPmet(FUNCODEREF(fun_to_c_141),LITREF(lit_345),T47,ENVNUL,PNUL,sloc(792));
  T49 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T50 = fun_to_c_141;
  T48 = XCALL2(1,VARREF(YPdefine_method),T49,T50);
  VARSET(YevalSg2cYto_c,T48);
  lit_410 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_411 = YPPlist(1,YPPsym((P)"x"));
  lit_412 = YPPlist(1,YPPsym((P)"x"));
  T53 = YPsig(LITREF(lit_411),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_142 = YPmet(FUNCODEREF(fun_142),YPfalse,T53,ENVNUL,PNUL,sloc(810));
  T52 = YPsig(LITREF(lit_412),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_143 = YPmet(FUNCODEREF(fun_143),YPfalse,T52,ENVNUL,PNUL,sloc(810));
  T51 = YPsig(LITREF(lit_410),YPPlist(4,VARREF(YevalSastYLargumentsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_144 = YPmet(FUNCODEREF(fun_to_c_144),LITREF(lit_345),T51,ENVNUL,PNUL,sloc(809));
  T55 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T56 = fun_to_c_144;
  T54 = XCALL2(1,VARREF(YPdefine_method),T55,T56);
  VARSET(YevalSg2cYto_c,T54);
  lit_413 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_414 = YPsb((P)"check_type");
  lit_415 = YPsb((P)" = ");
  T57 = YPsig(LITREF(lit_413),YPPlist(4,VARREF(YevalSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_145 = YPmet(FUNCODEREF(fun_to_c_145),LITREF(lit_345),T57,ENVNUL,PNUL,sloc(813));
  T59 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T60 = fun_to_c_145;
  T58 = XCALL2(1,VARREF(YPdefine_method),T59,T60);
  VARSET(YevalSg2cYto_c,T58);
  lit_416 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_417 = YPsb((P)" = ");
  T61 = YPsig(LITREF(lit_416),YPPlist(4,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_146 = YPmet(FUNCODEREF(fun_to_c_146),LITREF(lit_345),T61,ENVNUL,PNUL,sloc(831));
  T63 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T64 = fun_to_c_146;
  T62 = XCALL2(1,VARREF(YPdefine_method),T63,T64);
  VARSET(YevalSg2cYto_c,T62);
  lit_418 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_419 = YPsb((P)"with_exit");
  T65 = YPsig(LITREF(lit_418),YPPlist(4,VARREF(YevalSastYLbind_exitG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_147 = YPmet(FUNCODEREF(fun_to_c_147),LITREF(lit_345),T65,ENVNUL,PNUL,sloc(842));
  T67 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T68 = fun_to_c_147;
  T66 = XCALL2(1,VARREF(YPdefine_method),T67,T68);
  VARSET(YevalSg2cYto_c,T66);
  lit_420 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_421 = YPsb((P)"with_cleanup");
  T69 = YPsig(LITREF(lit_420),YPPlist(4,VARREF(YevalSastYLunwind_protectG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_148 = YPmet(FUNCODEREF(fun_to_c_148),LITREF(lit_345),T69,ENVNUL,PNUL,sloc(848));
  T71 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T72 = fun_to_c_148;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T72);
  VARSET(YevalSg2cYto_c,T70);
  lit_422 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_423 = YPsb((P)"XCALLN");
  lit_424 = YPsb((P)"1");
  lit_425 = YPsb((P)"%with-monitor");
  lit_426 = YPsb((P)"5");
  T73 = YPsig(LITREF(lit_422),YPPlist(4,VARREF(YevalSastYLmonitorG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_149 = YPmet(FUNCODEREF(fun_to_c_149),LITREF(lit_345),T73,ENVNUL,PNUL,sloc(857));
  T75 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T76 = fun_to_c_149;
  T74 = XCALL2(1,VARREF(YPdefine_method),T75,T76);
  VARSET(YevalSg2cYto_c,T74);
  lit_427 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_428 = YPsb((P)"(P)");
  lit_429 = YPPlist(1,YPPsym((P)"x"));
  lit_430 = YPPlist(1,YPPsym((P)"x"));
  T79 = YPsig(LITREF(lit_429),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_150 = YPmet(FUNCODEREF(fun_150),YPfalse,T79,ENVNUL,PNUL,sloc(882));
  T78 = YPsig(LITREF(lit_430),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_151 = YPmet(FUNCODEREF(fun_151),YPfalse,T78,ENVNUL,PNUL,sloc(882));
  T77 = YPsig(LITREF(lit_427),YPPlist(4,VARREF(YevalSastYLpredefined_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_152 = YPmet(FUNCODEREF(fun_to_c_152),LITREF(lit_345),T77,ENVNUL,PNUL,sloc(875));
  T81 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T82 = fun_to_c_152;
  T80 = XCALL2(1,VARREF(YPdefine_method),T81,T82);
  VARSET(YevalSg2cYto_c,T80);
  lit_431 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_432 = YPPlist(1,YPPsym((P)"x"));
  lit_433 = YPsb((P)"FUNFAB");
  lit_434 = YPsb((P)",");
  T84 = YPsig(LITREF(lit_432),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_153 = YPmet(FUNCODEREF(fun_153),YPfalse,T84,ENVNUL,PNUL,sloc(891));
  T83 = YPsig(LITREF(lit_431),YPPlist(4,VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_154 = YPmet(FUNCODEREF(fun_to_c_154),LITREF(lit_345),T83,ENVNUL,PNUL,sloc(885));
  T86 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T87 = fun_to_c_154;
  T85 = XCALL2(1,VARREF(YPdefine_method),T86,T87);
  VARSET(YevalSg2cYto_c,T85);
  lit_435 = YPPsym((P)"funshell-to-c");
  lit_436 = YPPlist(5,YPPsym((P)"b"),YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_437 = YPsb((P)"FUNSHELL");
  T88 = YPsig(LITREF(lit_436),YPPlist(5,VARREF(YevalSastYLbindingG),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funshell_to_c_155 = YPmet(FUNCODEREF(fun_funshell_to_c_155),LITREF(lit_435),T88,ENVNUL,PNUL,sloc(900));
  T90 = VARREF_OR(YevalSg2cYfunshell_to_c,YPfalse);
  T91 = fun_funshell_to_c_155;
  T89 = XCALL2(1,VARREF(YPdefine_method),T90,T91);
  VARSET(YevalSg2cYfunshell_to_c,T89);
  lit_438 = YPPsym((P)"funinit-to-c");
  lit_439 = YPPlist(5,YPPsym((P)"b"),YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_440 = YPPlist(1,YPPsym((P)"x"));
  lit_441 = YPsb((P)"FUNINIT");
  lit_442 = YPsb((P)", ");
  T93 = YPsig(LITREF(lit_440),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_156 = YPmet(FUNCODEREF(fun_156),YPfalse,T93,ENVNUL,PNUL,sloc(916));
  T92 = YPsig(LITREF(lit_439),YPPlist(5,VARREF(YevalSastYLbindingG),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funinit_to_c_157 = YPmet(FUNCODEREF(fun_funinit_to_c_157),LITREF(lit_438),T92,ENVNUL,PNUL,sloc(913));
  T95 = VARREF_OR(YevalSg2cYfuninit_to_c,YPfalse);
  T96 = fun_funinit_to_c_157;
  T94 = XCALL2(1,VARREF(YPdefine_method),T95,T96);
  VARSET(YevalSg2cYfuninit_to_c,T94);
  lit_443 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_444 = YPsb((P)"%macro");
  T97 = YPsig(LITREF(lit_443),YPPlist(4,VARREF(YevalSastYLast_macro_definitionG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_158 = YPmet(FUNCODEREF(fun_to_c_158),LITREF(lit_345),T97,ENVNUL,PNUL,sloc(925));
  T99 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T100 = fun_to_c_158;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T100);
  VARSET(YevalSg2cYto_c,T98);
  lit_445 = YPPsym((P)"out-list-builder");
  lit_446 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"out"),YPPsym((P)"elts"));
  lit_447 = YPsb((P)"nil");
  lit_448 = YPsb((P)"%%list");
  T101 = YPsig(LITREF(lit_446),YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_out_list_builder_159 = YPmet(FUNCODEREF(fun_out_list_builder_159),LITREF(lit_445),T101,ENVNUL,PNUL,sloc(934));
  T103 = VARREF_OR(YevalSg2cYout_list_builder,YPfalse);
  T104 = fun_out_list_builder_159;
  T102 = XCALL2(1,VARREF(YPdefine_method),T103,T104);
  VARSET(YevalSg2cYout_list_builder,T102);
  lit_449 = YPPsym((P)"gen-fab-list");
  lit_450 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"refs"));
  lit_451 = YPPlist(1,YPPsym((P)"x"));
  T106 = YPsig(LITREF(lit_451),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_160 = YPmet(FUNCODEREF(fun_160),YPfalse,T106,ENVNUL,PNUL,sloc(947));
  T105 = YPsig(LITREF(lit_450),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfab_listG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_fab_list_161 = YPmet(FUNCODEREF(fun_gen_fab_list_161),LITREF(lit_449),T105,ENVNUL,PNUL,sloc(946));
  T108 = VARREF_OR(YevalSg2cYgen_fab_list,YPfalse);
  T109 = fun_gen_fab_list_161;
  T107 = XCALL2(1,VARREF(YPdefine_method),T108,T109);
  VARSET(YevalSg2cYgen_fab_list,T107);
  lit_452 = YPPsym((P)"generate-function-specs");
  lit_453 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"sig"));
  T110 = YPsig(LITREF(lit_453),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_specs_162 = YPmet(FUNCODEREF(fun_generate_function_specs_162),LITREF(lit_452),T110,ENVNUL,PNUL,sloc(949));
  T112 = VARREF_OR(YevalSg2cYgenerate_function_specs,YPfalse);
  T113 = fun_generate_function_specs_162;
  T111 = XCALL2(1,VARREF(YPdefine_method),T112,T113);
  VARSET(YevalSg2cYgenerate_function_specs,T111);
  lit_454 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_455 = YPPlist(1,YPPsym((P)"x"));
  lit_456 = YPsb((P)"%sig");
  lit_457 = YPsb((P)"nil");
  T115 = YPsig(LITREF(lit_455),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_163 = YPmet(FUNCODEREF(fun_163),YPfalse,T115,ENVNUL,PNUL,sloc(953));
  T114 = YPsig(LITREF(lit_454),YPPlist(4,VARREF(YevalSastYLast_signatureG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_164 = YPmet(FUNCODEREF(fun_to_c_164),LITREF(lit_345),T114,ENVNUL,PNUL,sloc(952));
  T117 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T118 = fun_to_c_164;
  T116 = XCALL2(1,VARREF(YPdefine_method),T117,T118);
  VARSET(YevalSg2cYto_c,T116);
  lit_458 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_459 = YPsb((P)"%gen");
  lit_460 = YPsb((P)"(P)YPgen_code((P)YPdispatch)");
  lit_461 = YPsb((P)"nil");
  lit_462 = YPsb((P)"%false");
  lit_463 = YPsb((P)"%false");
  lit_464 = YPsb((P)"%false");
  T119 = YPsig(LITREF(lit_458),YPPlist(4,VARREF(YevalSastYLast_genericG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_165 = YPmet(FUNCODEREF(fun_to_c_165),LITREF(lit_345),T119,ENVNUL,PNUL,sloc(965));
  T121 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T122 = fun_to_c_165;
  T120 = XCALL2(1,VARREF(YPdefine_method),T121,T122);
  VARSET(YevalSg2cYto_c,T120);
  lit_465 = YPPsym((P)"generate-function-forwards");
  lit_466 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"definitions"));
  lit_467 = YPsb((P)"\n/* FUNCTIONS: */\n\n");
  T123 = YPsig(LITREF(lit_466),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forwards_166 = YPmet(FUNCODEREF(fun_generate_function_forwards_166),LITREF(lit_465),T123,ENVNUL,PNUL,sloc(981));
  T125 = VARREF_OR(YevalSg2cYgenerate_function_forwards,YPfalse);
  T126 = fun_generate_function_forwards_166;
  T124 = XCALL2(1,VARREF(YPdefine_method),T125,T126);
  VARSET(YevalSg2cYgenerate_function_forwards,T124);
  lit_468 = YPPsym((P)"generate-function-forward");
  lit_469 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"defn"));
  lit_470 = YPsb((P)"static");
  lit_471 = YPsb((P)"extern");
  lit_472 = YPsb((P)" P ");
  lit_473 = YPsb((P)" (");
  lit_474 = YPPlist(1,YPPsym((P)"x"));
  lit_475 = YPPlist(1,YPPsym((P)"x"));
  lit_476 = YPsb((P)"P");
  lit_477 = YPsb((P)");\n");
  T129 = YPsig(LITREF(lit_474),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_167 = YPmet(FUNCODEREF(fun_167),YPfalse,T129,ENVNUL,PNUL,sloc(990));
  T128 = YPsig(LITREF(lit_475),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_168 = YPmet(FUNCODEREF(fun_168),YPfalse,T128,ENVNUL,PNUL,sloc(990));
  T127 = YPsig(LITREF(lit_469),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_169 = YPmet(FUNCODEREF(fun_generate_function_forward_169),LITREF(lit_468),T127,ENVNUL,PNUL,sloc(986));
  T131 = VARREF_OR(YevalSg2cYgenerate_function_forward,YPfalse);
  T132 = fun_generate_function_forward_169;
  T130 = XCALL2(1,VARREF(YPdefine_method),T131,T132);
  VARSET(YevalSg2cYgenerate_function_forward,T130);
  lit_478 = YPPsym((P)"generate-function-binding");
  lit_479 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"defn"));
  lit_480 = YPPlist(2,YPPsym((P)"global"),YPPsym((P)"runtime"));
  lit_481 = YPsb((P)"fun_");
  lit_482 = YPsb((P)"fun_");
  lit_483 = YPsb((P)"_");
  T133 = YPsig(LITREF(lit_479),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_binding_170 = YPmet(FUNCODEREF(fun_generate_function_binding_170),LITREF(lit_478),T133,ENVNUL,PNUL,sloc(994));
  T135 = VARREF_OR(YevalSg2cYgenerate_function_binding,YPfalse);
  T136 = fun_generate_function_binding_170;
  T134 = XCALL2(1,VARREF(YPdefine_method),T135,T136);
  VARSET(YevalSg2cYgenerate_function_binding,T134);
  lit_484 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"defn"));
  lit_485 = YPsb((P)"FUNFOR(");
  lit_486 = YPsb((P)"LOCFOR(");
  lit_487 = YPsb((P)");\n");
  T137 = YPsig(LITREF(lit_484),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_171 = YPmet(FUNCODEREF(fun_generate_function_forward_171),LITREF(lit_468),T137,ENVNUL,PNUL,sloc(1007));
  T139 = VARREF_OR(YevalSg2cYgenerate_function_forward,YPfalse);
  T140 = fun_generate_function_forward_171;
  T138 = XCALL2(1,VARREF(YPdefine_method),T139,T140);
  VARSET(YevalSg2cYgenerate_function_forward,T138);
  lit_488 = YPPsym((P)"generate-function-bodies");
  lit_489 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"definitions"));
  lit_490 = YPsb((P)"\n/* FUNCTION CODES: */\n");
  lit_491 = YPPlist(1,YPPsym((P)"def"));
  T142 = YPsig(LITREF(lit_491),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_172 = YPmet(FUNCODEREF(fun_172),YPfalse,T142,ENVNUL,PNUL,sloc(1015));
  T141 = YPsig(LITREF(lit_489),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_bodies_173 = YPmet(FUNCODEREF(fun_generate_function_bodies_173),LITREF(lit_488),T141,ENVNUL,PNUL,sloc(1013));
  T144 = VARREF_OR(YevalSg2cYgenerate_function_bodies,YPfalse);
  T145 = fun_generate_function_bodies_173;
  T143 = XCALL2(1,VARREF(YPdefine_method),T144,T145);
  VARSET(YevalSg2cYgenerate_function_bodies,T143);
  lit_492 = YPPsym((P)"generate-functions");
  lit_493 = YPPlist(4,YPPsym((P)"definitions"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_494 = YPPlist(1,YPPsym((P)"def"));
  T147 = YPsig(LITREF(lit_494),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_174 = YPmet(FUNCODEREF(fun_174),YPfalse,T147,ENVNUL,PNUL,sloc(1020));
  T146 = YPsig(LITREF(lit_493),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_functions_175 = YPmet(FUNCODEREF(fun_generate_functions_175),LITREF(lit_492),T146,ENVNUL,PNUL,sloc(1019));
  T149 = VARREF_OR(YevalSg2cYgenerate_functions,YPfalse);
  T150 = fun_generate_functions_175;
  T148 = XCALL2(1,VARREF(YPdefine_method),T149,T150);
  VARSET(YevalSg2cYgenerate_functions,T148);
  lit_495 = YPPsym((P)"generate-closure-structure");
  lit_496 = YPPlist(4,YPPsym((P)"definition"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_497 = YPsb((P)" = ");
  lit_498 = YPsb((P)"%met");
  lit_499 = YPsb((P)"ENVNUL");
  lit_500 = YPsb((P)"PNUL");
  lit_501 = YPsb((P)"sloc(");
  lit_502 = YPsb((P)")");
  T151 = YPsig(LITREF(lit_496),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_closure_structure_176 = YPmet(FUNCODEREF(fun_generate_closure_structure_176),LITREF(lit_495),T151,ENVNUL,PNUL,sloc(1025));
  T153 = VARREF_OR(YevalSg2cYgenerate_closure_structure,YPfalse);
  T154 = fun_generate_closure_structure_176;
  T152 = XCALL2(1,VARREF(YPdefine_method),T153,T154);
  VARSET(YevalSg2cYgenerate_closure_structure,T152);
  lit_503 = YPPsym((P)"generate-function-body-reference");
  lit_504 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"definition"));
  lit_505 = YPsb((P)"FUNCODEREF(");
  lit_506 = YPsb((P)")");
  T155 = YPsig(LITREF(lit_504),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_body_reference_177 = YPmet(FUNCODEREF(fun_generate_function_body_reference_177),LITREF(lit_503),T155,ENVNUL,PNUL,sloc(1041));
  T157 = VARREF_OR(YevalSg2cYgenerate_function_body_reference,YPfalse);
  T158 = fun_generate_function_body_reference_177;
  T156 = XCALL2(1,VARREF(YPdefine_method),T157,T158);
  VARSET(YevalSg2cYgenerate_function_body_reference,T156);
  lit_507 = YPPsym((P)"generate-return");
  lit_508 = YPPlist(3,YPPsym((P)"defn"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_509 = YPsb((P)"return ");
  T159 = YPsig(LITREF(lit_508),YPPlist(3,VARREF(YevalSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_return_178 = YPmet(FUNCODEREF(fun_generate_return_178),LITREF(lit_507),T159,ENVNUL,PNUL,sloc(1050));
  T161 = VARREF_OR(YevalSg2cYgenerate_return,YPfalse);
  T162 = fun_generate_return_178;
  T160 = XCALL2(1,VARREF(YPdefine_method),T161,T162);
  VARSET(YevalSg2cYgenerate_return,T160);
  lit_510 = YPPlist(3,YPPsym((P)"defn"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_511 = YPsb((P)"RET");
  T163 = YPsig(LITREF(lit_510),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_return_179 = YPmet(FUNCODEREF(fun_generate_return_179),LITREF(lit_507),T163,ENVNUL,PNUL,sloc(1054));
  T165 = VARREF_OR(YevalSg2cYgenerate_return,YPfalse);
  T166 = fun_generate_return_179;
  T164 = XCALL2(1,VARREF(YPdefine_method),T165,T166);
  VARSET(YevalSg2cYgenerate_return,T164);
  lit_512 = YPPsym((P)"primitive-inlinable?");
  lit_513 = YPPlist(1,YPPsym((P)"e"));
  lit_514 = YPPsym((P)"inline");
  lit_515 = YPPsym((P)"inline-c");
  T167 = YPsig(LITREF(lit_513),YPPlist(1,VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_primitive_inlinableQ_180 = YPmet(FUNCODEREF(fun_primitive_inlinableQ_180),LITREF(lit_512),T167,ENVNUL,PNUL,sloc(1061));
  T169 = VARREF_OR(YevalSg2cYprimitive_inlinableQ,YPfalse);
  T170 = fun_primitive_inlinableQ_180;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T170);
  VARSET(YevalSg2cYprimitive_inlinableQ,T168);
  lit_516 = YPPsym((P)"generate-function-code");
  lit_517 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"e"));
  lit_518 = YPsb((P)"\n");
  lit_519 = YPsb((P)"static ");
  lit_520 = YPsb((P)"INLINE ");
  lit_521 = YPsb((P)"P ");
  lit_522 = YPPlist(1,YPPsym((P)"x"));
  lit_523 = YPPlist(1,YPPsym((P)"x"));
  lit_524 = YPsb((P)"P ");
  lit_525 = YPsb((P)" {\n");
  lit_526 = YPsb((P)"DEFCREGS();\n");
  lit_527 = YPsb((P)"}\n");
  T173 = YPsig(LITREF(lit_522),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_181 = YPmet(FUNCODEREF(fun_181),YPfalse,T173,ENVNUL,PNUL,sloc(1071));
  T172 = YPsig(LITREF(lit_523),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_182 = YPmet(FUNCODEREF(fun_182),YPfalse,T172,ENVNUL,PNUL,sloc(1071));
  T171 = YPsig(LITREF(lit_517),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_183 = YPmet(FUNCODEREF(fun_generate_function_code_183),LITREF(lit_516),T171,ENVNUL,PNUL,sloc(1065));
  T175 = VARREF_OR(YevalSg2cYgenerate_function_code,YPfalse);
  T176 = fun_generate_function_code_183;
  T174 = XCALL2(1,VARREF(YPdefine_method),T175,T176);
  VARSET(YevalSg2cYgenerate_function_code,T174);
  lit_528 = YPPsym((P)"dispatcher?");
  lit_529 = YPPlist(1,YPPsym((P)"definition"));
  lit_530 = YPsb((P)"%dispatch");
  lit_531 = YPsb((P)"-dispatch");
  lit_532 = YPsb((P)"-dispatch");
  T177 = YPsig(LITREF(lit_529),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_dispatcherQ_184 = YPmet(FUNCODEREF(fun_dispatcherQ_184),LITREF(lit_528),T177,ENVNUL,PNUL,sloc(1081));
  T179 = VARREF_OR(YevalSg2cYdispatcherQ,YPfalse);
  T180 = fun_dispatcherQ_184;
  T178 = XCALL2(1,VARREF(YPdefine_method),T179,T180);
  VARSET(YevalSg2cYdispatcherQ,T178);
  lit_533 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"definition"));
  lit_534 = YPsb((P)"\nFUNCODEDEF(");
  lit_535 = YPsb((P)") {\n");
  lit_536 = YPsb((P)"P ");
  lit_537 = YPPlist(1,YPPsym((P)"x"));
  lit_538 = YPPlist(1,YPPsym((P)"x"));
  lit_539 = YPsb((P)"LINK_STACK();\n");
  lit_540 = YPPlist(1,YPPsym((P)"b"));
  lit_541 = YPsb((P)"NARGS(");
  lit_542 = YPsb((P)"ARG(");
  lit_543 = YPsb((P)", ");
  lit_544 = YPsb((P)")");
  lit_545 = YPsb((P)"UNLINK_STACK();\n");
  lit_546 = YPsb((P)"}\n");
  T184 = YPsig(LITREF(lit_537),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_185 = YPmet(FUNCODEREF(fun_185),YPfalse,T184,ENVNUL,PNUL,sloc(1098));
  T183 = YPsig(LITREF(lit_538),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_186 = YPmet(FUNCODEREF(fun_186),YPfalse,T183,ENVNUL,PNUL,sloc(1098));
  T182 = YPsig(LITREF(lit_540),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_187 = YPmet(FUNCODEREF(fun_187),YPfalse,T182,ENVNUL,PNUL,sloc(1104));
  T181 = YPsig(LITREF(lit_533),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_188 = YPmet(FUNCODEREF(fun_generate_function_code_188),LITREF(lit_516),T181,ENVNUL,PNUL,sloc(1089));
  T186 = VARREF_OR(YevalSg2cYgenerate_function_code,YPfalse);
  T187 = fun_generate_function_code_188;
  T185 = XCALL2(1,VARREF(YPdefine_method),T186,T187);
  VARSET(YevalSg2cYgenerate_function_code,T185);
  lit_547 = YPPsym((P)"generate-local-temporaries");
  lit_548 = YPPlist(2,YPPsym((P)"temps"),YPPsym((P)"out"));
  lit_549 = YPsb((P)"P ");
  T188 = YPsig(LITREF(lit_548),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_local_temporaries_189 = YPmet(FUNCODEREF(fun_generate_local_temporaries_189),LITREF(lit_547),T188,ENVNUL,PNUL,sloc(1124));
  T190 = VARREF_OR(YevalSg2cYgenerate_local_temporaries,YPfalse);
  T191 = fun_generate_local_temporaries_189;
  T189 = XCALL2(1,VARREF(YPdefine_method),T190,T191);
  VARSET(YevalSg2cYgenerate_local_temporaries,T189);
  VARSET(YevalSg2cYTtrace_registersQT,YPfalse);
  VARSET(YevalSg2cYTregisters_per_lineT,YPint((P)16));
  lit_550 = YPPsym((P)"generate-registers");
  lit_551 = YPPlist(2,YPPsym((P)"regs"),YPPsym((P)"out"));
  lit_552 = YPsb((P)"P ");
  lit_553 = YPsb((P)";\n");
  T192 = YPsig(LITREF(lit_551),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_registers_190 = YPmet(FUNCODEREF(fun_generate_registers_190),LITREF(lit_550),T192,ENVNUL,PNUL,sloc(1133));
  T194 = VARREF_OR(YevalSg2cYgenerate_registers,YPfalse);
  T195 = fun_generate_registers_190;
  T193 = XCALL2(1,VARREF(YPdefine_method),T194,T195);
  VARSET(YevalSg2cYgenerate_registers,T193);
  lit_554 = YPPsym((P)"module-info-name");
  lit_555 = YPPlist(1,YPPsym((P)"name"));
  lit_556 = YPsb((P)"module_info_");
  T196 = YPsig(LITREF(lit_555),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_info_name_191 = YPmet(FUNCODEREF(fun_module_info_name_191),LITREF(lit_554),T196,ENVNUL,PNUL,sloc(1145));
  T198 = VARREF_OR(YevalSg2cYmodule_info_name,YPfalse);
  T199 = fun_module_info_name_191;
  T197 = XCALL2(1,VARREF(YPdefine_method),T198,T199);
  VARSET(YevalSg2cYmodule_info_name,T197);
  lit_557 = YPPsym((P)"declare-imported-module-infos");
  lit_558 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"mod"));
  lit_559 = YPPsym((P)"maybe-declare");
  lit_560 = YPPlist(1,YPPsym((P)"modname"));
  lit_561 = YPsb((P)"extern MODULE_INFO ");
  lit_562 = YPsb((P)";\n");
  lit_563 = YPPlist(1,YPPsym((P)"binding"));
  T202 = YPsig(LITREF(lit_560),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_maybe_declare_192 = YPmet(FUNCODEREF(fun_maybe_declare_192),LITREF(lit_559),T202,ENVNUL,PNUL,sloc(1154));
  T201 = YPsig(LITREF(lit_563),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_193 = YPmet(FUNCODEREF(fun_193),YPfalse,T201,ENVNUL,PNUL,sloc(1161));
  T200 = YPsig(LITREF(lit_558),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYdeclare_imported_module_infos = YPmet(FUNCODEREF(YevalSg2cYdeclare_imported_module_infos),LITREF(lit_557),T200,ENVNUL,PNUL,sloc(1151));
  T203 = YevalSg2cYdeclare_imported_module_infos;
  VARSET(YevalSg2cYdeclare_imported_module_infos,T203);
  lit_564 = YPPsym((P)"generate-module-info");
  lit_565 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"mod"));
  lit_566 = YPsb((P)"\n/* MODULE ENVIRONMENT INFORMATION */\n\n");
  lit_567 = YPsb((P)"\nstatic USE_INFO use_infos[] = {\n");
  lit_568 = YPsb((P)"  {&");
  lit_569 = YPsb((P)"},\n");
  lit_570 = YPsb((P)"  {NULL}\n};\n");
  lit_571 = YPsb((P)"\nstatic IMPORT_INFO import_infos[] = {\n");
  lit_572 = YPPlist(2,YPPsym((P)"local-name"),YPPsym((P)"binding"));
  lit_573 = YPsb((P)"  {");
  lit_574 = YPsb((P)", &");
  lit_575 = YPsb((P)", ");
  lit_576 = YPsb((P)"NULL");
  lit_577 = YPsb((P)"},\n");
  lit_578 = YPsb((P)"  {NULL,NULL,NULL}\n};\n");
  lit_579 = YPsb((P)"\nstatic BINDING_INFO binding_infos[] = {\n");
  lit_580 = YPPlist(1,YPPsym((P)"binding"));
  lit_581 = YPsb((P)"  {");
  lit_582 = YPsb((P)", ");
  lit_583 = YPsb((P)"CVAR, &");
  lit_584 = YPsb((P)"},\n");
  lit_585 = YPsb((P)"DVAR, &");
  lit_586 = YPsb((P)"},\n");
  lit_587 = YPsb((P)"PVAR, NULL},\n");
  lit_588 = YPsb((P)"  {NULL, NVAR, NULL}\n};\n");
  lit_589 = YPsb((P)"\nstatic EXPORT_INFO export_infos[] = {\n");
  lit_590 = YPsb((P)"  {");
  lit_591 = YPsb((P)", ");
  lit_592 = YPsb((P)"NULL");
  lit_593 = YPsb((P)"},\n");
  lit_594 = YPsb((P)"  {NULL, NULL}\n};\n");
  lit_595 = YPsb((P)"\nextern MODULE_INFO ");
  lit_596 = YPsb((P)";\n");
  lit_597 = YPsb((P)"MODULE_INFO ");
  lit_598 = YPsb((P)" = {\n");
  lit_599 = YPsb((P)"  ");
  lit_600 = YPsb((P)",\n");
  lit_601 = YPsb((P)"  NULL,\n");
  lit_602 = YPsb((P)"  use_infos,\n");
  lit_603 = YPsb((P)"  import_infos,\n");
  lit_604 = YPsb((P)"  binding_infos,\n");
  lit_605 = YPsb((P)"  export_infos,\n");
  lit_606 = YPsb((P)"};\n");
  T206 = YPsig(LITREF(lit_572),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_195 = YPmet(FUNCODEREF(fun_195),YPfalse,T206,ENVNUL,PNUL,sloc(1188));
  T205 = YPsig(LITREF(lit_580),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_196 = YPmet(FUNCODEREF(fun_196),YPfalse,T205,ENVNUL,PNUL,sloc(1202));
  T204 = YPsig(LITREF(lit_565),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYgenerate_module_info = YPmet(FUNCODEREF(YevalSg2cYgenerate_module_info),LITREF(lit_564),T204,ENVNUL,PNUL,sloc(1170));
  T207 = YevalSg2cYgenerate_module_info;
  VARSET(YevalSg2cYgenerate_module_info,T207);
  lit_607 = YPPsym((P)"module-init-name");
  lit_608 = YPPlist(1,YPPsym((P)"name"));
  lit_609 = YPsb((P)"load_module_");
  T208 = YPsig(LITREF(lit_608),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_name_198 = YPmet(FUNCODEREF(fun_module_init_name_198),LITREF(lit_607),T208,ENVNUL,PNUL,sloc(1233));
  T210 = VARREF_OR(YevalSg2cYmodule_init_name,YPfalse);
  T211 = fun_module_init_name_198;
  T209 = XCALL2(1,VARREF(YPdefine_method),T210,T211);
  VARSET(YevalSg2cYmodule_init_name,T209);
  lit_610 = YPPsym((P)"module-init-decl");
  lit_611 = YPPlist(1,YPPsym((P)"name"));
  lit_612 = YPsb((P)"void ");
  lit_613 = YPsb((P)" (void)");
  T212 = YPsig(LITREF(lit_611),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_decl_199 = YPmet(FUNCODEREF(fun_module_init_decl_199),LITREF(lit_610),T212,ENVNUL,PNUL,sloc(1236));
  T214 = VARREF_OR(YevalSg2cYmodule_init_decl,YPfalse);
  T215 = fun_module_init_decl_199;
  T213 = XCALL2(1,VARREF(YPdefine_method),T214,T215);
  VARSET(YevalSg2cYmodule_init_decl,T213);
  lit_614 = YPPsym((P)"generate-module-init");
  lit_615 = YPPlist(3,YPPsym((P)"out"),YPPsym((P)"mod"),YPPsym((P)"form"));
  lit_616 = YPsb((P)"dl");
  lit_617 = YPsb((P)"\n/* MODULES USED: */\n\n");
  lit_618 = YPsb((P)"extern ");
  lit_619 = YPsb((P)";\n");
  lit_620 = YPsb((P)"\n/* EXPRESSION: */\n\n");
  lit_621 = YPsb((P)"extern ");
  lit_622 = YPsb((P)";\n\n");
  lit_623 = YPsb((P)" {\n");
  lit_624 = YPsb((P)"  static int need_init = 1;\n");
  lit_625 = YPsb((P)"  if (!need_init) return;\n\n");
  lit_626 = YPsb((P)"  need_init = 0;\n");
  lit_627 = YPsb((P)"  ");
  lit_628 = YPsb((P)"();\n");
  lit_629 = YPsb((P)"\n");
  lit_630 = YPsb((P)"\n");
  lit_631 = YPsb((P)"}\n");
  T216 = YPsig(LITREF(lit_615),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_module_init_200 = YPmet(FUNCODEREF(fun_generate_module_init_200),LITREF(lit_614),T216,ENVNUL,PNUL,sloc(1239));
  T218 = VARREF_OR(YevalSg2cYgenerate_module_init,YPfalse);
  T219 = fun_generate_module_init_200;
  T217 = XCALL2(1,VARREF(YPdefine_method),T218,T219);
  VARSET(YevalSg2cYgenerate_module_init,T217);
  lit_632 = YPPsym((P)"generate-main");
  lit_633 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"mod"));
  lit_634 = YPsb((P)"\n/* APPLICATION: */\n\n");
  lit_635 = YPsb((P)"extern MODULE_INFO ");
  lit_636 = YPsb((P)";\n");
  lit_637 = YPsb((P)"extern ");
  lit_638 = YPsb((P)";\n\n");
  lit_639 = YPsb((P)"MODULE_INFO *goo_toplevel_module_info = &");
  lit_640 = YPsb((P)";\n\n");
  lit_641 = YPsb((P)"int main(int argc, char* argv[]) {\n");
  lit_642 = YPsb((P)"  ");
  lit_643 = YPsb((P)"%init-world");
  lit_644 = YPsb((P)"(argc, argv);\n");
  lit_645 = YPsb((P)"  ");
  lit_646 = YPsb((P)"();\n");
  lit_647 = YPsb((P)"  return 0;\n");
  lit_648 = YPsb((P)"}\n");
  T220 = YPsig(LITREF(lit_633),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_main_201 = YPmet(FUNCODEREF(fun_generate_main_201),LITREF(lit_632),T220,ENVNUL,PNUL,sloc(1265));
  T222 = VARREF_OR(YevalSg2cYgenerate_main,YPfalse);
  T223 = fun_generate_main_201;
  T221 = XCALL2(1,VARREF(YPdefine_method),T222,T223);
  VARSET(YevalSg2cYgenerate_main,T221);
  T224 = YPfalse;
  return T224;
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
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_evalSdependency;
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
  {"components-basename", &module_info_gooSsystem, NULL},
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
  {"ascii-limit", &module_info_gooScolsSstr, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"<dynamic-assignment>", &module_info_evalSast, NULL},
  {"<unwind-protect>", &module_info_evalSast, NULL},
  {"binding-locative-setter", &module_info_evalSast, NULL},
  {"<box-creation>", &module_info_evalSast_linearize, NULL},
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
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"gather-temporaries!", &module_info_evalSast_linearize, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
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
  {"isqrt", &module_info_gooSmath, NULL},
  {"<pathname-error>", &module_info_gooSsystem, NULL},
  {"set-module-environments", &module_info_evalSast, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"pathname-to-components", &module_info_gooSsystem, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"module-target-environment", &module_info_evalSast, NULL},
  {"bt", &module_info_evalStop, NULL},
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
  {"add-goo-root-path", &module_info_gooSsystem, NULL},
  {"<assignment>", &module_info_evalSast, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"file-exists?", &module_info_gooSsystem, NULL},
  {"c-filename", &module_info_gooSsystem, NULL},
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
  {"os-val-setter", &module_info_gooSsystem, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"process-closed-application", &module_info_evalSast, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"binding-dynamic-extent?", &module_info_evalSast, NULL},
  {"<runtime-reference>", &module_info_evalSast, NULL},
  {"analyze-calls", &module_info_evalSast_linearize, NULL},
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
  {"eval", &module_info_evalSsyntax, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"probe-directory", &module_info_gooSsystem, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"<free-reference>", &module_info_evalSast_linearize, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"fix-let-arguments-setter", &module_info_evalSast, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"frame-var", &module_info_evalStop, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"environment-module", &module_info_evalSast, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"auto-eval", &module_info_evalStop, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"monitor-test", &module_info_evalSast, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"add-goo-personal-root-path", &module_info_gooSsystem, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"components-last", &module_info_gooSsystem, NULL},
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
  {"write-type", &module_info_gooSioSwrite, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"unconstrained-type?", &module_info_evalSast_linearize, NULL},
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
  {"program-form", &module_info_evalSast_linearize, NULL},
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
  {"ast-contains-fun?", &module_info_evalSast_linearize, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"so-load", &module_info_gooSsystem, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"probe-module", &module_info_evalSast, NULL},
  {"function-frame-len-setter", &module_info_evalSast, NULL},
  {"<global-box>", &module_info_evalSast, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"ascii-whitespaces", &module_info_gooScolsSstr, NULL},
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
  {"flatten-seqs", &module_info_evalSast_linearize, NULL},
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
  {"load-file", &module_info_evalStop, NULL},
  {"do-named-static-global-bindings", &module_info_evalSast, NULL},
  {"init-ast", &module_info_evalSast, NULL},
  {"box-reference", &module_info_evalSast_linearize, NULL},
  {"<dynamic-definition>", &module_info_evalSast, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"fix-let-bindings-setter", &module_info_evalSast, NULL},
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
  {"hierarchical-components", &module_info_gooSsystem, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"module-uses-c-libraries", &module_info_evalSast, NULL},
  {"*module-search-path*", &module_info_gooSsystem, NULL},
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
  {"file-mtime", &module_info_gooSsystem, NULL},
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
  {"<raw-constant>", &module_info_evalSast, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"os-val", &module_info_gooSsystem, NULL},
  {"program-definitions", &module_info_evalSast_linearize, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"<box-write>", &module_info_evalSast_linearize, NULL},
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
  {"insert-box!", &module_info_evalSast_linearize, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"<sequential>", &module_info_evalSast, NULL},
  {"<static-module-binding-reference>", &module_info_evalSast, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"<top-level-form>", &module_info_evalSast_linearize, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"*goo-build-root*", &module_info_gooSsystem, NULL},
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
  {"closure-creation-index", &module_info_evalSast_linearize, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"fix-let-types", &module_info_evalSast, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"$$$", &module_info_evalStop, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"parse-in", &module_info_evalStop, NULL},
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
  {"<box-read>", &module_info_evalSast_linearize, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"loc-val-setter", &module_info_gooSruntime, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"function-free-setter", &module_info_evalSast, NULL},
  {"ast-evaluate", &module_info_evalSast, NULL},
  {"*path-separator*", &module_info_gooSsystem, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"<dynamic-reference>", &module_info_evalSast, NULL},
  {"closure-creation-free", &module_info_evalSast_linearize, NULL},
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
  {"os-name", &module_info_gooSsystem, NULL},
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
  {"form-definitions", &module_info_evalSast_linearize, NULL},
  {"label-components", &module_info_gooSsystem, NULL},
  {"*goo-root*", &module_info_gooSsystem, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"load-module", &module_info_evalSast, NULL},
  {"function-loop", &module_info_evalSast, NULL},
  {"do-stack-frames", &module_info_evalStop, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"recurring-write", &module_info_gooSioSwrite, NULL},
  {"install-initial-bindings", &module_info_evalSast, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"<ast-method>", &module_info_evalSast, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"program-register-setter", &module_info_evalSast, NULL},
  {"<regular-application>", &module_info_evalSast, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"exe-filename", &module_info_gooSsystem, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"read-file", &module_info_evalStop, NULL},
  {"function-data-refs", &module_info_evalSast, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"<directory-error>", &module_info_gooSsystem, NULL},
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
  {"$$", &module_info_evalStop, NULL},
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
  {"<closure-creation>", &module_info_evalSast_linearize, NULL},
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
  {"program-quotations", &module_info_evalSast_linearize, NULL},
  {"box-form", &module_info_evalSast_linearize, NULL},
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
  {"*register-passive?*", &module_info_evalSast_linearize, NULL},
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
  {"signature-nary?", &module_info_evalSast, NULL},
  {"program-register", &module_info_evalSast, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"<ast-signature>", &module_info_evalSast, NULL},
  {"file-copy", &module_info_gooSsystem, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"add-src-path", &module_info_gooSsystem, NULL},
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
  {"obj-filename", &module_info_gooSsystem, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"assignment-binding", &module_info_evalSast, NULL},
  {"module-name-to-relpath", &module_info_evalSast, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"parent-directory", &module_info_gooSsystem, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"form-quotations", &module_info_evalSast_linearize, NULL},
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
  {"%load", &module_info_gooSsystem, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"module-exports", &module_info_evalSast, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"time", &module_info_gooSsystem, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"register-allocate!", &module_info_evalSast_linearize, NULL},
  {"$", &module_info_evalStop, NULL},
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
  {"find-goo-file-at", &module_info_gooSsystem, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"binding-type-setter", &module_info_evalSast, NULL},
  {"*exe-extension*", &module_info_gooSsystem, NULL},
  {"environment-bindings", &module_info_evalSast, NULL},
  {"function-signature", &module_info_evalSast, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"<alternative>", &module_info_evalSast, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"locals-bindings", &module_info_evalSast, NULL},
  {"reference-offset", &module_info_evalSast_linearize, NULL},
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
  {"closurize-main!", &module_info_evalSast_linearize, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"<macro-reference>", &module_info_evalSast, NULL},
  {"req-sig-specs", &module_info_evalSast, NULL},
  {"loop-bindings", &module_info_evalSast, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"frame", &module_info_evalStop, NULL},
  {"*obj-extension*", &module_info_gooSsystem, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"save-image", &module_info_evalStop, NULL},
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
  {"create-directory", &module_info_gooSsystem, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"process-id", &module_info_gooSsystem, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"function-loop-setter", &module_info_evalSast, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"add-build-path", &module_info_gooSsystem, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"msg*", &module_info_gooSioSwrite, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"application-known?-setter", &module_info_evalSast, NULL},
  {"binding-locative", &module_info_evalSast, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"components-to-pathname", &module_info_gooSsystem, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"top", &module_info_evalStop, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"unwind-protect-protected-thunk", &module_info_evalSast, NULL},
  {"load-in", &module_info_evalSast, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"function-temporaries-setter", &module_info_evalSast, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"backtrace", &module_info_evalStop, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
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
  {"components-parent-directory", &module_info_gooSsystem, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"alternative-consequent", &module_info_evalSast, NULL},
  {"monitor-type", &module_info_evalSast, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSmath, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"application-loop", &module_info_evalSast, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"init-environment-for-eval", &module_info_evalSast, NULL},
  {"esctst", &module_info_evalStop, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"binding-name", &module_info_evalSast, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"binding-mangled-name-setter", &module_info_evalSast, NULL},
  {"binding-type", &module_info_evalSast, NULL},
  {"<monitor>", &module_info_evalSast, NULL},
  {"free-environment", &module_info_evalSast, NULL},
  {"g2c-eval", &module_info_evalStop, NULL},
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
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"<renamed-local-binding>", &module_info_evalSast_linearize, NULL},
  {"form-program", &module_info_evalSast_linearize, NULL},
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
  {"*goo-extension*", &module_info_gooSsystem, NULL},
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
  {"<loop-application>", &module_info_evalSast, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"load", &module_info_evalStop, NULL},
  {"unchecked-runtime-environment", &module_info_evalSast, NULL},
  {"<locals>", &module_info_evalSast, NULL},
  {"binding-native-to?", &module_info_evalSast, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"file-type", &module_info_gooSsystem, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
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
  {"%compile", &module_info_gooSsystem, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"*c-extension*", &module_info_gooSsystem, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"gooc-filename", &module_info_gooSsystem, NULL},
  {"assignment-reference", &module_info_evalSast, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"add-tmp-path", &module_info_gooSsystem, NULL},
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
  {"*goo-personal-root*", &module_info_gooSsystem, NULL},
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
  {"generate-header", CVAR, &YevalSg2cYgenerate_header},
  {"module-loader-appname-setter", CVAR, &YevalSg2cYmodule_loader_appname_setter},
  {"mangler-reset", CVAR, &YevalSg2cYmangler_reset},
  {"$local-marker", CVAR, &YevalSg2cYDlocal_marker},
  {"*definitions*", DVAR, &YevalSg2cYTdefinitionsT},
  {"module-src-file-setter", CVAR, &YevalSg2cYmodule_src_file_setter},
  {"primitive-inlinable?", CVAR, &YevalSg2cYprimitive_inlinableQ},
  {"module-init-decl", CVAR, &YevalSg2cYmodule_init_decl},
  {"mangle-local-marked-name", CVAR, &YevalSg2cYmangle_local_marked_name},
  {"*registers-per-line*", CVAR, &YevalSg2cYTregisters_per_lineT},
  {"$escape-separator", CVAR, &YevalSg2cYDescape_separator},
  {"$escape-marker", CVAR, &YevalSg2cYDescape_marker},
  {"generate-function-binding", CVAR, &YevalSg2cYgenerate_function_binding},
  {"generate-function-specs", CVAR, &YevalSg2cYgenerate_function_specs},
  {"$number-characters", CVAR, &YevalSg2cYDnumber_characters},
  {"to-c", CVAR, &YevalSg2cYto_c},
  {"between-parentheses", PVAR, NULL},
  {"mangle-integer", CVAR, &YevalSg2cYmangle_integer},
  {"generate-global-binding", CVAR, &YevalSg2cYgenerate_global_binding},
  {"module-src-file", CVAR, &YevalSg2cYmodule_src_file},
  {"generate-quotation-forwards", CVAR, &YevalSg2cYgenerate_quotation_forwards},
  {"$max-character-code", CVAR, &YevalSg2cYDmax_character_code},
  {"reference->c", CVAR, &YevalSg2cYreference_Gc},
  {"g2c-exp", CVAR, &YevalSg2cYg2c_exp},
  {"generate-quotation", CVAR, &YevalSg2cYgenerate_quotation},
  {"$name-mangler-table", CVAR, &YevalSg2cYDname_mangler_table},
  {"with-statement", PVAR, NULL},
  {"generate-function-bodies", CVAR, &YevalSg2cYgenerate_function_bodies},
  {"$method-mangled-marker-string", CVAR, &YevalSg2cYDmethod_mangled_marker_string},
  {"module-loader-app-modname", CVAR, &YevalSg2cYmodule_loader_app_modname},
  {"funshell-to-c", CVAR, &YevalSg2cYfunshell_to_c},
  {"funinit-to-c", CVAR, &YevalSg2cYfuninit_to_c},
  {"out-list-builder", CVAR, &YevalSg2cYout_list_builder},
  {"<g2c-module-loader>", CVAR, &YevalSg2cYLg2c_module_loaderG},
  {"$c-escapes", CVAR, &YevalSg2cYDc_escapes},
  {"$hygiene-char", CVAR, &YevalSg2cYDhygiene_char},
  {"with-used-expression", PVAR, NULL},
  {"generate-quotations", CVAR, &YevalSg2cYgenerate_quotations},
  {"mangle-module-into", CVAR, &YevalSg2cYmangle_module_into},
  {"mangle-global-name", CVAR, &YevalSg2cYmangle_global_name},
  {"mangle-binding", CVAR, &YevalSg2cYmangle_binding},
  {"between-parentheses-comma-separated", PVAR, NULL},
  {"gen-result", CVAR, &YevalSg2cYgen_result},
  {"$hygiene-marker", CVAR, &YevalSg2cYDhygiene_marker},
  {"mangle-local-name", CVAR, &YevalSg2cYmangle_local_name},
  {"mangle-quotation-name", CVAR, &YevalSg2cYmangle_quotation_name},
  {"g2c-top", CVAR, &YevalSg2cYg2c_top},
  {"---main-1---", PVAR, NULL},
  {"false-name", CVAR, &YevalSg2cYfalse_name},
  {"g2c-build-app", CVAR, &YevalSg2cYg2c_build_app},
  {"generate-closure-structure", CVAR, &YevalSg2cYgenerate_closure_structure},
  {"for-mods", PVAR, NULL},
  {"binding->c", CVAR, &YevalSg2cYbinding_Gc},
  {"generate-function-forward", CVAR, &YevalSg2cYgenerate_function_forward},
  {"%print-cpu-usage", PVAR, NULL},
  {"$now-mod-var-name", CVAR, &YevalSg2cYDnow_mod_var_name},
  {"g2c-def-app", CVAR, &YevalSg2cYg2c_def_app},
  {"mangle-boot-name", CVAR, &YevalSg2cYmangle_boot_name},
  {"*trace-registers?*", CVAR, &YevalSg2cYTtrace_registersQT},
  {"$mangles-data", CVAR, &YevalSg2cYDmangles_data},
  {"$number-call-templates", CVAR, &YevalSg2cYDnumber_call_templates},
  {"module-up-to-date?", CVAR, &YevalSg2cYmodule_up_to_dateQ},
  {"mangle-raw-name", CVAR, &YevalSg2cYmangle_raw_name},
  {"$iep-marker", CVAR, &YevalSg2cYDiep_marker},
  {"$method-mangled-marker", CVAR, &YevalSg2cYDmethod_mangled_marker},
  {"*loop-arg-counter*", DVAR, &YevalSg2cYTloop_arg_counterT},
  {"generate-main", CVAR, &YevalSg2cYgenerate_main},
  {"---main-0---", PVAR, NULL},
  {"*g2c-app*", CVAR, &YevalSg2cYTg2c_appT},
  {"generate-function-code", CVAR, &YevalSg2cYgenerate_function_code},
  {"g2c-ast", CVAR, &YevalSg2cYg2c_ast},
  {"$iep-suffix", CVAR, &YevalSg2cYDiep_suffix},
  {"generate-global-environment", CVAR, &YevalSg2cYgenerate_global_environment},
  {"buf-cat2!", CVAR, &YevalSg2cYbuf_cat2X},
  {"module-loader-app-modname-setter", CVAR, &YevalSg2cYmodule_loader_app_modname_setter},
  {"gen-ref", CVAR, &YevalSg2cYgen_ref},
  {"mangle-string-literal", CVAR, &YevalSg2cYmangle_string_literal},
  {"gen-depth", CVAR, &YevalSg2cYgen_depth},
  {"purge-outdated-modules", CVAR, &YevalSg2cYpurge_outdated_modules},
  {"gen-fab-list", CVAR, &YevalSg2cYgen_fab_list},
  {"for-commas", PVAR, NULL},
  {"generate-makefile", CVAR, &YevalSg2cYgenerate_makefile},
  {"pp", CVAR, &YevalSg2cYpp},
  {"char-buffer-as-string", CVAR, &YevalSg2cYchar_buffer_as_string},
  {"$module-separator", CVAR, &YevalSg2cYDmodule_separator},
  {"compute-ast", CVAR, &YevalSg2cYcompute_ast},
  {"g2c-clean", CVAR, &YevalSg2cYg2c_clean},
  {"generate-c-module", CVAR, &YevalSg2cYgenerate_c_module},
  {"module-mtime", CVAR, &YevalSg2cYmodule_mtime},
  {"generate-functions", CVAR, &YevalSg2cYgenerate_functions},
  {"---main-2---", PVAR, NULL},
  {"generate-function-forwards", CVAR, &YevalSg2cYgenerate_function_forwards},
  {"$module-marker", CVAR, &YevalSg2cYDmodule_marker},
  {"*tmp-file-counter*", DVAR, &YevalSg2cYTtmp_file_counterT},
  {"$min-character-code", CVAR, &YevalSg2cYDmin_character_code},
  {"module-loader-appname", CVAR, &YevalSg2cYmodule_loader_appname},
  {"generate-module-info", CVAR, &YevalSg2cYgenerate_module_info},
  {"generate-module-init", CVAR, &YevalSg2cYgenerate_module_init},
  {"generate-trailer", CVAR, &YevalSg2cYgenerate_trailer},
  {"*mangle-buffer*", CVAR, &YevalSg2cYTmangle_bufferT},
  {"g2c-goo", CVAR, &YevalSg2cYg2c_goo},
  {"with-expression", PVAR, NULL},
  {"compute-program", CVAR, &YevalSg2cYcompute_program},
  {"generate-registers", CVAR, &YevalSg2cYgenerate_registers},
  {"generate-return", CVAR, &YevalSg2cYgenerate_return},
  {"g2c-test", CVAR, &YevalSg2cYg2c_test},
  {"mangle-name-into", CVAR, &YevalSg2cYmangle_name_into},
  {"generate-local-temporaries", CVAR, &YevalSg2cYgenerate_local_temporaries},
  {"module-info-name", CVAR, &YevalSg2cYmodule_info_name},
  {"declare-imported-module-infos", CVAR, &YevalSg2cYdeclare_imported_module_infos},
  {"module-init-name", CVAR, &YevalSg2cYmodule_init_name},
  {"compile-load", CVAR, &YevalSg2cYcompile_load},
  {"module-mtime-setter", CVAR, &YevalSg2cYmodule_mtime_setter},
  {"dispatcher?", CVAR, &YevalSg2cYdispatcherQ},
  {"$local-suffix", CVAR, &YevalSg2cYDlocal_suffix},
  {"*dynamic-linking?*", DVAR, &YevalSg2cYTdynamic_linkingQT},
  {"generate-function-body-reference", CVAR, &YevalSg2cYgenerate_function_body_reference},
  {"float-to-c-string", CVAR, &YevalSg2cYfloat_to_c_string},
  {"generate-c-application", CVAR, &YevalSg2cYgenerate_c_application},
  {"<g2c-module>", CVAR, &YevalSg2cYLg2c_moduleG},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"g2c-build-app", NULL},
  {"g2c-clean", NULL},
  {"g2c-exp", NULL},
  {"g2c-def-app", NULL},
  {"g2c-top", NULL},
  {"g2c-ast", NULL},
  {"g2c-goo", NULL},
  {"g2c-test", NULL},
  {"g2c-eval", NULL},
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
