/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/g2c */

EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
DEF(YevalSg2cYmangler_reset,"eval/g2c","mangler-reset");
EXT(Ysig_specs,"goo/boot","sig-specs");
DEF(YevalSg2cYmangle_local_name,"eval/g2c","mangle-local-name");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
DEF(YevalSg2cYDlocal_marker,"eval/g2c","$local-marker");
DEF(YevalSg2cYdeclare_imported_module_infos,"eval/g2c","declare-imported-module-infos");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSmathYS,"goo/math","/");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
DEF(YevalSg2cYTtrace_registersQT,"eval/g2c","*trace-registers?*");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YevalStopYbt,"eval/top","bt");
EXT(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
DEF(YevalSg2cYTregisters_per_lineT,"eval/g2c","*registers-per-line*");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
DEF(YevalSg2cYgenerate_trailer,"eval/g2c","generate-trailer");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
DEF(YevalSg2cYto_c,"eval/g2c","to-c");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
DEF(YevalSg2cYmangle_local_marked_name,"eval/g2c","mangle-local-marked-name");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
DEF(YevalSg2cYgenerate_function_code,"eval/g2c","generate-function-code");
EXT(Ytail_setter,"goo/boot","tail-setter");
DYNDEF(YevalSg2cYTdefinitionsT,"eval/g2c","*definitions*");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
DEF(YevalSg2cYmodule_mtime,"eval/g2c","module-mtime");
EXT(YLclassG,"goo/boot","<class>");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
DEF(YevalSg2cYgenerate_shadow_args,"eval/g2c","generate-shadow-args");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(Ytail,"goo/boot","tail");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YevalStopYload_file,"eval/top","load-file");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YgooStypesY2nd,"goo/types","2nd");
DEF(YevalSg2cYLg2c_module_loaderG,"eval/g2c","<g2c-module-loader>");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
DEF(YevalSg2cYchar_buffer_as_string,"eval/g2c","char-buffer-as-string");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
DEF(YevalSg2cYmodule_info_name,"eval/g2c","module-info-name");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
DEF(YevalSg2cYTtmp_file_counterT,"eval/g2c","*tmp-file-counter*");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
DEF(YevalSg2cYpurge_outdated_modules,"eval/g2c","purge-outdated-modules");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YPprop,"goo/boot","%prop");
DEF(YevalSg2cYmodule_loader_appname_setter,"eval/g2c","module-loader-appname-setter");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(Ynot,"goo/boot","not");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
DEF(YevalSg2cYmangle_module_into,"eval/g2c","mangle-module-into");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
DEF(YevalSg2cYfuninit_to_c,"eval/g2c","funinit-to-c");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YevalStopYframe,"eval/top","frame");
DEF(YevalSg2cYgenerate_quotation,"eval/g2c","generate-quotation");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
DEF(YevalSg2cYmangle_integer,"eval/g2c","mangle-integer");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(Yprop_setter,"goo/boot","prop-setter");
DEF(YevalSg2cYgenerate_c_module,"eval/g2c","generate-c-module");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
DEF(YevalSg2cYcompute_ast,"eval/g2c","compute-ast");
DEF(YevalSg2cYgenerate_makefile,"eval/g2c","generate-makefile");
DEF(YevalSg2cYgenerate_header,"eval/g2c","generate-header");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
DEF(YevalSg2cYgenerate_global_environment,"eval/g2c","generate-global-environment");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
DEF(YevalSg2cYTmangle_bufferT,"eval/g2c","*mangle-buffer*");
EXT(YLmetG,"goo/boot","<met>");
DEF(YevalSg2cYmodule_src_file_setter,"eval/g2c","module-src-file-setter");
DEF(YevalSg2cYDescape_marker,"eval/g2c","$escape-marker");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
DEF(YevalSg2cYg2c_def_app,"eval/g2c","g2c-def-app");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(Ysig_names,"goo/boot","sig-names");
DEF(YevalSg2cYgenerate_c_application,"eval/g2c","generate-c-application");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalStopYsave_image,"eval/top","save-image");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YgooStypesYtL,"goo/types","t<");
DEF(YevalSg2cYmodule_loader_app_modname,"eval/g2c","module-loader-app-modname");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
DEF(YevalSg2cYDhygiene_char,"eval/g2c","$hygiene-char");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Yerror,"goo/boot","error");
EXT(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
DEF(YevalSg2cYmangle_binding,"eval/g2c","mangle-binding");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
DEF(YevalSg2cYgenerate_function_forward,"eval/g2c","generate-function-forward");
DEF(YevalSg2cYgenerate_local_temporaries,"eval/g2c","generate-local-temporaries");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
DEF(YevalSg2cYmodule_loader_app_modname_setter,"eval/g2c","module-loader-app-modname-setter");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
DEF(YevalSg2cYgenerate_return,"eval/g2c","generate-return");
EXT(YLlstG,"goo/boot","<lst>");
DEF(YevalSg2cYgenerate_function_body_reference,"eval/g2c","generate-function-body-reference");
DEF(YevalSg2cYmodule_up_to_dateQ,"eval/g2c","module-up-to-date?");
DEF(YevalSg2cYgen_fab_list,"eval/g2c","gen-fab-list");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(Ynul,"goo/boot","nul");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
DEF(YevalSg2cYg2c_ast,"eval/g2c","g2c-ast");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
DEF(YevalSg2cYDname_mangler_table,"eval/g2c","$name-mangler-table");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
DEF(YevalSg2cYDmangles_data,"eval/g2c","$mangles-data");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
DEF(YevalSg2cYgen_result,"eval/g2c","gen-result");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
DEF(YevalSg2cYfalse_name,"eval/g2c","false-name");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(YevalSg2cYgenerate_quotation_forwards,"eval/g2c","generate-quotation-forwards");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
DEF(YevalSg2cYTg2c_appT,"eval/g2c","*g2c-app*");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YevalSg2cYg2c_clean,"eval/g2c","g2c-clean");
EXT(Yunion_elts,"goo/boot","union-elts");
DEF(YevalSg2cYgenerate_self_recursive_call,"eval/g2c","generate-self-recursive-call");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YevalStopYesctst,"eval/top","esctst");
DEF(YevalSg2cYg2c_goo,"eval/g2c","g2c-goo");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YLseqIG,"goo/boot","<seq.>");
DEF(YevalSg2cYfloat_to_c_string,"eval/g2c","float-to-c-string");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
DEF(YevalSg2cYg2c_build_app,"eval/g2c","g2c-build-app");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YevalSast_linearizeYupdate_walkX,"eval/ast-linearize","update-walk!");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
DEF(YevalSg2cYDhygiene_marker,"eval/g2c","$hygiene-marker");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
DEF(YevalSg2cYgen_ref,"eval/g2c","gen-ref");
EXT(YgooSioSportYin,"goo/io/port","in");
DEF(YevalSg2cYbuf_cat2X,"eval/g2c","buf-cat2!");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yhead,"goo/boot","head");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
DEF(YevalSg2cYmodule_loader_appname,"eval/g2c","module-loader-appname");
DEF(YevalSg2cYmangle_string_literal,"eval/g2c","mangle-string-literal");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
DEF(YevalSg2cYgenerate_module_init,"eval/g2c","generate-module-init");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
DEF(YevalSg2cYmangle_quotation_name,"eval/g2c","mangle-quotation-name");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
DEF(YevalSg2cYDmin_character_code,"eval/g2c","$min-character-code");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
DEF(YevalSg2cYmodule_src_file,"eval/g2c","module-src-file");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
DEF(YevalSg2cYcompute_program,"eval/g2c","compute-program");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
DEF(YevalSg2cYgenerate_function_specs,"eval/g2c","generate-function-specs");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
DEF(YevalSg2cYDmodule_separator,"eval/g2c","$module-separator");
EXT(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
DEF(YevalSg2cYreference_Gc,"eval/g2c","reference->c");
EXT(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
DEF(YevalSg2cYg2c_exp,"eval/g2c","g2c-exp");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
DYNEXT(YgooSruntimeYTcurrent_handlersT,"goo/runtime","*current-handlers*");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
DEF(YevalSg2cYg2c_top,"eval/g2c","g2c-top");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
DEF(YevalSg2cYpp,"eval/g2c","pp");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
DEF(YevalSg2cYDmethod_mangled_marker_string,"eval/g2c","$method-mangled-marker-string");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YtT,"goo/boot","t*");
EXT(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
DEF(YevalSg2cYDlocal_suffix,"eval/g2c","$local-suffix");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
DEF(YevalSg2cYDc_escapes,"eval/g2c","$c-escapes");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(Ylst,"goo/boot","lst");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YevalStopYframe_var,"eval/top","frame-var");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
DEF(YevalSg2cYmangle_boot_name,"eval/g2c","mangle-boot-name");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
DEF(YevalSg2cYmangle_raw_name,"eval/g2c","mangle-raw-name");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
DEF(YevalSg2cYg2c_test,"eval/g2c","g2c-test");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
DEF(YevalSg2cYDmax_character_code,"eval/g2c","$max-character-code");
DEF(YevalSg2cYmodule_init_decl,"eval/g2c","module-init-decl");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YLfloG,"goo/boot","<flo>");
DEF(YevalSg2cYDiep_marker,"eval/g2c","$iep-marker");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
DEF(YevalSg2cYLg2c_moduleG,"eval/g2c","<g2c-module>");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
DEF(YevalSg2cYDiep_suffix,"eval/g2c","$iep-suffix");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooStypesYas,"goo/types","as");
DEF(YevalSg2cYDmodule_marker,"eval/g2c","$module-marker");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
DEF(YevalSg2cYbinding_Gc,"eval/g2c","binding->c");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
DEF(YevalSg2cYgenerate_module_info,"eval/g2c","generate-module-info");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yobject_props,"goo/boot","object-props");
DEF(YevalSg2cYgenerate_main,"eval/g2c","generate-main");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YevalStopYread_file,"eval/top","read-file");
DEF(YevalSg2cYfunshell_to_c,"eval/g2c","funshell-to-c");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
DEF(YevalSg2cYgenerate_function_binding,"eval/g2c","generate-function-binding");
EXT(YgooSmathYB,"goo/math","&");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
DEF(YevalSg2cYgenerate_functions,"eval/g2c","generate-functions");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Yunexec,"goo/boot","unexec");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YLproductG,"goo/boot","<product>");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
DEF(YevalSg2cYdispatcherQ,"eval/g2c","dispatcher?");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YevalStopYtop,"eval/top","top");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YevalStopYparse_in,"eval/top","parse-in");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
DEF(YevalSg2cYgenerate_closure_structure,"eval/g2c","generate-closure-structure");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YLlogG,"goo/boot","<log>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YevalSast_linearizeYanalyze_ast,"eval/ast-linearize","analyze-ast");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YevalStopYload,"eval/top","load");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(Ysym_name,"goo/boot","sym-name");
DEF(YevalSg2cYgenerate_quotations,"eval/g2c","generate-quotations");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
DEF(YevalSg2cYDmethod_mangled_marker,"eval/g2c","$method-mangled-marker");
DEF(YevalSg2cYDescape_separator,"eval/g2c","$escape-separator");
DEF(YevalSg2cYgenerate_registers,"eval/g2c","generate-registers");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
DEF(YevalSg2cYmodule_mtime_setter,"eval/g2c","module-mtime-setter");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YOlst,"goo/boot","@lst");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
DEF(YevalSg2cYDnumber_characters,"eval/g2c","$number-characters");
DEF(YevalSg2cYmangle_name_into,"eval/g2c","mangle-name-into");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
DEF(YevalSg2cYprimitive_inlinableQ,"eval/g2c","primitive-inlinable?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
DEF(YevalSg2cYgenerate_global_binding,"eval/g2c","generate-global-binding");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(Ynew,"goo/boot","new");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YevalSastYload_module,"eval/ast","load-module");
DEF(YevalSg2cYgenerate_function_forwards,"eval/g2c","generate-function-forwards");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
DEF(YevalSg2cYgenerate_function_bodies,"eval/g2c","generate-function-bodies");
DEF(YevalSg2cYmangle_global_name,"eval/g2c","mangle-global-name");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
DEF(YevalSg2cYcompile_load,"eval/g2c","compile-load");
DEF(YevalSg2cYout_list_builder,"eval/g2c","out-list-builder");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
DEF(YevalSg2cYDnumber_call_templates,"eval/g2c","$number-call-templates");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YevalSast_linearizeYast_contains_funQ,"eval/ast-linearize","ast-contains-fun?");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YgooSmathYC,"goo/math","^");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
DEF(YevalSg2cYmodule_init_name,"eval/g2c","module-init-name");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
DEF(YevalSg2cYgen_depth,"eval/g2c","gen-depth");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
DYNDEF(YevalSg2cYTdynamic_linkingQT,"eval/g2c","*dynamic-linking?*");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YisaQ,"goo/boot","isa?");
EXT(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(Ynil,"goo/boot","nil");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalSast_linearizeYunconstrained_typeQ,"eval/ast-linearize","unconstrained-type?");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmathYA,"goo/math","+");
EXT(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_17);
DEFLIT(lit_221);
DEFLIT(lit_69);
DEFLIT(lit_162);
DEFLIT(lit_167);
DEFLIT(lit_143);
DEFLIT(lit_176);
DEFLIT(lit_263);
DEFLIT(lit_199);
DEFLIT(lit_138);
DEFLIT(lit_215);
DEFLIT(lit_77);
DEFLIT(lit_361);
DEFLIT(lit_380);
DEFLIT(lit_544);
DEFLIT(lit_137);
DEFLIT(lit_163);
DEFLIT(lit_20);
DEFLIT(lit_22);
DEFLIT(lit_450);
DEFLIT(lit_298);
DEFLIT(lit_309);
DEFLIT(lit_439);
DEFLIT(lit_205);
DEFLIT(lit_51);
DEFLIT(lit_444);
DEFLIT(lit_549);
DEFLIT(lit_98);
DEFLIT(lit_79);
DEFLIT(lit_70);
DEFLIT(lit_251);
DEFLIT(lit_473);
DEFLIT(lit_136);
DEFLIT(lit_379);
DEFLIT(lit_190);
DEFLIT(lit_367);
DEFLIT(lit_409);
DEFLIT(lit_78);
DEFLIT(lit_90);
DEFLIT(lit_278);
DEFLIT(lit_422);
DEFLIT(lit_329);
DEFLIT(lit_547);
DEFLIT(lit_93);
DEFLIT(lit_363);
DEFLIT(lit_277);
DEFLIT(lit_184);
DEFLIT(lit_59);
DEFLIT(lit_186);
DEFLIT(lit_218);
DEFLIT(lit_299);
DEFLIT(lit_378);
DEFLIT(lit_423);
DEFLIT(lit_396);
DEFLIT(lit_475);
DEFLIT(lit_497);
DEFLIT(lit_50);
DEFLIT(lit_288);
DEFLIT(lit_10);
DEFLIT(lit_276);
DEFLIT(lit_432);
DEFLIT(lit_34);
DEFLIT(lit_196);
DEFLIT(lit_408);
DEFLIT(lit_496);
DEFLIT(lit_202);
DEFLIT(lit_376);
DEFLIT(lit_275);
DEFLIT(lit_91);
DEFLIT(lit_287);
DEFLIT(lit_377);
DEFLIT(lit_539);
DEFLIT(lit_460);
DEFLIT(lit_76);
DEFLIT(lit_274);
DEFLIT(lit_526);
DEFLIT(lit_561);
DEFLIT(lit_36);
DEFLIT(lit_317);
DEFLIT(lit_466);
DEFLIT(lit_286);
DEFLIT(lit_191);
DEFLIT(lit_75);
DEFLIT(lit_0);
DEFLIT(lit_556);
DEFLIT(lit_440);
DEFLIT(lit_455);
DEFLIT(lit_471);
DEFLIT(lit_144);
DEFLIT(lit_414);
DEFLIT(lit_88);
DEFLIT(lit_490);
DEFLIT(lit_160);
DEFLIT(lit_135);
DEFLIT(lit_256);
DEFLIT(lit_493);
DEFLIT(lit_563);
DEFLIT(lit_506);
DEFLIT(lit_306);
DEFLIT(lit_147);
DEFLIT(lit_330);
DEFLIT(lit_387);
DEFLIT(lit_248);
DEFLIT(lit_520);
DEFLIT(lit_161);
DEFLIT(lit_538);
DEFLIT(lit_159);
DEFLIT(lit_529);
DEFLIT(lit_285);
DEFLIT(lit_80);
DEFLIT(lit_242);
DEFLIT(lit_21);
DEFLIT(lit_326);
DEFLIT(lit_394);
DEFLIT(lit_3);
DEFLIT(lit_428);
DEFLIT(lit_52);
DEFLIT(lit_293);
DEFLIT(lit_322);
DEFLIT(lit_349);
DEFLIT(lit_519);
DEFLIT(lit_206);
DEFLIT(lit_517);
DEFLIT(lit_49);
DEFLIT(lit_335);
DEFLIT(lit_486);
DEFLIT(lit_216);
DEFLIT(lit_101);
DEFLIT(lit_177);
DEFLIT(lit_537);
DEFLIT(lit_253);
DEFLIT(lit_365);
DEFLIT(lit_68);
DEFLIT(lit_434);
DEFLIT(lit_357);
DEFLIT(lit_9);
DEFLIT(lit_474);
DEFLIT(lit_311);
DEFLIT(lit_535);
DEFLIT(lit_252);
DEFLIT(lit_234);
DEFLIT(lit_436);
DEFLIT(lit_352);
DEFLIT(lit_510);
DEFLIT(lit_32);
DEFLIT(lit_518);
DEFLIT(lit_61);
DEFLIT(lit_46);
DEFLIT(lit_472);
DEFLIT(lit_400);
DEFLIT(lit_92);
DEFLIT(lit_345);
DEFLIT(lit_283);
DEFLIT(lit_557);
DEFLIT(lit_8);
DEFLIT(lit_89);
DEFLIT(lit_331);
DEFLIT(lit_279);
DEFLIT(lit_336);
DEFLIT(lit_393);
DEFLIT(lit_6);
DEFLIT(lit_86);
DEFLIT(lit_63);
DEFLIT(lit_239);
DEFLIT(lit_346);
DEFLIT(lit_438);
DEFLIT(lit_347);
DEFLIT(lit_398);
DEFLIT(lit_513);
DEFLIT(lit_327);
DEFLIT(lit_81);
DEFLIT(lit_168);
DEFLIT(lit_211);
DEFLIT(lit_312);
DEFLIT(lit_470);
DEFLIT(lit_250);
DEFLIT(lit_413);
DEFLIT(lit_109);
DEFLIT(lit_182);
DEFLIT(lit_386);
DEFLIT(lit_462);
DEFLIT(lit_324);
DEFLIT(lit_45);
DEFLIT(lit_421);
DEFLIT(lit_449);
DEFLIT(lit_318);
DEFLIT(lit_426);
DEFLIT(lit_193);
DEFLIT(lit_489);
DEFLIT(lit_209);
DEFLIT(lit_533);
DEFLIT(lit_19);
DEFLIT(lit_247);
DEFLIT(lit_500);
DEFLIT(lit_552);
DEFLIT(lit_142);
DEFLIT(lit_461);
DEFLIT(lit_491);
DEFLIT(lit_295);
DEFLIT(lit_223);
DEFLIT(lit_301);
DEFLIT(lit_321);
DEFLIT(lit_201);
DEFLIT(lit_116);
DEFLIT(lit_195);
DEFLIT(lit_232);
DEFLIT(lit_514);
DEFLIT(lit_220);
DEFLIT(lit_153);
DEFLIT(lit_524);
DEFLIT(lit_18);
DEFLIT(lit_307);
DEFLIT(lit_44);
DEFLIT(lit_302);
DEFLIT(lit_222);
DEFLIT(lit_370);
DEFLIT(lit_541);
DEFLIT(lit_303);
DEFLIT(lit_479);
DEFLIT(lit_210);
DEFLIT(lit_146);
DEFLIT(lit_115);
DEFLIT(lit_403);
DEFLIT(lit_245);
DEFLIT(lit_516);
DEFLIT(lit_527);
DEFLIT(lit_42);
DEFLIT(lit_451);
DEFLIT(lit_521);
DEFLIT(lit_208);
DEFLIT(lit_257);
DEFLIT(lit_507);
DEFLIT(lit_511);
DEFLIT(lit_374);
DEFLIT(lit_515);
DEFLIT(lit_58);
DEFLIT(lit_155);
DEFLIT(lit_402);
DEFLIT(lit_280);
DEFLIT(lit_368);
DEFLIT(lit_495);
DEFLIT(lit_433);
DEFLIT(lit_487);
DEFLIT(lit_430);
DEFLIT(lit_366);
DEFLIT(lit_353);
DEFLIT(lit_108);
DEFLIT(lit_1);
DEFLIT(lit_145);
DEFLIT(lit_292);
DEFLIT(lit_528);
DEFLIT(lit_339);
DEFLIT(lit_284);
DEFLIT(lit_406);
DEFLIT(lit_320);
DEFLIT(lit_141);
DEFLIT(lit_107);
DEFLIT(lit_33);
DEFLIT(lit_323);
DEFLIT(lit_71);
DEFLIT(lit_315);
DEFLIT(lit_180);
DEFLIT(lit_300);
DEFLIT(lit_113);
DEFLIT(lit_564);
DEFLIT(lit_405);
DEFLIT(lit_244);
DEFLIT(lit_267);
DEFLIT(lit_67);
DEFLIT(lit_350);
DEFLIT(lit_165);
DEFLIT(lit_214);
DEFLIT(lit_291);
DEFLIT(lit_492);
DEFLIT(lit_448);
DEFLIT(lit_187);
DEFLIT(lit_522);
DEFLIT(lit_420);
DEFLIT(lit_57);
DEFLIT(lit_488);
DEFLIT(lit_415);
DEFLIT(lit_272);
DEFLIT(lit_134);
DEFLIT(lit_112);
DEFLIT(lit_238);
DEFLIT(lit_565);
DEFLIT(lit_31);
DEFLIT(lit_369);
DEFLIT(lit_454);
DEFLIT(lit_456);
DEFLIT(lit_228);
DEFLIT(lit_463);
DEFLIT(lit_266);
DEFLIT(lit_85);
DEFLIT(lit_416);
DEFLIT(lit_164);
DEFLIT(lit_43);
DEFLIT(lit_133);
DEFLIT(lit_459);
DEFLIT(lit_562);
DEFLIT(lit_355);
DEFLIT(lit_111);
DEFLIT(lit_282);
DEFLIT(lit_337);
DEFLIT(lit_264);
DEFLIT(lit_319);
DEFLIT(lit_419);
DEFLIT(lit_261);
DEFLIT(lit_397);
DEFLIT(lit_132);
DEFLIT(lit_313);
DEFLIT(lit_481);
DEFLIT(lit_333);
DEFLIT(lit_358);
DEFLIT(lit_512);
DEFLIT(lit_241);
DEFLIT(lit_297);
DEFLIT(lit_411);
DEFLIT(lit_360);
DEFLIT(lit_97);
DEFLIT(lit_254);
DEFLIT(lit_131);
DEFLIT(lit_175);
DEFLIT(lit_5);
DEFLIT(lit_170);
DEFLIT(lit_213);
DEFLIT(lit_359);
DEFLIT(lit_237);
DEFLIT(lit_464);
DEFLIT(lit_243);
DEFLIT(lit_249);
DEFLIT(lit_437);
DEFLIT(lit_130);
DEFLIT(lit_543);
DEFLIT(lit_503);
DEFLIT(lit_498);
DEFLIT(lit_236);
DEFLIT(lit_212);
DEFLIT(lit_240);
DEFLIT(lit_412);
DEFLIT(lit_348);
DEFLIT(lit_169);
DEFLIT(lit_30);
DEFLIT(lit_179);
DEFLIT(lit_62);
DEFLIT(lit_166);
DEFLIT(lit_28);
DEFLIT(lit_82);
DEFLIT(lit_94);
DEFLIT(lit_452);
DEFLIT(lit_525);
DEFLIT(lit_105);
DEFLIT(lit_447);
DEFLIT(lit_7);
DEFLIT(lit_157);
DEFLIT(lit_504);
DEFLIT(lit_560);
DEFLIT(lit_207);
DEFLIT(lit_262);
DEFLIT(lit_173);
DEFLIT(lit_128);
DEFLIT(lit_469);
DEFLIT(lit_56);
DEFLIT(lit_140);
DEFLIT(lit_217);
DEFLIT(lit_96);
DEFLIT(lit_404);
DEFLIT(lit_401);
DEFLIT(lit_551);
DEFLIT(lit_27);
DEFLIT(lit_410);
DEFLIT(lit_509);
DEFLIT(lit_231);
DEFLIT(lit_127);
DEFLIT(lit_338);
DEFLIT(lit_66);
DEFLIT(lit_102);
DEFLIT(lit_271);
DEFLIT(lit_114);
DEFLIT(lit_103);
DEFLIT(lit_445);
DEFLIT(lit_480);
DEFLIT(lit_508);
DEFLIT(lit_230);
DEFLIT(lit_174);
DEFLIT(lit_399);
DEFLIT(lit_268);
DEFLIT(lit_550);
DEFLIT(lit_126);
DEFLIT(lit_189);
DEFLIT(lit_188);
DEFLIT(lit_194);
DEFLIT(lit_273);
DEFLIT(lit_407);
DEFLIT(lit_431);
DEFLIT(lit_203);
DEFLIT(lit_11);
DEFLIT(lit_531);
DEFLIT(lit_485);
DEFLIT(lit_354);
DEFLIT(lit_290);
DEFLIT(lit_395);
DEFLIT(lit_559);
DEFLIT(lit_99);
DEFLIT(lit_125);
DEFLIT(lit_505);
DEFLIT(lit_364);
DEFLIT(lit_418);
DEFLIT(lit_484);
DEFLIT(lit_152);
DEFLIT(lit_26);
DEFLIT(lit_425);
DEFLIT(lit_362);
DEFLIT(lit_314);
DEFLIT(lit_106);
DEFLIT(lit_124);
DEFLIT(lit_198);
DEFLIT(lit_476);
DEFLIT(lit_536);
DEFLIT(lit_154);
DEFLIT(lit_151);
DEFLIT(lit_37);
DEFLIT(lit_289);
DEFLIT(lit_204);
DEFLIT(lit_192);
DEFLIT(lit_468);
DEFLIT(lit_224);
DEFLIT(lit_225);
DEFLIT(lit_123);
DEFLIT(lit_558);
DEFLIT(lit_483);
DEFLIT(lit_25);
DEFLIT(lit_446);
DEFLIT(lit_502);
DEFLIT(lit_12);
DEFLIT(lit_332);
DEFLIT(lit_55);
DEFLIT(lit_265);
DEFLIT(lit_40);
DEFLIT(lit_443);
DEFLIT(lit_122);
DEFLIT(lit_156);
DEFLIT(lit_482);
DEFLIT(lit_148);
DEFLIT(lit_87);
DEFLIT(lit_494);
DEFLIT(lit_542);
DEFLIT(lit_258);
DEFLIT(lit_343);
DEFLIT(lit_72);
DEFLIT(lit_478);
DEFLIT(lit_308);
DEFLIT(lit_47);
DEFLIT(lit_382);
DEFLIT(lit_458);
DEFLIT(lit_200);
DEFLIT(lit_540);
DEFLIT(lit_121);
DEFLIT(lit_171);
DEFLIT(lit_534);
DEFLIT(lit_328);
DEFLIT(lit_372);
DEFLIT(lit_260);
DEFLIT(lit_392);
DEFLIT(lit_172);
DEFLIT(lit_304);
DEFLIT(lit_29);
DEFLIT(lit_235);
DEFLIT(lit_197);
DEFLIT(lit_139);
DEFLIT(lit_120);
DEFLIT(lit_60);
DEFLIT(lit_555);
DEFLIT(lit_356);
DEFLIT(lit_226);
DEFLIT(lit_16);
DEFLIT(lit_341);
DEFLIT(lit_158);
DEFLIT(lit_334);
DEFLIT(lit_270);
DEFLIT(lit_435);
DEFLIT(lit_119);
DEFLIT(lit_427);
DEFLIT(lit_23);
DEFLIT(lit_150);
DEFLIT(lit_259);
DEFLIT(lit_453);
DEFLIT(lit_100);
DEFLIT(lit_325);
DEFLIT(lit_467);
DEFLIT(lit_269);
DEFLIT(lit_417);
DEFLIT(lit_183);
DEFLIT(lit_64);
DEFLIT(lit_39);
DEFLIT(lit_375);
DEFLIT(lit_340);
DEFLIT(lit_74);
DEFLIT(lit_118);
DEFLIT(lit_110);
DEFLIT(lit_281);
DEFLIT(lit_35);
DEFLIT(lit_54);
DEFLIT(lit_373);
DEFLIT(lit_2);
DEFLIT(lit_388);
DEFLIT(lit_95);
DEFLIT(lit_4);
DEFLIT(lit_316);
DEFLIT(lit_229);
DEFLIT(lit_24);
DEFLIT(lit_424);
DEFLIT(lit_117);
DEFLIT(lit_15);
DEFLIT(lit_344);
DEFLIT(lit_442);
DEFLIT(lit_14);
DEFLIT(lit_381);
DEFLIT(lit_477);
DEFLIT(lit_305);
DEFLIT(lit_546);
DEFLIT(lit_310);
DEFLIT(lit_178);
DEFLIT(lit_429);
DEFLIT(lit_38);
DEFLIT(lit_371);
DEFLIT(lit_246);
DEFLIT(lit_383);
DEFLIT(lit_48);
DEFLIT(lit_530);
DEFLIT(lit_553);
DEFLIT(lit_532);
DEFLIT(lit_84);
DEFLIT(lit_499);
DEFLIT(lit_219);
DEFLIT(lit_296);
DEFLIT(lit_181);
DEFLIT(lit_104);
DEFLIT(lit_389);
DEFLIT(lit_53);
DEFLIT(lit_342);
DEFLIT(lit_149);
DEFLIT(lit_83);
DEFLIT(lit_523);
DEFLIT(lit_255);
DEFLIT(lit_351);
DEFLIT(lit_41);
DEFLIT(lit_545);
DEFLIT(lit_457);
DEFLIT(lit_13);
DEFLIT(lit_129);
DEFLIT(lit_441);
DEFLIT(lit_227);
DEFLIT(lit_65);
DEFLIT(lit_391);
DEFLIT(lit_548);
DEFLIT(lit_384);
DEFLIT(lit_73);
DEFLIT(lit_501);
DEFLIT(lit_385);
DEFLIT(lit_233);
DEFLIT(lit_294);
DEFLIT(lit_465);
DEFLIT(lit_390);
DEFLIT(lit_554);
DEFLIT(lit_185);

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
LOCFOR(fun_put_obj_41);
LOCFOR(fun_42);
LOCFOR(fun_43);
LOCFOR(fun_44);
LOCFOR(fun_45);
LOCFOR(fun_46);
LOCFOR(fun_generate_makefile_47);
LOCFOR(fun_pp_48);
LOCFOR(fun_generate_header_49);
LOCFOR(fun_generate_trailer_50);
LOCFOR(fun_51);
LOCFOR(fun_generate_global_environment_52);
LOCFOR(fun_generate_global_binding_53);
LOCFOR(fun_loop_54);
FUNFOR(YevalSg2cYchar_buffer_as_string);
LOCFOR(fun_loop_56);
LOCFOR(fun_mangle_string_literal_57);
LOCFOR(fun_mangle_string_literal_58);
LOCFOR(fun_process_integer_59);
LOCFOR(fun_mangle_integer_60);
LOCFOR(fun_x_3153_61);
LOCFOR(fun_x_3155_62);
LOCFOR(fun_x_3157_63);
LOCFOR(fun_x_3159_64);
FUNFOR(YevalSg2cYmangler_reset);
LOCFOR(fun_x_3161_66);
FUNFOR(YevalSg2cYmangle_name_into);
LOCFOR(fun_mangle_raw_name_68);
LOCFOR(fun_mangle_raw_name_69);
LOCFOR(fun_mangle_local_name_70);
LOCFOR(fun_mangle_local_name_71);
LOCFOR(fun_x_3165_72);
LOCFOR(fun_73);
LOCFOR(fun_74);
LOCFOR(fun_loop_75);
FUNFOR(YevalSg2cYbuf_cat2X);
LOCFOR(fun_mangle_module_into_77);
LOCFOR(fun_mangle_global_name_78);
LOCFOR(fun_mangle_global_name_79);
FUNFOR(YevalSg2cYmangle_boot_name);
FUNFOR(YevalSg2cYmangle_quotation_name);
LOCFOR(fun_mangle_binding_82);
FUNFOR(YevalSg2cYmangle_local_marked_name);
LOCFOR(fun_mangle_binding_84);
LOCFOR(fun_mangle_binding_85);
LOCFOR(fun_x_3169_86);
LOCFOR(fun_87);
LOCFOR(fun_88);
LOCFOR(fun_x_3173_89);
LOCFOR(fun_90);
LOCFOR(fun_91);
LOCFOR(fun_x_3177_92);
LOCFOR(fun_loop_93);
LOCFOR(fun_94);
LOCFOR(fun_95);
LOCFOR(fun_gen_result_96);
LOCFOR(fun_x_3180_97);
LOCFOR(fun_gen_depth_98);
LOCFOR(fun_x_3184_99);
LOCFOR(fun_100);
LOCFOR(fun_101);
LOCFOR(fun_x_3188_102);
LOCFOR(fun_103);
LOCFOR(fun_104);
LOCFOR(fun_x_3192_105);
LOCFOR(fun_106);
LOCFOR(fun_107);
LOCFOR(fun_x_3194_108);
LOCFOR(fun_generate_quotation_forwards_109);
LOCFOR(fun_x_3197_110);
LOCFOR(fun_generate_quotations_111);
LOCFOR(fun_false_name_112);
LOCFOR(fun_generate_quotation_113);
LOCFOR(fun_generate_quotation_114);
LOCFOR(fun_115);
LOCFOR(fun_generate_quotation_116);
LOCFOR(fun_generate_quotation_117);
LOCFOR(fun_generate_quotation_118);
LOCFOR(fun_loop_119);
LOCFOR(fun_120);
LOCFOR(fun_float_to_c_string_121);
LOCFOR(fun_generate_quotation_122);
LOCFOR(fun_generate_quotation_123);
LOCFOR(fun_x_3207_124);
LOCFOR(fun_generate_quotation_125);
LOCFOR(fun_x_3210_126);
LOCFOR(fun_generate_quotation_127);
LOCFOR(fun_generate_quotation_128);
FUNFOR(YevalSg2cYbinding_Gc);
LOCFOR(fun_reference_Gc_130);
LOCFOR(fun_reference_Gc_131);
LOCFOR(fun_to_c_132);
LOCFOR(fun_to_c_133);
LOCFOR(fun_gen_ref_134);
LOCFOR(fun_gen_ref_135);
LOCFOR(fun_gen_ref_136);
LOCFOR(fun_gen_ref_137);
LOCFOR(fun_gen_ref_138);
LOCFOR(fun_gen_ref_139);
LOCFOR(fun_to_c_140);
LOCFOR(fun_to_c_141);
LOCFOR(fun_to_c_142);
LOCFOR(fun_to_c_143);
LOCFOR(fun_to_c_144);
LOCFOR(fun_to_c_145);
LOCFOR(fun_146);
LOCFOR(fun_to_c_147);
LOCFOR(fun_x_3227_148);
LOCFOR(fun_x_3230_149);
LOCFOR(fun_x_3234_150);
LOCFOR(fun_generate_self_recursive_call_151);
LOCFOR(fun_x_3237_152);
LOCFOR(fun_x_3242_153);
LOCFOR(fun_to_c_154);
LOCFOR(fun_x_3246_155);
LOCFOR(fun_156);
LOCFOR(fun_157);
LOCFOR(fun_to_c_158);
LOCFOR(fun_x_3250_159);
LOCFOR(fun_to_c_160);
LOCFOR(fun_x_3254_161);
LOCFOR(fun_to_c_162);
LOCFOR(fun_to_c_163);
LOCFOR(fun_to_c_164);
LOCFOR(fun_to_c_165);
LOCFOR(fun_x_3259_166);
LOCFOR(fun_x_3265_167);
LOCFOR(fun_168);
LOCFOR(fun_169);
LOCFOR(fun_to_c_170);
LOCFOR(fun_171);
LOCFOR(fun_x_3269_172);
LOCFOR(fun_to_c_173);
LOCFOR(fun_funshell_to_c_174);
LOCFOR(fun_175);
LOCFOR(fun_x_3276_176);
LOCFOR(fun_funinit_to_c_177);
LOCFOR(fun_to_c_178);
LOCFOR(fun_x_3281_179);
LOCFOR(fun_out_list_builder_180);
LOCFOR(fun_181);
LOCFOR(fun_gen_fab_list_182);
LOCFOR(fun_generate_function_specs_183);
LOCFOR(fun_184);
LOCFOR(fun_to_c_185);
LOCFOR(fun_to_c_186);
LOCFOR(fun_x_3285_187);
LOCFOR(fun_generate_function_forwards_188);
LOCFOR(fun_x_3290_189);
LOCFOR(fun_190);
LOCFOR(fun_191);
LOCFOR(fun_generate_function_forward_192);
LOCFOR(fun_generate_function_binding_193);
LOCFOR(fun_generate_function_forward_194);
LOCFOR(fun_195);
LOCFOR(fun_generate_function_bodies_196);
LOCFOR(fun_197);
LOCFOR(fun_generate_functions_198);
LOCFOR(fun_generate_closure_structure_199);
LOCFOR(fun_generate_function_body_reference_200);
LOCFOR(fun_x_3299_201);
LOCFOR(fun_202);
LOCFOR(fun_203);
LOCFOR(fun_generate_shadow_args_204);
LOCFOR(fun_generate_return_205);
LOCFOR(fun_generate_return_206);
LOCFOR(fun_primitive_inlinableQ_207);
LOCFOR(fun_x_3307_208);
LOCFOR(fun_209);
LOCFOR(fun_210);
LOCFOR(fun_generate_function_code_211);
LOCFOR(fun_dispatcherQ_212);
LOCFOR(fun_x_3311_213);
LOCFOR(fun_214);
LOCFOR(fun_215);
LOCFOR(fun_216);
LOCFOR(fun_generate_function_code_217);
LOCFOR(fun_x_3314_218);
LOCFOR(fun_generate_local_temporaries_219);
LOCFOR(fun_next_reg_220);
LOCFOR(fun_next_line_221);
LOCFOR(fun_generate_registers_222);
LOCFOR(fun_module_info_name_223);
LOCFOR(fun_maybe_declare_224);
LOCFOR(fun_225);
FUNFOR(YevalSg2cYdeclare_imported_module_infos);
LOCFOR(fun_x_3317_227);
LOCFOR(fun_228);
LOCFOR(fun_229);
LOCFOR(fun_x_3326_230);
FUNFOR(YevalSg2cYgenerate_module_info);
LOCFOR(fun_module_init_name_232);
LOCFOR(fun_module_init_decl_233);
LOCFOR(fun_x_3332_234);
LOCFOR(fun_x_3337_235);
LOCFOR(fun_generate_module_init_236);
LOCFOR(fun_generate_main_237);
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
  P x_3131F7116;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  x_3131F7116 = DYNREF(YevalSg2cYTdefinitionsT);
  T3 = FUNFAB(fun_9,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T4 = FUNFAB(fun_10,1,x_3131F7116);
  T2 = with_cleanup(T3,T4);
  T1 = T2;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_12) {
  P tmpF7117;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF7117 = T1;
  if (tmpF7117 != YPfalse) {
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
  P tmpF7121;
  P src_fileF7120;
  P build_fileF7119;
  P fileF7118;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  fileF7118 = T1;
  T3 = CALL2(1,VARREF(YgooSsystemYadd_build_path),FREEREF(0),fileF7118);
  build_fileF7119 = T3;
  T5 = CALL1(1,VARREF(YgooSsystemYadd_src_path),fileF7118);
  src_fileF7120 = T5;
  T9 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),build_fileF7119);
  T8 = CALL1(1,VARREF(Ynot),T9);
  tmpF7121 = T8;
  if (tmpF7121 != YPfalse) {
    T10 = tmpF7121;
  } else {
    T12 = CALL1(1,VARREF(YgooSsystemYfile_mtime),src_fileF7120);
    T13 = CALL1(1,VARREF(YgooSsystemYfile_mtime),build_fileF7119);
    T11 = CALL2(1,VARREF(YgooSmagYGE),T12,T13);
    T10 = T11;
  }
  T7 = T10;
  if (T7 != YPfalse) {
    T14 = CALL2(1,VARREF(YgooSsystemYfile_copy),src_fileF7120,build_fileF7119);
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
  P out_portF7131;
  P prgF7130;
  P astF7129;
  P out_fileF7128;
  P appnameF7127;
  P src_fileF7126;
  P fileF7125;
  P envF7124;
  P keepmodQF7123;
  P modF7122;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSastYfab_g2c_module),loader_,name_);
  modF7122 = T1;
  keepmodQF7123 = YPfalse;
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),modF7122);
  envF7124 = T4;
  T6 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  fileF7125 = T6;
  T9 = CALL1(1,VARREF(YgooSsystemYgoo_filename),fileF7125);
  T8 = CALL1(1,VARREF(YgooSsystemYadd_src_path),T9);
  src_fileF7126 = T8;
  T11 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF7127 = T11;
  T14 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF7125);
  T13 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF7127,T14);
  out_fileF7128 = T13;
  CALL2(1,VARREF(YevalSg2cYmodule_src_file_setter),src_fileF7126,modF7122);
  T15 = CALL1(1,VARREF(YgooSsystemYfile_mtime),src_fileF7126);
  CALL2(1,VARREF(YevalSg2cYmodule_mtime_setter),T15,modF7122);
  T16 = (P)YPsu(LITREF(lit_16));
  (P)YevalSg2cYPprint_cpu_usage(T16);
  T18 = CALL2(1,VARREF(YevalSg2cYcompute_ast),src_fileF7126,envF7124);
  astF7129 = T18;
  T20 = CALL2(1,VARREF(YevalSg2cYcompute_program),astF7129,envF7124);
  prgF7130 = T20;
  T21 = (P)YPsu(LITREF(lit_17));
  (P)YevalSg2cYPprint_cpu_usage(T21);
  T22 = CALL1(1,VARREF(YgooSsystemYparent_directory),out_fileF7128);
  CALL1(1,VARREF(YgooSsystemYprobe_directory),T22);
  out_portF7131 = YPfalse;
  out_portF7131 = BOXFAB(out_portF7131);
  T25 = FUNFAB(fun_11,5,out_portF7131,out_fileF7128,prgF7130,astF7129,modF7122);
  T26 = FUNFAB(fun_12,1,out_portF7131);
  T24 = with_cleanup(T25,T26);
  T27 = FUNFAB(fun_13,1,appnameF7127);
  T28 = CALL1(1,VARREF(YevalSastYmodule_uses_c_files),modF7122);
  CALL2(1,VARREF(YgooSmacrosYdo),T27,T28);
  T29 = (P)YPsu(LITREF(lit_18));
  (P)YevalSg2cYPprint_cpu_usage(T29);
  T19 = modF7122;
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
  P x_3132F7132;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  x_3132F7132 = VARREF(YgooSioSportYout);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3132F7132,name_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_3132F7132,LITREF(lit_22));
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYpurge_outdated_modules) {
  P loader_;
  P changedF7133;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
  changedF7133 = Ynil;
  changedF7133 = BOXFAB(changedF7133);
  T2 = FUNFAB(fun_16,1,changedF7133);
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T2,loader_);
  T3 = fun_17;
  T4 = BOXVAL(changedF7133);
  CALL2(1,VARREF(YgooSmacrosYdo),T3,T4);
  T6 = BOXVAL(changedF7133);
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
  P modF7134;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
  CALL1(1,VARREF(YevalSg2cYpurge_outdated_modules),loader_);
  T2 = CALL1(1,VARREF(YevalSg2cYmodule_loader_app_modname),loader_);
  T1 = CALL2(1,VARREF(YevalSastYprobe_module),loader_,T2);
  modF7134 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),VARREF(YgooSioSportYout),LITREF(lit_27));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),VARREF(YevalSastYreport_undefined_global_bindings),loader_);
  CALL2(1,VARREF(YevalSg2cYgenerate_c_application),loader_,modF7134);
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
  T2 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_30),T3);
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_def_app),T2,LITREF(lit_31));
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
  P x_3134F7135;
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  DYNSET(YevalSg2cYTdynamic_linkingQT,YPtrue);
  x_3134F7135 = DYNREF(YevalSg2cYTdefinitionsT);
  T2 = FUNFAB(fun_22,4,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  T3 = FUNFAB(fun_23,1,x_3134F7135);
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
  P x_3133F7136;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  x_3133F7136 = DYNREF(YevalSg2cYTdynamic_linkingQT);
  T3 = FUNFAB(fun_24,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T4 = FUNFAB(fun_25,1,x_3133F7136);
  T2 = with_cleanup(T3,T4);
  T1 = T2;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_27) {
  P tmpF7137;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF7137 = T1;
  if (tmpF7137 != YPfalse) {
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
  P out_portF7143;
  P prgF7142;
  P out_fileF7141;
  P fileF7140;
  P nameF7139;
  P modF7138;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYenvironment_module),env_);
  modF7138 = T1;
  T4 = CALL0(1,VARREF(YgooSsystemYprocess_id));
  T6 = CALL2(1,VARREF(YgooSmathYA),VARREF(YevalSg2cYTtmp_file_counterT),YPint((P)1));
  T5 = VARSET(YevalSg2cYTtmp_file_counterT,T6);
  T3 = CALL3(1,VARREF(YgooSruntimeYmsg_to_str),LITREF(lit_35),T4,T5);
  nameF7139 = T3;
  T8 = CALL1(1,VARREF(YgooSsystemYadd_tmp_path),nameF7139);
  fileF7140 = T8;
  T10 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF7140);
  out_fileF7141 = T10;
  T12 = CALL2(1,VARREF(YevalSg2cYcompute_program),ast_,env_);
  prgF7142 = T12;
  out_portF7143 = YPfalse;
  out_portF7143 = BOXFAB(out_portF7143);
  T15 = FUNFAB(fun_26,5,out_portF7143,out_fileF7141,prgF7142,ast_,modF7138);
  T16 = FUNFAB(fun_27,1,out_portF7143);
  T14 = with_cleanup(T15,T16);
  T11 = fileF7140;
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
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),name_,LITREF(lit_39));
  T2 = (P)YPsu(T3);
  (P)YgooSsystemYPcompile(T0,T2);
  T6 = CALL2(1,VARREF(YgooSmacrosYcat),name_,LITREF(lit_40));
  T5 = (P)YPsu(T6);
  T4 = (P)YgooSsystemYPload(T5);
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(fun_g2c_eval_31) {
  P exp_,env_;
  P nameF7144;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(exp_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_exp),exp_,env_);
  nameF7144 = T1;
  T2 = CALL1(1,VARREF(YevalSg2cYcompile_load),nameF7144);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_eval_32) {
  P ast_,env_;
  P nameF7145;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_ast),ast_,env_);
  nameF7145 = T1;
  T2 = CALL1(1,VARREF(YevalSg2cYcompile_load),nameF7145);
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
  T0 = CALL2(1,VARREF(YevalSg2cYg2c_def_app),LITREF(lit_45),LITREF(lit_31));
  VARSET(YevalSg2cYTg2c_appT,T0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_compute_ast_35) {
  P filename_,ct_env_;
  P astF7147;
  P sexprF7146;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(filename_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalStopYread_file),filename_);
  sexprF7146 = T1;
  T2 = (P)YPsu(LITREF(lit_49));
  (P)YevalSg2cYPprint_cpu_usage(T2);
  T4 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),sexprF7146,ct_env_,YPfalse);
  astF7147 = T4;
  T5 = (P)YPsu(LITREF(lit_50));
  (P)YevalSg2cYPprint_cpu_usage(T5);
  T3 = astF7147;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_compute_program_36) {
  P e_,env_;
  P fltF7152;
  P prgF7151;
  P lftF7150;
  P anaF7149;
  P boxF7148;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),e_);
  boxF7148 = T1;
  T2 = (P)YPsu(LITREF(lit_53));
  (P)YevalSg2cYPprint_cpu_usage(T2);
  T4 = CALL1(1,VARREF(YevalSast_linearizeYanalyze_ast),boxF7148);
  anaF7149 = T4;
  T5 = (P)YPsu(LITREF(lit_54));
  (P)YevalSg2cYPprint_cpu_usage(T5);
  T7 = CALL1(1,VARREF(YevalSast_linearizeYliftX),anaF7149);
  lftF7150 = T7;
  T8 = (P)YPsu(LITREF(lit_55));
  (P)YevalSg2cYPprint_cpu_usage(T8);
  T10 = CALL1(1,VARREF(YevalSast_linearizeYextract_thingsX),lftF7150);
  prgF7151 = T10;
  T11 = (P)YPsu(LITREF(lit_56));
  (P)YevalSg2cYPprint_cpu_usage(T11);
  T13 = CALL3(1,VARREF(YevalSast_linearizeYclosurize_mainX),prgF7151,env_,YPint((P)64));
  fltF7152 = T13;
  T14 = (P)YPsu(LITREF(lit_57));
  (P)YevalSg2cYPprint_cpu_usage(T14);
  CALL1(1,VARREF(YevalSast_linearizeYgather_temporariesX),fltF7152);
  T15 = (P)YPsu(LITREF(lit_58));
  (P)YevalSg2cYPprint_cpu_usage(T15);
  CALL2(1,VARREF(YevalSast_linearizeYregister_allocateX),fltF7152,YPfalse);
  T16 = (P)YPsu(LITREF(lit_59));
  (P)YevalSg2cYPprint_cpu_usage(T16);
  T12 = prgF7151;
  T9 = T12;
  T6 = T9;
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_c_module_37) {
  P code_out_,e_,prg_,mod_;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(e_, 1);
  ARG(prg_, 2);
  ARG(mod_, 3);
loop:
  CALL2(1,VARREF(YevalSg2cYgenerate_header),code_out_,e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_global_environment),code_out_,mod_);
  T0 = CALL1(1,VARREF(YevalSast_linearizeYprogram_quotations),prg_);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation_forwards),code_out_,T0);
  T1 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),prg_);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_forwards),code_out_,T1);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),prg_);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_bodies),code_out_,T2);
  T3 = CALL1(1,VARREF(Ynot),DYNREF(YevalSg2cYTdynamic_linkingQT));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YevalSg2cYgenerate_module_info),code_out_,mod_);
  } else {
  }
  T5 = CALL1(1,VARREF(YevalSast_linearizeYprogram_form),prg_);
  CALL3(1,VARREF(YevalSg2cYgenerate_module_init),code_out_,mod_,T5);
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
  CALL2(1,VARREF(YevalSg2cYgenerate_header),T1,YPfalse);
  T2 = BOXVAL(FREEREF(0));
  CALL2(1,VARREF(YevalSg2cYgenerate_main),T2,FREEREF(2));
  T4 = BOXVAL(FREEREF(0));
  T3 = CALL1(1,VARREF(YevalSg2cYgenerate_trailer),T4);
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_39) {
  P tmpF7153;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF7153 = T1;
  if (tmpF7153 != YPfalse) {
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
  P out_portF7157;
  P out_nameF7156;
  P init_nameF7155;
  P appnameF7154;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF7154 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF7154,LITREF(lit_64));
  init_nameF7155 = T3;
  T6 = CALL1(1,VARREF(YgooSsystemYc_filename),init_nameF7155);
  T5 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF7154,T6);
  out_nameF7156 = T5;
  out_portF7157 = YPfalse;
  out_portF7157 = BOXFAB(out_portF7157);
  T9 = FUNFAB(fun_38,3,out_portF7157,out_nameF7156,mod_);
  T10 = FUNFAB(fun_39,1,out_portF7157);
  T8 = with_cleanup(T9,T10);
  T4 = YPfalse;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_put_obj_41) {
  P name_;
  P x_3139F7158;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = BOXVAL(FREEREF(0));
  x_3139F7158 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_3139F7158,LITREF(lit_75));
  T3 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  T2 = CALL1(1,VARREF(YgooSsystemYobj_filename),T3);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3139F7158,T2);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_3139F7158,LITREF(lit_76));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_42) {
  P name_;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T4 = CALL1(1,VARREF(YgooStypesYlen),name_);
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)2));
  T2 = CALL3(1,VARREF(YgooScolsSseqYsub),name_,YPint((P)0),T3);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T2);
  T0 = CALL1(0,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_43) {
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

FUNCODEDEF(fun_44) {
  P mod_;
  P put_objF7159;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T1 = FUNSHELL(1,fun_put_obj_41,1);
  put_objF7159 = T1;
  FUNINIT(put_objF7159, 1,FREEREF(0));
  T2 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  CALL1(0,put_objF7159,T2);
  T4 = FUNFAB(fun_42,1,put_objF7159);
  T6 = fun_43;
  T7 = CALL1(1,VARREF(YevalSastYmodule_uses_c_files),mod_);
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),T6,T7);
  T3 = CALL2(1,VARREF(YgooSmacrosYdo),T4,T5);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_45) {
  P x_3143F7167;
  P x_3142F7166;
  P x_3141F7165;
  P x_3140F7164;
  P x_3138F7163;
  P x_3137F7162;
  P x_3136F7161;
  P x_3135F7160;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T1 = BOXVAL(FREEREF(0));
  x_3135F7160 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_3135F7160,LITREF(lit_68));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3135F7160,FREEREF(2));
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_3135F7160,LITREF(lit_69));
  T3 = BOXVAL(FREEREF(0));
  x_3136F7161 = T3;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3136F7161,VARREF(YgooSsystemYTc_extensionT));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3136F7161,VARREF(YgooSsystemYTobj_extensionT));
  CALL2(1,VARREF(YgooSioSportYputs),x_3136F7161,LITREF(lit_70));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3136F7161,FREEREF(2));
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_3136F7161,LITREF(lit_71));
  T5 = BOXVAL(FREEREF(0));
  x_3137F7162 = T5;
  T6 = CALL2(1,VARREF(YgooSioSportYputs),x_3137F7162,LITREF(lit_72));
  T7 = BOXVAL(FREEREF(0));
  x_3138F7163 = T7;
  T8 = CALL2(1,VARREF(YgooSioSportYputs),x_3138F7163,LITREF(lit_73));
  T9 = FUNFAB(fun_44,1,FREEREF(0));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T9,FREEREF(3));
  T10 = BOXVAL(FREEREF(0));
  x_3140F7164 = T10;
  CALL2(1,VARREF(YgooSioSportYputs),x_3140F7164,LITREF(lit_78));
  T11 = CALL1(1,VARREF(YgooSsystemYobj_filename),FREEREF(4));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3140F7164,T11);
  T12 = CALL2(1,VARREF(YgooSioSportYputs),x_3140F7164,LITREF(lit_79));
  T13 = BOXVAL(FREEREF(0));
  x_3141F7165 = T13;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3141F7165,FREEREF(5));
  T14 = CALL2(1,VARREF(YgooSioSportYputs),x_3141F7165,LITREF(lit_80));
  T15 = BOXVAL(FREEREF(0));
  x_3142F7166 = T15;
  CALL2(1,VARREF(YgooSioSportYputs),x_3142F7166,LITREF(lit_81));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3142F7166,FREEREF(5));
  T16 = CALL2(1,VARREF(YgooSioSportYputs),x_3142F7166,LITREF(lit_82));
  T18 = BOXVAL(FREEREF(0));
  x_3143F7167 = T18;
  CALL2(1,VARREF(YgooSioSportYputs),x_3143F7167,LITREF(lit_83));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3143F7167,FREEREF(5));
  T19 = CALL2(1,VARREF(YgooSioSportYputs),x_3143F7167,LITREF(lit_84));
  T17 = T19;
