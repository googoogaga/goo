/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/top */

EXT(YLoptsG,"goo/boot","<opts>");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
DEF(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
DEF(YevalStopYstr_eval,"eval/top","str-eval");
DEF(YevalStopYprompt_for_command_expression,"eval/top","prompt-for-command-expression");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
DEF(YevalStopYparse_in,"eval/top","parse-in");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YgooSmathYLL,"goo/math","<<");
DEF(YevalStopYstr_parse_in,"eval/top","str-parse-in");
EXT(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
EXT(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(Yerror,"goo/boot","error");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
DEF(YevalStopYstr_eval_in,"eval/top","str-eval-in");
EXT(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YgooSmathYmodA,"goo/math","mod+");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(Ytup,"goo/boot","tup");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
EXT(YevalSast_linearizeYunconstrained_typeQ,"eval/ast-linearize","unconstrained-type?");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSast_linearizeYast_contains_funQ,"eval/ast-linearize","ast-contains-fun?");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(Yfind_getter,"goo/boot","find-getter");
DEF(YevalStopYbt,"eval/top","bt");
EXT(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
EXT(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
DEF(YevalStopYesctst,"eval/top","esctst");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
DEF(YevalStopYeval_in,"eval/top","eval-in");
EXT(YgooStypesYas,"goo/types","as");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YtT,"goo/boot","t*");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
EXT(YevalSast_linearizeYupdate_walkX,"eval/ast-linearize","update-walk!");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
DYNDEF(YevalStopYrun,"eval/top","run");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
DEF(YevalStopYPPbottomPPg2c_run,"eval/top","%%bottom%%g2c-run");
EXT(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
EXT(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSmathYmod,"goo/math","mod");
DEF(YevalStopYPPbottomPPast_run,"eval/top","%%bottom%%ast-run");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YLmetG,"goo/boot","<met>");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
DEF(YevalStopYsave_image,"eval/top","save-image");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
EXT(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
DEF(YevalStopYframe,"eval/top","frame");
EXT(YLcolG,"goo/boot","<col>");
EXT(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYK,"goo/math","|");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
EXT(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
DEF(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
EXT(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
DEF(YevalStopYstr_parse,"eval/top","str-parse");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(Yhead,"goo/boot","head");
EXT(YPPmacro,"goo/boot","%%macro");
DEF(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
DEF(YevalStopYprint_result_expression,"eval/top","print-result-expression");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
DEF(YevalStopYPPtopPPtop_in,"eval/top","%%top%%top-in");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
EXT(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
EXT(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooSmathYB,"goo/math","&");
DEF(YevalStopYparse,"eval/top","parse");
EXT(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooSmacrosYEE,"goo/macros","==");
DEF(YevalStopYDg2c_evalQ,"eval/top","$g2c-eval?");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YLnumG,"goo/boot","<num>");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
DEF(YevalStopYload,"eval/top","load");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
EXT(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
DEF(YevalStopYauto_run,"eval/top","auto-run");
EXT(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
EXT(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
DEF(YevalStopYread_file,"eval/top","read-file");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
EXT(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
DEF(YevalStopYtop,"eval/top","top");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
DEF(YevalStopYLkeyboard_interruptG,"eval/top","<keyboard-interrupt>");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YLlogG,"goo/boot","<log>");
EXT(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(Ynot,"goo/boot","not");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
EXT(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YLclassG,"goo/boot","<class>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YLanyG,"goo/boot","<any>");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YgooSmathYlog,"goo/math","log");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YevalSast_linearizeYanalyze_ast,"eval/ast-linearize","analyze-ast");
EXT(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
DEF(YevalStopYframe_var,"eval/top","frame-var");
EXT(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
DEF(YevalStopYcompiled_fileQ,"eval/top","compiled-file?");
EXT(Yobject_parents,"goo/boot","object-parents");
DEF(YevalStopYdo_restart,"eval/top","do-restart");
EXT(YOlst,"goo/boot","@lst");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
EXT(YgooSmathYC,"goo/math","^");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(Ynew,"goo/boot","new");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
DEF(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
DEF(YevalStopYload_file,"eval/top","load-file");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
EXT(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(Ynul,"goo/boot","nul");
EXT(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_93);
DEFLIT(lit_101);
DEFLIT(lit_10);
DEFLIT(lit_95);
DEFLIT(lit_29);
DEFLIT(lit_80);
DEFLIT(lit_53);
DEFLIT(lit_107);
DEFLIT(lit_45);
DEFLIT(lit_141);
DEFLIT(lit_136);
DEFLIT(lit_51);
DEFLIT(lit_113);
DEFLIT(lit_116);
DEFLIT(lit_118);
DEFLIT(lit_57);
DEFLIT(lit_110);
DEFLIT(lit_40);
DEFLIT(lit_7);
DEFLIT(lit_27);
DEFLIT(lit_98);
DEFLIT(lit_82);
DEFLIT(lit_60);
DEFLIT(lit_112);
DEFLIT(lit_119);
DEFLIT(lit_5);
DEFLIT(lit_128);
DEFLIT(lit_28);
DEFLIT(lit_103);
DEFLIT(lit_122);
DEFLIT(lit_111);
DEFLIT(lit_36);
DEFLIT(lit_6);
DEFLIT(lit_49);
DEFLIT(lit_42);
DEFLIT(lit_11);
DEFLIT(lit_46);
DEFLIT(lit_144);
DEFLIT(lit_127);
DEFLIT(lit_114);
DEFLIT(lit_9);
DEFLIT(lit_131);
DEFLIT(lit_52);
DEFLIT(lit_22);
DEFLIT(lit_31);
DEFLIT(lit_86);
DEFLIT(lit_134);
DEFLIT(lit_26);
DEFLIT(lit_55);
DEFLIT(lit_137);
DEFLIT(lit_94);
DEFLIT(lit_33);
DEFLIT(lit_68);
DEFLIT(lit_54);
DEFLIT(lit_70);
DEFLIT(lit_72);
DEFLIT(lit_120);
DEFLIT(lit_50);
DEFLIT(lit_81);
DEFLIT(lit_58);
DEFLIT(lit_85);
DEFLIT(lit_75);
DEFLIT(lit_132);
DEFLIT(lit_77);
DEFLIT(lit_91);
DEFLIT(lit_92);
DEFLIT(lit_38);
DEFLIT(lit_0);
DEFLIT(lit_61);
DEFLIT(lit_146);
DEFLIT(lit_23);
DEFLIT(lit_18);
DEFLIT(lit_25);
DEFLIT(lit_32);
DEFLIT(lit_47);
DEFLIT(lit_19);
DEFLIT(lit_104);
DEFLIT(lit_59);
DEFLIT(lit_37);
DEFLIT(lit_126);
DEFLIT(lit_14);
DEFLIT(lit_84);
DEFLIT(lit_39);
DEFLIT(lit_121);
DEFLIT(lit_140);
DEFLIT(lit_76);
DEFLIT(lit_30);
DEFLIT(lit_16);
DEFLIT(lit_4);
DEFLIT(lit_8);
DEFLIT(lit_125);
DEFLIT(lit_78);
DEFLIT(lit_99);
DEFLIT(lit_62);
DEFLIT(lit_100);
DEFLIT(lit_34);
DEFLIT(lit_90);
DEFLIT(lit_89);
DEFLIT(lit_56);
DEFLIT(lit_20);
DEFLIT(lit_43);
DEFLIT(lit_74);
DEFLIT(lit_73);
DEFLIT(lit_117);
DEFLIT(lit_44);
DEFLIT(lit_65);
DEFLIT(lit_97);
DEFLIT(lit_142);
DEFLIT(lit_96);
DEFLIT(lit_17);
DEFLIT(lit_71);
DEFLIT(lit_87);
DEFLIT(lit_63);
DEFLIT(lit_102);
DEFLIT(lit_138);
DEFLIT(lit_105);
DEFLIT(lit_48);
DEFLIT(lit_135);
DEFLIT(lit_106);
DEFLIT(lit_145);
DEFLIT(lit_3);
DEFLIT(lit_133);
DEFLIT(lit_123);
DEFLIT(lit_13);
DEFLIT(lit_41);
DEFLIT(lit_139);
DEFLIT(lit_109);
DEFLIT(lit_67);
DEFLIT(lit_35);
DEFLIT(lit_143);
DEFLIT(lit_21);
DEFLIT(lit_108);
DEFLIT(lit_88);
DEFLIT(lit_129);
DEFLIT(lit_130);
DEFLIT(lit_147);
DEFLIT(lit_66);
DEFLIT(lit_15);
DEFLIT(lit_2);
DEFLIT(lit_124);
DEFLIT(lit_115);
DEFLIT(lit_64);
DEFLIT(lit_69);
DEFLIT(lit_83);
DEFLIT(lit_1);
DEFLIT(lit_24);
DEFLIT(lit_79);
DEFLIT(lit_12);

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
LOCFOR(fun_x_1471_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_x_1475_30);
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
LOCFOR(fun_x_1517_52);
LOCFOR(fun_53);
LOCFOR(fun_x_1514_54);
LOCFOR(fun_55);
LOCFOR(fun_x_1511_56);
LOCFOR(fun_57);
LOCFOR(fun_x_1508_58);
LOCFOR(fun_59);
LOCFOR(fun_x_1505_60);
LOCFOR(fun_61);
LOCFOR(fun_x_1502_62);
LOCFOR(fun_63);
LOCFOR(fun_x_1499_64);
LOCFOR(fun_65);
LOCFOR(fun_x_1496_66);
LOCFOR(fun_67);
LOCFOR(fun_x_1493_68);
LOCFOR(fun_69);
LOCFOR(fun_x_1490_70);
LOCFOR(fun_71);
LOCFOR(fun_x_1487_72);
LOCFOR(fun_73);
LOCFOR(fun_x_1484_74);
LOCFOR(fun_75);
LOCFOR(fun_x_1481_76);
LOCFOR(fun_77);
LOCFOR(fun_x_1478_78);
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
  P astF2061;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(form_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),form_,ct_env_,YPfalse);
  astF2061 = T1;
  T2 = CALL2(1,DYNREF(YevalStopYrun),astF2061,ct_env_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_in_12) {
  P x_,ct_env_;
  P eF2063;
  P oF2062;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),x_,ct_env_,YPfalse);
  oF2062 = T1;
  T3 = CALL1(1,VARREF(YevalSastYast_evaluate),oF2062);
  eF2063 = T3;
  T2 = eF2063;
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
  P xF2064;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(forms_, 0);
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL1(1,VARREF(YgooSruntimeYread),T2);
  xF2064 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),xF2064);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooSmacrosYrevX),forms_);
    T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_sequence_Gbegin),T6);
    T3 = T5;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYpair),xF2064,forms_);
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
  P loopF2065;
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_in_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T2 = FUNSHELL(1,fun_loop_17,2);
  loopF2065 = T2;
  FUNINIT(loopF2065, 2,FREEREF(0),loopF2065);
  T3 = CALL1(0,loopF2065,Ynil);
  T1 = T3;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_19) {
  P tmpF2066;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2066 = T1;
  if (tmpF2066 != YPfalse) {
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
  P portF2067;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  portF2067 = YPfalse;
  portF2067 = BOXFAB(portF2067);
  T3 = FUNFAB(fun_18,2,portF2067,filename_);
  T4 = FUNFAB(fun_19,1,portF2067);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_in_21) {
  P filename_,ct_env_;
  P oF2069;
  P xF2068;
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
    xF2068 = T4;
    T6 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),xF2068,ct_env_,YPfalse);
    oF2069 = T6;
    T7 = CALL2(1,DYNREF(YevalStopYrun),oF2069,ct_env_);
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
  P realfileF2070;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_in_path),name_,VARREF(YgooSsystemYTmodule_search_pathT));
  realfileF2070 = T1;
  T2 = CALL1(1,VARREF(Ynot),realfileF2070);
  if (T2 != YPfalse) {
    T3 = CALL2(1,VARREF(Yerror),LITREF(lit_38),name_);
  } else {
  }
  T4 = CALL2(1,VARREF(YevalStopYload_file),realfileF2070,modname_);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_prompt_for_command_expression_24) {
  P env_,level_,prompt_;
  P argsF2074;
  P arg_strF2073;
  P tmpF2072;
  P formF2071;
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
  formF2071 = T3;
  T6 = CALL2(1,VARREF(YisaQ),formF2071,VARREF(YLlstG));
  tmpF2072 = T6;
  if (tmpF2072 != YPfalse) {
    T9 = CALL1(1,VARREF(Yhead),formF2071);
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),T9,LITREF(lit_44));
    T7 = T8;
  } else {
    T7 = YPfalse;
  }
  T5 = T7;
  if (T5 != YPfalse) {
    T11 = CALL1(1,VARREF(YgooSioSportYgets),VARREF(YgooSioSportYin));
    arg_strF2073 = T11;
    T14 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_45),arg_strF2073,LITREF(lit_46));
    T13 = CALL1(1,VARREF(YgooSioSreadYread_from_string),T14);
    argsF2074 = T13;
    T17 = CALL1(1,VARREF(YgooStypesY2nd),formF2071);
    T16 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_47),T17);
    T15 = CALL2(1,VARREF(YgooSmacrosYpair),T16,argsF2074);
    T12 = T15;
    T10 = T12;
    T4 = T10;
  } else {
    T4 = formF2071;
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

FUNCODEDEF(fun_x_1471_27) {
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
  P x_1470F2087;
  P x_1470F2086;
  P x_1470F2085;
  P x_1470F2084;
  P x_1470F2083;
  P x_1470F2082;
  P x_1470F2081;
  P bodyF2080;
  P argsF2079;
  P fF2078;
  P numF2077;
  P x_1470F2076;
  P x_1471F2075;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1471_27,1);
  x_1471F2075 = T1;
  FUNINIT(x_1471F2075, 1,return_);
  x_1470F2076 = FREEREF(0);
  numF2077 = YPfalse;
  numF2077 = BOXFAB(numF2077);
  fF2078 = YPfalse;
  fF2078 = BOXFAB(fF2078);
  argsF2079 = YPfalse;
  argsF2079 = BOXFAB(argsF2079);
  bodyF2080 = YPfalse;
  bodyF2080 = BOXFAB(bodyF2080);
  T11 = CALL2(1,VARREF(YisaQ),x_1470F2076,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1470F2076,LITREF(lit_58),x_1471F2075);
    x_1470F2081 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1470F2081,x_1471F2075);
    x_1470F2082 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1470F2082,x_1471F2075);
    BOXVAL(numF2077) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1470F2082);
    x_1470F2083 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1470F2083,x_1471F2075);
    BOXVAL(fF2078) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1470F2083);
    x_1470F2084 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1470F2084,x_1471F2075);
    BOXVAL(argsF2079) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1470F2084);
    x_1470F2085 = T24;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1470F2085,x_1471F2075);
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T26 = CALL1(1,VARREF(Ytail),x_1470F2081);
    x_1470F2086 = T26;
    BOXVAL(bodyF2080) = x_1470F2086;
    x_1470F2087 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1470F2087,x_1471F2075);
    T27 = T28;
    T14 = T27;
    T12 = T14;
  } else {
    T29 = CALL2(1,x_1471F2075,LITREF(lit_59),x_1470F2076);
  }
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T37 = BOXVAL(numF2077);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T38 = CALL1(1,VARREF(Ylst),YPint((P)0));
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T38,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T33 = CALL2(1,VARREF(YgooSmacrosYcat),T34,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_52));
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_53));
  T48 = BOXVAL(fF2078);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T46 = CALL3(1,VARREF(YgooSmacrosYcat),T47,T49,Ynil);
  T45 = CALL1(1,VARREF(Ylst),T46);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T54 = BOXVAL(argsF2079);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T56 = CALL3(1,VARREF(YgooSmacrosYcat),T57,T58,Ynil);
  T55 = CALL1(1,VARREF(Ylst),T56);
  T51 = CALL4(1,VARREF(YgooSmacrosYcat),T52,T53,T55,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T59 = BOXVAL(bodyF2080);
  T62 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T64 = BOXVAL(numF2077);
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

FUNCODEDEF(fun_x_1475_30) {
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
  P x_1474F2100;
  P x_1474F2099;
  P x_1474F2098;
  P x_1474F2097;
  P x_1474F2096;
  P x_1474F2095;
  P x_1474F2094;
  P bodyF2093;
  P argsF2092;
  P fF2091;
  P numF2090;
  P x_1474F2089;
  P x_1475F2088;
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
  T1 = FUNSHELL(0,fun_x_1475_30,1);
  x_1475F2088 = T1;
  FUNINIT(x_1475F2088, 1,return_);
  x_1474F2089 = FREEREF(0);
  numF2090 = YPfalse;
  numF2090 = BOXFAB(numF2090);
  fF2091 = YPfalse;
  fF2091 = BOXFAB(fF2091);
  argsF2092 = YPfalse;
  argsF2092 = BOXFAB(argsF2092);
  bodyF2093 = YPfalse;
  bodyF2093 = BOXFAB(bodyF2093);
  T11 = CALL2(1,VARREF(YisaQ),x_1474F2089,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1474F2089,LITREF(lit_66),x_1475F2088);
    x_1474F2094 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1474F2094,x_1475F2088);
    x_1474F2095 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1474F2095,x_1475F2088);
    BOXVAL(numF2090) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1474F2095);
    x_1474F2096 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1474F2096,x_1475F2088);
    BOXVAL(fF2091) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1474F2096);
    x_1474F2097 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1474F2097,x_1475F2088);
    BOXVAL(argsF2092) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1474F2097);
    x_1474F2098 = T24;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1474F2098,x_1475F2088);
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T26 = CALL1(1,VARREF(Ytail),x_1474F2094);
    x_1474F2099 = T26;
    BOXVAL(bodyF2093) = x_1474F2099;
    x_1474F2100 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1474F2100,x_1475F2088);
    T27 = T28;
    T14 = T27;
    T12 = T14;
  } else {
    T29 = CALL2(1,x_1475F2088,LITREF(lit_59),x_1474F2089);
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
  T50 = BOXVAL(fF2091);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T52 = BOXVAL(argsF2092);
  T51 = CALL1(1,VARREF(Ylst),T52);
  T47 = CALL4(1,VARREF(YgooSmacrosYcat),T48,T49,T51,Ynil);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T55 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_72));
  T59 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T62 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T64 = BOXVAL(fF2091);
  T63 = CALL1(1,VARREF(Ylst),T64);
  T61 = CALL3(1,VARREF(YgooSmacrosYcat),T62,T63,Ynil);
  T60 = CALL1(1,VARREF(Ylst),T61);
  T67 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T68 = CALL1(1,VARREF(Ylst),LITREF(lit_76));
  T71 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T73 = BOXVAL(fF2091);
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
  T79 = BOXVAL(numF2090);
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
  T101 = BOXVAL(bodyF2093);
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
  P numF2103;
  P UnameF2102;
  P argsF2101;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2101 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_77);
  }
  UnameF2102 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF2103 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2102,LITREF(lit_81));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T14 = CALL5(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_87),numF2103,f_,argsF2101);
  } else {
  }
  T15 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2102,LITREF(lit_82));
  if (T15 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF2103;
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
  P UnumF2106;
  P Utop_numF2105;
  P Useen_topF2104;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF2104 = YPfalse;
  Useen_topF2104 = BOXFAB(Useen_topF2104);
  Utop_numF2105 = YPint((P)0);
  Utop_numF2105 = BOXFAB(Utop_numF2105);
  UnumF2106 = YPint((P)0);
  UnumF2106 = BOXFAB(UnumF2106);
  T7 = FUNFAB(fun_33,4,UnumF2106,Utop_numF2105,Useen_topF2104,break_);
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
  P numF2109;
  P UnameF2108;
  P argsF2107;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2107 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_77);
  }
  UnameF2108 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF2109 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2108,LITREF(lit_81));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T15 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(4),numF2109);
    if (T15 != YPfalse) {
      T16 = CALL5(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_90),numF2109,f_,argsF2107);
      T14 = T16;
    } else {
      T14 = YPfalse;
    }
  } else {
  }
  T17 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2108,LITREF(lit_82));
  if (T17 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF2109;
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
  P UnumF2112;
  P Utop_numF2111;
  P Useen_topF2110;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF2110 = YPfalse;
  Useen_topF2110 = BOXFAB(Useen_topF2110);
  Utop_numF2111 = YPint((P)0);
  Utop_numF2111 = BOXFAB(Utop_numF2111);
  UnumF2112 = YPint((P)0);
  UnumF2112 = BOXFAB(UnumF2112);
  T7 = FUNFAB(fun_36,5,UnumF2112,Utop_numF2111,Useen_topF2110,break_,FREEREF(0));
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
  P numF2115;
  P UnameF2114;
  P argsF2113;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2113 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_77);
  }
  UnameF2114 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF2115 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2114,LITREF(lit_81));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T15 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(4),numF2115);
    if (T15 != YPfalse) {
      T19 = CALL1(1,VARREF(Yfun_names),f_);
      T18 = CALL2(1,VARREF(YgooScolsSseqYpos),T19,FREEREF(5));
      T17 = CALL2(1,VARREF(YgooSmacrosYelt),argsF2113,T18);
      T16 = CALL1(1,FREEREF(6),T17);
      T14 = T16;
    } else {
      T14 = YPfalse;
    }
  } else {
  }
  T20 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2114,LITREF(lit_82));
  if (T20 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF2115;
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
  P UnumF2118;
  P Utop_numF2117;
  P Useen_topF2116;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF2116 = YPfalse;
  Useen_topF2116 = BOXFAB(Useen_topF2116);
  Utop_numF2117 = YPint((P)0);
  Utop_numF2117 = BOXFAB(Utop_numF2117);
  UnumF2118 = YPint((P)0);
  UnumF2118 = BOXFAB(UnumF2118);
  T7 = FUNFAB(fun_39,7,UnumF2118,Utop_numF2117,Useen_topF2116,break_,FREEREF(0),FREEREF(1),FREEREF(2));
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
  P numF2121;
  P UnameF2120;
  P argsF2119;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2119 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_77);
  }
  UnameF2120 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF2121 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2120,LITREF(lit_81));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T14 = CALL4(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_94),numF2121,f_);
  } else {
  }
  T15 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2120,LITREF(lit_82));
  if (T15 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF2121;
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
  P UnumF2124;
  P Utop_numF2123;
  P Useen_topF2122;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF2122 = YPfalse;
  Useen_topF2122 = BOXFAB(Useen_topF2122);
  Utop_numF2123 = YPint((P)0);
  Utop_numF2123 = BOXFAB(Utop_numF2123);
  UnumF2124 = YPint((P)0);
  UnumF2124 = BOXFAB(UnumF2124);
  T7 = FUNFAB(fun_43,4,UnumF2124,Utop_numF2123,Useen_topF2122,break_);
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
  P tmpF2125;
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
  tmpF2125 = T4;
  if (tmpF2125 != YPfalse) {
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

FUNCODEDEF(fun_x_1517_52) {
  P msg_,args_;
  P resF2126;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL2(1,VARREF(YevalStopYauto_eval),FREEREF(0),T3);
  resF2126 = T2;
  T5 = BOXVAL(FREEREF(1));
  T4 = CALL4(1,VARREF(YevalStopYprint_result_expression),T5,FREEREF(2),LITREF(lit_128),resF2126);
  T1 = T4;
  T0 = CALL1(1,FREEREF(3),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_53) {
  P return_;
  P x_1516F2133;
  P x_1516F2132;
  P x_1516F2131;
  P nameF2130;
  P nF2129;
  P x_1516F2128;
  P x_1517F2127;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1517_52,4);
  x_1517F2127 = T1;
  FUNINIT(x_1517F2127, 4,FREEREF(0),FREEREF(1),FREEREF(2),return_);
  x_1516F2128 = FREEREF(3);
  nF2129 = YPfalse;
  nF2129 = BOXFAB(nF2129);
  nameF2130 = YPfalse;
  nameF2130 = BOXFAB(nameF2130);
  T7 = CALL2(1,VARREF(YisaQ),x_1516F2128,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1516F2128,LITREF(lit_129),x_1517F2127);
    x_1516F2131 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1516F2131,x_1517F2127);
    BOXVAL(nF2129) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1516F2131);
    x_1516F2132 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1516F2132,x_1517F2127);
    BOXVAL(nameF2130) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1516F2132);
    x_1516F2133 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1516F2133,x_1517F2127);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1517F2127,LITREF(lit_59),x_1516F2128);
  }
  T19 = BOXVAL(FREEREF(1));
  T21 = BOXVAL(nF2129);
  T22 = BOXVAL(nameF2130);
  T20 = CALL2(1,VARREF(YevalStopYframe_var),T21,T22);
  T18 = CALL4(1,VARREF(YevalStopYprint_result_expression),T19,FREEREF(2),LITREF(lit_130),T20);
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1514_54) {
  P msg_,args_;
  P x_1515F2134;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1515F2134 = FREEREF(0);
  T3 = FUNFAB(fun_53,4,FREEREF(1),FREEREF(2),FREEREF(3),x_1515F2134);
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  P return_;
  P x_1513F2139;
  P x_1513F2138;
  P nF2137;
  P x_1513F2136;
  P x_1514F2135;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1514_54,5);
  x_1514F2135 = T1;
  FUNINIT(x_1514F2135, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1513F2136 = FREEREF(0);
  nF2137 = YPfalse;
  nF2137 = BOXFAB(nF2137);
  T5 = CALL2(1,VARREF(YisaQ),x_1513F2136,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1513F2136,LITREF(lit_131),x_1514F2135);
    x_1513F2138 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1513F2138,x_1514F2135);
    BOXVAL(nF2137) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1513F2138);
    x_1513F2139 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1513F2139,x_1514F2135);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1514F2135,LITREF(lit_59),x_1513F2136);
  }
  T14 = BOXVAL(nF2137);
  T13 = CALL1(1,VARREF(YevalStopYframe),T14);
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1511_56) {
  P msg_,args_;
  P x_1512F2140;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1512F2140 = FREEREF(0);
  T3 = FUNFAB(fun_55,4,x_1512F2140,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_57) {
  P return_;
  P x_1510F2143;
  P x_1510F2142;
  P x_1511F2141;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1511_56,5);
  x_1511F2141 = T1;
  FUNINIT(x_1511F2141, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1510F2142 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1510F2142,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1510F2142,LITREF(lit_132),x_1511F2141);
    x_1510F2143 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1510F2143,x_1511F2141);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1511F2141,LITREF(lit_59),x_1510F2142);
  }
  T8 = CALL0(1,VARREF(YevalStopYbacktrace));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1508_58) {
  P msg_,args_;
  P x_1509F2144;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1509F2144 = FREEREF(0);
  T3 = FUNFAB(fun_57,4,x_1509F2144,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_59) {
  P return_;
  P x_1507F2147;
  P x_1507F2146;
  P x_1508F2145;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1508_58,5);
  x_1508F2145 = T1;
  FUNINIT(x_1508F2145, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1507F2146 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1507F2146,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1507F2146,LITREF(lit_133),x_1508F2145);
    x_1507F2147 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1507F2147,x_1508F2145);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1508F2145,LITREF(lit_59),x_1507F2146);
  }
  T8 = CALL0(1,VARREF(YevalStopYbt));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1505_60) {
  P msg_,args_;
  P x_1506F2148;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1506F2148 = FREEREF(0);
  T3 = FUNFAB(fun_59,4,x_1506F2148,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_61) {
  P return_;
  P x_1504F2151;
  P x_1504F2150;
  P x_1505F2149;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1505_60,5);
  x_1505F2149 = T1;
  FUNINIT(x_1505F2149, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1504F2150 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1504F2150,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1504F2150,LITREF(lit_134),x_1505F2149);
    x_1504F2151 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1504F2151,x_1505F2149);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1505F2149,LITREF(lit_59),x_1504F2150);
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