UNLINK_STACK();
  QRET(T17);
}

FUNCODEDEF(fun_46) {
  P tmpF7168;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF7168 = T1;
  if (tmpF7168 != YPfalse) {
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

FUNCODEDEF(fun_generate_makefile_47) {
  P loader_;
  P code_outF7174;
  P out_nameF7173;
  P sepF7172;
  P exe_nameF7171;
  P init_nameF7170;
  P appnameF7169;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF7169 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF7169,LITREF(lit_66));
  init_nameF7170 = T3;
  T5 = CALL1(1,VARREF(YgooSsystemYexe_filename),appnameF7169);
  exe_nameF7171 = T5;
  sepF7172 = VARREF(YgooSsystemYTpath_separatorT);
  T8 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF7169,LITREF(lit_67));
  out_nameF7173 = T8;
  code_outF7174 = YPfalse;
  code_outF7174 = BOXFAB(code_outF7174);
  T12 = FUNFAB(fun_45,6,code_outF7174,out_nameF7173,sepF7172,loader_,init_nameF7170,exe_nameF7171);
  T13 = FUNFAB(fun_46,1,code_outF7174);
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

FUNCODEDEF(fun_pp_48) {
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

FUNCODEDEF(fun_generate_header_49) {
  P code_out_,e_;
  P x_3146F7177;
  P x_3145F7176;
  P x_3144F7175;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(e_, 1);
loop:
  x_3144F7175 = code_out_;
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_3144F7175,LITREF(lit_87));
  x_3145F7176 = code_out_;
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_3145F7176,LITREF(lit_88));
  if (DYNREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    x_3146F7177 = code_out_;
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_3146F7177,LITREF(lit_89));
    T3 = T4;
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_generate_trailer_50) {
  P code_out_;
  P x_3147F7178;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(code_out_, 0);
loop:
  x_3147F7178 = code_out_;
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_3147F7178,LITREF(lit_91));
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_51) {
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

FUNCODEDEF(fun_generate_global_environment_52) {
  P code_out_,mod_;
  P x_3148F7179;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  x_3148F7179 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_3148F7179,LITREF(lit_93));
  T0 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3148F7179,T0);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_3148F7179,LITREF(lit_94));
  T3 = FUNFAB(fun_51,2,code_out_,mod_);
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T2 = CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T3,T4);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_generate_global_binding_53) {
  P code_out_,importedQ_,gb_;
  P x_3151F7186;
  P x_3150F7185;
  P x_3149F7184;
  P nameF7183;
  P tmpF7182;
  P tmpF7181;
  P kindF7180;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1,a2,a3;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(importedQ_, 1);
  ARG(gb_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),gb_);
  kindF7180 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),kindF7180,LITREF(lit_99));
  tmpF7181 = T4;
  if (tmpF7181 != YPfalse) {
    T5 = tmpF7181;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),kindF7180,LITREF(lit_100));
    tmpF7182 = T7;
    if (tmpF7182 != YPfalse) {
      T8 = tmpF7182;
    } else {
      T9 = CALL2(1,VARREF(YgooSmacrosYEE),kindF7180,LITREF(lit_101));
      T8 = T9;
    }
    T6 = T8;
    T5 = T6;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T11 = CALL1(1,VARREF(YevalSastYbinding_name),gb_);
    nameF7183 = T11;
    x_3149F7184 = kindF7180;
    x_3150F7185 = VARREF(YgooSmacrosYEE);
    T15 = CALL2(1,x_3150F7185,x_3149F7184,LITREF(lit_100));
    if (T15 != YPfalse) {
      T14 = LITREF(lit_102);
    } else {
      T17 = CALL2(1,x_3150F7185,x_3149F7184,LITREF(lit_101));
      if (T17 != YPfalse) {
        T16 = LITREF(lit_103);
      } else {
        T16 = LITREF(lit_104);
      }
      T14 = T16;
    }
    T13 = T14;
    T12 = T13;
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,T12);
    x_3151F7186 = code_out_;
    if (importedQ_ != YPfalse) {
      T19 = LITREF(lit_105);
    } else {
      T19 = LITREF(lit_106);
    }
    CALL2(1,VARREF(YgooSioSwriteYemit),x_3151F7186,T19);
    CALL2(1,VARREF(YgooSioSportYputs),x_3151F7186,LITREF(lit_107));
    T20 = CALL1(1,VARREF(YevalSg2cYmangle_binding),gb_);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_3151F7186,T20);
    CALL2(1,VARREF(YgooSioSportYputs),x_3151F7186,LITREF(lit_108));
    T22 = CALL1(1,VARREF(YevalSastYbinding_module_name),gb_);
    T21 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T22);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_3151F7186,T21);
    CALL2(1,VARREF(YgooSioSportYputs),x_3151F7186,LITREF(lit_109));
    T23 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),nameF7183);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_3151F7186,T23);
    T24 = CALL2(1,VARREF(YgooSioSportYputs),x_3151F7186,LITREF(lit_110));
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

FUNCODEDEF(fun_loop_54) {
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
  P loopF7189;
  P stringF7188;
  P buffer_sizeF7187;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(buffer_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),buffer_);
  check_type(T1,VARREF(YLintG));
  buffer_sizeF7187 = T1;
  T3 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YLstrG),buffer_sizeF7187);
  check_type(T3,VARREF(YLstrG));
  stringF7188 = T3;
  T4 = FUNSHELL(1,fun_loop_54,4);
  loopF7189 = T4;
  FUNINIT(loopF7189, 4,buffer_sizeF7187,buffer_,stringF7188,loopF7189);
  T5 = CALL1(0,loopF7189,YPint((P)0));
  T2 = stringF7188;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_56) {
  P i_;
  P encF7191;
  P cF7190;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(1),i_);
    cF7190 = T4;
    T7 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),cF7190);
    T6 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDc_escapes),T7);
    encF7191 = T6;
    T8 = CALL2(1,VARREF(YgooSmathYE),encF7191,YPfalse);
    if (T8 != YPfalse) {
      T9 = CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),cF7190);
    } else {
      T10 = CALL2(1,VARREF(YgooScolsSseqxYcatX),VARREF(YevalSg2cYTmangle_bufferT),encF7191);
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

FUNCODEDEF(fun_mangle_string_literal_57) {
  P str_;
  P loopF7193;
  P lenF7192;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(str_, 0);
loop:
  CALL2(1,VARREF(YgooScolsScolxYlen_setter),YPint((P)0),VARREF(YevalSg2cYTmangle_bufferT));
  T1 = CALL1(1,VARREF(YgooStypesYlen),str_);
  lenF7192 = T1;
  T3 = FUNSHELL(1,fun_loop_56,3);
  loopF7193 = T3;
  FUNINIT(loopF7193, 3,lenF7192,str_,loopF7193);
  T4 = CALL1(0,loopF7193,YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_string_literal_58) {
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

FUNCODEDEF(fun_process_integer_59) {
  P number_,index_;
  P resultF7199;
  P resultF7198;
  P digitF7197;
  P remainderF7196;
  P quotientF7195;
  P tup57F7194;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2;
LINK_STACK();
  ARG(number_, 0);
  ARG(index_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYtruncS),number_,YPint((P)10));
  tup57F7194 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup57F7194,YPint((P)0));
  check_type(T3,VARREF(YLintG));
  quotientF7195 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup57F7194,YPint((P)1));
  check_type(T5,VARREF(YLintG));
  remainderF7196 = T5;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDnumber_characters),remainderF7196);
  check_type(T7,VARREF(YLchrG));
  digitF7197 = T7;
  T9 = CALL2(1,VARREF(YgooSmathYE),quotientF7195,YPint((P)0));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),index_);
    check_type(T11,VARREF(YgooScolsSvecYLvecG));
    resultF7198 = T11;
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),digitF7197,resultF7198,YPint((P)0));
    T10 = resultF7198;
    T8 = T10;
  } else {
    T14 = CALL2(1,VARREF(YgooSmathYA),index_,YPint((P)1));
    T13 = CALL2(1,FREEREF(0),quotientF7195,T14);
    check_type(T13,VARREF(YgooScolsSvecYLvecG));
    resultF7199 = T13;
    T16 = CALL1(1,VARREF(YgooStypesYlen),resultF7199);
    T15 = CALL2(1,VARREF(YgooSmathY_),T16,index_);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),digitF7197,resultF7199,T15);
    T12 = resultF7199;
    T8 = T12;
  }
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_integer_60) {
  P number_;
  P process_integerF7200;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(number_, 0);
loop:
  T2 = FUNSHELL(1,fun_process_integer_59,1);
  process_integerF7200 = T2;
  FUNINIT(process_integerF7200, 1,process_integerF7200);
  T3 = CALL2(1,process_integerF7200,number_,YPint((P)1));
  T1 = T3;
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_3153_61) {
  P x_3152_;
  P iF7201;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_3152_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3152_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3152_);
    iF7201 = T4;
    T6 = CALL1(1,VARREF(YevalSg2cYmangle_integer),iF7201);
    T5 = CALL3(1,VARREF(YgooSmacrosYcat),VARREF(YevalSg2cYDescape_separator),T6,VARREF(YevalSg2cYDescape_separator));
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,FREEREF(0),iF7201);
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3152_);
    a1 = T8;
    x_3152_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3155_62) {
  P x_3154_;
  P mangleF7202;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_3154_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3154_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3154_);
    mangleF7202 = T4;
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),mangleF7202,YPint((P)1));
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),mangleF7202,YPint((P)0));
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T7);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,FREEREF(0),T6);
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3154_);
    a1 = T9;
    x_3154_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3157_63) {
  P x_3156_;
  P iF7203;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(x_3156_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3156_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3156_);
    iF7203 = T4;
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF7203);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,FREEREF(0),iF7203);
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3156_);
    a1 = T7;
    x_3156_ = a1;
    goto loop;
    T3 = T6;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3159_64) {
  P x_3158_;
  P iF7204;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(x_3158_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3158_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3158_);
    iF7204 = T4;
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF7204);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,FREEREF(0),iF7204);
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3158_);
    a1 = T7;
    x_3158_ = a1;
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

FUNCODEDEF(fun_x_3161_66) {
  P x_3160_;
  P cF7205;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_3160_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3160_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3160_);
    cF7205 = T4;
    T7 = CALL1(1,VARREF(YgooSmathYto_lower),cF7205);
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T7);
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDname_mangler_table),T6);
    CALL2(1,VARREF(YgooScolsScolxYaddX),FREEREF(0),T5);
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3160_);
    a1 = T9;
    x_3160_ = a1;
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
  P x_3161F7206;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(buf_, 0);
  ARG(name_, 1);
loop:
  T0 = FUNSHELL(1,fun_x_3161_66,2);
  x_3161F7206 = T0;
  FUNINIT(x_3161F7206, 2,buf_,x_3161F7206);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),name_);
  T1 = CALL1(0,x_3161F7206,T2);
UNLINK_STACK();
  QRET(buf_);
}

FUNCODEDEF(fun_mangle_raw_name_68) {
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

FUNCODEDEF(fun_mangle_raw_name_69) {
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

FUNCODEDEF(fun_mangle_local_name_70) {
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

FUNCODEDEF(fun_mangle_local_name_71) {
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

FUNCODEDEF(fun_x_3165_72) {
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

FUNCODEDEF(fun_73) {
  P return_;
  P x_3164F7213;
  P x_3164F7212;
  P x_3164F7211;
  P valueF7210;
  P placeF7209;
  P x_3164F7208;
  P x_3165F7207;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_3165_72,1);
  x_3165F7207 = T1;
  FUNINIT(x_3165F7207, 1,return_);
  x_3164F7208 = FREEREF(0);
  placeF7209 = YPfalse;
  placeF7209 = BOXFAB(placeF7209);
  valueF7210 = YPfalse;
  valueF7210 = BOXFAB(valueF7210);
  T7 = CALL2(1,VARREF(YisaQ),x_3164F7208,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_3164F7208,LITREF(lit_172),x_3165F7207);
    x_3164F7211 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3164F7211,x_3165F7207);
    BOXVAL(placeF7209) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_3164F7211);
    x_3164F7212 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3164F7212,x_3165F7207);
    BOXVAL(valueF7210) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_3164F7212);
    x_3164F7213 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3164F7213,x_3165F7207);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_3165F7207,LITREF(lit_173),x_3164F7208);
  }
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_174));
  T21 = BOXVAL(placeF7209);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_175));
  T26 = BOXVAL(placeF7209);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T28 = BOXVAL(valueF7210);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T27,Ynil);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T18 = CALL4(1,VARREF(YgooSmacrosYcat),T19,T20,T22,Ynil);
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_74) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_73,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_75) {
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
  P loopF7215;
  P lenF7214;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(buf_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),name_);
  lenF7214 = T1;
  T3 = FUNSHELL(1,fun_loop_75,4);
  loopF7215 = T3;
  FUNINIT(loopF7215, 4,lenF7214,buf_,name_,loopF7215);
  T4 = CALL1(0,loopF7215,YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_module_into_77) {
  P buf_,mod_;
  P nameF7217;
  P tmpF7216;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(buf_, 0);
  ARG(mod_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYmodule_mangled_name),mod_);
  tmpF7216 = T2;
  if (tmpF7216 != YPfalse) {
    T3 = tmpF7216;
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
  nameF7217 = T1;
  T10 = CALL2(1,VARREF(YevalSg2cYbuf_cat2X),buf_,nameF7217);
  T0 = T10;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_global_name_78) {
  P mod_,name_;
  P tmpF7218;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
loop:
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),mod_,VARREF(YevalSastYDgoo_boot_module_name));
  tmpF7218 = T2;
  if (tmpF7218 != YPfalse) {
    T3 = tmpF7218;
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

FUNCODEDEF(fun_mangle_global_name_79) {
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
  CALL2(1,VARREF(YevalSg2cYbuf_cat2X),VARREF(YevalSg2cYTmangle_bufferT),LITREF(lit_181));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_integer),name_);
  CALL2(1,VARREF(YevalSg2cYbuf_cat2X),VARREF(YevalSg2cYTmangle_bufferT),T0);
  T1 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_mangle_binding_82) {
  P binding_;
  P tmpF7219;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),binding_);
  tmpF7219 = T1;
  if (tmpF7219 != YPfalse) {
    T2 = tmpF7219;
  } else {
    T6 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),T6,LITREF(lit_183));
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

FUNCODEDEF(fun_mangle_binding_84) {
  P binding_;
  P tmpF7220;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),binding_);
  tmpF7220 = T1;
  if (tmpF7220 != YPfalse) {
    T2 = tmpF7220;
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

FUNCODEDEF(fun_mangle_binding_85) {
  P binding_;
  P tmpF7221;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),binding_);
  tmpF7221 = T1;
  if (tmpF7221 != YPfalse) {
    T2 = tmpF7221;
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

FUNCODEDEF(fun_x_3169_86) {
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

FUNCODEDEF(fun_87) {
  P return_;
  P out_varF7233;
  P x_3168F7232;
  P x_3168F7231;
  P x_3168F7230;
  P x_3168F7229;
  P x_3168F7228;
  P x_3168F7227;
  P bodyF7226;
  P clausesF7225;
  P out_valF7224;
  P x_3168F7223;
  P x_3169F7222;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_3169_86,1);
  x_3169F7222 = T1;
  FUNINIT(x_3169F7222, 1,return_);
  x_3168F7223 = FREEREF(0);
  out_valF7224 = YPfalse;
  out_valF7224 = BOXFAB(out_valF7224);
  clausesF7225 = YPfalse;
  clausesF7225 = BOXFAB(clausesF7225);
  bodyF7226 = YPfalse;
  bodyF7226 = BOXFAB(bodyF7226);
  T9 = CALL2(1,VARREF(YisaQ),x_3168F7223,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_3168F7223,LITREF(lit_187),x_3169F7222);
    x_3168F7227 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3168F7227,x_3169F7222);
    BOXVAL(out_valF7224) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_3168F7227);
    x_3168F7228 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_3168F7228,x_3169F7222);
    x_3168F7229 = T16;
    BOXVAL(clausesF7225) = x_3168F7229;
    x_3168F7230 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3168F7230,x_3169F7222);
    T17 = T18;
    T19 = CALL1(1,VARREF(Ytail),x_3168F7228);
    x_3168F7231 = T19;
    BOXVAL(bodyF7226) = x_3168F7231;
    x_3168F7232 = Ynil;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3168F7232,x_3169F7222);
    T20 = T21;
    T15 = T20;
    T12 = T15;
    T10 = T12;
  } else {
    T22 = CALL2(1,x_3169F7222,LITREF(lit_173),x_3168F7223);
  }
  T24 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF7233 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_188));
  T31 = CALL1(1,VARREF(Ylst),out_varF7233);
  T33 = BOXVAL(out_valF7224);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T28 = CALL2(1,VARREF(YgooSmacrosYcat),T29,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_189));
  T39 = BOXVAL(clausesF7225);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_190));
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_191));
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_192));
  T49 = CALL1(1,VARREF(Ylst),YPtrue);
  T47 = CALL3(1,VARREF(YgooSmacrosYcat),T48,T49,Ynil);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_192));
  T53 = CALL1(1,VARREF(Ylst),YPfalse);
  T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T53,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T44 = CALL4(1,VARREF(YgooSmacrosYcat),T45,T46,T50,Ynil);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T38 = CALL3(1,VARREF(YgooSmacrosYcat),T39,T40,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_193));
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_190));
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_194));
  T61 = CALL1(1,VARREF(Ylst),out_varF7233);
  T62 = CALL1(1,VARREF(Ylst),YPchr((P)44));
  T59 = CALL4(1,VARREF(YgooSmacrosYcat),T60,T61,T62,Ynil);
  T58 = CALL1(1,VARREF(Ylst),T59);
  T55 = CALL4(1,VARREF(YgooSmacrosYcat),T56,T57,T58,Ynil);
  T54 = CALL1(1,VARREF(Ylst),T55);
  T63 = BOXVAL(bodyF7226);
  T35 = CALL5(1,VARREF(YgooSmacrosYcat),T36,T37,T54,T63,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T27,T34,Ynil);
  T23 = T25;
  T7 = T23;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_88) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_87,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3173_89) {
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

FUNCODEDEF(fun_90) {
  P return_;
  P out_varF7243;
  P x_3172F7242;
  P x_3172F7241;
  P x_3172F7240;
  P x_3172F7239;
  P x_3172F7238;
  P bodyF7237;
  P out_valF7236;
  P x_3172F7235;
  P x_3173F7234;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_3173_89,1);
  x_3173F7234 = T1;
  FUNINIT(x_3173F7234, 1,return_);
  x_3172F7235 = FREEREF(0);
  out_valF7236 = YPfalse;
  out_valF7236 = BOXFAB(out_valF7236);
  bodyF7237 = YPfalse;
  bodyF7237 = BOXFAB(bodyF7237);
  T7 = CALL2(1,VARREF(YisaQ),x_3172F7235,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_3172F7235,LITREF(lit_196),x_3173F7234);
    x_3172F7238 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_3172F7238,x_3173F7234);
    x_3172F7239 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3172F7239,x_3173F7234);
    BOXVAL(out_valF7236) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_3172F7239);
    x_3172F7240 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3172F7240,x_3173F7234);
    T12 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_3172F7238);
    x_3172F7241 = T16;
    BOXVAL(bodyF7237) = x_3172F7241;
    x_3172F7242 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3172F7242,x_3173F7234);
    T17 = T18;
    T10 = T17;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_3173F7234,LITREF(lit_173),x_3172F7235);
  }
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF7243 = T21;
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_188));
  T28 = CALL1(1,VARREF(Ylst),out_varF7243);
  T30 = BOXVAL(out_valF7236);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),T28,T29,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T25 = CALL2(1,VARREF(YgooSmacrosYcat),T26,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_194));
  T34 = CALL1(1,VARREF(Ylst),out_varF7243);
  T35 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T32 = CALL4(1,VARREF(YgooSmacrosYcat),T33,T34,T35,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T36 = BOXVAL(bodyF7237);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_194));
  T40 = CALL1(1,VARREF(Ylst),out_varF7243);
  T41 = CALL1(1,VARREF(Ylst),YPchr((P)41));
  T38 = CALL4(1,VARREF(YgooSmacrosYcat),T39,T40,T41,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T22 = CALLN(1,VARREF(YgooSmacrosYcat),6,T23,T24,T31,T36,T37,Ynil);
  T20 = T22;
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_91) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_90,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3177_92) {
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

FUNCODEDEF(fun_loop_93) {
  P forms_,body_,firstQ_;
  P tmpF7244;
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
    tmpF7244 = firstQ_;
    if (tmpF7244 != YPfalse) {
      T8 = tmpF7244;
    } else {
      T10 = CALL1(1,VARREF(Ylst),LITREF(lit_194));
      T11 = CALL1(1,VARREF(Ylst),FREEREF(0));
      T12 = CALL1(1,VARREF(Ylst),YPchr((P)44));
      T9 = CALL4(1,VARREF(YgooSmacrosYcat),T10,T11,T12,Ynil);
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

FUNCODEDEF(fun_94) {
  P return_;
  P loopF7255;
  P out_varF7254;
  P x_3176F7253;
  P x_3176F7252;
  P x_3176F7251;
  P x_3176F7250;
  P x_3176F7249;
  P bodyF7248;
  P out_valF7247;
  P x_3176F7246;
  P x_3177F7245;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_3177_92,1);
  x_3177F7245 = T1;
  FUNINIT(x_3177F7245, 1,return_);
  x_3176F7246 = FREEREF(0);
  out_valF7247 = YPfalse;
  out_valF7247 = BOXFAB(out_valF7247);
  bodyF7248 = YPfalse;
  bodyF7248 = BOXFAB(bodyF7248);
  T7 = CALL2(1,VARREF(YisaQ),x_3176F7246,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_3176F7246,LITREF(lit_198),x_3177F7245);
    x_3176F7249 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_3176F7249,x_3177F7245);
    x_3176F7250 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3176F7250,x_3177F7245);
    BOXVAL(out_valF7247) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_3176F7250);
    x_3176F7251 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3176F7251,x_3177F7245);
    T12 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_3176F7249);
    x_3176F7252 = T16;
    BOXVAL(bodyF7248) = x_3176F7252;
    x_3176F7253 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3176F7253,x_3177F7245);
    T17 = T18;
    T10 = T17;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_3177F7245,LITREF(lit_173),x_3176F7246);
  }
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF7254 = T21;
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_188));
  T28 = CALL1(1,VARREF(Ylst),out_varF7254);
  T30 = BOXVAL(out_valF7247);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),T28,T29,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T25 = CALL2(1,VARREF(YgooSmacrosYcat),T26,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_194));
  T34 = CALL1(1,VARREF(Ylst),out_varF7254);
  T35 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T32 = CALL4(1,VARREF(YgooSmacrosYcat),T33,T34,T35,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T37 = FUNSHELL(1,fun_loop_93,2);
  loopF7255 = T37;
  FUNINIT(loopF7255, 2,out_varF7254,loopF7255);
  T39 = BOXVAL(bodyF7248);
  T38 = CALL3(0,loopF7255,Ynil,T39,YPtrue);
  T36 = T38;
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_194));
  T43 = CALL1(1,VARREF(Ylst),out_varF7254);
  T44 = CALL1(1,VARREF(Ylst),YPchr((P)41));
  T41 = CALL4(1,VARREF(YgooSmacrosYcat),T42,T43,T44,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T22 = CALLN(1,VARREF(YgooSmacrosYcat),6,T23,T24,T31,T36,T40,Ynil);
  T20 = T22;
  T5 = T20;
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

FUNCODEDEF(fun_gen_result_96) {
  P e_,d_,code_out_;
  P tmpF7259;
  P x_3178F7258;
  P tmpF7257;
  P regF7256;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(d_, 1);
  ARG(code_out_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  regF7256 = T1;
  tmpF7257 = regF7256;
  if (tmpF7257 != YPfalse) {
    x_3178F7258 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_3178F7258,LITREF(lit_203));
    T6 = CALL1(1,VARREF(YgooSmathYnum_to_str),regF7256);
    CALL2(1,VARREF(YgooSioSportYputs),x_3178F7258,T6);
    T7 = CALL2(1,VARREF(YgooSioSportYputs),x_3178F7258,LITREF(lit_204));
    T5 = T7;
    tmpF7259 = T5;
    if (tmpF7259 != YPfalse) {
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

FUNCODEDEF(fun_x_3180_97) {
  P x_3179_;
  P iF7260;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_3179_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3179_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3179_);
    iF7260 = T4;
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_208));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3179_);
    a1 = T6;
    x_3179_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_depth_98) {
  P d_,code_out_;
  P x_3180F7261;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(d_, 0);
  ARG(code_out_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_3180_97,2);
  x_3180F7261 = T1;
  FUNINIT(x_3180F7261, 2,code_out_,x_3180F7261);
  T4 = CALL1(1,VARREF(YgooScolsSseqYbelow),d_);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T2 = CALL1(0,x_3180F7261,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3184_99) {
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

FUNCODEDEF(fun_100) {
  P return_;
  P x_3183F7272;
  P x_3183F7271;
  P x_3183F7270;
  P x_3183F7269;
  P x_3183F7268;
  P x_3183F7267;
  P bodyF7266;
  P code_outF7265;
  P dF7264;
  P x_3183F7263;
  P x_3184F7262;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_3184_99,1);
  x_3184F7262 = T1;
  FUNINIT(x_3184F7262, 1,return_);
  x_3183F7263 = FREEREF(0);
  dF7264 = YPfalse;
  dF7264 = BOXFAB(dF7264);
  code_outF7265 = YPfalse;
  code_outF7265 = BOXFAB(code_outF7265);
  bodyF7266 = YPfalse;
  bodyF7266 = BOXFAB(bodyF7266);
  T9 = CALL2(1,VARREF(YisaQ),x_3183F7263,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_3183F7263,LITREF(lit_210),x_3184F7262);
    x_3183F7267 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_3183F7267,x_3184F7262);
    x_3183F7268 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3183F7268,x_3184F7262);
    BOXVAL(dF7264) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_3183F7268);
    x_3183F7269 = T16;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3183F7269,x_3184F7262);
    BOXVAL(code_outF7265) = T18;
    T19 = CALL1(1,VARREF(Ytail),x_3183F7269);
    x_3183F7270 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3183F7270,x_3184F7262);
    T17 = T20;
    T14 = T17;
    T21 = CALL1(1,VARREF(Ytail),x_3183F7267);
    x_3183F7271 = T21;
    BOXVAL(bodyF7266) = x_3183F7271;
    x_3183F7272 = Ynil;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3183F7272,x_3184F7262);
    T22 = T23;
    T12 = T22;
    T10 = T12;
  } else {
    T24 = CALL2(1,x_3184F7262,LITREF(lit_173),x_3183F7263);
  }
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_211));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_205));
  T31 = BOXVAL(dF7264);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T33 = BOXVAL(code_outF7265);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T28 = CALL4(1,VARREF(YgooSmacrosYcat),T29,T30,T32,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T34 = BOXVAL(bodyF7266);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_212));
  T39 = BOXVAL(code_outF7265);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_213));
  T36 = CALL4(1,VARREF(YgooSmacrosYcat),T37,T38,T40,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T25 = CALL5(1,VARREF(YgooSmacrosYcat),T26,T27,T34,T35,Ynil);
  T7 = T25;
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
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_100,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3188_102) {
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

FUNCODEDEF(fun_103) {
  P return_;
  P x_3187F7285;
  P x_3187F7284;
  P x_3187F7283;
  P x_3187F7282;
  P x_3187F7281;
  P x_3187F7280;
  P x_3187F7279;
  P bodyF7278;
  P code_outF7277;
  P dF7276;
  P eF7275;
  P x_3187F7274;
  P x_3188F7273;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_3188_102,1);
  x_3188F7273 = T1;
  FUNINIT(x_3188F7273, 1,return_);
  x_3187F7274 = FREEREF(0);
  eF7275 = YPfalse;
  eF7275 = BOXFAB(eF7275);
  dF7276 = YPfalse;
  dF7276 = BOXFAB(dF7276);
  code_outF7277 = YPfalse;
  code_outF7277 = BOXFAB(code_outF7277);
  bodyF7278 = YPfalse;
  bodyF7278 = BOXFAB(bodyF7278);
  T11 = CALL2(1,VARREF(YisaQ),x_3187F7274,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_3187F7274,LITREF(lit_215),x_3188F7273);
    x_3187F7279 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_3187F7279,x_3188F7273);
    x_3187F7280 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3187F7280,x_3188F7273);
    BOXVAL(eF7275) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_3187F7280);
    x_3187F7281 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3187F7281,x_3188F7273);
    BOXVAL(dF7276) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_3187F7281);
    x_3187F7282 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3187F7282,x_3188F7273);
    BOXVAL(code_outF7277) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_3187F7282);
    x_3187F7283 = T24;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3187F7283,x_3188F7273);
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T26 = CALL1(1,VARREF(Ytail),x_3187F7279);
    x_3187F7284 = T26;
    BOXVAL(bodyF7278) = x_3187F7284;
    x_3187F7285 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3187F7285,x_3188F7273);
    T27 = T28;
    T14 = T27;
    T12 = T14;
  } else {
    T29 = CALL2(1,x_3188F7273,LITREF(lit_173),x_3187F7274);
  }
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_210));
  T35 = BOXVAL(dF7276);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T37 = BOXVAL(code_outF7277);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T36,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_201));
  T42 = BOXVAL(eF7275);
  T41 = CALL1(1,VARREF(Ylst),T42);
  T44 = BOXVAL(dF7276);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T46 = BOXVAL(code_outF7277);
  T45 = CALL1(1,VARREF(Ylst),T46);
  T39 = CALL5(1,VARREF(YgooSmacrosYcat),T40,T41,T43,T45,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T47 = BOXVAL(bodyF7278);
  T30 = CALL5(1,VARREF(YgooSmacrosYcat),T31,T32,T38,T47,Ynil);
  T9 = T30;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_104) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_103,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3192_105) {
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

FUNCODEDEF(fun_106) {
  P return_;
  P x_3191F7298;
  P x_3191F7297;
  P x_3191F7296;
  P x_3191F7295;
  P x_3191F7294;
  P x_3191F7293;
  P x_3191F7292;
  P bodyF7291;
  P code_outF7290;
  P dF7289;
  P eF7288;
  P x_3191F7287;
  P x_3192F7286;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_3192_105,1);
  x_3192F7286 = T1;
  FUNINIT(x_3192F7286, 1,return_);
  x_3191F7287 = FREEREF(0);
  eF7288 = YPfalse;
  eF7288 = BOXFAB(eF7288);
  dF7289 = YPfalse;
  dF7289 = BOXFAB(dF7289);
  code_outF7290 = YPfalse;
  code_outF7290 = BOXFAB(code_outF7290);
  bodyF7291 = YPfalse;
  bodyF7291 = BOXFAB(bodyF7291);
  T11 = CALL2(1,VARREF(YisaQ),x_3191F7287,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_3191F7287,LITREF(lit_217),x_3192F7286);
    x_3191F7292 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_3191F7292,x_3192F7286);
    x_3191F7293 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3191F7293,x_3192F7286);
    BOXVAL(eF7288) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_3191F7293);
    x_3191F7294 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3191F7294,x_3192F7286);
    BOXVAL(dF7289) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_3191F7294);
    x_3191F7295 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3191F7295,x_3192F7286);
    BOXVAL(code_outF7290) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_3191F7295);
    x_3191F7296 = T24;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3191F7296,x_3192F7286);
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T26 = CALL1(1,VARREF(Ytail),x_3191F7292);
    x_3191F7297 = T26;
    BOXVAL(bodyF7291) = x_3191F7297;
    x_3191F7298 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3191F7298,x_3192F7286);
    T27 = T28;
    T14 = T27;
    T12 = T14;
  } else {
    T29 = CALL2(1,x_3192F7286,LITREF(lit_173),x_3191F7287);
  }
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_218));
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_219));
  T36 = BOXVAL(eF7288);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T35,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_215));
  T43 = BOXVAL(eF7288);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T45 = BOXVAL(dF7289);
  T44 = CALL1(1,VARREF(Ylst),T45);
  T47 = BOXVAL(code_outF7290);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T41 = CALL4(1,VARREF(YgooSmacrosYcat),T42,T44,T46,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T48 = BOXVAL(bodyF7291);
  T38 = CALL4(1,VARREF(YgooSmacrosYcat),T39,T40,T48,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T30 = CALL4(1,VARREF(YgooSmacrosYcat),T31,T32,T37,Ynil);
  T9 = T30;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_107) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_106,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3194_108) {
  P x_3193_;
  P x_3195F7300;
  P qbF7299;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_3193_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3193_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3193_);
    qbF7299 = T4;
    x_3195F7300 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_3195F7300,LITREF(lit_225));
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),qbF7299);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_3195F7300,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_3195F7300,LITREF(lit_226));
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3193_);
    a1 = T8;
    x_3193_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_forwards_109) {
  P code_out_,qbT_;
  P x_3194F7301;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qbT_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_222));
  T1 = FUNSHELL(1,fun_x_3194_108,2);
  x_3194F7301 = T1;
  FUNINIT(x_3194F7301, 2,code_out_,x_3194F7301);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),qbT_);
  T2 = CALL1(0,x_3194F7301,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3197_110) {
  P x_3196_;
  P x_3198F7303;
  P qbF7302;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_3196_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3196_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3196_);
    qbF7302 = T4;
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(0));
    x_3198F7303 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_3198F7303,LITREF(lit_230));
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),qbF7302);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_3198F7303,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_3198F7303,LITREF(lit_231));
    T7 = CALL1(1,VARREF(YevalSastYbinding_info),qbF7302);
    CALL2(1,VARREF(YevalSg2cYgenerate_quotation),FREEREF(0),T7);
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_213));
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3196_);
    a1 = T9;
    x_3196_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotations_111) {
  P code_out_,qbT_;
  P x_3197F7304;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qbT_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_3197_110,2);
  x_3197F7304 = T1;
  FUNINIT(x_3197F7304, 2,code_out_,x_3197F7304);
  T4 = CALL1(1,VARREF(YgooScolsSseqYrev),qbT_);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T2 = CALL1(0,x_3197F7304,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_false_name_112) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_233));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_113) {
  P code_out_,qb_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qb_, 1);
loop:
  if (qb_ != YPfalse) {
    T2 = LITREF(lit_236);
  } else {
    T2 = LITREF(lit_237);
  }
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),T2);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_114) {
  P code_out_,qb_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qb_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_238));
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_115) {
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

FUNCODEDEF(fun_generate_quotation_116) {
  P code_out_,qb_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qb_, 1);
loop:
  T1 = FUNFAB(fun_115,1,code_out_);
  T0 = CALL3(1,VARREF(YevalSg2cYout_list_builder),T1,code_out_,qb_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_117) {
  P code_out_,x_;
  P x_3199F7305;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_3199F7305 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_239));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3199F7305,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_3199F7305,LITREF(lit_240));
  T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),x_);
  CALL2(1,VARREF(YgooSioSportYputs),x_3199F7305,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_3199F7305,LITREF(lit_241));
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_118) {
  P code_out_,x_;
  P x_3200F7306;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_3200F7306 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_242));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3200F7306,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_3200F7306,LITREF(lit_243));
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),x_);
  T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),T3);
  CALL2(1,VARREF(YgooSioSportYputs),x_3200F7306,T2);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_3200F7306,LITREF(lit_244));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_119) {
  P i_;
  P x_3202F7308;
  P x_3201F7307;
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
    x_3201F7307 = T4;
    x_3202F7308 = VARREF(YgooSmacrosYEE);
    T7 = CALL2(1,x_3202F7308,x_3201F7307,YPchr((P)115));
    if (T7 != YPfalse) {
      CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),i_);
      T8 = CALL1(1,FREEREF(1),YPfalse);
      T6 = T8;
    } else {
      T10 = CALL2(1,x_3202F7308,x_3201F7307,YPchr((P)100));
      if (T10 != YPfalse) {
        CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),i_);
        T11 = CALL1(1,FREEREF(1),YPfalse);
        T9 = T11;
      } else {
        T13 = CALL2(1,x_3202F7308,x_3201F7307,YPchr((P)120));
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

FUNCODEDEF(fun_120) {
  P done_;
  P loopF7309;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(done_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_119,3);
  loopF7309 = T1;
  FUNINIT(loopF7309, 3,FREEREF(0),done_,loopF7309);
  T4 = CALL1(1,VARREF(YgooStypesYlen),FREEREF(0));
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)1));
  T2 = CALL1(0,loopF7309,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_float_to_c_string_121) {
  P o_;
  P sF7310;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),o_);
  sF7310 = T1;
  T3 = FUNFAB(fun_120,1,sF7310);
  T2 = with_exit(T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_generate_quotation_122) {
  P code_out_,x_;
  P x_3203F7311;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_3203F7311 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_248));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3203F7311,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_3203F7311,LITREF(lit_249));
  T2 = CALL1(1,VARREF(YevalSg2cYfloat_to_c_string),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3203F7311,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_3203F7311,LITREF(lit_250));
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_123) {
  P code_out_,x_;
  P x_3204F7312;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_3204F7312 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_251));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3204F7312,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_3204F7312,LITREF(lit_252));
  T2 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3204F7312,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_3204F7312,LITREF(lit_253));
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3207_124) {
  P x_3206_;
  P eF7313;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_3206_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3206_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3206_);
    eF7313 = T4;
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_259));
    CALL2(1,VARREF(YevalSg2cYgenerate_quotation),FREEREF(0),eF7313);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3206_);
    a1 = T6;
    x_3206_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_125) {
  P code_out_,x_;
  P x_3207F7315;
  P x_3205F7314;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_3205F7314 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_3205F7314,LITREF(lit_254));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_255));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3205F7314,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_3205F7314,LITREF(lit_256));
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_3205F7314,T2);
  T3 = FUNSHELL(1,fun_x_3207_124,2);
  x_3207F7315 = T3;
  FUNINIT(x_3207F7315, 2,code_out_,x_3207F7315);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T4 = CALL1(0,x_3207F7315,T5);
  T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_260));
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_x_3210_126) {
  P x_3209_;
  P eF7316;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_3209_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3209_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3209_);
    eF7316 = T4;
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_266));
    CALL2(1,VARREF(YevalSg2cYgenerate_quotation),FREEREF(0),eF7316);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3209_);
    a1 = T6;
    x_3209_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_127) {
  P code_out_,x_;
  P x_3210F7318;
  P x_3208F7317;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_3208F7317 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_3208F7317,LITREF(lit_261));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_262));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3208F7317,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_3208F7317,LITREF(lit_263));
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_3208F7317,T2);
  T3 = FUNSHELL(1,fun_x_3210_126,2);
  x_3210F7318 = T3;
  FUNINIT(x_3210F7318, 2,code_out_,x_3210F7318);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T4 = CALL1(0,x_3210F7318,T5);
  T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_267));
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_generate_quotation_128) {
  P code_out_,x_;
  P x_3211F7319;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_3211F7319 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_268));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3211F7319,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_3211F7319,LITREF(lit_269));
  T2 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3211F7319,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_3211F7319,LITREF(lit_270));
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

FUNCODEDEF(fun_reference_Gc_130) {
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

FUNCODEDEF(fun_reference_Gc_131) {
  P v_,code_out_;
  P x_3214F7322;
  P x_3213F7321;
  P x_3212F7320;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(v_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),v_);
  x_3212F7320 = T1;
  x_3213F7321 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_3213F7321,x_3212F7320,LITREF(lit_183));
  if (T4 != YPfalse) {
    T3 = LITREF(lit_274);
  } else {
    T6 = CALL2(1,x_3213F7321,x_3212F7320,LITREF(lit_100));
    if (T6 != YPfalse) {
      T5 = LITREF(lit_275);
    } else {
      T8 = CALL2(1,x_3213F7321,x_3212F7320,LITREF(lit_101));
      if (T8 != YPfalse) {
        T7 = LITREF(lit_276);
      } else {
        T7 = LITREF(lit_277);
      }
      T5 = T7;
    }
    T3 = T5;
  }
  T2 = T3;
  T0 = T2;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T0);
  x_3214F7322 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_3214F7322,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),v_,code_out_);
  T10 = CALL2(1,VARREF(YgooSioSportYput),x_3214F7322,YPchr((P)41));
  T9 = T10;
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_to_c_132) {
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
    T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
    T3 = T6;
  } else {
    T3 = YPfalse;
  }
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_to_c_133) {
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

FUNCODEDEF(fun_gen_ref_134) {
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

FUNCODEDEF(fun_gen_ref_135) {
  P e_,code_out_;
  P x_3216F7324;
  P x_3215F7323;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_281));
  x_3215F7323 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_3215F7323,YPchr((P)40));
  x_3216F7324 = code_out_;
  T3 = CALL1(1,VARREF(YevalSast_linearizeYreference_offset),e_);
  T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),T3);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_3216F7324,T2);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_3215F7323,YPchr((P)41));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_136) {
  P e_,code_out_;
  P x_3217F7326;
  P regF7325;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  regF7325 = T1;
  if (regF7325 != YPfalse) {
    x_3217F7326 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_3217F7326,LITREF(lit_282));
    T5 = CALL1(1,VARREF(YgooSmathYnum_to_str),regF7325);
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_3217F7326,T5);
    T3 = T4;
    T2 = T3;
  } else {
    T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_283));
    T2 = T6;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_137) {
  P e_,code_out_;
  P x_3218F7327;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  x_3218F7327 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_3218F7327,LITREF(lit_284));
  T2 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_3218F7327,T2);
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_138) {
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

FUNCODEDEF(fun_gen_ref_139) {
  P e_,code_out_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYlast),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_ref),T1,code_out_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_140) {
  P e_,f_,d_,code_out_;
  P x_3220F7329;
  P x_3219F7328;
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
  x_3219F7328 = T2;
  x_3220F7329 = VARREF(YgooSmacrosYEE);
  T6 = CALL2(1,x_3220F7329,x_3219F7328,LITREF(lit_100));
  if (T6 != YPfalse) {
    T5 = LITREF(lit_285);
  } else {
    T8 = CALL2(1,x_3220F7329,x_3219F7328,LITREF(lit_101));
    if (T8 != YPfalse) {
      T10 = CALL2(1,VARREF(YisaQ),e_,VARREF(YevalSastYLdynamic_definitionG));
      if (T10 != YPfalse) {
        T9 = LITREF(lit_286);
      } else {
        T9 = LITREF(lit_287);
      }
      T7 = T9;
    } else {
      T7 = LITREF(lit_288);
    }
    T5 = T7;
  }
  T4 = T5;
  T1 = T4;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
  T11 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),T11,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_289));
  T12 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T12,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_290));
  T13 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
UNLINK_STACK();
  QRET(T13);
}

FUNCODEDEF(fun_to_c_141) {
  P e_,f_,d_,code_out_;
  P x_3221F7330;
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
      T4 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_291));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_292));
    x_3221F7330 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_3221F7330,YPchr((P)40));
    T6 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
    T5 = CALL1(1,VARREF(YevalSastYreference_binding),T6);
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),T5,code_out_);
    T7 = CALL2(1,VARREF(YgooSioSportYput),x_3221F7330,YPchr((P)41));
    T8 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
    T0 = T8;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_142) {
  P e_,f_,d_,code_out_;
  P x_3222F7331;
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
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_293));
    x_3222F7331 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_3222F7331,YPchr((P)40));
    T3 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
    T4 = CALL2(1,VARREF(YgooSioSportYput),x_3222F7331,YPchr((P)41));
    T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
    T1 = T5;
  } else {
    T1 = YPfalse;
  }
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_to_c_143) {
  P e_,f_,d_,code_out_;
  P x_3223F7332;
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
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_294));
  x_3223F7332 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_3223F7332,YPchr((P)40));
  T1 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T1,code_out_);
  T2 = CALL2(1,VARREF(YgooSioSportYput),x_3223F7332,YPchr((P)41));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_295));
  T3 = CALL1(1,VARREF(YevalSast_linearizeYbox_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(fun_to_c_144) {
  P e_,f_,d_,code_out_;
  P x_3224F7334;
  P bindingF7333;
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
  bindingF7333 = T1;
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF7333,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_296));
  x_3224F7334 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_3224F7334,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF7333,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_3224F7334,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_145) {
  P e_,f_,d_,code_out_;
  P x_3225F7335;
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
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_297));
  T1 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T1,code_out_);
  x_3225F7335 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_3225F7335,LITREF(lit_298));
  T2 = CALL0(1,VARREF(YevalSg2cYfalse_name));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3225F7335,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_3225F7335,LITREF(lit_299));
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
    T10 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
  } else {
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_300));
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
    T17 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
  } else {
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  T18 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_301));
UNLINK_STACK();
  QRET(T18);
}

FUNCODEDEF(fun_146) {
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

FUNCODEDEF(fun_to_c_147) {
  P e_,f_,d_,code_out_;
  P T0,T1;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = FUNFAB(fun_146,3,f_,d_,code_out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3227_148) {
  P x_3226_;
  P argF7336;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_3226_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3226_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3226_);
    argF7336 = T4;
    CALL4(1,VARREF(YevalSg2cYto_c),argF7336,FREEREF(0),FREEREF(1),FREEREF(2));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3226_);
    a1 = T6;
    x_3226_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3230_149) {
  P x_3229_,x_3228_;
  P x_3231F7340;
  P argF7339;
  P iF7338;
  P tmpF7337;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_3229_, 0);
  ARG(x_3228_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3229_);
  tmpF7337 = T3;
  if (tmpF7337 != YPfalse) {
    T4 = tmpF7337;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3228_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_3229_);
    iF7338 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_3228_);
    argF7339 = T9;
    CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(0),FREEREF(1));
    x_3231F7340 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_3231F7340,LITREF(lit_308));
    T10 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF7338);
    CALL2(1,VARREF(YgooSioSportYputs),x_3231F7340,T10);
    T11 = CALL2(1,VARREF(YgooSioSportYputs),x_3231F7340,LITREF(lit_309));
    CALL2(1,VARREF(YevalSg2cYgen_ref),argF7339,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_213));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3229_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3228_);
    a1 = T13;
    a2 = T14;
    x_3229_ = a1;
    x_3228_ = a2;
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

FUNCODEDEF(fun_x_3234_150) {
  P x_3233_,x_3232_;
  P x_3235F7344;
  P bindingF7343;
  P iF7342;
  P tmpF7341;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_3233_, 0);
  ARG(x_3232_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3233_);
  tmpF7341 = T3;
  if (tmpF7341 != YPfalse) {
    T4 = tmpF7341;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3232_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_3233_);
    iF7342 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_3232_);
    bindingF7343 = T9;
    CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF7343,FREEREF(1));
    x_3235F7344 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_3235F7344,LITREF(lit_313));
    T11 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF7342);
    T10 = CALL2(1,VARREF(YgooSioSportYputs),x_3235F7344,T11);
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_213));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3233_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3232_);
    a1 = T13;
    a2 = T14;
    x_3233_ = a1;
    x_3232_ = a2;
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

FUNCODEDEF(fun_generate_self_recursive_call_151) {
  P e_,f_,d_,code_out_;
  P x_3234F7347;
  P x_3230F7346;
  P x_3227F7345;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNSHELL(1,fun_x_3227_148,4);
  x_3227F7345 = T0;
  FUNINIT(x_3227F7345, 4,f_,d_,code_out_,x_3227F7345);
  T3 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T1 = CALL1(0,x_3227F7345,T2);
  T4 = FUNSHELL(1,fun_x_3230_149,3);
  x_3230F7346 = T4;
  FUNINIT(x_3230F7346, 3,d_,code_out_,x_3230F7346);
  T7 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)1));
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  T9 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),T9);
  T5 = CALL2(0,x_3230F7346,T6,T8);
  T10 = FUNSHELL(1,fun_x_3234_150,3);
  x_3234F7347 = T10;
  FUNINIT(x_3234F7347, 3,d_,code_out_,x_3234F7347);
  T13 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)1));
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  T15 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
  T14 = CALL1(1,VARREF(YgooScolsScolYenum),T15);
  T11 = CALL2(0,x_3234F7347,T12,T14);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_314));
  T16 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
UNLINK_STACK();
  QRET(T16);
}

FUNCODEDEF(fun_x_3237_152) {
  P x_3236_;
  P argF7348;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_3236_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3236_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3236_);
    argF7348 = T4;
    CALL4(1,VARREF(YevalSg2cYto_c),argF7348,FREEREF(0),FREEREF(1),FREEREF(2));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3236_);
    a1 = T6;
    x_3236_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3242_153) {
  P x_3241_;
  P argF7349;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_3241_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3241_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3241_);
    argF7349 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgen_ref),argF7349,FREEREF(0));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3241_);
    a1 = T6;
    x_3241_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_154) {
  P e_,f_,d_,code_out_;
  P x_3242F7361;
  P x_3240F7360;
  P x_3239F7359;
  P tmpF7358;
  P x_3238F7357;
  P x_3237F7356;
  P nF7355;
  P tmpF7354;
  P tmpF7353;
  P tmpF7352;
  P tmpF7351;
  P functionF7350;
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
  functionF7350 = T1;
  T4 = CALL1(1,VARREF(YevalSastYapplication_tailQ),e_);
  tmpF7351 = T4;
  if (tmpF7351 != YPfalse) {
    T7 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_methodG));
    tmpF7352 = T7;
    if (tmpF7352 != YPfalse) {
      T11 = CALL1(1,VARREF(YevalSastYfunction_naryQ),f_);
      T10 = CALL1(1,VARREF(Ynot),T11);
      tmpF7353 = T10;
      if (tmpF7353 != YPfalse) {
        T14 = CALL2(1,VARREF(YisaQ),functionF7350,VARREF(YevalSast_linearizeYLfree_referenceG));
        tmpF7354 = T14;
        if (tmpF7354 != YPfalse) {
          T16 = CALL1(1,VARREF(YevalSast_linearizeYreference_selfQ),functionF7350);
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
    nF7355 = T19;
    T21 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
    CALL4(1,VARREF(YevalSg2cYto_c),T21,f_,d_,code_out_);
    T22 = FUNSHELL(1,fun_x_3237_152,4);
    x_3237F7356 = T22;
    FUNINIT(x_3237F7356, 4,f_,d_,code_out_,x_3237F7356);
    T25 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T24 = CALL1(1,VARREF(YgooScolsScolYenum),T25);
    T23 = CALL1(0,x_3237F7356,T24);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    x_3238F7357 = code_out_;
    T28 = CALL1(1,VARREF(Ynot),f_);
    tmpF7358 = T28;
    if (tmpF7358 != YPfalse) {
      T29 = tmpF7358;
    } else {
      T30 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_primitiveG));
      T29 = T30;
    }
    T27 = T29;
    if (T27 != YPfalse) {
      T26 = LITREF(lit_317);
    } else {
      T26 = LITREF(lit_104);
    }
    CALL2(1,VARREF(YgooSioSwriteYemit),x_3238F7357,T26);
    CALL2(1,VARREF(YgooSioSportYputs),x_3238F7357,LITREF(lit_318));
    T33 = CALL2(1,VARREF(YgooSmagYG),nF7355,VARREF(YevalSg2cYDnumber_call_templates));
    if (T33 != YPfalse) {
      T32 = LITREF(lit_319);
    } else {
      T32 = nF7355;
    }
    T31 = CALL2(1,VARREF(YgooSioSwriteYemit),x_3238F7357,T32);
    x_3239F7359 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_3239F7359,YPchr((P)40));
    T35 = CALL1(1,VARREF(YevalSastYapplication_knownQ),e_);
    if (T35 != YPfalse) {
      T34 = LITREF(lit_320);
    } else {
      T34 = LITREF(lit_321);
    }
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,T34);
    T36 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T36,code_out_);
    T37 = CALL2(1,VARREF(YgooSmagYG),nF7355,VARREF(YevalSg2cYDnumber_call_templates));
    if (T37 != YPfalse) {
      x_3240F7360 = code_out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_3240F7360,LITREF(lit_322));
      T39 = CALL2(1,VARREF(YgooSioSwriteYemit),x_3240F7360,nF7355);
      T38 = T39;
    } else {
    }
    T40 = FUNSHELL(1,fun_x_3242_153,2);
    x_3242F7361 = T40;
    FUNINIT(x_3242F7361, 2,code_out_,x_3242F7361);
    T43 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T42 = CALL1(1,VARREF(YgooScolsScolYenum),T43);
    T41 = CALL1(0,x_3242F7361,T42);
    T44 = CALL2(1,VARREF(YgooSioSportYput),x_3239F7359,YPchr((P)41));
    T45 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
    T18 = T45;
    T2 = T18;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3246_155) {
  P x_3245_,x_3244_;
  P xF7364;
  P firstQF7363;
  P tmpF7362;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_3245_, 0);
  ARG(x_3244_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3245_);
  tmpF7362 = T3;
  if (tmpF7362 != YPfalse) {
    T4 = tmpF7362;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3244_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_3245_);
    firstQF7363 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_3244_);
    xF7364 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF7363);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYgen_ref),xF7364,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3245_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3244_);
    a1 = T13;
    a2 = T14;
    x_3245_ = a1;
    x_3244_ = a2;
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

FUNCODEDEF(fun_156) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_157) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_to_c_158) {
  P e_,f_,d_,code_out_;
  P x_3246F7366;
  P x_3243F7365;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  x_3243F7365 = code_out_;
  T2 = FUNSHELL(1,fun_x_3246_155,3);
  x_3246F7366 = T2;
  FUNINIT(x_3246F7366, 3,x_3243F7365,code_out_,x_3246F7366);
  T6 = fun_156;
  T7 = fun_157;
  T5 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T6,T7);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),T5);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),e_);
  T3 = CALL2(0,x_3246F7366,T4,T8);
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3250_159) {
  P x_3249_,x_3248_,x_3247_;
  P x_3251F7372;
  P bindingF7371;
  P typeF7370;
  P initF7369;
  P tmpF7368;
  P tmpF7367;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_3249_, 0);
  ARG(x_3248_, 1);
  ARG(x_3247_, 2);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3249_);
  tmpF7367 = T3;
  if (tmpF7367 != YPfalse) {
    T4 = tmpF7367;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3248_);
    tmpF7368 = T6;
    if (tmpF7368 != YPfalse) {
      T7 = tmpF7368;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3247_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_3249_);
    initF7369 = T10;
    T12 = CALL1(1,VARREF(YgooScolsScolYnow),x_3248_);
    typeF7370 = T12;
    T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_3247_);
    bindingF7371 = T14;
    CALL4(1,VARREF(YevalSg2cYto_c),initF7369,FREEREF(0),FREEREF(1),FREEREF(2));
    T16 = CALL1(1,VARREF(YevalSast_linearizeYunconstrained_typeQ),typeF7370);
    T15 = CALL1(1,VARREF(Ynot),T16);
    if (T15 != YPfalse) {
      CALL4(1,VARREF(YevalSg2cYto_c),typeF7370,FREEREF(0),FREEREF(1),FREEREF(2));
      CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(1),FREEREF(2));
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(2),LITREF(lit_332));
      x_3251F7372 = FREEREF(2);
      CALL2(1,VARREF(YgooSioSportYput),x_3251F7372,YPchr((P)40));
      CALL2(1,VARREF(YevalSg2cYgen_ref),initF7369,FREEREF(2));
      CALL2(1,VARREF(YgooSioSportYput),x_3251F7372,YPchr((P)44));
      CALL2(1,VARREF(YevalSg2cYgen_ref),typeF7370,FREEREF(2));
      T17 = CALL2(1,VARREF(YgooSioSportYput),x_3251F7372,YPchr((P)41));
      T18 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(2),LITREF(lit_213));
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(1),FREEREF(2));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF7371,FREEREF(2));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(2),LITREF(lit_333));
    CALL2(1,VARREF(YevalSg2cYgen_ref),initF7369,FREEREF(2));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(2),LITREF(lit_213));
    T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3249_);
    T21 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3248_);
    T22 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3247_);
    a1 = T20;
    a2 = T21;
    a3 = T22;
    x_3249_ = a1;
    x_3248_ = a2;
    x_3247_ = a3;
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

FUNCODEDEF(fun_to_c_160) {
  P e_,f_,d_,code_out_;
  P x_3250F7373;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNSHELL(1,fun_x_3250_159,4);
  x_3250F7373 = T0;
  FUNINIT(x_3250F7373, 4,f_,d_,code_out_,x_3250F7373);
  T3 = CALL1(1,VARREF(YevalSastYfix_let_arguments),e_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T5 = CALL1(1,VARREF(YevalSastYfix_let_types),e_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),T5);
  T7 = CALL1(1,VARREF(YevalSastYfix_let_bindings),e_);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  T1 = CALL3(0,x_3250F7373,T2,T4,T6);
  T8 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T8,f_,d_,code_out_);
  T10 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T10 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    T11 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T11,code_out_);
    T12 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
    T9 = T12;
  } else {
    T9 = YPfalse;
  }
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_x_3254_161) {
  P x_3253_,x_3252_;
  P bindingF7376;
  P initF7375;
  P tmpF7374;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(x_3253_, 0);
  ARG(x_3252_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3253_);
  tmpF7374 = T3;
  if (tmpF7374 != YPfalse) {
    T4 = tmpF7374;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3252_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_3253_);
    initF7375 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_3252_);
    bindingF7376 = T9;
    CALL5(1,VARREF(YevalSg2cYfunshell_to_c),bindingF7376,initF7375,YPfalse,FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF7376,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_337));
    CALL2(1,VARREF(YevalSg2cYgen_ref),initF7375,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_213));
    T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3253_);
    T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3252_);
    a1 = T11;
    a2 = T12;
    x_3253_ = a1;
    x_3252_ = a2;
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

FUNCODEDEF(fun_to_c_162) {
  P e_,f_,d_,code_out_;
  P x_3254F7377;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNSHELL(1,fun_x_3254_161,3);
  x_3254F7377 = T0;
  FUNINIT(x_3254F7377, 3,d_,code_out_,x_3254F7377);
  T3 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T5 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),T5);
  T1 = CALL2(0,x_3254F7377,T2,T4);
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
    T13 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
    T10 = T13;
  } else {
    T10 = YPfalse;
  }
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_to_c_163) {
  P e_,f_,d_,code_out_;
  P x_3255F7378;
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
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_338));
  x_3255F7378 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_3255F7378,YPchr((P)40));
  T1 = CALL1(1,VARREF(YevalSastYbind_exit_main_fun),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T1,code_out_);
  T2 = CALL2(1,VARREF(YgooSioSportYput),x_3255F7378,YPchr((P)41));
  T3 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_to_c_164) {
  P e_,f_,d_,code_out_;
  P x_3256F7379;
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
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_339));
  x_3256F7379 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_3256F7379,YPchr((P)40));
  T2 = CALL1(1,VARREF(YevalSastYunwind_protect_protected_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T2,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_3256F7379,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYunwind_protect_cleanup_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_3256F7379,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_to_c_165) {
  P e_,f_,d_,code_out_;
  P x_3257F7380;
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
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_340));
  x_3257F7380 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_3257F7380,YPchr((P)40));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_341));
  CALL2(1,VARREF(YgooSioSportYput),x_3257F7380,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_342));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T5);
  CALL2(1,VARREF(YgooSioSportYput),x_3257F7380,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_343));
  CALL2(1,VARREF(YgooSioSportYput),x_3257F7380,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYmonitor_type),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_3257F7380,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSastYmonitor_info),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T7,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_3257F7380,YPchr((P)44));
  T8 = CALL1(1,VARREF(YevalSastYmonitor_test),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T8,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_3257F7380,YPchr((P)44));
  T9 = CALL1(1,VARREF(YevalSastYmonitor_handler),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T9,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_3257F7380,YPchr((P)44));
  T10 = CALL1(1,VARREF(YevalSastYmonitor_main_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T10,code_out_);
  T11 = CALL2(1,VARREF(YgooSioSportYput),x_3257F7380,YPchr((P)41));
  T12 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
UNLINK_STACK();
  QRET(T12);
}

FUNCODEDEF(fun_x_3259_166) {
  P x_3258_;
  P argF7381;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_3258_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3258_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3258_);
    argF7381 = T4;
    CALL4(1,VARREF(YevalSg2cYto_c),argF7381,FREEREF(0),FREEREF(1),FREEREF(2));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3258_);
    a1 = T6;
    x_3258_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3265_167) {
  P x_3264_,x_3263_;
  P argF7384;
  P firstQF7383;
  P tmpF7382;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_3264_, 0);
  ARG(x_3263_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3264_);
  tmpF7382 = T3;
  if (tmpF7382 != YPfalse) {
    T4 = tmpF7382;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3263_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_3264_);
    firstQF7383 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_3263_);
    argF7384 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF7383);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYgen_ref),argF7384,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3264_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3263_);
    a1 = T13;
    a2 = T14;
    x_3264_ = a1;
    x_3263_ = a2;
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