FUNCODEDEF(fun_x_1502_62) {
  P msg_,args_;
  P x_1503F2152;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1503F2152 = FREEREF(0);
  T3 = FUNFAB(fun_61,4,x_1503F2152,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_63) {
  P return_;
  P x_1501F2155;
  P x_1501F2154;
  P x_1502F2153;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1502_62,5);
  x_1502F2153 = T1;
  FUNINIT(x_1502F2153, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1501F2154 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1501F2154,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1501F2154,LITREF(lit_135),x_1502F2153);
    x_1501F2155 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1501F2155,x_1502F2153);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1502F2153,LITREF(lit_59),x_1501F2154);
  }
  T8 = DYNSET(YevalStopYrun,VARREF(YevalStopYPPbottomPPast_run));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1499_64) {
  P msg_,args_;
  P x_1500F2156;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1500F2156 = FREEREF(0);
  T3 = FUNFAB(fun_63,4,x_1500F2156,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_65) {
  P return_;
  P x_1498F2159;
  P x_1498F2158;
  P x_1499F2157;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1499_64,5);
  x_1499F2157 = T1;
  FUNINIT(x_1499F2157, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1498F2158 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1498F2158,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1498F2158,LITREF(lit_136),x_1499F2157);
    x_1498F2159 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1498F2159,x_1499F2157);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1499F2157,LITREF(lit_59),x_1498F2158);
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