FUNCODEDEF(fun_168) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_169) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_to_c_170) {
  P e_,f_,d_,code_out_;
  P x_3265F7392;
  P x_3262F7391;
  P x_3261F7390;
  P x_3260F7389;
  P x_3259F7388;
  P tmpF7387;
  P tmpF7386;
  P bindingF7385;
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
  bindingF7385 = T1;
  T4 = CALL1(1,VARREF(YevalSastYapplication_tailQ),e_);
  tmpF7386 = T4;
  if (tmpF7386 != YPfalse) {
    T7 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_primitiveG));
    tmpF7387 = T7;
    if (tmpF7387 != YPfalse) {
      T10 = CALL1(1,VARREF(YevalSastYfunction_binding),f_);
      T9 = CALL2(1,VARREF(YgooSmacrosYEE),bindingF7385,T10);
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
    T12 = FUNSHELL(1,fun_x_3259_166,4);
    x_3259F7388 = T12;
    FUNINIT(x_3259F7388, 4,f_,d_,code_out_,x_3259F7388);
    T15 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T14 = CALL1(1,VARREF(YgooScolsScolYenum),T15);
    T13 = CALL1(0,x_3259F7388,T14);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    x_3260F7389 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_3260F7389,LITREF(lit_346));
    T18 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
    T17 = CALL1(1,VARREF(YevalSg2cYmangle_binding),T18);
    T16 = CALL2(1,VARREF(YgooSioSwriteYemit),x_3260F7389,T17);
    x_3261F7390 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_3261F7390,YPchr((P)40));
    x_3262F7391 = code_out_;
    T20 = FUNSHELL(1,fun_x_3265_167,3);
    x_3265F7392 = T20;
    FUNINIT(x_3265F7392, 3,x_3262F7391,code_out_,x_3265F7392);
    T24 = fun_168;
    T25 = fun_169;
    T23 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T24,T25);
    T22 = CALL1(1,VARREF(YgooScolsScolYenum),T23);
    T27 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T26 = CALL1(1,VARREF(YgooScolsScolYenum),T27);
    T21 = CALL2(0,x_3265F7392,T22,T26);
    T19 = T21;
    T28 = CALL2(1,VARREF(YgooSioSportYput),x_3261F7390,YPchr((P)41));
    T29 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
    T2 = T29;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_171) {
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

FUNCODEDEF(fun_x_3269_172) {
  P x_3268_;
  P xF7393;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_3268_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3268_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3268_);
    xF7393 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgen_ref),xF7393,FREEREF(0));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3268_);
    a1 = T6;
    x_3268_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_173) {
  P e_,f_,d_,code_out_;
  P x_3269F7398;
  P x_3267F7397;
  P x_3266F7396;
  P fF7395;
  P nF7394;
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
  nF7394 = T1;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_index),e_);
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),DYNREF(YevalSg2cYTdefinitionsT),T5);
  fF7395 = T4;
  T7 = CALL2(1,VARREF(YgooSmacrosYEE),nF7394,YPint((P)0));
  if (T7 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
    if (T9 != YPfalse) {
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
      CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
      CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,fF7395);
      T10 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
      T8 = T10;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
  } else {
    T11 = FUNFAB(fun_171,3,fF7395,d_,code_out_);
    T12 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T11,T12);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_350));
    x_3266F7396 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_3266F7396,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,fF7395);
    x_3267F7397 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_3267F7397,LITREF(lit_351));
    T14 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF7394);
    T13 = CALL2(1,VARREF(YgooSioSportYputs),x_3267F7397,T14);
    T15 = FUNSHELL(1,fun_x_3269_172,2);
    x_3269F7398 = T15;
    FUNINIT(x_3269F7398, 2,code_out_,x_3269F7398);
    T18 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    T17 = CALL1(1,VARREF(YgooScolsScolYenum),T18);
    T16 = CALL1(0,x_3269F7398,T17);
    T19 = CALL2(1,VARREF(YgooSioSportYput),x_3266F7396,YPchr((P)41));
    T20 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
    T6 = T20;
  }
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_funshell_to_c_174) {
  P b_,e_,f_,d_,code_out_;
  P x_3272F7403;
  P x_3271F7402;
  P x_3270F7401;
  P fF7400;
  P nF7399;
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
  nF7399 = T1;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_index),e_);
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),DYNREF(YevalSg2cYTdefinitionsT),T5);
  fF7400 = T4;
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  T6 = CALL2(1,VARREF(YgooSmacrosYEE),nF7399,YPint((P)0));
  if (T6 != YPfalse) {
    T7 = CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,fF7400);
  } else {
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_356));
    x_3270F7401 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_3270F7401,YPchr((P)40));
    x_3271F7402 = code_out_;
    T12 = CALL1(1,VARREF(YevalSastYbinding_dynamic_extentQ),b_);
    if (T12 != YPfalse) {
      T11 = YPint((P)1);
    } else {
      T11 = YPint((P)0);
    }
    T10 = CALL1(1,VARREF(YgooSmathYnum_to_str),T11);
    T9 = CALL2(1,VARREF(YgooSioSportYputs),x_3271F7402,T10);
    CALL2(1,VARREF(YgooSioSportYput),x_3270F7401,YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,fF7400);
    CALL2(1,VARREF(YgooSioSportYput),x_3270F7401,YPchr((P)44));
    x_3272F7403 = code_out_;
    T14 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF7399);
    T13 = CALL2(1,VARREF(YgooSioSportYputs),x_3272F7403,T14);
    T15 = CALL2(1,VARREF(YgooSioSportYput),x_3270F7401,YPchr((P)41));
    T8 = T15;
  }
  T16 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
  T3 = T16;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_175) {
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

FUNCODEDEF(fun_x_3276_176) {
  P x_3275_;
  P xF7404;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_3275_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3275_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3275_);
    xF7404 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgen_ref),xF7404,FREEREF(0));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3275_);
    a1 = T6;
    x_3275_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_funinit_to_c_177) {
  P b_,e_,f_,d_,code_out_;
  P x_3276F7408;
  P x_3274F7407;
  P x_3273F7406;
  P nF7405;
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
  nF7405 = T1;
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),nF7405,YPint((P)0));
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = FUNFAB(fun_175,3,f_,d_,code_out_);
    T7 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T6,T7);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_358));
    x_3273F7406 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_3273F7406,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),b_,code_out_);
    x_3274F7407 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_3274F7407,LITREF(lit_359));
    T8 = CALL2(1,VARREF(YgooSioSwriteYemit),x_3274F7407,nF7405);
    T9 = FUNSHELL(1,fun_x_3276_176,2);
    x_3276F7408 = T9;
    FUNINIT(x_3276F7408, 2,code_out_,x_3276F7408);
    T12 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    T11 = CALL1(1,VARREF(YgooScolsScolYenum),T12);
    T10 = CALL1(0,x_3276F7408,T11);
    T13 = CALL2(1,VARREF(YgooSioSportYput),x_3273F7406,YPchr((P)41));
    T14 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
    T3 = T14;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_178) {
  P e_,f_,d_,code_out_;
  P x_3277F7409;
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
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_362));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
  x_3277F7409 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_3277F7409,YPchr((P)40));
  T3 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T2 = CALL1(1,VARREF(YevalSastYbinding_module_name),T3);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),code_out_,T2);
  CALL2(1,VARREF(YgooSioSportYput),x_3277F7409,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(YevalSastYbinding_name),T5);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),code_out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_3277F7409,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,code_out_);
  T7 = CALL2(1,VARREF(YgooSioSportYput),x_3277F7409,YPchr((P)41));
  T8 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_x_3281_179) {
  P x_3280_;
  P eF7410;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_3280_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3280_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3280_);
    eF7410 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL1(1,FREEREF(1),eF7410);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3280_);
    a1 = T6;
    x_3280_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_out_list_builder_180) {
  P f_,code_out_,elts_;
  P x_3281F7413;
  P x_3279F7412;
  P x_3278F7411;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2,a3;
LINK_STACK();
  ARG(f_, 0);
  ARG(code_out_, 1);
  ARG(elts_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),elts_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_365));
    T2 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T3);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_366));
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,T4);
    x_3278F7411 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_3278F7411,YPchr((P)40));
    x_3279F7412 = code_out_;
    T8 = CALL1(1,VARREF(YgooStypesYlen),elts_);
    T7 = CALL1(1,VARREF(YgooSmathYnum_to_str),T8);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_3279F7412,T7);
    T9 = FUNSHELL(1,fun_x_3281_179,3);
    x_3281F7413 = T9;
    FUNINIT(x_3281F7413, 3,code_out_,f_,x_3281F7413);
    T11 = CALL1(1,VARREF(YgooScolsScolYenum),elts_);
    T10 = CALL1(0,x_3281F7413,T11);
    T12 = CALL2(1,VARREF(YgooSioSportYput),x_3278F7411,YPchr((P)41));
    T5 = T12;
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_181) {
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

FUNCODEDEF(fun_gen_fab_list_182) {
  P code_out_,refs_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(refs_, 1);
loop:
  T1 = FUNFAB(fun_181,1,code_out_);
  T0 = CALL3(1,VARREF(YevalSg2cYout_list_builder),T1,code_out_,refs_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_specs_183) {
  P code_out_,sig_;
  P specsF7415;
  P typesF7414;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(sig_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYsignature_specs),sig_);
  typesF7414 = T1;
  T5 = CALL1(1,VARREF(YevalSastYsignature_naryQ),sig_);
  T4 = CALL1(1,VARREF(YevalSastYconstant_value),T5);
  if (T4 != YPfalse) {
    T8 = CALL1(1,VARREF(YgooStypesYlen),typesF7414);
    T7 = CALL2(1,VARREF(YgooSmathY_),T8,YPint((P)1));
    T6 = CALL3(1,VARREF(YgooScolsSseqYsub),typesF7414,YPint((P)0),T7);
    T3 = T6;
  } else {
    T3 = typesF7414;
  }
  specsF7415 = T3;
  T9 = CALL2(1,VARREF(YevalSg2cYgen_fab_list),code_out_,specsF7415);
  T2 = T9;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_184) {
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

FUNCODEDEF(fun_to_c_185) {
  P e_,f_,d_,code_out_;
  P x_3282F7416;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNFAB(fun_184,3,f_,d_,code_out_);
  T1 = CALL1(1,VARREF(YevalSastYsignature_specs),e_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL1(1,VARREF(YevalSastYsignature_value),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T2,f_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  T3 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_373));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T3);
  x_3282F7416 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_3282F7416,YPchr((P)40));
  T4 = CALL1(1,VARREF(YevalSastYsignature_names),e_);
  CALL2(1,VARREF(YevalSg2cYgen_fab_list),code_out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_3282F7416,YPchr((P)44));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_specs),code_out_,e_);
  CALL2(1,VARREF(YgooSioSportYput),x_3282F7416,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYsignature_naryQ),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T5,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_3282F7416,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYsignature_arity),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_3282F7416,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSastYsignature_value),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T7,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_3282F7416,YPchr((P)44));
  T8 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_374));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T8);
  T9 = CALL2(1,VARREF(YgooSioSportYput),x_3282F7416,YPchr((P)41));
  T10 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_to_c_186) {
  P e_,f_,d_,code_out_;
  P x_3283F7417;
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
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_375));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
  x_3283F7417 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_3283F7417,YPchr((P)40));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_376));
  CALL2(1,VARREF(YgooSioSportYput),x_3283F7417,YPchr((P)44));
  T2 = CALL1(1,VARREF(YevalSastYfunction_debug_name),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T2,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_3283F7417,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYfunction_signature),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_3283F7417,YPchr((P)44));
  T4 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_377));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_3283F7417,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_378));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T5);
  CALL2(1,VARREF(YgooSioSportYput),x_3283F7417,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_379));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T6);
  CALL2(1,VARREF(YgooSioSportYput),x_3283F7417,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_380));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T7);
  T8 = CALL2(1,VARREF(YgooSioSportYput),x_3283F7417,YPchr((P)41));
  T9 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_x_3285_187) {
  P x_3284_;
  P defF7418;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_3284_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3284_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3284_);
    defF7418 = T4;
    CALL2(1,VARREF(YevalSg2cYgenerate_function_forward),FREEREF(0),defF7418);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3284_);
    a1 = T6;
    x_3284_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_forwards_188) {
  P code_out_,definitions_;
  P x_3285F7419;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definitions_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_383));
  T1 = FUNSHELL(1,fun_x_3285_187,2);
  x_3285F7419 = T1;
  FUNINIT(x_3285F7419, 2,code_out_,x_3285F7419);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),definitions_);
  T2 = CALL1(0,x_3285F7419,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3290_189) {
  P x_3289_,x_3288_;
  P iF7422;
  P firstQF7421;
  P tmpF7420;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_3289_, 0);
  ARG(x_3288_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3289_);
  tmpF7420 = T3;
  if (tmpF7420 != YPfalse) {
    T4 = tmpF7420;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3288_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_3289_);
    firstQF7421 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_3288_);
    iF7422 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF7421);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_395));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3289_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3288_);
    a1 = T13;
    a2 = T14;
    x_3289_ = a1;
    x_3288_ = a2;
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

FUNCODEDEF(fun_190) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_191) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_generate_function_forward_192) {
  P code_out_,defn_;
  P x_3290F7425;
  P x_3287F7424;
  P x_3286F7423;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(defn_, 1);
loop:
  x_3286F7423 = code_out_;
  if (DYNREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    T0 = LITREF(lit_388);
  } else {
    T0 = LITREF(lit_389);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3286F7423,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_3286F7423,LITREF(lit_390));
  T2 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_binding),T2);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3286F7423,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_3286F7423,LITREF(lit_391));
  x_3287F7424 = code_out_;
  T5 = FUNSHELL(1,fun_x_3290_189,3);
  x_3290F7425 = T5;
  FUNINIT(x_3290F7425, 3,x_3287F7424,code_out_,x_3290F7425);
  T9 = fun_190;
  T10 = fun_191;
  T8 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T9,T10);
  T7 = CALL1(1,VARREF(YgooScolsScolYenum),T8);
  T14 = CALL1(1,VARREF(YevalSastYfunction_bindings),defn_);
  T13 = CALL1(1,VARREF(YgooStypesYlen),T14);
  T12 = CALL1(1,VARREF(YgooScolsSseqYbelow),T13);
  T11 = CALL1(1,VARREF(YgooScolsScolYenum),T12);
  T6 = CALL2(0,x_3290F7425,T7,T11);
  T4 = T6;
  T15 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_396));
UNLINK_STACK();
  QRET(T15);
}

FUNCODEDEF(fun_generate_function_binding_193) {
  P code_out_,defn_;
  P x_3292F7430;
  P nameF7429;
  P x_3291F7428;
  P tmpF7427;
  P nameF7426;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(defn_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  nameF7426 = T1;
  T4 = CALL2(1,VARREF(YisaQ),nameF7426,VARREF(YevalSastYLmodule_bindingG));
  tmpF7427 = T4;
  if (tmpF7427 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSastYbinding_kind),nameF7426);
    T6 = CALL2(1,VARREF(YgooScolsScolYmemQ),LITREF(lit_398),T7);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSg2cYmangle_binding),nameF7426);
    T8 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T9);
    T2 = T8;
  } else {
    T11 = CALL2(1,VARREF(YgooSmacrosYEE),nameF7426,YPfalse);
    if (T11 != YPfalse) {
      x_3291F7428 = code_out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_3291F7428,LITREF(lit_399));
      T14 = CALL1(1,VARREF(YevalSastYfunction_index),defn_);
      T13 = CALL2(1,VARREF(YgooSioSwriteYemit),x_3291F7428,T14);
      T12 = T13;
      T10 = T12;
    } else {
      T17 = CALL2(1,VARREF(YisaQ),nameF7426,VARREF(YevalSastYLlocal_bindingG));
      if (T17 != YPfalse) {
        T18 = CALL1(1,VARREF(YevalSastYbinding_name),nameF7426);
        T16 = T18;
      } else {
        T16 = nameF7426;
      }
      nameF7429 = T16;
      x_3292F7430 = code_out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_3292F7430,LITREF(lit_400));
      T20 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),nameF7429);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_3292F7430,T20);
      CALL2(1,VARREF(YgooSioSportYputs),x_3292F7430,LITREF(lit_401));
      T22 = CALL1(1,VARREF(YevalSastYfunction_index),defn_);
      T21 = CALL2(1,VARREF(YgooSioSwriteYemit),x_3292F7430,T22);
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

FUNCODEDEF(fun_generate_function_forward_194) {
  P code_out_,defn_;
  P boundQF7431;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(defn_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  T1 = CALL2(1,VARREF(YisaQ),T2,VARREF(YevalSastYLmodule_bindingG));
  boundQF7431 = T1;
  if (boundQF7431 != YPfalse) {
    T3 = LITREF(lit_402);
  } else {
    T3 = LITREF(lit_403);
  }
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T3);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,defn_);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_404));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_195) {
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

FUNCODEDEF(fun_generate_function_bodies_196) {
  P code_out_,definitions_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definitions_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_406));
  T1 = FUNFAB(fun_195,1,code_out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,definitions_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_197) {
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

FUNCODEDEF(fun_generate_functions_198) {
  P definitions_,f_,d_,code_out_;
  P T0,T1,T2;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(definitions_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = FUNFAB(fun_197,3,f_,d_,code_out_);
  T2 = CALL1(1,VARREF(YgooScolsSseqYrev),definitions_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_closure_structure_199) {
  P definition_,f_,d_,code_out_;
  P x_3294F7433;
  P x_3293F7432;
  P T0,T1,T2,T3,T4,T5,T6,T7;
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
  x_3293F7432 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_3293F7432,LITREF(lit_411));
  T2 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_412));
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_3293F7432,T2);
  x_3294F7433 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_3294F7433,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_body_reference),code_out_,definition_);
  CALL2(1,VARREF(YgooSioSportYput),x_3294F7433,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYfunction_debug_name),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_3294F7433,YPchr((P)44));
  T4 = CALL1(1,VARREF(YevalSastYfunction_signature),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T4,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_3294F7433,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_413));
  CALL2(1,VARREF(YgooSioSportYput),x_3294F7433,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_414));
  CALL2(1,VARREF(YgooSioSportYput),x_3294F7433,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYfunction_source),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T5,code_out_);
  T6 = CALL2(1,VARREF(YgooSioSportYput),x_3294F7433,YPchr((P)41));
  T7 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_generate_function_body_reference_200) {
  P code_out_,definition_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definition_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_416));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,definition_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_417));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3299_201) {
  P x_3298_,x_3297_,x_3296_;
  P x_3300F7439;
  P bF7438;
  P iF7437;
  P firstQF7436;
  P tmpF7435;
  P tmpF7434;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_3298_, 0);
  ARG(x_3297_, 1);
  ARG(x_3296_, 2);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3298_);
  tmpF7434 = T3;
  if (tmpF7434 != YPfalse) {
    T4 = tmpF7434;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3297_);
    tmpF7435 = T6;
    if (tmpF7435 != YPfalse) {
      T7 = tmpF7435;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3296_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_3298_);
    firstQF7436 = T10;
    T12 = CALL1(1,VARREF(YgooScolsScolYnow),x_3297_);
    iF7437 = T12;
    T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_3296_);
    bF7438 = T14;
    T15 = CALL1(1,VARREF(Ynot),firstQF7436);
    if (T15 != YPfalse) {
      T16 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    x_3300F7439 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_3300F7439,LITREF(lit_425));
    T18 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF7437);
    T17 = CALL2(1,VARREF(YgooSioSportYputs),x_3300F7439,T18);
    T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3298_);
    T21 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3297_);
    T22 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3296_);
    a1 = T20;
    a2 = T21;
    a3 = T22;
    x_3298_ = a1;
    x_3297_ = a2;
    x_3296_ = a3;
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

FUNCODEDEF(fun_202) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_203) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_generate_shadow_args_204) {
  P bindings_,code_out_;
  P x_3299F7441;
  P x_3295F7440;
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
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_420));
    x_3295F7440 = code_out_;
    T4 = FUNSHELL(1,fun_x_3299_201,3);
    x_3299F7441 = T4;
    FUNINIT(x_3299F7441, 3,x_3295F7440,code_out_,x_3299F7441);
    T8 = fun_202;
    T9 = fun_203;
    T7 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T8,T9);
    T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
    T11 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)1));
    T10 = CALL1(1,VARREF(YgooScolsScolYenum),T11);
    T12 = CALL1(1,VARREF(YgooScolsScolYenum),bindings_);
    T5 = CALL3(0,x_3299F7441,T6,T10,T12);
    T3 = T5;
    T13 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
    T0 = T13;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_return_205) {
  P defn_,d_,code_out_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(defn_, 0);
  ARG(d_, 1);
  ARG(code_out_, 2);
loop:
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_427));
  T0 = CALL1(1,VARREF(YevalSastYfunction_body),defn_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T0,code_out_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_generate_return_206) {
  P defn_,d_,code_out_;
  P x_3301F7442;
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
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_428));
  x_3301F7442 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_3301F7442,YPchr((P)40));
  T3 = CALL1(1,VARREF(YevalSastYfunction_body),defn_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_3301F7442,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_primitive_inlinableQ_207) {
  P e_;
  P bindingF7443;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_binding),e_);
  bindingF7443 = T1;
  T3 = CALL1(1,VARREF(YevalSastYbinding_name),bindingF7443);
  T2 = CALL2(1,VARREF(YgooScolsScolYmemQ),LITREF(lit_430),T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3307_208) {
  P x_3306_,x_3305_;
  P bindingF7446;
  P firstQF7445;
  P tmpF7444;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_3306_, 0);
  ARG(x_3305_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3306_);
  tmpF7444 = T3;
  if (tmpF7444 != YPfalse) {
    T4 = tmpF7444;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3305_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_3306_);
    firstQF7445 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_3305_);
    bindingF7446 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF7445);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_439));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF7446,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3306_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3305_);
    a1 = T13;
    a2 = T14;
    x_3306_ = a1;
    x_3305_ = a2;
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

FUNCODEDEF(fun_generate_function_code_211) {
  P code_out_,e_;
  P x_3307F7450;
  P x_3304F7449;
  P x_3303F7448;
  P x_3302F7447;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(e_, 1);
loop:
  x_3302F7447 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_3302F7447,LITREF(lit_432));
  if (DYNREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    T0 = LITREF(lit_433);
  } else {
    T0 = LITREF(lit_104);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3302F7447,T0);
  T2 = CALL1(1,VARREF(YevalSg2cYprimitive_inlinableQ),e_);
  if (T2 != YPfalse) {
    T1 = LITREF(lit_434);
  } else {
    T1 = LITREF(lit_104);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3302F7447,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_3302F7447,LITREF(lit_435));
  T4 = CALL1(1,VARREF(YevalSastYfunction_binding),e_);
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),T4,code_out_);
  x_3303F7448 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_3303F7448,YPchr((P)40));
  x_3304F7449 = code_out_;
  T6 = FUNSHELL(1,fun_x_3307_208,3);
  x_3307F7450 = T6;
  FUNINIT(x_3307F7450, 3,x_3304F7449,code_out_,x_3307F7450);
  T10 = fun_209;
  T11 = fun_210;
  T9 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T10,T11);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),T9);
  T13 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  T7 = CALL2(0,x_3307F7450,T8,T12);
  T5 = T7;
  T14 = CALL2(1,VARREF(YgooSioSportYput),x_3303F7448,YPchr((P)41));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_440));
  T15 = CALL1(1,VARREF(YevalSastYfunction_temporaries),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_local_temporaries),T15,code_out_);
  T16 = CALL1(1,VARREF(YevalSastYfunction_registers),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_registers),T16,code_out_);
  T17 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_shadow_args),T17,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_441));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_442));
  T18 = CALL1(1,VARREF(YevalSastYfunction_body),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T18,e_,YPint((P)1),code_out_);
  CALL3(1,VARREF(YevalSg2cYgenerate_return),e_,YPint((P)1),code_out_);
  T19 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_443));
UNLINK_STACK();
  QRET(T19);
}

FUNCODEDEF(fun_dispatcherQ_212) {
  P definition_;
  P tmpF7454;
  P nameF7453;
  P tmpF7452;
  P bindingF7451;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(definition_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_binding),definition_);
  bindingF7451 = T1;
  T3 = CALL2(1,VARREF(YisaQ),bindingF7451,VARREF(YevalSastYLmodule_bindingG));
  tmpF7452 = T3;
  if (tmpF7452 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSastYbinding_name),bindingF7451);
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T7);
    nameF7453 = T6;
    T9 = CALL2(1,VARREF(YgooSmathYE),nameF7453,LITREF(lit_445));
    tmpF7454 = T9;
    if (tmpF7454 != YPfalse) {
      T10 = tmpF7454;
    } else {
      T12 = CALL2(1,VARREF(YgooScolsSseqYfinds),nameF7453,LITREF(lit_446));
      T14 = CALL1(1,VARREF(YgooStypesYlen),nameF7453);
      T15 = CALL1(1,VARREF(YgooStypesYlen),LITREF(lit_447));
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

FUNCODEDEF(fun_x_3311_213) {
  P x_3310_,x_3309_;
  P bF7457;
  P firstQF7456;
  P tmpF7455;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_3310_, 0);
  ARG(x_3309_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3310_);
  tmpF7455 = T3;
  if (tmpF7455 != YPfalse) {
    T4 = tmpF7455;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3309_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_3310_);
    firstQF7456 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_3309_);
    bF7457 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF7456);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bF7457,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3310_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3309_);
    a1 = T13;
    a2 = T14;
    x_3310_ = a1;
    x_3309_ = a2;
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

FUNCODEDEF(fun_214) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_215) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_216) {
  P b_;
  P x_3312F7458;
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
      T3 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_455));
    } else {
      T4 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_456));
    }
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),b_,FREEREF(0));
    x_3312F7458 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_3312F7458,LITREF(lit_457));
    T6 = BOXVAL(FREEREF(1));
    T5 = CALL1(1,VARREF(YgooSmathYnum_to_str),T6);
    CALL2(1,VARREF(YgooSioSportYputs),x_3312F7458,T5);
    T7 = CALL2(1,VARREF(YgooSioSportYputs),x_3312F7458,LITREF(lit_458));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_213));
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

FUNCODEDEF(fun_generate_function_code_217) {
  P code_out_,definition_;
  P x_3311F7462;
  P x_3308F7461;
  P bindingsF7460;
  P offsetF7459;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definition_, 1);
loop:
  offsetF7459 = YPint((P)0);
  offsetF7459 = BOXFAB(offsetF7459);
  T3 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
  bindingsF7460 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_448));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,definition_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_449));
  T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindingsF7460);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_450));
    x_3308F7461 = code_out_;
    T7 = FUNSHELL(1,fun_x_3311_213,3);
    x_3311F7462 = T7;
    FUNINIT(x_3311F7462, 3,x_3308F7461,code_out_,x_3311F7462);
    T11 = fun_214;
    T12 = fun_215;
    T10 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T11,T12);
    T9 = CALL1(1,VARREF(YgooScolsScolYenum),T10);
    T14 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
    T13 = CALL1(1,VARREF(YgooScolsScolYenum),T14);
    T8 = CALL2(0,x_3311F7462,T9,T13);
    T6 = T8;
    T15 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
  } else {
  }
  T16 = CALL1(1,VARREF(YevalSastYfunction_temporaries),definition_);
  CALL2(1,VARREF(YevalSg2cYgenerate_local_temporaries),T16,code_out_);
  T17 = CALL1(1,VARREF(YevalSastYfunction_registers),definition_);
  CALL2(1,VARREF(YevalSg2cYgenerate_registers),T17,code_out_);
  T18 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
  CALL2(1,VARREF(YevalSg2cYgenerate_shadow_args),T18,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_454));
  T19 = FUNFAB(fun_216,2,code_out_,offsetF7459);
  CALL2(1,VARREF(YgooSmacrosYdo),T19,bindingsF7460);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_459));
  T20 = CALL1(1,VARREF(YevalSastYfunction_body),definition_);
  CALL4(1,VARREF(YevalSg2cYto_c),T20,definition_,YPint((P)1),code_out_);
  T22 = CALL1(1,VARREF(YevalSg2cYdispatcherQ),definition_);
  T21 = CALL1(1,VARREF(Ynot),T22);
  if (T21 != YPfalse) {
    T23 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_460));
  } else {
  }
  CALL3(1,VARREF(YevalSg2cYgenerate_return),definition_,YPint((P)1),code_out_);
  T24 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_461));
  T2 = T24;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3314_218) {
  P x_3313_;
  P tempF7463;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_3313_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3313_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3313_);
    tempF7463 = T4;
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(0));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_466));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),tempF7463,FREEREF(0));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_213));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3313_);
    a1 = T6;
    x_3313_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_local_temporaries_219) {
  P temps_,code_out_;
  P x_3314F7464;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(temps_, 0);
  ARG(code_out_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_3314_218,2);
  x_3314F7464 = T1;
  FUNINIT(x_3314F7464, 2,code_out_,x_3314F7464);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),temps_);
  T2 = CALL1(0,x_3314F7464,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_next_reg_220) {
  P j_,i_;
  P tmpF7465;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(j_, 0);
  ARG(i_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooSmathYE),i_,VARREF(YevalSg2cYTregisters_per_lineT));
  tmpF7465 = T2;
  if (tmpF7465 != YPfalse) {
    T3 = tmpF7465;
  } else {
    T4 = CALL2(1,VARREF(YgooSmathYE),j_,FREEREF(0));
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_473));
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

FUNCODEDEF(fun_next_line_221) {
  P j_;
  P next_regF7466;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(j_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),j_,FREEREF(0));
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_471));
    T3 = FUNSHELL(1,fun_next_reg_220,5);
    next_regF7466 = T3;
    FUNINIT(next_regF7466, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),next_regF7466);
    T4 = CALL2(0,next_regF7466,j_,YPint((P)0));
    T2 = T4;
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_registers_222) {
  P regs_,code_out_;
  P next_lineF7468;
  P nregsF7467;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(regs_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),regs_);
  nregsF7467 = T1;
  T3 = FUNSHELL(1,fun_next_line_221,4);
  next_lineF7468 = T3;
  FUNINIT(next_lineF7468, 4,nregsF7467,code_out_,next_lineF7468,regs_);
  T4 = CALL1(0,next_lineF7468,YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_info_name_223) {
  P name_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),name_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_475),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_maybe_declare_224) {
  P modname_;
  P x_3315F7469;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T2 = CALL3(1,VARREF(YgooScolsScolYelt_or),FREEREF(0),modname_,YPfalse);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,FREEREF(0),modname_);
    x_3315F7469 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_3315F7469,LITREF(lit_478));
    T4 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),modname_);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_3315F7469,T4);
    T5 = CALL2(1,VARREF(YgooSioSportYputs),x_3315F7469,LITREF(lit_479));
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_225) {
  P binding_;
  P home_modF7470;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_module_name),binding_);
  home_modF7470 = T1;
  T4 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T5 = CALL1(0,FREEREF(1),home_modF7470);
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
  P maybe_declareF7473;
  P envF7472;
  P seenF7471;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)50));
  seenF7471 = T1;
  T3 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  envF7472 = T3;
  T5 = FUNSHELL(0,fun_maybe_declare_224,2);
  maybe_declareF7473 = T5;
  FUNINIT(maybe_declareF7473, 2,seenF7471,code_out_);
  T7 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF7472);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYmodule_name),T7);
  CALL2(1,VARREF(YgooSmacrosYdo),maybe_declareF7473,T6);
  T9 = FUNFAB(fun_225,2,mod_,maybe_declareF7473);
  T10 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T8 = CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T9,T10);
  T4 = T8;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3317_227) {
  P x_3316_;
  P x_3318F7475;
  P nF7474;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_3316_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3316_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3316_);
    nF7474 = T4;
    x_3318F7475 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_3318F7475,LITREF(lit_485));
    T5 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nF7474);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_3318F7475,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_3318F7475,LITREF(lit_486));
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3316_);
    a1 = T8;
    x_3316_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_228) {
  P local_name_,binding_;
  P x_3319F7476;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(local_name_, 0);
  ARG(binding_, 1);
loop:
  T2 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    x_3319F7476 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_3319F7476,LITREF(lit_490));
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T4 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T5);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_3319F7476,T4);
    CALL2(1,VARREF(YgooSioSportYputs),x_3319F7476,LITREF(lit_491));
    T7 = CALL1(1,VARREF(YevalSastYbinding_module_name),binding_);
    T6 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),T7);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_3319F7476,T6);
    CALL2(1,VARREF(YgooSioSportYputs),x_3319F7476,LITREF(lit_492));
    T8 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),local_name_);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_3319F7476,T8);
    T9 = CALL2(1,VARREF(YgooSioSportYputs),x_3319F7476,LITREF(lit_493));
    T3 = T9;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_229) {
  P binding_;
  P x_3324F7481;
  P x_3323F7480;
  P x_3322F7479;
  P x_3321F7478;
  P x_3320F7477;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
  if (T1 != YPfalse) {
    x_3320F7477 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_3320F7477,LITREF(lit_496));
    T3 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T2 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T3);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_3320F7477,T2);
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_3320F7477,LITREF(lit_497));
    T6 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
    x_3321F7478 = T6;
    x_3322F7479 = VARREF(YgooSmacrosYEE);
    T9 = CALL2(1,x_3322F7479,x_3321F7478,LITREF(lit_99));
    if (T9 != YPfalse) {
      x_3323F7480 = FREEREF(1);
      CALL2(1,VARREF(YgooSioSportYputs),x_3323F7480,LITREF(lit_498));
      T11 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_3323F7480,T11);
      T12 = CALL2(1,VARREF(YgooSioSportYputs),x_3323F7480,LITREF(lit_499));
      T10 = T12;
      T8 = T10;
    } else {
      T14 = CALL2(1,x_3322F7479,x_3321F7478,LITREF(lit_101));
      if (T14 != YPfalse) {
        x_3324F7481 = FREEREF(1);
        CALL2(1,VARREF(YgooSioSportYputs),x_3324F7481,LITREF(lit_500));
        T16 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
        CALL2(1,VARREF(YgooSioSwriteYemit),x_3324F7481,T16);
        T17 = CALL2(1,VARREF(YgooSioSportYputs),x_3324F7481,LITREF(lit_501));
        T15 = T17;
        T13 = T15;
      } else {
        T18 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_502));
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

FUNCODEDEF(fun_x_3326_230) {
  P x_3325_;
  P x_3327F7485;
  P bindingF7484;
  P exported_asF7483;
  P tup58F7482;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(x_3325_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3325_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooScolsScolYnow_key),x_3325_);
    T6 = CALL1(1,VARREF(YgooScolsScolYnow),x_3325_);
    T4 = CALL2(1,VARREF(Ytup),T5,T6);
    tup58F7482 = T4;
    T8 = CALL2(1,VARREF(YgooSmacrosYelt),tup58F7482,YPint((P)0));
    exported_asF7483 = T8;
    T10 = CALL2(1,VARREF(YgooSmacrosYelt),tup58F7482,YPint((P)1));
    bindingF7484 = T10;
    x_3327F7485 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_3327F7485,LITREF(lit_507));
    T12 = CALL1(1,VARREF(YevalSastYbinding_name),bindingF7484);
    T11 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T12);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_3327F7485,T11);
    CALL2(1,VARREF(YgooSioSportYputs),x_3327F7485,LITREF(lit_508));
    T13 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),exported_asF7483);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_3327F7485,T13);
    T14 = CALL2(1,VARREF(YgooSioSportYputs),x_3327F7485,LITREF(lit_509));
    T16 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3325_);
    a1 = T16;
    x_3325_ = a1;
    goto loop;
    T9 = T15;
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
  P x_3330F7495;
  P x_3329F7494;
  P x_3328F7493;
  P x_3326F7492;
  P x_3317F7491;
  P uses_namesF7490;
  P usesF7489;
  P envF7488;
  P info_nameF7487;
  P nameF7486;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  nameF7486 = T1;
  T3 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nameF7486);
  info_nameF7487 = T3;
  T5 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  envF7488 = T5;
  T7 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF7488);
  usesF7489 = T7;
  T9 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYmodule_name),usesF7489);
  uses_namesF7490 = T9;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_481));
  CALL2(1,VARREF(YevalSg2cYdeclare_imported_module_infos),code_out_,mod_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_482));
  T10 = FUNSHELL(1,fun_x_3317_227,2);
  x_3317F7491 = T10;
  FUNINIT(x_3317F7491, 2,code_out_,x_3317F7491);
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF7490);
  T11 = CALL1(0,x_3317F7491,T12);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_487));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_488));
  T13 = FUNFAB(fun_228,2,mod_,code_out_);
  T14 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  CALL2(1,VARREF(YevalSastYdo_named_static_global_bindings),T13,T14);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_494));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_495));
  T15 = FUNFAB(fun_229,2,mod_,code_out_);
  T16 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T15,T16);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_503));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_504));
  T17 = FUNSHELL(1,fun_x_3326_230,2);
  x_3326F7492 = T17;
  FUNINIT(x_3326F7492, 2,code_out_,x_3326F7492);
  T20 = CALL1(1,VARREF(YevalSastYmodule_exports),mod_);
  T19 = CALL1(1,VARREF(YgooScolsScolYenum),T20);
  T18 = CALL1(0,x_3326F7492,T19);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_510));
  x_3328F7493 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_3328F7493,LITREF(lit_511));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3328F7493,info_nameF7487);
  T21 = CALL2(1,VARREF(YgooSioSportYputs),x_3328F7493,LITREF(lit_512));
  x_3329F7494 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_3329F7494,LITREF(lit_513));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3329F7494,info_nameF7487);
  T22 = CALL2(1,VARREF(YgooSioSportYputs),x_3329F7494,LITREF(lit_514));
  x_3330F7495 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_3330F7495,LITREF(lit_515));
  T23 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),nameF7486);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3330F7495,T23);
  T24 = CALL2(1,VARREF(YgooSioSportYputs),x_3330F7495,LITREF(lit_516));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_517));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_518));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_519));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_520));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_521));
  T25 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_522));
  T8 = T25;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_init_name_232) {
  P name_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),name_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_524),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_init_decl_233) {
  P name_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),name_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_526),T1,LITREF(lit_527));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3332_234) {
  P x_3331_;
  P x_3333F7497;
  P nF7496;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_3331_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3331_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3331_);
    nF7496 = T4;
    x_3333F7497 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_3333F7497,LITREF(lit_534));
    T5 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nF7496);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_3333F7497,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_3333F7497,LITREF(lit_535));
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3331_);
    a1 = T8;
    x_3331_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3337_235) {
  P x_3336_;
  P x_3338F7499;
  P nF7498;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_3336_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3336_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3336_);
    nF7498 = T4;
    x_3338F7499 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_3338F7499,LITREF(lit_545));
    T5 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),nF7498);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_3338F7499,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_3338F7499,LITREF(lit_546));
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3336_);
    a1 = T8;
    x_3336_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_module_init_236) {
  P code_out_,mod_,form_;
  P x_3337F7508;
  P x_3335F7507;
  P x_3334F7506;
  P x_3332F7505;
  P uses_namesF7504;
  P usesF7503;
  P envF7502;
  P init_declF7501;
  P nameF7500;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1,a2,a3;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
  ARG(form_, 2);
loop:
  if (DYNREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    T1 = LITREF(lit_530);
  } else {
    T2 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T1 = T2;
  }
  nameF7500 = T1;
  T4 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nameF7500);
  init_declF7501 = T4;
  T6 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  envF7502 = T6;
  T8 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF7502);
  usesF7503 = T8;
  T10 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYmodule_name),usesF7503);
  uses_namesF7504 = T10;
  T11 = CALL1(1,VARREF(Ynot),DYNREF(YevalSg2cYTdynamic_linkingQT));
  if (T11 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_531));
    T13 = FUNSHELL(1,fun_x_3332_234,2);
    x_3332F7505 = T13;
    FUNINIT(x_3332F7505, 2,code_out_,x_3332F7505);
    T15 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF7504);
    T14 = CALL1(0,x_3332F7505,T15);
    T12 = T14;
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_536));
  x_3334F7506 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_3334F7506,LITREF(lit_537));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3334F7506,init_declF7501);
  T16 = CALL2(1,VARREF(YgooSioSportYputs),x_3334F7506,LITREF(lit_538));
  x_3335F7507 = code_out_;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3335F7507,init_declF7501);
  T17 = CALL2(1,VARREF(YgooSioSportYputs),x_3335F7507,LITREF(lit_539));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_540));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_541));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_542));
  T18 = CALL1(1,VARREF(Ynot),DYNREF(YevalSg2cYTdynamic_linkingQT));
  if (T18 != YPfalse) {
    T19 = FUNSHELL(1,fun_x_3337_235,2);
    x_3337F7508 = T19;
    FUNINIT(x_3337F7508, 2,code_out_,x_3337F7508);
    T21 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF7504);
    T20 = CALL1(0,x_3337F7508,T21);
    T22 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_547));
  } else {
  }
  CALL4(1,VARREF(YevalSg2cYto_c),form_,YPfalse,YPint((P)1),code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_548));
  T23 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_549));
  T9 = T23;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_main_237) {
  P code_out_,mod_;
  P x_3343F7515;
  P x_3342F7514;
  P x_3341F7513;
  P x_3340F7512;
  P x_3339F7511;
  P info_nameF7510;
  P nameF7509;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  nameF7509 = T1;
  T3 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nameF7509);
  info_nameF7510 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_551));
  x_3339F7511 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_3339F7511,LITREF(lit_552));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3339F7511,info_nameF7510);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_3339F7511,LITREF(lit_553));
  x_3340F7512 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_3340F7512,LITREF(lit_554));
  T5 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nameF7509);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3340F7512,T5);
  T6 = CALL2(1,VARREF(YgooSioSportYputs),x_3340F7512,LITREF(lit_555));
  x_3341F7513 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_3341F7513,LITREF(lit_556));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3341F7513,info_nameF7510);
  T7 = CALL2(1,VARREF(YgooSioSportYputs),x_3341F7513,LITREF(lit_557));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_558));
  x_3342F7514 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_3342F7514,LITREF(lit_559));
  T8 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_560));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3342F7514,T8);
  T9 = CALL2(1,VARREF(YgooSioSportYputs),x_3342F7514,LITREF(lit_561));
  x_3343F7515 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_3343F7515,LITREF(lit_562));
  T10 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),nameF7509);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3343F7515,T10);
  T11 = CALL2(1,VARREF(YgooSioSportYputs),x_3343F7515,LITREF(lit_563));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_564));
  T12 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_565));
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
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173;
DEFCREGS();
loop:
  DYNDEFSET(YevalSg2cYTdefinitionsT,YPfalse);
  DYNDEFSET(YevalSg2cYTdynamic_linkingQT,YPfalse);
  lit_0 = YPPsym((P)"<g2c-module-loader>");
  T1 = (P)YPpair(VARREF(YevalSastYLmodule_loaderG),Ynil);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YevalSg2cYLg2c_module_loaderG,T0);
  lit_1 = YPPsym((P)"module-loader-appname");
  lit_2 = YPPsym((P)"_x");
  T2 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_appname_0 = YPmet(FUNCODEREF(fun_module_loader_appname_0),LITREF(lit_1),T2,ENVNUL,PNUL,YPfalse);
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
  lit_4 = YPPsym((P)"_z");
  T7 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLstrG),VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_appname_setter_1 = YPmet(FUNCODEREF(fun_module_loader_appname_setter_1),LITREF(lit_3),T7,ENVNUL,PNUL,YPfalse);
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
  T12 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_app_modname_2 = YPmet(FUNCODEREF(fun_module_loader_app_modname_2),LITREF(lit_5),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YevalSg2cYmodule_loader_app_modname);
  if (T15 != YPfalse) {
    T14 = VARREF(YevalSg2cYmodule_loader_app_modname);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_module_loader_app_modname_2;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YevalSg2cYmodule_loader_app_modname,T13);
  lit_6 = YPPsym((P)"module-loader-app-modname-setter");
  T17 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLsymG),VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_app_modname_setter_3 = YPmet(FUNCODEREF(fun_module_loader_app_modname_setter_3),LITREF(lit_6),T17,ENVNUL,PNUL,YPfalse);
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
  lit_7 = YPPsym((P)"<g2c-module>");
  T23 = (P)YPpair(VARREF(YevalSastYLmoduleG),Ynil);
  T22 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_7),T23);
  VARSET(YevalSg2cYLg2c_moduleG,T22);
  lit_8 = YPPsym((P)"module-src-file");
  T24 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_src_file_4 = YPmet(FUNCODEREF(fun_module_src_file_4),LITREF(lit_8),T24,ENVNUL,PNUL,YPfalse);
  T27 = BOUNDP(YevalSg2cYmodule_src_file);
  if (T27 != YPfalse) {
    T26 = VARREF(YevalSg2cYmodule_src_file);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_module_src_file_4;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(YevalSg2cYmodule_src_file,T25);
  lit_9 = YPPsym((P)"module-src-file-setter");
  T29 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLstrG),VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_src_file_setter_5 = YPmet(FUNCODEREF(fun_module_src_file_setter_5),LITREF(lit_9),T29,ENVNUL,PNUL,YPfalse);
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
  lit_10 = YPPsym((P)"module-mtime");
  T34 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_mtime_6 = YPmet(FUNCODEREF(fun_module_mtime_6),LITREF(lit_10),T34,ENVNUL,PNUL,YPfalse);
  T37 = BOUNDP(YevalSg2cYmodule_mtime);
  if (T37 != YPfalse) {
    T36 = VARREF(YevalSg2cYmodule_mtime);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_module_mtime_6;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(YevalSg2cYmodule_mtime,T35);
  lit_11 = YPPsym((P)"module-mtime-setter");
  T39 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLfloG),VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_mtime_setter_7 = YPmet(FUNCODEREF(fun_module_mtime_setter_7),LITREF(lit_11),T39,ENVNUL,PNUL,YPfalse);
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
  lit_12 = YPPsym((P)"module-loader-module-type");
  lit_13 = YPPsym((P)"loader");
  T44 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_module_loader_module_type_8 = YPmet(FUNCODEREF(fun_module_loader_module_type_8),LITREF(lit_12),T44,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(YevalSastYmodule_loader_module_type);
  if (T47 != YPfalse) {
    T46 = VARREF(YevalSastYmodule_loader_module_type);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_module_loader_module_type_8;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YevalSastYmodule_loader_module_type,T45);
  lit_14 = YPPsym((P)"load-module");
  lit_15 = YPPsym((P)"name");
  lit_16 = YPsb((P)"START");
  lit_17 = YPsb((P)"OPTIMIZE");
  lit_18 = YPsb((P)"EMIT");
  T54 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T54,ENVNUL,PNUL,YPfalse);
  T53 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T53,ENVNUL,PNUL,YPfalse);
  T52 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T52,ENVNUL,PNUL,YPfalse);
  T51 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T51,ENVNUL,PNUL,YPfalse);
  T50 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T50,ENVNUL,PNUL,YPfalse);
  T49 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_15)),YPPlist(2,VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  fun_load_module_14 = YPmet(FUNCODEREF(fun_load_module_14),LITREF(lit_14),T49,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(YevalSastYload_module);
  if (T57 != YPfalse) {
    T56 = VARREF(YevalSastYload_module);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_load_module_14;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YevalSastYload_module,T55);
  lit_19 = YPPsym((P)"module-up-to-date?");
  lit_20 = YPPsym((P)"mod");
  T59 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSg2cYmodule_up_to_dateQ = YPmet(FUNCODEREF(YevalSg2cYmodule_up_to_dateQ),LITREF(lit_19),T59,ENVNUL,PNUL,YPfalse);
  T60 = YevalSg2cYmodule_up_to_dateQ;
  VARSET(YevalSg2cYmodule_up_to_dateQ,T60);
  lit_21 = YPPsym((P)"purge-outdated-modules");
  lit_22 = YPsb((P)" has changed.\n");
  T63 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T63,ENVNUL,PNUL,YPfalse);
  T62 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T62,ENVNUL,PNUL,YPfalse);
  T61 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYpurge_outdated_modules = YPmet(FUNCODEREF(YevalSg2cYpurge_outdated_modules),LITREF(lit_21),T61,ENVNUL,PNUL,YPfalse);
  T64 = YevalSg2cYpurge_outdated_modules;
  VARSET(YevalSg2cYpurge_outdated_modules,T64);
  lit_23 = YPPsym((P)"g2c-def-app");
  lit_24 = YPPsym((P)"appname");
  lit_25 = YPPsym((P)"modname");
  T65 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_25)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSg2cYLg2c_module_loaderG),Ynil);
  YevalSg2cYg2c_def_app = YPmet(FUNCODEREF(YevalSg2cYg2c_def_app),LITREF(lit_23),T65,ENVNUL,PNUL,YPfalse);
  T66 = YevalSg2cYg2c_def_app;
  VARSET(YevalSg2cYg2c_def_app,T66);
  lit_26 = YPPsym((P)"g2c-build-app");
  lit_27 = YPsb((P)"Searching for undefined global bindings.\n");
  T67 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYg2c_build_app = YPmet(FUNCODEREF(YevalSg2cYg2c_build_app),LITREF(lit_26),T67,ENVNUL,PNUL,YPfalse);
  T68 = YevalSg2cYg2c_build_app;
  VARSET(YevalSg2cYg2c_build_app,T68);
  lit_28 = YPPsym((P)"g2c-test");
  lit_29 = YPPsym((P)"x");
  lit_30 = YPsb((P)"g2c-");
  lit_31 = YPPsym((P)"eval/main");
  T69 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYg2c_test = YPmet(FUNCODEREF(YevalSg2cYg2c_test),LITREF(lit_28),T69,ENVNUL,PNUL,YPfalse);
  T70 = YevalSg2cYg2c_test;
  VARSET(YevalSg2cYg2c_test,T70);
  VARSET(YevalSg2cYTtmp_file_counterT,YPint((P)-1));
  lit_32 = YPPsym((P)"g2c-ast");
  lit_33 = YPPsym((P)"ast");
  lit_34 = YPPsym((P)"env");
  lit_35 = YPsb((P)"exp-%d-%d");
  T77 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T77,ENVNUL,PNUL,YPfalse);
  T76 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T76,ENVNUL,PNUL,YPfalse);
  T75 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T75,ENVNUL,PNUL,YPfalse);
  T74 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_25 = YPmet(FUNCODEREF(fun_25),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T73 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T72 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T72,ENVNUL,PNUL,YPfalse);
  T71 = YPsig(YPPlist(2,LITREF(lit_33),LITREF(lit_34)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_ast_28 = YPmet(FUNCODEREF(fun_g2c_ast_28),LITREF(lit_32),T71,ENVNUL,PNUL,YPfalse);
  T80 = BOUNDP(YevalSg2cYg2c_ast);
  if (T80 != YPfalse) {
    T79 = VARREF(YevalSg2cYg2c_ast);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_g2c_ast_28;
  T78 = XCALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(YevalSg2cYg2c_ast,T78);
  lit_36 = YPPsym((P)"g2c-exp");
  lit_37 = YPPsym((P)"exp");
  T82 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_34)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_exp_29 = YPmet(FUNCODEREF(fun_g2c_exp_29),LITREF(lit_36),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(YevalSg2cYg2c_exp);
  if (T85 != YPfalse) {
    T84 = VARREF(YevalSg2cYg2c_exp);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_g2c_exp_29;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YevalSg2cYg2c_exp,T83);
  lit_38 = YPPsym((P)"compile-load");
  lit_39 = YPsb((P)".so");
  lit_40 = YPsb((P)".so");
  T87 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_compile_load_30 = YPmet(FUNCODEREF(fun_compile_load_30),LITREF(lit_38),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YevalSg2cYcompile_load);
  if (T90 != YPfalse) {
    T89 = VARREF(YevalSg2cYcompile_load);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_compile_load_30;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YevalSg2cYcompile_load,T88);
  lit_41 = YPPsym((P)"g2c-eval");
  T92 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_34)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_eval_31 = YPmet(FUNCODEREF(fun_g2c_eval_31),LITREF(lit_41),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(YevalStopYg2c_eval);
  if (T95 != YPfalse) {
    T94 = VARREF(YevalStopYg2c_eval);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_g2c_eval_31;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YevalStopYg2c_eval,T93);
  T97 = YPsig(YPPlist(2,LITREF(lit_33),LITREF(lit_34)),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_eval_32 = YPmet(FUNCODEREF(fun_g2c_eval_32),LITREF(lit_41),T97,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(YevalStopYg2c_eval);
  if (T100 != YPfalse) {
    T99 = VARREF(YevalStopYg2c_eval);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_g2c_eval_32;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YevalStopYg2c_eval,T98);
  lit_42 = YPsb((P)"g2c");
  T102 = XCALL2(1,VARREF(YevalSg2cYg2c_def_app),LITREF(lit_42),LITREF(lit_31));
  VARSET(YevalSg2cYTg2c_appT,T102);
  lit_43 = YPPsym((P)"g2c-top");
  T103 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_g2c_top_33 = YPmet(FUNCODEREF(fun_g2c_top_33),LITREF(lit_43),T103,ENVNUL,PNUL,YPfalse);
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
  lit_44 = YPPsym((P)"g2c-clean");
  lit_45 = YPsb((P)"g2c");
  T108 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_g2c_clean_34 = YPmet(FUNCODEREF(fun_g2c_clean_34),LITREF(lit_44),T108,ENVNUL,PNUL,YPfalse);
  T111 = BOUNDP(YevalSg2cYg2c_clean);
  if (T111 != YPfalse) {
    T110 = VARREF(YevalSg2cYg2c_clean);
  } else {
    T110 = YPfalse;
  }
  T112 = fun_g2c_clean_34;
  T109 = XCALL2(1,VARREF(YPdefine_method),T110,T112);
  VARSET(YevalSg2cYg2c_clean,T109);
  lit_46 = YPPsym((P)"compute-ast");
  lit_47 = YPPsym((P)"filename");
  lit_48 = YPPsym((P)"ct-env");
  lit_49 = YPsb((P)"READ");
  lit_50 = YPsb((P)"AST");
  T113 = YPsig(YPPlist(2,LITREF(lit_47),LITREF(lit_48)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compute_ast_35 = YPmet(FUNCODEREF(fun_compute_ast_35),LITREF(lit_46),T113,ENVNUL,PNUL,YPfalse);
  T116 = BOUNDP(YevalSg2cYcompute_ast);
  if (T116 != YPfalse) {
    T115 = VARREF(YevalSg2cYcompute_ast);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_compute_ast_35;
  T114 = XCALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(YevalSg2cYcompute_ast,T114);
  lit_51 = YPPsym((P)"compute-program");
  lit_52 = YPPsym((P)"e");
  lit_53 = YPsb((P)"BOX");
  lit_54 = YPsb((P)"ANA");
  lit_55 = YPsb((P)"LFT");
  lit_56 = YPsb((P)"EXT");
  lit_57 = YPsb((P)"CLO");
  lit_58 = YPsb((P)"TMP");
  lit_59 = YPsb((P)"REG");
  T118 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_34)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compute_program_36 = YPmet(FUNCODEREF(fun_compute_program_36),LITREF(lit_51),T118,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(YevalSg2cYcompute_program);
  if (T121 != YPfalse) {
    T120 = VARREF(YevalSg2cYcompute_program);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_compute_program_36;
  T119 = XCALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(YevalSg2cYcompute_program,T119);
  lit_60 = YPPsym((P)"generate-c-module");
  lit_61 = YPPsym((P)"code-out");
  lit_62 = YPPsym((P)"prg");
  T123 = YPsig(YPPlist(4,LITREF(lit_61),LITREF(lit_52),LITREF(lit_62),LITREF(lit_20)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_c_module_37 = YPmet(FUNCODEREF(fun_generate_c_module_37),LITREF(lit_60),T123,ENVNUL,PNUL,YPfalse);
  T126 = BOUNDP(YevalSg2cYgenerate_c_module);
  if (T126 != YPfalse) {
    T125 = VARREF(YevalSg2cYgenerate_c_module);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_generate_c_module_37;
  T124 = XCALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(YevalSg2cYgenerate_c_module,T124);
  lit_63 = YPPsym((P)"generate-c-application");
  lit_64 = YPsb((P)"-init");
  T130 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T130,ENVNUL,PNUL,YPfalse);
  T129 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T129,ENVNUL,PNUL,YPfalse);
  T128 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_20)),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_c_application_40 = YPmet(FUNCODEREF(fun_generate_c_application_40),LITREF(lit_63),T128,ENVNUL,PNUL,YPfalse);
  T133 = BOUNDP(YevalSg2cYgenerate_c_application);
  if (T133 != YPfalse) {
    T132 = VARREF(YevalSg2cYgenerate_c_application);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_generate_c_application_40;
  T131 = XCALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(YevalSg2cYgenerate_c_application,T131);
  lit_65 = YPPsym((P)"generate-makefile");
  lit_66 = YPsb((P)"-init");
  lit_67 = YPsb((P)"Makefile");
  lit_68 = YPsb((P)"C_OBJS_DD = $(patsubst %,..");
  lit_69 = YPsb((P)"%,$(C_OBJS))\n");
  lit_70 = YPsb((P)": ..");
  lit_71 = YPsb((P)"grt.h\n");
  lit_72 = YPsb((P)"\t$(CC) -I.. $(CFLAGS) -DDEFAULT_GOO_ROOT=\\\"$(GOO_ROOT)\\\" -c -o $@ $<\n\n");
  lit_73 = YPsb((P)"OBJS = \\\n");
  lit_74 = YPPsym((P)"put-obj");
  lit_75 = YPsb((P)"\t");
  lit_76 = YPsb((P)" \\\n");
  lit_77 = YPPsym((P)"n");
  lit_78 = YPsb((P)"\t");
  lit_79 = YPsb((P)"\n\n");
  lit_80 = YPsb((P)": $(C_OBJS_DD) $(OBJS)\n");
  lit_81 = YPsb((P)"\t$(CC) $(LDFLAGS) -o ");
  lit_82 = YPsb((P)" $(C_OBJS_DD) $(OBJS) $(LIBS)\n\n");
  lit_83 = YPsb((P)"clean:\n\trm -f ");
  lit_84 = YPsb((P)" $(OBJS)\n");
  T141 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_put_obj_41 = YPmet(FUNCODEREF(fun_put_obj_41),LITREF(lit_74),T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(YPPlist(1,LITREF(lit_77)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T139,ENVNUL,PNUL,YPfalse);
  T138 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T138,ENVNUL,PNUL,YPfalse);
  T137 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T137,ENVNUL,PNUL,YPfalse);
  T136 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_46 = YPmet(FUNCODEREF(fun_46),YPfalse,T136,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_generate_makefile_47 = YPmet(FUNCODEREF(fun_generate_makefile_47),LITREF(lit_65),T135,ENVNUL,PNUL,YPfalse);
  T144 = BOUNDP(YevalSg2cYgenerate_makefile);
  if (T144 != YPfalse) {
    T143 = VARREF(YevalSg2cYgenerate_makefile);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_generate_makefile_47;
  T142 = XCALL2(1,VARREF(YPdefine_method),T143,T145);
  VARSET(YevalSg2cYgenerate_makefile,T142);
  lit_85 = YPPsym((P)"pp");
  T146 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_pp_48 = YPmet(FUNCODEREF(fun_pp_48),LITREF(lit_85),T146,ENVNUL,PNUL,YPfalse);
  T149 = BOUNDP(YevalSg2cYpp);
  if (T149 != YPfalse) {
    T148 = VARREF(YevalSg2cYpp);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_pp_48;
  T147 = XCALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(YevalSg2cYpp,T147);
  lit_86 = YPPsym((P)"generate-header");
  lit_87 = YPsb((P)"/* GOO 2 C $REVISION: 0.120 $ \n");
  lit_88 = YPsb((P)"  */\n\n#include \"grt.h\"\n");
  lit_89 = YPsb((P)"#include \"dlgrt.h\"\n");
  T151 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_52)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_header_49 = YPmet(FUNCODEREF(fun_generate_header_49),LITREF(lit_86),T151,ENVNUL,PNUL,YPfalse);
  T154 = BOUNDP(YevalSg2cYgenerate_header);
  if (T154 != YPfalse) {
    T153 = VARREF(YevalSg2cYgenerate_header);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_generate_header_49;
  T152 = XCALL2(1,VARREF(YPdefine_method),T153,T155);
  VARSET(YevalSg2cYgenerate_header,T152);
  lit_90 = YPPsym((P)"generate-trailer");
  lit_91 = YPsb((P)"\n/* END OF GENERATED CODE. */\n");
  T156 = YPsig(YPPlist(1,LITREF(lit_61)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_generate_trailer_50 = YPmet(FUNCODEREF(fun_generate_trailer_50),LITREF(lit_90),T156,ENVNUL,PNUL,YPfalse);
  T159 = BOUNDP(YevalSg2cYgenerate_trailer);
  if (T159 != YPfalse) {
    T158 = VARREF(YevalSg2cYgenerate_trailer);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_generate_trailer_50;
  T157 = XCALL2(1,VARREF(YPdefine_method),T158,T160);
  VARSET(YevalSg2cYgenerate_trailer,T157);
  lit_92 = YPPsym((P)"generate-global-environment");
  lit_93 = YPsb((P)"\n/* MODULE ENVIRONMENT: ");
  lit_94 = YPsb((P)" */\n\n");
  lit_95 = YPPsym((P)"binding");
  T162 = YPsig(YPPlist(1,LITREF(lit_95)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_global_environment_52 = YPmet(FUNCODEREF(fun_generate_global_environment_52),LITREF(lit_92),T161,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(YevalSg2cYgenerate_global_environment);
  if (T165 != YPfalse) {
    T164 = VARREF(YevalSg2cYgenerate_global_environment);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_generate_global_environment_52;
  T163 = XCALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(YevalSg2cYgenerate_global_environment,T163);
  lit_96 = YPPsym((P)"generate-global-binding");
  lit_97 = YPPsym((P)"imported?");
  lit_98 = YPPsym((P)"gb");
  lit_99 = YPPsym((P)"global");
  lit_100 = YPPsym((P)"runtime");
  lit_101 = YPPsym((P)"dynamic");
  lit_102 = YPsb((P)"RTV");
  lit_103 = YPsb((P)"DYN");
  lit_104 = YPsb((P)"");
  lit_105 = YPsb((P)"EXT");
  lit_106 = YPsb((P)"DEF");
  lit_107 = YPsb((P)"(");
  lit_108 = YPsb((P)",\"");
  lit_109 = YPsb((P)"\",\"");
  lit_110 = YPsb((P)"\");\n");
  T167 = YPsig(YPPlist(3,LITREF(lit_61),LITREF(lit_97),LITREF(lit_98)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_global_binding_53 = YPmet(FUNCODEREF(fun_generate_global_binding_53),LITREF(lit_96),T167,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(YevalSg2cYgenerate_global_binding);
  if (T170 != YPfalse) {
    T169 = VARREF(YevalSg2cYgenerate_global_binding);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_generate_global_binding_53;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YevalSg2cYgenerate_global_binding,T168);
  lit_111 = YPsb((P)"Y");
  VARSET(YevalSg2cYDmodule_separator,LITREF(lit_111));
  lit_112 = YPsb((P)"_");
  VARSET(YevalSg2cYDlocal_suffix,LITREF(lit_112));
  lit_113 = YPsb((P)"F");
  VARSET(YevalSg2cYDhygiene_marker,LITREF(lit_113));
  lit_114 = YPsb((P)"Z");
  VARSET(YevalSg2cYDescape_separator,LITREF(lit_114));
  lit_115 = YPsb((P)"I");
  VARSET(YevalSg2cYDiep_suffix,LITREF(lit_115));
  lit_116 = YPsb((P)"M");
  T173 = VARSET(YevalSg2cYDmethod_mangled_marker_string,LITREF(lit_116));
  T172 = T173;
  return T172;
}

P YevalSg2cY___main_1___() {
  P x_3159F7521;
  P x_3157F7520;
  P x_3155F7519;
  P x_3153F7518;
  P tableF7517;
  P vecF7516;
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
  P T272,T273,T274,T275,T276,T277,T278,T279;
DEFCREGS();
loop:
  T0 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDmodule_separator),YPint((P)0));
  VARSET(YevalSg2cYDmodule_marker,T0);
  T1 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDlocal_suffix),YPint((P)0));
  VARSET(YevalSg2cYDlocal_marker,T1);
  T2 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDhygiene_marker),YPint((P)0));
  VARSET(YevalSg2cYDhygiene_char,T2);
  T3 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDescape_separator),YPint((P)0));
  VARSET(YevalSg2cYDescape_marker,T3);
  T4 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDiep_suffix),YPint((P)0));
  VARSET(YevalSg2cYDiep_marker,T4);
  T5 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDmethod_mangled_marker_string),YPint((P)0));
  VARSET(YevalSg2cYDmethod_mangled_marker,T5);
  VARSET(YevalSg2cYDmin_character_code,YPint((P)0));
  VARSET(YevalSg2cYDmax_character_code,YPint((P)255));
  T6 = XCALL1(1,VARREF(Ynew),VARREF(YgooScolsSvecYLvecG));
  VARSET(YevalSg2cYTmangle_bufferT,T6);
  lit_117 = XCALLN(1, Ytup, 2, YPchr((P)45), YPchr((P)95));
  lit_118 = XCALLN(1, Ytup, 2, YPchr((P)33), YPchr((P)88));
  lit_119 = XCALLN(1, Ytup, 2, YPchr((P)36), YPchr((P)68));
  lit_120 = XCALLN(1, Ytup, 2, YPchr((P)37), YPchr((P)80));
  lit_121 = XCALLN(1, Ytup, 2, YPchr((P)42), YPchr((P)84));
  lit_122 = XCALLN(1, Ytup, 2, YPchr((P)47), YPchr((P)83));
  lit_123 = XCALLN(1, Ytup, 2, YPchr((P)60), YPchr((P)76));
  lit_124 = XCALLN(1, Ytup, 2, YPchr((P)62), YPchr((P)71));
  lit_125 = XCALLN(1, Ytup, 2, YPchr((P)63), YPchr((P)81));
  lit_126 = XCALLN(1, Ytup, 2, YPchr((P)43), YPchr((P)65));
  lit_127 = XCALLN(1, Ytup, 2, YPchr((P)38), YPchr((P)66));
  lit_128 = XCALLN(1, Ytup, 2, YPchr((P)94), YPchr((P)67));
  lit_129 = XCALLN(1, Ytup, 2, YPchr((P)95), YPchr((P)85));
  lit_130 = XCALLN(1, Ytup, 2, YPchr((P)64), YPchr((P)79));
  lit_131 = XCALLN(1, Ytup, 2, YPchr((P)61), YPchr((P)69));
  lit_132 = XCALLN(1, Ytup, 2, YPchr((P)126), YPchr((P)78));
  lit_133 = XCALLN(1, Ytup, 2, YPchr((P)124), YPchr((P)75));
  lit_134 = XCALLN(1, Ytup, 2, YPchr((P)46), YPchr((P)73));
  T7 = XCALLN(1,VARREF(Ytup),18,LITREF(lit_117),LITREF(lit_118),LITREF(lit_119),LITREF(lit_120),LITREF(lit_121),LITREF(lit_122),LITREF(lit_123),LITREF(lit_124),LITREF(lit_125),LITREF(lit_126),LITREF(lit_127),LITREF(lit_128),LITREF(lit_129),LITREF(lit_130),LITREF(lit_131),LITREF(lit_132),LITREF(lit_133),LITREF(lit_134));
  VARSET(YevalSg2cYDmangles_data,T7);
  lit_135 = YPPsym((P)"char-buffer-as-string");
  lit_136 = YPPsym((P)"buffer");
  lit_137 = YPPsym((P)"loop");
  lit_138 = YPPsym((P)"i");
  T9 = YPsig(YPPlist(1,LITREF(lit_138)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_54 = YPmet(FUNCODEREF(fun_loop_54),LITREF(lit_137),T9,ENVNUL,PNUL,YPfalse);
  T8 = YPsig(YPPlist(1,LITREF(lit_136)),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YevalSg2cYchar_buffer_as_string = YPmet(FUNCODEREF(YevalSg2cYchar_buffer_as_string),LITREF(lit_135),T8,ENVNUL,PNUL,YPfalse);
  T10 = YevalSg2cYchar_buffer_as_string;
  VARSET(YevalSg2cYchar_buffer_as_string,T10);
  lit_139 = YPsb((P)"\\t");
  lit_140 = YPsb((P)"\\f");
  lit_141 = YPsb((P)"\\r");
  lit_142 = YPsb((P)"\\n");
  lit_143 = YPsb((P)"\\\"");
  lit_144 = YPsb((P)"\\\\");
  T13 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T12 = XCALL2(1,VARREF(YgooScolsScolYfill),T13,YPfalse);
  vecF7516 = T12;
  T14 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)9));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_139),vecF7516,T14);
  T15 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)12));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_140),vecF7516,T15);
  T16 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)13));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_141),vecF7516,T16);
  T17 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)10));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_142),vecF7516,T17);
  T18 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)34));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_143),vecF7516,T18);
  T19 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)92));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_144),vecF7516,T19);
  T20 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),vecF7516);
  T11 = T20;
  VARSET(YevalSg2cYDc_escapes,T11);
  lit_145 = YPPsym((P)"mangle-string-literal");
  lit_146 = YPPsym((P)"str");
  T22 = YPsig(YPPlist(1,LITREF(lit_138)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_56 = YPmet(FUNCODEREF(fun_loop_56),LITREF(lit_137),T22,ENVNUL,PNUL,YPfalse);
  T21 = YPsig(YPPlist(1,LITREF(lit_146)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_57 = YPmet(FUNCODEREF(fun_mangle_string_literal_57),LITREF(lit_145),T21,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YevalSg2cYmangle_string_literal);
  if (T25 != YPfalse) {
    T24 = VARREF(YevalSg2cYmangle_string_literal);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_mangle_string_literal_57;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YevalSg2cYmangle_string_literal,T23);
  lit_147 = YPPsym((P)"sym");
  T27 = YPsig(YPPlist(1,LITREF(lit_147)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_58 = YPmet(FUNCODEREF(fun_mangle_string_literal_58),LITREF(lit_145),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YevalSg2cYmangle_string_literal);
  if (T30 != YPfalse) {
    T29 = VARREF(YevalSg2cYmangle_string_literal);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_mangle_string_literal_58;
  T28 = XCALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YevalSg2cYmangle_string_literal,T28);
  lit_148 = YPsb((P)"0123456789");
  VARSET(YevalSg2cYDnumber_characters,LITREF(lit_148));
  lit_149 = YPPsym((P)"mangle-integer");
  lit_150 = YPPsym((P)"number");
  lit_151 = YPPsym((P)"process-integer");
  lit_152 = YPPsym((P)"index");
  T33 = YPsig(YPPlist(2,LITREF(lit_150),LITREF(lit_152)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_process_integer_59 = YPmet(FUNCODEREF(fun_process_integer_59),LITREF(lit_151),T33,ENVNUL,PNUL,YPfalse);
  T32 = YPsig(YPPlist(1,LITREF(lit_150)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_integer_60 = YPmet(FUNCODEREF(fun_mangle_integer_60),LITREF(lit_149),T32,ENVNUL,PNUL,YPfalse);
  T36 = BOUNDP(YevalSg2cYmangle_integer);
  if (T36 != YPfalse) {
    T35 = VARREF(YevalSg2cYmangle_integer);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_mangle_integer_60;
  T34 = XCALL2(1,VARREF(YPdefine_method),T35,T37);
  VARSET(YevalSg2cYmangle_integer,T34);
  lit_153 = YPPsym((P)"x-3153");
  lit_154 = YPPsym((P)"x-3152");
  lit_155 = YPPsym((P)"x-3155");
  lit_156 = YPPsym((P)"x-3154");
  lit_157 = YPPsym((P)"x-3157");
  lit_158 = YPPsym((P)"x-3156");
  lit_159 = YPPsym((P)"x-3159");
  lit_160 = YPPsym((P)"x-3158");
  T41 = YPsig(YPPlist(1,LITREF(lit_154)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3153_61 = YPmet(FUNCODEREF(fun_x_3153_61),LITREF(lit_153),T41,ENVNUL,PNUL,YPfalse);
  T40 = YPsig(YPPlist(1,LITREF(lit_156)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3155_62 = YPmet(FUNCODEREF(fun_x_3155_62),LITREF(lit_155),T40,ENVNUL,PNUL,YPfalse);
  T39 = YPsig(YPPlist(1,LITREF(lit_158)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3157_63 = YPmet(FUNCODEREF(fun_x_3157_63),LITREF(lit_157),T39,ENVNUL,PNUL,YPfalse);
  T38 = YPsig(YPPlist(1,LITREF(lit_160)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3159_64 = YPmet(FUNCODEREF(fun_x_3159_64),LITREF(lit_159),T38,ENVNUL,PNUL,YPfalse);
  T44 = XCALL2(1,VARREF(YgooSmathYA),VARREF(YevalSg2cYDmax_character_code),YPint((P)1));
  T43 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),T44);
  tableF7517 = T43;
  T45 = FUNSHELL(1,fun_x_3153_61,2);
  x_3153F7518 = T45;
  FUNINIT(x_3153F7518, 2,tableF7517,x_3153F7518);
  T48 = XCALL3(1,VARREF(YgooScolsSrangeYrange),VARREF(YevalSg2cYDmin_character_code),VARREF(YgooSmagYLE),VARREF(YevalSg2cYDmax_character_code));
  T47 = XCALL1(1,VARREF(YgooScolsScolYenum),T48);
  T46 = XCALL1(0,x_3153F7518,T47);
  T49 = FUNSHELL(1,fun_x_3155_62,2);
  x_3155F7519 = T49;
  FUNINIT(x_3155F7519, 2,tableF7517,x_3155F7519);
  T51 = XCALL1(1,VARREF(YgooScolsScolYenum),VARREF(YevalSg2cYDmangles_data));
  T50 = XCALL1(0,x_3155F7519,T51);
  T52 = FUNSHELL(1,fun_x_3157_63,2);
  x_3157F7520 = T52;
  FUNINIT(x_3157F7520, 2,tableF7517,x_3157F7520);
  T56 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)97));
  T57 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)122));
  T55 = XCALL3(1,VARREF(YgooScolsSrangeYrange),T56,VARREF(YgooSmagYLE),T57);
  T54 = XCALL1(1,VARREF(YgooScolsScolYenum),T55);
  T53 = XCALL1(0,x_3157F7520,T54);
  T58 = FUNSHELL(1,fun_x_3159_64,2);
  x_3159F7521 = T58;
  FUNINIT(x_3159F7521, 2,tableF7517,x_3159F7521);
  T62 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)48));
  T63 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)57));
  T61 = XCALL3(1,VARREF(YgooScolsSrangeYrange),T62,VARREF(YgooSmagYLE),T63);
  T60 = XCALL1(1,VARREF(YgooScolsScolYenum),T61);
  T59 = XCALL1(0,x_3159F7521,T60);
  T42 = tableF7517;
  VARSET(YevalSg2cYDname_mangler_table,T42);
  lit_161 = YPPsym((P)"mangler-reset");
  T64 = YPsig(YPPlist(1,LITREF(lit_136)),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangler_reset = YPmet(FUNCODEREF(YevalSg2cYmangler_reset),LITREF(lit_161),T64,ENVNUL,PNUL,YPfalse);
  T65 = YevalSg2cYmangler_reset;
  VARSET(YevalSg2cYmangler_reset,T65);
  lit_162 = YPPsym((P)"mangle-name-into");
  lit_163 = YPPsym((P)"buf");
  lit_164 = YPPsym((P)"x-3161");
  lit_165 = YPPsym((P)"x-3160");
  T67 = YPsig(YPPlist(1,LITREF(lit_165)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3161_66 = YPmet(FUNCODEREF(fun_x_3161_66),LITREF(lit_164),T67,ENVNUL,PNUL,YPfalse);
  T66 = YPsig(YPPlist(2,LITREF(lit_163),LITREF(lit_15)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_name_into = YPmet(FUNCODEREF(YevalSg2cYmangle_name_into),LITREF(lit_162),T66,ENVNUL,PNUL,YPfalse);
  T68 = YevalSg2cYmangle_name_into;
  VARSET(YevalSg2cYmangle_name_into,T68);
  lit_166 = YPPsym((P)"mangle-raw-name");
  T69 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_68 = YPmet(FUNCODEREF(fun_mangle_raw_name_68),LITREF(lit_166),T69,ENVNUL,PNUL,YPfalse);
  T72 = BOUNDP(YevalSg2cYmangle_raw_name);
  if (T72 != YPfalse) {
    T71 = VARREF(YevalSg2cYmangle_raw_name);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_mangle_raw_name_68;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YevalSg2cYmangle_raw_name,T70);
  T74 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_69 = YPmet(FUNCODEREF(fun_mangle_raw_name_69),LITREF(lit_166),T74,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YevalSg2cYmangle_raw_name);
  if (T77 != YPfalse) {
    T76 = VARREF(YevalSg2cYmangle_raw_name);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_mangle_raw_name_69;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YevalSg2cYmangle_raw_name,T75);
  lit_167 = YPPsym((P)"mangle-local-name");
  T79 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_70 = YPmet(FUNCODEREF(fun_mangle_local_name_70),LITREF(lit_167),T79,ENVNUL,PNUL,YPfalse);
  T82 = BOUNDP(YevalSg2cYmangle_local_name);
  if (T82 != YPfalse) {
    T81 = VARREF(YevalSg2cYmangle_local_name);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_mangle_local_name_70;
  T80 = XCALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(YevalSg2cYmangle_local_name,T80);
  T84 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_71 = YPmet(FUNCODEREF(fun_mangle_local_name_71),LITREF(lit_167),T84,ENVNUL,PNUL,YPfalse);
  T87 = BOUNDP(YevalSg2cYmangle_local_name);
  if (T87 != YPfalse) {
    T86 = VARREF(YevalSg2cYmangle_local_name);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_mangle_local_name_71;
  T85 = XCALL2(1,VARREF(YPdefine_method),T86,T88);
  VARSET(YevalSg2cYmangle_local_name,T85);
  lit_168 = YPPsym((P)"return");
  lit_169 = YPPsym((P)"x-3165");
  lit_170 = YPPsym((P)"msg");
  lit_171 = YPPsym((P)"args");
  lit_172 = YPPsym((P)"or/set");
  lit_173 = YPsb((P)"Match Pattern Failure");
  lit_174 = YPPsym((P)"or");
  lit_175 = YPPsym((P)"set");
  T91 = YPsig(YPPlist(2,LITREF(lit_170),LITREF(lit_171)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3165_72 = YPmet(FUNCODEREF(fun_x_3165_72),LITREF(lit_169),T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(YPPlist(1,LITREF(lit_168)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T90,ENVNUL,PNUL,YPfalse);
  T89 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_74 = YPmet(FUNCODEREF(fun_74),YPfalse,T89,ENVNUL,PNUL,YPfalse);
  T92 = fun_74;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"or/set"),T92);
  lit_176 = YPPsym((P)"buf-cat2!");
  T94 = YPsig(YPPlist(1,LITREF(lit_138)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_75 = YPmet(FUNCODEREF(fun_loop_75),LITREF(lit_137),T94,ENVNUL,PNUL,YPfalse);
  T93 = YPsig(YPPlist(2,LITREF(lit_163),LITREF(lit_15)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYbuf_cat2X = YPmet(FUNCODEREF(YevalSg2cYbuf_cat2X),LITREF(lit_176),T93,ENVNUL,PNUL,YPfalse);
  T95 = YevalSg2cYbuf_cat2X;
  VARSET(YevalSg2cYbuf_cat2X,T95);
  lit_177 = YPPsym((P)"mangle-module-into");
  T96 = YPsig(YPPlist(2,LITREF(lit_163),LITREF(lit_20)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_mangle_module_into_77 = YPmet(FUNCODEREF(fun_mangle_module_into_77),LITREF(lit_177),T96,ENVNUL,PNUL,YPfalse);
  T99 = BOUNDP(YevalSg2cYmangle_module_into);
  if (T99 != YPfalse) {
    T98 = VARREF(YevalSg2cYmangle_module_into);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_mangle_module_into_77;
  T97 = XCALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(YevalSg2cYmangle_module_into,T97);
  lit_178 = YPPsym((P)"mangle-global-name");
  T101 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_15)),YPPlist(2,VARREF(YLanyG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_78 = YPmet(FUNCODEREF(fun_mangle_global_name_78),LITREF(lit_178),T101,ENVNUL,PNUL,YPfalse);
  T104 = BOUNDP(YevalSg2cYmangle_global_name);
  if (T104 != YPfalse) {
    T103 = VARREF(YevalSg2cYmangle_global_name);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_mangle_global_name_78;
  T102 = XCALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(YevalSg2cYmangle_global_name,T102);
  T106 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_15)),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_79 = YPmet(FUNCODEREF(fun_mangle_global_name_79),LITREF(lit_178),T106,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(YevalSg2cYmangle_global_name);
  if (T109 != YPfalse) {
    T108 = VARREF(YevalSg2cYmangle_global_name);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_mangle_global_name_79;
  T107 = XCALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YevalSg2cYmangle_global_name,T107);
  lit_179 = YPPsym((P)"mangle-boot-name");
  T111 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_boot_name = YPmet(FUNCODEREF(YevalSg2cYmangle_boot_name),LITREF(lit_179),T111,ENVNUL,PNUL,YPfalse);
  T112 = YevalSg2cYmangle_boot_name;
  VARSET(YevalSg2cYmangle_boot_name,T112);
  lit_180 = YPPsym((P)"mangle-quotation-name");
  lit_181 = YPsb((P)"lit_");
  T113 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_quotation_name = YPmet(FUNCODEREF(YevalSg2cYmangle_quotation_name),LITREF(lit_180),T113,ENVNUL,PNUL,YPfalse);
  T114 = YevalSg2cYmangle_quotation_name;
  VARSET(YevalSg2cYmangle_quotation_name,T114);
  lit_182 = YPPsym((P)"mangle-binding");
  lit_183 = YPPsym((P)"quotation");
  T115 = YPsig(YPPlist(1,LITREF(lit_95)),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_82 = YPmet(FUNCODEREF(fun_mangle_binding_82),LITREF(lit_182),T115,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YevalSg2cYmangle_binding);
  if (T118 != YPfalse) {
    T117 = VARREF(YevalSg2cYmangle_binding);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_mangle_binding_82;
  T116 = XCALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YevalSg2cYmangle_binding,T116);
  lit_184 = YPPsym((P)"mangle-local-marked-name");
  lit_185 = YPPsym((P)"marker");
  T120 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_185)),YPPlist(2,VARREF(YLstrG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_local_marked_name = YPmet(FUNCODEREF(YevalSg2cYmangle_local_marked_name),LITREF(lit_184),T120,ENVNUL,PNUL,YPfalse);
  T121 = YevalSg2cYmangle_local_marked_name;
  VARSET(YevalSg2cYmangle_local_marked_name,T121);
  T122 = YPsig(YPPlist(1,LITREF(lit_95)),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_84 = YPmet(FUNCODEREF(fun_mangle_binding_84),LITREF(lit_182),T122,ENVNUL,PNUL,YPfalse);
  T125 = BOUNDP(YevalSg2cYmangle_binding);
  if (T125 != YPfalse) {
    T124 = VARREF(YevalSg2cYmangle_binding);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_mangle_binding_84;
  T123 = XCALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(YevalSg2cYmangle_binding,T123);
  T127 = YPsig(YPPlist(1,LITREF(lit_95)),YPPlist(1,VARREF(YevalSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_85 = YPmet(FUNCODEREF(fun_mangle_binding_85),LITREF(lit_182),T127,ENVNUL,PNUL,YPfalse);
  T130 = BOUNDP(YevalSg2cYmangle_binding);
  if (T130 != YPfalse) {
    T129 = VARREF(YevalSg2cYmangle_binding);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_mangle_binding_85;
  T128 = XCALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(YevalSg2cYmangle_binding,T128);
  lit_186 = YPPsym((P)"x-3169");
  lit_187 = YPPsym((P)"for-commas");
  lit_188 = YPPsym((P)"let");
  lit_189 = YPPsym((P)"for");
  lit_190 = YPPsym((P)"first?");
  lit_191 = YPPsym((P)"first-then");
  lit_192 = YPPsym((P)"op");
  lit_193 = YPPsym((P)"unless");
  lit_194 = YPPsym((P)"put");
  T134 = YPsig(YPPlist(2,LITREF(lit_170),LITREF(lit_171)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3169_86 = YPmet(FUNCODEREF(fun_x_3169_86),LITREF(lit_186),T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(YPPlist(1,LITREF(lit_168)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T132,ENVNUL,PNUL,YPfalse);
  T135 = fun_88;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"for-commas"),T135);
  lit_195 = YPPsym((P)"x-3173");
  lit_196 = YPPsym((P)"between-parentheses");
  T138 = YPsig(YPPlist(2,LITREF(lit_170),LITREF(lit_171)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3173_89 = YPmet(FUNCODEREF(fun_x_3173_89),LITREF(lit_195),T138,ENVNUL,PNUL,YPfalse);
  T137 = YPsig(YPPlist(1,LITREF(lit_168)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_90 = YPmet(FUNCODEREF(fun_90),YPfalse,T137,ENVNUL,PNUL,YPfalse);
  T136 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T136,ENVNUL,PNUL,YPfalse);
  T139 = fun_91;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"between-parentheses"),T139);
  lit_197 = YPPsym((P)"x-3177");
  lit_198 = YPPsym((P)"between-parentheses-comma-separated");
  lit_199 = YPPsym((P)"forms");
  lit_200 = YPPsym((P)"body");
  T143 = YPsig(YPPlist(2,LITREF(lit_170),LITREF(lit_171)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3177_92 = YPmet(FUNCODEREF(fun_x_3177_92),LITREF(lit_197),T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(YPPlist(3,LITREF(lit_199),LITREF(lit_200),LITREF(lit_190)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_93 = YPmet(FUNCODEREF(fun_loop_93),LITREF(lit_137),T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(YPPlist(1,LITREF(lit_168)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_94 = YPmet(FUNCODEREF(fun_94),YPfalse,T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_95 = YPmet(FUNCODEREF(fun_95),YPfalse,T140,ENVNUL,PNUL,YPfalse);
  T144 = fun_95;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"between-parentheses-comma-separated"),T144);
  lit_201 = YPPsym((P)"gen-result");
  lit_202 = YPPsym((P)"d");
  lit_203 = YPsb((P)"T");
  lit_204 = YPsb((P)" = ");
  T145 = YPsig(YPPlist(3,LITREF(lit_52),LITREF(lit_202),LITREF(lit_61)),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_gen_result_96 = YPmet(FUNCODEREF(fun_gen_result_96),LITREF(lit_201),T145,ENVNUL,PNUL,YPfalse);
  T148 = BOUNDP(YevalSg2cYgen_result);
  if (T148 != YPfalse) {
    T147 = VARREF(YevalSg2cYgen_result);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_gen_result_96;
  T146 = XCALL2(1,VARREF(YPdefine_method),T147,T149);
  VARSET(YevalSg2cYgen_result,T146);
  lit_205 = YPPsym((P)"gen-depth");
  lit_206 = YPPsym((P)"x-3180");
  lit_207 = YPPsym((P)"x-3179");
  lit_208 = YPsb((P)"  ");
  T151 = YPsig(YPPlist(1,LITREF(lit_207)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3180_97 = YPmet(FUNCODEREF(fun_x_3180_97),LITREF(lit_206),T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(YPPlist(2,LITREF(lit_202),LITREF(lit_61)),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_depth_98 = YPmet(FUNCODEREF(fun_gen_depth_98),LITREF(lit_205),T150,ENVNUL,PNUL,YPfalse);
  T154 = BOUNDP(YevalSg2cYgen_depth);
  if (T154 != YPfalse) {
    T153 = VARREF(YevalSg2cYgen_depth);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_gen_depth_98;
  T152 = XCALL2(1,VARREF(YPdefine_method),T153,T155);
  VARSET(YevalSg2cYgen_depth,T152);
  lit_209 = YPPsym((P)"x-3184");
  lit_210 = YPPsym((P)"with-statement");
  lit_211 = YPPsym((P)"seq");
  lit_212 = YPPsym((P)"puts");
  lit_213 = YPsb((P)";\n");
  T158 = YPsig(YPPlist(2,LITREF(lit_170),LITREF(lit_171)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3184_99 = YPmet(FUNCODEREF(fun_x_3184_99),LITREF(lit_209),T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(YPPlist(1,LITREF(lit_168)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_100 = YPmet(FUNCODEREF(fun_100),YPfalse,T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_101 = YPmet(FUNCODEREF(fun_101),YPfalse,T156,ENVNUL,PNUL,YPfalse);
  T159 = fun_101;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-statement"),T159);
  lit_214 = YPPsym((P)"x-3188");
  lit_215 = YPPsym((P)"with-expression");
  T162 = YPsig(YPPlist(2,LITREF(lit_170),LITREF(lit_171)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3188_102 = YPmet(FUNCODEREF(fun_x_3188_102),LITREF(lit_214),T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(YPPlist(1,LITREF(lit_168)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_103 = YPmet(FUNCODEREF(fun_103),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_104 = YPmet(FUNCODEREF(fun_104),YPfalse,T160,ENVNUL,PNUL,YPfalse);
  T163 = fun_104;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-expression"),T163);
  lit_216 = YPPsym((P)"x-3192");
  lit_217 = YPPsym((P)"with-used-expression");
  lit_218 = YPPsym((P)"when");
  lit_219 = YPPsym((P)"program-register");
  T166 = YPsig(YPPlist(2,LITREF(lit_170),LITREF(lit_171)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3192_105 = YPmet(FUNCODEREF(fun_x_3192_105),LITREF(lit_216),T166,ENVNUL,PNUL,YPfalse);
  T165 = YPsig(YPPlist(1,LITREF(lit_168)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_106 = YPmet(FUNCODEREF(fun_106),YPfalse,T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_107 = YPmet(FUNCODEREF(fun_107),YPfalse,T164,ENVNUL,PNUL,YPfalse);
  T167 = fun_107;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-used-expression"),T167);
  lit_220 = YPPsym((P)"generate-quotation-forwards");
  lit_221 = YPPsym((P)"qb*");
  lit_222 = YPsb((P)"\n/* FORWARD QUOTATIONS: */\n\n");
  lit_223 = YPPsym((P)"x-3194");
  lit_224 = YPPsym((P)"x-3193");
  lit_225 = YPsb((P)"DEFLIT(lit_");
  lit_226 = YPsb((P)");\n");
  T169 = YPsig(YPPlist(1,LITREF(lit_224)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3194_108 = YPmet(FUNCODEREF(fun_x_3194_108),LITREF(lit_223),T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_221)),YPPlist(2,VARREF(YLanyG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_forwards_109 = YPmet(FUNCODEREF(fun_generate_quotation_forwards_109),LITREF(lit_220),T168,ENVNUL,PNUL,YPfalse);
  T172 = BOUNDP(YevalSg2cYgenerate_quotation_forwards);
  if (T172 != YPfalse) {
    T171 = VARREF(YevalSg2cYgenerate_quotation_forwards);
  } else {
    T171 = YPfalse;
  }
  T173 = fun_generate_quotation_forwards_109;
  T170 = XCALL2(1,VARREF(YPdefine_method),T171,T173);
  VARSET(YevalSg2cYgenerate_quotation_forwards,T170);
  lit_227 = YPPsym((P)"generate-quotations");
  lit_228 = YPPsym((P)"x-3197");
  lit_229 = YPPsym((P)"x-3196");
  lit_230 = YPsb((P)"lit_");
  lit_231 = YPsb((P)" = ");
  T175 = YPsig(YPPlist(1,LITREF(lit_229)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3197_110 = YPmet(FUNCODEREF(fun_x_3197_110),LITREF(lit_228),T175,ENVNUL,PNUL,YPfalse);
  T174 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_221)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotations_111 = YPmet(FUNCODEREF(fun_generate_quotations_111),LITREF(lit_227),T174,ENVNUL,PNUL,YPfalse);
  T178 = BOUNDP(YevalSg2cYgenerate_quotations);
  if (T178 != YPfalse) {
    T177 = VARREF(YevalSg2cYgenerate_quotations);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_generate_quotations_111;
  T176 = XCALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(YevalSg2cYgenerate_quotations,T176);
  lit_232 = YPPsym((P)"false-name");
  lit_233 = YPsb((P)"%false");
  T180 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_false_name_112 = YPmet(FUNCODEREF(fun_false_name_112),LITREF(lit_232),T180,ENVNUL,PNUL,YPfalse);
  T183 = BOUNDP(YevalSg2cYfalse_name);
  if (T183 != YPfalse) {
    T182 = VARREF(YevalSg2cYfalse_name);
  } else {
    T182 = YPfalse;
  }
  T184 = fun_false_name_112;
  T181 = XCALL2(1,VARREF(YPdefine_method),T182,T184);
  VARSET(YevalSg2cYfalse_name,T181);
  lit_234 = YPPsym((P)"generate-quotation");
  lit_235 = YPPsym((P)"qb");
  lit_236 = YPsb((P)"%true");
  lit_237 = YPsb((P)"%false");
  T185 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_235)),YPPlist(2,VARREF(YLanyG),VARREF(YLlogG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_113 = YPmet(FUNCODEREF(fun_generate_quotation_113),LITREF(lit_234),T185,ENVNUL,PNUL,YPfalse);
  T188 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T188 != YPfalse) {
    T187 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T187 = YPfalse;
  }
  T189 = fun_generate_quotation_113;
  T186 = XCALL2(1,VARREF(YPdefine_method),T187,T189);
  VARSET(YevalSg2cYgenerate_quotation,T186);
  lit_238 = YPsb((P)"nil");
  T191 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T190 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_235)),YPPlist(2,VARREF(YLanyG),T191),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_114 = YPmet(FUNCODEREF(fun_generate_quotation_114),LITREF(lit_234),T190,ENVNUL,PNUL,YPfalse);
  T194 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T194 != YPfalse) {
    T193 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T193 = YPfalse;
  }
  T195 = fun_generate_quotation_114;
  T192 = XCALL2(1,VARREF(YPdefine_method),T193,T195);
  VARSET(YevalSg2cYgenerate_quotation,T192);
  T197 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_115 = YPmet(FUNCODEREF(fun_115),YPfalse,T197,ENVNUL,PNUL,YPfalse);
  T196 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_235)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_116 = YPmet(FUNCODEREF(fun_generate_quotation_116),LITREF(lit_234),T196,ENVNUL,PNUL,YPfalse);
  T200 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T200 != YPfalse) {
    T199 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T199 = YPfalse;
  }
  T201 = fun_generate_quotation_116;
  T198 = XCALL2(1,VARREF(YPdefine_method),T199,T201);
  VARSET(YevalSg2cYgenerate_quotation,T198);
  lit_239 = YPsb((P)"%int");
  lit_240 = YPsb((P)"((P)");
  lit_241 = YPsb((P)")");
  T202 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_117 = YPmet(FUNCODEREF(fun_generate_quotation_117),LITREF(lit_234),T202,ENVNUL,PNUL,YPfalse);
  T205 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T205 != YPfalse) {
    T204 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T204 = YPfalse;
  }
  T206 = fun_generate_quotation_117;
  T203 = XCALL2(1,VARREF(YPdefine_method),T204,T206);
  VARSET(YevalSg2cYgenerate_quotation,T203);
  lit_242 = YPsb((P)"%chr");
  lit_243 = YPsb((P)"((P)");
  lit_244 = YPsb((P)")");
  T207 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_118 = YPmet(FUNCODEREF(fun_generate_quotation_118),LITREF(lit_234),T207,ENVNUL,PNUL,YPfalse);
  T210 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T210 != YPfalse) {
    T209 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T209 = YPfalse;
  }
  T211 = fun_generate_quotation_118;
  T208 = XCALL2(1,VARREF(YPdefine_method),T209,T211);
  VARSET(YevalSg2cYgenerate_quotation,T208);
  lit_245 = YPPsym((P)"float-to-c-string");
  lit_246 = YPPsym((P)"o");
  lit_247 = YPPsym((P)"done");
  T214 = YPsig(YPPlist(1,LITREF(lit_138)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_119 = YPmet(FUNCODEREF(fun_loop_119),LITREF(lit_137),T214,ENVNUL,PNUL,YPfalse);
  T213 = YPsig(YPPlist(1,LITREF(lit_247)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_120 = YPmet(FUNCODEREF(fun_120),YPfalse,T213,ENVNUL,PNUL,YPfalse);
  T212 = YPsig(YPPlist(1,LITREF(lit_246)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_float_to_c_string_121 = YPmet(FUNCODEREF(fun_float_to_c_string_121),LITREF(lit_245),T212,ENVNUL,PNUL,YPfalse);
  T217 = BOUNDP(YevalSg2cYfloat_to_c_string);
  if (T217 != YPfalse) {
    T216 = VARREF(YevalSg2cYfloat_to_c_string);
  } else {
    T216 = YPfalse;
  }
  T218 = fun_float_to_c_string_121;
  T215 = XCALL2(1,VARREF(YPdefine_method),T216,T218);
  VARSET(YevalSg2cYfloat_to_c_string,T215);
  lit_248 = YPsb((P)"%flo");
  lit_249 = YPsb((P)"(FLOINT(");
  lit_250 = YPsb((P)"))");
  T219 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_122 = YPmet(FUNCODEREF(fun_generate_quotation_122),LITREF(lit_234),T219,ENVNUL,PNUL,YPfalse);
  T222 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T222 != YPfalse) {
    T221 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T221 = YPfalse;
  }
  T223 = fun_generate_quotation_122;
  T220 = XCALL2(1,VARREF(YPdefine_method),T221,T223);
  VARSET(YevalSg2cYgenerate_quotation,T220);
  lit_251 = YPsb((P)"%sb");
  lit_252 = YPsb((P)"((P)\"");
  lit_253 = YPsb((P)"\")");
  T224 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_123 = YPmet(FUNCODEREF(fun_generate_quotation_123),LITREF(lit_234),T224,ENVNUL,PNUL,YPfalse);
  T227 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T227 != YPfalse) {
    T226 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T226 = YPfalse;
  }
  T228 = fun_generate_quotation_123;
  T225 = XCALL2(1,VARREF(YPdefine_method),T226,T228);
  VARSET(YevalSg2cYgenerate_quotation,T225);
  lit_254 = YPsb((P)"XCALLN(1, ");
  lit_255 = YPsb((P)"vec");
  lit_256 = YPsb((P)", ");
  lit_257 = YPPsym((P)"x-3207");
  lit_258 = YPPsym((P)"x-3206");
  lit_259 = YPsb((P)", ");
  lit_260 = YPsb((P)")");
  T230 = YPsig(YPPlist(1,LITREF(lit_258)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3207_124 = YPmet(FUNCODEREF(fun_x_3207_124),LITREF(lit_257),T230,ENVNUL,PNUL,YPfalse);
  T229 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_125 = YPmet(FUNCODEREF(fun_generate_quotation_125),LITREF(lit_234),T229,ENVNUL,PNUL,YPfalse);
  T233 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T233 != YPfalse) {
    T232 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T232 = YPfalse;
  }
  T234 = fun_generate_quotation_125;
  T231 = XCALL2(1,VARREF(YPdefine_method),T232,T234);
  VARSET(YevalSg2cYgenerate_quotation,T231);
  lit_261 = YPsb((P)"XCALLN(1, ");
  lit_262 = YPsb((P)"tup");
  lit_263 = YPsb((P)", ");
  lit_264 = YPPsym((P)"x-3210");
  lit_265 = YPPsym((P)"x-3209");
  lit_266 = YPsb((P)", ");
  lit_267 = YPsb((P)")");
  T236 = YPsig(YPPlist(1,LITREF(lit_265)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3210_126 = YPmet(FUNCODEREF(fun_x_3210_126),LITREF(lit_264),T236,ENVNUL,PNUL,YPfalse);
  T235 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLtupG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_127 = YPmet(FUNCODEREF(fun_generate_quotation_127),LITREF(lit_234),T235,ENVNUL,PNUL,YPfalse);
  T239 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T239 != YPfalse) {
    T238 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T238 = YPfalse;
  }
  T240 = fun_generate_quotation_127;
  T237 = XCALL2(1,VARREF(YPdefine_method),T238,T240);
  VARSET(YevalSg2cYgenerate_quotation,T237);
  lit_268 = YPsb((P)"%%sym");
  lit_269 = YPsb((P)"((P)\"");
  lit_270 = YPsb((P)"\")");
  T241 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_128 = YPmet(FUNCODEREF(fun_generate_quotation_128),LITREF(lit_234),T241,ENVNUL,PNUL,YPfalse);
  T244 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T244 != YPfalse) {
    T243 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T243 = YPfalse;
  }
  T245 = fun_generate_quotation_128;
  T242 = XCALL2(1,VARREF(YPdefine_method),T243,T245);
  VARSET(YevalSg2cYgenerate_quotation,T242);
  lit_271 = YPPsym((P)"binding->c");
  T246 = YPsig(YPPlist(2,LITREF(lit_95),LITREF(lit_61)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYbinding_Gc = YPmet(FUNCODEREF(YevalSg2cYbinding_Gc),LITREF(lit_271),T246,ENVNUL,PNUL,YPfalse);
  T247 = YevalSg2cYbinding_Gc;
  VARSET(YevalSg2cYbinding_Gc,T247);
  lit_272 = YPPsym((P)"reference->c");
  lit_273 = YPPsym((P)"v");
  T249 = YPsig(YPPlist(2,LITREF(lit_273),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T248 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_272),T249,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSg2cYreference_Gc,T248);
  T250 = YPsig(YPPlist(2,LITREF(lit_273),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_Gc_130 = YPmet(FUNCODEREF(fun_reference_Gc_130),LITREF(lit_272),T250,ENVNUL,PNUL,YPfalse);
  T253 = BOUNDP(YevalSg2cYreference_Gc);
  if (T253 != YPfalse) {
    T252 = VARREF(YevalSg2cYreference_Gc);
  } else {
    T252 = YPfalse;
  }
  T254 = fun_reference_Gc_130;
  T251 = XCALL2(1,VARREF(YPdefine_method),T252,T254);
  VARSET(YevalSg2cYreference_Gc,T251);
  lit_274 = YPsb((P)"LITREF");
  lit_275 = YPsb((P)"RTVREF");
  lit_276 = YPsb((P)"DYNREF");
  lit_277 = YPsb((P)"VARREF");
  T255 = YPsig(YPPlist(2,LITREF(lit_273),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_Gc_131 = YPmet(FUNCODEREF(fun_reference_Gc_131),LITREF(lit_272),T255,ENVNUL,PNUL,YPfalse);
  T258 = BOUNDP(YevalSg2cYreference_Gc);
  if (T258 != YPfalse) {
    T257 = VARREF(YevalSg2cYreference_Gc);
  } else {
    T257 = YPfalse;
  }
  T259 = fun_reference_Gc_131;
  T256 = XCALL2(1,VARREF(YPdefine_method),T257,T259);
  VARSET(YevalSg2cYreference_Gc,T256);
  lit_278 = YPPsym((P)"to-c");
  lit_279 = YPPsym((P)"f");
  T261 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T260 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_278),T261,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSg2cYto_c,T260);
  T262 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_132 = YPmet(FUNCODEREF(fun_to_c_132),LITREF(lit_278),T262,ENVNUL,PNUL,YPfalse);
  T265 = BOUNDP(YevalSg2cYto_c);
  if (T265 != YPfalse) {
    T264 = VARREF(YevalSg2cYto_c);
  } else {
    T264 = YPfalse;
  }
  T266 = fun_to_c_132;
  T263 = XCALL2(1,VARREF(YPdefine_method),T264,T266);
  VARSET(YevalSg2cYto_c,T263);
  T267 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLpassive_programG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_133 = YPmet(FUNCODEREF(fun_to_c_133),LITREF(lit_278),T267,ENVNUL,PNUL,YPfalse);
  T270 = BOUNDP(YevalSg2cYto_c);
  if (T270 != YPfalse) {
    T269 = VARREF(YevalSg2cYto_c);
  } else {
    T269 = YPfalse;
  }
  T271 = fun_to_c_133;
  T268 = XCALL2(1,VARREF(YPdefine_method),T269,T271);
  VARSET(YevalSg2cYto_c,T268);
  lit_280 = YPPsym((P)"gen-ref");
  T274 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLreferenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T273 = fun_gen_ref_134 = YPmet(FUNCODEREF(fun_gen_ref_134),LITREF(lit_280),T274,ENVNUL,PNUL,YPfalse);
  T278 = BOUNDP(YevalSg2cYgen_ref);
  if (T278 != YPfalse) {
    T277 = VARREF(YevalSg2cYgen_ref);
  } else {
    T277 = YPfalse;
  }
  T279 = fun_gen_ref_134;
  T276 = XCALL2(1,VARREF(YPdefine_method),T277,T279);
  T275 = VARSET(YevalSg2cYgen_ref,T276);
  T272 = T275;
  return T272;
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
  P T304,T305,T306,T307,T308,T309,T310,T311,T312,T313;
DEFCREGS();
loop:
  lit_281 = YPsb((P)"FREEREF");
  T0 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_135 = YPmet(FUNCODEREF(fun_gen_ref_135),LITREF(lit_280),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSg2cYgen_ref);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSg2cYgen_ref);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_gen_ref_135;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSg2cYgen_ref,T1);
  lit_282 = YPsb((P)"T");
  lit_283 = YPsb((P)"T_1");
  T5 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_136 = YPmet(FUNCODEREF(fun_gen_ref_136),LITREF(lit_280),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YevalSg2cYgen_ref);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSg2cYgen_ref);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_gen_ref_136;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSg2cYgen_ref,T6);
  lit_284 = YPsb((P)"(P)");
  T10 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLraw_constantG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_137 = YPmet(FUNCODEREF(fun_gen_ref_137),LITREF(lit_280),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YevalSg2cYgen_ref);
  if (T13 != YPfalse) {
    T12 = VARREF(YevalSg2cYgen_ref);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_gen_ref_137;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YevalSg2cYgen_ref,T11);
  T15 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLconstantG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_138 = YPmet(FUNCODEREF(fun_gen_ref_138),LITREF(lit_280),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YevalSg2cYgen_ref);
  if (T18 != YPfalse) {
    T17 = VARREF(YevalSg2cYgen_ref);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_gen_ref_138;
  T16 = XCALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YevalSg2cYgen_ref,T16);
  T20 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_139 = YPmet(FUNCODEREF(fun_gen_ref_139),LITREF(lit_280),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YevalSg2cYgen_ref);
  if (T23 != YPfalse) {
    T22 = VARREF(YevalSg2cYgen_ref);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_gen_ref_139;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YevalSg2cYgen_ref,T21);
  lit_285 = YPsb((P)"RTVSET(");
  lit_286 = YPsb((P)"DYNDEFSET(");
  lit_287 = YPsb((P)"DYNSET(");
  lit_288 = YPsb((P)"VARSET(");
  lit_289 = YPsb((P)",");
  lit_290 = YPsb((P)")");
  T25 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLglobal_assignmentG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_140 = YPmet(FUNCODEREF(fun_to_c_140),LITREF(lit_278),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YevalSg2cYto_c);
  if (T28 != YPfalse) {
    T27 = VARREF(YevalSg2cYto_c);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_to_c_140;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YevalSg2cYto_c,T26);
  lit_291 = YPsb((P)"RTV");
  lit_292 = YPsb((P)"BOUNDP");
  T30 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLboundQG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_141 = YPmet(FUNCODEREF(fun_to_c_141),LITREF(lit_278),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YevalSg2cYto_c);
  if (T33 != YPfalse) {
    T32 = VARREF(YevalSg2cYto_c);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_to_c_141;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YevalSg2cYto_c,T31);
  lit_293 = YPsb((P)"BOXVAL");
  T35 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSast_linearizeYLbox_readG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_142 = YPmet(FUNCODEREF(fun_to_c_142),LITREF(lit_278),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YevalSg2cYto_c);
  if (T38 != YPfalse) {
    T37 = VARREF(YevalSg2cYto_c);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_to_c_142;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YevalSg2cYto_c,T36);
  lit_294 = YPsb((P)"BOXVAL");
  lit_295 = YPsb((P)" = ");
  T40 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSast_linearizeYLbox_writeG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_143 = YPmet(FUNCODEREF(fun_to_c_143),LITREF(lit_278),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YevalSg2cYto_c);
  if (T43 != YPfalse) {
    T42 = VARREF(YevalSg2cYto_c);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_to_c_143;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YevalSg2cYto_c,T41);
  lit_296 = YPsb((P)" = BOXFAB");
  T45 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSast_linearizeYLbox_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_144 = YPmet(FUNCODEREF(fun_to_c_144),LITREF(lit_278),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YevalSg2cYto_c);
  if (T48 != YPfalse) {
    T47 = VARREF(YevalSg2cYto_c);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_to_c_144;
  T46 = XCALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YevalSg2cYto_c,T46);
  lit_297 = YPsb((P)"if (");
  lit_298 = YPsb((P)" != ");
  lit_299 = YPsb((P)") {\n");
  lit_300 = YPsb((P)"} else {\n");
  lit_301 = YPsb((P)"}\n");
  T50 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLalternativeG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_145 = YPmet(FUNCODEREF(fun_to_c_145),LITREF(lit_278),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YevalSg2cYto_c);
  if (T53 != YPfalse) {
    T52 = VARREF(YevalSg2cYto_c);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_to_c_145;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YevalSg2cYto_c,T51);
  T56 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_146 = YPmet(FUNCODEREF(fun_146),YPfalse,T56,ENVNUL,PNUL,YPfalse);
  T55 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLsequentialG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_147 = YPmet(FUNCODEREF(fun_to_c_147),LITREF(lit_278),T55,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(YevalSg2cYto_c);
  if (T59 != YPfalse) {
    T58 = VARREF(YevalSg2cYto_c);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_to_c_147;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YevalSg2cYto_c,T57);
  lit_302 = YPPsym((P)"generate-self-recursive-call");
  lit_303 = YPPsym((P)"x-3227");
  lit_304 = YPPsym((P)"x-3226");
  lit_305 = YPPsym((P)"x-3230");
  lit_306 = YPPsym((P)"x-3229");
  lit_307 = YPPsym((P)"x-3228");
  lit_308 = YPsb((P)"a");
  lit_309 = YPsb((P)" = ");
  lit_310 = YPPsym((P)"x-3234");
  lit_311 = YPPsym((P)"x-3233");
  lit_312 = YPPsym((P)"x-3232");
  lit_313 = YPsb((P)" = a");
  lit_314 = YPsb((P)"goto loop");
  T64 = YPsig(YPPlist(1,LITREF(lit_304)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3227_148 = YPmet(FUNCODEREF(fun_x_3227_148),LITREF(lit_303),T64,ENVNUL,PNUL,YPfalse);
  T63 = YPsig(YPPlist(2,LITREF(lit_306),LITREF(lit_307)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_3230_149 = YPmet(FUNCODEREF(fun_x_3230_149),LITREF(lit_305),T63,ENVNUL,PNUL,YPfalse);
  T62 = YPsig(YPPlist(2,LITREF(lit_311),LITREF(lit_312)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_3234_150 = YPmet(FUNCODEREF(fun_x_3234_150),LITREF(lit_310),T62,ENVNUL,PNUL,YPfalse);
  T61 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLapplicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_self_recursive_call_151 = YPmet(FUNCODEREF(fun_generate_self_recursive_call_151),LITREF(lit_302),T61,ENVNUL,PNUL,YPfalse);
  T67 = BOUNDP(YevalSg2cYgenerate_self_recursive_call);
  if (T67 != YPfalse) {
    T66 = VARREF(YevalSg2cYgenerate_self_recursive_call);
  } else {
    T66 = YPfalse;
  }
  T68 = fun_generate_self_recursive_call_151;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T68);
  VARSET(YevalSg2cYgenerate_self_recursive_call,T65);
  VARSET(YevalSg2cYDnumber_call_templates,YPint((P)5));
  lit_315 = YPPsym((P)"x-3237");
  lit_316 = YPPsym((P)"x-3236");
  lit_317 = YPsb((P)"X");
  lit_318 = YPsb((P)"CALL");
  lit_319 = YPsb((P)"N");
  lit_320 = YPsb((P)"0,");
  lit_321 = YPsb((P)"1,");
  lit_322 = YPsb((P)",");
  lit_323 = YPPsym((P)"x-3242");
  lit_324 = YPPsym((P)"x-3241");
  T71 = YPsig(YPPlist(1,LITREF(lit_316)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3237_152 = YPmet(FUNCODEREF(fun_x_3237_152),LITREF(lit_315),T71,ENVNUL,PNUL,YPfalse);
  T70 = YPsig(YPPlist(1,LITREF(lit_324)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3242_153 = YPmet(FUNCODEREF(fun_x_3242_153),LITREF(lit_323),T70,ENVNUL,PNUL,YPfalse);
  T69 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLregular_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_154 = YPmet(FUNCODEREF(fun_to_c_154),LITREF(lit_278),T69,ENVNUL,PNUL,YPfalse);
  T74 = BOUNDP(YevalSg2cYto_c);
  if (T74 != YPfalse) {
    T73 = VARREF(YevalSg2cYto_c);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_to_c_154;
  T72 = XCALL2(1,VARREF(YPdefine_method),T73,T75);
  VARSET(YevalSg2cYto_c,T72);
  lit_325 = YPPsym((P)"x-3246");
  lit_326 = YPPsym((P)"x-3245");
  lit_327 = YPPsym((P)"x-3244");
  T79 = YPsig(YPPlist(2,LITREF(lit_326),LITREF(lit_327)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_3246_155 = YPmet(FUNCODEREF(fun_x_3246_155),LITREF(lit_325),T79,ENVNUL,PNUL,YPfalse);
  T78 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_156 = YPmet(FUNCODEREF(fun_156),YPfalse,T78,ENVNUL,PNUL,YPfalse);
  T77 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_157 = YPmet(FUNCODEREF(fun_157),YPfalse,T77,ENVNUL,PNUL,YPfalse);
  T76 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLargumentsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_158 = YPmet(FUNCODEREF(fun_to_c_158),LITREF(lit_278),T76,ENVNUL,PNUL,YPfalse);
  T82 = BOUNDP(YevalSg2cYto_c);
  if (T82 != YPfalse) {
    T81 = VARREF(YevalSg2cYto_c);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_to_c_158;
  T80 = XCALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(YevalSg2cYto_c,T80);
  lit_328 = YPPsym((P)"x-3250");
  lit_329 = YPPsym((P)"x-3249");
  lit_330 = YPPsym((P)"x-3248");
  lit_331 = YPPsym((P)"x-3247");
  lit_332 = YPsb((P)"check_type");
  lit_333 = YPsb((P)" = ");
  T85 = YPsig(YPPlist(3,LITREF(lit_329),LITREF(lit_330),LITREF(lit_331)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_x_3250_159 = YPmet(FUNCODEREF(fun_x_3250_159),LITREF(lit_328),T85,ENVNUL,PNUL,YPfalse);
  T84 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_160 = YPmet(FUNCODEREF(fun_to_c_160),LITREF(lit_278),T84,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YevalSg2cYto_c);
  if (T88 != YPfalse) {
    T87 = VARREF(YevalSg2cYto_c);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_to_c_160;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YevalSg2cYto_c,T86);
  lit_334 = YPPsym((P)"x-3254");
  lit_335 = YPPsym((P)"x-3253");
  lit_336 = YPPsym((P)"x-3252");
  lit_337 = YPsb((P)" = ");
  T91 = YPsig(YPPlist(2,LITREF(lit_335),LITREF(lit_336)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_3254_161 = YPmet(FUNCODEREF(fun_x_3254_161),LITREF(lit_334),T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_162 = YPmet(FUNCODEREF(fun_to_c_162),LITREF(lit_278),T90,ENVNUL,PNUL,YPfalse);
  T94 = BOUNDP(YevalSg2cYto_c);
  if (T94 != YPfalse) {
    T93 = VARREF(YevalSg2cYto_c);
  } else {
    T93 = YPfalse;
  }
  T95 = fun_to_c_162;
  T92 = XCALL2(1,VARREF(YPdefine_method),T93,T95);
  VARSET(YevalSg2cYto_c,T92);
  lit_338 = YPsb((P)"with_exit");
  T96 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLbind_exitG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_163 = YPmet(FUNCODEREF(fun_to_c_163),LITREF(lit_278),T96,ENVNUL,PNUL,YPfalse);
  T99 = BOUNDP(YevalSg2cYto_c);
  if (T99 != YPfalse) {
    T98 = VARREF(YevalSg2cYto_c);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_to_c_163;
  T97 = XCALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(YevalSg2cYto_c,T97);
  lit_339 = YPsb((P)"with_cleanup");
  T101 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLunwind_protectG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_164 = YPmet(FUNCODEREF(fun_to_c_164),LITREF(lit_278),T101,ENVNUL,PNUL,YPfalse);
  T104 = BOUNDP(YevalSg2cYto_c);
  if (T104 != YPfalse) {
    T103 = VARREF(YevalSg2cYto_c);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_to_c_164;
  T102 = XCALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(YevalSg2cYto_c,T102);
  lit_340 = YPsb((P)"CALLN");
  lit_341 = YPsb((P)"1");
  lit_342 = YPsb((P)"%with-monitor");
  lit_343 = YPsb((P)"5");
  T106 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLmonitorG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_165 = YPmet(FUNCODEREF(fun_to_c_165),LITREF(lit_278),T106,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(YevalSg2cYto_c);
  if (T109 != YPfalse) {
    T108 = VARREF(YevalSg2cYto_c);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_to_c_165;
  T107 = XCALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YevalSg2cYto_c,T107);
  lit_344 = YPPsym((P)"x-3259");
  lit_345 = YPPsym((P)"x-3258");
  lit_346 = YPsb((P)"(P)");
  lit_347 = YPPsym((P)"x-3265");
  lit_348 = YPPsym((P)"x-3264");
  lit_349 = YPPsym((P)"x-3263");
  T115 = YPsig(YPPlist(1,LITREF(lit_345)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3259_166 = YPmet(FUNCODEREF(fun_x_3259_166),LITREF(lit_344),T115,ENVNUL,PNUL,YPfalse);
  T114 = YPsig(YPPlist(2,LITREF(lit_348),LITREF(lit_349)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_3265_167 = YPmet(FUNCODEREF(fun_x_3265_167),LITREF(lit_347),T114,ENVNUL,PNUL,YPfalse);
  T113 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_168 = YPmet(FUNCODEREF(fun_168),YPfalse,T113,ENVNUL,PNUL,YPfalse);
  T112 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_169 = YPmet(FUNCODEREF(fun_169),YPfalse,T112,ENVNUL,PNUL,YPfalse);
  T111 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLpredefined_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_170 = YPmet(FUNCODEREF(fun_to_c_170),LITREF(lit_278),T111,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YevalSg2cYto_c);
  if (T118 != YPfalse) {
    T117 = VARREF(YevalSg2cYto_c);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_to_c_170;
  T116 = XCALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YevalSg2cYto_c,T116);
  lit_350 = YPsb((P)"FUNFAB");
  lit_351 = YPsb((P)",");
  lit_352 = YPPsym((P)"x-3269");
  lit_353 = YPPsym((P)"x-3268");
  T122 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_171 = YPmet(FUNCODEREF(fun_171),YPfalse,T122,ENVNUL,PNUL,YPfalse);
  T121 = YPsig(YPPlist(1,LITREF(lit_353)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3269_172 = YPmet(FUNCODEREF(fun_x_3269_172),LITREF(lit_352),T121,ENVNUL,PNUL,YPfalse);
  T120 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_173 = YPmet(FUNCODEREF(fun_to_c_173),LITREF(lit_278),T120,ENVNUL,PNUL,YPfalse);
  T125 = BOUNDP(YevalSg2cYto_c);
  if (T125 != YPfalse) {
    T124 = VARREF(YevalSg2cYto_c);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_to_c_173;
  T123 = XCALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(YevalSg2cYto_c,T123);
  lit_354 = YPPsym((P)"funshell-to-c");
  lit_355 = YPPsym((P)"b");
  lit_356 = YPsb((P)"FUNSHELL");
  T127 = YPsig(YPPlist(5,LITREF(lit_355),LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(5,VARREF(YevalSastYLbindingG),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funshell_to_c_174 = YPmet(FUNCODEREF(fun_funshell_to_c_174),LITREF(lit_354),T127,ENVNUL,PNUL,YPfalse);
  T130 = BOUNDP(YevalSg2cYfunshell_to_c);
  if (T130 != YPfalse) {
    T129 = VARREF(YevalSg2cYfunshell_to_c);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_funshell_to_c_174;
  T128 = XCALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(YevalSg2cYfunshell_to_c,T128);
  lit_357 = YPPsym((P)"funinit-to-c");
  lit_358 = YPsb((P)"FUNINIT");
  lit_359 = YPsb((P)", ");
  lit_360 = YPPsym((P)"x-3276");
  lit_361 = YPPsym((P)"x-3275");
  T134 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_175 = YPmet(FUNCODEREF(fun_175),YPfalse,T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(YPPlist(1,LITREF(lit_361)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3276_176 = YPmet(FUNCODEREF(fun_x_3276_176),LITREF(lit_360),T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(YPPlist(5,LITREF(lit_355),LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(5,VARREF(YevalSastYLbindingG),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funinit_to_c_177 = YPmet(FUNCODEREF(fun_funinit_to_c_177),LITREF(lit_357),T132,ENVNUL,PNUL,YPfalse);
  T137 = BOUNDP(YevalSg2cYfuninit_to_c);
  if (T137 != YPfalse) {
    T136 = VARREF(YevalSg2cYfuninit_to_c);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_funinit_to_c_177;
  T135 = XCALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(YevalSg2cYfuninit_to_c,T135);
  lit_362 = YPsb((P)"%macro");
  T139 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLast_macro_definitionG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_178 = YPmet(FUNCODEREF(fun_to_c_178),LITREF(lit_278),T139,ENVNUL,PNUL,YPfalse);
  T142 = BOUNDP(YevalSg2cYto_c);
  if (T142 != YPfalse) {
    T141 = VARREF(YevalSg2cYto_c);
  } else {
    T141 = YPfalse;
  }
  T143 = fun_to_c_178;
  T140 = XCALL2(1,VARREF(YPdefine_method),T141,T143);
  VARSET(YevalSg2cYto_c,T140);
  lit_363 = YPPsym((P)"out-list-builder");
  lit_364 = YPPsym((P)"elts");
  lit_365 = YPsb((P)"nil");
  lit_366 = YPsb((P)"%%list");
  lit_367 = YPPsym((P)"x-3281");
  lit_368 = YPPsym((P)"x-3280");
  T145 = YPsig(YPPlist(1,LITREF(lit_368)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3281_179 = YPmet(FUNCODEREF(fun_x_3281_179),LITREF(lit_367),T145,ENVNUL,PNUL,YPfalse);
  T144 = YPsig(YPPlist(3,LITREF(lit_279),LITREF(lit_61),LITREF(lit_364)),YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_out_list_builder_180 = YPmet(FUNCODEREF(fun_out_list_builder_180),LITREF(lit_363),T144,ENVNUL,PNUL,YPfalse);
  T148 = BOUNDP(YevalSg2cYout_list_builder);
  if (T148 != YPfalse) {
    T147 = VARREF(YevalSg2cYout_list_builder);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_out_list_builder_180;
  T146 = XCALL2(1,VARREF(YPdefine_method),T147,T149);
  VARSET(YevalSg2cYout_list_builder,T146);
  lit_369 = YPPsym((P)"gen-fab-list");
  lit_370 = YPPsym((P)"refs");
  T151 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_181 = YPmet(FUNCODEREF(fun_181),YPfalse,T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_370)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfab_listG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_fab_list_182 = YPmet(FUNCODEREF(fun_gen_fab_list_182),LITREF(lit_369),T150,ENVNUL,PNUL,YPfalse);
  T154 = BOUNDP(YevalSg2cYgen_fab_list);
  if (T154 != YPfalse) {
    T153 = VARREF(YevalSg2cYgen_fab_list);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_gen_fab_list_182;
  T152 = XCALL2(1,VARREF(YPdefine_method),T153,T155);
  VARSET(YevalSg2cYgen_fab_list,T152);
  lit_371 = YPPsym((P)"generate-function-specs");
  lit_372 = YPPsym((P)"sig");
  T156 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_372)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_specs_183 = YPmet(FUNCODEREF(fun_generate_function_specs_183),LITREF(lit_371),T156,ENVNUL,PNUL,YPfalse);
  T159 = BOUNDP(YevalSg2cYgenerate_function_specs);
  if (T159 != YPfalse) {
    T158 = VARREF(YevalSg2cYgenerate_function_specs);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_generate_function_specs_183;
  T157 = XCALL2(1,VARREF(YPdefine_method),T158,T160);
  VARSET(YevalSg2cYgenerate_function_specs,T157);
  lit_373 = YPsb((P)"%sig");
  lit_374 = YPsb((P)"nil");
  T162 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_184 = YPmet(FUNCODEREF(fun_184),YPfalse,T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLast_signatureG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_185 = YPmet(FUNCODEREF(fun_to_c_185),LITREF(lit_278),T161,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(YevalSg2cYto_c);
  if (T165 != YPfalse) {
    T164 = VARREF(YevalSg2cYto_c);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_to_c_185;
  T163 = XCALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(YevalSg2cYto_c,T163);
  lit_375 = YPsb((P)"%gen");
  lit_376 = YPsb((P)"(P)YPgen_code((P)YPdispatch)");
  lit_377 = YPsb((P)"nil");
  lit_378 = YPsb((P)"%false");
  lit_379 = YPsb((P)"%false");
  lit_380 = YPsb((P)"%false");
  T167 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLast_genericG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_186 = YPmet(FUNCODEREF(fun_to_c_186),LITREF(lit_278),T167,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(YevalSg2cYto_c);
  if (T170 != YPfalse) {
    T169 = VARREF(YevalSg2cYto_c);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_to_c_186;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YevalSg2cYto_c,T168);
  lit_381 = YPPsym((P)"generate-function-forwards");
  lit_382 = YPPsym((P)"definitions");
  lit_383 = YPsb((P)"\n/* FUNCTIONS: */\n\n");
  lit_384 = YPPsym((P)"x-3285");
  lit_385 = YPPsym((P)"x-3284");
  T173 = YPsig(YPPlist(1,LITREF(lit_385)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3285_187 = YPmet(FUNCODEREF(fun_x_3285_187),LITREF(lit_384),T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_382)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forwards_188 = YPmet(FUNCODEREF(fun_generate_function_forwards_188),LITREF(lit_381),T172,ENVNUL,PNUL,YPfalse);
  T176 = BOUNDP(YevalSg2cYgenerate_function_forwards);
  if (T176 != YPfalse) {
    T175 = VARREF(YevalSg2cYgenerate_function_forwards);
  } else {
    T175 = YPfalse;
  }
  T177 = fun_generate_function_forwards_188;
  T174 = XCALL2(1,VARREF(YPdefine_method),T175,T177);
  VARSET(YevalSg2cYgenerate_function_forwards,T174);
  lit_386 = YPPsym((P)"generate-function-forward");
  lit_387 = YPPsym((P)"defn");
  lit_388 = YPsb((P)"static");
  lit_389 = YPsb((P)"extern");
  lit_390 = YPsb((P)" P ");
  lit_391 = YPsb((P)" (");
  lit_392 = YPPsym((P)"x-3290");
  lit_393 = YPPsym((P)"x-3289");
  lit_394 = YPPsym((P)"x-3288");
  lit_395 = YPsb((P)"P");
  lit_396 = YPsb((P)");\n");
  T181 = YPsig(YPPlist(2,LITREF(lit_393),LITREF(lit_394)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_3290_189 = YPmet(FUNCODEREF(fun_x_3290_189),LITREF(lit_392),T181,ENVNUL,PNUL,YPfalse);
  T180 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_190 = YPmet(FUNCODEREF(fun_190),YPfalse,T180,ENVNUL,PNUL,YPfalse);
  T179 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_191 = YPmet(FUNCODEREF(fun_191),YPfalse,T179,ENVNUL,PNUL,YPfalse);
  T178 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_387)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_192 = YPmet(FUNCODEREF(fun_generate_function_forward_192),LITREF(lit_386),T178,ENVNUL,PNUL,YPfalse);
  T184 = BOUNDP(YevalSg2cYgenerate_function_forward);
  if (T184 != YPfalse) {
    T183 = VARREF(YevalSg2cYgenerate_function_forward);
  } else {
    T183 = YPfalse;
  }
  T185 = fun_generate_function_forward_192;
  T182 = XCALL2(1,VARREF(YPdefine_method),T183,T185);
  VARSET(YevalSg2cYgenerate_function_forward,T182);
  lit_397 = YPPsym((P)"generate-function-binding");
  lit_398 = YPPlist(2,YPPsym((P)"global"),YPPsym((P)"runtime"));
  lit_399 = YPsb((P)"fun_");
  lit_400 = YPsb((P)"fun_");
  lit_401 = YPsb((P)"_");
  T186 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_387)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_binding_193 = YPmet(FUNCODEREF(fun_generate_function_binding_193),LITREF(lit_397),T186,ENVNUL,PNUL,YPfalse);
  T189 = BOUNDP(YevalSg2cYgenerate_function_binding);
  if (T189 != YPfalse) {
    T188 = VARREF(YevalSg2cYgenerate_function_binding);
  } else {
    T188 = YPfalse;
  }
  T190 = fun_generate_function_binding_193;
  T187 = XCALL2(1,VARREF(YPdefine_method),T188,T190);
  VARSET(YevalSg2cYgenerate_function_binding,T187);
  lit_402 = YPsb((P)"FUNFOR(");
  lit_403 = YPsb((P)"LOCFOR(");
  lit_404 = YPsb((P)");\n");
  T191 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_387)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_194 = YPmet(FUNCODEREF(fun_generate_function_forward_194),LITREF(lit_386),T191,ENVNUL,PNUL,YPfalse);
  T194 = BOUNDP(YevalSg2cYgenerate_function_forward);
  if (T194 != YPfalse) {
    T193 = VARREF(YevalSg2cYgenerate_function_forward);
  } else {
    T193 = YPfalse;
  }
  T195 = fun_generate_function_forward_194;
  T192 = XCALL2(1,VARREF(YPdefine_method),T193,T195);
  VARSET(YevalSg2cYgenerate_function_forward,T192);
  lit_405 = YPPsym((P)"generate-function-bodies");
  lit_406 = YPsb((P)"\n/* FUNCTION CODES: */\n");
  lit_407 = YPPsym((P)"def");
  T197 = YPsig(YPPlist(1,LITREF(lit_407)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_195 = YPmet(FUNCODEREF(fun_195),YPfalse,T197,ENVNUL,PNUL,YPfalse);
  T196 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_382)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_bodies_196 = YPmet(FUNCODEREF(fun_generate_function_bodies_196),LITREF(lit_405),T196,ENVNUL,PNUL,YPfalse);
  T200 = BOUNDP(YevalSg2cYgenerate_function_bodies);
  if (T200 != YPfalse) {
    T199 = VARREF(YevalSg2cYgenerate_function_bodies);
  } else {
    T199 = YPfalse;
  }
  T201 = fun_generate_function_bodies_196;
  T198 = XCALL2(1,VARREF(YPdefine_method),T199,T201);
  VARSET(YevalSg2cYgenerate_function_bodies,T198);
  lit_408 = YPPsym((P)"generate-functions");
  T203 = YPsig(YPPlist(1,LITREF(lit_407)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_197 = YPmet(FUNCODEREF(fun_197),YPfalse,T203,ENVNUL,PNUL,YPfalse);
  T202 = YPsig(YPPlist(4,LITREF(lit_382),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_functions_198 = YPmet(FUNCODEREF(fun_generate_functions_198),LITREF(lit_408),T202,ENVNUL,PNUL,YPfalse);
  T206 = BOUNDP(YevalSg2cYgenerate_functions);
  if (T206 != YPfalse) {
    T205 = VARREF(YevalSg2cYgenerate_functions);
  } else {
    T205 = YPfalse;
  }
  T207 = fun_generate_functions_198;
  T204 = XCALL2(1,VARREF(YPdefine_method),T205,T207);
  VARSET(YevalSg2cYgenerate_functions,T204);
  lit_409 = YPPsym((P)"generate-closure-structure");
  lit_410 = YPPsym((P)"definition");
  lit_411 = YPsb((P)" = ");
  lit_412 = YPsb((P)"%met");
  lit_413 = YPsb((P)"ENVNUL");
  lit_414 = YPsb((P)"PNUL");
  T208 = YPsig(YPPlist(4,LITREF(lit_410),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_closure_structure_199 = YPmet(FUNCODEREF(fun_generate_closure_structure_199),LITREF(lit_409),T208,ENVNUL,PNUL,YPfalse);
  T211 = BOUNDP(YevalSg2cYgenerate_closure_structure);
  if (T211 != YPfalse) {
    T210 = VARREF(YevalSg2cYgenerate_closure_structure);
  } else {
    T210 = YPfalse;
  }
  T212 = fun_generate_closure_structure_199;
  T209 = XCALL2(1,VARREF(YPdefine_method),T210,T212);
  VARSET(YevalSg2cYgenerate_closure_structure,T209);
  lit_415 = YPPsym((P)"generate-function-body-reference");
  lit_416 = YPsb((P)"FUNCODEREF(");
  lit_417 = YPsb((P)")");
  T213 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_410)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_body_reference_200 = YPmet(FUNCODEREF(fun_generate_function_body_reference_200),LITREF(lit_415),T213,ENVNUL,PNUL,YPfalse);
  T216 = BOUNDP(YevalSg2cYgenerate_function_body_reference);
  if (T216 != YPfalse) {
    T215 = VARREF(YevalSg2cYgenerate_function_body_reference);
  } else {
    T215 = YPfalse;
  }
  T217 = fun_generate_function_body_reference_200;
  T214 = XCALL2(1,VARREF(YPdefine_method),T215,T217);
  VARSET(YevalSg2cYgenerate_function_body_reference,T214);
  lit_418 = YPPsym((P)"generate-shadow-args");
  lit_419 = YPPsym((P)"bindings");
  lit_420 = YPsb((P)"P ");
  lit_421 = YPPsym((P)"x-3299");
  lit_422 = YPPsym((P)"x-3298");
  lit_423 = YPPsym((P)"x-3297");
  lit_424 = YPPsym((P)"x-3296");
  lit_425 = YPsb((P)"a");
  T221 = YPsig(YPPlist(3,LITREF(lit_422),LITREF(lit_423),LITREF(lit_424)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_x_3299_201 = YPmet(FUNCODEREF(fun_x_3299_201),LITREF(lit_421),T221,ENVNUL,PNUL,YPfalse);
  T220 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_202 = YPmet(FUNCODEREF(fun_202),YPfalse,T220,ENVNUL,PNUL,YPfalse);
  T219 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_203 = YPmet(FUNCODEREF(fun_203),YPfalse,T219,ENVNUL,PNUL,YPfalse);
  T218 = YPsig(YPPlist(2,LITREF(lit_419),LITREF(lit_61)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_shadow_args_204 = YPmet(FUNCODEREF(fun_generate_shadow_args_204),LITREF(lit_418),T218,ENVNUL,PNUL,YPfalse);
  T224 = BOUNDP(YevalSg2cYgenerate_shadow_args);
  if (T224 != YPfalse) {
    T223 = VARREF(YevalSg2cYgenerate_shadow_args);
  } else {
    T223 = YPfalse;
  }
  T225 = fun_generate_shadow_args_204;
  T222 = XCALL2(1,VARREF(YPdefine_method),T223,T225);
  VARSET(YevalSg2cYgenerate_shadow_args,T222);
  lit_426 = YPPsym((P)"generate-return");
  lit_427 = YPsb((P)"return ");
  T226 = YPsig(YPPlist(3,LITREF(lit_387),LITREF(lit_202),LITREF(lit_61)),YPPlist(3,VARREF(YevalSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_return_205 = YPmet(FUNCODEREF(fun_generate_return_205),LITREF(lit_426),T226,ENVNUL,PNUL,YPfalse);
  T229 = BOUNDP(YevalSg2cYgenerate_return);
  if (T229 != YPfalse) {
    T228 = VARREF(YevalSg2cYgenerate_return);
  } else {
    T228 = YPfalse;
  }
  T230 = fun_generate_return_205;
  T227 = XCALL2(1,VARREF(YPdefine_method),T228,T230);
  VARSET(YevalSg2cYgenerate_return,T227);
  lit_428 = YPsb((P)"RET");
  T231 = YPsig(YPPlist(3,LITREF(lit_387),LITREF(lit_202),LITREF(lit_61)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_return_206 = YPmet(FUNCODEREF(fun_generate_return_206),LITREF(lit_426),T231,ENVNUL,PNUL,YPfalse);
  T234 = BOUNDP(YevalSg2cYgenerate_return);
  if (T234 != YPfalse) {
    T233 = VARREF(YevalSg2cYgenerate_return);
  } else {
    T233 = YPfalse;
  }
  T235 = fun_generate_return_206;
  T232 = XCALL2(1,VARREF(YPdefine_method),T233,T235);
  VARSET(YevalSg2cYgenerate_return,T232);
  lit_429 = YPPsym((P)"primitive-inlinable?");
  lit_430 = YPPlist(48,YPPsym((P)"%tag-bits"),YPPsym((P)"%tag"),YPPsym((P)"%untag"),YPPsym((P)"%class-of"),YPPsym((P)"%int"),YPPsym((P)"%ib"),YPPsym((P)"%iu"),YPPsym((P)"%chr"),YPPsym((P)"%cb"),YPPsym((P)"%cu"),YPPsym((P)"%loc"),YPPsym((P)"%lb"),YPPsym((P)"%lu"),YPPsym((P)"%empty?"),YPPsym((P)"%head"),YPPsym((P)"%tail"),YPPsym((P)"@empty?"),YPPsym((P)"@head"),YPPsym((P)"@tail"),YPPsym((P)"@=="),YPPsym((P)"@="),YPPsym((P)"@+"),YPPsym((P)"@<"),YPPsym((P)"%new"),YPPsym((P)"%class-id"),YPPsym((P)"%class-row"),YPPsym((P)"%gen-cache-arg-pos"),YPPsym((P)"%gen-cache-singletons"),YPPsym((P)"%gen-cache-classes"),YPPsym((P)"%gen-cache-missable?"),YPPsym((P)"%class-type-cache"),YPPsym((P)"%class-type-cache-setter"),YPPsym((P)"@telt"),YPPsym((P)"@telt-setter"),YPPsym((P)"@tlen"),YPPsym((P)"%to-tup"),YPPsym((P)"@oelt"),YPPsym((P)"@oelt-setter"),YPPsym((P)"@olen"),YPPsym((P)"%opts-location"),YPPsym((P)"%opts-count"),YPPsym((P)"%class-ancestors"),YPPsym((P)"@class-in?"),YPPsym((P)"@subclass?"),YPPsym((P)"prop-value-at"),YPPsym((P)"prop-value-at-setter"),YPPsym((P)"gen-lookup"),YPPsym((P)"gen-lookup-1-using"));
  T236 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_primitive_inlinableQ_207 = YPmet(FUNCODEREF(fun_primitive_inlinableQ_207),LITREF(lit_429),T236,ENVNUL,PNUL,YPfalse);
  T239 = BOUNDP(YevalSg2cYprimitive_inlinableQ);
  if (T239 != YPfalse) {
    T238 = VARREF(YevalSg2cYprimitive_inlinableQ);
  } else {
    T238 = YPfalse;
  }
  T240 = fun_primitive_inlinableQ_207;
  T237 = XCALL2(1,VARREF(YPdefine_method),T238,T240);
  VARSET(YevalSg2cYprimitive_inlinableQ,T237);
  lit_431 = YPPsym((P)"generate-function-code");
  lit_432 = YPsb((P)"\n");
  lit_433 = YPsb((P)"static ");
  lit_434 = YPsb((P)"INLINE ");
  lit_435 = YPsb((P)"P ");
  lit_436 = YPPsym((P)"x-3307");
  lit_437 = YPPsym((P)"x-3306");
  lit_438 = YPPsym((P)"x-3305");
  lit_439 = YPsb((P)"P ");
  lit_440 = YPsb((P)" {\n");
  lit_441 = YPsb((P)"DEFCREGS();\n");
  lit_442 = YPsb((P)"loop:\n");
  lit_443 = YPsb((P)"}\n");
  T244 = YPsig(YPPlist(2,LITREF(lit_437),LITREF(lit_438)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_3307_208 = YPmet(FUNCODEREF(fun_x_3307_208),LITREF(lit_436),T244,ENVNUL,PNUL,YPfalse);
  T243 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_209 = YPmet(FUNCODEREF(fun_209),YPfalse,T243,ENVNUL,PNUL,YPfalse);
  T242 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_210 = YPmet(FUNCODEREF(fun_210),YPfalse,T242,ENVNUL,PNUL,YPfalse);
  T241 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_52)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_211 = YPmet(FUNCODEREF(fun_generate_function_code_211),LITREF(lit_431),T241,ENVNUL,PNUL,YPfalse);
  T247 = BOUNDP(YevalSg2cYgenerate_function_code);
  if (T247 != YPfalse) {
    T246 = VARREF(YevalSg2cYgenerate_function_code);
  } else {
    T246 = YPfalse;
  }
  T248 = fun_generate_function_code_211;
  T245 = XCALL2(1,VARREF(YPdefine_method),T246,T248);
  VARSET(YevalSg2cYgenerate_function_code,T245);
  lit_444 = YPPsym((P)"dispatcher?");
  lit_445 = YPsb((P)"%dispatch");
  lit_446 = YPsb((P)"-dispatch");
  lit_447 = YPsb((P)"-dispatch");
  T249 = YPsig(YPPlist(1,LITREF(lit_410)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_dispatcherQ_212 = YPmet(FUNCODEREF(fun_dispatcherQ_212),LITREF(lit_444),T249,ENVNUL,PNUL,YPfalse);
  T252 = BOUNDP(YevalSg2cYdispatcherQ);
  if (T252 != YPfalse) {
    T251 = VARREF(YevalSg2cYdispatcherQ);
  } else {
    T251 = YPfalse;
  }
  T253 = fun_dispatcherQ_212;
  T250 = XCALL2(1,VARREF(YPdefine_method),T251,T253);
  VARSET(YevalSg2cYdispatcherQ,T250);
  lit_448 = YPsb((P)"\nFUNCODEDEF(");
  lit_449 = YPsb((P)") {\n");
  lit_450 = YPsb((P)"P ");
  lit_451 = YPPsym((P)"x-3311");
  lit_452 = YPPsym((P)"x-3310");
  lit_453 = YPPsym((P)"x-3309");
  lit_454 = YPsb((P)"LINK_STACK();\n");
  lit_455 = YPsb((P)"NARGS(");
  lit_456 = YPsb((P)"ARG(");
  lit_457 = YPsb((P)", ");
  lit_458 = YPsb((P)")");
  lit_459 = YPsb((P)"loop:\n");
  lit_460 = YPsb((P)"UNLINK_STACK();\n");
  lit_461 = YPsb((P)"}\n");
  T258 = YPsig(YPPlist(2,LITREF(lit_452),LITREF(lit_453)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_3311_213 = YPmet(FUNCODEREF(fun_x_3311_213),LITREF(lit_451),T258,ENVNUL,PNUL,YPfalse);
  T257 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_214 = YPmet(FUNCODEREF(fun_214),YPfalse,T257,ENVNUL,PNUL,YPfalse);
  T256 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_215 = YPmet(FUNCODEREF(fun_215),YPfalse,T256,ENVNUL,PNUL,YPfalse);
  T255 = YPsig(YPPlist(1,LITREF(lit_355)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_216 = YPmet(FUNCODEREF(fun_216),YPfalse,T255,ENVNUL,PNUL,YPfalse);
  T254 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_410)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_217 = YPmet(FUNCODEREF(fun_generate_function_code_217),LITREF(lit_431),T254,ENVNUL,PNUL,YPfalse);
  T261 = BOUNDP(YevalSg2cYgenerate_function_code);
  if (T261 != YPfalse) {
    T260 = VARREF(YevalSg2cYgenerate_function_code);
  } else {
    T260 = YPfalse;
  }
  T262 = fun_generate_function_code_217;
  T259 = XCALL2(1,VARREF(YPdefine_method),T260,T262);
  VARSET(YevalSg2cYgenerate_function_code,T259);
  lit_462 = YPPsym((P)"generate-local-temporaries");
  lit_463 = YPPsym((P)"temps");
  lit_464 = YPPsym((P)"x-3314");
  lit_465 = YPPsym((P)"x-3313");
  lit_466 = YPsb((P)"P ");
  T264 = YPsig(YPPlist(1,LITREF(lit_465)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3314_218 = YPmet(FUNCODEREF(fun_x_3314_218),LITREF(lit_464),T264,ENVNUL,PNUL,YPfalse);
  T263 = YPsig(YPPlist(2,LITREF(lit_463),LITREF(lit_61)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_local_temporaries_219 = YPmet(FUNCODEREF(fun_generate_local_temporaries_219),LITREF(lit_462),T263,ENVNUL,PNUL,YPfalse);
  T267 = BOUNDP(YevalSg2cYgenerate_local_temporaries);
  if (T267 != YPfalse) {
    T266 = VARREF(YevalSg2cYgenerate_local_temporaries);
  } else {
    T266 = YPfalse;
  }
  T268 = fun_generate_local_temporaries_219;
  T265 = XCALL2(1,VARREF(YPdefine_method),T266,T268);
  VARSET(YevalSg2cYgenerate_local_temporaries,T265);
  VARSET(YevalSg2cYTtrace_registersQT,YPfalse);
  VARSET(YevalSg2cYTregisters_per_lineT,YPint((P)16));
  lit_467 = YPPsym((P)"generate-registers");
  lit_468 = YPPsym((P)"regs");
  lit_469 = YPPsym((P)"next-line");
  lit_470 = YPPsym((P)"j");
  lit_471 = YPsb((P)"P ");
  lit_472 = YPPsym((P)"next-reg");
  lit_473 = YPsb((P)";\n");
  T271 = YPsig(YPPlist(2,LITREF(lit_470),LITREF(lit_138)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_next_reg_220 = YPmet(FUNCODEREF(fun_next_reg_220),LITREF(lit_472),T271,ENVNUL,PNUL,YPfalse);
  T270 = YPsig(YPPlist(1,LITREF(lit_470)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_next_line_221 = YPmet(FUNCODEREF(fun_next_line_221),LITREF(lit_469),T270,ENVNUL,PNUL,YPfalse);
  T269 = YPsig(YPPlist(2,LITREF(lit_468),LITREF(lit_61)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_registers_222 = YPmet(FUNCODEREF(fun_generate_registers_222),LITREF(lit_467),T269,ENVNUL,PNUL,YPfalse);
  T274 = BOUNDP(YevalSg2cYgenerate_registers);
  if (T274 != YPfalse) {
    T273 = VARREF(YevalSg2cYgenerate_registers);
  } else {
    T273 = YPfalse;
  }
  T275 = fun_generate_registers_222;
  T272 = XCALL2(1,VARREF(YPdefine_method),T273,T275);
  VARSET(YevalSg2cYgenerate_registers,T272);
  lit_474 = YPPsym((P)"module-info-name");
  lit_475 = YPsb((P)"module_info_");
  T276 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_info_name_223 = YPmet(FUNCODEREF(fun_module_info_name_223),LITREF(lit_474),T276,ENVNUL,PNUL,YPfalse);
  T279 = BOUNDP(YevalSg2cYmodule_info_name);
  if (T279 != YPfalse) {
    T278 = VARREF(YevalSg2cYmodule_info_name);
  } else {
    T278 = YPfalse;
  }
  T280 = fun_module_info_name_223;
  T277 = XCALL2(1,VARREF(YPdefine_method),T278,T280);
  VARSET(YevalSg2cYmodule_info_name,T277);
  lit_476 = YPPsym((P)"declare-imported-module-infos");
  lit_477 = YPPsym((P)"maybe-declare");
  lit_478 = YPsb((P)"extern MODULE_INFO ");
  lit_479 = YPsb((P)";\n");
  T283 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_maybe_declare_224 = YPmet(FUNCODEREF(fun_maybe_declare_224),LITREF(lit_477),T283,ENVNUL,PNUL,YPfalse);
  T282 = YPsig(YPPlist(1,LITREF(lit_95)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_225 = YPmet(FUNCODEREF(fun_225),YPfalse,T282,ENVNUL,PNUL,YPfalse);
  T281 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYdeclare_imported_module_infos = YPmet(FUNCODEREF(YevalSg2cYdeclare_imported_module_infos),LITREF(lit_476),T281,ENVNUL,PNUL,YPfalse);
  T284 = YevalSg2cYdeclare_imported_module_infos;
  VARSET(YevalSg2cYdeclare_imported_module_infos,T284);
  lit_480 = YPPsym((P)"generate-module-info");
  lit_481 = YPsb((P)"\n/* MODULE ENVIRONMENT INFORMATION */\n\n");
  lit_482 = YPsb((P)"\nstatic USE_INFO use_infos[] = {\n");
  lit_483 = YPPsym((P)"x-3317");
  lit_484 = YPPsym((P)"x-3316");
  lit_485 = YPsb((P)"  {&");
  lit_486 = YPsb((P)"},\n");
  lit_487 = YPsb((P)"  {NULL}\n};\n");
  lit_488 = YPsb((P)"\nstatic IMPORT_INFO import_infos[] = {\n");
  lit_489 = YPPsym((P)"local-name");
  lit_490 = YPsb((P)"  {\"");
  lit_491 = YPsb((P)"\", &");
  lit_492 = YPsb((P)", \"");
  lit_493 = YPsb((P)"\"},\n");
  lit_494 = YPsb((P)"  {NULL,NULL,NULL}\n};\n");
  lit_495 = YPsb((P)"\nstatic BINDING_INFO binding_infos[] = {\n");
  lit_496 = YPsb((P)"  {\"");
  lit_497 = YPsb((P)"\", ");
  lit_498 = YPsb((P)"CVAR, &");
  lit_499 = YPsb((P)"},\n");
  lit_500 = YPsb((P)"DVAR, &");
  lit_501 = YPsb((P)"},\n");
  lit_502 = YPsb((P)"PVAR, NULL},\n");
  lit_503 = YPsb((P)"  {NULL, NVAR, NULL}\n};\n");
  lit_504 = YPsb((P)"\nstatic EXPORT_INFO export_infos[] = {\n");
  lit_505 = YPPsym((P)"x-3326");
  lit_506 = YPPsym((P)"x-3325");
  lit_507 = YPsb((P)"  {\"");
  lit_508 = YPsb((P)"\", \"");
  lit_509 = YPsb((P)"\"},\n");
  lit_510 = YPsb((P)"  {NULL, NULL}\n};\n");
  lit_511 = YPsb((P)"\nextern MODULE_INFO ");
  lit_512 = YPsb((P)";\n");
  lit_513 = YPsb((P)"MODULE_INFO ");
  lit_514 = YPsb((P)" = {\n");
  lit_515 = YPsb((P)"  \"");
  lit_516 = YPsb((P)"\",\n");
  lit_517 = YPsb((P)"  NULL,\n");
  lit_518 = YPsb((P)"  use_infos,\n");
  lit_519 = YPsb((P)"  import_infos,\n");
  lit_520 = YPsb((P)"  binding_infos,\n");
  lit_521 = YPsb((P)"  export_infos,\n");
  lit_522 = YPsb((P)"};\n");
  T289 = YPsig(YPPlist(1,LITREF(lit_484)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3317_227 = YPmet(FUNCODEREF(fun_x_3317_227),LITREF(lit_483),T289,ENVNUL,PNUL,YPfalse);
  T288 = YPsig(YPPlist(2,LITREF(lit_489),LITREF(lit_95)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_228 = YPmet(FUNCODEREF(fun_228),YPfalse,T288,ENVNUL,PNUL,YPfalse);
  T287 = YPsig(YPPlist(1,LITREF(lit_95)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_229 = YPmet(FUNCODEREF(fun_229),YPfalse,T287,ENVNUL,PNUL,YPfalse);
  T286 = YPsig(YPPlist(1,LITREF(lit_506)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3326_230 = YPmet(FUNCODEREF(fun_x_3326_230),LITREF(lit_505),T286,ENVNUL,PNUL,YPfalse);
  T285 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYgenerate_module_info = YPmet(FUNCODEREF(YevalSg2cYgenerate_module_info),LITREF(lit_480),T285,ENVNUL,PNUL,YPfalse);
  T290 = YevalSg2cYgenerate_module_info;
  VARSET(YevalSg2cYgenerate_module_info,T290);
  lit_523 = YPPsym((P)"module-init-name");
  lit_524 = YPsb((P)"load_module_");
  T291 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_name_232 = YPmet(FUNCODEREF(fun_module_init_name_232),LITREF(lit_523),T291,ENVNUL,PNUL,YPfalse);
  T294 = BOUNDP(YevalSg2cYmodule_init_name);
  if (T294 != YPfalse) {
    T293 = VARREF(YevalSg2cYmodule_init_name);
  } else {
    T293 = YPfalse;
  }
  T295 = fun_module_init_name_232;
  T292 = XCALL2(1,VARREF(YPdefine_method),T293,T295);
  VARSET(YevalSg2cYmodule_init_name,T292);
  lit_525 = YPPsym((P)"module-init-decl");
  lit_526 = YPsb((P)"void ");
  lit_527 = YPsb((P)" (void)");
  T296 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_decl_233 = YPmet(FUNCODEREF(fun_module_init_decl_233),LITREF(lit_525),T296,ENVNUL,PNUL,YPfalse);
  T299 = BOUNDP(YevalSg2cYmodule_init_decl);
  if (T299 != YPfalse) {
    T298 = VARREF(YevalSg2cYmodule_init_decl);
  } else {
    T298 = YPfalse;
  }
  T300 = fun_module_init_decl_233;
  T297 = XCALL2(1,VARREF(YPdefine_method),T298,T300);
  VARSET(YevalSg2cYmodule_init_decl,T297);
  lit_528 = YPPsym((P)"generate-module-init");
  lit_529 = YPPsym((P)"form");
  lit_530 = YPsb((P)"dl");
  lit_531 = YPsb((P)"\n/* MODULES USED: */\n\n");
  lit_532 = YPPsym((P)"x-3332");
  lit_533 = YPPsym((P)"x-3331");
  lit_534 = YPsb((P)"extern ");
  lit_535 = YPsb((P)";\n");
  lit_536 = YPsb((P)"\n/* EXPRESSION: */\n\n");
  lit_537 = YPsb((P)"extern ");
  lit_538 = YPsb((P)";\n\n");
  lit_539 = YPsb((P)" {\n");
  lit_540 = YPsb((P)"  static int need_init = 1;\n");
  lit_541 = YPsb((P)"  if (!need_init) return;\n\n");
  lit_542 = YPsb((P)"  need_init = 0;\n");
  lit_543 = YPPsym((P)"x-3337");
  lit_544 = YPPsym((P)"x-3336");
  lit_545 = YPsb((P)"  ");
  lit_546 = YPsb((P)"();\n");
  lit_547 = YPsb((P)"\n");
  lit_548 = YPsb((P)"\n");
  lit_549 = YPsb((P)"}\n");
  T303 = YPsig(YPPlist(1,LITREF(lit_533)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3332_234 = YPmet(FUNCODEREF(fun_x_3332_234),LITREF(lit_532),T303,ENVNUL,PNUL,YPfalse);
  T302 = YPsig(YPPlist(1,LITREF(lit_544)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3337_235 = YPmet(FUNCODEREF(fun_x_3337_235),LITREF(lit_543),T302,ENVNUL,PNUL,YPfalse);
  T301 = YPsig(YPPlist(3,LITREF(lit_61),LITREF(lit_20),LITREF(lit_529)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_module_init_236 = YPmet(FUNCODEREF(fun_generate_module_init_236),LITREF(lit_528),T301,ENVNUL,PNUL,YPfalse);
  T306 = BOUNDP(YevalSg2cYgenerate_module_init);
  if (T306 != YPfalse) {
    T305 = VARREF(YevalSg2cYgenerate_module_init);
  } else {
    T305 = YPfalse;
  }
  T307 = fun_generate_module_init_236;
  T304 = XCALL2(1,VARREF(YPdefine_method),T305,T307);
  VARSET(YevalSg2cYgenerate_module_init,T304);
  lit_550 = YPPsym((P)"generate-main");
  lit_551 = YPsb((P)"\n/* APPLICATION: */\n\n");
  lit_552 = YPsb((P)"extern MODULE_INFO ");
  lit_553 = YPsb((P)";\n");
  lit_554 = YPsb((P)"extern ");
  lit_555 = YPsb((P)";\n\n");
  lit_556 = YPsb((P)"MODULE_INFO *goo_toplevel_module_info = &");
  lit_557 = YPsb((P)";\n\n");
  lit_558 = YPsb((P)"int main(int argc, char* argv[]) {\n");
  lit_559 = YPsb((P)"  ");
  lit_560 = YPsb((P)"%init-world");
  lit_561 = YPsb((P)"(argc, argv);\n");
  lit_562 = YPsb((P)"  ");
  lit_563 = YPsb((P)"();\n");
  lit_564 = YPsb((P)"  return 0;\n");
  lit_565 = YPsb((P)"}\n");
  T308 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_main_237 = YPmet(FUNCODEREF(fun_generate_main_237),LITREF(lit_550),T308,ENVNUL,PNUL,YPfalse);
  T311 = BOUNDP(YevalSg2cYgenerate_main);
  if (T311 != YPfalse) {
    T310 = VARREF(YevalSg2cYgenerate_main);
  } else {
    T310 = YPfalse;
  }
  T312 = fun_generate_main_237;
  T309 = XCALL2(1,VARREF(YPdefine_method),T310,T312);
  VARSET(YevalSg2cYgenerate_main,T309);
  T313 = YPfalse;
  return T313;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_evalStop;
extern MODULE_INFO module_info_evalSast_linearize;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSmap;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSruntime},
  {&module_info_gooSioSwrite},
  {&module_info_evalSast},
  {&module_info_evalStop},
  {&module_info_evalSast_linearize},
  {&module_info_gooScolsSstr},
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
  {"binding-mangled-name-setter", &module_info_evalSast, "binding-mangled-name-setter"},
  {"binding-mutable?", &module_info_evalSast, "binding-mutable?"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"install-initial-bindings", &module_info_evalSast, "install-initial-bindings"},
  {"signature-specs", &module_info_evalSast, "signature-specs"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"signature-names", &module_info_evalSast, "signature-names"},
  {"sin", &module_info_gooSmath, "sin"},
  {">", &module_info_gooSmag, ">"},
  {"function-binding", &module_info_evalSast, "function-binding"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {">=", &module_info_gooSmag, ">="},
  {"last", &module_info_gooScolsSseq, "last"},
  {"gooc-filename", &module_info_gooSsystem, "gooc-filename"},
  {"/", &module_info_gooSmath, "/"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"function-free-setter", &module_info_evalSast, "function-free-setter"},
  {"function-data-refs", &module_info_evalSast, "function-data-refs"},
  {"~=", &module_info_gooSmath, "~="},
  {"<ast-primitive>", &module_info_evalSast, "<ast-primitive>"},
  {"<box-creation>", &module_info_evalSast_linearize, "<box-creation>"},
  {"mod", &module_info_gooSmath, "mod"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"backtrace", &module_info_evalStop, "backtrace"},
  {"global-box-value", &module_info_evalSast, "global-box-value"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"%su", &module_info_gooSboot, "%su"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"read", &module_info_gooSruntime, "read"},
  {"g2c-eval", &module_info_evalStop, "g2c-eval"},
  {"acos", &module_info_gooSmath, "acos"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"<fab-list>", &module_info_evalSast, "<fab-list>"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"@len", &module_info_gooSboot, "@len"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"binding-inferred-type-setter", &module_info_evalSast, "binding-inferred-type-setter"},
  {"bt", &module_info_evalStop, "bt"},
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
  {"recurring-write", &module_info_gooSioSwrite, "recurring-write"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"locals-bindings-setter", &module_info_evalSast, "locals-bindings-setter"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"<assignment>", &module_info_evalSast, "<assignment>"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"application-binding", &module_info_evalSast, "application-binding"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"do-module-loader-modules", &module_info_evalSast, "do-module-loader-modules"},
  {"=", &module_info_gooSmath, "="},
  {"even?", &module_info_gooSmath, "even?"},
  {"<arguments>", &module_info_evalSast, "<arguments>"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"add", &module_info_gooScolsScol, "add"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"function-bindings", &module_info_evalSast, "function-bindings"},
  {"when", &module_info_gooSmacros, "when"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"environment-module", &module_info_evalSast, "environment-module"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"rep", &module_info_gooSboot, "rep"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"fix-let-body", &module_info_evalSast, "fix-let-body"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"assignment-form", &module_info_evalSast, "assignment-form"},
  {"<module-binding-reference>", &module_info_evalSast, "<module-binding-reference>"},
  {"register-allocate!", &module_info_evalSast_linearize, "register-allocate!"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"find-goo-file-at", &module_info_gooSsystem, "find-goo-file-at"},
  {"fix-let-types", &module_info_evalSast, "fix-let-types"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"<=", &module_info_gooSmag, "<="},
  {"<ast-function>", &module_info_evalSast, "<ast-function>"},
  {"<ast-signature>", &module_info_evalSast, "<ast-signature>"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"signature-bindings-setter", &module_info_evalSast, "signature-bindings-setter"},
  {"add-goo-personal-root-path", &module_info_gooSsystem, "add-goo-personal-root-path"},
  {"<raw-constant>", &module_info_evalSast, "<raw-constant>"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"<ast-method>", &module_info_evalSast, "<ast-method>"},
  {"tail", &module_info_gooSboot, "tail"},
  {"binding-type", &module_info_evalSast, "binding-type"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"<module-loader>", &module_info_evalSast, "<module-loader>"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"fix-let-arguments", &module_info_evalSast, "fix-let-arguments"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"<module>", &module_info_evalSast, "<module>"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"until", &module_info_gooSmacros, "until"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"load-file", &module_info_evalStop, "load-file"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"module-name-to-relpath", &module_info_evalSast, "module-name-to-relpath"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"<dynamic-definition>", &module_info_evalSast, "<dynamic-definition>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"binding-kind", &module_info_evalSast, "binding-kind"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"function-temporaries", &module_info_evalSast, "function-temporaries"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"def-list", &module_info_evalSast, "def-list"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"locals-functions-setter", &module_info_evalSast, "locals-functions-setter"},
  {"|", &module_info_gooSmath, "|"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"assignment-reference", &module_info_evalSast, "assignment-reference"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"assignment-binding", &module_info_evalSast, "assignment-binding"},
  {"<runtime-assignment>", &module_info_evalSast, "<runtime-assignment>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"flatten-seqs", &module_info_evalSast_linearize, "flatten-seqs"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"$e", &module_info_gooSmath, "$e"},
  {"<local-assignment>", &module_info_evalSast, "<local-assignment>"},
  {"function-temporaries-setter", &module_info_evalSast, "function-temporaries-setter"},
  {"function-self-recursive?-setter", &module_info_evalSast, "function-self-recursive?-setter"},
  {"locals-body-setter", &module_info_evalSast, "locals-body-setter"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"%compile", &module_info_gooSsystem, "%compile"},
  {"round", &module_info_gooSmath, "round"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"function-value", &module_info_evalSast, "function-value"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"<computed-program>", &module_info_evalSast, "<computed-program>"},
  {"not", &module_info_gooSboot, "not"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"<dynamic-assignment>", &module_info_evalSast, "<dynamic-assignment>"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"$goo-boot-module-name", &module_info_evalSast, "$goo-boot-module-name"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"binding-global-box-setter", &module_info_evalSast, "binding-global-box-setter"},
  {"<local-reference>", &module_info_evalSast, "<local-reference>"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"binding-mangled-name", &module_info_evalSast, "binding-mangled-name"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<binding>", &module_info_evalSast, "<binding>"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"t?", &module_info_gooStypes, "t?"},
  {"def", &module_info_gooSboot, "def"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"probe-module", &module_info_evalSast, "probe-module"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"<locals>", &module_info_evalSast, "<locals>"},
  {"frame", &module_info_evalStop, "frame"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"<ast-generic>", &module_info_evalSast, "<ast-generic>"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"*", &module_info_gooSmath, "*"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
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
  {"pack", &module_info_gooSpacker, "pack"},
  {"binding-info-setter", &module_info_evalSast, "binding-info-setter"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"application-known?-setter", &module_info_evalSast, "application-known?-setter"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"binding-inferred-type", &module_info_evalSast, "binding-inferred-type"},
  {"sequentialize", &module_info_evalSast, "sequentialize"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"for", &module_info_gooSmacros, "for"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"locals-bindings", &module_info_evalSast, "locals-bindings"},
  {"add-goo-root-path", &module_info_gooSsystem, "add-goo-root-path"},
  {"log", &module_info_gooSmath, "log"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"save-image", &module_info_evalStop, "save-image"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"seq", &module_info_gooSboot, "seq"},
  {"t<", &module_info_gooStypes, "t<"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"program-type", &module_info_evalSast, "program-type"},
  {"<program>", &module_info_evalSast, "<program>"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"error", &module_info_gooSboot, "error"},
  {"program-form", &module_info_evalSast_linearize, "program-form"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"asin", &module_info_gooSmath, "asin"},
  {"module-mangled-string-name-setter", &module_info_evalSast, "module-mangled-string-name-setter"},
  {"dp", &module_info_gooSboot, "dp"},
  {"function-index-setter", &module_info_evalSast, "function-index-setter"},
  {"program-type-setter", &module_info_evalSast, "program-type-setter"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"reference-offset", &module_info_evalSast_linearize, "reference-offset"},
  {"objectify-with-subtransaction", &module_info_evalSast, "objectify-with-subtransaction"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"report-undefined-global-bindings", &module_info_evalSast, "report-undefined-global-bindings"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"quote", &module_info_gooSboot, "quote"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"<macro-reference>", &module_info_evalSast, "<macro-reference>"},
  {"<ast-primitive-definition>", &module_info_evalSast, "<ast-primitive-definition>"},
  {"<predefined-application>", &module_info_evalSast, "<predefined-application>"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"nul", &module_info_gooSboot, "nul"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"df", &module_info_gooSboot, "df"},
  {"function-nary?", &module_info_evalSast, "function-nary?"},
  {"eval", &module_info_evalSsyntax, "eval"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"reference-called-function?-setter", &module_info_evalSast, "reference-called-function?-setter"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"reference-frame-offset", &module_info_evalSast, "reference-frame-offset"},
  {"file-copy", &module_info_gooSsystem, "file-copy"},
  {"col", &module_info_gooScolsScol, "col"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"remove-modules-by-name!", &module_info_evalSast, "remove-modules-by-name!"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"t=", &module_info_gooStypes, "t="},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"<module-binding>", &module_info_evalSast, "<module-binding>"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"module-target-environment", &module_info_evalSast, "module-target-environment"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"dg", &module_info_gooSboot, "dg"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"dm", &module_info_gooSboot, "dm"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"while", &module_info_gooSmacros, "while"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"binding-module-name", &module_info_evalSast, "binding-module-name"},
  {"esctst", &module_info_evalStop, "esctst"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"time", &module_info_gooSsystem, "time"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"locals-functions", &module_info_evalSast, "locals-functions"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"if", &module_info_gooSboot, "if"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"1-", &module_info_gooSmath, "1-"},
  {"update-walk!", &module_info_evalSast_linearize, "update-walk!"},
  {"t+", &module_info_gooStypes, "t+"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"fab-g2c-module", &module_info_evalSast, "fab-g2c-module"},
  {"dc", &module_info_gooSboot, "dc"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"and", &module_info_gooSmacros, "and"},
  {"dv", &module_info_gooSboot, "dv"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"load-in", &module_info_evalSast, "load-in"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"in", &module_info_gooSioSport, "in"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"<global-box>", &module_info_evalSast, "<global-box>"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"locals-body", &module_info_evalSast, "locals-body"},
  {"function-registers-setter", &module_info_evalSast, "function-registers-setter"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"free-environment", &module_info_evalSast, "free-environment"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"head", &module_info_gooSboot, "head"},
  {"find-goo-file-in-path", &module_info_gooSsystem, "find-goo-file-in-path"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"<box-read>", &module_info_evalSast_linearize, "<box-read>"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"bind-exit-main-fun", &module_info_evalSast, "bind-exit-main-fun"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"tan", &module_info_gooSmath, "tan"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"extract-things!", &module_info_evalSast_linearize, "extract-things!"},
  {"function-registers", &module_info_evalSast, "function-registers"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"closure-creation-free", &module_info_evalSast_linearize, "closure-creation-free"},
  {"pow", &module_info_gooSmath, "pow"},
  {"<programs>", &module_info_evalSast, "<programs>"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"set-module-environments", &module_info_evalSast, "set-module-environments"},
  {"ct", &module_info_gooSboot, "ct"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"~", &module_info_gooSmath, "~"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"box-reference", &module_info_evalSast_linearize, "box-reference"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"<closure-creation>", &module_info_evalSast_linearize, "<closure-creation>"},
  {"closure-creation-index", &module_info_evalSast_linearize, "closure-creation-index"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"module-syntax-environment", &module_info_evalSast, "module-syntax-environment"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"form-program", &module_info_evalSast_linearize, "form-program"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%time", &module_info_gooSboot, "%time"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"module-binding", &module_info_evalSast, "module-binding"},
  {"let", &module_info_gooSboot, "let"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"pe-msg", &module_info_gooSioSwrite, "pe-msg"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"*current-handlers*", &module_info_gooSruntime, "*current-handlers*"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"out", &module_info_gooSioSport, "out"},
  {"binding-native-to?", &module_info_evalSast, "binding-native-to?"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"application-known?", &module_info_evalSast, "application-known?"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"so-load", &module_info_gooSsystem, "so-load"},
  {"function-source-setter", &module_info_evalSast, "function-source-setter"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"zipped", &module_info_gooSruntime, "zipped"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"lift!", &module_info_evalSast_linearize, "lift!"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"any?", &module_info_gooStypes, "any?"},
  {"*register-passive?*", &module_info_evalSast_linearize, "*register-passive?*"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"init-environment-for-eval", &module_info_evalSast, "init-environment-for-eval"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"ast-evaluate", &module_info_evalSast, "ast-evaluate"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"t*", &module_info_gooSboot, "t*"},
  {"insert-box!", &module_info_evalSast_linearize, "insert-box!"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"reference-frame-number", &module_info_evalSast, "reference-frame-number"},
  {"logn", &module_info_gooSmath, "logn"},
  {"function-signature-setter", &module_info_evalSast, "function-signature-setter"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"module-mangled-string-name", &module_info_evalSast, "module-mangled-string-name"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"alternative-condition", &module_info_evalSast, "alternative-condition"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"function-index", &module_info_evalSast, "function-index"},
  {"set", &module_info_gooSboot, "set"},
  {"closurize-main!", &module_info_evalSast_linearize, "closurize-main!"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"as-lst", &module_info_evalSast, "as-lst"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"unchecked-runtime-environment", &module_info_evalSast, "unchecked-runtime-environment"},
  {"signature-value", &module_info_evalSast, "signature-value"},
  {"<unwind-protect>", &module_info_evalSast, "<unwind-protect>"},
  {"environment-bindings", &module_info_evalSast, "environment-bindings"},
  {"lst", &module_info_gooSboot, "lst"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"get", &module_info_gooSioSport, "get"},
  {"abs", &module_info_gooSmath, "abs"},
  {"reference-called-function?", &module_info_evalSast, "reference-called-function?"},
  {"frame-var", &module_info_evalStop, "frame-var"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"signature-arity-setter", &module_info_evalSast, "signature-arity-setter"},
  {"try", &module_info_gooSboot, "try"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"<definition>", &module_info_evalSast, "<definition>"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"binding-index-setter", &module_info_evalSast, "binding-index-setter"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"<ast-macro-definition>", &module_info_evalSast, "<ast-macro-definition>"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"binding-global-box", &module_info_evalSast, "binding-global-box"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"<box-write>", &module_info_evalSast_linearize, "<box-write>"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"<free-reference>", &module_info_evalSast_linearize, "<free-reference>"},
  {"floor", &module_info_gooSmath, "floor"},
  {"do-named-static-global-bindings", &module_info_evalSast, "do-named-static-global-bindings"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"%load", &module_info_gooSsystem, "%load"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"module-uses-c-files", &module_info_evalSast, "module-uses-c-files"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"application-function", &module_info_evalSast, "application-function"},
  {"items", &module_info_gooScolsScol, "items"},
  {"unwind-protect-protected-thunk", &module_info_evalSast, "unwind-protect-protected-thunk"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"always", &module_info_gooSruntime, "always"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"-", &module_info_gooSmath, "-"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"module-name", &module_info_evalSast, "module-name"},
  {"<magic-reference>", &module_info_evalSast, "<magic-reference>"},
  {"module-mangled-name", &module_info_evalSast, "module-mangled-name"},
  {"module-mangled-name-setter", &module_info_evalSast, "module-mangled-name-setter"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"<sequential>", &module_info_evalSast, "<sequential>"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"as", &module_info_gooStypes, "as"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"<compile-time>", &module_info_evalSast, "<compile-time>"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"dss", &module_info_gooSboot, "dss"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"find-binding", &module_info_evalSast, "find-binding"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"function-self-recursive?", &module_info_evalSast, "function-self-recursive?"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"alternative-alternant", &module_info_evalSast, "alternative-alternant"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"put", &module_info_gooSioSport, "put"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"use", &module_info_gooSboot, "use"},
  {"function-body-setter", &module_info_evalSast, "function-body-setter"},
  {"read-file", &module_info_evalStop, "read-file"},
  {"compile-time-program", &module_info_evalSast, "compile-time-program"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"rem", &module_info_gooSmath, "rem"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"module-exports", &module_info_evalSast, "module-exports"},
  {"function-debug-name-setter", &module_info_evalSast, "function-debug-name-setter"},
  {"binding-dotted?-setter", &module_info_evalSast, "binding-dotted?-setter"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"program-register-setter", &module_info_evalSast, "program-register-setter"},
  {"do-stack-frames", &module_info_evalStop, "do-stack-frames"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"&", &module_info_gooSmath, "&"},
  {"<application>", &module_info_evalSast, "<application>"},
  {"binding-value-setter", &module_info_evalSast, "binding-value-setter"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"%get", &module_info_gooSboot, "%get"},
  {"map", &module_info_gooSmacros, "map"},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, "unwind-protect-cleanup-thunk"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"@==", &module_info_gooSboot, "@=="},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"<dynamic-reference>", &module_info_evalSast, "<dynamic-reference>"},
  {"signature-nary?-setter", &module_info_evalSast, "signature-nary?-setter"},
  {"cos", &module_info_gooSmath, "cos"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"<constant>", &module_info_evalSast, "<constant>"},
  {"find", &module_info_gooScolsScol, "find"},
  {"<renamed-local-binding>", &module_info_evalSast_linearize, "<renamed-local-binding>"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"op", &module_info_gooSmacros, "op"},
  {"top", &module_info_evalStop, "top"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"<monitor>", &module_info_evalSast, "<monitor>"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"objectify-signature", &module_info_evalSast, "objectify-signature"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"parse-in", &module_info_evalStop, "parse-in"},
  {"atan", &module_info_gooSmath, "atan"},
  {"function-source", &module_info_evalSast, "function-source"},
  {"gather-temporaries!", &module_info_evalSast_linearize, "gather-temporaries!"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"module-loader-module-type", &module_info_evalSast, "module-loader-module-type"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {">>", &module_info_gooSmath, ">>"},
  {"*goo-personal-root*", &module_info_gooSsystem, "*goo-personal-root*"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"signature-specs-setter", &module_info_evalSast, "signature-specs-setter"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"signature-names-setter", &module_info_evalSast, "signature-names-setter"},
  {"*goo-build-root*", &module_info_gooSsystem, "*goo-build-root*"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"1+", &module_info_gooSmath, "1+"},
  {"ast-define-binding", &module_info_evalSast, "ast-define-binding"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"round/", &module_info_gooSmath, "round/"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"fix-let-bindings-setter", &module_info_evalSast, "fix-let-bindings-setter"},
  {"close", &module_info_gooSioSport, "close"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"<reference>", &module_info_evalSast, "<reference>"},
  {"def-programs", &module_info_evalSast, "def-programs"},
  {"application-arguments", &module_info_evalSast, "application-arguments"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"analyze-ast", &module_info_evalSast_linearize, "analyze-ast"},
  {"function-signature", &module_info_evalSast, "function-signature"},
  {"function-data-refs-setter", &module_info_evalSast, "function-data-refs-setter"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"<global-reference>", &module_info_evalSast, "<global-reference>"},
  {"global-box-value-setter", &module_info_evalSast, "global-box-value-setter"},
  {"%put", &module_info_gooSboot, "%put"},
  {"<static-global-environment>", &module_info_evalSast, "<static-global-environment>"},
  {"monitor-main-thunk", &module_info_evalSast, "monitor-main-thunk"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"environment-uses-modules", &module_info_evalSast, "environment-uses-modules"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"signature-value-setter", &module_info_evalSast, "signature-value-setter"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"<local-binding>", &module_info_evalSast, "<local-binding>"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"do-static-global-bindings", &module_info_evalSast, "do-static-global-bindings"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"function-free", &module_info_evalSast, "function-free"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"fin", &module_info_gooSboot, "fin"},
  {"load", &module_info_evalStop, "load"},
  {"loc", &module_info_gooSboot, "loc"},
  {"max", &module_info_gooSmag, "max"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"reference-binding", &module_info_evalSast, "reference-binding"},
  {"signature-arity", &module_info_evalSast, "signature-arity"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"monitor-handler", &module_info_evalSast, "monitor-handler"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"tup", &module_info_gooSboot, "tup"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"constant-value", &module_info_evalSast, "constant-value"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"binding-index", &module_info_evalSast, "binding-index"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"app", &module_info_gooSmacros, "app"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"monitor-type", &module_info_evalSast, "monitor-type"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"export", &module_info_gooSboot, "export"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"runtime-environment", &module_info_evalSast, "runtime-environment"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"binding-name", &module_info_evalSast, "binding-name"},
  {"<bind-exit>", &module_info_evalSast, "<bind-exit>"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"assignment-form-setter", &module_info_evalSast, "assignment-form-setter"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"fix-let-types-setter", &module_info_evalSast, "fix-let-types-setter"},
  {"<regular-application>", &module_info_evalSast, "<regular-application>"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"application-tail?", &module_info_evalSast, "application-tail?"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"into", &module_info_gooScolsScol, "into"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"mif", &module_info_gooSboot, "mif"},
  {"len", &module_info_gooStypes, "len"},
  {"<static-module-binding-reference>", &module_info_evalSast, "<static-module-binding-reference>"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"~==", &module_info_gooSmath, "~=="},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"or", &module_info_gooSmacros, "or"},
  {"binding-type-setter", &module_info_evalSast, "binding-type-setter"},
  {"new", &module_info_gooSboot, "new"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"msg*", &module_info_gooSioSwrite, "msg*"},
  {"load-module", &module_info_evalSast, "load-module"},
  {"fix-let-bindings", &module_info_evalSast, "fix-let-bindings"},
  {"fix-let-arguments-setter", &module_info_evalSast, "fix-let-arguments-setter"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"<bound?>", &module_info_evalSast, "<bound?>"},
  {"find-environment-module", &module_info_evalSast, "find-environment-module"},
  {"monitor-info", &module_info_evalSast, "monitor-info"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"reference-self?", &module_info_evalSast_linearize, "reference-self?"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%im", &module_info_gooSboot, "%im"},
  {"fix-let-body-setter", &module_info_evalSast, "fix-let-body-setter"},
  {"port2str", &module_info_gooSioSport, "port2str"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"binding-info", &module_info_evalSast, "binding-info"},
  {"<immediate-constant>", &module_info_evalSast, "<immediate-constant>"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"<real-reference>", &module_info_evalSast, "<real-reference>"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"open", &module_info_gooSioSport, "open"},
  {"function-body", &module_info_evalSast, "function-body"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"min", &module_info_gooSmag, "min"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"ast-contains-fun?", &module_info_evalSast_linearize, "ast-contains-fun?"},
  {"init-ast", &module_info_evalSast, "init-ast"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"monitor-test", &module_info_evalSast, "monitor-test"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"function-debug-name", &module_info_evalSast, "function-debug-name"},
  {"binding-dotted?", &module_info_evalSast, "binding-dotted?"},
  {"program-register", &module_info_evalSast, "program-register"},
  {"auto-eval", &module_info_evalStop, "auto-eval"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"binding-locative", &module_info_evalSast, "binding-locative"},
  {"^", &module_info_gooSmath, "^"},
  {"binding-locative-setter", &module_info_evalSast, "binding-locative-setter"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"@+", &module_info_gooSboot, "@+"},
  {"binding-value", &module_info_evalSast, "binding-value"},
  {"%str", &module_info_gooSboot, "%str"},
  {"<passive-program>", &module_info_evalSast, "<passive-program>"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"<global-assignment>", &module_info_evalSast, "<global-assignment>"},
  {"signature-bindings", &module_info_evalSast, "signature-bindings"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"<fix-let>", &module_info_evalSast, "<fix-let>"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"constant-index", &module_info_evalSast, "constant-index"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"constant-index-setter", &module_info_evalSast, "constant-index-setter"},
  {"==", &module_info_gooSmacros, "=="},
  {"signature-nary?", &module_info_evalSast, "signature-nary?"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"del", &module_info_gooScolsScol, "del"},
  {"bound?-reference", &module_info_evalSast, "bound?-reference"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"match", &module_info_gooSmacros, "match"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"<top-level-form>", &module_info_evalSast_linearize, "<top-level-form>"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"now", &module_info_gooScolsScol, "now"},
  {"<alternative>", &module_info_evalSast, "<alternative>"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"*module-search-path*", &module_info_gooSsystem, "*module-search-path*"},
  {"env-object-name", &module_info_evalSast, "env-object-name"},
  {"nil", &module_info_gooSboot, "nil"},
  {"alternative-consequent", &module_info_evalSast, "alternative-consequent"},
  {"binding-module", &module_info_evalSast, "binding-module"},
  {"do", &module_info_gooSmacros, "do"},
  {"case", &module_info_gooSmacros, "case"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"unconstrained-type?", &module_info_evalSast_linearize, "unconstrained-type?"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"esc", &module_info_gooSboot, "esc"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"+", &module_info_gooSmath, "+"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"box-form", &module_info_evalSast_linearize, "box-form"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"mangler-reset", CVAR, &YevalSg2cYmangler_reset},
  {"mangle-local-name", CVAR, &YevalSg2cYmangle_local_name},
  {"$local-marker", CVAR, &YevalSg2cYDlocal_marker},
  {"declare-imported-module-infos", CVAR, &YevalSg2cYdeclare_imported_module_infos},
  {"with-expression", PVAR, NULL},
  {"*trace-registers?*", CVAR, &YevalSg2cYTtrace_registersQT},
  {"*registers-per-line*", CVAR, &YevalSg2cYTregisters_per_lineT},
  {"generate-trailer", CVAR, &YevalSg2cYgenerate_trailer},
  {"to-c", CVAR, &YevalSg2cYto_c},
  {"mangle-local-marked-name", CVAR, &YevalSg2cYmangle_local_marked_name},
  {"generate-function-code", CVAR, &YevalSg2cYgenerate_function_code},
  {"*definitions*", DVAR, &YevalSg2cYTdefinitionsT},
  {"module-mtime", CVAR, &YevalSg2cYmodule_mtime},
  {"generate-shadow-args", CVAR, &YevalSg2cYgenerate_shadow_args},
  {"<g2c-module-loader>", CVAR, &YevalSg2cYLg2c_module_loaderG},
  {"char-buffer-as-string", CVAR, &YevalSg2cYchar_buffer_as_string},
  {"module-info-name", CVAR, &YevalSg2cYmodule_info_name},
  {"*tmp-file-counter*", CVAR, &YevalSg2cYTtmp_file_counterT},
  {"purge-outdated-modules", CVAR, &YevalSg2cYpurge_outdated_modules},
  {"module-loader-appname-setter", CVAR, &YevalSg2cYmodule_loader_appname_setter},
  {"mangle-module-into", CVAR, &YevalSg2cYmangle_module_into},
  {"funinit-to-c", CVAR, &YevalSg2cYfuninit_to_c},
  {"generate-quotation", CVAR, &YevalSg2cYgenerate_quotation},
  {"%print-cpu-usage", PVAR, NULL},
  {"mangle-integer", CVAR, &YevalSg2cYmangle_integer},
  {"generate-c-module", CVAR, &YevalSg2cYgenerate_c_module},
  {"compute-ast", CVAR, &YevalSg2cYcompute_ast},
  {"generate-makefile", CVAR, &YevalSg2cYgenerate_makefile},
  {"generate-header", CVAR, &YevalSg2cYgenerate_header},
  {"generate-global-environment", CVAR, &YevalSg2cYgenerate_global_environment},
  {"*mangle-buffer*", CVAR, &YevalSg2cYTmangle_bufferT},
  {"between-parentheses-comma-separated", PVAR, NULL},
  {"module-src-file-setter", CVAR, &YevalSg2cYmodule_src_file_setter},
  {"$escape-marker", CVAR, &YevalSg2cYDescape_marker},
  {"g2c-def-app", CVAR, &YevalSg2cYg2c_def_app},
  {"generate-c-application", CVAR, &YevalSg2cYgenerate_c_application},
  {"module-loader-app-modname", CVAR, &YevalSg2cYmodule_loader_app_modname},
  {"$hygiene-char", CVAR, &YevalSg2cYDhygiene_char},
  {"mangle-binding", CVAR, &YevalSg2cYmangle_binding},
  {"generate-function-forward", CVAR, &YevalSg2cYgenerate_function_forward},
  {"generate-local-temporaries", CVAR, &YevalSg2cYgenerate_local_temporaries},
  {"module-loader-app-modname-setter", CVAR, &YevalSg2cYmodule_loader_app_modname_setter},
  {"generate-return", CVAR, &YevalSg2cYgenerate_return},
  {"generate-function-body-reference", CVAR, &YevalSg2cYgenerate_function_body_reference},
  {"module-up-to-date?", CVAR, &YevalSg2cYmodule_up_to_dateQ},
  {"gen-fab-list", CVAR, &YevalSg2cYgen_fab_list},
  {"g2c-ast", CVAR, &YevalSg2cYg2c_ast},
  {"$name-mangler-table", CVAR, &YevalSg2cYDname_mangler_table},
  {"$mangles-data", CVAR, &YevalSg2cYDmangles_data},
  {"gen-result", CVAR, &YevalSg2cYgen_result},
  {"false-name", CVAR, &YevalSg2cYfalse_name},
  {"generate-quotation-forwards", CVAR, &YevalSg2cYgenerate_quotation_forwards},
  {"*g2c-app*", CVAR, &YevalSg2cYTg2c_appT},
  {"g2c-clean", CVAR, &YevalSg2cYg2c_clean},
  {"generate-self-recursive-call", CVAR, &YevalSg2cYgenerate_self_recursive_call},
  {"with-statement", PVAR, NULL},
  {"g2c-goo", CVAR, &YevalSg2cYg2c_goo},
  {"float-to-c-string", CVAR, &YevalSg2cYfloat_to_c_string},
  {"g2c-build-app", CVAR, &YevalSg2cYg2c_build_app},
  {"$hygiene-marker", CVAR, &YevalSg2cYDhygiene_marker},
  {"gen-ref", CVAR, &YevalSg2cYgen_ref},
  {"buf-cat2!", CVAR, &YevalSg2cYbuf_cat2X},
  {"module-loader-appname", CVAR, &YevalSg2cYmodule_loader_appname},
  {"mangle-string-literal", CVAR, &YevalSg2cYmangle_string_literal},
  {"generate-module-init", CVAR, &YevalSg2cYgenerate_module_init},
  {"mangle-quotation-name", CVAR, &YevalSg2cYmangle_quotation_name},
  {"$min-character-code", CVAR, &YevalSg2cYDmin_character_code},
  {"module-src-file", CVAR, &YevalSg2cYmodule_src_file},
  {"compute-program", CVAR, &YevalSg2cYcompute_program},
  {"for-commas", PVAR, NULL},
  {"generate-function-specs", CVAR, &YevalSg2cYgenerate_function_specs},
  {"$module-separator", CVAR, &YevalSg2cYDmodule_separator},
  {"reference->c", CVAR, &YevalSg2cYreference_Gc},
  {"g2c-exp", CVAR, &YevalSg2cYg2c_exp},
  {"g2c-top", CVAR, &YevalSg2cYg2c_top},
  {"pp", CVAR, &YevalSg2cYpp},
  {"$method-mangled-marker-string", CVAR, &YevalSg2cYDmethod_mangled_marker_string},
  {"$local-suffix", CVAR, &YevalSg2cYDlocal_suffix},
  {"$c-escapes", CVAR, &YevalSg2cYDc_escapes},
  {"mangle-boot-name", CVAR, &YevalSg2cYmangle_boot_name},
  {"mangle-raw-name", CVAR, &YevalSg2cYmangle_raw_name},
  {"g2c-test", CVAR, &YevalSg2cYg2c_test},
  {"$max-character-code", CVAR, &YevalSg2cYDmax_character_code},
  {"module-init-decl", CVAR, &YevalSg2cYmodule_init_decl},
  {"$iep-marker", CVAR, &YevalSg2cYDiep_marker},
  {"<g2c-module>", CVAR, &YevalSg2cYLg2c_moduleG},
  {"$iep-suffix", CVAR, &YevalSg2cYDiep_suffix},
  {"with-used-expression", PVAR, NULL},
  {"$module-marker", CVAR, &YevalSg2cYDmodule_marker},
  {"binding->c", CVAR, &YevalSg2cYbinding_Gc},
  {"generate-module-info", CVAR, &YevalSg2cYgenerate_module_info},
  {"generate-main", CVAR, &YevalSg2cYgenerate_main},
  {"funshell-to-c", CVAR, &YevalSg2cYfunshell_to_c},
  {"generate-function-binding", CVAR, &YevalSg2cYgenerate_function_binding},
  {"generate-functions", CVAR, &YevalSg2cYgenerate_functions},
  {"dispatcher?", CVAR, &YevalSg2cYdispatcherQ},
  {"generate-closure-structure", CVAR, &YevalSg2cYgenerate_closure_structure},
  {"---main-1---", PVAR, NULL},
  {"or/set", PVAR, NULL},
  {"generate-quotations", CVAR, &YevalSg2cYgenerate_quotations},
  {"$method-mangled-marker", CVAR, &YevalSg2cYDmethod_mangled_marker},
  {"$escape-separator", CVAR, &YevalSg2cYDescape_separator},
  {"---main-2---", PVAR, NULL},
  {"generate-registers", CVAR, &YevalSg2cYgenerate_registers},
  {"module-mtime-setter", CVAR, &YevalSg2cYmodule_mtime_setter},
  {"$number-characters", CVAR, &YevalSg2cYDnumber_characters},
  {"mangle-name-into", CVAR, &YevalSg2cYmangle_name_into},
  {"primitive-inlinable?", CVAR, &YevalSg2cYprimitive_inlinableQ},
  {"generate-global-binding", CVAR, &YevalSg2cYgenerate_global_binding},
  {"generate-function-forwards", CVAR, &YevalSg2cYgenerate_function_forwards},
  {"generate-function-bodies", CVAR, &YevalSg2cYgenerate_function_bodies},
  {"mangle-global-name", CVAR, &YevalSg2cYmangle_global_name},
  {"compile-load", CVAR, &YevalSg2cYcompile_load},
  {"out-list-builder", CVAR, &YevalSg2cYout_list_builder},
  {"$number-call-templates", CVAR, &YevalSg2cYDnumber_call_templates},
  {"module-init-name", CVAR, &YevalSg2cYmodule_init_name},
  {"gen-depth", CVAR, &YevalSg2cYgen_depth},
  {"*dynamic-linking?*", DVAR, &YevalSg2cYTdynamic_linkingQT},
  {"---main-0---", PVAR, NULL},
  {"between-parentheses", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"g2c-eval", "g2c-eval"},
  {"g2c-exp", "g2c-exp"},
  {"g2c-ast", "g2c-ast"},
  {"g2c-clean", "g2c-clean"},
  {"g2c-goo", "g2c-goo"},
  {"g2c-top", "g2c-top"},
  {"g2c-test", "g2c-test"},
  {"g2c-build-app", "g2c-build-app"},
  {"g2c-def-app", "g2c-def-app"},
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
extern void load_module_gooSruntime (void);
extern void load_module_gooSioSwrite (void);
extern void load_module_evalSast (void);
extern void load_module_evalStop (void);
extern void load_module_evalSast_linearize (void);
extern void load_module_gooScolsSstr (void);
extern void load_module_gooSsystem (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooScols (void);
extern void load_module_gooSioSport (void);

/* EXPRESSION: */

extern void load_module_evalSg2c (void);

void load_module_evalSg2c (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSruntime();
  load_module_gooSioSwrite();
  load_module_evalSast();
  load_module_evalStop();
  load_module_evalSast_linearize();
  load_module_gooScolsSstr();
  load_module_gooSsystem();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScols();
  load_module_gooSioSport();

  (P)YevalSg2cY___main_0___();
  (P)YevalSg2cY___main_1___();
  (P)YevalSg2cY___main_2___();

}

/* END OF GENERATED CODE. */