FUNCODEDEF(fun_x_1496_66) {
  P msg_,args_;
  P x_1497F2160;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1497F2160 = FREEREF(0);
  T3 = FUNFAB(fun_65,4,x_1497F2160,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_67) {
  P return_;
  P new_envF2166;
  P x_1495F2165;
  P x_1495F2164;
  P mF2163;
  P x_1495F2162;
  P x_1496F2161;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1496_66,5);
  x_1496F2161 = T1;
  FUNINIT(x_1496F2161, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1495F2162 = FREEREF(0);
  mF2163 = YPfalse;
  mF2163 = BOXFAB(mF2163);
  T5 = CALL2(1,VARREF(YisaQ),x_1495F2162,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1495F2162,LITREF(lit_137),x_1496F2161);
    x_1495F2164 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1495F2164,x_1496F2161);
    BOXVAL(mF2163) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1495F2164);
    x_1495F2165 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1495F2165,x_1496F2161);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1496F2161,LITREF(lit_59),x_1495F2162);
  }
  T15 = BOXVAL(mF2163);
  T14 = CALL1(1,VARREF(YevalSastYruntime_environment),T15);
  new_envF2166 = T14;
  T16 = BOXVAL(FREEREF(2)) = new_envF2166;
  T13 = T16;
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1493_68) {
  P msg_,args_;
  P x_1494F2167;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1494F2167 = FREEREF(0);
  T3 = FUNFAB(fun_67,4,x_1494F2167,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  P return_;
  P x_1492F2172;
  P x_1492F2171;
  P nF2170;
  P x_1492F2169;
  P x_1493F2168;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1493_68,5);
  x_1493F2168 = T1;
  FUNINIT(x_1493F2168, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1492F2169 = FREEREF(0);
  nF2170 = YPfalse;
  nF2170 = BOXFAB(nF2170);
  T5 = CALL2(1,VARREF(YisaQ),x_1492F2169,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1492F2169,LITREF(lit_138),x_1493F2168);
    x_1492F2171 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1492F2171,x_1493F2168);
    BOXVAL(nF2170) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1492F2171);
    x_1492F2172 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1492F2172,x_1493F2168);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1493F2168,LITREF(lit_59),x_1492F2169);
  }
  T14 = BOXVAL(FREEREF(4));
  T15 = BOXVAL(nF2170);
  T13 = CALL2(1,VARREF(YevalStopYdo_restart),T14,T15);
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1490_70) {
  P msg_,args_;
  P x_1491F2173;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1491F2173 = FREEREF(0);
  T3 = FUNFAB(fun_69,5,x_1491F2173,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_71) {
  P return_;
  P x_1489F2176;
  P x_1489F2175;
  P x_1490F2174;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1490_70,6);
  x_1490F2174 = T1;
  FUNINIT(x_1490F2174, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1489F2175 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1489F2175,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1489F2175,LITREF(lit_139),x_1490F2174);
    x_1489F2176 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1489F2176,x_1490F2174);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1490F2174,LITREF(lit_59),x_1489F2175);
  }
  T8 = CALL2(1,VARREF(YgooSruntimeYlist_handlers),VARREF(YgooSruntimeYLrestartG),VARREF(YgooSioSportYout));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1487_72) {
  P msg_,args_;
  P x_1488F2177;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1488F2177 = FREEREF(0);
  T3 = FUNFAB(fun_71,5,x_1488F2177,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_73) {
  P return_;
  P x_1486F2180;
  P x_1486F2179;
  P x_1487F2178;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1487_72,6);
  x_1487F2178 = T1;
  FUNINIT(x_1487F2178, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1486F2179 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1486F2179,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1486F2179,LITREF(lit_140),x_1487F2178);
    x_1486F2180 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1486F2180,x_1487F2178);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1487F2178,LITREF(lit_59),x_1486F2179);
  }
  T8 = CALL2(1,VARREF(YgooSruntimeYlist_handlers),VARREF(YgooSruntimeYLconditionG),VARREF(YgooSioSportYout));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1484_74) {
  P msg_,args_;
  P x_1485F2181;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1485F2181 = FREEREF(0);
  T3 = FUNFAB(fun_73,5,x_1485F2181,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_75) {
  P return_;
  P x_1483F2184;
  P x_1483F2183;
  P x_1484F2182;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1484_74,6);
  x_1484F2182 = T1;
  FUNINIT(x_1484F2182, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1483F2183 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1483F2183,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1483F2183,LITREF(lit_141),x_1484F2182);
    x_1483F2184 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1483F2184,x_1484F2182);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1484F2182,LITREF(lit_59),x_1483F2183);
  }
  T8 = CALL1(1,FREEREF(5),YPfalse);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1481_76) {
  P msg_,args_;
  P x_1482F2185;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1482F2185 = FREEREF(0);
  T3 = FUNFAB(fun_75,6,x_1482F2185,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(6),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_77) {
  P return_;
  P x_1480F2188;
  P x_1480F2187;
  P x_1481F2186;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1481_76,7);
  x_1481F2186 = T1;
  FUNINIT(x_1481F2186, 7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),return_);
  x_1480F2187 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1480F2187,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1480F2187,LITREF(lit_142),x_1481F2186);
    x_1480F2188 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1480F2188,x_1481F2186);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1481F2186,LITREF(lit_59),x_1480F2187);
  }
  T8 = CALL1(1,FREEREF(6),YPfalse);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1478_78) {
  P msg_,args_;
  P x_1479F2189;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1479F2189 = FREEREF(0);
  T3 = FUNFAB(fun_77,7,x_1479F2189,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(7),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_79) {
  P return_;
  P x_1477F2192;
  P x_1477F2191;
  P x_1478F2190;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1478_78,8);
  x_1478F2190 = T1;
  FUNINIT(x_1478F2190, 8,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6),return_);
  x_1477F2191 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1477F2191,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1477F2191,LITREF(lit_143),x_1478F2190);
    x_1477F2192 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1477F2192,x_1478F2190);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1478F2190,LITREF(lit_59),x_1477F2191);
  }
  T8 = CALL1(1,FREEREF(7),YPfalse);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_80) {
  P x_1476F2194;
  P formF2193;
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
  formF2193 = T4;
  T8 = CALL0(1,VARREF(YgooSmathYeof_object));
  T7 = CALL2(1,VARREF(YgooSmathYE),formF2193,T8);
  if (T7 != YPfalse) {
    T9 = CALL1(1,FREEREF(4),YPfalse);
    T6 = T9;
  } else {
    x_1476F2194 = formF2193;
    T12 = FUNFAB(fun_79,8,x_1476F2194,formF2193,FREEREF(2),FREEREF(3),FREEREF(1),FREEREF(5),FREEREF(6),FREEREF(4));
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
  P loopF2195;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_83,8);
  loopF2195 = T1;
  FUNINIT(loopF2195, 8,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),blow_,loopF2195);
  T2 = CALL0(0,loopF2195);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_PPtopPPtop_in_85) {
  P level_,top_,quit_,show_restartsQ_,ct_env_;
  P restartsF2196;
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
  restartsF2196 = YPfalse;
  restartsF2196 = BOXFAB(restartsF2196);
  T5 = FUNFAB(fun_84,6,level_,top_,quit_,ct_env_,show_restartsQ_,restartsF2196);
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
  P loopF2197;
  P T0,T1,T2;
LINK_STACK();
loop:
  T1 = FUNSHELL(1,fun_loop_89,3);
  loopF2197 = T1;
  FUNINIT(loopF2197, 3,FREEREF(0),FREEREF(1),loopF2197);
  T2 = CALL0(0,loopF2197);
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
  lit_55 = YPPsym((P)"x-1471");
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
  fun_x_1471_27 = YPmet(FUNCODEREF(fun_x_1471_27),LITREF(lit_55),T100,ENVNUL,PNUL,YPfalse);
  T99 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T99,ENVNUL,PNUL,YPfalse);
  T98 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T98,ENVNUL,PNUL,YPfalse);
  T101 = fun_29;
  YPmacro(YPPsym((P)"eval/top"),YPPsym((P)"for-frames"),T101);
  lit_65 = YPPsym((P)"x-1475");
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
  fun_x_1475_30 = YPmet(FUNCODEREF(fun_x_1475_30),LITREF(lit_65),T104,ENVNUL,PNUL,YPfalse);
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
  lit_114 = YPPsym((P)"x-1478");
  lit_115 = YPPsym((P)"x-1481");
  lit_116 = YPPsym((P)"x-1484");
  lit_117 = YPPsym((P)"x-1487");
  lit_118 = YPPsym((P)"x-1490");
  lit_119 = YPPsym((P)"x-1493");
  lit_120 = YPPsym((P)"x-1496");
  lit_121 = YPPsym((P)"x-1499");
  lit_122 = YPPsym((P)"x-1502");
  lit_123 = YPPsym((P)"x-1505");
  lit_124 = YPPsym((P)"x-1508");
  lit_125 = YPPsym((P)"x-1511");
  lit_126 = YPPsym((P)"x-1514");
  lit_127 = YPPsym((P)"x-1517");
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
  fun_x_1517_52 = YPmet(FUNCODEREF(fun_x_1517_52),LITREF(lit_127),T174,ENVNUL,PNUL,YPfalse);
  T173 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1514_54 = YPmet(FUNCODEREF(fun_x_1514_54),LITREF(lit_126),T172,ENVNUL,PNUL,YPfalse);
  T171 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T171,ENVNUL,PNUL,YPfalse);
  T170 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1511_56 = YPmet(FUNCODEREF(fun_x_1511_56),LITREF(lit_125),T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_57 = YPmet(FUNCODEREF(fun_57),YPfalse,T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1508_58 = YPmet(FUNCODEREF(fun_x_1508_58),LITREF(lit_124),T168,ENVNUL,PNUL,YPfalse);
  T167 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T167,ENVNUL,PNUL,YPfalse);
  T166 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1505_60 = YPmet(FUNCODEREF(fun_x_1505_60),LITREF(lit_123),T166,ENVNUL,PNUL,YPfalse);
  T165 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1502_62 = YPmet(FUNCODEREF(fun_x_1502_62),LITREF(lit_122),T164,ENVNUL,PNUL,YPfalse);
  T163 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPmet(FUNCODEREF(fun_63),YPfalse,T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1499_64 = YPmet(FUNCODEREF(fun_x_1499_64),LITREF(lit_121),T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1496_66 = YPmet(FUNCODEREF(fun_x_1496_66),LITREF(lit_120),T160,ENVNUL,PNUL,YPfalse);
  T159 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_67 = YPmet(FUNCODEREF(fun_67),YPfalse,T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1493_68 = YPmet(FUNCODEREF(fun_x_1493_68),LITREF(lit_119),T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1490_70 = YPmet(FUNCODEREF(fun_x_1490_70),LITREF(lit_118),T156,ENVNUL,PNUL,YPfalse);
  T155 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T155,ENVNUL,PNUL,YPfalse);
  T154 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1487_72 = YPmet(FUNCODEREF(fun_x_1487_72),LITREF(lit_117),T154,ENVNUL,PNUL,YPfalse);
  T153 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T153,ENVNUL,PNUL,YPfalse);
  T152 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1484_74 = YPmet(FUNCODEREF(fun_x_1484_74),LITREF(lit_116),T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1481_76 = YPmet(FUNCODEREF(fun_x_1481_76),LITREF(lit_115),T150,ENVNUL,PNUL,YPfalse);
  T149 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_77 = YPmet(FUNCODEREF(fun_77),YPfalse,T149,ENVNUL,PNUL,YPfalse);
  T148 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1478_78 = YPmet(FUNCODEREF(fun_x_1478_78),LITREF(lit_114),T148,ENVNUL,PNUL,YPfalse);
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
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSmap;

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
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"locals-body-setter", &module_info_evalSast, "locals-body-setter"},
  {"gooc-filename", &module_info_gooSsystem, "gooc-filename"},
  {"$e", &module_info_gooSmath, "$e"},
  {"binding-value-setter", &module_info_evalSast, "binding-value-setter"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"sexpr-forward-primitive?", &module_info_evalSsyntax, "sexpr-forward-primitive?"},
  {"function-debug-name-setter", &module_info_evalSast, "function-debug-name-setter"},
  {"reference-frame-offset", &module_info_evalSast, "reference-frame-offset"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"set-standard-read-macro!", &module_info_gooSioSread, "set-standard-read-macro!"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"pe-msg", &module_info_gooSioSwrite, "pe-msg"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"until", &module_info_gooSmacros, "until"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"signature-bindings-setter", &module_info_evalSast, "signature-bindings-setter"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"<definition>", &module_info_evalSast, "<definition>"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%str", &module_info_gooSboot, "%str"},
  {"msg*", &module_info_gooSioSwrite, "msg*"},
  {"sexpr-if-then", &module_info_evalSsyntax, "sexpr-if-then"},
  {"$sexpr-define-tag", &module_info_evalSsyntax, "$sexpr-define-tag"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"binding-dotted?-setter", &module_info_evalSast, "binding-dotted?-setter"},
  {"<ast-method>", &module_info_evalSast, "<ast-method>"},
  {"error", &module_info_gooSboot, "error"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"compile-time-program", &module_info_evalSast, "compile-time-program"},
  {"sexpr-assignment-variable", &module_info_evalSsyntax, "sexpr-assignment-variable"},
  {"out", &module_info_gooSioSport, "out"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"sexpr-unquote?", &module_info_evalSsyntax, "sexpr-unquote?"},
  {"<locals>", &module_info_evalSast, "<locals>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"*module-search-path*", &module_info_gooSsystem, "*module-search-path*"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"sexpr-operator", &module_info_evalSsyntax, "sexpr-operator"},
  {"function-temporaries", &module_info_evalSast, "function-temporaries"},
  {"objectify-signature", &module_info_evalSast, "objectify-signature"},
  {"sexpr-make-macro-function", &module_info_evalSsyntax, "sexpr-make-macro-function"},
  {"assignment-binding", &module_info_evalSast, "assignment-binding"},
  {"tup", &module_info_gooSboot, "tup"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"signature-nary?-setter", &module_info_evalSast, "signature-nary?-setter"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"*goo-build-root*", &module_info_gooSsystem, "*goo-build-root*"},
  {"<box-read>", &module_info_evalSast_linearize, "<box-read>"},
  {"unconstrained-type?", &module_info_evalSast_linearize, "unconstrained-type?"},
  {"round/", &module_info_gooSmath, "round/"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, "binding-dynamic-extent?-setter"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"*goo-personal-root*", &module_info_gooSsystem, "*goo-personal-root*"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"box-reference", &module_info_evalSast_linearize, "box-reference"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"ast-contains-fun?", &module_info_evalSast_linearize, "ast-contains-fun?"},
  {"application-known?-setter", &module_info_evalSast, "application-known?-setter"},
  {"program-register-setter", &module_info_evalSast, "program-register-setter"},
  {"<local-binding>", &module_info_evalSast, "<local-binding>"},
  {"<dynamic-reference>", &module_info_evalSast, "<dynamic-reference>"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"min", &module_info_gooSmag, "min"},
  {"dm", &module_info_gooSboot, "dm"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"quote", &module_info_gooSboot, "quote"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"binding-inferred-type", &module_info_evalSast, "binding-inferred-type"},
  {"signature-names-setter", &module_info_evalSast, "signature-names-setter"},
  {"<program>", &module_info_evalSast, "<program>"},
  {"$sexpr-syntax-if-tag", &module_info_evalSsyntax, "$sexpr-syntax-if-tag"},
  {"function-self-recursive?-setter", &module_info_evalSast, "function-self-recursive?-setter"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"when", &module_info_gooSmacros, "when"},
  {"sexpr-def?", &module_info_evalSsyntax, "sexpr-def?"},
  {"sexpr-prop-init-var", &module_info_evalSsyntax, "sexpr-prop-init-var"},
  {"<ast-generic>", &module_info_evalSast, "<ast-generic>"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"zipped", &module_info_gooSruntime, "zipped"},
  {"gather-temporaries!", &module_info_evalSast_linearize, "gather-temporaries!"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"$sexpr-if-tag", &module_info_evalSsyntax, "$sexpr-if-tag"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"binding-global-box-setter", &module_info_evalSast, "binding-global-box-setter"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"tail", &module_info_gooSboot, "tail"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"sexpr-isa-parent", &module_info_evalSsyntax, "sexpr-isa-parent"},
  {"signature-specs-setter", &module_info_evalSast, "signature-specs-setter"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"<reference>", &module_info_evalSast, "<reference>"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"sexpr-monitor-expand", &module_info_evalSsyntax, "sexpr-monitor-expand"},
  {"find-goo-file-at", &module_info_gooSsystem, "find-goo-file-at"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"dv", &module_info_gooSboot, "dv"},
  {"sexpr-make-anonymous-method", &module_info_evalSsyntax, "sexpr-make-anonymous-method"},
  {"<predefined-application>", &module_info_evalSast, "<predefined-application>"},
  {"binding-native-to?", &module_info_evalSast, "binding-native-to?"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"set", &module_info_gooSboot, "set"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"function-signature", &module_info_evalSast, "function-signature"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"col", &module_info_gooScolsScol, "col"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"sexpr-fab-getter", &module_info_evalSsyntax, "sexpr-fab-getter"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"binding-index", &module_info_evalSast, "binding-index"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"global-box-value-setter", &module_info_evalSast, "global-box-value-setter"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"reference-binding", &module_info_evalSast, "reference-binding"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"mif", &module_info_gooSboot, "mif"},
  {"as", &module_info_gooStypes, "as"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"signature-arity", &module_info_evalSast, "signature-arity"},
  {"close", &module_info_gooSioSport, "close"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"sexpr-define-class?", &module_info_evalSsyntax, "sexpr-define-class?"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"ast-define-binding", &module_info_evalSast, "ast-define-binding"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"t*", &module_info_gooSboot, "t*"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"find-goo-file-in-path", &module_info_gooSsystem, "find-goo-file-in-path"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"form-quotations", &module_info_evalSast_linearize, "form-quotations"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"add-goo-personal-root-path", &module_info_gooSsystem, "add-goo-personal-root-path"},
  {">=", &module_info_gooSmag, ">="},
  {"binding-locative", &module_info_evalSast, "binding-locative"},
  {"sexpr-syntax-if-then", &module_info_evalSsyntax, "sexpr-syntax-if-then"},
  {"assignment-form-setter", &module_info_evalSast, "assignment-form-setter"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"sexpr-define-class-parents", &module_info_evalSsyntax, "sexpr-define-class-parents"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"ct", &module_info_gooSboot, "ct"},
  {"update-walk!", &module_info_evalSast_linearize, "update-walk!"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"<box-creation>", &module_info_evalSast_linearize, "<box-creation>"},
  {"flatten-seqs", &module_info_evalSast_linearize, "flatten-seqs"},
  {"def", &module_info_gooSboot, "def"},
  {"len", &module_info_gooStypes, "len"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"<bind-exit>", &module_info_evalSast, "<bind-exit>"},
  {"<static-module-binding-reference>", &module_info_evalSast, "<static-module-binding-reference>"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"if", &module_info_gooSboot, "if"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"locals-functions", &module_info_evalSast, "locals-functions"},
  {"binding-name", &module_info_evalSast, "binding-name"},
  {"sexpr-function-definition-value", &module_info_evalSsyntax, "sexpr-function-definition-value"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"sexpr-definition-value", &module_info_evalSsyntax, "sexpr-definition-value"},
  {"<ast-signature>", &module_info_evalSast, "<ast-signature>"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%su", &module_info_gooSboot, "%su"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"logn", &module_info_gooSmath, "logn"},
  {"always", &module_info_gooSruntime, "always"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"<real-reference>", &module_info_evalSast, "<real-reference>"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"<local-reference>", &module_info_evalSast, "<local-reference>"},
  {"binding-type-setter", &module_info_evalSast, "binding-type-setter"},
  {"function-index-setter", &module_info_evalSast, "function-index-setter"},
  {"locals-body", &module_info_evalSast, "locals-body"},
  {"extract-things!", &module_info_evalSast_linearize, "extract-things!"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"program-form", &module_info_evalSast_linearize, "program-form"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"sexpr-loc-bound-names", &module_info_evalSsyntax, "sexpr-loc-bound-names"},
  {"binding-value", &module_info_evalSast, "binding-value"},
  {"form-program", &module_info_evalSast_linearize, "form-program"},
  {"sexpr-function-definition-variable", &module_info_evalSsyntax, "sexpr-function-definition-variable"},
  {"function-debug-name", &module_info_evalSast, "function-debug-name"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"do", &module_info_gooSmacros, "do"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"<bound?>", &module_info_evalSast, "<bound?>"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"sexpr-variable-type", &module_info_evalSsyntax, "sexpr-variable-type"},
  {"init-environment-for-eval", &module_info_evalSast, "init-environment-for-eval"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"module-mangled-string-name", &module_info_evalSast, "module-mangled-string-name"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"signature-bindings", &module_info_evalSast, "signature-bindings"},
  {"open", &module_info_gooSioSport, "open"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"box-form", &module_info_evalSast_linearize, "box-form"},
  {"binding-dotted?", &module_info_evalSast, "binding-dotted?"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"sexpr-variable-name", &module_info_evalSsyntax, "sexpr-variable-name"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"bind-exit-main-fun", &module_info_evalSast, "bind-exit-main-fun"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"program-quotations", &module_info_evalSast_linearize, "program-quotations"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"range", &module_info_gooScolsSrange, "range"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"lift!", &module_info_evalSast_linearize, "lift!"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"sexpr-make-method", &module_info_evalSsyntax, "sexpr-make-method"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"signature-nary?", &module_info_evalSast, "signature-nary?"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"$sexpr-prop-tag", &module_info_evalSsyntax, "$sexpr-prop-tag"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"match", &module_info_gooSmacros, "match"},
  {"register-allocate!", &module_info_evalSast_linearize, "register-allocate!"},
  {"closure-creation-free", &module_info_evalSast_linearize, "closure-creation-free"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"%im", &module_info_gooSboot, "%im"},
  {"bound?-reference", &module_info_evalSast, "bound?-reference"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"fab-g2c-module", &module_info_evalSast, "fab-g2c-module"},
  {"and", &module_info_gooSmacros, "and"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"binding-dynamic-extent?", &module_info_evalSast, "binding-dynamic-extent?"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"binding-mutable?", &module_info_evalSast, "binding-mutable?"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"application-known?", &module_info_evalSast, "application-known?"},
  {"op", &module_info_gooSmacros, "op"},
  {"module-mangled-name-setter", &module_info_evalSast, "module-mangled-name-setter"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"~", &module_info_gooSmath, "~"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"get-standard-read-macro", &module_info_gooSioSread, "get-standard-read-macro"},
  {"sexpr-bind-pattern-variables", &module_info_evalSsyntax, "sexpr-bind-pattern-variables"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"let", &module_info_gooSboot, "let"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"signature-names", &module_info_evalSast, "signature-names"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"sexpr-unwind-protect-protected-form", &module_info_evalSsyntax, "sexpr-unwind-protect-protected-form"},
  {"assignment-reference", &module_info_evalSast, "assignment-reference"},
  {"function-self-recursive?", &module_info_evalSast, "function-self-recursive?"},
  {"add", &module_info_gooScolsScol, "add"},
  {"function-registers-setter", &module_info_evalSast, "function-registers-setter"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"function-binding", &module_info_evalSast, "function-binding"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"sexpr-prop-owner", &module_info_evalSsyntax, "sexpr-prop-owner"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<alternative>", &module_info_evalSast, "<alternative>"},
  {"while", &module_info_gooSmacros, "while"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"load-in", &module_info_evalSast, "load-in"},
  {"remove-modules-by-name!", &module_info_evalSast, "remove-modules-by-name!"},
  {"<passive-program>", &module_info_evalSast, "<passive-program>"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"$sexpr-begin-tag", &module_info_evalSsyntax, "$sexpr-begin-tag"},
  {"free-environment", &module_info_evalSast, "free-environment"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"|", &module_info_gooSmath, "|"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"binding-mangled-name-setter", &module_info_evalSast, "binding-mangled-name-setter"},
  {"use", &module_info_gooSboot, "use"},
  {"signature-specs", &module_info_evalSast, "signature-specs"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"binding-module", &module_info_evalSast, "binding-module"},
  {"seq", &module_info_gooSboot, "seq"},
  {"add-goo-root-path", &module_info_gooSsystem, "add-goo-root-path"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"sexpr-method-body", &module_info_evalSsyntax, "sexpr-method-body"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"<unwind-protect>", &module_info_evalSast, "<unwind-protect>"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"def-list", &module_info_evalSast, "def-list"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"1-", &module_info_gooSmath, "1-"},
  {"/", &module_info_gooSmath, "/"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"sexpr-syntax-definition-value", &module_info_evalSsyntax, "sexpr-syntax-definition-value"},
  {"sexpr-prop-init", &module_info_evalSsyntax, "sexpr-prop-init"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"alternative-condition", &module_info_evalSast, "alternative-condition"},
  {"module-name", &module_info_evalSast, "module-name"},
  {"global-box-value", &module_info_evalSast, "global-box-value"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"~=", &module_info_gooSmath, "~="},
  {"<assignment>", &module_info_evalSast, "<assignment>"},
  {"find", &module_info_gooScolsScol, "find"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"environment-bindings", &module_info_evalSast, "environment-bindings"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"binding-locative-setter", &module_info_evalSast, "binding-locative-setter"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"sexpr-loc-raw-body", &module_info_evalSsyntax, "sexpr-loc-raw-body"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"<=", &module_info_gooSmag, "<="},
  {"%put", &module_info_gooSboot, "%put"},
  {"<renamed-local-binding>", &module_info_evalSast_linearize, "<renamed-local-binding>"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"$sexpr-monitor-tag", &module_info_evalSsyntax, "$sexpr-monitor-tag"},
  {"into", &module_info_gooScolsScol, "into"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"unwind-protect-protected-thunk", &module_info_evalSast, "unwind-protect-protected-thunk"},
  {"sexpr-isa-init-values", &module_info_evalSsyntax, "sexpr-isa-init-values"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"binding-inferred-type-setter", &module_info_evalSast, "binding-inferred-type-setter"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"application-function", &module_info_evalSast, "application-function"},
  {"$sexpr-define-syntax-tag", &module_info_evalSsyntax, "$sexpr-define-syntax-tag"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"read", &module_info_gooSruntime, "read"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"acos", &module_info_gooSmath, "acos"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"sexpr-syntax-if-pattern", &module_info_evalSsyntax, "sexpr-syntax-if-pattern"},
  {"$sexpr-define-function-tag", &module_info_evalSsyntax, "$sexpr-define-function-tag"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"for", &module_info_gooSmacros, "for"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"function-source-setter", &module_info_evalSast, "function-source-setter"},
  {"*register-passive?*", &module_info_evalSast_linearize, "*register-passive?*"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"do-named-static-global-bindings", &module_info_evalSast, "do-named-static-global-bindings"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"so-load", &module_info_gooSsystem, "so-load"},
  {"-", &module_info_gooSmath, "-"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"module-uses-c-files", &module_info_evalSast, "module-uses-c-files"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"or", &module_info_gooSmacros, "or"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"sexpr-function-body", &module_info_evalSsyntax, "sexpr-function-body"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"sexpr-make-begin", &module_info_evalSsyntax, "sexpr-make-begin"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"<module-binding-reference>", &module_info_evalSast, "<module-binding-reference>"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"head", &module_info_gooSboot, "head"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"dss", &module_info_gooSboot, "dss"},
  {"ast-evaluate", &module_info_evalSast, "ast-evaluate"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"+", &module_info_gooSmath, "+"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"function-free-setter", &module_info_evalSast, "function-free-setter"},
  {"alternative-consequent", &module_info_evalSast, "alternative-consequent"},
  {"export", &module_info_gooSboot, "export"},
  {"map", &module_info_gooSmacros, "map"},
  {"binding-type", &module_info_evalSast, "binding-type"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"function-index", &module_info_evalSast, "function-index"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"try", &module_info_gooSboot, "try"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"<sequential>", &module_info_evalSast, "<sequential>"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"assignment-form", &module_info_evalSast, "assignment-form"},
  {"binding-kind", &module_info_evalSast, "binding-kind"},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, "unwind-protect-cleanup-thunk"},
  {"app", &module_info_gooSmacros, "app"},
  {"1+", &module_info_gooSmath, "1+"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"items", &module_info_gooScolsScol, "items"},
  {"atan", &module_info_gooSmath, "atan"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"$sexpr-bind-exit-tag", &module_info_evalSsyntax, "$sexpr-bind-exit-tag"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"$sexpr-iterate-tag", &module_info_evalSsyntax, "$sexpr-iterate-tag"},
  {"%compile", &module_info_gooSsystem, "%compile"},
  {"sin", &module_info_gooSmath, "sin"},
  {"div", &module_info_gooSmath, "div"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"$sexpr-unwind-protect-tag", &module_info_evalSsyntax, "$sexpr-unwind-protect-tag"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"form-definitions", &module_info_evalSast_linearize, "form-definitions"},
  {"@<", &module_info_gooSboot, "@<"},
  {"alternative-alternant", &module_info_evalSast, "alternative-alternant"},
  {"function-value", &module_info_evalSast, "function-value"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"loc", &module_info_gooSboot, "loc"},
  {"<application>", &module_info_evalSast, "<application>"},
  {"dl", &module_info_gooSboot, "dl"},
  {"ds", &module_info_gooSboot, "ds"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"<closure-creation>", &module_info_evalSast_linearize, "<closure-creation>"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"<top-level-form>", &module_info_evalSast_linearize, "<top-level-form>"},
  {"<dynamic-assignment>", &module_info_evalSast, "<dynamic-assignment>"},
  {">>", &module_info_gooSmath, ">>"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"pow", &module_info_gooSmath, "pow"},
  {"sexpr-expand-backquote", &module_info_evalSsyntax, "sexpr-expand-backquote"},
  {"<local-assignment>", &module_info_evalSast, "<local-assignment>"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"$sexpr-set-tag", &module_info_evalSsyntax, "$sexpr-set-tag"},
  {"reference-offset", &module_info_evalSast_linearize, "reference-offset"},
  {"sexpr-if-test", &module_info_evalSsyntax, "sexpr-if-test"},
  {"<box-write>", &module_info_evalSast_linearize, "<box-write>"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"abs", &module_info_gooSmath, "abs"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"function-registers", &module_info_evalSast, "function-registers"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"<module-loader>", &module_info_evalSast, "<module-loader>"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"<constant>", &module_info_evalSast, "<constant>"},
  {"<monitor>", &module_info_evalSast, "<monitor>"},
  {"&", &module_info_gooSmath, "&"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"sexpr-prop-name", &module_info_evalSsyntax, "sexpr-prop-name"},
  {"t?", &module_info_gooStypes, "t?"},
  {"$sexpr-macro-expand-tag", &module_info_evalSsyntax, "$sexpr-macro-expand-tag"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"application-arguments", &module_info_evalSast, "application-arguments"},
  {"sexpr-text-of-quotation", &module_info_evalSsyntax, "sexpr-text-of-quotation"},
  {"<ast-primitive>", &module_info_evalSast, "<ast-primitive>"},
  {"in", &module_info_gooSioSport, "in"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"==", &module_info_gooSmacros, "=="},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"fix-let-bindings-setter", &module_info_evalSast, "fix-let-bindings-setter"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"function-body-setter", &module_info_evalSast, "function-body-setter"},
  {"round", &module_info_gooSmath, "round"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"binding-mangled-name", &module_info_evalSast, "binding-mangled-name"},
  {"<computed-program>", &module_info_evalSast, "<computed-program>"},
  {"<runtime-reference>", &module_info_evalSast, "<runtime-reference>"},
  {"binding-global-box", &module_info_evalSast, "binding-global-box"},
  {"constant-index-setter", &module_info_evalSast, "constant-index-setter"},
  {"objectify-quotation", &module_info_evalSast, "objectify-quotation"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"runtime-environment", &module_info_evalSast, "runtime-environment"},
  {"sequentialize", &module_info_evalSast, "sequentialize"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"find-binding", &module_info_evalSast, "find-binding"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"$sexpr-method-tag", &module_info_evalSsyntax, "$sexpr-method-tag"},
  {"<free-reference>", &module_info_evalSast_linearize, "<free-reference>"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"sexpr-definition-variable", &module_info_evalSsyntax, "sexpr-definition-variable"},
  {"monitor-type", &module_info_evalSast, "monitor-type"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"sexpr-prop-init?", &module_info_evalSsyntax, "sexpr-prop-init?"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"install-initial-bindings", &module_info_evalSast, "install-initial-bindings"},
  {"module-name-to-relpath", &module_info_evalSast, "module-name-to-relpath"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"environment-module", &module_info_evalSast, "environment-module"},
  {"fin", &module_info_gooSboot, "fin"},
  {"environment-uses-modules", &module_info_evalSast, "environment-uses-modules"},
  {"any?", &module_info_gooStypes, "any?"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"do-module-loader-modules", &module_info_evalSast, "do-module-loader-modules"},
  {"<", &module_info_gooSmag, "<"},
  {"case", &module_info_gooSmacros, "case"},
  {"probe-module", &module_info_evalSast, "probe-module"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"report-undefined-global-bindings", &module_info_evalSast, "report-undefined-global-bindings"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"sexpr-iterate->loc", &module_info_evalSsyntax, "sexpr-iterate->loc"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"monitor-main-thunk", &module_info_evalSast, "monitor-main-thunk"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"sexpr-loc-bound-bodies", &module_info_evalSsyntax, "sexpr-loc-bound-bodies"},
  {"<binding>", &module_info_evalSast, "<binding>"},
  {"=", &module_info_gooSmath, "="},
  {"%slen", &module_info_gooSboot, "%slen"},
  {">", &module_info_gooSmag, ">"},
  {"sexpr-fab-setter-name", &module_info_evalSsyntax, "sexpr-fab-setter-name"},
  {"set-module-environments", &module_info_evalSast, "set-module-environments"},
  {"sexpr-syntax-definition-variable", &module_info_evalSsyntax, "sexpr-syntax-definition-variable"},
  {"do-static-global-bindings", &module_info_evalSast, "do-static-global-bindings"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"<static-global-environment>", &module_info_evalSast, "<static-global-environment>"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"t<", &module_info_gooStypes, "t<"},
  {"sexpr-isa-init-props", &module_info_evalSsyntax, "sexpr-isa-init-props"},
  {"sexpr-assignment-value", &module_info_evalSsyntax, "sexpr-assignment-value"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"recurring-write", &module_info_gooSioSwrite, "recurring-write"},
  {"module-exports", &module_info_evalSast, "module-exports"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"<ast-primitive-definition>", &module_info_evalSast, "<ast-primitive-definition>"},
  {"application-tail?", &module_info_evalSast, "application-tail?"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"$sexpr-locals-tag", &module_info_evalSsyntax, "$sexpr-locals-tag"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"sexpr-syntax-if-value", &module_info_evalSsyntax, "sexpr-syntax-if-value"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"function-nary?", &module_info_evalSast, "function-nary?"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"locals-bindings", &module_info_evalSast, "locals-bindings"},
  {"fix-let-types-setter", &module_info_evalSast, "fix-let-types-setter"},
  {"@len", &module_info_gooSboot, "@len"},
  {"function-source", &module_info_evalSast, "function-source"},
  {"constant-value", &module_info_evalSast, "constant-value"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"load-module", &module_info_evalSast, "load-module"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"sexpr-def-value", &module_info_evalSsyntax, "sexpr-def-value"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"sexpr-sequence->begin", &module_info_evalSsyntax, "sexpr-sequence->begin"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"reference-called-function?-setter", &module_info_evalSast, "reference-called-function?-setter"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"%binding-value-setter", &module_info_evalSast_eval, "%binding-value-setter"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"monitor-info", &module_info_evalSast, "monitor-info"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"esc", &module_info_gooSboot, "esc"},
  {"@==", &module_info_gooSboot, "@=="},
  {"function-data-refs-setter", &module_info_evalSast, "function-data-refs-setter"},
  {"insert-box!", &module_info_evalSast_linearize, "insert-box!"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<regular-application>", &module_info_evalSast, "<regular-application>"},
  {"<macro-reference>", &module_info_evalSast, "<macro-reference>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"fix-let-body-setter", &module_info_evalSast, "fix-let-body-setter"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"$sexpr-quasiquote-tag", &module_info_evalSsyntax, "$sexpr-quasiquote-tag"},
  {"tan", &module_info_gooSmath, "tan"},
  {"program-type-setter", &module_info_evalSast, "program-type-setter"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"$sexpr-define-generic-tag", &module_info_evalSsyntax, "$sexpr-define-generic-tag"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"<module-binding>", &module_info_evalSast, "<module-binding>"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"<programs>", &module_info_evalSast, "<programs>"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"asin", &module_info_gooSmath, "asin"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"neg", &module_info_gooSmath, "neg"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"monitor-test", &module_info_evalSast, "monitor-test"},
  {"monitor-handler", &module_info_evalSast, "monitor-handler"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"<immediate-constant>", &module_info_evalSast, "<immediate-constant>"},
  {"signature-value-setter", &module_info_evalSast, "signature-value-setter"},
  {"eval", &module_info_evalSsyntax, "eval"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"not", &module_info_gooSboot, "not"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"<ast-function>", &module_info_evalSast, "<ast-function>"},
  {"module-syntax-environment", &module_info_evalSast, "module-syntax-environment"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"t=", &module_info_gooStypes, "t="},
  {"<module>", &module_info_evalSast, "<module>"},
  {"binding-module-name", &module_info_evalSast, "binding-module-name"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"binding-info-setter", &module_info_evalSast, "binding-info-setter"},
  {"fix-let-arguments-setter", &module_info_evalSast, "fix-let-arguments-setter"},
  {"$sexpr-define-method-tag", &module_info_evalSsyntax, "$sexpr-define-method-tag"},
  {"sexpr-block-body", &module_info_evalSsyntax, "sexpr-block-body"},
  {"module-loader-module-type", &module_info_evalSast, "module-loader-module-type"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"dp", &module_info_gooSboot, "dp"},
  {"nil", &module_info_gooSboot, "nil"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"sexpr-signature-value", &module_info_evalSsyntax, "sexpr-signature-value"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"<fix-let>", &module_info_evalSast, "<fix-let>"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"program-definitions", &module_info_evalSast_linearize, "program-definitions"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"env-object-name", &module_info_evalSast, "env-object-name"},
  {"%get", &module_info_gooSboot, "%get"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"get", &module_info_gooSioSport, "get"},
  {"init-ast", &module_info_evalSast, "init-ast"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"sexpr-if-else", &module_info_evalSsyntax, "sexpr-if-else"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"file-copy", &module_info_gooSsystem, "file-copy"},
  {"log", &module_info_gooSmath, "log"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"rem", &module_info_gooSmath, "rem"},
  {"analyze-ast", &module_info_evalSast_linearize, "analyze-ast"},
  {"read-delimited-list", &module_info_gooSioSread, "read-delimited-list"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"sexpr-operands", &module_info_evalSsyntax, "sexpr-operands"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"df", &module_info_gooSboot, "df"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"time", &module_info_gooSsystem, "time"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"<global-box>", &module_info_evalSast, "<global-box>"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"<dynamic-definition>", &module_info_evalSast, "<dynamic-definition>"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"port2str", &module_info_gooSioSport, "port2str"},
  {"closurize-main!", &module_info_evalSast_linearize, "closurize-main!"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"fix-let-bindings", &module_info_evalSast, "fix-let-bindings"},
  {"function-temporaries-setter", &module_info_evalSast, "function-temporaries-setter"},
  {"function-body", &module_info_evalSast, "function-body"},
  {"as-lst", &module_info_evalSast, "as-lst"},
  {"function-free", &module_info_evalSast, "function-free"},
  {"module-target-environment", &module_info_evalSast, "module-target-environment"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"t+", &module_info_gooStypes, "t+"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"sexpr-method-signature", &module_info_evalSsyntax, "sexpr-method-signature"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"constant-index", &module_info_evalSast, "constant-index"},
  {"~==", &module_info_gooSmath, "~=="},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"%time", &module_info_gooSboot, "%time"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"reference-self?", &module_info_evalSast_linearize, "reference-self?"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"find-environment-module", &module_info_evalSast, "find-environment-module"},
  {"function-data-refs", &module_info_evalSast, "function-data-refs"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"$sexpr-isa-tag", &module_info_evalSsyntax, "$sexpr-isa-tag"},
  {"unchecked-runtime-environment", &module_info_evalSast, "unchecked-runtime-environment"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"%load", &module_info_gooSsystem, "%load"},
  {"put", &module_info_gooSioSport, "put"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"dg", &module_info_gooSboot, "dg"},
  {"sexpr-prop-type", &module_info_evalSsyntax, "sexpr-prop-type"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"<fab-list>", &module_info_evalSast, "<fab-list>"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"def-programs", &module_info_evalSast, "def-programs"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"reference-frame-number", &module_info_evalSast, "reference-frame-number"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"sexpr-unquote-splicing?", &module_info_evalSsyntax, "sexpr-unquote-splicing?"},
  {"program-register", &module_info_evalSast, "program-register"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"even?", &module_info_gooSmath, "even?"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"$char-long-names", &module_info_gooSioSread, "$char-long-names"},
  {"sexpr-make-application", &module_info_evalSsyntax, "sexpr-make-application"},
  {"application-binding", &module_info_evalSast, "application-binding"},
  {"sexpr-isa-prop-inits", &module_info_evalSsyntax, "sexpr-isa-prop-inits"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"^", &module_info_gooSmath, "^"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"locals-bindings-setter", &module_info_evalSast, "locals-bindings-setter"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"dc", &module_info_gooSboot, "dc"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"$goo-boot-module-name", &module_info_evalSast, "$goo-boot-module-name"},
  {"%binding-bound?", &module_info_evalSast_eval, "%binding-bound?"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"sexpr-loc-bound-signatures", &module_info_evalSsyntax, "sexpr-loc-bound-signatures"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"function-signature-setter", &module_info_evalSast, "function-signature-setter"},
  {"fix-let-types", &module_info_evalSast, "fix-let-types"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"binding-index-setter", &module_info_evalSast, "binding-index-setter"},
  {"closure-creation-index", &module_info_evalSast_linearize, "closure-creation-index"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<arguments>", &module_info_evalSast, "<arguments>"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"<raw-constant>", &module_info_evalSast, "<raw-constant>"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"sexpr-fab-setter", &module_info_evalSsyntax, "sexpr-fab-setter"},
  {"<ast-macro-definition>", &module_info_evalSast, "<ast-macro-definition>"},
  {"sexpr-def-variable", &module_info_evalSsyntax, "sexpr-def-variable"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"signature-arity-setter", &module_info_evalSast, "signature-arity-setter"},
  {"floor", &module_info_gooSmath, "floor"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%binding-value", &module_info_evalSast_eval, "%binding-value"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"module-binding", &module_info_evalSast, "module-binding"},
  {"module-mangled-string-name-setter", &module_info_evalSast, "module-mangled-string-name-setter"},
  {"reference-called-function?", &module_info_evalSast, "reference-called-function?"},
  {"<free-environment>", &module_info_evalSast, "<free-environment>"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"<runtime-assignment>", &module_info_evalSast, "<runtime-assignment>"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"sexpr-variable?", &module_info_evalSsyntax, "sexpr-variable?"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"module-mangled-name", &module_info_evalSast, "module-mangled-name"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_evalSsyntax, "sexpr-unwind-protect-cleanup-forms"},
  {"del", &module_info_gooScolsScol, "del"},
  {"fix-let-body", &module_info_evalSast, "fix-let-body"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"$sexpr-let-tag", &module_info_evalSsyntax, "$sexpr-let-tag"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"new", &module_info_gooSboot, "new"},
  {"<compile-time>", &module_info_evalSast, "<compile-time>"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"<global-assignment>", &module_info_evalSast, "<global-assignment>"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"sexpr-syntax-if-else", &module_info_evalSsyntax, "sexpr-syntax-if-else"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"function-bindings", &module_info_evalSast, "function-bindings"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"sexpr-function-signature", &module_info_evalSsyntax, "sexpr-function-signature"},
  {"program-type", &module_info_evalSast, "program-type"},
  {"<magic-reference>", &module_info_evalSast, "<magic-reference>"},
  {"signature-value", &module_info_evalSast, "signature-value"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {"objectify-with-subtransaction", &module_info_evalSast, "objectify-with-subtransaction"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"@+", &module_info_gooSboot, "@+"},
  {"max", &module_info_gooSmag, "max"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"*", &module_info_gooSmath, "*"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"locals-functions-setter", &module_info_evalSast, "locals-functions-setter"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"binding-info", &module_info_evalSast, "binding-info"},
  {"fix-let-arguments", &module_info_evalSast, "fix-let-arguments"},
  {"sexpr-let->combination", &module_info_evalSsyntax, "sexpr-let->combination"},
  {"sexpr-block-name", &module_info_evalSsyntax, "sexpr-block-name"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"$sexpr-define-class-tag", &module_info_evalSsyntax, "$sexpr-define-class-tag"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"nul", &module_info_gooSboot, "nul"},
  {"$sexpr-def-tag", &module_info_evalSsyntax, "$sexpr-def-tag"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"$sexpr-quote-tag", &module_info_evalSsyntax, "$sexpr-quote-tag"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"<global-reference>", &module_info_evalSast, "<global-reference>"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"now", &module_info_gooScolsScol, "now"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"backtrace", CVAR, &YevalStopYbacktrace},
  {"str-eval", CVAR, &YevalStopYstr_eval},
  {"prompt-for-command-expression", CVAR, &YevalStopYprompt_for_command_expression},
  {"parse-in", CVAR, &YevalStopYparse_in},
  {"str-parse-in", CVAR, &YevalStopYstr_parse_in},
  {"str-eval-in", CVAR, &YevalStopYstr_eval_in},
  {"bt", CVAR, &YevalStopYbt},
  {"esctst", CVAR, &YevalStopYesctst},
  {"eval-in", CVAR, &YevalStopYeval_in},
  {"run", DVAR, &YevalStopYrun},
  {"%%bottom%%g2c-run", CVAR, &YevalStopYPPbottomPPg2c_run},
  {"%%bottom%%ast-run", CVAR, &YevalStopYPPbottomPPast_run},
  {"save-image", CVAR, &YevalStopYsave_image},
  {"frame", CVAR, &YevalStopYframe},
  {"auto-eval", CVAR, &YevalStopYauto_eval},
  {"str-parse", CVAR, &YevalStopYstr_parse},
  {"g2c-eval", CVAR, &YevalStopYg2c_eval},
  {"---main-0---", PVAR, NULL},
  {"print-result-expression", CVAR, &YevalStopYprint_result_expression},
  {"for-frames", PVAR, NULL},
  {"%%top%%top-in", CVAR, &YevalStopYPPtopPPtop_in},
  {"parse", CVAR, &YevalStopYparse},
  {"$g2c-eval?", CVAR, &YevalStopYDg2c_evalQ},
  {"load", CVAR, &YevalStopYload},
  {"auto-run", CVAR, &YevalStopYauto_run},
  {"read-file", CVAR, &YevalStopYread_file},
  {"top", CVAR, &YevalStopYtop},
  {"<keyboard-interrupt>", CVAR, &YevalStopYLkeyboard_interruptG},
  {"frame-var", CVAR, &YevalStopYframe_var},
  {"for-user-frames", PVAR, NULL},
  {"compiled-file?", CVAR, &YevalStopYcompiled_fileQ},
  {"do-restart", CVAR, &YevalStopYdo_restart},
  {"do-stack-frames", CVAR, &YevalStopYdo_stack_frames},
  {"load-file", CVAR, &YevalStopYload_file},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"parse-in", "parse-in"},
  {"backtrace", "backtrace"},
  {"frame", "frame"},
  {"auto-eval", "auto-eval"},
  {"top", "top"},
  {"g2c-eval", "g2c-eval"},
  {"load", "load"},
  {"read-file", "read-file"},
  {"eval", "eval"},
  {"frame-var", "frame-var"},
  {"save-image", "save-image"},
  {"bt", "bt"},
  {"do-stack-frames", "do-stack-frames"},
  {"load-file", "load-file"},
  {"esctst", "esctst"},
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
